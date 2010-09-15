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

#include "aknlayoutscalable_elaf_phl_apps_qhd_lsc_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch[]; }

namespace AknLayoutScalable_Elaf_phl_apps_qhd_lsc_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x0000eaa2 };

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
0x0454,	// (0x0000eef6) Screen

0x0460,	// (0x0000ef02) application_window

0x049c,	// (0x0000ef3e) area_bottom_pane_ParamLimits

0x049c,	// (0x0000ef3e) area_bottom_pane

0x04d5,	// (0x0000ef77) area_top_pane_ParamLimits

0x04d5,	// (0x0000ef77) area_top_pane

0x912e,	// (0x00017bd0) call_video_uplink_pane_ParamLimits

0x912e,	// (0x00017bd0) call_video_uplink_pane

0x0563,	// (0x0000f005) main_pane_ParamLimits

0x0563,	// (0x0000f005) main_pane

0xbaa3,	// (0x0001a545) context_pane

0x338a,	// (0x00011e2c) navi_pane

0x33bc,	// (0x00011e5e) popup_cale_events_window_ParamLimits

0x33bc,	// (0x00011e5e) popup_cale_events_window

0xbab6,	// (0x0001a558) popup_mup_playback_window

0x33d4,	// (0x00011e76) signal_pane

0x98d7,	// (0x00018379) main_browser_pane

0x9b1c,	// (0x000185be) main_burst_pane

0x30ea,	// (0x00011b8c) main_calc_pane

0xba43,	// (0x0001a4e5) main_cale_day_pane

0x0a58,	// (0x0000f4fa) main_cale_month_pane

0xba43,	// (0x0001a4e5) main_cale_week_pane

0x9b1c,	// (0x000185be) main_call_pane

0x956d,	// (0x0001800f) main_call_poc_pane

0x9b1c,	// (0x000185be) main_camera_pane

0x9b1c,	// (0x000185be) main_chi_dic_pane

0xa3a4,	// (0x00018e46) main_clock_pane

0x956d,	// (0x0001800f) main_fmradio_pane

0x9b1c,	// (0x000185be) main_graph_messa_pane

0x956d,	// (0x0001800f) main_help_pane

0x98d7,	// (0x00018379) main_im_pane

0x97c8,	// (0x0001826a) main_image_pane_ParamLimits

0x97c8,	// (0x0001826a) main_image_pane

0x956d,	// (0x0001800f) main_location2_pane

0x9b1c,	// (0x000185be) main_location_pane

0x97c8,	// (0x0001826a) main_messa_pane

0x956d,	// (0x0001800f) main_mp2_pane

0x9b1c,	// (0x000185be) main_mp_pane

0x956d,	// (0x0001800f) main_msg_pane

0x956d,	// (0x0001800f) main_mup_eq_pane

0x956d,	// (0x0001800f) main_mup_pane

0x98d7,	// (0x00018379) main_notes_pane

0x956d,	// (0x0001800f) main_pec_pane

0x956d,	// (0x0001800f) main_phob_pane

0x956d,	// (0x0001800f) main_pinb_pane

0x956d,	// (0x0001800f) main_postcard_pane

0x956d,	// (0x0001800f) main_qdial_pane

0x9b1c,	// (0x000185be) main_skin_pane

0x956d,	// (0x0001800f) main_smil2_pane

0x9b1c,	// (0x000185be) main_smil_pane

0x9b1c,	// (0x000185be) main_video_pane

0x9b1c,	// (0x000185be) main_video_tele_pane

0x97c8,	// (0x0001826a) main_viewer_pane_ParamLimits

0x97c8,	// (0x0001826a) main_viewer_pane

0x9b1c,	// (0x000185be) main_vorec_pane

0x313e,	// (0x00011be0) popup_blid_sat_info_window_ParamLimits

0x313e,	// (0x00011be0) popup_blid_sat_info_window

0x3196,	// (0x00011c38) popup_dyc_status_message_window_ParamLimits

0x3196,	// (0x00011c38) popup_dyc_status_message_window

0x31b0,	// (0x00011c52) popup_grid_large_graphic_window_ParamLimits

0x31b0,	// (0x00011c52) popup_grid_large_graphic_window

0x326c,	// (0x00011d0e) popup_loc_request_window_ParamLimits

0x326c,	// (0x00011d0e) popup_loc_request_window

0x3362,	// (0x00011e04) popup_wml_address_window_ParamLimits

0x3362,	// (0x00011e04) popup_wml_address_window

0x2f24,	// (0x000119c6) call_muted_g1

0x2b98,	// (0x0001163a) popup_call_audio_conf_window_ParamLimits

0x2b98,	// (0x0001163a) popup_call_audio_conf_window

0x2f38,	// (0x000119da) popup_call_audio_first_window_ParamLimits

0x2f38,	// (0x000119da) popup_call_audio_first_window

0x2fae,	// (0x00011a50) popup_call_audio_in_window_ParamLimits

0x2fae,	// (0x00011a50) popup_call_audio_in_window

0x2fea,	// (0x00011a8c) popup_call_audio_out_window_ParamLimits

0x2fea,	// (0x00011a8c) popup_call_audio_out_window

0x3024,	// (0x00011ac6) popup_call_audio_second_window_ParamLimits

0x3024,	// (0x00011ac6) popup_call_audio_second_window

0x307a,	// (0x00011b1c) popup_call_audio_wait_window_ParamLimits

0x307a,	// (0x00011b1c) popup_call_audio_wait_window

0x30af,	// (0x00011b51) popup_number_entry_window_ParamLimits

0x30af,	// (0x00011b51) popup_number_entry_window

0x915a,	// (0x00017bfc) bg_popup_call_pane_cp05_ParamLimits

0x915a,	// (0x00017bfc) bg_popup_call_pane_cp05

0x917a,	// (0x00017c1c) popup_number_entry_window_t1

0x918d,	// (0x00017c2f) popup_number_entry_window_t2

0x919f,	// (0x00017c41) popup_number_entry_window_t3

0x0003,

0xf045,	// (0x0001dae7) popup_number_entry_window_t

0x91b1,	// (0x00017c53) text_title_cp2

0x91c4,	// (0x00017c66) bg_popup_call_pane_cp_ParamLimits

0x91c4,	// (0x00017c66) bg_popup_call_pane_cp

0x91d2,	// (0x00017c74) call_thumbnail_pane

0x91da,	// (0x00017c7c) popup_call_audio_in_window_g1_ParamLimits

0x91da,	// (0x00017c7c) popup_call_audio_in_window_g1

0x91e6,	// (0x00017c88) popup_call_audio_in_window_g2_ParamLimits

0x91e6,	// (0x00017c88) popup_call_audio_in_window_g2

0x91f2,	// (0x00017c94) popup_call_audio_in_window_g3_ParamLimits

0x91f2,	// (0x00017c94) popup_call_audio_in_window_g3

0x0002,

0xf04e,	// (0x0001daf0) popup_call_audio_in_window_g_ParamLimits

0xf04e,	// (0x0001daf0) popup_call_audio_in_window_g

0x91fe,	// (0x00017ca0) popup_call_audio_in_window_t1_ParamLimits

0x91fe,	// (0x00017ca0) popup_call_audio_in_window_t1

0x921a,	// (0x00017cbc) popup_call_audio_in_window_t2_ParamLimits

0x921a,	// (0x00017cbc) popup_call_audio_in_window_t2

0x9236,	// (0x00017cd8) popup_call_audio_in_window_t3_ParamLimits

0x9236,	// (0x00017cd8) popup_call_audio_in_window_t3

0x0002,

0xf055,	// (0x0001daf7) popup_call_audio_in_window_t_ParamLimits

0xf055,	// (0x0001daf7) popup_call_audio_in_window_t

0x91c4,	// (0x00017c66) bg_popup_call_pane_cp01_ParamLimits

0x91c4,	// (0x00017c66) bg_popup_call_pane_cp01

0x91d2,	// (0x00017c74) call_thumbnail_pane_cp02

0x9249,	// (0x00017ceb) call_type_pane_cp022

0x9251,	// (0x00017cf3) popup_call_audio_out_window_g1_ParamLimits

0x9251,	// (0x00017cf3) popup_call_audio_out_window_g1

0x9263,	// (0x00017d05) popup_call_audio_out_window_g2_ParamLimits

0x9263,	// (0x00017d05) popup_call_audio_out_window_g2

0x926f,	// (0x00017d11) popup_call_audio_out_window_g3_ParamLimits

0x926f,	// (0x00017d11) popup_call_audio_out_window_g3

0x0002,

0xf05c,	// (0x0001dafe) popup_call_audio_out_window_g_ParamLimits

0xf05c,	// (0x0001dafe) popup_call_audio_out_window_g

0x9281,	// (0x00017d23) popup_call_audio_out_window_t1_ParamLimits

0x9281,	// (0x00017d23) popup_call_audio_out_window_t1

0x9299,	// (0x00017d3b) popup_call_audio_out_window_t2_ParamLimits

0x9299,	// (0x00017d3b) popup_call_audio_out_window_t2

0x0001,

0xf063,	// (0x0001db05) popup_call_audio_out_window_t_ParamLimits

0xf063,	// (0x0001db05) popup_call_audio_out_window_t

0x92ae,	// (0x00017d50) bg_popup_call_pane_ParamLimits

0x92ae,	// (0x00017d50) bg_popup_call_pane

0x071e,	// (0x0000f1c0) call_thumbnail_pane_cp_ParamLimits

0x071e,	// (0x0000f1c0) call_thumbnail_pane_cp

0x9332,	// (0x00017dd4) call_type_pane_cp01_ParamLimits

0x9332,	// (0x00017dd4) call_type_pane_cp01

0x9376,	// (0x00017e18) popup_call_audio_first_window_g1_ParamLimits

0x9376,	// (0x00017e18) popup_call_audio_first_window_g1

0x93c2,	// (0x00017e64) popup_call_audio_first_window_g2_ParamLimits

0x93c2,	// (0x00017e64) popup_call_audio_first_window_g2

0x0001,

0xf068,	// (0x0001db0a) popup_call_audio_first_window_g_ParamLimits

0xf068,	// (0x0001db0a) popup_call_audio_first_window_g

0x9406,	// (0x00017ea8) popup_call_audio_first_window_t1_ParamLimits

0x9406,	// (0x00017ea8) popup_call_audio_first_window_t1

0x94b2,	// (0x00017f54) popup_call_audio_first_window_t4_ParamLimits

0x94b2,	// (0x00017f54) popup_call_audio_first_window_t4

0x953e,	// (0x00017fe0) popup_call_audio_first_window_t5_ParamLimits

0x953e,	// (0x00017fe0) popup_call_audio_first_window_t5

0x0002,

0xf06d,	// (0x0001db0f) popup_call_audio_first_window_t_ParamLimits

0xf06d,	// (0x0001db0f) popup_call_audio_first_window_t

0x956d,	// (0x0001800f) bg_popup_call_pane_cp02

0x9577,	// (0x00018019) call_type_pane_cp023

0x957f,	// (0x00018021) popup_call_audio_wait_window_g1

0x9587,	// (0x00018029) popup_call_audio_wait_window_g2

0x0001,

0xf074,	// (0x0001db16) popup_call_audio_wait_window_g

0x958f,	// (0x00018031) popup_call_audio_wait_window_t3

0x959d,	// (0x0001803f) bg_popup_call_pane_cp03_ParamLimits

0x959d,	// (0x0001803f) bg_popup_call_pane_cp03

0x95fd,	// (0x0001809f) call_thumbnail_pane_cp011_ParamLimits

0x95fd,	// (0x0001809f) call_thumbnail_pane_cp011

0x9609,	// (0x000180ab) call_type_pane_cp034_ParamLimits

0x9609,	// (0x000180ab) call_type_pane_cp034

0x9645,	// (0x000180e7) popup_call_audio_second_window_g1_ParamLimits

0x9645,	// (0x000180e7) popup_call_audio_second_window_g1

0x9681,	// (0x00018123) popup_call_audio_second_window_g2_ParamLimits

0x9681,	// (0x00018123) popup_call_audio_second_window_g2

0x0001,

0xf079,	// (0x0001db1b) popup_call_audio_second_window_g_ParamLimits

0xf079,	// (0x0001db1b) popup_call_audio_second_window_g

0x96bd,	// (0x0001815f) popup_call_audio_second_window_t1_ParamLimits

0x96bd,	// (0x0001815f) popup_call_audio_second_window_t1

0x973e,	// (0x000181e0) popup_call_audio_second_window_t2_ParamLimits

0x973e,	// (0x000181e0) popup_call_audio_second_window_t2

0x9774,	// (0x00018216) popup_call_audio_second_window_t3_ParamLimits

0x9774,	// (0x00018216) popup_call_audio_second_window_t3

0x0002,

0xf07e,	// (0x0001db20) popup_call_audio_second_window_t_ParamLimits

0xf07e,	// (0x0001db20) popup_call_audio_second_window_t

0x956d,	// (0x0001800f) bg_popup_call_pane_cp04

0x97aa,	// (0x0001824c) list_conf_pane

0x97b2,	// (0x00018254) popup_call_audio_conf_window_t1

0x97c0,	// (0x00018262) call_thumbnail_pane_g1

0x97c8,	// (0x0001826a) bg_pinb_pane_ParamLimits

0x97c8,	// (0x0001826a) bg_pinb_pane

0x97d6,	// (0x00018278) find_pinb_pane

0x97c8,	// (0x0001826a) listscroll_pinb_pane_ParamLimits

0x97c8,	// (0x0001826a) listscroll_pinb_pane

0x97e0,	// (0x00018282) pinb_bg_pane_g1

0x97e0,	// (0x00018282) pinb_bg_pane_g2

0x97e0,	// (0x00018282) pinb_bg_pane_g3

0x97e0,	// (0x00018282) pinb_bg_pane_g4

0x97e0,	// (0x00018282) pinb_bg_pane_g5

0x97e0,	// (0x00018282) pinb_bg_pane_g6

0x97e0,	// (0x00018282) pinb_bg_pane_g7

0x97e0,	// (0x00018282) pinb_bg_pane_g8

0x97e0,	// (0x00018282) pinb_bg_pane_g9

0x97e0,	// (0x00018282) pinb_bg_pane_g10

0x0009,

0xf085,	// (0x0001db27) pinb_bg_pane_g

0x90dd,	// (0x00017b7f) grid_pinb_pane

0x90dd,	// (0x00017b7f) list_pinb_pane

0x914c,	// (0x00017bee) scroll_pane_cp01_ParamLimits

0x914c,	// (0x00017bee) scroll_pane_cp01

0x97ea,	// (0x0001828c) find_pinb_pane_g1_ParamLimits

0x97ea,	// (0x0001828c) find_pinb_pane_g1

0x9802,	// (0x000182a4) find_pinb_pane_t1

0x9814,	// (0x000182b6) find_pinb_pane_t2

0x0001,

0xf09f,	// (0x0001db41) find_pinb_pane_t

0x9829,	// (0x000182cb) input_focus_pane_cp01_ParamLimits

0x9829,	// (0x000182cb) input_focus_pane_cp01

0x9835,	// (0x000182d7) cell_pinb_pane_ParamLimits

0x9835,	// (0x000182d7) cell_pinb_pane

0x9843,	// (0x000182e5) cell_pinb_pane_g1_ParamLimits

0x9843,	// (0x000182e5) cell_pinb_pane_g1

0x9851,	// (0x000182f3) cell_pinb_pane_g2_ParamLimits

0x9851,	// (0x000182f3) cell_pinb_pane_g2

0x9851,	// (0x000182f3) cell_pinb_pane_g3_ParamLimits

0x9851,	// (0x000182f3) cell_pinb_pane_g3

0x0002,

0xf0a4,	// (0x0001db46) cell_pinb_pane_g_ParamLimits

0xf0a4,	// (0x0001db46) cell_pinb_pane_g

0x956d,	// (0x0001800f) grid_highlight_pane_cp01

0x9835,	// (0x000182d7) list_pinb_item_pane_ParamLimits

0x9835,	// (0x000182d7) list_pinb_item_pane

0x90dd,	// (0x00017b7f) list_highlight_pane_cp02

0x985f,	// (0x00018301) list_pinb_item_pane_g1_ParamLimits

0x985f,	// (0x00018301) list_pinb_item_pane_g1

0x9851,	// (0x000182f3) list_pinb_item_pane_g2_ParamLimits

0x9851,	// (0x000182f3) list_pinb_item_pane_g2

0x9843,	// (0x000182e5) list_pinb_item_pane_g3_ParamLimits

0x9843,	// (0x000182e5) list_pinb_item_pane_g3

0x9851,	// (0x000182f3) list_pinb_item_pane_g4_ParamLimits

0x9851,	// (0x000182f3) list_pinb_item_pane_g4

0x0003,

0xf0ab,	// (0x0001db4d) list_pinb_item_pane_g_ParamLimits

0xf0ab,	// (0x0001db4d) list_pinb_item_pane_g

0x986d,	// (0x0001830f) list_pinb_item_pane_t1_ParamLimits

0x986d,	// (0x0001830f) list_pinb_item_pane_t1

0x0760,	// (0x0000f202) calc_display_pane

0x0785,	// (0x0000f227) calc_paper_pane

0x07a8,	// (0x0000f24a) grid_calc_pane

0x956d,	// (0x0001800f) bg_list_pane_cp01

0x07d6,	// (0x0000f278) clock_g1

0x07de,	// (0x0000f280) clock_g2

0x0001,

0xf0b4,	// (0x0001db56) clock_g

0x07e6,	// (0x0000f288) clock_t1_ParamLimits

0x07e6,	// (0x0000f288) clock_t1

0x07fb,	// (0x0000f29d) clock_t2_ParamLimits

0x07fb,	// (0x0000f29d) clock_t2

0x080d,	// (0x0000f2af) clock_t3_ParamLimits

0x080d,	// (0x0000f2af) clock_t3

0x081f,	// (0x0000f2c1) clock_t4_ParamLimits

0x081f,	// (0x0000f2c1) clock_t4

0x0831,	// (0x0000f2d3) clock_t5_ParamLimits

0x0831,	// (0x0000f2d3) clock_t5

0x0846,	// (0x0000f2e8) clock_t6_ParamLimits

0x0846,	// (0x0000f2e8) clock_t6

0x0858,	// (0x0000f2fa) clock_t7_ParamLimits

0x0858,	// (0x0000f2fa) clock_t7

0x086a,	// (0x0000f30c) clock_t8_ParamLimits

0x086a,	// (0x0000f30c) clock_t8

0x087e,	// (0x0000f320) clock_t9_ParamLimits

0x087e,	// (0x0000f320) clock_t9

0x0008,

0xf0b9,	// (0x0001db5b) clock_t_ParamLimits

0xf0b9,	// (0x0001db5b) clock_t

0x9889,	// (0x0001832b) popup_clock_analogue_window_cp02

0x9889,	// (0x0001832b) popup_clock_digital_window_cp01

0x956d,	// (0x0001800f) listscroll_help_pane

0x956d,	// (0x0001800f) phob_pre_status_pane

0x9891,	// (0x00018333) grid_qdial_pane

0x97c8,	// (0x0001826a) listscroll_mce_pane

0x97c8,	// (0x0001826a) bg_notes_pane

0x989b,	// (0x0001833d) list_notes_pane

0x0892,	// (0x0000f334) scroll_pane_cp06

0x98a9,	// (0x0001834b) bg_calc_paper_pane

0x98bd,	// (0x0001835f) list_calc_pane

0x98d7,	// (0x00018379) bg_calc_display_pane

0x08a6,	// (0x0000f348) calc_display_pane_t1

0x08bb,	// (0x0000f35d) calc_display_pane_t2

0x98e3,	// (0x00018385) calc_display_pane_t3

0x0002,

0xf0cc,	// (0x0001db6e) calc_display_pane_t

0x08d0,	// (0x0000f372) cell_calc_pane_ParamLimits

0x08d0,	// (0x0000f372) cell_calc_pane

0x98f5,	// (0x00018397) bg_calc_paper_pane_g1

0x9901,	// (0x000183a3) bg_calc_paper_pane_g2

0x990d,	// (0x000183af) bg_calc_paper_pane_g3

0x9919,	// (0x000183bb) bg_calc_paper_pane_g4

0x9925,	// (0x000183c7) bg_calc_paper_pane_g5

0x0905,	// (0x0000f3a7) bg_calc_paper_pane_g6

0x0914,	// (0x0000f3b6) bg_calc_paper_pane_g7

0x0923,	// (0x0000f3c5) bg_calc_paper_pane_g8

0x0007,

0xf0d3,	// (0x0001db75) bg_calc_paper_pane_g

0x0936,	// (0x0000f3d8) calc_bg_paper_pane_g9

0x0949,	// (0x0000f3eb) list_calc_item_pane_ParamLimits

0x0949,	// (0x0000f3eb) list_calc_item_pane

0x9931,	// (0x000183d3) list_calc_item_pane_g1

0x993e,	// (0x000183e0) list_calc_item_pane_t1_ParamLimits

0x993e,	// (0x000183e0) list_calc_item_pane_t1

0x0961,	// (0x0000f403) list_calc_item_pane_t2_ParamLimits

0x0961,	// (0x0000f403) list_calc_item_pane_t2

0x0001,

0xf0e4,	// (0x0001db86) list_calc_item_pane_t_ParamLimits

0xf0e4,	// (0x0001db86) list_calc_item_pane_t

0x97e0,	// (0x00018282) cell_calc_pane_g1

0x9950,	// (0x000183f2) grid_highlight_pane_cp02

0x9972,	// (0x00018414) bg_calc_display_pane_g1

0x0993,	// (0x0000f435) bg_calc_display_pane_g2

0x099d,	// (0x0000f43f) bg_calc_display_pane_g3

0x0002,

0xf0ee,	// (0x0001db90) bg_calc_display_pane_g

0x09a6,	// (0x0000f448) cell_qdial_pane_ParamLimits

0x09a6,	// (0x0000f448) cell_qdial_pane

0x09ba,	// (0x0000f45c) cell_qdial_pane_g1_ParamLimits

0x09ba,	// (0x0000f45c) cell_qdial_pane_g1

0x09d0,	// (0x0000f472) cell_qdial_pane_g2_ParamLimits

0x09d0,	// (0x0000f472) cell_qdial_pane_g2

0x997b,	// (0x0001841d) cell_qdial_pane_g3_ParamLimits

0x997b,	// (0x0001841d) cell_qdial_pane_g3

0x0003,

0xf0f5,	// (0x0001db97) cell_qdial_pane_g_ParamLimits

0xf0f5,	// (0x0001db97) cell_qdial_pane_g

0x09f7,	// (0x0000f499) cell_qdial_pane_t1_ParamLimits

0x09f7,	// (0x0000f499) cell_qdial_pane_t1

0x0a0f,	// (0x0000f4b1) cell_qdial_pane_t2_ParamLimits

0x0a0f,	// (0x0000f4b1) cell_qdial_pane_t2

0x0a22,	// (0x0000f4c4) cell_qdial_pane_t3_ParamLimits

0x0a22,	// (0x0000f4c4) cell_qdial_pane_t3

0x0002,

0xf0fe,	// (0x0001dba0) cell_qdial_pane_t_ParamLimits

0xf0fe,	// (0x0001dba0) cell_qdial_pane_t

0x956d,	// (0x0001800f) grid_highlight_pane_cp04

0x9987,	// (0x00018429) thumbnail_qdial_pane_ParamLimits

0x9987,	// (0x00018429) thumbnail_qdial_pane

0x99e3,	// (0x00018485) list_help_pane

0x99ec,	// (0x0001848e) scroll_pane_cp02

0x99f5,	// (0x00018497) help_list_pane_t1_ParamLimits

0x99f5,	// (0x00018497) help_list_pane_t1

0x9a13,	// (0x000184b5) bg_notes_pane_g2

0x9a1b,	// (0x000184bd) bg_notes_pane_g3

0x9a23,	// (0x000184c5) notes_bg_pane_g1

0x9a2b,	// (0x000184cd) notes_bg_pane_g4

0x9a33,	// (0x000184d5) notes_bg_pane_g5

0x9a3b,	// (0x000184dd) notes_bg_pane_g6

0x9a43,	// (0x000184e5) notes_bg_pane_g7

0x9a4b,	// (0x000184ed) notes_bg_pane_g8

0x9a53,	// (0x000184f5) notes_bg_pane_g9

0x0006,

0xf11c,	// (0x0001dbbe) notes_bg_pane_g

0x0a35,	// (0x0000f4d7) list_notes_text_pane_ParamLimits

0x0a35,	// (0x0000f4d7) list_notes_text_pane

0x9a5b,	// (0x000184fd) list_notes_text_pane_g1

0x0a4a,	// (0x0000f4ec) list_notes_text_pane_t1

0x0a58,	// (0x0000f4fa) listscroll_cale_week_pane

0x0a84,	// (0x0000f526) bg_cale_heading_pane

0x9a7e,	// (0x00018520) bg_cale_pane_cp01

0x0a9c,	// (0x0000f53e) cale_week_corner_pane

0x0abb,	// (0x0000f55d) cale_week_day_heading_pane

0x0ad8,	// (0x0000f57a) cale_week_scroll_pane_g1

0x0aeb,	// (0x0000f58d) cale_week_scroll_pane_g2

0x0b03,	// (0x0000f5a5) cale_week_scroll_pane_g3

0x0b1b,	// (0x0000f5bd) cale_week_scroll_pane_g4

0x0b33,	// (0x0000f5d5) cale_week_scroll_pane_g5

0x0b53,	// (0x0000f5f5) cale_week_scroll_pane_g6

0x0b73,	// (0x0000f615) cale_week_scroll_pane_g7

0x0b93,	// (0x0000f635) cale_week_scroll_pane_g8

0x0bb7,	// (0x0000f659) cale_week_scroll_pane_g9

0x0bcf,	// (0x0000f671) cale_week_scroll_pane_g10

0x0be7,	// (0x0000f689) cale_week_scroll_pane_g11

0x0bff,	// (0x0000f6a1) cale_week_scroll_pane_g12

0x0c17,	// (0x0000f6b9) cale_week_scroll_pane_g13

0x0c17,	// (0x0000f6b9) cale_week_scroll_pane_g14

0x0c17,	// (0x0000f6b9) cale_week_scroll_pane_g15

0x000f,

0xf12b,	// (0x0001dbcd) cale_week_scroll_pane_g

0x0c53,	// (0x0000f6f5) cale_week_time_pane

0x0c77,	// (0x0000f719) grid_cale_week_pane

0x9aad,	// (0x0001854f) scroll_pane_cp08

0x0c9d,	// (0x0000f73f) cell_cale_week_pane_ParamLimits

0x0c9d,	// (0x0000f73f) cell_cale_week_pane

0x0d2b,	// (0x0000f7cd) cale_week_day_heading_pane_t1

0x0d55,	// (0x0000f7f7) cale_week_day_heading_pane_t2

0x0d84,	// (0x0000f826) cale_week_day_heading_pane_t3

0x0db3,	// (0x0000f855) cale_week_day_heading_pane_t4

0x0de2,	// (0x0000f884) cale_week_day_heading_pane_t5

0x0e19,	// (0x0000f8bb) cale_week_day_heading_pane_t6

0x0e50,	// (0x0000f8f2) cale_week_day_heading_pane_t7

0x0006,

0xf14c,	// (0x0001dbee) cale_week_day_heading_pane_t

0x9aca,	// (0x0001856c) bg_cale_side_pane

0x0e7a,	// (0x0000f91c) cale_week_time_pane_t1

0x0e94,	// (0x0000f936) cale_week_time_pane_t2

0x0eae,	// (0x0000f950) cale_week_time_pane_t3

0x0ec8,	// (0x0000f96a) cale_week_time_pane_t4

0x0ee2,	// (0x0000f984) cale_week_time_pane_t5

0x0efc,	// (0x0000f99e) cale_week_time_pane_t6

0x0f16,	// (0x0000f9b8) cale_week_time_pane_t7

0x0f30,	// (0x0000f9d2) cale_week_time_pane_t8

0x0007,

0xf15b,	// (0x0001dbfd) cale_week_time_pane_t

0x0f4a,	// (0x0000f9ec) cell_cale_week_pane_g2

0x0f69,	// (0x0000fa0b) cell_cale_week_pane_g3_ParamLimits

0x0f69,	// (0x0000fa0b) cell_cale_week_pane_g3

0x9ad8,	// (0x0001857a) grid_highlight_pane_cp07

0x9ae0,	// (0x00018582) listscroll_gms_pane

0x9aea,	// (0x0001858c) grid_gms_pane

0x9af3,	// (0x00018595) listscroll_gms_pane_g1

0x9afb,	// (0x0001859d) listscroll_gms_pane_g2

0x0001,

0xf16c,	// (0x0001dc0e) listscroll_gms_pane_g

0x0f81,	// (0x0000fa23) scroll_pane_cp010

0x0f8c,	// (0x0000fa2e) cell_gms_pane_ParamLimits

0x0f8c,	// (0x0000fa2e) cell_gms_pane

0x0f9f,	// (0x0000fa41) cell_gms_pane_g1

0x9b03,	// (0x000185a5) cell_gms_pane_g2

0x9a5b,	// (0x000184fd) cell_gms_pane_g3

0x9b0b,	// (0x000185ad) cell_gms_pane_g4

0x0003,

0xf171,	// (0x0001dc13) cell_gms_pane_g

0x9b14,	// (0x000185b6) grid_highlight_pane_cp09

0x2eac,	// (0x0001194e) phob_pre_status_pane_g1

0x2eb4,	// (0x00011956) phob_pre_status_pane_g2

0x2ebc,	// (0x0001195e) phob_pre_status_pane_g3

0x2ec4,	// (0x00011966) phob_pre_status_pane_g4

0x0004,

0xf535,	// (0x0001dfd7) phob_pre_status_pane_g

0x2ed4,	// (0x00011976) phob_pre_status_pane_t1

0x2ee2,	// (0x00011984) phob_pre_status_pane_t2

0x2ef2,	// (0x00011994) phob_pre_status_pane_t3

0x0002,

0xf540,	// (0x0001dfe2) phob_pre_status_pane_t

0x9b1c,	// (0x000185be) bg_list_pane_cp05

0x0faf,	// (0x0000fa51) grid_vorec_pane

0x0fb7,	// (0x0000fa59) vorec_t1

0x0fc5,	// (0x0000fa67) vorec_t2

0x0fd3,	// (0x0000fa75) vorec_t3

0x0fe1,	// (0x0000fa83) vorec_t4

0xeb12,	// (0x0001d5b4) vorec_t5

0x8439,	// (0x00016edb) vorec_t6

0x0004,

0xf17a,	// (0x0001dc1c) vorec_t

0x8447,	// (0x00016ee9) wait_bar_pane_cp01

0x0ffd,	// (0x0000fa9f) cell_vorec_pane_ParamLimits

0x0ffd,	// (0x0000fa9f) cell_vorec_pane

0x9b24,	// (0x000185c6) cell_vorec_pane_g1

0x956d,	// (0x0001800f) grid_highlight_pane_cp05

0x914c,	// (0x00017bee) cams_zoom_pane

0x914c,	// (0x00017bee) image_vga_pane

0x9843,	// (0x000182e5) main_camera_pane_g1

0x9843,	// (0x000182e5) main_camera_pane_g2

0x9843,	// (0x000182e5) main_camera_pane_g3

0x9843,	// (0x000182e5) main_camera_pane_g4

0x9843,	// (0x000182e5) main_camera_pane_g5

0x9843,	// (0x000182e5) main_camera_pane_g6

0x9843,	// (0x000182e5) main_camera_pane_g7

0x0007,

0xf185,	// (0x0001dc27) main_camera_pane_g

0x9b2e,	// (0x000185d0) main_camera_pane_t1

0x9b2e,	// (0x000185d0) main_camera_pane_t2

0x0001,

0xf196,	// (0x0001dc38) main_camera_pane_t

0x1024,	// (0x0000fac6) cams_zoom_pane_cp_ParamLimits

0x1024,	// (0x0000fac6) cams_zoom_pane_cp

0x1058,	// (0x0000fafa) image_cif_pane_ParamLimits

0x1058,	// (0x0000fafa) image_cif_pane

0x90dd,	// (0x00017b7f) image_subqcif_pane

0x106a,	// (0x0000fb0c) main_video_pane_g1_ParamLimits

0x106a,	// (0x0000fb0c) main_video_pane_g1

0x1098,	// (0x0000fb3a) main_video_pane_g2_ParamLimits

0x1098,	// (0x0000fb3a) main_video_pane_g2

0x10d2,	// (0x0000fb74) main_video_pane_g3_ParamLimits

0x10d2,	// (0x0000fb74) main_video_pane_g3

0x10d2,	// (0x0000fb74) main_video_pane_g4_ParamLimits

0x10d2,	// (0x0000fb74) main_video_pane_g4

0x1106,	// (0x0000fba8) main_video_pane_g5_ParamLimits

0x1106,	// (0x0000fba8) main_video_pane_g5

0x9b42,	// (0x000185e4) main_video_pane_g6_ParamLimits

0x9b42,	// (0x000185e4) main_video_pane_g6

0x0006,

0xf19b,	// (0x0001dc3d) main_video_pane_g_ParamLimits

0xf19b,	// (0x0001dc3d) main_video_pane_g

0x1122,	// (0x0000fbc4) main_video_pane_t1_ParamLimits

0x1122,	// (0x0000fbc4) main_video_pane_t1

0x9b5c,	// (0x000185fe) cams_zoom_pane_g1

0x9b5c,	// (0x000185fe) cams_zoom_pane_g2

0x9b5c,	// (0x000185fe) cams_zoom_pane_g3

0x9b5c,	// (0x000185fe) cams_zoom_pane_g4

0x0003,

0xf1aa,	// (0x0001dc4c) cams_zoom_pane_g

0x117a,	// (0x0000fc1c) grid_cams_pane

0x1194,	// (0x0000fc36) linegrid_cams_pane

0x11a8,	// (0x0000fc4a) cell_cams_pane_ParamLimits

0x11a8,	// (0x0000fc4a) cell_cams_pane

0x9b66,	// (0x00018608) cams_burst_image_pane

0x9b6e,	// (0x00018610) cell_cams_pane_g1

0x956d,	// (0x0001800f) grid_highlight_pane_cp03

0x97e0,	// (0x00018282) mp_bg_pane_g1

0x90dd,	// (0x00017b7f) bg_list_pane_cp03

0x90dd,	// (0x00017b7f) bg_mp_pane

0x90dd,	// (0x00017b7f) grid_mp_pane

0x9b5c,	// (0x000185fe) media_player_g1

0xa0c5,	// (0x00018b67) media_player_t1

0xa0c5,	// (0x00018b67) media_player_t2

0xa0c5,	// (0x00018b67) media_player_t3

0xa0c5,	// (0x00018b67) media_player_t4

0xa0c5,	// (0x00018b67) media_player_t5

0xa0c5,	// (0x00018b67) media_player_t6

0xa0c5,	// (0x00018b67) media_player_t7

0x0006,

0xf51f,	// (0x0001dfc1) media_player_t

0x90dd,	// (0x00017b7f) wait_bar_pane_cp02

0xf504,	// (0x0001dfa6) main_usb_pane_t

0xa3a4,	// (0x00018e46) cell_mp_pane

0x97e0,	// (0x00018282) cell_mp_pane_g1

0x956d,	// (0x0001800f) grid_highlight_pane_cp06

0x9b76,	// (0x00018618) grid_skin_colour_pane

0x9b7e,	// (0x00018620) list_highlight_pane_cp03

0x11c8,	// (0x0000fc6a) skin_g1

0x9b86,	// (0x00018628) skin_t1

0x9b95,	// (0x00018637) skin_t2

0x0001,

0xf1d8,	// (0x0001dc7a) skin_t

0x11d0,	// (0x0000fc72) cell_skin_colour_pane_ParamLimits

0x11d0,	// (0x0000fc72) cell_skin_colour_pane

0x9ba3,	// (0x00018645) cell_skin_colour_pane_g1

0x1249,	// (0x0000fceb) call_video_g1_ParamLimits

0x1249,	// (0x0000fceb) call_video_g1

0x1265,	// (0x0000fd07) call_video_g2_ParamLimits

0x1265,	// (0x0000fd07) call_video_g2

0x0001,

0xf1dd,	// (0x0001dc7f) call_video_g_ParamLimits

0xf1dd,	// (0x0001dc7f) call_video_g

0x12b7,	// (0x0000fd59) call_video_uplink_pane_cp1_ParamLimits

0x12b7,	// (0x0000fd59) call_video_uplink_pane_cp1

0x9bb5,	// (0x00018657) call_video_uplink_pane_cp2

0x1356,	// (0x0000fdf8) video_down_crop_pane_ParamLimits

0x1356,	// (0x0000fdf8) video_down_crop_pane

0x144d,	// (0x0000feef) video_down_pane_ParamLimits

0x144d,	// (0x0000feef) video_down_pane

0x9bbd,	// (0x0001865f) video_down_subqcif_pane_ParamLimits

0x9bbd,	// (0x0001865f) video_down_subqcif_pane

0x9bd5,	// (0x00018677) video_down_subqcif_pane_cp_ParamLimits

0x9bd5,	// (0x00018677) video_down_subqcif_pane_cp

0x9bfb,	// (0x0001869d) im_reading_pane_ParamLimits

0x9bfb,	// (0x0001869d) im_reading_pane

0x155d,	// (0x0000ffff) im_writing_pane_ParamLimits

0x155d,	// (0x0000ffff) im_writing_pane

0x1573,	// (0x00010015) im_reading_pane_t1

0x9c15,	// (0x000186b7) list_im_pane

0x9c26,	// (0x000186c8) scroll_pane_cp07

0x15ac,	// (0x0001004e) im_writing_pane_t1_ParamLimits

0x15ac,	// (0x0001004e) im_writing_pane_t1

0x9c3f,	// (0x000186e1) im_writing_pane_t2_ParamLimits

0x9c3f,	// (0x000186e1) im_writing_pane_t2

0x0001,

0xf1e7,	// (0x0001dc89) im_writing_pane_t_ParamLimits

0xf1e7,	// (0x0001dc89) im_writing_pane_t

0x956d,	// (0x0001800f) input_focus_pane_cp04

0x956d,	// (0x0001800f) input_focus_pane_cp05

0x15c1,	// (0x00010063) list_im_single_pane_ParamLimits

0x15c1,	// (0x00010063) list_im_single_pane

0x15d5,	// (0x00010077) list_single_im_pane_t1

0x9b1c,	// (0x000185be) blid_accuracy_pane

0x9b1c,	// (0x000185be) blid_compass_pane

0xb9fb,	// (0x0001a49d) main_location_t1

0xb9fb,	// (0x0001a49d) main_location_t2

0xb9fb,	// (0x0001a49d) main_location_t3

0x0002,

0xf52e,	// (0x0001dfd0) main_location_t

0x956d,	// (0x0001800f) aid_levels_location

0x97e0,	// (0x00018282) blid_accuracy_pane_g1

0x97e0,	// (0x00018282) blid_accuracy_pane_g2

0x0001,

0xf236,	// (0x0001dcd8) blid_accuracy_pane_g

0x9c87,	// (0x00018729) wml_content_pane

0x9cc5,	// (0x00018767) wml_button_pane_ParamLimits

0x9cc5,	// (0x00018767) wml_button_pane

0x15e4,	// (0x00010086) wml_list_single_large_pane_ParamLimits

0x15e4,	// (0x00010086) wml_list_single_large_pane

0x15f9,	// (0x0001009b) wml_list_single_medium_pane_ParamLimits

0x15f9,	// (0x0001009b) wml_list_single_medium_pane

0x160f,	// (0x000100b1) wml_list_single_small_pane_ParamLimits

0x160f,	// (0x000100b1) wml_list_single_small_pane

0x9cd9,	// (0x0001877b) wml_selection_box_pane_ParamLimits

0x9cd9,	// (0x0001877b) wml_selection_box_pane

0x9cec,	// (0x0001878e) wml_list_single_pane_t1

0x9cfb,	// (0x0001879d) wml_list_single_medium_pane_t1

0x9d0a,	// (0x000187ac) wml_list_single_large_pane_t1

0x9d19,	// (0x000187bb) input_focus_pane_cp02_ParamLimits

0x9d19,	// (0x000187bb) input_focus_pane_cp02

0x9d2c,	// (0x000187ce) wml_selection_box_pane_g1

0x9d35,	// (0x000187d7) wml_selection_box_pane_t1_ParamLimits

0x9d35,	// (0x000187d7) wml_selection_box_pane_t1

0x97c8,	// (0x0001826a) bg_wml_button_pane_ParamLimits

0x97c8,	// (0x0001826a) bg_wml_button_pane

0x9d4d,	// (0x000187ef) wml_button_pane_g1

0x9d55,	// (0x000187f7) wml_button_pane_t1

0x9d4d,	// (0x000187ef) wml_button_bg_pane_g1

0x9d65,	// (0x00018807) wml_button_bg_pane_g2

0x9d6d,	// (0x0001880f) wml_button_bg_pane_g3

0x9d75,	// (0x00018817) wml_button_bg_pane_g4

0x9d7d,	// (0x0001881f) wml_button_bg_pane_g5

0x9d85,	// (0x00018827) wml_button_bg_pane_g6

0x9d8d,	// (0x0001882f) wml_button_bg_pane_g7

0x9d95,	// (0x00018837) wml_button_bg_pane_g8

0x9d9d,	// (0x0001883f) wml_button_bg_pane_g9

0x0008,

0xf1ec,	// (0x0001dc8e) wml_button_bg_pane_g

0x1627,	// (0x000100c9) bg_list_pane_cp02

0x9da5,	// (0x00018847) mce_header_pane_ParamLimits

0x9da5,	// (0x00018847) mce_header_pane

0x9dbb,	// (0x0001885d) mce_icon_pane

0x9dbb,	// (0x0001885d) mce_image_pane

0x9dc4,	// (0x00018866) mce_text_pane_ParamLimits

0x9dc4,	// (0x00018866) mce_text_pane

0x162f,	// (0x000100d1) scroll_pane_cp03

0x9cbd,	// (0x0001875f) scroll_pane_cp04

0x9dd7,	// (0x00018879) scroll_pane_cp05_ParamLimits

0x9dd7,	// (0x00018879) scroll_pane_cp05

0x1639,	// (0x000100db) mce_header_field_pane_ParamLimits

0x1639,	// (0x000100db) mce_header_field_pane

0x1650,	// (0x000100f2) mce_header_field_pane_2_ParamLimits

0x1650,	// (0x000100f2) mce_header_field_pane_2

0x1666,	// (0x00010108) mce_header_field_pane_3

0x166e,	// (0x00010110) list_single_mce_message_pane_ParamLimits

0x166e,	// (0x00010110) list_single_mce_message_pane

0x1683,	// (0x00010125) list_single_mce_smart_pane_ParamLimits

0x1683,	// (0x00010125) list_single_mce_smart_pane

0x9de3,	// (0x00018885) input_focus_pane_cp03

0x9dec,	// (0x0001888e) list_header_data_pane

0x16a3,	// (0x00010145) mce_header_field_pane_t1

0x16b3,	// (0x00010155) list_single_mce_header_pane_ParamLimits

0x16b3,	// (0x00010155) list_single_mce_header_pane

0x9df4,	// (0x00018896) list_single_mce_header_pane_t1

0x9e03,	// (0x000188a5) list_single_mce_message_pane_g1

0x9e0b,	// (0x000188ad) list_single_mce_message_pane_t1

0x16ed,	// (0x0001018f) bg_cale_heading_pane_cp01_ParamLimits

0x16ed,	// (0x0001018f) bg_cale_heading_pane_cp01

0x9e19,	// (0x000188bb) bg_cale_pane_cp02_ParamLimits

0x9e19,	// (0x000188bb) bg_cale_pane_cp02

0x1727,	// (0x000101c9) cale_month_corner_pane

0x1746,	// (0x000101e8) cale_month_day_heading_pane_ParamLimits

0x1746,	// (0x000101e8) cale_month_day_heading_pane

0x1798,	// (0x0001023a) cale_month_pane_g1_ParamLimits

0x1798,	// (0x0001023a) cale_month_pane_g1

0x17c7,	// (0x00010269) cale_month_pane_g2_ParamLimits

0x17c7,	// (0x00010269) cale_month_pane_g2

0x17f7,	// (0x00010299) cale_month_pane_g3_ParamLimits

0x17f7,	// (0x00010299) cale_month_pane_g3

0x1833,	// (0x000102d5) cale_month_pane_g4_ParamLimits

0x1833,	// (0x000102d5) cale_month_pane_g4

0x186f,	// (0x00010311) cale_month_pane_g5_ParamLimits

0x186f,	// (0x00010311) cale_month_pane_g5

0x18b7,	// (0x00010359) cale_month_pane_g6_ParamLimits

0x18b7,	// (0x00010359) cale_month_pane_g6

0x1903,	// (0x000103a5) cale_month_pane_g7_ParamLimits

0x1903,	// (0x000103a5) cale_month_pane_g7

0x1957,	// (0x000103f9) cale_month_pane_g8_ParamLimits

0x1957,	// (0x000103f9) cale_month_pane_g8

0x19ab,	// (0x0001044d) cale_month_pane_g9_ParamLimits

0x19ab,	// (0x0001044d) cale_month_pane_g9

0x19fd,	// (0x0001049f) cale_month_pane_g10_ParamLimits

0x19fd,	// (0x0001049f) cale_month_pane_g10

0x1a4f,	// (0x000104f1) cale_month_pane_g11_ParamLimits

0x1a4f,	// (0x000104f1) cale_month_pane_g11

0x1aa1,	// (0x00010543) cale_month_pane_g12_ParamLimits

0x1aa1,	// (0x00010543) cale_month_pane_g12

0x1af3,	// (0x00010595) cale_month_pane_g13_ParamLimits

0x1af3,	// (0x00010595) cale_month_pane_g13

0x000c,

0xf1ff,	// (0x0001dca1) cale_month_pane_g_ParamLimits

0xf1ff,	// (0x0001dca1) cale_month_pane_g

0x1b45,	// (0x000105e7) cale_month_week_pane

0x1b69,	// (0x0001060b) grid_cale_month_pane_ParamLimits

0x1b69,	// (0x0001060b) grid_cale_month_pane

0x1bb2,	// (0x00010654) cale_month_day_heading_pane_t1

0x1c38,	// (0x000106da) cale_month_day_heading_pane_t2

0x1cb1,	// (0x00010753) cale_month_day_heading_pane_t3

0x1d2a,	// (0x000107cc) cale_month_day_heading_pane_t4

0x1dab,	// (0x0001084d) cale_month_day_heading_pane_t5

0x1e34,	// (0x000108d6) cale_month_day_heading_pane_t6

0x1ebd,	// (0x0001095f) cale_month_day_heading_pane_t7

0x0006,

0xf21a,	// (0x0001dcbc) cale_month_day_heading_pane_t

0x9aca,	// (0x0001856c) bg_cale_side_pane_cp01

0x1f4e,	// (0x000109f0) cale_month_week_pane_t1

0x1f67,	// (0x00010a09) cale_month_week_pane_t2

0x1f80,	// (0x00010a22) cale_month_week_pane_t3

0x1f99,	// (0x00010a3b) cale_month_week_pane_t4

0x1fb2,	// (0x00010a54) cale_month_week_pane_t5

0x1fcb,	// (0x00010a6d) cale_month_week_pane_t6

0x0005,

0xf229,	// (0x0001dccb) cale_month_week_pane_t

0x1fe4,	// (0x00010a86) cell_cale_month_pane_ParamLimits

0x1fe4,	// (0x00010a86) cell_cale_month_pane

0x9e58,	// (0x000188fa) cell_cale_month_pane_g1

0x2112,	// (0x00010bb4) cell_cale_month_pane_t1_ParamLimits

0x2112,	// (0x00010bb4) cell_cale_month_pane_t1

0x9ad8,	// (0x0001857a) grid_highlight_pane_cp08

0x97e0,	// (0x00018282) main_smil_g1

0x213e,	// (0x00010be0) smil_status_pane

0x9e64,	// (0x00018906) smil_text_pane

0xb913,	// (0x0001a3b5) bg_popup_call3_rect_pane_g8

0xb91b,	// (0x0001a3bd) bg_popup_call3_rect_pane_g9

0x0008,

0xf4c2,	// (0x0001df64) bg_popup_call3_rect_pane_g

0xbb18,	// (0x0001a5ba) smil_status_volume_pane_g1

0x9e6e,	// (0x00018910) smil_status_pane_t1

0xbb4b,	// (0x0001a5ed) volume_smil_pane

0x9e85,	// (0x00018927) list_smil_text_pane

0x2151,	// (0x00010bf3) scroll_pane_cp011

0x215c,	// (0x00010bfe) smil_text_list_pane_t1_ParamLimits

0x215c,	// (0x00010bfe) smil_text_list_pane_t1

0x9e8f,	// (0x00018931) aid_volume_smil_ParamLimits

0x9e8f,	// (0x00018931) aid_volume_smil

0x97e0,	// (0x00018282) smil_volume_pane_g1

0x97e0,	// (0x00018282) smil_volume_pane_g2

0x0001,

0xf236,	// (0x0001dcd8) smil_volume_pane_g

0x0a58,	// (0x0000f4fa) listscroll_cale_day_pane

0x9eb1,	// (0x00018953) bg_cale_pane

0x9ec9,	// (0x0001896b) list_cale_pane

0x9eec,	// (0x0001898e) scroll_pane_cp09

0x9efd,	// (0x0001899f) cale_bg_pane_g1

0x9f05,	// (0x000189a7) cale_bg_pane_g2

0x9f0d,	// (0x000189af) cale_bg_pane_g3

0x9f15,	// (0x000189b7) cale_bg_pane_g4

0x9f1d,	// (0x000189bf) cale_bg_pane_g5

0x9f25,	// (0x000189c7) cale_bg_pane_g6

0x9f2d,	// (0x000189cf) cale_bg_pane_g7

0x9f35,	// (0x000189d7) cale_bg_pane_g8

0x9f3d,	// (0x000189df) cale_bg_pane_g9

0x0008,

0xf23b,	// (0x0001dcdd) cale_bg_pane_g

0x2198,	// (0x00010c3a) list_cale_time_pane_ParamLimits

0x2198,	// (0x00010c3a) list_cale_time_pane

0x9f4d,	// (0x000189ef) list_cale_time_pane_g1_ParamLimits

0x9f4d,	// (0x000189ef) list_cale_time_pane_g1

0x9f59,	// (0x000189fb) list_cale_time_pane_g2_ParamLimits

0x9f59,	// (0x000189fb) list_cale_time_pane_g2

0x21ad,	// (0x00010c4f) list_cale_time_pane_g3_ParamLimits

0x21ad,	// (0x00010c4f) list_cale_time_pane_g3

0x21bb,	// (0x00010c5d) list_cale_time_pane_g4_ParamLimits

0x21bb,	// (0x00010c5d) list_cale_time_pane_g4

0x21c9,	// (0x00010c6b) list_cale_time_pane_g5_ParamLimits

0x21c9,	// (0x00010c6b) list_cale_time_pane_g5

0x0005,

0xf24e,	// (0x0001dcf0) list_cale_time_pane_g_ParamLimits

0xf24e,	// (0x0001dcf0) list_cale_time_pane_g

0x9f73,	// (0x00018a15) list_cale_time_pane_t1_ParamLimits

0x9f73,	// (0x00018a15) list_cale_time_pane_t1

0x9f9b,	// (0x00018a3d) list_cale_time_pane_t2_ParamLimits

0x9f9b,	// (0x00018a3d) list_cale_time_pane_t2

0x242b,	// (0x00010ecd) aid_blid_cardinal_pane

0x2469,	// (0x00010f0b) compass_pane_t4

0x9fc3,	// (0x00018a65) list_cale_time_pane_t4_ParamLimits

0x9fc3,	// (0x00018a65) list_cale_time_pane_t4

0x2477,	// (0x00010f19) compass_pane_t5

0x2485,	// (0x00010f27) compass_pane_t6

0x2493,	// (0x00010f35) compass_pane_t7

0xa4e9,	// (0x00018f8b) navi_pane_cc_t1

0xa6d8,	// (0x0001917a) aid_phob_thumbnail_center_pane

0x285c,	// (0x000112fe) main_postcard_pane_g4_ParamLimits

0x0002,

0xf25b,	// (0x0001dcfd) list_cale_time_pane_t_ParamLimits

0xf25b,	// (0x0001dcfd) list_cale_time_pane_t

0x91c4,	// (0x00017c66) bg_popup_window_pane_cp02_ParamLimits

0x91c4,	// (0x00017c66) bg_popup_window_pane_cp02

0x9feb,	// (0x00018a8d) heading_pane_cp01_ParamLimits

0x9feb,	// (0x00018a8d) heading_pane_cp01

0x9ff7,	// (0x00018a99) loc_req_pane_ParamLimits

0x9ff7,	// (0x00018a99) loc_req_pane

0xa007,	// (0x00018aa9) loc_type_pane_ParamLimits

0xa007,	// (0x00018aa9) loc_type_pane

0xa019,	// (0x00018abb) loc_type_pane_t1_ParamLimits

0xa019,	// (0x00018abb) loc_type_pane_t1

0xa02b,	// (0x00018acd) loc_type_pane_t2_ParamLimits

0xa02b,	// (0x00018acd) loc_type_pane_t2

0xa03d,	// (0x00018adf) loc_type_pane_t3_ParamLimits

0xa03d,	// (0x00018adf) loc_type_pane_t3

0x0002,

0xf262,	// (0x0001dd04) loc_type_pane_t_ParamLimits

0xf262,	// (0x0001dd04) loc_type_pane_t

0xa04f,	// (0x00018af1) list_loc_req_pane

0xa059,	// (0x00018afb) scroll_pane_cp012

0x21d7,	// (0x00010c79) list_single_loc_request_popup_menu_pane_ParamLimits

0x21d7,	// (0x00010c79) list_single_loc_request_popup_menu_pane

0xa064,	// (0x00018b06) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xa064,	// (0x00018b06) list_single_loc_request_popup_menu_pane_g1

0xa070,	// (0x00018b12) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xa070,	// (0x00018b12) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf269,	// (0x0001dd0b) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf269,	// (0x0001dd0b) list_single_loc_request_popup_menu_pane_g

0xa07c,	// (0x00018b1e) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xa07c,	// (0x00018b1e) list_single_loc_request_popup_menu_pane_t1

0x97c8,	// (0x0001826a) bg_popup_window_pane_cp03_ParamLimits

0x97c8,	// (0x0001826a) bg_popup_window_pane_cp03

0xa092,	// (0x00018b34) heading_loc_req_pane_ParamLimits

0xa092,	// (0x00018b34) heading_loc_req_pane

0x21e4,	// (0x00010c86) popup_dyc_status_message_window_g1_ParamLimits

0x21e4,	// (0x00010c86) popup_dyc_status_message_window_g1

0x21f8,	// (0x00010c9a) popup_dyc_status_message_window_t1_ParamLimits

0x21f8,	// (0x00010c9a) popup_dyc_status_message_window_t1

0x220d,	// (0x00010caf) popup_dyc_status_message_window_t2_ParamLimits

0x220d,	// (0x00010caf) popup_dyc_status_message_window_t2

0x2222,	// (0x00010cc4) popup_dyc_status_message_window_t3_ParamLimits

0x2222,	// (0x00010cc4) popup_dyc_status_message_window_t3

0x0002,

0xf26e,	// (0x0001dd10) popup_dyc_status_message_window_t_ParamLimits

0xf26e,	// (0x0001dd10) popup_dyc_status_message_window_t

0x956d,	// (0x0001800f) bg_heading_pane_cp01

0xa09e,	// (0x00018b40) heading_loc_req_pane_g1

0xa0a6,	// (0x00018b48) heading_loc_req_pane_g2

0xa0ae,	// (0x00018b50) heading_loc_req_pane_g3

0x0002,

0xf275,	// (0x0001dd17) heading_loc_req_pane_g

0xa0b6,	// (0x00018b58) heading_loc_req_pane_t1

0xa0d5,	// (0x00018b77) bg_popup_sub_pane_cp01_ParamLimits

0xa0d5,	// (0x00018b77) bg_popup_sub_pane_cp01

0xa0e3,	// (0x00018b85) popup_cale_events_window_g1_ParamLimits

0xa0e3,	// (0x00018b85) popup_cale_events_window_g1

0xa103,	// (0x00018ba5) popup_cale_events_window_g2_ParamLimits

0xa103,	// (0x00018ba5) popup_cale_events_window_g2

0x0001,

0xf297,	// (0x0001dd39) popup_cale_events_window_g_ParamLimits

0xf297,	// (0x0001dd39) popup_cale_events_window_g

0xa123,	// (0x00018bc5) popup_cale_events_window_t1_ParamLimits

0xa123,	// (0x00018bc5) popup_cale_events_window_t1

0xa135,	// (0x00018bd7) popup_cale_events_window_t2_ParamLimits

0xa135,	// (0x00018bd7) popup_cale_events_window_t2

0xa173,	// (0x00018c15) popup_cale_events_window_t3_ParamLimits

0xa173,	// (0x00018c15) popup_cale_events_window_t3

0xa1ad,	// (0x00018c4f) popup_cale_events_window_t4_ParamLimits

0xa1ad,	// (0x00018c4f) popup_cale_events_window_t4

0x0003,

0xf29c,	// (0x0001dd3e) popup_cale_events_window_t_ParamLimits

0xf29c,	// (0x0001dd3e) popup_cale_events_window_t

0x224a,	// (0x00010cec) call_type_pane

0x225a,	// (0x00010cfc) popup_call_status_window_g1

0x226e,	// (0x00010d10) popup_call_status_window_g2

0x2282,	// (0x00010d24) popup_call_status_window_g3

0x0002,

0xf2a5,	// (0x0001dd47) popup_call_status_window_g

0xa1e3,	// (0x00018c85) call_type_pane_g1

0xa1ec,	// (0x00018c8e) call_type_pane_g2

0x0001,

0xf2ac,	// (0x0001dd4e) call_type_pane_g

0x956d,	// (0x0001800f) bg_popup_sub_pane_cp02

0xa1f5,	// (0x00018c97) listscroll_popup_wml_pane

0xa1fd,	// (0x00018c9f) list_wml_pane

0xa207,	// (0x00018ca9) scroll_pane_cp013

0xa212,	// (0x00018cb4) list_single_graphic_popup_wml_pane_ParamLimits

0xa212,	// (0x00018cb4) list_single_graphic_popup_wml_pane

0x97e0,	// (0x00018282) list_single_graphic_popup_wml_pane_g1

0xa226,	// (0x00018cc8) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf2b1,	// (0x0001dd53) list_single_graphic_popup_wml_pane_g

0xa22e,	// (0x00018cd0) list_single_graphic_popup_wml_pane_t1

0xa244,	// (0x00018ce6) aid_call_pane

0x97c0,	// (0x00018262) popup_clock_analogue_window_g1

0x97c0,	// (0x00018262) popup_clock_analogue_window_g2

0xa24c,	// (0x00018cee) popup_clock_analogue_window_g3

0xa24c,	// (0x00018cee) popup_clock_analogue_window_g4

0x97e0,	// (0x00018282) popup_clock_analogue_window_g5

0x0004,

0xf2b6,	// (0x0001dd58) popup_clock_analogue_window_g

0xa254,	// (0x00018cf6) popup_clock_analogue_window_t1

0xa262,	// (0x00018d04) clock_digital_number_pane_ParamLimits

0xa262,	// (0x00018d04) clock_digital_number_pane

0xa26e,	// (0x00018d10) clock_digital_number_pane_cp02_ParamLimits

0xa26e,	// (0x00018d10) clock_digital_number_pane_cp02

0xa27a,	// (0x00018d1c) clock_digital_number_pane_cp03_ParamLimits

0xa27a,	// (0x00018d1c) clock_digital_number_pane_cp03

0xa286,	// (0x00018d28) clock_digital_number_pane_cp04_ParamLimits

0xa286,	// (0x00018d28) clock_digital_number_pane_cp04

0xa296,	// (0x00018d38) clock_digital_separator_pane_ParamLimits

0xa296,	// (0x00018d38) clock_digital_separator_pane

0xa2a2,	// (0x00018d44) popup_clock_digital_window_t1

0x97e0,	// (0x00018282) clock_digital_number_pane_g1

0x97e0,	// (0x00018282) clock_digital_number_pane_g2

0x0001,

0xf236,	// (0x0001dcd8) clock_digital_number_pane_g

0x97e0,	// (0x00018282) clock_digital_separator_pane_g1

0x97e0,	// (0x00018282) clock_digital_separator_pane_g2

0x0001,

0xf236,	// (0x0001dcd8) clock_digital_separator_pane_g

0x956d,	// (0x0001800f) bg_popup_window_pane_cp04

0xa2bf,	// (0x00018d61) heading_pane_cp03

0x9b1c,	// (0x000185be) listscroll_popup_gms_pane

0x956d,	// (0x0001800f) grid_large_graphic_popup_pane

0xa2c8,	// (0x00018d6a) listscroll_popup_gms_pane_g1

0xa2d1,	// (0x00018d73) listscroll_popup_gms_pane_g2

0x0001,

0xf2c1,	// (0x0001dd63) listscroll_popup_gms_pane_g

0xa2da,	// (0x00018d7c) scroll_pane_cp014

0x9835,	// (0x000182d7) cell_large_graphic_popup_pane_ParamLimits

0x9835,	// (0x000182d7) cell_large_graphic_popup_pane

0x9843,	// (0x000182e5) cell_large_graphic_popup_pane_g1_ParamLimits

0x9843,	// (0x000182e5) cell_large_graphic_popup_pane_g1

0xa2e3,	// (0x00018d85) cell_large_graphic_popup_pane_g2_ParamLimits

0xa2e3,	// (0x00018d85) cell_large_graphic_popup_pane_g2

0xa2f1,	// (0x00018d93) cell_large_graphic_popup_pane_g3_ParamLimits

0xa2f1,	// (0x00018d93) cell_large_graphic_popup_pane_g3

0xa2ff,	// (0x00018da1) cell_large_graphic_popup_pane_g4_ParamLimits

0xa2ff,	// (0x00018da1) cell_large_graphic_popup_pane_g4

0x0003,

0xf2c6,	// (0x0001dd68) cell_large_graphic_popup_pane_g_ParamLimits

0xf2c6,	// (0x0001dd68) cell_large_graphic_popup_pane_g

0x956d,	// (0x0001800f) grid_highlight_pane_cp010

0x97e0,	// (0x00018282) bg_popup_call_pane_g1

0xa310,	// (0x00018db2) list_single_graphic_popup_conf_pane_ParamLimits

0xa310,	// (0x00018db2) list_single_graphic_popup_conf_pane

0xa323,	// (0x00018dc5) list_highlight_pane_cp01

0xa32c,	// (0x00018dce) list_single_graphic_popup_conf_pane_g1

0xa334,	// (0x00018dd6) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf2cf,	// (0x0001dd71) list_single_graphic_popup_conf_pane_g

0xa33c,	// (0x00018dde) list_single_graphic_popup_conf_pane_t1

0xa34a,	// (0x00018dec) linegrid_cams_pane_g1

0x2291,	// (0x00010d33) linegrid_cams_pane_g2

0x9a5b,	// (0x000184fd) linegrid_cams_pane_g3

0xa353,	// (0x00018df5) linegrid_cams_pane_g4

0x229a,	// (0x00010d3c) linegrid_cams_pane_g5

0x22a3,	// (0x00010d45) linegrid_cams_pane_g6

0x9b0b,	// (0x000185ad) linegrid_cams_pane_g7

0x0006,

0xf2d4,	// (0x0001dd76) linegrid_cams_pane_g

0xa35c,	// (0x00018dfe) popup_clock_analogue_window

0xa35c,	// (0x00018dfe) popup_clock_digital_window

0x956d,	// (0x0001800f) popup_phob_thumbnail_window

0x97e0,	// (0x00018282) call_video_uplink_pane_g1

0xa365,	// (0x00018e07) call_video_uplink_pane_g2

0x0001,

0xf2e3,	// (0x0001dd85) call_video_uplink_pane_g

0xa36d,	// (0x00018e0f) video_uplink_pane

0xa375,	// (0x00018e17) mce_image_pane_g1

0x22ae,	// (0x00010d50) mce_image_pane_g2

0x22b8,	// (0x00010d5a) mce_image_pane_g3

0x22c0,	// (0x00010d62) mce_image_pane_g4

0x22c8,	// (0x00010d6a) mce_image_pane_g5

0x0004,

0xf2e8,	// (0x0001dd8a) mce_image_pane_g

0xa37f,	// (0x00018e21) control_top_pane_stacon_cp01_ParamLimits

0xa37f,	// (0x00018e21) control_top_pane_stacon_cp01

0xa393,	// (0x00018e35) uni_indicator_pane_stacon_cp01_ParamLimits

0xa393,	// (0x00018e35) uni_indicator_pane_stacon_cp01

0xa3a4,	// (0x00018e46) bg_popup_sub_pane_cp03

0xa3ae,	// (0x00018e50) chi_dic_find_pane

0x22d0,	// (0x00010d72) listscroll_chi_dic_pane

0xa3b6,	// (0x00018e58) main_pane_chidic_g1

0xa3be,	// (0x00018e60) chi_dic_find_pane_t1

0xa3cc,	// (0x00018e6e) find_chidic_pane

0xa3d5,	// (0x00018e77) chi_dic_list_pane_ParamLimits

0xa3d5,	// (0x00018e77) chi_dic_list_pane

0xa3e6,	// (0x00018e88) scroll_pane_cp020

0xa3ee,	// (0x00018e90) find_chidic_pane_t1

0x956d,	// (0x0001800f) input_focus_pane_cp06

0x22e4,	// (0x00010d86) list_chi_dic_pane_ParamLimits

0x22e4,	// (0x00010d86) list_chi_dic_pane

0x22f6,	// (0x00010d98) list_chi_dic_pane_t1_ParamLimits

0x22f6,	// (0x00010d98) list_chi_dic_pane_t1

0x956d,	// (0x0001800f) list_highlight_pane_cp020

0xa3fd,	// (0x00018e9f) bg_cale_heading_pane_g1

0x2309,	// (0x00010dab) bg_cale_heading_pane_g2

0x2311,	// (0x00010db3) bg_cale_heading_pane_g3

0x2319,	// (0x00010dbb) bg_cale_heading_pane_g4

0x2323,	// (0x00010dc5) bg_cale_heading_pane_g5

0x232d,	// (0x00010dcf) bg_cale_heading_pane_g6

0x2335,	// (0x00010dd7) bg_cale_heading_pane_g7

0x233d,	// (0x00010ddf) bg_cale_heading_pane_g8

0x2347,	// (0x00010de9) bg_cale_heading_pane_g9

0x0008,

0xf2f3,	// (0x0001dd95) bg_cale_heading_pane_g

0xa3fd,	// (0x00018e9f) bg_cale_side_pane_g1

0x2351,	// (0x00010df3) bg_cale_side_pane_g2

0x2359,	// (0x00010dfb) bg_cale_side_pane_g3

0x2361,	// (0x00010e03) bg_cale_side_pane_g4

0x2369,	// (0x00010e0b) bg_cale_side_pane_g5

0x2371,	// (0x00010e13) bg_cale_side_pane_g6

0x2379,	// (0x00010e1b) bg_cale_side_pane_g7

0x2381,	// (0x00010e23) bg_cale_side_pane_g8

0x2389,	// (0x00010e2b) bg_cale_side_pane_g9

0x0008,

0xf306,	// (0x0001dda8) bg_cale_side_pane_g

0x2391,	// (0x00010e33) popup_call_status_window_ParamLimits

0x2391,	// (0x00010e33) popup_call_status_window

0xa405,	// (0x00018ea7) stacon_top_pane

0xa40d,	// (0x00018eaf) status_pane_ParamLimits

0xa40d,	// (0x00018eaf) status_pane

0xa422,	// (0x00018ec4) status_small_pane

0xa42a,	// (0x00018ecc) control_pane

0x956d,	// (0x0001800f) stacon_bottom_pane

0xa432,	// (0x00018ed4) list_single_mce_smart_pane_t1_ParamLimits

0xa432,	// (0x00018ed4) list_single_mce_smart_pane_t1

0xa445,	// (0x00018ee7) list_single_mce_smart_pane_t2_ParamLimits

0xa445,	// (0x00018ee7) list_single_mce_smart_pane_t2

0x0001,

0xf319,	// (0x0001ddbb) list_single_mce_smart_pane_t_ParamLimits

0xf319,	// (0x0001ddbb) list_single_mce_smart_pane_t

0x23da,	// (0x00010e7c) compass_pane

0x23e3,	// (0x00010e85) main_location2_pane_t1

0x23f5,	// (0x00010e97) main_location2_pane_t2

0x2407,	// (0x00010ea9) main_location2_pane_t3

0x0003,

0xf31e,	// (0x0001ddc0) main_location2_pane_t

0xa464,	// (0x00018f06) compass_pane_g1_ParamLimits

0xa464,	// (0x00018f06) compass_pane_g1

0x244b,	// (0x00010eed) compass_pane_t1

0x245a,	// (0x00010efc) compass_pane_t2

0x0005,

0xf327,	// (0x0001ddc9) compass_pane_t

0x24a1,	// (0x00010f43) text_secondary_cp61

0xa4e0,	// (0x00018f82) navi_pane_cams_g5

0xa55c,	// (0x00018ffe) navi_pane_im_t1

0xa56a,	// (0x0001900c) navi_pane_mp_g1_ParamLimits

0xa56a,	// (0x0001900c) navi_pane_mp_g1

0xa57e,	// (0x00019020) navi_pane_mp_g2_ParamLimits

0xa57e,	// (0x00019020) navi_pane_mp_g2

0xa58a,	// (0x0001902c) navi_pane_mp_g3_ParamLimits

0xa58a,	// (0x0001902c) navi_pane_mp_g3

0x0002,

0xf33b,	// (0x0001dddd) navi_pane_mp_g_ParamLimits

0xf33b,	// (0x0001dddd) navi_pane_mp_g

0xa596,	// (0x00019038) navi_pane_mp_t1

0xa5a4,	// (0x00019046) navi_pane_mp_t2

0x0002,

0xf342,	// (0x0001dde4) navi_pane_mp_t

0xa60f,	// (0x000190b1) navi_pane_vt_g1

0xa596,	// (0x00019038) navi_pane_vt_t1

0xa617,	// (0x000190b9) navi_slider_pane

0x9b1c,	// (0x000185be) zooming_pane

0xa627,	// (0x000190c9) navi_slider_pane_g1

0xa630,	// (0x000190d2) navi_slider_pane_g2

0x0006,

0xf349,	// (0x0001ddeb) navi_slider_pane_g

0xa65d,	// (0x000190ff) aid_levels_zoom

0xa665,	// (0x00019107) zooming_pane_g1

0xa66d,	// (0x0001910f) zooming_pane_g2

0xa66d,	// (0x0001910f) zooming_pane_g3

0x0002,

0xf358,	// (0x0001ddfa) zooming_pane_g

0xa675,	// (0x00019117) level_10_zoom

0xa67e,	// (0x00019120) level_11_zoom

0xa687,	// (0x00019129) level_1_zoom

0xa690,	// (0x00019132) level_2_zoom

0xa699,	// (0x0001913b) level_3_zoom

0xa6a2,	// (0x00019144) level_4_zoom

0xa6ab,	// (0x0001914d) level_5_zoom

0xa6b4,	// (0x00019156) level_6_zoom

0xa6bd,	// (0x0001915f) level_7_zoom

0xa6c6,	// (0x00019168) level_8_zoom

0xa6cf,	// (0x00019171) level_9_zoom

0xa6e0,	// (0x00019182) popup_phob_thumbnail_window_g1

0xa6e8,	// (0x0001918a) popup_phob_thumbnail_window_g2

0x0001,

0xf35f,	// (0x0001de01) popup_phob_thumbnail_window_g

0x2f02,	// (0x000119a4) level_1_location

0x2f0a,	// (0x000119ac) level_2_location

0x2f12,	// (0x000119b4) level_3_location

0x2f1a,	// (0x000119bc) level_4_location

0x9b1c,	// (0x000185be) level_5_location

0x24f2,	// (0x00010f94) mce_icon_pane_g1

0x24fc,	// (0x00010f9e) mce_icon_pane_g2

0x0001,

0xf364,	// (0x0001de06) mce_icon_pane_g

0xa6f0,	// (0x00019192) main_mup_pane_g1_ParamLimits

0xa6f0,	// (0x00019192) main_mup_pane_g1

0xa6f0,	// (0x00019192) main_mup_pane_g2_ParamLimits

0xa6f0,	// (0x00019192) main_mup_pane_g2

0xa6f0,	// (0x00019192) main_mup_pane_g3_ParamLimits

0xa6f0,	// (0x00019192) main_mup_pane_g3

0xa6f0,	// (0x00019192) main_mup_pane_g4_ParamLimits

0xa6f0,	// (0x00019192) main_mup_pane_g4

0xa6f0,	// (0x00019192) main_mup_pane_g5_ParamLimits

0xa6f0,	// (0x00019192) main_mup_pane_g5

0xa6f0,	// (0x00019192) main_mup_pane_g6_ParamLimits

0xa6f0,	// (0x00019192) main_mup_pane_g6

0xa6f0,	// (0x00019192) main_mup_pane_g7_ParamLimits

0xa6f0,	// (0x00019192) main_mup_pane_g7

0xa6f0,	// (0x00019192) main_mup_pane_g8_ParamLimits

0xa6f0,	// (0x00019192) main_mup_pane_g8

0xa6f0,	// (0x00019192) main_mup_pane_g9_ParamLimits

0xa6f0,	// (0x00019192) main_mup_pane_g9

0xa6f0,	// (0x00019192) main_mup_pane_g10_ParamLimits

0xa6f0,	// (0x00019192) main_mup_pane_g10

0xa6f0,	// (0x00019192) main_mup_pane_g11_ParamLimits

0xa6f0,	// (0x00019192) main_mup_pane_g11

0x9843,	// (0x000182e5) main_mup_pane_g12_ParamLimits

0x9843,	// (0x000182e5) main_mup_pane_g12

0xa6f0,	// (0x00019192) main_mup_pane_g13_ParamLimits

0xa6f0,	// (0x00019192) main_mup_pane_g13

0x000c,

0xf369,	// (0x0001de0b) main_mup_pane_g_ParamLimits

0xf369,	// (0x0001de0b) main_mup_pane_g

0xa6fe,	// (0x000191a0) main_mup_pane_t1_ParamLimits

0xa6fe,	// (0x000191a0) main_mup_pane_t1

0xa6fe,	// (0x000191a0) main_mup_pane_t2_ParamLimits

0xa6fe,	// (0x000191a0) main_mup_pane_t2

0xa6fe,	// (0x000191a0) main_mup_pane_t3_ParamLimits

0xa6fe,	// (0x000191a0) main_mup_pane_t3

0x9b2e,	// (0x000185d0) main_mup_pane_t4_ParamLimits

0x9b2e,	// (0x000185d0) main_mup_pane_t4

0x9b2e,	// (0x000185d0) main_mup_pane_t5_ParamLimits

0x9b2e,	// (0x000185d0) main_mup_pane_t5

0xa712,	// (0x000191b4) main_mup_pane_t6_ParamLimits

0xa712,	// (0x000191b4) main_mup_pane_t6

0x0005,

0xf384,	// (0x0001de26) main_mup_pane_t_ParamLimits

0xf384,	// (0x0001de26) main_mup_pane_t

0x9835,	// (0x000182d7) mup_progress_pane_ParamLimits

0x9835,	// (0x000182d7) mup_progress_pane

0xa726,	// (0x000191c8) mup_visualizer_pane_ParamLimits

0xa726,	// (0x000191c8) mup_visualizer_pane

0xa726,	// (0x000191c8) mup_volume_pane_ParamLimits

0xa726,	// (0x000191c8) mup_volume_pane

0x9851,	// (0x000182f3) mup_visualizer_pane_g1_ParamLimits

0x9851,	// (0x000182f3) mup_visualizer_pane_g1

0xa734,	// (0x000191d6) mup_visualizer_pane_g2_ParamLimits

0xa734,	// (0x000191d6) mup_visualizer_pane_g2

0x9843,	// (0x000182e5) mup_visualizer_pane_g3_ParamLimits

0x9843,	// (0x000182e5) mup_visualizer_pane_g3

0x0002,

0xf391,	// (0x0001de33) mup_visualizer_pane_g_ParamLimits

0xf391,	// (0x0001de33) mup_visualizer_pane_g

0x9b5c,	// (0x000185fe) mup_volume_pane_g1

0x9b5c,	// (0x000185fe) mup_volume_pane_g2

0x0001,

0xf398,	// (0x0001de3a) mup_volume_pane_g

0x9b5c,	// (0x000185fe) mup_progress_pane_g1

0x9b5c,	// (0x000185fe) mup_progress_pane_g2

0x9b5c,	// (0x000185fe) mup_progress_pane_g3

0x0002,

0xf39d,	// (0x0001de3f) mup_progress_pane_g

0x956d,	// (0x0001800f) bg_popup_window_pane_cp05

0xa742,	// (0x000191e4) heading_pane_cp02_ParamLimits

0xa742,	// (0x000191e4) heading_pane_cp02

0xa75c,	// (0x000191fe) list_popup_blid_pane

0xa764,	// (0x00019206) list_blid_sat_info_pane_ParamLimits

0xa764,	// (0x00019206) list_blid_sat_info_pane

0xa777,	// (0x00019219) list_blid_sat_info_pane_g1

0xa77f,	// (0x00019221) list_blid_sat_info_pane_t1

0x25fc,	// (0x0001109e) mup_equalizer_pane_ParamLimits

0x25fc,	// (0x0001109e) mup_equalizer_pane

0x2615,	// (0x000110b7) mup_equalizer_pane_cp1_ParamLimits

0x2615,	// (0x000110b7) mup_equalizer_pane_cp1

0x2632,	// (0x000110d4) mup_equalizer_pane_cp2_ParamLimits

0x2632,	// (0x000110d4) mup_equalizer_pane_cp2

0x264f,	// (0x000110f1) mup_equalizer_pane_cp3_ParamLimits

0x264f,	// (0x000110f1) mup_equalizer_pane_cp3

0x2670,	// (0x00011112) mup_equalizer_pane_cp4_ParamLimits

0x2670,	// (0x00011112) mup_equalizer_pane_cp4

0x2691,	// (0x00011133) mup_equalizer_pane_cp5

0x26a5,	// (0x00011147) mup_equalizer_pane_cp6

0x26b9,	// (0x0001115b) mup_equalizer_pane_cp7

0xb993,	// (0x0001a435) bg_popup_call_poc_act_pane_g9

0xb99b,	// (0x0001a43d) bg_popup_call_poc_act_pane_g10

0xb9a3,	// (0x0001a445) bg_popup_call_poc_act_pane_g11

0x000a,

0x97c8,	// (0x0001826a) mup_scale_pane

0x97e0,	// (0x00018282) mup_scale_pane_g1

0xa78d,	// (0x0001922f) mup_scale_pane_g2

0x0006,

0xf3b9,	// (0x0001de5b) mup_scale_pane_g

0xa7b1,	// (0x00019253) msg_data_pane

0xa7b9,	// (0x0001925b) scroll_pane_cp017

0x26df,	// (0x00011181) bg_list_pane_cp04_ParamLimits

0x26df,	// (0x00011181) bg_list_pane_cp04

0xa7c9,	// (0x0001926b) msg_data_pane_g1

0x26f7,	// (0x00011199) msg_data_pane_g2

0x2701,	// (0x000111a3) msg_data_pane_g3

0x2709,	// (0x000111ab) msg_data_pane_g4

0x2711,	// (0x000111b3) msg_data_pane_g5

0x2719,	// (0x000111bb) msg_data_pane_g6

0x2721,	// (0x000111c3) msg_data_pane_g7

0x0006,

0xf3c8,	// (0x0001de6a) msg_data_pane_g

0x2729,	// (0x000111cb) msg_text_pane_ParamLimits

0x2729,	// (0x000111cb) msg_text_pane

0x2754,	// (0x000111f6) qrid_highlight_pane_cp011_ParamLimits

0x2754,	// (0x000111f6) qrid_highlight_pane_cp011

0x956d,	// (0x0001800f) msg_body_pane

0x956d,	// (0x0001800f) msg_header_pane

0xa7da,	// (0x0001927c) input_focus_pane_cp07

0xa7ef,	// (0x00019291) msg_header_pane_t1_ParamLimits

0xa7ef,	// (0x00019291) msg_header_pane_t1

0xa805,	// (0x000192a7) msg_header_pane_t2_ParamLimits

0xa805,	// (0x000192a7) msg_header_pane_t2

0x0001,

0xf3dc,	// (0x0001de7e) msg_header_pane_t_ParamLimits

0xf3dc,	// (0x0001de7e) msg_header_pane_t

0xa81c,	// (0x000192be) msg_body_pane_g1

0xa824,	// (0x000192c6) msg_body_pane_t1_ParamLimits

0xa824,	// (0x000192c6) msg_body_pane_t1

0xa855,	// (0x000192f7) msg_body_pane_t2_ParamLimits

0xa855,	// (0x000192f7) msg_body_pane_t2

0xa867,	// (0x00019309) msg_body_pane_t3_ParamLimits

0xa867,	// (0x00019309) msg_body_pane_t3

0x0002,

0xf3e1,	// (0x0001de83) msg_body_pane_t_ParamLimits

0xf3e1,	// (0x0001de83) msg_body_pane_t

0x27b2,	// (0x00011254) main_viewer_pane_g1_ParamLimits

0x27b2,	// (0x00011254) main_viewer_pane_g1

0x27c0,	// (0x00011262) main_viewer_pane_g2_ParamLimits

0x27c0,	// (0x00011262) main_viewer_pane_g2

0x27ce,	// (0x00011270) main_viewer_pane_g3_ParamLimits

0x27ce,	// (0x00011270) main_viewer_pane_g3

0x27dd,	// (0x0001127f) main_viewer_pane_g4_ParamLimits

0x27dd,	// (0x0001127f) main_viewer_pane_g4

0xa891,	// (0x00019333) main_viewer_pane_g5_ParamLimits

0xa891,	// (0x00019333) main_viewer_pane_g5

0xa891,	// (0x00019333) main_viewer_pane_g7_ParamLimits

0xa891,	// (0x00019333) main_viewer_pane_g7

0xa8a3,	// (0x00019345) main_viewer_pane_g8_ParamLimits

0xa8a3,	// (0x00019345) main_viewer_pane_g8

0x0007,

0xf3f1,	// (0x0001de93) main_viewer_pane_g_ParamLimits

0xf3f1,	// (0x0001de93) main_viewer_pane_g

0xa8bb,	// (0x0001935d) viewer_content_pane_ParamLimits

0xa8bb,	// (0x0001935d) viewer_content_pane

0x2819,	// (0x000112bb) main_postcard_pane_g1_ParamLimits

0x2819,	// (0x000112bb) main_postcard_pane_g1

0x282f,	// (0x000112d1) main_postcard_pane_g2_ParamLimits

0x282f,	// (0x000112d1) main_postcard_pane_g2

0x2845,	// (0x000112e7) main_postcard_pane_g3_ParamLimits

0x2845,	// (0x000112e7) main_postcard_pane_g3

0x0005,

0xf402,	// (0x0001dea4) main_postcard_pane_g_ParamLimits

0xf402,	// (0x0001dea4) main_postcard_pane_g

0x285c,	// (0x000112fe) main_postcard_pane_g4

0xbb2b,	// (0x0001a5cd) smil_status_volume_pane_g2

0x289f,	// (0x00011341) postcard_pane_ParamLimits

0x289f,	// (0x00011341) postcard_pane

0xa8c9,	// (0x0001936b) postcard_pane_g1_ParamLimits

0xa8c9,	// (0x0001936b) postcard_pane_g1

0x28e1,	// (0x00011383) postcard_pane_g2_ParamLimits

0x28e1,	// (0x00011383) postcard_pane_g2

0x28ed,	// (0x0001138f) postcard_pane_g3_ParamLimits

0x28ed,	// (0x0001138f) postcard_pane_g3

0xa8d7,	// (0x00019379) postcard_pane_g4_ParamLimits

0xa8d7,	// (0x00019379) postcard_pane_g4

0x28f9,	// (0x0001139b) postcard_pane_g5_ParamLimits

0x28f9,	// (0x0001139b) postcard_pane_g5

0x290e,	// (0x000113b0) postcard_pane_g6_ParamLimits

0x290e,	// (0x000113b0) postcard_pane_g6

0xa8c9,	// (0x0001936b) postcard_pane_g7_ParamLimits

0xa8c9,	// (0x0001936b) postcard_pane_g7

0x0006,

0xf40f,	// (0x0001deb1) postcard_pane_g_ParamLimits

0xf40f,	// (0x0001deb1) postcard_pane_g

0x2922,	// (0x000113c4) main_mp2_pane_g1_ParamLimits

0x2922,	// (0x000113c4) main_mp2_pane_g1

0x292e,	// (0x000113d0) main_mp2_pane_g2_ParamLimits

0x292e,	// (0x000113d0) main_mp2_pane_g2

0x293a,	// (0x000113dc) main_mp2_pane_g3_ParamLimits

0x293a,	// (0x000113dc) main_mp2_pane_g3

0x0002,

0xf41e,	// (0x0001dec0) main_mp2_pane_g_ParamLimits

0xf41e,	// (0x0001dec0) main_mp2_pane_g

0x2946,	// (0x000113e8) main_mp2_pane_t1_ParamLimits

0x2946,	// (0x000113e8) main_mp2_pane_t1

0x295b,	// (0x000113fd) main_mp2_pane_t2_ParamLimits

0x295b,	// (0x000113fd) main_mp2_pane_t2

0x296d,	// (0x0001140f) main_mp2_pane_t3_ParamLimits

0x296d,	// (0x0001140f) main_mp2_pane_t3

0x0002,

0xf425,	// (0x0001dec7) main_mp2_pane_t_ParamLimits

0xf425,	// (0x0001dec7) main_mp2_pane_t

0xa8e5,	// (0x00019387) pec_content_pane_ParamLimits

0xa8e5,	// (0x00019387) pec_content_pane

0x9cbd,	// (0x0001875f) scroll_pane_cp015

0xa8f7,	// (0x00019399) pec_attribute_pane_ParamLimits

0xa8f7,	// (0x00019399) pec_attribute_pane

0x297f,	// (0x00011421) pec_content_pane_g1_ParamLimits

0x297f,	// (0x00011421) pec_content_pane_g1

0xa907,	// (0x000193a9) pec_content_pane_t1_ParamLimits

0xa907,	// (0x000193a9) pec_content_pane_t1

0xa919,	// (0x000193bb) pec_content_pane_t2_ParamLimits

0xa919,	// (0x000193bb) pec_content_pane_t2

0x0001,

0xf42c,	// (0x0001dece) pec_content_pane_t_ParamLimits

0xf42c,	// (0x0001dece) pec_content_pane_t

0x298b,	// (0x0001142d) list_single_graphic_pane_cp01_ParamLimits

0x298b,	// (0x0001142d) list_single_graphic_pane_cp01

0x97c8,	// (0x0001826a) bg_popup_sub_pane_cp04

0xa92b,	// (0x000193cd) popup_mup_playback_window_g1

0xa937,	// (0x000193d9) popup_mup_playback_window_t1

0xa94c,	// (0x000193ee) popup_mup_playback_window_t2

0x0001,

0xf431,	// (0x0001ded3) popup_mup_playback_window_t

0xa983,	// (0x00019425) main_image_pane_g1_ParamLimits

0xa983,	// (0x00019425) main_image_pane_g1

0xa9c6,	// (0x00019468) scroll_pane_cp018_ParamLimits

0xa9c6,	// (0x00019468) scroll_pane_cp018

0xa9de,	// (0x00019480) scroll_pane_cp016_ParamLimits

0xa9de,	// (0x00019480) scroll_pane_cp016

0x2a58,	// (0x000114fa) smil2_image_pane_ParamLimits

0x2a58,	// (0x000114fa) smil2_image_pane

0x2a88,	// (0x0001152a) smil2_root_pane_ParamLimits

0x2a88,	// (0x0001152a) smil2_root_pane

0x2ac0,	// (0x00011562) smil2_text_pane_ParamLimits

0x2ac0,	// (0x00011562) smil2_text_pane

0x956d,	// (0x0001800f) bg_list_pane_cp06

0xaa1a,	// (0x000194bc) grid_radio_pane

0x956d,	// (0x0001800f) bg_popup_window_pane_cp06

0xaa22,	// (0x000194c4) main_fmradio_pane_t1

0xb9ab,	// (0x0001a44d) heading_pane_cp04

0xaa30,	// (0x000194d2) main_fmradio_pane_t2

0xb9b3,	// (0x0001a455) popup_cale_lunar_info_window_g1

0xaa3e,	// (0x000194e0) main_fmradio_pane_t3

0xb9bb,	// (0x0001a45d) popup_cale_lunar_info_window_g2

0xaa4c,	// (0x000194ee) main_fmradio_pane_t4

0x0001,

0xaa5a,	// (0x000194fc) main_fmradio_pane_t5

0x0004,

0xf511,	// (0x0001dfb3) popup_cale_lunar_info_window_g

0xf446,	// (0x0001dee8) main_fmradio_pane_t

0xaa68,	// (0x0001950a) wait_bar_pane_cp03

0xaa70,	// (0x00019512) cell_fmradio_pane_ParamLimits

0xaa70,	// (0x00019512) cell_fmradio_pane

0xa8c9,	// (0x0001936b) cell_fmradio_pane_g1_ParamLimits

0xa8c9,	// (0x0001936b) cell_fmradio_pane_g1

0x956d,	// (0x0001800f) grid_highlight_pane_cp011

0xaa83,	// (0x00019525) poc_content_pane_ParamLimits

0xaa83,	// (0x00019525) poc_content_pane

0xaa95,	// (0x00019537) scroll_pane_cp019

0x2b40,	// (0x000115e2) popup_call_poc_act_window_ParamLimits

0x2b40,	// (0x000115e2) popup_call_poc_act_window

0x2b64,	// (0x00011606) popup_call_poc_inact_window_ParamLimits

0x2b64,	// (0x00011606) popup_call_poc_inact_window

0xf4e8,	// (0x0001df8a) bg_popup_call_poc_act_pane_g

0xb923,	// (0x0001a3c5) bg_popup_call_poc_inact_pane_g1

0xb92b,	// (0x0001a3cd) bg_popup_call_poc_inact_pane_g2

0xaa9d,	// (0x0001953f) popup_call_poc_act_window_g2

0xb933,	// (0x0001a3d5) bg_popup_call_poc_inact_pane_g3

0xb93b,	// (0x0001a3dd) bg_popup_call_poc_inact_pane_g4

0xb943,	// (0x0001a3e5) bg_popup_call_poc_inact_pane_g5

0xaaa5,	// (0x00019547) popup_call_poc_act_window_t1_ParamLimits

0xaaa5,	// (0x00019547) popup_call_poc_act_window_t1

0xaacd,	// (0x0001956f) popup_call_poc_act_window_t2_ParamLimits

0xaacd,	// (0x0001956f) popup_call_poc_act_window_t2

0xaaf5,	// (0x00019597) popup_call_poc_act_window_t3_ParamLimits

0xaaf5,	// (0x00019597) popup_call_poc_act_window_t3

0xab1d,	// (0x000195bf) popup_call_poc_act_window_t4_ParamLimits

0xab1d,	// (0x000195bf) popup_call_poc_act_window_t4

0x0003,

0xf451,	// (0x0001def3) popup_call_poc_act_window_t_ParamLimits

0xf451,	// (0x0001def3) popup_call_poc_act_window_t

0xb94b,	// (0x0001a3ed) bg_popup_call_poc_inact_pane_g6

0xb953,	// (0x0001a3f5) bg_popup_call_poc_inact_pane_g7

0xb95b,	// (0x0001a3fd) bg_popup_call_poc_inact_pane_g8

0xab2f,	// (0x000195d1) popup_call_poc_inact_window_g2

0xb963,	// (0x0001a405) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf4d5,	// (0x0001df77) bg_popup_call_poc_inact_pane_g

0xab37,	// (0x000195d9) popup_call_poc_inact_window_t1_ParamLimits

0xab37,	// (0x000195d9) popup_call_poc_inact_window_t1

0xab4c,	// (0x000195ee) popup_call_poc_inact_window_t2_ParamLimits

0xab4c,	// (0x000195ee) popup_call_poc_inact_window_t2

0xab61,	// (0x00019603) popup_call_poc_inact_window_t3_ParamLimits

0xab61,	// (0x00019603) popup_call_poc_inact_window_t3

0x0002,

0xf45a,	// (0x0001defc) popup_call_poc_inact_window_t_ParamLimits

0xf45a,	// (0x0001defc) popup_call_poc_inact_window_t

0xbaa3,	// (0x0001a545) context_pane_ParamLimits

0x33d4,	// (0x00011e76) signal_pane_ParamLimits

0x9b1c,	// (0x000185be) main_call2_pane

0xba7c,	// (0x0001a51e) popup_phob_thumbnail2_window_ParamLimits

0xba7c,	// (0x0001a51e) popup_phob_thumbnail2_window

0xa879,	// (0x0001931b) aid_hotspot_pointer_arrow_pane

0xa881,	// (0x00019323) aid_hotspot_pointer_hand_pane

0x2ecc,	// (0x0001196e) phob_pre_status_pane_g5

0x914c,	// (0x00017bee) cams_zoom_pane_ParamLimits

0x914c,	// (0x00017bee) image_vga_pane_ParamLimits

0x9843,	// (0x000182e5) main_camera_pane_g1_ParamLimits

0x9843,	// (0x000182e5) main_camera_pane_g2_ParamLimits

0x9843,	// (0x000182e5) main_camera_pane_g3_ParamLimits

0x9843,	// (0x000182e5) main_camera_pane_g4_ParamLimits

0x9843,	// (0x000182e5) main_camera_pane_g5_ParamLimits

0x9843,	// (0x000182e5) main_camera_pane_g6_ParamLimits

0x9843,	// (0x000182e5) main_camera_pane_g7_ParamLimits

0xf185,	// (0x0001dc27) main_camera_pane_g_ParamLimits

0x9b2e,	// (0x000185d0) main_camera_pane_t1_ParamLimits

0x9b2e,	// (0x000185d0) main_camera_pane_t2_ParamLimits

0xf196,	// (0x0001dc38) main_camera_pane_t_ParamLimits

0x97c8,	// (0x0001826a) bg_popup_preview_window_pane_cp01_ParamLimits

0x97c8,	// (0x0001826a) bg_popup_preview_window_pane_cp01

0xab76,	// (0x00019618) popup_phob_thumbnail2_window_g1_ParamLimits

0xab76,	// (0x00019618) popup_phob_thumbnail2_window_g1

0x956d,	// (0x0001800f) call2_cli_visual_pane

0x2b98,	// (0x0001163a) popup_call2_audio_conf_window_ParamLimits

0x2b98,	// (0x0001163a) popup_call2_audio_conf_window

0x2bb8,	// (0x0001165a) popup_call2_audio_first_window_ParamLimits

0x2bb8,	// (0x0001165a) popup_call2_audio_first_window

0x2c4e,	// (0x000116f0) popup_call2_audio_in_window_ParamLimits

0x2c4e,	// (0x000116f0) popup_call2_audio_in_window

0x2c96,	// (0x00011738) popup_call2_audio_out_window_ParamLimits

0x2c96,	// (0x00011738) popup_call2_audio_out_window

0x2d00,	// (0x000117a2) popup_call2_audio_second_window_ParamLimits

0x2d00,	// (0x000117a2) popup_call2_audio_second_window

0x2d66,	// (0x00011808) popup_call2_audio_wait_window_ParamLimits

0x2d66,	// (0x00011808) popup_call2_audio_wait_window

0x956d,	// (0x0001800f) bg_popup_call2_act_pane_cp03

0x97aa,	// (0x0001824c) list_conf_pane_cp

0xab82,	// (0x00019624) popup_call2_audio_conf_window_t1

0xa310,	// (0x00018db2) list_single_graphic_popup_conf2_pane_ParamLimits

0xa310,	// (0x00018db2) list_single_graphic_popup_conf2_pane

0xa323,	// (0x00018dc5) list_highlight_pane_cp04

0xab90,	// (0x00019632) list_single_graphic_popup_conf2_pane_g1

0xa334,	// (0x00018dd6) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf461,	// (0x0001df03) list_single_graphic_popup_conf2_pane_g

0xab9a,	// (0x0001963c) list_single_graphic_popup_conf2_pane_t1

0xaba8,	// (0x0001964a) bg_popup_call2_act_pane_cp01_ParamLimits

0xaba8,	// (0x0001964a) bg_popup_call2_act_pane_cp01

0xac32,	// (0x000196d4) call_type_pane_cp05_ParamLimits

0xac32,	// (0x000196d4) call_type_pane_cp05

0xac86,	// (0x00019728) popup_call2_audio_second_window_g1_ParamLimits

0xac86,	// (0x00019728) popup_call2_audio_second_window_g1

0xacda,	// (0x0001977c) popup_call2_audio_second_window_g2_ParamLimits

0xacda,	// (0x0001977c) popup_call2_audio_second_window_g2

0x0002,

0xf466,	// (0x0001df08) popup_call2_audio_second_window_g_ParamLimits

0xf466,	// (0x0001df08) popup_call2_audio_second_window_g

0xad3f,	// (0x000197e1) popup_call2_audio_second_window_t1_ParamLimits

0xad3f,	// (0x000197e1) popup_call2_audio_second_window_t1

0xadfa,	// (0x0001989c) popup_call2_audio_second_window_t2_ParamLimits

0xadfa,	// (0x0001989c) popup_call2_audio_second_window_t2

0xae4d,	// (0x000198ef) popup_call2_audio_second_window_t3_ParamLimits

0xae4d,	// (0x000198ef) popup_call2_audio_second_window_t3

0x0003,

0xf46d,	// (0x0001df0f) popup_call2_audio_second_window_t_ParamLimits

0xf46d,	// (0x0001df0f) popup_call2_audio_second_window_t

0x956d,	// (0x0001800f) bg_popup_call2_in_pane_cp02

0x9577,	// (0x00018019) call_type_pane_cp04

0x2da0,	// (0x00011842) popup_call2_audio_wait_window_g1

0x2da8,	// (0x0001184a) popup_call2_audio_wait_window_g2

0x0001,

0xf476,	// (0x0001df18) popup_call2_audio_wait_window_g

0x958f,	// (0x00018031) popup_call2_audio_wait_window_t3

0xaf40,	// (0x000199e2) bg_popup_call2_act_pane_ParamLimits

0xaf40,	// (0x000199e2) bg_popup_call2_act_pane

0xb000,	// (0x00019aa2) call_type_pane_cp03_ParamLimits

0xb000,	// (0x00019aa2) call_type_pane_cp03

0xb064,	// (0x00019b06) popup_call2_audio_first_window_g1_ParamLimits

0xb064,	// (0x00019b06) popup_call2_audio_first_window_g1

0xb0d4,	// (0x00019b76) popup_call2_audio_first_window_g2_ParamLimits

0xb0d4,	// (0x00019b76) popup_call2_audio_first_window_g2

0xb138,	// (0x00019bda) popup_call2_audio_first_window_g3_ParamLimits

0xb138,	// (0x00019bda) popup_call2_audio_first_window_g3

0x0004,

0xf47b,	// (0x0001df1d) popup_call2_audio_first_window_g_ParamLimits

0xf47b,	// (0x0001df1d) popup_call2_audio_first_window_g

0xb1c0,	// (0x00019c62) popup_call2_audio_first_window_t1_ParamLimits

0xb1c0,	// (0x00019c62) popup_call2_audio_first_window_t1

0xb2c3,	// (0x00019d65) popup_call2_audio_first_window_t4_ParamLimits

0xb2c3,	// (0x00019d65) popup_call2_audio_first_window_t4

0xb3a6,	// (0x00019e48) popup_call2_audio_first_window_t5_ParamLimits

0xb3a6,	// (0x00019e48) popup_call2_audio_first_window_t5

0x0003,

0xf486,	// (0x0001df28) popup_call2_audio_first_window_t_ParamLimits

0xf486,	// (0x0001df28) popup_call2_audio_first_window_t

0x97c0,	// (0x00018262) bg_popup_call2_act_pane_g1

0xb9c3,	// (0x0001a465) popup_cale_lunar_info_window_t1

0xb9d1,	// (0x0001a473) popup_cale_lunar_info_window_t2

0xb9df,	// (0x0001a481) popup_cale_lunar_info_window_t3

0x956d,	// (0x0001800f) bg_popup_call2_bubble_pane

0xb4a7,	// (0x00019f49) bg_popup_call2_in_pane_cp01_ParamLimits

0xb4a7,	// (0x00019f49) bg_popup_call2_in_pane_cp01

0x9249,	// (0x00017ceb) call_type_pane_cp02

0x2db0,	// (0x00011852) popup_call2_audio_out_window_g1_ParamLimits

0x2db0,	// (0x00011852) popup_call2_audio_out_window_g1

0xb4ef,	// (0x00019f91) popup_call2_audio_out_window_g2_ParamLimits

0xb4ef,	// (0x00019f91) popup_call2_audio_out_window_g2

0x2ddc,	// (0x0001187e) popup_call2_audio_out_window_g3_ParamLimits

0x2ddc,	// (0x0001187e) popup_call2_audio_out_window_g3

0x0003,

0xf48f,	// (0x0001df31) popup_call2_audio_out_window_g_ParamLimits

0xf48f,	// (0x0001df31) popup_call2_audio_out_window_g

0xb526,	// (0x00019fc8) popup_call2_audio_out_window_t1_ParamLimits

0xb526,	// (0x00019fc8) popup_call2_audio_out_window_t1

0xb585,	// (0x0001a027) popup_call2_audio_out_window_t2_ParamLimits

0xb585,	// (0x0001a027) popup_call2_audio_out_window_t2

0xb5d9,	// (0x0001a07b) popup_call2_audio_out_window_t3_ParamLimits

0xb5d9,	// (0x0001a07b) popup_call2_audio_out_window_t3

0xb5ef,	// (0x0001a091) popup_call2_audio_out_window_t4_ParamLimits

0xb5ef,	// (0x0001a091) popup_call2_audio_out_window_t4

0xb605,	// (0x0001a0a7) popup_call2_audio_out_window_t5_ParamLimits

0xb605,	// (0x0001a0a7) popup_call2_audio_out_window_t5

0x0005,

0xf498,	// (0x0001df3a) popup_call2_audio_out_window_t_ParamLimits

0xf498,	// (0x0001df3a) popup_call2_audio_out_window_t

0xb669,	// (0x0001a10b) bg_popup_call2_in_pane_ParamLimits

0xb669,	// (0x0001a10b) bg_popup_call2_in_pane

0xb6c5,	// (0x0001a167) popup_call2_audio_in_window_g1_ParamLimits

0xb6c5,	// (0x0001a167) popup_call2_audio_in_window_g1

0xb6fd,	// (0x0001a19f) popup_call2_audio_in_window_g2_ParamLimits

0xb6fd,	// (0x0001a19f) popup_call2_audio_in_window_g2

0xb735,	// (0x0001a1d7) popup_call2_audio_in_window_g3_ParamLimits

0xb735,	// (0x0001a1d7) popup_call2_audio_in_window_g3

0x0003,

0xf4a5,	// (0x0001df47) popup_call2_audio_in_window_g_ParamLimits

0xf4a5,	// (0x0001df47) popup_call2_audio_in_window_g

0xb78d,	// (0x0001a22f) popup_call2_audio_in_window_t1_ParamLimits

0xb78d,	// (0x0001a22f) popup_call2_audio_in_window_t1

0xb80d,	// (0x0001a2af) popup_call2_audio_in_window_t2_ParamLimits

0xb80d,	// (0x0001a2af) popup_call2_audio_in_window_t2

0xb88d,	// (0x0001a32f) popup_call2_audio_in_window_t3_ParamLimits

0xb88d,	// (0x0001a32f) popup_call2_audio_in_window_t3

0xb8a7,	// (0x0001a349) popup_call2_audio_in_window_t4_ParamLimits

0xb8a7,	// (0x0001a349) popup_call2_audio_in_window_t4

0xb8b9,	// (0x0001a35b) popup_call2_audio_in_window_t5_ParamLimits

0xb8b9,	// (0x0001a35b) popup_call2_audio_in_window_t5

0xb8ce,	// (0x0001a370) popup_call2_audio_in_window_t6_ParamLimits

0xb8ce,	// (0x0001a370) popup_call2_audio_in_window_t6

0x0005,

0xf4ae,	// (0x0001df50) popup_call2_audio_in_window_t_ParamLimits

0xf4ae,	// (0x0001df50) popup_call2_audio_in_window_t

0x97c0,	// (0x00018262) bg_popup_call2_in_pane_g1

0xb9ed,	// (0x0001a48f) popup_cale_lunar_info_window_t4

0x0003,

0xf516,	// (0x0001dfb8) popup_cale_lunar_info_window_t

0x97c8,	// (0x0001826a) bg_popup_call2_rect_pane_ParamLimits

0x97c8,	// (0x0001826a) bg_popup_call2_rect_pane

0x956d,	// (0x0001800f) call2_cli_visual_graphic_pane

0x956d,	// (0x0001800f) call2_cli_visual_text_pane

0xbb3e,	// (0x0001a5e0) smil_status_volume_pane_g3

0x0002,

0x97e0,	// (0x00018282) call2_cli_visual_graphic_pane_g1

0x97e0,	// (0x00018282) call2_cli_visual_graphic_pane_g2

0x97e0,	// (0x00018282) call2_cli_visual_graphic_pane_g3

0x0002,

0xf4bb,	// (0x0001df5d) call2_cli_visual_graphic_pane_g

0xb8e3,	// (0x0001a385) bg_popup_call2_rect_pane_g1

0x99db,	// (0x0001847d) bg_popup_call2_rect_pane_g2

0xb8eb,	// (0x0001a38d) bg_popup_call2_rect_pane_g3

0xb8f3,	// (0x0001a395) bg_popup_call2_rect_pane_g4

0xb8fb,	// (0x0001a39d) bg_popup_call2_rect_pane_g5

0xb903,	// (0x0001a3a5) bg_popup_call2_rect_pane_g6

0xb90b,	// (0x0001a3ad) bg_popup_call2_rect_pane_g7

0xb913,	// (0x0001a3b5) bg_popup_call2_rect_pane_g8

0xb91b,	// (0x0001a3bd) bg_popup_call2_rect_pane_g9

0x0008,

0xf4c2,	// (0x0001df64) bg_popup_call2_rect_pane_g

0xb923,	// (0x0001a3c5) bg_popup_call2_bubble_pane_g1

0xb92b,	// (0x0001a3cd) bg_popup_call2_bubble_pane_g2

0xb933,	// (0x0001a3d5) bg_popup_call2_bubble_pane_g3

0xb93b,	// (0x0001a3dd) bg_popup_call2_bubble_pane_g4

0xb943,	// (0x0001a3e5) bg_popup_call2_bubble_pane_g5

0xb94b,	// (0x0001a3ed) bg_popup_call2_bubble_pane_g6

0xb953,	// (0x0001a3f5) bg_popup_call2_bubble_pane_g7

0xb95b,	// (0x0001a3fd) bg_popup_call2_bubble_pane_g8

0xb963,	// (0x0001a405) bg_popup_call2_bubble_pane_g9

0x0008,

0xf4d5,	// (0x0001df77) bg_popup_call2_bubble_pane_g

0x0a6a,	// (0x0000f50c) aid_cale_week_size_cell_pane

0x1010,	// (0x0000fab2) aid_cams_cif_uncrop_pane_ParamLimits

0x1010,	// (0x0000fab2) aid_cams_cif_uncrop_pane

0x1166,	// (0x0000fc08) aid_cams_size_cell_ParamLimits

0x1166,	// (0x0000fc08) aid_cams_size_cell

0x117a,	// (0x0000fc1c) grid_cams_pane_ParamLimits

0x1194,	// (0x0000fc36) linegrid_cams_pane_ParamLimits

0x127b,	// (0x0000fd1d) call_video_pane_t1

0x1299,	// (0x0000fd3b) call_video_pane_t2

0x0001,

0xf1e2,	// (0x0001dc84) call_video_pane_t

0x16c7,	// (0x00010169) aid_cale_month_size_cell_pane_ParamLimits

0x16c7,	// (0x00010169) aid_cale_month_size_cell_pane

0xf55a,	// (0x0001dffc) smil_status_volume_pane_g

0xbb4b,	// (0x0001a5ed) volume_smil_pane_ParamLimits

0x90ef,	// (0x00017b91) aid_popup2_width_pane

0x09e1,	// (0x0000f483) cell_qdial_pane_g4_ParamLimits

0x09e1,	// (0x0000f483) cell_qdial_pane_g4

0x242b,	// (0x00010ecd) aid_blid_cardinal_pane_ParamLimits

0x2437,	// (0x00010ed9) aid_blid_destination_pane_ParamLimits

0x2437,	// (0x00010ed9) aid_blid_destination_pane

0x97c8,	// (0x0001826a) bg_popup_call_poc_act_pane_ParamLimits

0x97c8,	// (0x0001826a) bg_popup_call_poc_act_pane

0x97c8,	// (0x0001826a) bg_popup_call_poc_inact_pane_ParamLimits

0x97c8,	// (0x0001826a) bg_popup_call_poc_inact_pane

0xb96b,	// (0x0001a40d) bg_popup_call_poc_act_pane_g1

0xb973,	// (0x0001a415) bg_popup_call_poc_act_pane_g2

0xb97b,	// (0x0001a41d) bg_popup_call_poc_act_pane_g3

0xb93b,	// (0x0001a3dd) bg_popup_call_poc_act_pane_g4

0xb943,	// (0x0001a3e5) bg_popup_call_poc_act_pane_g5

0xb983,	// (0x0001a425) bg_popup_call_poc_act_pane_g6

0xb953,	// (0x0001a3f5) bg_popup_call_poc_act_pane_g7

0xb98b,	// (0x0001a42d) bg_popup_call_poc_act_pane_g8

0x956d,	// (0x0001800f) main_usb_pane

0xba57,	// (0x0001a4f9) popup_cale_lunar_info_window

0x1573,	// (0x00010015) im_reading_pane_t1_ParamLimits

0x9c15,	// (0x000186b7) list_im_pane_ParamLimits

0x9c26,	// (0x000186c8) scroll_pane_cp07_ParamLimits

0x956d,	// (0x0001800f) grid_highlight_pane_cp012

0x97c8,	// (0x0001826a) mup_scale_pane_ParamLimits

0xa8c9,	// (0x0001936b) main_usb_pane_g1_ParamLimits

0xa8c9,	// (0x0001936b) main_usb_pane_g1

0x2e2a,	// (0x000118cc) main_usb_pane_g2_ParamLimits

0x2e2a,	// (0x000118cc) main_usb_pane_g2

0x0001,

0xf4ff,	// (0x0001dfa1) main_usb_pane_g_ParamLimits

0xf4ff,	// (0x0001dfa1) main_usb_pane_g

0x2e40,	// (0x000118e2) main_usb_pane_t1_ParamLimits

0x2e40,	// (0x000118e2) main_usb_pane_t1

0x2e52,	// (0x000118f4) main_usb_pane_t2_ParamLimits

0x2e52,	// (0x000118f4) main_usb_pane_t2

0x2e64,	// (0x00011906) main_usb_pane_t3_ParamLimits

0x2e64,	// (0x00011906) main_usb_pane_t3

0x2e76,	// (0x00011918) main_usb_pane_t4_ParamLimits

0x2e76,	// (0x00011918) main_usb_pane_t4

0x2e88,	// (0x0001192a) main_usb_pane_t5_ParamLimits

0x2e88,	// (0x0001192a) main_usb_pane_t5

0x2e9a,	// (0x0001193c) main_usb_pane_t6_ParamLimits

0x2e9a,	// (0x0001193c) main_usb_pane_t6

0x0005,

0xf504,	// (0x0001dfa6) main_usb_pane_t_ParamLimits

0x23da,	// (0x00010e7c) aid_text_placing

0x23e3,	// (0x00010e85) main_location2_pane_t1_ParamLimits

0x23f5,	// (0x00010e97) main_location2_pane_t2_ParamLimits

0x2407,	// (0x00010ea9) main_location2_pane_t3_ParamLimits

0x2419,	// (0x00010ebb) main_location2_pane_t4_ParamLimits

0x2419,	// (0x00010ebb) main_location2_pane_t4

0xf31e,	// (0x0001ddc0) main_location2_pane_t_ParamLimits

0x97f6,	// (0x00018298) find_pinb_pane_g2_ParamLimits

0x97f6,	// (0x00018298) find_pinb_pane_g2

0x0001,

0xf09a,	// (0x0001db3c) find_pinb_pane_g_ParamLimits

0xf09a,	// (0x0001db3c) find_pinb_pane_g

0x9802,	// (0x000182a4) find_pinb_pane_t1_ParamLimits

0x9814,	// (0x000182b6) find_pinb_pane_t2_ParamLimits

0xf09f,	// (0x0001db41) find_pinb_pane_t_ParamLimits

0x956d,	// (0x0001800f) main_call3_pane

0x1bb2,	// (0x00010654) cale_month_day_heading_pane_t1_ParamLimits

0x1c38,	// (0x000106da) cale_month_day_heading_pane_t2_ParamLimits

0x1cb1,	// (0x00010753) cale_month_day_heading_pane_t3_ParamLimits

0x1d2a,	// (0x000107cc) cale_month_day_heading_pane_t4_ParamLimits

0x1dab,	// (0x0001084d) cale_month_day_heading_pane_t5_ParamLimits

0x1e34,	// (0x000108d6) cale_month_day_heading_pane_t6_ParamLimits

0x1ebd,	// (0x0001095f) cale_month_day_heading_pane_t7_ParamLimits

0xf21a,	// (0x0001dcbc) cale_month_day_heading_pane_t_ParamLimits

0x9e7c,	// (0x0001891e) smil_status_volume_pane

0x28bd,	// (0x0001135f) postcard_address_pane_ParamLimits

0x28bd,	// (0x0001135f) postcard_address_pane

0x28cf,	// (0x00011371) postcard_message_pane_ParamLimits

0x28cf,	// (0x00011371) postcard_message_pane

0x2e08,	// (0x000118aa) call2_cli_visual_pane_t1_ParamLimits

0x2e08,	// (0x000118aa) call2_cli_visual_pane_t1

0xbb78,	// (0x0001a61a) postcard_message_pane_t1_ParamLimits

0xbb78,	// (0x0001a61a) postcard_message_pane_t1

0xbb60,	// (0x0001a602) postcard_address_pane_t1_ParamLimits

0xbb60,	// (0x0001a602) postcard_address_pane_t1

0x3586,	// (0x00012028) popup_call3_audio_in_window_ParamLimits

0x3586,	// (0x00012028) popup_call3_audio_in_window

0x3411,	// (0x00011eb3) bg_popup_call3_in_pane_ParamLimits

0x3411,	// (0x00011eb3) bg_popup_call3_in_pane

0x3487,	// (0x00011f29) popup_call3_audio_in_window_g1_ParamLimits

0x3487,	// (0x00011f29) popup_call3_audio_in_window_g1

0x34a7,	// (0x00011f49) popup_call3_audio_in_window_g2_ParamLimits

0x34a7,	// (0x00011f49) popup_call3_audio_in_window_g2

0x34c7,	// (0x00011f69) popup_call3_audio_in_window_g3_ParamLimits

0x34c7,	// (0x00011f69) popup_call3_audio_in_window_g3

0x0003,

0xf561,	// (0x0001e003) popup_call3_audio_in_window_g_ParamLimits

0xf561,	// (0x0001e003) popup_call3_audio_in_window_g

0x34f8,	// (0x00011f9a) popup_call3_audio_in_window_t1_ParamLimits

0x34f8,	// (0x00011f9a) popup_call3_audio_in_window_t1

0x3536,	// (0x00011fd8) popup_call3_audio_in_window_t2_ParamLimits

0x3536,	// (0x00011fd8) popup_call3_audio_in_window_t2

0x3574,	// (0x00012016) popup_call3_audio_in_window_t3_ParamLimits

0x3574,	// (0x00012016) popup_call3_audio_in_window_t3

0x0002,

0xf56a,	// (0x0001e00c) popup_call3_audio_in_window_t_ParamLimits

0xf56a,	// (0x0001e00c) popup_call3_audio_in_window_t

0x9b1c,	// (0x000185be) bg_popup_call3_rect_pane

0xb8e3,	// (0x0001a385) bg_popup_call3_rect_pane_g1

0x99db,	// (0x0001847d) bg_popup_call3_rect_pane_g2

0xb8eb,	// (0x0001a38d) bg_popup_call3_rect_pane_g3

0xb8f3,	// (0x0001a395) bg_popup_call3_rect_pane_g4

0xb8fb,	// (0x0001a39d) bg_popup_call3_rect_pane_g5

0xb903,	// (0x0001a3a5) bg_popup_call3_rect_pane_g6

0xb90b,	// (0x0001a3ad) bg_popup_call3_rect_pane_g7

0x90dd,	// (0x00017b7f) mup_visualizer_osc_pane

0x90dd,	// (0x00017b7f) mup_visualizer_spec_pane

0x3441,	// (0x00011ee3) call3_video_qcif_pane_ParamLimits

0x3441,	// (0x00011ee3) call3_video_qcif_pane

0x3454,	// (0x00011ef6) call3_video_qcif_uncrop_pane_ParamLimits

0x3454,	// (0x00011ef6) call3_video_qcif_uncrop_pane

0x3462,	// (0x00011f04) call3_video_subqcif_pane_ParamLimits

0x3462,	// (0x00011f04) call3_video_subqcif_pane

0x3476,	// (0x00011f18) call3_video_subqcif_uncrop_pane_ParamLimits

0x3476,	// (0x00011f18) call3_video_subqcif_uncrop_pane

0x34e7,	// (0x00011f89) popup_call3_audio_in_window_g4_ParamLimits

0x34e7,	// (0x00011f89) popup_call3_audio_in_window_g4

0x90dd,	// (0x00017b7f) mup_spec_half_pane

0x90dd,	// (0x00017b7f) mup_spec_half_pane_cp

0x90dd,	// (0x00017b7f) mup_osc_middle_pane

0x9b5c,	// (0x000185fe) mup_visualizer_osc_pane_g1

0xbaf1,	// (0x0001a593) mup_spec_bar_pane_ParamLimits

0xbaf1,	// (0x0001a593) mup_spec_bar_pane

0x9b5c,	// (0x000185fe) mup_spec_bar_pane_g1

0x9b5c,	// (0x000185fe) mup_spec_bar_pane_g2

0x0001,

0xf398,	// (0x0001de3a) mup_spec_bar_pane_g

0x0a6a,	// (0x0000f50c) aid_cale_week_size_cell_pane_ParamLimits

0x0a84,	// (0x0000f526) bg_cale_heading_pane_ParamLimits

0x9a7e,	// (0x00018520) bg_cale_pane_cp01_ParamLimits

0x0a9c,	// (0x0000f53e) cale_week_corner_pane_ParamLimits

0x0abb,	// (0x0000f55d) cale_week_day_heading_pane_ParamLimits

0x0ad8,	// (0x0000f57a) cale_week_scroll_pane_g1_ParamLimits

0x0aeb,	// (0x0000f58d) cale_week_scroll_pane_g2_ParamLimits

0x0b03,	// (0x0000f5a5) cale_week_scroll_pane_g3_ParamLimits

0x0b1b,	// (0x0000f5bd) cale_week_scroll_pane_g4_ParamLimits

0x0b33,	// (0x0000f5d5) cale_week_scroll_pane_g5_ParamLimits

0x0b53,	// (0x0000f5f5) cale_week_scroll_pane_g6_ParamLimits

0x0b73,	// (0x0000f615) cale_week_scroll_pane_g7_ParamLimits

0x0b93,	// (0x0000f635) cale_week_scroll_pane_g8_ParamLimits

0x0bb7,	// (0x0000f659) cale_week_scroll_pane_g9_ParamLimits

0x0bcf,	// (0x0000f671) cale_week_scroll_pane_g10_ParamLimits

0x0be7,	// (0x0000f689) cale_week_scroll_pane_g11_ParamLimits

0x0bff,	// (0x0000f6a1) cale_week_scroll_pane_g12_ParamLimits

0x0c17,	// (0x0000f6b9) cale_week_scroll_pane_g13_ParamLimits

0x0c17,	// (0x0000f6b9) cale_week_scroll_pane_g14_ParamLimits

0x0c17,	// (0x0000f6b9) cale_week_scroll_pane_g15_ParamLimits

0xf12b,	// (0x0001dbcd) cale_week_scroll_pane_g_ParamLimits

0x0c53,	// (0x0000f6f5) cale_week_time_pane_ParamLimits

0x0c77,	// (0x0000f719) grid_cale_week_pane_ParamLimits

0x9a9b,	// (0x0001853d) listscroll_cale_week_pane_t1

0x9aad,	// (0x0001854f) scroll_pane_cp08_ParamLimits

0x1727,	// (0x000101c9) cale_month_corner_pane_ParamLimits

0x9e46,	// (0x000188e8) cale_month_pane_t1

0x1b45,	// (0x000105e7) cale_month_week_pane_ParamLimits

0x225a,	// (0x00010cfc) popup_call_status_window_g1_ParamLimits

0x226e,	// (0x00010d10) popup_call_status_window_g2_ParamLimits

0x2282,	// (0x00010d24) popup_call_status_window_g3_ParamLimits

0xf2a5,	// (0x0001dd47) popup_call_status_window_g_ParamLimits

0xa23c,	// (0x00018cde) aid_call2_pane

0x276a,	// (0x0001120c) msg_header_pane_g1

0x28bd,	// (0x0001135f) postcard_address2_pane_ParamLimits

0x28bd,	// (0x0001135f) postcard_address2_pane

0x28cf,	// (0x00011371) postcard_message2_pane_ParamLimits

0x28cf,	// (0x00011371) postcard_message2_pane

0x33e2,	// (0x00011e84) message2_row_pane_ParamLimits

0x33e2,	// (0x00011e84) message2_row_pane

0x33fe,	// (0x00011ea0) address2_row_pane_ParamLimits

0x33fe,	// (0x00011ea0) address2_row_pane

0xbabe,	// (0x0001a560) postcard_message2_row_pane_g1

0xbac6,	// (0x0001a568) postcard_message2_row_pane_t1

0xbabe,	// (0x0001a560) address2_row_pane_g1

0xbac6,	// (0x0001a568) address2_row_pane_t1

0x0fa7,	// (0x0000fa49) aid_size_cell_vorec

0x956d,	// (0x0001800f) main_rss_pane

0xbad4,	// (0x0001a576) rss_list_single_pane_ParamLimits

0xbad4,	// (0x0001a576) rss_list_single_pane

0xbae2,	// (0x0001a584) rss_list_single_pane_t1

0xbae2,	// (0x0001a584) rss_list_single_pane_t2

0x0001,

0xf555,	// (0x0001dff7) rss_list_single_pane_t

0x956d,	// (0x0001800f) main_camera2_pane

0x956d,	// (0x0001800f) main_video2_pane

0xbb94,	// (0x0001a636) cams_zoom_pane_cp2_ParamLimits

0xbb94,	// (0x0001a636) cams_zoom_pane_cp2

0xbb94,	// (0x0001a636) image2_vga_pane_ParamLimits

0xbb94,	// (0x0001a636) image2_vga_pane

0xbba2,	// (0x0001a644) main_camera2_pane_g1_ParamLimits

0xbba2,	// (0x0001a644) main_camera2_pane_g1

0xbba2,	// (0x0001a644) main_camera2_pane_g2_ParamLimits

0xbba2,	// (0x0001a644) main_camera2_pane_g2

0xbba2,	// (0x0001a644) main_camera2_pane_g3_ParamLimits

0xbba2,	// (0x0001a644) main_camera2_pane_g3

0xbba2,	// (0x0001a644) main_camera2_pane_g4_ParamLimits

0xbba2,	// (0x0001a644) main_camera2_pane_g4

0xbba2,	// (0x0001a644) main_camera2_pane_g5_ParamLimits

0xbba2,	// (0x0001a644) main_camera2_pane_g5

0xbba2,	// (0x0001a644) main_camera2_pane_g6_ParamLimits

0xbba2,	// (0x0001a644) main_camera2_pane_g6

0xbba2,	// (0x0001a644) main_camera2_pane_g7_ParamLimits

0xbba2,	// (0x0001a644) main_camera2_pane_g7

0xbba2,	// (0x0001a644) main_camera2_pane_g8_ParamLimits

0xbba2,	// (0x0001a644) main_camera2_pane_g8

0x0008,

0xf571,	// (0x0001e013) main_camera2_pane_g_ParamLimits

0xf571,	// (0x0001e013) main_camera2_pane_g

0x35a8,	// (0x0001204a) main_camera2_pane_t1_ParamLimits

0x35a8,	// (0x0001204a) main_camera2_pane_t1

0x35a8,	// (0x0001204a) main_camera2_pane_t2_ParamLimits

0x35a8,	// (0x0001204a) main_camera2_pane_t2

0x35a8,	// (0x0001204a) main_camera2_pane_t3_ParamLimits

0x35a8,	// (0x0001204a) main_camera2_pane_t3

0x35a8,	// (0x0001204a) main_camera2_pane_t4_ParamLimits

0x35a8,	// (0x0001204a) main_camera2_pane_t4

0x0006,

0xf584,	// (0x0001e026) main_camera2_pane_t_ParamLimits

0xf584,	// (0x0001e026) main_camera2_pane_t

0xbbc4,	// (0x0001a666) cams_zoom_pane_cp4_ParamLimits

0xbbc4,	// (0x0001a666) cams_zoom_pane_cp4

0xbbd2,	// (0x0001a674) image2_cif_pane_ParamLimits

0xbbd2,	// (0x0001a674) image2_cif_pane

0x914c,	// (0x00017bee) image2_subqcif_pane_ParamLimits

0x914c,	// (0x00017bee) image2_subqcif_pane

0x35bc,	// (0x0001205e) main_video2_pane_g1_ParamLimits

0x35bc,	// (0x0001205e) main_video2_pane_g1

0x35bc,	// (0x0001205e) main_video2_pane_g2_ParamLimits

0x35bc,	// (0x0001205e) main_video2_pane_g2

0x35bc,	// (0x0001205e) main_video2_pane_g3_ParamLimits

0x35bc,	// (0x0001205e) main_video2_pane_g3

0x35bc,	// (0x0001205e) main_video2_pane_g4_ParamLimits

0x35bc,	// (0x0001205e) main_video2_pane_g4

0x35bc,	// (0x0001205e) main_video2_pane_g5_ParamLimits

0x35bc,	// (0x0001205e) main_video2_pane_g5

0x35bc,	// (0x0001205e) main_video2_pane_g6_ParamLimits

0x35bc,	// (0x0001205e) main_video2_pane_g6

0x0005,

0xf593,	// (0x0001e035) main_video2_pane_g_ParamLimits

0xf593,	// (0x0001e035) main_video2_pane_g

0x35ca,	// (0x0001206c) main_video2_pane_t1_ParamLimits

0x35ca,	// (0x0001206c) main_video2_pane_t1

0x35ca,	// (0x0001206c) main_video2_pane_t2_ParamLimits

0x35ca,	// (0x0001206c) main_video2_pane_t2

0x35ca,	// (0x0001206c) main_video2_pane_t3_ParamLimits

0x35ca,	// (0x0001206c) main_video2_pane_t3

0x0002,

0xf5a0,	// (0x0001e042) main_video2_pane_t_ParamLimits

0xf5a0,	// (0x0001e042) main_video2_pane_t

0x2f2e,	// (0x000119d0) call_muted_g2

0x0001,

0xf547,	// (0x0001dfe9) call_muted_g

0x956d,	// (0x0001800f) main_mup2_pane

0xa6f0,	// (0x00019192) main_mup2_pane_g1_ParamLimits

0xa6f0,	// (0x00019192) main_mup2_pane_g1

0xa6f0,	// (0x00019192) main_mup2_pane_g2_ParamLimits

0xa6f0,	// (0x00019192) main_mup2_pane_g2

0x9b5c,	// (0x000185fe) main_mup_pane_g13_cp1

0x90dd,	// (0x00017b7f) mup_volume_pane_cp1

0xa6f0,	// (0x00019192) main_mup2_pane_g4_ParamLimits

0xa6f0,	// (0x00019192) main_mup2_pane_g4

0xa6f0,	// (0x00019192) main_mup2_pane_g5_ParamLimits

0xa6f0,	// (0x00019192) main_mup2_pane_g5

0xa6f0,	// (0x00019192) main_mup2_pane_g6_ParamLimits

0xa6f0,	// (0x00019192) main_mup2_pane_g6

0xa6f0,	// (0x00019192) main_mup2_pane_g7_ParamLimits

0xa6f0,	// (0x00019192) main_mup2_pane_g7

0x0006,

0xf5a7,	// (0x0001e049) main_mup2_pane_g_ParamLimits

0xf5a7,	// (0x0001e049) main_mup2_pane_g

0xa6fe,	// (0x000191a0) main_mup2_pane_t1_ParamLimits

0xa6fe,	// (0x000191a0) main_mup2_pane_t1

0xa6fe,	// (0x000191a0) main_mup2_pane_t2_ParamLimits

0xa6fe,	// (0x000191a0) main_mup2_pane_t2

0xa6fe,	// (0x000191a0) main_mup2_pane_t3_ParamLimits

0xa6fe,	// (0x000191a0) main_mup2_pane_t3

0xa6fe,	// (0x000191a0) main_mup2_pane_t4_ParamLimits

0xa6fe,	// (0x000191a0) main_mup2_pane_t4

0xa6fe,	// (0x000191a0) main_mup2_pane_t5_ParamLimits

0xa6fe,	// (0x000191a0) main_mup2_pane_t5

0xa6fe,	// (0x000191a0) main_mup2_pane_t6_ParamLimits

0xa6fe,	// (0x000191a0) main_mup2_pane_t6

0x0005,

0xf5b6,	// (0x0001e058) main_mup2_pane_t_ParamLimits

0xf5b6,	// (0x0001e058) main_mup2_pane_t

0xa726,	// (0x000191c8) mup2_visualizer_pane_ParamLimits

0xa726,	// (0x000191c8) mup2_visualizer_pane

0xa726,	// (0x000191c8) mup_progress_pane_cp_ParamLimits

0xa726,	// (0x000191c8) mup_progress_pane_cp

0xbbe0,	// (0x0001a682) mup_volume_pane_cp_ParamLimits

0xbbe0,	// (0x0001a682) mup_volume_pane_cp

0x9843,	// (0x000182e5) mup2_visualizer_pane_g1_ParamLimits

0x9843,	// (0x000182e5) mup2_visualizer_pane_g1

0x9851,	// (0x000182f3) mup2_visualizer_pane_g2_ParamLimits

0x9851,	// (0x000182f3) mup2_visualizer_pane_g2

0x9851,	// (0x000182f3) mup2_visualizer_pane_g3_ParamLimits

0x9851,	// (0x000182f3) mup2_visualizer_pane_g3

0x0002,

0xf0a4,	// (0x0001db46) mup2_visualizer_pane_g_ParamLimits

0xf0a4,	// (0x0001db46) mup2_visualizer_pane_g

0xaa12,	// (0x000194b4) aid_size_cell_fmradio

0x30e0,	// (0x00011b82) aid_height_parent_landcape

0x9ca4,	// (0x00018746) wml_content_pane_cp

0x9cac,	// (0x0001874e) wml_tabs_pane

0x9cb5,	// (0x00018757) popup_wml_miniature_window

0x9cbd,	// (0x0001875f) scroll_pane_cp021

0x9cd1,	// (0x00018773) wml_content_pane_comp8

0x956d,	// (0x0001800f) bg_popup_sub_pane_cp05

0xbbf6,	// (0x0001a698) popup_wml_miniature_window_g1

0xbbfe,	// (0x0001a6a0) wml_miniature_view_pane

0x35de,	// (0x00012080) aid_size_wml_view

0x35e6,	// (0x00012088) wml_miniature_view_pane_g1

0x35ef,	// (0x00012091) wml_miniature_view_pane_g2

0x35f8,	// (0x0001209a) wml_miniature_view_pane_g3

0x3600,	// (0x000120a2) wml_miniature_view_pane_g4

0x3608,	// (0x000120aa) wml_miniature_view_pane_g5

0x3610,	// (0x000120b2) wml_miniature_view_pane_g6

0x3618,	// (0x000120ba) wml_miniature_view_pane_g7

0x3620,	// (0x000120c2) wml_miniature_view_pane_g8

0x0007,

0xf5c3,	// (0x0001e065) wml_miniature_view_pane_g

0xbc06,	// (0x0001a6a8) background_graphic_ParamLimits

0xbc06,	// (0x0001a6a8) background_graphic

0xbc12,	// (0x0001a6b4) wml_tabs_2_pane

0xbc1b,	// (0x0001a6bd) wml_tabs_3_pane_ParamLimits

0xbc1b,	// (0x0001a6bd) wml_tabs_3_pane

0xbc2d,	// (0x0001a6cf) wml_tabs_4_pane_ParamLimits

0xbc2d,	// (0x0001a6cf) wml_tabs_4_pane

0xbc43,	// (0x0001a6e5) wml_tabs_5_pane_ParamLimits

0xbc43,	// (0x0001a6e5) wml_tabs_5_pane

0xbc5d,	// (0x0001a6ff) wml_tabs_pane_g2_ParamLimits

0xbc5d,	// (0x0001a6ff) wml_tabs_pane_g2

0xbc72,	// (0x0001a714) wml_tabs_pane_g3_ParamLimits

0xbc72,	// (0x0001a714) wml_tabs_pane_g3

0xbc87,	// (0x0001a729) wml_tabs_2_active_pane_ParamLimits

0xbc87,	// (0x0001a729) wml_tabs_2_active_pane

0xbc87,	// (0x0001a729) wml_tabs_2_passive_pane_ParamLimits

0xbc87,	// (0x0001a729) wml_tabs_2_passive_pane

0x3628,	// (0x000120ca) wml_tabs_3_active_pane_cp_ParamLimits

0x3628,	// (0x000120ca) wml_tabs_3_active_pane_cp

0x363d,	// (0x000120df) wml_tabs_3_passive_pane_ParamLimits

0x363d,	// (0x000120df) wml_tabs_3_passive_pane

0x3650,	// (0x000120f2) wml_tabs_3_passive_pane_cp_ParamLimits

0x3650,	// (0x000120f2) wml_tabs_3_passive_pane_cp

0x3667,	// (0x00012109) tabs_4_active_pane

0x366f,	// (0x00012111) tabs_4_passive_pane

0x3679,	// (0x0001211b) tabs_4_passive_pane_cp

0x3681,	// (0x00012123) tabs_4_passive_pane_cp2

0x2e22,	// (0x000118c4) aid_height_text

0xa726,	// (0x000191c8) mup_volume_cont_pane_ParamLimits

0xa726,	// (0x000191c8) mup_volume_cont_pane

0x90dd,	// (0x00017b7f) aid_size_cell_pinb

0x90dd,	// (0x00017b7f) aid_size_list_pinb

0xa726,	// (0x000191c8) mup2_volume_cont_pane_ParamLimits

0xa726,	// (0x000191c8) mup2_volume_cont_pane

0xbc95,	// (0x0001a737) mup2_volume_cont_pane_g1_ParamLimits

0xbc95,	// (0x0001a737) mup2_volume_cont_pane_g1

0x046c,	// (0x0000ef0e) aid_size_cell_touch_ParamLimits

0x046c,	// (0x0000ef0e) aid_size_cell_touch

0x0698,	// (0x0000f13a) touch_pane_ParamLimits

0x0698,	// (0x0000f13a) touch_pane

0x90dd,	// (0x00017b7f) main_rss2_pane

0xbcb4,	// (0x0001a756) listscroll_rss2_pane

0xbcbd,	// (0x0001a75f) rss2_navigation_pane

0xbcc5,	// (0x0001a767) list_rss2_pane

0xa3e6,	// (0x00018e88) scroll_pane_cp22

0xbccd,	// (0x0001a76f) rss2_navigation_pane_g1

0xbcd6,	// (0x0001a778) rss2_navigation_pane_g2

0xbcde,	// (0x0001a780) rss2_navigation_pane_g3

0x0002,

0xf5d4,	// (0x0001e076) rss2_navigation_pane_g

0xbce6,	// (0x0001a788) rss2_navigation_pane_t1

0x368b,	// (0x0001212d) rss2_list_single_pane_ParamLimits

0x368b,	// (0x0001212d) rss2_list_single_pane

0xbcf4,	// (0x0001a796) rss2_list_single_pane_t2

0xbd02,	// (0x0001a7a4) rss2_list_single_pane_t3_ParamLimits

0xbd02,	// (0x0001a7a4) rss2_list_single_pane_t3

0xbd1f,	// (0x0001a7c1) rss2_list_single_pane_t4

0x2147,	// (0x00010be9) smil_status_pane_g1

0x914c,	// (0x00017bee) main_image2_pane_ParamLimits

0x914c,	// (0x00017bee) main_image2_pane

0xbba2,	// (0x0001a644) main_camera2_pane_g9_ParamLimits

0xbba2,	// (0x0001a644) main_camera2_pane_g9

0x35a8,	// (0x0001204a) main_camera2_pane_t5_ParamLimits

0x35a8,	// (0x0001204a) main_camera2_pane_t5

0xbbb0,	// (0x0001a652) main_camera2_pane_t6_ParamLimits

0xbbb0,	// (0x0001a652) main_camera2_pane_t6

0x36a0,	// (0x00012142) main_image2_pane_g1_ParamLimits

0x36a0,	// (0x00012142) main_image2_pane_g1

0x2af6,	// (0x00011598) smil2_video_pane_ParamLimits

0x2af6,	// (0x00011598) smil2_video_pane

0x90fb,	// (0x00017b9d) aid_zoom_text_primary_cp

0x9142,	// (0x00017be4) popup_preview_fixed_window

0x9c0d,	// (0x000186af) im_reading_pane_g1

0x359a,	// (0x0001203c) cams2_bc_adjust_pane_cp_ParamLimits

0x359a,	// (0x0001203c) cams2_bc_adjust_pane_cp

0xa726,	// (0x000191c8) cams2_bc_adjust_pane_ParamLimits

0xa726,	// (0x000191c8) cams2_bc_adjust_pane

0x9b5c,	// (0x000185fe) cams2_bc_adjust_pane_g1

0x90dd,	// (0x00017b7f) cams2_slider_pane

0x9b5c,	// (0x000185fe) cams2_slider_pane_g1

0x9b5c,	// (0x000185fe) cams2_slider_pane_g2

0x0006,

0xf5db,	// (0x0001e07d) cams2_slider_pane_g

0x0760,	// (0x0000f202) calc_display_pane_ParamLimits

0x0785,	// (0x0000f227) calc_paper_pane_ParamLimits

0x07a8,	// (0x0000f24a) grid_calc_pane_ParamLimits

0xa2a2,	// (0x00018d44) popup_clock_digital_window_t1_ParamLimits

0xa9af,	// (0x00019451) main_image_pane_t1

0x0742,	// (0x0000f1e4) aid_size_cell_calc_ParamLimits

0x0742,	// (0x0000f1e4) aid_size_cell_calc

0x3126,	// (0x00011bc8) popup_blid_sat_info2_window_ParamLimits

0x3126,	// (0x00011bc8) popup_blid_sat_info2_window

0xbd2d,	// (0x0001a7cf) aid_size_cell_blid

0xbbd2,	// (0x0001a674) bg_popup_window_pane_cp07

0xbd4a,	// (0x0001a7ec) grid_popup_blid_pane

0xbd54,	// (0x0001a7f6) heading_pane_cp05_ParamLimits

0xbd54,	// (0x0001a7f6) heading_pane_cp05

0xbe1e,	// (0x0001a8c0) cell_popup_blid_pane_ParamLimits

0xbe1e,	// (0x0001a8c0) cell_popup_blid_pane

0xbe42,	// (0x0001a8e4) cell_popup_blid_pane_g1

0xbe4a,	// (0x0001a8ec) cell_popup_blid_pane_t1

0xa726,	// (0x000191c8) mup2_indicator_pane_ParamLimits

0xa726,	// (0x000191c8) mup2_indicator_pane

0x90dd,	// (0x00017b7f) mup2_visualizer_osc_pane

0xbbe0,	// (0x0001a682) mup2_visualizer_spec_pane_ParamLimits

0xbbe0,	// (0x0001a682) mup2_visualizer_spec_pane

0x90dd,	// (0x00017b7f) mup2_spec_half_pane

0x90dd,	// (0x00017b7f) mup2_spec_half_pane_cp

0xbe58,	// (0x0001a8fa) mup2_spec_bar_pane_ParamLimits

0xbe58,	// (0x0001a8fa) mup2_spec_bar_pane

0x9b5c,	// (0x000185fe) mup2_spec_bar_pane_g1

0xbe77,	// (0x0001a919) mup2_spec_bar_pane_g2

0x0001,

0xf601,	// (0x0001e0a3) mup2_spec_bar_pane_g

0x90dd,	// (0x00017b7f) mup2_osc_middle_pane

0x9b5c,	// (0x000185fe) mup2_visualizer_osc_pane_g1

0x917a,	// (0x00017c1c) popup_number_entry_window_t1_ParamLimits

0x918d,	// (0x00017c2f) popup_number_entry_window_t2_ParamLimits

0x919f,	// (0x00017c41) popup_number_entry_window_t3_ParamLimits

0x06ea,	// (0x0000f18c) popup_number_entry_window_t5_ParamLimits

0x06ea,	// (0x0000f18c) popup_number_entry_window_t5

0xf045,	// (0x0001dae7) popup_number_entry_window_t_ParamLimits

0x91b1,	// (0x00017c53) text_title_cp2_ParamLimits

0xa889,	// (0x0001932b) aid_hotspot_pointer_text2_pane

0xa8af,	// (0x00019351) main_viewer_pane_g9_ParamLimits

0xa8af,	// (0x00019351) main_viewer_pane_g9

0x9e46,	// (0x000188e8) cale_month_pane_t1_ParamLimits

0x9eb1,	// (0x00018953) bg_cale_pane_ParamLimits

0x9ec9,	// (0x0001896b) list_cale_pane_ParamLimits

0x9eda,	// (0x0001897c) listscroll_cale_day_pane_t1

0x9eec,	// (0x0001898e) scroll_pane_cp09_ParamLimits

0x2504,	// (0x00010fa6) main_mup_eq_pane_t1_ParamLimits

0x2504,	// (0x00010fa6) main_mup_eq_pane_t1

0x251e,	// (0x00010fc0) main_mup_eq_pane_t2_ParamLimits

0x251e,	// (0x00010fc0) main_mup_eq_pane_t2

0x2538,	// (0x00010fda) main_mup_eq_pane_t3_ParamLimits

0x2538,	// (0x00010fda) main_mup_eq_pane_t3

0x2554,	// (0x00010ff6) main_mup_eq_pane_t4_ParamLimits

0x2554,	// (0x00010ff6) main_mup_eq_pane_t4

0x2570,	// (0x00011012) main_mup_eq_pane_t5_ParamLimits

0x2570,	// (0x00011012) main_mup_eq_pane_t5

0x258c,	// (0x0001102e) main_mup_eq_pane_t6_ParamLimits

0x258c,	// (0x0001102e) main_mup_eq_pane_t6

0x25a0,	// (0x00011042) main_mup_eq_pane_t7_ParamLimits

0x25a0,	// (0x00011042) main_mup_eq_pane_t7

0x25b4,	// (0x00011056) main_mup_eq_pane_t8_ParamLimits

0x25b4,	// (0x00011056) main_mup_eq_pane_t8

0x25c8,	// (0x0001106a) main_mup_eq_pane_t9_ParamLimits

0x25c8,	// (0x0001106a) main_mup_eq_pane_t9

0x25e2,	// (0x00011084) main_mup_eq_pane_t10_ParamLimits

0x25e2,	// (0x00011084) main_mup_eq_pane_t10

0x0009,

0xf3a4,	// (0x0001de46) main_mup_eq_pane_t_ParamLimits

0xf3a4,	// (0x0001de46) main_mup_eq_pane_t

0x2691,	// (0x00011133) mup_equalizer_pane_cp5_ParamLimits

0x26a5,	// (0x00011147) mup_equalizer_pane_cp6_ParamLimits

0x26b9,	// (0x0001115b) mup_equalizer_pane_cp7_ParamLimits

0x90dd,	// (0x00017b7f) main_gallery_pane

0xbb10,	// (0x0001a5b2) smil2_volume_pane

0xbb18,	// (0x0001a5ba) smil_status_volume_pane_g1_ParamLimits

0xbb2b,	// (0x0001a5cd) smil_status_volume_pane_g2_ParamLimits

0xbb3e,	// (0x0001a5e0) smil_status_volume_pane_g3_ParamLimits

0xf55a,	// (0x0001dffc) smil_status_volume_pane_g_ParamLimits

0xbbd2,	// (0x0001a674) bg_popup_window_pane_cp07_ParamLimits

0xbd35,	// (0x0001a7d7) blid_firmament_pane

0x914c,	// (0x00017bee) aid_size_cell_gallery_ParamLimits

0x914c,	// (0x00017bee) aid_size_cell_gallery

0x914c,	// (0x00017bee) grid_gallery_pane_ParamLimits

0x914c,	// (0x00017bee) grid_gallery_pane

0xbbd2,	// (0x0001a674) cell_gallery_pane_ParamLimits

0xbbd2,	// (0x0001a674) cell_gallery_pane

0x914c,	// (0x00017bee) bg_cell_gallery_focus_pane_ParamLimits

0x914c,	// (0x00017bee) bg_cell_gallery_focus_pane

0x9843,	// (0x000182e5) cell_gallery_pane_g1_ParamLimits

0x9843,	// (0x000182e5) cell_gallery_pane_g1

0x9843,	// (0x000182e5) cell_gallery_pane_g2_ParamLimits

0x9843,	// (0x000182e5) cell_gallery_pane_g2

0x9843,	// (0x000182e5) cell_gallery_pane_g3_ParamLimits

0x9843,	// (0x000182e5) cell_gallery_pane_g3

0x9851,	// (0x000182f3) cell_gallery_pane_g4_ParamLimits

0x9851,	// (0x000182f3) cell_gallery_pane_g4

0x0003,

0xf606,	// (0x0001e0a8) cell_gallery_pane_g_ParamLimits

0xf606,	// (0x0001e0a8) cell_gallery_pane_g

0xbe81,	// (0x0001a923) bg_cell_gallery_focus_pane_g1

0xbe89,	// (0x0001a92b) bg_cell_gallery_focus_pane_g2

0xbe91,	// (0x0001a933) bg_cell_gallery_focus_pane_g3

0xbe99,	// (0x0001a93b) bg_cell_gallery_focus_pane_g4

0xbea1,	// (0x0001a943) bg_cell_gallery_focus_pane_g5

0xbea9,	// (0x0001a94b) bg_cell_gallery_focus_pane_g6

0xbeb1,	// (0x0001a953) bg_cell_gallery_focus_pane_g7

0xbeb9,	// (0x0001a95b) bg_cell_gallery_focus_pane_g8

0x0007,

0xf60f,	// (0x0001e0b1) bg_cell_gallery_focus_pane_g

0xbec1,	// (0x0001a963) aid_firma_cardinal

0xbed5,	// (0x0001a977) blid_firmament_pane_t1

0xbeec,	// (0x0001a98e) blid_firmament_pane_t2

0xbf03,	// (0x0001a9a5) blid_firmament_pane_t3

0xbf1a,	// (0x0001a9bc) blid_firmament_pane_t4

0x0003,

0xf620,	// (0x0001e0c2) blid_firmament_pane_t

0xbf31,	// (0x0001a9d3) blid_sat_info_pane

0x9b5c,	// (0x000185fe) blid_sat_info_pane_g1

0x9b5c,	// (0x000185fe) blid_sat_info_pane_g2

0x0001,

0xf398,	// (0x0001de3a) blid_sat_info_pane_g

0xbf41,	// (0x0001a9e3) blid_sat_info_pane_t1

0xbf4f,	// (0x0001a9f1) smil2_volume_content_pane

0xbf58,	// (0x0001a9fa) smil2_volume_pane_g1

0x9972,	// (0x00018414) smil2_volume_content_pane_g1

0xbf60,	// (0x0001aa02) smil2_volume_content_pane_g2

0xbf69,	// (0x0001aa0b) smil2_volume_content_pane_g3

0xbf72,	// (0x0001aa14) smil2_volume_content_pane_g4

0xbf7b,	// (0x0001aa1d) smil2_volume_content_pane_g5

0xbf84,	// (0x0001aa26) smil2_volume_content_pane_g6

0xbf8d,	// (0x0001aa2f) smil2_volume_content_pane_g7

0xbf96,	// (0x0001aa38) smil2_volume_content_pane_g8

0xbf9f,	// (0x0001aa41) smil2_volume_content_pane_g9

0xbfa8,	// (0x0001aa4a) smil2_volume_content_pane_g10

0x0009,

0xf629,	// (0x0001e0cb) smil2_volume_content_pane_g

0x0d2b,	// (0x0000f7cd) cale_week_day_heading_pane_t1_ParamLimits

0x0d55,	// (0x0000f7f7) cale_week_day_heading_pane_t2_ParamLimits

0x0d84,	// (0x0000f826) cale_week_day_heading_pane_t3_ParamLimits

0x0db3,	// (0x0000f855) cale_week_day_heading_pane_t4_ParamLimits

0x0de2,	// (0x0000f884) cale_week_day_heading_pane_t5_ParamLimits

0x0e19,	// (0x0000f8bb) cale_week_day_heading_pane_t6_ParamLimits

0x0e50,	// (0x0000f8f2) cale_week_day_heading_pane_t7_ParamLimits

0xf14c,	// (0x0001dbee) cale_week_day_heading_pane_t_ParamLimits

0x9aca,	// (0x0001856c) bg_cale_side_pane_ParamLimits

0x0e7a,	// (0x0000f91c) cale_week_time_pane_t1_ParamLimits

0x0e94,	// (0x0000f936) cale_week_time_pane_t2_ParamLimits

0x0eae,	// (0x0000f950) cale_week_time_pane_t3_ParamLimits

0x0ec8,	// (0x0000f96a) cale_week_time_pane_t4_ParamLimits

0x0ee2,	// (0x0000f984) cale_week_time_pane_t5_ParamLimits

0x0efc,	// (0x0000f99e) cale_week_time_pane_t6_ParamLimits

0x0f16,	// (0x0000f9b8) cale_week_time_pane_t7_ParamLimits

0x0f30,	// (0x0000f9d2) cale_week_time_pane_t8_ParamLimits

0xf15b,	// (0x0001dbfd) cale_week_time_pane_t_ParamLimits

0x0f4a,	// (0x0000f9ec) cell_cale_week_pane_g2_ParamLimits

0x9aca,	// (0x0001856c) bg_cale_side_pane_cp01_ParamLimits

0x1f4e,	// (0x000109f0) cale_month_week_pane_t1_ParamLimits

0x1f67,	// (0x00010a09) cale_month_week_pane_t2_ParamLimits

0x1f80,	// (0x00010a22) cale_month_week_pane_t3_ParamLimits

0x1f99,	// (0x00010a3b) cale_month_week_pane_t4_ParamLimits

0x1fb2,	// (0x00010a54) cale_month_week_pane_t5_ParamLimits

0x1fcb,	// (0x00010a6d) cale_month_week_pane_t6_ParamLimits

0xf229,	// (0x0001dccb) cale_month_week_pane_t_ParamLimits

0x9e58,	// (0x000188fa) cell_cale_month_pane_g1_ParamLimits

0x90dd,	// (0x00017b7f) main_cale_event_viewer_pane

0x90dd,	// (0x00017b7f) listscroll_cale_event_viewer_pane

0xbfb1,	// (0x0001aa53) list_cale_ev_pane

0xbfb9,	// (0x0001aa5b) scroll_pane_cp023

0xbfc5,	// (0x0001aa67) field_cale_ev_pane_ParamLimits

0xbfc5,	// (0x0001aa67) field_cale_ev_pane

0xbfe3,	// (0x0001aa85) field_cale_ev_content_pane_ParamLimits

0xbfe3,	// (0x0001aa85) field_cale_ev_content_pane

0xbfef,	// (0x0001aa91) field_cale_ev_pane_g1_ParamLimits

0xbfef,	// (0x0001aa91) field_cale_ev_pane_g1

0xbffb,	// (0x0001aa9d) field_cale_ev_pane_g2_ParamLimits

0xbffb,	// (0x0001aa9d) field_cale_ev_pane_g2

0xc013,	// (0x0001aab5) field_cale_ev_pane_g3_ParamLimits

0xc013,	// (0x0001aab5) field_cale_ev_pane_g3

0x0002,

0xf63e,	// (0x0001e0e0) field_cale_ev_pane_g_ParamLimits

0xf63e,	// (0x0001e0e0) field_cale_ev_pane_g

0xc02b,	// (0x0001aacd) field_cale_ev_pane_t1_ParamLimits

0xc02b,	// (0x0001aacd) field_cale_ev_pane_t1

0x99f5,	// (0x00018497) field_cale_ev_content_pane_t1_ParamLimits

0x99f5,	// (0x00018497) field_cale_ev_content_pane_t1

0xa7d1,	// (0x00019273) bg_button_pane_cp01

0x0a58,	// (0x0000f4fa) listscroll_cale_week_pane_ParamLimits

0x9a75,	// (0x00018517) popup_toolbar_window_cp01

0x9a9b,	// (0x0001853d) listscroll_cale_week_pane_t1_ParamLimits

0x0a58,	// (0x0000f4fa) listscroll_cale_day_pane_ParamLimits

0x9a75,	// (0x00018517) popup_toolbar_window_cp02

0x9eda,	// (0x0001897c) listscroll_cale_day_pane_t1_ParamLimits

0x0a58,	// (0x0000f4fa) main_cale_month_pane_ParamLimits

0xba8e,	// (0x0001a530) popup_toolbar_window_cp03_ParamLimits

0xba8e,	// (0x0001a530) popup_toolbar_window_cp03

0x29be,	// (0x00011460) main_image_pane_g2_ParamLimits

0x29be,	// (0x00011460) main_image_pane_g2

0x29cf,	// (0x00011471) main_image_pane_g3_ParamLimits

0x29cf,	// (0x00011471) main_image_pane_g3

0x0002,

0xf436,	// (0x0001ded8) main_image_pane_g_ParamLimits

0xf436,	// (0x0001ded8) main_image_pane_g

0xa9af,	// (0x00019451) main_image_pane_t1_ParamLimits

0x29e0,	// (0x00011482) main_image_pane_t2_ParamLimits

0x29e0,	// (0x00011482) main_image_pane_t2

0x29f2,	// (0x00011494) main_image_pane_t3_ParamLimits

0x29f2,	// (0x00011494) main_image_pane_t3

0x2a1a,	// (0x000114bc) main_image_pane_t4_ParamLimits

0x2a1a,	// (0x000114bc) main_image_pane_t4

0x0003,

0xf43d,	// (0x0001dedf) main_image_pane_t_ParamLimits

0xf43d,	// (0x0001dedf) main_image_pane_t

0x2a3a,	// (0x000114dc) popup_image_details_window_cp01

0x2a44,	// (0x000114e6) popup_toobar_trans_pane_cp01_ParamLimits

0x2a44,	// (0x000114e6) popup_toobar_trans_pane_cp01

0x3205,	// (0x00011ca7) popup_image_details_window_ParamLimits

0x3205,	// (0x00011ca7) popup_image_details_window

0xba61,	// (0x0001a503) popup_image_focus_window

0xbb94,	// (0x0001a636) camera2_autofocus_pane_ParamLimits

0xbb94,	// (0x0001a636) camera2_autofocus_pane

0x90dd,	// (0x00017b7f) bg_popup_sub_pane_cp06

0xc042,	// (0x0001aae4) popup_image_focus_window_g1

0xc04a,	// (0x0001aaec) popup_image_focus_window_g2

0xc052,	// (0x0001aaf4) popup_image_focus_window_g3

0xc05a,	// (0x0001aafc) popup_image_focus_window_g4

0x0003,

0xf645,	// (0x0001e0e7) popup_image_focus_window_g

0xc062,	// (0x0001ab04) popup_image_focus_window_t1

0xc070,	// (0x0001ab12) popup_image_focus_window_t2

0xc080,	// (0x0001ab22) popup_image_focus_window_t3

0x0002,

0xf64e,	// (0x0001e0f0) popup_image_focus_window_t

0x9843,	// (0x000182e5) camera2_autofocus_pane_g1

0x914c,	// (0x00017bee) bg_tb_trans_pane_cp01

0xc08e,	// (0x0001ab30) popup_image_details_window_g1

0xc0a1,	// (0x0001ab43) popup_image_details_window_g2

0x0002,

0xf660,	// (0x0001e102) popup_image_details_window_g

0xc0ca,	// (0x0001ab6c) popup_image_details_window_t1

0xc0dc,	// (0x0001ab7e) popup_image_details_window_t2

0xc0f5,	// (0x0001ab97) popup_image_details_window_t3

0xc109,	// (0x0001abab) popup_image_details_window_t4

0xc124,	// (0x0001abc6) popup_image_details_window_t5

0x0004,

0xf667,	// (0x0001e109) popup_image_details_window_t

0x98a9,	// (0x0001834b) bg_calc_paper_pane_ParamLimits

0x90dd,	// (0x00017b7f) grid_highlight_pane_cp013

0x98bd,	// (0x0001835f) list_calc_pane_ParamLimits

0x98cf,	// (0x00018371) scroll_pane_cp024

0x98d7,	// (0x00018379) bg_calc_display_pane_ParamLimits

0x08a6,	// (0x0000f348) calc_display_pane_t1_ParamLimits

0x08bb,	// (0x0000f35d) calc_display_pane_t2_ParamLimits

0x98e3,	// (0x00018385) calc_display_pane_t3_ParamLimits

0xf0cc,	// (0x0001db6e) calc_display_pane_t_ParamLimits

0x097b,	// (0x0000f41d) cell_calc_pane_g2

0x0001,

0xf0e9,	// (0x0001db8b) cell_calc_pane_g

0x0984,	// (0x0000f426) cell_calc_pane_t1

0x9950,	// (0x000183f2) grid_highlight_pane_cp02_ParamLimits

0x9966,	// (0x00018408) toolbar_button_pane_cp01_ParamLimits

0x9966,	// (0x00018408) toolbar_button_pane_cp01

0xa9f4,	// (0x00019496) temp_image_control_pane_ParamLimits

0xa9f4,	// (0x00019496) temp_image_control_pane

0x914c,	// (0x00017bee) main_mp3_pane

0xc13e,	// (0x0001abe0) temp_image_control_pane_g1_ParamLimits

0xc13e,	// (0x0001abe0) temp_image_control_pane_g1

0xc14c,	// (0x0001abee) temp_image_control_pane_g2_ParamLimits

0xc14c,	// (0x0001abee) temp_image_control_pane_g2

0xc15e,	// (0x0001ac00) temp_image_control_pane_g3_ParamLimits

0xc15e,	// (0x0001ac00) temp_image_control_pane_g3

0x36b6,	// (0x00012158) temp_image_control_pane_g4_ParamLimits

0x36b6,	// (0x00012158) temp_image_control_pane_g4

0x0003,

0xf672,	// (0x0001e114) temp_image_control_pane_g_ParamLimits

0xf672,	// (0x0001e114) temp_image_control_pane_g

0xc13e,	// (0x0001abe0) main_mp3_pane_g1

0x36c9,	// (0x0001216b) main_mp3_pane_g2

0x0007,

0xf67b,	// (0x0001e11d) main_mp3_pane_g

0xc193,	// (0x0001ac35) main_mp3_pane_t1

0x9851,	// (0x000182f3) main_camera_pane_g8_ParamLimits

0x9851,	// (0x000182f3) main_camera_pane_g8

0x1114,	// (0x0000fbb6) main_video_pane_g7_ParamLimits

0x1114,	// (0x0000fbb6) main_video_pane_g7

0xa712,	// (0x000191b4) main_camera2_pane_t7_ParamLimits

0xa712,	// (0x000191b4) main_camera2_pane_t7

0x9c64,	// (0x00018706) scroll_pane_cp025_ParamLimits

0x9c64,	// (0x00018706) scroll_pane_cp025

0x9c78,	// (0x0001871a) scroll_pane_cp026_ParamLimits

0x9c78,	// (0x0001871a) scroll_pane_cp026

0x9c87,	// (0x00018729) wml_content_pane_ParamLimits

0x90dd,	// (0x00017b7f) main_touch_calib_pane

0x379d,	// (0x0001223f) main_touch_calib_pane_g1

0x37af,	// (0x00012251) main_touch_calib_pane_g2

0x37c1,	// (0x00012263) main_touch_calib_pane_g3

0x37d3,	// (0x00012275) main_touch_calib_pane_g4

0x0003,

0xf699,	// (0x0001e13b) main_touch_calib_pane_g

0x37e5,	// (0x00012287) main_touch_calib_pane_t1

0x37ff,	// (0x000122a1) main_touch_calib_pane_t2

0x0004,

0xf6a2,	// (0x0001e144) main_touch_calib_pane_t

0xa4c2,	// (0x00018f64) mup_progress_pane_cp02

0xa4f7,	// (0x00018f99) navi_pane_g1

0xa5b2,	// (0x00019054) navi_pane_mp_t3

0x914c,	// (0x00017bee) main_mp3_pane_ParamLimits

0x338a,	// (0x00011e2c) navi_pane_ParamLimits

0xc13e,	// (0x0001abe0) main_mp3_pane_g1_ParamLimits

0x36c9,	// (0x0001216b) main_mp3_pane_g2_ParamLimits

0x36d7,	// (0x00012179) main_mp3_pane_g3_ParamLimits

0x36d7,	// (0x00012179) main_mp3_pane_g3

0x36e5,	// (0x00012187) main_mp3_pane_g4_ParamLimits

0x36e5,	// (0x00012187) main_mp3_pane_g4

0x9843,	// (0x000182e5) main_mp3_pane_g5_ParamLimits

0x9843,	// (0x000182e5) main_mp3_pane_g5

0xc16e,	// (0x0001ac10) main_mp3_pane_g6_ParamLimits

0xc16e,	// (0x0001ac10) main_mp3_pane_g6

0xc17b,	// (0x0001ac1d) main_mp3_pane_g7_ParamLimits

0xc17b,	// (0x0001ac1d) main_mp3_pane_g7

0xc187,	// (0x0001ac29) main_mp3_pane_g8_ParamLimits

0xc187,	// (0x0001ac29) main_mp3_pane_g8

0xf67b,	// (0x0001e11d) main_mp3_pane_g_ParamLimits

0x36f1,	// (0x00012193) main_mp3_pane_t2

0x36ff,	// (0x000121a1) main_mp3_pane_t3

0xc1a1,	// (0x0001ac43) main_mp3_pane_t4

0xc1af,	// (0x0001ac51) main_mp3_pane_t5

0x0005,

0xf68c,	// (0x0001e12e) main_mp3_pane_t

0xc1bd,	// (0x0001ac5f) mup_progress_pane_cp01

0x90fb,	// (0x00017b9d) aid_zoom_text_secondary2

0xbfb1,	// (0x0001aa53) list_cale_ev2_pane

0xbfb9,	// (0x0001aa5b) scroll_pane_cp023_ParamLimits

0x3855,	// (0x000122f7) field_cale_ev2_pane_ParamLimits

0x3855,	// (0x000122f7) field_cale_ev2_pane

0x3875,	// (0x00012317) field_cale_ev2_pane_g1_ParamLimits

0x3875,	// (0x00012317) field_cale_ev2_pane_g1

0x3881,	// (0x00012323) field_cale_ev2_pane_g2_ParamLimits

0x3881,	// (0x00012323) field_cale_ev2_pane_g2

0x3899,	// (0x0001233b) field_cale_ev2_pane_g3_ParamLimits

0x3899,	// (0x0001233b) field_cale_ev2_pane_g3

0x0003,

0xf6ad,	// (0x0001e14f) field_cale_ev2_pane_g_ParamLimits

0xf6ad,	// (0x0001e14f) field_cale_ev2_pane_g

0x38b1,	// (0x00012353) field_cale_ev2_pane_t1_ParamLimits

0x38b1,	// (0x00012353) field_cale_ev2_pane_t1

0x38c8,	// (0x0001236a) field_cale_ev2_pane_t2_ParamLimits

0x38c8,	// (0x0001236a) field_cale_ev2_pane_t2

0x0001,

0xf6b6,	// (0x0001e158) field_cale_ev2_pane_t_ParamLimits

0xf6b6,	// (0x0001e158) field_cale_ev2_pane_t

0x2873,	// (0x00011315) main_postcard_pane_g5_ParamLimits

0x2873,	// (0x00011315) main_postcard_pane_g5

0x2889,	// (0x0001132b) main_postcard_pane_g6_ParamLimits

0x2889,	// (0x0001132b) main_postcard_pane_g6

0x914c,	// (0x00017bee) camera2_autofocus_pane_cp_ParamLimits

0x914c,	// (0x00017bee) camera2_autofocus_pane_cp

0x914c,	// (0x00017bee) main_mup3_pane

0x3921,	// (0x000123c3) main_mup3_pane_g1_ParamLimits

0x3921,	// (0x000123c3) main_mup3_pane_g1

0x3943,	// (0x000123e5) main_mup3_pane_g2_ParamLimits

0x3943,	// (0x000123e5) main_mup3_pane_g2

0x39c1,	// (0x00012463) main_mup3_pane_g3_ParamLimits

0x39c1,	// (0x00012463) main_mup3_pane_g3

0x3a07,	// (0x000124a9) main_mup3_pane_g4_ParamLimits

0x3a07,	// (0x000124a9) main_mup3_pane_g4

0x3a4d,	// (0x000124ef) main_mup3_pane_g5_ParamLimits

0x3a4d,	// (0x000124ef) main_mup3_pane_g5

0x3a93,	// (0x00012535) main_mup3_pane_g6_ParamLimits

0x3a93,	// (0x00012535) main_mup3_pane_g6

0x9851,	// (0x000182f3) main_mup3_pane_g7_ParamLimits

0x9851,	// (0x000182f3) main_mup3_pane_g7

0x0007,

0xf6c6,	// (0x0001e168) main_mup3_pane_g_ParamLimits

0xf6c6,	// (0x0001e168) main_mup3_pane_g

0x3b11,	// (0x000125b3) main_mup3_pane_t1_ParamLimits

0x3b11,	// (0x000125b3) main_mup3_pane_t1

0x3b85,	// (0x00012627) main_mup3_pane_t2_ParamLimits

0x3b85,	// (0x00012627) main_mup3_pane_t2

0x3c59,	// (0x000126fb) main_mup3_pane_t4_ParamLimits

0x3c59,	// (0x000126fb) main_mup3_pane_t4

0x3caf,	// (0x00012751) main_mup3_pane_t5_ParamLimits

0x3caf,	// (0x00012751) main_mup3_pane_t5

0x3d6b,	// (0x0001280d) main_mup3_pane_t6_ParamLimits

0x3d6b,	// (0x0001280d) main_mup3_pane_t6

0x0005,

0xf6d7,	// (0x0001e179) main_mup3_pane_t_ParamLimits

0xf6d7,	// (0x0001e179) main_mup3_pane_t

0x3e23,	// (0x000128c5) mup3_progress_pane_ParamLimits

0x3e23,	// (0x000128c5) mup3_progress_pane

0x3eb9,	// (0x0001295b) popup_mup3_control_window_ParamLimits

0x3eb9,	// (0x0001295b) popup_mup3_control_window

0xc1d1,	// (0x0001ac73) popup_mup3_text_window

0x3eeb,	// (0x0001298d) mup3_progress_pane_t1

0x3f0a,	// (0x000129ac) mup3_progress_pane_t2

0xc1d9,	// (0x0001ac7b) mup3_progress_pane_t3

0x0002,

0xf6e4,	// (0x0001e186) mup3_progress_pane_t

0xc1f6,	// (0x0001ac98) mup_progress_pane_cp03

0x90dd,	// (0x00017b7f) bg_tb_trans_pane_cp04

0x3f29,	// (0x000129cb) mup3_volume_pane

0x3f31,	// (0x000129d3) popup_mup3_control_window_g1

0x3f3a,	// (0x000129dc) mup3_volume_pane_g1

0x3f43,	// (0x000129e5) mup3_volume_pane_g2

0x3f4c,	// (0x000129ee) mup3_volume_pane_g3

0x0002,

0xf6eb,	// (0x0001e18d) mup3_volume_pane_g

0x90dd,	// (0x00017b7f) bg_tb_trans_pane_cp03

0xc206,	// (0x0001aca8) popup_mup3_text_window_g1

0xc20e,	// (0x0001acb0) popup_mup3_text_window_t1

0x9931,	// (0x000183d3) list_calc_item_pane_g1_ParamLimits

0xbcab,	// (0x0001a74d) mup_volume_pane_cp_g1

0x3819,	// (0x000122bb) main_touch_calib_pane_t3

0x382d,	// (0x000122cf) main_touch_calib_pane_t4

0x3841,	// (0x000122e3) main_touch_calib_pane_t5

0x90e7,	// (0x00017b89) aid_cell_size_toolbar2

0x90ef,	// (0x00017b91) aid_popup3_width_pane

0x90fb,	// (0x00017b9d) aid_zoom_text_msg_primary

0x0fef,	// (0x0000fa91) vorec_t7

0x98f5,	// (0x00018397) bg_calc_paper_pane_g1_ParamLimits

0x9901,	// (0x000183a3) bg_calc_paper_pane_g2_ParamLimits

0x990d,	// (0x000183af) bg_calc_paper_pane_g3_ParamLimits

0x9919,	// (0x000183bb) bg_calc_paper_pane_g4_ParamLimits

0x9925,	// (0x000183c7) bg_calc_paper_pane_g5_ParamLimits

0x0905,	// (0x0000f3a7) bg_calc_paper_pane_g6_ParamLimits

0x0914,	// (0x0000f3b6) bg_calc_paper_pane_g7_ParamLimits

0x0923,	// (0x0000f3c5) bg_calc_paper_pane_g8_ParamLimits

0xf0d3,	// (0x0001db75) bg_calc_paper_pane_g_ParamLimits

0x0936,	// (0x0000f3d8) calc_bg_paper_pane_g9_ParamLimits

0x914c,	// (0x00017bee) image_qvga_pane_ParamLimits

0x914c,	// (0x00017bee) image_qvga_pane

0x97c8,	// (0x0001826a) bg_popup_sub_pane_cp04_ParamLimits

0xa92b,	// (0x000193cd) popup_mup_playback_window_g1_ParamLimits

0xa937,	// (0x000193d9) popup_mup_playback_window_t1_ParamLimits

0xa94c,	// (0x000193ee) popup_mup_playback_window_t2_ParamLimits

0xf431,	// (0x0001ded3) popup_mup_playback_window_t_ParamLimits

0x9851,	// (0x000182f3) main_mup2_pane_g3_ParamLimits

0x9851,	// (0x000182f3) main_mup2_pane_g3

0x131c,	// (0x0000fdbe) popup_toolbar_window_cp04

0xad2e,	// (0x000197d0) popup_call2_audio_second_window_g3_ParamLimits

0xad2e,	// (0x000197d0) popup_call2_audio_second_window_g3

0xb146,	// (0x00019be8) popup_call2_audio_first_window_g4_ParamLimits

0xb146,	// (0x00019be8) popup_call2_audio_first_window_g4

0xb76d,	// (0x0001a20f) popup_call2_audio_in_window_g4_ParamLimits

0xb76d,	// (0x0001a20f) popup_call2_audio_in_window_g4

0x29a0,	// (0x00011442) aid_area_sk_bg_cut_ParamLimits

0x29a0,	// (0x00011442) aid_area_sk_bg_cut

0xa961,	// (0x00019403) aid_area_sk_bg_cut_2_ParamLimits

0xa961,	// (0x00019403) aid_area_sk_bg_cut_2

0x90dd,	// (0x00017b7f) aid_placing_details_win

0x90dd,	// (0x00017b7f) aid_placing_details_win_2

0x9843,	// (0x000182e5) camera2_autofocus_pane_g1_ParamLimits

0x0631,	// (0x0000f0d3) popup_fixed_preview_cale_window_ParamLimits

0x0631,	// (0x0000f0d3) popup_fixed_preview_cale_window

0xa639,	// (0x000190db) navi_slider_pane_g3

0xa642,	// (0x000190e4) navi_slider_pane_g4

0xa64b,	// (0x000190ed) navi_slider_pane_g5

0xa639,	// (0x000190db) navi_slider_pane_g6

0xa654,	// (0x000190f6) navi_slider_pane_g7

0xa796,	// (0x00019238) mup_scale_pane_g3

0xa79f,	// (0x00019241) mup_scale_pane_g4

0xa7a8,	// (0x0001924a) mup_scale_pane_g5

0x26cd,	// (0x0001116f) mup_scale_pane_g6

0x26d6,	// (0x00011178) mup_scale_pane_g7

0x9b5c,	// (0x000185fe) cams2_slider_pane_g3

0x9b5c,	// (0x000185fe) cams2_slider_pane_g4

0x9b5c,	// (0x000185fe) cams2_slider_pane_g5

0x9b5c,	// (0x000185fe) cams2_slider_pane_g6

0x9b5c,	// (0x000185fe) cams2_slider_pane_g7

0x9b5c,	// (0x000185fe) camera2_autofocus_pane_cp_g1

0xba43,	// (0x0001a4e5) bg_popup_preview_window_pane_cp02_ParamLimits

0xba43,	// (0x0001a4e5) bg_popup_preview_window_pane_cp02

0xc21c,	// (0x0001acbe) list_fp_cale_pane_ParamLimits

0xc21c,	// (0x0001acbe) list_fp_cale_pane

0xc228,	// (0x0001acca) popup_fixed_preview_cale_window_t1_ParamLimits

0xc228,	// (0x0001acca) popup_fixed_preview_cale_window_t1

0x3f55,	// (0x000129f7) popup_fixed_preview_cale_window_t2_ParamLimits

0x3f55,	// (0x000129f7) popup_fixed_preview_cale_window_t2

0x3f6a,	// (0x00012a0c) popup_fixed_preview_cale_window_t3_ParamLimits

0x3f6a,	// (0x00012a0c) popup_fixed_preview_cale_window_t3

0x0002,

0xf6f2,	// (0x0001e194) popup_fixed_preview_cale_window_t_ParamLimits

0xf6f2,	// (0x0001e194) popup_fixed_preview_cale_window_t

0x3f7f,	// (0x00012a21) list_single_fp_cale_pane_ParamLimits

0x3f7f,	// (0x00012a21) list_single_fp_cale_pane

0xc246,	// (0x0001ace8) list_single_fp_cale_pane_g1_ParamLimits

0xc246,	// (0x0001ace8) list_single_fp_cale_pane_g1

0xc252,	// (0x0001acf4) list_single_fp_cale_pane_g2_ParamLimits

0xc252,	// (0x0001acf4) list_single_fp_cale_pane_g2

0x0002,

0xf6f9,	// (0x0001e19b) list_single_fp_cale_pane_g_ParamLimits

0xf6f9,	// (0x0001e19b) list_single_fp_cale_pane_g

0xc26b,	// (0x0001ad0d) list_single_fp_cale_pane_t1_ParamLimits

0xc26b,	// (0x0001ad0d) list_single_fp_cale_pane_t1

0xc27d,	// (0x0001ad1f) list_single_fp_cale_pane_t2_ParamLimits

0xc27d,	// (0x0001ad1f) list_single_fp_cale_pane_t2

0x0001,

0xf700,	// (0x0001e1a2) list_single_fp_cale_pane_t_ParamLimits

0xf700,	// (0x0001e1a2) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x90dd,	// (0x00017b7f) main_dialer_pane

0x90dd,	// (0x00017b7f) aid_cell_size_keypad

0x90dd,	// (0x00017b7f) dialer_ne_pane

0x90dd,	// (0x00017b7f) grid_dialer_command_1_pane

0x90dd,	// (0x00017b7f) grid_dialer_command_2_pane

0x90dd,	// (0x00017b7f) grid_dialer_keypad_pane

0x3f94,	// (0x00012a36) bg_popup_call_pane_cp06_ParamLimits

0x3f94,	// (0x00012a36) bg_popup_call_pane_cp06

0x3f94,	// (0x00012a36) dialer_ne_clear_pane_ParamLimits

0x3f94,	// (0x00012a36) dialer_ne_clear_pane

0x9b5c,	// (0x000185fe) dialer_ne_pane_g1

0xa712,	// (0x000191b4) dialer_ne_pane_t1_ParamLimits

0xa712,	// (0x000191b4) dialer_ne_pane_t1

0x3fa2,	// (0x00012a44) dialer_ne_pane_t2_ParamLimits

0x3fa2,	// (0x00012a44) dialer_ne_pane_t2

0x3fca,	// (0x00012a6c) dialer_ne_pane_t3_ParamLimits

0x3fca,	// (0x00012a6c) dialer_ne_pane_t3

0x0002,

0xf705,	// (0x0001e1a7) dialer_ne_pane_t_ParamLimits

0xf705,	// (0x0001e1a7) dialer_ne_pane_t

0x3fca,	// (0x00012a6c) dialer_ne_pane_t3_copy1_ParamLimits

0x3fca,	// (0x00012a6c) dialer_ne_pane_t3_copy1

0xc2b0,	// (0x0001ad52) cell_dialer_keypad_pane_ParamLimits

0xc2b0,	// (0x0001ad52) cell_dialer_keypad_pane

0x914c,	// (0x00017bee) cell_dialer_command_1_pane_ParamLimits

0x914c,	// (0x00017bee) cell_dialer_command_1_pane

0xc2c7,	// (0x0001ad69) cell_dialer_command_2_pane_ParamLimits

0xc2c7,	// (0x0001ad69) cell_dialer_command_2_pane

0x914c,	// (0x00017bee) bg_button_pane_cp02_ParamLimits

0x914c,	// (0x00017bee) bg_button_pane_cp02

0x9843,	// (0x000182e5) cell_dialer_keypad_pane_g1_ParamLimits

0x9843,	// (0x000182e5) cell_dialer_keypad_pane_g1

0x914c,	// (0x00017bee) bg_button_pane_cp03_ParamLimits

0x914c,	// (0x00017bee) bg_button_pane_cp03

0x9843,	// (0x000182e5) cell_dialer_command_1_pane_g1_ParamLimits

0x9843,	// (0x000182e5) cell_dialer_command_1_pane_g1

0x90dd,	// (0x00017b7f) bg_button_pane_cp04

0x9b5c,	// (0x000185fe) cell_dialer_command_2_pane_g1

0x90dd,	// (0x00017b7f) bg_button_pane_cp06

0x9b5c,	// (0x000185fe) dialer_ne_clear_pane_g1

0xa503,	// (0x00018fa5) navi_pane_g2

0xa531,	// (0x00018fd3) navi_pane_g3

0x0002,

0xf334,	// (0x0001ddd6) navi_pane_g

0xa5c0,	// (0x00019062) navi_pane_mv_g2

0xa5e7,	// (0x00019089) navi_pane_mv_g5

0x24b0,	// (0x00010f52) navi_pane_mv_t1

0x98d7,	// (0x00018379) main_clock2_pane

0x914c,	// (0x00017bee) main_clock2_list_pane_ParamLimits

0x914c,	// (0x00017bee) main_clock2_list_pane

0x4060,	// (0x00012b02) main_clock2_pane_t1_ParamLimits

0x4060,	// (0x00012b02) main_clock2_pane_t1

0x409b,	// (0x00012b3d) main_clock2_pane_t2_ParamLimits

0x409b,	// (0x00012b3d) main_clock2_pane_t2

0x0004,

0xf711,	// (0x0001e1b3) main_clock2_pane_t_ParamLimits

0xf711,	// (0x0001e1b3) main_clock2_pane_t

0x413b,	// (0x00012bdd) popup_clock_analogue_window_cp03_ParamLimits

0x413b,	// (0x00012bdd) popup_clock_analogue_window_cp03

0x4160,	// (0x00012c02) popup_clock_digital_window_cp02_ParamLimits

0x4160,	// (0x00012c02) popup_clock_digital_window_cp02

0x41d9,	// (0x00012c7b) main_clock2_list_single_pane_ParamLimits

0x41d9,	// (0x00012c7b) main_clock2_list_single_pane

0x9b1c,	// (0x000185be) list_highlight_pane_cp05

0xc30e,	// (0x0001adb0) main_clock2_list_single_pane_t1

0x131c,	// (0x0000fdbe) popup_toolbar_window_cp04_ParamLimits

0x9851,	// (0x000182f3) camera2_autofocus_pane_g2_ParamLimits

0x9851,	// (0x000182f3) camera2_autofocus_pane_g2

0x9851,	// (0x000182f3) camera2_autofocus_pane_g3_ParamLimits

0x9851,	// (0x000182f3) camera2_autofocus_pane_g3

0x9851,	// (0x000182f3) camera2_autofocus_pane_g4_ParamLimits

0x9851,	// (0x000182f3) camera2_autofocus_pane_g4

0x9851,	// (0x000182f3) camera2_autofocus_pane_g5_ParamLimits

0x9851,	// (0x000182f3) camera2_autofocus_pane_g5

0x0004,

0xf655,	// (0x0001e0f7) camera2_autofocus_pane_g_ParamLimits

0xf655,	// (0x0001e0f7) camera2_autofocus_pane_g

0x38dd,	// (0x0001237f) camera2_autofocus_pane_cp_g2

0x38e5,	// (0x00012387) camera2_autofocus_pane_cp_g3

0x38ed,	// (0x0001238f) camera2_autofocus_pane_cp_g4

0x38f5,	// (0x00012397) camera2_autofocus_pane_cp_g5

0x0004,

0xf6bb,	// (0x0001e15d) camera2_autofocus_pane_cp_g

0x90dd,	// (0x00017b7f) popup_dialer_spcha_window

0x90dd,	// (0x00017b7f) bg_popup_sub_pane_cp07

0x90dd,	// (0x00017b7f) list_spcha_pane

0xc31c,	// (0x0001adbe) list_single_spcha_pane_ParamLimits

0xc31c,	// (0x0001adbe) list_single_spcha_pane

0x90dd,	// (0x00017b7f) list_highlight_pane_cp06

0xa0c5,	// (0x00018b67) list_single_spcha_pane_t1

0xb517,	// (0x00019fb9) popup_call2_audio_out_window_g4_ParamLimits

0xb517,	// (0x00019fb9) popup_call2_audio_out_window_g4

0x90dd,	// (0x00017b7f) main_imed2_pane

0xba69,	// (0x0001a50b) popup_imed_adjust2_window

0x321d,	// (0x00011cbf) popup_imed_trans_window_ParamLimits

0x321d,	// (0x00011cbf) popup_imed_trans_window

0xbd80,	// (0x0001a822) popup_blid_sat_info2_window_t1

0xbd8e,	// (0x0001a830) popup_blid_sat_info2_window_t2

0x000a,

0xf5ea,	// (0x0001e08c) popup_blid_sat_info2_window_t

0x428a,	// (0x00012d2c) aid_size_cell_colour_35

0x42aa,	// (0x00012d4c) aid_size_cell_colour_112

0x42ca,	// (0x00012d6c) aid_size_cell_effect

0xa726,	// (0x000191c8) bg_tb_trans_pane_cp02

0x9feb,	// (0x00018a8d) heading_imed_pane

0x42ea,	// (0x00012d8c) listscroll_imed_pane

0xc32e,	// (0x0001add0) heading_imed_pane_g1

0xc336,	// (0x0001add8) heading_imed_pane_t1

0xc344,	// (0x0001ade6) grid_imed_colour_35_pane_ParamLimits

0xc344,	// (0x0001ade6) grid_imed_colour_35_pane

0x42f6,	// (0x00012d98) grid_imed_effect_pane

0xc35b,	// (0x0001adfd) list_imed_aspect_pane

0x430c,	// (0x00012dae) scroll_pane_cp027_ParamLimits

0x430c,	// (0x00012dae) scroll_pane_cp027

0x431d,	// (0x00012dbf) cell_imed_effect_pane_ParamLimits

0x431d,	// (0x00012dbf) cell_imed_effect_pane

0xc363,	// (0x0001ae05) cell_imed_colour_pane_ParamLimits

0xc363,	// (0x0001ae05) cell_imed_colour_pane

0xc3a5,	// (0x0001ae47) cell_imed_colour_pane_g1_ParamLimits

0xc3a5,	// (0x0001ae47) cell_imed_colour_pane_g1

0xc3b6,	// (0x0001ae58) hgihlgiht_grid_pane_cp016_ParamLimits

0xc3b6,	// (0x0001ae58) hgihlgiht_grid_pane_cp016

0x4344,	// (0x00012de6) cell_imed_effect_pane_g1

0x434c,	// (0x00012dee) grid_highlight_pane_cp017

0xc3c7,	// (0x0001ae69) list_imed_single_pane_ParamLimits

0xc3c7,	// (0x0001ae69) list_imed_single_pane

0x90dd,	// (0x00017b7f) list_highlight_pane_cp07

0xc3dc,	// (0x0001ae7e) list_imed_aspect_pane_comp1_t1

0xa726,	// (0x000191c8) bg_tb_trans_pane_cp05

0xc3fe,	// (0x0001aea0) popup_imed_adjust2_window_g1

0xc425,	// (0x0001aec7) popup_imed_adjust2_window_t1

0xc43d,	// (0x0001aedf) slider_imed_adjust_pane

0xc451,	// (0x0001aef3) slider_imed_adjust_pane_g1

0xc461,	// (0x0001af03) slider_imed_adjust_pane_g2

0xc471,	// (0x0001af13) slider_imed_adjust_pane_g3

0xc482,	// (0x0001af24) slider_imed_adjust_pane_g4

0x0003,

0xf72e,	// (0x0001e1d0) slider_imed_adjust_pane_g

0x4355,	// (0x00012df7) aid_size_cell_clipart2

0x4361,	// (0x00012e03) grid_imed_clipart_pane

0xc493,	// (0x0001af35) scroll_pane_cp031

0x436b,	// (0x00012e0d) cell_imed_clipart_pane_ParamLimits

0x436b,	// (0x00012e0d) cell_imed_clipart_pane

0x438d,	// (0x00012e2f) cell_imed_clipart_pane_g1

0x90dd,	// (0x00017b7f) grid_highlight_pane_cp014

0x403c,	// (0x00012ade) main_clock2_pane_g1_ParamLimits

0x403c,	// (0x00012ade) main_clock2_pane_g1

0x4180,	// (0x00012c22) aid_call2_pane_cp10

0x4192,	// (0x00012c34) aid_call_pane_cp10

0xa464,	// (0x00018f06) popup_clock_analogue_window_cp10_g1

0xa464,	// (0x00018f06) popup_clock_analogue_window_cp10_g2

0x41a4,	// (0x00012c46) popup_clock_analogue_window_cp10_g3

0x41a4,	// (0x00012c46) popup_clock_analogue_window_cp10_g4

0xa464,	// (0x00018f06) popup_clock_analogue_window_cp10_g5

0x0004,

0xf71c,	// (0x0001e1be) popup_clock_analogue_window_cp10_g

0x41ba,	// (0x00012c5c) popup_clock_analogue_window_cp10_t1

0x41eb,	// (0x00012c8d) clock_digital_number_pane_cp10_ParamLimits

0x41eb,	// (0x00012c8d) clock_digital_number_pane_cp10

0x4203,	// (0x00012ca5) clock_digital_number_pane_cp11_ParamLimits

0x4203,	// (0x00012ca5) clock_digital_number_pane_cp11

0x421b,	// (0x00012cbd) clock_digital_number_pane_cp12_ParamLimits

0x421b,	// (0x00012cbd) clock_digital_number_pane_cp12

0x4235,	// (0x00012cd7) clock_digital_number_pane_cp13_ParamLimits

0x4235,	// (0x00012cd7) clock_digital_number_pane_cp13

0x424f,	// (0x00012cf1) clock_digital_separator_pane_cp10_ParamLimits

0x424f,	// (0x00012cf1) clock_digital_separator_pane_cp10

0x4269,	// (0x00012d0b) popup_clock_digital_window_cp02_t1_ParamLimits

0x4269,	// (0x00012d0b) popup_clock_digital_window_cp02_t1

0x97c0,	// (0x00018262) clock_digital_number_pane_cp10_g1

0x97c0,	// (0x00018262) clock_digital_number_pane_cp10_g2

0x0001,

0xf737,	// (0x0001e1d9) clock_digital_number_pane_cp10_g

0x97c0,	// (0x00018262) clock_digital_separator_pane_cp10_g1

0x97c0,	// (0x00018262) clock_digital_separator_pane_g2_cp10

0xa5ef,	// (0x00019091) navi_pane_vded_g4

0xa5f8,	// (0x0001909a) navi_pane_vded_g5

0xa601,	// (0x000190a3) navi_pane_vded_t1

0x90dd,	// (0x00017b7f) main_vded_pane

0x4396,	// (0x00012e38) main_vded_pane_g1

0x43a0,	// (0x00012e42) main_vded_pane_g2

0x43aa,	// (0x00012e4c) main_vded_pane_g3

0x0002,

0xf73c,	// (0x0001e1de) main_vded_pane_g

0x43b4,	// (0x00012e56) main_vded_pane_t1

0x43c2,	// (0x00012e64) main_vded_pane_t2

0x0001,

0xf743,	// (0x0001e1e5) main_vded_pane_t

0x43d0,	// (0x00012e72) vded_slider_pane

0x43d8,	// (0x00012e7a) vded_video_pane

0xc49b,	// (0x0001af3d) vded_video_pane_g1

0x43e0,	// (0x00012e82) vded_video_pane_g2

0x9b5c,	// (0x000185fe) vded_video_pane_g3

0x0002,

0xf748,	// (0x0001e1ea) vded_video_pane_g

0xc4a5,	// (0x0001af47) vded_slider_pane_g1

0xbcab,	// (0x0001a74d) vded_slider_pane_g2

0xc4ae,	// (0x0001af50) vded_slider_pane_g3

0xc4b7,	// (0x0001af59) vded_slider_pane_g4

0xc4c0,	// (0x0001af62) vded_slider_pane_g5

0x0004,

0xf74f,	// (0x0001e1f1) vded_slider_pane_g

0x3ea1,	// (0x00012943) mup3_rocker_pane_ParamLimits

0x3ea1,	// (0x00012943) mup3_rocker_pane

0x43e9,	// (0x00012e8b) mup3_control_keys_pane_g1

0x43f1,	// (0x00012e93) mup3_control_keys_pane_g2

0x43f9,	// (0x00012e9b) mup3_control_keys_pane_g3

0x4401,	// (0x00012ea3) mup3_control_keys_pane_g4

0x0003,

0xf75a,	// (0x0001e1fc) mup3_control_keys_pane_g

0x0668,	// (0x0000f10a) popup_toolbar2_fixed_window_cp01_ParamLimits

0x0668,	// (0x0000f10a) popup_toolbar2_fixed_window_cp01

0x3ed5,	// (0x00012977) popup_toolbar2_fixed_window_cp02_ParamLimits

0x3ed5,	// (0x00012977) popup_toolbar2_fixed_window_cp02

0xaea0,	// (0x00019942) popup_call2_audio_second_window_t4_ParamLimits

0xaea0,	// (0x00019942) popup_call2_audio_second_window_t4

0xb3dc,	// (0x00019e7e) popup_call2_audio_first_window_t6_ParamLimits

0xb3dc,	// (0x00019e7e) popup_call2_audio_first_window_t6

0xb61a,	// (0x0001a0bc) popup_call2_audio_out_window_t6_ParamLimits

0xb61a,	// (0x0001a0bc) popup_call2_audio_out_window_t6

0x90dd,	// (0x00017b7f) main_vitu_pane

0x914c,	// (0x00017bee) aid_size_cell_itu_ParamLimits

0x914c,	// (0x00017bee) aid_size_cell_itu

0x914c,	// (0x00017bee) bg_popup_window_pane_cp08_ParamLimits

0x914c,	// (0x00017bee) bg_popup_window_pane_cp08

0x914c,	// (0x00017bee) field_vitu_entry_pane_ParamLimits

0x914c,	// (0x00017bee) field_vitu_entry_pane

0x914c,	// (0x00017bee) grid_vitu_function_pane_ParamLimits

0x914c,	// (0x00017bee) grid_vitu_function_pane

0x914c,	// (0x00017bee) grid_vitu_itu_pane_ParamLimits

0x914c,	// (0x00017bee) grid_vitu_itu_pane

0x914c,	// (0x00017bee) cell_vitu_itu_pane_ParamLimits

0x914c,	// (0x00017bee) cell_vitu_itu_pane

0x914c,	// (0x00017bee) cell_vitu_function_pane_ParamLimits

0x914c,	// (0x00017bee) cell_vitu_function_pane

0x914c,	// (0x00017bee) bg_popup_sub_pane_cp08_ParamLimits

0x914c,	// (0x00017bee) bg_popup_sub_pane_cp08

0x9b2e,	// (0x000185d0) field_vitu_entry_pane_t1_ParamLimits

0x9b2e,	// (0x000185d0) field_vitu_entry_pane_t1

0xc4c9,	// (0x0001af6b) field_vitu_entry_pane_t2_ParamLimits

0xc4c9,	// (0x0001af6b) field_vitu_entry_pane_t2

0x0001,

0xf763,	// (0x0001e205) field_vitu_entry_pane_t_ParamLimits

0xf763,	// (0x0001e205) field_vitu_entry_pane_t

0xbbd2,	// (0x0001a674) bg_button_pane_cp05_ParamLimits

0xbbd2,	// (0x0001a674) bg_button_pane_cp05

0xc4e6,	// (0x0001af88) cell_vitu_itu_pane_g1

0xa6fe,	// (0x000191a0) cell_vitu_itu_pane_t1_ParamLimits

0xa6fe,	// (0x000191a0) cell_vitu_itu_pane_t1

0xa6fe,	// (0x000191a0) cell_vitu_itu_pane_t2_ParamLimits

0xa6fe,	// (0x000191a0) cell_vitu_itu_pane_t2

0x0002,

0xf768,	// (0x0001e20a) cell_vitu_itu_pane_t_ParamLimits

0xf768,	// (0x0001e20a) cell_vitu_itu_pane_t

0x90dd,	// (0x00017b7f) bg_button_pane_cp07

0x9b5c,	// (0x000185fe) cell_vitu_function_pane_g1

0x9881,	// (0x00018323) main_calc_pane_g1

0x0490,	// (0x0000ef32) aid_visual_content_pane

0x90dd,	// (0x00017b7f) main_vradio_pane

0x9843,	// (0x000182e5) main_vradio_pane_g1_ParamLimits

0x9843,	// (0x000182e5) main_vradio_pane_g1

0x9851,	// (0x000182f3) main_vradio_pane_g2_ParamLimits

0x9851,	// (0x000182f3) main_vradio_pane_g2

0x0001,

0xf76f,	// (0x0001e211) main_vradio_pane_g_ParamLimits

0xf76f,	// (0x0001e211) main_vradio_pane_g

0x9b2e,	// (0x000185d0) main_vradio_pane_t1_ParamLimits

0x9b2e,	// (0x000185d0) main_vradio_pane_t1

0x9b2e,	// (0x000185d0) main_vradio_pane_t2_ParamLimits

0x9b2e,	// (0x000185d0) main_vradio_pane_t2

0xa712,	// (0x000191b4) main_vradio_pane_t3_ParamLimits

0xa712,	// (0x000191b4) main_vradio_pane_t3

0x0002,

0xf774,	// (0x0001e216) main_vradio_pane_t_ParamLimits

0xf774,	// (0x0001e216) main_vradio_pane_t

0x914c,	// (0x00017bee) vradio_rocker_control_pane_ParamLimits

0x914c,	// (0x00017bee) vradio_rocker_control_pane

0x914c,	// (0x00017bee) vradio_station_info_pane_ParamLimits

0x914c,	// (0x00017bee) vradio_station_info_pane

0x914c,	// (0x00017bee) vradio_frequency_info_pane_ParamLimits

0x914c,	// (0x00017bee) vradio_frequency_info_pane

0x9b5c,	// (0x000185fe) vradio_station_info_pane_g1

0xa6fe,	// (0x000191a0) vradio_station_info_pane_t1_ParamLimits

0xa6fe,	// (0x000191a0) vradio_station_info_pane_t1

0xa712,	// (0x000191b4) vradio_station_info_pane_t2_ParamLimits

0xa712,	// (0x000191b4) vradio_station_info_pane_t2

0x0001,

0xf77b,	// (0x0001e21d) vradio_station_info_pane_t_ParamLimits

0xf77b,	// (0x0001e21d) vradio_station_info_pane_t

0x90dd,	// (0x00017b7f) vradio_tuning_pane

0x4411,	// (0x00012eb3) vradio_rocker_control_pane_g1

0xc502,	// (0x0001afa4) vradio_rocker_control_pane_g2

0x441b,	// (0x00012ebd) vradio_rocker_control_pane_g3

0x4425,	// (0x00012ec7) vradio_rocker_control_pane_g4

0x442f,	// (0x00012ed1) vradio_rocker_control_pane_g5

0x0004,

0xf780,	// (0x0001e222) vradio_rocker_control_pane_g

0x9b5c,	// (0x000185fe) vradio_frequency_info_pane_g1

0x9b2e,	// (0x000185d0) vradio_frequency_info_pane_t1_ParamLimits

0x9b2e,	// (0x000185d0) vradio_frequency_info_pane_t1

0x4439,	// (0x00012edb) vradio_tuning_pane_g1

0x4446,	// (0x00012ee8) vradio_tuning_pane_t1

0x910b,	// (0x00017bad) area_side_right_pane_ParamLimits

0x910b,	// (0x00017bad) area_side_right_pane

0xba0a,	// (0x0001a4ac) status_small_pane_g1

0xba12,	// (0x0001a4b4) status_small_pane_g2

0xba1b,	// (0x0001a4bd) status_small_pane_g3

0xba24,	// (0x0001a4c6) status_small_pane_g4

0x0003,

0xf54c,	// (0x0001dfee) status_small_pane_g

0xba2d,	// (0x0001a4cf) status_small_pane_t1

0x90dd,	// (0x00017b7f) main_video3_pane

0xc50a,	// (0x0001afac) cams_zoom_vslider_pane

0xc512,	// (0x0001afb4) image3_wide_pane_ParamLimits

0xc512,	// (0x0001afb4) image3_wide_pane

0xc52c,	// (0x0001afce) image3_wide_small_pane

0xc538,	// (0x0001afda) main_video3_pane_g1_ParamLimits

0xc538,	// (0x0001afda) main_video3_pane_g1

0xc554,	// (0x0001aff6) main_video3_pane_g2_ParamLimits

0xc554,	// (0x0001aff6) main_video3_pane_g2

0x0001,

0xf78b,	// (0x0001e22d) main_video3_pane_g_ParamLimits

0xf78b,	// (0x0001e22d) main_video3_pane_g

0xc570,	// (0x0001b012) main_video3_pane_t1_ParamLimits

0xc570,	// (0x0001b012) main_video3_pane_t1

0xc59b,	// (0x0001b03d) main_video3_pane_t2_ParamLimits

0xc59b,	// (0x0001b03d) main_video3_pane_t2

0xc5c6,	// (0x0001b068) main_video3_pane_t3_ParamLimits

0xc5c6,	// (0x0001b068) main_video3_pane_t3

0x0002,

0xf790,	// (0x0001e232) main_video3_pane_t_ParamLimits

0xf790,	// (0x0001e232) main_video3_pane_t

0xc5f3,	// (0x0001b095) cams_zoom_vslider_pane_g1

0xc5fc,	// (0x0001b09e) cams_zoom_vslider_pane_g2

0x0001,

0xf797,	// (0x0001e239) cams_zoom_vslider_pane_g

0xc604,	// (0x0001b0a6) small_slider_vertical_pane

0x9b5c,	// (0x000185fe) small_slider_vertical_pane_g1

0x9b5c,	// (0x000185fe) small_slider_vertical_pane_g2

0xc60c,	// (0x0001b0ae) small_slider_vertical_pane_g3

0x0002,

0xf79c,	// (0x0001e23e) small_slider_vertical_pane_g

0x90dd,	// (0x00017b7f) main_hwr_training_pane

0xc615,	// (0x0001b0b7) hwr_training_instruct_pane_ParamLimits

0xc615,	// (0x0001b0b7) hwr_training_instruct_pane

0x4455,	// (0x00012ef7) hwr_training_navi_pane_ParamLimits

0x4455,	// (0x00012ef7) hwr_training_navi_pane

0x4474,	// (0x00012f16) hwr_training_write_pane_ParamLimits

0x4474,	// (0x00012f16) hwr_training_write_pane

0x90dd,	// (0x00017b7f) bg_frame_shadow_pane

0xc64c,	// (0x0001b0ee) hwr_training_write_pane_g1

0xc654,	// (0x0001b0f6) hwr_training_write_pane_g2

0xc65c,	// (0x0001b0fe) hwr_training_write_pane_g3

0xc664,	// (0x0001b106) hwr_training_write_pane_g4

0xc66c,	// (0x0001b10e) hwr_training_write_pane_g5

0xc674,	// (0x0001b116) hwr_training_write_pane_g6

0xc67c,	// (0x0001b11e) hwr_training_write_pane_g7

0x0006,

0xf7a3,	// (0x0001e245) hwr_training_write_pane_g

0xc684,	// (0x0001b126) hwr_training_navi_pane_g1_ParamLimits

0xc684,	// (0x0001b126) hwr_training_navi_pane_g1

0xc696,	// (0x0001b138) hwr_training_navi_pane_g2_ParamLimits

0xc696,	// (0x0001b138) hwr_training_navi_pane_g2

0xc6a8,	// (0x0001b14a) hwr_training_navi_pane_g3_ParamLimits

0xc6a8,	// (0x0001b14a) hwr_training_navi_pane_g3

0xc6b8,	// (0x0001b15a) hwr_training_navi_pane_g4_ParamLimits

0xc6b8,	// (0x0001b15a) hwr_training_navi_pane_g4

0x0004,

0xf7b2,	// (0x0001e254) hwr_training_navi_pane_g_ParamLimits

0xf7b2,	// (0x0001e254) hwr_training_navi_pane_g

0xc6c5,	// (0x0001b167) hwr_training_navi_pane_t1

0x44bc,	// (0x00012f5e) list_single_hwr_training_instruct_pane_ParamLimits

0x44bc,	// (0x00012f5e) list_single_hwr_training_instruct_pane

0xc6d3,	// (0x0001b175) list_single_hwr_training_instruct_pane_t1

0xbe81,	// (0x0001a923) bg_frame_shadow_pane_g1

0xc6e2,	// (0x0001b184) bg_frame_shadow_pane_g2

0xc6ea,	// (0x0001b18c) bg_frame_shadow_pane_g3

0xc6f2,	// (0x0001b194) bg_frame_shadow_pane_g4

0xc6fa,	// (0x0001b19c) bg_frame_shadow_pane_g5

0xc702,	// (0x0001b1a4) bg_frame_shadow_pane_g6

0xc70a,	// (0x0001b1ac) bg_frame_shadow_pane_g7

0x99b3,	// (0x00018455) bg_frame_shadow_pane_g8

0x0007,

0xf7bd,	// (0x0001e25f) bg_frame_shadow_pane_g

0x90dd,	// (0x00017b7f) main_video_tele_dialer_pane

0x44d1,	// (0x00012f73) aid_size_cell_video_keypad_ParamLimits

0x44d1,	// (0x00012f73) aid_size_cell_video_keypad

0x44eb,	// (0x00012f8d) grid_video_dialer_keypad_pane_ParamLimits

0x44eb,	// (0x00012f8d) grid_video_dialer_keypad_pane

0x4537,	// (0x00012fd9) video_down_pane_cp_ParamLimits

0x4537,	// (0x00012fd9) video_down_pane_cp

0x4569,	// (0x0001300b) cell_video_dialer_keypad_pane_ParamLimits

0x4569,	// (0x0001300b) cell_video_dialer_keypad_pane

0xc712,	// (0x0001b1b4) bg_button_pane_cp08_ParamLimits

0xc712,	// (0x0001b1b4) bg_button_pane_cp08

0x458b,	// (0x0001302d) cell_video_dialer_keypad_pane_g1_ParamLimits

0x458b,	// (0x0001302d) cell_video_dialer_keypad_pane_g1

0x3e8b,	// (0x0001292d) mup3_rocker2_pane_ParamLimits

0x3e8b,	// (0x0001292d) mup3_rocker2_pane

0x9b5c,	// (0x000185fe) mup3_rocker2_pane_g1

0x30fe,	// (0x00011ba0) main_dialer2_pane

0x90dd,	// (0x00017b7f) main_mp4_pane

0xc73c,	// (0x0001b1de) main_mp4_pane_g1_ParamLimits

0xc73c,	// (0x0001b1de) main_mp4_pane_g1

0xc73c,	// (0x0001b1de) main_mp4_pane_g2_ParamLimits

0xc73c,	// (0x0001b1de) main_mp4_pane_g2

0x45c2,	// (0x00013064) main_mp4_pane_g3_ParamLimits

0x45c2,	// (0x00013064) main_mp4_pane_g3

0xc74a,	// (0x0001b1ec) main_mp4_pane_g4_ParamLimits

0xc74a,	// (0x0001b1ec) main_mp4_pane_g4

0xc778,	// (0x0001b21a) main_mp4_pane_g5_ParamLimits

0xc778,	// (0x0001b21a) main_mp4_pane_g5

0x0007,

0xf7dd,	// (0x0001e27f) main_mp4_pane_g_ParamLimits

0xf7dd,	// (0x0001e27f) main_mp4_pane_g

0xc7ec,	// (0x0001b28e) main_mp4_pane_t1_ParamLimits

0xc7ec,	// (0x0001b28e) main_mp4_pane_t1

0xc848,	// (0x0001b2ea) main_mp4_pane_t2_ParamLimits

0xc848,	// (0x0001b2ea) main_mp4_pane_t2

0xc89a,	// (0x0001b33c) main_mp4_pane_t3_ParamLimits

0xc89a,	// (0x0001b33c) main_mp4_pane_t3

0xc8c0,	// (0x0001b362) main_mp4_pane_t4_ParamLimits

0xc8c0,	// (0x0001b362) main_mp4_pane_t4

0x0003,

0xf7ee,	// (0x0001e290) main_mp4_pane_t_ParamLimits

0xf7ee,	// (0x0001e290) main_mp4_pane_t

0xc904,	// (0x0001b3a6) mp4_progress_pane_ParamLimits

0xc904,	// (0x0001b3a6) mp4_progress_pane

0xc94e,	// (0x0001b3f0) mp4_rocker_pane_ParamLimits

0xc94e,	// (0x0001b3f0) mp4_rocker_pane

0xc976,	// (0x0001b418) mp4_progress_pane_t1

0xc98f,	// (0x0001b431) mp4_progress_pane_t2

0x0001,

0xf7f7,	// (0x0001e299) mp4_progress_pane_t

0xc9a8,	// (0x0001b44a) mup_progress_pane_cp04

0x9b5c,	// (0x000185fe) mp4_rocker_pane_g1

0x45fe,	// (0x000130a0) aid_cell_size_keypad2_ParamLimits

0x45fe,	// (0x000130a0) aid_cell_size_keypad2

0x4614,	// (0x000130b6) dialer2_ne_pane_ParamLimits

0x4614,	// (0x000130b6) dialer2_ne_pane

0x462e,	// (0x000130d0) grid_dialer2_keypad_pane_ParamLimits

0x462e,	// (0x000130d0) grid_dialer2_keypad_pane

0xbbd2,	// (0x0001a674) bg_popup_call_pane_cp07_ParamLimits

0xbbd2,	// (0x0001a674) bg_popup_call_pane_cp07

0x464a,	// (0x000130ec) dialer2_ne_pane_t1_ParamLimits

0x464a,	// (0x000130ec) dialer2_ne_pane_t1

0x4685,	// (0x00013127) cell_dialer2_keypad_pane_ParamLimits

0x4685,	// (0x00013127) cell_dialer2_keypad_pane

0xc9cd,	// (0x0001b46f) bg_button_pane_pane_cp04_ParamLimits

0xc9cd,	// (0x0001b46f) bg_button_pane_pane_cp04

0x46a7,	// (0x00013149) cell_dialer2_keypad_pane_g1_ParamLimits

0x46a7,	// (0x00013149) cell_dialer2_keypad_pane_g1

0x11f0,	// (0x0000fc92) aid_placing_vt_set_content_ParamLimits

0x11f0,	// (0x0000fc92) aid_placing_vt_set_content

0x1218,	// (0x0000fcba) aid_placing_vt_set_title_ParamLimits

0x1218,	// (0x0000fcba) aid_placing_vt_set_title

0x90dd,	// (0x00017b7f) main_image3_pane

0x476d,	// (0x0001320f) area_side_right_pane_cp01_ParamLimits

0x476d,	// (0x0001320f) area_side_right_pane_cp01

0xc73c,	// (0x0001b1de) main_image3_pane_g1_ParamLimits

0xc73c,	// (0x0001b1de) main_image3_pane_g1

0x4784,	// (0x00013226) main_image3_pane_g2_ParamLimits

0x4784,	// (0x00013226) main_image3_pane_g2

0x47ac,	// (0x0001324e) main_image3_pane_g3_ParamLimits

0x47ac,	// (0x0001324e) main_image3_pane_g3

0x47d6,	// (0x00013278) main_image3_pane_g4_ParamLimits

0x47d6,	// (0x00013278) main_image3_pane_g4

0x0003,

0xf806,	// (0x0001e2a8) main_image3_pane_g_ParamLimits

0xf806,	// (0x0001e2a8) main_image3_pane_g

0x4800,	// (0x000132a2) main_image3_pane_t1_ParamLimits

0x4800,	// (0x000132a2) main_image3_pane_t1

0x4858,	// (0x000132fa) main_image3_pane_t2_ParamLimits

0x4858,	// (0x000132fa) main_image3_pane_t2

0x48aa,	// (0x0001334c) main_image3_pane_t3_ParamLimits

0x48aa,	// (0x0001334c) main_image3_pane_t3

0x0003,

0xf80f,	// (0x0001e2b1) main_image3_pane_t_ParamLimits

0xf80f,	// (0x0001e2b1) main_image3_pane_t

0x914c,	// (0x00017bee) grid_sctrl_middle_pane_cp01_ParamLimits

0x914c,	// (0x00017bee) grid_sctrl_middle_pane_cp01

0x4932,	// (0x000133d4) cell_sctrl_middle_pane_cp01_ParamLimits

0x4932,	// (0x000133d4) cell_sctrl_middle_pane_cp01

0x494f,	// (0x000133f1) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x494f,	// (0x000133f1) cell_sctrl_middle_pane_cp01_g1

0x90dd,	// (0x00017b7f) main_call4_pane

0x4965,	// (0x00013407) aid_size_button_call4_ParamLimits

0x4965,	// (0x00013407) aid_size_button_call4

0x4998,	// (0x0001343a) call4_windows_pane_ParamLimits

0x4998,	// (0x0001343a) call4_windows_pane

0x49b7,	// (0x00013459) grid_call4_button_pane_ParamLimits

0x49b7,	// (0x00013459) grid_call4_button_pane

0x49ea,	// (0x0001348c) call4_windows_conf_pane

0x4a01,	// (0x000134a3) popup_call4_audio_first_window_ParamLimits

0x4a01,	// (0x000134a3) popup_call4_audio_first_window

0x4a51,	// (0x000134f3) popup_call4_audio_second_window_ParamLimits

0x4a51,	// (0x000134f3) popup_call4_audio_second_window

0x4a68,	// (0x0001350a) popup_call4_audio_wait_window_ParamLimits

0x4a68,	// (0x0001350a) popup_call4_audio_wait_window

0x4a76,	// (0x00013518) cell_call4_button_pane_ParamLimits

0x4a76,	// (0x00013518) cell_call4_button_pane

0x4a9b,	// (0x0001353d) bg_button_pane_cp09_ParamLimits

0x4a9b,	// (0x0001353d) bg_button_pane_cp09

0x4aa7,	// (0x00013549) cell_call4_button_pane_g1_ParamLimits

0x4aa7,	// (0x00013549) cell_call4_button_pane_g1

0x4acd,	// (0x0001356f) cell_call4_button_pane_t1_ParamLimits

0x4acd,	// (0x0001356f) cell_call4_button_pane_t1

0xca45,	// (0x0001b4e7) popup_call4_audio_conf_window_ParamLimits

0xca45,	// (0x0001b4e7) popup_call4_audio_conf_window

0x3eeb,	// (0x0001298d) mup3_progress_pane_t1_ParamLimits

0x3f0a,	// (0x000129ac) mup3_progress_pane_t2_ParamLimits

0xc1d9,	// (0x0001ac7b) mup3_progress_pane_t3_ParamLimits

0xf6e4,	// (0x0001e186) mup3_progress_pane_t_ParamLimits

0xc1f6,	// (0x0001ac98) mup_progress_pane_cp03_ParamLimits

0x4409,	// (0x00012eab) mup3_control_keys_pane_g4_copy1

0xc932,	// (0x0001b3d4) mp4_rocker2_pane_ParamLimits

0xc932,	// (0x0001b3d4) mp4_rocker2_pane

0xca59,	// (0x0001b4fb) mp4_rocker2_pane_g1

0xca61,	// (0x0001b503) mp4_rocker2_pane_g2

0xca69,	// (0x0001b50b) mp4_rocker2_pane_g3

0xca71,	// (0x0001b513) mp4_rocker2_pane_g4

0xca79,	// (0x0001b51b) mp4_rocker2_pane_g5

0x0004,

0xf818,	// (0x0001e2ba) mp4_rocker2_pane_g

0x90dd,	// (0x00017b7f) main_camera4_pane

0x90dd,	// (0x00017b7f) main_video4_pane

0x4505,	// (0x00012fa7) main_video_tele_dialer_pane_t1_ParamLimits

0x4505,	// (0x00012fa7) main_video_tele_dialer_pane_t1

0x451e,	// (0x00012fc0) main_video_tele_dialer_pane_t2_ParamLimits

0x451e,	// (0x00012fc0) main_video_tele_dialer_pane_t2

0x0001,

0xf7ce,	// (0x0001e270) main_video_tele_dialer_pane_t_ParamLimits

0xf7ce,	// (0x0001e270) main_video_tele_dialer_pane_t

0x4b0b,	// (0x000135ad) cam4_autofocus_pane_ParamLimits

0x4b0b,	// (0x000135ad) cam4_autofocus_pane

0x4b21,	// (0x000135c3) cam4_image_uncrop_pane_ParamLimits

0x4b21,	// (0x000135c3) cam4_image_uncrop_pane

0x4b3b,	// (0x000135dd) cam4_indicators_pane_ParamLimits

0x4b3b,	// (0x000135dd) cam4_indicators_pane

0x4b66,	// (0x00013608) main_camera4_pane_g1_ParamLimits

0x4b66,	// (0x00013608) main_camera4_pane_g1

0x4b78,	// (0x0001361a) main_camera4_pane_g2_ParamLimits

0x4b78,	// (0x0001361a) main_camera4_pane_g2

0x4b8b,	// (0x0001362d) main_camera4_pane_g3_ParamLimits

0x4b8b,	// (0x0001362d) main_camera4_pane_g3

0x4b9e,	// (0x00013640) main_camera4_pane_g4_ParamLimits

0x4b9e,	// (0x00013640) main_camera4_pane_g4

0x4bb1,	// (0x00013653) main_camera4_pane_g5_ParamLimits

0x4bb1,	// (0x00013653) main_camera4_pane_g5

0x0005,

0xf823,	// (0x0001e2c5) main_camera4_pane_g_ParamLimits

0xf823,	// (0x0001e2c5) main_camera4_pane_g

0x4bd5,	// (0x00013677) main_camera4_pane_t1_ParamLimits

0x4bd5,	// (0x00013677) main_camera4_pane_t1

0x9843,	// (0x000182e5) bg_tb_trans_pane_cp06

0xcaa5,	// (0x0001b547) cam4_indicators_pane_g1

0xcab6,	// (0x0001b558) cam4_indicators_pane_g2

0x0002,

0xf83e,	// (0x0001e2e0) cam4_indicators_pane_g

0xcad4,	// (0x0001b576) cam4_indicators_pane_t1

0x4c39,	// (0x000136db) main_video4_pane_g1_ParamLimits

0x4c39,	// (0x000136db) main_video4_pane_g1

0x4c48,	// (0x000136ea) main_video4_pane_g2_ParamLimits

0x4c48,	// (0x000136ea) main_video4_pane_g2

0x4c57,	// (0x000136f9) main_video4_pane_g3_ParamLimits

0x4c57,	// (0x000136f9) main_video4_pane_g3

0x4c66,	// (0x00013708) main_video4_pane_g4_ParamLimits

0x4c66,	// (0x00013708) main_video4_pane_g4

0x0004,

0xf845,	// (0x0001e2e7) main_video4_pane_g_ParamLimits

0xf845,	// (0x0001e2e7) main_video4_pane_g

0x4c84,	// (0x00013726) vid4_indicators_pane_ParamLimits

0x4c84,	// (0x00013726) vid4_indicators_pane

0x4cb2,	// (0x00013754) video4_image_uncrop_cif_pane_ParamLimits

0x4cb2,	// (0x00013754) video4_image_uncrop_cif_pane

0x4ccc,	// (0x0001376e) video4_image_uncrop_nhd_pane_ParamLimits

0x4ccc,	// (0x0001376e) video4_image_uncrop_nhd_pane

0x4b21,	// (0x000135c3) video4_image_uncrop_vga_pane_ParamLimits

0x4b21,	// (0x000135c3) video4_image_uncrop_vga_pane

0x914c,	// (0x00017bee) bg_tb_trans_pane_cp07

0xcb00,	// (0x0001b5a2) vid4_indicators_pane_g1

0xcb14,	// (0x0001b5b6) vid4_indicators_pane_g2

0xcb28,	// (0x0001b5ca) vid4_indicators_pane_g3

0x0004,

0xf850,	// (0x0001e2f2) vid4_indicators_pane_g

0xcb57,	// (0x0001b5f9) vid4_indicators_pane_t1

0x4ce0,	// (0x00013782) cam4_autofocus_pane_g1

0x4ce8,	// (0x0001378a) cam4_autofocus_pane_g2

0x4cf0,	// (0x00013792) cam4_autofocus_pane_g3

0x0002,

0xf85b,	// (0x0001e2fd) cam4_autofocus_pane_g

0x4cf8,	// (0x0001379a) cam4_autofocus_pane_g3_copy1

0x454d,	// (0x00012fef) video_down_pane_cp_t1

0x455b,	// (0x00012ffd) video_down_pane_cp_t2

0x0001,

0xf7d3,	// (0x0001e275) video_down_pane_cp_t

0x914c,	// (0x00017bee) popup_vitu2_window_ParamLimits

0x914c,	// (0x00017bee) popup_vitu2_window

0x4d00,	// (0x000137a2) aid_size_cell2_itu2_ParamLimits

0x4d00,	// (0x000137a2) aid_size_cell2_itu2

0x4d26,	// (0x000137c8) aid_size_cell_itu2_ParamLimits

0x4d26,	// (0x000137c8) aid_size_cell_itu2

0x3f94,	// (0x00012a36) bg_popup_window_pane_cp09_ParamLimits

0x3f94,	// (0x00012a36) bg_popup_window_pane_cp09

0x4d82,	// (0x00013824) field_vitu2_entry_pane_ParamLimits

0x4d82,	// (0x00013824) field_vitu2_entry_pane

0x4da8,	// (0x0001384a) grid_vitu2_function_pane_ParamLimits

0x4da8,	// (0x0001384a) grid_vitu2_function_pane

0x4df9,	// (0x0001389b) grid_vitu2_itu_pane_ParamLimits

0x4df9,	// (0x0001389b) grid_vitu2_itu_pane

0x4e8f,	// (0x00013931) cell_vitu2_itu_pane_ParamLimits

0x4e8f,	// (0x00013931) cell_vitu2_itu_pane

0x4ebb,	// (0x0001395d) cell_vitu2_function_pane_ParamLimits

0x4ebb,	// (0x0001395d) cell_vitu2_function_pane

0xcb6e,	// (0x0001b610) bg_popup_call_pane_cp08_ParamLimits

0xcb6e,	// (0x0001b610) bg_popup_call_pane_cp08

0xcb85,	// (0x0001b627) field_vitu2_entry_pane_g1

0xcb91,	// (0x0001b633) field_vitu2_entry_pane_g2

0x0002,

0xf862,	// (0x0001e304) field_vitu2_entry_pane_g

0x4efa,	// (0x0001399c) field_vitu2_entry_pane_t1_ParamLimits

0x4efa,	// (0x0001399c) field_vitu2_entry_pane_t1

0xcb9d,	// (0x0001b63f) field_vitu2_entry_pane_t2_ParamLimits

0xcb9d,	// (0x0001b63f) field_vitu2_entry_pane_t2

0x0001,

0xf869,	// (0x0001e30b) field_vitu2_entry_pane_t_ParamLimits

0xf869,	// (0x0001e30b) field_vitu2_entry_pane_t

0x4f29,	// (0x000139cb) bg_button_pane_cp010_ParamLimits

0x4f29,	// (0x000139cb) bg_button_pane_cp010

0x4f37,	// (0x000139d9) cell_vitu2_itu_pane_g1

0x4f5d,	// (0x000139ff) cell_vitu2_itu_pane_t1_ParamLimits

0x4f5d,	// (0x000139ff) cell_vitu2_itu_pane_t1

0x4fbb,	// (0x00013a5d) cell_vitu2_itu_pane_t2_ParamLimits

0x4fbb,	// (0x00013a5d) cell_vitu2_itu_pane_t2

0x0002,

0xf873,	// (0x0001e315) cell_vitu2_itu_pane_t_ParamLimits

0xf873,	// (0x0001e315) cell_vitu2_itu_pane_t

0x914c,	// (0x00017bee) bg_button_pane_cp011

0x50a7,	// (0x00013b49) cell_vitu2_function_pane_g1

0x90dd,	// (0x00017b7f) main_myfav_hc_pane

0x48fa,	// (0x0001339c) popup_image3_note_pane_ParamLimits

0x48fa,	// (0x0001339c) popup_image3_note_pane

0x4916,	// (0x000133b8) popup_image3_tool_bar_pane_ParamLimits

0x4916,	// (0x000133b8) popup_image3_tool_bar_pane

0x5049,	// (0x00013aeb) cell_vitu2_itu_pane_t3_ParamLimits

0x5049,	// (0x00013aeb) cell_vitu2_itu_pane_t3

0x90dd,	// (0x00017b7f) bg_popup_trans_pane

0xcbc2,	// (0x0001b664) grid_image3_tool_bar_pane

0xcbcc,	// (0x0001b66e) bg_popup_trans_pane_g1

0x9d6d,	// (0x0001880f) bg_popup_trans_pane_g2

0xcbd4,	// (0x0001b676) bg_popup_trans_pane_g3

0xcbdc,	// (0x0001b67e) bg_popup_trans_pane_g4

0xcbe4,	// (0x0001b686) bg_popup_trans_pane_g5

0xcbec,	// (0x0001b68e) bg_popup_trans_pane_g6

0xcbf4,	// (0x0001b696) bg_popup_trans_pane_g7

0xcbfc,	// (0x0001b69e) bg_popup_trans_pane_g8

0x9d4d,	// (0x000187ef) bg_popup_trans_pane_g9

0x0008,

0xf87a,	// (0x0001e31c) bg_popup_trans_pane_g

0xcc04,	// (0x0001b6a6) cell_image3_tool_bar_pane_ParamLimits

0xcc04,	// (0x0001b6a6) cell_image3_tool_bar_pane

0x9b5c,	// (0x000185fe) cell_image3_tool_bar_pane_g1

0x90dd,	// (0x00017b7f) bg_popup_trans_pane_cp1

0xcc18,	// (0x0001b6ba) popup_image3_note_pane_t1

0xcc26,	// (0x0001b6c8) popup_image3_note_pane_t2

0xcc34,	// (0x0001b6d6) popup_image3_note_pane_t3

0x0002,

0xf88d,	// (0x0001e32f) popup_image3_note_pane_t

0xcc42,	// (0x0001b6e4) popup_image3_note_pane_t3_copy1

0x50bb,	// (0x00013b5d) bg_myfav_hc_instruction_pane_ParamLimits

0x50bb,	// (0x00013b5d) bg_myfav_hc_instruction_pane

0x50cf,	// (0x00013b71) cell_myfav_contact_pane_ParamLimits

0x50cf,	// (0x00013b71) cell_myfav_contact_pane

0x50ed,	// (0x00013b8f) cell_myfav_contact_pane_cp1_ParamLimits

0x50ed,	// (0x00013b8f) cell_myfav_contact_pane_cp1

0x5105,	// (0x00013ba7) cell_myfav_contact_pane_cp2_ParamLimits

0x5105,	// (0x00013ba7) cell_myfav_contact_pane_cp2

0x511d,	// (0x00013bbf) cell_myfav_contact_pane_cp3_ParamLimits

0x511d,	// (0x00013bbf) cell_myfav_contact_pane_cp3

0x5134,	// (0x00013bd6) cell_myfav_contact_pane_cp4_ParamLimits

0x5134,	// (0x00013bd6) cell_myfav_contact_pane_cp4

0x514c,	// (0x00013bee) cell_myfav_contact_pane_cp5_ParamLimits

0x514c,	// (0x00013bee) cell_myfav_contact_pane_cp5

0x5160,	// (0x00013c02) cell_myfav_contact_pane_cp6_ParamLimits

0x5160,	// (0x00013c02) cell_myfav_contact_pane_cp6

0x5176,	// (0x00013c18) cell_myfav_contact_pane_cp7_ParamLimits

0x5176,	// (0x00013c18) cell_myfav_contact_pane_cp7

0xcc50,	// (0x0001b6f2) listscroll_gen_pane_cp05

0x5190,	// (0x00013c32) main_myfav_hc_pane_g1_ParamLimits

0x5190,	// (0x00013c32) main_myfav_hc_pane_g1

0x51aa,	// (0x00013c4c) main_myfav_hc_pane_g2_ParamLimits

0x51aa,	// (0x00013c4c) main_myfav_hc_pane_g2

0x0002,

0xf894,	// (0x0001e336) main_myfav_hc_pane_g_ParamLimits

0xf894,	// (0x0001e336) main_myfav_hc_pane_g

0x51dc,	// (0x00013c7e) main_myfav_hc_pane_t1_ParamLimits

0x51dc,	// (0x00013c7e) main_myfav_hc_pane_t1

0xcc59,	// (0x0001b6fb) main_myfav_hc_pane_t2_ParamLimits

0xcc59,	// (0x0001b6fb) main_myfav_hc_pane_t2

0xcc6b,	// (0x0001b70d) main_myfav_hc_pane_t3_ParamLimits

0xcc6b,	// (0x0001b70d) main_myfav_hc_pane_t3

0x51f3,	// (0x00013c95) main_myfav_hc_pane_t4_ParamLimits

0x51f3,	// (0x00013c95) main_myfav_hc_pane_t4

0x0004,

0xf89b,	// (0x0001e33d) main_myfav_hc_pane_t_ParamLimits

0xf89b,	// (0x0001e33d) main_myfav_hc_pane_t

0x9b5c,	// (0x000185fe) bg_myfav_hc_instruction_pane_g1

0xcc7d,	// (0x0001b71f) cell_myfav_contact_pane_g1_ParamLimits

0xcc7d,	// (0x0001b71f) cell_myfav_contact_pane_g1

0xcc7d,	// (0x0001b71f) cell_myfav_contact_pane_g2_ParamLimits

0xcc7d,	// (0x0001b71f) cell_myfav_contact_pane_g2

0xcc89,	// (0x0001b72b) cell_myfav_contact_pane_g3_ParamLimits

0xcc89,	// (0x0001b72b) cell_myfav_contact_pane_g3

0x9851,	// (0x000182f3) cell_myfav_contact_pane_g4_ParamLimits

0x9851,	// (0x000182f3) cell_myfav_contact_pane_g4

0xcc96,	// (0x0001b738) cell_myfav_contact_pane_g5_ParamLimits

0xcc96,	// (0x0001b738) cell_myfav_contact_pane_g5

0x0004,

0xf8a6,	// (0x0001e348) cell_myfav_contact_pane_g_ParamLimits

0xf8a6,	// (0x0001e348) cell_myfav_contact_pane_g

0x51c4,	// (0x00013c66) main_myfav_hc_pane_g3_ParamLimits

0x51c4,	// (0x00013c66) main_myfav_hc_pane_g3

0x05cb,	// (0x0000f06d) popup_adpt_find_window

0x521b,	// (0x00013cbd) afind_page_pane_ParamLimits

0x521b,	// (0x00013cbd) afind_page_pane

0x5230,	// (0x00013cd2) aid_size_cell_afind_ParamLimits

0x5230,	// (0x00013cd2) aid_size_cell_afind

0x524e,	// (0x00013cf0) bg_popup_sub_pane_cp09_ParamLimits

0x524e,	// (0x00013cf0) bg_popup_sub_pane_cp09

0x525b,	// (0x00013cfd) find_pane_cp01_ParamLimits

0x525b,	// (0x00013cfd) find_pane_cp01

0xcca2,	// (0x0001b744) grid_afind_control_pane_ParamLimits

0xcca2,	// (0x0001b744) grid_afind_control_pane

0x5268,	// (0x00013d0a) grid_afind_pane_ParamLimits

0x5268,	// (0x00013d0a) grid_afind_pane

0x528a,	// (0x00013d2c) cell_afind_pane_ParamLimits

0x528a,	// (0x00013d2c) cell_afind_pane

0x9b5c,	// (0x000185fe) afind_page_pane_g1

0x52f1,	// (0x00013d93) afind_page_pane_g2

0x52f9,	// (0x00013d9b) afind_page_pane_g3

0x0002,

0xf8b1,	// (0x0001e353) afind_page_pane_g

0x5301,	// (0x00013da3) afind_page_pane_t1

0xccc8,	// (0x0001b76a) cell_afind_grid_control_pane_ParamLimits

0xccc8,	// (0x0001b76a) cell_afind_grid_control_pane

0xc9cd,	// (0x0001b46f) bg_button_pane_cp69_ParamLimits

0xc9cd,	// (0x0001b46f) bg_button_pane_cp69

0x530f,	// (0x00013db1) cell_afind_pane_g1_ParamLimits

0x530f,	// (0x00013db1) cell_afind_pane_g1

0x531c,	// (0x00013dbe) cell_afind_pane_t1_ParamLimits

0x531c,	// (0x00013dbe) cell_afind_pane_t1

0x9b66,	// (0x00018608) bg_button_pane_cp72

0xccd7,	// (0x0001b779) cell_afind_grid_control_pane_g1

0x2b7d,	// (0x0001161f) aid_image_placing_area_ParamLimits

0x2b7d,	// (0x0001161f) aid_image_placing_area

0x9843,	// (0x000182e5) field_vitu_entry_pane_g1_ParamLimits

0x9843,	// (0x000182e5) field_vitu_entry_pane_g1

0x9843,	// (0x000182e5) field_vitu_entry_pane_g2_ParamLimits

0x9843,	// (0x000182e5) field_vitu_entry_pane_g2

0x0001,

0xf1c1,	// (0x0001dc63) field_vitu_entry_pane_g_ParamLimits

0xf1c1,	// (0x0001dc63) field_vitu_entry_pane_g

0xc4e6,	// (0x0001af88) cell_vitu_itu_pane_g1_ParamLimits

0xc4c9,	// (0x0001af6b) cell_vitu_itu_pane_t3_ParamLimits

0xc4c9,	// (0x0001af6b) cell_vitu_itu_pane_t3

0xc976,	// (0x0001b418) mp4_progress_pane_t1_ParamLimits

0xc98f,	// (0x0001b431) mp4_progress_pane_t2_ParamLimits

0xf7f7,	// (0x0001e299) mp4_progress_pane_t_ParamLimits

0xc9a8,	// (0x0001b44a) mup_progress_pane_cp04_ParamLimits

0x5207,	// (0x00013ca9) main_myfav_hc_pane_t5_ParamLimits

0x5207,	// (0x00013ca9) main_myfav_hc_pane_t5

0x9103,	// (0x00017ba5) aid_zoom_text_primary

0x05cb,	// (0x0000f06d) popup_adpt_find_window_ParamLimits

0x914c,	// (0x00017bee) main_cam_set_pane

0x4b52,	// (0x000135f4) cam4_zoom_pane_ParamLimits

0x4b52,	// (0x000135f4) cam4_zoom_pane

0x532e,	// (0x00013dd0) main_cam_set_pane_g1_ParamLimits

0x532e,	// (0x00013dd0) main_cam_set_pane_g1

0x533c,	// (0x00013dde) main_cam_set_pane_g2_ParamLimits

0x533c,	// (0x00013dde) main_cam_set_pane_g2

0x0001,

0xf8b8,	// (0x0001e35a) main_cam_set_pane_g_ParamLimits

0xf8b8,	// (0x0001e35a) main_cam_set_pane_g

0x535d,	// (0x00013dff) main_cam_set_pane_t1_ParamLimits

0x535d,	// (0x00013dff) main_cam_set_pane_t1

0x5378,	// (0x00013e1a) main_cset_listscroll_pane_ParamLimits

0x5378,	// (0x00013e1a) main_cset_listscroll_pane

0x539e,	// (0x00013e40) main_cset_slider_pane_ParamLimits

0x539e,	// (0x00013e40) main_cset_slider_pane

0xcce8,	// (0x0001b78a) main_cset_list_pane_ParamLimits

0xcce8,	// (0x0001b78a) main_cset_list_pane

0xccf8,	// (0x0001b79a) scroll_pane_cp028

0x53c4,	// (0x00013e66) aid_area_touch_slider

0x53e0,	// (0x00013e82) cset_slider_pane

0x5403,	// (0x00013ea5) main_cset_slider_pane_g1

0x5418,	// (0x00013eba) main_cset_slider_pane_g2

0x0011,

0xf8bd,	// (0x0001e35f) main_cset_slider_pane_g

0xcd31,	// (0x0001b7d3) main_cset_slider_pane_t1

0x54d4,	// (0x00013f76) main_cset_slider_pane_t2

0x54ee,	// (0x00013f90) main_cset_slider_pane_t3

0x5508,	// (0x00013faa) main_cset_slider_pane_t4

0x5522,	// (0x00013fc4) main_cset_slider_pane_t5

0x553c,	// (0x00013fde) main_cset_slider_pane_t6

0x5551,	// (0x00013ff3) main_cset_slider_pane_t7

0x000e,

0xf8e2,	// (0x0001e384) main_cset_slider_pane_t

0x5655,	// (0x000140f7) cset_list_set_pane_ParamLimits

0x5655,	// (0x000140f7) cset_list_set_pane

0xcdcb,	// (0x0001b86d) aid_position_infowindow_above

0xcdd3,	// (0x0001b875) aid_position_infowindow_below

0xcddb,	// (0x0001b87d) cset_list_set_pane_g1_ParamLimits

0xcddb,	// (0x0001b87d) cset_list_set_pane_g1

0xcde7,	// (0x0001b889) cset_list_set_pane_g3_ParamLimits

0xcde7,	// (0x0001b889) cset_list_set_pane_g3

0x0001,

0xf901,	// (0x0001e3a3) cset_list_set_pane_g_ParamLimits

0xf901,	// (0x0001e3a3) cset_list_set_pane_g

0xcdf6,	// (0x0001b898) cset_list_set_pane_t1_ParamLimits

0xcdf6,	// (0x0001b898) cset_list_set_pane_t1

0x914c,	// (0x00017bee) list_highlight_pane_cp021_ParamLimits

0x914c,	// (0x00017bee) list_highlight_pane_cp021

0xa796,	// (0x00019238) cset_slider_pane_g1

0xa7a8,	// (0x0001924a) cset_slider_pane_g2

0xa79f,	// (0x00019241) cset_slider_pane_g3

0x0002,

0xf906,	// (0x0001e3a8) cset_slider_pane_g

0xce0b,	// (0x0001b8ad) aid_area_touch_cam4_zoom

0xce13,	// (0x0001b8b5) cam4_zoom_cont_pane

0xce1b,	// (0x0001b8bd) cam4_zoom_pane_g1

0xce23,	// (0x0001b8c5) cam4_zoom_pane_g2

0x5667,	// (0x00014109) cam4_zoom_pane_g3

0x0002,

0xf90d,	// (0x0001e3af) cam4_zoom_pane_g

0xce2b,	// (0x0001b8cd) cam4_zoom_cont_pane_g1

0xce34,	// (0x0001b8d6) cam4_zoom_cont_pane_g2

0xce3d,	// (0x0001b8df) cam4_zoom_cont_pane_g3

0x0002,

0xf914,	// (0x0001e3b6) cam4_zoom_cont_pane_g

0x4983,	// (0x00013425) call4_image_pane_ParamLimits

0x4983,	// (0x00013425) call4_image_pane

0x49ea,	// (0x0001348c) call4_windows_conf_pane_ParamLimits

0x4a2f,	// (0x000134d1) popup_call4_audio_in_window_ParamLimits

0x4a2f,	// (0x000134d1) popup_call4_audio_in_window

0x90dd,	// (0x00017b7f) bg_popup_call2_act_pane_cp02

0xca3d,	// (0x0001b4df) call4_list_conf_pane

0x9b5c,	// (0x000185fe) call4_image_pane_g1

0x9b5c,	// (0x000185fe) call4_image_pane_g2

0x0001,

0xf398,	// (0x0001de3a) call4_image_pane_g

0xce46,	// (0x0001b8e8) list_single_graphic_popup_conf4_pane_ParamLimits

0xce46,	// (0x0001b8e8) list_single_graphic_popup_conf4_pane

0x90dd,	// (0x00017b7f) list_highlight_pane_cp022

0xce59,	// (0x0001b8fb) list_single_graphic_popup_conf4_pane_g1

0xa334,	// (0x00018dd6) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf91b,	// (0x0001e3bd) list_single_graphic_popup_conf4_pane_g

0xce61,	// (0x0001b903) list_single_graphic_popup_conf4_pane_t1

0x133c,	// (0x0000fdde) popup_vtel_slider_window_ParamLimits

0x133c,	// (0x0000fdde) popup_vtel_slider_window

0xc9bb,	// (0x0001b45d) dialer2_ne_pane_t2_ParamLimits

0xc9bb,	// (0x0001b45d) dialer2_ne_pane_t2

0x0001,

0xf7fc,	// (0x0001e29e) dialer2_ne_pane_t_ParamLimits

0xf7fc,	// (0x0001e29e) dialer2_ne_pane_t

0xbbd2,	// (0x0001a674) bg_popup_sub_pane_cp010_ParamLimits

0xbbd2,	// (0x0001a674) bg_popup_sub_pane_cp010

0x566f,	// (0x00014111) popup_vtel_slider_window_g1_ParamLimits

0x566f,	// (0x00014111) popup_vtel_slider_window_g1

0x5682,	// (0x00014124) popup_vtel_slider_window_g2_ParamLimits

0x5682,	// (0x00014124) popup_vtel_slider_window_g2

0x0003,

0xf920,	// (0x0001e3c2) popup_vtel_slider_window_g_ParamLimits

0xf920,	// (0x0001e3c2) popup_vtel_slider_window_g

0x56d8,	// (0x0001417a) vtel_slider_pane_ParamLimits

0x56d8,	// (0x0001417a) vtel_slider_pane

0x56fa,	// (0x0001419c) vtel_slider_pane_g1_ParamLimits

0x56fa,	// (0x0001419c) vtel_slider_pane_g1

0x570e,	// (0x000141b0) vtel_slider_pane_g2_ParamLimits

0x570e,	// (0x000141b0) vtel_slider_pane_g2

0x5726,	// (0x000141c8) vtel_slider_pane_g3_ParamLimits

0x5726,	// (0x000141c8) vtel_slider_pane_g3

0x56fa,	// (0x0001419c) vtel_slider_pane_g4_ParamLimits

0x56fa,	// (0x0001419c) vtel_slider_pane_g4

0x573c,	// (0x000141de) vtel_slider_pane_g5_ParamLimits

0x573c,	// (0x000141de) vtel_slider_pane_g5

0x0004,

0xf929,	// (0x0001e3cb) vtel_slider_pane_g_ParamLimits

0xf929,	// (0x0001e3cb) vtel_slider_pane_g

0x914c,	// (0x00017bee) main_gallery2_pane

0x4d52,	// (0x000137f4) aid_size_row_itut2_dropdow_list_ParamLimits

0x4d52,	// (0x000137f4) aid_size_row_itut2_dropdow_list

0x4dd0,	// (0x00013872) grid_vitu2_function_top_pane_ParamLimits

0x4dd0,	// (0x00013872) grid_vitu2_function_top_pane

0x4e3a,	// (0x000138dc) popup_vitu2_dropdown_list_window_ParamLimits

0x4e3a,	// (0x000138dc) popup_vitu2_dropdown_list_window

0x4e61,	// (0x00013903) popup_vitu2_match_list_window

0x5752,	// (0x000141f4) cell_vitu2_function_top_pane_ParamLimits

0x5752,	// (0x000141f4) cell_vitu2_function_top_pane

0x576a,	// (0x0001420c) cell_vitu2_function_top_pane_cp01_ParamLimits

0x576a,	// (0x0001420c) cell_vitu2_function_top_pane_cp01

0x5786,	// (0x00014228) cell_vitu2_function_top_wide_pane_ParamLimits

0x5786,	// (0x00014228) cell_vitu2_function_top_wide_pane

0x914c,	// (0x00017bee) bg_button_pane_cp012

0x57a4,	// (0x00014246) cell_vitu2_function_top_pane_g1

0xce77,	// (0x0001b919) bg_button_pane_cp013_ParamLimits

0xce77,	// (0x0001b919) bg_button_pane_cp013

0x57b8,	// (0x0001425a) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x57b8,	// (0x0001425a) cell_vitu2_function_top_wide_pane_g1

0x914c,	// (0x00017bee) bg_popup_sub_pane_cp20

0x57d0,	// (0x00014272) list_vitu2_match_list_pane

0xcbcc,	// (0x0001b66e) bg_popup_sub_pane_cp20_g1

0xcbd4,	// (0x0001b676) bg_popup_sub_pane_cp20_g2

0x9d6d,	// (0x0001880f) bg_popup_sub_pane_cp20_g3

0xcbdc,	// (0x0001b67e) bg_popup_sub_pane_cp20_g4

0x9d4d,	// (0x000187ef) bg_popup_sub_pane_cp20_g5

0xce93,	// (0x0001b935) bg_popup_sub_pane_cp20_g6

0xcbec,	// (0x0001b68e) bg_popup_sub_pane_cp20_g7

0xcbf4,	// (0x0001b696) bg_popup_sub_pane_cp20_g8

0xcbfc,	// (0x0001b69e) bg_popup_sub_pane_cp20_g9

0x0008,

0xf934,	// (0x0001e3d6) bg_popup_sub_pane_cp20_g

0xce9b,	// (0x0001b93d) list_vitu2_match_list_item_pane_ParamLimits

0xce9b,	// (0x0001b93d) list_vitu2_match_list_item_pane

0xcead,	// (0x0001b94f) list_vitu2_match_list_item_pane_t1

0x90dd,	// (0x00017b7f) bg_popup_sub_pane_cp21

0x9b1c,	// (0x000185be) grid_vitu2_dropdown_list_pane

0x57e8,	// (0x0001428a) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x57e8,	// (0x0001428a) cell_vitu2_dropdown_list_char_pane

0x5808,	// (0x000142aa) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x5808,	// (0x000142aa) cell_vitu2_dropdown_list_ctrl_pane

0xcebb,	// (0x0001b95d) cell_vitu2_dropdown_list_char_pane_g1

0xcec4,	// (0x0001b966) cell_vitu2_dropdown_list_char_pane_g2

0xcecd,	// (0x0001b96f) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf947,	// (0x0001e3e9) cell_vitu2_dropdown_list_char_pane_g

0x5830,	// (0x000142d2) cell_vitu2_dropdown_list_char_pane_t1

0x583e,	// (0x000142e0) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x583e,	// (0x000142e0) cell_vitu2_dropdown_list_ctrl_pane_g1

0x584b,	// (0x000142ed) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x584b,	// (0x000142ed) cell_vitu2_dropdown_list_ctrl_pane_g2

0x5858,	// (0x000142fa) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x5858,	// (0x000142fa) cell_vitu2_dropdown_list_ctrl_pane_g3

0x5865,	// (0x00014307) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x5865,	// (0x00014307) cell_vitu2_dropdown_list_ctrl_pane_g4

0x9843,	// (0x000182e5) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x9843,	// (0x000182e5) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf94e,	// (0x0001e3f0) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf94e,	// (0x0001e3f0) cell_vitu2_dropdown_list_ctrl_pane_g

0x5881,	// (0x00014323) aid_size_cell_gallery2_ParamLimits

0x5881,	// (0x00014323) aid_size_cell_gallery2

0x589f,	// (0x00014341) grid_gallery2_pane_ParamLimits

0x589f,	// (0x00014341) grid_gallery2_pane

0x58b9,	// (0x0001435b) scroll_pane_cp029_ParamLimits

0x58b9,	// (0x0001435b) scroll_pane_cp029

0x58ca,	// (0x0001436c) cell_gallery2_pane_ParamLimits

0x58ca,	// (0x0001436c) cell_gallery2_pane

0xced6,	// (0x0001b978) cell_gallery2_pane_g2

0x5929,	// (0x000143cb) cell_gallery2_pane_g3

0xcede,	// (0x0001b980) cell_gallery2_pane_g4

0xcee6,	// (0x0001b988) cell_gallery2_pane_g5

0x9b1c,	// (0x000185be) grid_highlight_pane_cp10

0x4e61,	// (0x00013903) popup_vitu2_match_list_window_ParamLimits

0x4e76,	// (0x00013918) popup_vitu2_query_window_ParamLimits

0x4e76,	// (0x00013918) popup_vitu2_query_window

0x90dd,	// (0x00017b7f) bg_vitu2_candi_button_pane

0xcebb,	// (0x0001b95d) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xcec4,	// (0x0001b966) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xcecd,	// (0x0001b96f) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x5931,	// (0x000143d3) bg_button_pane_cp015

0x5942,	// (0x000143e4) bg_button_pane_cp016

0x594e,	// (0x000143f0) bg_button_pane_cp017

0xa726,	// (0x000191c8) bg_popup_sub_pane_cp22

0xcf02,	// (0x0001b9a4) popup_vitu2_query_window_g1

0x598c,	// (0x0001442e) popup_vitu2_query_window_g2

0x0002,

0xf959,	// (0x0001e3fb) popup_vitu2_query_window_g

0x59ae,	// (0x00014450) popup_vitu2_query_window_t1_ParamLimits

0x59ae,	// (0x00014450) popup_vitu2_query_window_t1

0x59e1,	// (0x00014483) popup_vitu2_query_window_t2_ParamLimits

0x59e1,	// (0x00014483) popup_vitu2_query_window_t2

0x59f3,	// (0x00014495) popup_vitu2_query_window_t3_ParamLimits

0x59f3,	// (0x00014495) popup_vitu2_query_window_t3

0x5a1b,	// (0x000144bd) popup_vitu2_query_window_t4_ParamLimits

0x5a1b,	// (0x000144bd) popup_vitu2_query_window_t4

0x5a2f,	// (0x000144d1) popup_vitu2_query_window_t5_ParamLimits

0x5a2f,	// (0x000144d1) popup_vitu2_query_window_t5

0x0006,

0xf960,	// (0x0001e402) popup_vitu2_query_window_t_ParamLimits

0xf960,	// (0x0001e402) popup_vitu2_query_window_t

0xcce0,	// (0x0001b782) main_cset_text_pane

0x53c4,	// (0x00013e66) aid_area_touch_slider_ParamLimits

0x53e0,	// (0x00013e82) cset_slider_pane_ParamLimits

0x5403,	// (0x00013ea5) main_cset_slider_pane_g1_ParamLimits

0x5418,	// (0x00013eba) main_cset_slider_pane_g2_ParamLimits

0xcd01,	// (0x0001b7a3) main_cset_slider_pane_g3_ParamLimits

0xcd01,	// (0x0001b7a3) main_cset_slider_pane_g3

0x542d,	// (0x00013ecf) main_cset_slider_pane_g4_ParamLimits

0x542d,	// (0x00013ecf) main_cset_slider_pane_g4

0x543c,	// (0x00013ede) main_cset_slider_pane_g5_ParamLimits

0x543c,	// (0x00013ede) main_cset_slider_pane_g5

0x5448,	// (0x00013eea) main_cset_slider_pane_g6_ParamLimits

0x5448,	// (0x00013eea) main_cset_slider_pane_g6

0xf8bd,	// (0x0001e35f) main_cset_slider_pane_g_ParamLimits

0xcd31,	// (0x0001b7d3) main_cset_slider_pane_t1_ParamLimits

0x54d4,	// (0x00013f76) main_cset_slider_pane_t2_ParamLimits

0x54ee,	// (0x00013f90) main_cset_slider_pane_t3_ParamLimits

0x5508,	// (0x00013faa) main_cset_slider_pane_t4_ParamLimits

0x5522,	// (0x00013fc4) main_cset_slider_pane_t5_ParamLimits

0x553c,	// (0x00013fde) main_cset_slider_pane_t6_ParamLimits

0x5551,	// (0x00013ff3) main_cset_slider_pane_t7_ParamLimits

0x557b,	// (0x0001401d) main_cset_slider_pane_t8_ParamLimits

0x557b,	// (0x0001401d) main_cset_slider_pane_t8

0x55a3,	// (0x00014045) main_cset_slider_pane_t9_ParamLimits

0x55a3,	// (0x00014045) main_cset_slider_pane_t9

0x55cb,	// (0x0001406d) main_cset_slider_pane_t10_ParamLimits

0x55cb,	// (0x0001406d) main_cset_slider_pane_t10

0x55f3,	// (0x00014095) main_cset_slider_pane_t11_ParamLimits

0x55f3,	// (0x00014095) main_cset_slider_pane_t11

0x561b,	// (0x000140bd) main_cset_slider_pane_t12_ParamLimits

0x561b,	// (0x000140bd) main_cset_slider_pane_t12

0x5638,	// (0x000140da) main_cset_slider_pane_t13_ParamLimits

0x5638,	// (0x000140da) main_cset_slider_pane_t13

0xf8e2,	// (0x0001e384) main_cset_slider_pane_t_ParamLimits

0x90dd,	// (0x00017b7f) bg_popup_sub_pane_cp011

0xcf0e,	// (0x0001b9b0) main_cset_text_pane_g1

0xcf16,	// (0x0001b9b8) main_cset_text_pane_t1

0xcf24,	// (0x0001b9c6) main_cset_text_pane_t2

0xcf32,	// (0x0001b9d4) main_cset_text_pane_t3

0xcf40,	// (0x0001b9e2) main_cset_text_pane_t4

0xcf4e,	// (0x0001b9f0) main_cset_text_pane_t5

0xcf5c,	// (0x0001b9fe) main_cset_text_pane_t6

0xcf6a,	// (0x0001ba0c) main_cset_text_pane_t7

0x0006,

0xf96f,	// (0x0001e411) main_cset_text_pane_t

0x90dd,	// (0x00017b7f) main_cam4_burst_pane

0x90dd,	// (0x00017b7f) main_cam5_pane

0xccb6,	// (0x0001b758) bg_button_pane_cp019

0xccbf,	// (0x0001b761) bg_button_pane_cp020

0xcd0d,	// (0x0001b7af) main_cset_slider_pane_g7_ParamLimits

0xcd0d,	// (0x0001b7af) main_cset_slider_pane_g7

0xcd19,	// (0x0001b7bb) main_cset_slider_pane_g8_ParamLimits

0xcd19,	// (0x0001b7bb) main_cset_slider_pane_g8

0x545c,	// (0x00013efe) main_cset_slider_pane_g9_ParamLimits

0x545c,	// (0x00013efe) main_cset_slider_pane_g9

0x5468,	// (0x00013f0a) main_cset_slider_pane_g10_ParamLimits

0x5468,	// (0x00013f0a) main_cset_slider_pane_g10

0x5474,	// (0x00013f16) main_cset_slider_pane_g11_ParamLimits

0x5474,	// (0x00013f16) main_cset_slider_pane_g11

0x5480,	// (0x00013f22) main_cset_slider_pane_g12_ParamLimits

0x5480,	// (0x00013f22) main_cset_slider_pane_g12

0x548c,	// (0x00013f2e) main_cset_slider_pane_g13_ParamLimits

0x548c,	// (0x00013f2e) main_cset_slider_pane_g13

0x5498,	// (0x00013f3a) main_cset_slider_pane_g14_ParamLimits

0x5498,	// (0x00013f3a) main_cset_slider_pane_g14

0x54a4,	// (0x00013f46) main_cset_slider_pane_g15_ParamLimits

0x54a4,	// (0x00013f46) main_cset_slider_pane_g15

0xcd59,	// (0x0001b7fb) main_cset_slider_pane_t14_ParamLimits

0xcd59,	// (0x0001b7fb) main_cset_slider_pane_t14

0xcd92,	// (0x0001b834) main_cset_slider_pane_t15_ParamLimits

0xcd92,	// (0x0001b834) main_cset_slider_pane_t15

0x5a99,	// (0x0001453b) aid_cam4_burst_size_cell_ParamLimits

0x5a99,	// (0x0001453b) aid_cam4_burst_size_cell

0x5ab9,	// (0x0001455b) grid_cam4_burst_pane_ParamLimits

0x5ab9,	// (0x0001455b) grid_cam4_burst_pane

0x5af1,	// (0x00014593) linegrid_cam4_burst_pane_ParamLimits

0x5af1,	// (0x00014593) linegrid_cam4_burst_pane

0xcf78,	// (0x0001ba1a) scroll_pane_cp30_ParamLimits

0xcf78,	// (0x0001ba1a) scroll_pane_cp30

0x5b15,	// (0x000145b7) cell_cam4_burst_pane_ParamLimits

0x5b15,	// (0x000145b7) cell_cam4_burst_pane

0xcf84,	// (0x0001ba26) linegrid_cam4_burst_pane_g1_ParamLimits

0xcf84,	// (0x0001ba26) linegrid_cam4_burst_pane_g1

0x5b62,	// (0x00014604) linegrid_cam4_burst_pane_g2_ParamLimits

0x5b62,	// (0x00014604) linegrid_cam4_burst_pane_g2

0xcf91,	// (0x0001ba33) linegrid_cam4_burst_pane_g3_ParamLimits

0xcf91,	// (0x0001ba33) linegrid_cam4_burst_pane_g3

0x0002,

0xf97e,	// (0x0001e420) linegrid_cam4_burst_pane_g_ParamLimits

0xf97e,	// (0x0001e420) linegrid_cam4_burst_pane_g

0x5b73,	// (0x00014615) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x5b73,	// (0x00014615) linegrid_cam4_burst_pane_g3_copy1

0xcf9e,	// (0x0001ba40) linegrid_cam4_burst_pane_g4_ParamLimits

0xcf9e,	// (0x0001ba40) linegrid_cam4_burst_pane_g4

0x5b8d,	// (0x0001462f) linegrid_cam4_burst_pane_g5_ParamLimits

0x5b8d,	// (0x0001462f) linegrid_cam4_burst_pane_g5

0x5b9e,	// (0x00014640) linegrid_cam4_burst_pane_g6_ParamLimits

0x5b9e,	// (0x00014640) linegrid_cam4_burst_pane_g6

0xcfab,	// (0x0001ba4d) linegrid_cam4_burst_pane_g7_ParamLimits

0xcfab,	// (0x0001ba4d) linegrid_cam4_burst_pane_g7

0x5bb5,	// (0x00014657) cell_cam4_burst_pane_g1

0xcfc4,	// (0x0001ba66) main_cam5_pane_t1_ParamLimits

0xcfc4,	// (0x0001ba66) main_cam5_pane_t1

0xcfd6,	// (0x0001ba78) main_cam5_pane_t2_ParamLimits

0xcfd6,	// (0x0001ba78) main_cam5_pane_t2

0xcfe8,	// (0x0001ba8a) main_cam5_pane_t3_ParamLimits

0xcfe8,	// (0x0001ba8a) main_cam5_pane_t3

0xcffa,	// (0x0001ba9c) main_cam5_pane_t4_ParamLimits

0xcffa,	// (0x0001ba9c) main_cam5_pane_t4

0xd012,	// (0x0001bab4) main_cam5_pane_t5_ParamLimits

0xd012,	// (0x0001bab4) main_cam5_pane_t5

0xd026,	// (0x0001bac8) main_cam5_pane_t6_ParamLimits

0xd026,	// (0x0001bac8) main_cam5_pane_t6

0xd03a,	// (0x0001badc) main_cam5_pane_t7_ParamLimits

0xd03a,	// (0x0001badc) main_cam5_pane_t7

0xd04c,	// (0x0001baee) main_cam5_pane_t8_ParamLimits

0xd04c,	// (0x0001baee) main_cam5_pane_t8

0xd068,	// (0x0001bb0a) main_cam5_pane_t9_ParamLimits

0xd068,	// (0x0001bb0a) main_cam5_pane_t9

0xd07a,	// (0x0001bb1c) main_cam5_pane_t10_ParamLimits

0xd07a,	// (0x0001bb1c) main_cam5_pane_t10

0xd08c,	// (0x0001bb2e) main_cam5_pane_t11_ParamLimits

0xd08c,	// (0x0001bb2e) main_cam5_pane_t11

0xd09e,	// (0x0001bb40) main_cam5_pane_t12_ParamLimits

0xd09e,	// (0x0001bb40) main_cam5_pane_t12

0xd0b3,	// (0x0001bb55) main_cam5_pane_t13_ParamLimits

0xd0b3,	// (0x0001bb55) main_cam5_pane_t13

0x000c,

0xf98a,	// (0x0001e42c) main_cam5_pane_t_ParamLimits

0xf98a,	// (0x0001e42c) main_cam5_pane_t

0x064c,	// (0x0000f0ee) popup_scut_keymap_window_ParamLimits

0x064c,	// (0x0000f0ee) popup_scut_keymap_window

0x5bc8,	// (0x0001466a) aid_size_cell_brow_shortcut

0x9b1c,	// (0x000185be) bg_popup_window_pane_cp010

0x5bd4,	// (0x00014676) grid_scut_pane

0x5be0,	// (0x00014682) cell_scut_pane_ParamLimits

0x5be0,	// (0x00014682) cell_scut_pane

0x5bf7,	// (0x00014699) cell_scut_pane_g1

0xd0d0,	// (0x0001bb72) cell_scut_pane_t1

0xd0df,	// (0x0001bb81) cell_scut_pane_t2

0x5c00,	// (0x000146a2) cell_scut_pane_t3

0x0002,

0xf9a5,	// (0x0001e447) cell_scut_pane_t

0x3aa4,	// (0x00012546) main_mup3_pane_g8_ParamLimits

0x3aa4,	// (0x00012546) main_mup3_pane_g8

0x4d6a,	// (0x0001380c) area_vitu2_query_pane_ParamLimits

0x4d6a,	// (0x0001380c) area_vitu2_query_pane

0x595a,	// (0x000143fc) input_focus_pane_cp08

0xd0ee,	// (0x0001bb90) area_vitu2_query_pane_g1

0x5c0e,	// (0x000146b0) area_vitu2_query_pane_g2

0x0001,

0xf9ac,	// (0x0001e44e) area_vitu2_query_pane_g

0x5c1d,	// (0x000146bf) area_vitu2_query_pane_t1_ParamLimits

0x5c1d,	// (0x000146bf) area_vitu2_query_pane_t1

0x5c31,	// (0x000146d3) area_vitu2_query_pane_t2_ParamLimits

0x5c31,	// (0x000146d3) area_vitu2_query_pane_t2

0x5c45,	// (0x000146e7) area_vitu2_query_pane_t3_ParamLimits

0x5c45,	// (0x000146e7) area_vitu2_query_pane_t3

0xd0fa,	// (0x0001bb9c) area_vitu2_query_pane_t4_ParamLimits

0xd0fa,	// (0x0001bb9c) area_vitu2_query_pane_t4

0xd122,	// (0x0001bbc4) area_vitu2_query_pane_t5_ParamLimits

0xd122,	// (0x0001bbc4) area_vitu2_query_pane_t5

0xd14a,	// (0x0001bbec) area_vitu2_query_pane_t6_ParamLimits

0xd14a,	// (0x0001bbec) area_vitu2_query_pane_t6

0x0006,

0xf9b1,	// (0x0001e453) area_vitu2_query_pane_t_ParamLimits

0xf9b1,	// (0x0001e453) area_vitu2_query_pane_t

0x5c6d,	// (0x0001470f) bg_button_pane_cp018

0x5c79,	// (0x0001471b) bg_button_pane_cp021

0x5c85,	// (0x00014727) bg_button_pane_cp022

0x5ca4,	// (0x00014746) input_focus_pane_cp09

0xa470,	// (0x00018f12) aid_size_touch_mv_arrow_left

0xa499,	// (0x00018f3b) aid_size_touch_mv_arrow_right

0x54bc,	// (0x00013f5e) main_cset_slider_pane_g16_ParamLimits

0x54bc,	// (0x00013f5e) main_cset_slider_pane_g16

0x54c8,	// (0x00013f6a) main_cset_slider_pane_g17_ParamLimits

0x54c8,	// (0x00013f6a) main_cset_slider_pane_g17

0x5bb5,	// (0x00014657) cell_cam4_burst_pane_g1_ParamLimits

0x90dd,	// (0x00017b7f) compa_mode_pane

0x5692,	// (0x00014134) popup_vtel_slider_window_g3_ParamLimits

0x5692,	// (0x00014134) popup_vtel_slider_window_g3

0x56a9,	// (0x0001414b) popup_vtel_slider_window_g4_ParamLimits

0x56a9,	// (0x0001414b) popup_vtel_slider_window_g4

0x56c0,	// (0x00014162) popup_vtel_slider_window_t1_ParamLimits

0x56c0,	// (0x00014162) popup_vtel_slider_window_t1

0x90dd,	// (0x00017b7f) main_cl_pane

0xba69,	// (0x0001a50b) popup_imed_adjust2_window_ParamLimits

0xa726,	// (0x000191c8) bg_tb_trans_pane_cp05_ParamLimits

0xc3fe,	// (0x0001aea0) popup_imed_adjust2_window_g1_ParamLimits

0xc40d,	// (0x0001aeaf) popup_imed_adjust2_window_g2_ParamLimits

0xc40d,	// (0x0001aeaf) popup_imed_adjust2_window_g2

0xc419,	// (0x0001aebb) popup_imed_adjust2_window_g3_ParamLimits

0xc419,	// (0x0001aebb) popup_imed_adjust2_window_g3

0x0002,

0xf727,	// (0x0001e1c9) popup_imed_adjust2_window_g_ParamLimits

0xf727,	// (0x0001e1c9) popup_imed_adjust2_window_g

0xc425,	// (0x0001aec7) popup_imed_adjust2_window_t1_ParamLimits

0xc43d,	// (0x0001aedf) slider_imed_adjust_pane_ParamLimits

0xc451,	// (0x0001aef3) slider_imed_adjust_pane_g1_ParamLimits

0xc461,	// (0x0001af03) slider_imed_adjust_pane_g2_ParamLimits

0xc471,	// (0x0001af13) slider_imed_adjust_pane_g3_ParamLimits

0xc482,	// (0x0001af24) slider_imed_adjust_pane_g4_ParamLimits

0xf72e,	// (0x0001e1d0) slider_imed_adjust_pane_g_ParamLimits

0x4af3,	// (0x00013595) aid_touch_area_cam4_ParamLimits

0x4af3,	// (0x00013595) aid_touch_area_cam4

0xca81,	// (0x0001b523) battery_pane_cp01

0x4bc2,	// (0x00013664) main_camera4_pane_g6_ParamLimits

0x4bc2,	// (0x00013664) main_camera4_pane_g6

0x4bec,	// (0x0001368e) main_camera4_pane_t2_ParamLimits

0x4bec,	// (0x0001368e) main_camera4_pane_t2

0x0001,

0xf830,	// (0x0001e2d2) main_camera4_pane_t_ParamLimits

0xf830,	// (0x0001e2d2) main_camera4_pane_t

0x4c21,	// (0x000136c3) aid_touch_area_vid4_ParamLimits

0x4c21,	// (0x000136c3) aid_touch_area_vid4

0x4c75,	// (0x00013717) main_video4_pane_g5_ParamLimits

0x4c75,	// (0x00013717) main_video4_pane_g5

0x4c9a,	// (0x0001373c) vid4_progress_pane_ParamLimits

0x4c9a,	// (0x0001373c) vid4_progress_pane

0xcd25,	// (0x0001b7c7) main_cset_slider_pane_g18_ParamLimits

0xcd25,	// (0x0001b7c7) main_cset_slider_pane_g18

0xcfb8,	// (0x0001ba5a) cell_cam4_burst_pane_g2_ParamLimits

0xcfb8,	// (0x0001ba5a) cell_cam4_burst_pane_g2

0x0001,

0xf985,	// (0x0001e427) cell_cam4_burst_pane_g_ParamLimits

0xf985,	// (0x0001e427) cell_cam4_burst_pane_g

0x98d7,	// (0x00018379) bg_cl_pane_ParamLimits

0x98d7,	// (0x00018379) bg_cl_pane

0x5cb4,	// (0x00014756) cl_header_pane_ParamLimits

0x5cb4,	// (0x00014756) cl_header_pane

0x5cc8,	// (0x0001476a) cl_listscroll_pane_ParamLimits

0x5cc8,	// (0x0001476a) cl_listscroll_pane

0xd196,	// (0x0001bc38) bg_cl_pane_g1

0xd19e,	// (0x0001bc40) bg_cl_pane_g2

0xd1a6,	// (0x0001bc48) bg_cl_pane_g3

0xd1ae,	// (0x0001bc50) bg_cl_pane_g4

0xd1b6,	// (0x0001bc58) bg_cl_pane_g5

0xd1be,	// (0x0001bc60) bg_cl_pane_g6

0xd1c6,	// (0x0001bc68) bg_cl_pane_g7

0xd1ce,	// (0x0001bc70) bg_cl_pane_g8

0xd1d6,	// (0x0001bc78) bg_cl_pane_g9

0x0008,

0xf9c0,	// (0x0001e462) bg_cl_pane_g

0x5cd8,	// (0x0001477a) aid_height_cl_leading_ParamLimits

0x5cd8,	// (0x0001477a) aid_height_cl_leading

0x5ce4,	// (0x00014786) aid_height_cl_text_ParamLimits

0x5ce4,	// (0x00014786) aid_height_cl_text

0x914c,	// (0x00017bee) bg_cl_header_pane_ParamLimits

0x914c,	// (0x00017bee) bg_cl_header_pane

0x5d03,	// (0x000147a5) cl_header_pane_g1_ParamLimits

0x5d03,	// (0x000147a5) cl_header_pane_g1

0x5d19,	// (0x000147bb) cl_header_pane_t1_ParamLimits

0x5d19,	// (0x000147bb) cl_header_pane_t1

0xd1de,	// (0x0001bc80) cl_list_pane

0xccf8,	// (0x0001b79a) hc_scroll_pane_cp01

0x9d4d,	// (0x000187ef) bg_cl_header_pane_g1

0xcbcc,	// (0x0001b66e) bg_cl_header_pane_g2

0x9d6d,	// (0x0001880f) bg_cl_header_pane_g3

0xcbdc,	// (0x0001b67e) bg_cl_header_pane_g4

0xcbd4,	// (0x0001b676) bg_cl_header_pane_g5

0xce93,	// (0x0001b935) bg_cl_header_pane_g6

0xcbf4,	// (0x0001b696) bg_cl_header_pane_g7

0xcbfc,	// (0x0001b69e) bg_cl_header_pane_g8

0xcbec,	// (0x0001b68e) bg_cl_header_pane_g9

0x0008,

0xf9d3,	// (0x0001e475) bg_cl_header_pane_g

0x5d32,	// (0x000147d4) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x5d32,	// (0x000147d4) hc_cl_list_double_graphic_heading_pane

0x5d43,	// (0x000147e5) hc_cl_list_single_graphic_pane_ParamLimits

0x5d43,	// (0x000147e5) hc_cl_list_single_graphic_pane

0x5d59,	// (0x000147fb) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x5d59,	// (0x000147fb) hc_cl_list_single_graphic_pane_g1

0x5d65,	// (0x00014807) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x5d65,	// (0x00014807) hc_cl_list_single_graphic_pane_g2

0x0001,

0xf9e6,	// (0x0001e488) hc_cl_list_single_graphic_pane_g_ParamLimits

0xf9e6,	// (0x0001e488) hc_cl_list_single_graphic_pane_g

0x5d79,	// (0x0001481b) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x5d79,	// (0x0001481b) hc_cl_list_single_graphic_pane_t1

0x5d59,	// (0x000147fb) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x5d59,	// (0x000147fb) hc_cl_list_double_graphic_heading_pane_g1

0x5d8e,	// (0x00014830) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x5d8e,	// (0x00014830) hc_cl_list_double_graphic_heading_pane_g2

0x5da2,	// (0x00014844) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x5da2,	// (0x00014844) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xf9eb,	// (0x0001e48d) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xf9eb,	// (0x0001e48d) hc_cl_list_double_graphic_heading_pane_g

0x5db6,	// (0x00014858) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x5db6,	// (0x00014858) hc_cl_list_double_graphic_heading_pane_t1

0x5dcb,	// (0x0001486d) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x5dcb,	// (0x0001486d) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xf9f2,	// (0x0001e494) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xf9f2,	// (0x0001e494) hc_cl_list_double_graphic_heading_pane_t

0xd1ef,	// (0x0001bc91) vid4_progress_pane_g1

0xd1ff,	// (0x0001bca1) vid4_progress_pane_g2

0x5de0,	// (0x00014882) vid4_progress_pane_g3

0xd20f,	// (0x0001bcb1) vid4_progress_pane_g4

0x0004,

0xf9f7,	// (0x0001e499) vid4_progress_pane_g

0x5df2,	// (0x00014894) vid4_progress_pane_t1

0xd227,	// (0x0001bcc9) vid4_progress_pane_t2

0x0002,

0xfa02,	// (0x0001e4a4) vid4_progress_pane_t

0x5e0a,	// (0x000148ac) wait_bar_pane_cp07

0xbd35,	// (0x0001a7d7) blid_firmament_pane_ParamLimits

0xbd78,	// (0x0001a81a) popup_blid_sat_info2_window_g1

0xbd9c,	// (0x0001a83e) popup_blid_sat_info2_window_t3

0xbdaa,	// (0x0001a84c) popup_blid_sat_info2_window_t4

0xbdb8,	// (0x0001a85a) popup_blid_sat_info2_window_t5

0xbdc6,	// (0x0001a868) popup_blid_sat_info2_window_t6

0xbdd6,	// (0x0001a878) popup_blid_sat_info2_window_t7

0xbde4,	// (0x0001a886) popup_blid_sat_info2_window_t8

0xbdf2,	// (0x0001a894) popup_blid_sat_info2_window_t9

0xbe00,	// (0x0001a8a2) popup_blid_sat_info2_window_t10

0xbec1,	// (0x0001a963) aid_firma_cardinal_ParamLimits

0xbed5,	// (0x0001a977) blid_firmament_pane_t1_ParamLimits

0xbeec,	// (0x0001a98e) blid_firmament_pane_t2_ParamLimits

0xbf03,	// (0x0001a9a5) blid_firmament_pane_t3_ParamLimits

0xbf1a,	// (0x0001a9bc) blid_firmament_pane_t4_ParamLimits

0xf620,	// (0x0001e0c2) blid_firmament_pane_t_ParamLimits

0xbf31,	// (0x0001a9d3) blid_sat_info_pane_ParamLimits

0x914c,	// (0x00017bee) main_cam_set_pane_ParamLimits

0x428a,	// (0x00012d2c) aid_size_cell_colour_35_ParamLimits

0x42aa,	// (0x00012d4c) aid_size_cell_colour_112_ParamLimits

0x42ca,	// (0x00012d6c) aid_size_cell_effect_ParamLimits

0xa726,	// (0x000191c8) bg_tb_trans_pane_cp02_ParamLimits

0x9feb,	// (0x00018a8d) heading_imed_pane_ParamLimits

0x42ea,	// (0x00012d8c) listscroll_imed_pane_ParamLimits

0xb158,	// (0x00019bfa) popup_call2_audio_first_window_g5_ParamLimits

0xb158,	// (0x00019bfa) popup_call2_audio_first_window_g5

0x470f,	// (0x000131b1) aid_size_touch_image3_arrow_left_ParamLimits

0x470f,	// (0x000131b1) aid_size_touch_image3_arrow_left

0x473b,	// (0x000131dd) aid_size_touch_image3_arrow_right_ParamLimits

0x473b,	// (0x000131dd) aid_size_touch_image3_arrow_right

0xd23c,	// (0x0001bcde) vid4_progress_pane_t3

0x448f,	// (0x00012f31) main_hwr_training_symbol_option_pane_ParamLimits

0x448f,	// (0x00012f31) main_hwr_training_symbol_option_pane

0xc637,	// (0x0001b0d9) popup_hwr_training_preview_window_ParamLimits

0xc637,	// (0x0001b0d9) popup_hwr_training_preview_window

0x44af,	// (0x00012f51) hwr_training_navi_pane_g5_ParamLimits

0x44af,	// (0x00012f51) hwr_training_navi_pane_g5

0xcbba,	// (0x0001b65c) popup_char_count_window

0x914c,	// (0x00017bee) bg_popup_sub_pane_cp20_ParamLimits

0x57d0,	// (0x00014272) list_vitu2_match_list_pane_ParamLimits

0x57dc,	// (0x0001427e) vitu2_page_scroll_pane_ParamLimits

0x57dc,	// (0x0001427e) vitu2_page_scroll_pane

0xd273,	// (0x0001bd15) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd273,	// (0x0001bd15) list_single_hwr_training_symbol_option_pane

0xd286,	// (0x0001bd28) list_single_hwr_training_symbol_option_pane_g1

0xd28e,	// (0x0001bd30) list_single_hwr_training_symbol_option_pane_t1

0xd29c,	// (0x0001bd3e) bg_button_pane_cp023

0xd2a5,	// (0x0001bd47) bg_button_pane_cp024

0xd2d8,	// (0x0001bd7a) vitu2_page_scroll_pane_g1

0xd2e0,	// (0x0001bd82) vitu2_page_scroll_pane_g2

0x0001,

0xfa09,	// (0x0001e4ab) vitu2_page_scroll_pane_g

0xd2e8,	// (0x0001bd8a) vitu2_page_scroll_pane_t1

0xbcab,	// (0x0001a74d) popup_char_count_window_g1

0xd2f7,	// (0x0001bd99) popup_char_count_window_g2

0xd300,	// (0x0001bda2) popup_char_count_window_g3

0x0002,

0xfa0e,	// (0x0001e4b0) popup_char_count_window_g

0xd309,	// (0x0001bdab) popup_char_count_window_t1

0x90dd,	// (0x00017b7f) main_vded2_pane

0xc3ea,	// (0x0001ae8c) aid_size_cell_imed_line

0xc3f4,	// (0x0001ae96) grid_imed_line_width_pane

0xcb39,	// (0x0001b5db) vid4_indicators_pane_g4

0xd317,	// (0x0001bdb9) cell_imed_line_width_pane_ParamLimits

0xd317,	// (0x0001bdb9) cell_imed_line_width_pane

0xd32b,	// (0x0001bdcd) cell_imed_line_width_pane_g1

0xd334,	// (0x0001bdd6) cell_imed_line_width_pane_g2

0x0001,

0xfa15,	// (0x0001e4b7) cell_imed_line_width_pane_g

0x5e31,	// (0x000148d3) main_vded2_pane_g1_ParamLimits

0x5e31,	// (0x000148d3) main_vded2_pane_g1

0x5e47,	// (0x000148e9) main_vded2_pane_g2_ParamLimits

0x5e47,	// (0x000148e9) main_vded2_pane_g2

0x0001,

0xfa1a,	// (0x0001e4bc) main_vded2_pane_g_ParamLimits

0xfa1a,	// (0x0001e4bc) main_vded2_pane_g

0x5e59,	// (0x000148fb) vded2_slider_pane_ParamLimits

0x5e59,	// (0x000148fb) vded2_slider_pane

0x5e69,	// (0x0001490b) aid_size_touch_vded2_end

0x5e73,	// (0x00014915) aid_size_touch_vded2_playhead

0xd33c,	// (0x0001bdde) aid_size_touch_vded2_start

0xd344,	// (0x0001bde6) vded2_slider_bg_pane

0xd34d,	// (0x0001bdef) vded2_slider_pane_g1

0xd356,	// (0x0001bdf8) vded2_slider_pane_g2

0x5e7d,	// (0x0001491f) vded2_slider_pane_g3

0x0002,

0xfa1f,	// (0x0001e4c1) vded2_slider_pane_g

0xd35e,	// (0x0001be00) vded2_slider_bg_pane_g1

0xd367,	// (0x0001be09) vded2_slider_bg_pane_g2

0xd370,	// (0x0001be12) vded2_slider_bg_pane_g3

0x0002,

0xfa26,	// (0x0001e4c8) vded2_slider_bg_pane_g

0x27ec,	// (0x0001128e) aid_postcard_touch_down_pane_ParamLimits

0x27ec,	// (0x0001128e) aid_postcard_touch_down_pane

0x2802,	// (0x000112a4) aid_postcard_touch_up_pane_ParamLimits

0x2802,	// (0x000112a4) aid_postcard_touch_up_pane

0x90dd,	// (0x00017b7f) main_blid2_pane

0xba4f,	// (0x0001a4f1) popup_blid2_search_window

0x90dd,	// (0x00017b7f) blid2_gps_pane

0x90dd,	// (0x00017b7f) blid2_navig_pane

0x90dd,	// (0x00017b7f) blid2_search_pane

0x90dd,	// (0x00017b7f) blid2_tripm_pane

0x5e88,	// (0x0001492a) blid2_search_pane_g1_ParamLimits

0x5e88,	// (0x0001492a) blid2_search_pane_g1

0x5ea2,	// (0x00014944) blid2_search_pane_t1_ParamLimits

0x5ea2,	// (0x00014944) blid2_search_pane_t1

0x5eb4,	// (0x00014956) aid_size_cell_blid2_gps_ParamLimits

0x5eb4,	// (0x00014956) aid_size_cell_blid2_gps

0x5ecc,	// (0x0001496e) blid2_gps_pane_g1_ParamLimits

0x5ecc,	// (0x0001496e) blid2_gps_pane_g1

0x5ee0,	// (0x00014982) grid_blid2_satellite_pane_ParamLimits

0x5ee0,	// (0x00014982) grid_blid2_satellite_pane

0x5efa,	// (0x0001499c) blid2_navig_pane_g1_ParamLimits

0x5efa,	// (0x0001499c) blid2_navig_pane_g1

0x5f06,	// (0x000149a8) blid2_navig_pane_t1_ParamLimits

0x5f06,	// (0x000149a8) blid2_navig_pane_t1

0x5f21,	// (0x000149c3) blid2_navig_pane_t2_ParamLimits

0x5f21,	// (0x000149c3) blid2_navig_pane_t2

0x0001,

0xfa2d,	// (0x0001e4cf) blid2_navig_pane_t_ParamLimits

0xfa2d,	// (0x0001e4cf) blid2_navig_pane_t

0x5f3c,	// (0x000149de) blid2_navig_ring_pane_ParamLimits

0x5f3c,	// (0x000149de) blid2_navig_ring_pane

0x5f55,	// (0x000149f7) blid2_speed_pane_ParamLimits

0x5f55,	// (0x000149f7) blid2_speed_pane

0x5f61,	// (0x00014a03) blid2_tripm_pane_g1_ParamLimits

0x5f61,	// (0x00014a03) blid2_tripm_pane_g1

0x5f7a,	// (0x00014a1c) blid2_tripm_pane_g2_ParamLimits

0x5f7a,	// (0x00014a1c) blid2_tripm_pane_g2

0x5f8e,	// (0x00014a30) blid2_tripm_pane_g3_ParamLimits

0x5f8e,	// (0x00014a30) blid2_tripm_pane_g3

0x5fa2,	// (0x00014a44) blid2_tripm_pane_g4_ParamLimits

0x5fa2,	// (0x00014a44) blid2_tripm_pane_g4

0x5fb6,	// (0x00014a58) blid2_tripm_pane_g5_ParamLimits

0x5fb6,	// (0x00014a58) blid2_tripm_pane_g5

0x0005,

0xfa32,	// (0x0001e4d4) blid2_tripm_pane_g_ParamLimits

0xfa32,	// (0x0001e4d4) blid2_tripm_pane_g

0x5fdc,	// (0x00014a7e) blid2_tripm_pane_t1_ParamLimits

0x5fdc,	// (0x00014a7e) blid2_tripm_pane_t1

0x5ff7,	// (0x00014a99) blid2_tripm_pane_t2_ParamLimits

0x5ff7,	// (0x00014a99) blid2_tripm_pane_t2

0x6010,	// (0x00014ab2) blid2_tripm_pane_t3_ParamLimits

0x6010,	// (0x00014ab2) blid2_tripm_pane_t3

0x0003,

0xfa3f,	// (0x0001e4e1) blid2_tripm_pane_t_ParamLimits

0xfa3f,	// (0x0001e4e1) blid2_tripm_pane_t

0x6057,	// (0x00014af9) cell_blid2_satellite_pane_ParamLimits

0x6057,	// (0x00014af9) cell_blid2_satellite_pane

0x6075,	// (0x00014b17) cell_blid2_satellite_pane_g1

0xd379,	// (0x0001be1b) cell_blid2_satellite_pane_t1

0x9b5c,	// (0x000185fe) blid2_speed_pane_g1

0xd387,	// (0x0001be29) blid2_speed_pane_t1

0xd395,	// (0x0001be37) blid2_speed_pane_t2

0x0001,

0xfa48,	// (0x0001e4ea) blid2_speed_pane_t

0x9b5c,	// (0x000185fe) blid2_navig_ring_pane_g1

0x607e,	// (0x00014b20) blid2_navig_ring_pane_g2

0x6086,	// (0x00014b28) blid2_navig_ring_pane_g3

0x608e,	// (0x00014b30) blid2_navig_ring_pane_g4

0x6096,	// (0x00014b38) blid2_navig_ring_pane_g5

0x0004,

0xfa4d,	// (0x0001e4ef) blid2_navig_ring_pane_g

0x90dd,	// (0x00017b7f) bg_popup_window_pane_cp011

0xd3a3,	// (0x0001be45) popup_blid2_search_window_g1

0xd3ab,	// (0x0001be4d) popup_blid2_search_window_t1

0xd3b9,	// (0x0001be5b) popup_blid2_search_window_t2

0x0001,

0xfa58,	// (0x0001e4fa) popup_blid2_search_window_t

0x9c5c,	// (0x000186fe) main_browser_pane_g1

0x98d7,	// (0x00018379) main_browser_pane_ParamLimits

0x914c,	// (0x00017bee) bg_button_pane_cp011_ParamLimits

0x50a7,	// (0x00013b49) cell_vitu2_function_pane_g1_ParamLimits

0xa726,	// (0x000191c8) bg_popup_sub_pane_cp22_ParamLimits

0x595a,	// (0x000143fc) input_focus_pane_cp08_ParamLimits

0x5975,	// (0x00014417) popup_vitu2_query_button_pane_ParamLimits

0x5975,	// (0x00014417) popup_vitu2_query_button_pane

0x5984,	// (0x00014426) popup_vitu2_query_input_button_pane

0xcf02,	// (0x0001b9a4) popup_vitu2_query_window_g1_ParamLimits

0x598c,	// (0x0001442e) popup_vitu2_query_window_g2_ParamLimits

0xf959,	// (0x0001e3fb) popup_vitu2_query_window_g_ParamLimits

0x90dd,	// (0x00017b7f) bg_button_pane_cp026

0x609e,	// (0x00014b40) popup_vitu2_query_input_button_pane_g1

0x90dd,	// (0x00017b7f) bg_button_pane_cp025

0xd3c7,	// (0x0001be69) popup_vitu2_query_button_pane_t1

0x370d,	// (0x000121af) main_mp3_pane_t6

0x371b,	// (0x000121bd) popup_slider_window_cp01

0xca9d,	// (0x0001b53f) cam4_battery_pane

0xcaf6,	// (0x0001b598) cam4_battery_pane_cp02

0xd1e7,	// (0x0001bc89) cam4_battery_pane_cp01

0xd1e7,	// (0x0001bc89) cam4_battery_pane_cp03

0x9b5c,	// (0x000185fe) cam4_battery_pane_g1

0xd3d5,	// (0x0001be77) cam4_battery_pane_g2

0x0001,

0xfa5d,	// (0x0001e4ff) cam4_battery_pane_g

0xbe0e,	// (0x0001a8b0) popup_blid_sat_info2_window_t11

0xa470,	// (0x00018f12) aid_size_touch_mv_arrow_left_ParamLimits

0xa499,	// (0x00018f3b) aid_size_touch_mv_arrow_right_ParamLimits

0xa4f7,	// (0x00018f99) navi_pane_g1_ParamLimits

0xa503,	// (0x00018fa5) navi_pane_g2_ParamLimits

0xa531,	// (0x00018fd3) navi_pane_g3_ParamLimits

0xf334,	// (0x0001ddd6) navi_pane_g_ParamLimits

0x24b0,	// (0x00010f52) navi_pane_mv_t1_ParamLimits

0x42f6,	// (0x00012d98) grid_imed_effect_pane_ParamLimits

0x1239,	// (0x0000fcdb) aid_placing_vt_slider_lsc

0x9bab,	// (0x0001864d) aid_placing_vt_slider_prt

0x914c,	// (0x00017bee) bg_tb_trans_pane_cp01_ParamLimits

0xc08e,	// (0x0001ab30) popup_image_details_window_g1_ParamLimits

0xc0a1,	// (0x0001ab43) popup_image_details_window_g2_ParamLimits

0xc0b6,	// (0x0001ab58) popup_image_details_window_g3_ParamLimits

0xc0b6,	// (0x0001ab58) popup_image_details_window_g3

0xf660,	// (0x0001e102) popup_image_details_window_g_ParamLimits

0xc0ca,	// (0x0001ab6c) popup_image_details_window_t1_ParamLimits

0xc0dc,	// (0x0001ab7e) popup_image_details_window_t2_ParamLimits

0xc0f5,	// (0x0001ab97) popup_image_details_window_t3_ParamLimits

0xc109,	// (0x0001abab) popup_image_details_window_t4_ParamLimits

0xc124,	// (0x0001abc6) popup_image_details_window_t5_ParamLimits

0xf667,	// (0x0001e109) popup_image_details_window_t_ParamLimits

0x5cf0,	// (0x00014792) cl_header_name_pane_ParamLimits

0x5cf0,	// (0x00014792) cl_header_name_pane

0x60a6,	// (0x00014b48) cl_header_name_pane_t1_ParamLimits

0x60a6,	// (0x00014b48) cl_header_name_pane_t1

0x60c7,	// (0x00014b69) cl_header_name_pane_t2_ParamLimits

0x60c7,	// (0x00014b69) cl_header_name_pane_t2

0x6109,	// (0x00014bab) cl_header_name_pane_t3_ParamLimits

0x6109,	// (0x00014bab) cl_header_name_pane_t3

0x0002,

0xfa62,	// (0x0001e504) cl_header_name_pane_t_ParamLimits

0xfa62,	// (0x0001e504) cl_header_name_pane_t

0xa5c0,	// (0x00019062) navi_pane_mv_g2_ParamLimits

0xcb85,	// (0x0001b627) field_vitu2_entry_pane_g1_ParamLimits

0xcb91,	// (0x0001b633) field_vitu2_entry_pane_g2_ParamLimits

0xa6f0,	// (0x00019192) field_vitu2_entry_pane_g3_ParamLimits

0xa6f0,	// (0x00019192) field_vitu2_entry_pane_g3

0xf862,	// (0x0001e304) field_vitu2_entry_pane_g_ParamLimits

0x4f37,	// (0x000139d9) cell_vitu2_itu_pane_g1_ParamLimits

0x4f4f,	// (0x000139f1) cell_vitu2_itu_pane_g2_ParamLimits

0x4f4f,	// (0x000139f1) cell_vitu2_itu_pane_g2

0x0001,

0xf86e,	// (0x0001e310) cell_vitu2_itu_pane_g_ParamLimits

0xf86e,	// (0x0001e310) cell_vitu2_itu_pane_g

0x914c,	// (0x00017bee) bg_vkb2_func_pane_cp05_ParamLimits

0x914c,	// (0x00017bee) bg_vkb2_func_pane_cp05

0x914c,	// (0x00017bee) bg_vkb2_func_pane_cp03

0x914c,	// (0x00017bee) bg_vkb2_func_pane_cp04

0x914c,	// (0x00017bee) bg_vkb2_func_pane_cp10_ParamLimits

0x914c,	// (0x00017bee) bg_vkb2_func_pane_cp10

0x5c94,	// (0x00014736) bg_vkb2_func_pane_cp08

0x5c6d,	// (0x0001470f) bg_vkb2_func_pane_cp06

0x5c79,	// (0x0001471b) bg_vkb2_func_pane_cp07

0xd2ae,	// (0x0001bd50) bg_vkb2_func_pane_cp11_ParamLimits

0xd2ae,	// (0x0001bd50) bg_vkb2_func_pane_cp11

0xd2c3,	// (0x0001bd65) bg_vkb2_func_pane_cp12_ParamLimits

0xd2c3,	// (0x0001bd65) bg_vkb2_func_pane_cp12

0x90dd,	// (0x00017b7f) bg_vkb2_func_pane_cp09

0xcbcc,	// (0x0001b66e) bg_vkb2_func_pane_g1

0x9d6d,	// (0x0001880f) bg_vkb2_func_pane_g2

0xcbd4,	// (0x0001b676) bg_vkb2_func_pane_g3

0xcbdc,	// (0x0001b67e) bg_vkb2_func_pane_g4

0xce93,	// (0x0001b935) bg_vkb2_func_pane_g5

0xcbf4,	// (0x0001b696) bg_vkb2_func_pane_g6

0xcbfc,	// (0x0001b69e) bg_vkb2_func_pane_g7

0xcbec,	// (0x0001b68e) bg_vkb2_func_pane_g8

0x9d4d,	// (0x000187ef) bg_vkb2_func_pane_g9

0x0008,

0xfa69,	// (0x0001e50b) bg_vkb2_func_pane_g

0x5fca,	// (0x00014a6c) blid2_tripm_pane_g6_ParamLimits

0x5fca,	// (0x00014a6c) blid2_tripm_pane_g6

0xc96e,	// (0x0001b410) mp4_progress_pane_g1

0x6043,	// (0x00014ae5) blid2_tripm_values_pane_ParamLimits

0x6043,	// (0x00014ae5) blid2_tripm_values_pane

0x613a,	// (0x00014bdc) blid2_tripm_values_pane_t1

0x6148,	// (0x00014bea) blid2_tripm_values_pane_t2

0x6156,	// (0x00014bf8) blid2_tripm_values_pane_t3

0x6164,	// (0x00014c06) blid2_tripm_values_pane_t4

0x6172,	// (0x00014c14) blid2_tripm_values_pane_t5

0x6180,	// (0x00014c22) blid2_tripm_values_pane_t6

0x618e,	// (0x00014c30) blid2_tripm_values_pane_t7

0x619c,	// (0x00014c3e) blid2_tripm_values_pane_t8

0x61aa,	// (0x00014c4c) blid2_tripm_values_pane_t9

0x0008,

0xfa7c,	// (0x0001e51e) blid2_tripm_values_pane_t

0x127b,	// (0x0000fd1d) call_video_pane_t1_ParamLimits

0x1299,	// (0x0000fd3b) call_video_pane_t2_ParamLimits

0xf1e2,	// (0x0001dc84) call_video_pane_t_ParamLimits

0x276a,	// (0x0001120c) msg_header_pane_g1_ParamLimits

0xa7e3,	// (0x00019285) msg_header_pane_g2_ParamLimits

0xa7e3,	// (0x00019285) msg_header_pane_g2

0x0001,

0xf3d7,	// (0x0001de79) msg_header_pane_g_ParamLimits

0xf3d7,	// (0x0001de79) msg_header_pane_g

0x98d7,	// (0x00018379) main_clock2_pane_ParamLimits

0x3ff7,	// (0x00012a99) grid_clock2_toolbar_pane_ParamLimits

0x3ff7,	// (0x00012a99) grid_clock2_toolbar_pane

0x3ff7,	// (0x00012a99) listscroll_clock2_pane_ParamLimits

0x3ff7,	// (0x00012a99) listscroll_clock2_pane

0x40db,	// (0x00012b7d) main_clock2_pane_t3_ParamLimits

0x40db,	// (0x00012b7d) main_clock2_pane_t3

0x40ff,	// (0x00012ba1) main_clock2_pane_t4_ParamLimits

0x40ff,	// (0x00012ba1) main_clock2_pane_t4

0xd3df,	// (0x0001be81) cell_clock2_toolbar_pane

0xd3e7,	// (0x0001be89) cell_clock2_toolbar_pane_cp01

0xd3e7,	// (0x0001be89) cell_clock2_toolbar_pane_cp02

0xd3ef,	// (0x0001be91) cell_clock2_toolbar_pane_cp03

0xd3f7,	// (0x0001be99) list_clock2_pane

0xa3e6,	// (0x00018e88) scroll_pane_cp10

0xd3ff,	// (0x0001bea1) list_single_clock2_pane_ParamLimits

0xd3ff,	// (0x0001bea1) list_single_clock2_pane

0x9b1c,	// (0x000185be) list_highlight_pane_cp08

0xd40c,	// (0x0001beae) list_single_clock2_pane_t1

0xd41a,	// (0x0001bebc) list_single_clock2_pane_t2

0x0001,

0xfa8f,	// (0x0001e531) list_single_clock2_pane_t

0x90dd,	// (0x00017b7f) bg_button_pane_cp10

0xd428,	// (0x0001beca) cell_clock2_toolbar_pane_g1

0x2778,	// (0x0001121a) aid_main_viewer_pane_g1_ParamLimits

0x2778,	// (0x0001121a) aid_main_viewer_pane_g1

0x2786,	// (0x00011228) aid_main_viewer_pane_g2_ParamLimits

0x2786,	// (0x00011228) aid_main_viewer_pane_g2

0x2794,	// (0x00011236) aid_main_viewer_pane_g3_ParamLimits

0x2794,	// (0x00011236) aid_main_viewer_pane_g3

0x27a3,	// (0x00011245) aid_main_viewer_pane_g4_ParamLimits

0x27a3,	// (0x00011245) aid_main_viewer_pane_g4

0x0003,

0xf3e8,	// (0x0001de8a) aid_main_viewer_pane_g_ParamLimits

0xf3e8,	// (0x0001de8a) aid_main_viewer_pane_g

0x30ea,	// (0x00011b8c) main_calc_pane_ParamLimits

0x30fe,	// (0x00011ba0) main_dialer2_pane_ParamLimits

0x90dd,	// (0x00017b7f) main_cam6_pane

0x90dd,	// (0x00017b7f) main_vid6_pane

0x4003,	// (0x00012aa5) listscroll_gen_pane_cp06_ParamLimits

0x4003,	// (0x00012aa5) listscroll_gen_pane_cp06

0x4122,	// (0x00012bc4) main_clock2_pane_t5_ParamLimits

0x4122,	// (0x00012bc4) main_clock2_pane_t5

0x4180,	// (0x00012c22) aid_call2_pane_cp10_ParamLimits

0x4192,	// (0x00012c34) aid_call_pane_cp10_ParamLimits

0xa464,	// (0x00018f06) popup_clock_analogue_window_cp10_g1_ParamLimits

0xa464,	// (0x00018f06) popup_clock_analogue_window_cp10_g2_ParamLimits

0x41a4,	// (0x00012c46) popup_clock_analogue_window_cp10_g3_ParamLimits

0x41a4,	// (0x00012c46) popup_clock_analogue_window_cp10_g4_ParamLimits

0xa464,	// (0x00018f06) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf71c,	// (0x0001e1be) popup_clock_analogue_window_cp10_g_ParamLimits

0x41ba,	// (0x00012c5c) popup_clock_analogue_window_cp10_t1_ParamLimits

0x46bc,	// (0x0001315e) cell_dialer2_keypad_pane_g2_ParamLimits

0x46bc,	// (0x0001315e) cell_dialer2_keypad_pane_g2

0x0001,

0xf801,	// (0x0001e2a3) cell_dialer2_keypad_pane_g_ParamLimits

0xf801,	// (0x0001e2a3) cell_dialer2_keypad_pane_g

0x46d8,	// (0x0001317a) cell_dialer2_keypad_pane_t1

0x53b6,	// (0x00013e58) main_cset_text2_pane_ParamLimits

0x53b6,	// (0x00013e58) main_cset_text2_pane

0xd0ee,	// (0x0001bb90) area_vitu2_query_pane_g1_ParamLimits

0x5c0e,	// (0x000146b0) area_vitu2_query_pane_g2_ParamLimits

0xf9ac,	// (0x0001e44e) area_vitu2_query_pane_g_ParamLimits

0xd172,	// (0x0001bc14) area_vitu2_query_pane_t7_ParamLimits

0xd172,	// (0x0001bc14) area_vitu2_query_pane_t7

0x5c6d,	// (0x0001470f) bg_button_pane_cp018_ParamLimits

0x5c79,	// (0x0001471b) bg_button_pane_cp021_ParamLimits

0x5c85,	// (0x00014727) bg_button_pane_cp022_ParamLimits

0x5c94,	// (0x00014736) bg_vkb2_func_pane_cp08_ParamLimits

0x5c6d,	// (0x0001470f) bg_vkb2_func_pane_cp06_ParamLimits

0x5c79,	// (0x0001471b) bg_vkb2_func_pane_cp07_ParamLimits

0x5ca4,	// (0x00014746) input_focus_pane_cp09_ParamLimits

0x61b8,	// (0x00014c5a) cam6_autofocus_pane_ParamLimits

0x61b8,	// (0x00014c5a) cam6_autofocus_pane

0x61c4,	// (0x00014c66) cam6_image_uncrop_pane_ParamLimits

0x61c4,	// (0x00014c66) cam6_image_uncrop_pane

0x61d4,	// (0x00014c76) cam6_indi_pane_ParamLimits

0x61d4,	// (0x00014c76) cam6_indi_pane

0x61ea,	// (0x00014c8c) cam6_mode_pane_ParamLimits

0x61ea,	// (0x00014c8c) cam6_mode_pane

0x61fc,	// (0x00014c9e) cam6_timer_pane_ParamLimits

0x61fc,	// (0x00014c9e) cam6_timer_pane

0x6208,	// (0x00014caa) cam6_zoom_pane_ParamLimits

0x6208,	// (0x00014caa) cam6_zoom_pane

0x6215,	// (0x00014cb7) cam6_mode_pane_g1_ParamLimits

0x6215,	// (0x00014cb7) cam6_mode_pane_g1

0x6225,	// (0x00014cc7) cam6_mode_pane_g2_ParamLimits

0x6225,	// (0x00014cc7) cam6_mode_pane_g2

0x6235,	// (0x00014cd7) cam6_mode_pane_g3_ParamLimits

0x6235,	// (0x00014cd7) cam6_mode_pane_g3

0x6245,	// (0x00014ce7) cam6_mode_pane_g4_ParamLimits

0x6245,	// (0x00014ce7) cam6_mode_pane_g4

0x0003,

0xfa94,	// (0x0001e536) cam6_mode_pane_g_ParamLimits

0xfa94,	// (0x0001e536) cam6_mode_pane_g

0xbbc4,	// (0x0001a666) bg_tb_trans_pane_cp08_ParamLimits

0xbbc4,	// (0x0001a666) bg_tb_trans_pane_cp08

0xd43e,	// (0x0001bee0) cam6_battery_pane_ParamLimits

0xd43e,	// (0x0001bee0) cam6_battery_pane

0xd454,	// (0x0001bef6) cam6_indi_pane_g1_ParamLimits

0xd454,	// (0x0001bef6) cam6_indi_pane_g1

0xd466,	// (0x0001bf08) cam6_indi_pane_g2_ParamLimits

0xd466,	// (0x0001bf08) cam6_indi_pane_g2

0xd478,	// (0x0001bf1a) cam6_indi_pane_g3_ParamLimits

0xd478,	// (0x0001bf1a) cam6_indi_pane_g3

0x0002,

0xfa9d,	// (0x0001e53f) cam6_indi_pane_g_ParamLimits

0xfa9d,	// (0x0001e53f) cam6_indi_pane_g

0xd48a,	// (0x0001bf2c) cam6_indi_pane_t1_ParamLimits

0xd48a,	// (0x0001bf2c) cam6_indi_pane_t1

0x4ce0,	// (0x00013782) cam6_autofocus_pane_g1

0x4ce8,	// (0x0001378a) cam6_autofocus_pane_g2

0x4cf0,	// (0x00013792) cam6_autofocus_pane_g3

0x4cf8,	// (0x0001379a) cam6_autofocus_pane_g4

0x0003,

0xfaa4,	// (0x0001e546) cam6_autofocus_pane_g

0xd4b0,	// (0x0001bf52) cam6_timer_pane_g1

0xd4b8,	// (0x0001bf5a) cam6_timer_pane_t1

0xd4c6,	// (0x0001bf68) cam6_zoom_cont_pane

0xd4ce,	// (0x0001bf70) cam6_zoom_pane_g1

0xd4d7,	// (0x0001bf79) cam6_zoom_pane_g2

0x6255,	// (0x00014cf7) cam6_zoom_pane_g3

0x0002,

0xfaad,	// (0x0001e54f) cam6_zoom_pane_g

0x9b5c,	// (0x000185fe) cam6_battery_pane_g1

0x9b5c,	// (0x000185fe) cam6_battery_pane_g2

0x0001,

0xf398,	// (0x0001de3a) cam6_battery_pane_g

0xd4ce,	// (0x0001bf70) cam6_zoom_cont_pane_g1

0xd4d7,	// (0x0001bf79) cam6_zoom_cont_pane_g2

0xd4e0,	// (0x0001bf82) cam6_zoom_cont_pane_g3

0x0002,

0xfab4,	// (0x0001e556) cam6_zoom_cont_pane_g

0x6270,	// (0x00014d12) cam6_mode_pane_cp_ParamLimits

0x6270,	// (0x00014d12) cam6_mode_pane_cp

0x6282,	// (0x00014d24) cam6_zoom_pane_cp_ParamLimits

0x6282,	// (0x00014d24) cam6_zoom_pane_cp

0x628e,	// (0x00014d30) vid6_image_uncrop_cif_pane_ParamLimits

0x628e,	// (0x00014d30) vid6_image_uncrop_cif_pane

0x629e,	// (0x00014d40) vid6_image_uncrop_nhd_pane_ParamLimits

0x629e,	// (0x00014d40) vid6_image_uncrop_nhd_pane

0x62ad,	// (0x00014d4f) vid6_image_uncrop_vga_pane_ParamLimits

0x62ad,	// (0x00014d4f) vid6_image_uncrop_vga_pane

0x62bc,	// (0x00014d5e) vid6_image_uncrop_wvga_pane_ParamLimits

0x62bc,	// (0x00014d5e) vid6_image_uncrop_wvga_pane

0x62cb,	// (0x00014d6d) vid6_indi_pane_ParamLimits

0x62cb,	// (0x00014d6d) vid6_indi_pane

0xbbc4,	// (0x0001a666) bg_tb_trans_pane_cp09_ParamLimits

0xbbc4,	// (0x0001a666) bg_tb_trans_pane_cp09

0xd4f8,	// (0x0001bf9a) cam6_battery_pane_cp_ParamLimits

0xd4f8,	// (0x0001bf9a) cam6_battery_pane_cp

0xd504,	// (0x0001bfa6) vid6_indi_pane_g1_ParamLimits

0xd504,	// (0x0001bfa6) vid6_indi_pane_g1

0xd516,	// (0x0001bfb8) vid6_indi_pane_g2_ParamLimits

0xd516,	// (0x0001bfb8) vid6_indi_pane_g2

0xd528,	// (0x0001bfca) vid6_indi_pane_g3_ParamLimits

0xd528,	// (0x0001bfca) vid6_indi_pane_g3

0xd53d,	// (0x0001bfdf) vid6_indi_pane_g4_ParamLimits

0xd53d,	// (0x0001bfdf) vid6_indi_pane_g4

0xd552,	// (0x0001bff4) vid6_indi_pane_g5_ParamLimits

0xd552,	// (0x0001bff4) vid6_indi_pane_g5

0x0004,

0xfabb,	// (0x0001e55d) vid6_indi_pane_g_ParamLimits

0xfabb,	// (0x0001e55d) vid6_indi_pane_g

0xd56c,	// (0x0001c00e) vid6_indi_pane_t1_ParamLimits

0xd56c,	// (0x0001c00e) vid6_indi_pane_t1

0xd582,	// (0x0001c024) vid6_indi_pane_t2_ParamLimits

0xd582,	// (0x0001c024) vid6_indi_pane_t2

0xd5aa,	// (0x0001c04c) vid6_indi_pane_t3_ParamLimits

0xd5aa,	// (0x0001c04c) vid6_indi_pane_t3

0xd5d2,	// (0x0001c074) vid6_indi_pane_t4_ParamLimits

0xd5d2,	// (0x0001c074) vid6_indi_pane_t4

0x0003,

0xfac6,	// (0x0001e568) vid6_indi_pane_t_ParamLimits

0xfac6,	// (0x0001e568) vid6_indi_pane_t

0xd5f6,	// (0x0001c098) wait_bar_pane_cp08

0x62e3,	// (0x00014d85) main_cset_text2_pane_t1_ParamLimits

0x62e3,	// (0x00014d85) main_cset_text2_pane_t1

0x625e,	// (0x00014d00) listscroll_gen_pane_cp06_t1_ParamLimits

0x625e,	// (0x00014d00) listscroll_gen_pane_cp06_t1

0x90dd,	// (0x00017b7f) main_cam6_set_pane

0x9843,	// (0x000182e5) bg_tb_trans_pane_cp06_ParamLimits

0xcaa5,	// (0x0001b547) cam4_indicators_pane_g1_ParamLimits

0xcab6,	// (0x0001b558) cam4_indicators_pane_g2_ParamLimits

0xf83e,	// (0x0001e2e0) cam4_indicators_pane_g_ParamLimits

0xcad4,	// (0x0001b576) cam4_indicators_pane_t1_ParamLimits

0x914c,	// (0x00017bee) bg_tb_trans_pane_cp07_ParamLimits

0xcb00,	// (0x0001b5a2) vid4_indicators_pane_g1_ParamLimits

0xcb14,	// (0x0001b5b6) vid4_indicators_pane_g2_ParamLimits

0xcb28,	// (0x0001b5ca) vid4_indicators_pane_g3_ParamLimits

0xcb39,	// (0x0001b5db) vid4_indicators_pane_g4_ParamLimits

0xf850,	// (0x0001e2f2) vid4_indicators_pane_g_ParamLimits

0xcb57,	// (0x0001b5f9) vid4_indicators_pane_t1_ParamLimits

0xd1ef,	// (0x0001bc91) vid4_progress_pane_g1_ParamLimits

0xd1ff,	// (0x0001bca1) vid4_progress_pane_g2_ParamLimits

0x5de0,	// (0x00014882) vid4_progress_pane_g3_ParamLimits

0xd20f,	// (0x0001bcb1) vid4_progress_pane_g4_ParamLimits

0xf9f7,	// (0x0001e499) vid4_progress_pane_g_ParamLimits

0x5df2,	// (0x00014894) vid4_progress_pane_t1_ParamLimits

0xd227,	// (0x0001bcc9) vid4_progress_pane_t2_ParamLimits

0xd23c,	// (0x0001bcde) vid4_progress_pane_t3_ParamLimits

0xfa02,	// (0x0001e4a4) vid4_progress_pane_t_ParamLimits

0x5e0a,	// (0x000148ac) wait_bar_pane_cp07_ParamLimits

0x6300,	// (0x00014da2) main_cam6_set_pane_g2_ParamLimits

0x6300,	// (0x00014da2) main_cam6_set_pane_g2

0x6324,	// (0x00014dc6) main_cset6_listscroll_pane_ParamLimits

0x6324,	// (0x00014dc6) main_cset6_listscroll_pane

0x6344,	// (0x00014de6) main_cset6_slider_pane_ParamLimits

0x6344,	// (0x00014de6) main_cset6_slider_pane

0x635a,	// (0x00014dfc) main_cset6_text2_pane_ParamLimits

0x635a,	// (0x00014dfc) main_cset6_text2_pane

0xd605,	// (0x0001c0a7) main_cset6_text_pane

0xd60d,	// (0x0001c0af) main_cset_list_pane_copy1_ParamLimits

0xd60d,	// (0x0001c0af) main_cset_list_pane_copy1

0xd61d,	// (0x0001c0bf) scroll_pane_cp028_copy1

0x6368,	// (0x00014e0a) cset_list_set_pane_copy1

0x6379,	// (0x00014e1b) aid_position_infowindow_above_copy1

0x6381,	// (0x00014e23) aid_position_infowindow_below_copy1

0x6389,	// (0x00014e2b) cset_list_set_pane_g1_copy1

0x6391,	// (0x00014e33) cset_list_set_pane_g3_copy1_ParamLimits

0x6391,	// (0x00014e33) cset_list_set_pane_g3_copy1

0x63a0,	// (0x00014e42) cset_list_set_pane_t1_copy1_ParamLimits

0x63a0,	// (0x00014e42) cset_list_set_pane_t1_copy1

0x914c,	// (0x00017bee) list_highlight_pane_cp021_copy1_ParamLimits

0x914c,	// (0x00017bee) list_highlight_pane_cp021_copy1

0xd626,	// (0x0001c0c8) cset6_slider_pane_ParamLimits

0xd626,	// (0x0001c0c8) cset6_slider_pane

0xd652,	// (0x0001c0f4) main_cset6_slider_pane_g1_ParamLimits

0xd652,	// (0x0001c0f4) main_cset6_slider_pane_g1

0x63b5,	// (0x00014e57) main_cset6_slider_pane_g2_ParamLimits

0x63b5,	// (0x00014e57) main_cset6_slider_pane_g2

0xd67a,	// (0x0001c11c) main_cset6_slider_pane_g3_ParamLimits

0xd67a,	// (0x0001c11c) main_cset6_slider_pane_g3

0x63dd,	// (0x00014e7f) main_cset6_slider_pane_g4_ParamLimits

0x63dd,	// (0x00014e7f) main_cset6_slider_pane_g4

0x63e9,	// (0x00014e8b) main_cset6_slider_pane_g5_ParamLimits

0x63e9,	// (0x00014e8b) main_cset6_slider_pane_g5

0xcd0d,	// (0x0001b7af) main_cset6_slider_pane_g7_ParamLimits

0xcd0d,	// (0x0001b7af) main_cset6_slider_pane_g7

0xcd19,	// (0x0001b7bb) main_cset6_slider_pane_g8_ParamLimits

0xcd19,	// (0x0001b7bb) main_cset6_slider_pane_g8

0x545c,	// (0x00013efe) main_cset6_slider_pane_g9_ParamLimits

0x545c,	// (0x00013efe) main_cset6_slider_pane_g9

0x5468,	// (0x00013f0a) main_cset6_slider_pane_g10_ParamLimits

0x5468,	// (0x00013f0a) main_cset6_slider_pane_g10

0x5474,	// (0x00013f16) main_cset6_slider_pane_g11_ParamLimits

0x5474,	// (0x00013f16) main_cset6_slider_pane_g11

0x5480,	// (0x00013f22) main_cset6_slider_pane_g12_ParamLimits

0x5480,	// (0x00013f22) main_cset6_slider_pane_g12

0x548c,	// (0x00013f2e) main_cset6_slider_pane_g13_ParamLimits

0x548c,	// (0x00013f2e) main_cset6_slider_pane_g13

0x5498,	// (0x00013f3a) main_cset6_slider_pane_g14_ParamLimits

0x5498,	// (0x00013f3a) main_cset6_slider_pane_g14

0x63f5,	// (0x00014e97) main_cset6_slider_pane_g15_ParamLimits

0x63f5,	// (0x00014e97) main_cset6_slider_pane_g15

0x54bc,	// (0x00013f5e) main_cset6_slider_pane_g16_ParamLimits

0x54bc,	// (0x00013f5e) main_cset6_slider_pane_g16

0x54c8,	// (0x00013f6a) main_cset6_slider_pane_g17_ParamLimits

0x54c8,	// (0x00013f6a) main_cset6_slider_pane_g17

0x0011,

0xfacf,	// (0x0001e571) main_cset6_slider_pane_g_ParamLimits

0xfacf,	// (0x0001e571) main_cset6_slider_pane_g

0xd686,	// (0x0001c128) main_cset6_slider_pane_t1_ParamLimits

0xd686,	// (0x0001c128) main_cset6_slider_pane_t1

0x6425,	// (0x00014ec7) main_cset6_slider_pane_t2_ParamLimits

0x6425,	// (0x00014ec7) main_cset6_slider_pane_t2

0x6450,	// (0x00014ef2) main_cset6_slider_pane_t3_ParamLimits

0x6450,	// (0x00014ef2) main_cset6_slider_pane_t3

0x647b,	// (0x00014f1d) main_cset6_slider_pane_t4_ParamLimits

0x647b,	// (0x00014f1d) main_cset6_slider_pane_t4

0x64a6,	// (0x00014f48) main_cset6_slider_pane_t5_ParamLimits

0x64a6,	// (0x00014f48) main_cset6_slider_pane_t5

0xd6c7,	// (0x0001c169) main_cset6_slider_pane_t7_ParamLimits

0xd6c7,	// (0x0001c169) main_cset6_slider_pane_t7

0x64d1,	// (0x00014f73) main_cset6_slider_pane_t8_ParamLimits

0x64d1,	// (0x00014f73) main_cset6_slider_pane_t8

0x64f5,	// (0x00014f97) main_cset6_slider_pane_t9_ParamLimits

0x64f5,	// (0x00014f97) main_cset6_slider_pane_t9

0x6519,	// (0x00014fbb) main_cset6_slider_pane_t10_ParamLimits

0x6519,	// (0x00014fbb) main_cset6_slider_pane_t10

0x653d,	// (0x00014fdf) main_cset6_slider_pane_t11_ParamLimits

0x653d,	// (0x00014fdf) main_cset6_slider_pane_t11

0xd6fd,	// (0x0001c19f) main_cset6_slider_pane_t14_ParamLimits

0xd6fd,	// (0x0001c19f) main_cset6_slider_pane_t14

0xd736,	// (0x0001c1d8) main_cset6_slider_pane_t15_ParamLimits

0xd736,	// (0x0001c1d8) main_cset6_slider_pane_t15

0x000b,

0xfaf4,	// (0x0001e596) main_cset6_slider_pane_t_ParamLimits

0xfaf4,	// (0x0001e596) main_cset6_slider_pane_t

0xce2b,	// (0x0001b8cd) cset_slider_pane_g1_copy1

0xce34,	// (0x0001b8d6) cset_slider_pane_g2_copy1

0xce3d,	// (0x0001b8df) cset_slider_pane_g3_copy1

0x90dd,	// (0x00017b7f) bg_popup_sub_pane_cp011_copy1

0xd76f,	// (0x0001c211) main_cset_text_pane_g1_copy1

0xcf16,	// (0x0001b9b8) main_cset_text_pane_t1_copy1

0xcf24,	// (0x0001b9c6) main_cset_text_pane_t2_copy1

0xcf32,	// (0x0001b9d4) main_cset_text_pane_t3_copy1

0xcf40,	// (0x0001b9e2) main_cset_text_pane_t4_copy1

0xcf4e,	// (0x0001b9f0) main_cset_text_pane_t5_copy1

0xd777,	// (0x0001c219) main_cset_text_pane_t6_copy1

0xd785,	// (0x0001c227) main_cset_text_pane_t7_copy1

0x62e3,	// (0x00014d85) main_cset_text2_pane_t1_copy1

0x914c,	// (0x00017bee) main_ncimui_pane

0x3348,	// (0x00011dea) popup_query_ncimui_window_ParamLimits

0x3348,	// (0x00011dea) popup_query_ncimui_window

0xc1c5,	// (0x0001ac67) field_cale_ev2_pane_g4_ParamLimits

0xc1c5,	// (0x0001ac67) field_cale_ev2_pane_g4

0x459c,	// (0x0001303e) cell_video_dialer_keypad_pane_g2_ParamLimits

0x459c,	// (0x0001303e) cell_video_dialer_keypad_pane_g2

0x0001,

0xf7d8,	// (0x0001e27a) cell_video_dialer_keypad_pane_g_ParamLimits

0xf7d8,	// (0x0001e27a) cell_video_dialer_keypad_pane_g

0x45b4,	// (0x00013056) cell_video_dialer_keypad_pane_t1

0x90dd,	// (0x00017b7f) bg_popup_window_pane_cp012

0xb9ab,	// (0x0001a44d) heading_pane_cp06

0xd7b1,	// (0x0001c253) ncim_query_content_pane

0x90dd,	// (0x00017b7f) bg_popup_heading_pane_cp01

0xd7b9,	// (0x0001c25b) ncim_heading_pane_t1

0xd7c7,	// (0x0001c269) ncim_indicator_popup_pane

0xd7d9,	// (0x0001c27b) ncim_query_button_pane

0xd7ed,	// (0x0001c28f) ncim_query_content_pane_t1

0xd7ff,	// (0x0001c2a1) ncim_query_content_pane_t2

0x0005,

0xfb38,	// (0x0001e5da) ncim_query_content_pane_t

0xd839,	// (0x0001c2db) ncim_query_list_pane

0xd84b,	// (0x0001c2ed) ncim_query_popup_pane

0xd7c7,	// (0x0001c269) ncim_indicator_popup_pane_ParamLimits

0x66a7,	// (0x00015149) ncim_query_content_pane_g1_ParamLimits

0x66a7,	// (0x00015149) ncim_query_content_pane_g1

0xd7ed,	// (0x0001c28f) ncim_query_content_pane_t1_ParamLimits

0xd7ff,	// (0x0001c2a1) ncim_query_content_pane_t2_ParamLimits

0x66b3,	// (0x00015155) ncim_query_content_pane_t3_ParamLimits

0x66b3,	// (0x00015155) ncim_query_content_pane_t3

0x66db,	// (0x0001517d) ncim_query_content_pane_t4_ParamLimits

0x66db,	// (0x0001517d) ncim_query_content_pane_t4

0x6703,	// (0x000151a5) ncim_query_content_pane_t5_ParamLimits

0x6703,	// (0x000151a5) ncim_query_content_pane_t5

0xd811,	// (0x0001c2b3) ncim_query_content_pane_t6_ParamLimits

0xd811,	// (0x0001c2b3) ncim_query_content_pane_t6

0xfb38,	// (0x0001e5da) ncim_query_content_pane_t_ParamLimits

0xd839,	// (0x0001c2db) ncim_query_list_pane_ParamLimits

0xd84b,	// (0x0001c2ed) ncim_query_popup_pane_ParamLimits

0xd85f,	// (0x0001c301) wait_bar_pane_cp04

0x90dd,	// (0x00017b7f) input_focus_pane_cp011

0xd867,	// (0x0001c309) ncim_query_popup_pane_t1

0xd875,	// (0x0001c317) ncim_list_query_list_pane_ParamLimits

0xd875,	// (0x0001c317) ncim_list_query_list_pane

0x90dd,	// (0x00017b7f) bg_button_pane_cp027

0xd882,	// (0x0001c324) ncim_query_button_pane_g1

0x90dd,	// (0x00017b7f) list_highlight_pane_cp012

0xd88c,	// (0x0001c32e) ncim_list_query_list_pane_g1

0xd894,	// (0x0001c336) ncim_list_query_list_pane_t1

0xcac5,	// (0x0001b567) cam4_indicators_pane_g3_ParamLimits

0xcac5,	// (0x0001b567) cam4_indicators_pane_g3

0xcb45,	// (0x0001b5e7) vid4_indicators_pane_g5_ParamLimits

0xcb45,	// (0x0001b5e7) vid4_indicators_pane_g5

0xd21b,	// (0x0001bcbd) vid4_progress_pane_g5_ParamLimits

0xd21b,	// (0x0001bcbd) vid4_progress_pane_g5

0x6592,	// (0x00015034) main_ncimui_pane_g1

0x65fb,	// (0x0001509d) ncimui_group_query_pane_ParamLimits

0x65fb,	// (0x0001509d) ncimui_group_query_pane

0x6643,	// (0x000150e5) ncimui_list_pane_ParamLimits

0x6643,	// (0x000150e5) ncimui_list_pane

0x666a,	// (0x0001510c) ncimui_text_pane_ParamLimits

0x666a,	// (0x0001510c) ncimui_text_pane

0x672b,	// (0x000151cd) ncimui_text_pane_t1_ParamLimits

0x672b,	// (0x000151cd) ncimui_text_pane_t1

0xd8a2,	// (0x0001c344) ncimui_list_single_graphic_pane_ParamLimits

0xd8a2,	// (0x0001c344) ncimui_list_single_graphic_pane

0x6749,	// (0x000151eb) ncimui_query_pane_ParamLimits

0x6749,	// (0x000151eb) ncimui_query_pane

0x90dd,	// (0x00017b7f) list_highlight_pane_cp013

0xd8b2,	// (0x0001c354) ncim_list_query_list_pane_t1_copy1

0xd88c,	// (0x0001c32e) ncim_list_single_graphic_pane_g1

0x675c,	// (0x000151fe) ncim_query_button_pane_cp01

0x6768,	// (0x0001520a) ncim_query_entry_pane_ParamLimits

0x6768,	// (0x0001520a) ncim_query_entry_pane

0x677b,	// (0x0001521d) ncimui_query_pane_g1

0x6787,	// (0x00015229) ncimui_query_pane_t1_ParamLimits

0x6787,	// (0x00015229) ncimui_query_pane_t1

0x914c,	// (0x00017bee) input_focus_pane_cp012

0xd8c0,	// (0x0001c362) ncim_query_entry_pane_t1

0x98d7,	// (0x00018379) main_im_pane_ParamLimits

0x914c,	// (0x00017bee) main_mobtv_pane_ParamLimits

0x914c,	// (0x00017bee) main_mobtv_pane

0x640d,	// (0x00014eaf) main_cset6_slider_pane_g18_ParamLimits

0x640d,	// (0x00014eaf) main_cset6_slider_pane_g18

0x6419,	// (0x00014ebb) main_cset6_slider_pane_g19_ParamLimits

0x6419,	// (0x00014ebb) main_cset6_slider_pane_g19

0x985f,	// (0x00018301) bg_main_mobtv_pane_ParamLimits

0x985f,	// (0x00018301) bg_main_mobtv_pane

0x67a0,	// (0x00015242) main_mobtv_info_pane

0x67a9,	// (0x0001524b) main_mobtv_loading_pane_ParamLimits

0x67a9,	// (0x0001524b) main_mobtv_loading_pane

0xd8d2,	// (0x0001c374) main_mobtv_pg_channel_list_pane

0xd8dc,	// (0x0001c37e) main_mobtv_pg_hdr_pane

0x67b6,	// (0x00015258) main_mobtv_programe_curr_pane_ParamLimits

0x67b6,	// (0x00015258) main_mobtv_programe_curr_pane

0x67c3,	// (0x00015265) main_mobtv_programe_next_pane_ParamLimits

0x67c3,	// (0x00015265) main_mobtv_programe_next_pane

0xd8e5,	// (0x0001c387) popup_mobtv_noti_window

0x9b5c,	// (0x000185fe) main_tv_pg_hdr_pane_g1

0xd8ed,	// (0x0001c38f) main_tv_pg_hdr_pane_g2

0xd8f5,	// (0x0001c397) main_tv_pg_hdr_pane_g3

0xd8fd,	// (0x0001c39f) main_tv_pg_hdr_pane_g4

0xd905,	// (0x0001c3a7) main_tv_pg_hdr_pane_g5

0xd90f,	// (0x0001c3b1) main_tv_pg_hdr_pane_g6

0xd919,	// (0x0001c3bb) main_tv_pg_hdr_pane_g7

0xd923,	// (0x0001c3c5) main_tv_pg_hdr_pane_g8

0xd92d,	// (0x0001c3cf) main_tv_pg_hdr_pane_g9

0xd937,	// (0x0001c3d9) main_tv_pg_hdr_pane_g10

0xd941,	// (0x0001c3e3) main_tv_pg_hdr_pane_g11

0x000a,

0xfb45,	// (0x0001e5e7) main_tv_pg_hdr_pane_g

0xd94b,	// (0x0001c3ed) main_tv_pg_hdr_pane_t1

0xd959,	// (0x0001c3fb) main_tv_pg_hdr_pane_t2

0xd967,	// (0x0001c409) main_tv_pg_hdr_pane_t3

0xd977,	// (0x0001c419) main_tv_pg_hdr_pane_t4

0xd987,	// (0x0001c429) main_tv_pg_hdr_pane_t5

0x0004,

0xfb5c,	// (0x0001e5fe) main_tv_pg_hdr_pane_t

0xd997,	// (0x0001c439) single_mobtv_pg_channel_pane_ParamLimits

0xd997,	// (0x0001c439) single_mobtv_pg_channel_pane

0xd9a9,	// (0x0001c44b) single_mobtv_pg_channel_table_pane

0xd9b2,	// (0x0001c454) single_mobtv_pg_channel_thumb_pane

0xd9bb,	// (0x0001c45d) single_tv_pg_channel_pane_g1

0xd9c4,	// (0x0001c466) single_tv_pg_channel_pane_g2

0x0001,

0xfb67,	// (0x0001e609) single_tv_pg_channel_pane_g

0x9843,	// (0x000182e5) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x9843,	// (0x000182e5) bg_single_mobtv_pg_channel_thumb_pane

0xd9cd,	// (0x0001c46f) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xd9cd,	// (0x0001c46f) single_mobtv_pg_channel_thumb_pane_g1

0xd9db,	// (0x0001c47d) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xd9db,	// (0x0001c47d) single_mobtv_pg_channel_thumb_pane_g2

0xd9e7,	// (0x0001c489) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xd9e7,	// (0x0001c489) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfb6c,	// (0x0001e60e) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfb6c,	// (0x0001e60e) single_mobtv_pg_channel_thumb_pane_g

0xd9f3,	// (0x0001c495) single_mobtv_pg_channel_thumb_pane_t1

0xda01,	// (0x0001c4a3) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfb73,	// (0x0001e615) single_mobtv_pg_channel_thumb_pane_t

0x9b5c,	// (0x000185fe) bg_single_mobtv_pg_channel_table_pane_g1

0x9b5c,	// (0x000185fe) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf398,	// (0x0001de3a) bg_single_mobtv_pg_channel_table_pane_g

0xda0f,	// (0x0001c4b1) single_mobtv_pg_channel_table_pane_t1

0xda1d,	// (0x0001c4bf) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfb78,	// (0x0001e61a) single_mobtv_pg_channel_table_pane_t

0x67d8,	// (0x0001527a) main_mobtv_info_pane_g1_ParamLimits

0x67d8,	// (0x0001527a) main_mobtv_info_pane_g1

0x67f6,	// (0x00015298) main_mobtv_info_pane_t1_ParamLimits

0x67f6,	// (0x00015298) main_mobtv_info_pane_t1

0x686e,	// (0x00015310) main_mobtv_info_pane_t2_ParamLimits

0x686e,	// (0x00015310) main_mobtv_info_pane_t2

0x0002,

0xfb82,	// (0x0001e624) main_mobtv_info_pane_t_ParamLimits

0xfb82,	// (0x0001e624) main_mobtv_info_pane_t

0x68fd,	// (0x0001539f) wait_bar_pane_cp05

0x690f,	// (0x000153b1) main_mobtv_loading_pane_g1_ParamLimits

0x690f,	// (0x000153b1) main_mobtv_loading_pane_g1

0x6922,	// (0x000153c4) main_mobtv_loading_pane_g2_ParamLimits

0x6922,	// (0x000153c4) main_mobtv_loading_pane_g2

0x692e,	// (0x000153d0) main_mobtv_loading_pane_g3_ParamLimits

0x692e,	// (0x000153d0) main_mobtv_loading_pane_g3

0x0002,

0xfb89,	// (0x0001e62b) main_mobtv_loading_pane_g_ParamLimits

0xfb89,	// (0x0001e62b) main_mobtv_loading_pane_g

0xda2b,	// (0x0001c4cd) main_mobtv_loading_pane_t1_ParamLimits

0xda2b,	// (0x0001c4cd) main_mobtv_loading_pane_t1

0xda43,	// (0x0001c4e5) main_mobtv_loading_pane_t2_ParamLimits

0xda43,	// (0x0001c4e5) main_mobtv_loading_pane_t2

0x0001,

0xfb90,	// (0x0001e632) main_mobtv_loading_pane_t_ParamLimits

0xfb90,	// (0x0001e632) main_mobtv_loading_pane_t

0x6941,	// (0x000153e3) wait_bar_pane_cp06_ParamLimits

0x6941,	// (0x000153e3) wait_bar_pane_cp06

0xda67,	// (0x0001c509) main_mobtv_programe_curr_pane_t1

0xda75,	// (0x0001c517) main_mobtv_programe_curr_pane_t2

0x0001,

0xfb95,	// (0x0001e637) main_mobtv_programe_curr_pane_t

0xda83,	// (0x0001c525) main_mobtv_programe_next_pane_t1

0xda91,	// (0x0001c533) main_mobtv_programe_next_pane_t2

0xda9f,	// (0x0001c541) main_mobtv_programe_next_pane_t3

0x0002,

0xfb9a,	// (0x0001e63c) main_mobtv_programe_next_pane_t

0x90dd,	// (0x00017b7f) bg_popup_mobtv_noti_window_pane

0xdaad,	// (0x0001c54f) popup_mobtv_noti_window_g1

0xdab5,	// (0x0001c557) popup_mobtv_noti_window_t1

0xdac3,	// (0x0001c565) popup_mobtv_noti_window_t2

0x0001,

0xfba1,	// (0x0001e643) popup_mobtv_noti_window_t

0x9b5c,	// (0x000185fe) bg_popup_mobtv_noti_window_pane_g1

0x90dd,	// (0x00017b7f) sc_clock_pane

0x90dd,	// (0x00017b7f) main_fs_bigclock_pane

0x602d,	// (0x00014acf) blid2_tripm_pane_t4_ParamLimits

0x602d,	// (0x00014acf) blid2_tripm_pane_t4

0x6950,	// (0x000153f2) sc_clock_pane_g1_ParamLimits

0x6950,	// (0x000153f2) sc_clock_pane_g1

0x6962,	// (0x00015404) sc_clock_pane_t1_ParamLimits

0x6962,	// (0x00015404) sc_clock_pane_t1

0x6984,	// (0x00015426) sc_clock_pane_t2_ParamLimits

0x6984,	// (0x00015426) sc_clock_pane_t2

0x699c,	// (0x0001543e) sc_clock_pane_t3_ParamLimits

0x699c,	// (0x0001543e) sc_clock_pane_t3

0x0004,

0xfba6,	// (0x0001e648) sc_clock_pane_t_ParamLimits

0xfba6,	// (0x0001e648) sc_clock_pane_t

0x76e3,	// (0x00016185) main_fs_bigclock_indicator_pane_ParamLimits

0x76e3,	// (0x00016185) main_fs_bigclock_indicator_pane

0x6a42,	// (0x000154e4) main_fs_bigclock_pane_g1_ParamLimits

0x6a42,	// (0x000154e4) main_fs_bigclock_pane_g1

0x76ef,	// (0x00016191) main_fs_bigclock_pane_t1_ParamLimits

0x76ef,	// (0x00016191) main_fs_bigclock_pane_t1

0x7701,	// (0x000161a3) main_fs_bigclock_pane_t2_ParamLimits

0x7701,	// (0x000161a3) main_fs_bigclock_pane_t2

0x7715,	// (0x000161b7) main_fs_bigclock_pane_t3_ParamLimits

0x7715,	// (0x000161b7) main_fs_bigclock_pane_t3

0x0002,

0xfd37,	// (0x0001e7d9) main_fs_bigclock_pane_t_ParamLimits

0xfd37,	// (0x0001e7d9) main_fs_bigclock_pane_t

0xe656,	// (0x0001d0f8) main_fs_bigclock_indicator_pane_g1

0xd7e1,	// (0x0001c283) ncim_query_content_pane_g2_ParamLimits

0xd7e1,	// (0x0001c283) ncim_query_content_pane_g2

0x0001,

0xfb33,	// (0x0001e5d5) ncim_query_content_pane_g_ParamLimits

0xfb33,	// (0x0001e5d5) ncim_query_content_pane_g

0x69b5,	// (0x00015457) sc_clock_pane_t4_ParamLimits

0x69b5,	// (0x00015457) sc_clock_pane_t4

0x914c,	// (0x00017bee) main_radioblah_pane

0xca0b,	// (0x0001b4ad) cell_call4_button_pane_t1_copy1_ParamLimits

0xca0b,	// (0x0001b4ad) cell_call4_button_pane_t1_copy1

0x65aa,	// (0x0001504c) main_ncimui_pane_t1_ParamLimits

0x65aa,	// (0x0001504c) main_ncimui_pane_t1

0x65c4,	// (0x00015066) main_ncimui_pane_t2_ParamLimits

0x65c4,	// (0x00015066) main_ncimui_pane_t2

0x0002,

0xfb2c,	// (0x0001e5ce) main_ncimui_pane_t_ParamLimits

0xfb2c,	// (0x0001e5ce) main_ncimui_pane_t

0xdc08,	// (0x0001c6aa) main_radioblah_anim_pane_ParamLimits

0xdc08,	// (0x0001c6aa) main_radioblah_anim_pane

0xdc19,	// (0x0001c6bb) main_radioblah_info_pane_ParamLimits

0xdc19,	// (0x0001c6bb) main_radioblah_info_pane

0xdc2d,	// (0x0001c6cf) main_radioblah_pane_t1_ParamLimits

0xdc2d,	// (0x0001c6cf) main_radioblah_pane_t1

0xdc49,	// (0x0001c6eb) main_radioblah_pane_t2_ParamLimits

0xdc49,	// (0x0001c6eb) main_radioblah_pane_t2

0x0003,

0xfbc7,	// (0x0001e669) main_radioblah_pane_t_ParamLimits

0xfbc7,	// (0x0001e669) main_radioblah_pane_t

0x6aa1,	// (0x00015543) main_radioblah_rocker_ctrl_pane_ParamLimits

0x6aa1,	// (0x00015543) main_radioblah_rocker_ctrl_pane

0xdc91,	// (0x0001c733) main_radioblah_info_pane_t1_ParamLimits

0xdc91,	// (0x0001c733) main_radioblah_info_pane_t1

0x6af9,	// (0x0001559b) main_radioblah_info_pane_t2_ParamLimits

0x6af9,	// (0x0001559b) main_radioblah_info_pane_t2

0x0003,

0xfbd0,	// (0x0001e672) main_radioblah_info_pane_t_ParamLimits

0xfbd0,	// (0x0001e672) main_radioblah_info_pane_t

0x9b5c,	// (0x000185fe) main_radioblah_rocker_ctrl_pane_g1

0x6ba9,	// (0x0001564b) main_radioblah_rocker_ctrl_pane_g2

0x6bb1,	// (0x00015653) main_radioblah_rocker_ctrl_pane_g3

0x6bb9,	// (0x0001565b) main_radioblah_rocker_ctrl_pane_g4

0x6bc1,	// (0x00015663) main_radioblah_rocker_ctrl_pane_g5

0x6bc9,	// (0x0001566b) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfbd9,	// (0x0001e67b) main_radioblah_rocker_ctrl_pane_g

0x62e3,	// (0x00014d85) main_cset_text2_pane_t1_copy1_ParamLimits

0xca95,	// (0x0001b537) cam4_image_uncrop_qvga_pane

0xcaee,	// (0x0001b590) vid4_image_uncrop_qcif_pane

0xd430,	// (0x0001bed2) cam6_image_uncrop_qvga_pane_ParamLimits

0xd430,	// (0x0001bed2) cam6_image_uncrop_qvga_pane

0xd4e8,	// (0x0001bf8a) vid6_image_uncrop_qcif_pane_ParamLimits

0xd4e8,	// (0x0001bf8a) vid6_image_uncrop_qcif_pane

0x90dd,	// (0x00017b7f) bg_popup_preview_window_pane_cp03

0xd793,	// (0x0001c235) list_cset_text2_pane

0xd79b,	// (0x0001c23d) main_cset6_text2_pane_g1

0xd7a3,	// (0x0001c245) main_cset6_text2_pane_t1

0x6bd1,	// (0x00015673) list_cset_text2_pane_t1_ParamLimits

0x6bd1,	// (0x00015673) list_cset_text2_pane_t1

0x914c,	// (0x00017bee) main_radioblah_pane_ParamLimits

0x68e9,	// (0x0001538b) main_mobtv_info_pane_t3_ParamLimits

0x68e9,	// (0x0001538b) main_mobtv_info_pane_t3

0x6a8f,	// (0x00015531) main_radioblah_pane_g1

0x6ac9,	// (0x0001556b) main_radioblah_info_pane_g1

0x6b4e,	// (0x000155f0) main_radioblah_info_pane_t3_ParamLimits

0x6b4e,	// (0x000155f0) main_radioblah_info_pane_t3

0x20ec,	// (0x00010b8e) highlight_cell_cale_month_pane_ParamLimits

0x20ec,	// (0x00010b8e) highlight_cell_cale_month_pane

0x90dd,	// (0x00017b7f) main_phob_fisheye_pane

0xc23a,	// (0x0001acdc) scroll_pane_cp0031_ParamLimits

0xc23a,	// (0x0001acdc) scroll_pane_cp0031

0xd5f6,	// (0x0001c098) wait_bar_pane_cp08_ParamLimits

0x6368,	// (0x00014e0a) cset_list_set_pane_copy1_ParamLimits

0xdccb,	// (0x0001c76d) highlight_cell_cale_month_pane_g1

0x6bea,	// (0x0001568c) highlight_cell_cale_month_pane_t1

0xd1de,	// (0x0001bc80) list_gen_pane_cp01

0xccf8,	// (0x0001b79a) scroll_pane_01

0x6bf8,	// (0x0001569a) list_single_double_fisheye_pane

0x6c01,	// (0x000156a3) list_double_fisheye_pane_g1_ParamLimits

0x6c01,	// (0x000156a3) list_double_fisheye_pane_g1

0x6c0d,	// (0x000156af) list_double_fisheye_pane_g2_ParamLimits

0x6c0d,	// (0x000156af) list_double_fisheye_pane_g2

0x6c21,	// (0x000156c3) list_double_fisheye_pane_g3_ParamLimits

0x6c21,	// (0x000156c3) list_double_fisheye_pane_g3

0x0004,

0xfbe6,	// (0x0001e688) list_double_fisheye_pane_g_ParamLimits

0xfbe6,	// (0x0001e688) list_double_fisheye_pane_g

0x6c4a,	// (0x000156ec) list_double_fisheye_pane_t1_ParamLimits

0x6c4a,	// (0x000156ec) list_double_fisheye_pane_t1

0x6c65,	// (0x00015707) list_double_fisheye_pane_t2_ParamLimits

0x6c65,	// (0x00015707) list_double_fisheye_pane_t2

0x0001,

0xfbf1,	// (0x0001e693) list_double_fisheye_pane_t_ParamLimits

0xfbf1,	// (0x0001e693) list_double_fisheye_pane_t

0x90dd,	// (0x00017b7f) main_call5_pane

0x69e0,	// (0x00015482) sc_swipe_pane_ParamLimits

0x69e0,	// (0x00015482) sc_swipe_pane

0x6c9a,	// (0x0001573c) call5_image_pane_ParamLimits

0x6c9a,	// (0x0001573c) call5_image_pane

0x6cb7,	// (0x00015759) call5_swipe_1_pane_ParamLimits

0x6cb7,	// (0x00015759) call5_swipe_1_pane

0x6cca,	// (0x0001576c) call5_swipe_2_pane_ParamLimits

0x6cca,	// (0x0001576c) call5_swipe_2_pane

0x6cf5,	// (0x00015797) popup_call5_audio_first_window_ParamLimits

0x6cf5,	// (0x00015797) popup_call5_audio_first_window

0x9843,	// (0x000182e5) call5_swipe_1_pane_g1_ParamLimits

0x9843,	// (0x000182e5) call5_swipe_1_pane_g1

0xdcd3,	// (0x0001c775) call5_swipe_1_pane_g2_ParamLimits

0xdcd3,	// (0x0001c775) call5_swipe_1_pane_g2

0x0001,

0xfbf6,	// (0x0001e698) call5_swipe_1_pane_g_ParamLimits

0xfbf6,	// (0x0001e698) call5_swipe_1_pane_g

0xdcdf,	// (0x0001c781) call5_swipe_1_pane_t1_ParamLimits

0xdcdf,	// (0x0001c781) call5_swipe_1_pane_t1

0x9843,	// (0x000182e5) call5_swipe_2_pane_g1_ParamLimits

0x9843,	// (0x000182e5) call5_swipe_2_pane_g1

0xdcf4,	// (0x0001c796) call5_swipe_2_pane_g2_ParamLimits

0xdcf4,	// (0x0001c796) call5_swipe_2_pane_g2

0x0001,

0xfbfb,	// (0x0001e69d) call5_swipe_2_pane_g_ParamLimits

0xfbfb,	// (0x0001e69d) call5_swipe_2_pane_g

0xdd00,	// (0x0001c7a2) call5_swipe_2_pane_t1_ParamLimits

0xdd00,	// (0x0001c7a2) call5_swipe_2_pane_t1

0xdd15,	// (0x0001c7b7) sc_swipe_pane_g1_ParamLimits

0xdd15,	// (0x0001c7b7) sc_swipe_pane_g1

0xdd22,	// (0x0001c7c4) sc_swipe_pane_g2_ParamLimits

0xdd22,	// (0x0001c7c4) sc_swipe_pane_g2

0x0001,

0xfc00,	// (0x0001e6a2) sc_swipe_pane_g_ParamLimits

0xfc00,	// (0x0001e6a2) sc_swipe_pane_g

0xdd2e,	// (0x0001c7d0) sc_swipe_pane_t1_ParamLimits

0xdd2e,	// (0x0001c7d0) sc_swipe_pane_t1

0x90dd,	// (0x00017b7f) main_cmail_launcher_pane

0x6d06,	// (0x000157a8) aid_size_cell_cmail_l_ParamLimits

0x6d06,	// (0x000157a8) aid_size_cell_cmail_l

0x6d14,	// (0x000157b6) grid_cmail_l_pane_ParamLimits

0x6d14,	// (0x000157b6) grid_cmail_l_pane

0x6d2e,	// (0x000157d0) cell_cmail_l_pane_ParamLimits

0x6d2e,	// (0x000157d0) cell_cmail_l_pane

0xdd43,	// (0x0001c7e5) cell_cmail_l_pane_g1_ParamLimits

0xdd43,	// (0x0001c7e5) cell_cmail_l_pane_g1

0xdd4f,	// (0x0001c7f1) cell_cmail_l_pane_t1_ParamLimits

0xdd4f,	// (0x0001c7f1) cell_cmail_l_pane_t1

0xdd65,	// (0x0001c807) cell_cmail_l_pane_t2_ParamLimits

0xdd65,	// (0x0001c807) cell_cmail_l_pane_t2

0x0001,

0xfc05,	// (0x0001e6a7) cell_cmail_l_pane_t_ParamLimits

0xfc05,	// (0x0001e6a7) cell_cmail_l_pane_t

0x914c,	// (0x00017bee) grid_highlight_pane_cp018_ParamLimits

0x914c,	// (0x00017bee) grid_highlight_pane_cp018

0x0532,	// (0x0000efd4) main2_pane_ParamLimits

0x0532,	// (0x0000efd4) main2_pane

0x9993,	// (0x00018435) popup_sp_fs_action_menu_bg_pane_g1

0x999b,	// (0x0001843d) popup_sp_fs_action_menu_bg_pane_g2

0x99a3,	// (0x00018445) popup_sp_fs_action_menu_bg_pane_g3

0x99ab,	// (0x0001844d) popup_sp_fs_action_menu_bg_pane_g4

0x99b3,	// (0x00018455) popup_sp_fs_action_menu_bg_pane_g5

0x99bb,	// (0x0001845d) popup_sp_fs_action_menu_bg_pane_g6

0x99c3,	// (0x00018465) popup_sp_fs_action_menu_bg_pane_g7

0x99cb,	// (0x0001846d) popup_sp_fs_action_menu_bg_pane_g8

0x99d3,	// (0x00018475) popup_sp_fs_action_menu_bg_pane_g9

0x99db,	// (0x0001847d) popup_sp_fs_action_menu_bg_pane_g10

0x99db,	// (0x0001847d) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf105,	// (0x0001dba7) popup_sp_fs_action_menu_bg_pane_g

0x9843,	// (0x000182e5) list_medium_line_x2_t3_g3_g1_ParamLimits

0x9843,	// (0x000182e5) list_medium_line_x2_t3_g3_g1

0x9843,	// (0x000182e5) list_medium_line_x2_t3_g3_g2_ParamLimits

0x9843,	// (0x000182e5) list_medium_line_x2_t3_g3_g2

0x9843,	// (0x000182e5) list_medium_line_x2_t3_g3_g3_ParamLimits

0x9843,	// (0x000182e5) list_medium_line_x2_t3_g3_g3

0x0002,

0xf1b3,	// (0x0001dc55) list_medium_line_x2_t3_g3_g_ParamLimits

0xf1b3,	// (0x0001dc55) list_medium_line_x2_t3_g3_g

0x9b2e,	// (0x000185d0) list_medium_line_x2_t3_g3_t1_ParamLimits

0x9b2e,	// (0x000185d0) list_medium_line_x2_t3_g3_t1

0x9b2e,	// (0x000185d0) list_medium_line_x2_t3_g3_t2_ParamLimits

0x9b2e,	// (0x000185d0) list_medium_line_x2_t3_g3_t2

0x9b2e,	// (0x000185d0) list_medium_line_x2_t3_g3_t3_ParamLimits

0x9b2e,	// (0x000185d0) list_medium_line_x2_t3_g3_t3

0x0002,

0xf1ba,	// (0x0001dc5c) list_medium_line_x2_t3_g3_t_ParamLimits

0xf1ba,	// (0x0001dc5c) list_medium_line_x2_t3_g3_t

0x9843,	// (0x000182e5) list_medium_line_x2_t3_g2_g1_ParamLimits

0x9843,	// (0x000182e5) list_medium_line_x2_t3_g2_g1

0x9843,	// (0x000182e5) list_medium_line_x2_t3_g2_g2_ParamLimits

0x9843,	// (0x000182e5) list_medium_line_x2_t3_g2_g2

0x0001,

0xf1c1,	// (0x0001dc63) list_medium_line_x2_t3_g2_g_ParamLimits

0xf1c1,	// (0x0001dc63) list_medium_line_x2_t3_g2_g

0x9b2e,	// (0x000185d0) list_medium_line_x2_t3_g2_t1_ParamLimits

0x9b2e,	// (0x000185d0) list_medium_line_x2_t3_g2_t1

0x9b2e,	// (0x000185d0) list_medium_line_x2_t3_g2_t2_ParamLimits

0x9b2e,	// (0x000185d0) list_medium_line_x2_t3_g2_t2

0x9b2e,	// (0x000185d0) list_medium_line_x2_t3_g2_t3_ParamLimits

0x9b2e,	// (0x000185d0) list_medium_line_x2_t3_g2_t3

0x0002,

0xf1ba,	// (0x0001dc5c) list_medium_line_x2_t3_g2_t_ParamLimits

0xf1ba,	// (0x0001dc5c) list_medium_line_x2_t3_g2_t

0x9843,	// (0x000182e5) list_medium_line_x2_t4_g4_g1_ParamLimits

0x9843,	// (0x000182e5) list_medium_line_x2_t4_g4_g1

0x9843,	// (0x000182e5) list_medium_line_x2_t4_g4_g2_ParamLimits

0x9843,	// (0x000182e5) list_medium_line_x2_t4_g4_g2

0x9843,	// (0x000182e5) list_medium_line_x2_t4_g4_g3_ParamLimits

0x9843,	// (0x000182e5) list_medium_line_x2_t4_g4_g3

0x9843,	// (0x000182e5) list_medium_line_x2_t4_g4_g4_ParamLimits

0x9843,	// (0x000182e5) list_medium_line_x2_t4_g4_g4

0x0003,

0xf1c6,	// (0x0001dc68) list_medium_line_x2_t4_g4_g_ParamLimits

0xf1c6,	// (0x0001dc68) list_medium_line_x2_t4_g4_g

0x9b2e,	// (0x000185d0) list_medium_line_x2_t4_g4_t1_ParamLimits

0x9b2e,	// (0x000185d0) list_medium_line_x2_t4_g4_t1

0x9b2e,	// (0x000185d0) list_medium_line_x2_t4_g4_t2_ParamLimits

0x9b2e,	// (0x000185d0) list_medium_line_x2_t4_g4_t2

0x9b2e,	// (0x000185d0) list_medium_line_x2_t4_g4_t3_ParamLimits

0x9b2e,	// (0x000185d0) list_medium_line_x2_t4_g4_t3

0x9b2e,	// (0x000185d0) list_medium_line_x2_t4_g4_t4_ParamLimits

0x9b2e,	// (0x000185d0) list_medium_line_x2_t4_g4_t4

0x0003,

0xf1cf,	// (0x0001dc71) list_medium_line_x2_t4_g4_t_ParamLimits

0xf1cf,	// (0x0001dc71) list_medium_line_x2_t4_g4_t

0x9843,	// (0x000182e5) list_medium_line_x2_t2_g4_g1_ParamLimits

0x9843,	// (0x000182e5) list_medium_line_x2_t2_g4_g1

0x9843,	// (0x000182e5) list_medium_line_x2_t2_g4_g2_ParamLimits

0x9843,	// (0x000182e5) list_medium_line_x2_t2_g4_g2

0x9843,	// (0x000182e5) list_medium_line_x2_t2_g4_g3_ParamLimits

0x9843,	// (0x000182e5) list_medium_line_x2_t2_g4_g3

0x9843,	// (0x000182e5) list_medium_line_x2_t2_g4_g4_ParamLimits

0x9843,	// (0x000182e5) list_medium_line_x2_t2_g4_g4

0x0003,

0xf1c6,	// (0x0001dc68) list_medium_line_x2_t2_g4_g_ParamLimits

0xf1c6,	// (0x0001dc68) list_medium_line_x2_t2_g4_g

0x9b2e,	// (0x000185d0) list_medium_line_x2_t2_g4_t1_ParamLimits

0x9b2e,	// (0x000185d0) list_medium_line_x2_t2_g4_t1

0x9b2e,	// (0x000185d0) list_medium_line_x2_t2_g4_t2_ParamLimits

0x9b2e,	// (0x000185d0) list_medium_line_x2_t2_g4_t2

0x0001,

0xf196,	// (0x0001dc38) list_medium_line_x2_t2_g4_t_ParamLimits

0xf196,	// (0x0001dc38) list_medium_line_x2_t2_g4_t

0x9843,	// (0x000182e5) list_medium_line_x2_t2_g3_g1_ParamLimits

0x9843,	// (0x000182e5) list_medium_line_x2_t2_g3_g1

0x9843,	// (0x000182e5) list_medium_line_x2_t2_g3_g2_ParamLimits

0x9843,	// (0x000182e5) list_medium_line_x2_t2_g3_g2

0x9843,	// (0x000182e5) list_medium_line_x2_t2_g3_g3_ParamLimits

0x9843,	// (0x000182e5) list_medium_line_x2_t2_g3_g3

0x0002,

0xf1b3,	// (0x0001dc55) list_medium_line_x2_t2_g3_g_ParamLimits

0xf1b3,	// (0x0001dc55) list_medium_line_x2_t2_g3_g

0x9b2e,	// (0x000185d0) list_medium_line_x2_t2_g3_t1_ParamLimits

0x9b2e,	// (0x000185d0) list_medium_line_x2_t2_g3_t1

0x9b2e,	// (0x000185d0) list_medium_line_x2_t2_g3_t2_ParamLimits

0x9b2e,	// (0x000185d0) list_medium_line_x2_t2_g3_t2

0x0001,

0xf196,	// (0x0001dc38) list_medium_line_x2_t2_g3_t_ParamLimits

0xf196,	// (0x0001dc38) list_medium_line_x2_t2_g3_t

0x223e,	// (0x00010ce0) main_sp_fs_list_pane_ParamLimits

0x223e,	// (0x00010ce0) main_sp_fs_list_pane

0xcef6,	// (0x0001b998) sp_fs_scroll_pane_ParamLimits

0xcef6,	// (0x0001b998) sp_fs_scroll_pane

0xa0c5,	// (0x00018b67) list_medium_line_x2_t3_t1

0xa0c5,	// (0x00018b67) list_medium_line_x2_t3_t2

0xa0c5,	// (0x00018b67) list_medium_line_x2_t3_t3

0x0002,

0xf27c,	// (0x0001dd1e) list_medium_line_x2_t3_t

0xa0c5,	// (0x00018b67) list_medium_line_x3_t4_t1

0xa0c5,	// (0x00018b67) list_medium_line_x3_t4_t2

0xa0c5,	// (0x00018b67) list_medium_line_x3_t4_t3

0xa0c5,	// (0x00018b67) list_medium_line_x3_t4_t4

0x0003,

0xf283,	// (0x0001dd25) list_medium_line_x3_t4_t

0xa0c5,	// (0x00018b67) list_medium_line_x4_t5_t1

0xa0c5,	// (0x00018b67) list_medium_line_x4_t5_t2

0xa0c5,	// (0x00018b67) list_medium_line_x4_t5_t3

0xa0c5,	// (0x00018b67) list_medium_line_x4_t5_t4

0xa0c5,	// (0x00018b67) list_medium_line_x4_t5_t5

0x0004,

0xf28c,	// (0x0001dd2e) list_medium_line_x4_t5_t

0x9843,	// (0x000182e5) list_medium_line_t4_g4_g1_ParamLimits

0x9843,	// (0x000182e5) list_medium_line_t4_g4_g1

0x9843,	// (0x000182e5) list_medium_line_t4_g4_g2_ParamLimits

0x9843,	// (0x000182e5) list_medium_line_t4_g4_g2

0x9843,	// (0x000182e5) list_medium_line_t4_g4_g3_ParamLimits

0x9843,	// (0x000182e5) list_medium_line_t4_g4_g3

0x9843,	// (0x000182e5) list_medium_line_t4_g4_g4_ParamLimits

0x9843,	// (0x000182e5) list_medium_line_t4_g4_g4

0x0003,

0xf1c6,	// (0x0001dc68) list_medium_line_t4_g4_g_ParamLimits

0xf1c6,	// (0x0001dc68) list_medium_line_t4_g4_g

0x9b2e,	// (0x000185d0) list_medium_line_t4_g4_t1_ParamLimits

0x9b2e,	// (0x000185d0) list_medium_line_t4_g4_t1

0x9b2e,	// (0x000185d0) list_medium_line_t4_g4_t2_ParamLimits

0x9b2e,	// (0x000185d0) list_medium_line_t4_g4_t2

0x9b2e,	// (0x000185d0) list_medium_line_t4_g4_t3_ParamLimits

0x9b2e,	// (0x000185d0) list_medium_line_t4_g4_t3

0x9b2e,	// (0x000185d0) list_medium_line_t4_g4_t4_ParamLimits

0x9b2e,	// (0x000185d0) list_medium_line_t4_g4_t4

0x0003,

0xf1cf,	// (0x0001dc71) list_medium_line_t4_g4_t_ParamLimits

0xf1cf,	// (0x0001dc71) list_medium_line_t4_g4_t

0x22d9,	// (0x00010d7b) chi_dic_find_pane_g1

0x3112,	// (0x00011bb4) main_tport_pane

0xa0c5,	// (0x00018b67) list_medium_line_plain_t1

0x9843,	// (0x000182e5) list_medium_line_t2_g2_g1_ParamLimits

0x9843,	// (0x000182e5) list_medium_line_t2_g2_g1

0x9843,	// (0x000182e5) list_medium_line_t2_g2_g2_ParamLimits

0x9843,	// (0x000182e5) list_medium_line_t2_g2_g2

0x0001,

0xf1c1,	// (0x0001dc63) list_medium_line_t2_g2_g_ParamLimits

0xf1c1,	// (0x0001dc63) list_medium_line_t2_g2_g

0x9b2e,	// (0x000185d0) list_medium_line_t2_g2_t1_ParamLimits

0x9b2e,	// (0x000185d0) list_medium_line_t2_g2_t1

0x9b2e,	// (0x000185d0) list_medium_line_t2_g2_t2_ParamLimits

0x9b2e,	// (0x000185d0) list_medium_line_t2_g2_t2

0x0001,

0xf196,	// (0x0001dc38) list_medium_line_t2_g2_t_ParamLimits

0xf196,	// (0x0001dc38) list_medium_line_t2_g2_t

0xd251,	// (0x0001bcf3) aid_sp_fs_list_icon_a_sm

0xd259,	// (0x0001bcfb) aid_sp_fs_list_icon_d

0xd261,	// (0x0001bd03) aid_sp_fs_text_primary

0xd26a,	// (0x0001bd0c) aid_sp_fs_text_secondary

0x90dd,	// (0x00017b7f) list_medium_line

0x90dd,	// (0x00017b7f) list_medium_line_g2

0x90dd,	// (0x00017b7f) list_medium_line_g3

0x90dd,	// (0x00017b7f) list_medium_line_plain

0x90dd,	// (0x00017b7f) list_medium_line_plain_t2

0x90dd,	// (0x00017b7f) list_medium_line_plain_t3

0x90dd,	// (0x00017b7f) list_medium_line_right_icon

0x90dd,	// (0x00017b7f) list_medium_line_right_iconx2

0x90dd,	// (0x00017b7f) list_medium_line_t2

0x90dd,	// (0x00017b7f) list_medium_line_t2_g2

0x90dd,	// (0x00017b7f) list_medium_line_t2_g3

0x90dd,	// (0x00017b7f) list_medium_line_t2_right_icon

0x90dd,	// (0x00017b7f) list_medium_line_t2_right_iconx2

0x90dd,	// (0x00017b7f) list_medium_line_t3

0x90dd,	// (0x00017b7f) list_medium_line_t3_g2

0x90dd,	// (0x00017b7f) list_medium_line_t3_g3

0x90dd,	// (0x00017b7f) list_medium_line_t3_right_iconx2

0x90dd,	// (0x00017b7f) list_medium_line_t4_g4

0x90dd,	// (0x00017b7f) list_medium_line_x2

0x90dd,	// (0x00017b7f) list_medium_line_x2_t2_g2

0x90dd,	// (0x00017b7f) list_medium_line_x2_t2_g3

0x90dd,	// (0x00017b7f) list_medium_line_x2_t2_g4

0x90dd,	// (0x00017b7f) list_medium_line_x2_t3

0x90dd,	// (0x00017b7f) list_medium_line_x2_t3_g2

0x90dd,	// (0x00017b7f) list_medium_line_x2_t3_g3

0x90dd,	// (0x00017b7f) list_medium_line_x2_t3_g4

0x90dd,	// (0x00017b7f) list_medium_line_x2_t4_g2

0x90dd,	// (0x00017b7f) list_medium_line_x2_t4_g4

0x90dd,	// (0x00017b7f) list_medium_line_x3

0x90dd,	// (0x00017b7f) list_medium_line_x3_t4

0x90dd,	// (0x00017b7f) list_medium_line_x3_t4_g4

0x90dd,	// (0x00017b7f) list_medium_line_x4_t4

0x90dd,	// (0x00017b7f) list_medium_line_x4_t4_g7

0x90dd,	// (0x00017b7f) list_medium_line_x4_t5

0x5e1d,	// (0x000148bf) list_single_fs_dyc_pane_ParamLimits

0x5e1d,	// (0x000148bf) list_single_fs_dyc_pane

0x9843,	// (0x000182e5) list_medium_line_x4_t4_g7_g1_ParamLimits

0x9843,	// (0x000182e5) list_medium_line_x4_t4_g7_g1

0x9843,	// (0x000182e5) list_medium_line_x4_t4_g7_g2_ParamLimits

0x9843,	// (0x000182e5) list_medium_line_x4_t4_g7_g2

0x9843,	// (0x000182e5) list_medium_line_x4_t4_g7_g3_ParamLimits

0x9843,	// (0x000182e5) list_medium_line_x4_t4_g7_g3

0x9843,	// (0x000182e5) list_medium_line_x4_t4_g7_g4_ParamLimits

0x9843,	// (0x000182e5) list_medium_line_x4_t4_g7_g4

0x9843,	// (0x000182e5) list_medium_line_x4_t4_g7_g5_ParamLimits

0x9843,	// (0x000182e5) list_medium_line_x4_t4_g7_g5

0x9843,	// (0x000182e5) list_medium_line_x4_t4_g7_g6_ParamLimits

0x9843,	// (0x000182e5) list_medium_line_x4_t4_g7_g6

0x9851,	// (0x000182f3) list_medium_line_x4_t4_g7_g7_ParamLimits

0x9851,	// (0x000182f3) list_medium_line_x4_t4_g7_g7

0x0006,

0xfb0d,	// (0x0001e5af) list_medium_line_x4_t4_g7_g_ParamLimits

0xfb0d,	// (0x0001e5af) list_medium_line_x4_t4_g7_g

0x9b2e,	// (0x000185d0) list_medium_line_x4_t4_g7_t1_ParamLimits

0x9b2e,	// (0x000185d0) list_medium_line_x4_t4_g7_t1

0x9b2e,	// (0x000185d0) list_medium_line_x4_t4_g7_t2_ParamLimits

0x9b2e,	// (0x000185d0) list_medium_line_x4_t4_g7_t2

0x9b2e,	// (0x000185d0) list_medium_line_x4_t4_g7_t3_ParamLimits

0x9b2e,	// (0x000185d0) list_medium_line_x4_t4_g7_t3

0xa712,	// (0x000191b4) list_medium_line_x4_t4_g7_t4_ParamLimits

0xa712,	// (0x000191b4) list_medium_line_x4_t4_g7_t4

0xa712,	// (0x000191b4) list_medium_line_x4_t4_g7_t5_ParamLimits

0xa712,	// (0x000191b4) list_medium_line_x4_t4_g7_t5

0x0004,

0xfb1c,	// (0x0001e5be) list_medium_line_x4_t4_g7_t_ParamLimits

0xfb1c,	// (0x0001e5be) list_medium_line_x4_t4_g7_t

0x6561,	// (0x00015003) list_single_dyc_row_pane_ParamLimits

0x6561,	// (0x00015003) list_single_dyc_row_pane

0x6c87,	// (0x00015729) call5_gesture_pane_ParamLimits

0x6c87,	// (0x00015729) call5_gesture_pane

0x6cdd,	// (0x0001577f) call5_windows_pane_ParamLimits

0x6cdd,	// (0x0001577f) call5_windows_pane

0x6d48,	// (0x000157ea) call5_swipe_1_pane_cp_ParamLimits

0x6d48,	// (0x000157ea) call5_swipe_1_pane_cp

0x6d54,	// (0x000157f6) call5_swipe_2_pane_cp_ParamLimits

0x6d54,	// (0x000157f6) call5_swipe_2_pane_cp

0x9b1c,	// (0x000185be) call5_image_pane_cp

0x6d60,	// (0x00015802) popup_call5_audio_first_window_cp_ParamLimits

0x6d60,	// (0x00015802) popup_call5_audio_first_window_cp

0xdd15,	// (0x0001c7b7) call5_swipe_1_pane_g1_cp_ParamLimits

0xdd15,	// (0x0001c7b7) call5_swipe_1_pane_g1_cp

0xdd82,	// (0x0001c824) call5_swipe_1_pane_g2_cp

0xdd2e,	// (0x0001c7d0) call5_swipe_1_pane_t1_cp_ParamLimits

0xdd2e,	// (0x0001c7d0) call5_swipe_1_pane_t1_cp

0xdd15,	// (0x0001c7b7) call5_swipe_2_pane_g1_cp_ParamLimits

0xdd15,	// (0x0001c7b7) call5_swipe_2_pane_g1_cp

0xdd8a,	// (0x0001c82c) call5_swipe_2_pane_g2_cp

0xdd92,	// (0x0001c834) call5_swipe_2_pane_t1_cp_ParamLimits

0xdd92,	// (0x0001c834) call5_swipe_2_pane_t1_cp

0x914c,	// (0x00017bee) main_sp_fs_email_pane

0xdda7,	// (0x0001c849) main_sp_fs_listscroll_pane_te

0xddb0,	// (0x0001c852) popup_sp_fs_action_menu_pane_ParamLimits

0xddb0,	// (0x0001c852) popup_sp_fs_action_menu_pane

0x9b5c,	// (0x000185fe) bg_sp_fs_ctrlbar_pane_g1

0xddf4,	// (0x0001c896) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xddfd,	// (0x0001c89f) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xde06,	// (0x0001c8a8) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x9b5c,	// (0x000185fe) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfc0a,	// (0x0001e6ac) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xbbd2,	// (0x0001a674) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xbbd2,	// (0x0001a674) bg_sp_fs_ctrlbar_ddmenu_pane

0xde0f,	// (0x0001c8b1) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xde0f,	// (0x0001c8b1) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xde1b,	// (0x0001c8bd) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xde1b,	// (0x0001c8bd) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfc13,	// (0x0001e6b5) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfc13,	// (0x0001e6b5) main_sp_fs_ctrlbar_ddmenu_pane_g

0xde27,	// (0x0001c8c9) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xde27,	// (0x0001c8c9) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x9b5c,	// (0x000185fe) list_medium_line_t2_right_icon_g1

0xa0c5,	// (0x00018b67) list_medium_line_t2_right_icon_t1

0xa0c5,	// (0x00018b67) list_medium_line_t2_right_icon_t2

0x0001,

0xfc18,	// (0x0001e6ba) list_medium_line_t2_right_icon_t

0xa726,	// (0x000191c8) bg_sp_fs_ctrlbar_pane_ParamLimits

0xa726,	// (0x000191c8) bg_sp_fs_ctrlbar_pane

0x6db6,	// (0x00015858) main_sp_fs_ctrlbar_button_pane_cp01

0x6dc0,	// (0x00015862) main_sp_fs_ctrlbar_ddmenu_pane

0xde79,	// (0x0001c91b) main_sp_fs_ctrlbar_pane_g1

0xde85,	// (0x0001c927) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfc1d,	// (0x0001e6bf) main_sp_fs_ctrlbar_pane_g

0x6dfe,	// (0x000158a0) main_sp_fs_ctrlbar_pane_t1

0x6e3d,	// (0x000158df) main_sp_fs_ctrlbar_pane

0x6e61,	// (0x00015903) main_sp_fs_listscroll_pane_te_cp01

0x6e81,	// (0x00015923) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x6e81,	// (0x00015923) popup_sp_fs_action_menu_pane_cp01

0x914c,	// (0x00017bee) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x914c,	// (0x00017bee) bg_sp_fs_highlight_list_pane_cp01

0xdeac,	// (0x0001c94e) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xdeac,	// (0x0001c94e) sp_fs_action_menu_list_gene_pane_g1

0xdebb,	// (0x0001c95d) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xdebb,	// (0x0001c95d) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfc2b,	// (0x0001e6cd) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfc2b,	// (0x0001e6cd) sp_fs_action_menu_list_gene_pane_g

0xdec8,	// (0x0001c96a) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xdec8,	// (0x0001c96a) sp_fs_action_menu_list_gene_pane_t1

0xdee0,	// (0x0001c982) sp_fs_action_menu_list_gene_pane_ParamLimits

0xdee0,	// (0x0001c982) sp_fs_action_menu_list_gene_pane

0xdeff,	// (0x0001c9a1) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xdeff,	// (0x0001c9a1) popup_sp_fs_action_menu_bg_pane

0xdf0d,	// (0x0001c9af) sp_fs_action_menu_list_pane_ParamLimits

0xdf0d,	// (0x0001c9af) sp_fs_action_menu_list_pane

0xdf2d,	// (0x0001c9cf) sp_fs_scroll_pane_cp01_ParamLimits

0xdf2d,	// (0x0001c9cf) sp_fs_scroll_pane_cp01

0xa0c5,	// (0x00018b67) list_medium_line_plain_t2_t1

0xa0c5,	// (0x00018b67) list_medium_line_plain_t2_t2

0x0001,

0xfc18,	// (0x0001e6ba) list_medium_line_plain_t2_t

0xa0c5,	// (0x00018b67) list_medium_line_plain_t3_t1

0xa0c5,	// (0x00018b67) list_medium_line_plain_t3_t2

0xa0c5,	// (0x00018b67) list_medium_line_plain_t3_t3

0x0002,

0xf27c,	// (0x0001dd1e) list_medium_line_plain_t3_t

0x9843,	// (0x000182e5) list_medium_line_x2_t2_g2_g1_ParamLimits

0x9843,	// (0x000182e5) list_medium_line_x2_t2_g2_g1

0x9843,	// (0x000182e5) list_medium_line_x2_t2_g2_g2_ParamLimits

0x9843,	// (0x000182e5) list_medium_line_x2_t2_g2_g2

0x0001,

0xf1c1,	// (0x0001dc63) list_medium_line_x2_t2_g2_g_ParamLimits

0xf1c1,	// (0x0001dc63) list_medium_line_x2_t2_g2_g

0x9b2e,	// (0x000185d0) list_medium_line_x2_t2_g2_t1_ParamLimits

0x9b2e,	// (0x000185d0) list_medium_line_x2_t2_g2_t1

0x9b2e,	// (0x000185d0) list_medium_line_x2_t2_g2_t2_ParamLimits

0x9b2e,	// (0x000185d0) list_medium_line_x2_t2_g2_t2

0x0001,

0xf196,	// (0x0001dc38) list_medium_line_x2_t2_g2_t_ParamLimits

0xf196,	// (0x0001dc38) list_medium_line_x2_t2_g2_t

0x9843,	// (0x000182e5) list_medium_line_x2_t4_g2_g1_ParamLimits

0x9843,	// (0x000182e5) list_medium_line_x2_t4_g2_g1

0x9843,	// (0x000182e5) list_medium_line_x2_t4_g2_g2_ParamLimits

0x9843,	// (0x000182e5) list_medium_line_x2_t4_g2_g2

0x0001,

0xf1c1,	// (0x0001dc63) list_medium_line_x2_t4_g2_g_ParamLimits

0xf1c1,	// (0x0001dc63) list_medium_line_x2_t4_g2_g

0x9b2e,	// (0x000185d0) list_medium_line_x2_t4_g2_t1_ParamLimits

0x9b2e,	// (0x000185d0) list_medium_line_x2_t4_g2_t1

0x9b2e,	// (0x000185d0) list_medium_line_x2_t4_g2_t2_ParamLimits

0x9b2e,	// (0x000185d0) list_medium_line_x2_t4_g2_t2

0x9b2e,	// (0x000185d0) list_medium_line_x2_t4_g2_t3_ParamLimits

0x9b2e,	// (0x000185d0) list_medium_line_x2_t4_g2_t3

0x9b2e,	// (0x000185d0) list_medium_line_x2_t4_g2_t4_ParamLimits

0x9b2e,	// (0x000185d0) list_medium_line_x2_t4_g2_t4

0x0003,

0xf1cf,	// (0x0001dc71) list_medium_line_x2_t4_g2_t_ParamLimits

0xf1cf,	// (0x0001dc71) list_medium_line_x2_t4_g2_t

0x9b5c,	// (0x000185fe) list_medium_line_t3_right_iconx2_g1

0x9b5c,	// (0x000185fe) list_medium_line_t3_right_iconx2_g2

0x9b5c,	// (0x000185fe) list_medium_line_t3_right_iconx2_g3

0x0002,

0xf39d,	// (0x0001de3f) list_medium_line_t3_right_iconx2_g

0xa0c5,	// (0x00018b67) list_medium_line_t3_right_iconx2_t1

0xa0c5,	// (0x00018b67) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfc18,	// (0x0001e6ba) list_medium_line_t3_right_iconx2_t

0x9843,	// (0x000182e5) list_medium_line_x3_t4_g4_g1_ParamLimits

0x9843,	// (0x000182e5) list_medium_line_x3_t4_g4_g1

0x9843,	// (0x000182e5) list_medium_line_x3_t4_g4_g2_ParamLimits

0x9843,	// (0x000182e5) list_medium_line_x3_t4_g4_g2

0x9843,	// (0x000182e5) list_medium_line_x3_t4_g4_g3_ParamLimits

0x9843,	// (0x000182e5) list_medium_line_x3_t4_g4_g3

0x9843,	// (0x000182e5) list_medium_line_x3_t4_g4_g4_ParamLimits

0x9843,	// (0x000182e5) list_medium_line_x3_t4_g4_g4

0x0003,

0xf1c6,	// (0x0001dc68) list_medium_line_x3_t4_g4_g_ParamLimits

0xf1c6,	// (0x0001dc68) list_medium_line_x3_t4_g4_g

0x9b2e,	// (0x000185d0) list_medium_line_x3_t4_g4_t1_ParamLimits

0x9b2e,	// (0x000185d0) list_medium_line_x3_t4_g4_t1

0x9b2e,	// (0x000185d0) list_medium_line_x3_t4_g4_t2_ParamLimits

0x9b2e,	// (0x000185d0) list_medium_line_x3_t4_g4_t2

0x9b2e,	// (0x000185d0) list_medium_line_x3_t4_g4_t3_ParamLimits

0x9b2e,	// (0x000185d0) list_medium_line_x3_t4_g4_t3

0x9b2e,	// (0x000185d0) list_medium_line_x3_t4_g4_t4_ParamLimits

0x9b2e,	// (0x000185d0) list_medium_line_x3_t4_g4_t4

0x0003,

0xf1cf,	// (0x0001dc71) list_medium_line_x3_t4_g4_t_ParamLimits

0xf1cf,	// (0x0001dc71) list_medium_line_x3_t4_g4_t

0x6ea6,	// (0x00015948) list_single_dyc_row_text_pane_t1_ParamLimits

0x6ea6,	// (0x00015948) list_single_dyc_row_text_pane_t1

0x6eef,	// (0x00015991) list_single_dyc_row_text_pane_t2_ParamLimits

0x6eef,	// (0x00015991) list_single_dyc_row_text_pane_t2

0xdf53,	// (0x0001c9f5) list_single_dyc_row_text_pane_t3_ParamLimits

0xdf53,	// (0x0001c9f5) list_single_dyc_row_text_pane_t3

0x0005,

0xfc30,	// (0x0001e6d2) list_single_dyc_row_text_pane_t_ParamLimits

0xfc30,	// (0x0001e6d2) list_single_dyc_row_text_pane_t

0xdf77,	// (0x0001ca19) list_single_dyc_row_pane_g1_ParamLimits

0xdf77,	// (0x0001ca19) list_single_dyc_row_pane_g1

0xdf83,	// (0x0001ca25) list_single_dyc_row_pane_g2_ParamLimits

0xdf83,	// (0x0001ca25) list_single_dyc_row_pane_g2

0xdf8f,	// (0x0001ca31) list_single_dyc_row_pane_g3_ParamLimits

0xdf8f,	// (0x0001ca31) list_single_dyc_row_pane_g3

0xdf9b,	// (0x0001ca3d) list_single_dyc_row_pane_g4_ParamLimits

0xdf9b,	// (0x0001ca3d) list_single_dyc_row_pane_g4

0x0003,

0xfc3d,	// (0x0001e6df) list_single_dyc_row_pane_g_ParamLimits

0xfc3d,	// (0x0001e6df) list_single_dyc_row_pane_g

0xdfa7,	// (0x0001ca49) list_single_dyc_row_text_pane_ParamLimits

0xdfa7,	// (0x0001ca49) list_single_dyc_row_text_pane

0x90dd,	// (0x00017b7f) bg_sp_fs_scroll_pane

0xdfc6,	// (0x0001ca68) thumb_sp_fs_scroll_pane

0x9843,	// (0x000182e5) list_medium_line_g1_ParamLimits

0x9843,	// (0x000182e5) list_medium_line_g1

0x9b2e,	// (0x000185d0) list_medium_line_t1_ParamLimits

0x9b2e,	// (0x000185d0) list_medium_line_t1

0x9843,	// (0x000182e5) list_medium_line_x2_g1_ParamLimits

0x9843,	// (0x000182e5) list_medium_line_x2_g1

0x9843,	// (0x000182e5) list_medium_line_x2_g2_ParamLimits

0x9843,	// (0x000182e5) list_medium_line_x2_g2

0x0001,

0xf1c1,	// (0x0001dc63) list_medium_line_x2_g_ParamLimits

0xf1c1,	// (0x0001dc63) list_medium_line_x2_g

0x9b2e,	// (0x000185d0) list_medium_line_x2_t1_ParamLimits

0x9b2e,	// (0x000185d0) list_medium_line_x2_t1

0x9843,	// (0x000182e5) list_medium_line_x3_g1_ParamLimits

0x9843,	// (0x000182e5) list_medium_line_x3_g1

0xdfcf,	// (0x0001ca71) list_medium_line_x3_g2_ParamLimits

0xdfcf,	// (0x0001ca71) list_medium_line_x3_g2

0x0001,

0xfc46,	// (0x0001e6e8) list_medium_line_x3_g_ParamLimits

0xfc46,	// (0x0001e6e8) list_medium_line_x3_g

0xdfdd,	// (0x0001ca7f) list_medium_line_x3_t1_ParamLimits

0xdfdd,	// (0x0001ca7f) list_medium_line_x3_t1

0xdff1,	// (0x0001ca93) thumb_sp_fs_scroll_pane_g1

0xdffa,	// (0x0001ca9c) thumb_sp_fs_scroll_pane_g2

0xe003,	// (0x0001caa5) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfc4b,	// (0x0001e6ed) thumb_sp_fs_scroll_pane_g

0xdff1,	// (0x0001ca93) bg_sp_fs_scroll_pane_g1

0xdffa,	// (0x0001ca9c) bg_sp_fs_scroll_pane_g2

0xe003,	// (0x0001caa5) bg_sp_fs_scroll_pane_g3

0x0002,

0xfc4b,	// (0x0001e6ed) bg_sp_fs_scroll_pane_g

0x9843,	// (0x000182e5) list_medium_line_x2_t3_g4_g1_ParamLimits

0x9843,	// (0x000182e5) list_medium_line_x2_t3_g4_g1

0x9843,	// (0x000182e5) list_medium_line_x2_t3_g4_g2_ParamLimits

0x9843,	// (0x000182e5) list_medium_line_x2_t3_g4_g2

0x9843,	// (0x000182e5) list_medium_line_x2_t3_g4_g3_ParamLimits

0x9843,	// (0x000182e5) list_medium_line_x2_t3_g4_g3

0x9843,	// (0x000182e5) list_medium_line_x2_t3_g4_g4_ParamLimits

0x9843,	// (0x000182e5) list_medium_line_x2_t3_g4_g4

0x0003,

0xf1c6,	// (0x0001dc68) list_medium_line_x2_t3_g4_g_ParamLimits

0xf1c6,	// (0x0001dc68) list_medium_line_x2_t3_g4_g

0x9b2e,	// (0x000185d0) list_medium_line_x2_t3_g4_t1_ParamLimits

0x9b2e,	// (0x000185d0) list_medium_line_x2_t3_g4_t1

0x9b2e,	// (0x000185d0) list_medium_line_x2_t3_g4_t2_ParamLimits

0x9b2e,	// (0x000185d0) list_medium_line_x2_t3_g4_t2

0x9b2e,	// (0x000185d0) list_medium_line_x2_t3_g4_t3_ParamLimits

0x9b2e,	// (0x000185d0) list_medium_line_x2_t3_g4_t3

0x0002,

0xf1ba,	// (0x0001dc5c) list_medium_line_x2_t3_g4_t_ParamLimits

0xf1ba,	// (0x0001dc5c) list_medium_line_x2_t3_g4_t

0x9843,	// (0x000182e5) list_medium_line_g2_g1_ParamLimits

0x9843,	// (0x000182e5) list_medium_line_g2_g1

0x9843,	// (0x000182e5) list_medium_line_g2_g2_ParamLimits

0x9843,	// (0x000182e5) list_medium_line_g2_g2

0x0001,

0xf1c1,	// (0x0001dc63) list_medium_line_g2_g_ParamLimits

0xf1c1,	// (0x0001dc63) list_medium_line_g2_g

0x9b2e,	// (0x000185d0) list_medium_line_g2_t1_ParamLimits

0x9b2e,	// (0x000185d0) list_medium_line_g2_t1

0x9843,	// (0x000182e5) list_medium_line_t3_g2_g1_ParamLimits

0x9843,	// (0x000182e5) list_medium_line_t3_g2_g1

0x9843,	// (0x000182e5) list_medium_line_t3_g2_g2_ParamLimits

0x9843,	// (0x000182e5) list_medium_line_t3_g2_g2

0x0001,

0xf1c1,	// (0x0001dc63) list_medium_line_t3_g2_g_ParamLimits

0xf1c1,	// (0x0001dc63) list_medium_line_t3_g2_g

0x9b2e,	// (0x000185d0) list_medium_line_t3_g2_t1_ParamLimits

0x9b2e,	// (0x000185d0) list_medium_line_t3_g2_t1

0x9b2e,	// (0x000185d0) list_medium_line_t3_g2_t2_ParamLimits

0x9b2e,	// (0x000185d0) list_medium_line_t3_g2_t2

0x9b2e,	// (0x000185d0) list_medium_line_t3_g2_t3_ParamLimits

0x9b2e,	// (0x000185d0) list_medium_line_t3_g2_t3

0x0002,

0xf1ba,	// (0x0001dc5c) list_medium_line_t3_g2_t_ParamLimits

0xf1ba,	// (0x0001dc5c) list_medium_line_t3_g2_t

0x9b5c,	// (0x000185fe) list_medium_line_right_icon_g1

0xa0c5,	// (0x00018b67) list_medium_line_right_icon_t1

0x9843,	// (0x000182e5) list_medium_line_t2_g1_ParamLimits

0x9843,	// (0x000182e5) list_medium_line_t2_g1

0x9b2e,	// (0x000185d0) list_medium_line_t2_t1_ParamLimits

0x9b2e,	// (0x000185d0) list_medium_line_t2_t1

0x9b2e,	// (0x000185d0) list_medium_line_t2_t2_ParamLimits

0x9b2e,	// (0x000185d0) list_medium_line_t2_t2

0x0001,

0xf196,	// (0x0001dc38) list_medium_line_t2_t_ParamLimits

0xf196,	// (0x0001dc38) list_medium_line_t2_t

0x9843,	// (0x000182e5) list_medium_line_t3_g1_ParamLimits

0x9843,	// (0x000182e5) list_medium_line_t3_g1

0x9b2e,	// (0x000185d0) list_medium_line_t3_t1_ParamLimits

0x9b2e,	// (0x000185d0) list_medium_line_t3_t1

0x9b2e,	// (0x000185d0) list_medium_line_t3_t2_ParamLimits

0x9b2e,	// (0x000185d0) list_medium_line_t3_t2

0x9b2e,	// (0x000185d0) list_medium_line_t3_t3_ParamLimits

0x9b2e,	// (0x000185d0) list_medium_line_t3_t3

0x0002,

0xf1ba,	// (0x0001dc5c) list_medium_line_t3_t_ParamLimits

0xf1ba,	// (0x0001dc5c) list_medium_line_t3_t

0x9843,	// (0x000182e5) list_medium_line_g3_g1_ParamLimits

0x9843,	// (0x000182e5) list_medium_line_g3_g1

0x9843,	// (0x000182e5) list_medium_line_g3_g2_ParamLimits

0x9843,	// (0x000182e5) list_medium_line_g3_g2

0x9843,	// (0x000182e5) list_medium_line_g3_g3_ParamLimits

0x9843,	// (0x000182e5) list_medium_line_g3_g3

0x0002,

0xf1b3,	// (0x0001dc55) list_medium_line_g3_g_ParamLimits

0xf1b3,	// (0x0001dc55) list_medium_line_g3_g

0x9b2e,	// (0x000185d0) list_medium_line_g3_t1_ParamLimits

0x9b2e,	// (0x000185d0) list_medium_line_g3_t1

0x9843,	// (0x000182e5) list_medium_line_t2_g3_g1_ParamLimits

0x9843,	// (0x000182e5) list_medium_line_t2_g3_g1

0x9843,	// (0x000182e5) list_medium_line_t2_g3_g2_ParamLimits

0x9843,	// (0x000182e5) list_medium_line_t2_g3_g2

0x9843,	// (0x000182e5) list_medium_line_t2_g3_g3_ParamLimits

0x9843,	// (0x000182e5) list_medium_line_t2_g3_g3

0x0002,

0xf1b3,	// (0x0001dc55) list_medium_line_t2_g3_g_ParamLimits

0xf1b3,	// (0x0001dc55) list_medium_line_t2_g3_g

0x9b2e,	// (0x000185d0) list_medium_line_t2_g3_t1_ParamLimits

0x9b2e,	// (0x000185d0) list_medium_line_t2_g3_t1

0x9b2e,	// (0x000185d0) list_medium_line_t2_g3_t2_ParamLimits

0x9b2e,	// (0x000185d0) list_medium_line_t2_g3_t2

0x0001,

0xf196,	// (0x0001dc38) list_medium_line_t2_g3_t_ParamLimits

0xf196,	// (0x0001dc38) list_medium_line_t2_g3_t

0x9843,	// (0x000182e5) list_medium_line_t3_g3_g1_ParamLimits

0x9843,	// (0x000182e5) list_medium_line_t3_g3_g1

0x9843,	// (0x000182e5) list_medium_line_t3_g3_g2_ParamLimits

0x9843,	// (0x000182e5) list_medium_line_t3_g3_g2

0x9843,	// (0x000182e5) list_medium_line_t3_g3_g3_ParamLimits

0x9843,	// (0x000182e5) list_medium_line_t3_g3_g3

0x0002,

0xf1b3,	// (0x0001dc55) list_medium_line_t3_g3_g_ParamLimits

0xf1b3,	// (0x0001dc55) list_medium_line_t3_g3_g

0x9b2e,	// (0x000185d0) list_medium_line_t3_g3_t1_ParamLimits

0x9b2e,	// (0x000185d0) list_medium_line_t3_g3_t1

0x9b2e,	// (0x000185d0) list_medium_line_t3_g3_t2_ParamLimits

0x9b2e,	// (0x000185d0) list_medium_line_t3_g3_t2

0x9b2e,	// (0x000185d0) list_medium_line_t3_g3_t3_ParamLimits

0x9b2e,	// (0x000185d0) list_medium_line_t3_g3_t3

0x0002,

0xf1ba,	// (0x0001dc5c) list_medium_line_t3_g3_t_ParamLimits

0xf1ba,	// (0x0001dc5c) list_medium_line_t3_g3_t

0x9b5c,	// (0x000185fe) list_medium_line_right_iconx2_g1

0x9b5c,	// (0x000185fe) list_medium_line_right_iconx2_g2

0x0001,

0xf398,	// (0x0001de3a) list_medium_line_right_iconx2_g

0xa0c5,	// (0x00018b67) list_medium_line_right_iconx2_t1

0x9b5c,	// (0x000185fe) list_medium_line_t2_right_iconx2_g1

0x9b5c,	// (0x000185fe) list_medium_line_t2_right_iconx2_g2

0x0001,

0xf398,	// (0x0001de3a) list_medium_line_t2_right_iconx2_g

0xa0c5,	// (0x00018b67) list_medium_line_t2_right_iconx2_t1

0xa0c5,	// (0x00018b67) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfc18,	// (0x0001e6ba) list_medium_line_t2_right_iconx2_t

0xa0c5,	// (0x00018b67) list_medium_line_x4_t4_t1

0xa0c5,	// (0x00018b67) list_medium_line_x4_t4_t2

0xa0c5,	// (0x00018b67) list_medium_line_x4_t4_t3

0xa0c5,	// (0x00018b67) list_medium_line_x4_t4_t4

0x0003,

0xf283,	// (0x0001dd25) list_medium_line_x4_t4_t

0x7067,	// (0x00015b09) tport_appsw_pane_ParamLimits

0x7067,	// (0x00015b09) tport_appsw_pane

0x707f,	// (0x00015b21) tport_contact_pane_ParamLimits

0x707f,	// (0x00015b21) tport_contact_pane

0x7097,	// (0x00015b39) tport_listscroll_pane_ParamLimits

0x7097,	// (0x00015b39) tport_listscroll_pane

0x70b1,	// (0x00015b53) cell_tport_appsw_pane_ParamLimits

0x70b1,	// (0x00015b53) cell_tport_appsw_pane

0xa6f0,	// (0x00019192) tport_appsw_pane_g1_ParamLimits

0xa6f0,	// (0x00019192) tport_appsw_pane_g1

0xe00c,	// (0x0001caae) tport_contact_pane_g1

0xd867,	// (0x0001c309) tport_contact_pane_t1

0xe015,	// (0x0001cab7) tport_contact_pane_t2

0x0001,

0xfc52,	// (0x0001e6f4) tport_contact_pane_t

0xe023,	// (0x0001cac5) list_tport_pane

0xe02c,	// (0x0001cace) scroll_pane_cp_030

0x70f9,	// (0x00015b9b) cell_tport_appsw_pane_g1

0x7109,	// (0x00015bab) cell_tport_appsw_pane_t1

0x7117,	// (0x00015bb9) grid_highlight_pane_cp019

0x711f,	// (0x00015bc1) list_tport_double_graphic_pane_ParamLimits

0x711f,	// (0x00015bc1) list_tport_double_graphic_pane

0x914c,	// (0x00017bee) list_highlight_pane_cp023_ParamLimits

0x914c,	// (0x00017bee) list_highlight_pane_cp023

0x712c,	// (0x00015bce) list_tport_double_graphic_pane_g1_ParamLimits

0x712c,	// (0x00015bce) list_tport_double_graphic_pane_g1

0x7139,	// (0x00015bdb) list_tport_double_graphic_pane_t1_ParamLimits

0x7139,	// (0x00015bdb) list_tport_double_graphic_pane_t1

0x714e,	// (0x00015bf0) list_tport_double_graphic_pane_t2_ParamLimits

0x714e,	// (0x00015bf0) list_tport_double_graphic_pane_t2

0x0001,

0xfc5e,	// (0x0001e700) list_tport_double_graphic_pane_t_ParamLimits

0xfc5e,	// (0x0001e700) list_tport_double_graphic_pane_t

0x90dd,	// (0x00017b7f) main_cale_note_pane

0x4ee0,	// (0x00013982) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x4ee0,	// (0x00013982) cell_vitu2_function_top_wide_pane_cp01

0x68fd,	// (0x0001539f) wait_bar_pane_cp05_ParamLimits

0x914c,	// (0x00017bee) listscroll_cmail_pane

0xe03d,	// (0x0001cadf) list_cmail_pane

0x7160,	// (0x00015c02) list_cmail_body_pane

0x7175,	// (0x00015c17) list_single_cmail_header_caption_pane

0x718b,	// (0x00015c2d) list_single_cmail_header_detail_pane_ParamLimits

0x718b,	// (0x00015c2d) list_single_cmail_header_detail_pane

0xe054,	// (0x0001caf6) list_single_cmail_header_caption_pane_t1

0x71b8,	// (0x00015c5a) list_single_cmail_header_detail_pane_g1_ParamLimits

0x71b8,	// (0x00015c5a) list_single_cmail_header_detail_pane_g1

0xe06b,	// (0x0001cb0d) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe06b,	// (0x0001cb0d) list_single_cmail_header_detail_pane_g2

0x0002,

0xfc63,	// (0x0001e705) list_single_cmail_header_detail_pane_g_ParamLimits

0xfc63,	// (0x0001e705) list_single_cmail_header_detail_pane_g

0x71d0,	// (0x00015c72) list_single_cmail_header_detail_pane_t1_ParamLimits

0x71d0,	// (0x00015c72) list_single_cmail_header_detail_pane_t1

0x720e,	// (0x00015cb0) list_single_cmail_header_editor_pane_bg_ParamLimits

0x720e,	// (0x00015cb0) list_single_cmail_header_editor_pane_bg

0xd9c4,	// (0x0001c466) list_cmail_body_pane_g1

0xe0a8,	// (0x0001cb4a) list_cmail_body_pane_t1

0xcbcc,	// (0x0001b66e) list_single_cmail_header_editor_pane_bg_g1

0x9d6d,	// (0x0001880f) list_single_cmail_header_editor_pane_bg_g1_copy1

0xcbdc,	// (0x0001b67e) list_single_cmail_header_editor_pane_bg_g1_copy2

0xcbd4,	// (0x0001b676) list_single_cmail_header_editor_pane_bg_g1_copy3

0xce93,	// (0x0001b935) list_single_cmail_header_editor_pane_bg_g1_copy4

0xcbfc,	// (0x0001b69e) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xcbec,	// (0x0001b68e) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xcbf4,	// (0x0001b696) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x9d4d,	// (0x000187ef) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x7227,	// (0x00015cc9) calenote_gesture_pane_ParamLimits

0x7227,	// (0x00015cc9) calenote_gesture_pane

0x7247,	// (0x00015ce9) calenote_window_pane_ParamLimits

0x7247,	// (0x00015ce9) calenote_window_pane

0xe0b6,	// (0x0001cb58) popup_note_window_cp01

0x7263,	// (0x00015d05) calenote_swipe_1_pane_ParamLimits

0x7263,	// (0x00015d05) calenote_swipe_1_pane

0x6d54,	// (0x000157f6) calenote_swipe_2_pane_ParamLimits

0x6d54,	// (0x000157f6) calenote_swipe_2_pane

0xdd15,	// (0x0001c7b7) calenote_swipe_1_pane_g1_ParamLimits

0xdd15,	// (0x0001c7b7) calenote_swipe_1_pane_g1

0xdd22,	// (0x0001c7c4) calenote_swipe_1_pane_g2_ParamLimits

0xdd22,	// (0x0001c7c4) calenote_swipe_1_pane_g2

0x0001,

0xfc00,	// (0x0001e6a2) calenote_swipe_1_pane_g_ParamLimits

0xfc00,	// (0x0001e6a2) calenote_swipe_1_pane_g

0xe0c8,	// (0x0001cb6a) calenote_swipe_1_pane_t1_ParamLimits

0xe0c8,	// (0x0001cb6a) calenote_swipe_1_pane_t1

0xdd15,	// (0x0001c7b7) calenote_swipe_2_pane_g1_ParamLimits

0xdd15,	// (0x0001c7b7) calenote_swipe_2_pane_g1

0xe0e7,	// (0x0001cb89) calenote_swipe_2_pane_g2_ParamLimits

0xe0e7,	// (0x0001cb89) calenote_swipe_2_pane_g2

0x0001,

0xfc6f,	// (0x0001e711) calenote_swipe_2_pane_g_ParamLimits

0xfc6f,	// (0x0001e711) calenote_swipe_2_pane_g

0xe0f3,	// (0x0001cb95) calenote_swipe_2_pane_t1_ParamLimits

0xe0f3,	// (0x0001cb95) calenote_swipe_2_pane_t1

0x90dd,	// (0x00017b7f) main_mup_navstr_pane

0x3d7d,	// (0x0001281f) main_mup3_pane_t7_ParamLimits

0x3d7d,	// (0x0001281f) main_mup3_pane_t7

0xc7a6,	// (0x0001b248) main_mp4_pane_g6_ParamLimits

0xc7a6,	// (0x0001b248) main_mp4_pane_g6

0xc9f9,	// (0x0001b49b) main_image3_pane_t4_ParamLimits

0xc9f9,	// (0x0001b49b) main_image3_pane_t4

0x7278,	// (0x00015d1a) popup_navstr_preview_pane_ParamLimits

0x7278,	// (0x00015d1a) popup_navstr_preview_pane

0x728c,	// (0x00015d2e) scroll_navstr_pane_ParamLimits

0x728c,	// (0x00015d2e) scroll_navstr_pane

0x90dd,	// (0x00017b7f) bg_popup_preview_window_pane_cp04

0xe11a,	// (0x0001cbbc) popup_navstr_preview_pane_t1

0x72a0,	// (0x00015d42) scroll_navstr_pane_g1_ParamLimits

0x72a0,	// (0x00015d42) scroll_navstr_pane_g1

0x72b4,	// (0x00015d56) scroll_navstr_pane_t1_ParamLimits

0x72b4,	// (0x00015d56) scroll_navstr_pane_t1

0xe0bf,	// (0x0001cb61) bg_button_pane_cp014

0xe0bf,	// (0x0001cb61) bg_button_pane_cp030

0x6c2d,	// (0x000156cf) list_double_fisheye_pane_g4_ParamLimits

0x6c2d,	// (0x000156cf) list_double_fisheye_pane_g4

0x6c39,	// (0x000156db) list_double_fisheye_pane_g5_ParamLimits

0x6c39,	// (0x000156db) list_double_fisheye_pane_g5

0xcef6,	// (0x0001b998) sp_fs_scroll_pane_cp03

0xde79,	// (0x0001c91b) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xde85,	// (0x0001c927) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfc1d,	// (0x0001e6bf) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x6dfe,	// (0x000158a0) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe04c,	// (0x0001caee) sp_fs_scroll_pane_cp02

0x9a64,	// (0x00018506) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x9a64,	// (0x00018506) popup_sp_fs_calendar_preview_list_single_pane

0x90dd,	// (0x00017b7f) main_cam6_pano_pane

0x914c,	// (0x00017bee) main_mup3_pane_ParamLimits

0x90dd,	// (0x00017b7f) main_phacti_pane

0x67d0,	// (0x00015272) bg_button_pane_cp11

0x67ea,	// (0x0001528c) main_mobtv_info_pane_g2_ParamLimits

0x67ea,	// (0x0001528c) main_mobtv_info_pane_g2

0x0001,

0xfb7d,	// (0x0001e61f) main_mobtv_info_pane_g_ParamLimits

0xfb7d,	// (0x0001e61f) main_mobtv_info_pane_g

0x69c7,	// (0x00015469) sc_clock_pane_t5_ParamLimits

0x69c7,	// (0x00015469) sc_clock_pane_t5

0x6a8f,	// (0x00015531) main_radioblah_pane_g1_ParamLimits

0xdc61,	// (0x0001c703) main_radioblah_pane_t3_ParamLimits

0xdc61,	// (0x0001c703) main_radioblah_pane_t3

0xdc79,	// (0x0001c71b) main_radioblah_pane_t4_ParamLimits

0xdc79,	// (0x0001c71b) main_radioblah_pane_t4

0x6ab7,	// (0x00015559) main_radioblah_text_pane_ParamLimits

0x6ab7,	// (0x00015559) main_radioblah_text_pane

0x6ac9,	// (0x0001556b) main_radioblah_info_pane_g1_ParamLimits

0x6b62,	// (0x00015604) main_radioblah_info_pane_t4_ParamLimits

0x6b62,	// (0x00015604) main_radioblah_info_pane_t4

0x914c,	// (0x00017bee) main_sp_fs_calendar_pane

0x72cb,	// (0x00015d6d) main_phacti_pane_g1

0x72d3,	// (0x00015d75) phacti_note_pane_ParamLimits

0x72d3,	// (0x00015d75) phacti_note_pane

0xe131,	// (0x0001cbd3) phacti_term_pane_ParamLimits

0xe131,	// (0x0001cbd3) phacti_term_pane

0xe146,	// (0x0001cbe8) phacti_note_pane_t1_ParamLimits

0xe146,	// (0x0001cbe8) phacti_note_pane_t1

0xe15d,	// (0x0001cbff) phacti_term_pane_g1

0xe165,	// (0x0001cc07) phacti_term_pane_t1_ParamLimits

0xe165,	// (0x0001cc07) phacti_term_pane_t1

0xe18f,	// (0x0001cc31) popup_sp_fs_calendar_preview_list_single_pane_g1

0x9b03,	// (0x000185a5) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfc79,	// (0x0001e71b) popup_sp_fs_calendar_preview_list_single_pane_g

0xe197,	// (0x0001cc39) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe197,	// (0x0001cc39) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe1ad,	// (0x0001cc4f) aid_popup_sp_fs_bg_corner_pane

0x9b5c,	// (0x000185fe) popup_sp_fs_calendar_preview_bg_pane_g1

0x90dd,	// (0x00017b7f) popup_sp_fs_calendar_preview_bg_pane

0xe1b5,	// (0x0001cc57) popup_sp_fs_calendar_preview_list_pane

0xa726,	// (0x000191c8) bg_main_sp_fs_cale_pane_ParamLimits

0xa726,	// (0x000191c8) bg_main_sp_fs_cale_pane

0xe1c6,	// (0x0001cc68) listscroll_cale_mrui_pane_ParamLimits

0xe1c6,	// (0x0001cc68) listscroll_cale_mrui_pane

0xe1db,	// (0x0001cc7d) listscroll_sp_fs_schedule_track_pane

0xe1e4,	// (0x0001cc86) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe1e4,	// (0x0001cc86) main_sp_fs_ctrlbar_pane_cp01

0xe1f7,	// (0x0001cc99) main_sp_fs_ribbon_pane

0xe1ff,	// (0x0001cca1) popup_sp_fs_cale_preview_window

0x7348,	// (0x00015dea) list_single_sp_fs_schedule_track_pane_ParamLimits

0x7348,	// (0x00015dea) list_single_sp_fs_schedule_track_pane

0x914c,	// (0x00017bee) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x914c,	// (0x00017bee) bg_sp_fs_highlight_list_pane_cp03

0x735b,	// (0x00015dfd) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x735b,	// (0x00015dfd) list_single_sp_fs_schedule_track_pane_g1

0x7367,	// (0x00015e09) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x7367,	// (0x00015e09) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfc7e,	// (0x0001e720) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfc7e,	// (0x0001e720) list_single_sp_fs_schedule_track_pane_g

0x7373,	// (0x00015e15) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x7373,	// (0x00015e15) list_single_sp_fs_schedule_track_pane_t1

0x738d,	// (0x00015e2f) sp_fs_schedule_track_pane_ParamLimits

0x738d,	// (0x00015e2f) sp_fs_schedule_track_pane

0xe211,	// (0x0001ccb3) sp_fs_schedule_track_pane_g1

0xe219,	// (0x0001ccbb) sp_fs_schedule_track_pane_g2

0xe221,	// (0x0001ccc3) sp_fs_schedule_track_pane_g3

0xe229,	// (0x0001cccb) sp_fs_schedule_track_pane_g4

0xe231,	// (0x0001ccd3) sp_fs_schedule_track_pane_g5

0x0004,

0xfc83,	// (0x0001e725) sp_fs_schedule_track_pane_g

0xcbcc,	// (0x0001b66e) bg_sp_fs_schedule_viewer_highlight_g1

0x9d6d,	// (0x0001880f) bg_sp_fs_schedule_viewer_highlight_g2

0xcbd4,	// (0x0001b676) bg_sp_fs_schedule_viewer_highlight_g3

0xcbdc,	// (0x0001b67e) bg_sp_fs_schedule_viewer_highlight_g4

0xce93,	// (0x0001b935) bg_sp_fs_schedule_viewer_highlight_g5

0xcbec,	// (0x0001b68e) bg_sp_fs_schedule_viewer_highlight_g6

0xcbf4,	// (0x0001b696) bg_sp_fs_schedule_viewer_highlight_g7

0xcbfc,	// (0x0001b69e) bg_sp_fs_schedule_viewer_highlight_g8

0x9d4d,	// (0x000187ef) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfc8e,	// (0x0001e730) bg_sp_fs_schedule_viewer_highlight_g

0x90dd,	// (0x00017b7f) bg_main_sp_fs_ribbon_pane

0x739e,	// (0x00015e40) main_sp_fs_ribbon_pane_g1

0xe239,	// (0x0001ccdb) main_sp_fs_ribbon_pane_t1

0x73a7,	// (0x00015e49) main_sp_fs_ribbon_pane_t2

0xe248,	// (0x0001ccea) main_sp_fs_ribbon_pane_t3

0x0002,

0xfca1,	// (0x0001e743) main_sp_fs_ribbon_pane_t

0xe257,	// (0x0001ccf9) main_sp_fs_ribbon_scheduler_pane

0xe25f,	// (0x0001cd01) bg_main_sp_fs_ribbon_pane_g1

0xe268,	// (0x0001cd0a) bg_main_sp_fs_ribbon_pane_g2

0xe271,	// (0x0001cd13) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfca8,	// (0x0001e74a) bg_main_sp_fs_ribbon_pane_g

0xe279,	// (0x0001cd1b) main_sp_fs_ribbon_scheduler_pane_g1

0xe282,	// (0x0001cd24) main_sp_fs_ribbon_scheduler_pane_g2

0xe28b,	// (0x0001cd2d) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfcaf,	// (0x0001e751) main_sp_fs_ribbon_scheduler_pane_g

0xe294,	// (0x0001cd36) list_cale_mrui_pane

0x73b6,	// (0x00015e58) sp_fs_scroll_pane_cp07_ParamLimits

0x73b6,	// (0x00015e58) sp_fs_scroll_pane_cp07

0x73d2,	// (0x00015e74) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x73d2,	// (0x00015e74) bg_sp_fs_schedule_viewer_highlight

0xe2a1,	// (0x0001cd43) list_single_sp_fs_schedule_track_pane_cp01

0xe2a9,	// (0x0001cd4b) list_sp_fs_schedule_track_pane

0xe2b1,	// (0x0001cd53) sp_fs_scroll_pane_cp06_ParamLimits

0xe2b1,	// (0x0001cd53) sp_fs_scroll_pane_cp06

0x9b5c,	// (0x000185fe) bgmain_sp_fs_calendar_pane_g1

0x73e2,	// (0x00015e84) list_single_cale_mrui_pane_ParamLimits

0x73e2,	// (0x00015e84) list_single_cale_mrui_pane

0xe2c3,	// (0x0001cd65) list_single_cale_mrui_row_pane_ParamLimits

0xe2c3,	// (0x0001cd65) list_single_cale_mrui_row_pane

0xe2d0,	// (0x0001cd72) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe2d0,	// (0x0001cd72) list_single_cale_mrui_row_pane_g1

0xe315,	// (0x0001cdb7) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe315,	// (0x0001cdb7) list_single_cale_mrui_row_pane_t1

0x7402,	// (0x00015ea4) list_single_cale_mrui_row_pane_t2_ParamLimits

0x7402,	// (0x00015ea4) list_single_cale_mrui_row_pane_t2

0xe327,	// (0x0001cdc9) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe327,	// (0x0001cdc9) list_single_cale_mrui_row_pane_t3

0xe356,	// (0x0001cdf8) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe356,	// (0x0001cdf8) list_single_cale_mrui_row_pane_t4

0x0003,

0xfcbd,	// (0x0001e75f) list_single_cale_mrui_row_pane_t_ParamLimits

0xfcbd,	// (0x0001e75f) list_single_cale_mrui_row_pane_t

0x746a,	// (0x00015f0c) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x746a,	// (0x00015f0c) list_single_cmail_header_editor_pane_bg_cp01

0x7498,	// (0x00015f3a) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x7498,	// (0x00015f3a) list_single_cmail_header_editor_pane_bg_cp02

0x74b8,	// (0x00015f5a) main_radioblah_text_pane_t1_ParamLimits

0x74b8,	// (0x00015f5a) main_radioblah_text_pane_t1

0xe385,	// (0x0001ce27) cam6_indi_pane_cp01

0xe38d,	// (0x0001ce2f) cam6_mode_pane_cp01

0xe395,	// (0x0001ce37) cam6_pano_pane

0xe39e,	// (0x0001ce40) cam6_zoom_pane_cp01

0xe3a6,	// (0x0001ce48) cam6_pano_image_pane

0xe3b1,	// (0x0001ce53) cam6_pano_pane_g1

0xd9c4,	// (0x0001c466) cam6_pano_pane_g2

0xe3ba,	// (0x0001ce5c) cam6_pano_pane_g3

0xe3c3,	// (0x0001ce65) cam6_pano_pane_g4

0xc49b,	// (0x0001af3d) cam6_pano_pane_g5

0xe3cc,	// (0x0001ce6e) cam6_pano_pane_g6

0xceee,	// (0x0001b990) cam6_pano_pane_g7

0xe3d6,	// (0x0001ce78) cam6_pano_pane_g8

0xe3df,	// (0x0001ce81) cam6_pano_pane_g9

0x0008,

0xfcc6,	// (0x0001e768) cam6_pano_pane_g

0x90dd,	// (0x00017b7f) main_browser_tag_pane

0xe112,	// (0x0001cbb4) grid_navstr_albumart_pane

0xe3ea,	// (0x0001ce8c) cell_navstr_albumart_pane_ParamLimits

0xe3ea,	// (0x0001ce8c) cell_navstr_albumart_pane

0xe40a,	// (0x0001ceac) cell_navstr_albumart_pane_g1

0xb8eb,	// (0x0001a38d) cell_navstr_albumart_pane_g2

0xb8fb,	// (0x0001a39d) cell_navstr_albumart_pane_g3

0xb8f3,	// (0x0001a395) cell_navstr_albumart_pane_g4

0x0003,

0xfcd9,	// (0x0001e77b) cell_navstr_albumart_pane_g

0x74d2,	// (0x00015f74) bt_list_pane_ParamLimits

0x74d2,	// (0x00015f74) bt_list_pane

0x74e6,	// (0x00015f88) bt_list_pane_t1

0x74f5,	// (0x00015f97) bt_list_pane_t2

0x0001,

0xfce2,	// (0x0001e784) bt_list_pane_t

0x90dd,	// (0x00017b7f) main_cale_prevew_pane

0x7504,	// (0x00015fa6) popup_cale_preview_window_ParamLimits

0x7504,	// (0x00015fa6) popup_cale_preview_window

0x914c,	// (0x00017bee) bg_popup_preview_window_pane_cp05_ParamLimits

0x914c,	// (0x00017bee) bg_popup_preview_window_pane_cp05

0xe412,	// (0x0001ceb4) list_cale_preview_pane_ParamLimits

0xe412,	// (0x0001ceb4) list_cale_preview_pane

0x751f,	// (0x00015fc1) list_double_cale_preview_pane_ParamLimits

0x751f,	// (0x00015fc1) list_double_cale_preview_pane

0x7531,	// (0x00015fd3) list_single_cale_preview_pane_ParamLimits

0x7531,	// (0x00015fd3) list_single_cale_preview_pane

0x7547,	// (0x00015fe9) list_single_cale_preview_pane_g1

0x754f,	// (0x00015ff1) list_single_cale_preview_pane_t1_ParamLimits

0x754f,	// (0x00015ff1) list_single_cale_preview_pane_t1

0x7564,	// (0x00016006) list_double_cale_preview_pane_g1

0x756c,	// (0x0001600e) list_double_cale_preview_pane_t1_ParamLimits

0x756c,	// (0x0001600e) list_double_cale_preview_pane_t1

0x7581,	// (0x00016023) list_double_cale_preview_pane_t2_ParamLimits

0x7581,	// (0x00016023) list_double_cale_preview_pane_t2

0x0001,

0xfce7,	// (0x0001e789) list_double_cale_preview_pane_t_ParamLimits

0xfce7,	// (0x0001e789) list_double_cale_preview_pane_t

0x90dd,	// (0x00017b7f) main_ezdial_pane

0x914c,	// (0x00017bee) main_sp_fs_email_pane_ParamLimits

0x6d6e,	// (0x00015810) cmail_ddmenu_btn01_pane_ParamLimits

0x6d6e,	// (0x00015810) cmail_ddmenu_btn01_pane

0x6d81,	// (0x00015823) cmail_ddmenu_btn02_pane_ParamLimits

0x6d81,	// (0x00015823) cmail_ddmenu_btn02_pane

0x6da4,	// (0x00015846) cmail_ddmenu_btn03_pane_ParamLimits

0x6da4,	// (0x00015846) cmail_ddmenu_btn03_pane

0x6e3d,	// (0x000158df) main_sp_fs_ctrlbar_pane_ParamLimits

0x6e61,	// (0x00015903) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x7160,	// (0x00015c02) list_cmail_body_pane_ParamLimits

0xe062,	// (0x0001cb04) bg_button_pane_cp12

0xe077,	// (0x0001cb19) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe077,	// (0x0001cb19) list_single_cmail_header_detail_pane_g3

0xe084,	// (0x0001cb26) list_single_cmail_header_detail_pane_t2_ParamLimits

0xe084,	// (0x0001cb26) list_single_cmail_header_detail_pane_t2

0x0001,

0xfc6a,	// (0x0001e70c) list_single_cmail_header_detail_pane_t_ParamLimits

0xfc6a,	// (0x0001e70c) list_single_cmail_header_detail_pane_t

0xe17a,	// (0x0001cc1c) phacti_term_pane_t2_ParamLimits

0xe17a,	// (0x0001cc1c) phacti_term_pane_t2

0x0001,

0xfc74,	// (0x0001e716) phacti_term_pane_t_ParamLimits

0xfc74,	// (0x0001e716) phacti_term_pane_t

0xe41e,	// (0x0001cec0) aid_size_list_single_double

0x7599,	// (0x0001603b) popup_ezdial_listscroll_window

0x75b5,	// (0x00016057) popup_number_entry_window_cp01

0x9b1c,	// (0x000185be) bg_popup_call_pane_cp09

0xe42a,	// (0x0001cecc) ezdial_list_pane

0xe432,	// (0x0001ced4) scroll_pane_cp23

0xa726,	// (0x000191c8) bg_button_pane_cp028_ParamLimits

0xa726,	// (0x000191c8) bg_button_pane_cp028

0x75c3,	// (0x00016065) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x75c3,	// (0x00016065) cmail_ddmenu_btn01_pane_g1

0x75cf,	// (0x00016071) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x75cf,	// (0x00016071) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfcec,	// (0x0001e78e) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfcec,	// (0x0001e78e) cmail_ddmenu_btn01_pane_g

0xe43a,	// (0x0001cedc) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xe43a,	// (0x0001cedc) cmail_ddmenu_btn01_pane_t1

0xa726,	// (0x000191c8) bg_button_pane_cp029_ParamLimits

0xa726,	// (0x000191c8) bg_button_pane_cp029

0x75e3,	// (0x00016085) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x75e3,	// (0x00016085) cmail_ddmenu_btn02_pane_g1

0x75fb,	// (0x0001609d) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x75fb,	// (0x0001609d) cmail_ddmenu_btn02_pane_t1

0x914c,	// (0x00017bee) bg_button_pane_cp031_ParamLimits

0x914c,	// (0x00017bee) bg_button_pane_cp031

0x75e3,	// (0x00016085) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x75e3,	// (0x00016085) cmail_ddmenu_btn03_pane_g1

0x75fb,	// (0x0001609d) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x75fb,	// (0x0001609d) cmail_ddmenu_btn03_pane_t1

0x46d8,	// (0x0001317a) cell_dialer2_keypad_pane_t1_ParamLimits

0x46f2,	// (0x00013194) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x46f2,	// (0x00013194) cell_dialer2_keypad_pane_t1_copy1

0x65f3,	// (0x00015095) ncimui_group_button_pane

0x914c,	// (0x00017bee) main_sp_fs_calendar_pane_ParamLimits

0x7175,	// (0x00015c17) list_single_cmail_header_caption_pane_ParamLimits

0xe1bd,	// (0x0001cc5f) aid_recal_txt_sm_pane

0x90dd,	// (0x00017b7f) mian_recal_day_pane

0xe1ff,	// (0x0001cca1) popup_sp_fs_cale_preview_window_ParamLimits

0xe450,	// (0x0001cef2) list_recal_day_pane

0xe492,	// (0x0001cf34) list_single_recal_day_pane_ParamLimits

0xe492,	// (0x0001cf34) list_single_recal_day_pane

0xe4a4,	// (0x0001cf46) list_single_recal_day_pane_g1_ParamLimits

0xe4a4,	// (0x0001cf46) list_single_recal_day_pane_g1

0xe4b0,	// (0x0001cf52) list_single_recal_day_pane_g2_ParamLimits

0xe4b0,	// (0x0001cf52) list_single_recal_day_pane_g2

0xe4bc,	// (0x0001cf5e) list_single_recal_day_pane_g3_ParamLimits

0xe4bc,	// (0x0001cf5e) list_single_recal_day_pane_g3

0x761f,	// (0x000160c1) list_single_recal_day_pane_g4_ParamLimits

0x761f,	// (0x000160c1) list_single_recal_day_pane_g4

0xe4c8,	// (0x0001cf6a) list_single_recal_day_pane_g5_ParamLimits

0xe4c8,	// (0x0001cf6a) list_single_recal_day_pane_g5

0xe4d4,	// (0x0001cf76) list_single_recal_day_pane_g6_ParamLimits

0xe4d4,	// (0x0001cf76) list_single_recal_day_pane_g6

0x0004,

0xfcfb,	// (0x0001e79d) list_single_recal_day_pane_g_ParamLimits

0xfcfb,	// (0x0001e79d) list_single_recal_day_pane_g

0xe4e8,	// (0x0001cf8a) list_single_recal_day_pane_t1

0xe4fa,	// (0x0001cf9c) list_single_recal_day_pane_t2

0x0001,

0xfd06,	// (0x0001e7a8) list_single_recal_day_pane_t

0x7637,	// (0x000160d9) ncimui_query_button_pane_ParamLimits

0x7637,	// (0x000160d9) ncimui_query_button_pane

0x7647,	// (0x000160e9) ncimui_query_button_pane_t1_ParamLimits

0x7647,	// (0x000160e9) ncimui_query_button_pane_t1

0xe50c,	// (0x0001cfae) ncimui_query_button_pane_t2_ParamLimits

0xe50c,	// (0x0001cfae) ncimui_query_button_pane_t2

0x0001,

0xfd0b,	// (0x0001e7ad) ncimui_query_button_pane_t_ParamLimits

0xfd0b,	// (0x0001e7ad) ncimui_query_button_pane_t

0x765a,	// (0x000160fc) query_button_pane_ParamLimits

0x765a,	// (0x000160fc) query_button_pane

0x90dd,	// (0x00017b7f) bg_button_pane_cp0028

0xe51f,	// (0x0001cfc1) query_button_pane_t1

0x3112,	// (0x00011bb4) main_tport_pane_ParamLimits

0x7024,	// (0x00015ac6) bg_popup_window_pane_cp01_ParamLimits

0x7024,	// (0x00015ac6) bg_popup_window_pane_cp01

0x703f,	// (0x00015ae1) heading_pane_cp08_ParamLimits

0x703f,	// (0x00015ae1) heading_pane_cp08

0x7052,	// (0x00015af4) heading_pane_cp07_ParamLimits

0x7052,	// (0x00015af4) heading_pane_cp07

0x70f9,	// (0x00015b9b) cell_tport_appsw_pane_g2

0x0002,

0xfc57,	// (0x0001e6f9) cell_tport_appsw_pane_g

0xa7c1,	// (0x00019263) input_candi_list_open_g1

0x9f66,	// (0x00018a08) list_cale_time_pane_g6_ParamLimits

0x9f66,	// (0x00018a08) list_cale_time_pane_g6

0x3725,	// (0x000121c7) aid_size_touch_calib_1_ParamLimits

0x3725,	// (0x000121c7) aid_size_touch_calib_1

0x3737,	// (0x000121d9) aid_size_touch_calib_2_ParamLimits

0x3737,	// (0x000121d9) aid_size_touch_calib_2

0x374f,	// (0x000121f1) aid_size_touch_calib_3_ParamLimits

0x374f,	// (0x000121f1) aid_size_touch_calib_3

0x376d,	// (0x0001220f) aid_size_touch_calib_4_ParamLimits

0x376d,	// (0x0001220f) aid_size_touch_calib_4

0x3785,	// (0x00012227) main_touch_calib_button_group_pane_ParamLimits

0x3785,	// (0x00012227) main_touch_calib_button_group_pane

0x379d,	// (0x0001223f) main_touch_calib_pane_g1_ParamLimits

0x37af,	// (0x00012251) main_touch_calib_pane_g2_ParamLimits

0x37c1,	// (0x00012263) main_touch_calib_pane_g3_ParamLimits

0x37d3,	// (0x00012275) main_touch_calib_pane_g4_ParamLimits

0xf699,	// (0x0001e13b) main_touch_calib_pane_g_ParamLimits

0x37e5,	// (0x00012287) main_touch_calib_pane_t1_ParamLimits

0x37ff,	// (0x000122a1) main_touch_calib_pane_t2_ParamLimits

0x3819,	// (0x000122bb) main_touch_calib_pane_t3_ParamLimits

0x382d,	// (0x000122cf) main_touch_calib_pane_t4_ParamLimits

0x3841,	// (0x000122e3) main_touch_calib_pane_t5_ParamLimits

0xf6a2,	// (0x0001e144) main_touch_calib_pane_t_ParamLimits

0xc25e,	// (0x0001ad00) list_single_fp_cale_pane_g3_ParamLimits

0xc25e,	// (0x0001ad00) list_single_fp_cale_pane_g3

0x914c,	// (0x00017bee) bg_button_pane_cp012_ParamLimits

0x914c,	// (0x00017bee) bg_vkb2_func_pane_cp03_ParamLimits

0x57a4,	// (0x00014246) cell_vitu2_function_top_pane_g1_ParamLimits

0x914c,	// (0x00017bee) bg_vkb2_func_pane_cp04_ParamLimits

0x657e,	// (0x00015020) main_ncimui_button_group_pane_ParamLimits

0x657e,	// (0x00015020) main_ncimui_button_group_pane

0x65de,	// (0x00015080) main_ncimui_pane_t3_ParamLimits

0x65de,	// (0x00015080) main_ncimui_pane_t3

0xe128,	// (0x0001cbca) phacti_button_group_pane

0xe41e,	// (0x0001cec0) aid_size_list_single_double_ParamLimits

0x7599,	// (0x0001603b) popup_ezdial_listscroll_window_ParamLimits

0x75b5,	// (0x00016057) popup_number_entry_window_cp01_ParamLimits

0x766d,	// (0x0001610f) phacti_button_pane_ParamLimits

0x766d,	// (0x0001610f) phacti_button_pane

0x90dd,	// (0x00017b7f) bg_button_pane_cp14

0xe52d,	// (0x0001cfcf) phacti_button_pane_t1

0x767e,	// (0x00016120) main_touch_calib_button_pane_ParamLimits

0x767e,	// (0x00016120) main_touch_calib_button_pane

0x98d7,	// (0x00018379) bg_button_pane_cp18_ParamLimits

0x98d7,	// (0x00018379) bg_button_pane_cp18

0xe53b,	// (0x0001cfdd) main_touch_calib_button_pane_t1_ParamLimits

0xe53b,	// (0x0001cfdd) main_touch_calib_button_pane_t1

0xe551,	// (0x0001cff3) main_touch_calib_button_pane_t2_ParamLimits

0xe551,	// (0x0001cff3) main_touch_calib_button_pane_t2

0x0001,

0xfd10,	// (0x0001e7b2) main_touch_calib_button_pane_t_ParamLimits

0xfd10,	// (0x0001e7b2) main_touch_calib_button_pane_t

0x90dd,	// (0x00017b7f) cell_ncimui_button_pane

0x90dd,	// (0x00017b7f) bg_button_pane_cp032

0xe56f,	// (0x0001d011) cell_ncimui_button_pane_t1

0xc9d9,	// (0x0001b47b) image3_infobar_pane_ParamLimits

0xc9d9,	// (0x0001b47b) image3_infobar_pane

0x69f3,	// (0x00015495) fs_bigclock_status_pane_ParamLimits

0x69f3,	// (0x00015495) fs_bigclock_status_pane

0x6a00,	// (0x000154a2) main_fs_bigclock_clock_pane_ParamLimits

0x6a00,	// (0x000154a2) main_fs_bigclock_clock_pane

0x6a1e,	// (0x000154c0) main_fs_bigclock_indi_pane_ParamLimits

0x6a1e,	// (0x000154c0) main_fs_bigclock_indi_pane

0x6a50,	// (0x000154f2) main_fs_bigclock_swipe_pane_ParamLimits

0x6a50,	// (0x000154f2) main_fs_bigclock_swipe_pane

0x90dd,	// (0x00017b7f) main_fs_clock_dumped_data

0xdad1,	// (0x0001c573) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xdad1,	// (0x0001c573) list_single_fs_bigclock_indicator_pane_g1

0xdaec,	// (0x0001c58e) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xdaec,	// (0x0001c58e) list_single_fs_bigclock_indicator_pane_g2

0xdb06,	// (0x0001c5a8) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xdb06,	// (0x0001c5a8) list_single_fs_bigclock_indicator_pane_g3

0xdb20,	// (0x0001c5c2) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xdb20,	// (0x0001c5c2) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfbb1,	// (0x0001e653) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfbb1,	// (0x0001e653) list_single_fs_bigclock_indicator_pane_g

0xdb4b,	// (0x0001c5ed) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xdb4b,	// (0x0001c5ed) list_single_fs_bigclock_indicator_pane_t1

0xdb73,	// (0x0001c615) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xdb73,	// (0x0001c615) list_single_fs_bigclock_indicator_pane_t2

0xdb9b,	// (0x0001c63d) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xdb9b,	// (0x0001c63d) list_single_fs_bigclock_indicator_pane_t3

0xdbc3,	// (0x0001c665) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xdbc3,	// (0x0001c665) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfbbc,	// (0x0001e65e) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfbbc,	// (0x0001e65e) list_single_fs_bigclock_indicator_pane_t

0xe57d,	// (0x0001d01f) image3_infobar_fav_pane_ParamLimits

0xe57d,	// (0x0001d01f) image3_infobar_fav_pane

0xe58d,	// (0x0001d02f) image3_infobar_loc_pane_ParamLimits

0xe58d,	// (0x0001d02f) image3_infobar_loc_pane

0xe5a1,	// (0x0001d043) image3_infobar_time_pane_ParamLimits

0xe5a1,	// (0x0001d043) image3_infobar_time_pane

0x9b5c,	// (0x000185fe) image3_infobar_time_pane_g1

0xe5b1,	// (0x0001d053) image3_infobar_time_pane_t1

0x9b5c,	// (0x000185fe) image3_infobar_loc_pane_g1

0xe5bf,	// (0x0001d061) image3_infobar_loc_pane_g2

0x0001,

0xfd15,	// (0x0001e7b7) image3_infobar_loc_pane_g

0xe5c7,	// (0x0001d069) image3_infobar_loc_pane_t1

0x9b5c,	// (0x000185fe) image3_infobar_fav_pane_g1

0xe5d5,	// (0x0001d077) image3_infobar_fav_pane_g2

0x0001,

0xfd1a,	// (0x0001e7bc) image3_infobar_fav_pane_g

0xe5dd,	// (0x0001d07f) fs_bigclock_status_battery_pane

0xe5e6,	// (0x0001d088) fs_bigclock_status_signal_pane

0xe5ef,	// (0x0001d091) fs_bigclock_status_title_pane

0xe5f8,	// (0x0001d09a) fs_bigclock_status_signal_pane_g1

0xe601,	// (0x0001d0a3) fs_bigclock_status_signal_pane_g2

0x0001,

0xfd1f,	// (0x0001e7c1) fs_bigclock_status_signal_pane_g

0xe609,	// (0x0001d0ab) fs_bigclock_status_battery_pane_g1

0xe612,	// (0x0001d0b4) fs_bigclock_status_battery_pane_g2

0x0001,

0xfd24,	// (0x0001e7c6) fs_bigclock_status_battery_pane_g

0xe61a,	// (0x0001d0bc) fs_bigclock_status_title_pane_t1

0x7693,	// (0x00016135) main_fs_bigclock_clock_pane_g1

0x7693,	// (0x00016135) main_fs_bigclock_clock_pane_g2

0x76a4,	// (0x00016146) main_fs_bigclock_clock_pane_g3

0x76a4,	// (0x00016146) main_fs_bigclock_clock_pane_g4

0x0003,

0xfd29,	// (0x0001e7cb) main_fs_bigclock_clock_pane_g

0x76b7,	// (0x00016159) main_fs_bigclock_clock_pane_t1

0x76cd,	// (0x0001616f) main_fs_bigclock_clock_pane_t2

0x0001,

0xfd32,	// (0x0001e7d4) main_fs_bigclock_clock_pane_t

0xe628,	// (0x0001d0ca) list_single_fs_bigclock_indicator_pane_ParamLimits

0xe628,	// (0x0001d0ca) list_single_fs_bigclock_indicator_pane

0xe639,	// (0x0001d0db) list_single_fs_bigclock_pane_ParamLimits

0xe639,	// (0x0001d0db) list_single_fs_bigclock_pane

0xe65f,	// (0x0001d101) main_fs_bigclock_indicator_pane_t1

0xe66e,	// (0x0001d110) list_single_fs_bigclock_pane_g1

0xe676,	// (0x0001d118) list_single_fs_bigclock_pane_t1

0x9b5c,	// (0x000185fe) main_fs_bigclock_swipe_pane_g1

0xe6b9,	// (0x0001d15b) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfd43,	// (0x0001e7e5) main_fs_bigclock_swipe_pane_g

0xe6c1,	// (0x0001d163) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xe6c1,	// (0x0001d163) main_fs_bigclock_swipe_pane_t1

0x224a,	// (0x00010cec) call_type_pane_ParamLimits

0x90dd,	// (0x00017b7f) main_btmg_pane

0xe2fc,	// (0x0001cd9e) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe2fc,	// (0x0001cd9e) list_single_cale_mrui_row_pane_g2

0x0002,

0xfcb6,	// (0x0001e758) list_single_cale_mrui_row_pane_g_ParamLimits

0xfcb6,	// (0x0001e758) list_single_cale_mrui_row_pane_g

0xe479,	// (0x0001cf1b) list_recal_vselct_arw_lo_pane

0xe481,	// (0x0001cf23) list_recal_vselct_arw_up_pane

0xe489,	// (0x0001cf2b) list_recal_vselct_pane

0x7727,	// (0x000161c9) btmg_button_pane

0x7731,	// (0x000161d3) main_btmg_pane_g1

0x90dd,	// (0x00017b7f) bg_button_pane_cp044

0xe6de,	// (0x0001d180) btmg_button_pane_t1

0xba3b,	// (0x0001a4dd) aid_listscroll_gen

0x914c,	// (0x00017bee) main_cntbar_detail_pane

0xe035,	// (0x0001cad7) list_cmail_folder_pane

0xcef6,	// (0x0001b998) sp_fs_scroll_pane_cp03_ParamLimits

0x7175,	// (0x00015c17) list_single_fs_dyc_pane_cp01_ParamLimits

0x7175,	// (0x00015c17) list_single_fs_dyc_pane_cp01

0xe6ec,	// (0x0001d18e) aid_size_cmail_indent

0xe6f5,	// (0x0001d197) list_single_dyc_row_pane_cp01

0x7767,	// (0x00016209) cntbar_detail_list_pane_ParamLimits

0x7767,	// (0x00016209) cntbar_detail_list_pane

0x77b3,	// (0x00016255) main_cntbar_detail_cont_pane_ParamLimits

0x77b3,	// (0x00016255) main_cntbar_detail_cont_pane

0xcef6,	// (0x0001b998) scroll_pane_cp032_ParamLimits

0xcef6,	// (0x0001b998) scroll_pane_cp032

0x77c7,	// (0x00016269) cntbar_detail_list_event_pane_ParamLimits

0x77c7,	// (0x00016269) cntbar_detail_list_event_pane

0x7777,	// (0x00016219) cntbar_detail_list_shct_pane

0x9dbb,	// (0x0001885d) aid_list_gen

0xe6fe,	// (0x0001d1a0) aid_scroll

0xe707,	// (0x0001d1a9) aid_size_touch_scroll_bar

0x6bf8,	// (0x0001569a) aid_list_double

0xe710,	// (0x0001d1b2) aid_list_single

0xe710,	// (0x0001d1b2) aid_list_single_lg

0xe719,	// (0x0001d1bb) aid_list_z_g_a_sm

0xe721,	// (0x0001d1c3) aid_list_z_g_d

0xe729,	// (0x0001d1cb) aid_txt_z_prm

0x77d7,	// (0x00016279) aid_txt_z_prm_cp01

0x77e5,	// (0x00016287) aid_txt_z_sec

0x77f3,	// (0x00016295) main_cntbar_detail_cont_pane_g1_ParamLimits

0x77f3,	// (0x00016295) main_cntbar_detail_cont_pane_g1

0x7807,	// (0x000162a9) main_cntbar_detail_cont_pane_g2_ParamLimits

0x7807,	// (0x000162a9) main_cntbar_detail_cont_pane_g2

0x0001,

0xfd48,	// (0x0001e7ea) main_cntbar_detail_cont_pane_g_ParamLimits

0xfd48,	// (0x0001e7ea) main_cntbar_detail_cont_pane_g

0xe737,	// (0x0001d1d9) main_cntbar_detail_cont_pane_t1

0xe745,	// (0x0001d1e7) main_cntbar_detail_cont_pane_t2

0xe753,	// (0x0001d1f5) main_cntbar_detail_cont_pane_t3

0x0002,

0xfd4d,	// (0x0001e7ef) main_cntbar_detail_cont_pane_t

0x7817,	// (0x000162b9) cell_cntbar_detail_list_shct_pane_ParamLimits

0x7817,	// (0x000162b9) cell_cntbar_detail_list_shct_pane

0xe761,	// (0x0001d203) cntbar_detail_list_shct_pane_g1

0xe76a,	// (0x0001d20c) cntbar_detail_list_shct_pane_g2

0x0001,

0xfd54,	// (0x0001e7f6) cntbar_detail_list_shct_pane_g

0x782b,	// (0x000162cd) cntbar_detail_list_event_pane_g1_ParamLimits

0x782b,	// (0x000162cd) cntbar_detail_list_event_pane_g1

0x7837,	// (0x000162d9) cntbar_detail_list_event_pane_g2_ParamLimits

0x7837,	// (0x000162d9) cntbar_detail_list_event_pane_g2

0x0005,

0xfd59,	// (0x0001e7fb) cntbar_detail_list_event_pane_g_ParamLimits

0xfd59,	// (0x0001e7fb) cntbar_detail_list_event_pane_g

0x78a3,	// (0x00016345) cntbar_detail_list_event_pane_t1_ParamLimits

0x78a3,	// (0x00016345) cntbar_detail_list_event_pane_t1

0x78b8,	// (0x0001635a) cntbar_detail_list_event_pane_t2_ParamLimits

0x78b8,	// (0x0001635a) cntbar_detail_list_event_pane_t2

0x0002,

0xfd66,	// (0x0001e808) cntbar_detail_list_event_pane_t_ParamLimits

0xfd66,	// (0x0001e808) cntbar_detail_list_event_pane_t

0x9b5c,	// (0x000185fe) cell_cntbar_detail_list_shct_pane_g1

0xa5df,	// (0x00019081) navi_pane_mv_g3

0x914c,	// (0x00017bee) main_cntbar_detail_pane_ParamLimits

0x90dd,	// (0x00017b7f) main_notif_wgt_pane

0xc734,	// (0x0001b1d6) aid_tch_main_mp4_pane_g4

0xc966,	// (0x0001b408) popup_slider_window_cp02

0xe46f,	// (0x0001cf11) list_recal_day_event_pane

0x773b,	// (0x000161dd) cntbar_detail_btn_pane_ParamLimits

0x773b,	// (0x000161dd) cntbar_detail_btn_pane

0x7751,	// (0x000161f3) cntbar_detail_btn_pane_cp01_ParamLimits

0x7751,	// (0x000161f3) cntbar_detail_btn_pane_cp01

0x7777,	// (0x00016219) cntbar_detail_list_shct_pane_ParamLimits

0x7787,	// (0x00016229) cntbar_detail_pane_g1_ParamLimits

0x7787,	// (0x00016229) cntbar_detail_pane_g1

0x7797,	// (0x00016239) cntbar_detail_pane_t1_ParamLimits

0x7797,	// (0x00016239) cntbar_detail_pane_t1

0x7843,	// (0x000162e5) cntbar_detail_list_event_pane_g3_ParamLimits

0x7843,	// (0x000162e5) cntbar_detail_list_event_pane_g3

0x785b,	// (0x000162fd) cntbar_detail_list_event_pane_g4_ParamLimits

0x785b,	// (0x000162fd) cntbar_detail_list_event_pane_g4

0x7873,	// (0x00016315) cntbar_detail_list_event_pane_g5_ParamLimits

0x7873,	// (0x00016315) cntbar_detail_list_event_pane_g5

0x788b,	// (0x0001632d) cntbar_detail_list_event_pane_g6_ParamLimits

0x788b,	// (0x0001632d) cntbar_detail_list_event_pane_g6

0x78cd,	// (0x0001636f) cntbar_detail_list_event_pane_t3_ParamLimits

0x78cd,	// (0x0001636f) cntbar_detail_list_event_pane_t3

0x78df,	// (0x00016381) popup_notif_wgt_window_ParamLimits

0x78df,	// (0x00016381) popup_notif_wgt_window

0x78f8,	// (0x0001639a) popup_submenu_window_cp01_ParamLimits

0x78f8,	// (0x0001639a) popup_submenu_window_cp01

0x9b1c,	// (0x000185be) bg_popup_window_pane_cp10

0xe773,	// (0x0001d215) listscroll_notif_wgt_pane

0xe785,	// (0x0001d227) list_notif_wgt_window

0xe78e,	// (0x0001d230) scroll_pane_cp033

0x790e,	// (0x000163b0) list_notif_wgt_row_pane_ParamLimits

0x790e,	// (0x000163b0) list_notif_wgt_row_pane

0xe797,	// (0x0001d239) aid_size_list_notif_wgt_del

0xe7a4,	// (0x0001d246) list_notif_wgt_row_pane_g1

0xe7b0,	// (0x0001d252) list_notif_wgt_row_pane_g2

0xe7bf,	// (0x0001d261) list_notif_wgt_row_pane_g3

0x0002,

0xfd6d,	// (0x0001e80f) list_notif_wgt_row_pane_g

0xe7cc,	// (0x0001d26e) list_notif_wgt_row_pane_t1

0xe7e2,	// (0x0001d284) list_notif_wgt_row_pane_t2

0xe7f4,	// (0x0001d296) list_notif_wgt_row_pane_t3

0x0002,

0xfd74,	// (0x0001e816) list_notif_wgt_row_pane_t

0xcebb,	// (0x0001b95d) list_recal_day_event_pane_g1

0xe806,	// (0x0001d2a8) list_recal_day_event_pane_t1

0x90dd,	// (0x00017b7f) bg_button_pane_cp045

0xe815,	// (0x0001d2b7) cntbar_detail_btn_pane_t1

0xa726,	// (0x000191c8) main_callh_pane_ParamLimits

0xa726,	// (0x000191c8) main_callh_pane

0x90dd,	// (0x00017b7f) main_coverflow0_pane

0x90dd,	// (0x00017b7f) main_wgtman_pane

0x6a68,	// (0x0001550a) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x6a68,	// (0x0001550a) main_fs_bigclock_unlock_btn_pane

0x70f1,	// (0x00015b93) bg_button_pane_cp16

0x7101,	// (0x00015ba3) cell_tport_appsw_pane_g3

0x791e,	// (0x000163c0) cf0_flow_pane_ParamLimits

0x791e,	// (0x000163c0) cf0_flow_pane

0xe823,	// (0x0001d2c5) listscroll_cf0_pane

0xe82e,	// (0x0001d2d0) main_cf0_pane_g1

0x7933,	// (0x000163d5) main_cf0_pane_t1_ParamLimits

0x7933,	// (0x000163d5) main_cf0_pane_t1

0x794a,	// (0x000163ec) main_cf0_pane_t2_ParamLimits

0x794a,	// (0x000163ec) main_cf0_pane_t2

0x0001,

0xfd80,	// (0x0001e822) main_cf0_pane_t_ParamLimits

0xfd80,	// (0x0001e822) main_cf0_pane_t

0xe840,	// (0x0001d2e2) scroll_pane_cp11

0x7961,	// (0x00016403) cf0_flow_pane_g1

0x7969,	// (0x0001640b) cf0_flow_pane_g2

0x0001,

0xfd85,	// (0x0001e827) cf0_flow_pane_g

0x7971,	// (0x00016413) cf0_flow_pane_t1

0x90dd,	// (0x00017b7f) main_call6_pane

0x90dd,	// (0x00017b7f) main_calllock_pane

0x797f,	// (0x00016421) call6_btn_grp_pane_ParamLimits

0x797f,	// (0x00016421) call6_btn_grp_pane

0x7999,	// (0x0001643b) call6_pane_g1_ParamLimits

0x7999,	// (0x0001643b) call6_pane_g1

0x79af,	// (0x00016451) popup_call6_1st_window_ParamLimits

0x79af,	// (0x00016451) popup_call6_1st_window

0x79c0,	// (0x00016462) popup_call6_2nd_window_ParamLimits

0x79c0,	// (0x00016462) popup_call6_2nd_window

0x79d1,	// (0x00016473) cell_call6_btn_pane_ParamLimits

0x79d1,	// (0x00016473) cell_call6_btn_pane

0x9b1c,	// (0x000185be) bg_popup_call2_in_pane_cp03

0xe84b,	// (0x0001d2ed) popup_call6_1st_window_g1

0xe853,	// (0x0001d2f5) popup_call6_1st_window_g2

0xe85b,	// (0x0001d2fd) popup_call6_1st_window_g3

0x0002,

0xfd8a,	// (0x0001e82c) popup_call6_1st_window_g

0xe863,	// (0x0001d305) popup_call6_1st_window_t1

0xe872,	// (0x0001d314) popup_call6_1st_window_t2

0xe880,	// (0x0001d322) popup_call6_1st_window_t3

0x0002,

0xfd91,	// (0x0001e833) popup_call6_1st_window_t

0x9b1c,	// (0x000185be) bg_popup_call2_in_pane_cp04

0xe88e,	// (0x0001d330) popup_call6_2nd_window_g1

0xe896,	// (0x0001d338) popup_call6_2nd_window_g2

0xe89e,	// (0x0001d340) popup_call6_2nd_window_g3

0x0002,

0xfd98,	// (0x0001e83a) popup_call6_2nd_window_g

0xe8a6,	// (0x0001d348) popup_call6_2nd_window_t1

0x90dd,	// (0x00017b7f) bg_button_pane_cp15

0xe8b5,	// (0x0001d357) cell_call6_btn_pane_g1

0xe8be,	// (0x0001d360) cell_call6_btn_pane_t1

0x79e4,	// (0x00016486) listscroll_wgtman_pane_ParamLimits

0x79e4,	// (0x00016486) listscroll_wgtman_pane

0x7a05,	// (0x000164a7) wgtman_btn_pane_ParamLimits

0x7a05,	// (0x000164a7) wgtman_btn_pane

0xa3e6,	// (0x00018e88) aid_scroll_copy1

0xe8cd,	// (0x0001d36f) list_wgtman_pane

0x7a48,	// (0x000164ea) wgtman_btn_pane_g1_ParamLimits

0x7a48,	// (0x000164ea) wgtman_btn_pane_g1

0x7a74,	// (0x00016516) wgtman_btn_pane_t1_ParamLimits

0x7a74,	// (0x00016516) wgtman_btn_pane_t1

0xe8d7,	// (0x0001d379) wgtman_btn_pane_t2_ParamLimits

0xe8d7,	// (0x0001d379) wgtman_btn_pane_t2

0x0001,

0xfd9f,	// (0x0001e841) wgtman_btn_pane_t_ParamLimits

0xfd9f,	// (0x0001e841) wgtman_btn_pane_t

0x7ab1,	// (0x00016553) listrow_wgtman_pane_ParamLimits

0x7ab1,	// (0x00016553) listrow_wgtman_pane

0x7ac3,	// (0x00016565) listrow_wgtman_pane_g1

0x7ad0,	// (0x00016572) listrow_wgtman_pane_g2

0x0001,

0xfda4,	// (0x0001e846) listrow_wgtman_pane_g

0x7aee,	// (0x00016590) listrow_wgtman_pane_t1

0x7b06,	// (0x000165a8) listrow_wgtman_pane_t2

0x0001,

0xfda9,	// (0x0001e84b) listrow_wgtman_pane_t

0x7b2c,	// (0x000165ce) wait_bar_pane_cp09

0xe8ee,	// (0x0001d390) main_calllock_btn_pane

0xe8f8,	// (0x0001d39a) main_calllock_pane_g1

0x90dd,	// (0x00017b7f) bg_button_pane_cp17

0xe8b5,	// (0x0001d357) main_calllock_btn_pane_g1

0xe900,	// (0x0001d3a2) main_calllock_btn_pane_t1

0x90dd,	// (0x00017b7f) main_dialer3_pane

0x90dd,	// (0x00017b7f) main_fmrd2_pane

0x9b5c,	// (0x000185fe) main_fs_bigclock_unlock_btn_pane_g1

0x7b46,	// (0x000165e8) main_fs_bigclock_unlock_btn_pane_t1

0x7b54,	// (0x000165f6) area_fmrd2_info_pane_ParamLimits

0x7b54,	// (0x000165f6) area_fmrd2_info_pane

0x7b65,	// (0x00016607) area_fmrd2_visual_pane_ParamLimits

0x7b65,	// (0x00016607) area_fmrd2_visual_pane

0x7b73,	// (0x00016615) fmrd2_indi_pane_ParamLimits

0x7b73,	// (0x00016615) fmrd2_indi_pane

0x7b80,	// (0x00016622) area_fmrd2_visual_pane_g1

0x7b88,	// (0x0001662a) area_fmrd2_visual_pane_t1

0x7b98,	// (0x0001663a) area_fmrd2_visual_pane_t2

0x7ba8,	// (0x0001664a) area_fmrd2_visual_pane_t3

0x0002,

0xfdb3,	// (0x0001e855) area_fmrd2_visual_pane_t

0x7bb8,	// (0x0001665a) area_fmrd2_info_pane_g1

0x7bc0,	// (0x00016662) area_fmrd2_info_pane_t1

0x7bd0,	// (0x00016672) area_fmrd2_info_pane_t2

0x7be0,	// (0x00016682) area_fmrd2_info_pane_t3

0x7bf0,	// (0x00016692) area_fmrd2_info_pane_t4

0x0003,

0xfdba,	// (0x0001e85c) area_fmrd2_info_pane_t

0x7bfe,	// (0x000166a0) fmrd2_indi_pane_t1

0x7c0e,	// (0x000166b0) fmrd2_indi_pane_t2

0x7c1e,	// (0x000166c0) fmrd2_indi_pane_t3

0x0002,

0xfdc3,	// (0x0001e865) fmrd2_indi_pane_t

0xdb2f,	// (0x0001c5d1) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xdb2f,	// (0x0001c5d1) list_single_fs_bigclock_indicator_pane_g5

0xdbe0,	// (0x0001c682) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xdbe0,	// (0x0001c682) list_single_fs_bigclock_indicator_pane_t5

0x72e7,	// (0x00015d89) aid_cell_bcale_month_pane_ParamLimits

0x72e7,	// (0x00015d89) aid_cell_bcale_month_pane

0x7305,	// (0x00015da7) bcale_month_pane_ParamLimits

0x7305,	// (0x00015da7) bcale_month_pane

0x7329,	// (0x00015dcb) bcale_preview_pane_ParamLimits

0x7329,	// (0x00015dcb) bcale_preview_pane

0xe676,	// (0x0001d118) list_single_fs_bigclock_pane_t1_ParamLimits

0xe695,	// (0x0001d137) list_single_fs_bigclock_pane_t2_ParamLimits

0xe695,	// (0x0001d137) list_single_fs_bigclock_pane_t2

0x0001,

0xfd3e,	// (0x0001e7e0) list_single_fs_bigclock_pane_t_ParamLimits

0xfd3e,	// (0x0001e7e0) list_single_fs_bigclock_pane_t

0x7b3e,	// (0x000165e0) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfdae,	// (0x0001e850) main_fs_bigclock_unlock_btn_pane_g

0x7c2e,	// (0x000166d0) aid_dia3_key_size_ParamLimits

0x7c2e,	// (0x000166d0) aid_dia3_key_size

0x7c3d,	// (0x000166df) aid_dia3_listrow_size_ParamLimits

0x7c3d,	// (0x000166df) aid_dia3_listrow_size

0x7c52,	// (0x000166f4) dia3_keypad_fun_pane_ParamLimits

0x7c52,	// (0x000166f4) dia3_keypad_fun_pane

0x7c6e,	// (0x00016710) dia3_keypad_num_pane_ParamLimits

0x7c6e,	// (0x00016710) dia3_keypad_num_pane

0x7c89,	// (0x0001672b) dia3_listscroll_pane_ParamLimits

0x7c89,	// (0x0001672b) dia3_listscroll_pane

0x7c9c,	// (0x0001673e) dia3_numentry_pane_ParamLimits

0x7c9c,	// (0x0001673e) dia3_numentry_pane

0xe90f,	// (0x0001d3b1) dia3_list_pane

0xe91a,	// (0x0001d3bc) scroll_pane_cp12

0x90dd,	// (0x00017b7f) bg_dia3_numentry_pane

0x7cb4,	// (0x00016756) dia3_numentry_pane_t1

0x7cc3,	// (0x00016765) cell_dia3_key_num_pane

0x7ccb,	// (0x0001676d) cell_dia3_key0_fun_pane_ParamLimits

0x7ccb,	// (0x0001676d) cell_dia3_key0_fun_pane

0x7cdf,	// (0x00016781) cell_dia3_key1_fun_pane_ParamLimits

0x7cdf,	// (0x00016781) cell_dia3_key1_fun_pane

0x7cf7,	// (0x00016799) dia3_listrow_pane

0xd882,	// (0x0001c324) bg_dia3_numentry_pane_g1

0x90dd,	// (0x00017b7f) bg_button_pane_cp21

0xe925,	// (0x0001d3c7) cell_dia3_key_num_pane_t1

0xe933,	// (0x0001d3d5) cell_dia3_key_num_pane_t2

0xe942,	// (0x0001d3e4) cell_dia3_key_num_pane_t3

0xe951,	// (0x0001d3f3) cell_dia3_key_num_pane_t4

0x0003,

0xfdca,	// (0x0001e86c) cell_dia3_key_num_pane_t

0x90dd,	// (0x00017b7f) bg_button_pane_cp19

0x7d09,	// (0x000167ab) cell_dia3_key0_fun_pane_g1

0x90dd,	// (0x00017b7f) bg_button_pane_cp20

0x7d11,	// (0x000167b3) cell_dia3_key1_fun_pane_g1

0x7d19,	// (0x000167bb) area_left_week_number_pane

0x7d25,	// (0x000167c7) area_top_day_name_pane

0x7d38,	// (0x000167da) frame_month_view_pane

0xe960,	// (0x0001d402) grid_month_view_pane

0x7d4b,	// (0x000167ed) cell_top_day_name_pane_ParamLimits

0x7d4b,	// (0x000167ed) cell_top_day_name_pane

0x7d78,	// (0x0001681a) cell_area_left_week_number_pane_ParamLimits

0x7d78,	// (0x0001681a) cell_area_left_week_number_pane

0x7d8c,	// (0x0001682e) cell_month_view_pane_ParamLimits

0x7d8c,	// (0x0001682e) cell_month_view_pane

0xe96e,	// (0x0001d410) frm_month_g1

0x7db9,	// (0x0001685b) frm_month_g2

0x7dcc,	// (0x0001686e) frm_month_g3

0x7ddf,	// (0x00016881) frm_month_g4

0x7df2,	// (0x00016894) frm_month_g5

0x7e05,	// (0x000168a7) frm_month_g6

0x7e18,	// (0x000168ba) frm_month_g7

0xe97b,	// (0x0001d41d) frm_month_g8

0x7e2b,	// (0x000168cd) frm_month_g9

0x7e3b,	// (0x000168dd) frm_month_g10

0x7e4b,	// (0x000168ed) frm_month_g11

0x7e5b,	// (0x000168fd) frm_month_g12

0x7e6d,	// (0x0001690f) frm_month_g13

0x7e7f,	// (0x00016921) frm_month_g14

0x7e93,	// (0x00016935) frm_month_g15

0x7ea7,	// (0x00016949) frm_month_g16

0x000f,

0xfdd3,	// (0x0001e875) frm_month_g

0xe988,	// (0x0001d42a) cell_top_day_name_pane_t1

0x7ebb,	// (0x0001695d) cell_area_left_week_number_pane_g1

0x7ec7,	// (0x00016969) cell_area_left_week_number_pane_t1

0x9843,	// (0x000182e5) cell_month_view_pane_g1

0x7eda,	// (0x0001697c) cell_month_view_pane_t1

0x90dd,	// (0x00017b7f) main_fps_pane

0xde41,	// (0x0001c8e3) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xde41,	// (0x0001c8e3) cmail_ddmenu_btn02_pane_cp1

0xde5d,	// (0x0001c8ff) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xde5d,	// (0x0001c8ff) cmail_ddmenu_btn02_pane_cp2

0x75ef,	// (0x00016091) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x75ef,	// (0x00016091) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfcf1,	// (0x0001e793) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfcf1,	// (0x0001e793) cmail_ddmenu_btn02_pane_g

0x760d,	// (0x000160af) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x760d,	// (0x000160af) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfcf6,	// (0x0001e798) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfcf6,	// (0x0001e798) cmail_ddmenu_btn02_pane_t

0x7eed,	// (0x0001698f) fps_text_pane_ParamLimits

0x7eed,	// (0x0001698f) fps_text_pane

0x7f04,	// (0x000169a6) main_fps_pane_g1_ParamLimits

0x7f04,	// (0x000169a6) main_fps_pane_g1

0x7f1e,	// (0x000169c0) wait_bar_pane_cp010_ParamLimits

0x7f1e,	// (0x000169c0) wait_bar_pane_cp010

0x7f2f,	// (0x000169d1) fps_text_pane_t1_ParamLimits

0x7f2f,	// (0x000169d1) fps_text_pane_t1

0xe99b,	// (0x0001d43d) cam4_image_uncrop_pane_g1

0xe9a4,	// (0x0001d446) cam4_image_uncrop_pane_g2

0x4c0d,	// (0x000136af) cam4_image_uncrop_pane_g3

0x4c16,	// (0x000136b8) cam4_image_uncrop_pane_g4

0x0003,

0xf835,	// (0x0001e2d7) cam4_image_uncrop_pane_g

0x7cf7,	// (0x00016799) dia3_listrow_pane_ParamLimits

0x90dd,	// (0x00017b7f) main_phob2_pane

0x70c2,	// (0x00015b64) cell_tport_appsw_pane_cp02_ParamLimits

0x70c2,	// (0x00015b64) cell_tport_appsw_pane_cp02

0x70d6,	// (0x00015b78) cell_tport_appsw_pane_cp03_ParamLimits

0x70d6,	// (0x00015b78) cell_tport_appsw_pane_cp03

0x90dd,	// (0x00017b7f) phob2_contact_card_pane

0x90dd,	// (0x00017b7f) phob2_listscroll_pane

0xe9ad,	// (0x0001d44f) phob2_list_pane

0xe9b5,	// (0x0001d457) scroll_pane_cp034

0x7f47,	// (0x000169e9) phob2_cc_data_pane_ParamLimits

0x7f47,	// (0x000169e9) phob2_cc_data_pane

0x7f66,	// (0x00016a08) phob2_cc_listscroll_pane_ParamLimits

0x7f66,	// (0x00016a08) phob2_cc_listscroll_pane

0x7ab1,	// (0x00016553) list_double_large_graphic_phob2_pane_ParamLimits

0x7ab1,	// (0x00016553) list_double_large_graphic_phob2_pane

0x7f84,	// (0x00016a26) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x7f84,	// (0x00016a26) list_double_large_graphic_phob2_pane_g1

0x7f91,	// (0x00016a33) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x7f91,	// (0x00016a33) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfdf4,	// (0x0001e896) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfdf4,	// (0x0001e896) list_double_large_graphic_phob2_pane_g

0x7fb7,	// (0x00016a59) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x7fb7,	// (0x00016a59) list_double_large_graphic_phob2_pane_t1

0x7fcc,	// (0x00016a6e) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x7fcc,	// (0x00016a6e) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfdfd,	// (0x0001e89f) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfdfd,	// (0x0001e89f) list_double_large_graphic_phob2_pane_t

0x90dd,	// (0x00017b7f) list_highlight_pane_cp024

0xe9bd,	// (0x0001d45f) phob2_cc_button_pane

0x7fe1,	// (0x00016a83) phob2_cc_data_pane_g1_ParamLimits

0x7fe1,	// (0x00016a83) phob2_cc_data_pane_g1

0x7ff8,	// (0x00016a9a) phob2_cc_data_pane_g2_ParamLimits

0x7ff8,	// (0x00016a9a) phob2_cc_data_pane_g2

0x0001,

0xfe02,	// (0x0001e8a4) phob2_cc_data_pane_g_ParamLimits

0xfe02,	// (0x0001e8a4) phob2_cc_data_pane_g

0x800a,	// (0x00016aac) phob2_cc_data_pane_t1_ParamLimits

0x800a,	// (0x00016aac) phob2_cc_data_pane_t1

0x8022,	// (0x00016ac4) phob2_cc_data_pane_t2_ParamLimits

0x8022,	// (0x00016ac4) phob2_cc_data_pane_t2

0x803a,	// (0x00016adc) phob2_cc_data_pane_t3_ParamLimits

0x803a,	// (0x00016adc) phob2_cc_data_pane_t3

0x0002,

0xfe07,	// (0x0001e8a9) phob2_cc_data_pane_t_ParamLimits

0xfe07,	// (0x0001e8a9) phob2_cc_data_pane_t

0xe9c5,	// (0x0001d467) phob2_cc_list_pane_ParamLimits

0xe9c5,	// (0x0001d467) phob2_cc_list_pane

0xcf78,	// (0x0001ba1a) scroll_pane_cp035_ParamLimits

0xcf78,	// (0x0001ba1a) scroll_pane_cp035

0x914c,	// (0x00017bee) bg_button_pane_cp033

0xe9d1,	// (0x0001d473) phob2_cc_button_pane_g1

0xe9dd,	// (0x0001d47f) phob2_cc_button_pane_t1

0xe9f2,	// (0x0001d494) phob2_cc_button_pane_t2

0x0001,

0xfe0e,	// (0x0001e8b0) phob2_cc_button_pane_t

0x8052,	// (0x00016af4) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x8052,	// (0x00016af4) list_double_large_graphic_phob2_cc_pane

0x8082,	// (0x00016b24) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x8082,	// (0x00016b24) list_double_large_graphic_phob2_cc_pane_g1

0x808e,	// (0x00016b30) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x808e,	// (0x00016b30) list_double_large_graphic_phob2_cc_pane_g2

0x809a,	// (0x00016b3c) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x809a,	// (0x00016b3c) list_double_large_graphic_phob2_cc_pane_g3

0x80a6,	// (0x00016b48) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x80a6,	// (0x00016b48) list_double_large_graphic_phob2_cc_pane_g4

0x80b2,	// (0x00016b54) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x80b2,	// (0x00016b54) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfe13,	// (0x0001e8b5) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfe13,	// (0x0001e8b5) list_double_large_graphic_phob2_cc_pane_g

0x80be,	// (0x00016b60) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x80be,	// (0x00016b60) list_double_large_graphic_phob2_cc_pane_t1

0x80e7,	// (0x00016b89) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x80e7,	// (0x00016b89) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfe1e,	// (0x0001e8c0) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfe1e,	// (0x0001e8c0) list_double_large_graphic_phob2_cc_pane_t

0xea04,	// (0x0001d4a6) list_highlight_pane_cp025_ParamLimits

0xea04,	// (0x0001d4a6) list_highlight_pane_cp025

0x914c,	// (0x00017bee) bg_button_pane_cp033_ParamLimits

0xe9d1,	// (0x0001d473) phob2_cc_button_pane_g1_ParamLimits

0xe9dd,	// (0x0001d47f) phob2_cc_button_pane_t1_ParamLimits

0xe9f2,	// (0x0001d494) phob2_cc_button_pane_t2_ParamLimits

0xfe0e,	// (0x0001e8b0) phob2_cc_button_pane_t_ParamLimits

0x068c,	// (0x0000f12e) popup_wgtman_window

0xccf8,	// (0x0001b79a) scroll_pane_cp038

0x7a2a,	// (0x000164cc) wgtman_btn_pane_cp_01_ParamLimits

0x7a2a,	// (0x000164cc) wgtman_btn_pane_cp_01

0xea12,	// (0x0001d4b4) wgtman_content_pane

0xea1b,	// (0x0001d4bd) wgtman_heading_pane

0x90dd,	// (0x00017b7f) bg_heading_pane_cp02

0xea24,	// (0x0001d4c6) wgtman_heading_pane_g1

0xea2c,	// (0x0001d4ce) wgtman_heading_pane_t1

0xea3a,	// (0x0001d4dc) scroll_pane_cp036

0xea42,	// (0x0001d4e4) wgtman_list_pane

0xea4a,	// (0x0001d4ec) wgtman_list_pane_t1_ParamLimits

0xea4a,	// (0x0001d4ec) wgtman_list_pane_t1

0xca89,	// (0x0001b52b) cam4_grid_pane

0x5931,	// (0x000143d3) bg_button_pane_cp015_ParamLimits

0x5942,	// (0x000143e4) bg_button_pane_cp016_ParamLimits

0x594e,	// (0x000143f0) bg_button_pane_cp017_ParamLimits

0x59a2,	// (0x00014444) popup_vitu2_query_window_g3_ParamLimits

0x59a2,	// (0x00014444) popup_vitu2_query_window_g3

0x5a43,	// (0x000144e5) popup_vitu2_query_window_t6_ParamLimits

0x5a43,	// (0x000144e5) popup_vitu2_query_window_t6

0x5a6e,	// (0x00014510) popup_vitu2_query_window_t7_ParamLimits

0x5a6e,	// (0x00014510) popup_vitu2_query_window_t7

0xe99b,	// (0x0001d43d) cam4_grid_pane_g1

0xe9a4,	// (0x0001d446) cam4_grid_pane_g2

0xea64,	// (0x0001d506) cam4_grid_pane_g3

0xea6d,	// (0x0001d50f) cam4_grid_pane_g4

0x0003,

0xfe23,	// (0x0001e8c5) cam4_grid_pane_g

0x1239,	// (0x0000fcdb) aid_placing_vt_slider_lsc_ParamLimits

0x1544,	// (0x0000ffe6) vidtel_button_pane_ParamLimits

0x1544,	// (0x0000ffe6) vidtel_button_pane

0x90dd,	// (0x00017b7f) bg_button_pane_cp034

0xea78,	// (0x0001d51a) vidtel_button_pane_g1

0xea80,	// (0x0001d522) vidtel_button_pane_t1

0xce6f,	// (0x0001b911) aid_size_vtel_slider_touch

0xcf78,	// (0x0001ba1a) scroll_pane_cp039

0x675c,	// (0x000151fe) ncim_query_button_pane_cp01_ParamLimits

0x677b,	// (0x0001521d) ncimui_query_pane_g1_ParamLimits

0x914c,	// (0x00017bee) input_focus_pane_cp012_ParamLimits

0xd8c0,	// (0x0001c362) ncim_query_entry_pane_t1_ParamLimits

0xcf78,	// (0x0001ba1a) scroll_pane_cp039_ParamLimits

0xa4ca,	// (0x00018f6c) navi_pane_bcale_mc_g1

0xa4d2,	// (0x00018f74) navi_pane_bcale_mc_t1

0xde91,	// (0x0001c933) main_sp_fs_email_pane_g1

0xde9d,	// (0x0001c93f) main_sp_fs_email_pane_g2

0x0001,

0xfc26,	// (0x0001e6c8) main_sp_fs_email_pane_g

0xe308,	// (0x0001cdaa) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe308,	// (0x0001cdaa) list_single_cale_mrui_row_pane_g3

0x762d,	// (0x000160cf) list_single_recal_day_pane_g5_event_pane

0xe4e0,	// (0x0001cf82) list_single_recal_day_pane_g7

0xea96,	// (0x0001d538) list_recal_day_event_pane_cp01

0xea9f,	// (0x0001d541) list_recal_vselct_arw_lo_pane_cp01

0xeaa7,	// (0x0001d549) list_recal_vselct_arw_up_pane_cp01

0xeaaf,	// (0x0001d551) list_recal_vselct_pane_cp01

0xcebb,	// (0x0001b95d) list_recal_day_event_pane_cp01_g1

0xeab9,	// (0x0001d55b) list_recal_day_event_pane_cp01_t1

0xe4e8,	// (0x0001cf8a) list_single_recal_day_pane_t1_ParamLimits

0xe4fa,	// (0x0001cf9c) list_single_recal_day_pane_t2_ParamLimits

0xfd06,	// (0x0001e7a8) list_single_recal_day_pane_t_ParamLimits

0x97c8,	// (0x0001826a) bg_notes_pane_ParamLimits

0x989b,	// (0x0001833d) list_notes_pane_ParamLimits

0x0892,	// (0x0000f334) scroll_pane_cp06_ParamLimits

0x98d7,	// (0x00018379) main_notes_pane_ParamLimits

0x914c,	// (0x00017bee) main_welc_pane

0x813d,	// (0x00016bdf) main_welc_body_pane_ParamLimits

0x813d,	// (0x00016bdf) main_welc_body_pane

0x815b,	// (0x00016bfd) main_welc_opti_pane_ParamLimits

0x815b,	// (0x00016bfd) main_welc_opti_pane

0x81d9,	// (0x00016c7b) main_welc_pane_t1_ParamLimits

0x81d9,	// (0x00016c7b) main_welc_pane_t1

0x83d1,	// (0x00016e73) main_welc_body_row_pane_ParamLimits

0x83d1,	// (0x00016e73) main_welc_body_row_pane

0x9835,	// (0x000182d7) main_welc_opti_row_pane_ParamLimits

0x9835,	// (0x000182d7) main_welc_opti_row_pane

0xead7,	// (0x0001d579) main_welc_opti_row_pane_g1

0x83e5,	// (0x00016e87) main_welc_opti_row_pane_t1

0xeadf,	// (0x0001d581) main_welc_body_row_pane_t1

0xe77d,	// (0x0001d21f) popup_notif_wgt_heading_pane

0xe797,	// (0x0001d239) aid_size_list_notif_wgt_del_ParamLimits

0xe7a4,	// (0x0001d246) list_notif_wgt_row_pane_g1_ParamLimits

0xe7b0,	// (0x0001d252) list_notif_wgt_row_pane_g2_ParamLimits

0xe7bf,	// (0x0001d261) list_notif_wgt_row_pane_g3_ParamLimits

0xfd6d,	// (0x0001e80f) list_notif_wgt_row_pane_g_ParamLimits

0xe7cc,	// (0x0001d26e) list_notif_wgt_row_pane_t1_ParamLimits

0xe7e2,	// (0x0001d284) list_notif_wgt_row_pane_t2_ParamLimits

0xe7f4,	// (0x0001d296) list_notif_wgt_row_pane_t3_ParamLimits

0xfd74,	// (0x0001e816) list_notif_wgt_row_pane_t_ParamLimits

0x7ac3,	// (0x00016565) listrow_wgtman_pane_g1_ParamLimits

0x7ad0,	// (0x00016572) listrow_wgtman_pane_g2_ParamLimits

0xfda4,	// (0x0001e846) listrow_wgtman_pane_g_ParamLimits

0x7aee,	// (0x00016590) listrow_wgtman_pane_t1_ParamLimits

0x7b06,	// (0x000165a8) listrow_wgtman_pane_t2_ParamLimits

0xfda9,	// (0x0001e84b) listrow_wgtman_pane_t_ParamLimits

0x7b2c,	// (0x000165ce) wait_bar_pane_cp09_ParamLimits

0x90dd,	// (0x00017b7f) bg_popup_heading_pane_cp02

0xeaee,	// (0x0001d590) popup_notif_wgt_heading_pane_g1

0xeaf6,	// (0x0001d598) popup_notif_wgt_heading_pane_t1

0x90dd,	// (0x00017b7f) main_vids_pane

0x90dd,	// (0x00017b7f) vids_listscroll_pane

0x83f4,	// (0x00016e96) scroll_pane_cp040

0x90dd,	// (0x00017b7f) vids_list_pane

0x83ff,	// (0x00016ea1) vids_list_double_pane_ParamLimits

0x83ff,	// (0x00016ea1) vids_list_double_pane

0x8410,	// (0x00016eb2) vids_list_double_pane_g1

0x8419,	// (0x00016ebb) vids_list_double_pane_t1

0x8429,	// (0x00016ecb) vids_list_double_pane_t2

0x0001,

0xfe42,	// (0x0001e8e4) vids_list_double_pane_t

0x914c,	// (0x00017bee) main_ncimui_pane_ParamLimits

0x6592,	// (0x00015034) main_ncimui_pane_g1_ParamLimits

0x659e,	// (0x00015040) main_ncimui_pane_g2_ParamLimits

0x659e,	// (0x00015040) main_ncimui_pane_g2

0x0001,

0xfb27,	// (0x0001e5c9) main_ncimui_pane_g_ParamLimits

0xfb27,	// (0x0001e5c9) main_ncimui_pane_g

0x8176,	// (0x00016c18) main_welc_pane_g1_ParamLimits

0x8176,	// (0x00016c18) main_welc_pane_g1

0x818b,	// (0x00016c2d) main_welc_pane_g2_ParamLimits

0x818b,	// (0x00016c2d) main_welc_pane_g2

0x0003,

0xfe2c,	// (0x0001e8ce) main_welc_pane_g_ParamLimits

0xfe2c,	// (0x0001e8ce) main_welc_pane_g

0x97c8,	// (0x0001826a) listscroll_mce_pane_ParamLimits

0xa61f,	// (0x000190c1) wait_bar_pane_cp10

0xba43,	// (0x0001a4e5) main_cale_day_pane_ParamLimits

0xba43,	// (0x0001a4e5) main_cale_week_pane_ParamLimits

0x97c8,	// (0x0001826a) main_messa_pane_ParamLimits

0x4028,	// (0x00012aca) main_clock2_btn_pane_ParamLimits

0x4028,	// (0x00012aca) main_clock2_btn_pane

0xc2d8,	// (0x0001ad7a) main_clock2_btn_pane_cp01_ParamLimits

0xc2d8,	// (0x0001ad7a) main_clock2_btn_pane_cp01

0xe294,	// (0x0001cd36) list_cale_mrui_pane_ParamLimits

0xe838,	// (0x0001d2da) main_cf0_pane_g2

0x0001,

0xfd7b,	// (0x0001e81d) main_cf0_pane_g

0x7d19,	// (0x000167bb) area_left_week_number_pane_ParamLimits

0x7d25,	// (0x000167c7) area_top_day_name_pane_ParamLimits

0x7d38,	// (0x000167da) frame_month_view_pane_ParamLimits

0xe960,	// (0x0001d402) grid_month_view_pane_ParamLimits

0xe96e,	// (0x0001d410) frm_month_g1_ParamLimits

0x7db9,	// (0x0001685b) frm_month_g2_ParamLimits

0x7dcc,	// (0x0001686e) frm_month_g3_ParamLimits

0x7ddf,	// (0x00016881) frm_month_g4_ParamLimits

0x7df2,	// (0x00016894) frm_month_g5_ParamLimits

0x7e05,	// (0x000168a7) frm_month_g6_ParamLimits

0x7e18,	// (0x000168ba) frm_month_g7_ParamLimits

0xe97b,	// (0x0001d41d) frm_month_g8_ParamLimits

0x7e2b,	// (0x000168cd) frm_month_g9_ParamLimits

0x7e3b,	// (0x000168dd) frm_month_g10_ParamLimits

0x7e4b,	// (0x000168ed) frm_month_g11_ParamLimits

0x7e5b,	// (0x000168fd) frm_month_g12_ParamLimits

0x7e6d,	// (0x0001690f) frm_month_g13_ParamLimits

0x7e7f,	// (0x00016921) frm_month_g14_ParamLimits

0x7e93,	// (0x00016935) frm_month_g15_ParamLimits

0x7ea7,	// (0x00016949) frm_month_g16_ParamLimits

0xfdd3,	// (0x0001e875) frm_month_g_ParamLimits

0xe988,	// (0x0001d42a) cell_top_day_name_pane_t1_ParamLimits

0x7ebb,	// (0x0001695d) cell_area_left_week_number_pane_g1_ParamLimits

0x7ec7,	// (0x00016969) cell_area_left_week_number_pane_t1_ParamLimits

0x9843,	// (0x000182e5) cell_month_view_pane_g1_ParamLimits

0x7eda,	// (0x0001697c) cell_month_view_pane_t1_ParamLimits

0x97c0,	// (0x00018262) main_clock2_btn_pane_g1

0xeb04,	// (0x0001d5a6) main_clock2_btn_pane_t1

0x914c,	// (0x00017bee) listscroll_cmail_pane_ParamLimits

0xde91,	// (0x0001c933) main_sp_fs_email_pane_g1_ParamLimits

0xde9d,	// (0x0001c93f) main_sp_fs_email_pane_g2_ParamLimits

0xfc26,	// (0x0001e6c8) main_sp_fs_email_pane_g_ParamLimits

0xe450,	// (0x0001cef2) list_recal_day_pane_ParamLimits

0xe461,	// (0x0001cf03) mian_recal_day_pane_t1

0x6f65,	// (0x00015a07) list_single_dyc_row_text_pane_t4_ParamLimits

0x6f65,	// (0x00015a07) list_single_dyc_row_text_pane_t4

0x6fae,	// (0x00015a50) list_single_dyc_row_text_pane_t5_ParamLimits

0x6fae,	// (0x00015a50) list_single_dyc_row_text_pane_t5

0xdf65,	// (0x0001ca07) list_single_dyc_row_text_pane_t6_ParamLimits

0xdf65,	// (0x0001ca07) list_single_dyc_row_text_pane_t6

0x9f45,	// (0x000189e7) aid_mgn_list_cale_time_pane

0x914c,	// (0x00017bee) main_gallery2_pane_ParamLimits

0xc2ee,	// (0x0001ad90) main_clock2_pane_cp01_t1

0xc2fe,	// (0x0001ada0) main_clock2_pane_cp01_t3

0x0001,

0xf70c,	// (0x0001e1ae) main_clock2_pane_cp01_t

0x0c2f,	// (0x0000f6d1) cale_week_scroll_pane_g16_ParamLimits

0x0c2f,	// (0x0000f6d1) cale_week_scroll_pane_g16

0x9b1c,	// (0x000185be) vorec_slider_pane

0xea80,	// (0x0001d522) vidtel_button_pane_t1_ParamLimits

0x7693,	// (0x00016135) main_fs_bigclock_clock_pane_g1_ParamLimits

0x7693,	// (0x00016135) main_fs_bigclock_clock_pane_g2_ParamLimits

0x76a4,	// (0x00016146) main_fs_bigclock_clock_pane_g3_ParamLimits

0x76a4,	// (0x00016146) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfd29,	// (0x0001e7cb) main_fs_bigclock_clock_pane_g_ParamLimits

0x76b7,	// (0x00016159) main_fs_bigclock_clock_pane_t1_ParamLimits

0x76cd,	// (0x0001616f) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfd32,	// (0x0001e7d4) main_fs_bigclock_clock_pane_t_ParamLimits

0x38fd,	// (0x0001239f) main_mup3_lyrics_pane_ParamLimits

0x38fd,	// (0x0001239f) main_mup3_lyrics_pane

0x8451,	// (0x00016ef3) main_mup3_lyrics_pane_t1_ParamLimits

0x8451,	// (0x00016ef3) main_mup3_lyrics_pane_t1

0xc71e,	// (0x0001b1c0) aid_main_mp4_pane_t1_area

0xc728,	// (0x0001b1ca) aid_main_mp4_pane_t2_area

0xc7d4,	// (0x0001b276) main_mp4_pane_g7_ParamLimits

0xc7d4,	// (0x0001b276) main_mp4_pane_g7

0xc7e0,	// (0x0001b282) main_mp4_pane_g8_ParamLimits

0xc7e0,	// (0x0001b282) main_mp4_pane_g8

0x49e0,	// (0x00013482) aid_call6_pane_g1_size

0x806c,	// (0x00016b0e) list_double_large_graphic_phob2_other_pane_ParamLimits

0x806c,	// (0x00016b0e) list_double_large_graphic_phob2_other_pane

0x9efd,	// (0x0001899f) list_double_large_graphic_phob2_other_pane_g1

0x90dd,	// (0x00017b7f) list_highlight_pane_cp026

0x914c,	// (0x00017bee) main_welc_pane_ParamLimits

0x6dca,	// (0x0001586c) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0x6dca,	// (0x0001586c) main_sp_fs_ctrlbar_pane_g3

0x6de4,	// (0x00015886) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0x6de4,	// (0x00015886) main_sp_fs_ctrlbar_pane_g4

0x6e18,	// (0x000158ba) toolbar2_fixed_button_pane_cp01

0x6e23,	// (0x000158c5) toolbar2_fixed_button_pane_cp02

0x6e30,	// (0x000158d2) toolbar2_fixed_button_pane_cp03

0x8123,	// (0x00016bc5) list_welc_entry_pane_ParamLimits

0x8123,	// (0x00016bc5) list_welc_entry_pane

0x81a0,	// (0x00016c42) main_welc_pane_g3_ParamLimits

0x81a0,	// (0x00016c42) main_welc_pane_g3

0x81f7,	// (0x00016c99) main_welc_pane_t2_ParamLimits

0x81f7,	// (0x00016c99) main_welc_pane_t2

0x8212,	// (0x00016cb4) main_welc_pane_t3_ParamLimits

0x8212,	// (0x00016cb4) main_welc_pane_t3

0x0005,

0xfe35,	// (0x0001e8d7) main_welc_pane_t_ParamLimits

0xfe35,	// (0x0001e8d7) main_welc_pane_t

0x8342,	// (0x00016de4) welc_button_pane_ParamLimits

0x8342,	// (0x00016de4) welc_button_pane

0x83bc,	// (0x00016e5e) welc_service_logo_pane_ParamLimits

0x83bc,	// (0x00016e5e) welc_service_logo_pane

0x846d,	// (0x00016f0f) list_single_welc_entry_pane_ParamLimits

0x846d,	// (0x00016f0f) list_single_welc_entry_pane

0x847e,	// (0x00016f20) list_single_welc_entry_pane_g1

0x8486,	// (0x00016f28) list_single_welc_entry_pane_t1

0x8494,	// (0x00016f36) list_single_welc_entry_pane_t2

0x0001,

0xfe47,	// (0x0001e8e9) list_single_welc_entry_pane_t

0x90dd,	// (0x00017b7f) bg_button_pane_cp035

0x84a2,	// (0x00016f44) welc_button_pane_t1

0xeb20,	// (0x0001d5c2) welc_service_logo_pane_g1

0xeb29,	// (0x0001d5cb) welc_service_logo_pane_g2

0x0001,

0xfe4c,	// (0x0001e8ee) welc_service_logo_pane_g

0x90dd,	// (0x00017b7f) main_int_radio_pane

0x9972,	// (0x00018414) list_single_fs_dyc_pane_g1

0x7f9d,	// (0x00016a3f) list_double_large_graphic_phob2_pane_g3_ParamLimits

0x7f9d,	// (0x00016a3f) list_double_large_graphic_phob2_pane_g3

0x7fa9,	// (0x00016a4b) list_double_large_graphic_phob2_pane_g4_ParamLimits

0x7fa9,	// (0x00016a4b) list_double_large_graphic_phob2_pane_g4

0x84b0,	// (0x00016f52) main_int_radio1_pane_ParamLimits

0x84b0,	// (0x00016f52) main_int_radio1_pane

0xeb32,	// (0x0001d5d4) find_pane_cp02

0x84cd,	// (0x00016f6f) input_focus_pane_cp12_ParamLimits

0x84cd,	// (0x00016f6f) input_focus_pane_cp12

0x84dd,	// (0x00016f7f) input_focus_pane_cp13_ParamLimits

0x84dd,	// (0x00016f7f) input_focus_pane_cp13

0x84f1,	// (0x00016f93) input_focus_pane_cp14_ParamLimits

0x84f1,	// (0x00016f93) input_focus_pane_cp14

0xeb3b,	// (0x0001d5dd) int_radio1_listscroll_pane

0x8505,	// (0x00016fa7) main_int_radio1_pane_g1_ParamLimits

0x8505,	// (0x00016fa7) main_int_radio1_pane_g1

0x851d,	// (0x00016fbf) main_int_radio1_pane_t1_ParamLimits

0x851d,	// (0x00016fbf) main_int_radio1_pane_t1

0x8538,	// (0x00016fda) main_int_radio1_pane_t2_ParamLimits

0x8538,	// (0x00016fda) main_int_radio1_pane_t2

0x8553,	// (0x00016ff5) main_int_radio1_pane_t3_ParamLimits

0x8553,	// (0x00016ff5) main_int_radio1_pane_t3

0x856e,	// (0x00017010) main_int_radio1_pane_t4_ParamLimits

0x856e,	// (0x00017010) main_int_radio1_pane_t4

0xeb45,	// (0x0001d5e7) main_int_radio1_pane_t5_ParamLimits

0xeb45,	// (0x0001d5e7) main_int_radio1_pane_t5

0x8580,	// (0x00017022) main_int_radio1_pane_t6_ParamLimits

0x8580,	// (0x00017022) main_int_radio1_pane_t6

0x8595,	// (0x00017037) main_int_radio1_pane_t7_ParamLimits

0x8595,	// (0x00017037) main_int_radio1_pane_t7

0x85aa,	// (0x0001704c) main_int_radio1_pane_t8_ParamLimits

0x85aa,	// (0x0001704c) main_int_radio1_pane_t8

0x85c9,	// (0x0001706b) main_int_radio1_pane_t9_ParamLimits

0x85c9,	// (0x0001706b) main_int_radio1_pane_t9

0x85db,	// (0x0001707d) main_int_radio1_pane_t10_ParamLimits

0x85db,	// (0x0001707d) main_int_radio1_pane_t10

0x8601,	// (0x000170a3) main_int_radio1_pane_t11_ParamLimits

0x8601,	// (0x000170a3) main_int_radio1_pane_t11

0x8627,	// (0x000170c9) main_int_radio1_pane_t12_ParamLimits

0x8627,	// (0x000170c9) main_int_radio1_pane_t12

0x000b,

0xfe51,	// (0x0001e8f3) main_int_radio1_pane_t_ParamLimits

0xfe51,	// (0x0001e8f3) main_int_radio1_pane_t

0xeb57,	// (0x0001d5f9) int_radio_list_pane

0xe9b5,	// (0x0001d457) scroll_pane_cp037

0xeb5f,	// (0x0001d601) list_double_large_graphic_int_radio_pane_ParamLimits

0xeb5f,	// (0x0001d601) list_double_large_graphic_int_radio_pane

0xeb77,	// (0x0001d619) list_double_large_graphic_int_radio_pane_g1

0xeb80,	// (0x0001d622) list_double_large_graphic_int_radio_pane_t1

0xeb8e,	// (0x0001d630) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfe6a,	// (0x0001e90c) list_double_large_graphic_int_radio_pane_t

0x90dd,	// (0x00017b7f) list_highlight_pane_cp027

0xeac7,	// (0x0001d569) main_button_pane_4

0x81b3,	// (0x00016c55) main_welc_pane_g4_ParamLimits

0x81b3,	// (0x00016c55) main_welc_pane_g4

0x822b,	// (0x00016ccd) main_welc_pane_t4_ParamLimits

0x822b,	// (0x00016ccd) main_welc_pane_t4

0x8242,	// (0x00016ce4) main_welc_pane_t5_ParamLimits

0x8242,	// (0x00016ce4) main_welc_pane_t5

0x827f,	// (0x00016d21) main_welc_pane_t6_ParamLimits

0x827f,	// (0x00016d21) main_welc_pane_t6

0x8359,	// (0x00016dfb) welc_button_pane_2_ParamLimits

0x8359,	// (0x00016dfb) welc_button_pane_2

0x8375,	// (0x00016e17) welc_button_pane_3_ParamLimits

0x8375,	// (0x00016e17) welc_button_pane_3

0xeacf,	// (0x0001d571) welc_button_pane_4

0x8394,	// (0x00016e36) welc_button_pane_5_ParamLimits

0x8394,	// (0x00016e36) welc_button_pane_5

0x0490,	// (0x0000ef32) main_popup_welc_pane

0xebab,	// (0x0001d64d) main_welc_sk_g3

0xebb5,	// (0x0001d657) main_welc_sk_g4

0xebbf,	// (0x0001d661) main_welc_sk_t3

0xebcf,	// (0x0001d671) main_welc_sk_t4

0xebdf,	// (0x0001d681) popup_welc_pane_t4

0xebed,	// (0x0001d68f) popup_welc_pane_t5

0xebfb,	// (0x0001d69d) popup_welc_pane_t6

0x90dd,	// (0x00017b7f) main_acti_pane

0x90dd,	// (0x00017b7f) main_sso_pane

0x8639,	// (0x000170db) sso_body_pane_ParamLimits

0x8639,	// (0x000170db) sso_body_pane

0x864d,	// (0x000170ef) sso_logo_pane_ParamLimits

0x864d,	// (0x000170ef) sso_logo_pane

0x867d,	// (0x0001711f) sso_sk_pane_ParamLimits

0x867d,	// (0x0001711f) sso_sk_pane

0x9b5c,	// (0x000185fe) main_sso_logo_pane_g1

0x868f,	// (0x00017131) sso_sk_pane_t1_ParamLimits

0x868f,	// (0x00017131) sso_sk_pane_t1

0x86a9,	// (0x0001714b) sso_sk_pane_t2_ParamLimits

0x86a9,	// (0x0001714b) sso_sk_pane_t2

0x0001,

0xfe6f,	// (0x0001e911) sso_sk_pane_t_ParamLimits

0xfe6f,	// (0x0001e911) sso_sk_pane_t

0xec39,	// (0x0001d6db) aid_sso_gap

0xec42,	// (0x0001d6e4) aid_sso_txt1

0xec4c,	// (0x0001d6ee) aid_sso_txt2

0xec56,	// (0x0001d6f8) aid_sso_txt3

0x0002,

0xfe74,	// (0x0001e916) aid_sso_txt

0xec60,	// (0x0001d702) aid_sso_widget

0x8713,	// (0x000171b5) sso_btn_pane_ParamLimits

0x8713,	// (0x000171b5) sso_btn_pane

0x879b,	// (0x0001723d) sso_option_pane_ParamLimits

0x879b,	// (0x0001723d) sso_option_pane

0x881b,	// (0x000172bd) sso_query_pane_ParamLimits

0x881b,	// (0x000172bd) sso_query_pane

0x8871,	// (0x00017313) sso_query_pane_cp01_ParamLimits

0x8871,	// (0x00017313) sso_query_pane_cp01

0x88cb,	// (0x0001736d) sso_t_hdr_pane_ParamLimits

0x88cb,	// (0x0001736d) sso_t_hdr_pane

0x88f5,	// (0x00017397) sso_t_nml_pane_ParamLimits

0x88f5,	// (0x00017397) sso_t_nml_pane

0xec6a,	// (0x0001d70c) sso_t_sub_pane

0x865a,	// (0x000170fc) sso_popup_window_ParamLimits

0x865a,	// (0x000170fc) sso_popup_window

0x86bf,	// (0x00017161) sso_apps_pane_ParamLimits

0x86bf,	// (0x00017161) sso_apps_pane

0x86e9,	// (0x0001718b) sso_body_pane_g1

0x86f3,	// (0x00017195) sso_body_pane_t1

0x8703,	// (0x000171a5) sso_body_pane_t2

0x0001,

0xfe7b,	// (0x0001e91d) sso_body_pane_t

0x8765,	// (0x00017207) sso_btn_pane_cp01_ParamLimits

0x8765,	// (0x00017207) sso_btn_pane_cp01

0x87ef,	// (0x00017291) sso_prog_pane_ParamLimits

0x87ef,	// (0x00017291) sso_prog_pane

0x894b,	// (0x000173ed) sso_t_hdr_pane_t1_ParamLimits

0x894b,	// (0x000173ed) sso_t_hdr_pane_t1

0xec7f,	// (0x0001d721) input_focus_pane_cp10_ParamLimits

0xec7f,	// (0x0001d721) input_focus_pane_cp10

0xec99,	// (0x0001d73b) sso_query_pane_t1_ParamLimits

0xec99,	// (0x0001d73b) sso_query_pane_t1

0xecac,	// (0x0001d74e) sso_query_pane_t2_ParamLimits

0xecac,	// (0x0001d74e) sso_query_pane_t2

0xecc7,	// (0x0001d769) sso_query_pane_t3_ParamLimits

0xecc7,	// (0x0001d769) sso_query_pane_t3

0xecf1,	// (0x0001d793) sso_query_pane_t4_ParamLimits

0xecf1,	// (0x0001d793) sso_query_pane_t4

0x0003,

0xfe80,	// (0x0001e922) sso_query_pane_t_ParamLimits

0xfe80,	// (0x0001e922) sso_query_pane_t

0x90dd,	// (0x00017b7f) bg_button_pane_cp22

0xeb9c,	// (0x0001d63e) sso_btn_pane_t1

0x895e,	// (0x00017400) sso_t_nml_pane_t1_ParamLimits

0x895e,	// (0x00017400) sso_t_nml_pane_t1

0xed15,	// (0x0001d7b7) sso_option_row_pane_ParamLimits

0xed15,	// (0x0001d7b7) sso_option_row_pane

0xed28,	// (0x0001d7ca) sso_t_sub_pane_t1_ParamLimits

0xed28,	// (0x0001d7ca) sso_t_sub_pane_t1

0x914c,	// (0x00017bee) bg_popup_window_pane_cp11_ParamLimits

0x914c,	// (0x00017bee) bg_popup_window_pane_cp11

0xed45,	// (0x0001d7e7) popup_sk_window_cp01_ParamLimits

0xed45,	// (0x0001d7e7) popup_sk_window_cp01

0xed52,	// (0x0001d7f4) sso_popup_body_pane_ParamLimits

0xed52,	// (0x0001d7f4) sso_popup_body_pane

0xed5f,	// (0x0001d801) scroll_pane_cp21_ParamLimits

0xed5f,	// (0x0001d801) scroll_pane_cp21

0xed6c,	// (0x0001d80e) sso_popup_body_t_pane_ParamLimits

0xed6c,	// (0x0001d80e) sso_popup_body_t_pane

0xed79,	// (0x0001d81b) sso_popup_body_t_hdr_pane_ParamLimits

0xed79,	// (0x0001d81b) sso_popup_body_t_hdr_pane

0xed8c,	// (0x0001d82e) sso_popup_body_t_nml_pane_ParamLimits

0xed8c,	// (0x0001d82e) sso_popup_body_t_nml_pane

0xedaa,	// (0x0001d84c) sso_popup_body_t_sub_pane_ParamLimits

0xedaa,	// (0x0001d84c) sso_popup_body_t_sub_pane

0xedcd,	// (0x0001d86f) sso_popup_body_t_hdr_pane_t1

0x8979,	// (0x0001741b) sso_popup_body_t_nml_pane_t1_ParamLimits

0x8979,	// (0x0001741b) sso_popup_body_t_nml_pane_t1

0xeddd,	// (0x0001d87f) sso_popup_body_t_sub_pane_t1_ParamLimits

0xeddd,	// (0x0001d87f) sso_popup_body_t_sub_pane_t1

0x9b5c,	// (0x000185fe) sso_prog_pane_g1

0x89b2,	// (0x00017454) sso_apps_pane_comp1_ParamLimits

0x89b2,	// (0x00017454) sso_apps_pane_comp1

0xee02,	// (0x0001d8a4) sso_apps_pane_comp1_g1

0xee0a,	// (0x0001d8ac) sso_apps_pane_comp1_t1

0xee26,	// (0x0001d8c8) sso_option_row_pane_g1

0xee2e,	// (0x0001d8d0) sso_option_row_pane_t1

0x8110,	// (0x00016bb2) bg_welc_area_ParamLimits

0x8110,	// (0x00016bb2) bg_welc_area

0x82bd,	// (0x00016d5f) sso_t_hdr_pane_a_t1_ParamLimits

0x82bd,	// (0x00016d5f) sso_t_hdr_pane_a_t1

0x82d8,	// (0x00016d7a) sso_t_nml_pane_a_t1_ParamLimits

0x82d8,	// (0x00016d7a) sso_t_nml_pane_a_t1

0x8307,	// (0x00016da9) sso_t_sub_pane_a_t1_ParamLimits

0x8307,	// (0x00016da9) sso_t_sub_pane_a_t1

0xeb9c,	// (0x0001d63e) sso_btn_pane_t1_copy1

0x90dd,	// (0x00017b7f) welc_button_pane_2_comp1

0xec09,	// (0x0001d6ab) sso_t_hdr_pane_p_t1

0xec19,	// (0x0001d6bb) sso_t_nml_pane_p_t1

0xec29,	// (0x0001d6cb) sso_t_sub_pane_p_t1

0xe03d,	// (0x0001cadf) list_cmail_pane_ParamLimits

0x83aa,	// (0x00016e4c) welc_button_pane_cp01_ParamLimits

0x83aa,	// (0x00016e4c) welc_button_pane_cp01

0x90dd,	// (0x00017b7f) main_att_pane

0xee18,	// (0x0001d8ba) input_focus_pane_cp10_t1

0xee2e,	// (0x0001d8d0) sso_option_row_pane_t1_ParamLimits

0x89cc,	// (0x0001746e) main_att_body_pane_ParamLimits

0x89cc,	// (0x0001746e) main_att_body_pane

0x8a01,	// (0x000174a3) att_btn_pane_ParamLimits

0x8a01,	// (0x000174a3) att_btn_pane

0x8a26,	// (0x000174c8) att_btn_pane_cp01_ParamLimits

0x8a26,	// (0x000174c8) att_btn_pane_cp01

0x8a46,	// (0x000174e8) att_li_srv_pane_ParamLimits

0x8a46,	// (0x000174e8) att_li_srv_pane

0x8a63,	// (0x00017505) att_opt_pane_ParamLimits

0x8a63,	// (0x00017505) att_opt_pane

0x8aaf,	// (0x00017551) att_query_pane_ParamLimits

0x8aaf,	// (0x00017551) att_query_pane

0x8afb,	// (0x0001759d) att_query_pane_cp01_ParamLimits

0x8afb,	// (0x0001759d) att_query_pane_cp01

0x8b47,	// (0x000175e9) att_t_hdr_pane_ParamLimits

0x8b47,	// (0x000175e9) att_t_hdr_pane

0x8b9f,	// (0x00017641) att_t_nml_pane_ParamLimits

0x8b9f,	// (0x00017641) att_t_nml_pane

0x8bd8,	// (0x0001767a) att_t_nml_pane_cp01_ParamLimits

0x8bd8,	// (0x0001767a) att_t_nml_pane_cp01

0x8c04,	// (0x000176a6) att_t_nmlb_pane_ParamLimits

0x8c04,	// (0x000176a6) att_t_nmlb_pane

0x8c21,	// (0x000176c3) att_term_pane_ParamLimits

0x8c21,	// (0x000176c3) att_term_pane

0x8c6d,	// (0x0001770f) main_att_body_pane_g1_ParamLimits

0x8c6d,	// (0x0001770f) main_att_body_pane_g1

0xee44,	// (0x0001d8e6) att_t_hdr_pane_t1_ParamLimits

0xee44,	// (0x0001d8e6) att_t_hdr_pane_t1

0xee5d,	// (0x0001d8ff) att_t_nml_pane_t1_ParamLimits

0xee5d,	// (0x0001d8ff) att_t_nml_pane_t1

0xee82,	// (0x0001d924) att_btn_pane_t1

0x90dd,	// (0x00017b7f) bg_button_pane_cp23

0x8ca4,	// (0x00017746) att_li_srv_row_pane_ParamLimits

0x8ca4,	// (0x00017746) att_li_srv_row_pane

0xee92,	// (0x0001d934) att_t_nmlb_pane_t1_ParamLimits

0xee92,	// (0x0001d934) att_t_nmlb_pane_t1

0xeeab,	// (0x0001d94d) att_query_pane_t1

0xeeba,	// (0x0001d95c) att_query_pane_t2

0xeec9,	// (0x0001d96b) att_query_pane_t3

0x0002,

0xfe89,	// (0x0001e92b) att_query_pane_t

0xeed8,	// (0x0001d97a) input_focus_pane_cp11

0xeee1,	// (0x0001d983) att_term_pane_t1_ParamLimits

0xeee1,	// (0x0001d983) att_term_pane_t1

0x90dd,	// (0x00017b7f) att_opt_row_pane

0xeefe,	// (0x0001d9a0) att_opt_row_pane_g1

0xef06,	// (0x0001d9a8) att_opt_row_pane_t1_ParamLimits

0xef06,	// (0x0001d9a8) att_opt_row_pane_t1

0x8cb4,	// (0x00017756) att_li_srv_row_pane_g1

0x8cbc,	// (0x0001775e) att_li_srv_row_pane_t1

0x8cd1,	// (0x00017773) att_li_srv_row_pane_t2

0x0001,

0xfe90,	// (0x0001e932) att_li_srv_row_pane_t

0x90dd,	// (0x00017b7f) main_call7_pane

0x90dd,	// (0x00017b7f) main_vod_pane

0xec6a,	// (0x0001d70c) sso_t_sub_pane_ParamLimits

0x89e2,	// (0x00017484) att_btn_emg_pane_ParamLimits

0x89e2,	// (0x00017484) att_btn_emg_pane

0x8cbc,	// (0x0001775e) att_li_srv_row_pane_t1_ParamLimits

0x8cd1,	// (0x00017773) att_li_srv_row_pane_t2_ParamLimits

0xfe90,	// (0x0001e932) att_li_srv_row_pane_t_ParamLimits

0xef1f,	// (0x0001d9c1) att_btn_close_pane_g1

0x90dd,	// (0x00017b7f) bg_button_pane_cp24

0x8ce6,	// (0x00017788) main_vod_body_pane_ParamLimits

0x8ce6,	// (0x00017788) main_vod_body_pane

0x8cfa,	// (0x0001779c) main_vod_body_pane_g1_ParamLimits

0x8cfa,	// (0x0001779c) main_vod_body_pane_g1

0x8d2e,	// (0x000177d0) scroll_pane_cp24_ParamLimits

0x8d2e,	// (0x000177d0) scroll_pane_cp24

0x8d7c,	// (0x0001781e) vod_btn_pane_ParamLimits

0x8d7c,	// (0x0001781e) vod_btn_pane

0x8dc0,	// (0x00017862) vod_det_pane_ParamLimits

0x8dc0,	// (0x00017862) vod_det_pane

0x8df2,	// (0x00017894) vod_logo_g1_ParamLimits

0x8df2,	// (0x00017894) vod_logo_g1

0x8e30,	// (0x000178d2) vod_opt_pane_ParamLimits

0x8e30,	// (0x000178d2) vod_opt_pane

0x8e63,	// (0x00017905) vod_opt_pane_cp01_ParamLimits

0x8e63,	// (0x00017905) vod_opt_pane_cp01

0x8e8f,	// (0x00017931) vod_query_pane_ParamLimits

0x8e8f,	// (0x00017931) vod_query_pane

0x8ebc,	// (0x0001795e) vod_query_pane_cp01_ParamLimits

0x8ebc,	// (0x0001795e) vod_query_pane_cp01

0x8ec8,	// (0x0001796a) vod_t_nml_pane_ParamLimits

0x8ec8,	// (0x0001796a) vod_t_nml_pane

0x8f75,	// (0x00017a17) vod_t_nml_pane_cp01_ParamLimits

0x8f75,	// (0x00017a17) vod_t_nml_pane_cp01

0x8fb1,	// (0x00017a53) vod_t_sub_pane_ParamLimits

0x8fb1,	// (0x00017a53) vod_t_sub_pane

0x8fe6,	// (0x00017a88) vod_t_sub_pane_cp01_ParamLimits

0x8fe6,	// (0x00017a88) vod_t_sub_pane_cp01

0xeed8,	// (0x0001d97a) vod_query_field_pane

0xeeab,	// (0x0001d94d) vod_query_pane_t1

0x90dd,	// (0x00017b7f) bg_button_pane_cp25

0xee82,	// (0x0001d924) sso_btn_pane_t1_copy2

0x9012,	// (0x00017ab4) vod_t_nml_pane_t1_ParamLimits

0x9012,	// (0x00017ab4) vod_t_nml_pane_t1

0xef27,	// (0x0001d9c9) vod_opt_row_pane_ParamLimits

0xef27,	// (0x0001d9c9) vod_opt_row_pane

0xef39,	// (0x0001d9db) vod_t_sub_pane_t1_ParamLimits

0xef39,	// (0x0001d9db) vod_t_sub_pane_t1

0x9043,	// (0x00017ae5) vod_det_cell_pane_ParamLimits

0x9043,	// (0x00017ae5) vod_det_cell_pane

0x90dd,	// (0x00017b7f) input_focus_pane_cp15

0xef52,	// (0x0001d9f4) vod_query_field_pane_t1

0xef60,	// (0x0001da02) vod_opt_row_pane_g1_ParamLimits

0xef60,	// (0x0001da02) vod_opt_row_pane_g1

0xef6c,	// (0x0001da0e) vod_opt_row_pane_t1_ParamLimits

0xef6c,	// (0x0001da0e) vod_opt_row_pane_t1

0xef91,	// (0x0001da33) vod_det_cell_field_pane

0xef9a,	// (0x0001da3c) vod_det_cell_pane_g1

0xeeab,	// (0x0001d94d) vod_det_cell_pane_t1

0x90dd,	// (0x00017b7f) input_focus_pane_cp16

0xef52,	// (0x0001d9f4) vod_det_cell_field_pane_t1

0x797f,	// (0x00016421) call7_btn_grp_pane_ParamLimits

0x797f,	// (0x00016421) call7_btn_grp_pane

0x9057,	// (0x00017af9) call7_bubble_pane_ParamLimits

0x9057,	// (0x00017af9) call7_bubble_pane

0x906e,	// (0x00017b10) cell_call7_btn_pane_ParamLimits

0x906e,	// (0x00017b10) cell_call7_btn_pane

0x9081,	// (0x00017b23) call7_pane_g1_ParamLimits

0x9081,	// (0x00017b23) call7_pane_g1

0x9090,	// (0x00017b32) call7_windows_conf_pane_ParamLimits

0x9090,	// (0x00017b32) call7_windows_conf_pane

0x90aa,	// (0x00017b4c) popup_call7_1st_window_ParamLimits

0x90aa,	// (0x00017b4c) popup_call7_1st_window

0x90bb,	// (0x00017b5d) popup_call7_2nd_window_ParamLimits

0x90bb,	// (0x00017b5d) popup_call7_2nd_window

0x90cc,	// (0x00017b6e) popup_call7_3rd_window_ParamLimits

0x90cc,	// (0x00017b6e) popup_call7_3rd_window

0x90dd,	// (0x00017b7f) bg_button_pane_cp26

0xe8b5,	// (0x0001d357) cell_call7_btn_pane_g1

0xe8be,	// (0x0001d360) cell_call7_btn_pane_t1

0x90dd,	// (0x00017b7f) bg_popup_window_pane_cp12

0xefa2,	// (0x0001da44) popup_call7_1st_window_g1

0xefaa,	// (0x0001da4c) popup_call7_1st_window_g2

0xefb2,	// (0x0001da54) popup_call7_1st_window_g3

0x0002,

0xfe95,	// (0x0001e937) popup_call7_1st_window_g

0xefba,	// (0x0001da5c) popup_call7_1st_window_t1

0xefc9,	// (0x0001da6b) popup_call7_1st_window_t2

0xefd7,	// (0x0001da79) popup_call7_1st_window_t3

0x0002,

0xfe9c,	// (0x0001e93e) popup_call7_1st_window_t

0x90dd,	// (0x00017b7f) bg_popup_window_pane_cp13

0xefe5,	// (0x0001da87) popup_call7_2nd_window_g1

0xefed,	// (0x0001da8f) popup_call7_2nd_window_g2

0xeff5,	// (0x0001da97) popup_call7_2nd_window_g3

0x0002,

0xfea3,	// (0x0001e945) popup_call7_2nd_window_g

0xeffd,	// (0x0001da9f) popup_call7_2nd_window_t1

0x90dd,	// (0x00017b7f) bg_popup_window_pane_cp14

0xf00c,	// (0x0001daae) call7_list_conf_pane

0xf014,	// (0x0001dab6) call7_list_conf_row_pane_ParamLimits

0xf014,	// (0x0001dab6) call7_list_conf_row_pane

0xf027,	// (0x0001dac9) call7_list_conf_row_pane_g1

0xf02f,	// (0x0001dad1) call7_list_conf_row_pane_g2

0x0001,

0xfeaa,	// (0x0001e94c) call7_list_conf_row_pane_g

0xf037,	// (0x0001dad9) call7_list_conf_row_pane_t1

0x90dd,	// (0x00017b7f) list_highlight_pane_cp22
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
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
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
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&WindowLineVCR,
	&TextLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
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
	&ParameterLimitsTableLV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
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
	&TextLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&WindowLineVCR,
	};

} // end of namespace AknLayoutScalable_Elaf_phl_apps_qhd_lsc_tch_Normal
