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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x0000ea6c };

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
0x05cf,	// (0x0000f03b) Screen

0x05db,	// (0x0000f047) application_window

0x0617,	// (0x0000f083) area_bottom_pane_ParamLimits

0x0617,	// (0x0000f083) area_bottom_pane

0x0650,	// (0x0000f0bc) area_top_pane_ParamLimits

0x0650,	// (0x0000f0bc) area_top_pane

0x917d,	// (0x00017be9) call_video_uplink_pane_ParamLimits

0x917d,	// (0x00017be9) call_video_uplink_pane

0x06de,	// (0x0000f14a) main_pane_ParamLimits

0x06de,	// (0x0000f14a) main_pane

0xba6e,	// (0x0001a4da) context_pane

0x33e9,	// (0x00011e55) navi_pane

0x341b,	// (0x00011e87) popup_cale_events_window_ParamLimits

0x341b,	// (0x00011e87) popup_cale_events_window

0xba81,	// (0x0001a4ed) popup_mup_playback_window

0x3433,	// (0x00011e9f) signal_pane

0x9926,	// (0x00018392) main_browser_pane

0x9b5b,	// (0x000185c7) main_burst_pane

0x3151,	// (0x00011bbd) main_calc_pane

0xba0e,	// (0x0001a47a) main_cale_day_pane

0x0bd3,	// (0x0000f63f) main_cale_month_pane

0xba0e,	// (0x0001a47a) main_cale_week_pane

0x9b5b,	// (0x000185c7) main_call_pane

0x95bc,	// (0x00018028) main_call_poc_pane

0x9b5b,	// (0x000185c7) main_camera_pane

0x9b5b,	// (0x000185c7) main_chi_dic_pane

0xa3d7,	// (0x00018e43) main_clock_pane

0x95bc,	// (0x00018028) main_fmradio_pane

0x9b5b,	// (0x000185c7) main_graph_messa_pane

0x95bc,	// (0x00018028) main_help_pane

0x9926,	// (0x00018392) main_im_pane

0x9817,	// (0x00018283) main_image_pane_ParamLimits

0x9817,	// (0x00018283) main_image_pane

0x95bc,	// (0x00018028) main_location2_pane

0x9b5b,	// (0x000185c7) main_location_pane

0x9817,	// (0x00018283) main_messa_pane

0x95bc,	// (0x00018028) main_mp2_pane

0x9b5b,	// (0x000185c7) main_mp_pane

0x95bc,	// (0x00018028) main_msg_pane

0x95bc,	// (0x00018028) main_mup_eq_pane

0x95bc,	// (0x00018028) main_mup_pane

0x9926,	// (0x00018392) main_notes_pane

0x95bc,	// (0x00018028) main_pec_pane

0x95bc,	// (0x00018028) main_phob_pane

0x95bc,	// (0x00018028) main_pinb_pane

0x95bc,	// (0x00018028) main_postcard_pane

0x95bc,	// (0x00018028) main_qdial_pane

0x9b5b,	// (0x000185c7) main_skin_pane

0x95bc,	// (0x00018028) main_smil2_pane

0x9b5b,	// (0x000185c7) main_smil_pane

0x9b5b,	// (0x000185c7) main_video_pane

0x9b5b,	// (0x000185c7) main_video_tele_pane

0x9817,	// (0x00018283) main_viewer_pane_ParamLimits

0x9817,	// (0x00018283) main_viewer_pane

0x9b5b,	// (0x000185c7) main_vorec_pane

0x31a5,	// (0x00011c11) popup_blid_sat_info_window_ParamLimits

0x31a5,	// (0x00011c11) popup_blid_sat_info_window

0x31fd,	// (0x00011c69) popup_dyc_status_message_window_ParamLimits

0x31fd,	// (0x00011c69) popup_dyc_status_message_window

0x3215,	// (0x00011c81) popup_grid_large_graphic_window_ParamLimits

0x3215,	// (0x00011c81) popup_grid_large_graphic_window

0x32c5,	// (0x00011d31) popup_loc_request_window_ParamLimits

0x32c5,	// (0x00011d31) popup_loc_request_window

0x33c1,	// (0x00011e2d) popup_wml_address_window_ParamLimits

0x33c1,	// (0x00011e2d) popup_wml_address_window

0x2f8b,	// (0x000119f7) call_muted_g1

0x2bfe,	// (0x0001166a) popup_call_audio_conf_window_ParamLimits

0x2bfe,	// (0x0001166a) popup_call_audio_conf_window

0x2f9f,	// (0x00011a0b) popup_call_audio_first_window_ParamLimits

0x2f9f,	// (0x00011a0b) popup_call_audio_first_window

0x3015,	// (0x00011a81) popup_call_audio_in_window_ParamLimits

0x3015,	// (0x00011a81) popup_call_audio_in_window

0x3051,	// (0x00011abd) popup_call_audio_out_window_ParamLimits

0x3051,	// (0x00011abd) popup_call_audio_out_window

0x308b,	// (0x00011af7) popup_call_audio_second_window_ParamLimits

0x308b,	// (0x00011af7) popup_call_audio_second_window

0x30e1,	// (0x00011b4d) popup_call_audio_wait_window_ParamLimits

0x30e1,	// (0x00011b4d) popup_call_audio_wait_window

0x3116,	// (0x00011b82) popup_number_entry_window_ParamLimits

0x3116,	// (0x00011b82) popup_number_entry_window

0x91a9,	// (0x00017c15) bg_popup_call_pane_cp05_ParamLimits

0x91a9,	// (0x00017c15) bg_popup_call_pane_cp05

0x91c9,	// (0x00017c35) popup_number_entry_window_t1

0x91dc,	// (0x00017c48) popup_number_entry_window_t2

0x91ee,	// (0x00017c5a) popup_number_entry_window_t3

0x0003,

0xf045,	// (0x0001dab1) popup_number_entry_window_t

0x9200,	// (0x00017c6c) text_title_cp2

0x9213,	// (0x00017c7f) bg_popup_call_pane_cp_ParamLimits

0x9213,	// (0x00017c7f) bg_popup_call_pane_cp

0x9221,	// (0x00017c8d) call_thumbnail_pane

0x9229,	// (0x00017c95) popup_call_audio_in_window_g1_ParamLimits

0x9229,	// (0x00017c95) popup_call_audio_in_window_g1

0x9235,	// (0x00017ca1) popup_call_audio_in_window_g2_ParamLimits

0x9235,	// (0x00017ca1) popup_call_audio_in_window_g2

0x9241,	// (0x00017cad) popup_call_audio_in_window_g3_ParamLimits

0x9241,	// (0x00017cad) popup_call_audio_in_window_g3

0x0002,

0xf04e,	// (0x0001daba) popup_call_audio_in_window_g_ParamLimits

0xf04e,	// (0x0001daba) popup_call_audio_in_window_g

0x924d,	// (0x00017cb9) popup_call_audio_in_window_t1_ParamLimits

0x924d,	// (0x00017cb9) popup_call_audio_in_window_t1

0x9269,	// (0x00017cd5) popup_call_audio_in_window_t2_ParamLimits

0x9269,	// (0x00017cd5) popup_call_audio_in_window_t2

0x9285,	// (0x00017cf1) popup_call_audio_in_window_t3_ParamLimits

0x9285,	// (0x00017cf1) popup_call_audio_in_window_t3

0x0002,

0xf055,	// (0x0001dac1) popup_call_audio_in_window_t_ParamLimits

0xf055,	// (0x0001dac1) popup_call_audio_in_window_t

0x9213,	// (0x00017c7f) bg_popup_call_pane_cp01_ParamLimits

0x9213,	// (0x00017c7f) bg_popup_call_pane_cp01

0x9221,	// (0x00017c8d) call_thumbnail_pane_cp02

0x9298,	// (0x00017d04) call_type_pane_cp022

0x92a0,	// (0x00017d0c) popup_call_audio_out_window_g1_ParamLimits

0x92a0,	// (0x00017d0c) popup_call_audio_out_window_g1

0x92b2,	// (0x00017d1e) popup_call_audio_out_window_g2_ParamLimits

0x92b2,	// (0x00017d1e) popup_call_audio_out_window_g2

0x92be,	// (0x00017d2a) popup_call_audio_out_window_g3_ParamLimits

0x92be,	// (0x00017d2a) popup_call_audio_out_window_g3

0x0002,

0xf05c,	// (0x0001dac8) popup_call_audio_out_window_g_ParamLimits

0xf05c,	// (0x0001dac8) popup_call_audio_out_window_g

0x92d0,	// (0x00017d3c) popup_call_audio_out_window_t1_ParamLimits

0x92d0,	// (0x00017d3c) popup_call_audio_out_window_t1

0x92e8,	// (0x00017d54) popup_call_audio_out_window_t2_ParamLimits

0x92e8,	// (0x00017d54) popup_call_audio_out_window_t2

0x0001,

0xf063,	// (0x0001dacf) popup_call_audio_out_window_t_ParamLimits

0xf063,	// (0x0001dacf) popup_call_audio_out_window_t

0x92fd,	// (0x00017d69) bg_popup_call_pane_ParamLimits

0x92fd,	// (0x00017d69) bg_popup_call_pane

0x089a,	// (0x0000f306) call_thumbnail_pane_cp_ParamLimits

0x089a,	// (0x0000f306) call_thumbnail_pane_cp

0x9381,	// (0x00017ded) call_type_pane_cp01_ParamLimits

0x9381,	// (0x00017ded) call_type_pane_cp01

0x93c5,	// (0x00017e31) popup_call_audio_first_window_g1_ParamLimits

0x93c5,	// (0x00017e31) popup_call_audio_first_window_g1

0x9411,	// (0x00017e7d) popup_call_audio_first_window_g2_ParamLimits

0x9411,	// (0x00017e7d) popup_call_audio_first_window_g2

0x0001,

0xf068,	// (0x0001dad4) popup_call_audio_first_window_g_ParamLimits

0xf068,	// (0x0001dad4) popup_call_audio_first_window_g

0x9455,	// (0x00017ec1) popup_call_audio_first_window_t1_ParamLimits

0x9455,	// (0x00017ec1) popup_call_audio_first_window_t1

0x9501,	// (0x00017f6d) popup_call_audio_first_window_t4_ParamLimits

0x9501,	// (0x00017f6d) popup_call_audio_first_window_t4

0x958d,	// (0x00017ff9) popup_call_audio_first_window_t5_ParamLimits

0x958d,	// (0x00017ff9) popup_call_audio_first_window_t5

0x0002,

0xf06d,	// (0x0001dad9) popup_call_audio_first_window_t_ParamLimits

0xf06d,	// (0x0001dad9) popup_call_audio_first_window_t

0x95bc,	// (0x00018028) bg_popup_call_pane_cp02

0x95c6,	// (0x00018032) call_type_pane_cp023

0x95ce,	// (0x0001803a) popup_call_audio_wait_window_g1

0x95d6,	// (0x00018042) popup_call_audio_wait_window_g2

0x0001,

0xf074,	// (0x0001dae0) popup_call_audio_wait_window_g

0x95de,	// (0x0001804a) popup_call_audio_wait_window_t3

0x95ec,	// (0x00018058) bg_popup_call_pane_cp03_ParamLimits

0x95ec,	// (0x00018058) bg_popup_call_pane_cp03

0x964c,	// (0x000180b8) call_thumbnail_pane_cp011_ParamLimits

0x964c,	// (0x000180b8) call_thumbnail_pane_cp011

0x9658,	// (0x000180c4) call_type_pane_cp034_ParamLimits

0x9658,	// (0x000180c4) call_type_pane_cp034

0x9694,	// (0x00018100) popup_call_audio_second_window_g1_ParamLimits

0x9694,	// (0x00018100) popup_call_audio_second_window_g1

0x96d0,	// (0x0001813c) popup_call_audio_second_window_g2_ParamLimits

0x96d0,	// (0x0001813c) popup_call_audio_second_window_g2

0x0001,

0xf079,	// (0x0001dae5) popup_call_audio_second_window_g_ParamLimits

0xf079,	// (0x0001dae5) popup_call_audio_second_window_g

0x970c,	// (0x00018178) popup_call_audio_second_window_t1_ParamLimits

0x970c,	// (0x00018178) popup_call_audio_second_window_t1

0x978d,	// (0x000181f9) popup_call_audio_second_window_t2_ParamLimits

0x978d,	// (0x000181f9) popup_call_audio_second_window_t2

0x97c3,	// (0x0001822f) popup_call_audio_second_window_t3_ParamLimits

0x97c3,	// (0x0001822f) popup_call_audio_second_window_t3

0x0002,

0xf07e,	// (0x0001daea) popup_call_audio_second_window_t_ParamLimits

0xf07e,	// (0x0001daea) popup_call_audio_second_window_t

0x95bc,	// (0x00018028) bg_popup_call_pane_cp04

0x97f9,	// (0x00018265) list_conf_pane

0x9801,	// (0x0001826d) popup_call_audio_conf_window_t1

0x980f,	// (0x0001827b) call_thumbnail_pane_g1

0x9817,	// (0x00018283) bg_pinb_pane_ParamLimits

0x9817,	// (0x00018283) bg_pinb_pane

0x9825,	// (0x00018291) find_pinb_pane

0x9817,	// (0x00018283) listscroll_pinb_pane_ParamLimits

0x9817,	// (0x00018283) listscroll_pinb_pane

0x982f,	// (0x0001829b) pinb_bg_pane_g1

0x982f,	// (0x0001829b) pinb_bg_pane_g2

0x982f,	// (0x0001829b) pinb_bg_pane_g3

0x982f,	// (0x0001829b) pinb_bg_pane_g4

0x982f,	// (0x0001829b) pinb_bg_pane_g5

0x982f,	// (0x0001829b) pinb_bg_pane_g6

0x982f,	// (0x0001829b) pinb_bg_pane_g7

0x982f,	// (0x0001829b) pinb_bg_pane_g8

0x982f,	// (0x0001829b) pinb_bg_pane_g9

0x982f,	// (0x0001829b) pinb_bg_pane_g10

0x0009,

0xf085,	// (0x0001daf1) pinb_bg_pane_g

0x912c,	// (0x00017b98) grid_pinb_pane

0x912c,	// (0x00017b98) list_pinb_pane

0x919b,	// (0x00017c07) scroll_pane_cp01_ParamLimits

0x919b,	// (0x00017c07) scroll_pane_cp01

0x9839,	// (0x000182a5) find_pinb_pane_g1_ParamLimits

0x9839,	// (0x000182a5) find_pinb_pane_g1

0x9851,	// (0x000182bd) find_pinb_pane_t1

0x9863,	// (0x000182cf) find_pinb_pane_t2

0x0001,

0xf09f,	// (0x0001db0b) find_pinb_pane_t

0x9878,	// (0x000182e4) input_focus_pane_cp01_ParamLimits

0x9878,	// (0x000182e4) input_focus_pane_cp01

0x9884,	// (0x000182f0) cell_pinb_pane_ParamLimits

0x9884,	// (0x000182f0) cell_pinb_pane

0x9892,	// (0x000182fe) cell_pinb_pane_g1_ParamLimits

0x9892,	// (0x000182fe) cell_pinb_pane_g1

0x98a0,	// (0x0001830c) cell_pinb_pane_g2_ParamLimits

0x98a0,	// (0x0001830c) cell_pinb_pane_g2

0x98a0,	// (0x0001830c) cell_pinb_pane_g3_ParamLimits

0x98a0,	// (0x0001830c) cell_pinb_pane_g3

0x0002,

0xf0a4,	// (0x0001db10) cell_pinb_pane_g_ParamLimits

0xf0a4,	// (0x0001db10) cell_pinb_pane_g

0x95bc,	// (0x00018028) grid_highlight_pane_cp01

0x9884,	// (0x000182f0) list_pinb_item_pane_ParamLimits

0x9884,	// (0x000182f0) list_pinb_item_pane

0x912c,	// (0x00017b98) list_highlight_pane_cp02

0x98ae,	// (0x0001831a) list_pinb_item_pane_g1_ParamLimits

0x98ae,	// (0x0001831a) list_pinb_item_pane_g1

0x98a0,	// (0x0001830c) list_pinb_item_pane_g2_ParamLimits

0x98a0,	// (0x0001830c) list_pinb_item_pane_g2

0x9892,	// (0x000182fe) list_pinb_item_pane_g3_ParamLimits

0x9892,	// (0x000182fe) list_pinb_item_pane_g3

0x98a0,	// (0x0001830c) list_pinb_item_pane_g4_ParamLimits

0x98a0,	// (0x0001830c) list_pinb_item_pane_g4

0x0003,

0xf0ab,	// (0x0001db17) list_pinb_item_pane_g_ParamLimits

0xf0ab,	// (0x0001db17) list_pinb_item_pane_g

0x98bc,	// (0x00018328) list_pinb_item_pane_t1_ParamLimits

0x98bc,	// (0x00018328) list_pinb_item_pane_t1

0x08dc,	// (0x0000f348) calc_display_pane

0x0901,	// (0x0000f36d) calc_paper_pane

0x0924,	// (0x0000f390) grid_calc_pane

0x95bc,	// (0x00018028) bg_list_pane_cp01

0x0952,	// (0x0000f3be) clock_g1

0x095a,	// (0x0000f3c6) clock_g2

0x0001,

0xf0b4,	// (0x0001db20) clock_g

0x0962,	// (0x0000f3ce) clock_t1_ParamLimits

0x0962,	// (0x0000f3ce) clock_t1

0x0977,	// (0x0000f3e3) clock_t2_ParamLimits

0x0977,	// (0x0000f3e3) clock_t2

0x0989,	// (0x0000f3f5) clock_t3_ParamLimits

0x0989,	// (0x0000f3f5) clock_t3

0x099b,	// (0x0000f407) clock_t4_ParamLimits

0x099b,	// (0x0000f407) clock_t4

0x09ad,	// (0x0000f419) clock_t5_ParamLimits

0x09ad,	// (0x0000f419) clock_t5

0x09c2,	// (0x0000f42e) clock_t6_ParamLimits

0x09c2,	// (0x0000f42e) clock_t6

0x09d4,	// (0x0000f440) clock_t7_ParamLimits

0x09d4,	// (0x0000f440) clock_t7

0x09e6,	// (0x0000f452) clock_t8_ParamLimits

0x09e6,	// (0x0000f452) clock_t8

0x09fa,	// (0x0000f466) clock_t9_ParamLimits

0x09fa,	// (0x0000f466) clock_t9

0x0008,

0xf0b9,	// (0x0001db25) clock_t_ParamLimits

0xf0b9,	// (0x0001db25) clock_t

0x98d8,	// (0x00018344) popup_clock_analogue_window_cp02

0x98d8,	// (0x00018344) popup_clock_digital_window_cp01

0x95bc,	// (0x00018028) listscroll_help_pane

0x95bc,	// (0x00018028) phob_pre_status_pane

0x98e0,	// (0x0001834c) grid_qdial_pane

0x9817,	// (0x00018283) listscroll_mce_pane

0x9817,	// (0x00018283) bg_notes_pane

0x98ea,	// (0x00018356) list_notes_pane

0x0a0e,	// (0x0000f47a) scroll_pane_cp06

0x98f8,	// (0x00018364) bg_calc_paper_pane

0x990c,	// (0x00018378) list_calc_pane

0x9926,	// (0x00018392) bg_calc_display_pane

0x0a22,	// (0x0000f48e) calc_display_pane_t1

0x0a34,	// (0x0000f4a0) calc_display_pane_t2

0x9932,	// (0x0001839e) calc_display_pane_t3

0x0002,

0xf0cc,	// (0x0001db38) calc_display_pane_t

0x0a46,	// (0x0000f4b2) cell_calc_pane_ParamLimits

0x0a46,	// (0x0000f4b2) cell_calc_pane

0x9944,	// (0x000183b0) bg_calc_paper_pane_g1

0x9950,	// (0x000183bc) bg_calc_paper_pane_g2

0x995c,	// (0x000183c8) bg_calc_paper_pane_g3

0x9968,	// (0x000183d4) bg_calc_paper_pane_g4

0x9974,	// (0x000183e0) bg_calc_paper_pane_g5

0x0a7b,	// (0x0000f4e7) bg_calc_paper_pane_g6

0x0a8a,	// (0x0000f4f6) bg_calc_paper_pane_g7

0x0a99,	// (0x0000f505) bg_calc_paper_pane_g8

0x0007,

0xf0d3,	// (0x0001db3f) bg_calc_paper_pane_g

0x0aac,	// (0x0000f518) calc_bg_paper_pane_g9

0x0abf,	// (0x0000f52b) list_calc_item_pane_ParamLimits

0x0abf,	// (0x0000f52b) list_calc_item_pane

0x9980,	// (0x000183ec) list_calc_item_pane_g1

0x998d,	// (0x000183f9) list_calc_item_pane_t1_ParamLimits

0x998d,	// (0x000183f9) list_calc_item_pane_t1

0x0ad4,	// (0x0000f540) list_calc_item_pane_t2_ParamLimits

0x0ad4,	// (0x0000f540) list_calc_item_pane_t2

0x0001,

0xf0e4,	// (0x0001db50) list_calc_item_pane_t_ParamLimits

0xf0e4,	// (0x0001db50) list_calc_item_pane_t

0x982f,	// (0x0001829b) cell_calc_pane_g1

0x999f,	// (0x0001840b) grid_highlight_pane_cp02

0x99c1,	// (0x0001842d) bg_calc_display_pane_g1

0x0b06,	// (0x0000f572) bg_calc_display_pane_g2

0xcee1,	// (0x0001b94d) bg_calc_display_pane_g3

0x0002,

0xf0ee,	// (0x0001db5a) bg_calc_display_pane_g

0x0b10,	// (0x0000f57c) cell_qdial_pane_ParamLimits

0x0b10,	// (0x0000f57c) cell_qdial_pane

0x0b24,	// (0x0000f590) cell_qdial_pane_g1_ParamLimits

0x0b24,	// (0x0000f590) cell_qdial_pane_g1

0x0b3a,	// (0x0000f5a6) cell_qdial_pane_g2_ParamLimits

0x0b3a,	// (0x0000f5a6) cell_qdial_pane_g2

0x99ca,	// (0x00018436) cell_qdial_pane_g3_ParamLimits

0x99ca,	// (0x00018436) cell_qdial_pane_g3

0x0003,

0xf0f5,	// (0x0001db61) cell_qdial_pane_g_ParamLimits

0xf0f5,	// (0x0001db61) cell_qdial_pane_g

0x0b60,	// (0x0000f5cc) cell_qdial_pane_t1_ParamLimits

0x0b60,	// (0x0000f5cc) cell_qdial_pane_t1

0x0b78,	// (0x0000f5e4) cell_qdial_pane_t2_ParamLimits

0x0b78,	// (0x0000f5e4) cell_qdial_pane_t2

0x0b8b,	// (0x0000f5f7) cell_qdial_pane_t3_ParamLimits

0x0b8b,	// (0x0000f5f7) cell_qdial_pane_t3

0x0002,

0xf0fe,	// (0x0001db6a) cell_qdial_pane_t_ParamLimits

0xf0fe,	// (0x0001db6a) cell_qdial_pane_t

0x95bc,	// (0x00018028) grid_highlight_pane_cp04

0x99d6,	// (0x00018442) thumbnail_qdial_pane_ParamLimits

0x99d6,	// (0x00018442) thumbnail_qdial_pane

0x9a32,	// (0x0001849e) list_help_pane

0x9a3b,	// (0x000184a7) scroll_pane_cp02

0x0b9e,	// (0x0000f60a) help_list_pane_t1_ParamLimits

0x0b9e,	// (0x0000f60a) help_list_pane_t1

0x9a44,	// (0x000184b0) bg_notes_pane_g2

0x9a4c,	// (0x000184b8) bg_notes_pane_g3

0x9a54,	// (0x000184c0) notes_bg_pane_g1

0x9a5c,	// (0x000184c8) notes_bg_pane_g4

0x9a64,	// (0x000184d0) notes_bg_pane_g5

0x9a6c,	// (0x000184d8) notes_bg_pane_g6

0x9a74,	// (0x000184e0) notes_bg_pane_g7

0x9a7c,	// (0x000184e8) notes_bg_pane_g8

0x9a84,	// (0x000184f0) notes_bg_pane_g9

0x0006,

0xf11c,	// (0x0001db88) notes_bg_pane_g

0x0bbd,	// (0x0000f629) list_notes_text_pane_ParamLimits

0x0bbd,	// (0x0000f629) list_notes_text_pane

0x9a8c,	// (0x000184f8) list_notes_text_pane_g1

0x9a95,	// (0x00018501) list_notes_text_pane_t1

0x0bd3,	// (0x0000f63f) listscroll_cale_week_pane

0x0bff,	// (0x0000f66b) bg_cale_heading_pane

0x9abd,	// (0x00018529) bg_cale_pane_cp01

0x0c17,	// (0x0000f683) cale_week_corner_pane

0x0c36,	// (0x0000f6a2) cale_week_day_heading_pane

0x0c53,	// (0x0000f6bf) cale_week_scroll_pane_g1

0x0c66,	// (0x0000f6d2) cale_week_scroll_pane_g2

0x0c7e,	// (0x0000f6ea) cale_week_scroll_pane_g3

0x0c96,	// (0x0000f702) cale_week_scroll_pane_g4

0x0cae,	// (0x0000f71a) cale_week_scroll_pane_g5

0x0cce,	// (0x0000f73a) cale_week_scroll_pane_g6

0x0cee,	// (0x0000f75a) cale_week_scroll_pane_g7

0x0d0e,	// (0x0000f77a) cale_week_scroll_pane_g8

0x0d32,	// (0x0000f79e) cale_week_scroll_pane_g9

0x0d4a,	// (0x0000f7b6) cale_week_scroll_pane_g10

0x0d62,	// (0x0000f7ce) cale_week_scroll_pane_g11

0x0d7a,	// (0x0000f7e6) cale_week_scroll_pane_g12

0x0d92,	// (0x0000f7fe) cale_week_scroll_pane_g13

0x0d92,	// (0x0000f7fe) cale_week_scroll_pane_g14

0x0d92,	// (0x0000f7fe) cale_week_scroll_pane_g15

0x000f,

0xf12b,	// (0x0001db97) cale_week_scroll_pane_g

0x0dce,	// (0x0000f83a) cale_week_time_pane

0x0df2,	// (0x0000f85e) grid_cale_week_pane

0x9aec,	// (0x00018558) scroll_pane_cp08

0x0e18,	// (0x0000f884) cell_cale_week_pane_ParamLimits

0x0e18,	// (0x0000f884) cell_cale_week_pane

0x0ea6,	// (0x0000f912) cale_week_day_heading_pane_t1

0x0ed0,	// (0x0000f93c) cale_week_day_heading_pane_t2

0x0eff,	// (0x0000f96b) cale_week_day_heading_pane_t3

0x0f2e,	// (0x0000f99a) cale_week_day_heading_pane_t4

0x0f5d,	// (0x0000f9c9) cale_week_day_heading_pane_t5

0x0f94,	// (0x0000fa00) cale_week_day_heading_pane_t6

0x0fcb,	// (0x0000fa37) cale_week_day_heading_pane_t7

0x0006,

0xf14c,	// (0x0001dbb8) cale_week_day_heading_pane_t

0x9b09,	// (0x00018575) bg_cale_side_pane

0x0ff5,	// (0x0000fa61) cale_week_time_pane_t1

0x100f,	// (0x0000fa7b) cale_week_time_pane_t2

0x1029,	// (0x0000fa95) cale_week_time_pane_t3

0x1043,	// (0x0000faaf) cale_week_time_pane_t4

0x105d,	// (0x0000fac9) cale_week_time_pane_t5

0x1077,	// (0x0000fae3) cale_week_time_pane_t6

0x1091,	// (0x0000fafd) cale_week_time_pane_t7

0x10ab,	// (0x0000fb17) cale_week_time_pane_t8

0x0007,

0xf15b,	// (0x0001dbc7) cale_week_time_pane_t

0x10cb,	// (0x0000fb37) cell_cale_week_pane_g2

0x10ef,	// (0x0000fb5b) cell_cale_week_pane_g3_ParamLimits

0x10ef,	// (0x0000fb5b) cell_cale_week_pane_g3

0x9b17,	// (0x00018583) grid_highlight_pane_cp07

0x9b1f,	// (0x0001858b) listscroll_gms_pane

0x9b29,	// (0x00018595) grid_gms_pane

0x9b32,	// (0x0001859e) listscroll_gms_pane_g1

0x9b3a,	// (0x000185a6) listscroll_gms_pane_g2

0x0001,

0xf16c,	// (0x0001dbd8) listscroll_gms_pane_g

0x1107,	// (0x0000fb73) scroll_pane_cp010

0x1112,	// (0x0000fb7e) cell_gms_pane_ParamLimits

0x1112,	// (0x0000fb7e) cell_gms_pane

0x1124,	// (0x0000fb90) cell_gms_pane_g1

0x9b42,	// (0x000185ae) cell_gms_pane_g2

0x9a8c,	// (0x000184f8) cell_gms_pane_g3

0x9b4a,	// (0x000185b6) cell_gms_pane_g4

0x0003,

0xf171,	// (0x0001dbdd) cell_gms_pane_g

0x9b53,	// (0x000185bf) grid_highlight_pane_cp09

0x2f13,	// (0x0001197f) phob_pre_status_pane_g1

0x2f1b,	// (0x00011987) phob_pre_status_pane_g2

0x2f23,	// (0x0001198f) phob_pre_status_pane_g3

0x2f2b,	// (0x00011997) phob_pre_status_pane_g4

0x0004,

0xf548,	// (0x0001dfb4) phob_pre_status_pane_g

0x2f3b,	// (0x000119a7) phob_pre_status_pane_t1

0x2f49,	// (0x000119b5) phob_pre_status_pane_t2

0x2f59,	// (0x000119c5) phob_pre_status_pane_t3

0x0002,

0xf553,	// (0x0001dfbf) phob_pre_status_pane_t

0x9b5b,	// (0x000185c7) bg_list_pane_cp05

0x1134,	// (0x0000fba0) grid_vorec_pane

0x113c,	// (0x0000fba8) vorec_t1

0x114a,	// (0x0000fbb6) vorec_t2

0x1158,	// (0x0000fbc4) vorec_t3

0x1166,	// (0x0000fbd2) vorec_t4

0xeb01,	// (0x0001d56d) vorec_t5

0x8490,	// (0x00016efc) vorec_t6

0x0004,

0xf17a,	// (0x0001dbe6) vorec_t

0x849e,	// (0x00016f0a) wait_bar_pane_cp01

0x1182,	// (0x0000fbee) cell_vorec_pane_ParamLimits

0x1182,	// (0x0000fbee) cell_vorec_pane

0x9b63,	// (0x000185cf) cell_vorec_pane_g1

0x95bc,	// (0x00018028) grid_highlight_pane_cp05

0x919b,	// (0x00017c07) cams_zoom_pane

0x919b,	// (0x00017c07) image_vga_pane

0x9892,	// (0x000182fe) main_camera_pane_g1

0x9892,	// (0x000182fe) main_camera_pane_g2

0x9892,	// (0x000182fe) main_camera_pane_g3

0x9892,	// (0x000182fe) main_camera_pane_g4

0x9892,	// (0x000182fe) main_camera_pane_g5

0x9892,	// (0x000182fe) main_camera_pane_g6

0x9892,	// (0x000182fe) main_camera_pane_g7

0x0007,

0xf185,	// (0x0001dbf1) main_camera_pane_g

0x9b6d,	// (0x000185d9) main_camera_pane_t1

0x9b6d,	// (0x000185d9) main_camera_pane_t2

0x0001,

0xf196,	// (0x0001dc02) main_camera_pane_t

0x11a9,	// (0x0000fc15) cams_zoom_pane_cp_ParamLimits

0x11a9,	// (0x0000fc15) cams_zoom_pane_cp

0x11dd,	// (0x0000fc49) image_cif_pane_ParamLimits

0x11dd,	// (0x0000fc49) image_cif_pane

0x912c,	// (0x00017b98) image_subqcif_pane

0x11ef,	// (0x0000fc5b) main_video_pane_g1_ParamLimits

0x11ef,	// (0x0000fc5b) main_video_pane_g1

0x121d,	// (0x0000fc89) main_video_pane_g2_ParamLimits

0x121d,	// (0x0000fc89) main_video_pane_g2

0x1257,	// (0x0000fcc3) main_video_pane_g3_ParamLimits

0x1257,	// (0x0000fcc3) main_video_pane_g3

0x1257,	// (0x0000fcc3) main_video_pane_g4_ParamLimits

0x1257,	// (0x0000fcc3) main_video_pane_g4

0x128b,	// (0x0000fcf7) main_video_pane_g5_ParamLimits

0x128b,	// (0x0000fcf7) main_video_pane_g5

0x9b81,	// (0x000185ed) main_video_pane_g6_ParamLimits

0x9b81,	// (0x000185ed) main_video_pane_g6

0x0006,

0xf19b,	// (0x0001dc07) main_video_pane_g_ParamLimits

0xf19b,	// (0x0001dc07) main_video_pane_g

0x12a7,	// (0x0000fd13) main_video_pane_t1_ParamLimits

0x12a7,	// (0x0000fd13) main_video_pane_t1

0x9b9b,	// (0x00018607) cams_zoom_pane_g1

0x9b9b,	// (0x00018607) cams_zoom_pane_g2

0x9b9b,	// (0x00018607) cams_zoom_pane_g3

0x9b9b,	// (0x00018607) cams_zoom_pane_g4

0x0003,

0xf1aa,	// (0x0001dc16) cams_zoom_pane_g

0x12ff,	// (0x0000fd6b) grid_cams_pane

0x1319,	// (0x0000fd85) linegrid_cams_pane

0x132c,	// (0x0000fd98) cell_cams_pane_ParamLimits

0x132c,	// (0x0000fd98) cell_cams_pane

0x9ba5,	// (0x00018611) cams_burst_image_pane

0x9bad,	// (0x00018619) cell_cams_pane_g1

0x95bc,	// (0x00018028) grid_highlight_pane_cp03

0x982f,	// (0x0001829b) mp_bg_pane_g1

0x912c,	// (0x00017b98) bg_list_pane_cp03

0x912c,	// (0x00017b98) bg_mp_pane

0x912c,	// (0x00017b98) grid_mp_pane

0x9b9b,	// (0x00018607) media_player_g1

0xa0fc,	// (0x00018b68) media_player_t1

0xa0fc,	// (0x00018b68) media_player_t2

0xa0fc,	// (0x00018b68) media_player_t3

0xa0fc,	// (0x00018b68) media_player_t4

0xa0fc,	// (0x00018b68) media_player_t5

0xa0fc,	// (0x00018b68) media_player_t6

0xa0fc,	// (0x00018b68) media_player_t7

0x0006,

0xf532,	// (0x0001df9e) media_player_t

0x912c,	// (0x00017b98) wait_bar_pane_cp02

0xf517,	// (0x0001df83) main_usb_pane_t

0xa3d7,	// (0x00018e43) cell_mp_pane

0x982f,	// (0x0001829b) cell_mp_pane_g1

0x95bc,	// (0x00018028) grid_highlight_pane_cp06

0x9bb5,	// (0x00018621) grid_skin_colour_pane

0x9bbd,	// (0x00018629) list_highlight_pane_cp03

0x134c,	// (0x0000fdb8) skin_g1

0x9bc5,	// (0x00018631) skin_t1

0x9bd4,	// (0x00018640) skin_t2

0x0001,

0xf1d8,	// (0x0001dc44) skin_t

0x1354,	// (0x0000fdc0) cell_skin_colour_pane_ParamLimits

0x1354,	// (0x0000fdc0) cell_skin_colour_pane

0x9be2,	// (0x0001864e) cell_skin_colour_pane_g1

0x13cd,	// (0x0000fe39) call_video_g1_ParamLimits

0x13cd,	// (0x0000fe39) call_video_g1

0x13e9,	// (0x0000fe55) call_video_g2_ParamLimits

0x13e9,	// (0x0000fe55) call_video_g2

0x0001,

0xf1dd,	// (0x0001dc49) call_video_g_ParamLimits

0xf1dd,	// (0x0001dc49) call_video_g

0x143b,	// (0x0000fea7) call_video_uplink_pane_cp1_ParamLimits

0x143b,	// (0x0000fea7) call_video_uplink_pane_cp1

0x9bf4,	// (0x00018660) call_video_uplink_pane_cp2

0x14da,	// (0x0000ff46) video_down_crop_pane_ParamLimits

0x14da,	// (0x0000ff46) video_down_crop_pane

0x15c3,	// (0x0001002f) video_down_pane_ParamLimits

0x15c3,	// (0x0001002f) video_down_pane

0x9bfc,	// (0x00018668) video_down_subqcif_pane_ParamLimits

0x9bfc,	// (0x00018668) video_down_subqcif_pane

0x9c14,	// (0x00018680) video_down_subqcif_pane_cp_ParamLimits

0x9c14,	// (0x00018680) video_down_subqcif_pane_cp

0x9c3a,	// (0x000186a6) im_reading_pane_ParamLimits

0x9c3a,	// (0x000186a6) im_reading_pane

0x16d3,	// (0x0001013f) im_writing_pane_ParamLimits

0x16d3,	// (0x0001013f) im_writing_pane

0x16e9,	// (0x00010155) im_reading_pane_t1

0x9c54,	// (0x000186c0) list_im_pane

0x9c65,	// (0x000186d1) scroll_pane_cp07

0x1723,	// (0x0001018f) im_writing_pane_t1_ParamLimits

0x1723,	// (0x0001018f) im_writing_pane_t1

0x9c7e,	// (0x000186ea) im_writing_pane_t2_ParamLimits

0x9c7e,	// (0x000186ea) im_writing_pane_t2

0x0001,

0xf1e7,	// (0x0001dc53) im_writing_pane_t_ParamLimits

0xf1e7,	// (0x0001dc53) im_writing_pane_t

0x95bc,	// (0x00018028) input_focus_pane_cp04

0x95bc,	// (0x00018028) input_focus_pane_cp05

0x1738,	// (0x000101a4) list_im_single_pane_ParamLimits

0x1738,	// (0x000101a4) list_im_single_pane

0x174d,	// (0x000101b9) list_single_im_pane_t1

0x9b5b,	// (0x000185c7) blid_accuracy_pane

0x9b5b,	// (0x000185c7) blid_compass_pane

0xb9c6,	// (0x0001a432) main_location_t1

0xb9c6,	// (0x0001a432) main_location_t2

0xb9c6,	// (0x0001a432) main_location_t3

0x0002,

0xf541,	// (0x0001dfad) main_location_t

0x95bc,	// (0x00018028) aid_levels_location

0x982f,	// (0x0001829b) blid_accuracy_pane_g1

0x982f,	// (0x0001829b) blid_accuracy_pane_g2

0x0001,

0xf236,	// (0x0001dca2) blid_accuracy_pane_g

0x9cc6,	// (0x00018732) wml_content_pane

0x9d04,	// (0x00018770) wml_button_pane_ParamLimits

0x9d04,	// (0x00018770) wml_button_pane

0x175c,	// (0x000101c8) wml_list_single_large_pane_ParamLimits

0x175c,	// (0x000101c8) wml_list_single_large_pane

0x1771,	// (0x000101dd) wml_list_single_medium_pane_ParamLimits

0x1771,	// (0x000101dd) wml_list_single_medium_pane

0x1788,	// (0x000101f4) wml_list_single_small_pane_ParamLimits

0x1788,	// (0x000101f4) wml_list_single_small_pane

0x9d18,	// (0x00018784) wml_selection_box_pane_ParamLimits

0x9d18,	// (0x00018784) wml_selection_box_pane

0x9d2b,	// (0x00018797) wml_list_single_pane_t1

0x9d3a,	// (0x000187a6) wml_list_single_medium_pane_t1

0x9d49,	// (0x000187b5) wml_list_single_large_pane_t1

0x9d58,	// (0x000187c4) input_focus_pane_cp02_ParamLimits

0x9d58,	// (0x000187c4) input_focus_pane_cp02

0x9d6b,	// (0x000187d7) wml_selection_box_pane_g1

0x9d74,	// (0x000187e0) wml_selection_box_pane_t1_ParamLimits

0x9d74,	// (0x000187e0) wml_selection_box_pane_t1

0x9817,	// (0x00018283) bg_wml_button_pane_ParamLimits

0x9817,	// (0x00018283) bg_wml_button_pane

0x9d8c,	// (0x000187f8) wml_button_pane_g1

0x9d94,	// (0x00018800) wml_button_pane_t1

0x9d8c,	// (0x000187f8) wml_button_bg_pane_g1

0x9da4,	// (0x00018810) wml_button_bg_pane_g2

0x9dac,	// (0x00018818) wml_button_bg_pane_g3

0x9db4,	// (0x00018820) wml_button_bg_pane_g4

0x9dbc,	// (0x00018828) wml_button_bg_pane_g5

0x9dc4,	// (0x00018830) wml_button_bg_pane_g6

0x9dcc,	// (0x00018838) wml_button_bg_pane_g7

0x9dd4,	// (0x00018840) wml_button_bg_pane_g8

0x9ddc,	// (0x00018848) wml_button_bg_pane_g9

0x0008,

0xf1ec,	// (0x0001dc58) wml_button_bg_pane_g

0x17a1,	// (0x0001020d) bg_list_pane_cp02

0x9de4,	// (0x00018850) mce_header_pane_ParamLimits

0x9de4,	// (0x00018850) mce_header_pane

0x9dfa,	// (0x00018866) mce_icon_pane

0x9dfa,	// (0x00018866) mce_image_pane

0x9e03,	// (0x0001886f) mce_text_pane_ParamLimits

0x9e03,	// (0x0001886f) mce_text_pane

0x17a9,	// (0x00010215) scroll_pane_cp03

0x9cfc,	// (0x00018768) scroll_pane_cp04

0x9e16,	// (0x00018882) scroll_pane_cp05_ParamLimits

0x9e16,	// (0x00018882) scroll_pane_cp05

0x17b3,	// (0x0001021f) mce_header_field_pane_ParamLimits

0x17b3,	// (0x0001021f) mce_header_field_pane

0x17ca,	// (0x00010236) mce_header_field_pane_2_ParamLimits

0x17ca,	// (0x00010236) mce_header_field_pane_2

0x17e0,	// (0x0001024c) mce_header_field_pane_3

0x17e8,	// (0x00010254) list_single_mce_message_pane_ParamLimits

0x17e8,	// (0x00010254) list_single_mce_message_pane

0x17fe,	// (0x0001026a) list_single_mce_smart_pane_ParamLimits

0x17fe,	// (0x0001026a) list_single_mce_smart_pane

0x9e22,	// (0x0001888e) input_focus_pane_cp03

0x9e2b,	// (0x00018897) list_header_data_pane

0x181f,	// (0x0001028b) mce_header_field_pane_t1

0x182f,	// (0x0001029b) list_single_mce_header_pane_ParamLimits

0x182f,	// (0x0001029b) list_single_mce_header_pane

0x9e33,	// (0x0001889f) list_single_mce_header_pane_t1

0x9e42,	// (0x000188ae) list_single_mce_message_pane_g1

0x9e4a,	// (0x000188b6) list_single_mce_message_pane_t1

0x1869,	// (0x000102d5) bg_cale_heading_pane_cp01_ParamLimits

0x1869,	// (0x000102d5) bg_cale_heading_pane_cp01

0x9e58,	// (0x000188c4) bg_cale_pane_cp02_ParamLimits

0x9e58,	// (0x000188c4) bg_cale_pane_cp02

0x18a3,	// (0x0001030f) cale_month_corner_pane

0x18c2,	// (0x0001032e) cale_month_day_heading_pane_ParamLimits

0x18c2,	// (0x0001032e) cale_month_day_heading_pane

0x1914,	// (0x00010380) cale_month_pane_g1_ParamLimits

0x1914,	// (0x00010380) cale_month_pane_g1

0x1943,	// (0x000103af) cale_month_pane_g2_ParamLimits

0x1943,	// (0x000103af) cale_month_pane_g2

0x1973,	// (0x000103df) cale_month_pane_g3_ParamLimits

0x1973,	// (0x000103df) cale_month_pane_g3

0x19af,	// (0x0001041b) cale_month_pane_g4_ParamLimits

0x19af,	// (0x0001041b) cale_month_pane_g4

0x19eb,	// (0x00010457) cale_month_pane_g5_ParamLimits

0x19eb,	// (0x00010457) cale_month_pane_g5

0x1a33,	// (0x0001049f) cale_month_pane_g6_ParamLimits

0x1a33,	// (0x0001049f) cale_month_pane_g6

0x1a7f,	// (0x000104eb) cale_month_pane_g7_ParamLimits

0x1a7f,	// (0x000104eb) cale_month_pane_g7

0x1acf,	// (0x0001053b) cale_month_pane_g8_ParamLimits

0x1acf,	// (0x0001053b) cale_month_pane_g8

0x1b23,	// (0x0001058f) cale_month_pane_g9_ParamLimits

0x1b23,	// (0x0001058f) cale_month_pane_g9

0x1b75,	// (0x000105e1) cale_month_pane_g10_ParamLimits

0x1b75,	// (0x000105e1) cale_month_pane_g10

0x1bc7,	// (0x00010633) cale_month_pane_g11_ParamLimits

0x1bc7,	// (0x00010633) cale_month_pane_g11

0x1c19,	// (0x00010685) cale_month_pane_g12_ParamLimits

0x1c19,	// (0x00010685) cale_month_pane_g12

0x1c6b,	// (0x000106d7) cale_month_pane_g13_ParamLimits

0x1c6b,	// (0x000106d7) cale_month_pane_g13

0x000c,

0xf1ff,	// (0x0001dc6b) cale_month_pane_g_ParamLimits

0xf1ff,	// (0x0001dc6b) cale_month_pane_g

0x1cbd,	// (0x00010729) cale_month_week_pane

0x1ce1,	// (0x0001074d) grid_cale_month_pane_ParamLimits

0x1ce1,	// (0x0001074d) grid_cale_month_pane

0x1d2a,	// (0x00010796) cale_month_day_heading_pane_t1

0x1d6c,	// (0x000107d8) cale_month_day_heading_pane_t2

0x1da1,	// (0x0001080d) cale_month_day_heading_pane_t3

0x1dd6,	// (0x00010842) cale_month_day_heading_pane_t4

0x1e13,	// (0x0001087f) cale_month_day_heading_pane_t5

0x1e58,	// (0x000108c4) cale_month_day_heading_pane_t6

0x1e9d,	// (0x00010909) cale_month_day_heading_pane_t7

0x0006,

0xf21a,	// (0x0001dc86) cale_month_day_heading_pane_t

0x9b09,	// (0x00018575) bg_cale_side_pane_cp01

0x1eea,	// (0x00010956) cale_month_week_pane_t1

0x1f03,	// (0x0001096f) cale_month_week_pane_t2

0x1f1c,	// (0x00010988) cale_month_week_pane_t3

0x1f35,	// (0x000109a1) cale_month_week_pane_t4

0x1f4e,	// (0x000109ba) cale_month_week_pane_t5

0x1f67,	// (0x000109d3) cale_month_week_pane_t6

0x0005,

0xf229,	// (0x0001dc95) cale_month_week_pane_t

0x1f80,	// (0x000109ec) cell_cale_month_pane_ParamLimits

0x1f80,	// (0x000109ec) cell_cale_month_pane

0x9e97,	// (0x00018903) cell_cale_month_pane_g1

0x20ae,	// (0x00010b1a) cell_cale_month_pane_t1_ParamLimits

0x20ae,	// (0x00010b1a) cell_cale_month_pane_t1

0x9b17,	// (0x00018583) grid_highlight_pane_cp08

0x982f,	// (0x0001829b) main_smil_g1

0x20da,	// (0x00010b46) smil_status_pane

0x9ea3,	// (0x0001890f) smil_text_pane

0xb89e,	// (0x0001a30a) bg_popup_call3_rect_pane_g8

0xb8a6,	// (0x0001a312) bg_popup_call3_rect_pane_g9

0x0008,

0xf4c2,	// (0x0001df2e) bg_popup_call3_rect_pane_g

0xbae3,	// (0x0001a54f) smil_status_volume_pane_g1

0x9ead,	// (0x00018919) smil_status_pane_t1

0xbb16,	// (0x0001a582) volume_smil_pane

0x9ec4,	// (0x00018930) list_smil_text_pane

0x20ef,	// (0x00010b5b) scroll_pane_cp011

0x20fa,	// (0x00010b66) smil_text_list_pane_t1_ParamLimits

0x20fa,	// (0x00010b66) smil_text_list_pane_t1

0x9ece,	// (0x0001893a) aid_volume_smil_ParamLimits

0x9ece,	// (0x0001893a) aid_volume_smil

0x982f,	// (0x0001829b) smil_volume_pane_g1

0x982f,	// (0x0001829b) smil_volume_pane_g2

0x0001,

0xf236,	// (0x0001dca2) smil_volume_pane_g

0x0bd3,	// (0x0000f63f) listscroll_cale_day_pane

0x9ef0,	// (0x0001895c) bg_cale_pane

0x9f08,	// (0x00018974) list_cale_pane

0x9f2b,	// (0x00018997) scroll_pane_cp09

0x9f3c,	// (0x000189a8) cale_bg_pane_g1

0x9f44,	// (0x000189b0) cale_bg_pane_g2

0x9f4c,	// (0x000189b8) cale_bg_pane_g3

0x9f54,	// (0x000189c0) cale_bg_pane_g4

0x9f5c,	// (0x000189c8) cale_bg_pane_g5

0x9f64,	// (0x000189d0) cale_bg_pane_g6

0x9f6c,	// (0x000189d8) cale_bg_pane_g7

0x9f74,	// (0x000189e0) cale_bg_pane_g8

0x9f7c,	// (0x000189e8) cale_bg_pane_g9

0x0008,

0xf23b,	// (0x0001dca7) cale_bg_pane_g

0x2146,	// (0x00010bb2) list_cale_time_pane_ParamLimits

0x2146,	// (0x00010bb2) list_cale_time_pane

0x9f84,	// (0x000189f0) list_cale_time_pane_g1_ParamLimits

0x9f84,	// (0x000189f0) list_cale_time_pane_g1

0x9f90,	// (0x000189fc) list_cale_time_pane_g2_ParamLimits

0x9f90,	// (0x000189fc) list_cale_time_pane_g2

0x215c,	// (0x00010bc8) list_cale_time_pane_g3_ParamLimits

0x215c,	// (0x00010bc8) list_cale_time_pane_g3

0x216a,	// (0x00010bd6) list_cale_time_pane_g4_ParamLimits

0x216a,	// (0x00010bd6) list_cale_time_pane_g4

0x2178,	// (0x00010be4) list_cale_time_pane_g5_ParamLimits

0x2178,	// (0x00010be4) list_cale_time_pane_g5

0x0005,

0xf24e,	// (0x0001dcba) list_cale_time_pane_g_ParamLimits

0xf24e,	// (0x0001dcba) list_cale_time_pane_g

0x9faa,	// (0x00018a16) list_cale_time_pane_t1_ParamLimits

0x9faa,	// (0x00018a16) list_cale_time_pane_t1

0x9fd2,	// (0x00018a3e) list_cale_time_pane_t2_ParamLimits

0x9fd2,	// (0x00018a3e) list_cale_time_pane_t2

0x2405,	// (0x00010e71) aid_blid_cardinal_pane

0x2443,	// (0x00010eaf) compass_pane_t4

0x9ffa,	// (0x00018a66) list_cale_time_pane_t4_ParamLimits

0x9ffa,	// (0x00018a66) list_cale_time_pane_t4

0x2451,	// (0x00010ebd) compass_pane_t5

0x245f,	// (0x00010ecb) compass_pane_t6

0x246d,	// (0x00010ed9) compass_pane_t7

0xa4f1,	// (0x00018f5d) navi_pane_cc_t1

0xa6e0,	// (0x0001914c) aid_phob_thumbnail_center_pane

0x28c1,	// (0x0001132d) main_postcard_pane_g4_ParamLimits

0x0002,

0xf25b,	// (0x0001dcc7) list_cale_time_pane_t_ParamLimits

0xf25b,	// (0x0001dcc7) list_cale_time_pane_t

0x9213,	// (0x00017c7f) bg_popup_window_pane_cp02_ParamLimits

0x9213,	// (0x00017c7f) bg_popup_window_pane_cp02

0xa022,	// (0x00018a8e) heading_pane_cp01_ParamLimits

0xa022,	// (0x00018a8e) heading_pane_cp01

0xa02e,	// (0x00018a9a) loc_req_pane_ParamLimits

0xa02e,	// (0x00018a9a) loc_req_pane

0xa03e,	// (0x00018aaa) loc_type_pane_ParamLimits

0xa03e,	// (0x00018aaa) loc_type_pane

0xa050,	// (0x00018abc) loc_type_pane_t1_ParamLimits

0xa050,	// (0x00018abc) loc_type_pane_t1

0xa062,	// (0x00018ace) loc_type_pane_t2_ParamLimits

0xa062,	// (0x00018ace) loc_type_pane_t2

0xa074,	// (0x00018ae0) loc_type_pane_t3_ParamLimits

0xa074,	// (0x00018ae0) loc_type_pane_t3

0x0002,

0xf262,	// (0x0001dcce) loc_type_pane_t_ParamLimits

0xf262,	// (0x0001dcce) loc_type_pane_t

0xa086,	// (0x00018af2) list_loc_req_pane

0xa090,	// (0x00018afc) scroll_pane_cp012

0x2186,	// (0x00010bf2) list_single_loc_request_popup_menu_pane_ParamLimits

0x2186,	// (0x00010bf2) list_single_loc_request_popup_menu_pane

0xa09b,	// (0x00018b07) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xa09b,	// (0x00018b07) list_single_loc_request_popup_menu_pane_g1

0xa0a7,	// (0x00018b13) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xa0a7,	// (0x00018b13) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf269,	// (0x0001dcd5) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf269,	// (0x0001dcd5) list_single_loc_request_popup_menu_pane_g

0xa0b3,	// (0x00018b1f) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xa0b3,	// (0x00018b1f) list_single_loc_request_popup_menu_pane_t1

0x9817,	// (0x00018283) bg_popup_window_pane_cp03_ParamLimits

0x9817,	// (0x00018283) bg_popup_window_pane_cp03

0xa0c9,	// (0x00018b35) heading_loc_req_pane_ParamLimits

0xa0c9,	// (0x00018b35) heading_loc_req_pane

0x2193,	// (0x00010bff) popup_dyc_status_message_window_g1_ParamLimits

0x2193,	// (0x00010bff) popup_dyc_status_message_window_g1

0x21a7,	// (0x00010c13) popup_dyc_status_message_window_t1_ParamLimits

0x21a7,	// (0x00010c13) popup_dyc_status_message_window_t1

0x21bc,	// (0x00010c28) popup_dyc_status_message_window_t2_ParamLimits

0x21bc,	// (0x00010c28) popup_dyc_status_message_window_t2

0x21d1,	// (0x00010c3d) popup_dyc_status_message_window_t3_ParamLimits

0x21d1,	// (0x00010c3d) popup_dyc_status_message_window_t3

0x0002,

0xf26e,	// (0x0001dcda) popup_dyc_status_message_window_t_ParamLimits

0xf26e,	// (0x0001dcda) popup_dyc_status_message_window_t

0x95bc,	// (0x00018028) bg_heading_pane_cp01

0xa0d5,	// (0x00018b41) heading_loc_req_pane_g1

0xa0dd,	// (0x00018b49) heading_loc_req_pane_g2

0xa0e5,	// (0x00018b51) heading_loc_req_pane_g3

0x0002,

0xf275,	// (0x0001dce1) heading_loc_req_pane_g

0xa0ed,	// (0x00018b59) heading_loc_req_pane_t1

0xa10c,	// (0x00018b78) bg_popup_sub_pane_cp01_ParamLimits

0xa10c,	// (0x00018b78) bg_popup_sub_pane_cp01

0xa11a,	// (0x00018b86) popup_cale_events_window_g1_ParamLimits

0xa11a,	// (0x00018b86) popup_cale_events_window_g1

0xa13a,	// (0x00018ba6) popup_cale_events_window_g2_ParamLimits

0xa13a,	// (0x00018ba6) popup_cale_events_window_g2

0x0001,

0xf297,	// (0x0001dd03) popup_cale_events_window_g_ParamLimits

0xf297,	// (0x0001dd03) popup_cale_events_window_g

0xa15a,	// (0x00018bc6) popup_cale_events_window_t1_ParamLimits

0xa15a,	// (0x00018bc6) popup_cale_events_window_t1

0xa16c,	// (0x00018bd8) popup_cale_events_window_t2_ParamLimits

0xa16c,	// (0x00018bd8) popup_cale_events_window_t2

0xa1aa,	// (0x00018c16) popup_cale_events_window_t3_ParamLimits

0xa1aa,	// (0x00018c16) popup_cale_events_window_t3

0xa1e4,	// (0x00018c50) popup_cale_events_window_t4_ParamLimits

0xa1e4,	// (0x00018c50) popup_cale_events_window_t4

0x0003,

0xf29c,	// (0x0001dd08) popup_cale_events_window_t_ParamLimits

0xf29c,	// (0x0001dd08) popup_cale_events_window_t

0x21f9,	// (0x00010c65) call_type_pane

0x2209,	// (0x00010c75) popup_call_status_window_g1

0x221d,	// (0x00010c89) popup_call_status_window_g2

0x2231,	// (0x00010c9d) popup_call_status_window_g3

0x0002,

0xf2a5,	// (0x0001dd11) popup_call_status_window_g

0xa21a,	// (0x00018c86) call_type_pane_g1

0xa223,	// (0x00018c8f) call_type_pane_g2

0x0001,

0xf2ac,	// (0x0001dd18) call_type_pane_g

0x95bc,	// (0x00018028) bg_popup_sub_pane_cp02

0xa22c,	// (0x00018c98) listscroll_popup_wml_pane

0xa234,	// (0x00018ca0) list_wml_pane

0xa23e,	// (0x00018caa) scroll_pane_cp013

0xa249,	// (0x00018cb5) list_single_graphic_popup_wml_pane_ParamLimits

0xa249,	// (0x00018cb5) list_single_graphic_popup_wml_pane

0x982f,	// (0x0001829b) list_single_graphic_popup_wml_pane_g1

0xa25d,	// (0x00018cc9) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf2b1,	// (0x0001dd1d) list_single_graphic_popup_wml_pane_g

0xa265,	// (0x00018cd1) list_single_graphic_popup_wml_pane_t1

0xa27b,	// (0x00018ce7) aid_call_pane

0x980f,	// (0x0001827b) popup_clock_analogue_window_g1

0x980f,	// (0x0001827b) popup_clock_analogue_window_g2

0xa283,	// (0x00018cef) popup_clock_analogue_window_g3

0xa283,	// (0x00018cef) popup_clock_analogue_window_g4

0x982f,	// (0x0001829b) popup_clock_analogue_window_g5

0x0004,

0xf2b6,	// (0x0001dd22) popup_clock_analogue_window_g

0xa28b,	// (0x00018cf7) popup_clock_analogue_window_t1

0xa299,	// (0x00018d05) clock_digital_number_pane_ParamLimits

0xa299,	// (0x00018d05) clock_digital_number_pane

0xa2a5,	// (0x00018d11) clock_digital_number_pane_cp02_ParamLimits

0xa2a5,	// (0x00018d11) clock_digital_number_pane_cp02

0xa2b1,	// (0x00018d1d) clock_digital_number_pane_cp03_ParamLimits

0xa2b1,	// (0x00018d1d) clock_digital_number_pane_cp03

0xa2bd,	// (0x00018d29) clock_digital_number_pane_cp04_ParamLimits

0xa2bd,	// (0x00018d29) clock_digital_number_pane_cp04

0xa2c9,	// (0x00018d35) clock_digital_separator_pane_ParamLimits

0xa2c9,	// (0x00018d35) clock_digital_separator_pane

0xa2d5,	// (0x00018d41) popup_clock_digital_window_t1

0x982f,	// (0x0001829b) clock_digital_number_pane_g1

0x982f,	// (0x0001829b) clock_digital_number_pane_g2

0x0001,

0xf236,	// (0x0001dca2) clock_digital_number_pane_g

0x982f,	// (0x0001829b) clock_digital_separator_pane_g1

0x982f,	// (0x0001829b) clock_digital_separator_pane_g2

0x0001,

0xf236,	// (0x0001dca2) clock_digital_separator_pane_g

0x95bc,	// (0x00018028) bg_popup_window_pane_cp04

0xa2f2,	// (0x00018d5e) heading_pane_cp03

0x9b5b,	// (0x000185c7) listscroll_popup_gms_pane

0x95bc,	// (0x00018028) grid_large_graphic_popup_pane

0xa2fb,	// (0x00018d67) listscroll_popup_gms_pane_g1

0xa304,	// (0x00018d70) listscroll_popup_gms_pane_g2

0x0001,

0xf2c1,	// (0x0001dd2d) listscroll_popup_gms_pane_g

0xa30d,	// (0x00018d79) scroll_pane_cp014

0x9884,	// (0x000182f0) cell_large_graphic_popup_pane_ParamLimits

0x9884,	// (0x000182f0) cell_large_graphic_popup_pane

0x9892,	// (0x000182fe) cell_large_graphic_popup_pane_g1_ParamLimits

0x9892,	// (0x000182fe) cell_large_graphic_popup_pane_g1

0xa316,	// (0x00018d82) cell_large_graphic_popup_pane_g2_ParamLimits

0xa316,	// (0x00018d82) cell_large_graphic_popup_pane_g2

0xa324,	// (0x00018d90) cell_large_graphic_popup_pane_g3_ParamLimits

0xa324,	// (0x00018d90) cell_large_graphic_popup_pane_g3

0xa332,	// (0x00018d9e) cell_large_graphic_popup_pane_g4_ParamLimits

0xa332,	// (0x00018d9e) cell_large_graphic_popup_pane_g4

0x0003,

0xf2c6,	// (0x0001dd32) cell_large_graphic_popup_pane_g_ParamLimits

0xf2c6,	// (0x0001dd32) cell_large_graphic_popup_pane_g

0x95bc,	// (0x00018028) grid_highlight_pane_cp010

0x982f,	// (0x0001829b) bg_popup_call_pane_g1

0xa343,	// (0x00018daf) list_single_graphic_popup_conf_pane_ParamLimits

0xa343,	// (0x00018daf) list_single_graphic_popup_conf_pane

0xa356,	// (0x00018dc2) list_highlight_pane_cp01

0xa35f,	// (0x00018dcb) list_single_graphic_popup_conf_pane_g1

0xa367,	// (0x00018dd3) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf2cf,	// (0x0001dd3b) list_single_graphic_popup_conf_pane_g

0xa36f,	// (0x00018ddb) list_single_graphic_popup_conf_pane_t1

0xa37d,	// (0x00018de9) linegrid_cams_pane_g1

0x2240,	// (0x00010cac) linegrid_cams_pane_g2

0x9a8c,	// (0x000184f8) linegrid_cams_pane_g3

0xa386,	// (0x00018df2) linegrid_cams_pane_g4

0x2249,	// (0x00010cb5) linegrid_cams_pane_g5

0x2252,	// (0x00010cbe) linegrid_cams_pane_g6

0x9b4a,	// (0x000185b6) linegrid_cams_pane_g7

0x0006,

0xf2d4,	// (0x0001dd40) linegrid_cams_pane_g

0xa38f,	// (0x00018dfb) popup_clock_analogue_window

0xa38f,	// (0x00018dfb) popup_clock_digital_window

0x95bc,	// (0x00018028) popup_phob_thumbnail_window

0x982f,	// (0x0001829b) call_video_uplink_pane_g1

0xa398,	// (0x00018e04) call_video_uplink_pane_g2

0x0001,

0xf2e3,	// (0x0001dd4f) call_video_uplink_pane_g

0xa3a0,	// (0x00018e0c) video_uplink_pane

0xa3a8,	// (0x00018e14) mce_image_pane_g1

0x225d,	// (0x00010cc9) mce_image_pane_g2

0x2265,	// (0x00010cd1) mce_image_pane_g3

0x226d,	// (0x00010cd9) mce_image_pane_g4

0x2277,	// (0x00010ce3) mce_image_pane_g5

0x0004,

0xf2e8,	// (0x0001dd54) mce_image_pane_g

0xa3b2,	// (0x00018e1e) control_top_pane_stacon_cp01_ParamLimits

0xa3b2,	// (0x00018e1e) control_top_pane_stacon_cp01

0xa3c6,	// (0x00018e32) uni_indicator_pane_stacon_cp01_ParamLimits

0xa3c6,	// (0x00018e32) uni_indicator_pane_stacon_cp01

0xa3d7,	// (0x00018e43) bg_popup_sub_pane_cp03

0x227f,	// (0x00010ceb) chi_dic_find_pane

0x2287,	// (0x00010cf3) listscroll_chi_dic_pane

0x2290,	// (0x00010cfc) main_pane_chidic_g1

0x22a3,	// (0x00010d0f) chi_dic_find_pane_t1

0xa3e1,	// (0x00018e4d) find_chidic_pane

0xa3ea,	// (0x00018e56) chi_dic_list_pane_ParamLimits

0xa3ea,	// (0x00018e56) chi_dic_list_pane

0xa3fb,	// (0x00018e67) scroll_pane_cp020

0x22b1,	// (0x00010d1d) find_chidic_pane_t1

0x95bc,	// (0x00018028) input_focus_pane_cp06

0x22c0,	// (0x00010d2c) list_chi_dic_pane_ParamLimits

0x22c0,	// (0x00010d2c) list_chi_dic_pane

0x22d2,	// (0x00010d3e) list_chi_dic_pane_t1_ParamLimits

0x22d2,	// (0x00010d3e) list_chi_dic_pane_t1

0x95bc,	// (0x00018028) list_highlight_pane_cp020

0xa403,	// (0x00018e6f) bg_cale_heading_pane_g1

0x22e5,	// (0x00010d51) bg_cale_heading_pane_g2

0x22ed,	// (0x00010d59) bg_cale_heading_pane_g3

0x22f5,	// (0x00010d61) bg_cale_heading_pane_g4

0x22ff,	// (0x00010d6b) bg_cale_heading_pane_g5

0x2309,	// (0x00010d75) bg_cale_heading_pane_g6

0x2311,	// (0x00010d7d) bg_cale_heading_pane_g7

0x2319,	// (0x00010d85) bg_cale_heading_pane_g8

0x2323,	// (0x00010d8f) bg_cale_heading_pane_g9

0x0008,

0xf2f3,	// (0x0001dd5f) bg_cale_heading_pane_g

0xa403,	// (0x00018e6f) bg_cale_side_pane_g1

0x232d,	// (0x00010d99) bg_cale_side_pane_g2

0x2335,	// (0x00010da1) bg_cale_side_pane_g3

0x233d,	// (0x00010da9) bg_cale_side_pane_g4

0x2345,	// (0x00010db1) bg_cale_side_pane_g5

0x234d,	// (0x00010db9) bg_cale_side_pane_g6

0x2355,	// (0x00010dc1) bg_cale_side_pane_g7

0x235d,	// (0x00010dc9) bg_cale_side_pane_g8

0x2365,	// (0x00010dd1) bg_cale_side_pane_g9

0x0008,

0xf306,	// (0x0001dd72) bg_cale_side_pane_g

0x236d,	// (0x00010dd9) popup_call_status_window_ParamLimits

0x236d,	// (0x00010dd9) popup_call_status_window

0xa40b,	// (0x00018e77) stacon_top_pane

0xa413,	// (0x00018e7f) status_pane_ParamLimits

0xa413,	// (0x00018e7f) status_pane

0xa428,	// (0x00018e94) status_small_pane

0xa430,	// (0x00018e9c) control_pane

0x95bc,	// (0x00018028) stacon_bottom_pane

0xa438,	// (0x00018ea4) list_single_mce_smart_pane_t1_ParamLimits

0xa438,	// (0x00018ea4) list_single_mce_smart_pane_t1

0xa44b,	// (0x00018eb7) list_single_mce_smart_pane_t2_ParamLimits

0xa44b,	// (0x00018eb7) list_single_mce_smart_pane_t2

0x0001,

0xf319,	// (0x0001dd85) list_single_mce_smart_pane_t_ParamLimits

0xf319,	// (0x0001dd85) list_single_mce_smart_pane_t

0x23b4,	// (0x00010e20) compass_pane

0x23bd,	// (0x00010e29) main_location2_pane_t1

0x23cf,	// (0x00010e3b) main_location2_pane_t2

0x23e1,	// (0x00010e4d) main_location2_pane_t3

0x0003,

0xf31e,	// (0x0001dd8a) main_location2_pane_t

0xa46a,	// (0x00018ed6) compass_pane_g1_ParamLimits

0xa46a,	// (0x00018ed6) compass_pane_g1

0x2425,	// (0x00010e91) compass_pane_t1

0x2434,	// (0x00010ea0) compass_pane_t2

0x0005,

0xf327,	// (0x0001dd93) compass_pane_t

0x247b,	// (0x00010ee7) text_secondary_cp61

0xa4e8,	// (0x00018f54) navi_pane_cams_g5

0xa564,	// (0x00018fd0) navi_pane_im_t1

0xa572,	// (0x00018fde) navi_pane_mp_g1_ParamLimits

0xa572,	// (0x00018fde) navi_pane_mp_g1

0xa586,	// (0x00018ff2) navi_pane_mp_g2_ParamLimits

0xa586,	// (0x00018ff2) navi_pane_mp_g2

0xa592,	// (0x00018ffe) navi_pane_mp_g3_ParamLimits

0xa592,	// (0x00018ffe) navi_pane_mp_g3

0x0002,

0xf33b,	// (0x0001dda7) navi_pane_mp_g_ParamLimits

0xf33b,	// (0x0001dda7) navi_pane_mp_g

0xa59e,	// (0x0001900a) navi_pane_mp_t1

0xa5ac,	// (0x00019018) navi_pane_mp_t2

0x0002,

0xf342,	// (0x0001ddae) navi_pane_mp_t

0xa617,	// (0x00019083) navi_pane_vt_g1

0xa59e,	// (0x0001900a) navi_pane_vt_t1

0xa61f,	// (0x0001908b) navi_slider_pane

0x9b5b,	// (0x000185c7) zooming_pane

0xa62f,	// (0x0001909b) navi_slider_pane_g1

0xa638,	// (0x000190a4) navi_slider_pane_g2

0x0006,

0xf349,	// (0x0001ddb5) navi_slider_pane_g

0xa665,	// (0x000190d1) aid_levels_zoom

0xa66d,	// (0x000190d9) zooming_pane_g1

0xa675,	// (0x000190e1) zooming_pane_g2

0xa675,	// (0x000190e1) zooming_pane_g3

0x0002,

0xf358,	// (0x0001ddc4) zooming_pane_g

0xa67d,	// (0x000190e9) level_10_zoom

0xa686,	// (0x000190f2) level_11_zoom

0xa68f,	// (0x000190fb) level_1_zoom

0xa698,	// (0x00019104) level_2_zoom

0xa6a1,	// (0x0001910d) level_3_zoom

0xa6aa,	// (0x00019116) level_4_zoom

0xa6b3,	// (0x0001911f) level_5_zoom

0xa6bc,	// (0x00019128) level_6_zoom

0xa6c5,	// (0x00019131) level_7_zoom

0xa6ce,	// (0x0001913a) level_8_zoom

0xa6d7,	// (0x00019143) level_9_zoom

0xa6e8,	// (0x00019154) popup_phob_thumbnail_window_g1

0xa6f0,	// (0x0001915c) popup_phob_thumbnail_window_g2

0x0001,

0xf35f,	// (0x0001ddcb) popup_phob_thumbnail_window_g

0x2f69,	// (0x000119d5) level_1_location

0x2f71,	// (0x000119dd) level_2_location

0x2f79,	// (0x000119e5) level_3_location

0x2f81,	// (0x000119ed) level_4_location

0x9b5b,	// (0x000185c7) level_5_location

0x24cc,	// (0x00010f38) mce_icon_pane_g1

0x24d6,	// (0x00010f42) mce_icon_pane_g2

0x0001,

0xf364,	// (0x0001ddd0) mce_icon_pane_g

0xa6f8,	// (0x00019164) main_mup_pane_g1_ParamLimits

0xa6f8,	// (0x00019164) main_mup_pane_g1

0xa6f8,	// (0x00019164) main_mup_pane_g2_ParamLimits

0xa6f8,	// (0x00019164) main_mup_pane_g2

0xa6f8,	// (0x00019164) main_mup_pane_g3_ParamLimits

0xa6f8,	// (0x00019164) main_mup_pane_g3

0xa6f8,	// (0x00019164) main_mup_pane_g4_ParamLimits

0xa6f8,	// (0x00019164) main_mup_pane_g4

0xa6f8,	// (0x00019164) main_mup_pane_g5_ParamLimits

0xa6f8,	// (0x00019164) main_mup_pane_g5

0xa6f8,	// (0x00019164) main_mup_pane_g6_ParamLimits

0xa6f8,	// (0x00019164) main_mup_pane_g6

0xa6f8,	// (0x00019164) main_mup_pane_g7_ParamLimits

0xa6f8,	// (0x00019164) main_mup_pane_g7

0xa6f8,	// (0x00019164) main_mup_pane_g8_ParamLimits

0xa6f8,	// (0x00019164) main_mup_pane_g8

0xa6f8,	// (0x00019164) main_mup_pane_g9_ParamLimits

0xa6f8,	// (0x00019164) main_mup_pane_g9

0xa6f8,	// (0x00019164) main_mup_pane_g10_ParamLimits

0xa6f8,	// (0x00019164) main_mup_pane_g10

0xa6f8,	// (0x00019164) main_mup_pane_g11_ParamLimits

0xa6f8,	// (0x00019164) main_mup_pane_g11

0x9892,	// (0x000182fe) main_mup_pane_g12_ParamLimits

0x9892,	// (0x000182fe) main_mup_pane_g12

0xa6f8,	// (0x00019164) main_mup_pane_g13_ParamLimits

0xa6f8,	// (0x00019164) main_mup_pane_g13

0x000c,

0xf369,	// (0x0001ddd5) main_mup_pane_g_ParamLimits

0xf369,	// (0x0001ddd5) main_mup_pane_g

0xa706,	// (0x00019172) main_mup_pane_t1_ParamLimits

0xa706,	// (0x00019172) main_mup_pane_t1

0xa706,	// (0x00019172) main_mup_pane_t2_ParamLimits

0xa706,	// (0x00019172) main_mup_pane_t2

0xa706,	// (0x00019172) main_mup_pane_t3_ParamLimits

0xa706,	// (0x00019172) main_mup_pane_t3

0x9b6d,	// (0x000185d9) main_mup_pane_t4_ParamLimits

0x9b6d,	// (0x000185d9) main_mup_pane_t4

0x9b6d,	// (0x000185d9) main_mup_pane_t5_ParamLimits

0x9b6d,	// (0x000185d9) main_mup_pane_t5

0xa71a,	// (0x00019186) main_mup_pane_t6_ParamLimits

0xa71a,	// (0x00019186) main_mup_pane_t6

0x0005,

0xf384,	// (0x0001ddf0) main_mup_pane_t_ParamLimits

0xf384,	// (0x0001ddf0) main_mup_pane_t

0x9884,	// (0x000182f0) mup_progress_pane_ParamLimits

0x9884,	// (0x000182f0) mup_progress_pane

0xa72e,	// (0x0001919a) mup_visualizer_pane_ParamLimits

0xa72e,	// (0x0001919a) mup_visualizer_pane

0xa72e,	// (0x0001919a) mup_volume_pane_ParamLimits

0xa72e,	// (0x0001919a) mup_volume_pane

0x98a0,	// (0x0001830c) mup_visualizer_pane_g1_ParamLimits

0x98a0,	// (0x0001830c) mup_visualizer_pane_g1

0xa73c,	// (0x000191a8) mup_visualizer_pane_g2_ParamLimits

0xa73c,	// (0x000191a8) mup_visualizer_pane_g2

0x9892,	// (0x000182fe) mup_visualizer_pane_g3_ParamLimits

0x9892,	// (0x000182fe) mup_visualizer_pane_g3

0x0002,

0xf391,	// (0x0001ddfd) mup_visualizer_pane_g_ParamLimits

0xf391,	// (0x0001ddfd) mup_visualizer_pane_g

0x9b9b,	// (0x00018607) mup_volume_pane_g1

0x9b9b,	// (0x00018607) mup_volume_pane_g2

0x0001,

0xf398,	// (0x0001de04) mup_volume_pane_g

0x9b9b,	// (0x00018607) mup_progress_pane_g1

0x9b9b,	// (0x00018607) mup_progress_pane_g2

0x9b9b,	// (0x00018607) mup_progress_pane_g3

0x0002,

0xf39d,	// (0x0001de09) mup_progress_pane_g

0x95bc,	// (0x00018028) bg_popup_window_pane_cp05

0xa74a,	// (0x000191b6) heading_pane_cp02_ParamLimits

0xa74a,	// (0x000191b6) heading_pane_cp02

0xa764,	// (0x000191d0) list_popup_blid_pane

0xa76c,	// (0x000191d8) list_blid_sat_info_pane_ParamLimits

0xa76c,	// (0x000191d8) list_blid_sat_info_pane

0xa77f,	// (0x000191eb) list_blid_sat_info_pane_g1

0xa787,	// (0x000191f3) list_blid_sat_info_pane_t1

0x25d6,	// (0x00011042) mup_equalizer_pane_ParamLimits

0x25d6,	// (0x00011042) mup_equalizer_pane

0x25ef,	// (0x0001105b) mup_equalizer_pane_cp1_ParamLimits

0x25ef,	// (0x0001105b) mup_equalizer_pane_cp1

0x260c,	// (0x00011078) mup_equalizer_pane_cp2_ParamLimits

0x260c,	// (0x00011078) mup_equalizer_pane_cp2

0x2629,	// (0x00011095) mup_equalizer_pane_cp3_ParamLimits

0x2629,	// (0x00011095) mup_equalizer_pane_cp3

0x264a,	// (0x000110b6) mup_equalizer_pane_cp4_ParamLimits

0x264a,	// (0x000110b6) mup_equalizer_pane_cp4

0x266b,	// (0x000110d7) mup_equalizer_pane_cp5

0x267f,	// (0x000110eb) mup_equalizer_pane_cp6

0x2693,	// (0x000110ff) mup_equalizer_pane_cp7

0xb91e,	// (0x0001a38a) bg_popup_call_poc_act_pane_g9

0xb926,	// (0x0001a392) bg_popup_call_poc_act_pane_g10

0xb92e,	// (0x0001a39a) bg_popup_call_poc_act_pane_g11

0x000a,

0x9817,	// (0x00018283) mup_scale_pane

0x982f,	// (0x0001829b) mup_scale_pane_g1

0xa795,	// (0x00019201) mup_scale_pane_g2

0x0006,

0xf3b9,	// (0x0001de25) mup_scale_pane_g

0xa7b9,	// (0x00019225) msg_data_pane

0xa7c1,	// (0x0001922d) scroll_pane_cp017

0x26b9,	// (0x00011125) bg_list_pane_cp04_ParamLimits

0x26b9,	// (0x00011125) bg_list_pane_cp04

0xa7c9,	// (0x00019235) msg_data_pane_g1

0x26d9,	// (0x00011145) msg_data_pane_g2

0x26e1,	// (0x0001114d) msg_data_pane_g3

0x26e9,	// (0x00011155) msg_data_pane_g4

0x26f1,	// (0x0001115d) msg_data_pane_g5

0x26f9,	// (0x00011165) msg_data_pane_g6

0x2701,	// (0x0001116d) msg_data_pane_g7

0x0006,

0xf3c8,	// (0x0001de34) msg_data_pane_g

0x2709,	// (0x00011175) msg_text_pane_ParamLimits

0x2709,	// (0x00011175) msg_text_pane

0x2737,	// (0x000111a3) qrid_highlight_pane_cp011_ParamLimits

0x2737,	// (0x000111a3) qrid_highlight_pane_cp011

0x95bc,	// (0x00018028) msg_body_pane

0x95bc,	// (0x00018028) msg_header_pane

0xa7da,	// (0x00019246) input_focus_pane_cp07

0x275b,	// (0x000111c7) msg_header_pane_t1_ParamLimits

0x275b,	// (0x000111c7) msg_header_pane_t1

0x2771,	// (0x000111dd) msg_header_pane_t2_ParamLimits

0x2771,	// (0x000111dd) msg_header_pane_t2

0x0001,

0xf3dc,	// (0x0001de48) msg_header_pane_t_ParamLimits

0xf3dc,	// (0x0001de48) msg_header_pane_t

0xa7ef,	// (0x0001925b) msg_body_pane_g1

0x2788,	// (0x000111f4) msg_body_pane_t1_ParamLimits

0x2788,	// (0x000111f4) msg_body_pane_t1

0x27b9,	// (0x00011225) msg_body_pane_t2_ParamLimits

0x27b9,	// (0x00011225) msg_body_pane_t2

0x27cb,	// (0x00011237) msg_body_pane_t3_ParamLimits

0x27cb,	// (0x00011237) msg_body_pane_t3

0x0002,

0xf3e1,	// (0x0001de4d) msg_body_pane_t_ParamLimits

0xf3e1,	// (0x0001de4d) msg_body_pane_t

0x2817,	// (0x00011283) main_viewer_pane_g1_ParamLimits

0x2817,	// (0x00011283) main_viewer_pane_g1

0x2825,	// (0x00011291) main_viewer_pane_g2_ParamLimits

0x2825,	// (0x00011291) main_viewer_pane_g2

0x2833,	// (0x0001129f) main_viewer_pane_g3_ParamLimits

0x2833,	// (0x0001129f) main_viewer_pane_g3

0x2842,	// (0x000112ae) main_viewer_pane_g4_ParamLimits

0x2842,	// (0x000112ae) main_viewer_pane_g4

0xa80f,	// (0x0001927b) main_viewer_pane_g5_ParamLimits

0xa80f,	// (0x0001927b) main_viewer_pane_g5

0xa80f,	// (0x0001927b) main_viewer_pane_g7_ParamLimits

0xa80f,	// (0x0001927b) main_viewer_pane_g7

0xa821,	// (0x0001928d) main_viewer_pane_g8_ParamLimits

0xa821,	// (0x0001928d) main_viewer_pane_g8

0x0007,

0xf3f1,	// (0x0001de5d) main_viewer_pane_g_ParamLimits

0xf3f1,	// (0x0001de5d) main_viewer_pane_g

0xa839,	// (0x000192a5) viewer_content_pane_ParamLimits

0xa839,	// (0x000192a5) viewer_content_pane

0x287e,	// (0x000112ea) main_postcard_pane_g1_ParamLimits

0x287e,	// (0x000112ea) main_postcard_pane_g1

0x2894,	// (0x00011300) main_postcard_pane_g2_ParamLimits

0x2894,	// (0x00011300) main_postcard_pane_g2

0x28aa,	// (0x00011316) main_postcard_pane_g3_ParamLimits

0x28aa,	// (0x00011316) main_postcard_pane_g3

0x0005,

0xf402,	// (0x0001de6e) main_postcard_pane_g_ParamLimits

0xf402,	// (0x0001de6e) main_postcard_pane_g

0x28c1,	// (0x0001132d) main_postcard_pane_g4

0xbaf6,	// (0x0001a562) smil_status_volume_pane_g2

0x2904,	// (0x00011370) postcard_pane_ParamLimits

0x2904,	// (0x00011370) postcard_pane

0xa847,	// (0x000192b3) postcard_pane_g1_ParamLimits

0xa847,	// (0x000192b3) postcard_pane_g1

0x2946,	// (0x000113b2) postcard_pane_g2_ParamLimits

0x2946,	// (0x000113b2) postcard_pane_g2

0x2952,	// (0x000113be) postcard_pane_g3_ParamLimits

0x2952,	// (0x000113be) postcard_pane_g3

0xa855,	// (0x000192c1) postcard_pane_g4_ParamLimits

0xa855,	// (0x000192c1) postcard_pane_g4

0x295e,	// (0x000113ca) postcard_pane_g5_ParamLimits

0x295e,	// (0x000113ca) postcard_pane_g5

0x2973,	// (0x000113df) postcard_pane_g6_ParamLimits

0x2973,	// (0x000113df) postcard_pane_g6

0xa847,	// (0x000192b3) postcard_pane_g7_ParamLimits

0xa847,	// (0x000192b3) postcard_pane_g7

0x0006,

0xf40f,	// (0x0001de7b) postcard_pane_g_ParamLimits

0xf40f,	// (0x0001de7b) postcard_pane_g

0x2987,	// (0x000113f3) main_mp2_pane_g1_ParamLimits

0x2987,	// (0x000113f3) main_mp2_pane_g1

0x2993,	// (0x000113ff) main_mp2_pane_g2_ParamLimits

0x2993,	// (0x000113ff) main_mp2_pane_g2

0x299f,	// (0x0001140b) main_mp2_pane_g3_ParamLimits

0x299f,	// (0x0001140b) main_mp2_pane_g3

0x0002,

0xf41e,	// (0x0001de8a) main_mp2_pane_g_ParamLimits

0xf41e,	// (0x0001de8a) main_mp2_pane_g

0x29ab,	// (0x00011417) main_mp2_pane_t1_ParamLimits

0x29ab,	// (0x00011417) main_mp2_pane_t1

0x29c0,	// (0x0001142c) main_mp2_pane_t2_ParamLimits

0x29c0,	// (0x0001142c) main_mp2_pane_t2

0x29d2,	// (0x0001143e) main_mp2_pane_t3_ParamLimits

0x29d2,	// (0x0001143e) main_mp2_pane_t3

0x0002,

0xf425,	// (0x0001de91) main_mp2_pane_t_ParamLimits

0xf425,	// (0x0001de91) main_mp2_pane_t

0xa863,	// (0x000192cf) pec_content_pane_ParamLimits

0xa863,	// (0x000192cf) pec_content_pane

0x9cfc,	// (0x00018768) scroll_pane_cp015

0xa875,	// (0x000192e1) pec_attribute_pane_ParamLimits

0xa875,	// (0x000192e1) pec_attribute_pane

0x29e4,	// (0x00011450) pec_content_pane_g1_ParamLimits

0x29e4,	// (0x00011450) pec_content_pane_g1

0xa885,	// (0x000192f1) pec_content_pane_t1_ParamLimits

0xa885,	// (0x000192f1) pec_content_pane_t1

0xa897,	// (0x00019303) pec_content_pane_t2_ParamLimits

0xa897,	// (0x00019303) pec_content_pane_t2

0x0001,

0xf42c,	// (0x0001de98) pec_content_pane_t_ParamLimits

0xf42c,	// (0x0001de98) pec_content_pane_t

0x29f0,	// (0x0001145c) list_single_graphic_pane_cp01_ParamLimits

0x29f0,	// (0x0001145c) list_single_graphic_pane_cp01

0x9817,	// (0x00018283) bg_popup_sub_pane_cp04

0xa8a9,	// (0x00019315) popup_mup_playback_window_g1

0xa8b5,	// (0x00019321) popup_mup_playback_window_t1

0xa8ca,	// (0x00019336) popup_mup_playback_window_t2

0x0001,

0xf431,	// (0x0001de9d) popup_mup_playback_window_t

0xa901,	// (0x0001936d) main_image_pane_g1_ParamLimits

0xa901,	// (0x0001936d) main_image_pane_g1

0xa944,	// (0x000193b0) scroll_pane_cp018_ParamLimits

0xa944,	// (0x000193b0) scroll_pane_cp018

0xa95c,	// (0x000193c8) scroll_pane_cp016_ParamLimits

0xa95c,	// (0x000193c8) scroll_pane_cp016

0x2abe,	// (0x0001152a) smil2_image_pane_ParamLimits

0x2abe,	// (0x0001152a) smil2_image_pane

0x2aee,	// (0x0001155a) smil2_root_pane_ParamLimits

0x2aee,	// (0x0001155a) smil2_root_pane

0x2b26,	// (0x00011592) smil2_text_pane_ParamLimits

0x2b26,	// (0x00011592) smil2_text_pane

0x95bc,	// (0x00018028) bg_list_pane_cp06

0xa998,	// (0x00019404) grid_radio_pane

0x95bc,	// (0x00018028) bg_popup_window_pane_cp06

0xa9a0,	// (0x0001940c) main_fmradio_pane_t1

0xb976,	// (0x0001a3e2) heading_pane_cp04

0xa9ae,	// (0x0001941a) main_fmradio_pane_t2

0xb97e,	// (0x0001a3ea) popup_cale_lunar_info_window_g1

0xa9bc,	// (0x00019428) main_fmradio_pane_t3

0xb986,	// (0x0001a3f2) popup_cale_lunar_info_window_g2

0xa9ca,	// (0x00019436) main_fmradio_pane_t4

0x0001,

0xa9d8,	// (0x00019444) main_fmradio_pane_t5

0x0004,

0xf524,	// (0x0001df90) popup_cale_lunar_info_window_g

0xf446,	// (0x0001deb2) main_fmradio_pane_t

0xa9e6,	// (0x00019452) wait_bar_pane_cp03

0xa9ee,	// (0x0001945a) cell_fmradio_pane_ParamLimits

0xa9ee,	// (0x0001945a) cell_fmradio_pane

0xa847,	// (0x000192b3) cell_fmradio_pane_g1_ParamLimits

0xa847,	// (0x000192b3) cell_fmradio_pane_g1

0x95bc,	// (0x00018028) grid_highlight_pane_cp011

0xaa01,	// (0x0001946d) poc_content_pane_ParamLimits

0xaa01,	// (0x0001946d) poc_content_pane

0xaa13,	// (0x0001947f) scroll_pane_cp019

0x2ba6,	// (0x00011612) popup_call_poc_act_window_ParamLimits

0x2ba6,	// (0x00011612) popup_call_poc_act_window

0x2bca,	// (0x00011636) popup_call_poc_inact_window_ParamLimits

0x2bca,	// (0x00011636) popup_call_poc_inact_window

0xf4e8,	// (0x0001df54) bg_popup_call_poc_act_pane_g

0xb936,	// (0x0001a3a2) bg_popup_call_poc_inact_pane_g1

0xb93e,	// (0x0001a3aa) bg_popup_call_poc_inact_pane_g2

0xaa1b,	// (0x00019487) popup_call_poc_act_window_g2

0xb946,	// (0x0001a3b2) bg_popup_call_poc_inact_pane_g3

0xb8c6,	// (0x0001a332) bg_popup_call_poc_inact_pane_g4

0xb94e,	// (0x0001a3ba) bg_popup_call_poc_inact_pane_g5

0xaa23,	// (0x0001948f) popup_call_poc_act_window_t1_ParamLimits

0xaa23,	// (0x0001948f) popup_call_poc_act_window_t1

0xaa4b,	// (0x000194b7) popup_call_poc_act_window_t2_ParamLimits

0xaa4b,	// (0x000194b7) popup_call_poc_act_window_t2

0xaa73,	// (0x000194df) popup_call_poc_act_window_t3_ParamLimits

0xaa73,	// (0x000194df) popup_call_poc_act_window_t3

0xaa9b,	// (0x00019507) popup_call_poc_act_window_t4_ParamLimits

0xaa9b,	// (0x00019507) popup_call_poc_act_window_t4

0x0003,

0xf451,	// (0x0001debd) popup_call_poc_act_window_t_ParamLimits

0xf451,	// (0x0001debd) popup_call_poc_act_window_t

0xb956,	// (0x0001a3c2) bg_popup_call_poc_inact_pane_g6

0xb95e,	// (0x0001a3ca) bg_popup_call_poc_inact_pane_g7

0xb966,	// (0x0001a3d2) bg_popup_call_poc_inact_pane_g8

0xaaad,	// (0x00019519) popup_call_poc_inact_window_g2

0xb96e,	// (0x0001a3da) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf4ff,	// (0x0001df6b) bg_popup_call_poc_inact_pane_g

0xaab5,	// (0x00019521) popup_call_poc_inact_window_t1_ParamLimits

0xaab5,	// (0x00019521) popup_call_poc_inact_window_t1

0xaaca,	// (0x00019536) popup_call_poc_inact_window_t2_ParamLimits

0xaaca,	// (0x00019536) popup_call_poc_inact_window_t2

0xaadf,	// (0x0001954b) popup_call_poc_inact_window_t3_ParamLimits

0xaadf,	// (0x0001954b) popup_call_poc_inact_window_t3

0x0002,

0xf45a,	// (0x0001dec6) popup_call_poc_inact_window_t_ParamLimits

0xf45a,	// (0x0001dec6) popup_call_poc_inact_window_t

0xba6e,	// (0x0001a4da) context_pane_ParamLimits

0x3433,	// (0x00011e9f) signal_pane_ParamLimits

0x9b5b,	// (0x000185c7) main_call2_pane

0xba47,	// (0x0001a4b3) popup_phob_thumbnail2_window_ParamLimits

0xba47,	// (0x0001a4b3) popup_phob_thumbnail2_window

0xa7f7,	// (0x00019263) aid_hotspot_pointer_arrow_pane

0xa7ff,	// (0x0001926b) aid_hotspot_pointer_hand_pane

0x2f33,	// (0x0001199f) phob_pre_status_pane_g5

0x919b,	// (0x00017c07) cams_zoom_pane_ParamLimits

0x919b,	// (0x00017c07) image_vga_pane_ParamLimits

0x9892,	// (0x000182fe) main_camera_pane_g1_ParamLimits

0x9892,	// (0x000182fe) main_camera_pane_g2_ParamLimits

0x9892,	// (0x000182fe) main_camera_pane_g3_ParamLimits

0x9892,	// (0x000182fe) main_camera_pane_g4_ParamLimits

0x9892,	// (0x000182fe) main_camera_pane_g5_ParamLimits

0x9892,	// (0x000182fe) main_camera_pane_g6_ParamLimits

0x9892,	// (0x000182fe) main_camera_pane_g7_ParamLimits

0xf185,	// (0x0001dbf1) main_camera_pane_g_ParamLimits

0x9b6d,	// (0x000185d9) main_camera_pane_t1_ParamLimits

0x9b6d,	// (0x000185d9) main_camera_pane_t2_ParamLimits

0xf196,	// (0x0001dc02) main_camera_pane_t_ParamLimits

0x9817,	// (0x00018283) bg_popup_preview_window_pane_cp01_ParamLimits

0x9817,	// (0x00018283) bg_popup_preview_window_pane_cp01

0xaaf4,	// (0x00019560) popup_phob_thumbnail2_window_g1_ParamLimits

0xaaf4,	// (0x00019560) popup_phob_thumbnail2_window_g1

0x95bc,	// (0x00018028) call2_cli_visual_pane

0x2bfe,	// (0x0001166a) popup_call2_audio_conf_window_ParamLimits

0x2bfe,	// (0x0001166a) popup_call2_audio_conf_window

0x2c1e,	// (0x0001168a) popup_call2_audio_first_window_ParamLimits

0x2c1e,	// (0x0001168a) popup_call2_audio_first_window

0x2cb4,	// (0x00011720) popup_call2_audio_in_window_ParamLimits

0x2cb4,	// (0x00011720) popup_call2_audio_in_window

0x2cfc,	// (0x00011768) popup_call2_audio_out_window_ParamLimits

0x2cfc,	// (0x00011768) popup_call2_audio_out_window

0x2d66,	// (0x000117d2) popup_call2_audio_second_window_ParamLimits

0x2d66,	// (0x000117d2) popup_call2_audio_second_window

0x2dcc,	// (0x00011838) popup_call2_audio_wait_window_ParamLimits

0x2dcc,	// (0x00011838) popup_call2_audio_wait_window

0x95bc,	// (0x00018028) bg_popup_call2_act_pane_cp03

0x97f9,	// (0x00018265) list_conf_pane_cp

0xab00,	// (0x0001956c) popup_call2_audio_conf_window_t1

0xab0e,	// (0x0001957a) list_single_graphic_popup_conf2_pane_ParamLimits

0xab0e,	// (0x0001957a) list_single_graphic_popup_conf2_pane

0xa356,	// (0x00018dc2) list_highlight_pane_cp04

0xab21,	// (0x0001958d) list_single_graphic_popup_conf2_pane_g1

0xa367,	// (0x00018dd3) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf461,	// (0x0001decd) list_single_graphic_popup_conf2_pane_g

0xab2b,	// (0x00019597) list_single_graphic_popup_conf2_pane_t1

0xab39,	// (0x000195a5) bg_popup_call2_act_pane_cp01_ParamLimits

0xab39,	// (0x000195a5) bg_popup_call2_act_pane_cp01

0xabc3,	// (0x0001962f) call_type_pane_cp05_ParamLimits

0xabc3,	// (0x0001962f) call_type_pane_cp05

0xac17,	// (0x00019683) popup_call2_audio_second_window_g1_ParamLimits

0xac17,	// (0x00019683) popup_call2_audio_second_window_g1

0xac6b,	// (0x000196d7) popup_call2_audio_second_window_g2_ParamLimits

0xac6b,	// (0x000196d7) popup_call2_audio_second_window_g2

0x0002,

0xf466,	// (0x0001ded2) popup_call2_audio_second_window_g_ParamLimits

0xf466,	// (0x0001ded2) popup_call2_audio_second_window_g

0xacd0,	// (0x0001973c) popup_call2_audio_second_window_t1_ParamLimits

0xacd0,	// (0x0001973c) popup_call2_audio_second_window_t1

0xad8b,	// (0x000197f7) popup_call2_audio_second_window_t2_ParamLimits

0xad8b,	// (0x000197f7) popup_call2_audio_second_window_t2

0xadde,	// (0x0001984a) popup_call2_audio_second_window_t3_ParamLimits

0xadde,	// (0x0001984a) popup_call2_audio_second_window_t3

0x0003,

0xf46d,	// (0x0001ded9) popup_call2_audio_second_window_t_ParamLimits

0xf46d,	// (0x0001ded9) popup_call2_audio_second_window_t

0x95bc,	// (0x00018028) bg_popup_call2_in_pane_cp02

0x95c6,	// (0x00018032) call_type_pane_cp04

0x2e06,	// (0x00011872) popup_call2_audio_wait_window_g1

0x2e0e,	// (0x0001187a) popup_call2_audio_wait_window_g2

0x0001,

0xf476,	// (0x0001dee2) popup_call2_audio_wait_window_g

0x95de,	// (0x0001804a) popup_call2_audio_wait_window_t3

0xaed1,	// (0x0001993d) bg_popup_call2_act_pane_ParamLimits

0xaed1,	// (0x0001993d) bg_popup_call2_act_pane

0xaf91,	// (0x000199fd) call_type_pane_cp03_ParamLimits

0xaf91,	// (0x000199fd) call_type_pane_cp03

0xaff5,	// (0x00019a61) popup_call2_audio_first_window_g1_ParamLimits

0xaff5,	// (0x00019a61) popup_call2_audio_first_window_g1

0xb065,	// (0x00019ad1) popup_call2_audio_first_window_g2_ParamLimits

0xb065,	// (0x00019ad1) popup_call2_audio_first_window_g2

0xb0c9,	// (0x00019b35) popup_call2_audio_first_window_g3_ParamLimits

0xb0c9,	// (0x00019b35) popup_call2_audio_first_window_g3

0x0004,

0xf47b,	// (0x0001dee7) popup_call2_audio_first_window_g_ParamLimits

0xf47b,	// (0x0001dee7) popup_call2_audio_first_window_g

0xb151,	// (0x00019bbd) popup_call2_audio_first_window_t1_ParamLimits

0xb151,	// (0x00019bbd) popup_call2_audio_first_window_t1

0xb254,	// (0x00019cc0) popup_call2_audio_first_window_t4_ParamLimits

0xb254,	// (0x00019cc0) popup_call2_audio_first_window_t4

0xb337,	// (0x00019da3) popup_call2_audio_first_window_t5_ParamLimits

0xb337,	// (0x00019da3) popup_call2_audio_first_window_t5

0x0003,

0xf486,	// (0x0001def2) popup_call2_audio_first_window_t_ParamLimits

0xf486,	// (0x0001def2) popup_call2_audio_first_window_t

0x980f,	// (0x0001827b) bg_popup_call2_act_pane_g1

0xb98e,	// (0x0001a3fa) popup_cale_lunar_info_window_t1

0xb99c,	// (0x0001a408) popup_cale_lunar_info_window_t2

0xb9aa,	// (0x0001a416) popup_cale_lunar_info_window_t3

0x95bc,	// (0x00018028) bg_popup_call2_bubble_pane

0xb438,	// (0x00019ea4) bg_popup_call2_in_pane_cp01_ParamLimits

0xb438,	// (0x00019ea4) bg_popup_call2_in_pane_cp01

0x9298,	// (0x00017d04) call_type_pane_cp02

0x2e16,	// (0x00011882) popup_call2_audio_out_window_g1_ParamLimits

0x2e16,	// (0x00011882) popup_call2_audio_out_window_g1

0xb480,	// (0x00019eec) popup_call2_audio_out_window_g2_ParamLimits

0xb480,	// (0x00019eec) popup_call2_audio_out_window_g2

0x2e42,	// (0x000118ae) popup_call2_audio_out_window_g3_ParamLimits

0x2e42,	// (0x000118ae) popup_call2_audio_out_window_g3

0x0003,

0xf48f,	// (0x0001defb) popup_call2_audio_out_window_g_ParamLimits

0xf48f,	// (0x0001defb) popup_call2_audio_out_window_g

0xb4b7,	// (0x00019f23) popup_call2_audio_out_window_t1_ParamLimits

0xb4b7,	// (0x00019f23) popup_call2_audio_out_window_t1

0xb516,	// (0x00019f82) popup_call2_audio_out_window_t2_ParamLimits

0xb516,	// (0x00019f82) popup_call2_audio_out_window_t2

0xb56a,	// (0x00019fd6) popup_call2_audio_out_window_t3_ParamLimits

0xb56a,	// (0x00019fd6) popup_call2_audio_out_window_t3

0xb580,	// (0x00019fec) popup_call2_audio_out_window_t4_ParamLimits

0xb580,	// (0x00019fec) popup_call2_audio_out_window_t4

0xb596,	// (0x0001a002) popup_call2_audio_out_window_t5_ParamLimits

0xb596,	// (0x0001a002) popup_call2_audio_out_window_t5

0x0005,

0xf498,	// (0x0001df04) popup_call2_audio_out_window_t_ParamLimits

0xf498,	// (0x0001df04) popup_call2_audio_out_window_t

0xb5fa,	// (0x0001a066) bg_popup_call2_in_pane_ParamLimits

0xb5fa,	// (0x0001a066) bg_popup_call2_in_pane

0xb656,	// (0x0001a0c2) popup_call2_audio_in_window_g1_ParamLimits

0xb656,	// (0x0001a0c2) popup_call2_audio_in_window_g1

0xb68e,	// (0x0001a0fa) popup_call2_audio_in_window_g2_ParamLimits

0xb68e,	// (0x0001a0fa) popup_call2_audio_in_window_g2

0xb6c6,	// (0x0001a132) popup_call2_audio_in_window_g3_ParamLimits

0xb6c6,	// (0x0001a132) popup_call2_audio_in_window_g3

0x0003,

0xf4a5,	// (0x0001df11) popup_call2_audio_in_window_g_ParamLimits

0xf4a5,	// (0x0001df11) popup_call2_audio_in_window_g

0xb71e,	// (0x0001a18a) popup_call2_audio_in_window_t1_ParamLimits

0xb71e,	// (0x0001a18a) popup_call2_audio_in_window_t1

0xb79e,	// (0x0001a20a) popup_call2_audio_in_window_t2_ParamLimits

0xb79e,	// (0x0001a20a) popup_call2_audio_in_window_t2

0xb81e,	// (0x0001a28a) popup_call2_audio_in_window_t3_ParamLimits

0xb81e,	// (0x0001a28a) popup_call2_audio_in_window_t3

0xb838,	// (0x0001a2a4) popup_call2_audio_in_window_t4_ParamLimits

0xb838,	// (0x0001a2a4) popup_call2_audio_in_window_t4

0xb84a,	// (0x0001a2b6) popup_call2_audio_in_window_t5_ParamLimits

0xb84a,	// (0x0001a2b6) popup_call2_audio_in_window_t5

0xb85c,	// (0x0001a2c8) popup_call2_audio_in_window_t6_ParamLimits

0xb85c,	// (0x0001a2c8) popup_call2_audio_in_window_t6

0x0005,

0xf4ae,	// (0x0001df1a) popup_call2_audio_in_window_t_ParamLimits

0xf4ae,	// (0x0001df1a) popup_call2_audio_in_window_t

0x980f,	// (0x0001827b) bg_popup_call2_in_pane_g1

0xb9b8,	// (0x0001a424) popup_cale_lunar_info_window_t4

0x0003,

0xf529,	// (0x0001df95) popup_cale_lunar_info_window_t

0x9817,	// (0x00018283) bg_popup_call2_rect_pane_ParamLimits

0x9817,	// (0x00018283) bg_popup_call2_rect_pane

0x95bc,	// (0x00018028) call2_cli_visual_graphic_pane

0x95bc,	// (0x00018028) call2_cli_visual_text_pane

0xbb09,	// (0x0001a575) smil_status_volume_pane_g3

0x0002,

0x982f,	// (0x0001829b) call2_cli_visual_graphic_pane_g1

0x982f,	// (0x0001829b) call2_cli_visual_graphic_pane_g2

0x982f,	// (0x0001829b) call2_cli_visual_graphic_pane_g3

0x0002,

0xf4bb,	// (0x0001df27) call2_cli_visual_graphic_pane_g

0xb86e,	// (0x0001a2da) bg_popup_call2_rect_pane_g1

0x9a2a,	// (0x00018496) bg_popup_call2_rect_pane_g2

0xb876,	// (0x0001a2e2) bg_popup_call2_rect_pane_g3

0xb87e,	// (0x0001a2ea) bg_popup_call2_rect_pane_g4

0xb886,	// (0x0001a2f2) bg_popup_call2_rect_pane_g5

0xb88e,	// (0x0001a2fa) bg_popup_call2_rect_pane_g6

0xb896,	// (0x0001a302) bg_popup_call2_rect_pane_g7

0xb89e,	// (0x0001a30a) bg_popup_call2_rect_pane_g8

0xb8a6,	// (0x0001a312) bg_popup_call2_rect_pane_g9

0x0008,

0xf4c2,	// (0x0001df2e) bg_popup_call2_rect_pane_g

0xb8ae,	// (0x0001a31a) bg_popup_call2_bubble_pane_g1

0xb8b6,	// (0x0001a322) bg_popup_call2_bubble_pane_g2

0xb8be,	// (0x0001a32a) bg_popup_call2_bubble_pane_g3

0xb8c6,	// (0x0001a332) bg_popup_call2_bubble_pane_g4

0xb8ce,	// (0x0001a33a) bg_popup_call2_bubble_pane_g5

0xb8d6,	// (0x0001a342) bg_popup_call2_bubble_pane_g6

0xb8de,	// (0x0001a34a) bg_popup_call2_bubble_pane_g7

0xb8e6,	// (0x0001a352) bg_popup_call2_bubble_pane_g8

0xb8ee,	// (0x0001a35a) bg_popup_call2_bubble_pane_g9

0x0008,

0xf4d5,	// (0x0001df41) bg_popup_call2_bubble_pane_g

0x0be5,	// (0x0000f651) aid_cale_week_size_cell_pane

0x1195,	// (0x0000fc01) aid_cams_cif_uncrop_pane_ParamLimits

0x1195,	// (0x0000fc01) aid_cams_cif_uncrop_pane

0x12eb,	// (0x0000fd57) aid_cams_size_cell_ParamLimits

0x12eb,	// (0x0000fd57) aid_cams_size_cell

0x12ff,	// (0x0000fd6b) grid_cams_pane_ParamLimits

0x1319,	// (0x0000fd85) linegrid_cams_pane_ParamLimits

0x13ff,	// (0x0000fe6b) call_video_pane_t1

0x141d,	// (0x0000fe89) call_video_pane_t2

0x0001,

0xf1e2,	// (0x0001dc4e) call_video_pane_t

0x1843,	// (0x000102af) aid_cale_month_size_cell_pane_ParamLimits

0x1843,	// (0x000102af) aid_cale_month_size_cell_pane

0xf56d,	// (0x0001dfd9) smil_status_volume_pane_g

0xbb16,	// (0x0001a582) volume_smil_pane_ParamLimits

0x913e,	// (0x00017baa) aid_popup2_width_pane

0x0b4a,	// (0x0000f5b6) cell_qdial_pane_g4_ParamLimits

0x0b4a,	// (0x0000f5b6) cell_qdial_pane_g4

0x2405,	// (0x00010e71) aid_blid_cardinal_pane_ParamLimits

0x2411,	// (0x00010e7d) aid_blid_destination_pane_ParamLimits

0x2411,	// (0x00010e7d) aid_blid_destination_pane

0x9817,	// (0x00018283) bg_popup_call_poc_act_pane_ParamLimits

0x9817,	// (0x00018283) bg_popup_call_poc_act_pane

0x9817,	// (0x00018283) bg_popup_call_poc_inact_pane_ParamLimits

0x9817,	// (0x00018283) bg_popup_call_poc_inact_pane

0xb8f6,	// (0x0001a362) bg_popup_call_poc_act_pane_g1

0xb8fe,	// (0x0001a36a) bg_popup_call_poc_act_pane_g2

0xb906,	// (0x0001a372) bg_popup_call_poc_act_pane_g3

0xb8c6,	// (0x0001a332) bg_popup_call_poc_act_pane_g4

0xb8ce,	// (0x0001a33a) bg_popup_call_poc_act_pane_g5

0xb90e,	// (0x0001a37a) bg_popup_call_poc_act_pane_g6

0xb8de,	// (0x0001a34a) bg_popup_call_poc_act_pane_g7

0xb916,	// (0x0001a382) bg_popup_call_poc_act_pane_g8

0x95bc,	// (0x00018028) main_usb_pane

0xba22,	// (0x0001a48e) popup_cale_lunar_info_window

0x16e9,	// (0x00010155) im_reading_pane_t1_ParamLimits

0x9c54,	// (0x000186c0) list_im_pane_ParamLimits

0x9c65,	// (0x000186d1) scroll_pane_cp07_ParamLimits

0x95bc,	// (0x00018028) grid_highlight_pane_cp012

0x9817,	// (0x00018283) mup_scale_pane_ParamLimits

0xa847,	// (0x000192b3) main_usb_pane_g1_ParamLimits

0xa847,	// (0x000192b3) main_usb_pane_g1

0x2e91,	// (0x000118fd) main_usb_pane_g2_ParamLimits

0x2e91,	// (0x000118fd) main_usb_pane_g2

0x0001,

0xf512,	// (0x0001df7e) main_usb_pane_g_ParamLimits

0xf512,	// (0x0001df7e) main_usb_pane_g

0x2ea7,	// (0x00011913) main_usb_pane_t1_ParamLimits

0x2ea7,	// (0x00011913) main_usb_pane_t1

0x2eb9,	// (0x00011925) main_usb_pane_t2_ParamLimits

0x2eb9,	// (0x00011925) main_usb_pane_t2

0x2ecb,	// (0x00011937) main_usb_pane_t3_ParamLimits

0x2ecb,	// (0x00011937) main_usb_pane_t3

0x2edd,	// (0x00011949) main_usb_pane_t4_ParamLimits

0x2edd,	// (0x00011949) main_usb_pane_t4

0x2eef,	// (0x0001195b) main_usb_pane_t5_ParamLimits

0x2eef,	// (0x0001195b) main_usb_pane_t5

0x2f01,	// (0x0001196d) main_usb_pane_t6_ParamLimits

0x2f01,	// (0x0001196d) main_usb_pane_t6

0x0005,

0xf517,	// (0x0001df83) main_usb_pane_t_ParamLimits

0x23b4,	// (0x00010e20) aid_text_placing

0x23bd,	// (0x00010e29) main_location2_pane_t1_ParamLimits

0x23cf,	// (0x00010e3b) main_location2_pane_t2_ParamLimits

0x23e1,	// (0x00010e4d) main_location2_pane_t3_ParamLimits

0x23f3,	// (0x00010e5f) main_location2_pane_t4_ParamLimits

0x23f3,	// (0x00010e5f) main_location2_pane_t4

0xf31e,	// (0x0001dd8a) main_location2_pane_t_ParamLimits

0x9845,	// (0x000182b1) find_pinb_pane_g2_ParamLimits

0x9845,	// (0x000182b1) find_pinb_pane_g2

0x0001,

0xf09a,	// (0x0001db06) find_pinb_pane_g_ParamLimits

0xf09a,	// (0x0001db06) find_pinb_pane_g

0x9851,	// (0x000182bd) find_pinb_pane_t1_ParamLimits

0x9863,	// (0x000182cf) find_pinb_pane_t2_ParamLimits

0xf09f,	// (0x0001db0b) find_pinb_pane_t_ParamLimits

0x95bc,	// (0x00018028) main_call3_pane

0x1d2a,	// (0x00010796) cale_month_day_heading_pane_t1_ParamLimits

0x1d6c,	// (0x000107d8) cale_month_day_heading_pane_t2_ParamLimits

0x1da1,	// (0x0001080d) cale_month_day_heading_pane_t3_ParamLimits

0x1dd6,	// (0x00010842) cale_month_day_heading_pane_t4_ParamLimits

0x1e13,	// (0x0001087f) cale_month_day_heading_pane_t5_ParamLimits

0x1e58,	// (0x000108c4) cale_month_day_heading_pane_t6_ParamLimits

0x1e9d,	// (0x00010909) cale_month_day_heading_pane_t7_ParamLimits

0xf21a,	// (0x0001dc86) cale_month_day_heading_pane_t_ParamLimits

0x9ebb,	// (0x00018927) smil_status_volume_pane

0x2922,	// (0x0001138e) postcard_address_pane_ParamLimits

0x2922,	// (0x0001138e) postcard_address_pane

0x2934,	// (0x000113a0) postcard_message_pane_ParamLimits

0x2934,	// (0x000113a0) postcard_message_pane

0x2e6e,	// (0x000118da) call2_cli_visual_pane_t1_ParamLimits

0x2e6e,	// (0x000118da) call2_cli_visual_pane_t1

0xbb43,	// (0x0001a5af) postcard_message_pane_t1_ParamLimits

0xbb43,	// (0x0001a5af) postcard_message_pane_t1

0xbb2b,	// (0x0001a597) postcard_address_pane_t1_ParamLimits

0xbb2b,	// (0x0001a597) postcard_address_pane_t1

0x35e6,	// (0x00012052) popup_call3_audio_in_window_ParamLimits

0x35e6,	// (0x00012052) popup_call3_audio_in_window

0x3471,	// (0x00011edd) bg_popup_call3_in_pane_ParamLimits

0x3471,	// (0x00011edd) bg_popup_call3_in_pane

0x34e7,	// (0x00011f53) popup_call3_audio_in_window_g1_ParamLimits

0x34e7,	// (0x00011f53) popup_call3_audio_in_window_g1

0x3507,	// (0x00011f73) popup_call3_audio_in_window_g2_ParamLimits

0x3507,	// (0x00011f73) popup_call3_audio_in_window_g2

0x3527,	// (0x00011f93) popup_call3_audio_in_window_g3_ParamLimits

0x3527,	// (0x00011f93) popup_call3_audio_in_window_g3

0x0003,

0xf574,	// (0x0001dfe0) popup_call3_audio_in_window_g_ParamLimits

0xf574,	// (0x0001dfe0) popup_call3_audio_in_window_g

0x3558,	// (0x00011fc4) popup_call3_audio_in_window_t1_ParamLimits

0x3558,	// (0x00011fc4) popup_call3_audio_in_window_t1

0x3596,	// (0x00012002) popup_call3_audio_in_window_t2_ParamLimits

0x3596,	// (0x00012002) popup_call3_audio_in_window_t2

0x35d4,	// (0x00012040) popup_call3_audio_in_window_t3_ParamLimits

0x35d4,	// (0x00012040) popup_call3_audio_in_window_t3

0x0002,

0xf57d,	// (0x0001dfe9) popup_call3_audio_in_window_t_ParamLimits

0xf57d,	// (0x0001dfe9) popup_call3_audio_in_window_t

0x9b5b,	// (0x000185c7) bg_popup_call3_rect_pane

0xb86e,	// (0x0001a2da) bg_popup_call3_rect_pane_g1

0x9a2a,	// (0x00018496) bg_popup_call3_rect_pane_g2

0xb876,	// (0x0001a2e2) bg_popup_call3_rect_pane_g3

0xb87e,	// (0x0001a2ea) bg_popup_call3_rect_pane_g4

0xb886,	// (0x0001a2f2) bg_popup_call3_rect_pane_g5

0xb88e,	// (0x0001a2fa) bg_popup_call3_rect_pane_g6

0xb896,	// (0x0001a302) bg_popup_call3_rect_pane_g7

0x912c,	// (0x00017b98) mup_visualizer_osc_pane

0x912c,	// (0x00017b98) mup_visualizer_spec_pane

0x34a1,	// (0x00011f0d) call3_video_qcif_pane_ParamLimits

0x34a1,	// (0x00011f0d) call3_video_qcif_pane

0x34b4,	// (0x00011f20) call3_video_qcif_uncrop_pane_ParamLimits

0x34b4,	// (0x00011f20) call3_video_qcif_uncrop_pane

0x34c2,	// (0x00011f2e) call3_video_subqcif_pane_ParamLimits

0x34c2,	// (0x00011f2e) call3_video_subqcif_pane

0x34d6,	// (0x00011f42) call3_video_subqcif_uncrop_pane_ParamLimits

0x34d6,	// (0x00011f42) call3_video_subqcif_uncrop_pane

0x3547,	// (0x00011fb3) popup_call3_audio_in_window_g4_ParamLimits

0x3547,	// (0x00011fb3) popup_call3_audio_in_window_g4

0x912c,	// (0x00017b98) mup_spec_half_pane

0x912c,	// (0x00017b98) mup_spec_half_pane_cp

0x912c,	// (0x00017b98) mup_osc_middle_pane

0x9b9b,	// (0x00018607) mup_visualizer_osc_pane_g1

0xbabc,	// (0x0001a528) mup_spec_bar_pane_ParamLimits

0xbabc,	// (0x0001a528) mup_spec_bar_pane

0x9b9b,	// (0x00018607) mup_spec_bar_pane_g1

0x9b9b,	// (0x00018607) mup_spec_bar_pane_g2

0x0001,

0xf398,	// (0x0001de04) mup_spec_bar_pane_g

0x0be5,	// (0x0000f651) aid_cale_week_size_cell_pane_ParamLimits

0x0bff,	// (0x0000f66b) bg_cale_heading_pane_ParamLimits

0x9abd,	// (0x00018529) bg_cale_pane_cp01_ParamLimits

0x0c17,	// (0x0000f683) cale_week_corner_pane_ParamLimits

0x0c36,	// (0x0000f6a2) cale_week_day_heading_pane_ParamLimits

0x0c53,	// (0x0000f6bf) cale_week_scroll_pane_g1_ParamLimits

0x0c66,	// (0x0000f6d2) cale_week_scroll_pane_g2_ParamLimits

0x0c7e,	// (0x0000f6ea) cale_week_scroll_pane_g3_ParamLimits

0x0c96,	// (0x0000f702) cale_week_scroll_pane_g4_ParamLimits

0x0cae,	// (0x0000f71a) cale_week_scroll_pane_g5_ParamLimits

0x0cce,	// (0x0000f73a) cale_week_scroll_pane_g6_ParamLimits

0x0cee,	// (0x0000f75a) cale_week_scroll_pane_g7_ParamLimits

0x0d0e,	// (0x0000f77a) cale_week_scroll_pane_g8_ParamLimits

0x0d32,	// (0x0000f79e) cale_week_scroll_pane_g9_ParamLimits

0x0d4a,	// (0x0000f7b6) cale_week_scroll_pane_g10_ParamLimits

0x0d62,	// (0x0000f7ce) cale_week_scroll_pane_g11_ParamLimits

0x0d7a,	// (0x0000f7e6) cale_week_scroll_pane_g12_ParamLimits

0x0d92,	// (0x0000f7fe) cale_week_scroll_pane_g13_ParamLimits

0x0d92,	// (0x0000f7fe) cale_week_scroll_pane_g14_ParamLimits

0x0d92,	// (0x0000f7fe) cale_week_scroll_pane_g15_ParamLimits

0xf12b,	// (0x0001db97) cale_week_scroll_pane_g_ParamLimits

0x0dce,	// (0x0000f83a) cale_week_time_pane_ParamLimits

0x0df2,	// (0x0000f85e) grid_cale_week_pane_ParamLimits

0x9ada,	// (0x00018546) listscroll_cale_week_pane_t1

0x9aec,	// (0x00018558) scroll_pane_cp08_ParamLimits

0x18a3,	// (0x0001030f) cale_month_corner_pane_ParamLimits

0x9e85,	// (0x000188f1) cale_month_pane_t1

0x1cbd,	// (0x00010729) cale_month_week_pane_ParamLimits

0x2209,	// (0x00010c75) popup_call_status_window_g1_ParamLimits

0x221d,	// (0x00010c89) popup_call_status_window_g2_ParamLimits

0x2231,	// (0x00010c9d) popup_call_status_window_g3_ParamLimits

0xf2a5,	// (0x0001dd11) popup_call_status_window_g_ParamLimits

0xa273,	// (0x00018cdf) aid_call2_pane

0x274d,	// (0x000111b9) msg_header_pane_g1

0x2922,	// (0x0001138e) postcard_address2_pane_ParamLimits

0x2922,	// (0x0001138e) postcard_address2_pane

0x2934,	// (0x000113a0) postcard_message2_pane_ParamLimits

0x2934,	// (0x000113a0) postcard_message2_pane

0x3441,	// (0x00011ead) message2_row_pane_ParamLimits

0x3441,	// (0x00011ead) message2_row_pane

0x345e,	// (0x00011eca) address2_row_pane_ParamLimits

0x345e,	// (0x00011eca) address2_row_pane

0xba89,	// (0x0001a4f5) postcard_message2_row_pane_g1

0xba91,	// (0x0001a4fd) postcard_message2_row_pane_t1

0xba89,	// (0x0001a4f5) address2_row_pane_g1

0xba91,	// (0x0001a4fd) address2_row_pane_t1

0x112c,	// (0x0000fb98) aid_size_cell_vorec

0x95bc,	// (0x00018028) main_rss_pane

0xba9f,	// (0x0001a50b) rss_list_single_pane_ParamLimits

0xba9f,	// (0x0001a50b) rss_list_single_pane

0xbaad,	// (0x0001a519) rss_list_single_pane_t1

0xbaad,	// (0x0001a519) rss_list_single_pane_t2

0x0001,

0xf568,	// (0x0001dfd4) rss_list_single_pane_t

0x95bc,	// (0x00018028) main_camera2_pane

0x95bc,	// (0x00018028) main_video2_pane

0xbb5f,	// (0x0001a5cb) cams_zoom_pane_cp2_ParamLimits

0xbb5f,	// (0x0001a5cb) cams_zoom_pane_cp2

0xbb5f,	// (0x0001a5cb) image2_vga_pane_ParamLimits

0xbb5f,	// (0x0001a5cb) image2_vga_pane

0xbb6d,	// (0x0001a5d9) main_camera2_pane_g1_ParamLimits

0xbb6d,	// (0x0001a5d9) main_camera2_pane_g1

0xbb6d,	// (0x0001a5d9) main_camera2_pane_g2_ParamLimits

0xbb6d,	// (0x0001a5d9) main_camera2_pane_g2

0xbb6d,	// (0x0001a5d9) main_camera2_pane_g3_ParamLimits

0xbb6d,	// (0x0001a5d9) main_camera2_pane_g3

0xbb6d,	// (0x0001a5d9) main_camera2_pane_g4_ParamLimits

0xbb6d,	// (0x0001a5d9) main_camera2_pane_g4

0xbb6d,	// (0x0001a5d9) main_camera2_pane_g5_ParamLimits

0xbb6d,	// (0x0001a5d9) main_camera2_pane_g5

0xbb6d,	// (0x0001a5d9) main_camera2_pane_g6_ParamLimits

0xbb6d,	// (0x0001a5d9) main_camera2_pane_g6

0xbb6d,	// (0x0001a5d9) main_camera2_pane_g7_ParamLimits

0xbb6d,	// (0x0001a5d9) main_camera2_pane_g7

0xbb6d,	// (0x0001a5d9) main_camera2_pane_g8_ParamLimits

0xbb6d,	// (0x0001a5d9) main_camera2_pane_g8

0x0008,

0xf584,	// (0x0001dff0) main_camera2_pane_g_ParamLimits

0xf584,	// (0x0001dff0) main_camera2_pane_g

0x3608,	// (0x00012074) main_camera2_pane_t1_ParamLimits

0x3608,	// (0x00012074) main_camera2_pane_t1

0x3608,	// (0x00012074) main_camera2_pane_t2_ParamLimits

0x3608,	// (0x00012074) main_camera2_pane_t2

0x3608,	// (0x00012074) main_camera2_pane_t3_ParamLimits

0x3608,	// (0x00012074) main_camera2_pane_t3

0x3608,	// (0x00012074) main_camera2_pane_t4_ParamLimits

0x3608,	// (0x00012074) main_camera2_pane_t4

0x0006,

0xf597,	// (0x0001e003) main_camera2_pane_t_ParamLimits

0xf597,	// (0x0001e003) main_camera2_pane_t

0xbb8f,	// (0x0001a5fb) cams_zoom_pane_cp4_ParamLimits

0xbb8f,	// (0x0001a5fb) cams_zoom_pane_cp4

0xbb9d,	// (0x0001a609) image2_cif_pane_ParamLimits

0xbb9d,	// (0x0001a609) image2_cif_pane

0x919b,	// (0x00017c07) image2_subqcif_pane_ParamLimits

0x919b,	// (0x00017c07) image2_subqcif_pane

0x361c,	// (0x00012088) main_video2_pane_g1_ParamLimits

0x361c,	// (0x00012088) main_video2_pane_g1

0x361c,	// (0x00012088) main_video2_pane_g2_ParamLimits

0x361c,	// (0x00012088) main_video2_pane_g2

0x361c,	// (0x00012088) main_video2_pane_g3_ParamLimits

0x361c,	// (0x00012088) main_video2_pane_g3

0x361c,	// (0x00012088) main_video2_pane_g4_ParamLimits

0x361c,	// (0x00012088) main_video2_pane_g4

0x361c,	// (0x00012088) main_video2_pane_g5_ParamLimits

0x361c,	// (0x00012088) main_video2_pane_g5

0x361c,	// (0x00012088) main_video2_pane_g6_ParamLimits

0x361c,	// (0x00012088) main_video2_pane_g6

0x0005,

0xf5a6,	// (0x0001e012) main_video2_pane_g_ParamLimits

0xf5a6,	// (0x0001e012) main_video2_pane_g

0x362a,	// (0x00012096) main_video2_pane_t1_ParamLimits

0x362a,	// (0x00012096) main_video2_pane_t1

0x362a,	// (0x00012096) main_video2_pane_t2_ParamLimits

0x362a,	// (0x00012096) main_video2_pane_t2

0x362a,	// (0x00012096) main_video2_pane_t3_ParamLimits

0x362a,	// (0x00012096) main_video2_pane_t3

0x0002,

0xf5b3,	// (0x0001e01f) main_video2_pane_t_ParamLimits

0xf5b3,	// (0x0001e01f) main_video2_pane_t

0x2f95,	// (0x00011a01) call_muted_g2

0x0001,

0xf55a,	// (0x0001dfc6) call_muted_g

0x95bc,	// (0x00018028) main_mup2_pane

0xa6f8,	// (0x00019164) main_mup2_pane_g1_ParamLimits

0xa6f8,	// (0x00019164) main_mup2_pane_g1

0xa6f8,	// (0x00019164) main_mup2_pane_g2_ParamLimits

0xa6f8,	// (0x00019164) main_mup2_pane_g2

0x9b9b,	// (0x00018607) main_mup_pane_g13_cp1

0x912c,	// (0x00017b98) mup_volume_pane_cp1

0xa6f8,	// (0x00019164) main_mup2_pane_g4_ParamLimits

0xa6f8,	// (0x00019164) main_mup2_pane_g4

0xa6f8,	// (0x00019164) main_mup2_pane_g5_ParamLimits

0xa6f8,	// (0x00019164) main_mup2_pane_g5

0xa6f8,	// (0x00019164) main_mup2_pane_g6_ParamLimits

0xa6f8,	// (0x00019164) main_mup2_pane_g6

0xa6f8,	// (0x00019164) main_mup2_pane_g7_ParamLimits

0xa6f8,	// (0x00019164) main_mup2_pane_g7

0x0006,

0xf5ba,	// (0x0001e026) main_mup2_pane_g_ParamLimits

0xf5ba,	// (0x0001e026) main_mup2_pane_g

0xa706,	// (0x00019172) main_mup2_pane_t1_ParamLimits

0xa706,	// (0x00019172) main_mup2_pane_t1

0xa706,	// (0x00019172) main_mup2_pane_t2_ParamLimits

0xa706,	// (0x00019172) main_mup2_pane_t2

0xa706,	// (0x00019172) main_mup2_pane_t3_ParamLimits

0xa706,	// (0x00019172) main_mup2_pane_t3

0xa706,	// (0x00019172) main_mup2_pane_t4_ParamLimits

0xa706,	// (0x00019172) main_mup2_pane_t4

0xa706,	// (0x00019172) main_mup2_pane_t5_ParamLimits

0xa706,	// (0x00019172) main_mup2_pane_t5

0xa706,	// (0x00019172) main_mup2_pane_t6_ParamLimits

0xa706,	// (0x00019172) main_mup2_pane_t6

0x0005,

0xf5c9,	// (0x0001e035) main_mup2_pane_t_ParamLimits

0xf5c9,	// (0x0001e035) main_mup2_pane_t

0xa72e,	// (0x0001919a) mup2_visualizer_pane_ParamLimits

0xa72e,	// (0x0001919a) mup2_visualizer_pane

0xa72e,	// (0x0001919a) mup_progress_pane_cp_ParamLimits

0xa72e,	// (0x0001919a) mup_progress_pane_cp

0xbbab,	// (0x0001a617) mup_volume_pane_cp_ParamLimits

0xbbab,	// (0x0001a617) mup_volume_pane_cp

0x9892,	// (0x000182fe) mup2_visualizer_pane_g1_ParamLimits

0x9892,	// (0x000182fe) mup2_visualizer_pane_g1

0x98a0,	// (0x0001830c) mup2_visualizer_pane_g2_ParamLimits

0x98a0,	// (0x0001830c) mup2_visualizer_pane_g2

0x98a0,	// (0x0001830c) mup2_visualizer_pane_g3_ParamLimits

0x98a0,	// (0x0001830c) mup2_visualizer_pane_g3

0x0002,

0xf0a4,	// (0x0001db10) mup2_visualizer_pane_g_ParamLimits

0xf0a4,	// (0x0001db10) mup2_visualizer_pane_g

0xa990,	// (0x000193fc) aid_size_cell_fmradio

0x3147,	// (0x00011bb3) aid_height_parent_landcape

0x9ce3,	// (0x0001874f) wml_content_pane_cp

0x9ceb,	// (0x00018757) wml_tabs_pane

0x9cf4,	// (0x00018760) popup_wml_miniature_window

0x9cfc,	// (0x00018768) scroll_pane_cp021

0x9d10,	// (0x0001877c) wml_content_pane_comp8

0x95bc,	// (0x00018028) bg_popup_sub_pane_cp05

0xbbc1,	// (0x0001a62d) popup_wml_miniature_window_g1

0xbbc9,	// (0x0001a635) wml_miniature_view_pane

0x363e,	// (0x000120aa) aid_size_wml_view

0x3646,	// (0x000120b2) wml_miniature_view_pane_g1

0x364f,	// (0x000120bb) wml_miniature_view_pane_g2

0x3658,	// (0x000120c4) wml_miniature_view_pane_g3

0x3660,	// (0x000120cc) wml_miniature_view_pane_g4

0x3668,	// (0x000120d4) wml_miniature_view_pane_g5

0x3670,	// (0x000120dc) wml_miniature_view_pane_g6

0x3678,	// (0x000120e4) wml_miniature_view_pane_g7

0x3680,	// (0x000120ec) wml_miniature_view_pane_g8

0x0007,

0xf5d6,	// (0x0001e042) wml_miniature_view_pane_g

0xbbd1,	// (0x0001a63d) background_graphic_ParamLimits

0xbbd1,	// (0x0001a63d) background_graphic

0xbbdd,	// (0x0001a649) wml_tabs_2_pane

0xbbe6,	// (0x0001a652) wml_tabs_3_pane_ParamLimits

0xbbe6,	// (0x0001a652) wml_tabs_3_pane

0xbbf8,	// (0x0001a664) wml_tabs_4_pane_ParamLimits

0xbbf8,	// (0x0001a664) wml_tabs_4_pane

0xbc0e,	// (0x0001a67a) wml_tabs_5_pane_ParamLimits

0xbc0e,	// (0x0001a67a) wml_tabs_5_pane

0xbc28,	// (0x0001a694) wml_tabs_pane_g2_ParamLimits

0xbc28,	// (0x0001a694) wml_tabs_pane_g2

0xbc3d,	// (0x0001a6a9) wml_tabs_pane_g3_ParamLimits

0xbc3d,	// (0x0001a6a9) wml_tabs_pane_g3

0xbc52,	// (0x0001a6be) wml_tabs_2_active_pane_ParamLimits

0xbc52,	// (0x0001a6be) wml_tabs_2_active_pane

0xbc52,	// (0x0001a6be) wml_tabs_2_passive_pane_ParamLimits

0xbc52,	// (0x0001a6be) wml_tabs_2_passive_pane

0x3688,	// (0x000120f4) wml_tabs_3_active_pane_cp_ParamLimits

0x3688,	// (0x000120f4) wml_tabs_3_active_pane_cp

0x369d,	// (0x00012109) wml_tabs_3_passive_pane_ParamLimits

0x369d,	// (0x00012109) wml_tabs_3_passive_pane

0x36b0,	// (0x0001211c) wml_tabs_3_passive_pane_cp_ParamLimits

0x36b0,	// (0x0001211c) wml_tabs_3_passive_pane_cp

0x36c7,	// (0x00012133) tabs_4_active_pane

0x36cf,	// (0x0001213b) tabs_4_passive_pane

0x36d9,	// (0x00012145) tabs_4_passive_pane_cp

0x36e1,	// (0x0001214d) tabs_4_passive_pane_cp2

0x2e89,	// (0x000118f5) aid_height_text

0xa72e,	// (0x0001919a) mup_volume_cont_pane_ParamLimits

0xa72e,	// (0x0001919a) mup_volume_cont_pane

0x912c,	// (0x00017b98) aid_size_cell_pinb

0x912c,	// (0x00017b98) aid_size_list_pinb

0xa72e,	// (0x0001919a) mup2_volume_cont_pane_ParamLimits

0xa72e,	// (0x0001919a) mup2_volume_cont_pane

0xbc60,	// (0x0001a6cc) mup2_volume_cont_pane_g1_ParamLimits

0xbc60,	// (0x0001a6cc) mup2_volume_cont_pane_g1

0x05e7,	// (0x0000f053) aid_size_cell_touch_ParamLimits

0x05e7,	// (0x0000f053) aid_size_cell_touch

0x0813,	// (0x0000f27f) touch_pane_ParamLimits

0x0813,	// (0x0000f27f) touch_pane

0x912c,	// (0x00017b98) main_rss2_pane

0xbc7f,	// (0x0001a6eb) listscroll_rss2_pane

0xbc88,	// (0x0001a6f4) rss2_navigation_pane

0xbc90,	// (0x0001a6fc) list_rss2_pane

0xa3fb,	// (0x00018e67) scroll_pane_cp22

0xbc98,	// (0x0001a704) rss2_navigation_pane_g1

0xbca1,	// (0x0001a70d) rss2_navigation_pane_g2

0xbca9,	// (0x0001a715) rss2_navigation_pane_g3

0x0002,

0xf5e7,	// (0x0001e053) rss2_navigation_pane_g

0xbcb1,	// (0x0001a71d) rss2_navigation_pane_t1

0x36eb,	// (0x00012157) rss2_list_single_pane_ParamLimits

0x36eb,	// (0x00012157) rss2_list_single_pane

0xbcbf,	// (0x0001a72b) rss2_list_single_pane_t2

0xbccd,	// (0x0001a739) rss2_list_single_pane_t3_ParamLimits

0xbccd,	// (0x0001a739) rss2_list_single_pane_t3

0xbcea,	// (0x0001a756) rss2_list_single_pane_t4

0x20e5,	// (0x00010b51) smil_status_pane_g1

0x919b,	// (0x00017c07) main_image2_pane_ParamLimits

0x919b,	// (0x00017c07) main_image2_pane

0xbb6d,	// (0x0001a5d9) main_camera2_pane_g9_ParamLimits

0xbb6d,	// (0x0001a5d9) main_camera2_pane_g9

0x3608,	// (0x00012074) main_camera2_pane_t5_ParamLimits

0x3608,	// (0x00012074) main_camera2_pane_t5

0xbb7b,	// (0x0001a5e7) main_camera2_pane_t6_ParamLimits

0xbb7b,	// (0x0001a5e7) main_camera2_pane_t6

0x3701,	// (0x0001216d) main_image2_pane_g1_ParamLimits

0x3701,	// (0x0001216d) main_image2_pane_g1

0x2b5c,	// (0x000115c8) smil2_video_pane_ParamLimits

0x2b5c,	// (0x000115c8) smil2_video_pane

0x914a,	// (0x00017bb6) aid_zoom_text_primary_cp

0x9191,	// (0x00017bfd) popup_preview_fixed_window

0x9c4c,	// (0x000186b8) im_reading_pane_g1

0x35fa,	// (0x00012066) cams2_bc_adjust_pane_cp_ParamLimits

0x35fa,	// (0x00012066) cams2_bc_adjust_pane_cp

0xa72e,	// (0x0001919a) cams2_bc_adjust_pane_ParamLimits

0xa72e,	// (0x0001919a) cams2_bc_adjust_pane

0x9b9b,	// (0x00018607) cams2_bc_adjust_pane_g1

0x912c,	// (0x00017b98) cams2_slider_pane

0x9b9b,	// (0x00018607) cams2_slider_pane_g1

0x9b9b,	// (0x00018607) cams2_slider_pane_g2

0x0006,

0xf5ee,	// (0x0001e05a) cams2_slider_pane_g

0x08dc,	// (0x0000f348) calc_display_pane_ParamLimits

0x0901,	// (0x0000f36d) calc_paper_pane_ParamLimits

0x0924,	// (0x0000f390) grid_calc_pane_ParamLimits

0xa2d5,	// (0x00018d41) popup_clock_digital_window_t1_ParamLimits

0xa92d,	// (0x00019399) main_image_pane_t1

0x08be,	// (0x0000f32a) aid_size_cell_calc_ParamLimits

0x08be,	// (0x0000f32a) aid_size_cell_calc

0x318d,	// (0x00011bf9) popup_blid_sat_info2_window_ParamLimits

0x318d,	// (0x00011bf9) popup_blid_sat_info2_window

0xbcf8,	// (0x0001a764) aid_size_cell_blid

0xbb9d,	// (0x0001a609) bg_popup_window_pane_cp07

0xbd15,	// (0x0001a781) grid_popup_blid_pane

0xbd1f,	// (0x0001a78b) heading_pane_cp05_ParamLimits

0xbd1f,	// (0x0001a78b) heading_pane_cp05

0xbde9,	// (0x0001a855) cell_popup_blid_pane_ParamLimits

0xbde9,	// (0x0001a855) cell_popup_blid_pane

0xbe0d,	// (0x0001a879) cell_popup_blid_pane_g1

0xbe15,	// (0x0001a881) cell_popup_blid_pane_t1

0xa72e,	// (0x0001919a) mup2_indicator_pane_ParamLimits

0xa72e,	// (0x0001919a) mup2_indicator_pane

0x912c,	// (0x00017b98) mup2_visualizer_osc_pane

0xbbab,	// (0x0001a617) mup2_visualizer_spec_pane_ParamLimits

0xbbab,	// (0x0001a617) mup2_visualizer_spec_pane

0x912c,	// (0x00017b98) mup2_spec_half_pane

0x912c,	// (0x00017b98) mup2_spec_half_pane_cp

0xbe23,	// (0x0001a88f) mup2_spec_bar_pane_ParamLimits

0xbe23,	// (0x0001a88f) mup2_spec_bar_pane

0x9b9b,	// (0x00018607) mup2_spec_bar_pane_g1

0xbe42,	// (0x0001a8ae) mup2_spec_bar_pane_g2

0x0001,

0xf614,	// (0x0001e080) mup2_spec_bar_pane_g

0x912c,	// (0x00017b98) mup2_osc_middle_pane

0x9b9b,	// (0x00018607) mup2_visualizer_osc_pane_g1

0x91c9,	// (0x00017c35) popup_number_entry_window_t1_ParamLimits

0x91dc,	// (0x00017c48) popup_number_entry_window_t2_ParamLimits

0x91ee,	// (0x00017c5a) popup_number_entry_window_t3_ParamLimits

0x0865,	// (0x0000f2d1) popup_number_entry_window_t5_ParamLimits

0x0865,	// (0x0000f2d1) popup_number_entry_window_t5

0xf045,	// (0x0001dab1) popup_number_entry_window_t_ParamLimits

0x9200,	// (0x00017c6c) text_title_cp2_ParamLimits

0xa807,	// (0x00019273) aid_hotspot_pointer_text2_pane

0xa82d,	// (0x00019299) main_viewer_pane_g9_ParamLimits

0xa82d,	// (0x00019299) main_viewer_pane_g9

0x9e85,	// (0x000188f1) cale_month_pane_t1_ParamLimits

0x9ef0,	// (0x0001895c) bg_cale_pane_ParamLimits

0x9f08,	// (0x00018974) list_cale_pane_ParamLimits

0x9f19,	// (0x00018985) listscroll_cale_day_pane_t1

0x9f2b,	// (0x00018997) scroll_pane_cp09_ParamLimits

0x24de,	// (0x00010f4a) main_mup_eq_pane_t1_ParamLimits

0x24de,	// (0x00010f4a) main_mup_eq_pane_t1

0x24f8,	// (0x00010f64) main_mup_eq_pane_t2_ParamLimits

0x24f8,	// (0x00010f64) main_mup_eq_pane_t2

0x2512,	// (0x00010f7e) main_mup_eq_pane_t3_ParamLimits

0x2512,	// (0x00010f7e) main_mup_eq_pane_t3

0x252e,	// (0x00010f9a) main_mup_eq_pane_t4_ParamLimits

0x252e,	// (0x00010f9a) main_mup_eq_pane_t4

0x254a,	// (0x00010fb6) main_mup_eq_pane_t5_ParamLimits

0x254a,	// (0x00010fb6) main_mup_eq_pane_t5

0x2566,	// (0x00010fd2) main_mup_eq_pane_t6_ParamLimits

0x2566,	// (0x00010fd2) main_mup_eq_pane_t6

0x257a,	// (0x00010fe6) main_mup_eq_pane_t7_ParamLimits

0x257a,	// (0x00010fe6) main_mup_eq_pane_t7

0x258e,	// (0x00010ffa) main_mup_eq_pane_t8_ParamLimits

0x258e,	// (0x00010ffa) main_mup_eq_pane_t8

0x25a2,	// (0x0001100e) main_mup_eq_pane_t9_ParamLimits

0x25a2,	// (0x0001100e) main_mup_eq_pane_t9

0x25bc,	// (0x00011028) main_mup_eq_pane_t10_ParamLimits

0x25bc,	// (0x00011028) main_mup_eq_pane_t10

0x0009,

0xf3a4,	// (0x0001de10) main_mup_eq_pane_t_ParamLimits

0xf3a4,	// (0x0001de10) main_mup_eq_pane_t

0x266b,	// (0x000110d7) mup_equalizer_pane_cp5_ParamLimits

0x267f,	// (0x000110eb) mup_equalizer_pane_cp6_ParamLimits

0x2693,	// (0x000110ff) mup_equalizer_pane_cp7_ParamLimits

0x912c,	// (0x00017b98) main_gallery_pane

0xbadb,	// (0x0001a547) smil2_volume_pane

0xbae3,	// (0x0001a54f) smil_status_volume_pane_g1_ParamLimits

0xbaf6,	// (0x0001a562) smil_status_volume_pane_g2_ParamLimits

0xbb09,	// (0x0001a575) smil_status_volume_pane_g3_ParamLimits

0xf56d,	// (0x0001dfd9) smil_status_volume_pane_g_ParamLimits

0xbb9d,	// (0x0001a609) bg_popup_window_pane_cp07_ParamLimits

0xbd00,	// (0x0001a76c) blid_firmament_pane

0x919b,	// (0x00017c07) aid_size_cell_gallery_ParamLimits

0x919b,	// (0x00017c07) aid_size_cell_gallery

0x919b,	// (0x00017c07) grid_gallery_pane_ParamLimits

0x919b,	// (0x00017c07) grid_gallery_pane

0xbb9d,	// (0x0001a609) cell_gallery_pane_ParamLimits

0xbb9d,	// (0x0001a609) cell_gallery_pane

0x919b,	// (0x00017c07) bg_cell_gallery_focus_pane_ParamLimits

0x919b,	// (0x00017c07) bg_cell_gallery_focus_pane

0x9892,	// (0x000182fe) cell_gallery_pane_g1_ParamLimits

0x9892,	// (0x000182fe) cell_gallery_pane_g1

0x9892,	// (0x000182fe) cell_gallery_pane_g2_ParamLimits

0x9892,	// (0x000182fe) cell_gallery_pane_g2

0x9892,	// (0x000182fe) cell_gallery_pane_g3_ParamLimits

0x9892,	// (0x000182fe) cell_gallery_pane_g3

0x98a0,	// (0x0001830c) cell_gallery_pane_g4_ParamLimits

0x98a0,	// (0x0001830c) cell_gallery_pane_g4

0x0003,

0xf619,	// (0x0001e085) cell_gallery_pane_g_ParamLimits

0xf619,	// (0x0001e085) cell_gallery_pane_g

0xbe4c,	// (0x0001a8b8) bg_cell_gallery_focus_pane_g1

0xbe54,	// (0x0001a8c0) bg_cell_gallery_focus_pane_g2

0xbe5c,	// (0x0001a8c8) bg_cell_gallery_focus_pane_g3

0xbe64,	// (0x0001a8d0) bg_cell_gallery_focus_pane_g4

0xbe6c,	// (0x0001a8d8) bg_cell_gallery_focus_pane_g5

0xbe74,	// (0x0001a8e0) bg_cell_gallery_focus_pane_g6

0xbe7c,	// (0x0001a8e8) bg_cell_gallery_focus_pane_g7

0xbe84,	// (0x0001a8f0) bg_cell_gallery_focus_pane_g8

0x0007,

0xf622,	// (0x0001e08e) bg_cell_gallery_focus_pane_g

0xbe8c,	// (0x0001a8f8) aid_firma_cardinal

0xbea0,	// (0x0001a90c) blid_firmament_pane_t1

0xbeb7,	// (0x0001a923) blid_firmament_pane_t2

0xbece,	// (0x0001a93a) blid_firmament_pane_t3

0xbee5,	// (0x0001a951) blid_firmament_pane_t4

0x0003,

0xf633,	// (0x0001e09f) blid_firmament_pane_t

0xbefc,	// (0x0001a968) blid_sat_info_pane

0x9b9b,	// (0x00018607) blid_sat_info_pane_g1

0x9b9b,	// (0x00018607) blid_sat_info_pane_g2

0x0001,

0xf398,	// (0x0001de04) blid_sat_info_pane_g

0xbf0c,	// (0x0001a978) blid_sat_info_pane_t1

0xbf1a,	// (0x0001a986) smil2_volume_content_pane

0xbf23,	// (0x0001a98f) smil2_volume_pane_g1

0x99c1,	// (0x0001842d) smil2_volume_content_pane_g1

0xbf2b,	// (0x0001a997) smil2_volume_content_pane_g2

0xbf34,	// (0x0001a9a0) smil2_volume_content_pane_g3

0xbf3d,	// (0x0001a9a9) smil2_volume_content_pane_g4

0xbf46,	// (0x0001a9b2) smil2_volume_content_pane_g5

0xbf4f,	// (0x0001a9bb) smil2_volume_content_pane_g6

0xbf58,	// (0x0001a9c4) smil2_volume_content_pane_g7

0xbf61,	// (0x0001a9cd) smil2_volume_content_pane_g8

0xbf6a,	// (0x0001a9d6) smil2_volume_content_pane_g9

0xbf73,	// (0x0001a9df) smil2_volume_content_pane_g10

0x0009,

0xf63c,	// (0x0001e0a8) smil2_volume_content_pane_g

0x0ea6,	// (0x0000f912) cale_week_day_heading_pane_t1_ParamLimits

0x0ed0,	// (0x0000f93c) cale_week_day_heading_pane_t2_ParamLimits

0x0eff,	// (0x0000f96b) cale_week_day_heading_pane_t3_ParamLimits

0x0f2e,	// (0x0000f99a) cale_week_day_heading_pane_t4_ParamLimits

0x0f5d,	// (0x0000f9c9) cale_week_day_heading_pane_t5_ParamLimits

0x0f94,	// (0x0000fa00) cale_week_day_heading_pane_t6_ParamLimits

0x0fcb,	// (0x0000fa37) cale_week_day_heading_pane_t7_ParamLimits

0xf14c,	// (0x0001dbb8) cale_week_day_heading_pane_t_ParamLimits

0x9b09,	// (0x00018575) bg_cale_side_pane_ParamLimits

0x0ff5,	// (0x0000fa61) cale_week_time_pane_t1_ParamLimits

0x100f,	// (0x0000fa7b) cale_week_time_pane_t2_ParamLimits

0x1029,	// (0x0000fa95) cale_week_time_pane_t3_ParamLimits

0x1043,	// (0x0000faaf) cale_week_time_pane_t4_ParamLimits

0x105d,	// (0x0000fac9) cale_week_time_pane_t5_ParamLimits

0x1077,	// (0x0000fae3) cale_week_time_pane_t6_ParamLimits

0x1091,	// (0x0000fafd) cale_week_time_pane_t7_ParamLimits

0x10ab,	// (0x0000fb17) cale_week_time_pane_t8_ParamLimits

0xf15b,	// (0x0001dbc7) cale_week_time_pane_t_ParamLimits

0x10cb,	// (0x0000fb37) cell_cale_week_pane_g2_ParamLimits

0x9b09,	// (0x00018575) bg_cale_side_pane_cp01_ParamLimits

0x1eea,	// (0x00010956) cale_month_week_pane_t1_ParamLimits

0x1f03,	// (0x0001096f) cale_month_week_pane_t2_ParamLimits

0x1f1c,	// (0x00010988) cale_month_week_pane_t3_ParamLimits

0x1f35,	// (0x000109a1) cale_month_week_pane_t4_ParamLimits

0x1f4e,	// (0x000109ba) cale_month_week_pane_t5_ParamLimits

0x1f67,	// (0x000109d3) cale_month_week_pane_t6_ParamLimits

0xf229,	// (0x0001dc95) cale_month_week_pane_t_ParamLimits

0x9e97,	// (0x00018903) cell_cale_month_pane_g1_ParamLimits

0x912c,	// (0x00017b98) main_cale_event_viewer_pane

0x912c,	// (0x00017b98) listscroll_cale_event_viewer_pane

0xbf7c,	// (0x0001a9e8) list_cale_ev_pane

0xbf84,	// (0x0001a9f0) scroll_pane_cp023

0xbf90,	// (0x0001a9fc) field_cale_ev_pane_ParamLimits

0xbf90,	// (0x0001a9fc) field_cale_ev_pane

0xbfae,	// (0x0001aa1a) field_cale_ev_content_pane_ParamLimits

0xbfae,	// (0x0001aa1a) field_cale_ev_content_pane

0xbfba,	// (0x0001aa26) field_cale_ev_pane_g1_ParamLimits

0xbfba,	// (0x0001aa26) field_cale_ev_pane_g1

0xbfc6,	// (0x0001aa32) field_cale_ev_pane_g2_ParamLimits

0xbfc6,	// (0x0001aa32) field_cale_ev_pane_g2

0xbfde,	// (0x0001aa4a) field_cale_ev_pane_g3_ParamLimits

0xbfde,	// (0x0001aa4a) field_cale_ev_pane_g3

0x0002,

0xf651,	// (0x0001e0bd) field_cale_ev_pane_g_ParamLimits

0xf651,	// (0x0001e0bd) field_cale_ev_pane_g

0xbff6,	// (0x0001aa62) field_cale_ev_pane_t1_ParamLimits

0xbff6,	// (0x0001aa62) field_cale_ev_pane_t1

0xc00d,	// (0x0001aa79) field_cale_ev_content_pane_t1_ParamLimits

0xc00d,	// (0x0001aa79) field_cale_ev_content_pane_t1

0xa7d1,	// (0x0001923d) bg_button_pane_cp01

0x0bd3,	// (0x0000f63f) listscroll_cale_week_pane_ParamLimits

0x9ab4,	// (0x00018520) popup_toolbar_window_cp01

0x9ada,	// (0x00018546) listscroll_cale_week_pane_t1_ParamLimits

0x0bd3,	// (0x0000f63f) listscroll_cale_day_pane_ParamLimits

0x9ab4,	// (0x00018520) popup_toolbar_window_cp02

0x9f19,	// (0x00018985) listscroll_cale_day_pane_t1_ParamLimits

0x0bd3,	// (0x0000f63f) main_cale_month_pane_ParamLimits

0xba59,	// (0x0001a4c5) popup_toolbar_window_cp03_ParamLimits

0xba59,	// (0x0001a4c5) popup_toolbar_window_cp03

0x2a24,	// (0x00011490) main_image_pane_g2_ParamLimits

0x2a24,	// (0x00011490) main_image_pane_g2

0x2a35,	// (0x000114a1) main_image_pane_g3_ParamLimits

0x2a35,	// (0x000114a1) main_image_pane_g3

0x0002,

0xf436,	// (0x0001dea2) main_image_pane_g_ParamLimits

0xf436,	// (0x0001dea2) main_image_pane_g

0xa92d,	// (0x00019399) main_image_pane_t1_ParamLimits

0x2a46,	// (0x000114b2) main_image_pane_t2_ParamLimits

0x2a46,	// (0x000114b2) main_image_pane_t2

0x2a58,	// (0x000114c4) main_image_pane_t3_ParamLimits

0x2a58,	// (0x000114c4) main_image_pane_t3

0x2a80,	// (0x000114ec) main_image_pane_t4_ParamLimits

0x2a80,	// (0x000114ec) main_image_pane_t4

0x0003,

0xf43d,	// (0x0001dea9) main_image_pane_t_ParamLimits

0xf43d,	// (0x0001dea9) main_image_pane_t

0x2aa0,	// (0x0001150c) popup_image_details_window_cp01

0x2aaa,	// (0x00011516) popup_toobar_trans_pane_cp01_ParamLimits

0x2aaa,	// (0x00011516) popup_toobar_trans_pane_cp01

0x325e,	// (0x00011cca) popup_image_details_window_ParamLimits

0x325e,	// (0x00011cca) popup_image_details_window

0xba2c,	// (0x0001a498) popup_image_focus_window

0xbb5f,	// (0x0001a5cb) camera2_autofocus_pane_ParamLimits

0xbb5f,	// (0x0001a5cb) camera2_autofocus_pane

0x912c,	// (0x00017b98) bg_popup_sub_pane_cp06

0xc02b,	// (0x0001aa97) popup_image_focus_window_g1

0xc033,	// (0x0001aa9f) popup_image_focus_window_g2

0xc03b,	// (0x0001aaa7) popup_image_focus_window_g3

0xc043,	// (0x0001aaaf) popup_image_focus_window_g4

0x0003,

0xf658,	// (0x0001e0c4) popup_image_focus_window_g

0xc04b,	// (0x0001aab7) popup_image_focus_window_t1

0xc059,	// (0x0001aac5) popup_image_focus_window_t2

0xc069,	// (0x0001aad5) popup_image_focus_window_t3

0x0002,

0xf661,	// (0x0001e0cd) popup_image_focus_window_t

0x9892,	// (0x000182fe) camera2_autofocus_pane_g1

0x919b,	// (0x00017c07) bg_tb_trans_pane_cp01

0xc077,	// (0x0001aae3) popup_image_details_window_g1

0xc08a,	// (0x0001aaf6) popup_image_details_window_g2

0x0002,

0xf673,	// (0x0001e0df) popup_image_details_window_g

0xc0b3,	// (0x0001ab1f) popup_image_details_window_t1

0xc0c5,	// (0x0001ab31) popup_image_details_window_t2

0xc0de,	// (0x0001ab4a) popup_image_details_window_t3

0xc0f2,	// (0x0001ab5e) popup_image_details_window_t4

0xc10d,	// (0x0001ab79) popup_image_details_window_t5

0x0004,

0xf67a,	// (0x0001e0e6) popup_image_details_window_t

0x98f8,	// (0x00018364) bg_calc_paper_pane_ParamLimits

0x912c,	// (0x00017b98) grid_highlight_pane_cp013

0x990c,	// (0x00018378) list_calc_pane_ParamLimits

0x991e,	// (0x0001838a) scroll_pane_cp024

0x9926,	// (0x00018392) bg_calc_display_pane_ParamLimits

0x0a22,	// (0x0000f48e) calc_display_pane_t1_ParamLimits

0x0a34,	// (0x0000f4a0) calc_display_pane_t2_ParamLimits

0x9932,	// (0x0001839e) calc_display_pane_t3_ParamLimits

0xf0cc,	// (0x0001db38) calc_display_pane_t_ParamLimits

0x0aee,	// (0x0000f55a) cell_calc_pane_g2

0x0001,

0xf0e9,	// (0x0001db55) cell_calc_pane_g

0x0af7,	// (0x0000f563) cell_calc_pane_t1

0x999f,	// (0x0001840b) grid_highlight_pane_cp02_ParamLimits

0x99b5,	// (0x00018421) toolbar_button_pane_cp01_ParamLimits

0x99b5,	// (0x00018421) toolbar_button_pane_cp01

0xa972,	// (0x000193de) temp_image_control_pane_ParamLimits

0xa972,	// (0x000193de) temp_image_control_pane

0x919b,	// (0x00017c07) main_mp3_pane

0xc127,	// (0x0001ab93) temp_image_control_pane_g1_ParamLimits

0xc127,	// (0x0001ab93) temp_image_control_pane_g1

0xc135,	// (0x0001aba1) temp_image_control_pane_g2_ParamLimits

0xc135,	// (0x0001aba1) temp_image_control_pane_g2

0xc147,	// (0x0001abb3) temp_image_control_pane_g3_ParamLimits

0xc147,	// (0x0001abb3) temp_image_control_pane_g3

0x3717,	// (0x00012183) temp_image_control_pane_g4_ParamLimits

0x3717,	// (0x00012183) temp_image_control_pane_g4

0x0003,

0xf685,	// (0x0001e0f1) temp_image_control_pane_g_ParamLimits

0xf685,	// (0x0001e0f1) temp_image_control_pane_g

0xc127,	// (0x0001ab93) main_mp3_pane_g1

0x372a,	// (0x00012196) main_mp3_pane_g2

0x0007,

0xf68e,	// (0x0001e0fa) main_mp3_pane_g

0xc17c,	// (0x0001abe8) main_mp3_pane_t1

0x98a0,	// (0x0001830c) main_camera_pane_g8_ParamLimits

0x98a0,	// (0x0001830c) main_camera_pane_g8

0x1299,	// (0x0000fd05) main_video_pane_g7_ParamLimits

0x1299,	// (0x0000fd05) main_video_pane_g7

0xa71a,	// (0x00019186) main_camera2_pane_t7_ParamLimits

0xa71a,	// (0x00019186) main_camera2_pane_t7

0x9ca3,	// (0x0001870f) scroll_pane_cp025_ParamLimits

0x9ca3,	// (0x0001870f) scroll_pane_cp025

0x9cb7,	// (0x00018723) scroll_pane_cp026_ParamLimits

0x9cb7,	// (0x00018723) scroll_pane_cp026

0x9cc6,	// (0x00018732) wml_content_pane_ParamLimits

0x912c,	// (0x00017b98) main_touch_calib_pane

0x37fe,	// (0x0001226a) main_touch_calib_pane_g1

0x3810,	// (0x0001227c) main_touch_calib_pane_g2

0x3822,	// (0x0001228e) main_touch_calib_pane_g3

0x3834,	// (0x000122a0) main_touch_calib_pane_g4

0x0003,

0xf6ac,	// (0x0001e118) main_touch_calib_pane_g

0x3846,	// (0x000122b2) main_touch_calib_pane_t1

0x3860,	// (0x000122cc) main_touch_calib_pane_t2

0x0004,

0xf6b5,	// (0x0001e121) main_touch_calib_pane_t

0xa4ca,	// (0x00018f36) mup_progress_pane_cp02

0xa4ff,	// (0x00018f6b) navi_pane_g1

0xa5ba,	// (0x00019026) navi_pane_mp_t3

0x919b,	// (0x00017c07) main_mp3_pane_ParamLimits

0x33e9,	// (0x00011e55) navi_pane_ParamLimits

0xc127,	// (0x0001ab93) main_mp3_pane_g1_ParamLimits

0x372a,	// (0x00012196) main_mp3_pane_g2_ParamLimits

0x3738,	// (0x000121a4) main_mp3_pane_g3_ParamLimits

0x3738,	// (0x000121a4) main_mp3_pane_g3

0x3746,	// (0x000121b2) main_mp3_pane_g4_ParamLimits

0x3746,	// (0x000121b2) main_mp3_pane_g4

0x9892,	// (0x000182fe) main_mp3_pane_g5_ParamLimits

0x9892,	// (0x000182fe) main_mp3_pane_g5

0xc157,	// (0x0001abc3) main_mp3_pane_g6_ParamLimits

0xc157,	// (0x0001abc3) main_mp3_pane_g6

0xc164,	// (0x0001abd0) main_mp3_pane_g7_ParamLimits

0xc164,	// (0x0001abd0) main_mp3_pane_g7

0xc170,	// (0x0001abdc) main_mp3_pane_g8_ParamLimits

0xc170,	// (0x0001abdc) main_mp3_pane_g8

0xf68e,	// (0x0001e0fa) main_mp3_pane_g_ParamLimits

0x3752,	// (0x000121be) main_mp3_pane_t2

0x3760,	// (0x000121cc) main_mp3_pane_t3

0xc18a,	// (0x0001abf6) main_mp3_pane_t4

0xc198,	// (0x0001ac04) main_mp3_pane_t5

0x0005,

0xf69f,	// (0x0001e10b) main_mp3_pane_t

0xc1a6,	// (0x0001ac12) mup_progress_pane_cp01

0x914a,	// (0x00017bb6) aid_zoom_text_secondary2

0xbf7c,	// (0x0001a9e8) list_cale_ev2_pane

0xbf84,	// (0x0001a9f0) scroll_pane_cp023_ParamLimits

0x38b6,	// (0x00012322) field_cale_ev2_pane_ParamLimits

0x38b6,	// (0x00012322) field_cale_ev2_pane

0xc1ae,	// (0x0001ac1a) field_cale_ev2_pane_g1_ParamLimits

0xc1ae,	// (0x0001ac1a) field_cale_ev2_pane_g1

0xc1ba,	// (0x0001ac26) field_cale_ev2_pane_g2_ParamLimits

0xc1ba,	// (0x0001ac26) field_cale_ev2_pane_g2

0xc1d2,	// (0x0001ac3e) field_cale_ev2_pane_g3_ParamLimits

0xc1d2,	// (0x0001ac3e) field_cale_ev2_pane_g3

0x0003,

0xf6c0,	// (0x0001e12c) field_cale_ev2_pane_g_ParamLimits

0xf6c0,	// (0x0001e12c) field_cale_ev2_pane_g

0xc1f6,	// (0x0001ac62) field_cale_ev2_pane_t1_ParamLimits

0xc1f6,	// (0x0001ac62) field_cale_ev2_pane_t1

0xc20d,	// (0x0001ac79) field_cale_ev2_pane_t2_ParamLimits

0xc20d,	// (0x0001ac79) field_cale_ev2_pane_t2

0x0001,

0xf6c9,	// (0x0001e135) field_cale_ev2_pane_t_ParamLimits

0xf6c9,	// (0x0001e135) field_cale_ev2_pane_t

0x28d8,	// (0x00011344) main_postcard_pane_g5_ParamLimits

0x28d8,	// (0x00011344) main_postcard_pane_g5

0x28ee,	// (0x0001135a) main_postcard_pane_g6_ParamLimits

0x28ee,	// (0x0001135a) main_postcard_pane_g6

0x919b,	// (0x00017c07) camera2_autofocus_pane_cp_ParamLimits

0x919b,	// (0x00017c07) camera2_autofocus_pane_cp

0x919b,	// (0x00017c07) main_mup3_pane

0x391b,	// (0x00012387) main_mup3_pane_g1_ParamLimits

0x391b,	// (0x00012387) main_mup3_pane_g1

0x393d,	// (0x000123a9) main_mup3_pane_g2_ParamLimits

0x393d,	// (0x000123a9) main_mup3_pane_g2

0x39bd,	// (0x00012429) main_mup3_pane_g3_ParamLimits

0x39bd,	// (0x00012429) main_mup3_pane_g3

0x3a03,	// (0x0001246f) main_mup3_pane_g4_ParamLimits

0x3a03,	// (0x0001246f) main_mup3_pane_g4

0x3a49,	// (0x000124b5) main_mup3_pane_g5_ParamLimits

0x3a49,	// (0x000124b5) main_mup3_pane_g5

0x3a8f,	// (0x000124fb) main_mup3_pane_g6_ParamLimits

0x3a8f,	// (0x000124fb) main_mup3_pane_g6

0x98a0,	// (0x0001830c) main_mup3_pane_g7_ParamLimits

0x98a0,	// (0x0001830c) main_mup3_pane_g7

0x0007,

0xf6d9,	// (0x0001e145) main_mup3_pane_g_ParamLimits

0xf6d9,	// (0x0001e145) main_mup3_pane_g

0x3b0d,	// (0x00012579) main_mup3_pane_t1_ParamLimits

0x3b0d,	// (0x00012579) main_mup3_pane_t1

0x3b81,	// (0x000125ed) main_mup3_pane_t2_ParamLimits

0x3b81,	// (0x000125ed) main_mup3_pane_t2

0x3c55,	// (0x000126c1) main_mup3_pane_t4_ParamLimits

0x3c55,	// (0x000126c1) main_mup3_pane_t4

0x3cab,	// (0x00012717) main_mup3_pane_t5_ParamLimits

0x3cab,	// (0x00012717) main_mup3_pane_t5

0x3d67,	// (0x000127d3) main_mup3_pane_t6_ParamLimits

0x3d67,	// (0x000127d3) main_mup3_pane_t6

0x0005,

0xf6ea,	// (0x0001e156) main_mup3_pane_t_ParamLimits

0xf6ea,	// (0x0001e156) main_mup3_pane_t

0x3e1f,	// (0x0001288b) mup3_progress_pane_ParamLimits

0x3e1f,	// (0x0001288b) mup3_progress_pane

0x3eab,	// (0x00012917) popup_mup3_control_window_ParamLimits

0x3eab,	// (0x00012917) popup_mup3_control_window

0xc222,	// (0x0001ac8e) popup_mup3_text_window

0x3edd,	// (0x00012949) mup3_progress_pane_t1

0x3efc,	// (0x00012968) mup3_progress_pane_t2

0xc22a,	// (0x0001ac96) mup3_progress_pane_t3

0x0002,

0xf6f7,	// (0x0001e163) mup3_progress_pane_t

0xc247,	// (0x0001acb3) mup_progress_pane_cp03

0x912c,	// (0x00017b98) bg_tb_trans_pane_cp04

0x3f1b,	// (0x00012987) mup3_volume_pane

0x3f23,	// (0x0001298f) popup_mup3_control_window_g1

0x3f2c,	// (0x00012998) mup3_volume_pane_g1

0x3f35,	// (0x000129a1) mup3_volume_pane_g2

0x3f3e,	// (0x000129aa) mup3_volume_pane_g3

0x0002,

0xf6fe,	// (0x0001e16a) mup3_volume_pane_g

0x912c,	// (0x00017b98) bg_tb_trans_pane_cp03

0xc257,	// (0x0001acc3) popup_mup3_text_window_g1

0xc25f,	// (0x0001accb) popup_mup3_text_window_t1

0x9980,	// (0x000183ec) list_calc_item_pane_g1_ParamLimits

0xbc76,	// (0x0001a6e2) mup_volume_pane_cp_g1

0x387a,	// (0x000122e6) main_touch_calib_pane_t3

0x388e,	// (0x000122fa) main_touch_calib_pane_t4

0x38a2,	// (0x0001230e) main_touch_calib_pane_t5

0x9136,	// (0x00017ba2) aid_cell_size_toolbar2

0x913e,	// (0x00017baa) aid_popup3_width_pane

0x914a,	// (0x00017bb6) aid_zoom_text_msg_primary

0x1174,	// (0x0000fbe0) vorec_t7

0x9944,	// (0x000183b0) bg_calc_paper_pane_g1_ParamLimits

0x9950,	// (0x000183bc) bg_calc_paper_pane_g2_ParamLimits

0x995c,	// (0x000183c8) bg_calc_paper_pane_g3_ParamLimits

0x9968,	// (0x000183d4) bg_calc_paper_pane_g4_ParamLimits

0x9974,	// (0x000183e0) bg_calc_paper_pane_g5_ParamLimits

0x0a7b,	// (0x0000f4e7) bg_calc_paper_pane_g6_ParamLimits

0x0a8a,	// (0x0000f4f6) bg_calc_paper_pane_g7_ParamLimits

0x0a99,	// (0x0000f505) bg_calc_paper_pane_g8_ParamLimits

0xf0d3,	// (0x0001db3f) bg_calc_paper_pane_g_ParamLimits

0x0aac,	// (0x0000f518) calc_bg_paper_pane_g9_ParamLimits

0x919b,	// (0x00017c07) image_qvga_pane_ParamLimits

0x919b,	// (0x00017c07) image_qvga_pane

0x9817,	// (0x00018283) bg_popup_sub_pane_cp04_ParamLimits

0xa8a9,	// (0x00019315) popup_mup_playback_window_g1_ParamLimits

0xa8b5,	// (0x00019321) popup_mup_playback_window_t1_ParamLimits

0xa8ca,	// (0x00019336) popup_mup_playback_window_t2_ParamLimits

0xf431,	// (0x0001de9d) popup_mup_playback_window_t_ParamLimits

0x98a0,	// (0x0001830c) main_mup2_pane_g3_ParamLimits

0x98a0,	// (0x0001830c) main_mup2_pane_g3

0x14a0,	// (0x0000ff0c) popup_toolbar_window_cp04

0xacbf,	// (0x0001972b) popup_call2_audio_second_window_g3_ParamLimits

0xacbf,	// (0x0001972b) popup_call2_audio_second_window_g3

0xb0d7,	// (0x00019b43) popup_call2_audio_first_window_g4_ParamLimits

0xb0d7,	// (0x00019b43) popup_call2_audio_first_window_g4

0xb6fe,	// (0x0001a16a) popup_call2_audio_in_window_g4_ParamLimits

0xb6fe,	// (0x0001a16a) popup_call2_audio_in_window_g4

0x2a06,	// (0x00011472) aid_area_sk_bg_cut_ParamLimits

0x2a06,	// (0x00011472) aid_area_sk_bg_cut

0xa8df,	// (0x0001934b) aid_area_sk_bg_cut_2_ParamLimits

0xa8df,	// (0x0001934b) aid_area_sk_bg_cut_2

0x912c,	// (0x00017b98) aid_placing_details_win

0x912c,	// (0x00017b98) aid_placing_details_win_2

0x9892,	// (0x000182fe) camera2_autofocus_pane_g1_ParamLimits

0x07ac,	// (0x0000f218) popup_fixed_preview_cale_window_ParamLimits

0x07ac,	// (0x0000f218) popup_fixed_preview_cale_window

0xa641,	// (0x000190ad) navi_slider_pane_g3

0xa64a,	// (0x000190b6) navi_slider_pane_g4

0xa653,	// (0x000190bf) navi_slider_pane_g5

0xa641,	// (0x000190ad) navi_slider_pane_g6

0xa65c,	// (0x000190c8) navi_slider_pane_g7

0xa79e,	// (0x0001920a) mup_scale_pane_g3

0xa7a7,	// (0x00019213) mup_scale_pane_g4

0xa7b0,	// (0x0001921c) mup_scale_pane_g5

0x26a7,	// (0x00011113) mup_scale_pane_g6

0x26b0,	// (0x0001111c) mup_scale_pane_g7

0x9b9b,	// (0x00018607) cams2_slider_pane_g3

0x9b9b,	// (0x00018607) cams2_slider_pane_g4

0x9b9b,	// (0x00018607) cams2_slider_pane_g5

0x9b9b,	// (0x00018607) cams2_slider_pane_g6

0x9b9b,	// (0x00018607) cams2_slider_pane_g7

0x9b9b,	// (0x00018607) camera2_autofocus_pane_cp_g1

0xba0e,	// (0x0001a47a) bg_popup_preview_window_pane_cp02_ParamLimits

0xba0e,	// (0x0001a47a) bg_popup_preview_window_pane_cp02

0xc26d,	// (0x0001acd9) list_fp_cale_pane_ParamLimits

0xc26d,	// (0x0001acd9) list_fp_cale_pane

0xc279,	// (0x0001ace5) popup_fixed_preview_cale_window_t1_ParamLimits

0xc279,	// (0x0001ace5) popup_fixed_preview_cale_window_t1

0x3f47,	// (0x000129b3) popup_fixed_preview_cale_window_t2_ParamLimits

0x3f47,	// (0x000129b3) popup_fixed_preview_cale_window_t2

0x3f5c,	// (0x000129c8) popup_fixed_preview_cale_window_t3_ParamLimits

0x3f5c,	// (0x000129c8) popup_fixed_preview_cale_window_t3

0x0002,

0xf705,	// (0x0001e171) popup_fixed_preview_cale_window_t_ParamLimits

0xf705,	// (0x0001e171) popup_fixed_preview_cale_window_t

0x3f71,	// (0x000129dd) list_single_fp_cale_pane_ParamLimits

0x3f71,	// (0x000129dd) list_single_fp_cale_pane

0xc297,	// (0x0001ad03) list_single_fp_cale_pane_g1_ParamLimits

0xc297,	// (0x0001ad03) list_single_fp_cale_pane_g1

0xc2a3,	// (0x0001ad0f) list_single_fp_cale_pane_g2_ParamLimits

0xc2a3,	// (0x0001ad0f) list_single_fp_cale_pane_g2

0x0002,

0xf70c,	// (0x0001e178) list_single_fp_cale_pane_g_ParamLimits

0xf70c,	// (0x0001e178) list_single_fp_cale_pane_g

0xc2bc,	// (0x0001ad28) list_single_fp_cale_pane_t1_ParamLimits

0xc2bc,	// (0x0001ad28) list_single_fp_cale_pane_t1

0xc2ce,	// (0x0001ad3a) list_single_fp_cale_pane_t2_ParamLimits

0xc2ce,	// (0x0001ad3a) list_single_fp_cale_pane_t2

0x0001,

0xf713,	// (0x0001e17f) list_single_fp_cale_pane_t_ParamLimits

0xf713,	// (0x0001e17f) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x912c,	// (0x00017b98) main_dialer_pane

0x912c,	// (0x00017b98) aid_cell_size_keypad

0x912c,	// (0x00017b98) dialer_ne_pane

0x912c,	// (0x00017b98) grid_dialer_command_1_pane

0x912c,	// (0x00017b98) grid_dialer_command_2_pane

0x912c,	// (0x00017b98) grid_dialer_keypad_pane

0x3f87,	// (0x000129f3) bg_popup_call_pane_cp06_ParamLimits

0x3f87,	// (0x000129f3) bg_popup_call_pane_cp06

0x3f87,	// (0x000129f3) dialer_ne_clear_pane_ParamLimits

0x3f87,	// (0x000129f3) dialer_ne_clear_pane

0x9b9b,	// (0x00018607) dialer_ne_pane_g1

0xa71a,	// (0x00019186) dialer_ne_pane_t1_ParamLimits

0xa71a,	// (0x00019186) dialer_ne_pane_t1

0x3f95,	// (0x00012a01) dialer_ne_pane_t2_ParamLimits

0x3f95,	// (0x00012a01) dialer_ne_pane_t2

0x3fbd,	// (0x00012a29) dialer_ne_pane_t3_ParamLimits

0x3fbd,	// (0x00012a29) dialer_ne_pane_t3

0x0002,

0xf718,	// (0x0001e184) dialer_ne_pane_t_ParamLimits

0xf718,	// (0x0001e184) dialer_ne_pane_t

0x3fbd,	// (0x00012a29) dialer_ne_pane_t3_copy1_ParamLimits

0x3fbd,	// (0x00012a29) dialer_ne_pane_t3_copy1

0xc301,	// (0x0001ad6d) cell_dialer_keypad_pane_ParamLimits

0xc301,	// (0x0001ad6d) cell_dialer_keypad_pane

0x919b,	// (0x00017c07) cell_dialer_command_1_pane_ParamLimits

0x919b,	// (0x00017c07) cell_dialer_command_1_pane

0xc318,	// (0x0001ad84) cell_dialer_command_2_pane_ParamLimits

0xc318,	// (0x0001ad84) cell_dialer_command_2_pane

0x919b,	// (0x00017c07) bg_button_pane_cp02_ParamLimits

0x919b,	// (0x00017c07) bg_button_pane_cp02

0x9892,	// (0x000182fe) cell_dialer_keypad_pane_g1_ParamLimits

0x9892,	// (0x000182fe) cell_dialer_keypad_pane_g1

0x919b,	// (0x00017c07) bg_button_pane_cp03_ParamLimits

0x919b,	// (0x00017c07) bg_button_pane_cp03

0x9892,	// (0x000182fe) cell_dialer_command_1_pane_g1_ParamLimits

0x9892,	// (0x000182fe) cell_dialer_command_1_pane_g1

0x912c,	// (0x00017b98) bg_button_pane_cp04

0x9b9b,	// (0x00018607) cell_dialer_command_2_pane_g1

0x912c,	// (0x00017b98) bg_button_pane_cp06

0x9b9b,	// (0x00018607) dialer_ne_clear_pane_g1

0xa50b,	// (0x00018f77) navi_pane_g2

0xa539,	// (0x00018fa5) navi_pane_g3

0x0002,

0xf334,	// (0x0001dda0) navi_pane_g

0xa5c8,	// (0x00019034) navi_pane_mv_g2

0xa5ef,	// (0x0001905b) navi_pane_mv_g5

0x248a,	// (0x00010ef6) navi_pane_mv_t1

0x9926,	// (0x00018392) main_clock2_pane

0x919b,	// (0x00017c07) main_clock2_list_pane_ParamLimits

0x919b,	// (0x00017c07) main_clock2_list_pane

0x4053,	// (0x00012abf) main_clock2_pane_t1_ParamLimits

0x4053,	// (0x00012abf) main_clock2_pane_t1

0x408e,	// (0x00012afa) main_clock2_pane_t2_ParamLimits

0x408e,	// (0x00012afa) main_clock2_pane_t2

0x0004,

0xf724,	// (0x0001e190) main_clock2_pane_t_ParamLimits

0xf724,	// (0x0001e190) main_clock2_pane_t

0x412e,	// (0x00012b9a) popup_clock_analogue_window_cp03_ParamLimits

0x412e,	// (0x00012b9a) popup_clock_analogue_window_cp03

0x4153,	// (0x00012bbf) popup_clock_digital_window_cp02_ParamLimits

0x4153,	// (0x00012bbf) popup_clock_digital_window_cp02

0x41cc,	// (0x00012c38) main_clock2_list_single_pane_ParamLimits

0x41cc,	// (0x00012c38) main_clock2_list_single_pane

0x9b5b,	// (0x000185c7) list_highlight_pane_cp05

0xc35b,	// (0x0001adc7) main_clock2_list_single_pane_t1

0x14a0,	// (0x0000ff0c) popup_toolbar_window_cp04_ParamLimits

0x98a0,	// (0x0001830c) camera2_autofocus_pane_g2_ParamLimits

0x98a0,	// (0x0001830c) camera2_autofocus_pane_g2

0x98a0,	// (0x0001830c) camera2_autofocus_pane_g3_ParamLimits

0x98a0,	// (0x0001830c) camera2_autofocus_pane_g3

0x98a0,	// (0x0001830c) camera2_autofocus_pane_g4_ParamLimits

0x98a0,	// (0x0001830c) camera2_autofocus_pane_g4

0x98a0,	// (0x0001830c) camera2_autofocus_pane_g5_ParamLimits

0x98a0,	// (0x0001830c) camera2_autofocus_pane_g5

0x0004,

0xf668,	// (0x0001e0d4) camera2_autofocus_pane_g_ParamLimits

0xf668,	// (0x0001e0d4) camera2_autofocus_pane_g

0x38d7,	// (0x00012343) camera2_autofocus_pane_cp_g2

0x38df,	// (0x0001234b) camera2_autofocus_pane_cp_g3

0x38e7,	// (0x00012353) camera2_autofocus_pane_cp_g4

0x38ef,	// (0x0001235b) camera2_autofocus_pane_cp_g5

0x0004,

0xf6ce,	// (0x0001e13a) camera2_autofocus_pane_cp_g

0x912c,	// (0x00017b98) popup_dialer_spcha_window

0x912c,	// (0x00017b98) bg_popup_sub_pane_cp07

0x912c,	// (0x00017b98) list_spcha_pane

0xc369,	// (0x0001add5) list_single_spcha_pane_ParamLimits

0xc369,	// (0x0001add5) list_single_spcha_pane

0x912c,	// (0x00017b98) list_highlight_pane_cp06

0xa0fc,	// (0x00018b68) list_single_spcha_pane_t1

0xb4a8,	// (0x00019f14) popup_call2_audio_out_window_g4_ParamLimits

0xb4a8,	// (0x00019f14) popup_call2_audio_out_window_g4

0x912c,	// (0x00017b98) main_imed2_pane

0xba34,	// (0x0001a4a0) popup_imed_adjust2_window

0x3276,	// (0x00011ce2) popup_imed_trans_window_ParamLimits

0x3276,	// (0x00011ce2) popup_imed_trans_window

0xbd4b,	// (0x0001a7b7) popup_blid_sat_info2_window_t1

0xbd59,	// (0x0001a7c5) popup_blid_sat_info2_window_t2

0x000a,

0xf5fd,	// (0x0001e069) popup_blid_sat_info2_window_t

0x427d,	// (0x00012ce9) aid_size_cell_colour_35

0x429d,	// (0x00012d09) aid_size_cell_colour_112

0x42bd,	// (0x00012d29) aid_size_cell_effect

0xa72e,	// (0x0001919a) bg_tb_trans_pane_cp02

0xa022,	// (0x00018a8e) heading_imed_pane

0x42dd,	// (0x00012d49) listscroll_imed_pane

0xc37b,	// (0x0001ade7) heading_imed_pane_g1

0xc383,	// (0x0001adef) heading_imed_pane_t1

0xc391,	// (0x0001adfd) grid_imed_colour_35_pane_ParamLimits

0xc391,	// (0x0001adfd) grid_imed_colour_35_pane

0x42e9,	// (0x00012d55) grid_imed_effect_pane

0xc3a9,	// (0x0001ae15) list_imed_aspect_pane

0x42ff,	// (0x00012d6b) scroll_pane_cp027_ParamLimits

0x42ff,	// (0x00012d6b) scroll_pane_cp027

0x4310,	// (0x00012d7c) cell_imed_effect_pane_ParamLimits

0x4310,	// (0x00012d7c) cell_imed_effect_pane

0xc3b1,	// (0x0001ae1d) cell_imed_colour_pane_ParamLimits

0xc3b1,	// (0x0001ae1d) cell_imed_colour_pane

0xc3f3,	// (0x0001ae5f) cell_imed_colour_pane_g1_ParamLimits

0xc3f3,	// (0x0001ae5f) cell_imed_colour_pane_g1

0xc404,	// (0x0001ae70) hgihlgiht_grid_pane_cp016_ParamLimits

0xc404,	// (0x0001ae70) hgihlgiht_grid_pane_cp016

0x4337,	// (0x00012da3) cell_imed_effect_pane_g1

0x433f,	// (0x00012dab) grid_highlight_pane_cp017

0xc415,	// (0x0001ae81) list_imed_single_pane_ParamLimits

0xc415,	// (0x0001ae81) list_imed_single_pane

0x912c,	// (0x00017b98) list_highlight_pane_cp07

0xc42a,	// (0x0001ae96) list_imed_aspect_pane_comp1_t1

0xa72e,	// (0x0001919a) bg_tb_trans_pane_cp05

0xc44c,	// (0x0001aeb8) popup_imed_adjust2_window_g1

0xc473,	// (0x0001aedf) popup_imed_adjust2_window_t1

0xc48b,	// (0x0001aef7) slider_imed_adjust_pane

0xc49f,	// (0x0001af0b) slider_imed_adjust_pane_g1

0xc4af,	// (0x0001af1b) slider_imed_adjust_pane_g2

0xc4bf,	// (0x0001af2b) slider_imed_adjust_pane_g3

0xc4d0,	// (0x0001af3c) slider_imed_adjust_pane_g4

0x0003,

0xf741,	// (0x0001e1ad) slider_imed_adjust_pane_g

0x4348,	// (0x00012db4) aid_size_cell_clipart2

0x4354,	// (0x00012dc0) grid_imed_clipart_pane

0xc4e1,	// (0x0001af4d) scroll_pane_cp031

0x435e,	// (0x00012dca) cell_imed_clipart_pane_ParamLimits

0x435e,	// (0x00012dca) cell_imed_clipart_pane

0x4380,	// (0x00012dec) cell_imed_clipart_pane_g1

0x912c,	// (0x00017b98) grid_highlight_pane_cp014

0x402f,	// (0x00012a9b) main_clock2_pane_g1_ParamLimits

0x402f,	// (0x00012a9b) main_clock2_pane_g1

0x4173,	// (0x00012bdf) aid_call2_pane_cp10

0x4185,	// (0x00012bf1) aid_call_pane_cp10

0xa46a,	// (0x00018ed6) popup_clock_analogue_window_cp10_g1

0xa46a,	// (0x00018ed6) popup_clock_analogue_window_cp10_g2

0x4197,	// (0x00012c03) popup_clock_analogue_window_cp10_g3

0x4197,	// (0x00012c03) popup_clock_analogue_window_cp10_g4

0xa46a,	// (0x00018ed6) popup_clock_analogue_window_cp10_g5

0x0004,

0xf72f,	// (0x0001e19b) popup_clock_analogue_window_cp10_g

0x41ad,	// (0x00012c19) popup_clock_analogue_window_cp10_t1

0x41de,	// (0x00012c4a) clock_digital_number_pane_cp10_ParamLimits

0x41de,	// (0x00012c4a) clock_digital_number_pane_cp10

0x41f6,	// (0x00012c62) clock_digital_number_pane_cp11_ParamLimits

0x41f6,	// (0x00012c62) clock_digital_number_pane_cp11

0x420e,	// (0x00012c7a) clock_digital_number_pane_cp12_ParamLimits

0x420e,	// (0x00012c7a) clock_digital_number_pane_cp12

0x4228,	// (0x00012c94) clock_digital_number_pane_cp13_ParamLimits

0x4228,	// (0x00012c94) clock_digital_number_pane_cp13

0x4242,	// (0x00012cae) clock_digital_separator_pane_cp10_ParamLimits

0x4242,	// (0x00012cae) clock_digital_separator_pane_cp10

0x425c,	// (0x00012cc8) popup_clock_digital_window_cp02_t1_ParamLimits

0x425c,	// (0x00012cc8) popup_clock_digital_window_cp02_t1

0x980f,	// (0x0001827b) clock_digital_number_pane_cp10_g1

0x980f,	// (0x0001827b) clock_digital_number_pane_cp10_g2

0x0001,

0xf74a,	// (0x0001e1b6) clock_digital_number_pane_cp10_g

0x980f,	// (0x0001827b) clock_digital_separator_pane_cp10_g1

0x980f,	// (0x0001827b) clock_digital_separator_pane_g2_cp10

0xa5f7,	// (0x00019063) navi_pane_vded_g4

0xa600,	// (0x0001906c) navi_pane_vded_g5

0xa609,	// (0x00019075) navi_pane_vded_t1

0x912c,	// (0x00017b98) main_vded_pane

0x4389,	// (0x00012df5) main_vded_pane_g1

0x4393,	// (0x00012dff) main_vded_pane_g2

0x439d,	// (0x00012e09) main_vded_pane_g3

0x0002,

0xf74f,	// (0x0001e1bb) main_vded_pane_g

0x43a7,	// (0x00012e13) main_vded_pane_t1

0x43b5,	// (0x00012e21) main_vded_pane_t2

0x0001,

0xf756,	// (0x0001e1c2) main_vded_pane_t

0x43c3,	// (0x00012e2f) vded_slider_pane

0x43cb,	// (0x00012e37) vded_video_pane

0xc4e9,	// (0x0001af55) vded_video_pane_g1

0x43d3,	// (0x00012e3f) vded_video_pane_g2

0x9b9b,	// (0x00018607) vded_video_pane_g3

0x0002,

0xf75b,	// (0x0001e1c7) vded_video_pane_g

0xc4f3,	// (0x0001af5f) vded_slider_pane_g1

0xbc76,	// (0x0001a6e2) vded_slider_pane_g2

0xc4fc,	// (0x0001af68) vded_slider_pane_g3

0xc505,	// (0x0001af71) vded_slider_pane_g4

0xc50e,	// (0x0001af7a) vded_slider_pane_g5

0x0004,

0xf762,	// (0x0001e1ce) vded_slider_pane_g

0x3e93,	// (0x000128ff) mup3_rocker_pane_ParamLimits

0x3e93,	// (0x000128ff) mup3_rocker_pane

0x43dc,	// (0x00012e48) mup3_control_keys_pane_g1

0x43e4,	// (0x00012e50) mup3_control_keys_pane_g2

0x43ec,	// (0x00012e58) mup3_control_keys_pane_g3

0x43f4,	// (0x00012e60) mup3_control_keys_pane_g4

0x0003,

0xf76d,	// (0x0001e1d9) mup3_control_keys_pane_g

0x07e3,	// (0x0000f24f) popup_toolbar2_fixed_window_cp01_ParamLimits

0x07e3,	// (0x0000f24f) popup_toolbar2_fixed_window_cp01

0x3ec7,	// (0x00012933) popup_toolbar2_fixed_window_cp02_ParamLimits

0x3ec7,	// (0x00012933) popup_toolbar2_fixed_window_cp02

0xae31,	// (0x0001989d) popup_call2_audio_second_window_t4_ParamLimits

0xae31,	// (0x0001989d) popup_call2_audio_second_window_t4

0xb36d,	// (0x00019dd9) popup_call2_audio_first_window_t6_ParamLimits

0xb36d,	// (0x00019dd9) popup_call2_audio_first_window_t6

0xb5ab,	// (0x0001a017) popup_call2_audio_out_window_t6_ParamLimits

0xb5ab,	// (0x0001a017) popup_call2_audio_out_window_t6

0x912c,	// (0x00017b98) main_vitu_pane

0x919b,	// (0x00017c07) aid_size_cell_itu_ParamLimits

0x919b,	// (0x00017c07) aid_size_cell_itu

0x919b,	// (0x00017c07) bg_popup_window_pane_cp08_ParamLimits

0x919b,	// (0x00017c07) bg_popup_window_pane_cp08

0x919b,	// (0x00017c07) field_vitu_entry_pane_ParamLimits

0x919b,	// (0x00017c07) field_vitu_entry_pane

0x919b,	// (0x00017c07) grid_vitu_function_pane_ParamLimits

0x919b,	// (0x00017c07) grid_vitu_function_pane

0x919b,	// (0x00017c07) grid_vitu_itu_pane_ParamLimits

0x919b,	// (0x00017c07) grid_vitu_itu_pane

0x919b,	// (0x00017c07) cell_vitu_itu_pane_ParamLimits

0x919b,	// (0x00017c07) cell_vitu_itu_pane

0x919b,	// (0x00017c07) cell_vitu_function_pane_ParamLimits

0x919b,	// (0x00017c07) cell_vitu_function_pane

0x919b,	// (0x00017c07) bg_popup_sub_pane_cp08_ParamLimits

0x919b,	// (0x00017c07) bg_popup_sub_pane_cp08

0x9b6d,	// (0x000185d9) field_vitu_entry_pane_t1_ParamLimits

0x9b6d,	// (0x000185d9) field_vitu_entry_pane_t1

0xc517,	// (0x0001af83) field_vitu_entry_pane_t2_ParamLimits

0xc517,	// (0x0001af83) field_vitu_entry_pane_t2

0x0001,

0xf776,	// (0x0001e1e2) field_vitu_entry_pane_t_ParamLimits

0xf776,	// (0x0001e1e2) field_vitu_entry_pane_t

0xbb9d,	// (0x0001a609) bg_button_pane_cp05_ParamLimits

0xbb9d,	// (0x0001a609) bg_button_pane_cp05

0xc534,	// (0x0001afa0) cell_vitu_itu_pane_g1

0xa706,	// (0x00019172) cell_vitu_itu_pane_t1_ParamLimits

0xa706,	// (0x00019172) cell_vitu_itu_pane_t1

0xa706,	// (0x00019172) cell_vitu_itu_pane_t2_ParamLimits

0xa706,	// (0x00019172) cell_vitu_itu_pane_t2

0x0002,

0xf77b,	// (0x0001e1e7) cell_vitu_itu_pane_t_ParamLimits

0xf77b,	// (0x0001e1e7) cell_vitu_itu_pane_t

0x912c,	// (0x00017b98) bg_button_pane_cp07

0x9b9b,	// (0x00018607) cell_vitu_function_pane_g1

0x98d0,	// (0x0001833c) main_calc_pane_g1

0x060b,	// (0x0000f077) aid_visual_content_pane

0x912c,	// (0x00017b98) main_vradio_pane

0x9892,	// (0x000182fe) main_vradio_pane_g1_ParamLimits

0x9892,	// (0x000182fe) main_vradio_pane_g1

0x98a0,	// (0x0001830c) main_vradio_pane_g2_ParamLimits

0x98a0,	// (0x0001830c) main_vradio_pane_g2

0x0001,

0xf782,	// (0x0001e1ee) main_vradio_pane_g_ParamLimits

0xf782,	// (0x0001e1ee) main_vradio_pane_g

0x9b6d,	// (0x000185d9) main_vradio_pane_t1_ParamLimits

0x9b6d,	// (0x000185d9) main_vradio_pane_t1

0x9b6d,	// (0x000185d9) main_vradio_pane_t2_ParamLimits

0x9b6d,	// (0x000185d9) main_vradio_pane_t2

0xa71a,	// (0x00019186) main_vradio_pane_t3_ParamLimits

0xa71a,	// (0x00019186) main_vradio_pane_t3

0x0002,

0xf787,	// (0x0001e1f3) main_vradio_pane_t_ParamLimits

0xf787,	// (0x0001e1f3) main_vradio_pane_t

0x919b,	// (0x00017c07) vradio_rocker_control_pane_ParamLimits

0x919b,	// (0x00017c07) vradio_rocker_control_pane

0x919b,	// (0x00017c07) vradio_station_info_pane_ParamLimits

0x919b,	// (0x00017c07) vradio_station_info_pane

0x919b,	// (0x00017c07) vradio_frequency_info_pane_ParamLimits

0x919b,	// (0x00017c07) vradio_frequency_info_pane

0x9b9b,	// (0x00018607) vradio_station_info_pane_g1

0xa706,	// (0x00019172) vradio_station_info_pane_t1_ParamLimits

0xa706,	// (0x00019172) vradio_station_info_pane_t1

0xa71a,	// (0x00019186) vradio_station_info_pane_t2_ParamLimits

0xa71a,	// (0x00019186) vradio_station_info_pane_t2

0x0001,

0xf78e,	// (0x0001e1fa) vradio_station_info_pane_t_ParamLimits

0xf78e,	// (0x0001e1fa) vradio_station_info_pane_t

0x912c,	// (0x00017b98) vradio_tuning_pane

0x4404,	// (0x00012e70) vradio_rocker_control_pane_g1

0xc550,	// (0x0001afbc) vradio_rocker_control_pane_g2

0x440e,	// (0x00012e7a) vradio_rocker_control_pane_g3

0x4418,	// (0x00012e84) vradio_rocker_control_pane_g4

0x4422,	// (0x00012e8e) vradio_rocker_control_pane_g5

0x0004,

0xf793,	// (0x0001e1ff) vradio_rocker_control_pane_g

0x9b9b,	// (0x00018607) vradio_frequency_info_pane_g1

0x9b6d,	// (0x000185d9) vradio_frequency_info_pane_t1_ParamLimits

0x9b6d,	// (0x000185d9) vradio_frequency_info_pane_t1

0x442c,	// (0x00012e98) vradio_tuning_pane_g1

0x4437,	// (0x00012ea3) vradio_tuning_pane_t1

0x915a,	// (0x00017bc6) area_side_right_pane_ParamLimits

0x915a,	// (0x00017bc6) area_side_right_pane

0xb9d5,	// (0x0001a441) status_small_pane_g1

0xb9dd,	// (0x0001a449) status_small_pane_g2

0xb9e6,	// (0x0001a452) status_small_pane_g3

0xb9ef,	// (0x0001a45b) status_small_pane_g4

0x0003,

0xf55f,	// (0x0001dfcb) status_small_pane_g

0xb9f8,	// (0x0001a464) status_small_pane_t1

0x912c,	// (0x00017b98) main_video3_pane

0xc558,	// (0x0001afc4) cams_zoom_vslider_pane

0xc560,	// (0x0001afcc) image3_wide_pane_ParamLimits

0xc560,	// (0x0001afcc) image3_wide_pane

0xc57a,	// (0x0001afe6) image3_wide_small_pane

0xc586,	// (0x0001aff2) main_video3_pane_g1_ParamLimits

0xc586,	// (0x0001aff2) main_video3_pane_g1

0xc5a2,	// (0x0001b00e) main_video3_pane_g2_ParamLimits

0xc5a2,	// (0x0001b00e) main_video3_pane_g2

0x0001,

0xf79e,	// (0x0001e20a) main_video3_pane_g_ParamLimits

0xf79e,	// (0x0001e20a) main_video3_pane_g

0xc5be,	// (0x0001b02a) main_video3_pane_t1_ParamLimits

0xc5be,	// (0x0001b02a) main_video3_pane_t1

0xc5e9,	// (0x0001b055) main_video3_pane_t2_ParamLimits

0xc5e9,	// (0x0001b055) main_video3_pane_t2

0xc614,	// (0x0001b080) main_video3_pane_t3_ParamLimits

0xc614,	// (0x0001b080) main_video3_pane_t3

0x0002,

0xf7a3,	// (0x0001e20f) main_video3_pane_t_ParamLimits

0xf7a3,	// (0x0001e20f) main_video3_pane_t

0xc641,	// (0x0001b0ad) cams_zoom_vslider_pane_g1

0xc64a,	// (0x0001b0b6) cams_zoom_vslider_pane_g2

0x0001,

0xf7aa,	// (0x0001e216) cams_zoom_vslider_pane_g

0xc652,	// (0x0001b0be) small_slider_vertical_pane

0x9b9b,	// (0x00018607) small_slider_vertical_pane_g1

0x9b9b,	// (0x00018607) small_slider_vertical_pane_g2

0xc65a,	// (0x0001b0c6) small_slider_vertical_pane_g3

0x0002,

0xf7af,	// (0x0001e21b) small_slider_vertical_pane_g

0x912c,	// (0x00017b98) main_hwr_training_pane

0xc663,	// (0x0001b0cf) hwr_training_instruct_pane_ParamLimits

0xc663,	// (0x0001b0cf) hwr_training_instruct_pane

0x4446,	// (0x00012eb2) hwr_training_navi_pane_ParamLimits

0x4446,	// (0x00012eb2) hwr_training_navi_pane

0x4465,	// (0x00012ed1) hwr_training_write_pane_ParamLimits

0x4465,	// (0x00012ed1) hwr_training_write_pane

0x912c,	// (0x00017b98) bg_frame_shadow_pane

0xc69a,	// (0x0001b106) hwr_training_write_pane_g1

0xc6a2,	// (0x0001b10e) hwr_training_write_pane_g2

0xc6aa,	// (0x0001b116) hwr_training_write_pane_g3

0xc6b2,	// (0x0001b11e) hwr_training_write_pane_g4

0xc6ba,	// (0x0001b126) hwr_training_write_pane_g5

0xc6c2,	// (0x0001b12e) hwr_training_write_pane_g6

0xc6ca,	// (0x0001b136) hwr_training_write_pane_g7

0x0006,

0xf7b6,	// (0x0001e222) hwr_training_write_pane_g

0xc6d2,	// (0x0001b13e) hwr_training_navi_pane_g1_ParamLimits

0xc6d2,	// (0x0001b13e) hwr_training_navi_pane_g1

0xc6e4,	// (0x0001b150) hwr_training_navi_pane_g2_ParamLimits

0xc6e4,	// (0x0001b150) hwr_training_navi_pane_g2

0xc6f6,	// (0x0001b162) hwr_training_navi_pane_g3_ParamLimits

0xc6f6,	// (0x0001b162) hwr_training_navi_pane_g3

0xc706,	// (0x0001b172) hwr_training_navi_pane_g4_ParamLimits

0xc706,	// (0x0001b172) hwr_training_navi_pane_g4

0x0004,

0xf7c5,	// (0x0001e231) hwr_training_navi_pane_g_ParamLimits

0xf7c5,	// (0x0001e231) hwr_training_navi_pane_g

0xc713,	// (0x0001b17f) hwr_training_navi_pane_t1

0x44af,	// (0x00012f1b) list_single_hwr_training_instruct_pane_ParamLimits

0x44af,	// (0x00012f1b) list_single_hwr_training_instruct_pane

0xc721,	// (0x0001b18d) list_single_hwr_training_instruct_pane_t1

0xbe4c,	// (0x0001a8b8) bg_frame_shadow_pane_g1

0xc730,	// (0x0001b19c) bg_frame_shadow_pane_g2

0xc738,	// (0x0001b1a4) bg_frame_shadow_pane_g3

0xc740,	// (0x0001b1ac) bg_frame_shadow_pane_g4

0xc748,	// (0x0001b1b4) bg_frame_shadow_pane_g5

0xc750,	// (0x0001b1bc) bg_frame_shadow_pane_g6

0xc758,	// (0x0001b1c4) bg_frame_shadow_pane_g7

0x9a02,	// (0x0001846e) bg_frame_shadow_pane_g8

0x0007,

0xf7d0,	// (0x0001e23c) bg_frame_shadow_pane_g

0x912c,	// (0x00017b98) main_video_tele_dialer_pane

0x44c5,	// (0x00012f31) aid_size_cell_video_keypad_ParamLimits

0x44c5,	// (0x00012f31) aid_size_cell_video_keypad

0x44df,	// (0x00012f4b) grid_video_dialer_keypad_pane_ParamLimits

0x44df,	// (0x00012f4b) grid_video_dialer_keypad_pane

0x452d,	// (0x00012f99) video_down_pane_cp_ParamLimits

0x452d,	// (0x00012f99) video_down_pane_cp

0x455f,	// (0x00012fcb) cell_video_dialer_keypad_pane_ParamLimits

0x455f,	// (0x00012fcb) cell_video_dialer_keypad_pane

0xc760,	// (0x0001b1cc) bg_button_pane_cp08_ParamLimits

0xc760,	// (0x0001b1cc) bg_button_pane_cp08

0x4581,	// (0x00012fed) cell_video_dialer_keypad_pane_g1_ParamLimits

0x4581,	// (0x00012fed) cell_video_dialer_keypad_pane_g1

0x3e7d,	// (0x000128e9) mup3_rocker2_pane_ParamLimits

0x3e7d,	// (0x000128e9) mup3_rocker2_pane

0x9b9b,	// (0x00018607) mup3_rocker2_pane_g1

0x3165,	// (0x00011bd1) main_dialer2_pane

0x912c,	// (0x00017b98) main_mp4_pane

0xc78a,	// (0x0001b1f6) main_mp4_pane_g1_ParamLimits

0xc78a,	// (0x0001b1f6) main_mp4_pane_g1

0xc78a,	// (0x0001b1f6) main_mp4_pane_g2_ParamLimits

0xc78a,	// (0x0001b1f6) main_mp4_pane_g2

0x45bb,	// (0x00013027) main_mp4_pane_g3_ParamLimits

0x45bb,	// (0x00013027) main_mp4_pane_g3

0xc798,	// (0x0001b204) main_mp4_pane_g4_ParamLimits

0xc798,	// (0x0001b204) main_mp4_pane_g4

0xc7c6,	// (0x0001b232) main_mp4_pane_g5_ParamLimits

0xc7c6,	// (0x0001b232) main_mp4_pane_g5

0x0007,

0xf7f0,	// (0x0001e25c) main_mp4_pane_g_ParamLimits

0xf7f0,	// (0x0001e25c) main_mp4_pane_g

0xc83a,	// (0x0001b2a6) main_mp4_pane_t1_ParamLimits

0xc83a,	// (0x0001b2a6) main_mp4_pane_t1

0xc896,	// (0x0001b302) main_mp4_pane_t2_ParamLimits

0xc896,	// (0x0001b302) main_mp4_pane_t2

0xc8e8,	// (0x0001b354) main_mp4_pane_t3_ParamLimits

0xc8e8,	// (0x0001b354) main_mp4_pane_t3

0xc90e,	// (0x0001b37a) main_mp4_pane_t4_ParamLimits

0xc90e,	// (0x0001b37a) main_mp4_pane_t4

0x0003,

0xf801,	// (0x0001e26d) main_mp4_pane_t_ParamLimits

0xf801,	// (0x0001e26d) main_mp4_pane_t

0xc952,	// (0x0001b3be) mp4_progress_pane_ParamLimits

0xc952,	// (0x0001b3be) mp4_progress_pane

0xc99c,	// (0x0001b408) mp4_rocker_pane_ParamLimits

0xc99c,	// (0x0001b408) mp4_rocker_pane

0xc9c4,	// (0x0001b430) mp4_progress_pane_t1

0xc9dd,	// (0x0001b449) mp4_progress_pane_t2

0x0001,

0xf80a,	// (0x0001e276) mp4_progress_pane_t

0xc9f6,	// (0x0001b462) mup_progress_pane_cp04

0x9b9b,	// (0x00018607) mp4_rocker_pane_g1

0x45f7,	// (0x00013063) aid_cell_size_keypad2_ParamLimits

0x45f7,	// (0x00013063) aid_cell_size_keypad2

0x460d,	// (0x00013079) dialer2_ne_pane_ParamLimits

0x460d,	// (0x00013079) dialer2_ne_pane

0x4627,	// (0x00013093) grid_dialer2_keypad_pane_ParamLimits

0x4627,	// (0x00013093) grid_dialer2_keypad_pane

0xbb9d,	// (0x0001a609) bg_popup_call_pane_cp07_ParamLimits

0xbb9d,	// (0x0001a609) bg_popup_call_pane_cp07

0x4643,	// (0x000130af) dialer2_ne_pane_t1_ParamLimits

0x4643,	// (0x000130af) dialer2_ne_pane_t1

0x467f,	// (0x000130eb) cell_dialer2_keypad_pane_ParamLimits

0x467f,	// (0x000130eb) cell_dialer2_keypad_pane

0xca1b,	// (0x0001b487) bg_button_pane_pane_cp04_ParamLimits

0xca1b,	// (0x0001b487) bg_button_pane_pane_cp04

0x46a1,	// (0x0001310d) cell_dialer2_keypad_pane_g1_ParamLimits

0x46a1,	// (0x0001310d) cell_dialer2_keypad_pane_g1

0x1374,	// (0x0000fde0) aid_placing_vt_set_content_ParamLimits

0x1374,	// (0x0000fde0) aid_placing_vt_set_content

0x139c,	// (0x0000fe08) aid_placing_vt_set_title_ParamLimits

0x139c,	// (0x0000fe08) aid_placing_vt_set_title

0x912c,	// (0x00017b98) main_image3_pane

0x4767,	// (0x000131d3) area_side_right_pane_cp01_ParamLimits

0x4767,	// (0x000131d3) area_side_right_pane_cp01

0xc78a,	// (0x0001b1f6) main_image3_pane_g1_ParamLimits

0xc78a,	// (0x0001b1f6) main_image3_pane_g1

0x477e,	// (0x000131ea) main_image3_pane_g2_ParamLimits

0x477e,	// (0x000131ea) main_image3_pane_g2

0x47a6,	// (0x00013212) main_image3_pane_g3_ParamLimits

0x47a6,	// (0x00013212) main_image3_pane_g3

0x47d0,	// (0x0001323c) main_image3_pane_g4_ParamLimits

0x47d0,	// (0x0001323c) main_image3_pane_g4

0x0003,

0xf819,	// (0x0001e285) main_image3_pane_g_ParamLimits

0xf819,	// (0x0001e285) main_image3_pane_g

0x47fa,	// (0x00013266) main_image3_pane_t1_ParamLimits

0x47fa,	// (0x00013266) main_image3_pane_t1

0x4852,	// (0x000132be) main_image3_pane_t2_ParamLimits

0x4852,	// (0x000132be) main_image3_pane_t2

0x48a4,	// (0x00013310) main_image3_pane_t3_ParamLimits

0x48a4,	// (0x00013310) main_image3_pane_t3

0x0003,

0xf822,	// (0x0001e28e) main_image3_pane_t_ParamLimits

0xf822,	// (0x0001e28e) main_image3_pane_t

0x919b,	// (0x00017c07) grid_sctrl_middle_pane_cp01_ParamLimits

0x919b,	// (0x00017c07) grid_sctrl_middle_pane_cp01

0x492c,	// (0x00013398) cell_sctrl_middle_pane_cp01_ParamLimits

0x492c,	// (0x00013398) cell_sctrl_middle_pane_cp01

0x4949,	// (0x000133b5) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x4949,	// (0x000133b5) cell_sctrl_middle_pane_cp01_g1

0x912c,	// (0x00017b98) main_call4_pane

0x495f,	// (0x000133cb) aid_size_button_call4_ParamLimits

0x495f,	// (0x000133cb) aid_size_button_call4

0x4992,	// (0x000133fe) call4_windows_pane_ParamLimits

0x4992,	// (0x000133fe) call4_windows_pane

0x49b1,	// (0x0001341d) grid_call4_button_pane_ParamLimits

0x49b1,	// (0x0001341d) grid_call4_button_pane

0x49e4,	// (0x00013450) call4_windows_conf_pane

0x49f9,	// (0x00013465) popup_call4_audio_first_window_ParamLimits

0x49f9,	// (0x00013465) popup_call4_audio_first_window

0x4a49,	// (0x000134b5) popup_call4_audio_second_window_ParamLimits

0x4a49,	// (0x000134b5) popup_call4_audio_second_window

0x4a60,	// (0x000134cc) popup_call4_audio_wait_window_ParamLimits

0x4a60,	// (0x000134cc) popup_call4_audio_wait_window

0x4a6e,	// (0x000134da) cell_call4_button_pane_ParamLimits

0x4a6e,	// (0x000134da) cell_call4_button_pane

0x4a93,	// (0x000134ff) bg_button_pane_cp09_ParamLimits

0x4a93,	// (0x000134ff) bg_button_pane_cp09

0x4a9f,	// (0x0001350b) cell_call4_button_pane_g1_ParamLimits

0x4a9f,	// (0x0001350b) cell_call4_button_pane_g1

0x4ac5,	// (0x00013531) cell_call4_button_pane_t1_ParamLimits

0x4ac5,	// (0x00013531) cell_call4_button_pane_t1

0xca93,	// (0x0001b4ff) popup_call4_audio_conf_window_ParamLimits

0xca93,	// (0x0001b4ff) popup_call4_audio_conf_window

0x3edd,	// (0x00012949) mup3_progress_pane_t1_ParamLimits

0x3efc,	// (0x00012968) mup3_progress_pane_t2_ParamLimits

0xc22a,	// (0x0001ac96) mup3_progress_pane_t3_ParamLimits

0xf6f7,	// (0x0001e163) mup3_progress_pane_t_ParamLimits

0xc247,	// (0x0001acb3) mup_progress_pane_cp03_ParamLimits

0x43fc,	// (0x00012e68) mup3_control_keys_pane_g4_copy1

0xc980,	// (0x0001b3ec) mp4_rocker2_pane_ParamLimits

0xc980,	// (0x0001b3ec) mp4_rocker2_pane

0xcaa7,	// (0x0001b513) mp4_rocker2_pane_g1

0xcaaf,	// (0x0001b51b) mp4_rocker2_pane_g2

0xcab7,	// (0x0001b523) mp4_rocker2_pane_g3

0xcabf,	// (0x0001b52b) mp4_rocker2_pane_g4

0xcac7,	// (0x0001b533) mp4_rocker2_pane_g5

0x0004,

0xf82b,	// (0x0001e297) mp4_rocker2_pane_g

0x912c,	// (0x00017b98) main_camera4_pane

0x912c,	// (0x00017b98) main_video4_pane

0x44fb,	// (0x00012f67) main_video_tele_dialer_pane_t1_ParamLimits

0x44fb,	// (0x00012f67) main_video_tele_dialer_pane_t1

0x4514,	// (0x00012f80) main_video_tele_dialer_pane_t2_ParamLimits

0x4514,	// (0x00012f80) main_video_tele_dialer_pane_t2

0x0001,

0xf7e1,	// (0x0001e24d) main_video_tele_dialer_pane_t_ParamLimits

0xf7e1,	// (0x0001e24d) main_video_tele_dialer_pane_t

0x4b07,	// (0x00013573) cam4_autofocus_pane_ParamLimits

0x4b07,	// (0x00013573) cam4_autofocus_pane

0x4b1d,	// (0x00013589) cam4_image_uncrop_pane_ParamLimits

0x4b1d,	// (0x00013589) cam4_image_uncrop_pane

0x4b37,	// (0x000135a3) cam4_indicators_pane_ParamLimits

0x4b37,	// (0x000135a3) cam4_indicators_pane

0x4b62,	// (0x000135ce) main_camera4_pane_g1_ParamLimits

0x4b62,	// (0x000135ce) main_camera4_pane_g1

0x4b74,	// (0x000135e0) main_camera4_pane_g2_ParamLimits

0x4b74,	// (0x000135e0) main_camera4_pane_g2

0x4b87,	// (0x000135f3) main_camera4_pane_g3_ParamLimits

0x4b87,	// (0x000135f3) main_camera4_pane_g3

0x4b9a,	// (0x00013606) main_camera4_pane_g4_ParamLimits

0x4b9a,	// (0x00013606) main_camera4_pane_g4

0x4bad,	// (0x00013619) main_camera4_pane_g5_ParamLimits

0x4bad,	// (0x00013619) main_camera4_pane_g5

0x0005,

0xf836,	// (0x0001e2a2) main_camera4_pane_g_ParamLimits

0xf836,	// (0x0001e2a2) main_camera4_pane_g

0x4bd1,	// (0x0001363d) main_camera4_pane_t1_ParamLimits

0x4bd1,	// (0x0001363d) main_camera4_pane_t1

0x9892,	// (0x000182fe) bg_tb_trans_pane_cp06

0xcaf3,	// (0x0001b55f) cam4_indicators_pane_g1

0xcb04,	// (0x0001b570) cam4_indicators_pane_g2

0x0002,

0xf851,	// (0x0001e2bd) cam4_indicators_pane_g

0xcb1c,	// (0x0001b588) cam4_indicators_pane_t1

0x4c35,	// (0x000136a1) main_video4_pane_g1_ParamLimits

0x4c35,	// (0x000136a1) main_video4_pane_g1

0x4c44,	// (0x000136b0) main_video4_pane_g2_ParamLimits

0x4c44,	// (0x000136b0) main_video4_pane_g2

0x4c53,	// (0x000136bf) main_video4_pane_g3_ParamLimits

0x4c53,	// (0x000136bf) main_video4_pane_g3

0x4c62,	// (0x000136ce) main_video4_pane_g4_ParamLimits

0x4c62,	// (0x000136ce) main_video4_pane_g4

0x0004,

0xf858,	// (0x0001e2c4) main_video4_pane_g_ParamLimits

0xf858,	// (0x0001e2c4) main_video4_pane_g

0x4c80,	// (0x000136ec) vid4_indicators_pane_ParamLimits

0x4c80,	// (0x000136ec) vid4_indicators_pane

0x4cae,	// (0x0001371a) video4_image_uncrop_cif_pane_ParamLimits

0x4cae,	// (0x0001371a) video4_image_uncrop_cif_pane

0x4cc8,	// (0x00013734) video4_image_uncrop_nhd_pane_ParamLimits

0x4cc8,	// (0x00013734) video4_image_uncrop_nhd_pane

0x4b1d,	// (0x00013589) video4_image_uncrop_vga_pane_ParamLimits

0x4b1d,	// (0x00013589) video4_image_uncrop_vga_pane

0x919b,	// (0x00017c07) bg_tb_trans_pane_cp07

0xcb46,	// (0x0001b5b2) vid4_indicators_pane_g1

0xcb5a,	// (0x0001b5c6) vid4_indicators_pane_g2

0xcb6e,	// (0x0001b5da) vid4_indicators_pane_g3

0x0004,

0xf863,	// (0x0001e2cf) vid4_indicators_pane_g

0xcb9b,	// (0x0001b607) vid4_indicators_pane_t1

0x4cdc,	// (0x00013748) cam4_autofocus_pane_g1

0x4ce4,	// (0x00013750) cam4_autofocus_pane_g2

0x4cec,	// (0x00013758) cam4_autofocus_pane_g3

0x0002,

0xf86e,	// (0x0001e2da) cam4_autofocus_pane_g

0x4cf4,	// (0x00013760) cam4_autofocus_pane_g3_copy1

0x4543,	// (0x00012faf) video_down_pane_cp_t1

0x4551,	// (0x00012fbd) video_down_pane_cp_t2

0x0001,

0xf7e6,	// (0x0001e252) video_down_pane_cp_t

0x919b,	// (0x00017c07) popup_vitu2_window_ParamLimits

0x919b,	// (0x00017c07) popup_vitu2_window

0x4cfc,	// (0x00013768) aid_size_cell2_itu2_ParamLimits

0x4cfc,	// (0x00013768) aid_size_cell2_itu2

0x4d22,	// (0x0001378e) aid_size_cell_itu2_ParamLimits

0x4d22,	// (0x0001378e) aid_size_cell_itu2

0x3f87,	// (0x000129f3) bg_popup_window_pane_cp09_ParamLimits

0x3f87,	// (0x000129f3) bg_popup_window_pane_cp09

0x4d7e,	// (0x000137ea) field_vitu2_entry_pane_ParamLimits

0x4d7e,	// (0x000137ea) field_vitu2_entry_pane

0x4da4,	// (0x00013810) grid_vitu2_function_pane_ParamLimits

0x4da4,	// (0x00013810) grid_vitu2_function_pane

0x4df5,	// (0x00013861) grid_vitu2_itu_pane_ParamLimits

0x4df5,	// (0x00013861) grid_vitu2_itu_pane

0x4e8b,	// (0x000138f7) cell_vitu2_itu_pane_ParamLimits

0x4e8b,	// (0x000138f7) cell_vitu2_itu_pane

0x4eb7,	// (0x00013923) cell_vitu2_function_pane_ParamLimits

0x4eb7,	// (0x00013923) cell_vitu2_function_pane

0xcbb2,	// (0x0001b61e) bg_popup_call_pane_cp08_ParamLimits

0xcbb2,	// (0x0001b61e) bg_popup_call_pane_cp08

0xcbc9,	// (0x0001b635) field_vitu2_entry_pane_g1

0xcbd5,	// (0x0001b641) field_vitu2_entry_pane_g2

0x0002,

0xf875,	// (0x0001e2e1) field_vitu2_entry_pane_g

0x4ef6,	// (0x00013962) field_vitu2_entry_pane_t1_ParamLimits

0x4ef6,	// (0x00013962) field_vitu2_entry_pane_t1

0xcbe1,	// (0x0001b64d) field_vitu2_entry_pane_t2_ParamLimits

0xcbe1,	// (0x0001b64d) field_vitu2_entry_pane_t2

0x0001,

0xf87c,	// (0x0001e2e8) field_vitu2_entry_pane_t_ParamLimits

0xf87c,	// (0x0001e2e8) field_vitu2_entry_pane_t

0x4f26,	// (0x00013992) bg_button_pane_cp010_ParamLimits

0x4f26,	// (0x00013992) bg_button_pane_cp010

0x4f34,	// (0x000139a0) cell_vitu2_itu_pane_g1

0x4f5a,	// (0x000139c6) cell_vitu2_itu_pane_t1_ParamLimits

0x4f5a,	// (0x000139c6) cell_vitu2_itu_pane_t1

0x4fb8,	// (0x00013a24) cell_vitu2_itu_pane_t2_ParamLimits

0x4fb8,	// (0x00013a24) cell_vitu2_itu_pane_t2

0x0002,

0xf886,	// (0x0001e2f2) cell_vitu2_itu_pane_t_ParamLimits

0xf886,	// (0x0001e2f2) cell_vitu2_itu_pane_t

0x919b,	// (0x00017c07) bg_button_pane_cp011

0x50a4,	// (0x00013b10) cell_vitu2_function_pane_g1

0x912c,	// (0x00017b98) main_myfav_hc_pane

0x48f4,	// (0x00013360) popup_image3_note_pane_ParamLimits

0x48f4,	// (0x00013360) popup_image3_note_pane

0x4910,	// (0x0001337c) popup_image3_tool_bar_pane_ParamLimits

0x4910,	// (0x0001337c) popup_image3_tool_bar_pane

0x5046,	// (0x00013ab2) cell_vitu2_itu_pane_t3_ParamLimits

0x5046,	// (0x00013ab2) cell_vitu2_itu_pane_t3

0x912c,	// (0x00017b98) bg_popup_trans_pane

0xcc06,	// (0x0001b672) grid_image3_tool_bar_pane

0xcc10,	// (0x0001b67c) bg_popup_trans_pane_g1

0x9dac,	// (0x00018818) bg_popup_trans_pane_g2

0xcc18,	// (0x0001b684) bg_popup_trans_pane_g3

0xcc20,	// (0x0001b68c) bg_popup_trans_pane_g4

0xcc28,	// (0x0001b694) bg_popup_trans_pane_g5

0xcc30,	// (0x0001b69c) bg_popup_trans_pane_g6

0xcc38,	// (0x0001b6a4) bg_popup_trans_pane_g7

0xcc40,	// (0x0001b6ac) bg_popup_trans_pane_g8

0x9d8c,	// (0x000187f8) bg_popup_trans_pane_g9

0x0008,

0xf88d,	// (0x0001e2f9) bg_popup_trans_pane_g

0xcc48,	// (0x0001b6b4) cell_image3_tool_bar_pane_ParamLimits

0xcc48,	// (0x0001b6b4) cell_image3_tool_bar_pane

0x9b9b,	// (0x00018607) cell_image3_tool_bar_pane_g1

0x912c,	// (0x00017b98) bg_popup_trans_pane_cp1

0xcc5c,	// (0x0001b6c8) popup_image3_note_pane_t1

0xcc6a,	// (0x0001b6d6) popup_image3_note_pane_t2

0xcc78,	// (0x0001b6e4) popup_image3_note_pane_t3

0x0002,

0xf8a0,	// (0x0001e30c) popup_image3_note_pane_t

0xcc86,	// (0x0001b6f2) popup_image3_note_pane_t3_copy1

0x50b7,	// (0x00013b23) bg_myfav_hc_instruction_pane_ParamLimits

0x50b7,	// (0x00013b23) bg_myfav_hc_instruction_pane

0x50cb,	// (0x00013b37) cell_myfav_contact_pane_ParamLimits

0x50cb,	// (0x00013b37) cell_myfav_contact_pane

0x50e9,	// (0x00013b55) cell_myfav_contact_pane_cp1_ParamLimits

0x50e9,	// (0x00013b55) cell_myfav_contact_pane_cp1

0x5101,	// (0x00013b6d) cell_myfav_contact_pane_cp2_ParamLimits

0x5101,	// (0x00013b6d) cell_myfav_contact_pane_cp2

0x5119,	// (0x00013b85) cell_myfav_contact_pane_cp3_ParamLimits

0x5119,	// (0x00013b85) cell_myfav_contact_pane_cp3

0x5130,	// (0x00013b9c) cell_myfav_contact_pane_cp4_ParamLimits

0x5130,	// (0x00013b9c) cell_myfav_contact_pane_cp4

0x5148,	// (0x00013bb4) cell_myfav_contact_pane_cp5_ParamLimits

0x5148,	// (0x00013bb4) cell_myfav_contact_pane_cp5

0x515c,	// (0x00013bc8) cell_myfav_contact_pane_cp6_ParamLimits

0x515c,	// (0x00013bc8) cell_myfav_contact_pane_cp6

0x5172,	// (0x00013bde) cell_myfav_contact_pane_cp7_ParamLimits

0x5172,	// (0x00013bde) cell_myfav_contact_pane_cp7

0xcc94,	// (0x0001b700) listscroll_gen_pane_cp05

0x518c,	// (0x00013bf8) main_myfav_hc_pane_g1_ParamLimits

0x518c,	// (0x00013bf8) main_myfav_hc_pane_g1

0x51a6,	// (0x00013c12) main_myfav_hc_pane_g2_ParamLimits

0x51a6,	// (0x00013c12) main_myfav_hc_pane_g2

0x0002,

0xf8a7,	// (0x0001e313) main_myfav_hc_pane_g_ParamLimits

0xf8a7,	// (0x0001e313) main_myfav_hc_pane_g

0x51d8,	// (0x00013c44) main_myfav_hc_pane_t1_ParamLimits

0x51d8,	// (0x00013c44) main_myfav_hc_pane_t1

0xcc9d,	// (0x0001b709) main_myfav_hc_pane_t2_ParamLimits

0xcc9d,	// (0x0001b709) main_myfav_hc_pane_t2

0xccaf,	// (0x0001b71b) main_myfav_hc_pane_t3_ParamLimits

0xccaf,	// (0x0001b71b) main_myfav_hc_pane_t3

0x51ef,	// (0x00013c5b) main_myfav_hc_pane_t4_ParamLimits

0x51ef,	// (0x00013c5b) main_myfav_hc_pane_t4

0x0004,

0xf8ae,	// (0x0001e31a) main_myfav_hc_pane_t_ParamLimits

0xf8ae,	// (0x0001e31a) main_myfav_hc_pane_t

0x9b9b,	// (0x00018607) bg_myfav_hc_instruction_pane_g1

0xccc1,	// (0x0001b72d) cell_myfav_contact_pane_g1_ParamLimits

0xccc1,	// (0x0001b72d) cell_myfav_contact_pane_g1

0xccc1,	// (0x0001b72d) cell_myfav_contact_pane_g2_ParamLimits

0xccc1,	// (0x0001b72d) cell_myfav_contact_pane_g2

0xcccd,	// (0x0001b739) cell_myfav_contact_pane_g3_ParamLimits

0xcccd,	// (0x0001b739) cell_myfav_contact_pane_g3

0x98a0,	// (0x0001830c) cell_myfav_contact_pane_g4_ParamLimits

0x98a0,	// (0x0001830c) cell_myfav_contact_pane_g4

0xccda,	// (0x0001b746) cell_myfav_contact_pane_g5_ParamLimits

0xccda,	// (0x0001b746) cell_myfav_contact_pane_g5

0x0004,

0xf8b9,	// (0x0001e325) cell_myfav_contact_pane_g_ParamLimits

0xf8b9,	// (0x0001e325) cell_myfav_contact_pane_g

0x51c0,	// (0x00013c2c) main_myfav_hc_pane_g3_ParamLimits

0x51c0,	// (0x00013c2c) main_myfav_hc_pane_g3

0x0746,	// (0x0000f1b2) popup_adpt_find_window

0x5217,	// (0x00013c83) afind_page_pane_ParamLimits

0x5217,	// (0x00013c83) afind_page_pane

0x522d,	// (0x00013c99) aid_size_cell_afind_ParamLimits

0x522d,	// (0x00013c99) aid_size_cell_afind

0x524b,	// (0x00013cb7) bg_popup_sub_pane_cp09_ParamLimits

0x524b,	// (0x00013cb7) bg_popup_sub_pane_cp09

0x525d,	// (0x00013cc9) find_pane_cp01_ParamLimits

0x525d,	// (0x00013cc9) find_pane_cp01

0xcce6,	// (0x0001b752) grid_afind_control_pane_ParamLimits

0xcce6,	// (0x0001b752) grid_afind_control_pane

0x5271,	// (0x00013cdd) grid_afind_pane_ParamLimits

0x5271,	// (0x00013cdd) grid_afind_pane

0x5293,	// (0x00013cff) cell_afind_pane_ParamLimits

0x5293,	// (0x00013cff) cell_afind_pane

0x9b9b,	// (0x00018607) afind_page_pane_g1

0x52fa,	// (0x00013d66) afind_page_pane_g2

0x5302,	// (0x00013d6e) afind_page_pane_g3

0x0002,

0xf8c4,	// (0x0001e330) afind_page_pane_g

0x530a,	// (0x00013d76) afind_page_pane_t1

0xcd0c,	// (0x0001b778) cell_afind_grid_control_pane_ParamLimits

0xcd0c,	// (0x0001b778) cell_afind_grid_control_pane

0xca1b,	// (0x0001b487) bg_button_pane_cp69_ParamLimits

0xca1b,	// (0x0001b487) bg_button_pane_cp69

0x5318,	// (0x00013d84) cell_afind_pane_g1_ParamLimits

0x5318,	// (0x00013d84) cell_afind_pane_g1

0x5325,	// (0x00013d91) cell_afind_pane_t1_ParamLimits

0x5325,	// (0x00013d91) cell_afind_pane_t1

0x9ba5,	// (0x00018611) bg_button_pane_cp72

0xcd1b,	// (0x0001b787) cell_afind_grid_control_pane_g1

0x2be3,	// (0x0001164f) aid_image_placing_area_ParamLimits

0x2be3,	// (0x0001164f) aid_image_placing_area

0x9892,	// (0x000182fe) field_vitu_entry_pane_g1_ParamLimits

0x9892,	// (0x000182fe) field_vitu_entry_pane_g1

0x9892,	// (0x000182fe) field_vitu_entry_pane_g2_ParamLimits

0x9892,	// (0x000182fe) field_vitu_entry_pane_g2

0x0001,

0xf1c1,	// (0x0001dc2d) field_vitu_entry_pane_g_ParamLimits

0xf1c1,	// (0x0001dc2d) field_vitu_entry_pane_g

0xc534,	// (0x0001afa0) cell_vitu_itu_pane_g1_ParamLimits

0xc517,	// (0x0001af83) cell_vitu_itu_pane_t3_ParamLimits

0xc517,	// (0x0001af83) cell_vitu_itu_pane_t3

0xc9c4,	// (0x0001b430) mp4_progress_pane_t1_ParamLimits

0xc9dd,	// (0x0001b449) mp4_progress_pane_t2_ParamLimits

0xf80a,	// (0x0001e276) mp4_progress_pane_t_ParamLimits

0xc9f6,	// (0x0001b462) mup_progress_pane_cp04_ParamLimits

0x5203,	// (0x00013c6f) main_myfav_hc_pane_t5_ParamLimits

0x5203,	// (0x00013c6f) main_myfav_hc_pane_t5

0x9152,	// (0x00017bbe) aid_zoom_text_primary

0x0746,	// (0x0000f1b2) popup_adpt_find_window_ParamLimits

0x919b,	// (0x00017c07) main_cam_set_pane

0x4b4e,	// (0x000135ba) cam4_zoom_pane_ParamLimits

0x4b4e,	// (0x000135ba) cam4_zoom_pane

0x5337,	// (0x00013da3) main_cam_set_pane_g1_ParamLimits

0x5337,	// (0x00013da3) main_cam_set_pane_g1

0x5345,	// (0x00013db1) main_cam_set_pane_g2_ParamLimits

0x5345,	// (0x00013db1) main_cam_set_pane_g2

0x0001,

0xf8cb,	// (0x0001e337) main_cam_set_pane_g_ParamLimits

0xf8cb,	// (0x0001e337) main_cam_set_pane_g

0x5366,	// (0x00013dd2) main_cam_set_pane_t1_ParamLimits

0x5366,	// (0x00013dd2) main_cam_set_pane_t1

0x5381,	// (0x00013ded) main_cset_listscroll_pane_ParamLimits

0x5381,	// (0x00013ded) main_cset_listscroll_pane

0x53a7,	// (0x00013e13) main_cset_slider_pane_ParamLimits

0x53a7,	// (0x00013e13) main_cset_slider_pane

0xcd2c,	// (0x0001b798) main_cset_list_pane_ParamLimits

0xcd2c,	// (0x0001b798) main_cset_list_pane

0xcd3c,	// (0x0001b7a8) scroll_pane_cp028

0x53cd,	// (0x00013e39) aid_area_touch_slider

0x53e9,	// (0x00013e55) cset_slider_pane

0x540c,	// (0x00013e78) main_cset_slider_pane_g1

0x5421,	// (0x00013e8d) main_cset_slider_pane_g2

0x0011,

0xf8d0,	// (0x0001e33c) main_cset_slider_pane_g

0xcd75,	// (0x0001b7e1) main_cset_slider_pane_t1

0x54c5,	// (0x00013f31) main_cset_slider_pane_t2

0x54df,	// (0x00013f4b) main_cset_slider_pane_t3

0x54f9,	// (0x00013f65) main_cset_slider_pane_t4

0x5513,	// (0x00013f7f) main_cset_slider_pane_t5

0x552d,	// (0x00013f99) main_cset_slider_pane_t6

0x5542,	// (0x00013fae) main_cset_slider_pane_t7

0x000e,

0xf8f5,	// (0x0001e361) main_cset_slider_pane_t

0x5646,	// (0x000140b2) cset_list_set_pane_ParamLimits

0x5646,	// (0x000140b2) cset_list_set_pane

0xce0f,	// (0x0001b87b) aid_position_infowindow_above

0xce17,	// (0x0001b883) aid_position_infowindow_below

0x5658,	// (0x000140c4) cset_list_set_pane_g1_ParamLimits

0x5658,	// (0x000140c4) cset_list_set_pane_g1

0x5664,	// (0x000140d0) cset_list_set_pane_g3_ParamLimits

0x5664,	// (0x000140d0) cset_list_set_pane_g3

0x0001,

0xf914,	// (0x0001e380) cset_list_set_pane_g_ParamLimits

0xf914,	// (0x0001e380) cset_list_set_pane_g

0x5673,	// (0x000140df) cset_list_set_pane_t1_ParamLimits

0x5673,	// (0x000140df) cset_list_set_pane_t1

0x919b,	// (0x00017c07) list_highlight_pane_cp021_ParamLimits

0x919b,	// (0x00017c07) list_highlight_pane_cp021

0xa79e,	// (0x0001920a) cset_slider_pane_g1

0xa7b0,	// (0x0001921c) cset_slider_pane_g2

0xa7a7,	// (0x00019213) cset_slider_pane_g3

0x0002,

0xf919,	// (0x0001e385) cset_slider_pane_g

0xce1f,	// (0x0001b88b) aid_area_touch_cam4_zoom

0xce27,	// (0x0001b893) cam4_zoom_cont_pane

0xce2f,	// (0x0001b89b) cam4_zoom_pane_g1

0xce37,	// (0x0001b8a3) cam4_zoom_pane_g2

0x5688,	// (0x000140f4) cam4_zoom_pane_g3

0x0002,

0xf920,	// (0x0001e38c) cam4_zoom_pane_g

0xc65a,	// (0x0001b0c6) cam4_zoom_cont_pane_g1

0xce3f,	// (0x0001b8ab) cam4_zoom_cont_pane_g2

0xce48,	// (0x0001b8b4) cam4_zoom_cont_pane_g3

0x0002,

0xf927,	// (0x0001e393) cam4_zoom_cont_pane_g

0x497d,	// (0x000133e9) call4_image_pane_ParamLimits

0x497d,	// (0x000133e9) call4_image_pane

0x49e4,	// (0x00013450) call4_windows_conf_pane_ParamLimits

0x4a27,	// (0x00013493) popup_call4_audio_in_window_ParamLimits

0x4a27,	// (0x00013493) popup_call4_audio_in_window

0x912c,	// (0x00017b98) bg_popup_call2_act_pane_cp02

0xca8b,	// (0x0001b4f7) call4_list_conf_pane

0x9b9b,	// (0x00018607) call4_image_pane_g1

0x9b9b,	// (0x00018607) call4_image_pane_g2

0x0001,

0xf398,	// (0x0001de04) call4_image_pane_g

0xce51,	// (0x0001b8bd) list_single_graphic_popup_conf4_pane_ParamLimits

0xce51,	// (0x0001b8bd) list_single_graphic_popup_conf4_pane

0x912c,	// (0x00017b98) list_highlight_pane_cp022

0xce64,	// (0x0001b8d0) list_single_graphic_popup_conf4_pane_g1

0xa367,	// (0x00018dd3) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf92e,	// (0x0001e39a) list_single_graphic_popup_conf4_pane_g

0xce6c,	// (0x0001b8d8) list_single_graphic_popup_conf4_pane_t1

0x14c0,	// (0x0000ff2c) popup_vtel_slider_window_ParamLimits

0x14c0,	// (0x0000ff2c) popup_vtel_slider_window

0xca09,	// (0x0001b475) dialer2_ne_pane_t2_ParamLimits

0xca09,	// (0x0001b475) dialer2_ne_pane_t2

0x0001,

0xf80f,	// (0x0001e27b) dialer2_ne_pane_t_ParamLimits

0xf80f,	// (0x0001e27b) dialer2_ne_pane_t

0xbb9d,	// (0x0001a609) bg_popup_sub_pane_cp010_ParamLimits

0xbb9d,	// (0x0001a609) bg_popup_sub_pane_cp010

0x5690,	// (0x000140fc) popup_vtel_slider_window_g1_ParamLimits

0x5690,	// (0x000140fc) popup_vtel_slider_window_g1

0x56a3,	// (0x0001410f) popup_vtel_slider_window_g2_ParamLimits

0x56a3,	// (0x0001410f) popup_vtel_slider_window_g2

0x0003,

0xf933,	// (0x0001e39f) popup_vtel_slider_window_g_ParamLimits

0xf933,	// (0x0001e39f) popup_vtel_slider_window_g

0x56f9,	// (0x00014165) vtel_slider_pane_ParamLimits

0x56f9,	// (0x00014165) vtel_slider_pane

0x571b,	// (0x00014187) vtel_slider_pane_g1_ParamLimits

0x571b,	// (0x00014187) vtel_slider_pane_g1

0x572f,	// (0x0001419b) vtel_slider_pane_g2_ParamLimits

0x572f,	// (0x0001419b) vtel_slider_pane_g2

0x5747,	// (0x000141b3) vtel_slider_pane_g3_ParamLimits

0x5747,	// (0x000141b3) vtel_slider_pane_g3

0x571b,	// (0x00014187) vtel_slider_pane_g4_ParamLimits

0x571b,	// (0x00014187) vtel_slider_pane_g4

0x575d,	// (0x000141c9) vtel_slider_pane_g5_ParamLimits

0x575d,	// (0x000141c9) vtel_slider_pane_g5

0x0004,

0xf93c,	// (0x0001e3a8) vtel_slider_pane_g_ParamLimits

0xf93c,	// (0x0001e3a8) vtel_slider_pane_g

0x919b,	// (0x00017c07) main_gallery2_pane

0x4d4e,	// (0x000137ba) aid_size_row_itut2_dropdow_list_ParamLimits

0x4d4e,	// (0x000137ba) aid_size_row_itut2_dropdow_list

0x4dcc,	// (0x00013838) grid_vitu2_function_top_pane_ParamLimits

0x4dcc,	// (0x00013838) grid_vitu2_function_top_pane

0x4e36,	// (0x000138a2) popup_vitu2_dropdown_list_window_ParamLimits

0x4e36,	// (0x000138a2) popup_vitu2_dropdown_list_window

0x4e5d,	// (0x000138c9) popup_vitu2_match_list_window

0x5773,	// (0x000141df) cell_vitu2_function_top_pane_ParamLimits

0x5773,	// (0x000141df) cell_vitu2_function_top_pane

0x578b,	// (0x000141f7) cell_vitu2_function_top_pane_cp01_ParamLimits

0x578b,	// (0x000141f7) cell_vitu2_function_top_pane_cp01

0x57a7,	// (0x00014213) cell_vitu2_function_top_wide_pane_ParamLimits

0x57a7,	// (0x00014213) cell_vitu2_function_top_wide_pane

0x919b,	// (0x00017c07) bg_button_pane_cp012

0x57c5,	// (0x00014231) cell_vitu2_function_top_pane_g1

0xce82,	// (0x0001b8ee) bg_button_pane_cp013_ParamLimits

0xce82,	// (0x0001b8ee) bg_button_pane_cp013

0x57d9,	// (0x00014245) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x57d9,	// (0x00014245) cell_vitu2_function_top_wide_pane_g1

0x919b,	// (0x00017c07) bg_popup_sub_pane_cp20

0x57f1,	// (0x0001425d) list_vitu2_match_list_pane

0xcc10,	// (0x0001b67c) bg_popup_sub_pane_cp20_g1

0xcc18,	// (0x0001b684) bg_popup_sub_pane_cp20_g2

0x9dac,	// (0x00018818) bg_popup_sub_pane_cp20_g3

0xcc20,	// (0x0001b68c) bg_popup_sub_pane_cp20_g4

0x9d8c,	// (0x000187f8) bg_popup_sub_pane_cp20_g5

0xce9e,	// (0x0001b90a) bg_popup_sub_pane_cp20_g6

0xcc30,	// (0x0001b69c) bg_popup_sub_pane_cp20_g7

0xcc38,	// (0x0001b6a4) bg_popup_sub_pane_cp20_g8

0xcc40,	// (0x0001b6ac) bg_popup_sub_pane_cp20_g9

0x0008,

0xf947,	// (0x0001e3b3) bg_popup_sub_pane_cp20_g

0xcea6,	// (0x0001b912) list_vitu2_match_list_item_pane_ParamLimits

0xcea6,	// (0x0001b912) list_vitu2_match_list_item_pane

0xceb8,	// (0x0001b924) list_vitu2_match_list_item_pane_t1

0x912c,	// (0x00017b98) bg_popup_sub_pane_cp21

0x9b5b,	// (0x000185c7) grid_vitu2_dropdown_list_pane

0x5809,	// (0x00014275) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x5809,	// (0x00014275) cell_vitu2_dropdown_list_char_pane

0x5829,	// (0x00014295) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x5829,	// (0x00014295) cell_vitu2_dropdown_list_ctrl_pane

0xcec6,	// (0x0001b932) cell_vitu2_dropdown_list_char_pane_g1

0xcecf,	// (0x0001b93b) cell_vitu2_dropdown_list_char_pane_g2

0xced8,	// (0x0001b944) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf95a,	// (0x0001e3c6) cell_vitu2_dropdown_list_char_pane_g

0x5851,	// (0x000142bd) cell_vitu2_dropdown_list_char_pane_t1

0x585f,	// (0x000142cb) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x585f,	// (0x000142cb) cell_vitu2_dropdown_list_ctrl_pane_g1

0x586c,	// (0x000142d8) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x586c,	// (0x000142d8) cell_vitu2_dropdown_list_ctrl_pane_g2

0x5879,	// (0x000142e5) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x5879,	// (0x000142e5) cell_vitu2_dropdown_list_ctrl_pane_g3

0x5886,	// (0x000142f2) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x5886,	// (0x000142f2) cell_vitu2_dropdown_list_ctrl_pane_g4

0x9892,	// (0x000182fe) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x9892,	// (0x000182fe) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf961,	// (0x0001e3cd) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf961,	// (0x0001e3cd) cell_vitu2_dropdown_list_ctrl_pane_g

0x58a2,	// (0x0001430e) aid_size_cell_gallery2_ParamLimits

0x58a2,	// (0x0001430e) aid_size_cell_gallery2

0x58c0,	// (0x0001432c) grid_gallery2_pane_ParamLimits

0x58c0,	// (0x0001432c) grid_gallery2_pane

0x58da,	// (0x00014346) scroll_pane_cp029_ParamLimits

0x58da,	// (0x00014346) scroll_pane_cp029

0x58eb,	// (0x00014357) cell_gallery2_pane_ParamLimits

0x58eb,	// (0x00014357) cell_gallery2_pane

0xcf0e,	// (0x0001b97a) cell_gallery2_pane_g2

0x594a,	// (0x000143b6) cell_gallery2_pane_g3

0xcf16,	// (0x0001b982) cell_gallery2_pane_g4

0xcf1e,	// (0x0001b98a) cell_gallery2_pane_g5

0x9b5b,	// (0x000185c7) grid_highlight_pane_cp10

0x4e5d,	// (0x000138c9) popup_vitu2_match_list_window_ParamLimits

0x4e72,	// (0x000138de) popup_vitu2_query_window_ParamLimits

0x4e72,	// (0x000138de) popup_vitu2_query_window

0x912c,	// (0x00017b98) bg_vitu2_candi_button_pane

0xcec6,	// (0x0001b932) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xcecf,	// (0x0001b93b) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xced8,	// (0x0001b944) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x5952,	// (0x000143be) bg_button_pane_cp015

0x5963,	// (0x000143cf) bg_button_pane_cp016

0x596f,	// (0x000143db) bg_button_pane_cp017

0xa72e,	// (0x0001919a) bg_popup_sub_pane_cp22

0xcf26,	// (0x0001b992) popup_vitu2_query_window_g1

0x59ad,	// (0x00014419) popup_vitu2_query_window_g2

0x0002,

0xf96c,	// (0x0001e3d8) popup_vitu2_query_window_g

0x59cf,	// (0x0001443b) popup_vitu2_query_window_t1_ParamLimits

0x59cf,	// (0x0001443b) popup_vitu2_query_window_t1

0x5a02,	// (0x0001446e) popup_vitu2_query_window_t2_ParamLimits

0x5a02,	// (0x0001446e) popup_vitu2_query_window_t2

0x5a14,	// (0x00014480) popup_vitu2_query_window_t3_ParamLimits

0x5a14,	// (0x00014480) popup_vitu2_query_window_t3

0x5a3c,	// (0x000144a8) popup_vitu2_query_window_t4_ParamLimits

0x5a3c,	// (0x000144a8) popup_vitu2_query_window_t4

0x5a50,	// (0x000144bc) popup_vitu2_query_window_t5_ParamLimits

0x5a50,	// (0x000144bc) popup_vitu2_query_window_t5

0x0006,

0xf973,	// (0x0001e3df) popup_vitu2_query_window_t_ParamLimits

0xf973,	// (0x0001e3df) popup_vitu2_query_window_t

0xcd24,	// (0x0001b790) main_cset_text_pane

0x53cd,	// (0x00013e39) aid_area_touch_slider_ParamLimits

0x53e9,	// (0x00013e55) cset_slider_pane_ParamLimits

0x540c,	// (0x00013e78) main_cset_slider_pane_g1_ParamLimits

0x5421,	// (0x00013e8d) main_cset_slider_pane_g2_ParamLimits

0xcd45,	// (0x0001b7b1) main_cset_slider_pane_g3_ParamLimits

0xcd45,	// (0x0001b7b1) main_cset_slider_pane_g3

0x5436,	// (0x00013ea2) main_cset_slider_pane_g4_ParamLimits

0x5436,	// (0x00013ea2) main_cset_slider_pane_g4

0x5445,	// (0x00013eb1) main_cset_slider_pane_g5_ParamLimits

0x5445,	// (0x00013eb1) main_cset_slider_pane_g5

0x5451,	// (0x00013ebd) main_cset_slider_pane_g6_ParamLimits

0x5451,	// (0x00013ebd) main_cset_slider_pane_g6

0xf8d0,	// (0x0001e33c) main_cset_slider_pane_g_ParamLimits

0xcd75,	// (0x0001b7e1) main_cset_slider_pane_t1_ParamLimits

0x54c5,	// (0x00013f31) main_cset_slider_pane_t2_ParamLimits

0x54df,	// (0x00013f4b) main_cset_slider_pane_t3_ParamLimits

0x54f9,	// (0x00013f65) main_cset_slider_pane_t4_ParamLimits

0x5513,	// (0x00013f7f) main_cset_slider_pane_t5_ParamLimits

0x552d,	// (0x00013f99) main_cset_slider_pane_t6_ParamLimits

0x5542,	// (0x00013fae) main_cset_slider_pane_t7_ParamLimits

0x556c,	// (0x00013fd8) main_cset_slider_pane_t8_ParamLimits

0x556c,	// (0x00013fd8) main_cset_slider_pane_t8

0x5594,	// (0x00014000) main_cset_slider_pane_t9_ParamLimits

0x5594,	// (0x00014000) main_cset_slider_pane_t9

0x55bc,	// (0x00014028) main_cset_slider_pane_t10_ParamLimits

0x55bc,	// (0x00014028) main_cset_slider_pane_t10

0x55e4,	// (0x00014050) main_cset_slider_pane_t11_ParamLimits

0x55e4,	// (0x00014050) main_cset_slider_pane_t11

0x560c,	// (0x00014078) main_cset_slider_pane_t12_ParamLimits

0x560c,	// (0x00014078) main_cset_slider_pane_t12

0x5629,	// (0x00014095) main_cset_slider_pane_t13_ParamLimits

0x5629,	// (0x00014095) main_cset_slider_pane_t13

0xf8f5,	// (0x0001e361) main_cset_slider_pane_t_ParamLimits

0x912c,	// (0x00017b98) bg_popup_sub_pane_cp011

0xcf32,	// (0x0001b99e) main_cset_text_pane_g1

0xcf3a,	// (0x0001b9a6) main_cset_text_pane_t1

0xcf48,	// (0x0001b9b4) main_cset_text_pane_t2

0xcf56,	// (0x0001b9c2) main_cset_text_pane_t3

0xcf64,	// (0x0001b9d0) main_cset_text_pane_t4

0xcf72,	// (0x0001b9de) main_cset_text_pane_t5

0xcf80,	// (0x0001b9ec) main_cset_text_pane_t6

0xcf8e,	// (0x0001b9fa) main_cset_text_pane_t7

0x0006,

0xf982,	// (0x0001e3ee) main_cset_text_pane_t

0x912c,	// (0x00017b98) main_cam4_burst_pane

0x912c,	// (0x00017b98) main_cam5_pane

0xccfa,	// (0x0001b766) bg_button_pane_cp019

0xcd03,	// (0x0001b76f) bg_button_pane_cp020

0xcd51,	// (0x0001b7bd) main_cset_slider_pane_g7_ParamLimits

0xcd51,	// (0x0001b7bd) main_cset_slider_pane_g7

0xcd5d,	// (0x0001b7c9) main_cset_slider_pane_g8_ParamLimits

0xcd5d,	// (0x0001b7c9) main_cset_slider_pane_g8

0x5465,	// (0x00013ed1) main_cset_slider_pane_g9_ParamLimits

0x5465,	// (0x00013ed1) main_cset_slider_pane_g9

0x5471,	// (0x00013edd) main_cset_slider_pane_g10_ParamLimits

0x5471,	// (0x00013edd) main_cset_slider_pane_g10

0x547d,	// (0x00013ee9) main_cset_slider_pane_g11_ParamLimits

0x547d,	// (0x00013ee9) main_cset_slider_pane_g11

0x5489,	// (0x00013ef5) main_cset_slider_pane_g12_ParamLimits

0x5489,	// (0x00013ef5) main_cset_slider_pane_g12

0x5495,	// (0x00013f01) main_cset_slider_pane_g13_ParamLimits

0x5495,	// (0x00013f01) main_cset_slider_pane_g13

0x54a1,	// (0x00013f0d) main_cset_slider_pane_g14_ParamLimits

0x54a1,	// (0x00013f0d) main_cset_slider_pane_g14

0x54ad,	// (0x00013f19) main_cset_slider_pane_g15_ParamLimits

0x54ad,	// (0x00013f19) main_cset_slider_pane_g15

0xcd9d,	// (0x0001b809) main_cset_slider_pane_t14_ParamLimits

0xcd9d,	// (0x0001b809) main_cset_slider_pane_t14

0xcdd6,	// (0x0001b842) main_cset_slider_pane_t15_ParamLimits

0xcdd6,	// (0x0001b842) main_cset_slider_pane_t15

0x5aba,	// (0x00014526) aid_cam4_burst_size_cell_ParamLimits

0x5aba,	// (0x00014526) aid_cam4_burst_size_cell

0x5ada,	// (0x00014546) grid_cam4_burst_pane_ParamLimits

0x5ada,	// (0x00014546) grid_cam4_burst_pane

0x5b12,	// (0x0001457e) linegrid_cam4_burst_pane_ParamLimits

0x5b12,	// (0x0001457e) linegrid_cam4_burst_pane

0xcf9c,	// (0x0001ba08) scroll_pane_cp30_ParamLimits

0xcf9c,	// (0x0001ba08) scroll_pane_cp30

0x5b36,	// (0x000145a2) cell_cam4_burst_pane_ParamLimits

0x5b36,	// (0x000145a2) cell_cam4_burst_pane

0xcfa8,	// (0x0001ba14) linegrid_cam4_burst_pane_g1_ParamLimits

0xcfa8,	// (0x0001ba14) linegrid_cam4_burst_pane_g1

0x5b83,	// (0x000145ef) linegrid_cam4_burst_pane_g2_ParamLimits

0x5b83,	// (0x000145ef) linegrid_cam4_burst_pane_g2

0xcfb5,	// (0x0001ba21) linegrid_cam4_burst_pane_g3_ParamLimits

0xcfb5,	// (0x0001ba21) linegrid_cam4_burst_pane_g3

0x0002,

0xf991,	// (0x0001e3fd) linegrid_cam4_burst_pane_g_ParamLimits

0xf991,	// (0x0001e3fd) linegrid_cam4_burst_pane_g

0x5b94,	// (0x00014600) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x5b94,	// (0x00014600) linegrid_cam4_burst_pane_g3_copy1

0xcfc2,	// (0x0001ba2e) linegrid_cam4_burst_pane_g4_ParamLimits

0xcfc2,	// (0x0001ba2e) linegrid_cam4_burst_pane_g4

0x5bae,	// (0x0001461a) linegrid_cam4_burst_pane_g5_ParamLimits

0x5bae,	// (0x0001461a) linegrid_cam4_burst_pane_g5

0x5bbf,	// (0x0001462b) linegrid_cam4_burst_pane_g6_ParamLimits

0x5bbf,	// (0x0001462b) linegrid_cam4_burst_pane_g6

0xcfcf,	// (0x0001ba3b) linegrid_cam4_burst_pane_g7_ParamLimits

0xcfcf,	// (0x0001ba3b) linegrid_cam4_burst_pane_g7

0x5bd6,	// (0x00014642) cell_cam4_burst_pane_g1

0xcfe8,	// (0x0001ba54) main_cam5_pane_t1_ParamLimits

0xcfe8,	// (0x0001ba54) main_cam5_pane_t1

0xcffa,	// (0x0001ba66) main_cam5_pane_t2_ParamLimits

0xcffa,	// (0x0001ba66) main_cam5_pane_t2

0xd00c,	// (0x0001ba78) main_cam5_pane_t3_ParamLimits

0xd00c,	// (0x0001ba78) main_cam5_pane_t3

0xd01e,	// (0x0001ba8a) main_cam5_pane_t4_ParamLimits

0xd01e,	// (0x0001ba8a) main_cam5_pane_t4

0xd036,	// (0x0001baa2) main_cam5_pane_t5_ParamLimits

0xd036,	// (0x0001baa2) main_cam5_pane_t5

0xd04a,	// (0x0001bab6) main_cam5_pane_t6_ParamLimits

0xd04a,	// (0x0001bab6) main_cam5_pane_t6

0xd05e,	// (0x0001baca) main_cam5_pane_t7_ParamLimits

0xd05e,	// (0x0001baca) main_cam5_pane_t7

0xd070,	// (0x0001badc) main_cam5_pane_t8_ParamLimits

0xd070,	// (0x0001badc) main_cam5_pane_t8

0xd08c,	// (0x0001baf8) main_cam5_pane_t9_ParamLimits

0xd08c,	// (0x0001baf8) main_cam5_pane_t9

0xd09e,	// (0x0001bb0a) main_cam5_pane_t10_ParamLimits

0xd09e,	// (0x0001bb0a) main_cam5_pane_t10

0xd0b0,	// (0x0001bb1c) main_cam5_pane_t11_ParamLimits

0xd0b0,	// (0x0001bb1c) main_cam5_pane_t11

0xd0c2,	// (0x0001bb2e) main_cam5_pane_t12_ParamLimits

0xd0c2,	// (0x0001bb2e) main_cam5_pane_t12

0xd0d7,	// (0x0001bb43) main_cam5_pane_t13_ParamLimits

0xd0d7,	// (0x0001bb43) main_cam5_pane_t13

0x000c,

0xf99d,	// (0x0001e409) main_cam5_pane_t_ParamLimits

0xf99d,	// (0x0001e409) main_cam5_pane_t

0x07c7,	// (0x0000f233) popup_scut_keymap_window_ParamLimits

0x07c7,	// (0x0000f233) popup_scut_keymap_window

0x5be9,	// (0x00014655) aid_size_cell_brow_shortcut

0x9b5b,	// (0x000185c7) bg_popup_window_pane_cp010

0x5bf5,	// (0x00014661) grid_scut_pane

0x5c01,	// (0x0001466d) cell_scut_pane_ParamLimits

0x5c01,	// (0x0001466d) cell_scut_pane

0x5c18,	// (0x00014684) cell_scut_pane_g1

0xd0f4,	// (0x0001bb60) cell_scut_pane_t1

0xd103,	// (0x0001bb6f) cell_scut_pane_t2

0x5c21,	// (0x0001468d) cell_scut_pane_t3

0x0002,

0xf9b8,	// (0x0001e424) cell_scut_pane_t

0x3aa0,	// (0x0001250c) main_mup3_pane_g8_ParamLimits

0x3aa0,	// (0x0001250c) main_mup3_pane_g8

0x4d66,	// (0x000137d2) area_vitu2_query_pane_ParamLimits

0x4d66,	// (0x000137d2) area_vitu2_query_pane

0x597b,	// (0x000143e7) input_focus_pane_cp08

0xd112,	// (0x0001bb7e) area_vitu2_query_pane_g1

0x5c2f,	// (0x0001469b) area_vitu2_query_pane_g2

0x0001,

0xf9bf,	// (0x0001e42b) area_vitu2_query_pane_g

0x5c3e,	// (0x000146aa) area_vitu2_query_pane_t1_ParamLimits

0x5c3e,	// (0x000146aa) area_vitu2_query_pane_t1

0x5c52,	// (0x000146be) area_vitu2_query_pane_t2_ParamLimits

0x5c52,	// (0x000146be) area_vitu2_query_pane_t2

0x5c66,	// (0x000146d2) area_vitu2_query_pane_t3_ParamLimits

0x5c66,	// (0x000146d2) area_vitu2_query_pane_t3

0xd11e,	// (0x0001bb8a) area_vitu2_query_pane_t4_ParamLimits

0xd11e,	// (0x0001bb8a) area_vitu2_query_pane_t4

0xd146,	// (0x0001bbb2) area_vitu2_query_pane_t5_ParamLimits

0xd146,	// (0x0001bbb2) area_vitu2_query_pane_t5

0xd16e,	// (0x0001bbda) area_vitu2_query_pane_t6_ParamLimits

0xd16e,	// (0x0001bbda) area_vitu2_query_pane_t6

0x0006,

0xf9c4,	// (0x0001e430) area_vitu2_query_pane_t_ParamLimits

0xf9c4,	// (0x0001e430) area_vitu2_query_pane_t

0x5c8e,	// (0x000146fa) bg_button_pane_cp018

0x5c9a,	// (0x00014706) bg_button_pane_cp021

0x5ca6,	// (0x00014712) bg_button_pane_cp022

0x5cc5,	// (0x00014731) input_focus_pane_cp09

0xa476,	// (0x00018ee2) aid_size_touch_mv_arrow_left

0xa4a1,	// (0x00018f0d) aid_size_touch_mv_arrow_right

0xcef6,	// (0x0001b962) main_cset_slider_pane_g16_ParamLimits

0xcef6,	// (0x0001b962) main_cset_slider_pane_g16

0xcf02,	// (0x0001b96e) main_cset_slider_pane_g17_ParamLimits

0xcf02,	// (0x0001b96e) main_cset_slider_pane_g17

0x5bd6,	// (0x00014642) cell_cam4_burst_pane_g1_ParamLimits

0x912c,	// (0x00017b98) compa_mode_pane

0x56b3,	// (0x0001411f) popup_vtel_slider_window_g3_ParamLimits

0x56b3,	// (0x0001411f) popup_vtel_slider_window_g3

0x56ca,	// (0x00014136) popup_vtel_slider_window_g4_ParamLimits

0x56ca,	// (0x00014136) popup_vtel_slider_window_g4

0x56e1,	// (0x0001414d) popup_vtel_slider_window_t1_ParamLimits

0x56e1,	// (0x0001414d) popup_vtel_slider_window_t1

0x912c,	// (0x00017b98) main_cl_pane

0xba34,	// (0x0001a4a0) popup_imed_adjust2_window_ParamLimits

0xa72e,	// (0x0001919a) bg_tb_trans_pane_cp05_ParamLimits

0xc44c,	// (0x0001aeb8) popup_imed_adjust2_window_g1_ParamLimits

0xc45b,	// (0x0001aec7) popup_imed_adjust2_window_g2_ParamLimits

0xc45b,	// (0x0001aec7) popup_imed_adjust2_window_g2

0xc467,	// (0x0001aed3) popup_imed_adjust2_window_g3_ParamLimits

0xc467,	// (0x0001aed3) popup_imed_adjust2_window_g3

0x0002,

0xf73a,	// (0x0001e1a6) popup_imed_adjust2_window_g_ParamLimits

0xf73a,	// (0x0001e1a6) popup_imed_adjust2_window_g

0xc473,	// (0x0001aedf) popup_imed_adjust2_window_t1_ParamLimits

0xc48b,	// (0x0001aef7) slider_imed_adjust_pane_ParamLimits

0xc49f,	// (0x0001af0b) slider_imed_adjust_pane_g1_ParamLimits

0xc4af,	// (0x0001af1b) slider_imed_adjust_pane_g2_ParamLimits

0xc4bf,	// (0x0001af2b) slider_imed_adjust_pane_g3_ParamLimits

0xc4d0,	// (0x0001af3c) slider_imed_adjust_pane_g4_ParamLimits

0xf741,	// (0x0001e1ad) slider_imed_adjust_pane_g_ParamLimits

0x4aef,	// (0x0001355b) aid_touch_area_cam4_ParamLimits

0x4aef,	// (0x0001355b) aid_touch_area_cam4

0xcacf,	// (0x0001b53b) battery_pane_cp01

0x4bbe,	// (0x0001362a) main_camera4_pane_g6_ParamLimits

0x4bbe,	// (0x0001362a) main_camera4_pane_g6

0x4be8,	// (0x00013654) main_camera4_pane_t2_ParamLimits

0x4be8,	// (0x00013654) main_camera4_pane_t2

0x0001,

0xf843,	// (0x0001e2af) main_camera4_pane_t_ParamLimits

0xf843,	// (0x0001e2af) main_camera4_pane_t

0x4c1d,	// (0x00013689) aid_touch_area_vid4_ParamLimits

0x4c1d,	// (0x00013689) aid_touch_area_vid4

0x4c71,	// (0x000136dd) main_video4_pane_g5_ParamLimits

0x4c71,	// (0x000136dd) main_video4_pane_g5

0x4c96,	// (0x00013702) vid4_progress_pane_ParamLimits

0x4c96,	// (0x00013702) vid4_progress_pane

0xcd69,	// (0x0001b7d5) main_cset_slider_pane_g18_ParamLimits

0xcd69,	// (0x0001b7d5) main_cset_slider_pane_g18

0xcfdc,	// (0x0001ba48) cell_cam4_burst_pane_g2_ParamLimits

0xcfdc,	// (0x0001ba48) cell_cam4_burst_pane_g2

0x0001,

0xf998,	// (0x0001e404) cell_cam4_burst_pane_g_ParamLimits

0xf998,	// (0x0001e404) cell_cam4_burst_pane_g

0x9926,	// (0x00018392) bg_cl_pane_ParamLimits

0x9926,	// (0x00018392) bg_cl_pane

0x5cd5,	// (0x00014741) cl_header_pane_ParamLimits

0x5cd5,	// (0x00014741) cl_header_pane

0x5ce9,	// (0x00014755) cl_listscroll_pane_ParamLimits

0x5ce9,	// (0x00014755) cl_listscroll_pane

0xd1ba,	// (0x0001bc26) bg_cl_pane_g1

0xd1c2,	// (0x0001bc2e) bg_cl_pane_g2

0xd1ca,	// (0x0001bc36) bg_cl_pane_g3

0xd1d2,	// (0x0001bc3e) bg_cl_pane_g4

0xd1da,	// (0x0001bc46) bg_cl_pane_g5

0xd1e2,	// (0x0001bc4e) bg_cl_pane_g6

0xd1ea,	// (0x0001bc56) bg_cl_pane_g7

0xd1f2,	// (0x0001bc5e) bg_cl_pane_g8

0xd1fa,	// (0x0001bc66) bg_cl_pane_g9

0x0008,

0xf9d3,	// (0x0001e43f) bg_cl_pane_g

0x5cf9,	// (0x00014765) aid_height_cl_leading_ParamLimits

0x5cf9,	// (0x00014765) aid_height_cl_leading

0x5d05,	// (0x00014771) aid_height_cl_text_ParamLimits

0x5d05,	// (0x00014771) aid_height_cl_text

0x919b,	// (0x00017c07) bg_cl_header_pane_ParamLimits

0x919b,	// (0x00017c07) bg_cl_header_pane

0x5d24,	// (0x00014790) cl_header_pane_g1_ParamLimits

0x5d24,	// (0x00014790) cl_header_pane_g1

0x5d3a,	// (0x000147a6) cl_header_pane_t1_ParamLimits

0x5d3a,	// (0x000147a6) cl_header_pane_t1

0xd202,	// (0x0001bc6e) cl_list_pane

0xcd3c,	// (0x0001b7a8) hc_scroll_pane_cp01

0x9d8c,	// (0x000187f8) bg_cl_header_pane_g1

0xcc10,	// (0x0001b67c) bg_cl_header_pane_g2

0x9dac,	// (0x00018818) bg_cl_header_pane_g3

0xcc20,	// (0x0001b68c) bg_cl_header_pane_g4

0xcc18,	// (0x0001b684) bg_cl_header_pane_g5

0xce9e,	// (0x0001b90a) bg_cl_header_pane_g6

0xcc38,	// (0x0001b6a4) bg_cl_header_pane_g7

0xcc40,	// (0x0001b6ac) bg_cl_header_pane_g8

0xcc30,	// (0x0001b69c) bg_cl_header_pane_g9

0x0008,

0xf9e6,	// (0x0001e452) bg_cl_header_pane_g

0x5d53,	// (0x000147bf) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x5d53,	// (0x000147bf) hc_cl_list_double_graphic_heading_pane

0x5d64,	// (0x000147d0) hc_cl_list_single_graphic_pane_ParamLimits

0x5d64,	// (0x000147d0) hc_cl_list_single_graphic_pane

0x5d7d,	// (0x000147e9) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x5d7d,	// (0x000147e9) hc_cl_list_single_graphic_pane_g1

0x5d89,	// (0x000147f5) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x5d89,	// (0x000147f5) hc_cl_list_single_graphic_pane_g2

0x0001,

0xf9f9,	// (0x0001e465) hc_cl_list_single_graphic_pane_g_ParamLimits

0xf9f9,	// (0x0001e465) hc_cl_list_single_graphic_pane_g

0x5d9d,	// (0x00014809) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x5d9d,	// (0x00014809) hc_cl_list_single_graphic_pane_t1

0x5d7d,	// (0x000147e9) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x5d7d,	// (0x000147e9) hc_cl_list_double_graphic_heading_pane_g1

0x5db2,	// (0x0001481e) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x5db2,	// (0x0001481e) hc_cl_list_double_graphic_heading_pane_g2

0x5dc6,	// (0x00014832) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x5dc6,	// (0x00014832) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xf9fe,	// (0x0001e46a) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xf9fe,	// (0x0001e46a) hc_cl_list_double_graphic_heading_pane_g

0x5dda,	// (0x00014846) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x5dda,	// (0x00014846) hc_cl_list_double_graphic_heading_pane_t1

0x5def,	// (0x0001485b) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x5def,	// (0x0001485b) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfa05,	// (0x0001e471) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfa05,	// (0x0001e471) hc_cl_list_double_graphic_heading_pane_t

0xd213,	// (0x0001bc7f) vid4_progress_pane_g1

0xd223,	// (0x0001bc8f) vid4_progress_pane_g2

0x5e04,	// (0x00014870) vid4_progress_pane_g3

0xd233,	// (0x0001bc9f) vid4_progress_pane_g4

0x0004,

0xfa0a,	// (0x0001e476) vid4_progress_pane_g

0x5e16,	// (0x00014882) vid4_progress_pane_t1

0xd24b,	// (0x0001bcb7) vid4_progress_pane_t2

0x0002,

0xfa15,	// (0x0001e481) vid4_progress_pane_t

0x5e2c,	// (0x00014898) wait_bar_pane_cp07

0xbd00,	// (0x0001a76c) blid_firmament_pane_ParamLimits

0xbd43,	// (0x0001a7af) popup_blid_sat_info2_window_g1

0xbd67,	// (0x0001a7d3) popup_blid_sat_info2_window_t3

0xbd75,	// (0x0001a7e1) popup_blid_sat_info2_window_t4

0xbd83,	// (0x0001a7ef) popup_blid_sat_info2_window_t5

0xbd91,	// (0x0001a7fd) popup_blid_sat_info2_window_t6

0xbda1,	// (0x0001a80d) popup_blid_sat_info2_window_t7

0xbdaf,	// (0x0001a81b) popup_blid_sat_info2_window_t8

0xbdbd,	// (0x0001a829) popup_blid_sat_info2_window_t9

0xbdcb,	// (0x0001a837) popup_blid_sat_info2_window_t10

0xbe8c,	// (0x0001a8f8) aid_firma_cardinal_ParamLimits

0xbea0,	// (0x0001a90c) blid_firmament_pane_t1_ParamLimits

0xbeb7,	// (0x0001a923) blid_firmament_pane_t2_ParamLimits

0xbece,	// (0x0001a93a) blid_firmament_pane_t3_ParamLimits

0xbee5,	// (0x0001a951) blid_firmament_pane_t4_ParamLimits

0xf633,	// (0x0001e09f) blid_firmament_pane_t_ParamLimits

0xbefc,	// (0x0001a968) blid_sat_info_pane_ParamLimits

0x919b,	// (0x00017c07) main_cam_set_pane_ParamLimits

0x427d,	// (0x00012ce9) aid_size_cell_colour_35_ParamLimits

0x429d,	// (0x00012d09) aid_size_cell_colour_112_ParamLimits

0x42bd,	// (0x00012d29) aid_size_cell_effect_ParamLimits

0xa72e,	// (0x0001919a) bg_tb_trans_pane_cp02_ParamLimits

0xa022,	// (0x00018a8e) heading_imed_pane_ParamLimits

0x42dd,	// (0x00012d49) listscroll_imed_pane_ParamLimits

0xb0e9,	// (0x00019b55) popup_call2_audio_first_window_g5_ParamLimits

0xb0e9,	// (0x00019b55) popup_call2_audio_first_window_g5

0x4709,	// (0x00013175) aid_size_touch_image3_arrow_left_ParamLimits

0x4709,	// (0x00013175) aid_size_touch_image3_arrow_left

0x4735,	// (0x000131a1) aid_size_touch_image3_arrow_right_ParamLimits

0x4735,	// (0x000131a1) aid_size_touch_image3_arrow_right

0xd260,	// (0x0001bccc) vid4_progress_pane_t3

0x4480,	// (0x00012eec) main_hwr_training_symbol_option_pane_ParamLimits

0x4480,	// (0x00012eec) main_hwr_training_symbol_option_pane

0xc685,	// (0x0001b0f1) popup_hwr_training_preview_window_ParamLimits

0xc685,	// (0x0001b0f1) popup_hwr_training_preview_window

0x44a0,	// (0x00012f0c) hwr_training_navi_pane_g5_ParamLimits

0x44a0,	// (0x00012f0c) hwr_training_navi_pane_g5

0xcbfe,	// (0x0001b66a) popup_char_count_window

0x919b,	// (0x00017c07) bg_popup_sub_pane_cp20_ParamLimits

0x57f1,	// (0x0001425d) list_vitu2_match_list_pane_ParamLimits

0x57fd,	// (0x00014269) vitu2_page_scroll_pane_ParamLimits

0x57fd,	// (0x00014269) vitu2_page_scroll_pane

0xd298,	// (0x0001bd04) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd298,	// (0x0001bd04) list_single_hwr_training_symbol_option_pane

0xd2ab,	// (0x0001bd17) list_single_hwr_training_symbol_option_pane_g1

0xd2b3,	// (0x0001bd1f) list_single_hwr_training_symbol_option_pane_t1

0xd2c1,	// (0x0001bd2d) bg_button_pane_cp023

0xd2ca,	// (0x0001bd36) bg_button_pane_cp024

0xd2fd,	// (0x0001bd69) vitu2_page_scroll_pane_g1

0xd305,	// (0x0001bd71) vitu2_page_scroll_pane_g2

0x0001,

0xfa1c,	// (0x0001e488) vitu2_page_scroll_pane_g

0xd30d,	// (0x0001bd79) vitu2_page_scroll_pane_t1

0x99c1,	// (0x0001842d) popup_char_count_window_g1

0xd31c,	// (0x0001bd88) popup_char_count_window_g2

0xcee1,	// (0x0001b94d) popup_char_count_window_g3

0x0002,

0xfa21,	// (0x0001e48d) popup_char_count_window_g

0xd325,	// (0x0001bd91) popup_char_count_window_t1

0x912c,	// (0x00017b98) main_vded2_pane

0xc438,	// (0x0001aea4) aid_size_cell_imed_line

0xc442,	// (0x0001aeae) grid_imed_line_width_pane

0xcb7f,	// (0x0001b5eb) vid4_indicators_pane_g4

0xd333,	// (0x0001bd9f) cell_imed_line_width_pane_ParamLimits

0xd333,	// (0x0001bd9f) cell_imed_line_width_pane

0xd347,	// (0x0001bdb3) cell_imed_line_width_pane_g1

0xd350,	// (0x0001bdbc) cell_imed_line_width_pane_g2

0x0001,

0xfa28,	// (0x0001e494) cell_imed_line_width_pane_g

0x5e51,	// (0x000148bd) main_vded2_pane_g1_ParamLimits

0x5e51,	// (0x000148bd) main_vded2_pane_g1

0x5e67,	// (0x000148d3) main_vded2_pane_g2_ParamLimits

0x5e67,	// (0x000148d3) main_vded2_pane_g2

0x0001,

0xfa2d,	// (0x0001e499) main_vded2_pane_g_ParamLimits

0xfa2d,	// (0x0001e499) main_vded2_pane_g

0x5e79,	// (0x000148e5) vded2_slider_pane_ParamLimits

0x5e79,	// (0x000148e5) vded2_slider_pane

0x5e89,	// (0x000148f5) aid_size_touch_vded2_end

0x5e93,	// (0x000148ff) aid_size_touch_vded2_playhead

0xd358,	// (0x0001bdc4) aid_size_touch_vded2_start

0xd360,	// (0x0001bdcc) vded2_slider_bg_pane

0xd369,	// (0x0001bdd5) vded2_slider_pane_g1

0xd372,	// (0x0001bdde) vded2_slider_pane_g2

0x5e9d,	// (0x00014909) vded2_slider_pane_g3

0x0002,

0xfa32,	// (0x0001e49e) vded2_slider_pane_g

0xd37a,	// (0x0001bde6) vded2_slider_bg_pane_g1

0xd383,	// (0x0001bdef) vded2_slider_bg_pane_g2

0xd38c,	// (0x0001bdf8) vded2_slider_bg_pane_g3

0x0002,

0xfa39,	// (0x0001e4a5) vded2_slider_bg_pane_g

0x2851,	// (0x000112bd) aid_postcard_touch_down_pane_ParamLimits

0x2851,	// (0x000112bd) aid_postcard_touch_down_pane

0x2867,	// (0x000112d3) aid_postcard_touch_up_pane_ParamLimits

0x2867,	// (0x000112d3) aid_postcard_touch_up_pane

0x912c,	// (0x00017b98) main_blid2_pane

0xba1a,	// (0x0001a486) popup_blid2_search_window

0x912c,	// (0x00017b98) blid2_gps_pane

0x912c,	// (0x00017b98) blid2_navig_pane

0x912c,	// (0x00017b98) blid2_search_pane

0x912c,	// (0x00017b98) blid2_tripm_pane

0x5ea8,	// (0x00014914) blid2_search_pane_g1_ParamLimits

0x5ea8,	// (0x00014914) blid2_search_pane_g1

0x5ec0,	// (0x0001492c) blid2_search_pane_t1_ParamLimits

0x5ec0,	// (0x0001492c) blid2_search_pane_t1

0x5ed2,	// (0x0001493e) aid_size_cell_blid2_gps_ParamLimits

0x5ed2,	// (0x0001493e) aid_size_cell_blid2_gps

0x5eea,	// (0x00014956) blid2_gps_pane_g1_ParamLimits

0x5eea,	// (0x00014956) blid2_gps_pane_g1

0x5efe,	// (0x0001496a) grid_blid2_satellite_pane_ParamLimits

0x5efe,	// (0x0001496a) grid_blid2_satellite_pane

0x5f18,	// (0x00014984) blid2_navig_pane_g1_ParamLimits

0x5f18,	// (0x00014984) blid2_navig_pane_g1

0x5f24,	// (0x00014990) blid2_navig_pane_t1_ParamLimits

0x5f24,	// (0x00014990) blid2_navig_pane_t1

0x5f3f,	// (0x000149ab) blid2_navig_pane_t2_ParamLimits

0x5f3f,	// (0x000149ab) blid2_navig_pane_t2

0x0001,

0xfa40,	// (0x0001e4ac) blid2_navig_pane_t_ParamLimits

0xfa40,	// (0x0001e4ac) blid2_navig_pane_t

0x5f5a,	// (0x000149c6) blid2_navig_ring_pane_ParamLimits

0x5f5a,	// (0x000149c6) blid2_navig_ring_pane

0x5f73,	// (0x000149df) blid2_speed_pane_ParamLimits

0x5f73,	// (0x000149df) blid2_speed_pane

0x5f7f,	// (0x000149eb) blid2_tripm_pane_g1_ParamLimits

0x5f7f,	// (0x000149eb) blid2_tripm_pane_g1

0x5f9a,	// (0x00014a06) blid2_tripm_pane_g2_ParamLimits

0x5f9a,	// (0x00014a06) blid2_tripm_pane_g2

0x5fae,	// (0x00014a1a) blid2_tripm_pane_g3_ParamLimits

0x5fae,	// (0x00014a1a) blid2_tripm_pane_g3

0x5fc2,	// (0x00014a2e) blid2_tripm_pane_g4_ParamLimits

0x5fc2,	// (0x00014a2e) blid2_tripm_pane_g4

0x5fd6,	// (0x00014a42) blid2_tripm_pane_g5_ParamLimits

0x5fd6,	// (0x00014a42) blid2_tripm_pane_g5

0x0005,

0xfa45,	// (0x0001e4b1) blid2_tripm_pane_g_ParamLimits

0xfa45,	// (0x0001e4b1) blid2_tripm_pane_g

0x5ffc,	// (0x00014a68) blid2_tripm_pane_t1_ParamLimits

0x5ffc,	// (0x00014a68) blid2_tripm_pane_t1

0x6017,	// (0x00014a83) blid2_tripm_pane_t2_ParamLimits

0x6017,	// (0x00014a83) blid2_tripm_pane_t2

0x6030,	// (0x00014a9c) blid2_tripm_pane_t3_ParamLimits

0x6030,	// (0x00014a9c) blid2_tripm_pane_t3

0x0003,

0xfa52,	// (0x0001e4be) blid2_tripm_pane_t_ParamLimits

0xfa52,	// (0x0001e4be) blid2_tripm_pane_t

0x6077,	// (0x00014ae3) cell_blid2_satellite_pane_ParamLimits

0x6077,	// (0x00014ae3) cell_blid2_satellite_pane

0x6095,	// (0x00014b01) cell_blid2_satellite_pane_g1

0xd395,	// (0x0001be01) cell_blid2_satellite_pane_t1

0x9b9b,	// (0x00018607) blid2_speed_pane_g1

0xd3a3,	// (0x0001be0f) blid2_speed_pane_t1

0xd3b1,	// (0x0001be1d) blid2_speed_pane_t2

0x0001,

0xfa5b,	// (0x0001e4c7) blid2_speed_pane_t

0x9b9b,	// (0x00018607) blid2_navig_ring_pane_g1

0x609e,	// (0x00014b0a) blid2_navig_ring_pane_g2

0x60a6,	// (0x00014b12) blid2_navig_ring_pane_g3

0x60ae,	// (0x00014b1a) blid2_navig_ring_pane_g4

0x60b6,	// (0x00014b22) blid2_navig_ring_pane_g5

0x0004,

0xfa60,	// (0x0001e4cc) blid2_navig_ring_pane_g

0x912c,	// (0x00017b98) bg_popup_window_pane_cp011

0xd3bf,	// (0x0001be2b) popup_blid2_search_window_g1

0xd3c7,	// (0x0001be33) popup_blid2_search_window_t1

0xd3d5,	// (0x0001be41) popup_blid2_search_window_t2

0x0001,

0xfa6b,	// (0x0001e4d7) popup_blid2_search_window_t

0x9c9b,	// (0x00018707) main_browser_pane_g1

0x9926,	// (0x00018392) main_browser_pane_ParamLimits

0x919b,	// (0x00017c07) bg_button_pane_cp011_ParamLimits

0x50a4,	// (0x00013b10) cell_vitu2_function_pane_g1_ParamLimits

0xa72e,	// (0x0001919a) bg_popup_sub_pane_cp22_ParamLimits

0x597b,	// (0x000143e7) input_focus_pane_cp08_ParamLimits

0x5996,	// (0x00014402) popup_vitu2_query_button_pane_ParamLimits

0x5996,	// (0x00014402) popup_vitu2_query_button_pane

0x59a5,	// (0x00014411) popup_vitu2_query_input_button_pane

0xcf26,	// (0x0001b992) popup_vitu2_query_window_g1_ParamLimits

0x59ad,	// (0x00014419) popup_vitu2_query_window_g2_ParamLimits

0xf96c,	// (0x0001e3d8) popup_vitu2_query_window_g_ParamLimits

0x912c,	// (0x00017b98) bg_button_pane_cp026

0x60be,	// (0x00014b2a) popup_vitu2_query_input_button_pane_g1

0x912c,	// (0x00017b98) bg_button_pane_cp025

0xd3e3,	// (0x0001be4f) popup_vitu2_query_button_pane_t1

0x376e,	// (0x000121da) main_mp3_pane_t6

0x377c,	// (0x000121e8) popup_slider_window_cp01

0xcaeb,	// (0x0001b557) cam4_battery_pane

0xcb3e,	// (0x0001b5aa) cam4_battery_pane_cp02

0xd20b,	// (0x0001bc77) cam4_battery_pane_cp01

0xd20b,	// (0x0001bc77) cam4_battery_pane_cp03

0x9b9b,	// (0x00018607) cam4_battery_pane_g1

0xd3f1,	// (0x0001be5d) cam4_battery_pane_g2

0x0001,

0xfa70,	// (0x0001e4dc) cam4_battery_pane_g

0xbdd9,	// (0x0001a845) popup_blid_sat_info2_window_t11

0xa476,	// (0x00018ee2) aid_size_touch_mv_arrow_left_ParamLimits

0xa4a1,	// (0x00018f0d) aid_size_touch_mv_arrow_right_ParamLimits

0xa4ff,	// (0x00018f6b) navi_pane_g1_ParamLimits

0xa50b,	// (0x00018f77) navi_pane_g2_ParamLimits

0xa539,	// (0x00018fa5) navi_pane_g3_ParamLimits

0xf334,	// (0x0001dda0) navi_pane_g_ParamLimits

0x248a,	// (0x00010ef6) navi_pane_mv_t1_ParamLimits

0x42e9,	// (0x00012d55) grid_imed_effect_pane_ParamLimits

0x13bd,	// (0x0000fe29) aid_placing_vt_slider_lsc

0x9bea,	// (0x00018656) aid_placing_vt_slider_prt

0x919b,	// (0x00017c07) bg_tb_trans_pane_cp01_ParamLimits

0xc077,	// (0x0001aae3) popup_image_details_window_g1_ParamLimits

0xc08a,	// (0x0001aaf6) popup_image_details_window_g2_ParamLimits

0xc09f,	// (0x0001ab0b) popup_image_details_window_g3_ParamLimits

0xc09f,	// (0x0001ab0b) popup_image_details_window_g3

0xf673,	// (0x0001e0df) popup_image_details_window_g_ParamLimits

0xc0b3,	// (0x0001ab1f) popup_image_details_window_t1_ParamLimits

0xc0c5,	// (0x0001ab31) popup_image_details_window_t2_ParamLimits

0xc0de,	// (0x0001ab4a) popup_image_details_window_t3_ParamLimits

0xc0f2,	// (0x0001ab5e) popup_image_details_window_t4_ParamLimits

0xc10d,	// (0x0001ab79) popup_image_details_window_t5_ParamLimits

0xf67a,	// (0x0001e0e6) popup_image_details_window_t_ParamLimits

0x5d11,	// (0x0001477d) cl_header_name_pane_ParamLimits

0x5d11,	// (0x0001477d) cl_header_name_pane

0x60c6,	// (0x00014b32) cl_header_name_pane_t1_ParamLimits

0x60c6,	// (0x00014b32) cl_header_name_pane_t1

0x60e7,	// (0x00014b53) cl_header_name_pane_t2_ParamLimits

0x60e7,	// (0x00014b53) cl_header_name_pane_t2

0x6129,	// (0x00014b95) cl_header_name_pane_t3_ParamLimits

0x6129,	// (0x00014b95) cl_header_name_pane_t3

0x0002,

0xfa75,	// (0x0001e4e1) cl_header_name_pane_t_ParamLimits

0xfa75,	// (0x0001e4e1) cl_header_name_pane_t

0xa5c8,	// (0x00019034) navi_pane_mv_g2_ParamLimits

0xcbc9,	// (0x0001b635) field_vitu2_entry_pane_g1_ParamLimits

0xcbd5,	// (0x0001b641) field_vitu2_entry_pane_g2_ParamLimits

0xa6f8,	// (0x00019164) field_vitu2_entry_pane_g3_ParamLimits

0xa6f8,	// (0x00019164) field_vitu2_entry_pane_g3

0xf875,	// (0x0001e2e1) field_vitu2_entry_pane_g_ParamLimits

0x4f34,	// (0x000139a0) cell_vitu2_itu_pane_g1_ParamLimits

0x4f4c,	// (0x000139b8) cell_vitu2_itu_pane_g2_ParamLimits

0x4f4c,	// (0x000139b8) cell_vitu2_itu_pane_g2

0x0001,

0xf881,	// (0x0001e2ed) cell_vitu2_itu_pane_g_ParamLimits

0xf881,	// (0x0001e2ed) cell_vitu2_itu_pane_g

0x919b,	// (0x00017c07) bg_vkb2_func_pane_cp05_ParamLimits

0x919b,	// (0x00017c07) bg_vkb2_func_pane_cp05

0x919b,	// (0x00017c07) bg_vkb2_func_pane_cp03

0x919b,	// (0x00017c07) bg_vkb2_func_pane_cp04

0x919b,	// (0x00017c07) bg_vkb2_func_pane_cp10_ParamLimits

0x919b,	// (0x00017c07) bg_vkb2_func_pane_cp10

0x5cb5,	// (0x00014721) bg_vkb2_func_pane_cp08

0x5c8e,	// (0x000146fa) bg_vkb2_func_pane_cp06

0x5c9a,	// (0x00014706) bg_vkb2_func_pane_cp07

0xd2d3,	// (0x0001bd3f) bg_vkb2_func_pane_cp11_ParamLimits

0xd2d3,	// (0x0001bd3f) bg_vkb2_func_pane_cp11

0xd2e8,	// (0x0001bd54) bg_vkb2_func_pane_cp12_ParamLimits

0xd2e8,	// (0x0001bd54) bg_vkb2_func_pane_cp12

0x912c,	// (0x00017b98) bg_vkb2_func_pane_cp09

0xcc10,	// (0x0001b67c) bg_vkb2_func_pane_g1

0x9dac,	// (0x00018818) bg_vkb2_func_pane_g2

0xcc18,	// (0x0001b684) bg_vkb2_func_pane_g3

0xcc20,	// (0x0001b68c) bg_vkb2_func_pane_g4

0xce9e,	// (0x0001b90a) bg_vkb2_func_pane_g5

0xcc38,	// (0x0001b6a4) bg_vkb2_func_pane_g6

0xcc40,	// (0x0001b6ac) bg_vkb2_func_pane_g7

0xcc30,	// (0x0001b69c) bg_vkb2_func_pane_g8

0x9d8c,	// (0x000187f8) bg_vkb2_func_pane_g9

0x0008,

0xfa7c,	// (0x0001e4e8) bg_vkb2_func_pane_g

0x5fea,	// (0x00014a56) blid2_tripm_pane_g6_ParamLimits

0x5fea,	// (0x00014a56) blid2_tripm_pane_g6

0xc9bc,	// (0x0001b428) mp4_progress_pane_g1

0x6063,	// (0x00014acf) blid2_tripm_values_pane_ParamLimits

0x6063,	// (0x00014acf) blid2_tripm_values_pane

0x615a,	// (0x00014bc6) blid2_tripm_values_pane_t1

0x6168,	// (0x00014bd4) blid2_tripm_values_pane_t2

0x6176,	// (0x00014be2) blid2_tripm_values_pane_t3

0x6184,	// (0x00014bf0) blid2_tripm_values_pane_t4

0x6192,	// (0x00014bfe) blid2_tripm_values_pane_t5

0x61a0,	// (0x00014c0c) blid2_tripm_values_pane_t6

0x61ae,	// (0x00014c1a) blid2_tripm_values_pane_t7

0x61bc,	// (0x00014c28) blid2_tripm_values_pane_t8

0x61ca,	// (0x00014c36) blid2_tripm_values_pane_t9

0x0008,

0xfa8f,	// (0x0001e4fb) blid2_tripm_values_pane_t

0x13ff,	// (0x0000fe6b) call_video_pane_t1_ParamLimits

0x141d,	// (0x0000fe89) call_video_pane_t2_ParamLimits

0xf1e2,	// (0x0001dc4e) call_video_pane_t_ParamLimits

0x274d,	// (0x000111b9) msg_header_pane_g1_ParamLimits

0xa7e3,	// (0x0001924f) msg_header_pane_g2_ParamLimits

0xa7e3,	// (0x0001924f) msg_header_pane_g2

0x0001,

0xf3d7,	// (0x0001de43) msg_header_pane_g_ParamLimits

0xf3d7,	// (0x0001de43) msg_header_pane_g

0x9926,	// (0x00018392) main_clock2_pane_ParamLimits

0x3fea,	// (0x00012a56) grid_clock2_toolbar_pane_ParamLimits

0x3fea,	// (0x00012a56) grid_clock2_toolbar_pane

0x3fea,	// (0x00012a56) listscroll_clock2_pane_ParamLimits

0x3fea,	// (0x00012a56) listscroll_clock2_pane

0x40ce,	// (0x00012b3a) main_clock2_pane_t3_ParamLimits

0x40ce,	// (0x00012b3a) main_clock2_pane_t3

0x40f2,	// (0x00012b5e) main_clock2_pane_t4_ParamLimits

0x40f2,	// (0x00012b5e) main_clock2_pane_t4

0xd3fb,	// (0x0001be67) cell_clock2_toolbar_pane

0xd403,	// (0x0001be6f) cell_clock2_toolbar_pane_cp01

0xd403,	// (0x0001be6f) cell_clock2_toolbar_pane_cp02

0xd40b,	// (0x0001be77) cell_clock2_toolbar_pane_cp03

0xd413,	// (0x0001be7f) list_clock2_pane

0xa3fb,	// (0x00018e67) scroll_pane_cp10

0xd41b,	// (0x0001be87) list_single_clock2_pane_ParamLimits

0xd41b,	// (0x0001be87) list_single_clock2_pane

0x9b5b,	// (0x000185c7) list_highlight_pane_cp08

0xd428,	// (0x0001be94) list_single_clock2_pane_t1

0xd436,	// (0x0001bea2) list_single_clock2_pane_t2

0x0001,

0xfaa2,	// (0x0001e50e) list_single_clock2_pane_t

0x912c,	// (0x00017b98) bg_button_pane_cp10

0xd444,	// (0x0001beb0) cell_clock2_toolbar_pane_g1

0x27dd,	// (0x00011249) aid_main_viewer_pane_g1_ParamLimits

0x27dd,	// (0x00011249) aid_main_viewer_pane_g1

0x27eb,	// (0x00011257) aid_main_viewer_pane_g2_ParamLimits

0x27eb,	// (0x00011257) aid_main_viewer_pane_g2

0x27f9,	// (0x00011265) aid_main_viewer_pane_g3_ParamLimits

0x27f9,	// (0x00011265) aid_main_viewer_pane_g3

0x2808,	// (0x00011274) aid_main_viewer_pane_g4_ParamLimits

0x2808,	// (0x00011274) aid_main_viewer_pane_g4

0x0003,

0xf3e8,	// (0x0001de54) aid_main_viewer_pane_g_ParamLimits

0xf3e8,	// (0x0001de54) aid_main_viewer_pane_g

0x3151,	// (0x00011bbd) main_calc_pane_ParamLimits

0x3165,	// (0x00011bd1) main_dialer2_pane_ParamLimits

0x912c,	// (0x00017b98) main_cam6_pane

0x912c,	// (0x00017b98) main_vid6_pane

0x3ff6,	// (0x00012a62) listscroll_gen_pane_cp06_ParamLimits

0x3ff6,	// (0x00012a62) listscroll_gen_pane_cp06

0x4115,	// (0x00012b81) main_clock2_pane_t5_ParamLimits

0x4115,	// (0x00012b81) main_clock2_pane_t5

0x4173,	// (0x00012bdf) aid_call2_pane_cp10_ParamLimits

0x4185,	// (0x00012bf1) aid_call_pane_cp10_ParamLimits

0xa46a,	// (0x00018ed6) popup_clock_analogue_window_cp10_g1_ParamLimits

0xa46a,	// (0x00018ed6) popup_clock_analogue_window_cp10_g2_ParamLimits

0x4197,	// (0x00012c03) popup_clock_analogue_window_cp10_g3_ParamLimits

0x4197,	// (0x00012c03) popup_clock_analogue_window_cp10_g4_ParamLimits

0xa46a,	// (0x00018ed6) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf72f,	// (0x0001e19b) popup_clock_analogue_window_cp10_g_ParamLimits

0x41ad,	// (0x00012c19) popup_clock_analogue_window_cp10_t1_ParamLimits

0x46b6,	// (0x00013122) cell_dialer2_keypad_pane_g2_ParamLimits

0x46b6,	// (0x00013122) cell_dialer2_keypad_pane_g2

0x0001,

0xf814,	// (0x0001e280) cell_dialer2_keypad_pane_g_ParamLimits

0xf814,	// (0x0001e280) cell_dialer2_keypad_pane_g

0x46d2,	// (0x0001313e) cell_dialer2_keypad_pane_t1

0x53bf,	// (0x00013e2b) main_cset_text2_pane_ParamLimits

0x53bf,	// (0x00013e2b) main_cset_text2_pane

0xd112,	// (0x0001bb7e) area_vitu2_query_pane_g1_ParamLimits

0x5c2f,	// (0x0001469b) area_vitu2_query_pane_g2_ParamLimits

0xf9bf,	// (0x0001e42b) area_vitu2_query_pane_g_ParamLimits

0xd196,	// (0x0001bc02) area_vitu2_query_pane_t7_ParamLimits

0xd196,	// (0x0001bc02) area_vitu2_query_pane_t7

0x5c8e,	// (0x000146fa) bg_button_pane_cp018_ParamLimits

0x5c9a,	// (0x00014706) bg_button_pane_cp021_ParamLimits

0x5ca6,	// (0x00014712) bg_button_pane_cp022_ParamLimits

0x5cb5,	// (0x00014721) bg_vkb2_func_pane_cp08_ParamLimits

0x5c8e,	// (0x000146fa) bg_vkb2_func_pane_cp06_ParamLimits

0x5c9a,	// (0x00014706) bg_vkb2_func_pane_cp07_ParamLimits

0x5cc5,	// (0x00014731) input_focus_pane_cp09_ParamLimits

0x61d8,	// (0x00014c44) cam6_autofocus_pane_ParamLimits

0x61d8,	// (0x00014c44) cam6_autofocus_pane

0x61e4,	// (0x00014c50) cam6_image_uncrop_pane_ParamLimits

0x61e4,	// (0x00014c50) cam6_image_uncrop_pane

0x61f4,	// (0x00014c60) cam6_indi_pane_ParamLimits

0x61f4,	// (0x00014c60) cam6_indi_pane

0x620a,	// (0x00014c76) cam6_mode_pane_ParamLimits

0x620a,	// (0x00014c76) cam6_mode_pane

0x621c,	// (0x00014c88) cam6_timer_pane_ParamLimits

0x621c,	// (0x00014c88) cam6_timer_pane

0x6228,	// (0x00014c94) cam6_zoom_pane_ParamLimits

0x6228,	// (0x00014c94) cam6_zoom_pane

0x6235,	// (0x00014ca1) cam6_mode_pane_g1_ParamLimits

0x6235,	// (0x00014ca1) cam6_mode_pane_g1

0x6245,	// (0x00014cb1) cam6_mode_pane_g2_ParamLimits

0x6245,	// (0x00014cb1) cam6_mode_pane_g2

0x6255,	// (0x00014cc1) cam6_mode_pane_g3_ParamLimits

0x6255,	// (0x00014cc1) cam6_mode_pane_g3

0x6265,	// (0x00014cd1) cam6_mode_pane_g4_ParamLimits

0x6265,	// (0x00014cd1) cam6_mode_pane_g4

0x0003,

0xfaa7,	// (0x0001e513) cam6_mode_pane_g_ParamLimits

0xfaa7,	// (0x0001e513) cam6_mode_pane_g

0xbb8f,	// (0x0001a5fb) bg_tb_trans_pane_cp08_ParamLimits

0xbb8f,	// (0x0001a5fb) bg_tb_trans_pane_cp08

0xd45a,	// (0x0001bec6) cam6_battery_pane_ParamLimits

0xd45a,	// (0x0001bec6) cam6_battery_pane

0xd470,	// (0x0001bedc) cam6_indi_pane_g1_ParamLimits

0xd470,	// (0x0001bedc) cam6_indi_pane_g1

0xd482,	// (0x0001beee) cam6_indi_pane_g2_ParamLimits

0xd482,	// (0x0001beee) cam6_indi_pane_g2

0xd494,	// (0x0001bf00) cam6_indi_pane_g3_ParamLimits

0xd494,	// (0x0001bf00) cam6_indi_pane_g3

0x0002,

0xfab0,	// (0x0001e51c) cam6_indi_pane_g_ParamLimits

0xfab0,	// (0x0001e51c) cam6_indi_pane_g

0xd4a6,	// (0x0001bf12) cam6_indi_pane_t1_ParamLimits

0xd4a6,	// (0x0001bf12) cam6_indi_pane_t1

0x4cdc,	// (0x00013748) cam6_autofocus_pane_g1

0x4ce4,	// (0x00013750) cam6_autofocus_pane_g2

0x4cec,	// (0x00013758) cam6_autofocus_pane_g3

0x4cf4,	// (0x00013760) cam6_autofocus_pane_g4

0x0003,

0xfab7,	// (0x0001e523) cam6_autofocus_pane_g

0xd4cc,	// (0x0001bf38) cam6_timer_pane_g1

0xd4d4,	// (0x0001bf40) cam6_timer_pane_t1

0xd4e2,	// (0x0001bf4e) cam6_zoom_cont_pane

0xd4ea,	// (0x0001bf56) cam6_zoom_pane_g1

0xd4f3,	// (0x0001bf5f) cam6_zoom_pane_g2

0x6275,	// (0x00014ce1) cam6_zoom_pane_g3

0x0002,

0xfac0,	// (0x0001e52c) cam6_zoom_pane_g

0x9b9b,	// (0x00018607) cam6_battery_pane_g1

0x9b9b,	// (0x00018607) cam6_battery_pane_g2

0x0001,

0xf398,	// (0x0001de04) cam6_battery_pane_g

0xd4ea,	// (0x0001bf56) cam6_zoom_cont_pane_g1

0xd4f3,	// (0x0001bf5f) cam6_zoom_cont_pane_g2

0xd4fc,	// (0x0001bf68) cam6_zoom_cont_pane_g3

0x0002,

0xfac7,	// (0x0001e533) cam6_zoom_cont_pane_g

0x6293,	// (0x00014cff) cam6_mode_pane_cp_ParamLimits

0x6293,	// (0x00014cff) cam6_mode_pane_cp

0x62a5,	// (0x00014d11) cam6_zoom_pane_cp_ParamLimits

0x62a5,	// (0x00014d11) cam6_zoom_pane_cp

0x62b1,	// (0x00014d1d) vid6_image_uncrop_cif_pane_ParamLimits

0x62b1,	// (0x00014d1d) vid6_image_uncrop_cif_pane

0x62c1,	// (0x00014d2d) vid6_image_uncrop_nhd_pane_ParamLimits

0x62c1,	// (0x00014d2d) vid6_image_uncrop_nhd_pane

0x62d0,	// (0x00014d3c) vid6_image_uncrop_vga_pane_ParamLimits

0x62d0,	// (0x00014d3c) vid6_image_uncrop_vga_pane

0x62df,	// (0x00014d4b) vid6_image_uncrop_wvga_pane_ParamLimits

0x62df,	// (0x00014d4b) vid6_image_uncrop_wvga_pane

0x62ee,	// (0x00014d5a) vid6_indi_pane_ParamLimits

0x62ee,	// (0x00014d5a) vid6_indi_pane

0xbb8f,	// (0x0001a5fb) bg_tb_trans_pane_cp09_ParamLimits

0xbb8f,	// (0x0001a5fb) bg_tb_trans_pane_cp09

0xd514,	// (0x0001bf80) cam6_battery_pane_cp_ParamLimits

0xd514,	// (0x0001bf80) cam6_battery_pane_cp

0xd520,	// (0x0001bf8c) vid6_indi_pane_g1_ParamLimits

0xd520,	// (0x0001bf8c) vid6_indi_pane_g1

0xd532,	// (0x0001bf9e) vid6_indi_pane_g2_ParamLimits

0xd532,	// (0x0001bf9e) vid6_indi_pane_g2

0xd544,	// (0x0001bfb0) vid6_indi_pane_g3_ParamLimits

0xd544,	// (0x0001bfb0) vid6_indi_pane_g3

0xd559,	// (0x0001bfc5) vid6_indi_pane_g4_ParamLimits

0xd559,	// (0x0001bfc5) vid6_indi_pane_g4

0xd56e,	// (0x0001bfda) vid6_indi_pane_g5_ParamLimits

0xd56e,	// (0x0001bfda) vid6_indi_pane_g5

0x0004,

0xface,	// (0x0001e53a) vid6_indi_pane_g_ParamLimits

0xface,	// (0x0001e53a) vid6_indi_pane_g

0xd588,	// (0x0001bff4) vid6_indi_pane_t1_ParamLimits

0xd588,	// (0x0001bff4) vid6_indi_pane_t1

0xd59e,	// (0x0001c00a) vid6_indi_pane_t2_ParamLimits

0xd59e,	// (0x0001c00a) vid6_indi_pane_t2

0xd5c6,	// (0x0001c032) vid6_indi_pane_t3_ParamLimits

0xd5c6,	// (0x0001c032) vid6_indi_pane_t3

0xd5ee,	// (0x0001c05a) vid6_indi_pane_t4_ParamLimits

0xd5ee,	// (0x0001c05a) vid6_indi_pane_t4

0x0003,

0xfad9,	// (0x0001e545) vid6_indi_pane_t_ParamLimits

0xfad9,	// (0x0001e545) vid6_indi_pane_t

0xd612,	// (0x0001c07e) wait_bar_pane_cp08

0x6306,	// (0x00014d72) main_cset_text2_pane_t1_ParamLimits

0x6306,	// (0x00014d72) main_cset_text2_pane_t1

0x627e,	// (0x00014cea) listscroll_gen_pane_cp06_t1_ParamLimits

0x627e,	// (0x00014cea) listscroll_gen_pane_cp06_t1

0x912c,	// (0x00017b98) main_cam6_set_pane

0x9892,	// (0x000182fe) bg_tb_trans_pane_cp06_ParamLimits

0xcaf3,	// (0x0001b55f) cam4_indicators_pane_g1_ParamLimits

0xcb04,	// (0x0001b570) cam4_indicators_pane_g2_ParamLimits

0xf851,	// (0x0001e2bd) cam4_indicators_pane_g_ParamLimits

0xcb1c,	// (0x0001b588) cam4_indicators_pane_t1_ParamLimits

0x919b,	// (0x00017c07) bg_tb_trans_pane_cp07_ParamLimits

0xcb46,	// (0x0001b5b2) vid4_indicators_pane_g1_ParamLimits

0xcb5a,	// (0x0001b5c6) vid4_indicators_pane_g2_ParamLimits

0xcb6e,	// (0x0001b5da) vid4_indicators_pane_g3_ParamLimits

0xcb7f,	// (0x0001b5eb) vid4_indicators_pane_g4_ParamLimits

0xf863,	// (0x0001e2cf) vid4_indicators_pane_g_ParamLimits

0xcb9b,	// (0x0001b607) vid4_indicators_pane_t1_ParamLimits

0xd213,	// (0x0001bc7f) vid4_progress_pane_g1_ParamLimits

0xd223,	// (0x0001bc8f) vid4_progress_pane_g2_ParamLimits

0x5e04,	// (0x00014870) vid4_progress_pane_g3_ParamLimits

0xd233,	// (0x0001bc9f) vid4_progress_pane_g4_ParamLimits

0xfa0a,	// (0x0001e476) vid4_progress_pane_g_ParamLimits

0x5e16,	// (0x00014882) vid4_progress_pane_t1_ParamLimits

0xd24b,	// (0x0001bcb7) vid4_progress_pane_t2_ParamLimits

0xd260,	// (0x0001bccc) vid4_progress_pane_t3_ParamLimits

0xfa15,	// (0x0001e481) vid4_progress_pane_t_ParamLimits

0x5e2c,	// (0x00014898) wait_bar_pane_cp07_ParamLimits

0x6324,	// (0x00014d90) main_cam6_set_pane_g2_ParamLimits

0x6324,	// (0x00014d90) main_cam6_set_pane_g2

0x6348,	// (0x00014db4) main_cset6_listscroll_pane_ParamLimits

0x6348,	// (0x00014db4) main_cset6_listscroll_pane

0x6364,	// (0x00014dd0) main_cset6_slider_pane_ParamLimits

0x6364,	// (0x00014dd0) main_cset6_slider_pane

0x637a,	// (0x00014de6) main_cset6_text2_pane_ParamLimits

0x637a,	// (0x00014de6) main_cset6_text2_pane

0xd621,	// (0x0001c08d) main_cset6_text_pane

0xd629,	// (0x0001c095) main_cset_list_pane_copy1_ParamLimits

0xd629,	// (0x0001c095) main_cset_list_pane_copy1

0xd639,	// (0x0001c0a5) scroll_pane_cp028_copy1

0x6388,	// (0x00014df4) cset_list_set_pane_copy1

0x639a,	// (0x00014e06) aid_position_infowindow_above_copy1

0x63a2,	// (0x00014e0e) aid_position_infowindow_below_copy1

0xd642,	// (0x0001c0ae) cset_list_set_pane_g1_copy1

0xd64a,	// (0x0001c0b6) cset_list_set_pane_g3_copy1_ParamLimits

0xd64a,	// (0x0001c0b6) cset_list_set_pane_g3_copy1

0xd659,	// (0x0001c0c5) cset_list_set_pane_t1_copy1_ParamLimits

0xd659,	// (0x0001c0c5) cset_list_set_pane_t1_copy1

0x919b,	// (0x00017c07) list_highlight_pane_cp021_copy1_ParamLimits

0x919b,	// (0x00017c07) list_highlight_pane_cp021_copy1

0xd66e,	// (0x0001c0da) cset6_slider_pane_ParamLimits

0xd66e,	// (0x0001c0da) cset6_slider_pane

0xd69a,	// (0x0001c106) main_cset6_slider_pane_g1_ParamLimits

0xd69a,	// (0x0001c106) main_cset6_slider_pane_g1

0x63aa,	// (0x00014e16) main_cset6_slider_pane_g2_ParamLimits

0x63aa,	// (0x00014e16) main_cset6_slider_pane_g2

0xd6c2,	// (0x0001c12e) main_cset6_slider_pane_g3_ParamLimits

0xd6c2,	// (0x0001c12e) main_cset6_slider_pane_g3

0x63d2,	// (0x00014e3e) main_cset6_slider_pane_g4_ParamLimits

0x63d2,	// (0x00014e3e) main_cset6_slider_pane_g4

0xd6ce,	// (0x0001c13a) main_cset6_slider_pane_g5_ParamLimits

0xd6ce,	// (0x0001c13a) main_cset6_slider_pane_g5

0xcd51,	// (0x0001b7bd) main_cset6_slider_pane_g7_ParamLimits

0xcd51,	// (0x0001b7bd) main_cset6_slider_pane_g7

0xcd5d,	// (0x0001b7c9) main_cset6_slider_pane_g8_ParamLimits

0xcd5d,	// (0x0001b7c9) main_cset6_slider_pane_g8

0x5465,	// (0x00013ed1) main_cset6_slider_pane_g9_ParamLimits

0x5465,	// (0x00013ed1) main_cset6_slider_pane_g9

0x5471,	// (0x00013edd) main_cset6_slider_pane_g10_ParamLimits

0x5471,	// (0x00013edd) main_cset6_slider_pane_g10

0x547d,	// (0x00013ee9) main_cset6_slider_pane_g11_ParamLimits

0x547d,	// (0x00013ee9) main_cset6_slider_pane_g11

0x5489,	// (0x00013ef5) main_cset6_slider_pane_g12_ParamLimits

0x5489,	// (0x00013ef5) main_cset6_slider_pane_g12

0x5495,	// (0x00013f01) main_cset6_slider_pane_g13_ParamLimits

0x5495,	// (0x00013f01) main_cset6_slider_pane_g13

0x54a1,	// (0x00013f0d) main_cset6_slider_pane_g14_ParamLimits

0x54a1,	// (0x00013f0d) main_cset6_slider_pane_g14

0x63de,	// (0x00014e4a) main_cset6_slider_pane_g15_ParamLimits

0x63de,	// (0x00014e4a) main_cset6_slider_pane_g15

0xcef6,	// (0x0001b962) main_cset6_slider_pane_g16_ParamLimits

0xcef6,	// (0x0001b962) main_cset6_slider_pane_g16

0xcf02,	// (0x0001b96e) main_cset6_slider_pane_g17_ParamLimits

0xcf02,	// (0x0001b96e) main_cset6_slider_pane_g17

0x0011,

0xfae2,	// (0x0001e54e) main_cset6_slider_pane_g_ParamLimits

0xfae2,	// (0x0001e54e) main_cset6_slider_pane_g

0xd6da,	// (0x0001c146) main_cset6_slider_pane_t1_ParamLimits

0xd6da,	// (0x0001c146) main_cset6_slider_pane_t1

0x640e,	// (0x00014e7a) main_cset6_slider_pane_t2_ParamLimits

0x640e,	// (0x00014e7a) main_cset6_slider_pane_t2

0x6439,	// (0x00014ea5) main_cset6_slider_pane_t3_ParamLimits

0x6439,	// (0x00014ea5) main_cset6_slider_pane_t3

0x6464,	// (0x00014ed0) main_cset6_slider_pane_t4_ParamLimits

0x6464,	// (0x00014ed0) main_cset6_slider_pane_t4

0x648f,	// (0x00014efb) main_cset6_slider_pane_t5_ParamLimits

0x648f,	// (0x00014efb) main_cset6_slider_pane_t5

0xd71b,	// (0x0001c187) main_cset6_slider_pane_t7_ParamLimits

0xd71b,	// (0x0001c187) main_cset6_slider_pane_t7

0x64ba,	// (0x00014f26) main_cset6_slider_pane_t8_ParamLimits

0x64ba,	// (0x00014f26) main_cset6_slider_pane_t8

0x64de,	// (0x00014f4a) main_cset6_slider_pane_t9_ParamLimits

0x64de,	// (0x00014f4a) main_cset6_slider_pane_t9

0x6502,	// (0x00014f6e) main_cset6_slider_pane_t10_ParamLimits

0x6502,	// (0x00014f6e) main_cset6_slider_pane_t10

0x6526,	// (0x00014f92) main_cset6_slider_pane_t11_ParamLimits

0x6526,	// (0x00014f92) main_cset6_slider_pane_t11

0xd751,	// (0x0001c1bd) main_cset6_slider_pane_t14_ParamLimits

0xd751,	// (0x0001c1bd) main_cset6_slider_pane_t14

0xd78a,	// (0x0001c1f6) main_cset6_slider_pane_t15_ParamLimits

0xd78a,	// (0x0001c1f6) main_cset6_slider_pane_t15

0x000b,

0xfb07,	// (0x0001e573) main_cset6_slider_pane_t_ParamLimits

0xfb07,	// (0x0001e573) main_cset6_slider_pane_t

0xc65a,	// (0x0001b0c6) cset_slider_pane_g1_copy1

0xce3f,	// (0x0001b8ab) cset_slider_pane_g2_copy1

0xce48,	// (0x0001b8b4) cset_slider_pane_g3_copy1

0x912c,	// (0x00017b98) bg_popup_sub_pane_cp011_copy1

0xd7cc,	// (0x0001c238) main_cset_text_pane_g1_copy1

0xcf3a,	// (0x0001b9a6) main_cset_text_pane_t1_copy1

0xcf48,	// (0x0001b9b4) main_cset_text_pane_t2_copy1

0xcf56,	// (0x0001b9c2) main_cset_text_pane_t3_copy1

0xcf64,	// (0x0001b9d0) main_cset_text_pane_t4_copy1

0xcf72,	// (0x0001b9de) main_cset_text_pane_t5_copy1

0xd7d4,	// (0x0001c240) main_cset_text_pane_t6_copy1

0xd7e2,	// (0x0001c24e) main_cset_text_pane_t7_copy1

0x6306,	// (0x00014d72) main_cset_text2_pane_t1_copy1

0x919b,	// (0x00017c07) main_ncimui_pane

0x33a9,	// (0x00011e15) popup_query_ncimui_window_ParamLimits

0x33a9,	// (0x00011e15) popup_query_ncimui_window

0xc1ea,	// (0x0001ac56) field_cale_ev2_pane_g4_ParamLimits

0xc1ea,	// (0x0001ac56) field_cale_ev2_pane_g4

0x4595,	// (0x00013001) cell_video_dialer_keypad_pane_g2_ParamLimits

0x4595,	// (0x00013001) cell_video_dialer_keypad_pane_g2

0x0001,

0xf7eb,	// (0x0001e257) cell_video_dialer_keypad_pane_g_ParamLimits

0xf7eb,	// (0x0001e257) cell_video_dialer_keypad_pane_g

0x45ad,	// (0x00013019) cell_video_dialer_keypad_pane_t1

0x912c,	// (0x00017b98) bg_popup_window_pane_cp012

0xb976,	// (0x0001a3e2) heading_pane_cp06

0xd80e,	// (0x0001c27a) ncim_query_content_pane

0x912c,	// (0x00017b98) bg_popup_heading_pane_cp01

0xd816,	// (0x0001c282) ncim_heading_pane_t1

0xd824,	// (0x0001c290) ncim_indicator_popup_pane

0xd836,	// (0x0001c2a2) ncim_query_button_pane

0xd84a,	// (0x0001c2b6) ncim_query_content_pane_t1

0xd85c,	// (0x0001c2c8) ncim_query_content_pane_t2

0x0005,

0xfb4b,	// (0x0001e5b7) ncim_query_content_pane_t

0xd896,	// (0x0001c302) ncim_query_list_pane

0xd8a8,	// (0x0001c314) ncim_query_popup_pane

0xd824,	// (0x0001c290) ncim_indicator_popup_pane_ParamLimits

0x6690,	// (0x000150fc) ncim_query_content_pane_g1_ParamLimits

0x6690,	// (0x000150fc) ncim_query_content_pane_g1

0xd84a,	// (0x0001c2b6) ncim_query_content_pane_t1_ParamLimits

0xd85c,	// (0x0001c2c8) ncim_query_content_pane_t2_ParamLimits

0x669c,	// (0x00015108) ncim_query_content_pane_t3_ParamLimits

0x669c,	// (0x00015108) ncim_query_content_pane_t3

0x66c4,	// (0x00015130) ncim_query_content_pane_t4_ParamLimits

0x66c4,	// (0x00015130) ncim_query_content_pane_t4

0x66ec,	// (0x00015158) ncim_query_content_pane_t5_ParamLimits

0x66ec,	// (0x00015158) ncim_query_content_pane_t5

0xd86e,	// (0x0001c2da) ncim_query_content_pane_t6_ParamLimits

0xd86e,	// (0x0001c2da) ncim_query_content_pane_t6

0xfb4b,	// (0x0001e5b7) ncim_query_content_pane_t_ParamLimits

0xd896,	// (0x0001c302) ncim_query_list_pane_ParamLimits

0xd8a8,	// (0x0001c314) ncim_query_popup_pane_ParamLimits

0xd8bc,	// (0x0001c328) wait_bar_pane_cp04

0x912c,	// (0x00017b98) input_focus_pane_cp011

0xd8c4,	// (0x0001c330) ncim_query_popup_pane_t1

0xd8d2,	// (0x0001c33e) ncim_list_query_list_pane_ParamLimits

0xd8d2,	// (0x0001c33e) ncim_list_query_list_pane

0x912c,	// (0x00017b98) bg_button_pane_cp027

0xd8df,	// (0x0001c34b) ncim_query_button_pane_g1

0x912c,	// (0x00017b98) list_highlight_pane_cp012

0xd8e9,	// (0x0001c355) ncim_list_query_list_pane_g1

0xd8f1,	// (0x0001c35d) ncim_list_query_list_pane_t1

0xcb10,	// (0x0001b57c) cam4_indicators_pane_g3_ParamLimits

0xcb10,	// (0x0001b57c) cam4_indicators_pane_g3

0xcb8b,	// (0x0001b5f7) vid4_indicators_pane_g5_ParamLimits

0xcb8b,	// (0x0001b5f7) vid4_indicators_pane_g5

0xd23f,	// (0x0001bcab) vid4_progress_pane_g5_ParamLimits

0xd23f,	// (0x0001bcab) vid4_progress_pane_g5

0x657b,	// (0x00014fe7) main_ncimui_pane_g1

0x65e4,	// (0x00015050) ncimui_group_query_pane_ParamLimits

0x65e4,	// (0x00015050) ncimui_group_query_pane

0x662c,	// (0x00015098) ncimui_list_pane_ParamLimits

0x662c,	// (0x00015098) ncimui_list_pane

0x6653,	// (0x000150bf) ncimui_text_pane_ParamLimits

0x6653,	// (0x000150bf) ncimui_text_pane

0x6714,	// (0x00015180) ncimui_text_pane_t1_ParamLimits

0x6714,	// (0x00015180) ncimui_text_pane_t1

0xd8ff,	// (0x0001c36b) ncimui_list_single_graphic_pane_ParamLimits

0xd8ff,	// (0x0001c36b) ncimui_list_single_graphic_pane

0x6732,	// (0x0001519e) ncimui_query_pane_ParamLimits

0x6732,	// (0x0001519e) ncimui_query_pane

0x912c,	// (0x00017b98) list_highlight_pane_cp013

0xd90f,	// (0x0001c37b) ncim_list_query_list_pane_t1_copy1

0xd91d,	// (0x0001c389) ncim_list_single_graphic_pane_g1

0x6745,	// (0x000151b1) ncim_query_button_pane_cp01

0x6751,	// (0x000151bd) ncim_query_entry_pane_ParamLimits

0x6751,	// (0x000151bd) ncim_query_entry_pane

0x6764,	// (0x000151d0) ncimui_query_pane_g1

0x6770,	// (0x000151dc) ncimui_query_pane_t1_ParamLimits

0x6770,	// (0x000151dc) ncimui_query_pane_t1

0x919b,	// (0x00017c07) input_focus_pane_cp012

0xd925,	// (0x0001c391) ncim_query_entry_pane_t1

0x9926,	// (0x00018392) main_im_pane_ParamLimits

0x919b,	// (0x00017c07) main_mobtv_pane_ParamLimits

0x919b,	// (0x00017c07) main_mobtv_pane

0x63f6,	// (0x00014e62) main_cset6_slider_pane_g18_ParamLimits

0x63f6,	// (0x00014e62) main_cset6_slider_pane_g18

0x6402,	// (0x00014e6e) main_cset6_slider_pane_g19_ParamLimits

0x6402,	// (0x00014e6e) main_cset6_slider_pane_g19

0x98ae,	// (0x0001831a) bg_main_mobtv_pane_ParamLimits

0x98ae,	// (0x0001831a) bg_main_mobtv_pane

0x6789,	// (0x000151f5) main_mobtv_info_pane

0x6792,	// (0x000151fe) main_mobtv_loading_pane_ParamLimits

0x6792,	// (0x000151fe) main_mobtv_loading_pane

0xd937,	// (0x0001c3a3) main_mobtv_pg_channel_list_pane

0xd941,	// (0x0001c3ad) main_mobtv_pg_hdr_pane

0x679f,	// (0x0001520b) main_mobtv_programe_curr_pane_ParamLimits

0x679f,	// (0x0001520b) main_mobtv_programe_curr_pane

0x67ac,	// (0x00015218) main_mobtv_programe_next_pane_ParamLimits

0x67ac,	// (0x00015218) main_mobtv_programe_next_pane

0xd94a,	// (0x0001c3b6) popup_mobtv_noti_window

0x9b9b,	// (0x00018607) main_tv_pg_hdr_pane_g1

0xd952,	// (0x0001c3be) main_tv_pg_hdr_pane_g2

0xd95a,	// (0x0001c3c6) main_tv_pg_hdr_pane_g3

0xd962,	// (0x0001c3ce) main_tv_pg_hdr_pane_g4

0xd96a,	// (0x0001c3d6) main_tv_pg_hdr_pane_g5

0xd974,	// (0x0001c3e0) main_tv_pg_hdr_pane_g6

0xd97e,	// (0x0001c3ea) main_tv_pg_hdr_pane_g7

0xd988,	// (0x0001c3f4) main_tv_pg_hdr_pane_g8

0xd992,	// (0x0001c3fe) main_tv_pg_hdr_pane_g9

0xd99c,	// (0x0001c408) main_tv_pg_hdr_pane_g10

0xd9a6,	// (0x0001c412) main_tv_pg_hdr_pane_g11

0x000a,

0xfb58,	// (0x0001e5c4) main_tv_pg_hdr_pane_g

0xd9b0,	// (0x0001c41c) main_tv_pg_hdr_pane_t1

0xd9be,	// (0x0001c42a) main_tv_pg_hdr_pane_t2

0xd9cc,	// (0x0001c438) main_tv_pg_hdr_pane_t3

0xd9dc,	// (0x0001c448) main_tv_pg_hdr_pane_t4

0xd9ec,	// (0x0001c458) main_tv_pg_hdr_pane_t5

0x0004,

0xfb6f,	// (0x0001e5db) main_tv_pg_hdr_pane_t

0xd9fc,	// (0x0001c468) single_mobtv_pg_channel_pane_ParamLimits

0xd9fc,	// (0x0001c468) single_mobtv_pg_channel_pane

0xda0e,	// (0x0001c47a) single_mobtv_pg_channel_table_pane

0x9ebb,	// (0x00018927) single_mobtv_pg_channel_thumb_pane

0xda17,	// (0x0001c483) single_tv_pg_channel_pane_g1

0xda20,	// (0x0001c48c) single_tv_pg_channel_pane_g2

0x0001,

0xfb7a,	// (0x0001e5e6) single_tv_pg_channel_pane_g

0x9892,	// (0x000182fe) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x9892,	// (0x000182fe) bg_single_mobtv_pg_channel_thumb_pane

0xda29,	// (0x0001c495) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xda29,	// (0x0001c495) single_mobtv_pg_channel_thumb_pane_g1

0xda37,	// (0x0001c4a3) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xda37,	// (0x0001c4a3) single_mobtv_pg_channel_thumb_pane_g2

0xda43,	// (0x0001c4af) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xda43,	// (0x0001c4af) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfb7f,	// (0x0001e5eb) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfb7f,	// (0x0001e5eb) single_mobtv_pg_channel_thumb_pane_g

0xda4f,	// (0x0001c4bb) single_mobtv_pg_channel_thumb_pane_t1

0xda5d,	// (0x0001c4c9) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfb86,	// (0x0001e5f2) single_mobtv_pg_channel_thumb_pane_t

0x9b9b,	// (0x00018607) bg_single_mobtv_pg_channel_table_pane_g1

0x9b9b,	// (0x00018607) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf398,	// (0x0001de04) bg_single_mobtv_pg_channel_table_pane_g

0xda6b,	// (0x0001c4d7) single_mobtv_pg_channel_table_pane_t1

0xda79,	// (0x0001c4e5) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfb8b,	// (0x0001e5f7) single_mobtv_pg_channel_table_pane_t

0x67c1,	// (0x0001522d) main_mobtv_info_pane_g1_ParamLimits

0x67c1,	// (0x0001522d) main_mobtv_info_pane_g1

0x67df,	// (0x0001524b) main_mobtv_info_pane_t1_ParamLimits

0x67df,	// (0x0001524b) main_mobtv_info_pane_t1

0x6857,	// (0x000152c3) main_mobtv_info_pane_t2_ParamLimits

0x6857,	// (0x000152c3) main_mobtv_info_pane_t2

0x0002,

0xfb95,	// (0x0001e601) main_mobtv_info_pane_t_ParamLimits

0xfb95,	// (0x0001e601) main_mobtv_info_pane_t

0x68e6,	// (0x00015352) wait_bar_pane_cp05

0x68f8,	// (0x00015364) main_mobtv_loading_pane_g1_ParamLimits

0x68f8,	// (0x00015364) main_mobtv_loading_pane_g1

0x690b,	// (0x00015377) main_mobtv_loading_pane_g2_ParamLimits

0x690b,	// (0x00015377) main_mobtv_loading_pane_g2

0x6917,	// (0x00015383) main_mobtv_loading_pane_g3_ParamLimits

0x6917,	// (0x00015383) main_mobtv_loading_pane_g3

0x0002,

0xfb9c,	// (0x0001e608) main_mobtv_loading_pane_g_ParamLimits

0xfb9c,	// (0x0001e608) main_mobtv_loading_pane_g

0xda87,	// (0x0001c4f3) main_mobtv_loading_pane_t1_ParamLimits

0xda87,	// (0x0001c4f3) main_mobtv_loading_pane_t1

0xda9f,	// (0x0001c50b) main_mobtv_loading_pane_t2_ParamLimits

0xda9f,	// (0x0001c50b) main_mobtv_loading_pane_t2

0x0001,

0xfba3,	// (0x0001e60f) main_mobtv_loading_pane_t_ParamLimits

0xfba3,	// (0x0001e60f) main_mobtv_loading_pane_t

0x692a,	// (0x00015396) wait_bar_pane_cp06_ParamLimits

0x692a,	// (0x00015396) wait_bar_pane_cp06

0xdac3,	// (0x0001c52f) main_mobtv_programe_curr_pane_t1

0xdad1,	// (0x0001c53d) main_mobtv_programe_curr_pane_t2

0x0001,

0xfba8,	// (0x0001e614) main_mobtv_programe_curr_pane_t

0xdadf,	// (0x0001c54b) main_mobtv_programe_next_pane_t1

0xdaed,	// (0x0001c559) main_mobtv_programe_next_pane_t2

0xdafb,	// (0x0001c567) main_mobtv_programe_next_pane_t3

0x0002,

0xfbad,	// (0x0001e619) main_mobtv_programe_next_pane_t

0x912c,	// (0x00017b98) bg_popup_mobtv_noti_window_pane

0xdb09,	// (0x0001c575) popup_mobtv_noti_window_g1

0xdb11,	// (0x0001c57d) popup_mobtv_noti_window_t1

0xdb1f,	// (0x0001c58b) popup_mobtv_noti_window_t2

0x0001,

0xfbb4,	// (0x0001e620) popup_mobtv_noti_window_t

0x9b9b,	// (0x00018607) bg_popup_mobtv_noti_window_pane_g1

0x912c,	// (0x00017b98) sc_clock_pane

0x912c,	// (0x00017b98) main_fs_bigclock_pane

0x604d,	// (0x00014ab9) blid2_tripm_pane_t4_ParamLimits

0x604d,	// (0x00014ab9) blid2_tripm_pane_t4

0x6939,	// (0x000153a5) sc_clock_pane_g1_ParamLimits

0x6939,	// (0x000153a5) sc_clock_pane_g1

0x694b,	// (0x000153b7) sc_clock_pane_t1_ParamLimits

0x694b,	// (0x000153b7) sc_clock_pane_t1

0x696d,	// (0x000153d9) sc_clock_pane_t2_ParamLimits

0x696d,	// (0x000153d9) sc_clock_pane_t2

0x6985,	// (0x000153f1) sc_clock_pane_t3_ParamLimits

0x6985,	// (0x000153f1) sc_clock_pane_t3

0x0004,

0xfbb9,	// (0x0001e625) sc_clock_pane_t_ParamLimits

0xfbb9,	// (0x0001e625) sc_clock_pane_t

0x7701,	// (0x0001616d) main_fs_bigclock_indicator_pane_ParamLimits

0x7701,	// (0x0001616d) main_fs_bigclock_indicator_pane

0x6a2b,	// (0x00015497) main_fs_bigclock_pane_g1_ParamLimits

0x6a2b,	// (0x00015497) main_fs_bigclock_pane_g1

0x770d,	// (0x00016179) main_fs_bigclock_pane_t1_ParamLimits

0x770d,	// (0x00016179) main_fs_bigclock_pane_t1

0x771f,	// (0x0001618b) main_fs_bigclock_pane_t2_ParamLimits

0x771f,	// (0x0001618b) main_fs_bigclock_pane_t2

0x7733,	// (0x0001619f) main_fs_bigclock_pane_t3_ParamLimits

0x7733,	// (0x0001619f) main_fs_bigclock_pane_t3

0x0002,

0xfd4a,	// (0x0001e7b6) main_fs_bigclock_pane_t_ParamLimits

0xfd4a,	// (0x0001e7b6) main_fs_bigclock_pane_t

0xe65d,	// (0x0001d0c9) main_fs_bigclock_indicator_pane_g1

0xd83e,	// (0x0001c2aa) ncim_query_content_pane_g2_ParamLimits

0xd83e,	// (0x0001c2aa) ncim_query_content_pane_g2

0x0001,

0xfb46,	// (0x0001e5b2) ncim_query_content_pane_g_ParamLimits

0xfb46,	// (0x0001e5b2) ncim_query_content_pane_g

0x699e,	// (0x0001540a) sc_clock_pane_t4_ParamLimits

0x699e,	// (0x0001540a) sc_clock_pane_t4

0x919b,	// (0x00017c07) main_radioblah_pane

0xca59,	// (0x0001b4c5) cell_call4_button_pane_t1_copy1_ParamLimits

0xca59,	// (0x0001b4c5) cell_call4_button_pane_t1_copy1

0x6593,	// (0x00014fff) main_ncimui_pane_t1_ParamLimits

0x6593,	// (0x00014fff) main_ncimui_pane_t1

0x65ad,	// (0x00015019) main_ncimui_pane_t2_ParamLimits

0x65ad,	// (0x00015019) main_ncimui_pane_t2

0x0002,

0xfb3f,	// (0x0001e5ab) main_ncimui_pane_t_ParamLimits

0xfb3f,	// (0x0001e5ab) main_ncimui_pane_t

0xdc65,	// (0x0001c6d1) main_radioblah_anim_pane_ParamLimits

0xdc65,	// (0x0001c6d1) main_radioblah_anim_pane

0xdc76,	// (0x0001c6e2) main_radioblah_info_pane_ParamLimits

0xdc76,	// (0x0001c6e2) main_radioblah_info_pane

0xdc8a,	// (0x0001c6f6) main_radioblah_pane_t1_ParamLimits

0xdc8a,	// (0x0001c6f6) main_radioblah_pane_t1

0xdca6,	// (0x0001c712) main_radioblah_pane_t2_ParamLimits

0xdca6,	// (0x0001c712) main_radioblah_pane_t2

0x0003,

0xfbda,	// (0x0001e646) main_radioblah_pane_t_ParamLimits

0xfbda,	// (0x0001e646) main_radioblah_pane_t

0x6a8a,	// (0x000154f6) main_radioblah_rocker_ctrl_pane_ParamLimits

0x6a8a,	// (0x000154f6) main_radioblah_rocker_ctrl_pane

0xdcee,	// (0x0001c75a) main_radioblah_info_pane_t1_ParamLimits

0xdcee,	// (0x0001c75a) main_radioblah_info_pane_t1

0x6ae2,	// (0x0001554e) main_radioblah_info_pane_t2_ParamLimits

0x6ae2,	// (0x0001554e) main_radioblah_info_pane_t2

0x0003,

0xfbe3,	// (0x0001e64f) main_radioblah_info_pane_t_ParamLimits

0xfbe3,	// (0x0001e64f) main_radioblah_info_pane_t

0x9b9b,	// (0x00018607) main_radioblah_rocker_ctrl_pane_g1

0x6b92,	// (0x000155fe) main_radioblah_rocker_ctrl_pane_g2

0x6b9a,	// (0x00015606) main_radioblah_rocker_ctrl_pane_g3

0x6ba2,	// (0x0001560e) main_radioblah_rocker_ctrl_pane_g4

0x6baa,	// (0x00015616) main_radioblah_rocker_ctrl_pane_g5

0x6bb2,	// (0x0001561e) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfbec,	// (0x0001e658) main_radioblah_rocker_ctrl_pane_g

0x6306,	// (0x00014d72) main_cset_text2_pane_t1_copy1_ParamLimits

0xcae3,	// (0x0001b54f) cam4_image_uncrop_qvga_pane

0xcb36,	// (0x0001b5a2) vid4_image_uncrop_qcif_pane

0xd44c,	// (0x0001beb8) cam6_image_uncrop_qvga_pane_ParamLimits

0xd44c,	// (0x0001beb8) cam6_image_uncrop_qvga_pane

0xd504,	// (0x0001bf70) vid6_image_uncrop_qcif_pane_ParamLimits

0xd504,	// (0x0001bf70) vid6_image_uncrop_qcif_pane

0x912c,	// (0x00017b98) bg_popup_preview_window_pane_cp03

0xd7f0,	// (0x0001c25c) list_cset_text2_pane

0xd7f8,	// (0x0001c264) main_cset6_text2_pane_g1

0xd800,	// (0x0001c26c) main_cset6_text2_pane_t1

0xe952,	// (0x0001d3be) list_cset_text2_pane_t1_ParamLimits

0xe952,	// (0x0001d3be) list_cset_text2_pane_t1

0x919b,	// (0x00017c07) main_radioblah_pane_ParamLimits

0x68d2,	// (0x0001533e) main_mobtv_info_pane_t3_ParamLimits

0x68d2,	// (0x0001533e) main_mobtv_info_pane_t3

0x6a78,	// (0x000154e4) main_radioblah_pane_g1

0x6ab2,	// (0x0001551e) main_radioblah_info_pane_g1

0x6b37,	// (0x000155a3) main_radioblah_info_pane_t3_ParamLimits

0x6b37,	// (0x000155a3) main_radioblah_info_pane_t3

0x2088,	// (0x00010af4) highlight_cell_cale_month_pane_ParamLimits

0x2088,	// (0x00010af4) highlight_cell_cale_month_pane

0x912c,	// (0x00017b98) main_phob_fisheye_pane

0xc28b,	// (0x0001acf7) scroll_pane_cp0031_ParamLimits

0xc28b,	// (0x0001acf7) scroll_pane_cp0031

0xd612,	// (0x0001c07e) wait_bar_pane_cp08_ParamLimits

0x6388,	// (0x00014df4) cset_list_set_pane_copy1_ParamLimits

0xdd28,	// (0x0001c794) highlight_cell_cale_month_pane_g1

0x6bba,	// (0x00015626) highlight_cell_cale_month_pane_t1

0xd202,	// (0x0001bc6e) list_gen_pane_cp01

0xcd3c,	// (0x0001b7a8) scroll_pane_01

0x6bc8,	// (0x00015634) list_single_double_fisheye_pane

0x6bd1,	// (0x0001563d) list_double_fisheye_pane_g1_ParamLimits

0x6bd1,	// (0x0001563d) list_double_fisheye_pane_g1

0x6bdd,	// (0x00015649) list_double_fisheye_pane_g2_ParamLimits

0x6bdd,	// (0x00015649) list_double_fisheye_pane_g2

0x6bf1,	// (0x0001565d) list_double_fisheye_pane_g3_ParamLimits

0x6bf1,	// (0x0001565d) list_double_fisheye_pane_g3

0x0004,

0xfbf9,	// (0x0001e665) list_double_fisheye_pane_g_ParamLimits

0xfbf9,	// (0x0001e665) list_double_fisheye_pane_g

0x6c1a,	// (0x00015686) list_double_fisheye_pane_t1_ParamLimits

0x6c1a,	// (0x00015686) list_double_fisheye_pane_t1

0x6c35,	// (0x000156a1) list_double_fisheye_pane_t2_ParamLimits

0x6c35,	// (0x000156a1) list_double_fisheye_pane_t2

0x0001,

0xfc04,	// (0x0001e670) list_double_fisheye_pane_t_ParamLimits

0xfc04,	// (0x0001e670) list_double_fisheye_pane_t

0x912c,	// (0x00017b98) main_call5_pane

0x69c9,	// (0x00015435) sc_swipe_pane_ParamLimits

0x69c9,	// (0x00015435) sc_swipe_pane

0x6c6a,	// (0x000156d6) call5_image_pane_ParamLimits

0x6c6a,	// (0x000156d6) call5_image_pane

0x6c87,	// (0x000156f3) call5_swipe_1_pane_ParamLimits

0x6c87,	// (0x000156f3) call5_swipe_1_pane

0x6c9a,	// (0x00015706) call5_swipe_2_pane_ParamLimits

0x6c9a,	// (0x00015706) call5_swipe_2_pane

0x6cc5,	// (0x00015731) popup_call5_audio_first_window_ParamLimits

0x6cc5,	// (0x00015731) popup_call5_audio_first_window

0x9892,	// (0x000182fe) call5_swipe_1_pane_g1_ParamLimits

0x9892,	// (0x000182fe) call5_swipe_1_pane_g1

0xdd30,	// (0x0001c79c) call5_swipe_1_pane_g2_ParamLimits

0xdd30,	// (0x0001c79c) call5_swipe_1_pane_g2

0x0001,

0xfc09,	// (0x0001e675) call5_swipe_1_pane_g_ParamLimits

0xfc09,	// (0x0001e675) call5_swipe_1_pane_g

0xdd3c,	// (0x0001c7a8) call5_swipe_1_pane_t1_ParamLimits

0xdd3c,	// (0x0001c7a8) call5_swipe_1_pane_t1

0x9892,	// (0x000182fe) call5_swipe_2_pane_g1_ParamLimits

0x9892,	// (0x000182fe) call5_swipe_2_pane_g1

0xdd51,	// (0x0001c7bd) call5_swipe_2_pane_g2_ParamLimits

0xdd51,	// (0x0001c7bd) call5_swipe_2_pane_g2

0x0001,

0xfc0e,	// (0x0001e67a) call5_swipe_2_pane_g_ParamLimits

0xfc0e,	// (0x0001e67a) call5_swipe_2_pane_g

0xdd5d,	// (0x0001c7c9) call5_swipe_2_pane_t1_ParamLimits

0xdd5d,	// (0x0001c7c9) call5_swipe_2_pane_t1

0xdd72,	// (0x0001c7de) sc_swipe_pane_g1_ParamLimits

0xdd72,	// (0x0001c7de) sc_swipe_pane_g1

0xdd7f,	// (0x0001c7eb) sc_swipe_pane_g2_ParamLimits

0xdd7f,	// (0x0001c7eb) sc_swipe_pane_g2

0x0001,

0xfc13,	// (0x0001e67f) sc_swipe_pane_g_ParamLimits

0xfc13,	// (0x0001e67f) sc_swipe_pane_g

0xdd8b,	// (0x0001c7f7) sc_swipe_pane_t1_ParamLimits

0xdd8b,	// (0x0001c7f7) sc_swipe_pane_t1

0x912c,	// (0x00017b98) main_cmail_launcher_pane

0x6cd6,	// (0x00015742) aid_size_cell_cmail_l_ParamLimits

0x6cd6,	// (0x00015742) aid_size_cell_cmail_l

0x6ce4,	// (0x00015750) grid_cmail_l_pane_ParamLimits

0x6ce4,	// (0x00015750) grid_cmail_l_pane

0x6cfe,	// (0x0001576a) cell_cmail_l_pane_ParamLimits

0x6cfe,	// (0x0001576a) cell_cmail_l_pane

0xdda0,	// (0x0001c80c) cell_cmail_l_pane_g1_ParamLimits

0xdda0,	// (0x0001c80c) cell_cmail_l_pane_g1

0xddac,	// (0x0001c818) cell_cmail_l_pane_t1_ParamLimits

0xddac,	// (0x0001c818) cell_cmail_l_pane_t1

0xddc2,	// (0x0001c82e) cell_cmail_l_pane_t2_ParamLimits

0xddc2,	// (0x0001c82e) cell_cmail_l_pane_t2

0x0001,

0xfc18,	// (0x0001e684) cell_cmail_l_pane_t_ParamLimits

0xfc18,	// (0x0001e684) cell_cmail_l_pane_t

0x919b,	// (0x00017c07) grid_highlight_pane_cp018_ParamLimits

0x919b,	// (0x00017c07) grid_highlight_pane_cp018

0x06ad,	// (0x0000f119) main2_pane_ParamLimits

0x06ad,	// (0x0000f119) main2_pane

0x99e2,	// (0x0001844e) popup_sp_fs_action_menu_bg_pane_g1

0x99ea,	// (0x00018456) popup_sp_fs_action_menu_bg_pane_g2

0x99f2,	// (0x0001845e) popup_sp_fs_action_menu_bg_pane_g3

0x99fa,	// (0x00018466) popup_sp_fs_action_menu_bg_pane_g4

0x9a02,	// (0x0001846e) popup_sp_fs_action_menu_bg_pane_g5

0x9a0a,	// (0x00018476) popup_sp_fs_action_menu_bg_pane_g6

0x9a12,	// (0x0001847e) popup_sp_fs_action_menu_bg_pane_g7

0x9a1a,	// (0x00018486) popup_sp_fs_action_menu_bg_pane_g8

0x9a22,	// (0x0001848e) popup_sp_fs_action_menu_bg_pane_g9

0x9a2a,	// (0x00018496) popup_sp_fs_action_menu_bg_pane_g10

0x9a2a,	// (0x00018496) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf105,	// (0x0001db71) popup_sp_fs_action_menu_bg_pane_g

0x9892,	// (0x000182fe) list_medium_line_x2_t3_g3_g1_ParamLimits

0x9892,	// (0x000182fe) list_medium_line_x2_t3_g3_g1

0x9892,	// (0x000182fe) list_medium_line_x2_t3_g3_g2_ParamLimits

0x9892,	// (0x000182fe) list_medium_line_x2_t3_g3_g2

0x9892,	// (0x000182fe) list_medium_line_x2_t3_g3_g3_ParamLimits

0x9892,	// (0x000182fe) list_medium_line_x2_t3_g3_g3

0x0002,

0xf1b3,	// (0x0001dc1f) list_medium_line_x2_t3_g3_g_ParamLimits

0xf1b3,	// (0x0001dc1f) list_medium_line_x2_t3_g3_g

0x9b6d,	// (0x000185d9) list_medium_line_x2_t3_g3_t1_ParamLimits

0x9b6d,	// (0x000185d9) list_medium_line_x2_t3_g3_t1

0x9b6d,	// (0x000185d9) list_medium_line_x2_t3_g3_t2_ParamLimits

0x9b6d,	// (0x000185d9) list_medium_line_x2_t3_g3_t2

0x9b6d,	// (0x000185d9) list_medium_line_x2_t3_g3_t3_ParamLimits

0x9b6d,	// (0x000185d9) list_medium_line_x2_t3_g3_t3

0x0002,

0xf1ba,	// (0x0001dc26) list_medium_line_x2_t3_g3_t_ParamLimits

0xf1ba,	// (0x0001dc26) list_medium_line_x2_t3_g3_t

0x9892,	// (0x000182fe) list_medium_line_x2_t3_g2_g1_ParamLimits

0x9892,	// (0x000182fe) list_medium_line_x2_t3_g2_g1

0x9892,	// (0x000182fe) list_medium_line_x2_t3_g2_g2_ParamLimits

0x9892,	// (0x000182fe) list_medium_line_x2_t3_g2_g2

0x0001,

0xf1c1,	// (0x0001dc2d) list_medium_line_x2_t3_g2_g_ParamLimits

0xf1c1,	// (0x0001dc2d) list_medium_line_x2_t3_g2_g

0x9b6d,	// (0x000185d9) list_medium_line_x2_t3_g2_t1_ParamLimits

0x9b6d,	// (0x000185d9) list_medium_line_x2_t3_g2_t1

0x9b6d,	// (0x000185d9) list_medium_line_x2_t3_g2_t2_ParamLimits

0x9b6d,	// (0x000185d9) list_medium_line_x2_t3_g2_t2

0x9b6d,	// (0x000185d9) list_medium_line_x2_t3_g2_t3_ParamLimits

0x9b6d,	// (0x000185d9) list_medium_line_x2_t3_g2_t3

0x0002,

0xf1ba,	// (0x0001dc26) list_medium_line_x2_t3_g2_t_ParamLimits

0xf1ba,	// (0x0001dc26) list_medium_line_x2_t3_g2_t

0x9892,	// (0x000182fe) list_medium_line_x2_t4_g4_g1_ParamLimits

0x9892,	// (0x000182fe) list_medium_line_x2_t4_g4_g1

0x9892,	// (0x000182fe) list_medium_line_x2_t4_g4_g2_ParamLimits

0x9892,	// (0x000182fe) list_medium_line_x2_t4_g4_g2

0x9892,	// (0x000182fe) list_medium_line_x2_t4_g4_g3_ParamLimits

0x9892,	// (0x000182fe) list_medium_line_x2_t4_g4_g3

0x9892,	// (0x000182fe) list_medium_line_x2_t4_g4_g4_ParamLimits

0x9892,	// (0x000182fe) list_medium_line_x2_t4_g4_g4

0x0003,

0xf1c6,	// (0x0001dc32) list_medium_line_x2_t4_g4_g_ParamLimits

0xf1c6,	// (0x0001dc32) list_medium_line_x2_t4_g4_g

0x9b6d,	// (0x000185d9) list_medium_line_x2_t4_g4_t1_ParamLimits

0x9b6d,	// (0x000185d9) list_medium_line_x2_t4_g4_t1

0x9b6d,	// (0x000185d9) list_medium_line_x2_t4_g4_t2_ParamLimits

0x9b6d,	// (0x000185d9) list_medium_line_x2_t4_g4_t2

0x9b6d,	// (0x000185d9) list_medium_line_x2_t4_g4_t3_ParamLimits

0x9b6d,	// (0x000185d9) list_medium_line_x2_t4_g4_t3

0x9b6d,	// (0x000185d9) list_medium_line_x2_t4_g4_t4_ParamLimits

0x9b6d,	// (0x000185d9) list_medium_line_x2_t4_g4_t4

0x0003,

0xf1cf,	// (0x0001dc3b) list_medium_line_x2_t4_g4_t_ParamLimits

0xf1cf,	// (0x0001dc3b) list_medium_line_x2_t4_g4_t

0x9892,	// (0x000182fe) list_medium_line_x2_t2_g4_g1_ParamLimits

0x9892,	// (0x000182fe) list_medium_line_x2_t2_g4_g1

0x9892,	// (0x000182fe) list_medium_line_x2_t2_g4_g2_ParamLimits

0x9892,	// (0x000182fe) list_medium_line_x2_t2_g4_g2

0x9892,	// (0x000182fe) list_medium_line_x2_t2_g4_g3_ParamLimits

0x9892,	// (0x000182fe) list_medium_line_x2_t2_g4_g3

0x9892,	// (0x000182fe) list_medium_line_x2_t2_g4_g4_ParamLimits

0x9892,	// (0x000182fe) list_medium_line_x2_t2_g4_g4

0x0003,

0xf1c6,	// (0x0001dc32) list_medium_line_x2_t2_g4_g_ParamLimits

0xf1c6,	// (0x0001dc32) list_medium_line_x2_t2_g4_g

0x9b6d,	// (0x000185d9) list_medium_line_x2_t2_g4_t1_ParamLimits

0x9b6d,	// (0x000185d9) list_medium_line_x2_t2_g4_t1

0x9b6d,	// (0x000185d9) list_medium_line_x2_t2_g4_t2_ParamLimits

0x9b6d,	// (0x000185d9) list_medium_line_x2_t2_g4_t2

0x0001,

0xf196,	// (0x0001dc02) list_medium_line_x2_t2_g4_t_ParamLimits

0xf196,	// (0x0001dc02) list_medium_line_x2_t2_g4_t

0x9892,	// (0x000182fe) list_medium_line_x2_t2_g3_g1_ParamLimits

0x9892,	// (0x000182fe) list_medium_line_x2_t2_g3_g1

0x9892,	// (0x000182fe) list_medium_line_x2_t2_g3_g2_ParamLimits

0x9892,	// (0x000182fe) list_medium_line_x2_t2_g3_g2

0x9892,	// (0x000182fe) list_medium_line_x2_t2_g3_g3_ParamLimits

0x9892,	// (0x000182fe) list_medium_line_x2_t2_g3_g3

0x0002,

0xf1b3,	// (0x0001dc1f) list_medium_line_x2_t2_g3_g_ParamLimits

0xf1b3,	// (0x0001dc1f) list_medium_line_x2_t2_g3_g

0x9b6d,	// (0x000185d9) list_medium_line_x2_t2_g3_t1_ParamLimits

0x9b6d,	// (0x000185d9) list_medium_line_x2_t2_g3_t1

0x9b6d,	// (0x000185d9) list_medium_line_x2_t2_g3_t2_ParamLimits

0x9b6d,	// (0x000185d9) list_medium_line_x2_t2_g3_t2

0x0001,

0xf196,	// (0x0001dc02) list_medium_line_x2_t2_g3_t_ParamLimits

0xf196,	// (0x0001dc02) list_medium_line_x2_t2_g3_t

0x21ed,	// (0x00010c59) main_sp_fs_list_pane_ParamLimits

0x21ed,	// (0x00010c59) main_sp_fs_list_pane

0xceea,	// (0x0001b956) sp_fs_scroll_pane_ParamLimits

0xceea,	// (0x0001b956) sp_fs_scroll_pane

0xa0fc,	// (0x00018b68) list_medium_line_x2_t3_t1

0xa0fc,	// (0x00018b68) list_medium_line_x2_t3_t2

0xa0fc,	// (0x00018b68) list_medium_line_x2_t3_t3

0x0002,

0xf27c,	// (0x0001dce8) list_medium_line_x2_t3_t

0xa0fc,	// (0x00018b68) list_medium_line_x3_t4_t1

0xa0fc,	// (0x00018b68) list_medium_line_x3_t4_t2

0xa0fc,	// (0x00018b68) list_medium_line_x3_t4_t3

0xa0fc,	// (0x00018b68) list_medium_line_x3_t4_t4

0x0003,

0xf283,	// (0x0001dcef) list_medium_line_x3_t4_t

0xa0fc,	// (0x00018b68) list_medium_line_x4_t5_t1

0xa0fc,	// (0x00018b68) list_medium_line_x4_t5_t2

0xa0fc,	// (0x00018b68) list_medium_line_x4_t5_t3

0xa0fc,	// (0x00018b68) list_medium_line_x4_t5_t4

0xa0fc,	// (0x00018b68) list_medium_line_x4_t5_t5

0x0004,

0xf28c,	// (0x0001dcf8) list_medium_line_x4_t5_t

0x9892,	// (0x000182fe) list_medium_line_t4_g4_g1_ParamLimits

0x9892,	// (0x000182fe) list_medium_line_t4_g4_g1

0x9892,	// (0x000182fe) list_medium_line_t4_g4_g2_ParamLimits

0x9892,	// (0x000182fe) list_medium_line_t4_g4_g2

0x9892,	// (0x000182fe) list_medium_line_t4_g4_g3_ParamLimits

0x9892,	// (0x000182fe) list_medium_line_t4_g4_g3

0x9892,	// (0x000182fe) list_medium_line_t4_g4_g4_ParamLimits

0x9892,	// (0x000182fe) list_medium_line_t4_g4_g4

0x0003,

0xf1c6,	// (0x0001dc32) list_medium_line_t4_g4_g_ParamLimits

0xf1c6,	// (0x0001dc32) list_medium_line_t4_g4_g

0x9b6d,	// (0x000185d9) list_medium_line_t4_g4_t1_ParamLimits

0x9b6d,	// (0x000185d9) list_medium_line_t4_g4_t1

0x9b6d,	// (0x000185d9) list_medium_line_t4_g4_t2_ParamLimits

0x9b6d,	// (0x000185d9) list_medium_line_t4_g4_t2

0x9b6d,	// (0x000185d9) list_medium_line_t4_g4_t3_ParamLimits

0x9b6d,	// (0x000185d9) list_medium_line_t4_g4_t3

0x9b6d,	// (0x000185d9) list_medium_line_t4_g4_t4_ParamLimits

0x9b6d,	// (0x000185d9) list_medium_line_t4_g4_t4

0x0003,

0xf1cf,	// (0x0001dc3b) list_medium_line_t4_g4_t_ParamLimits

0xf1cf,	// (0x0001dc3b) list_medium_line_t4_g4_t

0x2298,	// (0x00010d04) chi_dic_find_pane_g1

0x3179,	// (0x00011be5) main_tport_pane

0xa0fc,	// (0x00018b68) list_medium_line_plain_t1

0x9892,	// (0x000182fe) list_medium_line_t2_g2_g1_ParamLimits

0x9892,	// (0x000182fe) list_medium_line_t2_g2_g1

0x9892,	// (0x000182fe) list_medium_line_t2_g2_g2_ParamLimits

0x9892,	// (0x000182fe) list_medium_line_t2_g2_g2

0x0001,

0xf1c1,	// (0x0001dc2d) list_medium_line_t2_g2_g_ParamLimits

0xf1c1,	// (0x0001dc2d) list_medium_line_t2_g2_g

0x9b6d,	// (0x000185d9) list_medium_line_t2_g2_t1_ParamLimits

0x9b6d,	// (0x000185d9) list_medium_line_t2_g2_t1

0x9b6d,	// (0x000185d9) list_medium_line_t2_g2_t2_ParamLimits

0x9b6d,	// (0x000185d9) list_medium_line_t2_g2_t2

0x0001,

0xf196,	// (0x0001dc02) list_medium_line_t2_g2_t_ParamLimits

0xf196,	// (0x0001dc02) list_medium_line_t2_g2_t

0xd276,	// (0x0001bce2) aid_sp_fs_list_icon_a_sm

0xd27e,	// (0x0001bcea) aid_sp_fs_list_icon_d

0xd286,	// (0x0001bcf2) aid_sp_fs_text_primary

0xd28f,	// (0x0001bcfb) aid_sp_fs_text_secondary

0x912c,	// (0x00017b98) list_medium_line

0x912c,	// (0x00017b98) list_medium_line_g2

0x912c,	// (0x00017b98) list_medium_line_g3

0x912c,	// (0x00017b98) list_medium_line_plain

0x912c,	// (0x00017b98) list_medium_line_plain_t2

0x912c,	// (0x00017b98) list_medium_line_plain_t3

0x912c,	// (0x00017b98) list_medium_line_right_icon

0x912c,	// (0x00017b98) list_medium_line_right_iconx2

0x912c,	// (0x00017b98) list_medium_line_t2

0x912c,	// (0x00017b98) list_medium_line_t2_g2

0x912c,	// (0x00017b98) list_medium_line_t2_g3

0x912c,	// (0x00017b98) list_medium_line_t2_right_icon

0x912c,	// (0x00017b98) list_medium_line_t2_right_iconx2

0x912c,	// (0x00017b98) list_medium_line_t3

0x912c,	// (0x00017b98) list_medium_line_t3_g2

0x912c,	// (0x00017b98) list_medium_line_t3_g3

0x912c,	// (0x00017b98) list_medium_line_t3_right_iconx2

0x912c,	// (0x00017b98) list_medium_line_t4_g4

0x912c,	// (0x00017b98) list_medium_line_x2

0x912c,	// (0x00017b98) list_medium_line_x2_t2_g2

0x912c,	// (0x00017b98) list_medium_line_x2_t2_g3

0x912c,	// (0x00017b98) list_medium_line_x2_t2_g4

0x912c,	// (0x00017b98) list_medium_line_x2_t3

0x912c,	// (0x00017b98) list_medium_line_x2_t3_g2

0x912c,	// (0x00017b98) list_medium_line_x2_t3_g3

0x912c,	// (0x00017b98) list_medium_line_x2_t3_g4

0x912c,	// (0x00017b98) list_medium_line_x2_t4_g2

0x912c,	// (0x00017b98) list_medium_line_x2_t4_g4

0x912c,	// (0x00017b98) list_medium_line_x3

0x912c,	// (0x00017b98) list_medium_line_x3_t4

0x912c,	// (0x00017b98) list_medium_line_x3_t4_g4

0x912c,	// (0x00017b98) list_medium_line_x4_t4

0x912c,	// (0x00017b98) list_medium_line_x4_t4_g7

0x912c,	// (0x00017b98) list_medium_line_x4_t5

0x5e3d,	// (0x000148a9) list_single_fs_dyc_pane_ParamLimits

0x5e3d,	// (0x000148a9) list_single_fs_dyc_pane

0x9892,	// (0x000182fe) list_medium_line_x4_t4_g7_g1_ParamLimits

0x9892,	// (0x000182fe) list_medium_line_x4_t4_g7_g1

0x9892,	// (0x000182fe) list_medium_line_x4_t4_g7_g2_ParamLimits

0x9892,	// (0x000182fe) list_medium_line_x4_t4_g7_g2

0x9892,	// (0x000182fe) list_medium_line_x4_t4_g7_g3_ParamLimits

0x9892,	// (0x000182fe) list_medium_line_x4_t4_g7_g3

0x9892,	// (0x000182fe) list_medium_line_x4_t4_g7_g4_ParamLimits

0x9892,	// (0x000182fe) list_medium_line_x4_t4_g7_g4

0x9892,	// (0x000182fe) list_medium_line_x4_t4_g7_g5_ParamLimits

0x9892,	// (0x000182fe) list_medium_line_x4_t4_g7_g5

0x9892,	// (0x000182fe) list_medium_line_x4_t4_g7_g6_ParamLimits

0x9892,	// (0x000182fe) list_medium_line_x4_t4_g7_g6

0x98a0,	// (0x0001830c) list_medium_line_x4_t4_g7_g7_ParamLimits

0x98a0,	// (0x0001830c) list_medium_line_x4_t4_g7_g7

0x0006,

0xfb20,	// (0x0001e58c) list_medium_line_x4_t4_g7_g_ParamLimits

0xfb20,	// (0x0001e58c) list_medium_line_x4_t4_g7_g

0x9b6d,	// (0x000185d9) list_medium_line_x4_t4_g7_t1_ParamLimits

0x9b6d,	// (0x000185d9) list_medium_line_x4_t4_g7_t1

0x9b6d,	// (0x000185d9) list_medium_line_x4_t4_g7_t2_ParamLimits

0x9b6d,	// (0x000185d9) list_medium_line_x4_t4_g7_t2

0x9b6d,	// (0x000185d9) list_medium_line_x4_t4_g7_t3_ParamLimits

0x9b6d,	// (0x000185d9) list_medium_line_x4_t4_g7_t3

0xa71a,	// (0x00019186) list_medium_line_x4_t4_g7_t4_ParamLimits

0xa71a,	// (0x00019186) list_medium_line_x4_t4_g7_t4

0xa71a,	// (0x00019186) list_medium_line_x4_t4_g7_t5_ParamLimits

0xa71a,	// (0x00019186) list_medium_line_x4_t4_g7_t5

0x0004,

0xfb2f,	// (0x0001e59b) list_medium_line_x4_t4_g7_t_ParamLimits

0xfb2f,	// (0x0001e59b) list_medium_line_x4_t4_g7_t

0x654a,	// (0x00014fb6) list_single_dyc_row_pane_ParamLimits

0x654a,	// (0x00014fb6) list_single_dyc_row_pane

0x6c57,	// (0x000156c3) call5_gesture_pane_ParamLimits

0x6c57,	// (0x000156c3) call5_gesture_pane

0x6cad,	// (0x00015719) call5_windows_pane_ParamLimits

0x6cad,	// (0x00015719) call5_windows_pane

0x6d18,	// (0x00015784) call5_swipe_1_pane_cp_ParamLimits

0x6d18,	// (0x00015784) call5_swipe_1_pane_cp

0x6d24,	// (0x00015790) call5_swipe_2_pane_cp_ParamLimits

0x6d24,	// (0x00015790) call5_swipe_2_pane_cp

0x9b5b,	// (0x000185c7) call5_image_pane_cp

0x6d30,	// (0x0001579c) popup_call5_audio_first_window_cp_ParamLimits

0x6d30,	// (0x0001579c) popup_call5_audio_first_window_cp

0xdd72,	// (0x0001c7de) call5_swipe_1_pane_g1_cp_ParamLimits

0xdd72,	// (0x0001c7de) call5_swipe_1_pane_g1_cp

0xdddf,	// (0x0001c84b) call5_swipe_1_pane_g2_cp

0xdd8b,	// (0x0001c7f7) call5_swipe_1_pane_t1_cp_ParamLimits

0xdd8b,	// (0x0001c7f7) call5_swipe_1_pane_t1_cp

0xdd72,	// (0x0001c7de) call5_swipe_2_pane_g1_cp_ParamLimits

0xdd72,	// (0x0001c7de) call5_swipe_2_pane_g1_cp

0xdde7,	// (0x0001c853) call5_swipe_2_pane_g2_cp

0xddef,	// (0x0001c85b) call5_swipe_2_pane_t1_cp_ParamLimits

0xddef,	// (0x0001c85b) call5_swipe_2_pane_t1_cp

0x919b,	// (0x00017c07) main_sp_fs_email_pane

0xde04,	// (0x0001c870) main_sp_fs_listscroll_pane_te

0x6d3e,	// (0x000157aa) popup_sp_fs_action_menu_pane_ParamLimits

0x6d3e,	// (0x000157aa) popup_sp_fs_action_menu_pane

0x9b9b,	// (0x00018607) bg_sp_fs_ctrlbar_pane_g1

0xde0d,	// (0x0001c879) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xde16,	// (0x0001c882) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xb9ef,	// (0x0001a45b) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x9b9b,	// (0x00018607) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfc1d,	// (0x0001e689) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xbb9d,	// (0x0001a609) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xbb9d,	// (0x0001a609) bg_sp_fs_ctrlbar_ddmenu_pane

0xde1f,	// (0x0001c88b) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xde1f,	// (0x0001c88b) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xde2b,	// (0x0001c897) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xde2b,	// (0x0001c897) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfc26,	// (0x0001e692) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfc26,	// (0x0001e692) main_sp_fs_ctrlbar_ddmenu_pane_g

0xde37,	// (0x0001c8a3) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xde37,	// (0x0001c8a3) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x9b9b,	// (0x00018607) list_medium_line_t2_right_icon_g1

0xa0fc,	// (0x00018b68) list_medium_line_t2_right_icon_t1

0xa0fc,	// (0x00018b68) list_medium_line_t2_right_icon_t2

0x0001,

0xfc2b,	// (0x0001e697) list_medium_line_t2_right_icon_t

0xa72e,	// (0x0001919a) bg_sp_fs_ctrlbar_pane_ParamLimits

0xa72e,	// (0x0001919a) bg_sp_fs_ctrlbar_pane

0x6dc8,	// (0x00015834) main_sp_fs_ctrlbar_button_pane_cp01

0x6dd2,	// (0x0001583e) main_sp_fs_ctrlbar_ddmenu_pane

0xde89,	// (0x0001c8f5) main_sp_fs_ctrlbar_pane_g1

0xde95,	// (0x0001c901) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfc30,	// (0x0001e69c) main_sp_fs_ctrlbar_pane_g

0x6e10,	// (0x0001587c) main_sp_fs_ctrlbar_pane_t1

0x6e4f,	// (0x000158bb) main_sp_fs_ctrlbar_pane

0x6e73,	// (0x000158df) main_sp_fs_listscroll_pane_te_cp01

0x6e93,	// (0x000158ff) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x6e93,	// (0x000158ff) popup_sp_fs_action_menu_pane_cp01

0x919b,	// (0x00017c07) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x919b,	// (0x00017c07) bg_sp_fs_highlight_list_pane_cp01

0xdebc,	// (0x0001c928) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xdebc,	// (0x0001c928) sp_fs_action_menu_list_gene_pane_g1

0xdecb,	// (0x0001c937) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xdecb,	// (0x0001c937) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfc3e,	// (0x0001e6aa) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfc3e,	// (0x0001e6aa) sp_fs_action_menu_list_gene_pane_g

0xded8,	// (0x0001c944) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xded8,	// (0x0001c944) sp_fs_action_menu_list_gene_pane_t1

0xdef0,	// (0x0001c95c) sp_fs_action_menu_list_gene_pane_ParamLimits

0xdef0,	// (0x0001c95c) sp_fs_action_menu_list_gene_pane

0xdf0f,	// (0x0001c97b) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xdf0f,	// (0x0001c97b) popup_sp_fs_action_menu_bg_pane

0xdf1d,	// (0x0001c989) sp_fs_action_menu_list_pane_ParamLimits

0xdf1d,	// (0x0001c989) sp_fs_action_menu_list_pane

0x6eb8,	// (0x00015924) sp_fs_scroll_pane_cp01_ParamLimits

0x6eb8,	// (0x00015924) sp_fs_scroll_pane_cp01

0xa0fc,	// (0x00018b68) list_medium_line_plain_t2_t1

0xa0fc,	// (0x00018b68) list_medium_line_plain_t2_t2

0x0001,

0xfc2b,	// (0x0001e697) list_medium_line_plain_t2_t

0xa0fc,	// (0x00018b68) list_medium_line_plain_t3_t1

0xa0fc,	// (0x00018b68) list_medium_line_plain_t3_t2

0xa0fc,	// (0x00018b68) list_medium_line_plain_t3_t3

0x0002,

0xf27c,	// (0x0001dce8) list_medium_line_plain_t3_t

0x9892,	// (0x000182fe) list_medium_line_x2_t2_g2_g1_ParamLimits

0x9892,	// (0x000182fe) list_medium_line_x2_t2_g2_g1

0x9892,	// (0x000182fe) list_medium_line_x2_t2_g2_g2_ParamLimits

0x9892,	// (0x000182fe) list_medium_line_x2_t2_g2_g2

0x0001,

0xf1c1,	// (0x0001dc2d) list_medium_line_x2_t2_g2_g_ParamLimits

0xf1c1,	// (0x0001dc2d) list_medium_line_x2_t2_g2_g

0x9b6d,	// (0x000185d9) list_medium_line_x2_t2_g2_t1_ParamLimits

0x9b6d,	// (0x000185d9) list_medium_line_x2_t2_g2_t1

0x9b6d,	// (0x000185d9) list_medium_line_x2_t2_g2_t2_ParamLimits

0x9b6d,	// (0x000185d9) list_medium_line_x2_t2_g2_t2

0x0001,

0xf196,	// (0x0001dc02) list_medium_line_x2_t2_g2_t_ParamLimits

0xf196,	// (0x0001dc02) list_medium_line_x2_t2_g2_t

0x9892,	// (0x000182fe) list_medium_line_x2_t4_g2_g1_ParamLimits

0x9892,	// (0x000182fe) list_medium_line_x2_t4_g2_g1

0x9892,	// (0x000182fe) list_medium_line_x2_t4_g2_g2_ParamLimits

0x9892,	// (0x000182fe) list_medium_line_x2_t4_g2_g2

0x0001,

0xf1c1,	// (0x0001dc2d) list_medium_line_x2_t4_g2_g_ParamLimits

0xf1c1,	// (0x0001dc2d) list_medium_line_x2_t4_g2_g

0x9b6d,	// (0x000185d9) list_medium_line_x2_t4_g2_t1_ParamLimits

0x9b6d,	// (0x000185d9) list_medium_line_x2_t4_g2_t1

0x9b6d,	// (0x000185d9) list_medium_line_x2_t4_g2_t2_ParamLimits

0x9b6d,	// (0x000185d9) list_medium_line_x2_t4_g2_t2

0x9b6d,	// (0x000185d9) list_medium_line_x2_t4_g2_t3_ParamLimits

0x9b6d,	// (0x000185d9) list_medium_line_x2_t4_g2_t3

0x9b6d,	// (0x000185d9) list_medium_line_x2_t4_g2_t4_ParamLimits

0x9b6d,	// (0x000185d9) list_medium_line_x2_t4_g2_t4

0x0003,

0xf1cf,	// (0x0001dc3b) list_medium_line_x2_t4_g2_t_ParamLimits

0xf1cf,	// (0x0001dc3b) list_medium_line_x2_t4_g2_t

0x9b9b,	// (0x00018607) list_medium_line_t3_right_iconx2_g1

0x9b9b,	// (0x00018607) list_medium_line_t3_right_iconx2_g2

0x9b9b,	// (0x00018607) list_medium_line_t3_right_iconx2_g3

0x0002,

0xf39d,	// (0x0001de09) list_medium_line_t3_right_iconx2_g

0xa0fc,	// (0x00018b68) list_medium_line_t3_right_iconx2_t1

0xa0fc,	// (0x00018b68) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfc2b,	// (0x0001e697) list_medium_line_t3_right_iconx2_t

0x9892,	// (0x000182fe) list_medium_line_x3_t4_g4_g1_ParamLimits

0x9892,	// (0x000182fe) list_medium_line_x3_t4_g4_g1

0x9892,	// (0x000182fe) list_medium_line_x3_t4_g4_g2_ParamLimits

0x9892,	// (0x000182fe) list_medium_line_x3_t4_g4_g2

0x9892,	// (0x000182fe) list_medium_line_x3_t4_g4_g3_ParamLimits

0x9892,	// (0x000182fe) list_medium_line_x3_t4_g4_g3

0x9892,	// (0x000182fe) list_medium_line_x3_t4_g4_g4_ParamLimits

0x9892,	// (0x000182fe) list_medium_line_x3_t4_g4_g4

0x0003,

0xf1c6,	// (0x0001dc32) list_medium_line_x3_t4_g4_g_ParamLimits

0xf1c6,	// (0x0001dc32) list_medium_line_x3_t4_g4_g

0x9b6d,	// (0x000185d9) list_medium_line_x3_t4_g4_t1_ParamLimits

0x9b6d,	// (0x000185d9) list_medium_line_x3_t4_g4_t1

0x9b6d,	// (0x000185d9) list_medium_line_x3_t4_g4_t2_ParamLimits

0x9b6d,	// (0x000185d9) list_medium_line_x3_t4_g4_t2

0x9b6d,	// (0x000185d9) list_medium_line_x3_t4_g4_t3_ParamLimits

0x9b6d,	// (0x000185d9) list_medium_line_x3_t4_g4_t3

0x9b6d,	// (0x000185d9) list_medium_line_x3_t4_g4_t4_ParamLimits

0x9b6d,	// (0x000185d9) list_medium_line_x3_t4_g4_t4

0x0003,

0xf1cf,	// (0x0001dc3b) list_medium_line_x3_t4_g4_t_ParamLimits

0xf1cf,	// (0x0001dc3b) list_medium_line_x3_t4_g4_t

0x6ede,	// (0x0001594a) list_single_dyc_row_text_pane_t1_ParamLimits

0x6ede,	// (0x0001594a) list_single_dyc_row_text_pane_t1

0x6f27,	// (0x00015993) list_single_dyc_row_text_pane_t2_ParamLimits

0x6f27,	// (0x00015993) list_single_dyc_row_text_pane_t2

0xdf3d,	// (0x0001c9a9) list_single_dyc_row_text_pane_t3_ParamLimits

0xdf3d,	// (0x0001c9a9) list_single_dyc_row_text_pane_t3

0x0005,

0xfc43,	// (0x0001e6af) list_single_dyc_row_text_pane_t_ParamLimits

0xfc43,	// (0x0001e6af) list_single_dyc_row_text_pane_t

0xdf61,	// (0x0001c9cd) list_single_dyc_row_pane_g1_ParamLimits

0xdf61,	// (0x0001c9cd) list_single_dyc_row_pane_g1

0xdf6d,	// (0x0001c9d9) list_single_dyc_row_pane_g2_ParamLimits

0xdf6d,	// (0x0001c9d9) list_single_dyc_row_pane_g2

0xdf79,	// (0x0001c9e5) list_single_dyc_row_pane_g3_ParamLimits

0xdf79,	// (0x0001c9e5) list_single_dyc_row_pane_g3

0xdf85,	// (0x0001c9f1) list_single_dyc_row_pane_g4_ParamLimits

0xdf85,	// (0x0001c9f1) list_single_dyc_row_pane_g4

0x0003,

0xfc50,	// (0x0001e6bc) list_single_dyc_row_pane_g_ParamLimits

0xfc50,	// (0x0001e6bc) list_single_dyc_row_pane_g

0xdf91,	// (0x0001c9fd) list_single_dyc_row_text_pane_ParamLimits

0xdf91,	// (0x0001c9fd) list_single_dyc_row_text_pane

0x912c,	// (0x00017b98) bg_sp_fs_scroll_pane

0xdfb0,	// (0x0001ca1c) thumb_sp_fs_scroll_pane

0x9892,	// (0x000182fe) list_medium_line_g1_ParamLimits

0x9892,	// (0x000182fe) list_medium_line_g1

0x9b6d,	// (0x000185d9) list_medium_line_t1_ParamLimits

0x9b6d,	// (0x000185d9) list_medium_line_t1

0x9892,	// (0x000182fe) list_medium_line_x2_g1_ParamLimits

0x9892,	// (0x000182fe) list_medium_line_x2_g1

0x9892,	// (0x000182fe) list_medium_line_x2_g2_ParamLimits

0x9892,	// (0x000182fe) list_medium_line_x2_g2

0x0001,

0xf1c1,	// (0x0001dc2d) list_medium_line_x2_g_ParamLimits

0xf1c1,	// (0x0001dc2d) list_medium_line_x2_g

0x9b6d,	// (0x000185d9) list_medium_line_x2_t1_ParamLimits

0x9b6d,	// (0x000185d9) list_medium_line_x2_t1

0x9892,	// (0x000182fe) list_medium_line_x3_g1_ParamLimits

0x9892,	// (0x000182fe) list_medium_line_x3_g1

0xdfb9,	// (0x0001ca25) list_medium_line_x3_g2_ParamLimits

0xdfb9,	// (0x0001ca25) list_medium_line_x3_g2

0x0001,

0xfc59,	// (0x0001e6c5) list_medium_line_x3_g_ParamLimits

0xfc59,	// (0x0001e6c5) list_medium_line_x3_g

0xdfc7,	// (0x0001ca33) list_medium_line_x3_t1_ParamLimits

0xdfc7,	// (0x0001ca33) list_medium_line_x3_t1

0xdfdb,	// (0x0001ca47) thumb_sp_fs_scroll_pane_g1

0xdfe4,	// (0x0001ca50) thumb_sp_fs_scroll_pane_g2

0xdfed,	// (0x0001ca59) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfc5e,	// (0x0001e6ca) thumb_sp_fs_scroll_pane_g

0xdfdb,	// (0x0001ca47) bg_sp_fs_scroll_pane_g1

0xdfe4,	// (0x0001ca50) bg_sp_fs_scroll_pane_g2

0xdfed,	// (0x0001ca59) bg_sp_fs_scroll_pane_g3

0x0002,

0xfc5e,	// (0x0001e6ca) bg_sp_fs_scroll_pane_g

0x9892,	// (0x000182fe) list_medium_line_x2_t3_g4_g1_ParamLimits

0x9892,	// (0x000182fe) list_medium_line_x2_t3_g4_g1

0x9892,	// (0x000182fe) list_medium_line_x2_t3_g4_g2_ParamLimits

0x9892,	// (0x000182fe) list_medium_line_x2_t3_g4_g2

0x9892,	// (0x000182fe) list_medium_line_x2_t3_g4_g3_ParamLimits

0x9892,	// (0x000182fe) list_medium_line_x2_t3_g4_g3

0x9892,	// (0x000182fe) list_medium_line_x2_t3_g4_g4_ParamLimits

0x9892,	// (0x000182fe) list_medium_line_x2_t3_g4_g4

0x0003,

0xf1c6,	// (0x0001dc32) list_medium_line_x2_t3_g4_g_ParamLimits

0xf1c6,	// (0x0001dc32) list_medium_line_x2_t3_g4_g

0x9b6d,	// (0x000185d9) list_medium_line_x2_t3_g4_t1_ParamLimits

0x9b6d,	// (0x000185d9) list_medium_line_x2_t3_g4_t1

0x9b6d,	// (0x000185d9) list_medium_line_x2_t3_g4_t2_ParamLimits

0x9b6d,	// (0x000185d9) list_medium_line_x2_t3_g4_t2

0x9b6d,	// (0x000185d9) list_medium_line_x2_t3_g4_t3_ParamLimits

0x9b6d,	// (0x000185d9) list_medium_line_x2_t3_g4_t3

0x0002,

0xf1ba,	// (0x0001dc26) list_medium_line_x2_t3_g4_t_ParamLimits

0xf1ba,	// (0x0001dc26) list_medium_line_x2_t3_g4_t

0x9892,	// (0x000182fe) list_medium_line_g2_g1_ParamLimits

0x9892,	// (0x000182fe) list_medium_line_g2_g1

0x9892,	// (0x000182fe) list_medium_line_g2_g2_ParamLimits

0x9892,	// (0x000182fe) list_medium_line_g2_g2

0x0001,

0xf1c1,	// (0x0001dc2d) list_medium_line_g2_g_ParamLimits

0xf1c1,	// (0x0001dc2d) list_medium_line_g2_g

0x9b6d,	// (0x000185d9) list_medium_line_g2_t1_ParamLimits

0x9b6d,	// (0x000185d9) list_medium_line_g2_t1

0x9892,	// (0x000182fe) list_medium_line_t3_g2_g1_ParamLimits

0x9892,	// (0x000182fe) list_medium_line_t3_g2_g1

0x9892,	// (0x000182fe) list_medium_line_t3_g2_g2_ParamLimits

0x9892,	// (0x000182fe) list_medium_line_t3_g2_g2

0x0001,

0xf1c1,	// (0x0001dc2d) list_medium_line_t3_g2_g_ParamLimits

0xf1c1,	// (0x0001dc2d) list_medium_line_t3_g2_g

0x9b6d,	// (0x000185d9) list_medium_line_t3_g2_t1_ParamLimits

0x9b6d,	// (0x000185d9) list_medium_line_t3_g2_t1

0x9b6d,	// (0x000185d9) list_medium_line_t3_g2_t2_ParamLimits

0x9b6d,	// (0x000185d9) list_medium_line_t3_g2_t2

0x9b6d,	// (0x000185d9) list_medium_line_t3_g2_t3_ParamLimits

0x9b6d,	// (0x000185d9) list_medium_line_t3_g2_t3

0x0002,

0xf1ba,	// (0x0001dc26) list_medium_line_t3_g2_t_ParamLimits

0xf1ba,	// (0x0001dc26) list_medium_line_t3_g2_t

0x9b9b,	// (0x00018607) list_medium_line_right_icon_g1

0xa0fc,	// (0x00018b68) list_medium_line_right_icon_t1

0x9892,	// (0x000182fe) list_medium_line_t2_g1_ParamLimits

0x9892,	// (0x000182fe) list_medium_line_t2_g1

0x9b6d,	// (0x000185d9) list_medium_line_t2_t1_ParamLimits

0x9b6d,	// (0x000185d9) list_medium_line_t2_t1

0x9b6d,	// (0x000185d9) list_medium_line_t2_t2_ParamLimits

0x9b6d,	// (0x000185d9) list_medium_line_t2_t2

0x0001,

0xf196,	// (0x0001dc02) list_medium_line_t2_t_ParamLimits

0xf196,	// (0x0001dc02) list_medium_line_t2_t

0x9892,	// (0x000182fe) list_medium_line_t3_g1_ParamLimits

0x9892,	// (0x000182fe) list_medium_line_t3_g1

0x9b6d,	// (0x000185d9) list_medium_line_t3_t1_ParamLimits

0x9b6d,	// (0x000185d9) list_medium_line_t3_t1

0x9b6d,	// (0x000185d9) list_medium_line_t3_t2_ParamLimits

0x9b6d,	// (0x000185d9) list_medium_line_t3_t2

0x9b6d,	// (0x000185d9) list_medium_line_t3_t3_ParamLimits

0x9b6d,	// (0x000185d9) list_medium_line_t3_t3

0x0002,

0xf1ba,	// (0x0001dc26) list_medium_line_t3_t_ParamLimits

0xf1ba,	// (0x0001dc26) list_medium_line_t3_t

0x9892,	// (0x000182fe) list_medium_line_g3_g1_ParamLimits

0x9892,	// (0x000182fe) list_medium_line_g3_g1

0x9892,	// (0x000182fe) list_medium_line_g3_g2_ParamLimits

0x9892,	// (0x000182fe) list_medium_line_g3_g2

0x9892,	// (0x000182fe) list_medium_line_g3_g3_ParamLimits

0x9892,	// (0x000182fe) list_medium_line_g3_g3

0x0002,

0xf1b3,	// (0x0001dc1f) list_medium_line_g3_g_ParamLimits

0xf1b3,	// (0x0001dc1f) list_medium_line_g3_g

0x9b6d,	// (0x000185d9) list_medium_line_g3_t1_ParamLimits

0x9b6d,	// (0x000185d9) list_medium_line_g3_t1

0x9892,	// (0x000182fe) list_medium_line_t2_g3_g1_ParamLimits

0x9892,	// (0x000182fe) list_medium_line_t2_g3_g1

0x9892,	// (0x000182fe) list_medium_line_t2_g3_g2_ParamLimits

0x9892,	// (0x000182fe) list_medium_line_t2_g3_g2

0x9892,	// (0x000182fe) list_medium_line_t2_g3_g3_ParamLimits

0x9892,	// (0x000182fe) list_medium_line_t2_g3_g3

0x0002,

0xf1b3,	// (0x0001dc1f) list_medium_line_t2_g3_g_ParamLimits

0xf1b3,	// (0x0001dc1f) list_medium_line_t2_g3_g

0x9b6d,	// (0x000185d9) list_medium_line_t2_g3_t1_ParamLimits

0x9b6d,	// (0x000185d9) list_medium_line_t2_g3_t1

0x9b6d,	// (0x000185d9) list_medium_line_t2_g3_t2_ParamLimits

0x9b6d,	// (0x000185d9) list_medium_line_t2_g3_t2

0x0001,

0xf196,	// (0x0001dc02) list_medium_line_t2_g3_t_ParamLimits

0xf196,	// (0x0001dc02) list_medium_line_t2_g3_t

0x9892,	// (0x000182fe) list_medium_line_t3_g3_g1_ParamLimits

0x9892,	// (0x000182fe) list_medium_line_t3_g3_g1

0x9892,	// (0x000182fe) list_medium_line_t3_g3_g2_ParamLimits

0x9892,	// (0x000182fe) list_medium_line_t3_g3_g2

0x9892,	// (0x000182fe) list_medium_line_t3_g3_g3_ParamLimits

0x9892,	// (0x000182fe) list_medium_line_t3_g3_g3

0x0002,

0xf1b3,	// (0x0001dc1f) list_medium_line_t3_g3_g_ParamLimits

0xf1b3,	// (0x0001dc1f) list_medium_line_t3_g3_g

0x9b6d,	// (0x000185d9) list_medium_line_t3_g3_t1_ParamLimits

0x9b6d,	// (0x000185d9) list_medium_line_t3_g3_t1

0x9b6d,	// (0x000185d9) list_medium_line_t3_g3_t2_ParamLimits

0x9b6d,	// (0x000185d9) list_medium_line_t3_g3_t2

0x9b6d,	// (0x000185d9) list_medium_line_t3_g3_t3_ParamLimits

0x9b6d,	// (0x000185d9) list_medium_line_t3_g3_t3

0x0002,

0xf1ba,	// (0x0001dc26) list_medium_line_t3_g3_t_ParamLimits

0xf1ba,	// (0x0001dc26) list_medium_line_t3_g3_t

0x9b9b,	// (0x00018607) list_medium_line_right_iconx2_g1

0x9b9b,	// (0x00018607) list_medium_line_right_iconx2_g2

0x0001,

0xf398,	// (0x0001de04) list_medium_line_right_iconx2_g

0xa0fc,	// (0x00018b68) list_medium_line_right_iconx2_t1

0x9b9b,	// (0x00018607) list_medium_line_t2_right_iconx2_g1

0x9b9b,	// (0x00018607) list_medium_line_t2_right_iconx2_g2

0x0001,

0xf398,	// (0x0001de04) list_medium_line_t2_right_iconx2_g

0xa0fc,	// (0x00018b68) list_medium_line_t2_right_iconx2_t1

0xa0fc,	// (0x00018b68) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfc2b,	// (0x0001e697) list_medium_line_t2_right_iconx2_t

0xa0fc,	// (0x00018b68) list_medium_line_x4_t4_t1

0xa0fc,	// (0x00018b68) list_medium_line_x4_t4_t2

0xa0fc,	// (0x00018b68) list_medium_line_x4_t4_t3

0xa0fc,	// (0x00018b68) list_medium_line_x4_t4_t4

0x0003,

0xf283,	// (0x0001dcef) list_medium_line_x4_t4_t

0x709f,	// (0x00015b0b) tport_appsw_pane_ParamLimits

0x709f,	// (0x00015b0b) tport_appsw_pane

0x70b7,	// (0x00015b23) tport_contact_pane_ParamLimits

0x70b7,	// (0x00015b23) tport_contact_pane

0x70cf,	// (0x00015b3b) tport_listscroll_pane_ParamLimits

0x70cf,	// (0x00015b3b) tport_listscroll_pane

0x70e9,	// (0x00015b55) cell_tport_appsw_pane_ParamLimits

0x70e9,	// (0x00015b55) cell_tport_appsw_pane

0xa6f8,	// (0x00019164) tport_appsw_pane_g1_ParamLimits

0xa6f8,	// (0x00019164) tport_appsw_pane_g1

0xdff6,	// (0x0001ca62) tport_contact_pane_g1

0xdfff,	// (0x0001ca6b) tport_contact_pane_t1

0xe00d,	// (0x0001ca79) tport_contact_pane_t2

0x0001,

0xfc65,	// (0x0001e6d1) tport_contact_pane_t

0xe01b,	// (0x0001ca87) list_tport_pane

0xe024,	// (0x0001ca90) scroll_pane_cp_030

0x7131,	// (0x00015b9d) cell_tport_appsw_pane_g1

0x7141,	// (0x00015bad) cell_tport_appsw_pane_t1

0x714f,	// (0x00015bbb) grid_highlight_pane_cp019

0x7157,	// (0x00015bc3) list_tport_double_graphic_pane_ParamLimits

0x7157,	// (0x00015bc3) list_tport_double_graphic_pane

0x919b,	// (0x00017c07) list_highlight_pane_cp023_ParamLimits

0x919b,	// (0x00017c07) list_highlight_pane_cp023

0x7164,	// (0x00015bd0) list_tport_double_graphic_pane_g1_ParamLimits

0x7164,	// (0x00015bd0) list_tport_double_graphic_pane_g1

0x7171,	// (0x00015bdd) list_tport_double_graphic_pane_t1_ParamLimits

0x7171,	// (0x00015bdd) list_tport_double_graphic_pane_t1

0x7186,	// (0x00015bf2) list_tport_double_graphic_pane_t2_ParamLimits

0x7186,	// (0x00015bf2) list_tport_double_graphic_pane_t2

0x0001,

0xfc71,	// (0x0001e6dd) list_tport_double_graphic_pane_t_ParamLimits

0xfc71,	// (0x0001e6dd) list_tport_double_graphic_pane_t

0x912c,	// (0x00017b98) main_cale_note_pane

0x4edc,	// (0x00013948) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x4edc,	// (0x00013948) cell_vitu2_function_top_wide_pane_cp01

0x68e6,	// (0x00015352) wait_bar_pane_cp05_ParamLimits

0x919b,	// (0x00017c07) listscroll_cmail_pane

0xe035,	// (0x0001caa1) list_cmail_pane

0x7198,	// (0x00015c04) list_cmail_body_pane

0x71ae,	// (0x00015c1a) list_single_cmail_header_caption_pane

0x71c5,	// (0x00015c31) list_single_cmail_header_detail_pane_ParamLimits

0x71c5,	// (0x00015c31) list_single_cmail_header_detail_pane

0xe04c,	// (0x0001cab8) list_single_cmail_header_caption_pane_t1

0x71f3,	// (0x00015c5f) list_single_cmail_header_detail_pane_g1_ParamLimits

0x71f3,	// (0x00015c5f) list_single_cmail_header_detail_pane_g1

0xe063,	// (0x0001cacf) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe063,	// (0x0001cacf) list_single_cmail_header_detail_pane_g2

0x0002,

0xfc76,	// (0x0001e6e2) list_single_cmail_header_detail_pane_g_ParamLimits

0xfc76,	// (0x0001e6e2) list_single_cmail_header_detail_pane_g

0x720b,	// (0x00015c77) list_single_cmail_header_detail_pane_t1_ParamLimits

0x720b,	// (0x00015c77) list_single_cmail_header_detail_pane_t1

0x7249,	// (0x00015cb5) list_single_cmail_header_editor_pane_bg_ParamLimits

0x7249,	// (0x00015cb5) list_single_cmail_header_editor_pane_bg

0xda20,	// (0x0001c48c) list_cmail_body_pane_g1

0xe0a0,	// (0x0001cb0c) list_cmail_body_pane_t1

0xcc10,	// (0x0001b67c) list_single_cmail_header_editor_pane_bg_g1

0x9dac,	// (0x00018818) list_single_cmail_header_editor_pane_bg_g1_copy1

0xcc20,	// (0x0001b68c) list_single_cmail_header_editor_pane_bg_g1_copy2

0xcc18,	// (0x0001b684) list_single_cmail_header_editor_pane_bg_g1_copy3

0xce9e,	// (0x0001b90a) list_single_cmail_header_editor_pane_bg_g1_copy4

0xcc40,	// (0x0001b6ac) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xcc30,	// (0x0001b69c) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xcc38,	// (0x0001b6a4) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x9d8c,	// (0x000187f8) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x7262,	// (0x00015cce) calenote_gesture_pane_ParamLimits

0x7262,	// (0x00015cce) calenote_gesture_pane

0x7282,	// (0x00015cee) calenote_window_pane_ParamLimits

0x7282,	// (0x00015cee) calenote_window_pane

0xe0ae,	// (0x0001cb1a) popup_note_window_cp01

0x729e,	// (0x00015d0a) calenote_swipe_1_pane_ParamLimits

0x729e,	// (0x00015d0a) calenote_swipe_1_pane

0x6d24,	// (0x00015790) calenote_swipe_2_pane_ParamLimits

0x6d24,	// (0x00015790) calenote_swipe_2_pane

0xdd72,	// (0x0001c7de) calenote_swipe_1_pane_g1_ParamLimits

0xdd72,	// (0x0001c7de) calenote_swipe_1_pane_g1

0xdd7f,	// (0x0001c7eb) calenote_swipe_1_pane_g2_ParamLimits

0xdd7f,	// (0x0001c7eb) calenote_swipe_1_pane_g2

0x0001,

0xfc13,	// (0x0001e67f) calenote_swipe_1_pane_g_ParamLimits

0xfc13,	// (0x0001e67f) calenote_swipe_1_pane_g

0xe0c0,	// (0x0001cb2c) calenote_swipe_1_pane_t1_ParamLimits

0xe0c0,	// (0x0001cb2c) calenote_swipe_1_pane_t1

0xdd72,	// (0x0001c7de) calenote_swipe_2_pane_g1_ParamLimits

0xdd72,	// (0x0001c7de) calenote_swipe_2_pane_g1

0xe0df,	// (0x0001cb4b) calenote_swipe_2_pane_g2_ParamLimits

0xe0df,	// (0x0001cb4b) calenote_swipe_2_pane_g2

0x0001,

0xfc82,	// (0x0001e6ee) calenote_swipe_2_pane_g_ParamLimits

0xfc82,	// (0x0001e6ee) calenote_swipe_2_pane_g

0xe0eb,	// (0x0001cb57) calenote_swipe_2_pane_t1_ParamLimits

0xe0eb,	// (0x0001cb57) calenote_swipe_2_pane_t1

0x912c,	// (0x00017b98) main_mup_navstr_pane

0x3d79,	// (0x000127e5) main_mup3_pane_t7_ParamLimits

0x3d79,	// (0x000127e5) main_mup3_pane_t7

0xc7f4,	// (0x0001b260) main_mp4_pane_g6_ParamLimits

0xc7f4,	// (0x0001b260) main_mp4_pane_g6

0xca47,	// (0x0001b4b3) main_image3_pane_t4_ParamLimits

0xca47,	// (0x0001b4b3) main_image3_pane_t4

0x72b3,	// (0x00015d1f) popup_navstr_preview_pane_ParamLimits

0x72b3,	// (0x00015d1f) popup_navstr_preview_pane

0x72c7,	// (0x00015d33) scroll_navstr_pane_ParamLimits

0x72c7,	// (0x00015d33) scroll_navstr_pane

0x912c,	// (0x00017b98) bg_popup_preview_window_pane_cp04

0xe112,	// (0x0001cb7e) popup_navstr_preview_pane_t1

0x72db,	// (0x00015d47) scroll_navstr_pane_g1_ParamLimits

0x72db,	// (0x00015d47) scroll_navstr_pane_g1

0x72ef,	// (0x00015d5b) scroll_navstr_pane_t1_ParamLimits

0x72ef,	// (0x00015d5b) scroll_navstr_pane_t1

0xe0b7,	// (0x0001cb23) bg_button_pane_cp014

0xe0b7,	// (0x0001cb23) bg_button_pane_cp030

0x6bfd,	// (0x00015669) list_double_fisheye_pane_g4_ParamLimits

0x6bfd,	// (0x00015669) list_double_fisheye_pane_g4

0x6c09,	// (0x00015675) list_double_fisheye_pane_g5_ParamLimits

0x6c09,	// (0x00015675) list_double_fisheye_pane_g5

0xceea,	// (0x0001b956) sp_fs_scroll_pane_cp03

0xde89,	// (0x0001c8f5) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xde95,	// (0x0001c901) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfc30,	// (0x0001e69c) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x6e10,	// (0x0001587c) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe044,	// (0x0001cab0) sp_fs_scroll_pane_cp02

0x9aa3,	// (0x0001850f) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x9aa3,	// (0x0001850f) popup_sp_fs_calendar_preview_list_single_pane

0x912c,	// (0x00017b98) main_cam6_pano_pane

0x919b,	// (0x00017c07) main_mup3_pane_ParamLimits

0x912c,	// (0x00017b98) main_phacti_pane

0x67b9,	// (0x00015225) bg_button_pane_cp11

0x67d3,	// (0x0001523f) main_mobtv_info_pane_g2_ParamLimits

0x67d3,	// (0x0001523f) main_mobtv_info_pane_g2

0x0001,

0xfb90,	// (0x0001e5fc) main_mobtv_info_pane_g_ParamLimits

0xfb90,	// (0x0001e5fc) main_mobtv_info_pane_g

0x69b0,	// (0x0001541c) sc_clock_pane_t5_ParamLimits

0x69b0,	// (0x0001541c) sc_clock_pane_t5

0x6a78,	// (0x000154e4) main_radioblah_pane_g1_ParamLimits

0xdcbe,	// (0x0001c72a) main_radioblah_pane_t3_ParamLimits

0xdcbe,	// (0x0001c72a) main_radioblah_pane_t3

0xdcd6,	// (0x0001c742) main_radioblah_pane_t4_ParamLimits

0xdcd6,	// (0x0001c742) main_radioblah_pane_t4

0x6aa0,	// (0x0001550c) main_radioblah_text_pane_ParamLimits

0x6aa0,	// (0x0001550c) main_radioblah_text_pane

0x6ab2,	// (0x0001551e) main_radioblah_info_pane_g1_ParamLimits

0x6b4b,	// (0x000155b7) main_radioblah_info_pane_t4_ParamLimits

0x6b4b,	// (0x000155b7) main_radioblah_info_pane_t4

0x919b,	// (0x00017c07) main_sp_fs_calendar_pane

0x7306,	// (0x00015d72) main_phacti_pane_g1

0x730e,	// (0x00015d7a) phacti_note_pane_ParamLimits

0x730e,	// (0x00015d7a) phacti_note_pane

0xe129,	// (0x0001cb95) phacti_term_pane_ParamLimits

0xe129,	// (0x0001cb95) phacti_term_pane

0xe13e,	// (0x0001cbaa) phacti_note_pane_t1_ParamLimits

0xe13e,	// (0x0001cbaa) phacti_note_pane_t1

0xe155,	// (0x0001cbc1) phacti_term_pane_g1

0xe15d,	// (0x0001cbc9) phacti_term_pane_t1_ParamLimits

0xe15d,	// (0x0001cbc9) phacti_term_pane_t1

0xe187,	// (0x0001cbf3) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe18f,	// (0x0001cbfb) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfc8c,	// (0x0001e6f8) popup_sp_fs_calendar_preview_list_single_pane_g

0xe197,	// (0x0001cc03) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe197,	// (0x0001cc03) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe1ad,	// (0x0001cc19) aid_popup_sp_fs_bg_corner_pane

0x9b9b,	// (0x00018607) popup_sp_fs_calendar_preview_bg_pane_g1

0x912c,	// (0x00017b98) popup_sp_fs_calendar_preview_bg_pane

0xe1b5,	// (0x0001cc21) popup_sp_fs_calendar_preview_list_pane

0xa72e,	// (0x0001919a) bg_main_sp_fs_cale_pane_ParamLimits

0xa72e,	// (0x0001919a) bg_main_sp_fs_cale_pane

0xe1c6,	// (0x0001cc32) listscroll_cale_mrui_pane_ParamLimits

0xe1c6,	// (0x0001cc32) listscroll_cale_mrui_pane

0xe1db,	// (0x0001cc47) listscroll_sp_fs_schedule_track_pane

0xe1e4,	// (0x0001cc50) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe1e4,	// (0x0001cc50) main_sp_fs_ctrlbar_pane_cp01

0xe1f7,	// (0x0001cc63) main_sp_fs_ribbon_pane

0xe1ff,	// (0x0001cc6b) popup_sp_fs_cale_preview_window

0x7383,	// (0x00015def) list_single_sp_fs_schedule_track_pane_ParamLimits

0x7383,	// (0x00015def) list_single_sp_fs_schedule_track_pane

0x919b,	// (0x00017c07) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x919b,	// (0x00017c07) bg_sp_fs_highlight_list_pane_cp03

0x7397,	// (0x00015e03) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x7397,	// (0x00015e03) list_single_sp_fs_schedule_track_pane_g1

0x73a3,	// (0x00015e0f) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x73a3,	// (0x00015e0f) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfc91,	// (0x0001e6fd) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfc91,	// (0x0001e6fd) list_single_sp_fs_schedule_track_pane_g

0x73af,	// (0x00015e1b) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x73af,	// (0x00015e1b) list_single_sp_fs_schedule_track_pane_t1

0x73c9,	// (0x00015e35) sp_fs_schedule_track_pane_ParamLimits

0x73c9,	// (0x00015e35) sp_fs_schedule_track_pane

0xe211,	// (0x0001cc7d) sp_fs_schedule_track_pane_g1

0xe219,	// (0x0001cc85) sp_fs_schedule_track_pane_g2

0xe221,	// (0x0001cc8d) sp_fs_schedule_track_pane_g3

0xe229,	// (0x0001cc95) sp_fs_schedule_track_pane_g4

0xe231,	// (0x0001cc9d) sp_fs_schedule_track_pane_g5

0x0004,

0xfc96,	// (0x0001e702) sp_fs_schedule_track_pane_g

0xcc10,	// (0x0001b67c) bg_sp_fs_schedule_viewer_highlight_g1

0x9dac,	// (0x00018818) bg_sp_fs_schedule_viewer_highlight_g2

0xcc18,	// (0x0001b684) bg_sp_fs_schedule_viewer_highlight_g3

0xcc20,	// (0x0001b68c) bg_sp_fs_schedule_viewer_highlight_g4

0xce9e,	// (0x0001b90a) bg_sp_fs_schedule_viewer_highlight_g5

0xcc30,	// (0x0001b69c) bg_sp_fs_schedule_viewer_highlight_g6

0xcc38,	// (0x0001b6a4) bg_sp_fs_schedule_viewer_highlight_g7

0xcc40,	// (0x0001b6ac) bg_sp_fs_schedule_viewer_highlight_g8

0x9d8c,	// (0x000187f8) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfca1,	// (0x0001e70d) bg_sp_fs_schedule_viewer_highlight_g

0x912c,	// (0x00017b98) bg_main_sp_fs_ribbon_pane

0x73da,	// (0x00015e46) main_sp_fs_ribbon_pane_g1

0xe239,	// (0x0001cca5) main_sp_fs_ribbon_pane_t1

0x73e3,	// (0x00015e4f) main_sp_fs_ribbon_pane_t2

0xe248,	// (0x0001ccb4) main_sp_fs_ribbon_pane_t3

0x0002,

0xfcb4,	// (0x0001e720) main_sp_fs_ribbon_pane_t

0xe257,	// (0x0001ccc3) main_sp_fs_ribbon_scheduler_pane

0xe25f,	// (0x0001cccb) bg_main_sp_fs_ribbon_pane_g1

0xe268,	// (0x0001ccd4) bg_main_sp_fs_ribbon_pane_g2

0xe271,	// (0x0001ccdd) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfcbb,	// (0x0001e727) bg_main_sp_fs_ribbon_pane_g

0xe279,	// (0x0001cce5) main_sp_fs_ribbon_scheduler_pane_g1

0xe282,	// (0x0001ccee) main_sp_fs_ribbon_scheduler_pane_g2

0xe28b,	// (0x0001ccf7) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfcc2,	// (0x0001e72e) main_sp_fs_ribbon_scheduler_pane_g

0xe294,	// (0x0001cd00) list_cale_mrui_pane

0x73f2,	// (0x00015e5e) sp_fs_scroll_pane_cp07_ParamLimits

0x73f2,	// (0x00015e5e) sp_fs_scroll_pane_cp07

0x740e,	// (0x00015e7a) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x740e,	// (0x00015e7a) bg_sp_fs_schedule_viewer_highlight

0xe2a1,	// (0x0001cd0d) list_single_sp_fs_schedule_track_pane_cp01

0xe2a9,	// (0x0001cd15) list_sp_fs_schedule_track_pane

0xe2b1,	// (0x0001cd1d) sp_fs_scroll_pane_cp06_ParamLimits

0xe2b1,	// (0x0001cd1d) sp_fs_scroll_pane_cp06

0x9b9b,	// (0x00018607) bgmain_sp_fs_calendar_pane_g1

0x741e,	// (0x00015e8a) list_single_cale_mrui_pane_ParamLimits

0x741e,	// (0x00015e8a) list_single_cale_mrui_pane

0xe2c3,	// (0x0001cd2f) list_single_cale_mrui_row_pane_ParamLimits

0xe2c3,	// (0x0001cd2f) list_single_cale_mrui_row_pane

0xe2d0,	// (0x0001cd3c) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe2d0,	// (0x0001cd3c) list_single_cale_mrui_row_pane_g1

0xe315,	// (0x0001cd81) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe315,	// (0x0001cd81) list_single_cale_mrui_row_pane_t1

0x743f,	// (0x00015eab) list_single_cale_mrui_row_pane_t2_ParamLimits

0x743f,	// (0x00015eab) list_single_cale_mrui_row_pane_t2

0xe327,	// (0x0001cd93) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe327,	// (0x0001cd93) list_single_cale_mrui_row_pane_t3

0xe356,	// (0x0001cdc2) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe356,	// (0x0001cdc2) list_single_cale_mrui_row_pane_t4

0x0003,

0xfcd0,	// (0x0001e73c) list_single_cale_mrui_row_pane_t_ParamLimits

0xfcd0,	// (0x0001e73c) list_single_cale_mrui_row_pane_t

0x74a7,	// (0x00015f13) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x74a7,	// (0x00015f13) list_single_cmail_header_editor_pane_bg_cp01

0x74d5,	// (0x00015f41) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x74d5,	// (0x00015f41) list_single_cmail_header_editor_pane_bg_cp02

0x74f5,	// (0x00015f61) main_radioblah_text_pane_t1_ParamLimits

0x74f5,	// (0x00015f61) main_radioblah_text_pane_t1

0xe385,	// (0x0001cdf1) cam6_indi_pane_cp01

0xe38d,	// (0x0001cdf9) cam6_mode_pane_cp01

0xe395,	// (0x0001ce01) cam6_pano_pane

0xe39e,	// (0x0001ce0a) cam6_zoom_pane_cp01

0xe3a6,	// (0x0001ce12) cam6_pano_image_pane

0xe3b1,	// (0x0001ce1d) cam6_pano_pane_g1

0xda20,	// (0x0001c48c) cam6_pano_pane_g2

0xe3ba,	// (0x0001ce26) cam6_pano_pane_g3

0xe3c3,	// (0x0001ce2f) cam6_pano_pane_g4

0xc4e9,	// (0x0001af55) cam6_pano_pane_g5

0xe3cc,	// (0x0001ce38) cam6_pano_pane_g6

0xe3d6,	// (0x0001ce42) cam6_pano_pane_g7

0xe3de,	// (0x0001ce4a) cam6_pano_pane_g8

0xe3e7,	// (0x0001ce53) cam6_pano_pane_g9

0x0008,

0xfcd9,	// (0x0001e745) cam6_pano_pane_g

0x912c,	// (0x00017b98) main_browser_tag_pane

0xe10a,	// (0x0001cb76) grid_navstr_albumart_pane

0xe3f2,	// (0x0001ce5e) cell_navstr_albumart_pane_ParamLimits

0xe3f2,	// (0x0001ce5e) cell_navstr_albumart_pane

0xe412,	// (0x0001ce7e) cell_navstr_albumart_pane_g1

0xb876,	// (0x0001a2e2) cell_navstr_albumart_pane_g2

0xb886,	// (0x0001a2f2) cell_navstr_albumart_pane_g3

0xb87e,	// (0x0001a2ea) cell_navstr_albumart_pane_g4

0x0003,

0xfcec,	// (0x0001e758) cell_navstr_albumart_pane_g

0x7510,	// (0x00015f7c) bt_list_pane_ParamLimits

0x7510,	// (0x00015f7c) bt_list_pane

0x7524,	// (0x00015f90) bt_list_pane_t1

0x7533,	// (0x00015f9f) bt_list_pane_t2

0x0001,

0xfcf5,	// (0x0001e761) bt_list_pane_t

0x912c,	// (0x00017b98) main_cale_prevew_pane

0x7542,	// (0x00015fae) popup_cale_preview_window_ParamLimits

0x7542,	// (0x00015fae) popup_cale_preview_window

0x919b,	// (0x00017c07) bg_popup_preview_window_pane_cp05_ParamLimits

0x919b,	// (0x00017c07) bg_popup_preview_window_pane_cp05

0xe41a,	// (0x0001ce86) list_cale_preview_pane_ParamLimits

0xe41a,	// (0x0001ce86) list_cale_preview_pane

0x755b,	// (0x00015fc7) list_double_cale_preview_pane_ParamLimits

0x755b,	// (0x00015fc7) list_double_cale_preview_pane

0xcc48,	// (0x0001b6b4) list_single_cale_preview_pane_ParamLimits

0xcc48,	// (0x0001b6b4) list_single_cale_preview_pane

0x756d,	// (0x00015fd9) list_single_cale_preview_pane_g1

0x7575,	// (0x00015fe1) list_single_cale_preview_pane_t1_ParamLimits

0x7575,	// (0x00015fe1) list_single_cale_preview_pane_t1

0x758a,	// (0x00015ff6) list_double_cale_preview_pane_g1

0x7592,	// (0x00015ffe) list_double_cale_preview_pane_t1_ParamLimits

0x7592,	// (0x00015ffe) list_double_cale_preview_pane_t1

0x75a7,	// (0x00016013) list_double_cale_preview_pane_t2_ParamLimits

0x75a7,	// (0x00016013) list_double_cale_preview_pane_t2

0x0001,

0xfcfa,	// (0x0001e766) list_double_cale_preview_pane_t_ParamLimits

0xfcfa,	// (0x0001e766) list_double_cale_preview_pane_t

0x912c,	// (0x00017b98) main_ezdial_pane

0x919b,	// (0x00017c07) main_sp_fs_email_pane_ParamLimits

0x6d80,	// (0x000157ec) cmail_ddmenu_btn01_pane_ParamLimits

0x6d80,	// (0x000157ec) cmail_ddmenu_btn01_pane

0x6d93,	// (0x000157ff) cmail_ddmenu_btn02_pane_ParamLimits

0x6d93,	// (0x000157ff) cmail_ddmenu_btn02_pane

0x6db6,	// (0x00015822) cmail_ddmenu_btn03_pane_ParamLimits

0x6db6,	// (0x00015822) cmail_ddmenu_btn03_pane

0x6e4f,	// (0x000158bb) main_sp_fs_ctrlbar_pane_ParamLimits

0x6e73,	// (0x000158df) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x7198,	// (0x00015c04) list_cmail_body_pane_ParamLimits

0xe05a,	// (0x0001cac6) bg_button_pane_cp12

0xe06f,	// (0x0001cadb) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe06f,	// (0x0001cadb) list_single_cmail_header_detail_pane_g3

0xe07c,	// (0x0001cae8) list_single_cmail_header_detail_pane_t2_ParamLimits

0xe07c,	// (0x0001cae8) list_single_cmail_header_detail_pane_t2

0x0001,

0xfc7d,	// (0x0001e6e9) list_single_cmail_header_detail_pane_t_ParamLimits

0xfc7d,	// (0x0001e6e9) list_single_cmail_header_detail_pane_t

0xe172,	// (0x0001cbde) phacti_term_pane_t2_ParamLimits

0xe172,	// (0x0001cbde) phacti_term_pane_t2

0x0001,

0xfc87,	// (0x0001e6f3) phacti_term_pane_t_ParamLimits

0xfc87,	// (0x0001e6f3) phacti_term_pane_t

0xe426,	// (0x0001ce92) aid_size_list_single_double

0x75bf,	// (0x0001602b) popup_ezdial_listscroll_window

0x75db,	// (0x00016047) popup_number_entry_window_cp01

0x9b5b,	// (0x000185c7) bg_popup_call_pane_cp09

0xe432,	// (0x0001ce9e) ezdial_list_pane

0xe43a,	// (0x0001cea6) scroll_pane_cp23

0xa72e,	// (0x0001919a) bg_button_pane_cp028_ParamLimits

0xa72e,	// (0x0001919a) bg_button_pane_cp028

0x75e9,	// (0x00016055) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x75e9,	// (0x00016055) cmail_ddmenu_btn01_pane_g1

0x75f5,	// (0x00016061) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x75f5,	// (0x00016061) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfcff,	// (0x0001e76b) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfcff,	// (0x0001e76b) cmail_ddmenu_btn01_pane_g

0xe442,	// (0x0001ceae) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xe442,	// (0x0001ceae) cmail_ddmenu_btn01_pane_t1

0xa72e,	// (0x0001919a) bg_button_pane_cp029_ParamLimits

0xa72e,	// (0x0001919a) bg_button_pane_cp029

0x7601,	// (0x0001606d) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x7601,	// (0x0001606d) cmail_ddmenu_btn02_pane_g1

0x7619,	// (0x00016085) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x7619,	// (0x00016085) cmail_ddmenu_btn02_pane_t1

0x919b,	// (0x00017c07) bg_button_pane_cp031_ParamLimits

0x919b,	// (0x00017c07) bg_button_pane_cp031

0x7601,	// (0x0001606d) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x7601,	// (0x0001606d) cmail_ddmenu_btn03_pane_g1

0x7619,	// (0x00016085) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x7619,	// (0x00016085) cmail_ddmenu_btn03_pane_t1

0x46d2,	// (0x0001313e) cell_dialer2_keypad_pane_t1_ParamLimits

0x46ec,	// (0x00013158) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x46ec,	// (0x00013158) cell_dialer2_keypad_pane_t1_copy1

0x65dc,	// (0x00015048) ncimui_group_button_pane

0x919b,	// (0x00017c07) main_sp_fs_calendar_pane_ParamLimits

0x71ae,	// (0x00015c1a) list_single_cmail_header_caption_pane_ParamLimits

0xe1bd,	// (0x0001cc29) aid_recal_txt_sm_pane

0x912c,	// (0x00017b98) mian_recal_day_pane

0xe1ff,	// (0x0001cc6b) popup_sp_fs_cale_preview_window_ParamLimits

0xe457,	// (0x0001cec3) list_recal_day_pane

0xe499,	// (0x0001cf05) list_single_recal_day_pane_ParamLimits

0xe499,	// (0x0001cf05) list_single_recal_day_pane

0xe4ab,	// (0x0001cf17) list_single_recal_day_pane_g1_ParamLimits

0xe4ab,	// (0x0001cf17) list_single_recal_day_pane_g1

0xe4b7,	// (0x0001cf23) list_single_recal_day_pane_g2_ParamLimits

0xe4b7,	// (0x0001cf23) list_single_recal_day_pane_g2

0xe4c3,	// (0x0001cf2f) list_single_recal_day_pane_g3_ParamLimits

0xe4c3,	// (0x0001cf2f) list_single_recal_day_pane_g3

0x763d,	// (0x000160a9) list_single_recal_day_pane_g4_ParamLimits

0x763d,	// (0x000160a9) list_single_recal_day_pane_g4

0xe4cf,	// (0x0001cf3b) list_single_recal_day_pane_g5_ParamLimits

0xe4cf,	// (0x0001cf3b) list_single_recal_day_pane_g5

0xe4db,	// (0x0001cf47) list_single_recal_day_pane_g6_ParamLimits

0xe4db,	// (0x0001cf47) list_single_recal_day_pane_g6

0x0004,

0xfd0e,	// (0x0001e77a) list_single_recal_day_pane_g_ParamLimits

0xfd0e,	// (0x0001e77a) list_single_recal_day_pane_g

0xe4ef,	// (0x0001cf5b) list_single_recal_day_pane_t1

0xe501,	// (0x0001cf6d) list_single_recal_day_pane_t2

0x0001,

0xfd19,	// (0x0001e785) list_single_recal_day_pane_t

0x7655,	// (0x000160c1) ncimui_query_button_pane_ParamLimits

0x7655,	// (0x000160c1) ncimui_query_button_pane

0x7665,	// (0x000160d1) ncimui_query_button_pane_t1_ParamLimits

0x7665,	// (0x000160d1) ncimui_query_button_pane_t1

0xe513,	// (0x0001cf7f) ncimui_query_button_pane_t2_ParamLimits

0xe513,	// (0x0001cf7f) ncimui_query_button_pane_t2

0x0001,

0xfd1e,	// (0x0001e78a) ncimui_query_button_pane_t_ParamLimits

0xfd1e,	// (0x0001e78a) ncimui_query_button_pane_t

0x7678,	// (0x000160e4) query_button_pane_ParamLimits

0x7678,	// (0x000160e4) query_button_pane

0x912c,	// (0x00017b98) bg_button_pane_cp0028

0xe526,	// (0x0001cf92) query_button_pane_t1

0x3179,	// (0x00011be5) main_tport_pane_ParamLimits

0x705c,	// (0x00015ac8) bg_popup_window_pane_cp01_ParamLimits

0x705c,	// (0x00015ac8) bg_popup_window_pane_cp01

0x7077,	// (0x00015ae3) heading_pane_cp08_ParamLimits

0x7077,	// (0x00015ae3) heading_pane_cp08

0x708a,	// (0x00015af6) heading_pane_cp07_ParamLimits

0x708a,	// (0x00015af6) heading_pane_cp07

0x7131,	// (0x00015b9d) cell_tport_appsw_pane_g2

0x0002,

0xfc6a,	// (0x0001e6d6) cell_tport_appsw_pane_g

0x26d1,	// (0x0001113d) input_candi_list_open_g1

0x9f9d,	// (0x00018a09) list_cale_time_pane_g6_ParamLimits

0x9f9d,	// (0x00018a09) list_cale_time_pane_g6

0x3786,	// (0x000121f2) aid_size_touch_calib_1_ParamLimits

0x3786,	// (0x000121f2) aid_size_touch_calib_1

0x3798,	// (0x00012204) aid_size_touch_calib_2_ParamLimits

0x3798,	// (0x00012204) aid_size_touch_calib_2

0x37b0,	// (0x0001221c) aid_size_touch_calib_3_ParamLimits

0x37b0,	// (0x0001221c) aid_size_touch_calib_3

0x37ce,	// (0x0001223a) aid_size_touch_calib_4_ParamLimits

0x37ce,	// (0x0001223a) aid_size_touch_calib_4

0x37e6,	// (0x00012252) main_touch_calib_button_group_pane_ParamLimits

0x37e6,	// (0x00012252) main_touch_calib_button_group_pane

0x37fe,	// (0x0001226a) main_touch_calib_pane_g1_ParamLimits

0x3810,	// (0x0001227c) main_touch_calib_pane_g2_ParamLimits

0x3822,	// (0x0001228e) main_touch_calib_pane_g3_ParamLimits

0x3834,	// (0x000122a0) main_touch_calib_pane_g4_ParamLimits

0xf6ac,	// (0x0001e118) main_touch_calib_pane_g_ParamLimits

0x3846,	// (0x000122b2) main_touch_calib_pane_t1_ParamLimits

0x3860,	// (0x000122cc) main_touch_calib_pane_t2_ParamLimits

0x387a,	// (0x000122e6) main_touch_calib_pane_t3_ParamLimits

0x388e,	// (0x000122fa) main_touch_calib_pane_t4_ParamLimits

0x38a2,	// (0x0001230e) main_touch_calib_pane_t5_ParamLimits

0xf6b5,	// (0x0001e121) main_touch_calib_pane_t_ParamLimits

0xc2af,	// (0x0001ad1b) list_single_fp_cale_pane_g3_ParamLimits

0xc2af,	// (0x0001ad1b) list_single_fp_cale_pane_g3

0x919b,	// (0x00017c07) bg_button_pane_cp012_ParamLimits

0x919b,	// (0x00017c07) bg_vkb2_func_pane_cp03_ParamLimits

0x57c5,	// (0x00014231) cell_vitu2_function_top_pane_g1_ParamLimits

0x919b,	// (0x00017c07) bg_vkb2_func_pane_cp04_ParamLimits

0x6567,	// (0x00014fd3) main_ncimui_button_group_pane_ParamLimits

0x6567,	// (0x00014fd3) main_ncimui_button_group_pane

0x65c7,	// (0x00015033) main_ncimui_pane_t3_ParamLimits

0x65c7,	// (0x00015033) main_ncimui_pane_t3

0xe120,	// (0x0001cb8c) phacti_button_group_pane

0xe426,	// (0x0001ce92) aid_size_list_single_double_ParamLimits

0x75bf,	// (0x0001602b) popup_ezdial_listscroll_window_ParamLimits

0x75db,	// (0x00016047) popup_number_entry_window_cp01_ParamLimits

0x768b,	// (0x000160f7) phacti_button_pane_ParamLimits

0x768b,	// (0x000160f7) phacti_button_pane

0x912c,	// (0x00017b98) bg_button_pane_cp14

0xe534,	// (0x0001cfa0) phacti_button_pane_t1

0x769c,	// (0x00016108) main_touch_calib_button_pane_ParamLimits

0x769c,	// (0x00016108) main_touch_calib_button_pane

0x9926,	// (0x00018392) bg_button_pane_cp18_ParamLimits

0x9926,	// (0x00018392) bg_button_pane_cp18

0xe542,	// (0x0001cfae) main_touch_calib_button_pane_t1_ParamLimits

0xe542,	// (0x0001cfae) main_touch_calib_button_pane_t1

0xe558,	// (0x0001cfc4) main_touch_calib_button_pane_t2_ParamLimits

0xe558,	// (0x0001cfc4) main_touch_calib_button_pane_t2

0x0001,

0xfd23,	// (0x0001e78f) main_touch_calib_button_pane_t_ParamLimits

0xfd23,	// (0x0001e78f) main_touch_calib_button_pane_t

0x912c,	// (0x00017b98) cell_ncimui_button_pane

0x912c,	// (0x00017b98) bg_button_pane_cp032

0xe576,	// (0x0001cfe2) cell_ncimui_button_pane_t1

0xca27,	// (0x0001b493) image3_infobar_pane_ParamLimits

0xca27,	// (0x0001b493) image3_infobar_pane

0x69dc,	// (0x00015448) fs_bigclock_status_pane_ParamLimits

0x69dc,	// (0x00015448) fs_bigclock_status_pane

0x69e9,	// (0x00015455) main_fs_bigclock_clock_pane_ParamLimits

0x69e9,	// (0x00015455) main_fs_bigclock_clock_pane

0x6a07,	// (0x00015473) main_fs_bigclock_indi_pane_ParamLimits

0x6a07,	// (0x00015473) main_fs_bigclock_indi_pane

0x6a39,	// (0x000154a5) main_fs_bigclock_swipe_pane_ParamLimits

0x6a39,	// (0x000154a5) main_fs_bigclock_swipe_pane

0x912c,	// (0x00017b98) main_fs_clock_dumped_data

0xdb2d,	// (0x0001c599) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xdb2d,	// (0x0001c599) list_single_fs_bigclock_indicator_pane_g1

0xdb49,	// (0x0001c5b5) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xdb49,	// (0x0001c5b5) list_single_fs_bigclock_indicator_pane_g2

0xdb63,	// (0x0001c5cf) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xdb63,	// (0x0001c5cf) list_single_fs_bigclock_indicator_pane_g3

0xdb7d,	// (0x0001c5e9) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xdb7d,	// (0x0001c5e9) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfbc4,	// (0x0001e630) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfbc4,	// (0x0001e630) list_single_fs_bigclock_indicator_pane_g

0xdba8,	// (0x0001c614) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xdba8,	// (0x0001c614) list_single_fs_bigclock_indicator_pane_t1

0xdbd0,	// (0x0001c63c) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xdbd0,	// (0x0001c63c) list_single_fs_bigclock_indicator_pane_t2

0xdbf8,	// (0x0001c664) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xdbf8,	// (0x0001c664) list_single_fs_bigclock_indicator_pane_t3

0xdc20,	// (0x0001c68c) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xdc20,	// (0x0001c68c) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfbcf,	// (0x0001e63b) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfbcf,	// (0x0001e63b) list_single_fs_bigclock_indicator_pane_t

0xe584,	// (0x0001cff0) image3_infobar_fav_pane_ParamLimits

0xe584,	// (0x0001cff0) image3_infobar_fav_pane

0xe594,	// (0x0001d000) image3_infobar_loc_pane_ParamLimits

0xe594,	// (0x0001d000) image3_infobar_loc_pane

0xe5a8,	// (0x0001d014) image3_infobar_time_pane_ParamLimits

0xe5a8,	// (0x0001d014) image3_infobar_time_pane

0x9b9b,	// (0x00018607) image3_infobar_time_pane_g1

0xe5b8,	// (0x0001d024) image3_infobar_time_pane_t1

0x9b9b,	// (0x00018607) image3_infobar_loc_pane_g1

0xe5c6,	// (0x0001d032) image3_infobar_loc_pane_g2

0x0001,

0xfd28,	// (0x0001e794) image3_infobar_loc_pane_g

0xe5ce,	// (0x0001d03a) image3_infobar_loc_pane_t1

0x9b9b,	// (0x00018607) image3_infobar_fav_pane_g1

0xe5dc,	// (0x0001d048) image3_infobar_fav_pane_g2

0x0001,

0xfd2d,	// (0x0001e799) image3_infobar_fav_pane_g

0xe5e4,	// (0x0001d050) fs_bigclock_status_battery_pane

0xe5ed,	// (0x0001d059) fs_bigclock_status_signal_pane

0xe5f6,	// (0x0001d062) fs_bigclock_status_title_pane

0xe5ff,	// (0x0001d06b) fs_bigclock_status_signal_pane_g1

0xe608,	// (0x0001d074) fs_bigclock_status_signal_pane_g2

0x0001,

0xfd32,	// (0x0001e79e) fs_bigclock_status_signal_pane_g

0xe610,	// (0x0001d07c) fs_bigclock_status_battery_pane_g1

0xe619,	// (0x0001d085) fs_bigclock_status_battery_pane_g2

0x0001,

0xfd37,	// (0x0001e7a3) fs_bigclock_status_battery_pane_g

0xe621,	// (0x0001d08d) fs_bigclock_status_title_pane_t1

0x76b1,	// (0x0001611d) main_fs_bigclock_clock_pane_g1

0x76b1,	// (0x0001611d) main_fs_bigclock_clock_pane_g2

0x76c2,	// (0x0001612e) main_fs_bigclock_clock_pane_g3

0x76c2,	// (0x0001612e) main_fs_bigclock_clock_pane_g4

0x0003,

0xfd3c,	// (0x0001e7a8) main_fs_bigclock_clock_pane_g

0x76d5,	// (0x00016141) main_fs_bigclock_clock_pane_t1

0x76eb,	// (0x00016157) main_fs_bigclock_clock_pane_t2

0x0001,

0xfd45,	// (0x0001e7b1) main_fs_bigclock_clock_pane_t

0xe62f,	// (0x0001d09b) list_single_fs_bigclock_indicator_pane_ParamLimits

0xe62f,	// (0x0001d09b) list_single_fs_bigclock_indicator_pane

0xe640,	// (0x0001d0ac) list_single_fs_bigclock_pane_ParamLimits

0xe640,	// (0x0001d0ac) list_single_fs_bigclock_pane

0xe666,	// (0x0001d0d2) main_fs_bigclock_indicator_pane_t1

0xe675,	// (0x0001d0e1) list_single_fs_bigclock_pane_g1

0xe67d,	// (0x0001d0e9) list_single_fs_bigclock_pane_t1

0x9b9b,	// (0x00018607) main_fs_bigclock_swipe_pane_g1

0xe6c0,	// (0x0001d12c) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfd56,	// (0x0001e7c2) main_fs_bigclock_swipe_pane_g

0xe6c8,	// (0x0001d134) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xe6c8,	// (0x0001d134) main_fs_bigclock_swipe_pane_t1

0x21f9,	// (0x00010c65) call_type_pane_ParamLimits

0x912c,	// (0x00017b98) main_btmg_pane

0xe2fc,	// (0x0001cd68) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe2fc,	// (0x0001cd68) list_single_cale_mrui_row_pane_g2

0x0002,

0xfcc9,	// (0x0001e735) list_single_cale_mrui_row_pane_g_ParamLimits

0xfcc9,	// (0x0001e735) list_single_cale_mrui_row_pane_g

0xe480,	// (0x0001ceec) list_recal_vselct_arw_lo_pane

0xe488,	// (0x0001cef4) list_recal_vselct_arw_up_pane

0xe490,	// (0x0001cefc) list_recal_vselct_pane

0x7745,	// (0x000161b1) btmg_button_pane

0x774f,	// (0x000161bb) main_btmg_pane_g1

0x912c,	// (0x00017b98) bg_button_pane_cp044

0xe6e5,	// (0x0001d151) btmg_button_pane_t1

0xba06,	// (0x0001a472) aid_listscroll_gen

0x919b,	// (0x00017c07) main_cntbar_detail_pane

0xe02d,	// (0x0001ca99) list_cmail_folder_pane

0xceea,	// (0x0001b956) sp_fs_scroll_pane_cp03_ParamLimits

0x7759,	// (0x000161c5) list_single_fs_dyc_pane_cp01_ParamLimits

0x7759,	// (0x000161c5) list_single_fs_dyc_pane_cp01

0xe6f3,	// (0x0001d15f) aid_size_cmail_indent

0xe6fc,	// (0x0001d168) list_single_dyc_row_pane_cp01

0x77a2,	// (0x0001620e) cntbar_detail_list_pane_ParamLimits

0x77a2,	// (0x0001620e) cntbar_detail_list_pane

0x77ee,	// (0x0001625a) main_cntbar_detail_cont_pane_ParamLimits

0x77ee,	// (0x0001625a) main_cntbar_detail_cont_pane

0xceea,	// (0x0001b956) scroll_pane_cp032_ParamLimits

0xceea,	// (0x0001b956) scroll_pane_cp032

0xe96d,	// (0x0001d3d9) cntbar_detail_list_event_pane_ParamLimits

0xe96d,	// (0x0001d3d9) cntbar_detail_list_event_pane

0x77b2,	// (0x0001621e) cntbar_detail_list_shct_pane

0x9dfa,	// (0x00018866) aid_list_gen

0xe705,	// (0x0001d171) aid_scroll

0xe70e,	// (0x0001d17a) aid_size_touch_scroll_bar

0x7802,	// (0x0001626e) aid_list_double

0x780b,	// (0x00016277) aid_list_single

0x7802,	// (0x0001626e) aid_list_single_lg

0x7814,	// (0x00016280) aid_list_z_g_a_sm

0x781c,	// (0x00016288) aid_list_z_g_d

0x7824,	// (0x00016290) aid_txt_z_prm

0x7832,	// (0x0001629e) aid_txt_z_prm_cp01

0x7840,	// (0x000162ac) aid_txt_z_sec

0x784e,	// (0x000162ba) main_cntbar_detail_cont_pane_g1_ParamLimits

0x784e,	// (0x000162ba) main_cntbar_detail_cont_pane_g1

0x7862,	// (0x000162ce) main_cntbar_detail_cont_pane_g2_ParamLimits

0x7862,	// (0x000162ce) main_cntbar_detail_cont_pane_g2

0x0001,

0xfd5b,	// (0x0001e7c7) main_cntbar_detail_cont_pane_g_ParamLimits

0xfd5b,	// (0x0001e7c7) main_cntbar_detail_cont_pane_g

0xe717,	// (0x0001d183) main_cntbar_detail_cont_pane_t1

0xe725,	// (0x0001d191) main_cntbar_detail_cont_pane_t2

0xe733,	// (0x0001d19f) main_cntbar_detail_cont_pane_t3

0x0002,

0xfd60,	// (0x0001e7cc) main_cntbar_detail_cont_pane_t

0x7872,	// (0x000162de) cell_cntbar_detail_list_shct_pane_ParamLimits

0x7872,	// (0x000162de) cell_cntbar_detail_list_shct_pane

0xe741,	// (0x0001d1ad) cntbar_detail_list_shct_pane_g1

0xe74a,	// (0x0001d1b6) cntbar_detail_list_shct_pane_g2

0x0001,

0xfd67,	// (0x0001e7d3) cntbar_detail_list_shct_pane_g

0x7886,	// (0x000162f2) cntbar_detail_list_event_pane_g1_ParamLimits

0x7886,	// (0x000162f2) cntbar_detail_list_event_pane_g1

0x7892,	// (0x000162fe) cntbar_detail_list_event_pane_g2_ParamLimits

0x7892,	// (0x000162fe) cntbar_detail_list_event_pane_g2

0x0005,

0xfd6c,	// (0x0001e7d8) cntbar_detail_list_event_pane_g_ParamLimits

0xfd6c,	// (0x0001e7d8) cntbar_detail_list_event_pane_g

0x78fe,	// (0x0001636a) cntbar_detail_list_event_pane_t1_ParamLimits

0x78fe,	// (0x0001636a) cntbar_detail_list_event_pane_t1

0x7913,	// (0x0001637f) cntbar_detail_list_event_pane_t2_ParamLimits

0x7913,	// (0x0001637f) cntbar_detail_list_event_pane_t2

0x0002,

0xfd79,	// (0x0001e7e5) cntbar_detail_list_event_pane_t_ParamLimits

0xfd79,	// (0x0001e7e5) cntbar_detail_list_event_pane_t

0x9b9b,	// (0x00018607) cell_cntbar_detail_list_shct_pane_g1

0xa5e7,	// (0x00019053) navi_pane_mv_g3

0x919b,	// (0x00017c07) main_cntbar_detail_pane_ParamLimits

0x912c,	// (0x00017b98) main_notif_wgt_pane

0xc782,	// (0x0001b1ee) aid_tch_main_mp4_pane_g4

0xc9b4,	// (0x0001b420) popup_slider_window_cp02

0xe476,	// (0x0001cee2) list_recal_day_event_pane

0x7770,	// (0x000161dc) cntbar_detail_btn_pane_ParamLimits

0x7770,	// (0x000161dc) cntbar_detail_btn_pane

0x7789,	// (0x000161f5) cntbar_detail_btn_pane_cp01_ParamLimits

0x7789,	// (0x000161f5) cntbar_detail_btn_pane_cp01

0x77b2,	// (0x0001621e) cntbar_detail_list_shct_pane_ParamLimits

0x77c2,	// (0x0001622e) cntbar_detail_pane_g1_ParamLimits

0x77c2,	// (0x0001622e) cntbar_detail_pane_g1

0x77d2,	// (0x0001623e) cntbar_detail_pane_t1_ParamLimits

0x77d2,	// (0x0001623e) cntbar_detail_pane_t1

0x789e,	// (0x0001630a) cntbar_detail_list_event_pane_g3_ParamLimits

0x789e,	// (0x0001630a) cntbar_detail_list_event_pane_g3

0x78b6,	// (0x00016322) cntbar_detail_list_event_pane_g4_ParamLimits

0x78b6,	// (0x00016322) cntbar_detail_list_event_pane_g4

0x78ce,	// (0x0001633a) cntbar_detail_list_event_pane_g5_ParamLimits

0x78ce,	// (0x0001633a) cntbar_detail_list_event_pane_g5

0x78e6,	// (0x00016352) cntbar_detail_list_event_pane_g6_ParamLimits

0x78e6,	// (0x00016352) cntbar_detail_list_event_pane_g6

0x7928,	// (0x00016394) cntbar_detail_list_event_pane_t3_ParamLimits

0x7928,	// (0x00016394) cntbar_detail_list_event_pane_t3

0x793a,	// (0x000163a6) popup_notif_wgt_window_ParamLimits

0x793a,	// (0x000163a6) popup_notif_wgt_window

0x7953,	// (0x000163bf) popup_submenu_window_cp01_ParamLimits

0x7953,	// (0x000163bf) popup_submenu_window_cp01

0x9b5b,	// (0x000185c7) bg_popup_window_pane_cp10

0xe753,	// (0x0001d1bf) listscroll_notif_wgt_pane

0xe765,	// (0x0001d1d1) list_notif_wgt_window

0xe76e,	// (0x0001d1da) scroll_pane_cp033

0x7965,	// (0x000163d1) list_notif_wgt_row_pane_ParamLimits

0x7965,	// (0x000163d1) list_notif_wgt_row_pane

0xe777,	// (0x0001d1e3) aid_size_list_notif_wgt_del

0xe784,	// (0x0001d1f0) list_notif_wgt_row_pane_g1

0xe790,	// (0x0001d1fc) list_notif_wgt_row_pane_g2

0xe79f,	// (0x0001d20b) list_notif_wgt_row_pane_g3

0x0002,

0xfd80,	// (0x0001e7ec) list_notif_wgt_row_pane_g

0xe7ac,	// (0x0001d218) list_notif_wgt_row_pane_t1

0xe7c2,	// (0x0001d22e) list_notif_wgt_row_pane_t2

0xe7d4,	// (0x0001d240) list_notif_wgt_row_pane_t3

0x0002,

0xfd87,	// (0x0001e7f3) list_notif_wgt_row_pane_t

0xcec6,	// (0x0001b932) list_recal_day_event_pane_g1

0xe7e6,	// (0x0001d252) list_recal_day_event_pane_t1

0x912c,	// (0x00017b98) bg_button_pane_cp045

0x7975,	// (0x000163e1) cntbar_detail_btn_pane_t1

0xa72e,	// (0x0001919a) main_callh_pane_ParamLimits

0xa72e,	// (0x0001919a) main_callh_pane

0x912c,	// (0x00017b98) main_coverflow0_pane

0x912c,	// (0x00017b98) main_wgtman_pane

0x6a51,	// (0x000154bd) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x6a51,	// (0x000154bd) main_fs_bigclock_unlock_btn_pane

0x7129,	// (0x00015b95) bg_button_pane_cp16

0x7139,	// (0x00015ba5) cell_tport_appsw_pane_g3

0x7983,	// (0x000163ef) cf0_flow_pane_ParamLimits

0x7983,	// (0x000163ef) cf0_flow_pane

0xe7f5,	// (0x0001d261) listscroll_cf0_pane

0xe800,	// (0x0001d26c) main_cf0_pane_g1

0x7998,	// (0x00016404) main_cf0_pane_t1_ParamLimits

0x7998,	// (0x00016404) main_cf0_pane_t1

0x79af,	// (0x0001641b) main_cf0_pane_t2_ParamLimits

0x79af,	// (0x0001641b) main_cf0_pane_t2

0x0001,

0xfd93,	// (0x0001e7ff) main_cf0_pane_t_ParamLimits

0xfd93,	// (0x0001e7ff) main_cf0_pane_t

0xe812,	// (0x0001d27e) scroll_pane_cp11

0x79c6,	// (0x00016432) cf0_flow_pane_g1

0x79ce,	// (0x0001643a) cf0_flow_pane_g2

0x0001,

0xfd98,	// (0x0001e804) cf0_flow_pane_g

0x79d6,	// (0x00016442) cf0_flow_pane_t1

0x912c,	// (0x00017b98) main_call6_pane

0x912c,	// (0x00017b98) main_calllock_pane

0x79e4,	// (0x00016450) call6_btn_grp_pane_ParamLimits

0x79e4,	// (0x00016450) call6_btn_grp_pane

0x79fe,	// (0x0001646a) call6_pane_g1_ParamLimits

0x79fe,	// (0x0001646a) call6_pane_g1

0x7a14,	// (0x00016480) popup_call6_1st_window_ParamLimits

0x7a14,	// (0x00016480) popup_call6_1st_window

0x7a25,	// (0x00016491) popup_call6_2nd_window_ParamLimits

0x7a25,	// (0x00016491) popup_call6_2nd_window

0x7a36,	// (0x000164a2) cell_call6_btn_pane_ParamLimits

0x7a36,	// (0x000164a2) cell_call6_btn_pane

0x9b5b,	// (0x000185c7) bg_popup_call2_in_pane_cp03

0xe81d,	// (0x0001d289) popup_call6_1st_window_g1

0xe825,	// (0x0001d291) popup_call6_1st_window_g2

0xe82d,	// (0x0001d299) popup_call6_1st_window_g3

0x0002,

0xfd9d,	// (0x0001e809) popup_call6_1st_window_g

0xe835,	// (0x0001d2a1) popup_call6_1st_window_t1

0xe844,	// (0x0001d2b0) popup_call6_1st_window_t2

0xe852,	// (0x0001d2be) popup_call6_1st_window_t3

0x0002,

0xfda4,	// (0x0001e810) popup_call6_1st_window_t

0x9b5b,	// (0x000185c7) bg_popup_call2_in_pane_cp04

0xe860,	// (0x0001d2cc) popup_call6_2nd_window_g1

0xe868,	// (0x0001d2d4) popup_call6_2nd_window_g2

0xe870,	// (0x0001d2dc) popup_call6_2nd_window_g3

0x0002,

0xfdab,	// (0x0001e817) popup_call6_2nd_window_g

0xe878,	// (0x0001d2e4) popup_call6_2nd_window_t1

0x912c,	// (0x00017b98) bg_button_pane_cp15

0xe887,	// (0x0001d2f3) cell_call6_btn_pane_g1

0xe890,	// (0x0001d2fc) cell_call6_btn_pane_t1

0x7a4a,	// (0x000164b6) listscroll_wgtman_pane_ParamLimits

0x7a4a,	// (0x000164b6) listscroll_wgtman_pane

0x7a6b,	// (0x000164d7) wgtman_btn_pane_ParamLimits

0x7a6b,	// (0x000164d7) wgtman_btn_pane

0xa3fb,	// (0x00018e67) aid_scroll_copy1

0xe89f,	// (0x0001d30b) list_wgtman_pane

0x7aae,	// (0x0001651a) wgtman_btn_pane_g1_ParamLimits

0x7aae,	// (0x0001651a) wgtman_btn_pane_g1

0x7ada,	// (0x00016546) wgtman_btn_pane_t1_ParamLimits

0x7ada,	// (0x00016546) wgtman_btn_pane_t1

0xe8a9,	// (0x0001d315) wgtman_btn_pane_t2_ParamLimits

0xe8a9,	// (0x0001d315) wgtman_btn_pane_t2

0x0001,

0xfdb2,	// (0x0001e81e) wgtman_btn_pane_t_ParamLimits

0xfdb2,	// (0x0001e81e) wgtman_btn_pane_t

0x7b17,	// (0x00016583) listrow_wgtman_pane_ParamLimits

0x7b17,	// (0x00016583) listrow_wgtman_pane

0x7b2a,	// (0x00016596) listrow_wgtman_pane_g1

0x7b37,	// (0x000165a3) listrow_wgtman_pane_g2

0x0001,

0xfdb7,	// (0x0001e823) listrow_wgtman_pane_g

0x7b55,	// (0x000165c1) listrow_wgtman_pane_t1

0x7b6d,	// (0x000165d9) listrow_wgtman_pane_t2

0x0001,

0xfdbc,	// (0x0001e828) listrow_wgtman_pane_t

0x7b93,	// (0x000165ff) wait_bar_pane_cp09

0xe8c0,	// (0x0001d32c) main_calllock_btn_pane

0xe8ca,	// (0x0001d336) main_calllock_pane_g1

0x912c,	// (0x00017b98) bg_button_pane_cp17

0xe887,	// (0x0001d2f3) main_calllock_btn_pane_g1

0xe8d2,	// (0x0001d33e) main_calllock_btn_pane_t1

0x912c,	// (0x00017b98) main_dialer3_pane

0x912c,	// (0x00017b98) main_fmrd2_pane

0x9b9b,	// (0x00018607) main_fs_bigclock_unlock_btn_pane_g1

0x7bad,	// (0x00016619) main_fs_bigclock_unlock_btn_pane_t1

0x7bbb,	// (0x00016627) area_fmrd2_info_pane_ParamLimits

0x7bbb,	// (0x00016627) area_fmrd2_info_pane

0x7bcc,	// (0x00016638) area_fmrd2_visual_pane_ParamLimits

0x7bcc,	// (0x00016638) area_fmrd2_visual_pane

0x7bda,	// (0x00016646) fmrd2_indi_pane_ParamLimits

0x7bda,	// (0x00016646) fmrd2_indi_pane

0x7be7,	// (0x00016653) area_fmrd2_visual_pane_g1

0x7bef,	// (0x0001665b) area_fmrd2_visual_pane_t1

0x7bff,	// (0x0001666b) area_fmrd2_visual_pane_t2

0x7c0f,	// (0x0001667b) area_fmrd2_visual_pane_t3

0x0002,

0xfdc6,	// (0x0001e832) area_fmrd2_visual_pane_t

0x7c1f,	// (0x0001668b) area_fmrd2_info_pane_g1

0x7c27,	// (0x00016693) area_fmrd2_info_pane_t1

0x7c37,	// (0x000166a3) area_fmrd2_info_pane_t2

0x7c47,	// (0x000166b3) area_fmrd2_info_pane_t3

0x7c57,	// (0x000166c3) area_fmrd2_info_pane_t4

0x0003,

0xfdcd,	// (0x0001e839) area_fmrd2_info_pane_t

0x7c65,	// (0x000166d1) fmrd2_indi_pane_t1

0x7c75,	// (0x000166e1) fmrd2_indi_pane_t2

0x7c85,	// (0x000166f1) fmrd2_indi_pane_t3

0x0002,

0xfdd6,	// (0x0001e842) fmrd2_indi_pane_t

0xdb8c,	// (0x0001c5f8) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xdb8c,	// (0x0001c5f8) list_single_fs_bigclock_indicator_pane_g5

0xdc3d,	// (0x0001c6a9) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xdc3d,	// (0x0001c6a9) list_single_fs_bigclock_indicator_pane_t5

0x7322,	// (0x00015d8e) aid_cell_bcale_month_pane_ParamLimits

0x7322,	// (0x00015d8e) aid_cell_bcale_month_pane

0x7340,	// (0x00015dac) bcale_month_pane_ParamLimits

0x7340,	// (0x00015dac) bcale_month_pane

0x7364,	// (0x00015dd0) bcale_preview_pane_ParamLimits

0x7364,	// (0x00015dd0) bcale_preview_pane

0xe67d,	// (0x0001d0e9) list_single_fs_bigclock_pane_t1_ParamLimits

0xe69c,	// (0x0001d108) list_single_fs_bigclock_pane_t2_ParamLimits

0xe69c,	// (0x0001d108) list_single_fs_bigclock_pane_t2

0x0001,

0xfd51,	// (0x0001e7bd) list_single_fs_bigclock_pane_t_ParamLimits

0xfd51,	// (0x0001e7bd) list_single_fs_bigclock_pane_t

0x7ba5,	// (0x00016611) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfdc1,	// (0x0001e82d) main_fs_bigclock_unlock_btn_pane_g

0x7c95,	// (0x00016701) aid_dia3_key_size_ParamLimits

0x7c95,	// (0x00016701) aid_dia3_key_size

0x7ca4,	// (0x00016710) aid_dia3_listrow_size_ParamLimits

0x7ca4,	// (0x00016710) aid_dia3_listrow_size

0x7cb9,	// (0x00016725) dia3_keypad_fun_pane_ParamLimits

0x7cb9,	// (0x00016725) dia3_keypad_fun_pane

0x7cd5,	// (0x00016741) dia3_keypad_num_pane_ParamLimits

0x7cd5,	// (0x00016741) dia3_keypad_num_pane

0x7cf0,	// (0x0001675c) dia3_listscroll_pane_ParamLimits

0x7cf0,	// (0x0001675c) dia3_listscroll_pane

0x7d03,	// (0x0001676f) dia3_numentry_pane_ParamLimits

0x7d03,	// (0x0001676f) dia3_numentry_pane

0xe8e1,	// (0x0001d34d) dia3_list_pane

0xe8ec,	// (0x0001d358) scroll_pane_cp12

0x912c,	// (0x00017b98) bg_dia3_numentry_pane

0x7d1b,	// (0x00016787) dia3_numentry_pane_t1

0x7d2a,	// (0x00016796) cell_dia3_key_num_pane

0x7d32,	// (0x0001679e) cell_dia3_key0_fun_pane_ParamLimits

0x7d32,	// (0x0001679e) cell_dia3_key0_fun_pane

0x7d46,	// (0x000167b2) cell_dia3_key1_fun_pane_ParamLimits

0x7d46,	// (0x000167b2) cell_dia3_key1_fun_pane

0x7d5e,	// (0x000167ca) dia3_listrow_pane

0xd8df,	// (0x0001c34b) bg_dia3_numentry_pane_g1

0x912c,	// (0x00017b98) bg_button_pane_cp21

0xe8f7,	// (0x0001d363) cell_dia3_key_num_pane_t1

0xe905,	// (0x0001d371) cell_dia3_key_num_pane_t2

0xe914,	// (0x0001d380) cell_dia3_key_num_pane_t3

0xe923,	// (0x0001d38f) cell_dia3_key_num_pane_t4

0x0003,

0xfddd,	// (0x0001e849) cell_dia3_key_num_pane_t

0x912c,	// (0x00017b98) bg_button_pane_cp19

0x7d70,	// (0x000167dc) cell_dia3_key0_fun_pane_g1

0x912c,	// (0x00017b98) bg_button_pane_cp20

0x7d78,	// (0x000167e4) cell_dia3_key1_fun_pane_g1

0x7d80,	// (0x000167ec) area_left_week_number_pane

0x7d8c,	// (0x000167f8) area_top_day_name_pane

0x7d9f,	// (0x0001680b) frame_month_view_pane

0xe932,	// (0x0001d39e) grid_month_view_pane

0x7db2,	// (0x0001681e) cell_top_day_name_pane_ParamLimits

0x7db2,	// (0x0001681e) cell_top_day_name_pane

0x7ddf,	// (0x0001684b) cell_area_left_week_number_pane_ParamLimits

0x7ddf,	// (0x0001684b) cell_area_left_week_number_pane

0x7df3,	// (0x0001685f) cell_month_view_pane_ParamLimits

0x7df3,	// (0x0001685f) cell_month_view_pane

0xe97d,	// (0x0001d3e9) frm_month_g1

0x7e20,	// (0x0001688c) frm_month_g2

0x7e33,	// (0x0001689f) frm_month_g3

0x7e46,	// (0x000168b2) frm_month_g4

0x7e59,	// (0x000168c5) frm_month_g5

0x7e6c,	// (0x000168d8) frm_month_g6

0x7e7f,	// (0x000168eb) frm_month_g7

0xe98a,	// (0x0001d3f6) frm_month_g8

0x7e92,	// (0x000168fe) frm_month_g9

0x7ea2,	// (0x0001690e) frm_month_g10

0x7eb2,	// (0x0001691e) frm_month_g11

0x7ec2,	// (0x0001692e) frm_month_g12

0x7ed4,	// (0x00016940) frm_month_g13

0x7ee6,	// (0x00016952) frm_month_g14

0x7efa,	// (0x00016966) frm_month_g15

0x7f0e,	// (0x0001697a) frm_month_g16

0x000f,

0xfde6,	// (0x0001e852) frm_month_g

0xe997,	// (0x0001d403) cell_top_day_name_pane_t1

0x7f22,	// (0x0001698e) cell_area_left_week_number_pane_g1

0x7f2e,	// (0x0001699a) cell_area_left_week_number_pane_t1

0x9892,	// (0x000182fe) cell_month_view_pane_g1

0x7f41,	// (0x000169ad) cell_month_view_pane_t1

0x912c,	// (0x00017b98) main_fps_pane

0xde51,	// (0x0001c8bd) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xde51,	// (0x0001c8bd) cmail_ddmenu_btn02_pane_cp1

0xde6d,	// (0x0001c8d9) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xde6d,	// (0x0001c8d9) cmail_ddmenu_btn02_pane_cp2

0x760d,	// (0x00016079) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x760d,	// (0x00016079) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfd04,	// (0x0001e770) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfd04,	// (0x0001e770) cmail_ddmenu_btn02_pane_g

0x762b,	// (0x00016097) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x762b,	// (0x00016097) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfd09,	// (0x0001e775) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfd09,	// (0x0001e775) cmail_ddmenu_btn02_pane_t

0x7f54,	// (0x000169c0) fps_text_pane_ParamLimits

0x7f54,	// (0x000169c0) fps_text_pane

0x7f6b,	// (0x000169d7) main_fps_pane_g1_ParamLimits

0x7f6b,	// (0x000169d7) main_fps_pane_g1

0x7f85,	// (0x000169f1) wait_bar_pane_cp010_ParamLimits

0x7f85,	// (0x000169f1) wait_bar_pane_cp010

0x7f96,	// (0x00016a02) fps_text_pane_t1_ParamLimits

0x7f96,	// (0x00016a02) fps_text_pane_t1

0xe940,	// (0x0001d3ac) cam4_image_uncrop_pane_g1

0xe949,	// (0x0001d3b5) cam4_image_uncrop_pane_g2

0x4c09,	// (0x00013675) cam4_image_uncrop_pane_g3

0x4c12,	// (0x0001367e) cam4_image_uncrop_pane_g4

0x0003,

0xf848,	// (0x0001e2b4) cam4_image_uncrop_pane_g

0x7d5e,	// (0x000167ca) dia3_listrow_pane_ParamLimits

0x912c,	// (0x00017b98) main_phob2_pane

0x70fa,	// (0x00015b66) cell_tport_appsw_pane_cp02_ParamLimits

0x70fa,	// (0x00015b66) cell_tport_appsw_pane_cp02

0x710e,	// (0x00015b7a) cell_tport_appsw_pane_cp03_ParamLimits

0x710e,	// (0x00015b7a) cell_tport_appsw_pane_cp03

0x912c,	// (0x00017b98) phob2_contact_card_pane

0x912c,	// (0x00017b98) phob2_listscroll_pane

0xe9aa,	// (0x0001d416) phob2_list_pane

0xe9b2,	// (0x0001d41e) scroll_pane_cp034

0x7fae,	// (0x00016a1a) phob2_cc_data_pane_ParamLimits

0x7fae,	// (0x00016a1a) phob2_cc_data_pane

0x7fcd,	// (0x00016a39) phob2_cc_listscroll_pane_ParamLimits

0x7fcd,	// (0x00016a39) phob2_cc_listscroll_pane

0x7b17,	// (0x00016583) list_double_large_graphic_phob2_pane_ParamLimits

0x7b17,	// (0x00016583) list_double_large_graphic_phob2_pane

0x7feb,	// (0x00016a57) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x7feb,	// (0x00016a57) list_double_large_graphic_phob2_pane_g1

0x7ff8,	// (0x00016a64) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x7ff8,	// (0x00016a64) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfe07,	// (0x0001e873) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfe07,	// (0x0001e873) list_double_large_graphic_phob2_pane_g

0x801e,	// (0x00016a8a) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x801e,	// (0x00016a8a) list_double_large_graphic_phob2_pane_t1

0x8033,	// (0x00016a9f) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x8033,	// (0x00016a9f) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfe10,	// (0x0001e87c) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfe10,	// (0x0001e87c) list_double_large_graphic_phob2_pane_t

0x912c,	// (0x00017b98) list_highlight_pane_cp024

0xe9ba,	// (0x0001d426) phob2_cc_button_pane

0x8048,	// (0x00016ab4) phob2_cc_data_pane_g1_ParamLimits

0x8048,	// (0x00016ab4) phob2_cc_data_pane_g1

0x805f,	// (0x00016acb) phob2_cc_data_pane_g2_ParamLimits

0x805f,	// (0x00016acb) phob2_cc_data_pane_g2

0x0001,

0xfe15,	// (0x0001e881) phob2_cc_data_pane_g_ParamLimits

0xfe15,	// (0x0001e881) phob2_cc_data_pane_g

0x8071,	// (0x00016add) phob2_cc_data_pane_t1_ParamLimits

0x8071,	// (0x00016add) phob2_cc_data_pane_t1

0x8089,	// (0x00016af5) phob2_cc_data_pane_t2_ParamLimits

0x8089,	// (0x00016af5) phob2_cc_data_pane_t2

0x80a1,	// (0x00016b0d) phob2_cc_data_pane_t3_ParamLimits

0x80a1,	// (0x00016b0d) phob2_cc_data_pane_t3

0x0002,

0xfe1a,	// (0x0001e886) phob2_cc_data_pane_t_ParamLimits

0xfe1a,	// (0x0001e886) phob2_cc_data_pane_t

0xe9c2,	// (0x0001d42e) phob2_cc_list_pane_ParamLimits

0xe9c2,	// (0x0001d42e) phob2_cc_list_pane

0xcf9c,	// (0x0001ba08) scroll_pane_cp035_ParamLimits

0xcf9c,	// (0x0001ba08) scroll_pane_cp035

0x919b,	// (0x00017c07) bg_button_pane_cp033

0xe9ce,	// (0x0001d43a) phob2_cc_button_pane_g1

0xe9da,	// (0x0001d446) phob2_cc_button_pane_t1

0xe9ef,	// (0x0001d45b) phob2_cc_button_pane_t2

0x0001,

0xfe21,	// (0x0001e88d) phob2_cc_button_pane_t

0x80b9,	// (0x00016b25) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x80b9,	// (0x00016b25) list_double_large_graphic_phob2_cc_pane

0x80eb,	// (0x00016b57) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x80eb,	// (0x00016b57) list_double_large_graphic_phob2_cc_pane_g1

0xea01,	// (0x0001d46d) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xea01,	// (0x0001d46d) list_double_large_graphic_phob2_cc_pane_g2

0x80f7,	// (0x00016b63) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x80f7,	// (0x00016b63) list_double_large_graphic_phob2_cc_pane_g3

0x8103,	// (0x00016b6f) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x8103,	// (0x00016b6f) list_double_large_graphic_phob2_cc_pane_g4

0x810f,	// (0x00016b7b) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x810f,	// (0x00016b7b) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfe26,	// (0x0001e892) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfe26,	// (0x0001e892) list_double_large_graphic_phob2_cc_pane_g

0x811b,	// (0x00016b87) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x811b,	// (0x00016b87) list_double_large_graphic_phob2_cc_pane_t1

0x8144,	// (0x00016bb0) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x8144,	// (0x00016bb0) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfe31,	// (0x0001e89d) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfe31,	// (0x0001e89d) list_double_large_graphic_phob2_cc_pane_t

0xea0d,	// (0x0001d479) list_highlight_pane_cp025_ParamLimits

0xea0d,	// (0x0001d479) list_highlight_pane_cp025

0x919b,	// (0x00017c07) bg_button_pane_cp033_ParamLimits

0xe9ce,	// (0x0001d43a) phob2_cc_button_pane_g1_ParamLimits

0xe9da,	// (0x0001d446) phob2_cc_button_pane_t1_ParamLimits

0xe9ef,	// (0x0001d45b) phob2_cc_button_pane_t2_ParamLimits

0xfe21,	// (0x0001e88d) phob2_cc_button_pane_t_ParamLimits

0x0807,	// (0x0000f273) popup_wgtman_window

0xcd3c,	// (0x0001b7a8) scroll_pane_cp038

0x7a90,	// (0x000164fc) wgtman_btn_pane_cp_01_ParamLimits

0x7a90,	// (0x000164fc) wgtman_btn_pane_cp_01

0xea1b,	// (0x0001d487) wgtman_content_pane

0xea24,	// (0x0001d490) wgtman_heading_pane

0x912c,	// (0x00017b98) bg_heading_pane_cp02

0xea2d,	// (0x0001d499) wgtman_heading_pane_g1

0xea35,	// (0x0001d4a1) wgtman_heading_pane_t1

0xea43,	// (0x0001d4af) scroll_pane_cp036

0xea4b,	// (0x0001d4b7) wgtman_list_pane

0xe952,	// (0x0001d3be) wgtman_list_pane_t1_ParamLimits

0xe952,	// (0x0001d3be) wgtman_list_pane_t1

0xcad7,	// (0x0001b543) cam4_grid_pane

0x5952,	// (0x000143be) bg_button_pane_cp015_ParamLimits

0x5963,	// (0x000143cf) bg_button_pane_cp016_ParamLimits

0x596f,	// (0x000143db) bg_button_pane_cp017_ParamLimits

0x59c3,	// (0x0001442f) popup_vitu2_query_window_g3_ParamLimits

0x59c3,	// (0x0001442f) popup_vitu2_query_window_g3

0x5a64,	// (0x000144d0) popup_vitu2_query_window_t6_ParamLimits

0x5a64,	// (0x000144d0) popup_vitu2_query_window_t6

0x5a8f,	// (0x000144fb) popup_vitu2_query_window_t7_ParamLimits

0x5a8f,	// (0x000144fb) popup_vitu2_query_window_t7

0xe940,	// (0x0001d3ac) cam4_grid_pane_g1

0xe949,	// (0x0001d3b5) cam4_grid_pane_g2

0xea53,	// (0x0001d4bf) cam4_grid_pane_g3

0xea5c,	// (0x0001d4c8) cam4_grid_pane_g4

0x0003,

0xfe36,	// (0x0001e8a2) cam4_grid_pane_g

0x13bd,	// (0x0000fe29) aid_placing_vt_slider_lsc_ParamLimits

0x16ba,	// (0x00010126) vidtel_button_pane_ParamLimits

0x16ba,	// (0x00010126) vidtel_button_pane

0x912c,	// (0x00017b98) bg_button_pane_cp034

0xea67,	// (0x0001d4d3) vidtel_button_pane_g1

0xea6f,	// (0x0001d4db) vidtel_button_pane_t1

0xce7a,	// (0x0001b8e6) aid_size_vtel_slider_touch

0xcf9c,	// (0x0001ba08) scroll_pane_cp039

0x6745,	// (0x000151b1) ncim_query_button_pane_cp01_ParamLimits

0x6764,	// (0x000151d0) ncimui_query_pane_g1_ParamLimits

0x919b,	// (0x00017c07) input_focus_pane_cp012_ParamLimits

0xd925,	// (0x0001c391) ncim_query_entry_pane_t1_ParamLimits

0xcf9c,	// (0x0001ba08) scroll_pane_cp039_ParamLimits

0xa4d2,	// (0x00018f3e) navi_pane_bcale_mc_g1

0xa4da,	// (0x00018f46) navi_pane_bcale_mc_t1

0xdea1,	// (0x0001c90d) main_sp_fs_email_pane_g1

0xdead,	// (0x0001c919) main_sp_fs_email_pane_g2

0x0001,

0xfc39,	// (0x0001e6a5) main_sp_fs_email_pane_g

0xe308,	// (0x0001cd74) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe308,	// (0x0001cd74) list_single_cale_mrui_row_pane_g3

0x764b,	// (0x000160b7) list_single_recal_day_pane_g5_event_pane

0xe4e7,	// (0x0001cf53) list_single_recal_day_pane_g7

0xea85,	// (0x0001d4f1) list_recal_day_event_pane_cp01

0xea8e,	// (0x0001d4fa) list_recal_vselct_arw_lo_pane_cp01

0xea96,	// (0x0001d502) list_recal_vselct_arw_up_pane_cp01

0xea9e,	// (0x0001d50a) list_recal_vselct_pane_cp01

0xcec6,	// (0x0001b932) list_recal_day_event_pane_cp01_g1

0xeaa8,	// (0x0001d514) list_recal_day_event_pane_cp01_t1

0xe4ef,	// (0x0001cf5b) list_single_recal_day_pane_t1_ParamLimits

0xe501,	// (0x0001cf6d) list_single_recal_day_pane_t2_ParamLimits

0xfd19,	// (0x0001e785) list_single_recal_day_pane_t_ParamLimits

0x9817,	// (0x00018283) bg_notes_pane_ParamLimits

0x98ea,	// (0x00018356) list_notes_pane_ParamLimits

0x0a0e,	// (0x0000f47a) scroll_pane_cp06_ParamLimits

0x9926,	// (0x00018392) main_notes_pane_ParamLimits

0x919b,	// (0x00017c07) main_welc_pane

0x819a,	// (0x00016c06) main_welc_body_pane_ParamLimits

0x819a,	// (0x00016c06) main_welc_body_pane

0x81b7,	// (0x00016c23) main_welc_opti_pane_ParamLimits

0x81b7,	// (0x00016c23) main_welc_opti_pane

0x8230,	// (0x00016c9c) main_welc_pane_t1_ParamLimits

0x8230,	// (0x00016c9c) main_welc_pane_t1

0x8428,	// (0x00016e94) main_welc_body_row_pane_ParamLimits

0x8428,	// (0x00016e94) main_welc_body_row_pane

0x9884,	// (0x000182f0) main_welc_opti_row_pane_ParamLimits

0x9884,	// (0x000182f0) main_welc_opti_row_pane

0xeac6,	// (0x0001d532) main_welc_opti_row_pane_g1

0x843d,	// (0x00016ea9) main_welc_opti_row_pane_t1

0xeace,	// (0x0001d53a) main_welc_body_row_pane_t1

0xe75d,	// (0x0001d1c9) popup_notif_wgt_heading_pane

0xe777,	// (0x0001d1e3) aid_size_list_notif_wgt_del_ParamLimits

0xe784,	// (0x0001d1f0) list_notif_wgt_row_pane_g1_ParamLimits

0xe790,	// (0x0001d1fc) list_notif_wgt_row_pane_g2_ParamLimits

0xe79f,	// (0x0001d20b) list_notif_wgt_row_pane_g3_ParamLimits

0xfd80,	// (0x0001e7ec) list_notif_wgt_row_pane_g_ParamLimits

0xe7ac,	// (0x0001d218) list_notif_wgt_row_pane_t1_ParamLimits

0xe7c2,	// (0x0001d22e) list_notif_wgt_row_pane_t2_ParamLimits

0xe7d4,	// (0x0001d240) list_notif_wgt_row_pane_t3_ParamLimits

0xfd87,	// (0x0001e7f3) list_notif_wgt_row_pane_t_ParamLimits

0x7b2a,	// (0x00016596) listrow_wgtman_pane_g1_ParamLimits

0x7b37,	// (0x000165a3) listrow_wgtman_pane_g2_ParamLimits

0xfdb7,	// (0x0001e823) listrow_wgtman_pane_g_ParamLimits

0x7b55,	// (0x000165c1) listrow_wgtman_pane_t1_ParamLimits

0x7b6d,	// (0x000165d9) listrow_wgtman_pane_t2_ParamLimits

0xfdbc,	// (0x0001e828) listrow_wgtman_pane_t_ParamLimits

0x7b93,	// (0x000165ff) wait_bar_pane_cp09_ParamLimits

0x912c,	// (0x00017b98) bg_popup_heading_pane_cp02

0xeadd,	// (0x0001d549) popup_notif_wgt_heading_pane_g1

0xeae5,	// (0x0001d551) popup_notif_wgt_heading_pane_t1

0x912c,	// (0x00017b98) main_vids_pane

0x912c,	// (0x00017b98) vids_listscroll_pane

0x844c,	// (0x00016eb8) scroll_pane_cp040

0x912c,	// (0x00017b98) vids_list_pane

0x8457,	// (0x00016ec3) vids_list_double_pane_ParamLimits

0x8457,	// (0x00016ec3) vids_list_double_pane

0x8468,	// (0x00016ed4) vids_list_double_pane_g1

0x8471,	// (0x00016edd) vids_list_double_pane_t1

0x8480,	// (0x00016eec) vids_list_double_pane_t2

0x0001,

0xfe55,	// (0x0001e8c1) vids_list_double_pane_t

0x919b,	// (0x00017c07) main_ncimui_pane_ParamLimits

0x657b,	// (0x00014fe7) main_ncimui_pane_g1_ParamLimits

0x6587,	// (0x00014ff3) main_ncimui_pane_g2_ParamLimits

0x6587,	// (0x00014ff3) main_ncimui_pane_g2

0x0001,

0xfb3a,	// (0x0001e5a6) main_ncimui_pane_g_ParamLimits

0xfb3a,	// (0x0001e5a6) main_ncimui_pane_g

0x81d2,	// (0x00016c3e) main_welc_pane_g1_ParamLimits

0x81d2,	// (0x00016c3e) main_welc_pane_g1

0x81e7,	// (0x00016c53) main_welc_pane_g2_ParamLimits

0x81e7,	// (0x00016c53) main_welc_pane_g2

0x0003,

0xfe3f,	// (0x0001e8ab) main_welc_pane_g_ParamLimits

0xfe3f,	// (0x0001e8ab) main_welc_pane_g

0x9817,	// (0x00018283) listscroll_mce_pane_ParamLimits

0xa627,	// (0x00019093) wait_bar_pane_cp10

0xba0e,	// (0x0001a47a) main_cale_day_pane_ParamLimits

0xba0e,	// (0x0001a47a) main_cale_week_pane_ParamLimits

0x9817,	// (0x00018283) main_messa_pane_ParamLimits

0x401b,	// (0x00012a87) main_clock2_btn_pane_ParamLimits

0x401b,	// (0x00012a87) main_clock2_btn_pane

0xc329,	// (0x0001ad95) main_clock2_btn_pane_cp01_ParamLimits

0xc329,	// (0x0001ad95) main_clock2_btn_pane_cp01

0xe294,	// (0x0001cd00) list_cale_mrui_pane_ParamLimits

0xe80a,	// (0x0001d276) main_cf0_pane_g2

0x0001,

0xfd8e,	// (0x0001e7fa) main_cf0_pane_g

0x7d80,	// (0x000167ec) area_left_week_number_pane_ParamLimits

0x7d8c,	// (0x000167f8) area_top_day_name_pane_ParamLimits

0x7d9f,	// (0x0001680b) frame_month_view_pane_ParamLimits

0xe932,	// (0x0001d39e) grid_month_view_pane_ParamLimits

0xe97d,	// (0x0001d3e9) frm_month_g1_ParamLimits

0x7e20,	// (0x0001688c) frm_month_g2_ParamLimits

0x7e33,	// (0x0001689f) frm_month_g3_ParamLimits

0x7e46,	// (0x000168b2) frm_month_g4_ParamLimits

0x7e59,	// (0x000168c5) frm_month_g5_ParamLimits

0x7e6c,	// (0x000168d8) frm_month_g6_ParamLimits

0x7e7f,	// (0x000168eb) frm_month_g7_ParamLimits

0xe98a,	// (0x0001d3f6) frm_month_g8_ParamLimits

0x7e92,	// (0x000168fe) frm_month_g9_ParamLimits

0x7ea2,	// (0x0001690e) frm_month_g10_ParamLimits

0x7eb2,	// (0x0001691e) frm_month_g11_ParamLimits

0x7ec2,	// (0x0001692e) frm_month_g12_ParamLimits

0x7ed4,	// (0x00016940) frm_month_g13_ParamLimits

0x7ee6,	// (0x00016952) frm_month_g14_ParamLimits

0x7efa,	// (0x00016966) frm_month_g15_ParamLimits

0x7f0e,	// (0x0001697a) frm_month_g16_ParamLimits

0xfde6,	// (0x0001e852) frm_month_g_ParamLimits

0xe997,	// (0x0001d403) cell_top_day_name_pane_t1_ParamLimits

0x7f22,	// (0x0001698e) cell_area_left_week_number_pane_g1_ParamLimits

0x7f2e,	// (0x0001699a) cell_area_left_week_number_pane_t1_ParamLimits

0x9892,	// (0x000182fe) cell_month_view_pane_g1_ParamLimits

0x7f41,	// (0x000169ad) cell_month_view_pane_t1_ParamLimits

0x980f,	// (0x0001827b) main_clock2_btn_pane_g1

0xeaf3,	// (0x0001d55f) main_clock2_btn_pane_t1

0x919b,	// (0x00017c07) listscroll_cmail_pane_ParamLimits

0xdea1,	// (0x0001c90d) main_sp_fs_email_pane_g1_ParamLimits

0xdead,	// (0x0001c919) main_sp_fs_email_pane_g2_ParamLimits

0xfc39,	// (0x0001e6a5) main_sp_fs_email_pane_g_ParamLimits

0xe457,	// (0x0001cec3) list_recal_day_pane_ParamLimits

0xe468,	// (0x0001ced4) mian_recal_day_pane_t1

0x6f9d,	// (0x00015a09) list_single_dyc_row_text_pane_t4_ParamLimits

0x6f9d,	// (0x00015a09) list_single_dyc_row_text_pane_t4

0x6fe6,	// (0x00015a52) list_single_dyc_row_text_pane_t5_ParamLimits

0x6fe6,	// (0x00015a52) list_single_dyc_row_text_pane_t5

0xdf4f,	// (0x0001c9bb) list_single_dyc_row_text_pane_t6_ParamLimits

0xdf4f,	// (0x0001c9bb) list_single_dyc_row_text_pane_t6

0x213e,	// (0x00010baa) aid_mgn_list_cale_time_pane

0x919b,	// (0x00017c07) main_gallery2_pane_ParamLimits

0xc33f,	// (0x0001adab) main_clock2_pane_cp01_t1

0xc34d,	// (0x0001adb9) main_clock2_pane_cp01_t3

0x0001,

0xf71f,	// (0x0001e18b) main_clock2_pane_cp01_t

0x0daa,	// (0x0000f816) cale_week_scroll_pane_g16_ParamLimits

0x0daa,	// (0x0000f816) cale_week_scroll_pane_g16

0x9b5b,	// (0x000185c7) vorec_slider_pane

0xea6f,	// (0x0001d4db) vidtel_button_pane_t1_ParamLimits

0x76b1,	// (0x0001611d) main_fs_bigclock_clock_pane_g1_ParamLimits

0x76b1,	// (0x0001611d) main_fs_bigclock_clock_pane_g2_ParamLimits

0x76c2,	// (0x0001612e) main_fs_bigclock_clock_pane_g3_ParamLimits

0x76c2,	// (0x0001612e) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfd3c,	// (0x0001e7a8) main_fs_bigclock_clock_pane_g_ParamLimits

0x76d5,	// (0x00016141) main_fs_bigclock_clock_pane_t1_ParamLimits

0x76eb,	// (0x00016157) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfd45,	// (0x0001e7b1) main_fs_bigclock_clock_pane_t_ParamLimits

0x38f7,	// (0x00012363) main_mup3_lyrics_pane_ParamLimits

0x38f7,	// (0x00012363) main_mup3_lyrics_pane

0x84a8,	// (0x00016f14) main_mup3_lyrics_pane_t1_ParamLimits

0x84a8,	// (0x00016f14) main_mup3_lyrics_pane_t1

0xc76c,	// (0x0001b1d8) aid_main_mp4_pane_t1_area

0xc776,	// (0x0001b1e2) aid_main_mp4_pane_t2_area

0xc822,	// (0x0001b28e) main_mp4_pane_g7_ParamLimits

0xc822,	// (0x0001b28e) main_mp4_pane_g7

0xc82e,	// (0x0001b29a) main_mp4_pane_g8_ParamLimits

0xc82e,	// (0x0001b29a) main_mp4_pane_g8

0x49da,	// (0x00013446) aid_call6_pane_g1_size

0x80d4,	// (0x00016b40) list_double_large_graphic_phob2_other_pane_ParamLimits

0x80d4,	// (0x00016b40) list_double_large_graphic_phob2_other_pane

0xa403,	// (0x00018e6f) list_double_large_graphic_phob2_other_pane_g1

0x912c,	// (0x00017b98) list_highlight_pane_cp026

0x919b,	// (0x00017c07) main_welc_pane_ParamLimits

0x6ddc,	// (0x00015848) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0x6ddc,	// (0x00015848) main_sp_fs_ctrlbar_pane_g3

0x6df6,	// (0x00015862) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0x6df6,	// (0x00015862) main_sp_fs_ctrlbar_pane_g4

0x6e2a,	// (0x00015896) toolbar2_fixed_button_pane_cp01

0x6e35,	// (0x000158a1) toolbar2_fixed_button_pane_cp02

0x6e42,	// (0x000158ae) toolbar2_fixed_button_pane_cp03

0x8180,	// (0x00016bec) list_welc_entry_pane_ParamLimits

0x8180,	// (0x00016bec) list_welc_entry_pane

0x81fc,	// (0x00016c68) main_welc_pane_g3_ParamLimits

0x81fc,	// (0x00016c68) main_welc_pane_g3

0x824e,	// (0x00016cba) main_welc_pane_t2_ParamLimits

0x824e,	// (0x00016cba) main_welc_pane_t2

0x8269,	// (0x00016cd5) main_welc_pane_t3_ParamLimits

0x8269,	// (0x00016cd5) main_welc_pane_t3

0x0005,

0xfe48,	// (0x0001e8b4) main_welc_pane_t_ParamLimits

0xfe48,	// (0x0001e8b4) main_welc_pane_t

0x8399,	// (0x00016e05) welc_button_pane_ParamLimits

0x8399,	// (0x00016e05) welc_button_pane

0x8413,	// (0x00016e7f) welc_service_logo_pane_ParamLimits

0x8413,	// (0x00016e7f) welc_service_logo_pane

0x84c4,	// (0x00016f30) list_single_welc_entry_pane_ParamLimits

0x84c4,	// (0x00016f30) list_single_welc_entry_pane

0x84d5,	// (0x00016f41) list_single_welc_entry_pane_g1

0x84dd,	// (0x00016f49) list_single_welc_entry_pane_t1

0x84eb,	// (0x00016f57) list_single_welc_entry_pane_t2

0x0001,

0xfe5a,	// (0x0001e8c6) list_single_welc_entry_pane_t

0x912c,	// (0x00017b98) bg_button_pane_cp035

0x84f9,	// (0x00016f65) welc_button_pane_t1

0xeb0f,	// (0x0001d57b) welc_service_logo_pane_g1

0xeb18,	// (0x0001d584) welc_service_logo_pane_g2

0x0001,

0xfe5f,	// (0x0001e8cb) welc_service_logo_pane_g

0x912c,	// (0x00017b98) main_int_radio_pane

0xd7c3,	// (0x0001c22f) list_single_fs_dyc_pane_g1

0x8004,	// (0x00016a70) list_double_large_graphic_phob2_pane_g3_ParamLimits

0x8004,	// (0x00016a70) list_double_large_graphic_phob2_pane_g3

0x8010,	// (0x00016a7c) list_double_large_graphic_phob2_pane_g4_ParamLimits

0x8010,	// (0x00016a7c) list_double_large_graphic_phob2_pane_g4

0x8507,	// (0x00016f73) main_int_radio1_pane_ParamLimits

0x8507,	// (0x00016f73) main_int_radio1_pane

0xeb21,	// (0x0001d58d) find_pane_cp02

0x8524,	// (0x00016f90) input_focus_pane_cp12_ParamLimits

0x8524,	// (0x00016f90) input_focus_pane_cp12

0x8534,	// (0x00016fa0) input_focus_pane_cp13_ParamLimits

0x8534,	// (0x00016fa0) input_focus_pane_cp13

0x8548,	// (0x00016fb4) input_focus_pane_cp14_ParamLimits

0x8548,	// (0x00016fb4) input_focus_pane_cp14

0xeb2a,	// (0x0001d596) int_radio1_listscroll_pane

0x855c,	// (0x00016fc8) main_int_radio1_pane_g1_ParamLimits

0x855c,	// (0x00016fc8) main_int_radio1_pane_g1

0x8574,	// (0x00016fe0) main_int_radio1_pane_t1_ParamLimits

0x8574,	// (0x00016fe0) main_int_radio1_pane_t1

0x858f,	// (0x00016ffb) main_int_radio1_pane_t2_ParamLimits

0x858f,	// (0x00016ffb) main_int_radio1_pane_t2

0x85aa,	// (0x00017016) main_int_radio1_pane_t3_ParamLimits

0x85aa,	// (0x00017016) main_int_radio1_pane_t3

0x85c5,	// (0x00017031) main_int_radio1_pane_t4_ParamLimits

0x85c5,	// (0x00017031) main_int_radio1_pane_t4

0xeb34,	// (0x0001d5a0) main_int_radio1_pane_t5_ParamLimits

0xeb34,	// (0x0001d5a0) main_int_radio1_pane_t5

0x85d7,	// (0x00017043) main_int_radio1_pane_t6_ParamLimits

0x85d7,	// (0x00017043) main_int_radio1_pane_t6

0x85ec,	// (0x00017058) main_int_radio1_pane_t7_ParamLimits

0x85ec,	// (0x00017058) main_int_radio1_pane_t7

0x8601,	// (0x0001706d) main_int_radio1_pane_t8_ParamLimits

0x8601,	// (0x0001706d) main_int_radio1_pane_t8

0x8620,	// (0x0001708c) main_int_radio1_pane_t9_ParamLimits

0x8620,	// (0x0001708c) main_int_radio1_pane_t9

0x8632,	// (0x0001709e) main_int_radio1_pane_t10_ParamLimits

0x8632,	// (0x0001709e) main_int_radio1_pane_t10

0x8658,	// (0x000170c4) main_int_radio1_pane_t11_ParamLimits

0x8658,	// (0x000170c4) main_int_radio1_pane_t11

0x867e,	// (0x000170ea) main_int_radio1_pane_t12_ParamLimits

0x867e,	// (0x000170ea) main_int_radio1_pane_t12

0x000b,

0xfe64,	// (0x0001e8d0) main_int_radio1_pane_t_ParamLimits

0xfe64,	// (0x0001e8d0) main_int_radio1_pane_t

0xeb46,	// (0x0001d5b2) int_radio_list_pane

0xe9b2,	// (0x0001d41e) scroll_pane_cp037

0xeb4e,	// (0x0001d5ba) list_double_large_graphic_int_radio_pane_ParamLimits

0xeb4e,	// (0x0001d5ba) list_double_large_graphic_int_radio_pane

0xeb67,	// (0x0001d5d3) list_double_large_graphic_int_radio_pane_g1

0xeb70,	// (0x0001d5dc) list_double_large_graphic_int_radio_pane_t1

0xeb7e,	// (0x0001d5ea) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfe7d,	// (0x0001e8e9) list_double_large_graphic_int_radio_pane_t

0x912c,	// (0x00017b98) list_highlight_pane_cp027

0xeab6,	// (0x0001d522) main_button_pane_4

0x820f,	// (0x00016c7b) main_welc_pane_g4_ParamLimits

0x820f,	// (0x00016c7b) main_welc_pane_g4

0x8282,	// (0x00016cee) main_welc_pane_t4_ParamLimits

0x8282,	// (0x00016cee) main_welc_pane_t4

0x8299,	// (0x00016d05) main_welc_pane_t5_ParamLimits

0x8299,	// (0x00016d05) main_welc_pane_t5

0x82d6,	// (0x00016d42) main_welc_pane_t6_ParamLimits

0x82d6,	// (0x00016d42) main_welc_pane_t6

0x83b0,	// (0x00016e1c) welc_button_pane_2_ParamLimits

0x83b0,	// (0x00016e1c) welc_button_pane_2

0x83cc,	// (0x00016e38) welc_button_pane_3_ParamLimits

0x83cc,	// (0x00016e38) welc_button_pane_3

0xeabe,	// (0x0001d52a) welc_button_pane_4

0x83eb,	// (0x00016e57) welc_button_pane_5_ParamLimits

0x83eb,	// (0x00016e57) welc_button_pane_5

0x060b,	// (0x0000f077) main_popup_welc_pane

0xeb9b,	// (0x0001d607) main_welc_sk_g3

0xeba5,	// (0x0001d611) main_welc_sk_g4

0xebaf,	// (0x0001d61b) main_welc_sk_t3

0xebbf,	// (0x0001d62b) main_welc_sk_t4

0xebcf,	// (0x0001d63b) popup_welc_pane_t4

0xebdd,	// (0x0001d649) popup_welc_pane_t5

0xebeb,	// (0x0001d657) popup_welc_pane_t6

0x912c,	// (0x00017b98) main_acti_pane

0x912c,	// (0x00017b98) main_sso_pane

0x8690,	// (0x000170fc) sso_body_pane_ParamLimits

0x8690,	// (0x000170fc) sso_body_pane

0x86a4,	// (0x00017110) sso_logo_pane_ParamLimits

0x86a4,	// (0x00017110) sso_logo_pane

0x86d4,	// (0x00017140) sso_sk_pane_ParamLimits

0x86d4,	// (0x00017140) sso_sk_pane

0x9b9b,	// (0x00018607) main_sso_logo_pane_g1

0x86e6,	// (0x00017152) sso_sk_pane_t1_ParamLimits

0x86e6,	// (0x00017152) sso_sk_pane_t1

0x8700,	// (0x0001716c) sso_sk_pane_t2_ParamLimits

0x8700,	// (0x0001716c) sso_sk_pane_t2

0x0001,

0xfe82,	// (0x0001e8ee) sso_sk_pane_t_ParamLimits

0xfe82,	// (0x0001e8ee) sso_sk_pane_t

0xec29,	// (0x0001d695) aid_sso_gap

0xec32,	// (0x0001d69e) aid_sso_txt1

0xec3c,	// (0x0001d6a8) aid_sso_txt2

0xec46,	// (0x0001d6b2) aid_sso_txt3

0x0002,

0xfe87,	// (0x0001e8f3) aid_sso_txt

0xec50,	// (0x0001d6bc) aid_sso_widget

0x876a,	// (0x000171d6) sso_btn_pane_ParamLimits

0x876a,	// (0x000171d6) sso_btn_pane

0x87f2,	// (0x0001725e) sso_option_pane_ParamLimits

0x87f2,	// (0x0001725e) sso_option_pane

0x8872,	// (0x000172de) sso_query_pane_ParamLimits

0x8872,	// (0x000172de) sso_query_pane

0x88c8,	// (0x00017334) sso_query_pane_cp01_ParamLimits

0x88c8,	// (0x00017334) sso_query_pane_cp01

0x8920,	// (0x0001738c) sso_t_hdr_pane_ParamLimits

0x8920,	// (0x0001738c) sso_t_hdr_pane

0x894a,	// (0x000173b6) sso_t_nml_pane_ParamLimits

0x894a,	// (0x000173b6) sso_t_nml_pane

0xec5a,	// (0x0001d6c6) sso_t_sub_pane

0x86b1,	// (0x0001711d) sso_popup_window_ParamLimits

0x86b1,	// (0x0001711d) sso_popup_window

0x8716,	// (0x00017182) sso_apps_pane_ParamLimits

0x8716,	// (0x00017182) sso_apps_pane

0x8740,	// (0x000171ac) sso_body_pane_g1

0x874a,	// (0x000171b6) sso_body_pane_t1

0x875a,	// (0x000171c6) sso_body_pane_t2

0x0001,

0xfe8e,	// (0x0001e8fa) sso_body_pane_t

0x87bc,	// (0x00017228) sso_btn_pane_cp01_ParamLimits

0x87bc,	// (0x00017228) sso_btn_pane_cp01

0x8846,	// (0x000172b2) sso_prog_pane_ParamLimits

0x8846,	// (0x000172b2) sso_prog_pane

0x89a0,	// (0x0001740c) sso_t_hdr_pane_t1_ParamLimits

0x89a0,	// (0x0001740c) sso_t_hdr_pane_t1

0xec6f,	// (0x0001d6db) input_focus_pane_cp10_ParamLimits

0xec6f,	// (0x0001d6db) input_focus_pane_cp10

0xec89,	// (0x0001d6f5) sso_query_pane_t1_ParamLimits

0xec89,	// (0x0001d6f5) sso_query_pane_t1

0xec9c,	// (0x0001d708) sso_query_pane_t2_ParamLimits

0xec9c,	// (0x0001d708) sso_query_pane_t2

0xecb7,	// (0x0001d723) sso_query_pane_t3_ParamLimits

0xecb7,	// (0x0001d723) sso_query_pane_t3

0xece1,	// (0x0001d74d) sso_query_pane_t4_ParamLimits

0xece1,	// (0x0001d74d) sso_query_pane_t4

0x0003,

0xfe93,	// (0x0001e8ff) sso_query_pane_t_ParamLimits

0xfe93,	// (0x0001e8ff) sso_query_pane_t

0x912c,	// (0x00017b98) bg_button_pane_cp22

0xeb8c,	// (0x0001d5f8) sso_btn_pane_t1

0x89b3,	// (0x0001741f) sso_t_nml_pane_t1_ParamLimits

0x89b3,	// (0x0001741f) sso_t_nml_pane_t1

0xed05,	// (0x0001d771) sso_option_row_pane_ParamLimits

0xed05,	// (0x0001d771) sso_option_row_pane

0xed18,	// (0x0001d784) sso_t_sub_pane_t1_ParamLimits

0xed18,	// (0x0001d784) sso_t_sub_pane_t1

0x919b,	// (0x00017c07) bg_popup_window_pane_cp11_ParamLimits

0x919b,	// (0x00017c07) bg_popup_window_pane_cp11

0xed35,	// (0x0001d7a1) popup_sk_window_cp01_ParamLimits

0xed35,	// (0x0001d7a1) popup_sk_window_cp01

0xed42,	// (0x0001d7ae) sso_popup_body_pane_ParamLimits

0xed42,	// (0x0001d7ae) sso_popup_body_pane

0xed4f,	// (0x0001d7bb) scroll_pane_cp21_ParamLimits

0xed4f,	// (0x0001d7bb) scroll_pane_cp21

0xed5c,	// (0x0001d7c8) sso_popup_body_t_pane_ParamLimits

0xed5c,	// (0x0001d7c8) sso_popup_body_t_pane

0xed69,	// (0x0001d7d5) sso_popup_body_t_hdr_pane_ParamLimits

0xed69,	// (0x0001d7d5) sso_popup_body_t_hdr_pane

0xed7c,	// (0x0001d7e8) sso_popup_body_t_nml_pane_ParamLimits

0xed7c,	// (0x0001d7e8) sso_popup_body_t_nml_pane

0xed9a,	// (0x0001d806) sso_popup_body_t_sub_pane_ParamLimits

0xed9a,	// (0x0001d806) sso_popup_body_t_sub_pane

0xedbd,	// (0x0001d829) sso_popup_body_t_hdr_pane_t1

0x89ce,	// (0x0001743a) sso_popup_body_t_nml_pane_t1_ParamLimits

0x89ce,	// (0x0001743a) sso_popup_body_t_nml_pane_t1

0xedcd,	// (0x0001d839) sso_popup_body_t_sub_pane_t1_ParamLimits

0xedcd,	// (0x0001d839) sso_popup_body_t_sub_pane_t1

0x9b9b,	// (0x00018607) sso_prog_pane_g1

0x8a08,	// (0x00017474) sso_apps_pane_comp1_ParamLimits

0x8a08,	// (0x00017474) sso_apps_pane_comp1

0xedf2,	// (0x0001d85e) sso_apps_pane_comp1_g1

0xedfa,	// (0x0001d866) sso_apps_pane_comp1_t1

0xee16,	// (0x0001d882) sso_option_row_pane_g1

0xee1e,	// (0x0001d88a) sso_option_row_pane_t1

0x816d,	// (0x00016bd9) bg_welc_area_ParamLimits

0x816d,	// (0x00016bd9) bg_welc_area

0x8314,	// (0x00016d80) sso_t_hdr_pane_a_t1_ParamLimits

0x8314,	// (0x00016d80) sso_t_hdr_pane_a_t1

0x832f,	// (0x00016d9b) sso_t_nml_pane_a_t1_ParamLimits

0x832f,	// (0x00016d9b) sso_t_nml_pane_a_t1

0x835e,	// (0x00016dca) sso_t_sub_pane_a_t1_ParamLimits

0x835e,	// (0x00016dca) sso_t_sub_pane_a_t1

0xeb8c,	// (0x0001d5f8) sso_btn_pane_t1_copy1

0x912c,	// (0x00017b98) welc_button_pane_2_comp1

0xebf9,	// (0x0001d665) sso_t_hdr_pane_p_t1

0xec09,	// (0x0001d675) sso_t_nml_pane_p_t1

0xec19,	// (0x0001d685) sso_t_sub_pane_p_t1

0xe035,	// (0x0001caa1) list_cmail_pane_ParamLimits

0x8401,	// (0x00016e6d) welc_button_pane_cp01_ParamLimits

0x8401,	// (0x00016e6d) welc_button_pane_cp01

0x912c,	// (0x00017b98) main_att_pane

0xee08,	// (0x0001d874) input_focus_pane_cp10_t1

0xee1e,	// (0x0001d88a) sso_option_row_pane_t1_ParamLimits

0x8a22,	// (0x0001748e) main_att_body_pane_ParamLimits

0x8a22,	// (0x0001748e) main_att_body_pane

0x8a57,	// (0x000174c3) att_btn_pane_ParamLimits

0x8a57,	// (0x000174c3) att_btn_pane

0x8a7c,	// (0x000174e8) att_btn_pane_cp01_ParamLimits

0x8a7c,	// (0x000174e8) att_btn_pane_cp01

0x8a9c,	// (0x00017508) att_li_srv_pane_ParamLimits

0x8a9c,	// (0x00017508) att_li_srv_pane

0x8ab9,	// (0x00017525) att_opt_pane_ParamLimits

0x8ab9,	// (0x00017525) att_opt_pane

0x8b05,	// (0x00017571) att_query_pane_ParamLimits

0x8b05,	// (0x00017571) att_query_pane

0x8b51,	// (0x000175bd) att_query_pane_cp01_ParamLimits

0x8b51,	// (0x000175bd) att_query_pane_cp01

0x8b9d,	// (0x00017609) att_t_hdr_pane_ParamLimits

0x8b9d,	// (0x00017609) att_t_hdr_pane

0x8bf5,	// (0x00017661) att_t_nml_pane_ParamLimits

0x8bf5,	// (0x00017661) att_t_nml_pane

0x8c2e,	// (0x0001769a) att_t_nml_pane_cp01_ParamLimits

0x8c2e,	// (0x0001769a) att_t_nml_pane_cp01

0x8c5a,	// (0x000176c6) att_t_nmlb_pane_ParamLimits

0x8c5a,	// (0x000176c6) att_t_nmlb_pane

0x8c77,	// (0x000176e3) att_term_pane_ParamLimits

0x8c77,	// (0x000176e3) att_term_pane

0x8cc3,	// (0x0001772f) main_att_body_pane_g1_ParamLimits

0x8cc3,	// (0x0001772f) main_att_body_pane_g1

0xee34,	// (0x0001d8a0) att_t_hdr_pane_t1_ParamLimits

0xee34,	// (0x0001d8a0) att_t_hdr_pane_t1

0xee4d,	// (0x0001d8b9) att_t_nml_pane_t1_ParamLimits

0xee4d,	// (0x0001d8b9) att_t_nml_pane_t1

0xee72,	// (0x0001d8de) att_btn_pane_t1

0x912c,	// (0x00017b98) bg_button_pane_cp23

0x8cfa,	// (0x00017766) att_li_srv_row_pane_ParamLimits

0x8cfa,	// (0x00017766) att_li_srv_row_pane

0xee82,	// (0x0001d8ee) att_t_nmlb_pane_t1_ParamLimits

0xee82,	// (0x0001d8ee) att_t_nmlb_pane_t1

0xee9b,	// (0x0001d907) att_query_pane_t1

0xeeaa,	// (0x0001d916) att_query_pane_t2

0xeeb9,	// (0x0001d925) att_query_pane_t3

0x0002,

0xfe9c,	// (0x0001e908) att_query_pane_t

0xeec8,	// (0x0001d934) input_focus_pane_cp11

0xeed1,	// (0x0001d93d) att_term_pane_t1_ParamLimits

0xeed1,	// (0x0001d93d) att_term_pane_t1

0x912c,	// (0x00017b98) att_opt_row_pane

0xeeee,	// (0x0001d95a) att_opt_row_pane_g1

0xeef6,	// (0x0001d962) att_opt_row_pane_t1_ParamLimits

0xeef6,	// (0x0001d962) att_opt_row_pane_t1

0x8d0a,	// (0x00017776) att_li_srv_row_pane_g1

0x8d12,	// (0x0001777e) att_li_srv_row_pane_t1

0x8d27,	// (0x00017793) att_li_srv_row_pane_t2

0x0001,

0xfea3,	// (0x0001e90f) att_li_srv_row_pane_t

0x912c,	// (0x00017b98) main_call7_pane

0x912c,	// (0x00017b98) main_vod_pane

0xec5a,	// (0x0001d6c6) sso_t_sub_pane_ParamLimits

0x8a38,	// (0x000174a4) att_btn_emg_pane_ParamLimits

0x8a38,	// (0x000174a4) att_btn_emg_pane

0x8d12,	// (0x0001777e) att_li_srv_row_pane_t1_ParamLimits

0x8d27,	// (0x00017793) att_li_srv_row_pane_t2_ParamLimits

0xfea3,	// (0x0001e90f) att_li_srv_row_pane_t_ParamLimits

0xef0f,	// (0x0001d97b) att_btn_close_pane_g1

0x912c,	// (0x00017b98) bg_button_pane_cp24

0x8d3c,	// (0x000177a8) main_vod_body_pane_ParamLimits

0x8d3c,	// (0x000177a8) main_vod_body_pane

0x8d50,	// (0x000177bc) main_vod_body_pane_g1_ParamLimits

0x8d50,	// (0x000177bc) main_vod_body_pane_g1

0x8d84,	// (0x000177f0) scroll_pane_cp24_ParamLimits

0x8d84,	// (0x000177f0) scroll_pane_cp24

0x8dd2,	// (0x0001783e) vod_btn_pane_ParamLimits

0x8dd2,	// (0x0001783e) vod_btn_pane

0x8e16,	// (0x00017882) vod_det_pane_ParamLimits

0x8e16,	// (0x00017882) vod_det_pane

0x8e46,	// (0x000178b2) vod_logo_g1_ParamLimits

0x8e46,	// (0x000178b2) vod_logo_g1

0x8e84,	// (0x000178f0) vod_opt_pane_ParamLimits

0x8e84,	// (0x000178f0) vod_opt_pane

0x8eb7,	// (0x00017923) vod_opt_pane_cp01_ParamLimits

0x8eb7,	// (0x00017923) vod_opt_pane_cp01

0x8ee3,	// (0x0001794f) vod_query_pane_ParamLimits

0x8ee3,	// (0x0001794f) vod_query_pane

0x8f10,	// (0x0001797c) vod_query_pane_cp01_ParamLimits

0x8f10,	// (0x0001797c) vod_query_pane_cp01

0x8f1c,	// (0x00017988) vod_t_nml_pane_ParamLimits

0x8f1c,	// (0x00017988) vod_t_nml_pane

0x8fc5,	// (0x00017a31) vod_t_nml_pane_cp01_ParamLimits

0x8fc5,	// (0x00017a31) vod_t_nml_pane_cp01

0x9001,	// (0x00017a6d) vod_t_sub_pane_ParamLimits

0x9001,	// (0x00017a6d) vod_t_sub_pane

0x9036,	// (0x00017aa2) vod_t_sub_pane_cp01_ParamLimits

0x9036,	// (0x00017aa2) vod_t_sub_pane_cp01

0xeec8,	// (0x0001d934) vod_query_field_pane

0xee9b,	// (0x0001d907) vod_query_pane_t1

0x912c,	// (0x00017b98) bg_button_pane_cp25

0xef17,	// (0x0001d983) sso_btn_pane_t1_copy2

0x9062,	// (0x00017ace) vod_t_nml_pane_t1_ParamLimits

0x9062,	// (0x00017ace) vod_t_nml_pane_t1

0xef27,	// (0x0001d993) vod_opt_row_pane_ParamLimits

0xef27,	// (0x0001d993) vod_opt_row_pane

0xef39,	// (0x0001d9a5) vod_t_sub_pane_t1_ParamLimits

0xef39,	// (0x0001d9a5) vod_t_sub_pane_t1

0x9091,	// (0x00017afd) vod_det_cell_pane_ParamLimits

0x9091,	// (0x00017afd) vod_det_cell_pane

0x912c,	// (0x00017b98) input_focus_pane_cp15

0xef52,	// (0x0001d9be) vod_query_field_pane_t1

0xef60,	// (0x0001d9cc) vod_opt_row_pane_g1_ParamLimits

0xef60,	// (0x0001d9cc) vod_opt_row_pane_g1

0xef6c,	// (0x0001d9d8) vod_opt_row_pane_t1_ParamLimits

0xef6c,	// (0x0001d9d8) vod_opt_row_pane_t1

0xef91,	// (0x0001d9fd) vod_det_cell_field_pane

0xef9a,	// (0x0001da06) vod_det_cell_pane_g1

0xee9b,	// (0x0001d907) vod_det_cell_pane_t1

0x912c,	// (0x00017b98) input_focus_pane_cp16

0xef52,	// (0x0001d9be) vod_det_cell_field_pane_t1

0x79e4,	// (0x00016450) call7_btn_grp_pane_ParamLimits

0x79e4,	// (0x00016450) call7_btn_grp_pane

0x90a5,	// (0x00017b11) call7_bubble_pane_ParamLimits

0x90a5,	// (0x00017b11) call7_bubble_pane

0x90bc,	// (0x00017b28) cell_call7_btn_pane_ParamLimits

0x90bc,	// (0x00017b28) cell_call7_btn_pane

0x90d0,	// (0x00017b3c) call7_pane_g1_ParamLimits

0x90d0,	// (0x00017b3c) call7_pane_g1

0x90df,	// (0x00017b4b) call7_windows_conf_pane_ParamLimits

0x90df,	// (0x00017b4b) call7_windows_conf_pane

0x90f9,	// (0x00017b65) popup_call7_1st_window_ParamLimits

0x90f9,	// (0x00017b65) popup_call7_1st_window

0x910a,	// (0x00017b76) popup_call7_2nd_window_ParamLimits

0x910a,	// (0x00017b76) popup_call7_2nd_window

0x911b,	// (0x00017b87) popup_call7_3rd_window_ParamLimits

0x911b,	// (0x00017b87) popup_call7_3rd_window

0x912c,	// (0x00017b98) bg_button_pane_cp26

0xe887,	// (0x0001d2f3) cell_call7_btn_pane_g1

0xe890,	// (0x0001d2fc) cell_call7_btn_pane_t1

0x912c,	// (0x00017b98) bg_popup_window_pane_cp12

0xefa2,	// (0x0001da0e) popup_call7_1st_window_g1

0xefaa,	// (0x0001da16) popup_call7_1st_window_g2

0xefb2,	// (0x0001da1e) popup_call7_1st_window_g3

0x0002,

0xfea8,	// (0x0001e914) popup_call7_1st_window_g

0xefba,	// (0x0001da26) popup_call7_1st_window_t1

0xefc9,	// (0x0001da35) popup_call7_1st_window_t2

0xefd7,	// (0x0001da43) popup_call7_1st_window_t3

0x0002,

0xfeaf,	// (0x0001e91b) popup_call7_1st_window_t

0x912c,	// (0x00017b98) bg_popup_window_pane_cp13

0xefe5,	// (0x0001da51) popup_call7_2nd_window_g1

0xefed,	// (0x0001da59) popup_call7_2nd_window_g2

0xeff5,	// (0x0001da61) popup_call7_2nd_window_g3

0x0002,

0xfeb6,	// (0x0001e922) popup_call7_2nd_window_g

0xeffd,	// (0x0001da69) popup_call7_2nd_window_t1

0x912c,	// (0x00017b98) bg_popup_window_pane_cp14

0xf00c,	// (0x0001da78) call7_list_conf_pane

0xf014,	// (0x0001da80) call7_list_conf_row_pane_ParamLimits

0xf014,	// (0x0001da80) call7_list_conf_row_pane

0xf027,	// (0x0001da93) call7_list_conf_row_pane_g1

0xf02f,	// (0x0001da9b) call7_list_conf_row_pane_g2

0x0001,

0xfebd,	// (0x0001e929) call7_list_conf_row_pane_g

0xf037,	// (0x0001daa3) call7_list_conf_row_pane_t1

0x912c,	// (0x00017b98) list_highlight_pane_cp22
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

} // end of namespace AknLayoutScalable_Elaf_pnl4_apps_nhd4_lsc_tch_Normal
