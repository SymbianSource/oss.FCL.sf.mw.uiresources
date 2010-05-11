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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x0000f116 };

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
0x0119,	// (0x0000f22f) Screen

0x0125,	// (0x0000f23b) application_window

0x0161,	// (0x0000f277) area_bottom_pane_ParamLimits

0x0161,	// (0x0000f277) area_bottom_pane

0x019a,	// (0x0000f2b0) area_top_pane_ParamLimits

0x019a,	// (0x0000f2b0) area_top_pane

0x941c,	// (0x00018532) call_video_uplink_pane_ParamLimits

0x941c,	// (0x00018532) call_video_uplink_pane

0x0228,	// (0x0000f33e) main_pane_ParamLimits

0x0228,	// (0x0000f33e) main_pane

0xbe25,	// (0x0001af3b) context_pane

0x389c,	// (0x000129b2) navi_pane

0x38ce,	// (0x000129e4) popup_cale_events_window_ParamLimits

0x38ce,	// (0x000129e4) popup_cale_events_window

0xbe38,	// (0x0001af4e) popup_mup_playback_window

0x38e6,	// (0x000129fc) signal_pane

0x9ba9,	// (0x00018cbf) main_browser_pane

0x9e22,	// (0x00018f38) main_burst_pane

0x3604,	// (0x0001271a) main_calc_pane

0xbdb7,	// (0x0001aecd) main_cale_day_pane

0x0838,	// (0x0000f94e) main_cale_month_pane

0xbdb7,	// (0x0001aecd) main_cale_week_pane

0x9e22,	// (0x00018f38) main_call_pane

0x985b,	// (0x00018971) main_call_poc_pane

0x9e22,	// (0x00018f38) main_camera_pane

0x9e22,	// (0x00018f38) main_chi_dic_pane

0xa6c6,	// (0x000197dc) main_clock_pane

0x985b,	// (0x00018971) main_fmradio_pane

0x9e22,	// (0x00018f38) main_graph_messa_pane

0x985b,	// (0x00018971) main_help_pane

0x9ba9,	// (0x00018cbf) main_im_pane

0x9ab6,	// (0x00018bcc) main_image_pane_ParamLimits

0x9ab6,	// (0x00018bcc) main_image_pane

0x985b,	// (0x00018971) main_location2_pane

0x9e22,	// (0x00018f38) main_location_pane

0x9ab6,	// (0x00018bcc) main_messa_pane

0x985b,	// (0x00018971) main_mp2_pane

0x9e22,	// (0x00018f38) main_mp_pane

0x985b,	// (0x00018971) main_msg_pane

0x985b,	// (0x00018971) main_mup_eq_pane

0x985b,	// (0x00018971) main_mup_pane

0x9ba9,	// (0x00018cbf) main_notes_pane

0x985b,	// (0x00018971) main_pec_pane

0x985b,	// (0x00018971) main_phob_pane

0x985b,	// (0x00018971) main_pinb_pane

0x985b,	// (0x00018971) main_postcard_pane

0x985b,	// (0x00018971) main_qdial_pane

0x9e22,	// (0x00018f38) main_skin_pane

0x985b,	// (0x00018971) main_smil2_pane

0x9e22,	// (0x00018f38) main_smil_pane

0x9e22,	// (0x00018f38) main_video_pane

0x9e22,	// (0x00018f38) main_video_tele_pane

0x9ab6,	// (0x00018bcc) main_viewer_pane_ParamLimits

0x9ab6,	// (0x00018bcc) main_viewer_pane

0x9e22,	// (0x00018f38) main_vorec_pane

0x3658,	// (0x0001276e) popup_blid_sat_info_window_ParamLimits

0x3658,	// (0x0001276e) popup_blid_sat_info_window

0x36b0,	// (0x000127c6) popup_dyc_status_message_window_ParamLimits

0x36b0,	// (0x000127c6) popup_dyc_status_message_window

0x36c8,	// (0x000127de) popup_grid_large_graphic_window_ParamLimits

0x36c8,	// (0x000127de) popup_grid_large_graphic_window

0x3778,	// (0x0001288e) popup_loc_request_window_ParamLimits

0x3778,	// (0x0001288e) popup_loc_request_window

0x3874,	// (0x0001298a) popup_wml_address_window_ParamLimits

0x3874,	// (0x0001298a) popup_wml_address_window

0x343e,	// (0x00012554) call_muted_g1

0x30f2,	// (0x00012208) popup_call_audio_conf_window_ParamLimits

0x30f2,	// (0x00012208) popup_call_audio_conf_window

0x3452,	// (0x00012568) popup_call_audio_first_window_ParamLimits

0x3452,	// (0x00012568) popup_call_audio_first_window

0x34c8,	// (0x000125de) popup_call_audio_in_window_ParamLimits

0x34c8,	// (0x000125de) popup_call_audio_in_window

0x3504,	// (0x0001261a) popup_call_audio_out_window_ParamLimits

0x3504,	// (0x0001261a) popup_call_audio_out_window

0x353e,	// (0x00012654) popup_call_audio_second_window_ParamLimits

0x353e,	// (0x00012654) popup_call_audio_second_window

0x3594,	// (0x000126aa) popup_call_audio_wait_window_ParamLimits

0x3594,	// (0x000126aa) popup_call_audio_wait_window

0x35c9,	// (0x000126df) popup_number_entry_window_ParamLimits

0x35c9,	// (0x000126df) popup_number_entry_window

0x9448,	// (0x0001855e) bg_popup_call_pane_cp05_ParamLimits

0x9448,	// (0x0001855e) bg_popup_call_pane_cp05

0x9468,	// (0x0001857e) popup_number_entry_window_t1

0x947b,	// (0x00018591) popup_number_entry_window_t2

0x948d,	// (0x000185a3) popup_number_entry_window_t3

0x0003,

0xf0ca,	// (0x0001e1e0) popup_number_entry_window_t

0x949f,	// (0x000185b5) text_title_cp2

0x94b2,	// (0x000185c8) bg_popup_call_pane_cp_ParamLimits

0x94b2,	// (0x000185c8) bg_popup_call_pane_cp

0x94c0,	// (0x000185d6) call_thumbnail_pane

0x94c8,	// (0x000185de) popup_call_audio_in_window_g1_ParamLimits

0x94c8,	// (0x000185de) popup_call_audio_in_window_g1

0x94d4,	// (0x000185ea) popup_call_audio_in_window_g2_ParamLimits

0x94d4,	// (0x000185ea) popup_call_audio_in_window_g2

0x94e0,	// (0x000185f6) popup_call_audio_in_window_g3_ParamLimits

0x94e0,	// (0x000185f6) popup_call_audio_in_window_g3

0x0002,

0xf0d3,	// (0x0001e1e9) popup_call_audio_in_window_g_ParamLimits

0xf0d3,	// (0x0001e1e9) popup_call_audio_in_window_g

0x94ec,	// (0x00018602) popup_call_audio_in_window_t1_ParamLimits

0x94ec,	// (0x00018602) popup_call_audio_in_window_t1

0x9508,	// (0x0001861e) popup_call_audio_in_window_t2_ParamLimits

0x9508,	// (0x0001861e) popup_call_audio_in_window_t2

0x9524,	// (0x0001863a) popup_call_audio_in_window_t3_ParamLimits

0x9524,	// (0x0001863a) popup_call_audio_in_window_t3

0x0002,

0xf0da,	// (0x0001e1f0) popup_call_audio_in_window_t_ParamLimits

0xf0da,	// (0x0001e1f0) popup_call_audio_in_window_t

0x94b2,	// (0x000185c8) bg_popup_call_pane_cp01_ParamLimits

0x94b2,	// (0x000185c8) bg_popup_call_pane_cp01

0x94c0,	// (0x000185d6) call_thumbnail_pane_cp02

0x9537,	// (0x0001864d) call_type_pane_cp022

0x953f,	// (0x00018655) popup_call_audio_out_window_g1_ParamLimits

0x953f,	// (0x00018655) popup_call_audio_out_window_g1

0x9551,	// (0x00018667) popup_call_audio_out_window_g2_ParamLimits

0x9551,	// (0x00018667) popup_call_audio_out_window_g2

0x955d,	// (0x00018673) popup_call_audio_out_window_g3_ParamLimits

0x955d,	// (0x00018673) popup_call_audio_out_window_g3

0x0002,

0xf0e1,	// (0x0001e1f7) popup_call_audio_out_window_g_ParamLimits

0xf0e1,	// (0x0001e1f7) popup_call_audio_out_window_g

0x956f,	// (0x00018685) popup_call_audio_out_window_t1_ParamLimits

0x956f,	// (0x00018685) popup_call_audio_out_window_t1

0x9587,	// (0x0001869d) popup_call_audio_out_window_t2_ParamLimits

0x9587,	// (0x0001869d) popup_call_audio_out_window_t2

0x0001,

0xf0e8,	// (0x0001e1fe) popup_call_audio_out_window_t_ParamLimits

0xf0e8,	// (0x0001e1fe) popup_call_audio_out_window_t

0x959c,	// (0x000186b2) bg_popup_call_pane_ParamLimits

0x959c,	// (0x000186b2) bg_popup_call_pane

0x03e5,	// (0x0000f4fb) call_thumbnail_pane_cp_ParamLimits

0x03e5,	// (0x0000f4fb) call_thumbnail_pane_cp

0x9620,	// (0x00018736) call_type_pane_cp01_ParamLimits

0x9620,	// (0x00018736) call_type_pane_cp01

0x9664,	// (0x0001877a) popup_call_audio_first_window_g1_ParamLimits

0x9664,	// (0x0001877a) popup_call_audio_first_window_g1

0x96b0,	// (0x000187c6) popup_call_audio_first_window_g2_ParamLimits

0x96b0,	// (0x000187c6) popup_call_audio_first_window_g2

0x0001,

0xf0ed,	// (0x0001e203) popup_call_audio_first_window_g_ParamLimits

0xf0ed,	// (0x0001e203) popup_call_audio_first_window_g

0x96f4,	// (0x0001880a) popup_call_audio_first_window_t1_ParamLimits

0x96f4,	// (0x0001880a) popup_call_audio_first_window_t1

0x97a0,	// (0x000188b6) popup_call_audio_first_window_t4_ParamLimits

0x97a0,	// (0x000188b6) popup_call_audio_first_window_t4

0x982c,	// (0x00018942) popup_call_audio_first_window_t5_ParamLimits

0x982c,	// (0x00018942) popup_call_audio_first_window_t5

0x0002,

0xf0f2,	// (0x0001e208) popup_call_audio_first_window_t_ParamLimits

0xf0f2,	// (0x0001e208) popup_call_audio_first_window_t

0x985b,	// (0x00018971) bg_popup_call_pane_cp02

0x9865,	// (0x0001897b) call_type_pane_cp023

0x986d,	// (0x00018983) popup_call_audio_wait_window_g1

0x9875,	// (0x0001898b) popup_call_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0001e20f) popup_call_audio_wait_window_g

0x987d,	// (0x00018993) popup_call_audio_wait_window_t3

0x988b,	// (0x000189a1) bg_popup_call_pane_cp03_ParamLimits

0x988b,	// (0x000189a1) bg_popup_call_pane_cp03

0x98eb,	// (0x00018a01) call_thumbnail_pane_cp011_ParamLimits

0x98eb,	// (0x00018a01) call_thumbnail_pane_cp011

0x98f7,	// (0x00018a0d) call_type_pane_cp034_ParamLimits

0x98f7,	// (0x00018a0d) call_type_pane_cp034

0x9933,	// (0x00018a49) popup_call_audio_second_window_g1_ParamLimits

0x9933,	// (0x00018a49) popup_call_audio_second_window_g1

0x996f,	// (0x00018a85) popup_call_audio_second_window_g2_ParamLimits

0x996f,	// (0x00018a85) popup_call_audio_second_window_g2

0x0001,

0xf0fe,	// (0x0001e214) popup_call_audio_second_window_g_ParamLimits

0xf0fe,	// (0x0001e214) popup_call_audio_second_window_g

0x99ab,	// (0x00018ac1) popup_call_audio_second_window_t1_ParamLimits

0x99ab,	// (0x00018ac1) popup_call_audio_second_window_t1

0x9a2c,	// (0x00018b42) popup_call_audio_second_window_t2_ParamLimits

0x9a2c,	// (0x00018b42) popup_call_audio_second_window_t2

0x9a62,	// (0x00018b78) popup_call_audio_second_window_t3_ParamLimits

0x9a62,	// (0x00018b78) popup_call_audio_second_window_t3

0x0002,

0xf103,	// (0x0001e219) popup_call_audio_second_window_t_ParamLimits

0xf103,	// (0x0001e219) popup_call_audio_second_window_t

0x985b,	// (0x00018971) bg_popup_call_pane_cp04

0x9a98,	// (0x00018bae) list_conf_pane

0x9aa0,	// (0x00018bb6) popup_call_audio_conf_window_t1

0x9aae,	// (0x00018bc4) call_thumbnail_pane_g1

0x9ab6,	// (0x00018bcc) bg_pinb_pane_ParamLimits

0x9ab6,	// (0x00018bcc) bg_pinb_pane

0x9ac4,	// (0x00018bda) find_pinb_pane

0x9acd,	// (0x00018be3) listscroll_pinb_pane_ParamLimits

0x9acd,	// (0x00018be3) listscroll_pinb_pane

0x9adc,	// (0x00018bf2) pinb_bg_pane_g1

0x0409,	// (0x0000f51f) pinb_bg_pane_g2

0x0415,	// (0x0000f52b) pinb_bg_pane_g3

0x0421,	// (0x0000f537) pinb_bg_pane_g4

0x042d,	// (0x0000f543) pinb_bg_pane_g5

0x0439,	// (0x0000f54f) pinb_bg_pane_g6

0x0444,	// (0x0000f55a) pinb_bg_pane_g7

0x044f,	// (0x0000f565) pinb_bg_pane_g8

0x045a,	// (0x0000f570) pinb_bg_pane_g9

0x0464,	// (0x0000f57a) pinb_bg_pane_g10

0x0009,

0xf10a,	// (0x0001e220) pinb_bg_pane_g

0x0481,	// (0x0000f597) grid_pinb_pane

0x048a,	// (0x0000f5a0) list_pinb_pane

0x0493,	// (0x0000f5a9) scroll_pane_cp01_ParamLimits

0x0493,	// (0x0000f5a9) scroll_pane_cp01

0x9ae6,	// (0x00018bfc) find_pinb_pane_g1_ParamLimits

0x9ae6,	// (0x00018bfc) find_pinb_pane_g1

0x9afe,	// (0x00018c14) find_pinb_pane_t1

0x9b10,	// (0x00018c26) find_pinb_pane_t2

0x0001,

0xf124,	// (0x0001e23a) find_pinb_pane_t

0x9b25,	// (0x00018c3b) input_focus_pane_cp01_ParamLimits

0x9b25,	// (0x00018c3b) input_focus_pane_cp01

0x04a5,	// (0x0000f5bb) cell_pinb_pane_ParamLimits

0x04a5,	// (0x0000f5bb) cell_pinb_pane

0x04d0,	// (0x0000f5e6) cell_pinb_pane_g1_ParamLimits

0x04d0,	// (0x0000f5e6) cell_pinb_pane_g1

0x9b31,	// (0x00018c47) cell_pinb_pane_g2_ParamLimits

0x9b31,	// (0x00018c47) cell_pinb_pane_g2

0x9b3d,	// (0x00018c53) cell_pinb_pane_g3_ParamLimits

0x9b3d,	// (0x00018c53) cell_pinb_pane_g3

0x0002,

0xf129,	// (0x0001e23f) cell_pinb_pane_g_ParamLimits

0xf129,	// (0x0001e23f) cell_pinb_pane_g

0x985b,	// (0x00018971) grid_highlight_pane_cp01

0x04e3,	// (0x0000f5f9) list_pinb_item_pane_ParamLimits

0x04e3,	// (0x0000f5f9) list_pinb_item_pane

0x985b,	// (0x00018971) list_highlight_pane_cp02

0x04f6,	// (0x0000f60c) list_pinb_item_pane_g1_ParamLimits

0x04f6,	// (0x0000f60c) list_pinb_item_pane_g1

0x0503,	// (0x0000f619) list_pinb_item_pane_g2_ParamLimits

0x0503,	// (0x0000f619) list_pinb_item_pane_g2

0x050f,	// (0x0000f625) list_pinb_item_pane_g3_ParamLimits

0x050f,	// (0x0000f625) list_pinb_item_pane_g3

0x0520,	// (0x0000f636) list_pinb_item_pane_g4_ParamLimits

0x0520,	// (0x0000f636) list_pinb_item_pane_g4

0x0003,

0xf130,	// (0x0001e246) list_pinb_item_pane_g_ParamLimits

0xf130,	// (0x0001e246) list_pinb_item_pane_g

0x052c,	// (0x0000f642) list_pinb_item_pane_t1_ParamLimits

0x052c,	// (0x0000f642) list_pinb_item_pane_t1

0x0561,	// (0x0000f677) calc_display_pane

0x0589,	// (0x0000f69f) calc_paper_pane

0x05ac,	// (0x0000f6c2) grid_calc_pane

0x985b,	// (0x00018971) bg_list_pane_cp01

0x05da,	// (0x0000f6f0) clock_g1

0x05e2,	// (0x0000f6f8) clock_g2

0x0001,

0xf139,	// (0x0001e24f) clock_g

0x05ea,	// (0x0000f700) clock_t1_ParamLimits

0x05ea,	// (0x0000f700) clock_t1

0x05ff,	// (0x0000f715) clock_t2_ParamLimits

0x05ff,	// (0x0000f715) clock_t2

0x0611,	// (0x0000f727) clock_t3_ParamLimits

0x0611,	// (0x0000f727) clock_t3

0x0623,	// (0x0000f739) clock_t4_ParamLimits

0x0623,	// (0x0000f739) clock_t4

0x0635,	// (0x0000f74b) clock_t5_ParamLimits

0x0635,	// (0x0000f74b) clock_t5

0x064a,	// (0x0000f760) clock_t6_ParamLimits

0x064a,	// (0x0000f760) clock_t6

0x065c,	// (0x0000f772) clock_t7_ParamLimits

0x065c,	// (0x0000f772) clock_t7

0x066e,	// (0x0000f784) clock_t8_ParamLimits

0x066e,	// (0x0000f784) clock_t8

0x0682,	// (0x0000f798) clock_t9_ParamLimits

0x0682,	// (0x0000f798) clock_t9

0x0008,

0xf13e,	// (0x0001e254) clock_t_ParamLimits

0xf13e,	// (0x0001e254) clock_t

0x9b51,	// (0x00018c67) popup_clock_analogue_window_cp02

0x9b51,	// (0x00018c67) popup_clock_digital_window_cp01

0x9b59,	// (0x00018c6f) listscroll_help_pane

0x985b,	// (0x00018971) phob_pre_status_pane

0x9b63,	// (0x00018c79) grid_qdial_pane

0x9ab6,	// (0x00018bcc) listscroll_mce_pane

0x9ab6,	// (0x00018bcc) bg_notes_pane

0x9b6d,	// (0x00018c83) list_notes_pane

0x0696,	// (0x0000f7ac) scroll_pane_cp06

0x9b7b,	// (0x00018c91) bg_calc_paper_pane

0x9b8f,	// (0x00018ca5) list_calc_pane

0x9ba9,	// (0x00018cbf) bg_calc_display_pane

0x06aa,	// (0x0000f7c0) calc_display_pane_t1

0x06bc,	// (0x0000f7d2) calc_display_pane_t2

0x9bb5,	// (0x00018ccb) calc_display_pane_t3

0x0002,

0xf151,	// (0x0001e267) calc_display_pane_t

0x06ce,	// (0x0000f7e4) cell_calc_pane_ParamLimits

0x06ce,	// (0x0000f7e4) cell_calc_pane

0x9bc7,	// (0x00018cdd) bg_calc_paper_pane_g1

0x9bd3,	// (0x00018ce9) bg_calc_paper_pane_g2

0x9bdf,	// (0x00018cf5) bg_calc_paper_pane_g3

0x9beb,	// (0x00018d01) bg_calc_paper_pane_g4

0x9bf7,	// (0x00018d0d) bg_calc_paper_pane_g5

0x0705,	// (0x0000f81b) bg_calc_paper_pane_g6

0x0714,	// (0x0000f82a) bg_calc_paper_pane_g7

0x0723,	// (0x0000f839) bg_calc_paper_pane_g8

0x0007,

0xf158,	// (0x0001e26e) bg_calc_paper_pane_g

0x0736,	// (0x0000f84c) calc_bg_paper_pane_g9

0x0749,	// (0x0000f85f) list_calc_item_pane_ParamLimits

0x0749,	// (0x0000f85f) list_calc_item_pane

0x9c03,	// (0x00018d19) list_calc_item_pane_g1

0x9c10,	// (0x00018d26) list_calc_item_pane_t1_ParamLimits

0x9c10,	// (0x00018d26) list_calc_item_pane_t1

0x0762,	// (0x0000f878) list_calc_item_pane_t2_ParamLimits

0x0762,	// (0x0000f878) list_calc_item_pane_t2

0x0001,

0xf169,	// (0x0001e27f) list_calc_item_pane_t_ParamLimits

0xf169,	// (0x0001e27f) list_calc_item_pane_t

0x9c22,	// (0x00018d38) cell_calc_pane_g1

0x9c2c,	// (0x00018d42) grid_highlight_pane_cp02

0x9c4e,	// (0x00018d64) bg_calc_display_pane_g1

0x9c57,	// (0x00018d6d) bg_calc_display_pane_g2

0x9c61,	// (0x00018d77) bg_calc_display_pane_g3

0x0002,

0xf173,	// (0x0001e289) bg_calc_display_pane_g

0x0794,	// (0x0000f8aa) cell_qdial_pane_ParamLimits

0x0794,	// (0x0000f8aa) cell_qdial_pane

0x07a8,	// (0x0000f8be) cell_qdial_pane_g1_ParamLimits

0x07a8,	// (0x0000f8be) cell_qdial_pane_g1

0x07be,	// (0x0000f8d4) cell_qdial_pane_g2_ParamLimits

0x07be,	// (0x0000f8d4) cell_qdial_pane_g2

0x9c6a,	// (0x00018d80) cell_qdial_pane_g3_ParamLimits

0x9c6a,	// (0x00018d80) cell_qdial_pane_g3

0x0003,

0xf17a,	// (0x0001e290) cell_qdial_pane_g_ParamLimits

0xf17a,	// (0x0001e290) cell_qdial_pane_g

0x07e4,	// (0x0000f8fa) cell_qdial_pane_t1_ParamLimits

0x07e4,	// (0x0000f8fa) cell_qdial_pane_t1

0x07fc,	// (0x0000f912) cell_qdial_pane_t2_ParamLimits

0x07fc,	// (0x0000f912) cell_qdial_pane_t2

0x080f,	// (0x0000f925) cell_qdial_pane_t3_ParamLimits

0x080f,	// (0x0000f925) cell_qdial_pane_t3

0x0002,

0xf183,	// (0x0001e299) cell_qdial_pane_t_ParamLimits

0xf183,	// (0x0001e299) cell_qdial_pane_t

0x985b,	// (0x00018971) grid_highlight_pane_cp04

0x9c76,	// (0x00018d8c) thumbnail_qdial_pane_ParamLimits

0x9c76,	// (0x00018d8c) thumbnail_qdial_pane

0x9cd2,	// (0x00018de8) list_help_pane

0x9cdb,	// (0x00018df1) scroll_pane_cp02

0x9ce4,	// (0x00018dfa) help_list_pane_t1_ParamLimits

0x9ce4,	// (0x00018dfa) help_list_pane_t1

0x9d02,	// (0x00018e18) bg_notes_pane_g2

0x9d0a,	// (0x00018e20) bg_notes_pane_g3

0x9d12,	// (0x00018e28) notes_bg_pane_g1

0x9d1a,	// (0x00018e30) notes_bg_pane_g4

0x9d22,	// (0x00018e38) notes_bg_pane_g5

0x9d2a,	// (0x00018e40) notes_bg_pane_g6

0x9d32,	// (0x00018e48) notes_bg_pane_g7

0x9d3a,	// (0x00018e50) notes_bg_pane_g8

0x9d42,	// (0x00018e58) notes_bg_pane_g9

0x0006,

0xf1a1,	// (0x0001e2b7) notes_bg_pane_g

0x0822,	// (0x0000f938) list_notes_text_pane_ParamLimits

0x0822,	// (0x0000f938) list_notes_text_pane

0x9d4a,	// (0x00018e60) list_notes_text_pane_g1

0x9d53,	// (0x00018e69) list_notes_text_pane_t1

0x0838,	// (0x0000f94e) listscroll_cale_week_pane

0x0864,	// (0x0000f97a) bg_cale_heading_pane

0x9d7b,	// (0x00018e91) bg_cale_pane_cp01

0x087c,	// (0x0000f992) cale_week_corner_pane

0x089b,	// (0x0000f9b1) cale_week_day_heading_pane

0x08b8,	// (0x0000f9ce) cale_week_scroll_pane_g1

0x08cb,	// (0x0000f9e1) cale_week_scroll_pane_g2

0x08e3,	// (0x0000f9f9) cale_week_scroll_pane_g3

0x08fb,	// (0x0000fa11) cale_week_scroll_pane_g4

0x0913,	// (0x0000fa29) cale_week_scroll_pane_g5

0x0933,	// (0x0000fa49) cale_week_scroll_pane_g6

0x0953,	// (0x0000fa69) cale_week_scroll_pane_g7

0x0973,	// (0x0000fa89) cale_week_scroll_pane_g8

0x0997,	// (0x0000faad) cale_week_scroll_pane_g9

0x09af,	// (0x0000fac5) cale_week_scroll_pane_g10

0x09c7,	// (0x0000fadd) cale_week_scroll_pane_g11

0x09df,	// (0x0000faf5) cale_week_scroll_pane_g12

0x09f7,	// (0x0000fb0d) cale_week_scroll_pane_g13

0x09f7,	// (0x0000fb0d) cale_week_scroll_pane_g14

0x09f7,	// (0x0000fb0d) cale_week_scroll_pane_g15

0x000f,

0xf1b0,	// (0x0001e2c6) cale_week_scroll_pane_g

0x0a33,	// (0x0000fb49) cale_week_time_pane

0x0a57,	// (0x0000fb6d) grid_cale_week_pane

0x9daa,	// (0x00018ec0) scroll_pane_cp08

0x0a7d,	// (0x0000fb93) cell_cale_week_pane_ParamLimits

0x0a7d,	// (0x0000fb93) cell_cale_week_pane

0x0b0b,	// (0x0000fc21) cale_week_day_heading_pane_t1

0x0b55,	// (0x0000fc6b) cale_week_day_heading_pane_t2

0x0ba4,	// (0x0000fcba) cale_week_day_heading_pane_t3

0x0bf3,	// (0x0000fd09) cale_week_day_heading_pane_t4

0x0c42,	// (0x0000fd58) cale_week_day_heading_pane_t5

0x0c99,	// (0x0000fdaf) cale_week_day_heading_pane_t6

0x0cf0,	// (0x0000fe06) cale_week_day_heading_pane_t7

0x0006,

0xf1d1,	// (0x0001e2e7) cale_week_day_heading_pane_t

0x9dc7,	// (0x00018edd) bg_cale_side_pane

0x0d3a,	// (0x0000fe50) cale_week_time_pane_t1

0x0d54,	// (0x0000fe6a) cale_week_time_pane_t2

0x0d6e,	// (0x0000fe84) cale_week_time_pane_t3

0x0d88,	// (0x0000fe9e) cale_week_time_pane_t4

0x0da2,	// (0x0000feb8) cale_week_time_pane_t5

0x0dbc,	// (0x0000fed2) cale_week_time_pane_t6

0x0dd6,	// (0x0000feec) cale_week_time_pane_t7

0x0df0,	// (0x0000ff06) cale_week_time_pane_t8

0x0007,

0xf1e0,	// (0x0001e2f6) cale_week_time_pane_t

0x0e10,	// (0x0000ff26) cell_cale_week_pane_g2

0x0e34,	// (0x0000ff4a) cell_cale_week_pane_g3_ParamLimits

0x0e34,	// (0x0000ff4a) cell_cale_week_pane_g3

0x9dd5,	// (0x00018eeb) grid_highlight_pane_cp07

0x9ddd,	// (0x00018ef3) listscroll_gms_pane

0x9de7,	// (0x00018efd) grid_gms_pane

0x9df0,	// (0x00018f06) listscroll_gms_pane_g1

0x9df8,	// (0x00018f0e) listscroll_gms_pane_g2

0x0001,

0xf1f1,	// (0x0001e307) listscroll_gms_pane_g

0x0e4c,	// (0x0000ff62) scroll_pane_cp010

0x0e57,	// (0x0000ff6d) cell_gms_pane_ParamLimits

0x0e57,	// (0x0000ff6d) cell_gms_pane

0x0e69,	// (0x0000ff7f) cell_gms_pane_g1

0x9e00,	// (0x00018f16) cell_gms_pane_g2

0x9e08,	// (0x00018f1e) cell_gms_pane_g3

0x9e11,	// (0x00018f27) cell_gms_pane_g4

0x0003,

0xf1f6,	// (0x0001e30c) cell_gms_pane_g

0x9e1a,	// (0x00018f30) grid_highlight_pane_cp09

0x33e8,	// (0x000124fe) phob_pre_status_pane_g1

0x33f0,	// (0x00012506) phob_pre_status_pane_g2

0x33f8,	// (0x0001250e) phob_pre_status_pane_g3

0x3400,	// (0x00012516) phob_pre_status_pane_g4

0x0004,

0xf5f4,	// (0x0001e70a) phob_pre_status_pane_g

0x3410,	// (0x00012526) phob_pre_status_pane_t1

0x341e,	// (0x00012534) phob_pre_status_pane_t2

0x342e,	// (0x00012544) phob_pre_status_pane_t3

0x0002,

0xf5ff,	// (0x0001e715) phob_pre_status_pane_t

0x9e22,	// (0x00018f38) bg_list_pane_cp05

0x0e79,	// (0x0000ff8f) grid_vorec_pane

0x0e81,	// (0x0000ff97) vorec_t1

0x0e8f,	// (0x0000ffa5) vorec_t2

0x0e9d,	// (0x0000ffb3) vorec_t3

0x0eab,	// (0x0000ffc1) vorec_t4

0x93a4,	// (0x000184ba) vorec_t5

0x93b2,	// (0x000184c8) vorec_t6

0x0004,

0xf1ff,	// (0x0001e315) vorec_t

0x93c0,	// (0x000184d6) wait_bar_pane_cp01

0x0ec7,	// (0x0000ffdd) cell_vorec_pane_ParamLimits

0x0ec7,	// (0x0000ffdd) cell_vorec_pane

0x9e2a,	// (0x00018f40) cell_vorec_pane_g1

0x985b,	// (0x00018971) grid_highlight_pane_cp05

0x0ef2,	// (0x00010008) cams_zoom_pane

0x0f01,	// (0x00010017) image_vga_pane

0x0f1b,	// (0x00010031) main_camera_pane_g1

0x0f2d,	// (0x00010043) main_camera_pane_g2

0x0f3d,	// (0x00010053) main_camera_pane_g3

0x0f4d,	// (0x00010063) main_camera_pane_g4

0x0f5d,	// (0x00010073) main_camera_pane_g5

0x0f6d,	// (0x00010083) main_camera_pane_g6

0x0f7d,	// (0x00010093) main_camera_pane_g7

0x0007,

0xf20a,	// (0x0001e320) main_camera_pane_g

0x0f8d,	// (0x000100a3) main_camera_pane_t1

0x0fa3,	// (0x000100b9) main_camera_pane_t2

0x0001,

0xf21b,	// (0x0001e331) main_camera_pane_t

0x0fdd,	// (0x000100f3) cams_zoom_pane_cp_ParamLimits

0x0fdd,	// (0x000100f3) cams_zoom_pane_cp

0x1005,	// (0x0001011b) image_cif_pane_ParamLimits

0x1005,	// (0x0001011b) image_cif_pane

0x1040,	// (0x00010156) image_subqcif_pane

0x1048,	// (0x0001015e) main_video_pane_g1_ParamLimits

0x1048,	// (0x0001015e) main_video_pane_g1

0x106c,	// (0x00010182) main_video_pane_g2_ParamLimits

0x106c,	// (0x00010182) main_video_pane_g2

0x10a0,	// (0x000101b6) main_video_pane_g3_ParamLimits

0x10a0,	// (0x000101b6) main_video_pane_g3

0x10ce,	// (0x000101e4) main_video_pane_g4_ParamLimits

0x10ce,	// (0x000101e4) main_video_pane_g4

0x10fc,	// (0x00010212) main_video_pane_g5_ParamLimits

0x10fc,	// (0x00010212) main_video_pane_g5

0x9e40,	// (0x00018f56) main_video_pane_g6_ParamLimits

0x9e40,	// (0x00018f56) main_video_pane_g6

0x0006,

0xf220,	// (0x0001e336) main_video_pane_g_ParamLimits

0xf220,	// (0x0001e336) main_video_pane_g

0x1125,	// (0x0001023b) main_video_pane_t1_ParamLimits

0x1125,	// (0x0001023b) main_video_pane_t1

0x9e5a,	// (0x00018f70) cams_zoom_pane_g1

0x9e63,	// (0x00018f79) cams_zoom_pane_g2

0x9e6c,	// (0x00018f82) cams_zoom_pane_g3

0x9e75,	// (0x00018f8b) cams_zoom_pane_g4

0x0003,

0xf22f,	// (0x0001e345) cams_zoom_pane_g

0x1182,	// (0x00010298) grid_cams_pane

0x119c,	// (0x000102b2) linegrid_cams_pane

0x11af,	// (0x000102c5) cell_cams_pane_ParamLimits

0x11af,	// (0x000102c5) cell_cams_pane

0x9e7e,	// (0x00018f94) cams_burst_image_pane

0x9e86,	// (0x00018f9c) cell_cams_pane_g1

0x985b,	// (0x00018971) grid_highlight_pane_cp03

0x9c22,	// (0x00018d38) mp_bg_pane_g1

0x985b,	// (0x00018971) bg_list_pane_cp03

0xbcdc,	// (0x0001adf2) bg_mp_pane

0xbce4,	// (0x0001adfa) grid_mp_pane

0xbcec,	// (0x0001ae02) media_player_g1

0xbcf4,	// (0x0001ae0a) media_player_t1

0xbd02,	// (0x0001ae18) media_player_t2

0xbd10,	// (0x0001ae26) media_player_t3

0xbd1e,	// (0x0001ae34) media_player_t4

0xbd2c,	// (0x0001ae42) media_player_t5

0xbd3a,	// (0x0001ae50) media_player_t6

0xbd48,	// (0x0001ae5e) media_player_t7

0x0006,

0xf5de,	// (0x0001e6f4) media_player_t

0xbd56,	// (0x0001ae6c) wait_bar_pane_cp02

0xf5c3,	// (0x0001e6d9) main_usb_pane_t

0x33df,	// (0x000124f5) cell_mp_pane

0x9c22,	// (0x00018d38) cell_mp_pane_g1

0x985b,	// (0x00018971) grid_highlight_pane_cp06

0x9e8e,	// (0x00018fa4) grid_skin_colour_pane

0x9e96,	// (0x00018fac) list_highlight_pane_cp03

0x12df,	// (0x000103f5) skin_g1

0x9e9e,	// (0x00018fb4) skin_t1

0x9ead,	// (0x00018fc3) skin_t2

0x0001,

0xf264,	// (0x0001e37a) skin_t

0x12e7,	// (0x000103fd) cell_skin_colour_pane_ParamLimits

0x12e7,	// (0x000103fd) cell_skin_colour_pane

0x9ebb,	// (0x00018fd1) cell_skin_colour_pane_g1

0x1360,	// (0x00010476) call_video_g1_ParamLimits

0x1360,	// (0x00010476) call_video_g1

0x137c,	// (0x00010492) call_video_g2_ParamLimits

0x137c,	// (0x00010492) call_video_g2

0x0001,

0xf269,	// (0x0001e37f) call_video_g_ParamLimits

0xf269,	// (0x0001e37f) call_video_g

0x13ce,	// (0x000104e4) call_video_uplink_pane_cp1_ParamLimits

0x13ce,	// (0x000104e4) call_video_uplink_pane_cp1

0x9ecd,	// (0x00018fe3) call_video_uplink_pane_cp2

0x146d,	// (0x00010583) video_down_crop_pane_ParamLimits

0x146d,	// (0x00010583) video_down_crop_pane

0x1556,	// (0x0001066c) video_down_pane_ParamLimits

0x1556,	// (0x0001066c) video_down_pane

0x9ed5,	// (0x00018feb) video_down_subqcif_pane_ParamLimits

0x9ed5,	// (0x00018feb) video_down_subqcif_pane

0x9eed,	// (0x00019003) video_down_subqcif_pane_cp_ParamLimits

0x9eed,	// (0x00019003) video_down_subqcif_pane_cp

0x9f13,	// (0x00019029) im_reading_pane_ParamLimits

0x9f13,	// (0x00019029) im_reading_pane

0x1664,	// (0x0001077a) im_writing_pane_ParamLimits

0x1664,	// (0x0001077a) im_writing_pane

0x167a,	// (0x00010790) im_reading_pane_t1

0x9f2d,	// (0x00019043) list_im_pane

0x9f3e,	// (0x00019054) scroll_pane_cp07

0x16b4,	// (0x000107ca) im_writing_pane_t1_ParamLimits

0x16b4,	// (0x000107ca) im_writing_pane_t1

0x9f57,	// (0x0001906d) im_writing_pane_t2_ParamLimits

0x9f57,	// (0x0001906d) im_writing_pane_t2

0x0001,

0xf273,	// (0x0001e389) im_writing_pane_t_ParamLimits

0xf273,	// (0x0001e389) im_writing_pane_t

0x985b,	// (0x00018971) input_focus_pane_cp04

0x985b,	// (0x00018971) input_focus_pane_cp05

0x16c9,	// (0x000107df) list_im_single_pane_ParamLimits

0x16c9,	// (0x000107df) list_im_single_pane

0x16de,	// (0x000107f4) list_single_im_pane_t1

0x339f,	// (0x000124b5) blid_accuracy_pane

0x33a7,	// (0x000124bd) blid_compass_pane

0x33b1,	// (0x000124c7) main_location_t1

0x33c1,	// (0x000124d7) main_location_t2

0x33d1,	// (0x000124e7) main_location_t3

0x0002,

0xf5ed,	// (0x0001e703) main_location_t

0x985b,	// (0x00018971) aid_levels_location

0x9c22,	// (0x00018d38) blid_accuracy_pane_g1

0x9c22,	// (0x00018d38) blid_accuracy_pane_g2

0x0001,

0xf2d5,	// (0x0001e3eb) blid_accuracy_pane_g

0x9f9f,	// (0x000190b5) wml_content_pane

0x9fdd,	// (0x000190f3) wml_button_pane_ParamLimits

0x9fdd,	// (0x000190f3) wml_button_pane

0x16ed,	// (0x00010803) wml_list_single_large_pane_ParamLimits

0x16ed,	// (0x00010803) wml_list_single_large_pane

0x1702,	// (0x00010818) wml_list_single_medium_pane_ParamLimits

0x1702,	// (0x00010818) wml_list_single_medium_pane

0x1719,	// (0x0001082f) wml_list_single_small_pane_ParamLimits

0x1719,	// (0x0001082f) wml_list_single_small_pane

0x9ff1,	// (0x00019107) wml_selection_box_pane_ParamLimits

0x9ff1,	// (0x00019107) wml_selection_box_pane

0xa004,	// (0x0001911a) wml_list_single_pane_t1

0xa013,	// (0x00019129) wml_list_single_medium_pane_t1

0xa022,	// (0x00019138) wml_list_single_large_pane_t1

0xa031,	// (0x00019147) input_focus_pane_cp02_ParamLimits

0xa031,	// (0x00019147) input_focus_pane_cp02

0xa044,	// (0x0001915a) wml_selection_box_pane_g1

0xa04d,	// (0x00019163) wml_selection_box_pane_t1_ParamLimits

0xa04d,	// (0x00019163) wml_selection_box_pane_t1

0x9ab6,	// (0x00018bcc) bg_wml_button_pane_ParamLimits

0x9ab6,	// (0x00018bcc) bg_wml_button_pane

0xa065,	// (0x0001917b) wml_button_pane_g1

0xa06d,	// (0x00019183) wml_button_pane_t1

0xa065,	// (0x0001917b) wml_button_bg_pane_g1

0xa07d,	// (0x00019193) wml_button_bg_pane_g2

0xa085,	// (0x0001919b) wml_button_bg_pane_g3

0xa08d,	// (0x000191a3) wml_button_bg_pane_g4

0xa095,	// (0x000191ab) wml_button_bg_pane_g5

0xa09d,	// (0x000191b3) wml_button_bg_pane_g6

0xa0a5,	// (0x000191bb) wml_button_bg_pane_g7

0xa0ad,	// (0x000191c3) wml_button_bg_pane_g8

0xa0b5,	// (0x000191cb) wml_button_bg_pane_g9

0x0008,

0xf278,	// (0x0001e38e) wml_button_bg_pane_g

0x1732,	// (0x00010848) bg_list_pane_cp02

0xa0bd,	// (0x000191d3) mce_header_pane_ParamLimits

0xa0bd,	// (0x000191d3) mce_header_pane

0xa0d3,	// (0x000191e9) mce_icon_pane

0xa0d3,	// (0x000191e9) mce_image_pane

0xa0dc,	// (0x000191f2) mce_text_pane_ParamLimits

0xa0dc,	// (0x000191f2) mce_text_pane

0x173a,	// (0x00010850) scroll_pane_cp03

0x9fd5,	// (0x000190eb) scroll_pane_cp04

0xa0ef,	// (0x00019205) scroll_pane_cp05_ParamLimits

0xa0ef,	// (0x00019205) scroll_pane_cp05

0x1744,	// (0x0001085a) mce_header_field_pane_ParamLimits

0x1744,	// (0x0001085a) mce_header_field_pane

0x175b,	// (0x00010871) mce_header_field_pane_2_ParamLimits

0x175b,	// (0x00010871) mce_header_field_pane_2

0x1771,	// (0x00010887) mce_header_field_pane_3

0x1779,	// (0x0001088f) list_single_mce_message_pane_ParamLimits

0x1779,	// (0x0001088f) list_single_mce_message_pane

0x178f,	// (0x000108a5) list_single_mce_smart_pane_ParamLimits

0x178f,	// (0x000108a5) list_single_mce_smart_pane

0xa0fb,	// (0x00019211) input_focus_pane_cp03

0xa104,	// (0x0001921a) list_header_data_pane

0x17b0,	// (0x000108c6) mce_header_field_pane_t1

0x17c0,	// (0x000108d6) list_single_mce_header_pane_ParamLimits

0x17c0,	// (0x000108d6) list_single_mce_header_pane

0xa10c,	// (0x00019222) list_single_mce_header_pane_t1

0xa11b,	// (0x00019231) list_single_mce_message_pane_g1

0xa123,	// (0x00019239) list_single_mce_message_pane_t1

0x17fa,	// (0x00010910) bg_cale_heading_pane_cp01_ParamLimits

0x17fa,	// (0x00010910) bg_cale_heading_pane_cp01

0xa131,	// (0x00019247) bg_cale_pane_cp02_ParamLimits

0xa131,	// (0x00019247) bg_cale_pane_cp02

0x1829,	// (0x0001093f) cale_month_corner_pane

0x1848,	// (0x0001095e) cale_month_day_heading_pane_ParamLimits

0x1848,	// (0x0001095e) cale_month_day_heading_pane

0x188f,	// (0x000109a5) cale_month_pane_g1_ParamLimits

0x188f,	// (0x000109a5) cale_month_pane_g1

0x18b3,	// (0x000109c9) cale_month_pane_g2_ParamLimits

0x18b3,	// (0x000109c9) cale_month_pane_g2

0x18e3,	// (0x000109f9) cale_month_pane_g3_ParamLimits

0x18e3,	// (0x000109f9) cale_month_pane_g3

0x191f,	// (0x00010a35) cale_month_pane_g4_ParamLimits

0x191f,	// (0x00010a35) cale_month_pane_g4

0x195b,	// (0x00010a71) cale_month_pane_g5_ParamLimits

0x195b,	// (0x00010a71) cale_month_pane_g5

0x19a3,	// (0x00010ab9) cale_month_pane_g6_ParamLimits

0x19a3,	// (0x00010ab9) cale_month_pane_g6

0x19ef,	// (0x00010b05) cale_month_pane_g7_ParamLimits

0x19ef,	// (0x00010b05) cale_month_pane_g7

0x1a3f,	// (0x00010b55) cale_month_pane_g8_ParamLimits

0x1a3f,	// (0x00010b55) cale_month_pane_g8

0x1a93,	// (0x00010ba9) cale_month_pane_g9_ParamLimits

0x1a93,	// (0x00010ba9) cale_month_pane_g9

0x1ae5,	// (0x00010bfb) cale_month_pane_g10_ParamLimits

0x1ae5,	// (0x00010bfb) cale_month_pane_g10

0x1b37,	// (0x00010c4d) cale_month_pane_g11_ParamLimits

0x1b37,	// (0x00010c4d) cale_month_pane_g11

0x1b89,	// (0x00010c9f) cale_month_pane_g12_ParamLimits

0x1b89,	// (0x00010c9f) cale_month_pane_g12

0x1bdb,	// (0x00010cf1) cale_month_pane_g13_ParamLimits

0x1bdb,	// (0x00010cf1) cale_month_pane_g13

0x000c,

0xf28b,	// (0x0001e3a1) cale_month_pane_g_ParamLimits

0xf28b,	// (0x0001e3a1) cale_month_pane_g

0x1c2d,	// (0x00010d43) cale_month_week_pane

0x1c51,	// (0x00010d67) grid_cale_month_pane_ParamLimits

0x1c51,	// (0x00010d67) grid_cale_month_pane

0x1c8f,	// (0x00010da5) cale_month_day_heading_pane_t1

0x1d15,	// (0x00010e2b) cale_month_day_heading_pane_t2

0x1da6,	// (0x00010ebc) cale_month_day_heading_pane_t3

0x1e37,	// (0x00010f4d) cale_month_day_heading_pane_t4

0x1ed0,	// (0x00010fe6) cale_month_day_heading_pane_t5

0x1f71,	// (0x00011087) cale_month_day_heading_pane_t6

0x2012,	// (0x00011128) cale_month_day_heading_pane_t7

0x0006,

0xf2a6,	// (0x0001e3bc) cale_month_day_heading_pane_t

0x9dc7,	// (0x00018edd) bg_cale_side_pane_cp01

0x20bb,	// (0x000111d1) cale_month_week_pane_t1

0x20d4,	// (0x000111ea) cale_month_week_pane_t2

0x20ed,	// (0x00011203) cale_month_week_pane_t3

0x2106,	// (0x0001121c) cale_month_week_pane_t4

0x211f,	// (0x00011235) cale_month_week_pane_t5

0x2138,	// (0x0001124e) cale_month_week_pane_t6

0x0005,

0xf2b5,	// (0x0001e3cb) cale_month_week_pane_t

0x2151,	// (0x00011267) cell_cale_month_pane_ParamLimits

0x2151,	// (0x00011267) cell_cale_month_pane

0xa170,	// (0x00019286) cell_cale_month_pane_g1

0x22a9,	// (0x000113bf) cell_cale_month_pane_t1_ParamLimits

0x22a9,	// (0x000113bf) cell_cale_month_pane_t1

0x9dd5,	// (0x00018eeb) grid_highlight_pane_cp08

0x9c22,	// (0x00018d38) main_smil_g1

0x22d5,	// (0x000113eb) smil_status_pane

0xa196,	// (0x000192ac) smil_text_pane

0xbbbc,	// (0x0001acd2) bg_popup_call3_rect_pane_g8

0xbbc4,	// (0x0001acda) bg_popup_call3_rect_pane_g9

0x0008,

0xf56e,	// (0x0001e684) bg_popup_call3_rect_pane_g

0xbe9f,	// (0x0001afb5) smil_status_volume_pane_g1

0xa1a0,	// (0x000192b6) smil_status_pane_t1

0xbed2,	// (0x0001afe8) volume_smil_pane

0xa1b7,	// (0x000192cd) list_smil_text_pane

0x22ea,	// (0x00011400) scroll_pane_cp011

0x22f5,	// (0x0001140b) smil_text_list_pane_t1_ParamLimits

0x22f5,	// (0x0001140b) smil_text_list_pane_t1

0xa1c1,	// (0x000192d7) aid_volume_smil_ParamLimits

0xa1c1,	// (0x000192d7) aid_volume_smil

0x9c22,	// (0x00018d38) smil_volume_pane_g1

0x9c22,	// (0x00018d38) smil_volume_pane_g2

0x0001,

0xf2d5,	// (0x0001e3eb) smil_volume_pane_g

0x0838,	// (0x0000f94e) listscroll_cale_day_pane

0xa1e3,	// (0x000192f9) bg_cale_pane

0xa1fb,	// (0x00019311) list_cale_pane

0xa21e,	// (0x00019334) scroll_pane_cp09

0xa22f,	// (0x00019345) cale_bg_pane_g1

0xa237,	// (0x0001934d) cale_bg_pane_g2

0xa23f,	// (0x00019355) cale_bg_pane_g3

0xa247,	// (0x0001935d) cale_bg_pane_g4

0xa24f,	// (0x00019365) cale_bg_pane_g5

0xa257,	// (0x0001936d) cale_bg_pane_g6

0xa25f,	// (0x00019375) cale_bg_pane_g7

0xa267,	// (0x0001937d) cale_bg_pane_g8

0xa26f,	// (0x00019385) cale_bg_pane_g9

0x0008,

0xf2da,	// (0x0001e3f0) cale_bg_pane_g

0x2341,	// (0x00011457) list_cale_time_pane_ParamLimits

0x2341,	// (0x00011457) list_cale_time_pane

0xa277,	// (0x0001938d) list_cale_time_pane_g1_ParamLimits

0xa277,	// (0x0001938d) list_cale_time_pane_g1

0xa283,	// (0x00019399) list_cale_time_pane_g2_ParamLimits

0xa283,	// (0x00019399) list_cale_time_pane_g2

0x2357,	// (0x0001146d) list_cale_time_pane_g3_ParamLimits

0x2357,	// (0x0001146d) list_cale_time_pane_g3

0x2365,	// (0x0001147b) list_cale_time_pane_g4_ParamLimits

0x2365,	// (0x0001147b) list_cale_time_pane_g4

0x2373,	// (0x00011489) list_cale_time_pane_g5_ParamLimits

0x2373,	// (0x00011489) list_cale_time_pane_g5

0x0005,

0xf2ed,	// (0x0001e403) list_cale_time_pane_g_ParamLimits

0xf2ed,	// (0x0001e403) list_cale_time_pane_g

0xa29d,	// (0x000193b3) list_cale_time_pane_t1_ParamLimits

0xa29d,	// (0x000193b3) list_cale_time_pane_t1

0xa2c5,	// (0x000193db) list_cale_time_pane_t2_ParamLimits

0xa2c5,	// (0x000193db) list_cale_time_pane_t2

0x26f5,	// (0x0001180b) aid_blid_cardinal_pane

0x2733,	// (0x00011849) compass_pane_t4

0xa2ed,	// (0x00019403) list_cale_time_pane_t4_ParamLimits

0xa2ed,	// (0x00019403) list_cale_time_pane_t4

0x2741,	// (0x00011857) compass_pane_t5

0x274f,	// (0x00011865) compass_pane_t6

0x275d,	// (0x00011873) compass_pane_t7

0xa7e0,	// (0x000198f6) navi_pane_cc_t1

0xa9cf,	// (0x00019ae5) aid_phob_thumbnail_center_pane

0x2db5,	// (0x00011ecb) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2fa,	// (0x0001e410) list_cale_time_pane_t_ParamLimits

0xf2fa,	// (0x0001e410) list_cale_time_pane_t

0x94b2,	// (0x000185c8) bg_popup_window_pane_cp02_ParamLimits

0x94b2,	// (0x000185c8) bg_popup_window_pane_cp02

0xa315,	// (0x0001942b) heading_pane_cp01_ParamLimits

0xa315,	// (0x0001942b) heading_pane_cp01

0xa321,	// (0x00019437) loc_req_pane_ParamLimits

0xa321,	// (0x00019437) loc_req_pane

0xa331,	// (0x00019447) loc_type_pane_ParamLimits

0xa331,	// (0x00019447) loc_type_pane

0xa343,	// (0x00019459) loc_type_pane_t1_ParamLimits

0xa343,	// (0x00019459) loc_type_pane_t1

0xa355,	// (0x0001946b) loc_type_pane_t2_ParamLimits

0xa355,	// (0x0001946b) loc_type_pane_t2

0xa367,	// (0x0001947d) loc_type_pane_t3_ParamLimits

0xa367,	// (0x0001947d) loc_type_pane_t3

0x0002,

0xf301,	// (0x0001e417) loc_type_pane_t_ParamLimits

0xf301,	// (0x0001e417) loc_type_pane_t

0xa379,	// (0x0001948f) list_loc_req_pane

0xa383,	// (0x00019499) scroll_pane_cp012

0x2381,	// (0x00011497) list_single_loc_request_popup_menu_pane_ParamLimits

0x2381,	// (0x00011497) list_single_loc_request_popup_menu_pane

0xa38e,	// (0x000194a4) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xa38e,	// (0x000194a4) list_single_loc_request_popup_menu_pane_g1

0xa39a,	// (0x000194b0) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xa39a,	// (0x000194b0) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf308,	// (0x0001e41e) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf308,	// (0x0001e41e) list_single_loc_request_popup_menu_pane_g

0xa3a6,	// (0x000194bc) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xa3a6,	// (0x000194bc) list_single_loc_request_popup_menu_pane_t1

0x9ab6,	// (0x00018bcc) bg_popup_window_pane_cp03_ParamLimits

0x9ab6,	// (0x00018bcc) bg_popup_window_pane_cp03

0xa3bc,	// (0x000194d2) heading_loc_req_pane_ParamLimits

0xa3bc,	// (0x000194d2) heading_loc_req_pane

0x238e,	// (0x000114a4) popup_dyc_status_message_window_g1_ParamLimits

0x238e,	// (0x000114a4) popup_dyc_status_message_window_g1

0x23a2,	// (0x000114b8) popup_dyc_status_message_window_t1_ParamLimits

0x23a2,	// (0x000114b8) popup_dyc_status_message_window_t1

0x23b7,	// (0x000114cd) popup_dyc_status_message_window_t2_ParamLimits

0x23b7,	// (0x000114cd) popup_dyc_status_message_window_t2

0x23cc,	// (0x000114e2) popup_dyc_status_message_window_t3_ParamLimits

0x23cc,	// (0x000114e2) popup_dyc_status_message_window_t3

0x0002,

0xf30d,	// (0x0001e423) popup_dyc_status_message_window_t_ParamLimits

0xf30d,	// (0x0001e423) popup_dyc_status_message_window_t

0x985b,	// (0x00018971) bg_heading_pane_cp01

0xa3c8,	// (0x000194de) heading_loc_req_pane_g1

0xa3d0,	// (0x000194e6) heading_loc_req_pane_g2

0xa3d8,	// (0x000194ee) heading_loc_req_pane_g3

0x0002,

0xf314,	// (0x0001e42a) heading_loc_req_pane_g

0xa3e0,	// (0x000194f6) heading_loc_req_pane_t1

0xa3ef,	// (0x00019505) bg_popup_sub_pane_cp01_ParamLimits

0xa3ef,	// (0x00019505) bg_popup_sub_pane_cp01

0xa3fd,	// (0x00019513) popup_cale_events_window_g1_ParamLimits

0xa3fd,	// (0x00019513) popup_cale_events_window_g1

0xa41d,	// (0x00019533) popup_cale_events_window_g2_ParamLimits

0xa41d,	// (0x00019533) popup_cale_events_window_g2

0x0001,

0xf348,	// (0x0001e45e) popup_cale_events_window_g_ParamLimits

0xf348,	// (0x0001e45e) popup_cale_events_window_g

0xa43d,	// (0x00019553) popup_cale_events_window_t1_ParamLimits

0xa43d,	// (0x00019553) popup_cale_events_window_t1

0xa44f,	// (0x00019565) popup_cale_events_window_t2_ParamLimits

0xa44f,	// (0x00019565) popup_cale_events_window_t2

0xa48d,	// (0x000195a3) popup_cale_events_window_t3_ParamLimits

0xa48d,	// (0x000195a3) popup_cale_events_window_t3

0xa4c7,	// (0x000195dd) popup_cale_events_window_t4_ParamLimits

0xa4c7,	// (0x000195dd) popup_cale_events_window_t4

0x0003,

0xf34d,	// (0x0001e463) popup_cale_events_window_t_ParamLimits

0xf34d,	// (0x0001e463) popup_cale_events_window_t

0x24c5,	// (0x000115db) call_type_pane

0x24d5,	// (0x000115eb) popup_call_status_window_g1

0x24e9,	// (0x000115ff) popup_call_status_window_g2

0x24fd,	// (0x00011613) popup_call_status_window_g3

0x0002,

0xf356,	// (0x0001e46c) popup_call_status_window_g

0xa4fd,	// (0x00019613) call_type_pane_g1

0xa506,	// (0x0001961c) call_type_pane_g2

0x0001,

0xf35d,	// (0x0001e473) call_type_pane_g

0x985b,	// (0x00018971) bg_popup_sub_pane_cp02

0xa50f,	// (0x00019625) listscroll_popup_wml_pane

0xa517,	// (0x0001962d) list_wml_pane

0xa521,	// (0x00019637) scroll_pane_cp013

0xa52c,	// (0x00019642) list_single_graphic_popup_wml_pane_ParamLimits

0xa52c,	// (0x00019642) list_single_graphic_popup_wml_pane

0x9c22,	// (0x00018d38) list_single_graphic_popup_wml_pane_g1

0xa540,	// (0x00019656) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf362,	// (0x0001e478) list_single_graphic_popup_wml_pane_g

0xa548,	// (0x0001965e) list_single_graphic_popup_wml_pane_t1

0xa55e,	// (0x00019674) aid_call_pane

0x9aae,	// (0x00018bc4) popup_clock_analogue_window_g1

0x9aae,	// (0x00018bc4) popup_clock_analogue_window_g2

0xa566,	// (0x0001967c) popup_clock_analogue_window_g3

0xa566,	// (0x0001967c) popup_clock_analogue_window_g4

0x9c22,	// (0x00018d38) popup_clock_analogue_window_g5

0x0004,

0xf367,	// (0x0001e47d) popup_clock_analogue_window_g

0xa56e,	// (0x00019684) popup_clock_analogue_window_t1

0xa57c,	// (0x00019692) clock_digital_number_pane_ParamLimits

0xa57c,	// (0x00019692) clock_digital_number_pane

0xa588,	// (0x0001969e) clock_digital_number_pane_cp02_ParamLimits

0xa588,	// (0x0001969e) clock_digital_number_pane_cp02

0xa594,	// (0x000196aa) clock_digital_number_pane_cp03_ParamLimits

0xa594,	// (0x000196aa) clock_digital_number_pane_cp03

0xa5a0,	// (0x000196b6) clock_digital_number_pane_cp04_ParamLimits

0xa5a0,	// (0x000196b6) clock_digital_number_pane_cp04

0xa5ac,	// (0x000196c2) clock_digital_separator_pane_ParamLimits

0xa5ac,	// (0x000196c2) clock_digital_separator_pane

0xa5b8,	// (0x000196ce) popup_clock_digital_window_t1

0x9c22,	// (0x00018d38) clock_digital_number_pane_g1

0x9c22,	// (0x00018d38) clock_digital_number_pane_g2

0x0001,

0xf2d5,	// (0x0001e3eb) clock_digital_number_pane_g

0x9c22,	// (0x00018d38) clock_digital_separator_pane_g1

0x9c22,	// (0x00018d38) clock_digital_separator_pane_g2

0x0001,

0xf2d5,	// (0x0001e3eb) clock_digital_separator_pane_g

0x985b,	// (0x00018971) bg_popup_window_pane_cp04

0xa5d5,	// (0x000196eb) heading_pane_cp03

0xa5dd,	// (0x000196f3) listscroll_popup_gms_pane

0xa5e5,	// (0x000196fb) grid_large_graphic_popup_pane

0xa5ef,	// (0x00019705) listscroll_popup_gms_pane_g1

0xa5f7,	// (0x0001970d) listscroll_popup_gms_pane_g2

0x0001,

0xf372,	// (0x0001e488) listscroll_popup_gms_pane_g

0x9fd5,	// (0x000190eb) scroll_pane_cp014

0x250c,	// (0x00011622) cell_large_graphic_popup_pane_ParamLimits

0x250c,	// (0x00011622) cell_large_graphic_popup_pane

0x2524,	// (0x0001163a) cell_large_graphic_popup_pane_g1_ParamLimits

0x2524,	// (0x0001163a) cell_large_graphic_popup_pane_g1

0xa5ff,	// (0x00019715) cell_large_graphic_popup_pane_g2_ParamLimits

0xa5ff,	// (0x00019715) cell_large_graphic_popup_pane_g2

0xa60b,	// (0x00019721) cell_large_graphic_popup_pane_g3_ParamLimits

0xa60b,	// (0x00019721) cell_large_graphic_popup_pane_g3

0xa618,	// (0x0001972e) cell_large_graphic_popup_pane_g4_ParamLimits

0xa618,	// (0x0001972e) cell_large_graphic_popup_pane_g4

0x0003,

0xf377,	// (0x0001e48d) cell_large_graphic_popup_pane_g_ParamLimits

0xf377,	// (0x0001e48d) cell_large_graphic_popup_pane_g

0xa628,	// (0x0001973e) grid_highlight_pane_cp010

0x9c22,	// (0x00018d38) bg_popup_call_pane_g1

0xa632,	// (0x00019748) list_single_graphic_popup_conf_pane_ParamLimits

0xa632,	// (0x00019748) list_single_graphic_popup_conf_pane

0xa645,	// (0x0001975b) list_highlight_pane_cp01

0xa64e,	// (0x00019764) list_single_graphic_popup_conf_pane_g1

0xa656,	// (0x0001976c) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf380,	// (0x0001e496) list_single_graphic_popup_conf_pane_g

0xa65e,	// (0x00019774) list_single_graphic_popup_conf_pane_t1

0xa66c,	// (0x00019782) linegrid_cams_pane_g1

0x2530,	// (0x00011646) linegrid_cams_pane_g2

0x9e08,	// (0x00018f1e) linegrid_cams_pane_g3

0xa675,	// (0x0001978b) linegrid_cams_pane_g4

0x2539,	// (0x0001164f) linegrid_cams_pane_g5

0x2542,	// (0x00011658) linegrid_cams_pane_g6

0x9e11,	// (0x00018f27) linegrid_cams_pane_g7

0x0006,

0xf385,	// (0x0001e49b) linegrid_cams_pane_g

0xa67e,	// (0x00019794) popup_clock_analogue_window

0xa67e,	// (0x00019794) popup_clock_digital_window

0x985b,	// (0x00018971) popup_phob_thumbnail_window

0x9c22,	// (0x00018d38) call_video_uplink_pane_g1

0xa687,	// (0x0001979d) call_video_uplink_pane_g2

0x0001,

0xf394,	// (0x0001e4aa) call_video_uplink_pane_g

0xa68f,	// (0x000197a5) video_uplink_pane

0xa697,	// (0x000197ad) mce_image_pane_g1

0x254d,	// (0x00011663) mce_image_pane_g2

0x2555,	// (0x0001166b) mce_image_pane_g3

0x255d,	// (0x00011673) mce_image_pane_g4

0x2567,	// (0x0001167d) mce_image_pane_g5

0x0004,

0xf399,	// (0x0001e4af) mce_image_pane_g

0xa6a1,	// (0x000197b7) control_top_pane_stacon_cp01_ParamLimits

0xa6a1,	// (0x000197b7) control_top_pane_stacon_cp01

0xa6b5,	// (0x000197cb) uni_indicator_pane_stacon_cp01_ParamLimits

0xa6b5,	// (0x000197cb) uni_indicator_pane_stacon_cp01

0xa6c6,	// (0x000197dc) bg_popup_sub_pane_cp03

0x256f,	// (0x00011685) chi_dic_find_pane

0x2577,	// (0x0001168d) listscroll_chi_dic_pane

0x2580,	// (0x00011696) main_pane_chidic_g1

0x2593,	// (0x000116a9) chi_dic_find_pane_t1

0xa6d0,	// (0x000197e6) find_chidic_pane

0xa6d9,	// (0x000197ef) chi_dic_list_pane_ParamLimits

0xa6d9,	// (0x000197ef) chi_dic_list_pane

0xa6ea,	// (0x00019800) scroll_pane_cp020

0x25a1,	// (0x000116b7) find_chidic_pane_t1

0x985b,	// (0x00018971) input_focus_pane_cp06

0x25b0,	// (0x000116c6) list_chi_dic_pane_ParamLimits

0x25b0,	// (0x000116c6) list_chi_dic_pane

0x25c2,	// (0x000116d8) list_chi_dic_pane_t1_ParamLimits

0x25c2,	// (0x000116d8) list_chi_dic_pane_t1

0x985b,	// (0x00018971) list_highlight_pane_cp020

0xa6f2,	// (0x00019808) bg_cale_heading_pane_g1

0x25d5,	// (0x000116eb) bg_cale_heading_pane_g2

0x25dd,	// (0x000116f3) bg_cale_heading_pane_g3

0x25e5,	// (0x000116fb) bg_cale_heading_pane_g4

0x25ef,	// (0x00011705) bg_cale_heading_pane_g5

0x25f9,	// (0x0001170f) bg_cale_heading_pane_g6

0x2601,	// (0x00011717) bg_cale_heading_pane_g7

0x2609,	// (0x0001171f) bg_cale_heading_pane_g8

0x2613,	// (0x00011729) bg_cale_heading_pane_g9

0x0008,

0xf3a4,	// (0x0001e4ba) bg_cale_heading_pane_g

0xa6f2,	// (0x00019808) bg_cale_side_pane_g1

0x261d,	// (0x00011733) bg_cale_side_pane_g2

0x2625,	// (0x0001173b) bg_cale_side_pane_g3

0x262d,	// (0x00011743) bg_cale_side_pane_g4

0x2635,	// (0x0001174b) bg_cale_side_pane_g5

0x263d,	// (0x00011753) bg_cale_side_pane_g6

0x2645,	// (0x0001175b) bg_cale_side_pane_g7

0x264d,	// (0x00011763) bg_cale_side_pane_g8

0x2655,	// (0x0001176b) bg_cale_side_pane_g9

0x0008,

0xf3b7,	// (0x0001e4cd) bg_cale_side_pane_g

0x265d,	// (0x00011773) popup_call_status_window_ParamLimits

0x265d,	// (0x00011773) popup_call_status_window

0xa6fa,	// (0x00019810) stacon_top_pane

0xa702,	// (0x00019818) status_pane_ParamLimits

0xa702,	// (0x00019818) status_pane

0xa717,	// (0x0001982d) status_small_pane

0xa71f,	// (0x00019835) control_pane

0x985b,	// (0x00018971) stacon_bottom_pane

0xa727,	// (0x0001983d) list_single_mce_smart_pane_t1_ParamLimits

0xa727,	// (0x0001983d) list_single_mce_smart_pane_t1

0xa73a,	// (0x00019850) list_single_mce_smart_pane_t2_ParamLimits

0xa73a,	// (0x00019850) list_single_mce_smart_pane_t2

0x0001,

0xf3ca,	// (0x0001e4e0) list_single_mce_smart_pane_t_ParamLimits

0xf3ca,	// (0x0001e4e0) list_single_mce_smart_pane_t

0x26a4,	// (0x000117ba) compass_pane

0x26ad,	// (0x000117c3) main_location2_pane_t1

0x26bf,	// (0x000117d5) main_location2_pane_t2

0x26d1,	// (0x000117e7) main_location2_pane_t3

0x0003,

0xf3cf,	// (0x0001e4e5) main_location2_pane_t

0xa759,	// (0x0001986f) compass_pane_g1_ParamLimits

0xa759,	// (0x0001986f) compass_pane_g1

0x2715,	// (0x0001182b) compass_pane_t1

0x2724,	// (0x0001183a) compass_pane_t2

0x0005,

0xf3d8,	// (0x0001e4ee) compass_pane_t

0x276b,	// (0x00011881) text_secondary_cp61

0xa7d7,	// (0x000198ed) navi_pane_cams_g5

0xa853,	// (0x00019969) navi_pane_im_t1

0xa861,	// (0x00019977) navi_pane_mp_g1_ParamLimits

0xa861,	// (0x00019977) navi_pane_mp_g1

0xa875,	// (0x0001998b) navi_pane_mp_g2_ParamLimits

0xa875,	// (0x0001998b) navi_pane_mp_g2

0xa881,	// (0x00019997) navi_pane_mp_g3_ParamLimits

0xa881,	// (0x00019997) navi_pane_mp_g3

0x0002,

0xf3ec,	// (0x0001e502) navi_pane_mp_g_ParamLimits

0xf3ec,	// (0x0001e502) navi_pane_mp_g

0xa88d,	// (0x000199a3) navi_pane_mp_t1

0xa89b,	// (0x000199b1) navi_pane_mp_t2

0x0002,

0xf3f3,	// (0x0001e509) navi_pane_mp_t

0xa906,	// (0x00019a1c) navi_pane_vt_g1

0xa88d,	// (0x000199a3) navi_pane_vt_t1

0xa90e,	// (0x00019a24) navi_slider_pane

0x9e22,	// (0x00018f38) zooming_pane

0xa91e,	// (0x00019a34) navi_slider_pane_g1

0xa927,	// (0x00019a3d) navi_slider_pane_g2

0x0006,

0xf3fa,	// (0x0001e510) navi_slider_pane_g

0xa954,	// (0x00019a6a) aid_levels_zoom

0xa95c,	// (0x00019a72) zooming_pane_g1

0xa964,	// (0x00019a7a) zooming_pane_g2

0xa964,	// (0x00019a7a) zooming_pane_g3

0x0002,

0xf409,	// (0x0001e51f) zooming_pane_g

0xa96c,	// (0x00019a82) level_10_zoom

0xa975,	// (0x00019a8b) level_11_zoom

0xa97e,	// (0x00019a94) level_1_zoom

0xa987,	// (0x00019a9d) level_2_zoom

0xa990,	// (0x00019aa6) level_3_zoom

0xa999,	// (0x00019aaf) level_4_zoom

0xa9a2,	// (0x00019ab8) level_5_zoom

0xa9ab,	// (0x00019ac1) level_6_zoom

0xa9b4,	// (0x00019aca) level_7_zoom

0xa9bd,	// (0x00019ad3) level_8_zoom

0xa9c6,	// (0x00019adc) level_9_zoom

0xa9d7,	// (0x00019aed) popup_phob_thumbnail_window_g1

0xa9df,	// (0x00019af5) popup_phob_thumbnail_window_g2

0x0001,

0xf410,	// (0x0001e526) popup_phob_thumbnail_window_g

0xbd5e,	// (0x0001ae74) level_1_location

0xbd66,	// (0x0001ae7c) level_2_location

0xbd6e,	// (0x0001ae84) level_3_location

0xbd76,	// (0x0001ae8c) level_4_location

0x9e22,	// (0x00018f38) level_5_location

0x27bc,	// (0x000118d2) mce_icon_pane_g1

0x27c6,	// (0x000118dc) mce_icon_pane_g2

0x0001,

0xf415,	// (0x0001e52b) mce_icon_pane_g

0x27ce,	// (0x000118e4) main_mup_pane_g1_ParamLimits

0x27ce,	// (0x000118e4) main_mup_pane_g1

0x27e4,	// (0x000118fa) main_mup_pane_g2_ParamLimits

0x27e4,	// (0x000118fa) main_mup_pane_g2

0x27f6,	// (0x0001190c) main_mup_pane_g3_ParamLimits

0x27f6,	// (0x0001190c) main_mup_pane_g3

0x2808,	// (0x0001191e) main_mup_pane_g4_ParamLimits

0x2808,	// (0x0001191e) main_mup_pane_g4

0x2820,	// (0x00011936) main_mup_pane_g5_ParamLimits

0x2820,	// (0x00011936) main_mup_pane_g5

0x283c,	// (0x00011952) main_mup_pane_g6_ParamLimits

0x283c,	// (0x00011952) main_mup_pane_g6

0x2854,	// (0x0001196a) main_mup_pane_g7_ParamLimits

0x2854,	// (0x0001196a) main_mup_pane_g7

0x286c,	// (0x00011982) main_mup_pane_g8_ParamLimits

0x286c,	// (0x00011982) main_mup_pane_g8

0x2884,	// (0x0001199a) main_mup_pane_g9_ParamLimits

0x2884,	// (0x0001199a) main_mup_pane_g9

0x289e,	// (0x000119b4) main_mup_pane_g10_ParamLimits

0x289e,	// (0x000119b4) main_mup_pane_g10

0x28b8,	// (0x000119ce) main_mup_pane_g11_ParamLimits

0x28b8,	// (0x000119ce) main_mup_pane_g11

0x28cc,	// (0x000119e2) main_mup_pane_g12_ParamLimits

0x28cc,	// (0x000119e2) main_mup_pane_g12

0x28e2,	// (0x000119f8) main_mup_pane_g13_ParamLimits

0x28e2,	// (0x000119f8) main_mup_pane_g13

0x000c,

0xf41a,	// (0x0001e530) main_mup_pane_g_ParamLimits

0xf41a,	// (0x0001e530) main_mup_pane_g

0x28f6,	// (0x00011a0c) main_mup_pane_t1_ParamLimits

0x28f6,	// (0x00011a0c) main_mup_pane_t1

0x2910,	// (0x00011a26) main_mup_pane_t2_ParamLimits

0x2910,	// (0x00011a26) main_mup_pane_t2

0x2928,	// (0x00011a3e) main_mup_pane_t3_ParamLimits

0x2928,	// (0x00011a3e) main_mup_pane_t3

0x2940,	// (0x00011a56) main_mup_pane_t4_ParamLimits

0x2940,	// (0x00011a56) main_mup_pane_t4

0x295e,	// (0x00011a74) main_mup_pane_t5_ParamLimits

0x295e,	// (0x00011a74) main_mup_pane_t5

0x2973,	// (0x00011a89) main_mup_pane_t6_ParamLimits

0x2973,	// (0x00011a89) main_mup_pane_t6

0x0005,

0xf435,	// (0x0001e54b) main_mup_pane_t_ParamLimits

0xf435,	// (0x0001e54b) main_mup_pane_t

0x2985,	// (0x00011a9b) mup_progress_pane_ParamLimits

0x2985,	// (0x00011a9b) mup_progress_pane

0x2991,	// (0x00011aa7) mup_visualizer_pane_ParamLimits

0x2991,	// (0x00011aa7) mup_visualizer_pane

0x29c5,	// (0x00011adb) mup_volume_pane_ParamLimits

0x29c5,	// (0x00011adb) mup_volume_pane

0xa9e7,	// (0x00019afd) mup_visualizer_pane_g1_ParamLimits

0xa9e7,	// (0x00019afd) mup_visualizer_pane_g1

0xa9e7,	// (0x00019afd) mup_visualizer_pane_g2_ParamLimits

0xa9e7,	// (0x00019afd) mup_visualizer_pane_g2

0xa759,	// (0x0001986f) mup_visualizer_pane_g3_ParamLimits

0xa759,	// (0x0001986f) mup_visualizer_pane_g3

0x0002,

0xf442,	// (0x0001e558) mup_visualizer_pane_g_ParamLimits

0xf442,	// (0x0001e558) mup_visualizer_pane_g

0x9c22,	// (0x00018d38) mup_volume_pane_g1

0xa9fd,	// (0x00019b13) mup_volume_pane_g2

0x0001,

0xf449,	// (0x0001e55f) mup_volume_pane_g

0x9c22,	// (0x00018d38) mup_progress_pane_g1

0xaa06,	// (0x00019b1c) mup_progress_pane_g2

0xaa0f,	// (0x00019b25) mup_progress_pane_g3

0x0002,

0xf44e,	// (0x0001e564) mup_progress_pane_g

0x985b,	// (0x00018971) bg_popup_window_pane_cp05

0xaa18,	// (0x00019b2e) heading_pane_cp02_ParamLimits

0xaa18,	// (0x00019b2e) heading_pane_cp02

0xaa32,	// (0x00019b48) list_popup_blid_pane

0xaa3a,	// (0x00019b50) list_blid_sat_info_pane_ParamLimits

0xaa3a,	// (0x00019b50) list_blid_sat_info_pane

0xaa4d,	// (0x00019b63) list_blid_sat_info_pane_g1

0xaa55,	// (0x00019b6b) list_blid_sat_info_pane_t1

0x2adb,	// (0x00011bf1) mup_equalizer_pane_ParamLimits

0x2adb,	// (0x00011bf1) mup_equalizer_pane

0x2af4,	// (0x00011c0a) mup_equalizer_pane_cp1_ParamLimits

0x2af4,	// (0x00011c0a) mup_equalizer_pane_cp1

0x2b11,	// (0x00011c27) mup_equalizer_pane_cp2_ParamLimits

0x2b11,	// (0x00011c27) mup_equalizer_pane_cp2

0x2b2e,	// (0x00011c44) mup_equalizer_pane_cp3_ParamLimits

0x2b2e,	// (0x00011c44) mup_equalizer_pane_cp3

0x2b4f,	// (0x00011c65) mup_equalizer_pane_cp4_ParamLimits

0x2b4f,	// (0x00011c65) mup_equalizer_pane_cp4

0x2b70,	// (0x00011c86) mup_equalizer_pane_cp5

0x2b84,	// (0x00011c9a) mup_equalizer_pane_cp6

0x2b98,	// (0x00011cae) mup_equalizer_pane_cp7

0xbc3c,	// (0x0001ad52) bg_popup_call_poc_act_pane_g9

0xbc44,	// (0x0001ad5a) bg_popup_call_poc_act_pane_g10

0xbc4c,	// (0x0001ad62) bg_popup_call_poc_act_pane_g11

0x000a,

0x9ab6,	// (0x00018bcc) mup_scale_pane

0x9c22,	// (0x00018d38) mup_scale_pane_g1

0xaa63,	// (0x00019b79) mup_scale_pane_g2

0x0006,

0xf46a,	// (0x0001e580) mup_scale_pane_g

0xaa87,	// (0x00019b9d) msg_data_pane

0xaa8f,	// (0x00019ba5) scroll_pane_cp017

0x2bbe,	// (0x00011cd4) bg_list_pane_cp04_ParamLimits

0x2bbe,	// (0x00011cd4) bg_list_pane_cp04

0xaa97,	// (0x00019bad) msg_data_pane_g1

0x2bde,	// (0x00011cf4) msg_data_pane_g2

0x2be6,	// (0x00011cfc) msg_data_pane_g3

0x2bee,	// (0x00011d04) msg_data_pane_g4

0x2bf6,	// (0x00011d0c) msg_data_pane_g5

0x2bfe,	// (0x00011d14) msg_data_pane_g6

0x2c06,	// (0x00011d1c) msg_data_pane_g7

0x0006,

0xf479,	// (0x0001e58f) msg_data_pane_g

0x2c0e,	// (0x00011d24) msg_text_pane_ParamLimits

0x2c0e,	// (0x00011d24) msg_text_pane

0x2c34,	// (0x00011d4a) qrid_highlight_pane_cp011_ParamLimits

0x2c34,	// (0x00011d4a) qrid_highlight_pane_cp011

0x985b,	// (0x00018971) msg_body_pane

0x985b,	// (0x00018971) msg_header_pane

0xaaa8,	// (0x00019bbe) input_focus_pane_cp07

0x2c58,	// (0x00011d6e) msg_header_pane_t1_ParamLimits

0x2c58,	// (0x00011d6e) msg_header_pane_t1

0x2c6a,	// (0x00011d80) msg_header_pane_t2_ParamLimits

0x2c6a,	// (0x00011d80) msg_header_pane_t2

0x0001,

0xf48d,	// (0x0001e5a3) msg_header_pane_t_ParamLimits

0xf48d,	// (0x0001e5a3) msg_header_pane_t

0xaabd,	// (0x00019bd3) msg_body_pane_g1

0x2c7c,	// (0x00011d92) msg_body_pane_t1_ParamLimits

0x2c7c,	// (0x00011d92) msg_body_pane_t1

0x2cad,	// (0x00011dc3) msg_body_pane_t2_ParamLimits

0x2cad,	// (0x00011dc3) msg_body_pane_t2

0x2cbf,	// (0x00011dd5) msg_body_pane_t3_ParamLimits

0x2cbf,	// (0x00011dd5) msg_body_pane_t3

0x0002,

0xf492,	// (0x0001e5a8) msg_body_pane_t_ParamLimits

0xf492,	// (0x0001e5a8) msg_body_pane_t

0x2d0b,	// (0x00011e21) main_viewer_pane_g1_ParamLimits

0x2d0b,	// (0x00011e21) main_viewer_pane_g1

0x2d19,	// (0x00011e2f) main_viewer_pane_g2_ParamLimits

0x2d19,	// (0x00011e2f) main_viewer_pane_g2

0x2d27,	// (0x00011e3d) main_viewer_pane_g3_ParamLimits

0x2d27,	// (0x00011e3d) main_viewer_pane_g3

0x2d36,	// (0x00011e4c) main_viewer_pane_g4_ParamLimits

0x2d36,	// (0x00011e4c) main_viewer_pane_g4

0xaadd,	// (0x00019bf3) main_viewer_pane_g5_ParamLimits

0xaadd,	// (0x00019bf3) main_viewer_pane_g5

0xaadd,	// (0x00019bf3) main_viewer_pane_g7_ParamLimits

0xaadd,	// (0x00019bf3) main_viewer_pane_g7

0xaaef,	// (0x00019c05) main_viewer_pane_g8_ParamLimits

0xaaef,	// (0x00019c05) main_viewer_pane_g8

0x0007,

0xf4a2,	// (0x0001e5b8) main_viewer_pane_g_ParamLimits

0xf4a2,	// (0x0001e5b8) main_viewer_pane_g

0xab07,	// (0x00019c1d) viewer_content_pane_ParamLimits

0xab07,	// (0x00019c1d) viewer_content_pane

0x2d72,	// (0x00011e88) main_postcard_pane_g1_ParamLimits

0x2d72,	// (0x00011e88) main_postcard_pane_g1

0x2d88,	// (0x00011e9e) main_postcard_pane_g2_ParamLimits

0x2d88,	// (0x00011e9e) main_postcard_pane_g2

0x2d9e,	// (0x00011eb4) main_postcard_pane_g3_ParamLimits

0x2d9e,	// (0x00011eb4) main_postcard_pane_g3

0x0005,

0xf4b3,	// (0x0001e5c9) main_postcard_pane_g_ParamLimits

0xf4b3,	// (0x0001e5c9) main_postcard_pane_g

0x2db5,	// (0x00011ecb) main_postcard_pane_g4

0xbeb2,	// (0x0001afc8) smil_status_volume_pane_g2

0x2df8,	// (0x00011f0e) postcard_pane_ParamLimits

0x2df8,	// (0x00011f0e) postcard_pane

0xab15,	// (0x00019c2b) postcard_pane_g1_ParamLimits

0xab15,	// (0x00019c2b) postcard_pane_g1

0x2e3a,	// (0x00011f50) postcard_pane_g2_ParamLimits

0x2e3a,	// (0x00011f50) postcard_pane_g2

0x2e46,	// (0x00011f5c) postcard_pane_g3_ParamLimits

0x2e46,	// (0x00011f5c) postcard_pane_g3

0xab23,	// (0x00019c39) postcard_pane_g4_ParamLimits

0xab23,	// (0x00019c39) postcard_pane_g4

0x2e52,	// (0x00011f68) postcard_pane_g5_ParamLimits

0x2e52,	// (0x00011f68) postcard_pane_g5

0x2e67,	// (0x00011f7d) postcard_pane_g6_ParamLimits

0x2e67,	// (0x00011f7d) postcard_pane_g6

0xab15,	// (0x00019c2b) postcard_pane_g7_ParamLimits

0xab15,	// (0x00019c2b) postcard_pane_g7

0x0006,

0xf4c0,	// (0x0001e5d6) postcard_pane_g_ParamLimits

0xf4c0,	// (0x0001e5d6) postcard_pane_g

0x2e7b,	// (0x00011f91) main_mp2_pane_g1_ParamLimits

0x2e7b,	// (0x00011f91) main_mp2_pane_g1

0x2e87,	// (0x00011f9d) main_mp2_pane_g2_ParamLimits

0x2e87,	// (0x00011f9d) main_mp2_pane_g2

0x2e93,	// (0x00011fa9) main_mp2_pane_g3_ParamLimits

0x2e93,	// (0x00011fa9) main_mp2_pane_g3

0x0002,

0xf4cf,	// (0x0001e5e5) main_mp2_pane_g_ParamLimits

0xf4cf,	// (0x0001e5e5) main_mp2_pane_g

0x2e9f,	// (0x00011fb5) main_mp2_pane_t1_ParamLimits

0x2e9f,	// (0x00011fb5) main_mp2_pane_t1

0x2eb4,	// (0x00011fca) main_mp2_pane_t2_ParamLimits

0x2eb4,	// (0x00011fca) main_mp2_pane_t2

0x2ec6,	// (0x00011fdc) main_mp2_pane_t3_ParamLimits

0x2ec6,	// (0x00011fdc) main_mp2_pane_t3

0x0002,

0xf4d6,	// (0x0001e5ec) main_mp2_pane_t_ParamLimits

0xf4d6,	// (0x0001e5ec) main_mp2_pane_t

0xab31,	// (0x00019c47) pec_content_pane_ParamLimits

0xab31,	// (0x00019c47) pec_content_pane

0x9fd5,	// (0x000190eb) scroll_pane_cp015

0xab43,	// (0x00019c59) pec_attribute_pane_ParamLimits

0xab43,	// (0x00019c59) pec_attribute_pane

0x2ed8,	// (0x00011fee) pec_content_pane_g1_ParamLimits

0x2ed8,	// (0x00011fee) pec_content_pane_g1

0xab53,	// (0x00019c69) pec_content_pane_t1_ParamLimits

0xab53,	// (0x00019c69) pec_content_pane_t1

0xab65,	// (0x00019c7b) pec_content_pane_t2_ParamLimits

0xab65,	// (0x00019c7b) pec_content_pane_t2

0x0001,

0xf4dd,	// (0x0001e5f3) pec_content_pane_t_ParamLimits

0xf4dd,	// (0x0001e5f3) pec_content_pane_t

0x2ee4,	// (0x00011ffa) list_single_graphic_pane_cp01_ParamLimits

0x2ee4,	// (0x00011ffa) list_single_graphic_pane_cp01

0x9ab6,	// (0x00018bcc) bg_popup_sub_pane_cp04

0xab77,	// (0x00019c8d) popup_mup_playback_window_g1

0xab83,	// (0x00019c99) popup_mup_playback_window_t1

0xab98,	// (0x00019cae) popup_mup_playback_window_t2

0x0001,

0xf4e2,	// (0x0001e5f8) popup_mup_playback_window_t

0xabcf,	// (0x00019ce5) main_image_pane_g1_ParamLimits

0xabcf,	// (0x00019ce5) main_image_pane_g1

0xac12,	// (0x00019d28) scroll_pane_cp018_ParamLimits

0xac12,	// (0x00019d28) scroll_pane_cp018

0xac2a,	// (0x00019d40) scroll_pane_cp016_ParamLimits

0xac2a,	// (0x00019d40) scroll_pane_cp016

0x2fb2,	// (0x000120c8) smil2_image_pane_ParamLimits

0x2fb2,	// (0x000120c8) smil2_image_pane

0x2fe2,	// (0x000120f8) smil2_root_pane_ParamLimits

0x2fe2,	// (0x000120f8) smil2_root_pane

0x301a,	// (0x00012130) smil2_text_pane_ParamLimits

0x301a,	// (0x00012130) smil2_text_pane

0x985b,	// (0x00018971) bg_list_pane_cp06

0xac66,	// (0x00019d7c) grid_radio_pane

0x985b,	// (0x00018971) bg_popup_window_pane_cp06

0xac6e,	// (0x00019d84) main_fmradio_pane_t1

0xa5d5,	// (0x000196eb) heading_pane_cp04

0xac7c,	// (0x00019d92) main_fmradio_pane_t2

0xbc94,	// (0x0001adaa) popup_cale_lunar_info_window_g1

0xac8a,	// (0x00019da0) main_fmradio_pane_t3

0xbc9c,	// (0x0001adb2) popup_cale_lunar_info_window_g2

0xac98,	// (0x00019dae) main_fmradio_pane_t4

0x0001,

0xaca6,	// (0x00019dbc) main_fmradio_pane_t5

0x0004,

0xf5d0,	// (0x0001e6e6) popup_cale_lunar_info_window_g

0xf4f7,	// (0x0001e60d) main_fmradio_pane_t

0xacb4,	// (0x00019dca) wait_bar_pane_cp03

0xacbc,	// (0x00019dd2) cell_fmradio_pane_ParamLimits

0xacbc,	// (0x00019dd2) cell_fmradio_pane

0xab15,	// (0x00019c2b) cell_fmradio_pane_g1_ParamLimits

0xab15,	// (0x00019c2b) cell_fmradio_pane_g1

0x985b,	// (0x00018971) grid_highlight_pane_cp011

0xaccf,	// (0x00019de5) poc_content_pane_ParamLimits

0xaccf,	// (0x00019de5) poc_content_pane

0xace1,	// (0x00019df7) scroll_pane_cp019

0x309a,	// (0x000121b0) popup_call_poc_act_window_ParamLimits

0x309a,	// (0x000121b0) popup_call_poc_act_window

0x30be,	// (0x000121d4) popup_call_poc_inact_window_ParamLimits

0x30be,	// (0x000121d4) popup_call_poc_inact_window

0xf594,	// (0x0001e6aa) bg_popup_call_poc_act_pane_g

0xbc54,	// (0x0001ad6a) bg_popup_call_poc_inact_pane_g1

0xbc5c,	// (0x0001ad72) bg_popup_call_poc_inact_pane_g2

0xace9,	// (0x00019dff) popup_call_poc_act_window_g2

0xbc64,	// (0x0001ad7a) bg_popup_call_poc_inact_pane_g3

0xbbe4,	// (0x0001acfa) bg_popup_call_poc_inact_pane_g4

0xbc6c,	// (0x0001ad82) bg_popup_call_poc_inact_pane_g5

0xacf1,	// (0x00019e07) popup_call_poc_act_window_t1_ParamLimits

0xacf1,	// (0x00019e07) popup_call_poc_act_window_t1

0xad19,	// (0x00019e2f) popup_call_poc_act_window_t2_ParamLimits

0xad19,	// (0x00019e2f) popup_call_poc_act_window_t2

0xad41,	// (0x00019e57) popup_call_poc_act_window_t3_ParamLimits

0xad41,	// (0x00019e57) popup_call_poc_act_window_t3

0xad69,	// (0x00019e7f) popup_call_poc_act_window_t4_ParamLimits

0xad69,	// (0x00019e7f) popup_call_poc_act_window_t4

0x0003,

0xf502,	// (0x0001e618) popup_call_poc_act_window_t_ParamLimits

0xf502,	// (0x0001e618) popup_call_poc_act_window_t

0xbc74,	// (0x0001ad8a) bg_popup_call_poc_inact_pane_g6

0xbc7c,	// (0x0001ad92) bg_popup_call_poc_inact_pane_g7

0xbc84,	// (0x0001ad9a) bg_popup_call_poc_inact_pane_g8

0xad7b,	// (0x00019e91) popup_call_poc_inact_window_g2

0xbc8c,	// (0x0001ada2) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5ab,	// (0x0001e6c1) bg_popup_call_poc_inact_pane_g

0xad83,	// (0x00019e99) popup_call_poc_inact_window_t1_ParamLimits

0xad83,	// (0x00019e99) popup_call_poc_inact_window_t1

0xad98,	// (0x00019eae) popup_call_poc_inact_window_t2_ParamLimits

0xad98,	// (0x00019eae) popup_call_poc_inact_window_t2

0xadad,	// (0x00019ec3) popup_call_poc_inact_window_t3_ParamLimits

0xadad,	// (0x00019ec3) popup_call_poc_inact_window_t3

0x0002,

0xf50b,	// (0x0001e621) popup_call_poc_inact_window_t_ParamLimits

0xf50b,	// (0x0001e621) popup_call_poc_inact_window_t

0xbe25,	// (0x0001af3b) context_pane_ParamLimits

0x38e6,	// (0x000129fc) signal_pane_ParamLimits

0x9e22,	// (0x00018f38) main_call2_pane

0xbdfe,	// (0x0001af14) popup_phob_thumbnail2_window_ParamLimits

0xbdfe,	// (0x0001af14) popup_phob_thumbnail2_window

0xaac5,	// (0x00019bdb) aid_hotspot_pointer_arrow_pane

0xaacd,	// (0x00019be3) aid_hotspot_pointer_hand_pane

0x3408,	// (0x0001251e) phob_pre_status_pane_g5

0x0ef2,	// (0x00010008) cams_zoom_pane_ParamLimits

0x0f01,	// (0x00010017) image_vga_pane_ParamLimits

0x0f1b,	// (0x00010031) main_camera_pane_g1_ParamLimits

0x0f2d,	// (0x00010043) main_camera_pane_g2_ParamLimits

0x0f3d,	// (0x00010053) main_camera_pane_g3_ParamLimits

0x0f4d,	// (0x00010063) main_camera_pane_g4_ParamLimits

0x0f5d,	// (0x00010073) main_camera_pane_g5_ParamLimits

0x0f6d,	// (0x00010083) main_camera_pane_g6_ParamLimits

0x0f7d,	// (0x00010093) main_camera_pane_g7_ParamLimits

0xf20a,	// (0x0001e320) main_camera_pane_g_ParamLimits

0x0f8d,	// (0x000100a3) main_camera_pane_t1_ParamLimits

0x0fa3,	// (0x000100b9) main_camera_pane_t2_ParamLimits

0xf21b,	// (0x0001e331) main_camera_pane_t_ParamLimits

0x9ab6,	// (0x00018bcc) bg_popup_preview_window_pane_cp01_ParamLimits

0x9ab6,	// (0x00018bcc) bg_popup_preview_window_pane_cp01

0xadc2,	// (0x00019ed8) popup_phob_thumbnail2_window_g1_ParamLimits

0xadc2,	// (0x00019ed8) popup_phob_thumbnail2_window_g1

0x985b,	// (0x00018971) call2_cli_visual_pane

0x30f2,	// (0x00012208) popup_call2_audio_conf_window_ParamLimits

0x30f2,	// (0x00012208) popup_call2_audio_conf_window

0x3112,	// (0x00012228) popup_call2_audio_first_window_ParamLimits

0x3112,	// (0x00012228) popup_call2_audio_first_window

0x31a8,	// (0x000122be) popup_call2_audio_in_window_ParamLimits

0x31a8,	// (0x000122be) popup_call2_audio_in_window

0x31f0,	// (0x00012306) popup_call2_audio_out_window_ParamLimits

0x31f0,	// (0x00012306) popup_call2_audio_out_window

0x325a,	// (0x00012370) popup_call2_audio_second_window_ParamLimits

0x325a,	// (0x00012370) popup_call2_audio_second_window

0x32c0,	// (0x000123d6) popup_call2_audio_wait_window_ParamLimits

0x32c0,	// (0x000123d6) popup_call2_audio_wait_window

0x985b,	// (0x00018971) bg_popup_call2_act_pane_cp03

0x9a98,	// (0x00018bae) list_conf_pane_cp

0xadce,	// (0x00019ee4) popup_call2_audio_conf_window_t1

0xaddc,	// (0x00019ef2) list_single_graphic_popup_conf2_pane_ParamLimits

0xaddc,	// (0x00019ef2) list_single_graphic_popup_conf2_pane

0xa645,	// (0x0001975b) list_highlight_pane_cp04

0xadef,	// (0x00019f05) list_single_graphic_popup_conf2_pane_g1

0xa656,	// (0x0001976c) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf512,	// (0x0001e628) list_single_graphic_popup_conf2_pane_g

0xadf9,	// (0x00019f0f) list_single_graphic_popup_conf2_pane_t1

0xae07,	// (0x00019f1d) bg_popup_call2_act_pane_cp01_ParamLimits

0xae07,	// (0x00019f1d) bg_popup_call2_act_pane_cp01

0xae91,	// (0x00019fa7) call_type_pane_cp05_ParamLimits

0xae91,	// (0x00019fa7) call_type_pane_cp05

0xaee5,	// (0x00019ffb) popup_call2_audio_second_window_g1_ParamLimits

0xaee5,	// (0x00019ffb) popup_call2_audio_second_window_g1

0xaf39,	// (0x0001a04f) popup_call2_audio_second_window_g2_ParamLimits

0xaf39,	// (0x0001a04f) popup_call2_audio_second_window_g2

0x0002,

0xf517,	// (0x0001e62d) popup_call2_audio_second_window_g_ParamLimits

0xf517,	// (0x0001e62d) popup_call2_audio_second_window_g

0xaf9e,	// (0x0001a0b4) popup_call2_audio_second_window_t1_ParamLimits

0xaf9e,	// (0x0001a0b4) popup_call2_audio_second_window_t1

0xb059,	// (0x0001a16f) popup_call2_audio_second_window_t2_ParamLimits

0xb059,	// (0x0001a16f) popup_call2_audio_second_window_t2

0xb0ac,	// (0x0001a1c2) popup_call2_audio_second_window_t3_ParamLimits

0xb0ac,	// (0x0001a1c2) popup_call2_audio_second_window_t3

0x0003,

0xf51e,	// (0x0001e634) popup_call2_audio_second_window_t_ParamLimits

0xf51e,	// (0x0001e634) popup_call2_audio_second_window_t

0x985b,	// (0x00018971) bg_popup_call2_in_pane_cp02

0x9865,	// (0x0001897b) call_type_pane_cp04

0x986d,	// (0x00018983) popup_call2_audio_wait_window_g1

0x9875,	// (0x0001898b) popup_call2_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0001e20f) popup_call2_audio_wait_window_g

0x987d,	// (0x00018993) popup_call2_audio_wait_window_t3

0xb19f,	// (0x0001a2b5) bg_popup_call2_act_pane_ParamLimits

0xb19f,	// (0x0001a2b5) bg_popup_call2_act_pane

0xb25f,	// (0x0001a375) call_type_pane_cp03_ParamLimits

0xb25f,	// (0x0001a375) call_type_pane_cp03

0xb2c3,	// (0x0001a3d9) popup_call2_audio_first_window_g1_ParamLimits

0xb2c3,	// (0x0001a3d9) popup_call2_audio_first_window_g1

0xb333,	// (0x0001a449) popup_call2_audio_first_window_g2_ParamLimits

0xb333,	// (0x0001a449) popup_call2_audio_first_window_g2

0xa9e7,	// (0x00019afd) popup_call2_audio_first_window_g3_ParamLimits

0xa9e7,	// (0x00019afd) popup_call2_audio_first_window_g3

0x0004,

0xf527,	// (0x0001e63d) popup_call2_audio_first_window_g_ParamLimits

0xf527,	// (0x0001e63d) popup_call2_audio_first_window_g

0xb411,	// (0x0001a527) popup_call2_audio_first_window_t1_ParamLimits

0xb411,	// (0x0001a527) popup_call2_audio_first_window_t1

0xb514,	// (0x0001a62a) popup_call2_audio_first_window_t4_ParamLimits

0xb514,	// (0x0001a62a) popup_call2_audio_first_window_t4

0xb5f7,	// (0x0001a70d) popup_call2_audio_first_window_t5_ParamLimits

0xb5f7,	// (0x0001a70d) popup_call2_audio_first_window_t5

0x0003,

0xf532,	// (0x0001e648) popup_call2_audio_first_window_t_ParamLimits

0xf532,	// (0x0001e648) popup_call2_audio_first_window_t

0x9aae,	// (0x00018bc4) bg_popup_call2_act_pane_g1

0xbca4,	// (0x0001adba) popup_cale_lunar_info_window_t1

0xbcb2,	// (0x0001adc8) popup_cale_lunar_info_window_t2

0xbcc0,	// (0x0001add6) popup_cale_lunar_info_window_t3

0x985b,	// (0x00018971) bg_popup_call2_bubble_pane

0xb6f8,	// (0x0001a80e) bg_popup_call2_in_pane_cp01_ParamLimits

0xb6f8,	// (0x0001a80e) bg_popup_call2_in_pane_cp01

0x9537,	// (0x0001864d) call_type_pane_cp02

0xb740,	// (0x0001a856) popup_call2_audio_out_window_g1_ParamLimits

0xb740,	// (0x0001a856) popup_call2_audio_out_window_g1

0xb76c,	// (0x0001a882) popup_call2_audio_out_window_g2_ParamLimits

0xb76c,	// (0x0001a882) popup_call2_audio_out_window_g2

0xb794,	// (0x0001a8aa) popup_call2_audio_out_window_g3_ParamLimits

0xb794,	// (0x0001a8aa) popup_call2_audio_out_window_g3

0x0003,

0xf53b,	// (0x0001e651) popup_call2_audio_out_window_g_ParamLimits

0xf53b,	// (0x0001e651) popup_call2_audio_out_window_g

0xb7cf,	// (0x0001a8e5) popup_call2_audio_out_window_t1_ParamLimits

0xb7cf,	// (0x0001a8e5) popup_call2_audio_out_window_t1

0xb82e,	// (0x0001a944) popup_call2_audio_out_window_t2_ParamLimits

0xb82e,	// (0x0001a944) popup_call2_audio_out_window_t2

0xb882,	// (0x0001a998) popup_call2_audio_out_window_t3_ParamLimits

0xb882,	// (0x0001a998) popup_call2_audio_out_window_t3

0xb898,	// (0x0001a9ae) popup_call2_audio_out_window_t4_ParamLimits

0xb898,	// (0x0001a9ae) popup_call2_audio_out_window_t4

0xb8ae,	// (0x0001a9c4) popup_call2_audio_out_window_t5_ParamLimits

0xb8ae,	// (0x0001a9c4) popup_call2_audio_out_window_t5

0x0005,

0xf544,	// (0x0001e65a) popup_call2_audio_out_window_t_ParamLimits

0xf544,	// (0x0001e65a) popup_call2_audio_out_window_t

0xb912,	// (0x0001aa28) bg_popup_call2_in_pane_ParamLimits

0xb912,	// (0x0001aa28) bg_popup_call2_in_pane

0xb96e,	// (0x0001aa84) popup_call2_audio_in_window_g1_ParamLimits

0xb96e,	// (0x0001aa84) popup_call2_audio_in_window_g1

0xb9a6,	// (0x0001aabc) popup_call2_audio_in_window_g2_ParamLimits

0xb9a6,	// (0x0001aabc) popup_call2_audio_in_window_g2

0xb9de,	// (0x0001aaf4) popup_call2_audio_in_window_g3_ParamLimits

0xb9de,	// (0x0001aaf4) popup_call2_audio_in_window_g3

0x0003,

0xf551,	// (0x0001e667) popup_call2_audio_in_window_g_ParamLimits

0xf551,	// (0x0001e667) popup_call2_audio_in_window_g

0xba36,	// (0x0001ab4c) popup_call2_audio_in_window_t1_ParamLimits

0xba36,	// (0x0001ab4c) popup_call2_audio_in_window_t1

0xbab6,	// (0x0001abcc) popup_call2_audio_in_window_t2_ParamLimits

0xbab6,	// (0x0001abcc) popup_call2_audio_in_window_t2

0xbb36,	// (0x0001ac4c) popup_call2_audio_in_window_t3_ParamLimits

0xbb36,	// (0x0001ac4c) popup_call2_audio_in_window_t3

0xbb50,	// (0x0001ac66) popup_call2_audio_in_window_t4_ParamLimits

0xbb50,	// (0x0001ac66) popup_call2_audio_in_window_t4

0xbb62,	// (0x0001ac78) popup_call2_audio_in_window_t5_ParamLimits

0xbb62,	// (0x0001ac78) popup_call2_audio_in_window_t5

0xbb77,	// (0x0001ac8d) popup_call2_audio_in_window_t6_ParamLimits

0xbb77,	// (0x0001ac8d) popup_call2_audio_in_window_t6

0x0005,

0xf55a,	// (0x0001e670) popup_call2_audio_in_window_t_ParamLimits

0xf55a,	// (0x0001e670) popup_call2_audio_in_window_t

0x9aae,	// (0x00018bc4) bg_popup_call2_in_pane_g1

0xbcce,	// (0x0001ade4) popup_cale_lunar_info_window_t4

0x0003,

0xf5d5,	// (0x0001e6eb) popup_cale_lunar_info_window_t

0x9ab6,	// (0x00018bcc) bg_popup_call2_rect_pane_ParamLimits

0x9ab6,	// (0x00018bcc) bg_popup_call2_rect_pane

0x985b,	// (0x00018971) call2_cli_visual_graphic_pane

0x985b,	// (0x00018971) call2_cli_visual_text_pane

0xbec5,	// (0x0001afdb) smil_status_volume_pane_g3

0x0002,

0x9c22,	// (0x00018d38) call2_cli_visual_graphic_pane_g1

0x9c22,	// (0x00018d38) call2_cli_visual_graphic_pane_g2

0x9c22,	// (0x00018d38) call2_cli_visual_graphic_pane_g3

0x0002,

0xf567,	// (0x0001e67d) call2_cli_visual_graphic_pane_g

0xbb8c,	// (0x0001aca2) bg_popup_call2_rect_pane_g1

0x9cca,	// (0x00018de0) bg_popup_call2_rect_pane_g2

0xbb94,	// (0x0001acaa) bg_popup_call2_rect_pane_g3

0xbb9c,	// (0x0001acb2) bg_popup_call2_rect_pane_g4

0xbba4,	// (0x0001acba) bg_popup_call2_rect_pane_g5

0xbbac,	// (0x0001acc2) bg_popup_call2_rect_pane_g6

0xbbb4,	// (0x0001acca) bg_popup_call2_rect_pane_g7

0xbbbc,	// (0x0001acd2) bg_popup_call2_rect_pane_g8

0xbbc4,	// (0x0001acda) bg_popup_call2_rect_pane_g9

0x0008,

0xf56e,	// (0x0001e684) bg_popup_call2_rect_pane_g

0xbbcc,	// (0x0001ace2) bg_popup_call2_bubble_pane_g1

0xbbd4,	// (0x0001acea) bg_popup_call2_bubble_pane_g2

0xbbdc,	// (0x0001acf2) bg_popup_call2_bubble_pane_g3

0xbbe4,	// (0x0001acfa) bg_popup_call2_bubble_pane_g4

0xbbec,	// (0x0001ad02) bg_popup_call2_bubble_pane_g5

0xbbf4,	// (0x0001ad0a) bg_popup_call2_bubble_pane_g6

0xbbfc,	// (0x0001ad12) bg_popup_call2_bubble_pane_g7

0xbc04,	// (0x0001ad1a) bg_popup_call2_bubble_pane_g8

0xbc0c,	// (0x0001ad22) bg_popup_call2_bubble_pane_g9

0x0008,

0xf581,	// (0x0001e697) bg_popup_call2_bubble_pane_g

0x084a,	// (0x0000f960) aid_cale_week_size_cell_pane

0x0fb9,	// (0x000100cf) aid_cams_cif_uncrop_pane_ParamLimits

0x0fb9,	// (0x000100cf) aid_cams_cif_uncrop_pane

0x116e,	// (0x00010284) aid_cams_size_cell_ParamLimits

0x116e,	// (0x00010284) aid_cams_size_cell

0x1182,	// (0x00010298) grid_cams_pane_ParamLimits

0x119c,	// (0x000102b2) linegrid_cams_pane_ParamLimits

0x1392,	// (0x000104a8) call_video_pane_t1

0x13b0,	// (0x000104c6) call_video_pane_t2

0x0001,

0xf26e,	// (0x0001e384) call_video_pane_t

0x17d4,	// (0x000108ea) aid_cale_month_size_cell_pane_ParamLimits

0x17d4,	// (0x000108ea) aid_cale_month_size_cell_pane

0xf61e,	// (0x0001e734) smil_status_volume_pane_g

0xbed2,	// (0x0001afe8) volume_smil_pane_ParamLimits

0x93dc,	// (0x000184f2) aid_popup2_width_pane

0x07ce,	// (0x0000f8e4) cell_qdial_pane_g4_ParamLimits

0x07ce,	// (0x0000f8e4) cell_qdial_pane_g4

0x26f5,	// (0x0001180b) aid_blid_cardinal_pane_ParamLimits

0x2701,	// (0x00011817) aid_blid_destination_pane_ParamLimits

0x2701,	// (0x00011817) aid_blid_destination_pane

0x9ab6,	// (0x00018bcc) bg_popup_call_poc_act_pane_ParamLimits

0x9ab6,	// (0x00018bcc) bg_popup_call_poc_act_pane

0x9ab6,	// (0x00018bcc) bg_popup_call_poc_inact_pane_ParamLimits

0x9ab6,	// (0x00018bcc) bg_popup_call_poc_inact_pane

0xbc14,	// (0x0001ad2a) bg_popup_call_poc_act_pane_g1

0xbc1c,	// (0x0001ad32) bg_popup_call_poc_act_pane_g2

0xbc24,	// (0x0001ad3a) bg_popup_call_poc_act_pane_g3

0xbbe4,	// (0x0001acfa) bg_popup_call_poc_act_pane_g4

0xbbec,	// (0x0001ad02) bg_popup_call_poc_act_pane_g5

0xbc2c,	// (0x0001ad42) bg_popup_call_poc_act_pane_g6

0xbbfc,	// (0x0001ad12) bg_popup_call_poc_act_pane_g7

0xbc34,	// (0x0001ad4a) bg_popup_call_poc_act_pane_g8

0x985b,	// (0x00018971) main_usb_pane

0xbdd9,	// (0x0001aeef) popup_cale_lunar_info_window

0x167a,	// (0x00010790) im_reading_pane_t1_ParamLimits

0x9f2d,	// (0x00019043) list_im_pane_ParamLimits

0x9f3e,	// (0x00019054) scroll_pane_cp07_ParamLimits

0x985b,	// (0x00018971) grid_highlight_pane_cp012

0x9ab6,	// (0x00018bcc) mup_scale_pane_ParamLimits

0xab15,	// (0x00019c2b) main_usb_pane_g1_ParamLimits

0xab15,	// (0x00019c2b) main_usb_pane_g1

0x331d,	// (0x00012433) main_usb_pane_g2_ParamLimits

0x331d,	// (0x00012433) main_usb_pane_g2

0x0001,

0xf5be,	// (0x0001e6d4) main_usb_pane_g_ParamLimits

0xf5be,	// (0x0001e6d4) main_usb_pane_g

0x3333,	// (0x00012449) main_usb_pane_t1_ParamLimits

0x3333,	// (0x00012449) main_usb_pane_t1

0x3345,	// (0x0001245b) main_usb_pane_t2_ParamLimits

0x3345,	// (0x0001245b) main_usb_pane_t2

0x3357,	// (0x0001246d) main_usb_pane_t3_ParamLimits

0x3357,	// (0x0001246d) main_usb_pane_t3

0x3369,	// (0x0001247f) main_usb_pane_t4_ParamLimits

0x3369,	// (0x0001247f) main_usb_pane_t4

0x337b,	// (0x00012491) main_usb_pane_t5_ParamLimits

0x337b,	// (0x00012491) main_usb_pane_t5

0x338d,	// (0x000124a3) main_usb_pane_t6_ParamLimits

0x338d,	// (0x000124a3) main_usb_pane_t6

0x0005,

0xf5c3,	// (0x0001e6d9) main_usb_pane_t_ParamLimits

0x26a4,	// (0x000117ba) aid_text_placing

0x26ad,	// (0x000117c3) main_location2_pane_t1_ParamLimits

0x26bf,	// (0x000117d5) main_location2_pane_t2_ParamLimits

0x26d1,	// (0x000117e7) main_location2_pane_t3_ParamLimits

0x26e3,	// (0x000117f9) main_location2_pane_t4_ParamLimits

0x26e3,	// (0x000117f9) main_location2_pane_t4

0xf3cf,	// (0x0001e4e5) main_location2_pane_t_ParamLimits

0x9af2,	// (0x00018c08) find_pinb_pane_g2_ParamLimits

0x9af2,	// (0x00018c08) find_pinb_pane_g2

0x0001,

0xf11f,	// (0x0001e235) find_pinb_pane_g_ParamLimits

0xf11f,	// (0x0001e235) find_pinb_pane_g

0x9afe,	// (0x00018c14) find_pinb_pane_t1_ParamLimits

0x9b10,	// (0x00018c26) find_pinb_pane_t2_ParamLimits

0xf124,	// (0x0001e23a) find_pinb_pane_t_ParamLimits

0x985b,	// (0x00018971) main_call3_pane

0x1c8f,	// (0x00010da5) cale_month_day_heading_pane_t1_ParamLimits

0x1d15,	// (0x00010e2b) cale_month_day_heading_pane_t2_ParamLimits

0x1da6,	// (0x00010ebc) cale_month_day_heading_pane_t3_ParamLimits

0x1e37,	// (0x00010f4d) cale_month_day_heading_pane_t4_ParamLimits

0x1ed0,	// (0x00010fe6) cale_month_day_heading_pane_t5_ParamLimits

0x1f71,	// (0x00011087) cale_month_day_heading_pane_t6_ParamLimits

0x2012,	// (0x00011128) cale_month_day_heading_pane_t7_ParamLimits

0xf2a6,	// (0x0001e3bc) cale_month_day_heading_pane_t_ParamLimits

0xa1ae,	// (0x000192c4) smil_status_volume_pane

0x2e16,	// (0x00011f2c) postcard_address_pane_ParamLimits

0x2e16,	// (0x00011f2c) postcard_address_pane

0x2e28,	// (0x00011f3e) postcard_message_pane_ParamLimits

0x2e28,	// (0x00011f3e) postcard_message_pane

0x32fa,	// (0x00012410) call2_cli_visual_pane_t1_ParamLimits

0x32fa,	// (0x00012410) call2_cli_visual_pane_t1

0x3b15,	// (0x00012c2b) postcard_message_pane_t1_ParamLimits

0x3b15,	// (0x00012c2b) postcard_message_pane_t1

0x3afe,	// (0x00012c14) postcard_address_pane_t1_ParamLimits

0x3afe,	// (0x00012c14) postcard_address_pane_t1

0x3aea,	// (0x00012c00) popup_call3_audio_in_window_ParamLimits

0x3aea,	// (0x00012c00) popup_call3_audio_in_window

0x3975,	// (0x00012a8b) bg_popup_call3_in_pane_ParamLimits

0x3975,	// (0x00012a8b) bg_popup_call3_in_pane

0x39eb,	// (0x00012b01) popup_call3_audio_in_window_g1_ParamLimits

0x39eb,	// (0x00012b01) popup_call3_audio_in_window_g1

0x3a0b,	// (0x00012b21) popup_call3_audio_in_window_g2_ParamLimits

0x3a0b,	// (0x00012b21) popup_call3_audio_in_window_g2

0x3a2b,	// (0x00012b41) popup_call3_audio_in_window_g3_ParamLimits

0x3a2b,	// (0x00012b41) popup_call3_audio_in_window_g3

0x0003,

0xf625,	// (0x0001e73b) popup_call3_audio_in_window_g_ParamLimits

0xf625,	// (0x0001e73b) popup_call3_audio_in_window_g

0x3a5c,	// (0x00012b72) popup_call3_audio_in_window_t1_ParamLimits

0x3a5c,	// (0x00012b72) popup_call3_audio_in_window_t1

0x3a9a,	// (0x00012bb0) popup_call3_audio_in_window_t2_ParamLimits

0x3a9a,	// (0x00012bb0) popup_call3_audio_in_window_t2

0x3ad8,	// (0x00012bee) popup_call3_audio_in_window_t3_ParamLimits

0x3ad8,	// (0x00012bee) popup_call3_audio_in_window_t3

0x0002,

0xf62e,	// (0x0001e744) popup_call3_audio_in_window_t_ParamLimits

0xf62e,	// (0x0001e744) popup_call3_audio_in_window_t

0x9e22,	// (0x00018f38) bg_popup_call3_rect_pane

0xbb8c,	// (0x0001aca2) bg_popup_call3_rect_pane_g1

0x9cca,	// (0x00018de0) bg_popup_call3_rect_pane_g2

0xbb94,	// (0x0001acaa) bg_popup_call3_rect_pane_g3

0xbb9c,	// (0x0001acb2) bg_popup_call3_rect_pane_g4

0xbba4,	// (0x0001acba) bg_popup_call3_rect_pane_g5

0xbbac,	// (0x0001acc2) bg_popup_call3_rect_pane_g6

0xbbb4,	// (0x0001acca) bg_popup_call3_rect_pane_g7

0x29db,	// (0x00011af1) mup_visualizer_osc_pane

0xa9f5,	// (0x00019b0b) mup_visualizer_spec_pane

0x39a5,	// (0x00012abb) call3_video_qcif_pane_ParamLimits

0x39a5,	// (0x00012abb) call3_video_qcif_pane

0x39b8,	// (0x00012ace) call3_video_qcif_uncrop_pane_ParamLimits

0x39b8,	// (0x00012ace) call3_video_qcif_uncrop_pane

0x39c6,	// (0x00012adc) call3_video_subqcif_pane_ParamLimits

0x39c6,	// (0x00012adc) call3_video_subqcif_pane

0x39da,	// (0x00012af0) call3_video_subqcif_uncrop_pane_ParamLimits

0x39da,	// (0x00012af0) call3_video_subqcif_uncrop_pane

0x3a4b,	// (0x00012b61) popup_call3_audio_in_window_g4_ParamLimits

0x3a4b,	// (0x00012b61) popup_call3_audio_in_window_g4

0x3964,	// (0x00012a7a) mup_spec_half_pane

0x396d,	// (0x00012a83) mup_spec_half_pane_cp

0xbe85,	// (0x0001af9b) mup_osc_middle_pane

0xbe8e,	// (0x0001afa4) mup_visualizer_osc_pane_g1

0x3944,	// (0x00012a5a) mup_spec_bar_pane_ParamLimits

0x3944,	// (0x00012a5a) mup_spec_bar_pane

0xbe72,	// (0x0001af88) mup_spec_bar_pane_g1

0xbe7c,	// (0x0001af92) mup_spec_bar_pane_g2

0x0001,

0xf619,	// (0x0001e72f) mup_spec_bar_pane_g

0x084a,	// (0x0000f960) aid_cale_week_size_cell_pane_ParamLimits

0x0864,	// (0x0000f97a) bg_cale_heading_pane_ParamLimits

0x9d7b,	// (0x00018e91) bg_cale_pane_cp01_ParamLimits

0x087c,	// (0x0000f992) cale_week_corner_pane_ParamLimits

0x089b,	// (0x0000f9b1) cale_week_day_heading_pane_ParamLimits

0x08b8,	// (0x0000f9ce) cale_week_scroll_pane_g1_ParamLimits

0x08cb,	// (0x0000f9e1) cale_week_scroll_pane_g2_ParamLimits

0x08e3,	// (0x0000f9f9) cale_week_scroll_pane_g3_ParamLimits

0x08fb,	// (0x0000fa11) cale_week_scroll_pane_g4_ParamLimits

0x0913,	// (0x0000fa29) cale_week_scroll_pane_g5_ParamLimits

0x0933,	// (0x0000fa49) cale_week_scroll_pane_g6_ParamLimits

0x0953,	// (0x0000fa69) cale_week_scroll_pane_g7_ParamLimits

0x0973,	// (0x0000fa89) cale_week_scroll_pane_g8_ParamLimits

0x0997,	// (0x0000faad) cale_week_scroll_pane_g9_ParamLimits

0x09af,	// (0x0000fac5) cale_week_scroll_pane_g10_ParamLimits

0x09c7,	// (0x0000fadd) cale_week_scroll_pane_g11_ParamLimits

0x09df,	// (0x0000faf5) cale_week_scroll_pane_g12_ParamLimits

0x09f7,	// (0x0000fb0d) cale_week_scroll_pane_g13_ParamLimits

0x09f7,	// (0x0000fb0d) cale_week_scroll_pane_g14_ParamLimits

0x09f7,	// (0x0000fb0d) cale_week_scroll_pane_g15_ParamLimits

0xf1b0,	// (0x0001e2c6) cale_week_scroll_pane_g_ParamLimits

0x0a33,	// (0x0000fb49) cale_week_time_pane_ParamLimits

0x0a57,	// (0x0000fb6d) grid_cale_week_pane_ParamLimits

0x9d98,	// (0x00018eae) listscroll_cale_week_pane_t1

0x9daa,	// (0x00018ec0) scroll_pane_cp08_ParamLimits

0x1829,	// (0x0001093f) cale_month_corner_pane_ParamLimits

0xa15e,	// (0x00019274) cale_month_pane_t1

0x1c2d,	// (0x00010d43) cale_month_week_pane_ParamLimits

0x24d5,	// (0x000115eb) popup_call_status_window_g1_ParamLimits

0x24e9,	// (0x000115ff) popup_call_status_window_g2_ParamLimits

0x24fd,	// (0x00011613) popup_call_status_window_g3_ParamLimits

0xf356,	// (0x0001e46c) popup_call_status_window_g_ParamLimits

0xa556,	// (0x0001966c) aid_call2_pane

0x2c4a,	// (0x00011d60) msg_header_pane_g1

0x2e16,	// (0x00011f2c) postcard_address2_pane_ParamLimits

0x2e16,	// (0x00011f2c) postcard_address2_pane

0x2e28,	// (0x00011f3e) postcard_message2_pane_ParamLimits

0x2e28,	// (0x00011f3e) postcard_message2_pane

0x38f4,	// (0x00012a0a) message2_row_pane_ParamLimits

0x38f4,	// (0x00012a0a) message2_row_pane

0x3911,	// (0x00012a27) address2_row_pane_ParamLimits

0x3911,	// (0x00012a27) address2_row_pane

0xbe40,	// (0x0001af56) postcard_message2_row_pane_g1

0xbe48,	// (0x0001af5e) postcard_message2_row_pane_t1

0xbe40,	// (0x0001af56) address2_row_pane_g1

0xbe48,	// (0x0001af5e) address2_row_pane_t1

0x0e71,	// (0x0000ff87) aid_size_cell_vorec

0x985b,	// (0x00018971) main_rss_pane

0x3924,	// (0x00012a3a) rss_list_single_pane_ParamLimits

0x3924,	// (0x00012a3a) rss_list_single_pane

0xbe56,	// (0x0001af6c) rss_list_single_pane_t1

0xbe64,	// (0x0001af7a) rss_list_single_pane_t2

0x0001,

0xf614,	// (0x0001e72a) rss_list_single_pane_t

0x985b,	// (0x00018971) main_camera2_pane

0x985b,	// (0x00018971) main_video2_pane

0x3b8e,	// (0x00012ca4) cams_zoom_pane_cp2_ParamLimits

0x3b8e,	// (0x00012ca4) cams_zoom_pane_cp2

0x3bae,	// (0x00012cc4) image2_vga_pane_ParamLimits

0x3bae,	// (0x00012cc4) image2_vga_pane

0x3bff,	// (0x00012d15) main_camera2_pane_g1_ParamLimits

0x3bff,	// (0x00012d15) main_camera2_pane_g1

0x3c1f,	// (0x00012d35) main_camera2_pane_g2_ParamLimits

0x3c1f,	// (0x00012d35) main_camera2_pane_g2

0x3c3f,	// (0x00012d55) main_camera2_pane_g3_ParamLimits

0x3c3f,	// (0x00012d55) main_camera2_pane_g3

0x3c5f,	// (0x00012d75) main_camera2_pane_g4_ParamLimits

0x3c5f,	// (0x00012d75) main_camera2_pane_g4

0x3c7f,	// (0x00012d95) main_camera2_pane_g5_ParamLimits

0x3c7f,	// (0x00012d95) main_camera2_pane_g5

0x3c9f,	// (0x00012db5) main_camera2_pane_g6_ParamLimits

0x3c9f,	// (0x00012db5) main_camera2_pane_g6

0x3cbf,	// (0x00012dd5) main_camera2_pane_g7_ParamLimits

0x3cbf,	// (0x00012dd5) main_camera2_pane_g7

0x3cdf,	// (0x00012df5) main_camera2_pane_g8_ParamLimits

0x3cdf,	// (0x00012df5) main_camera2_pane_g8

0x0008,

0xf635,	// (0x0001e74b) main_camera2_pane_g_ParamLimits

0xf635,	// (0x0001e74b) main_camera2_pane_g

0x3d1f,	// (0x00012e35) main_camera2_pane_t1_ParamLimits

0x3d1f,	// (0x00012e35) main_camera2_pane_t1

0x3d54,	// (0x00012e6a) main_camera2_pane_t2_ParamLimits

0x3d54,	// (0x00012e6a) main_camera2_pane_t2

0x3d7a,	// (0x00012e90) main_camera2_pane_t3_ParamLimits

0x3d7a,	// (0x00012e90) main_camera2_pane_t3

0x3dd8,	// (0x00012eee) main_camera2_pane_t4_ParamLimits

0x3dd8,	// (0x00012eee) main_camera2_pane_t4

0x0006,

0xf648,	// (0x0001e75e) main_camera2_pane_t_ParamLimits

0xf648,	// (0x0001e75e) main_camera2_pane_t

0x3e6a,	// (0x00012f80) cams_zoom_pane_cp4_ParamLimits

0x3e6a,	// (0x00012f80) cams_zoom_pane_cp4

0x3e80,	// (0x00012f96) image2_cif_pane_ParamLimits

0x3e80,	// (0x00012f96) image2_cif_pane

0x3eab,	// (0x00012fc1) image2_subqcif_pane_ParamLimits

0x3eab,	// (0x00012fc1) image2_subqcif_pane

0x3ec5,	// (0x00012fdb) main_video2_pane_g1_ParamLimits

0x3ec5,	// (0x00012fdb) main_video2_pane_g1

0x3edf,	// (0x00012ff5) main_video2_pane_g2_ParamLimits

0x3edf,	// (0x00012ff5) main_video2_pane_g2

0x3ef5,	// (0x0001300b) main_video2_pane_g3_ParamLimits

0x3ef5,	// (0x0001300b) main_video2_pane_g3

0x3f0b,	// (0x00013021) main_video2_pane_g4_ParamLimits

0x3f0b,	// (0x00013021) main_video2_pane_g4

0x3f21,	// (0x00013037) main_video2_pane_g5_ParamLimits

0x3f21,	// (0x00013037) main_video2_pane_g5

0x3f37,	// (0x0001304d) main_video2_pane_g6_ParamLimits

0x3f37,	// (0x0001304d) main_video2_pane_g6

0x0005,

0xf657,	// (0x0001e76d) main_video2_pane_g_ParamLimits

0xf657,	// (0x0001e76d) main_video2_pane_g

0x3f51,	// (0x00013067) main_video2_pane_t1_ParamLimits

0x3f51,	// (0x00013067) main_video2_pane_t1

0x3f75,	// (0x0001308b) main_video2_pane_t2_ParamLimits

0x3f75,	// (0x0001308b) main_video2_pane_t2

0x3fc3,	// (0x000130d9) main_video2_pane_t3_ParamLimits

0x3fc3,	// (0x000130d9) main_video2_pane_t3

0x0002,

0xf664,	// (0x0001e77a) main_video2_pane_t_ParamLimits

0xf664,	// (0x0001e77a) main_video2_pane_t

0x3448,	// (0x0001255e) call_muted_g2

0x0001,

0xf606,	// (0x0001e71c) call_muted_g

0x985b,	// (0x00018971) main_mup2_pane

0x400b,	// (0x00013121) main_mup2_pane_g1_ParamLimits

0x400b,	// (0x00013121) main_mup2_pane_g1

0x4017,	// (0x0001312d) main_mup2_pane_g2_ParamLimits

0x4017,	// (0x0001312d) main_mup2_pane_g2

0xbff6,	// (0x0001b10c) main_mup_pane_g13_cp1

0xbffe,	// (0x0001b114) mup_volume_pane_cp1

0x4033,	// (0x00013149) main_mup2_pane_g4_ParamLimits

0x4033,	// (0x00013149) main_mup2_pane_g4

0x4045,	// (0x0001315b) main_mup2_pane_g5_ParamLimits

0x4045,	// (0x0001315b) main_mup2_pane_g5

0x4057,	// (0x0001316d) main_mup2_pane_g6_ParamLimits

0x4057,	// (0x0001316d) main_mup2_pane_g6

0x4069,	// (0x0001317f) main_mup2_pane_g7_ParamLimits

0x4069,	// (0x0001317f) main_mup2_pane_g7

0x0006,

0xf66b,	// (0x0001e781) main_mup2_pane_g_ParamLimits

0xf66b,	// (0x0001e781) main_mup2_pane_g

0x4081,	// (0x00013197) main_mup2_pane_t1_ParamLimits

0x4081,	// (0x00013197) main_mup2_pane_t1

0x4097,	// (0x000131ad) main_mup2_pane_t2_ParamLimits

0x4097,	// (0x000131ad) main_mup2_pane_t2

0x40ad,	// (0x000131c3) main_mup2_pane_t3_ParamLimits

0x40ad,	// (0x000131c3) main_mup2_pane_t3

0x40c3,	// (0x000131d9) main_mup2_pane_t4_ParamLimits

0x40c3,	// (0x000131d9) main_mup2_pane_t4

0x40db,	// (0x000131f1) main_mup2_pane_t5_ParamLimits

0x40db,	// (0x000131f1) main_mup2_pane_t5

0x40f3,	// (0x00013209) main_mup2_pane_t6_ParamLimits

0x40f3,	// (0x00013209) main_mup2_pane_t6

0x0005,

0xf67a,	// (0x0001e790) main_mup2_pane_t_ParamLimits

0xf67a,	// (0x0001e790) main_mup2_pane_t

0x4123,	// (0x00013239) mup2_visualizer_pane_ParamLimits

0x4123,	// (0x00013239) mup2_visualizer_pane

0x4151,	// (0x00013267) mup_progress_pane_cp_ParamLimits

0x4151,	// (0x00013267) mup_progress_pane_cp

0xbfd8,	// (0x0001b0ee) mup_volume_pane_cp_ParamLimits

0xbfd8,	// (0x0001b0ee) mup_volume_pane_cp

0x4165,	// (0x0001327b) mup2_visualizer_pane_g1_ParamLimits

0x4165,	// (0x0001327b) mup2_visualizer_pane_g1

0xbf17,	// (0x0001b02d) mup2_visualizer_pane_g2_ParamLimits

0xbf17,	// (0x0001b02d) mup2_visualizer_pane_g2

0x417c,	// (0x00013292) mup2_visualizer_pane_g3_ParamLimits

0x417c,	// (0x00013292) mup2_visualizer_pane_g3

0x0002,

0xf687,	// (0x0001e79d) mup2_visualizer_pane_g_ParamLimits

0xf687,	// (0x0001e79d) mup2_visualizer_pane_g

0xac5e,	// (0x00019d74) aid_size_cell_fmradio

0x35fa,	// (0x00012710) aid_height_parent_landcape

0x9fbc,	// (0x000190d2) wml_content_pane_cp

0x9fc4,	// (0x000190da) wml_tabs_pane

0x9fcd,	// (0x000190e3) popup_wml_miniature_window

0x9fd5,	// (0x000190eb) scroll_pane_cp021

0x9fe9,	// (0x000190ff) wml_content_pane_comp8

0x985b,	// (0x00018971) bg_popup_sub_pane_cp05

0xbf35,	// (0x0001b04b) popup_wml_miniature_window_g1

0xbf3d,	// (0x0001b053) wml_miniature_view_pane

0x4188,	// (0x0001329e) aid_size_wml_view

0x4190,	// (0x000132a6) wml_miniature_view_pane_g1

0x4199,	// (0x000132af) wml_miniature_view_pane_g2

0x41a2,	// (0x000132b8) wml_miniature_view_pane_g3

0x41aa,	// (0x000132c0) wml_miniature_view_pane_g4

0x41b2,	// (0x000132c8) wml_miniature_view_pane_g5

0x41ba,	// (0x000132d0) wml_miniature_view_pane_g6

0x41c2,	// (0x000132d8) wml_miniature_view_pane_g7

0x41ca,	// (0x000132e0) wml_miniature_view_pane_g8

0x0007,

0xf68e,	// (0x0001e7a4) wml_miniature_view_pane_g

0xbf45,	// (0x0001b05b) background_graphic_ParamLimits

0xbf45,	// (0x0001b05b) background_graphic

0xbf51,	// (0x0001b067) wml_tabs_2_pane

0xbf5a,	// (0x0001b070) wml_tabs_3_pane_ParamLimits

0xbf5a,	// (0x0001b070) wml_tabs_3_pane

0xbf6c,	// (0x0001b082) wml_tabs_4_pane_ParamLimits

0xbf6c,	// (0x0001b082) wml_tabs_4_pane

0xbf82,	// (0x0001b098) wml_tabs_5_pane_ParamLimits

0xbf82,	// (0x0001b098) wml_tabs_5_pane

0xbf9c,	// (0x0001b0b2) wml_tabs_pane_g2_ParamLimits

0xbf9c,	// (0x0001b0b2) wml_tabs_pane_g2

0xbfb0,	// (0x0001b0c6) wml_tabs_pane_g3_ParamLimits

0xbfb0,	// (0x0001b0c6) wml_tabs_pane_g3

0x41d2,	// (0x000132e8) wml_tabs_2_active_pane_ParamLimits

0x41d2,	// (0x000132e8) wml_tabs_2_active_pane

0x41e6,	// (0x000132fc) wml_tabs_2_passive_pane_ParamLimits

0x41e6,	// (0x000132fc) wml_tabs_2_passive_pane

0x41fa,	// (0x00013310) wml_tabs_3_active_pane_cp_ParamLimits

0x41fa,	// (0x00013310) wml_tabs_3_active_pane_cp

0x420f,	// (0x00013325) wml_tabs_3_passive_pane_ParamLimits

0x420f,	// (0x00013325) wml_tabs_3_passive_pane

0x4222,	// (0x00013338) wml_tabs_3_passive_pane_cp_ParamLimits

0x4222,	// (0x00013338) wml_tabs_3_passive_pane_cp

0x4239,	// (0x0001334f) tabs_4_active_pane

0x4241,	// (0x00013357) tabs_4_passive_pane

0x424b,	// (0x00013361) tabs_4_passive_pane_cp

0x4253,	// (0x00013369) tabs_4_passive_pane_cp2

0x3315,	// (0x0001242b) aid_height_text

0x29ad,	// (0x00011ac3) mup_volume_cont_pane_ParamLimits

0x29ad,	// (0x00011ac3) mup_volume_cont_pane

0x046f,	// (0x0000f585) aid_size_cell_pinb

0x0479,	// (0x0000f58f) aid_size_list_pinb

0x413d,	// (0x00013253) mup2_volume_cont_pane_ParamLimits

0x413d,	// (0x00013253) mup2_volume_cont_pane

0xbfc4,	// (0x0001b0da) mup2_volume_cont_pane_g1_ParamLimits

0xbfc4,	// (0x0001b0da) mup2_volume_cont_pane_g1

0x0131,	// (0x0000f247) aid_size_cell_touch_ParamLimits

0x0131,	// (0x0000f247) aid_size_cell_touch

0x035e,	// (0x0000f474) touch_pane_ParamLimits

0x035e,	// (0x0000f474) touch_pane

0x93ca,	// (0x000184e0) main_rss2_pane

0xc006,	// (0x0001b11c) listscroll_rss2_pane

0xc00f,	// (0x0001b125) rss2_navigation_pane

0xc017,	// (0x0001b12d) list_rss2_pane

0xa6ea,	// (0x00019800) scroll_pane_cp22

0xc01f,	// (0x0001b135) rss2_navigation_pane_g1

0xc028,	// (0x0001b13e) rss2_navigation_pane_g2

0xc030,	// (0x0001b146) rss2_navigation_pane_g3

0x0002,

0xf69f,	// (0x0001e7b5) rss2_navigation_pane_g

0xc038,	// (0x0001b14e) rss2_navigation_pane_t1

0x425d,	// (0x00013373) rss2_list_single_pane_ParamLimits

0x425d,	// (0x00013373) rss2_list_single_pane

0xc046,	// (0x0001b15c) rss2_list_single_pane_t2

0xc054,	// (0x0001b16a) rss2_list_single_pane_t3_ParamLimits

0xc054,	// (0x0001b16a) rss2_list_single_pane_t3

0xc071,	// (0x0001b187) rss2_list_single_pane_t4

0x22e0,	// (0x000113f6) smil_status_pane_g1

0x943a,	// (0x00018550) main_image2_pane_ParamLimits

0x943a,	// (0x00018550) main_image2_pane

0x3cff,	// (0x00012e15) main_camera2_pane_g9_ParamLimits

0x3cff,	// (0x00012e15) main_camera2_pane_g9

0x3e2d,	// (0x00012f43) main_camera2_pane_t5_ParamLimits

0x3e2d,	// (0x00012f43) main_camera2_pane_t5

0xbee7,	// (0x0001affd) main_camera2_pane_t6_ParamLimits

0xbee7,	// (0x0001affd) main_camera2_pane_t6

0x4273,	// (0x00013389) main_image2_pane_g1_ParamLimits

0x4273,	// (0x00013389) main_image2_pane_g1

0x3050,	// (0x00012166) smil2_video_pane_ParamLimits

0x3050,	// (0x00012166) smil2_video_pane

0x93e8,	// (0x000184fe) aid_zoom_text_primary_cp

0x9430,	// (0x00018546) popup_preview_fixed_window

0x9f25,	// (0x0001903b) im_reading_pane_g1

0x3b76,	// (0x00012c8c) cams2_bc_adjust_pane_cp_ParamLimits

0x3b76,	// (0x00012c8c) cams2_bc_adjust_pane_cp

0x3e5c,	// (0x00012f72) cams2_bc_adjust_pane_ParamLimits

0x3e5c,	// (0x00012f72) cams2_bc_adjust_pane

0xc07f,	// (0x0001b195) cams2_bc_adjust_pane_g1

0xc087,	// (0x0001b19d) cams2_slider_pane

0xc090,	// (0x0001b1a6) cams2_slider_pane_g1

0xc099,	// (0x0001b1af) cams2_slider_pane_g2

0x0006,

0xf6a6,	// (0x0001e7bc) cams2_slider_pane_g

0x0561,	// (0x0000f677) calc_display_pane_ParamLimits

0x0589,	// (0x0000f69f) calc_paper_pane_ParamLimits

0x05ac,	// (0x0000f6c2) grid_calc_pane_ParamLimits

0xa5b8,	// (0x000196ce) popup_clock_digital_window_t1_ParamLimits

0xabfb,	// (0x00019d11) main_image_pane_t1

0x0543,	// (0x0000f659) aid_size_cell_calc_ParamLimits

0x0543,	// (0x0000f659) aid_size_cell_calc

0x3640,	// (0x00012756) popup_blid_sat_info2_window_ParamLimits

0x3640,	// (0x00012756) popup_blid_sat_info2_window

0xc0bb,	// (0x0001b1d1) aid_size_cell_blid

0xc0c3,	// (0x0001b1d9) bg_popup_window_pane_cp07

0xc0e6,	// (0x0001b1fc) grid_popup_blid_pane

0xc0f0,	// (0x0001b206) heading_pane_cp05_ParamLimits

0xc0f0,	// (0x0001b206) heading_pane_cp05

0xc1ba,	// (0x0001b2d0) cell_popup_blid_pane_ParamLimits

0xc1ba,	// (0x0001b2d0) cell_popup_blid_pane

0xc1de,	// (0x0001b2f4) cell_popup_blid_pane_g1

0xc1e6,	// (0x0001b2fc) cell_popup_blid_pane_t1

0x410d,	// (0x00013223) mup2_indicator_pane_ParamLimits

0x410d,	// (0x00013223) mup2_indicator_pane

0x9e22,	// (0x00018f38) mup2_visualizer_osc_pane

0xbf23,	// (0x0001b039) mup2_visualizer_spec_pane_ParamLimits

0xbf23,	// (0x0001b039) mup2_visualizer_spec_pane

0x4289,	// (0x0001339f) mup2_spec_half_pane

0x4292,	// (0x000133a8) mup2_spec_half_pane_cp

0x429a,	// (0x000133b0) mup2_spec_bar_pane_ParamLimits

0x429a,	// (0x000133b0) mup2_spec_bar_pane

0xbe72,	// (0x0001af88) mup2_spec_bar_pane_g1

0xbe7c,	// (0x0001af92) mup2_spec_bar_pane_g2

0x0001,

0xf619,	// (0x0001e72f) mup2_spec_bar_pane_g

0x42ba,	// (0x000133d0) mup2_osc_middle_pane

0xbe8e,	// (0x0001afa4) mup2_visualizer_osc_pane_g1

0x9468,	// (0x0001857e) popup_number_entry_window_t1_ParamLimits

0x947b,	// (0x00018591) popup_number_entry_window_t2_ParamLimits

0x948d,	// (0x000185a3) popup_number_entry_window_t3_ParamLimits

0x03b0,	// (0x0000f4c6) popup_number_entry_window_t5_ParamLimits

0x03b0,	// (0x0000f4c6) popup_number_entry_window_t5

0xf0ca,	// (0x0001e1e0) popup_number_entry_window_t_ParamLimits

0x949f,	// (0x000185b5) text_title_cp2_ParamLimits

0xaad5,	// (0x00019beb) aid_hotspot_pointer_text2_pane

0xaafb,	// (0x00019c11) main_viewer_pane_g9_ParamLimits

0xaafb,	// (0x00019c11) main_viewer_pane_g9

0xa15e,	// (0x00019274) cale_month_pane_t1_ParamLimits

0xa1e3,	// (0x000192f9) bg_cale_pane_ParamLimits

0xa1fb,	// (0x00019311) list_cale_pane_ParamLimits

0xa20c,	// (0x00019322) listscroll_cale_day_pane_t1

0xa21e,	// (0x00019334) scroll_pane_cp09_ParamLimits

0x29e3,	// (0x00011af9) main_mup_eq_pane_t1_ParamLimits

0x29e3,	// (0x00011af9) main_mup_eq_pane_t1

0x29fd,	// (0x00011b13) main_mup_eq_pane_t2_ParamLimits

0x29fd,	// (0x00011b13) main_mup_eq_pane_t2

0x2a17,	// (0x00011b2d) main_mup_eq_pane_t3_ParamLimits

0x2a17,	// (0x00011b2d) main_mup_eq_pane_t3

0x2a33,	// (0x00011b49) main_mup_eq_pane_t4_ParamLimits

0x2a33,	// (0x00011b49) main_mup_eq_pane_t4

0x2a4f,	// (0x00011b65) main_mup_eq_pane_t5_ParamLimits

0x2a4f,	// (0x00011b65) main_mup_eq_pane_t5

0x2a6b,	// (0x00011b81) main_mup_eq_pane_t6_ParamLimits

0x2a6b,	// (0x00011b81) main_mup_eq_pane_t6

0x2a7f,	// (0x00011b95) main_mup_eq_pane_t7_ParamLimits

0x2a7f,	// (0x00011b95) main_mup_eq_pane_t7

0x2a93,	// (0x00011ba9) main_mup_eq_pane_t8_ParamLimits

0x2a93,	// (0x00011ba9) main_mup_eq_pane_t8

0x2aa7,	// (0x00011bbd) main_mup_eq_pane_t9_ParamLimits

0x2aa7,	// (0x00011bbd) main_mup_eq_pane_t9

0x2ac1,	// (0x00011bd7) main_mup_eq_pane_t10_ParamLimits

0x2ac1,	// (0x00011bd7) main_mup_eq_pane_t10

0x0009,

0xf455,	// (0x0001e56b) main_mup_eq_pane_t_ParamLimits

0xf455,	// (0x0001e56b) main_mup_eq_pane_t

0x2b70,	// (0x00011c86) mup_equalizer_pane_cp5_ParamLimits

0x2b84,	// (0x00011c9a) mup_equalizer_pane_cp6_ParamLimits

0x2b98,	// (0x00011cae) mup_equalizer_pane_cp7_ParamLimits

0x93ca,	// (0x000184e0) main_gallery_pane

0xbe97,	// (0x0001afad) smil2_volume_pane

0xbe9f,	// (0x0001afb5) smil_status_volume_pane_g1_ParamLimits

0xbeb2,	// (0x0001afc8) smil_status_volume_pane_g2_ParamLimits

0xbec5,	// (0x0001afdb) smil_status_volume_pane_g3_ParamLimits

0xf61e,	// (0x0001e734) smil_status_volume_pane_g_ParamLimits

0xc0c3,	// (0x0001b1d9) bg_popup_window_pane_cp07_ParamLimits

0xc0d1,	// (0x0001b1e7) blid_firmament_pane

0x42c3,	// (0x000133d9) aid_size_cell_gallery_ParamLimits

0x42c3,	// (0x000133d9) aid_size_cell_gallery

0x42d9,	// (0x000133ef) grid_gallery_pane_ParamLimits

0x42d9,	// (0x000133ef) grid_gallery_pane

0x42f2,	// (0x00013408) cell_gallery_pane_ParamLimits

0x42f2,	// (0x00013408) cell_gallery_pane

0xc1f4,	// (0x0001b30a) bg_cell_gallery_focus_pane_ParamLimits

0xc1f4,	// (0x0001b30a) bg_cell_gallery_focus_pane

0xc206,	// (0x0001b31c) cell_gallery_pane_g1_ParamLimits

0xc206,	// (0x0001b31c) cell_gallery_pane_g1

0x433b,	// (0x00013451) cell_gallery_pane_g2_ParamLimits

0x433b,	// (0x00013451) cell_gallery_pane_g2

0x4348,	// (0x0001345e) cell_gallery_pane_g3_ParamLimits

0x4348,	// (0x0001345e) cell_gallery_pane_g3

0xc212,	// (0x0001b328) cell_gallery_pane_g4_ParamLimits

0xc212,	// (0x0001b328) cell_gallery_pane_g4

0x0003,

0xf6cc,	// (0x0001e7e2) cell_gallery_pane_g_ParamLimits

0xf6cc,	// (0x0001e7e2) cell_gallery_pane_g

0xc21e,	// (0x0001b334) bg_cell_gallery_focus_pane_g1

0xc226,	// (0x0001b33c) bg_cell_gallery_focus_pane_g2

0xc22e,	// (0x0001b344) bg_cell_gallery_focus_pane_g3

0xc236,	// (0x0001b34c) bg_cell_gallery_focus_pane_g4

0xc23e,	// (0x0001b354) bg_cell_gallery_focus_pane_g5

0xc246,	// (0x0001b35c) bg_cell_gallery_focus_pane_g6

0xc24e,	// (0x0001b364) bg_cell_gallery_focus_pane_g7

0xc256,	// (0x0001b36c) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6d5,	// (0x0001e7eb) bg_cell_gallery_focus_pane_g

0xc25e,	// (0x0001b374) aid_firma_cardinal

0xc272,	// (0x0001b388) blid_firmament_pane_t1

0xc289,	// (0x0001b39f) blid_firmament_pane_t2

0xc2a0,	// (0x0001b3b6) blid_firmament_pane_t3

0xc2b7,	// (0x0001b3cd) blid_firmament_pane_t4

0x0003,

0xf6e6,	// (0x0001e7fc) blid_firmament_pane_t

0xc2ce,	// (0x0001b3e4) blid_sat_info_pane

0xc2de,	// (0x0001b3f4) blid_sat_info_pane_g1

0xc2de,	// (0x0001b3f4) blid_sat_info_pane_g2

0x0001,

0xf6ef,	// (0x0001e805) blid_sat_info_pane_g

0xc2e8,	// (0x0001b3fe) blid_sat_info_pane_t1

0xc2f6,	// (0x0001b40c) smil2_volume_content_pane

0xc2ff,	// (0x0001b415) smil2_volume_pane_g1

0xc307,	// (0x0001b41d) smil2_volume_content_pane_g1

0xc310,	// (0x0001b426) smil2_volume_content_pane_g2

0xc319,	// (0x0001b42f) smil2_volume_content_pane_g3

0xc322,	// (0x0001b438) smil2_volume_content_pane_g4

0xc32b,	// (0x0001b441) smil2_volume_content_pane_g5

0xc334,	// (0x0001b44a) smil2_volume_content_pane_g6

0xc33d,	// (0x0001b453) smil2_volume_content_pane_g7

0xc346,	// (0x0001b45c) smil2_volume_content_pane_g8

0xc34f,	// (0x0001b465) smil2_volume_content_pane_g9

0xc358,	// (0x0001b46e) smil2_volume_content_pane_g10

0x0009,

0xf6f4,	// (0x0001e80a) smil2_volume_content_pane_g

0x0b0b,	// (0x0000fc21) cale_week_day_heading_pane_t1_ParamLimits

0x0b55,	// (0x0000fc6b) cale_week_day_heading_pane_t2_ParamLimits

0x0ba4,	// (0x0000fcba) cale_week_day_heading_pane_t3_ParamLimits

0x0bf3,	// (0x0000fd09) cale_week_day_heading_pane_t4_ParamLimits

0x0c42,	// (0x0000fd58) cale_week_day_heading_pane_t5_ParamLimits

0x0c99,	// (0x0000fdaf) cale_week_day_heading_pane_t6_ParamLimits

0x0cf0,	// (0x0000fe06) cale_week_day_heading_pane_t7_ParamLimits

0xf1d1,	// (0x0001e2e7) cale_week_day_heading_pane_t_ParamLimits

0x9dc7,	// (0x00018edd) bg_cale_side_pane_ParamLimits

0x0d3a,	// (0x0000fe50) cale_week_time_pane_t1_ParamLimits

0x0d54,	// (0x0000fe6a) cale_week_time_pane_t2_ParamLimits

0x0d6e,	// (0x0000fe84) cale_week_time_pane_t3_ParamLimits

0x0d88,	// (0x0000fe9e) cale_week_time_pane_t4_ParamLimits

0x0da2,	// (0x0000feb8) cale_week_time_pane_t5_ParamLimits

0x0dbc,	// (0x0000fed2) cale_week_time_pane_t6_ParamLimits

0x0dd6,	// (0x0000feec) cale_week_time_pane_t7_ParamLimits

0x0df0,	// (0x0000ff06) cale_week_time_pane_t8_ParamLimits

0xf1e0,	// (0x0001e2f6) cale_week_time_pane_t_ParamLimits

0x0e10,	// (0x0000ff26) cell_cale_week_pane_g2_ParamLimits

0x9dc7,	// (0x00018edd) bg_cale_side_pane_cp01_ParamLimits

0x20bb,	// (0x000111d1) cale_month_week_pane_t1_ParamLimits

0x20d4,	// (0x000111ea) cale_month_week_pane_t2_ParamLimits

0x20ed,	// (0x00011203) cale_month_week_pane_t3_ParamLimits

0x2106,	// (0x0001121c) cale_month_week_pane_t4_ParamLimits

0x211f,	// (0x00011235) cale_month_week_pane_t5_ParamLimits

0x2138,	// (0x0001124e) cale_month_week_pane_t6_ParamLimits

0xf2b5,	// (0x0001e3cb) cale_month_week_pane_t_ParamLimits

0xa170,	// (0x00019286) cell_cale_month_pane_g1_ParamLimits

0x93ca,	// (0x000184e0) main_cale_event_viewer_pane

0x93ca,	// (0x000184e0) listscroll_cale_event_viewer_pane

0xc361,	// (0x0001b477) list_cale_ev_pane

0xc369,	// (0x0001b47f) scroll_pane_cp023

0xc375,	// (0x0001b48b) field_cale_ev_pane_ParamLimits

0xc375,	// (0x0001b48b) field_cale_ev_pane

0xc393,	// (0x0001b4a9) field_cale_ev_content_pane_ParamLimits

0xc393,	// (0x0001b4a9) field_cale_ev_content_pane

0xc39f,	// (0x0001b4b5) field_cale_ev_pane_g1_ParamLimits

0xc39f,	// (0x0001b4b5) field_cale_ev_pane_g1

0xc3ab,	// (0x0001b4c1) field_cale_ev_pane_g2_ParamLimits

0xc3ab,	// (0x0001b4c1) field_cale_ev_pane_g2

0xc3c3,	// (0x0001b4d9) field_cale_ev_pane_g3_ParamLimits

0xc3c3,	// (0x0001b4d9) field_cale_ev_pane_g3

0x0002,

0xf709,	// (0x0001e81f) field_cale_ev_pane_g_ParamLimits

0xf709,	// (0x0001e81f) field_cale_ev_pane_g

0xc3db,	// (0x0001b4f1) field_cale_ev_pane_t1_ParamLimits

0xc3db,	// (0x0001b4f1) field_cale_ev_pane_t1

0x9ce4,	// (0x00018dfa) field_cale_ev_content_pane_t1_ParamLimits

0x9ce4,	// (0x00018dfa) field_cale_ev_content_pane_t1

0xaa9f,	// (0x00019bb5) bg_button_pane_cp01

0x0838,	// (0x0000f94e) listscroll_cale_week_pane_ParamLimits

0x9d72,	// (0x00018e88) popup_toolbar_window_cp01

0x9d98,	// (0x00018eae) listscroll_cale_week_pane_t1_ParamLimits

0x0838,	// (0x0000f94e) listscroll_cale_day_pane_ParamLimits

0x9d72,	// (0x00018e88) popup_toolbar_window_cp02

0xa20c,	// (0x00019322) listscroll_cale_day_pane_t1_ParamLimits

0x0838,	// (0x0000f94e) main_cale_month_pane_ParamLimits

0xbe10,	// (0x0001af26) popup_toolbar_window_cp03_ParamLimits

0xbe10,	// (0x0001af26) popup_toolbar_window_cp03

0x2f18,	// (0x0001202e) main_image_pane_g2_ParamLimits

0x2f18,	// (0x0001202e) main_image_pane_g2

0x2f29,	// (0x0001203f) main_image_pane_g3_ParamLimits

0x2f29,	// (0x0001203f) main_image_pane_g3

0x0002,

0xf4e7,	// (0x0001e5fd) main_image_pane_g_ParamLimits

0xf4e7,	// (0x0001e5fd) main_image_pane_g

0xabfb,	// (0x00019d11) main_image_pane_t1_ParamLimits

0x2f3a,	// (0x00012050) main_image_pane_t2_ParamLimits

0x2f3a,	// (0x00012050) main_image_pane_t2

0x2f4c,	// (0x00012062) main_image_pane_t3_ParamLimits

0x2f4c,	// (0x00012062) main_image_pane_t3

0x2f74,	// (0x0001208a) main_image_pane_t4_ParamLimits

0x2f74,	// (0x0001208a) main_image_pane_t4

0x0003,

0xf4ee,	// (0x0001e604) main_image_pane_t_ParamLimits

0xf4ee,	// (0x0001e604) main_image_pane_t

0x2f94,	// (0x000120aa) popup_image_details_window_cp01

0x2f9e,	// (0x000120b4) popup_toobar_trans_pane_cp01_ParamLimits

0x2f9e,	// (0x000120b4) popup_toobar_trans_pane_cp01

0x3711,	// (0x00012827) popup_image_details_window_ParamLimits

0x3711,	// (0x00012827) popup_image_details_window

0xbde3,	// (0x0001aef9) popup_image_focus_window

0x3b30,	// (0x00012c46) camera2_autofocus_pane_ParamLimits

0x3b30,	// (0x00012c46) camera2_autofocus_pane

0x93ca,	// (0x000184e0) bg_popup_sub_pane_cp06

0xc3f2,	// (0x0001b508) popup_image_focus_window_g1

0xc3fa,	// (0x0001b510) popup_image_focus_window_g2

0xc402,	// (0x0001b518) popup_image_focus_window_g3

0xc40a,	// (0x0001b520) popup_image_focus_window_g4

0x0003,

0xf710,	// (0x0001e826) popup_image_focus_window_g

0xc412,	// (0x0001b528) popup_image_focus_window_t1

0xc420,	// (0x0001b536) popup_image_focus_window_t2

0xc430,	// (0x0001b546) popup_image_focus_window_t3

0x0002,

0xf719,	// (0x0001e82f) popup_image_focus_window_t

0xc43e,	// (0x0001b554) camera2_autofocus_pane_g1

0x943a,	// (0x00018550) bg_tb_trans_pane_cp01

0xc44c,	// (0x0001b562) popup_image_details_window_g1

0xc45f,	// (0x0001b575) popup_image_details_window_g2

0x0002,

0xf72b,	// (0x0001e841) popup_image_details_window_g

0xc488,	// (0x0001b59e) popup_image_details_window_t1

0xc49a,	// (0x0001b5b0) popup_image_details_window_t2

0xc4b3,	// (0x0001b5c9) popup_image_details_window_t3

0xc4c7,	// (0x0001b5dd) popup_image_details_window_t4

0xc4e2,	// (0x0001b5f8) popup_image_details_window_t5

0x0004,

0xf732,	// (0x0001e848) popup_image_details_window_t

0x9b7b,	// (0x00018c91) bg_calc_paper_pane_ParamLimits

0x93ca,	// (0x000184e0) grid_highlight_pane_cp013

0x9b8f,	// (0x00018ca5) list_calc_pane_ParamLimits

0x9ba1,	// (0x00018cb7) scroll_pane_cp024

0x9ba9,	// (0x00018cbf) bg_calc_display_pane_ParamLimits

0x06aa,	// (0x0000f7c0) calc_display_pane_t1_ParamLimits

0x06bc,	// (0x0000f7d2) calc_display_pane_t2_ParamLimits

0x9bb5,	// (0x00018ccb) calc_display_pane_t3_ParamLimits

0xf151,	// (0x0001e267) calc_display_pane_t_ParamLimits

0x077c,	// (0x0000f892) cell_calc_pane_g2

0x0001,

0xf16e,	// (0x0001e284) cell_calc_pane_g

0x0785,	// (0x0000f89b) cell_calc_pane_t1

0x9c2c,	// (0x00018d42) grid_highlight_pane_cp02_ParamLimits

0x9c42,	// (0x00018d58) toolbar_button_pane_cp01_ParamLimits

0x9c42,	// (0x00018d58) toolbar_button_pane_cp01

0xac40,	// (0x00019d56) temp_image_control_pane_ParamLimits

0xac40,	// (0x00019d56) temp_image_control_pane

0x943a,	// (0x00018550) main_mp3_pane

0xc4fc,	// (0x0001b612) temp_image_control_pane_g1_ParamLimits

0xc4fc,	// (0x0001b612) temp_image_control_pane_g1

0xc50a,	// (0x0001b620) temp_image_control_pane_g2_ParamLimits

0xc50a,	// (0x0001b620) temp_image_control_pane_g2

0xc51c,	// (0x0001b632) temp_image_control_pane_g3_ParamLimits

0xc51c,	// (0x0001b632) temp_image_control_pane_g3

0x4385,	// (0x0001349b) temp_image_control_pane_g4_ParamLimits

0x4385,	// (0x0001349b) temp_image_control_pane_g4

0x0003,

0xf73d,	// (0x0001e853) temp_image_control_pane_g_ParamLimits

0xf73d,	// (0x0001e853) temp_image_control_pane_g

0xc4fc,	// (0x0001b612) main_mp3_pane_g1

0x4398,	// (0x000134ae) main_mp3_pane_g2

0x0007,

0xf746,	// (0x0001e85c) main_mp3_pane_g

0xc55f,	// (0x0001b675) main_mp3_pane_t1

0x9e34,	// (0x00018f4a) main_camera_pane_g8_ParamLimits

0x9e34,	// (0x00018f4a) main_camera_pane_g8

0x1114,	// (0x0001022a) main_video_pane_g7_ParamLimits

0x1114,	// (0x0001022a) main_video_pane_g7

0xbf05,	// (0x0001b01b) main_camera2_pane_t7_ParamLimits

0xbf05,	// (0x0001b01b) main_camera2_pane_t7

0x9f7c,	// (0x00019092) scroll_pane_cp025_ParamLimits

0x9f7c,	// (0x00019092) scroll_pane_cp025

0x9f90,	// (0x000190a6) scroll_pane_cp026_ParamLimits

0x9f90,	// (0x000190a6) scroll_pane_cp026

0x9f9f,	// (0x000190b5) wml_content_pane_ParamLimits

0x93ca,	// (0x000184e0) main_touch_calib_pane

0x446c,	// (0x00013582) main_touch_calib_pane_g1

0x447e,	// (0x00013594) main_touch_calib_pane_g2

0x4490,	// (0x000135a6) main_touch_calib_pane_g3

0x44a2,	// (0x000135b8) main_touch_calib_pane_g4

0x0003,

0xf764,	// (0x0001e87a) main_touch_calib_pane_g

0x44b4,	// (0x000135ca) main_touch_calib_pane_t1

0x44ce,	// (0x000135e4) main_touch_calib_pane_t2

0x0004,

0xf76d,	// (0x0001e883) main_touch_calib_pane_t

0xa7b9,	// (0x000198cf) mup_progress_pane_cp02

0xa7ee,	// (0x00019904) navi_pane_g1

0xa8a9,	// (0x000199bf) navi_pane_mp_t3

0x943a,	// (0x00018550) main_mp3_pane_ParamLimits

0x389c,	// (0x000129b2) navi_pane_ParamLimits

0xc4fc,	// (0x0001b612) main_mp3_pane_g1_ParamLimits

0x4398,	// (0x000134ae) main_mp3_pane_g2_ParamLimits

0x43a6,	// (0x000134bc) main_mp3_pane_g3_ParamLimits

0x43a6,	// (0x000134bc) main_mp3_pane_g3

0x43b4,	// (0x000134ca) main_mp3_pane_g4_ParamLimits

0x43b4,	// (0x000134ca) main_mp3_pane_g4

0xc52c,	// (0x0001b642) main_mp3_pane_g5_ParamLimits

0xc52c,	// (0x0001b642) main_mp3_pane_g5

0xc53a,	// (0x0001b650) main_mp3_pane_g6_ParamLimits

0xc53a,	// (0x0001b650) main_mp3_pane_g6

0xc547,	// (0x0001b65d) main_mp3_pane_g7_ParamLimits

0xc547,	// (0x0001b65d) main_mp3_pane_g7

0xc553,	// (0x0001b669) main_mp3_pane_g8_ParamLimits

0xc553,	// (0x0001b669) main_mp3_pane_g8

0xf746,	// (0x0001e85c) main_mp3_pane_g_ParamLimits

0x43c0,	// (0x000134d6) main_mp3_pane_t2

0x43ce,	// (0x000134e4) main_mp3_pane_t3

0xc56d,	// (0x0001b683) main_mp3_pane_t4

0xc57b,	// (0x0001b691) main_mp3_pane_t5

0x0005,

0xf757,	// (0x0001e86d) main_mp3_pane_t

0xc589,	// (0x0001b69f) mup_progress_pane_cp01

0x93e8,	// (0x000184fe) aid_zoom_text_secondary2

0xc361,	// (0x0001b477) list_cale_ev2_pane

0xc369,	// (0x0001b47f) scroll_pane_cp023_ParamLimits

0x4524,	// (0x0001363a) field_cale_ev2_pane_ParamLimits

0x4524,	// (0x0001363a) field_cale_ev2_pane

0xc591,	// (0x0001b6a7) field_cale_ev2_pane_g1_ParamLimits

0xc591,	// (0x0001b6a7) field_cale_ev2_pane_g1

0xc59d,	// (0x0001b6b3) field_cale_ev2_pane_g2_ParamLimits

0xc59d,	// (0x0001b6b3) field_cale_ev2_pane_g2

0xc5b5,	// (0x0001b6cb) field_cale_ev2_pane_g3_ParamLimits

0xc5b5,	// (0x0001b6cb) field_cale_ev2_pane_g3

0x0003,

0xf778,	// (0x0001e88e) field_cale_ev2_pane_g_ParamLimits

0xf778,	// (0x0001e88e) field_cale_ev2_pane_g

0xc5d9,	// (0x0001b6ef) field_cale_ev2_pane_t1_ParamLimits

0xc5d9,	// (0x0001b6ef) field_cale_ev2_pane_t1

0xc5f0,	// (0x0001b706) field_cale_ev2_pane_t2_ParamLimits

0xc5f0,	// (0x0001b706) field_cale_ev2_pane_t2

0x0001,

0xf781,	// (0x0001e897) field_cale_ev2_pane_t_ParamLimits

0xf781,	// (0x0001e897) field_cale_ev2_pane_t

0x2dcc,	// (0x00011ee2) main_postcard_pane_g5_ParamLimits

0x2dcc,	// (0x00011ee2) main_postcard_pane_g5

0x2de2,	// (0x00011ef8) main_postcard_pane_g6_ParamLimits

0x2de2,	// (0x00011ef8) main_postcard_pane_g6

0x0eda,	// (0x0000fff0) camera2_autofocus_pane_cp_ParamLimits

0x0eda,	// (0x0000fff0) camera2_autofocus_pane_cp

0x943a,	// (0x00018550) main_mup3_pane

0x4565,	// (0x0001367b) main_mup3_pane_g1_ParamLimits

0x4565,	// (0x0001367b) main_mup3_pane_g1

0x4587,	// (0x0001369d) main_mup3_pane_g2_ParamLimits

0x4587,	// (0x0001369d) main_mup3_pane_g2

0x4607,	// (0x0001371d) main_mup3_pane_g3_ParamLimits

0x4607,	// (0x0001371d) main_mup3_pane_g3

0x464d,	// (0x00013763) main_mup3_pane_g4_ParamLimits

0x464d,	// (0x00013763) main_mup3_pane_g4

0x4693,	// (0x000137a9) main_mup3_pane_g5_ParamLimits

0x4693,	// (0x000137a9) main_mup3_pane_g5

0x46d9,	// (0x000137ef) main_mup3_pane_g6_ParamLimits

0x46d9,	// (0x000137ef) main_mup3_pane_g6

0xc605,	// (0x0001b71b) main_mup3_pane_g7_ParamLimits

0xc605,	// (0x0001b71b) main_mup3_pane_g7

0x0007,

0xf791,	// (0x0001e8a7) main_mup3_pane_g_ParamLimits

0xf791,	// (0x0001e8a7) main_mup3_pane_g

0x4757,	// (0x0001386d) main_mup3_pane_t1_ParamLimits

0x4757,	// (0x0001386d) main_mup3_pane_t1

0x47cb,	// (0x000138e1) main_mup3_pane_t2_ParamLimits

0x47cb,	// (0x000138e1) main_mup3_pane_t2

0x489f,	// (0x000139b5) main_mup3_pane_t4_ParamLimits

0x489f,	// (0x000139b5) main_mup3_pane_t4

0x48f5,	// (0x00013a0b) main_mup3_pane_t5_ParamLimits

0x48f5,	// (0x00013a0b) main_mup3_pane_t5

0x49b1,	// (0x00013ac7) main_mup3_pane_t6_ParamLimits

0x49b1,	// (0x00013ac7) main_mup3_pane_t6

0x0005,

0xf7a2,	// (0x0001e8b8) main_mup3_pane_t_ParamLimits

0xf7a2,	// (0x0001e8b8) main_mup3_pane_t

0x4a69,	// (0x00013b7f) mup3_progress_pane_ParamLimits

0x4a69,	// (0x00013b7f) mup3_progress_pane

0x4af5,	// (0x00013c0b) popup_mup3_control_window_ParamLimits

0x4af5,	// (0x00013c0b) popup_mup3_control_window

0xc613,	// (0x0001b729) popup_mup3_text_window

0x4b27,	// (0x00013c3d) mup3_progress_pane_t1

0x4b46,	// (0x00013c5c) mup3_progress_pane_t2

0xc61b,	// (0x0001b731) mup3_progress_pane_t3

0x0002,

0xf7af,	// (0x0001e8c5) mup3_progress_pane_t

0xc638,	// (0x0001b74e) mup_progress_pane_cp03

0x93ca,	// (0x000184e0) bg_tb_trans_pane_cp04

0x4b65,	// (0x00013c7b) mup3_volume_pane

0x4b6d,	// (0x00013c83) popup_mup3_control_window_g1

0x4b76,	// (0x00013c8c) mup3_volume_pane_g1

0x4b7f,	// (0x00013c95) mup3_volume_pane_g2

0x4b88,	// (0x00013c9e) mup3_volume_pane_g3

0x0002,

0xf7b6,	// (0x0001e8cc) mup3_volume_pane_g

0x93ca,	// (0x000184e0) bg_tb_trans_pane_cp03

0xc648,	// (0x0001b75e) popup_mup3_text_window_g1

0xc650,	// (0x0001b766) popup_mup3_text_window_t1

0x9c03,	// (0x00018d19) list_calc_item_pane_g1_ParamLimits

0xbfed,	// (0x0001b103) mup_volume_pane_cp_g1

0x44e8,	// (0x000135fe) main_touch_calib_pane_t3

0x44fc,	// (0x00013612) main_touch_calib_pane_t4

0x4510,	// (0x00013626) main_touch_calib_pane_t5

0x93d4,	// (0x000184ea) aid_cell_size_toolbar2

0x93dc,	// (0x000184f2) aid_popup3_width_pane

0x93e8,	// (0x000184fe) aid_zoom_text_msg_primary

0x0eb9,	// (0x0000ffcf) vorec_t7

0x9bc7,	// (0x00018cdd) bg_calc_paper_pane_g1_ParamLimits

0x9bd3,	// (0x00018ce9) bg_calc_paper_pane_g2_ParamLimits

0x9bdf,	// (0x00018cf5) bg_calc_paper_pane_g3_ParamLimits

0x9beb,	// (0x00018d01) bg_calc_paper_pane_g4_ParamLimits

0x9bf7,	// (0x00018d0d) bg_calc_paper_pane_g5_ParamLimits

0x0705,	// (0x0000f81b) bg_calc_paper_pane_g6_ParamLimits

0x0714,	// (0x0000f82a) bg_calc_paper_pane_g7_ParamLimits

0x0723,	// (0x0000f839) bg_calc_paper_pane_g8_ParamLimits

0xf158,	// (0x0001e26e) bg_calc_paper_pane_g_ParamLimits

0x0736,	// (0x0000f84c) calc_bg_paper_pane_g9_ParamLimits

0x1026,	// (0x0001013c) image_qvga_pane_ParamLimits

0x1026,	// (0x0001013c) image_qvga_pane

0x9ab6,	// (0x00018bcc) bg_popup_sub_pane_cp04_ParamLimits

0xab77,	// (0x00019c8d) popup_mup_playback_window_g1_ParamLimits

0xab83,	// (0x00019c99) popup_mup_playback_window_t1_ParamLimits

0xab98,	// (0x00019cae) popup_mup_playback_window_t2_ParamLimits

0xf4e2,	// (0x0001e5f8) popup_mup_playback_window_t_ParamLimits

0x4027,	// (0x0001313d) main_mup2_pane_g3_ParamLimits

0x4027,	// (0x0001313d) main_mup2_pane_g3

0x1433,	// (0x00010549) popup_toolbar_window_cp04

0xaf8d,	// (0x0001a0a3) popup_call2_audio_second_window_g3_ParamLimits

0xaf8d,	// (0x0001a0a3) popup_call2_audio_second_window_g3

0xb397,	// (0x0001a4ad) popup_call2_audio_first_window_g4_ParamLimits

0xb397,	// (0x0001a4ad) popup_call2_audio_first_window_g4

0xba16,	// (0x0001ab2c) popup_call2_audio_in_window_g4_ParamLimits

0xba16,	// (0x0001ab2c) popup_call2_audio_in_window_g4

0x2efa,	// (0x00012010) aid_area_sk_bg_cut_ParamLimits

0x2efa,	// (0x00012010) aid_area_sk_bg_cut

0xabad,	// (0x00019cc3) aid_area_sk_bg_cut_2_ParamLimits

0xabad,	// (0x00019cc3) aid_area_sk_bg_cut_2

0x432b,	// (0x00013441) aid_placing_details_win

0x4333,	// (0x00013449) aid_placing_details_win_2

0xc43e,	// (0x0001b554) camera2_autofocus_pane_g1_ParamLimits

0x02f7,	// (0x0000f40d) popup_fixed_preview_cale_window_ParamLimits

0x02f7,	// (0x0000f40d) popup_fixed_preview_cale_window

0xa930,	// (0x00019a46) navi_slider_pane_g3

0xa939,	// (0x00019a4f) navi_slider_pane_g4

0xa942,	// (0x00019a58) navi_slider_pane_g5

0xa930,	// (0x00019a46) navi_slider_pane_g6

0xa94b,	// (0x00019a61) navi_slider_pane_g7

0xaa6c,	// (0x00019b82) mup_scale_pane_g3

0xaa75,	// (0x00019b8b) mup_scale_pane_g4

0xaa7e,	// (0x00019b94) mup_scale_pane_g5

0x2bac,	// (0x00011cc2) mup_scale_pane_g6

0x2bb5,	// (0x00011ccb) mup_scale_pane_g7

0xa930,	// (0x00019a46) cams2_slider_pane_g3

0xc0a2,	// (0x0001b1b8) cams2_slider_pane_g4

0xc0aa,	// (0x0001b1c0) cams2_slider_pane_g5

0xa930,	// (0x00019a46) cams2_slider_pane_g6

0xc0b2,	// (0x0001b1c8) cams2_slider_pane_g7

0xc2de,	// (0x0001b3f4) camera2_autofocus_pane_cp_g1

0xbdb7,	// (0x0001aecd) bg_popup_preview_window_pane_cp02_ParamLimits

0xbdb7,	// (0x0001aecd) bg_popup_preview_window_pane_cp02

0xc65e,	// (0x0001b774) list_fp_cale_pane_ParamLimits

0xc65e,	// (0x0001b774) list_fp_cale_pane

0xc66a,	// (0x0001b780) popup_fixed_preview_cale_window_t1_ParamLimits

0xc66a,	// (0x0001b780) popup_fixed_preview_cale_window_t1

0x4b91,	// (0x00013ca7) popup_fixed_preview_cale_window_t2_ParamLimits

0x4b91,	// (0x00013ca7) popup_fixed_preview_cale_window_t2

0x4ba6,	// (0x00013cbc) popup_fixed_preview_cale_window_t3_ParamLimits

0x4ba6,	// (0x00013cbc) popup_fixed_preview_cale_window_t3

0x0002,

0xf7bd,	// (0x0001e8d3) popup_fixed_preview_cale_window_t_ParamLimits

0xf7bd,	// (0x0001e8d3) popup_fixed_preview_cale_window_t

0x4bbb,	// (0x00013cd1) list_single_fp_cale_pane_ParamLimits

0x4bbb,	// (0x00013cd1) list_single_fp_cale_pane

0xc688,	// (0x0001b79e) list_single_fp_cale_pane_g1_ParamLimits

0xc688,	// (0x0001b79e) list_single_fp_cale_pane_g1

0xc694,	// (0x0001b7aa) list_single_fp_cale_pane_g2_ParamLimits

0xc694,	// (0x0001b7aa) list_single_fp_cale_pane_g2

0x0002,

0xf7c4,	// (0x0001e8da) list_single_fp_cale_pane_g_ParamLimits

0xf7c4,	// (0x0001e8da) list_single_fp_cale_pane_g

0xc6ad,	// (0x0001b7c3) list_single_fp_cale_pane_t1_ParamLimits

0xc6ad,	// (0x0001b7c3) list_single_fp_cale_pane_t1

0xc6bf,	// (0x0001b7d5) list_single_fp_cale_pane_t2_ParamLimits

0xc6bf,	// (0x0001b7d5) list_single_fp_cale_pane_t2

0x0001,

0xf7cb,	// (0x0001e8e1) list_single_fp_cale_pane_t_ParamLimits

0xf7cb,	// (0x0001e8e1) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x93ca,	// (0x000184e0) main_dialer_pane

0x4bd1,	// (0x00013ce7) aid_cell_size_keypad

0x4bdb,	// (0x00013cf1) dialer_ne_pane

0x4be3,	// (0x00013cf9) grid_dialer_command_1_pane

0x4beb,	// (0x00013d01) grid_dialer_command_2_pane

0x4bf3,	// (0x00013d09) grid_dialer_keypad_pane

0x4c05,	// (0x00013d1b) bg_popup_call_pane_cp06_ParamLimits

0x4c05,	// (0x00013d1b) bg_popup_call_pane_cp06

0x4c11,	// (0x00013d27) dialer_ne_clear_pane_ParamLimits

0x4c11,	// (0x00013d27) dialer_ne_clear_pane

0xc6f2,	// (0x0001b808) dialer_ne_pane_g1

0xc6fa,	// (0x0001b810) dialer_ne_pane_t1_ParamLimits

0xc6fa,	// (0x0001b810) dialer_ne_pane_t1

0x4c1d,	// (0x00013d33) dialer_ne_pane_t2_ParamLimits

0x4c1d,	// (0x00013d33) dialer_ne_pane_t2

0x4c47,	// (0x00013d5d) dialer_ne_pane_t3_ParamLimits

0x4c47,	// (0x00013d5d) dialer_ne_pane_t3

0x0002,

0xf7d0,	// (0x0001e8e6) dialer_ne_pane_t_ParamLimits

0xf7d0,	// (0x0001e8e6) dialer_ne_pane_t

0x4c77,	// (0x00013d8d) dialer_ne_pane_t3_copy1_ParamLimits

0x4c77,	// (0x00013d8d) dialer_ne_pane_t3_copy1

0x4ca6,	// (0x00013dbc) cell_dialer_keypad_pane_ParamLimits

0x4ca6,	// (0x00013dbc) cell_dialer_keypad_pane

0x4cbd,	// (0x00013dd3) cell_dialer_command_1_pane_ParamLimits

0x4cbd,	// (0x00013dd3) cell_dialer_command_1_pane

0x4cd3,	// (0x00013de9) cell_dialer_command_2_pane_ParamLimits

0x4cd3,	// (0x00013de9) cell_dialer_command_2_pane

0xc70c,	// (0x0001b822) bg_button_pane_cp02_ParamLimits

0xc70c,	// (0x0001b822) bg_button_pane_cp02

0x4ce2,	// (0x00013df8) cell_dialer_keypad_pane_g1_ParamLimits

0x4ce2,	// (0x00013df8) cell_dialer_keypad_pane_g1

0xc70c,	// (0x0001b822) bg_button_pane_cp03_ParamLimits

0xc70c,	// (0x0001b822) bg_button_pane_cp03

0x4cf6,	// (0x00013e0c) cell_dialer_command_1_pane_g1_ParamLimits

0x4cf6,	// (0x00013e0c) cell_dialer_command_1_pane_g1

0xc718,	// (0x0001b82e) bg_button_pane_cp04

0x4d0a,	// (0x00013e20) cell_dialer_command_2_pane_g1

0x9e22,	// (0x00018f38) bg_button_pane_cp06

0xc720,	// (0x0001b836) dialer_ne_clear_pane_g1

0xa7fa,	// (0x00019910) navi_pane_g2

0xa828,	// (0x0001993e) navi_pane_g3

0x0002,

0xf3e5,	// (0x0001e4fb) navi_pane_g

0xa8b7,	// (0x000199cd) navi_pane_mv_g2

0xa8de,	// (0x000199f4) navi_pane_mv_g5

0x277a,	// (0x00011890) navi_pane_mv_t1

0x9ba9,	// (0x00018cbf) main_clock2_pane

0x4d55,	// (0x00013e6b) main_clock2_list_pane_ParamLimits

0x4d55,	// (0x00013e6b) main_clock2_list_pane

0x4d8d,	// (0x00013ea3) main_clock2_pane_t1_ParamLimits

0x4d8d,	// (0x00013ea3) main_clock2_pane_t1

0x4dcb,	// (0x00013ee1) main_clock2_pane_t2_ParamLimits

0x4dcb,	// (0x00013ee1) main_clock2_pane_t2

0x0004,

0xf7dc,	// (0x0001e8f2) main_clock2_pane_t_ParamLimits

0xf7dc,	// (0x0001e8f2) main_clock2_pane_t

0x4e69,	// (0x00013f7f) popup_clock_analogue_window_cp03_ParamLimits

0x4e69,	// (0x00013f7f) popup_clock_analogue_window_cp03

0x4e8e,	// (0x00013fa4) popup_clock_digital_window_cp02_ParamLimits

0x4e8e,	// (0x00013fa4) popup_clock_digital_window_cp02

0x4eff,	// (0x00014015) main_clock2_list_single_pane_ParamLimits

0x4eff,	// (0x00014015) main_clock2_list_single_pane

0x9e22,	// (0x00018f38) list_highlight_pane_cp05

0xc75a,	// (0x0001b870) main_clock2_list_single_pane_t1

0x1433,	// (0x00010549) popup_toolbar_window_cp04_ParamLimits

0x4355,	// (0x0001346b) camera2_autofocus_pane_g2_ParamLimits

0x4355,	// (0x0001346b) camera2_autofocus_pane_g2

0x4361,	// (0x00013477) camera2_autofocus_pane_g3_ParamLimits

0x4361,	// (0x00013477) camera2_autofocus_pane_g3

0x436d,	// (0x00013483) camera2_autofocus_pane_g4_ParamLimits

0x436d,	// (0x00013483) camera2_autofocus_pane_g4

0x4379,	// (0x0001348f) camera2_autofocus_pane_g5_ParamLimits

0x4379,	// (0x0001348f) camera2_autofocus_pane_g5

0x0004,

0xf720,	// (0x0001e836) camera2_autofocus_pane_g_ParamLimits

0xf720,	// (0x0001e836) camera2_autofocus_pane_g

0x4545,	// (0x0001365b) camera2_autofocus_pane_cp_g2

0x454d,	// (0x00013663) camera2_autofocus_pane_cp_g3

0x4555,	// (0x0001366b) camera2_autofocus_pane_cp_g4

0x455d,	// (0x00013673) camera2_autofocus_pane_cp_g5

0x0004,

0xf786,	// (0x0001e89c) camera2_autofocus_pane_cp_g

0x4bfd,	// (0x00013d13) popup_dialer_spcha_window

0x93ca,	// (0x000184e0) bg_popup_sub_pane_cp07

0xc768,	// (0x0001b87e) list_spcha_pane

0xc770,	// (0x0001b886) list_single_spcha_pane_ParamLimits

0xc770,	// (0x0001b886) list_single_spcha_pane

0x93ca,	// (0x000184e0) list_highlight_pane_cp06

0xc781,	// (0x0001b897) list_single_spcha_pane_t1

0xb7c0,	// (0x0001a8d6) popup_call2_audio_out_window_g4_ParamLimits

0xb7c0,	// (0x0001a8d6) popup_call2_audio_out_window_g4

0x93ca,	// (0x000184e0) main_imed2_pane

0xbdeb,	// (0x0001af01) popup_imed_adjust2_window

0x3729,	// (0x0001283f) popup_imed_trans_window_ParamLimits

0x3729,	// (0x0001283f) popup_imed_trans_window

0xc11c,	// (0x0001b232) popup_blid_sat_info2_window_t1

0xc12a,	// (0x0001b240) popup_blid_sat_info2_window_t2

0x000a,

0xf6b5,	// (0x0001e7cb) popup_blid_sat_info2_window_t

0x4fa9,	// (0x000140bf) aid_size_cell_colour_35

0x4fc9,	// (0x000140df) aid_size_cell_colour_112

0x4fe9,	// (0x000140ff) aid_size_cell_effect

0xbdc3,	// (0x0001aed9) bg_tb_trans_pane_cp02

0xa315,	// (0x0001942b) heading_imed_pane

0x5009,	// (0x0001411f) listscroll_imed_pane

0xc78f,	// (0x0001b8a5) heading_imed_pane_g1

0xc797,	// (0x0001b8ad) heading_imed_pane_t1

0xc7a5,	// (0x0001b8bb) grid_imed_colour_35_pane_ParamLimits

0xc7a5,	// (0x0001b8bb) grid_imed_colour_35_pane

0x5015,	// (0x0001412b) grid_imed_effect_pane

0xc7bd,	// (0x0001b8d3) list_imed_aspect_pane

0x502b,	// (0x00014141) scroll_pane_cp027_ParamLimits

0x502b,	// (0x00014141) scroll_pane_cp027

0x503c,	// (0x00014152) cell_imed_effect_pane_ParamLimits

0x503c,	// (0x00014152) cell_imed_effect_pane

0xc7c5,	// (0x0001b8db) cell_imed_colour_pane_ParamLimits

0xc7c5,	// (0x0001b8db) cell_imed_colour_pane

0xc807,	// (0x0001b91d) cell_imed_colour_pane_g1_ParamLimits

0xc807,	// (0x0001b91d) cell_imed_colour_pane_g1

0xc818,	// (0x0001b92e) hgihlgiht_grid_pane_cp016_ParamLimits

0xc818,	// (0x0001b92e) hgihlgiht_grid_pane_cp016

0x5063,	// (0x00014179) cell_imed_effect_pane_g1

0x506b,	// (0x00014181) grid_highlight_pane_cp017

0xc829,	// (0x0001b93f) list_imed_single_pane_ParamLimits

0xc829,	// (0x0001b93f) list_imed_single_pane

0x93ca,	// (0x000184e0) list_highlight_pane_cp07

0xc83e,	// (0x0001b954) list_imed_aspect_pane_comp1_t1

0xbdc3,	// (0x0001aed9) bg_tb_trans_pane_cp05

0xc860,	// (0x0001b976) popup_imed_adjust2_window_g1

0xc887,	// (0x0001b99d) popup_imed_adjust2_window_t1

0xc89f,	// (0x0001b9b5) slider_imed_adjust_pane

0xc8b3,	// (0x0001b9c9) slider_imed_adjust_pane_g1

0xc8c3,	// (0x0001b9d9) slider_imed_adjust_pane_g2

0xc8d3,	// (0x0001b9e9) slider_imed_adjust_pane_g3

0xc8e4,	// (0x0001b9fa) slider_imed_adjust_pane_g4

0x0003,

0xf7f9,	// (0x0001e90f) slider_imed_adjust_pane_g

0x5074,	// (0x0001418a) aid_size_cell_clipart2

0x5080,	// (0x00014196) grid_imed_clipart_pane

0xc8f5,	// (0x0001ba0b) scroll_pane_cp031

0x508a,	// (0x000141a0) cell_imed_clipart_pane_ParamLimits

0x508a,	// (0x000141a0) cell_imed_clipart_pane

0x50ac,	// (0x000141c2) cell_imed_clipart_pane_g1

0x93ca,	// (0x000184e0) grid_highlight_pane_cp014

0x4d6a,	// (0x00013e80) main_clock2_pane_g1_ParamLimits

0x4d6a,	// (0x00013e80) main_clock2_pane_g1

0x4eaa,	// (0x00013fc0) aid_call2_pane_cp10

0x4ebc,	// (0x00013fd2) aid_call_pane_cp10

0xa759,	// (0x0001986f) popup_clock_analogue_window_cp10_g1

0xa759,	// (0x0001986f) popup_clock_analogue_window_cp10_g2

0x4ece,	// (0x00013fe4) popup_clock_analogue_window_cp10_g3

0x4ece,	// (0x00013fe4) popup_clock_analogue_window_cp10_g4

0xa759,	// (0x0001986f) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7e7,	// (0x0001e8fd) popup_clock_analogue_window_cp10_g

0x4ee0,	// (0x00013ff6) popup_clock_analogue_window_cp10_t1

0x4f11,	// (0x00014027) clock_digital_number_pane_cp10_ParamLimits

0x4f11,	// (0x00014027) clock_digital_number_pane_cp10

0x4f29,	// (0x0001403f) clock_digital_number_pane_cp11_ParamLimits

0x4f29,	// (0x0001403f) clock_digital_number_pane_cp11

0x4f41,	// (0x00014057) clock_digital_number_pane_cp12_ParamLimits

0x4f41,	// (0x00014057) clock_digital_number_pane_cp12

0x4f59,	// (0x0001406f) clock_digital_number_pane_cp13_ParamLimits

0x4f59,	// (0x0001406f) clock_digital_number_pane_cp13

0x4f71,	// (0x00014087) clock_digital_separator_pane_cp10_ParamLimits

0x4f71,	// (0x00014087) clock_digital_separator_pane_cp10

0x4f89,	// (0x0001409f) popup_clock_digital_window_cp02_t1_ParamLimits

0x4f89,	// (0x0001409f) popup_clock_digital_window_cp02_t1

0x9aae,	// (0x00018bc4) clock_digital_number_pane_cp10_g1

0x9aae,	// (0x00018bc4) clock_digital_number_pane_cp10_g2

0x0001,

0xf802,	// (0x0001e918) clock_digital_number_pane_cp10_g

0x9aae,	// (0x00018bc4) clock_digital_separator_pane_cp10_g1

0x9aae,	// (0x00018bc4) clock_digital_separator_pane_g2_cp10

0xa8e6,	// (0x000199fc) navi_pane_vded_g4

0xa8ef,	// (0x00019a05) navi_pane_vded_g5

0xa8f8,	// (0x00019a0e) navi_pane_vded_t1

0x93ca,	// (0x000184e0) main_vded_pane

0x50b5,	// (0x000141cb) main_vded_pane_g1

0x50bf,	// (0x000141d5) main_vded_pane_g2

0x50c9,	// (0x000141df) main_vded_pane_g3

0x0002,

0xf807,	// (0x0001e91d) main_vded_pane_g

0x50d3,	// (0x000141e9) main_vded_pane_t1

0x50e1,	// (0x000141f7) main_vded_pane_t2

0x0001,

0xf80e,	// (0x0001e924) main_vded_pane_t

0x50ef,	// (0x00014205) vded_slider_pane

0x50f7,	// (0x0001420d) vded_video_pane

0xc8fd,	// (0x0001ba13) vded_video_pane_g1

0x50ff,	// (0x00014215) vded_video_pane_g2

0xc2de,	// (0x0001b3f4) vded_video_pane_g3

0x0002,

0xf813,	// (0x0001e929) vded_video_pane_g

0xc907,	// (0x0001ba1d) vded_slider_pane_g1

0xbfed,	// (0x0001b103) vded_slider_pane_g2

0xc910,	// (0x0001ba26) vded_slider_pane_g3

0xc919,	// (0x0001ba2f) vded_slider_pane_g4

0xc922,	// (0x0001ba38) vded_slider_pane_g5

0x0004,

0xf81a,	// (0x0001e930) vded_slider_pane_g

0x4add,	// (0x00013bf3) mup3_rocker_pane_ParamLimits

0x4add,	// (0x00013bf3) mup3_rocker_pane

0x5108,	// (0x0001421e) mup3_control_keys_pane_g1

0x5110,	// (0x00014226) mup3_control_keys_pane_g2

0x5118,	// (0x0001422e) mup3_control_keys_pane_g3

0x5120,	// (0x00014236) mup3_control_keys_pane_g4

0x0003,

0xf825,	// (0x0001e93b) mup3_control_keys_pane_g

0x032e,	// (0x0000f444) popup_toolbar2_fixed_window_cp01_ParamLimits

0x032e,	// (0x0000f444) popup_toolbar2_fixed_window_cp01

0x4b11,	// (0x00013c27) popup_toolbar2_fixed_window_cp02_ParamLimits

0x4b11,	// (0x00013c27) popup_toolbar2_fixed_window_cp02

0xb0ff,	// (0x0001a215) popup_call2_audio_second_window_t4_ParamLimits

0xb0ff,	// (0x0001a215) popup_call2_audio_second_window_t4

0xb62d,	// (0x0001a743) popup_call2_audio_first_window_t6_ParamLimits

0xb62d,	// (0x0001a743) popup_call2_audio_first_window_t6

0xb8c3,	// (0x0001a9d9) popup_call2_audio_out_window_t6_ParamLimits

0xb8c3,	// (0x0001a9d9) popup_call2_audio_out_window_t6

0x93ca,	// (0x000184e0) main_vitu_pane

0x5130,	// (0x00014246) aid_size_cell_itu_ParamLimits

0x5130,	// (0x00014246) aid_size_cell_itu

0x943a,	// (0x00018550) bg_popup_window_pane_cp08_ParamLimits

0x943a,	// (0x00018550) bg_popup_window_pane_cp08

0x5146,	// (0x0001425c) field_vitu_entry_pane_ParamLimits

0x5146,	// (0x0001425c) field_vitu_entry_pane

0x515e,	// (0x00014274) grid_vitu_function_pane_ParamLimits

0x515e,	// (0x00014274) grid_vitu_function_pane

0x5179,	// (0x0001428f) grid_vitu_itu_pane_ParamLimits

0x5179,	// (0x0001428f) grid_vitu_itu_pane

0x5197,	// (0x000142ad) cell_vitu_itu_pane_ParamLimits

0x5197,	// (0x000142ad) cell_vitu_itu_pane

0x51b9,	// (0x000142cf) cell_vitu_function_pane_ParamLimits

0x51b9,	// (0x000142cf) cell_vitu_function_pane

0x943a,	// (0x00018550) bg_popup_sub_pane_cp08_ParamLimits

0x943a,	// (0x00018550) bg_popup_sub_pane_cp08

0x51d2,	// (0x000142e8) field_vitu_entry_pane_t1_ParamLimits

0x51d2,	// (0x000142e8) field_vitu_entry_pane_t1

0xc943,	// (0x0001ba59) field_vitu_entry_pane_t2_ParamLimits

0xc943,	// (0x0001ba59) field_vitu_entry_pane_t2

0x0001,

0xf833,	// (0x0001e949) field_vitu_entry_pane_t_ParamLimits

0xf833,	// (0x0001e949) field_vitu_entry_pane_t

0xc960,	// (0x0001ba76) bg_button_pane_cp05_ParamLimits

0xc960,	// (0x0001ba76) bg_button_pane_cp05

0x51f1,	// (0x00014307) cell_vitu_itu_pane_g1

0x5209,	// (0x0001431f) cell_vitu_itu_pane_t1_ParamLimits

0x5209,	// (0x0001431f) cell_vitu_itu_pane_t1

0x521b,	// (0x00014331) cell_vitu_itu_pane_t2_ParamLimits

0x521b,	// (0x00014331) cell_vitu_itu_pane_t2

0x0002,

0xf838,	// (0x0001e94e) cell_vitu_itu_pane_t_ParamLimits

0xf838,	// (0x0001e94e) cell_vitu_itu_pane_t

0xc96e,	// (0x0001ba84) bg_button_pane_cp07

0x5250,	// (0x00014366) cell_vitu_function_pane_g1

0x9b49,	// (0x00018c5f) main_calc_pane_g1

0x0155,	// (0x0000f26b) aid_visual_content_pane

0x93ca,	// (0x000184e0) main_vradio_pane

0x5259,	// (0x0001436f) main_vradio_pane_g1_ParamLimits

0x5259,	// (0x0001436f) main_vradio_pane_g1

0xc978,	// (0x0001ba8e) main_vradio_pane_g2_ParamLimits

0xc978,	// (0x0001ba8e) main_vradio_pane_g2

0x0001,

0xf83f,	// (0x0001e955) main_vradio_pane_g_ParamLimits

0xf83f,	// (0x0001e955) main_vradio_pane_g

0x5272,	// (0x00014388) main_vradio_pane_t1_ParamLimits

0x5272,	// (0x00014388) main_vradio_pane_t1

0x5287,	// (0x0001439d) main_vradio_pane_t2_ParamLimits

0x5287,	// (0x0001439d) main_vradio_pane_t2

0xc985,	// (0x0001ba9b) main_vradio_pane_t3_ParamLimits

0xc985,	// (0x0001ba9b) main_vradio_pane_t3

0x0002,

0xf844,	// (0x0001e95a) main_vradio_pane_t_ParamLimits

0xf844,	// (0x0001e95a) main_vradio_pane_t

0x529c,	// (0x000143b2) vradio_rocker_control_pane_ParamLimits

0x529c,	// (0x000143b2) vradio_rocker_control_pane

0x52ae,	// (0x000143c4) vradio_station_info_pane_ParamLimits

0x52ae,	// (0x000143c4) vradio_station_info_pane

0xc999,	// (0x0001baaf) vradio_frequency_info_pane_ParamLimits

0xc999,	// (0x0001baaf) vradio_frequency_info_pane

0xc2de,	// (0x0001b3f4) vradio_station_info_pane_g1

0xc9a8,	// (0x0001babe) vradio_station_info_pane_t1_ParamLimits

0xc9a8,	// (0x0001babe) vradio_station_info_pane_t1

0xc9ca,	// (0x0001bae0) vradio_station_info_pane_t2_ParamLimits

0xc9ca,	// (0x0001bae0) vradio_station_info_pane_t2

0x0001,

0xf84b,	// (0x0001e961) vradio_station_info_pane_t_ParamLimits

0xf84b,	// (0x0001e961) vradio_station_info_pane_t

0xc9dc,	// (0x0001baf2) vradio_tuning_pane

0xc9e4,	// (0x0001bafa) vradio_rocker_control_pane_g1

0xc9ec,	// (0x0001bb02) vradio_rocker_control_pane_g2

0xc9f4,	// (0x0001bb0a) vradio_rocker_control_pane_g3

0xc9fc,	// (0x0001bb12) vradio_rocker_control_pane_g4

0xca04,	// (0x0001bb1a) vradio_rocker_control_pane_g5

0x0004,

0xf850,	// (0x0001e966) vradio_rocker_control_pane_g

0x52c0,	// (0x000143d6) vradio_frequency_info_pane_g1

0xca0c,	// (0x0001bb22) vradio_frequency_info_pane_t1_ParamLimits

0xca0c,	// (0x0001bb22) vradio_frequency_info_pane_t1

0x52ca,	// (0x000143e0) vradio_tuning_pane_g1

0x52d5,	// (0x000143eb) vradio_tuning_pane_t1

0x93f8,	// (0x0001850e) area_side_right_pane_ParamLimits

0x93f8,	// (0x0001850e) area_side_right_pane

0xbd7e,	// (0x0001ae94) status_small_pane_g1

0xbd86,	// (0x0001ae9c) status_small_pane_g2

0xbd8f,	// (0x0001aea5) status_small_pane_g3

0xbd98,	// (0x0001aeae) status_small_pane_g4

0x0003,

0xf60b,	// (0x0001e721) status_small_pane_g

0xbda1,	// (0x0001aeb7) status_small_pane_t1

0x93ca,	// (0x000184e0) main_video3_pane

0xca20,	// (0x0001bb36) cams_zoom_vslider_pane

0xca28,	// (0x0001bb3e) image3_wide_pane_ParamLimits

0xca28,	// (0x0001bb3e) image3_wide_pane

0xca42,	// (0x0001bb58) image3_wide_small_pane

0xca4e,	// (0x0001bb64) main_video3_pane_g1_ParamLimits

0xca4e,	// (0x0001bb64) main_video3_pane_g1

0xca6a,	// (0x0001bb80) main_video3_pane_g2_ParamLimits

0xca6a,	// (0x0001bb80) main_video3_pane_g2

0x0001,

0xf85b,	// (0x0001e971) main_video3_pane_g_ParamLimits

0xf85b,	// (0x0001e971) main_video3_pane_g

0xca86,	// (0x0001bb9c) main_video3_pane_t1_ParamLimits

0xca86,	// (0x0001bb9c) main_video3_pane_t1

0xcab1,	// (0x0001bbc7) main_video3_pane_t2_ParamLimits

0xcab1,	// (0x0001bbc7) main_video3_pane_t2

0xcadc,	// (0x0001bbf2) main_video3_pane_t3_ParamLimits

0xcadc,	// (0x0001bbf2) main_video3_pane_t3

0x0002,

0xf860,	// (0x0001e976) main_video3_pane_t_ParamLimits

0xf860,	// (0x0001e976) main_video3_pane_t

0xcb09,	// (0x0001bc1f) cams_zoom_vslider_pane_g1

0xcb12,	// (0x0001bc28) cams_zoom_vslider_pane_g2

0x0001,

0xf867,	// (0x0001e97d) cams_zoom_vslider_pane_g

0xcb1a,	// (0x0001bc30) small_slider_vertical_pane

0xc2de,	// (0x0001b3f4) small_slider_vertical_pane_g1

0xc2de,	// (0x0001b3f4) small_slider_vertical_pane_g2

0xcb22,	// (0x0001bc38) small_slider_vertical_pane_g3

0x0002,

0xf86c,	// (0x0001e982) small_slider_vertical_pane_g

0x93ca,	// (0x000184e0) main_hwr_training_pane

0xcb2b,	// (0x0001bc41) hwr_training_instruct_pane_ParamLimits

0xcb2b,	// (0x0001bc41) hwr_training_instruct_pane

0x52e4,	// (0x000143fa) hwr_training_navi_pane_ParamLimits

0x52e4,	// (0x000143fa) hwr_training_navi_pane

0x5303,	// (0x00014419) hwr_training_write_pane_ParamLimits

0x5303,	// (0x00014419) hwr_training_write_pane

0x93ca,	// (0x000184e0) bg_frame_shadow_pane

0xcb62,	// (0x0001bc78) hwr_training_write_pane_g1

0xcb6a,	// (0x0001bc80) hwr_training_write_pane_g2

0xcb72,	// (0x0001bc88) hwr_training_write_pane_g3

0xcb7a,	// (0x0001bc90) hwr_training_write_pane_g4

0xcb82,	// (0x0001bc98) hwr_training_write_pane_g5

0xcb8a,	// (0x0001bca0) hwr_training_write_pane_g6

0xcb92,	// (0x0001bca8) hwr_training_write_pane_g7

0x0006,

0xf873,	// (0x0001e989) hwr_training_write_pane_g

0xcb9a,	// (0x0001bcb0) hwr_training_navi_pane_g1_ParamLimits

0xcb9a,	// (0x0001bcb0) hwr_training_navi_pane_g1

0xcbac,	// (0x0001bcc2) hwr_training_navi_pane_g2_ParamLimits

0xcbac,	// (0x0001bcc2) hwr_training_navi_pane_g2

0xcbbe,	// (0x0001bcd4) hwr_training_navi_pane_g3_ParamLimits

0xcbbe,	// (0x0001bcd4) hwr_training_navi_pane_g3

0xcbce,	// (0x0001bce4) hwr_training_navi_pane_g4_ParamLimits

0xcbce,	// (0x0001bce4) hwr_training_navi_pane_g4

0x0004,

0xf882,	// (0x0001e998) hwr_training_navi_pane_g_ParamLimits

0xf882,	// (0x0001e998) hwr_training_navi_pane_g

0xcbdb,	// (0x0001bcf1) hwr_training_navi_pane_t1

0x534d,	// (0x00014463) list_single_hwr_training_instruct_pane_ParamLimits

0x534d,	// (0x00014463) list_single_hwr_training_instruct_pane

0xcbe9,	// (0x0001bcff) list_single_hwr_training_instruct_pane_t1

0xc21e,	// (0x0001b334) bg_frame_shadow_pane_g1

0xcbf8,	// (0x0001bd0e) bg_frame_shadow_pane_g2

0xcc00,	// (0x0001bd16) bg_frame_shadow_pane_g3

0xcc08,	// (0x0001bd1e) bg_frame_shadow_pane_g4

0xcc10,	// (0x0001bd26) bg_frame_shadow_pane_g5

0xcc18,	// (0x0001bd2e) bg_frame_shadow_pane_g6

0xcc20,	// (0x0001bd36) bg_frame_shadow_pane_g7

0x9ca2,	// (0x00018db8) bg_frame_shadow_pane_g8

0x0007,

0xf88d,	// (0x0001e9a3) bg_frame_shadow_pane_g

0x93ca,	// (0x000184e0) main_video_tele_dialer_pane

0x5363,	// (0x00014479) aid_size_cell_video_keypad_ParamLimits

0x5363,	// (0x00014479) aid_size_cell_video_keypad

0x537d,	// (0x00014493) grid_video_dialer_keypad_pane_ParamLimits

0x537d,	// (0x00014493) grid_video_dialer_keypad_pane

0x53cb,	// (0x000144e1) video_down_pane_cp_ParamLimits

0x53cb,	// (0x000144e1) video_down_pane_cp

0x53fd,	// (0x00014513) cell_video_dialer_keypad_pane_ParamLimits

0x53fd,	// (0x00014513) cell_video_dialer_keypad_pane

0xcc28,	// (0x0001bd3e) bg_button_pane_cp08_ParamLimits

0xcc28,	// (0x0001bd3e) bg_button_pane_cp08

0x541f,	// (0x00014535) cell_video_dialer_keypad_pane_g1_ParamLimits

0x541f,	// (0x00014535) cell_video_dialer_keypad_pane_g1

0x4ac7,	// (0x00013bdd) mup3_rocker2_pane_ParamLimits

0x4ac7,	// (0x00013bdd) mup3_rocker2_pane

0xc2de,	// (0x0001b3f4) mup3_rocker2_pane_g1

0x3618,	// (0x0001272e) main_dialer2_pane

0x93ca,	// (0x000184e0) main_mp4_pane

0xcc3c,	// (0x0001bd52) main_mp4_pane_g1_ParamLimits

0xcc3c,	// (0x0001bd52) main_mp4_pane_g1

0xcc3c,	// (0x0001bd52) main_mp4_pane_g2_ParamLimits

0xcc3c,	// (0x0001bd52) main_mp4_pane_g2

0x5459,	// (0x0001456f) main_mp4_pane_g3_ParamLimits

0x5459,	// (0x0001456f) main_mp4_pane_g3

0xcc4a,	// (0x0001bd60) main_mp4_pane_g4_ParamLimits

0xcc4a,	// (0x0001bd60) main_mp4_pane_g4

0xcc72,	// (0x0001bd88) main_mp4_pane_g5_ParamLimits

0xcc72,	// (0x0001bd88) main_mp4_pane_g5

0x0005,

0xf8ad,	// (0x0001e9c3) main_mp4_pane_g_ParamLimits

0xf8ad,	// (0x0001e9c3) main_mp4_pane_g

0xccc2,	// (0x0001bdd8) main_mp4_pane_t1_ParamLimits

0xccc2,	// (0x0001bdd8) main_mp4_pane_t1

0xcd1e,	// (0x0001be34) main_mp4_pane_t2_ParamLimits

0xcd1e,	// (0x0001be34) main_mp4_pane_t2

0xcd70,	// (0x0001be86) main_mp4_pane_t3_ParamLimits

0xcd70,	// (0x0001be86) main_mp4_pane_t3

0xcd90,	// (0x0001bea6) main_mp4_pane_t4_ParamLimits

0xcd90,	// (0x0001bea6) main_mp4_pane_t4

0x0003,

0xf8ba,	// (0x0001e9d0) main_mp4_pane_t_ParamLimits

0xf8ba,	// (0x0001e9d0) main_mp4_pane_t

0xcdd4,	// (0x0001beea) mp4_progress_pane_ParamLimits

0xcdd4,	// (0x0001beea) mp4_progress_pane

0xce1e,	// (0x0001bf34) mp4_rocker_pane_ParamLimits

0xce1e,	// (0x0001bf34) mp4_rocker_pane

0xce46,	// (0x0001bf5c) mp4_progress_pane_t1

0xce5f,	// (0x0001bf75) mp4_progress_pane_t2

0x0001,

0xf8c3,	// (0x0001e9d9) mp4_progress_pane_t

0xce78,	// (0x0001bf8e) mup_progress_pane_cp04

0xc2de,	// (0x0001b3f4) mp4_rocker_pane_g1

0x5495,	// (0x000145ab) aid_cell_size_keypad2_ParamLimits

0x5495,	// (0x000145ab) aid_cell_size_keypad2

0x54ab,	// (0x000145c1) dialer2_ne_pane_ParamLimits

0x54ab,	// (0x000145c1) dialer2_ne_pane

0x54c5,	// (0x000145db) grid_dialer2_keypad_pane_ParamLimits

0x54c5,	// (0x000145db) grid_dialer2_keypad_pane

0xc0c3,	// (0x0001b1d9) bg_popup_call_pane_cp07_ParamLimits

0xc0c3,	// (0x0001b1d9) bg_popup_call_pane_cp07

0x54e1,	// (0x000145f7) dialer2_ne_pane_t1_ParamLimits

0x54e1,	// (0x000145f7) dialer2_ne_pane_t1

0x551d,	// (0x00014633) cell_dialer2_keypad_pane_ParamLimits

0x551d,	// (0x00014633) cell_dialer2_keypad_pane

0xce96,	// (0x0001bfac) bg_button_pane_pane_cp04_ParamLimits

0xce96,	// (0x0001bfac) bg_button_pane_pane_cp04

0x553f,	// (0x00014655) cell_dialer2_keypad_pane_g1_ParamLimits

0x553f,	// (0x00014655) cell_dialer2_keypad_pane_g1

0x1307,	// (0x0001041d) aid_placing_vt_set_content_ParamLimits

0x1307,	// (0x0001041d) aid_placing_vt_set_content

0x132f,	// (0x00010445) aid_placing_vt_set_title_ParamLimits

0x132f,	// (0x00010445) aid_placing_vt_set_title

0x93ca,	// (0x000184e0) main_image3_pane

0x5605,	// (0x0001471b) area_side_right_pane_cp01_ParamLimits

0x5605,	// (0x0001471b) area_side_right_pane_cp01

0xcc3c,	// (0x0001bd52) main_image3_pane_g1_ParamLimits

0xcc3c,	// (0x0001bd52) main_image3_pane_g1

0x561c,	// (0x00014732) main_image3_pane_g2_ParamLimits

0x561c,	// (0x00014732) main_image3_pane_g2

0x5644,	// (0x0001475a) main_image3_pane_g3_ParamLimits

0x5644,	// (0x0001475a) main_image3_pane_g3

0x566e,	// (0x00014784) main_image3_pane_g4_ParamLimits

0x566e,	// (0x00014784) main_image3_pane_g4

0x0003,

0xf8d2,	// (0x0001e9e8) main_image3_pane_g_ParamLimits

0xf8d2,	// (0x0001e9e8) main_image3_pane_g

0x5698,	// (0x000147ae) main_image3_pane_t1_ParamLimits

0x5698,	// (0x000147ae) main_image3_pane_t1

0x56f0,	// (0x00014806) main_image3_pane_t2_ParamLimits

0x56f0,	// (0x00014806) main_image3_pane_t2

0x5742,	// (0x00014858) main_image3_pane_t3_ParamLimits

0x5742,	// (0x00014858) main_image3_pane_t3

0x0003,

0xf8db,	// (0x0001e9f1) main_image3_pane_t_ParamLimits

0xf8db,	// (0x0001e9f1) main_image3_pane_t

0x943a,	// (0x00018550) grid_sctrl_middle_pane_cp01_ParamLimits

0x943a,	// (0x00018550) grid_sctrl_middle_pane_cp01

0x57ca,	// (0x000148e0) cell_sctrl_middle_pane_cp01_ParamLimits

0x57ca,	// (0x000148e0) cell_sctrl_middle_pane_cp01

0x57e7,	// (0x000148fd) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x57e7,	// (0x000148fd) cell_sctrl_middle_pane_cp01_g1

0x93ca,	// (0x000184e0) main_call4_pane

0x57fd,	// (0x00014913) aid_size_button_call4_ParamLimits

0x57fd,	// (0x00014913) aid_size_button_call4

0x582e,	// (0x00014944) call4_windows_pane_ParamLimits

0x582e,	// (0x00014944) call4_windows_pane

0x584e,	// (0x00014964) grid_call4_button_pane_ParamLimits

0x584e,	// (0x00014964) grid_call4_button_pane

0xced4,	// (0x0001bfea) call4_windows_conf_pane

0xceeb,	// (0x0001c001) popup_call4_audio_first_window_ParamLimits

0xceeb,	// (0x0001c001) popup_call4_audio_first_window

0xcf37,	// (0x0001c04d) popup_call4_audio_second_window_ParamLimits

0xcf37,	// (0x0001c04d) popup_call4_audio_second_window

0xcf4b,	// (0x0001c061) popup_call4_audio_wait_window_ParamLimits

0xcf4b,	// (0x0001c061) popup_call4_audio_wait_window

0x587b,	// (0x00014991) cell_call4_button_pane_ParamLimits

0x587b,	// (0x00014991) cell_call4_button_pane

0x58a4,	// (0x000149ba) bg_button_pane_cp09_ParamLimits

0x58a4,	// (0x000149ba) bg_button_pane_cp09

0x58b0,	// (0x000149c6) cell_call4_button_pane_g1_ParamLimits

0x58b0,	// (0x000149c6) cell_call4_button_pane_g1

0x58d6,	// (0x000149ec) cell_call4_button_pane_t1_ParamLimits

0x58d6,	// (0x000149ec) cell_call4_button_pane_t1

0xcf93,	// (0x0001c0a9) popup_call4_audio_conf_window_ParamLimits

0xcf93,	// (0x0001c0a9) popup_call4_audio_conf_window

0x4b27,	// (0x00013c3d) mup3_progress_pane_t1_ParamLimits

0x4b46,	// (0x00013c5c) mup3_progress_pane_t2_ParamLimits

0xc61b,	// (0x0001b731) mup3_progress_pane_t3_ParamLimits

0xf7af,	// (0x0001e8c5) mup3_progress_pane_t_ParamLimits

0xc638,	// (0x0001b74e) mup_progress_pane_cp03_ParamLimits

0x5128,	// (0x0001423e) mup3_control_keys_pane_g4_copy1

0xce02,	// (0x0001bf18) mp4_rocker2_pane_ParamLimits

0xce02,	// (0x0001bf18) mp4_rocker2_pane

0xcfa7,	// (0x0001c0bd) mp4_rocker2_pane_g1

0xcfaf,	// (0x0001c0c5) mp4_rocker2_pane_g2

0xcfb7,	// (0x0001c0cd) mp4_rocker2_pane_g3

0xcfbf,	// (0x0001c0d5) mp4_rocker2_pane_g4

0xcfc7,	// (0x0001c0dd) mp4_rocker2_pane_g5

0x0004,

0xf8e4,	// (0x0001e9fa) mp4_rocker2_pane_g

0x93ca,	// (0x000184e0) main_camera4_pane

0x93ca,	// (0x000184e0) main_video4_pane

0x5399,	// (0x000144af) main_video_tele_dialer_pane_t1_ParamLimits

0x5399,	// (0x000144af) main_video_tele_dialer_pane_t1

0x53b2,	// (0x000144c8) main_video_tele_dialer_pane_t2_ParamLimits

0x53b2,	// (0x000144c8) main_video_tele_dialer_pane_t2

0x0001,

0xf89e,	// (0x0001e9b4) main_video_tele_dialer_pane_t_ParamLimits

0xf89e,	// (0x0001e9b4) main_video_tele_dialer_pane_t

0x5918,	// (0x00014a2e) cam4_autofocus_pane_ParamLimits

0x5918,	// (0x00014a2e) cam4_autofocus_pane

0x592e,	// (0x00014a44) cam4_image_uncrop_pane_ParamLimits

0x592e,	// (0x00014a44) cam4_image_uncrop_pane

0x5948,	// (0x00014a5e) cam4_indicators_pane_ParamLimits

0x5948,	// (0x00014a5e) cam4_indicators_pane

0x5973,	// (0x00014a89) main_camera4_pane_g1_ParamLimits

0x5973,	// (0x00014a89) main_camera4_pane_g1

0x5985,	// (0x00014a9b) main_camera4_pane_g2_ParamLimits

0x5985,	// (0x00014a9b) main_camera4_pane_g2

0x5998,	// (0x00014aae) main_camera4_pane_g3_ParamLimits

0x5998,	// (0x00014aae) main_camera4_pane_g3

0x59ab,	// (0x00014ac1) main_camera4_pane_g4_ParamLimits

0x59ab,	// (0x00014ac1) main_camera4_pane_g4

0x59be,	// (0x00014ad4) main_camera4_pane_g5_ParamLimits

0x59be,	// (0x00014ad4) main_camera4_pane_g5

0x0005,

0xf8ef,	// (0x0001ea05) main_camera4_pane_g_ParamLimits

0xf8ef,	// (0x0001ea05) main_camera4_pane_g

0x59e2,	// (0x00014af8) main_camera4_pane_t1_ParamLimits

0x59e2,	// (0x00014af8) main_camera4_pane_t1

0xc52c,	// (0x0001b642) bg_tb_trans_pane_cp06

0xcff3,	// (0x0001c109) cam4_indicators_pane_g1

0xd004,	// (0x0001c11a) cam4_indicators_pane_g2

0x0002,

0xf90a,	// (0x0001ea20) cam4_indicators_pane_g

0xd01c,	// (0x0001c132) cam4_indicators_pane_t1

0x5a46,	// (0x00014b5c) main_video4_pane_g1_ParamLimits

0x5a46,	// (0x00014b5c) main_video4_pane_g1

0x5a55,	// (0x00014b6b) main_video4_pane_g2_ParamLimits

0x5a55,	// (0x00014b6b) main_video4_pane_g2

0x5a64,	// (0x00014b7a) main_video4_pane_g3_ParamLimits

0x5a64,	// (0x00014b7a) main_video4_pane_g3

0x5a73,	// (0x00014b89) main_video4_pane_g4_ParamLimits

0x5a73,	// (0x00014b89) main_video4_pane_g4

0x0004,

0xf911,	// (0x0001ea27) main_video4_pane_g_ParamLimits

0xf911,	// (0x0001ea27) main_video4_pane_g

0x5a91,	// (0x00014ba7) vid4_indicators_pane_ParamLimits

0x5a91,	// (0x00014ba7) vid4_indicators_pane

0x5abf,	// (0x00014bd5) video4_image_uncrop_cif_pane_ParamLimits

0x5abf,	// (0x00014bd5) video4_image_uncrop_cif_pane

0x5ad9,	// (0x00014bef) video4_image_uncrop_nhd_pane_ParamLimits

0x5ad9,	// (0x00014bef) video4_image_uncrop_nhd_pane

0x592e,	// (0x00014a44) video4_image_uncrop_vga_pane_ParamLimits

0x592e,	// (0x00014a44) video4_image_uncrop_vga_pane

0x943a,	// (0x00018550) bg_tb_trans_pane_cp07

0xd046,	// (0x0001c15c) vid4_indicators_pane_g1

0xd05a,	// (0x0001c170) vid4_indicators_pane_g2

0xd06e,	// (0x0001c184) vid4_indicators_pane_g3

0x0004,

0xf91c,	// (0x0001ea32) vid4_indicators_pane_g

0xd09b,	// (0x0001c1b1) vid4_indicators_pane_t1

0x5aed,	// (0x00014c03) cam4_autofocus_pane_g1

0x5af5,	// (0x00014c0b) cam4_autofocus_pane_g2

0x5afd,	// (0x00014c13) cam4_autofocus_pane_g3

0x0002,

0xf927,	// (0x0001ea3d) cam4_autofocus_pane_g

0x5b05,	// (0x00014c1b) cam4_autofocus_pane_g3_copy1

0x53e1,	// (0x000144f7) video_down_pane_cp_t1

0x53ef,	// (0x00014505) video_down_pane_cp_t2

0x0001,

0xf8a3,	// (0x0001e9b9) video_down_pane_cp_t

0x943a,	// (0x00018550) popup_vitu2_window_ParamLimits

0x943a,	// (0x00018550) popup_vitu2_window

0x5b0d,	// (0x00014c23) aid_size_cell2_itu2_ParamLimits

0x5b0d,	// (0x00014c23) aid_size_cell2_itu2

0x5b33,	// (0x00014c49) aid_size_cell_itu2_ParamLimits

0x5b33,	// (0x00014c49) aid_size_cell_itu2

0x5b8f,	// (0x00014ca5) bg_popup_window_pane_cp09_ParamLimits

0x5b8f,	// (0x00014ca5) bg_popup_window_pane_cp09

0x5b9d,	// (0x00014cb3) field_vitu2_entry_pane_ParamLimits

0x5b9d,	// (0x00014cb3) field_vitu2_entry_pane

0x5bc3,	// (0x00014cd9) grid_vitu2_function_pane_ParamLimits

0x5bc3,	// (0x00014cd9) grid_vitu2_function_pane

0x5c14,	// (0x00014d2a) grid_vitu2_itu_pane_ParamLimits

0x5c14,	// (0x00014d2a) grid_vitu2_itu_pane

0x5caa,	// (0x00014dc0) cell_vitu2_itu_pane_ParamLimits

0x5caa,	// (0x00014dc0) cell_vitu2_itu_pane

0x5cd6,	// (0x00014dec) cell_vitu2_function_pane_ParamLimits

0x5cd6,	// (0x00014dec) cell_vitu2_function_pane

0xd0b2,	// (0x0001c1c8) bg_popup_call_pane_cp08_ParamLimits

0xd0b2,	// (0x0001c1c8) bg_popup_call_pane_cp08

0xd0c9,	// (0x0001c1df) field_vitu2_entry_pane_g1

0xd0d5,	// (0x0001c1eb) field_vitu2_entry_pane_g2

0x0002,

0xf92e,	// (0x0001ea44) field_vitu2_entry_pane_g

0x5d15,	// (0x00014e2b) field_vitu2_entry_pane_t1_ParamLimits

0x5d15,	// (0x00014e2b) field_vitu2_entry_pane_t1

0xd0ef,	// (0x0001c205) field_vitu2_entry_pane_t2_ParamLimits

0xd0ef,	// (0x0001c205) field_vitu2_entry_pane_t2

0x0001,

0xf935,	// (0x0001ea4b) field_vitu2_entry_pane_t_ParamLimits

0xf935,	// (0x0001ea4b) field_vitu2_entry_pane_t

0x5d44,	// (0x00014e5a) bg_button_pane_cp010_ParamLimits

0x5d44,	// (0x00014e5a) bg_button_pane_cp010

0xd114,	// (0x0001c22a) cell_vitu2_itu_pane_g1

0x5d60,	// (0x00014e76) cell_vitu2_itu_pane_t1_ParamLimits

0x5d60,	// (0x00014e76) cell_vitu2_itu_pane_t1

0x5dbe,	// (0x00014ed4) cell_vitu2_itu_pane_t2_ParamLimits

0x5dbe,	// (0x00014ed4) cell_vitu2_itu_pane_t2

0x0002,

0xf93f,	// (0x0001ea55) cell_vitu2_itu_pane_t_ParamLimits

0xf93f,	// (0x0001ea55) cell_vitu2_itu_pane_t

0x943a,	// (0x00018550) bg_button_pane_cp011

0x5eaa,	// (0x00014fc0) cell_vitu2_function_pane_g1

0x93ca,	// (0x000184e0) main_myfav_hc_pane

0x5792,	// (0x000148a8) popup_image3_note_pane_ParamLimits

0x5792,	// (0x000148a8) popup_image3_note_pane

0x57ae,	// (0x000148c4) popup_image3_tool_bar_pane_ParamLimits

0x57ae,	// (0x000148c4) popup_image3_tool_bar_pane

0x5e4c,	// (0x00014f62) cell_vitu2_itu_pane_t3_ParamLimits

0x5e4c,	// (0x00014f62) cell_vitu2_itu_pane_t3

0x93ca,	// (0x000184e0) bg_popup_trans_pane

0xd126,	// (0x0001c23c) grid_image3_tool_bar_pane

0xd130,	// (0x0001c246) bg_popup_trans_pane_g1

0xa085,	// (0x0001919b) bg_popup_trans_pane_g2

0xd138,	// (0x0001c24e) bg_popup_trans_pane_g3

0xd140,	// (0x0001c256) bg_popup_trans_pane_g4

0xd148,	// (0x0001c25e) bg_popup_trans_pane_g5

0xd150,	// (0x0001c266) bg_popup_trans_pane_g6

0xd158,	// (0x0001c26e) bg_popup_trans_pane_g7

0xd160,	// (0x0001c276) bg_popup_trans_pane_g8

0xa065,	// (0x0001917b) bg_popup_trans_pane_g9

0x0008,

0xf946,	// (0x0001ea5c) bg_popup_trans_pane_g

0xd168,	// (0x0001c27e) cell_image3_tool_bar_pane_ParamLimits

0xd168,	// (0x0001c27e) cell_image3_tool_bar_pane

0xc2de,	// (0x0001b3f4) cell_image3_tool_bar_pane_g1

0x93ca,	// (0x000184e0) bg_popup_trans_pane_cp1

0xd17c,	// (0x0001c292) popup_image3_note_pane_t1

0xd18a,	// (0x0001c2a0) popup_image3_note_pane_t2

0xd198,	// (0x0001c2ae) popup_image3_note_pane_t3

0x0002,

0xf959,	// (0x0001ea6f) popup_image3_note_pane_t

0xd1a6,	// (0x0001c2bc) popup_image3_note_pane_t3_copy1

0x5ebe,	// (0x00014fd4) bg_myfav_hc_instruction_pane_ParamLimits

0x5ebe,	// (0x00014fd4) bg_myfav_hc_instruction_pane

0x5ed2,	// (0x00014fe8) cell_myfav_contact_pane_ParamLimits

0x5ed2,	// (0x00014fe8) cell_myfav_contact_pane

0x5ef0,	// (0x00015006) cell_myfav_contact_pane_cp1_ParamLimits

0x5ef0,	// (0x00015006) cell_myfav_contact_pane_cp1

0x5f08,	// (0x0001501e) cell_myfav_contact_pane_cp2_ParamLimits

0x5f08,	// (0x0001501e) cell_myfav_contact_pane_cp2

0x5f20,	// (0x00015036) cell_myfav_contact_pane_cp3_ParamLimits

0x5f20,	// (0x00015036) cell_myfav_contact_pane_cp3

0x5f37,	// (0x0001504d) cell_myfav_contact_pane_cp4_ParamLimits

0x5f37,	// (0x0001504d) cell_myfav_contact_pane_cp4

0x5f4f,	// (0x00015065) cell_myfav_contact_pane_cp5_ParamLimits

0x5f4f,	// (0x00015065) cell_myfav_contact_pane_cp5

0x5f63,	// (0x00015079) cell_myfav_contact_pane_cp6_ParamLimits

0x5f63,	// (0x00015079) cell_myfav_contact_pane_cp6

0x5f79,	// (0x0001508f) cell_myfav_contact_pane_cp7_ParamLimits

0x5f79,	// (0x0001508f) cell_myfav_contact_pane_cp7

0xd1b4,	// (0x0001c2ca) listscroll_gen_pane_cp05

0x5f93,	// (0x000150a9) main_myfav_hc_pane_g1_ParamLimits

0x5f93,	// (0x000150a9) main_myfav_hc_pane_g1

0x5fad,	// (0x000150c3) main_myfav_hc_pane_g2_ParamLimits

0x5fad,	// (0x000150c3) main_myfav_hc_pane_g2

0x0002,

0xf960,	// (0x0001ea76) main_myfav_hc_pane_g_ParamLimits

0xf960,	// (0x0001ea76) main_myfav_hc_pane_g

0x5fdf,	// (0x000150f5) main_myfav_hc_pane_t1_ParamLimits

0x5fdf,	// (0x000150f5) main_myfav_hc_pane_t1

0xd1bd,	// (0x0001c2d3) main_myfav_hc_pane_t2_ParamLimits

0xd1bd,	// (0x0001c2d3) main_myfav_hc_pane_t2

0xd1cf,	// (0x0001c2e5) main_myfav_hc_pane_t3_ParamLimits

0xd1cf,	// (0x0001c2e5) main_myfav_hc_pane_t3

0x5ff6,	// (0x0001510c) main_myfav_hc_pane_t4_ParamLimits

0x5ff6,	// (0x0001510c) main_myfav_hc_pane_t4

0x0004,

0xf967,	// (0x0001ea7d) main_myfav_hc_pane_t_ParamLimits

0xf967,	// (0x0001ea7d) main_myfav_hc_pane_t

0xc2de,	// (0x0001b3f4) bg_myfav_hc_instruction_pane_g1

0xd1e1,	// (0x0001c2f7) cell_myfav_contact_pane_g1_ParamLimits

0xd1e1,	// (0x0001c2f7) cell_myfav_contact_pane_g1

0xd1e1,	// (0x0001c2f7) cell_myfav_contact_pane_g2_ParamLimits

0xd1e1,	// (0x0001c2f7) cell_myfav_contact_pane_g2

0xd1ed,	// (0x0001c303) cell_myfav_contact_pane_g3_ParamLimits

0xd1ed,	// (0x0001c303) cell_myfav_contact_pane_g3

0xc605,	// (0x0001b71b) cell_myfav_contact_pane_g4_ParamLimits

0xc605,	// (0x0001b71b) cell_myfav_contact_pane_g4

0xd1fa,	// (0x0001c310) cell_myfav_contact_pane_g5_ParamLimits

0xd1fa,	// (0x0001c310) cell_myfav_contact_pane_g5

0x0004,

0xf972,	// (0x0001ea88) cell_myfav_contact_pane_g_ParamLimits

0xf972,	// (0x0001ea88) cell_myfav_contact_pane_g

0x5fc7,	// (0x000150dd) main_myfav_hc_pane_g3_ParamLimits

0x5fc7,	// (0x000150dd) main_myfav_hc_pane_g3

0x0290,	// (0x0000f3a6) popup_adpt_find_window

0x601e,	// (0x00015134) afind_page_pane_ParamLimits

0x601e,	// (0x00015134) afind_page_pane

0x6033,	// (0x00015149) aid_size_cell_afind_ParamLimits

0x6033,	// (0x00015149) aid_size_cell_afind

0x6051,	// (0x00015167) bg_popup_sub_pane_cp09_ParamLimits

0x6051,	// (0x00015167) bg_popup_sub_pane_cp09

0x605e,	// (0x00015174) find_pane_cp01_ParamLimits

0x605e,	// (0x00015174) find_pane_cp01

0xd206,	// (0x0001c31c) grid_afind_control_pane_ParamLimits

0xd206,	// (0x0001c31c) grid_afind_control_pane

0x606b,	// (0x00015181) grid_afind_pane_ParamLimits

0x606b,	// (0x00015181) grid_afind_pane

0x608a,	// (0x000151a0) cell_afind_pane_ParamLimits

0x608a,	// (0x000151a0) cell_afind_pane

0xc2de,	// (0x0001b3f4) afind_page_pane_g1

0x60f1,	// (0x00015207) afind_page_pane_g2

0x60fa,	// (0x00015210) afind_page_pane_g3

0x0002,

0xf97d,	// (0x0001ea93) afind_page_pane_g

0x6103,	// (0x00015219) afind_page_pane_t1

0xd250,	// (0x0001c366) cell_afind_grid_control_pane_ParamLimits

0xd250,	// (0x0001c366) cell_afind_grid_control_pane

0xce96,	// (0x0001bfac) bg_button_pane_cp69_ParamLimits

0xce96,	// (0x0001bfac) bg_button_pane_cp69

0x6123,	// (0x00015239) cell_afind_pane_g1_ParamLimits

0x6123,	// (0x00015239) cell_afind_pane_g1

0x6130,	// (0x00015246) cell_afind_pane_t1_ParamLimits

0x6130,	// (0x00015246) cell_afind_pane_t1

0x9e7e,	// (0x00018f94) bg_button_pane_cp72

0xd25f,	// (0x0001c375) cell_afind_grid_control_pane_g1

0x30d7,	// (0x000121ed) aid_image_placing_area_ParamLimits

0x30d7,	// (0x000121ed) aid_image_placing_area

0xc92b,	// (0x0001ba41) field_vitu_entry_pane_g1_ParamLimits

0xc92b,	// (0x0001ba41) field_vitu_entry_pane_g1

0xc937,	// (0x0001ba4d) field_vitu_entry_pane_g2_ParamLimits

0xc937,	// (0x0001ba4d) field_vitu_entry_pane_g2

0x0001,

0xf82e,	// (0x0001e944) field_vitu_entry_pane_g_ParamLimits

0xf82e,	// (0x0001e944) field_vitu_entry_pane_g

0x51f1,	// (0x00014307) cell_vitu_itu_pane_g1_ParamLimits

0x5233,	// (0x00014349) cell_vitu_itu_pane_t3_ParamLimits

0x5233,	// (0x00014349) cell_vitu_itu_pane_t3

0xce46,	// (0x0001bf5c) mp4_progress_pane_t1_ParamLimits

0xce5f,	// (0x0001bf75) mp4_progress_pane_t2_ParamLimits

0xf8c3,	// (0x0001e9d9) mp4_progress_pane_t_ParamLimits

0xce78,	// (0x0001bf8e) mup_progress_pane_cp04_ParamLimits

0x600a,	// (0x00015120) main_myfav_hc_pane_t5_ParamLimits

0x600a,	// (0x00015120) main_myfav_hc_pane_t5

0x93f0,	// (0x00018506) aid_zoom_text_primary

0x0290,	// (0x0000f3a6) popup_adpt_find_window_ParamLimits

0x943a,	// (0x00018550) main_cam_set_pane

0x595f,	// (0x00014a75) cam4_zoom_pane_ParamLimits

0x595f,	// (0x00014a75) cam4_zoom_pane

0x6142,	// (0x00015258) main_cam_set_pane_g1_ParamLimits

0x6142,	// (0x00015258) main_cam_set_pane_g1

0x6150,	// (0x00015266) main_cam_set_pane_g2_ParamLimits

0x6150,	// (0x00015266) main_cam_set_pane_g2

0x0001,

0xf984,	// (0x0001ea9a) main_cam_set_pane_g_ParamLimits

0xf984,	// (0x0001ea9a) main_cam_set_pane_g

0x6171,	// (0x00015287) main_cam_set_pane_t1_ParamLimits

0x6171,	// (0x00015287) main_cam_set_pane_t1

0x618c,	// (0x000152a2) main_cset_listscroll_pane_ParamLimits

0x618c,	// (0x000152a2) main_cset_listscroll_pane

0x61ac,	// (0x000152c2) main_cset_slider_pane_ParamLimits

0x61ac,	// (0x000152c2) main_cset_slider_pane

0xd270,	// (0x0001c386) main_cset_list_pane_ParamLimits

0xd270,	// (0x0001c386) main_cset_list_pane

0xd280,	// (0x0001c396) scroll_pane_cp028

0x61d2,	// (0x000152e8) aid_area_touch_slider

0x61ee,	// (0x00015304) cset_slider_pane

0x6218,	// (0x0001532e) main_cset_slider_pane_g1

0x622d,	// (0x00015343) main_cset_slider_pane_g2

0x0011,

0xf989,	// (0x0001ea9f) main_cset_slider_pane_g

0xd2d1,	// (0x0001c3e7) main_cset_slider_pane_t1

0x62d1,	// (0x000153e7) main_cset_slider_pane_t2

0x62eb,	// (0x00015401) main_cset_slider_pane_t3

0x6305,	// (0x0001541b) main_cset_slider_pane_t4

0x631f,	// (0x00015435) main_cset_slider_pane_t5

0x6339,	// (0x0001544f) main_cset_slider_pane_t6

0x634e,	// (0x00015464) main_cset_slider_pane_t7

0x000e,

0xf9ae,	// (0x0001eac4) main_cset_slider_pane_t

0x6452,	// (0x00015568) cset_list_set_pane_ParamLimits

0x6452,	// (0x00015568) cset_list_set_pane

0x6464,	// (0x0001557a) aid_position_infowindow_above

0x646c,	// (0x00015582) aid_position_infowindow_below

0x6474,	// (0x0001558a) cset_list_set_pane_g1_ParamLimits

0x6474,	// (0x0001558a) cset_list_set_pane_g1

0x6480,	// (0x00015596) cset_list_set_pane_g3_ParamLimits

0x6480,	// (0x00015596) cset_list_set_pane_g3

0x0001,

0xf9cd,	// (0x0001eae3) cset_list_set_pane_g_ParamLimits

0xf9cd,	// (0x0001eae3) cset_list_set_pane_g

0x648f,	// (0x000155a5) cset_list_set_pane_t1_ParamLimits

0x648f,	// (0x000155a5) cset_list_set_pane_t1

0x943a,	// (0x00018550) list_highlight_pane_cp021_ParamLimits

0x943a,	// (0x00018550) list_highlight_pane_cp021

0xaa6c,	// (0x00019b82) cset_slider_pane_g1

0xaa7e,	// (0x00019b94) cset_slider_pane_g2

0xaa75,	// (0x00019b8b) cset_slider_pane_g3

0x0002,

0xf9d2,	// (0x0001eae8) cset_slider_pane_g

0xd371,	// (0x0001c487) aid_area_touch_cam4_zoom

0xd379,	// (0x0001c48f) cam4_zoom_cont_pane

0xd381,	// (0x0001c497) cam4_zoom_pane_g1

0xd389,	// (0x0001c49f) cam4_zoom_pane_g2

0x64a4,	// (0x000155ba) cam4_zoom_pane_g3

0x0002,

0xf9d9,	// (0x0001eaef) cam4_zoom_pane_g

0xcb22,	// (0x0001bc38) cam4_zoom_cont_pane_g1

0xd391,	// (0x0001c4a7) cam4_zoom_cont_pane_g2

0xd39a,	// (0x0001c4b0) cam4_zoom_cont_pane_g3

0x0002,

0xf9e0,	// (0x0001eaf6) cam4_zoom_cont_pane_g

0x581b,	// (0x00014931) call4_image_pane_ParamLimits

0x581b,	// (0x00014931) call4_image_pane

0xced4,	// (0x0001bfea) call4_windows_conf_pane_ParamLimits

0xcf15,	// (0x0001c02b) popup_call4_audio_in_window_ParamLimits

0xcf15,	// (0x0001c02b) popup_call4_audio_in_window

0x93ca,	// (0x000184e0) bg_popup_call2_act_pane_cp02

0xcf8b,	// (0x0001c0a1) call4_list_conf_pane

0xc2de,	// (0x0001b3f4) call4_image_pane_g1

0xc2de,	// (0x0001b3f4) call4_image_pane_g2

0x0001,

0xf6ef,	// (0x0001e805) call4_image_pane_g

0xd3a3,	// (0x0001c4b9) list_single_graphic_popup_conf4_pane_ParamLimits

0xd3a3,	// (0x0001c4b9) list_single_graphic_popup_conf4_pane

0x93ca,	// (0x000184e0) list_highlight_pane_cp022

0xd3b6,	// (0x0001c4cc) list_single_graphic_popup_conf4_pane_g1

0xa656,	// (0x0001976c) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9e7,	// (0x0001eafd) list_single_graphic_popup_conf4_pane_g

0xd3be,	// (0x0001c4d4) list_single_graphic_popup_conf4_pane_t1

0x1453,	// (0x00010569) popup_vtel_slider_window_ParamLimits

0x1453,	// (0x00010569) popup_vtel_slider_window

0xce84,	// (0x0001bf9a) dialer2_ne_pane_t2_ParamLimits

0xce84,	// (0x0001bf9a) dialer2_ne_pane_t2

0x0001,

0xf8c8,	// (0x0001e9de) dialer2_ne_pane_t_ParamLimits

0xf8c8,	// (0x0001e9de) dialer2_ne_pane_t

0xc0c3,	// (0x0001b1d9) bg_popup_sub_pane_cp010_ParamLimits

0xc0c3,	// (0x0001b1d9) bg_popup_sub_pane_cp010

0x64ac,	// (0x000155c2) popup_vtel_slider_window_g1_ParamLimits

0x64ac,	// (0x000155c2) popup_vtel_slider_window_g1

0x64bf,	// (0x000155d5) popup_vtel_slider_window_g2_ParamLimits

0x64bf,	// (0x000155d5) popup_vtel_slider_window_g2

0x0003,

0xf9ec,	// (0x0001eb02) popup_vtel_slider_window_g_ParamLimits

0xf9ec,	// (0x0001eb02) popup_vtel_slider_window_g

0x6515,	// (0x0001562b) vtel_slider_pane_ParamLimits

0x6515,	// (0x0001562b) vtel_slider_pane

0x6537,	// (0x0001564d) vtel_slider_pane_g1_ParamLimits

0x6537,	// (0x0001564d) vtel_slider_pane_g1

0x654b,	// (0x00015661) vtel_slider_pane_g2_ParamLimits

0x654b,	// (0x00015661) vtel_slider_pane_g2

0x6563,	// (0x00015679) vtel_slider_pane_g3_ParamLimits

0x6563,	// (0x00015679) vtel_slider_pane_g3

0x6537,	// (0x0001564d) vtel_slider_pane_g4_ParamLimits

0x6537,	// (0x0001564d) vtel_slider_pane_g4

0x6579,	// (0x0001568f) vtel_slider_pane_g5_ParamLimits

0x6579,	// (0x0001568f) vtel_slider_pane_g5

0x0004,

0xf9f5,	// (0x0001eb0b) vtel_slider_pane_g_ParamLimits

0xf9f5,	// (0x0001eb0b) vtel_slider_pane_g

0x943a,	// (0x00018550) main_gallery2_pane

0x5b5f,	// (0x00014c75) aid_size_row_itut2_dropdow_list_ParamLimits

0x5b5f,	// (0x00014c75) aid_size_row_itut2_dropdow_list

0x5beb,	// (0x00014d01) grid_vitu2_function_top_pane_ParamLimits

0x5beb,	// (0x00014d01) grid_vitu2_function_top_pane

0x5c55,	// (0x00014d6b) popup_vitu2_dropdown_list_window_ParamLimits

0x5c55,	// (0x00014d6b) popup_vitu2_dropdown_list_window

0x5c7e,	// (0x00014d94) popup_vitu2_match_list_window

0x658f,	// (0x000156a5) cell_vitu2_function_top_pane_ParamLimits

0x658f,	// (0x000156a5) cell_vitu2_function_top_pane

0x65a7,	// (0x000156bd) cell_vitu2_function_top_pane_cp01_ParamLimits

0x65a7,	// (0x000156bd) cell_vitu2_function_top_pane_cp01

0x65c3,	// (0x000156d9) cell_vitu2_function_top_wide_pane_ParamLimits

0x65c3,	// (0x000156d9) cell_vitu2_function_top_wide_pane

0x943a,	// (0x00018550) bg_button_pane_cp012

0x65df,	// (0x000156f5) cell_vitu2_function_top_pane_g1

0xd3e2,	// (0x0001c4f8) bg_button_pane_cp013_ParamLimits

0xd3e2,	// (0x0001c4f8) bg_button_pane_cp013

0x65f3,	// (0x00015709) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x65f3,	// (0x00015709) cell_vitu2_function_top_wide_pane_g1

0x943a,	// (0x00018550) bg_popup_sub_pane_cp20

0x660b,	// (0x00015721) list_vitu2_match_list_pane

0xd130,	// (0x0001c246) bg_popup_sub_pane_cp20_g1

0xd138,	// (0x0001c24e) bg_popup_sub_pane_cp20_g2

0xa085,	// (0x0001919b) bg_popup_sub_pane_cp20_g3

0xd140,	// (0x0001c256) bg_popup_sub_pane_cp20_g4

0xa065,	// (0x0001917b) bg_popup_sub_pane_cp20_g5

0xd3fe,	// (0x0001c514) bg_popup_sub_pane_cp20_g6

0xd150,	// (0x0001c266) bg_popup_sub_pane_cp20_g7

0xd158,	// (0x0001c26e) bg_popup_sub_pane_cp20_g8

0xd160,	// (0x0001c276) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa00,	// (0x0001eb16) bg_popup_sub_pane_cp20_g

0xd406,	// (0x0001c51c) list_vitu2_match_list_item_pane_ParamLimits

0xd406,	// (0x0001c51c) list_vitu2_match_list_item_pane

0xd418,	// (0x0001c52e) list_vitu2_match_list_item_pane_t1

0x93ca,	// (0x000184e0) bg_popup_sub_pane_cp21

0xa50f,	// (0x00019625) grid_vitu2_dropdown_list_pane

0x6679,	// (0x0001578f) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x6679,	// (0x0001578f) cell_vitu2_dropdown_list_char_pane

0x669a,	// (0x000157b0) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x669a,	// (0x000157b0) cell_vitu2_dropdown_list_ctrl_pane

0xd426,	// (0x0001c53c) cell_vitu2_dropdown_list_char_pane_g1

0xd42f,	// (0x0001c545) cell_vitu2_dropdown_list_char_pane_g2

0xd438,	// (0x0001c54e) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa1d,	// (0x0001eb33) cell_vitu2_dropdown_list_char_pane_g

0x66c6,	// (0x000157dc) cell_vitu2_dropdown_list_char_pane_t1

0x66d4,	// (0x000157ea) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x66d4,	// (0x000157ea) cell_vitu2_dropdown_list_ctrl_pane_g1

0x66e1,	// (0x000157f7) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x66e1,	// (0x000157f7) cell_vitu2_dropdown_list_ctrl_pane_g2

0x66ee,	// (0x00015804) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x66ee,	// (0x00015804) cell_vitu2_dropdown_list_ctrl_pane_g3

0x66fb,	// (0x00015811) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x66fb,	// (0x00015811) cell_vitu2_dropdown_list_ctrl_pane_g4

0xc52c,	// (0x0001b642) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xc52c,	// (0x0001b642) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa24,	// (0x0001eb3a) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa24,	// (0x0001eb3a) cell_vitu2_dropdown_list_ctrl_pane_g

0x6717,	// (0x0001582d) aid_size_cell_gallery2_ParamLimits

0x6717,	// (0x0001582d) aid_size_cell_gallery2

0x6735,	// (0x0001584b) grid_gallery2_pane_ParamLimits

0x6735,	// (0x0001584b) grid_gallery2_pane

0x674f,	// (0x00015865) scroll_pane_cp029_ParamLimits

0x674f,	// (0x00015865) scroll_pane_cp029

0x675b,	// (0x00015871) cell_gallery2_pane_ParamLimits

0x675b,	// (0x00015871) cell_gallery2_pane

0xd441,	// (0x0001c557) cell_gallery2_pane_g2

0x67b7,	// (0x000158cd) cell_gallery2_pane_g3

0xd449,	// (0x0001c55f) cell_gallery2_pane_g4

0xd451,	// (0x0001c567) cell_gallery2_pane_g5

0x9e22,	// (0x00018f38) grid_highlight_pane_cp10

0x5c7e,	// (0x00014d94) popup_vitu2_match_list_window_ParamLimits

0x5c93,	// (0x00014da9) popup_vitu2_query_window_ParamLimits

0x5c93,	// (0x00014da9) popup_vitu2_query_window

0x93ca,	// (0x000184e0) bg_vitu2_candi_button_pane

0xd426,	// (0x0001c53c) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd42f,	// (0x0001c545) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd438,	// (0x0001c54e) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x67bf,	// (0x000158d5) bg_button_pane_cp015

0x67d3,	// (0x000158e9) bg_button_pane_cp016

0x67e6,	// (0x000158fc) bg_button_pane_cp017

0xbdc3,	// (0x0001aed9) bg_popup_sub_pane_cp22

0xd459,	// (0x0001c56f) popup_vitu2_query_window_g1

0x682b,	// (0x00015941) popup_vitu2_query_window_g2

0x0002,

0xfa2f,	// (0x0001eb45) popup_vitu2_query_window_g

0x684a,	// (0x00015960) popup_vitu2_query_window_t1_ParamLimits

0x684a,	// (0x00015960) popup_vitu2_query_window_t1

0x687f,	// (0x00015995) popup_vitu2_query_window_t2_ParamLimits

0x687f,	// (0x00015995) popup_vitu2_query_window_t2

0x6891,	// (0x000159a7) popup_vitu2_query_window_t3_ParamLimits

0x6891,	// (0x000159a7) popup_vitu2_query_window_t3

0x68b9,	// (0x000159cf) popup_vitu2_query_window_t4_ParamLimits

0x68b9,	// (0x000159cf) popup_vitu2_query_window_t4

0x68da,	// (0x000159f0) popup_vitu2_query_window_t5_ParamLimits

0x68da,	// (0x000159f0) popup_vitu2_query_window_t5

0x0006,

0xfa36,	// (0x0001eb4c) popup_vitu2_query_window_t_ParamLimits

0xfa36,	// (0x0001eb4c) popup_vitu2_query_window_t

0xd268,	// (0x0001c37e) main_cset_text_pane

0x61d2,	// (0x000152e8) aid_area_touch_slider_ParamLimits

0x61ee,	// (0x00015304) cset_slider_pane_ParamLimits

0x6218,	// (0x0001532e) main_cset_slider_pane_g1_ParamLimits

0x622d,	// (0x00015343) main_cset_slider_pane_g2_ParamLimits

0xd289,	// (0x0001c39f) main_cset_slider_pane_g3_ParamLimits

0xd289,	// (0x0001c39f) main_cset_slider_pane_g3

0x6242,	// (0x00015358) main_cset_slider_pane_g4_ParamLimits

0x6242,	// (0x00015358) main_cset_slider_pane_g4

0x6251,	// (0x00015367) main_cset_slider_pane_g5_ParamLimits

0x6251,	// (0x00015367) main_cset_slider_pane_g5

0x625d,	// (0x00015373) main_cset_slider_pane_g6_ParamLimits

0x625d,	// (0x00015373) main_cset_slider_pane_g6

0xf989,	// (0x0001ea9f) main_cset_slider_pane_g_ParamLimits

0xd2d1,	// (0x0001c3e7) main_cset_slider_pane_t1_ParamLimits

0x62d1,	// (0x000153e7) main_cset_slider_pane_t2_ParamLimits

0x62eb,	// (0x00015401) main_cset_slider_pane_t3_ParamLimits

0x6305,	// (0x0001541b) main_cset_slider_pane_t4_ParamLimits

0x631f,	// (0x00015435) main_cset_slider_pane_t5_ParamLimits

0x6339,	// (0x0001544f) main_cset_slider_pane_t6_ParamLimits

0x634e,	// (0x00015464) main_cset_slider_pane_t7_ParamLimits

0x6378,	// (0x0001548e) main_cset_slider_pane_t8_ParamLimits

0x6378,	// (0x0001548e) main_cset_slider_pane_t8

0x63a0,	// (0x000154b6) main_cset_slider_pane_t9_ParamLimits

0x63a0,	// (0x000154b6) main_cset_slider_pane_t9

0x63c8,	// (0x000154de) main_cset_slider_pane_t10_ParamLimits

0x63c8,	// (0x000154de) main_cset_slider_pane_t10

0x63f0,	// (0x00015506) main_cset_slider_pane_t11_ParamLimits

0x63f0,	// (0x00015506) main_cset_slider_pane_t11

0x6418,	// (0x0001552e) main_cset_slider_pane_t12_ParamLimits

0x6418,	// (0x0001552e) main_cset_slider_pane_t12

0x6435,	// (0x0001554b) main_cset_slider_pane_t13_ParamLimits

0x6435,	// (0x0001554b) main_cset_slider_pane_t13

0xf9ae,	// (0x0001eac4) main_cset_slider_pane_t_ParamLimits

0x93ca,	// (0x000184e0) bg_popup_sub_pane_cp011

0xd465,	// (0x0001c57b) main_cset_text_pane_g1

0xd46d,	// (0x0001c583) main_cset_text_pane_t1

0xd47b,	// (0x0001c591) main_cset_text_pane_t2

0xd489,	// (0x0001c59f) main_cset_text_pane_t3

0xd497,	// (0x0001c5ad) main_cset_text_pane_t4

0xd4a5,	// (0x0001c5bb) main_cset_text_pane_t5

0xd4b3,	// (0x0001c5c9) main_cset_text_pane_t6

0xd4c1,	// (0x0001c5d7) main_cset_text_pane_t7

0x0006,

0xfa45,	// (0x0001eb5b) main_cset_text_pane_t

0x93ca,	// (0x000184e0) main_cam4_burst_pane

0x93ca,	// (0x000184e0) main_cam5_pane

0x6111,	// (0x00015227) bg_button_pane_cp019

0x611a,	// (0x00015230) bg_button_pane_cp020

0xd295,	// (0x0001c3ab) main_cset_slider_pane_g7_ParamLimits

0xd295,	// (0x0001c3ab) main_cset_slider_pane_g7

0xd2a1,	// (0x0001c3b7) main_cset_slider_pane_g8_ParamLimits

0xd2a1,	// (0x0001c3b7) main_cset_slider_pane_g8

0x6271,	// (0x00015387) main_cset_slider_pane_g9_ParamLimits

0x6271,	// (0x00015387) main_cset_slider_pane_g9

0x627d,	// (0x00015393) main_cset_slider_pane_g10_ParamLimits

0x627d,	// (0x00015393) main_cset_slider_pane_g10

0x6289,	// (0x0001539f) main_cset_slider_pane_g11_ParamLimits

0x6289,	// (0x0001539f) main_cset_slider_pane_g11

0x6295,	// (0x000153ab) main_cset_slider_pane_g12_ParamLimits

0x6295,	// (0x000153ab) main_cset_slider_pane_g12

0x62a1,	// (0x000153b7) main_cset_slider_pane_g13_ParamLimits

0x62a1,	// (0x000153b7) main_cset_slider_pane_g13

0x62ad,	// (0x000153c3) main_cset_slider_pane_g14_ParamLimits

0x62ad,	// (0x000153c3) main_cset_slider_pane_g14

0x62b9,	// (0x000153cf) main_cset_slider_pane_g15_ParamLimits

0x62b9,	// (0x000153cf) main_cset_slider_pane_g15

0xd2ff,	// (0x0001c415) main_cset_slider_pane_t14_ParamLimits

0xd2ff,	// (0x0001c415) main_cset_slider_pane_t14

0xd338,	// (0x0001c44e) main_cset_slider_pane_t15_ParamLimits

0xd338,	// (0x0001c44e) main_cset_slider_pane_t15

0x6951,	// (0x00015a67) aid_cam4_burst_size_cell_ParamLimits

0x6951,	// (0x00015a67) aid_cam4_burst_size_cell

0x6971,	// (0x00015a87) grid_cam4_burst_pane_ParamLimits

0x6971,	// (0x00015a87) grid_cam4_burst_pane

0x69a9,	// (0x00015abf) linegrid_cam4_burst_pane_ParamLimits

0x69a9,	// (0x00015abf) linegrid_cam4_burst_pane

0xd4cf,	// (0x0001c5e5) scroll_pane_cp30_ParamLimits

0xd4cf,	// (0x0001c5e5) scroll_pane_cp30

0x69cd,	// (0x00015ae3) cell_cam4_burst_pane_ParamLimits

0x69cd,	// (0x00015ae3) cell_cam4_burst_pane

0xd4db,	// (0x0001c5f1) linegrid_cam4_burst_pane_g1_ParamLimits

0xd4db,	// (0x0001c5f1) linegrid_cam4_burst_pane_g1

0x6a1a,	// (0x00015b30) linegrid_cam4_burst_pane_g2_ParamLimits

0x6a1a,	// (0x00015b30) linegrid_cam4_burst_pane_g2

0xd4e8,	// (0x0001c5fe) linegrid_cam4_burst_pane_g3_ParamLimits

0xd4e8,	// (0x0001c5fe) linegrid_cam4_burst_pane_g3

0x0002,

0xfa54,	// (0x0001eb6a) linegrid_cam4_burst_pane_g_ParamLimits

0xfa54,	// (0x0001eb6a) linegrid_cam4_burst_pane_g

0x6a2b,	// (0x00015b41) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x6a2b,	// (0x00015b41) linegrid_cam4_burst_pane_g3_copy1

0xd4f5,	// (0x0001c60b) linegrid_cam4_burst_pane_g4_ParamLimits

0xd4f5,	// (0x0001c60b) linegrid_cam4_burst_pane_g4

0x6a45,	// (0x00015b5b) linegrid_cam4_burst_pane_g5_ParamLimits

0x6a45,	// (0x00015b5b) linegrid_cam4_burst_pane_g5

0x6a56,	// (0x00015b6c) linegrid_cam4_burst_pane_g6_ParamLimits

0x6a56,	// (0x00015b6c) linegrid_cam4_burst_pane_g6

0xd502,	// (0x0001c618) linegrid_cam4_burst_pane_g7_ParamLimits

0xd502,	// (0x0001c618) linegrid_cam4_burst_pane_g7

0x6a6d,	// (0x00015b83) cell_cam4_burst_pane_g1

0xd51b,	// (0x0001c631) main_cam5_pane_t1_ParamLimits

0xd51b,	// (0x0001c631) main_cam5_pane_t1

0xd52d,	// (0x0001c643) main_cam5_pane_t2_ParamLimits

0xd52d,	// (0x0001c643) main_cam5_pane_t2

0xd53f,	// (0x0001c655) main_cam5_pane_t3_ParamLimits

0xd53f,	// (0x0001c655) main_cam5_pane_t3

0xd551,	// (0x0001c667) main_cam5_pane_t4_ParamLimits

0xd551,	// (0x0001c667) main_cam5_pane_t4

0xd569,	// (0x0001c67f) main_cam5_pane_t5_ParamLimits

0xd569,	// (0x0001c67f) main_cam5_pane_t5

0xd57d,	// (0x0001c693) main_cam5_pane_t6_ParamLimits

0xd57d,	// (0x0001c693) main_cam5_pane_t6

0xd591,	// (0x0001c6a7) main_cam5_pane_t7_ParamLimits

0xd591,	// (0x0001c6a7) main_cam5_pane_t7

0xd5a3,	// (0x0001c6b9) main_cam5_pane_t8_ParamLimits

0xd5a3,	// (0x0001c6b9) main_cam5_pane_t8

0xd5bf,	// (0x0001c6d5) main_cam5_pane_t9_ParamLimits

0xd5bf,	// (0x0001c6d5) main_cam5_pane_t9

0xd5d1,	// (0x0001c6e7) main_cam5_pane_t10_ParamLimits

0xd5d1,	// (0x0001c6e7) main_cam5_pane_t10

0xd5e3,	// (0x0001c6f9) main_cam5_pane_t11_ParamLimits

0xd5e3,	// (0x0001c6f9) main_cam5_pane_t11

0xd5f5,	// (0x0001c70b) main_cam5_pane_t12_ParamLimits

0xd5f5,	// (0x0001c70b) main_cam5_pane_t12

0xd60a,	// (0x0001c720) main_cam5_pane_t13_ParamLimits

0xd60a,	// (0x0001c720) main_cam5_pane_t13

0x000c,

0xfa60,	// (0x0001eb76) main_cam5_pane_t_ParamLimits

0xfa60,	// (0x0001eb76) main_cam5_pane_t

0x0312,	// (0x0000f428) popup_scut_keymap_window_ParamLimits

0x0312,	// (0x0000f428) popup_scut_keymap_window

0x6a80,	// (0x00015b96) aid_size_cell_brow_shortcut

0x9e22,	// (0x00018f38) bg_popup_window_pane_cp010

0x6a8c,	// (0x00015ba2) grid_scut_pane

0x6a98,	// (0x00015bae) cell_scut_pane_ParamLimits

0x6a98,	// (0x00015bae) cell_scut_pane

0x6aaf,	// (0x00015bc5) cell_scut_pane_g1

0xd627,	// (0x0001c73d) cell_scut_pane_t1

0xd636,	// (0x0001c74c) cell_scut_pane_t2

0x6ab8,	// (0x00015bce) cell_scut_pane_t3

0x0002,

0xfa7b,	// (0x0001eb91) cell_scut_pane_t

0x46ea,	// (0x00013800) main_mup3_pane_g8_ParamLimits

0x46ea,	// (0x00013800) main_mup3_pane_g8

0x5b77,	// (0x00014c8d) area_vitu2_query_pane_ParamLimits

0x5b77,	// (0x00014c8d) area_vitu2_query_pane

0x67f9,	// (0x0001590f) input_focus_pane_cp08

0xd645,	// (0x0001c75b) area_vitu2_query_pane_g1

0x6ac6,	// (0x00015bdc) area_vitu2_query_pane_g2

0x0001,

0xfa82,	// (0x0001eb98) area_vitu2_query_pane_g

0x6ad7,	// (0x00015bed) area_vitu2_query_pane_t1_ParamLimits

0x6ad7,	// (0x00015bed) area_vitu2_query_pane_t1

0x6aeb,	// (0x00015c01) area_vitu2_query_pane_t2_ParamLimits

0x6aeb,	// (0x00015c01) area_vitu2_query_pane_t2

0x6aff,	// (0x00015c15) area_vitu2_query_pane_t3_ParamLimits

0x6aff,	// (0x00015c15) area_vitu2_query_pane_t3

0xd651,	// (0x0001c767) area_vitu2_query_pane_t4_ParamLimits

0xd651,	// (0x0001c767) area_vitu2_query_pane_t4

0xd679,	// (0x0001c78f) area_vitu2_query_pane_t5_ParamLimits

0xd679,	// (0x0001c78f) area_vitu2_query_pane_t5

0xd6a1,	// (0x0001c7b7) area_vitu2_query_pane_t6_ParamLimits

0xd6a1,	// (0x0001c7b7) area_vitu2_query_pane_t6

0x0006,

0xfa87,	// (0x0001eb9d) area_vitu2_query_pane_t_ParamLimits

0xfa87,	// (0x0001eb9d) area_vitu2_query_pane_t

0x6b27,	// (0x00015c3d) bg_button_pane_cp018

0x6b35,	// (0x00015c4b) bg_button_pane_cp021

0x6b41,	// (0x00015c57) bg_button_pane_cp022

0x6b52,	// (0x00015c68) input_focus_pane_cp09

0xa765,	// (0x0001987b) aid_size_touch_mv_arrow_left

0xa790,	// (0x000198a6) aid_size_touch_mv_arrow_right

0xd2ad,	// (0x0001c3c3) main_cset_slider_pane_g16_ParamLimits

0xd2ad,	// (0x0001c3c3) main_cset_slider_pane_g16

0xd2b9,	// (0x0001c3cf) main_cset_slider_pane_g17_ParamLimits

0xd2b9,	// (0x0001c3cf) main_cset_slider_pane_g17

0x6a6d,	// (0x00015b83) cell_cam4_burst_pane_g1_ParamLimits

0x93ca,	// (0x000184e0) compa_mode_pane

0x64cf,	// (0x000155e5) popup_vtel_slider_window_g3_ParamLimits

0x64cf,	// (0x000155e5) popup_vtel_slider_window_g3

0x64e6,	// (0x000155fc) popup_vtel_slider_window_g4_ParamLimits

0x64e6,	// (0x000155fc) popup_vtel_slider_window_g4

0x64fd,	// (0x00015613) popup_vtel_slider_window_t1_ParamLimits

0x64fd,	// (0x00015613) popup_vtel_slider_window_t1

0x93ca,	// (0x000184e0) main_cl_pane

0xbdeb,	// (0x0001af01) popup_imed_adjust2_window_ParamLimits

0xbdc3,	// (0x0001aed9) bg_tb_trans_pane_cp05_ParamLimits

0xc860,	// (0x0001b976) popup_imed_adjust2_window_g1_ParamLimits

0xc86f,	// (0x0001b985) popup_imed_adjust2_window_g2_ParamLimits

0xc86f,	// (0x0001b985) popup_imed_adjust2_window_g2

0xc87b,	// (0x0001b991) popup_imed_adjust2_window_g3_ParamLimits

0xc87b,	// (0x0001b991) popup_imed_adjust2_window_g3

0x0002,

0xf7f2,	// (0x0001e908) popup_imed_adjust2_window_g_ParamLimits

0xf7f2,	// (0x0001e908) popup_imed_adjust2_window_g

0xc887,	// (0x0001b99d) popup_imed_adjust2_window_t1_ParamLimits

0xc89f,	// (0x0001b9b5) slider_imed_adjust_pane_ParamLimits

0xc8b3,	// (0x0001b9c9) slider_imed_adjust_pane_g1_ParamLimits

0xc8c3,	// (0x0001b9d9) slider_imed_adjust_pane_g2_ParamLimits

0xc8d3,	// (0x0001b9e9) slider_imed_adjust_pane_g3_ParamLimits

0xc8e4,	// (0x0001b9fa) slider_imed_adjust_pane_g4_ParamLimits

0xf7f9,	// (0x0001e90f) slider_imed_adjust_pane_g_ParamLimits

0x5900,	// (0x00014a16) aid_touch_area_cam4_ParamLimits

0x5900,	// (0x00014a16) aid_touch_area_cam4

0xcfcf,	// (0x0001c0e5) battery_pane_cp01

0x59cf,	// (0x00014ae5) main_camera4_pane_g6_ParamLimits

0x59cf,	// (0x00014ae5) main_camera4_pane_g6

0x59f9,	// (0x00014b0f) main_camera4_pane_t2_ParamLimits

0x59f9,	// (0x00014b0f) main_camera4_pane_t2

0x0001,

0xf8fc,	// (0x0001ea12) main_camera4_pane_t_ParamLimits

0xf8fc,	// (0x0001ea12) main_camera4_pane_t

0x5a2e,	// (0x00014b44) aid_touch_area_vid4_ParamLimits

0x5a2e,	// (0x00014b44) aid_touch_area_vid4

0x5a82,	// (0x00014b98) main_video4_pane_g5_ParamLimits

0x5a82,	// (0x00014b98) main_video4_pane_g5

0x5aa7,	// (0x00014bbd) vid4_progress_pane_ParamLimits

0x5aa7,	// (0x00014bbd) vid4_progress_pane

0xd2c5,	// (0x0001c3db) main_cset_slider_pane_g18_ParamLimits

0xd2c5,	// (0x0001c3db) main_cset_slider_pane_g18

0xd50f,	// (0x0001c625) cell_cam4_burst_pane_g2_ParamLimits

0xd50f,	// (0x0001c625) cell_cam4_burst_pane_g2

0x0001,

0xfa5b,	// (0x0001eb71) cell_cam4_burst_pane_g_ParamLimits

0xfa5b,	// (0x0001eb71) cell_cam4_burst_pane_g

0x9ba9,	// (0x00018cbf) bg_cl_pane_ParamLimits

0x9ba9,	// (0x00018cbf) bg_cl_pane

0x6b63,	// (0x00015c79) cl_header_pane_ParamLimits

0x6b63,	// (0x00015c79) cl_header_pane

0x6b77,	// (0x00015c8d) cl_listscroll_pane_ParamLimits

0x6b77,	// (0x00015c8d) cl_listscroll_pane

0xd6ed,	// (0x0001c803) bg_cl_pane_g1

0xd6f5,	// (0x0001c80b) bg_cl_pane_g2

0xd6fd,	// (0x0001c813) bg_cl_pane_g3

0xd705,	// (0x0001c81b) bg_cl_pane_g4

0xd70d,	// (0x0001c823) bg_cl_pane_g5

0xd715,	// (0x0001c82b) bg_cl_pane_g6

0xd71d,	// (0x0001c833) bg_cl_pane_g7

0xd725,	// (0x0001c83b) bg_cl_pane_g8

0xd72d,	// (0x0001c843) bg_cl_pane_g9

0x0008,

0xfa96,	// (0x0001ebac) bg_cl_pane_g

0x6b87,	// (0x00015c9d) aid_height_cl_leading_ParamLimits

0x6b87,	// (0x00015c9d) aid_height_cl_leading

0x6b93,	// (0x00015ca9) aid_height_cl_text_ParamLimits

0x6b93,	// (0x00015ca9) aid_height_cl_text

0x943a,	// (0x00018550) bg_cl_header_pane_ParamLimits

0x943a,	// (0x00018550) bg_cl_header_pane

0x6bb2,	// (0x00015cc8) cl_header_pane_g1_ParamLimits

0x6bb2,	// (0x00015cc8) cl_header_pane_g1

0x6bc8,	// (0x00015cde) cl_header_pane_t1_ParamLimits

0x6bc8,	// (0x00015cde) cl_header_pane_t1

0xd735,	// (0x0001c84b) cl_list_pane

0xd280,	// (0x0001c396) hc_scroll_pane_cp01

0xa065,	// (0x0001917b) bg_cl_header_pane_g1

0xd130,	// (0x0001c246) bg_cl_header_pane_g2

0xa085,	// (0x0001919b) bg_cl_header_pane_g3

0xd140,	// (0x0001c256) bg_cl_header_pane_g4

0xd138,	// (0x0001c24e) bg_cl_header_pane_g5

0xd3fe,	// (0x0001c514) bg_cl_header_pane_g6

0xd158,	// (0x0001c26e) bg_cl_header_pane_g7

0xd160,	// (0x0001c276) bg_cl_header_pane_g8

0xd150,	// (0x0001c266) bg_cl_header_pane_g9

0x0008,

0xfaa9,	// (0x0001ebbf) bg_cl_header_pane_g

0x6be1,	// (0x00015cf7) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x6be1,	// (0x00015cf7) hc_cl_list_double_graphic_heading_pane

0x6bf2,	// (0x00015d08) hc_cl_list_single_graphic_pane_ParamLimits

0x6bf2,	// (0x00015d08) hc_cl_list_single_graphic_pane

0x6c0b,	// (0x00015d21) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x6c0b,	// (0x00015d21) hc_cl_list_single_graphic_pane_g1

0x6c17,	// (0x00015d2d) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x6c17,	// (0x00015d2d) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfabc,	// (0x0001ebd2) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfabc,	// (0x0001ebd2) hc_cl_list_single_graphic_pane_g

0x6c2b,	// (0x00015d41) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x6c2b,	// (0x00015d41) hc_cl_list_single_graphic_pane_t1

0x6c0b,	// (0x00015d21) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x6c0b,	// (0x00015d21) hc_cl_list_double_graphic_heading_pane_g1

0x6c40,	// (0x00015d56) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x6c40,	// (0x00015d56) hc_cl_list_double_graphic_heading_pane_g2

0x6c54,	// (0x00015d6a) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x6c54,	// (0x00015d6a) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfac1,	// (0x0001ebd7) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfac1,	// (0x0001ebd7) hc_cl_list_double_graphic_heading_pane_g

0x6c68,	// (0x00015d7e) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x6c68,	// (0x00015d7e) hc_cl_list_double_graphic_heading_pane_t1

0x6c7d,	// (0x00015d93) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x6c7d,	// (0x00015d93) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfac8,	// (0x0001ebde) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfac8,	// (0x0001ebde) hc_cl_list_double_graphic_heading_pane_t

0xd746,	// (0x0001c85c) vid4_progress_pane_g1

0xd756,	// (0x0001c86c) vid4_progress_pane_g2

0x6c92,	// (0x00015da8) vid4_progress_pane_g3

0xd766,	// (0x0001c87c) vid4_progress_pane_g4

0x0004,

0xfacd,	// (0x0001ebe3) vid4_progress_pane_g

0x6ca4,	// (0x00015dba) vid4_progress_pane_t1

0xd77e,	// (0x0001c894) vid4_progress_pane_t2

0x0002,

0xfad8,	// (0x0001ebee) vid4_progress_pane_t

0x6cba,	// (0x00015dd0) wait_bar_pane_cp07

0xc0d1,	// (0x0001b1e7) blid_firmament_pane_ParamLimits

0xc114,	// (0x0001b22a) popup_blid_sat_info2_window_g1

0xc138,	// (0x0001b24e) popup_blid_sat_info2_window_t3

0xc146,	// (0x0001b25c) popup_blid_sat_info2_window_t4

0xc154,	// (0x0001b26a) popup_blid_sat_info2_window_t5

0xc162,	// (0x0001b278) popup_blid_sat_info2_window_t6

0xc172,	// (0x0001b288) popup_blid_sat_info2_window_t7

0xc180,	// (0x0001b296) popup_blid_sat_info2_window_t8

0xc18e,	// (0x0001b2a4) popup_blid_sat_info2_window_t9

0xc19c,	// (0x0001b2b2) popup_blid_sat_info2_window_t10

0xc25e,	// (0x0001b374) aid_firma_cardinal_ParamLimits

0xc272,	// (0x0001b388) blid_firmament_pane_t1_ParamLimits

0xc289,	// (0x0001b39f) blid_firmament_pane_t2_ParamLimits

0xc2a0,	// (0x0001b3b6) blid_firmament_pane_t3_ParamLimits

0xc2b7,	// (0x0001b3cd) blid_firmament_pane_t4_ParamLimits

0xf6e6,	// (0x0001e7fc) blid_firmament_pane_t_ParamLimits

0xc2ce,	// (0x0001b3e4) blid_sat_info_pane_ParamLimits

0x943a,	// (0x00018550) main_cam_set_pane_ParamLimits

0x4fa9,	// (0x000140bf) aid_size_cell_colour_35_ParamLimits

0x4fc9,	// (0x000140df) aid_size_cell_colour_112_ParamLimits

0x4fe9,	// (0x000140ff) aid_size_cell_effect_ParamLimits

0xbdc3,	// (0x0001aed9) bg_tb_trans_pane_cp02_ParamLimits

0xa315,	// (0x0001942b) heading_imed_pane_ParamLimits

0x5009,	// (0x0001411f) listscroll_imed_pane_ParamLimits

0xb3a9,	// (0x0001a4bf) popup_call2_audio_first_window_g5_ParamLimits

0xb3a9,	// (0x0001a4bf) popup_call2_audio_first_window_g5

0x55a7,	// (0x000146bd) aid_size_touch_image3_arrow_left_ParamLimits

0x55a7,	// (0x000146bd) aid_size_touch_image3_arrow_left

0x55d3,	// (0x000146e9) aid_size_touch_image3_arrow_right_ParamLimits

0x55d3,	// (0x000146e9) aid_size_touch_image3_arrow_right

0xd793,	// (0x0001c8a9) vid4_progress_pane_t3

0x531e,	// (0x00014434) main_hwr_training_symbol_option_pane_ParamLimits

0x531e,	// (0x00014434) main_hwr_training_symbol_option_pane

0xcb4d,	// (0x0001bc63) popup_hwr_training_preview_window_ParamLimits

0xcb4d,	// (0x0001bc63) popup_hwr_training_preview_window

0x533e,	// (0x00014454) hwr_training_navi_pane_g5_ParamLimits

0x533e,	// (0x00014454) hwr_training_navi_pane_g5

0xd10c,	// (0x0001c222) popup_char_count_window

0x943a,	// (0x00018550) bg_popup_sub_pane_cp20_ParamLimits

0x660b,	// (0x00015721) list_vitu2_match_list_pane_ParamLimits

0x661a,	// (0x00015730) vitu2_page_scroll_pane_ParamLimits

0x661a,	// (0x00015730) vitu2_page_scroll_pane

0xd7cb,	// (0x0001c8e1) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd7cb,	// (0x0001c8e1) list_single_hwr_training_symbol_option_pane

0xd7de,	// (0x0001c8f4) list_single_hwr_training_symbol_option_pane_g1

0xd7e6,	// (0x0001c8fc) list_single_hwr_training_symbol_option_pane_t1

0xd7f4,	// (0x0001c90a) bg_button_pane_cp023

0xd7fd,	// (0x0001c913) bg_button_pane_cp024

0x6d03,	// (0x00015e19) vitu2_page_scroll_pane_g1

0x6d0b,	// (0x00015e21) vitu2_page_scroll_pane_g2

0x0001,

0xfadf,	// (0x0001ebf5) vitu2_page_scroll_pane_g

0x6d13,	// (0x00015e29) vitu2_page_scroll_pane_t1

0xc307,	// (0x0001b41d) popup_char_count_window_g1

0xd830,	// (0x0001c946) popup_char_count_window_g2

0xd839,	// (0x0001c94f) popup_char_count_window_g3

0x0002,

0xfae4,	// (0x0001ebfa) popup_char_count_window_g

0xd842,	// (0x0001c958) popup_char_count_window_t1

0x93ca,	// (0x000184e0) main_vded2_pane

0xc84c,	// (0x0001b962) aid_size_cell_imed_line

0xc856,	// (0x0001b96c) grid_imed_line_width_pane

0xd07f,	// (0x0001c195) vid4_indicators_pane_g4

0xd850,	// (0x0001c966) cell_imed_line_width_pane_ParamLimits

0xd850,	// (0x0001c966) cell_imed_line_width_pane

0xd864,	// (0x0001c97a) cell_imed_line_width_pane_g1

0xd86d,	// (0x0001c983) cell_imed_line_width_pane_g2

0x0001,

0xfaeb,	// (0x0001ec01) cell_imed_line_width_pane_g

0x6d22,	// (0x00015e38) main_vded2_pane_g1_ParamLimits

0x6d22,	// (0x00015e38) main_vded2_pane_g1

0x6d38,	// (0x00015e4e) main_vded2_pane_g2_ParamLimits

0x6d38,	// (0x00015e4e) main_vded2_pane_g2

0x0001,

0xfaf0,	// (0x0001ec06) main_vded2_pane_g_ParamLimits

0xfaf0,	// (0x0001ec06) main_vded2_pane_g

0x6d4a,	// (0x00015e60) vded2_slider_pane_ParamLimits

0x6d4a,	// (0x00015e60) vded2_slider_pane

0x6d5a,	// (0x00015e70) aid_size_touch_vded2_end

0x6d64,	// (0x00015e7a) aid_size_touch_vded2_playhead

0xd875,	// (0x0001c98b) aid_size_touch_vded2_start

0xd87d,	// (0x0001c993) vded2_slider_bg_pane

0xd886,	// (0x0001c99c) vded2_slider_pane_g1

0xd88f,	// (0x0001c9a5) vded2_slider_pane_g2

0x6d6e,	// (0x00015e84) vded2_slider_pane_g3

0x0002,

0xfaf5,	// (0x0001ec0b) vded2_slider_pane_g

0xd897,	// (0x0001c9ad) vded2_slider_bg_pane_g1

0xd8a0,	// (0x0001c9b6) vded2_slider_bg_pane_g2

0xd8a9,	// (0x0001c9bf) vded2_slider_bg_pane_g3

0x0002,

0xfafc,	// (0x0001ec12) vded2_slider_bg_pane_g

0x2d45,	// (0x00011e5b) aid_postcard_touch_down_pane_ParamLimits

0x2d45,	// (0x00011e5b) aid_postcard_touch_down_pane

0x2d5b,	// (0x00011e71) aid_postcard_touch_up_pane_ParamLimits

0x2d5b,	// (0x00011e71) aid_postcard_touch_up_pane

0x93ca,	// (0x000184e0) main_blid2_pane

0xbdd1,	// (0x0001aee7) popup_blid2_search_window

0x93ca,	// (0x000184e0) blid2_gps_pane

0x93ca,	// (0x000184e0) blid2_navig_pane

0x93ca,	// (0x000184e0) blid2_search_pane

0x93ca,	// (0x000184e0) blid2_tripm_pane

0x6d79,	// (0x00015e8f) blid2_search_pane_g1_ParamLimits

0x6d79,	// (0x00015e8f) blid2_search_pane_g1

0x6d91,	// (0x00015ea7) blid2_search_pane_t1_ParamLimits

0x6d91,	// (0x00015ea7) blid2_search_pane_t1

0x6da3,	// (0x00015eb9) aid_size_cell_blid2_gps_ParamLimits

0x6da3,	// (0x00015eb9) aid_size_cell_blid2_gps

0x6dbb,	// (0x00015ed1) blid2_gps_pane_g1_ParamLimits

0x6dbb,	// (0x00015ed1) blid2_gps_pane_g1

0x6dcf,	// (0x00015ee5) grid_blid2_satellite_pane_ParamLimits

0x6dcf,	// (0x00015ee5) grid_blid2_satellite_pane

0x6de9,	// (0x00015eff) blid2_navig_pane_g1_ParamLimits

0x6de9,	// (0x00015eff) blid2_navig_pane_g1

0x6df5,	// (0x00015f0b) blid2_navig_pane_t1_ParamLimits

0x6df5,	// (0x00015f0b) blid2_navig_pane_t1

0x6e10,	// (0x00015f26) blid2_navig_pane_t2_ParamLimits

0x6e10,	// (0x00015f26) blid2_navig_pane_t2

0x0001,

0xfb03,	// (0x0001ec19) blid2_navig_pane_t_ParamLimits

0xfb03,	// (0x0001ec19) blid2_navig_pane_t

0x6e2b,	// (0x00015f41) blid2_navig_ring_pane_ParamLimits

0x6e2b,	// (0x00015f41) blid2_navig_ring_pane

0x6e44,	// (0x00015f5a) blid2_speed_pane_ParamLimits

0x6e44,	// (0x00015f5a) blid2_speed_pane

0x6e50,	// (0x00015f66) blid2_tripm_pane_g1_ParamLimits

0x6e50,	// (0x00015f66) blid2_tripm_pane_g1

0x6e6b,	// (0x00015f81) blid2_tripm_pane_g2_ParamLimits

0x6e6b,	// (0x00015f81) blid2_tripm_pane_g2

0x6e7f,	// (0x00015f95) blid2_tripm_pane_g3_ParamLimits

0x6e7f,	// (0x00015f95) blid2_tripm_pane_g3

0x6e93,	// (0x00015fa9) blid2_tripm_pane_g4_ParamLimits

0x6e93,	// (0x00015fa9) blid2_tripm_pane_g4

0x6ea7,	// (0x00015fbd) blid2_tripm_pane_g5_ParamLimits

0x6ea7,	// (0x00015fbd) blid2_tripm_pane_g5

0x0005,

0xfb08,	// (0x0001ec1e) blid2_tripm_pane_g_ParamLimits

0xfb08,	// (0x0001ec1e) blid2_tripm_pane_g

0x6ecd,	// (0x00015fe3) blid2_tripm_pane_t1_ParamLimits

0x6ecd,	// (0x00015fe3) blid2_tripm_pane_t1

0x6ee8,	// (0x00015ffe) blid2_tripm_pane_t2_ParamLimits

0x6ee8,	// (0x00015ffe) blid2_tripm_pane_t2

0x6f01,	// (0x00016017) blid2_tripm_pane_t3_ParamLimits

0x6f01,	// (0x00016017) blid2_tripm_pane_t3

0x0003,

0xfb15,	// (0x0001ec2b) blid2_tripm_pane_t_ParamLimits

0xfb15,	// (0x0001ec2b) blid2_tripm_pane_t

0x6f48,	// (0x0001605e) cell_blid2_satellite_pane_ParamLimits

0x6f48,	// (0x0001605e) cell_blid2_satellite_pane

0x6f66,	// (0x0001607c) cell_blid2_satellite_pane_g1

0xd8b2,	// (0x0001c9c8) cell_blid2_satellite_pane_t1

0xc2de,	// (0x0001b3f4) blid2_speed_pane_g1

0xd8c0,	// (0x0001c9d6) blid2_speed_pane_t1

0xd8ce,	// (0x0001c9e4) blid2_speed_pane_t2

0x0001,

0xfb1e,	// (0x0001ec34) blid2_speed_pane_t

0xc2de,	// (0x0001b3f4) blid2_navig_ring_pane_g1

0x6f6f,	// (0x00016085) blid2_navig_ring_pane_g2

0x6f77,	// (0x0001608d) blid2_navig_ring_pane_g3

0x6f7f,	// (0x00016095) blid2_navig_ring_pane_g4

0x6f87,	// (0x0001609d) blid2_navig_ring_pane_g5

0x0004,

0xfb23,	// (0x0001ec39) blid2_navig_ring_pane_g

0x93ca,	// (0x000184e0) bg_popup_window_pane_cp011

0xd8dc,	// (0x0001c9f2) popup_blid2_search_window_g1

0xd8e4,	// (0x0001c9fa) popup_blid2_search_window_t1

0xd8f2,	// (0x0001ca08) popup_blid2_search_window_t2

0x0001,

0xfb2e,	// (0x0001ec44) popup_blid2_search_window_t

0x9f74,	// (0x0001908a) main_browser_pane_g1

0x9ba9,	// (0x00018cbf) main_browser_pane_ParamLimits

0x943a,	// (0x00018550) bg_button_pane_cp011_ParamLimits

0x5eaa,	// (0x00014fc0) cell_vitu2_function_pane_g1_ParamLimits

0xbdc3,	// (0x0001aed9) bg_popup_sub_pane_cp22_ParamLimits

0x67f9,	// (0x0001590f) input_focus_pane_cp08_ParamLimits

0x6810,	// (0x00015926) popup_vitu2_query_button_pane_ParamLimits

0x6810,	// (0x00015926) popup_vitu2_query_button_pane

0x6821,	// (0x00015937) popup_vitu2_query_input_button_pane

0xd459,	// (0x0001c56f) popup_vitu2_query_window_g1_ParamLimits

0x682b,	// (0x00015941) popup_vitu2_query_window_g2_ParamLimits

0xfa2f,	// (0x0001eb45) popup_vitu2_query_window_g_ParamLimits

0x93ca,	// (0x000184e0) bg_button_pane_cp026

0x6f8f,	// (0x000160a5) popup_vitu2_query_input_button_pane_g1

0x93ca,	// (0x000184e0) bg_button_pane_cp025

0xd900,	// (0x0001ca16) popup_vitu2_query_button_pane_t1

0x43dc,	// (0x000134f2) main_mp3_pane_t6

0x43ea,	// (0x00013500) popup_slider_window_cp01

0xcfeb,	// (0x0001c101) cam4_battery_pane

0xd03e,	// (0x0001c154) cam4_battery_pane_cp02

0xd73e,	// (0x0001c854) cam4_battery_pane_cp01

0xd73e,	// (0x0001c854) cam4_battery_pane_cp03

0xc2de,	// (0x0001b3f4) cam4_battery_pane_g1

0xd90e,	// (0x0001ca24) cam4_battery_pane_g2

0x0001,

0xfb33,	// (0x0001ec49) cam4_battery_pane_g

0xc1aa,	// (0x0001b2c0) popup_blid_sat_info2_window_t11

0xa765,	// (0x0001987b) aid_size_touch_mv_arrow_left_ParamLimits

0xa790,	// (0x000198a6) aid_size_touch_mv_arrow_right_ParamLimits

0xa7ee,	// (0x00019904) navi_pane_g1_ParamLimits

0xa7fa,	// (0x00019910) navi_pane_g2_ParamLimits

0xa828,	// (0x0001993e) navi_pane_g3_ParamLimits

0xf3e5,	// (0x0001e4fb) navi_pane_g_ParamLimits

0x277a,	// (0x00011890) navi_pane_mv_t1_ParamLimits

0x5015,	// (0x0001412b) grid_imed_effect_pane_ParamLimits

0x1350,	// (0x00010466) aid_placing_vt_slider_lsc

0x9ec3,	// (0x00018fd9) aid_placing_vt_slider_prt

0x943a,	// (0x00018550) bg_tb_trans_pane_cp01_ParamLimits

0xc44c,	// (0x0001b562) popup_image_details_window_g1_ParamLimits

0xc45f,	// (0x0001b575) popup_image_details_window_g2_ParamLimits

0xc474,	// (0x0001b58a) popup_image_details_window_g3_ParamLimits

0xc474,	// (0x0001b58a) popup_image_details_window_g3

0xf72b,	// (0x0001e841) popup_image_details_window_g_ParamLimits

0xc488,	// (0x0001b59e) popup_image_details_window_t1_ParamLimits

0xc49a,	// (0x0001b5b0) popup_image_details_window_t2_ParamLimits

0xc4b3,	// (0x0001b5c9) popup_image_details_window_t3_ParamLimits

0xc4c7,	// (0x0001b5dd) popup_image_details_window_t4_ParamLimits

0xc4e2,	// (0x0001b5f8) popup_image_details_window_t5_ParamLimits

0xf732,	// (0x0001e848) popup_image_details_window_t_ParamLimits

0x6b9f,	// (0x00015cb5) cl_header_name_pane_ParamLimits

0x6b9f,	// (0x00015cb5) cl_header_name_pane

0x6f97,	// (0x000160ad) cl_header_name_pane_t1_ParamLimits

0x6f97,	// (0x000160ad) cl_header_name_pane_t1

0x6fb8,	// (0x000160ce) cl_header_name_pane_t2_ParamLimits

0x6fb8,	// (0x000160ce) cl_header_name_pane_t2

0x6ffa,	// (0x00016110) cl_header_name_pane_t3_ParamLimits

0x6ffa,	// (0x00016110) cl_header_name_pane_t3

0x0002,

0xfb38,	// (0x0001ec4e) cl_header_name_pane_t_ParamLimits

0xfb38,	// (0x0001ec4e) cl_header_name_pane_t

0xa8b7,	// (0x000199cd) navi_pane_mv_g2_ParamLimits

0xd0c9,	// (0x0001c1df) field_vitu2_entry_pane_g1_ParamLimits

0xd0d5,	// (0x0001c1eb) field_vitu2_entry_pane_g2_ParamLimits

0xd0e1,	// (0x0001c1f7) field_vitu2_entry_pane_g3_ParamLimits

0xd0e1,	// (0x0001c1f7) field_vitu2_entry_pane_g3

0xf92e,	// (0x0001ea44) field_vitu2_entry_pane_g_ParamLimits

0xd114,	// (0x0001c22a) cell_vitu2_itu_pane_g1_ParamLimits

0x5d52,	// (0x00014e68) cell_vitu2_itu_pane_g2_ParamLimits

0x5d52,	// (0x00014e68) cell_vitu2_itu_pane_g2

0x0001,

0xf93a,	// (0x0001ea50) cell_vitu2_itu_pane_g_ParamLimits

0xf93a,	// (0x0001ea50) cell_vitu2_itu_pane_g

0x943a,	// (0x00018550) bg_vkb2_func_pane_cp05_ParamLimits

0x943a,	// (0x00018550) bg_vkb2_func_pane_cp05

0x943a,	// (0x00018550) bg_vkb2_func_pane_cp03

0x943a,	// (0x00018550) bg_vkb2_func_pane_cp04

0x943a,	// (0x00018550) bg_vkb2_func_pane_cp10_ParamLimits

0x943a,	// (0x00018550) bg_vkb2_func_pane_cp10

0x6b41,	// (0x00015c57) bg_vkb2_func_pane_cp08

0x6b27,	// (0x00015c3d) bg_vkb2_func_pane_cp06

0x6b35,	// (0x00015c4b) bg_vkb2_func_pane_cp07

0xd806,	// (0x0001c91c) bg_vkb2_func_pane_cp11_ParamLimits

0xd806,	// (0x0001c91c) bg_vkb2_func_pane_cp11

0xd81b,	// (0x0001c931) bg_vkb2_func_pane_cp12_ParamLimits

0xd81b,	// (0x0001c931) bg_vkb2_func_pane_cp12

0x93ca,	// (0x000184e0) bg_vkb2_func_pane_cp09

0xd130,	// (0x0001c246) bg_vkb2_func_pane_g1

0xa085,	// (0x0001919b) bg_vkb2_func_pane_g2

0xd138,	// (0x0001c24e) bg_vkb2_func_pane_g3

0xd140,	// (0x0001c256) bg_vkb2_func_pane_g4

0xd3fe,	// (0x0001c514) bg_vkb2_func_pane_g5

0xd158,	// (0x0001c26e) bg_vkb2_func_pane_g6

0xd160,	// (0x0001c276) bg_vkb2_func_pane_g7

0xd150,	// (0x0001c266) bg_vkb2_func_pane_g8

0xa065,	// (0x0001917b) bg_vkb2_func_pane_g9

0x0008,

0xfb3f,	// (0x0001ec55) bg_vkb2_func_pane_g

0x6ebb,	// (0x00015fd1) blid2_tripm_pane_g6_ParamLimits

0x6ebb,	// (0x00015fd1) blid2_tripm_pane_g6

0xce3e,	// (0x0001bf54) mp4_progress_pane_g1

0x6f34,	// (0x0001604a) blid2_tripm_values_pane_ParamLimits

0x6f34,	// (0x0001604a) blid2_tripm_values_pane

0x702b,	// (0x00016141) blid2_tripm_values_pane_t1

0x7039,	// (0x0001614f) blid2_tripm_values_pane_t2

0x7047,	// (0x0001615d) blid2_tripm_values_pane_t3

0x7055,	// (0x0001616b) blid2_tripm_values_pane_t4

0x7063,	// (0x00016179) blid2_tripm_values_pane_t5

0x7071,	// (0x00016187) blid2_tripm_values_pane_t6

0x707f,	// (0x00016195) blid2_tripm_values_pane_t7

0x708d,	// (0x000161a3) blid2_tripm_values_pane_t8

0x709b,	// (0x000161b1) blid2_tripm_values_pane_t9

0x0008,

0xfb52,	// (0x0001ec68) blid2_tripm_values_pane_t

0x1392,	// (0x000104a8) call_video_pane_t1_ParamLimits

0x13b0,	// (0x000104c6) call_video_pane_t2_ParamLimits

0xf26e,	// (0x0001e384) call_video_pane_t_ParamLimits

0x2c4a,	// (0x00011d60) msg_header_pane_g1_ParamLimits

0xaab1,	// (0x00019bc7) msg_header_pane_g2_ParamLimits

0xaab1,	// (0x00019bc7) msg_header_pane_g2

0x0001,

0xf488,	// (0x0001e59e) msg_header_pane_g_ParamLimits

0xf488,	// (0x0001e59e) msg_header_pane_g

0x9ba9,	// (0x00018cbf) main_clock2_pane_ParamLimits

0x4d12,	// (0x00013e28) grid_clock2_toolbar_pane_ParamLimits

0x4d12,	// (0x00013e28) grid_clock2_toolbar_pane

0x4d12,	// (0x00013e28) listscroll_clock2_pane_ParamLimits

0x4d12,	// (0x00013e28) listscroll_clock2_pane

0x4e09,	// (0x00013f1f) main_clock2_pane_t3_ParamLimits

0x4e09,	// (0x00013f1f) main_clock2_pane_t3

0x4e2d,	// (0x00013f43) main_clock2_pane_t4_ParamLimits

0x4e2d,	// (0x00013f43) main_clock2_pane_t4

0xd918,	// (0x0001ca2e) cell_clock2_toolbar_pane

0xd920,	// (0x0001ca36) cell_clock2_toolbar_pane_cp01

0xd920,	// (0x0001ca36) cell_clock2_toolbar_pane_cp02

0xd928,	// (0x0001ca3e) cell_clock2_toolbar_pane_cp03

0xd930,	// (0x0001ca46) list_clock2_pane

0xa6ea,	// (0x00019800) scroll_pane_cp10

0xd938,	// (0x0001ca4e) list_single_clock2_pane_ParamLimits

0xd938,	// (0x0001ca4e) list_single_clock2_pane

0x9e22,	// (0x00018f38) list_highlight_pane_cp08

0xd945,	// (0x0001ca5b) list_single_clock2_pane_t1

0xd953,	// (0x0001ca69) list_single_clock2_pane_t2

0x0001,

0xfb65,	// (0x0001ec7b) list_single_clock2_pane_t

0x93ca,	// (0x000184e0) bg_button_pane_cp10

0xd961,	// (0x0001ca77) cell_clock2_toolbar_pane_g1

0x2cd1,	// (0x00011de7) aid_main_viewer_pane_g1_ParamLimits

0x2cd1,	// (0x00011de7) aid_main_viewer_pane_g1

0x2cdf,	// (0x00011df5) aid_main_viewer_pane_g2_ParamLimits

0x2cdf,	// (0x00011df5) aid_main_viewer_pane_g2

0x2ced,	// (0x00011e03) aid_main_viewer_pane_g3_ParamLimits

0x2ced,	// (0x00011e03) aid_main_viewer_pane_g3

0x2cfc,	// (0x00011e12) aid_main_viewer_pane_g4_ParamLimits

0x2cfc,	// (0x00011e12) aid_main_viewer_pane_g4

0x0003,

0xf499,	// (0x0001e5af) aid_main_viewer_pane_g_ParamLimits

0xf499,	// (0x0001e5af) aid_main_viewer_pane_g

0x3604,	// (0x0001271a) main_calc_pane_ParamLimits

0x3618,	// (0x0001272e) main_dialer2_pane_ParamLimits

0x93ca,	// (0x000184e0) main_cam6_pane

0x93ca,	// (0x000184e0) main_vid6_pane

0x4d1e,	// (0x00013e34) listscroll_gen_pane_cp06_ParamLimits

0x4d1e,	// (0x00013e34) listscroll_gen_pane_cp06

0x4e50,	// (0x00013f66) main_clock2_pane_t5_ParamLimits

0x4e50,	// (0x00013f66) main_clock2_pane_t5

0x4eaa,	// (0x00013fc0) aid_call2_pane_cp10_ParamLimits

0x4ebc,	// (0x00013fd2) aid_call_pane_cp10_ParamLimits

0xa759,	// (0x0001986f) popup_clock_analogue_window_cp10_g1_ParamLimits

0xa759,	// (0x0001986f) popup_clock_analogue_window_cp10_g2_ParamLimits

0x4ece,	// (0x00013fe4) popup_clock_analogue_window_cp10_g3_ParamLimits

0x4ece,	// (0x00013fe4) popup_clock_analogue_window_cp10_g4_ParamLimits

0xa759,	// (0x0001986f) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7e7,	// (0x0001e8fd) popup_clock_analogue_window_cp10_g_ParamLimits

0x4ee0,	// (0x00013ff6) popup_clock_analogue_window_cp10_t1_ParamLimits

0x5554,	// (0x0001466a) cell_dialer2_keypad_pane_g2_ParamLimits

0x5554,	// (0x0001466a) cell_dialer2_keypad_pane_g2

0x0001,

0xf8cd,	// (0x0001e9e3) cell_dialer2_keypad_pane_g_ParamLimits

0xf8cd,	// (0x0001e9e3) cell_dialer2_keypad_pane_g

0x5570,	// (0x00014686) cell_dialer2_keypad_pane_t1

0x61c4,	// (0x000152da) main_cset_text2_pane_ParamLimits

0x61c4,	// (0x000152da) main_cset_text2_pane

0xd645,	// (0x0001c75b) area_vitu2_query_pane_g1_ParamLimits

0x6ac6,	// (0x00015bdc) area_vitu2_query_pane_g2_ParamLimits

0xfa82,	// (0x0001eb98) area_vitu2_query_pane_g_ParamLimits

0xd6c9,	// (0x0001c7df) area_vitu2_query_pane_t7_ParamLimits

0xd6c9,	// (0x0001c7df) area_vitu2_query_pane_t7

0x6b27,	// (0x00015c3d) bg_button_pane_cp018_ParamLimits

0x6b35,	// (0x00015c4b) bg_button_pane_cp021_ParamLimits

0x6b41,	// (0x00015c57) bg_button_pane_cp022_ParamLimits

0x6b41,	// (0x00015c57) bg_vkb2_func_pane_cp08_ParamLimits

0x6b27,	// (0x00015c3d) bg_vkb2_func_pane_cp06_ParamLimits

0x6b35,	// (0x00015c4b) bg_vkb2_func_pane_cp07_ParamLimits

0x6b52,	// (0x00015c68) input_focus_pane_cp09_ParamLimits

0xd969,	// (0x0001ca7f) cam6_autofocus_pane_ParamLimits

0xd969,	// (0x0001ca7f) cam6_autofocus_pane

0x70a9,	// (0x000161bf) cam6_image_uncrop_pane_ParamLimits

0x70a9,	// (0x000161bf) cam6_image_uncrop_pane

0x70b8,	// (0x000161ce) cam6_indi_pane_ParamLimits

0x70b8,	// (0x000161ce) cam6_indi_pane

0x70ce,	// (0x000161e4) cam6_mode_pane_ParamLimits

0x70ce,	// (0x000161e4) cam6_mode_pane

0x70e0,	// (0x000161f6) cam6_timer_pane_ParamLimits

0x70e0,	// (0x000161f6) cam6_timer_pane

0x70f0,	// (0x00016206) cam6_zoom_pane_ParamLimits

0x70f0,	// (0x00016206) cam6_zoom_pane

0x70fc,	// (0x00016212) cam6_mode_pane_g1_ParamLimits

0x70fc,	// (0x00016212) cam6_mode_pane_g1

0x710c,	// (0x00016222) cam6_mode_pane_g2_ParamLimits

0x710c,	// (0x00016222) cam6_mode_pane_g2

0x711c,	// (0x00016232) cam6_mode_pane_g3_ParamLimits

0x711c,	// (0x00016232) cam6_mode_pane_g3

0x712c,	// (0x00016242) cam6_mode_pane_g4_ParamLimits

0x712c,	// (0x00016242) cam6_mode_pane_g4

0x0003,

0xfb6a,	// (0x0001ec80) cam6_mode_pane_g_ParamLimits

0xfb6a,	// (0x0001ec80) cam6_mode_pane_g

0xd21a,	// (0x0001c330) bg_tb_trans_pane_cp08_ParamLimits

0xd21a,	// (0x0001c330) bg_tb_trans_pane_cp08

0xd977,	// (0x0001ca8d) cam6_battery_pane_ParamLimits

0xd977,	// (0x0001ca8d) cam6_battery_pane

0xd98d,	// (0x0001caa3) cam6_indi_pane_g1_ParamLimits

0xd98d,	// (0x0001caa3) cam6_indi_pane_g1

0xd99f,	// (0x0001cab5) cam6_indi_pane_g2_ParamLimits

0xd99f,	// (0x0001cab5) cam6_indi_pane_g2

0xd9b1,	// (0x0001cac7) cam6_indi_pane_g3_ParamLimits

0xd9b1,	// (0x0001cac7) cam6_indi_pane_g3

0x0002,

0xfb73,	// (0x0001ec89) cam6_indi_pane_g_ParamLimits

0xfb73,	// (0x0001ec89) cam6_indi_pane_g

0xd9c3,	// (0x0001cad9) cam6_indi_pane_t1_ParamLimits

0xd9c3,	// (0x0001cad9) cam6_indi_pane_t1

0x713c,	// (0x00016252) cam6_autofocus_pane_g1

0x7144,	// (0x0001625a) cam6_autofocus_pane_g2

0x714c,	// (0x00016262) cam6_autofocus_pane_g3

0x7154,	// (0x0001626a) cam6_autofocus_pane_g4

0x0003,

0xfb7a,	// (0x0001ec90) cam6_autofocus_pane_g

0xd9e9,	// (0x0001caff) cam6_timer_pane_g1

0xd9f1,	// (0x0001cb07) cam6_timer_pane_t1

0xd9ff,	// (0x0001cb15) cam6_zoom_cont_pane

0xda07,	// (0x0001cb1d) cam6_zoom_pane_g1

0xda0f,	// (0x0001cb25) cam6_zoom_pane_g2

0x715c,	// (0x00016272) cam6_zoom_pane_g3

0x0002,

0xfb83,	// (0x0001ec99) cam6_zoom_pane_g

0xc2de,	// (0x0001b3f4) cam6_battery_pane_g1

0xc2de,	// (0x0001b3f4) cam6_battery_pane_g2

0x0001,

0xf6ef,	// (0x0001e805) cam6_battery_pane_g

0xda17,	// (0x0001cb2d) cam6_zoom_cont_pane_g1

0xda20,	// (0x0001cb36) cam6_zoom_cont_pane_g2

0xda29,	// (0x0001cb3f) cam6_zoom_cont_pane_g3

0x0002,

0xfb8a,	// (0x0001eca0) cam6_zoom_cont_pane_g

0x7179,	// (0x0001628f) cam6_mode_pane_cp_ParamLimits

0x7179,	// (0x0001628f) cam6_mode_pane_cp

0x70f0,	// (0x00016206) cam6_zoom_pane_cp_ParamLimits

0x70f0,	// (0x00016206) cam6_zoom_pane_cp

0x718b,	// (0x000162a1) vid6_image_uncrop_cif_pane_ParamLimits

0x718b,	// (0x000162a1) vid6_image_uncrop_cif_pane

0x719b,	// (0x000162b1) vid6_image_uncrop_nhd_pane_ParamLimits

0x719b,	// (0x000162b1) vid6_image_uncrop_nhd_pane

0x70a9,	// (0x000161bf) vid6_image_uncrop_vga_pane_ParamLimits

0x70a9,	// (0x000161bf) vid6_image_uncrop_vga_pane

0x71aa,	// (0x000162c0) vid6_image_uncrop_wvga_pane_ParamLimits

0x71aa,	// (0x000162c0) vid6_image_uncrop_wvga_pane

0x71b9,	// (0x000162cf) vid6_indi_pane_ParamLimits

0x71b9,	// (0x000162cf) vid6_indi_pane

0xd21a,	// (0x0001c330) bg_tb_trans_pane_cp09_ParamLimits

0xd21a,	// (0x0001c330) bg_tb_trans_pane_cp09

0xda41,	// (0x0001cb57) cam6_battery_pane_cp_ParamLimits

0xda41,	// (0x0001cb57) cam6_battery_pane_cp

0xda4d,	// (0x0001cb63) vid6_indi_pane_g1_ParamLimits

0xda4d,	// (0x0001cb63) vid6_indi_pane_g1

0xda5f,	// (0x0001cb75) vid6_indi_pane_g2_ParamLimits

0xda5f,	// (0x0001cb75) vid6_indi_pane_g2

0xda71,	// (0x0001cb87) vid6_indi_pane_g3_ParamLimits

0xda71,	// (0x0001cb87) vid6_indi_pane_g3

0xda86,	// (0x0001cb9c) vid6_indi_pane_g4_ParamLimits

0xda86,	// (0x0001cb9c) vid6_indi_pane_g4

0xda9b,	// (0x0001cbb1) vid6_indi_pane_g5_ParamLimits

0xda9b,	// (0x0001cbb1) vid6_indi_pane_g5

0x0004,

0xfb91,	// (0x0001eca7) vid6_indi_pane_g_ParamLimits

0xfb91,	// (0x0001eca7) vid6_indi_pane_g

0xdab5,	// (0x0001cbcb) vid6_indi_pane_t1_ParamLimits

0xdab5,	// (0x0001cbcb) vid6_indi_pane_t1

0xdacb,	// (0x0001cbe1) vid6_indi_pane_t2_ParamLimits

0xdacb,	// (0x0001cbe1) vid6_indi_pane_t2

0xdaf3,	// (0x0001cc09) vid6_indi_pane_t3_ParamLimits

0xdaf3,	// (0x0001cc09) vid6_indi_pane_t3

0xdb1b,	// (0x0001cc31) vid6_indi_pane_t4_ParamLimits

0xdb1b,	// (0x0001cc31) vid6_indi_pane_t4

0x0003,

0xfb9c,	// (0x0001ecb2) vid6_indi_pane_t_ParamLimits

0xfb9c,	// (0x0001ecb2) vid6_indi_pane_t

0xdb3f,	// (0x0001cc55) wait_bar_pane_cp08

0x71d1,	// (0x000162e7) main_cset_text2_pane_t1_ParamLimits

0x71d1,	// (0x000162e7) main_cset_text2_pane_t1

0x7164,	// (0x0001627a) listscroll_gen_pane_cp06_t1_ParamLimits

0x7164,	// (0x0001627a) listscroll_gen_pane_cp06_t1

0x93ca,	// (0x000184e0) main_cam6_set_pane

0xc52c,	// (0x0001b642) bg_tb_trans_pane_cp06_ParamLimits

0xcff3,	// (0x0001c109) cam4_indicators_pane_g1_ParamLimits

0xd004,	// (0x0001c11a) cam4_indicators_pane_g2_ParamLimits

0xf90a,	// (0x0001ea20) cam4_indicators_pane_g_ParamLimits

0xd01c,	// (0x0001c132) cam4_indicators_pane_t1_ParamLimits

0x943a,	// (0x00018550) bg_tb_trans_pane_cp07_ParamLimits

0xd046,	// (0x0001c15c) vid4_indicators_pane_g1_ParamLimits

0xd05a,	// (0x0001c170) vid4_indicators_pane_g2_ParamLimits

0xd06e,	// (0x0001c184) vid4_indicators_pane_g3_ParamLimits

0xd07f,	// (0x0001c195) vid4_indicators_pane_g4_ParamLimits

0xf91c,	// (0x0001ea32) vid4_indicators_pane_g_ParamLimits

0xd09b,	// (0x0001c1b1) vid4_indicators_pane_t1_ParamLimits

0xd746,	// (0x0001c85c) vid4_progress_pane_g1_ParamLimits

0xd756,	// (0x0001c86c) vid4_progress_pane_g2_ParamLimits

0x6c92,	// (0x00015da8) vid4_progress_pane_g3_ParamLimits

0xd766,	// (0x0001c87c) vid4_progress_pane_g4_ParamLimits

0xfacd,	// (0x0001ebe3) vid4_progress_pane_g_ParamLimits

0x6ca4,	// (0x00015dba) vid4_progress_pane_t1_ParamLimits

0xd77e,	// (0x0001c894) vid4_progress_pane_t2_ParamLimits

0xd793,	// (0x0001c8a9) vid4_progress_pane_t3_ParamLimits

0xfad8,	// (0x0001ebee) vid4_progress_pane_t_ParamLimits

0x6cba,	// (0x00015dd0) wait_bar_pane_cp07_ParamLimits

0x71ef,	// (0x00016305) main_cam6_set_pane_g2_ParamLimits

0x71ef,	// (0x00016305) main_cam6_set_pane_g2

0x7213,	// (0x00016329) main_cset6_listscroll_pane_ParamLimits

0x7213,	// (0x00016329) main_cset6_listscroll_pane

0x722f,	// (0x00016345) main_cset6_slider_pane_ParamLimits

0x722f,	// (0x00016345) main_cset6_slider_pane

0x7245,	// (0x0001635b) main_cset6_text2_pane_ParamLimits

0x7245,	// (0x0001635b) main_cset6_text2_pane

0xdb4e,	// (0x0001cc64) main_cset6_text_pane

0xdb56,	// (0x0001cc6c) main_cset_list_pane_copy1_ParamLimits

0xdb56,	// (0x0001cc6c) main_cset_list_pane_copy1

0xdb66,	// (0x0001cc7c) scroll_pane_cp028_copy1

0x7253,	// (0x00016369) cset_list_set_pane_copy1

0x7265,	// (0x0001637b) aid_position_infowindow_above_copy1

0x726d,	// (0x00016383) aid_position_infowindow_below_copy1

0xdb6f,	// (0x0001cc85) cset_list_set_pane_g1_copy1

0xdb77,	// (0x0001cc8d) cset_list_set_pane_g3_copy1_ParamLimits

0xdb77,	// (0x0001cc8d) cset_list_set_pane_g3_copy1

0xdb86,	// (0x0001cc9c) cset_list_set_pane_t1_copy1_ParamLimits

0xdb86,	// (0x0001cc9c) cset_list_set_pane_t1_copy1

0x943a,	// (0x00018550) list_highlight_pane_cp021_copy1_ParamLimits

0x943a,	// (0x00018550) list_highlight_pane_cp021_copy1

0xdb9b,	// (0x0001ccb1) cset6_slider_pane_ParamLimits

0xdb9b,	// (0x0001ccb1) cset6_slider_pane

0xdbc7,	// (0x0001ccdd) main_cset6_slider_pane_g1_ParamLimits

0xdbc7,	// (0x0001ccdd) main_cset6_slider_pane_g1

0x7275,	// (0x0001638b) main_cset6_slider_pane_g2_ParamLimits

0x7275,	// (0x0001638b) main_cset6_slider_pane_g2

0xdbef,	// (0x0001cd05) main_cset6_slider_pane_g3_ParamLimits

0xdbef,	// (0x0001cd05) main_cset6_slider_pane_g3

0x729d,	// (0x000163b3) main_cset6_slider_pane_g4_ParamLimits

0x729d,	// (0x000163b3) main_cset6_slider_pane_g4

0xdbfb,	// (0x0001cd11) main_cset6_slider_pane_g5_ParamLimits

0xdbfb,	// (0x0001cd11) main_cset6_slider_pane_g5

0xd295,	// (0x0001c3ab) main_cset6_slider_pane_g7_ParamLimits

0xd295,	// (0x0001c3ab) main_cset6_slider_pane_g7

0xd2a1,	// (0x0001c3b7) main_cset6_slider_pane_g8_ParamLimits

0xd2a1,	// (0x0001c3b7) main_cset6_slider_pane_g8

0x6271,	// (0x00015387) main_cset6_slider_pane_g9_ParamLimits

0x6271,	// (0x00015387) main_cset6_slider_pane_g9

0x627d,	// (0x00015393) main_cset6_slider_pane_g10_ParamLimits

0x627d,	// (0x00015393) main_cset6_slider_pane_g10

0x6289,	// (0x0001539f) main_cset6_slider_pane_g11_ParamLimits

0x6289,	// (0x0001539f) main_cset6_slider_pane_g11

0x6295,	// (0x000153ab) main_cset6_slider_pane_g12_ParamLimits

0x6295,	// (0x000153ab) main_cset6_slider_pane_g12

0x62a1,	// (0x000153b7) main_cset6_slider_pane_g13_ParamLimits

0x62a1,	// (0x000153b7) main_cset6_slider_pane_g13

0x62ad,	// (0x000153c3) main_cset6_slider_pane_g14_ParamLimits

0x62ad,	// (0x000153c3) main_cset6_slider_pane_g14

0x72a9,	// (0x000163bf) main_cset6_slider_pane_g15_ParamLimits

0x72a9,	// (0x000163bf) main_cset6_slider_pane_g15

0xd2ad,	// (0x0001c3c3) main_cset6_slider_pane_g16_ParamLimits

0xd2ad,	// (0x0001c3c3) main_cset6_slider_pane_g16

0xd2b9,	// (0x0001c3cf) main_cset6_slider_pane_g17_ParamLimits

0xd2b9,	// (0x0001c3cf) main_cset6_slider_pane_g17

0x0011,

0xfba5,	// (0x0001ecbb) main_cset6_slider_pane_g_ParamLimits

0xfba5,	// (0x0001ecbb) main_cset6_slider_pane_g

0xdc07,	// (0x0001cd1d) main_cset6_slider_pane_t1_ParamLimits

0xdc07,	// (0x0001cd1d) main_cset6_slider_pane_t1

0x72d9,	// (0x000163ef) main_cset6_slider_pane_t2_ParamLimits

0x72d9,	// (0x000163ef) main_cset6_slider_pane_t2

0x7304,	// (0x0001641a) main_cset6_slider_pane_t3_ParamLimits

0x7304,	// (0x0001641a) main_cset6_slider_pane_t3

0x732f,	// (0x00016445) main_cset6_slider_pane_t4_ParamLimits

0x732f,	// (0x00016445) main_cset6_slider_pane_t4

0x735a,	// (0x00016470) main_cset6_slider_pane_t5_ParamLimits

0x735a,	// (0x00016470) main_cset6_slider_pane_t5

0xdc48,	// (0x0001cd5e) main_cset6_slider_pane_t7_ParamLimits

0xdc48,	// (0x0001cd5e) main_cset6_slider_pane_t7

0x7385,	// (0x0001649b) main_cset6_slider_pane_t8_ParamLimits

0x7385,	// (0x0001649b) main_cset6_slider_pane_t8

0x73a9,	// (0x000164bf) main_cset6_slider_pane_t9_ParamLimits

0x73a9,	// (0x000164bf) main_cset6_slider_pane_t9

0x73cd,	// (0x000164e3) main_cset6_slider_pane_t10_ParamLimits

0x73cd,	// (0x000164e3) main_cset6_slider_pane_t10

0x73f1,	// (0x00016507) main_cset6_slider_pane_t11_ParamLimits

0x73f1,	// (0x00016507) main_cset6_slider_pane_t11

0xdc7e,	// (0x0001cd94) main_cset6_slider_pane_t14_ParamLimits

0xdc7e,	// (0x0001cd94) main_cset6_slider_pane_t14

0xdcb7,	// (0x0001cdcd) main_cset6_slider_pane_t15_ParamLimits

0xdcb7,	// (0x0001cdcd) main_cset6_slider_pane_t15

0x000b,

0xfbca,	// (0x0001ece0) main_cset6_slider_pane_t_ParamLimits

0xfbca,	// (0x0001ece0) main_cset6_slider_pane_t

0xcb22,	// (0x0001bc38) cset_slider_pane_g1_copy1

0xd391,	// (0x0001c4a7) cset_slider_pane_g2_copy1

0xd39a,	// (0x0001c4b0) cset_slider_pane_g3_copy1

0x93ca,	// (0x000184e0) bg_popup_sub_pane_cp011_copy1

0xdcf0,	// (0x0001ce06) main_cset_text_pane_g1_copy1

0xd46d,	// (0x0001c583) main_cset_text_pane_t1_copy1

0xd47b,	// (0x0001c591) main_cset_text_pane_t2_copy1

0xd489,	// (0x0001c59f) main_cset_text_pane_t3_copy1

0xd497,	// (0x0001c5ad) main_cset_text_pane_t4_copy1

0xd4a5,	// (0x0001c5bb) main_cset_text_pane_t5_copy1

0xdcf8,	// (0x0001ce0e) main_cset_text_pane_t6_copy1

0xdd06,	// (0x0001ce1c) main_cset_text_pane_t7_copy1

0x71d1,	// (0x000162e7) main_cset_text2_pane_t1_copy1

0x943a,	// (0x00018550) main_ncimui_pane

0x385c,	// (0x00012972) popup_query_ncimui_window_ParamLimits

0x385c,	// (0x00012972) popup_query_ncimui_window

0xc5cd,	// (0x0001b6e3) field_cale_ev2_pane_g4_ParamLimits

0xc5cd,	// (0x0001b6e3) field_cale_ev2_pane_g4

0x5433,	// (0x00014549) cell_video_dialer_keypad_pane_g2_ParamLimits

0x5433,	// (0x00014549) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8a8,	// (0x0001e9be) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8a8,	// (0x0001e9be) cell_video_dialer_keypad_pane_g

0x544b,	// (0x00014561) cell_video_dialer_keypad_pane_t1

0x93ca,	// (0x000184e0) bg_popup_window_pane_cp012

0xa5d5,	// (0x000196eb) heading_pane_cp06

0xdd32,	// (0x0001ce48) ncim_query_content_pane

0x93ca,	// (0x000184e0) bg_popup_heading_pane_cp01

0xdd3a,	// (0x0001ce50) ncim_heading_pane_t1

0xdd48,	// (0x0001ce5e) ncim_indicator_popup_pane

0xdd5a,	// (0x0001ce70) ncim_query_button_pane

0xdd6e,	// (0x0001ce84) ncim_query_content_pane_t1

0xdd80,	// (0x0001ce96) ncim_query_content_pane_t2

0x0005,

0xfc0e,	// (0x0001ed24) ncim_query_content_pane_t

0xddba,	// (0x0001ced0) ncim_query_list_pane

0xddcc,	// (0x0001cee2) ncim_query_popup_pane

0xdd48,	// (0x0001ce5e) ncim_indicator_popup_pane_ParamLimits

0x760a,	// (0x00016720) ncim_query_content_pane_g1_ParamLimits

0x760a,	// (0x00016720) ncim_query_content_pane_g1

0xdd6e,	// (0x0001ce84) ncim_query_content_pane_t1_ParamLimits

0xdd80,	// (0x0001ce96) ncim_query_content_pane_t2_ParamLimits

0x7616,	// (0x0001672c) ncim_query_content_pane_t3_ParamLimits

0x7616,	// (0x0001672c) ncim_query_content_pane_t3

0x763e,	// (0x00016754) ncim_query_content_pane_t4_ParamLimits

0x763e,	// (0x00016754) ncim_query_content_pane_t4

0x7666,	// (0x0001677c) ncim_query_content_pane_t5_ParamLimits

0x7666,	// (0x0001677c) ncim_query_content_pane_t5

0xdd92,	// (0x0001cea8) ncim_query_content_pane_t6_ParamLimits

0xdd92,	// (0x0001cea8) ncim_query_content_pane_t6

0xfc0e,	// (0x0001ed24) ncim_query_content_pane_t_ParamLimits

0xddba,	// (0x0001ced0) ncim_query_list_pane_ParamLimits

0xddcc,	// (0x0001cee2) ncim_query_popup_pane_ParamLimits

0xdde0,	// (0x0001cef6) wait_bar_pane_cp04

0x93ca,	// (0x000184e0) input_focus_pane_cp011

0xdde8,	// (0x0001cefe) ncim_query_popup_pane_t1

0xddf6,	// (0x0001cf0c) ncim_list_query_list_pane_ParamLimits

0xddf6,	// (0x0001cf0c) ncim_list_query_list_pane

0x93ca,	// (0x000184e0) bg_button_pane_cp027

0xde03,	// (0x0001cf19) ncim_query_button_pane_g1

0x93ca,	// (0x000184e0) list_highlight_pane_cp012

0xde0d,	// (0x0001cf23) ncim_list_query_list_pane_g1

0xde15,	// (0x0001cf2b) ncim_list_query_list_pane_t1

0xd010,	// (0x0001c126) cam4_indicators_pane_g3_ParamLimits

0xd010,	// (0x0001c126) cam4_indicators_pane_g3

0xd08b,	// (0x0001c1a1) vid4_indicators_pane_g5_ParamLimits

0xd08b,	// (0x0001c1a1) vid4_indicators_pane_g5

0xd772,	// (0x0001c888) vid4_progress_pane_g5_ParamLimits

0xd772,	// (0x0001c888) vid4_progress_pane_g5

0x74f8,	// (0x0001660e) main_ncimui_pane_g1

0x755e,	// (0x00016674) ncimui_group_query_pane_ParamLimits

0x755e,	// (0x00016674) ncimui_group_query_pane

0x75a6,	// (0x000166bc) ncimui_list_pane_ParamLimits

0x75a6,	// (0x000166bc) ncimui_list_pane

0x75cd,	// (0x000166e3) ncimui_text_pane_ParamLimits

0x75cd,	// (0x000166e3) ncimui_text_pane

0x768e,	// (0x000167a4) ncimui_text_pane_t1_ParamLimits

0x768e,	// (0x000167a4) ncimui_text_pane_t1

0xde23,	// (0x0001cf39) ncimui_list_single_graphic_pane_ParamLimits

0xde23,	// (0x0001cf39) ncimui_list_single_graphic_pane

0x76ac,	// (0x000167c2) ncimui_query_pane_ParamLimits

0x76ac,	// (0x000167c2) ncimui_query_pane

0x93ca,	// (0x000184e0) list_highlight_pane_cp013

0xde33,	// (0x0001cf49) ncim_list_query_list_pane_t1_copy1

0xde41,	// (0x0001cf57) ncim_list_single_graphic_pane_g1

0xde49,	// (0x0001cf5f) ncim_query_button_pane_cp01

0xde55,	// (0x0001cf6b) ncim_query_entry_pane_ParamLimits

0xde55,	// (0x0001cf6b) ncim_query_entry_pane

0xde68,	// (0x0001cf7e) ncimui_query_pane_g1

0xde74,	// (0x0001cf8a) ncimui_query_pane_t1_ParamLimits

0xde74,	// (0x0001cf8a) ncimui_query_pane_t1

0x943a,	// (0x00018550) input_focus_pane_cp012

0xde8d,	// (0x0001cfa3) ncim_query_entry_pane_t1

0x9ba9,	// (0x00018cbf) main_im_pane_ParamLimits

0x943a,	// (0x00018550) main_mobtv_pane_ParamLimits

0x943a,	// (0x00018550) main_mobtv_pane

0x72c1,	// (0x000163d7) main_cset6_slider_pane_g18_ParamLimits

0x72c1,	// (0x000163d7) main_cset6_slider_pane_g18

0x72cd,	// (0x000163e3) main_cset6_slider_pane_g19_ParamLimits

0x72cd,	// (0x000163e3) main_cset6_slider_pane_g19

0xd228,	// (0x0001c33e) bg_main_mobtv_pane_ParamLimits

0xd228,	// (0x0001c33e) bg_main_mobtv_pane

0x76bf,	// (0x000167d5) main_mobtv_info_pane

0x76c8,	// (0x000167de) main_mobtv_loading_pane_ParamLimits

0x76c8,	// (0x000167de) main_mobtv_loading_pane

0xde9f,	// (0x0001cfb5) main_mobtv_pg_channel_list_pane

0xdea9,	// (0x0001cfbf) main_mobtv_pg_hdr_pane

0x76d5,	// (0x000167eb) main_mobtv_programe_curr_pane_ParamLimits

0x76d5,	// (0x000167eb) main_mobtv_programe_curr_pane

0x76e2,	// (0x000167f8) main_mobtv_programe_next_pane_ParamLimits

0x76e2,	// (0x000167f8) main_mobtv_programe_next_pane

0xdeb2,	// (0x0001cfc8) popup_mobtv_noti_window

0xc2de,	// (0x0001b3f4) main_tv_pg_hdr_pane_g1

0xdeba,	// (0x0001cfd0) main_tv_pg_hdr_pane_g2

0xdec2,	// (0x0001cfd8) main_tv_pg_hdr_pane_g3

0xdeca,	// (0x0001cfe0) main_tv_pg_hdr_pane_g4

0xded2,	// (0x0001cfe8) main_tv_pg_hdr_pane_g5

0xdedc,	// (0x0001cff2) main_tv_pg_hdr_pane_g6

0xdee6,	// (0x0001cffc) main_tv_pg_hdr_pane_g7

0xdef0,	// (0x0001d006) main_tv_pg_hdr_pane_g8

0xdefa,	// (0x0001d010) main_tv_pg_hdr_pane_g9

0xdf04,	// (0x0001d01a) main_tv_pg_hdr_pane_g10

0xdf0e,	// (0x0001d024) main_tv_pg_hdr_pane_g11

0x000a,

0xfc1b,	// (0x0001ed31) main_tv_pg_hdr_pane_g

0xdf18,	// (0x0001d02e) main_tv_pg_hdr_pane_t1

0xdf26,	// (0x0001d03c) main_tv_pg_hdr_pane_t2

0xdf34,	// (0x0001d04a) main_tv_pg_hdr_pane_t3

0xdf44,	// (0x0001d05a) main_tv_pg_hdr_pane_t4

0xdf54,	// (0x0001d06a) main_tv_pg_hdr_pane_t5

0x0004,

0xfc32,	// (0x0001ed48) main_tv_pg_hdr_pane_t

0xdf64,	// (0x0001d07a) single_mobtv_pg_channel_pane_ParamLimits

0xdf64,	// (0x0001d07a) single_mobtv_pg_channel_pane

0xdf76,	// (0x0001d08c) single_mobtv_pg_channel_table_pane

0xa1ae,	// (0x000192c4) single_mobtv_pg_channel_thumb_pane

0xdf7f,	// (0x0001d095) single_tv_pg_channel_pane_g1

0xdf88,	// (0x0001d09e) single_tv_pg_channel_pane_g2

0x0001,

0xfc3d,	// (0x0001ed53) single_tv_pg_channel_pane_g

0xc52c,	// (0x0001b642) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xc52c,	// (0x0001b642) bg_single_mobtv_pg_channel_thumb_pane

0xdf91,	// (0x0001d0a7) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xdf91,	// (0x0001d0a7) single_mobtv_pg_channel_thumb_pane_g1

0xdf9f,	// (0x0001d0b5) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xdf9f,	// (0x0001d0b5) single_mobtv_pg_channel_thumb_pane_g2

0xdfab,	// (0x0001d0c1) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xdfab,	// (0x0001d0c1) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc42,	// (0x0001ed58) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc42,	// (0x0001ed58) single_mobtv_pg_channel_thumb_pane_g

0xdfb7,	// (0x0001d0cd) single_mobtv_pg_channel_thumb_pane_t1

0xdfc5,	// (0x0001d0db) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc49,	// (0x0001ed5f) single_mobtv_pg_channel_thumb_pane_t

0xc2de,	// (0x0001b3f4) bg_single_mobtv_pg_channel_table_pane_g1

0xc2de,	// (0x0001b3f4) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6ef,	// (0x0001e805) bg_single_mobtv_pg_channel_table_pane_g

0xdfd3,	// (0x0001d0e9) single_mobtv_pg_channel_table_pane_t1

0xdfe1,	// (0x0001d0f7) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc4e,	// (0x0001ed64) single_mobtv_pg_channel_table_pane_t

0x76f7,	// (0x0001680d) main_mobtv_info_pane_g1_ParamLimits

0x76f7,	// (0x0001680d) main_mobtv_info_pane_g1

0x7715,	// (0x0001682b) main_mobtv_info_pane_t1_ParamLimits

0x7715,	// (0x0001682b) main_mobtv_info_pane_t1

0x778d,	// (0x000168a3) main_mobtv_info_pane_t2_ParamLimits

0x778d,	// (0x000168a3) main_mobtv_info_pane_t2

0x0002,

0xfc58,	// (0x0001ed6e) main_mobtv_info_pane_t_ParamLimits

0xfc58,	// (0x0001ed6e) main_mobtv_info_pane_t

0x781c,	// (0x00016932) wait_bar_pane_cp05

0x782e,	// (0x00016944) main_mobtv_loading_pane_g1_ParamLimits

0x782e,	// (0x00016944) main_mobtv_loading_pane_g1

0x7841,	// (0x00016957) main_mobtv_loading_pane_g2_ParamLimits

0x7841,	// (0x00016957) main_mobtv_loading_pane_g2

0x784d,	// (0x00016963) main_mobtv_loading_pane_g3_ParamLimits

0x784d,	// (0x00016963) main_mobtv_loading_pane_g3

0x0002,

0xfc5f,	// (0x0001ed75) main_mobtv_loading_pane_g_ParamLimits

0xfc5f,	// (0x0001ed75) main_mobtv_loading_pane_g

0xdfef,	// (0x0001d105) main_mobtv_loading_pane_t1_ParamLimits

0xdfef,	// (0x0001d105) main_mobtv_loading_pane_t1

0xe007,	// (0x0001d11d) main_mobtv_loading_pane_t2_ParamLimits

0xe007,	// (0x0001d11d) main_mobtv_loading_pane_t2

0x0001,

0xfc66,	// (0x0001ed7c) main_mobtv_loading_pane_t_ParamLimits

0xfc66,	// (0x0001ed7c) main_mobtv_loading_pane_t

0x7860,	// (0x00016976) wait_bar_pane_cp06_ParamLimits

0x7860,	// (0x00016976) wait_bar_pane_cp06

0xe02b,	// (0x0001d141) main_mobtv_programe_curr_pane_t1

0xe039,	// (0x0001d14f) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc6b,	// (0x0001ed81) main_mobtv_programe_curr_pane_t

0xe047,	// (0x0001d15d) main_mobtv_programe_next_pane_t1

0xe055,	// (0x0001d16b) main_mobtv_programe_next_pane_t2

0xe063,	// (0x0001d179) main_mobtv_programe_next_pane_t3

0x0002,

0xfc70,	// (0x0001ed86) main_mobtv_programe_next_pane_t

0x93ca,	// (0x000184e0) bg_popup_mobtv_noti_window_pane

0xe071,	// (0x0001d187) popup_mobtv_noti_window_g1

0xe079,	// (0x0001d18f) popup_mobtv_noti_window_t1

0xe087,	// (0x0001d19d) popup_mobtv_noti_window_t2

0x0001,

0xfc77,	// (0x0001ed8d) popup_mobtv_noti_window_t

0xc2de,	// (0x0001b3f4) bg_popup_mobtv_noti_window_pane_g1

0x93ca,	// (0x000184e0) sc_clock_pane

0x93ca,	// (0x000184e0) main_fs_bigclock_pane

0x6f1e,	// (0x00016034) blid2_tripm_pane_t4_ParamLimits

0x6f1e,	// (0x00016034) blid2_tripm_pane_t4

0x786f,	// (0x00016985) sc_clock_pane_g1_ParamLimits

0x786f,	// (0x00016985) sc_clock_pane_g1

0x7881,	// (0x00016997) sc_clock_pane_t1_ParamLimits

0x7881,	// (0x00016997) sc_clock_pane_t1

0x78a3,	// (0x000169b9) sc_clock_pane_t2_ParamLimits

0x78a3,	// (0x000169b9) sc_clock_pane_t2

0x78bb,	// (0x000169d1) sc_clock_pane_t3_ParamLimits

0x78bb,	// (0x000169d1) sc_clock_pane_t3

0x0004,

0xfc7c,	// (0x0001ed92) sc_clock_pane_t_ParamLimits

0xfc7c,	// (0x0001ed92) sc_clock_pane_t

0x8890,	// (0x000179a6) main_fs_bigclock_indicator_pane_ParamLimits

0x8890,	// (0x000179a6) main_fs_bigclock_indicator_pane

0x795b,	// (0x00016a71) main_fs_bigclock_pane_g1_ParamLimits

0x795b,	// (0x00016a71) main_fs_bigclock_pane_g1

0x889c,	// (0x000179b2) main_fs_bigclock_pane_t1_ParamLimits

0x889c,	// (0x000179b2) main_fs_bigclock_pane_t1

0x88ae,	// (0x000179c4) main_fs_bigclock_pane_t2_ParamLimits

0x88ae,	// (0x000179c4) main_fs_bigclock_pane_t2

0x88c2,	// (0x000179d8) main_fs_bigclock_pane_t3_ParamLimits

0x88c2,	// (0x000179d8) main_fs_bigclock_pane_t3

0x0002,

0xfe81,	// (0x0001ef97) main_fs_bigclock_pane_t_ParamLimits

0xfe81,	// (0x0001ef97) main_fs_bigclock_pane_t

0xec7f,	// (0x0001dd95) main_fs_bigclock_indicator_pane_g1

0xdd62,	// (0x0001ce78) ncim_query_content_pane_g2_ParamLimits

0xdd62,	// (0x0001ce78) ncim_query_content_pane_g2

0x0001,

0xfc09,	// (0x0001ed1f) ncim_query_content_pane_g_ParamLimits

0xfc09,	// (0x0001ed1f) ncim_query_content_pane_g

0x78d4,	// (0x000169ea) sc_clock_pane_t4_ParamLimits

0x78d4,	// (0x000169ea) sc_clock_pane_t4

0x943a,	// (0x00018550) main_radioblah_pane

0xcf59,	// (0x0001c06f) cell_call4_button_pane_t1_copy1_ParamLimits

0xcf59,	// (0x0001c06f) cell_call4_button_pane_t1_copy1

0x7510,	// (0x00016626) main_ncimui_pane_t1_ParamLimits

0x7510,	// (0x00016626) main_ncimui_pane_t1

0x752a,	// (0x00016640) main_ncimui_pane_t2_ParamLimits

0x752a,	// (0x00016640) main_ncimui_pane_t2

0x0002,

0xfc02,	// (0x0001ed18) main_ncimui_pane_t_ParamLimits

0xfc02,	// (0x0001ed18) main_ncimui_pane_t

0xe1cc,	// (0x0001d2e2) main_radioblah_anim_pane_ParamLimits

0xe1cc,	// (0x0001d2e2) main_radioblah_anim_pane

0xe1dd,	// (0x0001d2f3) main_radioblah_info_pane_ParamLimits

0xe1dd,	// (0x0001d2f3) main_radioblah_info_pane

0xe1f1,	// (0x0001d307) main_radioblah_pane_t1_ParamLimits

0xe1f1,	// (0x0001d307) main_radioblah_pane_t1

0xe20d,	// (0x0001d323) main_radioblah_pane_t2_ParamLimits

0xe20d,	// (0x0001d323) main_radioblah_pane_t2

0x0003,

0xfc9d,	// (0x0001edb3) main_radioblah_pane_t_ParamLimits

0xfc9d,	// (0x0001edb3) main_radioblah_pane_t

0x79b3,	// (0x00016ac9) main_radioblah_rocker_ctrl_pane_ParamLimits

0x79b3,	// (0x00016ac9) main_radioblah_rocker_ctrl_pane

0xe255,	// (0x0001d36b) main_radioblah_info_pane_t1_ParamLimits

0xe255,	// (0x0001d36b) main_radioblah_info_pane_t1

0x7a0b,	// (0x00016b21) main_radioblah_info_pane_t2_ParamLimits

0x7a0b,	// (0x00016b21) main_radioblah_info_pane_t2

0x0003,

0xfca6,	// (0x0001edbc) main_radioblah_info_pane_t_ParamLimits

0xfca6,	// (0x0001edbc) main_radioblah_info_pane_t

0xc2de,	// (0x0001b3f4) main_radioblah_rocker_ctrl_pane_g1

0x7abb,	// (0x00016bd1) main_radioblah_rocker_ctrl_pane_g2

0x7ac3,	// (0x00016bd9) main_radioblah_rocker_ctrl_pane_g3

0x7acb,	// (0x00016be1) main_radioblah_rocker_ctrl_pane_g4

0x7ad3,	// (0x00016be9) main_radioblah_rocker_ctrl_pane_g5

0x7adb,	// (0x00016bf1) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcaf,	// (0x0001edc5) main_radioblah_rocker_ctrl_pane_g

0x71d1,	// (0x000162e7) main_cset_text2_pane_t1_copy1_ParamLimits

0xcfe3,	// (0x0001c0f9) cam4_image_uncrop_qvga_pane

0xd036,	// (0x0001c14c) vid4_image_uncrop_qcif_pane

0xd969,	// (0x0001ca7f) cam6_image_uncrop_qvga_pane_ParamLimits

0xd969,	// (0x0001ca7f) cam6_image_uncrop_qvga_pane

0xda31,	// (0x0001cb47) vid6_image_uncrop_qcif_pane_ParamLimits

0xda31,	// (0x0001cb47) vid6_image_uncrop_qcif_pane

0x93ca,	// (0x000184e0) bg_popup_preview_window_pane_cp03

0xdd14,	// (0x0001ce2a) list_cset_text2_pane

0xdd1c,	// (0x0001ce32) main_cset6_text2_pane_g1

0xdd24,	// (0x0001ce3a) main_cset6_text2_pane_t1

0xeac3,	// (0x0001dbd9) list_cset_text2_pane_t1_ParamLimits

0xeac3,	// (0x0001dbd9) list_cset_text2_pane_t1

0x943a,	// (0x00018550) main_radioblah_pane_ParamLimits

0x7808,	// (0x0001691e) main_mobtv_info_pane_t3_ParamLimits

0x7808,	// (0x0001691e) main_mobtv_info_pane_t3

0x79a1,	// (0x00016ab7) main_radioblah_pane_g1

0x79db,	// (0x00016af1) main_radioblah_info_pane_g1

0x7a60,	// (0x00016b76) main_radioblah_info_pane_t3_ParamLimits

0x7a60,	// (0x00016b76) main_radioblah_info_pane_t3

0x2259,	// (0x0001136f) highlight_cell_cale_month_pane_ParamLimits

0x2259,	// (0x0001136f) highlight_cell_cale_month_pane

0x93ca,	// (0x000184e0) main_phob_fisheye_pane

0xc67c,	// (0x0001b792) scroll_pane_cp0031_ParamLimits

0xc67c,	// (0x0001b792) scroll_pane_cp0031

0xdb3f,	// (0x0001cc55) wait_bar_pane_cp08_ParamLimits

0x7253,	// (0x00016369) cset_list_set_pane_copy1_ParamLimits

0xe28f,	// (0x0001d3a5) highlight_cell_cale_month_pane_g1

0x7ae3,	// (0x00016bf9) highlight_cell_cale_month_pane_t1

0xd735,	// (0x0001c84b) list_gen_pane_cp01

0xd280,	// (0x0001c396) scroll_pane_01

0x7af1,	// (0x00016c07) list_single_double_fisheye_pane

0x7afa,	// (0x00016c10) list_double_fisheye_pane_g1_ParamLimits

0x7afa,	// (0x00016c10) list_double_fisheye_pane_g1

0x7b06,	// (0x00016c1c) list_double_fisheye_pane_g2_ParamLimits

0x7b06,	// (0x00016c1c) list_double_fisheye_pane_g2

0x7b1a,	// (0x00016c30) list_double_fisheye_pane_g3_ParamLimits

0x7b1a,	// (0x00016c30) list_double_fisheye_pane_g3

0x0004,

0xfcbc,	// (0x0001edd2) list_double_fisheye_pane_g_ParamLimits

0xfcbc,	// (0x0001edd2) list_double_fisheye_pane_g

0x7b43,	// (0x00016c59) list_double_fisheye_pane_t1_ParamLimits

0x7b43,	// (0x00016c59) list_double_fisheye_pane_t1

0x7b5e,	// (0x00016c74) list_double_fisheye_pane_t2_ParamLimits

0x7b5e,	// (0x00016c74) list_double_fisheye_pane_t2

0x0001,

0xfcc7,	// (0x0001eddd) list_double_fisheye_pane_t_ParamLimits

0xfcc7,	// (0x0001eddd) list_double_fisheye_pane_t

0x93ca,	// (0x000184e0) main_call5_pane

0x78ff,	// (0x00016a15) sc_swipe_pane_ParamLimits

0x78ff,	// (0x00016a15) sc_swipe_pane

0x7b93,	// (0x00016ca9) call5_image_pane_ParamLimits

0x7b93,	// (0x00016ca9) call5_image_pane

0x7bb0,	// (0x00016cc6) call5_swipe_1_pane_ParamLimits

0x7bb0,	// (0x00016cc6) call5_swipe_1_pane

0x7bc3,	// (0x00016cd9) call5_swipe_2_pane_ParamLimits

0x7bc3,	// (0x00016cd9) call5_swipe_2_pane

0x7bee,	// (0x00016d04) popup_call5_audio_first_window_ParamLimits

0x7bee,	// (0x00016d04) popup_call5_audio_first_window

0xc52c,	// (0x0001b642) call5_swipe_1_pane_g1_ParamLimits

0xc52c,	// (0x0001b642) call5_swipe_1_pane_g1

0xe297,	// (0x0001d3ad) call5_swipe_1_pane_g2_ParamLimits

0xe297,	// (0x0001d3ad) call5_swipe_1_pane_g2

0x0001,

0xfccc,	// (0x0001ede2) call5_swipe_1_pane_g_ParamLimits

0xfccc,	// (0x0001ede2) call5_swipe_1_pane_g

0xe2a3,	// (0x0001d3b9) call5_swipe_1_pane_t1_ParamLimits

0xe2a3,	// (0x0001d3b9) call5_swipe_1_pane_t1

0xc52c,	// (0x0001b642) call5_swipe_2_pane_g1_ParamLimits

0xc52c,	// (0x0001b642) call5_swipe_2_pane_g1

0xe2b8,	// (0x0001d3ce) call5_swipe_2_pane_g2_ParamLimits

0xe2b8,	// (0x0001d3ce) call5_swipe_2_pane_g2

0x0001,

0xfcd1,	// (0x0001ede7) call5_swipe_2_pane_g_ParamLimits

0xfcd1,	// (0x0001ede7) call5_swipe_2_pane_g

0xe2c4,	// (0x0001d3da) call5_swipe_2_pane_t1_ParamLimits

0xe2c4,	// (0x0001d3da) call5_swipe_2_pane_t1

0xe2d9,	// (0x0001d3ef) sc_swipe_pane_g1_ParamLimits

0xe2d9,	// (0x0001d3ef) sc_swipe_pane_g1

0xe2e6,	// (0x0001d3fc) sc_swipe_pane_g2_ParamLimits

0xe2e6,	// (0x0001d3fc) sc_swipe_pane_g2

0x0001,

0xfcd6,	// (0x0001edec) sc_swipe_pane_g_ParamLimits

0xfcd6,	// (0x0001edec) sc_swipe_pane_g

0xe2f2,	// (0x0001d408) sc_swipe_pane_t1_ParamLimits

0xe2f2,	// (0x0001d408) sc_swipe_pane_t1

0x93ca,	// (0x000184e0) main_cmail_launcher_pane

0x7bff,	// (0x00016d15) aid_size_cell_cmail_l_ParamLimits

0x7bff,	// (0x00016d15) aid_size_cell_cmail_l

0x7c19,	// (0x00016d2f) grid_cmail_l_pane_ParamLimits

0x7c19,	// (0x00016d2f) grid_cmail_l_pane

0x7c33,	// (0x00016d49) cell_cmail_l_pane_ParamLimits

0x7c33,	// (0x00016d49) cell_cmail_l_pane

0x7c59,	// (0x00016d6f) cell_cmail_l_pane_g1_ParamLimits

0x7c59,	// (0x00016d6f) cell_cmail_l_pane_g1

0x7c6a,	// (0x00016d80) cell_cmail_l_pane_t1_ParamLimits

0x7c6a,	// (0x00016d80) cell_cmail_l_pane_t1

0xe307,	// (0x0001d41d) cell_cmail_l_pane_t2_ParamLimits

0xe307,	// (0x0001d41d) cell_cmail_l_pane_t2

0x0001,

0xfcdb,	// (0x0001edf1) cell_cmail_l_pane_t_ParamLimits

0xfcdb,	// (0x0001edf1) cell_cmail_l_pane_t

0x943a,	// (0x00018550) grid_highlight_pane_cp018_ParamLimits

0x943a,	// (0x00018550) grid_highlight_pane_cp018

0x01f7,	// (0x0000f30d) main2_pane_ParamLimits

0x01f7,	// (0x0000f30d) main2_pane

0x9c82,	// (0x00018d98) popup_sp_fs_action_menu_bg_pane_g1

0x9c8a,	// (0x00018da0) popup_sp_fs_action_menu_bg_pane_g2

0x9c92,	// (0x00018da8) popup_sp_fs_action_menu_bg_pane_g3

0x9c9a,	// (0x00018db0) popup_sp_fs_action_menu_bg_pane_g4

0x9ca2,	// (0x00018db8) popup_sp_fs_action_menu_bg_pane_g5

0x9caa,	// (0x00018dc0) popup_sp_fs_action_menu_bg_pane_g6

0x9cb2,	// (0x00018dc8) popup_sp_fs_action_menu_bg_pane_g7

0x9cba,	// (0x00018dd0) popup_sp_fs_action_menu_bg_pane_g8

0x9cc2,	// (0x00018dd8) popup_sp_fs_action_menu_bg_pane_g9

0x9cca,	// (0x00018de0) popup_sp_fs_action_menu_bg_pane_g10

0x9cca,	// (0x00018de0) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf18a,	// (0x0001e2a0) popup_sp_fs_action_menu_bg_pane_g

0x11cf,	// (0x000102e5) list_medium_line_x2_t3_g3_g1_ParamLimits

0x11cf,	// (0x000102e5) list_medium_line_x2_t3_g3_g1

0x11db,	// (0x000102f1) list_medium_line_x2_t3_g3_g2_ParamLimits

0x11db,	// (0x000102f1) list_medium_line_x2_t3_g3_g2

0x11e7,	// (0x000102fd) list_medium_line_x2_t3_g3_g3_ParamLimits

0x11e7,	// (0x000102fd) list_medium_line_x2_t3_g3_g3

0x0002,

0xf238,	// (0x0001e34e) list_medium_line_x2_t3_g3_g_ParamLimits

0xf238,	// (0x0001e34e) list_medium_line_x2_t3_g3_g

0x11f3,	// (0x00010309) list_medium_line_x2_t3_g3_t1_ParamLimits

0x11f3,	// (0x00010309) list_medium_line_x2_t3_g3_t1

0x1208,	// (0x0001031e) list_medium_line_x2_t3_g3_t2_ParamLimits

0x1208,	// (0x0001031e) list_medium_line_x2_t3_g3_t2

0x121c,	// (0x00010332) list_medium_line_x2_t3_g3_t3_ParamLimits

0x121c,	// (0x00010332) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23f,	// (0x0001e355) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23f,	// (0x0001e355) list_medium_line_x2_t3_g3_t

0x11cf,	// (0x000102e5) list_medium_line_x2_t3_g2_g1_ParamLimits

0x11cf,	// (0x000102e5) list_medium_line_x2_t3_g2_g1

0x11e7,	// (0x000102fd) list_medium_line_x2_t3_g2_g2_ParamLimits

0x11e7,	// (0x000102fd) list_medium_line_x2_t3_g2_g2

0x0001,

0xf246,	// (0x0001e35c) list_medium_line_x2_t3_g2_g_ParamLimits

0xf246,	// (0x0001e35c) list_medium_line_x2_t3_g2_g

0x1231,	// (0x00010347) list_medium_line_x2_t3_g2_t1_ParamLimits

0x1231,	// (0x00010347) list_medium_line_x2_t3_g2_t1

0x1247,	// (0x0001035d) list_medium_line_x2_t3_g2_t2_ParamLimits

0x1247,	// (0x0001035d) list_medium_line_x2_t3_g2_t2

0x1259,	// (0x0001036f) list_medium_line_x2_t3_g2_t3_ParamLimits

0x1259,	// (0x0001036f) list_medium_line_x2_t3_g2_t3

0x0002,

0xf24b,	// (0x0001e361) list_medium_line_x2_t3_g2_t_ParamLimits

0xf24b,	// (0x0001e361) list_medium_line_x2_t3_g2_t

0x11cf,	// (0x000102e5) list_medium_line_x2_t4_g4_g1_ParamLimits

0x11cf,	// (0x000102e5) list_medium_line_x2_t4_g4_g1

0x1277,	// (0x0001038d) list_medium_line_x2_t4_g4_g2_ParamLimits

0x1277,	// (0x0001038d) list_medium_line_x2_t4_g4_g2

0x11db,	// (0x000102f1) list_medium_line_x2_t4_g4_g3_ParamLimits

0x11db,	// (0x000102f1) list_medium_line_x2_t4_g4_g3

0x1283,	// (0x00010399) list_medium_line_x2_t4_g4_g4_ParamLimits

0x1283,	// (0x00010399) list_medium_line_x2_t4_g4_g4

0x0003,

0xf252,	// (0x0001e368) list_medium_line_x2_t4_g4_g_ParamLimits

0xf252,	// (0x0001e368) list_medium_line_x2_t4_g4_g

0x128f,	// (0x000103a5) list_medium_line_x2_t4_g4_t1_ParamLimits

0x128f,	// (0x000103a5) list_medium_line_x2_t4_g4_t1

0x12a6,	// (0x000103bc) list_medium_line_x2_t4_g4_t2_ParamLimits

0x12a6,	// (0x000103bc) list_medium_line_x2_t4_g4_t2

0x12bb,	// (0x000103d1) list_medium_line_x2_t4_g4_t3_ParamLimits

0x12bb,	// (0x000103d1) list_medium_line_x2_t4_g4_t3

0x12cd,	// (0x000103e3) list_medium_line_x2_t4_g4_t4_ParamLimits

0x12cd,	// (0x000103e3) list_medium_line_x2_t4_g4_t4

0x0003,

0xf25b,	// (0x0001e371) list_medium_line_x2_t4_g4_t_ParamLimits

0xf25b,	// (0x0001e371) list_medium_line_x2_t4_g4_t

0x11cf,	// (0x000102e5) list_medium_line_x2_t2_g4_g1_ParamLimits

0x11cf,	// (0x000102e5) list_medium_line_x2_t2_g4_g1

0x1277,	// (0x0001038d) list_medium_line_x2_t2_g4_g2_ParamLimits

0x1277,	// (0x0001038d) list_medium_line_x2_t2_g4_g2

0x11db,	// (0x000102f1) list_medium_line_x2_t2_g4_g3_ParamLimits

0x11db,	// (0x000102f1) list_medium_line_x2_t2_g4_g3

0x11e7,	// (0x000102fd) list_medium_line_x2_t2_g4_g4_ParamLimits

0x11e7,	// (0x000102fd) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c2,	// (0x0001e3d8) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c2,	// (0x0001e3d8) list_medium_line_x2_t2_g4_g

0x227f,	// (0x00011395) list_medium_line_x2_t2_g4_t1_ParamLimits

0x227f,	// (0x00011395) list_medium_line_x2_t2_g4_t1

0x121c,	// (0x00010332) list_medium_line_x2_t2_g4_t2_ParamLimits

0x121c,	// (0x00010332) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2cb,	// (0x0001e3e1) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2cb,	// (0x0001e3e1) list_medium_line_x2_t2_g4_t

0x11cf,	// (0x000102e5) list_medium_line_x2_t2_g3_g1_ParamLimits

0x11cf,	// (0x000102e5) list_medium_line_x2_t2_g3_g1

0x11db,	// (0x000102f1) list_medium_line_x2_t2_g3_g2_ParamLimits

0x11db,	// (0x000102f1) list_medium_line_x2_t2_g3_g2

0x11e7,	// (0x000102fd) list_medium_line_x2_t2_g3_g3_ParamLimits

0x11e7,	// (0x000102fd) list_medium_line_x2_t2_g3_g3

0x0002,

0xf238,	// (0x0001e34e) list_medium_line_x2_t2_g3_g_ParamLimits

0xf238,	// (0x0001e34e) list_medium_line_x2_t2_g3_g

0x2294,	// (0x000113aa) list_medium_line_x2_t2_g3_t1_ParamLimits

0x2294,	// (0x000113aa) list_medium_line_x2_t2_g3_t1

0x121c,	// (0x00010332) list_medium_line_x2_t2_g3_t2_ParamLimits

0x121c,	// (0x00010332) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d0,	// (0x0001e3e6) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d0,	// (0x0001e3e6) list_medium_line_x2_t2_g3_t

0x23e8,	// (0x000114fe) main_sp_fs_list_pane_ParamLimits

0x23e8,	// (0x000114fe) main_sp_fs_list_pane

0xd244,	// (0x0001c35a) sp_fs_scroll_pane_ParamLimits

0xd244,	// (0x0001c35a) sp_fs_scroll_pane

0x23f4,	// (0x0001150a) list_medium_line_x2_t3_t1

0x2404,	// (0x0001151a) list_medium_line_x2_t3_t2

0x2412,	// (0x00011528) list_medium_line_x2_t3_t3

0x0002,

0xf31b,	// (0x0001e431) list_medium_line_x2_t3_t

0x2420,	// (0x00011536) list_medium_line_x3_t4_t1

0x2430,	// (0x00011546) list_medium_line_x3_t4_t2

0x243e,	// (0x00011554) list_medium_line_x3_t4_t3

0x2412,	// (0x00011528) list_medium_line_x3_t4_t4

0x0003,

0xf322,	// (0x0001e438) list_medium_line_x3_t4_t

0x244c,	// (0x00011562) list_medium_line_x4_t5_t1

0x245c,	// (0x00011572) list_medium_line_x4_t5_t2

0x243e,	// (0x00011554) list_medium_line_x4_t5_t3

0x246a,	// (0x00011580) list_medium_line_x4_t5_t4

0x2412,	// (0x00011528) list_medium_line_x4_t5_t5

0x0004,

0xf32b,	// (0x0001e441) list_medium_line_x4_t5_t

0x11cf,	// (0x000102e5) list_medium_line_t4_g4_g1_ParamLimits

0x11cf,	// (0x000102e5) list_medium_line_t4_g4_g1

0x1283,	// (0x00010399) list_medium_line_t4_g4_g2_ParamLimits

0x1283,	// (0x00010399) list_medium_line_t4_g4_g2

0x2478,	// (0x0001158e) list_medium_line_t4_g4_g3_ParamLimits

0x2478,	// (0x0001158e) list_medium_line_t4_g4_g3

0x11e7,	// (0x000102fd) list_medium_line_t4_g4_g4_ParamLimits

0x11e7,	// (0x000102fd) list_medium_line_t4_g4_g4

0x0003,

0xf336,	// (0x0001e44c) list_medium_line_t4_g4_g_ParamLimits

0xf336,	// (0x0001e44c) list_medium_line_t4_g4_g

0x2484,	// (0x0001159a) list_medium_line_t4_g4_t1_ParamLimits

0x2484,	// (0x0001159a) list_medium_line_t4_g4_t1

0x2499,	// (0x000115af) list_medium_line_t4_g4_t2_ParamLimits

0x2499,	// (0x000115af) list_medium_line_t4_g4_t2

0x24af,	// (0x000115c5) list_medium_line_t4_g4_t3_ParamLimits

0x24af,	// (0x000115c5) list_medium_line_t4_g4_t3

0x121c,	// (0x00010332) list_medium_line_t4_g4_t4_ParamLimits

0x121c,	// (0x00010332) list_medium_line_t4_g4_t4

0x0003,

0xf33f,	// (0x0001e455) list_medium_line_t4_g4_t_ParamLimits

0xf33f,	// (0x0001e455) list_medium_line_t4_g4_t

0x2588,	// (0x0001169e) chi_dic_find_pane_g1

0x362c,	// (0x00012742) main_tport_pane

0xd3d4,	// (0x0001c4ea) list_medium_line_plain_t1

0x6629,	// (0x0001573f) list_medium_line_t2_g2_g1_ParamLimits

0x6629,	// (0x0001573f) list_medium_line_t2_g2_g1

0x6635,	// (0x0001574b) list_medium_line_t2_g2_g2_ParamLimits

0x6635,	// (0x0001574b) list_medium_line_t2_g2_g2

0x0001,

0xfa13,	// (0x0001eb29) list_medium_line_t2_g2_g_ParamLimits

0xfa13,	// (0x0001eb29) list_medium_line_t2_g2_g

0x6641,	// (0x00015757) list_medium_line_t2_g2_t1_ParamLimits

0x6641,	// (0x00015757) list_medium_line_t2_g2_t1

0x665b,	// (0x00015771) list_medium_line_t2_g2_t2_ParamLimits

0x665b,	// (0x00015771) list_medium_line_t2_g2_t2

0x0001,

0xfa18,	// (0x0001eb2e) list_medium_line_t2_g2_t_ParamLimits

0xfa18,	// (0x0001eb2e) list_medium_line_t2_g2_t

0xd7a9,	// (0x0001c8bf) aid_sp_fs_list_icon_a_sm

0xd7b1,	// (0x0001c8c7) aid_sp_fs_list_icon_d

0xd7b9,	// (0x0001c8cf) aid_sp_fs_text_primary

0xd7c2,	// (0x0001c8d8) aid_sp_fs_text_secondary

0x6ccb,	// (0x00015de1) list_medium_line

0x6ccb,	// (0x00015de1) list_medium_line_g2

0x6ccb,	// (0x00015de1) list_medium_line_g3

0x6ccb,	// (0x00015de1) list_medium_line_plain

0x6ccb,	// (0x00015de1) list_medium_line_plain_t2

0x6ccb,	// (0x00015de1) list_medium_line_plain_t3

0x6ccb,	// (0x00015de1) list_medium_line_right_icon

0x6ccb,	// (0x00015de1) list_medium_line_right_iconx2

0x6ccb,	// (0x00015de1) list_medium_line_t2

0x6ccb,	// (0x00015de1) list_medium_line_t2_g2

0x6ccb,	// (0x00015de1) list_medium_line_t2_g3

0x6ccb,	// (0x00015de1) list_medium_line_t2_right_icon

0x6ccb,	// (0x00015de1) list_medium_line_t2_right_iconx2

0x6ccb,	// (0x00015de1) list_medium_line_t3

0x6ccb,	// (0x00015de1) list_medium_line_t3_g2

0x6ccb,	// (0x00015de1) list_medium_line_t3_g3

0x6ccb,	// (0x00015de1) list_medium_line_t3_right_iconx2

0x6cd4,	// (0x00015dea) list_medium_line_t4_g4

0x6cdd,	// (0x00015df3) list_medium_line_x2

0x6cdd,	// (0x00015df3) list_medium_line_x2_t2_g2

0x6cdd,	// (0x00015df3) list_medium_line_x2_t2_g3

0x6cdd,	// (0x00015df3) list_medium_line_x2_t2_g4

0x6cdd,	// (0x00015df3) list_medium_line_x2_t3

0x6cdd,	// (0x00015df3) list_medium_line_x2_t3_g2

0x6cdd,	// (0x00015df3) list_medium_line_x2_t3_g3

0x6cdd,	// (0x00015df3) list_medium_line_x2_t3_g4

0x6cdd,	// (0x00015df3) list_medium_line_x2_t4_g2

0x6cdd,	// (0x00015df3) list_medium_line_x2_t4_g4

0x6ce6,	// (0x00015dfc) list_medium_line_x3

0x6ce6,	// (0x00015dfc) list_medium_line_x3_t4

0x6ce6,	// (0x00015dfc) list_medium_line_x3_t4_g4

0x6cd4,	// (0x00015dea) list_medium_line_x4_t4

0x6cd4,	// (0x00015dea) list_medium_line_x4_t4_g7

0x6cd4,	// (0x00015dea) list_medium_line_x4_t5

0x6cef,	// (0x00015e05) list_single_fs_dyc_pane_ParamLimits

0x6cef,	// (0x00015e05) list_single_fs_dyc_pane

0x11cf,	// (0x000102e5) list_medium_line_x4_t4_g7_g1_ParamLimits

0x11cf,	// (0x000102e5) list_medium_line_x4_t4_g7_g1

0x7415,	// (0x0001652b) list_medium_line_x4_t4_g7_g2_ParamLimits

0x7415,	// (0x0001652b) list_medium_line_x4_t4_g7_g2

0x7421,	// (0x00016537) list_medium_line_x4_t4_g7_g3_ParamLimits

0x7421,	// (0x00016537) list_medium_line_x4_t4_g7_g3

0x7430,	// (0x00016546) list_medium_line_x4_t4_g7_g4_ParamLimits

0x7430,	// (0x00016546) list_medium_line_x4_t4_g7_g4

0x743c,	// (0x00016552) list_medium_line_x4_t4_g7_g5_ParamLimits

0x743c,	// (0x00016552) list_medium_line_x4_t4_g7_g5

0x744b,	// (0x00016561) list_medium_line_x4_t4_g7_g6_ParamLimits

0x744b,	// (0x00016561) list_medium_line_x4_t4_g7_g6

0x745a,	// (0x00016570) list_medium_line_x4_t4_g7_g7_ParamLimits

0x745a,	// (0x00016570) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbe3,	// (0x0001ecf9) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbe3,	// (0x0001ecf9) list_medium_line_x4_t4_g7_g

0x7466,	// (0x0001657c) list_medium_line_x4_t4_g7_t1_ParamLimits

0x7466,	// (0x0001657c) list_medium_line_x4_t4_g7_t1

0x747b,	// (0x00016591) list_medium_line_x4_t4_g7_t2_ParamLimits

0x747b,	// (0x00016591) list_medium_line_x4_t4_g7_t2

0x7490,	// (0x000165a6) list_medium_line_x4_t4_g7_t3_ParamLimits

0x7490,	// (0x000165a6) list_medium_line_x4_t4_g7_t3

0x74a5,	// (0x000165bb) list_medium_line_x4_t4_g7_t4_ParamLimits

0x74a5,	// (0x000165bb) list_medium_line_x4_t4_g7_t4

0x74b7,	// (0x000165cd) list_medium_line_x4_t4_g7_t5_ParamLimits

0x74b7,	// (0x000165cd) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbf2,	// (0x0001ed08) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbf2,	// (0x0001ed08) list_medium_line_x4_t4_g7_t

0x74c9,	// (0x000165df) list_single_dyc_row_pane_ParamLimits

0x74c9,	// (0x000165df) list_single_dyc_row_pane

0x7b80,	// (0x00016c96) call5_gesture_pane_ParamLimits

0x7b80,	// (0x00016c96) call5_gesture_pane

0x7bd6,	// (0x00016cec) call5_windows_pane_ParamLimits

0x7bd6,	// (0x00016cec) call5_windows_pane

0x7c80,	// (0x00016d96) call5_swipe_1_pane_cp_ParamLimits

0x7c80,	// (0x00016d96) call5_swipe_1_pane_cp

0x7c8c,	// (0x00016da2) call5_swipe_2_pane_cp_ParamLimits

0x7c8c,	// (0x00016da2) call5_swipe_2_pane_cp

0x9e22,	// (0x00018f38) call5_image_pane_cp

0x7c98,	// (0x00016dae) popup_call5_audio_first_window_cp_ParamLimits

0x7c98,	// (0x00016dae) popup_call5_audio_first_window_cp

0xe2d9,	// (0x0001d3ef) call5_swipe_1_pane_g1_cp_ParamLimits

0xe2d9,	// (0x0001d3ef) call5_swipe_1_pane_g1_cp

0xe319,	// (0x0001d42f) call5_swipe_1_pane_g2_cp

0xe2f2,	// (0x0001d408) call5_swipe_1_pane_t1_cp_ParamLimits

0xe2f2,	// (0x0001d408) call5_swipe_1_pane_t1_cp

0xe2d9,	// (0x0001d3ef) call5_swipe_2_pane_g1_cp_ParamLimits

0xe2d9,	// (0x0001d3ef) call5_swipe_2_pane_g1_cp

0xe321,	// (0x0001d437) call5_swipe_2_pane_g2_cp

0xe329,	// (0x0001d43f) call5_swipe_2_pane_t1_cp_ParamLimits

0xe329,	// (0x0001d43f) call5_swipe_2_pane_t1_cp

0x943a,	// (0x00018550) main_sp_fs_email_pane

0xe33e,	// (0x0001d454) main_sp_fs_listscroll_pane_te

0x7ca6,	// (0x00016dbc) popup_sp_fs_action_menu_pane_ParamLimits

0x7ca6,	// (0x00016dbc) popup_sp_fs_action_menu_pane

0xc2de,	// (0x0001b3f4) bg_sp_fs_ctrlbar_pane_g1

0xe347,	// (0x0001d45d) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe350,	// (0x0001d466) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe359,	// (0x0001d46f) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc2de,	// (0x0001b3f4) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfce0,	// (0x0001edf6) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc0c3,	// (0x0001b1d9) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc0c3,	// (0x0001b1d9) bg_sp_fs_ctrlbar_ddmenu_pane

0xe362,	// (0x0001d478) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe362,	// (0x0001d478) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe36e,	// (0x0001d484) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe36e,	// (0x0001d484) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfce9,	// (0x0001edff) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfce9,	// (0x0001edff) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe37a,	// (0x0001d490) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe37a,	// (0x0001d490) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x7cea,	// (0x00016e00) list_medium_line_t2_right_icon_g1

0x7cf2,	// (0x00016e08) list_medium_line_t2_right_icon_t1

0x7d02,	// (0x00016e18) list_medium_line_t2_right_icon_t2

0x0001,

0xfcee,	// (0x0001ee04) list_medium_line_t2_right_icon_t

0xbdc3,	// (0x0001aed9) bg_sp_fs_ctrlbar_pane_ParamLimits

0xbdc3,	// (0x0001aed9) bg_sp_fs_ctrlbar_pane

0x7d5c,	// (0x00016e72) main_sp_fs_ctrlbar_button_pane_cp01

0x7d66,	// (0x00016e7c) main_sp_fs_ctrlbar_ddmenu_pane

0xe3cc,	// (0x0001d4e2) main_sp_fs_ctrlbar_pane_g1

0xe3d8,	// (0x0001d4ee) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfcf3,	// (0x0001ee09) main_sp_fs_ctrlbar_pane_g

0xe3e4,	// (0x0001d4fa) main_sp_fs_ctrlbar_pane_t1

0x7d70,	// (0x00016e86) main_sp_fs_ctrlbar_pane

0x7d94,	// (0x00016eaa) main_sp_fs_listscroll_pane_te_cp01

0x7db4,	// (0x00016eca) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x7db4,	// (0x00016eca) popup_sp_fs_action_menu_pane_cp01

0x943a,	// (0x00018550) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x943a,	// (0x00018550) bg_sp_fs_highlight_list_pane_cp01

0xe414,	// (0x0001d52a) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xe414,	// (0x0001d52a) sp_fs_action_menu_list_gene_pane_g1

0xe423,	// (0x0001d539) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe423,	// (0x0001d539) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcfd,	// (0x0001ee13) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcfd,	// (0x0001ee13) sp_fs_action_menu_list_gene_pane_g

0xe430,	// (0x0001d546) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xe430,	// (0x0001d546) sp_fs_action_menu_list_gene_pane_t1

0xe448,	// (0x0001d55e) sp_fs_action_menu_list_gene_pane_ParamLimits

0xe448,	// (0x0001d55e) sp_fs_action_menu_list_gene_pane

0xe467,	// (0x0001d57d) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe467,	// (0x0001d57d) popup_sp_fs_action_menu_bg_pane

0xe475,	// (0x0001d58b) sp_fs_action_menu_list_pane_ParamLimits

0xe475,	// (0x0001d58b) sp_fs_action_menu_list_pane

0x7de4,	// (0x00016efa) sp_fs_scroll_pane_cp01_ParamLimits

0x7de4,	// (0x00016efa) sp_fs_scroll_pane_cp01

0x7e0a,	// (0x00016f20) list_medium_line_plain_t2_t1

0x7e1a,	// (0x00016f30) list_medium_line_plain_t2_t2

0x0001,

0xfd02,	// (0x0001ee18) list_medium_line_plain_t2_t

0x7e2a,	// (0x00016f40) list_medium_line_plain_t3_t1

0x7e3a,	// (0x00016f50) list_medium_line_plain_t3_t2

0x7e48,	// (0x00016f5e) list_medium_line_plain_t3_t3

0x0002,

0xfd07,	// (0x0001ee1d) list_medium_line_plain_t3_t

0x11cf,	// (0x000102e5) list_medium_line_x2_t2_g2_g1_ParamLimits

0x11cf,	// (0x000102e5) list_medium_line_x2_t2_g2_g1

0x11e7,	// (0x000102fd) list_medium_line_x2_t2_g2_g2_ParamLimits

0x11e7,	// (0x000102fd) list_medium_line_x2_t2_g2_g2

0x0001,

0xf246,	// (0x0001e35c) list_medium_line_x2_t2_g2_g_ParamLimits

0xf246,	// (0x0001e35c) list_medium_line_x2_t2_g2_g

0x2484,	// (0x0001159a) list_medium_line_x2_t2_g2_t1_ParamLimits

0x2484,	// (0x0001159a) list_medium_line_x2_t2_g2_t1

0x121c,	// (0x00010332) list_medium_line_x2_t2_g2_t2_ParamLimits

0x121c,	// (0x00010332) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd0e,	// (0x0001ee24) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd0e,	// (0x0001ee24) list_medium_line_x2_t2_g2_t

0x11cf,	// (0x000102e5) list_medium_line_x2_t4_g2_g1_ParamLimits

0x11cf,	// (0x000102e5) list_medium_line_x2_t4_g2_g1

0x11e7,	// (0x000102fd) list_medium_line_x2_t4_g2_g2_ParamLimits

0x11e7,	// (0x000102fd) list_medium_line_x2_t4_g2_g2

0x0001,

0xf246,	// (0x0001e35c) list_medium_line_x2_t4_g2_g_ParamLimits

0xf246,	// (0x0001e35c) list_medium_line_x2_t4_g2_g

0x7e56,	// (0x00016f6c) list_medium_line_x2_t4_g2_t1_ParamLimits

0x7e56,	// (0x00016f6c) list_medium_line_x2_t4_g2_t1

0x7e6d,	// (0x00016f83) list_medium_line_x2_t4_g2_t2_ParamLimits

0x7e6d,	// (0x00016f83) list_medium_line_x2_t4_g2_t2

0x7e82,	// (0x00016f98) list_medium_line_x2_t4_g2_t3_ParamLimits

0x7e82,	// (0x00016f98) list_medium_line_x2_t4_g2_t3

0x121c,	// (0x00010332) list_medium_line_x2_t4_g2_t4_ParamLimits

0x121c,	// (0x00010332) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd13,	// (0x0001ee29) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd13,	// (0x0001ee29) list_medium_line_x2_t4_g2_t

0x7e94,	// (0x00016faa) list_medium_line_t3_right_iconx2_g1

0x7cea,	// (0x00016e00) list_medium_line_t3_right_iconx2_g2

0x7e9c,	// (0x00016fb2) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd1c,	// (0x0001ee32) list_medium_line_t3_right_iconx2_g

0x7ea6,	// (0x00016fbc) list_medium_line_t3_right_iconx2_t1

0x7eb6,	// (0x00016fcc) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd23,	// (0x0001ee39) list_medium_line_t3_right_iconx2_t

0x11cf,	// (0x000102e5) list_medium_line_x3_t4_g4_g1_ParamLimits

0x11cf,	// (0x000102e5) list_medium_line_x3_t4_g4_g1

0x11db,	// (0x000102f1) list_medium_line_x3_t4_g4_g2_ParamLimits

0x11db,	// (0x000102f1) list_medium_line_x3_t4_g4_g2

0x1283,	// (0x00010399) list_medium_line_x3_t4_g4_g3_ParamLimits

0x1283,	// (0x00010399) list_medium_line_x3_t4_g4_g3

0x7ec4,	// (0x00016fda) list_medium_line_x3_t4_g4_g4_ParamLimits

0x7ec4,	// (0x00016fda) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd28,	// (0x0001ee3e) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd28,	// (0x0001ee3e) list_medium_line_x3_t4_g4_g

0x7ed0,	// (0x00016fe6) list_medium_line_x3_t4_g4_t1_ParamLimits

0x7ed0,	// (0x00016fe6) list_medium_line_x3_t4_g4_t1

0x7ee7,	// (0x00016ffd) list_medium_line_x3_t4_g4_t2_ParamLimits

0x7ee7,	// (0x00016ffd) list_medium_line_x3_t4_g4_t2

0x7f02,	// (0x00017018) list_medium_line_x3_t4_g4_t3_ParamLimits

0x7f02,	// (0x00017018) list_medium_line_x3_t4_g4_t3

0x7f17,	// (0x0001702d) list_medium_line_x3_t4_g4_t4_ParamLimits

0x7f17,	// (0x0001702d) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd31,	// (0x0001ee47) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd31,	// (0x0001ee47) list_medium_line_x3_t4_g4_t

0x7f34,	// (0x0001704a) list_single_dyc_row_text_pane_t1_ParamLimits

0x7f34,	// (0x0001704a) list_single_dyc_row_text_pane_t1

0x7f7d,	// (0x00017093) list_single_dyc_row_text_pane_t2_ParamLimits

0x7f7d,	// (0x00017093) list_single_dyc_row_text_pane_t2

0xe495,	// (0x0001d5ab) list_single_dyc_row_text_pane_t3_ParamLimits

0xe495,	// (0x0001d5ab) list_single_dyc_row_text_pane_t3

0x0005,

0xfd3a,	// (0x0001ee50) list_single_dyc_row_text_pane_t_ParamLimits

0xfd3a,	// (0x0001ee50) list_single_dyc_row_text_pane_t

0xe4b9,	// (0x0001d5cf) list_single_dyc_row_pane_g1_ParamLimits

0xe4b9,	// (0x0001d5cf) list_single_dyc_row_pane_g1

0xe4c5,	// (0x0001d5db) list_single_dyc_row_pane_g2_ParamLimits

0xe4c5,	// (0x0001d5db) list_single_dyc_row_pane_g2

0xe4d1,	// (0x0001d5e7) list_single_dyc_row_pane_g3_ParamLimits

0xe4d1,	// (0x0001d5e7) list_single_dyc_row_pane_g3

0xe4dd,	// (0x0001d5f3) list_single_dyc_row_pane_g4_ParamLimits

0xe4dd,	// (0x0001d5f3) list_single_dyc_row_pane_g4

0x0003,

0xfd47,	// (0x0001ee5d) list_single_dyc_row_pane_g_ParamLimits

0xfd47,	// (0x0001ee5d) list_single_dyc_row_pane_g

0xe4e9,	// (0x0001d5ff) list_single_dyc_row_text_pane_ParamLimits

0xe4e9,	// (0x0001d5ff) list_single_dyc_row_text_pane

0x93ca,	// (0x000184e0) bg_sp_fs_scroll_pane

0xe508,	// (0x0001d61e) thumb_sp_fs_scroll_pane

0x6629,	// (0x0001573f) list_medium_line_g1_ParamLimits

0x6629,	// (0x0001573f) list_medium_line_g1

0xe511,	// (0x0001d627) list_medium_line_t1_ParamLimits

0xe511,	// (0x0001d627) list_medium_line_t1

0x11cf,	// (0x000102e5) list_medium_line_x2_g1_ParamLimits

0x11cf,	// (0x000102e5) list_medium_line_x2_g1

0x11db,	// (0x000102f1) list_medium_line_x2_g2_ParamLimits

0x11db,	// (0x000102f1) list_medium_line_x2_g2

0x0001,

0xfd50,	// (0x0001ee66) list_medium_line_x2_g_ParamLimits

0xfd50,	// (0x0001ee66) list_medium_line_x2_g

0xe526,	// (0x0001d63c) list_medium_line_x2_t1_ParamLimits

0xe526,	// (0x0001d63c) list_medium_line_x2_t1

0x11cf,	// (0x000102e5) list_medium_line_x3_g1_ParamLimits

0x11cf,	// (0x000102e5) list_medium_line_x3_g1

0x11db,	// (0x000102f1) list_medium_line_x3_g2_ParamLimits

0x11db,	// (0x000102f1) list_medium_line_x3_g2

0x0001,

0xfd50,	// (0x0001ee66) list_medium_line_x3_g_ParamLimits

0xfd50,	// (0x0001ee66) list_medium_line_x3_g

0xe526,	// (0x0001d63c) list_medium_line_x3_t1_ParamLimits

0xe526,	// (0x0001d63c) list_medium_line_x3_t1

0xe53c,	// (0x0001d652) thumb_sp_fs_scroll_pane_g1

0xe545,	// (0x0001d65b) thumb_sp_fs_scroll_pane_g2

0xe54e,	// (0x0001d664) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd55,	// (0x0001ee6b) thumb_sp_fs_scroll_pane_g

0xe53c,	// (0x0001d652) bg_sp_fs_scroll_pane_g1

0xe545,	// (0x0001d65b) bg_sp_fs_scroll_pane_g2

0xe54e,	// (0x0001d664) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd55,	// (0x0001ee6b) bg_sp_fs_scroll_pane_g

0x11cf,	// (0x000102e5) list_medium_line_x2_t3_g4_g1_ParamLimits

0x11cf,	// (0x000102e5) list_medium_line_x2_t3_g4_g1

0x1277,	// (0x0001038d) list_medium_line_x2_t3_g4_g2_ParamLimits

0x1277,	// (0x0001038d) list_medium_line_x2_t3_g4_g2

0x11db,	// (0x000102f1) list_medium_line_x2_t3_g4_g3_ParamLimits

0x11db,	// (0x000102f1) list_medium_line_x2_t3_g4_g3

0x11e7,	// (0x000102fd) list_medium_line_x2_t3_g4_g4_ParamLimits

0x11e7,	// (0x000102fd) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c2,	// (0x0001e3d8) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c2,	// (0x0001e3d8) list_medium_line_x2_t3_g4_g

0x80b2,	// (0x000171c8) list_medium_line_x2_t3_g4_t1_ParamLimits

0x80b2,	// (0x000171c8) list_medium_line_x2_t3_g4_t1

0x80cc,	// (0x000171e2) list_medium_line_x2_t3_g4_t2_ParamLimits

0x80cc,	// (0x000171e2) list_medium_line_x2_t3_g4_t2

0x121c,	// (0x00010332) list_medium_line_x2_t3_g4_t3_ParamLimits

0x121c,	// (0x00010332) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd5c,	// (0x0001ee72) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd5c,	// (0x0001ee72) list_medium_line_x2_t3_g4_t

0x6629,	// (0x0001573f) list_medium_line_g2_g1_ParamLimits

0x6629,	// (0x0001573f) list_medium_line_g2_g1

0x6635,	// (0x0001574b) list_medium_line_g2_g2_ParamLimits

0x6635,	// (0x0001574b) list_medium_line_g2_g2

0x0001,

0xfa13,	// (0x0001eb29) list_medium_line_g2_g_ParamLimits

0xfa13,	// (0x0001eb29) list_medium_line_g2_g

0xe557,	// (0x0001d66d) list_medium_line_g2_t1_ParamLimits

0xe557,	// (0x0001d66d) list_medium_line_g2_t1

0x6629,	// (0x0001573f) list_medium_line_t3_g2_g1_ParamLimits

0x6629,	// (0x0001573f) list_medium_line_t3_g2_g1

0x6635,	// (0x0001574b) list_medium_line_t3_g2_g2_ParamLimits

0x6635,	// (0x0001574b) list_medium_line_t3_g2_g2

0x0001,

0xfa13,	// (0x0001eb29) list_medium_line_t3_g2_g_ParamLimits

0xfa13,	// (0x0001eb29) list_medium_line_t3_g2_g

0x80e5,	// (0x000171fb) list_medium_line_t3_g2_t1_ParamLimits

0x80e5,	// (0x000171fb) list_medium_line_t3_g2_t1

0x80fc,	// (0x00017212) list_medium_line_t3_g2_t2_ParamLimits

0x80fc,	// (0x00017212) list_medium_line_t3_g2_t2

0x8111,	// (0x00017227) list_medium_line_t3_g2_t3_ParamLimits

0x8111,	// (0x00017227) list_medium_line_t3_g2_t3

0x0002,

0xfd63,	// (0x0001ee79) list_medium_line_t3_g2_t_ParamLimits

0xfd63,	// (0x0001ee79) list_medium_line_t3_g2_t

0x7cea,	// (0x00016e00) list_medium_line_right_icon_g1

0xe56c,	// (0x0001d682) list_medium_line_right_icon_t1

0x6629,	// (0x0001573f) list_medium_line_t2_g1_ParamLimits

0x6629,	// (0x0001573f) list_medium_line_t2_g1

0x812a,	// (0x00017240) list_medium_line_t2_t1_ParamLimits

0x812a,	// (0x00017240) list_medium_line_t2_t1

0x8144,	// (0x0001725a) list_medium_line_t2_t2_ParamLimits

0x8144,	// (0x0001725a) list_medium_line_t2_t2

0x0001,

0xfd6a,	// (0x0001ee80) list_medium_line_t2_t_ParamLimits

0xfd6a,	// (0x0001ee80) list_medium_line_t2_t

0x6629,	// (0x0001573f) list_medium_line_t3_g1_ParamLimits

0x6629,	// (0x0001573f) list_medium_line_t3_g1

0x815d,	// (0x00017273) list_medium_line_t3_t1_ParamLimits

0x815d,	// (0x00017273) list_medium_line_t3_t1

0x8174,	// (0x0001728a) list_medium_line_t3_t2_ParamLimits

0x8174,	// (0x0001728a) list_medium_line_t3_t2

0x8189,	// (0x0001729f) list_medium_line_t3_t3_ParamLimits

0x8189,	// (0x0001729f) list_medium_line_t3_t3

0x0002,

0xfd6f,	// (0x0001ee85) list_medium_line_t3_t_ParamLimits

0xfd6f,	// (0x0001ee85) list_medium_line_t3_t

0x6629,	// (0x0001573f) list_medium_line_g3_g1_ParamLimits

0x6629,	// (0x0001573f) list_medium_line_g3_g1

0x819b,	// (0x000172b1) list_medium_line_g3_g2_ParamLimits

0x819b,	// (0x000172b1) list_medium_line_g3_g2

0x6635,	// (0x0001574b) list_medium_line_g3_g3_ParamLimits

0x6635,	// (0x0001574b) list_medium_line_g3_g3

0x0002,

0xfd76,	// (0x0001ee8c) list_medium_line_g3_g_ParamLimits

0xfd76,	// (0x0001ee8c) list_medium_line_g3_g

0xe57a,	// (0x0001d690) list_medium_line_g3_t1_ParamLimits

0xe57a,	// (0x0001d690) list_medium_line_g3_t1

0x6629,	// (0x0001573f) list_medium_line_t2_g3_g1_ParamLimits

0x6629,	// (0x0001573f) list_medium_line_t2_g3_g1

0x819b,	// (0x000172b1) list_medium_line_t2_g3_g2_ParamLimits

0x819b,	// (0x000172b1) list_medium_line_t2_g3_g2

0x6635,	// (0x0001574b) list_medium_line_t2_g3_g3_ParamLimits

0x6635,	// (0x0001574b) list_medium_line_t2_g3_g3

0x0002,

0xfd76,	// (0x0001ee8c) list_medium_line_t2_g3_g_ParamLimits

0xfd76,	// (0x0001ee8c) list_medium_line_t2_g3_g

0x81a7,	// (0x000172bd) list_medium_line_t2_g3_t1_ParamLimits

0x81a7,	// (0x000172bd) list_medium_line_t2_g3_t1

0x81c1,	// (0x000172d7) list_medium_line_t2_g3_t2_ParamLimits

0x81c1,	// (0x000172d7) list_medium_line_t2_g3_t2

0x0001,

0xfd7d,	// (0x0001ee93) list_medium_line_t2_g3_t_ParamLimits

0xfd7d,	// (0x0001ee93) list_medium_line_t2_g3_t

0x6629,	// (0x0001573f) list_medium_line_t3_g3_g1_ParamLimits

0x6629,	// (0x0001573f) list_medium_line_t3_g3_g1

0x819b,	// (0x000172b1) list_medium_line_t3_g3_g2_ParamLimits

0x819b,	// (0x000172b1) list_medium_line_t3_g3_g2

0x6635,	// (0x0001574b) list_medium_line_t3_g3_g3_ParamLimits

0x6635,	// (0x0001574b) list_medium_line_t3_g3_g3

0x0002,

0xfd76,	// (0x0001ee8c) list_medium_line_t3_g3_g_ParamLimits

0xfd76,	// (0x0001ee8c) list_medium_line_t3_g3_g

0x81df,	// (0x000172f5) list_medium_line_t3_g3_t1_ParamLimits

0x81df,	// (0x000172f5) list_medium_line_t3_g3_t1

0x81f8,	// (0x0001730e) list_medium_line_t3_g3_t2_ParamLimits

0x81f8,	// (0x0001730e) list_medium_line_t3_g3_t2

0x820e,	// (0x00017324) list_medium_line_t3_g3_t3_ParamLimits

0x820e,	// (0x00017324) list_medium_line_t3_g3_t3

0x0002,

0xfd82,	// (0x0001ee98) list_medium_line_t3_g3_t_ParamLimits

0xfd82,	// (0x0001ee98) list_medium_line_t3_g3_t

0x7e94,	// (0x00016faa) list_medium_line_right_iconx2_g1

0x7cea,	// (0x00016e00) list_medium_line_right_iconx2_g2

0x0001,

0xfd89,	// (0x0001ee9f) list_medium_line_right_iconx2_g

0xe58f,	// (0x0001d6a5) list_medium_line_right_iconx2_t1

0x7e94,	// (0x00016faa) list_medium_line_t2_right_iconx2_g1

0x7cea,	// (0x00016e00) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd89,	// (0x0001ee9f) list_medium_line_t2_right_iconx2_g

0x8228,	// (0x0001733e) list_medium_line_t2_right_iconx2_t1

0x8238,	// (0x0001734e) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd8e,	// (0x0001eea4) list_medium_line_t2_right_iconx2_t

0x824a,	// (0x00017360) list_medium_line_x4_t4_t1

0x8258,	// (0x0001736e) list_medium_line_x4_t4_t2

0x8268,	// (0x0001737e) list_medium_line_x4_t4_t3

0x8278,	// (0x0001738e) list_medium_line_x4_t4_t4

0x0003,

0xfd93,	// (0x0001eea9) list_medium_line_x4_t4_t

0x82cb,	// (0x000173e1) tport_appsw_pane_ParamLimits

0x82cb,	// (0x000173e1) tport_appsw_pane

0x82e3,	// (0x000173f9) tport_contact_pane_ParamLimits

0x82e3,	// (0x000173f9) tport_contact_pane

0x82fb,	// (0x00017411) tport_listscroll_pane_ParamLimits

0x82fb,	// (0x00017411) tport_listscroll_pane

0x8315,	// (0x0001742b) cell_tport_appsw_pane_ParamLimits

0x8315,	// (0x0001742b) cell_tport_appsw_pane

0xd0e1,	// (0x0001c1f7) tport_appsw_pane_g1_ParamLimits

0xd0e1,	// (0x0001c1f7) tport_appsw_pane_g1

0xe59d,	// (0x0001d6b3) tport_contact_pane_g1

0xe5a6,	// (0x0001d6bc) tport_contact_pane_t1

0xe5b4,	// (0x0001d6ca) tport_contact_pane_t2

0x0001,

0xfd9c,	// (0x0001eeb2) tport_contact_pane_t

0xe5c2,	// (0x0001d6d8) list_tport_pane

0xe5cb,	// (0x0001d6e1) scroll_pane_cp_030

0x835d,	// (0x00017473) cell_tport_appsw_pane_g1

0x836d,	// (0x00017483) cell_tport_appsw_pane_t1

0x837b,	// (0x00017491) grid_highlight_pane_cp019

0x8383,	// (0x00017499) list_tport_double_graphic_pane_ParamLimits

0x8383,	// (0x00017499) list_tport_double_graphic_pane

0x943a,	// (0x00018550) list_highlight_pane_cp023_ParamLimits

0x943a,	// (0x00018550) list_highlight_pane_cp023

0x8390,	// (0x000174a6) list_tport_double_graphic_pane_g1_ParamLimits

0x8390,	// (0x000174a6) list_tport_double_graphic_pane_g1

0x839d,	// (0x000174b3) list_tport_double_graphic_pane_t1_ParamLimits

0x839d,	// (0x000174b3) list_tport_double_graphic_pane_t1

0x83b2,	// (0x000174c8) list_tport_double_graphic_pane_t2_ParamLimits

0x83b2,	// (0x000174c8) list_tport_double_graphic_pane_t2

0x0001,

0xfda8,	// (0x0001eebe) list_tport_double_graphic_pane_t_ParamLimits

0xfda8,	// (0x0001eebe) list_tport_double_graphic_pane_t

0x93ca,	// (0x000184e0) main_cale_note_pane

0x5cfb,	// (0x00014e11) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x5cfb,	// (0x00014e11) cell_vitu2_function_top_wide_pane_cp01

0x781c,	// (0x00016932) wait_bar_pane_cp05_ParamLimits

0x943a,	// (0x00018550) listscroll_cmail_pane

0xe5d4,	// (0x0001d6ea) list_cmail_pane

0x83c4,	// (0x000174da) list_cmail_body_pane

0x83d8,	// (0x000174ee) list_single_cmail_header_caption_pane

0x83ef,	// (0x00017505) list_single_cmail_header_detail_pane_ParamLimits

0x83ef,	// (0x00017505) list_single_cmail_header_detail_pane

0xe5e4,	// (0x0001d6fa) list_single_cmail_header_caption_pane_t1

0x8419,	// (0x0001752f) list_single_cmail_header_detail_pane_g1_ParamLimits

0x8419,	// (0x0001752f) list_single_cmail_header_detail_pane_g1

0xe5fb,	// (0x0001d711) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe5fb,	// (0x0001d711) list_single_cmail_header_detail_pane_g2

0x0002,

0xfdad,	// (0x0001eec3) list_single_cmail_header_detail_pane_g_ParamLimits

0xfdad,	// (0x0001eec3) list_single_cmail_header_detail_pane_g

0xe614,	// (0x0001d72a) list_single_cmail_header_detail_pane_t1_ParamLimits

0xe614,	// (0x0001d72a) list_single_cmail_header_detail_pane_t1

0xe674,	// (0x0001d78a) list_single_cmail_header_editor_pane_bg_ParamLimits

0xe674,	// (0x0001d78a) list_single_cmail_header_editor_pane_bg

0xdf88,	// (0x0001d09e) list_cmail_body_pane_g1

0xe68b,	// (0x0001d7a1) list_cmail_body_pane_t1

0xd130,	// (0x0001c246) list_single_cmail_header_editor_pane_bg_g1

0xa085,	// (0x0001919b) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd140,	// (0x0001c256) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd138,	// (0x0001c24e) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd3fe,	// (0x0001c514) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd160,	// (0x0001c276) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd150,	// (0x0001c266) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd158,	// (0x0001c26e) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xa065,	// (0x0001917b) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8431,	// (0x00017547) calenote_gesture_pane_ParamLimits

0x8431,	// (0x00017547) calenote_gesture_pane

0x8451,	// (0x00017567) calenote_window_pane_ParamLimits

0x8451,	// (0x00017567) calenote_window_pane

0xe699,	// (0x0001d7af) popup_note_window_cp01

0x846d,	// (0x00017583) calenote_swipe_1_pane_ParamLimits

0x846d,	// (0x00017583) calenote_swipe_1_pane

0x7c8c,	// (0x00016da2) calenote_swipe_2_pane_ParamLimits

0x7c8c,	// (0x00016da2) calenote_swipe_2_pane

0xe2d9,	// (0x0001d3ef) calenote_swipe_1_pane_g1_ParamLimits

0xe2d9,	// (0x0001d3ef) calenote_swipe_1_pane_g1

0xe2e6,	// (0x0001d3fc) calenote_swipe_1_pane_g2_ParamLimits

0xe2e6,	// (0x0001d3fc) calenote_swipe_1_pane_g2

0x0001,

0xfcd6,	// (0x0001edec) calenote_swipe_1_pane_g_ParamLimits

0xfcd6,	// (0x0001edec) calenote_swipe_1_pane_g

0xe6ab,	// (0x0001d7c1) calenote_swipe_1_pane_t1_ParamLimits

0xe6ab,	// (0x0001d7c1) calenote_swipe_1_pane_t1

0xe2d9,	// (0x0001d3ef) calenote_swipe_2_pane_g1_ParamLimits

0xe2d9,	// (0x0001d3ef) calenote_swipe_2_pane_g1

0xe6ca,	// (0x0001d7e0) calenote_swipe_2_pane_g2_ParamLimits

0xe6ca,	// (0x0001d7e0) calenote_swipe_2_pane_g2

0x0001,

0xfdb9,	// (0x0001eecf) calenote_swipe_2_pane_g_ParamLimits

0xfdb9,	// (0x0001eecf) calenote_swipe_2_pane_g

0xe6d6,	// (0x0001d7ec) calenote_swipe_2_pane_t1_ParamLimits

0xe6d6,	// (0x0001d7ec) calenote_swipe_2_pane_t1

0x93ca,	// (0x000184e0) main_mup_navstr_pane

0x49c3,	// (0x00013ad9) main_mup3_pane_t7_ParamLimits

0x49c3,	// (0x00013ad9) main_mup3_pane_t7

0xcc9a,	// (0x0001bdb0) main_mp4_pane_g6_ParamLimits

0xcc9a,	// (0x0001bdb0) main_mp4_pane_g6

0xcec2,	// (0x0001bfd8) main_image3_pane_t4_ParamLimits

0xcec2,	// (0x0001bfd8) main_image3_pane_t4

0x8482,	// (0x00017598) popup_navstr_preview_pane_ParamLimits

0x8482,	// (0x00017598) popup_navstr_preview_pane

0x8496,	// (0x000175ac) scroll_navstr_pane_ParamLimits

0x8496,	// (0x000175ac) scroll_navstr_pane

0x93ca,	// (0x000184e0) bg_popup_preview_window_pane_cp04

0xe6fd,	// (0x0001d813) popup_navstr_preview_pane_t1

0x84aa,	// (0x000175c0) scroll_navstr_pane_g1_ParamLimits

0x84aa,	// (0x000175c0) scroll_navstr_pane_g1

0x84be,	// (0x000175d4) scroll_navstr_pane_t1_ParamLimits

0x84be,	// (0x000175d4) scroll_navstr_pane_t1

0xe6a2,	// (0x0001d7b8) bg_button_pane_cp014

0xe6a2,	// (0x0001d7b8) bg_button_pane_cp030

0x7b26,	// (0x00016c3c) list_double_fisheye_pane_g4_ParamLimits

0x7b26,	// (0x00016c3c) list_double_fisheye_pane_g4

0x7b32,	// (0x00016c48) list_double_fisheye_pane_g5_ParamLimits

0x7b32,	// (0x00016c48) list_double_fisheye_pane_g5

0xd244,	// (0x0001c35a) sp_fs_scroll_pane_cp03

0xe3cc,	// (0x0001d4e2) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe3d8,	// (0x0001d4ee) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcf3,	// (0x0001ee09) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe3e4,	// (0x0001d4fa) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe5dc,	// (0x0001d6f2) sp_fs_scroll_pane_cp02

0x9d61,	// (0x00018e77) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x9d61,	// (0x00018e77) popup_sp_fs_calendar_preview_list_single_pane

0x93ca,	// (0x000184e0) main_cam6_pano_pane

0x943a,	// (0x00018550) main_mup3_pane_ParamLimits

0x93ca,	// (0x000184e0) main_phacti_pane

0x76ef,	// (0x00016805) bg_button_pane_cp11

0x7709,	// (0x0001681f) main_mobtv_info_pane_g2_ParamLimits

0x7709,	// (0x0001681f) main_mobtv_info_pane_g2

0x0001,

0xfc53,	// (0x0001ed69) main_mobtv_info_pane_g_ParamLimits

0xfc53,	// (0x0001ed69) main_mobtv_info_pane_g

0x78e6,	// (0x000169fc) sc_clock_pane_t5_ParamLimits

0x78e6,	// (0x000169fc) sc_clock_pane_t5

0x79a1,	// (0x00016ab7) main_radioblah_pane_g1_ParamLimits

0xe225,	// (0x0001d33b) main_radioblah_pane_t3_ParamLimits

0xe225,	// (0x0001d33b) main_radioblah_pane_t3

0xe23d,	// (0x0001d353) main_radioblah_pane_t4_ParamLimits

0xe23d,	// (0x0001d353) main_radioblah_pane_t4

0x79c9,	// (0x00016adf) main_radioblah_text_pane_ParamLimits

0x79c9,	// (0x00016adf) main_radioblah_text_pane

0x79db,	// (0x00016af1) main_radioblah_info_pane_g1_ParamLimits

0x7a74,	// (0x00016b8a) main_radioblah_info_pane_t4_ParamLimits

0x7a74,	// (0x00016b8a) main_radioblah_info_pane_t4

0x943a,	// (0x00018550) main_sp_fs_calendar_pane

0x84d5,	// (0x000175eb) main_phacti_pane_g1

0x84dd,	// (0x000175f3) phacti_note_pane_ParamLimits

0x84dd,	// (0x000175f3) phacti_note_pane

0xe714,	// (0x0001d82a) phacti_term_pane_ParamLimits

0xe714,	// (0x0001d82a) phacti_term_pane

0xe729,	// (0x0001d83f) phacti_note_pane_t1_ParamLimits

0xe729,	// (0x0001d83f) phacti_note_pane_t1

0xe740,	// (0x0001d856) phacti_term_pane_g1

0xe748,	// (0x0001d85e) phacti_term_pane_t1_ParamLimits

0xe748,	// (0x0001d85e) phacti_term_pane_t1

0xe772,	// (0x0001d888) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe77a,	// (0x0001d890) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdc3,	// (0x0001eed9) popup_sp_fs_calendar_preview_list_single_pane_g

0xe782,	// (0x0001d898) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe782,	// (0x0001d898) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe798,	// (0x0001d8ae) aid_popup_sp_fs_bg_corner_pane

0xc2de,	// (0x0001b3f4) popup_sp_fs_calendar_preview_bg_pane_g1

0x93ca,	// (0x000184e0) popup_sp_fs_calendar_preview_bg_pane

0x1058,	// (0x0001016e) popup_sp_fs_calendar_preview_list_pane

0xbdc3,	// (0x0001aed9) bg_main_sp_fs_cale_pane_ParamLimits

0xbdc3,	// (0x0001aed9) bg_main_sp_fs_cale_pane

0xe7a9,	// (0x0001d8bf) listscroll_cale_mrui_pane_ParamLimits

0xe7a9,	// (0x0001d8bf) listscroll_cale_mrui_pane

0xd1b4,	// (0x0001c2ca) listscroll_sp_fs_schedule_track_pane

0xe7be,	// (0x0001d8d4) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe7be,	// (0x0001d8d4) main_sp_fs_ctrlbar_pane_cp01

0xe7d1,	// (0x0001d8e7) main_sp_fs_ribbon_pane

0xe7d9,	// (0x0001d8ef) popup_sp_fs_cale_preview_window

0x8552,	// (0x00017668) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8552,	// (0x00017668) list_single_sp_fs_schedule_track_pane

0x943a,	// (0x00018550) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x943a,	// (0x00018550) bg_sp_fs_highlight_list_pane_cp03

0x8566,	// (0x0001767c) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8566,	// (0x0001767c) list_single_sp_fs_schedule_track_pane_g1

0x8572,	// (0x00017688) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8572,	// (0x00017688) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdc8,	// (0x0001eede) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdc8,	// (0x0001eede) list_single_sp_fs_schedule_track_pane_g

0x857e,	// (0x00017694) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x857e,	// (0x00017694) list_single_sp_fs_schedule_track_pane_t1

0x8598,	// (0x000176ae) sp_fs_schedule_track_pane_ParamLimits

0x8598,	// (0x000176ae) sp_fs_schedule_track_pane

0xe7eb,	// (0x0001d901) sp_fs_schedule_track_pane_g1

0xe7f3,	// (0x0001d909) sp_fs_schedule_track_pane_g2

0xe7fb,	// (0x0001d911) sp_fs_schedule_track_pane_g3

0xe803,	// (0x0001d919) sp_fs_schedule_track_pane_g4

0xe80b,	// (0x0001d921) sp_fs_schedule_track_pane_g5

0x0004,

0xfdcd,	// (0x0001eee3) sp_fs_schedule_track_pane_g

0xd130,	// (0x0001c246) bg_sp_fs_schedule_viewer_highlight_g1

0xa085,	// (0x0001919b) bg_sp_fs_schedule_viewer_highlight_g2

0xd138,	// (0x0001c24e) bg_sp_fs_schedule_viewer_highlight_g3

0xd140,	// (0x0001c256) bg_sp_fs_schedule_viewer_highlight_g4

0xd3fe,	// (0x0001c514) bg_sp_fs_schedule_viewer_highlight_g5

0xd150,	// (0x0001c266) bg_sp_fs_schedule_viewer_highlight_g6

0xd158,	// (0x0001c26e) bg_sp_fs_schedule_viewer_highlight_g7

0xd160,	// (0x0001c276) bg_sp_fs_schedule_viewer_highlight_g8

0xa065,	// (0x0001917b) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdd8,	// (0x0001eeee) bg_sp_fs_schedule_viewer_highlight_g

0x93ca,	// (0x000184e0) bg_main_sp_fs_ribbon_pane

0x85a9,	// (0x000176bf) main_sp_fs_ribbon_pane_g1

0xe813,	// (0x0001d929) main_sp_fs_ribbon_pane_t1

0x85b2,	// (0x000176c8) main_sp_fs_ribbon_pane_t2

0xe822,	// (0x0001d938) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdeb,	// (0x0001ef01) main_sp_fs_ribbon_pane_t

0xe831,	// (0x0001d947) main_sp_fs_ribbon_scheduler_pane

0xe839,	// (0x0001d94f) bg_main_sp_fs_ribbon_pane_g1

0xe842,	// (0x0001d958) bg_main_sp_fs_ribbon_pane_g2

0xe84b,	// (0x0001d961) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdf2,	// (0x0001ef08) bg_main_sp_fs_ribbon_pane_g

0xe853,	// (0x0001d969) main_sp_fs_ribbon_scheduler_pane_g1

0xe85c,	// (0x0001d972) main_sp_fs_ribbon_scheduler_pane_g2

0xe865,	// (0x0001d97b) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdf9,	// (0x0001ef0f) main_sp_fs_ribbon_scheduler_pane_g

0xe86e,	// (0x0001d984) list_cale_mrui_pane

0x85c1,	// (0x000176d7) sp_fs_scroll_pane_cp07_ParamLimits

0x85c1,	// (0x000176d7) sp_fs_scroll_pane_cp07

0x85dd,	// (0x000176f3) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x85dd,	// (0x000176f3) bg_sp_fs_schedule_viewer_highlight

0xe87b,	// (0x0001d991) list_single_sp_fs_schedule_track_pane_cp01

0xe883,	// (0x0001d999) list_sp_fs_schedule_track_pane

0xe88b,	// (0x0001d9a1) sp_fs_scroll_pane_cp06_ParamLimits

0xe88b,	// (0x0001d9a1) sp_fs_scroll_pane_cp06

0xc2de,	// (0x0001b3f4) bgmain_sp_fs_calendar_pane_g1

0x85ed,	// (0x00017703) list_single_cale_mrui_pane_ParamLimits

0x85ed,	// (0x00017703) list_single_cale_mrui_pane

0xe89d,	// (0x0001d9b3) list_single_cale_mrui_row_pane_ParamLimits

0xe89d,	// (0x0001d9b3) list_single_cale_mrui_row_pane

0xe8aa,	// (0x0001d9c0) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe8aa,	// (0x0001d9c0) list_single_cale_mrui_row_pane_g1

0xe8e3,	// (0x0001d9f9) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe8e3,	// (0x0001d9f9) list_single_cale_mrui_row_pane_t1

0x860e,	// (0x00017724) list_single_cale_mrui_row_pane_t2_ParamLimits

0x860e,	// (0x00017724) list_single_cale_mrui_row_pane_t2

0xe8f5,	// (0x0001da0b) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe8f5,	// (0x0001da0b) list_single_cale_mrui_row_pane_t3

0xe924,	// (0x0001da3a) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe924,	// (0x0001da3a) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe07,	// (0x0001ef1d) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe07,	// (0x0001ef1d) list_single_cale_mrui_row_pane_t

0x8676,	// (0x0001778c) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x8676,	// (0x0001778c) list_single_cmail_header_editor_pane_bg_cp01

0x869c,	// (0x000177b2) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x869c,	// (0x000177b2) list_single_cmail_header_editor_pane_bg_cp02

0x86bc,	// (0x000177d2) main_radioblah_text_pane_t1_ParamLimits

0x86bc,	// (0x000177d2) main_radioblah_text_pane_t1

0xe953,	// (0x0001da69) cam6_indi_pane_cp01

0xe95b,	// (0x0001da71) cam6_mode_pane_cp01

0xe963,	// (0x0001da79) cam6_pano_pane

0xe96c,	// (0x0001da82) cam6_zoom_pane_cp01

0xe974,	// (0x0001da8a) cam6_pano_image_pane

0xe97f,	// (0x0001da95) cam6_pano_pane_g1

0xdf88,	// (0x0001d09e) cam6_pano_pane_g2

0xe988,	// (0x0001da9e) cam6_pano_pane_g3

0xe991,	// (0x0001daa7) cam6_pano_pane_g4

0xc8fd,	// (0x0001ba13) cam6_pano_pane_g5

0xe99a,	// (0x0001dab0) cam6_pano_pane_g6

0xe9a4,	// (0x0001daba) cam6_pano_pane_g7

0xe9ac,	// (0x0001dac2) cam6_pano_pane_g8

0xe9b5,	// (0x0001dacb) cam6_pano_pane_g9

0x0008,

0xfe10,	// (0x0001ef26) cam6_pano_pane_g

0x93ca,	// (0x000184e0) main_browser_tag_pane

0xe6f5,	// (0x0001d80b) grid_navstr_albumart_pane

0xe9c0,	// (0x0001dad6) cell_navstr_albumart_pane_ParamLimits

0xe9c0,	// (0x0001dad6) cell_navstr_albumart_pane

0xe9e0,	// (0x0001daf6) cell_navstr_albumart_pane_g1

0xbb94,	// (0x0001acaa) cell_navstr_albumart_pane_g2

0xbba4,	// (0x0001acba) cell_navstr_albumart_pane_g3

0xbb9c,	// (0x0001acb2) cell_navstr_albumart_pane_g4

0x0003,

0xfe23,	// (0x0001ef39) cell_navstr_albumart_pane_g

0x86d7,	// (0x000177ed) bt_list_pane_ParamLimits

0x86d7,	// (0x000177ed) bt_list_pane

0x86eb,	// (0x00017801) bt_list_pane_t1

0x86fa,	// (0x00017810) bt_list_pane_t2

0x0001,

0xfe2c,	// (0x0001ef42) bt_list_pane_t

0x93ca,	// (0x000184e0) main_cale_prevew_pane

0x8709,	// (0x0001781f) popup_cale_preview_window_ParamLimits

0x8709,	// (0x0001781f) popup_cale_preview_window

0x943a,	// (0x00018550) bg_popup_preview_window_pane_cp05_ParamLimits

0x943a,	// (0x00018550) bg_popup_preview_window_pane_cp05

0xe9e8,	// (0x0001dafe) list_cale_preview_pane_ParamLimits

0xe9e8,	// (0x0001dafe) list_cale_preview_pane

0x8722,	// (0x00017838) list_double_cale_preview_pane_ParamLimits

0x8722,	// (0x00017838) list_double_cale_preview_pane

0xd168,	// (0x0001c27e) list_single_cale_preview_pane_ParamLimits

0xd168,	// (0x0001c27e) list_single_cale_preview_pane

0x8734,	// (0x0001784a) list_single_cale_preview_pane_g1

0x873c,	// (0x00017852) list_single_cale_preview_pane_t1_ParamLimits

0x873c,	// (0x00017852) list_single_cale_preview_pane_t1

0x8751,	// (0x00017867) list_double_cale_preview_pane_g1

0x8759,	// (0x0001786f) list_double_cale_preview_pane_t1_ParamLimits

0x8759,	// (0x0001786f) list_double_cale_preview_pane_t1

0x876e,	// (0x00017884) list_double_cale_preview_pane_t2_ParamLimits

0x876e,	// (0x00017884) list_double_cale_preview_pane_t2

0x0001,

0xfe31,	// (0x0001ef47) list_double_cale_preview_pane_t_ParamLimits

0xfe31,	// (0x0001ef47) list_double_cale_preview_pane_t

0x93ca,	// (0x000184e0) main_ezdial_pane

0x943a,	// (0x00018550) main_sp_fs_email_pane_ParamLimits

0x7d14,	// (0x00016e2a) cmail_ddmenu_btn01_pane_ParamLimits

0x7d14,	// (0x00016e2a) cmail_ddmenu_btn01_pane

0x7d27,	// (0x00016e3d) cmail_ddmenu_btn02_pane_ParamLimits

0x7d27,	// (0x00016e3d) cmail_ddmenu_btn02_pane

0x7d4a,	// (0x00016e60) cmail_ddmenu_btn03_pane_ParamLimits

0x7d4a,	// (0x00016e60) cmail_ddmenu_btn03_pane

0x7d70,	// (0x00016e86) main_sp_fs_ctrlbar_pane_ParamLimits

0x7d94,	// (0x00016eaa) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x83c4,	// (0x000174da) list_cmail_body_pane_ParamLimits

0xe5f2,	// (0x0001d708) bg_button_pane_cp12

0xe607,	// (0x0001d71d) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe607,	// (0x0001d71d) list_single_cmail_header_detail_pane_g3

0xe650,	// (0x0001d766) list_single_cmail_header_detail_pane_t2_ParamLimits

0xe650,	// (0x0001d766) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdb4,	// (0x0001eeca) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdb4,	// (0x0001eeca) list_single_cmail_header_detail_pane_t

0xe75d,	// (0x0001d873) phacti_term_pane_t2_ParamLimits

0xe75d,	// (0x0001d873) phacti_term_pane_t2

0x0001,

0xfdbe,	// (0x0001eed4) phacti_term_pane_t_ParamLimits

0xfdbe,	// (0x0001eed4) phacti_term_pane_t

0xe9f4,	// (0x0001db0a) aid_size_list_single_double

0x8786,	// (0x0001789c) popup_ezdial_listscroll_window

0x87a2,	// (0x000178b8) popup_number_entry_window_cp01

0x9e22,	// (0x00018f38) bg_popup_call_pane_cp09

0xea00,	// (0x0001db16) ezdial_list_pane

0xea08,	// (0x0001db1e) scroll_pane_cp23

0xbdc3,	// (0x0001aed9) bg_button_pane_cp028_ParamLimits

0xbdc3,	// (0x0001aed9) bg_button_pane_cp028

0x87b0,	// (0x000178c6) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x87b0,	// (0x000178c6) cmail_ddmenu_btn01_pane_g1

0x87bc,	// (0x000178d2) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x87bc,	// (0x000178d2) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe36,	// (0x0001ef4c) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe36,	// (0x0001ef4c) cmail_ddmenu_btn01_pane_g

0xea10,	// (0x0001db26) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xea10,	// (0x0001db26) cmail_ddmenu_btn01_pane_t1

0xbdc3,	// (0x0001aed9) bg_button_pane_cp029_ParamLimits

0xbdc3,	// (0x0001aed9) bg_button_pane_cp029

0x87c8,	// (0x000178de) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x87c8,	// (0x000178de) cmail_ddmenu_btn02_pane_g1

0x87e1,	// (0x000178f7) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x87e1,	// (0x000178f7) cmail_ddmenu_btn02_pane_t1

0x943a,	// (0x00018550) bg_button_pane_cp031_ParamLimits

0x943a,	// (0x00018550) bg_button_pane_cp031

0x87c8,	// (0x000178de) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x87c8,	// (0x000178de) cmail_ddmenu_btn03_pane_g1

0x87e1,	// (0x000178f7) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x87e1,	// (0x000178f7) cmail_ddmenu_btn03_pane_t1

0x5570,	// (0x00014686) cell_dialer2_keypad_pane_t1_ParamLimits

0x558a,	// (0x000146a0) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x558a,	// (0x000146a0) cell_dialer2_keypad_pane_t1_copy1

0x7556,	// (0x0001666c) ncimui_group_button_pane

0x943a,	// (0x00018550) main_sp_fs_calendar_pane_ParamLimits

0x83d8,	// (0x000174ee) list_single_cmail_header_caption_pane_ParamLimits

0xe7a0,	// (0x0001d8b6) aid_recal_txt_sm_pane

0x93ca,	// (0x000184e0) mian_recal_day_pane

0xe7d9,	// (0x0001d8ef) popup_sp_fs_cale_preview_window_ParamLimits

0xea25,	// (0x0001db3b) list_recal_day_pane

0xea67,	// (0x0001db7d) list_single_recal_day_pane_ParamLimits

0xea67,	// (0x0001db7d) list_single_recal_day_pane

0xea79,	// (0x0001db8f) list_single_recal_day_pane_g1_ParamLimits

0xea79,	// (0x0001db8f) list_single_recal_day_pane_g1

0xea85,	// (0x0001db9b) list_single_recal_day_pane_g2_ParamLimits

0xea85,	// (0x0001db9b) list_single_recal_day_pane_g2

0xea95,	// (0x0001dbab) list_single_recal_day_pane_g3_ParamLimits

0xea95,	// (0x0001dbab) list_single_recal_day_pane_g3

0x8805,	// (0x0001791b) list_single_recal_day_pane_g4_ParamLimits

0x8805,	// (0x0001791b) list_single_recal_day_pane_g4

0xeaa1,	// (0x0001dbb7) list_single_recal_day_pane_g5_ParamLimits

0xeaa1,	// (0x0001dbb7) list_single_recal_day_pane_g5

0xeade,	// (0x0001dbf4) list_single_recal_day_pane_g6_ParamLimits

0xeade,	// (0x0001dbf4) list_single_recal_day_pane_g6

0x0004,

0xfe45,	// (0x0001ef5b) list_single_recal_day_pane_g_ParamLimits

0xfe45,	// (0x0001ef5b) list_single_recal_day_pane_g

0xeaf2,	// (0x0001dc08) list_single_recal_day_pane_t1

0xeb04,	// (0x0001dc1a) list_single_recal_day_pane_t2

0x0001,

0xfe50,	// (0x0001ef66) list_single_recal_day_pane_t

0x8825,	// (0x0001793b) ncimui_query_button_pane_ParamLimits

0x8825,	// (0x0001793b) ncimui_query_button_pane

0x8835,	// (0x0001794b) ncimui_query_button_pane_t1_ParamLimits

0x8835,	// (0x0001794b) ncimui_query_button_pane_t1

0xeb16,	// (0x0001dc2c) ncimui_query_button_pane_t2_ParamLimits

0xeb16,	// (0x0001dc2c) ncimui_query_button_pane_t2

0x0001,

0xfe55,	// (0x0001ef6b) ncimui_query_button_pane_t_ParamLimits

0xfe55,	// (0x0001ef6b) ncimui_query_button_pane_t

0x8848,	// (0x0001795e) query_button_pane_ParamLimits

0x8848,	// (0x0001795e) query_button_pane

0x93ca,	// (0x000184e0) bg_button_pane_cp0028

0xeb29,	// (0x0001dc3f) query_button_pane_t1

0x362c,	// (0x00012742) main_tport_pane_ParamLimits

0x8288,	// (0x0001739e) bg_popup_window_pane_cp01_ParamLimits

0x8288,	// (0x0001739e) bg_popup_window_pane_cp01

0x82a3,	// (0x000173b9) heading_pane_cp08_ParamLimits

0x82a3,	// (0x000173b9) heading_pane_cp08

0x82b6,	// (0x000173cc) heading_pane_cp07_ParamLimits

0x82b6,	// (0x000173cc) heading_pane_cp07

0x835d,	// (0x00017473) cell_tport_appsw_pane_g2

0x0002,

0xfda1,	// (0x0001eeb7) cell_tport_appsw_pane_g

0x2bd6,	// (0x00011cec) input_candi_list_open_g1

0xa290,	// (0x000193a6) list_cale_time_pane_g6_ParamLimits

0xa290,	// (0x000193a6) list_cale_time_pane_g6

0x43f4,	// (0x0001350a) aid_size_touch_calib_1_ParamLimits

0x43f4,	// (0x0001350a) aid_size_touch_calib_1

0x4406,	// (0x0001351c) aid_size_touch_calib_2_ParamLimits

0x4406,	// (0x0001351c) aid_size_touch_calib_2

0x441e,	// (0x00013534) aid_size_touch_calib_3_ParamLimits

0x441e,	// (0x00013534) aid_size_touch_calib_3

0x443c,	// (0x00013552) aid_size_touch_calib_4_ParamLimits

0x443c,	// (0x00013552) aid_size_touch_calib_4

0x4454,	// (0x0001356a) main_touch_calib_button_group_pane_ParamLimits

0x4454,	// (0x0001356a) main_touch_calib_button_group_pane

0x446c,	// (0x00013582) main_touch_calib_pane_g1_ParamLimits

0x447e,	// (0x00013594) main_touch_calib_pane_g2_ParamLimits

0x4490,	// (0x000135a6) main_touch_calib_pane_g3_ParamLimits

0x44a2,	// (0x000135b8) main_touch_calib_pane_g4_ParamLimits

0xf764,	// (0x0001e87a) main_touch_calib_pane_g_ParamLimits

0x44b4,	// (0x000135ca) main_touch_calib_pane_t1_ParamLimits

0x44ce,	// (0x000135e4) main_touch_calib_pane_t2_ParamLimits

0x44e8,	// (0x000135fe) main_touch_calib_pane_t3_ParamLimits

0x44fc,	// (0x00013612) main_touch_calib_pane_t4_ParamLimits

0x4510,	// (0x00013626) main_touch_calib_pane_t5_ParamLimits

0xf76d,	// (0x0001e883) main_touch_calib_pane_t_ParamLimits

0xc6a0,	// (0x0001b7b6) list_single_fp_cale_pane_g3_ParamLimits

0xc6a0,	// (0x0001b7b6) list_single_fp_cale_pane_g3

0x943a,	// (0x00018550) bg_button_pane_cp012_ParamLimits

0x943a,	// (0x00018550) bg_vkb2_func_pane_cp03_ParamLimits

0x65df,	// (0x000156f5) cell_vitu2_function_top_pane_g1_ParamLimits

0x943a,	// (0x00018550) bg_vkb2_func_pane_cp04_ParamLimits

0x74e4,	// (0x000165fa) main_ncimui_button_group_pane_ParamLimits

0x74e4,	// (0x000165fa) main_ncimui_button_group_pane

0x7544,	// (0x0001665a) main_ncimui_pane_t3_ParamLimits

0x7544,	// (0x0001665a) main_ncimui_pane_t3

0xe70b,	// (0x0001d821) phacti_button_group_pane

0xe9f4,	// (0x0001db0a) aid_size_list_single_double_ParamLimits

0x8786,	// (0x0001789c) popup_ezdial_listscroll_window_ParamLimits

0x87a2,	// (0x000178b8) popup_number_entry_window_cp01_ParamLimits

0x885b,	// (0x00017971) phacti_button_pane_ParamLimits

0x885b,	// (0x00017971) phacti_button_pane

0x93ca,	// (0x000184e0) bg_button_pane_cp14

0xeb37,	// (0x0001dc4d) phacti_button_pane_t1

0x886c,	// (0x00017982) main_touch_calib_button_pane_ParamLimits

0x886c,	// (0x00017982) main_touch_calib_button_pane

0x9ba9,	// (0x00018cbf) bg_button_pane_cp18_ParamLimits

0x9ba9,	// (0x00018cbf) bg_button_pane_cp18

0xeb45,	// (0x0001dc5b) main_touch_calib_button_pane_t1_ParamLimits

0xeb45,	// (0x0001dc5b) main_touch_calib_button_pane_t1

0xeb5b,	// (0x0001dc71) main_touch_calib_button_pane_t2_ParamLimits

0xeb5b,	// (0x0001dc71) main_touch_calib_button_pane_t2

0x0001,

0xfe5a,	// (0x0001ef70) main_touch_calib_button_pane_t_ParamLimits

0xfe5a,	// (0x0001ef70) main_touch_calib_button_pane_t

0x93ca,	// (0x000184e0) cell_ncimui_button_pane

0x93ca,	// (0x000184e0) bg_button_pane_cp032

0xeb79,	// (0x0001dc8f) cell_ncimui_button_pane_t1

0xcea2,	// (0x0001bfb8) image3_infobar_pane_ParamLimits

0xcea2,	// (0x0001bfb8) image3_infobar_pane

0x7912,	// (0x00016a28) fs_bigclock_status_pane_ParamLimits

0x7912,	// (0x00016a28) fs_bigclock_status_pane

0x791f,	// (0x00016a35) main_fs_bigclock_clock_pane_ParamLimits

0x791f,	// (0x00016a35) main_fs_bigclock_clock_pane

0x793f,	// (0x00016a55) main_fs_bigclock_indi_pane_ParamLimits

0x793f,	// (0x00016a55) main_fs_bigclock_indi_pane

0x7969,	// (0x00016a7f) main_fs_bigclock_swipe_pane_ParamLimits

0x7969,	// (0x00016a7f) main_fs_bigclock_swipe_pane

0x93ca,	// (0x000184e0) main_fs_clock_dumped_data

0xe095,	// (0x0001d1ab) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe095,	// (0x0001d1ab) list_single_fs_bigclock_indicator_pane_g1

0xe0b1,	// (0x0001d1c7) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe0b1,	// (0x0001d1c7) list_single_fs_bigclock_indicator_pane_g2

0xe0cb,	// (0x0001d1e1) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe0cb,	// (0x0001d1e1) list_single_fs_bigclock_indicator_pane_g3

0xe0e5,	// (0x0001d1fb) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe0e5,	// (0x0001d1fb) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc87,	// (0x0001ed9d) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc87,	// (0x0001ed9d) list_single_fs_bigclock_indicator_pane_g

0xe110,	// (0x0001d226) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe110,	// (0x0001d226) list_single_fs_bigclock_indicator_pane_t1

0xe138,	// (0x0001d24e) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe138,	// (0x0001d24e) list_single_fs_bigclock_indicator_pane_t2

0xe160,	// (0x0001d276) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe160,	// (0x0001d276) list_single_fs_bigclock_indicator_pane_t3

0xe188,	// (0x0001d29e) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe188,	// (0x0001d29e) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc92,	// (0x0001eda8) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc92,	// (0x0001eda8) list_single_fs_bigclock_indicator_pane_t

0xeb87,	// (0x0001dc9d) image3_infobar_fav_pane_ParamLimits

0xeb87,	// (0x0001dc9d) image3_infobar_fav_pane

0xeb97,	// (0x0001dcad) image3_infobar_loc_pane_ParamLimits

0xeb97,	// (0x0001dcad) image3_infobar_loc_pane

0xebab,	// (0x0001dcc1) image3_infobar_time_pane_ParamLimits

0xebab,	// (0x0001dcc1) image3_infobar_time_pane

0xc2de,	// (0x0001b3f4) image3_infobar_time_pane_g1

0xebbb,	// (0x0001dcd1) image3_infobar_time_pane_t1

0xc2de,	// (0x0001b3f4) image3_infobar_loc_pane_g1

0xebc9,	// (0x0001dcdf) image3_infobar_loc_pane_g2

0x0001,

0xfe5f,	// (0x0001ef75) image3_infobar_loc_pane_g

0xebd1,	// (0x0001dce7) image3_infobar_loc_pane_t1

0xc2de,	// (0x0001b3f4) image3_infobar_fav_pane_g1

0xebdf,	// (0x0001dcf5) image3_infobar_fav_pane_g2

0x0001,

0xfe64,	// (0x0001ef7a) image3_infobar_fav_pane_g

0xebe7,	// (0x0001dcfd) fs_bigclock_status_battery_pane

0xebf0,	// (0x0001dd06) fs_bigclock_status_signal_pane

0xebf9,	// (0x0001dd0f) fs_bigclock_status_title_pane

0xec02,	// (0x0001dd18) fs_bigclock_status_signal_pane_g1

0xec0b,	// (0x0001dd21) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe69,	// (0x0001ef7f) fs_bigclock_status_signal_pane_g

0xec13,	// (0x0001dd29) fs_bigclock_status_battery_pane_g1

0xec1c,	// (0x0001dd32) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe6e,	// (0x0001ef84) fs_bigclock_status_battery_pane_g

0xec24,	// (0x0001dd3a) fs_bigclock_status_title_pane_t1

0xc2de,	// (0x0001b3f4) main_fs_bigclock_clock_pane_g1

0xec32,	// (0x0001dd48) main_fs_bigclock_clock_pane_g2

0xec3b,	// (0x0001dd51) main_fs_bigclock_clock_pane_g3

0xec3b,	// (0x0001dd51) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe73,	// (0x0001ef89) main_fs_bigclock_clock_pane_g

0xec43,	// (0x0001dd59) main_fs_bigclock_clock_pane_t1

0x8881,	// (0x00017997) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe7c,	// (0x0001ef92) main_fs_bigclock_clock_pane_t

0xec51,	// (0x0001dd67) list_single_fs_bigclock_indicator_pane_ParamLimits

0xec51,	// (0x0001dd67) list_single_fs_bigclock_indicator_pane

0xec62,	// (0x0001dd78) list_single_fs_bigclock_pane_ParamLimits

0xec62,	// (0x0001dd78) list_single_fs_bigclock_pane

0xec88,	// (0x0001dd9e) main_fs_bigclock_indicator_pane_t1

0xec97,	// (0x0001ddad) list_single_fs_bigclock_pane_g1

0xec9f,	// (0x0001ddb5) list_single_fs_bigclock_pane_t1

0xc2de,	// (0x0001b3f4) main_fs_bigclock_swipe_pane_g1

0xece2,	// (0x0001ddf8) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe8d,	// (0x0001efa3) main_fs_bigclock_swipe_pane_g

0xecea,	// (0x0001de00) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xecea,	// (0x0001de00) main_fs_bigclock_swipe_pane_t1

0x24c5,	// (0x000115db) call_type_pane_ParamLimits

0x93ca,	// (0x000184e0) main_btmg_pane

0xe3d8,	// (0x0001d4ee) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe3d8,	// (0x0001d4ee) list_single_cale_mrui_row_pane_g2

0x0002,

0xfe00,	// (0x0001ef16) list_single_cale_mrui_row_pane_g_ParamLimits

0xfe00,	// (0x0001ef16) list_single_cale_mrui_row_pane_g

0xea4e,	// (0x0001db64) list_recal_vselct_arw_lo_pane

0xea56,	// (0x0001db6c) list_recal_vselct_arw_up_pane

0xea5e,	// (0x0001db74) list_recal_vselct_pane

0x88d4,	// (0x000179ea) btmg_button_pane

0x88de,	// (0x000179f4) main_btmg_pane_g1

0x93ca,	// (0x000184e0) bg_button_pane_cp044

0xed07,	// (0x0001de1d) btmg_button_pane_t1

0xbdaf,	// (0x0001aec5) aid_listscroll_gen

0x943a,	// (0x00018550) main_cntbar_detail_pane

0xe5d4,	// (0x0001d6ea) list_cmail_folder_pane

0xd244,	// (0x0001c35a) sp_fs_scroll_pane_cp03_ParamLimits

0x88e8,	// (0x000179fe) list_single_fs_dyc_pane_cp01_ParamLimits

0x88e8,	// (0x000179fe) list_single_fs_dyc_pane_cp01

0xed15,	// (0x0001de2b) aid_size_cmail_indent

0xed1e,	// (0x0001de34) list_single_dyc_row_pane_cp01

0x8931,	// (0x00017a47) cntbar_detail_list_pane_ParamLimits

0x8931,	// (0x00017a47) cntbar_detail_list_pane

0x897d,	// (0x00017a93) main_cntbar_detail_cont_pane_ParamLimits

0x897d,	// (0x00017a93) main_cntbar_detail_cont_pane

0xd244,	// (0x0001c35a) scroll_pane_cp032_ParamLimits

0xd244,	// (0x0001c35a) scroll_pane_cp032

0x8991,	// (0x00017aa7) cntbar_detail_list_event_pane_ParamLimits

0x8991,	// (0x00017aa7) cntbar_detail_list_event_pane

0x8941,	// (0x00017a57) cntbar_detail_list_shct_pane

0xa0d3,	// (0x000191e9) aid_list_gen

0xed27,	// (0x0001de3d) aid_scroll

0xed30,	// (0x0001de46) aid_size_touch_scroll_bar

0x6cdd,	// (0x00015df3) aid_list_double

0x6ccb,	// (0x00015de1) aid_list_single

0x6ccb,	// (0x00015de1) aid_list_single_lg

0x89a1,	// (0x00017ab7) aid_list_z_g_a_sm

0x89a9,	// (0x00017abf) aid_list_z_g_d

0x89b1,	// (0x00017ac7) aid_txt_z_prm

0x89bf,	// (0x00017ad5) aid_txt_z_prm_cp01

0x89cd,	// (0x00017ae3) aid_txt_z_sec

0x89db,	// (0x00017af1) main_cntbar_detail_cont_pane_g1_ParamLimits

0x89db,	// (0x00017af1) main_cntbar_detail_cont_pane_g1

0x89ef,	// (0x00017b05) main_cntbar_detail_cont_pane_g2_ParamLimits

0x89ef,	// (0x00017b05) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe92,	// (0x0001efa8) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe92,	// (0x0001efa8) main_cntbar_detail_cont_pane_g

0xed39,	// (0x0001de4f) main_cntbar_detail_cont_pane_t1

0xed47,	// (0x0001de5d) main_cntbar_detail_cont_pane_t2

0xed55,	// (0x0001de6b) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe97,	// (0x0001efad) main_cntbar_detail_cont_pane_t

0x89ff,	// (0x00017b15) cell_cntbar_detail_list_shct_pane_ParamLimits

0x89ff,	// (0x00017b15) cell_cntbar_detail_list_shct_pane

0xed63,	// (0x0001de79) cntbar_detail_list_shct_pane_g1

0xed6c,	// (0x0001de82) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe9e,	// (0x0001efb4) cntbar_detail_list_shct_pane_g

0x8a13,	// (0x00017b29) cntbar_detail_list_event_pane_g1_ParamLimits

0x8a13,	// (0x00017b29) cntbar_detail_list_event_pane_g1

0x8a1f,	// (0x00017b35) cntbar_detail_list_event_pane_g2_ParamLimits

0x8a1f,	// (0x00017b35) cntbar_detail_list_event_pane_g2

0x0005,

0xfea3,	// (0x0001efb9) cntbar_detail_list_event_pane_g_ParamLimits

0xfea3,	// (0x0001efb9) cntbar_detail_list_event_pane_g

0x8a8b,	// (0x00017ba1) cntbar_detail_list_event_pane_t1_ParamLimits

0x8a8b,	// (0x00017ba1) cntbar_detail_list_event_pane_t1

0x8aa0,	// (0x00017bb6) cntbar_detail_list_event_pane_t2_ParamLimits

0x8aa0,	// (0x00017bb6) cntbar_detail_list_event_pane_t2

0x0002,

0xfeb0,	// (0x0001efc6) cntbar_detail_list_event_pane_t_ParamLimits

0xfeb0,	// (0x0001efc6) cntbar_detail_list_event_pane_t

0xc2de,	// (0x0001b3f4) cell_cntbar_detail_list_shct_pane_g1

0xa8d6,	// (0x000199ec) navi_pane_mv_g3

0x943a,	// (0x00018550) main_cntbar_detail_pane_ParamLimits

0x93ca,	// (0x000184e0) main_notif_wgt_pane

0xcc34,	// (0x0001bd4a) aid_tch_main_mp4_pane_g4

0xce36,	// (0x0001bf4c) popup_slider_window_cp02

0xea44,	// (0x0001db5a) list_recal_day_event_pane

0x88ff,	// (0x00017a15) cntbar_detail_btn_pane_ParamLimits

0x88ff,	// (0x00017a15) cntbar_detail_btn_pane

0x8918,	// (0x00017a2e) cntbar_detail_btn_pane_cp01_ParamLimits

0x8918,	// (0x00017a2e) cntbar_detail_btn_pane_cp01

0x8941,	// (0x00017a57) cntbar_detail_list_shct_pane_ParamLimits

0x8951,	// (0x00017a67) cntbar_detail_pane_g1_ParamLimits

0x8951,	// (0x00017a67) cntbar_detail_pane_g1

0x8961,	// (0x00017a77) cntbar_detail_pane_t1_ParamLimits

0x8961,	// (0x00017a77) cntbar_detail_pane_t1

0x8a2b,	// (0x00017b41) cntbar_detail_list_event_pane_g3_ParamLimits

0x8a2b,	// (0x00017b41) cntbar_detail_list_event_pane_g3

0x8a43,	// (0x00017b59) cntbar_detail_list_event_pane_g4_ParamLimits

0x8a43,	// (0x00017b59) cntbar_detail_list_event_pane_g4

0x8a5b,	// (0x00017b71) cntbar_detail_list_event_pane_g5_ParamLimits

0x8a5b,	// (0x00017b71) cntbar_detail_list_event_pane_g5

0x8a73,	// (0x00017b89) cntbar_detail_list_event_pane_g6_ParamLimits

0x8a73,	// (0x00017b89) cntbar_detail_list_event_pane_g6

0x8ab5,	// (0x00017bcb) cntbar_detail_list_event_pane_t3_ParamLimits

0x8ab5,	// (0x00017bcb) cntbar_detail_list_event_pane_t3

0x8ac7,	// (0x00017bdd) popup_notif_wgt_window_ParamLimits

0x8ac7,	// (0x00017bdd) popup_notif_wgt_window

0x8ae0,	// (0x00017bf6) popup_submenu_window_cp01_ParamLimits

0x8ae0,	// (0x00017bf6) popup_submenu_window_cp01

0x9e22,	// (0x00018f38) bg_popup_window_pane_cp10

0xed75,	// (0x0001de8b) listscroll_notif_wgt_pane

0xed87,	// (0x0001de9d) list_notif_wgt_window

0xed90,	// (0x0001dea6) scroll_pane_cp033

0x8af2,	// (0x00017c08) list_notif_wgt_row_pane_ParamLimits

0x8af2,	// (0x00017c08) list_notif_wgt_row_pane

0xed99,	// (0x0001deaf) aid_size_list_notif_wgt_del

0xeda6,	// (0x0001debc) list_notif_wgt_row_pane_g1

0xedb2,	// (0x0001dec8) list_notif_wgt_row_pane_g2

0xedc6,	// (0x0001dedc) list_notif_wgt_row_pane_g3

0x0002,

0xfeb7,	// (0x0001efcd) list_notif_wgt_row_pane_g

0xedd3,	// (0x0001dee9) list_notif_wgt_row_pane_t1

0xede9,	// (0x0001deff) list_notif_wgt_row_pane_t2

0xedfb,	// (0x0001df11) list_notif_wgt_row_pane_t3

0x0002,

0xfebe,	// (0x0001efd4) list_notif_wgt_row_pane_t

0xd426,	// (0x0001c53c) list_recal_day_event_pane_g1

0xee0d,	// (0x0001df23) list_recal_day_event_pane_t1

0x93ca,	// (0x000184e0) bg_button_pane_cp045

0x8b02,	// (0x00017c18) cntbar_detail_btn_pane_t1

0xbdc3,	// (0x0001aed9) main_callh_pane_ParamLimits

0xbdc3,	// (0x0001aed9) main_callh_pane

0x93ca,	// (0x000184e0) main_coverflow0_pane

0x93ca,	// (0x000184e0) main_wgtman_pane

0x7981,	// (0x00016a97) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x7981,	// (0x00016a97) main_fs_bigclock_unlock_btn_pane

0x8355,	// (0x0001746b) bg_button_pane_cp16

0x8365,	// (0x0001747b) cell_tport_appsw_pane_g3

0x8b10,	// (0x00017c26) cf0_flow_pane_ParamLimits

0x8b10,	// (0x00017c26) cf0_flow_pane

0xee1c,	// (0x0001df32) listscroll_cf0_pane

0xee27,	// (0x0001df3d) main_cf0_pane_g1

0x8b25,	// (0x00017c3b) main_cf0_pane_t1_ParamLimits

0x8b25,	// (0x00017c3b) main_cf0_pane_t1

0x8b3c,	// (0x00017c52) main_cf0_pane_t2_ParamLimits

0x8b3c,	// (0x00017c52) main_cf0_pane_t2

0x0001,

0xfeca,	// (0x0001efe0) main_cf0_pane_t_ParamLimits

0xfeca,	// (0x0001efe0) main_cf0_pane_t

0xee39,	// (0x0001df4f) scroll_pane_cp11

0x8b53,	// (0x00017c69) cf0_flow_pane_g1

0x8b5b,	// (0x00017c71) cf0_flow_pane_g2

0x0001,

0xfecf,	// (0x0001efe5) cf0_flow_pane_g

0x8b63,	// (0x00017c79) cf0_flow_pane_t1

0x93ca,	// (0x000184e0) main_call6_pane

0x93ca,	// (0x000184e0) main_calllock_pane

0x8b71,	// (0x00017c87) call6_btn_grp_pane_ParamLimits

0x8b71,	// (0x00017c87) call6_btn_grp_pane

0x8b8b,	// (0x00017ca1) call6_pane_g1_ParamLimits

0x8b8b,	// (0x00017ca1) call6_pane_g1

0x8ba0,	// (0x00017cb6) popup_call6_1st_window_ParamLimits

0x8ba0,	// (0x00017cb6) popup_call6_1st_window

0x8bb1,	// (0x00017cc7) popup_call6_2nd_window_ParamLimits

0x8bb1,	// (0x00017cc7) popup_call6_2nd_window

0x8bc2,	// (0x00017cd8) cell_call6_btn_pane_ParamLimits

0x8bc2,	// (0x00017cd8) cell_call6_btn_pane

0x9e22,	// (0x00018f38) bg_popup_call2_in_pane_cp03

0xee44,	// (0x0001df5a) popup_call6_1st_window_g1

0xee4c,	// (0x0001df62) popup_call6_1st_window_g2

0xee54,	// (0x0001df6a) popup_call6_1st_window_g3

0x0002,

0xfed4,	// (0x0001efea) popup_call6_1st_window_g

0xee5c,	// (0x0001df72) popup_call6_1st_window_t1

0xee6b,	// (0x0001df81) popup_call6_1st_window_t2

0xee7b,	// (0x0001df91) popup_call6_1st_window_t3

0x0002,

0xfedb,	// (0x0001eff1) popup_call6_1st_window_t

0x9e22,	// (0x00018f38) bg_popup_call2_in_pane_cp04

0xee44,	// (0x0001df5a) popup_call6_2nd_window_g1

0xee4c,	// (0x0001df62) popup_call6_2nd_window_g2

0xee54,	// (0x0001df6a) popup_call6_2nd_window_g3

0x0002,

0xfed4,	// (0x0001efea) popup_call6_2nd_window_g

0xee5c,	// (0x0001df72) popup_call6_2nd_window_t1

0x93ca,	// (0x000184e0) bg_button_pane_cp15

0xee8b,	// (0x0001dfa1) cell_call6_btn_pane_g1

0xee94,	// (0x0001dfaa) cell_call6_btn_pane_t1

0x8bd6,	// (0x00017cec) listscroll_wgtman_pane_ParamLimits

0x8bd6,	// (0x00017cec) listscroll_wgtman_pane

0x8bf7,	// (0x00017d0d) wgtman_btn_pane_ParamLimits

0x8bf7,	// (0x00017d0d) wgtman_btn_pane

0xa6ea,	// (0x00019800) aid_scroll_copy1

0xeea3,	// (0x0001dfb9) list_wgtman_pane

0x8c3a,	// (0x00017d50) wgtman_btn_pane_g1_ParamLimits

0x8c3a,	// (0x00017d50) wgtman_btn_pane_g1

0x8c66,	// (0x00017d7c) wgtman_btn_pane_t1_ParamLimits

0x8c66,	// (0x00017d7c) wgtman_btn_pane_t1

0xeead,	// (0x0001dfc3) wgtman_btn_pane_t2_ParamLimits

0xeead,	// (0x0001dfc3) wgtman_btn_pane_t2

0x0001,

0xfee2,	// (0x0001eff8) wgtman_btn_pane_t_ParamLimits

0xfee2,	// (0x0001eff8) wgtman_btn_pane_t

0x8ca3,	// (0x00017db9) listrow_wgtman_pane_ParamLimits

0x8ca3,	// (0x00017db9) listrow_wgtman_pane

0x8cb5,	// (0x00017dcb) listrow_wgtman_pane_g1

0x8cc2,	// (0x00017dd8) listrow_wgtman_pane_g2

0x0001,

0xfee7,	// (0x0001effd) listrow_wgtman_pane_g

0x8ce0,	// (0x00017df6) listrow_wgtman_pane_t1

0x8cf8,	// (0x00017e0e) listrow_wgtman_pane_t2

0x0001,

0xfeec,	// (0x0001f002) listrow_wgtman_pane_t

0x8d1e,	// (0x00017e34) wait_bar_pane_cp09

0xeec4,	// (0x0001dfda) main_calllock_btn_pane

0xeece,	// (0x0001dfe4) main_calllock_pane_g1

0x93ca,	// (0x000184e0) bg_button_pane_cp17

0xeed9,	// (0x0001dfef) main_calllock_btn_pane_g1

0xeee2,	// (0x0001dff8) main_calllock_btn_pane_t1

0x93ca,	// (0x000184e0) main_dialer3_pane

0x93ca,	// (0x000184e0) main_fmrd2_pane

0xc2de,	// (0x0001b3f4) main_fs_bigclock_unlock_btn_pane_g1

0xeef9,	// (0x0001e00f) main_fs_bigclock_unlock_btn_pane_t1

0x8d30,	// (0x00017e46) area_fmrd2_info_pane_ParamLimits

0x8d30,	// (0x00017e46) area_fmrd2_info_pane

0x8d41,	// (0x00017e57) area_fmrd2_visual_pane_ParamLimits

0x8d41,	// (0x00017e57) area_fmrd2_visual_pane

0x8d4f,	// (0x00017e65) fmrd2_indi_pane_ParamLimits

0x8d4f,	// (0x00017e65) fmrd2_indi_pane

0x8d5c,	// (0x00017e72) area_fmrd2_visual_pane_g1

0x8d64,	// (0x00017e7a) area_fmrd2_visual_pane_t1

0x8d74,	// (0x00017e8a) area_fmrd2_visual_pane_t2

0x8d84,	// (0x00017e9a) area_fmrd2_visual_pane_t3

0x0002,

0xfef6,	// (0x0001f00c) area_fmrd2_visual_pane_t

0x8d94,	// (0x00017eaa) area_fmrd2_info_pane_g1

0x8d9c,	// (0x00017eb2) area_fmrd2_info_pane_t1

0x8dac,	// (0x00017ec2) area_fmrd2_info_pane_t2

0x8dbc,	// (0x00017ed2) area_fmrd2_info_pane_t3

0x8dcc,	// (0x00017ee2) area_fmrd2_info_pane_t4

0x0003,

0xfefd,	// (0x0001f013) area_fmrd2_info_pane_t

0x8dda,	// (0x00017ef0) fmrd2_indi_pane_t1

0x8dea,	// (0x00017f00) fmrd2_indi_pane_t2

0x8dfa,	// (0x00017f10) fmrd2_indi_pane_t3

0x0002,

0xff06,	// (0x0001f01c) fmrd2_indi_pane_t

0xe0f4,	// (0x0001d20a) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe0f4,	// (0x0001d20a) list_single_fs_bigclock_indicator_pane_g5

0xe1a4,	// (0x0001d2ba) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe1a4,	// (0x0001d2ba) list_single_fs_bigclock_indicator_pane_t5

0x84f1,	// (0x00017607) aid_cell_bcale_month_pane_ParamLimits

0x84f1,	// (0x00017607) aid_cell_bcale_month_pane

0x850f,	// (0x00017625) bcale_month_pane_ParamLimits

0x850f,	// (0x00017625) bcale_month_pane

0x8533,	// (0x00017649) bcale_preview_pane_ParamLimits

0x8533,	// (0x00017649) bcale_preview_pane

0xec9f,	// (0x0001ddb5) list_single_fs_bigclock_pane_t1_ParamLimits

0xecbe,	// (0x0001ddd4) list_single_fs_bigclock_pane_t2_ParamLimits

0xecbe,	// (0x0001ddd4) list_single_fs_bigclock_pane_t2

0x0001,

0xfe88,	// (0x0001ef9e) list_single_fs_bigclock_pane_t_ParamLimits

0xfe88,	// (0x0001ef9e) list_single_fs_bigclock_pane_t

0xeef1,	// (0x0001e007) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfef1,	// (0x0001f007) main_fs_bigclock_unlock_btn_pane_g

0x8e0a,	// (0x00017f20) aid_dia3_key_size_ParamLimits

0x8e0a,	// (0x00017f20) aid_dia3_key_size

0x8e19,	// (0x00017f2f) aid_dia3_listrow_size_ParamLimits

0x8e19,	// (0x00017f2f) aid_dia3_listrow_size

0x8e2e,	// (0x00017f44) dia3_keypad_fun_pane_ParamLimits

0x8e2e,	// (0x00017f44) dia3_keypad_fun_pane

0x8e4a,	// (0x00017f60) dia3_keypad_num_pane_ParamLimits

0x8e4a,	// (0x00017f60) dia3_keypad_num_pane

0x8e65,	// (0x00017f7b) dia3_listscroll_pane_ParamLimits

0x8e65,	// (0x00017f7b) dia3_listscroll_pane

0x8e78,	// (0x00017f8e) dia3_numentry_pane_ParamLimits

0x8e78,	// (0x00017f8e) dia3_numentry_pane

0xef07,	// (0x0001e01d) dia3_list_pane

0xef12,	// (0x0001e028) scroll_pane_cp12

0x93ca,	// (0x000184e0) bg_dia3_numentry_pane

0x8e8c,	// (0x00017fa2) dia3_numentry_pane_t1

0x8e9b,	// (0x00017fb1) cell_dia3_key_num_pane

0x8ea3,	// (0x00017fb9) cell_dia3_key0_fun_pane_ParamLimits

0x8ea3,	// (0x00017fb9) cell_dia3_key0_fun_pane

0x8eb7,	// (0x00017fcd) cell_dia3_key1_fun_pane_ParamLimits

0x8eb7,	// (0x00017fcd) cell_dia3_key1_fun_pane

0x8ecf,	// (0x00017fe5) dia3_listrow_pane

0xde03,	// (0x0001cf19) bg_dia3_numentry_pane_g1

0x93ca,	// (0x000184e0) bg_button_pane_cp21

0xef1d,	// (0x0001e033) cell_dia3_key_num_pane_t1

0xef2b,	// (0x0001e041) cell_dia3_key_num_pane_t2

0xef3a,	// (0x0001e050) cell_dia3_key_num_pane_t3

0xef49,	// (0x0001e05f) cell_dia3_key_num_pane_t4

0x0003,

0xff0d,	// (0x0001f023) cell_dia3_key_num_pane_t

0x93ca,	// (0x000184e0) bg_button_pane_cp19

0x8ee1,	// (0x00017ff7) cell_dia3_key0_fun_pane_g1

0x93ca,	// (0x000184e0) bg_button_pane_cp20

0x8ee9,	// (0x00017fff) cell_dia3_key1_fun_pane_g1

0x8ef1,	// (0x00018007) area_left_week_number_pane

0x8efd,	// (0x00018013) area_top_day_name_pane

0x8f10,	// (0x00018026) frame_month_view_pane

0xef58,	// (0x0001e06e) grid_month_view_pane

0x8f23,	// (0x00018039) cell_top_day_name_pane_ParamLimits

0x8f23,	// (0x00018039) cell_top_day_name_pane

0x8f50,	// (0x00018066) cell_area_left_week_number_pane_ParamLimits

0x8f50,	// (0x00018066) cell_area_left_week_number_pane

0x8f64,	// (0x0001807a) cell_month_view_pane_ParamLimits

0x8f64,	// (0x0001807a) cell_month_view_pane

0xef66,	// (0x0001e07c) frm_month_g1

0x8f91,	// (0x000180a7) frm_month_g2

0x8fa4,	// (0x000180ba) frm_month_g3

0x8fb7,	// (0x000180cd) frm_month_g4

0x8fca,	// (0x000180e0) frm_month_g5

0x8fdd,	// (0x000180f3) frm_month_g6

0x8ff0,	// (0x00018106) frm_month_g7

0xef73,	// (0x0001e089) frm_month_g8

0x9003,	// (0x00018119) frm_month_g9

0x9013,	// (0x00018129) frm_month_g10

0x9023,	// (0x00018139) frm_month_g11

0x9033,	// (0x00018149) frm_month_g12

0x9045,	// (0x0001815b) frm_month_g13

0x9057,	// (0x0001816d) frm_month_g14

0x906b,	// (0x00018181) frm_month_g15

0x907f,	// (0x00018195) frm_month_g16

0x000f,

0xff16,	// (0x0001f02c) frm_month_g

0xef80,	// (0x0001e096) cell_top_day_name_pane_t1

0x9093,	// (0x000181a9) cell_area_left_week_number_pane_g1

0x909f,	// (0x000181b5) cell_area_left_week_number_pane_t1

0xc52c,	// (0x0001b642) cell_month_view_pane_g1

0x90b2,	// (0x000181c8) cell_month_view_pane_t1

0x93ca,	// (0x000184e0) main_fps_pane

0xe394,	// (0x0001d4aa) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe394,	// (0x0001d4aa) cmail_ddmenu_btn02_pane_cp1

0xe3b0,	// (0x0001d4c6) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe3b0,	// (0x0001d4c6) cmail_ddmenu_btn02_pane_cp2

0x87d4,	// (0x000178ea) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x87d4,	// (0x000178ea) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe3b,	// (0x0001ef51) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe3b,	// (0x0001ef51) cmail_ddmenu_btn02_pane_g

0x87f3,	// (0x00017909) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x87f3,	// (0x00017909) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe40,	// (0x0001ef56) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe40,	// (0x0001ef56) cmail_ddmenu_btn02_pane_t

0x90c5,	// (0x000181db) fps_text_pane_ParamLimits

0x90c5,	// (0x000181db) fps_text_pane

0x90dc,	// (0x000181f2) main_fps_pane_g1_ParamLimits

0x90dc,	// (0x000181f2) main_fps_pane_g1

0x90f6,	// (0x0001820c) wait_bar_pane_cp010_ParamLimits

0x90f6,	// (0x0001820c) wait_bar_pane_cp010

0x9107,	// (0x0001821d) fps_text_pane_t1_ParamLimits

0x9107,	// (0x0001821d) fps_text_pane_t1

0xeab1,	// (0x0001dbc7) cam4_image_uncrop_pane_g1

0xeaba,	// (0x0001dbd0) cam4_image_uncrop_pane_g2

0x5a1a,	// (0x00014b30) cam4_image_uncrop_pane_g3

0x5a23,	// (0x00014b39) cam4_image_uncrop_pane_g4

0x0003,

0xf901,	// (0x0001ea17) cam4_image_uncrop_pane_g

0x8ecf,	// (0x00017fe5) dia3_listrow_pane_ParamLimits

0x93ca,	// (0x000184e0) main_phob2_pane

0x8326,	// (0x0001743c) cell_tport_appsw_pane_cp02_ParamLimits

0x8326,	// (0x0001743c) cell_tport_appsw_pane_cp02

0x833a,	// (0x00017450) cell_tport_appsw_pane_cp03_ParamLimits

0x833a,	// (0x00017450) cell_tport_appsw_pane_cp03

0x93ca,	// (0x000184e0) phob2_contact_card_pane

0x93ca,	// (0x000184e0) phob2_listscroll_pane

0xef93,	// (0x0001e0a9) phob2_list_pane

0xef9b,	// (0x0001e0b1) scroll_pane_cp034

0x911f,	// (0x00018235) phob2_cc_data_pane_ParamLimits

0x911f,	// (0x00018235) phob2_cc_data_pane

0x913e,	// (0x00018254) phob2_cc_listscroll_pane_ParamLimits

0x913e,	// (0x00018254) phob2_cc_listscroll_pane

0x8ca3,	// (0x00017db9) list_double_large_graphic_phob2_pane_ParamLimits

0x8ca3,	// (0x00017db9) list_double_large_graphic_phob2_pane

0x915c,	// (0x00018272) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x915c,	// (0x00018272) list_double_large_graphic_phob2_pane_g1

0x9172,	// (0x00018288) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x9172,	// (0x00018288) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff37,	// (0x0001f04d) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff37,	// (0x0001f04d) list_double_large_graphic_phob2_pane_g

0x917e,	// (0x00018294) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x917e,	// (0x00018294) list_double_large_graphic_phob2_pane_t1

0x9194,	// (0x000182aa) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x9194,	// (0x000182aa) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff3c,	// (0x0001f052) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff3c,	// (0x0001f052) list_double_large_graphic_phob2_pane_t

0x93ca,	// (0x000184e0) list_highlight_pane_cp024

0x91a9,	// (0x000182bf) phob2_cc_button_pane

0x91b1,	// (0x000182c7) phob2_cc_data_pane_g1_ParamLimits

0x91b1,	// (0x000182c7) phob2_cc_data_pane_g1

0x91c6,	// (0x000182dc) phob2_cc_data_pane_g2_ParamLimits

0x91c6,	// (0x000182dc) phob2_cc_data_pane_g2

0x0001,

0xff41,	// (0x0001f057) phob2_cc_data_pane_g_ParamLimits

0xff41,	// (0x0001f057) phob2_cc_data_pane_g

0x91d6,	// (0x000182ec) phob2_cc_data_pane_t1_ParamLimits

0x91d6,	// (0x000182ec) phob2_cc_data_pane_t1

0x91ee,	// (0x00018304) phob2_cc_data_pane_t2_ParamLimits

0x91ee,	// (0x00018304) phob2_cc_data_pane_t2

0x9206,	// (0x0001831c) phob2_cc_data_pane_t3_ParamLimits

0x9206,	// (0x0001831c) phob2_cc_data_pane_t3

0x0002,

0xff46,	// (0x0001f05c) phob2_cc_data_pane_t_ParamLimits

0xff46,	// (0x0001f05c) phob2_cc_data_pane_t

0xefa3,	// (0x0001e0b9) phob2_cc_list_pane_ParamLimits

0xefa3,	// (0x0001e0b9) phob2_cc_list_pane

0xd4cf,	// (0x0001c5e5) scroll_pane_cp035_ParamLimits

0xd4cf,	// (0x0001c5e5) scroll_pane_cp035

0x943a,	// (0x00018550) bg_button_pane_cp033

0xefaf,	// (0x0001e0c5) phob2_cc_button_pane_g1

0xefbb,	// (0x0001e0d1) phob2_cc_button_pane_t1

0xefd0,	// (0x0001e0e6) phob2_cc_button_pane_t2

0x0001,

0xff4d,	// (0x0001f063) phob2_cc_button_pane_t

0x921e,	// (0x00018334) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x921e,	// (0x00018334) list_double_large_graphic_phob2_cc_pane

0x9231,	// (0x00018347) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9231,	// (0x00018347) list_double_large_graphic_phob2_cc_pane_g1

0xefe2,	// (0x0001e0f8) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xefe2,	// (0x0001e0f8) list_double_large_graphic_phob2_cc_pane_g2

0x923d,	// (0x00018353) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x923d,	// (0x00018353) list_double_large_graphic_phob2_cc_pane_g3

0x9249,	// (0x0001835f) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x9249,	// (0x0001835f) list_double_large_graphic_phob2_cc_pane_g4

0x9255,	// (0x0001836b) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x9255,	// (0x0001836b) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff52,	// (0x0001f068) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff52,	// (0x0001f068) list_double_large_graphic_phob2_cc_pane_g

0x9261,	// (0x00018377) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x9261,	// (0x00018377) list_double_large_graphic_phob2_cc_pane_t1

0x928a,	// (0x000183a0) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x928a,	// (0x000183a0) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff5d,	// (0x0001f073) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff5d,	// (0x0001f073) list_double_large_graphic_phob2_cc_pane_t

0xefee,	// (0x0001e104) list_highlight_pane_cp025_ParamLimits

0xefee,	// (0x0001e104) list_highlight_pane_cp025

0x943a,	// (0x00018550) bg_button_pane_cp033_ParamLimits

0xefaf,	// (0x0001e0c5) phob2_cc_button_pane_g1_ParamLimits

0xefbb,	// (0x0001e0d1) phob2_cc_button_pane_t1_ParamLimits

0xefd0,	// (0x0001e0e6) phob2_cc_button_pane_t2_ParamLimits

0xff4d,	// (0x0001f063) phob2_cc_button_pane_t_ParamLimits

0x0352,	// (0x0000f468) popup_wgtman_window

0xd280,	// (0x0001c396) scroll_pane_cp038

0x8c1c,	// (0x00017d32) wgtman_btn_pane_cp_01_ParamLimits

0x8c1c,	// (0x00017d32) wgtman_btn_pane_cp_01

0xeffc,	// (0x0001e112) wgtman_content_pane

0xf005,	// (0x0001e11b) wgtman_heading_pane

0x93ca,	// (0x000184e0) bg_heading_pane_cp02

0xf00e,	// (0x0001e124) wgtman_heading_pane_g1

0xf016,	// (0x0001e12c) wgtman_heading_pane_t1

0xf024,	// (0x0001e13a) scroll_pane_cp036

0xf02c,	// (0x0001e142) wgtman_list_pane

0xeac3,	// (0x0001dbd9) wgtman_list_pane_t1_ParamLimits

0xeac3,	// (0x0001dbd9) wgtman_list_pane_t1

0xcfd7,	// (0x0001c0ed) cam4_grid_pane

0x67bf,	// (0x000158d5) bg_button_pane_cp015_ParamLimits

0x67d3,	// (0x000158e9) bg_button_pane_cp016_ParamLimits

0x67e6,	// (0x000158fc) bg_button_pane_cp017_ParamLimits

0x683e,	// (0x00015954) popup_vitu2_query_window_g3_ParamLimits

0x683e,	// (0x00015954) popup_vitu2_query_window_g3

0x68fb,	// (0x00015a11) popup_vitu2_query_window_t6_ParamLimits

0x68fb,	// (0x00015a11) popup_vitu2_query_window_t6

0x6926,	// (0x00015a3c) popup_vitu2_query_window_t7_ParamLimits

0x6926,	// (0x00015a3c) popup_vitu2_query_window_t7

0xeab1,	// (0x0001dbc7) cam4_grid_pane_g1

0xeaba,	// (0x0001dbd0) cam4_grid_pane_g2

0xf034,	// (0x0001e14a) cam4_grid_pane_g3

0xf03d,	// (0x0001e153) cam4_grid_pane_g4

0x0003,

0xff62,	// (0x0001f078) cam4_grid_pane_g

0x1350,	// (0x00010466) aid_placing_vt_slider_lsc_ParamLimits

0x164d,	// (0x00010763) vidtel_button_pane_ParamLimits

0x164d,	// (0x00010763) vidtel_button_pane

0x93ca,	// (0x000184e0) bg_button_pane_cp034

0x92b3,	// (0x000183c9) vidtel_button_pane_g1

0xf048,	// (0x0001e15e) vidtel_button_pane_t1

0xd3cc,	// (0x0001c4e2) aid_size_vtel_slider_touch

0xd4cf,	// (0x0001c5e5) scroll_pane_cp039

0xde49,	// (0x0001cf5f) ncim_query_button_pane_cp01_ParamLimits

0xde68,	// (0x0001cf7e) ncimui_query_pane_g1_ParamLimits

0x943a,	// (0x00018550) input_focus_pane_cp012_ParamLimits

0xde8d,	// (0x0001cfa3) ncim_query_entry_pane_t1_ParamLimits

0xd4cf,	// (0x0001c5e5) scroll_pane_cp039_ParamLimits

0xa7c1,	// (0x000198d7) navi_pane_bcale_mc_g1

0xa7c9,	// (0x000198df) navi_pane_bcale_mc_t1

0xe3f9,	// (0x0001d50f) main_sp_fs_email_pane_g1

0xe405,	// (0x0001d51b) main_sp_fs_email_pane_g2

0x0001,

0xfcf8,	// (0x0001ee0e) main_sp_fs_email_pane_g

0xe8d6,	// (0x0001d9ec) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe8d6,	// (0x0001d9ec) list_single_cale_mrui_row_pane_g3

0x881b,	// (0x00017931) list_single_recal_day_pane_g5_event_pane

0xeaea,	// (0x0001dc00) list_single_recal_day_pane_g7

0xf05e,	// (0x0001e174) list_recal_day_event_pane_cp01

0xf067,	// (0x0001e17d) list_recal_vselct_arw_lo_pane_cp01

0xf06f,	// (0x0001e185) list_recal_vselct_arw_up_pane_cp01

0xf077,	// (0x0001e18d) list_recal_vselct_pane_cp01

0xd426,	// (0x0001c53c) list_recal_day_event_pane_cp01_g1

0xf081,	// (0x0001e197) list_recal_day_event_pane_cp01_t1

0xeaf2,	// (0x0001dc08) list_single_recal_day_pane_t1_ParamLimits

0xeb04,	// (0x0001dc1a) list_single_recal_day_pane_t2_ParamLimits

0xfe50,	// (0x0001ef66) list_single_recal_day_pane_t_ParamLimits

0x9ab6,	// (0x00018bcc) bg_notes_pane_ParamLimits

0x9b6d,	// (0x00018c83) list_notes_pane_ParamLimits

0x0696,	// (0x0000f7ac) scroll_pane_cp06_ParamLimits

0x9ba9,	// (0x00018cbf) main_notes_pane_ParamLimits

0x93ca,	// (0x000184e0) main_welc_pane

0x92bb,	// (0x000183d1) main_welc_body_pane_ParamLimits

0x92bb,	// (0x000183d1) main_welc_body_pane

0x92d8,	// (0x000183ee) main_welc_opti_pane_ParamLimits

0x92d8,	// (0x000183ee) main_welc_opti_pane

0x931d,	// (0x00018433) main_welc_pane_t1_ParamLimits

0x931d,	// (0x00018433) main_welc_pane_t1

0x933b,	// (0x00018451) main_welc_body_row_pane_ParamLimits

0x933b,	// (0x00018451) main_welc_body_row_pane

0xd236,	// (0x0001c34c) main_welc_opti_row_pane_ParamLimits

0xd236,	// (0x0001c34c) main_welc_opti_row_pane

0xf08f,	// (0x0001e1a5) main_welc_opti_row_pane_g1

0x9350,	// (0x00018466) main_welc_opti_row_pane_t1

0xf097,	// (0x0001e1ad) main_welc_body_row_pane_t1

0xed7f,	// (0x0001de95) popup_notif_wgt_heading_pane

0xed99,	// (0x0001deaf) aid_size_list_notif_wgt_del_ParamLimits

0xeda6,	// (0x0001debc) list_notif_wgt_row_pane_g1_ParamLimits

0xedb2,	// (0x0001dec8) list_notif_wgt_row_pane_g2_ParamLimits

0xedc6,	// (0x0001dedc) list_notif_wgt_row_pane_g3_ParamLimits

0xfeb7,	// (0x0001efcd) list_notif_wgt_row_pane_g_ParamLimits

0xedd3,	// (0x0001dee9) list_notif_wgt_row_pane_t1_ParamLimits

0xede9,	// (0x0001deff) list_notif_wgt_row_pane_t2_ParamLimits

0xedfb,	// (0x0001df11) list_notif_wgt_row_pane_t3_ParamLimits

0xfebe,	// (0x0001efd4) list_notif_wgt_row_pane_t_ParamLimits

0x8cb5,	// (0x00017dcb) listrow_wgtman_pane_g1_ParamLimits

0x8cc2,	// (0x00017dd8) listrow_wgtman_pane_g2_ParamLimits

0xfee7,	// (0x0001effd) listrow_wgtman_pane_g_ParamLimits

0x8ce0,	// (0x00017df6) listrow_wgtman_pane_t1_ParamLimits

0x8cf8,	// (0x00017e0e) listrow_wgtman_pane_t2_ParamLimits

0xfeec,	// (0x0001f002) listrow_wgtman_pane_t_ParamLimits

0x8d1e,	// (0x00017e34) wait_bar_pane_cp09_ParamLimits

0x93ca,	// (0x000184e0) bg_popup_heading_pane_cp02

0xf0a6,	// (0x0001e1bc) popup_notif_wgt_heading_pane_g1

0xf0ae,	// (0x0001e1c4) popup_notif_wgt_heading_pane_t1

0x93ca,	// (0x000184e0) main_vids_pane

0x93ca,	// (0x000184e0) vids_listscroll_pane

0x935f,	// (0x00018475) scroll_pane_cp040

0x93ca,	// (0x000184e0) vids_list_pane

0x936a,	// (0x00018480) vids_list_double_pane_ParamLimits

0x936a,	// (0x00018480) vids_list_double_pane

0x937b,	// (0x00018491) vids_list_double_pane_g1

0x9384,	// (0x0001849a) vids_list_double_pane_t1

0x9394,	// (0x000184aa) vids_list_double_pane_t2

0x0001,

0xff70,	// (0x0001f086) vids_list_double_pane_t

0x943a,	// (0x00018550) main_ncimui_pane_ParamLimits

0x74f8,	// (0x0001660e) main_ncimui_pane_g1_ParamLimits

0x7504,	// (0x0001661a) main_ncimui_pane_g2_ParamLimits

0x7504,	// (0x0001661a) main_ncimui_pane_g2

0x0001,

0xfbfd,	// (0x0001ed13) main_ncimui_pane_g_ParamLimits

0xfbfd,	// (0x0001ed13) main_ncimui_pane_g

0x92f3,	// (0x00018409) main_welc_pane_g1_ParamLimits

0x92f3,	// (0x00018409) main_welc_pane_g1

0x9308,	// (0x0001841e) main_welc_pane_g2_ParamLimits

0x9308,	// (0x0001841e) main_welc_pane_g2

0x0001,

0xff6b,	// (0x0001f081) main_welc_pane_g_ParamLimits

0xff6b,	// (0x0001f081) main_welc_pane_g

0x9ab6,	// (0x00018bcc) listscroll_mce_pane_ParamLimits

0xa916,	// (0x00019a2c) wait_bar_pane_cp10

0xbdb7,	// (0x0001aecd) main_cale_day_pane_ParamLimits

0xbdb7,	// (0x0001aecd) main_cale_week_pane_ParamLimits

0x9ab6,	// (0x00018bcc) main_messa_pane_ParamLimits

0x4d43,	// (0x00013e59) main_clock2_btn_pane_ParamLimits

0x4d43,	// (0x00013e59) main_clock2_btn_pane

0xc728,	// (0x0001b83e) main_clock2_btn_pane_cp01_ParamLimits

0xc728,	// (0x0001b83e) main_clock2_btn_pane_cp01

0xe86e,	// (0x0001d984) list_cale_mrui_pane_ParamLimits

0xee31,	// (0x0001df47) main_cf0_pane_g2

0x0001,

0xfec5,	// (0x0001efdb) main_cf0_pane_g

0x8ef1,	// (0x00018007) area_left_week_number_pane_ParamLimits

0x8efd,	// (0x00018013) area_top_day_name_pane_ParamLimits

0x8f10,	// (0x00018026) frame_month_view_pane_ParamLimits

0xef58,	// (0x0001e06e) grid_month_view_pane_ParamLimits

0xef66,	// (0x0001e07c) frm_month_g1_ParamLimits

0x8f91,	// (0x000180a7) frm_month_g2_ParamLimits

0x8fa4,	// (0x000180ba) frm_month_g3_ParamLimits

0x8fb7,	// (0x000180cd) frm_month_g4_ParamLimits

0x8fca,	// (0x000180e0) frm_month_g5_ParamLimits

0x8fdd,	// (0x000180f3) frm_month_g6_ParamLimits

0x8ff0,	// (0x00018106) frm_month_g7_ParamLimits

0xef73,	// (0x0001e089) frm_month_g8_ParamLimits

0x9003,	// (0x00018119) frm_month_g9_ParamLimits

0x9013,	// (0x00018129) frm_month_g10_ParamLimits

0x9023,	// (0x00018139) frm_month_g11_ParamLimits

0x9033,	// (0x00018149) frm_month_g12_ParamLimits

0x9045,	// (0x0001815b) frm_month_g13_ParamLimits

0x9057,	// (0x0001816d) frm_month_g14_ParamLimits

0x906b,	// (0x00018181) frm_month_g15_ParamLimits

0x907f,	// (0x00018195) frm_month_g16_ParamLimits

0xff16,	// (0x0001f02c) frm_month_g_ParamLimits

0xef80,	// (0x0001e096) cell_top_day_name_pane_t1_ParamLimits

0x9093,	// (0x000181a9) cell_area_left_week_number_pane_g1_ParamLimits

0x909f,	// (0x000181b5) cell_area_left_week_number_pane_t1_ParamLimits

0xc52c,	// (0x0001b642) cell_month_view_pane_g1_ParamLimits

0x90b2,	// (0x000181c8) cell_month_view_pane_t1_ParamLimits

0x9aae,	// (0x00018bc4) main_clock2_btn_pane_g1

0xf0bc,	// (0x0001e1d2) main_clock2_btn_pane_t1

0x943a,	// (0x00018550) listscroll_cmail_pane_ParamLimits

0xe3f9,	// (0x0001d50f) main_sp_fs_email_pane_g1_ParamLimits

0xe405,	// (0x0001d51b) main_sp_fs_email_pane_g2_ParamLimits

0xfcf8,	// (0x0001ee0e) main_sp_fs_email_pane_g_ParamLimits

0xea25,	// (0x0001db3b) list_recal_day_pane_ParamLimits

0xea36,	// (0x0001db4c) mian_recal_day_pane_t1

0x7ff3,	// (0x00017109) list_single_dyc_row_text_pane_t4_ParamLimits

0x7ff3,	// (0x00017109) list_single_dyc_row_text_pane_t4

0x803c,	// (0x00017152) list_single_dyc_row_text_pane_t5_ParamLimits

0x803c,	// (0x00017152) list_single_dyc_row_text_pane_t5

0xe4a7,	// (0x0001d5bd) list_single_dyc_row_text_pane_t6_ParamLimits

0xe4a7,	// (0x0001d5bd) list_single_dyc_row_text_pane_t6

0x2339,	// (0x0001144f) aid_mgn_list_cale_time_pane

0x943a,	// (0x00018550) main_gallery2_pane_ParamLimits

0xc73e,	// (0x0001b854) main_clock2_pane_cp01_t1

0xc74c,	// (0x0001b862) main_clock2_pane_cp01_t3

0x0001,

0xf7d7,	// (0x0001e8ed) main_clock2_pane_cp01_t

0x0a0f,	// (0x0000fb25) cale_week_scroll_pane_g16_ParamLimits

0x0a0f,	// (0x0000fb25) cale_week_scroll_pane_g16

0x9e22,	// (0x00018f38) vorec_slider_pane

0xf048,	// (0x0001e15e) vidtel_button_pane_t1_ParamLimits
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

} // end of namespace AknLayoutScalable_Elaf_pnl4_apps_nhd4_lsc_tch_Normal
