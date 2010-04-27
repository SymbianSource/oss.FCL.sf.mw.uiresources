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

#include "aknlayoutscalable_abrw_pnl4_apps_nhd4_lsc_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pnl4_apps_nhd4_lsc_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x000aa595 };

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
0x00ea,	// (0x000aa67f) Screen

0x00f6,	// (0x000aa68b) application_window

0x0142,	// (0x000aa6d7) area_bottom_pane_ParamLimits

0x0142,	// (0x000aa6d7) area_bottom_pane

0x017b,	// (0x000aa710) area_top_pane_ParamLimits

0x017b,	// (0x000aa710) area_top_pane

0x9349,	// (0x000b38de) call_video_uplink_pane_ParamLimits

0x9349,	// (0x000b38de) call_video_uplink_pane

0x0209,	// (0x000aa79e) main_pane_ParamLimits

0x0209,	// (0x000aa79e) main_pane

0xc7c8,	// (0x000b6d5d) context_pane

0x38b8,	// (0x000ade4d) navi_pane

0x38ea,	// (0x000ade7f) popup_cale_events_window_ParamLimits

0x38ea,	// (0x000ade7f) popup_cale_events_window

0xc7db,	// (0x000b6d70) popup_mup_playback_window

0x3902,	// (0x000ade97) signal_pane

0xa1f1,	// (0x000b4786) main_browser_pane

0xa3cd,	// (0x000b4962) main_burst_pane

0x3616,	// (0x000adbab) main_calc_pane

0xc7ae,	// (0x000b6d43) main_cale_day_pane

0x362a,	// (0x000adbbf) main_cale_month_pane

0xc7ae,	// (0x000b6d43) main_cale_week_pane

0xa3cd,	// (0x000b4962) main_call_pane

0x9eb2,	// (0x000b4447) main_call_poc_pane

0xa3cd,	// (0x000b4962) main_camera_pane

0xa3cd,	// (0x000b4962) main_chi_dic_pane

0xb0dd,	// (0x000b5672) main_clock_pane

0x9eb2,	// (0x000b4447) main_fmradio_pane

0xa3cd,	// (0x000b4962) main_graph_messa_pane

0x9eb2,	// (0x000b4447) main_help_pane

0xa1f1,	// (0x000b4786) main_im_pane

0xa10d,	// (0x000b46a2) main_image_pane_ParamLimits

0xa10d,	// (0x000b46a2) main_image_pane

0x9eb2,	// (0x000b4447) main_location2_pane

0xa3cd,	// (0x000b4962) main_location_pane

0xa10d,	// (0x000b46a2) main_messa_pane

0x9eb2,	// (0x000b4447) main_mp2_pane

0xa3cd,	// (0x000b4962) main_mp_pane

0x9eb2,	// (0x000b4447) main_msg_pane

0x9eb2,	// (0x000b4447) main_mup_eq_pane

0x9eb2,	// (0x000b4447) main_mup_pane

0xa1f1,	// (0x000b4786) main_notes_pane

0x9eb2,	// (0x000b4447) main_pec_pane

0x9eb2,	// (0x000b4447) main_phob_pane

0x9eb2,	// (0x000b4447) main_pinb_pane

0x9eb2,	// (0x000b4447) main_postcard_pane

0x9eb2,	// (0x000b4447) main_qdial_pane

0xa3cd,	// (0x000b4962) main_skin_pane

0x9eb2,	// (0x000b4447) main_smil2_pane

0xa3cd,	// (0x000b4962) main_smil_pane

0xa3cd,	// (0x000b4962) main_video_pane

0xa3cd,	// (0x000b4962) main_video_tele_pane

0xa10d,	// (0x000b46a2) main_viewer_pane_ParamLimits

0xa10d,	// (0x000b46a2) main_viewer_pane

0xa3cd,	// (0x000b4962) main_vorec_pane

0x367c,	// (0x000adc11) popup_blid_sat_info_window_ParamLimits

0x367c,	// (0x000adc11) popup_blid_sat_info_window

0x36d4,	// (0x000adc69) popup_dyc_status_message_window_ParamLimits

0x36d4,	// (0x000adc69) popup_dyc_status_message_window

0x36ec,	// (0x000adc81) popup_grid_large_graphic_window_ParamLimits

0x36ec,	// (0x000adc81) popup_grid_large_graphic_window

0x37a2,	// (0x000add37) popup_loc_request_window_ParamLimits

0x37a2,	// (0x000add37) popup_loc_request_window

0x3890,	// (0x000ade25) popup_wml_address_window_ParamLimits

0x3890,	// (0x000ade25) popup_wml_address_window

0x3450,	// (0x000ad9e5) call_muted_g1

0x3103,	// (0x000ad698) popup_call_audio_conf_window_ParamLimits

0x3103,	// (0x000ad698) popup_call_audio_conf_window

0x3464,	// (0x000ad9f9) popup_call_audio_first_window_ParamLimits

0x3464,	// (0x000ad9f9) popup_call_audio_first_window

0x34da,	// (0x000ada6f) popup_call_audio_in_window_ParamLimits

0x34da,	// (0x000ada6f) popup_call_audio_in_window

0x3516,	// (0x000adaab) popup_call_audio_out_window_ParamLimits

0x3516,	// (0x000adaab) popup_call_audio_out_window

0x3550,	// (0x000adae5) popup_call_audio_second_window_ParamLimits

0x3550,	// (0x000adae5) popup_call_audio_second_window

0x35a6,	// (0x000adb3b) popup_call_audio_wait_window_ParamLimits

0x35a6,	// (0x000adb3b) popup_call_audio_wait_window

0x35db,	// (0x000adb70) popup_number_entry_window_ParamLimits

0x35db,	// (0x000adb70) popup_number_entry_window

0x937f,	// (0x000b3914) bg_popup_call_pane_cp05_ParamLimits

0x937f,	// (0x000b3914) bg_popup_call_pane_cp05

0x939f,	// (0x000b3934) popup_number_entry_window_t1

0x93b2,	// (0x000b3947) popup_number_entry_window_t2

0x93c4,	// (0x000b3959) popup_number_entry_window_t3

0x0003,

0xf0ca,	// (0x000b965f) popup_number_entry_window_t

0x93d6,	// (0x000b396b) text_title_cp2

0x93e9,	// (0x000b397e) bg_popup_call_pane_cp_ParamLimits

0x93e9,	// (0x000b397e) bg_popup_call_pane_cp

0x93f7,	// (0x000b398c) call_thumbnail_pane

0x93ff,	// (0x000b3994) popup_call_audio_in_window_g1_ParamLimits

0x93ff,	// (0x000b3994) popup_call_audio_in_window_g1

0x940b,	// (0x000b39a0) popup_call_audio_in_window_g2_ParamLimits

0x940b,	// (0x000b39a0) popup_call_audio_in_window_g2

0x9417,	// (0x000b39ac) popup_call_audio_in_window_g3_ParamLimits

0x9417,	// (0x000b39ac) popup_call_audio_in_window_g3

0x0002,

0xf0d3,	// (0x000b9668) popup_call_audio_in_window_g_ParamLimits

0xf0d3,	// (0x000b9668) popup_call_audio_in_window_g

0x9423,	// (0x000b39b8) popup_call_audio_in_window_t1_ParamLimits

0x9423,	// (0x000b39b8) popup_call_audio_in_window_t1

0x943f,	// (0x000b39d4) popup_call_audio_in_window_t2_ParamLimits

0x943f,	// (0x000b39d4) popup_call_audio_in_window_t2

0x945b,	// (0x000b39f0) popup_call_audio_in_window_t3_ParamLimits

0x945b,	// (0x000b39f0) popup_call_audio_in_window_t3

0x0002,

0xf0da,	// (0x000b966f) popup_call_audio_in_window_t_ParamLimits

0xf0da,	// (0x000b966f) popup_call_audio_in_window_t

0x93e9,	// (0x000b397e) bg_popup_call_pane_cp01_ParamLimits

0x93e9,	// (0x000b397e) bg_popup_call_pane_cp01

0x93f7,	// (0x000b398c) call_thumbnail_pane_cp02

0x946e,	// (0x000b3a03) call_type_pane_cp022

0x9476,	// (0x000b3a0b) popup_call_audio_out_window_g1_ParamLimits

0x9476,	// (0x000b3a0b) popup_call_audio_out_window_g1

0x9488,	// (0x000b3a1d) popup_call_audio_out_window_g2_ParamLimits

0x9488,	// (0x000b3a1d) popup_call_audio_out_window_g2

0x9494,	// (0x000b3a29) popup_call_audio_out_window_g3_ParamLimits

0x9494,	// (0x000b3a29) popup_call_audio_out_window_g3

0x0002,

0xf0e1,	// (0x000b9676) popup_call_audio_out_window_g_ParamLimits

0xf0e1,	// (0x000b9676) popup_call_audio_out_window_g

0x94a6,	// (0x000b3a3b) popup_call_audio_out_window_t1_ParamLimits

0x94a6,	// (0x000b3a3b) popup_call_audio_out_window_t1

0x94be,	// (0x000b3a53) popup_call_audio_out_window_t2_ParamLimits

0x94be,	// (0x000b3a53) popup_call_audio_out_window_t2

0x0001,

0xf0e8,	// (0x000b967d) popup_call_audio_out_window_t_ParamLimits

0xf0e8,	// (0x000b967d) popup_call_audio_out_window_t

0x94d3,	// (0x000b3a68) bg_popup_call_pane_ParamLimits

0x94d3,	// (0x000b3a68) bg_popup_call_pane

0x03c6,	// (0x000aa95b) call_thumbnail_pane_cp_ParamLimits

0x03c6,	// (0x000aa95b) call_thumbnail_pane_cp

0x9557,	// (0x000b3aec) call_type_pane_cp01_ParamLimits

0x9557,	// (0x000b3aec) call_type_pane_cp01

0x959b,	// (0x000b3b30) popup_call_audio_first_window_g1_ParamLimits

0x959b,	// (0x000b3b30) popup_call_audio_first_window_g1

0x95e7,	// (0x000b3b7c) popup_call_audio_first_window_g2_ParamLimits

0x95e7,	// (0x000b3b7c) popup_call_audio_first_window_g2

0x0001,

0xf0ed,	// (0x000b9682) popup_call_audio_first_window_g_ParamLimits

0xf0ed,	// (0x000b9682) popup_call_audio_first_window_g

0x962b,	// (0x000b3bc0) popup_call_audio_first_window_t1_ParamLimits

0x962b,	// (0x000b3bc0) popup_call_audio_first_window_t1

0x96d7,	// (0x000b3c6c) popup_call_audio_first_window_t4_ParamLimits

0x96d7,	// (0x000b3c6c) popup_call_audio_first_window_t4

0x9763,	// (0x000b3cf8) popup_call_audio_first_window_t5_ParamLimits

0x9763,	// (0x000b3cf8) popup_call_audio_first_window_t5

0x0002,

0xf0f2,	// (0x000b9687) popup_call_audio_first_window_t_ParamLimits

0xf0f2,	// (0x000b9687) popup_call_audio_first_window_t

0x9eb2,	// (0x000b4447) bg_popup_call_pane_cp02

0x9ebc,	// (0x000b4451) call_type_pane_cp023

0x9ec4,	// (0x000b4459) popup_call_audio_wait_window_g1

0x9ecc,	// (0x000b4461) popup_call_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x000b968e) popup_call_audio_wait_window_g

0x9ed4,	// (0x000b4469) popup_call_audio_wait_window_t3

0x9ee2,	// (0x000b4477) bg_popup_call_pane_cp03_ParamLimits

0x9ee2,	// (0x000b4477) bg_popup_call_pane_cp03

0x9f42,	// (0x000b44d7) call_thumbnail_pane_cp011_ParamLimits

0x9f42,	// (0x000b44d7) call_thumbnail_pane_cp011

0x9f4e,	// (0x000b44e3) call_type_pane_cp034_ParamLimits

0x9f4e,	// (0x000b44e3) call_type_pane_cp034

0x9f8a,	// (0x000b451f) popup_call_audio_second_window_g1_ParamLimits

0x9f8a,	// (0x000b451f) popup_call_audio_second_window_g1

0x9fc6,	// (0x000b455b) popup_call_audio_second_window_g2_ParamLimits

0x9fc6,	// (0x000b455b) popup_call_audio_second_window_g2

0x0001,

0xf0fe,	// (0x000b9693) popup_call_audio_second_window_g_ParamLimits

0xf0fe,	// (0x000b9693) popup_call_audio_second_window_g

0xa002,	// (0x000b4597) popup_call_audio_second_window_t1_ParamLimits

0xa002,	// (0x000b4597) popup_call_audio_second_window_t1

0xa083,	// (0x000b4618) popup_call_audio_second_window_t2_ParamLimits

0xa083,	// (0x000b4618) popup_call_audio_second_window_t2

0xa0b9,	// (0x000b464e) popup_call_audio_second_window_t3_ParamLimits

0xa0b9,	// (0x000b464e) popup_call_audio_second_window_t3

0x0002,

0xf103,	// (0x000b9698) popup_call_audio_second_window_t_ParamLimits

0xf103,	// (0x000b9698) popup_call_audio_second_window_t

0x9eb2,	// (0x000b4447) bg_popup_call_pane_cp04

0xa0ef,	// (0x000b4684) list_conf_pane

0xa0f7,	// (0x000b468c) popup_call_audio_conf_window_t1

0xa105,	// (0x000b469a) call_thumbnail_pane_g1

0xa10d,	// (0x000b46a2) bg_pinb_pane_ParamLimits

0xa10d,	// (0x000b46a2) bg_pinb_pane

0xa11b,	// (0x000b46b0) find_pinb_pane

0xa124,	// (0x000b46b9) listscroll_pinb_pane_ParamLimits

0xa124,	// (0x000b46b9) listscroll_pinb_pane

0xa133,	// (0x000b46c8) pinb_bg_pane_g1

0x03ea,	// (0x000aa97f) pinb_bg_pane_g2

0x03f6,	// (0x000aa98b) pinb_bg_pane_g3

0x0402,	// (0x000aa997) pinb_bg_pane_g4

0x040e,	// (0x000aa9a3) pinb_bg_pane_g5

0x041a,	// (0x000aa9af) pinb_bg_pane_g6

0x0425,	// (0x000aa9ba) pinb_bg_pane_g7

0x0430,	// (0x000aa9c5) pinb_bg_pane_g8

0x043b,	// (0x000aa9d0) pinb_bg_pane_g9

0x0445,	// (0x000aa9da) pinb_bg_pane_g10

0x0009,

0xf10a,	// (0x000b969f) pinb_bg_pane_g

0x0462,	// (0x000aa9f7) grid_pinb_pane

0x046b,	// (0x000aaa00) list_pinb_pane

0x0474,	// (0x000aaa09) scroll_pane_cp01_ParamLimits

0x0474,	// (0x000aaa09) scroll_pane_cp01

0xa13d,	// (0x000b46d2) find_pinb_pane_g1_ParamLimits

0xa13d,	// (0x000b46d2) find_pinb_pane_g1

0xa155,	// (0x000b46ea) find_pinb_pane_t1

0xa167,	// (0x000b46fc) find_pinb_pane_t2

0x0001,

0xf124,	// (0x000b96b9) find_pinb_pane_t

0xa17c,	// (0x000b4711) input_focus_pane_cp01_ParamLimits

0xa17c,	// (0x000b4711) input_focus_pane_cp01

0x0486,	// (0x000aaa1b) cell_pinb_pane_ParamLimits

0x0486,	// (0x000aaa1b) cell_pinb_pane

0xa188,	// (0x000b471d) cell_pinb_pane_g1_ParamLimits

0xa188,	// (0x000b471d) cell_pinb_pane_g1

0xa19b,	// (0x000b4730) cell_pinb_pane_g2_ParamLimits

0xa19b,	// (0x000b4730) cell_pinb_pane_g2

0xa1a7,	// (0x000b473c) cell_pinb_pane_g3_ParamLimits

0xa1a7,	// (0x000b473c) cell_pinb_pane_g3

0x0002,

0xf129,	// (0x000b96be) cell_pinb_pane_g_ParamLimits

0xf129,	// (0x000b96be) cell_pinb_pane_g

0x9eb2,	// (0x000b4447) grid_highlight_pane_cp01

0x04b4,	// (0x000aaa49) list_pinb_item_pane_ParamLimits

0x04b4,	// (0x000aaa49) list_pinb_item_pane

0x9eb2,	// (0x000b4447) list_highlight_pane_cp02

0x04c7,	// (0x000aaa5c) list_pinb_item_pane_g1_ParamLimits

0x04c7,	// (0x000aaa5c) list_pinb_item_pane_g1

0x04d4,	// (0x000aaa69) list_pinb_item_pane_g2_ParamLimits

0x04d4,	// (0x000aaa69) list_pinb_item_pane_g2

0x04e0,	// (0x000aaa75) list_pinb_item_pane_g3_ParamLimits

0x04e0,	// (0x000aaa75) list_pinb_item_pane_g3

0x04f1,	// (0x000aaa86) list_pinb_item_pane_g4_ParamLimits

0x04f1,	// (0x000aaa86) list_pinb_item_pane_g4

0x0003,

0xf130,	// (0x000b96c5) list_pinb_item_pane_g_ParamLimits

0xf130,	// (0x000b96c5) list_pinb_item_pane_g

0x04fd,	// (0x000aaa92) list_pinb_item_pane_t1_ParamLimits

0x04fd,	// (0x000aaa92) list_pinb_item_pane_t1

0x0532,	// (0x000aaac7) calc_display_pane

0x055a,	// (0x000aaaef) calc_paper_pane

0x057d,	// (0x000aab12) grid_calc_pane

0x9eb2,	// (0x000b4447) bg_list_pane_cp01

0x05ab,	// (0x000aab40) clock_g1

0x05b3,	// (0x000aab48) clock_g2

0x0001,

0xf139,	// (0x000b96ce) clock_g

0x05bb,	// (0x000aab50) clock_t1_ParamLimits

0x05bb,	// (0x000aab50) clock_t1

0x05d0,	// (0x000aab65) clock_t2_ParamLimits

0x05d0,	// (0x000aab65) clock_t2

0x05e2,	// (0x000aab77) clock_t3_ParamLimits

0x05e2,	// (0x000aab77) clock_t3

0x05f4,	// (0x000aab89) clock_t4_ParamLimits

0x05f4,	// (0x000aab89) clock_t4

0x0606,	// (0x000aab9b) clock_t5_ParamLimits

0x0606,	// (0x000aab9b) clock_t5

0x061b,	// (0x000aabb0) clock_t6_ParamLimits

0x061b,	// (0x000aabb0) clock_t6

0x062d,	// (0x000aabc2) clock_t7_ParamLimits

0x062d,	// (0x000aabc2) clock_t7

0x063f,	// (0x000aabd4) clock_t8_ParamLimits

0x063f,	// (0x000aabd4) clock_t8

0x0653,	// (0x000aabe8) clock_t9_ParamLimits

0x0653,	// (0x000aabe8) clock_t9

0x0008,

0xf13e,	// (0x000b96d3) clock_t_ParamLimits

0xf13e,	// (0x000b96d3) clock_t

0xa1b3,	// (0x000b4748) popup_clock_analogue_window_cp02

0xa1b3,	// (0x000b4748) popup_clock_digital_window_cp01

0xa1bb,	// (0x000b4750) listscroll_help_pane

0x9eb2,	// (0x000b4447) phob_pre_status_pane

0xa1c5,	// (0x000b475a) grid_qdial_pane

0xa10d,	// (0x000b46a2) listscroll_mce_pane

0xa10d,	// (0x000b46a2) bg_notes_pane

0xa1cf,	// (0x000b4764) list_notes_pane

0x0667,	// (0x000aabfc) scroll_pane_cp06

0xa1dd,	// (0x000b4772) bg_calc_paper_pane

0x979a,	// (0x000b3d2f) list_calc_pane

0xa1f1,	// (0x000b4786) bg_calc_display_pane

0x067b,	// (0x000aac10) calc_display_pane_t1

0x068d,	// (0x000aac22) calc_display_pane_t2

0x97b4,	// (0x000b3d49) calc_display_pane_t3

0x0002,

0xf151,	// (0x000b96e6) calc_display_pane_t

0x069f,	// (0x000aac34) cell_calc_pane_ParamLimits

0x069f,	// (0x000aac34) cell_calc_pane

0xa1fd,	// (0x000b4792) bg_calc_paper_pane_g1

0xa209,	// (0x000b479e) bg_calc_paper_pane_g2

0xa215,	// (0x000b47aa) bg_calc_paper_pane_g3

0xa221,	// (0x000b47b6) bg_calc_paper_pane_g4

0xa22d,	// (0x000b47c2) bg_calc_paper_pane_g5

0x06d6,	// (0x000aac6b) bg_calc_paper_pane_g6

0x06e7,	// (0x000aac7c) bg_calc_paper_pane_g7

0x06f8,	// (0x000aac8d) bg_calc_paper_pane_g8

0x0007,

0xf158,	// (0x000b96ed) bg_calc_paper_pane_g

0x070b,	// (0x000aaca0) calc_bg_paper_pane_g9

0x071e,	// (0x000aacb3) list_calc_item_pane_ParamLimits

0x071e,	// (0x000aacb3) list_calc_item_pane

0xa239,	// (0x000b47ce) list_calc_item_pane_g1

0x97c6,	// (0x000b3d5b) list_calc_item_pane_t1_ParamLimits

0x97c6,	// (0x000b3d5b) list_calc_item_pane_t1

0x0738,	// (0x000aaccd) list_calc_item_pane_t2_ParamLimits

0x0738,	// (0x000aaccd) list_calc_item_pane_t2

0x0001,

0xf169,	// (0x000b96fe) list_calc_item_pane_t_ParamLimits

0xf169,	// (0x000b96fe) list_calc_item_pane_t

0xa246,	// (0x000b47db) cell_calc_pane_g1

0xa250,	// (0x000b47e5) grid_highlight_pane_cp02

0xa272,	// (0x000b4807) bg_calc_display_pane_g1

0x97d8,	// (0x000b3d6d) bg_calc_display_pane_g2

0xa27b,	// (0x000b4810) bg_calc_display_pane_g3

0x0002,

0xf173,	// (0x000b9708) bg_calc_display_pane_g

0x076a,	// (0x000aacff) cell_qdial_pane_ParamLimits

0x076a,	// (0x000aacff) cell_qdial_pane

0x077e,	// (0x000aad13) cell_qdial_pane_g1_ParamLimits

0x077e,	// (0x000aad13) cell_qdial_pane_g1

0x0794,	// (0x000aad29) cell_qdial_pane_g2_ParamLimits

0x0794,	// (0x000aad29) cell_qdial_pane_g2

0xa284,	// (0x000b4819) cell_qdial_pane_g3_ParamLimits

0xa284,	// (0x000b4819) cell_qdial_pane_g3

0x0003,

0xf17a,	// (0x000b970f) cell_qdial_pane_g_ParamLimits

0xf17a,	// (0x000b970f) cell_qdial_pane_g

0x07ba,	// (0x000aad4f) cell_qdial_pane_t1_ParamLimits

0x07ba,	// (0x000aad4f) cell_qdial_pane_t1

0x07d2,	// (0x000aad67) cell_qdial_pane_t2_ParamLimits

0x07d2,	// (0x000aad67) cell_qdial_pane_t2

0x07e5,	// (0x000aad7a) cell_qdial_pane_t3_ParamLimits

0x07e5,	// (0x000aad7a) cell_qdial_pane_t3

0x0002,

0xf183,	// (0x000b9718) cell_qdial_pane_t_ParamLimits

0xf183,	// (0x000b9718) cell_qdial_pane_t

0x9eb2,	// (0x000b4447) grid_highlight_pane_cp04

0xa290,	// (0x000b4825) thumbnail_qdial_pane_ParamLimits

0xa290,	// (0x000b4825) thumbnail_qdial_pane

0xa2ec,	// (0x000b4881) list_help_pane

0xa2f5,	// (0x000b488a) scroll_pane_cp02

0x07f8,	// (0x000aad8d) help_list_pane_t1_ParamLimits

0x07f8,	// (0x000aad8d) help_list_pane_t1

0x97e2,	// (0x000b3d77) bg_notes_pane_g2

0x97ea,	// (0x000b3d7f) bg_notes_pane_g3

0x97f2,	// (0x000b3d87) notes_bg_pane_g1

0x97fa,	// (0x000b3d8f) notes_bg_pane_g4

0x9802,	// (0x000b3d97) notes_bg_pane_g5

0x980a,	// (0x000b3d9f) notes_bg_pane_g6

0x9812,	// (0x000b3da7) notes_bg_pane_g7

0x981a,	// (0x000b3daf) notes_bg_pane_g8

0x9822,	// (0x000b3db7) notes_bg_pane_g9

0x0006,

0xf1a1,	// (0x000b9736) notes_bg_pane_g

0x0817,	// (0x000aadac) list_notes_text_pane_ParamLimits

0x0817,	// (0x000aadac) list_notes_text_pane

0xa2fe,	// (0x000b4893) list_notes_text_pane_g1

0xa307,	// (0x000b489c) list_notes_text_pane_t1

0x082d,	// (0x000aadc2) listscroll_cale_week_pane

0x0859,	// (0x000aadee) bg_cale_heading_pane

0xa32f,	// (0x000b48c4) bg_cale_pane_cp01

0x0877,	// (0x000aae0c) cale_week_corner_pane

0x0896,	// (0x000aae2b) cale_week_day_heading_pane

0x08b9,	// (0x000aae4e) cale_week_scroll_pane_g1

0x08d2,	// (0x000aae67) cale_week_scroll_pane_g2

0x08ea,	// (0x000aae7f) cale_week_scroll_pane_g3

0x0902,	// (0x000aae97) cale_week_scroll_pane_g4

0x091a,	// (0x000aaeaf) cale_week_scroll_pane_g5

0x0936,	// (0x000aaecb) cale_week_scroll_pane_g6

0x0956,	// (0x000aaeeb) cale_week_scroll_pane_g7

0x0976,	// (0x000aaf0b) cale_week_scroll_pane_g8

0x099a,	// (0x000aaf2f) cale_week_scroll_pane_g9

0x09b2,	// (0x000aaf47) cale_week_scroll_pane_g10

0x09ca,	// (0x000aaf5f) cale_week_scroll_pane_g11

0x09e2,	// (0x000aaf77) cale_week_scroll_pane_g12

0x09fa,	// (0x000aaf8f) cale_week_scroll_pane_g13

0x09fa,	// (0x000aaf8f) cale_week_scroll_pane_g14

0x09fa,	// (0x000aaf8f) cale_week_scroll_pane_g15

0x000f,

0xf1b0,	// (0x000b9745) cale_week_scroll_pane_g

0x0a36,	// (0x000aafcb) cale_week_time_pane

0x0a5a,	// (0x000aafef) grid_cale_week_pane

0xa35e,	// (0x000b48f3) scroll_pane_cp08

0x0a80,	// (0x000ab015) cell_cale_week_pane_ParamLimits

0x0a80,	// (0x000ab015) cell_cale_week_pane

0x0b0e,	// (0x000ab0a3) cale_week_day_heading_pane_t1

0x0b58,	// (0x000ab0ed) cale_week_day_heading_pane_t2

0x0ba7,	// (0x000ab13c) cale_week_day_heading_pane_t3

0x0bf6,	// (0x000ab18b) cale_week_day_heading_pane_t4

0x0c45,	// (0x000ab1da) cale_week_day_heading_pane_t5

0x0c9c,	// (0x000ab231) cale_week_day_heading_pane_t6

0x0cf3,	// (0x000ab288) cale_week_day_heading_pane_t7

0x0006,

0xf1d1,	// (0x000b9766) cale_week_day_heading_pane_t

0xa37b,	// (0x000b4910) bg_cale_side_pane

0x0d3d,	// (0x000ab2d2) cale_week_time_pane_t1

0x0d57,	// (0x000ab2ec) cale_week_time_pane_t2

0x0d71,	// (0x000ab306) cale_week_time_pane_t3

0x0d8b,	// (0x000ab320) cale_week_time_pane_t4

0x0da5,	// (0x000ab33a) cale_week_time_pane_t5

0x0dbf,	// (0x000ab354) cale_week_time_pane_t6

0x0dd9,	// (0x000ab36e) cale_week_time_pane_t7

0x0df9,	// (0x000ab38e) cale_week_time_pane_t8

0x0007,

0xf1e0,	// (0x000b9775) cale_week_time_pane_t

0x0e19,	// (0x000ab3ae) cell_cale_week_pane_g2

0x0e3d,	// (0x000ab3d2) cell_cale_week_pane_g3_ParamLimits

0x0e3d,	// (0x000ab3d2) cell_cale_week_pane_g3

0xa389,	// (0x000b491e) grid_highlight_pane_cp07

0xa391,	// (0x000b4926) listscroll_gms_pane

0xa39b,	// (0x000b4930) grid_gms_pane

0xa3a4,	// (0x000b4939) listscroll_gms_pane_g1

0xa3ac,	// (0x000b4941) listscroll_gms_pane_g2

0x0001,

0xf1f1,	// (0x000b9786) listscroll_gms_pane_g

0x0e55,	// (0x000ab3ea) scroll_pane_cp010

0x0e60,	// (0x000ab3f5) cell_gms_pane_ParamLimits

0x0e60,	// (0x000ab3f5) cell_gms_pane

0x0e72,	// (0x000ab407) cell_gms_pane_g1

0xa3b4,	// (0x000b4949) cell_gms_pane_g2

0xa2fe,	// (0x000b4893) cell_gms_pane_g3

0xa3bc,	// (0x000b4951) cell_gms_pane_g4

0x0003,

0xf1f6,	// (0x000b978b) cell_gms_pane_g

0xa3c5,	// (0x000b495a) grid_highlight_pane_cp09

0x33fa,	// (0x000ad98f) phob_pre_status_pane_g1

0x3402,	// (0x000ad997) phob_pre_status_pane_g2

0x340a,	// (0x000ad99f) phob_pre_status_pane_g3

0x3412,	// (0x000ad9a7) phob_pre_status_pane_g4

0x0004,

0xf5e1,	// (0x000b9b76) phob_pre_status_pane_g

0x3422,	// (0x000ad9b7) phob_pre_status_pane_t1

0x3430,	// (0x000ad9c5) phob_pre_status_pane_t2

0x3440,	// (0x000ad9d5) phob_pre_status_pane_t3

0x0002,

0xf5ec,	// (0x000b9b81) phob_pre_status_pane_t

0xa3cd,	// (0x000b4962) bg_list_pane_cp05

0x0e82,	// (0x000ab417) grid_vorec_pane

0x0e8c,	// (0x000ab421) vorec_t1

0x0e9a,	// (0x000ab42f) vorec_t2

0x0ea8,	// (0x000ab43d) vorec_t3

0x0eb6,	// (0x000ab44b) vorec_t4

0x92d9,	// (0x000b386e) vorec_t5

0x92e7,	// (0x000b387c) vorec_t6

0x0004,

0xf1ff,	// (0x000b9794) vorec_t

0x92f5,	// (0x000b388a) wait_bar_pane_cp01

0x0ed2,	// (0x000ab467) cell_vorec_pane_ParamLimits

0x0ed2,	// (0x000ab467) cell_vorec_pane

0x982a,	// (0x000b3dbf) cell_vorec_pane_g1

0x9eb2,	// (0x000b4447) grid_highlight_pane_cp05

0x0efd,	// (0x000ab492) cams_zoom_pane

0x0f0c,	// (0x000ab4a1) image_vga_pane

0x0f26,	// (0x000ab4bb) main_camera_pane_g1

0x0f38,	// (0x000ab4cd) main_camera_pane_g2

0x0f48,	// (0x000ab4dd) main_camera_pane_g3

0x0f5a,	// (0x000ab4ef) main_camera_pane_g4

0x0f6c,	// (0x000ab501) main_camera_pane_g5

0x0f7e,	// (0x000ab513) main_camera_pane_g6

0x0f90,	// (0x000ab525) main_camera_pane_g7

0x0007,

0xf20a,	// (0x000b979f) main_camera_pane_g

0x0fa2,	// (0x000ab537) main_camera_pane_t1

0x0fb8,	// (0x000ab54d) main_camera_pane_t2

0x0001,

0xf21b,	// (0x000b97b0) main_camera_pane_t

0x0ff4,	// (0x000ab589) cams_zoom_pane_cp_ParamLimits

0x0ff4,	// (0x000ab589) cams_zoom_pane_cp

0x101c,	// (0x000ab5b1) image_cif_pane_ParamLimits

0x101c,	// (0x000ab5b1) image_cif_pane

0x1057,	// (0x000ab5ec) image_subqcif_pane

0x105f,	// (0x000ab5f4) main_video_pane_g1_ParamLimits

0x105f,	// (0x000ab5f4) main_video_pane_g1

0x1083,	// (0x000ab618) main_video_pane_g2_ParamLimits

0x1083,	// (0x000ab618) main_video_pane_g2

0x10b7,	// (0x000ab64c) main_video_pane_g3_ParamLimits

0x10b7,	// (0x000ab64c) main_video_pane_g3

0x10e5,	// (0x000ab67a) main_video_pane_g4_ParamLimits

0x10e5,	// (0x000ab67a) main_video_pane_g4

0x1113,	// (0x000ab6a8) main_video_pane_g5_ParamLimits

0x1113,	// (0x000ab6a8) main_video_pane_g5

0xa3e1,	// (0x000b4976) main_video_pane_g6_ParamLimits

0xa3e1,	// (0x000b4976) main_video_pane_g6

0x0006,

0xf220,	// (0x000b97b5) main_video_pane_g_ParamLimits

0xf220,	// (0x000b97b5) main_video_pane_g

0x113c,	// (0x000ab6d1) main_video_pane_t1_ParamLimits

0x113c,	// (0x000ab6d1) main_video_pane_t1

0xa3fb,	// (0x000b4990) cams_zoom_pane_g1

0xa404,	// (0x000b4999) cams_zoom_pane_g2

0xa40d,	// (0x000b49a2) cams_zoom_pane_g3

0xa416,	// (0x000b49ab) cams_zoom_pane_g4

0x0003,

0xf22f,	// (0x000b97c4) cams_zoom_pane_g

0x1199,	// (0x000ab72e) grid_cams_pane

0x11b3,	// (0x000ab748) linegrid_cams_pane

0x11c6,	// (0x000ab75b) cell_cams_pane_ParamLimits

0x11c6,	// (0x000ab75b) cell_cams_pane

0xa41f,	// (0x000b49b4) cams_burst_image_pane

0xa427,	// (0x000b49bc) cell_cams_pane_g1

0x9eb2,	// (0x000b4447) grid_highlight_pane_cp03

0xa246,	// (0x000b47db) mp_bg_pane_g1

0x9eb2,	// (0x000b4447) bg_list_pane_cp03

0xc6d3,	// (0x000b6c68) bg_mp_pane

0xc6db,	// (0x000b6c70) grid_mp_pane

0xc6e3,	// (0x000b6c78) media_player_g1

0xc6eb,	// (0x000b6c80) media_player_t1

0xc6f9,	// (0x000b6c8e) media_player_t2

0xc707,	// (0x000b6c9c) media_player_t3

0xc715,	// (0x000b6caa) media_player_t4

0xc723,	// (0x000b6cb8) media_player_t5

0xc731,	// (0x000b6cc6) media_player_t6

0xc73f,	// (0x000b6cd4) media_player_t7

0x0006,

0xf5cb,	// (0x000b9b60) media_player_t

0xc74d,	// (0x000b6ce2) wait_bar_pane_cp02

0xf5b0,	// (0x000b9b45) main_usb_pane_t

0x33f1,	// (0x000ad986) cell_mp_pane

0xa246,	// (0x000b47db) cell_mp_pane_g1

0x9eb2,	// (0x000b4447) grid_highlight_pane_cp06

0xa42f,	// (0x000b49c4) grid_skin_colour_pane

0xa437,	// (0x000b49cc) list_highlight_pane_cp03

0x12fb,	// (0x000ab890) skin_g1

0xa43f,	// (0x000b49d4) skin_t1

0xa44e,	// (0x000b49e3) skin_t2

0x0001,

0xf264,	// (0x000b97f9) skin_t

0x1303,	// (0x000ab898) cell_skin_colour_pane_ParamLimits

0x1303,	// (0x000ab898) cell_skin_colour_pane

0xa45c,	// (0x000b49f1) cell_skin_colour_pane_g1

0x137c,	// (0x000ab911) call_video_g1_ParamLimits

0x137c,	// (0x000ab911) call_video_g1

0x1398,	// (0x000ab92d) call_video_g2_ParamLimits

0x1398,	// (0x000ab92d) call_video_g2

0x0001,

0xf269,	// (0x000b97fe) call_video_g_ParamLimits

0xf269,	// (0x000b97fe) call_video_g

0x13ea,	// (0x000ab97f) call_video_uplink_pane_cp1_ParamLimits

0x13ea,	// (0x000ab97f) call_video_uplink_pane_cp1

0xa46e,	// (0x000b4a03) call_video_uplink_pane_cp2

0x1489,	// (0x000aba1e) video_down_crop_pane_ParamLimits

0x1489,	// (0x000aba1e) video_down_crop_pane

0x1572,	// (0x000abb07) video_down_pane_ParamLimits

0x1572,	// (0x000abb07) video_down_pane

0xa476,	// (0x000b4a0b) video_down_subqcif_pane_ParamLimits

0xa476,	// (0x000b4a0b) video_down_subqcif_pane

0xa48e,	// (0x000b4a23) video_down_subqcif_pane_cp_ParamLimits

0xa48e,	// (0x000b4a23) video_down_subqcif_pane_cp

0xa4b4,	// (0x000b4a49) im_reading_pane_ParamLimits

0xa4b4,	// (0x000b4a49) im_reading_pane

0x1680,	// (0x000abc15) im_writing_pane_ParamLimits

0x1680,	// (0x000abc15) im_writing_pane

0x1696,	// (0x000abc2b) im_reading_pane_t1

0xa4ce,	// (0x000b4a63) list_im_pane

0xa4df,	// (0x000b4a74) scroll_pane_cp07

0x16d3,	// (0x000abc68) im_writing_pane_t1_ParamLimits

0x16d3,	// (0x000abc68) im_writing_pane_t1

0xa4f8,	// (0x000b4a8d) im_writing_pane_t2_ParamLimits

0xa4f8,	// (0x000b4a8d) im_writing_pane_t2

0x0001,

0xf273,	// (0x000b9808) im_writing_pane_t_ParamLimits

0xf273,	// (0x000b9808) im_writing_pane_t

0x9eb2,	// (0x000b4447) input_focus_pane_cp04

0x9eb2,	// (0x000b4447) input_focus_pane_cp05

0x16e8,	// (0x000abc7d) list_im_single_pane_ParamLimits

0x16e8,	// (0x000abc7d) list_im_single_pane

0x16fe,	// (0x000abc93) list_single_im_pane_t1

0x33b1,	// (0x000ad946) blid_accuracy_pane

0x33b9,	// (0x000ad94e) blid_compass_pane

0x33c3,	// (0x000ad958) main_location_t1

0x33d3,	// (0x000ad968) main_location_t2

0x33e3,	// (0x000ad978) main_location_t3

0x0002,

0xf5da,	// (0x000b9b6f) main_location_t

0x9eb2,	// (0x000b4447) aid_levels_location

0xa246,	// (0x000b47db) blid_accuracy_pane_g1

0xa246,	// (0x000b47db) blid_accuracy_pane_g2

0x0001,

0xf2d5,	// (0x000b986a) blid_accuracy_pane_g

0xa540,	// (0x000b4ad5) wml_content_pane

0xaa87,	// (0x000b501c) wml_button_pane_ParamLimits

0xaa87,	// (0x000b501c) wml_button_pane

0x170d,	// (0x000abca2) wml_list_single_large_pane_ParamLimits

0x170d,	// (0x000abca2) wml_list_single_large_pane

0x1723,	// (0x000abcb8) wml_list_single_medium_pane_ParamLimits

0x1723,	// (0x000abcb8) wml_list_single_medium_pane

0x173d,	// (0x000abcd2) wml_list_single_small_pane_ParamLimits

0x173d,	// (0x000abcd2) wml_list_single_small_pane

0xaa9b,	// (0x000b5030) wml_selection_box_pane_ParamLimits

0xaa9b,	// (0x000b5030) wml_selection_box_pane

0xaaae,	// (0x000b5043) wml_list_single_pane_t1

0xaabd,	// (0x000b5052) wml_list_single_medium_pane_t1

0xaacc,	// (0x000b5061) wml_list_single_large_pane_t1

0xaadb,	// (0x000b5070) input_focus_pane_cp02_ParamLimits

0xaadb,	// (0x000b5070) input_focus_pane_cp02

0xaaee,	// (0x000b5083) wml_selection_box_pane_g1

0xaaf7,	// (0x000b508c) wml_selection_box_pane_t1_ParamLimits

0xaaf7,	// (0x000b508c) wml_selection_box_pane_t1

0xa10d,	// (0x000b46a2) bg_wml_button_pane_ParamLimits

0xa10d,	// (0x000b46a2) bg_wml_button_pane

0xab0f,	// (0x000b50a4) wml_button_pane_g1

0xab17,	// (0x000b50ac) wml_button_pane_t1

0xab0f,	// (0x000b50a4) wml_button_bg_pane_g1

0xab27,	// (0x000b50bc) wml_button_bg_pane_g2

0xab2f,	// (0x000b50c4) wml_button_bg_pane_g3

0xab37,	// (0x000b50cc) wml_button_bg_pane_g4

0xab3f,	// (0x000b50d4) wml_button_bg_pane_g5

0xab47,	// (0x000b50dc) wml_button_bg_pane_g6

0xab4f,	// (0x000b50e4) wml_button_bg_pane_g7

0xab57,	// (0x000b50ec) wml_button_bg_pane_g8

0xab5f,	// (0x000b50f4) wml_button_bg_pane_g9

0x0008,

0xf278,	// (0x000b980d) wml_button_bg_pane_g

0x1757,	// (0x000abcec) bg_list_pane_cp02

0xab67,	// (0x000b50fc) mce_header_pane_ParamLimits

0xab67,	// (0x000b50fc) mce_header_pane

0xab7d,	// (0x000b5112) mce_icon_pane

0xab7d,	// (0x000b5112) mce_image_pane

0xab86,	// (0x000b511b) mce_text_pane_ParamLimits

0xab86,	// (0x000b511b) mce_text_pane

0x175f,	// (0x000abcf4) scroll_pane_cp03

0xaa7f,	// (0x000b5014) scroll_pane_cp04

0xab99,	// (0x000b512e) scroll_pane_cp05_ParamLimits

0xab99,	// (0x000b512e) scroll_pane_cp05

0x1769,	// (0x000abcfe) mce_header_field_pane_ParamLimits

0x1769,	// (0x000abcfe) mce_header_field_pane

0x1780,	// (0x000abd15) mce_header_field_pane_2_ParamLimits

0x1780,	// (0x000abd15) mce_header_field_pane_2

0x1796,	// (0x000abd2b) mce_header_field_pane_3

0x179e,	// (0x000abd33) list_single_mce_message_pane_ParamLimits

0x179e,	// (0x000abd33) list_single_mce_message_pane

0x17b5,	// (0x000abd4a) list_single_mce_smart_pane_ParamLimits

0x17b5,	// (0x000abd4a) list_single_mce_smart_pane

0xaba5,	// (0x000b513a) input_focus_pane_cp03

0xabae,	// (0x000b5143) list_header_data_pane

0x17d7,	// (0x000abd6c) mce_header_field_pane_t1

0x17e7,	// (0x000abd7c) list_single_mce_header_pane_ParamLimits

0x17e7,	// (0x000abd7c) list_single_mce_header_pane

0xabb6,	// (0x000b514b) list_single_mce_header_pane_t1

0xabc5,	// (0x000b515a) list_single_mce_message_pane_g1

0xabcd,	// (0x000b5162) list_single_mce_message_pane_t1

0x1821,	// (0x000abdb6) bg_cale_heading_pane_cp01_ParamLimits

0x1821,	// (0x000abdb6) bg_cale_heading_pane_cp01

0xabdb,	// (0x000b5170) bg_cale_pane_cp02_ParamLimits

0xabdb,	// (0x000b5170) bg_cale_pane_cp02

0x185c,	// (0x000abdf1) cale_month_corner_pane

0x187b,	// (0x000abe10) cale_month_day_heading_pane_ParamLimits

0x187b,	// (0x000abe10) cale_month_day_heading_pane

0x18ce,	// (0x000abe63) cale_month_pane_g1_ParamLimits

0x18ce,	// (0x000abe63) cale_month_pane_g1

0x18fe,	// (0x000abe93) cale_month_pane_g2_ParamLimits

0x18fe,	// (0x000abe93) cale_month_pane_g2

0x192e,	// (0x000abec3) cale_month_pane_g3_ParamLimits

0x192e,	// (0x000abec3) cale_month_pane_g3

0x196a,	// (0x000abeff) cale_month_pane_g4_ParamLimits

0x196a,	// (0x000abeff) cale_month_pane_g4

0x19a6,	// (0x000abf3b) cale_month_pane_g5_ParamLimits

0x19a6,	// (0x000abf3b) cale_month_pane_g5

0x19ee,	// (0x000abf83) cale_month_pane_g6_ParamLimits

0x19ee,	// (0x000abf83) cale_month_pane_g6

0x1a3a,	// (0x000abfcf) cale_month_pane_g7_ParamLimits

0x1a3a,	// (0x000abfcf) cale_month_pane_g7

0x1a8e,	// (0x000ac023) cale_month_pane_g8_ParamLimits

0x1a8e,	// (0x000ac023) cale_month_pane_g8

0x1ae2,	// (0x000ac077) cale_month_pane_g9_ParamLimits

0x1ae2,	// (0x000ac077) cale_month_pane_g9

0x1b34,	// (0x000ac0c9) cale_month_pane_g10_ParamLimits

0x1b34,	// (0x000ac0c9) cale_month_pane_g10

0x1b86,	// (0x000ac11b) cale_month_pane_g11_ParamLimits

0x1b86,	// (0x000ac11b) cale_month_pane_g11

0x1bd8,	// (0x000ac16d) cale_month_pane_g12_ParamLimits

0x1bd8,	// (0x000ac16d) cale_month_pane_g12

0x1c2a,	// (0x000ac1bf) cale_month_pane_g13_ParamLimits

0x1c2a,	// (0x000ac1bf) cale_month_pane_g13

0x000c,

0xf28b,	// (0x000b9820) cale_month_pane_g_ParamLimits

0xf28b,	// (0x000b9820) cale_month_pane_g

0x1c7c,	// (0x000ac211) cale_month_week_pane

0x1ca0,	// (0x000ac235) grid_cale_month_pane_ParamLimits

0x1ca0,	// (0x000ac235) grid_cale_month_pane

0x1cde,	// (0x000ac273) cale_month_day_heading_pane_t1

0x1d64,	// (0x000ac2f9) cale_month_day_heading_pane_t2

0x1df5,	// (0x000ac38a) cale_month_day_heading_pane_t3

0x1e86,	// (0x000ac41b) cale_month_day_heading_pane_t4

0x1f1f,	// (0x000ac4b4) cale_month_day_heading_pane_t5

0x1fc0,	// (0x000ac555) cale_month_day_heading_pane_t6

0x2061,	// (0x000ac5f6) cale_month_day_heading_pane_t7

0x0006,

0xf2a6,	// (0x000b983b) cale_month_day_heading_pane_t

0xa37b,	// (0x000b4910) bg_cale_side_pane_cp01

0x210a,	// (0x000ac69f) cale_month_week_pane_t1

0x2123,	// (0x000ac6b8) cale_month_week_pane_t2

0x213c,	// (0x000ac6d1) cale_month_week_pane_t3

0x2155,	// (0x000ac6ea) cale_month_week_pane_t4

0x216e,	// (0x000ac703) cale_month_week_pane_t5

0x2187,	// (0x000ac71c) cale_month_week_pane_t6

0x0005,

0xf2b5,	// (0x000b984a) cale_month_week_pane_t

0x21a0,	// (0x000ac735) cell_cale_month_pane_ParamLimits

0x21a0,	// (0x000ac735) cell_cale_month_pane

0x9834,	// (0x000b3dc9) cell_cale_month_pane_g1

0x22f8,	// (0x000ac88d) cell_cale_month_pane_t1_ParamLimits

0x22f8,	// (0x000ac88d) cell_cale_month_pane_t1

0xa389,	// (0x000b491e) grid_highlight_pane_cp08

0xa246,	// (0x000b47db) main_smil_g1

0x2318,	// (0x000ac8ad) smil_status_pane

0xac1a,	// (0x000b51af) smil_text_pane

0xc5f3,	// (0x000b6b88) bg_popup_call3_rect_pane_g8

0xc5fb,	// (0x000b6b90) bg_popup_call3_rect_pane_g9

0x0008,

0xf56e,	// (0x000b9b03) bg_popup_call3_rect_pane_g

0xc842,	// (0x000b6dd7) smil_status_volume_pane_g1

0xac24,	// (0x000b51b9) smil_status_pane_t1

0x997e,	// (0x000b3f13) volume_smil_pane

0xac3b,	// (0x000b51d0) list_smil_text_pane

0x232d,	// (0x000ac8c2) scroll_pane_cp011

0x2338,	// (0x000ac8cd) smil_text_list_pane_t1_ParamLimits

0x2338,	// (0x000ac8cd) smil_text_list_pane_t1

0x9840,	// (0x000b3dd5) aid_volume_smil_ParamLimits

0x9840,	// (0x000b3dd5) aid_volume_smil

0xa246,	// (0x000b47db) smil_volume_pane_g1

0xa246,	// (0x000b47db) smil_volume_pane_g2

0x0001,

0xf2d5,	// (0x000b986a) smil_volume_pane_g

0x082d,	// (0x000aadc2) listscroll_cale_day_pane

0xac45,	// (0x000b51da) bg_cale_pane

0xac5d,	// (0x000b51f2) list_cale_pane

0xac80,	// (0x000b5215) scroll_pane_cp09

0xac91,	// (0x000b5226) cale_bg_pane_g1

0xac99,	// (0x000b522e) cale_bg_pane_g2

0xaca1,	// (0x000b5236) cale_bg_pane_g3

0xaca9,	// (0x000b523e) cale_bg_pane_g4

0xacb1,	// (0x000b5246) cale_bg_pane_g5

0xacb9,	// (0x000b524e) cale_bg_pane_g6

0xacc1,	// (0x000b5256) cale_bg_pane_g7

0xacc9,	// (0x000b525e) cale_bg_pane_g8

0xacd1,	// (0x000b5266) cale_bg_pane_g9

0x0008,

0xf2da,	// (0x000b986f) cale_bg_pane_g

0x237a,	// (0x000ac90f) list_cale_time_pane_ParamLimits

0x237a,	// (0x000ac90f) list_cale_time_pane

0xace1,	// (0x000b5276) list_cale_time_pane_g1_ParamLimits

0xace1,	// (0x000b5276) list_cale_time_pane_g1

0xaced,	// (0x000b5282) list_cale_time_pane_g2_ParamLimits

0xaced,	// (0x000b5282) list_cale_time_pane_g2

0x2391,	// (0x000ac926) list_cale_time_pane_g3_ParamLimits

0x2391,	// (0x000ac926) list_cale_time_pane_g3

0x239f,	// (0x000ac934) list_cale_time_pane_g4_ParamLimits

0x239f,	// (0x000ac934) list_cale_time_pane_g4

0x23ad,	// (0x000ac942) list_cale_time_pane_g5_ParamLimits

0x23ad,	// (0x000ac942) list_cale_time_pane_g5

0x0005,

0xf2ed,	// (0x000b9882) list_cale_time_pane_g_ParamLimits

0xf2ed,	// (0x000b9882) list_cale_time_pane_g

0xad07,	// (0x000b529c) list_cale_time_pane_t1_ParamLimits

0xad07,	// (0x000b529c) list_cale_time_pane_t1

0xad2f,	// (0x000b52c4) list_cale_time_pane_t2_ParamLimits

0xad2f,	// (0x000b52c4) list_cale_time_pane_t2

0x26ef,	// (0x000acc84) aid_blid_cardinal_pane

0x272d,	// (0x000accc2) compass_pane_t4

0xad57,	// (0x000b52ec) list_cale_time_pane_t4_ParamLimits

0xad57,	// (0x000b52ec) list_cale_time_pane_t4

0x273b,	// (0x000accd0) compass_pane_t5

0x2749,	// (0x000accde) compass_pane_t6

0x2757,	// (0x000accec) compass_pane_t7

0xb214,	// (0x000b57a9) navi_pane_cc_t1

0xb3f1,	// (0x000b5986) aid_phob_thumbnail_center_pane

0x2dc1,	// (0x000ad356) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2fa,	// (0x000b988f) list_cale_time_pane_t_ParamLimits

0xf2fa,	// (0x000b988f) list_cale_time_pane_t

0x93e9,	// (0x000b397e) bg_popup_window_pane_cp02_ParamLimits

0x93e9,	// (0x000b397e) bg_popup_window_pane_cp02

0xad7f,	// (0x000b5314) heading_pane_cp01_ParamLimits

0xad7f,	// (0x000b5314) heading_pane_cp01

0xad8b,	// (0x000b5320) loc_req_pane_ParamLimits

0xad8b,	// (0x000b5320) loc_req_pane

0xad9b,	// (0x000b5330) loc_type_pane_ParamLimits

0xad9b,	// (0x000b5330) loc_type_pane

0xadad,	// (0x000b5342) loc_type_pane_t1_ParamLimits

0xadad,	// (0x000b5342) loc_type_pane_t1

0xadbf,	// (0x000b5354) loc_type_pane_t2_ParamLimits

0xadbf,	// (0x000b5354) loc_type_pane_t2

0xadd1,	// (0x000b5366) loc_type_pane_t3_ParamLimits

0xadd1,	// (0x000b5366) loc_type_pane_t3

0x0002,

0xf301,	// (0x000b9896) loc_type_pane_t_ParamLimits

0xf301,	// (0x000b9896) loc_type_pane_t

0xade3,	// (0x000b5378) list_loc_req_pane

0xaded,	// (0x000b5382) scroll_pane_cp012

0x23bb,	// (0x000ac950) list_single_loc_request_popup_menu_pane_ParamLimits

0x23bb,	// (0x000ac950) list_single_loc_request_popup_menu_pane

0xadf8,	// (0x000b538d) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xadf8,	// (0x000b538d) list_single_loc_request_popup_menu_pane_g1

0xae04,	// (0x000b5399) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xae04,	// (0x000b5399) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf308,	// (0x000b989d) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf308,	// (0x000b989d) list_single_loc_request_popup_menu_pane_g

0xae10,	// (0x000b53a5) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xae10,	// (0x000b53a5) list_single_loc_request_popup_menu_pane_t1

0xa10d,	// (0x000b46a2) bg_popup_window_pane_cp03_ParamLimits

0xa10d,	// (0x000b46a2) bg_popup_window_pane_cp03

0xae26,	// (0x000b53bb) heading_loc_req_pane_ParamLimits

0xae26,	// (0x000b53bb) heading_loc_req_pane

0x23c8,	// (0x000ac95d) popup_dyc_status_message_window_g1_ParamLimits

0x23c8,	// (0x000ac95d) popup_dyc_status_message_window_g1

0x23dc,	// (0x000ac971) popup_dyc_status_message_window_t1_ParamLimits

0x23dc,	// (0x000ac971) popup_dyc_status_message_window_t1

0x23f1,	// (0x000ac986) popup_dyc_status_message_window_t2_ParamLimits

0x23f1,	// (0x000ac986) popup_dyc_status_message_window_t2

0x2406,	// (0x000ac99b) popup_dyc_status_message_window_t3_ParamLimits

0x2406,	// (0x000ac99b) popup_dyc_status_message_window_t3

0x0002,

0xf30d,	// (0x000b98a2) popup_dyc_status_message_window_t_ParamLimits

0xf30d,	// (0x000b98a2) popup_dyc_status_message_window_t

0x9eb2,	// (0x000b4447) bg_heading_pane_cp01

0xae32,	// (0x000b53c7) heading_loc_req_pane_g1

0xae3a,	// (0x000b53cf) heading_loc_req_pane_g2

0xae42,	// (0x000b53d7) heading_loc_req_pane_g3

0x0002,

0xf314,	// (0x000b98a9) heading_loc_req_pane_g

0xae4a,	// (0x000b53df) heading_loc_req_pane_t1

0xae59,	// (0x000b53ee) bg_popup_sub_pane_cp01_ParamLimits

0xae59,	// (0x000b53ee) bg_popup_sub_pane_cp01

0xae67,	// (0x000b53fc) popup_cale_events_window_g1_ParamLimits

0xae67,	// (0x000b53fc) popup_cale_events_window_g1

0xae87,	// (0x000b541c) popup_cale_events_window_g2_ParamLimits

0xae87,	// (0x000b541c) popup_cale_events_window_g2

0x0001,

0xf348,	// (0x000b98dd) popup_cale_events_window_g_ParamLimits

0xf348,	// (0x000b98dd) popup_cale_events_window_g

0xaea7,	// (0x000b543c) popup_cale_events_window_t1_ParamLimits

0xaea7,	// (0x000b543c) popup_cale_events_window_t1

0xaeb9,	// (0x000b544e) popup_cale_events_window_t2_ParamLimits

0xaeb9,	// (0x000b544e) popup_cale_events_window_t2

0xaef7,	// (0x000b548c) popup_cale_events_window_t3_ParamLimits

0xaef7,	// (0x000b548c) popup_cale_events_window_t3

0xaf31,	// (0x000b54c6) popup_cale_events_window_t4_ParamLimits

0xaf31,	// (0x000b54c6) popup_cale_events_window_t4

0x0003,

0xf34d,	// (0x000b98e2) popup_cale_events_window_t_ParamLimits

0xf34d,	// (0x000b98e2) popup_cale_events_window_t

0x24fd,	// (0x000aca92) call_type_pane

0x250d,	// (0x000acaa2) popup_call_status_window_g1

0x2521,	// (0x000acab6) popup_call_status_window_g2

0x2535,	// (0x000acaca) popup_call_status_window_g3

0x0002,

0xf356,	// (0x000b98eb) popup_call_status_window_g

0xaf67,	// (0x000b54fc) call_type_pane_g1

0xaf70,	// (0x000b5505) call_type_pane_g2

0x0001,

0xf35d,	// (0x000b98f2) call_type_pane_g

0x9eb2,	// (0x000b4447) bg_popup_sub_pane_cp02

0xaf79,	// (0x000b550e) listscroll_popup_wml_pane

0xaf81,	// (0x000b5516) list_wml_pane

0xaf8b,	// (0x000b5520) scroll_pane_cp013

0xaf96,	// (0x000b552b) list_single_graphic_popup_wml_pane_ParamLimits

0xaf96,	// (0x000b552b) list_single_graphic_popup_wml_pane

0xa246,	// (0x000b47db) list_single_graphic_popup_wml_pane_g1

0xafaa,	// (0x000b553f) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf362,	// (0x000b98f7) list_single_graphic_popup_wml_pane_g

0xafb2,	// (0x000b5547) list_single_graphic_popup_wml_pane_t1

0xafc8,	// (0x000b555d) aid_call_pane

0xa105,	// (0x000b469a) popup_clock_analogue_window_g1

0xa105,	// (0x000b469a) popup_clock_analogue_window_g2

0x9862,	// (0x000b3df7) popup_clock_analogue_window_g3

0x9862,	// (0x000b3df7) popup_clock_analogue_window_g4

0xa246,	// (0x000b47db) popup_clock_analogue_window_g5

0x0004,

0xf367,	// (0x000b98fc) popup_clock_analogue_window_g

0x986a,	// (0x000b3dff) popup_clock_analogue_window_t1

0x9878,	// (0x000b3e0d) clock_digital_number_pane_ParamLimits

0x9878,	// (0x000b3e0d) clock_digital_number_pane

0x9884,	// (0x000b3e19) clock_digital_number_pane_cp02_ParamLimits

0x9884,	// (0x000b3e19) clock_digital_number_pane_cp02

0x9890,	// (0x000b3e25) clock_digital_number_pane_cp03_ParamLimits

0x9890,	// (0x000b3e25) clock_digital_number_pane_cp03

0x989c,	// (0x000b3e31) clock_digital_number_pane_cp04_ParamLimits

0x989c,	// (0x000b3e31) clock_digital_number_pane_cp04

0x98ac,	// (0x000b3e41) clock_digital_separator_pane_ParamLimits

0x98ac,	// (0x000b3e41) clock_digital_separator_pane

0x98b8,	// (0x000b3e4d) popup_clock_digital_window_t1

0xa246,	// (0x000b47db) clock_digital_number_pane_g1

0xa246,	// (0x000b47db) clock_digital_number_pane_g2

0x0001,

0xf2d5,	// (0x000b986a) clock_digital_number_pane_g

0xa246,	// (0x000b47db) clock_digital_separator_pane_g1

0xa246,	// (0x000b47db) clock_digital_separator_pane_g2

0x0001,

0xf2d5,	// (0x000b986a) clock_digital_separator_pane_g

0x9eb2,	// (0x000b4447) bg_popup_window_pane_cp04

0xafd0,	// (0x000b5565) heading_pane_cp03

0xafd8,	// (0x000b556d) listscroll_popup_gms_pane

0xafe0,	// (0x000b5575) grid_large_graphic_popup_pane

0xafea,	// (0x000b557f) listscroll_popup_gms_pane_g1

0xaff2,	// (0x000b5587) listscroll_popup_gms_pane_g2

0x0001,

0xf372,	// (0x000b9907) listscroll_popup_gms_pane_g

0xaa7f,	// (0x000b5014) scroll_pane_cp014

0xaffa,	// (0x000b558f) cell_large_graphic_popup_pane_ParamLimits

0xaffa,	// (0x000b558f) cell_large_graphic_popup_pane

0xb012,	// (0x000b55a7) cell_large_graphic_popup_pane_g1_ParamLimits

0xb012,	// (0x000b55a7) cell_large_graphic_popup_pane_g1

0xb01e,	// (0x000b55b3) cell_large_graphic_popup_pane_g2_ParamLimits

0xb01e,	// (0x000b55b3) cell_large_graphic_popup_pane_g2

0xb02a,	// (0x000b55bf) cell_large_graphic_popup_pane_g3_ParamLimits

0xb02a,	// (0x000b55bf) cell_large_graphic_popup_pane_g3

0xb037,	// (0x000b55cc) cell_large_graphic_popup_pane_g4_ParamLimits

0xb037,	// (0x000b55cc) cell_large_graphic_popup_pane_g4

0x0003,

0xf377,	// (0x000b990c) cell_large_graphic_popup_pane_g_ParamLimits

0xf377,	// (0x000b990c) cell_large_graphic_popup_pane_g

0xb047,	// (0x000b55dc) grid_highlight_pane_cp010

0xa246,	// (0x000b47db) bg_popup_call_pane_g1

0xb051,	// (0x000b55e6) list_single_graphic_popup_conf_pane_ParamLimits

0xb051,	// (0x000b55e6) list_single_graphic_popup_conf_pane

0xb064,	// (0x000b55f9) list_highlight_pane_cp01

0xb06d,	// (0x000b5602) list_single_graphic_popup_conf_pane_g1

0xb075,	// (0x000b560a) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf380,	// (0x000b9915) list_single_graphic_popup_conf_pane_g

0xb07d,	// (0x000b5612) list_single_graphic_popup_conf_pane_t1

0xb08b,	// (0x000b5620) linegrid_cams_pane_g1

0x2544,	// (0x000acad9) linegrid_cams_pane_g2

0xa2fe,	// (0x000b4893) linegrid_cams_pane_g3

0xb094,	// (0x000b5629) linegrid_cams_pane_g4

0x254d,	// (0x000acae2) linegrid_cams_pane_g5

0x2556,	// (0x000acaeb) linegrid_cams_pane_g6

0xa3bc,	// (0x000b4951) linegrid_cams_pane_g7

0x0006,

0xf385,	// (0x000b991a) linegrid_cams_pane_g

0xb09d,	// (0x000b5632) popup_clock_analogue_window

0xb09d,	// (0x000b5632) popup_clock_digital_window

0x9eb2,	// (0x000b4447) popup_phob_thumbnail_window

0xa246,	// (0x000b47db) call_video_uplink_pane_g1

0xb0a6,	// (0x000b563b) call_video_uplink_pane_g2

0x0001,

0xf394,	// (0x000b9929) call_video_uplink_pane_g

0xa389,	// (0x000b491e) video_uplink_pane

0xb0ae,	// (0x000b5643) mce_image_pane_g1

0x2561,	// (0x000acaf6) mce_image_pane_g2

0x2569,	// (0x000acafe) mce_image_pane_g3

0x2571,	// (0x000acb06) mce_image_pane_g4

0x257b,	// (0x000acb10) mce_image_pane_g5

0x0004,

0xf399,	// (0x000b992e) mce_image_pane_g

0xb0b8,	// (0x000b564d) control_top_pane_stacon_cp01_ParamLimits

0xb0b8,	// (0x000b564d) control_top_pane_stacon_cp01

0xb0cc,	// (0x000b5661) uni_indicator_pane_stacon_cp01_ParamLimits

0xb0cc,	// (0x000b5661) uni_indicator_pane_stacon_cp01

0xb0dd,	// (0x000b5672) bg_popup_sub_pane_cp03

0x2583,	// (0x000acb18) chi_dic_find_pane

0x258b,	// (0x000acb20) listscroll_chi_dic_pane

0x2594,	// (0x000acb29) main_pane_chidic_g1

0xb0e7,	// (0x000b567c) chi_dic_find_pane_t1

0xb0f5,	// (0x000b568a) find_chidic_pane

0xb0fe,	// (0x000b5693) chi_dic_list_pane_ParamLimits

0xb0fe,	// (0x000b5693) chi_dic_list_pane

0xb10f,	// (0x000b56a4) scroll_pane_cp020

0xb117,	// (0x000b56ac) find_chidic_pane_t1

0x9eb2,	// (0x000b4447) input_focus_pane_cp06

0x25a7,	// (0x000acb3c) list_chi_dic_pane_ParamLimits

0x25a7,	// (0x000acb3c) list_chi_dic_pane

0x25ba,	// (0x000acb4f) list_chi_dic_pane_t1_ParamLimits

0x25ba,	// (0x000acb4f) list_chi_dic_pane_t1

0x9eb2,	// (0x000b4447) list_highlight_pane_cp020

0xb126,	// (0x000b56bb) bg_cale_heading_pane_g1

0x25cd,	// (0x000acb62) bg_cale_heading_pane_g2

0x25d5,	// (0x000acb6a) bg_cale_heading_pane_g3

0x25dd,	// (0x000acb72) bg_cale_heading_pane_g4

0x25e7,	// (0x000acb7c) bg_cale_heading_pane_g5

0x25f1,	// (0x000acb86) bg_cale_heading_pane_g6

0x25f9,	// (0x000acb8e) bg_cale_heading_pane_g7

0x2601,	// (0x000acb96) bg_cale_heading_pane_g8

0x260b,	// (0x000acba0) bg_cale_heading_pane_g9

0x0008,

0xf3a4,	// (0x000b9939) bg_cale_heading_pane_g

0xb126,	// (0x000b56bb) bg_cale_side_pane_g1

0x2615,	// (0x000acbaa) bg_cale_side_pane_g2

0x261d,	// (0x000acbb2) bg_cale_side_pane_g3

0x2625,	// (0x000acbba) bg_cale_side_pane_g4

0x262d,	// (0x000acbc2) bg_cale_side_pane_g5

0x2635,	// (0x000acbca) bg_cale_side_pane_g6

0x263d,	// (0x000acbd2) bg_cale_side_pane_g7

0x2645,	// (0x000acbda) bg_cale_side_pane_g8

0x264d,	// (0x000acbe2) bg_cale_side_pane_g9

0x0008,

0xf3b7,	// (0x000b994c) bg_cale_side_pane_g

0x2655,	// (0x000acbea) popup_call_status_window_ParamLimits

0x2655,	// (0x000acbea) popup_call_status_window

0xb12e,	// (0x000b56c3) stacon_top_pane

0xb136,	// (0x000b56cb) status_pane_ParamLimits

0xb136,	// (0x000b56cb) status_pane

0xb14b,	// (0x000b56e0) status_small_pane

0xb153,	// (0x000b56e8) control_pane

0x9eb2,	// (0x000b4447) stacon_bottom_pane

0xb15b,	// (0x000b56f0) list_single_mce_smart_pane_t1_ParamLimits

0xb15b,	// (0x000b56f0) list_single_mce_smart_pane_t1

0xb16e,	// (0x000b5703) list_single_mce_smart_pane_t2_ParamLimits

0xb16e,	// (0x000b5703) list_single_mce_smart_pane_t2

0x0001,

0xf3ca,	// (0x000b995f) list_single_mce_smart_pane_t_ParamLimits

0xf3ca,	// (0x000b995f) list_single_mce_smart_pane_t

0x269c,	// (0x000acc31) compass_pane

0x26a5,	// (0x000acc3a) main_location2_pane_t1

0x26b7,	// (0x000acc4c) main_location2_pane_t2

0x26c9,	// (0x000acc5e) main_location2_pane_t3

0x0003,

0xf3cf,	// (0x000b9964) main_location2_pane_t

0xb18d,	// (0x000b5722) compass_pane_g1_ParamLimits

0xb18d,	// (0x000b5722) compass_pane_g1

0x270f,	// (0x000acca4) compass_pane_t1

0x271e,	// (0x000accb3) compass_pane_t2

0x0005,

0xf3d8,	// (0x000b996d) compass_pane_t

0x2765,	// (0x000accfa) text_secondary_cp61

0xb20b,	// (0x000b57a0) navi_pane_cams_g5

0xb287,	// (0x000b581c) navi_pane_im_t1

0xb295,	// (0x000b582a) navi_pane_mp_g1_ParamLimits

0xb295,	// (0x000b582a) navi_pane_mp_g1

0xb2a9,	// (0x000b583e) navi_pane_mp_g2_ParamLimits

0xb2a9,	// (0x000b583e) navi_pane_mp_g2

0xb2b5,	// (0x000b584a) navi_pane_mp_g3_ParamLimits

0xb2b5,	// (0x000b584a) navi_pane_mp_g3

0x0002,

0xf3ec,	// (0x000b9981) navi_pane_mp_g_ParamLimits

0xf3ec,	// (0x000b9981) navi_pane_mp_g

0xb2c1,	// (0x000b5856) navi_pane_mp_t1

0xb2cf,	// (0x000b5864) navi_pane_mp_t2

0x0002,

0xf3f3,	// (0x000b9988) navi_pane_mp_t

0xb33a,	// (0x000b58cf) navi_pane_vt_g1

0xb2c1,	// (0x000b5856) navi_pane_vt_t1

0xb342,	// (0x000b58d7) navi_slider_pane

0xa3cd,	// (0x000b4962) zooming_pane

0xb352,	// (0x000b58e7) navi_slider_pane_g1

0x98d5,	// (0x000b3e6a) navi_slider_pane_g2

0x0006,

0xf3fa,	// (0x000b998f) navi_slider_pane_g

0xb376,	// (0x000b590b) aid_levels_zoom

0xb37e,	// (0x000b5913) zooming_pane_g1

0xb386,	// (0x000b591b) zooming_pane_g2

0xb386,	// (0x000b591b) zooming_pane_g3

0x0002,

0xf409,	// (0x000b999e) zooming_pane_g

0xb38e,	// (0x000b5923) level_10_zoom

0xb397,	// (0x000b592c) level_11_zoom

0xb3a0,	// (0x000b5935) level_1_zoom

0xb3a9,	// (0x000b593e) level_2_zoom

0xb3b2,	// (0x000b5947) level_3_zoom

0xb3bb,	// (0x000b5950) level_4_zoom

0xb3c4,	// (0x000b5959) level_5_zoom

0xb3cd,	// (0x000b5962) level_6_zoom

0xb3d6,	// (0x000b596b) level_7_zoom

0xb3df,	// (0x000b5974) level_8_zoom

0xb3e8,	// (0x000b597d) level_9_zoom

0xb3f9,	// (0x000b598e) popup_phob_thumbnail_window_g1

0xb401,	// (0x000b5996) popup_phob_thumbnail_window_g2

0x0001,

0xf410,	// (0x000b99a5) popup_phob_thumbnail_window_g

0xc755,	// (0x000b6cea) level_1_location

0xc75d,	// (0x000b6cf2) level_2_location

0xc765,	// (0x000b6cfa) level_3_location

0xc76d,	// (0x000b6d02) level_4_location

0xa3cd,	// (0x000b4962) level_5_location

0x27b6,	// (0x000acd4b) mce_icon_pane_g1

0x27c0,	// (0x000acd55) mce_icon_pane_g2

0x0001,

0xf415,	// (0x000b99aa) mce_icon_pane_g

0x27ca,	// (0x000acd5f) main_mup_pane_g1_ParamLimits

0x27ca,	// (0x000acd5f) main_mup_pane_g1

0x27e0,	// (0x000acd75) main_mup_pane_g2_ParamLimits

0x27e0,	// (0x000acd75) main_mup_pane_g2

0x27f8,	// (0x000acd8d) main_mup_pane_g3_ParamLimits

0x27f8,	// (0x000acd8d) main_mup_pane_g3

0x2810,	// (0x000acda5) main_mup_pane_g4_ParamLimits

0x2810,	// (0x000acda5) main_mup_pane_g4

0x2828,	// (0x000acdbd) main_mup_pane_g5_ParamLimits

0x2828,	// (0x000acdbd) main_mup_pane_g5

0x2844,	// (0x000acdd9) main_mup_pane_g6_ParamLimits

0x2844,	// (0x000acdd9) main_mup_pane_g6

0x285c,	// (0x000acdf1) main_mup_pane_g7_ParamLimits

0x285c,	// (0x000acdf1) main_mup_pane_g7

0x2874,	// (0x000ace09) main_mup_pane_g8_ParamLimits

0x2874,	// (0x000ace09) main_mup_pane_g8

0x288c,	// (0x000ace21) main_mup_pane_g9_ParamLimits

0x288c,	// (0x000ace21) main_mup_pane_g9

0x28a6,	// (0x000ace3b) main_mup_pane_g10_ParamLimits

0x28a6,	// (0x000ace3b) main_mup_pane_g10

0x28c0,	// (0x000ace55) main_mup_pane_g11_ParamLimits

0x28c0,	// (0x000ace55) main_mup_pane_g11

0x28d4,	// (0x000ace69) main_mup_pane_g12_ParamLimits

0x28d4,	// (0x000ace69) main_mup_pane_g12

0x28ea,	// (0x000ace7f) main_mup_pane_g13_ParamLimits

0x28ea,	// (0x000ace7f) main_mup_pane_g13

0x000c,

0xf41a,	// (0x000b99af) main_mup_pane_g_ParamLimits

0xf41a,	// (0x000b99af) main_mup_pane_g

0x28fe,	// (0x000ace93) main_mup_pane_t1_ParamLimits

0x28fe,	// (0x000ace93) main_mup_pane_t1

0x2918,	// (0x000acead) main_mup_pane_t2_ParamLimits

0x2918,	// (0x000acead) main_mup_pane_t2

0x2930,	// (0x000acec5) main_mup_pane_t3_ParamLimits

0x2930,	// (0x000acec5) main_mup_pane_t3

0x2948,	// (0x000acedd) main_mup_pane_t4_ParamLimits

0x2948,	// (0x000acedd) main_mup_pane_t4

0x2966,	// (0x000acefb) main_mup_pane_t5_ParamLimits

0x2966,	// (0x000acefb) main_mup_pane_t5

0x297b,	// (0x000acf10) main_mup_pane_t6_ParamLimits

0x297b,	// (0x000acf10) main_mup_pane_t6

0x0005,

0xf435,	// (0x000b99ca) main_mup_pane_t_ParamLimits

0xf435,	// (0x000b99ca) main_mup_pane_t

0x298d,	// (0x000acf22) mup_progress_pane_ParamLimits

0x298d,	// (0x000acf22) mup_progress_pane

0x2999,	// (0x000acf2e) mup_visualizer_pane_ParamLimits

0x2999,	// (0x000acf2e) mup_visualizer_pane

0x29cd,	// (0x000acf62) mup_volume_pane_ParamLimits

0x29cd,	// (0x000acf62) mup_volume_pane

0xb409,	// (0x000b599e) mup_visualizer_pane_g1_ParamLimits

0xb409,	// (0x000b599e) mup_visualizer_pane_g1

0xb409,	// (0x000b599e) mup_visualizer_pane_g2_ParamLimits

0xb409,	// (0x000b599e) mup_visualizer_pane_g2

0xb18d,	// (0x000b5722) mup_visualizer_pane_g3_ParamLimits

0xb18d,	// (0x000b5722) mup_visualizer_pane_g3

0x0002,

0xf442,	// (0x000b99d7) mup_visualizer_pane_g_ParamLimits

0xf442,	// (0x000b99d7) mup_visualizer_pane_g

0xa246,	// (0x000b47db) mup_volume_pane_g1

0xb41f,	// (0x000b59b4) mup_volume_pane_g2

0x0001,

0xf449,	// (0x000b99de) mup_volume_pane_g

0xa246,	// (0x000b47db) mup_progress_pane_g1

0xb428,	// (0x000b59bd) mup_progress_pane_g2

0xb431,	// (0x000b59c6) mup_progress_pane_g3

0x0002,

0xf44e,	// (0x000b99e3) mup_progress_pane_g

0x9eb2,	// (0x000b4447) bg_popup_window_pane_cp05

0xb43a,	// (0x000b59cf) heading_pane_cp02_ParamLimits

0xb43a,	// (0x000b59cf) heading_pane_cp02

0xb454,	// (0x000b59e9) list_popup_blid_pane

0xb45c,	// (0x000b59f1) list_blid_sat_info_pane_ParamLimits

0xb45c,	// (0x000b59f1) list_blid_sat_info_pane

0xb46f,	// (0x000b5a04) list_blid_sat_info_pane_g1

0xb477,	// (0x000b5a0c) list_blid_sat_info_pane_t1

0x2ae3,	// (0x000ad078) mup_equalizer_pane_ParamLimits

0x2ae3,	// (0x000ad078) mup_equalizer_pane

0x2afc,	// (0x000ad091) mup_equalizer_pane_cp1_ParamLimits

0x2afc,	// (0x000ad091) mup_equalizer_pane_cp1

0x2b19,	// (0x000ad0ae) mup_equalizer_pane_cp2_ParamLimits

0x2b19,	// (0x000ad0ae) mup_equalizer_pane_cp2

0x2b36,	// (0x000ad0cb) mup_equalizer_pane_cp3_ParamLimits

0x2b36,	// (0x000ad0cb) mup_equalizer_pane_cp3

0x2b57,	// (0x000ad0ec) mup_equalizer_pane_cp4_ParamLimits

0x2b57,	// (0x000ad0ec) mup_equalizer_pane_cp4

0x2b78,	// (0x000ad10d) mup_equalizer_pane_cp5

0x2b8c,	// (0x000ad121) mup_equalizer_pane_cp6

0x2ba0,	// (0x000ad135) mup_equalizer_pane_cp7

0xc673,	// (0x000b6c08) bg_popup_call_poc_act_pane_g9

0xc67b,	// (0x000b6c10) bg_popup_call_poc_act_pane_g10

0xc683,	// (0x000b6c18) bg_popup_call_poc_act_pane_g11

0x000a,

0xa10d,	// (0x000b46a2) mup_scale_pane

0xa246,	// (0x000b47db) mup_scale_pane_g1

0xb485,	// (0x000b5a1a) mup_scale_pane_g2

0x0006,

0xf46a,	// (0x000b99ff) mup_scale_pane_g

0xb4a9,	// (0x000b5a3e) msg_data_pane

0xb4b1,	// (0x000b5a46) scroll_pane_cp017

0x2bc6,	// (0x000ad15b) bg_list_pane_cp04_ParamLimits

0x2bc6,	// (0x000ad15b) bg_list_pane_cp04

0xb4b9,	// (0x000b5a4e) msg_data_pane_g1

0x2bea,	// (0x000ad17f) msg_data_pane_g2

0x2bf2,	// (0x000ad187) msg_data_pane_g3

0x2bfa,	// (0x000ad18f) msg_data_pane_g4

0x2c02,	// (0x000ad197) msg_data_pane_g5

0x2c0a,	// (0x000ad19f) msg_data_pane_g6

0x2c12,	// (0x000ad1a7) msg_data_pane_g7

0x0006,

0xf479,	// (0x000b9a0e) msg_data_pane_g

0x2c1a,	// (0x000ad1af) msg_text_pane_ParamLimits

0x2c1a,	// (0x000ad1af) msg_text_pane

0x2c40,	// (0x000ad1d5) qrid_highlight_pane_cp011_ParamLimits

0x2c40,	// (0x000ad1d5) qrid_highlight_pane_cp011

0x9eb2,	// (0x000b4447) msg_body_pane

0x9eb2,	// (0x000b4447) msg_header_pane

0xb4ca,	// (0x000b5a5f) input_focus_pane_cp07

0x2c64,	// (0x000ad1f9) msg_header_pane_t1_ParamLimits

0x2c64,	// (0x000ad1f9) msg_header_pane_t1

0x2c76,	// (0x000ad20b) msg_header_pane_t2_ParamLimits

0x2c76,	// (0x000ad20b) msg_header_pane_t2

0x0001,

0xf48d,	// (0x000b9a22) msg_header_pane_t_ParamLimits

0xf48d,	// (0x000b9a22) msg_header_pane_t

0xb4df,	// (0x000b5a74) msg_body_pane_g1

0x2c88,	// (0x000ad21d) msg_body_pane_t1_ParamLimits

0x2c88,	// (0x000ad21d) msg_body_pane_t1

0x2cb9,	// (0x000ad24e) msg_body_pane_t2_ParamLimits

0x2cb9,	// (0x000ad24e) msg_body_pane_t2

0x2ccb,	// (0x000ad260) msg_body_pane_t3_ParamLimits

0x2ccb,	// (0x000ad260) msg_body_pane_t3

0x0002,

0xf492,	// (0x000b9a27) msg_body_pane_t_ParamLimits

0xf492,	// (0x000b9a27) msg_body_pane_t

0x2d17,	// (0x000ad2ac) main_viewer_pane_g1_ParamLimits

0x2d17,	// (0x000ad2ac) main_viewer_pane_g1

0x2d25,	// (0x000ad2ba) main_viewer_pane_g2_ParamLimits

0x2d25,	// (0x000ad2ba) main_viewer_pane_g2

0x2d33,	// (0x000ad2c8) main_viewer_pane_g3_ParamLimits

0x2d33,	// (0x000ad2c8) main_viewer_pane_g3

0x2d42,	// (0x000ad2d7) main_viewer_pane_g4_ParamLimits

0x2d42,	// (0x000ad2d7) main_viewer_pane_g4

0x98ff,	// (0x000b3e94) main_viewer_pane_g5_ParamLimits

0x98ff,	// (0x000b3e94) main_viewer_pane_g5

0x98ff,	// (0x000b3e94) main_viewer_pane_g7_ParamLimits

0x98ff,	// (0x000b3e94) main_viewer_pane_g7

0xadf8,	// (0x000b538d) main_viewer_pane_g8_ParamLimits

0xadf8,	// (0x000b538d) main_viewer_pane_g8

0x0007,

0xf4a2,	// (0x000b9a37) main_viewer_pane_g_ParamLimits

0xf4a2,	// (0x000b9a37) main_viewer_pane_g

0xb4e7,	// (0x000b5a7c) viewer_content_pane_ParamLimits

0xb4e7,	// (0x000b5a7c) viewer_content_pane

0x2d7e,	// (0x000ad313) main_postcard_pane_g1_ParamLimits

0x2d7e,	// (0x000ad313) main_postcard_pane_g1

0x2d94,	// (0x000ad329) main_postcard_pane_g2_ParamLimits

0x2d94,	// (0x000ad329) main_postcard_pane_g2

0x2daa,	// (0x000ad33f) main_postcard_pane_g3_ParamLimits

0x2daa,	// (0x000ad33f) main_postcard_pane_g3

0x0005,

0xf4b3,	// (0x000b9a48) main_postcard_pane_g_ParamLimits

0xf4b3,	// (0x000b9a48) main_postcard_pane_g

0x2dc1,	// (0x000ad356) main_postcard_pane_g4

0xc855,	// (0x000b6dea) smil_status_volume_pane_g2

0x2e04,	// (0x000ad399) postcard_pane_ParamLimits

0x2e04,	// (0x000ad399) postcard_pane

0xb4f5,	// (0x000b5a8a) postcard_pane_g1_ParamLimits

0xb4f5,	// (0x000b5a8a) postcard_pane_g1

0x2e46,	// (0x000ad3db) postcard_pane_g2_ParamLimits

0x2e46,	// (0x000ad3db) postcard_pane_g2

0x2e52,	// (0x000ad3e7) postcard_pane_g3_ParamLimits

0x2e52,	// (0x000ad3e7) postcard_pane_g3

0xb503,	// (0x000b5a98) postcard_pane_g4_ParamLimits

0xb503,	// (0x000b5a98) postcard_pane_g4

0x2e5e,	// (0x000ad3f3) postcard_pane_g5_ParamLimits

0x2e5e,	// (0x000ad3f3) postcard_pane_g5

0x2e73,	// (0x000ad408) postcard_pane_g6_ParamLimits

0x2e73,	// (0x000ad408) postcard_pane_g6

0xb4f5,	// (0x000b5a8a) postcard_pane_g7_ParamLimits

0xb4f5,	// (0x000b5a8a) postcard_pane_g7

0x0006,

0xf4c0,	// (0x000b9a55) postcard_pane_g_ParamLimits

0xf4c0,	// (0x000b9a55) postcard_pane_g

0x2e87,	// (0x000ad41c) main_mp2_pane_g1_ParamLimits

0x2e87,	// (0x000ad41c) main_mp2_pane_g1

0x2e93,	// (0x000ad428) main_mp2_pane_g2_ParamLimits

0x2e93,	// (0x000ad428) main_mp2_pane_g2

0x2e9f,	// (0x000ad434) main_mp2_pane_g3_ParamLimits

0x2e9f,	// (0x000ad434) main_mp2_pane_g3

0x0002,

0xf4cf,	// (0x000b9a64) main_mp2_pane_g_ParamLimits

0xf4cf,	// (0x000b9a64) main_mp2_pane_g

0x2eab,	// (0x000ad440) main_mp2_pane_t1_ParamLimits

0x2eab,	// (0x000ad440) main_mp2_pane_t1

0x2ec0,	// (0x000ad455) main_mp2_pane_t2_ParamLimits

0x2ec0,	// (0x000ad455) main_mp2_pane_t2

0x2ed2,	// (0x000ad467) main_mp2_pane_t3_ParamLimits

0x2ed2,	// (0x000ad467) main_mp2_pane_t3

0x0002,

0xf4d6,	// (0x000b9a6b) main_mp2_pane_t_ParamLimits

0xf4d6,	// (0x000b9a6b) main_mp2_pane_t

0xb511,	// (0x000b5aa6) pec_content_pane_ParamLimits

0xb511,	// (0x000b5aa6) pec_content_pane

0xaa7f,	// (0x000b5014) scroll_pane_cp015

0xb523,	// (0x000b5ab8) pec_attribute_pane_ParamLimits

0xb523,	// (0x000b5ab8) pec_attribute_pane

0x2ee4,	// (0x000ad479) pec_content_pane_g1_ParamLimits

0x2ee4,	// (0x000ad479) pec_content_pane_g1

0xb533,	// (0x000b5ac8) pec_content_pane_t1_ParamLimits

0xb533,	// (0x000b5ac8) pec_content_pane_t1

0xb545,	// (0x000b5ada) pec_content_pane_t2_ParamLimits

0xb545,	// (0x000b5ada) pec_content_pane_t2

0x0001,

0xf4dd,	// (0x000b9a72) pec_content_pane_t_ParamLimits

0xf4dd,	// (0x000b9a72) pec_content_pane_t

0x2ef0,	// (0x000ad485) list_single_graphic_pane_cp01_ParamLimits

0x2ef0,	// (0x000ad485) list_single_graphic_pane_cp01

0xa10d,	// (0x000b46a2) bg_popup_sub_pane_cp04

0xb557,	// (0x000b5aec) popup_mup_playback_window_g1

0xb563,	// (0x000b5af8) popup_mup_playback_window_t1

0xb578,	// (0x000b5b0d) popup_mup_playback_window_t2

0x0001,

0xf4e2,	// (0x000b9a77) popup_mup_playback_window_t

0xb5af,	// (0x000b5b44) main_image_pane_g1_ParamLimits

0xb5af,	// (0x000b5b44) main_image_pane_g1

0xb63d,	// (0x000b5bd2) scroll_pane_cp018_ParamLimits

0xb63d,	// (0x000b5bd2) scroll_pane_cp018

0xb655,	// (0x000b5bea) scroll_pane_cp016_ParamLimits

0xb655,	// (0x000b5bea) scroll_pane_cp016

0x2fbf,	// (0x000ad554) smil2_image_pane_ParamLimits

0x2fbf,	// (0x000ad554) smil2_image_pane

0x2ff3,	// (0x000ad588) smil2_root_pane_ParamLimits

0x2ff3,	// (0x000ad588) smil2_root_pane

0x302b,	// (0x000ad5c0) smil2_text_pane_ParamLimits

0x302b,	// (0x000ad5c0) smil2_text_pane

0x9eb2,	// (0x000b4447) bg_list_pane_cp06

0xb691,	// (0x000b5c26) grid_radio_pane

0x9eb2,	// (0x000b4447) bg_popup_window_pane_cp06

0xb699,	// (0x000b5c2e) main_fmradio_pane_t1

0xafd0,	// (0x000b5565) heading_pane_cp04

0xb6a7,	// (0x000b5c3c) main_fmradio_pane_t2

0xc68b,	// (0x000b6c20) popup_cale_lunar_info_window_g1

0xb6b5,	// (0x000b5c4a) main_fmradio_pane_t3

0xc693,	// (0x000b6c28) popup_cale_lunar_info_window_g2

0xb6c3,	// (0x000b5c58) main_fmradio_pane_t4

0x0001,

0xb6d1,	// (0x000b5c66) main_fmradio_pane_t5

0x0004,

0xf5bd,	// (0x000b9b52) popup_cale_lunar_info_window_g

0xf4f7,	// (0x000b9a8c) main_fmradio_pane_t

0xb6df,	// (0x000b5c74) wait_bar_pane_cp03

0xb6e7,	// (0x000b5c7c) cell_fmradio_pane_ParamLimits

0xb6e7,	// (0x000b5c7c) cell_fmradio_pane

0xb4f5,	// (0x000b5a8a) cell_fmradio_pane_g1_ParamLimits

0xb4f5,	// (0x000b5a8a) cell_fmradio_pane_g1

0x9eb2,	// (0x000b4447) grid_highlight_pane_cp011

0xb6fa,	// (0x000b5c8f) poc_content_pane_ParamLimits

0xb6fa,	// (0x000b5c8f) poc_content_pane

0xb70c,	// (0x000b5ca1) scroll_pane_cp019

0x30ab,	// (0x000ad640) popup_call_poc_act_window_ParamLimits

0x30ab,	// (0x000ad640) popup_call_poc_act_window

0x30cf,	// (0x000ad664) popup_call_poc_inact_window_ParamLimits

0x30cf,	// (0x000ad664) popup_call_poc_inact_window

0xf594,	// (0x000b9b29) bg_popup_call_poc_act_pane_g

0xc603,	// (0x000b6b98) bg_popup_call_poc_inact_pane_g1

0xc60b,	// (0x000b6ba0) bg_popup_call_poc_inact_pane_g2

0xb714,	// (0x000b5ca9) popup_call_poc_act_window_g2

0xc613,	// (0x000b6ba8) bg_popup_call_poc_inact_pane_g3

0xc61b,	// (0x000b6bb0) bg_popup_call_poc_inact_pane_g4

0xc623,	// (0x000b6bb8) bg_popup_call_poc_inact_pane_g5

0xb71c,	// (0x000b5cb1) popup_call_poc_act_window_t1_ParamLimits

0xb71c,	// (0x000b5cb1) popup_call_poc_act_window_t1

0xb744,	// (0x000b5cd9) popup_call_poc_act_window_t2_ParamLimits

0xb744,	// (0x000b5cd9) popup_call_poc_act_window_t2

0xb76c,	// (0x000b5d01) popup_call_poc_act_window_t3_ParamLimits

0xb76c,	// (0x000b5d01) popup_call_poc_act_window_t3

0xb794,	// (0x000b5d29) popup_call_poc_act_window_t4_ParamLimits

0xb794,	// (0x000b5d29) popup_call_poc_act_window_t4

0x0003,

0xf502,	// (0x000b9a97) popup_call_poc_act_window_t_ParamLimits

0xf502,	// (0x000b9a97) popup_call_poc_act_window_t

0xc62b,	// (0x000b6bc0) bg_popup_call_poc_inact_pane_g6

0xc633,	// (0x000b6bc8) bg_popup_call_poc_inact_pane_g7

0xc63b,	// (0x000b6bd0) bg_popup_call_poc_inact_pane_g8

0xb7a6,	// (0x000b5d3b) popup_call_poc_inact_window_g2

0xc643,	// (0x000b6bd8) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf581,	// (0x000b9b16) bg_popup_call_poc_inact_pane_g

0xb7ae,	// (0x000b5d43) popup_call_poc_inact_window_t1_ParamLimits

0xb7ae,	// (0x000b5d43) popup_call_poc_inact_window_t1

0xb7c3,	// (0x000b5d58) popup_call_poc_inact_window_t2_ParamLimits

0xb7c3,	// (0x000b5d58) popup_call_poc_inact_window_t2

0xb7d8,	// (0x000b5d6d) popup_call_poc_inact_window_t3_ParamLimits

0xb7d8,	// (0x000b5d6d) popup_call_poc_inact_window_t3

0x0002,

0xf50b,	// (0x000b9aa0) popup_call_poc_inact_window_t_ParamLimits

0xf50b,	// (0x000b9aa0) popup_call_poc_inact_window_t

0xc7c8,	// (0x000b6d5d) context_pane_ParamLimits

0x3902,	// (0x000ade97) signal_pane_ParamLimits

0xa3cd,	// (0x000b4962) main_call2_pane

0x994a,	// (0x000b3edf) popup_phob_thumbnail2_window_ParamLimits

0x994a,	// (0x000b3edf) popup_phob_thumbnail2_window

0x98e7,	// (0x000b3e7c) aid_hotspot_pointer_arrow_pane

0x98ef,	// (0x000b3e84) aid_hotspot_pointer_hand_pane

0x341a,	// (0x000ad9af) phob_pre_status_pane_g5

0x0efd,	// (0x000ab492) cams_zoom_pane_ParamLimits

0x0f0c,	// (0x000ab4a1) image_vga_pane_ParamLimits

0x0f26,	// (0x000ab4bb) main_camera_pane_g1_ParamLimits

0x0f38,	// (0x000ab4cd) main_camera_pane_g2_ParamLimits

0x0f48,	// (0x000ab4dd) main_camera_pane_g3_ParamLimits

0x0f5a,	// (0x000ab4ef) main_camera_pane_g4_ParamLimits

0x0f6c,	// (0x000ab501) main_camera_pane_g5_ParamLimits

0x0f7e,	// (0x000ab513) main_camera_pane_g6_ParamLimits

0x0f90,	// (0x000ab525) main_camera_pane_g7_ParamLimits

0xf20a,	// (0x000b979f) main_camera_pane_g_ParamLimits

0x0fa2,	// (0x000ab537) main_camera_pane_t1_ParamLimits

0x0fb8,	// (0x000ab54d) main_camera_pane_t2_ParamLimits

0xf21b,	// (0x000b97b0) main_camera_pane_t_ParamLimits

0xa10d,	// (0x000b46a2) bg_popup_preview_window_pane_cp01_ParamLimits

0xa10d,	// (0x000b46a2) bg_popup_preview_window_pane_cp01

0xb7ed,	// (0x000b5d82) popup_phob_thumbnail2_window_g1_ParamLimits

0xb7ed,	// (0x000b5d82) popup_phob_thumbnail2_window_g1

0x9eb2,	// (0x000b4447) call2_cli_visual_pane

0x3103,	// (0x000ad698) popup_call2_audio_conf_window_ParamLimits

0x3103,	// (0x000ad698) popup_call2_audio_conf_window

0x3123,	// (0x000ad6b8) popup_call2_audio_first_window_ParamLimits

0x3123,	// (0x000ad6b8) popup_call2_audio_first_window

0x31b9,	// (0x000ad74e) popup_call2_audio_in_window_ParamLimits

0x31b9,	// (0x000ad74e) popup_call2_audio_in_window

0x3201,	// (0x000ad796) popup_call2_audio_out_window_ParamLimits

0x3201,	// (0x000ad796) popup_call2_audio_out_window

0x326b,	// (0x000ad800) popup_call2_audio_second_window_ParamLimits

0x326b,	// (0x000ad800) popup_call2_audio_second_window

0x32d1,	// (0x000ad866) popup_call2_audio_wait_window_ParamLimits

0x32d1,	// (0x000ad866) popup_call2_audio_wait_window

0x9eb2,	// (0x000b4447) bg_popup_call2_act_pane_cp03

0xa0ef,	// (0x000b4684) list_conf_pane_cp

0xb7f9,	// (0x000b5d8e) popup_call2_audio_conf_window_t1

0xb807,	// (0x000b5d9c) list_single_graphic_popup_conf2_pane_ParamLimits

0xb807,	// (0x000b5d9c) list_single_graphic_popup_conf2_pane

0xb064,	// (0x000b55f9) list_highlight_pane_cp04

0xb81a,	// (0x000b5daf) list_single_graphic_popup_conf2_pane_g1

0xb075,	// (0x000b560a) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf512,	// (0x000b9aa7) list_single_graphic_popup_conf2_pane_g

0xb824,	// (0x000b5db9) list_single_graphic_popup_conf2_pane_t1

0xb832,	// (0x000b5dc7) bg_popup_call2_act_pane_cp01_ParamLimits

0xb832,	// (0x000b5dc7) bg_popup_call2_act_pane_cp01

0xb8bc,	// (0x000b5e51) call_type_pane_cp05_ParamLimits

0xb8bc,	// (0x000b5e51) call_type_pane_cp05

0xb910,	// (0x000b5ea5) popup_call2_audio_second_window_g1_ParamLimits

0xb910,	// (0x000b5ea5) popup_call2_audio_second_window_g1

0xb964,	// (0x000b5ef9) popup_call2_audio_second_window_g2_ParamLimits

0xb964,	// (0x000b5ef9) popup_call2_audio_second_window_g2

0x0002,

0xf517,	// (0x000b9aac) popup_call2_audio_second_window_g_ParamLimits

0xf517,	// (0x000b9aac) popup_call2_audio_second_window_g

0xb9c9,	// (0x000b5f5e) popup_call2_audio_second_window_t1_ParamLimits

0xb9c9,	// (0x000b5f5e) popup_call2_audio_second_window_t1

0xba84,	// (0x000b6019) popup_call2_audio_second_window_t2_ParamLimits

0xba84,	// (0x000b6019) popup_call2_audio_second_window_t2

0xbad7,	// (0x000b606c) popup_call2_audio_second_window_t3_ParamLimits

0xbad7,	// (0x000b606c) popup_call2_audio_second_window_t3

0x0003,

0xf51e,	// (0x000b9ab3) popup_call2_audio_second_window_t_ParamLimits

0xf51e,	// (0x000b9ab3) popup_call2_audio_second_window_t

0x9eb2,	// (0x000b4447) bg_popup_call2_in_pane_cp02

0x9ebc,	// (0x000b4451) call_type_pane_cp04

0x9ec4,	// (0x000b4459) popup_call2_audio_wait_window_g1

0x9ecc,	// (0x000b4461) popup_call2_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x000b968e) popup_call2_audio_wait_window_g

0x9ed4,	// (0x000b4469) popup_call2_audio_wait_window_t3

0xbbca,	// (0x000b615f) bg_popup_call2_act_pane_ParamLimits

0xbbca,	// (0x000b615f) bg_popup_call2_act_pane

0xbc8a,	// (0x000b621f) call_type_pane_cp03_ParamLimits

0xbc8a,	// (0x000b621f) call_type_pane_cp03

0xbcee,	// (0x000b6283) popup_call2_audio_first_window_g1_ParamLimits

0xbcee,	// (0x000b6283) popup_call2_audio_first_window_g1

0xbd5e,	// (0x000b62f3) popup_call2_audio_first_window_g2_ParamLimits

0xbd5e,	// (0x000b62f3) popup_call2_audio_first_window_g2

0xb409,	// (0x000b599e) popup_call2_audio_first_window_g3_ParamLimits

0xb409,	// (0x000b599e) popup_call2_audio_first_window_g3

0x0004,

0xf527,	// (0x000b9abc) popup_call2_audio_first_window_g_ParamLimits

0xf527,	// (0x000b9abc) popup_call2_audio_first_window_g

0xbe3c,	// (0x000b63d1) popup_call2_audio_first_window_t1_ParamLimits

0xbe3c,	// (0x000b63d1) popup_call2_audio_first_window_t1

0xbf3f,	// (0x000b64d4) popup_call2_audio_first_window_t4_ParamLimits

0xbf3f,	// (0x000b64d4) popup_call2_audio_first_window_t4

0xc022,	// (0x000b65b7) popup_call2_audio_first_window_t5_ParamLimits

0xc022,	// (0x000b65b7) popup_call2_audio_first_window_t5

0x0003,

0xf532,	// (0x000b9ac7) popup_call2_audio_first_window_t_ParamLimits

0xf532,	// (0x000b9ac7) popup_call2_audio_first_window_t

0xa105,	// (0x000b469a) bg_popup_call2_act_pane_g1

0xc69b,	// (0x000b6c30) popup_cale_lunar_info_window_t1

0xc6a9,	// (0x000b6c3e) popup_cale_lunar_info_window_t2

0xc6b7,	// (0x000b6c4c) popup_cale_lunar_info_window_t3

0x9eb2,	// (0x000b4447) bg_popup_call2_bubble_pane

0xc123,	// (0x000b66b8) bg_popup_call2_in_pane_cp01_ParamLimits

0xc123,	// (0x000b66b8) bg_popup_call2_in_pane_cp01

0x946e,	// (0x000b3a03) call_type_pane_cp02

0xc16b,	// (0x000b6700) popup_call2_audio_out_window_g1_ParamLimits

0xc16b,	// (0x000b6700) popup_call2_audio_out_window_g1

0xc197,	// (0x000b672c) popup_call2_audio_out_window_g2_ParamLimits

0xc197,	// (0x000b672c) popup_call2_audio_out_window_g2

0xc1bf,	// (0x000b6754) popup_call2_audio_out_window_g3_ParamLimits

0xc1bf,	// (0x000b6754) popup_call2_audio_out_window_g3

0x0003,

0xf53b,	// (0x000b9ad0) popup_call2_audio_out_window_g_ParamLimits

0xf53b,	// (0x000b9ad0) popup_call2_audio_out_window_g

0xc206,	// (0x000b679b) popup_call2_audio_out_window_t1_ParamLimits

0xc206,	// (0x000b679b) popup_call2_audio_out_window_t1

0xc265,	// (0x000b67fa) popup_call2_audio_out_window_t2_ParamLimits

0xc265,	// (0x000b67fa) popup_call2_audio_out_window_t2

0xc2b9,	// (0x000b684e) popup_call2_audio_out_window_t3_ParamLimits

0xc2b9,	// (0x000b684e) popup_call2_audio_out_window_t3

0xc2cf,	// (0x000b6864) popup_call2_audio_out_window_t4_ParamLimits

0xc2cf,	// (0x000b6864) popup_call2_audio_out_window_t4

0xc2e5,	// (0x000b687a) popup_call2_audio_out_window_t5_ParamLimits

0xc2e5,	// (0x000b687a) popup_call2_audio_out_window_t5

0x0005,

0xf544,	// (0x000b9ad9) popup_call2_audio_out_window_t_ParamLimits

0xf544,	// (0x000b9ad9) popup_call2_audio_out_window_t

0xc349,	// (0x000b68de) bg_popup_call2_in_pane_ParamLimits

0xc349,	// (0x000b68de) bg_popup_call2_in_pane

0xc3a5,	// (0x000b693a) popup_call2_audio_in_window_g1_ParamLimits

0xc3a5,	// (0x000b693a) popup_call2_audio_in_window_g1

0xc3dd,	// (0x000b6972) popup_call2_audio_in_window_g2_ParamLimits

0xc3dd,	// (0x000b6972) popup_call2_audio_in_window_g2

0xc415,	// (0x000b69aa) popup_call2_audio_in_window_g3_ParamLimits

0xc415,	// (0x000b69aa) popup_call2_audio_in_window_g3

0x0003,

0xf551,	// (0x000b9ae6) popup_call2_audio_in_window_g_ParamLimits

0xf551,	// (0x000b9ae6) popup_call2_audio_in_window_g

0xc46d,	// (0x000b6a02) popup_call2_audio_in_window_t1_ParamLimits

0xc46d,	// (0x000b6a02) popup_call2_audio_in_window_t1

0xc4ed,	// (0x000b6a82) popup_call2_audio_in_window_t2_ParamLimits

0xc4ed,	// (0x000b6a82) popup_call2_audio_in_window_t2

0xc56d,	// (0x000b6b02) popup_call2_audio_in_window_t3_ParamLimits

0xc56d,	// (0x000b6b02) popup_call2_audio_in_window_t3

0xc587,	// (0x000b6b1c) popup_call2_audio_in_window_t4_ParamLimits

0xc587,	// (0x000b6b1c) popup_call2_audio_in_window_t4

0xc599,	// (0x000b6b2e) popup_call2_audio_in_window_t5_ParamLimits

0xc599,	// (0x000b6b2e) popup_call2_audio_in_window_t5

0xc5ae,	// (0x000b6b43) popup_call2_audio_in_window_t6_ParamLimits

0xc5ae,	// (0x000b6b43) popup_call2_audio_in_window_t6

0x0005,

0xf55a,	// (0x000b9aef) popup_call2_audio_in_window_t_ParamLimits

0xf55a,	// (0x000b9aef) popup_call2_audio_in_window_t

0xa105,	// (0x000b469a) bg_popup_call2_in_pane_g1

0xc6c5,	// (0x000b6c5a) popup_cale_lunar_info_window_t4

0x0003,

0xf5c2,	// (0x000b9b57) popup_cale_lunar_info_window_t

0xa10d,	// (0x000b46a2) bg_popup_call2_rect_pane_ParamLimits

0xa10d,	// (0x000b46a2) bg_popup_call2_rect_pane

0x9eb2,	// (0x000b4447) call2_cli_visual_graphic_pane

0x9eb2,	// (0x000b4447) call2_cli_visual_text_pane

0x9971,	// (0x000b3f06) smil_status_volume_pane_g3

0x0002,

0xa246,	// (0x000b47db) call2_cli_visual_graphic_pane_g1

0xa246,	// (0x000b47db) call2_cli_visual_graphic_pane_g2

0xa246,	// (0x000b47db) call2_cli_visual_graphic_pane_g3

0x0002,

0xf567,	// (0x000b9afc) call2_cli_visual_graphic_pane_g

0xc5c3,	// (0x000b6b58) bg_popup_call2_rect_pane_g1

0xa2e4,	// (0x000b4879) bg_popup_call2_rect_pane_g2

0xc5cb,	// (0x000b6b60) bg_popup_call2_rect_pane_g3

0xc5d3,	// (0x000b6b68) bg_popup_call2_rect_pane_g4

0xc5db,	// (0x000b6b70) bg_popup_call2_rect_pane_g5

0xc5e3,	// (0x000b6b78) bg_popup_call2_rect_pane_g6

0xc5eb,	// (0x000b6b80) bg_popup_call2_rect_pane_g7

0xc5f3,	// (0x000b6b88) bg_popup_call2_rect_pane_g8

0xc5fb,	// (0x000b6b90) bg_popup_call2_rect_pane_g9

0x0008,

0xf56e,	// (0x000b9b03) bg_popup_call2_rect_pane_g

0xc603,	// (0x000b6b98) bg_popup_call2_bubble_pane_g1

0xc60b,	// (0x000b6ba0) bg_popup_call2_bubble_pane_g2

0xc613,	// (0x000b6ba8) bg_popup_call2_bubble_pane_g3

0xc61b,	// (0x000b6bb0) bg_popup_call2_bubble_pane_g4

0xc623,	// (0x000b6bb8) bg_popup_call2_bubble_pane_g5

0xc62b,	// (0x000b6bc0) bg_popup_call2_bubble_pane_g6

0xc633,	// (0x000b6bc8) bg_popup_call2_bubble_pane_g7

0xc63b,	// (0x000b6bd0) bg_popup_call2_bubble_pane_g8

0xc643,	// (0x000b6bd8) bg_popup_call2_bubble_pane_g9

0x0008,

0xf581,	// (0x000b9b16) bg_popup_call2_bubble_pane_g

0x083f,	// (0x000aadd4) aid_cale_week_size_cell_pane

0x0fd0,	// (0x000ab565) aid_cams_cif_uncrop_pane_ParamLimits

0x0fd0,	// (0x000ab565) aid_cams_cif_uncrop_pane

0x1185,	// (0x000ab71a) aid_cams_size_cell_ParamLimits

0x1185,	// (0x000ab71a) aid_cams_size_cell

0x1199,	// (0x000ab72e) grid_cams_pane_ParamLimits

0x11b3,	// (0x000ab748) linegrid_cams_pane_ParamLimits

0x13ae,	// (0x000ab943) call_video_pane_t1

0x13cc,	// (0x000ab961) call_video_pane_t2

0x0001,

0xf26e,	// (0x000b9803) call_video_pane_t

0x17fb,	// (0x000abd90) aid_cale_month_size_cell_pane_ParamLimits

0x17fb,	// (0x000abd90) aid_cale_month_size_cell_pane

0xf60b,	// (0x000b9ba0) smil_status_volume_pane_g

0x997e,	// (0x000b3f13) volume_smil_pane_ParamLimits

0x9311,	// (0x000b38a6) aid_popup2_width_pane

0x07a4,	// (0x000aad39) cell_qdial_pane_g4_ParamLimits

0x07a4,	// (0x000aad39) cell_qdial_pane_g4

0x26ef,	// (0x000acc84) aid_blid_cardinal_pane_ParamLimits

0x26fb,	// (0x000acc90) aid_blid_destination_pane_ParamLimits

0x26fb,	// (0x000acc90) aid_blid_destination_pane

0xa10d,	// (0x000b46a2) bg_popup_call_poc_act_pane_ParamLimits

0xa10d,	// (0x000b46a2) bg_popup_call_poc_act_pane

0xa10d,	// (0x000b46a2) bg_popup_call_poc_inact_pane_ParamLimits

0xa10d,	// (0x000b46a2) bg_popup_call_poc_inact_pane

0xc64b,	// (0x000b6be0) bg_popup_call_poc_act_pane_g1

0xc653,	// (0x000b6be8) bg_popup_call_poc_act_pane_g2

0xc65b,	// (0x000b6bf0) bg_popup_call_poc_act_pane_g3

0xc61b,	// (0x000b6bb0) bg_popup_call_poc_act_pane_g4

0xc623,	// (0x000b6bb8) bg_popup_call_poc_act_pane_g5

0xc663,	// (0x000b6bf8) bg_popup_call_poc_act_pane_g6

0xc633,	// (0x000b6bc8) bg_popup_call_poc_act_pane_g7

0xc66b,	// (0x000b6c00) bg_popup_call_poc_act_pane_g8

0x9eb2,	// (0x000b4447) main_usb_pane

0x9925,	// (0x000b3eba) popup_cale_lunar_info_window

0x1696,	// (0x000abc2b) im_reading_pane_t1_ParamLimits

0xa4ce,	// (0x000b4a63) list_im_pane_ParamLimits

0xa4df,	// (0x000b4a74) scroll_pane_cp07_ParamLimits

0x9eb2,	// (0x000b4447) grid_highlight_pane_cp012

0xa10d,	// (0x000b46a2) mup_scale_pane_ParamLimits

0xb4f5,	// (0x000b5a8a) main_usb_pane_g1_ParamLimits

0xb4f5,	// (0x000b5a8a) main_usb_pane_g1

0x332f,	// (0x000ad8c4) main_usb_pane_g2_ParamLimits

0x332f,	// (0x000ad8c4) main_usb_pane_g2

0x0001,

0xf5ab,	// (0x000b9b40) main_usb_pane_g_ParamLimits

0xf5ab,	// (0x000b9b40) main_usb_pane_g

0x3345,	// (0x000ad8da) main_usb_pane_t1_ParamLimits

0x3345,	// (0x000ad8da) main_usb_pane_t1

0x3357,	// (0x000ad8ec) main_usb_pane_t2_ParamLimits

0x3357,	// (0x000ad8ec) main_usb_pane_t2

0x3369,	// (0x000ad8fe) main_usb_pane_t3_ParamLimits

0x3369,	// (0x000ad8fe) main_usb_pane_t3

0x337b,	// (0x000ad910) main_usb_pane_t4_ParamLimits

0x337b,	// (0x000ad910) main_usb_pane_t4

0x338d,	// (0x000ad922) main_usb_pane_t5_ParamLimits

0x338d,	// (0x000ad922) main_usb_pane_t5

0x339f,	// (0x000ad934) main_usb_pane_t6_ParamLimits

0x339f,	// (0x000ad934) main_usb_pane_t6

0x0005,

0xf5b0,	// (0x000b9b45) main_usb_pane_t_ParamLimits

0x269c,	// (0x000acc31) aid_text_placing

0x26a5,	// (0x000acc3a) main_location2_pane_t1_ParamLimits

0x26b7,	// (0x000acc4c) main_location2_pane_t2_ParamLimits

0x26c9,	// (0x000acc5e) main_location2_pane_t3_ParamLimits

0x26dd,	// (0x000acc72) main_location2_pane_t4_ParamLimits

0x26dd,	// (0x000acc72) main_location2_pane_t4

0xf3cf,	// (0x000b9964) main_location2_pane_t_ParamLimits

0xa149,	// (0x000b46de) find_pinb_pane_g2_ParamLimits

0xa149,	// (0x000b46de) find_pinb_pane_g2

0x0001,

0xf11f,	// (0x000b96b4) find_pinb_pane_g_ParamLimits

0xf11f,	// (0x000b96b4) find_pinb_pane_g

0xa155,	// (0x000b46ea) find_pinb_pane_t1_ParamLimits

0xa167,	// (0x000b46fc) find_pinb_pane_t2_ParamLimits

0xf124,	// (0x000b96b9) find_pinb_pane_t_ParamLimits

0x9eb2,	// (0x000b4447) main_call3_pane

0x1cde,	// (0x000ac273) cale_month_day_heading_pane_t1_ParamLimits

0x1d64,	// (0x000ac2f9) cale_month_day_heading_pane_t2_ParamLimits

0x1df5,	// (0x000ac38a) cale_month_day_heading_pane_t3_ParamLimits

0x1e86,	// (0x000ac41b) cale_month_day_heading_pane_t4_ParamLimits

0x1f1f,	// (0x000ac4b4) cale_month_day_heading_pane_t5_ParamLimits

0x1fc0,	// (0x000ac555) cale_month_day_heading_pane_t6_ParamLimits

0x2061,	// (0x000ac5f6) cale_month_day_heading_pane_t7_ParamLimits

0xf2a6,	// (0x000b983b) cale_month_day_heading_pane_t_ParamLimits

0xac32,	// (0x000b51c7) smil_status_volume_pane

0x2e22,	// (0x000ad3b7) postcard_address_pane_ParamLimits

0x2e22,	// (0x000ad3b7) postcard_address_pane

0x2e34,	// (0x000ad3c9) postcard_message_pane_ParamLimits

0x2e34,	// (0x000ad3c9) postcard_message_pane

0x330b,	// (0x000ad8a0) call2_cli_visual_pane_t1_ParamLimits

0x330b,	// (0x000ad8a0) call2_cli_visual_pane_t1

0x3b31,	// (0x000ae0c6) postcard_message_pane_t1_ParamLimits

0x3b31,	// (0x000ae0c6) postcard_message_pane_t1

0x3b1a,	// (0x000ae0af) postcard_address_pane_t1_ParamLimits

0x3b1a,	// (0x000ae0af) postcard_address_pane_t1

0x3b06,	// (0x000ae09b) popup_call3_audio_in_window_ParamLimits

0x3b06,	// (0x000ae09b) popup_call3_audio_in_window

0x3993,	// (0x000adf28) bg_popup_call3_in_pane_ParamLimits

0x3993,	// (0x000adf28) bg_popup_call3_in_pane

0x3a07,	// (0x000adf9c) popup_call3_audio_in_window_g1_ParamLimits

0x3a07,	// (0x000adf9c) popup_call3_audio_in_window_g1

0x3a27,	// (0x000adfbc) popup_call3_audio_in_window_g2_ParamLimits

0x3a27,	// (0x000adfbc) popup_call3_audio_in_window_g2

0x3a47,	// (0x000adfdc) popup_call3_audio_in_window_g3_ParamLimits

0x3a47,	// (0x000adfdc) popup_call3_audio_in_window_g3

0x0003,

0xf612,	// (0x000b9ba7) popup_call3_audio_in_window_g_ParamLimits

0xf612,	// (0x000b9ba7) popup_call3_audio_in_window_g

0x3a78,	// (0x000ae00d) popup_call3_audio_in_window_t1_ParamLimits

0x3a78,	// (0x000ae00d) popup_call3_audio_in_window_t1

0x3ab6,	// (0x000ae04b) popup_call3_audio_in_window_t2_ParamLimits

0x3ab6,	// (0x000ae04b) popup_call3_audio_in_window_t2

0x3af4,	// (0x000ae089) popup_call3_audio_in_window_t3_ParamLimits

0x3af4,	// (0x000ae089) popup_call3_audio_in_window_t3

0x0002,

0xf61b,	// (0x000b9bb0) popup_call3_audio_in_window_t_ParamLimits

0xf61b,	// (0x000b9bb0) popup_call3_audio_in_window_t

0xa3cd,	// (0x000b4962) bg_popup_call3_rect_pane

0xc5c3,	// (0x000b6b58) bg_popup_call3_rect_pane_g1

0xa2e4,	// (0x000b4879) bg_popup_call3_rect_pane_g2

0xc5cb,	// (0x000b6b60) bg_popup_call3_rect_pane_g3

0xc5d3,	// (0x000b6b68) bg_popup_call3_rect_pane_g4

0xc5db,	// (0x000b6b70) bg_popup_call3_rect_pane_g5

0xc5e3,	// (0x000b6b78) bg_popup_call3_rect_pane_g6

0xc5eb,	// (0x000b6b80) bg_popup_call3_rect_pane_g7

0x29e3,	// (0x000acf78) mup_visualizer_osc_pane

0xb417,	// (0x000b59ac) mup_visualizer_spec_pane

0x39c3,	// (0x000adf58) call3_video_qcif_pane_ParamLimits

0x39c3,	// (0x000adf58) call3_video_qcif_pane

0x39d4,	// (0x000adf69) call3_video_qcif_uncrop_pane_ParamLimits

0x39d4,	// (0x000adf69) call3_video_qcif_uncrop_pane

0x39e2,	// (0x000adf77) call3_video_subqcif_pane_ParamLimits

0x39e2,	// (0x000adf77) call3_video_subqcif_pane

0x39f6,	// (0x000adf8b) call3_video_subqcif_uncrop_pane_ParamLimits

0x39f6,	// (0x000adf8b) call3_video_subqcif_uncrop_pane

0x3a67,	// (0x000adffc) popup_call3_audio_in_window_g4_ParamLimits

0x3a67,	// (0x000adffc) popup_call3_audio_in_window_g4

0x3982,	// (0x000adf17) mup_spec_half_pane

0x398b,	// (0x000adf20) mup_spec_half_pane_cp

0xc828,	// (0x000b6dbd) mup_osc_middle_pane

0xc831,	// (0x000b6dc6) mup_visualizer_osc_pane_g1

0x3962,	// (0x000adef7) mup_spec_bar_pane_ParamLimits

0x3962,	// (0x000adef7) mup_spec_bar_pane

0xc815,	// (0x000b6daa) mup_spec_bar_pane_g1

0xc81f,	// (0x000b6db4) mup_spec_bar_pane_g2

0x0001,

0xf606,	// (0x000b9b9b) mup_spec_bar_pane_g

0x083f,	// (0x000aadd4) aid_cale_week_size_cell_pane_ParamLimits

0x0859,	// (0x000aadee) bg_cale_heading_pane_ParamLimits

0xa32f,	// (0x000b48c4) bg_cale_pane_cp01_ParamLimits

0x0877,	// (0x000aae0c) cale_week_corner_pane_ParamLimits

0x0896,	// (0x000aae2b) cale_week_day_heading_pane_ParamLimits

0x08b9,	// (0x000aae4e) cale_week_scroll_pane_g1_ParamLimits

0x08d2,	// (0x000aae67) cale_week_scroll_pane_g2_ParamLimits

0x08ea,	// (0x000aae7f) cale_week_scroll_pane_g3_ParamLimits

0x0902,	// (0x000aae97) cale_week_scroll_pane_g4_ParamLimits

0x091a,	// (0x000aaeaf) cale_week_scroll_pane_g5_ParamLimits

0x0936,	// (0x000aaecb) cale_week_scroll_pane_g6_ParamLimits

0x0956,	// (0x000aaeeb) cale_week_scroll_pane_g7_ParamLimits

0x0976,	// (0x000aaf0b) cale_week_scroll_pane_g8_ParamLimits

0x099a,	// (0x000aaf2f) cale_week_scroll_pane_g9_ParamLimits

0x09b2,	// (0x000aaf47) cale_week_scroll_pane_g10_ParamLimits

0x09ca,	// (0x000aaf5f) cale_week_scroll_pane_g11_ParamLimits

0x09e2,	// (0x000aaf77) cale_week_scroll_pane_g12_ParamLimits

0x09fa,	// (0x000aaf8f) cale_week_scroll_pane_g13_ParamLimits

0x09fa,	// (0x000aaf8f) cale_week_scroll_pane_g14_ParamLimits

0x09fa,	// (0x000aaf8f) cale_week_scroll_pane_g15_ParamLimits

0xf1b0,	// (0x000b9745) cale_week_scroll_pane_g_ParamLimits

0x0a36,	// (0x000aafcb) cale_week_time_pane_ParamLimits

0x0a5a,	// (0x000aafef) grid_cale_week_pane_ParamLimits

0xa34c,	// (0x000b48e1) listscroll_cale_week_pane_t1

0xa35e,	// (0x000b48f3) scroll_pane_cp08_ParamLimits

0x185c,	// (0x000abdf1) cale_month_corner_pane_ParamLimits

0xac08,	// (0x000b519d) cale_month_pane_t1

0x1c7c,	// (0x000ac211) cale_month_week_pane_ParamLimits

0x250d,	// (0x000acaa2) popup_call_status_window_g1_ParamLimits

0x2521,	// (0x000acab6) popup_call_status_window_g2_ParamLimits

0x2535,	// (0x000acaca) popup_call_status_window_g3_ParamLimits

0xf356,	// (0x000b98eb) popup_call_status_window_g_ParamLimits

0xafc0,	// (0x000b5555) aid_call2_pane

0x2c56,	// (0x000ad1eb) msg_header_pane_g1

0x2e22,	// (0x000ad3b7) postcard_address2_pane_ParamLimits

0x2e22,	// (0x000ad3b7) postcard_address2_pane

0x2e34,	// (0x000ad3c9) postcard_message2_pane_ParamLimits

0x2e34,	// (0x000ad3c9) postcard_message2_pane

0x3910,	// (0x000adea5) message2_row_pane_ParamLimits

0x3910,	// (0x000adea5) message2_row_pane

0x392f,	// (0x000adec4) address2_row_pane_ParamLimits

0x392f,	// (0x000adec4) address2_row_pane

0xc7e3,	// (0x000b6d78) postcard_message2_row_pane_g1

0xc7eb,	// (0x000b6d80) postcard_message2_row_pane_t1

0xc7e3,	// (0x000b6d78) address2_row_pane_g1

0xc7eb,	// (0x000b6d80) address2_row_pane_t1

0x0e7a,	// (0x000ab40f) aid_size_cell_vorec

0x9eb2,	// (0x000b4447) main_rss_pane

0x3942,	// (0x000aded7) rss_list_single_pane_ParamLimits

0x3942,	// (0x000aded7) rss_list_single_pane

0xc7f9,	// (0x000b6d8e) rss_list_single_pane_t1

0xc807,	// (0x000b6d9c) rss_list_single_pane_t2

0x0001,

0xf601,	// (0x000b9b96) rss_list_single_pane_t

0x9eb2,	// (0x000b4447) main_camera2_pane

0x9eb2,	// (0x000b4447) main_video2_pane

0x3baa,	// (0x000ae13f) cams_zoom_pane_cp2_ParamLimits

0x3baa,	// (0x000ae13f) cams_zoom_pane_cp2

0x3bca,	// (0x000ae15f) image2_vga_pane_ParamLimits

0x3bca,	// (0x000ae15f) image2_vga_pane

0x3c1b,	// (0x000ae1b0) main_camera2_pane_g1_ParamLimits

0x3c1b,	// (0x000ae1b0) main_camera2_pane_g1

0x3c3b,	// (0x000ae1d0) main_camera2_pane_g2_ParamLimits

0x3c3b,	// (0x000ae1d0) main_camera2_pane_g2

0x3c5b,	// (0x000ae1f0) main_camera2_pane_g3_ParamLimits

0x3c5b,	// (0x000ae1f0) main_camera2_pane_g3

0x3c7b,	// (0x000ae210) main_camera2_pane_g4_ParamLimits

0x3c7b,	// (0x000ae210) main_camera2_pane_g4

0x3c9b,	// (0x000ae230) main_camera2_pane_g5_ParamLimits

0x3c9b,	// (0x000ae230) main_camera2_pane_g5

0x3cbb,	// (0x000ae250) main_camera2_pane_g6_ParamLimits

0x3cbb,	// (0x000ae250) main_camera2_pane_g6

0x3cdb,	// (0x000ae270) main_camera2_pane_g7_ParamLimits

0x3cdb,	// (0x000ae270) main_camera2_pane_g7

0x3cfb,	// (0x000ae290) main_camera2_pane_g8_ParamLimits

0x3cfb,	// (0x000ae290) main_camera2_pane_g8

0x0008,

0xf622,	// (0x000b9bb7) main_camera2_pane_g_ParamLimits

0xf622,	// (0x000b9bb7) main_camera2_pane_g

0x3d3b,	// (0x000ae2d0) main_camera2_pane_t1_ParamLimits

0x3d3b,	// (0x000ae2d0) main_camera2_pane_t1

0x3d70,	// (0x000ae305) main_camera2_pane_t2_ParamLimits

0x3d70,	// (0x000ae305) main_camera2_pane_t2

0x3d96,	// (0x000ae32b) main_camera2_pane_t3_ParamLimits

0x3d96,	// (0x000ae32b) main_camera2_pane_t3

0x3df4,	// (0x000ae389) main_camera2_pane_t4_ParamLimits

0x3df4,	// (0x000ae389) main_camera2_pane_t4

0x0006,

0xf635,	// (0x000b9bca) main_camera2_pane_t_ParamLimits

0xf635,	// (0x000b9bca) main_camera2_pane_t

0x3e86,	// (0x000ae41b) cams_zoom_pane_cp4_ParamLimits

0x3e86,	// (0x000ae41b) cams_zoom_pane_cp4

0x3e9c,	// (0x000ae431) image2_cif_pane_ParamLimits

0x3e9c,	// (0x000ae431) image2_cif_pane

0x3ec7,	// (0x000ae45c) image2_subqcif_pane_ParamLimits

0x3ec7,	// (0x000ae45c) image2_subqcif_pane

0x3ee1,	// (0x000ae476) main_video2_pane_g1_ParamLimits

0x3ee1,	// (0x000ae476) main_video2_pane_g1

0x3efb,	// (0x000ae490) main_video2_pane_g2_ParamLimits

0x3efb,	// (0x000ae490) main_video2_pane_g2

0x3f11,	// (0x000ae4a6) main_video2_pane_g3_ParamLimits

0x3f11,	// (0x000ae4a6) main_video2_pane_g3

0x3f27,	// (0x000ae4bc) main_video2_pane_g4_ParamLimits

0x3f27,	// (0x000ae4bc) main_video2_pane_g4

0x3f3d,	// (0x000ae4d2) main_video2_pane_g5_ParamLimits

0x3f3d,	// (0x000ae4d2) main_video2_pane_g5

0x3f53,	// (0x000ae4e8) main_video2_pane_g6_ParamLimits

0x3f53,	// (0x000ae4e8) main_video2_pane_g6

0x0005,

0xf644,	// (0x000b9bd9) main_video2_pane_g_ParamLimits

0xf644,	// (0x000b9bd9) main_video2_pane_g

0x3f6d,	// (0x000ae502) main_video2_pane_t1_ParamLimits

0x3f6d,	// (0x000ae502) main_video2_pane_t1

0x3f91,	// (0x000ae526) main_video2_pane_t2_ParamLimits

0x3f91,	// (0x000ae526) main_video2_pane_t2

0x3fdf,	// (0x000ae574) main_video2_pane_t3_ParamLimits

0x3fdf,	// (0x000ae574) main_video2_pane_t3

0x0002,

0xf651,	// (0x000b9be6) main_video2_pane_t_ParamLimits

0xf651,	// (0x000b9be6) main_video2_pane_t

0x345a,	// (0x000ad9ef) call_muted_g2

0x0001,

0xf5f3,	// (0x000b9b88) call_muted_g

0x9eb2,	// (0x000b4447) main_mup2_pane

0x4027,	// (0x000ae5bc) main_mup2_pane_g1_ParamLimits

0x4027,	// (0x000ae5bc) main_mup2_pane_g1

0x4033,	// (0x000ae5c8) main_mup2_pane_g2_ParamLimits

0x4033,	// (0x000ae5c8) main_mup2_pane_g2

0x99ec,	// (0x000b3f81) main_mup_pane_g13_cp1

0x99f4,	// (0x000b3f89) mup_volume_pane_cp1

0x404f,	// (0x000ae5e4) main_mup2_pane_g4_ParamLimits

0x404f,	// (0x000ae5e4) main_mup2_pane_g4

0x4061,	// (0x000ae5f6) main_mup2_pane_g5_ParamLimits

0x4061,	// (0x000ae5f6) main_mup2_pane_g5

0x4073,	// (0x000ae608) main_mup2_pane_g6_ParamLimits

0x4073,	// (0x000ae608) main_mup2_pane_g6

0x4085,	// (0x000ae61a) main_mup2_pane_g7_ParamLimits

0x4085,	// (0x000ae61a) main_mup2_pane_g7

0x0006,

0xf658,	// (0x000b9bed) main_mup2_pane_g_ParamLimits

0xf658,	// (0x000b9bed) main_mup2_pane_g

0x409d,	// (0x000ae632) main_mup2_pane_t1_ParamLimits

0x409d,	// (0x000ae632) main_mup2_pane_t1

0x40b3,	// (0x000ae648) main_mup2_pane_t2_ParamLimits

0x40b3,	// (0x000ae648) main_mup2_pane_t2

0x40c9,	// (0x000ae65e) main_mup2_pane_t3_ParamLimits

0x40c9,	// (0x000ae65e) main_mup2_pane_t3

0x40df,	// (0x000ae674) main_mup2_pane_t4_ParamLimits

0x40df,	// (0x000ae674) main_mup2_pane_t4

0x40f7,	// (0x000ae68c) main_mup2_pane_t5_ParamLimits

0x40f7,	// (0x000ae68c) main_mup2_pane_t5

0x410f,	// (0x000ae6a4) main_mup2_pane_t6_ParamLimits

0x410f,	// (0x000ae6a4) main_mup2_pane_t6

0x0005,

0xf667,	// (0x000b9bfc) main_mup2_pane_t_ParamLimits

0xf667,	// (0x000b9bfc) main_mup2_pane_t

0x413f,	// (0x000ae6d4) mup2_visualizer_pane_ParamLimits

0x413f,	// (0x000ae6d4) mup2_visualizer_pane

0x416d,	// (0x000ae702) mup_progress_pane_cp_ParamLimits

0x416d,	// (0x000ae702) mup_progress_pane_cp

0x99d7,	// (0x000b3f6c) mup_volume_pane_cp_ParamLimits

0x99d7,	// (0x000b3f6c) mup_volume_pane_cp

0x4181,	// (0x000ae716) mup2_visualizer_pane_g1_ParamLimits

0x4181,	// (0x000ae716) mup2_visualizer_pane_g1

0xc868,	// (0x000b6dfd) mup2_visualizer_pane_g2_ParamLimits

0xc868,	// (0x000b6dfd) mup2_visualizer_pane_g2

0x4198,	// (0x000ae72d) mup2_visualizer_pane_g3_ParamLimits

0x4198,	// (0x000ae72d) mup2_visualizer_pane_g3

0x0002,

0xf674,	// (0x000b9c09) mup2_visualizer_pane_g_ParamLimits

0xf674,	// (0x000b9c09) mup2_visualizer_pane_g

0xb689,	// (0x000b5c1e) aid_size_cell_fmradio

0x360c,	// (0x000adba1) aid_height_parent_landcape

0xaa66,	// (0x000b4ffb) wml_content_pane_cp

0xaa6e,	// (0x000b5003) wml_tabs_pane

0xaa77,	// (0x000b500c) popup_wml_miniature_window

0xaa7f,	// (0x000b5014) scroll_pane_cp021

0xaa93,	// (0x000b5028) wml_content_pane_comp8

0x9eb2,	// (0x000b4447) bg_popup_sub_pane_cp05

0xc886,	// (0x000b6e1b) popup_wml_miniature_window_g1

0xc88e,	// (0x000b6e23) wml_miniature_view_pane

0x41a4,	// (0x000ae739) aid_size_wml_view

0x41ac,	// (0x000ae741) wml_miniature_view_pane_g1

0x41b5,	// (0x000ae74a) wml_miniature_view_pane_g2

0x41be,	// (0x000ae753) wml_miniature_view_pane_g3

0x41c6,	// (0x000ae75b) wml_miniature_view_pane_g4

0x41ce,	// (0x000ae763) wml_miniature_view_pane_g5

0x41d6,	// (0x000ae76b) wml_miniature_view_pane_g6

0x41de,	// (0x000ae773) wml_miniature_view_pane_g7

0x41e6,	// (0x000ae77b) wml_miniature_view_pane_g8

0x0007,

0xf67b,	// (0x000b9c10) wml_miniature_view_pane_g

0xc896,	// (0x000b6e2b) background_graphic_ParamLimits

0xc896,	// (0x000b6e2b) background_graphic

0xc8a2,	// (0x000b6e37) wml_tabs_2_pane

0xc8ab,	// (0x000b6e40) wml_tabs_3_pane_ParamLimits

0xc8ab,	// (0x000b6e40) wml_tabs_3_pane

0xc8bd,	// (0x000b6e52) wml_tabs_4_pane_ParamLimits

0xc8bd,	// (0x000b6e52) wml_tabs_4_pane

0xc8d3,	// (0x000b6e68) wml_tabs_5_pane_ParamLimits

0xc8d3,	// (0x000b6e68) wml_tabs_5_pane

0xc8ed,	// (0x000b6e82) wml_tabs_pane_g2_ParamLimits

0xc8ed,	// (0x000b6e82) wml_tabs_pane_g2

0xc901,	// (0x000b6e96) wml_tabs_pane_g3_ParamLimits

0xc901,	// (0x000b6e96) wml_tabs_pane_g3

0x41ee,	// (0x000ae783) wml_tabs_2_active_pane_ParamLimits

0x41ee,	// (0x000ae783) wml_tabs_2_active_pane

0x4202,	// (0x000ae797) wml_tabs_2_passive_pane_ParamLimits

0x4202,	// (0x000ae797) wml_tabs_2_passive_pane

0x4216,	// (0x000ae7ab) wml_tabs_3_active_pane_cp_ParamLimits

0x4216,	// (0x000ae7ab) wml_tabs_3_active_pane_cp

0x422b,	// (0x000ae7c0) wml_tabs_3_passive_pane_ParamLimits

0x422b,	// (0x000ae7c0) wml_tabs_3_passive_pane

0x423e,	// (0x000ae7d3) wml_tabs_3_passive_pane_cp_ParamLimits

0x423e,	// (0x000ae7d3) wml_tabs_3_passive_pane_cp

0x4255,	// (0x000ae7ea) tabs_4_active_pane

0x425d,	// (0x000ae7f2) tabs_4_passive_pane

0x4267,	// (0x000ae7fc) tabs_4_passive_pane_cp

0x426f,	// (0x000ae804) tabs_4_passive_pane_cp2

0x3327,	// (0x000ad8bc) aid_height_text

0x29b5,	// (0x000acf4a) mup_volume_cont_pane_ParamLimits

0x29b5,	// (0x000acf4a) mup_volume_cont_pane

0x0450,	// (0x000aa9e5) aid_size_cell_pinb

0x045a,	// (0x000aa9ef) aid_size_list_pinb

0x4159,	// (0x000ae6ee) mup2_volume_cont_pane_ParamLimits

0x4159,	// (0x000ae6ee) mup2_volume_cont_pane

0x99c3,	// (0x000b3f58) mup2_volume_cont_pane_g1_ParamLimits

0x99c3,	// (0x000b3f58) mup2_volume_cont_pane_g1

0x0102,	// (0x000aa697) aid_size_cell_touch_ParamLimits

0x0102,	// (0x000aa697) aid_size_cell_touch

0x033f,	// (0x000aa8d4) touch_pane_ParamLimits

0x033f,	// (0x000aa8d4) touch_pane

0x9375,	// (0x000b390a) main_rss2_pane

0xc91e,	// (0x000b6eb3) listscroll_rss2_pane

0xc927,	// (0x000b6ebc) rss2_navigation_pane

0xc92f,	// (0x000b6ec4) list_rss2_pane

0xb10f,	// (0x000b56a4) scroll_pane_cp22

0xc937,	// (0x000b6ecc) rss2_navigation_pane_g1

0xc940,	// (0x000b6ed5) rss2_navigation_pane_g2

0xc948,	// (0x000b6edd) rss2_navigation_pane_g3

0x0002,

0xf68c,	// (0x000b9c21) rss2_navigation_pane_g

0xc950,	// (0x000b6ee5) rss2_navigation_pane_t1

0x4279,	// (0x000ae80e) rss2_list_single_pane_ParamLimits

0x4279,	// (0x000ae80e) rss2_list_single_pane

0xc95e,	// (0x000b6ef3) rss2_list_single_pane_t2

0xc96c,	// (0x000b6f01) rss2_list_single_pane_t3_ParamLimits

0xc96c,	// (0x000b6f01) rss2_list_single_pane_t3

0xc989,	// (0x000b6f1e) rss2_list_single_pane_t4

0x2323,	// (0x000ac8b8) smil_status_pane_g1

0x9367,	// (0x000b38fc) main_image2_pane_ParamLimits

0x9367,	// (0x000b38fc) main_image2_pane

0x3d1b,	// (0x000ae2b0) main_camera2_pane_g9_ParamLimits

0x3d1b,	// (0x000ae2b0) main_camera2_pane_g9

0x3e49,	// (0x000ae3de) main_camera2_pane_t5_ParamLimits

0x3e49,	// (0x000ae3de) main_camera2_pane_t5

0x9993,	// (0x000b3f28) main_camera2_pane_t6_ParamLimits

0x9993,	// (0x000b3f28) main_camera2_pane_t6

0x4290,	// (0x000ae825) main_image2_pane_g1_ParamLimits

0x4290,	// (0x000ae825) main_image2_pane_g1

0x3061,	// (0x000ad5f6) smil2_video_pane_ParamLimits

0x3061,	// (0x000ad5f6) smil2_video_pane

0x013a,	// (0x000aa6cf) aid_zoom_text_primary_cp

0x935d,	// (0x000b38f2) popup_preview_fixed_window

0xa4c6,	// (0x000b4a5b) im_reading_pane_g1

0x3b92,	// (0x000ae127) cams2_bc_adjust_pane_cp_ParamLimits

0x3b92,	// (0x000ae127) cams2_bc_adjust_pane_cp

0x3e78,	// (0x000ae40d) cams2_bc_adjust_pane_ParamLimits

0x3e78,	// (0x000ae40d) cams2_bc_adjust_pane

0xd935,	// (0x000b7eca) cams2_bc_adjust_pane_g1

0x99fc,	// (0x000b3f91) cams2_slider_pane

0x9a05,	// (0x000b3f9a) cams2_slider_pane_g1

0x9a0e,	// (0x000b3fa3) cams2_slider_pane_g2

0x0006,

0xf693,	// (0x000b9c28) cams2_slider_pane_g

0x0532,	// (0x000aaac7) calc_display_pane_ParamLimits

0x055a,	// (0x000aaaef) calc_paper_pane_ParamLimits

0x057d,	// (0x000aab12) grid_calc_pane_ParamLimits

0x98b8,	// (0x000b3e4d) popup_clock_digital_window_t1_ParamLimits

0xb626,	// (0x000b5bbb) main_image_pane_t1

0x0514,	// (0x000aaaa9) aid_size_cell_calc_ParamLimits

0x0514,	// (0x000aaaa9) aid_size_cell_calc

0x3664,	// (0x000adbf9) popup_blid_sat_info2_window_ParamLimits

0x3664,	// (0x000adbf9) popup_blid_sat_info2_window

0xc99f,	// (0x000b6f34) aid_size_cell_blid

0xc9a7,	// (0x000b6f3c) bg_popup_window_pane_cp07

0xc9ca,	// (0x000b6f5f) grid_popup_blid_pane

0xc9d4,	// (0x000b6f69) heading_pane_cp05_ParamLimits

0xc9d4,	// (0x000b6f69) heading_pane_cp05

0xca9e,	// (0x000b7033) cell_popup_blid_pane_ParamLimits

0xca9e,	// (0x000b7033) cell_popup_blid_pane

0xcac4,	// (0x000b7059) cell_popup_blid_pane_g1

0xcacc,	// (0x000b7061) cell_popup_blid_pane_t1

0x4129,	// (0x000ae6be) mup2_indicator_pane_ParamLimits

0x4129,	// (0x000ae6be) mup2_indicator_pane

0xa3cd,	// (0x000b4962) mup2_visualizer_osc_pane

0xc874,	// (0x000b6e09) mup2_visualizer_spec_pane_ParamLimits

0xc874,	// (0x000b6e09) mup2_visualizer_spec_pane

0x42a6,	// (0x000ae83b) mup2_spec_half_pane

0x42af,	// (0x000ae844) mup2_spec_half_pane_cp

0x42b7,	// (0x000ae84c) mup2_spec_bar_pane_ParamLimits

0x42b7,	// (0x000ae84c) mup2_spec_bar_pane

0xc815,	// (0x000b6daa) mup2_spec_bar_pane_g1

0xc81f,	// (0x000b6db4) mup2_spec_bar_pane_g2

0x0001,

0xf606,	// (0x000b9b9b) mup2_spec_bar_pane_g

0x42d7,	// (0x000ae86c) mup2_osc_middle_pane

0xc831,	// (0x000b6dc6) mup2_visualizer_osc_pane_g1

0x939f,	// (0x000b3934) popup_number_entry_window_t1_ParamLimits

0x93b2,	// (0x000b3947) popup_number_entry_window_t2_ParamLimits

0x93c4,	// (0x000b3959) popup_number_entry_window_t3_ParamLimits

0x0391,	// (0x000aa926) popup_number_entry_window_t5_ParamLimits

0x0391,	// (0x000aa926) popup_number_entry_window_t5

0xf0ca,	// (0x000b965f) popup_number_entry_window_t_ParamLimits

0x93d6,	// (0x000b396b) text_title_cp2_ParamLimits

0x98f7,	// (0x000b3e8c) aid_hotspot_pointer_text2_pane

0x9911,	// (0x000b3ea6) main_viewer_pane_g9_ParamLimits

0x9911,	// (0x000b3ea6) main_viewer_pane_g9

0xac08,	// (0x000b519d) cale_month_pane_t1_ParamLimits

0xac45,	// (0x000b51da) bg_cale_pane_ParamLimits

0xac5d,	// (0x000b51f2) list_cale_pane_ParamLimits

0xac6e,	// (0x000b5203) listscroll_cale_day_pane_t1

0xac80,	// (0x000b5215) scroll_pane_cp09_ParamLimits

0x29eb,	// (0x000acf80) main_mup_eq_pane_t1_ParamLimits

0x29eb,	// (0x000acf80) main_mup_eq_pane_t1

0x2a05,	// (0x000acf9a) main_mup_eq_pane_t2_ParamLimits

0x2a05,	// (0x000acf9a) main_mup_eq_pane_t2

0x2a1f,	// (0x000acfb4) main_mup_eq_pane_t3_ParamLimits

0x2a1f,	// (0x000acfb4) main_mup_eq_pane_t3

0x2a3b,	// (0x000acfd0) main_mup_eq_pane_t4_ParamLimits

0x2a3b,	// (0x000acfd0) main_mup_eq_pane_t4

0x2a57,	// (0x000acfec) main_mup_eq_pane_t5_ParamLimits

0x2a57,	// (0x000acfec) main_mup_eq_pane_t5

0x2a73,	// (0x000ad008) main_mup_eq_pane_t6_ParamLimits

0x2a73,	// (0x000ad008) main_mup_eq_pane_t6

0x2a87,	// (0x000ad01c) main_mup_eq_pane_t7_ParamLimits

0x2a87,	// (0x000ad01c) main_mup_eq_pane_t7

0x2a9b,	// (0x000ad030) main_mup_eq_pane_t8_ParamLimits

0x2a9b,	// (0x000ad030) main_mup_eq_pane_t8

0x2aaf,	// (0x000ad044) main_mup_eq_pane_t9_ParamLimits

0x2aaf,	// (0x000ad044) main_mup_eq_pane_t9

0x2ac9,	// (0x000ad05e) main_mup_eq_pane_t10_ParamLimits

0x2ac9,	// (0x000ad05e) main_mup_eq_pane_t10

0x0009,

0xf455,	// (0x000b99ea) main_mup_eq_pane_t_ParamLimits

0xf455,	// (0x000b99ea) main_mup_eq_pane_t

0x2b78,	// (0x000ad10d) mup_equalizer_pane_cp5_ParamLimits

0x2b8c,	// (0x000ad121) mup_equalizer_pane_cp6_ParamLimits

0x2ba0,	// (0x000ad135) mup_equalizer_pane_cp7_ParamLimits

0x9375,	// (0x000b390a) main_gallery_pane

0xc83a,	// (0x000b6dcf) smil2_volume_pane

0xc842,	// (0x000b6dd7) smil_status_volume_pane_g1_ParamLimits

0xc855,	// (0x000b6dea) smil_status_volume_pane_g2_ParamLimits

0x9971,	// (0x000b3f06) smil_status_volume_pane_g3_ParamLimits

0xf60b,	// (0x000b9ba0) smil_status_volume_pane_g_ParamLimits

0xc9a7,	// (0x000b6f3c) bg_popup_window_pane_cp07_ParamLimits

0xc9b5,	// (0x000b6f4a) blid_firmament_pane

0x42e0,	// (0x000ae875) aid_size_cell_gallery_ParamLimits

0x42e0,	// (0x000ae875) aid_size_cell_gallery

0x42f6,	// (0x000ae88b) grid_gallery_pane_ParamLimits

0x42f6,	// (0x000ae88b) grid_gallery_pane

0x430f,	// (0x000ae8a4) cell_gallery_pane_ParamLimits

0x430f,	// (0x000ae8a4) cell_gallery_pane

0xcada,	// (0x000b706f) bg_cell_gallery_focus_pane_ParamLimits

0xcada,	// (0x000b706f) bg_cell_gallery_focus_pane

0xcaec,	// (0x000b7081) cell_gallery_pane_g1_ParamLimits

0xcaec,	// (0x000b7081) cell_gallery_pane_g1

0x4358,	// (0x000ae8ed) cell_gallery_pane_g2_ParamLimits

0x4358,	// (0x000ae8ed) cell_gallery_pane_g2

0x4365,	// (0x000ae8fa) cell_gallery_pane_g3_ParamLimits

0x4365,	// (0x000ae8fa) cell_gallery_pane_g3

0xcaf8,	// (0x000b708d) cell_gallery_pane_g4_ParamLimits

0xcaf8,	// (0x000b708d) cell_gallery_pane_g4

0x0003,

0xf6b9,	// (0x000b9c4e) cell_gallery_pane_g_ParamLimits

0xf6b9,	// (0x000b9c4e) cell_gallery_pane_g

0xcb04,	// (0x000b7099) bg_cell_gallery_focus_pane_g1

0xcb0c,	// (0x000b70a1) bg_cell_gallery_focus_pane_g2

0xcb14,	// (0x000b70a9) bg_cell_gallery_focus_pane_g3

0xcb1c,	// (0x000b70b1) bg_cell_gallery_focus_pane_g4

0xcb24,	// (0x000b70b9) bg_cell_gallery_focus_pane_g5

0xcb2c,	// (0x000b70c1) bg_cell_gallery_focus_pane_g6

0xcb34,	// (0x000b70c9) bg_cell_gallery_focus_pane_g7

0xcb3c,	// (0x000b70d1) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6c2,	// (0x000b9c57) bg_cell_gallery_focus_pane_g

0xcb44,	// (0x000b70d9) aid_firma_cardinal

0xcb58,	// (0x000b70ed) blid_firmament_pane_t1

0xcb6f,	// (0x000b7104) blid_firmament_pane_t2

0xcb86,	// (0x000b711b) blid_firmament_pane_t3

0xcb9d,	// (0x000b7132) blid_firmament_pane_t4

0x0003,

0xf6d3,	// (0x000b9c68) blid_firmament_pane_t

0xcbb4,	// (0x000b7149) blid_sat_info_pane

0xcbc4,	// (0x000b7159) blid_sat_info_pane_g1

0xcbc4,	// (0x000b7159) blid_sat_info_pane_g2

0x0001,

0xf6dc,	// (0x000b9c71) blid_sat_info_pane_g

0xcbce,	// (0x000b7163) blid_sat_info_pane_t1

0xcbdc,	// (0x000b7171) smil2_volume_content_pane

0xcbe5,	// (0x000b717a) smil2_volume_pane_g1

0xa27b,	// (0x000b4810) smil2_volume_content_pane_g1

0xcbed,	// (0x000b7182) smil2_volume_content_pane_g2

0xcbf6,	// (0x000b718b) smil2_volume_content_pane_g3

0xcbff,	// (0x000b7194) smil2_volume_content_pane_g4

0xcc08,	// (0x000b719d) smil2_volume_content_pane_g5

0xcc11,	// (0x000b71a6) smil2_volume_content_pane_g6

0xcc1a,	// (0x000b71af) smil2_volume_content_pane_g7

0xcc23,	// (0x000b71b8) smil2_volume_content_pane_g8

0xcc2c,	// (0x000b71c1) smil2_volume_content_pane_g9

0xcc35,	// (0x000b71ca) smil2_volume_content_pane_g10

0x0009,

0xf6e1,	// (0x000b9c76) smil2_volume_content_pane_g

0x0b0e,	// (0x000ab0a3) cale_week_day_heading_pane_t1_ParamLimits

0x0b58,	// (0x000ab0ed) cale_week_day_heading_pane_t2_ParamLimits

0x0ba7,	// (0x000ab13c) cale_week_day_heading_pane_t3_ParamLimits

0x0bf6,	// (0x000ab18b) cale_week_day_heading_pane_t4_ParamLimits

0x0c45,	// (0x000ab1da) cale_week_day_heading_pane_t5_ParamLimits

0x0c9c,	// (0x000ab231) cale_week_day_heading_pane_t6_ParamLimits

0x0cf3,	// (0x000ab288) cale_week_day_heading_pane_t7_ParamLimits

0xf1d1,	// (0x000b9766) cale_week_day_heading_pane_t_ParamLimits

0xa37b,	// (0x000b4910) bg_cale_side_pane_ParamLimits

0x0d3d,	// (0x000ab2d2) cale_week_time_pane_t1_ParamLimits

0x0d57,	// (0x000ab2ec) cale_week_time_pane_t2_ParamLimits

0x0d71,	// (0x000ab306) cale_week_time_pane_t3_ParamLimits

0x0d8b,	// (0x000ab320) cale_week_time_pane_t4_ParamLimits

0x0da5,	// (0x000ab33a) cale_week_time_pane_t5_ParamLimits

0x0dbf,	// (0x000ab354) cale_week_time_pane_t6_ParamLimits

0x0dd9,	// (0x000ab36e) cale_week_time_pane_t7_ParamLimits

0x0df9,	// (0x000ab38e) cale_week_time_pane_t8_ParamLimits

0xf1e0,	// (0x000b9775) cale_week_time_pane_t_ParamLimits

0x0e19,	// (0x000ab3ae) cell_cale_week_pane_g2_ParamLimits

0xa37b,	// (0x000b4910) bg_cale_side_pane_cp01_ParamLimits

0x210a,	// (0x000ac69f) cale_month_week_pane_t1_ParamLimits

0x2123,	// (0x000ac6b8) cale_month_week_pane_t2_ParamLimits

0x213c,	// (0x000ac6d1) cale_month_week_pane_t3_ParamLimits

0x2155,	// (0x000ac6ea) cale_month_week_pane_t4_ParamLimits

0x216e,	// (0x000ac703) cale_month_week_pane_t5_ParamLimits

0x2187,	// (0x000ac71c) cale_month_week_pane_t6_ParamLimits

0xf2b5,	// (0x000b984a) cale_month_week_pane_t_ParamLimits

0x9834,	// (0x000b3dc9) cell_cale_month_pane_g1_ParamLimits

0x9375,	// (0x000b390a) main_cale_event_viewer_pane

0x92ff,	// (0x000b3894) listscroll_cale_event_viewer_pane

0xcc3e,	// (0x000b71d3) list_cale_ev_pane

0xcc46,	// (0x000b71db) scroll_pane_cp023

0xcc52,	// (0x000b71e7) field_cale_ev_pane_ParamLimits

0xcc52,	// (0x000b71e7) field_cale_ev_pane

0xcc6e,	// (0x000b7203) field_cale_ev_content_pane_ParamLimits

0xcc6e,	// (0x000b7203) field_cale_ev_content_pane

0xcc7a,	// (0x000b720f) field_cale_ev_pane_g1_ParamLimits

0xcc7a,	// (0x000b720f) field_cale_ev_pane_g1

0xcc86,	// (0x000b721b) field_cale_ev_pane_g2_ParamLimits

0xcc86,	// (0x000b721b) field_cale_ev_pane_g2

0xcc9e,	// (0x000b7233) field_cale_ev_pane_g3_ParamLimits

0xcc9e,	// (0x000b7233) field_cale_ev_pane_g3

0x0002,

0xf6f6,	// (0x000b9c8b) field_cale_ev_pane_g_ParamLimits

0xf6f6,	// (0x000b9c8b) field_cale_ev_pane_g

0xccb6,	// (0x000b724b) field_cale_ev_pane_t1_ParamLimits

0xccb6,	// (0x000b724b) field_cale_ev_pane_t1

0xcccd,	// (0x000b7262) field_cale_ev_content_pane_t1_ParamLimits

0xcccd,	// (0x000b7262) field_cale_ev_content_pane_t1

0xb4c1,	// (0x000b5a56) bg_button_pane_cp01

0x082d,	// (0x000aadc2) listscroll_cale_week_pane_ParamLimits

0xa326,	// (0x000b48bb) popup_toolbar_window_cp01

0xa34c,	// (0x000b48e1) listscroll_cale_week_pane_t1_ParamLimits

0x082d,	// (0x000aadc2) listscroll_cale_day_pane_ParamLimits

0xa326,	// (0x000b48bb) popup_toolbar_window_cp02

0xac6e,	// (0x000b5203) listscroll_cale_day_pane_t1_ParamLimits

0x362a,	// (0x000adbbf) main_cale_month_pane_ParamLimits

0x995c,	// (0x000b3ef1) popup_toolbar_window_cp03_ParamLimits

0x995c,	// (0x000b3ef1) popup_toolbar_window_cp03

0x2f25,	// (0x000ad4ba) main_image_pane_g2_ParamLimits

0x2f25,	// (0x000ad4ba) main_image_pane_g2

0x2f36,	// (0x000ad4cb) main_image_pane_g3_ParamLimits

0x2f36,	// (0x000ad4cb) main_image_pane_g3

0x0002,

0xf4e7,	// (0x000b9a7c) main_image_pane_g_ParamLimits

0xf4e7,	// (0x000b9a7c) main_image_pane_g

0xb626,	// (0x000b5bbb) main_image_pane_t1_ParamLimits

0x2f47,	// (0x000ad4dc) main_image_pane_t2_ParamLimits

0x2f47,	// (0x000ad4dc) main_image_pane_t2

0x2f59,	// (0x000ad4ee) main_image_pane_t3_ParamLimits

0x2f59,	// (0x000ad4ee) main_image_pane_t3

0x2f81,	// (0x000ad516) main_image_pane_t4_ParamLimits

0x2f81,	// (0x000ad516) main_image_pane_t4

0x0003,

0xf4ee,	// (0x000b9a83) main_image_pane_t_ParamLimits

0xf4ee,	// (0x000b9a83) main_image_pane_t

0x2fa1,	// (0x000ad536) popup_image_details_window_cp01

0x2fab,	// (0x000ad540) popup_toobar_trans_pane_cp01_ParamLimits

0x2fab,	// (0x000ad540) popup_toobar_trans_pane_cp01

0x373b,	// (0x000adcd0) popup_image_details_window_ParamLimits

0x373b,	// (0x000adcd0) popup_image_details_window

0x992f,	// (0x000b3ec4) popup_image_focus_window

0x3b4c,	// (0x000ae0e1) camera2_autofocus_pane_ParamLimits

0x3b4c,	// (0x000ae0e1) camera2_autofocus_pane

0x92ff,	// (0x000b3894) bg_popup_sub_pane_cp06

0xccea,	// (0x000b727f) popup_image_focus_window_g1

0xccf2,	// (0x000b7287) popup_image_focus_window_g2

0xccfa,	// (0x000b728f) popup_image_focus_window_g3

0xcd02,	// (0x000b7297) popup_image_focus_window_g4

0x0003,

0xf6fd,	// (0x000b9c92) popup_image_focus_window_g

0xcd0a,	// (0x000b729f) popup_image_focus_window_t1

0xcd18,	// (0x000b72ad) popup_image_focus_window_t2

0xcd28,	// (0x000b72bd) popup_image_focus_window_t3

0x0002,

0xf706,	// (0x000b9c9b) popup_image_focus_window_t

0xcd36,	// (0x000b72cb) camera2_autofocus_pane_g1

0xa55d,	// (0x000b4af2) bg_tb_trans_pane_cp01

0xcd44,	// (0x000b72d9) popup_image_details_window_g1

0xcd57,	// (0x000b72ec) popup_image_details_window_g2

0x0002,

0xf718,	// (0x000b9cad) popup_image_details_window_g

0xcd80,	// (0x000b7315) popup_image_details_window_t1

0xcd92,	// (0x000b7327) popup_image_details_window_t2

0xcdab,	// (0x000b7340) popup_image_details_window_t3

0xcdbf,	// (0x000b7354) popup_image_details_window_t4

0xcdda,	// (0x000b736f) popup_image_details_window_t5

0x0004,

0xf71f,	// (0x000b9cb4) popup_image_details_window_t

0xa1dd,	// (0x000b4772) bg_calc_paper_pane_ParamLimits

0x9375,	// (0x000b390a) grid_highlight_pane_cp013

0x979a,	// (0x000b3d2f) list_calc_pane_ParamLimits

0x97ac,	// (0x000b3d41) scroll_pane_cp024

0xa1f1,	// (0x000b4786) bg_calc_display_pane_ParamLimits

0x067b,	// (0x000aac10) calc_display_pane_t1_ParamLimits

0x068d,	// (0x000aac22) calc_display_pane_t2_ParamLimits

0x97b4,	// (0x000b3d49) calc_display_pane_t3_ParamLimits

0xf151,	// (0x000b96e6) calc_display_pane_t_ParamLimits

0x0752,	// (0x000aace7) cell_calc_pane_g2

0x0001,

0xf16e,	// (0x000b9703) cell_calc_pane_g

0x075b,	// (0x000aacf0) cell_calc_pane_t1

0xa250,	// (0x000b47e5) grid_highlight_pane_cp02_ParamLimits

0xa266,	// (0x000b47fb) toolbar_button_pane_cp01_ParamLimits

0xa266,	// (0x000b47fb) toolbar_button_pane_cp01

0xb66b,	// (0x000b5c00) temp_image_control_pane_ParamLimits

0xb66b,	// (0x000b5c00) temp_image_control_pane

0x9367,	// (0x000b38fc) main_mp3_pane

0xcdf4,	// (0x000b7389) temp_image_control_pane_g1_ParamLimits

0xcdf4,	// (0x000b7389) temp_image_control_pane_g1

0xce02,	// (0x000b7397) temp_image_control_pane_g2_ParamLimits

0xce02,	// (0x000b7397) temp_image_control_pane_g2

0xce14,	// (0x000b73a9) temp_image_control_pane_g3_ParamLimits

0xce14,	// (0x000b73a9) temp_image_control_pane_g3

0x43a2,	// (0x000ae937) temp_image_control_pane_g4_ParamLimits

0x43a2,	// (0x000ae937) temp_image_control_pane_g4

0x0003,

0xf72a,	// (0x000b9cbf) temp_image_control_pane_g_ParamLimits

0xf72a,	// (0x000b9cbf) temp_image_control_pane_g

0xcdf4,	// (0x000b7389) main_mp3_pane_g1

0x43b5,	// (0x000ae94a) main_mp3_pane_g2

0x0007,

0xf733,	// (0x000b9cc8) main_mp3_pane_g

0xce57,	// (0x000b73ec) main_mp3_pane_t1

0xa3d5,	// (0x000b496a) main_camera_pane_g8_ParamLimits

0xa3d5,	// (0x000b496a) main_camera_pane_g8

0x112b,	// (0x000ab6c0) main_video_pane_g7_ParamLimits

0x112b,	// (0x000ab6c0) main_video_pane_g7

0x99b1,	// (0x000b3f46) main_camera2_pane_t7_ParamLimits

0x99b1,	// (0x000b3f46) main_camera2_pane_t7

0xa51d,	// (0x000b4ab2) scroll_pane_cp025_ParamLimits

0xa51d,	// (0x000b4ab2) scroll_pane_cp025

0xa531,	// (0x000b4ac6) scroll_pane_cp026_ParamLimits

0xa531,	// (0x000b4ac6) scroll_pane_cp026

0xa540,	// (0x000b4ad5) wml_content_pane_ParamLimits

0x9375,	// (0x000b390a) main_touch_calib_pane

0x448b,	// (0x000aea20) main_touch_calib_pane_g1

0x449d,	// (0x000aea32) main_touch_calib_pane_g2

0x44af,	// (0x000aea44) main_touch_calib_pane_g3

0x44c1,	// (0x000aea56) main_touch_calib_pane_g4

0x0003,

0xf751,	// (0x000b9ce6) main_touch_calib_pane_g

0x44d3,	// (0x000aea68) main_touch_calib_pane_t1

0x44ed,	// (0x000aea82) main_touch_calib_pane_t2

0x0004,

0xf75a,	// (0x000b9cef) main_touch_calib_pane_t

0xb1ed,	// (0x000b5782) mup_progress_pane_cp02

0xb222,	// (0x000b57b7) navi_pane_g1

0xb2dd,	// (0x000b5872) navi_pane_mp_t3

0x9367,	// (0x000b38fc) main_mp3_pane_ParamLimits

0x38b8,	// (0x000ade4d) navi_pane_ParamLimits

0xcdf4,	// (0x000b7389) main_mp3_pane_g1_ParamLimits

0x43b5,	// (0x000ae94a) main_mp3_pane_g2_ParamLimits

0x43c3,	// (0x000ae958) main_mp3_pane_g3_ParamLimits

0x43c3,	// (0x000ae958) main_mp3_pane_g3

0x43d1,	// (0x000ae966) main_mp3_pane_g4_ParamLimits

0x43d1,	// (0x000ae966) main_mp3_pane_g4

0xce24,	// (0x000b73b9) main_mp3_pane_g5_ParamLimits

0xce24,	// (0x000b73b9) main_mp3_pane_g5

0xce32,	// (0x000b73c7) main_mp3_pane_g6_ParamLimits

0xce32,	// (0x000b73c7) main_mp3_pane_g6

0xce3f,	// (0x000b73d4) main_mp3_pane_g7_ParamLimits

0xce3f,	// (0x000b73d4) main_mp3_pane_g7

0xce4b,	// (0x000b73e0) main_mp3_pane_g8_ParamLimits

0xce4b,	// (0x000b73e0) main_mp3_pane_g8

0xf733,	// (0x000b9cc8) main_mp3_pane_g_ParamLimits

0x43df,	// (0x000ae974) main_mp3_pane_t2

0x43ed,	// (0x000ae982) main_mp3_pane_t3

0xce65,	// (0x000b73fa) main_mp3_pane_t4

0xce73,	// (0x000b7408) main_mp3_pane_t5

0x0005,

0xf744,	// (0x000b9cd9) main_mp3_pane_t

0xce81,	// (0x000b7416) mup_progress_pane_cp01

0x013a,	// (0x000aa6cf) aid_zoom_text_secondary2

0xcc3e,	// (0x000b71d3) list_cale_ev2_pane

0xcc46,	// (0x000b71db) scroll_pane_cp023_ParamLimits

0x4543,	// (0x000aead8) field_cale_ev2_pane_ParamLimits

0x4543,	// (0x000aead8) field_cale_ev2_pane

0xa56b,	// (0x000b4b00) field_cale_ev2_pane_g1_ParamLimits

0xa56b,	// (0x000b4b00) field_cale_ev2_pane_g1

0xa577,	// (0x000b4b0c) field_cale_ev2_pane_g2_ParamLimits

0xa577,	// (0x000b4b0c) field_cale_ev2_pane_g2

0xa58f,	// (0x000b4b24) field_cale_ev2_pane_g3_ParamLimits

0xa58f,	// (0x000b4b24) field_cale_ev2_pane_g3

0x0003,

0xf765,	// (0x000b9cfa) field_cale_ev2_pane_g_ParamLimits

0xf765,	// (0x000b9cfa) field_cale_ev2_pane_g

0xa5b3,	// (0x000b4b48) field_cale_ev2_pane_t1_ParamLimits

0xa5b3,	// (0x000b4b48) field_cale_ev2_pane_t1

0xa5ca,	// (0x000b4b5f) field_cale_ev2_pane_t2_ParamLimits

0xa5ca,	// (0x000b4b5f) field_cale_ev2_pane_t2

0x0001,

0xf76e,	// (0x000b9d03) field_cale_ev2_pane_t_ParamLimits

0xf76e,	// (0x000b9d03) field_cale_ev2_pane_t

0x2dd8,	// (0x000ad36d) main_postcard_pane_g5_ParamLimits

0x2dd8,	// (0x000ad36d) main_postcard_pane_g5

0x2dee,	// (0x000ad383) main_postcard_pane_g6_ParamLimits

0x2dee,	// (0x000ad383) main_postcard_pane_g6

0x0ee5,	// (0x000ab47a) camera2_autofocus_pane_cp_ParamLimits

0x0ee5,	// (0x000ab47a) camera2_autofocus_pane_cp

0x9367,	// (0x000b38fc) main_mup3_pane

0x4585,	// (0x000aeb1a) main_mup3_pane_g1_ParamLimits

0x4585,	// (0x000aeb1a) main_mup3_pane_g1

0x45a7,	// (0x000aeb3c) main_mup3_pane_g2_ParamLimits

0x45a7,	// (0x000aeb3c) main_mup3_pane_g2

0x4629,	// (0x000aebbe) main_mup3_pane_g3_ParamLimits

0x4629,	// (0x000aebbe) main_mup3_pane_g3

0x466f,	// (0x000aec04) main_mup3_pane_g4_ParamLimits

0x466f,	// (0x000aec04) main_mup3_pane_g4

0x46b5,	// (0x000aec4a) main_mup3_pane_g5_ParamLimits

0x46b5,	// (0x000aec4a) main_mup3_pane_g5

0x46fd,	// (0x000aec92) main_mup3_pane_g6_ParamLimits

0x46fd,	// (0x000aec92) main_mup3_pane_g6

0xce89,	// (0x000b741e) main_mup3_pane_g7_ParamLimits

0xce89,	// (0x000b741e) main_mup3_pane_g7

0x0007,

0xf77e,	// (0x000b9d13) main_mup3_pane_g_ParamLimits

0xf77e,	// (0x000b9d13) main_mup3_pane_g

0x477b,	// (0x000aed10) main_mup3_pane_t1_ParamLimits

0x477b,	// (0x000aed10) main_mup3_pane_t1

0x47ef,	// (0x000aed84) main_mup3_pane_t2_ParamLimits

0x47ef,	// (0x000aed84) main_mup3_pane_t2

0x48c3,	// (0x000aee58) main_mup3_pane_t4_ParamLimits

0x48c3,	// (0x000aee58) main_mup3_pane_t4

0x4919,	// (0x000aeeae) main_mup3_pane_t5_ParamLimits

0x4919,	// (0x000aeeae) main_mup3_pane_t5

0x49d5,	// (0x000aef6a) main_mup3_pane_t6_ParamLimits

0x49d5,	// (0x000aef6a) main_mup3_pane_t6

0x0005,

0xf78f,	// (0x000b9d24) main_mup3_pane_t_ParamLimits

0xf78f,	// (0x000b9d24) main_mup3_pane_t

0x4a8d,	// (0x000af022) mup3_progress_pane_ParamLimits

0x4a8d,	// (0x000af022) mup3_progress_pane

0x4b19,	// (0x000af0ae) popup_mup3_control_window_ParamLimits

0x4b19,	// (0x000af0ae) popup_mup3_control_window

0xce97,	// (0x000b742c) popup_mup3_text_window

0x4b4b,	// (0x000af0e0) mup3_progress_pane_t1

0x4b6a,	// (0x000af0ff) mup3_progress_pane_t2

0xce9f,	// (0x000b7434) mup3_progress_pane_t3

0x0002,

0xf79c,	// (0x000b9d31) mup3_progress_pane_t

0xcebc,	// (0x000b7451) mup_progress_pane_cp03

0x92ff,	// (0x000b3894) bg_tb_trans_pane_cp04

0x4b89,	// (0x000af11e) mup3_volume_pane

0x4b91,	// (0x000af126) popup_mup3_control_window_g1

0x4b9a,	// (0x000af12f) mup3_volume_pane_g1

0x4ba3,	// (0x000af138) mup3_volume_pane_g2

0x4bac,	// (0x000af141) mup3_volume_pane_g3

0x0002,

0xf7a3,	// (0x000b9d38) mup3_volume_pane_g

0x92ff,	// (0x000b3894) bg_tb_trans_pane_cp03

0xcecc,	// (0x000b7461) popup_mup3_text_window_g1

0xced4,	// (0x000b7469) popup_mup3_text_window_t1

0xa239,	// (0x000b47ce) list_calc_item_pane_g1_ParamLimits

0xc915,	// (0x000b6eaa) mup_volume_pane_cp_g1

0x4507,	// (0x000aea9c) main_touch_calib_pane_t3

0x451b,	// (0x000aeab0) main_touch_calib_pane_t4

0x452f,	// (0x000aeac4) main_touch_calib_pane_t5

0x9309,	// (0x000b389e) aid_cell_size_toolbar2

0x9311,	// (0x000b38a6) aid_popup3_width_pane

0x931d,	// (0x000b38b2) aid_zoom_text_msg_primary

0x0ec4,	// (0x000ab459) vorec_t7

0xa1fd,	// (0x000b4792) bg_calc_paper_pane_g1_ParamLimits

0xa209,	// (0x000b479e) bg_calc_paper_pane_g2_ParamLimits

0xa215,	// (0x000b47aa) bg_calc_paper_pane_g3_ParamLimits

0xa221,	// (0x000b47b6) bg_calc_paper_pane_g4_ParamLimits

0xa22d,	// (0x000b47c2) bg_calc_paper_pane_g5_ParamLimits

0x06d6,	// (0x000aac6b) bg_calc_paper_pane_g6_ParamLimits

0x06e7,	// (0x000aac7c) bg_calc_paper_pane_g7_ParamLimits

0x06f8,	// (0x000aac8d) bg_calc_paper_pane_g8_ParamLimits

0xf158,	// (0x000b96ed) bg_calc_paper_pane_g_ParamLimits

0x070b,	// (0x000aaca0) calc_bg_paper_pane_g9_ParamLimits

0x103d,	// (0x000ab5d2) image_qvga_pane_ParamLimits

0x103d,	// (0x000ab5d2) image_qvga_pane

0xa10d,	// (0x000b46a2) bg_popup_sub_pane_cp04_ParamLimits

0xb557,	// (0x000b5aec) popup_mup_playback_window_g1_ParamLimits

0xb563,	// (0x000b5af8) popup_mup_playback_window_t1_ParamLimits

0xb578,	// (0x000b5b0d) popup_mup_playback_window_t2_ParamLimits

0xf4e2,	// (0x000b9a77) popup_mup_playback_window_t_ParamLimits

0x4043,	// (0x000ae5d8) main_mup2_pane_g3_ParamLimits

0x4043,	// (0x000ae5d8) main_mup2_pane_g3

0x144f,	// (0x000ab9e4) popup_toolbar_window_cp04

0xb9b8,	// (0x000b5f4d) popup_call2_audio_second_window_g3_ParamLimits

0xb9b8,	// (0x000b5f4d) popup_call2_audio_second_window_g3

0xbdc2,	// (0x000b6357) popup_call2_audio_first_window_g4_ParamLimits

0xbdc2,	// (0x000b6357) popup_call2_audio_first_window_g4

0xc44d,	// (0x000b69e2) popup_call2_audio_in_window_g4_ParamLimits

0xc44d,	// (0x000b69e2) popup_call2_audio_in_window_g4

0x2f07,	// (0x000ad49c) aid_area_sk_bg_cut_ParamLimits

0x2f07,	// (0x000ad49c) aid_area_sk_bg_cut

0xb58d,	// (0x000b5b22) aid_area_sk_bg_cut_2_ParamLimits

0xb58d,	// (0x000b5b22) aid_area_sk_bg_cut_2

0x4348,	// (0x000ae8dd) aid_placing_details_win

0x4350,	// (0x000ae8e5) aid_placing_details_win_2

0xcd36,	// (0x000b72cb) camera2_autofocus_pane_g1_ParamLimits

0x02d8,	// (0x000aa86d) popup_fixed_preview_cale_window_ParamLimits

0x02d8,	// (0x000aa86d) popup_fixed_preview_cale_window

0xb35b,	// (0x000b58f0) navi_slider_pane_g3

0xb364,	// (0x000b58f9) navi_slider_pane_g4

0xb36d,	// (0x000b5902) navi_slider_pane_g5

0xb35b,	// (0x000b58f0) navi_slider_pane_g6

0x98de,	// (0x000b3e73) navi_slider_pane_g7

0xb48e,	// (0x000b5a23) mup_scale_pane_g3

0xb497,	// (0x000b5a2c) mup_scale_pane_g4

0xb4a0,	// (0x000b5a35) mup_scale_pane_g5

0x2bb4,	// (0x000ad149) mup_scale_pane_g6

0x2bbd,	// (0x000ad152) mup_scale_pane_g7

0xb35b,	// (0x000b58f0) cams2_slider_pane_g3

0xc997,	// (0x000b6f2c) cams2_slider_pane_g4

0x9a17,	// (0x000b3fac) cams2_slider_pane_g5

0xb35b,	// (0x000b58f0) cams2_slider_pane_g6

0x9a1f,	// (0x000b3fb4) cams2_slider_pane_g7

0xcbc4,	// (0x000b7159) camera2_autofocus_pane_cp_g1

0xc7ae,	// (0x000b6d43) bg_popup_preview_window_pane_cp02_ParamLimits

0xc7ae,	// (0x000b6d43) bg_popup_preview_window_pane_cp02

0xcee2,	// (0x000b7477) list_fp_cale_pane_ParamLimits

0xcee2,	// (0x000b7477) list_fp_cale_pane

0xceee,	// (0x000b7483) popup_fixed_preview_cale_window_t1_ParamLimits

0xceee,	// (0x000b7483) popup_fixed_preview_cale_window_t1

0x4bb5,	// (0x000af14a) popup_fixed_preview_cale_window_t2_ParamLimits

0x4bb5,	// (0x000af14a) popup_fixed_preview_cale_window_t2

0x4bca,	// (0x000af15f) popup_fixed_preview_cale_window_t3_ParamLimits

0x4bca,	// (0x000af15f) popup_fixed_preview_cale_window_t3

0x0002,

0xf7aa,	// (0x000b9d3f) popup_fixed_preview_cale_window_t_ParamLimits

0xf7aa,	// (0x000b9d3f) popup_fixed_preview_cale_window_t

0x4bdf,	// (0x000af174) list_single_fp_cale_pane_ParamLimits

0x4bdf,	// (0x000af174) list_single_fp_cale_pane

0xcf0c,	// (0x000b74a1) list_single_fp_cale_pane_g1_ParamLimits

0xcf0c,	// (0x000b74a1) list_single_fp_cale_pane_g1

0xcf18,	// (0x000b74ad) list_single_fp_cale_pane_g2_ParamLimits

0xcf18,	// (0x000b74ad) list_single_fp_cale_pane_g2

0x0002,

0xf7b1,	// (0x000b9d46) list_single_fp_cale_pane_g_ParamLimits

0xf7b1,	// (0x000b9d46) list_single_fp_cale_pane_g

0xcf31,	// (0x000b74c6) list_single_fp_cale_pane_t1_ParamLimits

0xcf31,	// (0x000b74c6) list_single_fp_cale_pane_t1

0xcf43,	// (0x000b74d8) list_single_fp_cale_pane_t2_ParamLimits

0xcf43,	// (0x000b74d8) list_single_fp_cale_pane_t2

0x0001,

0xf7b8,	// (0x000b9d4d) list_single_fp_cale_pane_t_ParamLimits

0xf7b8,	// (0x000b9d4d) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x9375,	// (0x000b390a) main_dialer_pane

0x4bf6,	// (0x000af18b) aid_cell_size_keypad

0x4c00,	// (0x000af195) dialer_ne_pane

0x4c08,	// (0x000af19d) grid_dialer_command_1_pane

0x4c10,	// (0x000af1a5) grid_dialer_command_2_pane

0x4c18,	// (0x000af1ad) grid_dialer_keypad_pane

0x4c2a,	// (0x000af1bf) bg_popup_call_pane_cp06_ParamLimits

0x4c2a,	// (0x000af1bf) bg_popup_call_pane_cp06

0x4c36,	// (0x000af1cb) dialer_ne_clear_pane_ParamLimits

0x4c36,	// (0x000af1cb) dialer_ne_clear_pane

0xcf76,	// (0x000b750b) dialer_ne_pane_g1

0xcf7e,	// (0x000b7513) dialer_ne_pane_t1_ParamLimits

0xcf7e,	// (0x000b7513) dialer_ne_pane_t1

0x4c42,	// (0x000af1d7) dialer_ne_pane_t2_ParamLimits

0x4c42,	// (0x000af1d7) dialer_ne_pane_t2

0x4c6c,	// (0x000af201) dialer_ne_pane_t3_ParamLimits

0x4c6c,	// (0x000af201) dialer_ne_pane_t3

0x0002,

0xf7bd,	// (0x000b9d52) dialer_ne_pane_t_ParamLimits

0xf7bd,	// (0x000b9d52) dialer_ne_pane_t

0x4c9c,	// (0x000af231) dialer_ne_pane_t3_copy1_ParamLimits

0x4c9c,	// (0x000af231) dialer_ne_pane_t3_copy1

0x4ccb,	// (0x000af260) cell_dialer_keypad_pane_ParamLimits

0x4ccb,	// (0x000af260) cell_dialer_keypad_pane

0x4ce2,	// (0x000af277) cell_dialer_command_1_pane_ParamLimits

0x4ce2,	// (0x000af277) cell_dialer_command_1_pane

0x4cf8,	// (0x000af28d) cell_dialer_command_2_pane_ParamLimits

0x4cf8,	// (0x000af28d) cell_dialer_command_2_pane

0xcf90,	// (0x000b7525) bg_button_pane_cp02_ParamLimits

0xcf90,	// (0x000b7525) bg_button_pane_cp02

0x4d07,	// (0x000af29c) cell_dialer_keypad_pane_g1_ParamLimits

0x4d07,	// (0x000af29c) cell_dialer_keypad_pane_g1

0xcf90,	// (0x000b7525) bg_button_pane_cp03_ParamLimits

0xcf90,	// (0x000b7525) bg_button_pane_cp03

0x4d1c,	// (0x000af2b1) cell_dialer_command_1_pane_g1_ParamLimits

0x4d1c,	// (0x000af2b1) cell_dialer_command_1_pane_g1

0xcf9c,	// (0x000b7531) bg_button_pane_cp04

0x4d2f,	// (0x000af2c4) cell_dialer_command_2_pane_g1

0xa3cd,	// (0x000b4962) bg_button_pane_cp06

0xcfa4,	// (0x000b7539) dialer_ne_clear_pane_g1

0xb22e,	// (0x000b57c3) navi_pane_g2

0xb25c,	// (0x000b57f1) navi_pane_g3

0x0002,

0xf3e5,	// (0x000b997a) navi_pane_g

0xb2eb,	// (0x000b5880) navi_pane_mv_g2

0xb312,	// (0x000b58a7) navi_pane_mv_g5

0x2774,	// (0x000acd09) navi_pane_mv_t1

0xa1f1,	// (0x000b4786) main_clock2_pane

0x4d7c,	// (0x000af311) main_clock2_list_pane_ParamLimits

0x4d7c,	// (0x000af311) main_clock2_list_pane

0x4db4,	// (0x000af349) main_clock2_pane_t1_ParamLimits

0x4db4,	// (0x000af349) main_clock2_pane_t1

0x4df2,	// (0x000af387) main_clock2_pane_t2_ParamLimits

0x4df2,	// (0x000af387) main_clock2_pane_t2

0x0004,

0xf7c9,	// (0x000b9d5e) main_clock2_pane_t_ParamLimits

0xf7c9,	// (0x000b9d5e) main_clock2_pane_t

0x4e90,	// (0x000af425) popup_clock_analogue_window_cp03_ParamLimits

0x4e90,	// (0x000af425) popup_clock_analogue_window_cp03

0x4eb5,	// (0x000af44a) popup_clock_digital_window_cp02_ParamLimits

0x4eb5,	// (0x000af44a) popup_clock_digital_window_cp02

0x4f28,	// (0x000af4bd) main_clock2_list_single_pane_ParamLimits

0x4f28,	// (0x000af4bd) main_clock2_list_single_pane

0xa3cd,	// (0x000b4962) list_highlight_pane_cp05

0xcfde,	// (0x000b7573) main_clock2_list_single_pane_t1

0x144f,	// (0x000ab9e4) popup_toolbar_window_cp04_ParamLimits

0x4372,	// (0x000ae907) camera2_autofocus_pane_g2_ParamLimits

0x4372,	// (0x000ae907) camera2_autofocus_pane_g2

0x437e,	// (0x000ae913) camera2_autofocus_pane_g3_ParamLimits

0x437e,	// (0x000ae913) camera2_autofocus_pane_g3

0x438a,	// (0x000ae91f) camera2_autofocus_pane_g4_ParamLimits

0x438a,	// (0x000ae91f) camera2_autofocus_pane_g4

0x4396,	// (0x000ae92b) camera2_autofocus_pane_g5_ParamLimits

0x4396,	// (0x000ae92b) camera2_autofocus_pane_g5

0x0004,

0xf70d,	// (0x000b9ca2) camera2_autofocus_pane_g_ParamLimits

0xf70d,	// (0x000b9ca2) camera2_autofocus_pane_g

0x4565,	// (0x000aeafa) camera2_autofocus_pane_cp_g2

0x456d,	// (0x000aeb02) camera2_autofocus_pane_cp_g3

0x4575,	// (0x000aeb0a) camera2_autofocus_pane_cp_g4

0x457d,	// (0x000aeb12) camera2_autofocus_pane_cp_g5

0x0004,

0xf773,	// (0x000b9d08) camera2_autofocus_pane_cp_g

0x4c22,	// (0x000af1b7) popup_dialer_spcha_window

0x92ff,	// (0x000b3894) bg_popup_sub_pane_cp07

0xcfec,	// (0x000b7581) list_spcha_pane

0xcff4,	// (0x000b7589) list_single_spcha_pane_ParamLimits

0xcff4,	// (0x000b7589) list_single_spcha_pane

0x92ff,	// (0x000b3894) list_highlight_pane_cp06

0xd005,	// (0x000b759a) list_single_spcha_pane_t1

0xc1f7,	// (0x000b678c) popup_call2_audio_out_window_g4_ParamLimits

0xc1f7,	// (0x000b678c) popup_call2_audio_out_window_g4

0x9375,	// (0x000b390a) main_imed2_pane

0x9937,	// (0x000b3ecc) popup_imed_adjust2_window

0x3753,	// (0x000adce8) popup_imed_trans_window_ParamLimits

0x3753,	// (0x000adce8) popup_imed_trans_window

0xca00,	// (0x000b6f95) popup_blid_sat_info2_window_t1

0xca0e,	// (0x000b6fa3) popup_blid_sat_info2_window_t2

0x000a,

0xf6a2,	// (0x000b9c37) popup_blid_sat_info2_window_t

0x4fd2,	// (0x000af567) aid_size_cell_colour_35

0x4ff2,	// (0x000af587) aid_size_cell_colour_112

0x5012,	// (0x000af5a7) aid_size_cell_effect

0xc7ba,	// (0x000b6d4f) bg_tb_trans_pane_cp02

0xad7f,	// (0x000b5314) heading_imed_pane

0x5032,	// (0x000af5c7) listscroll_imed_pane

0xd013,	// (0x000b75a8) heading_imed_pane_g1

0xd01b,	// (0x000b75b0) heading_imed_pane_t1

0xd029,	// (0x000b75be) grid_imed_colour_35_pane_ParamLimits

0xd029,	// (0x000b75be) grid_imed_colour_35_pane

0x503e,	// (0x000af5d3) grid_imed_effect_pane

0xd041,	// (0x000b75d6) list_imed_aspect_pane

0x5054,	// (0x000af5e9) scroll_pane_cp027_ParamLimits

0x5054,	// (0x000af5e9) scroll_pane_cp027

0x5065,	// (0x000af5fa) cell_imed_effect_pane_ParamLimits

0x5065,	// (0x000af5fa) cell_imed_effect_pane

0xd049,	// (0x000b75de) cell_imed_colour_pane_ParamLimits

0xd049,	// (0x000b75de) cell_imed_colour_pane

0xd08b,	// (0x000b7620) cell_imed_colour_pane_g1_ParamLimits

0xd08b,	// (0x000b7620) cell_imed_colour_pane_g1

0xd09c,	// (0x000b7631) hgihlgiht_grid_pane_cp016_ParamLimits

0xd09c,	// (0x000b7631) hgihlgiht_grid_pane_cp016

0x508c,	// (0x000af621) cell_imed_effect_pane_g1

0x5094,	// (0x000af629) grid_highlight_pane_cp017

0xd0ad,	// (0x000b7642) list_imed_single_pane_ParamLimits

0xd0ad,	// (0x000b7642) list_imed_single_pane

0x92ff,	// (0x000b3894) list_highlight_pane_cp07

0xd0c3,	// (0x000b7658) list_imed_aspect_pane_comp1_t1

0xc7ba,	// (0x000b6d4f) bg_tb_trans_pane_cp05

0xd0e5,	// (0x000b767a) popup_imed_adjust2_window_g1

0xd10c,	// (0x000b76a1) popup_imed_adjust2_window_t1

0xd124,	// (0x000b76b9) slider_imed_adjust_pane

0xd138,	// (0x000b76cd) slider_imed_adjust_pane_g1

0xd148,	// (0x000b76dd) slider_imed_adjust_pane_g2

0xd158,	// (0x000b76ed) slider_imed_adjust_pane_g3

0xd169,	// (0x000b76fe) slider_imed_adjust_pane_g4

0x0003,

0xf7e6,	// (0x000b9d7b) slider_imed_adjust_pane_g

0x509d,	// (0x000af632) aid_size_cell_clipart2

0x50a9,	// (0x000af63e) grid_imed_clipart_pane

0xd17a,	// (0x000b770f) scroll_pane_cp031

0x50b3,	// (0x000af648) cell_imed_clipart_pane_ParamLimits

0x50b3,	// (0x000af648) cell_imed_clipart_pane

0x50d7,	// (0x000af66c) cell_imed_clipart_pane_g1

0x92ff,	// (0x000b3894) grid_highlight_pane_cp014

0x4d91,	// (0x000af326) main_clock2_pane_g1_ParamLimits

0x4d91,	// (0x000af326) main_clock2_pane_g1

0x4ed3,	// (0x000af468) aid_call2_pane_cp10

0x4ee5,	// (0x000af47a) aid_call_pane_cp10

0xb18d,	// (0x000b5722) popup_clock_analogue_window_cp10_g1

0xb18d,	// (0x000b5722) popup_clock_analogue_window_cp10_g2

0x4ef7,	// (0x000af48c) popup_clock_analogue_window_cp10_g3

0x4ef7,	// (0x000af48c) popup_clock_analogue_window_cp10_g4

0xb18d,	// (0x000b5722) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7d4,	// (0x000b9d69) popup_clock_analogue_window_cp10_g

0x4f09,	// (0x000af49e) popup_clock_analogue_window_cp10_t1

0x4f3a,	// (0x000af4cf) clock_digital_number_pane_cp10_ParamLimits

0x4f3a,	// (0x000af4cf) clock_digital_number_pane_cp10

0x4f52,	// (0x000af4e7) clock_digital_number_pane_cp11_ParamLimits

0x4f52,	// (0x000af4e7) clock_digital_number_pane_cp11

0x4f6a,	// (0x000af4ff) clock_digital_number_pane_cp12_ParamLimits

0x4f6a,	// (0x000af4ff) clock_digital_number_pane_cp12

0x4f82,	// (0x000af517) clock_digital_number_pane_cp13_ParamLimits

0x4f82,	// (0x000af517) clock_digital_number_pane_cp13

0x4f9a,	// (0x000af52f) clock_digital_separator_pane_cp10_ParamLimits

0x4f9a,	// (0x000af52f) clock_digital_separator_pane_cp10

0x4fb2,	// (0x000af547) popup_clock_digital_window_cp02_t1_ParamLimits

0x4fb2,	// (0x000af547) popup_clock_digital_window_cp02_t1

0xa105,	// (0x000b469a) clock_digital_number_pane_cp10_g1

0xa105,	// (0x000b469a) clock_digital_number_pane_cp10_g2

0x0001,

0xf7ef,	// (0x000b9d84) clock_digital_number_pane_cp10_g

0xa105,	// (0x000b469a) clock_digital_separator_pane_cp10_g1

0xa105,	// (0x000b469a) clock_digital_separator_pane_g2_cp10

0xb31a,	// (0x000b58af) navi_pane_vded_g4

0xb323,	// (0x000b58b8) navi_pane_vded_g5

0xb32c,	// (0x000b58c1) navi_pane_vded_t1

0x9375,	// (0x000b390a) main_vded_pane

0x50e0,	// (0x000af675) main_vded_pane_g1

0x50ea,	// (0x000af67f) main_vded_pane_g2

0x50f4,	// (0x000af689) main_vded_pane_g3

0x0002,

0xf7f4,	// (0x000b9d89) main_vded_pane_g

0x50fe,	// (0x000af693) main_vded_pane_t1

0x510c,	// (0x000af6a1) main_vded_pane_t2

0x0001,

0xf7fb,	// (0x000b9d90) main_vded_pane_t

0x511a,	// (0x000af6af) vded_slider_pane

0x5124,	// (0x000af6b9) vded_video_pane

0xd182,	// (0x000b7717) vded_video_pane_g1

0x512e,	// (0x000af6c3) vded_video_pane_g2

0xcbc4,	// (0x000b7159) vded_video_pane_g3

0x0002,

0xf800,	// (0x000b9d95) vded_video_pane_g

0xd18c,	// (0x000b7721) vded_slider_pane_g1

0xd195,	// (0x000b772a) vded_slider_pane_g2

0xd19e,	// (0x000b7733) vded_slider_pane_g3

0xd1a7,	// (0x000b773c) vded_slider_pane_g4

0xd1b0,	// (0x000b7745) vded_slider_pane_g5

0x0004,

0xf807,	// (0x000b9d9c) vded_slider_pane_g

0x4b01,	// (0x000af096) mup3_rocker_pane_ParamLimits

0x4b01,	// (0x000af096) mup3_rocker_pane

0x5137,	// (0x000af6cc) mup3_control_keys_pane_g1

0x513f,	// (0x000af6d4) mup3_control_keys_pane_g2

0x5147,	// (0x000af6dc) mup3_control_keys_pane_g3

0x514f,	// (0x000af6e4) mup3_control_keys_pane_g4

0x0003,

0xf812,	// (0x000b9da7) mup3_control_keys_pane_g

0x030f,	// (0x000aa8a4) popup_toolbar2_fixed_window_cp01_ParamLimits

0x030f,	// (0x000aa8a4) popup_toolbar2_fixed_window_cp01

0x4b35,	// (0x000af0ca) popup_toolbar2_fixed_window_cp02_ParamLimits

0x4b35,	// (0x000af0ca) popup_toolbar2_fixed_window_cp02

0xbb2a,	// (0x000b60bf) popup_call2_audio_second_window_t4_ParamLimits

0xbb2a,	// (0x000b60bf) popup_call2_audio_second_window_t4

0xc058,	// (0x000b65ed) popup_call2_audio_first_window_t6_ParamLimits

0xc058,	// (0x000b65ed) popup_call2_audio_first_window_t6

0xc2fa,	// (0x000b688f) popup_call2_audio_out_window_t6_ParamLimits

0xc2fa,	// (0x000b688f) popup_call2_audio_out_window_t6

0x9375,	// (0x000b390a) main_vitu_pane

0x515f,	// (0x000af6f4) aid_size_cell_itu_ParamLimits

0x515f,	// (0x000af6f4) aid_size_cell_itu

0xa55d,	// (0x000b4af2) bg_popup_window_pane_cp08_ParamLimits

0xa55d,	// (0x000b4af2) bg_popup_window_pane_cp08

0x5175,	// (0x000af70a) field_vitu_entry_pane_ParamLimits

0x5175,	// (0x000af70a) field_vitu_entry_pane

0x518c,	// (0x000af721) grid_vitu_function_pane_ParamLimits

0x518c,	// (0x000af721) grid_vitu_function_pane

0x51a7,	// (0x000af73c) grid_vitu_itu_pane_ParamLimits

0x51a7,	// (0x000af73c) grid_vitu_itu_pane

0x51c5,	// (0x000af75a) cell_vitu_itu_pane_ParamLimits

0x51c5,	// (0x000af75a) cell_vitu_itu_pane

0x51e9,	// (0x000af77e) cell_vitu_function_pane_ParamLimits

0x51e9,	// (0x000af77e) cell_vitu_function_pane

0xa55d,	// (0x000b4af2) bg_popup_sub_pane_cp08_ParamLimits

0xa55d,	// (0x000b4af2) bg_popup_sub_pane_cp08

0x5204,	// (0x000af799) field_vitu_entry_pane_t1_ParamLimits

0x5204,	// (0x000af799) field_vitu_entry_pane_t1

0xd1d1,	// (0x000b7766) field_vitu_entry_pane_t2_ParamLimits

0xd1d1,	// (0x000b7766) field_vitu_entry_pane_t2

0x0001,

0xf820,	// (0x000b9db5) field_vitu_entry_pane_t_ParamLimits

0xf820,	// (0x000b9db5) field_vitu_entry_pane_t

0xd1ee,	// (0x000b7783) bg_button_pane_cp05_ParamLimits

0xd1ee,	// (0x000b7783) bg_button_pane_cp05

0x5223,	// (0x000af7b8) cell_vitu_itu_pane_g1

0x523b,	// (0x000af7d0) cell_vitu_itu_pane_t1_ParamLimits

0x523b,	// (0x000af7d0) cell_vitu_itu_pane_t1

0x524d,	// (0x000af7e2) cell_vitu_itu_pane_t2_ParamLimits

0x524d,	// (0x000af7e2) cell_vitu_itu_pane_t2

0x0002,

0xf825,	// (0x000b9dba) cell_vitu_itu_pane_t_ParamLimits

0xf825,	// (0x000b9dba) cell_vitu_itu_pane_t

0xd1fc,	// (0x000b7791) bg_button_pane_cp07

0x5290,	// (0x000af825) cell_vitu_function_pane_g1

0x9792,	// (0x000b3d27) main_calc_pane_g1

0x0126,	// (0x000aa6bb) aid_visual_content_pane

0x9375,	// (0x000b390a) main_vradio_pane

0x5299,	// (0x000af82e) main_vradio_pane_g1_ParamLimits

0x5299,	// (0x000af82e) main_vradio_pane_g1

0xd206,	// (0x000b779b) main_vradio_pane_g2_ParamLimits

0xd206,	// (0x000b779b) main_vradio_pane_g2

0x0001,

0xf82c,	// (0x000b9dc1) main_vradio_pane_g_ParamLimits

0xf82c,	// (0x000b9dc1) main_vradio_pane_g

0x52b2,	// (0x000af847) main_vradio_pane_t1_ParamLimits

0x52b2,	// (0x000af847) main_vradio_pane_t1

0x52c7,	// (0x000af85c) main_vradio_pane_t2_ParamLimits

0x52c7,	// (0x000af85c) main_vradio_pane_t2

0xd213,	// (0x000b77a8) main_vradio_pane_t3_ParamLimits

0xd213,	// (0x000b77a8) main_vradio_pane_t3

0x0002,

0xf831,	// (0x000b9dc6) main_vradio_pane_t_ParamLimits

0xf831,	// (0x000b9dc6) main_vradio_pane_t

0x52dc,	// (0x000af871) vradio_rocker_control_pane_ParamLimits

0x52dc,	// (0x000af871) vradio_rocker_control_pane

0x52ee,	// (0x000af883) vradio_station_info_pane_ParamLimits

0x52ee,	// (0x000af883) vradio_station_info_pane

0xd227,	// (0x000b77bc) vradio_frequency_info_pane_ParamLimits

0xd227,	// (0x000b77bc) vradio_frequency_info_pane

0xcbc4,	// (0x000b7159) vradio_station_info_pane_g1

0xd236,	// (0x000b77cb) vradio_station_info_pane_t1_ParamLimits

0xd236,	// (0x000b77cb) vradio_station_info_pane_t1

0xd258,	// (0x000b77ed) vradio_station_info_pane_t2_ParamLimits

0xd258,	// (0x000b77ed) vradio_station_info_pane_t2

0x0001,

0xf838,	// (0x000b9dcd) vradio_station_info_pane_t_ParamLimits

0xf838,	// (0x000b9dcd) vradio_station_info_pane_t

0xd26a,	// (0x000b77ff) vradio_tuning_pane

0xd272,	// (0x000b7807) vradio_rocker_control_pane_g1

0xd27a,	// (0x000b780f) vradio_rocker_control_pane_g2

0xd282,	// (0x000b7817) vradio_rocker_control_pane_g3

0xd28a,	// (0x000b781f) vradio_rocker_control_pane_g4

0xd292,	// (0x000b7827) vradio_rocker_control_pane_g5

0x0004,

0xf83d,	// (0x000b9dd2) vradio_rocker_control_pane_g

0x5300,	// (0x000af895) vradio_frequency_info_pane_g1

0xd29a,	// (0x000b782f) vradio_frequency_info_pane_t1_ParamLimits

0xd29a,	// (0x000b782f) vradio_frequency_info_pane_t1

0x530a,	// (0x000af89f) vradio_tuning_pane_g1

0x5315,	// (0x000af8aa) vradio_tuning_pane_t1

0x9325,	// (0x000b38ba) area_side_right_pane_ParamLimits

0x9325,	// (0x000b38ba) area_side_right_pane

0xc775,	// (0x000b6d0a) status_small_pane_g1

0xc77d,	// (0x000b6d12) status_small_pane_g2

0xc786,	// (0x000b6d1b) status_small_pane_g3

0xc78f,	// (0x000b6d24) status_small_pane_g4

0x0003,

0xf5f8,	// (0x000b9b8d) status_small_pane_g

0xc798,	// (0x000b6d2d) status_small_pane_t1

0x9375,	// (0x000b390a) main_video3_pane

0xd2ae,	// (0x000b7843) cams_zoom_vslider_pane

0xd2b6,	// (0x000b784b) image3_wide_pane_ParamLimits

0xd2b6,	// (0x000b784b) image3_wide_pane

0xd2d0,	// (0x000b7865) image3_wide_small_pane

0xd2dc,	// (0x000b7871) main_video3_pane_g1_ParamLimits

0xd2dc,	// (0x000b7871) main_video3_pane_g1

0xd2f8,	// (0x000b788d) main_video3_pane_g2_ParamLimits

0xd2f8,	// (0x000b788d) main_video3_pane_g2

0x0001,

0xf848,	// (0x000b9ddd) main_video3_pane_g_ParamLimits

0xf848,	// (0x000b9ddd) main_video3_pane_g

0xd314,	// (0x000b78a9) main_video3_pane_t1_ParamLimits

0xd314,	// (0x000b78a9) main_video3_pane_t1

0xd33f,	// (0x000b78d4) main_video3_pane_t2_ParamLimits

0xd33f,	// (0x000b78d4) main_video3_pane_t2

0xd36a,	// (0x000b78ff) main_video3_pane_t3_ParamLimits

0xd36a,	// (0x000b78ff) main_video3_pane_t3

0x0002,

0xf84d,	// (0x000b9de2) main_video3_pane_t_ParamLimits

0xf84d,	// (0x000b9de2) main_video3_pane_t

0xd397,	// (0x000b792c) cams_zoom_vslider_pane_g1

0xd3a0,	// (0x000b7935) cams_zoom_vslider_pane_g2

0x0001,

0xf854,	// (0x000b9de9) cams_zoom_vslider_pane_g

0xd3a8,	// (0x000b793d) small_slider_vertical_pane

0xcbc4,	// (0x000b7159) small_slider_vertical_pane_g1

0xcbc4,	// (0x000b7159) small_slider_vertical_pane_g2

0xd3b0,	// (0x000b7945) small_slider_vertical_pane_g3

0x0002,

0xf859,	// (0x000b9dee) small_slider_vertical_pane_g

0x9375,	// (0x000b390a) main_hwr_training_pane

0xd3b9,	// (0x000b794e) hwr_training_instruct_pane_ParamLimits

0xd3b9,	// (0x000b794e) hwr_training_instruct_pane

0x5324,	// (0x000af8b9) hwr_training_navi_pane_ParamLimits

0x5324,	// (0x000af8b9) hwr_training_navi_pane

0x5343,	// (0x000af8d8) hwr_training_write_pane_ParamLimits

0x5343,	// (0x000af8d8) hwr_training_write_pane

0x92ff,	// (0x000b3894) bg_frame_shadow_pane

0xd3f0,	// (0x000b7985) hwr_training_write_pane_g1

0xd3f8,	// (0x000b798d) hwr_training_write_pane_g2

0xd400,	// (0x000b7995) hwr_training_write_pane_g3

0xd408,	// (0x000b799d) hwr_training_write_pane_g4

0xd410,	// (0x000b79a5) hwr_training_write_pane_g5

0xd418,	// (0x000b79ad) hwr_training_write_pane_g6

0xd420,	// (0x000b79b5) hwr_training_write_pane_g7

0x0006,

0xf860,	// (0x000b9df5) hwr_training_write_pane_g

0x9a28,	// (0x000b3fbd) hwr_training_navi_pane_g1_ParamLimits

0x9a28,	// (0x000b3fbd) hwr_training_navi_pane_g1

0x9a3a,	// (0x000b3fcf) hwr_training_navi_pane_g2_ParamLimits

0x9a3a,	// (0x000b3fcf) hwr_training_navi_pane_g2

0x9a4c,	// (0x000b3fe1) hwr_training_navi_pane_g3_ParamLimits

0x9a4c,	// (0x000b3fe1) hwr_training_navi_pane_g3

0x9a5c,	// (0x000b3ff1) hwr_training_navi_pane_g4_ParamLimits

0x9a5c,	// (0x000b3ff1) hwr_training_navi_pane_g4

0x0004,

0xf86f,	// (0x000b9e04) hwr_training_navi_pane_g_ParamLimits

0xf86f,	// (0x000b9e04) hwr_training_navi_pane_g

0x9a69,	// (0x000b3ffe) hwr_training_navi_pane_t1

0x538d,	// (0x000af922) list_single_hwr_training_instruct_pane_ParamLimits

0x538d,	// (0x000af922) list_single_hwr_training_instruct_pane

0xd428,	// (0x000b79bd) list_single_hwr_training_instruct_pane_t1

0xcb04,	// (0x000b7099) bg_frame_shadow_pane_g1

0xd437,	// (0x000b79cc) bg_frame_shadow_pane_g2

0xd43f,	// (0x000b79d4) bg_frame_shadow_pane_g3

0xd447,	// (0x000b79dc) bg_frame_shadow_pane_g4

0xd44f,	// (0x000b79e4) bg_frame_shadow_pane_g5

0xd457,	// (0x000b79ec) bg_frame_shadow_pane_g6

0xd45f,	// (0x000b79f4) bg_frame_shadow_pane_g7

0xa2bc,	// (0x000b4851) bg_frame_shadow_pane_g8

0x0007,

0xf87a,	// (0x000b9e0f) bg_frame_shadow_pane_g

0x9375,	// (0x000b390a) main_video_tele_dialer_pane

0x53a4,	// (0x000af939) aid_size_cell_video_keypad_ParamLimits

0x53a4,	// (0x000af939) aid_size_cell_video_keypad

0x53be,	// (0x000af953) grid_video_dialer_keypad_pane_ParamLimits

0x53be,	// (0x000af953) grid_video_dialer_keypad_pane

0x540c,	// (0x000af9a1) video_down_pane_cp_ParamLimits

0x540c,	// (0x000af9a1) video_down_pane_cp

0x543e,	// (0x000af9d3) cell_video_dialer_keypad_pane_ParamLimits

0x543e,	// (0x000af9d3) cell_video_dialer_keypad_pane

0xd467,	// (0x000b79fc) bg_button_pane_cp08_ParamLimits

0xd467,	// (0x000b79fc) bg_button_pane_cp08

0x5460,	// (0x000af9f5) cell_video_dialer_keypad_pane_g1_ParamLimits

0x5460,	// (0x000af9f5) cell_video_dialer_keypad_pane_g1

0x4aeb,	// (0x000af080) mup3_rocker2_pane_ParamLimits

0x4aeb,	// (0x000af080) mup3_rocker2_pane

0xcbc4,	// (0x000b7159) mup3_rocker2_pane_g1

0x363c,	// (0x000adbd1) main_dialer2_pane

0x9375,	// (0x000b390a) main_mp4_pane

0x9a7f,	// (0x000b4014) main_mp4_pane_g1_ParamLimits

0x9a7f,	// (0x000b4014) main_mp4_pane_g1

0x9a7f,	// (0x000b4014) main_mp4_pane_g2_ParamLimits

0x9a7f,	// (0x000b4014) main_mp4_pane_g2

0x549b,	// (0x000afa30) main_mp4_pane_g3_ParamLimits

0x549b,	// (0x000afa30) main_mp4_pane_g3

0x9a8d,	// (0x000b4022) main_mp4_pane_g4_ParamLimits

0x9a8d,	// (0x000b4022) main_mp4_pane_g4

0x9ab5,	// (0x000b404a) main_mp4_pane_g5_ParamLimits

0x9ab5,	// (0x000b404a) main_mp4_pane_g5

0x0005,

0xf89a,	// (0x000b9e2f) main_mp4_pane_g_ParamLimits

0xf89a,	// (0x000b9e2f) main_mp4_pane_g

0x9b05,	// (0x000b409a) main_mp4_pane_t1_ParamLimits

0x9b05,	// (0x000b409a) main_mp4_pane_t1

0x9b61,	// (0x000b40f6) main_mp4_pane_t2_ParamLimits

0x9b61,	// (0x000b40f6) main_mp4_pane_t2

0xd473,	// (0x000b7a08) main_mp4_pane_t3_ParamLimits

0xd473,	// (0x000b7a08) main_mp4_pane_t3

0x9bb3,	// (0x000b4148) main_mp4_pane_t4_ParamLimits

0x9bb3,	// (0x000b4148) main_mp4_pane_t4

0x0003,

0xf8a7,	// (0x000b9e3c) main_mp4_pane_t_ParamLimits

0xf8a7,	// (0x000b9e3c) main_mp4_pane_t

0x9bf7,	// (0x000b418c) mp4_progress_pane_ParamLimits

0x9bf7,	// (0x000b418c) mp4_progress_pane

0x9c41,	// (0x000b41d6) mp4_rocker_pane_ParamLimits

0x9c41,	// (0x000b41d6) mp4_rocker_pane

0xd49b,	// (0x000b7a30) mp4_progress_pane_t1

0xd4b4,	// (0x000b7a49) mp4_progress_pane_t2

0x0001,

0xf8b0,	// (0x000b9e45) mp4_progress_pane_t

0xd4cd,	// (0x000b7a62) mup_progress_pane_cp04

0xd93d,	// (0x000b7ed2) mp4_rocker_pane_g1

0x54d7,	// (0x000afa6c) aid_cell_size_keypad2_ParamLimits

0x54d7,	// (0x000afa6c) aid_cell_size_keypad2

0x54ed,	// (0x000afa82) dialer2_ne_pane_ParamLimits

0x54ed,	// (0x000afa82) dialer2_ne_pane

0x5507,	// (0x000afa9c) grid_dialer2_keypad_pane_ParamLimits

0x5507,	// (0x000afa9c) grid_dialer2_keypad_pane

0xc9a7,	// (0x000b6f3c) bg_popup_call_pane_cp07_ParamLimits

0xc9a7,	// (0x000b6f3c) bg_popup_call_pane_cp07

0x5525,	// (0x000afaba) dialer2_ne_pane_t1_ParamLimits

0x5525,	// (0x000afaba) dialer2_ne_pane_t1

0x5562,	// (0x000afaf7) cell_dialer2_keypad_pane_ParamLimits

0x5562,	// (0x000afaf7) cell_dialer2_keypad_pane

0xd4eb,	// (0x000b7a80) bg_button_pane_pane_cp04_ParamLimits

0xd4eb,	// (0x000b7a80) bg_button_pane_pane_cp04

0x5584,	// (0x000afb19) cell_dialer2_keypad_pane_g1_ParamLimits

0x5584,	// (0x000afb19) cell_dialer2_keypad_pane_g1

0x1323,	// (0x000ab8b8) aid_placing_vt_set_content_ParamLimits

0x1323,	// (0x000ab8b8) aid_placing_vt_set_content

0x134b,	// (0x000ab8e0) aid_placing_vt_set_title_ParamLimits

0x134b,	// (0x000ab8e0) aid_placing_vt_set_title

0x9375,	// (0x000b390a) main_image3_pane

0x564a,	// (0x000afbdf) area_side_right_pane_cp01_ParamLimits

0x564a,	// (0x000afbdf) area_side_right_pane_cp01

0x9a7f,	// (0x000b4014) main_image3_pane_g1_ParamLimits

0x9a7f,	// (0x000b4014) main_image3_pane_g1

0x5661,	// (0x000afbf6) main_image3_pane_g2_ParamLimits

0x5661,	// (0x000afbf6) main_image3_pane_g2

0x5689,	// (0x000afc1e) main_image3_pane_g3_ParamLimits

0x5689,	// (0x000afc1e) main_image3_pane_g3

0x56b3,	// (0x000afc48) main_image3_pane_g4_ParamLimits

0x56b3,	// (0x000afc48) main_image3_pane_g4

0x0003,

0xf8bf,	// (0x000b9e54) main_image3_pane_g_ParamLimits

0xf8bf,	// (0x000b9e54) main_image3_pane_g

0x56dd,	// (0x000afc72) main_image3_pane_t1_ParamLimits

0x56dd,	// (0x000afc72) main_image3_pane_t1

0x5735,	// (0x000afcca) main_image3_pane_t2_ParamLimits

0x5735,	// (0x000afcca) main_image3_pane_t2

0x5787,	// (0x000afd1c) main_image3_pane_t3_ParamLimits

0x5787,	// (0x000afd1c) main_image3_pane_t3

0x0003,

0xf8c8,	// (0x000b9e5d) main_image3_pane_t_ParamLimits

0xf8c8,	// (0x000b9e5d) main_image3_pane_t

0xa55d,	// (0x000b4af2) grid_sctrl_middle_pane_cp01_ParamLimits

0xa55d,	// (0x000b4af2) grid_sctrl_middle_pane_cp01

0x580f,	// (0x000afda4) cell_sctrl_middle_pane_cp01_ParamLimits

0x580f,	// (0x000afda4) cell_sctrl_middle_pane_cp01

0x582c,	// (0x000afdc1) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x582c,	// (0x000afdc1) cell_sctrl_middle_pane_cp01_g1

0x9375,	// (0x000b390a) main_call4_pane

0x5842,	// (0x000afdd7) aid_size_button_call4_ParamLimits

0x5842,	// (0x000afdd7) aid_size_button_call4

0x5873,	// (0x000afe08) call4_windows_pane_ParamLimits

0x5873,	// (0x000afe08) call4_windows_pane

0x5893,	// (0x000afe28) grid_call4_button_pane_ParamLimits

0x5893,	// (0x000afe28) grid_call4_button_pane

0xd4f7,	// (0x000b7a8c) call4_windows_conf_pane

0xd50c,	// (0x000b7aa1) popup_call4_audio_first_window_ParamLimits

0xd50c,	// (0x000b7aa1) popup_call4_audio_first_window

0xd558,	// (0x000b7aed) popup_call4_audio_second_window_ParamLimits

0xd558,	// (0x000b7aed) popup_call4_audio_second_window

0xd56c,	// (0x000b7b01) popup_call4_audio_wait_window_ParamLimits

0xd56c,	// (0x000b7b01) popup_call4_audio_wait_window

0x58c0,	// (0x000afe55) cell_call4_button_pane_ParamLimits

0x58c0,	// (0x000afe55) cell_call4_button_pane

0x58e9,	// (0x000afe7e) bg_button_pane_cp09_ParamLimits

0x58e9,	// (0x000afe7e) bg_button_pane_cp09

0x58f5,	// (0x000afe8a) cell_call4_button_pane_g1_ParamLimits

0x58f5,	// (0x000afe8a) cell_call4_button_pane_g1

0x591b,	// (0x000afeb0) cell_call4_button_pane_t1_ParamLimits

0x591b,	// (0x000afeb0) cell_call4_button_pane_t1

0xd5b4,	// (0x000b7b49) popup_call4_audio_conf_window_ParamLimits

0xd5b4,	// (0x000b7b49) popup_call4_audio_conf_window

0x4b4b,	// (0x000af0e0) mup3_progress_pane_t1_ParamLimits

0x4b6a,	// (0x000af0ff) mup3_progress_pane_t2_ParamLimits

0xce9f,	// (0x000b7434) mup3_progress_pane_t3_ParamLimits

0xf79c,	// (0x000b9d31) mup3_progress_pane_t_ParamLimits

0xcebc,	// (0x000b7451) mup_progress_pane_cp03_ParamLimits

0x5157,	// (0x000af6ec) mup3_control_keys_pane_g4_copy1

0x9c25,	// (0x000b41ba) mp4_rocker2_pane_ParamLimits

0x9c25,	// (0x000b41ba) mp4_rocker2_pane

0xd5c8,	// (0x000b7b5d) mp4_rocker2_pane_g1

0xd5d0,	// (0x000b7b65) mp4_rocker2_pane_g2

0x9c93,	// (0x000b4228) mp4_rocker2_pane_g3

0x9c9b,	// (0x000b4230) mp4_rocker2_pane_g4

0x9ca3,	// (0x000b4238) mp4_rocker2_pane_g5

0x0004,

0xf8d1,	// (0x000b9e66) mp4_rocker2_pane_g

0x9375,	// (0x000b390a) main_camera4_pane

0x9375,	// (0x000b390a) main_video4_pane

0x53da,	// (0x000af96f) main_video_tele_dialer_pane_t1_ParamLimits

0x53da,	// (0x000af96f) main_video_tele_dialer_pane_t1

0x53f3,	// (0x000af988) main_video_tele_dialer_pane_t2_ParamLimits

0x53f3,	// (0x000af988) main_video_tele_dialer_pane_t2

0x0001,

0xf88b,	// (0x000b9e20) main_video_tele_dialer_pane_t_ParamLimits

0xf88b,	// (0x000b9e20) main_video_tele_dialer_pane_t

0x5959,	// (0x000afeee) cam4_autofocus_pane_ParamLimits

0x5959,	// (0x000afeee) cam4_autofocus_pane

0x596f,	// (0x000aff04) cam4_image_uncrop_pane_ParamLimits

0x596f,	// (0x000aff04) cam4_image_uncrop_pane

0x5989,	// (0x000aff1e) cam4_indicators_pane_ParamLimits

0x5989,	// (0x000aff1e) cam4_indicators_pane

0x59b4,	// (0x000aff49) main_camera4_pane_g1_ParamLimits

0x59b4,	// (0x000aff49) main_camera4_pane_g1

0x59c6,	// (0x000aff5b) main_camera4_pane_g2_ParamLimits

0x59c6,	// (0x000aff5b) main_camera4_pane_g2

0x59d9,	// (0x000aff6e) main_camera4_pane_g3_ParamLimits

0x59d9,	// (0x000aff6e) main_camera4_pane_g3

0x59ec,	// (0x000aff81) main_camera4_pane_g4_ParamLimits

0x59ec,	// (0x000aff81) main_camera4_pane_g4

0x59ff,	// (0x000aff94) main_camera4_pane_g5_ParamLimits

0x59ff,	// (0x000aff94) main_camera4_pane_g5

0x0005,

0xf8dc,	// (0x000b9e71) main_camera4_pane_g_ParamLimits

0xf8dc,	// (0x000b9e71) main_camera4_pane_g

0x5a23,	// (0x000affb8) main_camera4_pane_t1_ParamLimits

0x5a23,	// (0x000affb8) main_camera4_pane_t1

0x9cc7,	// (0x000b425c) bg_tb_trans_pane_cp06

0x9cdd,	// (0x000b4272) cam4_indicators_pane_g1

0x9cee,	// (0x000b4283) cam4_indicators_pane_g2

0x0002,

0xf8f7,	// (0x000b9e8c) cam4_indicators_pane_g

0x9d0c,	// (0x000b42a1) cam4_indicators_pane_t1

0x5a87,	// (0x000b001c) main_video4_pane_g1_ParamLimits

0x5a87,	// (0x000b001c) main_video4_pane_g1

0x5a96,	// (0x000b002b) main_video4_pane_g2_ParamLimits

0x5a96,	// (0x000b002b) main_video4_pane_g2

0x5aa5,	// (0x000b003a) main_video4_pane_g3_ParamLimits

0x5aa5,	// (0x000b003a) main_video4_pane_g3

0x5ab4,	// (0x000b0049) main_video4_pane_g4_ParamLimits

0x5ab4,	// (0x000b0049) main_video4_pane_g4

0x0004,

0xf8fe,	// (0x000b9e93) main_video4_pane_g_ParamLimits

0xf8fe,	// (0x000b9e93) main_video4_pane_g

0x5ad2,	// (0x000b0067) vid4_indicators_pane_ParamLimits

0x5ad2,	// (0x000b0067) vid4_indicators_pane

0x5b00,	// (0x000b0095) video4_image_uncrop_cif_pane_ParamLimits

0x5b00,	// (0x000b0095) video4_image_uncrop_cif_pane

0x5b1a,	// (0x000b00af) video4_image_uncrop_nhd_pane_ParamLimits

0x5b1a,	// (0x000b00af) video4_image_uncrop_nhd_pane

0x596f,	// (0x000aff04) video4_image_uncrop_vga_pane_ParamLimits

0x596f,	// (0x000aff04) video4_image_uncrop_vga_pane

0x9367,	// (0x000b38fc) bg_tb_trans_pane_cp07

0x9d36,	// (0x000b42cb) vid4_indicators_pane_g1

0x9d4a,	// (0x000b42df) vid4_indicators_pane_g2

0x9d5e,	// (0x000b42f3) vid4_indicators_pane_g3

0x0004,

0xf909,	// (0x000b9e9e) vid4_indicators_pane_g

0x9d8b,	// (0x000b4320) vid4_indicators_pane_t1

0x5b2e,	// (0x000b00c3) cam4_autofocus_pane_g1

0x5b36,	// (0x000b00cb) cam4_autofocus_pane_g2

0x5b3e,	// (0x000b00d3) cam4_autofocus_pane_g3

0x0002,

0xf914,	// (0x000b9ea9) cam4_autofocus_pane_g

0x5b46,	// (0x000b00db) cam4_autofocus_pane_g3_copy1

0x5422,	// (0x000af9b7) video_down_pane_cp_t1

0x5430,	// (0x000af9c5) video_down_pane_cp_t2

0x0001,

0xf890,	// (0x000b9e25) video_down_pane_cp_t

0x9367,	// (0x000b38fc) popup_vitu2_window_ParamLimits

0x9367,	// (0x000b38fc) popup_vitu2_window

0x5b4e,	// (0x000b00e3) aid_size_cell2_itu2_ParamLimits

0x5b4e,	// (0x000b00e3) aid_size_cell2_itu2

0x5b74,	// (0x000b0109) aid_size_cell_itu2_ParamLimits

0x5b74,	// (0x000b0109) aid_size_cell_itu2

0x5bcf,	// (0x000b0164) bg_popup_window_pane_cp09_ParamLimits

0x5bcf,	// (0x000b0164) bg_popup_window_pane_cp09

0x5bdd,	// (0x000b0172) field_vitu2_entry_pane_ParamLimits

0x5bdd,	// (0x000b0172) field_vitu2_entry_pane

0x5c00,	// (0x000b0195) grid_vitu2_function_pane_ParamLimits

0x5c00,	// (0x000b0195) grid_vitu2_function_pane

0x5c4b,	// (0x000b01e0) grid_vitu2_itu_pane_ParamLimits

0x5c4b,	// (0x000b01e0) grid_vitu2_itu_pane

0x5cde,	// (0x000b0273) cell_vitu2_itu_pane_ParamLimits

0x5cde,	// (0x000b0273) cell_vitu2_itu_pane

0x5d0a,	// (0x000b029f) cell_vitu2_function_pane_ParamLimits

0x5d0a,	// (0x000b029f) cell_vitu2_function_pane

0xd5ea,	// (0x000b7b7f) bg_popup_call_pane_cp08_ParamLimits

0xd5ea,	// (0x000b7b7f) bg_popup_call_pane_cp08

0xd601,	// (0x000b7b96) field_vitu2_entry_pane_g1

0xd60d,	// (0x000b7ba2) field_vitu2_entry_pane_g2

0x0002,

0xf91b,	// (0x000b9eb0) field_vitu2_entry_pane_g

0x5d49,	// (0x000b02de) field_vitu2_entry_pane_t1_ParamLimits

0x5d49,	// (0x000b02de) field_vitu2_entry_pane_t1

0xa5df,	// (0x000b4b74) field_vitu2_entry_pane_t2_ParamLimits

0xa5df,	// (0x000b4b74) field_vitu2_entry_pane_t2

0x0001,

0xf922,	// (0x000b9eb7) field_vitu2_entry_pane_t_ParamLimits

0xf922,	// (0x000b9eb7) field_vitu2_entry_pane_t

0x5d79,	// (0x000b030e) bg_button_pane_cp010_ParamLimits

0x5d79,	// (0x000b030e) bg_button_pane_cp010

0x9da2,	// (0x000b4337) cell_vitu2_itu_pane_g1

0x5d95,	// (0x000b032a) cell_vitu2_itu_pane_t1_ParamLimits

0x5d95,	// (0x000b032a) cell_vitu2_itu_pane_t1

0xfffe,	// (0x000aa593) cell_vitu2_itu_pane_t2_ParamLimits

0xfffe,	// (0x000aa593) cell_vitu2_itu_pane_t2

0x0002,

0xf92c,	// (0x000b9ec1) cell_vitu2_itu_pane_t_ParamLimits

0xf92c,	// (0x000b9ec1) cell_vitu2_itu_pane_t

0x9367,	// (0x000b38fc) bg_button_pane_cp011

0x5df3,	// (0x000b0388) cell_vitu2_function_pane_g1

0x9375,	// (0x000b390a) main_myfav_hc_pane

0x57d7,	// (0x000afd6c) popup_image3_note_pane_ParamLimits

0x57d7,	// (0x000afd6c) popup_image3_note_pane

0x57f3,	// (0x000afd88) popup_image3_tool_bar_pane_ParamLimits

0x57f3,	// (0x000afd88) popup_image3_tool_bar_pane

0x008c,	// (0x000aa621) cell_vitu2_itu_pane_t3_ParamLimits

0x008c,	// (0x000aa621) cell_vitu2_itu_pane_t3

0x92ff,	// (0x000b3894) bg_popup_trans_pane

0xd62f,	// (0x000b7bc4) grid_image3_tool_bar_pane

0xd639,	// (0x000b7bce) bg_popup_trans_pane_g1

0xab2f,	// (0x000b50c4) bg_popup_trans_pane_g2

0xd641,	// (0x000b7bd6) bg_popup_trans_pane_g3

0xd649,	// (0x000b7bde) bg_popup_trans_pane_g4

0xd651,	// (0x000b7be6) bg_popup_trans_pane_g5

0xd659,	// (0x000b7bee) bg_popup_trans_pane_g6

0xd661,	// (0x000b7bf6) bg_popup_trans_pane_g7

0xd669,	// (0x000b7bfe) bg_popup_trans_pane_g8

0xab0f,	// (0x000b50a4) bg_popup_trans_pane_g9

0x0008,

0xf933,	// (0x000b9ec8) bg_popup_trans_pane_g

0xd671,	// (0x000b7c06) cell_image3_tool_bar_pane_ParamLimits

0xd671,	// (0x000b7c06) cell_image3_tool_bar_pane

0xcbc4,	// (0x000b7159) cell_image3_tool_bar_pane_g1

0x92ff,	// (0x000b3894) bg_popup_trans_pane_cp1

0xd685,	// (0x000b7c1a) popup_image3_note_pane_t1

0xd693,	// (0x000b7c28) popup_image3_note_pane_t2

0xd6a1,	// (0x000b7c36) popup_image3_note_pane_t3

0x0002,

0xf946,	// (0x000b9edb) popup_image3_note_pane_t

0xd6af,	// (0x000b7c44) popup_image3_note_pane_t3_copy1

0x5e07,	// (0x000b039c) bg_myfav_hc_instruction_pane_ParamLimits

0x5e07,	// (0x000b039c) bg_myfav_hc_instruction_pane

0x5e1d,	// (0x000b03b2) cell_myfav_contact_pane_ParamLimits

0x5e1d,	// (0x000b03b2) cell_myfav_contact_pane

0x5e3b,	// (0x000b03d0) cell_myfav_contact_pane_cp1_ParamLimits

0x5e3b,	// (0x000b03d0) cell_myfav_contact_pane_cp1

0x5e53,	// (0x000b03e8) cell_myfav_contact_pane_cp2_ParamLimits

0x5e53,	// (0x000b03e8) cell_myfav_contact_pane_cp2

0x5e6b,	// (0x000b0400) cell_myfav_contact_pane_cp3_ParamLimits

0x5e6b,	// (0x000b0400) cell_myfav_contact_pane_cp3

0x5e82,	// (0x000b0417) cell_myfav_contact_pane_cp4_ParamLimits

0x5e82,	// (0x000b0417) cell_myfav_contact_pane_cp4

0x5e9a,	// (0x000b042f) cell_myfav_contact_pane_cp5_ParamLimits

0x5e9a,	// (0x000b042f) cell_myfav_contact_pane_cp5

0x5eae,	// (0x000b0443) cell_myfav_contact_pane_cp6_ParamLimits

0x5eae,	// (0x000b0443) cell_myfav_contact_pane_cp6

0x5ec4,	// (0x000b0459) cell_myfav_contact_pane_cp7_ParamLimits

0x5ec4,	// (0x000b0459) cell_myfav_contact_pane_cp7

0xd6bd,	// (0x000b7c52) listscroll_gen_pane_cp05

0x5ede,	// (0x000b0473) main_myfav_hc_pane_g1_ParamLimits

0x5ede,	// (0x000b0473) main_myfav_hc_pane_g1

0x5ef8,	// (0x000b048d) main_myfav_hc_pane_g2_ParamLimits

0x5ef8,	// (0x000b048d) main_myfav_hc_pane_g2

0x0002,

0xf94d,	// (0x000b9ee2) main_myfav_hc_pane_g_ParamLimits

0xf94d,	// (0x000b9ee2) main_myfav_hc_pane_g

0x5f2a,	// (0x000b04bf) main_myfav_hc_pane_t1_ParamLimits

0x5f2a,	// (0x000b04bf) main_myfav_hc_pane_t1

0xd6c6,	// (0x000b7c5b) main_myfav_hc_pane_t2_ParamLimits

0xd6c6,	// (0x000b7c5b) main_myfav_hc_pane_t2

0xd6d8,	// (0x000b7c6d) main_myfav_hc_pane_t3_ParamLimits

0xd6d8,	// (0x000b7c6d) main_myfav_hc_pane_t3

0x5f41,	// (0x000b04d6) main_myfav_hc_pane_t4_ParamLimits

0x5f41,	// (0x000b04d6) main_myfav_hc_pane_t4

0x0004,

0xf954,	// (0x000b9ee9) main_myfav_hc_pane_t_ParamLimits

0xf954,	// (0x000b9ee9) main_myfav_hc_pane_t

0xcbc4,	// (0x000b7159) bg_myfav_hc_instruction_pane_g1

0xd6ea,	// (0x000b7c7f) cell_myfav_contact_pane_g1_ParamLimits

0xd6ea,	// (0x000b7c7f) cell_myfav_contact_pane_g1

0xd6ea,	// (0x000b7c7f) cell_myfav_contact_pane_g2_ParamLimits

0xd6ea,	// (0x000b7c7f) cell_myfav_contact_pane_g2

0xd6f6,	// (0x000b7c8b) cell_myfav_contact_pane_g3_ParamLimits

0xd6f6,	// (0x000b7c8b) cell_myfav_contact_pane_g3

0xce89,	// (0x000b741e) cell_myfav_contact_pane_g4_ParamLimits

0xce89,	// (0x000b741e) cell_myfav_contact_pane_g4

0xd703,	// (0x000b7c98) cell_myfav_contact_pane_g5_ParamLimits

0xd703,	// (0x000b7c98) cell_myfav_contact_pane_g5

0x0004,

0xf95f,	// (0x000b9ef4) cell_myfav_contact_pane_g_ParamLimits

0xf95f,	// (0x000b9ef4) cell_myfav_contact_pane_g

0x5f12,	// (0x000b04a7) main_myfav_hc_pane_g3_ParamLimits

0x5f12,	// (0x000b04a7) main_myfav_hc_pane_g3

0x0271,	// (0x000aa806) popup_adpt_find_window

0x5f69,	// (0x000b04fe) afind_page_pane_ParamLimits

0x5f69,	// (0x000b04fe) afind_page_pane

0x5f7e,	// (0x000b0513) aid_size_cell_afind_ParamLimits

0x5f7e,	// (0x000b0513) aid_size_cell_afind

0x5f9c,	// (0x000b0531) bg_popup_sub_pane_cp09_ParamLimits

0x5f9c,	// (0x000b0531) bg_popup_sub_pane_cp09

0x5fa9,	// (0x000b053e) find_pane_cp01_ParamLimits

0x5fa9,	// (0x000b053e) find_pane_cp01

0xd70f,	// (0x000b7ca4) grid_afind_control_pane_ParamLimits

0xd70f,	// (0x000b7ca4) grid_afind_control_pane

0x5fb6,	// (0x000b054b) grid_afind_pane_ParamLimits

0x5fb6,	// (0x000b054b) grid_afind_pane

0x5fd5,	// (0x000b056a) cell_afind_pane_ParamLimits

0x5fd5,	// (0x000b056a) cell_afind_pane

0xcbc4,	// (0x000b7159) afind_page_pane_g1

0x603c,	// (0x000b05d1) afind_page_pane_g2

0x6045,	// (0x000b05da) afind_page_pane_g3

0x0002,

0xf96a,	// (0x000b9eff) afind_page_pane_g

0x604e,	// (0x000b05e3) afind_page_pane_t1

0xd723,	// (0x000b7cb8) cell_afind_grid_control_pane_ParamLimits

0xd723,	// (0x000b7cb8) cell_afind_grid_control_pane

0xd4eb,	// (0x000b7a80) bg_button_pane_cp69_ParamLimits

0xd4eb,	// (0x000b7a80) bg_button_pane_cp69

0x606e,	// (0x000b0603) cell_afind_pane_g1_ParamLimits

0x606e,	// (0x000b0603) cell_afind_pane_g1

0x607b,	// (0x000b0610) cell_afind_pane_t1_ParamLimits

0x607b,	// (0x000b0610) cell_afind_pane_t1

0xa41f,	// (0x000b49b4) bg_button_pane_cp72

0xd732,	// (0x000b7cc7) cell_afind_grid_control_pane_g1

0x30e8,	// (0x000ad67d) aid_image_placing_area_ParamLimits

0x30e8,	// (0x000ad67d) aid_image_placing_area

0xd1b9,	// (0x000b774e) field_vitu_entry_pane_g1_ParamLimits

0xd1b9,	// (0x000b774e) field_vitu_entry_pane_g1

0xd1c5,	// (0x000b775a) field_vitu_entry_pane_g2_ParamLimits

0xd1c5,	// (0x000b775a) field_vitu_entry_pane_g2

0x0001,

0xf81b,	// (0x000b9db0) field_vitu_entry_pane_g_ParamLimits

0xf81b,	// (0x000b9db0) field_vitu_entry_pane_g

0x5223,	// (0x000af7b8) cell_vitu_itu_pane_g1_ParamLimits

0x5273,	// (0x000af808) cell_vitu_itu_pane_t3_ParamLimits

0x5273,	// (0x000af808) cell_vitu_itu_pane_t3

0xd49b,	// (0x000b7a30) mp4_progress_pane_t1_ParamLimits

0xd4b4,	// (0x000b7a49) mp4_progress_pane_t2_ParamLimits

0xf8b0,	// (0x000b9e45) mp4_progress_pane_t_ParamLimits

0xd4cd,	// (0x000b7a62) mup_progress_pane_cp04_ParamLimits

0x5f55,	// (0x000b04ea) main_myfav_hc_pane_t5_ParamLimits

0x5f55,	// (0x000b04ea) main_myfav_hc_pane_t5

0x0132,	// (0x000aa6c7) aid_zoom_text_primary

0x0271,	// (0x000aa806) popup_adpt_find_window_ParamLimits

0x9367,	// (0x000b38fc) main_cam_set_pane

0x59a0,	// (0x000aff35) cam4_zoom_pane_ParamLimits

0x59a0,	// (0x000aff35) cam4_zoom_pane

0x608d,	// (0x000b0622) main_cam_set_pane_g1_ParamLimits

0x608d,	// (0x000b0622) main_cam_set_pane_g1

0x609b,	// (0x000b0630) main_cam_set_pane_g2_ParamLimits

0x609b,	// (0x000b0630) main_cam_set_pane_g2

0x0001,

0xf971,	// (0x000b9f06) main_cam_set_pane_g_ParamLimits

0xf971,	// (0x000b9f06) main_cam_set_pane_g

0x60bc,	// (0x000b0651) main_cam_set_pane_t1_ParamLimits

0x60bc,	// (0x000b0651) main_cam_set_pane_t1

0x60d7,	// (0x000b066c) main_cset_listscroll_pane_ParamLimits

0x60d7,	// (0x000b066c) main_cset_listscroll_pane

0x60f7,	// (0x000b068c) main_cset_slider_pane_ParamLimits

0x60f7,	// (0x000b068c) main_cset_slider_pane

0xd743,	// (0x000b7cd8) main_cset_list_pane_ParamLimits

0xd743,	// (0x000b7cd8) main_cset_list_pane

0xd753,	// (0x000b7ce8) scroll_pane_cp028

0x611d,	// (0x000b06b2) aid_area_touch_slider

0x6139,	// (0x000b06ce) cset_slider_pane

0x6163,	// (0x000b06f8) main_cset_slider_pane_g1

0x6178,	// (0x000b070d) main_cset_slider_pane_g2

0x0011,

0xf976,	// (0x000b9f0b) main_cset_slider_pane_g

0xd78c,	// (0x000b7d21) main_cset_slider_pane_t1

0x6234,	// (0x000b07c9) main_cset_slider_pane_t2

0x624e,	// (0x000b07e3) main_cset_slider_pane_t3

0x6268,	// (0x000b07fd) main_cset_slider_pane_t4

0x6282,	// (0x000b0817) main_cset_slider_pane_t5

0x629c,	// (0x000b0831) main_cset_slider_pane_t6

0x62b1,	// (0x000b0846) main_cset_slider_pane_t7

0x000e,

0xf99b,	// (0x000b9f30) main_cset_slider_pane_t

0x63b5,	// (0x000b094a) cset_list_set_pane_ParamLimits

0x63b5,	// (0x000b094a) cset_list_set_pane

0x63c8,	// (0x000b095d) aid_position_infowindow_above

0x63d0,	// (0x000b0965) aid_position_infowindow_below

0x63d8,	// (0x000b096d) cset_list_set_pane_g1_ParamLimits

0x63d8,	// (0x000b096d) cset_list_set_pane_g1

0xa5fc,	// (0x000b4b91) cset_list_set_pane_g3_ParamLimits

0xa5fc,	// (0x000b4b91) cset_list_set_pane_g3

0x0001,

0xf9ba,	// (0x000b9f4f) cset_list_set_pane_g_ParamLimits

0xf9ba,	// (0x000b9f4f) cset_list_set_pane_g

0xa60b,	// (0x000b4ba0) cset_list_set_pane_t1_ParamLimits

0xa60b,	// (0x000b4ba0) cset_list_set_pane_t1

0xa55d,	// (0x000b4af2) list_highlight_pane_cp021_ParamLimits

0xa55d,	// (0x000b4af2) list_highlight_pane_cp021

0xb48e,	// (0x000b5a23) cset_slider_pane_g1

0xb4a0,	// (0x000b5a35) cset_slider_pane_g2

0xb497,	// (0x000b5a2c) cset_slider_pane_g3

0x0002,

0xf9bf,	// (0x000b9f54) cset_slider_pane_g

0x9db4,	// (0x000b4349) aid_area_touch_cam4_zoom

0x9dbc,	// (0x000b4351) cam4_zoom_cont_pane

0x9dc4,	// (0x000b4359) cam4_zoom_pane_g1

0x9dcc,	// (0x000b4361) cam4_zoom_pane_g2

0x63e4,	// (0x000b0979) cam4_zoom_pane_g3

0x0002,

0xf9c6,	// (0x000b9f5b) cam4_zoom_pane_g

0x9dd4,	// (0x000b4369) cam4_zoom_cont_pane_g1

0x9ddd,	// (0x000b4372) cam4_zoom_cont_pane_g2

0x9de6,	// (0x000b437b) cam4_zoom_cont_pane_g3

0x0002,

0xf9cd,	// (0x000b9f62) cam4_zoom_cont_pane_g

0x5860,	// (0x000afdf5) call4_image_pane_ParamLimits

0x5860,	// (0x000afdf5) call4_image_pane

0xd4f7,	// (0x000b7a8c) call4_windows_conf_pane_ParamLimits

0xd536,	// (0x000b7acb) popup_call4_audio_in_window_ParamLimits

0xd536,	// (0x000b7acb) popup_call4_audio_in_window

0x92ff,	// (0x000b3894) bg_popup_call2_act_pane_cp02

0xd5ac,	// (0x000b7b41) call4_list_conf_pane

0xcbc4,	// (0x000b7159) call4_image_pane_g1

0xcbc4,	// (0x000b7159) call4_image_pane_g2

0x0001,

0xf6dc,	// (0x000b9c71) call4_image_pane_g

0xd82c,	// (0x000b7dc1) list_single_graphic_popup_conf4_pane_ParamLimits

0xd82c,	// (0x000b7dc1) list_single_graphic_popup_conf4_pane

0x92ff,	// (0x000b3894) list_highlight_pane_cp022

0xd83f,	// (0x000b7dd4) list_single_graphic_popup_conf4_pane_g1

0xb075,	// (0x000b560a) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9d4,	// (0x000b9f69) list_single_graphic_popup_conf4_pane_g

0xd847,	// (0x000b7ddc) list_single_graphic_popup_conf4_pane_t1

0x146f,	// (0x000aba04) popup_vtel_slider_window_ParamLimits

0x146f,	// (0x000aba04) popup_vtel_slider_window

0xd4d9,	// (0x000b7a6e) dialer2_ne_pane_t2_ParamLimits

0xd4d9,	// (0x000b7a6e) dialer2_ne_pane_t2

0x0001,

0xf8b5,	// (0x000b9e4a) dialer2_ne_pane_t_ParamLimits

0xf8b5,	// (0x000b9e4a) dialer2_ne_pane_t

0xc9a7,	// (0x000b6f3c) bg_popup_sub_pane_cp010_ParamLimits

0xc9a7,	// (0x000b6f3c) bg_popup_sub_pane_cp010

0x63ec,	// (0x000b0981) popup_vtel_slider_window_g1_ParamLimits

0x63ec,	// (0x000b0981) popup_vtel_slider_window_g1

0x63ff,	// (0x000b0994) popup_vtel_slider_window_g2_ParamLimits

0x63ff,	// (0x000b0994) popup_vtel_slider_window_g2

0x0003,

0xf9d9,	// (0x000b9f6e) popup_vtel_slider_window_g_ParamLimits

0xf9d9,	// (0x000b9f6e) popup_vtel_slider_window_g

0x6455,	// (0x000b09ea) vtel_slider_pane_ParamLimits

0x6455,	// (0x000b09ea) vtel_slider_pane

0x6477,	// (0x000b0a0c) vtel_slider_pane_g1_ParamLimits

0x6477,	// (0x000b0a0c) vtel_slider_pane_g1

0x648b,	// (0x000b0a20) vtel_slider_pane_g2_ParamLimits

0x648b,	// (0x000b0a20) vtel_slider_pane_g2

0x64a3,	// (0x000b0a38) vtel_slider_pane_g3_ParamLimits

0x64a3,	// (0x000b0a38) vtel_slider_pane_g3

0x6477,	// (0x000b0a0c) vtel_slider_pane_g4_ParamLimits

0x6477,	// (0x000b0a0c) vtel_slider_pane_g4

0x64b9,	// (0x000b0a4e) vtel_slider_pane_g5_ParamLimits

0x64b9,	// (0x000b0a4e) vtel_slider_pane_g5

0x0004,

0xf9e2,	// (0x000b9f77) vtel_slider_pane_g_ParamLimits

0xf9e2,	// (0x000b9f77) vtel_slider_pane_g

0x9367,	// (0x000b38fc) main_gallery2_pane

0x5ba0,	// (0x000b0135) aid_size_row_itut2_dropdow_list_ParamLimits

0x5ba0,	// (0x000b0135) aid_size_row_itut2_dropdow_list

0x5c25,	// (0x000b01ba) grid_vitu2_function_top_pane_ParamLimits

0x5c25,	// (0x000b01ba) grid_vitu2_function_top_pane

0x5c8c,	// (0x000b0221) popup_vitu2_dropdown_list_window_ParamLimits

0x5c8c,	// (0x000b0221) popup_vitu2_dropdown_list_window

0x5cb2,	// (0x000b0247) popup_vitu2_match_list_window

0x64dd,	// (0x000b0a72) cell_vitu2_function_top_pane_ParamLimits

0x64dd,	// (0x000b0a72) cell_vitu2_function_top_pane

0x64ff,	// (0x000b0a94) cell_vitu2_function_top_pane_cp01_ParamLimits

0x64ff,	// (0x000b0a94) cell_vitu2_function_top_pane_cp01

0x651b,	// (0x000b0ab0) cell_vitu2_function_top_wide_pane_ParamLimits

0x651b,	// (0x000b0ab0) cell_vitu2_function_top_wide_pane

0x9367,	// (0x000b38fc) bg_button_pane_cp012

0x6537,	// (0x000b0acc) cell_vitu2_function_top_pane_g1

0x9def,	// (0x000b4384) bg_button_pane_cp013_ParamLimits

0x9def,	// (0x000b4384) bg_button_pane_cp013

0x654b,	// (0x000b0ae0) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x654b,	// (0x000b0ae0) cell_vitu2_function_top_wide_pane_g1

0x9367,	// (0x000b38fc) bg_popup_sub_pane_cp20

0x6563,	// (0x000b0af8) list_vitu2_match_list_pane

0xd639,	// (0x000b7bce) bg_popup_sub_pane_cp20_g1

0xd641,	// (0x000b7bd6) bg_popup_sub_pane_cp20_g2

0xab2f,	// (0x000b50c4) bg_popup_sub_pane_cp20_g3

0xd649,	// (0x000b7bde) bg_popup_sub_pane_cp20_g4

0xab0f,	// (0x000b50a4) bg_popup_sub_pane_cp20_g5

0xd85d,	// (0x000b7df2) bg_popup_sub_pane_cp20_g6

0xd659,	// (0x000b7bee) bg_popup_sub_pane_cp20_g7

0xd661,	// (0x000b7bf6) bg_popup_sub_pane_cp20_g8

0xd669,	// (0x000b7bfe) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9ed,	// (0x000b9f82) bg_popup_sub_pane_cp20_g

0x9e0b,	// (0x000b43a0) list_vitu2_match_list_item_pane_ParamLimits

0x9e0b,	// (0x000b43a0) list_vitu2_match_list_item_pane

0x9e1d,	// (0x000b43b2) list_vitu2_match_list_item_pane_t1

0x9375,	// (0x000b390a) bg_popup_sub_pane_cp21

0x9e2b,	// (0x000b43c0) grid_vitu2_dropdown_list_pane

0x65cb,	// (0x000b0b60) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x65cb,	// (0x000b0b60) cell_vitu2_dropdown_list_char_pane

0x65ec,	// (0x000b0b81) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x65ec,	// (0x000b0b81) cell_vitu2_dropdown_list_ctrl_pane

0xd865,	// (0x000b7dfa) cell_vitu2_dropdown_list_char_pane_g1

0xd86e,	// (0x000b7e03) cell_vitu2_dropdown_list_char_pane_g2

0xd877,	// (0x000b7e0c) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa0a,	// (0x000b9f9f) cell_vitu2_dropdown_list_char_pane_g

0x6618,	// (0x000b0bad) cell_vitu2_dropdown_list_char_pane_t1

0x6626,	// (0x000b0bbb) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x6626,	// (0x000b0bbb) cell_vitu2_dropdown_list_ctrl_pane_g1

0x6636,	// (0x000b0bcb) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x6636,	// (0x000b0bcb) cell_vitu2_dropdown_list_ctrl_pane_g2

0x6647,	// (0x000b0bdc) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x6647,	// (0x000b0bdc) cell_vitu2_dropdown_list_ctrl_pane_g3

0x6657,	// (0x000b0bec) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x6657,	// (0x000b0bec) cell_vitu2_dropdown_list_ctrl_pane_g4

0x9cc7,	// (0x000b425c) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x9cc7,	// (0x000b425c) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa11,	// (0x000b9fa6) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa11,	// (0x000b9fa6) cell_vitu2_dropdown_list_ctrl_pane_g

0x6673,	// (0x000b0c08) aid_size_cell_gallery2_ParamLimits

0x6673,	// (0x000b0c08) aid_size_cell_gallery2

0x6691,	// (0x000b0c26) grid_gallery2_pane_ParamLimits

0x6691,	// (0x000b0c26) grid_gallery2_pane

0x66ab,	// (0x000b0c40) scroll_pane_cp029_ParamLimits

0x66ab,	// (0x000b0c40) scroll_pane_cp029

0x66b7,	// (0x000b0c4c) cell_gallery2_pane_ParamLimits

0x66b7,	// (0x000b0c4c) cell_gallery2_pane

0xd880,	// (0x000b7e15) cell_gallery2_pane_g2

0x6713,	// (0x000b0ca8) cell_gallery2_pane_g3

0xd888,	// (0x000b7e1d) cell_gallery2_pane_g4

0xd890,	// (0x000b7e25) cell_gallery2_pane_g5

0xa3cd,	// (0x000b4962) grid_highlight_pane_cp10

0x5cb2,	// (0x000b0247) popup_vitu2_match_list_window_ParamLimits

0x5cc7,	// (0x000b025c) popup_vitu2_query_window_ParamLimits

0x5cc7,	// (0x000b025c) popup_vitu2_query_window

0x9375,	// (0x000b390a) bg_vitu2_candi_button_pane

0xd865,	// (0x000b7dfa) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd86e,	// (0x000b7e03) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd877,	// (0x000b7e0c) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x671b,	// (0x000b0cb0) bg_button_pane_cp015

0x672f,	// (0x000b0cc4) bg_button_pane_cp016

0x6742,	// (0x000b0cd7) bg_button_pane_cp017

0xc7ba,	// (0x000b6d4f) bg_popup_sub_pane_cp22

0xd898,	// (0x000b7e2d) popup_vitu2_query_window_g1

0x6787,	// (0x000b0d1c) popup_vitu2_query_window_g2

0x0002,

0xfa1c,	// (0x000b9fb1) popup_vitu2_query_window_g

0x67a6,	// (0x000b0d3b) popup_vitu2_query_window_t1_ParamLimits

0x67a6,	// (0x000b0d3b) popup_vitu2_query_window_t1

0x67db,	// (0x000b0d70) popup_vitu2_query_window_t2_ParamLimits

0x67db,	// (0x000b0d70) popup_vitu2_query_window_t2

0x67ed,	// (0x000b0d82) popup_vitu2_query_window_t3_ParamLimits

0x67ed,	// (0x000b0d82) popup_vitu2_query_window_t3

0x6815,	// (0x000b0daa) popup_vitu2_query_window_t4_ParamLimits

0x6815,	// (0x000b0daa) popup_vitu2_query_window_t4

0x6836,	// (0x000b0dcb) popup_vitu2_query_window_t5_ParamLimits

0x6836,	// (0x000b0dcb) popup_vitu2_query_window_t5

0x0006,

0xfa23,	// (0x000b9fb8) popup_vitu2_query_window_t_ParamLimits

0xfa23,	// (0x000b9fb8) popup_vitu2_query_window_t

0xd73b,	// (0x000b7cd0) main_cset_text_pane

0x611d,	// (0x000b06b2) aid_area_touch_slider_ParamLimits

0x6139,	// (0x000b06ce) cset_slider_pane_ParamLimits

0x6163,	// (0x000b06f8) main_cset_slider_pane_g1_ParamLimits

0x6178,	// (0x000b070d) main_cset_slider_pane_g2_ParamLimits

0xd75c,	// (0x000b7cf1) main_cset_slider_pane_g3_ParamLimits

0xd75c,	// (0x000b7cf1) main_cset_slider_pane_g3

0x618d,	// (0x000b0722) main_cset_slider_pane_g4_ParamLimits

0x618d,	// (0x000b0722) main_cset_slider_pane_g4

0x619c,	// (0x000b0731) main_cset_slider_pane_g5_ParamLimits

0x619c,	// (0x000b0731) main_cset_slider_pane_g5

0x61a8,	// (0x000b073d) main_cset_slider_pane_g6_ParamLimits

0x61a8,	// (0x000b073d) main_cset_slider_pane_g6

0xf976,	// (0x000b9f0b) main_cset_slider_pane_g_ParamLimits

0xd78c,	// (0x000b7d21) main_cset_slider_pane_t1_ParamLimits

0x6234,	// (0x000b07c9) main_cset_slider_pane_t2_ParamLimits

0x624e,	// (0x000b07e3) main_cset_slider_pane_t3_ParamLimits

0x6268,	// (0x000b07fd) main_cset_slider_pane_t4_ParamLimits

0x6282,	// (0x000b0817) main_cset_slider_pane_t5_ParamLimits

0x629c,	// (0x000b0831) main_cset_slider_pane_t6_ParamLimits

0x62b1,	// (0x000b0846) main_cset_slider_pane_t7_ParamLimits

0x62db,	// (0x000b0870) main_cset_slider_pane_t8_ParamLimits

0x62db,	// (0x000b0870) main_cset_slider_pane_t8

0x6303,	// (0x000b0898) main_cset_slider_pane_t9_ParamLimits

0x6303,	// (0x000b0898) main_cset_slider_pane_t9

0x632b,	// (0x000b08c0) main_cset_slider_pane_t10_ParamLimits

0x632b,	// (0x000b08c0) main_cset_slider_pane_t10

0x6353,	// (0x000b08e8) main_cset_slider_pane_t11_ParamLimits

0x6353,	// (0x000b08e8) main_cset_slider_pane_t11

0x637b,	// (0x000b0910) main_cset_slider_pane_t12_ParamLimits

0x637b,	// (0x000b0910) main_cset_slider_pane_t12

0x6398,	// (0x000b092d) main_cset_slider_pane_t13_ParamLimits

0x6398,	// (0x000b092d) main_cset_slider_pane_t13

0xf99b,	// (0x000b9f30) main_cset_slider_pane_t_ParamLimits

0x92ff,	// (0x000b3894) bg_popup_sub_pane_cp011

0xd8a4,	// (0x000b7e39) main_cset_text_pane_g1

0xd8ac,	// (0x000b7e41) main_cset_text_pane_t1

0xd8ba,	// (0x000b7e4f) main_cset_text_pane_t2

0xd8c8,	// (0x000b7e5d) main_cset_text_pane_t3

0xd8d6,	// (0x000b7e6b) main_cset_text_pane_t4

0xd8e4,	// (0x000b7e79) main_cset_text_pane_t5

0xd8f2,	// (0x000b7e87) main_cset_text_pane_t6

0xd900,	// (0x000b7e95) main_cset_text_pane_t7

0x0006,

0xfa32,	// (0x000b9fc7) main_cset_text_pane_t

0x9375,	// (0x000b390a) main_cam4_burst_pane

0x9375,	// (0x000b390a) main_cam5_pane

0x605c,	// (0x000b05f1) bg_button_pane_cp019

0x6065,	// (0x000b05fa) bg_button_pane_cp020

0xd768,	// (0x000b7cfd) main_cset_slider_pane_g7_ParamLimits

0xd768,	// (0x000b7cfd) main_cset_slider_pane_g7

0xd774,	// (0x000b7d09) main_cset_slider_pane_g8_ParamLimits

0xd774,	// (0x000b7d09) main_cset_slider_pane_g8

0x61bc,	// (0x000b0751) main_cset_slider_pane_g9_ParamLimits

0x61bc,	// (0x000b0751) main_cset_slider_pane_g9

0x61c8,	// (0x000b075d) main_cset_slider_pane_g10_ParamLimits

0x61c8,	// (0x000b075d) main_cset_slider_pane_g10

0x61d4,	// (0x000b0769) main_cset_slider_pane_g11_ParamLimits

0x61d4,	// (0x000b0769) main_cset_slider_pane_g11

0x61e0,	// (0x000b0775) main_cset_slider_pane_g12_ParamLimits

0x61e0,	// (0x000b0775) main_cset_slider_pane_g12

0x61ec,	// (0x000b0781) main_cset_slider_pane_g13_ParamLimits

0x61ec,	// (0x000b0781) main_cset_slider_pane_g13

0x61f8,	// (0x000b078d) main_cset_slider_pane_g14_ParamLimits

0x61f8,	// (0x000b078d) main_cset_slider_pane_g14

0x6204,	// (0x000b0799) main_cset_slider_pane_g15_ParamLimits

0x6204,	// (0x000b0799) main_cset_slider_pane_g15

0xd7ba,	// (0x000b7d4f) main_cset_slider_pane_t14_ParamLimits

0xd7ba,	// (0x000b7d4f) main_cset_slider_pane_t14

0xd7f3,	// (0x000b7d88) main_cset_slider_pane_t15_ParamLimits

0xd7f3,	// (0x000b7d88) main_cset_slider_pane_t15

0x68ad,	// (0x000b0e42) aid_cam4_burst_size_cell_ParamLimits

0x68ad,	// (0x000b0e42) aid_cam4_burst_size_cell

0x68cd,	// (0x000b0e62) grid_cam4_burst_pane_ParamLimits

0x68cd,	// (0x000b0e62) grid_cam4_burst_pane

0x6905,	// (0x000b0e9a) linegrid_cam4_burst_pane_ParamLimits

0x6905,	// (0x000b0e9a) linegrid_cam4_burst_pane

0xd947,	// (0x000b7edc) scroll_pane_cp30_ParamLimits

0xd947,	// (0x000b7edc) scroll_pane_cp30

0x692b,	// (0x000b0ec0) cell_cam4_burst_pane_ParamLimits

0x692b,	// (0x000b0ec0) cell_cam4_burst_pane

0xd90e,	// (0x000b7ea3) linegrid_cam4_burst_pane_g1_ParamLimits

0xd90e,	// (0x000b7ea3) linegrid_cam4_burst_pane_g1

0x6978,	// (0x000b0f0d) linegrid_cam4_burst_pane_g2_ParamLimits

0x6978,	// (0x000b0f0d) linegrid_cam4_burst_pane_g2

0xd91b,	// (0x000b7eb0) linegrid_cam4_burst_pane_g3_ParamLimits

0xd91b,	// (0x000b7eb0) linegrid_cam4_burst_pane_g3

0x0002,

0xfa41,	// (0x000b9fd6) linegrid_cam4_burst_pane_g_ParamLimits

0xfa41,	// (0x000b9fd6) linegrid_cam4_burst_pane_g

0x6989,	// (0x000b0f1e) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x6989,	// (0x000b0f1e) linegrid_cam4_burst_pane_g3_copy1

0xd928,	// (0x000b7ebd) linegrid_cam4_burst_pane_g4_ParamLimits

0xd928,	// (0x000b7ebd) linegrid_cam4_burst_pane_g4

0x69a3,	// (0x000b0f38) linegrid_cam4_burst_pane_g5_ParamLimits

0x69a3,	// (0x000b0f38) linegrid_cam4_burst_pane_g5

0x69b4,	// (0x000b0f49) linegrid_cam4_burst_pane_g6_ParamLimits

0x69b4,	// (0x000b0f49) linegrid_cam4_burst_pane_g6

0xd953,	// (0x000b7ee8) linegrid_cam4_burst_pane_g7_ParamLimits

0xd953,	// (0x000b7ee8) linegrid_cam4_burst_pane_g7

0x69cb,	// (0x000b0f60) cell_cam4_burst_pane_g1

0xd96c,	// (0x000b7f01) main_cam5_pane_t1_ParamLimits

0xd96c,	// (0x000b7f01) main_cam5_pane_t1

0xd97e,	// (0x000b7f13) main_cam5_pane_t2_ParamLimits

0xd97e,	// (0x000b7f13) main_cam5_pane_t2

0xd990,	// (0x000b7f25) main_cam5_pane_t3_ParamLimits

0xd990,	// (0x000b7f25) main_cam5_pane_t3

0xd9a2,	// (0x000b7f37) main_cam5_pane_t4_ParamLimits

0xd9a2,	// (0x000b7f37) main_cam5_pane_t4

0xd9ba,	// (0x000b7f4f) main_cam5_pane_t5_ParamLimits

0xd9ba,	// (0x000b7f4f) main_cam5_pane_t5

0xd9ce,	// (0x000b7f63) main_cam5_pane_t6_ParamLimits

0xd9ce,	// (0x000b7f63) main_cam5_pane_t6

0xd9e2,	// (0x000b7f77) main_cam5_pane_t7_ParamLimits

0xd9e2,	// (0x000b7f77) main_cam5_pane_t7

0xd9f4,	// (0x000b7f89) main_cam5_pane_t8_ParamLimits

0xd9f4,	// (0x000b7f89) main_cam5_pane_t8

0xda10,	// (0x000b7fa5) main_cam5_pane_t9_ParamLimits

0xda10,	// (0x000b7fa5) main_cam5_pane_t9

0xda22,	// (0x000b7fb7) main_cam5_pane_t10_ParamLimits

0xda22,	// (0x000b7fb7) main_cam5_pane_t10

0xda34,	// (0x000b7fc9) main_cam5_pane_t11_ParamLimits

0xda34,	// (0x000b7fc9) main_cam5_pane_t11

0xda46,	// (0x000b7fdb) main_cam5_pane_t12_ParamLimits

0xda46,	// (0x000b7fdb) main_cam5_pane_t12

0xda5b,	// (0x000b7ff0) main_cam5_pane_t13_ParamLimits

0xda5b,	// (0x000b7ff0) main_cam5_pane_t13

0x000c,

0xfa4d,	// (0x000b9fe2) main_cam5_pane_t_ParamLimits

0xfa4d,	// (0x000b9fe2) main_cam5_pane_t

0x02f3,	// (0x000aa888) popup_scut_keymap_window_ParamLimits

0x02f3,	// (0x000aa888) popup_scut_keymap_window

0x69e0,	// (0x000b0f75) aid_size_cell_brow_shortcut

0xa3cd,	// (0x000b4962) bg_popup_window_pane_cp010

0x69ec,	// (0x000b0f81) grid_scut_pane

0x69f8,	// (0x000b0f8d) cell_scut_pane_ParamLimits

0x69f8,	// (0x000b0f8d) cell_scut_pane

0x6a0f,	// (0x000b0fa4) cell_scut_pane_g1

0xda78,	// (0x000b800d) cell_scut_pane_t1

0xda87,	// (0x000b801c) cell_scut_pane_t2

0x6a18,	// (0x000b0fad) cell_scut_pane_t3

0x0002,

0xfa68,	// (0x000b9ffd) cell_scut_pane_t

0x470e,	// (0x000aeca3) main_mup3_pane_g8_ParamLimits

0x470e,	// (0x000aeca3) main_mup3_pane_g8

0x5bb7,	// (0x000b014c) area_vitu2_query_pane_ParamLimits

0x5bb7,	// (0x000b014c) area_vitu2_query_pane

0x6755,	// (0x000b0cea) input_focus_pane_cp08

0xda96,	// (0x000b802b) area_vitu2_query_pane_g1

0x6a26,	// (0x000b0fbb) area_vitu2_query_pane_g2

0x0001,

0xfa6f,	// (0x000ba004) area_vitu2_query_pane_g

0x6a37,	// (0x000b0fcc) area_vitu2_query_pane_t1_ParamLimits

0x6a37,	// (0x000b0fcc) area_vitu2_query_pane_t1

0x6a4b,	// (0x000b0fe0) area_vitu2_query_pane_t2_ParamLimits

0x6a4b,	// (0x000b0fe0) area_vitu2_query_pane_t2

0x6a5f,	// (0x000b0ff4) area_vitu2_query_pane_t3_ParamLimits

0x6a5f,	// (0x000b0ff4) area_vitu2_query_pane_t3

0xa620,	// (0x000b4bb5) area_vitu2_query_pane_t4_ParamLimits

0xa620,	// (0x000b4bb5) area_vitu2_query_pane_t4

0xa648,	// (0x000b4bdd) area_vitu2_query_pane_t5_ParamLimits

0xa648,	// (0x000b4bdd) area_vitu2_query_pane_t5

0xa670,	// (0x000b4c05) area_vitu2_query_pane_t6_ParamLimits

0xa670,	// (0x000b4c05) area_vitu2_query_pane_t6

0x0006,

0xfa74,	// (0x000ba009) area_vitu2_query_pane_t_ParamLimits

0xfa74,	// (0x000ba009) area_vitu2_query_pane_t

0x6a87,	// (0x000b101c) bg_button_pane_cp018

0x6a95,	// (0x000b102a) bg_button_pane_cp021

0x6aa1,	// (0x000b1036) bg_button_pane_cp022

0x6ab2,	// (0x000b1047) input_focus_pane_cp09

0xb199,	// (0x000b572e) aid_size_touch_mv_arrow_left

0xb1c4,	// (0x000b5759) aid_size_touch_mv_arrow_right

0x621c,	// (0x000b07b1) main_cset_slider_pane_g16_ParamLimits

0x621c,	// (0x000b07b1) main_cset_slider_pane_g16

0x6228,	// (0x000b07bd) main_cset_slider_pane_g17_ParamLimits

0x6228,	// (0x000b07bd) main_cset_slider_pane_g17

0x69cb,	// (0x000b0f60) cell_cam4_burst_pane_g1_ParamLimits

0x92ff,	// (0x000b3894) compa_mode_pane

0x640f,	// (0x000b09a4) popup_vtel_slider_window_g3_ParamLimits

0x640f,	// (0x000b09a4) popup_vtel_slider_window_g3

0x6426,	// (0x000b09bb) popup_vtel_slider_window_g4_ParamLimits

0x6426,	// (0x000b09bb) popup_vtel_slider_window_g4

0x643d,	// (0x000b09d2) popup_vtel_slider_window_t1_ParamLimits

0x643d,	// (0x000b09d2) popup_vtel_slider_window_t1

0x9375,	// (0x000b390a) main_cl_pane

0x9937,	// (0x000b3ecc) popup_imed_adjust2_window_ParamLimits

0xc7ba,	// (0x000b6d4f) bg_tb_trans_pane_cp05_ParamLimits

0xd0e5,	// (0x000b767a) popup_imed_adjust2_window_g1_ParamLimits

0xd0f4,	// (0x000b7689) popup_imed_adjust2_window_g2_ParamLimits

0xd0f4,	// (0x000b7689) popup_imed_adjust2_window_g2

0xd100,	// (0x000b7695) popup_imed_adjust2_window_g3_ParamLimits

0xd100,	// (0x000b7695) popup_imed_adjust2_window_g3

0x0002,

0xf7df,	// (0x000b9d74) popup_imed_adjust2_window_g_ParamLimits

0xf7df,	// (0x000b9d74) popup_imed_adjust2_window_g

0xd10c,	// (0x000b76a1) popup_imed_adjust2_window_t1_ParamLimits

0xd124,	// (0x000b76b9) slider_imed_adjust_pane_ParamLimits

0xd138,	// (0x000b76cd) slider_imed_adjust_pane_g1_ParamLimits

0xd148,	// (0x000b76dd) slider_imed_adjust_pane_g2_ParamLimits

0xd158,	// (0x000b76ed) slider_imed_adjust_pane_g3_ParamLimits

0xd169,	// (0x000b76fe) slider_imed_adjust_pane_g4_ParamLimits

0xf7e6,	// (0x000b9d7b) slider_imed_adjust_pane_g_ParamLimits

0x5941,	// (0x000afed6) aid_touch_area_cam4_ParamLimits

0x5941,	// (0x000afed6) aid_touch_area_cam4

0x9cab,	// (0x000b4240) battery_pane_cp01

0x5a10,	// (0x000affa5) main_camera4_pane_g6_ParamLimits

0x5a10,	// (0x000affa5) main_camera4_pane_g6

0x5a3a,	// (0x000affcf) main_camera4_pane_t2_ParamLimits

0x5a3a,	// (0x000affcf) main_camera4_pane_t2

0x0001,

0xf8e9,	// (0x000b9e7e) main_camera4_pane_t_ParamLimits

0xf8e9,	// (0x000b9e7e) main_camera4_pane_t

0x5a6f,	// (0x000b0004) aid_touch_area_vid4_ParamLimits

0x5a6f,	// (0x000b0004) aid_touch_area_vid4

0x5ac3,	// (0x000b0058) main_video4_pane_g5_ParamLimits

0x5ac3,	// (0x000b0058) main_video4_pane_g5

0x5ae8,	// (0x000b007d) vid4_progress_pane_ParamLimits

0x5ae8,	// (0x000b007d) vid4_progress_pane

0xd780,	// (0x000b7d15) main_cset_slider_pane_g18_ParamLimits

0xd780,	// (0x000b7d15) main_cset_slider_pane_g18

0xd960,	// (0x000b7ef5) cell_cam4_burst_pane_g2_ParamLimits

0xd960,	// (0x000b7ef5) cell_cam4_burst_pane_g2

0x0001,

0xfa48,	// (0x000b9fdd) cell_cam4_burst_pane_g_ParamLimits

0xfa48,	// (0x000b9fdd) cell_cam4_burst_pane_g

0xa1f1,	// (0x000b4786) bg_cl_pane_ParamLimits

0xa1f1,	// (0x000b4786) bg_cl_pane

0x6ac3,	// (0x000b1058) cl_header_pane_ParamLimits

0x6ac3,	// (0x000b1058) cl_header_pane

0x6ad7,	// (0x000b106c) cl_listscroll_pane_ParamLimits

0x6ad7,	// (0x000b106c) cl_listscroll_pane

0xdaa2,	// (0x000b8037) bg_cl_pane_g1

0xdaaa,	// (0x000b803f) bg_cl_pane_g2

0xdab2,	// (0x000b8047) bg_cl_pane_g3

0xdaba,	// (0x000b804f) bg_cl_pane_g4

0xdac2,	// (0x000b8057) bg_cl_pane_g5

0xdaca,	// (0x000b805f) bg_cl_pane_g6

0xdad2,	// (0x000b8067) bg_cl_pane_g7

0xdada,	// (0x000b806f) bg_cl_pane_g8

0xdae2,	// (0x000b8077) bg_cl_pane_g9

0x0008,

0xfa83,	// (0x000ba018) bg_cl_pane_g

0x6ae7,	// (0x000b107c) aid_height_cl_leading_ParamLimits

0x6ae7,	// (0x000b107c) aid_height_cl_leading

0x6af3,	// (0x000b1088) aid_height_cl_text_ParamLimits

0x6af3,	// (0x000b1088) aid_height_cl_text

0xa55d,	// (0x000b4af2) bg_cl_header_pane_ParamLimits

0xa55d,	// (0x000b4af2) bg_cl_header_pane

0x6b12,	// (0x000b10a7) cl_header_pane_g1_ParamLimits

0x6b12,	// (0x000b10a7) cl_header_pane_g1

0x6b28,	// (0x000b10bd) cl_header_pane_t1_ParamLimits

0x6b28,	// (0x000b10bd) cl_header_pane_t1

0xdaea,	// (0x000b807f) cl_list_pane

0xd753,	// (0x000b7ce8) hc_scroll_pane_cp01

0xab0f,	// (0x000b50a4) bg_cl_header_pane_g1

0xd639,	// (0x000b7bce) bg_cl_header_pane_g2

0xab2f,	// (0x000b50c4) bg_cl_header_pane_g3

0xd649,	// (0x000b7bde) bg_cl_header_pane_g4

0xd641,	// (0x000b7bd6) bg_cl_header_pane_g5

0xd85d,	// (0x000b7df2) bg_cl_header_pane_g6

0xd661,	// (0x000b7bf6) bg_cl_header_pane_g7

0xd669,	// (0x000b7bfe) bg_cl_header_pane_g8

0xd659,	// (0x000b7bee) bg_cl_header_pane_g9

0x0008,

0xfa96,	// (0x000ba02b) bg_cl_header_pane_g

0x6b41,	// (0x000b10d6) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x6b41,	// (0x000b10d6) hc_cl_list_double_graphic_heading_pane

0x6b52,	// (0x000b10e7) hc_cl_list_single_graphic_pane_ParamLimits

0x6b52,	// (0x000b10e7) hc_cl_list_single_graphic_pane

0x6b6b,	// (0x000b1100) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x6b6b,	// (0x000b1100) hc_cl_list_single_graphic_pane_g1

0x6b77,	// (0x000b110c) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x6b77,	// (0x000b110c) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaa9,	// (0x000ba03e) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaa9,	// (0x000ba03e) hc_cl_list_single_graphic_pane_g

0x6b8b,	// (0x000b1120) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x6b8b,	// (0x000b1120) hc_cl_list_single_graphic_pane_t1

0x6b6b,	// (0x000b1100) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x6b6b,	// (0x000b1100) hc_cl_list_double_graphic_heading_pane_g1

0x6ba0,	// (0x000b1135) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x6ba0,	// (0x000b1135) hc_cl_list_double_graphic_heading_pane_g2

0x6bb4,	// (0x000b1149) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x6bb4,	// (0x000b1149) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfaae,	// (0x000ba043) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfaae,	// (0x000ba043) hc_cl_list_double_graphic_heading_pane_g

0x6bc8,	// (0x000b115d) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x6bc8,	// (0x000b115d) hc_cl_list_double_graphic_heading_pane_t1

0x6bdd,	// (0x000b1172) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x6bdd,	// (0x000b1172) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfab5,	// (0x000ba04a) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfab5,	// (0x000ba04a) hc_cl_list_double_graphic_heading_pane_t

0x9e3b,	// (0x000b43d0) vid4_progress_pane_g1

0x9e4b,	// (0x000b43e0) vid4_progress_pane_g2

0x6bf2,	// (0x000b1187) vid4_progress_pane_g3

0x9e5b,	// (0x000b43f0) vid4_progress_pane_g4

0x0004,

0xfaba,	// (0x000ba04f) vid4_progress_pane_g

0x6c04,	// (0x000b1199) vid4_progress_pane_t1

0x9e79,	// (0x000b440e) vid4_progress_pane_t2

0x0002,

0xfac5,	// (0x000ba05a) vid4_progress_pane_t

0x6c1a,	// (0x000b11af) wait_bar_pane_cp07

0xc9b5,	// (0x000b6f4a) blid_firmament_pane_ParamLimits

0xc9f8,	// (0x000b6f8d) popup_blid_sat_info2_window_g1

0xca1c,	// (0x000b6fb1) popup_blid_sat_info2_window_t3

0xca2a,	// (0x000b6fbf) popup_blid_sat_info2_window_t4

0xca38,	// (0x000b6fcd) popup_blid_sat_info2_window_t5

0xca46,	// (0x000b6fdb) popup_blid_sat_info2_window_t6

0xca56,	// (0x000b6feb) popup_blid_sat_info2_window_t7

0xca64,	// (0x000b6ff9) popup_blid_sat_info2_window_t8

0xca72,	// (0x000b7007) popup_blid_sat_info2_window_t9

0xca80,	// (0x000b7015) popup_blid_sat_info2_window_t10

0xcb44,	// (0x000b70d9) aid_firma_cardinal_ParamLimits

0xcb58,	// (0x000b70ed) blid_firmament_pane_t1_ParamLimits

0xcb6f,	// (0x000b7104) blid_firmament_pane_t2_ParamLimits

0xcb86,	// (0x000b711b) blid_firmament_pane_t3_ParamLimits

0xcb9d,	// (0x000b7132) blid_firmament_pane_t4_ParamLimits

0xf6d3,	// (0x000b9c68) blid_firmament_pane_t_ParamLimits

0xcbb4,	// (0x000b7149) blid_sat_info_pane_ParamLimits

0x9367,	// (0x000b38fc) main_cam_set_pane_ParamLimits

0x4fd2,	// (0x000af567) aid_size_cell_colour_35_ParamLimits

0x4ff2,	// (0x000af587) aid_size_cell_colour_112_ParamLimits

0x5012,	// (0x000af5a7) aid_size_cell_effect_ParamLimits

0xc7ba,	// (0x000b6d4f) bg_tb_trans_pane_cp02_ParamLimits

0xad7f,	// (0x000b5314) heading_imed_pane_ParamLimits

0x5032,	// (0x000af5c7) listscroll_imed_pane_ParamLimits

0xbdd4,	// (0x000b6369) popup_call2_audio_first_window_g5_ParamLimits

0xbdd4,	// (0x000b6369) popup_call2_audio_first_window_g5

0x55ec,	// (0x000afb81) aid_size_touch_image3_arrow_left_ParamLimits

0x55ec,	// (0x000afb81) aid_size_touch_image3_arrow_left

0x5618,	// (0x000afbad) aid_size_touch_image3_arrow_right_ParamLimits

0x5618,	// (0x000afbad) aid_size_touch_image3_arrow_right

0x9e8e,	// (0x000b4423) vid4_progress_pane_t3

0x535e,	// (0x000af8f3) main_hwr_training_symbol_option_pane_ParamLimits

0x535e,	// (0x000af8f3) main_hwr_training_symbol_option_pane

0xd3db,	// (0x000b7970) popup_hwr_training_preview_window_ParamLimits

0xd3db,	// (0x000b7970) popup_hwr_training_preview_window

0x537e,	// (0x000af913) hwr_training_navi_pane_g5_ParamLimits

0x537e,	// (0x000af913) hwr_training_navi_pane_g5

0xd627,	// (0x000b7bbc) popup_char_count_window

0x9367,	// (0x000b38fc) bg_popup_sub_pane_cp20_ParamLimits

0x6563,	// (0x000b0af8) list_vitu2_match_list_pane_ParamLimits

0x6572,	// (0x000b0b07) vitu2_page_scroll_pane_ParamLimits

0x6572,	// (0x000b0b07) vitu2_page_scroll_pane

0xdaf3,	// (0x000b8088) list_single_hwr_training_symbol_option_pane_ParamLimits

0xdaf3,	// (0x000b8088) list_single_hwr_training_symbol_option_pane

0xdb06,	// (0x000b809b) list_single_hwr_training_symbol_option_pane_g1

0xdb0e,	// (0x000b80a3) list_single_hwr_training_symbol_option_pane_t1

0xdb1c,	// (0x000b80b1) bg_button_pane_cp023

0xdb25,	// (0x000b80ba) bg_button_pane_cp024

0x6c63,	// (0x000b11f8) vitu2_page_scroll_pane_g1

0x6c6b,	// (0x000b1200) vitu2_page_scroll_pane_g2

0x0001,

0xfacc,	// (0x000ba061) vitu2_page_scroll_pane_g

0x6c73,	// (0x000b1208) vitu2_page_scroll_pane_t1

0xc915,	// (0x000b6eaa) popup_char_count_window_g1

0xdb58,	// (0x000b80ed) popup_char_count_window_g2

0xdb61,	// (0x000b80f6) popup_char_count_window_g3

0x0002,

0xfad1,	// (0x000ba066) popup_char_count_window_g

0xdb6a,	// (0x000b80ff) popup_char_count_window_t1

0x9375,	// (0x000b390a) main_vded2_pane

0xd0d1,	// (0x000b7666) aid_size_cell_imed_line

0xd0db,	// (0x000b7670) grid_imed_line_width_pane

0x9d6f,	// (0x000b4304) vid4_indicators_pane_g4

0xdb78,	// (0x000b810d) cell_imed_line_width_pane_ParamLimits

0xdb78,	// (0x000b810d) cell_imed_line_width_pane

0xdb8c,	// (0x000b8121) cell_imed_line_width_pane_g1

0xd935,	// (0x000b7eca) cell_imed_line_width_pane_g2

0x0001,

0xfad8,	// (0x000ba06d) cell_imed_line_width_pane_g

0x6c82,	// (0x000b1217) main_vded2_pane_g1_ParamLimits

0x6c82,	// (0x000b1217) main_vded2_pane_g1

0x6c98,	// (0x000b122d) main_vded2_pane_g2_ParamLimits

0x6c98,	// (0x000b122d) main_vded2_pane_g2

0x0001,

0xfadd,	// (0x000ba072) main_vded2_pane_g_ParamLimits

0xfadd,	// (0x000ba072) main_vded2_pane_g

0x6caa,	// (0x000b123f) vded2_slider_pane_ParamLimits

0x6caa,	// (0x000b123f) vded2_slider_pane

0x6cba,	// (0x000b124f) aid_size_touch_vded2_end

0x6cc4,	// (0x000b1259) aid_size_touch_vded2_playhead

0xdb95,	// (0x000b812a) aid_size_touch_vded2_start

0xdb9d,	// (0x000b8132) vded2_slider_bg_pane

0xdba6,	// (0x000b813b) vded2_slider_pane_g1

0xdbaf,	// (0x000b8144) vded2_slider_pane_g2

0x6cce,	// (0x000b1263) vded2_slider_pane_g3

0x0002,

0xfae2,	// (0x000ba077) vded2_slider_pane_g

0xdbb7,	// (0x000b814c) vded2_slider_bg_pane_g1

0xdbc0,	// (0x000b8155) vded2_slider_bg_pane_g2

0xdbc9,	// (0x000b815e) vded2_slider_bg_pane_g3

0x0002,

0xfae9,	// (0x000ba07e) vded2_slider_bg_pane_g

0x2d51,	// (0x000ad2e6) aid_postcard_touch_down_pane_ParamLimits

0x2d51,	// (0x000ad2e6) aid_postcard_touch_down_pane

0x2d67,	// (0x000ad2fc) aid_postcard_touch_up_pane_ParamLimits

0x2d67,	// (0x000ad2fc) aid_postcard_touch_up_pane

0x9375,	// (0x000b390a) main_blid2_pane

0x991d,	// (0x000b3eb2) popup_blid2_search_window

0x92ff,	// (0x000b3894) blid2_gps_pane

0x92ff,	// (0x000b3894) blid2_navig_pane

0x92ff,	// (0x000b3894) blid2_search_pane

0x92ff,	// (0x000b3894) blid2_tripm_pane

0x6cd9,	// (0x000b126e) blid2_search_pane_g1_ParamLimits

0x6cd9,	// (0x000b126e) blid2_search_pane_g1

0x6cf1,	// (0x000b1286) blid2_search_pane_t1_ParamLimits

0x6cf1,	// (0x000b1286) blid2_search_pane_t1

0x6d03,	// (0x000b1298) aid_size_cell_blid2_gps_ParamLimits

0x6d03,	// (0x000b1298) aid_size_cell_blid2_gps

0x6d1b,	// (0x000b12b0) blid2_gps_pane_g1_ParamLimits

0x6d1b,	// (0x000b12b0) blid2_gps_pane_g1

0x6d2f,	// (0x000b12c4) grid_blid2_satellite_pane_ParamLimits

0x6d2f,	// (0x000b12c4) grid_blid2_satellite_pane

0x6d49,	// (0x000b12de) blid2_navig_pane_g1_ParamLimits

0x6d49,	// (0x000b12de) blid2_navig_pane_g1

0x6d55,	// (0x000b12ea) blid2_navig_pane_t1_ParamLimits

0x6d55,	// (0x000b12ea) blid2_navig_pane_t1

0x6d70,	// (0x000b1305) blid2_navig_pane_t2_ParamLimits

0x6d70,	// (0x000b1305) blid2_navig_pane_t2

0x0001,

0xfaf0,	// (0x000ba085) blid2_navig_pane_t_ParamLimits

0xfaf0,	// (0x000ba085) blid2_navig_pane_t

0x6d8b,	// (0x000b1320) blid2_navig_ring_pane_ParamLimits

0x6d8b,	// (0x000b1320) blid2_navig_ring_pane

0x6da4,	// (0x000b1339) blid2_speed_pane_ParamLimits

0x6da4,	// (0x000b1339) blid2_speed_pane

0x6db0,	// (0x000b1345) blid2_tripm_pane_g1_ParamLimits

0x6db0,	// (0x000b1345) blid2_tripm_pane_g1

0x6dcb,	// (0x000b1360) blid2_tripm_pane_g2_ParamLimits

0x6dcb,	// (0x000b1360) blid2_tripm_pane_g2

0x6ddf,	// (0x000b1374) blid2_tripm_pane_g3_ParamLimits

0x6ddf,	// (0x000b1374) blid2_tripm_pane_g3

0x6df3,	// (0x000b1388) blid2_tripm_pane_g4_ParamLimits

0x6df3,	// (0x000b1388) blid2_tripm_pane_g4

0x6e07,	// (0x000b139c) blid2_tripm_pane_g5_ParamLimits

0x6e07,	// (0x000b139c) blid2_tripm_pane_g5

0x0005,

0xfaf5,	// (0x000ba08a) blid2_tripm_pane_g_ParamLimits

0xfaf5,	// (0x000ba08a) blid2_tripm_pane_g

0x6e2d,	// (0x000b13c2) blid2_tripm_pane_t1_ParamLimits

0x6e2d,	// (0x000b13c2) blid2_tripm_pane_t1

0x6e48,	// (0x000b13dd) blid2_tripm_pane_t2_ParamLimits

0x6e48,	// (0x000b13dd) blid2_tripm_pane_t2

0x6e61,	// (0x000b13f6) blid2_tripm_pane_t3_ParamLimits

0x6e61,	// (0x000b13f6) blid2_tripm_pane_t3

0x0003,

0xfb02,	// (0x000ba097) blid2_tripm_pane_t_ParamLimits

0xfb02,	// (0x000ba097) blid2_tripm_pane_t

0x6ea8,	// (0x000b143d) cell_blid2_satellite_pane_ParamLimits

0x6ea8,	// (0x000b143d) cell_blid2_satellite_pane

0x6ec6,	// (0x000b145b) cell_blid2_satellite_pane_g1

0xdbd2,	// (0x000b8167) cell_blid2_satellite_pane_t1

0xcbc4,	// (0x000b7159) blid2_speed_pane_g1

0xdbe0,	// (0x000b8175) blid2_speed_pane_t1

0xdbee,	// (0x000b8183) blid2_speed_pane_t2

0x0001,

0xfb0b,	// (0x000ba0a0) blid2_speed_pane_t

0xcbc4,	// (0x000b7159) blid2_navig_ring_pane_g1

0x6ecf,	// (0x000b1464) blid2_navig_ring_pane_g2

0x6ed7,	// (0x000b146c) blid2_navig_ring_pane_g3

0x6edf,	// (0x000b1474) blid2_navig_ring_pane_g4

0x6ee7,	// (0x000b147c) blid2_navig_ring_pane_g5

0x0004,

0xfb10,	// (0x000ba0a5) blid2_navig_ring_pane_g

0x92ff,	// (0x000b3894) bg_popup_window_pane_cp011

0xdbfc,	// (0x000b8191) popup_blid2_search_window_g1

0xdc04,	// (0x000b8199) popup_blid2_search_window_t1

0xdc12,	// (0x000b81a7) popup_blid2_search_window_t2

0x0001,

0xfb1b,	// (0x000ba0b0) popup_blid2_search_window_t

0xa515,	// (0x000b4aaa) main_browser_pane_g1

0xa1f1,	// (0x000b4786) main_browser_pane_ParamLimits

0x9367,	// (0x000b38fc) bg_button_pane_cp011_ParamLimits

0x5df3,	// (0x000b0388) cell_vitu2_function_pane_g1_ParamLimits

0xc7ba,	// (0x000b6d4f) bg_popup_sub_pane_cp22_ParamLimits

0x6755,	// (0x000b0cea) input_focus_pane_cp08_ParamLimits

0x676c,	// (0x000b0d01) popup_vitu2_query_button_pane_ParamLimits

0x676c,	// (0x000b0d01) popup_vitu2_query_button_pane

0x677d,	// (0x000b0d12) popup_vitu2_query_input_button_pane

0xd898,	// (0x000b7e2d) popup_vitu2_query_window_g1_ParamLimits

0x6787,	// (0x000b0d1c) popup_vitu2_query_window_g2_ParamLimits

0xfa1c,	// (0x000b9fb1) popup_vitu2_query_window_g_ParamLimits

0x92ff,	// (0x000b3894) bg_button_pane_cp026

0x6eef,	// (0x000b1484) popup_vitu2_query_input_button_pane_g1

0x92ff,	// (0x000b3894) bg_button_pane_cp025

0xdc20,	// (0x000b81b5) popup_vitu2_query_button_pane_t1

0x43fb,	// (0x000ae990) main_mp3_pane_t6

0x4409,	// (0x000ae99e) popup_slider_window_cp01

0x9cd5,	// (0x000b426a) cam4_battery_pane

0x9d2e,	// (0x000b42c3) cam4_battery_pane_cp02

0x9e33,	// (0x000b43c8) cam4_battery_pane_cp01

0x9e33,	// (0x000b43c8) cam4_battery_pane_cp03

0xd93d,	// (0x000b7ed2) cam4_battery_pane_g1

0xcbc4,	// (0x000b7159) cam4_battery_pane_g2

0x0001,

0xfb20,	// (0x000ba0b5) cam4_battery_pane_g

0xca8e,	// (0x000b7023) popup_blid_sat_info2_window_t11

0xb199,	// (0x000b572e) aid_size_touch_mv_arrow_left_ParamLimits

0xb1c4,	// (0x000b5759) aid_size_touch_mv_arrow_right_ParamLimits

0xb222,	// (0x000b57b7) navi_pane_g1_ParamLimits

0xb22e,	// (0x000b57c3) navi_pane_g2_ParamLimits

0xb25c,	// (0x000b57f1) navi_pane_g3_ParamLimits

0xf3e5,	// (0x000b997a) navi_pane_g_ParamLimits

0x2774,	// (0x000acd09) navi_pane_mv_t1_ParamLimits

0x503e,	// (0x000af5d3) grid_imed_effect_pane_ParamLimits

0x136c,	// (0x000ab901) aid_placing_vt_slider_lsc

0xa464,	// (0x000b49f9) aid_placing_vt_slider_prt

0xa55d,	// (0x000b4af2) bg_tb_trans_pane_cp01_ParamLimits

0xcd44,	// (0x000b72d9) popup_image_details_window_g1_ParamLimits

0xcd57,	// (0x000b72ec) popup_image_details_window_g2_ParamLimits

0xcd6c,	// (0x000b7301) popup_image_details_window_g3_ParamLimits

0xcd6c,	// (0x000b7301) popup_image_details_window_g3

0xf718,	// (0x000b9cad) popup_image_details_window_g_ParamLimits

0xcd80,	// (0x000b7315) popup_image_details_window_t1_ParamLimits

0xcd92,	// (0x000b7327) popup_image_details_window_t2_ParamLimits

0xcdab,	// (0x000b7340) popup_image_details_window_t3_ParamLimits

0xcdbf,	// (0x000b7354) popup_image_details_window_t4_ParamLimits

0xcdda,	// (0x000b736f) popup_image_details_window_t5_ParamLimits

0xf71f,	// (0x000b9cb4) popup_image_details_window_t_ParamLimits

0x6aff,	// (0x000b1094) cl_header_name_pane_ParamLimits

0x6aff,	// (0x000b1094) cl_header_name_pane

0x6ef7,	// (0x000b148c) cl_header_name_pane_t1_ParamLimits

0x6ef7,	// (0x000b148c) cl_header_name_pane_t1

0x6f18,	// (0x000b14ad) cl_header_name_pane_t2_ParamLimits

0x6f18,	// (0x000b14ad) cl_header_name_pane_t2

0x6f5a,	// (0x000b14ef) cl_header_name_pane_t3_ParamLimits

0x6f5a,	// (0x000b14ef) cl_header_name_pane_t3

0x0002,

0xfb25,	// (0x000ba0ba) cl_header_name_pane_t_ParamLimits

0xfb25,	// (0x000ba0ba) cl_header_name_pane_t

0xb2eb,	// (0x000b5880) navi_pane_mv_g2_ParamLimits

0xd601,	// (0x000b7b96) field_vitu2_entry_pane_g1_ParamLimits

0xd60d,	// (0x000b7ba2) field_vitu2_entry_pane_g2_ParamLimits

0xd619,	// (0x000b7bae) field_vitu2_entry_pane_g3_ParamLimits

0xd619,	// (0x000b7bae) field_vitu2_entry_pane_g3

0xf91b,	// (0x000b9eb0) field_vitu2_entry_pane_g_ParamLimits

0x9da2,	// (0x000b4337) cell_vitu2_itu_pane_g1_ParamLimits

0x5d87,	// (0x000b031c) cell_vitu2_itu_pane_g2_ParamLimits

0x5d87,	// (0x000b031c) cell_vitu2_itu_pane_g2

0x0001,

0xf927,	// (0x000b9ebc) cell_vitu2_itu_pane_g_ParamLimits

0xf927,	// (0x000b9ebc) cell_vitu2_itu_pane_g

0x9367,	// (0x000b38fc) bg_vkb2_func_pane_cp05_ParamLimits

0x9367,	// (0x000b38fc) bg_vkb2_func_pane_cp05

0x9367,	// (0x000b38fc) bg_vkb2_func_pane_cp03

0x9367,	// (0x000b38fc) bg_vkb2_func_pane_cp04

0x9367,	// (0x000b38fc) bg_vkb2_func_pane_cp10_ParamLimits

0x9367,	// (0x000b38fc) bg_vkb2_func_pane_cp10

0x6aa1,	// (0x000b1036) bg_vkb2_func_pane_cp08

0x6a87,	// (0x000b101c) bg_vkb2_func_pane_cp06

0x6a95,	// (0x000b102a) bg_vkb2_func_pane_cp07

0xdb2e,	// (0x000b80c3) bg_vkb2_func_pane_cp11_ParamLimits

0xdb2e,	// (0x000b80c3) bg_vkb2_func_pane_cp11

0xdb43,	// (0x000b80d8) bg_vkb2_func_pane_cp12_ParamLimits

0xdb43,	// (0x000b80d8) bg_vkb2_func_pane_cp12

0x92ff,	// (0x000b3894) bg_vkb2_func_pane_cp09

0xd639,	// (0x000b7bce) bg_vkb2_func_pane_g1

0xab2f,	// (0x000b50c4) bg_vkb2_func_pane_g2

0xd641,	// (0x000b7bd6) bg_vkb2_func_pane_g3

0xd649,	// (0x000b7bde) bg_vkb2_func_pane_g4

0xd85d,	// (0x000b7df2) bg_vkb2_func_pane_g5

0xd661,	// (0x000b7bf6) bg_vkb2_func_pane_g6

0xd669,	// (0x000b7bfe) bg_vkb2_func_pane_g7

0xd659,	// (0x000b7bee) bg_vkb2_func_pane_g8

0xab0f,	// (0x000b50a4) bg_vkb2_func_pane_g9

0x0008,

0xfb2c,	// (0x000ba0c1) bg_vkb2_func_pane_g

0x6e1b,	// (0x000b13b0) blid2_tripm_pane_g6_ParamLimits

0x6e1b,	// (0x000b13b0) blid2_tripm_pane_g6

0xd493,	// (0x000b7a28) mp4_progress_pane_g1

0x6e94,	// (0x000b1429) blid2_tripm_values_pane_ParamLimits

0x6e94,	// (0x000b1429) blid2_tripm_values_pane

0x6f8b,	// (0x000b1520) blid2_tripm_values_pane_t1

0x6f99,	// (0x000b152e) blid2_tripm_values_pane_t2

0x6fa7,	// (0x000b153c) blid2_tripm_values_pane_t3

0x6fb5,	// (0x000b154a) blid2_tripm_values_pane_t4

0x6fc3,	// (0x000b1558) blid2_tripm_values_pane_t5

0x6fd1,	// (0x000b1566) blid2_tripm_values_pane_t6

0x6fdf,	// (0x000b1574) blid2_tripm_values_pane_t7

0x6fed,	// (0x000b1582) blid2_tripm_values_pane_t8

0x6ffb,	// (0x000b1590) blid2_tripm_values_pane_t9

0x0008,

0xfb3f,	// (0x000ba0d4) blid2_tripm_values_pane_t

0x13ae,	// (0x000ab943) call_video_pane_t1_ParamLimits

0x13cc,	// (0x000ab961) call_video_pane_t2_ParamLimits

0xf26e,	// (0x000b9803) call_video_pane_t_ParamLimits

0x2c56,	// (0x000ad1eb) msg_header_pane_g1_ParamLimits

0xb4d3,	// (0x000b5a68) msg_header_pane_g2_ParamLimits

0xb4d3,	// (0x000b5a68) msg_header_pane_g2

0x0001,

0xf488,	// (0x000b9a1d) msg_header_pane_g_ParamLimits

0xf488,	// (0x000b9a1d) msg_header_pane_g

0xa1f1,	// (0x000b4786) main_clock2_pane_ParamLimits

0x4d37,	// (0x000af2cc) grid_clock2_toolbar_pane_ParamLimits

0x4d37,	// (0x000af2cc) grid_clock2_toolbar_pane

0x4d37,	// (0x000af2cc) listscroll_clock2_pane_ParamLimits

0x4d37,	// (0x000af2cc) listscroll_clock2_pane

0x4e30,	// (0x000af3c5) main_clock2_pane_t3_ParamLimits

0x4e30,	// (0x000af3c5) main_clock2_pane_t3

0x4e54,	// (0x000af3e9) main_clock2_pane_t4_ParamLimits

0x4e54,	// (0x000af3e9) main_clock2_pane_t4

0xdc2e,	// (0x000b81c3) cell_clock2_toolbar_pane

0xdc36,	// (0x000b81cb) cell_clock2_toolbar_pane_cp01

0xdc36,	// (0x000b81cb) cell_clock2_toolbar_pane_cp02

0xdc3e,	// (0x000b81d3) cell_clock2_toolbar_pane_cp03

0xdc46,	// (0x000b81db) list_clock2_pane

0xb10f,	// (0x000b56a4) scroll_pane_cp10

0xdc4e,	// (0x000b81e3) list_single_clock2_pane_ParamLimits

0xdc4e,	// (0x000b81e3) list_single_clock2_pane

0xa3cd,	// (0x000b4962) list_highlight_pane_cp08

0xdc5b,	// (0x000b81f0) list_single_clock2_pane_t1

0xdc69,	// (0x000b81fe) list_single_clock2_pane_t2

0x0001,

0xfb52,	// (0x000ba0e7) list_single_clock2_pane_t

0x92ff,	// (0x000b3894) bg_button_pane_cp10

0xdc77,	// (0x000b820c) cell_clock2_toolbar_pane_g1

0x2cdd,	// (0x000ad272) aid_main_viewer_pane_g1_ParamLimits

0x2cdd,	// (0x000ad272) aid_main_viewer_pane_g1

0x2ceb,	// (0x000ad280) aid_main_viewer_pane_g2_ParamLimits

0x2ceb,	// (0x000ad280) aid_main_viewer_pane_g2

0x2cf9,	// (0x000ad28e) aid_main_viewer_pane_g3_ParamLimits

0x2cf9,	// (0x000ad28e) aid_main_viewer_pane_g3

0x2d08,	// (0x000ad29d) aid_main_viewer_pane_g4_ParamLimits

0x2d08,	// (0x000ad29d) aid_main_viewer_pane_g4

0x0003,

0xf499,	// (0x000b9a2e) aid_main_viewer_pane_g_ParamLimits

0xf499,	// (0x000b9a2e) aid_main_viewer_pane_g

0x3616,	// (0x000adbab) main_calc_pane_ParamLimits

0x363c,	// (0x000adbd1) main_dialer2_pane_ParamLimits

0x9375,	// (0x000b390a) main_cam6_pane

0x9375,	// (0x000b390a) main_vid6_pane

0x4d43,	// (0x000af2d8) listscroll_gen_pane_cp06_ParamLimits

0x4d43,	// (0x000af2d8) listscroll_gen_pane_cp06

0x4e77,	// (0x000af40c) main_clock2_pane_t5_ParamLimits

0x4e77,	// (0x000af40c) main_clock2_pane_t5

0x4ed3,	// (0x000af468) aid_call2_pane_cp10_ParamLimits

0x4ee5,	// (0x000af47a) aid_call_pane_cp10_ParamLimits

0xb18d,	// (0x000b5722) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb18d,	// (0x000b5722) popup_clock_analogue_window_cp10_g2_ParamLimits

0x4ef7,	// (0x000af48c) popup_clock_analogue_window_cp10_g3_ParamLimits

0x4ef7,	// (0x000af48c) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb18d,	// (0x000b5722) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7d4,	// (0x000b9d69) popup_clock_analogue_window_cp10_g_ParamLimits

0x4f09,	// (0x000af49e) popup_clock_analogue_window_cp10_t1_ParamLimits

0x5599,	// (0x000afb2e) cell_dialer2_keypad_pane_g2_ParamLimits

0x5599,	// (0x000afb2e) cell_dialer2_keypad_pane_g2

0x0001,

0xf8ba,	// (0x000b9e4f) cell_dialer2_keypad_pane_g_ParamLimits

0xf8ba,	// (0x000b9e4f) cell_dialer2_keypad_pane_g

0x55b5,	// (0x000afb4a) cell_dialer2_keypad_pane_t1

0x610f,	// (0x000b06a4) main_cset_text2_pane_ParamLimits

0x610f,	// (0x000b06a4) main_cset_text2_pane

0xda96,	// (0x000b802b) area_vitu2_query_pane_g1_ParamLimits

0x6a26,	// (0x000b0fbb) area_vitu2_query_pane_g2_ParamLimits

0xfa6f,	// (0x000ba004) area_vitu2_query_pane_g_ParamLimits

0xa698,	// (0x000b4c2d) area_vitu2_query_pane_t7_ParamLimits

0xa698,	// (0x000b4c2d) area_vitu2_query_pane_t7

0x6a87,	// (0x000b101c) bg_button_pane_cp018_ParamLimits

0x6a95,	// (0x000b102a) bg_button_pane_cp021_ParamLimits

0x6aa1,	// (0x000b1036) bg_button_pane_cp022_ParamLimits

0x6aa1,	// (0x000b1036) bg_vkb2_func_pane_cp08_ParamLimits

0x6a87,	// (0x000b101c) bg_vkb2_func_pane_cp06_ParamLimits

0x6a95,	// (0x000b102a) bg_vkb2_func_pane_cp07_ParamLimits

0x6ab2,	// (0x000b1047) input_focus_pane_cp09_ParamLimits

0x9ea4,	// (0x000b4439) cam6_autofocus_pane_ParamLimits

0x9ea4,	// (0x000b4439) cam6_autofocus_pane

0x7009,	// (0x000b159e) cam6_image_uncrop_pane_ParamLimits

0x7009,	// (0x000b159e) cam6_image_uncrop_pane

0x7018,	// (0x000b15ad) cam6_indi_pane_ParamLimits

0x7018,	// (0x000b15ad) cam6_indi_pane

0x702e,	// (0x000b15c3) cam6_mode_pane_ParamLimits

0x702e,	// (0x000b15c3) cam6_mode_pane

0x7040,	// (0x000b15d5) cam6_timer_pane_ParamLimits

0x7040,	// (0x000b15d5) cam6_timer_pane

0x704c,	// (0x000b15e1) cam6_zoom_pane_ParamLimits

0x704c,	// (0x000b15e1) cam6_zoom_pane

0x7058,	// (0x000b15ed) cam6_mode_pane_g1_ParamLimits

0x7058,	// (0x000b15ed) cam6_mode_pane_g1

0x7068,	// (0x000b15fd) cam6_mode_pane_g2_ParamLimits

0x7068,	// (0x000b15fd) cam6_mode_pane_g2

0x7078,	// (0x000b160d) cam6_mode_pane_g3_ParamLimits

0x7078,	// (0x000b160d) cam6_mode_pane_g3

0x7088,	// (0x000b161d) cam6_mode_pane_g4_ParamLimits

0x7088,	// (0x000b161d) cam6_mode_pane_g4

0x0003,

0xfb57,	// (0x000ba0ec) cam6_mode_pane_g_ParamLimits

0xfb57,	// (0x000ba0ec) cam6_mode_pane_g

0xdc7f,	// (0x000b8214) bg_tb_trans_pane_cp08_ParamLimits

0xdc7f,	// (0x000b8214) bg_tb_trans_pane_cp08

0xdc8d,	// (0x000b8222) cam6_battery_pane_ParamLimits

0xdc8d,	// (0x000b8222) cam6_battery_pane

0xdca3,	// (0x000b8238) cam6_indi_pane_g1_ParamLimits

0xdca3,	// (0x000b8238) cam6_indi_pane_g1

0xdcb5,	// (0x000b824a) cam6_indi_pane_g2_ParamLimits

0xdcb5,	// (0x000b824a) cam6_indi_pane_g2

0xdcc7,	// (0x000b825c) cam6_indi_pane_g3_ParamLimits

0xdcc7,	// (0x000b825c) cam6_indi_pane_g3

0x0002,

0xfb60,	// (0x000ba0f5) cam6_indi_pane_g_ParamLimits

0xfb60,	// (0x000ba0f5) cam6_indi_pane_g

0xdcd9,	// (0x000b826e) cam6_indi_pane_t1_ParamLimits

0xdcd9,	// (0x000b826e) cam6_indi_pane_t1

0x7098,	// (0x000b162d) cam6_autofocus_pane_g1

0x70a0,	// (0x000b1635) cam6_autofocus_pane_g2

0x70a8,	// (0x000b163d) cam6_autofocus_pane_g3

0x70b0,	// (0x000b1645) cam6_autofocus_pane_g4

0x0003,

0xfb67,	// (0x000ba0fc) cam6_autofocus_pane_g

0xdcff,	// (0x000b8294) cam6_timer_pane_g1

0xdd07,	// (0x000b829c) cam6_timer_pane_t1

0xdd15,	// (0x000b82aa) cam6_zoom_cont_pane

0xdd1d,	// (0x000b82b2) cam6_zoom_pane_g1

0xdd25,	// (0x000b82ba) cam6_zoom_pane_g2

0x70b8,	// (0x000b164d) cam6_zoom_pane_g3

0x0002,

0xfb70,	// (0x000ba105) cam6_zoom_pane_g

0xcbc4,	// (0x000b7159) cam6_battery_pane_g1

0xcbc4,	// (0x000b7159) cam6_battery_pane_g2

0x0001,

0xf6dc,	// (0x000b9c71) cam6_battery_pane_g

0xdd2d,	// (0x000b82c2) cam6_zoom_cont_pane_g1

0xdd36,	// (0x000b82cb) cam6_zoom_cont_pane_g2

0xdd3f,	// (0x000b82d4) cam6_zoom_cont_pane_g3

0x0002,

0xfb77,	// (0x000ba10c) cam6_zoom_cont_pane_g

0x70d5,	// (0x000b166a) cam6_mode_pane_cp_ParamLimits

0x70d5,	// (0x000b166a) cam6_mode_pane_cp

0x70e7,	// (0x000b167c) cam6_zoom_pane_cp_ParamLimits

0x70e7,	// (0x000b167c) cam6_zoom_pane_cp

0x70f3,	// (0x000b1688) vid6_image_uncrop_cif_pane_ParamLimits

0x70f3,	// (0x000b1688) vid6_image_uncrop_cif_pane

0x7103,	// (0x000b1698) vid6_image_uncrop_nhd_pane_ParamLimits

0x7103,	// (0x000b1698) vid6_image_uncrop_nhd_pane

0x7112,	// (0x000b16a7) vid6_image_uncrop_vga_pane_ParamLimits

0x7112,	// (0x000b16a7) vid6_image_uncrop_vga_pane

0x7121,	// (0x000b16b6) vid6_image_uncrop_wvga_pane_ParamLimits

0x7121,	// (0x000b16b6) vid6_image_uncrop_wvga_pane

0x7130,	// (0x000b16c5) vid6_indi_pane_ParamLimits

0x7130,	// (0x000b16c5) vid6_indi_pane

0xdc7f,	// (0x000b8214) bg_tb_trans_pane_cp09_ParamLimits

0xdc7f,	// (0x000b8214) bg_tb_trans_pane_cp09

0xdd57,	// (0x000b82ec) cam6_battery_pane_cp_ParamLimits

0xdd57,	// (0x000b82ec) cam6_battery_pane_cp

0xdd63,	// (0x000b82f8) vid6_indi_pane_g1_ParamLimits

0xdd63,	// (0x000b82f8) vid6_indi_pane_g1

0xdd75,	// (0x000b830a) vid6_indi_pane_g2_ParamLimits

0xdd75,	// (0x000b830a) vid6_indi_pane_g2

0xdd87,	// (0x000b831c) vid6_indi_pane_g3_ParamLimits

0xdd87,	// (0x000b831c) vid6_indi_pane_g3

0xdd9c,	// (0x000b8331) vid6_indi_pane_g4_ParamLimits

0xdd9c,	// (0x000b8331) vid6_indi_pane_g4

0xddb1,	// (0x000b8346) vid6_indi_pane_g5_ParamLimits

0xddb1,	// (0x000b8346) vid6_indi_pane_g5

0x0004,

0xfb7e,	// (0x000ba113) vid6_indi_pane_g_ParamLimits

0xfb7e,	// (0x000ba113) vid6_indi_pane_g

0xddcb,	// (0x000b8360) vid6_indi_pane_t1_ParamLimits

0xddcb,	// (0x000b8360) vid6_indi_pane_t1

0xdde1,	// (0x000b8376) vid6_indi_pane_t2_ParamLimits

0xdde1,	// (0x000b8376) vid6_indi_pane_t2

0xde09,	// (0x000b839e) vid6_indi_pane_t3_ParamLimits

0xde09,	// (0x000b839e) vid6_indi_pane_t3

0xde31,	// (0x000b83c6) vid6_indi_pane_t4_ParamLimits

0xde31,	// (0x000b83c6) vid6_indi_pane_t4

0x0003,

0xfb89,	// (0x000ba11e) vid6_indi_pane_t_ParamLimits

0xfb89,	// (0x000ba11e) vid6_indi_pane_t

0xde55,	// (0x000b83ea) wait_bar_pane_cp08

0x7148,	// (0x000b16dd) main_cset_text2_pane_t1_ParamLimits

0x7148,	// (0x000b16dd) main_cset_text2_pane_t1

0x70c0,	// (0x000b1655) listscroll_gen_pane_cp06_t1_ParamLimits

0x70c0,	// (0x000b1655) listscroll_gen_pane_cp06_t1

0x9375,	// (0x000b390a) main_cam6_set_pane

0x9cc7,	// (0x000b425c) bg_tb_trans_pane_cp06_ParamLimits

0x9cdd,	// (0x000b4272) cam4_indicators_pane_g1_ParamLimits

0x9cee,	// (0x000b4283) cam4_indicators_pane_g2_ParamLimits

0xf8f7,	// (0x000b9e8c) cam4_indicators_pane_g_ParamLimits

0x9d0c,	// (0x000b42a1) cam4_indicators_pane_t1_ParamLimits

0x9367,	// (0x000b38fc) bg_tb_trans_pane_cp07_ParamLimits

0x9d36,	// (0x000b42cb) vid4_indicators_pane_g1_ParamLimits

0x9d4a,	// (0x000b42df) vid4_indicators_pane_g2_ParamLimits

0x9d5e,	// (0x000b42f3) vid4_indicators_pane_g3_ParamLimits

0x9d6f,	// (0x000b4304) vid4_indicators_pane_g4_ParamLimits

0xf909,	// (0x000b9e9e) vid4_indicators_pane_g_ParamLimits

0x9d8b,	// (0x000b4320) vid4_indicators_pane_t1_ParamLimits

0x9e3b,	// (0x000b43d0) vid4_progress_pane_g1_ParamLimits

0x9e4b,	// (0x000b43e0) vid4_progress_pane_g2_ParamLimits

0x6bf2,	// (0x000b1187) vid4_progress_pane_g3_ParamLimits

0x9e5b,	// (0x000b43f0) vid4_progress_pane_g4_ParamLimits

0xfaba,	// (0x000ba04f) vid4_progress_pane_g_ParamLimits

0x6c04,	// (0x000b1199) vid4_progress_pane_t1_ParamLimits

0x9e79,	// (0x000b440e) vid4_progress_pane_t2_ParamLimits

0x9e8e,	// (0x000b4423) vid4_progress_pane_t3_ParamLimits

0xfac5,	// (0x000ba05a) vid4_progress_pane_t_ParamLimits

0x6c1a,	// (0x000b11af) wait_bar_pane_cp07_ParamLimits

0x7167,	// (0x000b16fc) main_cam6_set_pane_g2_ParamLimits

0x7167,	// (0x000b16fc) main_cam6_set_pane_g2

0x718b,	// (0x000b1720) main_cset6_listscroll_pane_ParamLimits

0x718b,	// (0x000b1720) main_cset6_listscroll_pane

0x71a7,	// (0x000b173c) main_cset6_slider_pane_ParamLimits

0x71a7,	// (0x000b173c) main_cset6_slider_pane

0x71bd,	// (0x000b1752) main_cset6_text2_pane_ParamLimits

0x71bd,	// (0x000b1752) main_cset6_text2_pane

0xde64,	// (0x000b83f9) main_cset6_text_pane

0xde6c,	// (0x000b8401) main_cset_list_pane_copy1_ParamLimits

0xde6c,	// (0x000b8401) main_cset_list_pane_copy1

0xde7c,	// (0x000b8411) scroll_pane_cp028_copy1

0x71cb,	// (0x000b1760) cset_list_set_pane_copy1

0x71dd,	// (0x000b1772) aid_position_infowindow_above_copy1

0x71e5,	// (0x000b177a) aid_position_infowindow_below_copy1

0x71ed,	// (0x000b1782) cset_list_set_pane_g1_copy1

0x71f5,	// (0x000b178a) cset_list_set_pane_g3_copy1_ParamLimits

0x71f5,	// (0x000b178a) cset_list_set_pane_g3_copy1

0x7204,	// (0x000b1799) cset_list_set_pane_t1_copy1_ParamLimits

0x7204,	// (0x000b1799) cset_list_set_pane_t1_copy1

0xa55d,	// (0x000b4af2) list_highlight_pane_cp021_copy1_ParamLimits

0xa55d,	// (0x000b4af2) list_highlight_pane_cp021_copy1

0xde85,	// (0x000b841a) cset6_slider_pane_ParamLimits

0xde85,	// (0x000b841a) cset6_slider_pane

0xdeb1,	// (0x000b8446) main_cset6_slider_pane_g1_ParamLimits

0xdeb1,	// (0x000b8446) main_cset6_slider_pane_g1

0x7219,	// (0x000b17ae) main_cset6_slider_pane_g2_ParamLimits

0x7219,	// (0x000b17ae) main_cset6_slider_pane_g2

0xded9,	// (0x000b846e) main_cset6_slider_pane_g3_ParamLimits

0xded9,	// (0x000b846e) main_cset6_slider_pane_g3

0x7241,	// (0x000b17d6) main_cset6_slider_pane_g4_ParamLimits

0x7241,	// (0x000b17d6) main_cset6_slider_pane_g4

0x724d,	// (0x000b17e2) main_cset6_slider_pane_g5_ParamLimits

0x724d,	// (0x000b17e2) main_cset6_slider_pane_g5

0xd768,	// (0x000b7cfd) main_cset6_slider_pane_g7_ParamLimits

0xd768,	// (0x000b7cfd) main_cset6_slider_pane_g7

0xd774,	// (0x000b7d09) main_cset6_slider_pane_g8_ParamLimits

0xd774,	// (0x000b7d09) main_cset6_slider_pane_g8

0x61bc,	// (0x000b0751) main_cset6_slider_pane_g9_ParamLimits

0x61bc,	// (0x000b0751) main_cset6_slider_pane_g9

0x61c8,	// (0x000b075d) main_cset6_slider_pane_g10_ParamLimits

0x61c8,	// (0x000b075d) main_cset6_slider_pane_g10

0x61d4,	// (0x000b0769) main_cset6_slider_pane_g11_ParamLimits

0x61d4,	// (0x000b0769) main_cset6_slider_pane_g11

0x61e0,	// (0x000b0775) main_cset6_slider_pane_g12_ParamLimits

0x61e0,	// (0x000b0775) main_cset6_slider_pane_g12

0x61ec,	// (0x000b0781) main_cset6_slider_pane_g13_ParamLimits

0x61ec,	// (0x000b0781) main_cset6_slider_pane_g13

0x61f8,	// (0x000b078d) main_cset6_slider_pane_g14_ParamLimits

0x61f8,	// (0x000b078d) main_cset6_slider_pane_g14

0x7259,	// (0x000b17ee) main_cset6_slider_pane_g15_ParamLimits

0x7259,	// (0x000b17ee) main_cset6_slider_pane_g15

0x621c,	// (0x000b07b1) main_cset6_slider_pane_g16_ParamLimits

0x621c,	// (0x000b07b1) main_cset6_slider_pane_g16

0x6228,	// (0x000b07bd) main_cset6_slider_pane_g17_ParamLimits

0x6228,	// (0x000b07bd) main_cset6_slider_pane_g17

0x0011,

0xfb92,	// (0x000ba127) main_cset6_slider_pane_g_ParamLimits

0xfb92,	// (0x000ba127) main_cset6_slider_pane_g

0xdee5,	// (0x000b847a) main_cset6_slider_pane_t1_ParamLimits

0xdee5,	// (0x000b847a) main_cset6_slider_pane_t1

0x7289,	// (0x000b181e) main_cset6_slider_pane_t2_ParamLimits

0x7289,	// (0x000b181e) main_cset6_slider_pane_t2

0x72b4,	// (0x000b1849) main_cset6_slider_pane_t3_ParamLimits

0x72b4,	// (0x000b1849) main_cset6_slider_pane_t3

0x72df,	// (0x000b1874) main_cset6_slider_pane_t4_ParamLimits

0x72df,	// (0x000b1874) main_cset6_slider_pane_t4

0x730a,	// (0x000b189f) main_cset6_slider_pane_t5_ParamLimits

0x730a,	// (0x000b189f) main_cset6_slider_pane_t5

0xdf26,	// (0x000b84bb) main_cset6_slider_pane_t7_ParamLimits

0xdf26,	// (0x000b84bb) main_cset6_slider_pane_t7

0x7335,	// (0x000b18ca) main_cset6_slider_pane_t8_ParamLimits

0x7335,	// (0x000b18ca) main_cset6_slider_pane_t8

0x7359,	// (0x000b18ee) main_cset6_slider_pane_t9_ParamLimits

0x7359,	// (0x000b18ee) main_cset6_slider_pane_t9

0x737d,	// (0x000b1912) main_cset6_slider_pane_t10_ParamLimits

0x737d,	// (0x000b1912) main_cset6_slider_pane_t10

0x73a1,	// (0x000b1936) main_cset6_slider_pane_t11_ParamLimits

0x73a1,	// (0x000b1936) main_cset6_slider_pane_t11

0xdf5c,	// (0x000b84f1) main_cset6_slider_pane_t14_ParamLimits

0xdf5c,	// (0x000b84f1) main_cset6_slider_pane_t14

0xdf95,	// (0x000b852a) main_cset6_slider_pane_t15_ParamLimits

0xdf95,	// (0x000b852a) main_cset6_slider_pane_t15

0x000b,

0xfbb7,	// (0x000ba14c) main_cset6_slider_pane_t_ParamLimits

0xfbb7,	// (0x000ba14c) main_cset6_slider_pane_t

0xdfce,	// (0x000b8563) cset_slider_pane_g1_copy1

0xdfd7,	// (0x000b856c) cset_slider_pane_g2_copy1

0xdfe0,	// (0x000b8575) cset_slider_pane_g3_copy1

0x92ff,	// (0x000b3894) bg_popup_sub_pane_cp011_copy1

0xdfe9,	// (0x000b857e) main_cset_text_pane_g1_copy1

0xd8ac,	// (0x000b7e41) main_cset_text_pane_t1_copy1

0xd8ba,	// (0x000b7e4f) main_cset_text_pane_t2_copy1

0xd8c8,	// (0x000b7e5d) main_cset_text_pane_t3_copy1

0xd8d6,	// (0x000b7e6b) main_cset_text_pane_t4_copy1

0xd8e4,	// (0x000b7e79) main_cset_text_pane_t5_copy1

0xdff1,	// (0x000b8586) main_cset_text_pane_t6_copy1

0xdfff,	// (0x000b8594) main_cset_text_pane_t7_copy1

0x7494,	// (0x000b1a29) main_cset_text2_pane_t1_copy1

0x9367,	// (0x000b38fc) main_ncimui_pane

0x3878,	// (0x000ade0d) popup_query_ncimui_window_ParamLimits

0x3878,	// (0x000ade0d) popup_query_ncimui_window

0xa5a7,	// (0x000b4b3c) field_cale_ev2_pane_g4_ParamLimits

0xa5a7,	// (0x000b4b3c) field_cale_ev2_pane_g4

0x5475,	// (0x000afa0a) cell_video_dialer_keypad_pane_g2_ParamLimits

0x5475,	// (0x000afa0a) cell_video_dialer_keypad_pane_g2

0x0001,

0xf895,	// (0x000b9e2a) cell_video_dialer_keypad_pane_g_ParamLimits

0xf895,	// (0x000b9e2a) cell_video_dialer_keypad_pane_g

0x548d,	// (0x000afa22) cell_video_dialer_keypad_pane_t1

0x92ff,	// (0x000b3894) bg_popup_window_pane_cp012

0xafd0,	// (0x000b5565) heading_pane_cp06

0xe02b,	// (0x000b85c0) ncim_query_content_pane

0x92ff,	// (0x000b3894) bg_popup_heading_pane_cp01

0xe033,	// (0x000b85c8) ncim_heading_pane_t1

0xe041,	// (0x000b85d6) ncim_indicator_popup_pane

0xe053,	// (0x000b85e8) ncim_query_button_pane

0xe067,	// (0x000b85fc) ncim_query_content_pane_t1

0xe079,	// (0x000b860e) ncim_query_content_pane_t2

0x0005,

0xfbfb,	// (0x000ba190) ncim_query_content_pane_t

0xe0b3,	// (0x000b8648) ncim_query_list_pane

0xe0c5,	// (0x000b865a) ncim_query_popup_pane

0xe041,	// (0x000b85d6) ncim_indicator_popup_pane_ParamLimits

0x75d8,	// (0x000b1b6d) ncim_query_content_pane_g1_ParamLimits

0x75d8,	// (0x000b1b6d) ncim_query_content_pane_g1

0xe067,	// (0x000b85fc) ncim_query_content_pane_t1_ParamLimits

0xe079,	// (0x000b860e) ncim_query_content_pane_t2_ParamLimits

0x75e4,	// (0x000b1b79) ncim_query_content_pane_t3_ParamLimits

0x75e4,	// (0x000b1b79) ncim_query_content_pane_t3

0x760c,	// (0x000b1ba1) ncim_query_content_pane_t4_ParamLimits

0x760c,	// (0x000b1ba1) ncim_query_content_pane_t4

0x7634,	// (0x000b1bc9) ncim_query_content_pane_t5_ParamLimits

0x7634,	// (0x000b1bc9) ncim_query_content_pane_t5

0xe08b,	// (0x000b8620) ncim_query_content_pane_t6_ParamLimits

0xe08b,	// (0x000b8620) ncim_query_content_pane_t6

0xfbfb,	// (0x000ba190) ncim_query_content_pane_t_ParamLimits

0xe0b3,	// (0x000b8648) ncim_query_list_pane_ParamLimits

0xe0c5,	// (0x000b865a) ncim_query_popup_pane_ParamLimits

0xe0d9,	// (0x000b866e) wait_bar_pane_cp04

0x92ff,	// (0x000b3894) input_focus_pane_cp011

0xe0e1,	// (0x000b8676) ncim_query_popup_pane_t1

0xe0ef,	// (0x000b8684) ncim_list_query_list_pane_ParamLimits

0xe0ef,	// (0x000b8684) ncim_list_query_list_pane

0x92ff,	// (0x000b3894) bg_button_pane_cp027

0xe102,	// (0x000b8697) ncim_query_button_pane_g1

0x92ff,	// (0x000b3894) list_highlight_pane_cp012

0xe10c,	// (0x000b86a1) ncim_list_query_list_pane_g1

0xe114,	// (0x000b86a9) ncim_list_query_list_pane_t1

0x9cfd,	// (0x000b4292) cam4_indicators_pane_g3_ParamLimits

0x9cfd,	// (0x000b4292) cam4_indicators_pane_g3

0x9d7b,	// (0x000b4310) vid4_indicators_pane_g5_ParamLimits

0x9d7b,	// (0x000b4310) vid4_indicators_pane_g5

0x9e6a,	// (0x000b43ff) vid4_progress_pane_g5_ParamLimits

0x9e6a,	// (0x000b43ff) vid4_progress_pane_g5

0x74c6,	// (0x000b1a5b) main_ncimui_pane_g1

0x752c,	// (0x000b1ac1) ncimui_group_query_pane_ParamLimits

0x752c,	// (0x000b1ac1) ncimui_group_query_pane

0x7574,	// (0x000b1b09) ncimui_list_pane_ParamLimits

0x7574,	// (0x000b1b09) ncimui_list_pane

0x759b,	// (0x000b1b30) ncimui_text_pane_ParamLimits

0x759b,	// (0x000b1b30) ncimui_text_pane

0x765c,	// (0x000b1bf1) ncimui_text_pane_t1_ParamLimits

0x765c,	// (0x000b1bf1) ncimui_text_pane_t1

0xe122,	// (0x000b86b7) ncimui_list_single_graphic_pane_ParamLimits

0xe122,	// (0x000b86b7) ncimui_list_single_graphic_pane

0x767a,	// (0x000b1c0f) ncimui_query_pane_ParamLimits

0x767a,	// (0x000b1c0f) ncimui_query_pane

0x92ff,	// (0x000b3894) list_highlight_pane_cp013

0xe132,	// (0x000b86c7) ncim_list_query_list_pane_t1_copy1

0xe10c,	// (0x000b86a1) ncim_list_single_graphic_pane_g1

0xe140,	// (0x000b86d5) ncim_query_button_pane_cp01

0xe14c,	// (0x000b86e1) ncim_query_entry_pane_ParamLimits

0xe14c,	// (0x000b86e1) ncim_query_entry_pane

0xe15f,	// (0x000b86f4) ncimui_query_pane_g1

0xe16b,	// (0x000b8700) ncimui_query_pane_t1_ParamLimits

0xe16b,	// (0x000b8700) ncimui_query_pane_t1

0xa55d,	// (0x000b4af2) input_focus_pane_cp012

0xe184,	// (0x000b8719) ncim_query_entry_pane_t1

0xa1f1,	// (0x000b4786) main_im_pane_ParamLimits

0x9367,	// (0x000b38fc) main_mobtv_pane_ParamLimits

0x9367,	// (0x000b38fc) main_mobtv_pane

0x7271,	// (0x000b1806) main_cset6_slider_pane_g18_ParamLimits

0x7271,	// (0x000b1806) main_cset6_slider_pane_g18

0x727d,	// (0x000b1812) main_cset6_slider_pane_g19_ParamLimits

0x727d,	// (0x000b1812) main_cset6_slider_pane_g19

0x768d,	// (0x000b1c22) bg_main_mobtv_pane_ParamLimits

0x768d,	// (0x000b1c22) bg_main_mobtv_pane

0x769b,	// (0x000b1c30) main_mobtv_info_pane

0x76a4,	// (0x000b1c39) main_mobtv_loading_pane_ParamLimits

0x76a4,	// (0x000b1c39) main_mobtv_loading_pane

0xe196,	// (0x000b872b) main_mobtv_pg_channel_list_pane

0xe1a0,	// (0x000b8735) main_mobtv_pg_hdr_pane

0x76b1,	// (0x000b1c46) main_mobtv_programe_curr_pane_ParamLimits

0x76b1,	// (0x000b1c46) main_mobtv_programe_curr_pane

0x76be,	// (0x000b1c53) main_mobtv_programe_next_pane_ParamLimits

0x76be,	// (0x000b1c53) main_mobtv_programe_next_pane

0xe1a9,	// (0x000b873e) popup_mobtv_noti_window

0xcbc4,	// (0x000b7159) main_tv_pg_hdr_pane_g1

0xe1b1,	// (0x000b8746) main_tv_pg_hdr_pane_g2

0xe1b9,	// (0x000b874e) main_tv_pg_hdr_pane_g3

0xe1c1,	// (0x000b8756) main_tv_pg_hdr_pane_g4

0xe1c9,	// (0x000b875e) main_tv_pg_hdr_pane_g5

0xe1d3,	// (0x000b8768) main_tv_pg_hdr_pane_g6

0xe1dd,	// (0x000b8772) main_tv_pg_hdr_pane_g7

0xe1e7,	// (0x000b877c) main_tv_pg_hdr_pane_g8

0xe1f1,	// (0x000b8786) main_tv_pg_hdr_pane_g9

0xe1fb,	// (0x000b8790) main_tv_pg_hdr_pane_g10

0xe205,	// (0x000b879a) main_tv_pg_hdr_pane_g11

0x000a,

0xfc08,	// (0x000ba19d) main_tv_pg_hdr_pane_g

0xe20f,	// (0x000b87a4) main_tv_pg_hdr_pane_t1

0xe21d,	// (0x000b87b2) main_tv_pg_hdr_pane_t2

0xe22b,	// (0x000b87c0) main_tv_pg_hdr_pane_t3

0xe23b,	// (0x000b87d0) main_tv_pg_hdr_pane_t4

0xe24b,	// (0x000b87e0) main_tv_pg_hdr_pane_t5

0x0004,

0xfc1f,	// (0x000ba1b4) main_tv_pg_hdr_pane_t

0xe25b,	// (0x000b87f0) single_mobtv_pg_channel_pane_ParamLimits

0xe25b,	// (0x000b87f0) single_mobtv_pg_channel_pane

0xe26d,	// (0x000b8802) single_mobtv_pg_channel_table_pane

0xe276,	// (0x000b880b) single_mobtv_pg_channel_thumb_pane

0xe27f,	// (0x000b8814) single_tv_pg_channel_pane_g1

0xe288,	// (0x000b881d) single_tv_pg_channel_pane_g2

0x0001,

0xfc2a,	// (0x000ba1bf) single_tv_pg_channel_pane_g

0xce24,	// (0x000b73b9) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xce24,	// (0x000b73b9) bg_single_mobtv_pg_channel_thumb_pane

0xe291,	// (0x000b8826) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe291,	// (0x000b8826) single_mobtv_pg_channel_thumb_pane_g1

0xe29f,	// (0x000b8834) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe29f,	// (0x000b8834) single_mobtv_pg_channel_thumb_pane_g2

0xe2ab,	// (0x000b8840) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe2ab,	// (0x000b8840) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc2f,	// (0x000ba1c4) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc2f,	// (0x000ba1c4) single_mobtv_pg_channel_thumb_pane_g

0xe2b7,	// (0x000b884c) single_mobtv_pg_channel_thumb_pane_t1

0xe2c5,	// (0x000b885a) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc36,	// (0x000ba1cb) single_mobtv_pg_channel_thumb_pane_t

0xcbc4,	// (0x000b7159) bg_single_mobtv_pg_channel_table_pane_g1

0xcbc4,	// (0x000b7159) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6dc,	// (0x000b9c71) bg_single_mobtv_pg_channel_table_pane_g

0xe2d3,	// (0x000b8868) single_mobtv_pg_channel_table_pane_t1

0xe2e1,	// (0x000b8876) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc3b,	// (0x000ba1d0) single_mobtv_pg_channel_table_pane_t

0x76d3,	// (0x000b1c68) main_mobtv_info_pane_g1_ParamLimits

0x76d3,	// (0x000b1c68) main_mobtv_info_pane_g1

0x76f1,	// (0x000b1c86) main_mobtv_info_pane_t1_ParamLimits

0x76f1,	// (0x000b1c86) main_mobtv_info_pane_t1

0x7769,	// (0x000b1cfe) main_mobtv_info_pane_t2_ParamLimits

0x7769,	// (0x000b1cfe) main_mobtv_info_pane_t2

0x0002,

0xfc45,	// (0x000ba1da) main_mobtv_info_pane_t_ParamLimits

0xfc45,	// (0x000ba1da) main_mobtv_info_pane_t

0x77f8,	// (0x000b1d8d) wait_bar_pane_cp05

0x780a,	// (0x000b1d9f) main_mobtv_loading_pane_g1_ParamLimits

0x780a,	// (0x000b1d9f) main_mobtv_loading_pane_g1

0x781d,	// (0x000b1db2) main_mobtv_loading_pane_g2_ParamLimits

0x781d,	// (0x000b1db2) main_mobtv_loading_pane_g2

0x7829,	// (0x000b1dbe) main_mobtv_loading_pane_g3_ParamLimits

0x7829,	// (0x000b1dbe) main_mobtv_loading_pane_g3

0x0002,

0xfc4c,	// (0x000ba1e1) main_mobtv_loading_pane_g_ParamLimits

0xfc4c,	// (0x000ba1e1) main_mobtv_loading_pane_g

0xe2ef,	// (0x000b8884) main_mobtv_loading_pane_t1_ParamLimits

0xe2ef,	// (0x000b8884) main_mobtv_loading_pane_t1

0xe307,	// (0x000b889c) main_mobtv_loading_pane_t2_ParamLimits

0xe307,	// (0x000b889c) main_mobtv_loading_pane_t2

0x0001,

0xfc53,	// (0x000ba1e8) main_mobtv_loading_pane_t_ParamLimits

0xfc53,	// (0x000ba1e8) main_mobtv_loading_pane_t

0x783c,	// (0x000b1dd1) wait_bar_pane_cp06_ParamLimits

0x783c,	// (0x000b1dd1) wait_bar_pane_cp06

0xe32b,	// (0x000b88c0) main_mobtv_programe_curr_pane_t1

0xe339,	// (0x000b88ce) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc58,	// (0x000ba1ed) main_mobtv_programe_curr_pane_t

0xe347,	// (0x000b88dc) main_mobtv_programe_next_pane_t1

0xe355,	// (0x000b88ea) main_mobtv_programe_next_pane_t2

0xe363,	// (0x000b88f8) main_mobtv_programe_next_pane_t3

0x0002,

0xfc5d,	// (0x000ba1f2) main_mobtv_programe_next_pane_t

0x92ff,	// (0x000b3894) bg_popup_mobtv_noti_window_pane

0xe371,	// (0x000b8906) popup_mobtv_noti_window_g1

0xe379,	// (0x000b890e) popup_mobtv_noti_window_t1

0xe387,	// (0x000b891c) popup_mobtv_noti_window_t2

0x0001,

0xfc64,	// (0x000ba1f9) popup_mobtv_noti_window_t

0xcbc4,	// (0x000b7159) bg_popup_mobtv_noti_window_pane_g1

0x9375,	// (0x000b390a) sc_clock_pane

0x9375,	// (0x000b390a) main_fs_bigclock_pane

0x6e7e,	// (0x000b1413) blid2_tripm_pane_t4_ParamLimits

0x6e7e,	// (0x000b1413) blid2_tripm_pane_t4

0x784b,	// (0x000b1de0) sc_clock_pane_g1_ParamLimits

0x784b,	// (0x000b1de0) sc_clock_pane_g1

0x785d,	// (0x000b1df2) sc_clock_pane_t1_ParamLimits

0x785d,	// (0x000b1df2) sc_clock_pane_t1

0x787f,	// (0x000b1e14) sc_clock_pane_t2_ParamLimits

0x787f,	// (0x000b1e14) sc_clock_pane_t2

0x7897,	// (0x000b1e2c) sc_clock_pane_t3_ParamLimits

0x7897,	// (0x000b1e2c) sc_clock_pane_t3

0x0004,

0xfc69,	// (0x000ba1fe) sc_clock_pane_t_ParamLimits

0xfc69,	// (0x000ba1fe) sc_clock_pane_t

0x87d0,	// (0x000b2d65) main_fs_bigclock_indicator_pane_ParamLimits

0x87d0,	// (0x000b2d65) main_fs_bigclock_indicator_pane

0x7937,	// (0x000b1ecc) main_fs_bigclock_pane_g1_ParamLimits

0x7937,	// (0x000b1ecc) main_fs_bigclock_pane_g1

0x87dc,	// (0x000b2d71) main_fs_bigclock_pane_t1_ParamLimits

0x87dc,	// (0x000b2d71) main_fs_bigclock_pane_t1

0x87ee,	// (0x000b2d83) main_fs_bigclock_pane_t2_ParamLimits

0x87ee,	// (0x000b2d83) main_fs_bigclock_pane_t2

0x8800,	// (0x000b2d95) main_fs_bigclock_pane_t3_ParamLimits

0x8800,	// (0x000b2d95) main_fs_bigclock_pane_t3

0x0002,

0xfe73,	// (0x000ba408) main_fs_bigclock_pane_t_ParamLimits

0xfe73,	// (0x000ba408) main_fs_bigclock_pane_t

0xec85,	// (0x000b921a) main_fs_bigclock_indicator_pane_g1

0xe05b,	// (0x000b85f0) ncim_query_content_pane_g2_ParamLimits

0xe05b,	// (0x000b85f0) ncim_query_content_pane_g2

0x0001,

0xfbf6,	// (0x000ba18b) ncim_query_content_pane_g_ParamLimits

0xfbf6,	// (0x000ba18b) ncim_query_content_pane_g

0x78b0,	// (0x000b1e45) sc_clock_pane_t4_ParamLimits

0x78b0,	// (0x000b1e45) sc_clock_pane_t4

0x9367,	// (0x000b38fc) main_radioblah_pane

0xd57a,	// (0x000b7b0f) cell_call4_button_pane_t1_copy1_ParamLimits

0xd57a,	// (0x000b7b0f) cell_call4_button_pane_t1_copy1

0x74de,	// (0x000b1a73) main_ncimui_pane_t1_ParamLimits

0x74de,	// (0x000b1a73) main_ncimui_pane_t1

0x74f8,	// (0x000b1a8d) main_ncimui_pane_t2_ParamLimits

0x74f8,	// (0x000b1a8d) main_ncimui_pane_t2

0x0002,

0xfbef,	// (0x000ba184) main_ncimui_pane_t_ParamLimits

0xfbef,	// (0x000ba184) main_ncimui_pane_t

0xe4d5,	// (0x000b8a6a) main_radioblah_anim_pane_ParamLimits

0xe4d5,	// (0x000b8a6a) main_radioblah_anim_pane

0xe4e6,	// (0x000b8a7b) main_radioblah_info_pane_ParamLimits

0xe4e6,	// (0x000b8a7b) main_radioblah_info_pane

0xe4fa,	// (0x000b8a8f) main_radioblah_pane_t1_ParamLimits

0xe4fa,	// (0x000b8a8f) main_radioblah_pane_t1

0xe516,	// (0x000b8aab) main_radioblah_pane_t2_ParamLimits

0xe516,	// (0x000b8aab) main_radioblah_pane_t2

0x0003,

0xfc8a,	// (0x000ba21f) main_radioblah_pane_t_ParamLimits

0xfc8a,	// (0x000ba21f) main_radioblah_pane_t

0x798f,	// (0x000b1f24) main_radioblah_rocker_ctrl_pane_ParamLimits

0x798f,	// (0x000b1f24) main_radioblah_rocker_ctrl_pane

0xe55e,	// (0x000b8af3) main_radioblah_info_pane_t1_ParamLimits

0xe55e,	// (0x000b8af3) main_radioblah_info_pane_t1

0x79e7,	// (0x000b1f7c) main_radioblah_info_pane_t2_ParamLimits

0x79e7,	// (0x000b1f7c) main_radioblah_info_pane_t2

0x0003,

0xfc93,	// (0x000ba228) main_radioblah_info_pane_t_ParamLimits

0xfc93,	// (0x000ba228) main_radioblah_info_pane_t

0xcbc4,	// (0x000b7159) main_radioblah_rocker_ctrl_pane_g1

0x7a97,	// (0x000b202c) main_radioblah_rocker_ctrl_pane_g2

0x7a9f,	// (0x000b2034) main_radioblah_rocker_ctrl_pane_g3

0x7aa7,	// (0x000b203c) main_radioblah_rocker_ctrl_pane_g4

0x7aaf,	// (0x000b2044) main_radioblah_rocker_ctrl_pane_g5

0x7ab7,	// (0x000b204c) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc9c,	// (0x000ba231) main_radioblah_rocker_ctrl_pane_g

0x7494,	// (0x000b1a29) main_cset_text2_pane_t1_copy1_ParamLimits

0x9cbf,	// (0x000b4254) cam4_image_uncrop_qvga_pane

0x9d26,	// (0x000b42bb) vid4_image_uncrop_qcif_pane

0x9ea4,	// (0x000b4439) cam6_image_uncrop_qvga_pane_ParamLimits

0x9ea4,	// (0x000b4439) cam6_image_uncrop_qvga_pane

0xdd47,	// (0x000b82dc) vid6_image_uncrop_qcif_pane_ParamLimits

0xdd47,	// (0x000b82dc) vid6_image_uncrop_qcif_pane

0x92ff,	// (0x000b3894) bg_popup_preview_window_pane_cp03

0xe00d,	// (0x000b85a2) list_cset_text2_pane

0xe015,	// (0x000b85aa) main_cset6_text2_pane_g1

0xe01d,	// (0x000b85b2) main_cset6_text2_pane_t1

0xe598,	// (0x000b8b2d) list_cset_text2_pane_t1_ParamLimits

0xe598,	// (0x000b8b2d) list_cset_text2_pane_t1

0x9367,	// (0x000b38fc) main_radioblah_pane_ParamLimits

0x77e4,	// (0x000b1d79) main_mobtv_info_pane_t3_ParamLimits

0x77e4,	// (0x000b1d79) main_mobtv_info_pane_t3

0x797d,	// (0x000b1f12) main_radioblah_pane_g1

0x79b7,	// (0x000b1f4c) main_radioblah_info_pane_g1

0x7a3c,	// (0x000b1fd1) main_radioblah_info_pane_t3_ParamLimits

0x7a3c,	// (0x000b1fd1) main_radioblah_info_pane_t3

0x22a8,	// (0x000ac83d) highlight_cell_cale_month_pane_ParamLimits

0x22a8,	// (0x000ac83d) highlight_cell_cale_month_pane

0x9375,	// (0x000b390a) main_phob_fisheye_pane

0xcf00,	// (0x000b7495) scroll_pane_cp0031_ParamLimits

0xcf00,	// (0x000b7495) scroll_pane_cp0031

0xde55,	// (0x000b83ea) wait_bar_pane_cp08_ParamLimits

0x71cb,	// (0x000b1760) cset_list_set_pane_copy1_ParamLimits

0xe5b3,	// (0x000b8b48) highlight_cell_cale_month_pane_g1

0x7abf,	// (0x000b2054) highlight_cell_cale_month_pane_t1

0xdaea,	// (0x000b807f) list_gen_pane_cp01

0xd753,	// (0x000b7ce8) scroll_pane_01

0x7acd,	// (0x000b2062) list_single_double_fisheye_pane

0x7ad6,	// (0x000b206b) list_double_fisheye_pane_g1_ParamLimits

0x7ad6,	// (0x000b206b) list_double_fisheye_pane_g1

0x7ae2,	// (0x000b2077) list_double_fisheye_pane_g2_ParamLimits

0x7ae2,	// (0x000b2077) list_double_fisheye_pane_g2

0x7af6,	// (0x000b208b) list_double_fisheye_pane_g3_ParamLimits

0x7af6,	// (0x000b208b) list_double_fisheye_pane_g3

0x0004,

0xfca9,	// (0x000ba23e) list_double_fisheye_pane_g_ParamLimits

0xfca9,	// (0x000ba23e) list_double_fisheye_pane_g

0x7b1f,	// (0x000b20b4) list_double_fisheye_pane_t1_ParamLimits

0x7b1f,	// (0x000b20b4) list_double_fisheye_pane_t1

0x7b3a,	// (0x000b20cf) list_double_fisheye_pane_t2_ParamLimits

0x7b3a,	// (0x000b20cf) list_double_fisheye_pane_t2

0x0001,

0xfcb4,	// (0x000ba249) list_double_fisheye_pane_t_ParamLimits

0xfcb4,	// (0x000ba249) list_double_fisheye_pane_t

0x9375,	// (0x000b390a) main_call5_pane

0x78db,	// (0x000b1e70) sc_swipe_pane_ParamLimits

0x78db,	// (0x000b1e70) sc_swipe_pane

0x7b6f,	// (0x000b2104) call5_image_pane_ParamLimits

0x7b6f,	// (0x000b2104) call5_image_pane

0x7b8c,	// (0x000b2121) call5_swipe_1_pane_ParamLimits

0x7b8c,	// (0x000b2121) call5_swipe_1_pane

0x7b9f,	// (0x000b2134) call5_swipe_2_pane_ParamLimits

0x7b9f,	// (0x000b2134) call5_swipe_2_pane

0x7bca,	// (0x000b215f) popup_call5_audio_first_window_ParamLimits

0x7bca,	// (0x000b215f) popup_call5_audio_first_window

0xce24,	// (0x000b73b9) call5_swipe_1_pane_g1_ParamLimits

0xce24,	// (0x000b73b9) call5_swipe_1_pane_g1

0xe5bb,	// (0x000b8b50) call5_swipe_1_pane_g2_ParamLimits

0xe5bb,	// (0x000b8b50) call5_swipe_1_pane_g2

0x0001,

0xfcb9,	// (0x000ba24e) call5_swipe_1_pane_g_ParamLimits

0xfcb9,	// (0x000ba24e) call5_swipe_1_pane_g

0xe5c7,	// (0x000b8b5c) call5_swipe_1_pane_t1_ParamLimits

0xe5c7,	// (0x000b8b5c) call5_swipe_1_pane_t1

0xce24,	// (0x000b73b9) call5_swipe_2_pane_g1_ParamLimits

0xce24,	// (0x000b73b9) call5_swipe_2_pane_g1

0xe5dc,	// (0x000b8b71) call5_swipe_2_pane_g2_ParamLimits

0xe5dc,	// (0x000b8b71) call5_swipe_2_pane_g2

0x0001,

0xfcbe,	// (0x000ba253) call5_swipe_2_pane_g_ParamLimits

0xfcbe,	// (0x000ba253) call5_swipe_2_pane_g

0xe5e8,	// (0x000b8b7d) call5_swipe_2_pane_t1_ParamLimits

0xe5e8,	// (0x000b8b7d) call5_swipe_2_pane_t1

0xe5fd,	// (0x000b8b92) sc_swipe_pane_g1_ParamLimits

0xe5fd,	// (0x000b8b92) sc_swipe_pane_g1

0xe60a,	// (0x000b8b9f) sc_swipe_pane_g2_ParamLimits

0xe60a,	// (0x000b8b9f) sc_swipe_pane_g2

0x0001,

0xfcc3,	// (0x000ba258) sc_swipe_pane_g_ParamLimits

0xfcc3,	// (0x000ba258) sc_swipe_pane_g

0xe616,	// (0x000b8bab) sc_swipe_pane_t1_ParamLimits

0xe616,	// (0x000b8bab) sc_swipe_pane_t1

0x9375,	// (0x000b390a) main_cmail_launcher_pane

0x7bdb,	// (0x000b2170) aid_size_cell_cmail_l_ParamLimits

0x7bdb,	// (0x000b2170) aid_size_cell_cmail_l

0x7bf5,	// (0x000b218a) grid_cmail_l_pane_ParamLimits

0x7bf5,	// (0x000b218a) grid_cmail_l_pane

0x7c10,	// (0x000b21a5) cell_cmail_l_pane_ParamLimits

0x7c10,	// (0x000b21a5) cell_cmail_l_pane

0x7c36,	// (0x000b21cb) cell_cmail_l_pane_g1_ParamLimits

0x7c36,	// (0x000b21cb) cell_cmail_l_pane_g1

0x7c47,	// (0x000b21dc) cell_cmail_l_pane_t1_ParamLimits

0x7c47,	// (0x000b21dc) cell_cmail_l_pane_t1

0xe62b,	// (0x000b8bc0) cell_cmail_l_pane_t2_ParamLimits

0xe62b,	// (0x000b8bc0) cell_cmail_l_pane_t2

0x0001,

0xfcc8,	// (0x000ba25d) cell_cmail_l_pane_t_ParamLimits

0xfcc8,	// (0x000ba25d) cell_cmail_l_pane_t

0xa55d,	// (0x000b4af2) grid_highlight_pane_cp018_ParamLimits

0xa55d,	// (0x000b4af2) grid_highlight_pane_cp018

0x01d8,	// (0x000aa76d) main2_pane_ParamLimits

0x01d8,	// (0x000aa76d) main2_pane

0xa29c,	// (0x000b4831) popup_sp_fs_action_menu_bg_pane_g1

0xa2a4,	// (0x000b4839) popup_sp_fs_action_menu_bg_pane_g2

0xa2ac,	// (0x000b4841) popup_sp_fs_action_menu_bg_pane_g3

0xa2b4,	// (0x000b4849) popup_sp_fs_action_menu_bg_pane_g4

0xa2bc,	// (0x000b4851) popup_sp_fs_action_menu_bg_pane_g5

0xa2c4,	// (0x000b4859) popup_sp_fs_action_menu_bg_pane_g6

0xa2cc,	// (0x000b4861) popup_sp_fs_action_menu_bg_pane_g7

0xa2d4,	// (0x000b4869) popup_sp_fs_action_menu_bg_pane_g8

0xa2dc,	// (0x000b4871) popup_sp_fs_action_menu_bg_pane_g9

0xa2e4,	// (0x000b4879) popup_sp_fs_action_menu_bg_pane_g10

0xa2e4,	// (0x000b4879) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf18a,	// (0x000b971f) popup_sp_fs_action_menu_bg_pane_g

0x11e6,	// (0x000ab77b) list_medium_line_x2_t3_g3_g1_ParamLimits

0x11e6,	// (0x000ab77b) list_medium_line_x2_t3_g3_g1

0x11f2,	// (0x000ab787) list_medium_line_x2_t3_g3_g2_ParamLimits

0x11f2,	// (0x000ab787) list_medium_line_x2_t3_g3_g2

0x11fe,	// (0x000ab793) list_medium_line_x2_t3_g3_g3_ParamLimits

0x11fe,	// (0x000ab793) list_medium_line_x2_t3_g3_g3

0x0002,

0xf238,	// (0x000b97cd) list_medium_line_x2_t3_g3_g_ParamLimits

0xf238,	// (0x000b97cd) list_medium_line_x2_t3_g3_g

0x120a,	// (0x000ab79f) list_medium_line_x2_t3_g3_t1_ParamLimits

0x120a,	// (0x000ab79f) list_medium_line_x2_t3_g3_t1

0x121f,	// (0x000ab7b4) list_medium_line_x2_t3_g3_t2_ParamLimits

0x121f,	// (0x000ab7b4) list_medium_line_x2_t3_g3_t2

0x1233,	// (0x000ab7c8) list_medium_line_x2_t3_g3_t3_ParamLimits

0x1233,	// (0x000ab7c8) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23f,	// (0x000b97d4) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23f,	// (0x000b97d4) list_medium_line_x2_t3_g3_t

0x11e6,	// (0x000ab77b) list_medium_line_x2_t3_g2_g1_ParamLimits

0x11e6,	// (0x000ab77b) list_medium_line_x2_t3_g2_g1

0x11fe,	// (0x000ab793) list_medium_line_x2_t3_g2_g2_ParamLimits

0x11fe,	// (0x000ab793) list_medium_line_x2_t3_g2_g2

0x0001,

0xf246,	// (0x000b97db) list_medium_line_x2_t3_g2_g_ParamLimits

0xf246,	// (0x000b97db) list_medium_line_x2_t3_g2_g

0x1248,	// (0x000ab7dd) list_medium_line_x2_t3_g2_t1_ParamLimits

0x1248,	// (0x000ab7dd) list_medium_line_x2_t3_g2_t1

0x125e,	// (0x000ab7f3) list_medium_line_x2_t3_g2_t2_ParamLimits

0x125e,	// (0x000ab7f3) list_medium_line_x2_t3_g2_t2

0x1270,	// (0x000ab805) list_medium_line_x2_t3_g2_t3_ParamLimits

0x1270,	// (0x000ab805) list_medium_line_x2_t3_g2_t3

0x0002,

0xf24b,	// (0x000b97e0) list_medium_line_x2_t3_g2_t_ParamLimits

0xf24b,	// (0x000b97e0) list_medium_line_x2_t3_g2_t

0x11e6,	// (0x000ab77b) list_medium_line_x2_t4_g4_g1_ParamLimits

0x11e6,	// (0x000ab77b) list_medium_line_x2_t4_g4_g1

0x128d,	// (0x000ab822) list_medium_line_x2_t4_g4_g2_ParamLimits

0x128d,	// (0x000ab822) list_medium_line_x2_t4_g4_g2

0x11f2,	// (0x000ab787) list_medium_line_x2_t4_g4_g3_ParamLimits

0x11f2,	// (0x000ab787) list_medium_line_x2_t4_g4_g3

0x1299,	// (0x000ab82e) list_medium_line_x2_t4_g4_g4_ParamLimits

0x1299,	// (0x000ab82e) list_medium_line_x2_t4_g4_g4

0x0003,

0xf252,	// (0x000b97e7) list_medium_line_x2_t4_g4_g_ParamLimits

0xf252,	// (0x000b97e7) list_medium_line_x2_t4_g4_g

0x12a5,	// (0x000ab83a) list_medium_line_x2_t4_g4_t1_ParamLimits

0x12a5,	// (0x000ab83a) list_medium_line_x2_t4_g4_t1

0x12bf,	// (0x000ab854) list_medium_line_x2_t4_g4_t2_ParamLimits

0x12bf,	// (0x000ab854) list_medium_line_x2_t4_g4_t2

0x12d4,	// (0x000ab869) list_medium_line_x2_t4_g4_t3_ParamLimits

0x12d4,	// (0x000ab869) list_medium_line_x2_t4_g4_t3

0x12e9,	// (0x000ab87e) list_medium_line_x2_t4_g4_t4_ParamLimits

0x12e9,	// (0x000ab87e) list_medium_line_x2_t4_g4_t4

0x0003,

0xf25b,	// (0x000b97f0) list_medium_line_x2_t4_g4_t_ParamLimits

0xf25b,	// (0x000b97f0) list_medium_line_x2_t4_g4_t

0x11e6,	// (0x000ab77b) list_medium_line_x2_t2_g4_g1_ParamLimits

0x11e6,	// (0x000ab77b) list_medium_line_x2_t2_g4_g1

0x128d,	// (0x000ab822) list_medium_line_x2_t2_g4_g2_ParamLimits

0x128d,	// (0x000ab822) list_medium_line_x2_t2_g4_g2

0x11f2,	// (0x000ab787) list_medium_line_x2_t2_g4_g3_ParamLimits

0x11f2,	// (0x000ab787) list_medium_line_x2_t2_g4_g3

0x11fe,	// (0x000ab793) list_medium_line_x2_t2_g4_g4_ParamLimits

0x11fe,	// (0x000ab793) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c2,	// (0x000b9857) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c2,	// (0x000b9857) list_medium_line_x2_t2_g4_g

0x22ce,	// (0x000ac863) list_medium_line_x2_t2_g4_t1_ParamLimits

0x22ce,	// (0x000ac863) list_medium_line_x2_t2_g4_t1

0x1233,	// (0x000ab7c8) list_medium_line_x2_t2_g4_t2_ParamLimits

0x1233,	// (0x000ab7c8) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2cb,	// (0x000b9860) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2cb,	// (0x000b9860) list_medium_line_x2_t2_g4_t

0x11e6,	// (0x000ab77b) list_medium_line_x2_t2_g3_g1_ParamLimits

0x11e6,	// (0x000ab77b) list_medium_line_x2_t2_g3_g1

0x11f2,	// (0x000ab787) list_medium_line_x2_t2_g3_g2_ParamLimits

0x11f2,	// (0x000ab787) list_medium_line_x2_t2_g3_g2

0x11fe,	// (0x000ab793) list_medium_line_x2_t2_g3_g3_ParamLimits

0x11fe,	// (0x000ab793) list_medium_line_x2_t2_g3_g3

0x0002,

0xf238,	// (0x000b97cd) list_medium_line_x2_t2_g3_g_ParamLimits

0xf238,	// (0x000b97cd) list_medium_line_x2_t2_g3_g

0x22e3,	// (0x000ac878) list_medium_line_x2_t2_g3_t1_ParamLimits

0x22e3,	// (0x000ac878) list_medium_line_x2_t2_g3_t1

0x1233,	// (0x000ab7c8) list_medium_line_x2_t2_g3_t2_ParamLimits

0x1233,	// (0x000ab7c8) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d0,	// (0x000b9865) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d0,	// (0x000b9865) list_medium_line_x2_t2_g3_t

0x2422,	// (0x000ac9b7) main_sp_fs_list_pane_ParamLimits

0x2422,	// (0x000ac9b7) main_sp_fs_list_pane

0xc1eb,	// (0x000b6780) sp_fs_scroll_pane_ParamLimits

0xc1eb,	// (0x000b6780) sp_fs_scroll_pane

0x242e,	// (0x000ac9c3) list_medium_line_x2_t3_t1

0x243e,	// (0x000ac9d3) list_medium_line_x2_t3_t2

0x244c,	// (0x000ac9e1) list_medium_line_x2_t3_t3

0x0002,

0xf31b,	// (0x000b98b0) list_medium_line_x2_t3_t

0x245a,	// (0x000ac9ef) list_medium_line_x3_t4_t1

0x246a,	// (0x000ac9ff) list_medium_line_x3_t4_t2

0x2478,	// (0x000aca0d) list_medium_line_x3_t4_t3

0x244c,	// (0x000ac9e1) list_medium_line_x3_t4_t4

0x0003,

0xf322,	// (0x000b98b7) list_medium_line_x3_t4_t

0x2486,	// (0x000aca1b) list_medium_line_x4_t5_t1

0x2496,	// (0x000aca2b) list_medium_line_x4_t5_t2

0x2478,	// (0x000aca0d) list_medium_line_x4_t5_t3

0x24a4,	// (0x000aca39) list_medium_line_x4_t5_t4

0x244c,	// (0x000ac9e1) list_medium_line_x4_t5_t5

0x0004,

0xf32b,	// (0x000b98c0) list_medium_line_x4_t5_t

0x11e6,	// (0x000ab77b) list_medium_line_t4_g4_g1_ParamLimits

0x11e6,	// (0x000ab77b) list_medium_line_t4_g4_g1

0x1299,	// (0x000ab82e) list_medium_line_t4_g4_g2_ParamLimits

0x1299,	// (0x000ab82e) list_medium_line_t4_g4_g2

0x24b2,	// (0x000aca47) list_medium_line_t4_g4_g3_ParamLimits

0x24b2,	// (0x000aca47) list_medium_line_t4_g4_g3

0x11fe,	// (0x000ab793) list_medium_line_t4_g4_g4_ParamLimits

0x11fe,	// (0x000ab793) list_medium_line_t4_g4_g4

0x0003,

0xf336,	// (0x000b98cb) list_medium_line_t4_g4_g_ParamLimits

0xf336,	// (0x000b98cb) list_medium_line_t4_g4_g

0x24be,	// (0x000aca53) list_medium_line_t4_g4_t1_ParamLimits

0x24be,	// (0x000aca53) list_medium_line_t4_g4_t1

0x24d3,	// (0x000aca68) list_medium_line_t4_g4_t2_ParamLimits

0x24d3,	// (0x000aca68) list_medium_line_t4_g4_t2

0x24e8,	// (0x000aca7d) list_medium_line_t4_g4_t3_ParamLimits

0x24e8,	// (0x000aca7d) list_medium_line_t4_g4_t3

0x1233,	// (0x000ab7c8) list_medium_line_t4_g4_t4_ParamLimits

0x1233,	// (0x000ab7c8) list_medium_line_t4_g4_t4

0x0003,

0xf33f,	// (0x000b98d4) list_medium_line_t4_g4_t_ParamLimits

0xf33f,	// (0x000b98d4) list_medium_line_t4_g4_t

0x259c,	// (0x000acb31) chi_dic_find_pane_g1

0x3650,	// (0x000adbe5) main_tport_pane

0x64cf,	// (0x000b0a64) list_medium_line_plain_t1

0x6581,	// (0x000b0b16) list_medium_line_t2_g2_g1_ParamLimits

0x6581,	// (0x000b0b16) list_medium_line_t2_g2_g1

0x658d,	// (0x000b0b22) list_medium_line_t2_g2_g2_ParamLimits

0x658d,	// (0x000b0b22) list_medium_line_t2_g2_g2

0x0001,

0xfa00,	// (0x000b9f95) list_medium_line_t2_g2_g_ParamLimits

0xfa00,	// (0x000b9f95) list_medium_line_t2_g2_g

0x6599,	// (0x000b0b2e) list_medium_line_t2_g2_t1_ParamLimits

0x6599,	// (0x000b0b2e) list_medium_line_t2_g2_t1

0x65b0,	// (0x000b0b45) list_medium_line_t2_g2_t2_ParamLimits

0x65b0,	// (0x000b0b45) list_medium_line_t2_g2_t2

0x0001,

0xfa05,	// (0x000b9f9a) list_medium_line_t2_g2_t_ParamLimits

0xfa05,	// (0x000b9f9a) list_medium_line_t2_g2_t

0xa6bc,	// (0x000b4c51) aid_sp_fs_list_icon_a_sm

0xa6c4,	// (0x000b4c59) aid_sp_fs_list_icon_d

0xb5db,	// (0x000b5b70) aid_sp_fs_text_primary

0xa6cc,	// (0x000b4c61) aid_sp_fs_text_secondary

0x6c2b,	// (0x000b11c0) list_medium_line

0x6c2b,	// (0x000b11c0) list_medium_line_g2

0x6c2b,	// (0x000b11c0) list_medium_line_g3

0x6c2b,	// (0x000b11c0) list_medium_line_plain

0x6c2b,	// (0x000b11c0) list_medium_line_plain_t2

0x6c2b,	// (0x000b11c0) list_medium_line_plain_t3

0x6c2b,	// (0x000b11c0) list_medium_line_right_icon

0x6c2b,	// (0x000b11c0) list_medium_line_right_iconx2

0x6c2b,	// (0x000b11c0) list_medium_line_t2

0x6c2b,	// (0x000b11c0) list_medium_line_t2_g2

0x6c2b,	// (0x000b11c0) list_medium_line_t2_g3

0x6c2b,	// (0x000b11c0) list_medium_line_t2_right_icon

0x6c2b,	// (0x000b11c0) list_medium_line_t2_right_iconx2

0x6c2b,	// (0x000b11c0) list_medium_line_t3

0x6c2b,	// (0x000b11c0) list_medium_line_t3_g2

0x6c2b,	// (0x000b11c0) list_medium_line_t3_g3

0x6c2b,	// (0x000b11c0) list_medium_line_t3_right_iconx2

0x6c34,	// (0x000b11c9) list_medium_line_t4_g4

0x6c3d,	// (0x000b11d2) list_medium_line_x2

0x6c3d,	// (0x000b11d2) list_medium_line_x2_t2_g2

0x6c3d,	// (0x000b11d2) list_medium_line_x2_t2_g3

0x6c3d,	// (0x000b11d2) list_medium_line_x2_t2_g4

0x6c3d,	// (0x000b11d2) list_medium_line_x2_t3

0x6c3d,	// (0x000b11d2) list_medium_line_x2_t3_g2

0x6c3d,	// (0x000b11d2) list_medium_line_x2_t3_g3

0x6c3d,	// (0x000b11d2) list_medium_line_x2_t3_g4

0x6c3d,	// (0x000b11d2) list_medium_line_x2_t4_g2

0x6c3d,	// (0x000b11d2) list_medium_line_x2_t4_g4

0x6c46,	// (0x000b11db) list_medium_line_x3

0x6c46,	// (0x000b11db) list_medium_line_x3_t4

0x6c46,	// (0x000b11db) list_medium_line_x3_t4_g4

0x6c34,	// (0x000b11c9) list_medium_line_x4_t4

0x6c34,	// (0x000b11c9) list_medium_line_x4_t4_g7

0x6c34,	// (0x000b11c9) list_medium_line_x4_t5

0x6c4f,	// (0x000b11e4) list_single_fs_dyc_pane_ParamLimits

0x6c4f,	// (0x000b11e4) list_single_fs_dyc_pane

0x11e6,	// (0x000ab77b) list_medium_line_x4_t4_g7_g1_ParamLimits

0x11e6,	// (0x000ab77b) list_medium_line_x4_t4_g7_g1

0x73c5,	// (0x000b195a) list_medium_line_x4_t4_g7_g2_ParamLimits

0x73c5,	// (0x000b195a) list_medium_line_x4_t4_g7_g2

0x73d1,	// (0x000b1966) list_medium_line_x4_t4_g7_g3_ParamLimits

0x73d1,	// (0x000b1966) list_medium_line_x4_t4_g7_g3

0x73e0,	// (0x000b1975) list_medium_line_x4_t4_g7_g4_ParamLimits

0x73e0,	// (0x000b1975) list_medium_line_x4_t4_g7_g4

0x73ec,	// (0x000b1981) list_medium_line_x4_t4_g7_g5_ParamLimits

0x73ec,	// (0x000b1981) list_medium_line_x4_t4_g7_g5

0x73fb,	// (0x000b1990) list_medium_line_x4_t4_g7_g6_ParamLimits

0x73fb,	// (0x000b1990) list_medium_line_x4_t4_g7_g6

0x740a,	// (0x000b199f) list_medium_line_x4_t4_g7_g7_ParamLimits

0x740a,	// (0x000b199f) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbd0,	// (0x000ba165) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbd0,	// (0x000ba165) list_medium_line_x4_t4_g7_g

0x7416,	// (0x000b19ab) list_medium_line_x4_t4_g7_t1_ParamLimits

0x7416,	// (0x000b19ab) list_medium_line_x4_t4_g7_t1

0x742b,	// (0x000b19c0) list_medium_line_x4_t4_g7_t2_ParamLimits

0x742b,	// (0x000b19c0) list_medium_line_x4_t4_g7_t2

0x7440,	// (0x000b19d5) list_medium_line_x4_t4_g7_t3_ParamLimits

0x7440,	// (0x000b19d5) list_medium_line_x4_t4_g7_t3

0x7455,	// (0x000b19ea) list_medium_line_x4_t4_g7_t4_ParamLimits

0x7455,	// (0x000b19ea) list_medium_line_x4_t4_g7_t4

0x7467,	// (0x000b19fc) list_medium_line_x4_t4_g7_t5_ParamLimits

0x7467,	// (0x000b19fc) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbdf,	// (0x000ba174) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbdf,	// (0x000ba174) list_medium_line_x4_t4_g7_t

0x7479,	// (0x000b1a0e) list_single_dyc_row_pane_ParamLimits

0x7479,	// (0x000b1a0e) list_single_dyc_row_pane

0x7b5c,	// (0x000b20f1) call5_gesture_pane_ParamLimits

0x7b5c,	// (0x000b20f1) call5_gesture_pane

0x7bb2,	// (0x000b2147) call5_windows_pane_ParamLimits

0x7bb2,	// (0x000b2147) call5_windows_pane

0x7c5d,	// (0x000b21f2) call5_swipe_1_pane_cp_ParamLimits

0x7c5d,	// (0x000b21f2) call5_swipe_1_pane_cp

0x7c69,	// (0x000b21fe) call5_swipe_2_pane_cp_ParamLimits

0x7c69,	// (0x000b21fe) call5_swipe_2_pane_cp

0xa3cd,	// (0x000b4962) call5_image_pane_cp

0x7c75,	// (0x000b220a) popup_call5_audio_first_window_cp_ParamLimits

0x7c75,	// (0x000b220a) popup_call5_audio_first_window_cp

0xe5fd,	// (0x000b8b92) call5_swipe_1_pane_g1_cp_ParamLimits

0xe5fd,	// (0x000b8b92) call5_swipe_1_pane_g1_cp

0xe63d,	// (0x000b8bd2) call5_swipe_1_pane_g2_cp

0xe616,	// (0x000b8bab) call5_swipe_1_pane_t1_cp_ParamLimits

0xe616,	// (0x000b8bab) call5_swipe_1_pane_t1_cp

0xe5fd,	// (0x000b8b92) call5_swipe_2_pane_g1_cp_ParamLimits

0xe5fd,	// (0x000b8b92) call5_swipe_2_pane_g1_cp

0xe645,	// (0x000b8bda) call5_swipe_2_pane_g2_cp

0xe64d,	// (0x000b8be2) call5_swipe_2_pane_t1_cp_ParamLimits

0xe64d,	// (0x000b8be2) call5_swipe_2_pane_t1_cp

0xa55d,	// (0x000b4af2) main_sp_fs_email_pane

0xe662,	// (0x000b8bf7) main_sp_fs_listscroll_pane_te

0xb5e4,	// (0x000b5b79) popup_sp_fs_action_menu_pane_ParamLimits

0xb5e4,	// (0x000b5b79) popup_sp_fs_action_menu_pane

0xcbc4,	// (0x000b7159) bg_sp_fs_ctrlbar_pane_g1

0xe66b,	// (0x000b8c00) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe674,	// (0x000b8c09) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe67d,	// (0x000b8c12) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xcbc4,	// (0x000b7159) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfccd,	// (0x000ba262) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc9a7,	// (0x000b6f3c) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc9a7,	// (0x000b6f3c) bg_sp_fs_ctrlbar_ddmenu_pane

0xe686,	// (0x000b8c1b) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe686,	// (0x000b8c1b) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe692,	// (0x000b8c27) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe692,	// (0x000b8c27) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcd6,	// (0x000ba26b) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcd6,	// (0x000ba26b) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe69e,	// (0x000b8c33) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe69e,	// (0x000b8c33) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x7c83,	// (0x000b2218) list_medium_line_t2_right_icon_g1

0x7c8b,	// (0x000b2220) list_medium_line_t2_right_icon_t1

0x7c9b,	// (0x000b2230) list_medium_line_t2_right_icon_t2

0x0001,

0xfcdb,	// (0x000ba270) list_medium_line_t2_right_icon_t

0xc7ba,	// (0x000b6d4f) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc7ba,	// (0x000b6d4f) bg_sp_fs_ctrlbar_pane

0x7cf5,	// (0x000b228a) main_sp_fs_ctrlbar_button_pane_cp01

0x7cff,	// (0x000b2294) main_sp_fs_ctrlbar_ddmenu_pane

0xe6f0,	// (0x000b8c85) main_sp_fs_ctrlbar_pane_g1

0xe6fc,	// (0x000b8c91) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfce0,	// (0x000ba275) main_sp_fs_ctrlbar_pane_g

0xe708,	// (0x000b8c9d) main_sp_fs_ctrlbar_pane_t1

0x7d09,	// (0x000b229e) main_sp_fs_ctrlbar_pane

0x7d2d,	// (0x000b22c2) main_sp_fs_listscroll_pane_te_cp01

0x7d4d,	// (0x000b22e2) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x7d4d,	// (0x000b22e2) popup_sp_fs_action_menu_pane_cp01

0xa55d,	// (0x000b4af2) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xa55d,	// (0x000b4af2) bg_sp_fs_highlight_list_pane_cp01

0xa6d5,	// (0x000b4c6a) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xa6d5,	// (0x000b4c6a) sp_fs_action_menu_list_gene_pane_g1

0xe738,	// (0x000b8ccd) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe738,	// (0x000b8ccd) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcea,	// (0x000ba27f) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcea,	// (0x000ba27f) sp_fs_action_menu_list_gene_pane_g

0xa6e4,	// (0x000b4c79) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xa6e4,	// (0x000b4c79) sp_fs_action_menu_list_gene_pane_t1

0xa6fc,	// (0x000b4c91) sp_fs_action_menu_list_gene_pane_ParamLimits

0xa6fc,	// (0x000b4c91) sp_fs_action_menu_list_gene_pane

0xe745,	// (0x000b8cda) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe745,	// (0x000b8cda) popup_sp_fs_action_menu_bg_pane

0xa71b,	// (0x000b4cb0) sp_fs_action_menu_list_pane_ParamLimits

0xa71b,	// (0x000b4cb0) sp_fs_action_menu_list_pane

0xa73b,	// (0x000b4cd0) sp_fs_scroll_pane_cp01_ParamLimits

0xa73b,	// (0x000b4cd0) sp_fs_scroll_pane_cp01

0x7d7d,	// (0x000b2312) list_medium_line_plain_t2_t1

0x7d8d,	// (0x000b2322) list_medium_line_plain_t2_t2

0x0001,

0xfcef,	// (0x000ba284) list_medium_line_plain_t2_t

0x7d9d,	// (0x000b2332) list_medium_line_plain_t3_t1

0x7dad,	// (0x000b2342) list_medium_line_plain_t3_t2

0x7dbb,	// (0x000b2350) list_medium_line_plain_t3_t3

0x0002,

0xfcf4,	// (0x000ba289) list_medium_line_plain_t3_t

0x11e6,	// (0x000ab77b) list_medium_line_x2_t2_g2_g1_ParamLimits

0x11e6,	// (0x000ab77b) list_medium_line_x2_t2_g2_g1

0x11fe,	// (0x000ab793) list_medium_line_x2_t2_g2_g2_ParamLimits

0x11fe,	// (0x000ab793) list_medium_line_x2_t2_g2_g2

0x0001,

0xf246,	// (0x000b97db) list_medium_line_x2_t2_g2_g_ParamLimits

0xf246,	// (0x000b97db) list_medium_line_x2_t2_g2_g

0x24be,	// (0x000aca53) list_medium_line_x2_t2_g2_t1_ParamLimits

0x24be,	// (0x000aca53) list_medium_line_x2_t2_g2_t1

0x1233,	// (0x000ab7c8) list_medium_line_x2_t2_g2_t2_ParamLimits

0x1233,	// (0x000ab7c8) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcfb,	// (0x000ba290) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcfb,	// (0x000ba290) list_medium_line_x2_t2_g2_t

0x11e6,	// (0x000ab77b) list_medium_line_x2_t4_g2_g1_ParamLimits

0x11e6,	// (0x000ab77b) list_medium_line_x2_t4_g2_g1

0x7dc9,	// (0x000b235e) list_medium_line_x2_t4_g2_g2_ParamLimits

0x7dc9,	// (0x000b235e) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd00,	// (0x000ba295) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd00,	// (0x000ba295) list_medium_line_x2_t4_g2_g

0x7ddb,	// (0x000b2370) list_medium_line_x2_t4_g2_t1_ParamLimits

0x7ddb,	// (0x000b2370) list_medium_line_x2_t4_g2_t1

0x7df5,	// (0x000b238a) list_medium_line_x2_t4_g2_t2_ParamLimits

0x7df5,	// (0x000b238a) list_medium_line_x2_t4_g2_t2

0x7e0a,	// (0x000b239f) list_medium_line_x2_t4_g2_t3_ParamLimits

0x7e0a,	// (0x000b239f) list_medium_line_x2_t4_g2_t3

0x1233,	// (0x000ab7c8) list_medium_line_x2_t4_g2_t4_ParamLimits

0x1233,	// (0x000ab7c8) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd05,	// (0x000ba29a) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd05,	// (0x000ba29a) list_medium_line_x2_t4_g2_t

0x7e1f,	// (0x000b23b4) list_medium_line_t3_right_iconx2_g1

0x7c83,	// (0x000b2218) list_medium_line_t3_right_iconx2_g2

0x7e27,	// (0x000b23bc) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd0e,	// (0x000ba2a3) list_medium_line_t3_right_iconx2_g

0x7e31,	// (0x000b23c6) list_medium_line_t3_right_iconx2_t1

0x7e41,	// (0x000b23d6) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd15,	// (0x000ba2aa) list_medium_line_t3_right_iconx2_t

0x11e6,	// (0x000ab77b) list_medium_line_x3_t4_g4_g1_ParamLimits

0x11e6,	// (0x000ab77b) list_medium_line_x3_t4_g4_g1

0x11f2,	// (0x000ab787) list_medium_line_x3_t4_g4_g2_ParamLimits

0x11f2,	// (0x000ab787) list_medium_line_x3_t4_g4_g2

0x1299,	// (0x000ab82e) list_medium_line_x3_t4_g4_g3_ParamLimits

0x1299,	// (0x000ab82e) list_medium_line_x3_t4_g4_g3

0x7e4f,	// (0x000b23e4) list_medium_line_x3_t4_g4_g4_ParamLimits

0x7e4f,	// (0x000b23e4) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd1a,	// (0x000ba2af) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd1a,	// (0x000ba2af) list_medium_line_x3_t4_g4_g

0x7e5b,	// (0x000b23f0) list_medium_line_x3_t4_g4_t1_ParamLimits

0x7e5b,	// (0x000b23f0) list_medium_line_x3_t4_g4_t1

0x7e72,	// (0x000b2407) list_medium_line_x3_t4_g4_t2_ParamLimits

0x7e72,	// (0x000b2407) list_medium_line_x3_t4_g4_t2

0x24d3,	// (0x000aca68) list_medium_line_x3_t4_g4_t3_ParamLimits

0x24d3,	// (0x000aca68) list_medium_line_x3_t4_g4_t3

0x7e8d,	// (0x000b2422) list_medium_line_x3_t4_g4_t4_ParamLimits

0x7e8d,	// (0x000b2422) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd23,	// (0x000ba2b8) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd23,	// (0x000ba2b8) list_medium_line_x3_t4_g4_t

0x7eaa,	// (0x000b243f) list_single_dyc_row_text_pane_t1_ParamLimits

0x7eaa,	// (0x000b243f) list_single_dyc_row_text_pane_t1

0x7ef3,	// (0x000b2488) list_single_dyc_row_text_pane_t2_ParamLimits

0x7ef3,	// (0x000b2488) list_single_dyc_row_text_pane_t2

0xa761,	// (0x000b4cf6) list_single_dyc_row_text_pane_t3_ParamLimits

0xa761,	// (0x000b4cf6) list_single_dyc_row_text_pane_t3

0x0005,

0xfd2c,	// (0x000ba2c1) list_single_dyc_row_text_pane_t_ParamLimits

0xfd2c,	// (0x000ba2c1) list_single_dyc_row_text_pane_t

0xa785,	// (0x000b4d1a) list_single_dyc_row_pane_g1_ParamLimits

0xa785,	// (0x000b4d1a) list_single_dyc_row_pane_g1

0xa791,	// (0x000b4d26) list_single_dyc_row_pane_g2_ParamLimits

0xa791,	// (0x000b4d26) list_single_dyc_row_pane_g2

0xa79d,	// (0x000b4d32) list_single_dyc_row_pane_g3_ParamLimits

0xa79d,	// (0x000b4d32) list_single_dyc_row_pane_g3

0xa7a9,	// (0x000b4d3e) list_single_dyc_row_pane_g4_ParamLimits

0xa7a9,	// (0x000b4d3e) list_single_dyc_row_pane_g4

0x0003,

0xfd39,	// (0x000ba2ce) list_single_dyc_row_pane_g_ParamLimits

0xfd39,	// (0x000ba2ce) list_single_dyc_row_pane_g

0xa7b5,	// (0x000b4d4a) list_single_dyc_row_text_pane_ParamLimits

0xa7b5,	// (0x000b4d4a) list_single_dyc_row_text_pane

0x92ff,	// (0x000b3894) bg_sp_fs_scroll_pane

0xe753,	// (0x000b8ce8) thumb_sp_fs_scroll_pane

0x6581,	// (0x000b0b16) list_medium_line_g1_ParamLimits

0x6581,	// (0x000b0b16) list_medium_line_g1

0x8028,	// (0x000b25bd) list_medium_line_t1_ParamLimits

0x8028,	// (0x000b25bd) list_medium_line_t1

0x11e6,	// (0x000ab77b) list_medium_line_x2_g1_ParamLimits

0x11e6,	// (0x000ab77b) list_medium_line_x2_g1

0x11f2,	// (0x000ab787) list_medium_line_x2_g2_ParamLimits

0x11f2,	// (0x000ab787) list_medium_line_x2_g2

0x0001,

0xfd42,	// (0x000ba2d7) list_medium_line_x2_g_ParamLimits

0xfd42,	// (0x000ba2d7) list_medium_line_x2_g

0xa7d4,	// (0x000b4d69) list_medium_line_x2_t1_ParamLimits

0xa7d4,	// (0x000b4d69) list_medium_line_x2_t1

0x11e6,	// (0x000ab77b) list_medium_line_x3_g1_ParamLimits

0x11e6,	// (0x000ab77b) list_medium_line_x3_g1

0x11f2,	// (0x000ab787) list_medium_line_x3_g2_ParamLimits

0x11f2,	// (0x000ab787) list_medium_line_x3_g2

0x0001,

0xfd42,	// (0x000ba2d7) list_medium_line_x3_g_ParamLimits

0xfd42,	// (0x000ba2d7) list_medium_line_x3_g

0xa7d4,	// (0x000b4d69) list_medium_line_x3_t1_ParamLimits

0xa7d4,	// (0x000b4d69) list_medium_line_x3_t1

0xe75c,	// (0x000b8cf1) thumb_sp_fs_scroll_pane_g1

0xe765,	// (0x000b8cfa) thumb_sp_fs_scroll_pane_g2

0xe76e,	// (0x000b8d03) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x000ba2dc) thumb_sp_fs_scroll_pane_g

0xe75c,	// (0x000b8cf1) bg_sp_fs_scroll_pane_g1

0xe765,	// (0x000b8cfa) bg_sp_fs_scroll_pane_g2

0xe76e,	// (0x000b8d03) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x000ba2dc) bg_sp_fs_scroll_pane_g

0x11e6,	// (0x000ab77b) list_medium_line_x2_t3_g4_g1_ParamLimits

0x11e6,	// (0x000ab77b) list_medium_line_x2_t3_g4_g1

0x128d,	// (0x000ab822) list_medium_line_x2_t3_g4_g2_ParamLimits

0x128d,	// (0x000ab822) list_medium_line_x2_t3_g4_g2

0x11f2,	// (0x000ab787) list_medium_line_x2_t3_g4_g3_ParamLimits

0x11f2,	// (0x000ab787) list_medium_line_x2_t3_g4_g3

0x11fe,	// (0x000ab793) list_medium_line_x2_t3_g4_g4_ParamLimits

0x11fe,	// (0x000ab793) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c2,	// (0x000b9857) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c2,	// (0x000b9857) list_medium_line_x2_t3_g4_g

0x803d,	// (0x000b25d2) list_medium_line_x2_t3_g4_t1_ParamLimits

0x803d,	// (0x000b25d2) list_medium_line_x2_t3_g4_t1

0x8057,	// (0x000b25ec) list_medium_line_x2_t3_g4_t2_ParamLimits

0x8057,	// (0x000b25ec) list_medium_line_x2_t3_g4_t2

0x1233,	// (0x000ab7c8) list_medium_line_x2_t3_g4_t3_ParamLimits

0x1233,	// (0x000ab7c8) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd4e,	// (0x000ba2e3) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd4e,	// (0x000ba2e3) list_medium_line_x2_t3_g4_t

0x6581,	// (0x000b0b16) list_medium_line_g2_g1_ParamLimits

0x6581,	// (0x000b0b16) list_medium_line_g2_g1

0x658d,	// (0x000b0b22) list_medium_line_g2_g2_ParamLimits

0x658d,	// (0x000b0b22) list_medium_line_g2_g2

0x0001,

0xfa00,	// (0x000b9f95) list_medium_line_g2_g_ParamLimits

0xfa00,	// (0x000b9f95) list_medium_line_g2_g

0x8070,	// (0x000b2605) list_medium_line_g2_t1_ParamLimits

0x8070,	// (0x000b2605) list_medium_line_g2_t1

0x6581,	// (0x000b0b16) list_medium_line_t3_g2_g1_ParamLimits

0x6581,	// (0x000b0b16) list_medium_line_t3_g2_g1

0x658d,	// (0x000b0b22) list_medium_line_t3_g2_g2_ParamLimits

0x658d,	// (0x000b0b22) list_medium_line_t3_g2_g2

0x0001,

0xfa00,	// (0x000b9f95) list_medium_line_t3_g2_g_ParamLimits

0xfa00,	// (0x000b9f95) list_medium_line_t3_g2_g

0x8085,	// (0x000b261a) list_medium_line_t3_g2_t1_ParamLimits

0x8085,	// (0x000b261a) list_medium_line_t3_g2_t1

0x809c,	// (0x000b2631) list_medium_line_t3_g2_t2_ParamLimits

0x809c,	// (0x000b2631) list_medium_line_t3_g2_t2

0x80b1,	// (0x000b2646) list_medium_line_t3_g2_t3_ParamLimits

0x80b1,	// (0x000b2646) list_medium_line_t3_g2_t3

0x0002,

0xfd55,	// (0x000ba2ea) list_medium_line_t3_g2_t_ParamLimits

0xfd55,	// (0x000ba2ea) list_medium_line_t3_g2_t

0x7c83,	// (0x000b2218) list_medium_line_right_icon_g1

0x80ca,	// (0x000b265f) list_medium_line_right_icon_t1

0x6581,	// (0x000b0b16) list_medium_line_t2_g1_ParamLimits

0x6581,	// (0x000b0b16) list_medium_line_t2_g1

0x80d8,	// (0x000b266d) list_medium_line_t2_t1_ParamLimits

0x80d8,	// (0x000b266d) list_medium_line_t2_t1

0x80f2,	// (0x000b2687) list_medium_line_t2_t2_ParamLimits

0x80f2,	// (0x000b2687) list_medium_line_t2_t2

0x0001,

0xfd5c,	// (0x000ba2f1) list_medium_line_t2_t_ParamLimits

0xfd5c,	// (0x000ba2f1) list_medium_line_t2_t

0x6581,	// (0x000b0b16) list_medium_line_t3_g1_ParamLimits

0x6581,	// (0x000b0b16) list_medium_line_t3_g1

0x810b,	// (0x000b26a0) list_medium_line_t3_t1_ParamLimits

0x810b,	// (0x000b26a0) list_medium_line_t3_t1

0x8122,	// (0x000b26b7) list_medium_line_t3_t2_ParamLimits

0x8122,	// (0x000b26b7) list_medium_line_t3_t2

0x8137,	// (0x000b26cc) list_medium_line_t3_t3_ParamLimits

0x8137,	// (0x000b26cc) list_medium_line_t3_t3

0x0002,

0xfd61,	// (0x000ba2f6) list_medium_line_t3_t_ParamLimits

0xfd61,	// (0x000ba2f6) list_medium_line_t3_t

0x6581,	// (0x000b0b16) list_medium_line_g3_g1_ParamLimits

0x6581,	// (0x000b0b16) list_medium_line_g3_g1

0x8149,	// (0x000b26de) list_medium_line_g3_g2_ParamLimits

0x8149,	// (0x000b26de) list_medium_line_g3_g2

0x658d,	// (0x000b0b22) list_medium_line_g3_g3_ParamLimits

0x658d,	// (0x000b0b22) list_medium_line_g3_g3

0x0002,

0xfd68,	// (0x000ba2fd) list_medium_line_g3_g_ParamLimits

0xfd68,	// (0x000ba2fd) list_medium_line_g3_g

0x8155,	// (0x000b26ea) list_medium_line_g3_t1_ParamLimits

0x8155,	// (0x000b26ea) list_medium_line_g3_t1

0x6581,	// (0x000b0b16) list_medium_line_t2_g3_g1_ParamLimits

0x6581,	// (0x000b0b16) list_medium_line_t2_g3_g1

0x8149,	// (0x000b26de) list_medium_line_t2_g3_g2_ParamLimits

0x8149,	// (0x000b26de) list_medium_line_t2_g3_g2

0x658d,	// (0x000b0b22) list_medium_line_t2_g3_g3_ParamLimits

0x658d,	// (0x000b0b22) list_medium_line_t2_g3_g3

0x0002,

0xfd68,	// (0x000ba2fd) list_medium_line_t2_g3_g_ParamLimits

0xfd68,	// (0x000ba2fd) list_medium_line_t2_g3_g

0x816a,	// (0x000b26ff) list_medium_line_t2_g3_t1_ParamLimits

0x816a,	// (0x000b26ff) list_medium_line_t2_g3_t1

0x8184,	// (0x000b2719) list_medium_line_t2_g3_t2_ParamLimits

0x8184,	// (0x000b2719) list_medium_line_t2_g3_t2

0x0001,

0xfd6f,	// (0x000ba304) list_medium_line_t2_g3_t_ParamLimits

0xfd6f,	// (0x000ba304) list_medium_line_t2_g3_t

0x6581,	// (0x000b0b16) list_medium_line_t3_g3_g1_ParamLimits

0x6581,	// (0x000b0b16) list_medium_line_t3_g3_g1

0x8149,	// (0x000b26de) list_medium_line_t3_g3_g2_ParamLimits

0x8149,	// (0x000b26de) list_medium_line_t3_g3_g2

0x658d,	// (0x000b0b22) list_medium_line_t3_g3_g3_ParamLimits

0x658d,	// (0x000b0b22) list_medium_line_t3_g3_g3

0x0002,

0xfd68,	// (0x000ba2fd) list_medium_line_t3_g3_g_ParamLimits

0xfd68,	// (0x000ba2fd) list_medium_line_t3_g3_g

0x819f,	// (0x000b2734) list_medium_line_t3_g3_t1_ParamLimits

0x819f,	// (0x000b2734) list_medium_line_t3_g3_t1

0x81b3,	// (0x000b2748) list_medium_line_t3_g3_t2_ParamLimits

0x81b3,	// (0x000b2748) list_medium_line_t3_g3_t2

0x81c5,	// (0x000b275a) list_medium_line_t3_g3_t3_ParamLimits

0x81c5,	// (0x000b275a) list_medium_line_t3_g3_t3

0x0002,

0xfd74,	// (0x000ba309) list_medium_line_t3_g3_t_ParamLimits

0xfd74,	// (0x000ba309) list_medium_line_t3_g3_t

0x7e1f,	// (0x000b23b4) list_medium_line_right_iconx2_g1

0x7c83,	// (0x000b2218) list_medium_line_right_iconx2_g2

0x0001,

0xfd7b,	// (0x000ba310) list_medium_line_right_iconx2_g

0x81d9,	// (0x000b276e) list_medium_line_right_iconx2_t1

0x7e1f,	// (0x000b23b4) list_medium_line_t2_right_iconx2_g1

0x7c83,	// (0x000b2218) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd7b,	// (0x000ba310) list_medium_line_t2_right_iconx2_g

0x81e7,	// (0x000b277c) list_medium_line_t2_right_iconx2_t1

0x81f7,	// (0x000b278c) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd80,	// (0x000ba315) list_medium_line_t2_right_iconx2_t

0x8209,	// (0x000b279e) list_medium_line_x4_t4_t1

0x8217,	// (0x000b27ac) list_medium_line_x4_t4_t2

0x8227,	// (0x000b27bc) list_medium_line_x4_t4_t3

0x8237,	// (0x000b27cc) list_medium_line_x4_t4_t4

0x0003,

0xfd85,	// (0x000ba31a) list_medium_line_x4_t4_t

0x828a,	// (0x000b281f) tport_appsw_pane_ParamLimits

0x828a,	// (0x000b281f) tport_appsw_pane

0x82a2,	// (0x000b2837) tport_contact_pane_ParamLimits

0x82a2,	// (0x000b2837) tport_contact_pane

0x82ba,	// (0x000b284f) tport_listscroll_pane_ParamLimits

0x82ba,	// (0x000b284f) tport_listscroll_pane

0x82d4,	// (0x000b2869) cell_tport_appsw_pane_ParamLimits

0x82d4,	// (0x000b2869) cell_tport_appsw_pane

0xd619,	// (0x000b7bae) tport_appsw_pane_g1_ParamLimits

0xd619,	// (0x000b7bae) tport_appsw_pane_g1

0xe777,	// (0x000b8d0c) tport_contact_pane_g1

0xe0e1,	// (0x000b8676) tport_contact_pane_t1

0xe780,	// (0x000b8d15) tport_contact_pane_t2

0x0001,

0xfd8e,	// (0x000ba323) tport_contact_pane_t

0xe78e,	// (0x000b8d23) list_tport_pane

0xe797,	// (0x000b8d2c) scroll_pane_cp_030

0x831c,	// (0x000b28b1) cell_tport_appsw_pane_g1

0x832c,	// (0x000b28c1) cell_tport_appsw_pane_t1

0x833a,	// (0x000b28cf) grid_highlight_pane_cp019

0x8342,	// (0x000b28d7) list_tport_double_graphic_pane_ParamLimits

0x8342,	// (0x000b28d7) list_tport_double_graphic_pane

0xa55d,	// (0x000b4af2) list_highlight_pane_cp023_ParamLimits

0xa55d,	// (0x000b4af2) list_highlight_pane_cp023

0x834f,	// (0x000b28e4) list_tport_double_graphic_pane_g1_ParamLimits

0x834f,	// (0x000b28e4) list_tport_double_graphic_pane_g1

0x835c,	// (0x000b28f1) list_tport_double_graphic_pane_t1_ParamLimits

0x835c,	// (0x000b28f1) list_tport_double_graphic_pane_t1

0x8371,	// (0x000b2906) list_tport_double_graphic_pane_t2_ParamLimits

0x8371,	// (0x000b2906) list_tport_double_graphic_pane_t2

0x0001,

0xfd9a,	// (0x000ba32f) list_tport_double_graphic_pane_t_ParamLimits

0xfd9a,	// (0x000ba32f) list_tport_double_graphic_pane_t

0x92ff,	// (0x000b3894) main_cale_note_pane

0x5d2f,	// (0x000b02c4) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x5d2f,	// (0x000b02c4) cell_vitu2_function_top_wide_pane_cp01

0x77f8,	// (0x000b1d8d) wait_bar_pane_cp05_ParamLimits

0xa55d,	// (0x000b4af2) listscroll_cmail_pane

0xe7a0,	// (0x000b8d35) list_cmail_pane

0x8383,	// (0x000b2918) list_cmail_body_pane

0x8398,	// (0x000b292d) list_single_cmail_header_caption_pane

0x83b1,	// (0x000b2946) list_single_cmail_header_detail_pane_ParamLimits

0x83b1,	// (0x000b2946) list_single_cmail_header_detail_pane

0xe7b0,	// (0x000b8d45) list_single_cmail_header_caption_pane_t1

0x83da,	// (0x000b296f) list_single_cmail_header_detail_pane_g1_ParamLimits

0x83da,	// (0x000b296f) list_single_cmail_header_detail_pane_g1

0xa7ea,	// (0x000b4d7f) list_single_cmail_header_detail_pane_g2_ParamLimits

0xa7ea,	// (0x000b4d7f) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd9f,	// (0x000ba334) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd9f,	// (0x000ba334) list_single_cmail_header_detail_pane_g

0xa7f6,	// (0x000b4d8b) list_single_cmail_header_detail_pane_t1_ParamLimits

0xa7f6,	// (0x000b4d8b) list_single_cmail_header_detail_pane_t1

0xa856,	// (0x000b4deb) list_single_cmail_header_editor_pane_bg_ParamLimits

0xa856,	// (0x000b4deb) list_single_cmail_header_editor_pane_bg

0xe7d4,	// (0x000b8d69) list_cmail_body_pane_g1

0xe7dd,	// (0x000b8d72) list_cmail_body_pane_t1

0xd639,	// (0x000b7bce) list_single_cmail_header_editor_pane_bg_g1

0xab2f,	// (0x000b50c4) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd649,	// (0x000b7bde) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd641,	// (0x000b7bd6) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd85d,	// (0x000b7df2) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd669,	// (0x000b7bfe) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd659,	// (0x000b7bee) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd661,	// (0x000b7bf6) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xab0f,	// (0x000b50a4) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x83f2,	// (0x000b2987) calenote_gesture_pane_ParamLimits

0x83f2,	// (0x000b2987) calenote_gesture_pane

0x8412,	// (0x000b29a7) calenote_window_pane_ParamLimits

0x8412,	// (0x000b29a7) calenote_window_pane

0xe7eb,	// (0x000b8d80) popup_note_window_cp01

0x842e,	// (0x000b29c3) calenote_swipe_1_pane_ParamLimits

0x842e,	// (0x000b29c3) calenote_swipe_1_pane

0x7c69,	// (0x000b21fe) calenote_swipe_2_pane_ParamLimits

0x7c69,	// (0x000b21fe) calenote_swipe_2_pane

0xe5fd,	// (0x000b8b92) calenote_swipe_1_pane_g1_ParamLimits

0xe5fd,	// (0x000b8b92) calenote_swipe_1_pane_g1

0xe60a,	// (0x000b8b9f) calenote_swipe_1_pane_g2_ParamLimits

0xe60a,	// (0x000b8b9f) calenote_swipe_1_pane_g2

0x0001,

0xfcc3,	// (0x000ba258) calenote_swipe_1_pane_g_ParamLimits

0xfcc3,	// (0x000ba258) calenote_swipe_1_pane_g

0xe7fd,	// (0x000b8d92) calenote_swipe_1_pane_t1_ParamLimits

0xe7fd,	// (0x000b8d92) calenote_swipe_1_pane_t1

0xe5fd,	// (0x000b8b92) calenote_swipe_2_pane_g1_ParamLimits

0xe5fd,	// (0x000b8b92) calenote_swipe_2_pane_g1

0xe81c,	// (0x000b8db1) calenote_swipe_2_pane_g2_ParamLimits

0xe81c,	// (0x000b8db1) calenote_swipe_2_pane_g2

0x0001,

0xfdab,	// (0x000ba340) calenote_swipe_2_pane_g_ParamLimits

0xfdab,	// (0x000ba340) calenote_swipe_2_pane_g

0xe828,	// (0x000b8dbd) calenote_swipe_2_pane_t1_ParamLimits

0xe828,	// (0x000b8dbd) calenote_swipe_2_pane_t1

0x92ff,	// (0x000b3894) main_mup_navstr_pane

0x49e7,	// (0x000aef7c) main_mup3_pane_t7_ParamLimits

0x49e7,	// (0x000aef7c) main_mup3_pane_t7

0x9add,	// (0x000b4072) main_mp4_pane_g6_ParamLimits

0x9add,	// (0x000b4072) main_mp4_pane_g6

0x9c81,	// (0x000b4216) main_image3_pane_t4_ParamLimits

0x9c81,	// (0x000b4216) main_image3_pane_t4

0x8443,	// (0x000b29d8) popup_navstr_preview_pane_ParamLimits

0x8443,	// (0x000b29d8) popup_navstr_preview_pane

0x8457,	// (0x000b29ec) scroll_navstr_pane_ParamLimits

0x8457,	// (0x000b29ec) scroll_navstr_pane

0x92ff,	// (0x000b3894) bg_popup_preview_window_pane_cp04

0xe84f,	// (0x000b8de4) popup_navstr_preview_pane_t1

0x846b,	// (0x000b2a00) scroll_navstr_pane_g1_ParamLimits

0x846b,	// (0x000b2a00) scroll_navstr_pane_g1

0x847f,	// (0x000b2a14) scroll_navstr_pane_t1_ParamLimits

0x847f,	// (0x000b2a14) scroll_navstr_pane_t1

0xe7f4,	// (0x000b8d89) bg_button_pane_cp014

0xe7f4,	// (0x000b8d89) bg_button_pane_cp030

0x7b02,	// (0x000b2097) list_double_fisheye_pane_g4_ParamLimits

0x7b02,	// (0x000b2097) list_double_fisheye_pane_g4

0x7b0e,	// (0x000b20a3) list_double_fisheye_pane_g5_ParamLimits

0x7b0e,	// (0x000b20a3) list_double_fisheye_pane_g5

0xc1eb,	// (0x000b6780) sp_fs_scroll_pane_cp03

0xe6f0,	// (0x000b8c85) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe6fc,	// (0x000b8c91) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfce0,	// (0x000ba275) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe708,	// (0x000b8c9d) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe7a8,	// (0x000b8d3d) sp_fs_scroll_pane_cp02

0xa315,	// (0x000b48aa) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa315,	// (0x000b48aa) popup_sp_fs_calendar_preview_list_single_pane

0x92ff,	// (0x000b3894) main_cam6_pano_pane

0x9367,	// (0x000b38fc) main_mup3_pane_ParamLimits

0x92ff,	// (0x000b3894) main_phacti_pane

0x76cb,	// (0x000b1c60) bg_button_pane_cp11

0x76e5,	// (0x000b1c7a) main_mobtv_info_pane_g2_ParamLimits

0x76e5,	// (0x000b1c7a) main_mobtv_info_pane_g2

0x0001,

0xfc40,	// (0x000ba1d5) main_mobtv_info_pane_g_ParamLimits

0xfc40,	// (0x000ba1d5) main_mobtv_info_pane_g

0x78c2,	// (0x000b1e57) sc_clock_pane_t5_ParamLimits

0x78c2,	// (0x000b1e57) sc_clock_pane_t5

0x797d,	// (0x000b1f12) main_radioblah_pane_g1_ParamLimits

0xe52e,	// (0x000b8ac3) main_radioblah_pane_t3_ParamLimits

0xe52e,	// (0x000b8ac3) main_radioblah_pane_t3

0xe546,	// (0x000b8adb) main_radioblah_pane_t4_ParamLimits

0xe546,	// (0x000b8adb) main_radioblah_pane_t4

0x79a5,	// (0x000b1f3a) main_radioblah_text_pane_ParamLimits

0x79a5,	// (0x000b1f3a) main_radioblah_text_pane

0x79b7,	// (0x000b1f4c) main_radioblah_info_pane_g1_ParamLimits

0x7a50,	// (0x000b1fe5) main_radioblah_info_pane_t4_ParamLimits

0x7a50,	// (0x000b1fe5) main_radioblah_info_pane_t4

0xa55d,	// (0x000b4af2) main_sp_fs_calendar_pane

0x8495,	// (0x000b2a2a) main_phacti_pane_g1

0x849d,	// (0x000b2a32) phacti_note_pane_ParamLimits

0x849d,	// (0x000b2a32) phacti_note_pane

0xe866,	// (0x000b8dfb) phacti_term_pane_ParamLimits

0xe866,	// (0x000b8dfb) phacti_term_pane

0xe87b,	// (0x000b8e10) phacti_note_pane_t1_ParamLimits

0xe87b,	// (0x000b8e10) phacti_note_pane_t1

0xa86d,	// (0x000b4e02) phacti_term_pane_g1

0xa875,	// (0x000b4e0a) phacti_term_pane_t1_ParamLimits

0xa875,	// (0x000b4e0a) phacti_term_pane_t1

0xe892,	// (0x000b8e27) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe89a,	// (0x000b8e2f) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdb5,	// (0x000ba34a) popup_sp_fs_calendar_preview_list_single_pane_g

0xe8a2,	// (0x000b8e37) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe8a2,	// (0x000b8e37) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe8b8,	// (0x000b8e4d) aid_popup_sp_fs_bg_corner_pane

0xcbc4,	// (0x000b7159) popup_sp_fs_calendar_preview_bg_pane_g1

0x92ff,	// (0x000b3894) popup_sp_fs_calendar_preview_bg_pane

0x106f,	// (0x000ab604) popup_sp_fs_calendar_preview_list_pane

0xc7ba,	// (0x000b6d4f) bg_main_sp_fs_cale_pane_ParamLimits

0xc7ba,	// (0x000b6d4f) bg_main_sp_fs_cale_pane

0xa8a8,	// (0x000b4e3d) listscroll_cale_mrui_pane_ParamLimits

0xa8a8,	// (0x000b4e3d) listscroll_cale_mrui_pane

0xa8bd,	// (0x000b4e52) listscroll_sp_fs_schedule_track_pane

0xa8c6,	// (0x000b4e5b) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xa8c6,	// (0x000b4e5b) main_sp_fs_ctrlbar_pane_cp01

0xe8c0,	// (0x000b8e55) main_sp_fs_ribbon_pane

0xa8d9,	// (0x000b4e6e) popup_sp_fs_cale_preview_window

0x8512,	// (0x000b2aa7) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8512,	// (0x000b2aa7) list_single_sp_fs_schedule_track_pane

0xa55d,	// (0x000b4af2) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xa55d,	// (0x000b4af2) bg_sp_fs_highlight_list_pane_cp03

0x8528,	// (0x000b2abd) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8528,	// (0x000b2abd) list_single_sp_fs_schedule_track_pane_g1

0x8534,	// (0x000b2ac9) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8534,	// (0x000b2ac9) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdba,	// (0x000ba34f) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdba,	// (0x000ba34f) list_single_sp_fs_schedule_track_pane_g

0x8540,	// (0x000b2ad5) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8540,	// (0x000b2ad5) list_single_sp_fs_schedule_track_pane_t1

0x855a,	// (0x000b2aef) sp_fs_schedule_track_pane_ParamLimits

0x855a,	// (0x000b2aef) sp_fs_schedule_track_pane

0xe8c8,	// (0x000b8e5d) sp_fs_schedule_track_pane_g1

0xe8d0,	// (0x000b8e65) sp_fs_schedule_track_pane_g2

0xe8d8,	// (0x000b8e6d) sp_fs_schedule_track_pane_g3

0xe8e0,	// (0x000b8e75) sp_fs_schedule_track_pane_g4

0xe8e8,	// (0x000b8e7d) sp_fs_schedule_track_pane_g5

0x0004,

0xfdbf,	// (0x000ba354) sp_fs_schedule_track_pane_g

0xd639,	// (0x000b7bce) bg_sp_fs_schedule_viewer_highlight_g1

0xab2f,	// (0x000b50c4) bg_sp_fs_schedule_viewer_highlight_g2

0xd641,	// (0x000b7bd6) bg_sp_fs_schedule_viewer_highlight_g3

0xd649,	// (0x000b7bde) bg_sp_fs_schedule_viewer_highlight_g4

0xd85d,	// (0x000b7df2) bg_sp_fs_schedule_viewer_highlight_g5

0xd659,	// (0x000b7bee) bg_sp_fs_schedule_viewer_highlight_g6

0xd661,	// (0x000b7bf6) bg_sp_fs_schedule_viewer_highlight_g7

0xd669,	// (0x000b7bfe) bg_sp_fs_schedule_viewer_highlight_g8

0xab0f,	// (0x000b50a4) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdca,	// (0x000ba35f) bg_sp_fs_schedule_viewer_highlight_g

0x92ff,	// (0x000b3894) bg_main_sp_fs_ribbon_pane

0x856b,	// (0x000b2b00) main_sp_fs_ribbon_pane_g1

0xe8f0,	// (0x000b8e85) main_sp_fs_ribbon_pane_t1

0x8574,	// (0x000b2b09) main_sp_fs_ribbon_pane_t2

0xe8ff,	// (0x000b8e94) main_sp_fs_ribbon_pane_t3

0x0002,

0xfddd,	// (0x000ba372) main_sp_fs_ribbon_pane_t

0xe90e,	// (0x000b8ea3) main_sp_fs_ribbon_scheduler_pane

0xe916,	// (0x000b8eab) bg_main_sp_fs_ribbon_pane_g1

0xe91f,	// (0x000b8eb4) bg_main_sp_fs_ribbon_pane_g2

0xe928,	// (0x000b8ebd) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfde4,	// (0x000ba379) bg_main_sp_fs_ribbon_pane_g

0xe930,	// (0x000b8ec5) main_sp_fs_ribbon_scheduler_pane_g1

0xe939,	// (0x000b8ece) main_sp_fs_ribbon_scheduler_pane_g2

0xe942,	// (0x000b8ed7) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdeb,	// (0x000ba380) main_sp_fs_ribbon_scheduler_pane_g

0xe94b,	// (0x000b8ee0) list_cale_mrui_pane

0x8583,	// (0x000b2b18) sp_fs_scroll_pane_cp07_ParamLimits

0x8583,	// (0x000b2b18) sp_fs_scroll_pane_cp07

0x859f,	// (0x000b2b34) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x859f,	// (0x000b2b34) bg_sp_fs_schedule_viewer_highlight

0xe958,	// (0x000b8eed) list_single_sp_fs_schedule_track_pane_cp01

0xe960,	// (0x000b8ef5) list_sp_fs_schedule_track_pane

0xe968,	// (0x000b8efd) sp_fs_scroll_pane_cp06_ParamLimits

0xe968,	// (0x000b8efd) sp_fs_scroll_pane_cp06

0xcbc4,	// (0x000b7159) bgmain_sp_fs_calendar_pane_g1

0x85af,	// (0x000b2b44) list_single_cale_mrui_pane_ParamLimits

0x85af,	// (0x000b2b44) list_single_cale_mrui_pane

0xa8eb,	// (0x000b4e80) list_single_cale_mrui_row_pane_ParamLimits

0xa8eb,	// (0x000b4e80) list_single_cale_mrui_row_pane

0xa8f8,	// (0x000b4e8d) list_single_cale_mrui_row_pane_g1_ParamLimits

0xa8f8,	// (0x000b4e8d) list_single_cale_mrui_row_pane_g1

0xa930,	// (0x000b4ec5) list_single_cale_mrui_row_pane_t1_ParamLimits

0xa930,	// (0x000b4ec5) list_single_cale_mrui_row_pane_t1

0x85d1,	// (0x000b2b66) list_single_cale_mrui_row_pane_t2_ParamLimits

0x85d1,	// (0x000b2b66) list_single_cale_mrui_row_pane_t2

0xa942,	// (0x000b4ed7) list_single_cale_mrui_row_pane_t3_ParamLimits

0xa942,	// (0x000b4ed7) list_single_cale_mrui_row_pane_t3

0xa971,	// (0x000b4f06) list_single_cale_mrui_row_pane_t4_ParamLimits

0xa971,	// (0x000b4f06) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf9,	// (0x000ba38e) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf9,	// (0x000ba38e) list_single_cale_mrui_row_pane_t

0x8639,	// (0x000b2bce) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x8639,	// (0x000b2bce) list_single_cmail_header_editor_pane_bg_cp01

0x865f,	// (0x000b2bf4) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x865f,	// (0x000b2bf4) list_single_cmail_header_editor_pane_bg_cp02

0x867f,	// (0x000b2c14) main_radioblah_text_pane_t1_ParamLimits

0x867f,	// (0x000b2c14) main_radioblah_text_pane_t1

0xe987,	// (0x000b8f1c) cam6_indi_pane_cp01

0xe98f,	// (0x000b8f24) cam6_mode_pane_cp01

0xe997,	// (0x000b8f2c) cam6_pano_pane

0xe9a0,	// (0x000b8f35) cam6_zoom_pane_cp01

0xe9a8,	// (0x000b8f3d) cam6_pano_image_pane

0xe9b3,	// (0x000b8f48) cam6_pano_pane_g1

0xe288,	// (0x000b881d) cam6_pano_pane_g2

0xe9bc,	// (0x000b8f51) cam6_pano_pane_g3

0xe9c5,	// (0x000b8f5a) cam6_pano_pane_g4

0xd182,	// (0x000b7717) cam6_pano_pane_g5

0xe9ce,	// (0x000b8f63) cam6_pano_pane_g6

0xe9d8,	// (0x000b8f6d) cam6_pano_pane_g7

0xe9e0,	// (0x000b8f75) cam6_pano_pane_g8

0xe9e9,	// (0x000b8f7e) cam6_pano_pane_g9

0x0008,

0xfe02,	// (0x000ba397) cam6_pano_pane_g

0x92ff,	// (0x000b3894) main_browser_tag_pane

0xe847,	// (0x000b8ddc) grid_navstr_albumart_pane

0xe9f4,	// (0x000b8f89) cell_navstr_albumart_pane_ParamLimits

0xe9f4,	// (0x000b8f89) cell_navstr_albumart_pane

0xb4b9,	// (0x000b5a4e) cell_navstr_albumart_pane_g1

0xc5cb,	// (0x000b6b60) cell_navstr_albumart_pane_g2

0xc5db,	// (0x000b6b70) cell_navstr_albumart_pane_g3

0xc5d3,	// (0x000b6b68) cell_navstr_albumart_pane_g4

0x0003,

0xfe15,	// (0x000ba3aa) cell_navstr_albumart_pane_g

0x869a,	// (0x000b2c2f) bt_list_pane_ParamLimits

0x869a,	// (0x000b2c2f) bt_list_pane

0xea16,	// (0x000b8fab) bt_list_pane_t1

0xea25,	// (0x000b8fba) bt_list_pane_t2

0x0001,

0xfe1e,	// (0x000ba3b3) bt_list_pane_t

0x92ff,	// (0x000b3894) main_cale_prevew_pane

0x86af,	// (0x000b2c44) popup_cale_preview_window_ParamLimits

0x86af,	// (0x000b2c44) popup_cale_preview_window

0xa55d,	// (0x000b4af2) bg_popup_preview_window_pane_cp05_ParamLimits

0xa55d,	// (0x000b4af2) bg_popup_preview_window_pane_cp05

0xea34,	// (0x000b8fc9) list_cale_preview_pane_ParamLimits

0xea34,	// (0x000b8fc9) list_cale_preview_pane

0xea40,	// (0x000b8fd5) list_double_cale_preview_pane_ParamLimits

0xea40,	// (0x000b8fd5) list_double_cale_preview_pane

0xea52,	// (0x000b8fe7) list_single_cale_preview_pane_ParamLimits

0xea52,	// (0x000b8fe7) list_single_cale_preview_pane

0xea66,	// (0x000b8ffb) list_single_cale_preview_pane_g1

0xea6e,	// (0x000b9003) list_single_cale_preview_pane_t1_ParamLimits

0xea6e,	// (0x000b9003) list_single_cale_preview_pane_t1

0xea83,	// (0x000b9018) list_double_cale_preview_pane_g1

0xea8b,	// (0x000b9020) list_double_cale_preview_pane_t1_ParamLimits

0xea8b,	// (0x000b9020) list_double_cale_preview_pane_t1

0xeaa0,	// (0x000b9035) list_double_cale_preview_pane_t2_ParamLimits

0xeaa0,	// (0x000b9035) list_double_cale_preview_pane_t2

0x0001,

0xfe23,	// (0x000ba3b8) list_double_cale_preview_pane_t_ParamLimits

0xfe23,	// (0x000ba3b8) list_double_cale_preview_pane_t

0x92ff,	// (0x000b3894) main_ezdial_pane

0xa55d,	// (0x000b4af2) main_sp_fs_email_pane_ParamLimits

0x7cad,	// (0x000b2242) cmail_ddmenu_btn01_pane_ParamLimits

0x7cad,	// (0x000b2242) cmail_ddmenu_btn01_pane

0x7cc0,	// (0x000b2255) cmail_ddmenu_btn02_pane_ParamLimits

0x7cc0,	// (0x000b2255) cmail_ddmenu_btn02_pane

0x7ce3,	// (0x000b2278) cmail_ddmenu_btn03_pane_ParamLimits

0x7ce3,	// (0x000b2278) cmail_ddmenu_btn03_pane

0x7d09,	// (0x000b229e) main_sp_fs_ctrlbar_pane_ParamLimits

0x7d2d,	// (0x000b22c2) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x8383,	// (0x000b2918) list_cmail_body_pane_ParamLimits

0xe7be,	// (0x000b8d53) bg_button_pane_cp12

0xe7c7,	// (0x000b8d5c) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe7c7,	// (0x000b8d5c) list_single_cmail_header_detail_pane_g3

0xa832,	// (0x000b4dc7) list_single_cmail_header_detail_pane_t2_ParamLimits

0xa832,	// (0x000b4dc7) list_single_cmail_header_detail_pane_t2

0x0001,

0xfda6,	// (0x000ba33b) list_single_cmail_header_detail_pane_t_ParamLimits

0xfda6,	// (0x000ba33b) list_single_cmail_header_detail_pane_t

0xa88a,	// (0x000b4e1f) phacti_term_pane_t2_ParamLimits

0xa88a,	// (0x000b4e1f) phacti_term_pane_t2

0x0001,

0xfdb0,	// (0x000ba345) phacti_term_pane_t_ParamLimits

0xfdb0,	// (0x000ba345) phacti_term_pane_t

0xeab8,	// (0x000b904d) aid_size_list_single_double

0x86c8,	// (0x000b2c5d) popup_ezdial_listscroll_window

0x86e3,	// (0x000b2c78) popup_number_entry_window_cp01

0xa3cd,	// (0x000b4962) bg_popup_call_pane_cp09

0xeac4,	// (0x000b9059) ezdial_list_pane

0xeacc,	// (0x000b9061) scroll_pane_cp23

0xc7ba,	// (0x000b6d4f) bg_button_pane_cp028_ParamLimits

0xc7ba,	// (0x000b6d4f) bg_button_pane_cp028

0x86f1,	// (0x000b2c86) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x86f1,	// (0x000b2c86) cmail_ddmenu_btn01_pane_g1

0x86fd,	// (0x000b2c92) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x86fd,	// (0x000b2c92) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe28,	// (0x000ba3bd) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe28,	// (0x000ba3bd) cmail_ddmenu_btn01_pane_g

0xead4,	// (0x000b9069) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xead4,	// (0x000b9069) cmail_ddmenu_btn01_pane_t1

0xc7ba,	// (0x000b6d4f) bg_button_pane_cp029_ParamLimits

0xc7ba,	// (0x000b6d4f) bg_button_pane_cp029

0x8709,	// (0x000b2c9e) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x8709,	// (0x000b2c9e) cmail_ddmenu_btn02_pane_g1

0x8721,	// (0x000b2cb6) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x8721,	// (0x000b2cb6) cmail_ddmenu_btn02_pane_t1

0xa55d,	// (0x000b4af2) bg_button_pane_cp031_ParamLimits

0xa55d,	// (0x000b4af2) bg_button_pane_cp031

0x8709,	// (0x000b2c9e) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x8709,	// (0x000b2c9e) cmail_ddmenu_btn03_pane_g1

0x8721,	// (0x000b2cb6) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x8721,	// (0x000b2cb6) cmail_ddmenu_btn03_pane_t1

0x55b5,	// (0x000afb4a) cell_dialer2_keypad_pane_t1_ParamLimits

0x55cf,	// (0x000afb64) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x55cf,	// (0x000afb64) cell_dialer2_keypad_pane_t1_copy1

0x7524,	// (0x000b1ab9) ncimui_group_button_pane

0xa55d,	// (0x000b4af2) main_sp_fs_calendar_pane_ParamLimits

0x8398,	// (0x000b292d) list_single_cmail_header_caption_pane_ParamLimits

0xa89f,	// (0x000b4e34) aid_recal_txt_sm_pane

0x92ff,	// (0x000b3894) mian_recal_day_pane

0xa8d9,	// (0x000b4e6e) popup_sp_fs_cale_preview_window_ParamLimits

0xeae9,	// (0x000b907e) list_recal_day_pane

0xa9bb,	// (0x000b4f50) list_single_recal_day_pane_ParamLimits

0xa9bb,	// (0x000b4f50) list_single_recal_day_pane

0xeb10,	// (0x000b90a5) list_single_recal_day_pane_g1_ParamLimits

0xeb10,	// (0x000b90a5) list_single_recal_day_pane_g1

0xa9cd,	// (0x000b4f62) list_single_recal_day_pane_g2_ParamLimits

0xa9cd,	// (0x000b4f62) list_single_recal_day_pane_g2

0xa9dd,	// (0x000b4f72) list_single_recal_day_pane_g3_ParamLimits

0xa9dd,	// (0x000b4f72) list_single_recal_day_pane_g3

0x8745,	// (0x000b2cda) list_single_recal_day_pane_g4_ParamLimits

0x8745,	// (0x000b2cda) list_single_recal_day_pane_g4

0xa9e9,	// (0x000b4f7e) list_single_recal_day_pane_g5_ParamLimits

0xa9e9,	// (0x000b4f7e) list_single_recal_day_pane_g5

0xa9f9,	// (0x000b4f8e) list_single_recal_day_pane_g6_ParamLimits

0xa9f9,	// (0x000b4f8e) list_single_recal_day_pane_g6

0x0004,

0xfe37,	// (0x000ba3cc) list_single_recal_day_pane_g_ParamLimits

0xfe37,	// (0x000ba3cc) list_single_recal_day_pane_g

0xaa0d,	// (0x000b4fa2) list_single_recal_day_pane_t1

0xaa1f,	// (0x000b4fb4) list_single_recal_day_pane_t2

0x0001,

0xfe42,	// (0x000ba3d7) list_single_recal_day_pane_t

0x8765,	// (0x000b2cfa) ncimui_query_button_pane_ParamLimits

0x8765,	// (0x000b2cfa) ncimui_query_button_pane

0x8775,	// (0x000b2d0a) ncimui_query_button_pane_t1_ParamLimits

0x8775,	// (0x000b2d0a) ncimui_query_button_pane_t1

0xeb1c,	// (0x000b90b1) ncimui_query_button_pane_t2_ParamLimits

0xeb1c,	// (0x000b90b1) ncimui_query_button_pane_t2

0x0001,

0xfe47,	// (0x000ba3dc) ncimui_query_button_pane_t_ParamLimits

0xfe47,	// (0x000ba3dc) ncimui_query_button_pane_t

0x8788,	// (0x000b2d1d) query_button_pane_ParamLimits

0x8788,	// (0x000b2d1d) query_button_pane

0x92ff,	// (0x000b3894) bg_button_pane_cp0028

0xeb2f,	// (0x000b90c4) query_button_pane_t1

0x3650,	// (0x000adbe5) main_tport_pane_ParamLimits

0x8247,	// (0x000b27dc) bg_popup_window_pane_cp01_ParamLimits

0x8247,	// (0x000b27dc) bg_popup_window_pane_cp01

0x8262,	// (0x000b27f7) heading_pane_cp08_ParamLimits

0x8262,	// (0x000b27f7) heading_pane_cp08

0x8275,	// (0x000b280a) heading_pane_cp07_ParamLimits

0x8275,	// (0x000b280a) heading_pane_cp07

0x831c,	// (0x000b28b1) cell_tport_appsw_pane_g2

0x0002,

0xfd93,	// (0x000ba328) cell_tport_appsw_pane_g

0x2be2,	// (0x000ad177) input_candi_list_open_g1

0xacfa,	// (0x000b528f) list_cale_time_pane_g6_ParamLimits

0xacfa,	// (0x000b528f) list_cale_time_pane_g6

0x4413,	// (0x000ae9a8) aid_size_touch_calib_1_ParamLimits

0x4413,	// (0x000ae9a8) aid_size_touch_calib_1

0x4425,	// (0x000ae9ba) aid_size_touch_calib_2_ParamLimits

0x4425,	// (0x000ae9ba) aid_size_touch_calib_2

0x443d,	// (0x000ae9d2) aid_size_touch_calib_3_ParamLimits

0x443d,	// (0x000ae9d2) aid_size_touch_calib_3

0x445b,	// (0x000ae9f0) aid_size_touch_calib_4_ParamLimits

0x445b,	// (0x000ae9f0) aid_size_touch_calib_4

0x4473,	// (0x000aea08) main_touch_calib_button_group_pane_ParamLimits

0x4473,	// (0x000aea08) main_touch_calib_button_group_pane

0x448b,	// (0x000aea20) main_touch_calib_pane_g1_ParamLimits

0x449d,	// (0x000aea32) main_touch_calib_pane_g2_ParamLimits

0x44af,	// (0x000aea44) main_touch_calib_pane_g3_ParamLimits

0x44c1,	// (0x000aea56) main_touch_calib_pane_g4_ParamLimits

0xf751,	// (0x000b9ce6) main_touch_calib_pane_g_ParamLimits

0x44d3,	// (0x000aea68) main_touch_calib_pane_t1_ParamLimits

0x44ed,	// (0x000aea82) main_touch_calib_pane_t2_ParamLimits

0x4507,	// (0x000aea9c) main_touch_calib_pane_t3_ParamLimits

0x451b,	// (0x000aeab0) main_touch_calib_pane_t4_ParamLimits

0x452f,	// (0x000aeac4) main_touch_calib_pane_t5_ParamLimits

0xf75a,	// (0x000b9cef) main_touch_calib_pane_t_ParamLimits

0xcf24,	// (0x000b74b9) list_single_fp_cale_pane_g3_ParamLimits

0xcf24,	// (0x000b74b9) list_single_fp_cale_pane_g3

0x9367,	// (0x000b38fc) bg_button_pane_cp012_ParamLimits

0x9367,	// (0x000b38fc) bg_vkb2_func_pane_cp03_ParamLimits

0x6537,	// (0x000b0acc) cell_vitu2_function_top_pane_g1_ParamLimits

0x9367,	// (0x000b38fc) bg_vkb2_func_pane_cp04_ParamLimits

0x74b2,	// (0x000b1a47) main_ncimui_button_group_pane_ParamLimits

0x74b2,	// (0x000b1a47) main_ncimui_button_group_pane

0x7512,	// (0x000b1aa7) main_ncimui_pane_t3_ParamLimits

0x7512,	// (0x000b1aa7) main_ncimui_pane_t3

0xe85d,	// (0x000b8df2) phacti_button_group_pane

0xeab8,	// (0x000b904d) aid_size_list_single_double_ParamLimits

0x86c8,	// (0x000b2c5d) popup_ezdial_listscroll_window_ParamLimits

0x86e3,	// (0x000b2c78) popup_number_entry_window_cp01_ParamLimits

0x879b,	// (0x000b2d30) phacti_button_pane_ParamLimits

0x879b,	// (0x000b2d30) phacti_button_pane

0x92ff,	// (0x000b3894) bg_button_pane_cp14

0xeb3d,	// (0x000b90d2) phacti_button_pane_t1

0x87ac,	// (0x000b2d41) main_touch_calib_button_pane_ParamLimits

0x87ac,	// (0x000b2d41) main_touch_calib_button_pane

0xa1f1,	// (0x000b4786) bg_button_pane_cp18_ParamLimits

0xa1f1,	// (0x000b4786) bg_button_pane_cp18

0xeb4b,	// (0x000b90e0) main_touch_calib_button_pane_t1_ParamLimits

0xeb4b,	// (0x000b90e0) main_touch_calib_button_pane_t1

0xeb61,	// (0x000b90f6) main_touch_calib_button_pane_t2_ParamLimits

0xeb61,	// (0x000b90f6) main_touch_calib_button_pane_t2

0x0001,

0xfe4c,	// (0x000ba3e1) main_touch_calib_button_pane_t_ParamLimits

0xfe4c,	// (0x000ba3e1) main_touch_calib_button_pane_t

0x92ff,	// (0x000b3894) cell_ncimui_button_pane

0x92ff,	// (0x000b3894) bg_button_pane_cp032

0xeb7f,	// (0x000b9114) cell_ncimui_button_pane_t1

0x9c61,	// (0x000b41f6) image3_infobar_pane_ParamLimits

0x9c61,	// (0x000b41f6) image3_infobar_pane

0x78ee,	// (0x000b1e83) fs_bigclock_status_pane_ParamLimits

0x78ee,	// (0x000b1e83) fs_bigclock_status_pane

0x78fb,	// (0x000b1e90) main_fs_bigclock_clock_pane_ParamLimits

0x78fb,	// (0x000b1e90) main_fs_bigclock_clock_pane

0x791b,	// (0x000b1eb0) main_fs_bigclock_indi_pane_ParamLimits

0x791b,	// (0x000b1eb0) main_fs_bigclock_indi_pane

0x7945,	// (0x000b1eda) main_fs_bigclock_swipe_pane_ParamLimits

0x7945,	// (0x000b1eda) main_fs_bigclock_swipe_pane

0x92ff,	// (0x000b3894) main_fs_clock_dumped_data

0xe395,	// (0x000b892a) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe395,	// (0x000b892a) list_single_fs_bigclock_indicator_pane_g1

0xe3b1,	// (0x000b8946) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe3b1,	// (0x000b8946) list_single_fs_bigclock_indicator_pane_g2

0xe3cb,	// (0x000b8960) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe3cb,	// (0x000b8960) list_single_fs_bigclock_indicator_pane_g3

0xe3e5,	// (0x000b897a) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe3e5,	// (0x000b897a) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc74,	// (0x000ba209) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc74,	// (0x000ba209) list_single_fs_bigclock_indicator_pane_g

0xe410,	// (0x000b89a5) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe410,	// (0x000b89a5) list_single_fs_bigclock_indicator_pane_t1

0xe438,	// (0x000b89cd) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe438,	// (0x000b89cd) list_single_fs_bigclock_indicator_pane_t2

0xe460,	// (0x000b89f5) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe460,	// (0x000b89f5) list_single_fs_bigclock_indicator_pane_t3

0xe488,	// (0x000b8a1d) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe488,	// (0x000b8a1d) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc7f,	// (0x000ba214) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc7f,	// (0x000ba214) list_single_fs_bigclock_indicator_pane_t

0xeb8d,	// (0x000b9122) image3_infobar_fav_pane_ParamLimits

0xeb8d,	// (0x000b9122) image3_infobar_fav_pane

0xeb9d,	// (0x000b9132) image3_infobar_loc_pane_ParamLimits

0xeb9d,	// (0x000b9132) image3_infobar_loc_pane

0xebb1,	// (0x000b9146) image3_infobar_time_pane_ParamLimits

0xebb1,	// (0x000b9146) image3_infobar_time_pane

0xcbc4,	// (0x000b7159) image3_infobar_time_pane_g1

0xebc1,	// (0x000b9156) image3_infobar_time_pane_t1

0xcbc4,	// (0x000b7159) image3_infobar_loc_pane_g1

0xebcf,	// (0x000b9164) image3_infobar_loc_pane_g2

0x0001,

0xfe51,	// (0x000ba3e6) image3_infobar_loc_pane_g

0xebd7,	// (0x000b916c) image3_infobar_loc_pane_t1

0xcbc4,	// (0x000b7159) image3_infobar_fav_pane_g1

0xebe5,	// (0x000b917a) image3_infobar_fav_pane_g2

0x0001,

0xfe56,	// (0x000ba3eb) image3_infobar_fav_pane_g

0xebed,	// (0x000b9182) fs_bigclock_status_battery_pane

0xebf6,	// (0x000b918b) fs_bigclock_status_signal_pane

0xebff,	// (0x000b9194) fs_bigclock_status_title_pane

0xec08,	// (0x000b919d) fs_bigclock_status_signal_pane_g1

0xec11,	// (0x000b91a6) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe5b,	// (0x000ba3f0) fs_bigclock_status_signal_pane_g

0xec19,	// (0x000b91ae) fs_bigclock_status_battery_pane_g1

0xec22,	// (0x000b91b7) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe60,	// (0x000ba3f5) fs_bigclock_status_battery_pane_g

0xec2a,	// (0x000b91bf) fs_bigclock_status_title_pane_t1

0xcbc4,	// (0x000b7159) main_fs_bigclock_clock_pane_g1

0xec38,	// (0x000b91cd) main_fs_bigclock_clock_pane_g2

0xec41,	// (0x000b91d6) main_fs_bigclock_clock_pane_g3

0xec41,	// (0x000b91d6) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe65,	// (0x000ba3fa) main_fs_bigclock_clock_pane_g

0xec49,	// (0x000b91de) main_fs_bigclock_clock_pane_t1

0x87c1,	// (0x000b2d56) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe6e,	// (0x000ba403) main_fs_bigclock_clock_pane_t

0xec57,	// (0x000b91ec) list_single_fs_bigclock_indicator_pane_ParamLimits

0xec57,	// (0x000b91ec) list_single_fs_bigclock_indicator_pane

0xec68,	// (0x000b91fd) list_single_fs_bigclock_pane_ParamLimits

0xec68,	// (0x000b91fd) list_single_fs_bigclock_pane

0xec8e,	// (0x000b9223) main_fs_bigclock_indicator_pane_t1

0xec9d,	// (0x000b9232) list_single_fs_bigclock_pane_g1

0xeca5,	// (0x000b923a) list_single_fs_bigclock_pane_t1

0xcbc4,	// (0x000b7159) main_fs_bigclock_swipe_pane_g1

0xece8,	// (0x000b927d) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe7f,	// (0x000ba414) main_fs_bigclock_swipe_pane_g

0xecf0,	// (0x000b9285) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xecf0,	// (0x000b9285) main_fs_bigclock_swipe_pane_t1

0x24fd,	// (0x000aca92) call_type_pane_ParamLimits

0x92ff,	// (0x000b3894) main_btmg_pane

0xa924,	// (0x000b4eb9) list_single_cale_mrui_row_pane_g2_ParamLimits

0xa924,	// (0x000b4eb9) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdf2,	// (0x000ba387) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdf2,	// (0x000ba387) list_single_cale_mrui_row_pane_g

0xa9aa,	// (0x000b4f3f) list_recal_vselct_arw_lo_pane

0xeb08,	// (0x000b909d) list_recal_vselct_arw_up_pane

0xa9b2,	// (0x000b4f47) list_recal_vselct_pane

0x8812,	// (0x000b2da7) btmg_button_pane

0x881c,	// (0x000b2db1) main_btmg_pane_g1

0x92ff,	// (0x000b3894) bg_button_pane_cp044

0xed0d,	// (0x000b92a2) btmg_button_pane_t1

0xc7a6,	// (0x000b6d3b) aid_listscroll_gen

0xa55d,	// (0x000b4af2) main_cntbar_detail_pane

0xe7a0,	// (0x000b8d35) list_cmail_folder_pane

0xc1eb,	// (0x000b6780) sp_fs_scroll_pane_cp03_ParamLimits

0x8826,	// (0x000b2dbb) list_single_fs_dyc_pane_cp01_ParamLimits

0x8826,	// (0x000b2dbb) list_single_fs_dyc_pane_cp01

0xed1b,	// (0x000b92b0) aid_size_cmail_indent

0xaa31,	// (0x000b4fc6) list_single_dyc_row_pane_cp01

0x886a,	// (0x000b2dff) cntbar_detail_list_pane_ParamLimits

0x886a,	// (0x000b2dff) cntbar_detail_list_pane

0x88b6,	// (0x000b2e4b) main_cntbar_detail_cont_pane_ParamLimits

0x88b6,	// (0x000b2e4b) main_cntbar_detail_cont_pane

0xc1eb,	// (0x000b6780) scroll_pane_cp032_ParamLimits

0xc1eb,	// (0x000b6780) scroll_pane_cp032

0x88ca,	// (0x000b2e5f) cntbar_detail_list_event_pane_ParamLimits

0x88ca,	// (0x000b2e5f) cntbar_detail_list_event_pane

0x887a,	// (0x000b2e0f) cntbar_detail_list_shct_pane

0xab7d,	// (0x000b5112) aid_list_gen

0xed24,	// (0x000b92b9) aid_scroll

0xed2d,	// (0x000b92c2) aid_size_touch_scroll_bar

0x6c3d,	// (0x000b11d2) aid_list_double

0xe4cc,	// (0x000b8a61) aid_list_single

0x6c2b,	// (0x000b11c0) aid_list_single_lg

0xaa3a,	// (0x000b4fcf) aid_list_z_g_a_sm

0xaa42,	// (0x000b4fd7) aid_list_z_g_d

0xaa4a,	// (0x000b4fdf) aid_txt_z_prm

0x88da,	// (0x000b2e6f) aid_txt_z_prm_cp01

0x88e8,	// (0x000b2e7d) aid_txt_z_sec

0x88f6,	// (0x000b2e8b) main_cntbar_detail_cont_pane_g1_ParamLimits

0x88f6,	// (0x000b2e8b) main_cntbar_detail_cont_pane_g1

0x890a,	// (0x000b2e9f) main_cntbar_detail_cont_pane_g2_ParamLimits

0x890a,	// (0x000b2e9f) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe84,	// (0x000ba419) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe84,	// (0x000ba419) main_cntbar_detail_cont_pane_g

0xed36,	// (0x000b92cb) main_cntbar_detail_cont_pane_t1

0xed44,	// (0x000b92d9) main_cntbar_detail_cont_pane_t2

0xed52,	// (0x000b92e7) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe89,	// (0x000ba41e) main_cntbar_detail_cont_pane_t

0x891a,	// (0x000b2eaf) cell_cntbar_detail_list_shct_pane_ParamLimits

0x891a,	// (0x000b2eaf) cell_cntbar_detail_list_shct_pane

0xed60,	// (0x000b92f5) cntbar_detail_list_shct_pane_g1

0xed69,	// (0x000b92fe) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe90,	// (0x000ba425) cntbar_detail_list_shct_pane_g

0x892e,	// (0x000b2ec3) cntbar_detail_list_event_pane_g1_ParamLimits

0x892e,	// (0x000b2ec3) cntbar_detail_list_event_pane_g1

0x893a,	// (0x000b2ecf) cntbar_detail_list_event_pane_g2_ParamLimits

0x893a,	// (0x000b2ecf) cntbar_detail_list_event_pane_g2

0x0005,

0xfe95,	// (0x000ba42a) cntbar_detail_list_event_pane_g_ParamLimits

0xfe95,	// (0x000ba42a) cntbar_detail_list_event_pane_g

0x89a6,	// (0x000b2f3b) cntbar_detail_list_event_pane_t1_ParamLimits

0x89a6,	// (0x000b2f3b) cntbar_detail_list_event_pane_t1

0x89bb,	// (0x000b2f50) cntbar_detail_list_event_pane_t2_ParamLimits

0x89bb,	// (0x000b2f50) cntbar_detail_list_event_pane_t2

0x0002,

0xfea2,	// (0x000ba437) cntbar_detail_list_event_pane_t_ParamLimits

0xfea2,	// (0x000ba437) cntbar_detail_list_event_pane_t

0xcbc4,	// (0x000b7159) cell_cntbar_detail_list_shct_pane_g1

0xb30a,	// (0x000b589f) navi_pane_mv_g3

0xa55d,	// (0x000b4af2) main_cntbar_detail_pane_ParamLimits

0x92ff,	// (0x000b3894) main_notif_wgt_pane

0x9a77,	// (0x000b400c) aid_tch_main_mp4_pane_g4

0x9c59,	// (0x000b41ee) popup_slider_window_cp02

0xa9a0,	// (0x000b4f35) list_recal_day_event_pane

0x883e,	// (0x000b2dd3) cntbar_detail_btn_pane_ParamLimits

0x883e,	// (0x000b2dd3) cntbar_detail_btn_pane

0x8854,	// (0x000b2de9) cntbar_detail_btn_pane_cp01_ParamLimits

0x8854,	// (0x000b2de9) cntbar_detail_btn_pane_cp01

0x887a,	// (0x000b2e0f) cntbar_detail_list_shct_pane_ParamLimits

0x888a,	// (0x000b2e1f) cntbar_detail_pane_g1_ParamLimits

0x888a,	// (0x000b2e1f) cntbar_detail_pane_g1

0x889a,	// (0x000b2e2f) cntbar_detail_pane_t1_ParamLimits

0x889a,	// (0x000b2e2f) cntbar_detail_pane_t1

0x8946,	// (0x000b2edb) cntbar_detail_list_event_pane_g3_ParamLimits

0x8946,	// (0x000b2edb) cntbar_detail_list_event_pane_g3

0x895e,	// (0x000b2ef3) cntbar_detail_list_event_pane_g4_ParamLimits

0x895e,	// (0x000b2ef3) cntbar_detail_list_event_pane_g4

0x8976,	// (0x000b2f0b) cntbar_detail_list_event_pane_g5_ParamLimits

0x8976,	// (0x000b2f0b) cntbar_detail_list_event_pane_g5

0x898e,	// (0x000b2f23) cntbar_detail_list_event_pane_g6_ParamLimits

0x898e,	// (0x000b2f23) cntbar_detail_list_event_pane_g6

0x89d0,	// (0x000b2f65) cntbar_detail_list_event_pane_t3_ParamLimits

0x89d0,	// (0x000b2f65) cntbar_detail_list_event_pane_t3

0x89e2,	// (0x000b2f77) popup_notif_wgt_window_ParamLimits

0x89e2,	// (0x000b2f77) popup_notif_wgt_window

0x89fb,	// (0x000b2f90) popup_submenu_window_cp01_ParamLimits

0x89fb,	// (0x000b2f90) popup_submenu_window_cp01

0xa3cd,	// (0x000b4962) bg_popup_window_pane_cp10

0xed72,	// (0x000b9307) listscroll_notif_wgt_pane

0xed83,	// (0x000b9318) list_notif_wgt_window

0xed8c,	// (0x000b9321) scroll_pane_cp033

0x8a0d,	// (0x000b2fa2) list_notif_wgt_row_pane_ParamLimits

0x8a0d,	// (0x000b2fa2) list_notif_wgt_row_pane

0xed95,	// (0x000b932a) aid_size_list_notif_wgt_del

0xeda2,	// (0x000b9337) list_notif_wgt_row_pane_g1

0xedae,	// (0x000b9343) list_notif_wgt_row_pane_g2

0xedc2,	// (0x000b9357) list_notif_wgt_row_pane_g3

0x0002,

0xfea9,	// (0x000ba43e) list_notif_wgt_row_pane_g

0xedcf,	// (0x000b9364) list_notif_wgt_row_pane_t1

0xede5,	// (0x000b937a) list_notif_wgt_row_pane_t2

0xedf7,	// (0x000b938c) list_notif_wgt_row_pane_t3

0x0002,

0xfeb0,	// (0x000ba445) list_notif_wgt_row_pane_t

0xd877,	// (0x000b7e0c) list_recal_day_event_pane_g1

0xee09,	// (0x000b939e) list_recal_day_event_pane_t1

0x92ff,	// (0x000b3894) bg_button_pane_cp045

0xee18,	// (0x000b93ad) cntbar_detail_btn_pane_t1

0xc7ba,	// (0x000b6d4f) main_callh_pane_ParamLimits

0xc7ba,	// (0x000b6d4f) main_callh_pane

0x92ff,	// (0x000b3894) main_coverflow0_pane

0x92ff,	// (0x000b3894) main_wgtman_pane

0x795d,	// (0x000b1ef2) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x795d,	// (0x000b1ef2) main_fs_bigclock_unlock_btn_pane

0x8314,	// (0x000b28a9) bg_button_pane_cp16

0x8324,	// (0x000b28b9) cell_tport_appsw_pane_g3

0x8a1d,	// (0x000b2fb2) cf0_flow_pane_ParamLimits

0x8a1d,	// (0x000b2fb2) cf0_flow_pane

0xee26,	// (0x000b93bb) listscroll_cf0_pane

0xee31,	// (0x000b93c6) main_cf0_pane_g1

0x8a32,	// (0x000b2fc7) main_cf0_pane_t1_ParamLimits

0x8a32,	// (0x000b2fc7) main_cf0_pane_t1

0x8a49,	// (0x000b2fde) main_cf0_pane_t2_ParamLimits

0x8a49,	// (0x000b2fde) main_cf0_pane_t2

0x0001,

0xfebc,	// (0x000ba451) main_cf0_pane_t_ParamLimits

0xfebc,	// (0x000ba451) main_cf0_pane_t

0xee43,	// (0x000b93d8) scroll_pane_cp11

0x8a60,	// (0x000b2ff5) cf0_flow_pane_g1

0x8a68,	// (0x000b2ffd) cf0_flow_pane_g2

0x0001,

0xfec1,	// (0x000ba456) cf0_flow_pane_g

0x8a70,	// (0x000b3005) cf0_flow_pane_t1

0x92ff,	// (0x000b3894) main_call6_pane

0x92ff,	// (0x000b3894) main_calllock_pane

0x8a7e,	// (0x000b3013) call6_btn_grp_pane_ParamLimits

0x8a7e,	// (0x000b3013) call6_btn_grp_pane

0x8a98,	// (0x000b302d) call6_pane_g1_ParamLimits

0x8a98,	// (0x000b302d) call6_pane_g1

0x8aad,	// (0x000b3042) popup_call6_1st_window_ParamLimits

0x8aad,	// (0x000b3042) popup_call6_1st_window

0x8abe,	// (0x000b3053) popup_call6_2nd_window_ParamLimits

0x8abe,	// (0x000b3053) popup_call6_2nd_window

0x8acf,	// (0x000b3064) cell_call6_btn_pane_ParamLimits

0x8acf,	// (0x000b3064) cell_call6_btn_pane

0xa3cd,	// (0x000b4962) bg_popup_call2_in_pane_cp03

0xee4e,	// (0x000b93e3) popup_call6_1st_window_g1

0xee56,	// (0x000b93eb) popup_call6_1st_window_g2

0xee5e,	// (0x000b93f3) popup_call6_1st_window_g3

0x0002,

0xfec6,	// (0x000ba45b) popup_call6_1st_window_g

0xee66,	// (0x000b93fb) popup_call6_1st_window_t1

0xee75,	// (0x000b940a) popup_call6_1st_window_t2

0xee85,	// (0x000b941a) popup_call6_1st_window_t3

0x0002,

0xfecd,	// (0x000ba462) popup_call6_1st_window_t

0xa3cd,	// (0x000b4962) bg_popup_call2_in_pane_cp04

0xee4e,	// (0x000b93e3) popup_call6_2nd_window_g1

0xee56,	// (0x000b93eb) popup_call6_2nd_window_g2

0xee5e,	// (0x000b93f3) popup_call6_2nd_window_g3

0x0002,

0xfec6,	// (0x000ba45b) popup_call6_2nd_window_g

0xee66,	// (0x000b93fb) popup_call6_2nd_window_t1

0x92ff,	// (0x000b3894) bg_button_pane_cp15

0xee95,	// (0x000b942a) cell_call6_btn_pane_g1

0xee9e,	// (0x000b9433) cell_call6_btn_pane_t1

0x8ae3,	// (0x000b3078) listscroll_wgtman_pane_ParamLimits

0x8ae3,	// (0x000b3078) listscroll_wgtman_pane

0x8b04,	// (0x000b3099) wgtman_btn_pane_ParamLimits

0x8b04,	// (0x000b3099) wgtman_btn_pane

0xb10f,	// (0x000b56a4) aid_scroll_copy1

0xeead,	// (0x000b9442) list_wgtman_pane

0x8b47,	// (0x000b30dc) wgtman_btn_pane_g1_ParamLimits

0x8b47,	// (0x000b30dc) wgtman_btn_pane_g1

0x8b73,	// (0x000b3108) wgtman_btn_pane_t1_ParamLimits

0x8b73,	// (0x000b3108) wgtman_btn_pane_t1

0xeeb7,	// (0x000b944c) wgtman_btn_pane_t2_ParamLimits

0xeeb7,	// (0x000b944c) wgtman_btn_pane_t2

0x0001,

0xfed4,	// (0x000ba469) wgtman_btn_pane_t_ParamLimits

0xfed4,	// (0x000ba469) wgtman_btn_pane_t

0x8bb0,	// (0x000b3145) listrow_wgtman_pane_ParamLimits

0x8bb0,	// (0x000b3145) listrow_wgtman_pane

0x8bc3,	// (0x000b3158) listrow_wgtman_pane_g1

0x8bd0,	// (0x000b3165) listrow_wgtman_pane_g2

0x0001,

0xfed9,	// (0x000ba46e) listrow_wgtman_pane_g

0x8bee,	// (0x000b3183) listrow_wgtman_pane_t1

0x8c06,	// (0x000b319b) listrow_wgtman_pane_t2

0x0001,

0xfede,	// (0x000ba473) listrow_wgtman_pane_t

0x8c2c,	// (0x000b31c1) wait_bar_pane_cp09

0xeece,	// (0x000b9463) main_calllock_btn_pane

0xeed8,	// (0x000b946d) main_calllock_pane_g1

0x92ff,	// (0x000b3894) bg_button_pane_cp17

0xeee3,	// (0x000b9478) main_calllock_btn_pane_g1

0xeeec,	// (0x000b9481) main_calllock_btn_pane_t1

0x92ff,	// (0x000b3894) main_dialer3_pane

0x92ff,	// (0x000b3894) main_fmrd2_pane

0xcbc4,	// (0x000b7159) main_fs_bigclock_unlock_btn_pane_g1

0xef03,	// (0x000b9498) main_fs_bigclock_unlock_btn_pane_t1

0x8c3e,	// (0x000b31d3) area_fmrd2_info_pane_ParamLimits

0x8c3e,	// (0x000b31d3) area_fmrd2_info_pane

0x8c4f,	// (0x000b31e4) area_fmrd2_visual_pane_ParamLimits

0x8c4f,	// (0x000b31e4) area_fmrd2_visual_pane

0x8c5d,	// (0x000b31f2) fmrd2_indi_pane_ParamLimits

0x8c5d,	// (0x000b31f2) fmrd2_indi_pane

0x8c6a,	// (0x000b31ff) area_fmrd2_visual_pane_g1

0x8c72,	// (0x000b3207) area_fmrd2_visual_pane_t1

0x8c82,	// (0x000b3217) area_fmrd2_visual_pane_t2

0x8c92,	// (0x000b3227) area_fmrd2_visual_pane_t3

0x0002,

0xfee8,	// (0x000ba47d) area_fmrd2_visual_pane_t

0x8ca2,	// (0x000b3237) area_fmrd2_info_pane_g1

0x8caa,	// (0x000b323f) area_fmrd2_info_pane_t1

0x8cba,	// (0x000b324f) area_fmrd2_info_pane_t2

0x8cca,	// (0x000b325f) area_fmrd2_info_pane_t3

0x8cda,	// (0x000b326f) area_fmrd2_info_pane_t4

0x0003,

0xfeef,	// (0x000ba484) area_fmrd2_info_pane_t

0x8ce8,	// (0x000b327d) fmrd2_indi_pane_t1

0x8cf8,	// (0x000b328d) fmrd2_indi_pane_t2

0x8d08,	// (0x000b329d) fmrd2_indi_pane_t3

0x0002,

0xfef8,	// (0x000ba48d) fmrd2_indi_pane_t

0xe3f4,	// (0x000b8989) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe3f4,	// (0x000b8989) list_single_fs_bigclock_indicator_pane_g5

0xe4a4,	// (0x000b8a39) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe4a4,	// (0x000b8a39) list_single_fs_bigclock_indicator_pane_t5

0x84b1,	// (0x000b2a46) aid_cell_bcale_month_pane_ParamLimits

0x84b1,	// (0x000b2a46) aid_cell_bcale_month_pane

0x84cf,	// (0x000b2a64) bcale_month_pane_ParamLimits

0x84cf,	// (0x000b2a64) bcale_month_pane

0x84f3,	// (0x000b2a88) bcale_preview_pane_ParamLimits

0x84f3,	// (0x000b2a88) bcale_preview_pane

0xeca5,	// (0x000b923a) list_single_fs_bigclock_pane_t1_ParamLimits

0xecc4,	// (0x000b9259) list_single_fs_bigclock_pane_t2_ParamLimits

0xecc4,	// (0x000b9259) list_single_fs_bigclock_pane_t2

0x0001,

0xfe7a,	// (0x000ba40f) list_single_fs_bigclock_pane_t_ParamLimits

0xfe7a,	// (0x000ba40f) list_single_fs_bigclock_pane_t

0xeefb,	// (0x000b9490) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfee3,	// (0x000ba478) main_fs_bigclock_unlock_btn_pane_g

0x8d18,	// (0x000b32ad) aid_dia3_key_size_ParamLimits

0x8d18,	// (0x000b32ad) aid_dia3_key_size

0x8d27,	// (0x000b32bc) aid_dia3_listrow_size_ParamLimits

0x8d27,	// (0x000b32bc) aid_dia3_listrow_size

0x8d3c,	// (0x000b32d1) dia3_keypad_fun_pane_ParamLimits

0x8d3c,	// (0x000b32d1) dia3_keypad_fun_pane

0x8d58,	// (0x000b32ed) dia3_keypad_num_pane_ParamLimits

0x8d58,	// (0x000b32ed) dia3_keypad_num_pane

0x8d73,	// (0x000b3308) dia3_listscroll_pane_ParamLimits

0x8d73,	// (0x000b3308) dia3_listscroll_pane

0x8d86,	// (0x000b331b) dia3_numentry_pane_ParamLimits

0x8d86,	// (0x000b331b) dia3_numentry_pane

0xef11,	// (0x000b94a6) dia3_list_pane

0xef1c,	// (0x000b94b1) scroll_pane_cp12

0x92ff,	// (0x000b3894) bg_dia3_numentry_pane

0x8d9a,	// (0x000b332f) dia3_numentry_pane_t1

0x8da9,	// (0x000b333e) cell_dia3_key_num_pane

0x8db1,	// (0x000b3346) cell_dia3_key0_fun_pane_ParamLimits

0x8db1,	// (0x000b3346) cell_dia3_key0_fun_pane

0x8dc5,	// (0x000b335a) cell_dia3_key1_fun_pane_ParamLimits

0x8dc5,	// (0x000b335a) cell_dia3_key1_fun_pane

0x8ddd,	// (0x000b3372) dia3_listrow_pane

0xe102,	// (0x000b8697) bg_dia3_numentry_pane_g1

0x92ff,	// (0x000b3894) bg_button_pane_cp21

0xef27,	// (0x000b94bc) cell_dia3_key_num_pane_t1

0xef35,	// (0x000b94ca) cell_dia3_key_num_pane_t2

0xef44,	// (0x000b94d9) cell_dia3_key_num_pane_t3

0xef53,	// (0x000b94e8) cell_dia3_key_num_pane_t4

0x0003,

0xfeff,	// (0x000ba494) cell_dia3_key_num_pane_t

0x92ff,	// (0x000b3894) bg_button_pane_cp19

0x8def,	// (0x000b3384) cell_dia3_key0_fun_pane_g1

0x92ff,	// (0x000b3894) bg_button_pane_cp20

0x8df7,	// (0x000b338c) cell_dia3_key1_fun_pane_g1

0x8dff,	// (0x000b3394) area_left_week_number_pane

0x8e0b,	// (0x000b33a0) area_top_day_name_pane

0x8e1e,	// (0x000b33b3) frame_month_view_pane

0xef62,	// (0x000b94f7) grid_month_view_pane

0x8e31,	// (0x000b33c6) cell_top_day_name_pane_ParamLimits

0x8e31,	// (0x000b33c6) cell_top_day_name_pane

0x8e5e,	// (0x000b33f3) cell_area_left_week_number_pane_ParamLimits

0x8e5e,	// (0x000b33f3) cell_area_left_week_number_pane

0x8e72,	// (0x000b3407) cell_month_view_pane_ParamLimits

0x8e72,	// (0x000b3407) cell_month_view_pane

0xef70,	// (0x000b9505) frm_month_g1

0x8e9f,	// (0x000b3434) frm_month_g2

0x8eb2,	// (0x000b3447) frm_month_g3

0x8ec5,	// (0x000b345a) frm_month_g4

0x8ed8,	// (0x000b346d) frm_month_g5

0x8eeb,	// (0x000b3480) frm_month_g6

0x8efe,	// (0x000b3493) frm_month_g7

0xef7d,	// (0x000b9512) frm_month_g8

0x8f11,	// (0x000b34a6) frm_month_g9

0x8f21,	// (0x000b34b6) frm_month_g10

0x8f31,	// (0x000b34c6) frm_month_g11

0x8f41,	// (0x000b34d6) frm_month_g12

0x8f53,	// (0x000b34e8) frm_month_g13

0x8f65,	// (0x000b34fa) frm_month_g14

0x8f79,	// (0x000b350e) frm_month_g15

0x8f8d,	// (0x000b3522) frm_month_g16

0x000f,

0xff08,	// (0x000ba49d) frm_month_g

0xef8a,	// (0x000b951f) cell_top_day_name_pane_t1

0x8fa1,	// (0x000b3536) cell_area_left_week_number_pane_g1

0x8fad,	// (0x000b3542) cell_area_left_week_number_pane_t1

0xce24,	// (0x000b73b9) cell_month_view_pane_g1

0x8fc0,	// (0x000b3555) cell_month_view_pane_t1

0x92ff,	// (0x000b3894) main_fps_pane

0xe6b8,	// (0x000b8c4d) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe6b8,	// (0x000b8c4d) cmail_ddmenu_btn02_pane_cp1

0xe6d4,	// (0x000b8c69) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe6d4,	// (0x000b8c69) cmail_ddmenu_btn02_pane_cp2

0x8715,	// (0x000b2caa) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x8715,	// (0x000b2caa) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe2d,	// (0x000ba3c2) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe2d,	// (0x000ba3c2) cmail_ddmenu_btn02_pane_g

0x8733,	// (0x000b2cc8) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x8733,	// (0x000b2cc8) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe32,	// (0x000ba3c7) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe32,	// (0x000ba3c7) cmail_ddmenu_btn02_pane_t

0x8fd3,	// (0x000b3568) fps_text_pane_ParamLimits

0x8fd3,	// (0x000b3568) fps_text_pane

0x8fea,	// (0x000b357f) main_fps_pane_g1_ParamLimits

0x8fea,	// (0x000b357f) main_fps_pane_g1

0x9004,	// (0x000b3599) wait_bar_pane_cp010_ParamLimits

0x9004,	// (0x000b3599) wait_bar_pane_cp010

0x9015,	// (0x000b35aa) fps_text_pane_t1_ParamLimits

0x9015,	// (0x000b35aa) fps_text_pane_t1

0xd5d8,	// (0x000b7b6d) cam4_image_uncrop_pane_g1

0xd5e1,	// (0x000b7b76) cam4_image_uncrop_pane_g2

0x5a5b,	// (0x000afff0) cam4_image_uncrop_pane_g3

0x5a64,	// (0x000afff9) cam4_image_uncrop_pane_g4

0x0003,

0xf8ee,	// (0x000b9e83) cam4_image_uncrop_pane_g

0x8ddd,	// (0x000b3372) dia3_listrow_pane_ParamLimits

0x92ff,	// (0x000b3894) main_phob2_pane

0x82e5,	// (0x000b287a) cell_tport_appsw_pane_cp02_ParamLimits

0x82e5,	// (0x000b287a) cell_tport_appsw_pane_cp02

0x82f9,	// (0x000b288e) cell_tport_appsw_pane_cp03_ParamLimits

0x82f9,	// (0x000b288e) cell_tport_appsw_pane_cp03

0x92ff,	// (0x000b3894) phob2_contact_card_pane

0x92ff,	// (0x000b3894) phob2_listscroll_pane

0xef9d,	// (0x000b9532) phob2_list_pane

0xefa5,	// (0x000b953a) scroll_pane_cp034

0x902d,	// (0x000b35c2) phob2_cc_data_pane_ParamLimits

0x902d,	// (0x000b35c2) phob2_cc_data_pane

0x904c,	// (0x000b35e1) phob2_cc_listscroll_pane_ParamLimits

0x904c,	// (0x000b35e1) phob2_cc_listscroll_pane

0x906a,	// (0x000b35ff) list_double_large_graphic_phob2_pane_ParamLimits

0x906a,	// (0x000b35ff) list_double_large_graphic_phob2_pane

0x907d,	// (0x000b3612) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x907d,	// (0x000b3612) list_double_large_graphic_phob2_pane_g1

0x9093,	// (0x000b3628) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x9093,	// (0x000b3628) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff29,	// (0x000ba4be) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff29,	// (0x000ba4be) list_double_large_graphic_phob2_pane_g

0x909f,	// (0x000b3634) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x909f,	// (0x000b3634) list_double_large_graphic_phob2_pane_t1

0x90b5,	// (0x000b364a) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x90b5,	// (0x000b364a) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff2e,	// (0x000ba4c3) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff2e,	// (0x000ba4c3) list_double_large_graphic_phob2_pane_t

0x92ff,	// (0x000b3894) list_highlight_pane_cp024

0x90ca,	// (0x000b365f) phob2_cc_button_pane

0x90d2,	// (0x000b3667) phob2_cc_data_pane_g1_ParamLimits

0x90d2,	// (0x000b3667) phob2_cc_data_pane_g1

0x90e7,	// (0x000b367c) phob2_cc_data_pane_g2_ParamLimits

0x90e7,	// (0x000b367c) phob2_cc_data_pane_g2

0x0001,

0xff33,	// (0x000ba4c8) phob2_cc_data_pane_g_ParamLimits

0xff33,	// (0x000ba4c8) phob2_cc_data_pane_g

0x90f7,	// (0x000b368c) phob2_cc_data_pane_t1_ParamLimits

0x90f7,	// (0x000b368c) phob2_cc_data_pane_t1

0x910f,	// (0x000b36a4) phob2_cc_data_pane_t2_ParamLimits

0x910f,	// (0x000b36a4) phob2_cc_data_pane_t2

0x9127,	// (0x000b36bc) phob2_cc_data_pane_t3_ParamLimits

0x9127,	// (0x000b36bc) phob2_cc_data_pane_t3

0x0002,

0xff38,	// (0x000ba4cd) phob2_cc_data_pane_t_ParamLimits

0xff38,	// (0x000ba4cd) phob2_cc_data_pane_t

0xefad,	// (0x000b9542) phob2_cc_list_pane_ParamLimits

0xefad,	// (0x000b9542) phob2_cc_list_pane

0xd947,	// (0x000b7edc) scroll_pane_cp035_ParamLimits

0xd947,	// (0x000b7edc) scroll_pane_cp035

0xa55d,	// (0x000b4af2) bg_button_pane_cp033

0xefb9,	// (0x000b954e) phob2_cc_button_pane_g1

0xefc5,	// (0x000b955a) phob2_cc_button_pane_t1

0xefda,	// (0x000b956f) phob2_cc_button_pane_t2

0x0001,

0xff3f,	// (0x000ba4d4) phob2_cc_button_pane_t

0x913f,	// (0x000b36d4) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x913f,	// (0x000b36d4) list_double_large_graphic_phob2_cc_pane

0x9152,	// (0x000b36e7) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9152,	// (0x000b36e7) list_double_large_graphic_phob2_cc_pane_g1

0x915e,	// (0x000b36f3) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x915e,	// (0x000b36f3) list_double_large_graphic_phob2_cc_pane_g2

0x916a,	// (0x000b36ff) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x916a,	// (0x000b36ff) list_double_large_graphic_phob2_cc_pane_g3

0x9176,	// (0x000b370b) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x9176,	// (0x000b370b) list_double_large_graphic_phob2_cc_pane_g4

0x9182,	// (0x000b3717) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x9182,	// (0x000b3717) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff44,	// (0x000ba4d9) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff44,	// (0x000ba4d9) list_double_large_graphic_phob2_cc_pane_g

0x918e,	// (0x000b3723) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x918e,	// (0x000b3723) list_double_large_graphic_phob2_cc_pane_t1

0x91b7,	// (0x000b374c) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x91b7,	// (0x000b374c) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff4f,	// (0x000ba4e4) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff4f,	// (0x000ba4e4) list_double_large_graphic_phob2_cc_pane_t

0xefec,	// (0x000b9581) list_highlight_pane_cp025_ParamLimits

0xefec,	// (0x000b9581) list_highlight_pane_cp025

0xa55d,	// (0x000b4af2) bg_button_pane_cp033_ParamLimits

0xefb9,	// (0x000b954e) phob2_cc_button_pane_g1_ParamLimits

0xefc5,	// (0x000b955a) phob2_cc_button_pane_t1_ParamLimits

0xefda,	// (0x000b956f) phob2_cc_button_pane_t2_ParamLimits

0xff3f,	// (0x000ba4d4) phob2_cc_button_pane_t_ParamLimits

0x0333,	// (0x000aa8c8) popup_wgtman_window

0xd753,	// (0x000b7ce8) scroll_pane_cp038

0x8b29,	// (0x000b30be) wgtman_btn_pane_cp_01_ParamLimits

0x8b29,	// (0x000b30be) wgtman_btn_pane_cp_01

0xeffa,	// (0x000b958f) wgtman_content_pane

0xf003,	// (0x000b9598) wgtman_heading_pane

0x92ff,	// (0x000b3894) bg_heading_pane_cp02

0xf00c,	// (0x000b95a1) wgtman_heading_pane_g1

0xf014,	// (0x000b95a9) wgtman_heading_pane_t1

0xf022,	// (0x000b95b7) scroll_pane_cp036

0xf02a,	// (0x000b95bf) wgtman_list_pane

0xe598,	// (0x000b8b2d) wgtman_list_pane_t1_ParamLimits

0xe598,	// (0x000b8b2d) wgtman_list_pane_t1

0x9cb3,	// (0x000b4248) cam4_grid_pane

0x671b,	// (0x000b0cb0) bg_button_pane_cp015_ParamLimits

0x672f,	// (0x000b0cc4) bg_button_pane_cp016_ParamLimits

0x6742,	// (0x000b0cd7) bg_button_pane_cp017_ParamLimits

0x679a,	// (0x000b0d2f) popup_vitu2_query_window_g3_ParamLimits

0x679a,	// (0x000b0d2f) popup_vitu2_query_window_g3

0x6857,	// (0x000b0dec) popup_vitu2_query_window_t6_ParamLimits

0x6857,	// (0x000b0dec) popup_vitu2_query_window_t6

0x6882,	// (0x000b0e17) popup_vitu2_query_window_t7_ParamLimits

0x6882,	// (0x000b0e17) popup_vitu2_query_window_t7

0xd5d8,	// (0x000b7b6d) cam4_grid_pane_g1

0xd5e1,	// (0x000b7b76) cam4_grid_pane_g2

0xf032,	// (0x000b95c7) cam4_grid_pane_g3

0xf03b,	// (0x000b95d0) cam4_grid_pane_g4

0x0003,

0xff54,	// (0x000ba4e9) cam4_grid_pane_g

0x136c,	// (0x000ab901) aid_placing_vt_slider_lsc_ParamLimits

0x1669,	// (0x000abbfe) vidtel_button_pane_ParamLimits

0x1669,	// (0x000abbfe) vidtel_button_pane

0xf046,	// (0x000b95db) bg_button_pane_cp034

0x91e0,	// (0x000b3775) vidtel_button_pane_g1

0xf050,	// (0x000b95e5) vidtel_button_pane_t1

0xd855,	// (0x000b7dea) aid_size_vtel_slider_touch

0xd947,	// (0x000b7edc) scroll_pane_cp039

0xe140,	// (0x000b86d5) ncim_query_button_pane_cp01_ParamLimits

0xe15f,	// (0x000b86f4) ncimui_query_pane_g1_ParamLimits

0xa55d,	// (0x000b4af2) input_focus_pane_cp012_ParamLimits

0xe184,	// (0x000b8719) ncim_query_entry_pane_t1_ParamLimits

0xd947,	// (0x000b7edc) scroll_pane_cp039_ParamLimits

0xb1f5,	// (0x000b578a) navi_pane_bcale_mc_g1

0xb1fd,	// (0x000b5792) navi_pane_bcale_mc_t1

0xe71d,	// (0x000b8cb2) main_sp_fs_email_pane_g1

0xe729,	// (0x000b8cbe) main_sp_fs_email_pane_g2

0x0001,

0xfce5,	// (0x000ba27a) main_sp_fs_email_pane_g

0xe97a,	// (0x000b8f0f) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe97a,	// (0x000b8f0f) list_single_cale_mrui_row_pane_g3

0x875b,	// (0x000b2cf0) list_single_recal_day_pane_g5_event_pane

0xaa05,	// (0x000b4f9a) list_single_recal_day_pane_g7

0xf05e,	// (0x000b95f3) list_recal_day_event_pane_cp01

0xf075,	// (0x000b960a) list_recal_vselct_arw_lo_pane_cp01

0xf07d,	// (0x000b9612) list_recal_vselct_arw_up_pane_cp01

0xf085,	// (0x000b961a) list_recal_vselct_pane_cp01

0xd877,	// (0x000b7e0c) list_recal_day_event_pane_cp01_g1

0xaa58,	// (0x000b4fed) list_recal_day_event_pane_cp01_t1

0xaa0d,	// (0x000b4fa2) list_single_recal_day_pane_t1_ParamLimits

0xaa1f,	// (0x000b4fb4) list_single_recal_day_pane_t2_ParamLimits

0xfe42,	// (0x000ba3d7) list_single_recal_day_pane_t_ParamLimits

0xa10d,	// (0x000b46a2) bg_notes_pane_ParamLimits

0xa1cf,	// (0x000b4764) list_notes_pane_ParamLimits

0x0667,	// (0x000aabfc) scroll_pane_cp06_ParamLimits

0xa1f1,	// (0x000b4786) main_notes_pane_ParamLimits

0x92ff,	// (0x000b3894) main_welc_pane

0x91e8,	// (0x000b377d) main_welc_body_pane_ParamLimits

0x91e8,	// (0x000b377d) main_welc_body_pane

0x9205,	// (0x000b379a) main_welc_opti_pane_ParamLimits

0x9205,	// (0x000b379a) main_welc_opti_pane

0x924e,	// (0x000b37e3) main_welc_pane_t1_ParamLimits

0x924e,	// (0x000b37e3) main_welc_pane_t1

0x9270,	// (0x000b3805) main_welc_body_row_pane_ParamLimits

0x9270,	// (0x000b3805) main_welc_body_row_pane

0xf067,	// (0x000b95fc) main_welc_opti_row_pane_ParamLimits

0xf067,	// (0x000b95fc) main_welc_opti_row_pane

0xf08f,	// (0x000b9624) main_welc_opti_row_pane_g1

0x9286,	// (0x000b381b) main_welc_opti_row_pane_t1

0xf097,	// (0x000b962c) main_welc_body_row_pane_t1

0xed7b,	// (0x000b9310) popup_notif_wgt_heading_pane

0xed95,	// (0x000b932a) aid_size_list_notif_wgt_del_ParamLimits

0xeda2,	// (0x000b9337) list_notif_wgt_row_pane_g1_ParamLimits

0xedae,	// (0x000b9343) list_notif_wgt_row_pane_g2_ParamLimits

0xedc2,	// (0x000b9357) list_notif_wgt_row_pane_g3_ParamLimits

0xfea9,	// (0x000ba43e) list_notif_wgt_row_pane_g_ParamLimits

0xedcf,	// (0x000b9364) list_notif_wgt_row_pane_t1_ParamLimits

0xede5,	// (0x000b937a) list_notif_wgt_row_pane_t2_ParamLimits

0xedf7,	// (0x000b938c) list_notif_wgt_row_pane_t3_ParamLimits

0xfeb0,	// (0x000ba445) list_notif_wgt_row_pane_t_ParamLimits

0x8bc3,	// (0x000b3158) listrow_wgtman_pane_g1_ParamLimits

0x8bd0,	// (0x000b3165) listrow_wgtman_pane_g2_ParamLimits

0xfed9,	// (0x000ba46e) listrow_wgtman_pane_g_ParamLimits

0x8bee,	// (0x000b3183) listrow_wgtman_pane_t1_ParamLimits

0x8c06,	// (0x000b319b) listrow_wgtman_pane_t2_ParamLimits

0xfede,	// (0x000ba473) listrow_wgtman_pane_t_ParamLimits

0x8c2c,	// (0x000b31c1) wait_bar_pane_cp09_ParamLimits

0x92ff,	// (0x000b3894) bg_popup_heading_pane_cp02

0xf0a6,	// (0x000b963b) popup_notif_wgt_heading_pane_g1

0xf0ae,	// (0x000b9643) popup_notif_wgt_heading_pane_t1

0x92ff,	// (0x000b3894) main_vids_pane

0x92ff,	// (0x000b3894) vids_listscroll_pane

0x9295,	// (0x000b382a) scroll_pane_cp040

0x92ff,	// (0x000b3894) vids_list_pane

0x92a0,	// (0x000b3835) vids_list_double_pane_ParamLimits

0x92a0,	// (0x000b3835) vids_list_double_pane

0x92b1,	// (0x000b3846) vids_list_double_pane_g1

0x92ba,	// (0x000b384f) vids_list_double_pane_t1

0x92c9,	// (0x000b385e) vids_list_double_pane_t2

0x0001,

0xff62,	// (0x000ba4f7) vids_list_double_pane_t

0x9367,	// (0x000b38fc) main_ncimui_pane_ParamLimits

0x74c6,	// (0x000b1a5b) main_ncimui_pane_g1_ParamLimits

0x74d2,	// (0x000b1a67) main_ncimui_pane_g2_ParamLimits

0x74d2,	// (0x000b1a67) main_ncimui_pane_g2

0x0001,

0xfbea,	// (0x000ba17f) main_ncimui_pane_g_ParamLimits

0xfbea,	// (0x000ba17f) main_ncimui_pane_g

0x9224,	// (0x000b37b9) main_welc_pane_g1_ParamLimits

0x9224,	// (0x000b37b9) main_welc_pane_g1

0x9239,	// (0x000b37ce) main_welc_pane_g2_ParamLimits

0x9239,	// (0x000b37ce) main_welc_pane_g2

0x0001,

0xff5d,	// (0x000ba4f2) main_welc_pane_g_ParamLimits

0xff5d,	// (0x000ba4f2) main_welc_pane_g

0xa10d,	// (0x000b46a2) listscroll_mce_pane_ParamLimits

0xb34a,	// (0x000b58df) wait_bar_pane_cp10

0xc7ae,	// (0x000b6d43) main_cale_day_pane_ParamLimits

0xc7ae,	// (0x000b6d43) main_cale_week_pane_ParamLimits

0xa10d,	// (0x000b46a2) main_messa_pane_ParamLimits

0x4d68,	// (0x000af2fd) main_clock2_btn_pane_ParamLimits

0x4d68,	// (0x000af2fd) main_clock2_btn_pane

0xcfac,	// (0x000b7541) main_clock2_btn_pane_cp01_ParamLimits

0xcfac,	// (0x000b7541) main_clock2_btn_pane_cp01

0xe94b,	// (0x000b8ee0) list_cale_mrui_pane_ParamLimits

0xee3b,	// (0x000b93d0) main_cf0_pane_g2

0x0001,

0xfeb7,	// (0x000ba44c) main_cf0_pane_g

0x8dff,	// (0x000b3394) area_left_week_number_pane_ParamLimits

0x8e0b,	// (0x000b33a0) area_top_day_name_pane_ParamLimits

0x8e1e,	// (0x000b33b3) frame_month_view_pane_ParamLimits

0xef62,	// (0x000b94f7) grid_month_view_pane_ParamLimits

0xef70,	// (0x000b9505) frm_month_g1_ParamLimits

0x8e9f,	// (0x000b3434) frm_month_g2_ParamLimits

0x8eb2,	// (0x000b3447) frm_month_g3_ParamLimits

0x8ec5,	// (0x000b345a) frm_month_g4_ParamLimits

0x8ed8,	// (0x000b346d) frm_month_g5_ParamLimits

0x8eeb,	// (0x000b3480) frm_month_g6_ParamLimits

0x8efe,	// (0x000b3493) frm_month_g7_ParamLimits

0xef7d,	// (0x000b9512) frm_month_g8_ParamLimits

0x8f11,	// (0x000b34a6) frm_month_g9_ParamLimits

0x8f21,	// (0x000b34b6) frm_month_g10_ParamLimits

0x8f31,	// (0x000b34c6) frm_month_g11_ParamLimits

0x8f41,	// (0x000b34d6) frm_month_g12_ParamLimits

0x8f53,	// (0x000b34e8) frm_month_g13_ParamLimits

0x8f65,	// (0x000b34fa) frm_month_g14_ParamLimits

0x8f79,	// (0x000b350e) frm_month_g15_ParamLimits

0x8f8d,	// (0x000b3522) frm_month_g16_ParamLimits

0xff08,	// (0x000ba49d) frm_month_g_ParamLimits

0xef8a,	// (0x000b951f) cell_top_day_name_pane_t1_ParamLimits

0x8fa1,	// (0x000b3536) cell_area_left_week_number_pane_g1_ParamLimits

0x8fad,	// (0x000b3542) cell_area_left_week_number_pane_t1_ParamLimits

0xce24,	// (0x000b73b9) cell_month_view_pane_g1_ParamLimits

0x8fc0,	// (0x000b3555) cell_month_view_pane_t1_ParamLimits

0xa105,	// (0x000b469a) main_clock2_btn_pane_g1

0xf0bc,	// (0x000b9651) main_clock2_btn_pane_t1

0xa55d,	// (0x000b4af2) listscroll_cmail_pane_ParamLimits

0xe71d,	// (0x000b8cb2) main_sp_fs_email_pane_g1_ParamLimits

0xe729,	// (0x000b8cbe) main_sp_fs_email_pane_g2_ParamLimits

0xfce5,	// (0x000ba27a) main_sp_fs_email_pane_g_ParamLimits

0xeae9,	// (0x000b907e) list_recal_day_pane_ParamLimits

0xeafa,	// (0x000b908f) mian_recal_day_pane_t1

0x7f69,	// (0x000b24fe) list_single_dyc_row_text_pane_t4_ParamLimits

0x7f69,	// (0x000b24fe) list_single_dyc_row_text_pane_t4

0x7fb2,	// (0x000b2547) list_single_dyc_row_text_pane_t5_ParamLimits

0x7fb2,	// (0x000b2547) list_single_dyc_row_text_pane_t5

0xa773,	// (0x000b4d08) list_single_dyc_row_text_pane_t6_ParamLimits

0xa773,	// (0x000b4d08) list_single_dyc_row_text_pane_t6

0xacd9,	// (0x000b526e) aid_mgn_list_cale_time_pane

0x9367,	// (0x000b38fc) main_gallery2_pane_ParamLimits

0xcfc2,	// (0x000b7557) main_clock2_pane_cp01_t1

0xcfd0,	// (0x000b7565) main_clock2_pane_cp01_t3

0x0001,

0xf7c4,	// (0x000b9d59) main_clock2_pane_cp01_t

0x0a12,	// (0x000aafa7) cale_week_scroll_pane_g16_ParamLimits

0x0a12,	// (0x000aafa7) cale_week_scroll_pane_g16

0xa3cd,	// (0x000b4962) vorec_slider_pane
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

} // end of namespace AknLayoutScalable_Abrw_pnl4_apps_nhd4_lsc_tch_Large
