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

#include "aknlayoutscalable_elaf_pvl4_apps_vga4_lsc_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pvl4_apps_vga4_lsc_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x0000f7bb };

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
0xfc13,	// (0x0000f3ce) Screen

0xfc1f,	// (0x0000f3da) application_window

0xfc5b,	// (0x0000f416) area_bottom_pane_ParamLimits

0xfc5b,	// (0x0000f416) area_bottom_pane

0xfc94,	// (0x0000f44f) area_top_pane_ParamLimits

0xfc94,	// (0x0000f44f) area_top_pane

0x969e,	// (0x00018e59) call_video_uplink_pane_ParamLimits

0x969e,	// (0x00018e59) call_video_uplink_pane

0xfd22,	// (0x0000f4dd) main_pane_ParamLimits

0xfd22,	// (0x0000f4dd) main_pane

0xc08f,	// (0x0001b84a) context_pane

0x3588,	// (0x00012d43) navi_pane

0x35bc,	// (0x00012d77) popup_cale_events_window_ParamLimits

0x35bc,	// (0x00012d77) popup_cale_events_window

0xc0a2,	// (0x0001b85d) popup_mup_playback_window

0x35d4,	// (0x00012d8f) signal_pane

0x9e54,	// (0x0001960f) main_browser_pane

0xa071,	// (0x0001982c) main_burst_pane

0x32a0,	// (0x00012a5b) main_calc_pane

0xc01d,	// (0x0001b7d8) main_cale_day_pane

0x034f,	// (0x0000fb0a) main_cale_month_pane

0xc01d,	// (0x0001b7d8) main_cale_week_pane

0xa071,	// (0x0001982c) main_call_pane

0x9b12,	// (0x000192cd) main_call_poc_pane

0xa071,	// (0x0001982c) main_camera_pane

0xa071,	// (0x0001982c) main_chi_dic_pane

0xa914,	// (0x0001a0cf) main_clock_pane

0x9b12,	// (0x000192cd) main_fmradio_pane

0xa071,	// (0x0001982c) main_graph_messa_pane

0x9b12,	// (0x000192cd) main_help_pane

0x9e54,	// (0x0001960f) main_im_pane

0x9d6d,	// (0x00019528) main_image_pane_ParamLimits

0x9d6d,	// (0x00019528) main_image_pane

0x9b12,	// (0x000192cd) main_location2_pane

0xa071,	// (0x0001982c) main_location_pane

0x9d6d,	// (0x00019528) main_messa_pane

0x9b12,	// (0x000192cd) main_mp2_pane

0xa071,	// (0x0001982c) main_mp_pane

0x9b12,	// (0x000192cd) main_msg_pane

0x9b12,	// (0x000192cd) main_mup_eq_pane

0x9b12,	// (0x000192cd) main_mup_pane

0x9e54,	// (0x0001960f) main_notes_pane

0x9b12,	// (0x000192cd) main_pec_pane

0x9b12,	// (0x000192cd) main_phob_pane

0x9b12,	// (0x000192cd) main_pinb_pane

0x9b12,	// (0x000192cd) main_postcard_pane

0x9b12,	// (0x000192cd) main_qdial_pane

0xa071,	// (0x0001982c) main_skin_pane

0x9b12,	// (0x000192cd) main_smil2_pane

0xa071,	// (0x0001982c) main_smil_pane

0xa071,	// (0x0001982c) main_video_pane

0xa071,	// (0x0001982c) main_video_tele_pane

0x9d6d,	// (0x00019528) main_viewer_pane_ParamLimits

0x9d6d,	// (0x00019528) main_viewer_pane

0xa071,	// (0x0001982c) main_vorec_pane

0x32f6,	// (0x00012ab1) popup_blid_sat_info_window_ParamLimits

0x32f6,	// (0x00012ab1) popup_blid_sat_info_window

0x335a,	// (0x00012b15) popup_dyc_status_message_window_ParamLimits

0x335a,	// (0x00012b15) popup_dyc_status_message_window

0x3374,	// (0x00012b2f) popup_grid_large_graphic_window_ParamLimits

0x3374,	// (0x00012b2f) popup_grid_large_graphic_window

0x3436,	// (0x00012bf1) popup_loc_request_window_ParamLimits

0x3436,	// (0x00012bf1) popup_loc_request_window

0x355c,	// (0x00012d17) popup_wml_address_window_ParamLimits

0x355c,	// (0x00012d17) popup_wml_address_window

0x30de,	// (0x00012899) call_muted_g1

0x2d6f,	// (0x0001252a) popup_call_audio_conf_window_ParamLimits

0x2d6f,	// (0x0001252a) popup_call_audio_conf_window

0x30ee,	// (0x000128a9) popup_call_audio_first_window_ParamLimits

0x30ee,	// (0x000128a9) popup_call_audio_first_window

0x3164,	// (0x0001291f) popup_call_audio_in_window_ParamLimits

0x3164,	// (0x0001291f) popup_call_audio_in_window

0x31a0,	// (0x0001295b) popup_call_audio_out_window_ParamLimits

0x31a0,	// (0x0001295b) popup_call_audio_out_window

0x31da,	// (0x00012995) popup_call_audio_second_window_ParamLimits

0x31da,	// (0x00012995) popup_call_audio_second_window

0x3230,	// (0x000129eb) popup_call_audio_wait_window_ParamLimits

0x3230,	// (0x000129eb) popup_call_audio_wait_window

0x3265,	// (0x00012a20) popup_number_entry_window_ParamLimits

0x3265,	// (0x00012a20) popup_number_entry_window

0x96ca,	// (0x00018e85) bg_popup_call_pane_cp05_ParamLimits

0x96ca,	// (0x00018e85) bg_popup_call_pane_cp05

0x96ea,	// (0x00018ea5) popup_number_entry_window_t1

0x96fd,	// (0x00018eb8) popup_number_entry_window_t2

0x970f,	// (0x00018eca) popup_number_entry_window_t3

0x0003,

0xf0c6,	// (0x0001e881) popup_number_entry_window_t

0x9756,	// (0x00018f11) text_title_cp2

0x9769,	// (0x00018f24) bg_popup_call_pane_cp_ParamLimits

0x9769,	// (0x00018f24) bg_popup_call_pane_cp

0x9777,	// (0x00018f32) call_thumbnail_pane

0x977f,	// (0x00018f3a) popup_call_audio_in_window_g1_ParamLimits

0x977f,	// (0x00018f3a) popup_call_audio_in_window_g1

0x978b,	// (0x00018f46) popup_call_audio_in_window_g2_ParamLimits

0x978b,	// (0x00018f46) popup_call_audio_in_window_g2

0x9797,	// (0x00018f52) popup_call_audio_in_window_g3_ParamLimits

0x9797,	// (0x00018f52) popup_call_audio_in_window_g3

0x0002,

0xf0cf,	// (0x0001e88a) popup_call_audio_in_window_g_ParamLimits

0xf0cf,	// (0x0001e88a) popup_call_audio_in_window_g

0x97a3,	// (0x00018f5e) popup_call_audio_in_window_t1_ParamLimits

0x97a3,	// (0x00018f5e) popup_call_audio_in_window_t1

0x97bf,	// (0x00018f7a) popup_call_audio_in_window_t2_ParamLimits

0x97bf,	// (0x00018f7a) popup_call_audio_in_window_t2

0x97db,	// (0x00018f96) popup_call_audio_in_window_t3_ParamLimits

0x97db,	// (0x00018f96) popup_call_audio_in_window_t3

0x0002,

0xf0d6,	// (0x0001e891) popup_call_audio_in_window_t_ParamLimits

0xf0d6,	// (0x0001e891) popup_call_audio_in_window_t

0x9769,	// (0x00018f24) bg_popup_call_pane_cp01_ParamLimits

0x9769,	// (0x00018f24) bg_popup_call_pane_cp01

0x9777,	// (0x00018f32) call_thumbnail_pane_cp02

0x97ee,	// (0x00018fa9) call_type_pane_cp022

0x97f6,	// (0x00018fb1) popup_call_audio_out_window_g1_ParamLimits

0x97f6,	// (0x00018fb1) popup_call_audio_out_window_g1

0x9808,	// (0x00018fc3) popup_call_audio_out_window_g2_ParamLimits

0x9808,	// (0x00018fc3) popup_call_audio_out_window_g2

0x9814,	// (0x00018fcf) popup_call_audio_out_window_g3_ParamLimits

0x9814,	// (0x00018fcf) popup_call_audio_out_window_g3

0x0002,

0xf0dd,	// (0x0001e898) popup_call_audio_out_window_g_ParamLimits

0xf0dd,	// (0x0001e898) popup_call_audio_out_window_g

0x9826,	// (0x00018fe1) popup_call_audio_out_window_t1_ParamLimits

0x9826,	// (0x00018fe1) popup_call_audio_out_window_t1

0x983e,	// (0x00018ff9) popup_call_audio_out_window_t2_ParamLimits

0x983e,	// (0x00018ff9) popup_call_audio_out_window_t2

0x0001,

0xf0e4,	// (0x0001e89f) popup_call_audio_out_window_t_ParamLimits

0xf0e4,	// (0x0001e89f) popup_call_audio_out_window_t

0x9853,	// (0x0001900e) bg_popup_call_pane_ParamLimits

0x9853,	// (0x0001900e) bg_popup_call_pane

0xfeab,	// (0x0000f666) call_thumbnail_pane_cp_ParamLimits

0xfeab,	// (0x0000f666) call_thumbnail_pane_cp

0x98d7,	// (0x00019092) call_type_pane_cp01_ParamLimits

0x98d7,	// (0x00019092) call_type_pane_cp01

0x991b,	// (0x000190d6) popup_call_audio_first_window_g1_ParamLimits

0x991b,	// (0x000190d6) popup_call_audio_first_window_g1

0x9967,	// (0x00019122) popup_call_audio_first_window_g2_ParamLimits

0x9967,	// (0x00019122) popup_call_audio_first_window_g2

0x0001,

0xf0e9,	// (0x0001e8a4) popup_call_audio_first_window_g_ParamLimits

0xf0e9,	// (0x0001e8a4) popup_call_audio_first_window_g

0x99ab,	// (0x00019166) popup_call_audio_first_window_t1_ParamLimits

0x99ab,	// (0x00019166) popup_call_audio_first_window_t1

0x9a57,	// (0x00019212) popup_call_audio_first_window_t4_ParamLimits

0x9a57,	// (0x00019212) popup_call_audio_first_window_t4

0x9ae3,	// (0x0001929e) popup_call_audio_first_window_t5_ParamLimits

0x9ae3,	// (0x0001929e) popup_call_audio_first_window_t5

0x0002,

0xf0ee,	// (0x0001e8a9) popup_call_audio_first_window_t_ParamLimits

0xf0ee,	// (0x0001e8a9) popup_call_audio_first_window_t

0x9b12,	// (0x000192cd) bg_popup_call_pane_cp02

0x9b1c,	// (0x000192d7) call_type_pane_cp023

0x9b24,	// (0x000192df) popup_call_audio_wait_window_g1

0x9b2c,	// (0x000192e7) popup_call_audio_wait_window_g2

0x0001,

0xf0f5,	// (0x0001e8b0) popup_call_audio_wait_window_g

0x9b34,	// (0x000192ef) popup_call_audio_wait_window_t3

0x9b42,	// (0x000192fd) bg_popup_call_pane_cp03_ParamLimits

0x9b42,	// (0x000192fd) bg_popup_call_pane_cp03

0x9ba2,	// (0x0001935d) call_thumbnail_pane_cp011_ParamLimits

0x9ba2,	// (0x0001935d) call_thumbnail_pane_cp011

0x9bae,	// (0x00019369) call_type_pane_cp034_ParamLimits

0x9bae,	// (0x00019369) call_type_pane_cp034

0x9bea,	// (0x000193a5) popup_call_audio_second_window_g1_ParamLimits

0x9bea,	// (0x000193a5) popup_call_audio_second_window_g1

0x9c26,	// (0x000193e1) popup_call_audio_second_window_g2_ParamLimits

0x9c26,	// (0x000193e1) popup_call_audio_second_window_g2

0x0001,

0xf0fa,	// (0x0001e8b5) popup_call_audio_second_window_g_ParamLimits

0xf0fa,	// (0x0001e8b5) popup_call_audio_second_window_g

0x9c62,	// (0x0001941d) popup_call_audio_second_window_t1_ParamLimits

0x9c62,	// (0x0001941d) popup_call_audio_second_window_t1

0x9ce3,	// (0x0001949e) popup_call_audio_second_window_t2_ParamLimits

0x9ce3,	// (0x0001949e) popup_call_audio_second_window_t2

0x9d19,	// (0x000194d4) popup_call_audio_second_window_t3_ParamLimits

0x9d19,	// (0x000194d4) popup_call_audio_second_window_t3

0x0002,

0xf0ff,	// (0x0001e8ba) popup_call_audio_second_window_t_ParamLimits

0xf0ff,	// (0x0001e8ba) popup_call_audio_second_window_t

0x9b12,	// (0x000192cd) bg_popup_call_pane_cp04

0x9d4f,	// (0x0001950a) list_conf_pane

0x9d57,	// (0x00019512) popup_call_audio_conf_window_t1

0x9d65,	// (0x00019520) call_thumbnail_pane_g1

0x9d6d,	// (0x00019528) bg_pinb_pane_ParamLimits

0x9d6d,	// (0x00019528) bg_pinb_pane

0x9d7b,	// (0x00019536) find_pinb_pane

0x9d84,	// (0x0001953f) listscroll_pinb_pane_ParamLimits

0x9d84,	// (0x0001953f) listscroll_pinb_pane

0x9d93,	// (0x0001954e) pinb_bg_pane_g1

0xfecf,	// (0x0000f68a) pinb_bg_pane_g2

0xfedb,	// (0x0000f696) pinb_bg_pane_g3

0xfee7,	// (0x0000f6a2) pinb_bg_pane_g4

0xfef3,	// (0x0000f6ae) pinb_bg_pane_g5

0xfeff,	// (0x0000f6ba) pinb_bg_pane_g6

0xff0a,	// (0x0000f6c5) pinb_bg_pane_g7

0xff15,	// (0x0000f6d0) pinb_bg_pane_g8

0xff20,	// (0x0000f6db) pinb_bg_pane_g9

0xff2a,	// (0x0000f6e5) pinb_bg_pane_g10

0x0009,

0xf106,	// (0x0001e8c1) pinb_bg_pane_g

0xff47,	// (0x0000f702) grid_pinb_pane

0xff52,	// (0x0000f70d) list_pinb_pane

0xff5d,	// (0x0000f718) scroll_pane_cp01_ParamLimits

0xff5d,	// (0x0000f718) scroll_pane_cp01

0x9d9d,	// (0x00019558) find_pinb_pane_g1_ParamLimits

0x9d9d,	// (0x00019558) find_pinb_pane_g1

0x9db5,	// (0x00019570) find_pinb_pane_t1

0x9dc7,	// (0x00019582) find_pinb_pane_t2

0x0001,

0xf120,	// (0x0001e8db) find_pinb_pane_t

0x9ddc,	// (0x00019597) input_focus_pane_cp01_ParamLimits

0x9ddc,	// (0x00019597) input_focus_pane_cp01

0xff6f,	// (0x0000f72a) cell_pinb_pane_ParamLimits

0xff6f,	// (0x0000f72a) cell_pinb_pane

0xff91,	// (0x0000f74c) cell_pinb_pane_g1_ParamLimits

0xff91,	// (0x0000f74c) cell_pinb_pane_g1

0xffa5,	// (0x0000f760) cell_pinb_pane_g2_ParamLimits

0xffa5,	// (0x0000f760) cell_pinb_pane_g2

0x9de8,	// (0x000195a3) cell_pinb_pane_g3_ParamLimits

0x9de8,	// (0x000195a3) cell_pinb_pane_g3

0x0002,

0xf125,	// (0x0001e8e0) cell_pinb_pane_g_ParamLimits

0xf125,	// (0x0001e8e0) cell_pinb_pane_g

0x9b12,	// (0x000192cd) grid_highlight_pane_cp01

0xffb1,	// (0x0000f76c) list_pinb_item_pane_ParamLimits

0xffb1,	// (0x0000f76c) list_pinb_item_pane

0x9b12,	// (0x000192cd) list_highlight_pane_cp02

0xffc4,	// (0x0000f77f) list_pinb_item_pane_g1_ParamLimits

0xffc4,	// (0x0000f77f) list_pinb_item_pane_g1

0xffd1,	// (0x0000f78c) list_pinb_item_pane_g2_ParamLimits

0xffd1,	// (0x0000f78c) list_pinb_item_pane_g2

0xffdd,	// (0x0000f798) list_pinb_item_pane_g3_ParamLimits

0xffdd,	// (0x0000f798) list_pinb_item_pane_g3

0xffee,	// (0x0000f7a9) list_pinb_item_pane_g4_ParamLimits

0xffee,	// (0x0000f7a9) list_pinb_item_pane_g4

0x0003,

0xf12c,	// (0x0001e8e7) list_pinb_item_pane_g_ParamLimits

0xf12c,	// (0x0001e8e7) list_pinb_item_pane_g

0xfffa,	// (0x0000f7b5) list_pinb_item_pane_t1_ParamLimits

0xfffa,	// (0x0000f7b5) list_pinb_item_pane_t1

0x0031,	// (0x0000f7ec) calc_display_pane

0x0056,	// (0x0000f811) calc_paper_pane

0x0079,	// (0x0000f834) grid_calc_pane

0x9b12,	// (0x000192cd) bg_list_pane_cp01

0x00a7,	// (0x0000f862) clock_g1

0x00af,	// (0x0000f86a) clock_g2

0x0001,

0xf135,	// (0x0001e8f0) clock_g

0x00b7,	// (0x0000f872) clock_t1_ParamLimits

0x00b7,	// (0x0000f872) clock_t1

0x00cc,	// (0x0000f887) clock_t2_ParamLimits

0x00cc,	// (0x0000f887) clock_t2

0x00de,	// (0x0000f899) clock_t3_ParamLimits

0x00de,	// (0x0000f899) clock_t3

0x00f0,	// (0x0000f8ab) clock_t4_ParamLimits

0x00f0,	// (0x0000f8ab) clock_t4

0x0102,	// (0x0000f8bd) clock_t5_ParamLimits

0x0102,	// (0x0000f8bd) clock_t5

0x0117,	// (0x0000f8d2) clock_t6_ParamLimits

0x0117,	// (0x0000f8d2) clock_t6

0x0129,	// (0x0000f8e4) clock_t7_ParamLimits

0x0129,	// (0x0000f8e4) clock_t7

0x013b,	// (0x0000f8f6) clock_t8_ParamLimits

0x013b,	// (0x0000f8f6) clock_t8

0x014f,	// (0x0000f90a) clock_t9_ParamLimits

0x014f,	// (0x0000f90a) clock_t9

0x0008,

0xf13a,	// (0x0001e8f5) clock_t_ParamLimits

0xf13a,	// (0x0001e8f5) clock_t

0x9dfc,	// (0x000195b7) popup_clock_analogue_window_cp02

0x9dfc,	// (0x000195b7) popup_clock_digital_window_cp01

0x9e04,	// (0x000195bf) listscroll_help_pane

0x9b12,	// (0x000192cd) phob_pre_status_pane

0x9e0e,	// (0x000195c9) grid_qdial_pane

0x9d6d,	// (0x00019528) listscroll_mce_pane

0x9d6d,	// (0x00019528) bg_notes_pane

0x9e18,	// (0x000195d3) list_notes_pane

0x0165,	// (0x0000f920) scroll_pane_cp06

0x9e26,	// (0x000195e1) bg_calc_paper_pane

0x9e3a,	// (0x000195f5) list_calc_pane

0x9e54,	// (0x0001960f) bg_calc_display_pane

0x0179,	// (0x0000f934) calc_display_pane_t1

0x018b,	// (0x0000f946) calc_display_pane_t2

0x9e60,	// (0x0001961b) calc_display_pane_t3

0x0002,

0xf14d,	// (0x0001e908) calc_display_pane_t

0x019d,	// (0x0000f958) cell_calc_pane_ParamLimits

0x019d,	// (0x0000f958) cell_calc_pane

0x9e72,	// (0x0001962d) bg_calc_paper_pane_g1

0x9e7e,	// (0x00019639) bg_calc_paper_pane_g2

0x9e8a,	// (0x00019645) bg_calc_paper_pane_g3

0x9e96,	// (0x00019651) bg_calc_paper_pane_g4

0x9ea2,	// (0x0001965d) bg_calc_paper_pane_g5

0x01d8,	// (0x0000f993) bg_calc_paper_pane_g6

0x01e6,	// (0x0000f9a1) bg_calc_paper_pane_g7

0x01f4,	// (0x0000f9af) bg_calc_paper_pane_g8

0x0007,

0xf154,	// (0x0001e90f) bg_calc_paper_pane_g

0x0207,	// (0x0000f9c2) calc_bg_paper_pane_g9

0x021a,	// (0x0000f9d5) list_calc_item_pane_ParamLimits

0x021a,	// (0x0000f9d5) list_calc_item_pane

0x9eae,	// (0x00019669) list_calc_item_pane_g1

0x9ebb,	// (0x00019676) list_calc_item_pane_t1_ParamLimits

0x9ebb,	// (0x00019676) list_calc_item_pane_t1

0x0232,	// (0x0000f9ed) list_calc_item_pane_t2_ParamLimits

0x0232,	// (0x0000f9ed) list_calc_item_pane_t2

0x0001,

0xf165,	// (0x0001e920) list_calc_item_pane_t_ParamLimits

0xf165,	// (0x0001e920) list_calc_item_pane_t

0x9ecd,	// (0x00019688) cell_calc_pane_g1

0x9ed7,	// (0x00019692) grid_highlight_pane_cp02

0x9ef9,	// (0x000196b4) bg_calc_display_pane_g1

0x0264,	// (0x0000fa1f) bg_calc_display_pane_g2

0x026e,	// (0x0000fa29) bg_calc_display_pane_g3

0x0002,

0xf16f,	// (0x0001e92a) bg_calc_display_pane_g

0x0277,	// (0x0000fa32) cell_qdial_pane_ParamLimits

0x0277,	// (0x0000fa32) cell_qdial_pane

0x028b,	// (0x0000fa46) cell_qdial_pane_g1_ParamLimits

0x028b,	// (0x0000fa46) cell_qdial_pane_g1

0x02a1,	// (0x0000fa5c) cell_qdial_pane_g2_ParamLimits

0x02a1,	// (0x0000fa5c) cell_qdial_pane_g2

0x9f02,	// (0x000196bd) cell_qdial_pane_g3_ParamLimits

0x9f02,	// (0x000196bd) cell_qdial_pane_g3

0x0003,

0xf176,	// (0x0001e931) cell_qdial_pane_g_ParamLimits

0xf176,	// (0x0001e931) cell_qdial_pane_g

0x02c8,	// (0x0000fa83) cell_qdial_pane_t1_ParamLimits

0x02c8,	// (0x0000fa83) cell_qdial_pane_t1

0x02e0,	// (0x0000fa9b) cell_qdial_pane_t2_ParamLimits

0x02e0,	// (0x0000fa9b) cell_qdial_pane_t2

0x02f3,	// (0x0000faae) cell_qdial_pane_t3_ParamLimits

0x02f3,	// (0x0000faae) cell_qdial_pane_t3

0x0002,

0xf17f,	// (0x0001e93a) cell_qdial_pane_t_ParamLimits

0xf17f,	// (0x0001e93a) cell_qdial_pane_t

0x9b12,	// (0x000192cd) grid_highlight_pane_cp04

0x9f0e,	// (0x000196c9) thumbnail_qdial_pane_ParamLimits

0x9f0e,	// (0x000196c9) thumbnail_qdial_pane

0x9f6a,	// (0x00019725) list_help_pane

0x9f73,	// (0x0001972e) scroll_pane_cp02

0x0306,	// (0x0000fac1) help_list_pane_t1_ParamLimits

0x0306,	// (0x0000fac1) help_list_pane_t1

0x9f7c,	// (0x00019737) bg_notes_pane_g2

0x9f84,	// (0x0001973f) bg_notes_pane_g3

0x9f8c,	// (0x00019747) notes_bg_pane_g1

0x9f94,	// (0x0001974f) notes_bg_pane_g4

0x9f9c,	// (0x00019757) notes_bg_pane_g5

0x9fa4,	// (0x0001975f) notes_bg_pane_g6

0x9fac,	// (0x00019767) notes_bg_pane_g7

0x9fb4,	// (0x0001976f) notes_bg_pane_g8

0x9fbc,	// (0x00019777) notes_bg_pane_g9

0x0006,

0xf19d,	// (0x0001e958) notes_bg_pane_g

0x032a,	// (0x0000fae5) list_notes_text_pane_ParamLimits

0x032a,	// (0x0000fae5) list_notes_text_pane

0x9fc4,	// (0x0001977f) list_notes_text_pane_g1

0x0341,	// (0x0000fafc) list_notes_text_pane_t1

0x034f,	// (0x0000fb0a) listscroll_cale_week_pane

0x0379,	// (0x0000fb34) bg_cale_heading_pane

0x039d,	// (0x0000fb58) bg_cale_pane_cp01

0x03ba,	// (0x0000fb75) cale_week_corner_pane

0x03d9,	// (0x0000fb94) cale_week_day_heading_pane

0x0402,	// (0x0000fbbd) cale_week_scroll_pane_g1

0x0421,	// (0x0000fbdc) cale_week_scroll_pane_g2

0x0439,	// (0x0000fbf4) cale_week_scroll_pane_g3

0x0451,	// (0x0000fc0c) cale_week_scroll_pane_g4

0x0469,	// (0x0000fc24) cale_week_scroll_pane_g5

0x0489,	// (0x0000fc44) cale_week_scroll_pane_g6

0x04a9,	// (0x0000fc64) cale_week_scroll_pane_g7

0x04cd,	// (0x0000fc88) cale_week_scroll_pane_g8

0x04f1,	// (0x0000fcac) cale_week_scroll_pane_g9

0x0509,	// (0x0000fcc4) cale_week_scroll_pane_g10

0x0521,	// (0x0000fcdc) cale_week_scroll_pane_g11

0x0539,	// (0x0000fcf4) cale_week_scroll_pane_g12

0x055d,	// (0x0000fd18) cale_week_scroll_pane_g13

0x055d,	// (0x0000fd18) cale_week_scroll_pane_g14

0x055d,	// (0x0000fd18) cale_week_scroll_pane_g15

0x000f,

0xf1ac,	// (0x0001e967) cale_week_scroll_pane_g

0x05a5,	// (0x0000fd60) cale_week_time_pane

0x05c9,	// (0x0000fd84) grid_cale_week_pane

0x9ff9,	// (0x000197b4) scroll_pane_cp08

0x05fb,	// (0x0000fdb6) cell_cale_week_pane_ParamLimits

0x05fb,	// (0x0000fdb6) cell_cale_week_pane

0x0697,	// (0x0000fe52) cale_week_day_heading_pane_t1

0x06c1,	// (0x0000fe7c) cale_week_day_heading_pane_t2

0x06f0,	// (0x0000feab) cale_week_day_heading_pane_t3

0x071f,	// (0x0000feda) cale_week_day_heading_pane_t4

0x074e,	// (0x0000ff09) cale_week_day_heading_pane_t5

0x0781,	// (0x0000ff3c) cale_week_day_heading_pane_t6

0x07b8,	// (0x0000ff73) cale_week_day_heading_pane_t7

0x0006,

0xf1cd,	// (0x0001e988) cale_week_day_heading_pane_t

0xa016,	// (0x000197d1) bg_cale_side_pane

0x07e2,	// (0x0000ff9d) cale_week_time_pane_t1

0x07fc,	// (0x0000ffb7) cale_week_time_pane_t2

0x0816,	// (0x0000ffd1) cale_week_time_pane_t3

0x0830,	// (0x0000ffeb) cale_week_time_pane_t4

0x084a,	// (0x00010005) cale_week_time_pane_t5

0x0864,	// (0x0001001f) cale_week_time_pane_t6

0x0884,	// (0x0001003f) cale_week_time_pane_t7

0x08aa,	// (0x00010065) cale_week_time_pane_t8

0x0007,

0xf1dc,	// (0x0001e997) cale_week_time_pane_t

0x08d0,	// (0x0001008b) cell_cale_week_pane_g2

0x08f4,	// (0x000100af) cell_cale_week_pane_g3_ParamLimits

0x08f4,	// (0x000100af) cell_cale_week_pane_g3

0xa024,	// (0x000197df) grid_highlight_pane_cp07

0xa02c,	// (0x000197e7) listscroll_gms_pane

0xa036,	// (0x000197f1) grid_gms_pane

0xa03f,	// (0x000197fa) listscroll_gms_pane_g1

0xa047,	// (0x00019802) listscroll_gms_pane_g2

0x0001,

0xf1ed,	// (0x0001e9a8) listscroll_gms_pane_g

0x090c,	// (0x000100c7) scroll_pane_cp010

0x0917,	// (0x000100d2) cell_gms_pane_ParamLimits

0x0917,	// (0x000100d2) cell_gms_pane

0x092e,	// (0x000100e9) cell_gms_pane_g1

0xa04f,	// (0x0001980a) cell_gms_pane_g2

0xa057,	// (0x00019812) cell_gms_pane_g3

0xa060,	// (0x0001981b) cell_gms_pane_g4

0x0003,

0xf1f2,	// (0x0001e9ad) cell_gms_pane_g

0xa069,	// (0x00019824) grid_highlight_pane_cp09

0x3086,	// (0x00012841) phob_pre_status_pane_g1

0x308e,	// (0x00012849) phob_pre_status_pane_g2

0x3096,	// (0x00012851) phob_pre_status_pane_g3

0x309e,	// (0x00012859) phob_pre_status_pane_g4

0x0004,

0xf5dd,	// (0x0001ed98) phob_pre_status_pane_g

0x30ae,	// (0x00012869) phob_pre_status_pane_t1

0x30be,	// (0x00012879) phob_pre_status_pane_t2

0x30ce,	// (0x00012889) phob_pre_status_pane_t3

0x0002,

0xf5e8,	// (0x0001eda3) phob_pre_status_pane_t

0xa071,	// (0x0001982c) bg_list_pane_cp05

0x093e,	// (0x000100f9) grid_vorec_pane

0x0948,	// (0x00010103) vorec_t1

0x0956,	// (0x00010111) vorec_t2

0x0964,	// (0x0001011f) vorec_t3

0x0972,	// (0x0001012d) vorec_t4

0x95fe,	// (0x00018db9) vorec_t5

0x960c,	// (0x00018dc7) vorec_t6

0x0004,

0xf1fb,	// (0x0001e9b6) vorec_t

0x961a,	// (0x00018dd5) wait_bar_pane_cp01

0xa079,	// (0x00019834) cell_vorec_pane_ParamLimits

0xa079,	// (0x00019834) cell_vorec_pane

0xa08e,	// (0x00019849) cell_vorec_pane_g1

0x9b12,	// (0x000192cd) grid_highlight_pane_cp05

0x09a4,	// (0x0001015f) cams_zoom_pane

0x09b3,	// (0x0001016e) image_vga_pane

0x09cd,	// (0x00010188) main_camera_pane_g1

0x09df,	// (0x0001019a) main_camera_pane_g2

0x09ef,	// (0x000101aa) main_camera_pane_g3

0x0a03,	// (0x000101be) main_camera_pane_g4

0x0a17,	// (0x000101d2) main_camera_pane_g5

0x0a2b,	// (0x000101e6) main_camera_pane_g6

0x0a3f,	// (0x000101fa) main_camera_pane_g7

0x0007,

0xf206,	// (0x0001e9c1) main_camera_pane_g

0x0a53,	// (0x0001020e) main_camera_pane_t1

0x0a69,	// (0x00010224) main_camera_pane_t2

0x0001,

0xf217,	// (0x0001e9d2) main_camera_pane_t

0x0aa7,	// (0x00010262) cams_zoom_pane_cp_ParamLimits

0x0aa7,	// (0x00010262) cams_zoom_pane_cp

0x0acf,	// (0x0001028a) image_cif_pane_ParamLimits

0x0acf,	// (0x0001028a) image_cif_pane

0x0b0a,	// (0x000102c5) image_subqcif_pane

0x0b14,	// (0x000102cf) main_video_pane_g1_ParamLimits

0x0b14,	// (0x000102cf) main_video_pane_g1

0x0b38,	// (0x000102f3) main_video_pane_g2_ParamLimits

0x0b38,	// (0x000102f3) main_video_pane_g2

0x0b6e,	// (0x00010329) main_video_pane_g3_ParamLimits

0x0b6e,	// (0x00010329) main_video_pane_g3

0x0b9c,	// (0x00010357) main_video_pane_g4_ParamLimits

0x0b9c,	// (0x00010357) main_video_pane_g4

0x0bca,	// (0x00010385) main_video_pane_g5_ParamLimits

0x0bca,	// (0x00010385) main_video_pane_g5

0xa0a4,	// (0x0001985f) main_video_pane_g6_ParamLimits

0xa0a4,	// (0x0001985f) main_video_pane_g6

0x0006,

0xf21c,	// (0x0001e9d7) main_video_pane_g_ParamLimits

0xf21c,	// (0x0001e9d7) main_video_pane_g

0x0bf3,	// (0x000103ae) main_video_pane_t1_ParamLimits

0x0bf3,	// (0x000103ae) main_video_pane_t1

0xa0be,	// (0x00019879) cams_zoom_pane_g1

0xa0c7,	// (0x00019882) cams_zoom_pane_g2

0xa0d0,	// (0x0001988b) cams_zoom_pane_g3

0xa0d9,	// (0x00019894) cams_zoom_pane_g4

0x0003,

0xf22b,	// (0x0001e9e6) cams_zoom_pane_g

0x0c50,	// (0x0001040b) grid_cams_pane

0x0c6a,	// (0x00010425) linegrid_cams_pane

0x0c7c,	// (0x00010437) cell_cams_pane_ParamLimits

0x0c7c,	// (0x00010437) cell_cams_pane

0xa0e2,	// (0x0001989d) cams_burst_image_pane

0xa0ea,	// (0x000198a5) cell_cams_pane_g1

0x9b12,	// (0x000192cd) grid_highlight_pane_cp03

0x9ecd,	// (0x00019688) mp_bg_pane_g1

0x9b12,	// (0x000192cd) bg_list_pane_cp03

0xbf40,	// (0x0001b6fb) bg_mp_pane

0xbf48,	// (0x0001b703) grid_mp_pane

0xbf50,	// (0x0001b70b) media_player_g1

0xbf5a,	// (0x0001b715) media_player_t1

0xbf68,	// (0x0001b723) media_player_t2

0xbf76,	// (0x0001b731) media_player_t3

0xbf84,	// (0x0001b73f) media_player_t4

0xbf92,	// (0x0001b74d) media_player_t5

0xbfa0,	// (0x0001b75b) media_player_t6

0xbfae,	// (0x0001b769) media_player_t7

0x0006,

0xf5c7,	// (0x0001ed82) media_player_t

0xbfbc,	// (0x0001b777) wait_bar_pane_cp02

0xf5ac,	// (0x0001ed67) main_usb_pane_t

0x307d,	// (0x00012838) cell_mp_pane

0x9ecd,	// (0x00019688) cell_mp_pane_g1

0x9b12,	// (0x000192cd) grid_highlight_pane_cp06

0xa0f2,	// (0x000198ad) grid_skin_colour_pane

0xa0fa,	// (0x000198b5) list_highlight_pane_cp03

0x0db5,	// (0x00010570) skin_g1

0xa102,	// (0x000198bd) skin_t1

0xa111,	// (0x000198cc) skin_t2

0x0001,

0xf260,	// (0x0001ea1b) skin_t

0x0dbf,	// (0x0001057a) cell_skin_colour_pane_ParamLimits

0x0dbf,	// (0x0001057a) cell_skin_colour_pane

0xa11f,	// (0x000198da) cell_skin_colour_pane_g1

0x0e32,	// (0x000105ed) call_video_g1_ParamLimits

0x0e32,	// (0x000105ed) call_video_g1

0x0e4e,	// (0x00010609) call_video_g2_ParamLimits

0x0e4e,	// (0x00010609) call_video_g2

0x0001,

0xf265,	// (0x0001ea20) call_video_g_ParamLimits

0xf265,	// (0x0001ea20) call_video_g

0x0e93,	// (0x0001064e) call_video_uplink_pane_cp1_ParamLimits

0x0e93,	// (0x0001064e) call_video_uplink_pane_cp1

0xa131,	// (0x000198ec) call_video_uplink_pane_cp2

0x0f34,	// (0x000106ef) video_down_crop_pane_ParamLimits

0x0f34,	// (0x000106ef) video_down_crop_pane

0x101d,	// (0x000107d8) video_down_pane_ParamLimits

0x101d,	// (0x000107d8) video_down_pane

0xa139,	// (0x000198f4) video_down_subqcif_pane_ParamLimits

0xa139,	// (0x000198f4) video_down_subqcif_pane

0xa153,	// (0x0001990e) video_down_subqcif_pane_cp_ParamLimits

0xa153,	// (0x0001990e) video_down_subqcif_pane_cp

0xa17b,	// (0x00019936) im_reading_pane_ParamLimits

0xa17b,	// (0x00019936) im_reading_pane

0x1128,	// (0x000108e3) im_writing_pane_ParamLimits

0x1128,	// (0x000108e3) im_writing_pane

0x1146,	// (0x00010901) im_reading_pane_t1

0xa195,	// (0x00019950) list_im_pane

0xa1a6,	// (0x00019961) scroll_pane_cp07

0x1185,	// (0x00010940) im_writing_pane_t1_ParamLimits

0x1185,	// (0x00010940) im_writing_pane_t1

0xa1bf,	// (0x0001997a) im_writing_pane_t2_ParamLimits

0xa1bf,	// (0x0001997a) im_writing_pane_t2

0x0001,

0xf26f,	// (0x0001ea2a) im_writing_pane_t_ParamLimits

0xf26f,	// (0x0001ea2a) im_writing_pane_t

0x9b12,	// (0x000192cd) input_focus_pane_cp04

0x9b12,	// (0x000192cd) input_focus_pane_cp05

0x119a,	// (0x00010955) list_im_single_pane_ParamLimits

0x119a,	// (0x00010955) list_im_single_pane

0x11b3,	// (0x0001096e) list_single_im_pane_t1

0x303d,	// (0x000127f8) blid_accuracy_pane

0x3045,	// (0x00012800) blid_compass_pane

0x304f,	// (0x0001280a) main_location_t1

0x305f,	// (0x0001281a) main_location_t2

0x306f,	// (0x0001282a) main_location_t3

0x0002,

0xf5d6,	// (0x0001ed91) main_location_t

0x9b12,	// (0x000192cd) aid_levels_location

0x9ecd,	// (0x00019688) blid_accuracy_pane_g1

0x9ecd,	// (0x00019688) blid_accuracy_pane_g2

0x0001,

0xf2d1,	// (0x0001ea8c) blid_accuracy_pane_g

0xa207,	// (0x000199c2) wml_content_pane

0xa245,	// (0x00019a00) wml_button_pane_ParamLimits

0xa245,	// (0x00019a00) wml_button_pane

0x11c2,	// (0x0001097d) wml_list_single_large_pane_ParamLimits

0x11c2,	// (0x0001097d) wml_list_single_large_pane

0x11db,	// (0x00010996) wml_list_single_medium_pane_ParamLimits

0x11db,	// (0x00010996) wml_list_single_medium_pane

0x11f5,	// (0x000109b0) wml_list_single_small_pane_ParamLimits

0x11f5,	// (0x000109b0) wml_list_single_small_pane

0xa259,	// (0x00019a14) wml_selection_box_pane_ParamLimits

0xa259,	// (0x00019a14) wml_selection_box_pane

0xa26c,	// (0x00019a27) wml_list_single_pane_t1

0xa27b,	// (0x00019a36) wml_list_single_medium_pane_t1

0xa28a,	// (0x00019a45) wml_list_single_large_pane_t1

0xa299,	// (0x00019a54) input_focus_pane_cp02_ParamLimits

0xa299,	// (0x00019a54) input_focus_pane_cp02

0xa2ac,	// (0x00019a67) wml_selection_box_pane_g1

0xa2b5,	// (0x00019a70) wml_selection_box_pane_t1_ParamLimits

0xa2b5,	// (0x00019a70) wml_selection_box_pane_t1

0x9d6d,	// (0x00019528) bg_wml_button_pane_ParamLimits

0x9d6d,	// (0x00019528) bg_wml_button_pane

0xa2cd,	// (0x00019a88) wml_button_pane_g1

0xa2d5,	// (0x00019a90) wml_button_pane_t1

0xa2cd,	// (0x00019a88) wml_button_bg_pane_g1

0xa2e5,	// (0x00019aa0) wml_button_bg_pane_g2

0xa2ed,	// (0x00019aa8) wml_button_bg_pane_g3

0xa2f5,	// (0x00019ab0) wml_button_bg_pane_g4

0xa2fd,	// (0x00019ab8) wml_button_bg_pane_g5

0xa305,	// (0x00019ac0) wml_button_bg_pane_g6

0xa30d,	// (0x00019ac8) wml_button_bg_pane_g7

0xa315,	// (0x00019ad0) wml_button_bg_pane_g8

0xa31d,	// (0x00019ad8) wml_button_bg_pane_g9

0x0008,

0xf274,	// (0x0001ea2f) wml_button_bg_pane_g

0x1214,	// (0x000109cf) bg_list_pane_cp02

0xa325,	// (0x00019ae0) mce_header_pane_ParamLimits

0xa325,	// (0x00019ae0) mce_header_pane

0xa33b,	// (0x00019af6) mce_icon_pane

0xa33b,	// (0x00019af6) mce_image_pane

0xa344,	// (0x00019aff) mce_text_pane_ParamLimits

0xa344,	// (0x00019aff) mce_text_pane

0x121e,	// (0x000109d9) scroll_pane_cp03

0xa23d,	// (0x000199f8) scroll_pane_cp04

0xa357,	// (0x00019b12) scroll_pane_cp05_ParamLimits

0xa357,	// (0x00019b12) scroll_pane_cp05

0x1228,	// (0x000109e3) mce_header_field_pane_ParamLimits

0x1228,	// (0x000109e3) mce_header_field_pane

0x1241,	// (0x000109fc) mce_header_field_pane_2_ParamLimits

0x1241,	// (0x000109fc) mce_header_field_pane_2

0x1257,	// (0x00010a12) mce_header_field_pane_3

0x125f,	// (0x00010a1a) list_single_mce_message_pane_ParamLimits

0x125f,	// (0x00010a1a) list_single_mce_message_pane

0x127b,	// (0x00010a36) list_single_mce_smart_pane_ParamLimits

0x127b,	// (0x00010a36) list_single_mce_smart_pane

0xa363,	// (0x00019b1e) input_focus_pane_cp03

0xa36c,	// (0x00019b27) list_header_data_pane

0x12a2,	// (0x00010a5d) mce_header_field_pane_t1

0x12b2,	// (0x00010a6d) list_single_mce_header_pane_ParamLimits

0x12b2,	// (0x00010a6d) list_single_mce_header_pane

0xa374,	// (0x00019b2f) list_single_mce_header_pane_t1

0xa383,	// (0x00019b3e) list_single_mce_message_pane_g1

0xa38b,	// (0x00019b46) list_single_mce_message_pane_t1

0x12ec,	// (0x00010aa7) bg_cale_heading_pane_cp01_ParamLimits

0x12ec,	// (0x00010aa7) bg_cale_heading_pane_cp01

0xa399,	// (0x00019b54) bg_cale_pane_cp02_ParamLimits

0xa399,	// (0x00019b54) bg_cale_pane_cp02

0x133e,	// (0x00010af9) cale_month_corner_pane

0x135d,	// (0x00010b18) cale_month_day_heading_pane_ParamLimits

0x135d,	// (0x00010b18) cale_month_day_heading_pane

0x13c7,	// (0x00010b82) cale_month_pane_g1_ParamLimits

0x13c7,	// (0x00010b82) cale_month_pane_g1

0x140e,	// (0x00010bc9) cale_month_pane_g2_ParamLimits

0x140e,	// (0x00010bc9) cale_month_pane_g2

0x144a,	// (0x00010c05) cale_month_pane_g3_ParamLimits

0x144a,	// (0x00010c05) cale_month_pane_g3

0x149e,	// (0x00010c59) cale_month_pane_g4_ParamLimits

0x149e,	// (0x00010c59) cale_month_pane_g4

0x14f2,	// (0x00010cad) cale_month_pane_g5_ParamLimits

0x14f2,	// (0x00010cad) cale_month_pane_g5

0x154e,	// (0x00010d09) cale_month_pane_g6_ParamLimits

0x154e,	// (0x00010d09) cale_month_pane_g6

0x15b6,	// (0x00010d71) cale_month_pane_g7_ParamLimits

0x15b6,	// (0x00010d71) cale_month_pane_g7

0x1622,	// (0x00010ddd) cale_month_pane_g8_ParamLimits

0x1622,	// (0x00010ddd) cale_month_pane_g8

0x168e,	// (0x00010e49) cale_month_pane_g9_ParamLimits

0x168e,	// (0x00010e49) cale_month_pane_g9

0x16f2,	// (0x00010ead) cale_month_pane_g10_ParamLimits

0x16f2,	// (0x00010ead) cale_month_pane_g10

0x1744,	// (0x00010eff) cale_month_pane_g11_ParamLimits

0x1744,	// (0x00010eff) cale_month_pane_g11

0x1796,	// (0x00010f51) cale_month_pane_g12_ParamLimits

0x1796,	// (0x00010f51) cale_month_pane_g12

0x17ee,	// (0x00010fa9) cale_month_pane_g13_ParamLimits

0x17ee,	// (0x00010fa9) cale_month_pane_g13

0x000c,

0xf287,	// (0x0001ea42) cale_month_pane_g_ParamLimits

0xf287,	// (0x0001ea42) cale_month_pane_g

0x1846,	// (0x00011001) cale_month_week_pane

0x186a,	// (0x00011025) grid_cale_month_pane_ParamLimits

0x186a,	// (0x00011025) grid_cale_month_pane

0x18cb,	// (0x00011086) cale_month_day_heading_pane_t1

0x1951,	// (0x0001110c) cale_month_day_heading_pane_t2

0x19ca,	// (0x00011185) cale_month_day_heading_pane_t3

0x1a43,	// (0x000111fe) cale_month_day_heading_pane_t4

0x1ac4,	// (0x0001127f) cale_month_day_heading_pane_t5

0x1b4d,	// (0x00011308) cale_month_day_heading_pane_t6

0x1bde,	// (0x00011399) cale_month_day_heading_pane_t7

0x0006,

0xf2a2,	// (0x0001ea5d) cale_month_day_heading_pane_t

0xa016,	// (0x000197d1) bg_cale_side_pane_cp01

0x1c6f,	// (0x0001142a) cale_month_week_pane_t1

0x1c88,	// (0x00011443) cale_month_week_pane_t2

0x1ca1,	// (0x0001145c) cale_month_week_pane_t3

0x1cba,	// (0x00011475) cale_month_week_pane_t4

0x1cd3,	// (0x0001148e) cale_month_week_pane_t5

0x1cec,	// (0x000114a7) cale_month_week_pane_t6

0x0005,

0xf2b1,	// (0x0001ea6c) cale_month_week_pane_t

0x1d11,	// (0x000114cc) cell_cale_month_pane_ParamLimits

0x1d11,	// (0x000114cc) cell_cale_month_pane

0xa3d8,	// (0x00019b93) cell_cale_month_pane_g1

0x1e85,	// (0x00011640) cell_cale_month_pane_t1_ParamLimits

0x1e85,	// (0x00011640) cell_cale_month_pane_t1

0xa024,	// (0x000197df) grid_highlight_pane_cp08

0x9ecd,	// (0x00019688) main_smil_g1

0x1eb1,	// (0x0001166c) smil_status_pane

0xa3e4,	// (0x00019b9f) smil_text_pane

0xbe5e,	// (0x0001b619) bg_popup_call3_rect_pane_g8

0xbe66,	// (0x0001b621) bg_popup_call3_rect_pane_g9

0x0008,

0xf56a,	// (0x0001ed25) bg_popup_call3_rect_pane_g

0xc11c,	// (0x0001b8d7) smil_status_volume_pane_g1

0xa3ee,	// (0x00019ba9) smil_status_pane_t1

0xc14f,	// (0x0001b90a) volume_smil_pane

0xa405,	// (0x00019bc0) list_smil_text_pane

0x1ec6,	// (0x00011681) scroll_pane_cp011

0x1ed1,	// (0x0001168c) smil_text_list_pane_t1_ParamLimits

0x1ed1,	// (0x0001168c) smil_text_list_pane_t1

0xa40f,	// (0x00019bca) aid_volume_smil_ParamLimits

0xa40f,	// (0x00019bca) aid_volume_smil

0x9ecd,	// (0x00019688) smil_volume_pane_g1

0x9ecd,	// (0x00019688) smil_volume_pane_g2

0x0001,

0xf2d1,	// (0x0001ea8c) smil_volume_pane_g

0x034f,	// (0x0000fb0a) listscroll_cale_day_pane

0xa431,	// (0x00019bec) bg_cale_pane

0xa449,	// (0x00019c04) list_cale_pane

0xa46c,	// (0x00019c27) scroll_pane_cp09

0xa47d,	// (0x00019c38) cale_bg_pane_g1

0xa485,	// (0x00019c40) cale_bg_pane_g2

0xa48d,	// (0x00019c48) cale_bg_pane_g3

0xa495,	// (0x00019c50) cale_bg_pane_g4

0xa49d,	// (0x00019c58) cale_bg_pane_g5

0xa4a5,	// (0x00019c60) cale_bg_pane_g6

0xa4ad,	// (0x00019c68) cale_bg_pane_g7

0xa4b5,	// (0x00019c70) cale_bg_pane_g8

0xa4bd,	// (0x00019c78) cale_bg_pane_g9

0x0008,

0xf2d6,	// (0x0001ea91) cale_bg_pane_g

0x1f24,	// (0x000116df) list_cale_time_pane_ParamLimits

0x1f24,	// (0x000116df) list_cale_time_pane

0xa4c5,	// (0x00019c80) list_cale_time_pane_g1_ParamLimits

0xa4c5,	// (0x00019c80) list_cale_time_pane_g1

0xa4d1,	// (0x00019c8c) list_cale_time_pane_g2_ParamLimits

0xa4d1,	// (0x00019c8c) list_cale_time_pane_g2

0x1f3e,	// (0x000116f9) list_cale_time_pane_g3_ParamLimits

0x1f3e,	// (0x000116f9) list_cale_time_pane_g3

0x1f4c,	// (0x00011707) list_cale_time_pane_g4_ParamLimits

0x1f4c,	// (0x00011707) list_cale_time_pane_g4

0x1f5a,	// (0x00011715) list_cale_time_pane_g5_ParamLimits

0x1f5a,	// (0x00011715) list_cale_time_pane_g5

0x0005,

0xf2e9,	// (0x0001eaa4) list_cale_time_pane_g_ParamLimits

0xf2e9,	// (0x0001eaa4) list_cale_time_pane_g

0xa4eb,	// (0x00019ca6) list_cale_time_pane_t1_ParamLimits

0xa4eb,	// (0x00019ca6) list_cale_time_pane_t1

0xa513,	// (0x00019cce) list_cale_time_pane_t2_ParamLimits

0xa513,	// (0x00019cce) list_cale_time_pane_t2

0x2301,	// (0x00011abc) aid_blid_cardinal_pane

0x2343,	// (0x00011afe) compass_pane_t4

0xa53b,	// (0x00019cf6) list_cale_time_pane_t4_ParamLimits

0xa53b,	// (0x00019cf6) list_cale_time_pane_t4

0x2351,	// (0x00011b0c) compass_pane_t5

0x2361,	// (0x00011b1c) compass_pane_t6

0x236f,	// (0x00011b2a) compass_pane_t7

0xaa2e,	// (0x0001a1e9) navi_pane_cc_t1

0xac1f,	// (0x0001a3da) aid_phob_thumbnail_center_pane

0x2a00,	// (0x000121bb) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2f6,	// (0x0001eab1) list_cale_time_pane_t_ParamLimits

0xf2f6,	// (0x0001eab1) list_cale_time_pane_t

0x9769,	// (0x00018f24) bg_popup_window_pane_cp02_ParamLimits

0x9769,	// (0x00018f24) bg_popup_window_pane_cp02

0xa563,	// (0x00019d1e) heading_pane_cp01_ParamLimits

0xa563,	// (0x00019d1e) heading_pane_cp01

0xa56f,	// (0x00019d2a) loc_req_pane_ParamLimits

0xa56f,	// (0x00019d2a) loc_req_pane

0xa57f,	// (0x00019d3a) loc_type_pane_ParamLimits

0xa57f,	// (0x00019d3a) loc_type_pane

0xa591,	// (0x00019d4c) loc_type_pane_t1_ParamLimits

0xa591,	// (0x00019d4c) loc_type_pane_t1

0xa5a3,	// (0x00019d5e) loc_type_pane_t2_ParamLimits

0xa5a3,	// (0x00019d5e) loc_type_pane_t2

0xa5b5,	// (0x00019d70) loc_type_pane_t3_ParamLimits

0xa5b5,	// (0x00019d70) loc_type_pane_t3

0x0002,

0xf2fd,	// (0x0001eab8) loc_type_pane_t_ParamLimits

0xf2fd,	// (0x0001eab8) loc_type_pane_t

0xa5c7,	// (0x00019d82) list_loc_req_pane

0xa5d1,	// (0x00019d8c) scroll_pane_cp012

0x1f68,	// (0x00011723) list_single_loc_request_popup_menu_pane_ParamLimits

0x1f68,	// (0x00011723) list_single_loc_request_popup_menu_pane

0xa5dc,	// (0x00019d97) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xa5dc,	// (0x00019d97) list_single_loc_request_popup_menu_pane_g1

0xa5e8,	// (0x00019da3) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xa5e8,	// (0x00019da3) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf304,	// (0x0001eabf) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf304,	// (0x0001eabf) list_single_loc_request_popup_menu_pane_g

0xa5f4,	// (0x00019daf) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xa5f4,	// (0x00019daf) list_single_loc_request_popup_menu_pane_t1

0x9d6d,	// (0x00019528) bg_popup_window_pane_cp03_ParamLimits

0x9d6d,	// (0x00019528) bg_popup_window_pane_cp03

0xa60a,	// (0x00019dc5) heading_loc_req_pane_ParamLimits

0xa60a,	// (0x00019dc5) heading_loc_req_pane

0x1f75,	// (0x00011730) popup_dyc_status_message_window_g1_ParamLimits

0x1f75,	// (0x00011730) popup_dyc_status_message_window_g1

0x1f89,	// (0x00011744) popup_dyc_status_message_window_t1_ParamLimits

0x1f89,	// (0x00011744) popup_dyc_status_message_window_t1

0x1f9e,	// (0x00011759) popup_dyc_status_message_window_t2_ParamLimits

0x1f9e,	// (0x00011759) popup_dyc_status_message_window_t2

0x1fb3,	// (0x0001176e) popup_dyc_status_message_window_t3_ParamLimits

0x1fb3,	// (0x0001176e) popup_dyc_status_message_window_t3

0x0002,

0xf309,	// (0x0001eac4) popup_dyc_status_message_window_t_ParamLimits

0xf309,	// (0x0001eac4) popup_dyc_status_message_window_t

0x9b12,	// (0x000192cd) bg_heading_pane_cp01

0xa616,	// (0x00019dd1) heading_loc_req_pane_g1

0xa61e,	// (0x00019dd9) heading_loc_req_pane_g2

0xa626,	// (0x00019de1) heading_loc_req_pane_g3

0x0002,

0xf310,	// (0x0001eacb) heading_loc_req_pane_g

0xa62e,	// (0x00019de9) heading_loc_req_pane_t1

0xa63e,	// (0x00019df9) bg_popup_sub_pane_cp01_ParamLimits

0xa63e,	// (0x00019df9) bg_popup_sub_pane_cp01

0xa64c,	// (0x00019e07) popup_cale_events_window_g1_ParamLimits

0xa64c,	// (0x00019e07) popup_cale_events_window_g1

0xa66c,	// (0x00019e27) popup_cale_events_window_g2_ParamLimits

0xa66c,	// (0x00019e27) popup_cale_events_window_g2

0x0001,

0xf344,	// (0x0001eaff) popup_cale_events_window_g_ParamLimits

0xf344,	// (0x0001eaff) popup_cale_events_window_g

0xa68c,	// (0x00019e47) popup_cale_events_window_t1_ParamLimits

0xa68c,	// (0x00019e47) popup_cale_events_window_t1

0xa69e,	// (0x00019e59) popup_cale_events_window_t2_ParamLimits

0xa69e,	// (0x00019e59) popup_cale_events_window_t2

0xa6dc,	// (0x00019e97) popup_cale_events_window_t3_ParamLimits

0xa6dc,	// (0x00019e97) popup_cale_events_window_t3

0xa716,	// (0x00019ed1) popup_cale_events_window_t4_ParamLimits

0xa716,	// (0x00019ed1) popup_cale_events_window_t4

0x0003,

0xf349,	// (0x0001eb04) popup_cale_events_window_t_ParamLimits

0xf349,	// (0x0001eb04) popup_cale_events_window_t

0x20ac,	// (0x00011867) call_type_pane

0x20bc,	// (0x00011877) popup_call_status_window_g1

0x20d0,	// (0x0001188b) popup_call_status_window_g2

0x20e4,	// (0x0001189f) popup_call_status_window_g3

0x0002,

0xf352,	// (0x0001eb0d) popup_call_status_window_g

0xa74c,	// (0x00019f07) call_type_pane_g1

0xa755,	// (0x00019f10) call_type_pane_g2

0x0001,

0xf359,	// (0x0001eb14) call_type_pane_g

0x9b12,	// (0x000192cd) bg_popup_sub_pane_cp02

0xa75e,	// (0x00019f19) listscroll_popup_wml_pane

0xa766,	// (0x00019f21) list_wml_pane

0xa770,	// (0x00019f2b) scroll_pane_cp013

0xa77b,	// (0x00019f36) list_single_graphic_popup_wml_pane_ParamLimits

0xa77b,	// (0x00019f36) list_single_graphic_popup_wml_pane

0x9ecd,	// (0x00019688) list_single_graphic_popup_wml_pane_g1

0xa78f,	// (0x00019f4a) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf35e,	// (0x0001eb19) list_single_graphic_popup_wml_pane_g

0xa797,	// (0x00019f52) list_single_graphic_popup_wml_pane_t1

0xa7ad,	// (0x00019f68) aid_call_pane

0x9d65,	// (0x00019520) popup_clock_analogue_window_g1

0x9d65,	// (0x00019520) popup_clock_analogue_window_g2

0xa7b5,	// (0x00019f70) popup_clock_analogue_window_g3

0xa7b5,	// (0x00019f70) popup_clock_analogue_window_g4

0x9ecd,	// (0x00019688) popup_clock_analogue_window_g5

0x0004,

0xf363,	// (0x0001eb1e) popup_clock_analogue_window_g

0xa7bd,	// (0x00019f78) popup_clock_analogue_window_t1

0xa7cb,	// (0x00019f86) clock_digital_number_pane_ParamLimits

0xa7cb,	// (0x00019f86) clock_digital_number_pane

0xa7d7,	// (0x00019f92) clock_digital_number_pane_cp02_ParamLimits

0xa7d7,	// (0x00019f92) clock_digital_number_pane_cp02

0xa7e3,	// (0x00019f9e) clock_digital_number_pane_cp03_ParamLimits

0xa7e3,	// (0x00019f9e) clock_digital_number_pane_cp03

0xa7ef,	// (0x00019faa) clock_digital_number_pane_cp04_ParamLimits

0xa7ef,	// (0x00019faa) clock_digital_number_pane_cp04

0xa7fb,	// (0x00019fb6) clock_digital_separator_pane_ParamLimits

0xa7fb,	// (0x00019fb6) clock_digital_separator_pane

0xa807,	// (0x00019fc2) popup_clock_digital_window_t1

0x9ecd,	// (0x00019688) clock_digital_number_pane_g1

0x9ecd,	// (0x00019688) clock_digital_number_pane_g2

0x0001,

0xf2d1,	// (0x0001ea8c) clock_digital_number_pane_g

0x9ecd,	// (0x00019688) clock_digital_separator_pane_g1

0x9ecd,	// (0x00019688) clock_digital_separator_pane_g2

0x0001,

0xf2d1,	// (0x0001ea8c) clock_digital_separator_pane_g

0x9b12,	// (0x000192cd) bg_popup_window_pane_cp04

0xa824,	// (0x00019fdf) heading_pane_cp03

0xa82c,	// (0x00019fe7) listscroll_popup_gms_pane

0xa834,	// (0x00019fef) grid_large_graphic_popup_pane

0xa83e,	// (0x00019ff9) listscroll_popup_gms_pane_g1

0xa846,	// (0x0001a001) listscroll_popup_gms_pane_g2

0x0001,

0xf36e,	// (0x0001eb29) listscroll_popup_gms_pane_g

0xa23d,	// (0x000199f8) scroll_pane_cp014

0x20f4,	// (0x000118af) cell_large_graphic_popup_pane_ParamLimits

0x20f4,	// (0x000118af) cell_large_graphic_popup_pane

0x210c,	// (0x000118c7) cell_large_graphic_popup_pane_g1_ParamLimits

0x210c,	// (0x000118c7) cell_large_graphic_popup_pane_g1

0xa84e,	// (0x0001a009) cell_large_graphic_popup_pane_g2_ParamLimits

0xa84e,	// (0x0001a009) cell_large_graphic_popup_pane_g2

0xa85a,	// (0x0001a015) cell_large_graphic_popup_pane_g3_ParamLimits

0xa85a,	// (0x0001a015) cell_large_graphic_popup_pane_g3

0xa867,	// (0x0001a022) cell_large_graphic_popup_pane_g4_ParamLimits

0xa867,	// (0x0001a022) cell_large_graphic_popup_pane_g4

0x0003,

0xf373,	// (0x0001eb2e) cell_large_graphic_popup_pane_g_ParamLimits

0xf373,	// (0x0001eb2e) cell_large_graphic_popup_pane_g

0xa877,	// (0x0001a032) grid_highlight_pane_cp010

0x9ecd,	// (0x00019688) bg_popup_call_pane_g1

0xa881,	// (0x0001a03c) list_single_graphic_popup_conf_pane_ParamLimits

0xa881,	// (0x0001a03c) list_single_graphic_popup_conf_pane

0xa893,	// (0x0001a04e) list_highlight_pane_cp01

0xa89c,	// (0x0001a057) list_single_graphic_popup_conf_pane_g1

0xa8a4,	// (0x0001a05f) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf37c,	// (0x0001eb37) list_single_graphic_popup_conf_pane_g

0xa8ac,	// (0x0001a067) list_single_graphic_popup_conf_pane_t1

0xa8ba,	// (0x0001a075) linegrid_cams_pane_g1

0x2118,	// (0x000118d3) linegrid_cams_pane_g2

0xa057,	// (0x00019812) linegrid_cams_pane_g3

0xa8c3,	// (0x0001a07e) linegrid_cams_pane_g4

0x2121,	// (0x000118dc) linegrid_cams_pane_g5

0x212a,	// (0x000118e5) linegrid_cams_pane_g6

0xa060,	// (0x0001981b) linegrid_cams_pane_g7

0x0006,

0xf381,	// (0x0001eb3c) linegrid_cams_pane_g

0xa8cc,	// (0x0001a087) popup_clock_analogue_window

0xa8cc,	// (0x0001a087) popup_clock_digital_window

0x9b12,	// (0x000192cd) popup_phob_thumbnail_window

0x9ecd,	// (0x00019688) call_video_uplink_pane_g1

0xa8d5,	// (0x0001a090) call_video_uplink_pane_g2

0x0001,

0xf390,	// (0x0001eb4b) call_video_uplink_pane_g

0xa8dd,	// (0x0001a098) video_uplink_pane

0xa8e5,	// (0x0001a0a0) mce_image_pane_g1

0x2135,	// (0x000118f0) mce_image_pane_g2

0x213f,	// (0x000118fa) mce_image_pane_g3

0x2149,	// (0x00011904) mce_image_pane_g4

0x2151,	// (0x0001190c) mce_image_pane_g5

0x0004,

0xf395,	// (0x0001eb50) mce_image_pane_g

0xa8ef,	// (0x0001a0aa) control_top_pane_stacon_cp01_ParamLimits

0xa8ef,	// (0x0001a0aa) control_top_pane_stacon_cp01

0xa903,	// (0x0001a0be) uni_indicator_pane_stacon_cp01_ParamLimits

0xa903,	// (0x0001a0be) uni_indicator_pane_stacon_cp01

0xa914,	// (0x0001a0cf) bg_popup_sub_pane_cp03

0x2159,	// (0x00011914) chi_dic_find_pane

0x2161,	// (0x0001191c) listscroll_chi_dic_pane

0x216a,	// (0x00011925) main_pane_chidic_g1

0x217d,	// (0x00011938) chi_dic_find_pane_t1

0xa91e,	// (0x0001a0d9) find_chidic_pane

0xa927,	// (0x0001a0e2) chi_dic_list_pane_ParamLimits

0xa927,	// (0x0001a0e2) chi_dic_list_pane

0xa938,	// (0x0001a0f3) scroll_pane_cp020

0x218b,	// (0x00011946) find_chidic_pane_t1

0x9b12,	// (0x000192cd) input_focus_pane_cp06

0x219a,	// (0x00011955) list_chi_dic_pane_ParamLimits

0x219a,	// (0x00011955) list_chi_dic_pane

0x21ac,	// (0x00011967) list_chi_dic_pane_t1_ParamLimits

0x21ac,	// (0x00011967) list_chi_dic_pane_t1

0x9b12,	// (0x000192cd) list_highlight_pane_cp020

0xa940,	// (0x0001a0fb) bg_cale_heading_pane_g1

0x21bf,	// (0x0001197a) bg_cale_heading_pane_g2

0x21c7,	// (0x00011982) bg_cale_heading_pane_g3

0x21cf,	// (0x0001198a) bg_cale_heading_pane_g4

0x21d9,	// (0x00011994) bg_cale_heading_pane_g5

0x21e3,	// (0x0001199e) bg_cale_heading_pane_g6

0x21eb,	// (0x000119a6) bg_cale_heading_pane_g7

0x21f3,	// (0x000119ae) bg_cale_heading_pane_g8

0x21fd,	// (0x000119b8) bg_cale_heading_pane_g9

0x0008,

0xf3a0,	// (0x0001eb5b) bg_cale_heading_pane_g

0xa940,	// (0x0001a0fb) bg_cale_side_pane_g1

0x2207,	// (0x000119c2) bg_cale_side_pane_g2

0x2211,	// (0x000119cc) bg_cale_side_pane_g3

0x221b,	// (0x000119d6) bg_cale_side_pane_g4

0x2225,	// (0x000119e0) bg_cale_side_pane_g5

0x222f,	// (0x000119ea) bg_cale_side_pane_g6

0x2239,	// (0x000119f4) bg_cale_side_pane_g7

0x2243,	// (0x000119fe) bg_cale_side_pane_g8

0x224b,	// (0x00011a06) bg_cale_side_pane_g9

0x0008,

0xf3b3,	// (0x0001eb6e) bg_cale_side_pane_g

0x2253,	// (0x00011a0e) popup_call_status_window_ParamLimits

0x2253,	// (0x00011a0e) popup_call_status_window

0xa948,	// (0x0001a103) stacon_top_pane

0xa950,	// (0x0001a10b) status_pane_ParamLimits

0xa950,	// (0x0001a10b) status_pane

0xa965,	// (0x0001a120) status_small_pane

0xa96d,	// (0x0001a128) control_pane

0x9b12,	// (0x000192cd) stacon_bottom_pane

0xa975,	// (0x0001a130) list_single_mce_smart_pane_t1_ParamLimits

0xa975,	// (0x0001a130) list_single_mce_smart_pane_t1

0xa988,	// (0x0001a143) list_single_mce_smart_pane_t2_ParamLimits

0xa988,	// (0x0001a143) list_single_mce_smart_pane_t2

0x0001,

0xf3c6,	// (0x0001eb81) list_single_mce_smart_pane_t_ParamLimits

0xf3c6,	// (0x0001eb81) list_single_mce_smart_pane_t

0x22a0,	// (0x00011a5b) compass_pane

0x22ab,	// (0x00011a66) main_location2_pane_t1

0x22c1,	// (0x00011a7c) main_location2_pane_t2

0x22d7,	// (0x00011a92) main_location2_pane_t3

0x0003,

0xf3cb,	// (0x0001eb86) main_location2_pane_t

0xa9a7,	// (0x0001a162) compass_pane_g1_ParamLimits

0xa9a7,	// (0x0001a162) compass_pane_g1

0x2325,	// (0x00011ae0) compass_pane_t1

0x2334,	// (0x00011aef) compass_pane_t2

0x0005,

0xf3d4,	// (0x0001eb8f) compass_pane_t

0x237f,	// (0x00011b3a) text_secondary_cp61

0xaa25,	// (0x0001a1e0) navi_pane_cams_g5

0xaaa1,	// (0x0001a25c) navi_pane_im_t1

0xaaaf,	// (0x0001a26a) navi_pane_mp_g1_ParamLimits

0xaaaf,	// (0x0001a26a) navi_pane_mp_g1

0xaac3,	// (0x0001a27e) navi_pane_mp_g2_ParamLimits

0xaac3,	// (0x0001a27e) navi_pane_mp_g2

0xaacf,	// (0x0001a28a) navi_pane_mp_g3_ParamLimits

0xaacf,	// (0x0001a28a) navi_pane_mp_g3

0x0002,

0xf3e8,	// (0x0001eba3) navi_pane_mp_g_ParamLimits

0xf3e8,	// (0x0001eba3) navi_pane_mp_g

0xaadb,	// (0x0001a296) navi_pane_mp_t1

0xaae9,	// (0x0001a2a4) navi_pane_mp_t2

0x0002,

0xf3ef,	// (0x0001ebaa) navi_pane_mp_t

0xab56,	// (0x0001a311) navi_pane_vt_g1

0xaadb,	// (0x0001a296) navi_pane_vt_t1

0xab5e,	// (0x0001a319) navi_slider_pane

0xa071,	// (0x0001982c) zooming_pane

0xab6e,	// (0x0001a329) navi_slider_pane_g1

0xab77,	// (0x0001a332) navi_slider_pane_g2

0x0006,

0xf3f6,	// (0x0001ebb1) navi_slider_pane_g

0xaba4,	// (0x0001a35f) aid_levels_zoom

0xabac,	// (0x0001a367) zooming_pane_g1

0xabb4,	// (0x0001a36f) zooming_pane_g2

0xabb4,	// (0x0001a36f) zooming_pane_g3

0x0002,

0xf405,	// (0x0001ebc0) zooming_pane_g

0xabbc,	// (0x0001a377) level_10_zoom

0xabc5,	// (0x0001a380) level_11_zoom

0xabce,	// (0x0001a389) level_1_zoom

0xabd7,	// (0x0001a392) level_2_zoom

0xabe0,	// (0x0001a39b) level_3_zoom

0xabe9,	// (0x0001a3a4) level_4_zoom

0xabf2,	// (0x0001a3ad) level_5_zoom

0xabfb,	// (0x0001a3b6) level_6_zoom

0xac04,	// (0x0001a3bf) level_7_zoom

0xac0d,	// (0x0001a3c8) level_8_zoom

0xac16,	// (0x0001a3d1) level_9_zoom

0xac27,	// (0x0001a3e2) popup_phob_thumbnail_window_g1

0xac2f,	// (0x0001a3ea) popup_phob_thumbnail_window_g2

0x0001,

0xf40c,	// (0x0001ebc7) popup_phob_thumbnail_window_g

0xbfc4,	// (0x0001b77f) level_1_location

0xbfcc,	// (0x0001b787) level_2_location

0xbfd4,	// (0x0001b78f) level_3_location

0xbfdc,	// (0x0001b797) level_4_location

0xa071,	// (0x0001982c) level_5_location

0x23d0,	// (0x00011b8b) mce_icon_pane_g1

0x23da,	// (0x00011b95) mce_icon_pane_g2

0x0001,

0xf411,	// (0x0001ebcc) mce_icon_pane_g

0x23e2,	// (0x00011b9d) main_mup_pane_g1_ParamLimits

0x23e2,	// (0x00011b9d) main_mup_pane_g1

0x23f8,	// (0x00011bb3) main_mup_pane_g2_ParamLimits

0x23f8,	// (0x00011bb3) main_mup_pane_g2

0x2410,	// (0x00011bcb) main_mup_pane_g3_ParamLimits

0x2410,	// (0x00011bcb) main_mup_pane_g3

0x2428,	// (0x00011be3) main_mup_pane_g4_ParamLimits

0x2428,	// (0x00011be3) main_mup_pane_g4

0x243a,	// (0x00011bf5) main_mup_pane_g5_ParamLimits

0x243a,	// (0x00011bf5) main_mup_pane_g5

0x2456,	// (0x00011c11) main_mup_pane_g6_ParamLimits

0x2456,	// (0x00011c11) main_mup_pane_g6

0x2470,	// (0x00011c2b) main_mup_pane_g7_ParamLimits

0x2470,	// (0x00011c2b) main_mup_pane_g7

0x248e,	// (0x00011c49) main_mup_pane_g8_ParamLimits

0x248e,	// (0x00011c49) main_mup_pane_g8

0x24ac,	// (0x00011c67) main_mup_pane_g9_ParamLimits

0x24ac,	// (0x00011c67) main_mup_pane_g9

0x24c8,	// (0x00011c83) main_mup_pane_g10_ParamLimits

0x24c8,	// (0x00011c83) main_mup_pane_g10

0x24e6,	// (0x00011ca1) main_mup_pane_g11_ParamLimits

0x24e6,	// (0x00011ca1) main_mup_pane_g11

0x2500,	// (0x00011cbb) main_mup_pane_g12_ParamLimits

0x2500,	// (0x00011cbb) main_mup_pane_g12

0x2516,	// (0x00011cd1) main_mup_pane_g13_ParamLimits

0x2516,	// (0x00011cd1) main_mup_pane_g13

0x000c,

0xf416,	// (0x0001ebd1) main_mup_pane_g_ParamLimits

0xf416,	// (0x0001ebd1) main_mup_pane_g

0x252a,	// (0x00011ce5) main_mup_pane_t1_ParamLimits

0x252a,	// (0x00011ce5) main_mup_pane_t1

0x2546,	// (0x00011d01) main_mup_pane_t2_ParamLimits

0x2546,	// (0x00011d01) main_mup_pane_t2

0x255e,	// (0x00011d19) main_mup_pane_t3_ParamLimits

0x255e,	// (0x00011d19) main_mup_pane_t3

0x2576,	// (0x00011d31) main_mup_pane_t4_ParamLimits

0x2576,	// (0x00011d31) main_mup_pane_t4

0x2594,	// (0x00011d4f) main_mup_pane_t5_ParamLimits

0x2594,	// (0x00011d4f) main_mup_pane_t5

0x25a9,	// (0x00011d64) main_mup_pane_t6_ParamLimits

0x25a9,	// (0x00011d64) main_mup_pane_t6

0x0005,

0xf431,	// (0x0001ebec) main_mup_pane_t_ParamLimits

0xf431,	// (0x0001ebec) main_mup_pane_t

0x25bb,	// (0x00011d76) mup_progress_pane_ParamLimits

0x25bb,	// (0x00011d76) mup_progress_pane

0x25c7,	// (0x00011d82) mup_visualizer_pane_ParamLimits

0x25c7,	// (0x00011d82) mup_visualizer_pane

0x25fb,	// (0x00011db6) mup_volume_pane_ParamLimits

0x25fb,	// (0x00011db6) mup_volume_pane

0xac37,	// (0x0001a3f2) mup_visualizer_pane_g1_ParamLimits

0xac37,	// (0x0001a3f2) mup_visualizer_pane_g1

0xac37,	// (0x0001a3f2) mup_visualizer_pane_g2_ParamLimits

0xac37,	// (0x0001a3f2) mup_visualizer_pane_g2

0xa9a7,	// (0x0001a162) mup_visualizer_pane_g3_ParamLimits

0xa9a7,	// (0x0001a162) mup_visualizer_pane_g3

0x0002,

0xf43e,	// (0x0001ebf9) mup_visualizer_pane_g_ParamLimits

0xf43e,	// (0x0001ebf9) mup_visualizer_pane_g

0x9ecd,	// (0x00019688) mup_volume_pane_g1

0xac4d,	// (0x0001a408) mup_volume_pane_g2

0x0001,

0xf445,	// (0x0001ec00) mup_volume_pane_g

0x9ecd,	// (0x00019688) mup_progress_pane_g1

0xac56,	// (0x0001a411) mup_progress_pane_g2

0xac5f,	// (0x0001a41a) mup_progress_pane_g3

0x0002,

0xf44a,	// (0x0001ec05) mup_progress_pane_g

0x9b12,	// (0x000192cd) bg_popup_window_pane_cp05

0xac68,	// (0x0001a423) heading_pane_cp02_ParamLimits

0xac68,	// (0x0001a423) heading_pane_cp02

0xac84,	// (0x0001a43f) list_popup_blid_pane

0xac8c,	// (0x0001a447) list_blid_sat_info_pane_ParamLimits

0xac8c,	// (0x0001a447) list_blid_sat_info_pane

0xac9f,	// (0x0001a45a) list_blid_sat_info_pane_g1

0xaca7,	// (0x0001a462) list_blid_sat_info_pane_t1

0x2725,	// (0x00011ee0) mup_equalizer_pane_ParamLimits

0x2725,	// (0x00011ee0) mup_equalizer_pane

0x2746,	// (0x00011f01) mup_equalizer_pane_cp1_ParamLimits

0x2746,	// (0x00011f01) mup_equalizer_pane_cp1

0x2767,	// (0x00011f22) mup_equalizer_pane_cp2_ParamLimits

0x2767,	// (0x00011f22) mup_equalizer_pane_cp2

0x278c,	// (0x00011f47) mup_equalizer_pane_cp3_ParamLimits

0x278c,	// (0x00011f47) mup_equalizer_pane_cp3

0x27b5,	// (0x00011f70) mup_equalizer_pane_cp4_ParamLimits

0x27b5,	// (0x00011f70) mup_equalizer_pane_cp4

0x27de,	// (0x00011f99) mup_equalizer_pane_cp5

0x27f6,	// (0x00011fb1) mup_equalizer_pane_cp6

0x280e,	// (0x00011fc9) mup_equalizer_pane_cp7

0xbede,	// (0x0001b699) bg_popup_call_poc_act_pane_g9

0xbee6,	// (0x0001b6a1) bg_popup_call_poc_act_pane_g10

0xbeee,	// (0x0001b6a9) bg_popup_call_poc_act_pane_g11

0x000a,

0x9d6d,	// (0x00019528) mup_scale_pane

0x9ecd,	// (0x00019688) mup_scale_pane_g1

0xacb5,	// (0x0001a470) mup_scale_pane_g2

0x0006,

0xf466,	// (0x0001ec21) mup_scale_pane_g

0xacd9,	// (0x0001a494) msg_data_pane

0xace1,	// (0x0001a49c) scroll_pane_cp017

0x2838,	// (0x00011ff3) bg_list_pane_cp04_ParamLimits

0x2838,	// (0x00011ff3) bg_list_pane_cp04

0xacf1,	// (0x0001a4ac) msg_data_pane_g1

0x2858,	// (0x00012013) msg_data_pane_g2

0x2862,	// (0x0001201d) msg_data_pane_g3

0x286c,	// (0x00012027) msg_data_pane_g4

0x2874,	// (0x0001202f) msg_data_pane_g5

0x287c,	// (0x00012037) msg_data_pane_g6

0x2884,	// (0x0001203f) msg_data_pane_g7

0x0006,

0xf475,	// (0x0001ec30) msg_data_pane_g

0x288c,	// (0x00012047) msg_text_pane_ParamLimits

0x288c,	// (0x00012047) msg_text_pane

0x28c5,	// (0x00012080) qrid_highlight_pane_cp011_ParamLimits

0x28c5,	// (0x00012080) qrid_highlight_pane_cp011

0x9b12,	// (0x000192cd) msg_body_pane

0x9b12,	// (0x000192cd) msg_header_pane

0xad02,	// (0x0001a4bd) input_focus_pane_cp07

0xad17,	// (0x0001a4d2) msg_header_pane_t1_ParamLimits

0xad17,	// (0x0001a4d2) msg_header_pane_t1

0xad29,	// (0x0001a4e4) msg_header_pane_t2_ParamLimits

0xad29,	// (0x0001a4e4) msg_header_pane_t2

0x0001,

0xf489,	// (0x0001ec44) msg_header_pane_t_ParamLimits

0xf489,	// (0x0001ec44) msg_header_pane_t

0xad3b,	// (0x0001a4f6) msg_body_pane_g1

0x28e9,	// (0x000120a4) msg_body_pane_t1_ParamLimits

0x28e9,	// (0x000120a4) msg_body_pane_t1

0xad43,	// (0x0001a4fe) msg_body_pane_t2_ParamLimits

0xad43,	// (0x0001a4fe) msg_body_pane_t2

0xad55,	// (0x0001a510) msg_body_pane_t3_ParamLimits

0xad55,	// (0x0001a510) msg_body_pane_t3

0x0002,

0xf48e,	// (0x0001ec49) msg_body_pane_t_ParamLimits

0xf48e,	// (0x0001ec49) msg_body_pane_t

0x2954,	// (0x0001210f) main_viewer_pane_g1_ParamLimits

0x2954,	// (0x0001210f) main_viewer_pane_g1

0x2962,	// (0x0001211d) main_viewer_pane_g2_ParamLimits

0x2962,	// (0x0001211d) main_viewer_pane_g2

0x2970,	// (0x0001212b) main_viewer_pane_g3_ParamLimits

0x2970,	// (0x0001212b) main_viewer_pane_g3

0x297f,	// (0x0001213a) main_viewer_pane_g4_ParamLimits

0x297f,	// (0x0001213a) main_viewer_pane_g4

0xad7f,	// (0x0001a53a) main_viewer_pane_g5_ParamLimits

0xad7f,	// (0x0001a53a) main_viewer_pane_g5

0xad7f,	// (0x0001a53a) main_viewer_pane_g7_ParamLimits

0xad7f,	// (0x0001a53a) main_viewer_pane_g7

0xad91,	// (0x0001a54c) main_viewer_pane_g8_ParamLimits

0xad91,	// (0x0001a54c) main_viewer_pane_g8

0x0007,

0xf49e,	// (0x0001ec59) main_viewer_pane_g_ParamLimits

0xf49e,	// (0x0001ec59) main_viewer_pane_g

0xada9,	// (0x0001a564) viewer_content_pane_ParamLimits

0xada9,	// (0x0001a564) viewer_content_pane

0x29bd,	// (0x00012178) main_postcard_pane_g1_ParamLimits

0x29bd,	// (0x00012178) main_postcard_pane_g1

0x29d3,	// (0x0001218e) main_postcard_pane_g2_ParamLimits

0x29d3,	// (0x0001218e) main_postcard_pane_g2

0x29e9,	// (0x000121a4) main_postcard_pane_g3_ParamLimits

0x29e9,	// (0x000121a4) main_postcard_pane_g3

0x0005,

0xf4af,	// (0x0001ec6a) main_postcard_pane_g_ParamLimits

0xf4af,	// (0x0001ec6a) main_postcard_pane_g

0x2a00,	// (0x000121bb) main_postcard_pane_g4

0xc12f,	// (0x0001b8ea) smil_status_volume_pane_g2

0x2a43,	// (0x000121fe) postcard_pane_ParamLimits

0x2a43,	// (0x000121fe) postcard_pane

0xadb7,	// (0x0001a572) postcard_pane_g1_ParamLimits

0xadb7,	// (0x0001a572) postcard_pane_g1

0x2a93,	// (0x0001224e) postcard_pane_g2_ParamLimits

0x2a93,	// (0x0001224e) postcard_pane_g2

0x2a9f,	// (0x0001225a) postcard_pane_g3_ParamLimits

0x2a9f,	// (0x0001225a) postcard_pane_g3

0xadc5,	// (0x0001a580) postcard_pane_g4_ParamLimits

0xadc5,	// (0x0001a580) postcard_pane_g4

0x2aab,	// (0x00012266) postcard_pane_g5_ParamLimits

0x2aab,	// (0x00012266) postcard_pane_g5

0x2ac0,	// (0x0001227b) postcard_pane_g6_ParamLimits

0x2ac0,	// (0x0001227b) postcard_pane_g6

0xadb7,	// (0x0001a572) postcard_pane_g7_ParamLimits

0xadb7,	// (0x0001a572) postcard_pane_g7

0x0006,

0xf4bc,	// (0x0001ec77) postcard_pane_g_ParamLimits

0xf4bc,	// (0x0001ec77) postcard_pane_g

0x2ad8,	// (0x00012293) main_mp2_pane_g1_ParamLimits

0x2ad8,	// (0x00012293) main_mp2_pane_g1

0x2ae6,	// (0x000122a1) main_mp2_pane_g2_ParamLimits

0x2ae6,	// (0x000122a1) main_mp2_pane_g2

0x2af2,	// (0x000122ad) main_mp2_pane_g3_ParamLimits

0x2af2,	// (0x000122ad) main_mp2_pane_g3

0x0002,

0xf4cb,	// (0x0001ec86) main_mp2_pane_g_ParamLimits

0xf4cb,	// (0x0001ec86) main_mp2_pane_g

0x2afe,	// (0x000122b9) main_mp2_pane_t1_ParamLimits

0x2afe,	// (0x000122b9) main_mp2_pane_t1

0x2b15,	// (0x000122d0) main_mp2_pane_t2_ParamLimits

0x2b15,	// (0x000122d0) main_mp2_pane_t2

0x2b29,	// (0x000122e4) main_mp2_pane_t3_ParamLimits

0x2b29,	// (0x000122e4) main_mp2_pane_t3

0x0002,

0xf4d2,	// (0x0001ec8d) main_mp2_pane_t_ParamLimits

0xf4d2,	// (0x0001ec8d) main_mp2_pane_t

0xadd3,	// (0x0001a58e) pec_content_pane_ParamLimits

0xadd3,	// (0x0001a58e) pec_content_pane

0xa23d,	// (0x000199f8) scroll_pane_cp015

0xade5,	// (0x0001a5a0) pec_attribute_pane_ParamLimits

0xade5,	// (0x0001a5a0) pec_attribute_pane

0x2b3b,	// (0x000122f6) pec_content_pane_g1_ParamLimits

0x2b3b,	// (0x000122f6) pec_content_pane_g1

0xadf5,	// (0x0001a5b0) pec_content_pane_t1_ParamLimits

0xadf5,	// (0x0001a5b0) pec_content_pane_t1

0xae07,	// (0x0001a5c2) pec_content_pane_t2_ParamLimits

0xae07,	// (0x0001a5c2) pec_content_pane_t2

0x0001,

0xf4d9,	// (0x0001ec94) pec_content_pane_t_ParamLimits

0xf4d9,	// (0x0001ec94) pec_content_pane_t

0x2b47,	// (0x00012302) list_single_graphic_pane_cp01_ParamLimits

0x2b47,	// (0x00012302) list_single_graphic_pane_cp01

0x9d6d,	// (0x00019528) bg_popup_sub_pane_cp04

0xae19,	// (0x0001a5d4) popup_mup_playback_window_g1

0xae25,	// (0x0001a5e0) popup_mup_playback_window_t1

0xae3a,	// (0x0001a5f5) popup_mup_playback_window_t2

0x0001,

0xf4de,	// (0x0001ec99) popup_mup_playback_window_t

0xae71,	// (0x0001a62c) main_image_pane_g1_ParamLimits

0xae71,	// (0x0001a62c) main_image_pane_g1

0xaeb4,	// (0x0001a66f) scroll_pane_cp018_ParamLimits

0xaeb4,	// (0x0001a66f) scroll_pane_cp018

0xaecc,	// (0x0001a687) scroll_pane_cp016_ParamLimits

0xaecc,	// (0x0001a687) scroll_pane_cp016

0x2c19,	// (0x000123d4) smil2_image_pane_ParamLimits

0x2c19,	// (0x000123d4) smil2_image_pane

0x2c4f,	// (0x0001240a) smil2_root_pane_ParamLimits

0x2c4f,	// (0x0001240a) smil2_root_pane

0x2c87,	// (0x00012442) smil2_text_pane_ParamLimits

0x2c87,	// (0x00012442) smil2_text_pane

0x9b12,	// (0x000192cd) bg_list_pane_cp06

0xaf08,	// (0x0001a6c3) grid_radio_pane

0x9b12,	// (0x000192cd) bg_popup_window_pane_cp06

0xaf12,	// (0x0001a6cd) main_fmradio_pane_t1

0xa824,	// (0x00019fdf) heading_pane_cp04

0xaf20,	// (0x0001a6db) main_fmradio_pane_t2

0xbef6,	// (0x0001b6b1) popup_cale_lunar_info_window_g1

0xaf2e,	// (0x0001a6e9) main_fmradio_pane_t3

0xbefe,	// (0x0001b6b9) popup_cale_lunar_info_window_g2

0xaf3e,	// (0x0001a6f9) main_fmradio_pane_t4

0x0001,

0xaf4c,	// (0x0001a707) main_fmradio_pane_t5

0x0004,

0xf5b9,	// (0x0001ed74) popup_cale_lunar_info_window_g

0xf4f3,	// (0x0001ecae) main_fmradio_pane_t

0xaf5a,	// (0x0001a715) wait_bar_pane_cp03

0xaf62,	// (0x0001a71d) cell_fmradio_pane_ParamLimits

0xaf62,	// (0x0001a71d) cell_fmradio_pane

0xadb7,	// (0x0001a572) cell_fmradio_pane_g1_ParamLimits

0xadb7,	// (0x0001a572) cell_fmradio_pane_g1

0x9b12,	// (0x000192cd) grid_highlight_pane_cp011

0xaf77,	// (0x0001a732) poc_content_pane_ParamLimits

0xaf77,	// (0x0001a732) poc_content_pane

0xaf89,	// (0x0001a744) scroll_pane_cp019

0x2d17,	// (0x000124d2) popup_call_poc_act_window_ParamLimits

0x2d17,	// (0x000124d2) popup_call_poc_act_window

0x2d3b,	// (0x000124f6) popup_call_poc_inact_window_ParamLimits

0x2d3b,	// (0x000124f6) popup_call_poc_inact_window

0xf590,	// (0x0001ed4b) bg_popup_call_poc_act_pane_g

0xbe6e,	// (0x0001b629) bg_popup_call_poc_inact_pane_g1

0xbe76,	// (0x0001b631) bg_popup_call_poc_inact_pane_g2

0xaf91,	// (0x0001a74c) popup_call_poc_act_window_g2

0xbe7e,	// (0x0001b639) bg_popup_call_poc_inact_pane_g3

0xbe86,	// (0x0001b641) bg_popup_call_poc_inact_pane_g4

0xbe8e,	// (0x0001b649) bg_popup_call_poc_inact_pane_g5

0xaf99,	// (0x0001a754) popup_call_poc_act_window_t1_ParamLimits

0xaf99,	// (0x0001a754) popup_call_poc_act_window_t1

0xafc1,	// (0x0001a77c) popup_call_poc_act_window_t2_ParamLimits

0xafc1,	// (0x0001a77c) popup_call_poc_act_window_t2

0xafe9,	// (0x0001a7a4) popup_call_poc_act_window_t3_ParamLimits

0xafe9,	// (0x0001a7a4) popup_call_poc_act_window_t3

0xb011,	// (0x0001a7cc) popup_call_poc_act_window_t4_ParamLimits

0xb011,	// (0x0001a7cc) popup_call_poc_act_window_t4

0x0003,

0xf4fe,	// (0x0001ecb9) popup_call_poc_act_window_t_ParamLimits

0xf4fe,	// (0x0001ecb9) popup_call_poc_act_window_t

0xbe96,	// (0x0001b651) bg_popup_call_poc_inact_pane_g6

0xbe9e,	// (0x0001b659) bg_popup_call_poc_inact_pane_g7

0xbea6,	// (0x0001b661) bg_popup_call_poc_inact_pane_g8

0xb023,	// (0x0001a7de) popup_call_poc_inact_window_g2

0xbeae,	// (0x0001b669) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf57d,	// (0x0001ed38) bg_popup_call_poc_inact_pane_g

0xb02b,	// (0x0001a7e6) popup_call_poc_inact_window_t1_ParamLimits

0xb02b,	// (0x0001a7e6) popup_call_poc_inact_window_t1

0xb040,	// (0x0001a7fb) popup_call_poc_inact_window_t2_ParamLimits

0xb040,	// (0x0001a7fb) popup_call_poc_inact_window_t2

0xb055,	// (0x0001a810) popup_call_poc_inact_window_t3_ParamLimits

0xb055,	// (0x0001a810) popup_call_poc_inact_window_t3

0x0002,

0xf507,	// (0x0001ecc2) popup_call_poc_inact_window_t_ParamLimits

0xf507,	// (0x0001ecc2) popup_call_poc_inact_window_t

0xc08f,	// (0x0001b84a) context_pane_ParamLimits

0x35d4,	// (0x00012d8f) signal_pane_ParamLimits

0xa071,	// (0x0001982c) main_call2_pane

0xc068,	// (0x0001b823) popup_phob_thumbnail2_window_ParamLimits

0xc068,	// (0x0001b823) popup_phob_thumbnail2_window

0xad67,	// (0x0001a522) aid_hotspot_pointer_arrow_pane

0xad6f,	// (0x0001a52a) aid_hotspot_pointer_hand_pane

0x30a6,	// (0x00012861) phob_pre_status_pane_g5

0x09a4,	// (0x0001015f) cams_zoom_pane_ParamLimits

0x09b3,	// (0x0001016e) image_vga_pane_ParamLimits

0x09cd,	// (0x00010188) main_camera_pane_g1_ParamLimits

0x09df,	// (0x0001019a) main_camera_pane_g2_ParamLimits

0x09ef,	// (0x000101aa) main_camera_pane_g3_ParamLimits

0x0a03,	// (0x000101be) main_camera_pane_g4_ParamLimits

0x0a17,	// (0x000101d2) main_camera_pane_g5_ParamLimits

0x0a2b,	// (0x000101e6) main_camera_pane_g6_ParamLimits

0x0a3f,	// (0x000101fa) main_camera_pane_g7_ParamLimits

0xf206,	// (0x0001e9c1) main_camera_pane_g_ParamLimits

0x0a53,	// (0x0001020e) main_camera_pane_t1_ParamLimits

0x0a69,	// (0x00010224) main_camera_pane_t2_ParamLimits

0xf217,	// (0x0001e9d2) main_camera_pane_t_ParamLimits

0x9d6d,	// (0x00019528) bg_popup_preview_window_pane_cp01_ParamLimits

0x9d6d,	// (0x00019528) bg_popup_preview_window_pane_cp01

0xb06a,	// (0x0001a825) popup_phob_thumbnail2_window_g1_ParamLimits

0xb06a,	// (0x0001a825) popup_phob_thumbnail2_window_g1

0x9b12,	// (0x000192cd) call2_cli_visual_pane

0x2d6f,	// (0x0001252a) popup_call2_audio_conf_window_ParamLimits

0x2d6f,	// (0x0001252a) popup_call2_audio_conf_window

0x2d97,	// (0x00012552) popup_call2_audio_first_window_ParamLimits

0x2d97,	// (0x00012552) popup_call2_audio_first_window

0x2e2d,	// (0x000125e8) popup_call2_audio_in_window_ParamLimits

0x2e2d,	// (0x000125e8) popup_call2_audio_in_window

0x2e79,	// (0x00012634) popup_call2_audio_out_window_ParamLimits

0x2e79,	// (0x00012634) popup_call2_audio_out_window

0x2eeb,	// (0x000126a6) popup_call2_audio_second_window_ParamLimits

0x2eeb,	// (0x000126a6) popup_call2_audio_second_window

0x2f51,	// (0x0001270c) popup_call2_audio_wait_window_ParamLimits

0x2f51,	// (0x0001270c) popup_call2_audio_wait_window

0x9b12,	// (0x000192cd) bg_popup_call2_act_pane_cp03

0x9d4f,	// (0x0001950a) list_conf_pane_cp

0xb076,	// (0x0001a831) popup_call2_audio_conf_window_t1

0xb084,	// (0x0001a83f) list_single_graphic_popup_conf2_pane_ParamLimits

0xb084,	// (0x0001a83f) list_single_graphic_popup_conf2_pane

0xa893,	// (0x0001a04e) list_highlight_pane_cp04

0xb097,	// (0x0001a852) list_single_graphic_popup_conf2_pane_g1

0xa8a4,	// (0x0001a05f) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf50e,	// (0x0001ecc9) list_single_graphic_popup_conf2_pane_g

0xb0a1,	// (0x0001a85c) list_single_graphic_popup_conf2_pane_t1

0xb0af,	// (0x0001a86a) bg_popup_call2_act_pane_cp01_ParamLimits

0xb0af,	// (0x0001a86a) bg_popup_call2_act_pane_cp01

0xb139,	// (0x0001a8f4) call_type_pane_cp05_ParamLimits

0xb139,	// (0x0001a8f4) call_type_pane_cp05

0xb18d,	// (0x0001a948) popup_call2_audio_second_window_g1_ParamLimits

0xb18d,	// (0x0001a948) popup_call2_audio_second_window_g1

0xb1e1,	// (0x0001a99c) popup_call2_audio_second_window_g2_ParamLimits

0xb1e1,	// (0x0001a99c) popup_call2_audio_second_window_g2

0x0002,

0xf513,	// (0x0001ecce) popup_call2_audio_second_window_g_ParamLimits

0xf513,	// (0x0001ecce) popup_call2_audio_second_window_g

0xb246,	// (0x0001aa01) popup_call2_audio_second_window_t1_ParamLimits

0xb246,	// (0x0001aa01) popup_call2_audio_second_window_t1

0xb301,	// (0x0001aabc) popup_call2_audio_second_window_t2_ParamLimits

0xb301,	// (0x0001aabc) popup_call2_audio_second_window_t2

0xb354,	// (0x0001ab0f) popup_call2_audio_second_window_t3_ParamLimits

0xb354,	// (0x0001ab0f) popup_call2_audio_second_window_t3

0x0003,

0xf51a,	// (0x0001ecd5) popup_call2_audio_second_window_t_ParamLimits

0xf51a,	// (0x0001ecd5) popup_call2_audio_second_window_t

0x9b12,	// (0x000192cd) bg_popup_call2_in_pane_cp02

0x9b1c,	// (0x000192d7) call_type_pane_cp04

0x9b24,	// (0x000192df) popup_call2_audio_wait_window_g1

0x9b2c,	// (0x000192e7) popup_call2_audio_wait_window_g2

0x0001,

0xf0f5,	// (0x0001e8b0) popup_call2_audio_wait_window_g

0x9b34,	// (0x000192ef) popup_call2_audio_wait_window_t3

0xb447,	// (0x0001ac02) bg_popup_call2_act_pane_ParamLimits

0xb447,	// (0x0001ac02) bg_popup_call2_act_pane

0xb507,	// (0x0001acc2) call_type_pane_cp03_ParamLimits

0xb507,	// (0x0001acc2) call_type_pane_cp03

0xb56b,	// (0x0001ad26) popup_call2_audio_first_window_g1_ParamLimits

0xb56b,	// (0x0001ad26) popup_call2_audio_first_window_g1

0xb5db,	// (0x0001ad96) popup_call2_audio_first_window_g2_ParamLimits

0xb5db,	// (0x0001ad96) popup_call2_audio_first_window_g2

0xac37,	// (0x0001a3f2) popup_call2_audio_first_window_g3_ParamLimits

0xac37,	// (0x0001a3f2) popup_call2_audio_first_window_g3

0x0004,

0xf523,	// (0x0001ecde) popup_call2_audio_first_window_g_ParamLimits

0xf523,	// (0x0001ecde) popup_call2_audio_first_window_g

0xb6b9,	// (0x0001ae74) popup_call2_audio_first_window_t1_ParamLimits

0xb6b9,	// (0x0001ae74) popup_call2_audio_first_window_t1

0xb7bc,	// (0x0001af77) popup_call2_audio_first_window_t4_ParamLimits

0xb7bc,	// (0x0001af77) popup_call2_audio_first_window_t4

0xb89f,	// (0x0001b05a) popup_call2_audio_first_window_t5_ParamLimits

0xb89f,	// (0x0001b05a) popup_call2_audio_first_window_t5

0x0003,

0xf52e,	// (0x0001ece9) popup_call2_audio_first_window_t_ParamLimits

0xf52e,	// (0x0001ece9) popup_call2_audio_first_window_t

0x9d65,	// (0x00019520) bg_popup_call2_act_pane_g1

0xbf08,	// (0x0001b6c3) popup_cale_lunar_info_window_t1

0xbf16,	// (0x0001b6d1) popup_cale_lunar_info_window_t2

0xbf24,	// (0x0001b6df) popup_cale_lunar_info_window_t3

0x9b12,	// (0x000192cd) bg_popup_call2_bubble_pane

0xb9a0,	// (0x0001b15b) bg_popup_call2_in_pane_cp01_ParamLimits

0xb9a0,	// (0x0001b15b) bg_popup_call2_in_pane_cp01

0x97ee,	// (0x00018fa9) call_type_pane_cp02

0xb9e8,	// (0x0001b1a3) popup_call2_audio_out_window_g1_ParamLimits

0xb9e8,	// (0x0001b1a3) popup_call2_audio_out_window_g1

0xba14,	// (0x0001b1cf) popup_call2_audio_out_window_g2_ParamLimits

0xba14,	// (0x0001b1cf) popup_call2_audio_out_window_g2

0xba3c,	// (0x0001b1f7) popup_call2_audio_out_window_g3_ParamLimits

0xba3c,	// (0x0001b1f7) popup_call2_audio_out_window_g3

0x0003,

0xf537,	// (0x0001ecf2) popup_call2_audio_out_window_g_ParamLimits

0xf537,	// (0x0001ecf2) popup_call2_audio_out_window_g

0xba77,	// (0x0001b232) popup_call2_audio_out_window_t1_ParamLimits

0xba77,	// (0x0001b232) popup_call2_audio_out_window_t1

0xbad6,	// (0x0001b291) popup_call2_audio_out_window_t2_ParamLimits

0xbad6,	// (0x0001b291) popup_call2_audio_out_window_t2

0xbb2a,	// (0x0001b2e5) popup_call2_audio_out_window_t3_ParamLimits

0xbb2a,	// (0x0001b2e5) popup_call2_audio_out_window_t3

0xbb40,	// (0x0001b2fb) popup_call2_audio_out_window_t4_ParamLimits

0xbb40,	// (0x0001b2fb) popup_call2_audio_out_window_t4

0xbb56,	// (0x0001b311) popup_call2_audio_out_window_t5_ParamLimits

0xbb56,	// (0x0001b311) popup_call2_audio_out_window_t5

0x0005,

0xf540,	// (0x0001ecfb) popup_call2_audio_out_window_t_ParamLimits

0xf540,	// (0x0001ecfb) popup_call2_audio_out_window_t

0xbbba,	// (0x0001b375) bg_popup_call2_in_pane_ParamLimits

0xbbba,	// (0x0001b375) bg_popup_call2_in_pane

0xbc16,	// (0x0001b3d1) popup_call2_audio_in_window_g1_ParamLimits

0xbc16,	// (0x0001b3d1) popup_call2_audio_in_window_g1

0xbc4e,	// (0x0001b409) popup_call2_audio_in_window_g2_ParamLimits

0xbc4e,	// (0x0001b409) popup_call2_audio_in_window_g2

0xbc86,	// (0x0001b441) popup_call2_audio_in_window_g3_ParamLimits

0xbc86,	// (0x0001b441) popup_call2_audio_in_window_g3

0x0003,

0xf54d,	// (0x0001ed08) popup_call2_audio_in_window_g_ParamLimits

0xf54d,	// (0x0001ed08) popup_call2_audio_in_window_g

0xbcde,	// (0x0001b499) popup_call2_audio_in_window_t1_ParamLimits

0xbcde,	// (0x0001b499) popup_call2_audio_in_window_t1

0xbd5e,	// (0x0001b519) popup_call2_audio_in_window_t2_ParamLimits

0xbd5e,	// (0x0001b519) popup_call2_audio_in_window_t2

0xbdde,	// (0x0001b599) popup_call2_audio_in_window_t3_ParamLimits

0xbdde,	// (0x0001b599) popup_call2_audio_in_window_t3

0xbdf8,	// (0x0001b5b3) popup_call2_audio_in_window_t4_ParamLimits

0xbdf8,	// (0x0001b5b3) popup_call2_audio_in_window_t4

0xbe0a,	// (0x0001b5c5) popup_call2_audio_in_window_t5_ParamLimits

0xbe0a,	// (0x0001b5c5) popup_call2_audio_in_window_t5

0xbe1c,	// (0x0001b5d7) popup_call2_audio_in_window_t6_ParamLimits

0xbe1c,	// (0x0001b5d7) popup_call2_audio_in_window_t6

0x0005,

0xf556,	// (0x0001ed11) popup_call2_audio_in_window_t_ParamLimits

0xf556,	// (0x0001ed11) popup_call2_audio_in_window_t

0x9d65,	// (0x00019520) bg_popup_call2_in_pane_g1

0xbf32,	// (0x0001b6ed) popup_cale_lunar_info_window_t4

0x0003,

0xf5be,	// (0x0001ed79) popup_cale_lunar_info_window_t

0x9d6d,	// (0x00019528) bg_popup_call2_rect_pane_ParamLimits

0x9d6d,	// (0x00019528) bg_popup_call2_rect_pane

0x9b12,	// (0x000192cd) call2_cli_visual_graphic_pane

0x9b12,	// (0x000192cd) call2_cli_visual_text_pane

0xc142,	// (0x0001b8fd) smil_status_volume_pane_g3

0x0002,

0x9ecd,	// (0x00019688) call2_cli_visual_graphic_pane_g1

0x9ecd,	// (0x00019688) call2_cli_visual_graphic_pane_g2

0x9ecd,	// (0x00019688) call2_cli_visual_graphic_pane_g3

0x0002,

0xf563,	// (0x0001ed1e) call2_cli_visual_graphic_pane_g

0xbe2e,	// (0x0001b5e9) bg_popup_call2_rect_pane_g1

0x9f62,	// (0x0001971d) bg_popup_call2_rect_pane_g2

0xbe36,	// (0x0001b5f1) bg_popup_call2_rect_pane_g3

0xbe3e,	// (0x0001b5f9) bg_popup_call2_rect_pane_g4

0xbe46,	// (0x0001b601) bg_popup_call2_rect_pane_g5

0xbe4e,	// (0x0001b609) bg_popup_call2_rect_pane_g6

0xbe56,	// (0x0001b611) bg_popup_call2_rect_pane_g7

0xbe5e,	// (0x0001b619) bg_popup_call2_rect_pane_g8

0xbe66,	// (0x0001b621) bg_popup_call2_rect_pane_g9

0x0008,

0xf56a,	// (0x0001ed25) bg_popup_call2_rect_pane_g

0xbe6e,	// (0x0001b629) bg_popup_call2_bubble_pane_g1

0xbe76,	// (0x0001b631) bg_popup_call2_bubble_pane_g2

0xbe7e,	// (0x0001b639) bg_popup_call2_bubble_pane_g3

0xbe86,	// (0x0001b641) bg_popup_call2_bubble_pane_g4

0xbe8e,	// (0x0001b649) bg_popup_call2_bubble_pane_g5

0xbe96,	// (0x0001b651) bg_popup_call2_bubble_pane_g6

0xbe9e,	// (0x0001b659) bg_popup_call2_bubble_pane_g7

0xbea6,	// (0x0001b661) bg_popup_call2_bubble_pane_g8

0xbeae,	// (0x0001b669) bg_popup_call2_bubble_pane_g9

0x0008,

0xf57d,	// (0x0001ed38) bg_popup_call2_bubble_pane_g

0x035f,	// (0x0000fb1a) aid_cale_week_size_cell_pane

0x0a83,	// (0x0001023e) aid_cams_cif_uncrop_pane_ParamLimits

0x0a83,	// (0x0001023e) aid_cams_cif_uncrop_pane

0x0c3c,	// (0x000103f7) aid_cams_size_cell_ParamLimits

0x0c3c,	// (0x000103f7) aid_cams_size_cell

0x0c50,	// (0x0001040b) grid_cams_pane_ParamLimits

0x0c6a,	// (0x00010425) linegrid_cams_pane_ParamLimits

0x0e5f,	// (0x0001061a) call_video_pane_t1

0x0e79,	// (0x00010634) call_video_pane_t2

0x0001,

0xf26a,	// (0x0001ea25) call_video_pane_t

0x12c6,	// (0x00010a81) aid_cale_month_size_cell_pane_ParamLimits

0x12c6,	// (0x00010a81) aid_cale_month_size_cell_pane

0xf607,	// (0x0001edc2) smil_status_volume_pane_g

0xc14f,	// (0x0001b90a) volume_smil_pane_ParamLimits

0x9659,	// (0x00018e14) aid_popup2_width_pane

0x02b2,	// (0x0000fa6d) cell_qdial_pane_g4_ParamLimits

0x02b2,	// (0x0000fa6d) cell_qdial_pane_g4

0x2301,	// (0x00011abc) aid_blid_cardinal_pane_ParamLimits

0x2311,	// (0x00011acc) aid_blid_destination_pane_ParamLimits

0x2311,	// (0x00011acc) aid_blid_destination_pane

0x9d6d,	// (0x00019528) bg_popup_call_poc_act_pane_ParamLimits

0x9d6d,	// (0x00019528) bg_popup_call_poc_act_pane

0x9d6d,	// (0x00019528) bg_popup_call_poc_inact_pane_ParamLimits

0x9d6d,	// (0x00019528) bg_popup_call_poc_inact_pane

0xbeb6,	// (0x0001b671) bg_popup_call_poc_act_pane_g1

0xbebe,	// (0x0001b679) bg_popup_call_poc_act_pane_g2

0xbec6,	// (0x0001b681) bg_popup_call_poc_act_pane_g3

0xbe86,	// (0x0001b641) bg_popup_call_poc_act_pane_g4

0xbe8e,	// (0x0001b649) bg_popup_call_poc_act_pane_g5

0xbece,	// (0x0001b689) bg_popup_call_poc_act_pane_g6

0xbe9e,	// (0x0001b659) bg_popup_call_poc_act_pane_g7

0xbed6,	// (0x0001b691) bg_popup_call_poc_act_pane_g8

0x9b12,	// (0x000192cd) main_usb_pane

0xc03f,	// (0x0001b7fa) popup_cale_lunar_info_window

0x1146,	// (0x00010901) im_reading_pane_t1_ParamLimits

0xa195,	// (0x00019950) list_im_pane_ParamLimits

0xa1a6,	// (0x00019961) scroll_pane_cp07_ParamLimits

0x9b12,	// (0x000192cd) grid_highlight_pane_cp012

0x9d6d,	// (0x00019528) mup_scale_pane_ParamLimits

0xadb7,	// (0x0001a572) main_usb_pane_g1_ParamLimits

0xadb7,	// (0x0001a572) main_usb_pane_g1

0x2fb2,	// (0x0001276d) main_usb_pane_g2_ParamLimits

0x2fb2,	// (0x0001276d) main_usb_pane_g2

0x0001,

0xf5a7,	// (0x0001ed62) main_usb_pane_g_ParamLimits

0xf5a7,	// (0x0001ed62) main_usb_pane_g

0x2fc8,	// (0x00012783) main_usb_pane_t1_ParamLimits

0x2fc8,	// (0x00012783) main_usb_pane_t1

0x2fda,	// (0x00012795) main_usb_pane_t2_ParamLimits

0x2fda,	// (0x00012795) main_usb_pane_t2

0x2fec,	// (0x000127a7) main_usb_pane_t3_ParamLimits

0x2fec,	// (0x000127a7) main_usb_pane_t3

0x2ffe,	// (0x000127b9) main_usb_pane_t4_ParamLimits

0x2ffe,	// (0x000127b9) main_usb_pane_t4

0x3013,	// (0x000127ce) main_usb_pane_t5_ParamLimits

0x3013,	// (0x000127ce) main_usb_pane_t5

0x3028,	// (0x000127e3) main_usb_pane_t6_ParamLimits

0x3028,	// (0x000127e3) main_usb_pane_t6

0x0005,

0xf5ac,	// (0x0001ed67) main_usb_pane_t_ParamLimits

0x22a0,	// (0x00011a5b) aid_text_placing

0x22ab,	// (0x00011a66) main_location2_pane_t1_ParamLimits

0x22c1,	// (0x00011a7c) main_location2_pane_t2_ParamLimits

0x22d7,	// (0x00011a92) main_location2_pane_t3_ParamLimits

0x22ed,	// (0x00011aa8) main_location2_pane_t4_ParamLimits

0x22ed,	// (0x00011aa8) main_location2_pane_t4

0xf3cb,	// (0x0001eb86) main_location2_pane_t_ParamLimits

0x9da9,	// (0x00019564) find_pinb_pane_g2_ParamLimits

0x9da9,	// (0x00019564) find_pinb_pane_g2

0x0001,

0xf11b,	// (0x0001e8d6) find_pinb_pane_g_ParamLimits

0xf11b,	// (0x0001e8d6) find_pinb_pane_g

0x9db5,	// (0x00019570) find_pinb_pane_t1_ParamLimits

0x9dc7,	// (0x00019582) find_pinb_pane_t2_ParamLimits

0xf120,	// (0x0001e8db) find_pinb_pane_t_ParamLimits

0x9b12,	// (0x000192cd) main_call3_pane

0x18cb,	// (0x00011086) cale_month_day_heading_pane_t1_ParamLimits

0x1951,	// (0x0001110c) cale_month_day_heading_pane_t2_ParamLimits

0x19ca,	// (0x00011185) cale_month_day_heading_pane_t3_ParamLimits

0x1a43,	// (0x000111fe) cale_month_day_heading_pane_t4_ParamLimits

0x1ac4,	// (0x0001127f) cale_month_day_heading_pane_t5_ParamLimits

0x1b4d,	// (0x00011308) cale_month_day_heading_pane_t6_ParamLimits

0x1bde,	// (0x00011399) cale_month_day_heading_pane_t7_ParamLimits

0xf2a2,	// (0x0001ea5d) cale_month_day_heading_pane_t_ParamLimits

0xa3fc,	// (0x00019bb7) smil_status_volume_pane

0x2a67,	// (0x00012222) postcard_address_pane_ParamLimits

0x2a67,	// (0x00012222) postcard_address_pane

0x2a7d,	// (0x00012238) postcard_message_pane_ParamLimits

0x2a7d,	// (0x00012238) postcard_message_pane

0x2f8b,	// (0x00012746) call2_cli_visual_pane_t1_ParamLimits

0x2f8b,	// (0x00012746) call2_cli_visual_pane_t1

0x37e5,	// (0x00012fa0) postcard_message_pane_t1_ParamLimits

0x37e5,	// (0x00012fa0) postcard_message_pane_t1

0xc164,	// (0x0001b91f) postcard_address_pane_t1_ParamLimits

0xc164,	// (0x0001b91f) postcard_address_pane_t1

0x37d1,	// (0x00012f8c) popup_call3_audio_in_window_ParamLimits

0x37d1,	// (0x00012f8c) popup_call3_audio_in_window

0x3656,	// (0x00012e11) bg_popup_call3_in_pane_ParamLimits

0x3656,	// (0x00012e11) bg_popup_call3_in_pane

0x36d2,	// (0x00012e8d) popup_call3_audio_in_window_g1_ParamLimits

0x36d2,	// (0x00012e8d) popup_call3_audio_in_window_g1

0x36f2,	// (0x00012ead) popup_call3_audio_in_window_g2_ParamLimits

0x36f2,	// (0x00012ead) popup_call3_audio_in_window_g2

0x3712,	// (0x00012ecd) popup_call3_audio_in_window_g3_ParamLimits

0x3712,	// (0x00012ecd) popup_call3_audio_in_window_g3

0x0003,

0xf60e,	// (0x0001edc9) popup_call3_audio_in_window_g_ParamLimits

0xf60e,	// (0x0001edc9) popup_call3_audio_in_window_g

0x3743,	// (0x00012efe) popup_call3_audio_in_window_t1_ParamLimits

0x3743,	// (0x00012efe) popup_call3_audio_in_window_t1

0x3781,	// (0x00012f3c) popup_call3_audio_in_window_t2_ParamLimits

0x3781,	// (0x00012f3c) popup_call3_audio_in_window_t2

0x37bf,	// (0x00012f7a) popup_call3_audio_in_window_t3_ParamLimits

0x37bf,	// (0x00012f7a) popup_call3_audio_in_window_t3

0x0002,

0xf617,	// (0x0001edd2) popup_call3_audio_in_window_t_ParamLimits

0xf617,	// (0x0001edd2) popup_call3_audio_in_window_t

0xa071,	// (0x0001982c) bg_popup_call3_rect_pane

0xbe2e,	// (0x0001b5e9) bg_popup_call3_rect_pane_g1

0x9f62,	// (0x0001971d) bg_popup_call3_rect_pane_g2

0xbe36,	// (0x0001b5f1) bg_popup_call3_rect_pane_g3

0xbe3e,	// (0x0001b5f9) bg_popup_call3_rect_pane_g4

0xbe46,	// (0x0001b601) bg_popup_call3_rect_pane_g5

0xbe4e,	// (0x0001b609) bg_popup_call3_rect_pane_g6

0xbe56,	// (0x0001b611) bg_popup_call3_rect_pane_g7

0x2611,	// (0x00011dcc) mup_visualizer_osc_pane

0xac45,	// (0x0001a400) mup_visualizer_spec_pane

0x3686,	// (0x00012e41) call3_video_qcif_pane_ParamLimits

0x3686,	// (0x00012e41) call3_video_qcif_pane

0x3699,	// (0x00012e54) call3_video_qcif_uncrop_pane_ParamLimits

0x3699,	// (0x00012e54) call3_video_qcif_uncrop_pane

0x36a9,	// (0x00012e64) call3_video_subqcif_pane_ParamLimits

0x36a9,	// (0x00012e64) call3_video_subqcif_pane

0x36bf,	// (0x00012e7a) call3_video_subqcif_uncrop_pane_ParamLimits

0x36bf,	// (0x00012e7a) call3_video_subqcif_uncrop_pane

0x3732,	// (0x00012eed) popup_call3_audio_in_window_g4_ParamLimits

0x3732,	// (0x00012eed) popup_call3_audio_in_window_g4

0x3645,	// (0x00012e00) mup_spec_half_pane

0x364e,	// (0x00012e09) mup_spec_half_pane_cp

0xc102,	// (0x0001b8bd) mup_osc_middle_pane

0xc10b,	// (0x0001b8c6) mup_visualizer_osc_pane_g1

0x3625,	// (0x00012de0) mup_spec_bar_pane_ParamLimits

0x3625,	// (0x00012de0) mup_spec_bar_pane

0xc0ef,	// (0x0001b8aa) mup_spec_bar_pane_g1

0xc0f9,	// (0x0001b8b4) mup_spec_bar_pane_g2

0x0001,

0xf602,	// (0x0001edbd) mup_spec_bar_pane_g

0x035f,	// (0x0000fb1a) aid_cale_week_size_cell_pane_ParamLimits

0x0379,	// (0x0000fb34) bg_cale_heading_pane_ParamLimits

0x039d,	// (0x0000fb58) bg_cale_pane_cp01_ParamLimits

0x03ba,	// (0x0000fb75) cale_week_corner_pane_ParamLimits

0x03d9,	// (0x0000fb94) cale_week_day_heading_pane_ParamLimits

0x0402,	// (0x0000fbbd) cale_week_scroll_pane_g1_ParamLimits

0x0421,	// (0x0000fbdc) cale_week_scroll_pane_g2_ParamLimits

0x0439,	// (0x0000fbf4) cale_week_scroll_pane_g3_ParamLimits

0x0451,	// (0x0000fc0c) cale_week_scroll_pane_g4_ParamLimits

0x0469,	// (0x0000fc24) cale_week_scroll_pane_g5_ParamLimits

0x0489,	// (0x0000fc44) cale_week_scroll_pane_g6_ParamLimits

0x04a9,	// (0x0000fc64) cale_week_scroll_pane_g7_ParamLimits

0x04cd,	// (0x0000fc88) cale_week_scroll_pane_g8_ParamLimits

0x04f1,	// (0x0000fcac) cale_week_scroll_pane_g9_ParamLimits

0x0509,	// (0x0000fcc4) cale_week_scroll_pane_g10_ParamLimits

0x0521,	// (0x0000fcdc) cale_week_scroll_pane_g11_ParamLimits

0x0539,	// (0x0000fcf4) cale_week_scroll_pane_g12_ParamLimits

0x055d,	// (0x0000fd18) cale_week_scroll_pane_g13_ParamLimits

0x055d,	// (0x0000fd18) cale_week_scroll_pane_g14_ParamLimits

0x055d,	// (0x0000fd18) cale_week_scroll_pane_g15_ParamLimits

0xf1ac,	// (0x0001e967) cale_week_scroll_pane_g_ParamLimits

0x05a5,	// (0x0000fd60) cale_week_time_pane_ParamLimits

0x05c9,	// (0x0000fd84) grid_cale_week_pane_ParamLimits

0x9fe7,	// (0x000197a2) listscroll_cale_week_pane_t1

0x9ff9,	// (0x000197b4) scroll_pane_cp08_ParamLimits

0x133e,	// (0x00010af9) cale_month_corner_pane_ParamLimits

0xa3c6,	// (0x00019b81) cale_month_pane_t1

0x1846,	// (0x00011001) cale_month_week_pane_ParamLimits

0x20bc,	// (0x00011877) popup_call_status_window_g1_ParamLimits

0x20d0,	// (0x0001188b) popup_call_status_window_g2_ParamLimits

0x20e4,	// (0x0001189f) popup_call_status_window_g3_ParamLimits

0xf352,	// (0x0001eb0d) popup_call_status_window_g_ParamLimits

0xa7a5,	// (0x00019f60) aid_call2_pane

0x28db,	// (0x00012096) msg_header_pane_g1

0x2a67,	// (0x00012222) postcard_address2_pane_ParamLimits

0x2a67,	// (0x00012222) postcard_address2_pane

0x2a7d,	// (0x00012238) postcard_message2_pane_ParamLimits

0x2a7d,	// (0x00012238) postcard_message2_pane

0x35e2,	// (0x00012d9d) message2_row_pane_ParamLimits

0x35e2,	// (0x00012d9d) message2_row_pane

0xc0aa,	// (0x0001b865) address2_row_pane_ParamLimits

0xc0aa,	// (0x0001b865) address2_row_pane

0xc0bd,	// (0x0001b878) postcard_message2_row_pane_g1

0xc0c5,	// (0x0001b880) postcard_message2_row_pane_t1

0xc0bd,	// (0x0001b878) address2_row_pane_g1

0xc0c5,	// (0x0001b880) address2_row_pane_t1

0x0936,	// (0x000100f1) aid_size_cell_vorec

0x9b12,	// (0x000192cd) main_rss_pane

0x3605,	// (0x00012dc0) rss_list_single_pane_ParamLimits

0x3605,	// (0x00012dc0) rss_list_single_pane

0xc0d3,	// (0x0001b88e) rss_list_single_pane_t1

0xc0e1,	// (0x0001b89c) rss_list_single_pane_t2

0x0001,

0xf5fd,	// (0x0001edb8) rss_list_single_pane_t

0x9b12,	// (0x000192cd) main_camera2_pane

0x9b12,	// (0x000192cd) main_video2_pane

0x3854,	// (0x0001300f) cams_zoom_pane_cp2_ParamLimits

0x3854,	// (0x0001300f) cams_zoom_pane_cp2

0x386b,	// (0x00013026) image2_vga_pane_ParamLimits

0x386b,	// (0x00013026) image2_vga_pane

0x38b3,	// (0x0001306e) main_camera2_pane_g1_ParamLimits

0x38b3,	// (0x0001306e) main_camera2_pane_g1

0x38d3,	// (0x0001308e) main_camera2_pane_g2_ParamLimits

0x38d3,	// (0x0001308e) main_camera2_pane_g2

0x38ea,	// (0x000130a5) main_camera2_pane_g3_ParamLimits

0x38ea,	// (0x000130a5) main_camera2_pane_g3

0x3901,	// (0x000130bc) main_camera2_pane_g4_ParamLimits

0x3901,	// (0x000130bc) main_camera2_pane_g4

0x3918,	// (0x000130d3) main_camera2_pane_g5_ParamLimits

0x3918,	// (0x000130d3) main_camera2_pane_g5

0x392f,	// (0x000130ea) main_camera2_pane_g6_ParamLimits

0x392f,	// (0x000130ea) main_camera2_pane_g6

0x3946,	// (0x00013101) main_camera2_pane_g7_ParamLimits

0x3946,	// (0x00013101) main_camera2_pane_g7

0x395d,	// (0x00013118) main_camera2_pane_g8_ParamLimits

0x395d,	// (0x00013118) main_camera2_pane_g8

0x0008,

0xf61e,	// (0x0001edd9) main_camera2_pane_g_ParamLimits

0xf61e,	// (0x0001edd9) main_camera2_pane_g

0x398b,	// (0x00013146) main_camera2_pane_t1_ParamLimits

0x398b,	// (0x00013146) main_camera2_pane_t1

0x39c0,	// (0x0001317b) main_camera2_pane_t2_ParamLimits

0x39c0,	// (0x0001317b) main_camera2_pane_t2

0x39dd,	// (0x00013198) main_camera2_pane_t3_ParamLimits

0x39dd,	// (0x00013198) main_camera2_pane_t3

0x3a3b,	// (0x000131f6) main_camera2_pane_t4_ParamLimits

0x3a3b,	// (0x000131f6) main_camera2_pane_t4

0x0006,

0xf631,	// (0x0001edec) main_camera2_pane_t_ParamLimits

0xf631,	// (0x0001edec) main_camera2_pane_t

0x3ac4,	// (0x0001327f) cams_zoom_pane_cp4_ParamLimits

0x3ac4,	// (0x0001327f) cams_zoom_pane_cp4

0x3ada,	// (0x00013295) image2_cif_pane_ParamLimits

0x3ada,	// (0x00013295) image2_cif_pane

0x3b05,	// (0x000132c0) image2_subqcif_pane_ParamLimits

0x3b05,	// (0x000132c0) image2_subqcif_pane

0x3b20,	// (0x000132db) main_video2_pane_g1_ParamLimits

0x3b20,	// (0x000132db) main_video2_pane_g1

0x3b3a,	// (0x000132f5) main_video2_pane_g2_ParamLimits

0x3b3a,	// (0x000132f5) main_video2_pane_g2

0x3b50,	// (0x0001330b) main_video2_pane_g3_ParamLimits

0x3b50,	// (0x0001330b) main_video2_pane_g3

0x3b66,	// (0x00013321) main_video2_pane_g4_ParamLimits

0x3b66,	// (0x00013321) main_video2_pane_g4

0x3b7c,	// (0x00013337) main_video2_pane_g5_ParamLimits

0x3b7c,	// (0x00013337) main_video2_pane_g5

0x3b92,	// (0x0001334d) main_video2_pane_g6_ParamLimits

0x3b92,	// (0x0001334d) main_video2_pane_g6

0x0005,

0xf640,	// (0x0001edfb) main_video2_pane_g_ParamLimits

0xf640,	// (0x0001edfb) main_video2_pane_g

0x3bac,	// (0x00013367) main_video2_pane_t1_ParamLimits

0x3bac,	// (0x00013367) main_video2_pane_t1

0x3bd0,	// (0x0001338b) main_video2_pane_t2_ParamLimits

0x3bd0,	// (0x0001338b) main_video2_pane_t2

0x3c20,	// (0x000133db) main_video2_pane_t3_ParamLimits

0x3c20,	// (0x000133db) main_video2_pane_t3

0x0002,

0xf64d,	// (0x0001ee08) main_video2_pane_t_ParamLimits

0xf64d,	// (0x0001ee08) main_video2_pane_t

0x30e6,	// (0x000128a1) call_muted_g2

0x0001,

0xf5ef,	// (0x0001edaa) call_muted_g

0x9b12,	// (0x000192cd) main_mup2_pane

0x3c68,	// (0x00013423) main_mup2_pane_g1_ParamLimits

0x3c68,	// (0x00013423) main_mup2_pane_g1

0x3c74,	// (0x0001342f) main_mup2_pane_g2_ParamLimits

0x3c74,	// (0x0001342f) main_mup2_pane_g2

0xc285,	// (0x0001ba40) main_mup_pane_g13_cp1

0xc28d,	// (0x0001ba48) mup_volume_pane_cp1

0x3c92,	// (0x0001344d) main_mup2_pane_g4_ParamLimits

0x3c92,	// (0x0001344d) main_mup2_pane_g4

0x3ca4,	// (0x0001345f) main_mup2_pane_g5_ParamLimits

0x3ca4,	// (0x0001345f) main_mup2_pane_g5

0x3cb6,	// (0x00013471) main_mup2_pane_g6_ParamLimits

0x3cb6,	// (0x00013471) main_mup2_pane_g6

0x3cc8,	// (0x00013483) main_mup2_pane_g7_ParamLimits

0x3cc8,	// (0x00013483) main_mup2_pane_g7

0x0006,

0xf654,	// (0x0001ee0f) main_mup2_pane_g_ParamLimits

0xf654,	// (0x0001ee0f) main_mup2_pane_g

0x3ce0,	// (0x0001349b) main_mup2_pane_t1_ParamLimits

0x3ce0,	// (0x0001349b) main_mup2_pane_t1

0x3cf6,	// (0x000134b1) main_mup2_pane_t2_ParamLimits

0x3cf6,	// (0x000134b1) main_mup2_pane_t2

0x3d0c,	// (0x000134c7) main_mup2_pane_t3_ParamLimits

0x3d0c,	// (0x000134c7) main_mup2_pane_t3

0x3d22,	// (0x000134dd) main_mup2_pane_t4_ParamLimits

0x3d22,	// (0x000134dd) main_mup2_pane_t4

0x3d3a,	// (0x000134f5) main_mup2_pane_t5_ParamLimits

0x3d3a,	// (0x000134f5) main_mup2_pane_t5

0x3d52,	// (0x0001350d) main_mup2_pane_t6_ParamLimits

0x3d52,	// (0x0001350d) main_mup2_pane_t6

0x0005,

0xf663,	// (0x0001ee1e) main_mup2_pane_t_ParamLimits

0xf663,	// (0x0001ee1e) main_mup2_pane_t

0x3d82,	// (0x0001353d) mup2_visualizer_pane_ParamLimits

0x3d82,	// (0x0001353d) mup2_visualizer_pane

0x3db0,	// (0x0001356b) mup_progress_pane_cp_ParamLimits

0x3db0,	// (0x0001356b) mup_progress_pane_cp

0xc267,	// (0x0001ba22) mup_volume_pane_cp_ParamLimits

0xc267,	// (0x0001ba22) mup_volume_pane_cp

0x3dc6,	// (0x00013581) mup2_visualizer_pane_g1_ParamLimits

0x3dc6,	// (0x00013581) mup2_visualizer_pane_g1

0xc1a6,	// (0x0001b961) mup2_visualizer_pane_g2_ParamLimits

0xc1a6,	// (0x0001b961) mup2_visualizer_pane_g2

0x3ddb,	// (0x00013596) mup2_visualizer_pane_g3_ParamLimits

0x3ddb,	// (0x00013596) mup2_visualizer_pane_g3

0x0002,

0xf670,	// (0x0001ee2b) mup2_visualizer_pane_g_ParamLimits

0xf670,	// (0x0001ee2b) mup2_visualizer_pane_g

0xaf00,	// (0x0001a6bb) aid_size_cell_fmradio

0x3296,	// (0x00012a51) aid_height_parent_landcape

0xa224,	// (0x000199df) wml_content_pane_cp

0xa22c,	// (0x000199e7) wml_tabs_pane

0xa235,	// (0x000199f0) popup_wml_miniature_window

0xa23d,	// (0x000199f8) scroll_pane_cp021

0xa251,	// (0x00019a0c) wml_content_pane_comp8

0x9b12,	// (0x000192cd) bg_popup_sub_pane_cp05

0xc1c4,	// (0x0001b97f) popup_wml_miniature_window_g1

0xc1cc,	// (0x0001b987) wml_miniature_view_pane

0x3de7,	// (0x000135a2) aid_size_wml_view

0x3def,	// (0x000135aa) wml_miniature_view_pane_g1

0x3df8,	// (0x000135b3) wml_miniature_view_pane_g2

0x3e01,	// (0x000135bc) wml_miniature_view_pane_g3

0x3e09,	// (0x000135c4) wml_miniature_view_pane_g4

0x3e11,	// (0x000135cc) wml_miniature_view_pane_g5

0x3e19,	// (0x000135d4) wml_miniature_view_pane_g6

0x3e21,	// (0x000135dc) wml_miniature_view_pane_g7

0x3e29,	// (0x000135e4) wml_miniature_view_pane_g8

0x0007,

0xf677,	// (0x0001ee32) wml_miniature_view_pane_g

0xc1d4,	// (0x0001b98f) background_graphic_ParamLimits

0xc1d4,	// (0x0001b98f) background_graphic

0xc1e0,	// (0x0001b99b) wml_tabs_2_pane

0xc1e9,	// (0x0001b9a4) wml_tabs_3_pane_ParamLimits

0xc1e9,	// (0x0001b9a4) wml_tabs_3_pane

0xc1fb,	// (0x0001b9b6) wml_tabs_4_pane_ParamLimits

0xc1fb,	// (0x0001b9b6) wml_tabs_4_pane

0xc211,	// (0x0001b9cc) wml_tabs_5_pane_ParamLimits

0xc211,	// (0x0001b9cc) wml_tabs_5_pane

0xc22b,	// (0x0001b9e6) wml_tabs_pane_g2_ParamLimits

0xc22b,	// (0x0001b9e6) wml_tabs_pane_g2

0xc23f,	// (0x0001b9fa) wml_tabs_pane_g3_ParamLimits

0xc23f,	// (0x0001b9fa) wml_tabs_pane_g3

0x3e31,	// (0x000135ec) wml_tabs_2_active_pane_ParamLimits

0x3e31,	// (0x000135ec) wml_tabs_2_active_pane

0x3e45,	// (0x00013600) wml_tabs_2_passive_pane_ParamLimits

0x3e45,	// (0x00013600) wml_tabs_2_passive_pane

0x3e59,	// (0x00013614) wml_tabs_3_active_pane_cp_ParamLimits

0x3e59,	// (0x00013614) wml_tabs_3_active_pane_cp

0x3e6e,	// (0x00013629) wml_tabs_3_passive_pane_ParamLimits

0x3e6e,	// (0x00013629) wml_tabs_3_passive_pane

0x3e81,	// (0x0001363c) wml_tabs_3_passive_pane_cp_ParamLimits

0x3e81,	// (0x0001363c) wml_tabs_3_passive_pane_cp

0x3e98,	// (0x00013653) tabs_4_active_pane

0x3ea0,	// (0x0001365b) tabs_4_passive_pane

0x3eaa,	// (0x00013665) tabs_4_passive_pane_cp

0x3eb2,	// (0x0001366d) tabs_4_passive_pane_cp2

0x2faa,	// (0x00012765) aid_height_text

0x25e3,	// (0x00011d9e) mup_volume_cont_pane_ParamLimits

0x25e3,	// (0x00011d9e) mup_volume_cont_pane

0xff35,	// (0x0000f6f0) aid_size_cell_pinb

0xff3f,	// (0x0000f6fa) aid_size_list_pinb

0x3d9c,	// (0x00013557) mup2_volume_cont_pane_ParamLimits

0x3d9c,	// (0x00013557) mup2_volume_cont_pane

0xc253,	// (0x0001ba0e) mup2_volume_cont_pane_g1_ParamLimits

0xc253,	// (0x0001ba0e) mup2_volume_cont_pane_g1

0xfc2b,	// (0x0000f3e6) aid_size_cell_touch_ParamLimits

0xfc2b,	// (0x0000f3e6) aid_size_cell_touch

0xfe59,	// (0x0000f614) touch_pane_ParamLimits

0xfe59,	// (0x0000f614) touch_pane

0x9647,	// (0x00018e02) main_rss2_pane

0xc295,	// (0x0001ba50) listscroll_rss2_pane

0xc29e,	// (0x0001ba59) rss2_navigation_pane

0xc2a6,	// (0x0001ba61) list_rss2_pane

0xa938,	// (0x0001a0f3) scroll_pane_cp22

0xc2ae,	// (0x0001ba69) rss2_navigation_pane_g1

0xc2b7,	// (0x0001ba72) rss2_navigation_pane_g2

0xc2bf,	// (0x0001ba7a) rss2_navigation_pane_g3

0x0002,

0xf688,	// (0x0001ee43) rss2_navigation_pane_g

0xc2c7,	// (0x0001ba82) rss2_navigation_pane_t1

0x3ebc,	// (0x00013677) rss2_list_single_pane_ParamLimits

0x3ebc,	// (0x00013677) rss2_list_single_pane

0xc2d5,	// (0x0001ba90) rss2_list_single_pane_t2

0xc2e3,	// (0x0001ba9e) rss2_list_single_pane_t3_ParamLimits

0xc2e3,	// (0x0001ba9e) rss2_list_single_pane_t3

0xc300,	// (0x0001babb) rss2_list_single_pane_t4

0x1ebc,	// (0x00011677) smil_status_pane_g1

0x96bc,	// (0x00018e77) main_image2_pane_ParamLimits

0x96bc,	// (0x00018e77) main_image2_pane

0x3974,	// (0x0001312f) main_camera2_pane_g9_ParamLimits

0x3974,	// (0x0001312f) main_camera2_pane_g9

0x3a90,	// (0x0001324b) main_camera2_pane_t5_ParamLimits

0x3a90,	// (0x0001324b) main_camera2_pane_t5

0xc17b,	// (0x0001b936) main_camera2_pane_t6_ParamLimits

0xc17b,	// (0x0001b936) main_camera2_pane_t6

0x3ed6,	// (0x00013691) main_image2_pane_g1_ParamLimits

0x3ed6,	// (0x00013691) main_image2_pane_g1

0x2cc1,	// (0x0001247c) smil2_video_pane_ParamLimits

0x2cc1,	// (0x0001247c) smil2_video_pane

0x9665,	// (0x00018e20) aid_zoom_text_primary_cp

0x96b2,	// (0x00018e6d) popup_preview_fixed_window

0xa18d,	// (0x00019948) im_reading_pane_g1

0x3846,	// (0x00013001) cams2_bc_adjust_pane_cp_ParamLimits

0x3846,	// (0x00013001) cams2_bc_adjust_pane_cp

0x3ab6,	// (0x00013271) cams2_bc_adjust_pane_ParamLimits

0x3ab6,	// (0x00013271) cams2_bc_adjust_pane

0xc30e,	// (0x0001bac9) cams2_bc_adjust_pane_g1

0xc316,	// (0x0001bad1) cams2_slider_pane

0xc31f,	// (0x0001bada) cams2_slider_pane_g1

0xc328,	// (0x0001bae3) cams2_slider_pane_g2

0x0006,

0xf68f,	// (0x0001ee4a) cams2_slider_pane_g

0x0031,	// (0x0000f7ec) calc_display_pane_ParamLimits

0x0056,	// (0x0000f811) calc_paper_pane_ParamLimits

0x0079,	// (0x0000f834) grid_calc_pane_ParamLimits

0xa807,	// (0x00019fc2) popup_clock_digital_window_t1_ParamLimits

0xae9d,	// (0x0001a658) main_image_pane_t1

0x0011,	// (0x0000f7cc) aid_size_cell_calc_ParamLimits

0x0011,	// (0x0000f7cc) aid_size_cell_calc

0x32dc,	// (0x00012a97) popup_blid_sat_info2_window_ParamLimits

0x32dc,	// (0x00012a97) popup_blid_sat_info2_window

0xc34a,	// (0x0001bb05) aid_size_cell_blid

0xc352,	// (0x0001bb0d) bg_popup_window_pane_cp07

0xc375,	// (0x0001bb30) grid_popup_blid_pane

0xc37f,	// (0x0001bb3a) heading_pane_cp05_ParamLimits

0xc37f,	// (0x0001bb3a) heading_pane_cp05

0xc449,	// (0x0001bc04) cell_popup_blid_pane_ParamLimits

0xc449,	// (0x0001bc04) cell_popup_blid_pane

0xc473,	// (0x0001bc2e) cell_popup_blid_pane_g1

0xc47b,	// (0x0001bc36) cell_popup_blid_pane_t1

0x3d6c,	// (0x00013527) mup2_indicator_pane_ParamLimits

0x3d6c,	// (0x00013527) mup2_indicator_pane

0xa071,	// (0x0001982c) mup2_visualizer_osc_pane

0xc1b2,	// (0x0001b96d) mup2_visualizer_spec_pane_ParamLimits

0xc1b2,	// (0x0001b96d) mup2_visualizer_spec_pane

0x3eec,	// (0x000136a7) mup2_spec_half_pane

0x3ef5,	// (0x000136b0) mup2_spec_half_pane_cp

0x3efd,	// (0x000136b8) mup2_spec_bar_pane_ParamLimits

0x3efd,	// (0x000136b8) mup2_spec_bar_pane

0xc0ef,	// (0x0001b8aa) mup2_spec_bar_pane_g1

0xc0f9,	// (0x0001b8b4) mup2_spec_bar_pane_g2

0x0001,

0xf602,	// (0x0001edbd) mup2_spec_bar_pane_g

0x3f1d,	// (0x000136d8) mup2_osc_middle_pane

0xc10b,	// (0x0001b8c6) mup2_visualizer_osc_pane_g1

0x96ea,	// (0x00018ea5) popup_number_entry_window_t1_ParamLimits

0x96fd,	// (0x00018eb8) popup_number_entry_window_t2_ParamLimits

0x970f,	// (0x00018eca) popup_number_entry_window_t3_ParamLimits

0x9721,	// (0x00018edc) popup_number_entry_window_t5_ParamLimits

0x9721,	// (0x00018edc) popup_number_entry_window_t5

0xf0c6,	// (0x0001e881) popup_number_entry_window_t_ParamLimits

0x9756,	// (0x00018f11) text_title_cp2_ParamLimits

0xad77,	// (0x0001a532) aid_hotspot_pointer_text2_pane

0xad9d,	// (0x0001a558) main_viewer_pane_g9_ParamLimits

0xad9d,	// (0x0001a558) main_viewer_pane_g9

0xa3c6,	// (0x00019b81) cale_month_pane_t1_ParamLimits

0xa431,	// (0x00019bec) bg_cale_pane_ParamLimits

0xa449,	// (0x00019c04) list_cale_pane_ParamLimits

0xa45a,	// (0x00019c15) listscroll_cale_day_pane_t1

0xa46c,	// (0x00019c27) scroll_pane_cp09_ParamLimits

0x2619,	// (0x00011dd4) main_mup_eq_pane_t1_ParamLimits

0x2619,	// (0x00011dd4) main_mup_eq_pane_t1

0x2635,	// (0x00011df0) main_mup_eq_pane_t2_ParamLimits

0x2635,	// (0x00011df0) main_mup_eq_pane_t2

0x2651,	// (0x00011e0c) main_mup_eq_pane_t3_ParamLimits

0x2651,	// (0x00011e0c) main_mup_eq_pane_t3

0x266f,	// (0x00011e2a) main_mup_eq_pane_t4_ParamLimits

0x266f,	// (0x00011e2a) main_mup_eq_pane_t4

0x268d,	// (0x00011e48) main_mup_eq_pane_t5_ParamLimits

0x268d,	// (0x00011e48) main_mup_eq_pane_t5

0x26ab,	// (0x00011e66) main_mup_eq_pane_t6_ParamLimits

0x26ab,	// (0x00011e66) main_mup_eq_pane_t6

0x26c1,	// (0x00011e7c) main_mup_eq_pane_t7_ParamLimits

0x26c1,	// (0x00011e7c) main_mup_eq_pane_t7

0x26d7,	// (0x00011e92) main_mup_eq_pane_t8_ParamLimits

0x26d7,	// (0x00011e92) main_mup_eq_pane_t8

0x26ed,	// (0x00011ea8) main_mup_eq_pane_t9_ParamLimits

0x26ed,	// (0x00011ea8) main_mup_eq_pane_t9

0x2709,	// (0x00011ec4) main_mup_eq_pane_t10_ParamLimits

0x2709,	// (0x00011ec4) main_mup_eq_pane_t10

0x0009,

0xf451,	// (0x0001ec0c) main_mup_eq_pane_t_ParamLimits

0xf451,	// (0x0001ec0c) main_mup_eq_pane_t

0x27de,	// (0x00011f99) mup_equalizer_pane_cp5_ParamLimits

0x27f6,	// (0x00011fb1) mup_equalizer_pane_cp6_ParamLimits

0x280e,	// (0x00011fc9) mup_equalizer_pane_cp7_ParamLimits

0x9647,	// (0x00018e02) main_gallery_pane

0xc114,	// (0x0001b8cf) smil2_volume_pane

0xc11c,	// (0x0001b8d7) smil_status_volume_pane_g1_ParamLimits

0xc12f,	// (0x0001b8ea) smil_status_volume_pane_g2_ParamLimits

0xc142,	// (0x0001b8fd) smil_status_volume_pane_g3_ParamLimits

0xf607,	// (0x0001edc2) smil_status_volume_pane_g_ParamLimits

0xc352,	// (0x0001bb0d) bg_popup_window_pane_cp07_ParamLimits

0xc360,	// (0x0001bb1b) blid_firmament_pane

0x3f26,	// (0x000136e1) aid_size_cell_gallery_ParamLimits

0x3f26,	// (0x000136e1) aid_size_cell_gallery

0x3f3c,	// (0x000136f7) grid_gallery_pane_ParamLimits

0x3f3c,	// (0x000136f7) grid_gallery_pane

0x3f57,	// (0x00013712) cell_gallery_pane_ParamLimits

0x3f57,	// (0x00013712) cell_gallery_pane

0xc489,	// (0x0001bc44) bg_cell_gallery_focus_pane_ParamLimits

0xc489,	// (0x0001bc44) bg_cell_gallery_focus_pane

0xc49b,	// (0x0001bc56) cell_gallery_pane_g1_ParamLimits

0xc49b,	// (0x0001bc56) cell_gallery_pane_g1

0x3fa8,	// (0x00013763) cell_gallery_pane_g2_ParamLimits

0x3fa8,	// (0x00013763) cell_gallery_pane_g2

0x3fb5,	// (0x00013770) cell_gallery_pane_g3_ParamLimits

0x3fb5,	// (0x00013770) cell_gallery_pane_g3

0xc4a7,	// (0x0001bc62) cell_gallery_pane_g4_ParamLimits

0xc4a7,	// (0x0001bc62) cell_gallery_pane_g4

0x0003,

0xf6b5,	// (0x0001ee70) cell_gallery_pane_g_ParamLimits

0xf6b5,	// (0x0001ee70) cell_gallery_pane_g

0xc4b3,	// (0x0001bc6e) bg_cell_gallery_focus_pane_g1

0xc4bb,	// (0x0001bc76) bg_cell_gallery_focus_pane_g2

0xc4c3,	// (0x0001bc7e) bg_cell_gallery_focus_pane_g3

0xc4cb,	// (0x0001bc86) bg_cell_gallery_focus_pane_g4

0xc4d3,	// (0x0001bc8e) bg_cell_gallery_focus_pane_g5

0xc4db,	// (0x0001bc96) bg_cell_gallery_focus_pane_g6

0xc4e3,	// (0x0001bc9e) bg_cell_gallery_focus_pane_g7

0xc4eb,	// (0x0001bca6) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6be,	// (0x0001ee79) bg_cell_gallery_focus_pane_g

0xc4f3,	// (0x0001bcae) aid_firma_cardinal

0xc507,	// (0x0001bcc2) blid_firmament_pane_t1

0xc51e,	// (0x0001bcd9) blid_firmament_pane_t2

0xc535,	// (0x0001bcf0) blid_firmament_pane_t3

0xc54c,	// (0x0001bd07) blid_firmament_pane_t4

0x0003,

0xf6cf,	// (0x0001ee8a) blid_firmament_pane_t

0xc563,	// (0x0001bd1e) blid_sat_info_pane

0xc573,	// (0x0001bd2e) blid_sat_info_pane_g1

0xc573,	// (0x0001bd2e) blid_sat_info_pane_g2

0x0001,

0xf6d8,	// (0x0001ee93) blid_sat_info_pane_g

0xc57d,	// (0x0001bd38) blid_sat_info_pane_t1

0xc58b,	// (0x0001bd46) smil2_volume_content_pane

0xc594,	// (0x0001bd4f) smil2_volume_pane_g1

0x9ef9,	// (0x000196b4) smil2_volume_content_pane_g1

0xc59c,	// (0x0001bd57) smil2_volume_content_pane_g2

0xc5a5,	// (0x0001bd60) smil2_volume_content_pane_g3

0xc5ae,	// (0x0001bd69) smil2_volume_content_pane_g4

0xc5b7,	// (0x0001bd72) smil2_volume_content_pane_g5

0xc5c0,	// (0x0001bd7b) smil2_volume_content_pane_g6

0xc5c9,	// (0x0001bd84) smil2_volume_content_pane_g7

0xc5d2,	// (0x0001bd8d) smil2_volume_content_pane_g8

0xc5db,	// (0x0001bd96) smil2_volume_content_pane_g9

0xc5e4,	// (0x0001bd9f) smil2_volume_content_pane_g10

0x0009,

0xf6dd,	// (0x0001ee98) smil2_volume_content_pane_g

0x0697,	// (0x0000fe52) cale_week_day_heading_pane_t1_ParamLimits

0x06c1,	// (0x0000fe7c) cale_week_day_heading_pane_t2_ParamLimits

0x06f0,	// (0x0000feab) cale_week_day_heading_pane_t3_ParamLimits

0x071f,	// (0x0000feda) cale_week_day_heading_pane_t4_ParamLimits

0x074e,	// (0x0000ff09) cale_week_day_heading_pane_t5_ParamLimits

0x0781,	// (0x0000ff3c) cale_week_day_heading_pane_t6_ParamLimits

0x07b8,	// (0x0000ff73) cale_week_day_heading_pane_t7_ParamLimits

0xf1cd,	// (0x0001e988) cale_week_day_heading_pane_t_ParamLimits

0xa016,	// (0x000197d1) bg_cale_side_pane_ParamLimits

0x07e2,	// (0x0000ff9d) cale_week_time_pane_t1_ParamLimits

0x07fc,	// (0x0000ffb7) cale_week_time_pane_t2_ParamLimits

0x0816,	// (0x0000ffd1) cale_week_time_pane_t3_ParamLimits

0x0830,	// (0x0000ffeb) cale_week_time_pane_t4_ParamLimits

0x084a,	// (0x00010005) cale_week_time_pane_t5_ParamLimits

0x0864,	// (0x0001001f) cale_week_time_pane_t6_ParamLimits

0x0884,	// (0x0001003f) cale_week_time_pane_t7_ParamLimits

0x08aa,	// (0x00010065) cale_week_time_pane_t8_ParamLimits

0xf1dc,	// (0x0001e997) cale_week_time_pane_t_ParamLimits

0x08d0,	// (0x0001008b) cell_cale_week_pane_g2_ParamLimits

0xa016,	// (0x000197d1) bg_cale_side_pane_cp01_ParamLimits

0x1c6f,	// (0x0001142a) cale_month_week_pane_t1_ParamLimits

0x1c88,	// (0x00011443) cale_month_week_pane_t2_ParamLimits

0x1ca1,	// (0x0001145c) cale_month_week_pane_t3_ParamLimits

0x1cba,	// (0x00011475) cale_month_week_pane_t4_ParamLimits

0x1cd3,	// (0x0001148e) cale_month_week_pane_t5_ParamLimits

0x1cec,	// (0x000114a7) cale_month_week_pane_t6_ParamLimits

0xf2b1,	// (0x0001ea6c) cale_month_week_pane_t_ParamLimits

0xa3d8,	// (0x00019b93) cell_cale_month_pane_g1_ParamLimits

0x9647,	// (0x00018e02) main_cale_event_viewer_pane

0x9647,	// (0x00018e02) listscroll_cale_event_viewer_pane

0xc5ed,	// (0x0001bda8) list_cale_ev_pane

0xc5f5,	// (0x0001bdb0) scroll_pane_cp023

0x3fc2,	// (0x0001377d) field_cale_ev_pane_ParamLimits

0x3fc2,	// (0x0001377d) field_cale_ev_pane

0xc601,	// (0x0001bdbc) field_cale_ev_content_pane_ParamLimits

0xc601,	// (0x0001bdbc) field_cale_ev_content_pane

0xc60d,	// (0x0001bdc8) field_cale_ev_pane_g1_ParamLimits

0xc60d,	// (0x0001bdc8) field_cale_ev_pane_g1

0xc619,	// (0x0001bdd4) field_cale_ev_pane_g2_ParamLimits

0xc619,	// (0x0001bdd4) field_cale_ev_pane_g2

0xc631,	// (0x0001bdec) field_cale_ev_pane_g3_ParamLimits

0xc631,	// (0x0001bdec) field_cale_ev_pane_g3

0x0002,

0xf6f2,	// (0x0001eead) field_cale_ev_pane_g_ParamLimits

0xf6f2,	// (0x0001eead) field_cale_ev_pane_g

0xc649,	// (0x0001be04) field_cale_ev_pane_t1_ParamLimits

0xc649,	// (0x0001be04) field_cale_ev_pane_t1

0x3fe6,	// (0x000137a1) field_cale_ev_content_pane_t1_ParamLimits

0x3fe6,	// (0x000137a1) field_cale_ev_content_pane_t1

0xacf9,	// (0x0001a4b4) bg_button_pane_cp01

0x034f,	// (0x0000fb0a) listscroll_cale_week_pane_ParamLimits

0x9fde,	// (0x00019799) popup_toolbar_window_cp01

0x9fe7,	// (0x000197a2) listscroll_cale_week_pane_t1_ParamLimits

0x034f,	// (0x0000fb0a) listscroll_cale_day_pane_ParamLimits

0x9fde,	// (0x00019799) popup_toolbar_window_cp02

0xa45a,	// (0x00019c15) listscroll_cale_day_pane_t1_ParamLimits

0x034f,	// (0x0000fb0a) main_cale_month_pane_ParamLimits

0xc07a,	// (0x0001b835) popup_toolbar_window_cp03_ParamLimits

0xc07a,	// (0x0001b835) popup_toolbar_window_cp03

0x2b7f,	// (0x0001233a) main_image_pane_g2_ParamLimits

0x2b7f,	// (0x0001233a) main_image_pane_g2

0x2b90,	// (0x0001234b) main_image_pane_g3_ParamLimits

0x2b90,	// (0x0001234b) main_image_pane_g3

0x0002,

0xf4e3,	// (0x0001ec9e) main_image_pane_g_ParamLimits

0xf4e3,	// (0x0001ec9e) main_image_pane_g

0xae9d,	// (0x0001a658) main_image_pane_t1_ParamLimits

0x2ba1,	// (0x0001235c) main_image_pane_t2_ParamLimits

0x2ba1,	// (0x0001235c) main_image_pane_t2

0x2bb3,	// (0x0001236e) main_image_pane_t3_ParamLimits

0x2bb3,	// (0x0001236e) main_image_pane_t3

0x2bdb,	// (0x00012396) main_image_pane_t4_ParamLimits

0x2bdb,	// (0x00012396) main_image_pane_t4

0x0003,

0xf4ea,	// (0x0001eca5) main_image_pane_t_ParamLimits

0xf4ea,	// (0x0001eca5) main_image_pane_t

0x2bfb,	// (0x000123b6) popup_image_details_window_cp01

0x2c05,	// (0x000123c0) popup_toobar_trans_pane_cp01_ParamLimits

0x2c05,	// (0x000123c0) popup_toobar_trans_pane_cp01

0x33cf,	// (0x00012b8a) popup_image_details_window_ParamLimits

0x33cf,	// (0x00012b8a) popup_image_details_window

0xc04b,	// (0x0001b806) popup_image_focus_window

0x3800,	// (0x00012fbb) camera2_autofocus_pane_ParamLimits

0x3800,	// (0x00012fbb) camera2_autofocus_pane

0x9647,	// (0x00018e02) bg_popup_sub_pane_cp06

0xc660,	// (0x0001be1b) popup_image_focus_window_g1

0xc668,	// (0x0001be23) popup_image_focus_window_g2

0xc670,	// (0x0001be2b) popup_image_focus_window_g3

0xc678,	// (0x0001be33) popup_image_focus_window_g4

0x0003,

0xf6f9,	// (0x0001eeb4) popup_image_focus_window_g

0xc680,	// (0x0001be3b) popup_image_focus_window_t1

0xc68e,	// (0x0001be49) popup_image_focus_window_t2

0xc69e,	// (0x0001be59) popup_image_focus_window_t3

0x0002,

0xf702,	// (0x0001eebd) popup_image_focus_window_t

0xc6ac,	// (0x0001be67) camera2_autofocus_pane_g1

0x96bc,	// (0x00018e77) bg_tb_trans_pane_cp01

0xc6ba,	// (0x0001be75) popup_image_details_window_g1

0xc6cd,	// (0x0001be88) popup_image_details_window_g2

0x0002,

0xf714,	// (0x0001eecf) popup_image_details_window_g

0xc6f6,	// (0x0001beb1) popup_image_details_window_t1

0xc708,	// (0x0001bec3) popup_image_details_window_t2

0xc721,	// (0x0001bedc) popup_image_details_window_t3

0xc735,	// (0x0001bef0) popup_image_details_window_t4

0xc750,	// (0x0001bf0b) popup_image_details_window_t5

0x0004,

0xf71b,	// (0x0001eed6) popup_image_details_window_t

0x9e26,	// (0x000195e1) bg_calc_paper_pane_ParamLimits

0x9647,	// (0x00018e02) grid_highlight_pane_cp013

0x9e3a,	// (0x000195f5) list_calc_pane_ParamLimits

0x9e4c,	// (0x00019607) scroll_pane_cp024

0x9e54,	// (0x0001960f) bg_calc_display_pane_ParamLimits

0x0179,	// (0x0000f934) calc_display_pane_t1_ParamLimits

0x018b,	// (0x0000f946) calc_display_pane_t2_ParamLimits

0x9e60,	// (0x0001961b) calc_display_pane_t3_ParamLimits

0xf14d,	// (0x0001e908) calc_display_pane_t_ParamLimits

0x024c,	// (0x0000fa07) cell_calc_pane_g2

0x0001,

0xf16a,	// (0x0001e925) cell_calc_pane_g

0x0255,	// (0x0000fa10) cell_calc_pane_t1

0x9ed7,	// (0x00019692) grid_highlight_pane_cp02_ParamLimits

0x9eed,	// (0x000196a8) toolbar_button_pane_cp01_ParamLimits

0x9eed,	// (0x000196a8) toolbar_button_pane_cp01

0xaee2,	// (0x0001a69d) temp_image_control_pane_ParamLimits

0xaee2,	// (0x0001a69d) temp_image_control_pane

0x96bc,	// (0x00018e77) main_mp3_pane

0xc76a,	// (0x0001bf25) temp_image_control_pane_g1_ParamLimits

0xc76a,	// (0x0001bf25) temp_image_control_pane_g1

0xc778,	// (0x0001bf33) temp_image_control_pane_g2_ParamLimits

0xc778,	// (0x0001bf33) temp_image_control_pane_g2

0xc78a,	// (0x0001bf45) temp_image_control_pane_g3_ParamLimits

0xc78a,	// (0x0001bf45) temp_image_control_pane_g3

0x4037,	// (0x000137f2) temp_image_control_pane_g4_ParamLimits

0x4037,	// (0x000137f2) temp_image_control_pane_g4

0x0003,

0xf726,	// (0x0001eee1) temp_image_control_pane_g_ParamLimits

0xf726,	// (0x0001eee1) temp_image_control_pane_g

0xc76a,	// (0x0001bf25) main_mp3_pane_g1

0x404a,	// (0x00013805) main_mp3_pane_g2

0x0007,

0xf72f,	// (0x0001eeea) main_mp3_pane_g

0xc7cd,	// (0x0001bf88) main_mp3_pane_t1

0xa098,	// (0x00019853) main_camera_pane_g8_ParamLimits

0xa098,	// (0x00019853) main_camera_pane_g8

0x0be2,	// (0x0001039d) main_video_pane_g7_ParamLimits

0x0be2,	// (0x0001039d) main_video_pane_g7

0xc194,	// (0x0001b94f) main_camera2_pane_t7_ParamLimits

0xc194,	// (0x0001b94f) main_camera2_pane_t7

0xa1e4,	// (0x0001999f) scroll_pane_cp025_ParamLimits

0xa1e4,	// (0x0001999f) scroll_pane_cp025

0xa1f8,	// (0x000199b3) scroll_pane_cp026_ParamLimits

0xa1f8,	// (0x000199b3) scroll_pane_cp026

0xa207,	// (0x000199c2) wml_content_pane_ParamLimits

0x9647,	// (0x00018e02) main_touch_calib_pane

0x411c,	// (0x000138d7) main_touch_calib_pane_g1

0x412e,	// (0x000138e9) main_touch_calib_pane_g2

0x4140,	// (0x000138fb) main_touch_calib_pane_g3

0x4152,	// (0x0001390d) main_touch_calib_pane_g4

0x0003,

0xf74d,	// (0x0001ef08) main_touch_calib_pane_g

0x4164,	// (0x0001391f) main_touch_calib_pane_t1

0x417e,	// (0x00013939) main_touch_calib_pane_t2

0x0004,

0xf756,	// (0x0001ef11) main_touch_calib_pane_t

0xaa07,	// (0x0001a1c2) mup_progress_pane_cp02

0xaa3c,	// (0x0001a1f7) navi_pane_g1

0xaaf7,	// (0x0001a2b2) navi_pane_mp_t3

0x96bc,	// (0x00018e77) main_mp3_pane_ParamLimits

0x3588,	// (0x00012d43) navi_pane_ParamLimits

0xc76a,	// (0x0001bf25) main_mp3_pane_g1_ParamLimits

0x404a,	// (0x00013805) main_mp3_pane_g2_ParamLimits

0x4056,	// (0x00013811) main_mp3_pane_g3_ParamLimits

0x4056,	// (0x00013811) main_mp3_pane_g3

0x4064,	// (0x0001381f) main_mp3_pane_g4_ParamLimits

0x4064,	// (0x0001381f) main_mp3_pane_g4

0xc79a,	// (0x0001bf55) main_mp3_pane_g5_ParamLimits

0xc79a,	// (0x0001bf55) main_mp3_pane_g5

0xc7a8,	// (0x0001bf63) main_mp3_pane_g6_ParamLimits

0xc7a8,	// (0x0001bf63) main_mp3_pane_g6

0xc7b5,	// (0x0001bf70) main_mp3_pane_g7_ParamLimits

0xc7b5,	// (0x0001bf70) main_mp3_pane_g7

0xc7c1,	// (0x0001bf7c) main_mp3_pane_g8_ParamLimits

0xc7c1,	// (0x0001bf7c) main_mp3_pane_g8

0xf72f,	// (0x0001eeea) main_mp3_pane_g_ParamLimits

0x4070,	// (0x0001382b) main_mp3_pane_t2

0x407e,	// (0x00013839) main_mp3_pane_t3

0xc7db,	// (0x0001bf96) main_mp3_pane_t4

0xc7e9,	// (0x0001bfa4) main_mp3_pane_t5

0x0005,

0xf740,	// (0x0001eefb) main_mp3_pane_t

0xc7f7,	// (0x0001bfb2) mup_progress_pane_cp01

0x9665,	// (0x00018e20) aid_zoom_text_secondary2

0xc5ed,	// (0x0001bda8) list_cale_ev2_pane

0xc5f5,	// (0x0001bdb0) scroll_pane_cp023_ParamLimits

0x41d8,	// (0x00013993) field_cale_ev2_pane_ParamLimits

0x41d8,	// (0x00013993) field_cale_ev2_pane

0x41fc,	// (0x000139b7) field_cale_ev2_pane_g1_ParamLimits

0x41fc,	// (0x000139b7) field_cale_ev2_pane_g1

0x4208,	// (0x000139c3) field_cale_ev2_pane_g2_ParamLimits

0x4208,	// (0x000139c3) field_cale_ev2_pane_g2

0x4220,	// (0x000139db) field_cale_ev2_pane_g3_ParamLimits

0x4220,	// (0x000139db) field_cale_ev2_pane_g3

0x0003,

0xf761,	// (0x0001ef1c) field_cale_ev2_pane_g_ParamLimits

0xf761,	// (0x0001ef1c) field_cale_ev2_pane_g

0x4238,	// (0x000139f3) field_cale_ev2_pane_t1_ParamLimits

0x4238,	// (0x000139f3) field_cale_ev2_pane_t1

0x424f,	// (0x00013a0a) field_cale_ev2_pane_t2_ParamLimits

0x424f,	// (0x00013a0a) field_cale_ev2_pane_t2

0x0001,

0xf76a,	// (0x0001ef25) field_cale_ev2_pane_t_ParamLimits

0xf76a,	// (0x0001ef25) field_cale_ev2_pane_t

0x2a17,	// (0x000121d2) main_postcard_pane_g5_ParamLimits

0x2a17,	// (0x000121d2) main_postcard_pane_g5

0x2a2d,	// (0x000121e8) main_postcard_pane_g6_ParamLimits

0x2a2d,	// (0x000121e8) main_postcard_pane_g6

0x098e,	// (0x00010149) camera2_autofocus_pane_cp_ParamLimits

0x098e,	// (0x00010149) camera2_autofocus_pane_cp

0x96bc,	// (0x00018e77) main_mup3_pane

0x42ae,	// (0x00013a69) main_mup3_pane_g1_ParamLimits

0x42ae,	// (0x00013a69) main_mup3_pane_g1

0x42d0,	// (0x00013a8b) main_mup3_pane_g2_ParamLimits

0x42d0,	// (0x00013a8b) main_mup3_pane_g2

0x434b,	// (0x00013b06) main_mup3_pane_g3_ParamLimits

0x434b,	// (0x00013b06) main_mup3_pane_g3

0x43b5,	// (0x00013b70) main_mup3_pane_g4_ParamLimits

0x43b5,	// (0x00013b70) main_mup3_pane_g4

0x441f,	// (0x00013bda) main_mup3_pane_g5_ParamLimits

0x441f,	// (0x00013bda) main_mup3_pane_g5

0x4489,	// (0x00013c44) main_mup3_pane_g6_ParamLimits

0x4489,	// (0x00013c44) main_mup3_pane_g6

0xc80b,	// (0x0001bfc6) main_mup3_pane_g7_ParamLimits

0xc80b,	// (0x0001bfc6) main_mup3_pane_g7

0x0007,

0xf77a,	// (0x0001ef35) main_mup3_pane_g_ParamLimits

0xf77a,	// (0x0001ef35) main_mup3_pane_g

0x4509,	// (0x00013cc4) main_mup3_pane_t1_ParamLimits

0x4509,	// (0x00013cc4) main_mup3_pane_t1

0x457b,	// (0x00013d36) main_mup3_pane_t2_ParamLimits

0x457b,	// (0x00013d36) main_mup3_pane_t2

0x464d,	// (0x00013e08) main_mup3_pane_t4_ParamLimits

0x464d,	// (0x00013e08) main_mup3_pane_t4

0x46ab,	// (0x00013e66) main_mup3_pane_t5_ParamLimits

0x46ab,	// (0x00013e66) main_mup3_pane_t5

0x4767,	// (0x00013f22) main_mup3_pane_t6_ParamLimits

0x4767,	// (0x00013f22) main_mup3_pane_t6

0x0005,

0xf78b,	// (0x0001ef46) main_mup3_pane_t_ParamLimits

0xf78b,	// (0x0001ef46) main_mup3_pane_t

0x481f,	// (0x00013fda) mup3_progress_pane_ParamLimits

0x481f,	// (0x00013fda) mup3_progress_pane

0x48b7,	// (0x00014072) popup_mup3_control_window_ParamLimits

0x48b7,	// (0x00014072) popup_mup3_control_window

0xc819,	// (0x0001bfd4) popup_mup3_text_window

0x48ed,	// (0x000140a8) mup3_progress_pane_t1

0x490c,	// (0x000140c7) mup3_progress_pane_t2

0xc821,	// (0x0001bfdc) mup3_progress_pane_t3

0x0002,

0xf798,	// (0x0001ef53) mup3_progress_pane_t

0xc83e,	// (0x0001bff9) mup_progress_pane_cp03

0x9647,	// (0x00018e02) bg_tb_trans_pane_cp04

0x492b,	// (0x000140e6) mup3_volume_pane

0x4933,	// (0x000140ee) popup_mup3_control_window_g1

0x493c,	// (0x000140f7) mup3_volume_pane_g1

0x4945,	// (0x00014100) mup3_volume_pane_g2

0x494e,	// (0x00014109) mup3_volume_pane_g3

0x0002,

0xf79f,	// (0x0001ef5a) mup3_volume_pane_g

0x9647,	// (0x00018e02) bg_tb_trans_pane_cp03

0xc84e,	// (0x0001c009) popup_mup3_text_window_g1

0xc856,	// (0x0001c011) popup_mup3_text_window_t1

0x9eae,	// (0x00019669) list_calc_item_pane_g1_ParamLimits

0xc27c,	// (0x0001ba37) mup_volume_pane_cp_g1

0x4198,	// (0x00013953) main_touch_calib_pane_t3

0x41ac,	// (0x00013967) main_touch_calib_pane_t4

0x41c2,	// (0x0001397d) main_touch_calib_pane_t5

0x9651,	// (0x00018e0c) aid_cell_size_toolbar2

0x9659,	// (0x00018e14) aid_popup3_width_pane

0x9665,	// (0x00018e20) aid_zoom_text_msg_primary

0x0980,	// (0x0001013b) vorec_t7

0x9e72,	// (0x0001962d) bg_calc_paper_pane_g1_ParamLimits

0x9e7e,	// (0x00019639) bg_calc_paper_pane_g2_ParamLimits

0x9e8a,	// (0x00019645) bg_calc_paper_pane_g3_ParamLimits

0x9e96,	// (0x00019651) bg_calc_paper_pane_g4_ParamLimits

0x9ea2,	// (0x0001965d) bg_calc_paper_pane_g5_ParamLimits

0x01d8,	// (0x0000f993) bg_calc_paper_pane_g6_ParamLimits

0x01e6,	// (0x0000f9a1) bg_calc_paper_pane_g7_ParamLimits

0x01f4,	// (0x0000f9af) bg_calc_paper_pane_g8_ParamLimits

0xf154,	// (0x0001e90f) bg_calc_paper_pane_g_ParamLimits

0x0207,	// (0x0000f9c2) calc_bg_paper_pane_g9_ParamLimits

0x0af0,	// (0x000102ab) image_qvga_pane_ParamLimits

0x0af0,	// (0x000102ab) image_qvga_pane

0x9d6d,	// (0x00019528) bg_popup_sub_pane_cp04_ParamLimits

0xae19,	// (0x0001a5d4) popup_mup_playback_window_g1_ParamLimits

0xae25,	// (0x0001a5e0) popup_mup_playback_window_t1_ParamLimits

0xae3a,	// (0x0001a5f5) popup_mup_playback_window_t2_ParamLimits

0xf4de,	// (0x0001ec99) popup_mup_playback_window_t_ParamLimits

0x3c84,	// (0x0001343f) main_mup2_pane_g3_ParamLimits

0x3c84,	// (0x0001343f) main_mup2_pane_g3

0x0ef8,	// (0x000106b3) popup_toolbar_window_cp04

0xb235,	// (0x0001a9f0) popup_call2_audio_second_window_g3_ParamLimits

0xb235,	// (0x0001a9f0) popup_call2_audio_second_window_g3

0xb63f,	// (0x0001adfa) popup_call2_audio_first_window_g4_ParamLimits

0xb63f,	// (0x0001adfa) popup_call2_audio_first_window_g4

0xbcbe,	// (0x0001b479) popup_call2_audio_in_window_g4_ParamLimits

0xbcbe,	// (0x0001b479) popup_call2_audio_in_window_g4

0x2b61,	// (0x0001231c) aid_area_sk_bg_cut_ParamLimits

0x2b61,	// (0x0001231c) aid_area_sk_bg_cut

0xae4f,	// (0x0001a60a) aid_area_sk_bg_cut_2_ParamLimits

0xae4f,	// (0x0001a60a) aid_area_sk_bg_cut_2

0x3f98,	// (0x00013753) aid_placing_details_win

0x3fa0,	// (0x0001375b) aid_placing_details_win_2

0xc6ac,	// (0x0001be67) camera2_autofocus_pane_g1_ParamLimits

0xfdf4,	// (0x0000f5af) popup_fixed_preview_cale_window_ParamLimits

0xfdf4,	// (0x0000f5af) popup_fixed_preview_cale_window

0xab80,	// (0x0001a33b) navi_slider_pane_g3

0xab89,	// (0x0001a344) navi_slider_pane_g4

0xab92,	// (0x0001a34d) navi_slider_pane_g5

0xab80,	// (0x0001a33b) navi_slider_pane_g6

0xab9b,	// (0x0001a356) navi_slider_pane_g7

0xacbe,	// (0x0001a479) mup_scale_pane_g3

0xacc7,	// (0x0001a482) mup_scale_pane_g4

0xacd0,	// (0x0001a48b) mup_scale_pane_g5

0x2826,	// (0x00011fe1) mup_scale_pane_g6

0x282f,	// (0x00011fea) mup_scale_pane_g7

0xab80,	// (0x0001a33b) cams2_slider_pane_g3

0xc331,	// (0x0001baec) cams2_slider_pane_g4

0xc339,	// (0x0001baf4) cams2_slider_pane_g5

0xab80,	// (0x0001a33b) cams2_slider_pane_g6

0xc341,	// (0x0001bafc) cams2_slider_pane_g7

0xc573,	// (0x0001bd2e) camera2_autofocus_pane_cp_g1

0xc01d,	// (0x0001b7d8) bg_popup_preview_window_pane_cp02_ParamLimits

0xc01d,	// (0x0001b7d8) bg_popup_preview_window_pane_cp02

0xc864,	// (0x0001c01f) list_fp_cale_pane_ParamLimits

0xc864,	// (0x0001c01f) list_fp_cale_pane

0xc870,	// (0x0001c02b) popup_fixed_preview_cale_window_t1_ParamLimits

0xc870,	// (0x0001c02b) popup_fixed_preview_cale_window_t1

0x4957,	// (0x00014112) popup_fixed_preview_cale_window_t2_ParamLimits

0x4957,	// (0x00014112) popup_fixed_preview_cale_window_t2

0x496c,	// (0x00014127) popup_fixed_preview_cale_window_t3_ParamLimits

0x496c,	// (0x00014127) popup_fixed_preview_cale_window_t3

0x0002,

0xf7a6,	// (0x0001ef61) popup_fixed_preview_cale_window_t_ParamLimits

0xf7a6,	// (0x0001ef61) popup_fixed_preview_cale_window_t

0x4983,	// (0x0001413e) list_single_fp_cale_pane_ParamLimits

0x4983,	// (0x0001413e) list_single_fp_cale_pane

0xc88e,	// (0x0001c049) list_single_fp_cale_pane_g1_ParamLimits

0xc88e,	// (0x0001c049) list_single_fp_cale_pane_g1

0xc89a,	// (0x0001c055) list_single_fp_cale_pane_g2_ParamLimits

0xc89a,	// (0x0001c055) list_single_fp_cale_pane_g2

0x0002,

0xf7ad,	// (0x0001ef68) list_single_fp_cale_pane_g_ParamLimits

0xf7ad,	// (0x0001ef68) list_single_fp_cale_pane_g

0xc8b3,	// (0x0001c06e) list_single_fp_cale_pane_t1_ParamLimits

0xc8b3,	// (0x0001c06e) list_single_fp_cale_pane_t1

0xc8c5,	// (0x0001c080) list_single_fp_cale_pane_t2_ParamLimits

0xc8c5,	// (0x0001c080) list_single_fp_cale_pane_t2

0x0001,

0xf7b4,	// (0x0001ef6f) list_single_fp_cale_pane_t_ParamLimits

0xf7b4,	// (0x0001ef6f) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x9647,	// (0x00018e02) main_dialer_pane

0x499b,	// (0x00014156) aid_cell_size_keypad

0x49a5,	// (0x00014160) dialer_ne_pane

0x49af,	// (0x0001416a) grid_dialer_command_1_pane

0x49b7,	// (0x00014172) grid_dialer_command_2_pane

0x49bf,	// (0x0001417a) grid_dialer_keypad_pane

0x49d3,	// (0x0001418e) bg_popup_call_pane_cp06_ParamLimits

0x49d3,	// (0x0001418e) bg_popup_call_pane_cp06

0x49df,	// (0x0001419a) dialer_ne_clear_pane_ParamLimits

0x49df,	// (0x0001419a) dialer_ne_clear_pane

0xc8f8,	// (0x0001c0b3) dialer_ne_pane_g1

0xc900,	// (0x0001c0bb) dialer_ne_pane_t1_ParamLimits

0xc900,	// (0x0001c0bb) dialer_ne_pane_t1

0x49eb,	// (0x000141a6) dialer_ne_pane_t2_ParamLimits

0x49eb,	// (0x000141a6) dialer_ne_pane_t2

0x4a15,	// (0x000141d0) dialer_ne_pane_t3_ParamLimits

0x4a15,	// (0x000141d0) dialer_ne_pane_t3

0x0002,

0xf7b9,	// (0x0001ef74) dialer_ne_pane_t_ParamLimits

0xf7b9,	// (0x0001ef74) dialer_ne_pane_t

0x4a45,	// (0x00014200) dialer_ne_pane_t3_copy1_ParamLimits

0x4a45,	// (0x00014200) dialer_ne_pane_t3_copy1

0x4a74,	// (0x0001422f) cell_dialer_keypad_pane_ParamLimits

0x4a74,	// (0x0001422f) cell_dialer_keypad_pane

0x4a8b,	// (0x00014246) cell_dialer_command_1_pane_ParamLimits

0x4a8b,	// (0x00014246) cell_dialer_command_1_pane

0x4aa1,	// (0x0001425c) cell_dialer_command_2_pane_ParamLimits

0x4aa1,	// (0x0001425c) cell_dialer_command_2_pane

0xc912,	// (0x0001c0cd) bg_button_pane_cp02_ParamLimits

0xc912,	// (0x0001c0cd) bg_button_pane_cp02

0x4ab0,	// (0x0001426b) cell_dialer_keypad_pane_g1_ParamLimits

0x4ab0,	// (0x0001426b) cell_dialer_keypad_pane_g1

0xc912,	// (0x0001c0cd) bg_button_pane_cp03_ParamLimits

0xc912,	// (0x0001c0cd) bg_button_pane_cp03

0x4ac1,	// (0x0001427c) cell_dialer_command_1_pane_g1_ParamLimits

0x4ac1,	// (0x0001427c) cell_dialer_command_1_pane_g1

0xc91e,	// (0x0001c0d9) bg_button_pane_cp04

0x4ad5,	// (0x00014290) cell_dialer_command_2_pane_g1

0xa071,	// (0x0001982c) bg_button_pane_cp06

0xc926,	// (0x0001c0e1) dialer_ne_clear_pane_g1

0xaa48,	// (0x0001a203) navi_pane_g2

0xaa76,	// (0x0001a231) navi_pane_g3

0x0002,

0xf3e1,	// (0x0001eb9c) navi_pane_g

0xab05,	// (0x0001a2c0) navi_pane_mv_g2

0xab2e,	// (0x0001a2e9) navi_pane_mv_g5

0x238e,	// (0x00011b49) navi_pane_mv_t1

0x9e54,	// (0x0001960f) main_clock2_pane

0x96bc,	// (0x00018e77) main_clock2_list_pane_ParamLimits

0x96bc,	// (0x00018e77) main_clock2_list_pane

0x4b41,	// (0x000142fc) main_clock2_pane_t1_ParamLimits

0x4b41,	// (0x000142fc) main_clock2_pane_t1

0x4b7c,	// (0x00014337) main_clock2_pane_t2_ParamLimits

0x4b7c,	// (0x00014337) main_clock2_pane_t2

0x0004,

0xf7c5,	// (0x0001ef80) main_clock2_pane_t_ParamLimits

0xf7c5,	// (0x0001ef80) main_clock2_pane_t

0x4c1b,	// (0x000143d6) popup_clock_analogue_window_cp03_ParamLimits

0x4c1b,	// (0x000143d6) popup_clock_analogue_window_cp03

0x4c40,	// (0x000143fb) popup_clock_digital_window_cp02_ParamLimits

0x4c40,	// (0x000143fb) popup_clock_digital_window_cp02

0x4cb9,	// (0x00014474) main_clock2_list_single_pane_ParamLimits

0x4cb9,	// (0x00014474) main_clock2_list_single_pane

0xa071,	// (0x0001982c) list_highlight_pane_cp05

0xc95e,	// (0x0001c119) main_clock2_list_single_pane_t1

0x0ef8,	// (0x000106b3) popup_toolbar_window_cp04_ParamLimits

0x4007,	// (0x000137c2) camera2_autofocus_pane_g2_ParamLimits

0x4007,	// (0x000137c2) camera2_autofocus_pane_g2

0x4013,	// (0x000137ce) camera2_autofocus_pane_g3_ParamLimits

0x4013,	// (0x000137ce) camera2_autofocus_pane_g3

0x401f,	// (0x000137da) camera2_autofocus_pane_g4_ParamLimits

0x401f,	// (0x000137da) camera2_autofocus_pane_g4

0x402b,	// (0x000137e6) camera2_autofocus_pane_g5_ParamLimits

0x402b,	// (0x000137e6) camera2_autofocus_pane_g5

0x0004,

0xf709,	// (0x0001eec4) camera2_autofocus_pane_g_ParamLimits

0xf709,	// (0x0001eec4) camera2_autofocus_pane_g

0x4264,	// (0x00013a1f) camera2_autofocus_pane_cp_g2

0x426c,	// (0x00013a27) camera2_autofocus_pane_cp_g3

0x4274,	// (0x00013a2f) camera2_autofocus_pane_cp_g4

0x427c,	// (0x00013a37) camera2_autofocus_pane_cp_g5

0x0004,

0xf76f,	// (0x0001ef2a) camera2_autofocus_pane_cp_g

0x49cb,	// (0x00014186) popup_dialer_spcha_window

0x9647,	// (0x00018e02) bg_popup_sub_pane_cp07

0xc96c,	// (0x0001c127) list_spcha_pane

0xc974,	// (0x0001c12f) list_single_spcha_pane_ParamLimits

0xc974,	// (0x0001c12f) list_single_spcha_pane

0x9647,	// (0x00018e02) list_highlight_pane_cp06

0xc985,	// (0x0001c140) list_single_spcha_pane_t1

0xba68,	// (0x0001b223) popup_call2_audio_out_window_g4_ParamLimits

0xba68,	// (0x0001b223) popup_call2_audio_out_window_g4

0x9647,	// (0x00018e02) main_imed2_pane

0xc055,	// (0x0001b810) popup_imed_adjust2_window

0x33e7,	// (0x00012ba2) popup_imed_trans_window_ParamLimits

0x33e7,	// (0x00012ba2) popup_imed_trans_window

0xc3ab,	// (0x0001bb66) popup_blid_sat_info2_window_t1

0xc3b9,	// (0x0001bb74) popup_blid_sat_info2_window_t2

0x000a,

0xf69e,	// (0x0001ee59) popup_blid_sat_info2_window_t

0x4d74,	// (0x0001452f) aid_size_cell_colour_35

0x4d94,	// (0x0001454f) aid_size_cell_colour_112

0x4db4,	// (0x0001456f) aid_size_cell_effect

0xc029,	// (0x0001b7e4) bg_tb_trans_pane_cp02

0xa563,	// (0x00019d1e) heading_imed_pane

0x4dd4,	// (0x0001458f) listscroll_imed_pane

0xc993,	// (0x0001c14e) heading_imed_pane_g1

0xc99b,	// (0x0001c156) heading_imed_pane_t1

0xc9a9,	// (0x0001c164) grid_imed_colour_35_pane_ParamLimits

0xc9a9,	// (0x0001c164) grid_imed_colour_35_pane

0x4de0,	// (0x0001459b) grid_imed_effect_pane

0xc9c5,	// (0x0001c180) list_imed_aspect_pane

0x4df7,	// (0x000145b2) scroll_pane_cp027_ParamLimits

0x4df7,	// (0x000145b2) scroll_pane_cp027

0x4e08,	// (0x000145c3) cell_imed_effect_pane_ParamLimits

0x4e08,	// (0x000145c3) cell_imed_effect_pane

0xc9cd,	// (0x0001c188) cell_imed_colour_pane_ParamLimits

0xc9cd,	// (0x0001c188) cell_imed_colour_pane

0xca17,	// (0x0001c1d2) cell_imed_colour_pane_g1_ParamLimits

0xca17,	// (0x0001c1d2) cell_imed_colour_pane_g1

0xca28,	// (0x0001c1e3) hgihlgiht_grid_pane_cp016_ParamLimits

0xca28,	// (0x0001c1e3) hgihlgiht_grid_pane_cp016

0x4e33,	// (0x000145ee) cell_imed_effect_pane_g1

0x4e3b,	// (0x000145f6) grid_highlight_pane_cp017

0xca39,	// (0x0001c1f4) list_imed_single_pane_ParamLimits

0xca39,	// (0x0001c1f4) list_imed_single_pane

0x9647,	// (0x00018e02) list_highlight_pane_cp07

0xca4d,	// (0x0001c208) list_imed_aspect_pane_comp1_t1

0xc029,	// (0x0001b7e4) bg_tb_trans_pane_cp05

0xca6f,	// (0x0001c22a) popup_imed_adjust2_window_g1

0xca96,	// (0x0001c251) popup_imed_adjust2_window_t1

0xcaae,	// (0x0001c269) slider_imed_adjust_pane

0xcac2,	// (0x0001c27d) slider_imed_adjust_pane_g1

0xcad2,	// (0x0001c28d) slider_imed_adjust_pane_g2

0xcae2,	// (0x0001c29d) slider_imed_adjust_pane_g3

0xcaf3,	// (0x0001c2ae) slider_imed_adjust_pane_g4

0x0003,

0xf7e2,	// (0x0001ef9d) slider_imed_adjust_pane_g

0x4e44,	// (0x000145ff) aid_size_cell_clipart2

0xcb04,	// (0x0001c2bf) grid_imed_clipart_pane

0xcb0e,	// (0x0001c2c9) scroll_pane_cp031

0x4e50,	// (0x0001460b) cell_imed_clipart_pane_ParamLimits

0x4e50,	// (0x0001460b) cell_imed_clipart_pane

0x4e6d,	// (0x00014628) cell_imed_clipart_pane_g1

0x9647,	// (0x00018e02) grid_highlight_pane_cp014

0x4b1f,	// (0x000142da) main_clock2_pane_g1_ParamLimits

0x4b1f,	// (0x000142da) main_clock2_pane_g1

0x4c60,	// (0x0001441b) aid_call2_pane_cp10

0x4c72,	// (0x0001442d) aid_call_pane_cp10

0xa9a7,	// (0x0001a162) popup_clock_analogue_window_cp10_g1

0xa9a7,	// (0x0001a162) popup_clock_analogue_window_cp10_g2

0x4c84,	// (0x0001443f) popup_clock_analogue_window_cp10_g3

0x4c84,	// (0x0001443f) popup_clock_analogue_window_cp10_g4

0xa9a7,	// (0x0001a162) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7d0,	// (0x0001ef8b) popup_clock_analogue_window_cp10_g

0x4c9a,	// (0x00014455) popup_clock_analogue_window_cp10_t1

0x4ccb,	// (0x00014486) clock_digital_number_pane_cp10_ParamLimits

0x4ccb,	// (0x00014486) clock_digital_number_pane_cp10

0x4ce5,	// (0x000144a0) clock_digital_number_pane_cp11_ParamLimits

0x4ce5,	// (0x000144a0) clock_digital_number_pane_cp11

0x4cff,	// (0x000144ba) clock_digital_number_pane_cp12_ParamLimits

0x4cff,	// (0x000144ba) clock_digital_number_pane_cp12

0x4d1b,	// (0x000144d6) clock_digital_number_pane_cp13_ParamLimits

0x4d1b,	// (0x000144d6) clock_digital_number_pane_cp13

0x4d37,	// (0x000144f2) clock_digital_separator_pane_cp10_ParamLimits

0x4d37,	// (0x000144f2) clock_digital_separator_pane_cp10

0x4d53,	// (0x0001450e) popup_clock_digital_window_cp02_t1_ParamLimits

0x4d53,	// (0x0001450e) popup_clock_digital_window_cp02_t1

0x9d65,	// (0x00019520) clock_digital_number_pane_cp10_g1

0x9d65,	// (0x00019520) clock_digital_number_pane_cp10_g2

0x0001,

0xf7eb,	// (0x0001efa6) clock_digital_number_pane_cp10_g

0x9d65,	// (0x00019520) clock_digital_separator_pane_cp10_g1

0x9d65,	// (0x00019520) clock_digital_separator_pane_g2_cp10

0xab36,	// (0x0001a2f1) navi_pane_vded_g4

0xab3f,	// (0x0001a2fa) navi_pane_vded_g5

0xab48,	// (0x0001a303) navi_pane_vded_t1

0x9647,	// (0x00018e02) main_vded_pane

0x4e76,	// (0x00014631) main_vded_pane_g1

0x4e82,	// (0x0001463d) main_vded_pane_g2

0x4e8e,	// (0x00014649) main_vded_pane_g3

0x0002,

0xf7f0,	// (0x0001efab) main_vded_pane_g

0x4e9a,	// (0x00014655) main_vded_pane_t1

0x4ea8,	// (0x00014663) main_vded_pane_t2

0x0001,

0xf7f7,	// (0x0001efb2) main_vded_pane_t

0x4eb6,	// (0x00014671) vded_slider_pane

0x4ec0,	// (0x0001467b) vded_video_pane

0xcb16,	// (0x0001c2d1) vded_video_pane_g1

0x4ecc,	// (0x00014687) vded_video_pane_g2

0xc573,	// (0x0001bd2e) vded_video_pane_g3

0x0002,

0xf7fc,	// (0x0001efb7) vded_video_pane_g

0xcb20,	// (0x0001c2db) vded_slider_pane_g1

0xc27c,	// (0x0001ba37) vded_slider_pane_g2

0xcb29,	// (0x0001c2e4) vded_slider_pane_g3

0xcb32,	// (0x0001c2ed) vded_slider_pane_g4

0xcb3b,	// (0x0001c2f6) vded_slider_pane_g5

0x0004,

0xf803,	// (0x0001efbe) vded_slider_pane_g

0x48a1,	// (0x0001405c) mup3_rocker_pane_ParamLimits

0x48a1,	// (0x0001405c) mup3_rocker_pane

0x4ed5,	// (0x00014690) mup3_control_keys_pane_g1

0x4edd,	// (0x00014698) mup3_control_keys_pane_g2

0x4ee5,	// (0x000146a0) mup3_control_keys_pane_g3

0x4eed,	// (0x000146a8) mup3_control_keys_pane_g4

0x0003,

0xf80e,	// (0x0001efc9) mup3_control_keys_pane_g

0xfe29,	// (0x0000f5e4) popup_toolbar2_fixed_window_cp01_ParamLimits

0xfe29,	// (0x0000f5e4) popup_toolbar2_fixed_window_cp01

0x48d7,	// (0x00014092) popup_toolbar2_fixed_window_cp02_ParamLimits

0x48d7,	// (0x00014092) popup_toolbar2_fixed_window_cp02

0xb3a7,	// (0x0001ab62) popup_call2_audio_second_window_t4_ParamLimits

0xb3a7,	// (0x0001ab62) popup_call2_audio_second_window_t4

0xb8d5,	// (0x0001b090) popup_call2_audio_first_window_t6_ParamLimits

0xb8d5,	// (0x0001b090) popup_call2_audio_first_window_t6

0xbb6b,	// (0x0001b326) popup_call2_audio_out_window_t6_ParamLimits

0xbb6b,	// (0x0001b326) popup_call2_audio_out_window_t6

0x9647,	// (0x00018e02) main_vitu_pane

0x4efd,	// (0x000146b8) aid_size_cell_itu_ParamLimits

0x4efd,	// (0x000146b8) aid_size_cell_itu

0x96bc,	// (0x00018e77) bg_popup_window_pane_cp08_ParamLimits

0x96bc,	// (0x00018e77) bg_popup_window_pane_cp08

0x4f13,	// (0x000146ce) field_vitu_entry_pane_ParamLimits

0x4f13,	// (0x000146ce) field_vitu_entry_pane

0x4f2a,	// (0x000146e5) grid_vitu_function_pane_ParamLimits

0x4f2a,	// (0x000146e5) grid_vitu_function_pane

0x4f45,	// (0x00014700) grid_vitu_itu_pane_ParamLimits

0x4f45,	// (0x00014700) grid_vitu_itu_pane

0x4f63,	// (0x0001471e) cell_vitu_itu_pane_ParamLimits

0x4f63,	// (0x0001471e) cell_vitu_itu_pane

0x4f89,	// (0x00014744) cell_vitu_function_pane_ParamLimits

0x4f89,	// (0x00014744) cell_vitu_function_pane

0x96bc,	// (0x00018e77) bg_popup_sub_pane_cp08_ParamLimits

0x96bc,	// (0x00018e77) bg_popup_sub_pane_cp08

0x4fa4,	// (0x0001475f) field_vitu_entry_pane_t1_ParamLimits

0x4fa4,	// (0x0001475f) field_vitu_entry_pane_t1

0xcb5c,	// (0x0001c317) field_vitu_entry_pane_t2_ParamLimits

0xcb5c,	// (0x0001c317) field_vitu_entry_pane_t2

0x0001,

0xf81c,	// (0x0001efd7) field_vitu_entry_pane_t_ParamLimits

0xf81c,	// (0x0001efd7) field_vitu_entry_pane_t

0xcb79,	// (0x0001c334) bg_button_pane_cp05_ParamLimits

0xcb79,	// (0x0001c334) bg_button_pane_cp05

0x4fc4,	// (0x0001477f) cell_vitu_itu_pane_g1

0x4fdc,	// (0x00014797) cell_vitu_itu_pane_t1_ParamLimits

0x4fdc,	// (0x00014797) cell_vitu_itu_pane_t1

0x4fee,	// (0x000147a9) cell_vitu_itu_pane_t2_ParamLimits

0x4fee,	// (0x000147a9) cell_vitu_itu_pane_t2

0x0002,

0xf821,	// (0x0001efdc) cell_vitu_itu_pane_t_ParamLimits

0xf821,	// (0x0001efdc) cell_vitu_itu_pane_t

0xcb87,	// (0x0001c342) bg_button_pane_cp07

0x5023,	// (0x000147de) cell_vitu_function_pane_g1

0x9df4,	// (0x000195af) main_calc_pane_g1

0xfc4f,	// (0x0000f40a) aid_visual_content_pane

0x9647,	// (0x00018e02) main_vradio_pane

0x502c,	// (0x000147e7) main_vradio_pane_g1_ParamLimits

0x502c,	// (0x000147e7) main_vradio_pane_g1

0xcb91,	// (0x0001c34c) main_vradio_pane_g2_ParamLimits

0xcb91,	// (0x0001c34c) main_vradio_pane_g2

0x0001,

0xf828,	// (0x0001efe3) main_vradio_pane_g_ParamLimits

0xf828,	// (0x0001efe3) main_vradio_pane_g

0x5043,	// (0x000147fe) main_vradio_pane_t1_ParamLimits

0x5043,	// (0x000147fe) main_vradio_pane_t1

0x5058,	// (0x00014813) main_vradio_pane_t2_ParamLimits

0x5058,	// (0x00014813) main_vradio_pane_t2

0xcb9e,	// (0x0001c359) main_vradio_pane_t3_ParamLimits

0xcb9e,	// (0x0001c359) main_vradio_pane_t3

0x0002,

0xf82d,	// (0x0001efe8) main_vradio_pane_t_ParamLimits

0xf82d,	// (0x0001efe8) main_vradio_pane_t

0x506d,	// (0x00014828) vradio_rocker_control_pane_ParamLimits

0x506d,	// (0x00014828) vradio_rocker_control_pane

0x507f,	// (0x0001483a) vradio_station_info_pane_ParamLimits

0x507f,	// (0x0001483a) vradio_station_info_pane

0xcbb2,	// (0x0001c36d) vradio_frequency_info_pane_ParamLimits

0xcbb2,	// (0x0001c36d) vradio_frequency_info_pane

0xc573,	// (0x0001bd2e) vradio_station_info_pane_g1

0xcbc1,	// (0x0001c37c) vradio_station_info_pane_t1_ParamLimits

0xcbc1,	// (0x0001c37c) vradio_station_info_pane_t1

0xcbe3,	// (0x0001c39e) vradio_station_info_pane_t2_ParamLimits

0xcbe3,	// (0x0001c39e) vradio_station_info_pane_t2

0x0001,

0xf834,	// (0x0001efef) vradio_station_info_pane_t_ParamLimits

0xf834,	// (0x0001efef) vradio_station_info_pane_t

0xcbf5,	// (0x0001c3b0) vradio_tuning_pane

0xcbfd,	// (0x0001c3b8) vradio_rocker_control_pane_g1

0xcc05,	// (0x0001c3c0) vradio_rocker_control_pane_g2

0xcc0d,	// (0x0001c3c8) vradio_rocker_control_pane_g3

0xcc15,	// (0x0001c3d0) vradio_rocker_control_pane_g4

0xcc1d,	// (0x0001c3d8) vradio_rocker_control_pane_g5

0x0004,

0xf839,	// (0x0001eff4) vradio_rocker_control_pane_g

0x508f,	// (0x0001484a) vradio_frequency_info_pane_g1

0xcc25,	// (0x0001c3e0) vradio_frequency_info_pane_t1_ParamLimits

0xcc25,	// (0x0001c3e0) vradio_frequency_info_pane_t1

0x5099,	// (0x00014854) vradio_tuning_pane_g1

0x50a4,	// (0x0001485f) vradio_tuning_pane_t1

0x9675,	// (0x00018e30) area_side_right_pane_ParamLimits

0x9675,	// (0x00018e30) area_side_right_pane

0xbfe4,	// (0x0001b79f) status_small_pane_g1

0xbfec,	// (0x0001b7a7) status_small_pane_g2

0xbff5,	// (0x0001b7b0) status_small_pane_g3

0xbffe,	// (0x0001b7b9) status_small_pane_g4

0x0003,

0xf5f4,	// (0x0001edaf) status_small_pane_g

0xc007,	// (0x0001b7c2) status_small_pane_t1

0x9647,	// (0x00018e02) main_video3_pane

0xcc39,	// (0x0001c3f4) cams_zoom_vslider_pane

0xcc41,	// (0x0001c3fc) image3_wide_pane_ParamLimits

0xcc41,	// (0x0001c3fc) image3_wide_pane

0xcc5b,	// (0x0001c416) image3_wide_small_pane

0xcc67,	// (0x0001c422) main_video3_pane_g1_ParamLimits

0xcc67,	// (0x0001c422) main_video3_pane_g1

0xcc83,	// (0x0001c43e) main_video3_pane_g2_ParamLimits

0xcc83,	// (0x0001c43e) main_video3_pane_g2

0x0001,

0xf844,	// (0x0001efff) main_video3_pane_g_ParamLimits

0xf844,	// (0x0001efff) main_video3_pane_g

0xcc9f,	// (0x0001c45a) main_video3_pane_t1_ParamLimits

0xcc9f,	// (0x0001c45a) main_video3_pane_t1

0xccca,	// (0x0001c485) main_video3_pane_t2_ParamLimits

0xccca,	// (0x0001c485) main_video3_pane_t2

0xccf7,	// (0x0001c4b2) main_video3_pane_t3_ParamLimits

0xccf7,	// (0x0001c4b2) main_video3_pane_t3

0x0002,

0xf849,	// (0x0001f004) main_video3_pane_t_ParamLimits

0xf849,	// (0x0001f004) main_video3_pane_t

0xcd24,	// (0x0001c4df) cams_zoom_vslider_pane_g1

0xcd2d,	// (0x0001c4e8) cams_zoom_vslider_pane_g2

0x0001,

0xf850,	// (0x0001f00b) cams_zoom_vslider_pane_g

0xcd35,	// (0x0001c4f0) small_slider_vertical_pane

0xc573,	// (0x0001bd2e) small_slider_vertical_pane_g1

0xc573,	// (0x0001bd2e) small_slider_vertical_pane_g2

0xcd3d,	// (0x0001c4f8) small_slider_vertical_pane_g3

0x0002,

0xf855,	// (0x0001f010) small_slider_vertical_pane_g

0x9647,	// (0x00018e02) main_hwr_training_pane

0xcd46,	// (0x0001c501) hwr_training_instruct_pane_ParamLimits

0xcd46,	// (0x0001c501) hwr_training_instruct_pane

0x50b3,	// (0x0001486e) hwr_training_navi_pane_ParamLimits

0x50b3,	// (0x0001486e) hwr_training_navi_pane

0x50d2,	// (0x0001488d) hwr_training_write_pane_ParamLimits

0x50d2,	// (0x0001488d) hwr_training_write_pane

0x9647,	// (0x00018e02) bg_frame_shadow_pane

0xcd7d,	// (0x0001c538) hwr_training_write_pane_g1

0xcd85,	// (0x0001c540) hwr_training_write_pane_g2

0xcd8d,	// (0x0001c548) hwr_training_write_pane_g3

0xcd95,	// (0x0001c550) hwr_training_write_pane_g4

0xcd9d,	// (0x0001c558) hwr_training_write_pane_g5

0xcda5,	// (0x0001c560) hwr_training_write_pane_g6

0xcdad,	// (0x0001c568) hwr_training_write_pane_g7

0x0006,

0xf85c,	// (0x0001f017) hwr_training_write_pane_g

0xcdb5,	// (0x0001c570) hwr_training_navi_pane_g1_ParamLimits

0xcdb5,	// (0x0001c570) hwr_training_navi_pane_g1

0xcdc7,	// (0x0001c582) hwr_training_navi_pane_g2_ParamLimits

0xcdc7,	// (0x0001c582) hwr_training_navi_pane_g2

0xcdd9,	// (0x0001c594) hwr_training_navi_pane_g3_ParamLimits

0xcdd9,	// (0x0001c594) hwr_training_navi_pane_g3

0xcde9,	// (0x0001c5a4) hwr_training_navi_pane_g4_ParamLimits

0xcde9,	// (0x0001c5a4) hwr_training_navi_pane_g4

0x0004,

0xf86b,	// (0x0001f026) hwr_training_navi_pane_g_ParamLimits

0xf86b,	// (0x0001f026) hwr_training_navi_pane_g

0xcdf6,	// (0x0001c5b1) hwr_training_navi_pane_t1

0x511a,	// (0x000148d5) list_single_hwr_training_instruct_pane_ParamLimits

0x511a,	// (0x000148d5) list_single_hwr_training_instruct_pane

0xce04,	// (0x0001c5bf) list_single_hwr_training_instruct_pane_t1

0xc4b3,	// (0x0001bc6e) bg_frame_shadow_pane_g1

0xce13,	// (0x0001c5ce) bg_frame_shadow_pane_g2

0xce1b,	// (0x0001c5d6) bg_frame_shadow_pane_g3

0xce23,	// (0x0001c5de) bg_frame_shadow_pane_g4

0xce2b,	// (0x0001c5e6) bg_frame_shadow_pane_g5

0xce33,	// (0x0001c5ee) bg_frame_shadow_pane_g6

0xce3b,	// (0x0001c5f6) bg_frame_shadow_pane_g7

0x9f3a,	// (0x000196f5) bg_frame_shadow_pane_g8

0x0007,

0xf876,	// (0x0001f031) bg_frame_shadow_pane_g

0x9647,	// (0x00018e02) main_video_tele_dialer_pane

0x5136,	// (0x000148f1) aid_size_cell_video_keypad_ParamLimits

0x5136,	// (0x000148f1) aid_size_cell_video_keypad

0x5150,	// (0x0001490b) grid_video_dialer_keypad_pane_ParamLimits

0x5150,	// (0x0001490b) grid_video_dialer_keypad_pane

0x519c,	// (0x00014957) video_down_pane_cp_ParamLimits

0x519c,	// (0x00014957) video_down_pane_cp

0x51ce,	// (0x00014989) cell_video_dialer_keypad_pane_ParamLimits

0x51ce,	// (0x00014989) cell_video_dialer_keypad_pane

0xce43,	// (0x0001c5fe) bg_button_pane_cp08_ParamLimits

0xce43,	// (0x0001c5fe) bg_button_pane_cp08

0x51f4,	// (0x000149af) cell_video_dialer_keypad_pane_g1_ParamLimits

0x51f4,	// (0x000149af) cell_video_dialer_keypad_pane_g1

0x488b,	// (0x00014046) mup3_rocker2_pane_ParamLimits

0x488b,	// (0x00014046) mup3_rocker2_pane

0xc573,	// (0x0001bd2e) mup3_rocker2_pane_g1

0x32b4,	// (0x00012a6f) main_dialer2_pane

0x9647,	// (0x00018e02) main_mp4_pane

0xce6d,	// (0x0001c628) main_mp4_pane_g1_ParamLimits

0xce6d,	// (0x0001c628) main_mp4_pane_g1

0xce6d,	// (0x0001c628) main_mp4_pane_g2_ParamLimits

0xce6d,	// (0x0001c628) main_mp4_pane_g2

0x522f,	// (0x000149ea) main_mp4_pane_g3_ParamLimits

0x522f,	// (0x000149ea) main_mp4_pane_g3

0xce7b,	// (0x0001c636) main_mp4_pane_g4_ParamLimits

0xce7b,	// (0x0001c636) main_mp4_pane_g4

0xcea9,	// (0x0001c664) main_mp4_pane_g5_ParamLimits

0xcea9,	// (0x0001c664) main_mp4_pane_g5

0x0007,

0xf896,	// (0x0001f051) main_mp4_pane_g_ParamLimits

0xf896,	// (0x0001f051) main_mp4_pane_g

0xcf1d,	// (0x0001c6d8) main_mp4_pane_t1_ParamLimits

0xcf1d,	// (0x0001c6d8) main_mp4_pane_t1

0xcf79,	// (0x0001c734) main_mp4_pane_t2_ParamLimits

0xcf79,	// (0x0001c734) main_mp4_pane_t2

0xcfcb,	// (0x0001c786) main_mp4_pane_t3_ParamLimits

0xcfcb,	// (0x0001c786) main_mp4_pane_t3

0xcff1,	// (0x0001c7ac) main_mp4_pane_t4_ParamLimits

0xcff1,	// (0x0001c7ac) main_mp4_pane_t4

0x0003,

0xf8a7,	// (0x0001f062) main_mp4_pane_t_ParamLimits

0xf8a7,	// (0x0001f062) main_mp4_pane_t

0xd031,	// (0x0001c7ec) mp4_progress_pane_ParamLimits

0xd031,	// (0x0001c7ec) mp4_progress_pane

0xd07b,	// (0x0001c836) mp4_rocker_pane_ParamLimits

0xd07b,	// (0x0001c836) mp4_rocker_pane

0xd0a3,	// (0x0001c85e) mp4_progress_pane_t1

0xd0bc,	// (0x0001c877) mp4_progress_pane_t2

0x0001,

0xf8b0,	// (0x0001f06b) mp4_progress_pane_t

0xd0d5,	// (0x0001c890) mup_progress_pane_cp04

0xc573,	// (0x0001bd2e) mp4_rocker_pane_g1

0x5279,	// (0x00014a34) aid_cell_size_keypad2_ParamLimits

0x5279,	// (0x00014a34) aid_cell_size_keypad2

0x528f,	// (0x00014a4a) dialer2_ne_pane_ParamLimits

0x528f,	// (0x00014a4a) dialer2_ne_pane

0x52a7,	// (0x00014a62) grid_dialer2_keypad_pane_ParamLimits

0x52a7,	// (0x00014a62) grid_dialer2_keypad_pane

0xc352,	// (0x0001bb0d) bg_popup_call_pane_cp07_ParamLimits

0xc352,	// (0x0001bb0d) bg_popup_call_pane_cp07

0x52c3,	// (0x00014a7e) dialer2_ne_pane_t1_ParamLimits

0x52c3,	// (0x00014a7e) dialer2_ne_pane_t1

0x5303,	// (0x00014abe) cell_dialer2_keypad_pane_ParamLimits

0x5303,	// (0x00014abe) cell_dialer2_keypad_pane

0xd0fa,	// (0x0001c8b5) bg_button_pane_pane_cp04_ParamLimits

0xd0fa,	// (0x0001c8b5) bg_button_pane_pane_cp04

0x5329,	// (0x00014ae4) cell_dialer2_keypad_pane_g1_ParamLimits

0x5329,	// (0x00014ae4) cell_dialer2_keypad_pane_g1

0x0ddf,	// (0x0001059a) aid_placing_vt_set_content_ParamLimits

0x0ddf,	// (0x0001059a) aid_placing_vt_set_content

0x0e03,	// (0x000105be) aid_placing_vt_set_title_ParamLimits

0x0e03,	// (0x000105be) aid_placing_vt_set_title

0x9647,	// (0x00018e02) main_image3_pane

0x53ef,	// (0x00014baa) area_side_right_pane_cp01_ParamLimits

0x53ef,	// (0x00014baa) area_side_right_pane_cp01

0xce6d,	// (0x0001c628) main_image3_pane_g1_ParamLimits

0xce6d,	// (0x0001c628) main_image3_pane_g1

0x5408,	// (0x00014bc3) main_image3_pane_g2_ParamLimits

0x5408,	// (0x00014bc3) main_image3_pane_g2

0x5430,	// (0x00014beb) main_image3_pane_g3_ParamLimits

0x5430,	// (0x00014beb) main_image3_pane_g3

0x545a,	// (0x00014c15) main_image3_pane_g4_ParamLimits

0x545a,	// (0x00014c15) main_image3_pane_g4

0x0003,

0xf8bf,	// (0x0001f07a) main_image3_pane_g_ParamLimits

0xf8bf,	// (0x0001f07a) main_image3_pane_g

0x5484,	// (0x00014c3f) main_image3_pane_t1_ParamLimits

0x5484,	// (0x00014c3f) main_image3_pane_t1

0x54dc,	// (0x00014c97) main_image3_pane_t2_ParamLimits

0x54dc,	// (0x00014c97) main_image3_pane_t2

0x552e,	// (0x00014ce9) main_image3_pane_t3_ParamLimits

0x552e,	// (0x00014ce9) main_image3_pane_t3

0x0003,

0xf8c8,	// (0x0001f083) main_image3_pane_t_ParamLimits

0xf8c8,	// (0x0001f083) main_image3_pane_t

0x96bc,	// (0x00018e77) grid_sctrl_middle_pane_cp01_ParamLimits

0x96bc,	// (0x00018e77) grid_sctrl_middle_pane_cp01

0x55b6,	// (0x00014d71) cell_sctrl_middle_pane_cp01_ParamLimits

0x55b6,	// (0x00014d71) cell_sctrl_middle_pane_cp01

0x55d3,	// (0x00014d8e) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x55d3,	// (0x00014d8e) cell_sctrl_middle_pane_cp01_g1

0x9647,	// (0x00018e02) main_call4_pane

0x55e8,	// (0x00014da3) aid_size_button_call4_ParamLimits

0x55e8,	// (0x00014da3) aid_size_button_call4

0x561b,	// (0x00014dd6) call4_windows_pane_ParamLimits

0x561b,	// (0x00014dd6) call4_windows_pane

0x563a,	// (0x00014df5) grid_call4_button_pane_ParamLimits

0x563a,	// (0x00014df5) grid_call4_button_pane

0x5671,	// (0x00014e2c) call4_windows_conf_pane

0x568c,	// (0x00014e47) popup_call4_audio_first_window_ParamLimits

0x568c,	// (0x00014e47) popup_call4_audio_first_window

0x56de,	// (0x00014e99) popup_call4_audio_second_window_ParamLimits

0x56de,	// (0x00014e99) popup_call4_audio_second_window

0x56f7,	// (0x00014eb2) popup_call4_audio_wait_window_ParamLimits

0x56f7,	// (0x00014eb2) popup_call4_audio_wait_window

0x5705,	// (0x00014ec0) cell_call4_button_pane_ParamLimits

0x5705,	// (0x00014ec0) cell_call4_button_pane

0x572c,	// (0x00014ee7) bg_button_pane_cp09_ParamLimits

0x572c,	// (0x00014ee7) bg_button_pane_cp09

0x5738,	// (0x00014ef3) cell_call4_button_pane_g1_ParamLimits

0x5738,	// (0x00014ef3) cell_call4_button_pane_g1

0x575e,	// (0x00014f19) cell_call4_button_pane_t1_ParamLimits

0x575e,	// (0x00014f19) cell_call4_button_pane_t1

0xd174,	// (0x0001c92f) popup_call4_audio_conf_window_ParamLimits

0xd174,	// (0x0001c92f) popup_call4_audio_conf_window

0x48ed,	// (0x000140a8) mup3_progress_pane_t1_ParamLimits

0x490c,	// (0x000140c7) mup3_progress_pane_t2_ParamLimits

0xc821,	// (0x0001bfdc) mup3_progress_pane_t3_ParamLimits

0xf798,	// (0x0001ef53) mup3_progress_pane_t_ParamLimits

0xc83e,	// (0x0001bff9) mup_progress_pane_cp03_ParamLimits

0x4ef5,	// (0x000146b0) mup3_control_keys_pane_g4_copy1

0xd05f,	// (0x0001c81a) mp4_rocker2_pane_ParamLimits

0xd05f,	// (0x0001c81a) mp4_rocker2_pane

0xd18e,	// (0x0001c949) mp4_rocker2_pane_g1

0xd196,	// (0x0001c951) mp4_rocker2_pane_g2

0xd19e,	// (0x0001c959) mp4_rocker2_pane_g3

0xd1a6,	// (0x0001c961) mp4_rocker2_pane_g4

0xd1ae,	// (0x0001c969) mp4_rocker2_pane_g5

0x0004,

0xf8d1,	// (0x0001f08c) mp4_rocker2_pane_g

0x9647,	// (0x00018e02) main_camera4_pane

0x9647,	// (0x00018e02) main_video4_pane

0x516a,	// (0x00014925) main_video_tele_dialer_pane_t1_ParamLimits

0x516a,	// (0x00014925) main_video_tele_dialer_pane_t1

0x5183,	// (0x0001493e) main_video_tele_dialer_pane_t2_ParamLimits

0x5183,	// (0x0001493e) main_video_tele_dialer_pane_t2

0x0001,

0xf887,	// (0x0001f042) main_video_tele_dialer_pane_t_ParamLimits

0xf887,	// (0x0001f042) main_video_tele_dialer_pane_t

0x579c,	// (0x00014f57) cam4_autofocus_pane_ParamLimits

0x579c,	// (0x00014f57) cam4_autofocus_pane

0x57b2,	// (0x00014f6d) cam4_image_uncrop_pane_ParamLimits

0x57b2,	// (0x00014f6d) cam4_image_uncrop_pane

0x57cb,	// (0x00014f86) cam4_indicators_pane_ParamLimits

0x57cb,	// (0x00014f86) cam4_indicators_pane

0x57fb,	// (0x00014fb6) main_camera4_pane_g1_ParamLimits

0x57fb,	// (0x00014fb6) main_camera4_pane_g1

0x580d,	// (0x00014fc8) main_camera4_pane_g2_ParamLimits

0x580d,	// (0x00014fc8) main_camera4_pane_g2

0x5820,	// (0x00014fdb) main_camera4_pane_g3_ParamLimits

0x5820,	// (0x00014fdb) main_camera4_pane_g3

0x5833,	// (0x00014fee) main_camera4_pane_g4_ParamLimits

0x5833,	// (0x00014fee) main_camera4_pane_g4

0x5846,	// (0x00015001) main_camera4_pane_g5_ParamLimits

0x5846,	// (0x00015001) main_camera4_pane_g5

0x0005,

0xf8dc,	// (0x0001f097) main_camera4_pane_g_ParamLimits

0xf8dc,	// (0x0001f097) main_camera4_pane_g

0x586a,	// (0x00015025) main_camera4_pane_t1_ParamLimits

0x586a,	// (0x00015025) main_camera4_pane_t1

0xc79a,	// (0x0001bf55) bg_tb_trans_pane_cp06

0xd1dc,	// (0x0001c997) cam4_indicators_pane_g1

0xd1ed,	// (0x0001c9a8) cam4_indicators_pane_g2

0x0002,

0xf8f7,	// (0x0001f0b2) cam4_indicators_pane_g

0xd205,	// (0x0001c9c0) cam4_indicators_pane_t1

0x58ce,	// (0x00015089) main_video4_pane_g1_ParamLimits

0x58ce,	// (0x00015089) main_video4_pane_g1

0x58dd,	// (0x00015098) main_video4_pane_g2_ParamLimits

0x58dd,	// (0x00015098) main_video4_pane_g2

0x58ec,	// (0x000150a7) main_video4_pane_g3_ParamLimits

0x58ec,	// (0x000150a7) main_video4_pane_g3

0x58fb,	// (0x000150b6) main_video4_pane_g4_ParamLimits

0x58fb,	// (0x000150b6) main_video4_pane_g4

0x0004,

0xf8fe,	// (0x0001f0b9) main_video4_pane_g_ParamLimits

0xf8fe,	// (0x0001f0b9) main_video4_pane_g

0x5919,	// (0x000150d4) vid4_indicators_pane_ParamLimits

0x5919,	// (0x000150d4) vid4_indicators_pane

0x5947,	// (0x00015102) video4_image_uncrop_cif_pane_ParamLimits

0x5947,	// (0x00015102) video4_image_uncrop_cif_pane

0x5961,	// (0x0001511c) video4_image_uncrop_nhd_pane_ParamLimits

0x5961,	// (0x0001511c) video4_image_uncrop_nhd_pane

0x57b2,	// (0x00014f6d) video4_image_uncrop_vga_pane_ParamLimits

0x57b2,	// (0x00014f6d) video4_image_uncrop_vga_pane

0x96bc,	// (0x00018e77) bg_tb_trans_pane_cp07

0xd233,	// (0x0001c9ee) vid4_indicators_pane_g1

0xd249,	// (0x0001ca04) vid4_indicators_pane_g2

0xd25d,	// (0x0001ca18) vid4_indicators_pane_g3

0x0004,

0xf909,	// (0x0001f0c4) vid4_indicators_pane_g

0xd28e,	// (0x0001ca49) vid4_indicators_pane_t1

0x5977,	// (0x00015132) cam4_autofocus_pane_g1

0x597f,	// (0x0001513a) cam4_autofocus_pane_g2

0x5987,	// (0x00015142) cam4_autofocus_pane_g3

0x0002,

0xf914,	// (0x0001f0cf) cam4_autofocus_pane_g

0x598f,	// (0x0001514a) cam4_autofocus_pane_g3_copy1

0x51b2,	// (0x0001496d) video_down_pane_cp_t1

0x51c0,	// (0x0001497b) video_down_pane_cp_t2

0x0001,

0xf88c,	// (0x0001f047) video_down_pane_cp_t

0x96bc,	// (0x00018e77) popup_vitu2_window_ParamLimits

0x96bc,	// (0x00018e77) popup_vitu2_window

0x5997,	// (0x00015152) aid_size_cell2_itu2_ParamLimits

0x5997,	// (0x00015152) aid_size_cell2_itu2

0x59bd,	// (0x00015178) aid_size_cell_itu2_ParamLimits

0x59bd,	// (0x00015178) aid_size_cell_itu2

0x5a1d,	// (0x000151d8) bg_popup_window_pane_cp09_ParamLimits

0x5a1d,	// (0x000151d8) bg_popup_window_pane_cp09

0x5a2b,	// (0x000151e6) field_vitu2_entry_pane_ParamLimits

0x5a2b,	// (0x000151e6) field_vitu2_entry_pane

0x5a53,	// (0x0001520e) grid_vitu2_function_pane_ParamLimits

0x5a53,	// (0x0001520e) grid_vitu2_function_pane

0x5aa4,	// (0x0001525f) grid_vitu2_itu_pane_ParamLimits

0x5aa4,	// (0x0001525f) grid_vitu2_itu_pane

0x5b34,	// (0x000152ef) cell_vitu2_itu_pane_ParamLimits

0x5b34,	// (0x000152ef) cell_vitu2_itu_pane

0x5b61,	// (0x0001531c) cell_vitu2_function_pane_ParamLimits

0x5b61,	// (0x0001531c) cell_vitu2_function_pane

0xd2a5,	// (0x0001ca60) bg_popup_call_pane_cp08_ParamLimits

0xd2a5,	// (0x0001ca60) bg_popup_call_pane_cp08

0xd2bc,	// (0x0001ca77) field_vitu2_entry_pane_g1

0xd2c8,	// (0x0001ca83) field_vitu2_entry_pane_g2

0x0002,

0xf91b,	// (0x0001f0d6) field_vitu2_entry_pane_g

0x5ba5,	// (0x00015360) field_vitu2_entry_pane_t1_ParamLimits

0x5ba5,	// (0x00015360) field_vitu2_entry_pane_t1

0xd2e2,	// (0x0001ca9d) field_vitu2_entry_pane_t2_ParamLimits

0xd2e2,	// (0x0001ca9d) field_vitu2_entry_pane_t2

0x0001,

0xf922,	// (0x0001f0dd) field_vitu2_entry_pane_t_ParamLimits

0xf922,	// (0x0001f0dd) field_vitu2_entry_pane_t

0x5bd3,	// (0x0001538e) bg_button_pane_cp010_ParamLimits

0x5bd3,	// (0x0001538e) bg_button_pane_cp010

0xd307,	// (0x0001cac2) cell_vitu2_itu_pane_g1

0x5bef,	// (0x000153aa) cell_vitu2_itu_pane_t1_ParamLimits

0x5bef,	// (0x000153aa) cell_vitu2_itu_pane_t1

0x5c4d,	// (0x00015408) cell_vitu2_itu_pane_t2_ParamLimits

0x5c4d,	// (0x00015408) cell_vitu2_itu_pane_t2

0x0002,

0xf92c,	// (0x0001f0e7) cell_vitu2_itu_pane_t_ParamLimits

0xf92c,	// (0x0001f0e7) cell_vitu2_itu_pane_t

0x96bc,	// (0x00018e77) bg_button_pane_cp011

0x5d39,	// (0x000154f4) cell_vitu2_function_pane_g1

0x9647,	// (0x00018e02) main_myfav_hc_pane

0x557e,	// (0x00014d39) popup_image3_note_pane_ParamLimits

0x557e,	// (0x00014d39) popup_image3_note_pane

0x559a,	// (0x00014d55) popup_image3_tool_bar_pane_ParamLimits

0x559a,	// (0x00014d55) popup_image3_tool_bar_pane

0x5cdb,	// (0x00015496) cell_vitu2_itu_pane_t3_ParamLimits

0x5cdb,	// (0x00015496) cell_vitu2_itu_pane_t3

0x9647,	// (0x00018e02) bg_popup_trans_pane

0xd319,	// (0x0001cad4) grid_image3_tool_bar_pane

0xd323,	// (0x0001cade) bg_popup_trans_pane_g1

0xa2ed,	// (0x00019aa8) bg_popup_trans_pane_g2

0xd32b,	// (0x0001cae6) bg_popup_trans_pane_g3

0xd333,	// (0x0001caee) bg_popup_trans_pane_g4

0xd33b,	// (0x0001caf6) bg_popup_trans_pane_g5

0xd343,	// (0x0001cafe) bg_popup_trans_pane_g6

0xd34b,	// (0x0001cb06) bg_popup_trans_pane_g7

0xd353,	// (0x0001cb0e) bg_popup_trans_pane_g8

0xa2cd,	// (0x00019a88) bg_popup_trans_pane_g9

0x0008,

0xf933,	// (0x0001f0ee) bg_popup_trans_pane_g

0xd35b,	// (0x0001cb16) cell_image3_tool_bar_pane_ParamLimits

0xd35b,	// (0x0001cb16) cell_image3_tool_bar_pane

0xc573,	// (0x0001bd2e) cell_image3_tool_bar_pane_g1

0x9647,	// (0x00018e02) bg_popup_trans_pane_cp1

0xd371,	// (0x0001cb2c) popup_image3_note_pane_t1

0xd37f,	// (0x0001cb3a) popup_image3_note_pane_t2

0xd38d,	// (0x0001cb48) popup_image3_note_pane_t3

0x0002,

0xf946,	// (0x0001f101) popup_image3_note_pane_t

0xd39d,	// (0x0001cb58) popup_image3_note_pane_t3_copy1

0x5d4d,	// (0x00015508) bg_myfav_hc_instruction_pane_ParamLimits

0x5d4d,	// (0x00015508) bg_myfav_hc_instruction_pane

0x5d65,	// (0x00015520) cell_myfav_contact_pane_ParamLimits

0x5d65,	// (0x00015520) cell_myfav_contact_pane

0x5d81,	// (0x0001553c) cell_myfav_contact_pane_cp1_ParamLimits

0x5d81,	// (0x0001553c) cell_myfav_contact_pane_cp1

0x5d99,	// (0x00015554) cell_myfav_contact_pane_cp2_ParamLimits

0x5d99,	// (0x00015554) cell_myfav_contact_pane_cp2

0x5db1,	// (0x0001556c) cell_myfav_contact_pane_cp3_ParamLimits

0x5db1,	// (0x0001556c) cell_myfav_contact_pane_cp3

0x5dc8,	// (0x00015583) cell_myfav_contact_pane_cp4_ParamLimits

0x5dc8,	// (0x00015583) cell_myfav_contact_pane_cp4

0x5de0,	// (0x0001559b) cell_myfav_contact_pane_cp5_ParamLimits

0x5de0,	// (0x0001559b) cell_myfav_contact_pane_cp5

0x5df4,	// (0x000155af) cell_myfav_contact_pane_cp6_ParamLimits

0x5df4,	// (0x000155af) cell_myfav_contact_pane_cp6

0x5e0a,	// (0x000155c5) cell_myfav_contact_pane_cp7_ParamLimits

0x5e0a,	// (0x000155c5) cell_myfav_contact_pane_cp7

0xd3ab,	// (0x0001cb66) listscroll_gen_pane_cp05

0x5e22,	// (0x000155dd) main_myfav_hc_pane_g1_ParamLimits

0x5e22,	// (0x000155dd) main_myfav_hc_pane_g1

0x5e3c,	// (0x000155f7) main_myfav_hc_pane_g2_ParamLimits

0x5e3c,	// (0x000155f7) main_myfav_hc_pane_g2

0x0002,

0xf94d,	// (0x0001f108) main_myfav_hc_pane_g_ParamLimits

0xf94d,	// (0x0001f108) main_myfav_hc_pane_g

0x5e70,	// (0x0001562b) main_myfav_hc_pane_t1_ParamLimits

0x5e70,	// (0x0001562b) main_myfav_hc_pane_t1

0xd3b4,	// (0x0001cb6f) main_myfav_hc_pane_t2_ParamLimits

0xd3b4,	// (0x0001cb6f) main_myfav_hc_pane_t2

0xd3c6,	// (0x0001cb81) main_myfav_hc_pane_t3_ParamLimits

0xd3c6,	// (0x0001cb81) main_myfav_hc_pane_t3

0x5e87,	// (0x00015642) main_myfav_hc_pane_t4_ParamLimits

0x5e87,	// (0x00015642) main_myfav_hc_pane_t4

0x0004,

0xf954,	// (0x0001f10f) main_myfav_hc_pane_t_ParamLimits

0xf954,	// (0x0001f10f) main_myfav_hc_pane_t

0xc573,	// (0x0001bd2e) bg_myfav_hc_instruction_pane_g1

0xd3d8,	// (0x0001cb93) cell_myfav_contact_pane_g1_ParamLimits

0xd3d8,	// (0x0001cb93) cell_myfav_contact_pane_g1

0xd3d8,	// (0x0001cb93) cell_myfav_contact_pane_g2_ParamLimits

0xd3d8,	// (0x0001cb93) cell_myfav_contact_pane_g2

0xd3e4,	// (0x0001cb9f) cell_myfav_contact_pane_g3_ParamLimits

0xd3e4,	// (0x0001cb9f) cell_myfav_contact_pane_g3

0xc80b,	// (0x0001bfc6) cell_myfav_contact_pane_g4_ParamLimits

0xc80b,	// (0x0001bfc6) cell_myfav_contact_pane_g4

0xd3f1,	// (0x0001cbac) cell_myfav_contact_pane_g5_ParamLimits

0xd3f1,	// (0x0001cbac) cell_myfav_contact_pane_g5

0x0004,

0xf95f,	// (0x0001f11a) cell_myfav_contact_pane_g_ParamLimits

0xf95f,	// (0x0001f11a) cell_myfav_contact_pane_g

0x5e56,	// (0x00015611) main_myfav_hc_pane_g3_ParamLimits

0x5e56,	// (0x00015611) main_myfav_hc_pane_g3

0xfd8c,	// (0x0000f547) popup_adpt_find_window

0x5eb1,	// (0x0001566c) afind_page_pane_ParamLimits

0x5eb1,	// (0x0001566c) afind_page_pane

0x5ec6,	// (0x00015681) aid_size_cell_afind_ParamLimits

0x5ec6,	// (0x00015681) aid_size_cell_afind

0x5ee4,	// (0x0001569f) bg_popup_sub_pane_cp09_ParamLimits

0x5ee4,	// (0x0001569f) bg_popup_sub_pane_cp09

0x5ef1,	// (0x000156ac) find_pane_cp01_ParamLimits

0x5ef1,	// (0x000156ac) find_pane_cp01

0xd3fd,	// (0x0001cbb8) grid_afind_control_pane_ParamLimits

0xd3fd,	// (0x0001cbb8) grid_afind_control_pane

0x5efe,	// (0x000156b9) grid_afind_pane_ParamLimits

0x5efe,	// (0x000156b9) grid_afind_pane

0x5f20,	// (0x000156db) cell_afind_pane_ParamLimits

0x5f20,	// (0x000156db) cell_afind_pane

0xc573,	// (0x0001bd2e) afind_page_pane_g1

0x5f8d,	// (0x00015748) afind_page_pane_g2

0x5f96,	// (0x00015751) afind_page_pane_g3

0x0002,

0xf96a,	// (0x0001f125) afind_page_pane_g

0x5f9f,	// (0x0001575a) afind_page_pane_t1

0xd411,	// (0x0001cbcc) cell_afind_grid_control_pane_ParamLimits

0xd411,	// (0x0001cbcc) cell_afind_grid_control_pane

0xd0fa,	// (0x0001c8b5) bg_button_pane_cp69_ParamLimits

0xd0fa,	// (0x0001c8b5) bg_button_pane_cp69

0x5fbf,	// (0x0001577a) cell_afind_pane_g1_ParamLimits

0x5fbf,	// (0x0001577a) cell_afind_pane_g1

0x5fcc,	// (0x00015787) cell_afind_pane_t1_ParamLimits

0x5fcc,	// (0x00015787) cell_afind_pane_t1

0xa0e2,	// (0x0001989d) bg_button_pane_cp72

0xd420,	// (0x0001cbdb) cell_afind_grid_control_pane_g1

0x2d54,	// (0x0001250f) aid_image_placing_area_ParamLimits

0x2d54,	// (0x0001250f) aid_image_placing_area

0xcb44,	// (0x0001c2ff) field_vitu_entry_pane_g1_ParamLimits

0xcb44,	// (0x0001c2ff) field_vitu_entry_pane_g1

0xcb50,	// (0x0001c30b) field_vitu_entry_pane_g2_ParamLimits

0xcb50,	// (0x0001c30b) field_vitu_entry_pane_g2

0x0001,

0xf817,	// (0x0001efd2) field_vitu_entry_pane_g_ParamLimits

0xf817,	// (0x0001efd2) field_vitu_entry_pane_g

0x4fc4,	// (0x0001477f) cell_vitu_itu_pane_g1_ParamLimits

0x5006,	// (0x000147c1) cell_vitu_itu_pane_t3_ParamLimits

0x5006,	// (0x000147c1) cell_vitu_itu_pane_t3

0xd0a3,	// (0x0001c85e) mp4_progress_pane_t1_ParamLimits

0xd0bc,	// (0x0001c877) mp4_progress_pane_t2_ParamLimits

0xf8b0,	// (0x0001f06b) mp4_progress_pane_t_ParamLimits

0xd0d5,	// (0x0001c890) mup_progress_pane_cp04_ParamLimits

0x5e9b,	// (0x00015656) main_myfav_hc_pane_t5_ParamLimits

0x5e9b,	// (0x00015656) main_myfav_hc_pane_t5

0x966d,	// (0x00018e28) aid_zoom_text_primary

0xfd8c,	// (0x0000f547) popup_adpt_find_window_ParamLimits

0x96bc,	// (0x00018e77) main_cam_set_pane

0x57e4,	// (0x00014f9f) cam4_zoom_pane_ParamLimits

0x57e4,	// (0x00014f9f) cam4_zoom_pane

0x5fde,	// (0x00015799) main_cam_set_pane_g1_ParamLimits

0x5fde,	// (0x00015799) main_cam_set_pane_g1

0x5fec,	// (0x000157a7) main_cam_set_pane_g2_ParamLimits

0x5fec,	// (0x000157a7) main_cam_set_pane_g2

0x0001,

0xf971,	// (0x0001f12c) main_cam_set_pane_g_ParamLimits

0xf971,	// (0x0001f12c) main_cam_set_pane_g

0x600d,	// (0x000157c8) main_cam_set_pane_t1_ParamLimits

0x600d,	// (0x000157c8) main_cam_set_pane_t1

0x6028,	// (0x000157e3) main_cset_listscroll_pane_ParamLimits

0x6028,	// (0x000157e3) main_cset_listscroll_pane

0x604c,	// (0x00015807) main_cset_slider_pane_ParamLimits

0x604c,	// (0x00015807) main_cset_slider_pane

0xd431,	// (0x0001cbec) main_cset_list_pane_ParamLimits

0xd431,	// (0x0001cbec) main_cset_list_pane

0xd441,	// (0x0001cbfc) scroll_pane_cp028

0x6076,	// (0x00015831) aid_area_touch_slider

0x6092,	// (0x0001584d) cset_slider_pane

0x60bc,	// (0x00015877) main_cset_slider_pane_g1

0x60d1,	// (0x0001588c) main_cset_slider_pane_g2

0x0011,

0xf976,	// (0x0001f131) main_cset_slider_pane_g

0xd47a,	// (0x0001cc35) main_cset_slider_pane_t1

0x6193,	// (0x0001594e) main_cset_slider_pane_t2

0x61ad,	// (0x00015968) main_cset_slider_pane_t3

0x61c7,	// (0x00015982) main_cset_slider_pane_t4

0x61e1,	// (0x0001599c) main_cset_slider_pane_t5

0x61ff,	// (0x000159ba) main_cset_slider_pane_t6

0x6216,	// (0x000159d1) main_cset_slider_pane_t7

0x000e,

0xf99b,	// (0x0001f156) main_cset_slider_pane_t

0x6322,	// (0x00015add) cset_list_set_pane_ParamLimits

0x6322,	// (0x00015add) cset_list_set_pane

0x6336,	// (0x00015af1) aid_position_infowindow_above

0x633e,	// (0x00015af9) aid_position_infowindow_below

0x6346,	// (0x00015b01) cset_list_set_pane_g1_ParamLimits

0x6346,	// (0x00015b01) cset_list_set_pane_g1

0x6352,	// (0x00015b0d) cset_list_set_pane_g3_ParamLimits

0x6352,	// (0x00015b0d) cset_list_set_pane_g3

0x0001,

0xf9ba,	// (0x0001f175) cset_list_set_pane_g_ParamLimits

0xf9ba,	// (0x0001f175) cset_list_set_pane_g

0x6361,	// (0x00015b1c) cset_list_set_pane_t1_ParamLimits

0x6361,	// (0x00015b1c) cset_list_set_pane_t1

0x96bc,	// (0x00018e77) list_highlight_pane_cp021_ParamLimits

0x96bc,	// (0x00018e77) list_highlight_pane_cp021

0xacbe,	// (0x0001a479) cset_slider_pane_g1

0xacd0,	// (0x0001a48b) cset_slider_pane_g2

0xacc7,	// (0x0001a482) cset_slider_pane_g3

0x0002,

0xf9bf,	// (0x0001f17a) cset_slider_pane_g

0xd51a,	// (0x0001ccd5) aid_area_touch_cam4_zoom

0x6376,	// (0x00015b31) cam4_zoom_cont_pane

0x637e,	// (0x00015b39) cam4_zoom_pane_g1

0x6386,	// (0x00015b41) cam4_zoom_pane_g2

0x638e,	// (0x00015b49) cam4_zoom_pane_g3

0x0002,

0xf9c6,	// (0x0001f181) cam4_zoom_pane_g

0xd523,	// (0x0001ccde) cam4_zoom_cont_pane_g1

0xd52c,	// (0x0001cce7) cam4_zoom_cont_pane_g2

0xd535,	// (0x0001ccf0) cam4_zoom_cont_pane_g3

0x0002,

0xf9cd,	// (0x0001f188) cam4_zoom_cont_pane_g

0x5606,	// (0x00014dc1) call4_image_pane_ParamLimits

0x5606,	// (0x00014dc1) call4_image_pane

0x5671,	// (0x00014e2c) call4_windows_conf_pane_ParamLimits

0x56bc,	// (0x00014e77) popup_call4_audio_in_window_ParamLimits

0x56bc,	// (0x00014e77) popup_call4_audio_in_window

0x9647,	// (0x00018e02) bg_popup_call2_act_pane_cp02

0xd16c,	// (0x0001c927) call4_list_conf_pane

0xc573,	// (0x0001bd2e) call4_image_pane_g1

0xc573,	// (0x0001bd2e) call4_image_pane_g2

0x0001,

0xf6d8,	// (0x0001ee93) call4_image_pane_g

0xd53e,	// (0x0001ccf9) list_single_graphic_popup_conf4_pane_ParamLimits

0xd53e,	// (0x0001ccf9) list_single_graphic_popup_conf4_pane

0x9647,	// (0x00018e02) list_highlight_pane_cp022

0xd553,	// (0x0001cd0e) list_single_graphic_popup_conf4_pane_g1

0xa8a4,	// (0x0001a05f) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9d4,	// (0x0001f18f) list_single_graphic_popup_conf4_pane_g

0xd55b,	// (0x0001cd16) list_single_graphic_popup_conf4_pane_t1

0x0f1a,	// (0x000106d5) popup_vtel_slider_window_ParamLimits

0x0f1a,	// (0x000106d5) popup_vtel_slider_window

0xd0e8,	// (0x0001c8a3) dialer2_ne_pane_t2_ParamLimits

0xd0e8,	// (0x0001c8a3) dialer2_ne_pane_t2

0x0001,

0xf8b5,	// (0x0001f070) dialer2_ne_pane_t_ParamLimits

0xf8b5,	// (0x0001f070) dialer2_ne_pane_t

0xc352,	// (0x0001bb0d) bg_popup_sub_pane_cp010_ParamLimits

0xc352,	// (0x0001bb0d) bg_popup_sub_pane_cp010

0x6397,	// (0x00015b52) popup_vtel_slider_window_g1_ParamLimits

0x6397,	// (0x00015b52) popup_vtel_slider_window_g1

0x63aa,	// (0x00015b65) popup_vtel_slider_window_g2_ParamLimits

0x63aa,	// (0x00015b65) popup_vtel_slider_window_g2

0x0003,

0xf9d9,	// (0x0001f194) popup_vtel_slider_window_g_ParamLimits

0xf9d9,	// (0x0001f194) popup_vtel_slider_window_g

0x6400,	// (0x00015bbb) vtel_slider_pane_ParamLimits

0x6400,	// (0x00015bbb) vtel_slider_pane

0x6422,	// (0x00015bdd) vtel_slider_pane_g1_ParamLimits

0x6422,	// (0x00015bdd) vtel_slider_pane_g1

0x6436,	// (0x00015bf1) vtel_slider_pane_g2_ParamLimits

0x6436,	// (0x00015bf1) vtel_slider_pane_g2

0x644e,	// (0x00015c09) vtel_slider_pane_g3_ParamLimits

0x644e,	// (0x00015c09) vtel_slider_pane_g3

0x6422,	// (0x00015bdd) vtel_slider_pane_g4_ParamLimits

0x6422,	// (0x00015bdd) vtel_slider_pane_g4

0x6464,	// (0x00015c1f) vtel_slider_pane_g5_ParamLimits

0x6464,	// (0x00015c1f) vtel_slider_pane_g5

0x0004,

0xf9e2,	// (0x0001f19d) vtel_slider_pane_g_ParamLimits

0xf9e2,	// (0x0001f19d) vtel_slider_pane_g

0x96bc,	// (0x00018e77) main_gallery2_pane

0x59e9,	// (0x000151a4) aid_size_row_itut2_dropdow_list_ParamLimits

0x59e9,	// (0x000151a4) aid_size_row_itut2_dropdow_list

0x5a7b,	// (0x00015236) grid_vitu2_function_top_pane_ParamLimits

0x5a7b,	// (0x00015236) grid_vitu2_function_top_pane

0x5adf,	// (0x0001529a) popup_vitu2_dropdown_list_window_ParamLimits

0x5adf,	// (0x0001529a) popup_vitu2_dropdown_list_window

0x5b08,	// (0x000152c3) popup_vitu2_match_list_window

0x6488,	// (0x00015c43) cell_vitu2_function_top_pane_ParamLimits

0x6488,	// (0x00015c43) cell_vitu2_function_top_pane

0x64aa,	// (0x00015c65) cell_vitu2_function_top_pane_cp01_ParamLimits

0x64aa,	// (0x00015c65) cell_vitu2_function_top_pane_cp01

0x64c6,	// (0x00015c81) cell_vitu2_function_top_wide_pane_ParamLimits

0x64c6,	// (0x00015c81) cell_vitu2_function_top_wide_pane

0x96bc,	// (0x00018e77) bg_button_pane_cp012

0x64e2,	// (0x00015c9d) cell_vitu2_function_top_pane_g1

0xd571,	// (0x0001cd2c) bg_button_pane_cp013_ParamLimits

0xd571,	// (0x0001cd2c) bg_button_pane_cp013

0x64f6,	// (0x00015cb1) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x64f6,	// (0x00015cb1) cell_vitu2_function_top_wide_pane_g1

0x96bc,	// (0x00018e77) bg_popup_sub_pane_cp20

0x650e,	// (0x00015cc9) list_vitu2_match_list_pane

0xd323,	// (0x0001cade) bg_popup_sub_pane_cp20_g1

0xd32b,	// (0x0001cae6) bg_popup_sub_pane_cp20_g2

0xa2ed,	// (0x00019aa8) bg_popup_sub_pane_cp20_g3

0xd333,	// (0x0001caee) bg_popup_sub_pane_cp20_g4

0xa2cd,	// (0x00019a88) bg_popup_sub_pane_cp20_g5

0xd58d,	// (0x0001cd48) bg_popup_sub_pane_cp20_g6

0xd343,	// (0x0001cafe) bg_popup_sub_pane_cp20_g7

0xd34b,	// (0x0001cb06) bg_popup_sub_pane_cp20_g8

0xd353,	// (0x0001cb0e) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9ed,	// (0x0001f1a8) bg_popup_sub_pane_cp20_g

0xd595,	// (0x0001cd50) list_vitu2_match_list_item_pane_ParamLimits

0xd595,	// (0x0001cd50) list_vitu2_match_list_item_pane

0xd5a7,	// (0x0001cd62) list_vitu2_match_list_item_pane_t1

0x9647,	// (0x00018e02) bg_popup_sub_pane_cp21

0xa75e,	// (0x00019f19) grid_vitu2_dropdown_list_pane

0x6578,	// (0x00015d33) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x6578,	// (0x00015d33) cell_vitu2_dropdown_list_char_pane

0x659b,	// (0x00015d56) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x659b,	// (0x00015d56) cell_vitu2_dropdown_list_ctrl_pane

0xd5b5,	// (0x0001cd70) cell_vitu2_dropdown_list_char_pane_g1

0xd5be,	// (0x0001cd79) cell_vitu2_dropdown_list_char_pane_g2

0xd5c7,	// (0x0001cd82) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa0a,	// (0x0001f1c5) cell_vitu2_dropdown_list_char_pane_g

0x65c9,	// (0x00015d84) cell_vitu2_dropdown_list_char_pane_t1

0x65d7,	// (0x00015d92) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x65d7,	// (0x00015d92) cell_vitu2_dropdown_list_ctrl_pane_g1

0x65e7,	// (0x00015da2) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x65e7,	// (0x00015da2) cell_vitu2_dropdown_list_ctrl_pane_g2

0x65f8,	// (0x00015db3) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x65f8,	// (0x00015db3) cell_vitu2_dropdown_list_ctrl_pane_g3

0x6608,	// (0x00015dc3) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x6608,	// (0x00015dc3) cell_vitu2_dropdown_list_ctrl_pane_g4

0xc79a,	// (0x0001bf55) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xc79a,	// (0x0001bf55) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa11,	// (0x0001f1cc) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa11,	// (0x0001f1cc) cell_vitu2_dropdown_list_ctrl_pane_g

0x6624,	// (0x00015ddf) aid_size_cell_gallery2_ParamLimits

0x6624,	// (0x00015ddf) aid_size_cell_gallery2

0x6642,	// (0x00015dfd) grid_gallery2_pane_ParamLimits

0x6642,	// (0x00015dfd) grid_gallery2_pane

0x665c,	// (0x00015e17) scroll_pane_cp029_ParamLimits

0x665c,	// (0x00015e17) scroll_pane_cp029

0x666d,	// (0x00015e28) cell_gallery2_pane_ParamLimits

0x666d,	// (0x00015e28) cell_gallery2_pane

0xd633,	// (0x0001cdee) cell_gallery2_pane_g2

0x66d1,	// (0x00015e8c) cell_gallery2_pane_g3

0xd63b,	// (0x0001cdf6) cell_gallery2_pane_g4

0xd643,	// (0x0001cdfe) cell_gallery2_pane_g5

0xa071,	// (0x0001982c) grid_highlight_pane_cp10

0x5b08,	// (0x000152c3) popup_vitu2_match_list_window_ParamLimits

0x5b1f,	// (0x000152da) popup_vitu2_query_window_ParamLimits

0x5b1f,	// (0x000152da) popup_vitu2_query_window

0x9647,	// (0x00018e02) bg_vitu2_candi_button_pane

0xd5b5,	// (0x0001cd70) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd5be,	// (0x0001cd79) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd5c7,	// (0x0001cd82) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x66d9,	// (0x00015e94) bg_button_pane_cp015

0x66ed,	// (0x00015ea8) bg_button_pane_cp016

0x6700,	// (0x00015ebb) bg_button_pane_cp017

0xc029,	// (0x0001b7e4) bg_popup_sub_pane_cp22

0xd64b,	// (0x0001ce06) popup_vitu2_query_window_g1

0x6745,	// (0x00015f00) popup_vitu2_query_window_g2

0x0002,

0xfa1c,	// (0x0001f1d7) popup_vitu2_query_window_g

0x6764,	// (0x00015f1f) popup_vitu2_query_window_t1_ParamLimits

0x6764,	// (0x00015f1f) popup_vitu2_query_window_t1

0x6799,	// (0x00015f54) popup_vitu2_query_window_t2_ParamLimits

0x6799,	// (0x00015f54) popup_vitu2_query_window_t2

0x67ab,	// (0x00015f66) popup_vitu2_query_window_t3_ParamLimits

0x67ab,	// (0x00015f66) popup_vitu2_query_window_t3

0x67d3,	// (0x00015f8e) popup_vitu2_query_window_t4_ParamLimits

0x67d3,	// (0x00015f8e) popup_vitu2_query_window_t4

0x67f4,	// (0x00015faf) popup_vitu2_query_window_t5_ParamLimits

0x67f4,	// (0x00015faf) popup_vitu2_query_window_t5

0x0006,

0xfa23,	// (0x0001f1de) popup_vitu2_query_window_t_ParamLimits

0xfa23,	// (0x0001f1de) popup_vitu2_query_window_t

0xd429,	// (0x0001cbe4) main_cset_text_pane

0x6076,	// (0x00015831) aid_area_touch_slider_ParamLimits

0x6092,	// (0x0001584d) cset_slider_pane_ParamLimits

0x60bc,	// (0x00015877) main_cset_slider_pane_g1_ParamLimits

0x60d1,	// (0x0001588c) main_cset_slider_pane_g2_ParamLimits

0xd44a,	// (0x0001cc05) main_cset_slider_pane_g3_ParamLimits

0xd44a,	// (0x0001cc05) main_cset_slider_pane_g3

0x60e6,	// (0x000158a1) main_cset_slider_pane_g4_ParamLimits

0x60e6,	// (0x000158a1) main_cset_slider_pane_g4

0x60f5,	// (0x000158b0) main_cset_slider_pane_g5_ParamLimits

0x60f5,	// (0x000158b0) main_cset_slider_pane_g5

0x6103,	// (0x000158be) main_cset_slider_pane_g6_ParamLimits

0x6103,	// (0x000158be) main_cset_slider_pane_g6

0xf976,	// (0x0001f131) main_cset_slider_pane_g_ParamLimits

0xd47a,	// (0x0001cc35) main_cset_slider_pane_t1_ParamLimits

0x6193,	// (0x0001594e) main_cset_slider_pane_t2_ParamLimits

0x61ad,	// (0x00015968) main_cset_slider_pane_t3_ParamLimits

0x61c7,	// (0x00015982) main_cset_slider_pane_t4_ParamLimits

0x61e1,	// (0x0001599c) main_cset_slider_pane_t5_ParamLimits

0x61ff,	// (0x000159ba) main_cset_slider_pane_t6_ParamLimits

0x6216,	// (0x000159d1) main_cset_slider_pane_t7_ParamLimits

0x6244,	// (0x000159ff) main_cset_slider_pane_t8_ParamLimits

0x6244,	// (0x000159ff) main_cset_slider_pane_t8

0x626c,	// (0x00015a27) main_cset_slider_pane_t9_ParamLimits

0x626c,	// (0x00015a27) main_cset_slider_pane_t9

0x6294,	// (0x00015a4f) main_cset_slider_pane_t10_ParamLimits

0x6294,	// (0x00015a4f) main_cset_slider_pane_t10

0x62bc,	// (0x00015a77) main_cset_slider_pane_t11_ParamLimits

0x62bc,	// (0x00015a77) main_cset_slider_pane_t11

0x62e6,	// (0x00015aa1) main_cset_slider_pane_t12_ParamLimits

0x62e6,	// (0x00015aa1) main_cset_slider_pane_t12

0x6303,	// (0x00015abe) main_cset_slider_pane_t13_ParamLimits

0x6303,	// (0x00015abe) main_cset_slider_pane_t13

0xf99b,	// (0x0001f156) main_cset_slider_pane_t_ParamLimits

0x9647,	// (0x00018e02) bg_popup_sub_pane_cp011

0xd657,	// (0x0001ce12) main_cset_text_pane_g1

0xd65f,	// (0x0001ce1a) main_cset_text_pane_t1

0xd66d,	// (0x0001ce28) main_cset_text_pane_t2

0xd67b,	// (0x0001ce36) main_cset_text_pane_t3

0xd689,	// (0x0001ce44) main_cset_text_pane_t4

0xd697,	// (0x0001ce52) main_cset_text_pane_t5

0xd6a5,	// (0x0001ce60) main_cset_text_pane_t6

0xd6b3,	// (0x0001ce6e) main_cset_text_pane_t7

0x0006,

0xfa32,	// (0x0001f1ed) main_cset_text_pane_t

0x9647,	// (0x00018e02) main_cam4_burst_pane

0x9647,	// (0x00018e02) main_cam5_pane

0x5fad,	// (0x00015768) bg_button_pane_cp019

0x5fb6,	// (0x00015771) bg_button_pane_cp020

0xd456,	// (0x0001cc11) main_cset_slider_pane_g7_ParamLimits

0xd456,	// (0x0001cc11) main_cset_slider_pane_g7

0xd462,	// (0x0001cc1d) main_cset_slider_pane_g8_ParamLimits

0xd462,	// (0x0001cc1d) main_cset_slider_pane_g8

0x6117,	// (0x000158d2) main_cset_slider_pane_g9_ParamLimits

0x6117,	// (0x000158d2) main_cset_slider_pane_g9

0x6123,	// (0x000158de) main_cset_slider_pane_g10_ParamLimits

0x6123,	// (0x000158de) main_cset_slider_pane_g10

0x612f,	// (0x000158ea) main_cset_slider_pane_g11_ParamLimits

0x612f,	// (0x000158ea) main_cset_slider_pane_g11

0x613b,	// (0x000158f6) main_cset_slider_pane_g12_ParamLimits

0x613b,	// (0x000158f6) main_cset_slider_pane_g12

0x6147,	// (0x00015902) main_cset_slider_pane_g13_ParamLimits

0x6147,	// (0x00015902) main_cset_slider_pane_g13

0x6153,	// (0x0001590e) main_cset_slider_pane_g14_ParamLimits

0x6153,	// (0x0001590e) main_cset_slider_pane_g14

0x615f,	// (0x0001591a) main_cset_slider_pane_g15_ParamLimits

0x615f,	// (0x0001591a) main_cset_slider_pane_g15

0xd4a8,	// (0x0001cc63) main_cset_slider_pane_t14_ParamLimits

0xd4a8,	// (0x0001cc63) main_cset_slider_pane_t14

0xd4e1,	// (0x0001cc9c) main_cset_slider_pane_t15_ParamLimits

0xd4e1,	// (0x0001cc9c) main_cset_slider_pane_t15

0x686b,	// (0x00016026) aid_cam4_burst_size_cell_ParamLimits

0x686b,	// (0x00016026) aid_cam4_burst_size_cell

0x688b,	// (0x00016046) grid_cam4_burst_pane_ParamLimits

0x688b,	// (0x00016046) grid_cam4_burst_pane

0x68c5,	// (0x00016080) linegrid_cam4_burst_pane_ParamLimits

0x68c5,	// (0x00016080) linegrid_cam4_burst_pane

0xd6c1,	// (0x0001ce7c) scroll_pane_cp30_ParamLimits

0xd6c1,	// (0x0001ce7c) scroll_pane_cp30

0x68e7,	// (0x000160a2) cell_cam4_burst_pane_ParamLimits

0x68e7,	// (0x000160a2) cell_cam4_burst_pane

0xd6cd,	// (0x0001ce88) linegrid_cam4_burst_pane_g1_ParamLimits

0xd6cd,	// (0x0001ce88) linegrid_cam4_burst_pane_g1

0x693c,	// (0x000160f7) linegrid_cam4_burst_pane_g2_ParamLimits

0x693c,	// (0x000160f7) linegrid_cam4_burst_pane_g2

0xd6da,	// (0x0001ce95) linegrid_cam4_burst_pane_g3_ParamLimits

0xd6da,	// (0x0001ce95) linegrid_cam4_burst_pane_g3

0x0002,

0xfa41,	// (0x0001f1fc) linegrid_cam4_burst_pane_g_ParamLimits

0xfa41,	// (0x0001f1fc) linegrid_cam4_burst_pane_g

0x694d,	// (0x00016108) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x694d,	// (0x00016108) linegrid_cam4_burst_pane_g3_copy1

0xd6e7,	// (0x0001cea2) linegrid_cam4_burst_pane_g4_ParamLimits

0xd6e7,	// (0x0001cea2) linegrid_cam4_burst_pane_g4

0x696b,	// (0x00016126) linegrid_cam4_burst_pane_g5_ParamLimits

0x696b,	// (0x00016126) linegrid_cam4_burst_pane_g5

0x697c,	// (0x00016137) linegrid_cam4_burst_pane_g6_ParamLimits

0x697c,	// (0x00016137) linegrid_cam4_burst_pane_g6

0xd6f4,	// (0x0001ceaf) linegrid_cam4_burst_pane_g7_ParamLimits

0xd6f4,	// (0x0001ceaf) linegrid_cam4_burst_pane_g7

0x6993,	// (0x0001614e) cell_cam4_burst_pane_g1

0xd70d,	// (0x0001cec8) main_cam5_pane_t1_ParamLimits

0xd70d,	// (0x0001cec8) main_cam5_pane_t1

0xd71f,	// (0x0001ceda) main_cam5_pane_t2_ParamLimits

0xd71f,	// (0x0001ceda) main_cam5_pane_t2

0xd731,	// (0x0001ceec) main_cam5_pane_t3_ParamLimits

0xd731,	// (0x0001ceec) main_cam5_pane_t3

0xd743,	// (0x0001cefe) main_cam5_pane_t4_ParamLimits

0xd743,	// (0x0001cefe) main_cam5_pane_t4

0xd75b,	// (0x0001cf16) main_cam5_pane_t5_ParamLimits

0xd75b,	// (0x0001cf16) main_cam5_pane_t5

0xd76f,	// (0x0001cf2a) main_cam5_pane_t6_ParamLimits

0xd76f,	// (0x0001cf2a) main_cam5_pane_t6

0xd783,	// (0x0001cf3e) main_cam5_pane_t7_ParamLimits

0xd783,	// (0x0001cf3e) main_cam5_pane_t7

0xd795,	// (0x0001cf50) main_cam5_pane_t8_ParamLimits

0xd795,	// (0x0001cf50) main_cam5_pane_t8

0xd7b3,	// (0x0001cf6e) main_cam5_pane_t9_ParamLimits

0xd7b3,	// (0x0001cf6e) main_cam5_pane_t9

0xd7c5,	// (0x0001cf80) main_cam5_pane_t10_ParamLimits

0xd7c5,	// (0x0001cf80) main_cam5_pane_t10

0xd7d7,	// (0x0001cf92) main_cam5_pane_t11_ParamLimits

0xd7d7,	// (0x0001cf92) main_cam5_pane_t11

0xd7eb,	// (0x0001cfa6) main_cam5_pane_t12_ParamLimits

0xd7eb,	// (0x0001cfa6) main_cam5_pane_t12

0xd802,	// (0x0001cfbd) main_cam5_pane_t13_ParamLimits

0xd802,	// (0x0001cfbd) main_cam5_pane_t13

0x000c,

0xfa4d,	// (0x0001f208) main_cam5_pane_t_ParamLimits

0xfa4d,	// (0x0001f208) main_cam5_pane_t

0xfe0d,	// (0x0000f5c8) popup_scut_keymap_window_ParamLimits

0xfe0d,	// (0x0000f5c8) popup_scut_keymap_window

0x69a6,	// (0x00016161) aid_size_cell_brow_shortcut

0xa071,	// (0x0001982c) bg_popup_window_pane_cp010

0x69b2,	// (0x0001616d) grid_scut_pane

0x69be,	// (0x00016179) cell_scut_pane_ParamLimits

0x69be,	// (0x00016179) cell_scut_pane

0x69d7,	// (0x00016192) cell_scut_pane_g1

0xd825,	// (0x0001cfe0) cell_scut_pane_t1

0xd834,	// (0x0001cfef) cell_scut_pane_t2

0x69e0,	// (0x0001619b) cell_scut_pane_t3

0x0002,

0xfa68,	// (0x0001f223) cell_scut_pane_t

0x449c,	// (0x00013c57) main_mup3_pane_g8_ParamLimits

0x449c,	// (0x00013c57) main_mup3_pane_g8

0x5a05,	// (0x000151c0) area_vitu2_query_pane_ParamLimits

0x5a05,	// (0x000151c0) area_vitu2_query_pane

0x6713,	// (0x00015ece) input_focus_pane_cp08

0xd843,	// (0x0001cffe) area_vitu2_query_pane_g1

0x69ee,	// (0x000161a9) area_vitu2_query_pane_g2

0x0001,

0xfa6f,	// (0x0001f22a) area_vitu2_query_pane_g

0x69ff,	// (0x000161ba) area_vitu2_query_pane_t1_ParamLimits

0x69ff,	// (0x000161ba) area_vitu2_query_pane_t1

0x6a13,	// (0x000161ce) area_vitu2_query_pane_t2_ParamLimits

0x6a13,	// (0x000161ce) area_vitu2_query_pane_t2

0x6a27,	// (0x000161e2) area_vitu2_query_pane_t3_ParamLimits

0x6a27,	// (0x000161e2) area_vitu2_query_pane_t3

0xd84f,	// (0x0001d00a) area_vitu2_query_pane_t4_ParamLimits

0xd84f,	// (0x0001d00a) area_vitu2_query_pane_t4

0xd877,	// (0x0001d032) area_vitu2_query_pane_t5_ParamLimits

0xd877,	// (0x0001d032) area_vitu2_query_pane_t5

0xd89f,	// (0x0001d05a) area_vitu2_query_pane_t6_ParamLimits

0xd89f,	// (0x0001d05a) area_vitu2_query_pane_t6

0x0006,

0xfa74,	// (0x0001f22f) area_vitu2_query_pane_t_ParamLimits

0xfa74,	// (0x0001f22f) area_vitu2_query_pane_t

0x6a4f,	// (0x0001620a) bg_button_pane_cp018

0x6a5d,	// (0x00016218) bg_button_pane_cp021

0x6a69,	// (0x00016224) bg_button_pane_cp022

0x6a7a,	// (0x00016235) input_focus_pane_cp09

0xa9b3,	// (0x0001a16e) aid_size_touch_mv_arrow_left

0xa9de,	// (0x0001a199) aid_size_touch_mv_arrow_right

0x6177,	// (0x00015932) main_cset_slider_pane_g16_ParamLimits

0x6177,	// (0x00015932) main_cset_slider_pane_g16

0x6185,	// (0x00015940) main_cset_slider_pane_g17_ParamLimits

0x6185,	// (0x00015940) main_cset_slider_pane_g17

0x6993,	// (0x0001614e) cell_cam4_burst_pane_g1_ParamLimits

0x9647,	// (0x00018e02) compa_mode_pane

0x63ba,	// (0x00015b75) popup_vtel_slider_window_g3_ParamLimits

0x63ba,	// (0x00015b75) popup_vtel_slider_window_g3

0x63d1,	// (0x00015b8c) popup_vtel_slider_window_g4_ParamLimits

0x63d1,	// (0x00015b8c) popup_vtel_slider_window_g4

0x63e8,	// (0x00015ba3) popup_vtel_slider_window_t1_ParamLimits

0x63e8,	// (0x00015ba3) popup_vtel_slider_window_t1

0x9647,	// (0x00018e02) main_cl_pane

0xc055,	// (0x0001b810) popup_imed_adjust2_window_ParamLimits

0xc029,	// (0x0001b7e4) bg_tb_trans_pane_cp05_ParamLimits

0xca6f,	// (0x0001c22a) popup_imed_adjust2_window_g1_ParamLimits

0xca7e,	// (0x0001c239) popup_imed_adjust2_window_g2_ParamLimits

0xca7e,	// (0x0001c239) popup_imed_adjust2_window_g2

0xca8a,	// (0x0001c245) popup_imed_adjust2_window_g3_ParamLimits

0xca8a,	// (0x0001c245) popup_imed_adjust2_window_g3

0x0002,

0xf7db,	// (0x0001ef96) popup_imed_adjust2_window_g_ParamLimits

0xf7db,	// (0x0001ef96) popup_imed_adjust2_window_g

0xca96,	// (0x0001c251) popup_imed_adjust2_window_t1_ParamLimits

0xcaae,	// (0x0001c269) slider_imed_adjust_pane_ParamLimits

0xcac2,	// (0x0001c27d) slider_imed_adjust_pane_g1_ParamLimits

0xcad2,	// (0x0001c28d) slider_imed_adjust_pane_g2_ParamLimits

0xcae2,	// (0x0001c29d) slider_imed_adjust_pane_g3_ParamLimits

0xcaf3,	// (0x0001c2ae) slider_imed_adjust_pane_g4_ParamLimits

0xf7e2,	// (0x0001ef9d) slider_imed_adjust_pane_g_ParamLimits

0x5784,	// (0x00014f3f) aid_touch_area_cam4_ParamLimits

0x5784,	// (0x00014f3f) aid_touch_area_cam4

0xd1b6,	// (0x0001c971) battery_pane_cp01

0x5857,	// (0x00015012) main_camera4_pane_g6_ParamLimits

0x5857,	// (0x00015012) main_camera4_pane_g6

0x5881,	// (0x0001503c) main_camera4_pane_t2_ParamLimits

0x5881,	// (0x0001503c) main_camera4_pane_t2

0x0001,

0xf8e9,	// (0x0001f0a4) main_camera4_pane_t_ParamLimits

0xf8e9,	// (0x0001f0a4) main_camera4_pane_t

0x58b6,	// (0x00015071) aid_touch_area_vid4_ParamLimits

0x58b6,	// (0x00015071) aid_touch_area_vid4

0x590a,	// (0x000150c5) main_video4_pane_g5_ParamLimits

0x590a,	// (0x000150c5) main_video4_pane_g5

0x592f,	// (0x000150ea) vid4_progress_pane_ParamLimits

0x592f,	// (0x000150ea) vid4_progress_pane

0xd46e,	// (0x0001cc29) main_cset_slider_pane_g18_ParamLimits

0xd46e,	// (0x0001cc29) main_cset_slider_pane_g18

0xd701,	// (0x0001cebc) cell_cam4_burst_pane_g2_ParamLimits

0xd701,	// (0x0001cebc) cell_cam4_burst_pane_g2

0x0001,

0xfa48,	// (0x0001f203) cell_cam4_burst_pane_g_ParamLimits

0xfa48,	// (0x0001f203) cell_cam4_burst_pane_g

0x9e54,	// (0x0001960f) bg_cl_pane_ParamLimits

0x9e54,	// (0x0001960f) bg_cl_pane

0x6a8b,	// (0x00016246) cl_header_pane_ParamLimits

0x6a8b,	// (0x00016246) cl_header_pane

0x6a9f,	// (0x0001625a) cl_listscroll_pane_ParamLimits

0x6a9f,	// (0x0001625a) cl_listscroll_pane

0xd8eb,	// (0x0001d0a6) bg_cl_pane_g1

0xd8f3,	// (0x0001d0ae) bg_cl_pane_g2

0xd8fb,	// (0x0001d0b6) bg_cl_pane_g3

0xd903,	// (0x0001d0be) bg_cl_pane_g4

0xd90b,	// (0x0001d0c6) bg_cl_pane_g5

0xd913,	// (0x0001d0ce) bg_cl_pane_g6

0xd91b,	// (0x0001d0d6) bg_cl_pane_g7

0xd923,	// (0x0001d0de) bg_cl_pane_g8

0xd92b,	// (0x0001d0e6) bg_cl_pane_g9

0x0008,

0xfa83,	// (0x0001f23e) bg_cl_pane_g

0x6aaf,	// (0x0001626a) aid_height_cl_leading_ParamLimits

0x6aaf,	// (0x0001626a) aid_height_cl_leading

0x6abb,	// (0x00016276) aid_height_cl_text_ParamLimits

0x6abb,	// (0x00016276) aid_height_cl_text

0x96bc,	// (0x00018e77) bg_cl_header_pane_ParamLimits

0x96bc,	// (0x00018e77) bg_cl_header_pane

0x6ada,	// (0x00016295) cl_header_pane_g1_ParamLimits

0x6ada,	// (0x00016295) cl_header_pane_g1

0x6af0,	// (0x000162ab) cl_header_pane_t1_ParamLimits

0x6af0,	// (0x000162ab) cl_header_pane_t1

0xd933,	// (0x0001d0ee) cl_list_pane

0xd441,	// (0x0001cbfc) hc_scroll_pane_cp01

0xa2cd,	// (0x00019a88) bg_cl_header_pane_g1

0xd323,	// (0x0001cade) bg_cl_header_pane_g2

0xa2ed,	// (0x00019aa8) bg_cl_header_pane_g3

0xd333,	// (0x0001caee) bg_cl_header_pane_g4

0xd32b,	// (0x0001cae6) bg_cl_header_pane_g5

0xd58d,	// (0x0001cd48) bg_cl_header_pane_g6

0xd34b,	// (0x0001cb06) bg_cl_header_pane_g7

0xd353,	// (0x0001cb0e) bg_cl_header_pane_g8

0xd343,	// (0x0001cafe) bg_cl_header_pane_g9

0x0008,

0xfa96,	// (0x0001f251) bg_cl_header_pane_g

0x6b09,	// (0x000162c4) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x6b09,	// (0x000162c4) hc_cl_list_double_graphic_heading_pane

0x6b1c,	// (0x000162d7) hc_cl_list_single_graphic_pane_ParamLimits

0x6b1c,	// (0x000162d7) hc_cl_list_single_graphic_pane

0x6b34,	// (0x000162ef) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x6b34,	// (0x000162ef) hc_cl_list_single_graphic_pane_g1

0x6b40,	// (0x000162fb) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x6b40,	// (0x000162fb) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaa9,	// (0x0001f264) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaa9,	// (0x0001f264) hc_cl_list_single_graphic_pane_g

0x6b54,	// (0x0001630f) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x6b54,	// (0x0001630f) hc_cl_list_single_graphic_pane_t1

0x6b34,	// (0x000162ef) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x6b34,	// (0x000162ef) hc_cl_list_double_graphic_heading_pane_g1

0x6b69,	// (0x00016324) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x6b69,	// (0x00016324) hc_cl_list_double_graphic_heading_pane_g2

0x6b7d,	// (0x00016338) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x6b7d,	// (0x00016338) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfaae,	// (0x0001f269) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfaae,	// (0x0001f269) hc_cl_list_double_graphic_heading_pane_g

0x6b91,	// (0x0001634c) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x6b91,	// (0x0001634c) hc_cl_list_double_graphic_heading_pane_t1

0x6ba6,	// (0x00016361) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x6ba6,	// (0x00016361) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfab5,	// (0x0001f270) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfab5,	// (0x0001f270) hc_cl_list_double_graphic_heading_pane_t

0xd944,	// (0x0001d0ff) vid4_progress_pane_g1

0xd954,	// (0x0001d10f) vid4_progress_pane_g2

0x6bbb,	// (0x00016376) vid4_progress_pane_g3

0xd1ed,	// (0x0001c9a8) vid4_progress_pane_g4

0x0004,

0xfaba,	// (0x0001f275) vid4_progress_pane_g

0x6bcd,	// (0x00016388) vid4_progress_pane_t1

0xd964,	// (0x0001d11f) vid4_progress_pane_t2

0x0002,

0xfac5,	// (0x0001f280) vid4_progress_pane_t

0x6be5,	// (0x000163a0) wait_bar_pane_cp07

0xc360,	// (0x0001bb1b) blid_firmament_pane_ParamLimits

0xc3a3,	// (0x0001bb5e) popup_blid_sat_info2_window_g1

0xc3c7,	// (0x0001bb82) popup_blid_sat_info2_window_t3

0xc3d5,	// (0x0001bb90) popup_blid_sat_info2_window_t4

0xc3e3,	// (0x0001bb9e) popup_blid_sat_info2_window_t5

0xc3f1,	// (0x0001bbac) popup_blid_sat_info2_window_t6

0xc401,	// (0x0001bbbc) popup_blid_sat_info2_window_t7

0xc40f,	// (0x0001bbca) popup_blid_sat_info2_window_t8

0xc41d,	// (0x0001bbd8) popup_blid_sat_info2_window_t9

0xc42b,	// (0x0001bbe6) popup_blid_sat_info2_window_t10

0xc4f3,	// (0x0001bcae) aid_firma_cardinal_ParamLimits

0xc507,	// (0x0001bcc2) blid_firmament_pane_t1_ParamLimits

0xc51e,	// (0x0001bcd9) blid_firmament_pane_t2_ParamLimits

0xc535,	// (0x0001bcf0) blid_firmament_pane_t3_ParamLimits

0xc54c,	// (0x0001bd07) blid_firmament_pane_t4_ParamLimits

0xf6cf,	// (0x0001ee8a) blid_firmament_pane_t_ParamLimits

0xc563,	// (0x0001bd1e) blid_sat_info_pane_ParamLimits

0x96bc,	// (0x00018e77) main_cam_set_pane_ParamLimits

0x4d74,	// (0x0001452f) aid_size_cell_colour_35_ParamLimits

0x4d94,	// (0x0001454f) aid_size_cell_colour_112_ParamLimits

0x4db4,	// (0x0001456f) aid_size_cell_effect_ParamLimits

0xc029,	// (0x0001b7e4) bg_tb_trans_pane_cp02_ParamLimits

0xa563,	// (0x00019d1e) heading_imed_pane_ParamLimits

0x4dd4,	// (0x0001458f) listscroll_imed_pane_ParamLimits

0xb651,	// (0x0001ae0c) popup_call2_audio_first_window_g5_ParamLimits

0xb651,	// (0x0001ae0c) popup_call2_audio_first_window_g5

0x5391,	// (0x00014b4c) aid_size_touch_image3_arrow_left_ParamLimits

0x5391,	// (0x00014b4c) aid_size_touch_image3_arrow_left

0x53bd,	// (0x00014b78) aid_size_touch_image3_arrow_right_ParamLimits

0x53bd,	// (0x00014b78) aid_size_touch_image3_arrow_right

0xd979,	// (0x0001d134) vid4_progress_pane_t3

0x50ed,	// (0x000148a8) main_hwr_training_symbol_option_pane_ParamLimits

0x50ed,	// (0x000148a8) main_hwr_training_symbol_option_pane

0xcd68,	// (0x0001c523) popup_hwr_training_preview_window_ParamLimits

0xcd68,	// (0x0001c523) popup_hwr_training_preview_window

0x510d,	// (0x000148c8) hwr_training_navi_pane_g5_ParamLimits

0x510d,	// (0x000148c8) hwr_training_navi_pane_g5

0xd2ff,	// (0x0001caba) popup_char_count_window

0x96bc,	// (0x00018e77) bg_popup_sub_pane_cp20_ParamLimits

0x650e,	// (0x00015cc9) list_vitu2_match_list_pane_ParamLimits

0x651d,	// (0x00015cd8) vitu2_page_scroll_pane_ParamLimits

0x651d,	// (0x00015cd8) vitu2_page_scroll_pane

0xd9b0,	// (0x0001d16b) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd9b0,	// (0x0001d16b) list_single_hwr_training_symbol_option_pane

0xd9c3,	// (0x0001d17e) list_single_hwr_training_symbol_option_pane_g1

0xd9cb,	// (0x0001d186) list_single_hwr_training_symbol_option_pane_t1

0xd9d9,	// (0x0001d194) bg_button_pane_cp023

0xd9e2,	// (0x0001d19d) bg_button_pane_cp024

0x6c30,	// (0x000163eb) vitu2_page_scroll_pane_g1

0x6c38,	// (0x000163f3) vitu2_page_scroll_pane_g2

0x0001,

0xfacc,	// (0x0001f287) vitu2_page_scroll_pane_g

0x6c42,	// (0x000163fd) vitu2_page_scroll_pane_t1

0xd5d0,	// (0x0001cd8b) popup_char_count_window_g1

0xda15,	// (0x0001d1d0) popup_char_count_window_g2

0xd5d9,	// (0x0001cd94) popup_char_count_window_g3

0x0002,

0xfad1,	// (0x0001f28c) popup_char_count_window_g

0xda1e,	// (0x0001d1d9) popup_char_count_window_t1

0x9647,	// (0x00018e02) main_vded2_pane

0xca5b,	// (0x0001c216) aid_size_cell_imed_line

0xca65,	// (0x0001c220) grid_imed_line_width_pane

0xd270,	// (0x0001ca2b) vid4_indicators_pane_g4

0xda2c,	// (0x0001d1e7) cell_imed_line_width_pane_ParamLimits

0xda2c,	// (0x0001d1e7) cell_imed_line_width_pane

0xda42,	// (0x0001d1fd) cell_imed_line_width_pane_g1

0xda4b,	// (0x0001d206) cell_imed_line_width_pane_g2

0x0001,

0xfad8,	// (0x0001f293) cell_imed_line_width_pane_g

0x6c51,	// (0x0001640c) main_vded2_pane_g1_ParamLimits

0x6c51,	// (0x0001640c) main_vded2_pane_g1

0x6c6c,	// (0x00016427) main_vded2_pane_g2_ParamLimits

0x6c6c,	// (0x00016427) main_vded2_pane_g2

0x0001,

0xfadd,	// (0x0001f298) main_vded2_pane_g_ParamLimits

0xfadd,	// (0x0001f298) main_vded2_pane_g

0x6c7e,	// (0x00016439) vded2_slider_pane_ParamLimits

0x6c7e,	// (0x00016439) vded2_slider_pane

0x6c8e,	// (0x00016449) aid_size_touch_vded2_end

0x6c98,	// (0x00016453) aid_size_touch_vded2_playhead

0xda53,	// (0x0001d20e) aid_size_touch_vded2_start

0xda5b,	// (0x0001d216) vded2_slider_bg_pane

0xda64,	// (0x0001d21f) vded2_slider_pane_g1

0xda6d,	// (0x0001d228) vded2_slider_pane_g2

0x6ca2,	// (0x0001645d) vded2_slider_pane_g3

0x0002,

0xfae2,	// (0x0001f29d) vded2_slider_pane_g

0xd5e2,	// (0x0001cd9d) vded2_slider_bg_pane_g1

0xd5eb,	// (0x0001cda6) vded2_slider_bg_pane_g2

0xd5f4,	// (0x0001cdaf) vded2_slider_bg_pane_g3

0x0002,

0xfae9,	// (0x0001f2a4) vded2_slider_bg_pane_g

0x298e,	// (0x00012149) aid_postcard_touch_down_pane_ParamLimits

0x298e,	// (0x00012149) aid_postcard_touch_down_pane

0x29a6,	// (0x00012161) aid_postcard_touch_up_pane_ParamLimits

0x29a6,	// (0x00012161) aid_postcard_touch_up_pane

0x9647,	// (0x00018e02) main_blid2_pane

0xc037,	// (0x0001b7f2) popup_blid2_search_window

0x9647,	// (0x00018e02) blid2_gps_pane

0x9647,	// (0x00018e02) blid2_navig_pane

0x9647,	// (0x00018e02) blid2_search_pane

0x9647,	// (0x00018e02) blid2_tripm_pane

0x6cad,	// (0x00016468) blid2_search_pane_g1_ParamLimits

0x6cad,	// (0x00016468) blid2_search_pane_g1

0x6cc0,	// (0x0001647b) blid2_search_pane_t1_ParamLimits

0x6cc0,	// (0x0001647b) blid2_search_pane_t1

0x6cd2,	// (0x0001648d) aid_size_cell_blid2_gps_ParamLimits

0x6cd2,	// (0x0001648d) aid_size_cell_blid2_gps

0x6cea,	// (0x000164a5) blid2_gps_pane_g1_ParamLimits

0x6cea,	// (0x000164a5) blid2_gps_pane_g1

0x6cfe,	// (0x000164b9) grid_blid2_satellite_pane_ParamLimits

0x6cfe,	// (0x000164b9) grid_blid2_satellite_pane

0x6d16,	// (0x000164d1) blid2_navig_pane_g1_ParamLimits

0x6d16,	// (0x000164d1) blid2_navig_pane_g1

0x6d22,	// (0x000164dd) blid2_navig_pane_t1_ParamLimits

0x6d22,	// (0x000164dd) blid2_navig_pane_t1

0x6d3d,	// (0x000164f8) blid2_navig_pane_t2_ParamLimits

0x6d3d,	// (0x000164f8) blid2_navig_pane_t2

0x0001,

0xfaf0,	// (0x0001f2ab) blid2_navig_pane_t_ParamLimits

0xfaf0,	// (0x0001f2ab) blid2_navig_pane_t

0x6d58,	// (0x00016513) blid2_navig_ring_pane_ParamLimits

0x6d58,	// (0x00016513) blid2_navig_ring_pane

0x6d73,	// (0x0001652e) blid2_speed_pane_ParamLimits

0x6d73,	// (0x0001652e) blid2_speed_pane

0x6d7f,	// (0x0001653a) blid2_tripm_pane_g1_ParamLimits

0x6d7f,	// (0x0001653a) blid2_tripm_pane_g1

0x6d9a,	// (0x00016555) blid2_tripm_pane_g2_ParamLimits

0x6d9a,	// (0x00016555) blid2_tripm_pane_g2

0x6dae,	// (0x00016569) blid2_tripm_pane_g3_ParamLimits

0x6dae,	// (0x00016569) blid2_tripm_pane_g3

0x6dc2,	// (0x0001657d) blid2_tripm_pane_g4_ParamLimits

0x6dc2,	// (0x0001657d) blid2_tripm_pane_g4

0x6dd6,	// (0x00016591) blid2_tripm_pane_g5_ParamLimits

0x6dd6,	// (0x00016591) blid2_tripm_pane_g5

0x0005,

0xfaf5,	// (0x0001f2b0) blid2_tripm_pane_g_ParamLimits

0xfaf5,	// (0x0001f2b0) blid2_tripm_pane_g

0x6dfc,	// (0x000165b7) blid2_tripm_pane_t1_ParamLimits

0x6dfc,	// (0x000165b7) blid2_tripm_pane_t1

0x6e15,	// (0x000165d0) blid2_tripm_pane_t2_ParamLimits

0x6e15,	// (0x000165d0) blid2_tripm_pane_t2

0x6e2e,	// (0x000165e9) blid2_tripm_pane_t3_ParamLimits

0x6e2e,	// (0x000165e9) blid2_tripm_pane_t3

0x0003,

0xfb02,	// (0x0001f2bd) blid2_tripm_pane_t_ParamLimits

0xfb02,	// (0x0001f2bd) blid2_tripm_pane_t

0x6e75,	// (0x00016630) cell_blid2_satellite_pane_ParamLimits

0x6e75,	// (0x00016630) cell_blid2_satellite_pane

0x6e91,	// (0x0001664c) cell_blid2_satellite_pane_g1

0xda75,	// (0x0001d230) cell_blid2_satellite_pane_t1

0xc573,	// (0x0001bd2e) blid2_speed_pane_g1

0xda83,	// (0x0001d23e) blid2_speed_pane_t1

0xda91,	// (0x0001d24c) blid2_speed_pane_t2

0x0001,

0xfb0b,	// (0x0001f2c6) blid2_speed_pane_t

0xc573,	// (0x0001bd2e) blid2_navig_ring_pane_g1

0x6e9a,	// (0x00016655) blid2_navig_ring_pane_g2

0x6ea2,	// (0x0001665d) blid2_navig_ring_pane_g3

0x6eaa,	// (0x00016665) blid2_navig_ring_pane_g4

0x6eb2,	// (0x0001666d) blid2_navig_ring_pane_g5

0x0004,

0xfb10,	// (0x0001f2cb) blid2_navig_ring_pane_g

0x9647,	// (0x00018e02) bg_popup_window_pane_cp011

0xda9f,	// (0x0001d25a) popup_blid2_search_window_g1

0xdaa7,	// (0x0001d262) popup_blid2_search_window_t1

0xdab5,	// (0x0001d270) popup_blid2_search_window_t2

0x0001,

0xfb1b,	// (0x0001f2d6) popup_blid2_search_window_t

0xa1dc,	// (0x00019997) main_browser_pane_g1

0x9e54,	// (0x0001960f) main_browser_pane_ParamLimits

0x96bc,	// (0x00018e77) bg_button_pane_cp011_ParamLimits

0x5d39,	// (0x000154f4) cell_vitu2_function_pane_g1_ParamLimits

0xc029,	// (0x0001b7e4) bg_popup_sub_pane_cp22_ParamLimits

0x6713,	// (0x00015ece) input_focus_pane_cp08_ParamLimits

0x672a,	// (0x00015ee5) popup_vitu2_query_button_pane_ParamLimits

0x672a,	// (0x00015ee5) popup_vitu2_query_button_pane

0x673b,	// (0x00015ef6) popup_vitu2_query_input_button_pane

0xd64b,	// (0x0001ce06) popup_vitu2_query_window_g1_ParamLimits

0x6745,	// (0x00015f00) popup_vitu2_query_window_g2_ParamLimits

0xfa1c,	// (0x0001f1d7) popup_vitu2_query_window_g_ParamLimits

0x9647,	// (0x00018e02) bg_button_pane_cp026

0x6eba,	// (0x00016675) popup_vitu2_query_input_button_pane_g1

0x9647,	// (0x00018e02) bg_button_pane_cp025

0xdac3,	// (0x0001d27e) popup_vitu2_query_button_pane_t1

0x408c,	// (0x00013847) main_mp3_pane_t6

0x409a,	// (0x00013855) popup_slider_window_cp01

0xd1d4,	// (0x0001c98f) cam4_battery_pane

0xd229,	// (0x0001c9e4) cam4_battery_pane_cp02

0xd93c,	// (0x0001d0f7) cam4_battery_pane_cp01

0xd93c,	// (0x0001d0f7) cam4_battery_pane_cp03

0xc573,	// (0x0001bd2e) cam4_battery_pane_g1

0xdad1,	// (0x0001d28c) cam4_battery_pane_g2

0x0001,

0xfb20,	// (0x0001f2db) cam4_battery_pane_g

0xc439,	// (0x0001bbf4) popup_blid_sat_info2_window_t11

0xa9b3,	// (0x0001a16e) aid_size_touch_mv_arrow_left_ParamLimits

0xa9de,	// (0x0001a199) aid_size_touch_mv_arrow_right_ParamLimits

0xaa3c,	// (0x0001a1f7) navi_pane_g1_ParamLimits

0xaa48,	// (0x0001a203) navi_pane_g2_ParamLimits

0xaa76,	// (0x0001a231) navi_pane_g3_ParamLimits

0xf3e1,	// (0x0001eb9c) navi_pane_g_ParamLimits

0x238e,	// (0x00011b49) navi_pane_mv_t1_ParamLimits

0x4de0,	// (0x0001459b) grid_imed_effect_pane_ParamLimits

0x0e22,	// (0x000105dd) aid_placing_vt_slider_lsc

0xa127,	// (0x000198e2) aid_placing_vt_slider_prt

0x96bc,	// (0x00018e77) bg_tb_trans_pane_cp01_ParamLimits

0xc6ba,	// (0x0001be75) popup_image_details_window_g1_ParamLimits

0xc6cd,	// (0x0001be88) popup_image_details_window_g2_ParamLimits

0xc6e2,	// (0x0001be9d) popup_image_details_window_g3_ParamLimits

0xc6e2,	// (0x0001be9d) popup_image_details_window_g3

0xf714,	// (0x0001eecf) popup_image_details_window_g_ParamLimits

0xc6f6,	// (0x0001beb1) popup_image_details_window_t1_ParamLimits

0xc708,	// (0x0001bec3) popup_image_details_window_t2_ParamLimits

0xc721,	// (0x0001bedc) popup_image_details_window_t3_ParamLimits

0xc735,	// (0x0001bef0) popup_image_details_window_t4_ParamLimits

0xc750,	// (0x0001bf0b) popup_image_details_window_t5_ParamLimits

0xf71b,	// (0x0001eed6) popup_image_details_window_t_ParamLimits

0x6ac7,	// (0x00016282) cl_header_name_pane_ParamLimits

0x6ac7,	// (0x00016282) cl_header_name_pane

0x6ec2,	// (0x0001667d) cl_header_name_pane_t1_ParamLimits

0x6ec2,	// (0x0001667d) cl_header_name_pane_t1

0x6ee3,	// (0x0001669e) cl_header_name_pane_t2_ParamLimits

0x6ee3,	// (0x0001669e) cl_header_name_pane_t2

0x6f25,	// (0x000166e0) cl_header_name_pane_t3_ParamLimits

0x6f25,	// (0x000166e0) cl_header_name_pane_t3

0x0002,

0xfb25,	// (0x0001f2e0) cl_header_name_pane_t_ParamLimits

0xfb25,	// (0x0001f2e0) cl_header_name_pane_t

0xab05,	// (0x0001a2c0) navi_pane_mv_g2_ParamLimits

0xd2bc,	// (0x0001ca77) field_vitu2_entry_pane_g1_ParamLimits

0xd2c8,	// (0x0001ca83) field_vitu2_entry_pane_g2_ParamLimits

0xd2d4,	// (0x0001ca8f) field_vitu2_entry_pane_g3_ParamLimits

0xd2d4,	// (0x0001ca8f) field_vitu2_entry_pane_g3

0xf91b,	// (0x0001f0d6) field_vitu2_entry_pane_g_ParamLimits

0xd307,	// (0x0001cac2) cell_vitu2_itu_pane_g1_ParamLimits

0x5be1,	// (0x0001539c) cell_vitu2_itu_pane_g2_ParamLimits

0x5be1,	// (0x0001539c) cell_vitu2_itu_pane_g2

0x0001,

0xf927,	// (0x0001f0e2) cell_vitu2_itu_pane_g_ParamLimits

0xf927,	// (0x0001f0e2) cell_vitu2_itu_pane_g

0x96bc,	// (0x00018e77) bg_vkb2_func_pane_cp05_ParamLimits

0x96bc,	// (0x00018e77) bg_vkb2_func_pane_cp05

0x96bc,	// (0x00018e77) bg_vkb2_func_pane_cp03

0x96bc,	// (0x00018e77) bg_vkb2_func_pane_cp04

0x96bc,	// (0x00018e77) bg_vkb2_func_pane_cp10_ParamLimits

0x96bc,	// (0x00018e77) bg_vkb2_func_pane_cp10

0x6a69,	// (0x00016224) bg_vkb2_func_pane_cp08

0x6a4f,	// (0x0001620a) bg_vkb2_func_pane_cp06

0x6a5d,	// (0x00016218) bg_vkb2_func_pane_cp07

0xd9eb,	// (0x0001d1a6) bg_vkb2_func_pane_cp11_ParamLimits

0xd9eb,	// (0x0001d1a6) bg_vkb2_func_pane_cp11

0xda00,	// (0x0001d1bb) bg_vkb2_func_pane_cp12_ParamLimits

0xda00,	// (0x0001d1bb) bg_vkb2_func_pane_cp12

0x9647,	// (0x00018e02) bg_vkb2_func_pane_cp09

0xd323,	// (0x0001cade) bg_vkb2_func_pane_g1

0xa2ed,	// (0x00019aa8) bg_vkb2_func_pane_g2

0xd32b,	// (0x0001cae6) bg_vkb2_func_pane_g3

0xd333,	// (0x0001caee) bg_vkb2_func_pane_g4

0xd58d,	// (0x0001cd48) bg_vkb2_func_pane_g5

0xd34b,	// (0x0001cb06) bg_vkb2_func_pane_g6

0xd353,	// (0x0001cb0e) bg_vkb2_func_pane_g7

0xd343,	// (0x0001cafe) bg_vkb2_func_pane_g8

0xa2cd,	// (0x00019a88) bg_vkb2_func_pane_g9

0x0008,

0xfb2c,	// (0x0001f2e7) bg_vkb2_func_pane_g

0x6dea,	// (0x000165a5) blid2_tripm_pane_g6_ParamLimits

0x6dea,	// (0x000165a5) blid2_tripm_pane_g6

0xd09b,	// (0x0001c856) mp4_progress_pane_g1

0x6e61,	// (0x0001661c) blid2_tripm_values_pane_ParamLimits

0x6e61,	// (0x0001661c) blid2_tripm_values_pane

0x6f56,	// (0x00016711) blid2_tripm_values_pane_t1

0x6f64,	// (0x0001671f) blid2_tripm_values_pane_t2

0x6f72,	// (0x0001672d) blid2_tripm_values_pane_t3

0x6f80,	// (0x0001673b) blid2_tripm_values_pane_t4

0x6f8e,	// (0x00016749) blid2_tripm_values_pane_t5

0x6f9c,	// (0x00016757) blid2_tripm_values_pane_t6

0x6faa,	// (0x00016765) blid2_tripm_values_pane_t7

0x6fb8,	// (0x00016773) blid2_tripm_values_pane_t8

0x6fc6,	// (0x00016781) blid2_tripm_values_pane_t9

0x0008,

0xfb3f,	// (0x0001f2fa) blid2_tripm_values_pane_t

0x0e5f,	// (0x0001061a) call_video_pane_t1_ParamLimits

0x0e79,	// (0x00010634) call_video_pane_t2_ParamLimits

0xf26a,	// (0x0001ea25) call_video_pane_t_ParamLimits

0x28db,	// (0x00012096) msg_header_pane_g1_ParamLimits

0xad0b,	// (0x0001a4c6) msg_header_pane_g2_ParamLimits

0xad0b,	// (0x0001a4c6) msg_header_pane_g2

0x0001,

0xf484,	// (0x0001ec3f) msg_header_pane_g_ParamLimits

0xf484,	// (0x0001ec3f) msg_header_pane_g

0x9e54,	// (0x0001960f) main_clock2_pane_ParamLimits

0x4add,	// (0x00014298) grid_clock2_toolbar_pane_ParamLimits

0x4add,	// (0x00014298) grid_clock2_toolbar_pane

0x4add,	// (0x00014298) listscroll_clock2_pane_ParamLimits

0x4add,	// (0x00014298) listscroll_clock2_pane

0x4bbc,	// (0x00014377) main_clock2_pane_t3_ParamLimits

0x4bbc,	// (0x00014377) main_clock2_pane_t3

0x4bdf,	// (0x0001439a) main_clock2_pane_t4_ParamLimits

0x4bdf,	// (0x0001439a) main_clock2_pane_t4

0xdadb,	// (0x0001d296) cell_clock2_toolbar_pane

0xdae3,	// (0x0001d29e) cell_clock2_toolbar_pane_cp01

0xdae3,	// (0x0001d29e) cell_clock2_toolbar_pane_cp02

0xdaeb,	// (0x0001d2a6) cell_clock2_toolbar_pane_cp03

0xdaf3,	// (0x0001d2ae) list_clock2_pane

0xa938,	// (0x0001a0f3) scroll_pane_cp10

0xdafb,	// (0x0001d2b6) list_single_clock2_pane_ParamLimits

0xdafb,	// (0x0001d2b6) list_single_clock2_pane

0xa071,	// (0x0001982c) list_highlight_pane_cp08

0xdb08,	// (0x0001d2c3) list_single_clock2_pane_t1

0xdb16,	// (0x0001d2d1) list_single_clock2_pane_t2

0x0001,

0xfb52,	// (0x0001f30d) list_single_clock2_pane_t

0x9647,	// (0x00018e02) bg_button_pane_cp10

0xdb24,	// (0x0001d2df) cell_clock2_toolbar_pane_g1

0x291a,	// (0x000120d5) aid_main_viewer_pane_g1_ParamLimits

0x291a,	// (0x000120d5) aid_main_viewer_pane_g1

0x2928,	// (0x000120e3) aid_main_viewer_pane_g2_ParamLimits

0x2928,	// (0x000120e3) aid_main_viewer_pane_g2

0x2936,	// (0x000120f1) aid_main_viewer_pane_g3_ParamLimits

0x2936,	// (0x000120f1) aid_main_viewer_pane_g3

0x2945,	// (0x00012100) aid_main_viewer_pane_g4_ParamLimits

0x2945,	// (0x00012100) aid_main_viewer_pane_g4

0x0003,

0xf495,	// (0x0001ec50) aid_main_viewer_pane_g_ParamLimits

0xf495,	// (0x0001ec50) aid_main_viewer_pane_g

0x32a0,	// (0x00012a5b) main_calc_pane_ParamLimits

0x32b4,	// (0x00012a6f) main_dialer2_pane_ParamLimits

0x9647,	// (0x00018e02) main_cam6_pane

0x9647,	// (0x00018e02) main_vid6_pane

0x4ae9,	// (0x000142a4) listscroll_gen_pane_cp06_ParamLimits

0x4ae9,	// (0x000142a4) listscroll_gen_pane_cp06

0x4c02,	// (0x000143bd) main_clock2_pane_t5_ParamLimits

0x4c02,	// (0x000143bd) main_clock2_pane_t5

0x4c60,	// (0x0001441b) aid_call2_pane_cp10_ParamLimits

0x4c72,	// (0x0001442d) aid_call_pane_cp10_ParamLimits

0xa9a7,	// (0x0001a162) popup_clock_analogue_window_cp10_g1_ParamLimits

0xa9a7,	// (0x0001a162) popup_clock_analogue_window_cp10_g2_ParamLimits

0x4c84,	// (0x0001443f) popup_clock_analogue_window_cp10_g3_ParamLimits

0x4c84,	// (0x0001443f) popup_clock_analogue_window_cp10_g4_ParamLimits

0xa9a7,	// (0x0001a162) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7d0,	// (0x0001ef8b) popup_clock_analogue_window_cp10_g_ParamLimits

0x4c9a,	// (0x00014455) popup_clock_analogue_window_cp10_t1_ParamLimits

0x533e,	// (0x00014af9) cell_dialer2_keypad_pane_g2_ParamLimits

0x533e,	// (0x00014af9) cell_dialer2_keypad_pane_g2

0x0001,

0xf8ba,	// (0x0001f075) cell_dialer2_keypad_pane_g_ParamLimits

0xf8ba,	// (0x0001f075) cell_dialer2_keypad_pane_g

0x535a,	// (0x00014b15) cell_dialer2_keypad_pane_t1

0x6068,	// (0x00015823) main_cset_text2_pane_ParamLimits

0x6068,	// (0x00015823) main_cset_text2_pane

0xd843,	// (0x0001cffe) area_vitu2_query_pane_g1_ParamLimits

0x69ee,	// (0x000161a9) area_vitu2_query_pane_g2_ParamLimits

0xfa6f,	// (0x0001f22a) area_vitu2_query_pane_g_ParamLimits

0xd8c7,	// (0x0001d082) area_vitu2_query_pane_t7_ParamLimits

0xd8c7,	// (0x0001d082) area_vitu2_query_pane_t7

0x6a4f,	// (0x0001620a) bg_button_pane_cp018_ParamLimits

0x6a5d,	// (0x00016218) bg_button_pane_cp021_ParamLimits

0x6a69,	// (0x00016224) bg_button_pane_cp022_ParamLimits

0x6a69,	// (0x00016224) bg_vkb2_func_pane_cp08_ParamLimits

0x6a4f,	// (0x0001620a) bg_vkb2_func_pane_cp06_ParamLimits

0x6a5d,	// (0x00016218) bg_vkb2_func_pane_cp07_ParamLimits

0x6a7a,	// (0x00016235) input_focus_pane_cp09_ParamLimits

0xdb2c,	// (0x0001d2e7) cam6_autofocus_pane_ParamLimits

0xdb2c,	// (0x0001d2e7) cam6_autofocus_pane

0x6fd4,	// (0x0001678f) cam6_image_uncrop_pane_ParamLimits

0x6fd4,	// (0x0001678f) cam6_image_uncrop_pane

0x6fe3,	// (0x0001679e) cam6_indi_pane_ParamLimits

0x6fe3,	// (0x0001679e) cam6_indi_pane

0x6ff9,	// (0x000167b4) cam6_mode_pane_ParamLimits

0x6ff9,	// (0x000167b4) cam6_mode_pane

0x700b,	// (0x000167c6) cam6_timer_pane_ParamLimits

0x700b,	// (0x000167c6) cam6_timer_pane

0x7017,	// (0x000167d2) cam6_zoom_pane_ParamLimits

0x7017,	// (0x000167d2) cam6_zoom_pane

0x7025,	// (0x000167e0) cam6_mode_pane_g1_ParamLimits

0x7025,	// (0x000167e0) cam6_mode_pane_g1

0x7035,	// (0x000167f0) cam6_mode_pane_g2_ParamLimits

0x7035,	// (0x000167f0) cam6_mode_pane_g2

0x7045,	// (0x00016800) cam6_mode_pane_g3_ParamLimits

0x7045,	// (0x00016800) cam6_mode_pane_g3

0x7055,	// (0x00016810) cam6_mode_pane_g4_ParamLimits

0x7055,	// (0x00016810) cam6_mode_pane_g4

0x0003,

0xfb57,	// (0x0001f312) cam6_mode_pane_g_ParamLimits

0xfb57,	// (0x0001f312) cam6_mode_pane_g

0xd5fd,	// (0x0001cdb8) bg_tb_trans_pane_cp08_ParamLimits

0xd5fd,	// (0x0001cdb8) bg_tb_trans_pane_cp08

0xdb3a,	// (0x0001d2f5) cam6_battery_pane_ParamLimits

0xdb3a,	// (0x0001d2f5) cam6_battery_pane

0xdb50,	// (0x0001d30b) cam6_indi_pane_g1_ParamLimits

0xdb50,	// (0x0001d30b) cam6_indi_pane_g1

0xdb62,	// (0x0001d31d) cam6_indi_pane_g2_ParamLimits

0xdb62,	// (0x0001d31d) cam6_indi_pane_g2

0xdb74,	// (0x0001d32f) cam6_indi_pane_g3_ParamLimits

0xdb74,	// (0x0001d32f) cam6_indi_pane_g3

0x0002,

0xfb60,	// (0x0001f31b) cam6_indi_pane_g_ParamLimits

0xfb60,	// (0x0001f31b) cam6_indi_pane_g

0xdb86,	// (0x0001d341) cam6_indi_pane_t1_ParamLimits

0xdb86,	// (0x0001d341) cam6_indi_pane_t1

0x5977,	// (0x00015132) cam6_autofocus_pane_g1

0x597f,	// (0x0001513a) cam6_autofocus_pane_g2

0x5987,	// (0x00015142) cam6_autofocus_pane_g3

0x598f,	// (0x0001514a) cam6_autofocus_pane_g4

0x0003,

0xfb67,	// (0x0001f322) cam6_autofocus_pane_g

0xdbac,	// (0x0001d367) cam6_timer_pane_g1

0xdbb4,	// (0x0001d36f) cam6_timer_pane_t1

0xdbc2,	// (0x0001d37d) cam6_zoom_cont_pane

0xdbca,	// (0x0001d385) cam6_zoom_pane_g1

0xdbd2,	// (0x0001d38d) cam6_zoom_pane_g2

0x7065,	// (0x00016820) cam6_zoom_pane_g3

0x0002,

0xfb70,	// (0x0001f32b) cam6_zoom_pane_g

0xc573,	// (0x0001bd2e) cam6_battery_pane_g1

0xc573,	// (0x0001bd2e) cam6_battery_pane_g2

0x0001,

0xf6d8,	// (0x0001ee93) cam6_battery_pane_g

0xdbda,	// (0x0001d395) cam6_zoom_cont_pane_g1

0xdbe3,	// (0x0001d39e) cam6_zoom_cont_pane_g2

0xdbec,	// (0x0001d3a7) cam6_zoom_cont_pane_g3

0x0002,

0xfb77,	// (0x0001f332) cam6_zoom_cont_pane_g

0x7082,	// (0x0001683d) cam6_mode_pane_cp_ParamLimits

0x7082,	// (0x0001683d) cam6_mode_pane_cp

0x7017,	// (0x000167d2) cam6_zoom_pane_cp_ParamLimits

0x7017,	// (0x000167d2) cam6_zoom_pane_cp

0x7094,	// (0x0001684f) vid6_image_uncrop_cif_pane_ParamLimits

0x7094,	// (0x0001684f) vid6_image_uncrop_cif_pane

0x70a4,	// (0x0001685f) vid6_image_uncrop_nhd_pane_ParamLimits

0x70a4,	// (0x0001685f) vid6_image_uncrop_nhd_pane

0x6fd4,	// (0x0001678f) vid6_image_uncrop_vga_pane_ParamLimits

0x6fd4,	// (0x0001678f) vid6_image_uncrop_vga_pane

0x70b3,	// (0x0001686e) vid6_image_uncrop_wvga_pane_ParamLimits

0x70b3,	// (0x0001686e) vid6_image_uncrop_wvga_pane

0x70c2,	// (0x0001687d) vid6_indi_pane_ParamLimits

0x70c2,	// (0x0001687d) vid6_indi_pane

0xd5fd,	// (0x0001cdb8) bg_tb_trans_pane_cp09_ParamLimits

0xd5fd,	// (0x0001cdb8) bg_tb_trans_pane_cp09

0xdc04,	// (0x0001d3bf) cam6_battery_pane_cp_ParamLimits

0xdc04,	// (0x0001d3bf) cam6_battery_pane_cp

0xdc10,	// (0x0001d3cb) vid6_indi_pane_g1_ParamLimits

0xdc10,	// (0x0001d3cb) vid6_indi_pane_g1

0xdc22,	// (0x0001d3dd) vid6_indi_pane_g2_ParamLimits

0xdc22,	// (0x0001d3dd) vid6_indi_pane_g2

0xdc34,	// (0x0001d3ef) vid6_indi_pane_g3_ParamLimits

0xdc34,	// (0x0001d3ef) vid6_indi_pane_g3

0xdc4b,	// (0x0001d406) vid6_indi_pane_g4_ParamLimits

0xdc4b,	// (0x0001d406) vid6_indi_pane_g4

0xdc62,	// (0x0001d41d) vid6_indi_pane_g5_ParamLimits

0xdc62,	// (0x0001d41d) vid6_indi_pane_g5

0x0004,

0xfb7e,	// (0x0001f339) vid6_indi_pane_g_ParamLimits

0xfb7e,	// (0x0001f339) vid6_indi_pane_g

0xdc7c,	// (0x0001d437) vid6_indi_pane_t1_ParamLimits

0xdc7c,	// (0x0001d437) vid6_indi_pane_t1

0xdc92,	// (0x0001d44d) vid6_indi_pane_t2_ParamLimits

0xdc92,	// (0x0001d44d) vid6_indi_pane_t2

0xdcba,	// (0x0001d475) vid6_indi_pane_t3_ParamLimits

0xdcba,	// (0x0001d475) vid6_indi_pane_t3

0xdce2,	// (0x0001d49d) vid6_indi_pane_t4_ParamLimits

0xdce2,	// (0x0001d49d) vid6_indi_pane_t4

0x0003,

0xfb89,	// (0x0001f344) vid6_indi_pane_t_ParamLimits

0xfb89,	// (0x0001f344) vid6_indi_pane_t

0xdd06,	// (0x0001d4c1) wait_bar_pane_cp08

0x70da,	// (0x00016895) main_cset_text2_pane_t1_ParamLimits

0x70da,	// (0x00016895) main_cset_text2_pane_t1

0x706d,	// (0x00016828) listscroll_gen_pane_cp06_t1_ParamLimits

0x706d,	// (0x00016828) listscroll_gen_pane_cp06_t1

0x9647,	// (0x00018e02) main_cam6_set_pane

0xc79a,	// (0x0001bf55) bg_tb_trans_pane_cp06_ParamLimits

0xd1dc,	// (0x0001c997) cam4_indicators_pane_g1_ParamLimits

0xd1ed,	// (0x0001c9a8) cam4_indicators_pane_g2_ParamLimits

0xf8f7,	// (0x0001f0b2) cam4_indicators_pane_g_ParamLimits

0xd205,	// (0x0001c9c0) cam4_indicators_pane_t1_ParamLimits

0x96bc,	// (0x00018e77) bg_tb_trans_pane_cp07_ParamLimits

0xd233,	// (0x0001c9ee) vid4_indicators_pane_g1_ParamLimits

0xd249,	// (0x0001ca04) vid4_indicators_pane_g2_ParamLimits

0xd25d,	// (0x0001ca18) vid4_indicators_pane_g3_ParamLimits

0xd270,	// (0x0001ca2b) vid4_indicators_pane_g4_ParamLimits

0xf909,	// (0x0001f0c4) vid4_indicators_pane_g_ParamLimits

0xd28e,	// (0x0001ca49) vid4_indicators_pane_t1_ParamLimits

0xd944,	// (0x0001d0ff) vid4_progress_pane_g1_ParamLimits

0xd954,	// (0x0001d10f) vid4_progress_pane_g2_ParamLimits

0x6bbb,	// (0x00016376) vid4_progress_pane_g3_ParamLimits

0xd1ed,	// (0x0001c9a8) vid4_progress_pane_g4_ParamLimits

0xfaba,	// (0x0001f275) vid4_progress_pane_g_ParamLimits

0x6bcd,	// (0x00016388) vid4_progress_pane_t1_ParamLimits

0xd964,	// (0x0001d11f) vid4_progress_pane_t2_ParamLimits

0xd979,	// (0x0001d134) vid4_progress_pane_t3_ParamLimits

0xfac5,	// (0x0001f280) vid4_progress_pane_t_ParamLimits

0x6be5,	// (0x000163a0) wait_bar_pane_cp07_ParamLimits

0x70fb,	// (0x000168b6) main_cam6_set_pane_g2_ParamLimits

0x70fb,	// (0x000168b6) main_cam6_set_pane_g2

0x7121,	// (0x000168dc) main_cset6_listscroll_pane_ParamLimits

0x7121,	// (0x000168dc) main_cset6_listscroll_pane

0x713f,	// (0x000168fa) main_cset6_slider_pane_ParamLimits

0x713f,	// (0x000168fa) main_cset6_slider_pane

0x7155,	// (0x00016910) main_cset6_text2_pane_ParamLimits

0x7155,	// (0x00016910) main_cset6_text2_pane

0xdd15,	// (0x0001d4d0) main_cset6_text_pane

0xdd1d,	// (0x0001d4d8) main_cset_list_pane_copy1_ParamLimits

0xdd1d,	// (0x0001d4d8) main_cset_list_pane_copy1

0xdd2d,	// (0x0001d4e8) scroll_pane_cp028_copy1

0x7163,	// (0x0001691e) cset_list_set_pane_copy1

0x7177,	// (0x00016932) aid_position_infowindow_above_copy1

0x717f,	// (0x0001693a) aid_position_infowindow_below_copy1

0x7187,	// (0x00016942) cset_list_set_pane_g1_copy1

0x718f,	// (0x0001694a) cset_list_set_pane_g3_copy1_ParamLimits

0x718f,	// (0x0001694a) cset_list_set_pane_g3_copy1

0x719e,	// (0x00016959) cset_list_set_pane_t1_copy1_ParamLimits

0x719e,	// (0x00016959) cset_list_set_pane_t1_copy1

0x96bc,	// (0x00018e77) list_highlight_pane_cp021_copy1_ParamLimits

0x96bc,	// (0x00018e77) list_highlight_pane_cp021_copy1

0xdd36,	// (0x0001d4f1) cset6_slider_pane_ParamLimits

0xdd36,	// (0x0001d4f1) cset6_slider_pane

0xdd62,	// (0x0001d51d) main_cset6_slider_pane_g1_ParamLimits

0xdd62,	// (0x0001d51d) main_cset6_slider_pane_g1

0x71b3,	// (0x0001696e) main_cset6_slider_pane_g2_ParamLimits

0x71b3,	// (0x0001696e) main_cset6_slider_pane_g2

0xdd8a,	// (0x0001d545) main_cset6_slider_pane_g3_ParamLimits

0xdd8a,	// (0x0001d545) main_cset6_slider_pane_g3

0x71db,	// (0x00016996) main_cset6_slider_pane_g4_ParamLimits

0x71db,	// (0x00016996) main_cset6_slider_pane_g4

0x71e7,	// (0x000169a2) main_cset6_slider_pane_g5_ParamLimits

0x71e7,	// (0x000169a2) main_cset6_slider_pane_g5

0xd456,	// (0x0001cc11) main_cset6_slider_pane_g7_ParamLimits

0xd456,	// (0x0001cc11) main_cset6_slider_pane_g7

0xd462,	// (0x0001cc1d) main_cset6_slider_pane_g8_ParamLimits

0xd462,	// (0x0001cc1d) main_cset6_slider_pane_g8

0x6117,	// (0x000158d2) main_cset6_slider_pane_g9_ParamLimits

0x6117,	// (0x000158d2) main_cset6_slider_pane_g9

0x6123,	// (0x000158de) main_cset6_slider_pane_g10_ParamLimits

0x6123,	// (0x000158de) main_cset6_slider_pane_g10

0x612f,	// (0x000158ea) main_cset6_slider_pane_g11_ParamLimits

0x612f,	// (0x000158ea) main_cset6_slider_pane_g11

0x613b,	// (0x000158f6) main_cset6_slider_pane_g12_ParamLimits

0x613b,	// (0x000158f6) main_cset6_slider_pane_g12

0x6147,	// (0x00015902) main_cset6_slider_pane_g13_ParamLimits

0x6147,	// (0x00015902) main_cset6_slider_pane_g13

0x6153,	// (0x0001590e) main_cset6_slider_pane_g14_ParamLimits

0x6153,	// (0x0001590e) main_cset6_slider_pane_g14

0x71f5,	// (0x000169b0) main_cset6_slider_pane_g15_ParamLimits

0x71f5,	// (0x000169b0) main_cset6_slider_pane_g15

0x6177,	// (0x00015932) main_cset6_slider_pane_g16_ParamLimits

0x6177,	// (0x00015932) main_cset6_slider_pane_g16

0x6185,	// (0x00015940) main_cset6_slider_pane_g17_ParamLimits

0x6185,	// (0x00015940) main_cset6_slider_pane_g17

0x0011,

0xfb92,	// (0x0001f34d) main_cset6_slider_pane_g_ParamLimits

0xfb92,	// (0x0001f34d) main_cset6_slider_pane_g

0xdd96,	// (0x0001d551) main_cset6_slider_pane_t1_ParamLimits

0xdd96,	// (0x0001d551) main_cset6_slider_pane_t1

0x7225,	// (0x000169e0) main_cset6_slider_pane_t2_ParamLimits

0x7225,	// (0x000169e0) main_cset6_slider_pane_t2

0x7250,	// (0x00016a0b) main_cset6_slider_pane_t3_ParamLimits

0x7250,	// (0x00016a0b) main_cset6_slider_pane_t3

0x727b,	// (0x00016a36) main_cset6_slider_pane_t4_ParamLimits

0x727b,	// (0x00016a36) main_cset6_slider_pane_t4

0x72a8,	// (0x00016a63) main_cset6_slider_pane_t5_ParamLimits

0x72a8,	// (0x00016a63) main_cset6_slider_pane_t5

0xddd7,	// (0x0001d592) main_cset6_slider_pane_t7_ParamLimits

0xddd7,	// (0x0001d592) main_cset6_slider_pane_t7

0x72d5,	// (0x00016a90) main_cset6_slider_pane_t8_ParamLimits

0x72d5,	// (0x00016a90) main_cset6_slider_pane_t8

0x72f9,	// (0x00016ab4) main_cset6_slider_pane_t9_ParamLimits

0x72f9,	// (0x00016ab4) main_cset6_slider_pane_t9

0x731d,	// (0x00016ad8) main_cset6_slider_pane_t10_ParamLimits

0x731d,	// (0x00016ad8) main_cset6_slider_pane_t10

0x7341,	// (0x00016afc) main_cset6_slider_pane_t11_ParamLimits

0x7341,	// (0x00016afc) main_cset6_slider_pane_t11

0xde0d,	// (0x0001d5c8) main_cset6_slider_pane_t14_ParamLimits

0xde0d,	// (0x0001d5c8) main_cset6_slider_pane_t14

0xde46,	// (0x0001d601) main_cset6_slider_pane_t15_ParamLimits

0xde46,	// (0x0001d601) main_cset6_slider_pane_t15

0x000b,

0xfbb7,	// (0x0001f372) main_cset6_slider_pane_t_ParamLimits

0xfbb7,	// (0x0001f372) main_cset6_slider_pane_t

0xde7f,	// (0x0001d63a) cset_slider_pane_g1_copy1

0xde88,	// (0x0001d643) cset_slider_pane_g2_copy1

0xde91,	// (0x0001d64c) cset_slider_pane_g3_copy1

0x9647,	// (0x00018e02) bg_popup_sub_pane_cp011_copy1

0xde9a,	// (0x0001d655) main_cset_text_pane_g1_copy1

0xd65f,	// (0x0001ce1a) main_cset_text_pane_t1_copy1

0xd66d,	// (0x0001ce28) main_cset_text_pane_t2_copy1

0xd67b,	// (0x0001ce36) main_cset_text_pane_t3_copy1

0xd689,	// (0x0001ce44) main_cset_text_pane_t4_copy1

0xd697,	// (0x0001ce52) main_cset_text_pane_t5_copy1

0xdea2,	// (0x0001d65d) main_cset_text_pane_t6_copy1

0xdeb0,	// (0x0001d66b) main_cset_text_pane_t7_copy1

0x70da,	// (0x00016895) main_cset_text2_pane_t1_copy1

0x96bc,	// (0x00018e77) main_ncimui_pane

0x3542,	// (0x00012cfd) popup_query_ncimui_window_ParamLimits

0x3542,	// (0x00012cfd) popup_query_ncimui_window

0xc7ff,	// (0x0001bfba) field_cale_ev2_pane_g4_ParamLimits

0xc7ff,	// (0x0001bfba) field_cale_ev2_pane_g4

0x5209,	// (0x000149c4) cell_video_dialer_keypad_pane_g2_ParamLimits

0x5209,	// (0x000149c4) cell_video_dialer_keypad_pane_g2

0x0001,

0xf891,	// (0x0001f04c) cell_video_dialer_keypad_pane_g_ParamLimits

0xf891,	// (0x0001f04c) cell_video_dialer_keypad_pane_g

0x5221,	// (0x000149dc) cell_video_dialer_keypad_pane_t1

0x9647,	// (0x00018e02) bg_popup_window_pane_cp012

0xa824,	// (0x00019fdf) heading_pane_cp06

0xdedc,	// (0x0001d697) ncim_query_content_pane

0x9647,	// (0x00018e02) bg_popup_heading_pane_cp01

0xdee4,	// (0x0001d69f) ncim_heading_pane_t1

0xdef2,	// (0x0001d6ad) ncim_indicator_popup_pane

0xdf04,	// (0x0001d6bf) ncim_query_button_pane

0xdf1a,	// (0x0001d6d5) ncim_query_content_pane_t1

0xdf2c,	// (0x0001d6e7) ncim_query_content_pane_t2

0x0005,

0xfbfb,	// (0x0001f3b6) ncim_query_content_pane_t

0xdf66,	// (0x0001d721) ncim_query_list_pane

0xdf78,	// (0x0001d733) ncim_query_popup_pane

0xdef2,	// (0x0001d6ad) ncim_indicator_popup_pane_ParamLimits

0x7566,	// (0x00016d21) ncim_query_content_pane_g1_ParamLimits

0x7566,	// (0x00016d21) ncim_query_content_pane_g1

0xdf1a,	// (0x0001d6d5) ncim_query_content_pane_t1_ParamLimits

0xdf2c,	// (0x0001d6e7) ncim_query_content_pane_t2_ParamLimits

0x7572,	// (0x00016d2d) ncim_query_content_pane_t3_ParamLimits

0x7572,	// (0x00016d2d) ncim_query_content_pane_t3

0x759a,	// (0x00016d55) ncim_query_content_pane_t4_ParamLimits

0x759a,	// (0x00016d55) ncim_query_content_pane_t4

0x75c2,	// (0x00016d7d) ncim_query_content_pane_t5_ParamLimits

0x75c2,	// (0x00016d7d) ncim_query_content_pane_t5

0xdf3e,	// (0x0001d6f9) ncim_query_content_pane_t6_ParamLimits

0xdf3e,	// (0x0001d6f9) ncim_query_content_pane_t6

0xfbfb,	// (0x0001f3b6) ncim_query_content_pane_t_ParamLimits

0xdf66,	// (0x0001d721) ncim_query_list_pane_ParamLimits

0xdf78,	// (0x0001d733) ncim_query_popup_pane_ParamLimits

0xdf8c,	// (0x0001d747) wait_bar_pane_cp04

0x9647,	// (0x00018e02) input_focus_pane_cp011

0xdf94,	// (0x0001d74f) ncim_query_popup_pane_t1

0xdfa2,	// (0x0001d75d) ncim_list_query_list_pane_ParamLimits

0xdfa2,	// (0x0001d75d) ncim_list_query_list_pane

0x9647,	// (0x00018e02) bg_button_pane_cp027

0xdfb5,	// (0x0001d770) ncim_query_button_pane_g1

0x9647,	// (0x00018e02) list_highlight_pane_cp012

0xdfbf,	// (0x0001d77a) ncim_list_query_list_pane_g1

0xdfc7,	// (0x0001d782) ncim_list_query_list_pane_t1

0xd1f9,	// (0x0001c9b4) cam4_indicators_pane_g3_ParamLimits

0xd1f9,	// (0x0001c9b4) cam4_indicators_pane_g3

0xd27c,	// (0x0001ca37) vid4_indicators_pane_g5_ParamLimits

0xd27c,	// (0x0001ca37) vid4_indicators_pane_g5

0xd1f9,	// (0x0001c9b4) vid4_progress_pane_g5_ParamLimits

0xd1f9,	// (0x0001c9b4) vid4_progress_pane_g5

0x7451,	// (0x00016c0c) main_ncimui_pane_g1

0x74ba,	// (0x00016c75) ncimui_group_query_pane_ParamLimits

0x74ba,	// (0x00016c75) ncimui_group_query_pane

0x7502,	// (0x00016cbd) ncimui_list_pane_ParamLimits

0x7502,	// (0x00016cbd) ncimui_list_pane

0x7529,	// (0x00016ce4) ncimui_text_pane_ParamLimits

0x7529,	// (0x00016ce4) ncimui_text_pane

0x75ea,	// (0x00016da5) ncimui_text_pane_t1_ParamLimits

0x75ea,	// (0x00016da5) ncimui_text_pane_t1

0xdfd5,	// (0x0001d790) ncimui_list_single_graphic_pane_ParamLimits

0xdfd5,	// (0x0001d790) ncimui_list_single_graphic_pane

0x7608,	// (0x00016dc3) ncimui_query_pane_ParamLimits

0x7608,	// (0x00016dc3) ncimui_query_pane

0x9647,	// (0x00018e02) list_highlight_pane_cp013

0xdfe5,	// (0x0001d7a0) ncim_list_query_list_pane_t1_copy1

0xdfbf,	// (0x0001d77a) ncim_list_single_graphic_pane_g1

0x761b,	// (0x00016dd6) ncim_query_button_pane_cp01

0x7627,	// (0x00016de2) ncim_query_entry_pane_ParamLimits

0x7627,	// (0x00016de2) ncim_query_entry_pane

0x763a,	// (0x00016df5) ncimui_query_pane_g1

0x7646,	// (0x00016e01) ncimui_query_pane_t1_ParamLimits

0x7646,	// (0x00016e01) ncimui_query_pane_t1

0x96bc,	// (0x00018e77) input_focus_pane_cp012

0xdff3,	// (0x0001d7ae) ncim_query_entry_pane_t1

0x9e54,	// (0x0001960f) main_im_pane_ParamLimits

0x96bc,	// (0x00018e77) main_mobtv_pane_ParamLimits

0x96bc,	// (0x00018e77) main_mobtv_pane

0x720d,	// (0x000169c8) main_cset6_slider_pane_g18_ParamLimits

0x720d,	// (0x000169c8) main_cset6_slider_pane_g18

0x7219,	// (0x000169d4) main_cset6_slider_pane_g19_ParamLimits

0x7219,	// (0x000169d4) main_cset6_slider_pane_g19

0xd60b,	// (0x0001cdc6) bg_main_mobtv_pane_ParamLimits

0xd60b,	// (0x0001cdc6) bg_main_mobtv_pane

0x765f,	// (0x00016e1a) main_mobtv_info_pane

0x766a,	// (0x00016e25) main_mobtv_loading_pane_ParamLimits

0x766a,	// (0x00016e25) main_mobtv_loading_pane

0xe005,	// (0x0001d7c0) main_mobtv_pg_channel_list_pane

0xe00f,	// (0x0001d7ca) main_mobtv_pg_hdr_pane

0x7677,	// (0x00016e32) main_mobtv_programe_curr_pane_ParamLimits

0x7677,	// (0x00016e32) main_mobtv_programe_curr_pane

0x7684,	// (0x00016e3f) main_mobtv_programe_next_pane_ParamLimits

0x7684,	// (0x00016e3f) main_mobtv_programe_next_pane

0xe018,	// (0x0001d7d3) popup_mobtv_noti_window

0xc573,	// (0x0001bd2e) main_tv_pg_hdr_pane_g1

0xe022,	// (0x0001d7dd) main_tv_pg_hdr_pane_g2

0xe02a,	// (0x0001d7e5) main_tv_pg_hdr_pane_g3

0xe032,	// (0x0001d7ed) main_tv_pg_hdr_pane_g4

0xe03a,	// (0x0001d7f5) main_tv_pg_hdr_pane_g5

0xe044,	// (0x0001d7ff) main_tv_pg_hdr_pane_g6

0xe04e,	// (0x0001d809) main_tv_pg_hdr_pane_g7

0xe058,	// (0x0001d813) main_tv_pg_hdr_pane_g8

0xe062,	// (0x0001d81d) main_tv_pg_hdr_pane_g9

0xe06c,	// (0x0001d827) main_tv_pg_hdr_pane_g10

0xe076,	// (0x0001d831) main_tv_pg_hdr_pane_g11

0x000a,

0xfc08,	// (0x0001f3c3) main_tv_pg_hdr_pane_g

0xe080,	// (0x0001d83b) main_tv_pg_hdr_pane_t1

0xe08e,	// (0x0001d849) main_tv_pg_hdr_pane_t2

0xe09c,	// (0x0001d857) main_tv_pg_hdr_pane_t3

0xe0ac,	// (0x0001d867) main_tv_pg_hdr_pane_t4

0xe0bc,	// (0x0001d877) main_tv_pg_hdr_pane_t5

0x0004,

0xfc1f,	// (0x0001f3da) main_tv_pg_hdr_pane_t

0xe0cc,	// (0x0001d887) single_mobtv_pg_channel_pane_ParamLimits

0xe0cc,	// (0x0001d887) single_mobtv_pg_channel_pane

0xe0de,	// (0x0001d899) single_mobtv_pg_channel_table_pane

0xe0e7,	// (0x0001d8a2) single_mobtv_pg_channel_thumb_pane

0xe0f0,	// (0x0001d8ab) single_tv_pg_channel_pane_g1

0xe0f9,	// (0x0001d8b4) single_tv_pg_channel_pane_g2

0x0001,

0xfc2a,	// (0x0001f3e5) single_tv_pg_channel_pane_g

0xc79a,	// (0x0001bf55) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xc79a,	// (0x0001bf55) bg_single_mobtv_pg_channel_thumb_pane

0xe102,	// (0x0001d8bd) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe102,	// (0x0001d8bd) single_mobtv_pg_channel_thumb_pane_g1

0xe110,	// (0x0001d8cb) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe110,	// (0x0001d8cb) single_mobtv_pg_channel_thumb_pane_g2

0xe11c,	// (0x0001d8d7) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe11c,	// (0x0001d8d7) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc2f,	// (0x0001f3ea) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc2f,	// (0x0001f3ea) single_mobtv_pg_channel_thumb_pane_g

0xe128,	// (0x0001d8e3) single_mobtv_pg_channel_thumb_pane_t1

0xe136,	// (0x0001d8f1) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc36,	// (0x0001f3f1) single_mobtv_pg_channel_thumb_pane_t

0xc573,	// (0x0001bd2e) bg_single_mobtv_pg_channel_table_pane_g1

0xc573,	// (0x0001bd2e) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6d8,	// (0x0001ee93) bg_single_mobtv_pg_channel_table_pane_g

0xe144,	// (0x0001d8ff) single_mobtv_pg_channel_table_pane_t1

0xe152,	// (0x0001d90d) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc3b,	// (0x0001f3f6) single_mobtv_pg_channel_table_pane_t

0x7699,	// (0x00016e54) main_mobtv_info_pane_g1_ParamLimits

0x7699,	// (0x00016e54) main_mobtv_info_pane_g1

0x76b7,	// (0x00016e72) main_mobtv_info_pane_t1_ParamLimits

0x76b7,	// (0x00016e72) main_mobtv_info_pane_t1

0x772f,	// (0x00016eea) main_mobtv_info_pane_t2_ParamLimits

0x772f,	// (0x00016eea) main_mobtv_info_pane_t2

0x0002,

0xfc45,	// (0x0001f400) main_mobtv_info_pane_t_ParamLimits

0xfc45,	// (0x0001f400) main_mobtv_info_pane_t

0x77c0,	// (0x00016f7b) wait_bar_pane_cp05

0x77d2,	// (0x00016f8d) main_mobtv_loading_pane_g1_ParamLimits

0x77d2,	// (0x00016f8d) main_mobtv_loading_pane_g1

0x77e3,	// (0x00016f9e) main_mobtv_loading_pane_g2_ParamLimits

0x77e3,	// (0x00016f9e) main_mobtv_loading_pane_g2

0x77ef,	// (0x00016faa) main_mobtv_loading_pane_g3_ParamLimits

0x77ef,	// (0x00016faa) main_mobtv_loading_pane_g3

0x0002,

0xfc4c,	// (0x0001f407) main_mobtv_loading_pane_g_ParamLimits

0xfc4c,	// (0x0001f407) main_mobtv_loading_pane_g

0xe160,	// (0x0001d91b) main_mobtv_loading_pane_t1_ParamLimits

0xe160,	// (0x0001d91b) main_mobtv_loading_pane_t1

0xe178,	// (0x0001d933) main_mobtv_loading_pane_t2_ParamLimits

0xe178,	// (0x0001d933) main_mobtv_loading_pane_t2

0x0001,

0xfc53,	// (0x0001f40e) main_mobtv_loading_pane_t_ParamLimits

0xfc53,	// (0x0001f40e) main_mobtv_loading_pane_t

0x7802,	// (0x00016fbd) wait_bar_pane_cp06_ParamLimits

0x7802,	// (0x00016fbd) wait_bar_pane_cp06

0xe19c,	// (0x0001d957) main_mobtv_programe_curr_pane_t1

0xe1aa,	// (0x0001d965) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc58,	// (0x0001f413) main_mobtv_programe_curr_pane_t

0xe1b8,	// (0x0001d973) main_mobtv_programe_next_pane_t1

0xe1c6,	// (0x0001d981) main_mobtv_programe_next_pane_t2

0xe1d4,	// (0x0001d98f) main_mobtv_programe_next_pane_t3

0x0002,

0xfc5d,	// (0x0001f418) main_mobtv_programe_next_pane_t

0x9647,	// (0x00018e02) bg_popup_mobtv_noti_window_pane

0xe1e2,	// (0x0001d99d) popup_mobtv_noti_window_g1

0xe1ea,	// (0x0001d9a5) popup_mobtv_noti_window_t1

0xe1f8,	// (0x0001d9b3) popup_mobtv_noti_window_t2

0x0001,

0xfc64,	// (0x0001f41f) popup_mobtv_noti_window_t

0xc573,	// (0x0001bd2e) bg_popup_mobtv_noti_window_pane_g1

0x9647,	// (0x00018e02) sc_clock_pane

0x9647,	// (0x00018e02) main_fs_bigclock_pane

0x6e4b,	// (0x00016606) blid2_tripm_pane_t4_ParamLimits

0x6e4b,	// (0x00016606) blid2_tripm_pane_t4

0x7811,	// (0x00016fcc) sc_clock_pane_g1_ParamLimits

0x7811,	// (0x00016fcc) sc_clock_pane_g1

0x7823,	// (0x00016fde) sc_clock_pane_t1_ParamLimits

0x7823,	// (0x00016fde) sc_clock_pane_t1

0x7847,	// (0x00017002) sc_clock_pane_t2_ParamLimits

0x7847,	// (0x00017002) sc_clock_pane_t2

0x785f,	// (0x0001701a) sc_clock_pane_t3_ParamLimits

0x785f,	// (0x0001701a) sc_clock_pane_t3

0x0004,

0xfc69,	// (0x0001f424) sc_clock_pane_t_ParamLimits

0xfc69,	// (0x0001f424) sc_clock_pane_t

0x8a24,	// (0x000181df) main_fs_bigclock_indicator_pane_ParamLimits

0x8a24,	// (0x000181df) main_fs_bigclock_indicator_pane

0x7925,	// (0x000170e0) main_fs_bigclock_pane_g1_ParamLimits

0x7925,	// (0x000170e0) main_fs_bigclock_pane_g1

0x8a30,	// (0x000181eb) main_fs_bigclock_pane_t1_ParamLimits

0x8a30,	// (0x000181eb) main_fs_bigclock_pane_t1

0x8a42,	// (0x000181fd) main_fs_bigclock_pane_t2_ParamLimits

0x8a42,	// (0x000181fd) main_fs_bigclock_pane_t2

0x8a56,	// (0x00018211) main_fs_bigclock_pane_t3_ParamLimits

0x8a56,	// (0x00018211) main_fs_bigclock_pane_t3

0x0002,

0xfe6e,	// (0x0001f629) main_fs_bigclock_pane_t_ParamLimits

0xfe6e,	// (0x0001f629) main_fs_bigclock_pane_t

0xec86,	// (0x0001e441) main_fs_bigclock_indicator_pane_g1

0xdf0c,	// (0x0001d6c7) ncim_query_content_pane_g2_ParamLimits

0xdf0c,	// (0x0001d6c7) ncim_query_content_pane_g2

0x0001,

0xfbf6,	// (0x0001f3b1) ncim_query_content_pane_g_ParamLimits

0xfbf6,	// (0x0001f3b1) ncim_query_content_pane_g

0x7876,	// (0x00017031) sc_clock_pane_t4_ParamLimits

0x7876,	// (0x00017031) sc_clock_pane_t4

0x96bc,	// (0x00018e77) main_radioblah_pane

0xd13a,	// (0x0001c8f5) cell_call4_button_pane_t1_copy1_ParamLimits

0xd13a,	// (0x0001c8f5) cell_call4_button_pane_t1_copy1

0x7469,	// (0x00016c24) main_ncimui_pane_t1_ParamLimits

0x7469,	// (0x00016c24) main_ncimui_pane_t1

0x7483,	// (0x00016c3e) main_ncimui_pane_t2_ParamLimits

0x7483,	// (0x00016c3e) main_ncimui_pane_t2

0x0002,

0xfbef,	// (0x0001f3aa) main_ncimui_pane_t_ParamLimits

0xfbef,	// (0x0001f3aa) main_ncimui_pane_t

0xe206,	// (0x0001d9c1) main_radioblah_anim_pane_ParamLimits

0xe206,	// (0x0001d9c1) main_radioblah_anim_pane

0xe217,	// (0x0001d9d2) main_radioblah_info_pane_ParamLimits

0xe217,	// (0x0001d9d2) main_radioblah_info_pane

0xe22b,	// (0x0001d9e6) main_radioblah_pane_t1_ParamLimits

0xe22b,	// (0x0001d9e6) main_radioblah_pane_t1

0xe247,	// (0x0001da02) main_radioblah_pane_t2_ParamLimits

0xe247,	// (0x0001da02) main_radioblah_pane_t2

0x0003,

0xfc8a,	// (0x0001f445) main_radioblah_pane_t_ParamLimits

0xfc8a,	// (0x0001f445) main_radioblah_pane_t

0x7ace,	// (0x00017289) main_radioblah_rocker_ctrl_pane_ParamLimits

0x7ace,	// (0x00017289) main_radioblah_rocker_ctrl_pane

0xe28f,	// (0x0001da4a) main_radioblah_info_pane_t1_ParamLimits

0xe28f,	// (0x0001da4a) main_radioblah_info_pane_t1

0x7b26,	// (0x000172e1) main_radioblah_info_pane_t2_ParamLimits

0x7b26,	// (0x000172e1) main_radioblah_info_pane_t2

0x0003,

0xfc93,	// (0x0001f44e) main_radioblah_info_pane_t_ParamLimits

0xfc93,	// (0x0001f44e) main_radioblah_info_pane_t

0xc573,	// (0x0001bd2e) main_radioblah_rocker_ctrl_pane_g1

0x7bd6,	// (0x00017391) main_radioblah_rocker_ctrl_pane_g2

0x7bde,	// (0x00017399) main_radioblah_rocker_ctrl_pane_g3

0x7be6,	// (0x000173a1) main_radioblah_rocker_ctrl_pane_g4

0x7bee,	// (0x000173a9) main_radioblah_rocker_ctrl_pane_g5

0x7bf6,	// (0x000173b1) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc9c,	// (0x0001f457) main_radioblah_rocker_ctrl_pane_g

0x70da,	// (0x00016895) main_cset_text2_pane_t1_copy1_ParamLimits

0xd1ca,	// (0x0001c985) cam4_image_uncrop_qvga_pane

0xd21f,	// (0x0001c9da) vid4_image_uncrop_qcif_pane

0xdb2c,	// (0x0001d2e7) cam6_image_uncrop_qvga_pane_ParamLimits

0xdb2c,	// (0x0001d2e7) cam6_image_uncrop_qvga_pane

0xdbf4,	// (0x0001d3af) vid6_image_uncrop_qcif_pane_ParamLimits

0xdbf4,	// (0x0001d3af) vid6_image_uncrop_qcif_pane

0x9647,	// (0x00018e02) bg_popup_preview_window_pane_cp03

0xdebe,	// (0x0001d679) list_cset_text2_pane

0xdec6,	// (0x0001d681) main_cset6_text2_pane_g1

0xdece,	// (0x0001d689) main_cset6_text2_pane_t1

0xef33,	// (0x0001e6ee) list_cset_text2_pane_t1_ParamLimits

0xef33,	// (0x0001e6ee) list_cset_text2_pane_t1

0x96bc,	// (0x00018e77) main_radioblah_pane_ParamLimits

0x77ac,	// (0x00016f67) main_mobtv_info_pane_t3_ParamLimits

0x77ac,	// (0x00016f67) main_mobtv_info_pane_t3

0x7abc,	// (0x00017277) main_radioblah_pane_g1

0x7af6,	// (0x000172b1) main_radioblah_info_pane_g1

0x7b7b,	// (0x00017336) main_radioblah_info_pane_t3_ParamLimits

0x7b7b,	// (0x00017336) main_radioblah_info_pane_t3

0x1e35,	// (0x000115f0) highlight_cell_cale_month_pane_ParamLimits

0x1e35,	// (0x000115f0) highlight_cell_cale_month_pane

0x9647,	// (0x00018e02) main_phob_fisheye_pane

0xc882,	// (0x0001c03d) scroll_pane_cp0031_ParamLimits

0xc882,	// (0x0001c03d) scroll_pane_cp0031

0xdd06,	// (0x0001d4c1) wait_bar_pane_cp08_ParamLimits

0x7163,	// (0x0001691e) cset_list_set_pane_copy1_ParamLimits

0xe2c9,	// (0x0001da84) highlight_cell_cale_month_pane_g1

0x7bfe,	// (0x000173b9) highlight_cell_cale_month_pane_t1

0xd933,	// (0x0001d0ee) list_gen_pane_cp01

0xd441,	// (0x0001cbfc) scroll_pane_01

0x7c0c,	// (0x000173c7) list_single_double_fisheye_pane

0x7c15,	// (0x000173d0) list_double_fisheye_pane_g1_ParamLimits

0x7c15,	// (0x000173d0) list_double_fisheye_pane_g1

0x7c21,	// (0x000173dc) list_double_fisheye_pane_g2_ParamLimits

0x7c21,	// (0x000173dc) list_double_fisheye_pane_g2

0x7c35,	// (0x000173f0) list_double_fisheye_pane_g3_ParamLimits

0x7c35,	// (0x000173f0) list_double_fisheye_pane_g3

0x0004,

0xfca9,	// (0x0001f464) list_double_fisheye_pane_g_ParamLimits

0xfca9,	// (0x0001f464) list_double_fisheye_pane_g

0x7c5e,	// (0x00017419) list_double_fisheye_pane_t1_ParamLimits

0x7c5e,	// (0x00017419) list_double_fisheye_pane_t1

0x7c79,	// (0x00017434) list_double_fisheye_pane_t2_ParamLimits

0x7c79,	// (0x00017434) list_double_fisheye_pane_t2

0x0001,

0xfcb4,	// (0x0001f46f) list_double_fisheye_pane_t_ParamLimits

0xfcb4,	// (0x0001f46f) list_double_fisheye_pane_t

0x9647,	// (0x00018e02) main_call5_pane

0x78a1,	// (0x0001705c) sc_swipe_pane_ParamLimits

0x78a1,	// (0x0001705c) sc_swipe_pane

0x7cae,	// (0x00017469) call5_image_pane_ParamLimits

0x7cae,	// (0x00017469) call5_image_pane

0x7ccb,	// (0x00017486) call5_swipe_1_pane_ParamLimits

0x7ccb,	// (0x00017486) call5_swipe_1_pane

0x7cde,	// (0x00017499) call5_swipe_2_pane_ParamLimits

0x7cde,	// (0x00017499) call5_swipe_2_pane

0x7d09,	// (0x000174c4) popup_call5_audio_first_window_ParamLimits

0x7d09,	// (0x000174c4) popup_call5_audio_first_window

0xc79a,	// (0x0001bf55) call5_swipe_1_pane_g1_ParamLimits

0xc79a,	// (0x0001bf55) call5_swipe_1_pane_g1

0xe2d1,	// (0x0001da8c) call5_swipe_1_pane_g2_ParamLimits

0xe2d1,	// (0x0001da8c) call5_swipe_1_pane_g2

0x0001,

0xfcb9,	// (0x0001f474) call5_swipe_1_pane_g_ParamLimits

0xfcb9,	// (0x0001f474) call5_swipe_1_pane_g

0xe2dd,	// (0x0001da98) call5_swipe_1_pane_t1_ParamLimits

0xe2dd,	// (0x0001da98) call5_swipe_1_pane_t1

0xc79a,	// (0x0001bf55) call5_swipe_2_pane_g1_ParamLimits

0xc79a,	// (0x0001bf55) call5_swipe_2_pane_g1

0xe2f2,	// (0x0001daad) call5_swipe_2_pane_g2_ParamLimits

0xe2f2,	// (0x0001daad) call5_swipe_2_pane_g2

0x0001,

0xfcbe,	// (0x0001f479) call5_swipe_2_pane_g_ParamLimits

0xfcbe,	// (0x0001f479) call5_swipe_2_pane_g

0xe2fe,	// (0x0001dab9) call5_swipe_2_pane_t1_ParamLimits

0xe2fe,	// (0x0001dab9) call5_swipe_2_pane_t1

0xe313,	// (0x0001dace) sc_swipe_pane_g1_ParamLimits

0xe313,	// (0x0001dace) sc_swipe_pane_g1

0xe320,	// (0x0001dadb) sc_swipe_pane_g2_ParamLimits

0xe320,	// (0x0001dadb) sc_swipe_pane_g2

0x0001,

0xfcc3,	// (0x0001f47e) sc_swipe_pane_g_ParamLimits

0xfcc3,	// (0x0001f47e) sc_swipe_pane_g

0xe32c,	// (0x0001dae7) sc_swipe_pane_t1_ParamLimits

0xe32c,	// (0x0001dae7) sc_swipe_pane_t1

0x9647,	// (0x00018e02) main_cmail_launcher_pane

0x7d1e,	// (0x000174d9) aid_size_cell_cmail_l_ParamLimits

0x7d1e,	// (0x000174d9) aid_size_cell_cmail_l

0x7d2c,	// (0x000174e7) grid_cmail_l_pane_ParamLimits

0x7d2c,	// (0x000174e7) grid_cmail_l_pane

0x7d45,	// (0x00017500) cell_cmail_l_pane_ParamLimits

0x7d45,	// (0x00017500) cell_cmail_l_pane

0xe341,	// (0x0001dafc) cell_cmail_l_pane_g1_ParamLimits

0xe341,	// (0x0001dafc) cell_cmail_l_pane_g1

0xe34d,	// (0x0001db08) cell_cmail_l_pane_t1_ParamLimits

0xe34d,	// (0x0001db08) cell_cmail_l_pane_t1

0xe363,	// (0x0001db1e) cell_cmail_l_pane_t2_ParamLimits

0xe363,	// (0x0001db1e) cell_cmail_l_pane_t2

0x0001,

0xfcc8,	// (0x0001f483) cell_cmail_l_pane_t_ParamLimits

0xfcc8,	// (0x0001f483) cell_cmail_l_pane_t

0x96bc,	// (0x00018e77) grid_highlight_pane_cp018_ParamLimits

0x96bc,	// (0x00018e77) grid_highlight_pane_cp018

0xfcf1,	// (0x0000f4ac) main2_pane_ParamLimits

0xfcf1,	// (0x0000f4ac) main2_pane

0x9f1a,	// (0x000196d5) popup_sp_fs_action_menu_bg_pane_g1

0x9f22,	// (0x000196dd) popup_sp_fs_action_menu_bg_pane_g2

0x9f2a,	// (0x000196e5) popup_sp_fs_action_menu_bg_pane_g3

0x9f32,	// (0x000196ed) popup_sp_fs_action_menu_bg_pane_g4

0x9f3a,	// (0x000196f5) popup_sp_fs_action_menu_bg_pane_g5

0x9f42,	// (0x000196fd) popup_sp_fs_action_menu_bg_pane_g6

0x9f4a,	// (0x00019705) popup_sp_fs_action_menu_bg_pane_g7

0x9f52,	// (0x0001970d) popup_sp_fs_action_menu_bg_pane_g8

0x9f5a,	// (0x00019715) popup_sp_fs_action_menu_bg_pane_g9

0x9f62,	// (0x0001971d) popup_sp_fs_action_menu_bg_pane_g10

0x9f62,	// (0x0001971d) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf186,	// (0x0001e941) popup_sp_fs_action_menu_bg_pane_g

0x0c9e,	// (0x00010459) list_medium_line_x2_t3_g3_g1_ParamLimits

0x0c9e,	// (0x00010459) list_medium_line_x2_t3_g3_g1

0x0caa,	// (0x00010465) list_medium_line_x2_t3_g3_g2_ParamLimits

0x0caa,	// (0x00010465) list_medium_line_x2_t3_g3_g2

0x0cb6,	// (0x00010471) list_medium_line_x2_t3_g3_g3_ParamLimits

0x0cb6,	// (0x00010471) list_medium_line_x2_t3_g3_g3

0x0002,

0xf234,	// (0x0001e9ef) list_medium_line_x2_t3_g3_g_ParamLimits

0xf234,	// (0x0001e9ef) list_medium_line_x2_t3_g3_g

0x0cc2,	// (0x0001047d) list_medium_line_x2_t3_g3_t1_ParamLimits

0x0cc2,	// (0x0001047d) list_medium_line_x2_t3_g3_t1

0x0cd7,	// (0x00010492) list_medium_line_x2_t3_g3_t2_ParamLimits

0x0cd7,	// (0x00010492) list_medium_line_x2_t3_g3_t2

0x0ceb,	// (0x000104a6) list_medium_line_x2_t3_g3_t3_ParamLimits

0x0ceb,	// (0x000104a6) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23b,	// (0x0001e9f6) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23b,	// (0x0001e9f6) list_medium_line_x2_t3_g3_t

0x0c9e,	// (0x00010459) list_medium_line_x2_t3_g2_g1_ParamLimits

0x0c9e,	// (0x00010459) list_medium_line_x2_t3_g2_g1

0x0cb6,	// (0x00010471) list_medium_line_x2_t3_g2_g2_ParamLimits

0x0cb6,	// (0x00010471) list_medium_line_x2_t3_g2_g2

0x0001,

0xf242,	// (0x0001e9fd) list_medium_line_x2_t3_g2_g_ParamLimits

0xf242,	// (0x0001e9fd) list_medium_line_x2_t3_g2_g

0x0d00,	// (0x000104bb) list_medium_line_x2_t3_g2_t1_ParamLimits

0x0d00,	// (0x000104bb) list_medium_line_x2_t3_g2_t1

0x0d16,	// (0x000104d1) list_medium_line_x2_t3_g2_t2_ParamLimits

0x0d16,	// (0x000104d1) list_medium_line_x2_t3_g2_t2

0x0d28,	// (0x000104e3) list_medium_line_x2_t3_g2_t3_ParamLimits

0x0d28,	// (0x000104e3) list_medium_line_x2_t3_g2_t3

0x0002,

0xf247,	// (0x0001ea02) list_medium_line_x2_t3_g2_t_ParamLimits

0xf247,	// (0x0001ea02) list_medium_line_x2_t3_g2_t

0x0c9e,	// (0x00010459) list_medium_line_x2_t4_g4_g1_ParamLimits

0x0c9e,	// (0x00010459) list_medium_line_x2_t4_g4_g1

0x0d46,	// (0x00010501) list_medium_line_x2_t4_g4_g2_ParamLimits

0x0d46,	// (0x00010501) list_medium_line_x2_t4_g4_g2

0x0caa,	// (0x00010465) list_medium_line_x2_t4_g4_g3_ParamLimits

0x0caa,	// (0x00010465) list_medium_line_x2_t4_g4_g3

0x0d52,	// (0x0001050d) list_medium_line_x2_t4_g4_g4_ParamLimits

0x0d52,	// (0x0001050d) list_medium_line_x2_t4_g4_g4

0x0003,

0xf24e,	// (0x0001ea09) list_medium_line_x2_t4_g4_g_ParamLimits

0xf24e,	// (0x0001ea09) list_medium_line_x2_t4_g4_g

0x0d5e,	// (0x00010519) list_medium_line_x2_t4_g4_t1_ParamLimits

0x0d5e,	// (0x00010519) list_medium_line_x2_t4_g4_t1

0x0d78,	// (0x00010533) list_medium_line_x2_t4_g4_t2_ParamLimits

0x0d78,	// (0x00010533) list_medium_line_x2_t4_g4_t2

0x0d8e,	// (0x00010549) list_medium_line_x2_t4_g4_t3_ParamLimits

0x0d8e,	// (0x00010549) list_medium_line_x2_t4_g4_t3

0x0da3,	// (0x0001055e) list_medium_line_x2_t4_g4_t4_ParamLimits

0x0da3,	// (0x0001055e) list_medium_line_x2_t4_g4_t4

0x0003,

0xf257,	// (0x0001ea12) list_medium_line_x2_t4_g4_t_ParamLimits

0xf257,	// (0x0001ea12) list_medium_line_x2_t4_g4_t

0x0c9e,	// (0x00010459) list_medium_line_x2_t2_g4_g1_ParamLimits

0x0c9e,	// (0x00010459) list_medium_line_x2_t2_g4_g1

0x0d46,	// (0x00010501) list_medium_line_x2_t2_g4_g2_ParamLimits

0x0d46,	// (0x00010501) list_medium_line_x2_t2_g4_g2

0x0caa,	// (0x00010465) list_medium_line_x2_t2_g4_g3_ParamLimits

0x0caa,	// (0x00010465) list_medium_line_x2_t2_g4_g3

0x0cb6,	// (0x00010471) list_medium_line_x2_t2_g4_g4_ParamLimits

0x0cb6,	// (0x00010471) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2be,	// (0x0001ea79) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2be,	// (0x0001ea79) list_medium_line_x2_t2_g4_g

0x1e5b,	// (0x00011616) list_medium_line_x2_t2_g4_t1_ParamLimits

0x1e5b,	// (0x00011616) list_medium_line_x2_t2_g4_t1

0x0ceb,	// (0x000104a6) list_medium_line_x2_t2_g4_t2_ParamLimits

0x0ceb,	// (0x000104a6) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2c7,	// (0x0001ea82) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2c7,	// (0x0001ea82) list_medium_line_x2_t2_g4_t

0x0c9e,	// (0x00010459) list_medium_line_x2_t2_g3_g1_ParamLimits

0x0c9e,	// (0x00010459) list_medium_line_x2_t2_g3_g1

0x0caa,	// (0x00010465) list_medium_line_x2_t2_g3_g2_ParamLimits

0x0caa,	// (0x00010465) list_medium_line_x2_t2_g3_g2

0x0cb6,	// (0x00010471) list_medium_line_x2_t2_g3_g3_ParamLimits

0x0cb6,	// (0x00010471) list_medium_line_x2_t2_g3_g3

0x0002,

0xf234,	// (0x0001e9ef) list_medium_line_x2_t2_g3_g_ParamLimits

0xf234,	// (0x0001e9ef) list_medium_line_x2_t2_g3_g

0x1e70,	// (0x0001162b) list_medium_line_x2_t2_g3_t1_ParamLimits

0x1e70,	// (0x0001162b) list_medium_line_x2_t2_g3_t1

0x0ceb,	// (0x000104a6) list_medium_line_x2_t2_g3_t2_ParamLimits

0x0ceb,	// (0x000104a6) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2cc,	// (0x0001ea87) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2cc,	// (0x0001ea87) list_medium_line_x2_t2_g3_t

0x1fcf,	// (0x0001178a) main_sp_fs_list_pane_ParamLimits

0x1fcf,	// (0x0001178a) main_sp_fs_list_pane

0xd627,	// (0x0001cde2) sp_fs_scroll_pane_ParamLimits

0xd627,	// (0x0001cde2) sp_fs_scroll_pane

0x1fdb,	// (0x00011796) list_medium_line_x2_t3_t1

0x1feb,	// (0x000117a6) list_medium_line_x2_t3_t2

0x1ff9,	// (0x000117b4) list_medium_line_x2_t3_t3

0x0002,

0xf317,	// (0x0001ead2) list_medium_line_x2_t3_t

0x2007,	// (0x000117c2) list_medium_line_x3_t4_t1

0x2017,	// (0x000117d2) list_medium_line_x3_t4_t2

0x2025,	// (0x000117e0) list_medium_line_x3_t4_t3

0x1ff9,	// (0x000117b4) list_medium_line_x3_t4_t4

0x0003,

0xf31e,	// (0x0001ead9) list_medium_line_x3_t4_t

0x2033,	// (0x000117ee) list_medium_line_x4_t5_t1

0x2043,	// (0x000117fe) list_medium_line_x4_t5_t2

0x2025,	// (0x000117e0) list_medium_line_x4_t5_t3

0x2051,	// (0x0001180c) list_medium_line_x4_t5_t4

0x1ff9,	// (0x000117b4) list_medium_line_x4_t5_t5

0x0004,

0xf327,	// (0x0001eae2) list_medium_line_x4_t5_t

0x0c9e,	// (0x00010459) list_medium_line_t4_g4_g1_ParamLimits

0x0c9e,	// (0x00010459) list_medium_line_t4_g4_g1

0x0d52,	// (0x0001050d) list_medium_line_t4_g4_g2_ParamLimits

0x0d52,	// (0x0001050d) list_medium_line_t4_g4_g2

0x205f,	// (0x0001181a) list_medium_line_t4_g4_g3_ParamLimits

0x205f,	// (0x0001181a) list_medium_line_t4_g4_g3

0x0cb6,	// (0x00010471) list_medium_line_t4_g4_g4_ParamLimits

0x0cb6,	// (0x00010471) list_medium_line_t4_g4_g4

0x0003,

0xf332,	// (0x0001eaed) list_medium_line_t4_g4_g_ParamLimits

0xf332,	// (0x0001eaed) list_medium_line_t4_g4_g

0x206b,	// (0x00011826) list_medium_line_t4_g4_t1_ParamLimits

0x206b,	// (0x00011826) list_medium_line_t4_g4_t1

0x2080,	// (0x0001183b) list_medium_line_t4_g4_t2_ParamLimits

0x2080,	// (0x0001183b) list_medium_line_t4_g4_t2

0x2096,	// (0x00011851) list_medium_line_t4_g4_t3_ParamLimits

0x2096,	// (0x00011851) list_medium_line_t4_g4_t3

0x0ceb,	// (0x000104a6) list_medium_line_t4_g4_t4_ParamLimits

0x0ceb,	// (0x000104a6) list_medium_line_t4_g4_t4

0x0003,

0xf33b,	// (0x0001eaf6) list_medium_line_t4_g4_t_ParamLimits

0xf33b,	// (0x0001eaf6) list_medium_line_t4_g4_t

0x2172,	// (0x0001192d) chi_dic_find_pane_g1

0x32c8,	// (0x00012a83) main_tport_pane

0x647a,	// (0x00015c35) list_medium_line_plain_t1

0x652c,	// (0x00015ce7) list_medium_line_t2_g2_g1_ParamLimits

0x652c,	// (0x00015ce7) list_medium_line_t2_g2_g1

0x6538,	// (0x00015cf3) list_medium_line_t2_g2_g2_ParamLimits

0x6538,	// (0x00015cf3) list_medium_line_t2_g2_g2

0x0001,

0xfa00,	// (0x0001f1bb) list_medium_line_t2_g2_g_ParamLimits

0xfa00,	// (0x0001f1bb) list_medium_line_t2_g2_g

0x6544,	// (0x00015cff) list_medium_line_t2_g2_t1_ParamLimits

0x6544,	// (0x00015cff) list_medium_line_t2_g2_t1

0x655e,	// (0x00015d19) list_medium_line_t2_g2_t2_ParamLimits

0x655e,	// (0x00015d19) list_medium_line_t2_g2_t2

0x0001,

0xfa05,	// (0x0001f1c0) list_medium_line_t2_g2_t_ParamLimits

0xfa05,	// (0x0001f1c0) list_medium_line_t2_g2_t

0xd98e,	// (0x0001d149) aid_sp_fs_list_icon_a_sm

0xd996,	// (0x0001d151) aid_sp_fs_list_icon_d

0xd99e,	// (0x0001d159) aid_sp_fs_text_primary

0xd9a7,	// (0x0001d162) aid_sp_fs_text_secondary

0x6bf8,	// (0x000163b3) list_medium_line

0x6bf8,	// (0x000163b3) list_medium_line_g2

0x6bf8,	// (0x000163b3) list_medium_line_g3

0x6bf8,	// (0x000163b3) list_medium_line_plain

0x6bf8,	// (0x000163b3) list_medium_line_plain_t2

0x6bf8,	// (0x000163b3) list_medium_line_plain_t3

0x6bf8,	// (0x000163b3) list_medium_line_right_icon

0x6bf8,	// (0x000163b3) list_medium_line_right_iconx2

0x6bf8,	// (0x000163b3) list_medium_line_t2

0x6bf8,	// (0x000163b3) list_medium_line_t2_g2

0x6bf8,	// (0x000163b3) list_medium_line_t2_g3

0x6bf8,	// (0x000163b3) list_medium_line_t2_right_icon

0x6bf8,	// (0x000163b3) list_medium_line_t2_right_iconx2

0x6bf8,	// (0x000163b3) list_medium_line_t3

0x6bf8,	// (0x000163b3) list_medium_line_t3_g2

0x6bf8,	// (0x000163b3) list_medium_line_t3_g3

0x6bf8,	// (0x000163b3) list_medium_line_t3_right_iconx2

0x6c01,	// (0x000163bc) list_medium_line_t4_g4

0x6c0a,	// (0x000163c5) list_medium_line_x2

0x6c0a,	// (0x000163c5) list_medium_line_x2_t2_g2

0x6c0a,	// (0x000163c5) list_medium_line_x2_t2_g3

0x6c0a,	// (0x000163c5) list_medium_line_x2_t2_g4

0x6c0a,	// (0x000163c5) list_medium_line_x2_t3

0x6c0a,	// (0x000163c5) list_medium_line_x2_t3_g2

0x6c0a,	// (0x000163c5) list_medium_line_x2_t3_g3

0x6c0a,	// (0x000163c5) list_medium_line_x2_t3_g4

0x6c0a,	// (0x000163c5) list_medium_line_x2_t4_g2

0x6c0a,	// (0x000163c5) list_medium_line_x2_t4_g4

0x6c13,	// (0x000163ce) list_medium_line_x3

0x6c13,	// (0x000163ce) list_medium_line_x3_t4

0x6c13,	// (0x000163ce) list_medium_line_x3_t4_g4

0x6c01,	// (0x000163bc) list_medium_line_x4_t4

0x6c01,	// (0x000163bc) list_medium_line_x4_t4_g7

0x6c01,	// (0x000163bc) list_medium_line_x4_t5

0x6c1c,	// (0x000163d7) list_single_fs_dyc_pane_ParamLimits

0x6c1c,	// (0x000163d7) list_single_fs_dyc_pane

0x0c9e,	// (0x00010459) list_medium_line_x4_t4_g7_g1_ParamLimits

0x0c9e,	// (0x00010459) list_medium_line_x4_t4_g7_g1

0x7367,	// (0x00016b22) list_medium_line_x4_t4_g7_g2_ParamLimits

0x7367,	// (0x00016b22) list_medium_line_x4_t4_g7_g2

0x7373,	// (0x00016b2e) list_medium_line_x4_t4_g7_g3_ParamLimits

0x7373,	// (0x00016b2e) list_medium_line_x4_t4_g7_g3

0x7382,	// (0x00016b3d) list_medium_line_x4_t4_g7_g4_ParamLimits

0x7382,	// (0x00016b3d) list_medium_line_x4_t4_g7_g4

0x738e,	// (0x00016b49) list_medium_line_x4_t4_g7_g5_ParamLimits

0x738e,	// (0x00016b49) list_medium_line_x4_t4_g7_g5

0x739d,	// (0x00016b58) list_medium_line_x4_t4_g7_g6_ParamLimits

0x739d,	// (0x00016b58) list_medium_line_x4_t4_g7_g6

0x73ac,	// (0x00016b67) list_medium_line_x4_t4_g7_g7_ParamLimits

0x73ac,	// (0x00016b67) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbd0,	// (0x0001f38b) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbd0,	// (0x0001f38b) list_medium_line_x4_t4_g7_g

0x73b8,	// (0x00016b73) list_medium_line_x4_t4_g7_t1_ParamLimits

0x73b8,	// (0x00016b73) list_medium_line_x4_t4_g7_t1

0x73cd,	// (0x00016b88) list_medium_line_x4_t4_g7_t2_ParamLimits

0x73cd,	// (0x00016b88) list_medium_line_x4_t4_g7_t2

0x73e2,	// (0x00016b9d) list_medium_line_x4_t4_g7_t3_ParamLimits

0x73e2,	// (0x00016b9d) list_medium_line_x4_t4_g7_t3

0x73f7,	// (0x00016bb2) list_medium_line_x4_t4_g7_t4_ParamLimits

0x73f7,	// (0x00016bb2) list_medium_line_x4_t4_g7_t4

0x7409,	// (0x00016bc4) list_medium_line_x4_t4_g7_t5_ParamLimits

0x7409,	// (0x00016bc4) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbdf,	// (0x0001f39a) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbdf,	// (0x0001f39a) list_medium_line_x4_t4_g7_t

0x741b,	// (0x00016bd6) list_single_dyc_row_pane_ParamLimits

0x741b,	// (0x00016bd6) list_single_dyc_row_pane

0x7c9b,	// (0x00017456) call5_gesture_pane_ParamLimits

0x7c9b,	// (0x00017456) call5_gesture_pane

0x7cf1,	// (0x000174ac) call5_windows_pane_ParamLimits

0x7cf1,	// (0x000174ac) call5_windows_pane

0x7d57,	// (0x00017512) call5_swipe_1_pane_cp_ParamLimits

0x7d57,	// (0x00017512) call5_swipe_1_pane_cp

0x7d63,	// (0x0001751e) call5_swipe_2_pane_cp_ParamLimits

0x7d63,	// (0x0001751e) call5_swipe_2_pane_cp

0xa071,	// (0x0001982c) call5_image_pane_cp

0x7d6f,	// (0x0001752a) popup_call5_audio_first_window_cp_ParamLimits

0x7d6f,	// (0x0001752a) popup_call5_audio_first_window_cp

0xe313,	// (0x0001dace) call5_swipe_1_pane_g1_cp_ParamLimits

0xe313,	// (0x0001dace) call5_swipe_1_pane_g1_cp

0xe380,	// (0x0001db3b) call5_swipe_1_pane_g2_cp

0xe32c,	// (0x0001dae7) call5_swipe_1_pane_t1_cp_ParamLimits

0xe32c,	// (0x0001dae7) call5_swipe_1_pane_t1_cp

0xe313,	// (0x0001dace) call5_swipe_2_pane_g1_cp_ParamLimits

0xe313,	// (0x0001dace) call5_swipe_2_pane_g1_cp

0xe388,	// (0x0001db43) call5_swipe_2_pane_g2_cp

0xe390,	// (0x0001db4b) call5_swipe_2_pane_t1_cp_ParamLimits

0xe390,	// (0x0001db4b) call5_swipe_2_pane_t1_cp

0x96bc,	// (0x00018e77) main_sp_fs_email_pane

0xd51a,	// (0x0001ccd5) main_sp_fs_listscroll_pane_te

0x7d7d,	// (0x00017538) popup_sp_fs_action_menu_pane_ParamLimits

0x7d7d,	// (0x00017538) popup_sp_fs_action_menu_pane

0xc573,	// (0x0001bd2e) bg_sp_fs_ctrlbar_pane_g1

0xe3a5,	// (0x0001db60) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe3ae,	// (0x0001db69) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe3b7,	// (0x0001db72) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc573,	// (0x0001bd2e) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfccd,	// (0x0001f488) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc352,	// (0x0001bb0d) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc352,	// (0x0001bb0d) bg_sp_fs_ctrlbar_ddmenu_pane

0xe3c0,	// (0x0001db7b) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe3c0,	// (0x0001db7b) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe3cc,	// (0x0001db87) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe3cc,	// (0x0001db87) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcd6,	// (0x0001f491) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcd6,	// (0x0001f491) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe3d8,	// (0x0001db93) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe3d8,	// (0x0001db93) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x7dc3,	// (0x0001757e) list_medium_line_t2_right_icon_g1

0x7dcb,	// (0x00017586) list_medium_line_t2_right_icon_t1

0x7ddb,	// (0x00017596) list_medium_line_t2_right_icon_t2

0x0001,

0xfcdb,	// (0x0001f496) list_medium_line_t2_right_icon_t

0xc029,	// (0x0001b7e4) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc029,	// (0x0001b7e4) bg_sp_fs_ctrlbar_pane

0x7e37,	// (0x000175f2) main_sp_fs_ctrlbar_button_pane_cp01

0x7e41,	// (0x000175fc) main_sp_fs_ctrlbar_ddmenu_pane

0xe42c,	// (0x0001dbe7) main_sp_fs_ctrlbar_pane_g1

0xe438,	// (0x0001dbf3) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfce0,	// (0x0001f49b) main_sp_fs_ctrlbar_pane_g

0xe444,	// (0x0001dbff) main_sp_fs_ctrlbar_pane_t1

0x7e4b,	// (0x00017606) main_sp_fs_ctrlbar_pane

0x7e6f,	// (0x0001762a) main_sp_fs_listscroll_pane_te_cp01

0x7e8f,	// (0x0001764a) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x7e8f,	// (0x0001764a) popup_sp_fs_action_menu_pane_cp01

0x96bc,	// (0x00018e77) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x96bc,	// (0x00018e77) bg_sp_fs_highlight_list_pane_cp01

0xe474,	// (0x0001dc2f) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xe474,	// (0x0001dc2f) sp_fs_action_menu_list_gene_pane_g1

0xe483,	// (0x0001dc3e) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe483,	// (0x0001dc3e) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcea,	// (0x0001f4a5) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcea,	// (0x0001f4a5) sp_fs_action_menu_list_gene_pane_g

0xe490,	// (0x0001dc4b) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xe490,	// (0x0001dc4b) sp_fs_action_menu_list_gene_pane_t1

0xe4a8,	// (0x0001dc63) sp_fs_action_menu_list_gene_pane_ParamLimits

0xe4a8,	// (0x0001dc63) sp_fs_action_menu_list_gene_pane

0xe4cb,	// (0x0001dc86) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe4cb,	// (0x0001dc86) popup_sp_fs_action_menu_bg_pane

0xe4d9,	// (0x0001dc94) sp_fs_action_menu_list_pane_ParamLimits

0xe4d9,	// (0x0001dc94) sp_fs_action_menu_list_pane

0x7ec5,	// (0x00017680) sp_fs_scroll_pane_cp01_ParamLimits

0x7ec5,	// (0x00017680) sp_fs_scroll_pane_cp01

0x7eeb,	// (0x000176a6) list_medium_line_plain_t2_t1

0x7efb,	// (0x000176b6) list_medium_line_plain_t2_t2

0x0001,

0xfcef,	// (0x0001f4aa) list_medium_line_plain_t2_t

0x7f0b,	// (0x000176c6) list_medium_line_plain_t3_t1

0x7f1b,	// (0x000176d6) list_medium_line_plain_t3_t2

0x7f29,	// (0x000176e4) list_medium_line_plain_t3_t3

0x0002,

0xfcf4,	// (0x0001f4af) list_medium_line_plain_t3_t

0x0c9e,	// (0x00010459) list_medium_line_x2_t2_g2_g1_ParamLimits

0x0c9e,	// (0x00010459) list_medium_line_x2_t2_g2_g1

0x0cb6,	// (0x00010471) list_medium_line_x2_t2_g2_g2_ParamLimits

0x0cb6,	// (0x00010471) list_medium_line_x2_t2_g2_g2

0x0001,

0xf242,	// (0x0001e9fd) list_medium_line_x2_t2_g2_g_ParamLimits

0xf242,	// (0x0001e9fd) list_medium_line_x2_t2_g2_g

0x206b,	// (0x00011826) list_medium_line_x2_t2_g2_t1_ParamLimits

0x206b,	// (0x00011826) list_medium_line_x2_t2_g2_t1

0x0ceb,	// (0x000104a6) list_medium_line_x2_t2_g2_t2_ParamLimits

0x0ceb,	// (0x000104a6) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcfb,	// (0x0001f4b6) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcfb,	// (0x0001f4b6) list_medium_line_x2_t2_g2_t

0x0c9e,	// (0x00010459) list_medium_line_x2_t4_g2_g1_ParamLimits

0x0c9e,	// (0x00010459) list_medium_line_x2_t4_g2_g1

0x0cb6,	// (0x00010471) list_medium_line_x2_t4_g2_g2_ParamLimits

0x0cb6,	// (0x00010471) list_medium_line_x2_t4_g2_g2

0x0001,

0xf242,	// (0x0001e9fd) list_medium_line_x2_t4_g2_g_ParamLimits

0xf242,	// (0x0001e9fd) list_medium_line_x2_t4_g2_g

0x7f37,	// (0x000176f2) list_medium_line_x2_t4_g2_t1_ParamLimits

0x7f37,	// (0x000176f2) list_medium_line_x2_t4_g2_t1

0x7f51,	// (0x0001770c) list_medium_line_x2_t4_g2_t2_ParamLimits

0x7f51,	// (0x0001770c) list_medium_line_x2_t4_g2_t2

0x7f67,	// (0x00017722) list_medium_line_x2_t4_g2_t3_ParamLimits

0x7f67,	// (0x00017722) list_medium_line_x2_t4_g2_t3

0x0ceb,	// (0x000104a6) list_medium_line_x2_t4_g2_t4_ParamLimits

0x0ceb,	// (0x000104a6) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd00,	// (0x0001f4bb) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd00,	// (0x0001f4bb) list_medium_line_x2_t4_g2_t

0x7f7c,	// (0x00017737) list_medium_line_t3_right_iconx2_g1

0x7dc3,	// (0x0001757e) list_medium_line_t3_right_iconx2_g2

0x7f84,	// (0x0001773f) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd09,	// (0x0001f4c4) list_medium_line_t3_right_iconx2_g

0x7f8e,	// (0x00017749) list_medium_line_t3_right_iconx2_t1

0x7f9e,	// (0x00017759) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd10,	// (0x0001f4cb) list_medium_line_t3_right_iconx2_t

0x0c9e,	// (0x00010459) list_medium_line_x3_t4_g4_g1_ParamLimits

0x0c9e,	// (0x00010459) list_medium_line_x3_t4_g4_g1

0x0caa,	// (0x00010465) list_medium_line_x3_t4_g4_g2_ParamLimits

0x0caa,	// (0x00010465) list_medium_line_x3_t4_g4_g2

0x0d52,	// (0x0001050d) list_medium_line_x3_t4_g4_g3_ParamLimits

0x0d52,	// (0x0001050d) list_medium_line_x3_t4_g4_g3

0x7fac,	// (0x00017767) list_medium_line_x3_t4_g4_g4_ParamLimits

0x7fac,	// (0x00017767) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd15,	// (0x0001f4d0) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd15,	// (0x0001f4d0) list_medium_line_x3_t4_g4_g

0x7fb8,	// (0x00017773) list_medium_line_x3_t4_g4_t1_ParamLimits

0x7fb8,	// (0x00017773) list_medium_line_x3_t4_g4_t1

0x7fcf,	// (0x0001778a) list_medium_line_x3_t4_g4_t2_ParamLimits

0x7fcf,	// (0x0001778a) list_medium_line_x3_t4_g4_t2

0x7fe8,	// (0x000177a3) list_medium_line_x3_t4_g4_t3_ParamLimits

0x7fe8,	// (0x000177a3) list_medium_line_x3_t4_g4_t3

0x7ffd,	// (0x000177b8) list_medium_line_x3_t4_g4_t4_ParamLimits

0x7ffd,	// (0x000177b8) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd1e,	// (0x0001f4d9) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd1e,	// (0x0001f4d9) list_medium_line_x3_t4_g4_t

0x801a,	// (0x000177d5) list_single_dyc_row_text_pane_t1_ParamLimits

0x801a,	// (0x000177d5) list_single_dyc_row_text_pane_t1

0x8063,	// (0x0001781e) list_single_dyc_row_text_pane_t2_ParamLimits

0x8063,	// (0x0001781e) list_single_dyc_row_text_pane_t2

0xe4fd,	// (0x0001dcb8) list_single_dyc_row_text_pane_t3_ParamLimits

0xe4fd,	// (0x0001dcb8) list_single_dyc_row_text_pane_t3

0x0005,

0xfd27,	// (0x0001f4e2) list_single_dyc_row_text_pane_t_ParamLimits

0xfd27,	// (0x0001f4e2) list_single_dyc_row_text_pane_t

0xe521,	// (0x0001dcdc) list_single_dyc_row_pane_g1_ParamLimits

0xe521,	// (0x0001dcdc) list_single_dyc_row_pane_g1

0xe52d,	// (0x0001dce8) list_single_dyc_row_pane_g2_ParamLimits

0xe52d,	// (0x0001dce8) list_single_dyc_row_pane_g2

0xe539,	// (0x0001dcf4) list_single_dyc_row_pane_g3_ParamLimits

0xe539,	// (0x0001dcf4) list_single_dyc_row_pane_g3

0xe545,	// (0x0001dd00) list_single_dyc_row_pane_g4_ParamLimits

0xe545,	// (0x0001dd00) list_single_dyc_row_pane_g4

0x0003,

0xfd34,	// (0x0001f4ef) list_single_dyc_row_pane_g_ParamLimits

0xfd34,	// (0x0001f4ef) list_single_dyc_row_pane_g

0xe551,	// (0x0001dd0c) list_single_dyc_row_text_pane_ParamLimits

0xe551,	// (0x0001dd0c) list_single_dyc_row_text_pane

0x9647,	// (0x00018e02) bg_sp_fs_scroll_pane

0xe570,	// (0x0001dd2b) thumb_sp_fs_scroll_pane

0x652c,	// (0x00015ce7) list_medium_line_g1_ParamLimits

0x652c,	// (0x00015ce7) list_medium_line_g1

0x8198,	// (0x00017953) list_medium_line_t1_ParamLimits

0x8198,	// (0x00017953) list_medium_line_t1

0x0c9e,	// (0x00010459) list_medium_line_x2_g1_ParamLimits

0x0c9e,	// (0x00010459) list_medium_line_x2_g1

0x0caa,	// (0x00010465) list_medium_line_x2_g2_ParamLimits

0x0caa,	// (0x00010465) list_medium_line_x2_g2

0x0001,

0xfd3d,	// (0x0001f4f8) list_medium_line_x2_g_ParamLimits

0xfd3d,	// (0x0001f4f8) list_medium_line_x2_g

0xe579,	// (0x0001dd34) list_medium_line_x2_t1_ParamLimits

0xe579,	// (0x0001dd34) list_medium_line_x2_t1

0x0c9e,	// (0x00010459) list_medium_line_x3_g1_ParamLimits

0x0c9e,	// (0x00010459) list_medium_line_x3_g1

0x0caa,	// (0x00010465) list_medium_line_x3_g2_ParamLimits

0x0caa,	// (0x00010465) list_medium_line_x3_g2

0x0001,

0xfd3d,	// (0x0001f4f8) list_medium_line_x3_g_ParamLimits

0xfd3d,	// (0x0001f4f8) list_medium_line_x3_g

0xe579,	// (0x0001dd34) list_medium_line_x3_t1_ParamLimits

0xe579,	// (0x0001dd34) list_medium_line_x3_t1

0xe58f,	// (0x0001dd4a) thumb_sp_fs_scroll_pane_g1

0xe598,	// (0x0001dd53) thumb_sp_fs_scroll_pane_g2

0xe5a1,	// (0x0001dd5c) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd42,	// (0x0001f4fd) thumb_sp_fs_scroll_pane_g

0xe58f,	// (0x0001dd4a) bg_sp_fs_scroll_pane_g1

0xe598,	// (0x0001dd53) bg_sp_fs_scroll_pane_g2

0xe5a1,	// (0x0001dd5c) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd42,	// (0x0001f4fd) bg_sp_fs_scroll_pane_g

0x0c9e,	// (0x00010459) list_medium_line_x2_t3_g4_g1_ParamLimits

0x0c9e,	// (0x00010459) list_medium_line_x2_t3_g4_g1

0x0d46,	// (0x00010501) list_medium_line_x2_t3_g4_g2_ParamLimits

0x0d46,	// (0x00010501) list_medium_line_x2_t3_g4_g2

0x0caa,	// (0x00010465) list_medium_line_x2_t3_g4_g3_ParamLimits

0x0caa,	// (0x00010465) list_medium_line_x2_t3_g4_g3

0x0cb6,	// (0x00010471) list_medium_line_x2_t3_g4_g4_ParamLimits

0x0cb6,	// (0x00010471) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2be,	// (0x0001ea79) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2be,	// (0x0001ea79) list_medium_line_x2_t3_g4_g

0x81ad,	// (0x00017968) list_medium_line_x2_t3_g4_t1_ParamLimits

0x81ad,	// (0x00017968) list_medium_line_x2_t3_g4_t1

0x81c3,	// (0x0001797e) list_medium_line_x2_t3_g4_t2_ParamLimits

0x81c3,	// (0x0001797e) list_medium_line_x2_t3_g4_t2

0x0ceb,	// (0x000104a6) list_medium_line_x2_t3_g4_t3_ParamLimits

0x0ceb,	// (0x000104a6) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd49,	// (0x0001f504) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd49,	// (0x0001f504) list_medium_line_x2_t3_g4_t

0x652c,	// (0x00015ce7) list_medium_line_g2_g1_ParamLimits

0x652c,	// (0x00015ce7) list_medium_line_g2_g1

0x6538,	// (0x00015cf3) list_medium_line_g2_g2_ParamLimits

0x6538,	// (0x00015cf3) list_medium_line_g2_g2

0x0001,

0xfa00,	// (0x0001f1bb) list_medium_line_g2_g_ParamLimits

0xfa00,	// (0x0001f1bb) list_medium_line_g2_g

0x81dd,	// (0x00017998) list_medium_line_g2_t1_ParamLimits

0x81dd,	// (0x00017998) list_medium_line_g2_t1

0x652c,	// (0x00015ce7) list_medium_line_t3_g2_g1_ParamLimits

0x652c,	// (0x00015ce7) list_medium_line_t3_g2_g1

0x6538,	// (0x00015cf3) list_medium_line_t3_g2_g2_ParamLimits

0x6538,	// (0x00015cf3) list_medium_line_t3_g2_g2

0x0001,

0xfa00,	// (0x0001f1bb) list_medium_line_t3_g2_g_ParamLimits

0xfa00,	// (0x0001f1bb) list_medium_line_t3_g2_g

0x81f2,	// (0x000179ad) list_medium_line_t3_g2_t1_ParamLimits

0x81f2,	// (0x000179ad) list_medium_line_t3_g2_t1

0x820c,	// (0x000179c7) list_medium_line_t3_g2_t2_ParamLimits

0x820c,	// (0x000179c7) list_medium_line_t3_g2_t2

0x8222,	// (0x000179dd) list_medium_line_t3_g2_t3_ParamLimits

0x8222,	// (0x000179dd) list_medium_line_t3_g2_t3

0x0002,

0xfd50,	// (0x0001f50b) list_medium_line_t3_g2_t_ParamLimits

0xfd50,	// (0x0001f50b) list_medium_line_t3_g2_t

0x7dc3,	// (0x0001757e) list_medium_line_right_icon_g1

0x823c,	// (0x000179f7) list_medium_line_right_icon_t1

0x652c,	// (0x00015ce7) list_medium_line_t2_g1_ParamLimits

0x652c,	// (0x00015ce7) list_medium_line_t2_g1

0x824a,	// (0x00017a05) list_medium_line_t2_t1_ParamLimits

0x824a,	// (0x00017a05) list_medium_line_t2_t1

0x8264,	// (0x00017a1f) list_medium_line_t2_t2_ParamLimits

0x8264,	// (0x00017a1f) list_medium_line_t2_t2

0x0001,

0xfd57,	// (0x0001f512) list_medium_line_t2_t_ParamLimits

0xfd57,	// (0x0001f512) list_medium_line_t2_t

0x652c,	// (0x00015ce7) list_medium_line_t3_g1_ParamLimits

0x652c,	// (0x00015ce7) list_medium_line_t3_g1

0x827d,	// (0x00017a38) list_medium_line_t3_t1_ParamLimits

0x827d,	// (0x00017a38) list_medium_line_t3_t1

0x8297,	// (0x00017a52) list_medium_line_t3_t2_ParamLimits

0x8297,	// (0x00017a52) list_medium_line_t3_t2

0x82ad,	// (0x00017a68) list_medium_line_t3_t3_ParamLimits

0x82ad,	// (0x00017a68) list_medium_line_t3_t3

0x0002,

0xfd5c,	// (0x0001f517) list_medium_line_t3_t_ParamLimits

0xfd5c,	// (0x0001f517) list_medium_line_t3_t

0x652c,	// (0x00015ce7) list_medium_line_g3_g1_ParamLimits

0x652c,	// (0x00015ce7) list_medium_line_g3_g1

0x82c2,	// (0x00017a7d) list_medium_line_g3_g2_ParamLimits

0x82c2,	// (0x00017a7d) list_medium_line_g3_g2

0x6538,	// (0x00015cf3) list_medium_line_g3_g3_ParamLimits

0x6538,	// (0x00015cf3) list_medium_line_g3_g3

0x0002,

0xfd63,	// (0x0001f51e) list_medium_line_g3_g_ParamLimits

0xfd63,	// (0x0001f51e) list_medium_line_g3_g

0x82ce,	// (0x00017a89) list_medium_line_g3_t1_ParamLimits

0x82ce,	// (0x00017a89) list_medium_line_g3_t1

0x652c,	// (0x00015ce7) list_medium_line_t2_g3_g1_ParamLimits

0x652c,	// (0x00015ce7) list_medium_line_t2_g3_g1

0x82c2,	// (0x00017a7d) list_medium_line_t2_g3_g2_ParamLimits

0x82c2,	// (0x00017a7d) list_medium_line_t2_g3_g2

0x6538,	// (0x00015cf3) list_medium_line_t2_g3_g3_ParamLimits

0x6538,	// (0x00015cf3) list_medium_line_t2_g3_g3

0x0002,

0xfd63,	// (0x0001f51e) list_medium_line_t2_g3_g_ParamLimits

0xfd63,	// (0x0001f51e) list_medium_line_t2_g3_g

0x82e3,	// (0x00017a9e) list_medium_line_t2_g3_t1_ParamLimits

0x82e3,	// (0x00017a9e) list_medium_line_t2_g3_t1

0x82fd,	// (0x00017ab8) list_medium_line_t2_g3_t2_ParamLimits

0x82fd,	// (0x00017ab8) list_medium_line_t2_g3_t2

0x0001,

0xfd6a,	// (0x0001f525) list_medium_line_t2_g3_t_ParamLimits

0xfd6a,	// (0x0001f525) list_medium_line_t2_g3_t

0x652c,	// (0x00015ce7) list_medium_line_t3_g3_g1_ParamLimits

0x652c,	// (0x00015ce7) list_medium_line_t3_g3_g1

0x82c2,	// (0x00017a7d) list_medium_line_t3_g3_g2_ParamLimits

0x82c2,	// (0x00017a7d) list_medium_line_t3_g3_g2

0x6538,	// (0x00015cf3) list_medium_line_t3_g3_g3_ParamLimits

0x6538,	// (0x00015cf3) list_medium_line_t3_g3_g3

0x0002,

0xfd63,	// (0x0001f51e) list_medium_line_t3_g3_g_ParamLimits

0xfd63,	// (0x0001f51e) list_medium_line_t3_g3_g

0x8317,	// (0x00017ad2) list_medium_line_t3_g3_t1_ParamLimits

0x8317,	// (0x00017ad2) list_medium_line_t3_g3_t1

0x8330,	// (0x00017aeb) list_medium_line_t3_g3_t2_ParamLimits

0x8330,	// (0x00017aeb) list_medium_line_t3_g3_t2

0x8346,	// (0x00017b01) list_medium_line_t3_g3_t3_ParamLimits

0x8346,	// (0x00017b01) list_medium_line_t3_g3_t3

0x0002,

0xfd6f,	// (0x0001f52a) list_medium_line_t3_g3_t_ParamLimits

0xfd6f,	// (0x0001f52a) list_medium_line_t3_g3_t

0x7f7c,	// (0x00017737) list_medium_line_right_iconx2_g1

0x7dc3,	// (0x0001757e) list_medium_line_right_iconx2_g2

0x0001,

0xfd76,	// (0x0001f531) list_medium_line_right_iconx2_g

0x8360,	// (0x00017b1b) list_medium_line_right_iconx2_t1

0x7f7c,	// (0x00017737) list_medium_line_t2_right_iconx2_g1

0x7dc3,	// (0x0001757e) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd76,	// (0x0001f531) list_medium_line_t2_right_iconx2_g

0x836e,	// (0x00017b29) list_medium_line_t2_right_iconx2_t1

0x837e,	// (0x00017b39) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd7b,	// (0x0001f536) list_medium_line_t2_right_iconx2_t

0x838e,	// (0x00017b49) list_medium_line_x4_t4_t1

0x839c,	// (0x00017b57) list_medium_line_x4_t4_t2

0x83ac,	// (0x00017b67) list_medium_line_x4_t4_t3

0x83bc,	// (0x00017b77) list_medium_line_x4_t4_t4

0x0003,

0xfd80,	// (0x0001f53b) list_medium_line_x4_t4_t

0x840d,	// (0x00017bc8) tport_appsw_pane_ParamLimits

0x840d,	// (0x00017bc8) tport_appsw_pane

0x8424,	// (0x00017bdf) tport_contact_pane_ParamLimits

0x8424,	// (0x00017bdf) tport_contact_pane

0x843c,	// (0x00017bf7) tport_listscroll_pane_ParamLimits

0x843c,	// (0x00017bf7) tport_listscroll_pane

0x8450,	// (0x00017c0b) cell_tport_appsw_pane_ParamLimits

0x8450,	// (0x00017c0b) cell_tport_appsw_pane

0xd2d4,	// (0x0001ca8f) tport_appsw_pane_g1_ParamLimits

0xd2d4,	// (0x0001ca8f) tport_appsw_pane_g1

0xe5aa,	// (0x0001dd65) tport_contact_pane_g1

0xe5b3,	// (0x0001dd6e) tport_contact_pane_t1

0xe5c1,	// (0x0001dd7c) tport_contact_pane_t2

0x0001,

0xfd89,	// (0x0001f544) tport_contact_pane_t

0xe5cf,	// (0x0001dd8a) list_tport_pane

0xe5d8,	// (0x0001dd93) scroll_pane_cp_030

0x849a,	// (0x00017c55) cell_tport_appsw_pane_g1

0x84aa,	// (0x00017c65) cell_tport_appsw_pane_t1

0x84b8,	// (0x00017c73) grid_highlight_pane_cp019

0x84c0,	// (0x00017c7b) list_tport_double_graphic_pane_ParamLimits

0x84c0,	// (0x00017c7b) list_tport_double_graphic_pane

0x96bc,	// (0x00018e77) list_highlight_pane_cp023_ParamLimits

0x96bc,	// (0x00018e77) list_highlight_pane_cp023

0x84d7,	// (0x00017c92) list_tport_double_graphic_pane_g1_ParamLimits

0x84d7,	// (0x00017c92) list_tport_double_graphic_pane_g1

0x84e4,	// (0x00017c9f) list_tport_double_graphic_pane_t1_ParamLimits

0x84e4,	// (0x00017c9f) list_tport_double_graphic_pane_t1

0x84f9,	// (0x00017cb4) list_tport_double_graphic_pane_t2_ParamLimits

0x84f9,	// (0x00017cb4) list_tport_double_graphic_pane_t2

0x0001,

0xfd95,	// (0x0001f550) list_tport_double_graphic_pane_t_ParamLimits

0xfd95,	// (0x0001f550) list_tport_double_graphic_pane_t

0x9647,	// (0x00018e02) main_cale_note_pane

0x5b8a,	// (0x00015345) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x5b8a,	// (0x00015345) cell_vitu2_function_top_wide_pane_cp01

0x77c0,	// (0x00016f7b) wait_bar_pane_cp05_ParamLimits

0x96bc,	// (0x00018e77) listscroll_cmail_pane

0xe5e1,	// (0x0001dd9c) list_cmail_pane

0x850b,	// (0x00017cc6) list_cmail_body_pane

0x8522,	// (0x00017cdd) list_single_cmail_header_caption_pane

0xe5f1,	// (0x0001ddac) list_single_cmail_header_detail_pane_ParamLimits

0xe5f1,	// (0x0001ddac) list_single_cmail_header_detail_pane

0xe623,	// (0x0001ddde) list_single_cmail_header_caption_pane_t1

0x853f,	// (0x00017cfa) list_single_cmail_header_detail_pane_g1_ParamLimits

0x853f,	// (0x00017cfa) list_single_cmail_header_detail_pane_g1

0xe63a,	// (0x0001ddf5) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe63a,	// (0x0001ddf5) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd9a,	// (0x0001f555) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd9a,	// (0x0001f555) list_single_cmail_header_detail_pane_g

0xe653,	// (0x0001de0e) list_single_cmail_header_detail_pane_t1_ParamLimits

0xe653,	// (0x0001de0e) list_single_cmail_header_detail_pane_t1

0xe6b3,	// (0x0001de6e) list_single_cmail_header_editor_pane_bg_ParamLimits

0xe6b3,	// (0x0001de6e) list_single_cmail_header_editor_pane_bg

0xe0f9,	// (0x0001d8b4) list_cmail_body_pane_g1

0xe6ca,	// (0x0001de85) list_cmail_body_pane_t1

0xd323,	// (0x0001cade) list_single_cmail_header_editor_pane_bg_g1

0xa2ed,	// (0x00019aa8) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd333,	// (0x0001caee) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd32b,	// (0x0001cae6) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd58d,	// (0x0001cd48) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd353,	// (0x0001cb0e) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd343,	// (0x0001cafe) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd34b,	// (0x0001cb06) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xa2cd,	// (0x00019a88) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8557,	// (0x00017d12) calenote_gesture_pane_ParamLimits

0x8557,	// (0x00017d12) calenote_gesture_pane

0x8577,	// (0x00017d32) calenote_window_pane_ParamLimits

0x8577,	// (0x00017d32) calenote_window_pane

0xe6d8,	// (0x0001de93) popup_note_window_cp01

0x8593,	// (0x00017d4e) calenote_swipe_1_pane_ParamLimits

0x8593,	// (0x00017d4e) calenote_swipe_1_pane

0x7d63,	// (0x0001751e) calenote_swipe_2_pane_ParamLimits

0x7d63,	// (0x0001751e) calenote_swipe_2_pane

0xe313,	// (0x0001dace) calenote_swipe_1_pane_g1_ParamLimits

0xe313,	// (0x0001dace) calenote_swipe_1_pane_g1

0xe320,	// (0x0001dadb) calenote_swipe_1_pane_g2_ParamLimits

0xe320,	// (0x0001dadb) calenote_swipe_1_pane_g2

0x0001,

0xfcc3,	// (0x0001f47e) calenote_swipe_1_pane_g_ParamLimits

0xfcc3,	// (0x0001f47e) calenote_swipe_1_pane_g

0xe6ea,	// (0x0001dea5) calenote_swipe_1_pane_t1_ParamLimits

0xe6ea,	// (0x0001dea5) calenote_swipe_1_pane_t1

0xe313,	// (0x0001dace) calenote_swipe_2_pane_g1_ParamLimits

0xe313,	// (0x0001dace) calenote_swipe_2_pane_g1

0xe709,	// (0x0001dec4) calenote_swipe_2_pane_g2_ParamLimits

0xe709,	// (0x0001dec4) calenote_swipe_2_pane_g2

0x0001,

0xfda6,	// (0x0001f561) calenote_swipe_2_pane_g_ParamLimits

0xfda6,	// (0x0001f561) calenote_swipe_2_pane_g

0xe715,	// (0x0001ded0) calenote_swipe_2_pane_t1_ParamLimits

0xe715,	// (0x0001ded0) calenote_swipe_2_pane_t1

0x9647,	// (0x00018e02) main_mup_navstr_pane

0x4779,	// (0x00013f34) main_mup3_pane_t7_ParamLimits

0x4779,	// (0x00013f34) main_mup3_pane_t7

0xced7,	// (0x0001c692) main_mp4_pane_g6_ParamLimits

0xced7,	// (0x0001c692) main_mp4_pane_g6

0xd128,	// (0x0001c8e3) main_image3_pane_t4_ParamLimits

0xd128,	// (0x0001c8e3) main_image3_pane_t4

0x85a8,	// (0x00017d63) popup_navstr_preview_pane_ParamLimits

0x85a8,	// (0x00017d63) popup_navstr_preview_pane

0x85b8,	// (0x00017d73) scroll_navstr_pane_ParamLimits

0x85b8,	// (0x00017d73) scroll_navstr_pane

0x9647,	// (0x00018e02) bg_popup_preview_window_pane_cp04

0xe73c,	// (0x0001def7) popup_navstr_preview_pane_t1

0x85cc,	// (0x00017d87) scroll_navstr_pane_g1_ParamLimits

0x85cc,	// (0x00017d87) scroll_navstr_pane_g1

0x85e0,	// (0x00017d9b) scroll_navstr_pane_t1_ParamLimits

0x85e0,	// (0x00017d9b) scroll_navstr_pane_t1

0xe6e1,	// (0x0001de9c) bg_button_pane_cp014

0xe6e1,	// (0x0001de9c) bg_button_pane_cp030

0x7c41,	// (0x000173fc) list_double_fisheye_pane_g4_ParamLimits

0x7c41,	// (0x000173fc) list_double_fisheye_pane_g4

0x7c4d,	// (0x00017408) list_double_fisheye_pane_g5_ParamLimits

0x7c4d,	// (0x00017408) list_double_fisheye_pane_g5

0xd627,	// (0x0001cde2) sp_fs_scroll_pane_cp03

0xe42c,	// (0x0001dbe7) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe438,	// (0x0001dbf3) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfce0,	// (0x0001f49b) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe444,	// (0x0001dbff) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe5e9,	// (0x0001dda4) sp_fs_scroll_pane_cp02

0x9fcd,	// (0x00019788) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x9fcd,	// (0x00019788) popup_sp_fs_calendar_preview_list_single_pane

0x9647,	// (0x00018e02) main_cam6_pano_pane

0x96bc,	// (0x00018e77) main_mup3_pane_ParamLimits

0x9647,	// (0x00018e02) main_phacti_pane

0x7691,	// (0x00016e4c) bg_button_pane_cp11

0x76ab,	// (0x00016e66) main_mobtv_info_pane_g2_ParamLimits

0x76ab,	// (0x00016e66) main_mobtv_info_pane_g2

0x0001,

0xfc40,	// (0x0001f3fb) main_mobtv_info_pane_g_ParamLimits

0xfc40,	// (0x0001f3fb) main_mobtv_info_pane_g

0x7888,	// (0x00017043) sc_clock_pane_t5_ParamLimits

0x7888,	// (0x00017043) sc_clock_pane_t5

0x7abc,	// (0x00017277) main_radioblah_pane_g1_ParamLimits

0xe25f,	// (0x0001da1a) main_radioblah_pane_t3_ParamLimits

0xe25f,	// (0x0001da1a) main_radioblah_pane_t3

0xe277,	// (0x0001da32) main_radioblah_pane_t4_ParamLimits

0xe277,	// (0x0001da32) main_radioblah_pane_t4

0x7ae4,	// (0x0001729f) main_radioblah_text_pane_ParamLimits

0x7ae4,	// (0x0001729f) main_radioblah_text_pane

0x7af6,	// (0x000172b1) main_radioblah_info_pane_g1_ParamLimits

0x7b8f,	// (0x0001734a) main_radioblah_info_pane_t4_ParamLimits

0x7b8f,	// (0x0001734a) main_radioblah_info_pane_t4

0x96bc,	// (0x00018e77) main_sp_fs_calendar_pane

0x85f7,	// (0x00017db2) main_phacti_pane_g1

0x85ff,	// (0x00017dba) phacti_note_pane_ParamLimits

0x85ff,	// (0x00017dba) phacti_note_pane

0xe753,	// (0x0001df0e) phacti_term_pane_ParamLimits

0xe753,	// (0x0001df0e) phacti_term_pane

0xe768,	// (0x0001df23) phacti_note_pane_t1_ParamLimits

0xe768,	// (0x0001df23) phacti_note_pane_t1

0xe77f,	// (0x0001df3a) phacti_term_pane_g1

0xe787,	// (0x0001df42) phacti_term_pane_t1_ParamLimits

0xe787,	// (0x0001df42) phacti_term_pane_t1

0xe7b1,	// (0x0001df6c) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe7b9,	// (0x0001df74) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdb0,	// (0x0001f56b) popup_sp_fs_calendar_preview_list_single_pane_g

0xe7c1,	// (0x0001df7c) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe7c1,	// (0x0001df7c) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe7d7,	// (0x0001df92) aid_popup_sp_fs_bg_corner_pane

0xc573,	// (0x0001bd2e) popup_sp_fs_calendar_preview_bg_pane_g1

0x9647,	// (0x00018e02) popup_sp_fs_calendar_preview_bg_pane

0xe7df,	// (0x0001df9a) popup_sp_fs_calendar_preview_list_pane

0xc029,	// (0x0001b7e4) bg_main_sp_fs_cale_pane_ParamLimits

0xc029,	// (0x0001b7e4) bg_main_sp_fs_cale_pane

0xe7f0,	// (0x0001dfab) listscroll_cale_mrui_pane_ParamLimits

0xe7f0,	// (0x0001dfab) listscroll_cale_mrui_pane

0xe805,	// (0x0001dfc0) listscroll_sp_fs_schedule_track_pane

0xe80e,	// (0x0001dfc9) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe80e,	// (0x0001dfc9) main_sp_fs_ctrlbar_pane_cp01

0xe821,	// (0x0001dfdc) main_sp_fs_ribbon_pane

0xe829,	// (0x0001dfe4) popup_sp_fs_cale_preview_window

0x8674,	// (0x00017e2f) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8674,	// (0x00017e2f) list_single_sp_fs_schedule_track_pane

0x96bc,	// (0x00018e77) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x96bc,	// (0x00018e77) bg_sp_fs_highlight_list_pane_cp03

0x8688,	// (0x00017e43) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8688,	// (0x00017e43) list_single_sp_fs_schedule_track_pane_g1

0x8694,	// (0x00017e4f) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8694,	// (0x00017e4f) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdb5,	// (0x0001f570) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdb5,	// (0x0001f570) list_single_sp_fs_schedule_track_pane_g

0x86a0,	// (0x00017e5b) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x86a0,	// (0x00017e5b) list_single_sp_fs_schedule_track_pane_t1

0x86c2,	// (0x00017e7d) sp_fs_schedule_track_pane_ParamLimits

0x86c2,	// (0x00017e7d) sp_fs_schedule_track_pane

0xe83b,	// (0x0001dff6) sp_fs_schedule_track_pane_g1

0xe843,	// (0x0001dffe) sp_fs_schedule_track_pane_g2

0xe84b,	// (0x0001e006) sp_fs_schedule_track_pane_g3

0xe853,	// (0x0001e00e) sp_fs_schedule_track_pane_g4

0xe85b,	// (0x0001e016) sp_fs_schedule_track_pane_g5

0x0004,

0xfdba,	// (0x0001f575) sp_fs_schedule_track_pane_g

0xd323,	// (0x0001cade) bg_sp_fs_schedule_viewer_highlight_g1

0xa2ed,	// (0x00019aa8) bg_sp_fs_schedule_viewer_highlight_g2

0xd32b,	// (0x0001cae6) bg_sp_fs_schedule_viewer_highlight_g3

0xd333,	// (0x0001caee) bg_sp_fs_schedule_viewer_highlight_g4

0xd58d,	// (0x0001cd48) bg_sp_fs_schedule_viewer_highlight_g5

0xd343,	// (0x0001cafe) bg_sp_fs_schedule_viewer_highlight_g6

0xd34b,	// (0x0001cb06) bg_sp_fs_schedule_viewer_highlight_g7

0xd353,	// (0x0001cb0e) bg_sp_fs_schedule_viewer_highlight_g8

0xa2cd,	// (0x00019a88) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdc5,	// (0x0001f580) bg_sp_fs_schedule_viewer_highlight_g

0x9647,	// (0x00018e02) bg_main_sp_fs_ribbon_pane

0x86d7,	// (0x00017e92) main_sp_fs_ribbon_pane_g1

0xe863,	// (0x0001e01e) main_sp_fs_ribbon_pane_t1

0x86e0,	// (0x00017e9b) main_sp_fs_ribbon_pane_t2

0xe872,	// (0x0001e02d) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdd8,	// (0x0001f593) main_sp_fs_ribbon_pane_t

0xe881,	// (0x0001e03c) main_sp_fs_ribbon_scheduler_pane

0xe889,	// (0x0001e044) bg_main_sp_fs_ribbon_pane_g1

0xe892,	// (0x0001e04d) bg_main_sp_fs_ribbon_pane_g2

0xe89b,	// (0x0001e056) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfddf,	// (0x0001f59a) bg_main_sp_fs_ribbon_pane_g

0xe8a3,	// (0x0001e05e) main_sp_fs_ribbon_scheduler_pane_g1

0xe8ac,	// (0x0001e067) main_sp_fs_ribbon_scheduler_pane_g2

0xe8b5,	// (0x0001e070) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfde6,	// (0x0001f5a1) main_sp_fs_ribbon_scheduler_pane_g

0xe8be,	// (0x0001e079) list_cale_mrui_pane

0x86ef,	// (0x00017eaa) sp_fs_scroll_pane_cp07_ParamLimits

0x86ef,	// (0x00017eaa) sp_fs_scroll_pane_cp07

0x870b,	// (0x00017ec6) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x870b,	// (0x00017ec6) bg_sp_fs_schedule_viewer_highlight

0xe8cb,	// (0x0001e086) list_single_sp_fs_schedule_track_pane_cp01

0xe8d3,	// (0x0001e08e) list_sp_fs_schedule_track_pane

0xe8db,	// (0x0001e096) sp_fs_scroll_pane_cp06_ParamLimits

0xe8db,	// (0x0001e096) sp_fs_scroll_pane_cp06

0xc573,	// (0x0001bd2e) bgmain_sp_fs_calendar_pane_g1

0x871d,	// (0x00017ed8) list_single_cale_mrui_pane_ParamLimits

0x871d,	// (0x00017ed8) list_single_cale_mrui_pane

0xe8ed,	// (0x0001e0a8) list_single_cale_mrui_row_pane_ParamLimits

0xe8ed,	// (0x0001e0a8) list_single_cale_mrui_row_pane

0xe8fa,	// (0x0001e0b5) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe8fa,	// (0x0001e0b5) list_single_cale_mrui_row_pane_g1

0xe93f,	// (0x0001e0fa) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe93f,	// (0x0001e0fa) list_single_cale_mrui_row_pane_t1

0x8740,	// (0x00017efb) list_single_cale_mrui_row_pane_t2_ParamLimits

0x8740,	// (0x00017efb) list_single_cale_mrui_row_pane_t2

0xe951,	// (0x0001e10c) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe951,	// (0x0001e10c) list_single_cale_mrui_row_pane_t3

0xe980,	// (0x0001e13b) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe980,	// (0x0001e13b) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf4,	// (0x0001f5af) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf4,	// (0x0001f5af) list_single_cale_mrui_row_pane_t

0x87a6,	// (0x00017f61) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x87a6,	// (0x00017f61) list_single_cmail_header_editor_pane_bg_cp01

0x87ca,	// (0x00017f85) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x87ca,	// (0x00017f85) list_single_cmail_header_editor_pane_bg_cp02

0x87ea,	// (0x00017fa5) main_radioblah_text_pane_t1_ParamLimits

0x87ea,	// (0x00017fa5) main_radioblah_text_pane_t1

0xe9b1,	// (0x0001e16c) cam6_indi_pane_cp01

0xe9b9,	// (0x0001e174) cam6_mode_pane_cp01

0xe9c1,	// (0x0001e17c) cam6_pano_pane

0xe9ca,	// (0x0001e185) cam6_zoom_pane_cp01

0xe9d4,	// (0x0001e18f) cam6_pano_image_pane

0xe9dd,	// (0x0001e198) cam6_pano_pane_g1

0xe0f9,	// (0x0001d8b4) cam6_pano_pane_g2

0xe9e6,	// (0x0001e1a1) cam6_pano_pane_g3

0xe9ef,	// (0x0001e1aa) cam6_pano_pane_g4

0xcb16,	// (0x0001c2d1) cam6_pano_pane_g5

0xe9f8,	// (0x0001e1b3) cam6_pano_pane_g6

0xea00,	// (0x0001e1bb) cam6_pano_pane_g7

0xea08,	// (0x0001e1c3) cam6_pano_pane_g8

0xea11,	// (0x0001e1cc) cam6_pano_pane_g9

0x0008,

0xfdfd,	// (0x0001f5b8) cam6_pano_pane_g

0x9647,	// (0x00018e02) main_browser_tag_pane

0xe734,	// (0x0001deef) grid_navstr_albumart_pane

0xea1c,	// (0x0001e1d7) cell_navstr_albumart_pane_ParamLimits

0xea1c,	// (0x0001e1d7) cell_navstr_albumart_pane

0xea38,	// (0x0001e1f3) cell_navstr_albumart_pane_g1

0xbe36,	// (0x0001b5f1) cell_navstr_albumart_pane_g2

0xbe46,	// (0x0001b601) cell_navstr_albumart_pane_g3

0xbe3e,	// (0x0001b5f9) cell_navstr_albumart_pane_g4

0x0003,

0xfe10,	// (0x0001f5cb) cell_navstr_albumart_pane_g

0x8805,	// (0x00017fc0) bt_list_pane_ParamLimits

0x8805,	// (0x00017fc0) bt_list_pane

0x881b,	// (0x00017fd6) bt_list_pane_t1

0x882a,	// (0x00017fe5) bt_list_pane_t2

0x0001,

0xfe19,	// (0x0001f5d4) bt_list_pane_t

0x9647,	// (0x00018e02) main_cale_prevew_pane

0x8839,	// (0x00017ff4) popup_cale_preview_window_ParamLimits

0x8839,	// (0x00017ff4) popup_cale_preview_window

0x96bc,	// (0x00018e77) bg_popup_preview_window_pane_cp05_ParamLimits

0x96bc,	// (0x00018e77) bg_popup_preview_window_pane_cp05

0xea40,	// (0x0001e1fb) list_cale_preview_pane_ParamLimits

0xea40,	// (0x0001e1fb) list_cale_preview_pane

0x8856,	// (0x00018011) list_double_cale_preview_pane_ParamLimits

0x8856,	// (0x00018011) list_double_cale_preview_pane

0x886a,	// (0x00018025) list_single_cale_preview_pane_ParamLimits

0x886a,	// (0x00018025) list_single_cale_preview_pane

0x8882,	// (0x0001803d) list_single_cale_preview_pane_g1

0x888a,	// (0x00018045) list_single_cale_preview_pane_t1_ParamLimits

0x888a,	// (0x00018045) list_single_cale_preview_pane_t1

0x889f,	// (0x0001805a) list_double_cale_preview_pane_g1

0x88a7,	// (0x00018062) list_double_cale_preview_pane_t1_ParamLimits

0x88a7,	// (0x00018062) list_double_cale_preview_pane_t1

0x88bc,	// (0x00018077) list_double_cale_preview_pane_t2_ParamLimits

0x88bc,	// (0x00018077) list_double_cale_preview_pane_t2

0x0001,

0xfe1e,	// (0x0001f5d9) list_double_cale_preview_pane_t_ParamLimits

0xfe1e,	// (0x0001f5d9) list_double_cale_preview_pane_t

0x9647,	// (0x00018e02) main_ezdial_pane

0x96bc,	// (0x00018e77) main_sp_fs_email_pane_ParamLimits

0x7ded,	// (0x000175a8) cmail_ddmenu_btn01_pane_ParamLimits

0x7ded,	// (0x000175a8) cmail_ddmenu_btn01_pane

0x7e00,	// (0x000175bb) cmail_ddmenu_btn02_pane_ParamLimits

0x7e00,	// (0x000175bb) cmail_ddmenu_btn02_pane

0x7e23,	// (0x000175de) cmail_ddmenu_btn03_pane_ParamLimits

0x7e23,	// (0x000175de) cmail_ddmenu_btn03_pane

0x7e4b,	// (0x00017606) main_sp_fs_ctrlbar_pane_ParamLimits

0x7e6f,	// (0x0001762a) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x850b,	// (0x00017cc6) list_cmail_body_pane_ParamLimits

0xe631,	// (0x0001ddec) bg_button_pane_cp12

0xe646,	// (0x0001de01) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe646,	// (0x0001de01) list_single_cmail_header_detail_pane_g3

0xe68f,	// (0x0001de4a) list_single_cmail_header_detail_pane_t2_ParamLimits

0xe68f,	// (0x0001de4a) list_single_cmail_header_detail_pane_t2

0x0001,

0xfda1,	// (0x0001f55c) list_single_cmail_header_detail_pane_t_ParamLimits

0xfda1,	// (0x0001f55c) list_single_cmail_header_detail_pane_t

0xe79c,	// (0x0001df57) phacti_term_pane_t2_ParamLimits

0xe79c,	// (0x0001df57) phacti_term_pane_t2

0x0001,

0xfdab,	// (0x0001f566) phacti_term_pane_t_ParamLimits

0xfdab,	// (0x0001f566) phacti_term_pane_t

0xea4c,	// (0x0001e207) aid_size_list_single_double

0x88d4,	// (0x0001808f) popup_ezdial_listscroll_window

0x88f0,	// (0x000180ab) popup_number_entry_window_cp01

0xa071,	// (0x0001982c) bg_popup_call_pane_cp09

0xea58,	// (0x0001e213) ezdial_list_pane

0xea60,	// (0x0001e21b) scroll_pane_cp23

0xc029,	// (0x0001b7e4) bg_button_pane_cp028_ParamLimits

0xc029,	// (0x0001b7e4) bg_button_pane_cp028

0x88fe,	// (0x000180b9) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x88fe,	// (0x000180b9) cmail_ddmenu_btn01_pane_g1

0x890a,	// (0x000180c5) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x890a,	// (0x000180c5) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe23,	// (0x0001f5de) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe23,	// (0x0001f5de) cmail_ddmenu_btn01_pane_g

0xea68,	// (0x0001e223) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xea68,	// (0x0001e223) cmail_ddmenu_btn01_pane_t1

0xc029,	// (0x0001b7e4) bg_button_pane_cp029_ParamLimits

0xc029,	// (0x0001b7e4) bg_button_pane_cp029

0x8916,	// (0x000180d1) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x8916,	// (0x000180d1) cmail_ddmenu_btn02_pane_g1

0x892e,	// (0x000180e9) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x892e,	// (0x000180e9) cmail_ddmenu_btn02_pane_t1

0x96bc,	// (0x00018e77) bg_button_pane_cp031_ParamLimits

0x96bc,	// (0x00018e77) bg_button_pane_cp031

0x8916,	// (0x000180d1) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x8916,	// (0x000180d1) cmail_ddmenu_btn03_pane_g1

0x892e,	// (0x000180e9) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x892e,	// (0x000180e9) cmail_ddmenu_btn03_pane_t1

0x535a,	// (0x00014b15) cell_dialer2_keypad_pane_t1_ParamLimits

0x5374,	// (0x00014b2f) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x5374,	// (0x00014b2f) cell_dialer2_keypad_pane_t1_copy1

0x74b2,	// (0x00016c6d) ncimui_group_button_pane

0x96bc,	// (0x00018e77) main_sp_fs_calendar_pane_ParamLimits

0x8522,	// (0x00017cdd) list_single_cmail_header_caption_pane_ParamLimits

0xe7e7,	// (0x0001dfa2) aid_recal_txt_sm_pane

0x9647,	// (0x00018e02) mian_recal_day_pane

0xe829,	// (0x0001dfe4) popup_sp_fs_cale_preview_window_ParamLimits

0xea7d,	// (0x0001e238) list_recal_day_pane

0xeac0,	// (0x0001e27b) list_single_recal_day_pane_ParamLimits

0xeac0,	// (0x0001e27b) list_single_recal_day_pane

0xead2,	// (0x0001e28d) list_single_recal_day_pane_g1_ParamLimits

0xead2,	// (0x0001e28d) list_single_recal_day_pane_g1

0xeade,	// (0x0001e299) list_single_recal_day_pane_g2_ParamLimits

0xeade,	// (0x0001e299) list_single_recal_day_pane_g2

0xeaea,	// (0x0001e2a5) list_single_recal_day_pane_g3_ParamLimits

0xeaea,	// (0x0001e2a5) list_single_recal_day_pane_g3

0x8952,	// (0x0001810d) list_single_recal_day_pane_g4_ParamLimits

0x8952,	// (0x0001810d) list_single_recal_day_pane_g4

0xeaf6,	// (0x0001e2b1) list_single_recal_day_pane_g5_ParamLimits

0xeaf6,	// (0x0001e2b1) list_single_recal_day_pane_g5

0xeb02,	// (0x0001e2bd) list_single_recal_day_pane_g6_ParamLimits

0xeb02,	// (0x0001e2bd) list_single_recal_day_pane_g6

0x0004,

0xfe32,	// (0x0001f5ed) list_single_recal_day_pane_g_ParamLimits

0xfe32,	// (0x0001f5ed) list_single_recal_day_pane_g

0xeb16,	// (0x0001e2d1) list_single_recal_day_pane_t1

0xeb28,	// (0x0001e2e3) list_single_recal_day_pane_t2

0x0001,

0xfe3d,	// (0x0001f5f8) list_single_recal_day_pane_t

0x896a,	// (0x00018125) ncimui_query_button_pane_ParamLimits

0x896a,	// (0x00018125) ncimui_query_button_pane

0x897a,	// (0x00018135) ncimui_query_button_pane_t1_ParamLimits

0x897a,	// (0x00018135) ncimui_query_button_pane_t1

0xeb3a,	// (0x0001e2f5) ncimui_query_button_pane_t2_ParamLimits

0xeb3a,	// (0x0001e2f5) ncimui_query_button_pane_t2

0x0001,

0xfe42,	// (0x0001f5fd) ncimui_query_button_pane_t_ParamLimits

0xfe42,	// (0x0001f5fd) ncimui_query_button_pane_t

0x898d,	// (0x00018148) query_button_pane_ParamLimits

0x898d,	// (0x00018148) query_button_pane

0x9647,	// (0x00018e02) bg_button_pane_cp0028

0xeb4d,	// (0x0001e308) query_button_pane_t1

0x32c8,	// (0x00012a83) main_tport_pane_ParamLimits

0x83cc,	// (0x00017b87) bg_popup_window_pane_cp01_ParamLimits

0x83cc,	// (0x00017b87) bg_popup_window_pane_cp01

0x83e5,	// (0x00017ba0) heading_pane_cp08_ParamLimits

0x83e5,	// (0x00017ba0) heading_pane_cp08

0x83f8,	// (0x00017bb3) heading_pane_cp07_ParamLimits

0x83f8,	// (0x00017bb3) heading_pane_cp07

0x849a,	// (0x00017c55) cell_tport_appsw_pane_g2

0x0002,

0xfd8e,	// (0x0001f549) cell_tport_appsw_pane_g

0xace9,	// (0x0001a4a4) input_candi_list_open_g1

0xa4de,	// (0x00019c99) list_cale_time_pane_g6_ParamLimits

0xa4de,	// (0x00019c99) list_cale_time_pane_g6

0x40a4,	// (0x0001385f) aid_size_touch_calib_1_ParamLimits

0x40a4,	// (0x0001385f) aid_size_touch_calib_1

0x40b6,	// (0x00013871) aid_size_touch_calib_2_ParamLimits

0x40b6,	// (0x00013871) aid_size_touch_calib_2

0x40ce,	// (0x00013889) aid_size_touch_calib_3_ParamLimits

0x40ce,	// (0x00013889) aid_size_touch_calib_3

0x40ec,	// (0x000138a7) aid_size_touch_calib_4_ParamLimits

0x40ec,	// (0x000138a7) aid_size_touch_calib_4

0x4104,	// (0x000138bf) main_touch_calib_button_group_pane_ParamLimits

0x4104,	// (0x000138bf) main_touch_calib_button_group_pane

0x411c,	// (0x000138d7) main_touch_calib_pane_g1_ParamLimits

0x412e,	// (0x000138e9) main_touch_calib_pane_g2_ParamLimits

0x4140,	// (0x000138fb) main_touch_calib_pane_g3_ParamLimits

0x4152,	// (0x0001390d) main_touch_calib_pane_g4_ParamLimits

0xf74d,	// (0x0001ef08) main_touch_calib_pane_g_ParamLimits

0x4164,	// (0x0001391f) main_touch_calib_pane_t1_ParamLimits

0x417e,	// (0x00013939) main_touch_calib_pane_t2_ParamLimits

0x4198,	// (0x00013953) main_touch_calib_pane_t3_ParamLimits

0x41ac,	// (0x00013967) main_touch_calib_pane_t4_ParamLimits

0x41c2,	// (0x0001397d) main_touch_calib_pane_t5_ParamLimits

0xf756,	// (0x0001ef11) main_touch_calib_pane_t_ParamLimits

0xc8a6,	// (0x0001c061) list_single_fp_cale_pane_g3_ParamLimits

0xc8a6,	// (0x0001c061) list_single_fp_cale_pane_g3

0x96bc,	// (0x00018e77) bg_button_pane_cp012_ParamLimits

0x96bc,	// (0x00018e77) bg_vkb2_func_pane_cp03_ParamLimits

0x64e2,	// (0x00015c9d) cell_vitu2_function_top_pane_g1_ParamLimits

0x96bc,	// (0x00018e77) bg_vkb2_func_pane_cp04_ParamLimits

0x743d,	// (0x00016bf8) main_ncimui_button_group_pane_ParamLimits

0x743d,	// (0x00016bf8) main_ncimui_button_group_pane

0x749d,	// (0x00016c58) main_ncimui_pane_t3_ParamLimits

0x749d,	// (0x00016c58) main_ncimui_pane_t3

0xe74a,	// (0x0001df05) phacti_button_group_pane

0xea4c,	// (0x0001e207) aid_size_list_single_double_ParamLimits

0x88d4,	// (0x0001808f) popup_ezdial_listscroll_window_ParamLimits

0x88f0,	// (0x000180ab) popup_number_entry_window_cp01_ParamLimits

0x89a0,	// (0x0001815b) phacti_button_pane_ParamLimits

0x89a0,	// (0x0001815b) phacti_button_pane

0x9647,	// (0x00018e02) bg_button_pane_cp14

0xeb5b,	// (0x0001e316) phacti_button_pane_t1

0x89b1,	// (0x0001816c) main_touch_calib_button_pane_ParamLimits

0x89b1,	// (0x0001816c) main_touch_calib_button_pane

0x9e54,	// (0x0001960f) bg_button_pane_cp18_ParamLimits

0x9e54,	// (0x0001960f) bg_button_pane_cp18

0xeb69,	// (0x0001e324) main_touch_calib_button_pane_t1_ParamLimits

0xeb69,	// (0x0001e324) main_touch_calib_button_pane_t1

0xeb7f,	// (0x0001e33a) main_touch_calib_button_pane_t2_ParamLimits

0xeb7f,	// (0x0001e33a) main_touch_calib_button_pane_t2

0x0001,

0xfe47,	// (0x0001f602) main_touch_calib_button_pane_t_ParamLimits

0xfe47,	// (0x0001f602) main_touch_calib_button_pane_t

0x9647,	// (0x00018e02) cell_ncimui_button_pane

0x9647,	// (0x00018e02) bg_button_pane_cp032

0xeb9d,	// (0x0001e358) cell_ncimui_button_pane_t1

0xd106,	// (0x0001c8c1) image3_infobar_pane_ParamLimits

0xd106,	// (0x0001c8c1) image3_infobar_pane

0x78b4,	// (0x0001706f) fs_bigclock_status_pane_ParamLimits

0x78b4,	// (0x0001706f) fs_bigclock_status_pane

0x78c1,	// (0x0001707c) main_fs_bigclock_clock_pane_ParamLimits

0x78c1,	// (0x0001707c) main_fs_bigclock_clock_pane

0x78f3,	// (0x000170ae) main_fs_bigclock_indi_pane_ParamLimits

0x78f3,	// (0x000170ae) main_fs_bigclock_indi_pane

0x7933,	// (0x000170ee) main_fs_bigclock_swipe_pane_ParamLimits

0x7933,	// (0x000170ee) main_fs_bigclock_swipe_pane

0x9647,	// (0x00018e02) main_fs_clock_dumped_data

0x797f,	// (0x0001713a) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x797f,	// (0x0001713a) list_single_fs_bigclock_indicator_pane_g1

0x7998,	// (0x00017153) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x7998,	// (0x00017153) list_single_fs_bigclock_indicator_pane_g2

0x79b2,	// (0x0001716d) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x79b2,	// (0x0001716d) list_single_fs_bigclock_indicator_pane_g3

0x79cc,	// (0x00017187) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x79cc,	// (0x00017187) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc74,	// (0x0001f42f) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc74,	// (0x0001f42f) list_single_fs_bigclock_indicator_pane_g

0x79fb,	// (0x000171b6) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x79fb,	// (0x000171b6) list_single_fs_bigclock_indicator_pane_t1

0x7a23,	// (0x000171de) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x7a23,	// (0x000171de) list_single_fs_bigclock_indicator_pane_t2

0x7a4b,	// (0x00017206) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x7a4b,	// (0x00017206) list_single_fs_bigclock_indicator_pane_t3

0x7a73,	// (0x0001722e) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x7a73,	// (0x0001722e) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc7f,	// (0x0001f43a) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc7f,	// (0x0001f43a) list_single_fs_bigclock_indicator_pane_t

0xebab,	// (0x0001e366) image3_infobar_fav_pane_ParamLimits

0xebab,	// (0x0001e366) image3_infobar_fav_pane

0xebbb,	// (0x0001e376) image3_infobar_loc_pane_ParamLimits

0xebbb,	// (0x0001e376) image3_infobar_loc_pane

0xebd1,	// (0x0001e38c) image3_infobar_time_pane_ParamLimits

0xebd1,	// (0x0001e38c) image3_infobar_time_pane

0xc573,	// (0x0001bd2e) image3_infobar_time_pane_g1

0xebe1,	// (0x0001e39c) image3_infobar_time_pane_t1

0xc573,	// (0x0001bd2e) image3_infobar_loc_pane_g1

0xebef,	// (0x0001e3aa) image3_infobar_loc_pane_g2

0x0001,

0xfe4c,	// (0x0001f607) image3_infobar_loc_pane_g

0xebf7,	// (0x0001e3b2) image3_infobar_loc_pane_t1

0xc573,	// (0x0001bd2e) image3_infobar_fav_pane_g1

0xec05,	// (0x0001e3c0) image3_infobar_fav_pane_g2

0x0001,

0xfe51,	// (0x0001f60c) image3_infobar_fav_pane_g

0xec0d,	// (0x0001e3c8) fs_bigclock_status_battery_pane

0xec16,	// (0x0001e3d1) fs_bigclock_status_signal_pane

0xec1f,	// (0x0001e3da) fs_bigclock_status_title_pane

0xec28,	// (0x0001e3e3) fs_bigclock_status_signal_pane_g1

0xec31,	// (0x0001e3ec) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe56,	// (0x0001f611) fs_bigclock_status_signal_pane_g

0xec39,	// (0x0001e3f4) fs_bigclock_status_battery_pane_g1

0xec42,	// (0x0001e3fd) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe5b,	// (0x0001f616) fs_bigclock_status_battery_pane_g

0xec4a,	// (0x0001e405) fs_bigclock_status_title_pane_t1

0x89c6,	// (0x00018181) main_fs_bigclock_clock_pane_g1

0x89c6,	// (0x00018181) main_fs_bigclock_clock_pane_g2

0x89d9,	// (0x00018194) main_fs_bigclock_clock_pane_g3

0x89d9,	// (0x00018194) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe60,	// (0x0001f61b) main_fs_bigclock_clock_pane_g

0x89f0,	// (0x000181ab) main_fs_bigclock_clock_pane_t1

0x8a06,	// (0x000181c1) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe69,	// (0x0001f624) main_fs_bigclock_clock_pane_t

0xec58,	// (0x0001e413) list_single_fs_bigclock_indicator_pane_ParamLimits

0xec58,	// (0x0001e413) list_single_fs_bigclock_indicator_pane

0xec69,	// (0x0001e424) list_single_fs_bigclock_pane_ParamLimits

0xec69,	// (0x0001e424) list_single_fs_bigclock_pane

0xec8f,	// (0x0001e44a) main_fs_bigclock_indicator_pane_t1

0xec9e,	// (0x0001e459) list_single_fs_bigclock_pane_g1

0xeca6,	// (0x0001e461) list_single_fs_bigclock_pane_t1

0xc573,	// (0x0001bd2e) main_fs_bigclock_swipe_pane_g1

0xece9,	// (0x0001e4a4) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe7a,	// (0x0001f635) main_fs_bigclock_swipe_pane_g

0xecf1,	// (0x0001e4ac) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xecf1,	// (0x0001e4ac) main_fs_bigclock_swipe_pane_t1

0x20ac,	// (0x00011867) call_type_pane_ParamLimits

0x9647,	// (0x00018e02) main_btmg_pane

0xe926,	// (0x0001e0e1) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe926,	// (0x0001e0e1) list_single_cale_mrui_row_pane_g2

0x0002,

0xfded,	// (0x0001f5a8) list_single_cale_mrui_row_pane_g_ParamLimits

0xfded,	// (0x0001f5a8) list_single_cale_mrui_row_pane_g

0xeaa6,	// (0x0001e261) list_recal_vselct_arw_lo_pane

0xeaae,	// (0x0001e269) list_recal_vselct_arw_up_pane

0xeab6,	// (0x0001e271) list_recal_vselct_pane

0x8a68,	// (0x00018223) btmg_button_pane

0x8a72,	// (0x0001822d) main_btmg_pane_g1

0x9647,	// (0x00018e02) bg_button_pane_cp044

0xed0e,	// (0x0001e4c9) btmg_button_pane_t1

0xc015,	// (0x0001b7d0) aid_listscroll_gen

0x96bc,	// (0x00018e77) main_cntbar_detail_pane

0xe5e1,	// (0x0001dd9c) list_cmail_folder_pane

0xd627,	// (0x0001cde2) sp_fs_scroll_pane_cp03_ParamLimits

0xed1c,	// (0x0001e4d7) list_single_fs_dyc_pane_cp01_ParamLimits

0xed1c,	// (0x0001e4d7) list_single_fs_dyc_pane_cp01

0xed39,	// (0x0001e4f4) aid_size_cmail_indent

0xed42,	// (0x0001e4fd) list_single_dyc_row_pane_cp01

0x8ab0,	// (0x0001826b) cntbar_detail_list_pane_ParamLimits

0x8ab0,	// (0x0001826b) cntbar_detail_list_pane

0x8b02,	// (0x000182bd) main_cntbar_detail_cont_pane_ParamLimits

0x8b02,	// (0x000182bd) main_cntbar_detail_cont_pane

0xd627,	// (0x0001cde2) scroll_pane_cp032_ParamLimits

0xd627,	// (0x0001cde2) scroll_pane_cp032

0x8b16,	// (0x000182d1) cntbar_detail_list_event_pane_ParamLimits

0x8b16,	// (0x000182d1) cntbar_detail_list_event_pane

0x8ac2,	// (0x0001827d) cntbar_detail_list_shct_pane

0xa33b,	// (0x00019af6) aid_list_gen

0xed4b,	// (0x0001e506) aid_scroll

0xed54,	// (0x0001e50f) aid_size_touch_scroll_bar

0x6c0a,	// (0x000163c5) aid_list_double

0x6bf8,	// (0x000163b3) aid_list_single

0x6bf8,	// (0x000163b3) aid_list_single_lg

0x8b26,	// (0x000182e1) aid_list_z_g_a_sm

0x8b2e,	// (0x000182e9) aid_list_z_g_d

0x8b36,	// (0x000182f1) aid_txt_z_prm

0x8b44,	// (0x000182ff) aid_txt_z_prm_cp01

0x8b52,	// (0x0001830d) aid_txt_z_sec

0x8b60,	// (0x0001831b) main_cntbar_detail_cont_pane_g1_ParamLimits

0x8b60,	// (0x0001831b) main_cntbar_detail_cont_pane_g1

0x8b74,	// (0x0001832f) main_cntbar_detail_cont_pane_g2_ParamLimits

0x8b74,	// (0x0001832f) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe7f,	// (0x0001f63a) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe7f,	// (0x0001f63a) main_cntbar_detail_cont_pane_g

0xed5d,	// (0x0001e518) main_cntbar_detail_cont_pane_t1

0xed6b,	// (0x0001e526) main_cntbar_detail_cont_pane_t2

0xed79,	// (0x0001e534) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe84,	// (0x0001f63f) main_cntbar_detail_cont_pane_t

0x8b84,	// (0x0001833f) cell_cntbar_detail_list_shct_pane_ParamLimits

0x8b84,	// (0x0001833f) cell_cntbar_detail_list_shct_pane

0xed87,	// (0x0001e542) cntbar_detail_list_shct_pane_g1

0xed90,	// (0x0001e54b) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe8b,	// (0x0001f646) cntbar_detail_list_shct_pane_g

0x8b96,	// (0x00018351) cntbar_detail_list_event_pane_g1_ParamLimits

0x8b96,	// (0x00018351) cntbar_detail_list_event_pane_g1

0x8ba2,	// (0x0001835d) cntbar_detail_list_event_pane_g2_ParamLimits

0x8ba2,	// (0x0001835d) cntbar_detail_list_event_pane_g2

0x0005,

0xfe90,	// (0x0001f64b) cntbar_detail_list_event_pane_g_ParamLimits

0xfe90,	// (0x0001f64b) cntbar_detail_list_event_pane_g

0x8c10,	// (0x000183cb) cntbar_detail_list_event_pane_t1_ParamLimits

0x8c10,	// (0x000183cb) cntbar_detail_list_event_pane_t1

0x8c25,	// (0x000183e0) cntbar_detail_list_event_pane_t2_ParamLimits

0x8c25,	// (0x000183e0) cntbar_detail_list_event_pane_t2

0x0002,

0xfe9d,	// (0x0001f658) cntbar_detail_list_event_pane_t_ParamLimits

0xfe9d,	// (0x0001f658) cntbar_detail_list_event_pane_t

0xc573,	// (0x0001bd2e) cell_cntbar_detail_list_shct_pane_g1

0xab26,	// (0x0001a2e1) navi_pane_mv_g3

0x96bc,	// (0x00018e77) main_cntbar_detail_pane_ParamLimits

0x9647,	// (0x00018e02) main_notif_wgt_pane

0xce65,	// (0x0001c620) aid_tch_main_mp4_pane_g4

0xd093,	// (0x0001c84e) popup_slider_window_cp02

0xea9c,	// (0x0001e257) list_recal_day_event_pane

0x8a7c,	// (0x00018237) cntbar_detail_btn_pane_ParamLimits

0x8a7c,	// (0x00018237) cntbar_detail_btn_pane

0x8a95,	// (0x00018250) cntbar_detail_btn_pane_cp01_ParamLimits

0x8a95,	// (0x00018250) cntbar_detail_btn_pane_cp01

0x8ac2,	// (0x0001827d) cntbar_detail_list_shct_pane_ParamLimits

0x8ad2,	// (0x0001828d) cntbar_detail_pane_g1_ParamLimits

0x8ad2,	// (0x0001828d) cntbar_detail_pane_g1

0x8ae6,	// (0x000182a1) cntbar_detail_pane_t1_ParamLimits

0x8ae6,	// (0x000182a1) cntbar_detail_pane_t1

0x8bae,	// (0x00018369) cntbar_detail_list_event_pane_g3_ParamLimits

0x8bae,	// (0x00018369) cntbar_detail_list_event_pane_g3

0x8bc6,	// (0x00018381) cntbar_detail_list_event_pane_g4_ParamLimits

0x8bc6,	// (0x00018381) cntbar_detail_list_event_pane_g4

0x8bde,	// (0x00018399) cntbar_detail_list_event_pane_g5_ParamLimits

0x8bde,	// (0x00018399) cntbar_detail_list_event_pane_g5

0x8bf6,	// (0x000183b1) cntbar_detail_list_event_pane_g6_ParamLimits

0x8bf6,	// (0x000183b1) cntbar_detail_list_event_pane_g6

0x8c3a,	// (0x000183f5) cntbar_detail_list_event_pane_t3_ParamLimits

0x8c3a,	// (0x000183f5) cntbar_detail_list_event_pane_t3

0x8c4c,	// (0x00018407) popup_notif_wgt_window_ParamLimits

0x8c4c,	// (0x00018407) popup_notif_wgt_window

0x8c65,	// (0x00018420) popup_submenu_window_cp01_ParamLimits

0x8c65,	// (0x00018420) popup_submenu_window_cp01

0xa071,	// (0x0001982c) bg_popup_window_pane_cp10

0xed99,	// (0x0001e554) listscroll_notif_wgt_pane

0xedab,	// (0x0001e566) list_notif_wgt_window

0xedb4,	// (0x0001e56f) scroll_pane_cp033

0x8c79,	// (0x00018434) list_notif_wgt_row_pane_ParamLimits

0x8c79,	// (0x00018434) list_notif_wgt_row_pane

0xedbd,	// (0x0001e578) aid_size_list_notif_wgt_del

0xedca,	// (0x0001e585) list_notif_wgt_row_pane_g1

0xedd6,	// (0x0001e591) list_notif_wgt_row_pane_g2

0xede5,	// (0x0001e5a0) list_notif_wgt_row_pane_g3

0x0002,

0xfea4,	// (0x0001f65f) list_notif_wgt_row_pane_g

0xedf2,	// (0x0001e5ad) list_notif_wgt_row_pane_t1

0xee08,	// (0x0001e5c3) list_notif_wgt_row_pane_t2

0xee1a,	// (0x0001e5d5) list_notif_wgt_row_pane_t3

0x0002,

0xfeab,	// (0x0001f666) list_notif_wgt_row_pane_t

0xd5b5,	// (0x0001cd70) list_recal_day_event_pane_g1

0xee2c,	// (0x0001e5e7) list_recal_day_event_pane_t1

0x9647,	// (0x00018e02) bg_button_pane_cp045

0x8c89,	// (0x00018444) cntbar_detail_btn_pane_t1

0xc029,	// (0x0001b7e4) main_callh_pane_ParamLimits

0xc029,	// (0x0001b7e4) main_callh_pane

0x9647,	// (0x00018e02) main_coverflow0_pane

0x9647,	// (0x00018e02) main_wgtman_pane

0x7954,	// (0x0001710f) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x7954,	// (0x0001710f) main_fs_bigclock_unlock_btn_pane

0x8492,	// (0x00017c4d) bg_button_pane_cp16

0x84a2,	// (0x00017c5d) cell_tport_appsw_pane_g3

0x8c97,	// (0x00018452) cf0_flow_pane_ParamLimits

0x8c97,	// (0x00018452) cf0_flow_pane

0xee3b,	// (0x0001e5f6) listscroll_cf0_pane

0xee46,	// (0x0001e601) main_cf0_pane_g1

0x8cac,	// (0x00018467) main_cf0_pane_t1_ParamLimits

0x8cac,	// (0x00018467) main_cf0_pane_t1

0x8cc3,	// (0x0001847e) main_cf0_pane_t2_ParamLimits

0x8cc3,	// (0x0001847e) main_cf0_pane_t2

0x0001,

0xfeb7,	// (0x0001f672) main_cf0_pane_t_ParamLimits

0xfeb7,	// (0x0001f672) main_cf0_pane_t

0xee58,	// (0x0001e613) scroll_pane_cp11

0x8cda,	// (0x00018495) cf0_flow_pane_g1

0x8ce6,	// (0x000184a1) cf0_flow_pane_g2

0x0001,

0xfebc,	// (0x0001f677) cf0_flow_pane_g

0x8cf2,	// (0x000184ad) cf0_flow_pane_t1

0x9647,	// (0x00018e02) main_call6_pane

0x9647,	// (0x00018e02) main_calllock_pane

0x8d04,	// (0x000184bf) call6_btn_grp_pane_ParamLimits

0x8d04,	// (0x000184bf) call6_btn_grp_pane

0x8d1e,	// (0x000184d9) call6_pane_g1_ParamLimits

0x8d1e,	// (0x000184d9) call6_pane_g1

0x8d37,	// (0x000184f2) popup_call6_1st_window_ParamLimits

0x8d37,	// (0x000184f2) popup_call6_1st_window

0x8d4b,	// (0x00018506) popup_call6_2nd_window_ParamLimits

0x8d4b,	// (0x00018506) popup_call6_2nd_window

0x8d5f,	// (0x0001851a) cell_call6_btn_pane_ParamLimits

0x8d5f,	// (0x0001851a) cell_call6_btn_pane

0xa071,	// (0x0001982c) bg_popup_call2_in_pane_cp03

0xee63,	// (0x0001e61e) popup_call6_1st_window_g1

0xee6b,	// (0x0001e626) popup_call6_1st_window_g2

0xee73,	// (0x0001e62e) popup_call6_1st_window_g3

0x0002,

0xfec1,	// (0x0001f67c) popup_call6_1st_window_g

0xee7b,	// (0x0001e636) popup_call6_1st_window_t1

0xee8a,	// (0x0001e645) popup_call6_1st_window_t2

0xee9a,	// (0x0001e655) popup_call6_1st_window_t3

0x0002,

0xfec8,	// (0x0001f683) popup_call6_1st_window_t

0xa071,	// (0x0001982c) bg_popup_call2_in_pane_cp04

0xee63,	// (0x0001e61e) popup_call6_2nd_window_g1

0xee6b,	// (0x0001e626) popup_call6_2nd_window_g2

0xee73,	// (0x0001e62e) popup_call6_2nd_window_g3

0x0002,

0xfec1,	// (0x0001f67c) popup_call6_2nd_window_g

0xee7b,	// (0x0001e636) popup_call6_2nd_window_t1

0x9647,	// (0x00018e02) bg_button_pane_cp15

0xeeaa,	// (0x0001e665) cell_call6_btn_pane_g1

0xeeb3,	// (0x0001e66e) cell_call6_btn_pane_t1

0x8d73,	// (0x0001852e) listscroll_wgtman_pane_ParamLimits

0x8d73,	// (0x0001852e) listscroll_wgtman_pane

0x8d94,	// (0x0001854f) wgtman_btn_pane_ParamLimits

0x8d94,	// (0x0001854f) wgtman_btn_pane

0xa938,	// (0x0001a0f3) aid_scroll_copy1

0xeec2,	// (0x0001e67d) list_wgtman_pane

0x8dd7,	// (0x00018592) wgtman_btn_pane_g1_ParamLimits

0x8dd7,	// (0x00018592) wgtman_btn_pane_g1

0x8e03,	// (0x000185be) wgtman_btn_pane_t1_ParamLimits

0x8e03,	// (0x000185be) wgtman_btn_pane_t1

0xeecc,	// (0x0001e687) wgtman_btn_pane_t2_ParamLimits

0xeecc,	// (0x0001e687) wgtman_btn_pane_t2

0x0001,

0xfecf,	// (0x0001f68a) wgtman_btn_pane_t_ParamLimits

0xfecf,	// (0x0001f68a) wgtman_btn_pane_t

0x8e40,	// (0x000185fb) listrow_wgtman_pane_ParamLimits

0x8e40,	// (0x000185fb) listrow_wgtman_pane

0x8e54,	// (0x0001860f) listrow_wgtman_pane_g1

0x8e61,	// (0x0001861c) listrow_wgtman_pane_g2

0x0001,

0xfed4,	// (0x0001f68f) listrow_wgtman_pane_g

0x8e7f,	// (0x0001863a) listrow_wgtman_pane_t1

0x8e97,	// (0x00018652) listrow_wgtman_pane_t2

0x0001,

0xfed9,	// (0x0001f694) listrow_wgtman_pane_t

0x8ebd,	// (0x00018678) wait_bar_pane_cp09

0xeee3,	// (0x0001e69e) main_calllock_btn_pane

0xeeed,	// (0x0001e6a8) main_calllock_pane_g1

0x9647,	// (0x00018e02) bg_button_pane_cp17

0xeeaa,	// (0x0001e665) main_calllock_btn_pane_g1

0xeef9,	// (0x0001e6b4) main_calllock_btn_pane_t1

0x9647,	// (0x00018e02) main_dialer3_pane

0x9647,	// (0x00018e02) main_fmrd2_pane

0xc573,	// (0x0001bd2e) main_fs_bigclock_unlock_btn_pane_g1

0x8ed7,	// (0x00018692) main_fs_bigclock_unlock_btn_pane_t1

0x8ee5,	// (0x000186a0) area_fmrd2_info_pane_ParamLimits

0x8ee5,	// (0x000186a0) area_fmrd2_info_pane

0x8ef6,	// (0x000186b1) area_fmrd2_visual_pane_ParamLimits

0x8ef6,	// (0x000186b1) area_fmrd2_visual_pane

0x8f04,	// (0x000186bf) fmrd2_indi_pane_ParamLimits

0x8f04,	// (0x000186bf) fmrd2_indi_pane

0x8f11,	// (0x000186cc) area_fmrd2_visual_pane_g1

0x8f19,	// (0x000186d4) area_fmrd2_visual_pane_t1

0x8f29,	// (0x000186e4) area_fmrd2_visual_pane_t2

0x8f39,	// (0x000186f4) area_fmrd2_visual_pane_t3

0x0002,

0xfee3,	// (0x0001f69e) area_fmrd2_visual_pane_t

0x8f49,	// (0x00018704) area_fmrd2_info_pane_g1

0x8f51,	// (0x0001870c) area_fmrd2_info_pane_t1

0x8f61,	// (0x0001871c) area_fmrd2_info_pane_t2

0x8f71,	// (0x0001872c) area_fmrd2_info_pane_t3

0x8f81,	// (0x0001873c) area_fmrd2_info_pane_t4

0x0003,

0xfeea,	// (0x0001f6a5) area_fmrd2_info_pane_t

0x8f91,	// (0x0001874c) fmrd2_indi_pane_t1

0x8fa1,	// (0x0001875c) fmrd2_indi_pane_t2

0x8fb1,	// (0x0001876c) fmrd2_indi_pane_t3

0x0002,

0xfef3,	// (0x0001f6ae) fmrd2_indi_pane_t

0x79dd,	// (0x00017198) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x79dd,	// (0x00017198) list_single_fs_bigclock_indicator_pane_g5

0x7a92,	// (0x0001724d) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x7a92,	// (0x0001724d) list_single_fs_bigclock_indicator_pane_t5

0x8613,	// (0x00017dce) aid_cell_bcale_month_pane_ParamLimits

0x8613,	// (0x00017dce) aid_cell_bcale_month_pane

0x8631,	// (0x00017dec) bcale_month_pane_ParamLimits

0x8631,	// (0x00017dec) bcale_month_pane

0x8655,	// (0x00017e10) bcale_preview_pane_ParamLimits

0x8655,	// (0x00017e10) bcale_preview_pane

0xeca6,	// (0x0001e461) list_single_fs_bigclock_pane_t1_ParamLimits

0xecc5,	// (0x0001e480) list_single_fs_bigclock_pane_t2_ParamLimits

0xecc5,	// (0x0001e480) list_single_fs_bigclock_pane_t2

0x0001,

0xfe75,	// (0x0001f630) list_single_fs_bigclock_pane_t_ParamLimits

0xfe75,	// (0x0001f630) list_single_fs_bigclock_pane_t

0x8ecf,	// (0x0001868a) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfede,	// (0x0001f699) main_fs_bigclock_unlock_btn_pane_g

0x8fc1,	// (0x0001877c) aid_dia3_key_size_ParamLimits

0x8fc1,	// (0x0001877c) aid_dia3_key_size

0x8fd5,	// (0x00018790) aid_dia3_listrow_size_ParamLimits

0x8fd5,	// (0x00018790) aid_dia3_listrow_size

0x8fef,	// (0x000187aa) dia3_keypad_fun_pane_ParamLimits

0x8fef,	// (0x000187aa) dia3_keypad_fun_pane

0x900b,	// (0x000187c6) dia3_keypad_num_pane_ParamLimits

0x900b,	// (0x000187c6) dia3_keypad_num_pane

0x9027,	// (0x000187e2) dia3_listscroll_pane_ParamLimits

0x9027,	// (0x000187e2) dia3_listscroll_pane

0x903d,	// (0x000187f8) dia3_numentry_pane_ParamLimits

0x903d,	// (0x000187f8) dia3_numentry_pane

0xef4d,	// (0x0001e708) dia3_list_pane

0x9056,	// (0x00018811) scroll_pane_cp12

0x9647,	// (0x00018e02) bg_dia3_numentry_pane

0x9061,	// (0x0001881c) dia3_numentry_pane_t1

0x9070,	// (0x0001882b) cell_dia3_key_num_pane

0x9078,	// (0x00018833) cell_dia3_key0_fun_pane_ParamLimits

0x9078,	// (0x00018833) cell_dia3_key0_fun_pane

0x908c,	// (0x00018847) cell_dia3_key1_fun_pane_ParamLimits

0x908c,	// (0x00018847) cell_dia3_key1_fun_pane

0x90a3,	// (0x0001885e) dia3_listrow_pane

0xdfb5,	// (0x0001d770) bg_dia3_numentry_pane_g1

0x9647,	// (0x00018e02) bg_button_pane_cp21

0x90b5,	// (0x00018870) cell_dia3_key_num_pane_t1

0x90c3,	// (0x0001887e) cell_dia3_key_num_pane_t2

0x90d2,	// (0x0001888d) cell_dia3_key_num_pane_t3

0x90e1,	// (0x0001889c) cell_dia3_key_num_pane_t4

0x0003,

0xfefa,	// (0x0001f6b5) cell_dia3_key_num_pane_t

0x9647,	// (0x00018e02) bg_button_pane_cp19

0x90f0,	// (0x000188ab) cell_dia3_key0_fun_pane_g1

0x9647,	// (0x00018e02) bg_button_pane_cp20

0x90f0,	// (0x000188ab) cell_dia3_key1_fun_pane_g1

0x90f8,	// (0x000188b3) area_left_week_number_pane

0x9106,	// (0x000188c1) area_top_day_name_pane

0x9119,	// (0x000188d4) frame_month_view_pane

0xef58,	// (0x0001e713) grid_month_view_pane

0x912e,	// (0x000188e9) cell_top_day_name_pane_ParamLimits

0x912e,	// (0x000188e9) cell_top_day_name_pane

0x915d,	// (0x00018918) cell_area_left_week_number_pane_ParamLimits

0x915d,	// (0x00018918) cell_area_left_week_number_pane

0x9173,	// (0x0001892e) cell_month_view_pane_ParamLimits

0x9173,	// (0x0001892e) cell_month_view_pane

0xef66,	// (0x0001e721) frm_month_g1

0x91a4,	// (0x0001895f) frm_month_g2

0x91b7,	// (0x00018972) frm_month_g3

0x91ca,	// (0x00018985) frm_month_g4

0x91dd,	// (0x00018998) frm_month_g5

0x91f0,	// (0x000189ab) frm_month_g6

0x9205,	// (0x000189c0) frm_month_g7

0xef73,	// (0x0001e72e) frm_month_g8

0x921a,	// (0x000189d5) frm_month_g9

0x922a,	// (0x000189e5) frm_month_g10

0x923a,	// (0x000189f5) frm_month_g11

0x924a,	// (0x00018a05) frm_month_g12

0x925c,	// (0x00018a17) frm_month_g13

0x9270,	// (0x00018a2b) frm_month_g14

0x9284,	// (0x00018a3f) frm_month_g15

0x9298,	// (0x00018a53) frm_month_g16

0x000f,

0xff03,	// (0x0001f6be) frm_month_g

0xef80,	// (0x0001e73b) cell_top_day_name_pane_t1

0x92ac,	// (0x00018a67) cell_area_left_week_number_pane_g1

0x92b8,	// (0x00018a73) cell_area_left_week_number_pane_t1

0xc79a,	// (0x0001bf55) cell_month_view_pane_g1

0x92cb,	// (0x00018a86) cell_month_view_pane_t1

0x9647,	// (0x00018e02) main_fps_pane

0xe3f2,	// (0x0001dbad) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe3f2,	// (0x0001dbad) cmail_ddmenu_btn02_pane_cp1

0xe40e,	// (0x0001dbc9) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe40e,	// (0x0001dbc9) cmail_ddmenu_btn02_pane_cp2

0x8922,	// (0x000180dd) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x8922,	// (0x000180dd) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe28,	// (0x0001f5e3) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe28,	// (0x0001f5e3) cmail_ddmenu_btn02_pane_g

0x8940,	// (0x000180fb) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x8940,	// (0x000180fb) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe2d,	// (0x0001f5e8) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe2d,	// (0x0001f5e8) cmail_ddmenu_btn02_pane_t

0x92de,	// (0x00018a99) fps_text_pane_ParamLimits

0x92de,	// (0x00018a99) fps_text_pane

0x92f5,	// (0x00018ab0) main_fps_pane_g1_ParamLimits

0x92f5,	// (0x00018ab0) main_fps_pane_g1

0x930d,	// (0x00018ac8) wait_bar_pane_cp010_ParamLimits

0x930d,	// (0x00018ac8) wait_bar_pane_cp010

0x9320,	// (0x00018adb) fps_text_pane_t1_ParamLimits

0x9320,	// (0x00018adb) fps_text_pane_t1

0xef1f,	// (0x0001e6da) cam4_image_uncrop_pane_g1

0xef28,	// (0x0001e6e3) cam4_image_uncrop_pane_g2

0x58a2,	// (0x0001505d) cam4_image_uncrop_pane_g3

0x58ab,	// (0x00015066) cam4_image_uncrop_pane_g4

0x0003,

0xf8ee,	// (0x0001f0a9) cam4_image_uncrop_pane_g

0x90a3,	// (0x0001885e) dia3_listrow_pane_ParamLimits

0x9647,	// (0x00018e02) main_phob2_pane

0x8465,	// (0x00017c20) cell_tport_appsw_pane_cp02_ParamLimits

0x8465,	// (0x00017c20) cell_tport_appsw_pane_cp02

0x8479,	// (0x00017c34) cell_tport_appsw_pane_cp03_ParamLimits

0x8479,	// (0x00017c34) cell_tport_appsw_pane_cp03

0x9647,	// (0x00018e02) phob2_contact_card_pane

0x9647,	// (0x00018e02) phob2_listscroll_pane

0xef93,	// (0x0001e74e) phob2_list_pane

0xef9b,	// (0x0001e756) scroll_pane_cp034

0x9338,	// (0x00018af3) phob2_cc_data_pane_ParamLimits

0x9338,	// (0x00018af3) phob2_cc_data_pane

0x9351,	// (0x00018b0c) phob2_cc_listscroll_pane_ParamLimits

0x9351,	// (0x00018b0c) phob2_cc_listscroll_pane

0x8e40,	// (0x000185fb) list_double_large_graphic_phob2_pane_ParamLimits

0x8e40,	// (0x000185fb) list_double_large_graphic_phob2_pane

0x9373,	// (0x00018b2e) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9373,	// (0x00018b2e) list_double_large_graphic_phob2_pane_g1

0x9389,	// (0x00018b44) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x9389,	// (0x00018b44) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff24,	// (0x0001f6df) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff24,	// (0x0001f6df) list_double_large_graphic_phob2_pane_g

0x9395,	// (0x00018b50) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x9395,	// (0x00018b50) list_double_large_graphic_phob2_pane_t1

0x93aa,	// (0x00018b65) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x93aa,	// (0x00018b65) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff29,	// (0x0001f6e4) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff29,	// (0x0001f6e4) list_double_large_graphic_phob2_pane_t

0x9647,	// (0x00018e02) list_highlight_pane_cp024

0x93bc,	// (0x00018b77) phob2_cc_button_pane

0x93c6,	// (0x00018b81) phob2_cc_data_pane_g1_ParamLimits

0x93c6,	// (0x00018b81) phob2_cc_data_pane_g1

0x93de,	// (0x00018b99) phob2_cc_data_pane_g2_ParamLimits

0x93de,	// (0x00018b99) phob2_cc_data_pane_g2

0x0001,

0xff2e,	// (0x0001f6e9) phob2_cc_data_pane_g_ParamLimits

0xff2e,	// (0x0001f6e9) phob2_cc_data_pane_g

0x93ee,	// (0x00018ba9) phob2_cc_data_pane_t1_ParamLimits

0x93ee,	// (0x00018ba9) phob2_cc_data_pane_t1

0x9410,	// (0x00018bcb) phob2_cc_data_pane_t2_ParamLimits

0x9410,	// (0x00018bcb) phob2_cc_data_pane_t2

0x9432,	// (0x00018bed) phob2_cc_data_pane_t3_ParamLimits

0x9432,	// (0x00018bed) phob2_cc_data_pane_t3

0x0002,

0xff33,	// (0x0001f6ee) phob2_cc_data_pane_t_ParamLimits

0xff33,	// (0x0001f6ee) phob2_cc_data_pane_t

0xefa3,	// (0x0001e75e) phob2_cc_list_pane_ParamLimits

0xefa3,	// (0x0001e75e) phob2_cc_list_pane

0xd6c1,	// (0x0001ce7c) scroll_pane_cp035_ParamLimits

0xd6c1,	// (0x0001ce7c) scroll_pane_cp035

0x96bc,	// (0x00018e77) bg_button_pane_cp033

0xefaf,	// (0x0001e76a) phob2_cc_button_pane_g1

0xefbb,	// (0x0001e776) phob2_cc_button_pane_t1

0xefd0,	// (0x0001e78b) phob2_cc_button_pane_t2

0x0001,

0xff3a,	// (0x0001f6f5) phob2_cc_button_pane_t

0x9454,	// (0x00018c0f) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9454,	// (0x00018c0f) list_double_large_graphic_phob2_cc_pane

0x9492,	// (0x00018c4d) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9492,	// (0x00018c4d) list_double_large_graphic_phob2_cc_pane_g1

0x949e,	// (0x00018c59) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x949e,	// (0x00018c59) list_double_large_graphic_phob2_cc_pane_g2

0x94aa,	// (0x00018c65) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x94aa,	// (0x00018c65) list_double_large_graphic_phob2_cc_pane_g3

0x94b6,	// (0x00018c71) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x94b6,	// (0x00018c71) list_double_large_graphic_phob2_cc_pane_g4

0x94c2,	// (0x00018c7d) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x94c2,	// (0x00018c7d) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff3f,	// (0x0001f6fa) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff3f,	// (0x0001f6fa) list_double_large_graphic_phob2_cc_pane_g

0x94ce,	// (0x00018c89) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x94ce,	// (0x00018c89) list_double_large_graphic_phob2_cc_pane_t1

0x94f7,	// (0x00018cb2) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x94f7,	// (0x00018cb2) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff4a,	// (0x0001f705) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff4a,	// (0x0001f705) list_double_large_graphic_phob2_cc_pane_t

0xefe2,	// (0x0001e79d) list_highlight_pane_cp025_ParamLimits

0xefe2,	// (0x0001e79d) list_highlight_pane_cp025

0x96bc,	// (0x00018e77) bg_button_pane_cp033_ParamLimits

0xefaf,	// (0x0001e76a) phob2_cc_button_pane_g1_ParamLimits

0xefbb,	// (0x0001e776) phob2_cc_button_pane_t1_ParamLimits

0xefd0,	// (0x0001e78b) phob2_cc_button_pane_t2_ParamLimits

0xff3a,	// (0x0001f6f5) phob2_cc_button_pane_t_ParamLimits

0xfe4d,	// (0x0000f608) popup_wgtman_window

0xd441,	// (0x0001cbfc) scroll_pane_cp038

0x8db9,	// (0x00018574) wgtman_btn_pane_cp_01_ParamLimits

0x8db9,	// (0x00018574) wgtman_btn_pane_cp_01

0xeff0,	// (0x0001e7ab) wgtman_content_pane

0xeff9,	// (0x0001e7b4) wgtman_heading_pane

0x9647,	// (0x00018e02) bg_heading_pane_cp02

0xf002,	// (0x0001e7bd) wgtman_heading_pane_g1

0xf00a,	// (0x0001e7c5) wgtman_heading_pane_t1

0xf018,	// (0x0001e7d3) scroll_pane_cp036

0xf020,	// (0x0001e7db) wgtman_list_pane

0xef33,	// (0x0001e6ee) wgtman_list_pane_t1_ParamLimits

0xef33,	// (0x0001e6ee) wgtman_list_pane_t1

0xd1be,	// (0x0001c979) cam4_grid_pane

0x66d9,	// (0x00015e94) bg_button_pane_cp015_ParamLimits

0x66ed,	// (0x00015ea8) bg_button_pane_cp016_ParamLimits

0x6700,	// (0x00015ebb) bg_button_pane_cp017_ParamLimits

0x6758,	// (0x00015f13) popup_vitu2_query_window_g3_ParamLimits

0x6758,	// (0x00015f13) popup_vitu2_query_window_g3

0x6815,	// (0x00015fd0) popup_vitu2_query_window_t6_ParamLimits

0x6815,	// (0x00015fd0) popup_vitu2_query_window_t6

0x6840,	// (0x00015ffb) popup_vitu2_query_window_t7_ParamLimits

0x6840,	// (0x00015ffb) popup_vitu2_query_window_t7

0xef1f,	// (0x0001e6da) cam4_grid_pane_g1

0xef28,	// (0x0001e6e3) cam4_grid_pane_g2

0xf028,	// (0x0001e7e3) cam4_grid_pane_g3

0xf031,	// (0x0001e7ec) cam4_grid_pane_g4

0x0003,

0xff4f,	// (0x0001f70a) cam4_grid_pane_g

0x0e22,	// (0x000105dd) aid_placing_vt_slider_lsc_ParamLimits

0x110f,	// (0x000108ca) vidtel_button_pane_ParamLimits

0x110f,	// (0x000108ca) vidtel_button_pane

0x9647,	// (0x00018e02) bg_button_pane_cp034

0xf03c,	// (0x0001e7f7) vidtel_button_pane_g1

0xf044,	// (0x0001e7ff) vidtel_button_pane_t1

0xd569,	// (0x0001cd24) aid_size_vtel_slider_touch

0xd6c1,	// (0x0001ce7c) scroll_pane_cp039

0x761b,	// (0x00016dd6) ncim_query_button_pane_cp01_ParamLimits

0x763a,	// (0x00016df5) ncimui_query_pane_g1_ParamLimits

0x96bc,	// (0x00018e77) input_focus_pane_cp012_ParamLimits

0xdff3,	// (0x0001d7ae) ncim_query_entry_pane_t1_ParamLimits

0xd6c1,	// (0x0001ce7c) scroll_pane_cp039_ParamLimits

0xaa0f,	// (0x0001a1ca) navi_pane_bcale_mc_g1

0xaa17,	// (0x0001a1d2) navi_pane_bcale_mc_t1

0xe459,	// (0x0001dc14) main_sp_fs_email_pane_g1

0xe465,	// (0x0001dc20) main_sp_fs_email_pane_g2

0x0001,

0xfce5,	// (0x0001f4a0) main_sp_fs_email_pane_g

0xe932,	// (0x0001e0ed) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe932,	// (0x0001e0ed) list_single_cale_mrui_row_pane_g3

0x8960,	// (0x0001811b) list_single_recal_day_pane_g5_event_pane

0xeb0e,	// (0x0001e2c9) list_single_recal_day_pane_g7

0xf05a,	// (0x0001e815) list_recal_day_event_pane_cp01

0xf063,	// (0x0001e81e) list_recal_vselct_arw_lo_pane_cp01

0xf06b,	// (0x0001e826) list_recal_vselct_arw_up_pane_cp01

0xf073,	// (0x0001e82e) list_recal_vselct_pane_cp01

0xd5b5,	// (0x0001cd70) list_recal_day_event_pane_cp01_g1

0xf07d,	// (0x0001e838) list_recal_day_event_pane_cp01_t1

0xeb16,	// (0x0001e2d1) list_single_recal_day_pane_t1_ParamLimits

0xeb28,	// (0x0001e2e3) list_single_recal_day_pane_t2_ParamLimits

0xfe3d,	// (0x0001f5f8) list_single_recal_day_pane_t_ParamLimits

0x9d6d,	// (0x00019528) bg_notes_pane_ParamLimits

0x9e18,	// (0x000195d3) list_notes_pane_ParamLimits

0x0165,	// (0x0000f920) scroll_pane_cp06_ParamLimits

0x9e54,	// (0x0001960f) main_notes_pane_ParamLimits

0x9647,	// (0x00018e02) main_welc_pane

0x9520,	// (0x00018cdb) main_welc_body_pane_ParamLimits

0x9520,	// (0x00018cdb) main_welc_body_pane

0x953f,	// (0x00018cfa) main_welc_opti_pane_ParamLimits

0x953f,	// (0x00018cfa) main_welc_opti_pane

0x9588,	// (0x00018d43) main_welc_pane_t1_ParamLimits

0x9588,	// (0x00018d43) main_welc_pane_t1

0xef08,	// (0x0001e6c3) main_welc_body_row_pane_ParamLimits

0xef08,	// (0x0001e6c3) main_welc_body_row_pane

0xd619,	// (0x0001cdd4) main_welc_opti_row_pane_ParamLimits

0xd619,	// (0x0001cdd4) main_welc_opti_row_pane

0xf08b,	// (0x0001e846) main_welc_opti_row_pane_g1

0x95aa,	// (0x00018d65) main_welc_opti_row_pane_t1

0xf093,	// (0x0001e84e) main_welc_body_row_pane_t1

0xeda3,	// (0x0001e55e) popup_notif_wgt_heading_pane

0xedbd,	// (0x0001e578) aid_size_list_notif_wgt_del_ParamLimits

0xedca,	// (0x0001e585) list_notif_wgt_row_pane_g1_ParamLimits

0xedd6,	// (0x0001e591) list_notif_wgt_row_pane_g2_ParamLimits

0xede5,	// (0x0001e5a0) list_notif_wgt_row_pane_g3_ParamLimits

0xfea4,	// (0x0001f65f) list_notif_wgt_row_pane_g_ParamLimits

0xedf2,	// (0x0001e5ad) list_notif_wgt_row_pane_t1_ParamLimits

0xee08,	// (0x0001e5c3) list_notif_wgt_row_pane_t2_ParamLimits

0xee1a,	// (0x0001e5d5) list_notif_wgt_row_pane_t3_ParamLimits

0xfeab,	// (0x0001f666) list_notif_wgt_row_pane_t_ParamLimits

0x8e54,	// (0x0001860f) listrow_wgtman_pane_g1_ParamLimits

0x8e61,	// (0x0001861c) listrow_wgtman_pane_g2_ParamLimits

0xfed4,	// (0x0001f68f) listrow_wgtman_pane_g_ParamLimits

0x8e7f,	// (0x0001863a) listrow_wgtman_pane_t1_ParamLimits

0x8e97,	// (0x00018652) listrow_wgtman_pane_t2_ParamLimits

0xfed9,	// (0x0001f694) listrow_wgtman_pane_t_ParamLimits

0x8ebd,	// (0x00018678) wait_bar_pane_cp09_ParamLimits

0x9647,	// (0x00018e02) bg_popup_heading_pane_cp02

0xf0a2,	// (0x0001e85d) popup_notif_wgt_heading_pane_g1

0xf0aa,	// (0x0001e865) popup_notif_wgt_heading_pane_t1

0x9647,	// (0x00018e02) main_vids_pane

0x9647,	// (0x00018e02) vids_listscroll_pane

0x95b9,	// (0x00018d74) scroll_pane_cp040

0x9647,	// (0x00018e02) vids_list_pane

0x95c4,	// (0x00018d7f) vids_list_double_pane_ParamLimits

0x95c4,	// (0x00018d7f) vids_list_double_pane

0x95d5,	// (0x00018d90) vids_list_double_pane_g1

0x95de,	// (0x00018d99) vids_list_double_pane_t1

0x95ee,	// (0x00018da9) vids_list_double_pane_t2

0x0001,

0xff5d,	// (0x0001f718) vids_list_double_pane_t

0x96bc,	// (0x00018e77) main_ncimui_pane_ParamLimits

0x7451,	// (0x00016c0c) main_ncimui_pane_g1_ParamLimits

0x745d,	// (0x00016c18) main_ncimui_pane_g2_ParamLimits

0x745d,	// (0x00016c18) main_ncimui_pane_g2

0x0001,

0xfbea,	// (0x0001f3a5) main_ncimui_pane_g_ParamLimits

0xfbea,	// (0x0001f3a5) main_ncimui_pane_g

0x955e,	// (0x00018d19) main_welc_pane_g1_ParamLimits

0x955e,	// (0x00018d19) main_welc_pane_g1

0x9573,	// (0x00018d2e) main_welc_pane_g2_ParamLimits

0x9573,	// (0x00018d2e) main_welc_pane_g2

0x0001,

0xff58,	// (0x0001f713) main_welc_pane_g_ParamLimits

0xff58,	// (0x0001f713) main_welc_pane_g

0x9d6d,	// (0x00019528) listscroll_mce_pane_ParamLimits

0xab66,	// (0x0001a321) wait_bar_pane_cp10

0xc01d,	// (0x0001b7d8) main_cale_day_pane_ParamLimits

0xc01d,	// (0x0001b7d8) main_cale_week_pane_ParamLimits

0x9d6d,	// (0x00019528) main_messa_pane_ParamLimits

0x4b0d,	// (0x000142c8) main_clock2_btn_pane_ParamLimits

0x4b0d,	// (0x000142c8) main_clock2_btn_pane

0xc92e,	// (0x0001c0e9) main_clock2_btn_pane_cp01_ParamLimits

0xc92e,	// (0x0001c0e9) main_clock2_btn_pane_cp01

0xe8be,	// (0x0001e079) list_cale_mrui_pane_ParamLimits

0xee50,	// (0x0001e60b) main_cf0_pane_g2

0x0001,

0xfeb2,	// (0x0001f66d) main_cf0_pane_g

0x90f8,	// (0x000188b3) area_left_week_number_pane_ParamLimits

0x9106,	// (0x000188c1) area_top_day_name_pane_ParamLimits

0x9119,	// (0x000188d4) frame_month_view_pane_ParamLimits

0xef58,	// (0x0001e713) grid_month_view_pane_ParamLimits

0xef66,	// (0x0001e721) frm_month_g1_ParamLimits

0x91a4,	// (0x0001895f) frm_month_g2_ParamLimits

0x91b7,	// (0x00018972) frm_month_g3_ParamLimits

0x91ca,	// (0x00018985) frm_month_g4_ParamLimits

0x91dd,	// (0x00018998) frm_month_g5_ParamLimits

0x91f0,	// (0x000189ab) frm_month_g6_ParamLimits

0x9205,	// (0x000189c0) frm_month_g7_ParamLimits

0xef73,	// (0x0001e72e) frm_month_g8_ParamLimits

0x921a,	// (0x000189d5) frm_month_g9_ParamLimits

0x922a,	// (0x000189e5) frm_month_g10_ParamLimits

0x923a,	// (0x000189f5) frm_month_g11_ParamLimits

0x924a,	// (0x00018a05) frm_month_g12_ParamLimits

0x925c,	// (0x00018a17) frm_month_g13_ParamLimits

0x9270,	// (0x00018a2b) frm_month_g14_ParamLimits

0x9284,	// (0x00018a3f) frm_month_g15_ParamLimits

0x9298,	// (0x00018a53) frm_month_g16_ParamLimits

0xff03,	// (0x0001f6be) frm_month_g_ParamLimits

0xef80,	// (0x0001e73b) cell_top_day_name_pane_t1_ParamLimits

0x92ac,	// (0x00018a67) cell_area_left_week_number_pane_g1_ParamLimits

0x92b8,	// (0x00018a73) cell_area_left_week_number_pane_t1_ParamLimits

0xc79a,	// (0x0001bf55) cell_month_view_pane_g1_ParamLimits

0x92cb,	// (0x00018a86) cell_month_view_pane_t1_ParamLimits

0x9d65,	// (0x00019520) main_clock2_btn_pane_g1

0xf0b8,	// (0x0001e873) main_clock2_btn_pane_t1

0x96bc,	// (0x00018e77) listscroll_cmail_pane_ParamLimits

0xe459,	// (0x0001dc14) main_sp_fs_email_pane_g1_ParamLimits

0xe465,	// (0x0001dc20) main_sp_fs_email_pane_g2_ParamLimits

0xfce5,	// (0x0001f4a0) main_sp_fs_email_pane_g_ParamLimits

0xea7d,	// (0x0001e238) list_recal_day_pane_ParamLimits

0xea8e,	// (0x0001e249) mian_recal_day_pane_t1

0x80d9,	// (0x00017894) list_single_dyc_row_text_pane_t4_ParamLimits

0x80d9,	// (0x00017894) list_single_dyc_row_text_pane_t4

0x8122,	// (0x000178dd) list_single_dyc_row_text_pane_t5_ParamLimits

0x8122,	// (0x000178dd) list_single_dyc_row_text_pane_t5

0xe50f,	// (0x0001dcca) list_single_dyc_row_text_pane_t6_ParamLimits

0xe50f,	// (0x0001dcca) list_single_dyc_row_text_pane_t6

0x1f1c,	// (0x000116d7) aid_mgn_list_cale_time_pane

0x96bc,	// (0x00018e77) main_gallery2_pane_ParamLimits

0xc942,	// (0x0001c0fd) main_clock2_pane_cp01_t1

0xc950,	// (0x0001c10b) main_clock2_pane_cp01_t3

0x0001,

0xf7c0,	// (0x0001ef7b) main_clock2_pane_cp01_t

0x0581,	// (0x0000fd3c) cale_week_scroll_pane_g16_ParamLimits

0x0581,	// (0x0000fd3c) cale_week_scroll_pane_g16

0xa071,	// (0x0001982c) vorec_slider_pane

0xf044,	// (0x0001e7ff) vidtel_button_pane_t1_ParamLimits

0x89c6,	// (0x00018181) main_fs_bigclock_clock_pane_g1_ParamLimits

0x89c6,	// (0x00018181) main_fs_bigclock_clock_pane_g2_ParamLimits

0x89d9,	// (0x00018194) main_fs_bigclock_clock_pane_g3_ParamLimits

0x89d9,	// (0x00018194) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfe60,	// (0x0001f61b) main_fs_bigclock_clock_pane_g_ParamLimits

0x89f0,	// (0x000181ab) main_fs_bigclock_clock_pane_t1_ParamLimits

0x8a06,	// (0x000181c1) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfe69,	// (0x0001f624) main_fs_bigclock_clock_pane_t_ParamLimits

0x4284,	// (0x00013a3f) main_mup3_lyrics_pane_ParamLimits

0x4284,	// (0x00013a3f) main_mup3_lyrics_pane

0x9624,	// (0x00018ddf) main_mup3_lyrics_pane_t1_ParamLimits

0x9624,	// (0x00018ddf) main_mup3_lyrics_pane_t1

0xce4f,	// (0x0001c60a) aid_main_mp4_pane_t1_area

0xce59,	// (0x0001c614) aid_main_mp4_pane_t2_area

0xcf05,	// (0x0001c6c0) main_mp4_pane_g7_ParamLimits

0xcf05,	// (0x0001c6c0) main_mp4_pane_g7

0xcf11,	// (0x0001c6cc) main_mp4_pane_g8_ParamLimits

0xcf11,	// (0x0001c6cc) main_mp4_pane_g8

0x5665,	// (0x00014e20) aid_call6_pane_g1_size

0x9482,	// (0x00018c3d) list_double_large_graphic_phob2_other_pane_ParamLimits

0x9482,	// (0x00018c3d) list_double_large_graphic_phob2_other_pane

0x963f,	// (0x00018dfa) list_double_large_graphic_phob2_other_pane_g1

0x9647,	// (0x00018e02) list_highlight_pane_cp026
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

} // end of namespace AknLayoutScalable_Elaf_pvl4_apps_vga4_lsc_tch_Normal
