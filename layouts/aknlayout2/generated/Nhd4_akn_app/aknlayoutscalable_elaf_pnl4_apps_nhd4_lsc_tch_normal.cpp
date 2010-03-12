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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x0000e177 };

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
0x09cf,	// (0x0000eb46) Screen

0x09db,	// (0x0000eb52) application_window

0x0a17,	// (0x0000eb8e) area_bottom_pane_ParamLimits

0x0a17,	// (0x0000eb8e) area_bottom_pane

0x0a50,	// (0x0000ebc7) area_top_pane_ParamLimits

0x0a50,	// (0x0000ebc7) area_top_pane

0x91c5,	// (0x0001733c) call_video_uplink_pane_ParamLimits

0x91c5,	// (0x0001733c) call_video_uplink_pane

0x0ac5,	// (0x0000ec3c) main_pane_ParamLimits

0x0ac5,	// (0x0000ec3c) main_pane

0xbbeb,	// (0x00019d62) context_pane

0x3b3e,	// (0x00011cb5) navi_pane

0x3b66,	// (0x00011cdd) popup_cale_events_window_ParamLimits

0x3b66,	// (0x00011cdd) popup_cale_events_window

0xbbfe,	// (0x00019d75) popup_mup_playback_window

0x3b7e,	// (0x00011cf5) signal_pane

0x9996,	// (0x00017b0d) main_browser_pane

0xa6ff,	// (0x00018876) main_burst_pane

0x389e,	// (0x00011a15) main_calc_pane

0xa6ff,	// (0x00018876) main_cale_day_pane

0x9996,	// (0x00017b0d) main_cale_month_pane

0xa6ff,	// (0x00018876) main_cale_week_pane

0xa6ff,	// (0x00018876) main_call_pane

0x9602,	// (0x00017779) main_call_poc_pane

0xa6ff,	// (0x00018876) main_camera_pane

0xa6ff,	// (0x00018876) main_chi_dic_pane

0xa58e,	// (0x00018705) main_clock_pane

0x9602,	// (0x00017779) main_fmradio_pane

0xa6ff,	// (0x00018876) main_graph_messa_pane

0x9602,	// (0x00017779) main_help_pane

0x9996,	// (0x00017b0d) main_im_pane

0x985d,	// (0x000179d4) main_image_pane_ParamLimits

0x985d,	// (0x000179d4) main_image_pane

0x9602,	// (0x00017779) main_location2_pane

0xa6ff,	// (0x00018876) main_location_pane

0x9602,	// (0x00017779) main_messa_pane

0x9602,	// (0x00017779) main_mp2_pane

0xa6ff,	// (0x00018876) main_mp_pane

0x9602,	// (0x00017779) main_msg_pane

0x9602,	// (0x00017779) main_mup_eq_pane

0x9602,	// (0x00017779) main_mup_pane

0x9996,	// (0x00017b0d) main_notes_pane

0x9602,	// (0x00017779) main_pec_pane

0x9602,	// (0x00017779) main_phob_pane

0x9602,	// (0x00017779) main_pinb_pane

0x9602,	// (0x00017779) main_postcard_pane

0x9602,	// (0x00017779) main_qdial_pane

0xa6ff,	// (0x00018876) main_skin_pane

0x9602,	// (0x00017779) main_smil2_pane

0xa6ff,	// (0x00018876) main_smil_pane

0xa6ff,	// (0x00018876) main_video_pane

0xa6ff,	// (0x00018876) main_video_tele_pane

0x985d,	// (0x000179d4) main_viewer_pane_ParamLimits

0x985d,	// (0x000179d4) main_viewer_pane

0xa6ff,	// (0x00018876) main_vorec_pane

0x38f2,	// (0x00011a69) popup_blid_sat_info_window_ParamLimits

0x38f2,	// (0x00011a69) popup_blid_sat_info_window

0x394a,	// (0x00011ac1) popup_dyc_status_message_window_ParamLimits

0x394a,	// (0x00011ac1) popup_dyc_status_message_window

0x3962,	// (0x00011ad9) popup_grid_large_graphic_window_ParamLimits

0x3962,	// (0x00011ad9) popup_grid_large_graphic_window

0x3a18,	// (0x00011b8f) popup_loc_request_window_ParamLimits

0x3a18,	// (0x00011b8f) popup_loc_request_window

0x3b16,	// (0x00011c8d) popup_wml_address_window_ParamLimits

0x3b16,	// (0x00011c8d) popup_wml_address_window

0x36d8,	// (0x0001184f) call_muted_g1

0x3390,	// (0x00011507) popup_call_audio_conf_window_ParamLimits

0x3390,	// (0x00011507) popup_call_audio_conf_window

0x36ec,	// (0x00011863) popup_call_audio_first_window_ParamLimits

0x36ec,	// (0x00011863) popup_call_audio_first_window

0x3762,	// (0x000118d9) popup_call_audio_in_window_ParamLimits

0x3762,	// (0x000118d9) popup_call_audio_in_window

0x379e,	// (0x00011915) popup_call_audio_out_window_ParamLimits

0x379e,	// (0x00011915) popup_call_audio_out_window

0x37d8,	// (0x0001194f) popup_call_audio_second_window_ParamLimits

0x37d8,	// (0x0001194f) popup_call_audio_second_window

0x382e,	// (0x000119a5) popup_call_audio_wait_window_ParamLimits

0x382e,	// (0x000119a5) popup_call_audio_wait_window

0x3863,	// (0x000119da) popup_number_entry_window_ParamLimits

0x3863,	// (0x000119da) popup_number_entry_window

0x91f1,	// (0x00017368) bg_popup_call_pane_cp05_ParamLimits

0x91f1,	// (0x00017368) bg_popup_call_pane_cp05

0x9211,	// (0x00017388) popup_number_entry_window_t1

0x9224,	// (0x0001739b) popup_number_entry_window_t2

0x9236,	// (0x000173ad) popup_number_entry_window_t3

0x0003,

0xf0d8,	// (0x0001d24f) popup_number_entry_window_t

0x9248,	// (0x000173bf) text_title_cp2

0x925b,	// (0x000173d2) bg_popup_call_pane_cp_ParamLimits

0x925b,	// (0x000173d2) bg_popup_call_pane_cp

0x9269,	// (0x000173e0) call_thumbnail_pane

0x9271,	// (0x000173e8) popup_call_audio_in_window_g1_ParamLimits

0x9271,	// (0x000173e8) popup_call_audio_in_window_g1

0x927d,	// (0x000173f4) popup_call_audio_in_window_g2_ParamLimits

0x927d,	// (0x000173f4) popup_call_audio_in_window_g2

0x9289,	// (0x00017400) popup_call_audio_in_window_g3_ParamLimits

0x9289,	// (0x00017400) popup_call_audio_in_window_g3

0x0002,

0xf0e1,	// (0x0001d258) popup_call_audio_in_window_g_ParamLimits

0xf0e1,	// (0x0001d258) popup_call_audio_in_window_g

0x9295,	// (0x0001740c) popup_call_audio_in_window_t1_ParamLimits

0x9295,	// (0x0001740c) popup_call_audio_in_window_t1

0x92b0,	// (0x00017427) popup_call_audio_in_window_t2_ParamLimits

0x92b0,	// (0x00017427) popup_call_audio_in_window_t2

0x92cb,	// (0x00017442) popup_call_audio_in_window_t3_ParamLimits

0x92cb,	// (0x00017442) popup_call_audio_in_window_t3

0x0002,

0xf0e8,	// (0x0001d25f) popup_call_audio_in_window_t_ParamLimits

0xf0e8,	// (0x0001d25f) popup_call_audio_in_window_t

0x925b,	// (0x000173d2) bg_popup_call_pane_cp01_ParamLimits

0x925b,	// (0x000173d2) bg_popup_call_pane_cp01

0x9269,	// (0x000173e0) call_thumbnail_pane_cp02

0x92de,	// (0x00017455) call_type_pane_cp022

0x92e6,	// (0x0001745d) popup_call_audio_out_window_g1_ParamLimits

0x92e6,	// (0x0001745d) popup_call_audio_out_window_g1

0x92f8,	// (0x0001746f) popup_call_audio_out_window_g2_ParamLimits

0x92f8,	// (0x0001746f) popup_call_audio_out_window_g2

0x9304,	// (0x0001747b) popup_call_audio_out_window_g3_ParamLimits

0x9304,	// (0x0001747b) popup_call_audio_out_window_g3

0x0002,

0xf0ef,	// (0x0001d266) popup_call_audio_out_window_g_ParamLimits

0xf0ef,	// (0x0001d266) popup_call_audio_out_window_g

0x9316,	// (0x0001748d) popup_call_audio_out_window_t1_ParamLimits

0x9316,	// (0x0001748d) popup_call_audio_out_window_t1

0x932e,	// (0x000174a5) popup_call_audio_out_window_t2_ParamLimits

0x932e,	// (0x000174a5) popup_call_audio_out_window_t2

0x0001,

0xf0f6,	// (0x0001d26d) popup_call_audio_out_window_t_ParamLimits

0xf0f6,	// (0x0001d26d) popup_call_audio_out_window_t

0x9343,	// (0x000174ba) bg_popup_call_pane_ParamLimits

0x9343,	// (0x000174ba) bg_popup_call_pane

0x0c7d,	// (0x0000edf4) call_thumbnail_pane_cp_ParamLimits

0x0c7d,	// (0x0000edf4) call_thumbnail_pane_cp

0x93c7,	// (0x0001753e) call_type_pane_cp01_ParamLimits

0x93c7,	// (0x0001753e) call_type_pane_cp01

0x940b,	// (0x00017582) popup_call_audio_first_window_g1_ParamLimits

0x940b,	// (0x00017582) popup_call_audio_first_window_g1

0x9457,	// (0x000175ce) popup_call_audio_first_window_g2_ParamLimits

0x9457,	// (0x000175ce) popup_call_audio_first_window_g2

0x0001,

0xf0fb,	// (0x0001d272) popup_call_audio_first_window_g_ParamLimits

0xf0fb,	// (0x0001d272) popup_call_audio_first_window_g

0x949b,	// (0x00017612) popup_call_audio_first_window_t1_ParamLimits

0x949b,	// (0x00017612) popup_call_audio_first_window_t1

0x9547,	// (0x000176be) popup_call_audio_first_window_t4_ParamLimits

0x9547,	// (0x000176be) popup_call_audio_first_window_t4

0x95d3,	// (0x0001774a) popup_call_audio_first_window_t5_ParamLimits

0x95d3,	// (0x0001774a) popup_call_audio_first_window_t5

0x0002,

0xf100,	// (0x0001d277) popup_call_audio_first_window_t_ParamLimits

0xf100,	// (0x0001d277) popup_call_audio_first_window_t

0x9602,	// (0x00017779) bg_popup_call_pane_cp02

0x960c,	// (0x00017783) call_type_pane_cp023

0x9614,	// (0x0001778b) popup_call_audio_wait_window_g1

0x961c,	// (0x00017793) popup_call_audio_wait_window_g2

0x0001,

0xf107,	// (0x0001d27e) popup_call_audio_wait_window_g

0x9624,	// (0x0001779b) popup_call_audio_wait_window_t3

0x9632,	// (0x000177a9) bg_popup_call_pane_cp03_ParamLimits

0x9632,	// (0x000177a9) bg_popup_call_pane_cp03

0x9692,	// (0x00017809) call_thumbnail_pane_cp011_ParamLimits

0x9692,	// (0x00017809) call_thumbnail_pane_cp011

0x969e,	// (0x00017815) call_type_pane_cp034_ParamLimits

0x969e,	// (0x00017815) call_type_pane_cp034

0x96da,	// (0x00017851) popup_call_audio_second_window_g1_ParamLimits

0x96da,	// (0x00017851) popup_call_audio_second_window_g1

0x9716,	// (0x0001788d) popup_call_audio_second_window_g2_ParamLimits

0x9716,	// (0x0001788d) popup_call_audio_second_window_g2

0x0001,

0xf10c,	// (0x0001d283) popup_call_audio_second_window_g_ParamLimits

0xf10c,	// (0x0001d283) popup_call_audio_second_window_g

0x9752,	// (0x000178c9) popup_call_audio_second_window_t1_ParamLimits

0x9752,	// (0x000178c9) popup_call_audio_second_window_t1

0x97d3,	// (0x0001794a) popup_call_audio_second_window_t2_ParamLimits

0x97d3,	// (0x0001794a) popup_call_audio_second_window_t2

0x9809,	// (0x00017980) popup_call_audio_second_window_t3_ParamLimits

0x9809,	// (0x00017980) popup_call_audio_second_window_t3

0x0002,

0xf111,	// (0x0001d288) popup_call_audio_second_window_t_ParamLimits

0xf111,	// (0x0001d288) popup_call_audio_second_window_t

0x9602,	// (0x00017779) bg_popup_call_pane_cp04

0x983f,	// (0x000179b6) list_conf_pane

0x9847,	// (0x000179be) popup_call_audio_conf_window_t1

0x9855,	// (0x000179cc) call_thumbnail_pane_g1

0x985d,	// (0x000179d4) bg_pinb_pane_ParamLimits

0x985d,	// (0x000179d4) bg_pinb_pane

0x986b,	// (0x000179e2) find_pinb_pane

0x9874,	// (0x000179eb) listscroll_pinb_pane_ParamLimits

0x9874,	// (0x000179eb) listscroll_pinb_pane

0x9883,	// (0x000179fa) pinb_bg_pane_g1

0x0ca1,	// (0x0000ee18) pinb_bg_pane_g2

0x0cad,	// (0x0000ee24) pinb_bg_pane_g3

0x0cb9,	// (0x0000ee30) pinb_bg_pane_g4

0x0cc5,	// (0x0000ee3c) pinb_bg_pane_g5

0x0cd1,	// (0x0000ee48) pinb_bg_pane_g6

0x0cdc,	// (0x0000ee53) pinb_bg_pane_g7

0x0ce7,	// (0x0000ee5e) pinb_bg_pane_g8

0x0cf2,	// (0x0000ee69) pinb_bg_pane_g9

0x0cfc,	// (0x0000ee73) pinb_bg_pane_g10

0x0009,

0xf118,	// (0x0001d28f) pinb_bg_pane_g

0x0d11,	// (0x0000ee88) grid_pinb_pane

0x0d1a,	// (0x0000ee91) list_pinb_pane

0x0d23,	// (0x0000ee9a) scroll_pane_cp01_ParamLimits

0x0d23,	// (0x0000ee9a) scroll_pane_cp01

0x9895,	// (0x00017a0c) find_pinb_pane_g1_ParamLimits

0x9895,	// (0x00017a0c) find_pinb_pane_g1

0x98ad,	// (0x00017a24) find_pinb_pane_t1

0x98bf,	// (0x00017a36) find_pinb_pane_t2

0x0001,

0xf132,	// (0x0001d2a9) find_pinb_pane_t

0x98d4,	// (0x00017a4b) input_focus_pane_cp01_ParamLimits

0x98d4,	// (0x00017a4b) input_focus_pane_cp01

0x0d35,	// (0x0000eeac) cell_pinb_pane_ParamLimits

0x0d35,	// (0x0000eeac) cell_pinb_pane

0x0d67,	// (0x0000eede) cell_pinb_pane_g1_ParamLimits

0x0d67,	// (0x0000eede) cell_pinb_pane_g1

0x0d77,	// (0x0000eeee) cell_pinb_pane_g2_ParamLimits

0x0d77,	// (0x0000eeee) cell_pinb_pane_g2

0x98e0,	// (0x00017a57) cell_pinb_pane_g3_ParamLimits

0x98e0,	// (0x00017a57) cell_pinb_pane_g3

0x0002,

0xf137,	// (0x0001d2ae) cell_pinb_pane_g_ParamLimits

0xf137,	// (0x0001d2ae) cell_pinb_pane_g

0x9602,	// (0x00017779) grid_highlight_pane_cp01

0x0d83,	// (0x0000eefa) list_pinb_item_pane_ParamLimits

0x0d83,	// (0x0000eefa) list_pinb_item_pane

0x9602,	// (0x00017779) list_highlight_pane_cp02

0x98ec,	// (0x00017a63) list_pinb_item_pane_g1_ParamLimits

0x98ec,	// (0x00017a63) list_pinb_item_pane_g1

0x98f9,	// (0x00017a70) list_pinb_item_pane_g2_ParamLimits

0x98f9,	// (0x00017a70) list_pinb_item_pane_g2

0x0d97,	// (0x0000ef0e) list_pinb_item_pane_g3_ParamLimits

0x0d97,	// (0x0000ef0e) list_pinb_item_pane_g3

0x9905,	// (0x00017a7c) list_pinb_item_pane_g4_ParamLimits

0x9905,	// (0x00017a7c) list_pinb_item_pane_g4

0x0003,

0xf13e,	// (0x0001d2b5) list_pinb_item_pane_g_ParamLimits

0xf13e,	// (0x0001d2b5) list_pinb_item_pane_g

0x9911,	// (0x00017a88) list_pinb_item_pane_t1_ParamLimits

0x9911,	// (0x00017a88) list_pinb_item_pane_t1

0x0dc6,	// (0x0000ef3d) calc_display_pane

0x0dee,	// (0x0000ef65) calc_paper_pane

0x0e11,	// (0x0000ef88) grid_calc_pane

0x9602,	// (0x00017779) bg_list_pane_cp01

0x0e3f,	// (0x0000efb6) clock_g1

0x0e47,	// (0x0000efbe) clock_g2

0x0001,

0xf147,	// (0x0001d2be) clock_g

0x0e4f,	// (0x0000efc6) clock_t1_ParamLimits

0x0e4f,	// (0x0000efc6) clock_t1

0x0e64,	// (0x0000efdb) clock_t2_ParamLimits

0x0e64,	// (0x0000efdb) clock_t2

0x0e76,	// (0x0000efed) clock_t3_ParamLimits

0x0e76,	// (0x0000efed) clock_t3

0x0e88,	// (0x0000efff) clock_t4_ParamLimits

0x0e88,	// (0x0000efff) clock_t4

0x0e9a,	// (0x0000f011) clock_t5_ParamLimits

0x0e9a,	// (0x0000f011) clock_t5

0x0eaf,	// (0x0000f026) clock_t6_ParamLimits

0x0eaf,	// (0x0000f026) clock_t6

0x0ec1,	// (0x0000f038) clock_t7_ParamLimits

0x0ec1,	// (0x0000f038) clock_t7

0x0ed3,	// (0x0000f04a) clock_t8_ParamLimits

0x0ed3,	// (0x0000f04a) clock_t8

0x0ee7,	// (0x0000f05e) clock_t9_ParamLimits

0x0ee7,	// (0x0000f05e) clock_t9

0x0008,

0xf14c,	// (0x0001d2c3) clock_t_ParamLimits

0xf14c,	// (0x0001d2c3) clock_t

0x9930,	// (0x00017aa7) popup_clock_analogue_window_cp02

0x9930,	// (0x00017aa7) popup_clock_digital_window_cp01

0x9938,	// (0x00017aaf) listscroll_help_pane

0x9602,	// (0x00017779) phob_pre_status_pane

0x9942,	// (0x00017ab9) grid_qdial_pane

0x9602,	// (0x00017779) listscroll_mce_pane

0x994c,	// (0x00017ac3) bg_notes_pane

0x995a,	// (0x00017ad1) list_notes_pane

0x0efb,	// (0x0000f072) scroll_pane_cp06

0x9968,	// (0x00017adf) bg_calc_paper_pane

0x997c,	// (0x00017af3) list_calc_pane

0x9996,	// (0x00017b0d) bg_calc_display_pane

0x0f0f,	// (0x0000f086) calc_display_pane_t1

0x0f21,	// (0x0000f098) calc_display_pane_t2

0x99a2,	// (0x00017b19) calc_display_pane_t3

0x0002,

0xf15f,	// (0x0001d2d6) calc_display_pane_t

0x0f33,	// (0x0000f0aa) cell_calc_pane_ParamLimits

0x0f33,	// (0x0000f0aa) cell_calc_pane

0x99b4,	// (0x00017b2b) bg_calc_paper_pane_g1

0x99c0,	// (0x00017b37) bg_calc_paper_pane_g2

0x99cc,	// (0x00017b43) bg_calc_paper_pane_g3

0x99d8,	// (0x00017b4f) bg_calc_paper_pane_g4

0x99e4,	// (0x00017b5b) bg_calc_paper_pane_g5

0x0f6a,	// (0x0000f0e1) bg_calc_paper_pane_g6

0x0f7b,	// (0x0000f0f2) bg_calc_paper_pane_g7

0x0f8c,	// (0x0000f103) bg_calc_paper_pane_g8

0x0007,

0xf166,	// (0x0001d2dd) bg_calc_paper_pane_g

0x0f9f,	// (0x0000f116) calc_bg_paper_pane_g9

0x0fb2,	// (0x0000f129) list_calc_item_pane_ParamLimits

0x0fb2,	// (0x0000f129) list_calc_item_pane

0x99f0,	// (0x00017b67) list_calc_item_pane_g1

0x99fd,	// (0x00017b74) list_calc_item_pane_t1_ParamLimits

0x99fd,	// (0x00017b74) list_calc_item_pane_t1

0x0fca,	// (0x0000f141) list_calc_item_pane_t2_ParamLimits

0x0fca,	// (0x0000f141) list_calc_item_pane_t2

0x0001,

0xf177,	// (0x0001d2ee) list_calc_item_pane_t_ParamLimits

0xf177,	// (0x0001d2ee) list_calc_item_pane_t

0x9a0f,	// (0x00017b86) cell_calc_pane_g1

0x9a19,	// (0x00017b90) grid_highlight_pane_cp02

0x9a3b,	// (0x00017bb2) bg_calc_display_pane_g1

0x9a44,	// (0x00017bbb) bg_calc_display_pane_g2

0x9a4e,	// (0x00017bc5) bg_calc_display_pane_g3

0x0002,

0xf181,	// (0x0001d2f8) bg_calc_display_pane_g

0x0ffc,	// (0x0000f173) cell_qdial_pane_ParamLimits

0x0ffc,	// (0x0000f173) cell_qdial_pane

0x1010,	// (0x0000f187) cell_qdial_pane_g1_ParamLimits

0x1010,	// (0x0000f187) cell_qdial_pane_g1

0x1026,	// (0x0000f19d) cell_qdial_pane_g2_ParamLimits

0x1026,	// (0x0000f19d) cell_qdial_pane_g2

0x9a57,	// (0x00017bce) cell_qdial_pane_g3_ParamLimits

0x9a57,	// (0x00017bce) cell_qdial_pane_g3

0x0003,

0xf188,	// (0x0001d2ff) cell_qdial_pane_g_ParamLimits

0xf188,	// (0x0001d2ff) cell_qdial_pane_g

0x104d,	// (0x0000f1c4) cell_qdial_pane_t1_ParamLimits

0x104d,	// (0x0000f1c4) cell_qdial_pane_t1

0x1065,	// (0x0000f1dc) cell_qdial_pane_t2_ParamLimits

0x1065,	// (0x0000f1dc) cell_qdial_pane_t2

0x1078,	// (0x0000f1ef) cell_qdial_pane_t3_ParamLimits

0x1078,	// (0x0000f1ef) cell_qdial_pane_t3

0x0002,

0xf191,	// (0x0001d308) cell_qdial_pane_t_ParamLimits

0xf191,	// (0x0001d308) cell_qdial_pane_t

0x9602,	// (0x00017779) grid_highlight_pane_cp04

0x9a63,	// (0x00017bda) thumbnail_qdial_pane_ParamLimits

0x9a63,	// (0x00017bda) thumbnail_qdial_pane

0x9abf,	// (0x00017c36) list_help_pane

0x9ac8,	// (0x00017c3f) scroll_pane_cp02

0x108b,	// (0x0000f202) help_list_pane_t1_ParamLimits

0x108b,	// (0x0000f202) help_list_pane_t1

0x9ad1,	// (0x00017c48) bg_notes_pane_g2

0x9ad9,	// (0x00017c50) bg_notes_pane_g3

0x9ae1,	// (0x00017c58) notes_bg_pane_g1

0x9ae9,	// (0x00017c60) notes_bg_pane_g4

0x9af1,	// (0x00017c68) notes_bg_pane_g5

0x9af9,	// (0x00017c70) notes_bg_pane_g6

0x9b01,	// (0x00017c78) notes_bg_pane_g7

0x9b09,	// (0x00017c80) notes_bg_pane_g8

0x9b11,	// (0x00017c88) notes_bg_pane_g9

0x0006,

0xf1af,	// (0x0001d326) notes_bg_pane_g

0x10ab,	// (0x0000f222) list_notes_text_pane_ParamLimits

0x10ab,	// (0x0000f222) list_notes_text_pane

0x9b19,	// (0x00017c90) list_notes_text_pane_g1

0x10c2,	// (0x0000f239) list_notes_text_pane_t1

0x9996,	// (0x00017b0d) listscroll_cale_week_pane

0x10ed,	// (0x0000f264) bg_cale_heading_pane

0x9b33,	// (0x00017caa) bg_cale_pane_cp01

0x1105,	// (0x0000f27c) cale_week_corner_pane

0x1116,	// (0x0000f28d) cale_week_day_heading_pane

0x112e,	// (0x0000f2a5) cale_week_scroll_pane_g1

0x1143,	// (0x0000f2ba) cale_week_scroll_pane_g2

0x1154,	// (0x0000f2cb) cale_week_scroll_pane_g3

0x1165,	// (0x0000f2dc) cale_week_scroll_pane_g4

0x1176,	// (0x0000f2ed) cale_week_scroll_pane_g5

0x1189,	// (0x0000f300) cale_week_scroll_pane_g6

0x119c,	// (0x0000f313) cale_week_scroll_pane_g7

0x11af,	// (0x0000f326) cale_week_scroll_pane_g8

0x11c2,	// (0x0000f339) cale_week_scroll_pane_g9

0x11d3,	// (0x0000f34a) cale_week_scroll_pane_g10

0x11e4,	// (0x0000f35b) cale_week_scroll_pane_g11

0x11f5,	// (0x0000f36c) cale_week_scroll_pane_g12

0x1206,	// (0x0000f37d) cale_week_scroll_pane_g13

0x1217,	// (0x0000f38e) cale_week_scroll_pane_g14

0x1228,	// (0x0000f39f) cale_week_scroll_pane_g15

0x000e,

0xf1be,	// (0x0001d335) cale_week_scroll_pane_g

0x123d,	// (0x0000f3b4) cale_week_time_pane

0x1250,	// (0x0000f3c7) grid_cale_week_pane

0x1265,	// (0x0000f3dc) scroll_pane_cp08

0x127f,	// (0x0000f3f6) cell_cale_week_pane_ParamLimits

0x127f,	// (0x0000f3f6) cell_cale_week_pane

0x12bf,	// (0x0000f436) cale_week_day_heading_pane_t1

0x12d3,	// (0x0000f44a) cale_week_day_heading_pane_t2

0x12e7,	// (0x0000f45e) cale_week_day_heading_pane_t3

0x12fb,	// (0x0000f472) cale_week_day_heading_pane_t4

0x130f,	// (0x0000f486) cale_week_day_heading_pane_t5

0x1323,	// (0x0000f49a) cale_week_day_heading_pane_t6

0x1339,	// (0x0000f4b0) cale_week_day_heading_pane_t7

0x0006,

0xf1dd,	// (0x0001d354) cale_week_day_heading_pane_t

0x9b5e,	// (0x00017cd5) bg_cale_side_pane

0x134d,	// (0x0000f4c4) cale_week_time_pane_t1

0x1365,	// (0x0000f4dc) cale_week_time_pane_t2

0x137d,	// (0x0000f4f4) cale_week_time_pane_t3

0x1395,	// (0x0000f50c) cale_week_time_pane_t4

0x13ad,	// (0x0000f524) cale_week_time_pane_t5

0x13c5,	// (0x0000f53c) cale_week_time_pane_t6

0x13dd,	// (0x0000f554) cale_week_time_pane_t7

0x13f5,	// (0x0000f56c) cale_week_time_pane_t8

0x0007,

0xf1ec,	// (0x0001d363) cale_week_time_pane_t

0x140d,	// (0x0000f584) cell_cale_week_pane_g2

0x1426,	// (0x0000f59d) cell_cale_week_pane_g3_ParamLimits

0x1426,	// (0x0000f59d) cell_cale_week_pane_g3

0x9b6c,	// (0x00017ce3) grid_highlight_pane_cp07

0x9b74,	// (0x00017ceb) listscroll_gms_pane

0x9b7e,	// (0x00017cf5) grid_gms_pane

0x9b87,	// (0x00017cfe) listscroll_gms_pane_g1

0x9b8f,	// (0x00017d06) listscroll_gms_pane_g2

0x0001,

0xf1fd,	// (0x0001d374) listscroll_gms_pane_g

0x143e,	// (0x0000f5b5) scroll_pane_cp010

0x1449,	// (0x0000f5c0) cell_gms_pane_ParamLimits

0x1449,	// (0x0000f5c0) cell_gms_pane

0x145b,	// (0x0000f5d2) cell_gms_pane_g1

0x9b97,	// (0x00017d0e) cell_gms_pane_g2

0x9b19,	// (0x00017c90) cell_gms_pane_g3

0x9b9f,	// (0x00017d16) cell_gms_pane_g4

0x0003,

0xf202,	// (0x0001d379) cell_gms_pane_g

0x9ba8,	// (0x00017d1f) grid_highlight_pane_cp09

0x3680,	// (0x000117f7) phob_pre_status_pane_g1

0x3688,	// (0x000117ff) phob_pre_status_pane_g2

0x3690,	// (0x00011807) phob_pre_status_pane_g3

0x3698,	// (0x0001180f) phob_pre_status_pane_g4

0x0004,

0xf5f1,	// (0x0001d768) phob_pre_status_pane_g

0x36aa,	// (0x00011821) phob_pre_status_pane_t1

0x36b8,	// (0x0001182f) phob_pre_status_pane_t2

0x36c8,	// (0x0001183f) phob_pre_status_pane_t3

0x0002,

0xf5fc,	// (0x0001d773) phob_pre_status_pane_t

0x9602,	// (0x00017779) bg_list_pane_cp05

0x1463,	// (0x0000f5da) grid_vorec_pane

0x9bb8,	// (0x00017d2f) vorec_t1

0x9bc6,	// (0x00017d3d) vorec_t2

0x9bd4,	// (0x00017d4b) vorec_t3

0x9be2,	// (0x00017d59) vorec_t4

0x9bf0,	// (0x00017d67) vorec_t5

0x9bfe,	// (0x00017d75) vorec_t6

0x0006,

0xf20b,	// (0x0001d382) vorec_t

0x9c1a,	// (0x00017d91) wait_bar_pane_cp01

0x9c22,	// (0x00017d99) cell_vorec_pane_ParamLimits

0x9c22,	// (0x00017d99) cell_vorec_pane

0x9c35,	// (0x00017dac) cell_vorec_pane_g1

0x9602,	// (0x00017779) grid_highlight_pane_cp05

0x1485,	// (0x0000f5fc) cams_zoom_pane

0x1494,	// (0x0000f60b) image_vga_pane

0x14ae,	// (0x0000f625) main_camera_pane_g1

0x14c0,	// (0x0000f637) main_camera_pane_g2

0x14d2,	// (0x0000f649) main_camera_pane_g3

0x14e4,	// (0x0000f65b) main_camera_pane_g4

0x14f6,	// (0x0000f66d) main_camera_pane_g5

0x1508,	// (0x0000f67f) main_camera_pane_g6

0x151a,	// (0x0000f691) main_camera_pane_g7

0x0007,

0xf21a,	// (0x0001d391) main_camera_pane_g

0x152c,	// (0x0000f6a3) main_camera_pane_t1

0x1542,	// (0x0000f6b9) main_camera_pane_t2

0x0001,

0xf22b,	// (0x0001d3a2) main_camera_pane_t

0x157e,	// (0x0000f6f5) cams_zoom_pane_cp_ParamLimits

0x157e,	// (0x0000f6f5) cams_zoom_pane_cp

0x15a6,	// (0x0000f71d) image_cif_pane_ParamLimits

0x15a6,	// (0x0000f71d) image_cif_pane

0x15e1,	// (0x0000f758) image_subqcif_pane

0x15e9,	// (0x0000f760) main_video_pane_g1_ParamLimits

0x15e9,	// (0x0000f760) main_video_pane_g1

0x160d,	// (0x0000f784) main_video_pane_g2_ParamLimits

0x160d,	// (0x0000f784) main_video_pane_g2

0x1643,	// (0x0000f7ba) main_video_pane_g3_ParamLimits

0x1643,	// (0x0000f7ba) main_video_pane_g3

0x1673,	// (0x0000f7ea) main_video_pane_g4_ParamLimits

0x1673,	// (0x0000f7ea) main_video_pane_g4

0x16a3,	// (0x0000f81a) main_video_pane_g5_ParamLimits

0x16a3,	// (0x0000f81a) main_video_pane_g5

0x9c4b,	// (0x00017dc2) main_video_pane_g6_ParamLimits

0x9c4b,	// (0x00017dc2) main_video_pane_g6

0x0006,

0xf230,	// (0x0001d3a7) main_video_pane_g_ParamLimits

0xf230,	// (0x0001d3a7) main_video_pane_g

0x16ce,	// (0x0000f845) main_video_pane_t1_ParamLimits

0x16ce,	// (0x0000f845) main_video_pane_t1

0x9c65,	// (0x00017ddc) cams_zoom_pane_g1

0x9c6e,	// (0x00017de5) cams_zoom_pane_g2

0x9c77,	// (0x00017dee) cams_zoom_pane_g3

0x9c80,	// (0x00017df7) cams_zoom_pane_g4

0x0003,

0xf23f,	// (0x0001d3b6) cams_zoom_pane_g

0x172b,	// (0x0000f8a2) grid_cams_pane

0x1745,	// (0x0000f8bc) linegrid_cams_pane

0x1758,	// (0x0000f8cf) cell_cams_pane_ParamLimits

0x1758,	// (0x0000f8cf) cell_cams_pane

0x9c89,	// (0x00017e00) cams_burst_image_pane

0x9c91,	// (0x00017e08) cell_cams_pane_g1

0x9602,	// (0x00017779) grid_highlight_pane_cp03

0x9a0f,	// (0x00017b86) mp_bg_pane_g1

0x9602,	// (0x00017779) bg_list_pane_cp03

0xbac3,	// (0x00019c3a) bg_mp_pane

0xbacb,	// (0x00019c42) grid_mp_pane

0xbad3,	// (0x00019c4a) media_player_g1

0xbadb,	// (0x00019c52) media_player_t1

0xbae9,	// (0x00019c60) media_player_t2

0xbaf7,	// (0x00019c6e) media_player_t3

0xbb05,	// (0x00019c7c) media_player_t4

0xbb13,	// (0x00019c8a) media_player_t5

0xbb21,	// (0x00019c98) media_player_t6

0xbb2f,	// (0x00019ca6) media_player_t7

0x0006,

0xf5db,	// (0x0001d752) media_player_t

0xbb3d,	// (0x00019cb4) wait_bar_pane_cp02

0xf5c0,	// (0x0001d737) main_usb_pane_t

0x3677,	// (0x000117ee) cell_mp_pane

0x9a0f,	// (0x00017b86) cell_mp_pane_g1

0x9602,	// (0x00017779) grid_highlight_pane_cp06

0x9d56,	// (0x00017ecd) grid_skin_colour_pane

0x9d5e,	// (0x00017ed5) list_highlight_pane_cp03

0x17ca,	// (0x0000f941) skin_g1

0x9d66,	// (0x00017edd) skin_t1

0x9d75,	// (0x00017eec) skin_t2

0x0001,

0xf274,	// (0x0001d3eb) skin_t

0x17d2,	// (0x0000f949) cell_skin_colour_pane_ParamLimits

0x17d2,	// (0x0000f949) cell_skin_colour_pane

0x9d83,	// (0x00017efa) cell_skin_colour_pane_g1

0x184b,	// (0x0000f9c2) call_video_g1_ParamLimits

0x184b,	// (0x0000f9c2) call_video_g1

0x1867,	// (0x0000f9de) call_video_g2_ParamLimits

0x1867,	// (0x0000f9de) call_video_g2

0x0001,

0xf279,	// (0x0001d3f0) call_video_g_ParamLimits

0xf279,	// (0x0001d3f0) call_video_g

0x18b9,	// (0x0000fa30) call_video_uplink_pane_cp1_ParamLimits

0x18b9,	// (0x0000fa30) call_video_uplink_pane_cp1

0x9d95,	// (0x00017f0c) call_video_uplink_pane_cp2

0x1958,	// (0x0000facf) video_down_crop_pane_ParamLimits

0x1958,	// (0x0000facf) video_down_crop_pane

0x1a41,	// (0x0000fbb8) video_down_pane_ParamLimits

0x1a41,	// (0x0000fbb8) video_down_pane

0x9d9d,	// (0x00017f14) video_down_subqcif_pane_ParamLimits

0x9d9d,	// (0x00017f14) video_down_subqcif_pane

0x9db5,	// (0x00017f2c) video_down_subqcif_pane_cp_ParamLimits

0x9db5,	// (0x00017f2c) video_down_subqcif_pane_cp

0x9ddb,	// (0x00017f52) im_reading_pane_ParamLimits

0x9ddb,	// (0x00017f52) im_reading_pane

0x1b4f,	// (0x0000fcc6) im_writing_pane_ParamLimits

0x1b4f,	// (0x0000fcc6) im_writing_pane

0x1b65,	// (0x0000fcdc) im_reading_pane_t1

0x9df5,	// (0x00017f6c) list_im_pane

0x9e06,	// (0x00017f7d) scroll_pane_cp07

0x1ba1,	// (0x0000fd18) im_writing_pane_t1_ParamLimits

0x1ba1,	// (0x0000fd18) im_writing_pane_t1

0x9e1f,	// (0x00017f96) im_writing_pane_t2_ParamLimits

0x9e1f,	// (0x00017f96) im_writing_pane_t2

0x0001,

0xf283,	// (0x0001d3fa) im_writing_pane_t_ParamLimits

0xf283,	// (0x0001d3fa) im_writing_pane_t

0x9602,	// (0x00017779) input_focus_pane_cp04

0x9602,	// (0x00017779) input_focus_pane_cp05

0x1bb6,	// (0x0000fd2d) list_im_single_pane_ParamLimits

0x1bb6,	// (0x0000fd2d) list_im_single_pane

0x1bcc,	// (0x0000fd43) list_single_im_pane_t1

0x3637,	// (0x000117ae) blid_accuracy_pane

0x363f,	// (0x000117b6) blid_compass_pane

0x3649,	// (0x000117c0) main_location_t1

0x3659,	// (0x000117d0) main_location_t2

0x3669,	// (0x000117e0) main_location_t3

0x0002,

0xf5ea,	// (0x0001d761) main_location_t

0x9602,	// (0x00017779) aid_levels_location

0x9a0f,	// (0x00017b86) blid_accuracy_pane_g1

0x9a0f,	// (0x00017b86) blid_accuracy_pane_g2

0x0001,

0xf2e5,	// (0x0001d45c) blid_accuracy_pane_g

0x9e67,	// (0x00017fde) wml_content_pane

0x9ea5,	// (0x0001801c) wml_button_pane_ParamLimits

0x9ea5,	// (0x0001801c) wml_button_pane

0x1bdb,	// (0x0000fd52) wml_list_single_large_pane_ParamLimits

0x1bdb,	// (0x0000fd52) wml_list_single_large_pane

0x1bf2,	// (0x0000fd69) wml_list_single_medium_pane_ParamLimits

0x1bf2,	// (0x0000fd69) wml_list_single_medium_pane

0x1c0a,	// (0x0000fd81) wml_list_single_small_pane_ParamLimits

0x1c0a,	// (0x0000fd81) wml_list_single_small_pane

0x9eb9,	// (0x00018030) wml_selection_box_pane_ParamLimits

0x9eb9,	// (0x00018030) wml_selection_box_pane

0x9ecc,	// (0x00018043) wml_list_single_pane_t1

0x9edb,	// (0x00018052) wml_list_single_medium_pane_t1

0x9eea,	// (0x00018061) wml_list_single_large_pane_t1

0x9ef9,	// (0x00018070) input_focus_pane_cp02_ParamLimits

0x9ef9,	// (0x00018070) input_focus_pane_cp02

0x9f0c,	// (0x00018083) wml_selection_box_pane_g1

0x9f15,	// (0x0001808c) wml_selection_box_pane_t1_ParamLimits

0x9f15,	// (0x0001808c) wml_selection_box_pane_t1

0x985d,	// (0x000179d4) bg_wml_button_pane_ParamLimits

0x985d,	// (0x000179d4) bg_wml_button_pane

0x9f2d,	// (0x000180a4) wml_button_pane_g1

0x9f35,	// (0x000180ac) wml_button_pane_t1

0x9f2d,	// (0x000180a4) wml_button_bg_pane_g1

0x9f45,	// (0x000180bc) wml_button_bg_pane_g2

0x9f4d,	// (0x000180c4) wml_button_bg_pane_g3

0x9f55,	// (0x000180cc) wml_button_bg_pane_g4

0x9f5d,	// (0x000180d4) wml_button_bg_pane_g5

0x9f65,	// (0x000180dc) wml_button_bg_pane_g6

0x9f6d,	// (0x000180e4) wml_button_bg_pane_g7

0x9f75,	// (0x000180ec) wml_button_bg_pane_g8

0x9f7d,	// (0x000180f4) wml_button_bg_pane_g9

0x0008,

0xf288,	// (0x0001d3ff) wml_button_bg_pane_g

0x1c28,	// (0x0000fd9f) bg_list_pane_cp02

0x9f85,	// (0x000180fc) mce_header_pane_ParamLimits

0x9f85,	// (0x000180fc) mce_header_pane

0x9f9b,	// (0x00018112) mce_icon_pane

0x9f9b,	// (0x00018112) mce_image_pane

0x9fa4,	// (0x0001811b) mce_text_pane_ParamLimits

0x9fa4,	// (0x0001811b) mce_text_pane

0x1c30,	// (0x0000fda7) scroll_pane_cp03

0x9e9d,	// (0x00018014) scroll_pane_cp04

0x9fb7,	// (0x0001812e) scroll_pane_cp05_ParamLimits

0x9fb7,	// (0x0001812e) scroll_pane_cp05

0x1c3a,	// (0x0000fdb1) mce_header_field_pane_ParamLimits

0x1c3a,	// (0x0000fdb1) mce_header_field_pane

0x1c51,	// (0x0000fdc8) mce_header_field_pane_2_ParamLimits

0x1c51,	// (0x0000fdc8) mce_header_field_pane_2

0x1c67,	// (0x0000fdde) mce_header_field_pane_3

0x1c6f,	// (0x0000fde6) list_single_mce_message_pane_ParamLimits

0x1c6f,	// (0x0000fde6) list_single_mce_message_pane

0x1c87,	// (0x0000fdfe) list_single_mce_smart_pane_ParamLimits

0x1c87,	// (0x0000fdfe) list_single_mce_smart_pane

0x9fc3,	// (0x0001813a) input_focus_pane_cp03

0x9fcc,	// (0x00018143) list_header_data_pane

0x1caa,	// (0x0000fe21) mce_header_field_pane_t1

0x1cba,	// (0x0000fe31) list_single_mce_header_pane_ParamLimits

0x1cba,	// (0x0000fe31) list_single_mce_header_pane

0x9fd4,	// (0x0001814b) list_single_mce_header_pane_t1

0x9fe3,	// (0x0001815a) list_single_mce_message_pane_g1

0x9feb,	// (0x00018162) list_single_mce_message_pane_t1

0x1cec,	// (0x0000fe63) bg_cale_heading_pane_cp01_ParamLimits

0x1cec,	// (0x0000fe63) bg_cale_heading_pane_cp01

0x9ff9,	// (0x00018170) bg_cale_pane_cp02_ParamLimits

0x9ff9,	// (0x00018170) bg_cale_pane_cp02

0x1d0f,	// (0x0000fe86) cale_month_corner_pane

0x1d25,	// (0x0000fe9c) cale_month_day_heading_pane_ParamLimits

0x1d25,	// (0x0000fe9c) cale_month_day_heading_pane

0x1d58,	// (0x0000fecf) cale_month_pane_g1_ParamLimits

0x1d58,	// (0x0000fecf) cale_month_pane_g1

0x1d74,	// (0x0000feeb) cale_month_pane_g2_ParamLimits

0x1d74,	// (0x0000feeb) cale_month_pane_g2

0x1d8f,	// (0x0000ff06) cale_month_pane_g3_ParamLimits

0x1d8f,	// (0x0000ff06) cale_month_pane_g3

0x1dbb,	// (0x0000ff32) cale_month_pane_g4_ParamLimits

0x1dbb,	// (0x0000ff32) cale_month_pane_g4

0x1de7,	// (0x0000ff5e) cale_month_pane_g5_ParamLimits

0x1de7,	// (0x0000ff5e) cale_month_pane_g5

0x1e1b,	// (0x0000ff92) cale_month_pane_g6_ParamLimits

0x1e1b,	// (0x0000ff92) cale_month_pane_g6

0x1e57,	// (0x0000ffce) cale_month_pane_g7_ParamLimits

0x1e57,	// (0x0000ffce) cale_month_pane_g7

0x1e93,	// (0x0001000a) cale_month_pane_g8_ParamLimits

0x1e93,	// (0x0001000a) cale_month_pane_g8

0x1ecf,	// (0x00010046) cale_month_pane_g9_ParamLimits

0x1ecf,	// (0x00010046) cale_month_pane_g9

0x1f09,	// (0x00010080) cale_month_pane_g10_ParamLimits

0x1f09,	// (0x00010080) cale_month_pane_g10

0x1f43,	// (0x000100ba) cale_month_pane_g11_ParamLimits

0x1f43,	// (0x000100ba) cale_month_pane_g11

0x1f7d,	// (0x000100f4) cale_month_pane_g12_ParamLimits

0x1f7d,	// (0x000100f4) cale_month_pane_g12

0x1fb7,	// (0x0001012e) cale_month_pane_g13_ParamLimits

0x1fb7,	// (0x0001012e) cale_month_pane_g13

0x000c,

0xf29b,	// (0x0001d412) cale_month_pane_g_ParamLimits

0xf29b,	// (0x0001d412) cale_month_pane_g

0x1ff1,	// (0x00010168) cale_month_week_pane

0x2004,	// (0x0001017b) grid_cale_month_pane_ParamLimits

0x2004,	// (0x0001017b) grid_cale_month_pane

0x2032,	// (0x000101a9) cale_month_day_heading_pane_t1

0x2090,	// (0x00010207) cale_month_day_heading_pane_t2

0x20f5,	// (0x0001026c) cale_month_day_heading_pane_t3

0x215a,	// (0x000102d1) cale_month_day_heading_pane_t4

0x21bf,	// (0x00010336) cale_month_day_heading_pane_t5

0x2234,	// (0x000103ab) cale_month_day_heading_pane_t6

0x22a9,	// (0x00010420) cale_month_day_heading_pane_t7

0x0006,

0xf2b6,	// (0x0001d42d) cale_month_day_heading_pane_t

0x9b5e,	// (0x00017cd5) bg_cale_side_pane_cp01

0x231e,	// (0x00010495) cale_month_week_pane_t1

0x2335,	// (0x000104ac) cale_month_week_pane_t2

0x234c,	// (0x000104c3) cale_month_week_pane_t3

0x2363,	// (0x000104da) cale_month_week_pane_t4

0x237a,	// (0x000104f1) cale_month_week_pane_t5

0x2391,	// (0x00010508) cale_month_week_pane_t6

0x0005,

0xf2c5,	// (0x0001d43c) cale_month_week_pane_t

0x23a8,	// (0x0001051f) cell_cale_month_pane_ParamLimits

0x23a8,	// (0x0001051f) cell_cale_month_pane

0xa058,	// (0x000181cf) cell_cale_month_pane_g1

0x247e,	// (0x000105f5) cell_cale_month_pane_t1_ParamLimits

0x247e,	// (0x000105f5) cell_cale_month_pane_t1

0x9b6c,	// (0x00017ce3) grid_highlight_pane_cp08

0x9a0f,	// (0x00017b86) main_smil_g1

0x249a,	// (0x00010611) smil_status_pane

0xa064,	// (0x000181db) smil_text_pane

0xb9db,	// (0x00019b52) bg_popup_call3_rect_pane_g8

0xb9e3,	// (0x00019b5a) bg_popup_call3_rect_pane_g9

0x0008,

0xf57e,	// (0x0001d6f5) bg_popup_call3_rect_pane_g

0xbc65,	// (0x00019ddc) smil_status_volume_pane_g1

0xa06e,	// (0x000181e5) smil_status_pane_t1

0xbc98,	// (0x00019e0f) volume_smil_pane

0xa085,	// (0x000181fc) list_smil_text_pane

0x24af,	// (0x00010626) scroll_pane_cp011

0x24ba,	// (0x00010631) smil_text_list_pane_t1_ParamLimits

0x24ba,	// (0x00010631) smil_text_list_pane_t1

0xa08f,	// (0x00018206) aid_volume_smil_ParamLimits

0xa08f,	// (0x00018206) aid_volume_smil

0x9a0f,	// (0x00017b86) smil_volume_pane_g1

0x9a0f,	// (0x00017b86) smil_volume_pane_g2

0x0001,

0xf2e5,	// (0x0001d45c) smil_volume_pane_g

0x9996,	// (0x00017b0d) listscroll_cale_day_pane

0xa0b1,	// (0x00018228) bg_cale_pane

0xa0c9,	// (0x00018240) list_cale_pane

0xa0da,	// (0x00018251) scroll_pane_cp09

0xa0eb,	// (0x00018262) cale_bg_pane_g1

0xa0f3,	// (0x0001826a) cale_bg_pane_g2

0xa0fb,	// (0x00018272) cale_bg_pane_g3

0xa103,	// (0x0001827a) cale_bg_pane_g4

0xa10b,	// (0x00018282) cale_bg_pane_g5

0xa113,	// (0x0001828a) cale_bg_pane_g6

0xa11b,	// (0x00018292) cale_bg_pane_g7

0xa123,	// (0x0001829a) cale_bg_pane_g8

0xa12b,	// (0x000182a2) cale_bg_pane_g9

0x0008,

0xf2ea,	// (0x0001d461) cale_bg_pane_g

0x250e,	// (0x00010685) list_cale_time_pane_ParamLimits

0x250e,	// (0x00010685) list_cale_time_pane

0x2523,	// (0x0001069a) list_cale_time_pane_g1_ParamLimits

0x2523,	// (0x0001069a) list_cale_time_pane_g1

0xa133,	// (0x000182aa) list_cale_time_pane_g2_ParamLimits

0xa133,	// (0x000182aa) list_cale_time_pane_g2

0x252f,	// (0x000106a6) list_cale_time_pane_g3_ParamLimits

0x252f,	// (0x000106a6) list_cale_time_pane_g3

0x254b,	// (0x000106c2) list_cale_time_pane_g4_ParamLimits

0x254b,	// (0x000106c2) list_cale_time_pane_g4

0x2559,	// (0x000106d0) list_cale_time_pane_g5_ParamLimits

0x2559,	// (0x000106d0) list_cale_time_pane_g5

0x0005,

0xf2fd,	// (0x0001d474) list_cale_time_pane_g_ParamLimits

0xf2fd,	// (0x0001d474) list_cale_time_pane_g

0x2567,	// (0x000106de) list_cale_time_pane_t1_ParamLimits

0x2567,	// (0x000106de) list_cale_time_pane_t1

0x258f,	// (0x00010706) list_cale_time_pane_t2_ParamLimits

0x258f,	// (0x00010706) list_cale_time_pane_t2

0x28bc,	// (0x00010a33) aid_blid_cardinal_pane

0x28fa,	// (0x00010a71) compass_pane_t4

0x25b7,	// (0x0001072e) list_cale_time_pane_t4_ParamLimits

0x25b7,	// (0x0001072e) list_cale_time_pane_t4

0x2908,	// (0x00010a7f) compass_pane_t5

0x2916,	// (0x00010a8d) compass_pane_t6

0x2924,	// (0x00010a9b) compass_pane_t7

0xa651,	// (0x000187c8) navi_pane_cc_t1

0xa7b8,	// (0x0001892f) aid_phob_thumbnail_center_pane

0x304b,	// (0x000111c2) main_postcard_pane_g4_ParamLimits

0x0002,

0xf30a,	// (0x0001d481) list_cale_time_pane_t_ParamLimits

0xf30a,	// (0x0001d481) list_cale_time_pane_t

0x925b,	// (0x000173d2) bg_popup_window_pane_cp02_ParamLimits

0x925b,	// (0x000173d2) bg_popup_window_pane_cp02

0xa14d,	// (0x000182c4) heading_pane_cp01_ParamLimits

0xa14d,	// (0x000182c4) heading_pane_cp01

0xa159,	// (0x000182d0) loc_req_pane_ParamLimits

0xa159,	// (0x000182d0) loc_req_pane

0xa169,	// (0x000182e0) loc_type_pane_ParamLimits

0xa169,	// (0x000182e0) loc_type_pane

0xa17b,	// (0x000182f2) loc_type_pane_t1_ParamLimits

0xa17b,	// (0x000182f2) loc_type_pane_t1

0xa18d,	// (0x00018304) loc_type_pane_t2_ParamLimits

0xa18d,	// (0x00018304) loc_type_pane_t2

0xa19f,	// (0x00018316) loc_type_pane_t3_ParamLimits

0xa19f,	// (0x00018316) loc_type_pane_t3

0x0002,

0xf311,	// (0x0001d488) loc_type_pane_t_ParamLimits

0xf311,	// (0x0001d488) loc_type_pane_t

0xa1b1,	// (0x00018328) list_loc_req_pane

0xa1bb,	// (0x00018332) scroll_pane_cp012

0x25df,	// (0x00010756) list_single_loc_request_popup_menu_pane_ParamLimits

0x25df,	// (0x00010756) list_single_loc_request_popup_menu_pane

0xa1c6,	// (0x0001833d) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xa1c6,	// (0x0001833d) list_single_loc_request_popup_menu_pane_g1

0xa1d2,	// (0x00018349) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xa1d2,	// (0x00018349) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf318,	// (0x0001d48f) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf318,	// (0x0001d48f) list_single_loc_request_popup_menu_pane_g

0xa1de,	// (0x00018355) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xa1de,	// (0x00018355) list_single_loc_request_popup_menu_pane_t1

0x985d,	// (0x000179d4) bg_popup_window_pane_cp03_ParamLimits

0x985d,	// (0x000179d4) bg_popup_window_pane_cp03

0xa1f4,	// (0x0001836b) heading_loc_req_pane_ParamLimits

0xa1f4,	// (0x0001836b) heading_loc_req_pane

0x25ec,	// (0x00010763) popup_dyc_status_message_window_g1_ParamLimits

0x25ec,	// (0x00010763) popup_dyc_status_message_window_g1

0x2600,	// (0x00010777) popup_dyc_status_message_window_t1_ParamLimits

0x2600,	// (0x00010777) popup_dyc_status_message_window_t1

0x2615,	// (0x0001078c) popup_dyc_status_message_window_t2_ParamLimits

0x2615,	// (0x0001078c) popup_dyc_status_message_window_t2

0x262a,	// (0x000107a1) popup_dyc_status_message_window_t3_ParamLimits

0x262a,	// (0x000107a1) popup_dyc_status_message_window_t3

0x0002,

0xf31d,	// (0x0001d494) popup_dyc_status_message_window_t_ParamLimits

0xf31d,	// (0x0001d494) popup_dyc_status_message_window_t

0x9602,	// (0x00017779) bg_heading_pane_cp01

0xa200,	// (0x00018377) heading_loc_req_pane_g1

0xa208,	// (0x0001837f) heading_loc_req_pane_g2

0xa210,	// (0x00018387) heading_loc_req_pane_g3

0x0002,

0xf324,	// (0x0001d49b) heading_loc_req_pane_g

0xa218,	// (0x0001838f) heading_loc_req_pane_t1

0xa29c,	// (0x00018413) bg_popup_sub_pane_cp01_ParamLimits

0xa29c,	// (0x00018413) bg_popup_sub_pane_cp01

0xa2aa,	// (0x00018421) popup_cale_events_window_g1_ParamLimits

0xa2aa,	// (0x00018421) popup_cale_events_window_g1

0xa2ca,	// (0x00018441) popup_cale_events_window_g2_ParamLimits

0xa2ca,	// (0x00018441) popup_cale_events_window_g2

0x0001,

0xf358,	// (0x0001d4cf) popup_cale_events_window_g_ParamLimits

0xf358,	// (0x0001d4cf) popup_cale_events_window_g

0xa2ea,	// (0x00018461) popup_cale_events_window_t1_ParamLimits

0xa2ea,	// (0x00018461) popup_cale_events_window_t1

0xa2fc,	// (0x00018473) popup_cale_events_window_t2_ParamLimits

0xa2fc,	// (0x00018473) popup_cale_events_window_t2

0xa33a,	// (0x000184b1) popup_cale_events_window_t3_ParamLimits

0xa33a,	// (0x000184b1) popup_cale_events_window_t3

0xa374,	// (0x000184eb) popup_cale_events_window_t4_ParamLimits

0xa374,	// (0x000184eb) popup_cale_events_window_t4

0x0003,

0xf35d,	// (0x0001d4d4) popup_cale_events_window_t_ParamLimits

0xf35d,	// (0x0001d4d4) popup_cale_events_window_t

0x26b8,	// (0x0001082f) call_type_pane

0x26c8,	// (0x0001083f) popup_call_status_window_g1

0x26dc,	// (0x00010853) popup_call_status_window_g2

0x26f0,	// (0x00010867) popup_call_status_window_g3

0x0002,

0xf366,	// (0x0001d4dd) popup_call_status_window_g

0xa3aa,	// (0x00018521) call_type_pane_g1

0xa3b3,	// (0x0001852a) call_type_pane_g2

0x0001,

0xf36d,	// (0x0001d4e4) call_type_pane_g

0x9602,	// (0x00017779) bg_popup_sub_pane_cp02

0xa3bc,	// (0x00018533) listscroll_popup_wml_pane

0xa3c4,	// (0x0001853b) list_wml_pane

0xa3ce,	// (0x00018545) scroll_pane_cp013

0xa3d9,	// (0x00018550) list_single_graphic_popup_wml_pane_ParamLimits

0xa3d9,	// (0x00018550) list_single_graphic_popup_wml_pane

0x9a0f,	// (0x00017b86) list_single_graphic_popup_wml_pane_g1

0xa3ed,	// (0x00018564) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf372,	// (0x0001d4e9) list_single_graphic_popup_wml_pane_g

0xa3f5,	// (0x0001856c) list_single_graphic_popup_wml_pane_t1

0xa40b,	// (0x00018582) aid_call_pane

0x9855,	// (0x000179cc) popup_clock_analogue_window_g1

0x9855,	// (0x000179cc) popup_clock_analogue_window_g2

0xa413,	// (0x0001858a) popup_clock_analogue_window_g3

0xa413,	// (0x0001858a) popup_clock_analogue_window_g4

0x9a0f,	// (0x00017b86) popup_clock_analogue_window_g5

0x0004,

0xf377,	// (0x0001d4ee) popup_clock_analogue_window_g

0xa41b,	// (0x00018592) popup_clock_analogue_window_t1

0xa429,	// (0x000185a0) clock_digital_number_pane_ParamLimits

0xa429,	// (0x000185a0) clock_digital_number_pane

0xa435,	// (0x000185ac) clock_digital_number_pane_cp02_ParamLimits

0xa435,	// (0x000185ac) clock_digital_number_pane_cp02

0xa441,	// (0x000185b8) clock_digital_number_pane_cp03_ParamLimits

0xa441,	// (0x000185b8) clock_digital_number_pane_cp03

0xa44d,	// (0x000185c4) clock_digital_number_pane_cp04_ParamLimits

0xa44d,	// (0x000185c4) clock_digital_number_pane_cp04

0xa459,	// (0x000185d0) clock_digital_separator_pane_ParamLimits

0xa459,	// (0x000185d0) clock_digital_separator_pane

0xa465,	// (0x000185dc) popup_clock_digital_window_t1

0x9a0f,	// (0x00017b86) clock_digital_number_pane_g1

0x9a0f,	// (0x00017b86) clock_digital_number_pane_g2

0x0001,

0xf2e5,	// (0x0001d45c) clock_digital_number_pane_g

0x9a0f,	// (0x00017b86) clock_digital_separator_pane_g1

0x9a0f,	// (0x00017b86) clock_digital_separator_pane_g2

0x0001,

0xf2e5,	// (0x0001d45c) clock_digital_separator_pane_g

0x9602,	// (0x00017779) bg_popup_window_pane_cp04

0xa482,	// (0x000185f9) heading_pane_cp03

0xa48a,	// (0x00018601) listscroll_popup_gms_pane

0xa492,	// (0x00018609) grid_large_graphic_popup_pane

0xa49c,	// (0x00018613) listscroll_popup_gms_pane_g1

0xa4a4,	// (0x0001861b) listscroll_popup_gms_pane_g2

0x0001,

0xf382,	// (0x0001d4f9) listscroll_popup_gms_pane_g

0x9e9d,	// (0x00018014) scroll_pane_cp014

0xa4ac,	// (0x00018623) cell_large_graphic_popup_pane_ParamLimits

0xa4ac,	// (0x00018623) cell_large_graphic_popup_pane

0xa4c4,	// (0x0001863b) cell_large_graphic_popup_pane_g1_ParamLimits

0xa4c4,	// (0x0001863b) cell_large_graphic_popup_pane_g1

0xa4d0,	// (0x00018647) cell_large_graphic_popup_pane_g2_ParamLimits

0xa4d0,	// (0x00018647) cell_large_graphic_popup_pane_g2

0xa4dc,	// (0x00018653) cell_large_graphic_popup_pane_g3_ParamLimits

0xa4dc,	// (0x00018653) cell_large_graphic_popup_pane_g3

0xa4e9,	// (0x00018660) cell_large_graphic_popup_pane_g4_ParamLimits

0xa4e9,	// (0x00018660) cell_large_graphic_popup_pane_g4

0x0003,

0xf387,	// (0x0001d4fe) cell_large_graphic_popup_pane_g_ParamLimits

0xf387,	// (0x0001d4fe) cell_large_graphic_popup_pane_g

0xa4f9,	// (0x00018670) grid_highlight_pane_cp010

0x9a0f,	// (0x00017b86) bg_popup_call_pane_g1

0xa503,	// (0x0001867a) list_single_graphic_popup_conf_pane_ParamLimits

0xa503,	// (0x0001867a) list_single_graphic_popup_conf_pane

0xa515,	// (0x0001868c) list_highlight_pane_cp01

0xa51e,	// (0x00018695) list_single_graphic_popup_conf_pane_g1

0xa526,	// (0x0001869d) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf390,	// (0x0001d507) list_single_graphic_popup_conf_pane_g

0xa52e,	// (0x000186a5) list_single_graphic_popup_conf_pane_t1

0xa53c,	// (0x000186b3) linegrid_cams_pane_g1

0x2700,	// (0x00010877) linegrid_cams_pane_g2

0x9b19,	// (0x00017c90) linegrid_cams_pane_g3

0xa545,	// (0x000186bc) linegrid_cams_pane_g4

0x2709,	// (0x00010880) linegrid_cams_pane_g5

0x2712,	// (0x00010889) linegrid_cams_pane_g6

0x9b9f,	// (0x00017d16) linegrid_cams_pane_g7

0x0006,

0xf395,	// (0x0001d50c) linegrid_cams_pane_g

0xa54e,	// (0x000186c5) popup_clock_analogue_window

0xa54e,	// (0x000186c5) popup_clock_digital_window

0x9602,	// (0x00017779) popup_phob_thumbnail_window

0x9a0f,	// (0x00017b86) call_video_uplink_pane_g1

0xa557,	// (0x000186ce) call_video_uplink_pane_g2

0x0001,

0xf3a4,	// (0x0001d51b) call_video_uplink_pane_g

0x9b6c,	// (0x00017ce3) video_uplink_pane

0xa55f,	// (0x000186d6) mce_image_pane_g1

0x271d,	// (0x00010894) mce_image_pane_g2

0x2725,	// (0x0001089c) mce_image_pane_g3

0x272d,	// (0x000108a4) mce_image_pane_g4

0x2735,	// (0x000108ac) mce_image_pane_g5

0x0004,

0xf3a9,	// (0x0001d520) mce_image_pane_g

0xa569,	// (0x000186e0) control_top_pane_stacon_cp01_ParamLimits

0xa569,	// (0x000186e0) control_top_pane_stacon_cp01

0xa57d,	// (0x000186f4) uni_indicator_pane_stacon_cp01_ParamLimits

0xa57d,	// (0x000186f4) uni_indicator_pane_stacon_cp01

0xa58e,	// (0x00018705) bg_popup_sub_pane_cp03

0x273d,	// (0x000108b4) chi_dic_find_pane

0x2745,	// (0x000108bc) listscroll_chi_dic_pane

0x274e,	// (0x000108c5) main_pane_chidic_g1

0x2761,	// (0x000108d8) chi_dic_find_pane_t1

0xa598,	// (0x0001870f) find_chidic_pane

0xa5a1,	// (0x00018718) chi_dic_list_pane_ParamLimits

0xa5a1,	// (0x00018718) chi_dic_list_pane

0xa5b2,	// (0x00018729) scroll_pane_cp020

0x276f,	// (0x000108e6) find_chidic_pane_t1

0x9602,	// (0x00017779) input_focus_pane_cp06

0x277e,	// (0x000108f5) list_chi_dic_pane_ParamLimits

0x277e,	// (0x000108f5) list_chi_dic_pane

0xa5ba,	// (0x00018731) list_chi_dic_pane_t1_ParamLimits

0xa5ba,	// (0x00018731) list_chi_dic_pane_t1

0x9602,	// (0x00017779) list_highlight_pane_cp020

0xa5cd,	// (0x00018744) bg_cale_heading_pane_g1

0x2792,	// (0x00010909) bg_cale_heading_pane_g2

0x279a,	// (0x00010911) bg_cale_heading_pane_g3

0x27a2,	// (0x00010919) bg_cale_heading_pane_g4

0x27ac,	// (0x00010923) bg_cale_heading_pane_g5

0x27b6,	// (0x0001092d) bg_cale_heading_pane_g6

0x27be,	// (0x00010935) bg_cale_heading_pane_g7

0x27c6,	// (0x0001093d) bg_cale_heading_pane_g8

0x27d0,	// (0x00010947) bg_cale_heading_pane_g9

0x0008,

0xf3b4,	// (0x0001d52b) bg_cale_heading_pane_g

0xa5cd,	// (0x00018744) bg_cale_side_pane_g1

0x27da,	// (0x00010951) bg_cale_side_pane_g2

0x27e2,	// (0x00010959) bg_cale_side_pane_g3

0x27ea,	// (0x00010961) bg_cale_side_pane_g4

0x27f2,	// (0x00010969) bg_cale_side_pane_g5

0x27fa,	// (0x00010971) bg_cale_side_pane_g6

0x2802,	// (0x00010979) bg_cale_side_pane_g7

0x280a,	// (0x00010981) bg_cale_side_pane_g8

0x2812,	// (0x00010989) bg_cale_side_pane_g9

0x0008,

0xf3c7,	// (0x0001d53e) bg_cale_side_pane_g

0x281a,	// (0x00010991) popup_call_status_window_ParamLimits

0x281a,	// (0x00010991) popup_call_status_window

0xa5d5,	// (0x0001874c) stacon_top_pane

0xa5dd,	// (0x00018754) status_pane_ParamLimits

0xa5dd,	// (0x00018754) status_pane

0xa5f2,	// (0x00018769) status_small_pane

0xa5fa,	// (0x00018771) control_pane

0x9602,	// (0x00017779) stacon_bottom_pane

0xa602,	// (0x00018779) list_single_mce_smart_pane_t1_ParamLimits

0xa602,	// (0x00018779) list_single_mce_smart_pane_t1

0xa615,	// (0x0001878c) list_single_mce_smart_pane_t2_ParamLimits

0xa615,	// (0x0001878c) list_single_mce_smart_pane_t2

0x0001,

0xf3da,	// (0x0001d551) list_single_mce_smart_pane_t_ParamLimits

0xf3da,	// (0x0001d551) list_single_mce_smart_pane_t

0x2861,	// (0x000109d8) compass_pane

0x286a,	// (0x000109e1) main_location2_pane_t1

0x287e,	// (0x000109f5) main_location2_pane_t2

0x2892,	// (0x00010a09) main_location2_pane_t3

0x0003,

0xf3df,	// (0x0001d556) main_location2_pane_t

0xa634,	// (0x000187ab) compass_pane_g1_ParamLimits

0xa634,	// (0x000187ab) compass_pane_g1

0x28dc,	// (0x00010a53) compass_pane_t1

0x28eb,	// (0x00010a62) compass_pane_t2

0x0005,

0xf3e8,	// (0x0001d55f) compass_pane_t

0x2932,	// (0x00010aa9) text_secondary_cp61

0xa648,	// (0x000187bf) navi_pane_cams_g5

0xa66b,	// (0x000187e2) navi_pane_im_t1

0xa679,	// (0x000187f0) navi_pane_mp_g1_ParamLimits

0xa679,	// (0x000187f0) navi_pane_mp_g1

0xa68d,	// (0x00018804) navi_pane_mp_g2_ParamLimits

0xa68d,	// (0x00018804) navi_pane_mp_g2

0xa699,	// (0x00018810) navi_pane_mp_g3_ParamLimits

0xa699,	// (0x00018810) navi_pane_mp_g3

0x0002,

0xf3fc,	// (0x0001d573) navi_pane_mp_g_ParamLimits

0xf3fc,	// (0x0001d573) navi_pane_mp_g

0xa6a5,	// (0x0001881c) navi_pane_mp_t1

0xa6b3,	// (0x0001882a) navi_pane_mp_t2

0x0002,

0xf403,	// (0x0001d57a) navi_pane_mp_t

0xa6ef,	// (0x00018866) navi_pane_vt_g1

0xa6a5,	// (0x0001881c) navi_pane_vt_t1

0xa6f7,	// (0x0001886e) navi_slider_pane

0xa6ff,	// (0x00018876) zooming_pane

0xa707,	// (0x0001887e) navi_slider_pane_g1

0xa710,	// (0x00018887) navi_slider_pane_g2

0x0006,

0xf40a,	// (0x0001d581) navi_slider_pane_g

0xa73d,	// (0x000188b4) aid_levels_zoom

0xa745,	// (0x000188bc) zooming_pane_g1

0xa74d,	// (0x000188c4) zooming_pane_g2

0xa74d,	// (0x000188c4) zooming_pane_g3

0x0002,

0xf419,	// (0x0001d590) zooming_pane_g

0xa755,	// (0x000188cc) level_10_zoom

0xa75e,	// (0x000188d5) level_11_zoom

0xa767,	// (0x000188de) level_1_zoom

0xa770,	// (0x000188e7) level_2_zoom

0xa779,	// (0x000188f0) level_3_zoom

0xa782,	// (0x000188f9) level_4_zoom

0xa78b,	// (0x00018902) level_5_zoom

0xa794,	// (0x0001890b) level_6_zoom

0xa79d,	// (0x00018914) level_7_zoom

0xa7a6,	// (0x0001891d) level_8_zoom

0xa7af,	// (0x00018926) level_9_zoom

0xa7c0,	// (0x00018937) popup_phob_thumbnail_window_g1

0xa7c8,	// (0x0001893f) popup_phob_thumbnail_window_g2

0x0001,

0xf420,	// (0x0001d597) popup_phob_thumbnail_window_g

0xbb45,	// (0x00019cbc) level_1_location

0xbb4d,	// (0x00019cc4) level_2_location

0xbb55,	// (0x00019ccc) level_3_location

0xbb5d,	// (0x00019cd4) level_4_location

0xa6ff,	// (0x00018876) level_5_location

0x2a71,	// (0x00010be8) mce_icon_pane_g1

0x2a79,	// (0x00010bf0) mce_icon_pane_g2

0x0001,

0xf425,	// (0x0001d59c) mce_icon_pane_g

0x2a81,	// (0x00010bf8) main_mup_pane_g1_ParamLimits

0x2a81,	// (0x00010bf8) main_mup_pane_g1

0x2a97,	// (0x00010c0e) main_mup_pane_g2_ParamLimits

0x2a97,	// (0x00010c0e) main_mup_pane_g2

0x2aaf,	// (0x00010c26) main_mup_pane_g3_ParamLimits

0x2aaf,	// (0x00010c26) main_mup_pane_g3

0x2ac7,	// (0x00010c3e) main_mup_pane_g4_ParamLimits

0x2ac7,	// (0x00010c3e) main_mup_pane_g4

0x2adf,	// (0x00010c56) main_mup_pane_g5_ParamLimits

0x2adf,	// (0x00010c56) main_mup_pane_g5

0x2afb,	// (0x00010c72) main_mup_pane_g6_ParamLimits

0x2afb,	// (0x00010c72) main_mup_pane_g6

0x2b13,	// (0x00010c8a) main_mup_pane_g7_ParamLimits

0x2b13,	// (0x00010c8a) main_mup_pane_g7

0x2b2b,	// (0x00010ca2) main_mup_pane_g8_ParamLimits

0x2b2b,	// (0x00010ca2) main_mup_pane_g8

0x2b43,	// (0x00010cba) main_mup_pane_g9_ParamLimits

0x2b43,	// (0x00010cba) main_mup_pane_g9

0x2b5d,	// (0x00010cd4) main_mup_pane_g10_ParamLimits

0x2b5d,	// (0x00010cd4) main_mup_pane_g10

0x2b77,	// (0x00010cee) main_mup_pane_g11_ParamLimits

0x2b77,	// (0x00010cee) main_mup_pane_g11

0x2b8b,	// (0x00010d02) main_mup_pane_g12_ParamLimits

0x2b8b,	// (0x00010d02) main_mup_pane_g12

0x2ba1,	// (0x00010d18) main_mup_pane_g13_ParamLimits

0x2ba1,	// (0x00010d18) main_mup_pane_g13

0x000c,

0xf42a,	// (0x0001d5a1) main_mup_pane_g_ParamLimits

0xf42a,	// (0x0001d5a1) main_mup_pane_g

0x2bb5,	// (0x00010d2c) main_mup_pane_t1_ParamLimits

0x2bb5,	// (0x00010d2c) main_mup_pane_t1

0x2bcf,	// (0x00010d46) main_mup_pane_t2_ParamLimits

0x2bcf,	// (0x00010d46) main_mup_pane_t2

0x2be7,	// (0x00010d5e) main_mup_pane_t3_ParamLimits

0x2be7,	// (0x00010d5e) main_mup_pane_t3

0x2bff,	// (0x00010d76) main_mup_pane_t4_ParamLimits

0x2bff,	// (0x00010d76) main_mup_pane_t4

0x2c1d,	// (0x00010d94) main_mup_pane_t5_ParamLimits

0x2c1d,	// (0x00010d94) main_mup_pane_t5

0x2c32,	// (0x00010da9) main_mup_pane_t6_ParamLimits

0x2c32,	// (0x00010da9) main_mup_pane_t6

0x0005,

0xf445,	// (0x0001d5bc) main_mup_pane_t_ParamLimits

0xf445,	// (0x0001d5bc) main_mup_pane_t

0x2c44,	// (0x00010dbb) mup_progress_pane_ParamLimits

0x2c44,	// (0x00010dbb) mup_progress_pane

0x2c50,	// (0x00010dc7) mup_visualizer_pane_ParamLimits

0x2c50,	// (0x00010dc7) mup_visualizer_pane

0x2c84,	// (0x00010dfb) mup_volume_pane_ParamLimits

0x2c84,	// (0x00010dfb) mup_volume_pane

0xa7d0,	// (0x00018947) mup_visualizer_pane_g1_ParamLimits

0xa7d0,	// (0x00018947) mup_visualizer_pane_g1

0xa7d0,	// (0x00018947) mup_visualizer_pane_g2_ParamLimits

0xa7d0,	// (0x00018947) mup_visualizer_pane_g2

0xa634,	// (0x000187ab) mup_visualizer_pane_g3_ParamLimits

0xa634,	// (0x000187ab) mup_visualizer_pane_g3

0x0002,

0xf452,	// (0x0001d5c9) mup_visualizer_pane_g_ParamLimits

0xf452,	// (0x0001d5c9) mup_visualizer_pane_g

0x9a0f,	// (0x00017b86) mup_volume_pane_g1

0xa7e6,	// (0x0001895d) mup_volume_pane_g2

0x0001,

0xf459,	// (0x0001d5d0) mup_volume_pane_g

0x9a0f,	// (0x00017b86) mup_progress_pane_g1

0xa7ef,	// (0x00018966) mup_progress_pane_g2

0xa7f8,	// (0x0001896f) mup_progress_pane_g3

0x0002,

0xf45e,	// (0x0001d5d5) mup_progress_pane_g

0x9602,	// (0x00017779) bg_popup_window_pane_cp05

0xa801,	// (0x00018978) heading_pane_cp02_ParamLimits

0xa801,	// (0x00018978) heading_pane_cp02

0xa81b,	// (0x00018992) list_popup_blid_pane

0xa823,	// (0x0001899a) list_blid_sat_info_pane_ParamLimits

0xa823,	// (0x0001899a) list_blid_sat_info_pane

0xa836,	// (0x000189ad) list_blid_sat_info_pane_g1

0xa83e,	// (0x000189b5) list_blid_sat_info_pane_t1

0x2daa,	// (0x00010f21) mup_equalizer_pane_ParamLimits

0x2daa,	// (0x00010f21) mup_equalizer_pane

0x2dc3,	// (0x00010f3a) mup_equalizer_pane_cp1_ParamLimits

0x2dc3,	// (0x00010f3a) mup_equalizer_pane_cp1

0x2de0,	// (0x00010f57) mup_equalizer_pane_cp2_ParamLimits

0x2de0,	// (0x00010f57) mup_equalizer_pane_cp2

0x2dfd,	// (0x00010f74) mup_equalizer_pane_cp3_ParamLimits

0x2dfd,	// (0x00010f74) mup_equalizer_pane_cp3

0x2e1e,	// (0x00010f95) mup_equalizer_pane_cp4_ParamLimits

0x2e1e,	// (0x00010f95) mup_equalizer_pane_cp4

0x2e3f,	// (0x00010fb6) mup_equalizer_pane_cp5

0x2e53,	// (0x00010fca) mup_equalizer_pane_cp6

0x2e67,	// (0x00010fde) mup_equalizer_pane_cp7

0xba63,	// (0x00019bda) bg_popup_call_poc_act_pane_g9

0xba6b,	// (0x00019be2) bg_popup_call_poc_act_pane_g10

0xba73,	// (0x00019bea) bg_popup_call_poc_act_pane_g11

0x000a,

0x985d,	// (0x000179d4) mup_scale_pane

0x9a0f,	// (0x00017b86) mup_scale_pane_g1

0xa84c,	// (0x000189c3) mup_scale_pane_g2

0x0006,

0xf47a,	// (0x0001d5f1) mup_scale_pane_g

0xa870,	// (0x000189e7) msg_data_pane

0xa878,	// (0x000189ef) scroll_pane_cp017

0x2e8d,	// (0x00011004) bg_list_pane_cp04_ParamLimits

0x2e8d,	// (0x00011004) bg_list_pane_cp04

0xa880,	// (0x000189f7) msg_data_pane_g1

0x2ead,	// (0x00011024) msg_data_pane_g2

0x2725,	// (0x0001089c) msg_data_pane_g3

0x2eb5,	// (0x0001102c) msg_data_pane_g4

0x2ebd,	// (0x00011034) msg_data_pane_g5

0x2ec5,	// (0x0001103c) msg_data_pane_g6

0x2ecd,	// (0x00011044) msg_data_pane_g7

0x0006,

0xf489,	// (0x0001d600) msg_data_pane_g

0x2ed5,	// (0x0001104c) msg_text_pane_ParamLimits

0x2ed5,	// (0x0001104c) msg_text_pane

0x2efe,	// (0x00011075) qrid_highlight_pane_cp011_ParamLimits

0x2efe,	// (0x00011075) qrid_highlight_pane_cp011

0x9602,	// (0x00017779) msg_body_pane

0x9602,	// (0x00017779) msg_header_pane

0xa891,	// (0x00018a08) input_focus_pane_cp07

0x2f22,	// (0x00011099) msg_header_pane_t1_ParamLimits

0x2f22,	// (0x00011099) msg_header_pane_t1

0xa8a6,	// (0x00018a1d) msg_header_pane_t2_ParamLimits

0xa8a6,	// (0x00018a1d) msg_header_pane_t2

0x0001,

0xf49d,	// (0x0001d614) msg_header_pane_t_ParamLimits

0xf49d,	// (0x0001d614) msg_header_pane_t

0xa8b8,	// (0x00018a2f) msg_body_pane_g1

0x2f36,	// (0x000110ad) msg_body_pane_t1_ParamLimits

0x2f36,	// (0x000110ad) msg_body_pane_t1

0xa8c0,	// (0x00018a37) msg_body_pane_t2_ParamLimits

0xa8c0,	// (0x00018a37) msg_body_pane_t2

0xa8d2,	// (0x00018a49) msg_body_pane_t3_ParamLimits

0xa8d2,	// (0x00018a49) msg_body_pane_t3

0x0002,

0xf4a2,	// (0x0001d619) msg_body_pane_t_ParamLimits

0xf4a2,	// (0x0001d619) msg_body_pane_t

0x2fa1,	// (0x00011118) main_viewer_pane_g1_ParamLimits

0x2fa1,	// (0x00011118) main_viewer_pane_g1

0x2faf,	// (0x00011126) main_viewer_pane_g2_ParamLimits

0x2faf,	// (0x00011126) main_viewer_pane_g2

0x2fbd,	// (0x00011134) main_viewer_pane_g3_ParamLimits

0x2fbd,	// (0x00011134) main_viewer_pane_g3

0x2fcc,	// (0x00011143) main_viewer_pane_g4_ParamLimits

0x2fcc,	// (0x00011143) main_viewer_pane_g4

0xa8fc,	// (0x00018a73) main_viewer_pane_g5_ParamLimits

0xa8fc,	// (0x00018a73) main_viewer_pane_g5

0xa8fc,	// (0x00018a73) main_viewer_pane_g7_ParamLimits

0xa8fc,	// (0x00018a73) main_viewer_pane_g7

0xa90e,	// (0x00018a85) main_viewer_pane_g8_ParamLimits

0xa90e,	// (0x00018a85) main_viewer_pane_g8

0x0007,

0xf4b2,	// (0x0001d629) main_viewer_pane_g_ParamLimits

0xf4b2,	// (0x0001d629) main_viewer_pane_g

0xa926,	// (0x00018a9d) viewer_content_pane_ParamLimits

0xa926,	// (0x00018a9d) viewer_content_pane

0x3008,	// (0x0001117f) main_postcard_pane_g1_ParamLimits

0x3008,	// (0x0001117f) main_postcard_pane_g1

0x301e,	// (0x00011195) main_postcard_pane_g2_ParamLimits

0x301e,	// (0x00011195) main_postcard_pane_g2

0x3034,	// (0x000111ab) main_postcard_pane_g3_ParamLimits

0x3034,	// (0x000111ab) main_postcard_pane_g3

0x0005,

0xf4c3,	// (0x0001d63a) main_postcard_pane_g_ParamLimits

0xf4c3,	// (0x0001d63a) main_postcard_pane_g

0x304b,	// (0x000111c2) main_postcard_pane_g4

0xbc78,	// (0x00019def) smil_status_volume_pane_g2

0x308e,	// (0x00011205) postcard_pane_ParamLimits

0x308e,	// (0x00011205) postcard_pane

0xa934,	// (0x00018aab) postcard_pane_g1_ParamLimits

0xa934,	// (0x00018aab) postcard_pane_g1

0x30d0,	// (0x00011247) postcard_pane_g2_ParamLimits

0x30d0,	// (0x00011247) postcard_pane_g2

0x30dc,	// (0x00011253) postcard_pane_g3_ParamLimits

0x30dc,	// (0x00011253) postcard_pane_g3

0xa942,	// (0x00018ab9) postcard_pane_g4_ParamLimits

0xa942,	// (0x00018ab9) postcard_pane_g4

0x30e8,	// (0x0001125f) postcard_pane_g5_ParamLimits

0x30e8,	// (0x0001125f) postcard_pane_g5

0x30fd,	// (0x00011274) postcard_pane_g6_ParamLimits

0x30fd,	// (0x00011274) postcard_pane_g6

0xa934,	// (0x00018aab) postcard_pane_g7_ParamLimits

0xa934,	// (0x00018aab) postcard_pane_g7

0x0006,

0xf4d0,	// (0x0001d647) postcard_pane_g_ParamLimits

0xf4d0,	// (0x0001d647) postcard_pane_g

0x3111,	// (0x00011288) main_mp2_pane_g1_ParamLimits

0x3111,	// (0x00011288) main_mp2_pane_g1

0x311d,	// (0x00011294) main_mp2_pane_g2_ParamLimits

0x311d,	// (0x00011294) main_mp2_pane_g2

0x3129,	// (0x000112a0) main_mp2_pane_g3_ParamLimits

0x3129,	// (0x000112a0) main_mp2_pane_g3

0x0002,

0xf4df,	// (0x0001d656) main_mp2_pane_g_ParamLimits

0xf4df,	// (0x0001d656) main_mp2_pane_g

0x3135,	// (0x000112ac) main_mp2_pane_t1_ParamLimits

0x3135,	// (0x000112ac) main_mp2_pane_t1

0x314a,	// (0x000112c1) main_mp2_pane_t2_ParamLimits

0x314a,	// (0x000112c1) main_mp2_pane_t2

0x315c,	// (0x000112d3) main_mp2_pane_t3_ParamLimits

0x315c,	// (0x000112d3) main_mp2_pane_t3

0x0002,

0xf4e6,	// (0x0001d65d) main_mp2_pane_t_ParamLimits

0xf4e6,	// (0x0001d65d) main_mp2_pane_t

0xa950,	// (0x00018ac7) pec_content_pane_ParamLimits

0xa950,	// (0x00018ac7) pec_content_pane

0x9e9d,	// (0x00018014) scroll_pane_cp015

0xa962,	// (0x00018ad9) pec_attribute_pane_ParamLimits

0xa962,	// (0x00018ad9) pec_attribute_pane

0x316e,	// (0x000112e5) pec_content_pane_g1_ParamLimits

0x316e,	// (0x000112e5) pec_content_pane_g1

0xa972,	// (0x00018ae9) pec_content_pane_t1_ParamLimits

0xa972,	// (0x00018ae9) pec_content_pane_t1

0xa984,	// (0x00018afb) pec_content_pane_t2_ParamLimits

0xa984,	// (0x00018afb) pec_content_pane_t2

0x0001,

0xf4ed,	// (0x0001d664) pec_content_pane_t_ParamLimits

0xf4ed,	// (0x0001d664) pec_content_pane_t

0x317c,	// (0x000112f3) list_single_graphic_pane_cp01_ParamLimits

0x317c,	// (0x000112f3) list_single_graphic_pane_cp01

0x985d,	// (0x000179d4) bg_popup_sub_pane_cp04

0xa996,	// (0x00018b0d) popup_mup_playback_window_g1

0xa9a2,	// (0x00018b19) popup_mup_playback_window_t1

0xa9b7,	// (0x00018b2e) popup_mup_playback_window_t2

0x0001,

0xf4f2,	// (0x0001d669) popup_mup_playback_window_t

0xa9ee,	// (0x00018b65) main_image_pane_g1_ParamLimits

0xa9ee,	// (0x00018b65) main_image_pane_g1

0xaa31,	// (0x00018ba8) scroll_pane_cp018_ParamLimits

0xaa31,	// (0x00018ba8) scroll_pane_cp018

0xaa49,	// (0x00018bc0) scroll_pane_cp016_ParamLimits

0xaa49,	// (0x00018bc0) scroll_pane_cp016

0x324c,	// (0x000113c3) smil2_image_pane_ParamLimits

0x324c,	// (0x000113c3) smil2_image_pane

0x3280,	// (0x000113f7) smil2_root_pane_ParamLimits

0x3280,	// (0x000113f7) smil2_root_pane

0x32b8,	// (0x0001142f) smil2_text_pane_ParamLimits

0x32b8,	// (0x0001142f) smil2_text_pane

0x9602,	// (0x00017779) bg_list_pane_cp06

0xaa85,	// (0x00018bfc) grid_radio_pane

0x9602,	// (0x00017779) bg_popup_window_pane_cp06

0xaa8d,	// (0x00018c04) main_fmradio_pane_t1

0xa482,	// (0x000185f9) heading_pane_cp04

0xaa9b,	// (0x00018c12) main_fmradio_pane_t2

0xba7b,	// (0x00019bf2) popup_cale_lunar_info_window_g1

0xaaa9,	// (0x00018c20) main_fmradio_pane_t3

0xba83,	// (0x00019bfa) popup_cale_lunar_info_window_g2

0xaab7,	// (0x00018c2e) main_fmradio_pane_t4

0x0001,

0xaac5,	// (0x00018c3c) main_fmradio_pane_t5

0x0004,

0xf5cd,	// (0x0001d744) popup_cale_lunar_info_window_g

0xf507,	// (0x0001d67e) main_fmradio_pane_t

0xaad3,	// (0x00018c4a) wait_bar_pane_cp03

0xaadb,	// (0x00018c52) cell_fmradio_pane_ParamLimits

0xaadb,	// (0x00018c52) cell_fmradio_pane

0xa934,	// (0x00018aab) cell_fmradio_pane_g1_ParamLimits

0xa934,	// (0x00018aab) cell_fmradio_pane_g1

0x9602,	// (0x00017779) grid_highlight_pane_cp011

0xaaee,	// (0x00018c65) poc_content_pane_ParamLimits

0xaaee,	// (0x00018c65) poc_content_pane

0xab00,	// (0x00018c77) scroll_pane_cp019

0x3338,	// (0x000114af) popup_call_poc_act_window_ParamLimits

0x3338,	// (0x000114af) popup_call_poc_act_window

0x335c,	// (0x000114d3) popup_call_poc_inact_window_ParamLimits

0x335c,	// (0x000114d3) popup_call_poc_inact_window

0xf5a4,	// (0x0001d71b) bg_popup_call_poc_act_pane_g

0xb9eb,	// (0x00019b62) bg_popup_call_poc_inact_pane_g1

0xb9f3,	// (0x00019b6a) bg_popup_call_poc_inact_pane_g2

0xab08,	// (0x00018c7f) popup_call_poc_act_window_g2

0xb9fb,	// (0x00019b72) bg_popup_call_poc_inact_pane_g3

0xba03,	// (0x00019b7a) bg_popup_call_poc_inact_pane_g4

0xba0b,	// (0x00019b82) bg_popup_call_poc_inact_pane_g5

0xab10,	// (0x00018c87) popup_call_poc_act_window_t1_ParamLimits

0xab10,	// (0x00018c87) popup_call_poc_act_window_t1

0xab38,	// (0x00018caf) popup_call_poc_act_window_t2_ParamLimits

0xab38,	// (0x00018caf) popup_call_poc_act_window_t2

0xab60,	// (0x00018cd7) popup_call_poc_act_window_t3_ParamLimits

0xab60,	// (0x00018cd7) popup_call_poc_act_window_t3

0xab88,	// (0x00018cff) popup_call_poc_act_window_t4_ParamLimits

0xab88,	// (0x00018cff) popup_call_poc_act_window_t4

0x0003,

0xf512,	// (0x0001d689) popup_call_poc_act_window_t_ParamLimits

0xf512,	// (0x0001d689) popup_call_poc_act_window_t

0xba13,	// (0x00019b8a) bg_popup_call_poc_inact_pane_g6

0xba1b,	// (0x00019b92) bg_popup_call_poc_inact_pane_g7

0xba23,	// (0x00019b9a) bg_popup_call_poc_inact_pane_g8

0xab9a,	// (0x00018d11) popup_call_poc_inact_window_g2

0xba2b,	// (0x00019ba2) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf591,	// (0x0001d708) bg_popup_call_poc_inact_pane_g

0xaba2,	// (0x00018d19) popup_call_poc_inact_window_t1_ParamLimits

0xaba2,	// (0x00018d19) popup_call_poc_inact_window_t1

0xabb7,	// (0x00018d2e) popup_call_poc_inact_window_t2_ParamLimits

0xabb7,	// (0x00018d2e) popup_call_poc_inact_window_t2

0xabcc,	// (0x00018d43) popup_call_poc_inact_window_t3_ParamLimits

0xabcc,	// (0x00018d43) popup_call_poc_inact_window_t3

0x0002,

0xf51b,	// (0x0001d692) popup_call_poc_inact_window_t_ParamLimits

0xf51b,	// (0x0001d692) popup_call_poc_inact_window_t

0xbbeb,	// (0x00019d62) context_pane_ParamLimits

0x3b7e,	// (0x00011cf5) signal_pane_ParamLimits

0xa6ff,	// (0x00018876) main_call2_pane

0xbbd9,	// (0x00019d50) popup_phob_thumbnail2_window_ParamLimits

0xbbd9,	// (0x00019d50) popup_phob_thumbnail2_window

0xa8e4,	// (0x00018a5b) aid_hotspot_pointer_arrow_pane

0xa8ec,	// (0x00018a63) aid_hotspot_pointer_hand_pane

0x36a2,	// (0x00011819) phob_pre_status_pane_g5

0x1485,	// (0x0000f5fc) cams_zoom_pane_ParamLimits

0x1494,	// (0x0000f60b) image_vga_pane_ParamLimits

0x14ae,	// (0x0000f625) main_camera_pane_g1_ParamLimits

0x14c0,	// (0x0000f637) main_camera_pane_g2_ParamLimits

0x14d2,	// (0x0000f649) main_camera_pane_g3_ParamLimits

0x14e4,	// (0x0000f65b) main_camera_pane_g4_ParamLimits

0x14f6,	// (0x0000f66d) main_camera_pane_g5_ParamLimits

0x1508,	// (0x0000f67f) main_camera_pane_g6_ParamLimits

0x151a,	// (0x0000f691) main_camera_pane_g7_ParamLimits

0xf21a,	// (0x0001d391) main_camera_pane_g_ParamLimits

0x152c,	// (0x0000f6a3) main_camera_pane_t1_ParamLimits

0x1542,	// (0x0000f6b9) main_camera_pane_t2_ParamLimits

0xf22b,	// (0x0001d3a2) main_camera_pane_t_ParamLimits

0x985d,	// (0x000179d4) bg_popup_preview_window_pane_cp01_ParamLimits

0x985d,	// (0x000179d4) bg_popup_preview_window_pane_cp01

0xabe1,	// (0x00018d58) popup_phob_thumbnail2_window_g1_ParamLimits

0xabe1,	// (0x00018d58) popup_phob_thumbnail2_window_g1

0x9602,	// (0x00017779) call2_cli_visual_pane

0x3390,	// (0x00011507) popup_call2_audio_conf_window_ParamLimits

0x3390,	// (0x00011507) popup_call2_audio_conf_window

0x33b0,	// (0x00011527) popup_call2_audio_first_window_ParamLimits

0x33b0,	// (0x00011527) popup_call2_audio_first_window

0x3446,	// (0x000115bd) popup_call2_audio_in_window_ParamLimits

0x3446,	// (0x000115bd) popup_call2_audio_in_window

0x348e,	// (0x00011605) popup_call2_audio_out_window_ParamLimits

0x348e,	// (0x00011605) popup_call2_audio_out_window

0x34f8,	// (0x0001166f) popup_call2_audio_second_window_ParamLimits

0x34f8,	// (0x0001166f) popup_call2_audio_second_window

0x355e,	// (0x000116d5) popup_call2_audio_wait_window_ParamLimits

0x355e,	// (0x000116d5) popup_call2_audio_wait_window

0x9602,	// (0x00017779) bg_popup_call2_act_pane_cp03

0x983f,	// (0x000179b6) list_conf_pane_cp

0xabed,	// (0x00018d64) popup_call2_audio_conf_window_t1

0xabfb,	// (0x00018d72) list_single_graphic_popup_conf2_pane_ParamLimits

0xabfb,	// (0x00018d72) list_single_graphic_popup_conf2_pane

0xa515,	// (0x0001868c) list_highlight_pane_cp04

0xac0e,	// (0x00018d85) list_single_graphic_popup_conf2_pane_g1

0xa526,	// (0x0001869d) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf522,	// (0x0001d699) list_single_graphic_popup_conf2_pane_g

0xac18,	// (0x00018d8f) list_single_graphic_popup_conf2_pane_t1

0xac26,	// (0x00018d9d) bg_popup_call2_act_pane_cp01_ParamLimits

0xac26,	// (0x00018d9d) bg_popup_call2_act_pane_cp01

0xacb0,	// (0x00018e27) call_type_pane_cp05_ParamLimits

0xacb0,	// (0x00018e27) call_type_pane_cp05

0xad04,	// (0x00018e7b) popup_call2_audio_second_window_g1_ParamLimits

0xad04,	// (0x00018e7b) popup_call2_audio_second_window_g1

0xad58,	// (0x00018ecf) popup_call2_audio_second_window_g2_ParamLimits

0xad58,	// (0x00018ecf) popup_call2_audio_second_window_g2

0x0002,

0xf527,	// (0x0001d69e) popup_call2_audio_second_window_g_ParamLimits

0xf527,	// (0x0001d69e) popup_call2_audio_second_window_g

0xadbd,	// (0x00018f34) popup_call2_audio_second_window_t1_ParamLimits

0xadbd,	// (0x00018f34) popup_call2_audio_second_window_t1

0xae78,	// (0x00018fef) popup_call2_audio_second_window_t2_ParamLimits

0xae78,	// (0x00018fef) popup_call2_audio_second_window_t2

0xaecb,	// (0x00019042) popup_call2_audio_second_window_t3_ParamLimits

0xaecb,	// (0x00019042) popup_call2_audio_second_window_t3

0x0003,

0xf52e,	// (0x0001d6a5) popup_call2_audio_second_window_t_ParamLimits

0xf52e,	// (0x0001d6a5) popup_call2_audio_second_window_t

0x9602,	// (0x00017779) bg_popup_call2_in_pane_cp02

0x960c,	// (0x00017783) call_type_pane_cp04

0x9614,	// (0x0001778b) popup_call2_audio_wait_window_g1

0x961c,	// (0x00017793) popup_call2_audio_wait_window_g2

0x0001,

0xf107,	// (0x0001d27e) popup_call2_audio_wait_window_g

0x9624,	// (0x0001779b) popup_call2_audio_wait_window_t3

0xafbe,	// (0x00019135) bg_popup_call2_act_pane_ParamLimits

0xafbe,	// (0x00019135) bg_popup_call2_act_pane

0xb07e,	// (0x000191f5) call_type_pane_cp03_ParamLimits

0xb07e,	// (0x000191f5) call_type_pane_cp03

0xb0e2,	// (0x00019259) popup_call2_audio_first_window_g1_ParamLimits

0xb0e2,	// (0x00019259) popup_call2_audio_first_window_g1

0xb152,	// (0x000192c9) popup_call2_audio_first_window_g2_ParamLimits

0xb152,	// (0x000192c9) popup_call2_audio_first_window_g2

0xa7d0,	// (0x00018947) popup_call2_audio_first_window_g3_ParamLimits

0xa7d0,	// (0x00018947) popup_call2_audio_first_window_g3

0x0004,

0xf537,	// (0x0001d6ae) popup_call2_audio_first_window_g_ParamLimits

0xf537,	// (0x0001d6ae) popup_call2_audio_first_window_g

0xb230,	// (0x000193a7) popup_call2_audio_first_window_t1_ParamLimits

0xb230,	// (0x000193a7) popup_call2_audio_first_window_t1

0xb333,	// (0x000194aa) popup_call2_audio_first_window_t4_ParamLimits

0xb333,	// (0x000194aa) popup_call2_audio_first_window_t4

0xb416,	// (0x0001958d) popup_call2_audio_first_window_t5_ParamLimits

0xb416,	// (0x0001958d) popup_call2_audio_first_window_t5

0x0003,

0xf542,	// (0x0001d6b9) popup_call2_audio_first_window_t_ParamLimits

0xf542,	// (0x0001d6b9) popup_call2_audio_first_window_t

0x9855,	// (0x000179cc) bg_popup_call2_act_pane_g1

0xba8b,	// (0x00019c02) popup_cale_lunar_info_window_t1

0xba99,	// (0x00019c10) popup_cale_lunar_info_window_t2

0xbaa7,	// (0x00019c1e) popup_cale_lunar_info_window_t3

0x9602,	// (0x00017779) bg_popup_call2_bubble_pane

0xb517,	// (0x0001968e) bg_popup_call2_in_pane_cp01_ParamLimits

0xb517,	// (0x0001968e) bg_popup_call2_in_pane_cp01

0x92de,	// (0x00017455) call_type_pane_cp02

0xb55f,	// (0x000196d6) popup_call2_audio_out_window_g1_ParamLimits

0xb55f,	// (0x000196d6) popup_call2_audio_out_window_g1

0xb58b,	// (0x00019702) popup_call2_audio_out_window_g2_ParamLimits

0xb58b,	// (0x00019702) popup_call2_audio_out_window_g2

0xb5b3,	// (0x0001972a) popup_call2_audio_out_window_g3_ParamLimits

0xb5b3,	// (0x0001972a) popup_call2_audio_out_window_g3

0x0003,

0xf54b,	// (0x0001d6c2) popup_call2_audio_out_window_g_ParamLimits

0xf54b,	// (0x0001d6c2) popup_call2_audio_out_window_g

0xb5ee,	// (0x00019765) popup_call2_audio_out_window_t1_ParamLimits

0xb5ee,	// (0x00019765) popup_call2_audio_out_window_t1

0xb64d,	// (0x000197c4) popup_call2_audio_out_window_t2_ParamLimits

0xb64d,	// (0x000197c4) popup_call2_audio_out_window_t2

0xb6a1,	// (0x00019818) popup_call2_audio_out_window_t3_ParamLimits

0xb6a1,	// (0x00019818) popup_call2_audio_out_window_t3

0xb6b7,	// (0x0001982e) popup_call2_audio_out_window_t4_ParamLimits

0xb6b7,	// (0x0001982e) popup_call2_audio_out_window_t4

0xb6cd,	// (0x00019844) popup_call2_audio_out_window_t5_ParamLimits

0xb6cd,	// (0x00019844) popup_call2_audio_out_window_t5

0x0005,

0xf554,	// (0x0001d6cb) popup_call2_audio_out_window_t_ParamLimits

0xf554,	// (0x0001d6cb) popup_call2_audio_out_window_t

0xb731,	// (0x000198a8) bg_popup_call2_in_pane_ParamLimits

0xb731,	// (0x000198a8) bg_popup_call2_in_pane

0xb78d,	// (0x00019904) popup_call2_audio_in_window_g1_ParamLimits

0xb78d,	// (0x00019904) popup_call2_audio_in_window_g1

0xb7c5,	// (0x0001993c) popup_call2_audio_in_window_g2_ParamLimits

0xb7c5,	// (0x0001993c) popup_call2_audio_in_window_g2

0xb7fd,	// (0x00019974) popup_call2_audio_in_window_g3_ParamLimits

0xb7fd,	// (0x00019974) popup_call2_audio_in_window_g3

0x0003,

0xf561,	// (0x0001d6d8) popup_call2_audio_in_window_g_ParamLimits

0xf561,	// (0x0001d6d8) popup_call2_audio_in_window_g

0xb855,	// (0x000199cc) popup_call2_audio_in_window_t1_ParamLimits

0xb855,	// (0x000199cc) popup_call2_audio_in_window_t1

0xb8d5,	// (0x00019a4c) popup_call2_audio_in_window_t2_ParamLimits

0xb8d5,	// (0x00019a4c) popup_call2_audio_in_window_t2

0xb955,	// (0x00019acc) popup_call2_audio_in_window_t3_ParamLimits

0xb955,	// (0x00019acc) popup_call2_audio_in_window_t3

0xb96f,	// (0x00019ae6) popup_call2_audio_in_window_t4_ParamLimits

0xb96f,	// (0x00019ae6) popup_call2_audio_in_window_t4

0xb981,	// (0x00019af8) popup_call2_audio_in_window_t5_ParamLimits

0xb981,	// (0x00019af8) popup_call2_audio_in_window_t5

0xb996,	// (0x00019b0d) popup_call2_audio_in_window_t6_ParamLimits

0xb996,	// (0x00019b0d) popup_call2_audio_in_window_t6

0x0005,

0xf56a,	// (0x0001d6e1) popup_call2_audio_in_window_t_ParamLimits

0xf56a,	// (0x0001d6e1) popup_call2_audio_in_window_t

0x9855,	// (0x000179cc) bg_popup_call2_in_pane_g1

0xbab5,	// (0x00019c2c) popup_cale_lunar_info_window_t4

0x0003,

0xf5d2,	// (0x0001d749) popup_cale_lunar_info_window_t

0x985d,	// (0x000179d4) bg_popup_call2_rect_pane_ParamLimits

0x985d,	// (0x000179d4) bg_popup_call2_rect_pane

0x9602,	// (0x00017779) call2_cli_visual_graphic_pane

0x9602,	// (0x00017779) call2_cli_visual_text_pane

0xbc8b,	// (0x00019e02) smil_status_volume_pane_g3

0x0002,

0x9a0f,	// (0x00017b86) call2_cli_visual_graphic_pane_g1

0x9a0f,	// (0x00017b86) call2_cli_visual_graphic_pane_g2

0x9a0f,	// (0x00017b86) call2_cli_visual_graphic_pane_g3

0x0002,

0xf577,	// (0x0001d6ee) call2_cli_visual_graphic_pane_g

0xb9ab,	// (0x00019b22) bg_popup_call2_rect_pane_g1

0x9ab7,	// (0x00017c2e) bg_popup_call2_rect_pane_g2

0xb9b3,	// (0x00019b2a) bg_popup_call2_rect_pane_g3

0xb9bb,	// (0x00019b32) bg_popup_call2_rect_pane_g4

0xb9c3,	// (0x00019b3a) bg_popup_call2_rect_pane_g5

0xb9cb,	// (0x00019b42) bg_popup_call2_rect_pane_g6

0xb9d3,	// (0x00019b4a) bg_popup_call2_rect_pane_g7

0xb9db,	// (0x00019b52) bg_popup_call2_rect_pane_g8

0xb9e3,	// (0x00019b5a) bg_popup_call2_rect_pane_g9

0x0008,

0xf57e,	// (0x0001d6f5) bg_popup_call2_rect_pane_g

0xb9eb,	// (0x00019b62) bg_popup_call2_bubble_pane_g1

0xb9f3,	// (0x00019b6a) bg_popup_call2_bubble_pane_g2

0xb9fb,	// (0x00019b72) bg_popup_call2_bubble_pane_g3

0xba03,	// (0x00019b7a) bg_popup_call2_bubble_pane_g4

0xba0b,	// (0x00019b82) bg_popup_call2_bubble_pane_g5

0xba13,	// (0x00019b8a) bg_popup_call2_bubble_pane_g6

0xba1b,	// (0x00019b92) bg_popup_call2_bubble_pane_g7

0xba23,	// (0x00019b9a) bg_popup_call2_bubble_pane_g8

0xba2b,	// (0x00019ba2) bg_popup_call2_bubble_pane_g9

0x0008,

0xf591,	// (0x0001d708) bg_popup_call2_bubble_pane_g

0x10da,	// (0x0000f251) aid_cale_week_size_cell_pane

0x155a,	// (0x0000f6d1) aid_cams_cif_uncrop_pane_ParamLimits

0x155a,	// (0x0000f6d1) aid_cams_cif_uncrop_pane

0x1717,	// (0x0000f88e) aid_cams_size_cell_ParamLimits

0x1717,	// (0x0000f88e) aid_cams_size_cell

0x172b,	// (0x0000f8a2) grid_cams_pane_ParamLimits

0x1745,	// (0x0000f8bc) linegrid_cams_pane_ParamLimits

0x187d,	// (0x0000f9f4) call_video_pane_t1

0x189b,	// (0x0000fa12) call_video_pane_t2

0x0001,

0xf27e,	// (0x0001d3f5) call_video_pane_t

0x1cce,	// (0x0000fe45) aid_cale_month_size_cell_pane_ParamLimits

0x1cce,	// (0x0000fe45) aid_cale_month_size_cell_pane

0xf61b,	// (0x0001d792) smil_status_volume_pane_g

0xbc98,	// (0x00019e0f) volume_smil_pane_ParamLimits

0x9185,	// (0x000172fc) aid_popup2_width_pane

0x1037,	// (0x0000f1ae) cell_qdial_pane_g4_ParamLimits

0x1037,	// (0x0000f1ae) cell_qdial_pane_g4

0x28bc,	// (0x00010a33) aid_blid_cardinal_pane_ParamLimits

0x28c8,	// (0x00010a3f) aid_blid_destination_pane_ParamLimits

0x28c8,	// (0x00010a3f) aid_blid_destination_pane

0x985d,	// (0x000179d4) bg_popup_call_poc_act_pane_ParamLimits

0x985d,	// (0x000179d4) bg_popup_call_poc_act_pane

0x985d,	// (0x000179d4) bg_popup_call_poc_inact_pane_ParamLimits

0x985d,	// (0x000179d4) bg_popup_call_poc_inact_pane

0xba3b,	// (0x00019bb2) bg_popup_call_poc_act_pane_g1

0xba43,	// (0x00019bba) bg_popup_call_poc_act_pane_g2

0xba4b,	// (0x00019bc2) bg_popup_call_poc_act_pane_g3

0xba03,	// (0x00019b7a) bg_popup_call_poc_act_pane_g4

0xba0b,	// (0x00019b82) bg_popup_call_poc_act_pane_g5

0xba53,	// (0x00019bca) bg_popup_call_poc_act_pane_g6

0xba1b,	// (0x00019b92) bg_popup_call_poc_act_pane_g7

0xba5b,	// (0x00019bd2) bg_popup_call_poc_act_pane_g8

0x9602,	// (0x00017779) main_usb_pane

0xbbb4,	// (0x00019d2b) popup_cale_lunar_info_window

0x1b65,	// (0x0000fcdc) im_reading_pane_t1_ParamLimits

0x9df5,	// (0x00017f6c) list_im_pane_ParamLimits

0x9e06,	// (0x00017f7d) scroll_pane_cp07_ParamLimits

0x9602,	// (0x00017779) grid_highlight_pane_cp012

0x985d,	// (0x000179d4) mup_scale_pane_ParamLimits

0xa934,	// (0x00018aab) main_usb_pane_g1_ParamLimits

0xa934,	// (0x00018aab) main_usb_pane_g1

0x35b5,	// (0x0001172c) main_usb_pane_g2_ParamLimits

0x35b5,	// (0x0001172c) main_usb_pane_g2

0x0001,

0xf5bb,	// (0x0001d732) main_usb_pane_g_ParamLimits

0xf5bb,	// (0x0001d732) main_usb_pane_g

0x35cb,	// (0x00011742) main_usb_pane_t1_ParamLimits

0x35cb,	// (0x00011742) main_usb_pane_t1

0x35dd,	// (0x00011754) main_usb_pane_t2_ParamLimits

0x35dd,	// (0x00011754) main_usb_pane_t2

0x35ef,	// (0x00011766) main_usb_pane_t3_ParamLimits

0x35ef,	// (0x00011766) main_usb_pane_t3

0x3601,	// (0x00011778) main_usb_pane_t4_ParamLimits

0x3601,	// (0x00011778) main_usb_pane_t4

0x3613,	// (0x0001178a) main_usb_pane_t5_ParamLimits

0x3613,	// (0x0001178a) main_usb_pane_t5

0x3625,	// (0x0001179c) main_usb_pane_t6_ParamLimits

0x3625,	// (0x0001179c) main_usb_pane_t6

0x0005,

0xf5c0,	// (0x0001d737) main_usb_pane_t_ParamLimits

0x2861,	// (0x000109d8) aid_text_placing

0x286a,	// (0x000109e1) main_location2_pane_t1_ParamLimits

0x287e,	// (0x000109f5) main_location2_pane_t2_ParamLimits

0x2892,	// (0x00010a09) main_location2_pane_t3_ParamLimits

0x28a8,	// (0x00010a1f) main_location2_pane_t4_ParamLimits

0x28a8,	// (0x00010a1f) main_location2_pane_t4

0xf3df,	// (0x0001d556) main_location2_pane_t_ParamLimits

0x98a1,	// (0x00017a18) find_pinb_pane_g2_ParamLimits

0x98a1,	// (0x00017a18) find_pinb_pane_g2

0x0001,

0xf12d,	// (0x0001d2a4) find_pinb_pane_g_ParamLimits

0xf12d,	// (0x0001d2a4) find_pinb_pane_g

0x98ad,	// (0x00017a24) find_pinb_pane_t1_ParamLimits

0x98bf,	// (0x00017a36) find_pinb_pane_t2_ParamLimits

0xf132,	// (0x0001d2a9) find_pinb_pane_t_ParamLimits

0x9602,	// (0x00017779) main_call3_pane

0x2032,	// (0x000101a9) cale_month_day_heading_pane_t1_ParamLimits

0x2090,	// (0x00010207) cale_month_day_heading_pane_t2_ParamLimits

0x20f5,	// (0x0001026c) cale_month_day_heading_pane_t3_ParamLimits

0x215a,	// (0x000102d1) cale_month_day_heading_pane_t4_ParamLimits

0x21bf,	// (0x00010336) cale_month_day_heading_pane_t5_ParamLimits

0x2234,	// (0x000103ab) cale_month_day_heading_pane_t6_ParamLimits

0x22a9,	// (0x00010420) cale_month_day_heading_pane_t7_ParamLimits

0xf2b6,	// (0x0001d42d) cale_month_day_heading_pane_t_ParamLimits

0xa07c,	// (0x000181f3) smil_status_volume_pane

0x30ac,	// (0x00011223) postcard_address_pane_ParamLimits

0x30ac,	// (0x00011223) postcard_address_pane

0x30be,	// (0x00011235) postcard_message_pane_ParamLimits

0x30be,	// (0x00011235) postcard_message_pane

0x3598,	// (0x0001170f) call2_cli_visual_pane_t1_ParamLimits

0x3598,	// (0x0001170f) call2_cli_visual_pane_t1

0x3dac,	// (0x00011f23) postcard_message_pane_t1_ParamLimits

0x3dac,	// (0x00011f23) postcard_message_pane_t1

0x3d95,	// (0x00011f0c) postcard_address_pane_t1_ParamLimits

0x3d95,	// (0x00011f0c) postcard_address_pane_t1

0x3d81,	// (0x00011ef8) popup_call3_audio_in_window_ParamLimits

0x3d81,	// (0x00011ef8) popup_call3_audio_in_window

0x3c10,	// (0x00011d87) bg_popup_call3_in_pane_ParamLimits

0x3c10,	// (0x00011d87) bg_popup_call3_in_pane

0x3c82,	// (0x00011df9) popup_call3_audio_in_window_g1_ParamLimits

0x3c82,	// (0x00011df9) popup_call3_audio_in_window_g1

0x3ca2,	// (0x00011e19) popup_call3_audio_in_window_g2_ParamLimits

0x3ca2,	// (0x00011e19) popup_call3_audio_in_window_g2

0x3cc2,	// (0x00011e39) popup_call3_audio_in_window_g3_ParamLimits

0x3cc2,	// (0x00011e39) popup_call3_audio_in_window_g3

0x0003,

0xf622,	// (0x0001d799) popup_call3_audio_in_window_g_ParamLimits

0xf622,	// (0x0001d799) popup_call3_audio_in_window_g

0x3cf3,	// (0x00011e6a) popup_call3_audio_in_window_t1_ParamLimits

0x3cf3,	// (0x00011e6a) popup_call3_audio_in_window_t1

0x3d31,	// (0x00011ea8) popup_call3_audio_in_window_t2_ParamLimits

0x3d31,	// (0x00011ea8) popup_call3_audio_in_window_t2

0x3d6f,	// (0x00011ee6) popup_call3_audio_in_window_t3_ParamLimits

0x3d6f,	// (0x00011ee6) popup_call3_audio_in_window_t3

0x0002,

0xf62b,	// (0x0001d7a2) popup_call3_audio_in_window_t_ParamLimits

0xf62b,	// (0x0001d7a2) popup_call3_audio_in_window_t

0xa6ff,	// (0x00018876) bg_popup_call3_rect_pane

0xb9ab,	// (0x00019b22) bg_popup_call3_rect_pane_g1

0x9ab7,	// (0x00017c2e) bg_popup_call3_rect_pane_g2

0xb9b3,	// (0x00019b2a) bg_popup_call3_rect_pane_g3

0xb9bb,	// (0x00019b32) bg_popup_call3_rect_pane_g4

0xb9c3,	// (0x00019b3a) bg_popup_call3_rect_pane_g5

0xb9cb,	// (0x00019b42) bg_popup_call3_rect_pane_g6

0xb9d3,	// (0x00019b4a) bg_popup_call3_rect_pane_g7

0x2c9a,	// (0x00010e11) mup_visualizer_osc_pane

0xa7de,	// (0x00018955) mup_visualizer_spec_pane

0x3c40,	// (0x00011db7) call3_video_qcif_pane_ParamLimits

0x3c40,	// (0x00011db7) call3_video_qcif_pane

0x3c51,	// (0x00011dc8) call3_video_qcif_uncrop_pane_ParamLimits

0x3c51,	// (0x00011dc8) call3_video_qcif_uncrop_pane

0x3c5d,	// (0x00011dd4) call3_video_subqcif_pane_ParamLimits

0x3c5d,	// (0x00011dd4) call3_video_subqcif_pane

0x3c71,	// (0x00011de8) call3_video_subqcif_uncrop_pane_ParamLimits

0x3c71,	// (0x00011de8) call3_video_subqcif_uncrop_pane

0x3ce2,	// (0x00011e59) popup_call3_audio_in_window_g4_ParamLimits

0x3ce2,	// (0x00011e59) popup_call3_audio_in_window_g4

0x3bff,	// (0x00011d76) mup_spec_half_pane

0x3c08,	// (0x00011d7f) mup_spec_half_pane_cp

0xbc4b,	// (0x00019dc2) mup_osc_middle_pane

0xbc54,	// (0x00019dcb) mup_visualizer_osc_pane_g1

0x3bdf,	// (0x00011d56) mup_spec_bar_pane_ParamLimits

0x3bdf,	// (0x00011d56) mup_spec_bar_pane

0xbc38,	// (0x00019daf) mup_spec_bar_pane_g1

0xbc42,	// (0x00019db9) mup_spec_bar_pane_g2

0x0001,

0xf616,	// (0x0001d78d) mup_spec_bar_pane_g

0x10da,	// (0x0000f251) aid_cale_week_size_cell_pane_ParamLimits

0x10ed,	// (0x0000f264) bg_cale_heading_pane_ParamLimits

0x9b33,	// (0x00017caa) bg_cale_pane_cp01_ParamLimits

0x1105,	// (0x0000f27c) cale_week_corner_pane_ParamLimits

0x1116,	// (0x0000f28d) cale_week_day_heading_pane_ParamLimits

0x112e,	// (0x0000f2a5) cale_week_scroll_pane_g1_ParamLimits

0x1143,	// (0x0000f2ba) cale_week_scroll_pane_g2_ParamLimits

0x1154,	// (0x0000f2cb) cale_week_scroll_pane_g3_ParamLimits

0x1165,	// (0x0000f2dc) cale_week_scroll_pane_g4_ParamLimits

0x1176,	// (0x0000f2ed) cale_week_scroll_pane_g5_ParamLimits

0x1189,	// (0x0000f300) cale_week_scroll_pane_g6_ParamLimits

0x119c,	// (0x0000f313) cale_week_scroll_pane_g7_ParamLimits

0x11af,	// (0x0000f326) cale_week_scroll_pane_g8_ParamLimits

0x11c2,	// (0x0000f339) cale_week_scroll_pane_g9_ParamLimits

0x11d3,	// (0x0000f34a) cale_week_scroll_pane_g10_ParamLimits

0x11e4,	// (0x0000f35b) cale_week_scroll_pane_g11_ParamLimits

0x11f5,	// (0x0000f36c) cale_week_scroll_pane_g12_ParamLimits

0x1206,	// (0x0000f37d) cale_week_scroll_pane_g13_ParamLimits

0x1217,	// (0x0000f38e) cale_week_scroll_pane_g14_ParamLimits

0x1228,	// (0x0000f39f) cale_week_scroll_pane_g15_ParamLimits

0xf1be,	// (0x0001d335) cale_week_scroll_pane_g_ParamLimits

0x123d,	// (0x0000f3b4) cale_week_time_pane_ParamLimits

0x1250,	// (0x0000f3c7) grid_cale_week_pane_ParamLimits

0x9b4c,	// (0x00017cc3) listscroll_cale_week_pane_t1

0x1265,	// (0x0000f3dc) scroll_pane_cp08_ParamLimits

0x1d0f,	// (0x0000fe86) cale_month_corner_pane_ParamLimits

0xa01c,	// (0x00018193) cale_month_pane_t1

0x1ff1,	// (0x00010168) cale_month_week_pane_ParamLimits

0x26c8,	// (0x0001083f) popup_call_status_window_g1_ParamLimits

0x26dc,	// (0x00010853) popup_call_status_window_g2_ParamLimits

0x26f0,	// (0x00010867) popup_call_status_window_g3_ParamLimits

0xf366,	// (0x0001d4dd) popup_call_status_window_g_ParamLimits

0xa403,	// (0x0001857a) aid_call2_pane

0x2f14,	// (0x0001108b) msg_header_pane_g1

0x30ac,	// (0x00011223) postcard_address2_pane_ParamLimits

0x30ac,	// (0x00011223) postcard_address2_pane

0x30be,	// (0x00011235) postcard_message2_pane_ParamLimits

0x30be,	// (0x00011235) postcard_message2_pane

0x3b8c,	// (0x00011d03) message2_row_pane_ParamLimits

0x3b8c,	// (0x00011d03) message2_row_pane

0x3bab,	// (0x00011d22) address2_row_pane_ParamLimits

0x3bab,	// (0x00011d22) address2_row_pane

0xbc06,	// (0x00019d7d) postcard_message2_row_pane_g1

0xbc0e,	// (0x00019d85) postcard_message2_row_pane_t1

0xbc06,	// (0x00019d7d) address2_row_pane_g1

0xbc0e,	// (0x00019d85) address2_row_pane_t1

0x9bb0,	// (0x00017d27) aid_size_cell_vorec

0x9602,	// (0x00017779) main_rss_pane

0x3bbe,	// (0x00011d35) rss_list_single_pane_ParamLimits

0x3bbe,	// (0x00011d35) rss_list_single_pane

0xbc1c,	// (0x00019d93) rss_list_single_pane_t1

0xbc2a,	// (0x00019da1) rss_list_single_pane_t2

0x0001,

0xf611,	// (0x0001d788) rss_list_single_pane_t

0x9602,	// (0x00017779) main_camera2_pane

0x9602,	// (0x00017779) main_video2_pane

0x3e25,	// (0x00011f9c) cams_zoom_pane_cp2_ParamLimits

0x3e25,	// (0x00011f9c) cams_zoom_pane_cp2

0x3e45,	// (0x00011fbc) image2_vga_pane_ParamLimits

0x3e45,	// (0x00011fbc) image2_vga_pane

0x3e96,	// (0x0001200d) main_camera2_pane_g1_ParamLimits

0x3e96,	// (0x0001200d) main_camera2_pane_g1

0x3eb6,	// (0x0001202d) main_camera2_pane_g2_ParamLimits

0x3eb6,	// (0x0001202d) main_camera2_pane_g2

0x3ed6,	// (0x0001204d) main_camera2_pane_g3_ParamLimits

0x3ed6,	// (0x0001204d) main_camera2_pane_g3

0x3ef6,	// (0x0001206d) main_camera2_pane_g4_ParamLimits

0x3ef6,	// (0x0001206d) main_camera2_pane_g4

0x3f16,	// (0x0001208d) main_camera2_pane_g5_ParamLimits

0x3f16,	// (0x0001208d) main_camera2_pane_g5

0x3f36,	// (0x000120ad) main_camera2_pane_g6_ParamLimits

0x3f36,	// (0x000120ad) main_camera2_pane_g6

0x3f56,	// (0x000120cd) main_camera2_pane_g7_ParamLimits

0x3f56,	// (0x000120cd) main_camera2_pane_g7

0x3f76,	// (0x000120ed) main_camera2_pane_g8_ParamLimits

0x3f76,	// (0x000120ed) main_camera2_pane_g8

0x0008,

0xf632,	// (0x0001d7a9) main_camera2_pane_g_ParamLimits

0xf632,	// (0x0001d7a9) main_camera2_pane_g

0x3fb6,	// (0x0001212d) main_camera2_pane_t1_ParamLimits

0x3fb6,	// (0x0001212d) main_camera2_pane_t1

0x3feb,	// (0x00012162) main_camera2_pane_t2_ParamLimits

0x3feb,	// (0x00012162) main_camera2_pane_t2

0x4011,	// (0x00012188) main_camera2_pane_t3_ParamLimits

0x4011,	// (0x00012188) main_camera2_pane_t3

0x406f,	// (0x000121e6) main_camera2_pane_t4_ParamLimits

0x406f,	// (0x000121e6) main_camera2_pane_t4

0x0006,

0xf645,	// (0x0001d7bc) main_camera2_pane_t_ParamLimits

0xf645,	// (0x0001d7bc) main_camera2_pane_t

0x4101,	// (0x00012278) cams_zoom_pane_cp4_ParamLimits

0x4101,	// (0x00012278) cams_zoom_pane_cp4

0x4117,	// (0x0001228e) image2_cif_pane_ParamLimits

0x4117,	// (0x0001228e) image2_cif_pane

0x4142,	// (0x000122b9) image2_subqcif_pane_ParamLimits

0x4142,	// (0x000122b9) image2_subqcif_pane

0x415c,	// (0x000122d3) main_video2_pane_g1_ParamLimits

0x415c,	// (0x000122d3) main_video2_pane_g1

0x4176,	// (0x000122ed) main_video2_pane_g2_ParamLimits

0x4176,	// (0x000122ed) main_video2_pane_g2

0x418c,	// (0x00012303) main_video2_pane_g3_ParamLimits

0x418c,	// (0x00012303) main_video2_pane_g3

0x41a2,	// (0x00012319) main_video2_pane_g4_ParamLimits

0x41a2,	// (0x00012319) main_video2_pane_g4

0x41b8,	// (0x0001232f) main_video2_pane_g5_ParamLimits

0x41b8,	// (0x0001232f) main_video2_pane_g5

0x41ce,	// (0x00012345) main_video2_pane_g6_ParamLimits

0x41ce,	// (0x00012345) main_video2_pane_g6

0x0005,

0xf654,	// (0x0001d7cb) main_video2_pane_g_ParamLimits

0xf654,	// (0x0001d7cb) main_video2_pane_g

0x41e8,	// (0x0001235f) main_video2_pane_t1_ParamLimits

0x41e8,	// (0x0001235f) main_video2_pane_t1

0x420c,	// (0x00012383) main_video2_pane_t2_ParamLimits

0x420c,	// (0x00012383) main_video2_pane_t2

0x425a,	// (0x000123d1) main_video2_pane_t3_ParamLimits

0x425a,	// (0x000123d1) main_video2_pane_t3

0x0002,

0xf661,	// (0x0001d7d8) main_video2_pane_t_ParamLimits

0xf661,	// (0x0001d7d8) main_video2_pane_t

0x36e2,	// (0x00011859) call_muted_g2

0x0001,

0xf603,	// (0x0001d77a) call_muted_g

0x9602,	// (0x00017779) main_mup2_pane

0x42a2,	// (0x00012419) main_mup2_pane_g1_ParamLimits

0x42a2,	// (0x00012419) main_mup2_pane_g1

0x42ae,	// (0x00012425) main_mup2_pane_g2_ParamLimits

0x42ae,	// (0x00012425) main_mup2_pane_g2

0xbdbc,	// (0x00019f33) main_mup_pane_g13_cp1

0xbdc4,	// (0x00019f3b) mup_volume_pane_cp1

0x42ca,	// (0x00012441) main_mup2_pane_g4_ParamLimits

0x42ca,	// (0x00012441) main_mup2_pane_g4

0x42dc,	// (0x00012453) main_mup2_pane_g5_ParamLimits

0x42dc,	// (0x00012453) main_mup2_pane_g5

0x42ee,	// (0x00012465) main_mup2_pane_g6_ParamLimits

0x42ee,	// (0x00012465) main_mup2_pane_g6

0x4300,	// (0x00012477) main_mup2_pane_g7_ParamLimits

0x4300,	// (0x00012477) main_mup2_pane_g7

0x0006,

0xf668,	// (0x0001d7df) main_mup2_pane_g_ParamLimits

0xf668,	// (0x0001d7df) main_mup2_pane_g

0x4318,	// (0x0001248f) main_mup2_pane_t1_ParamLimits

0x4318,	// (0x0001248f) main_mup2_pane_t1

0x432e,	// (0x000124a5) main_mup2_pane_t2_ParamLimits

0x432e,	// (0x000124a5) main_mup2_pane_t2

0x4344,	// (0x000124bb) main_mup2_pane_t3_ParamLimits

0x4344,	// (0x000124bb) main_mup2_pane_t3

0x435a,	// (0x000124d1) main_mup2_pane_t4_ParamLimits

0x435a,	// (0x000124d1) main_mup2_pane_t4

0x4372,	// (0x000124e9) main_mup2_pane_t5_ParamLimits

0x4372,	// (0x000124e9) main_mup2_pane_t5

0x438a,	// (0x00012501) main_mup2_pane_t6_ParamLimits

0x438a,	// (0x00012501) main_mup2_pane_t6

0x0005,

0xf677,	// (0x0001d7ee) main_mup2_pane_t_ParamLimits

0xf677,	// (0x0001d7ee) main_mup2_pane_t

0x43ba,	// (0x00012531) mup2_visualizer_pane_ParamLimits

0x43ba,	// (0x00012531) mup2_visualizer_pane

0x43e8,	// (0x0001255f) mup_progress_pane_cp_ParamLimits

0x43e8,	// (0x0001255f) mup_progress_pane_cp

0xbd9e,	// (0x00019f15) mup_volume_pane_cp_ParamLimits

0xbd9e,	// (0x00019f15) mup_volume_pane_cp

0x43fc,	// (0x00012573) mup2_visualizer_pane_g1_ParamLimits

0x43fc,	// (0x00012573) mup2_visualizer_pane_g1

0xbcdd,	// (0x00019e54) mup2_visualizer_pane_g2_ParamLimits

0xbcdd,	// (0x00019e54) mup2_visualizer_pane_g2

0x4413,	// (0x0001258a) mup2_visualizer_pane_g3_ParamLimits

0x4413,	// (0x0001258a) mup2_visualizer_pane_g3

0x0002,

0xf684,	// (0x0001d7fb) mup2_visualizer_pane_g_ParamLimits

0xf684,	// (0x0001d7fb) mup2_visualizer_pane_g

0xaa7d,	// (0x00018bf4) aid_size_cell_fmradio

0x3894,	// (0x00011a0b) aid_height_parent_landcape

0x9e84,	// (0x00017ffb) wml_content_pane_cp

0x9e8c,	// (0x00018003) wml_tabs_pane

0x9e95,	// (0x0001800c) popup_wml_miniature_window

0x9e9d,	// (0x00018014) scroll_pane_cp021

0x9eb1,	// (0x00018028) wml_content_pane_comp8

0x9602,	// (0x00017779) bg_popup_sub_pane_cp05

0xbcfb,	// (0x00019e72) popup_wml_miniature_window_g1

0xbd03,	// (0x00019e7a) wml_miniature_view_pane

0x441f,	// (0x00012596) aid_size_wml_view

0x4427,	// (0x0001259e) wml_miniature_view_pane_g1

0x4430,	// (0x000125a7) wml_miniature_view_pane_g2

0x4439,	// (0x000125b0) wml_miniature_view_pane_g3

0x4441,	// (0x000125b8) wml_miniature_view_pane_g4

0x4449,	// (0x000125c0) wml_miniature_view_pane_g5

0x4451,	// (0x000125c8) wml_miniature_view_pane_g6

0x4459,	// (0x000125d0) wml_miniature_view_pane_g7

0x4461,	// (0x000125d8) wml_miniature_view_pane_g8

0x0007,

0xf68b,	// (0x0001d802) wml_miniature_view_pane_g

0xbd0b,	// (0x00019e82) background_graphic_ParamLimits

0xbd0b,	// (0x00019e82) background_graphic

0xbd17,	// (0x00019e8e) wml_tabs_2_pane

0xbd20,	// (0x00019e97) wml_tabs_3_pane_ParamLimits

0xbd20,	// (0x00019e97) wml_tabs_3_pane

0xbd32,	// (0x00019ea9) wml_tabs_4_pane_ParamLimits

0xbd32,	// (0x00019ea9) wml_tabs_4_pane

0xbd48,	// (0x00019ebf) wml_tabs_5_pane_ParamLimits

0xbd48,	// (0x00019ebf) wml_tabs_5_pane

0xbd62,	// (0x00019ed9) wml_tabs_pane_g2_ParamLimits

0xbd62,	// (0x00019ed9) wml_tabs_pane_g2

0xbd76,	// (0x00019eed) wml_tabs_pane_g3_ParamLimits

0xbd76,	// (0x00019eed) wml_tabs_pane_g3

0x4469,	// (0x000125e0) wml_tabs_2_active_pane_ParamLimits

0x4469,	// (0x000125e0) wml_tabs_2_active_pane

0x447d,	// (0x000125f4) wml_tabs_2_passive_pane_ParamLimits

0x447d,	// (0x000125f4) wml_tabs_2_passive_pane

0x4491,	// (0x00012608) wml_tabs_3_active_pane_cp_ParamLimits

0x4491,	// (0x00012608) wml_tabs_3_active_pane_cp

0x44a6,	// (0x0001261d) wml_tabs_3_passive_pane_ParamLimits

0x44a6,	// (0x0001261d) wml_tabs_3_passive_pane

0x44b9,	// (0x00012630) wml_tabs_3_passive_pane_cp_ParamLimits

0x44b9,	// (0x00012630) wml_tabs_3_passive_pane_cp

0x44d0,	// (0x00012647) tabs_4_active_pane

0x44d8,	// (0x0001264f) tabs_4_passive_pane

0x44e2,	// (0x00012659) tabs_4_passive_pane_cp

0x44ea,	// (0x00012661) tabs_4_passive_pane_cp2

0xba33,	// (0x00019baa) aid_height_text

0x2c6c,	// (0x00010de3) mup_volume_cont_pane_ParamLimits

0x2c6c,	// (0x00010de3) mup_volume_cont_pane

0x0d07,	// (0x0000ee7e) aid_size_cell_pinb

0x988d,	// (0x00017a04) aid_size_list_pinb

0x43d4,	// (0x0001254b) mup2_volume_cont_pane_ParamLimits

0x43d4,	// (0x0001254b) mup2_volume_cont_pane

0xbd8a,	// (0x00019f01) mup2_volume_cont_pane_g1_ParamLimits

0xbd8a,	// (0x00019f01) mup2_volume_cont_pane_g1

0x09e7,	// (0x0000eb5e) aid_size_cell_touch_ParamLimits

0x09e7,	// (0x0000eb5e) aid_size_cell_touch

0x0bf5,	// (0x0000ed6c) touch_pane_ParamLimits

0x0bf5,	// (0x0000ed6c) touch_pane

0x9173,	// (0x000172ea) main_rss2_pane

0xbdcc,	// (0x00019f43) listscroll_rss2_pane

0xbdd5,	// (0x00019f4c) rss2_navigation_pane

0xbddd,	// (0x00019f54) list_rss2_pane

0xa5b2,	// (0x00018729) scroll_pane_cp22

0xbde5,	// (0x00019f5c) rss2_navigation_pane_g1

0xbdee,	// (0x00019f65) rss2_navigation_pane_g2

0xbdf6,	// (0x00019f6d) rss2_navigation_pane_g3

0x0002,

0xf69c,	// (0x0001d813) rss2_navigation_pane_g

0xbdfe,	// (0x00019f75) rss2_navigation_pane_t1

0x44f4,	// (0x0001266b) rss2_list_single_pane_ParamLimits

0x44f4,	// (0x0001266b) rss2_list_single_pane

0xbe0c,	// (0x00019f83) rss2_list_single_pane_t2

0xbe1a,	// (0x00019f91) rss2_list_single_pane_t3_ParamLimits

0xbe1a,	// (0x00019f91) rss2_list_single_pane_t3

0xbe37,	// (0x00019fae) rss2_list_single_pane_t4

0x24a5,	// (0x0001061c) smil_status_pane_g1

0x91e3,	// (0x0001735a) main_image2_pane_ParamLimits

0x91e3,	// (0x0001735a) main_image2_pane

0x3f96,	// (0x0001210d) main_camera2_pane_g9_ParamLimits

0x3f96,	// (0x0001210d) main_camera2_pane_g9

0x40c4,	// (0x0001223b) main_camera2_pane_t5_ParamLimits

0x40c4,	// (0x0001223b) main_camera2_pane_t5

0xbcad,	// (0x00019e24) main_camera2_pane_t6_ParamLimits

0xbcad,	// (0x00019e24) main_camera2_pane_t6

0x450c,	// (0x00012683) main_image2_pane_g1_ParamLimits

0x450c,	// (0x00012683) main_image2_pane_g1

0x32ee,	// (0x00011465) smil2_video_pane_ParamLimits

0x32ee,	// (0x00011465) smil2_video_pane

0x9191,	// (0x00017308) aid_zoom_text_primary_cp

0x91d9,	// (0x00017350) popup_preview_fixed_window

0x9ded,	// (0x00017f64) im_reading_pane_g1

0x3e0d,	// (0x00011f84) cams2_bc_adjust_pane_cp_ParamLimits

0x3e0d,	// (0x00011f84) cams2_bc_adjust_pane_cp

0x40f3,	// (0x0001226a) cams2_bc_adjust_pane_ParamLimits

0x40f3,	// (0x0001226a) cams2_bc_adjust_pane

0xbe45,	// (0x00019fbc) cams2_bc_adjust_pane_g1

0xbe4d,	// (0x00019fc4) cams2_slider_pane

0xbe56,	// (0x00019fcd) cams2_slider_pane_g1

0xbe5f,	// (0x00019fd6) cams2_slider_pane_g2

0x0006,

0xf6a3,	// (0x0001d81a) cams2_slider_pane_g

0x0dc6,	// (0x0000ef3d) calc_display_pane_ParamLimits

0x0dee,	// (0x0000ef65) calc_paper_pane_ParamLimits

0x0e11,	// (0x0000ef88) grid_calc_pane_ParamLimits

0xa465,	// (0x000185dc) popup_clock_digital_window_t1_ParamLimits

0xaa1a,	// (0x00018b91) main_image_pane_t1

0x0da8,	// (0x0000ef1f) aid_size_cell_calc_ParamLimits

0x0da8,	// (0x0000ef1f) aid_size_cell_calc

0x38da,	// (0x00011a51) popup_blid_sat_info2_window_ParamLimits

0x38da,	// (0x00011a51) popup_blid_sat_info2_window

0xbe81,	// (0x00019ff8) aid_size_cell_blid

0xbe89,	// (0x0001a000) bg_popup_window_pane_cp07

0xbeac,	// (0x0001a023) grid_popup_blid_pane

0xbeb6,	// (0x0001a02d) heading_pane_cp05_ParamLimits

0xbeb6,	// (0x0001a02d) heading_pane_cp05

0xbf80,	// (0x0001a0f7) cell_popup_blid_pane_ParamLimits

0xbf80,	// (0x0001a0f7) cell_popup_blid_pane

0xbfa6,	// (0x0001a11d) cell_popup_blid_pane_g1

0xbfae,	// (0x0001a125) cell_popup_blid_pane_t1

0x43a4,	// (0x0001251b) mup2_indicator_pane_ParamLimits

0x43a4,	// (0x0001251b) mup2_indicator_pane

0xa6ff,	// (0x00018876) mup2_visualizer_osc_pane

0xbce9,	// (0x00019e60) mup2_visualizer_spec_pane_ParamLimits

0xbce9,	// (0x00019e60) mup2_visualizer_spec_pane

0x4522,	// (0x00012699) mup2_spec_half_pane

0x452b,	// (0x000126a2) mup2_spec_half_pane_cp

0x4533,	// (0x000126aa) mup2_spec_bar_pane_ParamLimits

0x4533,	// (0x000126aa) mup2_spec_bar_pane

0xbc38,	// (0x00019daf) mup2_spec_bar_pane_g1

0xbc42,	// (0x00019db9) mup2_spec_bar_pane_g2

0x0001,

0xf616,	// (0x0001d78d) mup2_spec_bar_pane_g

0x4553,	// (0x000126ca) mup2_osc_middle_pane

0xbc54,	// (0x00019dcb) mup2_visualizer_osc_pane_g1

0x9211,	// (0x00017388) popup_number_entry_window_t1_ParamLimits

0x9224,	// (0x0001739b) popup_number_entry_window_t2_ParamLimits

0x9236,	// (0x000173ad) popup_number_entry_window_t3_ParamLimits

0x0c47,	// (0x0000edbe) popup_number_entry_window_t5_ParamLimits

0x0c47,	// (0x0000edbe) popup_number_entry_window_t5

0xf0d8,	// (0x0001d24f) popup_number_entry_window_t_ParamLimits

0x9248,	// (0x000173bf) text_title_cp2_ParamLimits

0xa8f4,	// (0x00018a6b) aid_hotspot_pointer_text2_pane

0xa91a,	// (0x00018a91) main_viewer_pane_g9_ParamLimits

0xa91a,	// (0x00018a91) main_viewer_pane_g9

0xa01c,	// (0x00018193) cale_month_pane_t1_ParamLimits

0xa0b1,	// (0x00018228) bg_cale_pane_ParamLimits

0xa0c9,	// (0x00018240) list_cale_pane_ParamLimits

0x9b4c,	// (0x00017cc3) listscroll_cale_day_pane_t1

0xa0da,	// (0x00018251) scroll_pane_cp09_ParamLimits

0x2ca2,	// (0x00010e19) main_mup_eq_pane_t1_ParamLimits

0x2ca2,	// (0x00010e19) main_mup_eq_pane_t1

0x2cbe,	// (0x00010e35) main_mup_eq_pane_t2_ParamLimits

0x2cbe,	// (0x00010e35) main_mup_eq_pane_t2

0x2cda,	// (0x00010e51) main_mup_eq_pane_t3_ParamLimits

0x2cda,	// (0x00010e51) main_mup_eq_pane_t3

0x2cf8,	// (0x00010e6f) main_mup_eq_pane_t4_ParamLimits

0x2cf8,	// (0x00010e6f) main_mup_eq_pane_t4

0x2d16,	// (0x00010e8d) main_mup_eq_pane_t5_ParamLimits

0x2d16,	// (0x00010e8d) main_mup_eq_pane_t5

0x2d34,	// (0x00010eab) main_mup_eq_pane_t6_ParamLimits

0x2d34,	// (0x00010eab) main_mup_eq_pane_t6

0x2d4a,	// (0x00010ec1) main_mup_eq_pane_t7_ParamLimits

0x2d4a,	// (0x00010ec1) main_mup_eq_pane_t7

0x2d60,	// (0x00010ed7) main_mup_eq_pane_t8_ParamLimits

0x2d60,	// (0x00010ed7) main_mup_eq_pane_t8

0x2d76,	// (0x00010eed) main_mup_eq_pane_t9_ParamLimits

0x2d76,	// (0x00010eed) main_mup_eq_pane_t9

0x2d90,	// (0x00010f07) main_mup_eq_pane_t10_ParamLimits

0x2d90,	// (0x00010f07) main_mup_eq_pane_t10

0x0009,

0xf465,	// (0x0001d5dc) main_mup_eq_pane_t_ParamLimits

0xf465,	// (0x0001d5dc) main_mup_eq_pane_t

0x2e3f,	// (0x00010fb6) mup_equalizer_pane_cp5_ParamLimits

0x2e53,	// (0x00010fca) mup_equalizer_pane_cp6_ParamLimits

0x2e67,	// (0x00010fde) mup_equalizer_pane_cp7_ParamLimits

0x9173,	// (0x000172ea) main_gallery_pane

0xbc5d,	// (0x00019dd4) smil2_volume_pane

0xbc65,	// (0x00019ddc) smil_status_volume_pane_g1_ParamLimits

0xbc78,	// (0x00019def) smil_status_volume_pane_g2_ParamLimits

0xbc8b,	// (0x00019e02) smil_status_volume_pane_g3_ParamLimits

0xf61b,	// (0x0001d792) smil_status_volume_pane_g_ParamLimits

0xbe89,	// (0x0001a000) bg_popup_window_pane_cp07_ParamLimits

0xbe97,	// (0x0001a00e) blid_firmament_pane

0x455c,	// (0x000126d3) aid_size_cell_gallery_ParamLimits

0x455c,	// (0x000126d3) aid_size_cell_gallery

0x4572,	// (0x000126e9) grid_gallery_pane_ParamLimits

0x4572,	// (0x000126e9) grid_gallery_pane

0x458b,	// (0x00012702) cell_gallery_pane_ParamLimits

0x458b,	// (0x00012702) cell_gallery_pane

0xbfbc,	// (0x0001a133) bg_cell_gallery_focus_pane_ParamLimits

0xbfbc,	// (0x0001a133) bg_cell_gallery_focus_pane

0xbfce,	// (0x0001a145) cell_gallery_pane_g1_ParamLimits

0xbfce,	// (0x0001a145) cell_gallery_pane_g1

0x45d4,	// (0x0001274b) cell_gallery_pane_g2_ParamLimits

0x45d4,	// (0x0001274b) cell_gallery_pane_g2

0x45e1,	// (0x00012758) cell_gallery_pane_g3_ParamLimits

0x45e1,	// (0x00012758) cell_gallery_pane_g3

0xbfda,	// (0x0001a151) cell_gallery_pane_g4_ParamLimits

0xbfda,	// (0x0001a151) cell_gallery_pane_g4

0x0003,

0xf6c9,	// (0x0001d840) cell_gallery_pane_g_ParamLimits

0xf6c9,	// (0x0001d840) cell_gallery_pane_g

0xbfe6,	// (0x0001a15d) bg_cell_gallery_focus_pane_g1

0xbfee,	// (0x0001a165) bg_cell_gallery_focus_pane_g2

0xbff6,	// (0x0001a16d) bg_cell_gallery_focus_pane_g3

0xbffe,	// (0x0001a175) bg_cell_gallery_focus_pane_g4

0xc006,	// (0x0001a17d) bg_cell_gallery_focus_pane_g5

0xc00e,	// (0x0001a185) bg_cell_gallery_focus_pane_g6

0xc016,	// (0x0001a18d) bg_cell_gallery_focus_pane_g7

0xc01e,	// (0x0001a195) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6d2,	// (0x0001d849) bg_cell_gallery_focus_pane_g

0xc026,	// (0x0001a19d) aid_firma_cardinal

0xc03a,	// (0x0001a1b1) blid_firmament_pane_t1

0xc051,	// (0x0001a1c8) blid_firmament_pane_t2

0xc068,	// (0x0001a1df) blid_firmament_pane_t3

0xc07f,	// (0x0001a1f6) blid_firmament_pane_t4

0x0003,

0xf6e3,	// (0x0001d85a) blid_firmament_pane_t

0xc096,	// (0x0001a20d) blid_sat_info_pane

0xc0a6,	// (0x0001a21d) blid_sat_info_pane_g1

0xc0a6,	// (0x0001a21d) blid_sat_info_pane_g2

0x0001,

0xf6ec,	// (0x0001d863) blid_sat_info_pane_g

0xc0b0,	// (0x0001a227) blid_sat_info_pane_t1

0xc0be,	// (0x0001a235) smil2_volume_content_pane

0xc0c7,	// (0x0001a23e) smil2_volume_pane_g1

0xc0cf,	// (0x0001a246) smil2_volume_content_pane_g1

0xc0d8,	// (0x0001a24f) smil2_volume_content_pane_g2

0xc0e1,	// (0x0001a258) smil2_volume_content_pane_g3

0xc0ea,	// (0x0001a261) smil2_volume_content_pane_g4

0xc0f3,	// (0x0001a26a) smil2_volume_content_pane_g5

0xc0fc,	// (0x0001a273) smil2_volume_content_pane_g6

0xc105,	// (0x0001a27c) smil2_volume_content_pane_g7

0xc10e,	// (0x0001a285) smil2_volume_content_pane_g8

0xc117,	// (0x0001a28e) smil2_volume_content_pane_g9

0xc120,	// (0x0001a297) smil2_volume_content_pane_g10

0x0009,

0xf6f1,	// (0x0001d868) smil2_volume_content_pane_g

0x12bf,	// (0x0000f436) cale_week_day_heading_pane_t1_ParamLimits

0x12d3,	// (0x0000f44a) cale_week_day_heading_pane_t2_ParamLimits

0x12e7,	// (0x0000f45e) cale_week_day_heading_pane_t3_ParamLimits

0x12fb,	// (0x0000f472) cale_week_day_heading_pane_t4_ParamLimits

0x130f,	// (0x0000f486) cale_week_day_heading_pane_t5_ParamLimits

0x1323,	// (0x0000f49a) cale_week_day_heading_pane_t6_ParamLimits

0x1339,	// (0x0000f4b0) cale_week_day_heading_pane_t7_ParamLimits

0xf1dd,	// (0x0001d354) cale_week_day_heading_pane_t_ParamLimits

0x9b5e,	// (0x00017cd5) bg_cale_side_pane_ParamLimits

0x134d,	// (0x0000f4c4) cale_week_time_pane_t1_ParamLimits

0x1365,	// (0x0000f4dc) cale_week_time_pane_t2_ParamLimits

0x137d,	// (0x0000f4f4) cale_week_time_pane_t3_ParamLimits

0x1395,	// (0x0000f50c) cale_week_time_pane_t4_ParamLimits

0x13ad,	// (0x0000f524) cale_week_time_pane_t5_ParamLimits

0x13c5,	// (0x0000f53c) cale_week_time_pane_t6_ParamLimits

0x13dd,	// (0x0000f554) cale_week_time_pane_t7_ParamLimits

0x13f5,	// (0x0000f56c) cale_week_time_pane_t8_ParamLimits

0xf1ec,	// (0x0001d363) cale_week_time_pane_t_ParamLimits

0x140d,	// (0x0000f584) cell_cale_week_pane_g2_ParamLimits

0x9b5e,	// (0x00017cd5) bg_cale_side_pane_cp01_ParamLimits

0x231e,	// (0x00010495) cale_month_week_pane_t1_ParamLimits

0x2335,	// (0x000104ac) cale_month_week_pane_t2_ParamLimits

0x234c,	// (0x000104c3) cale_month_week_pane_t3_ParamLimits

0x2363,	// (0x000104da) cale_month_week_pane_t4_ParamLimits

0x237a,	// (0x000104f1) cale_month_week_pane_t5_ParamLimits

0x2391,	// (0x00010508) cale_month_week_pane_t6_ParamLimits

0xf2c5,	// (0x0001d43c) cale_month_week_pane_t_ParamLimits

0xa058,	// (0x000181cf) cell_cale_month_pane_g1_ParamLimits

0x9173,	// (0x000172ea) main_cale_event_viewer_pane

0x9173,	// (0x000172ea) listscroll_cale_event_viewer_pane

0xc129,	// (0x0001a2a0) list_cale_ev_pane

0xc131,	// (0x0001a2a8) scroll_pane_cp023

0xc13d,	// (0x0001a2b4) field_cale_ev_pane_ParamLimits

0xc13d,	// (0x0001a2b4) field_cale_ev_pane

0xc157,	// (0x0001a2ce) field_cale_ev_content_pane_ParamLimits

0xc157,	// (0x0001a2ce) field_cale_ev_content_pane

0xc163,	// (0x0001a2da) field_cale_ev_pane_g1_ParamLimits

0xc163,	// (0x0001a2da) field_cale_ev_pane_g1

0xc16f,	// (0x0001a2e6) field_cale_ev_pane_g2_ParamLimits

0xc16f,	// (0x0001a2e6) field_cale_ev_pane_g2

0xc187,	// (0x0001a2fe) field_cale_ev_pane_g3_ParamLimits

0xc187,	// (0x0001a2fe) field_cale_ev_pane_g3

0x0002,

0xf706,	// (0x0001d87d) field_cale_ev_pane_g_ParamLimits

0xf706,	// (0x0001d87d) field_cale_ev_pane_g

0xc19f,	// (0x0001a316) field_cale_ev_pane_t1_ParamLimits

0xc19f,	// (0x0001a316) field_cale_ev_pane_t1

0xc1b6,	// (0x0001a32d) field_cale_ev_content_pane_t1_ParamLimits

0xc1b6,	// (0x0001a32d) field_cale_ev_content_pane_t1

0xa888,	// (0x000189ff) bg_button_pane_cp01

0x9996,	// (0x00017b0d) listscroll_cale_week_pane_ParamLimits

0x10d0,	// (0x0000f247) popup_toolbar_window_cp01

0x9b4c,	// (0x00017cc3) listscroll_cale_week_pane_t1_ParamLimits

0x9996,	// (0x00017b0d) listscroll_cale_day_pane_ParamLimits

0x2504,	// (0x0001067b) popup_toolbar_window_cp02

0x9b4c,	// (0x00017cc3) listscroll_cale_day_pane_t1_ParamLimits

0x9996,	// (0x00017b0d) main_cale_month_pane_ParamLimits

0x3b00,	// (0x00011c77) popup_toolbar_window_cp03_ParamLimits

0x3b00,	// (0x00011c77) popup_toolbar_window_cp03

0x31b2,	// (0x00011329) main_image_pane_g2_ParamLimits

0x31b2,	// (0x00011329) main_image_pane_g2

0x31c3,	// (0x0001133a) main_image_pane_g3_ParamLimits

0x31c3,	// (0x0001133a) main_image_pane_g3

0x0002,

0xf4f7,	// (0x0001d66e) main_image_pane_g_ParamLimits

0xf4f7,	// (0x0001d66e) main_image_pane_g

0xaa1a,	// (0x00018b91) main_image_pane_t1_ParamLimits

0x31d4,	// (0x0001134b) main_image_pane_t2_ParamLimits

0x31d4,	// (0x0001134b) main_image_pane_t2

0x31e6,	// (0x0001135d) main_image_pane_t3_ParamLimits

0x31e6,	// (0x0001135d) main_image_pane_t3

0x320e,	// (0x00011385) main_image_pane_t4_ParamLimits

0x320e,	// (0x00011385) main_image_pane_t4

0x0003,

0xf4fe,	// (0x0001d675) main_image_pane_t_ParamLimits

0xf4fe,	// (0x0001d675) main_image_pane_t

0x322e,	// (0x000113a5) popup_image_details_window_cp01

0x3238,	// (0x000113af) popup_toobar_trans_pane_cp01_ParamLimits

0x3238,	// (0x000113af) popup_toobar_trans_pane_cp01

0x39b1,	// (0x00011b28) popup_image_details_window_ParamLimits

0x39b1,	// (0x00011b28) popup_image_details_window

0xbbbe,	// (0x00019d35) popup_image_focus_window

0x3dc7,	// (0x00011f3e) camera2_autofocus_pane_ParamLimits

0x3dc7,	// (0x00011f3e) camera2_autofocus_pane

0x9173,	// (0x000172ea) bg_popup_sub_pane_cp06

0xc1d3,	// (0x0001a34a) popup_image_focus_window_g1

0xc1db,	// (0x0001a352) popup_image_focus_window_g2

0xc1e3,	// (0x0001a35a) popup_image_focus_window_g3

0xc1eb,	// (0x0001a362) popup_image_focus_window_g4

0x0003,

0xf70d,	// (0x0001d884) popup_image_focus_window_g

0xc1f3,	// (0x0001a36a) popup_image_focus_window_t1

0xc201,	// (0x0001a378) popup_image_focus_window_t2

0xc211,	// (0x0001a388) popup_image_focus_window_t3

0x0002,

0xf716,	// (0x0001d88d) popup_image_focus_window_t

0xc21f,	// (0x0001a396) camera2_autofocus_pane_g1

0x91e3,	// (0x0001735a) bg_tb_trans_pane_cp01

0xc22d,	// (0x0001a3a4) popup_image_details_window_g1

0xc240,	// (0x0001a3b7) popup_image_details_window_g2

0x0002,

0xf728,	// (0x0001d89f) popup_image_details_window_g

0xc269,	// (0x0001a3e0) popup_image_details_window_t1

0xc27b,	// (0x0001a3f2) popup_image_details_window_t2

0xc294,	// (0x0001a40b) popup_image_details_window_t3

0xc2a8,	// (0x0001a41f) popup_image_details_window_t4

0xc2c3,	// (0x0001a43a) popup_image_details_window_t5

0x0004,

0xf72f,	// (0x0001d8a6) popup_image_details_window_t

0x9968,	// (0x00017adf) bg_calc_paper_pane_ParamLimits

0x9173,	// (0x000172ea) grid_highlight_pane_cp013

0x997c,	// (0x00017af3) list_calc_pane_ParamLimits

0x998e,	// (0x00017b05) scroll_pane_cp024

0x9996,	// (0x00017b0d) bg_calc_display_pane_ParamLimits

0x0f0f,	// (0x0000f086) calc_display_pane_t1_ParamLimits

0x0f21,	// (0x0000f098) calc_display_pane_t2_ParamLimits

0x99a2,	// (0x00017b19) calc_display_pane_t3_ParamLimits

0xf15f,	// (0x0001d2d6) calc_display_pane_t_ParamLimits

0x0fe4,	// (0x0000f15b) cell_calc_pane_g2

0x0001,

0xf17c,	// (0x0001d2f3) cell_calc_pane_g

0x0fed,	// (0x0000f164) cell_calc_pane_t1

0x9a19,	// (0x00017b90) grid_highlight_pane_cp02_ParamLimits

0x9a2f,	// (0x00017ba6) toolbar_button_pane_cp01_ParamLimits

0x9a2f,	// (0x00017ba6) toolbar_button_pane_cp01

0xaa5f,	// (0x00018bd6) temp_image_control_pane_ParamLimits

0xaa5f,	// (0x00018bd6) temp_image_control_pane

0x91e3,	// (0x0001735a) main_mp3_pane

0xc2dd,	// (0x0001a454) temp_image_control_pane_g1_ParamLimits

0xc2dd,	// (0x0001a454) temp_image_control_pane_g1

0xc2eb,	// (0x0001a462) temp_image_control_pane_g2_ParamLimits

0xc2eb,	// (0x0001a462) temp_image_control_pane_g2

0xc2fd,	// (0x0001a474) temp_image_control_pane_g3_ParamLimits

0xc2fd,	// (0x0001a474) temp_image_control_pane_g3

0x461e,	// (0x00012795) temp_image_control_pane_g4_ParamLimits

0x461e,	// (0x00012795) temp_image_control_pane_g4

0x0003,

0xf73a,	// (0x0001d8b1) temp_image_control_pane_g_ParamLimits

0xf73a,	// (0x0001d8b1) temp_image_control_pane_g

0xc2dd,	// (0x0001a454) main_mp3_pane_g1

0x4631,	// (0x000127a8) main_mp3_pane_g2

0x0007,

0xf743,	// (0x0001d8ba) main_mp3_pane_g

0xc340,	// (0x0001a4b7) main_mp3_pane_t1

0x9c3f,	// (0x00017db6) main_camera_pane_g8_ParamLimits

0x9c3f,	// (0x00017db6) main_camera_pane_g8

0x16bd,	// (0x0000f834) main_video_pane_g7_ParamLimits

0x16bd,	// (0x0000f834) main_video_pane_g7

0xbccb,	// (0x00019e42) main_camera2_pane_t7_ParamLimits

0xbccb,	// (0x00019e42) main_camera2_pane_t7

0x9e44,	// (0x00017fbb) scroll_pane_cp025_ParamLimits

0x9e44,	// (0x00017fbb) scroll_pane_cp025

0x9e58,	// (0x00017fcf) scroll_pane_cp026_ParamLimits

0x9e58,	// (0x00017fcf) scroll_pane_cp026

0x9e67,	// (0x00017fde) wml_content_pane_ParamLimits

0x9173,	// (0x000172ea) main_touch_calib_pane

0x46fd,	// (0x00012874) main_touch_calib_pane_g1

0x4709,	// (0x00012880) main_touch_calib_pane_g2

0x4715,	// (0x0001288c) main_touch_calib_pane_g3

0x4721,	// (0x00012898) main_touch_calib_pane_g4

0x0003,

0xf761,	// (0x0001d8d8) main_touch_calib_pane_g

0x472d,	// (0x000128a4) main_touch_calib_pane_t1

0x4747,	// (0x000128be) main_touch_calib_pane_t2

0x0004,

0xf76a,	// (0x0001d8e1) main_touch_calib_pane_t

0xa640,	// (0x000187b7) mup_progress_pane_cp02

0xa65f,	// (0x000187d6) navi_pane_g1

0xa6c1,	// (0x00018838) navi_pane_mp_t3

0x91e3,	// (0x0001735a) main_mp3_pane_ParamLimits

0x3b3e,	// (0x00011cb5) navi_pane_ParamLimits

0xc2dd,	// (0x0001a454) main_mp3_pane_g1_ParamLimits

0x4631,	// (0x000127a8) main_mp3_pane_g2_ParamLimits

0x463f,	// (0x000127b6) main_mp3_pane_g3_ParamLimits

0x463f,	// (0x000127b6) main_mp3_pane_g3

0x464d,	// (0x000127c4) main_mp3_pane_g4_ParamLimits

0x464d,	// (0x000127c4) main_mp3_pane_g4

0xc30d,	// (0x0001a484) main_mp3_pane_g5_ParamLimits

0xc30d,	// (0x0001a484) main_mp3_pane_g5

0xc31b,	// (0x0001a492) main_mp3_pane_g6_ParamLimits

0xc31b,	// (0x0001a492) main_mp3_pane_g6

0xc328,	// (0x0001a49f) main_mp3_pane_g7_ParamLimits

0xc328,	// (0x0001a49f) main_mp3_pane_g7

0xc334,	// (0x0001a4ab) main_mp3_pane_g8_ParamLimits

0xc334,	// (0x0001a4ab) main_mp3_pane_g8

0xf743,	// (0x0001d8ba) main_mp3_pane_g_ParamLimits

0x465b,	// (0x000127d2) main_mp3_pane_t2

0x4669,	// (0x000127e0) main_mp3_pane_t3

0xc34e,	// (0x0001a4c5) main_mp3_pane_t4

0xc35c,	// (0x0001a4d3) main_mp3_pane_t5

0x0005,

0xf754,	// (0x0001d8cb) main_mp3_pane_t

0xc36a,	// (0x0001a4e1) mup_progress_pane_cp01

0x9191,	// (0x00017308) aid_zoom_text_secondary2

0xc129,	// (0x0001a2a0) list_cale_ev2_pane

0xc131,	// (0x0001a2a8) scroll_pane_cp023_ParamLimits

0x479d,	// (0x00012914) field_cale_ev2_pane_ParamLimits

0x479d,	// (0x00012914) field_cale_ev2_pane

0x47c3,	// (0x0001293a) field_cale_ev2_pane_g1_ParamLimits

0x47c3,	// (0x0001293a) field_cale_ev2_pane_g1

0x47cf,	// (0x00012946) field_cale_ev2_pane_g2_ParamLimits

0x47cf,	// (0x00012946) field_cale_ev2_pane_g2

0x47e7,	// (0x0001295e) field_cale_ev2_pane_g3_ParamLimits

0x47e7,	// (0x0001295e) field_cale_ev2_pane_g3

0x0003,

0xf775,	// (0x0001d8ec) field_cale_ev2_pane_g_ParamLimits

0xf775,	// (0x0001d8ec) field_cale_ev2_pane_g

0xc37e,	// (0x0001a4f5) field_cale_ev2_pane_t1_ParamLimits

0xc37e,	// (0x0001a4f5) field_cale_ev2_pane_t1

0xc395,	// (0x0001a50c) field_cale_ev2_pane_t2_ParamLimits

0xc395,	// (0x0001a50c) field_cale_ev2_pane_t2

0x0001,

0xf77e,	// (0x0001d8f5) field_cale_ev2_pane_t_ParamLimits

0xf77e,	// (0x0001d8f5) field_cale_ev2_pane_t

0x3062,	// (0x000111d9) main_postcard_pane_g5_ParamLimits

0x3062,	// (0x000111d9) main_postcard_pane_g5

0x3078,	// (0x000111ef) main_postcard_pane_g6_ParamLimits

0x3078,	// (0x000111ef) main_postcard_pane_g6

0x146d,	// (0x0000f5e4) camera2_autofocus_pane_cp_ParamLimits

0x146d,	// (0x0000f5e4) camera2_autofocus_pane_cp

0x91e3,	// (0x0001735a) main_mup3_pane

0x481f,	// (0x00012996) main_mup3_pane_g1_ParamLimits

0x481f,	// (0x00012996) main_mup3_pane_g1

0x4841,	// (0x000129b8) main_mup3_pane_g2_ParamLimits

0x4841,	// (0x000129b8) main_mup3_pane_g2

0x48c6,	// (0x00012a3d) main_mup3_pane_g3_ParamLimits

0x48c6,	// (0x00012a3d) main_mup3_pane_g3

0x490c,	// (0x00012a83) main_mup3_pane_g4_ParamLimits

0x490c,	// (0x00012a83) main_mup3_pane_g4

0x4952,	// (0x00012ac9) main_mup3_pane_g5_ParamLimits

0x4952,	// (0x00012ac9) main_mup3_pane_g5

0x499a,	// (0x00012b11) main_mup3_pane_g6_ParamLimits

0x499a,	// (0x00012b11) main_mup3_pane_g6

0xc3aa,	// (0x0001a521) main_mup3_pane_g7_ParamLimits

0xc3aa,	// (0x0001a521) main_mup3_pane_g7

0x0007,

0xf78e,	// (0x0001d905) main_mup3_pane_g_ParamLimits

0xf78e,	// (0x0001d905) main_mup3_pane_g

0x4a1a,	// (0x00012b91) main_mup3_pane_t1_ParamLimits

0x4a1a,	// (0x00012b91) main_mup3_pane_t1

0x4a8e,	// (0x00012c05) main_mup3_pane_t2_ParamLimits

0x4a8e,	// (0x00012c05) main_mup3_pane_t2

0x4b62,	// (0x00012cd9) main_mup3_pane_t4_ParamLimits

0x4b62,	// (0x00012cd9) main_mup3_pane_t4

0x4bc0,	// (0x00012d37) main_mup3_pane_t5_ParamLimits

0x4bc0,	// (0x00012d37) main_mup3_pane_t5

0x4c7c,	// (0x00012df3) main_mup3_pane_t6_ParamLimits

0x4c7c,	// (0x00012df3) main_mup3_pane_t6

0x0005,

0xf79f,	// (0x0001d916) main_mup3_pane_t_ParamLimits

0xf79f,	// (0x0001d916) main_mup3_pane_t

0x4d34,	// (0x00012eab) mup3_progress_pane_ParamLimits

0x4d34,	// (0x00012eab) mup3_progress_pane

0x4dc0,	// (0x00012f37) popup_mup3_control_window_ParamLimits

0x4dc0,	// (0x00012f37) popup_mup3_control_window

0xc3b8,	// (0x0001a52f) popup_mup3_text_window

0x4df2,	// (0x00012f69) mup3_progress_pane_t1

0x4e11,	// (0x00012f88) mup3_progress_pane_t2

0xc3c0,	// (0x0001a537) mup3_progress_pane_t3

0x0002,

0xf7ac,	// (0x0001d923) mup3_progress_pane_t

0xc3dd,	// (0x0001a554) mup_progress_pane_cp03

0x9173,	// (0x000172ea) bg_tb_trans_pane_cp04

0x4e30,	// (0x00012fa7) mup3_volume_pane

0x4e38,	// (0x00012faf) popup_mup3_control_window_g1

0x4e41,	// (0x00012fb8) mup3_volume_pane_g1

0x4e4a,	// (0x00012fc1) mup3_volume_pane_g2

0x4e53,	// (0x00012fca) mup3_volume_pane_g3

0x0002,

0xf7b3,	// (0x0001d92a) mup3_volume_pane_g

0x9173,	// (0x000172ea) bg_tb_trans_pane_cp03

0xc3ed,	// (0x0001a564) popup_mup3_text_window_g1

0xc3f5,	// (0x0001a56c) popup_mup3_text_window_t1

0x99f0,	// (0x00017b67) list_calc_item_pane_g1_ParamLimits

0xbdb3,	// (0x00019f2a) mup_volume_pane_cp_g1

0x4761,	// (0x000128d8) main_touch_calib_pane_t3

0x4775,	// (0x000128ec) main_touch_calib_pane_t4

0x4789,	// (0x00012900) main_touch_calib_pane_t5

0x917d,	// (0x000172f4) aid_cell_size_toolbar2

0x9185,	// (0x000172fc) aid_popup3_width_pane

0x9191,	// (0x00017308) aid_zoom_text_msg_primary

0x9c0c,	// (0x00017d83) vorec_t7

0x99b4,	// (0x00017b2b) bg_calc_paper_pane_g1_ParamLimits

0x99c0,	// (0x00017b37) bg_calc_paper_pane_g2_ParamLimits

0x99cc,	// (0x00017b43) bg_calc_paper_pane_g3_ParamLimits

0x99d8,	// (0x00017b4f) bg_calc_paper_pane_g4_ParamLimits

0x99e4,	// (0x00017b5b) bg_calc_paper_pane_g5_ParamLimits

0x0f6a,	// (0x0000f0e1) bg_calc_paper_pane_g6_ParamLimits

0x0f7b,	// (0x0000f0f2) bg_calc_paper_pane_g7_ParamLimits

0x0f8c,	// (0x0000f103) bg_calc_paper_pane_g8_ParamLimits

0xf166,	// (0x0001d2dd) bg_calc_paper_pane_g_ParamLimits

0x0f9f,	// (0x0000f116) calc_bg_paper_pane_g9_ParamLimits

0x15c7,	// (0x0000f73e) image_qvga_pane_ParamLimits

0x15c7,	// (0x0000f73e) image_qvga_pane

0x985d,	// (0x000179d4) bg_popup_sub_pane_cp04_ParamLimits

0xa996,	// (0x00018b0d) popup_mup_playback_window_g1_ParamLimits

0xa9a2,	// (0x00018b19) popup_mup_playback_window_t1_ParamLimits

0xa9b7,	// (0x00018b2e) popup_mup_playback_window_t2_ParamLimits

0xf4f2,	// (0x0001d669) popup_mup_playback_window_t_ParamLimits

0x42be,	// (0x00012435) main_mup2_pane_g3_ParamLimits

0x42be,	// (0x00012435) main_mup2_pane_g3

0x191e,	// (0x0000fa95) popup_toolbar_window_cp04

0xadac,	// (0x00018f23) popup_call2_audio_second_window_g3_ParamLimits

0xadac,	// (0x00018f23) popup_call2_audio_second_window_g3

0xb1b6,	// (0x0001932d) popup_call2_audio_first_window_g4_ParamLimits

0xb1b6,	// (0x0001932d) popup_call2_audio_first_window_g4

0xb835,	// (0x000199ac) popup_call2_audio_in_window_g4_ParamLimits

0xb835,	// (0x000199ac) popup_call2_audio_in_window_g4

0x3194,	// (0x0001130b) aid_area_sk_bg_cut_ParamLimits

0x3194,	// (0x0001130b) aid_area_sk_bg_cut

0xa9cc,	// (0x00018b43) aid_area_sk_bg_cut_2_ParamLimits

0xa9cc,	// (0x00018b43) aid_area_sk_bg_cut_2

0x45c4,	// (0x0001273b) aid_placing_details_win

0x45cc,	// (0x00012743) aid_placing_details_win_2

0xc21f,	// (0x0001a396) camera2_autofocus_pane_g1_ParamLimits

0x0b94,	// (0x0000ed0b) popup_fixed_preview_cale_window_ParamLimits

0x0b94,	// (0x0000ed0b) popup_fixed_preview_cale_window

0xa719,	// (0x00018890) navi_slider_pane_g3

0xa722,	// (0x00018899) navi_slider_pane_g4

0xa72b,	// (0x000188a2) navi_slider_pane_g5

0xa719,	// (0x00018890) navi_slider_pane_g6

0xa734,	// (0x000188ab) navi_slider_pane_g7

0xa855,	// (0x000189cc) mup_scale_pane_g3

0xa85e,	// (0x000189d5) mup_scale_pane_g4

0xa867,	// (0x000189de) mup_scale_pane_g5

0x2e7b,	// (0x00010ff2) mup_scale_pane_g6

0x2e84,	// (0x00010ffb) mup_scale_pane_g7

0xa719,	// (0x00018890) cams2_slider_pane_g3

0xbe68,	// (0x00019fdf) cams2_slider_pane_g4

0xbe70,	// (0x00019fe7) cams2_slider_pane_g5

0xa719,	// (0x00018890) cams2_slider_pane_g6

0xbe78,	// (0x00019fef) cams2_slider_pane_g7

0xc0a6,	// (0x0001a21d) camera2_autofocus_pane_cp_g1

0xc403,	// (0x0001a57a) bg_popup_preview_window_pane_cp02_ParamLimits

0xc403,	// (0x0001a57a) bg_popup_preview_window_pane_cp02

0xc40f,	// (0x0001a586) list_fp_cale_pane_ParamLimits

0xc40f,	// (0x0001a586) list_fp_cale_pane

0xc41b,	// (0x0001a592) popup_fixed_preview_cale_window_t1_ParamLimits

0xc41b,	// (0x0001a592) popup_fixed_preview_cale_window_t1

0x4e5c,	// (0x00012fd3) popup_fixed_preview_cale_window_t2_ParamLimits

0x4e5c,	// (0x00012fd3) popup_fixed_preview_cale_window_t2

0x4e71,	// (0x00012fe8) popup_fixed_preview_cale_window_t3_ParamLimits

0x4e71,	// (0x00012fe8) popup_fixed_preview_cale_window_t3

0x0002,

0xf7ba,	// (0x0001d931) popup_fixed_preview_cale_window_t_ParamLimits

0xf7ba,	// (0x0001d931) popup_fixed_preview_cale_window_t

0x4e86,	// (0x00012ffd) list_single_fp_cale_pane_ParamLimits

0x4e86,	// (0x00012ffd) list_single_fp_cale_pane

0xc439,	// (0x0001a5b0) list_single_fp_cale_pane_g1_ParamLimits

0xc439,	// (0x0001a5b0) list_single_fp_cale_pane_g1

0xc445,	// (0x0001a5bc) list_single_fp_cale_pane_g2_ParamLimits

0xc445,	// (0x0001a5bc) list_single_fp_cale_pane_g2

0x0002,

0xf7c1,	// (0x0001d938) list_single_fp_cale_pane_g_ParamLimits

0xf7c1,	// (0x0001d938) list_single_fp_cale_pane_g

0xc45e,	// (0x0001a5d5) list_single_fp_cale_pane_t1_ParamLimits

0xc45e,	// (0x0001a5d5) list_single_fp_cale_pane_t1

0xc470,	// (0x0001a5e7) list_single_fp_cale_pane_t2_ParamLimits

0xc470,	// (0x0001a5e7) list_single_fp_cale_pane_t2

0x0001,

0xf7c8,	// (0x0001d93f) list_single_fp_cale_pane_t_ParamLimits

0xf7c8,	// (0x0001d93f) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x9173,	// (0x000172ea) main_dialer_pane

0x4e9e,	// (0x00013015) aid_cell_size_keypad

0x4ea8,	// (0x0001301f) dialer_ne_pane

0x4eb0,	// (0x00013027) grid_dialer_command_1_pane

0x4eb8,	// (0x0001302f) grid_dialer_command_2_pane

0x4ec0,	// (0x00013037) grid_dialer_keypad_pane

0x4ed2,	// (0x00013049) bg_popup_call_pane_cp06_ParamLimits

0x4ed2,	// (0x00013049) bg_popup_call_pane_cp06

0x4ede,	// (0x00013055) dialer_ne_clear_pane_ParamLimits

0x4ede,	// (0x00013055) dialer_ne_clear_pane

0xc4a3,	// (0x0001a61a) dialer_ne_pane_g1

0xc4ab,	// (0x0001a622) dialer_ne_pane_t1_ParamLimits

0xc4ab,	// (0x0001a622) dialer_ne_pane_t1

0x4eea,	// (0x00013061) dialer_ne_pane_t2_ParamLimits

0x4eea,	// (0x00013061) dialer_ne_pane_t2

0x4f14,	// (0x0001308b) dialer_ne_pane_t3_ParamLimits

0x4f14,	// (0x0001308b) dialer_ne_pane_t3

0x0002,

0xf7cd,	// (0x0001d944) dialer_ne_pane_t_ParamLimits

0xf7cd,	// (0x0001d944) dialer_ne_pane_t

0x4f44,	// (0x000130bb) dialer_ne_pane_t3_copy1_ParamLimits

0x4f44,	// (0x000130bb) dialer_ne_pane_t3_copy1

0x4f73,	// (0x000130ea) cell_dialer_keypad_pane_ParamLimits

0x4f73,	// (0x000130ea) cell_dialer_keypad_pane

0x4f8a,	// (0x00013101) cell_dialer_command_1_pane_ParamLimits

0x4f8a,	// (0x00013101) cell_dialer_command_1_pane

0x4fa0,	// (0x00013117) cell_dialer_command_2_pane_ParamLimits

0x4fa0,	// (0x00013117) cell_dialer_command_2_pane

0xc4bd,	// (0x0001a634) bg_button_pane_cp02_ParamLimits

0xc4bd,	// (0x0001a634) bg_button_pane_cp02

0x4faf,	// (0x00013126) cell_dialer_keypad_pane_g1_ParamLimits

0x4faf,	// (0x00013126) cell_dialer_keypad_pane_g1

0xc4bd,	// (0x0001a634) bg_button_pane_cp03_ParamLimits

0xc4bd,	// (0x0001a634) bg_button_pane_cp03

0x4fc4,	// (0x0001313b) cell_dialer_command_1_pane_g1_ParamLimits

0x4fc4,	// (0x0001313b) cell_dialer_command_1_pane_g1

0xc4c9,	// (0x0001a640) bg_button_pane_cp04

0x4fd8,	// (0x0001314f) cell_dialer_command_2_pane_g1

0xa6ff,	// (0x00018876) bg_button_pane_cp06

0xc4d1,	// (0x0001a648) dialer_ne_clear_pane_g1

0x29a9,	// (0x00010b20) navi_pane_g2

0x29d7,	// (0x00010b4e) navi_pane_g3

0x0002,

0xf3f5,	// (0x0001d56c) navi_pane_g

0x2a00,	// (0x00010b77) navi_pane_mv_g2

0x2a27,	// (0x00010b9e) navi_pane_mv_g5

0x2a2f,	// (0x00010ba6) navi_pane_mv_t1

0x9996,	// (0x00017b0d) main_clock2_pane

0x5012,	// (0x00013189) main_clock2_list_pane_ParamLimits

0x5012,	// (0x00013189) main_clock2_list_pane

0x504c,	// (0x000131c3) main_clock2_pane_t1_ParamLimits

0x504c,	// (0x000131c3) main_clock2_pane_t1

0x508a,	// (0x00013201) main_clock2_pane_t2_ParamLimits

0x508a,	// (0x00013201) main_clock2_pane_t2

0x0004,

0xf7d4,	// (0x0001d94b) main_clock2_pane_t_ParamLimits

0xf7d4,	// (0x0001d94b) main_clock2_pane_t

0x5127,	// (0x0001329e) popup_clock_analogue_window_cp03_ParamLimits

0x5127,	// (0x0001329e) popup_clock_analogue_window_cp03

0x514e,	// (0x000132c5) popup_clock_digital_window_cp02_ParamLimits

0x514e,	// (0x000132c5) popup_clock_digital_window_cp02

0x51c3,	// (0x0001333a) main_clock2_list_single_pane_ParamLimits

0x51c3,	// (0x0001333a) main_clock2_list_single_pane

0xa6ff,	// (0x00018876) list_highlight_pane_cp05

0xc4d9,	// (0x0001a650) main_clock2_list_single_pane_t1

0x191e,	// (0x0000fa95) popup_toolbar_window_cp04_ParamLimits

0x45ee,	// (0x00012765) camera2_autofocus_pane_g2_ParamLimits

0x45ee,	// (0x00012765) camera2_autofocus_pane_g2

0x45fa,	// (0x00012771) camera2_autofocus_pane_g3_ParamLimits

0x45fa,	// (0x00012771) camera2_autofocus_pane_g3

0x4606,	// (0x0001277d) camera2_autofocus_pane_g4_ParamLimits

0x4606,	// (0x0001277d) camera2_autofocus_pane_g4

0x4612,	// (0x00012789) camera2_autofocus_pane_g5_ParamLimits

0x4612,	// (0x00012789) camera2_autofocus_pane_g5

0x0004,

0xf71d,	// (0x0001d894) camera2_autofocus_pane_g_ParamLimits

0xf71d,	// (0x0001d894) camera2_autofocus_pane_g

0x47ff,	// (0x00012976) camera2_autofocus_pane_cp_g2

0x4807,	// (0x0001297e) camera2_autofocus_pane_cp_g3

0x480f,	// (0x00012986) camera2_autofocus_pane_cp_g4

0x4817,	// (0x0001298e) camera2_autofocus_pane_cp_g5

0x0004,

0xf783,	// (0x0001d8fa) camera2_autofocus_pane_cp_g

0x4eca,	// (0x00013041) popup_dialer_spcha_window

0x9173,	// (0x000172ea) bg_popup_sub_pane_cp07

0xc4e7,	// (0x0001a65e) list_spcha_pane

0xc4ef,	// (0x0001a666) list_single_spcha_pane_ParamLimits

0xc4ef,	// (0x0001a666) list_single_spcha_pane

0x9173,	// (0x000172ea) list_highlight_pane_cp06

0xc500,	// (0x0001a677) list_single_spcha_pane_t1

0xb5df,	// (0x00019756) popup_call2_audio_out_window_g4_ParamLimits

0xb5df,	// (0x00019756) popup_call2_audio_out_window_g4

0x9173,	// (0x000172ea) main_imed2_pane

0xbbc6,	// (0x00019d3d) popup_imed_adjust2_window

0x39c9,	// (0x00011b40) popup_imed_trans_window_ParamLimits

0x39c9,	// (0x00011b40) popup_imed_trans_window

0xbee2,	// (0x0001a059) popup_blid_sat_info2_window_t1

0xbef0,	// (0x0001a067) popup_blid_sat_info2_window_t2

0x000a,

0xf6b2,	// (0x0001d829) popup_blid_sat_info2_window_t

0x526b,	// (0x000133e2) aid_size_cell_colour_35

0x528b,	// (0x00013402) aid_size_cell_colour_112

0x52ab,	// (0x00013422) aid_size_cell_effect

0xbb9e,	// (0x00019d15) bg_tb_trans_pane_cp02

0xa14d,	// (0x000182c4) heading_imed_pane

0x52cb,	// (0x00013442) listscroll_imed_pane

0xc50e,	// (0x0001a685) heading_imed_pane_g1

0xc516,	// (0x0001a68d) heading_imed_pane_t1

0xc524,	// (0x0001a69b) grid_imed_colour_35_pane_ParamLimits

0xc524,	// (0x0001a69b) grid_imed_colour_35_pane

0x52d7,	// (0x0001344e) grid_imed_effect_pane

0xc53f,	// (0x0001a6b6) list_imed_aspect_pane

0x52ec,	// (0x00013463) scroll_pane_cp027_ParamLimits

0x52ec,	// (0x00013463) scroll_pane_cp027

0x52fd,	// (0x00013474) cell_imed_effect_pane_ParamLimits

0x52fd,	// (0x00013474) cell_imed_effect_pane

0xc547,	// (0x0001a6be) cell_imed_colour_pane_ParamLimits

0xc547,	// (0x0001a6be) cell_imed_colour_pane

0xc589,	// (0x0001a700) cell_imed_colour_pane_g1_ParamLimits

0xc589,	// (0x0001a700) cell_imed_colour_pane_g1

0xc59a,	// (0x0001a711) hgihlgiht_grid_pane_cp016_ParamLimits

0xc59a,	// (0x0001a711) hgihlgiht_grid_pane_cp016

0x5324,	// (0x0001349b) cell_imed_effect_pane_g1

0x532c,	// (0x000134a3) grid_highlight_pane_cp017

0xc5ab,	// (0x0001a722) list_imed_single_pane_ParamLimits

0xc5ab,	// (0x0001a722) list_imed_single_pane

0x9173,	// (0x000172ea) list_highlight_pane_cp07

0xc5c2,	// (0x0001a739) list_imed_aspect_pane_comp1_t1

0xbb9e,	// (0x00019d15) bg_tb_trans_pane_cp05

0xc5e4,	// (0x0001a75b) popup_imed_adjust2_window_g1

0xc60b,	// (0x0001a782) popup_imed_adjust2_window_t1

0xc623,	// (0x0001a79a) slider_imed_adjust_pane

0xc637,	// (0x0001a7ae) slider_imed_adjust_pane_g1

0xc647,	// (0x0001a7be) slider_imed_adjust_pane_g2

0xc657,	// (0x0001a7ce) slider_imed_adjust_pane_g3

0xc668,	// (0x0001a7df) slider_imed_adjust_pane_g4

0x0003,

0xf7f1,	// (0x0001d968) slider_imed_adjust_pane_g

0x5335,	// (0x000134ac) aid_size_cell_clipart2

0x5341,	// (0x000134b8) grid_imed_clipart_pane

0xc679,	// (0x0001a7f0) scroll_pane_cp031

0x534b,	// (0x000134c2) cell_imed_clipart_pane_ParamLimits

0x534b,	// (0x000134c2) cell_imed_clipart_pane

0x5372,	// (0x000134e9) cell_imed_clipart_pane_g1

0x9173,	// (0x000172ea) grid_highlight_pane_cp014

0x5027,	// (0x0001319e) main_clock2_pane_g1_ParamLimits

0x5027,	// (0x0001319e) main_clock2_pane_g1

0x516e,	// (0x000132e5) aid_call2_pane_cp10

0x5180,	// (0x000132f7) aid_call_pane_cp10

0xa634,	// (0x000187ab) popup_clock_analogue_window_cp10_g1

0xa634,	// (0x000187ab) popup_clock_analogue_window_cp10_g2

0x5192,	// (0x00013309) popup_clock_analogue_window_cp10_g3

0x5192,	// (0x00013309) popup_clock_analogue_window_cp10_g4

0xa634,	// (0x000187ab) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7df,	// (0x0001d956) popup_clock_analogue_window_cp10_g

0x51a4,	// (0x0001331b) popup_clock_analogue_window_cp10_t1

0x51d5,	// (0x0001334c) clock_digital_number_pane_cp10_ParamLimits

0x51d5,	// (0x0001334c) clock_digital_number_pane_cp10

0x51ed,	// (0x00013364) clock_digital_number_pane_cp11_ParamLimits

0x51ed,	// (0x00013364) clock_digital_number_pane_cp11

0x5205,	// (0x0001337c) clock_digital_number_pane_cp12_ParamLimits

0x5205,	// (0x0001337c) clock_digital_number_pane_cp12

0x521d,	// (0x00013394) clock_digital_number_pane_cp13_ParamLimits

0x521d,	// (0x00013394) clock_digital_number_pane_cp13

0x5235,	// (0x000133ac) clock_digital_separator_pane_cp10_ParamLimits

0x5235,	// (0x000133ac) clock_digital_separator_pane_cp10

0x524d,	// (0x000133c4) popup_clock_digital_window_cp02_t1_ParamLimits

0x524d,	// (0x000133c4) popup_clock_digital_window_cp02_t1

0x9855,	// (0x000179cc) clock_digital_number_pane_cp10_g1

0x9855,	// (0x000179cc) clock_digital_number_pane_cp10_g2

0x0001,

0xf7fa,	// (0x0001d971) clock_digital_number_pane_cp10_g

0x9855,	// (0x000179cc) clock_digital_separator_pane_cp10_g1

0x9855,	// (0x000179cc) clock_digital_separator_pane_g2_cp10

0xa6cf,	// (0x00018846) navi_pane_vded_g4

0xa6d8,	// (0x0001884f) navi_pane_vded_g5

0xa6e1,	// (0x00018858) navi_pane_vded_t1

0x9173,	// (0x000172ea) main_vded_pane

0x537b,	// (0x000134f2) main_vded_pane_g1

0x5387,	// (0x000134fe) main_vded_pane_g2

0x5391,	// (0x00013508) main_vded_pane_g3

0x0002,

0xf7ff,	// (0x0001d976) main_vded_pane_g

0x539b,	// (0x00013512) main_vded_pane_t1

0x53a9,	// (0x00013520) main_vded_pane_t2

0x0001,

0xf806,	// (0x0001d97d) main_vded_pane_t

0x53b7,	// (0x0001352e) vded_slider_pane

0x53c1,	// (0x00013538) vded_video_pane

0xc681,	// (0x0001a7f8) vded_video_pane_g1

0x53cb,	// (0x00013542) vded_video_pane_g2

0xc0a6,	// (0x0001a21d) vded_video_pane_g3

0x0002,

0xf80b,	// (0x0001d982) vded_video_pane_g

0xc68b,	// (0x0001a802) vded_slider_pane_g1

0xbdb3,	// (0x00019f2a) vded_slider_pane_g2

0xc694,	// (0x0001a80b) vded_slider_pane_g3

0xc69d,	// (0x0001a814) vded_slider_pane_g4

0xc6a6,	// (0x0001a81d) vded_slider_pane_g5

0x0004,

0xf812,	// (0x0001d989) vded_slider_pane_g

0x4da8,	// (0x00012f1f) mup3_rocker_pane_ParamLimits

0x4da8,	// (0x00012f1f) mup3_rocker_pane

0x53d4,	// (0x0001354b) mup3_control_keys_pane_g1

0x53dc,	// (0x00013553) mup3_control_keys_pane_g2

0x53e4,	// (0x0001355b) mup3_control_keys_pane_g3

0x53ec,	// (0x00013563) mup3_control_keys_pane_g4

0x0003,

0xf81d,	// (0x0001d994) mup3_control_keys_pane_g

0x0bcb,	// (0x0000ed42) popup_toolbar2_fixed_window_cp01_ParamLimits

0x0bcb,	// (0x0000ed42) popup_toolbar2_fixed_window_cp01

0x4ddc,	// (0x00012f53) popup_toolbar2_fixed_window_cp02_ParamLimits

0x4ddc,	// (0x00012f53) popup_toolbar2_fixed_window_cp02

0xaf1e,	// (0x00019095) popup_call2_audio_second_window_t4_ParamLimits

0xaf1e,	// (0x00019095) popup_call2_audio_second_window_t4

0xb44c,	// (0x000195c3) popup_call2_audio_first_window_t6_ParamLimits

0xb44c,	// (0x000195c3) popup_call2_audio_first_window_t6

0xb6e2,	// (0x00019859) popup_call2_audio_out_window_t6_ParamLimits

0xb6e2,	// (0x00019859) popup_call2_audio_out_window_t6

0x9173,	// (0x000172ea) main_vitu_pane

0x53fc,	// (0x00013573) aid_size_cell_itu_ParamLimits

0x53fc,	// (0x00013573) aid_size_cell_itu

0x91e3,	// (0x0001735a) bg_popup_window_pane_cp08_ParamLimits

0x91e3,	// (0x0001735a) bg_popup_window_pane_cp08

0x5412,	// (0x00013589) field_vitu_entry_pane_ParamLimits

0x5412,	// (0x00013589) field_vitu_entry_pane

0x5429,	// (0x000135a0) grid_vitu_function_pane_ParamLimits

0x5429,	// (0x000135a0) grid_vitu_function_pane

0x5444,	// (0x000135bb) grid_vitu_itu_pane_ParamLimits

0x5444,	// (0x000135bb) grid_vitu_itu_pane

0x5462,	// (0x000135d9) cell_vitu_itu_pane_ParamLimits

0x5462,	// (0x000135d9) cell_vitu_itu_pane

0x5486,	// (0x000135fd) cell_vitu_function_pane_ParamLimits

0x5486,	// (0x000135fd) cell_vitu_function_pane

0x91e3,	// (0x0001735a) bg_popup_sub_pane_cp08_ParamLimits

0x91e3,	// (0x0001735a) bg_popup_sub_pane_cp08

0x54a1,	// (0x00013618) field_vitu_entry_pane_t1_ParamLimits

0x54a1,	// (0x00013618) field_vitu_entry_pane_t1

0xc6c7,	// (0x0001a83e) field_vitu_entry_pane_t2_ParamLimits

0xc6c7,	// (0x0001a83e) field_vitu_entry_pane_t2

0x0001,

0xf82b,	// (0x0001d9a2) field_vitu_entry_pane_t_ParamLimits

0xf82b,	// (0x0001d9a2) field_vitu_entry_pane_t

0xc6e4,	// (0x0001a85b) bg_button_pane_cp05_ParamLimits

0xc6e4,	// (0x0001a85b) bg_button_pane_cp05

0x54c1,	// (0x00013638) cell_vitu_itu_pane_g1

0x54d9,	// (0x00013650) cell_vitu_itu_pane_t1_ParamLimits

0x54d9,	// (0x00013650) cell_vitu_itu_pane_t1

0x54eb,	// (0x00013662) cell_vitu_itu_pane_t2_ParamLimits

0x54eb,	// (0x00013662) cell_vitu_itu_pane_t2

0x0002,

0xf830,	// (0x0001d9a7) cell_vitu_itu_pane_t_ParamLimits

0xf830,	// (0x0001d9a7) cell_vitu_itu_pane_t

0xc6f2,	// (0x0001a869) bg_button_pane_cp07

0x5520,	// (0x00013697) cell_vitu_function_pane_g1

0x9928,	// (0x00017a9f) main_calc_pane_g1

0x0a0b,	// (0x0000eb82) aid_visual_content_pane

0x9173,	// (0x000172ea) main_vradio_pane

0x5529,	// (0x000136a0) main_vradio_pane_g1_ParamLimits

0x5529,	// (0x000136a0) main_vradio_pane_g1

0xc6fc,	// (0x0001a873) main_vradio_pane_g2_ParamLimits

0xc6fc,	// (0x0001a873) main_vradio_pane_g2

0x0001,

0xf837,	// (0x0001d9ae) main_vradio_pane_g_ParamLimits

0xf837,	// (0x0001d9ae) main_vradio_pane_g

0x5542,	// (0x000136b9) main_vradio_pane_t1_ParamLimits

0x5542,	// (0x000136b9) main_vradio_pane_t1

0x5557,	// (0x000136ce) main_vradio_pane_t2_ParamLimits

0x5557,	// (0x000136ce) main_vradio_pane_t2

0xc709,	// (0x0001a880) main_vradio_pane_t3_ParamLimits

0xc709,	// (0x0001a880) main_vradio_pane_t3

0x0002,

0xf83c,	// (0x0001d9b3) main_vradio_pane_t_ParamLimits

0xf83c,	// (0x0001d9b3) main_vradio_pane_t

0x556c,	// (0x000136e3) vradio_rocker_control_pane_ParamLimits

0x556c,	// (0x000136e3) vradio_rocker_control_pane

0x557e,	// (0x000136f5) vradio_station_info_pane_ParamLimits

0x557e,	// (0x000136f5) vradio_station_info_pane

0xc71d,	// (0x0001a894) vradio_frequency_info_pane_ParamLimits

0xc71d,	// (0x0001a894) vradio_frequency_info_pane

0xc0a6,	// (0x0001a21d) vradio_station_info_pane_g1

0xc72c,	// (0x0001a8a3) vradio_station_info_pane_t1_ParamLimits

0xc72c,	// (0x0001a8a3) vradio_station_info_pane_t1

0xc74e,	// (0x0001a8c5) vradio_station_info_pane_t2_ParamLimits

0xc74e,	// (0x0001a8c5) vradio_station_info_pane_t2

0x0001,

0xf843,	// (0x0001d9ba) vradio_station_info_pane_t_ParamLimits

0xf843,	// (0x0001d9ba) vradio_station_info_pane_t

0xc760,	// (0x0001a8d7) vradio_tuning_pane

0xc768,	// (0x0001a8df) vradio_rocker_control_pane_g1

0xc770,	// (0x0001a8e7) vradio_rocker_control_pane_g2

0xc778,	// (0x0001a8ef) vradio_rocker_control_pane_g3

0xc780,	// (0x0001a8f7) vradio_rocker_control_pane_g4

0xc788,	// (0x0001a8ff) vradio_rocker_control_pane_g5

0x0004,

0xf848,	// (0x0001d9bf) vradio_rocker_control_pane_g

0x5590,	// (0x00013707) vradio_frequency_info_pane_g1

0xc790,	// (0x0001a907) vradio_frequency_info_pane_t1_ParamLimits

0xc790,	// (0x0001a907) vradio_frequency_info_pane_t1

0x559a,	// (0x00013711) vradio_tuning_pane_g1

0x55a5,	// (0x0001371c) vradio_tuning_pane_t1

0x91a1,	// (0x00017318) area_side_right_pane_ParamLimits

0x91a1,	// (0x00017318) area_side_right_pane

0xbb65,	// (0x00019cdc) status_small_pane_g1

0xbb6d,	// (0x00019ce4) status_small_pane_g2

0xbb76,	// (0x00019ced) status_small_pane_g3

0xbb7f,	// (0x00019cf6) status_small_pane_g4

0x0003,

0xf608,	// (0x0001d77f) status_small_pane_g

0xbb88,	// (0x00019cff) status_small_pane_t1

0x9173,	// (0x000172ea) main_video3_pane

0xc7a4,	// (0x0001a91b) cams_zoom_vslider_pane

0xc7ac,	// (0x0001a923) image3_wide_pane_ParamLimits

0xc7ac,	// (0x0001a923) image3_wide_pane

0xc7c6,	// (0x0001a93d) image3_wide_small_pane

0xc7d2,	// (0x0001a949) main_video3_pane_g1_ParamLimits

0xc7d2,	// (0x0001a949) main_video3_pane_g1

0xc7ee,	// (0x0001a965) main_video3_pane_g2_ParamLimits

0xc7ee,	// (0x0001a965) main_video3_pane_g2

0x0001,

0xf853,	// (0x0001d9ca) main_video3_pane_g_ParamLimits

0xf853,	// (0x0001d9ca) main_video3_pane_g

0xc80a,	// (0x0001a981) main_video3_pane_t1_ParamLimits

0xc80a,	// (0x0001a981) main_video3_pane_t1

0xc835,	// (0x0001a9ac) main_video3_pane_t2_ParamLimits

0xc835,	// (0x0001a9ac) main_video3_pane_t2

0xc860,	// (0x0001a9d7) main_video3_pane_t3_ParamLimits

0xc860,	// (0x0001a9d7) main_video3_pane_t3

0x0002,

0xf858,	// (0x0001d9cf) main_video3_pane_t_ParamLimits

0xf858,	// (0x0001d9cf) main_video3_pane_t

0xc88d,	// (0x0001aa04) cams_zoom_vslider_pane_g1

0xc896,	// (0x0001aa0d) cams_zoom_vslider_pane_g2

0x0001,

0xf85f,	// (0x0001d9d6) cams_zoom_vslider_pane_g

0xc89e,	// (0x0001aa15) small_slider_vertical_pane

0xc0a6,	// (0x0001a21d) small_slider_vertical_pane_g1

0xc0a6,	// (0x0001a21d) small_slider_vertical_pane_g2

0xc8a6,	// (0x0001aa1d) small_slider_vertical_pane_g3

0x0002,

0xf864,	// (0x0001d9db) small_slider_vertical_pane_g

0x9173,	// (0x000172ea) main_hwr_training_pane

0xc8af,	// (0x0001aa26) hwr_training_instruct_pane_ParamLimits

0xc8af,	// (0x0001aa26) hwr_training_instruct_pane

0x55b4,	// (0x0001372b) hwr_training_navi_pane_ParamLimits

0x55b4,	// (0x0001372b) hwr_training_navi_pane

0x55d3,	// (0x0001374a) hwr_training_write_pane_ParamLimits

0x55d3,	// (0x0001374a) hwr_training_write_pane

0x9173,	// (0x000172ea) bg_frame_shadow_pane

0xc8e6,	// (0x0001aa5d) hwr_training_write_pane_g1

0xc8ee,	// (0x0001aa65) hwr_training_write_pane_g2

0xc8f6,	// (0x0001aa6d) hwr_training_write_pane_g3

0xc8fe,	// (0x0001aa75) hwr_training_write_pane_g4

0xc906,	// (0x0001aa7d) hwr_training_write_pane_g5

0xc90e,	// (0x0001aa85) hwr_training_write_pane_g6

0xc916,	// (0x0001aa8d) hwr_training_write_pane_g7

0x0006,

0xf86b,	// (0x0001d9e2) hwr_training_write_pane_g

0xc91e,	// (0x0001aa95) hwr_training_navi_pane_g1_ParamLimits

0xc91e,	// (0x0001aa95) hwr_training_navi_pane_g1

0xc930,	// (0x0001aaa7) hwr_training_navi_pane_g2_ParamLimits

0xc930,	// (0x0001aaa7) hwr_training_navi_pane_g2

0xc942,	// (0x0001aab9) hwr_training_navi_pane_g3_ParamLimits

0xc942,	// (0x0001aab9) hwr_training_navi_pane_g3

0xc952,	// (0x0001aac9) hwr_training_navi_pane_g4_ParamLimits

0xc952,	// (0x0001aac9) hwr_training_navi_pane_g4

0x0004,

0xf87a,	// (0x0001d9f1) hwr_training_navi_pane_g_ParamLimits

0xf87a,	// (0x0001d9f1) hwr_training_navi_pane_g

0xc95f,	// (0x0001aad6) hwr_training_navi_pane_t1

0x561d,	// (0x00013794) list_single_hwr_training_instruct_pane_ParamLimits

0x561d,	// (0x00013794) list_single_hwr_training_instruct_pane

0xc96d,	// (0x0001aae4) list_single_hwr_training_instruct_pane_t1

0xbfe6,	// (0x0001a15d) bg_frame_shadow_pane_g1

0xc97c,	// (0x0001aaf3) bg_frame_shadow_pane_g2

0xc984,	// (0x0001aafb) bg_frame_shadow_pane_g3

0xc98c,	// (0x0001ab03) bg_frame_shadow_pane_g4

0xc994,	// (0x0001ab0b) bg_frame_shadow_pane_g5

0xc99c,	// (0x0001ab13) bg_frame_shadow_pane_g6

0xc9a4,	// (0x0001ab1b) bg_frame_shadow_pane_g7

0x9a8f,	// (0x00017c06) bg_frame_shadow_pane_g8

0x0007,

0xf885,	// (0x0001d9fc) bg_frame_shadow_pane_g

0x9173,	// (0x000172ea) main_video_tele_dialer_pane

0x563a,	// (0x000137b1) aid_size_cell_video_keypad_ParamLimits

0x563a,	// (0x000137b1) aid_size_cell_video_keypad

0x5654,	// (0x000137cb) grid_video_dialer_keypad_pane_ParamLimits

0x5654,	// (0x000137cb) grid_video_dialer_keypad_pane

0x56a0,	// (0x00013817) video_down_pane_cp_ParamLimits

0x56a0,	// (0x00013817) video_down_pane_cp

0x56d0,	// (0x00013847) cell_video_dialer_keypad_pane_ParamLimits

0x56d0,	// (0x00013847) cell_video_dialer_keypad_pane

0xc9ac,	// (0x0001ab23) bg_button_pane_cp08_ParamLimits

0xc9ac,	// (0x0001ab23) bg_button_pane_cp08

0x56f2,	// (0x00013869) cell_video_dialer_keypad_pane_g1_ParamLimits

0x56f2,	// (0x00013869) cell_video_dialer_keypad_pane_g1

0x4d92,	// (0x00012f09) mup3_rocker2_pane_ParamLimits

0x4d92,	// (0x00012f09) mup3_rocker2_pane

0xc0a6,	// (0x0001a21d) mup3_rocker2_pane_g1

0x38b2,	// (0x00011a29) main_dialer2_pane

0x9173,	// (0x000172ea) main_mp4_pane

0xc9c0,	// (0x0001ab37) main_mp4_pane_g1_ParamLimits

0xc9c0,	// (0x0001ab37) main_mp4_pane_g1

0xc9c0,	// (0x0001ab37) main_mp4_pane_g2_ParamLimits

0xc9c0,	// (0x0001ab37) main_mp4_pane_g2

0x572d,	// (0x000138a4) main_mp4_pane_g3_ParamLimits

0x572d,	// (0x000138a4) main_mp4_pane_g3

0xc9ce,	// (0x0001ab45) main_mp4_pane_g4_ParamLimits

0xc9ce,	// (0x0001ab45) main_mp4_pane_g4

0xc9f6,	// (0x0001ab6d) main_mp4_pane_g5_ParamLimits

0xc9f6,	// (0x0001ab6d) main_mp4_pane_g5

0x0005,

0xf8a5,	// (0x0001da1c) main_mp4_pane_g_ParamLimits

0xf8a5,	// (0x0001da1c) main_mp4_pane_g

0xca46,	// (0x0001abbd) main_mp4_pane_t1_ParamLimits

0xca46,	// (0x0001abbd) main_mp4_pane_t1

0xcaa2,	// (0x0001ac19) main_mp4_pane_t2_ParamLimits

0xcaa2,	// (0x0001ac19) main_mp4_pane_t2

0xcaf4,	// (0x0001ac6b) main_mp4_pane_t3_ParamLimits

0xcaf4,	// (0x0001ac6b) main_mp4_pane_t3

0xcb14,	// (0x0001ac8b) main_mp4_pane_t4_ParamLimits

0xcb14,	// (0x0001ac8b) main_mp4_pane_t4

0x0003,

0xf8b2,	// (0x0001da29) main_mp4_pane_t_ParamLimits

0xf8b2,	// (0x0001da29) main_mp4_pane_t

0xcb58,	// (0x0001accf) mp4_progress_pane_ParamLimits

0xcb58,	// (0x0001accf) mp4_progress_pane

0xcba2,	// (0x0001ad19) mp4_rocker_pane_ParamLimits

0xcba2,	// (0x0001ad19) mp4_rocker_pane

0xcbca,	// (0x0001ad41) mp4_progress_pane_t1

0xcbe3,	// (0x0001ad5a) mp4_progress_pane_t2

0x0001,

0xf8bb,	// (0x0001da32) mp4_progress_pane_t

0xcbfc,	// (0x0001ad73) mup_progress_pane_cp04

0xc0a6,	// (0x0001a21d) mp4_rocker_pane_g1

0x5769,	// (0x000138e0) aid_cell_size_keypad2_ParamLimits

0x5769,	// (0x000138e0) aid_cell_size_keypad2

0x577f,	// (0x000138f6) dialer2_ne_pane_ParamLimits

0x577f,	// (0x000138f6) dialer2_ne_pane

0x5799,	// (0x00013910) grid_dialer2_keypad_pane_ParamLimits

0x5799,	// (0x00013910) grid_dialer2_keypad_pane

0xbe89,	// (0x0001a000) bg_popup_call_pane_cp07_ParamLimits

0xbe89,	// (0x0001a000) bg_popup_call_pane_cp07

0x57b7,	// (0x0001392e) dialer2_ne_pane_t1_ParamLimits

0x57b7,	// (0x0001392e) dialer2_ne_pane_t1

0x57f6,	// (0x0001396d) cell_dialer2_keypad_pane_ParamLimits

0x57f6,	// (0x0001396d) cell_dialer2_keypad_pane

0xcc1a,	// (0x0001ad91) bg_button_pane_pane_cp04_ParamLimits

0xcc1a,	// (0x0001ad91) bg_button_pane_pane_cp04

0x581a,	// (0x00013991) cell_dialer2_keypad_pane_g1_ParamLimits

0x581a,	// (0x00013991) cell_dialer2_keypad_pane_g1

0x17f2,	// (0x0000f969) aid_placing_vt_set_content_ParamLimits

0x17f2,	// (0x0000f969) aid_placing_vt_set_content

0x181a,	// (0x0000f991) aid_placing_vt_set_title_ParamLimits

0x181a,	// (0x0000f991) aid_placing_vt_set_title

0x9173,	// (0x000172ea) main_image3_pane

0x58e0,	// (0x00013a57) area_side_right_pane_cp01_ParamLimits

0x58e0,	// (0x00013a57) area_side_right_pane_cp01

0xc9c0,	// (0x0001ab37) main_image3_pane_g1_ParamLimits

0xc9c0,	// (0x0001ab37) main_image3_pane_g1

0x58f7,	// (0x00013a6e) main_image3_pane_g2_ParamLimits

0x58f7,	// (0x00013a6e) main_image3_pane_g2

0x591f,	// (0x00013a96) main_image3_pane_g3_ParamLimits

0x591f,	// (0x00013a96) main_image3_pane_g3

0x5949,	// (0x00013ac0) main_image3_pane_g4_ParamLimits

0x5949,	// (0x00013ac0) main_image3_pane_g4

0x0003,

0xf8ca,	// (0x0001da41) main_image3_pane_g_ParamLimits

0xf8ca,	// (0x0001da41) main_image3_pane_g

0x5973,	// (0x00013aea) main_image3_pane_t1_ParamLimits

0x5973,	// (0x00013aea) main_image3_pane_t1

0x59cb,	// (0x00013b42) main_image3_pane_t2_ParamLimits

0x59cb,	// (0x00013b42) main_image3_pane_t2

0x5a1d,	// (0x00013b94) main_image3_pane_t3_ParamLimits

0x5a1d,	// (0x00013b94) main_image3_pane_t3

0x0003,

0xf8d3,	// (0x0001da4a) main_image3_pane_t_ParamLimits

0xf8d3,	// (0x0001da4a) main_image3_pane_t

0x91e3,	// (0x0001735a) grid_sctrl_middle_pane_cp01_ParamLimits

0x91e3,	// (0x0001735a) grid_sctrl_middle_pane_cp01

0x5aa5,	// (0x00013c1c) cell_sctrl_middle_pane_cp01_ParamLimits

0x5aa5,	// (0x00013c1c) cell_sctrl_middle_pane_cp01

0x5ac2,	// (0x00013c39) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x5ac2,	// (0x00013c39) cell_sctrl_middle_pane_cp01_g1

0x9173,	// (0x000172ea) main_call4_pane

0x5ad8,	// (0x00013c4f) aid_size_button_call4_ParamLimits

0x5ad8,	// (0x00013c4f) aid_size_button_call4

0x5b09,	// (0x00013c80) call4_windows_pane_ParamLimits

0x5b09,	// (0x00013c80) call4_windows_pane

0x5b29,	// (0x00013ca0) grid_call4_button_pane_ParamLimits

0x5b29,	// (0x00013ca0) grid_call4_button_pane

0xcc58,	// (0x0001adcf) call4_windows_conf_pane

0xcc6d,	// (0x0001ade4) popup_call4_audio_first_window_ParamLimits

0xcc6d,	// (0x0001ade4) popup_call4_audio_first_window

0xccb9,	// (0x0001ae30) popup_call4_audio_second_window_ParamLimits

0xccb9,	// (0x0001ae30) popup_call4_audio_second_window

0xcccd,	// (0x0001ae44) popup_call4_audio_wait_window_ParamLimits

0xcccd,	// (0x0001ae44) popup_call4_audio_wait_window

0x5b56,	// (0x00013ccd) cell_call4_button_pane_ParamLimits

0x5b56,	// (0x00013ccd) cell_call4_button_pane

0x5b7f,	// (0x00013cf6) bg_button_pane_cp09_ParamLimits

0x5b7f,	// (0x00013cf6) bg_button_pane_cp09

0x5b8b,	// (0x00013d02) cell_call4_button_pane_g1_ParamLimits

0x5b8b,	// (0x00013d02) cell_call4_button_pane_g1

0x5bb1,	// (0x00013d28) cell_call4_button_pane_t1_ParamLimits

0x5bb1,	// (0x00013d28) cell_call4_button_pane_t1

0xcd15,	// (0x0001ae8c) popup_call4_audio_conf_window_ParamLimits

0xcd15,	// (0x0001ae8c) popup_call4_audio_conf_window

0x4df2,	// (0x00012f69) mup3_progress_pane_t1_ParamLimits

0x4e11,	// (0x00012f88) mup3_progress_pane_t2_ParamLimits

0xc3c0,	// (0x0001a537) mup3_progress_pane_t3_ParamLimits

0xf7ac,	// (0x0001d923) mup3_progress_pane_t_ParamLimits

0xc3dd,	// (0x0001a554) mup_progress_pane_cp03_ParamLimits

0x53f4,	// (0x0001356b) mup3_control_keys_pane_g4_copy1

0xcb86,	// (0x0001acfd) mp4_rocker2_pane_ParamLimits

0xcb86,	// (0x0001acfd) mp4_rocker2_pane

0xcd29,	// (0x0001aea0) mp4_rocker2_pane_g1

0xcd31,	// (0x0001aea8) mp4_rocker2_pane_g2

0xcd39,	// (0x0001aeb0) mp4_rocker2_pane_g3

0xcd41,	// (0x0001aeb8) mp4_rocker2_pane_g4

0xcd49,	// (0x0001aec0) mp4_rocker2_pane_g5

0x0004,

0xf8dc,	// (0x0001da53) mp4_rocker2_pane_g

0x9173,	// (0x000172ea) main_camera4_pane

0x9173,	// (0x000172ea) main_video4_pane

0x566e,	// (0x000137e5) main_video_tele_dialer_pane_t1_ParamLimits

0x566e,	// (0x000137e5) main_video_tele_dialer_pane_t1

0x5687,	// (0x000137fe) main_video_tele_dialer_pane_t2_ParamLimits

0x5687,	// (0x000137fe) main_video_tele_dialer_pane_t2

0x0001,

0xf896,	// (0x0001da0d) main_video_tele_dialer_pane_t_ParamLimits

0xf896,	// (0x0001da0d) main_video_tele_dialer_pane_t

0x5bf3,	// (0x00013d6a) cam4_autofocus_pane_ParamLimits

0x5bf3,	// (0x00013d6a) cam4_autofocus_pane

0x5c09,	// (0x00013d80) cam4_image_uncrop_pane_ParamLimits

0x5c09,	// (0x00013d80) cam4_image_uncrop_pane

0x5c23,	// (0x00013d9a) cam4_indicators_pane_ParamLimits

0x5c23,	// (0x00013d9a) cam4_indicators_pane

0x5c4e,	// (0x00013dc5) main_camera4_pane_g1_ParamLimits

0x5c4e,	// (0x00013dc5) main_camera4_pane_g1

0x5c60,	// (0x00013dd7) main_camera4_pane_g2_ParamLimits

0x5c60,	// (0x00013dd7) main_camera4_pane_g2

0x5c73,	// (0x00013dea) main_camera4_pane_g3_ParamLimits

0x5c73,	// (0x00013dea) main_camera4_pane_g3

0x5c86,	// (0x00013dfd) main_camera4_pane_g4_ParamLimits

0x5c86,	// (0x00013dfd) main_camera4_pane_g4

0x5c99,	// (0x00013e10) main_camera4_pane_g5_ParamLimits

0x5c99,	// (0x00013e10) main_camera4_pane_g5

0x0005,

0xf8e7,	// (0x0001da5e) main_camera4_pane_g_ParamLimits

0xf8e7,	// (0x0001da5e) main_camera4_pane_g

0x5cbd,	// (0x00013e34) main_camera4_pane_t1_ParamLimits

0x5cbd,	// (0x00013e34) main_camera4_pane_t1

0xc30d,	// (0x0001a484) bg_tb_trans_pane_cp06

0xcd75,	// (0x0001aeec) cam4_indicators_pane_g1

0xcd86,	// (0x0001aefd) cam4_indicators_pane_g2

0x0002,

0xf902,	// (0x0001da79) cam4_indicators_pane_g

0xcda4,	// (0x0001af1b) cam4_indicators_pane_t1

0x5d21,	// (0x00013e98) main_video4_pane_g1_ParamLimits

0x5d21,	// (0x00013e98) main_video4_pane_g1

0x5d30,	// (0x00013ea7) main_video4_pane_g2_ParamLimits

0x5d30,	// (0x00013ea7) main_video4_pane_g2

0x5d3f,	// (0x00013eb6) main_video4_pane_g3_ParamLimits

0x5d3f,	// (0x00013eb6) main_video4_pane_g3

0x5d4e,	// (0x00013ec5) main_video4_pane_g4_ParamLimits

0x5d4e,	// (0x00013ec5) main_video4_pane_g4

0x0004,

0xf909,	// (0x0001da80) main_video4_pane_g_ParamLimits

0xf909,	// (0x0001da80) main_video4_pane_g

0x5d6c,	// (0x00013ee3) vid4_indicators_pane_ParamLimits

0x5d6c,	// (0x00013ee3) vid4_indicators_pane

0x5d9c,	// (0x00013f13) video4_image_uncrop_cif_pane_ParamLimits

0x5d9c,	// (0x00013f13) video4_image_uncrop_cif_pane

0x5db6,	// (0x00013f2d) video4_image_uncrop_nhd_pane_ParamLimits

0x5db6,	// (0x00013f2d) video4_image_uncrop_nhd_pane

0x5c09,	// (0x00013d80) video4_image_uncrop_vga_pane_ParamLimits

0x5c09,	// (0x00013d80) video4_image_uncrop_vga_pane

0x91e3,	// (0x0001735a) bg_tb_trans_pane_cp07

0xcdce,	// (0x0001af45) vid4_indicators_pane_g1

0xcde2,	// (0x0001af59) vid4_indicators_pane_g2

0xcdf6,	// (0x0001af6d) vid4_indicators_pane_g3

0x0004,

0xf914,	// (0x0001da8b) vid4_indicators_pane_g

0xce23,	// (0x0001af9a) vid4_indicators_pane_t1

0x5dca,	// (0x00013f41) cam4_autofocus_pane_g1

0x5dd2,	// (0x00013f49) cam4_autofocus_pane_g2

0x5dda,	// (0x00013f51) cam4_autofocus_pane_g3

0x0002,

0xf91f,	// (0x0001da96) cam4_autofocus_pane_g

0x5de2,	// (0x00013f59) cam4_autofocus_pane_g3_copy1

0x56b4,	// (0x0001382b) video_down_pane_cp_t1

0x56c2,	// (0x00013839) video_down_pane_cp_t2

0x0001,

0xf89b,	// (0x0001da12) video_down_pane_cp_t

0x91e3,	// (0x0001735a) popup_vitu2_window_ParamLimits

0x91e3,	// (0x0001735a) popup_vitu2_window

0x5dea,	// (0x00013f61) aid_size_cell2_itu2_ParamLimits

0x5dea,	// (0x00013f61) aid_size_cell2_itu2

0x5e10,	// (0x00013f87) aid_size_cell_itu2_ParamLimits

0x5e10,	// (0x00013f87) aid_size_cell_itu2

0x5e6c,	// (0x00013fe3) bg_popup_window_pane_cp09_ParamLimits

0x5e6c,	// (0x00013fe3) bg_popup_window_pane_cp09

0x5e7a,	// (0x00013ff1) field_vitu2_entry_pane_ParamLimits

0x5e7a,	// (0x00013ff1) field_vitu2_entry_pane

0x5ea0,	// (0x00014017) grid_vitu2_function_pane_ParamLimits

0x5ea0,	// (0x00014017) grid_vitu2_function_pane

0x5ef1,	// (0x00014068) grid_vitu2_itu_pane_ParamLimits

0x5ef1,	// (0x00014068) grid_vitu2_itu_pane

0x5f82,	// (0x000140f9) cell_vitu2_itu_pane_ParamLimits

0x5f82,	// (0x000140f9) cell_vitu2_itu_pane

0x5fa6,	// (0x0001411d) cell_vitu2_function_pane_ParamLimits

0x5fa6,	// (0x0001411d) cell_vitu2_function_pane

0xce3a,	// (0x0001afb1) bg_popup_call_pane_cp08_ParamLimits

0xce3a,	// (0x0001afb1) bg_popup_call_pane_cp08

0xce53,	// (0x0001afca) field_vitu2_entry_pane_g1

0xce5f,	// (0x0001afd6) field_vitu2_entry_pane_g2

0x0002,

0xf926,	// (0x0001da9d) field_vitu2_entry_pane_g

0xce79,	// (0x0001aff0) field_vitu2_entry_pane_t1_ParamLimits

0xce79,	// (0x0001aff0) field_vitu2_entry_pane_t1

0xceaa,	// (0x0001b021) field_vitu2_entry_pane_t2_ParamLimits

0xceaa,	// (0x0001b021) field_vitu2_entry_pane_t2

0x0001,

0xf92d,	// (0x0001daa4) field_vitu2_entry_pane_t_ParamLimits

0xf92d,	// (0x0001daa4) field_vitu2_entry_pane_t

0x5fe5,	// (0x0001415c) bg_button_pane_cp010_ParamLimits

0x5fe5,	// (0x0001415c) bg_button_pane_cp010

0x5ff3,	// (0x0001416a) cell_vitu2_itu_pane_g1

0x6011,	// (0x00014188) cell_vitu2_itu_pane_t1_ParamLimits

0x6011,	// (0x00014188) cell_vitu2_itu_pane_t1

0x6077,	// (0x000141ee) cell_vitu2_itu_pane_t2_ParamLimits

0x6077,	// (0x000141ee) cell_vitu2_itu_pane_t2

0x0002,

0xf937,	// (0x0001daae) cell_vitu2_itu_pane_t_ParamLimits

0xf937,	// (0x0001daae) cell_vitu2_itu_pane_t

0x91e3,	// (0x0001735a) bg_button_pane_cp011

0x6153,	// (0x000142ca) cell_vitu2_function_pane_g1

0x9173,	// (0x000172ea) main_myfav_hc_pane

0x5a6d,	// (0x00013be4) popup_image3_note_pane_ParamLimits

0x5a6d,	// (0x00013be4) popup_image3_note_pane

0x5a89,	// (0x00013c00) popup_image3_tool_bar_pane_ParamLimits

0x5a89,	// (0x00013c00) popup_image3_tool_bar_pane

0x60fb,	// (0x00014272) cell_vitu2_itu_pane_t3_ParamLimits

0x60fb,	// (0x00014272) cell_vitu2_itu_pane_t3

0x9173,	// (0x000172ea) bg_popup_trans_pane

0xcecf,	// (0x0001b046) grid_image3_tool_bar_pane

0xced9,	// (0x0001b050) bg_popup_trans_pane_g1

0x9f4d,	// (0x000180c4) bg_popup_trans_pane_g2

0xcee1,	// (0x0001b058) bg_popup_trans_pane_g3

0xcee9,	// (0x0001b060) bg_popup_trans_pane_g4

0xcef1,	// (0x0001b068) bg_popup_trans_pane_g5

0xcef9,	// (0x0001b070) bg_popup_trans_pane_g6

0xcf01,	// (0x0001b078) bg_popup_trans_pane_g7

0xcf09,	// (0x0001b080) bg_popup_trans_pane_g8

0x9f2d,	// (0x000180a4) bg_popup_trans_pane_g9

0x0008,

0xf93e,	// (0x0001dab5) bg_popup_trans_pane_g

0xcf11,	// (0x0001b088) cell_image3_tool_bar_pane_ParamLimits

0xcf11,	// (0x0001b088) cell_image3_tool_bar_pane

0xc0a6,	// (0x0001a21d) cell_image3_tool_bar_pane_g1

0x9173,	// (0x000172ea) bg_popup_trans_pane_cp1

0xcf25,	// (0x0001b09c) popup_image3_note_pane_t1

0xcf33,	// (0x0001b0aa) popup_image3_note_pane_t2

0xcf41,	// (0x0001b0b8) popup_image3_note_pane_t3

0x0002,

0xf951,	// (0x0001dac8) popup_image3_note_pane_t

0xcf4f,	// (0x0001b0c6) popup_image3_note_pane_t3_copy1

0x6167,	// (0x000142de) bg_myfav_hc_instruction_pane_ParamLimits

0x6167,	// (0x000142de) bg_myfav_hc_instruction_pane

0x617d,	// (0x000142f4) cell_myfav_contact_pane_ParamLimits

0x617d,	// (0x000142f4) cell_myfav_contact_pane

0x6199,	// (0x00014310) cell_myfav_contact_pane_cp1_ParamLimits

0x6199,	// (0x00014310) cell_myfav_contact_pane_cp1

0x61b1,	// (0x00014328) cell_myfav_contact_pane_cp2_ParamLimits

0x61b1,	// (0x00014328) cell_myfav_contact_pane_cp2

0x61c9,	// (0x00014340) cell_myfav_contact_pane_cp3_ParamLimits

0x61c9,	// (0x00014340) cell_myfav_contact_pane_cp3

0x61e0,	// (0x00014357) cell_myfav_contact_pane_cp4_ParamLimits

0x61e0,	// (0x00014357) cell_myfav_contact_pane_cp4

0x61f8,	// (0x0001436f) cell_myfav_contact_pane_cp5_ParamLimits

0x61f8,	// (0x0001436f) cell_myfav_contact_pane_cp5

0x620c,	// (0x00014383) cell_myfav_contact_pane_cp6_ParamLimits

0x620c,	// (0x00014383) cell_myfav_contact_pane_cp6

0x6222,	// (0x00014399) cell_myfav_contact_pane_cp7_ParamLimits

0x6222,	// (0x00014399) cell_myfav_contact_pane_cp7

0xcf5d,	// (0x0001b0d4) listscroll_gen_pane_cp05

0x623c,	// (0x000143b3) main_myfav_hc_pane_g1_ParamLimits

0x623c,	// (0x000143b3) main_myfav_hc_pane_g1

0x6256,	// (0x000143cd) main_myfav_hc_pane_g2_ParamLimits

0x6256,	// (0x000143cd) main_myfav_hc_pane_g2

0x0002,

0xf958,	// (0x0001dacf) main_myfav_hc_pane_g_ParamLimits

0xf958,	// (0x0001dacf) main_myfav_hc_pane_g

0x6288,	// (0x000143ff) main_myfav_hc_pane_t1_ParamLimits

0x6288,	// (0x000143ff) main_myfav_hc_pane_t1

0xcf66,	// (0x0001b0dd) main_myfav_hc_pane_t2_ParamLimits

0xcf66,	// (0x0001b0dd) main_myfav_hc_pane_t2

0xcf78,	// (0x0001b0ef) main_myfav_hc_pane_t3_ParamLimits

0xcf78,	// (0x0001b0ef) main_myfav_hc_pane_t3

0x629f,	// (0x00014416) main_myfav_hc_pane_t4_ParamLimits

0x629f,	// (0x00014416) main_myfav_hc_pane_t4

0x0004,

0xf95f,	// (0x0001dad6) main_myfav_hc_pane_t_ParamLimits

0xf95f,	// (0x0001dad6) main_myfav_hc_pane_t

0xc0a6,	// (0x0001a21d) bg_myfav_hc_instruction_pane_g1

0xcf8a,	// (0x0001b101) cell_myfav_contact_pane_g1_ParamLimits

0xcf8a,	// (0x0001b101) cell_myfav_contact_pane_g1

0xcf8a,	// (0x0001b101) cell_myfav_contact_pane_g2_ParamLimits

0xcf8a,	// (0x0001b101) cell_myfav_contact_pane_g2

0xcf96,	// (0x0001b10d) cell_myfav_contact_pane_g3_ParamLimits

0xcf96,	// (0x0001b10d) cell_myfav_contact_pane_g3

0xc3aa,	// (0x0001a521) cell_myfav_contact_pane_g4_ParamLimits

0xc3aa,	// (0x0001a521) cell_myfav_contact_pane_g4

0xcfa3,	// (0x0001b11a) cell_myfav_contact_pane_g5_ParamLimits

0xcfa3,	// (0x0001b11a) cell_myfav_contact_pane_g5

0x0004,

0xf96a,	// (0x0001dae1) cell_myfav_contact_pane_g_ParamLimits

0xf96a,	// (0x0001dae1) cell_myfav_contact_pane_g

0x6270,	// (0x000143e7) main_myfav_hc_pane_g3_ParamLimits

0x6270,	// (0x000143e7) main_myfav_hc_pane_g3

0x0b2d,	// (0x0000eca4) popup_adpt_find_window

0x62c7,	// (0x0001443e) afind_page_pane_ParamLimits

0x62c7,	// (0x0001443e) afind_page_pane

0x62dc,	// (0x00014453) aid_size_cell_afind_ParamLimits

0x62dc,	// (0x00014453) aid_size_cell_afind

0x62fa,	// (0x00014471) bg_popup_sub_pane_cp09_ParamLimits

0x62fa,	// (0x00014471) bg_popup_sub_pane_cp09

0x6307,	// (0x0001447e) find_pane_cp01_ParamLimits

0x6307,	// (0x0001447e) find_pane_cp01

0xcfaf,	// (0x0001b126) grid_afind_control_pane_ParamLimits

0xcfaf,	// (0x0001b126) grid_afind_control_pane

0x6314,	// (0x0001448b) grid_afind_pane_ParamLimits

0x6314,	// (0x0001448b) grid_afind_pane

0x6336,	// (0x000144ad) cell_afind_pane_ParamLimits

0x6336,	// (0x000144ad) cell_afind_pane

0xc0a6,	// (0x0001a21d) afind_page_pane_g1

0x6397,	// (0x0001450e) afind_page_pane_g2

0x63a0,	// (0x00014517) afind_page_pane_g3

0x0002,

0xf975,	// (0x0001daec) afind_page_pane_g

0x63a9,	// (0x00014520) afind_page_pane_t1

0xcfc3,	// (0x0001b13a) cell_afind_grid_control_pane_ParamLimits

0xcfc3,	// (0x0001b13a) cell_afind_grid_control_pane

0xcc1a,	// (0x0001ad91) bg_button_pane_cp69_ParamLimits

0xcc1a,	// (0x0001ad91) bg_button_pane_cp69

0x63c9,	// (0x00014540) cell_afind_pane_g1_ParamLimits

0x63c9,	// (0x00014540) cell_afind_pane_g1

0x63d6,	// (0x0001454d) cell_afind_pane_t1_ParamLimits

0x63d6,	// (0x0001454d) cell_afind_pane_t1

0x9c89,	// (0x00017e00) bg_button_pane_cp72

0xcfd2,	// (0x0001b149) cell_afind_grid_control_pane_g1

0x3375,	// (0x000114ec) aid_image_placing_area_ParamLimits

0x3375,	// (0x000114ec) aid_image_placing_area

0xc6af,	// (0x0001a826) field_vitu_entry_pane_g1_ParamLimits

0xc6af,	// (0x0001a826) field_vitu_entry_pane_g1

0xc6bb,	// (0x0001a832) field_vitu_entry_pane_g2_ParamLimits

0xc6bb,	// (0x0001a832) field_vitu_entry_pane_g2

0x0001,

0xf826,	// (0x0001d99d) field_vitu_entry_pane_g_ParamLimits

0xf826,	// (0x0001d99d) field_vitu_entry_pane_g

0x54c1,	// (0x00013638) cell_vitu_itu_pane_g1_ParamLimits

0x5503,	// (0x0001367a) cell_vitu_itu_pane_t3_ParamLimits

0x5503,	// (0x0001367a) cell_vitu_itu_pane_t3

0xcbca,	// (0x0001ad41) mp4_progress_pane_t1_ParamLimits

0xcbe3,	// (0x0001ad5a) mp4_progress_pane_t2_ParamLimits

0xf8bb,	// (0x0001da32) mp4_progress_pane_t_ParamLimits

0xcbfc,	// (0x0001ad73) mup_progress_pane_cp04_ParamLimits

0x62b3,	// (0x0001442a) main_myfav_hc_pane_t5_ParamLimits

0x62b3,	// (0x0001442a) main_myfav_hc_pane_t5

0x9199,	// (0x00017310) aid_zoom_text_primary

0x0b2d,	// (0x0000eca4) popup_adpt_find_window_ParamLimits

0x91e3,	// (0x0001735a) main_cam_set_pane

0x5c3a,	// (0x00013db1) cam4_zoom_pane_ParamLimits

0x5c3a,	// (0x00013db1) cam4_zoom_pane

0x63e8,	// (0x0001455f) main_cam_set_pane_g1_ParamLimits

0x63e8,	// (0x0001455f) main_cam_set_pane_g1

0x63f6,	// (0x0001456d) main_cam_set_pane_g2_ParamLimits

0x63f6,	// (0x0001456d) main_cam_set_pane_g2

0x0001,

0xf97c,	// (0x0001daf3) main_cam_set_pane_g_ParamLimits

0xf97c,	// (0x0001daf3) main_cam_set_pane_g

0x6417,	// (0x0001458e) main_cam_set_pane_t1_ParamLimits

0x6417,	// (0x0001458e) main_cam_set_pane_t1

0x6432,	// (0x000145a9) main_cset_listscroll_pane_ParamLimits

0x6432,	// (0x000145a9) main_cset_listscroll_pane

0x6452,	// (0x000145c9) main_cset_slider_pane_ParamLimits

0x6452,	// (0x000145c9) main_cset_slider_pane

0xcfe3,	// (0x0001b15a) main_cset_list_pane_ParamLimits

0xcfe3,	// (0x0001b15a) main_cset_list_pane

0xcff3,	// (0x0001b16a) scroll_pane_cp028

0x6478,	// (0x000145ef) aid_area_touch_slider

0x6494,	// (0x0001460b) cset_slider_pane

0x64be,	// (0x00014635) main_cset_slider_pane_g1

0x64d3,	// (0x0001464a) main_cset_slider_pane_g2

0x0011,

0xf981,	// (0x0001daf8) main_cset_slider_pane_g

0xd02c,	// (0x0001b1a3) main_cset_slider_pane_t1

0x658f,	// (0x00014706) main_cset_slider_pane_t2

0x65a9,	// (0x00014720) main_cset_slider_pane_t3

0x65c3,	// (0x0001473a) main_cset_slider_pane_t4

0x65dd,	// (0x00014754) main_cset_slider_pane_t5

0x65f9,	// (0x00014770) main_cset_slider_pane_t6

0x660e,	// (0x00014785) main_cset_slider_pane_t7

0x000e,

0xf9a6,	// (0x0001db1d) main_cset_slider_pane_t

0x6712,	// (0x00014889) cset_list_set_pane_ParamLimits

0x6712,	// (0x00014889) cset_list_set_pane

0x6726,	// (0x0001489d) aid_position_infowindow_above

0x672e,	// (0x000148a5) aid_position_infowindow_below

0x6736,	// (0x000148ad) cset_list_set_pane_g1_ParamLimits

0x6736,	// (0x000148ad) cset_list_set_pane_g1

0x6742,	// (0x000148b9) cset_list_set_pane_g3_ParamLimits

0x6742,	// (0x000148b9) cset_list_set_pane_g3

0x0001,

0xf9c5,	// (0x0001db3c) cset_list_set_pane_g_ParamLimits

0xf9c5,	// (0x0001db3c) cset_list_set_pane_g

0x6751,	// (0x000148c8) cset_list_set_pane_t1_ParamLimits

0x6751,	// (0x000148c8) cset_list_set_pane_t1

0x91e3,	// (0x0001735a) list_highlight_pane_cp021_ParamLimits

0x91e3,	// (0x0001735a) list_highlight_pane_cp021

0xa855,	// (0x000189cc) cset_slider_pane_g1

0xa867,	// (0x000189de) cset_slider_pane_g2

0xa85e,	// (0x000189d5) cset_slider_pane_g3

0x0002,

0xf9ca,	// (0x0001db41) cset_slider_pane_g

0xd0cc,	// (0x0001b243) aid_area_touch_cam4_zoom

0xd0d4,	// (0x0001b24b) cam4_zoom_cont_pane

0xd0dc,	// (0x0001b253) cam4_zoom_pane_g1

0xd0e4,	// (0x0001b25b) cam4_zoom_pane_g2

0x6766,	// (0x000148dd) cam4_zoom_pane_g3

0x0002,

0xf9d1,	// (0x0001db48) cam4_zoom_pane_g

0xd0ec,	// (0x0001b263) cam4_zoom_cont_pane_g1

0xd0f5,	// (0x0001b26c) cam4_zoom_cont_pane_g2

0xd0fe,	// (0x0001b275) cam4_zoom_cont_pane_g3

0x0002,

0xf9d8,	// (0x0001db4f) cam4_zoom_cont_pane_g

0x5af6,	// (0x00013c6d) call4_image_pane_ParamLimits

0x5af6,	// (0x00013c6d) call4_image_pane

0xcc58,	// (0x0001adcf) call4_windows_conf_pane_ParamLimits

0xcc97,	// (0x0001ae0e) popup_call4_audio_in_window_ParamLimits

0xcc97,	// (0x0001ae0e) popup_call4_audio_in_window

0x9173,	// (0x000172ea) bg_popup_call2_act_pane_cp02

0xcd0d,	// (0x0001ae84) call4_list_conf_pane

0xc0a6,	// (0x0001a21d) call4_image_pane_g1

0xc0a6,	// (0x0001a21d) call4_image_pane_g2

0x0001,

0xf6ec,	// (0x0001d863) call4_image_pane_g

0xd107,	// (0x0001b27e) list_single_graphic_popup_conf4_pane_ParamLimits

0xd107,	// (0x0001b27e) list_single_graphic_popup_conf4_pane

0x9173,	// (0x000172ea) list_highlight_pane_cp022

0xd11a,	// (0x0001b291) list_single_graphic_popup_conf4_pane_g1

0xa526,	// (0x0001869d) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9df,	// (0x0001db56) list_single_graphic_popup_conf4_pane_g

0xd122,	// (0x0001b299) list_single_graphic_popup_conf4_pane_t1

0x193e,	// (0x0000fab5) popup_vtel_slider_window_ParamLimits

0x193e,	// (0x0000fab5) popup_vtel_slider_window

0xcc08,	// (0x0001ad7f) dialer2_ne_pane_t2_ParamLimits

0xcc08,	// (0x0001ad7f) dialer2_ne_pane_t2

0x0001,

0xf8c0,	// (0x0001da37) dialer2_ne_pane_t_ParamLimits

0xf8c0,	// (0x0001da37) dialer2_ne_pane_t

0xbe89,	// (0x0001a000) bg_popup_sub_pane_cp010_ParamLimits

0xbe89,	// (0x0001a000) bg_popup_sub_pane_cp010

0x676e,	// (0x000148e5) popup_vtel_slider_window_g1_ParamLimits

0x676e,	// (0x000148e5) popup_vtel_slider_window_g1

0x6781,	// (0x000148f8) popup_vtel_slider_window_g2_ParamLimits

0x6781,	// (0x000148f8) popup_vtel_slider_window_g2

0x0003,

0xf9e4,	// (0x0001db5b) popup_vtel_slider_window_g_ParamLimits

0xf9e4,	// (0x0001db5b) popup_vtel_slider_window_g

0x67d7,	// (0x0001494e) vtel_slider_pane_ParamLimits

0x67d7,	// (0x0001494e) vtel_slider_pane

0x67f9,	// (0x00014970) vtel_slider_pane_g1_ParamLimits

0x67f9,	// (0x00014970) vtel_slider_pane_g1

0x680d,	// (0x00014984) vtel_slider_pane_g2_ParamLimits

0x680d,	// (0x00014984) vtel_slider_pane_g2

0x6825,	// (0x0001499c) vtel_slider_pane_g3_ParamLimits

0x6825,	// (0x0001499c) vtel_slider_pane_g3

0x67f9,	// (0x00014970) vtel_slider_pane_g4_ParamLimits

0x67f9,	// (0x00014970) vtel_slider_pane_g4

0x683b,	// (0x000149b2) vtel_slider_pane_g5_ParamLimits

0x683b,	// (0x000149b2) vtel_slider_pane_g5

0x0004,

0xf9ed,	// (0x0001db64) vtel_slider_pane_g_ParamLimits

0xf9ed,	// (0x0001db64) vtel_slider_pane_g

0x9173,	// (0x000172ea) main_gallery2_pane

0x5e3c,	// (0x00013fb3) aid_size_row_itut2_dropdow_list_ParamLimits

0x5e3c,	// (0x00013fb3) aid_size_row_itut2_dropdow_list

0x5ec8,	// (0x0001403f) grid_vitu2_function_top_pane_ParamLimits

0x5ec8,	// (0x0001403f) grid_vitu2_function_top_pane

0x5f2d,	// (0x000140a4) popup_vitu2_dropdown_list_window_ParamLimits

0x5f2d,	// (0x000140a4) popup_vitu2_dropdown_list_window

0x5f56,	// (0x000140cd) popup_vitu2_match_list_window

0x6851,	// (0x000149c8) cell_vitu2_function_top_pane_ParamLimits

0x6851,	// (0x000149c8) cell_vitu2_function_top_pane

0x686f,	// (0x000149e6) cell_vitu2_function_top_pane_cp01_ParamLimits

0x686f,	// (0x000149e6) cell_vitu2_function_top_pane_cp01

0x688d,	// (0x00014a04) cell_vitu2_function_top_wide_pane_ParamLimits

0x688d,	// (0x00014a04) cell_vitu2_function_top_wide_pane

0x91e3,	// (0x0001735a) bg_button_pane_cp012

0x68ab,	// (0x00014a22) cell_vitu2_function_top_pane_g1

0xd146,	// (0x0001b2bd) bg_button_pane_cp013_ParamLimits

0xd146,	// (0x0001b2bd) bg_button_pane_cp013

0x68bf,	// (0x00014a36) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x68bf,	// (0x00014a36) cell_vitu2_function_top_wide_pane_g1

0x91e3,	// (0x0001735a) bg_popup_sub_pane_cp20

0x68d7,	// (0x00014a4e) list_vitu2_match_list_pane

0xced9,	// (0x0001b050) bg_popup_sub_pane_cp20_g1

0xcee1,	// (0x0001b058) bg_popup_sub_pane_cp20_g2

0x9f4d,	// (0x000180c4) bg_popup_sub_pane_cp20_g3

0xcee9,	// (0x0001b060) bg_popup_sub_pane_cp20_g4

0x9f2d,	// (0x000180a4) bg_popup_sub_pane_cp20_g5

0xd162,	// (0x0001b2d9) bg_popup_sub_pane_cp20_g6

0xcef9,	// (0x0001b070) bg_popup_sub_pane_cp20_g7

0xcf01,	// (0x0001b078) bg_popup_sub_pane_cp20_g8

0xcf09,	// (0x0001b080) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9f8,	// (0x0001db6f) bg_popup_sub_pane_cp20_g

0xd16a,	// (0x0001b2e1) list_vitu2_match_list_item_pane_ParamLimits

0xd16a,	// (0x0001b2e1) list_vitu2_match_list_item_pane

0xd17c,	// (0x0001b2f3) list_vitu2_match_list_item_pane_t1

0x9173,	// (0x000172ea) bg_popup_sub_pane_cp21

0xa3bc,	// (0x00018533) grid_vitu2_dropdown_list_pane

0x692a,	// (0x00014aa1) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x692a,	// (0x00014aa1) cell_vitu2_dropdown_list_char_pane

0x694b,	// (0x00014ac2) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x694b,	// (0x00014ac2) cell_vitu2_dropdown_list_ctrl_pane

0xd1a2,	// (0x0001b319) cell_vitu2_dropdown_list_char_pane_g1

0xd1ab,	// (0x0001b322) cell_vitu2_dropdown_list_char_pane_g2

0xd1b4,	// (0x0001b32b) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa15,	// (0x0001db8c) cell_vitu2_dropdown_list_char_pane_g

0x6977,	// (0x00014aee) cell_vitu2_dropdown_list_char_pane_t1

0x6985,	// (0x00014afc) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x6985,	// (0x00014afc) cell_vitu2_dropdown_list_ctrl_pane_g1

0x6995,	// (0x00014b0c) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x6995,	// (0x00014b0c) cell_vitu2_dropdown_list_ctrl_pane_g2

0x69a6,	// (0x00014b1d) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x69a6,	// (0x00014b1d) cell_vitu2_dropdown_list_ctrl_pane_g3

0x69b6,	// (0x00014b2d) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x69b6,	// (0x00014b2d) cell_vitu2_dropdown_list_ctrl_pane_g4

0xc30d,	// (0x0001a484) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xc30d,	// (0x0001a484) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa1c,	// (0x0001db93) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa1c,	// (0x0001db93) cell_vitu2_dropdown_list_ctrl_pane_g

0x69d2,	// (0x00014b49) aid_size_cell_gallery2_ParamLimits

0x69d2,	// (0x00014b49) aid_size_cell_gallery2

0x69e8,	// (0x00014b5f) grid_gallery2_pane_ParamLimits

0x69e8,	// (0x00014b5f) grid_gallery2_pane

0x69fc,	// (0x00014b73) scroll_pane_cp029_ParamLimits

0x69fc,	// (0x00014b73) scroll_pane_cp029

0x6a08,	// (0x00014b7f) cell_gallery2_pane_ParamLimits

0x6a08,	// (0x00014b7f) cell_gallery2_pane

0xd1bd,	// (0x0001b334) cell_gallery2_pane_g2

0x6a3e,	// (0x00014bb5) cell_gallery2_pane_g3

0xd1c7,	// (0x0001b33e) cell_gallery2_pane_g4

0xd1cf,	// (0x0001b346) cell_gallery2_pane_g5

0xa6ff,	// (0x00018876) grid_highlight_pane_cp10

0x5f56,	// (0x000140cd) popup_vitu2_match_list_window_ParamLimits

0x5f6b,	// (0x000140e2) popup_vitu2_query_window_ParamLimits

0x5f6b,	// (0x000140e2) popup_vitu2_query_window

0x9173,	// (0x000172ea) bg_vitu2_candi_button_pane

0xd1a2,	// (0x0001b319) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd1ab,	// (0x0001b322) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd1b4,	// (0x0001b32b) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x6a46,	// (0x00014bbd) bg_button_pane_cp015

0x6a5a,	// (0x00014bd1) bg_button_pane_cp016

0x6a6d,	// (0x00014be4) bg_button_pane_cp017

0xbb9e,	// (0x00019d15) bg_popup_sub_pane_cp22

0xd1d7,	// (0x0001b34e) popup_vitu2_query_window_g1

0x6ab2,	// (0x00014c29) popup_vitu2_query_window_g2

0x0002,

0xfa27,	// (0x0001db9e) popup_vitu2_query_window_g

0x6ad1,	// (0x00014c48) popup_vitu2_query_window_t1_ParamLimits

0x6ad1,	// (0x00014c48) popup_vitu2_query_window_t1

0x6b06,	// (0x00014c7d) popup_vitu2_query_window_t2_ParamLimits

0x6b06,	// (0x00014c7d) popup_vitu2_query_window_t2

0x6b18,	// (0x00014c8f) popup_vitu2_query_window_t3_ParamLimits

0x6b18,	// (0x00014c8f) popup_vitu2_query_window_t3

0x6b40,	// (0x00014cb7) popup_vitu2_query_window_t4_ParamLimits

0x6b40,	// (0x00014cb7) popup_vitu2_query_window_t4

0x6b61,	// (0x00014cd8) popup_vitu2_query_window_t5_ParamLimits

0x6b61,	// (0x00014cd8) popup_vitu2_query_window_t5

0x0006,

0xfa2e,	// (0x0001dba5) popup_vitu2_query_window_t_ParamLimits

0xfa2e,	// (0x0001dba5) popup_vitu2_query_window_t

0xcfdb,	// (0x0001b152) main_cset_text_pane

0x6478,	// (0x000145ef) aid_area_touch_slider_ParamLimits

0x6494,	// (0x0001460b) cset_slider_pane_ParamLimits

0x64be,	// (0x00014635) main_cset_slider_pane_g1_ParamLimits

0x64d3,	// (0x0001464a) main_cset_slider_pane_g2_ParamLimits

0xcffc,	// (0x0001b173) main_cset_slider_pane_g3_ParamLimits

0xcffc,	// (0x0001b173) main_cset_slider_pane_g3

0x64e8,	// (0x0001465f) main_cset_slider_pane_g4_ParamLimits

0x64e8,	// (0x0001465f) main_cset_slider_pane_g4

0x64f7,	// (0x0001466e) main_cset_slider_pane_g5_ParamLimits

0x64f7,	// (0x0001466e) main_cset_slider_pane_g5

0x6503,	// (0x0001467a) main_cset_slider_pane_g6_ParamLimits

0x6503,	// (0x0001467a) main_cset_slider_pane_g6

0xf981,	// (0x0001daf8) main_cset_slider_pane_g_ParamLimits

0xd02c,	// (0x0001b1a3) main_cset_slider_pane_t1_ParamLimits

0x658f,	// (0x00014706) main_cset_slider_pane_t2_ParamLimits

0x65a9,	// (0x00014720) main_cset_slider_pane_t3_ParamLimits

0x65c3,	// (0x0001473a) main_cset_slider_pane_t4_ParamLimits

0x65dd,	// (0x00014754) main_cset_slider_pane_t5_ParamLimits

0x65f9,	// (0x00014770) main_cset_slider_pane_t6_ParamLimits

0x660e,	// (0x00014785) main_cset_slider_pane_t7_ParamLimits

0x6638,	// (0x000147af) main_cset_slider_pane_t8_ParamLimits

0x6638,	// (0x000147af) main_cset_slider_pane_t8

0x6660,	// (0x000147d7) main_cset_slider_pane_t9_ParamLimits

0x6660,	// (0x000147d7) main_cset_slider_pane_t9

0x6688,	// (0x000147ff) main_cset_slider_pane_t10_ParamLimits

0x6688,	// (0x000147ff) main_cset_slider_pane_t10

0x66b0,	// (0x00014827) main_cset_slider_pane_t11_ParamLimits

0x66b0,	// (0x00014827) main_cset_slider_pane_t11

0x66d8,	// (0x0001484f) main_cset_slider_pane_t12_ParamLimits

0x66d8,	// (0x0001484f) main_cset_slider_pane_t12

0x66f5,	// (0x0001486c) main_cset_slider_pane_t13_ParamLimits

0x66f5,	// (0x0001486c) main_cset_slider_pane_t13

0xf9a6,	// (0x0001db1d) main_cset_slider_pane_t_ParamLimits

0x9173,	// (0x000172ea) bg_popup_sub_pane_cp011

0xd1e3,	// (0x0001b35a) main_cset_text_pane_g1

0xd1eb,	// (0x0001b362) main_cset_text_pane_t1

0xd1f9,	// (0x0001b370) main_cset_text_pane_t2

0xd207,	// (0x0001b37e) main_cset_text_pane_t3

0xd215,	// (0x0001b38c) main_cset_text_pane_t4

0xd223,	// (0x0001b39a) main_cset_text_pane_t5

0xd231,	// (0x0001b3a8) main_cset_text_pane_t6

0xd23f,	// (0x0001b3b6) main_cset_text_pane_t7

0x0006,

0xfa3d,	// (0x0001dbb4) main_cset_text_pane_t

0x9173,	// (0x000172ea) main_cam4_burst_pane

0x9173,	// (0x000172ea) main_cam5_pane

0x63b7,	// (0x0001452e) bg_button_pane_cp019

0x63c0,	// (0x00014537) bg_button_pane_cp020

0xd008,	// (0x0001b17f) main_cset_slider_pane_g7_ParamLimits

0xd008,	// (0x0001b17f) main_cset_slider_pane_g7

0xd014,	// (0x0001b18b) main_cset_slider_pane_g8_ParamLimits

0xd014,	// (0x0001b18b) main_cset_slider_pane_g8

0x6517,	// (0x0001468e) main_cset_slider_pane_g9_ParamLimits

0x6517,	// (0x0001468e) main_cset_slider_pane_g9

0x6523,	// (0x0001469a) main_cset_slider_pane_g10_ParamLimits

0x6523,	// (0x0001469a) main_cset_slider_pane_g10

0x652f,	// (0x000146a6) main_cset_slider_pane_g11_ParamLimits

0x652f,	// (0x000146a6) main_cset_slider_pane_g11

0x653b,	// (0x000146b2) main_cset_slider_pane_g12_ParamLimits

0x653b,	// (0x000146b2) main_cset_slider_pane_g12

0x6547,	// (0x000146be) main_cset_slider_pane_g13_ParamLimits

0x6547,	// (0x000146be) main_cset_slider_pane_g13

0x6553,	// (0x000146ca) main_cset_slider_pane_g14_ParamLimits

0x6553,	// (0x000146ca) main_cset_slider_pane_g14

0x655f,	// (0x000146d6) main_cset_slider_pane_g15_ParamLimits

0x655f,	// (0x000146d6) main_cset_slider_pane_g15

0xd05a,	// (0x0001b1d1) main_cset_slider_pane_t14_ParamLimits

0xd05a,	// (0x0001b1d1) main_cset_slider_pane_t14

0xd093,	// (0x0001b20a) main_cset_slider_pane_t15_ParamLimits

0xd093,	// (0x0001b20a) main_cset_slider_pane_t15

0x6bd8,	// (0x00014d4f) aid_cam4_burst_size_cell_ParamLimits

0x6bd8,	// (0x00014d4f) aid_cam4_burst_size_cell

0x6bf8,	// (0x00014d6f) grid_cam4_burst_pane_ParamLimits

0x6bf8,	// (0x00014d6f) grid_cam4_burst_pane

0x6c30,	// (0x00014da7) linegrid_cam4_burst_pane_ParamLimits

0x6c30,	// (0x00014da7) linegrid_cam4_burst_pane

0xd24d,	// (0x0001b3c4) scroll_pane_cp30_ParamLimits

0xd24d,	// (0x0001b3c4) scroll_pane_cp30

0x6c56,	// (0x00014dcd) cell_cam4_burst_pane_ParamLimits

0x6c56,	// (0x00014dcd) cell_cam4_burst_pane

0xd259,	// (0x0001b3d0) linegrid_cam4_burst_pane_g1_ParamLimits

0xd259,	// (0x0001b3d0) linegrid_cam4_burst_pane_g1

0x6ca3,	// (0x00014e1a) linegrid_cam4_burst_pane_g2_ParamLimits

0x6ca3,	// (0x00014e1a) linegrid_cam4_burst_pane_g2

0xd266,	// (0x0001b3dd) linegrid_cam4_burst_pane_g3_ParamLimits

0xd266,	// (0x0001b3dd) linegrid_cam4_burst_pane_g3

0x0002,

0xfa4c,	// (0x0001dbc3) linegrid_cam4_burst_pane_g_ParamLimits

0xfa4c,	// (0x0001dbc3) linegrid_cam4_burst_pane_g

0x6cb4,	// (0x00014e2b) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x6cb4,	// (0x00014e2b) linegrid_cam4_burst_pane_g3_copy1

0xd273,	// (0x0001b3ea) linegrid_cam4_burst_pane_g4_ParamLimits

0xd273,	// (0x0001b3ea) linegrid_cam4_burst_pane_g4

0x6cce,	// (0x00014e45) linegrid_cam4_burst_pane_g5_ParamLimits

0x6cce,	// (0x00014e45) linegrid_cam4_burst_pane_g5

0x6cdf,	// (0x00014e56) linegrid_cam4_burst_pane_g6_ParamLimits

0x6cdf,	// (0x00014e56) linegrid_cam4_burst_pane_g6

0xd280,	// (0x0001b3f7) linegrid_cam4_burst_pane_g7_ParamLimits

0xd280,	// (0x0001b3f7) linegrid_cam4_burst_pane_g7

0x6cf6,	// (0x00014e6d) cell_cam4_burst_pane_g1

0xd299,	// (0x0001b410) main_cam5_pane_t1_ParamLimits

0xd299,	// (0x0001b410) main_cam5_pane_t1

0xd2ab,	// (0x0001b422) main_cam5_pane_t2_ParamLimits

0xd2ab,	// (0x0001b422) main_cam5_pane_t2

0xd2bd,	// (0x0001b434) main_cam5_pane_t3_ParamLimits

0xd2bd,	// (0x0001b434) main_cam5_pane_t3

0xd2cf,	// (0x0001b446) main_cam5_pane_t4_ParamLimits

0xd2cf,	// (0x0001b446) main_cam5_pane_t4

0xd2e5,	// (0x0001b45c) main_cam5_pane_t5_ParamLimits

0xd2e5,	// (0x0001b45c) main_cam5_pane_t5

0xd2f7,	// (0x0001b46e) main_cam5_pane_t6_ParamLimits

0xd2f7,	// (0x0001b46e) main_cam5_pane_t6

0xd30b,	// (0x0001b482) main_cam5_pane_t7_ParamLimits

0xd30b,	// (0x0001b482) main_cam5_pane_t7

0xd31d,	// (0x0001b494) main_cam5_pane_t8_ParamLimits

0xd31d,	// (0x0001b494) main_cam5_pane_t8

0xd339,	// (0x0001b4b0) main_cam5_pane_t9_ParamLimits

0xd339,	// (0x0001b4b0) main_cam5_pane_t9

0xd34b,	// (0x0001b4c2) main_cam5_pane_t10_ParamLimits

0xd34b,	// (0x0001b4c2) main_cam5_pane_t10

0xd35d,	// (0x0001b4d4) main_cam5_pane_t11_ParamLimits

0xd35d,	// (0x0001b4d4) main_cam5_pane_t11

0xd36f,	// (0x0001b4e6) main_cam5_pane_t12_ParamLimits

0xd36f,	// (0x0001b4e6) main_cam5_pane_t12

0xd384,	// (0x0001b4fb) main_cam5_pane_t13_ParamLimits

0xd384,	// (0x0001b4fb) main_cam5_pane_t13

0x000c,

0xfa58,	// (0x0001dbcf) main_cam5_pane_t_ParamLimits

0xfa58,	// (0x0001dbcf) main_cam5_pane_t

0x0baf,	// (0x0000ed26) popup_scut_keymap_window_ParamLimits

0x0baf,	// (0x0000ed26) popup_scut_keymap_window

0x6d0b,	// (0x00014e82) aid_size_cell_brow_shortcut

0xa6ff,	// (0x00018876) bg_popup_window_pane_cp010

0x6d17,	// (0x00014e8e) grid_scut_pane

0x6d23,	// (0x00014e9a) cell_scut_pane_ParamLimits

0x6d23,	// (0x00014e9a) cell_scut_pane

0x6d3a,	// (0x00014eb1) cell_scut_pane_g1

0xd3a1,	// (0x0001b518) cell_scut_pane_t1

0xd3b0,	// (0x0001b527) cell_scut_pane_t2

0x6d43,	// (0x00014eba) cell_scut_pane_t3

0x0002,

0xfa73,	// (0x0001dbea) cell_scut_pane_t

0x49ad,	// (0x00012b24) main_mup3_pane_g8_ParamLimits

0x49ad,	// (0x00012b24) main_mup3_pane_g8

0x5e54,	// (0x00013fcb) area_vitu2_query_pane_ParamLimits

0x5e54,	// (0x00013fcb) area_vitu2_query_pane

0x6a80,	// (0x00014bf7) input_focus_pane_cp08

0xd3bf,	// (0x0001b536) area_vitu2_query_pane_g1

0x6d51,	// (0x00014ec8) area_vitu2_query_pane_g2

0x0001,

0xfa7a,	// (0x0001dbf1) area_vitu2_query_pane_g

0x6d62,	// (0x00014ed9) area_vitu2_query_pane_t1_ParamLimits

0x6d62,	// (0x00014ed9) area_vitu2_query_pane_t1

0x6d76,	// (0x00014eed) area_vitu2_query_pane_t2_ParamLimits

0x6d76,	// (0x00014eed) area_vitu2_query_pane_t2

0x6d8a,	// (0x00014f01) area_vitu2_query_pane_t3_ParamLimits

0x6d8a,	// (0x00014f01) area_vitu2_query_pane_t3

0xd3cb,	// (0x0001b542) area_vitu2_query_pane_t4_ParamLimits

0xd3cb,	// (0x0001b542) area_vitu2_query_pane_t4

0xd3f3,	// (0x0001b56a) area_vitu2_query_pane_t5_ParamLimits

0xd3f3,	// (0x0001b56a) area_vitu2_query_pane_t5

0xd41b,	// (0x0001b592) area_vitu2_query_pane_t6_ParamLimits

0xd41b,	// (0x0001b592) area_vitu2_query_pane_t6

0x0006,

0xfa7f,	// (0x0001dbf6) area_vitu2_query_pane_t_ParamLimits

0xfa7f,	// (0x0001dbf6) area_vitu2_query_pane_t

0x6db2,	// (0x00014f29) bg_button_pane_cp018

0x6dc0,	// (0x00014f37) bg_button_pane_cp021

0x6dcc,	// (0x00014f43) bg_button_pane_cp022

0x6ddd,	// (0x00014f54) input_focus_pane_cp09

0x2941,	// (0x00010ab8) aid_size_touch_mv_arrow_left

0x296a,	// (0x00010ae1) aid_size_touch_mv_arrow_right

0x6577,	// (0x000146ee) main_cset_slider_pane_g16_ParamLimits

0x6577,	// (0x000146ee) main_cset_slider_pane_g16

0x6583,	// (0x000146fa) main_cset_slider_pane_g17_ParamLimits

0x6583,	// (0x000146fa) main_cset_slider_pane_g17

0x6cf6,	// (0x00014e6d) cell_cam4_burst_pane_g1_ParamLimits

0x9173,	// (0x000172ea) compa_mode_pane

0x6791,	// (0x00014908) popup_vtel_slider_window_g3_ParamLimits

0x6791,	// (0x00014908) popup_vtel_slider_window_g3

0x67a8,	// (0x0001491f) popup_vtel_slider_window_g4_ParamLimits

0x67a8,	// (0x0001491f) popup_vtel_slider_window_g4

0x67bf,	// (0x00014936) popup_vtel_slider_window_t1_ParamLimits

0x67bf,	// (0x00014936) popup_vtel_slider_window_t1

0x9173,	// (0x000172ea) main_cl_pane

0xbbc6,	// (0x00019d3d) popup_imed_adjust2_window_ParamLimits

0xbb9e,	// (0x00019d15) bg_tb_trans_pane_cp05_ParamLimits

0xc5e4,	// (0x0001a75b) popup_imed_adjust2_window_g1_ParamLimits

0xc5f3,	// (0x0001a76a) popup_imed_adjust2_window_g2_ParamLimits

0xc5f3,	// (0x0001a76a) popup_imed_adjust2_window_g2

0xc5ff,	// (0x0001a776) popup_imed_adjust2_window_g3_ParamLimits

0xc5ff,	// (0x0001a776) popup_imed_adjust2_window_g3

0x0002,

0xf7ea,	// (0x0001d961) popup_imed_adjust2_window_g_ParamLimits

0xf7ea,	// (0x0001d961) popup_imed_adjust2_window_g

0xc60b,	// (0x0001a782) popup_imed_adjust2_window_t1_ParamLimits

0xc623,	// (0x0001a79a) slider_imed_adjust_pane_ParamLimits

0xc637,	// (0x0001a7ae) slider_imed_adjust_pane_g1_ParamLimits

0xc647,	// (0x0001a7be) slider_imed_adjust_pane_g2_ParamLimits

0xc657,	// (0x0001a7ce) slider_imed_adjust_pane_g3_ParamLimits

0xc668,	// (0x0001a7df) slider_imed_adjust_pane_g4_ParamLimits

0xf7f1,	// (0x0001d968) slider_imed_adjust_pane_g_ParamLimits

0x5bdb,	// (0x00013d52) aid_touch_area_cam4_ParamLimits

0x5bdb,	// (0x00013d52) aid_touch_area_cam4

0xcd51,	// (0x0001aec8) battery_pane_cp01

0x5caa,	// (0x00013e21) main_camera4_pane_g6_ParamLimits

0x5caa,	// (0x00013e21) main_camera4_pane_g6

0x5cd4,	// (0x00013e4b) main_camera4_pane_t2_ParamLimits

0x5cd4,	// (0x00013e4b) main_camera4_pane_t2

0x0001,

0xf8f4,	// (0x0001da6b) main_camera4_pane_t_ParamLimits

0xf8f4,	// (0x0001da6b) main_camera4_pane_t

0x5d09,	// (0x00013e80) aid_touch_area_vid4_ParamLimits

0x5d09,	// (0x00013e80) aid_touch_area_vid4

0x5d5d,	// (0x00013ed4) main_video4_pane_g5_ParamLimits

0x5d5d,	// (0x00013ed4) main_video4_pane_g5

0x5d82,	// (0x00013ef9) vid4_progress_pane_ParamLimits

0x5d82,	// (0x00013ef9) vid4_progress_pane

0xd020,	// (0x0001b197) main_cset_slider_pane_g18_ParamLimits

0xd020,	// (0x0001b197) main_cset_slider_pane_g18

0xd28d,	// (0x0001b404) cell_cam4_burst_pane_g2_ParamLimits

0xd28d,	// (0x0001b404) cell_cam4_burst_pane_g2

0x0001,

0xfa53,	// (0x0001dbca) cell_cam4_burst_pane_g_ParamLimits

0xfa53,	// (0x0001dbca) cell_cam4_burst_pane_g

0x9996,	// (0x00017b0d) bg_cl_pane_ParamLimits

0x9996,	// (0x00017b0d) bg_cl_pane

0x6dee,	// (0x00014f65) cl_header_pane_ParamLimits

0x6dee,	// (0x00014f65) cl_header_pane

0x6e02,	// (0x00014f79) cl_listscroll_pane_ParamLimits

0x6e02,	// (0x00014f79) cl_listscroll_pane

0xd467,	// (0x0001b5de) bg_cl_pane_g1

0xd46f,	// (0x0001b5e6) bg_cl_pane_g2

0xd477,	// (0x0001b5ee) bg_cl_pane_g3

0xd47f,	// (0x0001b5f6) bg_cl_pane_g4

0xd487,	// (0x0001b5fe) bg_cl_pane_g5

0xd48f,	// (0x0001b606) bg_cl_pane_g6

0xd497,	// (0x0001b60e) bg_cl_pane_g7

0xd49f,	// (0x0001b616) bg_cl_pane_g8

0xd4a7,	// (0x0001b61e) bg_cl_pane_g9

0x0008,

0xfa8e,	// (0x0001dc05) bg_cl_pane_g

0x6e12,	// (0x00014f89) aid_height_cl_leading_ParamLimits

0x6e12,	// (0x00014f89) aid_height_cl_leading

0x6e1e,	// (0x00014f95) aid_height_cl_text_ParamLimits

0x6e1e,	// (0x00014f95) aid_height_cl_text

0x91e3,	// (0x0001735a) bg_cl_header_pane_ParamLimits

0x91e3,	// (0x0001735a) bg_cl_header_pane

0x6e3d,	// (0x00014fb4) cl_header_pane_g1_ParamLimits

0x6e3d,	// (0x00014fb4) cl_header_pane_g1

0x6e53,	// (0x00014fca) cl_header_pane_t1_ParamLimits

0x6e53,	// (0x00014fca) cl_header_pane_t1

0xd4af,	// (0x0001b626) cl_list_pane

0xcff3,	// (0x0001b16a) hc_scroll_pane_cp01

0x9f2d,	// (0x000180a4) bg_cl_header_pane_g1

0xced9,	// (0x0001b050) bg_cl_header_pane_g2

0x9f4d,	// (0x000180c4) bg_cl_header_pane_g3

0xcee9,	// (0x0001b060) bg_cl_header_pane_g4

0xcee1,	// (0x0001b058) bg_cl_header_pane_g5

0xd162,	// (0x0001b2d9) bg_cl_header_pane_g6

0xcf01,	// (0x0001b078) bg_cl_header_pane_g7

0xcf09,	// (0x0001b080) bg_cl_header_pane_g8

0xcef9,	// (0x0001b070) bg_cl_header_pane_g9

0x0008,

0xfaa1,	// (0x0001dc18) bg_cl_header_pane_g

0x6e6c,	// (0x00014fe3) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x6e6c,	// (0x00014fe3) hc_cl_list_double_graphic_heading_pane

0x6e80,	// (0x00014ff7) hc_cl_list_single_graphic_pane_ParamLimits

0x6e80,	// (0x00014ff7) hc_cl_list_single_graphic_pane

0x6e9a,	// (0x00015011) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x6e9a,	// (0x00015011) hc_cl_list_single_graphic_pane_g1

0x6ea6,	// (0x0001501d) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x6ea6,	// (0x0001501d) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfab4,	// (0x0001dc2b) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfab4,	// (0x0001dc2b) hc_cl_list_single_graphic_pane_g

0x6eba,	// (0x00015031) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x6eba,	// (0x00015031) hc_cl_list_single_graphic_pane_t1

0x6e9a,	// (0x00015011) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x6e9a,	// (0x00015011) hc_cl_list_double_graphic_heading_pane_g1

0x6ecf,	// (0x00015046) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x6ecf,	// (0x00015046) hc_cl_list_double_graphic_heading_pane_g2

0x6ee3,	// (0x0001505a) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x6ee3,	// (0x0001505a) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfab9,	// (0x0001dc30) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfab9,	// (0x0001dc30) hc_cl_list_double_graphic_heading_pane_g

0x6ef7,	// (0x0001506e) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x6ef7,	// (0x0001506e) hc_cl_list_double_graphic_heading_pane_t1

0x6f0c,	// (0x00015083) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x6f0c,	// (0x00015083) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfac0,	// (0x0001dc37) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfac0,	// (0x0001dc37) hc_cl_list_double_graphic_heading_pane_t

0x6f21,	// (0x00015098) vid4_progress_pane_g1

0x6f33,	// (0x000150aa) vid4_progress_pane_g2

0xd4c0,	// (0x0001b637) vid4_progress_pane_g3

0xd4cc,	// (0x0001b643) vid4_progress_pane_g4

0x0004,

0xfac5,	// (0x0001dc3c) vid4_progress_pane_g

0xd4ea,	// (0x0001b661) vid4_progress_pane_t1

0xd4ff,	// (0x0001b676) vid4_progress_pane_t2

0x0002,

0xfad0,	// (0x0001dc47) vid4_progress_pane_t

0xd52a,	// (0x0001b6a1) wait_bar_pane_cp07

0xbe97,	// (0x0001a00e) blid_firmament_pane_ParamLimits

0xbeda,	// (0x0001a051) popup_blid_sat_info2_window_g1

0xbefe,	// (0x0001a075) popup_blid_sat_info2_window_t3

0xbf0c,	// (0x0001a083) popup_blid_sat_info2_window_t4

0xbf1a,	// (0x0001a091) popup_blid_sat_info2_window_t5

0xbf28,	// (0x0001a09f) popup_blid_sat_info2_window_t6

0xbf38,	// (0x0001a0af) popup_blid_sat_info2_window_t7

0xbf46,	// (0x0001a0bd) popup_blid_sat_info2_window_t8

0xbf54,	// (0x0001a0cb) popup_blid_sat_info2_window_t9

0xbf62,	// (0x0001a0d9) popup_blid_sat_info2_window_t10

0xc026,	// (0x0001a19d) aid_firma_cardinal_ParamLimits

0xc03a,	// (0x0001a1b1) blid_firmament_pane_t1_ParamLimits

0xc051,	// (0x0001a1c8) blid_firmament_pane_t2_ParamLimits

0xc068,	// (0x0001a1df) blid_firmament_pane_t3_ParamLimits

0xc07f,	// (0x0001a1f6) blid_firmament_pane_t4_ParamLimits

0xf6e3,	// (0x0001d85a) blid_firmament_pane_t_ParamLimits

0xc096,	// (0x0001a20d) blid_sat_info_pane_ParamLimits

0x91e3,	// (0x0001735a) main_cam_set_pane_ParamLimits

0x526b,	// (0x000133e2) aid_size_cell_colour_35_ParamLimits

0x528b,	// (0x00013402) aid_size_cell_colour_112_ParamLimits

0x52ab,	// (0x00013422) aid_size_cell_effect_ParamLimits

0xbb9e,	// (0x00019d15) bg_tb_trans_pane_cp02_ParamLimits

0xa14d,	// (0x000182c4) heading_imed_pane_ParamLimits

0x52cb,	// (0x00013442) listscroll_imed_pane_ParamLimits

0xb1c8,	// (0x0001933f) popup_call2_audio_first_window_g5_ParamLimits

0xb1c8,	// (0x0001933f) popup_call2_audio_first_window_g5

0x5882,	// (0x000139f9) aid_size_touch_image3_arrow_left_ParamLimits

0x5882,	// (0x000139f9) aid_size_touch_image3_arrow_left

0x58ae,	// (0x00013a25) aid_size_touch_image3_arrow_right_ParamLimits

0x58ae,	// (0x00013a25) aid_size_touch_image3_arrow_right

0xd515,	// (0x0001b68c) vid4_progress_pane_t3

0x55ee,	// (0x00013765) main_hwr_training_symbol_option_pane_ParamLimits

0x55ee,	// (0x00013765) main_hwr_training_symbol_option_pane

0xc8d1,	// (0x0001aa48) popup_hwr_training_preview_window_ParamLimits

0xc8d1,	// (0x0001aa48) popup_hwr_training_preview_window

0x560e,	// (0x00013785) hwr_training_navi_pane_g5_ParamLimits

0x560e,	// (0x00013785) hwr_training_navi_pane_g5

0xcec7,	// (0x0001b03e) popup_char_count_window

0x91e3,	// (0x0001735a) bg_popup_sub_pane_cp20_ParamLimits

0x68d7,	// (0x00014a4e) list_vitu2_match_list_pane_ParamLimits

0x68e6,	// (0x00014a5d) vitu2_page_scroll_pane_ParamLimits

0x68e6,	// (0x00014a5d) vitu2_page_scroll_pane

0xd594,	// (0x0001b70b) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd594,	// (0x0001b70b) list_single_hwr_training_symbol_option_pane

0xd5a7,	// (0x0001b71e) list_single_hwr_training_symbol_option_pane_g1

0xd5af,	// (0x0001b726) list_single_hwr_training_symbol_option_pane_t1

0xd5bd,	// (0x0001b734) bg_button_pane_cp023

0xd5c6,	// (0x0001b73d) bg_button_pane_cp024

0x6f45,	// (0x000150bc) vitu2_page_scroll_pane_g1

0x6f4d,	// (0x000150c4) vitu2_page_scroll_pane_g2

0x0001,

0xfad7,	// (0x0001dc4e) vitu2_page_scroll_pane_g

0x6f55,	// (0x000150cc) vitu2_page_scroll_pane_t1

0xbdb3,	// (0x00019f2a) popup_char_count_window_g1

0xd5f9,	// (0x0001b770) popup_char_count_window_g2

0xd602,	// (0x0001b779) popup_char_count_window_g3

0x0002,

0xfadc,	// (0x0001dc53) popup_char_count_window_g

0xd60b,	// (0x0001b782) popup_char_count_window_t1

0x9173,	// (0x000172ea) main_vded2_pane

0xc5d0,	// (0x0001a747) aid_size_cell_imed_line

0xc5da,	// (0x0001a751) grid_imed_line_width_pane

0xce07,	// (0x0001af7e) vid4_indicators_pane_g4

0xd619,	// (0x0001b790) cell_imed_line_width_pane_ParamLimits

0xd619,	// (0x0001b790) cell_imed_line_width_pane

0xd62d,	// (0x0001b7a4) cell_imed_line_width_pane_g1

0xd636,	// (0x0001b7ad) cell_imed_line_width_pane_g2

0x0001,

0xfae3,	// (0x0001dc5a) cell_imed_line_width_pane_g

0x6f64,	// (0x000150db) main_vded2_pane_g1_ParamLimits

0x6f64,	// (0x000150db) main_vded2_pane_g1

0x6f7c,	// (0x000150f3) main_vded2_pane_g2_ParamLimits

0x6f7c,	// (0x000150f3) main_vded2_pane_g2

0x0001,

0xfae8,	// (0x0001dc5f) main_vded2_pane_g_ParamLimits

0xfae8,	// (0x0001dc5f) main_vded2_pane_g

0x6f8e,	// (0x00015105) vded2_slider_pane_ParamLimits

0x6f8e,	// (0x00015105) vded2_slider_pane

0x6f9e,	// (0x00015115) aid_size_touch_vded2_end

0x6fa8,	// (0x0001511f) aid_size_touch_vded2_playhead

0xd63e,	// (0x0001b7b5) aid_size_touch_vded2_start

0xd646,	// (0x0001b7bd) vded2_slider_bg_pane

0xd64f,	// (0x0001b7c6) vded2_slider_pane_g1

0xd658,	// (0x0001b7cf) vded2_slider_pane_g2

0x6fb2,	// (0x00015129) vded2_slider_pane_g3

0x0002,

0xfaed,	// (0x0001dc64) vded2_slider_pane_g

0xd660,	// (0x0001b7d7) vded2_slider_bg_pane_g1

0xd669,	// (0x0001b7e0) vded2_slider_bg_pane_g2

0xd672,	// (0x0001b7e9) vded2_slider_bg_pane_g3

0x0002,

0xfaf4,	// (0x0001dc6b) vded2_slider_bg_pane_g

0x2fdb,	// (0x00011152) aid_postcard_touch_down_pane_ParamLimits

0x2fdb,	// (0x00011152) aid_postcard_touch_down_pane

0x2ff1,	// (0x00011168) aid_postcard_touch_up_pane_ParamLimits

0x2ff1,	// (0x00011168) aid_postcard_touch_up_pane

0x9173,	// (0x000172ea) main_blid2_pane

0xbbac,	// (0x00019d23) popup_blid2_search_window

0x9173,	// (0x000172ea) blid2_gps_pane

0x9173,	// (0x000172ea) blid2_navig_pane

0x9173,	// (0x000172ea) blid2_search_pane

0x9173,	// (0x000172ea) blid2_tripm_pane

0x6fbd,	// (0x00015134) blid2_search_pane_g1_ParamLimits

0x6fbd,	// (0x00015134) blid2_search_pane_g1

0x6fd5,	// (0x0001514c) blid2_search_pane_t1_ParamLimits

0x6fd5,	// (0x0001514c) blid2_search_pane_t1

0x6fe7,	// (0x0001515e) aid_size_cell_blid2_gps_ParamLimits

0x6fe7,	// (0x0001515e) aid_size_cell_blid2_gps

0x6fff,	// (0x00015176) blid2_gps_pane_g1_ParamLimits

0x6fff,	// (0x00015176) blid2_gps_pane_g1

0x7013,	// (0x0001518a) grid_blid2_satellite_pane_ParamLimits

0x7013,	// (0x0001518a) grid_blid2_satellite_pane

0x702d,	// (0x000151a4) blid2_navig_pane_g1_ParamLimits

0x702d,	// (0x000151a4) blid2_navig_pane_g1

0x7039,	// (0x000151b0) blid2_navig_pane_t1_ParamLimits

0x7039,	// (0x000151b0) blid2_navig_pane_t1

0x7054,	// (0x000151cb) blid2_navig_pane_t2_ParamLimits

0x7054,	// (0x000151cb) blid2_navig_pane_t2

0x0001,

0xfafb,	// (0x0001dc72) blid2_navig_pane_t_ParamLimits

0xfafb,	// (0x0001dc72) blid2_navig_pane_t

0x706f,	// (0x000151e6) blid2_navig_ring_pane_ParamLimits

0x706f,	// (0x000151e6) blid2_navig_ring_pane

0x7088,	// (0x000151ff) blid2_speed_pane_ParamLimits

0x7088,	// (0x000151ff) blid2_speed_pane

0x7094,	// (0x0001520b) blid2_tripm_pane_g1_ParamLimits

0x7094,	// (0x0001520b) blid2_tripm_pane_g1

0x70af,	// (0x00015226) blid2_tripm_pane_g2_ParamLimits

0x70af,	// (0x00015226) blid2_tripm_pane_g2

0x70c3,	// (0x0001523a) blid2_tripm_pane_g3_ParamLimits

0x70c3,	// (0x0001523a) blid2_tripm_pane_g3

0x70d7,	// (0x0001524e) blid2_tripm_pane_g4_ParamLimits

0x70d7,	// (0x0001524e) blid2_tripm_pane_g4

0x70eb,	// (0x00015262) blid2_tripm_pane_g5_ParamLimits

0x70eb,	// (0x00015262) blid2_tripm_pane_g5

0x0005,

0xfb00,	// (0x0001dc77) blid2_tripm_pane_g_ParamLimits

0xfb00,	// (0x0001dc77) blid2_tripm_pane_g

0x7111,	// (0x00015288) blid2_tripm_pane_t1_ParamLimits

0x7111,	// (0x00015288) blid2_tripm_pane_t1

0x712c,	// (0x000152a3) blid2_tripm_pane_t2_ParamLimits

0x712c,	// (0x000152a3) blid2_tripm_pane_t2

0x7147,	// (0x000152be) blid2_tripm_pane_t3_ParamLimits

0x7147,	// (0x000152be) blid2_tripm_pane_t3

0x0003,

0xfb0d,	// (0x0001dc84) blid2_tripm_pane_t_ParamLimits

0xfb0d,	// (0x0001dc84) blid2_tripm_pane_t

0x718e,	// (0x00015305) cell_blid2_satellite_pane_ParamLimits

0x718e,	// (0x00015305) cell_blid2_satellite_pane

0x71ac,	// (0x00015323) cell_blid2_satellite_pane_g1

0xd67b,	// (0x0001b7f2) cell_blid2_satellite_pane_t1

0xc0a6,	// (0x0001a21d) blid2_speed_pane_g1

0xd689,	// (0x0001b800) blid2_speed_pane_t1

0xd697,	// (0x0001b80e) blid2_speed_pane_t2

0x0001,

0xfb16,	// (0x0001dc8d) blid2_speed_pane_t

0xc0a6,	// (0x0001a21d) blid2_navig_ring_pane_g1

0x71b5,	// (0x0001532c) blid2_navig_ring_pane_g2

0x71bd,	// (0x00015334) blid2_navig_ring_pane_g3

0x71c5,	// (0x0001533c) blid2_navig_ring_pane_g4

0x71cd,	// (0x00015344) blid2_navig_ring_pane_g5

0x0004,

0xfb1b,	// (0x0001dc92) blid2_navig_ring_pane_g

0x9173,	// (0x000172ea) bg_popup_window_pane_cp011

0xd6a5,	// (0x0001b81c) popup_blid2_search_window_g1

0xd6ad,	// (0x0001b824) popup_blid2_search_window_t1

0xd6bb,	// (0x0001b832) popup_blid2_search_window_t2

0x0001,

0xfb26,	// (0x0001dc9d) popup_blid2_search_window_t

0x9e3c,	// (0x00017fb3) main_browser_pane_g1

0x9996,	// (0x00017b0d) main_browser_pane_ParamLimits

0x91e3,	// (0x0001735a) bg_button_pane_cp011_ParamLimits

0x6153,	// (0x000142ca) cell_vitu2_function_pane_g1_ParamLimits

0xbb9e,	// (0x00019d15) bg_popup_sub_pane_cp22_ParamLimits

0x6a80,	// (0x00014bf7) input_focus_pane_cp08_ParamLimits

0x6a97,	// (0x00014c0e) popup_vitu2_query_button_pane_ParamLimits

0x6a97,	// (0x00014c0e) popup_vitu2_query_button_pane

0x6aa8,	// (0x00014c1f) popup_vitu2_query_input_button_pane

0xd1d7,	// (0x0001b34e) popup_vitu2_query_window_g1_ParamLimits

0x6ab2,	// (0x00014c29) popup_vitu2_query_window_g2_ParamLimits

0xfa27,	// (0x0001db9e) popup_vitu2_query_window_g_ParamLimits

0x9173,	// (0x000172ea) bg_button_pane_cp026

0x71d5,	// (0x0001534c) popup_vitu2_query_input_button_pane_g1

0x9173,	// (0x000172ea) bg_button_pane_cp025

0xd6c9,	// (0x0001b840) popup_vitu2_query_button_pane_t1

0x4677,	// (0x000127ee) main_mp3_pane_t6

0x4685,	// (0x000127fc) popup_slider_window_cp01

0xcd6d,	// (0x0001aee4) cam4_battery_pane

0xcdc6,	// (0x0001af3d) cam4_battery_pane_cp02

0xd4b8,	// (0x0001b62f) cam4_battery_pane_cp01

0xd4b8,	// (0x0001b62f) cam4_battery_pane_cp03

0xc0a6,	// (0x0001a21d) cam4_battery_pane_g1

0xd6d7,	// (0x0001b84e) cam4_battery_pane_g2

0x0001,

0xfb2b,	// (0x0001dca2) cam4_battery_pane_g

0xbf70,	// (0x0001a0e7) popup_blid_sat_info2_window_t11

0x2941,	// (0x00010ab8) aid_size_touch_mv_arrow_left_ParamLimits

0x296a,	// (0x00010ae1) aid_size_touch_mv_arrow_right_ParamLimits

0xa65f,	// (0x000187d6) navi_pane_g1_ParamLimits

0x29a9,	// (0x00010b20) navi_pane_g2_ParamLimits

0x29d7,	// (0x00010b4e) navi_pane_g3_ParamLimits

0xf3f5,	// (0x0001d56c) navi_pane_g_ParamLimits

0x2a2f,	// (0x00010ba6) navi_pane_mv_t1_ParamLimits

0x52d7,	// (0x0001344e) grid_imed_effect_pane_ParamLimits

0x183b,	// (0x0000f9b2) aid_placing_vt_slider_lsc

0x9d8b,	// (0x00017f02) aid_placing_vt_slider_prt

0x91e3,	// (0x0001735a) bg_tb_trans_pane_cp01_ParamLimits

0xc22d,	// (0x0001a3a4) popup_image_details_window_g1_ParamLimits

0xc240,	// (0x0001a3b7) popup_image_details_window_g2_ParamLimits

0xc255,	// (0x0001a3cc) popup_image_details_window_g3_ParamLimits

0xc255,	// (0x0001a3cc) popup_image_details_window_g3

0xf728,	// (0x0001d89f) popup_image_details_window_g_ParamLimits

0xc269,	// (0x0001a3e0) popup_image_details_window_t1_ParamLimits

0xc27b,	// (0x0001a3f2) popup_image_details_window_t2_ParamLimits

0xc294,	// (0x0001a40b) popup_image_details_window_t3_ParamLimits

0xc2a8,	// (0x0001a41f) popup_image_details_window_t4_ParamLimits

0xc2c3,	// (0x0001a43a) popup_image_details_window_t5_ParamLimits

0xf72f,	// (0x0001d8a6) popup_image_details_window_t_ParamLimits

0x6e2a,	// (0x00014fa1) cl_header_name_pane_ParamLimits

0x6e2a,	// (0x00014fa1) cl_header_name_pane

0x71dd,	// (0x00015354) cl_header_name_pane_t1_ParamLimits

0x71dd,	// (0x00015354) cl_header_name_pane_t1

0x71fe,	// (0x00015375) cl_header_name_pane_t2_ParamLimits

0x71fe,	// (0x00015375) cl_header_name_pane_t2

0x7240,	// (0x000153b7) cl_header_name_pane_t3_ParamLimits

0x7240,	// (0x000153b7) cl_header_name_pane_t3

0x0002,

0xfb30,	// (0x0001dca7) cl_header_name_pane_t_ParamLimits

0xfb30,	// (0x0001dca7) cl_header_name_pane_t

0x2a00,	// (0x00010b77) navi_pane_mv_g2_ParamLimits

0xce53,	// (0x0001afca) field_vitu2_entry_pane_g1_ParamLimits

0xce5f,	// (0x0001afd6) field_vitu2_entry_pane_g2_ParamLimits

0xce6b,	// (0x0001afe2) field_vitu2_entry_pane_g3_ParamLimits

0xce6b,	// (0x0001afe2) field_vitu2_entry_pane_g3

0xf926,	// (0x0001da9d) field_vitu2_entry_pane_g_ParamLimits

0x5ff3,	// (0x0001416a) cell_vitu2_itu_pane_g1_ParamLimits

0x6003,	// (0x0001417a) cell_vitu2_itu_pane_g2_ParamLimits

0x6003,	// (0x0001417a) cell_vitu2_itu_pane_g2

0x0001,

0xf932,	// (0x0001daa9) cell_vitu2_itu_pane_g_ParamLimits

0xf932,	// (0x0001daa9) cell_vitu2_itu_pane_g

0x91e3,	// (0x0001735a) bg_vkb2_func_pane_cp05_ParamLimits

0x91e3,	// (0x0001735a) bg_vkb2_func_pane_cp05

0x91e3,	// (0x0001735a) bg_vkb2_func_pane_cp03

0x91e3,	// (0x0001735a) bg_vkb2_func_pane_cp04

0x91e3,	// (0x0001735a) bg_vkb2_func_pane_cp10_ParamLimits

0x91e3,	// (0x0001735a) bg_vkb2_func_pane_cp10

0x6dcc,	// (0x00014f43) bg_vkb2_func_pane_cp08

0x6db2,	// (0x00014f29) bg_vkb2_func_pane_cp06

0x6dc0,	// (0x00014f37) bg_vkb2_func_pane_cp07

0xd5cf,	// (0x0001b746) bg_vkb2_func_pane_cp11_ParamLimits

0xd5cf,	// (0x0001b746) bg_vkb2_func_pane_cp11

0xd5e4,	// (0x0001b75b) bg_vkb2_func_pane_cp12_ParamLimits

0xd5e4,	// (0x0001b75b) bg_vkb2_func_pane_cp12

0x9173,	// (0x000172ea) bg_vkb2_func_pane_cp09

0xced9,	// (0x0001b050) bg_vkb2_func_pane_g1

0x9f4d,	// (0x000180c4) bg_vkb2_func_pane_g2

0xcee1,	// (0x0001b058) bg_vkb2_func_pane_g3

0xcee9,	// (0x0001b060) bg_vkb2_func_pane_g4

0xd162,	// (0x0001b2d9) bg_vkb2_func_pane_g5

0xcf01,	// (0x0001b078) bg_vkb2_func_pane_g6

0xcf09,	// (0x0001b080) bg_vkb2_func_pane_g7

0xcef9,	// (0x0001b070) bg_vkb2_func_pane_g8

0x9f2d,	// (0x000180a4) bg_vkb2_func_pane_g9

0x0008,

0xfb37,	// (0x0001dcae) bg_vkb2_func_pane_g

0x70ff,	// (0x00015276) blid2_tripm_pane_g6_ParamLimits

0x70ff,	// (0x00015276) blid2_tripm_pane_g6

0xcbc2,	// (0x0001ad39) mp4_progress_pane_g1

0x717a,	// (0x000152f1) blid2_tripm_values_pane_ParamLimits

0x717a,	// (0x000152f1) blid2_tripm_values_pane

0x7271,	// (0x000153e8) blid2_tripm_values_pane_t1

0x727f,	// (0x000153f6) blid2_tripm_values_pane_t2

0x728d,	// (0x00015404) blid2_tripm_values_pane_t3

0x729b,	// (0x00015412) blid2_tripm_values_pane_t4

0x72a9,	// (0x00015420) blid2_tripm_values_pane_t5

0x72b7,	// (0x0001542e) blid2_tripm_values_pane_t6

0x72c5,	// (0x0001543c) blid2_tripm_values_pane_t7

0x72d3,	// (0x0001544a) blid2_tripm_values_pane_t8

0x72e1,	// (0x00015458) blid2_tripm_values_pane_t9

0x0008,

0xfb4a,	// (0x0001dcc1) blid2_tripm_values_pane_t

0x187d,	// (0x0000f9f4) call_video_pane_t1_ParamLimits

0x189b,	// (0x0000fa12) call_video_pane_t2_ParamLimits

0xf27e,	// (0x0001d3f5) call_video_pane_t_ParamLimits

0x2f14,	// (0x0001108b) msg_header_pane_g1_ParamLimits

0xa89a,	// (0x00018a11) msg_header_pane_g2_ParamLimits

0xa89a,	// (0x00018a11) msg_header_pane_g2

0x0001,

0xf498,	// (0x0001d60f) msg_header_pane_g_ParamLimits

0xf498,	// (0x0001d60f) msg_header_pane_g

0x9996,	// (0x00017b0d) main_clock2_pane_ParamLimits

0x4fe0,	// (0x00013157) grid_clock2_toolbar_pane_ParamLimits

0x4fe0,	// (0x00013157) grid_clock2_toolbar_pane

0x4fe0,	// (0x00013157) listscroll_clock2_pane_ParamLimits

0x4fe0,	// (0x00013157) listscroll_clock2_pane

0x50c8,	// (0x0001323f) main_clock2_pane_t3_ParamLimits

0x50c8,	// (0x0001323f) main_clock2_pane_t3

0x50eb,	// (0x00013262) main_clock2_pane_t4_ParamLimits

0x50eb,	// (0x00013262) main_clock2_pane_t4

0xd6e1,	// (0x0001b858) cell_clock2_toolbar_pane

0xd6e9,	// (0x0001b860) cell_clock2_toolbar_pane_cp01

0xd6e9,	// (0x0001b860) cell_clock2_toolbar_pane_cp02

0xd6f1,	// (0x0001b868) cell_clock2_toolbar_pane_cp03

0xd6f9,	// (0x0001b870) list_clock2_pane

0xa5b2,	// (0x00018729) scroll_pane_cp10

0xd701,	// (0x0001b878) list_single_clock2_pane_ParamLimits

0xd701,	// (0x0001b878) list_single_clock2_pane

0xa6ff,	// (0x00018876) list_highlight_pane_cp08

0xd70e,	// (0x0001b885) list_single_clock2_pane_t1

0xd71c,	// (0x0001b893) list_single_clock2_pane_t2

0x0001,

0xfb5d,	// (0x0001dcd4) list_single_clock2_pane_t

0x9173,	// (0x000172ea) bg_button_pane_cp10

0xd72a,	// (0x0001b8a1) cell_clock2_toolbar_pane_g1

0x2f67,	// (0x000110de) aid_main_viewer_pane_g1_ParamLimits

0x2f67,	// (0x000110de) aid_main_viewer_pane_g1

0x2f75,	// (0x000110ec) aid_main_viewer_pane_g2_ParamLimits

0x2f75,	// (0x000110ec) aid_main_viewer_pane_g2

0x2f83,	// (0x000110fa) aid_main_viewer_pane_g3_ParamLimits

0x2f83,	// (0x000110fa) aid_main_viewer_pane_g3

0x2f92,	// (0x00011109) aid_main_viewer_pane_g4_ParamLimits

0x2f92,	// (0x00011109) aid_main_viewer_pane_g4

0x0003,

0xf4a9,	// (0x0001d620) aid_main_viewer_pane_g_ParamLimits

0xf4a9,	// (0x0001d620) aid_main_viewer_pane_g

0x389e,	// (0x00011a15) main_calc_pane_ParamLimits

0x38b2,	// (0x00011a29) main_dialer2_pane_ParamLimits

0x9173,	// (0x000172ea) main_cam6_pane

0x9173,	// (0x000172ea) main_vid6_pane

0x4fec,	// (0x00013163) listscroll_gen_pane_cp06_ParamLimits

0x4fec,	// (0x00013163) listscroll_gen_pane_cp06

0x510e,	// (0x00013285) main_clock2_pane_t5_ParamLimits

0x510e,	// (0x00013285) main_clock2_pane_t5

0x516e,	// (0x000132e5) aid_call2_pane_cp10_ParamLimits

0x5180,	// (0x000132f7) aid_call_pane_cp10_ParamLimits

0xa634,	// (0x000187ab) popup_clock_analogue_window_cp10_g1_ParamLimits

0xa634,	// (0x000187ab) popup_clock_analogue_window_cp10_g2_ParamLimits

0x5192,	// (0x00013309) popup_clock_analogue_window_cp10_g3_ParamLimits

0x5192,	// (0x00013309) popup_clock_analogue_window_cp10_g4_ParamLimits

0xa634,	// (0x000187ab) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7df,	// (0x0001d956) popup_clock_analogue_window_cp10_g_ParamLimits

0x51a4,	// (0x0001331b) popup_clock_analogue_window_cp10_t1_ParamLimits

0x582f,	// (0x000139a6) cell_dialer2_keypad_pane_g2_ParamLimits

0x582f,	// (0x000139a6) cell_dialer2_keypad_pane_g2

0x0001,

0xf8c5,	// (0x0001da3c) cell_dialer2_keypad_pane_g_ParamLimits

0xf8c5,	// (0x0001da3c) cell_dialer2_keypad_pane_g

0x584b,	// (0x000139c2) cell_dialer2_keypad_pane_t1

0x646a,	// (0x000145e1) main_cset_text2_pane_ParamLimits

0x646a,	// (0x000145e1) main_cset_text2_pane

0xd3bf,	// (0x0001b536) area_vitu2_query_pane_g1_ParamLimits

0x6d51,	// (0x00014ec8) area_vitu2_query_pane_g2_ParamLimits

0xfa7a,	// (0x0001dbf1) area_vitu2_query_pane_g_ParamLimits

0xd443,	// (0x0001b5ba) area_vitu2_query_pane_t7_ParamLimits

0xd443,	// (0x0001b5ba) area_vitu2_query_pane_t7

0x6db2,	// (0x00014f29) bg_button_pane_cp018_ParamLimits

0x6dc0,	// (0x00014f37) bg_button_pane_cp021_ParamLimits

0x6dcc,	// (0x00014f43) bg_button_pane_cp022_ParamLimits

0x6dcc,	// (0x00014f43) bg_vkb2_func_pane_cp08_ParamLimits

0x6db2,	// (0x00014f29) bg_vkb2_func_pane_cp06_ParamLimits

0x6dc0,	// (0x00014f37) bg_vkb2_func_pane_cp07_ParamLimits

0x6ddd,	// (0x00014f54) input_focus_pane_cp09_ParamLimits

0xd732,	// (0x0001b8a9) cam6_autofocus_pane_ParamLimits

0xd732,	// (0x0001b8a9) cam6_autofocus_pane

0x72ef,	// (0x00015466) cam6_image_uncrop_pane_ParamLimits

0x72ef,	// (0x00015466) cam6_image_uncrop_pane

0x72fe,	// (0x00015475) cam6_indi_pane_ParamLimits

0x72fe,	// (0x00015475) cam6_indi_pane

0x7314,	// (0x0001548b) cam6_mode_pane_ParamLimits

0x7314,	// (0x0001548b) cam6_mode_pane

0x7326,	// (0x0001549d) cam6_timer_pane_ParamLimits

0x7326,	// (0x0001549d) cam6_timer_pane

0x7332,	// (0x000154a9) cam6_zoom_pane_ParamLimits

0x7332,	// (0x000154a9) cam6_zoom_pane

0x733e,	// (0x000154b5) cam6_mode_pane_g1_ParamLimits

0x733e,	// (0x000154b5) cam6_mode_pane_g1

0x734e,	// (0x000154c5) cam6_mode_pane_g2_ParamLimits

0x734e,	// (0x000154c5) cam6_mode_pane_g2

0x735e,	// (0x000154d5) cam6_mode_pane_g3_ParamLimits

0x735e,	// (0x000154d5) cam6_mode_pane_g3

0x736e,	// (0x000154e5) cam6_mode_pane_g4_ParamLimits

0x736e,	// (0x000154e5) cam6_mode_pane_g4

0x0003,

0xfb62,	// (0x0001dcd9) cam6_mode_pane_g_ParamLimits

0xfb62,	// (0x0001dcd9) cam6_mode_pane_g

0xd740,	// (0x0001b8b7) bg_tb_trans_pane_cp08_ParamLimits

0xd740,	// (0x0001b8b7) bg_tb_trans_pane_cp08

0xd74e,	// (0x0001b8c5) cam6_battery_pane_ParamLimits

0xd74e,	// (0x0001b8c5) cam6_battery_pane

0xd764,	// (0x0001b8db) cam6_indi_pane_g1_ParamLimits

0xd764,	// (0x0001b8db) cam6_indi_pane_g1

0xd776,	// (0x0001b8ed) cam6_indi_pane_g2_ParamLimits

0xd776,	// (0x0001b8ed) cam6_indi_pane_g2

0xd788,	// (0x0001b8ff) cam6_indi_pane_g3_ParamLimits

0xd788,	// (0x0001b8ff) cam6_indi_pane_g3

0x0002,

0xfb6b,	// (0x0001dce2) cam6_indi_pane_g_ParamLimits

0xfb6b,	// (0x0001dce2) cam6_indi_pane_g

0xd79a,	// (0x0001b911) cam6_indi_pane_t1_ParamLimits

0xd79a,	// (0x0001b911) cam6_indi_pane_t1

0x737e,	// (0x000154f5) cam6_autofocus_pane_g1

0x7386,	// (0x000154fd) cam6_autofocus_pane_g2

0x738e,	// (0x00015505) cam6_autofocus_pane_g3

0x7396,	// (0x0001550d) cam6_autofocus_pane_g4

0x0003,

0xfb72,	// (0x0001dce9) cam6_autofocus_pane_g

0xd7c0,	// (0x0001b937) cam6_timer_pane_g1

0xd7c8,	// (0x0001b93f) cam6_timer_pane_t1

0xd7d6,	// (0x0001b94d) cam6_zoom_cont_pane

0xd7de,	// (0x0001b955) cam6_zoom_pane_g1

0xd7e6,	// (0x0001b95d) cam6_zoom_pane_g2

0x739e,	// (0x00015515) cam6_zoom_pane_g3

0x0002,

0xfb7b,	// (0x0001dcf2) cam6_zoom_pane_g

0xc0a6,	// (0x0001a21d) cam6_battery_pane_g1

0xc0a6,	// (0x0001a21d) cam6_battery_pane_g2

0x0001,

0xf6ec,	// (0x0001d863) cam6_battery_pane_g

0xd7ee,	// (0x0001b965) cam6_zoom_cont_pane_g1

0xd7f7,	// (0x0001b96e) cam6_zoom_cont_pane_g2

0xd800,	// (0x0001b977) cam6_zoom_cont_pane_g3

0x0002,

0xfb82,	// (0x0001dcf9) cam6_zoom_cont_pane_g

0x73bb,	// (0x00015532) cam6_mode_pane_cp_ParamLimits

0x73bb,	// (0x00015532) cam6_mode_pane_cp

0x7332,	// (0x000154a9) cam6_zoom_pane_cp_ParamLimits

0x7332,	// (0x000154a9) cam6_zoom_pane_cp

0x73cd,	// (0x00015544) vid6_image_uncrop_cif_pane_ParamLimits

0x73cd,	// (0x00015544) vid6_image_uncrop_cif_pane

0x73dd,	// (0x00015554) vid6_image_uncrop_nhd_pane_ParamLimits

0x73dd,	// (0x00015554) vid6_image_uncrop_nhd_pane

0x72ef,	// (0x00015466) vid6_image_uncrop_vga_pane_ParamLimits

0x72ef,	// (0x00015466) vid6_image_uncrop_vga_pane

0x73ec,	// (0x00015563) vid6_image_uncrop_wvga_pane_ParamLimits

0x73ec,	// (0x00015563) vid6_image_uncrop_wvga_pane

0x73fb,	// (0x00015572) vid6_indi_pane_ParamLimits

0x73fb,	// (0x00015572) vid6_indi_pane

0xd740,	// (0x0001b8b7) bg_tb_trans_pane_cp09_ParamLimits

0xd740,	// (0x0001b8b7) bg_tb_trans_pane_cp09

0xd818,	// (0x0001b98f) cam6_battery_pane_cp_ParamLimits

0xd818,	// (0x0001b98f) cam6_battery_pane_cp

0xd824,	// (0x0001b99b) vid6_indi_pane_g1_ParamLimits

0xd824,	// (0x0001b99b) vid6_indi_pane_g1

0xd836,	// (0x0001b9ad) vid6_indi_pane_g2_ParamLimits

0xd836,	// (0x0001b9ad) vid6_indi_pane_g2

0xd848,	// (0x0001b9bf) vid6_indi_pane_g3_ParamLimits

0xd848,	// (0x0001b9bf) vid6_indi_pane_g3

0xd85d,	// (0x0001b9d4) vid6_indi_pane_g4_ParamLimits

0xd85d,	// (0x0001b9d4) vid6_indi_pane_g4

0xd872,	// (0x0001b9e9) vid6_indi_pane_g5_ParamLimits

0xd872,	// (0x0001b9e9) vid6_indi_pane_g5

0x0004,

0xfb89,	// (0x0001dd00) vid6_indi_pane_g_ParamLimits

0xfb89,	// (0x0001dd00) vid6_indi_pane_g

0xd88c,	// (0x0001ba03) vid6_indi_pane_t1_ParamLimits

0xd88c,	// (0x0001ba03) vid6_indi_pane_t1

0xd8a2,	// (0x0001ba19) vid6_indi_pane_t2_ParamLimits

0xd8a2,	// (0x0001ba19) vid6_indi_pane_t2

0xd8ca,	// (0x0001ba41) vid6_indi_pane_t3_ParamLimits

0xd8ca,	// (0x0001ba41) vid6_indi_pane_t3

0xd8f2,	// (0x0001ba69) vid6_indi_pane_t4_ParamLimits

0xd8f2,	// (0x0001ba69) vid6_indi_pane_t4

0x0003,

0xfb94,	// (0x0001dd0b) vid6_indi_pane_t_ParamLimits

0xfb94,	// (0x0001dd0b) vid6_indi_pane_t

0xd916,	// (0x0001ba8d) wait_bar_pane_cp08

0x7413,	// (0x0001558a) main_cset_text2_pane_t1_ParamLimits

0x7413,	// (0x0001558a) main_cset_text2_pane_t1

0x73a6,	// (0x0001551d) listscroll_gen_pane_cp06_t1_ParamLimits

0x73a6,	// (0x0001551d) listscroll_gen_pane_cp06_t1

0x9173,	// (0x000172ea) main_cam6_set_pane

0xc30d,	// (0x0001a484) bg_tb_trans_pane_cp06_ParamLimits

0xcd75,	// (0x0001aeec) cam4_indicators_pane_g1_ParamLimits

0xcd86,	// (0x0001aefd) cam4_indicators_pane_g2_ParamLimits

0xf902,	// (0x0001da79) cam4_indicators_pane_g_ParamLimits

0xcda4,	// (0x0001af1b) cam4_indicators_pane_t1_ParamLimits

0x91e3,	// (0x0001735a) bg_tb_trans_pane_cp07_ParamLimits

0xcdce,	// (0x0001af45) vid4_indicators_pane_g1_ParamLimits

0xcde2,	// (0x0001af59) vid4_indicators_pane_g2_ParamLimits

0xcdf6,	// (0x0001af6d) vid4_indicators_pane_g3_ParamLimits

0xce07,	// (0x0001af7e) vid4_indicators_pane_g4_ParamLimits

0xf914,	// (0x0001da8b) vid4_indicators_pane_g_ParamLimits

0xce23,	// (0x0001af9a) vid4_indicators_pane_t1_ParamLimits

0x6f21,	// (0x00015098) vid4_progress_pane_g1_ParamLimits

0x6f33,	// (0x000150aa) vid4_progress_pane_g2_ParamLimits

0xd4c0,	// (0x0001b637) vid4_progress_pane_g3_ParamLimits

0xd4cc,	// (0x0001b643) vid4_progress_pane_g4_ParamLimits

0xfac5,	// (0x0001dc3c) vid4_progress_pane_g_ParamLimits

0xd4ea,	// (0x0001b661) vid4_progress_pane_t1_ParamLimits

0xd4ff,	// (0x0001b676) vid4_progress_pane_t2_ParamLimits

0xd515,	// (0x0001b68c) vid4_progress_pane_t3_ParamLimits

0xfad0,	// (0x0001dc47) vid4_progress_pane_t_ParamLimits

0xd52a,	// (0x0001b6a1) wait_bar_pane_cp07_ParamLimits

0x7433,	// (0x000155aa) main_cam6_set_pane_g2_ParamLimits

0x7433,	// (0x000155aa) main_cam6_set_pane_g2

0x7457,	// (0x000155ce) main_cset6_listscroll_pane_ParamLimits

0x7457,	// (0x000155ce) main_cset6_listscroll_pane

0x7473,	// (0x000155ea) main_cset6_slider_pane_ParamLimits

0x7473,	// (0x000155ea) main_cset6_slider_pane

0x7489,	// (0x00015600) main_cset6_text2_pane_ParamLimits

0x7489,	// (0x00015600) main_cset6_text2_pane

0xd925,	// (0x0001ba9c) main_cset6_text_pane

0xd92d,	// (0x0001baa4) main_cset_list_pane_copy1_ParamLimits

0xd92d,	// (0x0001baa4) main_cset_list_pane_copy1

0xd93d,	// (0x0001bab4) scroll_pane_cp028_copy1

0x7497,	// (0x0001560e) cset_list_set_pane_copy1

0x74aa,	// (0x00015621) aid_position_infowindow_above_copy1

0x74b2,	// (0x00015629) aid_position_infowindow_below_copy1

0xd946,	// (0x0001babd) cset_list_set_pane_g1_copy1

0xd94e,	// (0x0001bac5) cset_list_set_pane_g3_copy1_ParamLimits

0xd94e,	// (0x0001bac5) cset_list_set_pane_g3_copy1

0xd95d,	// (0x0001bad4) cset_list_set_pane_t1_copy1_ParamLimits

0xd95d,	// (0x0001bad4) cset_list_set_pane_t1_copy1

0x91e3,	// (0x0001735a) list_highlight_pane_cp021_copy1_ParamLimits

0x91e3,	// (0x0001735a) list_highlight_pane_cp021_copy1

0xd972,	// (0x0001bae9) cset6_slider_pane_ParamLimits

0xd972,	// (0x0001bae9) cset6_slider_pane

0xd99e,	// (0x0001bb15) main_cset6_slider_pane_g1_ParamLimits

0xd99e,	// (0x0001bb15) main_cset6_slider_pane_g1

0x74ba,	// (0x00015631) main_cset6_slider_pane_g2_ParamLimits

0x74ba,	// (0x00015631) main_cset6_slider_pane_g2

0xd008,	// (0x0001b17f) main_cset6_slider_pane_g3_ParamLimits

0xd008,	// (0x0001b17f) main_cset6_slider_pane_g3

0x652f,	// (0x000146a6) main_cset6_slider_pane_g4_ParamLimits

0x652f,	// (0x000146a6) main_cset6_slider_pane_g4

0x6577,	// (0x000146ee) main_cset6_slider_pane_g5_ParamLimits

0x6577,	// (0x000146ee) main_cset6_slider_pane_g5

0xd008,	// (0x0001b17f) main_cset6_slider_pane_g7_ParamLimits

0xd008,	// (0x0001b17f) main_cset6_slider_pane_g7

0xd014,	// (0x0001b18b) main_cset6_slider_pane_g8_ParamLimits

0xd014,	// (0x0001b18b) main_cset6_slider_pane_g8

0x6517,	// (0x0001468e) main_cset6_slider_pane_g9_ParamLimits

0x6517,	// (0x0001468e) main_cset6_slider_pane_g9

0x6523,	// (0x0001469a) main_cset6_slider_pane_g10_ParamLimits

0x6523,	// (0x0001469a) main_cset6_slider_pane_g10

0x652f,	// (0x000146a6) main_cset6_slider_pane_g11_ParamLimits

0x652f,	// (0x000146a6) main_cset6_slider_pane_g11

0x653b,	// (0x000146b2) main_cset6_slider_pane_g12_ParamLimits

0x653b,	// (0x000146b2) main_cset6_slider_pane_g12

0x6547,	// (0x000146be) main_cset6_slider_pane_g13_ParamLimits

0x6547,	// (0x000146be) main_cset6_slider_pane_g13

0x6553,	// (0x000146ca) main_cset6_slider_pane_g14_ParamLimits

0x6553,	// (0x000146ca) main_cset6_slider_pane_g14

0x74e2,	// (0x00015659) main_cset6_slider_pane_g15_ParamLimits

0x74e2,	// (0x00015659) main_cset6_slider_pane_g15

0x6577,	// (0x000146ee) main_cset6_slider_pane_g16_ParamLimits

0x6577,	// (0x000146ee) main_cset6_slider_pane_g16

0x6583,	// (0x000146fa) main_cset6_slider_pane_g17_ParamLimits

0x6583,	// (0x000146fa) main_cset6_slider_pane_g17

0x0011,

0xfb9d,	// (0x0001dd14) main_cset6_slider_pane_g_ParamLimits

0xfb9d,	// (0x0001dd14) main_cset6_slider_pane_g

0xd9c6,	// (0x0001bb3d) main_cset6_slider_pane_t1_ParamLimits

0xd9c6,	// (0x0001bb3d) main_cset6_slider_pane_t1

0x74fa,	// (0x00015671) main_cset6_slider_pane_t2_ParamLimits

0x74fa,	// (0x00015671) main_cset6_slider_pane_t2

0x7525,	// (0x0001569c) main_cset6_slider_pane_t3_ParamLimits

0x7525,	// (0x0001569c) main_cset6_slider_pane_t3

0x7550,	// (0x000156c7) main_cset6_slider_pane_t4_ParamLimits

0x7550,	// (0x000156c7) main_cset6_slider_pane_t4

0x757b,	// (0x000156f2) main_cset6_slider_pane_t5_ParamLimits

0x757b,	// (0x000156f2) main_cset6_slider_pane_t5

0xda07,	// (0x0001bb7e) main_cset6_slider_pane_t7_ParamLimits

0xda07,	// (0x0001bb7e) main_cset6_slider_pane_t7

0x75a6,	// (0x0001571d) main_cset6_slider_pane_t8_ParamLimits

0x75a6,	// (0x0001571d) main_cset6_slider_pane_t8

0x75ca,	// (0x00015741) main_cset6_slider_pane_t9_ParamLimits

0x75ca,	// (0x00015741) main_cset6_slider_pane_t9

0x75ee,	// (0x00015765) main_cset6_slider_pane_t10_ParamLimits

0x75ee,	// (0x00015765) main_cset6_slider_pane_t10

0x7612,	// (0x00015789) main_cset6_slider_pane_t11_ParamLimits

0x7612,	// (0x00015789) main_cset6_slider_pane_t11

0xda3d,	// (0x0001bbb4) main_cset6_slider_pane_t14_ParamLimits

0xda3d,	// (0x0001bbb4) main_cset6_slider_pane_t14

0xda76,	// (0x0001bbed) main_cset6_slider_pane_t15_ParamLimits

0xda76,	// (0x0001bbed) main_cset6_slider_pane_t15

0x000b,

0xfbc2,	// (0x0001dd39) main_cset6_slider_pane_t_ParamLimits

0xfbc2,	// (0x0001dd39) main_cset6_slider_pane_t

0xd0ec,	// (0x0001b263) cset_slider_pane_g1_copy1

0xd0f5,	// (0x0001b26c) cset_slider_pane_g2_copy1

0xd0fe,	// (0x0001b275) cset_slider_pane_g3_copy1

0x9173,	// (0x000172ea) bg_popup_sub_pane_cp011_copy1

0xdb80,	// (0x0001bcf7) main_cset_text_pane_g1_copy1

0xd1eb,	// (0x0001b362) main_cset_text_pane_t1_copy1

0xd1f9,	// (0x0001b370) main_cset_text_pane_t2_copy1

0xd207,	// (0x0001b37e) main_cset_text_pane_t3_copy1

0xd215,	// (0x0001b38c) main_cset_text_pane_t4_copy1

0xd223,	// (0x0001b39a) main_cset_text_pane_t5_copy1

0xdb88,	// (0x0001bcff) main_cset_text_pane_t6_copy1

0xdb96,	// (0x0001bd0d) main_cset_text_pane_t7_copy1

0x7413,	// (0x0001558a) main_cset_text2_pane_t1_copy1

0x91e3,	// (0x0001735a) main_ncimui_pane

0x3ae8,	// (0x00011c5f) popup_query_ncimui_window_ParamLimits

0x3ae8,	// (0x00011c5f) popup_query_ncimui_window

0xc372,	// (0x0001a4e9) field_cale_ev2_pane_g4_ParamLimits

0xc372,	// (0x0001a4e9) field_cale_ev2_pane_g4

0x5707,	// (0x0001387e) cell_video_dialer_keypad_pane_g2_ParamLimits

0x5707,	// (0x0001387e) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8a0,	// (0x0001da17) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8a0,	// (0x0001da17) cell_video_dialer_keypad_pane_g

0x571f,	// (0x00013896) cell_video_dialer_keypad_pane_t1

0x9173,	// (0x000172ea) bg_popup_window_pane_cp012

0xa482,	// (0x000185f9) heading_pane_cp06

0xdbc2,	// (0x0001bd39) ncim_query_content_pane

0x9173,	// (0x000172ea) bg_popup_heading_pane_cp01

0xdbca,	// (0x0001bd41) ncim_heading_pane_t1

0xdbd8,	// (0x0001bd4f) ncim_indicator_popup_pane

0xdbea,	// (0x0001bd61) ncim_query_button_pane

0xdbfe,	// (0x0001bd75) ncim_query_content_pane_t1

0xdc10,	// (0x0001bd87) ncim_query_content_pane_t2

0x0005,

0xfc06,	// (0x0001dd7d) ncim_query_content_pane_t

0xdc4a,	// (0x0001bdc1) ncim_query_list_pane

0xdc5c,	// (0x0001bdd3) ncim_query_popup_pane

0xdbd8,	// (0x0001bd4f) ncim_indicator_popup_pane_ParamLimits

0x775c,	// (0x000158d3) ncim_query_content_pane_g1_ParamLimits

0x775c,	// (0x000158d3) ncim_query_content_pane_g1

0xdbfe,	// (0x0001bd75) ncim_query_content_pane_t1_ParamLimits

0xdc10,	// (0x0001bd87) ncim_query_content_pane_t2_ParamLimits

0x7768,	// (0x000158df) ncim_query_content_pane_t3_ParamLimits

0x7768,	// (0x000158df) ncim_query_content_pane_t3

0x7790,	// (0x00015907) ncim_query_content_pane_t4_ParamLimits

0x7790,	// (0x00015907) ncim_query_content_pane_t4

0x77b8,	// (0x0001592f) ncim_query_content_pane_t5_ParamLimits

0x77b8,	// (0x0001592f) ncim_query_content_pane_t5

0xdc22,	// (0x0001bd99) ncim_query_content_pane_t6_ParamLimits

0xdc22,	// (0x0001bd99) ncim_query_content_pane_t6

0xfc06,	// (0x0001dd7d) ncim_query_content_pane_t_ParamLimits

0xdc4a,	// (0x0001bdc1) ncim_query_list_pane_ParamLimits

0xdc5c,	// (0x0001bdd3) ncim_query_popup_pane_ParamLimits

0xdc70,	// (0x0001bde7) wait_bar_pane_cp04

0x9173,	// (0x000172ea) input_focus_pane_cp011

0xdc78,	// (0x0001bdef) ncim_query_popup_pane_t1

0xdc86,	// (0x0001bdfd) ncim_list_query_list_pane_ParamLimits

0xdc86,	// (0x0001bdfd) ncim_list_query_list_pane

0x9173,	// (0x000172ea) bg_button_pane_cp027

0xdc99,	// (0x0001be10) ncim_query_button_pane_g1

0x9173,	// (0x000172ea) list_highlight_pane_cp012

0xdca3,	// (0x0001be1a) ncim_list_query_list_pane_g1

0xdcab,	// (0x0001be22) ncim_list_query_list_pane_t1

0xcd95,	// (0x0001af0c) cam4_indicators_pane_g3_ParamLimits

0xcd95,	// (0x0001af0c) cam4_indicators_pane_g3

0xce13,	// (0x0001af8a) vid4_indicators_pane_g5_ParamLimits

0xce13,	// (0x0001af8a) vid4_indicators_pane_g5

0xd4db,	// (0x0001b652) vid4_progress_pane_g5_ParamLimits

0xd4db,	// (0x0001b652) vid4_progress_pane_g5

0x764a,	// (0x000157c1) main_ncimui_pane_g1

0x76b0,	// (0x00015827) ncimui_group_query_pane_ParamLimits

0x76b0,	// (0x00015827) ncimui_group_query_pane

0x76f8,	// (0x0001586f) ncimui_list_pane_ParamLimits

0x76f8,	// (0x0001586f) ncimui_list_pane

0x771f,	// (0x00015896) ncimui_text_pane_ParamLimits

0x771f,	// (0x00015896) ncimui_text_pane

0x77e0,	// (0x00015957) ncimui_text_pane_t1_ParamLimits

0x77e0,	// (0x00015957) ncimui_text_pane_t1

0xdcb9,	// (0x0001be30) ncimui_list_single_graphic_pane_ParamLimits

0xdcb9,	// (0x0001be30) ncimui_list_single_graphic_pane

0x77fe,	// (0x00015975) ncimui_query_pane_ParamLimits

0x77fe,	// (0x00015975) ncimui_query_pane

0x9173,	// (0x000172ea) list_highlight_pane_cp013

0xdcc9,	// (0x0001be40) ncim_list_query_list_pane_t1_copy1

0xdca3,	// (0x0001be1a) ncim_list_single_graphic_pane_g1

0xdcd7,	// (0x0001be4e) ncim_query_button_pane_cp01

0xdce3,	// (0x0001be5a) ncim_query_entry_pane_ParamLimits

0xdce3,	// (0x0001be5a) ncim_query_entry_pane

0xdcf6,	// (0x0001be6d) ncimui_query_pane_g1

0xdd02,	// (0x0001be79) ncimui_query_pane_t1_ParamLimits

0xdd02,	// (0x0001be79) ncimui_query_pane_t1

0x91e3,	// (0x0001735a) input_focus_pane_cp012

0xdd1b,	// (0x0001be92) ncim_query_entry_pane_t1

0x9996,	// (0x00017b0d) main_im_pane_ParamLimits

0x91e3,	// (0x0001735a) main_mobtv_pane_ParamLimits

0x91e3,	// (0x0001735a) main_mobtv_pane

0x6517,	// (0x0001468e) main_cset6_slider_pane_g18_ParamLimits

0x6517,	// (0x0001468e) main_cset6_slider_pane_g18

0x6547,	// (0x000146be) main_cset6_slider_pane_g19_ParamLimits

0x6547,	// (0x000146be) main_cset6_slider_pane_g19

0xdd2d,	// (0x0001bea4) bg_main_mobtv_pane_ParamLimits

0xdd2d,	// (0x0001bea4) bg_main_mobtv_pane

0x7811,	// (0x00015988) main_mobtv_info_pane

0x781a,	// (0x00015991) main_mobtv_loading_pane_ParamLimits

0x781a,	// (0x00015991) main_mobtv_loading_pane

0xdd3b,	// (0x0001beb2) main_mobtv_pg_channel_list_pane

0xdd45,	// (0x0001bebc) main_mobtv_pg_hdr_pane

0x7827,	// (0x0001599e) main_mobtv_programe_curr_pane_ParamLimits

0x7827,	// (0x0001599e) main_mobtv_programe_curr_pane

0x7834,	// (0x000159ab) main_mobtv_programe_next_pane_ParamLimits

0x7834,	// (0x000159ab) main_mobtv_programe_next_pane

0xdd4e,	// (0x0001bec5) popup_mobtv_noti_window

0xc0a6,	// (0x0001a21d) main_tv_pg_hdr_pane_g1

0xdd56,	// (0x0001becd) main_tv_pg_hdr_pane_g2

0xdd5e,	// (0x0001bed5) main_tv_pg_hdr_pane_g3

0xdd66,	// (0x0001bedd) main_tv_pg_hdr_pane_g4

0xdd6e,	// (0x0001bee5) main_tv_pg_hdr_pane_g5

0xdd78,	// (0x0001beef) main_tv_pg_hdr_pane_g6

0xdd82,	// (0x0001bef9) main_tv_pg_hdr_pane_g7

0xdd8c,	// (0x0001bf03) main_tv_pg_hdr_pane_g8

0xdd96,	// (0x0001bf0d) main_tv_pg_hdr_pane_g9

0xdda0,	// (0x0001bf17) main_tv_pg_hdr_pane_g10

0xddaa,	// (0x0001bf21) main_tv_pg_hdr_pane_g11

0x000a,

0xfc13,	// (0x0001dd8a) main_tv_pg_hdr_pane_g

0xddb4,	// (0x0001bf2b) main_tv_pg_hdr_pane_t1

0xddc2,	// (0x0001bf39) main_tv_pg_hdr_pane_t2

0xddd0,	// (0x0001bf47) main_tv_pg_hdr_pane_t3

0xdde0,	// (0x0001bf57) main_tv_pg_hdr_pane_t4

0xddf0,	// (0x0001bf67) main_tv_pg_hdr_pane_t5

0x0004,

0xfc2a,	// (0x0001dda1) main_tv_pg_hdr_pane_t

0xde00,	// (0x0001bf77) single_mobtv_pg_channel_pane_ParamLimits

0xde00,	// (0x0001bf77) single_mobtv_pg_channel_pane

0xde12,	// (0x0001bf89) single_mobtv_pg_channel_table_pane

0xde1b,	// (0x0001bf92) single_mobtv_pg_channel_thumb_pane

0xde24,	// (0x0001bf9b) single_tv_pg_channel_pane_g1

0xde2d,	// (0x0001bfa4) single_tv_pg_channel_pane_g2

0x0001,

0xfc35,	// (0x0001ddac) single_tv_pg_channel_pane_g

0xc30d,	// (0x0001a484) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xc30d,	// (0x0001a484) bg_single_mobtv_pg_channel_thumb_pane

0xde36,	// (0x0001bfad) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xde36,	// (0x0001bfad) single_mobtv_pg_channel_thumb_pane_g1

0xde44,	// (0x0001bfbb) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xde44,	// (0x0001bfbb) single_mobtv_pg_channel_thumb_pane_g2

0xde50,	// (0x0001bfc7) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xde50,	// (0x0001bfc7) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc3a,	// (0x0001ddb1) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc3a,	// (0x0001ddb1) single_mobtv_pg_channel_thumb_pane_g

0xde5c,	// (0x0001bfd3) single_mobtv_pg_channel_thumb_pane_t1

0xde6a,	// (0x0001bfe1) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc41,	// (0x0001ddb8) single_mobtv_pg_channel_thumb_pane_t

0xc0a6,	// (0x0001a21d) bg_single_mobtv_pg_channel_table_pane_g1

0xc0a6,	// (0x0001a21d) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6ec,	// (0x0001d863) bg_single_mobtv_pg_channel_table_pane_g

0xde78,	// (0x0001bfef) single_mobtv_pg_channel_table_pane_t1

0xde86,	// (0x0001bffd) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc46,	// (0x0001ddbd) single_mobtv_pg_channel_table_pane_t

0x7849,	// (0x000159c0) main_mobtv_info_pane_g1_ParamLimits

0x7849,	// (0x000159c0) main_mobtv_info_pane_g1

0x7867,	// (0x000159de) main_mobtv_info_pane_t1_ParamLimits

0x7867,	// (0x000159de) main_mobtv_info_pane_t1

0x78df,	// (0x00015a56) main_mobtv_info_pane_t2_ParamLimits

0x78df,	// (0x00015a56) main_mobtv_info_pane_t2

0x0002,

0xfc50,	// (0x0001ddc7) main_mobtv_info_pane_t_ParamLimits

0xfc50,	// (0x0001ddc7) main_mobtv_info_pane_t

0x796e,	// (0x00015ae5) wait_bar_pane_cp05

0x7980,	// (0x00015af7) main_mobtv_loading_pane_g1_ParamLimits

0x7980,	// (0x00015af7) main_mobtv_loading_pane_g1

0x7993,	// (0x00015b0a) main_mobtv_loading_pane_g2_ParamLimits

0x7993,	// (0x00015b0a) main_mobtv_loading_pane_g2

0x799f,	// (0x00015b16) main_mobtv_loading_pane_g3_ParamLimits

0x799f,	// (0x00015b16) main_mobtv_loading_pane_g3

0x0002,

0xfc57,	// (0x0001ddce) main_mobtv_loading_pane_g_ParamLimits

0xfc57,	// (0x0001ddce) main_mobtv_loading_pane_g

0xde94,	// (0x0001c00b) main_mobtv_loading_pane_t1_ParamLimits

0xde94,	// (0x0001c00b) main_mobtv_loading_pane_t1

0xdeac,	// (0x0001c023) main_mobtv_loading_pane_t2_ParamLimits

0xdeac,	// (0x0001c023) main_mobtv_loading_pane_t2

0x0001,

0xfc5e,	// (0x0001ddd5) main_mobtv_loading_pane_t_ParamLimits

0xfc5e,	// (0x0001ddd5) main_mobtv_loading_pane_t

0x79b2,	// (0x00015b29) wait_bar_pane_cp06_ParamLimits

0x79b2,	// (0x00015b29) wait_bar_pane_cp06

0xded0,	// (0x0001c047) main_mobtv_programe_curr_pane_t1

0xdede,	// (0x0001c055) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc63,	// (0x0001ddda) main_mobtv_programe_curr_pane_t

0xdeec,	// (0x0001c063) main_mobtv_programe_next_pane_t1

0xdefa,	// (0x0001c071) main_mobtv_programe_next_pane_t2

0xdf08,	// (0x0001c07f) main_mobtv_programe_next_pane_t3

0x0002,

0xfc68,	// (0x0001dddf) main_mobtv_programe_next_pane_t

0x9173,	// (0x000172ea) bg_popup_mobtv_noti_window_pane

0xdf16,	// (0x0001c08d) popup_mobtv_noti_window_g1

0xdf1e,	// (0x0001c095) popup_mobtv_noti_window_t1

0xdf2c,	// (0x0001c0a3) popup_mobtv_noti_window_t2

0x0001,

0xfc6f,	// (0x0001dde6) popup_mobtv_noti_window_t

0xc0a6,	// (0x0001a21d) bg_popup_mobtv_noti_window_pane_g1

0x9173,	// (0x000172ea) sc_clock_pane

0x9173,	// (0x000172ea) main_fs_bigclock_pane

0x7164,	// (0x000152db) blid2_tripm_pane_t4_ParamLimits

0x7164,	// (0x000152db) blid2_tripm_pane_t4

0x79c1,	// (0x00015b38) sc_clock_pane_g1_ParamLimits

0x79c1,	// (0x00015b38) sc_clock_pane_g1

0x79d3,	// (0x00015b4a) sc_clock_pane_t1_ParamLimits

0x79d3,	// (0x00015b4a) sc_clock_pane_t1

0x79f5,	// (0x00015b6c) sc_clock_pane_t2_ParamLimits

0x79f5,	// (0x00015b6c) sc_clock_pane_t2

0x7a0d,	// (0x00015b84) sc_clock_pane_t3_ParamLimits

0x7a0d,	// (0x00015b84) sc_clock_pane_t3

0x0004,

0xfc74,	// (0x0001ddeb) sc_clock_pane_t_ParamLimits

0xfc74,	// (0x0001ddeb) sc_clock_pane_t

0x87a9,	// (0x00016920) main_fs_bigclock_indicator_pane_ParamLimits

0x87a9,	// (0x00016920) main_fs_bigclock_indicator_pane

0xc2dd,	// (0x0001a454) main_fs_bigclock_pane_g1_ParamLimits

0xc2dd,	// (0x0001a454) main_fs_bigclock_pane_g1

0x87b5,	// (0x0001692c) main_fs_bigclock_pane_t1_ParamLimits

0x87b5,	// (0x0001692c) main_fs_bigclock_pane_t1

0x87c7,	// (0x0001693e) main_fs_bigclock_pane_t2_ParamLimits

0x87c7,	// (0x0001693e) main_fs_bigclock_pane_t2

0x87d9,	// (0x00016950) main_fs_bigclock_pane_t3_ParamLimits

0x87d9,	// (0x00016950) main_fs_bigclock_pane_t3

0x0002,

0xfe73,	// (0x0001dfea) main_fs_bigclock_pane_t_ParamLimits

0xfe73,	// (0x0001dfea) main_fs_bigclock_pane_t

0xebf3,	// (0x0001cd6a) main_fs_bigclock_indicator_pane_g1

0xdbf2,	// (0x0001bd69) ncim_query_content_pane_g2_ParamLimits

0xdbf2,	// (0x0001bd69) ncim_query_content_pane_g2

0x0001,

0xfc01,	// (0x0001dd78) ncim_query_content_pane_g_ParamLimits

0xfc01,	// (0x0001dd78) ncim_query_content_pane_g

0x7a26,	// (0x00015b9d) sc_clock_pane_t4_ParamLimits

0x7a26,	// (0x00015b9d) sc_clock_pane_t4

0x91e3,	// (0x0001735a) main_radioblah_pane

0xccdb,	// (0x0001ae52) cell_call4_button_pane_t1_copy1_ParamLimits

0xccdb,	// (0x0001ae52) cell_call4_button_pane_t1_copy1

0x7662,	// (0x000157d9) main_ncimui_pane_t1_ParamLimits

0x7662,	// (0x000157d9) main_ncimui_pane_t1

0x767c,	// (0x000157f3) main_ncimui_pane_t2_ParamLimits

0x767c,	// (0x000157f3) main_ncimui_pane_t2

0x0002,

0xfbfa,	// (0x0001dd71) main_ncimui_pane_t_ParamLimits

0xfbfa,	// (0x0001dd71) main_ncimui_pane_t

0xe075,	// (0x0001c1ec) main_radioblah_anim_pane_ParamLimits

0xe075,	// (0x0001c1ec) main_radioblah_anim_pane

0xe086,	// (0x0001c1fd) main_radioblah_info_pane_ParamLimits

0xe086,	// (0x0001c1fd) main_radioblah_info_pane

0xe09a,	// (0x0001c211) main_radioblah_pane_t1_ParamLimits

0xe09a,	// (0x0001c211) main_radioblah_pane_t1

0xe0b6,	// (0x0001c22d) main_radioblah_pane_t2_ParamLimits

0xe0b6,	// (0x0001c22d) main_radioblah_pane_t2

0x0003,

0xfc95,	// (0x0001de0c) main_radioblah_pane_t_ParamLimits

0xfc95,	// (0x0001de0c) main_radioblah_pane_t

0x7ad5,	// (0x00015c4c) main_radioblah_rocker_ctrl_pane_ParamLimits

0x7ad5,	// (0x00015c4c) main_radioblah_rocker_ctrl_pane

0xe0fe,	// (0x0001c275) main_radioblah_info_pane_t1_ParamLimits

0xe0fe,	// (0x0001c275) main_radioblah_info_pane_t1

0x7b2d,	// (0x00015ca4) main_radioblah_info_pane_t2_ParamLimits

0x7b2d,	// (0x00015ca4) main_radioblah_info_pane_t2

0x0003,

0xfc9e,	// (0x0001de15) main_radioblah_info_pane_t_ParamLimits

0xfc9e,	// (0x0001de15) main_radioblah_info_pane_t

0xc0a6,	// (0x0001a21d) main_radioblah_rocker_ctrl_pane_g1

0x7bdf,	// (0x00015d56) main_radioblah_rocker_ctrl_pane_g2

0x7be7,	// (0x00015d5e) main_radioblah_rocker_ctrl_pane_g3

0x7bef,	// (0x00015d66) main_radioblah_rocker_ctrl_pane_g4

0x7bf7,	// (0x00015d6e) main_radioblah_rocker_ctrl_pane_g5

0x7bff,	// (0x00015d76) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfca7,	// (0x0001de1e) main_radioblah_rocker_ctrl_pane_g

0x7413,	// (0x0001558a) main_cset_text2_pane_t1_copy1_ParamLimits

0xcd65,	// (0x0001aedc) cam4_image_uncrop_qvga_pane

0xcdbe,	// (0x0001af35) vid4_image_uncrop_qcif_pane

0xd732,	// (0x0001b8a9) cam6_image_uncrop_qvga_pane_ParamLimits

0xd732,	// (0x0001b8a9) cam6_image_uncrop_qvga_pane

0xd808,	// (0x0001b97f) vid6_image_uncrop_qcif_pane_ParamLimits

0xd808,	// (0x0001b97f) vid6_image_uncrop_qcif_pane

0x9173,	// (0x000172ea) bg_popup_preview_window_pane_cp03

0xdba4,	// (0x0001bd1b) list_cset_text2_pane

0xdbac,	// (0x0001bd23) main_cset6_text2_pane_g1

0xdbb4,	// (0x0001bd2b) main_cset6_text2_pane_t1

0x7c07,	// (0x00015d7e) list_cset_text2_pane_t1_ParamLimits

0x7c07,	// (0x00015d7e) list_cset_text2_pane_t1

0x91e3,	// (0x0001735a) main_radioblah_pane_ParamLimits

0x795a,	// (0x00015ad1) main_mobtv_info_pane_t3_ParamLimits

0x795a,	// (0x00015ad1) main_mobtv_info_pane_t3

0x7ac3,	// (0x00015c3a) main_radioblah_pane_g1

0x7afd,	// (0x00015c74) main_radioblah_info_pane_g1

0x7b84,	// (0x00015cfb) main_radioblah_info_pane_t3_ParamLimits

0x7b84,	// (0x00015cfb) main_radioblah_info_pane_t3

0x2460,	// (0x000105d7) highlight_cell_cale_month_pane_ParamLimits

0x2460,	// (0x000105d7) highlight_cell_cale_month_pane

0x9173,	// (0x000172ea) main_phob_fisheye_pane

0xc42d,	// (0x0001a5a4) scroll_pane_cp0031_ParamLimits

0xc42d,	// (0x0001a5a4) scroll_pane_cp0031

0xd916,	// (0x0001ba8d) wait_bar_pane_cp08_ParamLimits

0x7497,	// (0x0001560e) cset_list_set_pane_copy1_ParamLimits

0xe138,	// (0x0001c2af) highlight_cell_cale_month_pane_g1

0x7c24,	// (0x00015d9b) highlight_cell_cale_month_pane_t1

0xd4af,	// (0x0001b626) list_gen_pane_cp01

0xcff3,	// (0x0001b16a) scroll_pane_01

0xe140,	// (0x0001c2b7) list_single_double_fisheye_pane

0xe149,	// (0x0001c2c0) list_double_fisheye_pane_g1_ParamLimits

0xe149,	// (0x0001c2c0) list_double_fisheye_pane_g1

0xe155,	// (0x0001c2cc) list_double_fisheye_pane_g2_ParamLimits

0xe155,	// (0x0001c2cc) list_double_fisheye_pane_g2

0xe169,	// (0x0001c2e0) list_double_fisheye_pane_g3_ParamLimits

0xe169,	// (0x0001c2e0) list_double_fisheye_pane_g3

0x0004,

0xfcb4,	// (0x0001de2b) list_double_fisheye_pane_g_ParamLimits

0xfcb4,	// (0x0001de2b) list_double_fisheye_pane_g

0xe192,	// (0x0001c309) list_double_fisheye_pane_t1_ParamLimits

0xe192,	// (0x0001c309) list_double_fisheye_pane_t1

0xe1ad,	// (0x0001c324) list_double_fisheye_pane_t2_ParamLimits

0xe1ad,	// (0x0001c324) list_double_fisheye_pane_t2

0x0001,

0xfcbf,	// (0x0001de36) list_double_fisheye_pane_t_ParamLimits

0xfcbf,	// (0x0001de36) list_double_fisheye_pane_t

0x9173,	// (0x000172ea) main_call5_pane

0x7a51,	// (0x00015bc8) sc_swipe_pane_ParamLimits

0x7a51,	// (0x00015bc8) sc_swipe_pane

0x7c45,	// (0x00015dbc) call5_image_pane_ParamLimits

0x7c45,	// (0x00015dbc) call5_image_pane

0x7c62,	// (0x00015dd9) call5_swipe_1_pane_ParamLimits

0x7c62,	// (0x00015dd9) call5_swipe_1_pane

0x7c75,	// (0x00015dec) call5_swipe_2_pane_ParamLimits

0x7c75,	// (0x00015dec) call5_swipe_2_pane

0x7ca0,	// (0x00015e17) popup_call5_audio_first_window_ParamLimits

0x7ca0,	// (0x00015e17) popup_call5_audio_first_window

0xc30d,	// (0x0001a484) call5_swipe_1_pane_g1_ParamLimits

0xc30d,	// (0x0001a484) call5_swipe_1_pane_g1

0xe1cf,	// (0x0001c346) call5_swipe_1_pane_g2_ParamLimits

0xe1cf,	// (0x0001c346) call5_swipe_1_pane_g2

0x0001,

0xfcc4,	// (0x0001de3b) call5_swipe_1_pane_g_ParamLimits

0xfcc4,	// (0x0001de3b) call5_swipe_1_pane_g

0xe1db,	// (0x0001c352) call5_swipe_1_pane_t1_ParamLimits

0xe1db,	// (0x0001c352) call5_swipe_1_pane_t1

0xc30d,	// (0x0001a484) call5_swipe_2_pane_g1_ParamLimits

0xc30d,	// (0x0001a484) call5_swipe_2_pane_g1

0xe1f0,	// (0x0001c367) call5_swipe_2_pane_g2_ParamLimits

0xe1f0,	// (0x0001c367) call5_swipe_2_pane_g2

0x0001,

0xfcc9,	// (0x0001de40) call5_swipe_2_pane_g_ParamLimits

0xfcc9,	// (0x0001de40) call5_swipe_2_pane_g

0xe1fc,	// (0x0001c373) call5_swipe_2_pane_t1_ParamLimits

0xe1fc,	// (0x0001c373) call5_swipe_2_pane_t1

0xe211,	// (0x0001c388) sc_swipe_pane_g1_ParamLimits

0xe211,	// (0x0001c388) sc_swipe_pane_g1

0xe21e,	// (0x0001c395) sc_swipe_pane_g2_ParamLimits

0xe21e,	// (0x0001c395) sc_swipe_pane_g2

0x0001,

0xfcce,	// (0x0001de45) sc_swipe_pane_g_ParamLimits

0xfcce,	// (0x0001de45) sc_swipe_pane_g

0xe22a,	// (0x0001c3a1) sc_swipe_pane_t1_ParamLimits

0xe22a,	// (0x0001c3a1) sc_swipe_pane_t1

0x9173,	// (0x000172ea) main_cmail_launcher_pane

0x7cb1,	// (0x00015e28) aid_size_cell_cmail_l_ParamLimits

0x7cb1,	// (0x00015e28) aid_size_cell_cmail_l

0x7ccb,	// (0x00015e42) grid_cmail_l_pane_ParamLimits

0x7ccb,	// (0x00015e42) grid_cmail_l_pane

0x7ce6,	// (0x00015e5d) cell_cmail_l_pane_ParamLimits

0x7ce6,	// (0x00015e5d) cell_cmail_l_pane

0x7d0c,	// (0x00015e83) cell_cmail_l_pane_g1_ParamLimits

0x7d0c,	// (0x00015e83) cell_cmail_l_pane_g1

0x7d18,	// (0x00015e8f) cell_cmail_l_pane_t1_ParamLimits

0x7d18,	// (0x00015e8f) cell_cmail_l_pane_t1

0xe23f,	// (0x0001c3b6) cell_cmail_l_pane_t2_ParamLimits

0xe23f,	// (0x0001c3b6) cell_cmail_l_pane_t2

0x0001,

0xfcd3,	// (0x0001de4a) cell_cmail_l_pane_t_ParamLimits

0xfcd3,	// (0x0001de4a) cell_cmail_l_pane_t

0x91e3,	// (0x0001735a) grid_highlight_pane_cp018_ParamLimits

0x91e3,	// (0x0001735a) grid_highlight_pane_cp018

0x0aad,	// (0x0000ec24) main2_pane_ParamLimits

0x0aad,	// (0x0000ec24) main2_pane

0x9a6f,	// (0x00017be6) popup_sp_fs_action_menu_bg_pane_g1

0x9a77,	// (0x00017bee) popup_sp_fs_action_menu_bg_pane_g2

0x9a7f,	// (0x00017bf6) popup_sp_fs_action_menu_bg_pane_g3

0x9a87,	// (0x00017bfe) popup_sp_fs_action_menu_bg_pane_g4

0x9a8f,	// (0x00017c06) popup_sp_fs_action_menu_bg_pane_g5

0x9a97,	// (0x00017c0e) popup_sp_fs_action_menu_bg_pane_g6

0x9a9f,	// (0x00017c16) popup_sp_fs_action_menu_bg_pane_g7

0x9aa7,	// (0x00017c1e) popup_sp_fs_action_menu_bg_pane_g8

0x9aaf,	// (0x00017c26) popup_sp_fs_action_menu_bg_pane_g9

0x9ab7,	// (0x00017c2e) popup_sp_fs_action_menu_bg_pane_g10

0x9ab7,	// (0x00017c2e) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf198,	// (0x0001d30f) popup_sp_fs_action_menu_bg_pane_g

0x9c99,	// (0x00017e10) list_medium_line_x2_t3_g3_g1_ParamLimits

0x9c99,	// (0x00017e10) list_medium_line_x2_t3_g3_g1

0x9ca5,	// (0x00017e1c) list_medium_line_x2_t3_g3_g2_ParamLimits

0x9ca5,	// (0x00017e1c) list_medium_line_x2_t3_g3_g2

0x9cb1,	// (0x00017e28) list_medium_line_x2_t3_g3_g3_ParamLimits

0x9cb1,	// (0x00017e28) list_medium_line_x2_t3_g3_g3

0x0002,

0xf248,	// (0x0001d3bf) list_medium_line_x2_t3_g3_g_ParamLimits

0xf248,	// (0x0001d3bf) list_medium_line_x2_t3_g3_g

0x9cbd,	// (0x00017e34) list_medium_line_x2_t3_g3_t1_ParamLimits

0x9cbd,	// (0x00017e34) list_medium_line_x2_t3_g3_t1

0x1778,	// (0x0000f8ef) list_medium_line_x2_t3_g3_t2_ParamLimits

0x1778,	// (0x0000f8ef) list_medium_line_x2_t3_g3_t2

0x9cd2,	// (0x00017e49) list_medium_line_x2_t3_g3_t3_ParamLimits

0x9cd2,	// (0x00017e49) list_medium_line_x2_t3_g3_t3

0x0002,

0xf24f,	// (0x0001d3c6) list_medium_line_x2_t3_g3_t_ParamLimits

0xf24f,	// (0x0001d3c6) list_medium_line_x2_t3_g3_t

0x9c99,	// (0x00017e10) list_medium_line_x2_t3_g2_g1_ParamLimits

0x9c99,	// (0x00017e10) list_medium_line_x2_t3_g2_g1

0x9cb1,	// (0x00017e28) list_medium_line_x2_t3_g2_g2_ParamLimits

0x9cb1,	// (0x00017e28) list_medium_line_x2_t3_g2_g2

0x0001,

0xf256,	// (0x0001d3cd) list_medium_line_x2_t3_g2_g_ParamLimits

0xf256,	// (0x0001d3cd) list_medium_line_x2_t3_g2_g

0x9ce7,	// (0x00017e5e) list_medium_line_x2_t3_g2_t1_ParamLimits

0x9ce7,	// (0x00017e5e) list_medium_line_x2_t3_g2_t1

0x9cfd,	// (0x00017e74) list_medium_line_x2_t3_g2_t2_ParamLimits

0x9cfd,	// (0x00017e74) list_medium_line_x2_t3_g2_t2

0x9d0f,	// (0x00017e86) list_medium_line_x2_t3_g2_t3_ParamLimits

0x9d0f,	// (0x00017e86) list_medium_line_x2_t3_g2_t3

0x0002,

0xf25b,	// (0x0001d3d2) list_medium_line_x2_t3_g2_t_ParamLimits

0xf25b,	// (0x0001d3d2) list_medium_line_x2_t3_g2_t

0x9c99,	// (0x00017e10) list_medium_line_x2_t4_g4_g1_ParamLimits

0x9c99,	// (0x00017e10) list_medium_line_x2_t4_g4_g1

0x9d2c,	// (0x00017ea3) list_medium_line_x2_t4_g4_g2_ParamLimits

0x9d2c,	// (0x00017ea3) list_medium_line_x2_t4_g4_g2

0x9ca5,	// (0x00017e1c) list_medium_line_x2_t4_g4_g3_ParamLimits

0x9ca5,	// (0x00017e1c) list_medium_line_x2_t4_g4_g3

0x9d38,	// (0x00017eaf) list_medium_line_x2_t4_g4_g4_ParamLimits

0x9d38,	// (0x00017eaf) list_medium_line_x2_t4_g4_g4

0x0003,

0xf262,	// (0x0001d3d9) list_medium_line_x2_t4_g4_g_ParamLimits

0xf262,	// (0x0001d3d9) list_medium_line_x2_t4_g4_g

0x178c,	// (0x0000f903) list_medium_line_x2_t4_g4_t1_ParamLimits

0x178c,	// (0x0000f903) list_medium_line_x2_t4_g4_t1

0x17a3,	// (0x0000f91a) list_medium_line_x2_t4_g4_t2_ParamLimits

0x17a3,	// (0x0000f91a) list_medium_line_x2_t4_g4_t2

0x17b8,	// (0x0000f92f) list_medium_line_x2_t4_g4_t3_ParamLimits

0x17b8,	// (0x0000f92f) list_medium_line_x2_t4_g4_t3

0x9d44,	// (0x00017ebb) list_medium_line_x2_t4_g4_t4_ParamLimits

0x9d44,	// (0x00017ebb) list_medium_line_x2_t4_g4_t4

0x0003,

0xf26b,	// (0x0001d3e2) list_medium_line_x2_t4_g4_t_ParamLimits

0xf26b,	// (0x0001d3e2) list_medium_line_x2_t4_g4_t

0x9c99,	// (0x00017e10) list_medium_line_x2_t2_g4_g1_ParamLimits

0x9c99,	// (0x00017e10) list_medium_line_x2_t2_g4_g1

0x9d2c,	// (0x00017ea3) list_medium_line_x2_t2_g4_g2_ParamLimits

0x9d2c,	// (0x00017ea3) list_medium_line_x2_t2_g4_g2

0x9ca5,	// (0x00017e1c) list_medium_line_x2_t2_g4_g3_ParamLimits

0x9ca5,	// (0x00017e1c) list_medium_line_x2_t2_g4_g3

0x9cb1,	// (0x00017e28) list_medium_line_x2_t2_g4_g4_ParamLimits

0x9cb1,	// (0x00017e28) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2d2,	// (0x0001d449) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2d2,	// (0x0001d449) list_medium_line_x2_t2_g4_g

0xa02e,	// (0x000181a5) list_medium_line_x2_t2_g4_t1_ParamLimits

0xa02e,	// (0x000181a5) list_medium_line_x2_t2_g4_t1

0x9cd2,	// (0x00017e49) list_medium_line_x2_t2_g4_t2_ParamLimits

0x9cd2,	// (0x00017e49) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2db,	// (0x0001d452) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2db,	// (0x0001d452) list_medium_line_x2_t2_g4_t

0x9c99,	// (0x00017e10) list_medium_line_x2_t2_g3_g1_ParamLimits

0x9c99,	// (0x00017e10) list_medium_line_x2_t2_g3_g1

0x9ca5,	// (0x00017e1c) list_medium_line_x2_t2_g3_g2_ParamLimits

0x9ca5,	// (0x00017e1c) list_medium_line_x2_t2_g3_g2

0x9cb1,	// (0x00017e28) list_medium_line_x2_t2_g3_g3_ParamLimits

0x9cb1,	// (0x00017e28) list_medium_line_x2_t2_g3_g3

0x0002,

0xf248,	// (0x0001d3bf) list_medium_line_x2_t2_g3_g_ParamLimits

0xf248,	// (0x0001d3bf) list_medium_line_x2_t2_g3_g

0xa043,	// (0x000181ba) list_medium_line_x2_t2_g3_t1_ParamLimits

0xa043,	// (0x000181ba) list_medium_line_x2_t2_g3_t1

0x9cd2,	// (0x00017e49) list_medium_line_x2_t2_g3_t2_ParamLimits

0x9cd2,	// (0x00017e49) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2e0,	// (0x0001d457) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2e0,	// (0x0001d457) list_medium_line_x2_t2_g3_t

0x2646,	// (0x000107bd) main_sp_fs_list_pane_ParamLimits

0x2646,	// (0x000107bd) main_sp_fs_list_pane

0x2652,	// (0x000107c9) sp_fs_scroll_pane_ParamLimits

0x2652,	// (0x000107c9) sp_fs_scroll_pane

0x265e,	// (0x000107d5) list_medium_line_x2_t3_t1

0x266e,	// (0x000107e5) list_medium_line_x2_t3_t2

0xa227,	// (0x0001839e) list_medium_line_x2_t3_t3

0x0002,

0xf32b,	// (0x0001d4a2) list_medium_line_x2_t3_t

0x267c,	// (0x000107f3) list_medium_line_x3_t4_t1

0x268c,	// (0x00010803) list_medium_line_x3_t4_t2

0xa235,	// (0x000183ac) list_medium_line_x3_t4_t3

0xa227,	// (0x0001839e) list_medium_line_x3_t4_t4

0x0003,

0xf332,	// (0x0001d4a9) list_medium_line_x3_t4_t

0x269a,	// (0x00010811) list_medium_line_x4_t5_t1

0x26aa,	// (0x00010821) list_medium_line_x4_t5_t2

0xa235,	// (0x000183ac) list_medium_line_x4_t5_t3

0xa243,	// (0x000183ba) list_medium_line_x4_t5_t4

0xa227,	// (0x0001839e) list_medium_line_x4_t5_t5

0x0004,

0xf33b,	// (0x0001d4b2) list_medium_line_x4_t5_t

0x9c99,	// (0x00017e10) list_medium_line_t4_g4_g1_ParamLimits

0x9c99,	// (0x00017e10) list_medium_line_t4_g4_g1

0x9d38,	// (0x00017eaf) list_medium_line_t4_g4_g2_ParamLimits

0x9d38,	// (0x00017eaf) list_medium_line_t4_g4_g2

0xa251,	// (0x000183c8) list_medium_line_t4_g4_g3_ParamLimits

0xa251,	// (0x000183c8) list_medium_line_t4_g4_g3

0x9cb1,	// (0x00017e28) list_medium_line_t4_g4_g4_ParamLimits

0x9cb1,	// (0x00017e28) list_medium_line_t4_g4_g4

0x0003,

0xf346,	// (0x0001d4bd) list_medium_line_t4_g4_g_ParamLimits

0xf346,	// (0x0001d4bd) list_medium_line_t4_g4_g

0xa25d,	// (0x000183d4) list_medium_line_t4_g4_t1_ParamLimits

0xa25d,	// (0x000183d4) list_medium_line_t4_g4_t1

0xa272,	// (0x000183e9) list_medium_line_t4_g4_t2_ParamLimits

0xa272,	// (0x000183e9) list_medium_line_t4_g4_t2

0xa287,	// (0x000183fe) list_medium_line_t4_g4_t3_ParamLimits

0xa287,	// (0x000183fe) list_medium_line_t4_g4_t3

0x9cd2,	// (0x00017e49) list_medium_line_t4_g4_t4_ParamLimits

0x9cd2,	// (0x00017e49) list_medium_line_t4_g4_t4

0x0003,

0xf34f,	// (0x0001d4c6) list_medium_line_t4_g4_t_ParamLimits

0xf34f,	// (0x0001d4c6) list_medium_line_t4_g4_t

0x2756,	// (0x000108cd) chi_dic_find_pane_g1

0x38c6,	// (0x00011a3d) main_tport_pane

0xd138,	// (0x0001b2af) list_medium_line_plain_t1

0xd18a,	// (0x0001b301) list_medium_line_t2_g2_g1_ParamLimits

0xd18a,	// (0x0001b301) list_medium_line_t2_g2_g1

0xd196,	// (0x0001b30d) list_medium_line_t2_g2_g2_ParamLimits

0xd196,	// (0x0001b30d) list_medium_line_t2_g2_g2

0x0001,

0xfa0b,	// (0x0001db82) list_medium_line_t2_g2_g_ParamLimits

0xfa0b,	// (0x0001db82) list_medium_line_t2_g2_g

0x68f5,	// (0x00014a6c) list_medium_line_t2_g2_t1_ParamLimits

0x68f5,	// (0x00014a6c) list_medium_line_t2_g2_t1

0x690f,	// (0x00014a86) list_medium_line_t2_g2_t2_ParamLimits

0x690f,	// (0x00014a86) list_medium_line_t2_g2_t2

0x0001,

0xfa10,	// (0x0001db87) list_medium_line_t2_g2_t_ParamLimits

0xfa10,	// (0x0001db87) list_medium_line_t2_g2_t

0xd53a,	// (0x0001b6b1) aid_sp_fs_list_icon_a_sm

0xd542,	// (0x0001b6b9) aid_sp_fs_list_icon_d

0xd54a,	// (0x0001b6c1) aid_sp_fs_text_primary

0xd553,	// (0x0001b6ca) aid_sp_fs_text_secondary

0xd55c,	// (0x0001b6d3) list_medium_line

0xd55c,	// (0x0001b6d3) list_medium_line_g2

0xd55c,	// (0x0001b6d3) list_medium_line_g3

0xd55c,	// (0x0001b6d3) list_medium_line_plain

0xd55c,	// (0x0001b6d3) list_medium_line_plain_t2

0xd55c,	// (0x0001b6d3) list_medium_line_plain_t3

0xd55c,	// (0x0001b6d3) list_medium_line_right_icon

0xd55c,	// (0x0001b6d3) list_medium_line_right_iconx2

0xd55c,	// (0x0001b6d3) list_medium_line_t2

0xd55c,	// (0x0001b6d3) list_medium_line_t2_g2

0xd55c,	// (0x0001b6d3) list_medium_line_t2_g3

0xd55c,	// (0x0001b6d3) list_medium_line_t2_right_icon

0xd55c,	// (0x0001b6d3) list_medium_line_t2_right_iconx2

0xd55c,	// (0x0001b6d3) list_medium_line_t3

0xd55c,	// (0x0001b6d3) list_medium_line_t3_g2

0xd55c,	// (0x0001b6d3) list_medium_line_t3_g3

0xd55c,	// (0x0001b6d3) list_medium_line_t3_right_iconx2

0xd565,	// (0x0001b6dc) list_medium_line_t4_g4

0xd56e,	// (0x0001b6e5) list_medium_line_x2

0xd56e,	// (0x0001b6e5) list_medium_line_x2_t2_g2

0xd56e,	// (0x0001b6e5) list_medium_line_x2_t2_g3

0xd56e,	// (0x0001b6e5) list_medium_line_x2_t2_g4

0xd56e,	// (0x0001b6e5) list_medium_line_x2_t3

0xd56e,	// (0x0001b6e5) list_medium_line_x2_t3_g2

0xd56e,	// (0x0001b6e5) list_medium_line_x2_t3_g3

0xd56e,	// (0x0001b6e5) list_medium_line_x2_t3_g4

0xd56e,	// (0x0001b6e5) list_medium_line_x2_t4_g2

0xd56e,	// (0x0001b6e5) list_medium_line_x2_t4_g4

0xd577,	// (0x0001b6ee) list_medium_line_x3

0xd577,	// (0x0001b6ee) list_medium_line_x3_t4

0xd577,	// (0x0001b6ee) list_medium_line_x3_t4_g4

0xd565,	// (0x0001b6dc) list_medium_line_x4_t4

0xd565,	// (0x0001b6dc) list_medium_line_x4_t4_g7

0xd565,	// (0x0001b6dc) list_medium_line_x4_t5

0xd580,	// (0x0001b6f7) list_single_fs_dyc_pane_ParamLimits

0xd580,	// (0x0001b6f7) list_single_fs_dyc_pane

0x9c99,	// (0x00017e10) list_medium_line_x4_t4_g7_g1_ParamLimits

0x9c99,	// (0x00017e10) list_medium_line_x4_t4_g7_g1

0xdaaf,	// (0x0001bc26) list_medium_line_x4_t4_g7_g2_ParamLimits

0xdaaf,	// (0x0001bc26) list_medium_line_x4_t4_g7_g2

0xdabb,	// (0x0001bc32) list_medium_line_x4_t4_g7_g3_ParamLimits

0xdabb,	// (0x0001bc32) list_medium_line_x4_t4_g7_g3

0xdaca,	// (0x0001bc41) list_medium_line_x4_t4_g7_g4_ParamLimits

0xdaca,	// (0x0001bc41) list_medium_line_x4_t4_g7_g4

0xdad6,	// (0x0001bc4d) list_medium_line_x4_t4_g7_g5_ParamLimits

0xdad6,	// (0x0001bc4d) list_medium_line_x4_t4_g7_g5

0xdae5,	// (0x0001bc5c) list_medium_line_x4_t4_g7_g6_ParamLimits

0xdae5,	// (0x0001bc5c) list_medium_line_x4_t4_g7_g6

0xdaf4,	// (0x0001bc6b) list_medium_line_x4_t4_g7_g7_ParamLimits

0xdaf4,	// (0x0001bc6b) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbdb,	// (0x0001dd52) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbdb,	// (0x0001dd52) list_medium_line_x4_t4_g7_g

0xdb00,	// (0x0001bc77) list_medium_line_x4_t4_g7_t1_ParamLimits

0xdb00,	// (0x0001bc77) list_medium_line_x4_t4_g7_t1

0xdb15,	// (0x0001bc8c) list_medium_line_x4_t4_g7_t2_ParamLimits

0xdb15,	// (0x0001bc8c) list_medium_line_x4_t4_g7_t2

0xdb2a,	// (0x0001bca1) list_medium_line_x4_t4_g7_t3_ParamLimits

0xdb2a,	// (0x0001bca1) list_medium_line_x4_t4_g7_t3

0xdb3f,	// (0x0001bcb6) list_medium_line_x4_t4_g7_t4_ParamLimits

0xdb3f,	// (0x0001bcb6) list_medium_line_x4_t4_g7_t4

0xdb51,	// (0x0001bcc8) list_medium_line_x4_t4_g7_t5_ParamLimits

0xdb51,	// (0x0001bcc8) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbea,	// (0x0001dd61) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbea,	// (0x0001dd61) list_medium_line_x4_t4_g7_t

0xdb63,	// (0x0001bcda) list_single_dyc_row_pane_ParamLimits

0xdb63,	// (0x0001bcda) list_single_dyc_row_pane

0x7c32,	// (0x00015da9) call5_gesture_pane_ParamLimits

0x7c32,	// (0x00015da9) call5_gesture_pane

0x7c88,	// (0x00015dff) call5_windows_pane_ParamLimits

0x7c88,	// (0x00015dff) call5_windows_pane

0x7d2e,	// (0x00015ea5) call5_swipe_1_pane_cp_ParamLimits

0x7d2e,	// (0x00015ea5) call5_swipe_1_pane_cp

0x7d3a,	// (0x00015eb1) call5_swipe_2_pane_cp_ParamLimits

0x7d3a,	// (0x00015eb1) call5_swipe_2_pane_cp

0xa6ff,	// (0x00018876) call5_image_pane_cp

0x7d46,	// (0x00015ebd) popup_call5_audio_first_window_cp_ParamLimits

0x7d46,	// (0x00015ebd) popup_call5_audio_first_window_cp

0xe211,	// (0x0001c388) call5_swipe_1_pane_g1_cp_ParamLimits

0xe211,	// (0x0001c388) call5_swipe_1_pane_g1_cp

0xe251,	// (0x0001c3c8) call5_swipe_1_pane_g2_cp

0xe22a,	// (0x0001c3a1) call5_swipe_1_pane_t1_cp_ParamLimits

0xe22a,	// (0x0001c3a1) call5_swipe_1_pane_t1_cp

0xe211,	// (0x0001c388) call5_swipe_2_pane_g1_cp_ParamLimits

0xe211,	// (0x0001c388) call5_swipe_2_pane_g1_cp

0xe259,	// (0x0001c3d0) call5_swipe_2_pane_g2_cp

0xe261,	// (0x0001c3d8) call5_swipe_2_pane_t1_cp_ParamLimits

0xe261,	// (0x0001c3d8) call5_swipe_2_pane_t1_cp

0x91e3,	// (0x0001735a) main_sp_fs_email_pane

0xe276,	// (0x0001c3ed) main_sp_fs_listscroll_pane_te

0xe27f,	// (0x0001c3f6) popup_sp_fs_action_menu_pane_ParamLimits

0xe27f,	// (0x0001c3f6) popup_sp_fs_action_menu_pane

0xc0a6,	// (0x0001a21d) bg_sp_fs_ctrlbar_pane_g1

0xe2bf,	// (0x0001c436) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe2c8,	// (0x0001c43f) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe2d1,	// (0x0001c448) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc0a6,	// (0x0001a21d) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcd8,	// (0x0001de4f) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xbe89,	// (0x0001a000) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xbe89,	// (0x0001a000) bg_sp_fs_ctrlbar_ddmenu_pane

0xe2da,	// (0x0001c451) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe2da,	// (0x0001c451) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe2e6,	// (0x0001c45d) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe2e6,	// (0x0001c45d) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfce1,	// (0x0001de58) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfce1,	// (0x0001de58) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe2f2,	// (0x0001c469) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe2f2,	// (0x0001c469) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xe30c,	// (0x0001c483) list_medium_line_t2_right_icon_g1

0x7d52,	// (0x00015ec9) list_medium_line_t2_right_icon_t1

0x7d62,	// (0x00015ed9) list_medium_line_t2_right_icon_t2

0x0001,

0xfce6,	// (0x0001de5d) list_medium_line_t2_right_icon_t

0xbb9e,	// (0x00019d15) bg_sp_fs_ctrlbar_pane_ParamLimits

0xbb9e,	// (0x00019d15) bg_sp_fs_ctrlbar_pane

0x7dbf,	// (0x00015f36) main_sp_fs_ctrlbar_button_pane_cp01

0x7dc9,	// (0x00015f40) main_sp_fs_ctrlbar_ddmenu_pane

0x9c99,	// (0x00017e10) main_sp_fs_ctrlbar_pane_g1

0xe34c,	// (0x0001c4c3) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfceb,	// (0x0001de62) main_sp_fs_ctrlbar_pane_g

0xe358,	// (0x0001c4cf) main_sp_fs_ctrlbar_pane_t1

0x7dd3,	// (0x00015f4a) main_sp_fs_ctrlbar_pane

0x7df7,	// (0x00015f6e) main_sp_fs_listscroll_pane_te_cp01

0x7e17,	// (0x00015f8e) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x7e17,	// (0x00015f8e) popup_sp_fs_action_menu_pane_cp01

0x91e3,	// (0x0001735a) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x91e3,	// (0x0001735a) bg_sp_fs_highlight_list_pane_cp01

0xe37d,	// (0x0001c4f4) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xe37d,	// (0x0001c4f4) sp_fs_action_menu_list_gene_pane_g1

0xe38c,	// (0x0001c503) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe38c,	// (0x0001c503) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcf5,	// (0x0001de6c) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcf5,	// (0x0001de6c) sp_fs_action_menu_list_gene_pane_g

0xe399,	// (0x0001c510) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xe399,	// (0x0001c510) sp_fs_action_menu_list_gene_pane_t1

0xe3b1,	// (0x0001c528) sp_fs_action_menu_list_gene_pane_ParamLimits

0xe3b1,	// (0x0001c528) sp_fs_action_menu_list_gene_pane

0xe3ce,	// (0x0001c545) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe3ce,	// (0x0001c545) popup_sp_fs_action_menu_bg_pane

0xe3dc,	// (0x0001c553) sp_fs_action_menu_list_pane_ParamLimits

0xe3dc,	// (0x0001c553) sp_fs_action_menu_list_pane

0xe3fa,	// (0x0001c571) sp_fs_scroll_pane_cp01_ParamLimits

0xe3fa,	// (0x0001c571) sp_fs_scroll_pane_cp01

0x7e47,	// (0x00015fbe) list_medium_line_plain_t2_t1

0x7e57,	// (0x00015fce) list_medium_line_plain_t2_t2

0x0001,

0xfcfa,	// (0x0001de71) list_medium_line_plain_t2_t

0x7e67,	// (0x00015fde) list_medium_line_plain_t3_t1

0x7e77,	// (0x00015fee) list_medium_line_plain_t3_t2

0x7e85,	// (0x00015ffc) list_medium_line_plain_t3_t3

0x0002,

0xfcff,	// (0x0001de76) list_medium_line_plain_t3_t

0x9c99,	// (0x00017e10) list_medium_line_x2_t2_g2_g1_ParamLimits

0x9c99,	// (0x00017e10) list_medium_line_x2_t2_g2_g1

0x9cb1,	// (0x00017e28) list_medium_line_x2_t2_g2_g2_ParamLimits

0x9cb1,	// (0x00017e28) list_medium_line_x2_t2_g2_g2

0x0001,

0xf256,	// (0x0001d3cd) list_medium_line_x2_t2_g2_g_ParamLimits

0xf256,	// (0x0001d3cd) list_medium_line_x2_t2_g2_g

0xa25d,	// (0x000183d4) list_medium_line_x2_t2_g2_t1_ParamLimits

0xa25d,	// (0x000183d4) list_medium_line_x2_t2_g2_t1

0x9cd2,	// (0x00017e49) list_medium_line_x2_t2_g2_t2_ParamLimits

0x9cd2,	// (0x00017e49) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd06,	// (0x0001de7d) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd06,	// (0x0001de7d) list_medium_line_x2_t2_g2_t

0x9c99,	// (0x00017e10) list_medium_line_x2_t4_g2_g1_ParamLimits

0x9c99,	// (0x00017e10) list_medium_line_x2_t4_g2_g1

0x9cb1,	// (0x00017e28) list_medium_line_x2_t4_g2_g2_ParamLimits

0x9cb1,	// (0x00017e28) list_medium_line_x2_t4_g2_g2

0x0001,

0xf256,	// (0x0001d3cd) list_medium_line_x2_t4_g2_g_ParamLimits

0xf256,	// (0x0001d3cd) list_medium_line_x2_t4_g2_g

0x7e93,	// (0x0001600a) list_medium_line_x2_t4_g2_t1_ParamLimits

0x7e93,	// (0x0001600a) list_medium_line_x2_t4_g2_t1

0x7eaa,	// (0x00016021) list_medium_line_x2_t4_g2_t2_ParamLimits

0x7eaa,	// (0x00016021) list_medium_line_x2_t4_g2_t2

0x7ebf,	// (0x00016036) list_medium_line_x2_t4_g2_t3_ParamLimits

0x7ebf,	// (0x00016036) list_medium_line_x2_t4_g2_t3

0x9cd2,	// (0x00017e49) list_medium_line_x2_t4_g2_t4_ParamLimits

0x9cd2,	// (0x00017e49) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd0b,	// (0x0001de82) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd0b,	// (0x0001de82) list_medium_line_x2_t4_g2_t

0xe420,	// (0x0001c597) list_medium_line_t3_right_iconx2_g1

0xe30c,	// (0x0001c483) list_medium_line_t3_right_iconx2_g2

0x7ed1,	// (0x00016048) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd14,	// (0x0001de8b) list_medium_line_t3_right_iconx2_g

0x7edb,	// (0x00016052) list_medium_line_t3_right_iconx2_t1

0x7eeb,	// (0x00016062) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd1b,	// (0x0001de92) list_medium_line_t3_right_iconx2_t

0x9c99,	// (0x00017e10) list_medium_line_x3_t4_g4_g1_ParamLimits

0x9c99,	// (0x00017e10) list_medium_line_x3_t4_g4_g1

0x9ca5,	// (0x00017e1c) list_medium_line_x3_t4_g4_g2_ParamLimits

0x9ca5,	// (0x00017e1c) list_medium_line_x3_t4_g4_g2

0x9d38,	// (0x00017eaf) list_medium_line_x3_t4_g4_g3_ParamLimits

0x9d38,	// (0x00017eaf) list_medium_line_x3_t4_g4_g3

0xe428,	// (0x0001c59f) list_medium_line_x3_t4_g4_g4_ParamLimits

0xe428,	// (0x0001c59f) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd20,	// (0x0001de97) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd20,	// (0x0001de97) list_medium_line_x3_t4_g4_g

0x7ef9,	// (0x00016070) list_medium_line_x3_t4_g4_t1_ParamLimits

0x7ef9,	// (0x00016070) list_medium_line_x3_t4_g4_t1

0x7f10,	// (0x00016087) list_medium_line_x3_t4_g4_t2_ParamLimits

0x7f10,	// (0x00016087) list_medium_line_x3_t4_g4_t2

0xa272,	// (0x000183e9) list_medium_line_x3_t4_g4_t3_ParamLimits

0xa272,	// (0x000183e9) list_medium_line_x3_t4_g4_t3

0xe434,	// (0x0001c5ab) list_medium_line_x3_t4_g4_t4_ParamLimits

0xe434,	// (0x0001c5ab) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd29,	// (0x0001dea0) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd29,	// (0x0001dea0) list_medium_line_x3_t4_g4_t

0x7f2b,	// (0x000160a2) list_single_dyc_row_text_pane_t1_ParamLimits

0x7f2b,	// (0x000160a2) list_single_dyc_row_text_pane_t1

0x7f74,	// (0x000160eb) list_single_dyc_row_text_pane_t2_ParamLimits

0x7f74,	// (0x000160eb) list_single_dyc_row_text_pane_t2

0xe451,	// (0x0001c5c8) list_single_dyc_row_text_pane_t3_ParamLimits

0xe451,	// (0x0001c5c8) list_single_dyc_row_text_pane_t3

0x0002,

0xfd32,	// (0x0001dea9) list_single_dyc_row_text_pane_t_ParamLimits

0xfd32,	// (0x0001dea9) list_single_dyc_row_text_pane_t

0xe463,	// (0x0001c5da) list_single_dyc_row_pane_g1_ParamLimits

0xe463,	// (0x0001c5da) list_single_dyc_row_pane_g1

0xe46f,	// (0x0001c5e6) list_single_dyc_row_pane_g2_ParamLimits

0xe46f,	// (0x0001c5e6) list_single_dyc_row_pane_g2

0xe47b,	// (0x0001c5f2) list_single_dyc_row_pane_g3_ParamLimits

0xe47b,	// (0x0001c5f2) list_single_dyc_row_pane_g3

0xe487,	// (0x0001c5fe) list_single_dyc_row_pane_g4_ParamLimits

0xe487,	// (0x0001c5fe) list_single_dyc_row_pane_g4

0x0003,

0xfd39,	// (0x0001deb0) list_single_dyc_row_pane_g_ParamLimits

0xfd39,	// (0x0001deb0) list_single_dyc_row_pane_g

0xe493,	// (0x0001c60a) list_single_dyc_row_text_pane_ParamLimits

0xe493,	// (0x0001c60a) list_single_dyc_row_text_pane

0x9173,	// (0x000172ea) bg_sp_fs_scroll_pane

0xe4b2,	// (0x0001c629) thumb_sp_fs_scroll_pane

0xd18a,	// (0x0001b301) list_medium_line_g1_ParamLimits

0xd18a,	// (0x0001b301) list_medium_line_g1

0xe4bb,	// (0x0001c632) list_medium_line_t1_ParamLimits

0xe4bb,	// (0x0001c632) list_medium_line_t1

0x9c99,	// (0x00017e10) list_medium_line_x2_g1_ParamLimits

0x9c99,	// (0x00017e10) list_medium_line_x2_g1

0x9ca5,	// (0x00017e1c) list_medium_line_x2_g2_ParamLimits

0x9ca5,	// (0x00017e1c) list_medium_line_x2_g2

0x0001,

0xfd42,	// (0x0001deb9) list_medium_line_x2_g_ParamLimits

0xfd42,	// (0x0001deb9) list_medium_line_x2_g

0xe4d0,	// (0x0001c647) list_medium_line_x2_t1_ParamLimits

0xe4d0,	// (0x0001c647) list_medium_line_x2_t1

0x9c99,	// (0x00017e10) list_medium_line_x3_g1_ParamLimits

0x9c99,	// (0x00017e10) list_medium_line_x3_g1

0x9ca5,	// (0x00017e1c) list_medium_line_x3_g2_ParamLimits

0x9ca5,	// (0x00017e1c) list_medium_line_x3_g2

0x0001,

0xfd42,	// (0x0001deb9) list_medium_line_x3_g_ParamLimits

0xfd42,	// (0x0001deb9) list_medium_line_x3_g

0xe4d0,	// (0x0001c647) list_medium_line_x3_t1_ParamLimits

0xe4d0,	// (0x0001c647) list_medium_line_x3_t1

0xe4e6,	// (0x0001c65d) thumb_sp_fs_scroll_pane_g1

0xe4ef,	// (0x0001c666) thumb_sp_fs_scroll_pane_g2

0xe4f8,	// (0x0001c66f) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x0001debe) thumb_sp_fs_scroll_pane_g

0xe4e6,	// (0x0001c65d) bg_sp_fs_scroll_pane_g1

0xe4ef,	// (0x0001c666) bg_sp_fs_scroll_pane_g2

0xe4f8,	// (0x0001c66f) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x0001debe) bg_sp_fs_scroll_pane_g

0x9c99,	// (0x00017e10) list_medium_line_x2_t3_g4_g1_ParamLimits

0x9c99,	// (0x00017e10) list_medium_line_x2_t3_g4_g1

0x9d2c,	// (0x00017ea3) list_medium_line_x2_t3_g4_g2_ParamLimits

0x9d2c,	// (0x00017ea3) list_medium_line_x2_t3_g4_g2

0x9ca5,	// (0x00017e1c) list_medium_line_x2_t3_g4_g3_ParamLimits

0x9ca5,	// (0x00017e1c) list_medium_line_x2_t3_g4_g3

0x9cb1,	// (0x00017e28) list_medium_line_x2_t3_g4_g4_ParamLimits

0x9cb1,	// (0x00017e28) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2d2,	// (0x0001d449) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2d2,	// (0x0001d449) list_medium_line_x2_t3_g4_g

0x7fce,	// (0x00016145) list_medium_line_x2_t3_g4_t1_ParamLimits

0x7fce,	// (0x00016145) list_medium_line_x2_t3_g4_t1

0x7fe8,	// (0x0001615f) list_medium_line_x2_t3_g4_t2_ParamLimits

0x7fe8,	// (0x0001615f) list_medium_line_x2_t3_g4_t2

0x9cd2,	// (0x00017e49) list_medium_line_x2_t3_g4_t3_ParamLimits

0x9cd2,	// (0x00017e49) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd4e,	// (0x0001dec5) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd4e,	// (0x0001dec5) list_medium_line_x2_t3_g4_t

0xd18a,	// (0x0001b301) list_medium_line_g2_g1_ParamLimits

0xd18a,	// (0x0001b301) list_medium_line_g2_g1

0xd196,	// (0x0001b30d) list_medium_line_g2_g2_ParamLimits

0xd196,	// (0x0001b30d) list_medium_line_g2_g2

0x0001,

0xfa0b,	// (0x0001db82) list_medium_line_g2_g_ParamLimits

0xfa0b,	// (0x0001db82) list_medium_line_g2_g

0xe501,	// (0x0001c678) list_medium_line_g2_t1_ParamLimits

0xe501,	// (0x0001c678) list_medium_line_g2_t1

0xd18a,	// (0x0001b301) list_medium_line_t3_g2_g1_ParamLimits

0xd18a,	// (0x0001b301) list_medium_line_t3_g2_g1

0xd196,	// (0x0001b30d) list_medium_line_t3_g2_g2_ParamLimits

0xd196,	// (0x0001b30d) list_medium_line_t3_g2_g2

0x0001,

0xfa0b,	// (0x0001db82) list_medium_line_t3_g2_g_ParamLimits

0xfa0b,	// (0x0001db82) list_medium_line_t3_g2_g

0x8001,	// (0x00016178) list_medium_line_t3_g2_t1_ParamLimits

0x8001,	// (0x00016178) list_medium_line_t3_g2_t1

0x801b,	// (0x00016192) list_medium_line_t3_g2_t2_ParamLimits

0x801b,	// (0x00016192) list_medium_line_t3_g2_t2

0x8030,	// (0x000161a7) list_medium_line_t3_g2_t3_ParamLimits

0x8030,	// (0x000161a7) list_medium_line_t3_g2_t3

0x0002,

0xfd55,	// (0x0001decc) list_medium_line_t3_g2_t_ParamLimits

0xfd55,	// (0x0001decc) list_medium_line_t3_g2_t

0xe30c,	// (0x0001c483) list_medium_line_right_icon_g1

0xe516,	// (0x0001c68d) list_medium_line_right_icon_t1

0xd18a,	// (0x0001b301) list_medium_line_t2_g1_ParamLimits

0xd18a,	// (0x0001b301) list_medium_line_t2_g1

0x804a,	// (0x000161c1) list_medium_line_t2_t1_ParamLimits

0x804a,	// (0x000161c1) list_medium_line_t2_t1

0x8064,	// (0x000161db) list_medium_line_t2_t2_ParamLimits

0x8064,	// (0x000161db) list_medium_line_t2_t2

0x0001,

0xfd5c,	// (0x0001ded3) list_medium_line_t2_t_ParamLimits

0xfd5c,	// (0x0001ded3) list_medium_line_t2_t

0xd18a,	// (0x0001b301) list_medium_line_t3_g1_ParamLimits

0xd18a,	// (0x0001b301) list_medium_line_t3_g1

0x807d,	// (0x000161f4) list_medium_line_t3_t1_ParamLimits

0x807d,	// (0x000161f4) list_medium_line_t3_t1

0x8094,	// (0x0001620b) list_medium_line_t3_t2_ParamLimits

0x8094,	// (0x0001620b) list_medium_line_t3_t2

0x80a9,	// (0x00016220) list_medium_line_t3_t3_ParamLimits

0x80a9,	// (0x00016220) list_medium_line_t3_t3

0x0002,

0xfd61,	// (0x0001ded8) list_medium_line_t3_t_ParamLimits

0xfd61,	// (0x0001ded8) list_medium_line_t3_t

0xd18a,	// (0x0001b301) list_medium_line_g3_g1_ParamLimits

0xd18a,	// (0x0001b301) list_medium_line_g3_g1

0xe524,	// (0x0001c69b) list_medium_line_g3_g2_ParamLimits

0xe524,	// (0x0001c69b) list_medium_line_g3_g2

0xd196,	// (0x0001b30d) list_medium_line_g3_g3_ParamLimits

0xd196,	// (0x0001b30d) list_medium_line_g3_g3

0x0002,

0xfd68,	// (0x0001dedf) list_medium_line_g3_g_ParamLimits

0xfd68,	// (0x0001dedf) list_medium_line_g3_g

0xe530,	// (0x0001c6a7) list_medium_line_g3_t1_ParamLimits

0xe530,	// (0x0001c6a7) list_medium_line_g3_t1

0xd18a,	// (0x0001b301) list_medium_line_t2_g3_g1_ParamLimits

0xd18a,	// (0x0001b301) list_medium_line_t2_g3_g1

0xe524,	// (0x0001c69b) list_medium_line_t2_g3_g2_ParamLimits

0xe524,	// (0x0001c69b) list_medium_line_t2_g3_g2

0xd196,	// (0x0001b30d) list_medium_line_t2_g3_g3_ParamLimits

0xd196,	// (0x0001b30d) list_medium_line_t2_g3_g3

0x0002,

0xfd68,	// (0x0001dedf) list_medium_line_t2_g3_g_ParamLimits

0xfd68,	// (0x0001dedf) list_medium_line_t2_g3_g

0x80bb,	// (0x00016232) list_medium_line_t2_g3_t1_ParamLimits

0x80bb,	// (0x00016232) list_medium_line_t2_g3_t1

0x80d2,	// (0x00016249) list_medium_line_t2_g3_t2_ParamLimits

0x80d2,	// (0x00016249) list_medium_line_t2_g3_t2

0x0001,

0xfd6f,	// (0x0001dee6) list_medium_line_t2_g3_t_ParamLimits

0xfd6f,	// (0x0001dee6) list_medium_line_t2_g3_t

0xd18a,	// (0x0001b301) list_medium_line_t3_g3_g1_ParamLimits

0xd18a,	// (0x0001b301) list_medium_line_t3_g3_g1

0xe524,	// (0x0001c69b) list_medium_line_t3_g3_g2_ParamLimits

0xe524,	// (0x0001c69b) list_medium_line_t3_g3_g2

0xd196,	// (0x0001b30d) list_medium_line_t3_g3_g3_ParamLimits

0xd196,	// (0x0001b30d) list_medium_line_t3_g3_g3

0x0002,

0xfd68,	// (0x0001dedf) list_medium_line_t3_g3_g_ParamLimits

0xfd68,	// (0x0001dedf) list_medium_line_t3_g3_g

0x80ed,	// (0x00016264) list_medium_line_t3_g3_t1_ParamLimits

0x80ed,	// (0x00016264) list_medium_line_t3_g3_t1

0x8101,	// (0x00016278) list_medium_line_t3_g3_t2_ParamLimits

0x8101,	// (0x00016278) list_medium_line_t3_g3_t2

0x8113,	// (0x0001628a) list_medium_line_t3_g3_t3_ParamLimits

0x8113,	// (0x0001628a) list_medium_line_t3_g3_t3

0x0002,

0xfd74,	// (0x0001deeb) list_medium_line_t3_g3_t_ParamLimits

0xfd74,	// (0x0001deeb) list_medium_line_t3_g3_t

0xe420,	// (0x0001c597) list_medium_line_right_iconx2_g1

0xe30c,	// (0x0001c483) list_medium_line_right_iconx2_g2

0x0001,

0xfd7b,	// (0x0001def2) list_medium_line_right_iconx2_g

0xe545,	// (0x0001c6bc) list_medium_line_right_iconx2_t1

0xe420,	// (0x0001c597) list_medium_line_t2_right_iconx2_g1

0xe30c,	// (0x0001c483) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd7b,	// (0x0001def2) list_medium_line_t2_right_iconx2_g

0x8127,	// (0x0001629e) list_medium_line_t2_right_iconx2_t1

0x8137,	// (0x000162ae) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd80,	// (0x0001def7) list_medium_line_t2_right_iconx2_t

0xe553,	// (0x0001c6ca) list_medium_line_x4_t4_t1

0x8149,	// (0x000162c0) list_medium_line_x4_t4_t2

0x8159,	// (0x000162d0) list_medium_line_x4_t4_t3

0x8169,	// (0x000162e0) list_medium_line_x4_t4_t4

0x0003,

0xfd85,	// (0x0001defc) list_medium_line_x4_t4_t

0x81bc,	// (0x00016333) tport_appsw_pane_ParamLimits

0x81bc,	// (0x00016333) tport_appsw_pane

0x81cd,	// (0x00016344) tport_contact_pane_ParamLimits

0x81cd,	// (0x00016344) tport_contact_pane

0x81e6,	// (0x0001635d) tport_listscroll_pane_ParamLimits

0x81e6,	// (0x0001635d) tport_listscroll_pane

0x8201,	// (0x00016378) cell_tport_appsw_pane_ParamLimits

0x8201,	// (0x00016378) cell_tport_appsw_pane

0xce6b,	// (0x0001afe2) tport_appsw_pane_g1_ParamLimits

0xce6b,	// (0x0001afe2) tport_appsw_pane_g1

0xe561,	// (0x0001c6d8) tport_contact_pane_g1

0xe56a,	// (0x0001c6e1) tport_contact_pane_t1

0xe578,	// (0x0001c6ef) tport_contact_pane_t2

0x0001,

0xfd8e,	// (0x0001df05) tport_contact_pane_t

0xe586,	// (0x0001c6fd) list_tport_pane

0xe58f,	// (0x0001c706) scroll_pane_cp_030

0xe5a0,	// (0x0001c717) cell_tport_appsw_pane_g1

0xe5b0,	// (0x0001c727) cell_tport_appsw_pane_t1

0x9173,	// (0x000172ea) grid_highlight_pane_cp019

0x8241,	// (0x000163b8) list_tport_double_graphic_pane_ParamLimits

0x8241,	// (0x000163b8) list_tport_double_graphic_pane

0x91e3,	// (0x0001735a) list_highlight_pane_cp023_ParamLimits

0x91e3,	// (0x0001735a) list_highlight_pane_cp023

0x824e,	// (0x000163c5) list_tport_double_graphic_pane_g1_ParamLimits

0x824e,	// (0x000163c5) list_tport_double_graphic_pane_g1

0x825b,	// (0x000163d2) list_tport_double_graphic_pane_t1_ParamLimits

0x825b,	// (0x000163d2) list_tport_double_graphic_pane_t1

0x8270,	// (0x000163e7) list_tport_double_graphic_pane_t2_ParamLimits

0x8270,	// (0x000163e7) list_tport_double_graphic_pane_t2

0x0001,

0xfd9a,	// (0x0001df11) list_tport_double_graphic_pane_t_ParamLimits

0xfd9a,	// (0x0001df11) list_tport_double_graphic_pane_t

0x9173,	// (0x000172ea) main_cale_note_pane

0x5fcb,	// (0x00014142) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x5fcb,	// (0x00014142) cell_vitu2_function_top_wide_pane_cp01

0x796e,	// (0x00015ae5) wait_bar_pane_cp05_ParamLimits

0x9173,	// (0x000172ea) listscroll_cmail_pane

0xe5c6,	// (0x0001c73d) list_cmail_pane

0x828c,	// (0x00016403) list_cmail_body_pane

0x82a1,	// (0x00016418) list_single_cmail_header_caption_pane

0x82ba,	// (0x00016431) list_single_cmail_header_detail_pane_ParamLimits

0x82ba,	// (0x00016431) list_single_cmail_header_detail_pane

0x82e3,	// (0x0001645a) list_single_cmail_header_caption_pane_t1

0x82f3,	// (0x0001646a) list_single_cmail_header_detail_pane_g1_ParamLimits

0x82f3,	// (0x0001646a) list_single_cmail_header_detail_pane_g1

0xe5e6,	// (0x0001c75d) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe5e6,	// (0x0001c75d) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd9f,	// (0x0001df16) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd9f,	// (0x0001df16) list_single_cmail_header_detail_pane_g

0xe5ff,	// (0x0001c776) list_single_cmail_header_detail_pane_t1_ParamLimits

0xe5ff,	// (0x0001c776) list_single_cmail_header_detail_pane_t1

0xe631,	// (0x0001c7a8) list_single_cmail_header_editor_pane_bg_ParamLimits

0xe631,	// (0x0001c7a8) list_single_cmail_header_editor_pane_bg

0xe643,	// (0x0001c7ba) list_cmail_body_pane_g1

0xe64c,	// (0x0001c7c3) list_cmail_body_pane_t1

0xced9,	// (0x0001b050) list_single_cmail_header_editor_pane_bg_g1

0x9f4d,	// (0x000180c4) list_single_cmail_header_editor_pane_bg_g1_copy1

0xcee9,	// (0x0001b060) list_single_cmail_header_editor_pane_bg_g1_copy2

0xcee1,	// (0x0001b058) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd162,	// (0x0001b2d9) list_single_cmail_header_editor_pane_bg_g1_copy4

0xcf09,	// (0x0001b080) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xcef9,	// (0x0001b070) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xcf01,	// (0x0001b078) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x9f2d,	// (0x000180a4) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8331,	// (0x000164a8) calenote_gesture_pane_ParamLimits

0x8331,	// (0x000164a8) calenote_gesture_pane

0x8351,	// (0x000164c8) calenote_window_pane_ParamLimits

0x8351,	// (0x000164c8) calenote_window_pane

0xe65a,	// (0x0001c7d1) popup_note_window_cp01

0x836d,	// (0x000164e4) calenote_swipe_1_pane_ParamLimits

0x836d,	// (0x000164e4) calenote_swipe_1_pane

0x7d3a,	// (0x00015eb1) calenote_swipe_2_pane_ParamLimits

0x7d3a,	// (0x00015eb1) calenote_swipe_2_pane

0xe211,	// (0x0001c388) calenote_swipe_1_pane_g1_ParamLimits

0xe211,	// (0x0001c388) calenote_swipe_1_pane_g1

0xe21e,	// (0x0001c395) calenote_swipe_1_pane_g2_ParamLimits

0xe21e,	// (0x0001c395) calenote_swipe_1_pane_g2

0x0001,

0xfcce,	// (0x0001de45) calenote_swipe_1_pane_g_ParamLimits

0xfcce,	// (0x0001de45) calenote_swipe_1_pane_g

0xe66c,	// (0x0001c7e3) calenote_swipe_1_pane_t1_ParamLimits

0xe66c,	// (0x0001c7e3) calenote_swipe_1_pane_t1

0xe211,	// (0x0001c388) calenote_swipe_2_pane_g1_ParamLimits

0xe211,	// (0x0001c388) calenote_swipe_2_pane_g1

0xe68b,	// (0x0001c802) calenote_swipe_2_pane_g2_ParamLimits

0xe68b,	// (0x0001c802) calenote_swipe_2_pane_g2

0x0001,

0xfdab,	// (0x0001df22) calenote_swipe_2_pane_g_ParamLimits

0xfdab,	// (0x0001df22) calenote_swipe_2_pane_g

0xe697,	// (0x0001c80e) calenote_swipe_2_pane_t1_ParamLimits

0xe697,	// (0x0001c80e) calenote_swipe_2_pane_t1

0x9173,	// (0x000172ea) main_mup_navstr_pane

0x4c8e,	// (0x00012e05) main_mup3_pane_t7_ParamLimits

0x4c8e,	// (0x00012e05) main_mup3_pane_t7

0xca1e,	// (0x0001ab95) main_mp4_pane_g6_ParamLimits

0xca1e,	// (0x0001ab95) main_mp4_pane_g6

0xcc46,	// (0x0001adbd) main_image3_pane_t4_ParamLimits

0xcc46,	// (0x0001adbd) main_image3_pane_t4

0x8382,	// (0x000164f9) popup_navstr_preview_pane_ParamLimits

0x8382,	// (0x000164f9) popup_navstr_preview_pane

0x8396,	// (0x0001650d) scroll_navstr_pane_ParamLimits

0x8396,	// (0x0001650d) scroll_navstr_pane

0x9173,	// (0x000172ea) bg_popup_preview_window_pane_cp04

0xe6be,	// (0x0001c835) popup_navstr_preview_pane_t1

0x83aa,	// (0x00016521) scroll_navstr_pane_g1_ParamLimits

0x83aa,	// (0x00016521) scroll_navstr_pane_g1

0x83be,	// (0x00016535) scroll_navstr_pane_t1_ParamLimits

0x83be,	// (0x00016535) scroll_navstr_pane_t1

0xe663,	// (0x0001c7da) bg_button_pane_cp014

0xe663,	// (0x0001c7da) bg_button_pane_cp030

0xe175,	// (0x0001c2ec) list_double_fisheye_pane_g4_ParamLimits

0xe175,	// (0x0001c2ec) list_double_fisheye_pane_g4

0xe181,	// (0x0001c2f8) list_double_fisheye_pane_g5_ParamLimits

0xe181,	// (0x0001c2f8) list_double_fisheye_pane_g5

0xe5ce,	// (0x0001c745) sp_fs_scroll_pane_cp03

0x9c99,	// (0x00017e10) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe34c,	// (0x0001c4c3) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfceb,	// (0x0001de62) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe358,	// (0x0001c4cf) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x8282,	// (0x000163f9) sp_fs_scroll_pane_cp02

0x9b22,	// (0x00017c99) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x9b22,	// (0x00017c99) popup_sp_fs_calendar_preview_list_single_pane

0x9173,	// (0x000172ea) main_cam6_pano_pane

0x91e3,	// (0x0001735a) main_mup3_pane_ParamLimits

0x9173,	// (0x000172ea) main_phacti_pane

0x7841,	// (0x000159b8) bg_button_pane_cp11

0x785b,	// (0x000159d2) main_mobtv_info_pane_g2_ParamLimits

0x785b,	// (0x000159d2) main_mobtv_info_pane_g2

0x0001,

0xfc4b,	// (0x0001ddc2) main_mobtv_info_pane_g_ParamLimits

0xfc4b,	// (0x0001ddc2) main_mobtv_info_pane_g

0x7a38,	// (0x00015baf) sc_clock_pane_t5_ParamLimits

0x7a38,	// (0x00015baf) sc_clock_pane_t5

0x7ac3,	// (0x00015c3a) main_radioblah_pane_g1_ParamLimits

0xe0ce,	// (0x0001c245) main_radioblah_pane_t3_ParamLimits

0xe0ce,	// (0x0001c245) main_radioblah_pane_t3

0xe0e6,	// (0x0001c25d) main_radioblah_pane_t4_ParamLimits

0xe0e6,	// (0x0001c25d) main_radioblah_pane_t4

0x7aeb,	// (0x00015c62) main_radioblah_text_pane_ParamLimits

0x7aeb,	// (0x00015c62) main_radioblah_text_pane

0x7afd,	// (0x00015c74) main_radioblah_info_pane_g1_ParamLimits

0x7b98,	// (0x00015d0f) main_radioblah_info_pane_t4_ParamLimits

0x7b98,	// (0x00015d0f) main_radioblah_info_pane_t4

0x91e3,	// (0x0001735a) main_sp_fs_calendar_pane

0x83d4,	// (0x0001654b) main_phacti_pane_g1

0x83dc,	// (0x00016553) phacti_note_pane_ParamLimits

0x83dc,	// (0x00016553) phacti_note_pane

0xe6d5,	// (0x0001c84c) phacti_term_pane_ParamLimits

0xe6d5,	// (0x0001c84c) phacti_term_pane

0xe6ea,	// (0x0001c861) phacti_note_pane_t1_ParamLimits

0xe6ea,	// (0x0001c861) phacti_note_pane_t1

0xe701,	// (0x0001c878) phacti_term_pane_g1

0xe709,	// (0x0001c880) phacti_term_pane_t1_ParamLimits

0xe709,	// (0x0001c880) phacti_term_pane_t1

0xe733,	// (0x0001c8aa) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe73b,	// (0x0001c8b2) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdb5,	// (0x0001df2c) popup_sp_fs_calendar_preview_list_single_pane_g

0xe743,	// (0x0001c8ba) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe743,	// (0x0001c8ba) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe759,	// (0x0001c8d0) aid_popup_sp_fs_bg_corner_pane

0xc0a6,	// (0x0001a21d) popup_sp_fs_calendar_preview_bg_pane_g1

0x9173,	// (0x000172ea) popup_sp_fs_calendar_preview_bg_pane

0xe761,	// (0x0001c8d8) popup_sp_fs_calendar_preview_list_pane

0x91e3,	// (0x0001735a) bg_main_sp_fs_cale_pane_ParamLimits

0x91e3,	// (0x0001735a) bg_main_sp_fs_cale_pane

0xe772,	// (0x0001c8e9) listscroll_cale_mrui_pane_ParamLimits

0xe772,	// (0x0001c8e9) listscroll_cale_mrui_pane

0xe786,	// (0x0001c8fd) listscroll_sp_fs_schedule_track_pane

0xe78f,	// (0x0001c906) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe78f,	// (0x0001c906) main_sp_fs_ctrlbar_pane_cp01

0xe7a0,	// (0x0001c917) main_sp_fs_ribbon_pane

0xe7a8,	// (0x0001c91f) popup_sp_fs_cale_preview_window

0x843d,	// (0x000165b4) list_single_sp_fs_schedule_track_pane_ParamLimits

0x843d,	// (0x000165b4) list_single_sp_fs_schedule_track_pane

0x91e3,	// (0x0001735a) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x91e3,	// (0x0001735a) bg_sp_fs_highlight_list_pane_cp03

0x8452,	// (0x000165c9) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8452,	// (0x000165c9) list_single_sp_fs_schedule_track_pane_g1

0x845e,	// (0x000165d5) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x845e,	// (0x000165d5) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdba,	// (0x0001df31) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdba,	// (0x0001df31) list_single_sp_fs_schedule_track_pane_g

0x846a,	// (0x000165e1) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x846a,	// (0x000165e1) list_single_sp_fs_schedule_track_pane_t1

0x8484,	// (0x000165fb) sp_fs_schedule_track_pane_ParamLimits

0x8484,	// (0x000165fb) sp_fs_schedule_track_pane

0xe7ba,	// (0x0001c931) sp_fs_schedule_track_pane_g1

0xe7c2,	// (0x0001c939) sp_fs_schedule_track_pane_g2

0xe7ca,	// (0x0001c941) sp_fs_schedule_track_pane_g3

0xe7d2,	// (0x0001c949) sp_fs_schedule_track_pane_g4

0xe7da,	// (0x0001c951) sp_fs_schedule_track_pane_g5

0x0004,

0xfdbf,	// (0x0001df36) sp_fs_schedule_track_pane_g

0xced9,	// (0x0001b050) bg_sp_fs_schedule_viewer_highlight_g1

0x9f4d,	// (0x000180c4) bg_sp_fs_schedule_viewer_highlight_g2

0xcee1,	// (0x0001b058) bg_sp_fs_schedule_viewer_highlight_g3

0xcee9,	// (0x0001b060) bg_sp_fs_schedule_viewer_highlight_g4

0xd162,	// (0x0001b2d9) bg_sp_fs_schedule_viewer_highlight_g5

0xcef9,	// (0x0001b070) bg_sp_fs_schedule_viewer_highlight_g6

0xcf01,	// (0x0001b078) bg_sp_fs_schedule_viewer_highlight_g7

0xcf09,	// (0x0001b080) bg_sp_fs_schedule_viewer_highlight_g8

0x9f2d,	// (0x000180a4) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdca,	// (0x0001df41) bg_sp_fs_schedule_viewer_highlight_g

0x9173,	// (0x000172ea) bg_main_sp_fs_ribbon_pane

0x8495,	// (0x0001660c) main_sp_fs_ribbon_pane_g1

0xe7e2,	// (0x0001c959) main_sp_fs_ribbon_pane_t1

0x849e,	// (0x00016615) main_sp_fs_ribbon_pane_t2

0xe7f1,	// (0x0001c968) main_sp_fs_ribbon_pane_t3

0x0002,

0xfddd,	// (0x0001df54) main_sp_fs_ribbon_pane_t

0xe800,	// (0x0001c977) main_sp_fs_ribbon_scheduler_pane

0xe808,	// (0x0001c97f) bg_main_sp_fs_ribbon_pane_g1

0xe811,	// (0x0001c988) bg_main_sp_fs_ribbon_pane_g2

0xe81a,	// (0x0001c991) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfde4,	// (0x0001df5b) bg_main_sp_fs_ribbon_pane_g

0xe822,	// (0x0001c999) main_sp_fs_ribbon_scheduler_pane_g1

0xe82b,	// (0x0001c9a2) main_sp_fs_ribbon_scheduler_pane_g2

0xe834,	// (0x0001c9ab) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdeb,	// (0x0001df62) main_sp_fs_ribbon_scheduler_pane_g

0xe83d,	// (0x0001c9b4) list_cale_mrui_pane

0x84ad,	// (0x00016624) sp_fs_scroll_pane_cp07_ParamLimits

0x84ad,	// (0x00016624) sp_fs_scroll_pane_cp07

0x84c1,	// (0x00016638) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x84c1,	// (0x00016638) bg_sp_fs_schedule_viewer_highlight

0xe846,	// (0x0001c9bd) list_single_sp_fs_schedule_track_pane_cp01

0xe84e,	// (0x0001c9c5) list_sp_fs_schedule_track_pane

0xe856,	// (0x0001c9cd) sp_fs_scroll_pane_cp06_ParamLimits

0xe856,	// (0x0001c9cd) sp_fs_scroll_pane_cp06

0xc0a6,	// (0x0001a21d) bgmain_sp_fs_calendar_pane_g1

0x84d1,	// (0x00016648) list_single_cale_mrui_pane_ParamLimits

0x84d1,	// (0x00016648) list_single_cale_mrui_pane

0xe868,	// (0x0001c9df) list_single_cale_mrui_row_pane_ParamLimits

0xe868,	// (0x0001c9df) list_single_cale_mrui_row_pane

0xe875,	// (0x0001c9ec) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe875,	// (0x0001c9ec) list_single_cale_mrui_row_pane_g1

0xe8ba,	// (0x0001ca31) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe8ba,	// (0x0001ca31) list_single_cale_mrui_row_pane_t1

0x84f3,	// (0x0001666a) list_single_cale_mrui_row_pane_t2_ParamLimits

0x84f3,	// (0x0001666a) list_single_cale_mrui_row_pane_t2

0xe8cc,	// (0x0001ca43) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe8cc,	// (0x0001ca43) list_single_cale_mrui_row_pane_t3

0xe8fb,	// (0x0001ca72) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe8fb,	// (0x0001ca72) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf9,	// (0x0001df70) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf9,	// (0x0001df70) list_single_cale_mrui_row_pane_t

0x855b,	// (0x000166d2) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x855b,	// (0x000166d2) list_single_cmail_header_editor_pane_bg_cp01

0x8581,	// (0x000166f8) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x8581,	// (0x000166f8) list_single_cmail_header_editor_pane_bg_cp02

0x85a1,	// (0x00016718) main_radioblah_text_pane_t1_ParamLimits

0x85a1,	// (0x00016718) main_radioblah_text_pane_t1

0xe92a,	// (0x0001caa1) cam6_indi_pane_cp01

0xe932,	// (0x0001caa9) cam6_mode_pane_cp01

0xe93a,	// (0x0001cab1) cam6_pano_pane

0xe943,	// (0x0001caba) cam6_zoom_pane_cp01

0xe94b,	// (0x0001cac2) cam6_pano_image_pane

0xe956,	// (0x0001cacd) cam6_pano_pane_g1

0xde2d,	// (0x0001bfa4) cam6_pano_pane_g2

0xe95f,	// (0x0001cad6) cam6_pano_pane_g3

0xe968,	// (0x0001cadf) cam6_pano_pane_g4

0xc681,	// (0x0001a7f8) cam6_pano_pane_g5

0xe971,	// (0x0001cae8) cam6_pano_pane_g6

0xe97b,	// (0x0001caf2) cam6_pano_pane_g7

0xe983,	// (0x0001cafa) cam6_pano_pane_g8

0xe98c,	// (0x0001cb03) cam6_pano_pane_g9

0x0008,

0xfe02,	// (0x0001df79) cam6_pano_pane_g

0x9173,	// (0x000172ea) main_browser_tag_pane

0xe6b6,	// (0x0001c82d) grid_navstr_albumart_pane

0xe997,	// (0x0001cb0e) cell_navstr_albumart_pane_ParamLimits

0xe997,	// (0x0001cb0e) cell_navstr_albumart_pane

0xa880,	// (0x000189f7) cell_navstr_albumart_pane_g1

0xb9b3,	// (0x00019b2a) cell_navstr_albumart_pane_g2

0xb9c3,	// (0x00019b3a) cell_navstr_albumart_pane_g3

0xb9bb,	// (0x00019b32) cell_navstr_albumart_pane_g4

0x0003,

0xfe15,	// (0x0001df8c) cell_navstr_albumart_pane_g

0x85bc,	// (0x00016733) bt_list_pane_ParamLimits

0x85bc,	// (0x00016733) bt_list_pane

0x85d1,	// (0x00016748) bt_list_pane_t1

0x85e0,	// (0x00016757) bt_list_pane_t2

0x0001,

0xfe1e,	// (0x0001df95) bt_list_pane_t

0x9173,	// (0x000172ea) main_cale_prevew_pane

0x85ef,	// (0x00016766) popup_cale_preview_window_ParamLimits

0x85ef,	// (0x00016766) popup_cale_preview_window

0x91e3,	// (0x0001735a) bg_popup_preview_window_pane_cp05_ParamLimits

0x91e3,	// (0x0001735a) bg_popup_preview_window_pane_cp05

0xe9b9,	// (0x0001cb30) list_cale_preview_pane_ParamLimits

0xe9b9,	// (0x0001cb30) list_cale_preview_pane

0x8606,	// (0x0001677d) list_double_cale_preview_pane_ParamLimits

0x8606,	// (0x0001677d) list_double_cale_preview_pane

0x8618,	// (0x0001678f) list_single_cale_preview_pane_ParamLimits

0x8618,	// (0x0001678f) list_single_cale_preview_pane

0x862c,	// (0x000167a3) list_single_cale_preview_pane_g1

0x8634,	// (0x000167ab) list_single_cale_preview_pane_t1_ParamLimits

0x8634,	// (0x000167ab) list_single_cale_preview_pane_t1

0x8649,	// (0x000167c0) list_double_cale_preview_pane_g1

0x8651,	// (0x000167c8) list_double_cale_preview_pane_t1_ParamLimits

0x8651,	// (0x000167c8) list_double_cale_preview_pane_t1

0x8666,	// (0x000167dd) list_double_cale_preview_pane_t2_ParamLimits

0x8666,	// (0x000167dd) list_double_cale_preview_pane_t2

0x0001,

0xfe23,	// (0x0001df9a) list_double_cale_preview_pane_t_ParamLimits

0xfe23,	// (0x0001df9a) list_double_cale_preview_pane_t

0x9173,	// (0x000172ea) main_ezdial_pane

0x91e3,	// (0x0001735a) main_sp_fs_email_pane_ParamLimits

0x7d74,	// (0x00015eeb) cmail_ddmenu_btn01_pane_ParamLimits

0x7d74,	// (0x00015eeb) cmail_ddmenu_btn01_pane

0x7d87,	// (0x00015efe) cmail_ddmenu_btn02_pane_ParamLimits

0x7d87,	// (0x00015efe) cmail_ddmenu_btn02_pane

0x7daa,	// (0x00015f21) cmail_ddmenu_btn03_pane_ParamLimits

0x7daa,	// (0x00015f21) cmail_ddmenu_btn03_pane

0x7dd3,	// (0x00015f4a) main_sp_fs_ctrlbar_pane_ParamLimits

0x7df7,	// (0x00015f6e) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x828c,	// (0x00016403) list_cmail_body_pane_ParamLimits

0xe5dd,	// (0x0001c754) bg_button_pane_cp12

0xe5f2,	// (0x0001c769) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe5f2,	// (0x0001c769) list_single_cmail_header_detail_pane_g3

0x830b,	// (0x00016482) list_single_cmail_header_detail_pane_t2_ParamLimits

0x830b,	// (0x00016482) list_single_cmail_header_detail_pane_t2

0x0001,

0xfda6,	// (0x0001df1d) list_single_cmail_header_detail_pane_t_ParamLimits

0xfda6,	// (0x0001df1d) list_single_cmail_header_detail_pane_t

0xe71e,	// (0x0001c895) phacti_term_pane_t2_ParamLimits

0xe71e,	// (0x0001c895) phacti_term_pane_t2

0x0001,

0xfdb0,	// (0x0001df27) phacti_term_pane_t_ParamLimits

0xfdb0,	// (0x0001df27) phacti_term_pane_t

0xe9c5,	// (0x0001cb3c) aid_size_list_single_double

0x867e,	// (0x000167f5) popup_ezdial_listscroll_window

0x869a,	// (0x00016811) popup_number_entry_window_cp01

0xa6ff,	// (0x00018876) bg_popup_call_pane_cp09

0xe9d1,	// (0x0001cb48) ezdial_list_pane

0xe9d9,	// (0x0001cb50) scroll_pane_cp23

0xbb9e,	// (0x00019d15) bg_button_pane_cp028_ParamLimits

0xbb9e,	// (0x00019d15) bg_button_pane_cp028

0x86a8,	// (0x0001681f) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x86a8,	// (0x0001681f) cmail_ddmenu_btn01_pane_g1

0x86b7,	// (0x0001682e) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x86b7,	// (0x0001682e) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe28,	// (0x0001df9f) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe28,	// (0x0001df9f) cmail_ddmenu_btn01_pane_g

0xe9e1,	// (0x0001cb58) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xe9e1,	// (0x0001cb58) cmail_ddmenu_btn01_pane_t1

0xbb9e,	// (0x00019d15) bg_button_pane_cp029_ParamLimits

0xbb9e,	// (0x00019d15) bg_button_pane_cp029

0x86c7,	// (0x0001683e) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x86c7,	// (0x0001683e) cmail_ddmenu_btn02_pane_g1

0x86e2,	// (0x00016859) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x86e2,	// (0x00016859) cmail_ddmenu_btn02_pane_t1

0x91e3,	// (0x0001735a) bg_button_pane_cp031_ParamLimits

0x91e3,	// (0x0001735a) bg_button_pane_cp031

0x86c7,	// (0x0001683e) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x86c7,	// (0x0001683e) cmail_ddmenu_btn03_pane_g1

0x86e2,	// (0x00016859) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x86e2,	// (0x00016859) cmail_ddmenu_btn03_pane_t1

0x584b,	// (0x000139c2) cell_dialer2_keypad_pane_t1_ParamLimits

0x5865,	// (0x000139dc) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x5865,	// (0x000139dc) cell_dialer2_keypad_pane_t1_copy1

0x76a8,	// (0x0001581f) ncimui_group_button_pane

0x91e3,	// (0x0001735a) main_sp_fs_calendar_pane_ParamLimits

0x82a1,	// (0x00016418) list_single_cmail_header_caption_pane_ParamLimits

0xe769,	// (0x0001c8e0) aid_recal_txt_sm_pane

0x9173,	// (0x000172ea) mian_recal_day_pane

0xe7a8,	// (0x0001c91f) popup_sp_fs_cale_preview_window_ParamLimits

0x9173,	// (0x000172ea) list_recal_day_pane

0xea19,	// (0x0001cb90) list_single_recal_day_pane_ParamLimits

0xea19,	// (0x0001cb90) list_single_recal_day_pane

0xea2b,	// (0x0001cba2) list_single_recal_day_pane_g1_ParamLimits

0xea2b,	// (0x0001cba2) list_single_recal_day_pane_g1

0xea37,	// (0x0001cbae) list_single_recal_day_pane_g2_ParamLimits

0xea37,	// (0x0001cbae) list_single_recal_day_pane_g2

0xea47,	// (0x0001cbbe) list_single_recal_day_pane_g3_ParamLimits

0xea47,	// (0x0001cbbe) list_single_recal_day_pane_g3

0x8709,	// (0x00016880) list_single_recal_day_pane_g4_ParamLimits

0x8709,	// (0x00016880) list_single_recal_day_pane_g4

0xea53,	// (0x0001cbca) list_single_recal_day_pane_g5_ParamLimits

0xea53,	// (0x0001cbca) list_single_recal_day_pane_g5

0xea63,	// (0x0001cbda) list_single_recal_day_pane_g6_ParamLimits

0xea63,	// (0x0001cbda) list_single_recal_day_pane_g6

0x0004,

0xfe37,	// (0x0001dfae) list_single_recal_day_pane_g_ParamLimits

0xfe37,	// (0x0001dfae) list_single_recal_day_pane_g

0xea7a,	// (0x0001cbf1) list_single_recal_day_pane_t1

0xea8c,	// (0x0001cc03) list_single_recal_day_pane_t2

0x0001,

0xfe42,	// (0x0001dfb9) list_single_recal_day_pane_t

0x8729,	// (0x000168a0) ncimui_query_button_pane_ParamLimits

0x8729,	// (0x000168a0) ncimui_query_button_pane

0x8739,	// (0x000168b0) ncimui_query_button_pane_t1_ParamLimits

0x8739,	// (0x000168b0) ncimui_query_button_pane_t1

0xeaa1,	// (0x0001cc18) ncimui_query_button_pane_t2_ParamLimits

0xeaa1,	// (0x0001cc18) ncimui_query_button_pane_t2

0x0001,

0xfe47,	// (0x0001dfbe) ncimui_query_button_pane_t_ParamLimits

0xfe47,	// (0x0001dfbe) ncimui_query_button_pane_t

0x874c,	// (0x000168c3) query_button_pane_ParamLimits

0x874c,	// (0x000168c3) query_button_pane

0x9173,	// (0x000172ea) bg_button_pane_cp0028

0xeab4,	// (0x0001cc2b) query_button_pane_t1

0x38c6,	// (0x00011a3d) main_tport_pane_ParamLimits

0x8179,	// (0x000162f0) bg_popup_window_pane_cp01_ParamLimits

0x8179,	// (0x000162f0) bg_popup_window_pane_cp01

0x8193,	// (0x0001630a) heading_pane_cp08_ParamLimits

0x8193,	// (0x0001630a) heading_pane_cp08

0x81a7,	// (0x0001631e) heading_pane_cp07_ParamLimits

0x81a7,	// (0x0001631e) heading_pane_cp07

0xe5a0,	// (0x0001c717) cell_tport_appsw_pane_g2

0x0002,

0xfd93,	// (0x0001df0a) cell_tport_appsw_pane_g

0x2ea5,	// (0x0001101c) input_candi_list_open_g1

0xa140,	// (0x000182b7) list_cale_time_pane_g6_ParamLimits

0xa140,	// (0x000182b7) list_cale_time_pane_g6

0x468f,	// (0x00012806) aid_size_touch_calib_1_ParamLimits

0x468f,	// (0x00012806) aid_size_touch_calib_1

0x469b,	// (0x00012812) aid_size_touch_calib_2_ParamLimits

0x469b,	// (0x00012812) aid_size_touch_calib_2

0x46b1,	// (0x00012828) aid_size_touch_calib_3_ParamLimits

0x46b1,	// (0x00012828) aid_size_touch_calib_3

0x46cf,	// (0x00012846) aid_size_touch_calib_4_ParamLimits

0x46cf,	// (0x00012846) aid_size_touch_calib_4

0x46e5,	// (0x0001285c) main_touch_calib_button_group_pane_ParamLimits

0x46e5,	// (0x0001285c) main_touch_calib_button_group_pane

0x46fd,	// (0x00012874) main_touch_calib_pane_g1_ParamLimits

0x4709,	// (0x00012880) main_touch_calib_pane_g2_ParamLimits

0x4715,	// (0x0001288c) main_touch_calib_pane_g3_ParamLimits

0x4721,	// (0x00012898) main_touch_calib_pane_g4_ParamLimits

0xf761,	// (0x0001d8d8) main_touch_calib_pane_g_ParamLimits

0x472d,	// (0x000128a4) main_touch_calib_pane_t1_ParamLimits

0x4747,	// (0x000128be) main_touch_calib_pane_t2_ParamLimits

0x4761,	// (0x000128d8) main_touch_calib_pane_t3_ParamLimits

0x4775,	// (0x000128ec) main_touch_calib_pane_t4_ParamLimits

0x4789,	// (0x00012900) main_touch_calib_pane_t5_ParamLimits

0xf76a,	// (0x0001d8e1) main_touch_calib_pane_t_ParamLimits

0xc451,	// (0x0001a5c8) list_single_fp_cale_pane_g3_ParamLimits

0xc451,	// (0x0001a5c8) list_single_fp_cale_pane_g3

0x91e3,	// (0x0001735a) bg_button_pane_cp012_ParamLimits

0x91e3,	// (0x0001735a) bg_vkb2_func_pane_cp03_ParamLimits

0x68ab,	// (0x00014a22) cell_vitu2_function_top_pane_g1_ParamLimits

0x91e3,	// (0x0001735a) bg_vkb2_func_pane_cp04_ParamLimits

0x7636,	// (0x000157ad) main_ncimui_button_group_pane_ParamLimits

0x7636,	// (0x000157ad) main_ncimui_button_group_pane

0x7696,	// (0x0001580d) main_ncimui_pane_t3_ParamLimits

0x7696,	// (0x0001580d) main_ncimui_pane_t3

0xe6cc,	// (0x0001c843) phacti_button_group_pane

0xe9c5,	// (0x0001cb3c) aid_size_list_single_double_ParamLimits

0x867e,	// (0x000167f5) popup_ezdial_listscroll_window_ParamLimits

0x869a,	// (0x00016811) popup_number_entry_window_cp01_ParamLimits

0x875f,	// (0x000168d6) phacti_button_pane_ParamLimits

0x875f,	// (0x000168d6) phacti_button_pane

0x9173,	// (0x000172ea) bg_button_pane_cp14

0xeac2,	// (0x0001cc39) phacti_button_pane_t1

0x8770,	// (0x000168e7) main_touch_calib_button_pane_ParamLimits

0x8770,	// (0x000168e7) main_touch_calib_button_pane

0x9996,	// (0x00017b0d) bg_button_pane_cp18_ParamLimits

0x9996,	// (0x00017b0d) bg_button_pane_cp18

0xead0,	// (0x0001cc47) main_touch_calib_button_pane_t1_ParamLimits

0xead0,	// (0x0001cc47) main_touch_calib_button_pane_t1

0xeae6,	// (0x0001cc5d) main_touch_calib_button_pane_t2_ParamLimits

0xeae6,	// (0x0001cc5d) main_touch_calib_button_pane_t2

0x0001,

0xfe4c,	// (0x0001dfc3) main_touch_calib_button_pane_t_ParamLimits

0xfe4c,	// (0x0001dfc3) main_touch_calib_button_pane_t

0x9173,	// (0x000172ea) cell_ncimui_button_pane

0x9173,	// (0x000172ea) bg_button_pane_cp032

0xeb04,	// (0x0001cc7b) cell_ncimui_button_pane_t1

0xcc26,	// (0x0001ad9d) image3_infobar_pane_ParamLimits

0xcc26,	// (0x0001ad9d) image3_infobar_pane

0x7a64,	// (0x00015bdb) fs_bigclock_status_pane_ParamLimits

0x7a64,	// (0x00015bdb) fs_bigclock_status_pane

0x7a71,	// (0x00015be8) main_fs_bigclock_clock_pane_ParamLimits

0x7a71,	// (0x00015be8) main_fs_bigclock_clock_pane

0x7a85,	// (0x00015bfc) main_fs_bigclock_indi_pane_ParamLimits

0x7a85,	// (0x00015bfc) main_fs_bigclock_indi_pane

0x7a9d,	// (0x00015c14) main_fs_bigclock_swipe_pane_ParamLimits

0x7a9d,	// (0x00015c14) main_fs_bigclock_swipe_pane

0x9173,	// (0x000172ea) main_fs_clock_dumped_data

0xdf3a,	// (0x0001c0b1) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xdf3a,	// (0x0001c0b1) list_single_fs_bigclock_indicator_pane_g1

0xdf63,	// (0x0001c0da) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xdf63,	// (0x0001c0da) list_single_fs_bigclock_indicator_pane_g2

0xdf7d,	// (0x0001c0f4) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xdf7d,	// (0x0001c0f4) list_single_fs_bigclock_indicator_pane_g3

0xdf97,	// (0x0001c10e) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xdf97,	// (0x0001c10e) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc7f,	// (0x0001ddf6) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc7f,	// (0x0001ddf6) list_single_fs_bigclock_indicator_pane_g

0xdfc0,	// (0x0001c137) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xdfc0,	// (0x0001c137) list_single_fs_bigclock_indicator_pane_t1

0xdfe8,	// (0x0001c15f) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xdfe8,	// (0x0001c15f) list_single_fs_bigclock_indicator_pane_t2

0xe010,	// (0x0001c187) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe010,	// (0x0001c187) list_single_fs_bigclock_indicator_pane_t3

0xe038,	// (0x0001c1af) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe038,	// (0x0001c1af) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc8a,	// (0x0001de01) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc8a,	// (0x0001de01) list_single_fs_bigclock_indicator_pane_t

0xeb12,	// (0x0001cc89) image3_infobar_fav_pane_ParamLimits

0xeb12,	// (0x0001cc89) image3_infobar_fav_pane

0xeb22,	// (0x0001cc99) image3_infobar_loc_pane_ParamLimits

0xeb22,	// (0x0001cc99) image3_infobar_loc_pane

0xeb36,	// (0x0001ccad) image3_infobar_time_pane_ParamLimits

0xeb36,	// (0x0001ccad) image3_infobar_time_pane

0xc0a6,	// (0x0001a21d) image3_infobar_time_pane_g1

0xeb46,	// (0x0001ccbd) image3_infobar_time_pane_t1

0xc0a6,	// (0x0001a21d) image3_infobar_loc_pane_g1

0xeb54,	// (0x0001cccb) image3_infobar_loc_pane_g2

0x0001,

0xfe51,	// (0x0001dfc8) image3_infobar_loc_pane_g

0xeb5c,	// (0x0001ccd3) image3_infobar_loc_pane_t1

0xc0a6,	// (0x0001a21d) image3_infobar_fav_pane_g1

0xeb6a,	// (0x0001cce1) image3_infobar_fav_pane_g2

0x0001,

0xfe56,	// (0x0001dfcd) image3_infobar_fav_pane_g

0xeb72,	// (0x0001cce9) fs_bigclock_status_battery_pane

0xeb7b,	// (0x0001ccf2) fs_bigclock_status_signal_pane

0xeb84,	// (0x0001ccfb) fs_bigclock_status_title_pane

0xeb8d,	// (0x0001cd04) fs_bigclock_status_signal_pane_g1

0xeb96,	// (0x0001cd0d) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe5b,	// (0x0001dfd2) fs_bigclock_status_signal_pane_g

0xeb9e,	// (0x0001cd15) fs_bigclock_status_battery_pane_g1

0xeba7,	// (0x0001cd1e) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe60,	// (0x0001dfd7) fs_bigclock_status_battery_pane_g

0xebaf,	// (0x0001cd26) fs_bigclock_status_title_pane_t1

0xc0a6,	// (0x0001a21d) main_fs_bigclock_clock_pane_g1

0xebbd,	// (0x0001cd34) main_fs_bigclock_clock_pane_g2

0xebbd,	// (0x0001cd34) main_fs_bigclock_clock_pane_g3

0xebbd,	// (0x0001cd34) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe65,	// (0x0001dfdc) main_fs_bigclock_clock_pane_g

0xebc5,	// (0x0001cd3c) main_fs_bigclock_clock_pane_t1

0xebd3,	// (0x0001cd4a) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe6e,	// (0x0001dfe5) main_fs_bigclock_clock_pane_t

0xebe2,	// (0x0001cd59) list_single_fs_bigclock_indicator_pane_ParamLimits

0xebe2,	// (0x0001cd59) list_single_fs_bigclock_indicator_pane

0x8785,	// (0x000168fc) list_single_fs_bigclock_pane_ParamLimits

0x8785,	// (0x000168fc) list_single_fs_bigclock_pane

0xebfc,	// (0x0001cd73) main_fs_bigclock_indicator_pane_t1

0xec0b,	// (0x0001cd82) list_single_fs_bigclock_pane_g1

0xec13,	// (0x0001cd8a) list_single_fs_bigclock_pane_t1

0xc0a6,	// (0x0001a21d) main_fs_bigclock_swipe_pane_g1

0xec56,	// (0x0001cdcd) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe7f,	// (0x0001dff6) main_fs_bigclock_swipe_pane_g

0xec5e,	// (0x0001cdd5) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xec5e,	// (0x0001cdd5) main_fs_bigclock_swipe_pane_t1

0x26b8,	// (0x0001082f) call_type_pane_ParamLimits

0x9173,	// (0x000172ea) main_btmg_pane

0xe8a1,	// (0x0001ca18) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe8a1,	// (0x0001ca18) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdf2,	// (0x0001df69) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdf2,	// (0x0001df69) list_single_cale_mrui_row_pane_g

0xea00,	// (0x0001cb77) list_recal_vselct_arw_lo_pane

0xea08,	// (0x0001cb7f) list_recal_vselct_arw_up_pane

0xea10,	// (0x0001cb87) list_recal_vselct_pane

0x87eb,	// (0x00016962) btmg_button_pane

0x87f5,	// (0x0001696c) main_btmg_pane_g1

0x9173,	// (0x000172ea) bg_button_pane_cp044

0xec7b,	// (0x0001cdf2) btmg_button_pane_t1

0xbb96,	// (0x00019d0d) aid_listscroll_gen

0x91e3,	// (0x0001735a) main_cntbar_detail_pane

0xe5be,	// (0x0001c735) list_cmail_folder_pane

0xe5ce,	// (0x0001c745) sp_fs_scroll_pane_cp03_ParamLimits

0x82a1,	// (0x00016418) list_single_fs_dyc_pane_cp01_ParamLimits

0x82a1,	// (0x00016418) list_single_fs_dyc_pane_cp01

0xec89,	// (0x0001ce00) aid_size_cmail_indent

0xec92,	// (0x0001ce09) list_single_dyc_row_pane_cp01

0x882b,	// (0x000169a2) cntbar_detail_list_pane_ParamLimits

0x882b,	// (0x000169a2) cntbar_detail_list_pane

0x8877,	// (0x000169ee) main_cntbar_detail_cont_pane_ParamLimits

0x8877,	// (0x000169ee) main_cntbar_detail_cont_pane

0x2652,	// (0x000107c9) scroll_pane_cp032_ParamLimits

0x2652,	// (0x000107c9) scroll_pane_cp032

0x888b,	// (0x00016a02) cntbar_detail_list_event_pane_ParamLimits

0x888b,	// (0x00016a02) cntbar_detail_list_event_pane

0x883b,	// (0x000169b2) cntbar_detail_list_shct_pane

0x9f9b,	// (0x00018112) aid_list_gen

0xec9b,	// (0x0001ce12) aid_scroll

0xeca4,	// (0x0001ce1b) aid_size_touch_scroll_bar

0xee1d,	// (0x0001cf94) aid_list_double

0xecad,	// (0x0001ce24) aid_list_single

0xecb6,	// (0x0001ce2d) aid_list_single_lg

0xecbf,	// (0x0001ce36) aid_list_z_g_a_sm

0xecc7,	// (0x0001ce3e) aid_list_z_g_d

0xeccf,	// (0x0001ce46) aid_txt_z_prm

0x889b,	// (0x00016a12) aid_txt_z_prm_cp01

0x88a9,	// (0x00016a20) aid_txt_z_sec

0x88b7,	// (0x00016a2e) main_cntbar_detail_cont_pane_g1_ParamLimits

0x88b7,	// (0x00016a2e) main_cntbar_detail_cont_pane_g1

0x88cb,	// (0x00016a42) main_cntbar_detail_cont_pane_g2_ParamLimits

0x88cb,	// (0x00016a42) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe84,	// (0x0001dffb) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe84,	// (0x0001dffb) main_cntbar_detail_cont_pane_g

0xecdd,	// (0x0001ce54) main_cntbar_detail_cont_pane_t1

0xeceb,	// (0x0001ce62) main_cntbar_detail_cont_pane_t2

0xecf9,	// (0x0001ce70) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe89,	// (0x0001e000) main_cntbar_detail_cont_pane_t

0x88db,	// (0x00016a52) cell_cntbar_detail_list_shct_pane_ParamLimits

0x88db,	// (0x00016a52) cell_cntbar_detail_list_shct_pane

0xed07,	// (0x0001ce7e) cntbar_detail_list_shct_pane_g1

0xed10,	// (0x0001ce87) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe90,	// (0x0001e007) cntbar_detail_list_shct_pane_g

0x88ef,	// (0x00016a66) cntbar_detail_list_event_pane_g1_ParamLimits

0x88ef,	// (0x00016a66) cntbar_detail_list_event_pane_g1

0x88fb,	// (0x00016a72) cntbar_detail_list_event_pane_g2_ParamLimits

0x88fb,	// (0x00016a72) cntbar_detail_list_event_pane_g2

0x0005,

0xfe95,	// (0x0001e00c) cntbar_detail_list_event_pane_g_ParamLimits

0xfe95,	// (0x0001e00c) cntbar_detail_list_event_pane_g

0x8967,	// (0x00016ade) cntbar_detail_list_event_pane_t1_ParamLimits

0x8967,	// (0x00016ade) cntbar_detail_list_event_pane_t1

0x897c,	// (0x00016af3) cntbar_detail_list_event_pane_t2_ParamLimits

0x897c,	// (0x00016af3) cntbar_detail_list_event_pane_t2

0x0002,

0xfea2,	// (0x0001e019) cntbar_detail_list_event_pane_t_ParamLimits

0xfea2,	// (0x0001e019) cntbar_detail_list_event_pane_t

0xc0a6,	// (0x0001a21d) cell_cntbar_detail_list_shct_pane_g1

0x2a1f,	// (0x00010b96) navi_pane_mv_g3

0x91e3,	// (0x0001735a) main_cntbar_detail_pane_ParamLimits

0x9173,	// (0x000172ea) main_notif_wgt_pane

0xc9b8,	// (0x0001ab2f) aid_tch_main_mp4_pane_g4

0xcbba,	// (0x0001ad31) popup_slider_window_cp02

0xe9f6,	// (0x0001cb6d) list_recal_day_event_pane

0x87ff,	// (0x00016976) cntbar_detail_btn_pane_ParamLimits

0x87ff,	// (0x00016976) cntbar_detail_btn_pane

0x8815,	// (0x0001698c) cntbar_detail_btn_pane_cp01_ParamLimits

0x8815,	// (0x0001698c) cntbar_detail_btn_pane_cp01

0x883b,	// (0x000169b2) cntbar_detail_list_shct_pane_ParamLimits

0x884b,	// (0x000169c2) cntbar_detail_pane_g1_ParamLimits

0x884b,	// (0x000169c2) cntbar_detail_pane_g1

0x885b,	// (0x000169d2) cntbar_detail_pane_t1_ParamLimits

0x885b,	// (0x000169d2) cntbar_detail_pane_t1

0x8907,	// (0x00016a7e) cntbar_detail_list_event_pane_g3_ParamLimits

0x8907,	// (0x00016a7e) cntbar_detail_list_event_pane_g3

0x891f,	// (0x00016a96) cntbar_detail_list_event_pane_g4_ParamLimits

0x891f,	// (0x00016a96) cntbar_detail_list_event_pane_g4

0x8937,	// (0x00016aae) cntbar_detail_list_event_pane_g5_ParamLimits

0x8937,	// (0x00016aae) cntbar_detail_list_event_pane_g5

0x894f,	// (0x00016ac6) cntbar_detail_list_event_pane_g6_ParamLimits

0x894f,	// (0x00016ac6) cntbar_detail_list_event_pane_g6

0x8991,	// (0x00016b08) cntbar_detail_list_event_pane_t3_ParamLimits

0x8991,	// (0x00016b08) cntbar_detail_list_event_pane_t3

0x89a3,	// (0x00016b1a) popup_notif_wgt_window_ParamLimits

0x89a3,	// (0x00016b1a) popup_notif_wgt_window

0x89bc,	// (0x00016b33) popup_submenu_window_cp01_ParamLimits

0x89bc,	// (0x00016b33) popup_submenu_window_cp01

0xa6ff,	// (0x00018876) bg_popup_window_pane_cp10

0xed19,	// (0x0001ce90) listscroll_notif_wgt_pane

0xed2a,	// (0x0001cea1) list_notif_wgt_window

0xed33,	// (0x0001ceaa) scroll_pane_cp033

0x89ce,	// (0x00016b45) list_notif_wgt_row_pane_ParamLimits

0x89ce,	// (0x00016b45) list_notif_wgt_row_pane

0xed3c,	// (0x0001ceb3) aid_size_list_notif_wgt_del

0xed49,	// (0x0001cec0) list_notif_wgt_row_pane_g1

0xed55,	// (0x0001cecc) list_notif_wgt_row_pane_g2

0xed61,	// (0x0001ced8) list_notif_wgt_row_pane_g3

0x0002,

0xfea9,	// (0x0001e020) list_notif_wgt_row_pane_g

0xed6e,	// (0x0001cee5) list_notif_wgt_row_pane_t1

0xed83,	// (0x0001cefa) list_notif_wgt_row_pane_t2

0xed95,	// (0x0001cf0c) list_notif_wgt_row_pane_t3

0x0002,

0xfeb0,	// (0x0001e027) list_notif_wgt_row_pane_t

0xd1a2,	// (0x0001b319) list_recal_day_event_pane_g1

0xeda7,	// (0x0001cf1e) list_recal_day_event_pane_t1

0x9173,	// (0x000172ea) bg_button_pane_cp045

0xedb6,	// (0x0001cf2d) cntbar_detail_btn_pane_t1

0xbb9e,	// (0x00019d15) main_callh_pane_ParamLimits

0xbb9e,	// (0x00019d15) main_callh_pane

0x9173,	// (0x000172ea) main_coverflow0_pane

0x9173,	// (0x000172ea) main_wgtman_pane

0x7aab,	// (0x00015c22) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x7aab,	// (0x00015c22) main_fs_bigclock_unlock_btn_pane

0xe598,	// (0x0001c70f) bg_button_pane_cp16

0xe5a8,	// (0x0001c71f) cell_tport_appsw_pane_g3

0x89de,	// (0x00016b55) cf0_flow_pane_ParamLimits

0x89de,	// (0x00016b55) cf0_flow_pane

0xedc4,	// (0x0001cf3b) listscroll_cf0_pane

0xedcf,	// (0x0001cf46) main_cf0_pane_g1

0x89f3,	// (0x00016b6a) main_cf0_pane_t1_ParamLimits

0x89f3,	// (0x00016b6a) main_cf0_pane_t1

0x8a0a,	// (0x00016b81) main_cf0_pane_t2_ParamLimits

0x8a0a,	// (0x00016b81) main_cf0_pane_t2

0x0001,

0xfeb7,	// (0x0001e02e) main_cf0_pane_t_ParamLimits

0xfeb7,	// (0x0001e02e) main_cf0_pane_t

0xedd9,	// (0x0001cf50) scroll_pane_cp11

0x8a21,	// (0x00016b98) cf0_flow_pane_g1

0x8a29,	// (0x00016ba0) cf0_flow_pane_g2

0x0001,

0xfebc,	// (0x0001e033) cf0_flow_pane_g

0x8a31,	// (0x00016ba8) cf0_flow_pane_t1

0x9173,	// (0x000172ea) main_call6_pane

0x9173,	// (0x000172ea) main_calllock_pane

0x8a3f,	// (0x00016bb6) call6_btn_grp_pane_ParamLimits

0x8a3f,	// (0x00016bb6) call6_btn_grp_pane

0x8a59,	// (0x00016bd0) call6_pane_g1_ParamLimits

0x8a59,	// (0x00016bd0) call6_pane_g1

0x8a6e,	// (0x00016be5) popup_call6_1st_window_ParamLimits

0x8a6e,	// (0x00016be5) popup_call6_1st_window

0x8a7f,	// (0x00016bf6) popup_call6_2nd_window_ParamLimits

0x8a7f,	// (0x00016bf6) popup_call6_2nd_window

0x8a90,	// (0x00016c07) cell_call6_btn_pane_ParamLimits

0x8a90,	// (0x00016c07) cell_call6_btn_pane

0xa6ff,	// (0x00018876) bg_popup_call2_in_pane_cp03

0xede4,	// (0x0001cf5b) popup_call6_1st_window_g1

0xedec,	// (0x0001cf63) popup_call6_1st_window_g2

0xedf4,	// (0x0001cf6b) popup_call6_1st_window_g3

0x0002,

0xfec1,	// (0x0001e038) popup_call6_1st_window_g

0xedfc,	// (0x0001cf73) popup_call6_1st_window_t1

0xee26,	// (0x0001cf9d) popup_call6_1st_window_t2

0xee36,	// (0x0001cfad) popup_call6_1st_window_t3

0x0002,

0xfec8,	// (0x0001e03f) popup_call6_1st_window_t

0xa6ff,	// (0x00018876) bg_popup_call2_in_pane_cp04

0xede4,	// (0x0001cf5b) popup_call6_2nd_window_g1

0xedec,	// (0x0001cf63) popup_call6_2nd_window_g2

0xedf4,	// (0x0001cf6b) popup_call6_2nd_window_g3

0x0002,

0xfec1,	// (0x0001e038) popup_call6_2nd_window_g

0xedfc,	// (0x0001cf73) popup_call6_2nd_window_t1

0x9173,	// (0x000172ea) bg_button_pane_cp15

0xee46,	// (0x0001cfbd) cell_call6_btn_pane_g1

0xee4f,	// (0x0001cfc6) cell_call6_btn_pane_t1

0x8aa4,	// (0x00016c1b) listscroll_wgtman_pane_ParamLimits

0x8aa4,	// (0x00016c1b) listscroll_wgtman_pane

0x8ac7,	// (0x00016c3e) wgtman_btn_pane_ParamLimits

0x8ac7,	// (0x00016c3e) wgtman_btn_pane

0xa5b2,	// (0x00018729) aid_scroll_copy1

0xee5e,	// (0x0001cfd5) list_wgtman_pane

0x8b0a,	// (0x00016c81) wgtman_btn_pane_g1_ParamLimits

0x8b0a,	// (0x00016c81) wgtman_btn_pane_g1

0x8b36,	// (0x00016cad) wgtman_btn_pane_t1_ParamLimits

0x8b36,	// (0x00016cad) wgtman_btn_pane_t1

0xee68,	// (0x0001cfdf) wgtman_btn_pane_t2_ParamLimits

0xee68,	// (0x0001cfdf) wgtman_btn_pane_t2

0x0001,

0xfecf,	// (0x0001e046) wgtman_btn_pane_t_ParamLimits

0xfecf,	// (0x0001e046) wgtman_btn_pane_t

0x8b73,	// (0x00016cea) listrow_wgtman_pane_ParamLimits

0x8b73,	// (0x00016cea) listrow_wgtman_pane

0x8b86,	// (0x00016cfd) listrow_wgtman_pane_g1

0x8b93,	// (0x00016d0a) listrow_wgtman_pane_g2

0x0001,

0xfed4,	// (0x0001e04b) listrow_wgtman_pane_g

0x8bb1,	// (0x00016d28) listrow_wgtman_pane_t1

0x8bc9,	// (0x00016d40) listrow_wgtman_pane_t2

0x0001,

0xfed9,	// (0x0001e050) listrow_wgtman_pane_t

0x8bef,	// (0x00016d66) wait_bar_pane_cp09

0xee7f,	// (0x0001cff6) main_calllock_btn_pane

0xee89,	// (0x0001d000) main_calllock_pane_g1

0x9173,	// (0x000172ea) bg_button_pane_cp17

0xee94,	// (0x0001d00b) main_calllock_btn_pane_g1

0xee9d,	// (0x0001d014) main_calllock_btn_pane_t1

0x9173,	// (0x000172ea) main_dialer3_pane

0x9173,	// (0x000172ea) main_fmrd2_pane

0xc0a6,	// (0x0001a21d) main_fs_bigclock_unlock_btn_pane_g1

0xeeb4,	// (0x0001d02b) main_fs_bigclock_unlock_btn_pane_t1

0x8c01,	// (0x00016d78) area_fmrd2_info_pane_ParamLimits

0x8c01,	// (0x00016d78) area_fmrd2_info_pane

0x8c12,	// (0x00016d89) area_fmrd2_visual_pane_ParamLimits

0x8c12,	// (0x00016d89) area_fmrd2_visual_pane

0x8c20,	// (0x00016d97) fmrd2_indi_pane_ParamLimits

0x8c20,	// (0x00016d97) fmrd2_indi_pane

0x8c2d,	// (0x00016da4) area_fmrd2_visual_pane_g1

0x8c35,	// (0x00016dac) area_fmrd2_visual_pane_t1

0x8c45,	// (0x00016dbc) area_fmrd2_visual_pane_t2

0x8c55,	// (0x00016dcc) area_fmrd2_visual_pane_t3

0x0002,

0xfee3,	// (0x0001e05a) area_fmrd2_visual_pane_t

0x8c65,	// (0x00016ddc) area_fmrd2_info_pane_g1

0x8c6d,	// (0x00016de4) area_fmrd2_info_pane_t1

0x8c7d,	// (0x00016df4) area_fmrd2_info_pane_t2

0x8c8d,	// (0x00016e04) area_fmrd2_info_pane_t3

0x8c9d,	// (0x00016e14) area_fmrd2_info_pane_t4

0x0003,

0xfeea,	// (0x0001e061) area_fmrd2_info_pane_t

0x8cab,	// (0x00016e22) fmrd2_indi_pane_t1

0x8cbb,	// (0x00016e32) fmrd2_indi_pane_t2

0x8ccb,	// (0x00016e42) fmrd2_indi_pane_t3

0x0002,

0xfef3,	// (0x0001e06a) fmrd2_indi_pane_t

0xdfa6,	// (0x0001c11d) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xdfa6,	// (0x0001c11d) list_single_fs_bigclock_indicator_pane_g5

0xe04d,	// (0x0001c1c4) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe04d,	// (0x0001c1c4) list_single_fs_bigclock_indicator_pane_t5

0x83f0,	// (0x00016567) aid_cell_bcale_month_pane_ParamLimits

0x83f0,	// (0x00016567) aid_cell_bcale_month_pane

0x8408,	// (0x0001657f) bcale_month_pane_ParamLimits

0x8408,	// (0x0001657f) bcale_month_pane

0x841f,	// (0x00016596) bcale_preview_pane_ParamLimits

0x841f,	// (0x00016596) bcale_preview_pane

0xec13,	// (0x0001cd8a) list_single_fs_bigclock_pane_t1_ParamLimits

0xec32,	// (0x0001cda9) list_single_fs_bigclock_pane_t2_ParamLimits

0xec32,	// (0x0001cda9) list_single_fs_bigclock_pane_t2

0x0001,

0xfe7a,	// (0x0001dff1) list_single_fs_bigclock_pane_t_ParamLimits

0xfe7a,	// (0x0001dff1) list_single_fs_bigclock_pane_t

0xeeac,	// (0x0001d023) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfede,	// (0x0001e055) main_fs_bigclock_unlock_btn_pane_g

0x8cdb,	// (0x00016e52) aid_dia3_key_size_ParamLimits

0x8cdb,	// (0x00016e52) aid_dia3_key_size

0x8cea,	// (0x00016e61) aid_dia3_listrow_size_ParamLimits

0x8cea,	// (0x00016e61) aid_dia3_listrow_size

0x8cff,	// (0x00016e76) dia3_keypad_fun_pane_ParamLimits

0x8cff,	// (0x00016e76) dia3_keypad_fun_pane

0x8d1b,	// (0x00016e92) dia3_keypad_num_pane_ParamLimits

0x8d1b,	// (0x00016e92) dia3_keypad_num_pane

0x8d36,	// (0x00016ead) dia3_listscroll_pane_ParamLimits

0x8d36,	// (0x00016ead) dia3_listscroll_pane

0x8d49,	// (0x00016ec0) dia3_numentry_pane_ParamLimits

0x8d49,	// (0x00016ec0) dia3_numentry_pane

0xeec2,	// (0x0001d039) dia3_list_pane

0xeecd,	// (0x0001d044) scroll_pane_cp12

0x9173,	// (0x000172ea) bg_dia3_numentry_pane

0x8d5d,	// (0x00016ed4) dia3_numentry_pane_t1

0x8d6c,	// (0x00016ee3) cell_dia3_key_num_pane

0x8d74,	// (0x00016eeb) cell_dia3_key0_fun_pane_ParamLimits

0x8d74,	// (0x00016eeb) cell_dia3_key0_fun_pane

0x8d88,	// (0x00016eff) cell_dia3_key1_fun_pane_ParamLimits

0x8d88,	// (0x00016eff) cell_dia3_key1_fun_pane

0x8da0,	// (0x00016f17) dia3_listrow_pane

0xdc99,	// (0x0001be10) bg_dia3_numentry_pane_g1

0x9173,	// (0x000172ea) bg_button_pane_cp21

0xeed8,	// (0x0001d04f) cell_dia3_key_num_pane_t1

0xeee6,	// (0x0001d05d) cell_dia3_key_num_pane_t2

0xeef5,	// (0x0001d06c) cell_dia3_key_num_pane_t3

0xef04,	// (0x0001d07b) cell_dia3_key_num_pane_t4

0x0003,

0xfefa,	// (0x0001e071) cell_dia3_key_num_pane_t

0x9173,	// (0x000172ea) bg_button_pane_cp19

0x8db2,	// (0x00016f29) cell_dia3_key0_fun_pane_g1

0x9173,	// (0x000172ea) bg_button_pane_cp20

0x8dba,	// (0x00016f31) cell_dia3_key1_fun_pane_g1

0x8dc2,	// (0x00016f39) area_left_week_number_pane

0x8dcc,	// (0x00016f43) area_top_day_name_pane

0x8dd8,	// (0x00016f4f) frame_month_view_pane

0x8de2,	// (0x00016f59) grid_month_view_pane

0xef13,	// (0x0001d08a) cell_top_day_name_pane_ParamLimits

0xef13,	// (0x0001d08a) cell_top_day_name_pane

0x8dec,	// (0x00016f63) cell_area_left_week_number_pane_ParamLimits

0x8dec,	// (0x00016f63) cell_area_left_week_number_pane

0x8e00,	// (0x00016f77) cell_month_view_pane_ParamLimits

0x8e00,	// (0x00016f77) cell_month_view_pane

0xef2d,	// (0x0001d0a4) frm_month_g1

0x8e1d,	// (0x00016f94) frm_month_g2

0x8e27,	// (0x00016f9e) frm_month_g3

0x8e31,	// (0x00016fa8) frm_month_g4

0x8e3b,	// (0x00016fb2) frm_month_g5

0x8e45,	// (0x00016fbc) frm_month_g6

0x8e4f,	// (0x00016fc6) frm_month_g7

0xef36,	// (0x0001d0ad) frm_month_g8

0xef3f,	// (0x0001d0b6) frm_month_g9

0xef48,	// (0x0001d0bf) frm_month_g10

0xef51,	// (0x0001d0c8) frm_month_g11

0xef5a,	// (0x0001d0d1) frm_month_g12

0xef63,	// (0x0001d0da) frm_month_g13

0xef6c,	// (0x0001d0e3) frm_month_g14

0xef77,	// (0x0001d0ee) frm_month_g15

0xef82,	// (0x0001d0f9) frm_month_g16

0x000f,

0xff03,	// (0x0001e07a) frm_month_g

0x8e59,	// (0x00016fd0) cell_top_day_name_pane_t1

0x8e68,	// (0x00016fdf) cell_area_left_week_number_pane_g1

0x8e70,	// (0x00016fe7) cell_area_left_week_number_pane_t1

0xc0a6,	// (0x0001a21d) cell_month_view_pane_g1

0x8e7f,	// (0x00016ff6) cell_month_view_pane_t1

0x9173,	// (0x000172ea) main_fps_pane

0xe314,	// (0x0001c48b) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe314,	// (0x0001c48b) cmail_ddmenu_btn02_pane_cp1

0xe330,	// (0x0001c4a7) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe330,	// (0x0001c4a7) cmail_ddmenu_btn02_pane_cp2

0x86d6,	// (0x0001684d) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x86d6,	// (0x0001684d) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe2d,	// (0x0001dfa4) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe2d,	// (0x0001dfa4) cmail_ddmenu_btn02_pane_g

0x86f7,	// (0x0001686e) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x86f7,	// (0x0001686e) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe32,	// (0x0001dfa9) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe32,	// (0x0001dfa9) cmail_ddmenu_btn02_pane_t

0x8e8e,	// (0x00017005) fps_text_pane_ParamLimits

0x8e8e,	// (0x00017005) fps_text_pane

0x8ea5,	// (0x0001701c) main_fps_pane_g1_ParamLimits

0x8ea5,	// (0x0001701c) main_fps_pane_g1

0x8ebf,	// (0x00017036) wait_bar_pane_cp010_ParamLimits

0x8ebf,	// (0x00017036) wait_bar_pane_cp010

0x8ed0,	// (0x00017047) fps_text_pane_t1_ParamLimits

0x8ed0,	// (0x00017047) fps_text_pane_t1

0xee0b,	// (0x0001cf82) cam4_image_uncrop_pane_g1

0xee14,	// (0x0001cf8b) cam4_image_uncrop_pane_g2

0x5cf5,	// (0x00013e6c) cam4_image_uncrop_pane_g3

0x5cfe,	// (0x00013e75) cam4_image_uncrop_pane_g4

0x0003,

0xf8f9,	// (0x0001da70) cam4_image_uncrop_pane_g

0x8da0,	// (0x00016f17) dia3_listrow_pane_ParamLimits

0x9173,	// (0x000172ea) main_phob2_pane

0x8212,	// (0x00016389) cell_tport_appsw_pane_cp02_ParamLimits

0x8212,	// (0x00016389) cell_tport_appsw_pane_cp02

0x8226,	// (0x0001639d) cell_tport_appsw_pane_cp03_ParamLimits

0x8226,	// (0x0001639d) cell_tport_appsw_pane_cp03

0x9173,	// (0x000172ea) phob2_contact_card_pane

0x9173,	// (0x000172ea) phob2_listscroll_pane

0xef8d,	// (0x0001d104) phob2_list_pane

0xef95,	// (0x0001d10c) scroll_pane_cp034

0x8ee8,	// (0x0001705f) phob2_cc_data_pane_ParamLimits

0x8ee8,	// (0x0001705f) phob2_cc_data_pane

0x8f07,	// (0x0001707e) phob2_cc_listscroll_pane_ParamLimits

0x8f07,	// (0x0001707e) phob2_cc_listscroll_pane

0xcf11,	// (0x0001b088) list_double_large_graphic_phob2_pane_ParamLimits

0xcf11,	// (0x0001b088) list_double_large_graphic_phob2_pane

0x8f25,	// (0x0001709c) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x8f25,	// (0x0001709c) list_double_large_graphic_phob2_pane_g1

0x8f32,	// (0x000170a9) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x8f32,	// (0x000170a9) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff24,	// (0x0001e09b) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff24,	// (0x0001e09b) list_double_large_graphic_phob2_pane_g

0x8f3e,	// (0x000170b5) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x8f3e,	// (0x000170b5) list_double_large_graphic_phob2_pane_t1

0x8f53,	// (0x000170ca) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x8f53,	// (0x000170ca) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff29,	// (0x0001e0a0) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff29,	// (0x0001e0a0) list_double_large_graphic_phob2_pane_t

0x9173,	// (0x000172ea) list_highlight_pane_cp024

0xef9d,	// (0x0001d114) phob2_cc_button_pane

0x8f65,	// (0x000170dc) phob2_cc_data_pane_g1_ParamLimits

0x8f65,	// (0x000170dc) phob2_cc_data_pane_g1

0x8f7a,	// (0x000170f1) phob2_cc_data_pane_g2_ParamLimits

0x8f7a,	// (0x000170f1) phob2_cc_data_pane_g2

0x0001,

0xff2e,	// (0x0001e0a5) phob2_cc_data_pane_g_ParamLimits

0xff2e,	// (0x0001e0a5) phob2_cc_data_pane_g

0x8f8c,	// (0x00017103) phob2_cc_data_pane_t1_ParamLimits

0x8f8c,	// (0x00017103) phob2_cc_data_pane_t1

0x8fa4,	// (0x0001711b) phob2_cc_data_pane_t2_ParamLimits

0x8fa4,	// (0x0001711b) phob2_cc_data_pane_t2

0x8fbc,	// (0x00017133) phob2_cc_data_pane_t3_ParamLimits

0x8fbc,	// (0x00017133) phob2_cc_data_pane_t3

0x0002,

0xff33,	// (0x0001e0aa) phob2_cc_data_pane_t_ParamLimits

0xff33,	// (0x0001e0aa) phob2_cc_data_pane_t

0xefa5,	// (0x0001d11c) phob2_cc_list_pane_ParamLimits

0xefa5,	// (0x0001d11c) phob2_cc_list_pane

0xd24d,	// (0x0001b3c4) scroll_pane_cp035_ParamLimits

0xd24d,	// (0x0001b3c4) scroll_pane_cp035

0x91e3,	// (0x0001735a) bg_button_pane_cp033

0xefb1,	// (0x0001d128) phob2_cc_button_pane_g1

0xefbd,	// (0x0001d134) phob2_cc_button_pane_t1

0xefd2,	// (0x0001d149) phob2_cc_button_pane_t2

0x0001,

0xff3a,	// (0x0001e0b1) phob2_cc_button_pane_t

0x8fd6,	// (0x0001714d) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x8fd6,	// (0x0001714d) list_double_large_graphic_phob2_cc_pane

0x8fea,	// (0x00017161) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x8fea,	// (0x00017161) list_double_large_graphic_phob2_cc_pane_g1

0x8ff6,	// (0x0001716d) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x8ff6,	// (0x0001716d) list_double_large_graphic_phob2_cc_pane_g2

0x9002,	// (0x00017179) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x9002,	// (0x00017179) list_double_large_graphic_phob2_cc_pane_g3

0x900e,	// (0x00017185) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x900e,	// (0x00017185) list_double_large_graphic_phob2_cc_pane_g4

0x901a,	// (0x00017191) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x901a,	// (0x00017191) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff3f,	// (0x0001e0b6) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff3f,	// (0x0001e0b6) list_double_large_graphic_phob2_cc_pane_g

0x9026,	// (0x0001719d) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x9026,	// (0x0001719d) list_double_large_graphic_phob2_cc_pane_t1

0x904f,	// (0x000171c6) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x904f,	// (0x000171c6) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff4a,	// (0x0001e0c1) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff4a,	// (0x0001e0c1) list_double_large_graphic_phob2_cc_pane_t

0xefe4,	// (0x0001d15b) list_highlight_pane_cp025_ParamLimits

0xefe4,	// (0x0001d15b) list_highlight_pane_cp025

0x91e3,	// (0x0001735a) bg_button_pane_cp033_ParamLimits

0xefb1,	// (0x0001d128) phob2_cc_button_pane_g1_ParamLimits

0xefbd,	// (0x0001d134) phob2_cc_button_pane_t1_ParamLimits

0xefd2,	// (0x0001d149) phob2_cc_button_pane_t2_ParamLimits

0xff3a,	// (0x0001e0b1) phob2_cc_button_pane_t_ParamLimits

0x0be9,	// (0x0000ed60) popup_wgtman_window

0xcff3,	// (0x0001b16a) scroll_pane_cp038

0x8aec,	// (0x00016c63) wgtman_btn_pane_cp_01_ParamLimits

0x8aec,	// (0x00016c63) wgtman_btn_pane_cp_01

0xeff2,	// (0x0001d169) wgtman_content_pane

0xee1d,	// (0x0001cf94) wgtman_heading_pane

0x9173,	// (0x000172ea) bg_heading_pane_cp02

0xeffb,	// (0x0001d172) wgtman_heading_pane_g1

0xf003,	// (0x0001d17a) wgtman_heading_pane_t1

0xf011,	// (0x0001d188) scroll_pane_cp036

0xf019,	// (0x0001d190) wgtman_list_pane

0xf021,	// (0x0001d198) wgtman_list_pane_t1_ParamLimits

0xf021,	// (0x0001d198) wgtman_list_pane_t1

0xcd59,	// (0x0001aed0) cam4_grid_pane

0x6a46,	// (0x00014bbd) bg_button_pane_cp015_ParamLimits

0x6a5a,	// (0x00014bd1) bg_button_pane_cp016_ParamLimits

0x6a6d,	// (0x00014be4) bg_button_pane_cp017_ParamLimits

0x6ac5,	// (0x00014c3c) popup_vitu2_query_window_g3_ParamLimits

0x6ac5,	// (0x00014c3c) popup_vitu2_query_window_g3

0x6b82,	// (0x00014cf9) popup_vitu2_query_window_t6_ParamLimits

0x6b82,	// (0x00014cf9) popup_vitu2_query_window_t6

0x6bad,	// (0x00014d24) popup_vitu2_query_window_t7_ParamLimits

0x6bad,	// (0x00014d24) popup_vitu2_query_window_t7

0xee0b,	// (0x0001cf82) cam4_grid_pane_g1

0xee14,	// (0x0001cf8b) cam4_grid_pane_g2

0xf03f,	// (0x0001d1b6) cam4_grid_pane_g3

0xf048,	// (0x0001d1bf) cam4_grid_pane_g4

0x0003,

0xff4f,	// (0x0001e0c6) cam4_grid_pane_g

0x183b,	// (0x0000f9b2) aid_placing_vt_slider_lsc_ParamLimits

0x1b38,	// (0x0000fcaf) vidtel_button_pane_ParamLimits

0x1b38,	// (0x0000fcaf) vidtel_button_pane

0xf053,	// (0x0001d1ca) bg_button_pane_cp034

0x9078,	// (0x000171ef) vidtel_button_pane_g1

0xf05d,	// (0x0001d1d4) vidtel_button_pane_t1

0xd130,	// (0x0001b2a7) aid_size_vtel_slider_touch

0xd24d,	// (0x0001b3c4) scroll_pane_cp039

0xdcd7,	// (0x0001be4e) ncim_query_button_pane_cp01_ParamLimits

0xdcf6,	// (0x0001be6d) ncimui_query_pane_g1_ParamLimits

0x91e3,	// (0x0001735a) input_focus_pane_cp012_ParamLimits

0xdd1b,	// (0x0001be92) ncim_query_entry_pane_t1_ParamLimits

0xd24d,	// (0x0001b3c4) scroll_pane_cp039_ParamLimits

0x2993,	// (0x00010b0a) navi_pane_bcale_mc_g1

0x299b,	// (0x00010b12) navi_pane_bcale_mc_t1

0xe36d,	// (0x0001c4e4) main_sp_fs_email_pane_g1

0xe375,	// (0x0001c4ec) main_sp_fs_email_pane_g2

0x0001,

0xfcf0,	// (0x0001de67) main_sp_fs_email_pane_g

0xe8ad,	// (0x0001ca24) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe8ad,	// (0x0001ca24) list_single_cale_mrui_row_pane_g3

0x871f,	// (0x00016896) list_single_recal_day_pane_g5_event_pane

0xea72,	// (0x0001cbe9) list_single_recal_day_pane_g7

0xf06b,	// (0x0001d1e2) list_recal_day_event_pane_cp01

0xf074,	// (0x0001d1eb) list_recal_vselct_arw_lo_pane_cp01

0xf07c,	// (0x0001d1f3) list_recal_vselct_arw_up_pane_cp01

0xf084,	// (0x0001d1fb) list_recal_vselct_pane_cp01

0xd1a2,	// (0x0001b319) list_recal_day_event_pane_cp01_g1

0xf08e,	// (0x0001d205) list_recal_day_event_pane_cp01_t1

0xea7a,	// (0x0001cbf1) list_single_recal_day_pane_t1_ParamLimits

0xea8c,	// (0x0001cc03) list_single_recal_day_pane_t2_ParamLimits

0xfe42,	// (0x0001dfb9) list_single_recal_day_pane_t_ParamLimits

0x994c,	// (0x00017ac3) bg_notes_pane_ParamLimits

0x995a,	// (0x00017ad1) list_notes_pane_ParamLimits

0x0efb,	// (0x0000f072) scroll_pane_cp06_ParamLimits

0x9996,	// (0x00017b0d) main_notes_pane_ParamLimits

0x9173,	// (0x000172ea) main_welc_pane

0x9080,	// (0x000171f7) main_welc_body_pane_ParamLimits

0x9080,	// (0x000171f7) main_welc_body_pane

0x909d,	// (0x00017214) main_welc_opti_pane_ParamLimits

0x909d,	// (0x00017214) main_welc_opti_pane

0x90e6,	// (0x0001725d) main_welc_pane_t1_ParamLimits

0x90e6,	// (0x0001725d) main_welc_pane_t1

0x9108,	// (0x0001727f) main_welc_body_row_pane_ParamLimits

0x9108,	// (0x0001727f) main_welc_body_row_pane

0x911f,	// (0x00017296) main_welc_opti_row_pane_ParamLimits

0x911f,	// (0x00017296) main_welc_opti_row_pane

0xf09c,	// (0x0001d213) main_welc_opti_row_pane_g1

0xf0a4,	// (0x0001d21b) main_welc_opti_row_pane_t1

0xf0b3,	// (0x0001d22a) main_welc_body_row_pane_t1

0xed22,	// (0x0001ce99) popup_notif_wgt_heading_pane

0xed3c,	// (0x0001ceb3) aid_size_list_notif_wgt_del_ParamLimits

0xed49,	// (0x0001cec0) list_notif_wgt_row_pane_g1_ParamLimits

0xed55,	// (0x0001cecc) list_notif_wgt_row_pane_g2_ParamLimits

0xed61,	// (0x0001ced8) list_notif_wgt_row_pane_g3_ParamLimits

0xfea9,	// (0x0001e020) list_notif_wgt_row_pane_g_ParamLimits

0xed6e,	// (0x0001cee5) list_notif_wgt_row_pane_t1_ParamLimits

0xed83,	// (0x0001cefa) list_notif_wgt_row_pane_t2_ParamLimits

0xed95,	// (0x0001cf0c) list_notif_wgt_row_pane_t3_ParamLimits

0xfeb0,	// (0x0001e027) list_notif_wgt_row_pane_t_ParamLimits

0x8b86,	// (0x00016cfd) listrow_wgtman_pane_g1_ParamLimits

0x8b93,	// (0x00016d0a) listrow_wgtman_pane_g2_ParamLimits

0xfed4,	// (0x0001e04b) listrow_wgtman_pane_g_ParamLimits

0x8bb1,	// (0x00016d28) listrow_wgtman_pane_t1_ParamLimits

0x8bc9,	// (0x00016d40) listrow_wgtman_pane_t2_ParamLimits

0xfed9,	// (0x0001e050) listrow_wgtman_pane_t_ParamLimits

0x8bef,	// (0x00016d66) wait_bar_pane_cp09_ParamLimits

0x9173,	// (0x000172ea) bg_popup_heading_pane_cp02

0xf0c2,	// (0x0001d239) popup_notif_wgt_heading_pane_g1

0xf0ca,	// (0x0001d241) popup_notif_wgt_heading_pane_t1

0x9173,	// (0x000172ea) main_vids_pane

0x9173,	// (0x000172ea) vids_listscroll_pane

0x912f,	// (0x000172a6) scroll_pane_cp040

0x9173,	// (0x000172ea) vids_list_pane

0x913a,	// (0x000172b1) vids_list_double_pane_ParamLimits

0x913a,	// (0x000172b1) vids_list_double_pane

0x914b,	// (0x000172c2) vids_list_double_pane_g1

0x9154,	// (0x000172cb) vids_list_double_pane_t1

0x9163,	// (0x000172da) vids_list_double_pane_t2

0x0001,

0xff5d,	// (0x0001e0d4) vids_list_double_pane_t

0x91e3,	// (0x0001735a) main_ncimui_pane_ParamLimits

0x764a,	// (0x000157c1) main_ncimui_pane_g1_ParamLimits

0x7656,	// (0x000157cd) main_ncimui_pane_g2_ParamLimits

0x7656,	// (0x000157cd) main_ncimui_pane_g2

0x0001,

0xfbf5,	// (0x0001dd6c) main_ncimui_pane_g_ParamLimits

0xfbf5,	// (0x0001dd6c) main_ncimui_pane_g

0x90bc,	// (0x00017233) main_welc_pane_g1_ParamLimits

0x90bc,	// (0x00017233) main_welc_pane_g1

0x90d1,	// (0x00017248) main_welc_pane_g2_ParamLimits

0x90d1,	// (0x00017248) main_welc_pane_g2

0x0001,

0xff58,	// (0x0001e0cf) main_welc_pane_g_ParamLimits

0xff58,	// (0x0001e0cf) main_welc_pane_g
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
	};

} // end of namespace AknLayoutScalable_Elaf_pnl4_apps_nhd4_lsc_tch_Normal
