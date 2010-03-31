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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x000aa0c8 };

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
0x0156,	// (0x000aa21e) Screen

0x0162,	// (0x000aa22a) application_window

0x019e,	// (0x000aa266) area_bottom_pane_ParamLimits

0x019e,	// (0x000aa266) area_bottom_pane

0x01d7,	// (0x000aa29f) area_top_pane_ParamLimits

0x01d7,	// (0x000aa29f) area_top_pane

0x9406,	// (0x000b34ce) call_video_uplink_pane_ParamLimits

0x9406,	// (0x000b34ce) call_video_uplink_pane

0x0265,	// (0x000aa32d) main_pane_ParamLimits

0x0265,	// (0x000aa32d) main_pane

0xc82c,	// (0x000b68f4) context_pane

0x390c,	// (0x000ad9d4) navi_pane

0x393e,	// (0x000ada06) popup_cale_events_window_ParamLimits

0x393e,	// (0x000ada06) popup_cale_events_window

0xc83f,	// (0x000b6907) popup_mup_playback_window

0x3956,	// (0x000ada1e) signal_pane

0xa2b0,	// (0x000b4378) main_browser_pane

0xb3b7,	// (0x000b547f) main_burst_pane

0x366a,	// (0x000ad732) main_calc_pane

0xc812,	// (0x000b68da) main_cale_day_pane

0x367e,	// (0x000ad746) main_cale_month_pane

0xc812,	// (0x000b68da) main_cale_week_pane

0xb3b7,	// (0x000b547f) main_call_pane

0x9f71,	// (0x000b4039) main_call_poc_pane

0xb3b7,	// (0x000b547f) main_camera_pane

0xb3b7,	// (0x000b547f) main_chi_dic_pane

0xb142,	// (0x000b520a) main_clock_pane

0x9f71,	// (0x000b4039) main_fmradio_pane

0xb3b7,	// (0x000b547f) main_graph_messa_pane

0x9f71,	// (0x000b4039) main_help_pane

0xa2b0,	// (0x000b4378) main_im_pane

0xa1cc,	// (0x000b4294) main_image_pane_ParamLimits

0xa1cc,	// (0x000b4294) main_image_pane

0x9f71,	// (0x000b4039) main_location2_pane

0xb3b7,	// (0x000b547f) main_location_pane

0xa1cc,	// (0x000b4294) main_messa_pane

0x9f71,	// (0x000b4039) main_mp2_pane

0xb3b7,	// (0x000b547f) main_mp_pane

0x9f71,	// (0x000b4039) main_msg_pane

0x9f71,	// (0x000b4039) main_mup_eq_pane

0x9f71,	// (0x000b4039) main_mup_pane

0xa2b0,	// (0x000b4378) main_notes_pane

0x9f71,	// (0x000b4039) main_pec_pane

0x9f71,	// (0x000b4039) main_phob_pane

0x9f71,	// (0x000b4039) main_pinb_pane

0x9f71,	// (0x000b4039) main_postcard_pane

0x9f71,	// (0x000b4039) main_qdial_pane

0xb3b7,	// (0x000b547f) main_skin_pane

0x9f71,	// (0x000b4039) main_smil2_pane

0xb3b7,	// (0x000b547f) main_smil_pane

0xb3b7,	// (0x000b547f) main_video_pane

0xb3b7,	// (0x000b547f) main_video_tele_pane

0xa1cc,	// (0x000b4294) main_viewer_pane_ParamLimits

0xa1cc,	// (0x000b4294) main_viewer_pane

0xb3b7,	// (0x000b547f) main_vorec_pane

0x36d0,	// (0x000ad798) popup_blid_sat_info_window_ParamLimits

0x36d0,	// (0x000ad798) popup_blid_sat_info_window

0x3728,	// (0x000ad7f0) popup_dyc_status_message_window_ParamLimits

0x3728,	// (0x000ad7f0) popup_dyc_status_message_window

0x3740,	// (0x000ad808) popup_grid_large_graphic_window_ParamLimits

0x3740,	// (0x000ad808) popup_grid_large_graphic_window

0x37f6,	// (0x000ad8be) popup_loc_request_window_ParamLimits

0x37f6,	// (0x000ad8be) popup_loc_request_window

0x38e4,	// (0x000ad9ac) popup_wml_address_window_ParamLimits

0x38e4,	// (0x000ad9ac) popup_wml_address_window

0x34a4,	// (0x000ad56c) call_muted_g1

0x3157,	// (0x000ad21f) popup_call_audio_conf_window_ParamLimits

0x3157,	// (0x000ad21f) popup_call_audio_conf_window

0x34b8,	// (0x000ad580) popup_call_audio_first_window_ParamLimits

0x34b8,	// (0x000ad580) popup_call_audio_first_window

0x352e,	// (0x000ad5f6) popup_call_audio_in_window_ParamLimits

0x352e,	// (0x000ad5f6) popup_call_audio_in_window

0x356a,	// (0x000ad632) popup_call_audio_out_window_ParamLimits

0x356a,	// (0x000ad632) popup_call_audio_out_window

0x35a4,	// (0x000ad66c) popup_call_audio_second_window_ParamLimits

0x35a4,	// (0x000ad66c) popup_call_audio_second_window

0x35fa,	// (0x000ad6c2) popup_call_audio_wait_window_ParamLimits

0x35fa,	// (0x000ad6c2) popup_call_audio_wait_window

0x362f,	// (0x000ad6f7) popup_number_entry_window_ParamLimits

0x362f,	// (0x000ad6f7) popup_number_entry_window

0x943c,	// (0x000b3504) bg_popup_call_pane_cp05_ParamLimits

0x943c,	// (0x000b3504) bg_popup_call_pane_cp05

0x945c,	// (0x000b3524) popup_number_entry_window_t1

0x946f,	// (0x000b3537) popup_number_entry_window_t2

0x9481,	// (0x000b3549) popup_number_entry_window_t3

0x0003,

0xf0cd,	// (0x000b9195) popup_number_entry_window_t

0x9493,	// (0x000b355b) text_title_cp2

0x94a6,	// (0x000b356e) bg_popup_call_pane_cp_ParamLimits

0x94a6,	// (0x000b356e) bg_popup_call_pane_cp

0x94b4,	// (0x000b357c) call_thumbnail_pane

0x94bc,	// (0x000b3584) popup_call_audio_in_window_g1_ParamLimits

0x94bc,	// (0x000b3584) popup_call_audio_in_window_g1

0x94c8,	// (0x000b3590) popup_call_audio_in_window_g2_ParamLimits

0x94c8,	// (0x000b3590) popup_call_audio_in_window_g2

0x94d4,	// (0x000b359c) popup_call_audio_in_window_g3_ParamLimits

0x94d4,	// (0x000b359c) popup_call_audio_in_window_g3

0x0002,

0xf0d6,	// (0x000b919e) popup_call_audio_in_window_g_ParamLimits

0xf0d6,	// (0x000b919e) popup_call_audio_in_window_g

0x94e0,	// (0x000b35a8) popup_call_audio_in_window_t1_ParamLimits

0x94e0,	// (0x000b35a8) popup_call_audio_in_window_t1

0x94fc,	// (0x000b35c4) popup_call_audio_in_window_t2_ParamLimits

0x94fc,	// (0x000b35c4) popup_call_audio_in_window_t2

0x9518,	// (0x000b35e0) popup_call_audio_in_window_t3_ParamLimits

0x9518,	// (0x000b35e0) popup_call_audio_in_window_t3

0x0002,

0xf0dd,	// (0x000b91a5) popup_call_audio_in_window_t_ParamLimits

0xf0dd,	// (0x000b91a5) popup_call_audio_in_window_t

0x94a6,	// (0x000b356e) bg_popup_call_pane_cp01_ParamLimits

0x94a6,	// (0x000b356e) bg_popup_call_pane_cp01

0x94b4,	// (0x000b357c) call_thumbnail_pane_cp02

0x952b,	// (0x000b35f3) call_type_pane_cp022

0x9533,	// (0x000b35fb) popup_call_audio_out_window_g1_ParamLimits

0x9533,	// (0x000b35fb) popup_call_audio_out_window_g1

0x9545,	// (0x000b360d) popup_call_audio_out_window_g2_ParamLimits

0x9545,	// (0x000b360d) popup_call_audio_out_window_g2

0x9551,	// (0x000b3619) popup_call_audio_out_window_g3_ParamLimits

0x9551,	// (0x000b3619) popup_call_audio_out_window_g3

0x0002,

0xf0e4,	// (0x000b91ac) popup_call_audio_out_window_g_ParamLimits

0xf0e4,	// (0x000b91ac) popup_call_audio_out_window_g

0x9563,	// (0x000b362b) popup_call_audio_out_window_t1_ParamLimits

0x9563,	// (0x000b362b) popup_call_audio_out_window_t1

0x957b,	// (0x000b3643) popup_call_audio_out_window_t2_ParamLimits

0x957b,	// (0x000b3643) popup_call_audio_out_window_t2

0x0001,

0xf0eb,	// (0x000b91b3) popup_call_audio_out_window_t_ParamLimits

0xf0eb,	// (0x000b91b3) popup_call_audio_out_window_t

0x9590,	// (0x000b3658) bg_popup_call_pane_ParamLimits

0x9590,	// (0x000b3658) bg_popup_call_pane

0x0422,	// (0x000aa4ea) call_thumbnail_pane_cp_ParamLimits

0x0422,	// (0x000aa4ea) call_thumbnail_pane_cp

0x9614,	// (0x000b36dc) call_type_pane_cp01_ParamLimits

0x9614,	// (0x000b36dc) call_type_pane_cp01

0x9658,	// (0x000b3720) popup_call_audio_first_window_g1_ParamLimits

0x9658,	// (0x000b3720) popup_call_audio_first_window_g1

0x96a4,	// (0x000b376c) popup_call_audio_first_window_g2_ParamLimits

0x96a4,	// (0x000b376c) popup_call_audio_first_window_g2

0x0001,

0xf0f0,	// (0x000b91b8) popup_call_audio_first_window_g_ParamLimits

0xf0f0,	// (0x000b91b8) popup_call_audio_first_window_g

0x96e8,	// (0x000b37b0) popup_call_audio_first_window_t1_ParamLimits

0x96e8,	// (0x000b37b0) popup_call_audio_first_window_t1

0x9eb6,	// (0x000b3f7e) popup_call_audio_first_window_t4_ParamLimits

0x9eb6,	// (0x000b3f7e) popup_call_audio_first_window_t4

0x9f42,	// (0x000b400a) popup_call_audio_first_window_t5_ParamLimits

0x9f42,	// (0x000b400a) popup_call_audio_first_window_t5

0x0002,

0xf0f5,	// (0x000b91bd) popup_call_audio_first_window_t_ParamLimits

0xf0f5,	// (0x000b91bd) popup_call_audio_first_window_t

0x9f71,	// (0x000b4039) bg_popup_call_pane_cp02

0x9f7b,	// (0x000b4043) call_type_pane_cp023

0x9f83,	// (0x000b404b) popup_call_audio_wait_window_g1

0x9f8b,	// (0x000b4053) popup_call_audio_wait_window_g2

0x0001,

0xf0fc,	// (0x000b91c4) popup_call_audio_wait_window_g

0x9f93,	// (0x000b405b) popup_call_audio_wait_window_t3

0x9fa1,	// (0x000b4069) bg_popup_call_pane_cp03_ParamLimits

0x9fa1,	// (0x000b4069) bg_popup_call_pane_cp03

0xa001,	// (0x000b40c9) call_thumbnail_pane_cp011_ParamLimits

0xa001,	// (0x000b40c9) call_thumbnail_pane_cp011

0xa00d,	// (0x000b40d5) call_type_pane_cp034_ParamLimits

0xa00d,	// (0x000b40d5) call_type_pane_cp034

0xa049,	// (0x000b4111) popup_call_audio_second_window_g1_ParamLimits

0xa049,	// (0x000b4111) popup_call_audio_second_window_g1

0xa085,	// (0x000b414d) popup_call_audio_second_window_g2_ParamLimits

0xa085,	// (0x000b414d) popup_call_audio_second_window_g2

0x0001,

0xf101,	// (0x000b91c9) popup_call_audio_second_window_g_ParamLimits

0xf101,	// (0x000b91c9) popup_call_audio_second_window_g

0xa0c1,	// (0x000b4189) popup_call_audio_second_window_t1_ParamLimits

0xa0c1,	// (0x000b4189) popup_call_audio_second_window_t1

0xa142,	// (0x000b420a) popup_call_audio_second_window_t2_ParamLimits

0xa142,	// (0x000b420a) popup_call_audio_second_window_t2

0xa178,	// (0x000b4240) popup_call_audio_second_window_t3_ParamLimits

0xa178,	// (0x000b4240) popup_call_audio_second_window_t3

0x0002,

0xf106,	// (0x000b91ce) popup_call_audio_second_window_t_ParamLimits

0xf106,	// (0x000b91ce) popup_call_audio_second_window_t

0x9f71,	// (0x000b4039) bg_popup_call_pane_cp04

0xa1ae,	// (0x000b4276) list_conf_pane

0xa1b6,	// (0x000b427e) popup_call_audio_conf_window_t1

0xa1c4,	// (0x000b428c) call_thumbnail_pane_g1

0xa1cc,	// (0x000b4294) bg_pinb_pane_ParamLimits

0xa1cc,	// (0x000b4294) bg_pinb_pane

0xa1da,	// (0x000b42a2) find_pinb_pane

0xa1e3,	// (0x000b42ab) listscroll_pinb_pane_ParamLimits

0xa1e3,	// (0x000b42ab) listscroll_pinb_pane

0xa1f2,	// (0x000b42ba) pinb_bg_pane_g1

0x0446,	// (0x000aa50e) pinb_bg_pane_g2

0x0452,	// (0x000aa51a) pinb_bg_pane_g3

0x045e,	// (0x000aa526) pinb_bg_pane_g4

0x046a,	// (0x000aa532) pinb_bg_pane_g5

0x0476,	// (0x000aa53e) pinb_bg_pane_g6

0x0481,	// (0x000aa549) pinb_bg_pane_g7

0x048c,	// (0x000aa554) pinb_bg_pane_g8

0x0497,	// (0x000aa55f) pinb_bg_pane_g9

0x04a1,	// (0x000aa569) pinb_bg_pane_g10

0x0009,

0xf10d,	// (0x000b91d5) pinb_bg_pane_g

0x04be,	// (0x000aa586) grid_pinb_pane

0x04c7,	// (0x000aa58f) list_pinb_pane

0x04d0,	// (0x000aa598) scroll_pane_cp01_ParamLimits

0x04d0,	// (0x000aa598) scroll_pane_cp01

0xa1fc,	// (0x000b42c4) find_pinb_pane_g1_ParamLimits

0xa1fc,	// (0x000b42c4) find_pinb_pane_g1

0xa214,	// (0x000b42dc) find_pinb_pane_t1

0xa226,	// (0x000b42ee) find_pinb_pane_t2

0x0001,

0xf127,	// (0x000b91ef) find_pinb_pane_t

0xa23b,	// (0x000b4303) input_focus_pane_cp01_ParamLimits

0xa23b,	// (0x000b4303) input_focus_pane_cp01

0x04e2,	// (0x000aa5aa) cell_pinb_pane_ParamLimits

0x04e2,	// (0x000aa5aa) cell_pinb_pane

0xa247,	// (0x000b430f) cell_pinb_pane_g1_ParamLimits

0xa247,	// (0x000b430f) cell_pinb_pane_g1

0xa25a,	// (0x000b4322) cell_pinb_pane_g2_ParamLimits

0xa25a,	// (0x000b4322) cell_pinb_pane_g2

0xa266,	// (0x000b432e) cell_pinb_pane_g3_ParamLimits

0xa266,	// (0x000b432e) cell_pinb_pane_g3

0x0002,

0xf12c,	// (0x000b91f4) cell_pinb_pane_g_ParamLimits

0xf12c,	// (0x000b91f4) cell_pinb_pane_g

0x9f71,	// (0x000b4039) grid_highlight_pane_cp01

0x0510,	// (0x000aa5d8) list_pinb_item_pane_ParamLimits

0x0510,	// (0x000aa5d8) list_pinb_item_pane

0x9f71,	// (0x000b4039) list_highlight_pane_cp02

0x0523,	// (0x000aa5eb) list_pinb_item_pane_g1_ParamLimits

0x0523,	// (0x000aa5eb) list_pinb_item_pane_g1

0x0530,	// (0x000aa5f8) list_pinb_item_pane_g2_ParamLimits

0x0530,	// (0x000aa5f8) list_pinb_item_pane_g2

0x053c,	// (0x000aa604) list_pinb_item_pane_g3_ParamLimits

0x053c,	// (0x000aa604) list_pinb_item_pane_g3

0x054d,	// (0x000aa615) list_pinb_item_pane_g4_ParamLimits

0x054d,	// (0x000aa615) list_pinb_item_pane_g4

0x0003,

0xf133,	// (0x000b91fb) list_pinb_item_pane_g_ParamLimits

0xf133,	// (0x000b91fb) list_pinb_item_pane_g

0x0559,	// (0x000aa621) list_pinb_item_pane_t1_ParamLimits

0x0559,	// (0x000aa621) list_pinb_item_pane_t1

0x058e,	// (0x000aa656) calc_display_pane

0x05b6,	// (0x000aa67e) calc_paper_pane

0x05d9,	// (0x000aa6a1) grid_calc_pane

0x9f71,	// (0x000b4039) bg_list_pane_cp01

0x0607,	// (0x000aa6cf) clock_g1

0x060f,	// (0x000aa6d7) clock_g2

0x0001,

0xf13c,	// (0x000b9204) clock_g

0x0617,	// (0x000aa6df) clock_t1_ParamLimits

0x0617,	// (0x000aa6df) clock_t1

0x062c,	// (0x000aa6f4) clock_t2_ParamLimits

0x062c,	// (0x000aa6f4) clock_t2

0x063e,	// (0x000aa706) clock_t3_ParamLimits

0x063e,	// (0x000aa706) clock_t3

0x0650,	// (0x000aa718) clock_t4_ParamLimits

0x0650,	// (0x000aa718) clock_t4

0x0662,	// (0x000aa72a) clock_t5_ParamLimits

0x0662,	// (0x000aa72a) clock_t5

0x0677,	// (0x000aa73f) clock_t6_ParamLimits

0x0677,	// (0x000aa73f) clock_t6

0x0689,	// (0x000aa751) clock_t7_ParamLimits

0x0689,	// (0x000aa751) clock_t7

0x069b,	// (0x000aa763) clock_t8_ParamLimits

0x069b,	// (0x000aa763) clock_t8

0x06af,	// (0x000aa777) clock_t9_ParamLimits

0x06af,	// (0x000aa777) clock_t9

0x0008,

0xf141,	// (0x000b9209) clock_t_ParamLimits

0xf141,	// (0x000b9209) clock_t

0xa272,	// (0x000b433a) popup_clock_analogue_window_cp02

0xa272,	// (0x000b433a) popup_clock_digital_window_cp01

0xa27a,	// (0x000b4342) listscroll_help_pane

0x9f71,	// (0x000b4039) phob_pre_status_pane

0xa284,	// (0x000b434c) grid_qdial_pane

0xa1cc,	// (0x000b4294) listscroll_mce_pane

0xa1cc,	// (0x000b4294) bg_notes_pane

0xa28e,	// (0x000b4356) list_notes_pane

0x06c3,	// (0x000aa78b) scroll_pane_cp06

0xa29c,	// (0x000b4364) bg_calc_paper_pane

0x979c,	// (0x000b3864) list_calc_pane

0xa2b0,	// (0x000b4378) bg_calc_display_pane

0x06d7,	// (0x000aa79f) calc_display_pane_t1

0x06e9,	// (0x000aa7b1) calc_display_pane_t2

0x97b6,	// (0x000b387e) calc_display_pane_t3

0x0002,

0xf154,	// (0x000b921c) calc_display_pane_t

0x06fb,	// (0x000aa7c3) cell_calc_pane_ParamLimits

0x06fb,	// (0x000aa7c3) cell_calc_pane

0xa2bc,	// (0x000b4384) bg_calc_paper_pane_g1

0xa2c8,	// (0x000b4390) bg_calc_paper_pane_g2

0xa2d4,	// (0x000b439c) bg_calc_paper_pane_g3

0xa2e0,	// (0x000b43a8) bg_calc_paper_pane_g4

0xa2ec,	// (0x000b43b4) bg_calc_paper_pane_g5

0x0732,	// (0x000aa7fa) bg_calc_paper_pane_g6

0x0743,	// (0x000aa80b) bg_calc_paper_pane_g7

0x0754,	// (0x000aa81c) bg_calc_paper_pane_g8

0x0007,

0xf15b,	// (0x000b9223) bg_calc_paper_pane_g

0x0767,	// (0x000aa82f) calc_bg_paper_pane_g9

0x077a,	// (0x000aa842) list_calc_item_pane_ParamLimits

0x077a,	// (0x000aa842) list_calc_item_pane

0xa2f8,	// (0x000b43c0) list_calc_item_pane_g1

0x97c8,	// (0x000b3890) list_calc_item_pane_t1_ParamLimits

0x97c8,	// (0x000b3890) list_calc_item_pane_t1

0x0794,	// (0x000aa85c) list_calc_item_pane_t2_ParamLimits

0x0794,	// (0x000aa85c) list_calc_item_pane_t2

0x0001,

0xf16c,	// (0x000b9234) list_calc_item_pane_t_ParamLimits

0xf16c,	// (0x000b9234) list_calc_item_pane_t

0xa305,	// (0x000b43cd) cell_calc_pane_g1

0xa30f,	// (0x000b43d7) grid_highlight_pane_cp02

0xa331,	// (0x000b43f9) bg_calc_display_pane_g1

0x97da,	// (0x000b38a2) bg_calc_display_pane_g2

0xa33a,	// (0x000b4402) bg_calc_display_pane_g3

0x0002,

0xf176,	// (0x000b923e) bg_calc_display_pane_g

0x07c6,	// (0x000aa88e) cell_qdial_pane_ParamLimits

0x07c6,	// (0x000aa88e) cell_qdial_pane

0x07da,	// (0x000aa8a2) cell_qdial_pane_g1_ParamLimits

0x07da,	// (0x000aa8a2) cell_qdial_pane_g1

0x07f0,	// (0x000aa8b8) cell_qdial_pane_g2_ParamLimits

0x07f0,	// (0x000aa8b8) cell_qdial_pane_g2

0xa343,	// (0x000b440b) cell_qdial_pane_g3_ParamLimits

0xa343,	// (0x000b440b) cell_qdial_pane_g3

0x0003,

0xf17d,	// (0x000b9245) cell_qdial_pane_g_ParamLimits

0xf17d,	// (0x000b9245) cell_qdial_pane_g

0x0816,	// (0x000aa8de) cell_qdial_pane_t1_ParamLimits

0x0816,	// (0x000aa8de) cell_qdial_pane_t1

0x082e,	// (0x000aa8f6) cell_qdial_pane_t2_ParamLimits

0x082e,	// (0x000aa8f6) cell_qdial_pane_t2

0x0841,	// (0x000aa909) cell_qdial_pane_t3_ParamLimits

0x0841,	// (0x000aa909) cell_qdial_pane_t3

0x0002,

0xf186,	// (0x000b924e) cell_qdial_pane_t_ParamLimits

0xf186,	// (0x000b924e) cell_qdial_pane_t

0x9f71,	// (0x000b4039) grid_highlight_pane_cp04

0xa34f,	// (0x000b4417) thumbnail_qdial_pane_ParamLimits

0xa34f,	// (0x000b4417) thumbnail_qdial_pane

0xa3ab,	// (0x000b4473) list_help_pane

0xa3b4,	// (0x000b447c) scroll_pane_cp02

0x0854,	// (0x000aa91c) help_list_pane_t1_ParamLimits

0x0854,	// (0x000aa91c) help_list_pane_t1

0x97e4,	// (0x000b38ac) bg_notes_pane_g2

0x97ec,	// (0x000b38b4) bg_notes_pane_g3

0x97f4,	// (0x000b38bc) notes_bg_pane_g1

0x97fc,	// (0x000b38c4) notes_bg_pane_g4

0x9804,	// (0x000b38cc) notes_bg_pane_g5

0x980c,	// (0x000b38d4) notes_bg_pane_g6

0x9814,	// (0x000b38dc) notes_bg_pane_g7

0x981c,	// (0x000b38e4) notes_bg_pane_g8

0x9824,	// (0x000b38ec) notes_bg_pane_g9

0x0006,

0xf1a4,	// (0x000b926c) notes_bg_pane_g

0x0873,	// (0x000aa93b) list_notes_text_pane_ParamLimits

0x0873,	// (0x000aa93b) list_notes_text_pane

0xa3bd,	// (0x000b4485) list_notes_text_pane_g1

0xa3c6,	// (0x000b448e) list_notes_text_pane_t1

0x0889,	// (0x000aa951) listscroll_cale_week_pane

0x08b5,	// (0x000aa97d) bg_cale_heading_pane

0xa3ee,	// (0x000b44b6) bg_cale_pane_cp01

0x08d3,	// (0x000aa99b) cale_week_corner_pane

0x08f2,	// (0x000aa9ba) cale_week_day_heading_pane

0x0915,	// (0x000aa9dd) cale_week_scroll_pane_g1

0x092e,	// (0x000aa9f6) cale_week_scroll_pane_g2

0x0946,	// (0x000aaa0e) cale_week_scroll_pane_g3

0x095e,	// (0x000aaa26) cale_week_scroll_pane_g4

0x0976,	// (0x000aaa3e) cale_week_scroll_pane_g5

0x0992,	// (0x000aaa5a) cale_week_scroll_pane_g6

0x09b2,	// (0x000aaa7a) cale_week_scroll_pane_g7

0x09d2,	// (0x000aaa9a) cale_week_scroll_pane_g8

0x09f6,	// (0x000aaabe) cale_week_scroll_pane_g9

0x0a0e,	// (0x000aaad6) cale_week_scroll_pane_g10

0x0a26,	// (0x000aaaee) cale_week_scroll_pane_g11

0x0a3e,	// (0x000aab06) cale_week_scroll_pane_g12

0x0a56,	// (0x000aab1e) cale_week_scroll_pane_g13

0x0a56,	// (0x000aab1e) cale_week_scroll_pane_g14

0x0a56,	// (0x000aab1e) cale_week_scroll_pane_g15

0x000e,

0xf1b3,	// (0x000b927b) cale_week_scroll_pane_g

0x0a6e,	// (0x000aab36) cale_week_time_pane

0x0a92,	// (0x000aab5a) grid_cale_week_pane

0xa41e,	// (0x000b44e6) scroll_pane_cp08

0x0ab8,	// (0x000aab80) cell_cale_week_pane_ParamLimits

0x0ab8,	// (0x000aab80) cell_cale_week_pane

0x0b46,	// (0x000aac0e) cale_week_day_heading_pane_t1

0x0b90,	// (0x000aac58) cale_week_day_heading_pane_t2

0x0bdf,	// (0x000aaca7) cale_week_day_heading_pane_t3

0x0c2e,	// (0x000aacf6) cale_week_day_heading_pane_t4

0x0c7d,	// (0x000aad45) cale_week_day_heading_pane_t5

0x0cd4,	// (0x000aad9c) cale_week_day_heading_pane_t6

0x0d2b,	// (0x000aadf3) cale_week_day_heading_pane_t7

0x0006,

0xf1d2,	// (0x000b929a) cale_week_day_heading_pane_t

0xa43b,	// (0x000b4503) bg_cale_side_pane

0x0d75,	// (0x000aae3d) cale_week_time_pane_t1

0x0d8f,	// (0x000aae57) cale_week_time_pane_t2

0x0da9,	// (0x000aae71) cale_week_time_pane_t3

0x0dc3,	// (0x000aae8b) cale_week_time_pane_t4

0x0ddd,	// (0x000aaea5) cale_week_time_pane_t5

0x0df7,	// (0x000aaebf) cale_week_time_pane_t6

0x0e11,	// (0x000aaed9) cale_week_time_pane_t7

0x0e31,	// (0x000aaef9) cale_week_time_pane_t8

0x0007,

0xf1e1,	// (0x000b92a9) cale_week_time_pane_t

0x0e51,	// (0x000aaf19) cell_cale_week_pane_g2

0x0e70,	// (0x000aaf38) cell_cale_week_pane_g3_ParamLimits

0x0e70,	// (0x000aaf38) cell_cale_week_pane_g3

0xa449,	// (0x000b4511) grid_highlight_pane_cp07

0xa451,	// (0x000b4519) listscroll_gms_pane

0xa45b,	// (0x000b4523) grid_gms_pane

0xa464,	// (0x000b452c) listscroll_gms_pane_g1

0xa46c,	// (0x000b4534) listscroll_gms_pane_g2

0x0001,

0xf1f2,	// (0x000b92ba) listscroll_gms_pane_g

0x0e88,	// (0x000aaf50) scroll_pane_cp010

0x0e93,	// (0x000aaf5b) cell_gms_pane_ParamLimits

0x0e93,	// (0x000aaf5b) cell_gms_pane

0x0ea5,	// (0x000aaf6d) cell_gms_pane_g1

0xa474,	// (0x000b453c) cell_gms_pane_g2

0xa3bd,	// (0x000b4485) cell_gms_pane_g3

0xa47c,	// (0x000b4544) cell_gms_pane_g4

0x0003,

0xf1f7,	// (0x000b92bf) cell_gms_pane_g

0xa485,	// (0x000b454d) grid_highlight_pane_cp09

0x344e,	// (0x000ad516) phob_pre_status_pane_g1

0x3456,	// (0x000ad51e) phob_pre_status_pane_g2

0x345e,	// (0x000ad526) phob_pre_status_pane_g3

0x3466,	// (0x000ad52e) phob_pre_status_pane_g4

0x0004,

0xf5e6,	// (0x000b96ae) phob_pre_status_pane_g

0x3476,	// (0x000ad53e) phob_pre_status_pane_t1

0x3484,	// (0x000ad54c) phob_pre_status_pane_t2

0x3494,	// (0x000ad55c) phob_pre_status_pane_t3

0x0002,

0xf5f1,	// (0x000b96b9) phob_pre_status_pane_t

0x9f71,	// (0x000b4039) bg_list_pane_cp05

0x0eb5,	// (0x000aaf7d) grid_vorec_pane

0x0ebf,	// (0x000aaf87) vorec_t1

0x0ecd,	// (0x000aaf95) vorec_t2

0x0edb,	// (0x000aafa3) vorec_t3

0x0ee9,	// (0x000aafb1) vorec_t4

0x982c,	// (0x000b38f4) vorec_t5

0x0ef7,	// (0x000aafbf) vorec_t6

0x0006,

0xf200,	// (0x000b92c8) vorec_t

0x0f13,	// (0x000aafdb) wait_bar_pane_cp01

0x0f1b,	// (0x000aafe3) cell_vorec_pane_ParamLimits

0x0f1b,	// (0x000aafe3) cell_vorec_pane

0x983a,	// (0x000b3902) cell_vorec_pane_g1

0x9f71,	// (0x000b4039) grid_highlight_pane_cp05

0x0f46,	// (0x000ab00e) cams_zoom_pane

0x0f55,	// (0x000ab01d) image_vga_pane

0x0f6f,	// (0x000ab037) main_camera_pane_g1

0x0f81,	// (0x000ab049) main_camera_pane_g2

0x0f91,	// (0x000ab059) main_camera_pane_g3

0x0fa3,	// (0x000ab06b) main_camera_pane_g4

0x0fb5,	// (0x000ab07d) main_camera_pane_g5

0x0fc7,	// (0x000ab08f) main_camera_pane_g6

0x0fd9,	// (0x000ab0a1) main_camera_pane_g7

0x0007,

0xf20f,	// (0x000b92d7) main_camera_pane_g

0x0feb,	// (0x000ab0b3) main_camera_pane_t1

0x1001,	// (0x000ab0c9) main_camera_pane_t2

0x0001,

0xf220,	// (0x000b92e8) main_camera_pane_t

0x103d,	// (0x000ab105) cams_zoom_pane_cp_ParamLimits

0x103d,	// (0x000ab105) cams_zoom_pane_cp

0x1065,	// (0x000ab12d) image_cif_pane_ParamLimits

0x1065,	// (0x000ab12d) image_cif_pane

0x10a0,	// (0x000ab168) image_subqcif_pane

0x10a8,	// (0x000ab170) main_video_pane_g1_ParamLimits

0x10a8,	// (0x000ab170) main_video_pane_g1

0x10cc,	// (0x000ab194) main_video_pane_g2_ParamLimits

0x10cc,	// (0x000ab194) main_video_pane_g2

0x1100,	// (0x000ab1c8) main_video_pane_g3_ParamLimits

0x1100,	// (0x000ab1c8) main_video_pane_g3

0x112e,	// (0x000ab1f6) main_video_pane_g4_ParamLimits

0x112e,	// (0x000ab1f6) main_video_pane_g4

0x115c,	// (0x000ab224) main_video_pane_g5_ParamLimits

0x115c,	// (0x000ab224) main_video_pane_g5

0xa499,	// (0x000b4561) main_video_pane_g6_ParamLimits

0xa499,	// (0x000b4561) main_video_pane_g6

0x0006,

0xf225,	// (0x000b92ed) main_video_pane_g_ParamLimits

0xf225,	// (0x000b92ed) main_video_pane_g

0x1185,	// (0x000ab24d) main_video_pane_t1_ParamLimits

0x1185,	// (0x000ab24d) main_video_pane_t1

0xa4b3,	// (0x000b457b) cams_zoom_pane_g1

0xa4bc,	// (0x000b4584) cams_zoom_pane_g2

0xa4c5,	// (0x000b458d) cams_zoom_pane_g3

0xa4ce,	// (0x000b4596) cams_zoom_pane_g4

0x0003,

0xf234,	// (0x000b92fc) cams_zoom_pane_g

0x11e2,	// (0x000ab2aa) grid_cams_pane

0x11fc,	// (0x000ab2c4) linegrid_cams_pane

0x120f,	// (0x000ab2d7) cell_cams_pane_ParamLimits

0x120f,	// (0x000ab2d7) cell_cams_pane

0xa4d7,	// (0x000b459f) cams_burst_image_pane

0xa4df,	// (0x000b45a7) cell_cams_pane_g1

0x9f71,	// (0x000b4039) grid_highlight_pane_cp03

0xa305,	// (0x000b43cd) mp_bg_pane_g1

0x9f71,	// (0x000b4039) bg_list_pane_cp03

0xc737,	// (0x000b67ff) bg_mp_pane

0xc73f,	// (0x000b6807) grid_mp_pane

0xc747,	// (0x000b680f) media_player_g1

0xc74f,	// (0x000b6817) media_player_t1

0xc75d,	// (0x000b6825) media_player_t2

0xc76b,	// (0x000b6833) media_player_t3

0xc779,	// (0x000b6841) media_player_t4

0xc787,	// (0x000b684f) media_player_t5

0xc795,	// (0x000b685d) media_player_t6

0xc7a3,	// (0x000b686b) media_player_t7

0x0006,

0xf5d0,	// (0x000b9698) media_player_t

0xc7b1,	// (0x000b6879) wait_bar_pane_cp02

0xf5b5,	// (0x000b967d) main_usb_pane_t

0x3445,	// (0x000ad50d) cell_mp_pane

0xa305,	// (0x000b43cd) cell_mp_pane_g1

0x9f71,	// (0x000b4039) grid_highlight_pane_cp06

0xa4e7,	// (0x000b45af) grid_skin_colour_pane

0xa4ef,	// (0x000b45b7) list_highlight_pane_cp03

0x1344,	// (0x000ab40c) skin_g1

0xa9ad,	// (0x000b4a75) skin_t1

0xa9bc,	// (0x000b4a84) skin_t2

0x0001,

0xf269,	// (0x000b9331) skin_t

0x134c,	// (0x000ab414) cell_skin_colour_pane_ParamLimits

0x134c,	// (0x000ab414) cell_skin_colour_pane

0xa9ca,	// (0x000b4a92) cell_skin_colour_pane_g1

0x13c5,	// (0x000ab48d) call_video_g1_ParamLimits

0x13c5,	// (0x000ab48d) call_video_g1

0x13e1,	// (0x000ab4a9) call_video_g2_ParamLimits

0x13e1,	// (0x000ab4a9) call_video_g2

0x0001,

0xf26e,	// (0x000b9336) call_video_g_ParamLimits

0xf26e,	// (0x000b9336) call_video_g

0x1433,	// (0x000ab4fb) call_video_uplink_pane_cp1_ParamLimits

0x1433,	// (0x000ab4fb) call_video_uplink_pane_cp1

0xa9dc,	// (0x000b4aa4) call_video_uplink_pane_cp2

0x14d2,	// (0x000ab59a) video_down_crop_pane_ParamLimits

0x14d2,	// (0x000ab59a) video_down_crop_pane

0x15bb,	// (0x000ab683) video_down_pane_ParamLimits

0x15bb,	// (0x000ab683) video_down_pane

0xa9e4,	// (0x000b4aac) video_down_subqcif_pane_ParamLimits

0xa9e4,	// (0x000b4aac) video_down_subqcif_pane

0xa9fc,	// (0x000b4ac4) video_down_subqcif_pane_cp_ParamLimits

0xa9fc,	// (0x000b4ac4) video_down_subqcif_pane_cp

0xaa22,	// (0x000b4aea) im_reading_pane_ParamLimits

0xaa22,	// (0x000b4aea) im_reading_pane

0x16c9,	// (0x000ab791) im_writing_pane_ParamLimits

0x16c9,	// (0x000ab791) im_writing_pane

0x16df,	// (0x000ab7a7) im_reading_pane_t1

0xaa3c,	// (0x000b4b04) list_im_pane

0xaa4d,	// (0x000b4b15) scroll_pane_cp07

0x171c,	// (0x000ab7e4) im_writing_pane_t1_ParamLimits

0x171c,	// (0x000ab7e4) im_writing_pane_t1

0xaa66,	// (0x000b4b2e) im_writing_pane_t2_ParamLimits

0xaa66,	// (0x000b4b2e) im_writing_pane_t2

0x0001,

0xf278,	// (0x000b9340) im_writing_pane_t_ParamLimits

0xf278,	// (0x000b9340) im_writing_pane_t

0x9f71,	// (0x000b4039) input_focus_pane_cp04

0x9f71,	// (0x000b4039) input_focus_pane_cp05

0x1731,	// (0x000ab7f9) list_im_single_pane_ParamLimits

0x1731,	// (0x000ab7f9) list_im_single_pane

0x1747,	// (0x000ab80f) list_single_im_pane_t1

0x3405,	// (0x000ad4cd) blid_accuracy_pane

0x340d,	// (0x000ad4d5) blid_compass_pane

0x3417,	// (0x000ad4df) main_location_t1

0x3427,	// (0x000ad4ef) main_location_t2

0x3437,	// (0x000ad4ff) main_location_t3

0x0002,

0xf5df,	// (0x000b96a7) main_location_t

0x9f71,	// (0x000b4039) aid_levels_location

0xa305,	// (0x000b43cd) blid_accuracy_pane_g1

0xa305,	// (0x000b43cd) blid_accuracy_pane_g2

0x0001,

0xf2da,	// (0x000b93a2) blid_accuracy_pane_g

0xaaae,	// (0x000b4b76) wml_content_pane

0xaaec,	// (0x000b4bb4) wml_button_pane_ParamLimits

0xaaec,	// (0x000b4bb4) wml_button_pane

0x1756,	// (0x000ab81e) wml_list_single_large_pane_ParamLimits

0x1756,	// (0x000ab81e) wml_list_single_large_pane

0x176c,	// (0x000ab834) wml_list_single_medium_pane_ParamLimits

0x176c,	// (0x000ab834) wml_list_single_medium_pane

0x1786,	// (0x000ab84e) wml_list_single_small_pane_ParamLimits

0x1786,	// (0x000ab84e) wml_list_single_small_pane

0xab00,	// (0x000b4bc8) wml_selection_box_pane_ParamLimits

0xab00,	// (0x000b4bc8) wml_selection_box_pane

0xab13,	// (0x000b4bdb) wml_list_single_pane_t1

0xab22,	// (0x000b4bea) wml_list_single_medium_pane_t1

0xab31,	// (0x000b4bf9) wml_list_single_large_pane_t1

0xab40,	// (0x000b4c08) input_focus_pane_cp02_ParamLimits

0xab40,	// (0x000b4c08) input_focus_pane_cp02

0xab53,	// (0x000b4c1b) wml_selection_box_pane_g1

0xab5c,	// (0x000b4c24) wml_selection_box_pane_t1_ParamLimits

0xab5c,	// (0x000b4c24) wml_selection_box_pane_t1

0xa1cc,	// (0x000b4294) bg_wml_button_pane_ParamLimits

0xa1cc,	// (0x000b4294) bg_wml_button_pane

0xab74,	// (0x000b4c3c) wml_button_pane_g1

0xab7c,	// (0x000b4c44) wml_button_pane_t1

0xab74,	// (0x000b4c3c) wml_button_bg_pane_g1

0xab8c,	// (0x000b4c54) wml_button_bg_pane_g2

0xab94,	// (0x000b4c5c) wml_button_bg_pane_g3

0xab9c,	// (0x000b4c64) wml_button_bg_pane_g4

0xaba4,	// (0x000b4c6c) wml_button_bg_pane_g5

0xabac,	// (0x000b4c74) wml_button_bg_pane_g6

0xabb4,	// (0x000b4c7c) wml_button_bg_pane_g7

0xabbc,	// (0x000b4c84) wml_button_bg_pane_g8

0xabc4,	// (0x000b4c8c) wml_button_bg_pane_g9

0x0008,

0xf27d,	// (0x000b9345) wml_button_bg_pane_g

0x17a0,	// (0x000ab868) bg_list_pane_cp02

0xabcc,	// (0x000b4c94) mce_header_pane_ParamLimits

0xabcc,	// (0x000b4c94) mce_header_pane

0xabe2,	// (0x000b4caa) mce_icon_pane

0xabe2,	// (0x000b4caa) mce_image_pane

0xabeb,	// (0x000b4cb3) mce_text_pane_ParamLimits

0xabeb,	// (0x000b4cb3) mce_text_pane

0x17a8,	// (0x000ab870) scroll_pane_cp03

0xaae4,	// (0x000b4bac) scroll_pane_cp04

0xabfe,	// (0x000b4cc6) scroll_pane_cp05_ParamLimits

0xabfe,	// (0x000b4cc6) scroll_pane_cp05

0x17b2,	// (0x000ab87a) mce_header_field_pane_ParamLimits

0x17b2,	// (0x000ab87a) mce_header_field_pane

0x17c9,	// (0x000ab891) mce_header_field_pane_2_ParamLimits

0x17c9,	// (0x000ab891) mce_header_field_pane_2

0x17df,	// (0x000ab8a7) mce_header_field_pane_3

0x17e7,	// (0x000ab8af) list_single_mce_message_pane_ParamLimits

0x17e7,	// (0x000ab8af) list_single_mce_message_pane

0x17fe,	// (0x000ab8c6) list_single_mce_smart_pane_ParamLimits

0x17fe,	// (0x000ab8c6) list_single_mce_smart_pane

0xac0a,	// (0x000b4cd2) input_focus_pane_cp03

0xac13,	// (0x000b4cdb) list_header_data_pane

0x1820,	// (0x000ab8e8) mce_header_field_pane_t1

0x1830,	// (0x000ab8f8) list_single_mce_header_pane_ParamLimits

0x1830,	// (0x000ab8f8) list_single_mce_header_pane

0xac1b,	// (0x000b4ce3) list_single_mce_header_pane_t1

0xac2a,	// (0x000b4cf2) list_single_mce_message_pane_g1

0xac32,	// (0x000b4cfa) list_single_mce_message_pane_t1

0x186a,	// (0x000ab932) bg_cale_heading_pane_cp01_ParamLimits

0x186a,	// (0x000ab932) bg_cale_heading_pane_cp01

0xac40,	// (0x000b4d08) bg_cale_pane_cp02_ParamLimits

0xac40,	// (0x000b4d08) bg_cale_pane_cp02

0x18a5,	// (0x000ab96d) cale_month_corner_pane

0x18c4,	// (0x000ab98c) cale_month_day_heading_pane_ParamLimits

0x18c4,	// (0x000ab98c) cale_month_day_heading_pane

0x1917,	// (0x000ab9df) cale_month_pane_g1_ParamLimits

0x1917,	// (0x000ab9df) cale_month_pane_g1

0x1947,	// (0x000aba0f) cale_month_pane_g2_ParamLimits

0x1947,	// (0x000aba0f) cale_month_pane_g2

0x1977,	// (0x000aba3f) cale_month_pane_g3_ParamLimits

0x1977,	// (0x000aba3f) cale_month_pane_g3

0x19b3,	// (0x000aba7b) cale_month_pane_g4_ParamLimits

0x19b3,	// (0x000aba7b) cale_month_pane_g4

0x19ef,	// (0x000abab7) cale_month_pane_g5_ParamLimits

0x19ef,	// (0x000abab7) cale_month_pane_g5

0x1a37,	// (0x000abaff) cale_month_pane_g6_ParamLimits

0x1a37,	// (0x000abaff) cale_month_pane_g6

0x1a83,	// (0x000abb4b) cale_month_pane_g7_ParamLimits

0x1a83,	// (0x000abb4b) cale_month_pane_g7

0x1ad7,	// (0x000abb9f) cale_month_pane_g8_ParamLimits

0x1ad7,	// (0x000abb9f) cale_month_pane_g8

0x1b2b,	// (0x000abbf3) cale_month_pane_g9_ParamLimits

0x1b2b,	// (0x000abbf3) cale_month_pane_g9

0x1b7d,	// (0x000abc45) cale_month_pane_g10_ParamLimits

0x1b7d,	// (0x000abc45) cale_month_pane_g10

0x1bcf,	// (0x000abc97) cale_month_pane_g11_ParamLimits

0x1bcf,	// (0x000abc97) cale_month_pane_g11

0x1c21,	// (0x000abce9) cale_month_pane_g12_ParamLimits

0x1c21,	// (0x000abce9) cale_month_pane_g12

0x1c73,	// (0x000abd3b) cale_month_pane_g13_ParamLimits

0x1c73,	// (0x000abd3b) cale_month_pane_g13

0x000c,

0xf290,	// (0x000b9358) cale_month_pane_g_ParamLimits

0xf290,	// (0x000b9358) cale_month_pane_g

0x1cc5,	// (0x000abd8d) cale_month_week_pane

0x1ce9,	// (0x000abdb1) grid_cale_month_pane_ParamLimits

0x1ce9,	// (0x000abdb1) grid_cale_month_pane

0x1d27,	// (0x000abdef) cale_month_day_heading_pane_t1

0x1dad,	// (0x000abe75) cale_month_day_heading_pane_t2

0x1e3e,	// (0x000abf06) cale_month_day_heading_pane_t3

0x1ecf,	// (0x000abf97) cale_month_day_heading_pane_t4

0x1f68,	// (0x000ac030) cale_month_day_heading_pane_t5

0x2009,	// (0x000ac0d1) cale_month_day_heading_pane_t6

0x20aa,	// (0x000ac172) cale_month_day_heading_pane_t7

0x0006,

0xf2ab,	// (0x000b9373) cale_month_day_heading_pane_t

0xa43b,	// (0x000b4503) bg_cale_side_pane_cp01

0x2153,	// (0x000ac21b) cale_month_week_pane_t1

0x216c,	// (0x000ac234) cale_month_week_pane_t2

0x2185,	// (0x000ac24d) cale_month_week_pane_t3

0x219e,	// (0x000ac266) cale_month_week_pane_t4

0x21b7,	// (0x000ac27f) cale_month_week_pane_t5

0x21d0,	// (0x000ac298) cale_month_week_pane_t6

0x0005,

0xf2ba,	// (0x000b9382) cale_month_week_pane_t

0x21e9,	// (0x000ac2b1) cell_cale_month_pane_ParamLimits

0x21e9,	// (0x000ac2b1) cell_cale_month_pane

0x9844,	// (0x000b390c) cell_cale_month_pane_g1

0x2341,	// (0x000ac409) cell_cale_month_pane_t1_ParamLimits

0x2341,	// (0x000ac409) cell_cale_month_pane_t1

0xa449,	// (0x000b4511) grid_highlight_pane_cp08

0xa305,	// (0x000b43cd) main_smil_g1

0x2361,	// (0x000ac429) smil_status_pane

0xac7f,	// (0x000b4d47) smil_text_pane

0xc657,	// (0x000b671f) bg_popup_call3_rect_pane_g8

0xc65f,	// (0x000b6727) bg_popup_call3_rect_pane_g9

0x0008,

0xf573,	// (0x000b963b) bg_popup_call3_rect_pane_g

0xc8a6,	// (0x000b696e) smil_status_volume_pane_g1

0xac89,	// (0x000b4d51) smil_status_pane_t1

0x998e,	// (0x000b3a56) volume_smil_pane

0xaca0,	// (0x000b4d68) list_smil_text_pane

0x2376,	// (0x000ac43e) scroll_pane_cp011

0x2381,	// (0x000ac449) smil_text_list_pane_t1_ParamLimits

0x2381,	// (0x000ac449) smil_text_list_pane_t1

0x9850,	// (0x000b3918) aid_volume_smil_ParamLimits

0x9850,	// (0x000b3918) aid_volume_smil

0xa305,	// (0x000b43cd) smil_volume_pane_g1

0xa305,	// (0x000b43cd) smil_volume_pane_g2

0x0001,

0xf2da,	// (0x000b93a2) smil_volume_pane_g

0x0889,	// (0x000aa951) listscroll_cale_day_pane

0xacaa,	// (0x000b4d72) bg_cale_pane

0xacc2,	// (0x000b4d8a) list_cale_pane

0xace5,	// (0x000b4dad) scroll_pane_cp09

0xacf6,	// (0x000b4dbe) cale_bg_pane_g1

0xacfe,	// (0x000b4dc6) cale_bg_pane_g2

0xad06,	// (0x000b4dce) cale_bg_pane_g3

0xad0e,	// (0x000b4dd6) cale_bg_pane_g4

0xad16,	// (0x000b4dde) cale_bg_pane_g5

0xad1e,	// (0x000b4de6) cale_bg_pane_g6

0xad26,	// (0x000b4dee) cale_bg_pane_g7

0xad2e,	// (0x000b4df6) cale_bg_pane_g8

0xad36,	// (0x000b4dfe) cale_bg_pane_g9

0x0008,

0xf2df,	// (0x000b93a7) cale_bg_pane_g

0x23c3,	// (0x000ac48b) list_cale_time_pane_ParamLimits

0x23c3,	// (0x000ac48b) list_cale_time_pane

0xad46,	// (0x000b4e0e) list_cale_time_pane_g1_ParamLimits

0xad46,	// (0x000b4e0e) list_cale_time_pane_g1

0xad52,	// (0x000b4e1a) list_cale_time_pane_g2_ParamLimits

0xad52,	// (0x000b4e1a) list_cale_time_pane_g2

0x23da,	// (0x000ac4a2) list_cale_time_pane_g3_ParamLimits

0x23da,	// (0x000ac4a2) list_cale_time_pane_g3

0x23e8,	// (0x000ac4b0) list_cale_time_pane_g4_ParamLimits

0x23e8,	// (0x000ac4b0) list_cale_time_pane_g4

0x23f6,	// (0x000ac4be) list_cale_time_pane_g5_ParamLimits

0x23f6,	// (0x000ac4be) list_cale_time_pane_g5

0x0005,

0xf2f2,	// (0x000b93ba) list_cale_time_pane_g_ParamLimits

0xf2f2,	// (0x000b93ba) list_cale_time_pane_g

0xad6c,	// (0x000b4e34) list_cale_time_pane_t1_ParamLimits

0xad6c,	// (0x000b4e34) list_cale_time_pane_t1

0xad94,	// (0x000b4e5c) list_cale_time_pane_t2_ParamLimits

0xad94,	// (0x000b4e5c) list_cale_time_pane_t2

0x2738,	// (0x000ac800) aid_blid_cardinal_pane

0x2776,	// (0x000ac83e) compass_pane_t4

0xadbc,	// (0x000b4e84) list_cale_time_pane_t4_ParamLimits

0xadbc,	// (0x000b4e84) list_cale_time_pane_t4

0x2784,	// (0x000ac84c) compass_pane_t5

0x2792,	// (0x000ac85a) compass_pane_t6

0x27a0,	// (0x000ac868) compass_pane_t7

0xb279,	// (0x000b5341) navi_pane_cc_t1

0xb4b7,	// (0x000b557f) aid_phob_thumbnail_center_pane

0x2e15,	// (0x000acedd) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2ff,	// (0x000b93c7) list_cale_time_pane_t_ParamLimits

0xf2ff,	// (0x000b93c7) list_cale_time_pane_t

0x94a6,	// (0x000b356e) bg_popup_window_pane_cp02_ParamLimits

0x94a6,	// (0x000b356e) bg_popup_window_pane_cp02

0xade4,	// (0x000b4eac) heading_pane_cp01_ParamLimits

0xade4,	// (0x000b4eac) heading_pane_cp01

0xadf0,	// (0x000b4eb8) loc_req_pane_ParamLimits

0xadf0,	// (0x000b4eb8) loc_req_pane

0xae00,	// (0x000b4ec8) loc_type_pane_ParamLimits

0xae00,	// (0x000b4ec8) loc_type_pane

0xae12,	// (0x000b4eda) loc_type_pane_t1_ParamLimits

0xae12,	// (0x000b4eda) loc_type_pane_t1

0xae24,	// (0x000b4eec) loc_type_pane_t2_ParamLimits

0xae24,	// (0x000b4eec) loc_type_pane_t2

0xae36,	// (0x000b4efe) loc_type_pane_t3_ParamLimits

0xae36,	// (0x000b4efe) loc_type_pane_t3

0x0002,

0xf306,	// (0x000b93ce) loc_type_pane_t_ParamLimits

0xf306,	// (0x000b93ce) loc_type_pane_t

0xae48,	// (0x000b4f10) list_loc_req_pane

0xae52,	// (0x000b4f1a) scroll_pane_cp012

0x2404,	// (0x000ac4cc) list_single_loc_request_popup_menu_pane_ParamLimits

0x2404,	// (0x000ac4cc) list_single_loc_request_popup_menu_pane

0xae5d,	// (0x000b4f25) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xae5d,	// (0x000b4f25) list_single_loc_request_popup_menu_pane_g1

0xae69,	// (0x000b4f31) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xae69,	// (0x000b4f31) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf30d,	// (0x000b93d5) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf30d,	// (0x000b93d5) list_single_loc_request_popup_menu_pane_g

0xae75,	// (0x000b4f3d) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xae75,	// (0x000b4f3d) list_single_loc_request_popup_menu_pane_t1

0xa1cc,	// (0x000b4294) bg_popup_window_pane_cp03_ParamLimits

0xa1cc,	// (0x000b4294) bg_popup_window_pane_cp03

0xae8b,	// (0x000b4f53) heading_loc_req_pane_ParamLimits

0xae8b,	// (0x000b4f53) heading_loc_req_pane

0x2411,	// (0x000ac4d9) popup_dyc_status_message_window_g1_ParamLimits

0x2411,	// (0x000ac4d9) popup_dyc_status_message_window_g1

0x2425,	// (0x000ac4ed) popup_dyc_status_message_window_t1_ParamLimits

0x2425,	// (0x000ac4ed) popup_dyc_status_message_window_t1

0x243a,	// (0x000ac502) popup_dyc_status_message_window_t2_ParamLimits

0x243a,	// (0x000ac502) popup_dyc_status_message_window_t2

0x244f,	// (0x000ac517) popup_dyc_status_message_window_t3_ParamLimits

0x244f,	// (0x000ac517) popup_dyc_status_message_window_t3

0x0002,

0xf312,	// (0x000b93da) popup_dyc_status_message_window_t_ParamLimits

0xf312,	// (0x000b93da) popup_dyc_status_message_window_t

0x9f71,	// (0x000b4039) bg_heading_pane_cp01

0xae97,	// (0x000b4f5f) heading_loc_req_pane_g1

0xae9f,	// (0x000b4f67) heading_loc_req_pane_g2

0xaea7,	// (0x000b4f6f) heading_loc_req_pane_g3

0x0002,

0xf319,	// (0x000b93e1) heading_loc_req_pane_g

0xaeaf,	// (0x000b4f77) heading_loc_req_pane_t1

0xaebe,	// (0x000b4f86) bg_popup_sub_pane_cp01_ParamLimits

0xaebe,	// (0x000b4f86) bg_popup_sub_pane_cp01

0xaecc,	// (0x000b4f94) popup_cale_events_window_g1_ParamLimits

0xaecc,	// (0x000b4f94) popup_cale_events_window_g1

0xaeec,	// (0x000b4fb4) popup_cale_events_window_g2_ParamLimits

0xaeec,	// (0x000b4fb4) popup_cale_events_window_g2

0x0001,

0xf34d,	// (0x000b9415) popup_cale_events_window_g_ParamLimits

0xf34d,	// (0x000b9415) popup_cale_events_window_g

0xaf0c,	// (0x000b4fd4) popup_cale_events_window_t1_ParamLimits

0xaf0c,	// (0x000b4fd4) popup_cale_events_window_t1

0xaf1e,	// (0x000b4fe6) popup_cale_events_window_t2_ParamLimits

0xaf1e,	// (0x000b4fe6) popup_cale_events_window_t2

0xaf5c,	// (0x000b5024) popup_cale_events_window_t3_ParamLimits

0xaf5c,	// (0x000b5024) popup_cale_events_window_t3

0xaf96,	// (0x000b505e) popup_cale_events_window_t4_ParamLimits

0xaf96,	// (0x000b505e) popup_cale_events_window_t4

0x0003,

0xf352,	// (0x000b941a) popup_cale_events_window_t_ParamLimits

0xf352,	// (0x000b941a) popup_cale_events_window_t

0x2546,	// (0x000ac60e) call_type_pane

0x2556,	// (0x000ac61e) popup_call_status_window_g1

0x256a,	// (0x000ac632) popup_call_status_window_g2

0x257e,	// (0x000ac646) popup_call_status_window_g3

0x0002,

0xf35b,	// (0x000b9423) popup_call_status_window_g

0xafcc,	// (0x000b5094) call_type_pane_g1

0xafd5,	// (0x000b509d) call_type_pane_g2

0x0001,

0xf362,	// (0x000b942a) call_type_pane_g

0x9f71,	// (0x000b4039) bg_popup_sub_pane_cp02

0xafde,	// (0x000b50a6) listscroll_popup_wml_pane

0xafe6,	// (0x000b50ae) list_wml_pane

0xaff0,	// (0x000b50b8) scroll_pane_cp013

0xaffb,	// (0x000b50c3) list_single_graphic_popup_wml_pane_ParamLimits

0xaffb,	// (0x000b50c3) list_single_graphic_popup_wml_pane

0xa305,	// (0x000b43cd) list_single_graphic_popup_wml_pane_g1

0xb00f,	// (0x000b50d7) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf367,	// (0x000b942f) list_single_graphic_popup_wml_pane_g

0xb017,	// (0x000b50df) list_single_graphic_popup_wml_pane_t1

0xb02d,	// (0x000b50f5) aid_call_pane

0xa1c4,	// (0x000b428c) popup_clock_analogue_window_g1

0xa1c4,	// (0x000b428c) popup_clock_analogue_window_g2

0x9872,	// (0x000b393a) popup_clock_analogue_window_g3

0x9872,	// (0x000b393a) popup_clock_analogue_window_g4

0xa305,	// (0x000b43cd) popup_clock_analogue_window_g5

0x0004,

0xf36c,	// (0x000b9434) popup_clock_analogue_window_g

0x987a,	// (0x000b3942) popup_clock_analogue_window_t1

0x9888,	// (0x000b3950) clock_digital_number_pane_ParamLimits

0x9888,	// (0x000b3950) clock_digital_number_pane

0x9894,	// (0x000b395c) clock_digital_number_pane_cp02_ParamLimits

0x9894,	// (0x000b395c) clock_digital_number_pane_cp02

0x98a0,	// (0x000b3968) clock_digital_number_pane_cp03_ParamLimits

0x98a0,	// (0x000b3968) clock_digital_number_pane_cp03

0x98ac,	// (0x000b3974) clock_digital_number_pane_cp04_ParamLimits

0x98ac,	// (0x000b3974) clock_digital_number_pane_cp04

0x98bc,	// (0x000b3984) clock_digital_separator_pane_ParamLimits

0x98bc,	// (0x000b3984) clock_digital_separator_pane

0x98c8,	// (0x000b3990) popup_clock_digital_window_t1

0xa305,	// (0x000b43cd) clock_digital_number_pane_g1

0xa305,	// (0x000b43cd) clock_digital_number_pane_g2

0x0001,

0xf2da,	// (0x000b93a2) clock_digital_number_pane_g

0xa305,	// (0x000b43cd) clock_digital_separator_pane_g1

0xa305,	// (0x000b43cd) clock_digital_separator_pane_g2

0x0001,

0xf2da,	// (0x000b93a2) clock_digital_separator_pane_g

0x9f71,	// (0x000b4039) bg_popup_window_pane_cp04

0xb035,	// (0x000b50fd) heading_pane_cp03

0xb03d,	// (0x000b5105) listscroll_popup_gms_pane

0xb045,	// (0x000b510d) grid_large_graphic_popup_pane

0xb04f,	// (0x000b5117) listscroll_popup_gms_pane_g1

0xb057,	// (0x000b511f) listscroll_popup_gms_pane_g2

0x0001,

0xf377,	// (0x000b943f) listscroll_popup_gms_pane_g

0xaae4,	// (0x000b4bac) scroll_pane_cp014

0xb05f,	// (0x000b5127) cell_large_graphic_popup_pane_ParamLimits

0xb05f,	// (0x000b5127) cell_large_graphic_popup_pane

0xb077,	// (0x000b513f) cell_large_graphic_popup_pane_g1_ParamLimits

0xb077,	// (0x000b513f) cell_large_graphic_popup_pane_g1

0xb083,	// (0x000b514b) cell_large_graphic_popup_pane_g2_ParamLimits

0xb083,	// (0x000b514b) cell_large_graphic_popup_pane_g2

0xb08f,	// (0x000b5157) cell_large_graphic_popup_pane_g3_ParamLimits

0xb08f,	// (0x000b5157) cell_large_graphic_popup_pane_g3

0xb09c,	// (0x000b5164) cell_large_graphic_popup_pane_g4_ParamLimits

0xb09c,	// (0x000b5164) cell_large_graphic_popup_pane_g4

0x0003,

0xf37c,	// (0x000b9444) cell_large_graphic_popup_pane_g_ParamLimits

0xf37c,	// (0x000b9444) cell_large_graphic_popup_pane_g

0xb0ac,	// (0x000b5174) grid_highlight_pane_cp010

0xa305,	// (0x000b43cd) bg_popup_call_pane_g1

0xb0b6,	// (0x000b517e) list_single_graphic_popup_conf_pane_ParamLimits

0xb0b6,	// (0x000b517e) list_single_graphic_popup_conf_pane

0xb0c9,	// (0x000b5191) list_highlight_pane_cp01

0xb0d2,	// (0x000b519a) list_single_graphic_popup_conf_pane_g1

0xb0da,	// (0x000b51a2) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf385,	// (0x000b944d) list_single_graphic_popup_conf_pane_g

0xb0e2,	// (0x000b51aa) list_single_graphic_popup_conf_pane_t1

0xb0f0,	// (0x000b51b8) linegrid_cams_pane_g1

0x258d,	// (0x000ac655) linegrid_cams_pane_g2

0xa3bd,	// (0x000b4485) linegrid_cams_pane_g3

0xb0f9,	// (0x000b51c1) linegrid_cams_pane_g4

0x2596,	// (0x000ac65e) linegrid_cams_pane_g5

0x259f,	// (0x000ac667) linegrid_cams_pane_g6

0xa47c,	// (0x000b4544) linegrid_cams_pane_g7

0x0006,

0xf38a,	// (0x000b9452) linegrid_cams_pane_g

0xb102,	// (0x000b51ca) popup_clock_analogue_window

0xb102,	// (0x000b51ca) popup_clock_digital_window

0x9f71,	// (0x000b4039) popup_phob_thumbnail_window

0xa305,	// (0x000b43cd) call_video_uplink_pane_g1

0xb10b,	// (0x000b51d3) call_video_uplink_pane_g2

0x0001,

0xf399,	// (0x000b9461) call_video_uplink_pane_g

0xa449,	// (0x000b4511) video_uplink_pane

0xb113,	// (0x000b51db) mce_image_pane_g1

0x25aa,	// (0x000ac672) mce_image_pane_g2

0x25b2,	// (0x000ac67a) mce_image_pane_g3

0x25ba,	// (0x000ac682) mce_image_pane_g4

0x25c4,	// (0x000ac68c) mce_image_pane_g5

0x0004,

0xf39e,	// (0x000b9466) mce_image_pane_g

0xb11d,	// (0x000b51e5) control_top_pane_stacon_cp01_ParamLimits

0xb11d,	// (0x000b51e5) control_top_pane_stacon_cp01

0xb131,	// (0x000b51f9) uni_indicator_pane_stacon_cp01_ParamLimits

0xb131,	// (0x000b51f9) uni_indicator_pane_stacon_cp01

0xb142,	// (0x000b520a) bg_popup_sub_pane_cp03

0x25cc,	// (0x000ac694) chi_dic_find_pane

0x25d4,	// (0x000ac69c) listscroll_chi_dic_pane

0x25dd,	// (0x000ac6a5) main_pane_chidic_g1

0xb14c,	// (0x000b5214) chi_dic_find_pane_t1

0xb15a,	// (0x000b5222) find_chidic_pane

0xb163,	// (0x000b522b) chi_dic_list_pane_ParamLimits

0xb163,	// (0x000b522b) chi_dic_list_pane

0xb174,	// (0x000b523c) scroll_pane_cp020

0xb17c,	// (0x000b5244) find_chidic_pane_t1

0x9f71,	// (0x000b4039) input_focus_pane_cp06

0x25f0,	// (0x000ac6b8) list_chi_dic_pane_ParamLimits

0x25f0,	// (0x000ac6b8) list_chi_dic_pane

0x2603,	// (0x000ac6cb) list_chi_dic_pane_t1_ParamLimits

0x2603,	// (0x000ac6cb) list_chi_dic_pane_t1

0x9f71,	// (0x000b4039) list_highlight_pane_cp020

0xb18b,	// (0x000b5253) bg_cale_heading_pane_g1

0x2616,	// (0x000ac6de) bg_cale_heading_pane_g2

0x261e,	// (0x000ac6e6) bg_cale_heading_pane_g3

0x2626,	// (0x000ac6ee) bg_cale_heading_pane_g4

0x2630,	// (0x000ac6f8) bg_cale_heading_pane_g5

0x263a,	// (0x000ac702) bg_cale_heading_pane_g6

0x2642,	// (0x000ac70a) bg_cale_heading_pane_g7

0x264a,	// (0x000ac712) bg_cale_heading_pane_g8

0x2654,	// (0x000ac71c) bg_cale_heading_pane_g9

0x0008,

0xf3a9,	// (0x000b9471) bg_cale_heading_pane_g

0xb18b,	// (0x000b5253) bg_cale_side_pane_g1

0x265e,	// (0x000ac726) bg_cale_side_pane_g2

0x2666,	// (0x000ac72e) bg_cale_side_pane_g3

0x266e,	// (0x000ac736) bg_cale_side_pane_g4

0x2676,	// (0x000ac73e) bg_cale_side_pane_g5

0x267e,	// (0x000ac746) bg_cale_side_pane_g6

0x2686,	// (0x000ac74e) bg_cale_side_pane_g7

0x268e,	// (0x000ac756) bg_cale_side_pane_g8

0x2696,	// (0x000ac75e) bg_cale_side_pane_g9

0x0008,

0xf3bc,	// (0x000b9484) bg_cale_side_pane_g

0x269e,	// (0x000ac766) popup_call_status_window_ParamLimits

0x269e,	// (0x000ac766) popup_call_status_window

0xb193,	// (0x000b525b) stacon_top_pane

0xb19b,	// (0x000b5263) status_pane_ParamLimits

0xb19b,	// (0x000b5263) status_pane

0xb1b0,	// (0x000b5278) status_small_pane

0xb1b8,	// (0x000b5280) control_pane

0x9f71,	// (0x000b4039) stacon_bottom_pane

0xb1c0,	// (0x000b5288) list_single_mce_smart_pane_t1_ParamLimits

0xb1c0,	// (0x000b5288) list_single_mce_smart_pane_t1

0xb1d3,	// (0x000b529b) list_single_mce_smart_pane_t2_ParamLimits

0xb1d3,	// (0x000b529b) list_single_mce_smart_pane_t2

0x0001,

0xf3cf,	// (0x000b9497) list_single_mce_smart_pane_t_ParamLimits

0xf3cf,	// (0x000b9497) list_single_mce_smart_pane_t

0x26e5,	// (0x000ac7ad) compass_pane

0x26ee,	// (0x000ac7b6) main_location2_pane_t1

0x2700,	// (0x000ac7c8) main_location2_pane_t2

0x2712,	// (0x000ac7da) main_location2_pane_t3

0x0003,

0xf3d4,	// (0x000b949c) main_location2_pane_t

0xb1f2,	// (0x000b52ba) compass_pane_g1_ParamLimits

0xb1f2,	// (0x000b52ba) compass_pane_g1

0x2758,	// (0x000ac820) compass_pane_t1

0x2767,	// (0x000ac82f) compass_pane_t2

0x0005,

0xf3dd,	// (0x000b94a5) compass_pane_t

0x27ae,	// (0x000ac876) text_secondary_cp61

0xb270,	// (0x000b5338) navi_pane_cams_g5

0xb2ec,	// (0x000b53b4) navi_pane_im_t1

0xb2fa,	// (0x000b53c2) navi_pane_mp_g1_ParamLimits

0xb2fa,	// (0x000b53c2) navi_pane_mp_g1

0xb30e,	// (0x000b53d6) navi_pane_mp_g2_ParamLimits

0xb30e,	// (0x000b53d6) navi_pane_mp_g2

0xb31a,	// (0x000b53e2) navi_pane_mp_g3_ParamLimits

0xb31a,	// (0x000b53e2) navi_pane_mp_g3

0x0002,

0xf3f1,	// (0x000b94b9) navi_pane_mp_g_ParamLimits

0xf3f1,	// (0x000b94b9) navi_pane_mp_g

0xb326,	// (0x000b53ee) navi_pane_mp_t1

0xb334,	// (0x000b53fc) navi_pane_mp_t2

0x0002,

0xf3f8,	// (0x000b94c0) navi_pane_mp_t

0xb39f,	// (0x000b5467) navi_pane_vt_g1

0xb326,	// (0x000b53ee) navi_pane_vt_t1

0xb3a7,	// (0x000b546f) navi_slider_pane

0xb3b7,	// (0x000b547f) zooming_pane

0xb3bf,	// (0x000b5487) navi_slider_pane_g1

0x98e5,	// (0x000b39ad) navi_slider_pane_g2

0x0006,

0xf3ff,	// (0x000b94c7) navi_slider_pane_g

0xb3e3,	// (0x000b54ab) aid_levels_zoom

0xb3eb,	// (0x000b54b3) zooming_pane_g1

0xb3f3,	// (0x000b54bb) zooming_pane_g2

0xb3f3,	// (0x000b54bb) zooming_pane_g3

0x0002,

0xf40e,	// (0x000b94d6) zooming_pane_g

0xb3fb,	// (0x000b54c3) level_10_zoom

0xb404,	// (0x000b54cc) level_11_zoom

0xb40d,	// (0x000b54d5) level_1_zoom

0xb416,	// (0x000b54de) level_2_zoom

0xb41f,	// (0x000b54e7) level_3_zoom

0xb428,	// (0x000b54f0) level_4_zoom

0xb431,	// (0x000b54f9) level_5_zoom

0xb43a,	// (0x000b5502) level_6_zoom

0xb443,	// (0x000b550b) level_7_zoom

0xb4a5,	// (0x000b556d) level_8_zoom

0xb4ae,	// (0x000b5576) level_9_zoom

0xb4bf,	// (0x000b5587) popup_phob_thumbnail_window_g1

0xb4c7,	// (0x000b558f) popup_phob_thumbnail_window_g2

0x0001,

0xf415,	// (0x000b94dd) popup_phob_thumbnail_window_g

0xc7b9,	// (0x000b6881) level_1_location

0xc7c1,	// (0x000b6889) level_2_location

0xc7c9,	// (0x000b6891) level_3_location

0xc7d1,	// (0x000b6899) level_4_location

0xb3b7,	// (0x000b547f) level_5_location

0x27ff,	// (0x000ac8c7) mce_icon_pane_g1

0x2809,	// (0x000ac8d1) mce_icon_pane_g2

0x0001,

0xf41a,	// (0x000b94e2) mce_icon_pane_g

0x2813,	// (0x000ac8db) main_mup_pane_g1_ParamLimits

0x2813,	// (0x000ac8db) main_mup_pane_g1

0x2829,	// (0x000ac8f1) main_mup_pane_g2_ParamLimits

0x2829,	// (0x000ac8f1) main_mup_pane_g2

0x2841,	// (0x000ac909) main_mup_pane_g3_ParamLimits

0x2841,	// (0x000ac909) main_mup_pane_g3

0x2859,	// (0x000ac921) main_mup_pane_g4_ParamLimits

0x2859,	// (0x000ac921) main_mup_pane_g4

0x2871,	// (0x000ac939) main_mup_pane_g5_ParamLimits

0x2871,	// (0x000ac939) main_mup_pane_g5

0x288d,	// (0x000ac955) main_mup_pane_g6_ParamLimits

0x288d,	// (0x000ac955) main_mup_pane_g6

0x28a5,	// (0x000ac96d) main_mup_pane_g7_ParamLimits

0x28a5,	// (0x000ac96d) main_mup_pane_g7

0x28bd,	// (0x000ac985) main_mup_pane_g8_ParamLimits

0x28bd,	// (0x000ac985) main_mup_pane_g8

0x28d5,	// (0x000ac99d) main_mup_pane_g9_ParamLimits

0x28d5,	// (0x000ac99d) main_mup_pane_g9

0x28ef,	// (0x000ac9b7) main_mup_pane_g10_ParamLimits

0x28ef,	// (0x000ac9b7) main_mup_pane_g10

0x2909,	// (0x000ac9d1) main_mup_pane_g11_ParamLimits

0x2909,	// (0x000ac9d1) main_mup_pane_g11

0x291d,	// (0x000ac9e5) main_mup_pane_g12_ParamLimits

0x291d,	// (0x000ac9e5) main_mup_pane_g12

0x2933,	// (0x000ac9fb) main_mup_pane_g13_ParamLimits

0x2933,	// (0x000ac9fb) main_mup_pane_g13

0x000c,

0xf41f,	// (0x000b94e7) main_mup_pane_g_ParamLimits

0xf41f,	// (0x000b94e7) main_mup_pane_g

0x2947,	// (0x000aca0f) main_mup_pane_t1_ParamLimits

0x2947,	// (0x000aca0f) main_mup_pane_t1

0x2961,	// (0x000aca29) main_mup_pane_t2_ParamLimits

0x2961,	// (0x000aca29) main_mup_pane_t2

0x2979,	// (0x000aca41) main_mup_pane_t3_ParamLimits

0x2979,	// (0x000aca41) main_mup_pane_t3

0x2991,	// (0x000aca59) main_mup_pane_t4_ParamLimits

0x2991,	// (0x000aca59) main_mup_pane_t4

0x29af,	// (0x000aca77) main_mup_pane_t5_ParamLimits

0x29af,	// (0x000aca77) main_mup_pane_t5

0x29c4,	// (0x000aca8c) main_mup_pane_t6_ParamLimits

0x29c4,	// (0x000aca8c) main_mup_pane_t6

0x0005,

0xf43a,	// (0x000b9502) main_mup_pane_t_ParamLimits

0xf43a,	// (0x000b9502) main_mup_pane_t

0x29d6,	// (0x000aca9e) mup_progress_pane_ParamLimits

0x29d6,	// (0x000aca9e) mup_progress_pane

0x29e2,	// (0x000acaaa) mup_visualizer_pane_ParamLimits

0x29e2,	// (0x000acaaa) mup_visualizer_pane

0x2a16,	// (0x000acade) mup_volume_pane_ParamLimits

0x2a16,	// (0x000acade) mup_volume_pane

0xb44c,	// (0x000b5514) mup_visualizer_pane_g1_ParamLimits

0xb44c,	// (0x000b5514) mup_visualizer_pane_g1

0xb44c,	// (0x000b5514) mup_visualizer_pane_g2_ParamLimits

0xb44c,	// (0x000b5514) mup_visualizer_pane_g2

0xb1f2,	// (0x000b52ba) mup_visualizer_pane_g3_ParamLimits

0xb1f2,	// (0x000b52ba) mup_visualizer_pane_g3

0x0002,

0xf447,	// (0x000b950f) mup_visualizer_pane_g_ParamLimits

0xf447,	// (0x000b950f) mup_visualizer_pane_g

0xa305,	// (0x000b43cd) mup_volume_pane_g1

0xb4d7,	// (0x000b559f) mup_volume_pane_g2

0x0001,

0xf44e,	// (0x000b9516) mup_volume_pane_g

0xa305,	// (0x000b43cd) mup_progress_pane_g1

0xb4e0,	// (0x000b55a8) mup_progress_pane_g2

0xb4e9,	// (0x000b55b1) mup_progress_pane_g3

0x0002,

0xf453,	// (0x000b951b) mup_progress_pane_g

0x9f71,	// (0x000b4039) bg_popup_window_pane_cp05

0xb4f2,	// (0x000b55ba) heading_pane_cp02_ParamLimits

0xb4f2,	// (0x000b55ba) heading_pane_cp02

0xb50c,	// (0x000b55d4) list_popup_blid_pane

0xb514,	// (0x000b55dc) list_blid_sat_info_pane_ParamLimits

0xb514,	// (0x000b55dc) list_blid_sat_info_pane

0xb527,	// (0x000b55ef) list_blid_sat_info_pane_g1

0xb52f,	// (0x000b55f7) list_blid_sat_info_pane_t1

0x2b2c,	// (0x000acbf4) mup_equalizer_pane_ParamLimits

0x2b2c,	// (0x000acbf4) mup_equalizer_pane

0x2b45,	// (0x000acc0d) mup_equalizer_pane_cp1_ParamLimits

0x2b45,	// (0x000acc0d) mup_equalizer_pane_cp1

0x2b62,	// (0x000acc2a) mup_equalizer_pane_cp2_ParamLimits

0x2b62,	// (0x000acc2a) mup_equalizer_pane_cp2

0x2b7f,	// (0x000acc47) mup_equalizer_pane_cp3_ParamLimits

0x2b7f,	// (0x000acc47) mup_equalizer_pane_cp3

0x2ba0,	// (0x000acc68) mup_equalizer_pane_cp4_ParamLimits

0x2ba0,	// (0x000acc68) mup_equalizer_pane_cp4

0x2bc1,	// (0x000acc89) mup_equalizer_pane_cp5

0x2bd5,	// (0x000acc9d) mup_equalizer_pane_cp6

0x2be9,	// (0x000accb1) mup_equalizer_pane_cp7

0xc6d7,	// (0x000b679f) bg_popup_call_poc_act_pane_g9

0xc6df,	// (0x000b67a7) bg_popup_call_poc_act_pane_g10

0xc6e7,	// (0x000b67af) bg_popup_call_poc_act_pane_g11

0x000a,

0xa1cc,	// (0x000b4294) mup_scale_pane

0xa305,	// (0x000b43cd) mup_scale_pane_g1

0xb53d,	// (0x000b5605) mup_scale_pane_g2

0x0006,

0xf46f,	// (0x000b9537) mup_scale_pane_g

0xb561,	// (0x000b5629) msg_data_pane

0xb569,	// (0x000b5631) scroll_pane_cp017

0x2c0f,	// (0x000accd7) bg_list_pane_cp04_ParamLimits

0x2c0f,	// (0x000accd7) bg_list_pane_cp04

0xb571,	// (0x000b5639) msg_data_pane_g1

0x2c33,	// (0x000accfb) msg_data_pane_g2

0x2c3b,	// (0x000acd03) msg_data_pane_g3

0x2c43,	// (0x000acd0b) msg_data_pane_g4

0x2c4b,	// (0x000acd13) msg_data_pane_g5

0x2c53,	// (0x000acd1b) msg_data_pane_g6

0x2c5b,	// (0x000acd23) msg_data_pane_g7

0x0006,

0xf47e,	// (0x000b9546) msg_data_pane_g

0x2c63,	// (0x000acd2b) msg_text_pane_ParamLimits

0x2c63,	// (0x000acd2b) msg_text_pane

0x2c89,	// (0x000acd51) qrid_highlight_pane_cp011_ParamLimits

0x2c89,	// (0x000acd51) qrid_highlight_pane_cp011

0x9f71,	// (0x000b4039) msg_body_pane

0x9f71,	// (0x000b4039) msg_header_pane

0xb579,	// (0x000b5641) input_focus_pane_cp07

0x2cb8,	// (0x000acd80) msg_header_pane_t1_ParamLimits

0x2cb8,	// (0x000acd80) msg_header_pane_t1

0x2cca,	// (0x000acd92) msg_header_pane_t2_ParamLimits

0x2cca,	// (0x000acd92) msg_header_pane_t2

0x0001,

0xf492,	// (0x000b955a) msg_header_pane_t_ParamLimits

0xf492,	// (0x000b955a) msg_header_pane_t

0xb58e,	// (0x000b5656) msg_body_pane_g1

0x2cdc,	// (0x000acda4) msg_body_pane_t1_ParamLimits

0x2cdc,	// (0x000acda4) msg_body_pane_t1

0x2d0d,	// (0x000acdd5) msg_body_pane_t2_ParamLimits

0x2d0d,	// (0x000acdd5) msg_body_pane_t2

0x2d1f,	// (0x000acde7) msg_body_pane_t3_ParamLimits

0x2d1f,	// (0x000acde7) msg_body_pane_t3

0x0002,

0xf497,	// (0x000b955f) msg_body_pane_t_ParamLimits

0xf497,	// (0x000b955f) msg_body_pane_t

0x2d6b,	// (0x000ace33) main_viewer_pane_g1_ParamLimits

0x2d6b,	// (0x000ace33) main_viewer_pane_g1

0x2d79,	// (0x000ace41) main_viewer_pane_g2_ParamLimits

0x2d79,	// (0x000ace41) main_viewer_pane_g2

0x2d87,	// (0x000ace4f) main_viewer_pane_g3_ParamLimits

0x2d87,	// (0x000ace4f) main_viewer_pane_g3

0x2d96,	// (0x000ace5e) main_viewer_pane_g4_ParamLimits

0x2d96,	// (0x000ace5e) main_viewer_pane_g4

0x990f,	// (0x000b39d7) main_viewer_pane_g5_ParamLimits

0x990f,	// (0x000b39d7) main_viewer_pane_g5

0x990f,	// (0x000b39d7) main_viewer_pane_g7_ParamLimits

0x990f,	// (0x000b39d7) main_viewer_pane_g7

0xae5d,	// (0x000b4f25) main_viewer_pane_g8_ParamLimits

0xae5d,	// (0x000b4f25) main_viewer_pane_g8

0x0007,

0xf4a7,	// (0x000b956f) main_viewer_pane_g_ParamLimits

0xf4a7,	// (0x000b956f) main_viewer_pane_g

0xb596,	// (0x000b565e) viewer_content_pane_ParamLimits

0xb596,	// (0x000b565e) viewer_content_pane

0x2dd2,	// (0x000ace9a) main_postcard_pane_g1_ParamLimits

0x2dd2,	// (0x000ace9a) main_postcard_pane_g1

0x2de8,	// (0x000aceb0) main_postcard_pane_g2_ParamLimits

0x2de8,	// (0x000aceb0) main_postcard_pane_g2

0x2dfe,	// (0x000acec6) main_postcard_pane_g3_ParamLimits

0x2dfe,	// (0x000acec6) main_postcard_pane_g3

0x0005,

0xf4b8,	// (0x000b9580) main_postcard_pane_g_ParamLimits

0xf4b8,	// (0x000b9580) main_postcard_pane_g

0x2e15,	// (0x000acedd) main_postcard_pane_g4

0xc8b9,	// (0x000b6981) smil_status_volume_pane_g2

0x2e58,	// (0x000acf20) postcard_pane_ParamLimits

0x2e58,	// (0x000acf20) postcard_pane

0xb5a4,	// (0x000b566c) postcard_pane_g1_ParamLimits

0xb5a4,	// (0x000b566c) postcard_pane_g1

0x2e9a,	// (0x000acf62) postcard_pane_g2_ParamLimits

0x2e9a,	// (0x000acf62) postcard_pane_g2

0x2ea6,	// (0x000acf6e) postcard_pane_g3_ParamLimits

0x2ea6,	// (0x000acf6e) postcard_pane_g3

0xb5b2,	// (0x000b567a) postcard_pane_g4_ParamLimits

0xb5b2,	// (0x000b567a) postcard_pane_g4

0x2eb2,	// (0x000acf7a) postcard_pane_g5_ParamLimits

0x2eb2,	// (0x000acf7a) postcard_pane_g5

0x2ec7,	// (0x000acf8f) postcard_pane_g6_ParamLimits

0x2ec7,	// (0x000acf8f) postcard_pane_g6

0xb5a4,	// (0x000b566c) postcard_pane_g7_ParamLimits

0xb5a4,	// (0x000b566c) postcard_pane_g7

0x0006,

0xf4c5,	// (0x000b958d) postcard_pane_g_ParamLimits

0xf4c5,	// (0x000b958d) postcard_pane_g

0x2edb,	// (0x000acfa3) main_mp2_pane_g1_ParamLimits

0x2edb,	// (0x000acfa3) main_mp2_pane_g1

0x2ee7,	// (0x000acfaf) main_mp2_pane_g2_ParamLimits

0x2ee7,	// (0x000acfaf) main_mp2_pane_g2

0x2ef3,	// (0x000acfbb) main_mp2_pane_g3_ParamLimits

0x2ef3,	// (0x000acfbb) main_mp2_pane_g3

0x0002,

0xf4d4,	// (0x000b959c) main_mp2_pane_g_ParamLimits

0xf4d4,	// (0x000b959c) main_mp2_pane_g

0x2eff,	// (0x000acfc7) main_mp2_pane_t1_ParamLimits

0x2eff,	// (0x000acfc7) main_mp2_pane_t1

0x2f14,	// (0x000acfdc) main_mp2_pane_t2_ParamLimits

0x2f14,	// (0x000acfdc) main_mp2_pane_t2

0x2f26,	// (0x000acfee) main_mp2_pane_t3_ParamLimits

0x2f26,	// (0x000acfee) main_mp2_pane_t3

0x0002,

0xf4db,	// (0x000b95a3) main_mp2_pane_t_ParamLimits

0xf4db,	// (0x000b95a3) main_mp2_pane_t

0xb5c0,	// (0x000b5688) pec_content_pane_ParamLimits

0xb5c0,	// (0x000b5688) pec_content_pane

0xaae4,	// (0x000b4bac) scroll_pane_cp015

0xb5d2,	// (0x000b569a) pec_attribute_pane_ParamLimits

0xb5d2,	// (0x000b569a) pec_attribute_pane

0x2f38,	// (0x000ad000) pec_content_pane_g1_ParamLimits

0x2f38,	// (0x000ad000) pec_content_pane_g1

0xb5e2,	// (0x000b56aa) pec_content_pane_t1_ParamLimits

0xb5e2,	// (0x000b56aa) pec_content_pane_t1

0xb5f4,	// (0x000b56bc) pec_content_pane_t2_ParamLimits

0xb5f4,	// (0x000b56bc) pec_content_pane_t2

0x0001,

0xf4e2,	// (0x000b95aa) pec_content_pane_t_ParamLimits

0xf4e2,	// (0x000b95aa) pec_content_pane_t

0x2f44,	// (0x000ad00c) list_single_graphic_pane_cp01_ParamLimits

0x2f44,	// (0x000ad00c) list_single_graphic_pane_cp01

0xa1cc,	// (0x000b4294) bg_popup_sub_pane_cp04

0xb606,	// (0x000b56ce) popup_mup_playback_window_g1

0xb612,	// (0x000b56da) popup_mup_playback_window_t1

0xb627,	// (0x000b56ef) popup_mup_playback_window_t2

0x0001,

0xf4e7,	// (0x000b95af) popup_mup_playback_window_t

0xb65e,	// (0x000b5726) main_image_pane_g1_ParamLimits

0xb65e,	// (0x000b5726) main_image_pane_g1

0xb6a1,	// (0x000b5769) scroll_pane_cp018_ParamLimits

0xb6a1,	// (0x000b5769) scroll_pane_cp018

0xb6b9,	// (0x000b5781) scroll_pane_cp016_ParamLimits

0xb6b9,	// (0x000b5781) scroll_pane_cp016

0x3013,	// (0x000ad0db) smil2_image_pane_ParamLimits

0x3013,	// (0x000ad0db) smil2_image_pane

0x3047,	// (0x000ad10f) smil2_root_pane_ParamLimits

0x3047,	// (0x000ad10f) smil2_root_pane

0x307f,	// (0x000ad147) smil2_text_pane_ParamLimits

0x307f,	// (0x000ad147) smil2_text_pane

0x9f71,	// (0x000b4039) bg_list_pane_cp06

0xb6f5,	// (0x000b57bd) grid_radio_pane

0x9f71,	// (0x000b4039) bg_popup_window_pane_cp06

0xb6fd,	// (0x000b57c5) main_fmradio_pane_t1

0xb035,	// (0x000b50fd) heading_pane_cp04

0xb70b,	// (0x000b57d3) main_fmradio_pane_t2

0xc6ef,	// (0x000b67b7) popup_cale_lunar_info_window_g1

0xb719,	// (0x000b57e1) main_fmradio_pane_t3

0xc6f7,	// (0x000b67bf) popup_cale_lunar_info_window_g2

0xb727,	// (0x000b57ef) main_fmradio_pane_t4

0x0001,

0xb735,	// (0x000b57fd) main_fmradio_pane_t5

0x0004,

0xf5c2,	// (0x000b968a) popup_cale_lunar_info_window_g

0xf4fc,	// (0x000b95c4) main_fmradio_pane_t

0xb743,	// (0x000b580b) wait_bar_pane_cp03

0xb74b,	// (0x000b5813) cell_fmradio_pane_ParamLimits

0xb74b,	// (0x000b5813) cell_fmradio_pane

0xb5a4,	// (0x000b566c) cell_fmradio_pane_g1_ParamLimits

0xb5a4,	// (0x000b566c) cell_fmradio_pane_g1

0x9f71,	// (0x000b4039) grid_highlight_pane_cp011

0xb75e,	// (0x000b5826) poc_content_pane_ParamLimits

0xb75e,	// (0x000b5826) poc_content_pane

0xb770,	// (0x000b5838) scroll_pane_cp019

0x30ff,	// (0x000ad1c7) popup_call_poc_act_window_ParamLimits

0x30ff,	// (0x000ad1c7) popup_call_poc_act_window

0x3123,	// (0x000ad1eb) popup_call_poc_inact_window_ParamLimits

0x3123,	// (0x000ad1eb) popup_call_poc_inact_window

0xf599,	// (0x000b9661) bg_popup_call_poc_act_pane_g

0xc667,	// (0x000b672f) bg_popup_call_poc_inact_pane_g1

0xc66f,	// (0x000b6737) bg_popup_call_poc_inact_pane_g2

0xb778,	// (0x000b5840) popup_call_poc_act_window_g2

0xc677,	// (0x000b673f) bg_popup_call_poc_inact_pane_g3

0xc67f,	// (0x000b6747) bg_popup_call_poc_inact_pane_g4

0xc687,	// (0x000b674f) bg_popup_call_poc_inact_pane_g5

0xb780,	// (0x000b5848) popup_call_poc_act_window_t1_ParamLimits

0xb780,	// (0x000b5848) popup_call_poc_act_window_t1

0xb7a8,	// (0x000b5870) popup_call_poc_act_window_t2_ParamLimits

0xb7a8,	// (0x000b5870) popup_call_poc_act_window_t2

0xb7d0,	// (0x000b5898) popup_call_poc_act_window_t3_ParamLimits

0xb7d0,	// (0x000b5898) popup_call_poc_act_window_t3

0xb7f8,	// (0x000b58c0) popup_call_poc_act_window_t4_ParamLimits

0xb7f8,	// (0x000b58c0) popup_call_poc_act_window_t4

0x0003,

0xf507,	// (0x000b95cf) popup_call_poc_act_window_t_ParamLimits

0xf507,	// (0x000b95cf) popup_call_poc_act_window_t

0xc68f,	// (0x000b6757) bg_popup_call_poc_inact_pane_g6

0xc697,	// (0x000b675f) bg_popup_call_poc_inact_pane_g7

0xc69f,	// (0x000b6767) bg_popup_call_poc_inact_pane_g8

0xb80a,	// (0x000b58d2) popup_call_poc_inact_window_g2

0xc6a7,	// (0x000b676f) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf586,	// (0x000b964e) bg_popup_call_poc_inact_pane_g

0xb812,	// (0x000b58da) popup_call_poc_inact_window_t1_ParamLimits

0xb812,	// (0x000b58da) popup_call_poc_inact_window_t1

0xb827,	// (0x000b58ef) popup_call_poc_inact_window_t2_ParamLimits

0xb827,	// (0x000b58ef) popup_call_poc_inact_window_t2

0xb83c,	// (0x000b5904) popup_call_poc_inact_window_t3_ParamLimits

0xb83c,	// (0x000b5904) popup_call_poc_inact_window_t3

0x0002,

0xf510,	// (0x000b95d8) popup_call_poc_inact_window_t_ParamLimits

0xf510,	// (0x000b95d8) popup_call_poc_inact_window_t

0xc82c,	// (0x000b68f4) context_pane_ParamLimits

0x3956,	// (0x000ada1e) signal_pane_ParamLimits

0xb3b7,	// (0x000b547f) main_call2_pane

0x995a,	// (0x000b3a22) popup_phob_thumbnail2_window_ParamLimits

0x995a,	// (0x000b3a22) popup_phob_thumbnail2_window

0x98f7,	// (0x000b39bf) aid_hotspot_pointer_arrow_pane

0x98ff,	// (0x000b39c7) aid_hotspot_pointer_hand_pane

0x346e,	// (0x000ad536) phob_pre_status_pane_g5

0x0f46,	// (0x000ab00e) cams_zoom_pane_ParamLimits

0x0f55,	// (0x000ab01d) image_vga_pane_ParamLimits

0x0f6f,	// (0x000ab037) main_camera_pane_g1_ParamLimits

0x0f81,	// (0x000ab049) main_camera_pane_g2_ParamLimits

0x0f91,	// (0x000ab059) main_camera_pane_g3_ParamLimits

0x0fa3,	// (0x000ab06b) main_camera_pane_g4_ParamLimits

0x0fb5,	// (0x000ab07d) main_camera_pane_g5_ParamLimits

0x0fc7,	// (0x000ab08f) main_camera_pane_g6_ParamLimits

0x0fd9,	// (0x000ab0a1) main_camera_pane_g7_ParamLimits

0xf20f,	// (0x000b92d7) main_camera_pane_g_ParamLimits

0x0feb,	// (0x000ab0b3) main_camera_pane_t1_ParamLimits

0x1001,	// (0x000ab0c9) main_camera_pane_t2_ParamLimits

0xf220,	// (0x000b92e8) main_camera_pane_t_ParamLimits

0xa1cc,	// (0x000b4294) bg_popup_preview_window_pane_cp01_ParamLimits

0xa1cc,	// (0x000b4294) bg_popup_preview_window_pane_cp01

0xb851,	// (0x000b5919) popup_phob_thumbnail2_window_g1_ParamLimits

0xb851,	// (0x000b5919) popup_phob_thumbnail2_window_g1

0x9f71,	// (0x000b4039) call2_cli_visual_pane

0x3157,	// (0x000ad21f) popup_call2_audio_conf_window_ParamLimits

0x3157,	// (0x000ad21f) popup_call2_audio_conf_window

0x3177,	// (0x000ad23f) popup_call2_audio_first_window_ParamLimits

0x3177,	// (0x000ad23f) popup_call2_audio_first_window

0x320d,	// (0x000ad2d5) popup_call2_audio_in_window_ParamLimits

0x320d,	// (0x000ad2d5) popup_call2_audio_in_window

0x3255,	// (0x000ad31d) popup_call2_audio_out_window_ParamLimits

0x3255,	// (0x000ad31d) popup_call2_audio_out_window

0x32bf,	// (0x000ad387) popup_call2_audio_second_window_ParamLimits

0x32bf,	// (0x000ad387) popup_call2_audio_second_window

0x3325,	// (0x000ad3ed) popup_call2_audio_wait_window_ParamLimits

0x3325,	// (0x000ad3ed) popup_call2_audio_wait_window

0x9f71,	// (0x000b4039) bg_popup_call2_act_pane_cp03

0xa1ae,	// (0x000b4276) list_conf_pane_cp

0xb85d,	// (0x000b5925) popup_call2_audio_conf_window_t1

0xb86b,	// (0x000b5933) list_single_graphic_popup_conf2_pane_ParamLimits

0xb86b,	// (0x000b5933) list_single_graphic_popup_conf2_pane

0xb0c9,	// (0x000b5191) list_highlight_pane_cp04

0xb87e,	// (0x000b5946) list_single_graphic_popup_conf2_pane_g1

0xb0da,	// (0x000b51a2) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf517,	// (0x000b95df) list_single_graphic_popup_conf2_pane_g

0xb888,	// (0x000b5950) list_single_graphic_popup_conf2_pane_t1

0xb896,	// (0x000b595e) bg_popup_call2_act_pane_cp01_ParamLimits

0xb896,	// (0x000b595e) bg_popup_call2_act_pane_cp01

0xb920,	// (0x000b59e8) call_type_pane_cp05_ParamLimits

0xb920,	// (0x000b59e8) call_type_pane_cp05

0xb974,	// (0x000b5a3c) popup_call2_audio_second_window_g1_ParamLimits

0xb974,	// (0x000b5a3c) popup_call2_audio_second_window_g1

0xb9c8,	// (0x000b5a90) popup_call2_audio_second_window_g2_ParamLimits

0xb9c8,	// (0x000b5a90) popup_call2_audio_second_window_g2

0x0002,

0xf51c,	// (0x000b95e4) popup_call2_audio_second_window_g_ParamLimits

0xf51c,	// (0x000b95e4) popup_call2_audio_second_window_g

0xba2d,	// (0x000b5af5) popup_call2_audio_second_window_t1_ParamLimits

0xba2d,	// (0x000b5af5) popup_call2_audio_second_window_t1

0xbae8,	// (0x000b5bb0) popup_call2_audio_second_window_t2_ParamLimits

0xbae8,	// (0x000b5bb0) popup_call2_audio_second_window_t2

0xbb3b,	// (0x000b5c03) popup_call2_audio_second_window_t3_ParamLimits

0xbb3b,	// (0x000b5c03) popup_call2_audio_second_window_t3

0x0003,

0xf523,	// (0x000b95eb) popup_call2_audio_second_window_t_ParamLimits

0xf523,	// (0x000b95eb) popup_call2_audio_second_window_t

0x9f71,	// (0x000b4039) bg_popup_call2_in_pane_cp02

0x9f7b,	// (0x000b4043) call_type_pane_cp04

0x9f83,	// (0x000b404b) popup_call2_audio_wait_window_g1

0x9f8b,	// (0x000b4053) popup_call2_audio_wait_window_g2

0x0001,

0xf0fc,	// (0x000b91c4) popup_call2_audio_wait_window_g

0x9f93,	// (0x000b405b) popup_call2_audio_wait_window_t3

0xbc2e,	// (0x000b5cf6) bg_popup_call2_act_pane_ParamLimits

0xbc2e,	// (0x000b5cf6) bg_popup_call2_act_pane

0xbcee,	// (0x000b5db6) call_type_pane_cp03_ParamLimits

0xbcee,	// (0x000b5db6) call_type_pane_cp03

0xbd52,	// (0x000b5e1a) popup_call2_audio_first_window_g1_ParamLimits

0xbd52,	// (0x000b5e1a) popup_call2_audio_first_window_g1

0xbdc2,	// (0x000b5e8a) popup_call2_audio_first_window_g2_ParamLimits

0xbdc2,	// (0x000b5e8a) popup_call2_audio_first_window_g2

0xb44c,	// (0x000b5514) popup_call2_audio_first_window_g3_ParamLimits

0xb44c,	// (0x000b5514) popup_call2_audio_first_window_g3

0x0004,

0xf52c,	// (0x000b95f4) popup_call2_audio_first_window_g_ParamLimits

0xf52c,	// (0x000b95f4) popup_call2_audio_first_window_g

0xbea0,	// (0x000b5f68) popup_call2_audio_first_window_t1_ParamLimits

0xbea0,	// (0x000b5f68) popup_call2_audio_first_window_t1

0xbfaf,	// (0x000b6077) popup_call2_audio_first_window_t4_ParamLimits

0xbfaf,	// (0x000b6077) popup_call2_audio_first_window_t4

0xc092,	// (0x000b615a) popup_call2_audio_first_window_t5_ParamLimits

0xc092,	// (0x000b615a) popup_call2_audio_first_window_t5

0x0003,

0xf537,	// (0x000b95ff) popup_call2_audio_first_window_t_ParamLimits

0xf537,	// (0x000b95ff) popup_call2_audio_first_window_t

0xa1c4,	// (0x000b428c) bg_popup_call2_act_pane_g1

0xc6ff,	// (0x000b67c7) popup_cale_lunar_info_window_t1

0xc70d,	// (0x000b67d5) popup_cale_lunar_info_window_t2

0xc71b,	// (0x000b67e3) popup_cale_lunar_info_window_t3

0x9f71,	// (0x000b4039) bg_popup_call2_bubble_pane

0xc193,	// (0x000b625b) bg_popup_call2_in_pane_cp01_ParamLimits

0xc193,	// (0x000b625b) bg_popup_call2_in_pane_cp01

0x952b,	// (0x000b35f3) call_type_pane_cp02

0xc1db,	// (0x000b62a3) popup_call2_audio_out_window_g1_ParamLimits

0xc1db,	// (0x000b62a3) popup_call2_audio_out_window_g1

0xc207,	// (0x000b62cf) popup_call2_audio_out_window_g2_ParamLimits

0xc207,	// (0x000b62cf) popup_call2_audio_out_window_g2

0xc22f,	// (0x000b62f7) popup_call2_audio_out_window_g3_ParamLimits

0xc22f,	// (0x000b62f7) popup_call2_audio_out_window_g3

0x0003,

0xf540,	// (0x000b9608) popup_call2_audio_out_window_g_ParamLimits

0xf540,	// (0x000b9608) popup_call2_audio_out_window_g

0xc26a,	// (0x000b6332) popup_call2_audio_out_window_t1_ParamLimits

0xc26a,	// (0x000b6332) popup_call2_audio_out_window_t1

0xc2c9,	// (0x000b6391) popup_call2_audio_out_window_t2_ParamLimits

0xc2c9,	// (0x000b6391) popup_call2_audio_out_window_t2

0xc31d,	// (0x000b63e5) popup_call2_audio_out_window_t3_ParamLimits

0xc31d,	// (0x000b63e5) popup_call2_audio_out_window_t3

0xc333,	// (0x000b63fb) popup_call2_audio_out_window_t4_ParamLimits

0xc333,	// (0x000b63fb) popup_call2_audio_out_window_t4

0xc349,	// (0x000b6411) popup_call2_audio_out_window_t5_ParamLimits

0xc349,	// (0x000b6411) popup_call2_audio_out_window_t5

0x0005,

0xf549,	// (0x000b9611) popup_call2_audio_out_window_t_ParamLimits

0xf549,	// (0x000b9611) popup_call2_audio_out_window_t

0xc3ad,	// (0x000b6475) bg_popup_call2_in_pane_ParamLimits

0xc3ad,	// (0x000b6475) bg_popup_call2_in_pane

0xc409,	// (0x000b64d1) popup_call2_audio_in_window_g1_ParamLimits

0xc409,	// (0x000b64d1) popup_call2_audio_in_window_g1

0xc441,	// (0x000b6509) popup_call2_audio_in_window_g2_ParamLimits

0xc441,	// (0x000b6509) popup_call2_audio_in_window_g2

0xc479,	// (0x000b6541) popup_call2_audio_in_window_g3_ParamLimits

0xc479,	// (0x000b6541) popup_call2_audio_in_window_g3

0x0003,

0xf556,	// (0x000b961e) popup_call2_audio_in_window_g_ParamLimits

0xf556,	// (0x000b961e) popup_call2_audio_in_window_g

0xc4d1,	// (0x000b6599) popup_call2_audio_in_window_t1_ParamLimits

0xc4d1,	// (0x000b6599) popup_call2_audio_in_window_t1

0xc551,	// (0x000b6619) popup_call2_audio_in_window_t2_ParamLimits

0xc551,	// (0x000b6619) popup_call2_audio_in_window_t2

0xc5d1,	// (0x000b6699) popup_call2_audio_in_window_t3_ParamLimits

0xc5d1,	// (0x000b6699) popup_call2_audio_in_window_t3

0xc5eb,	// (0x000b66b3) popup_call2_audio_in_window_t4_ParamLimits

0xc5eb,	// (0x000b66b3) popup_call2_audio_in_window_t4

0xc5fd,	// (0x000b66c5) popup_call2_audio_in_window_t5_ParamLimits

0xc5fd,	// (0x000b66c5) popup_call2_audio_in_window_t5

0xc612,	// (0x000b66da) popup_call2_audio_in_window_t6_ParamLimits

0xc612,	// (0x000b66da) popup_call2_audio_in_window_t6

0x0005,

0xf55f,	// (0x000b9627) popup_call2_audio_in_window_t_ParamLimits

0xf55f,	// (0x000b9627) popup_call2_audio_in_window_t

0xa1c4,	// (0x000b428c) bg_popup_call2_in_pane_g1

0xc729,	// (0x000b67f1) popup_cale_lunar_info_window_t4

0x0003,

0xf5c7,	// (0x000b968f) popup_cale_lunar_info_window_t

0xa1cc,	// (0x000b4294) bg_popup_call2_rect_pane_ParamLimits

0xa1cc,	// (0x000b4294) bg_popup_call2_rect_pane

0x9f71,	// (0x000b4039) call2_cli_visual_graphic_pane

0x9f71,	// (0x000b4039) call2_cli_visual_text_pane

0x9981,	// (0x000b3a49) smil_status_volume_pane_g3

0x0002,

0xa305,	// (0x000b43cd) call2_cli_visual_graphic_pane_g1

0xa305,	// (0x000b43cd) call2_cli_visual_graphic_pane_g2

0xa305,	// (0x000b43cd) call2_cli_visual_graphic_pane_g3

0x0002,

0xf56c,	// (0x000b9634) call2_cli_visual_graphic_pane_g

0xc627,	// (0x000b66ef) bg_popup_call2_rect_pane_g1

0xa3a3,	// (0x000b446b) bg_popup_call2_rect_pane_g2

0xc62f,	// (0x000b66f7) bg_popup_call2_rect_pane_g3

0xc637,	// (0x000b66ff) bg_popup_call2_rect_pane_g4

0xc63f,	// (0x000b6707) bg_popup_call2_rect_pane_g5

0xc647,	// (0x000b670f) bg_popup_call2_rect_pane_g6

0xc64f,	// (0x000b6717) bg_popup_call2_rect_pane_g7

0xc657,	// (0x000b671f) bg_popup_call2_rect_pane_g8

0xc65f,	// (0x000b6727) bg_popup_call2_rect_pane_g9

0x0008,

0xf573,	// (0x000b963b) bg_popup_call2_rect_pane_g

0xc667,	// (0x000b672f) bg_popup_call2_bubble_pane_g1

0xc66f,	// (0x000b6737) bg_popup_call2_bubble_pane_g2

0xc677,	// (0x000b673f) bg_popup_call2_bubble_pane_g3

0xc67f,	// (0x000b6747) bg_popup_call2_bubble_pane_g4

0xc687,	// (0x000b674f) bg_popup_call2_bubble_pane_g5

0xc68f,	// (0x000b6757) bg_popup_call2_bubble_pane_g6

0xc697,	// (0x000b675f) bg_popup_call2_bubble_pane_g7

0xc69f,	// (0x000b6767) bg_popup_call2_bubble_pane_g8

0xc6a7,	// (0x000b676f) bg_popup_call2_bubble_pane_g9

0x0008,

0xf586,	// (0x000b964e) bg_popup_call2_bubble_pane_g

0x089b,	// (0x000aa963) aid_cale_week_size_cell_pane

0x1019,	// (0x000ab0e1) aid_cams_cif_uncrop_pane_ParamLimits

0x1019,	// (0x000ab0e1) aid_cams_cif_uncrop_pane

0x11ce,	// (0x000ab296) aid_cams_size_cell_ParamLimits

0x11ce,	// (0x000ab296) aid_cams_size_cell

0x11e2,	// (0x000ab2aa) grid_cams_pane_ParamLimits

0x11fc,	// (0x000ab2c4) linegrid_cams_pane_ParamLimits

0x13f7,	// (0x000ab4bf) call_video_pane_t1

0x1415,	// (0x000ab4dd) call_video_pane_t2

0x0001,

0xf273,	// (0x000b933b) call_video_pane_t

0x1844,	// (0x000ab90c) aid_cale_month_size_cell_pane_ParamLimits

0x1844,	// (0x000ab90c) aid_cale_month_size_cell_pane

0xf610,	// (0x000b96d8) smil_status_volume_pane_g

0x998e,	// (0x000b3a56) volume_smil_pane_ParamLimits

0x93be,	// (0x000b3486) aid_popup2_width_pane

0x0800,	// (0x000aa8c8) cell_qdial_pane_g4_ParamLimits

0x0800,	// (0x000aa8c8) cell_qdial_pane_g4

0x2738,	// (0x000ac800) aid_blid_cardinal_pane_ParamLimits

0x2744,	// (0x000ac80c) aid_blid_destination_pane_ParamLimits

0x2744,	// (0x000ac80c) aid_blid_destination_pane

0xa1cc,	// (0x000b4294) bg_popup_call_poc_act_pane_ParamLimits

0xa1cc,	// (0x000b4294) bg_popup_call_poc_act_pane

0xa1cc,	// (0x000b4294) bg_popup_call_poc_inact_pane_ParamLimits

0xa1cc,	// (0x000b4294) bg_popup_call_poc_inact_pane

0xc6af,	// (0x000b6777) bg_popup_call_poc_act_pane_g1

0xc6b7,	// (0x000b677f) bg_popup_call_poc_act_pane_g2

0xc6bf,	// (0x000b6787) bg_popup_call_poc_act_pane_g3

0xc67f,	// (0x000b6747) bg_popup_call_poc_act_pane_g4

0xc687,	// (0x000b674f) bg_popup_call_poc_act_pane_g5

0xc6c7,	// (0x000b678f) bg_popup_call_poc_act_pane_g6

0xc697,	// (0x000b675f) bg_popup_call_poc_act_pane_g7

0xc6cf,	// (0x000b6797) bg_popup_call_poc_act_pane_g8

0x9f71,	// (0x000b4039) main_usb_pane

0x9935,	// (0x000b39fd) popup_cale_lunar_info_window

0x16df,	// (0x000ab7a7) im_reading_pane_t1_ParamLimits

0xaa3c,	// (0x000b4b04) list_im_pane_ParamLimits

0xaa4d,	// (0x000b4b15) scroll_pane_cp07_ParamLimits

0x9f71,	// (0x000b4039) grid_highlight_pane_cp012

0xa1cc,	// (0x000b4294) mup_scale_pane_ParamLimits

0xb5a4,	// (0x000b566c) main_usb_pane_g1_ParamLimits

0xb5a4,	// (0x000b566c) main_usb_pane_g1

0x3383,	// (0x000ad44b) main_usb_pane_g2_ParamLimits

0x3383,	// (0x000ad44b) main_usb_pane_g2

0x0001,

0xf5b0,	// (0x000b9678) main_usb_pane_g_ParamLimits

0xf5b0,	// (0x000b9678) main_usb_pane_g

0x3399,	// (0x000ad461) main_usb_pane_t1_ParamLimits

0x3399,	// (0x000ad461) main_usb_pane_t1

0x33ab,	// (0x000ad473) main_usb_pane_t2_ParamLimits

0x33ab,	// (0x000ad473) main_usb_pane_t2

0x33bd,	// (0x000ad485) main_usb_pane_t3_ParamLimits

0x33bd,	// (0x000ad485) main_usb_pane_t3

0x33cf,	// (0x000ad497) main_usb_pane_t4_ParamLimits

0x33cf,	// (0x000ad497) main_usb_pane_t4

0x33e1,	// (0x000ad4a9) main_usb_pane_t5_ParamLimits

0x33e1,	// (0x000ad4a9) main_usb_pane_t5

0x33f3,	// (0x000ad4bb) main_usb_pane_t6_ParamLimits

0x33f3,	// (0x000ad4bb) main_usb_pane_t6

0x0005,

0xf5b5,	// (0x000b967d) main_usb_pane_t_ParamLimits

0x26e5,	// (0x000ac7ad) aid_text_placing

0x26ee,	// (0x000ac7b6) main_location2_pane_t1_ParamLimits

0x2700,	// (0x000ac7c8) main_location2_pane_t2_ParamLimits

0x2712,	// (0x000ac7da) main_location2_pane_t3_ParamLimits

0x2726,	// (0x000ac7ee) main_location2_pane_t4_ParamLimits

0x2726,	// (0x000ac7ee) main_location2_pane_t4

0xf3d4,	// (0x000b949c) main_location2_pane_t_ParamLimits

0xa208,	// (0x000b42d0) find_pinb_pane_g2_ParamLimits

0xa208,	// (0x000b42d0) find_pinb_pane_g2

0x0001,

0xf122,	// (0x000b91ea) find_pinb_pane_g_ParamLimits

0xf122,	// (0x000b91ea) find_pinb_pane_g

0xa214,	// (0x000b42dc) find_pinb_pane_t1_ParamLimits

0xa226,	// (0x000b42ee) find_pinb_pane_t2_ParamLimits

0xf127,	// (0x000b91ef) find_pinb_pane_t_ParamLimits

0x9f71,	// (0x000b4039) main_call3_pane

0x1d27,	// (0x000abdef) cale_month_day_heading_pane_t1_ParamLimits

0x1dad,	// (0x000abe75) cale_month_day_heading_pane_t2_ParamLimits

0x1e3e,	// (0x000abf06) cale_month_day_heading_pane_t3_ParamLimits

0x1ecf,	// (0x000abf97) cale_month_day_heading_pane_t4_ParamLimits

0x1f68,	// (0x000ac030) cale_month_day_heading_pane_t5_ParamLimits

0x2009,	// (0x000ac0d1) cale_month_day_heading_pane_t6_ParamLimits

0x20aa,	// (0x000ac172) cale_month_day_heading_pane_t7_ParamLimits

0xf2ab,	// (0x000b9373) cale_month_day_heading_pane_t_ParamLimits

0xac97,	// (0x000b4d5f) smil_status_volume_pane

0x2e76,	// (0x000acf3e) postcard_address_pane_ParamLimits

0x2e76,	// (0x000acf3e) postcard_address_pane

0x2e88,	// (0x000acf50) postcard_message_pane_ParamLimits

0x2e88,	// (0x000acf50) postcard_message_pane

0x335f,	// (0x000ad427) call2_cli_visual_pane_t1_ParamLimits

0x335f,	// (0x000ad427) call2_cli_visual_pane_t1

0x3b85,	// (0x000adc4d) postcard_message_pane_t1_ParamLimits

0x3b85,	// (0x000adc4d) postcard_message_pane_t1

0x3b6e,	// (0x000adc36) postcard_address_pane_t1_ParamLimits

0x3b6e,	// (0x000adc36) postcard_address_pane_t1

0x3b5a,	// (0x000adc22) popup_call3_audio_in_window_ParamLimits

0x3b5a,	// (0x000adc22) popup_call3_audio_in_window

0x39e7,	// (0x000adaaf) bg_popup_call3_in_pane_ParamLimits

0x39e7,	// (0x000adaaf) bg_popup_call3_in_pane

0x3a5b,	// (0x000adb23) popup_call3_audio_in_window_g1_ParamLimits

0x3a5b,	// (0x000adb23) popup_call3_audio_in_window_g1

0x3a7b,	// (0x000adb43) popup_call3_audio_in_window_g2_ParamLimits

0x3a7b,	// (0x000adb43) popup_call3_audio_in_window_g2

0x3a9b,	// (0x000adb63) popup_call3_audio_in_window_g3_ParamLimits

0x3a9b,	// (0x000adb63) popup_call3_audio_in_window_g3

0x0003,

0xf617,	// (0x000b96df) popup_call3_audio_in_window_g_ParamLimits

0xf617,	// (0x000b96df) popup_call3_audio_in_window_g

0x3acc,	// (0x000adb94) popup_call3_audio_in_window_t1_ParamLimits

0x3acc,	// (0x000adb94) popup_call3_audio_in_window_t1

0x3b0a,	// (0x000adbd2) popup_call3_audio_in_window_t2_ParamLimits

0x3b0a,	// (0x000adbd2) popup_call3_audio_in_window_t2

0x3b48,	// (0x000adc10) popup_call3_audio_in_window_t3_ParamLimits

0x3b48,	// (0x000adc10) popup_call3_audio_in_window_t3

0x0002,

0xf620,	// (0x000b96e8) popup_call3_audio_in_window_t_ParamLimits

0xf620,	// (0x000b96e8) popup_call3_audio_in_window_t

0xb3b7,	// (0x000b547f) bg_popup_call3_rect_pane

0xc627,	// (0x000b66ef) bg_popup_call3_rect_pane_g1

0xa3a3,	// (0x000b446b) bg_popup_call3_rect_pane_g2

0xc62f,	// (0x000b66f7) bg_popup_call3_rect_pane_g3

0xc637,	// (0x000b66ff) bg_popup_call3_rect_pane_g4

0xc63f,	// (0x000b6707) bg_popup_call3_rect_pane_g5

0xc647,	// (0x000b670f) bg_popup_call3_rect_pane_g6

0xc64f,	// (0x000b6717) bg_popup_call3_rect_pane_g7

0x2a2c,	// (0x000acaf4) mup_visualizer_osc_pane

0xb4cf,	// (0x000b5597) mup_visualizer_spec_pane

0x3a17,	// (0x000adadf) call3_video_qcif_pane_ParamLimits

0x3a17,	// (0x000adadf) call3_video_qcif_pane

0x3a28,	// (0x000adaf0) call3_video_qcif_uncrop_pane_ParamLimits

0x3a28,	// (0x000adaf0) call3_video_qcif_uncrop_pane

0x3a36,	// (0x000adafe) call3_video_subqcif_pane_ParamLimits

0x3a36,	// (0x000adafe) call3_video_subqcif_pane

0x3a4a,	// (0x000adb12) call3_video_subqcif_uncrop_pane_ParamLimits

0x3a4a,	// (0x000adb12) call3_video_subqcif_uncrop_pane

0x3abb,	// (0x000adb83) popup_call3_audio_in_window_g4_ParamLimits

0x3abb,	// (0x000adb83) popup_call3_audio_in_window_g4

0x39d6,	// (0x000ada9e) mup_spec_half_pane

0x39df,	// (0x000adaa7) mup_spec_half_pane_cp

0xc88c,	// (0x000b6954) mup_osc_middle_pane

0xc895,	// (0x000b695d) mup_visualizer_osc_pane_g1

0x39b6,	// (0x000ada7e) mup_spec_bar_pane_ParamLimits

0x39b6,	// (0x000ada7e) mup_spec_bar_pane

0xc879,	// (0x000b6941) mup_spec_bar_pane_g1

0xc883,	// (0x000b694b) mup_spec_bar_pane_g2

0x0001,

0xf60b,	// (0x000b96d3) mup_spec_bar_pane_g

0x089b,	// (0x000aa963) aid_cale_week_size_cell_pane_ParamLimits

0x08b5,	// (0x000aa97d) bg_cale_heading_pane_ParamLimits

0xa3ee,	// (0x000b44b6) bg_cale_pane_cp01_ParamLimits

0x08d3,	// (0x000aa99b) cale_week_corner_pane_ParamLimits

0x08f2,	// (0x000aa9ba) cale_week_day_heading_pane_ParamLimits

0x0915,	// (0x000aa9dd) cale_week_scroll_pane_g1_ParamLimits

0x092e,	// (0x000aa9f6) cale_week_scroll_pane_g2_ParamLimits

0x0946,	// (0x000aaa0e) cale_week_scroll_pane_g3_ParamLimits

0x095e,	// (0x000aaa26) cale_week_scroll_pane_g4_ParamLimits

0x0976,	// (0x000aaa3e) cale_week_scroll_pane_g5_ParamLimits

0x0992,	// (0x000aaa5a) cale_week_scroll_pane_g6_ParamLimits

0x09b2,	// (0x000aaa7a) cale_week_scroll_pane_g7_ParamLimits

0x09d2,	// (0x000aaa9a) cale_week_scroll_pane_g8_ParamLimits

0x09f6,	// (0x000aaabe) cale_week_scroll_pane_g9_ParamLimits

0x0a0e,	// (0x000aaad6) cale_week_scroll_pane_g10_ParamLimits

0x0a26,	// (0x000aaaee) cale_week_scroll_pane_g11_ParamLimits

0x0a3e,	// (0x000aab06) cale_week_scroll_pane_g12_ParamLimits

0x0a56,	// (0x000aab1e) cale_week_scroll_pane_g13_ParamLimits

0x0a56,	// (0x000aab1e) cale_week_scroll_pane_g14_ParamLimits

0x0a56,	// (0x000aab1e) cale_week_scroll_pane_g15_ParamLimits

0xf1b3,	// (0x000b927b) cale_week_scroll_pane_g_ParamLimits

0x0a6e,	// (0x000aab36) cale_week_time_pane_ParamLimits

0x0a92,	// (0x000aab5a) grid_cale_week_pane_ParamLimits

0xa40c,	// (0x000b44d4) listscroll_cale_week_pane_t1

0xa41e,	// (0x000b44e6) scroll_pane_cp08_ParamLimits

0x18a5,	// (0x000ab96d) cale_month_corner_pane_ParamLimits

0xac6d,	// (0x000b4d35) cale_month_pane_t1

0x1cc5,	// (0x000abd8d) cale_month_week_pane_ParamLimits

0x2556,	// (0x000ac61e) popup_call_status_window_g1_ParamLimits

0x256a,	// (0x000ac632) popup_call_status_window_g2_ParamLimits

0x257e,	// (0x000ac646) popup_call_status_window_g3_ParamLimits

0xf35b,	// (0x000b9423) popup_call_status_window_g_ParamLimits

0xb025,	// (0x000b50ed) aid_call2_pane

0x2caa,	// (0x000acd72) msg_header_pane_g1

0x2e76,	// (0x000acf3e) postcard_address2_pane_ParamLimits

0x2e76,	// (0x000acf3e) postcard_address2_pane

0x2e88,	// (0x000acf50) postcard_message2_pane_ParamLimits

0x2e88,	// (0x000acf50) postcard_message2_pane

0x3964,	// (0x000ada2c) message2_row_pane_ParamLimits

0x3964,	// (0x000ada2c) message2_row_pane

0x3983,	// (0x000ada4b) address2_row_pane_ParamLimits

0x3983,	// (0x000ada4b) address2_row_pane

0xc847,	// (0x000b690f) postcard_message2_row_pane_g1

0xc84f,	// (0x000b6917) postcard_message2_row_pane_t1

0xc847,	// (0x000b690f) address2_row_pane_g1

0xc84f,	// (0x000b6917) address2_row_pane_t1

0x0ead,	// (0x000aaf75) aid_size_cell_vorec

0x9f71,	// (0x000b4039) main_rss_pane

0x3996,	// (0x000ada5e) rss_list_single_pane_ParamLimits

0x3996,	// (0x000ada5e) rss_list_single_pane

0xc85d,	// (0x000b6925) rss_list_single_pane_t1

0xc86b,	// (0x000b6933) rss_list_single_pane_t2

0x0001,

0xf606,	// (0x000b96ce) rss_list_single_pane_t

0x9f71,	// (0x000b4039) main_camera2_pane

0x9f71,	// (0x000b4039) main_video2_pane

0x3bfe,	// (0x000adcc6) cams_zoom_pane_cp2_ParamLimits

0x3bfe,	// (0x000adcc6) cams_zoom_pane_cp2

0x3c1e,	// (0x000adce6) image2_vga_pane_ParamLimits

0x3c1e,	// (0x000adce6) image2_vga_pane

0x3c6f,	// (0x000add37) main_camera2_pane_g1_ParamLimits

0x3c6f,	// (0x000add37) main_camera2_pane_g1

0x3c8f,	// (0x000add57) main_camera2_pane_g2_ParamLimits

0x3c8f,	// (0x000add57) main_camera2_pane_g2

0x3caf,	// (0x000add77) main_camera2_pane_g3_ParamLimits

0x3caf,	// (0x000add77) main_camera2_pane_g3

0x3ccf,	// (0x000add97) main_camera2_pane_g4_ParamLimits

0x3ccf,	// (0x000add97) main_camera2_pane_g4

0x3cef,	// (0x000addb7) main_camera2_pane_g5_ParamLimits

0x3cef,	// (0x000addb7) main_camera2_pane_g5

0x3d0f,	// (0x000addd7) main_camera2_pane_g6_ParamLimits

0x3d0f,	// (0x000addd7) main_camera2_pane_g6

0x3d2f,	// (0x000addf7) main_camera2_pane_g7_ParamLimits

0x3d2f,	// (0x000addf7) main_camera2_pane_g7

0x3d4f,	// (0x000ade17) main_camera2_pane_g8_ParamLimits

0x3d4f,	// (0x000ade17) main_camera2_pane_g8

0x0008,

0xf627,	// (0x000b96ef) main_camera2_pane_g_ParamLimits

0xf627,	// (0x000b96ef) main_camera2_pane_g

0x3d8f,	// (0x000ade57) main_camera2_pane_t1_ParamLimits

0x3d8f,	// (0x000ade57) main_camera2_pane_t1

0x3dc4,	// (0x000ade8c) main_camera2_pane_t2_ParamLimits

0x3dc4,	// (0x000ade8c) main_camera2_pane_t2

0x3dea,	// (0x000adeb2) main_camera2_pane_t3_ParamLimits

0x3dea,	// (0x000adeb2) main_camera2_pane_t3

0x3e48,	// (0x000adf10) main_camera2_pane_t4_ParamLimits

0x3e48,	// (0x000adf10) main_camera2_pane_t4

0x0006,

0xf63a,	// (0x000b9702) main_camera2_pane_t_ParamLimits

0xf63a,	// (0x000b9702) main_camera2_pane_t

0x3eda,	// (0x000adfa2) cams_zoom_pane_cp4_ParamLimits

0x3eda,	// (0x000adfa2) cams_zoom_pane_cp4

0x3ef0,	// (0x000adfb8) image2_cif_pane_ParamLimits

0x3ef0,	// (0x000adfb8) image2_cif_pane

0x3f1b,	// (0x000adfe3) image2_subqcif_pane_ParamLimits

0x3f1b,	// (0x000adfe3) image2_subqcif_pane

0x3f35,	// (0x000adffd) main_video2_pane_g1_ParamLimits

0x3f35,	// (0x000adffd) main_video2_pane_g1

0x3f4f,	// (0x000ae017) main_video2_pane_g2_ParamLimits

0x3f4f,	// (0x000ae017) main_video2_pane_g2

0x3f65,	// (0x000ae02d) main_video2_pane_g3_ParamLimits

0x3f65,	// (0x000ae02d) main_video2_pane_g3

0x3f7b,	// (0x000ae043) main_video2_pane_g4_ParamLimits

0x3f7b,	// (0x000ae043) main_video2_pane_g4

0x3f91,	// (0x000ae059) main_video2_pane_g5_ParamLimits

0x3f91,	// (0x000ae059) main_video2_pane_g5

0x3fa7,	// (0x000ae06f) main_video2_pane_g6_ParamLimits

0x3fa7,	// (0x000ae06f) main_video2_pane_g6

0x0005,

0xf649,	// (0x000b9711) main_video2_pane_g_ParamLimits

0xf649,	// (0x000b9711) main_video2_pane_g

0x3fc1,	// (0x000ae089) main_video2_pane_t1_ParamLimits

0x3fc1,	// (0x000ae089) main_video2_pane_t1

0x3fe5,	// (0x000ae0ad) main_video2_pane_t2_ParamLimits

0x3fe5,	// (0x000ae0ad) main_video2_pane_t2

0x4033,	// (0x000ae0fb) main_video2_pane_t3_ParamLimits

0x4033,	// (0x000ae0fb) main_video2_pane_t3

0x0002,

0xf656,	// (0x000b971e) main_video2_pane_t_ParamLimits

0xf656,	// (0x000b971e) main_video2_pane_t

0x34ae,	// (0x000ad576) call_muted_g2

0x0001,

0xf5f8,	// (0x000b96c0) call_muted_g

0x9f71,	// (0x000b4039) main_mup2_pane

0x407b,	// (0x000ae143) main_mup2_pane_g1_ParamLimits

0x407b,	// (0x000ae143) main_mup2_pane_g1

0x4087,	// (0x000ae14f) main_mup2_pane_g2_ParamLimits

0x4087,	// (0x000ae14f) main_mup2_pane_g2

0x99fc,	// (0x000b3ac4) main_mup_pane_g13_cp1

0x9a04,	// (0x000b3acc) mup_volume_pane_cp1

0x40a3,	// (0x000ae16b) main_mup2_pane_g4_ParamLimits

0x40a3,	// (0x000ae16b) main_mup2_pane_g4

0x40b5,	// (0x000ae17d) main_mup2_pane_g5_ParamLimits

0x40b5,	// (0x000ae17d) main_mup2_pane_g5

0x40c7,	// (0x000ae18f) main_mup2_pane_g6_ParamLimits

0x40c7,	// (0x000ae18f) main_mup2_pane_g6

0x40d9,	// (0x000ae1a1) main_mup2_pane_g7_ParamLimits

0x40d9,	// (0x000ae1a1) main_mup2_pane_g7

0x0006,

0xf65d,	// (0x000b9725) main_mup2_pane_g_ParamLimits

0xf65d,	// (0x000b9725) main_mup2_pane_g

0x40f1,	// (0x000ae1b9) main_mup2_pane_t1_ParamLimits

0x40f1,	// (0x000ae1b9) main_mup2_pane_t1

0x4107,	// (0x000ae1cf) main_mup2_pane_t2_ParamLimits

0x4107,	// (0x000ae1cf) main_mup2_pane_t2

0x411d,	// (0x000ae1e5) main_mup2_pane_t3_ParamLimits

0x411d,	// (0x000ae1e5) main_mup2_pane_t3

0x4133,	// (0x000ae1fb) main_mup2_pane_t4_ParamLimits

0x4133,	// (0x000ae1fb) main_mup2_pane_t4

0x414b,	// (0x000ae213) main_mup2_pane_t5_ParamLimits

0x414b,	// (0x000ae213) main_mup2_pane_t5

0x4163,	// (0x000ae22b) main_mup2_pane_t6_ParamLimits

0x4163,	// (0x000ae22b) main_mup2_pane_t6

0x0005,

0xf66c,	// (0x000b9734) main_mup2_pane_t_ParamLimits

0xf66c,	// (0x000b9734) main_mup2_pane_t

0x4193,	// (0x000ae25b) mup2_visualizer_pane_ParamLimits

0x4193,	// (0x000ae25b) mup2_visualizer_pane

0x41c1,	// (0x000ae289) mup_progress_pane_cp_ParamLimits

0x41c1,	// (0x000ae289) mup_progress_pane_cp

0x99e7,	// (0x000b3aaf) mup_volume_pane_cp_ParamLimits

0x99e7,	// (0x000b3aaf) mup_volume_pane_cp

0x41d5,	// (0x000ae29d) mup2_visualizer_pane_g1_ParamLimits

0x41d5,	// (0x000ae29d) mup2_visualizer_pane_g1

0xc8cc,	// (0x000b6994) mup2_visualizer_pane_g2_ParamLimits

0xc8cc,	// (0x000b6994) mup2_visualizer_pane_g2

0x41ec,	// (0x000ae2b4) mup2_visualizer_pane_g3_ParamLimits

0x41ec,	// (0x000ae2b4) mup2_visualizer_pane_g3

0x0002,

0xf679,	// (0x000b9741) mup2_visualizer_pane_g_ParamLimits

0xf679,	// (0x000b9741) mup2_visualizer_pane_g

0xb6ed,	// (0x000b57b5) aid_size_cell_fmradio

0x3660,	// (0x000ad728) aid_height_parent_landcape

0xaacb,	// (0x000b4b93) wml_content_pane_cp

0xaad3,	// (0x000b4b9b) wml_tabs_pane

0xaadc,	// (0x000b4ba4) popup_wml_miniature_window

0xaae4,	// (0x000b4bac) scroll_pane_cp021

0xaaf8,	// (0x000b4bc0) wml_content_pane_comp8

0x9f71,	// (0x000b4039) bg_popup_sub_pane_cp05

0xc8ea,	// (0x000b69b2) popup_wml_miniature_window_g1

0xc8f2,	// (0x000b69ba) wml_miniature_view_pane

0x41f8,	// (0x000ae2c0) aid_size_wml_view

0x4200,	// (0x000ae2c8) wml_miniature_view_pane_g1

0x4209,	// (0x000ae2d1) wml_miniature_view_pane_g2

0x4212,	// (0x000ae2da) wml_miniature_view_pane_g3

0x421a,	// (0x000ae2e2) wml_miniature_view_pane_g4

0x4222,	// (0x000ae2ea) wml_miniature_view_pane_g5

0x422a,	// (0x000ae2f2) wml_miniature_view_pane_g6

0x4232,	// (0x000ae2fa) wml_miniature_view_pane_g7

0x423a,	// (0x000ae302) wml_miniature_view_pane_g8

0x0007,

0xf680,	// (0x000b9748) wml_miniature_view_pane_g

0xc8fa,	// (0x000b69c2) background_graphic_ParamLimits

0xc8fa,	// (0x000b69c2) background_graphic

0xc906,	// (0x000b69ce) wml_tabs_2_pane

0xc90f,	// (0x000b69d7) wml_tabs_3_pane_ParamLimits

0xc90f,	// (0x000b69d7) wml_tabs_3_pane

0xc921,	// (0x000b69e9) wml_tabs_4_pane_ParamLimits

0xc921,	// (0x000b69e9) wml_tabs_4_pane

0xc937,	// (0x000b69ff) wml_tabs_5_pane_ParamLimits

0xc937,	// (0x000b69ff) wml_tabs_5_pane

0xc951,	// (0x000b6a19) wml_tabs_pane_g2_ParamLimits

0xc951,	// (0x000b6a19) wml_tabs_pane_g2

0xc965,	// (0x000b6a2d) wml_tabs_pane_g3_ParamLimits

0xc965,	// (0x000b6a2d) wml_tabs_pane_g3

0x4242,	// (0x000ae30a) wml_tabs_2_active_pane_ParamLimits

0x4242,	// (0x000ae30a) wml_tabs_2_active_pane

0x4256,	// (0x000ae31e) wml_tabs_2_passive_pane_ParamLimits

0x4256,	// (0x000ae31e) wml_tabs_2_passive_pane

0x426a,	// (0x000ae332) wml_tabs_3_active_pane_cp_ParamLimits

0x426a,	// (0x000ae332) wml_tabs_3_active_pane_cp

0x427f,	// (0x000ae347) wml_tabs_3_passive_pane_ParamLimits

0x427f,	// (0x000ae347) wml_tabs_3_passive_pane

0x4292,	// (0x000ae35a) wml_tabs_3_passive_pane_cp_ParamLimits

0x4292,	// (0x000ae35a) wml_tabs_3_passive_pane_cp

0x42a9,	// (0x000ae371) tabs_4_active_pane

0x42b1,	// (0x000ae379) tabs_4_passive_pane

0x42bb,	// (0x000ae383) tabs_4_passive_pane_cp

0x42c3,	// (0x000ae38b) tabs_4_passive_pane_cp2

0x337b,	// (0x000ad443) aid_height_text

0x29fe,	// (0x000acac6) mup_volume_cont_pane_ParamLimits

0x29fe,	// (0x000acac6) mup_volume_cont_pane

0x04ac,	// (0x000aa574) aid_size_cell_pinb

0x04b6,	// (0x000aa57e) aid_size_list_pinb

0x41ad,	// (0x000ae275) mup2_volume_cont_pane_ParamLimits

0x41ad,	// (0x000ae275) mup2_volume_cont_pane

0x99d3,	// (0x000b3a9b) mup2_volume_cont_pane_g1_ParamLimits

0x99d3,	// (0x000b3a9b) mup2_volume_cont_pane_g1

0x016e,	// (0x000aa236) aid_size_cell_touch_ParamLimits

0x016e,	// (0x000aa236) aid_size_cell_touch

0x039b,	// (0x000aa463) touch_pane_ParamLimits

0x039b,	// (0x000aa463) touch_pane

0x9432,	// (0x000b34fa) main_rss2_pane

0xc982,	// (0x000b6a4a) listscroll_rss2_pane

0xc98b,	// (0x000b6a53) rss2_navigation_pane

0xc993,	// (0x000b6a5b) list_rss2_pane

0xb174,	// (0x000b523c) scroll_pane_cp22

0xc99b,	// (0x000b6a63) rss2_navigation_pane_g1

0xc9a4,	// (0x000b6a6c) rss2_navigation_pane_g2

0xc9ac,	// (0x000b6a74) rss2_navigation_pane_g3

0x0002,

0xf691,	// (0x000b9759) rss2_navigation_pane_g

0xc9b4,	// (0x000b6a7c) rss2_navigation_pane_t1

0x42cd,	// (0x000ae395) rss2_list_single_pane_ParamLimits

0x42cd,	// (0x000ae395) rss2_list_single_pane

0xc9c2,	// (0x000b6a8a) rss2_list_single_pane_t2

0xc9d0,	// (0x000b6a98) rss2_list_single_pane_t3_ParamLimits

0xc9d0,	// (0x000b6a98) rss2_list_single_pane_t3

0xc9ed,	// (0x000b6ab5) rss2_list_single_pane_t4

0x236c,	// (0x000ac434) smil_status_pane_g1

0x9424,	// (0x000b34ec) main_image2_pane_ParamLimits

0x9424,	// (0x000b34ec) main_image2_pane

0x3d6f,	// (0x000ade37) main_camera2_pane_g9_ParamLimits

0x3d6f,	// (0x000ade37) main_camera2_pane_g9

0x3e9d,	// (0x000adf65) main_camera2_pane_t5_ParamLimits

0x3e9d,	// (0x000adf65) main_camera2_pane_t5

0x99a3,	// (0x000b3a6b) main_camera2_pane_t6_ParamLimits

0x99a3,	// (0x000b3a6b) main_camera2_pane_t6

0x42e4,	// (0x000ae3ac) main_image2_pane_g1_ParamLimits

0x42e4,	// (0x000ae3ac) main_image2_pane_g1

0x30b5,	// (0x000ad17d) smil2_video_pane_ParamLimits

0x30b5,	// (0x000ad17d) smil2_video_pane

0x93da,	// (0x000b34a2) aid_zoom_text_primary_cp

0x941a,	// (0x000b34e2) popup_preview_fixed_window

0xaa34,	// (0x000b4afc) im_reading_pane_g1

0x3be6,	// (0x000adcae) cams2_bc_adjust_pane_cp_ParamLimits

0x3be6,	// (0x000adcae) cams2_bc_adjust_pane_cp

0x3ecc,	// (0x000adf94) cams2_bc_adjust_pane_ParamLimits

0x3ecc,	// (0x000adf94) cams2_bc_adjust_pane

0xd5a0,	// (0x000b7668) cams2_bc_adjust_pane_g1

0x9a0c,	// (0x000b3ad4) cams2_slider_pane

0x9a15,	// (0x000b3add) cams2_slider_pane_g1

0x9a1e,	// (0x000b3ae6) cams2_slider_pane_g2

0x0006,

0xf698,	// (0x000b9760) cams2_slider_pane_g

0x058e,	// (0x000aa656) calc_display_pane_ParamLimits

0x05b6,	// (0x000aa67e) calc_paper_pane_ParamLimits

0x05d9,	// (0x000aa6a1) grid_calc_pane_ParamLimits

0x98c8,	// (0x000b3990) popup_clock_digital_window_t1_ParamLimits

0xb68a,	// (0x000b5752) main_image_pane_t1

0x0570,	// (0x000aa638) aid_size_cell_calc_ParamLimits

0x0570,	// (0x000aa638) aid_size_cell_calc

0x36b8,	// (0x000ad780) popup_blid_sat_info2_window_ParamLimits

0x36b8,	// (0x000ad780) popup_blid_sat_info2_window

0xca03,	// (0x000b6acb) aid_size_cell_blid

0xca0b,	// (0x000b6ad3) bg_popup_window_pane_cp07

0xca2e,	// (0x000b6af6) grid_popup_blid_pane

0xca38,	// (0x000b6b00) heading_pane_cp05_ParamLimits

0xca38,	// (0x000b6b00) heading_pane_cp05

0xcb02,	// (0x000b6bca) cell_popup_blid_pane_ParamLimits

0xcb02,	// (0x000b6bca) cell_popup_blid_pane

0xcb28,	// (0x000b6bf0) cell_popup_blid_pane_g1

0xcb30,	// (0x000b6bf8) cell_popup_blid_pane_t1

0x417d,	// (0x000ae245) mup2_indicator_pane_ParamLimits

0x417d,	// (0x000ae245) mup2_indicator_pane

0xb3b7,	// (0x000b547f) mup2_visualizer_osc_pane

0xc8d8,	// (0x000b69a0) mup2_visualizer_spec_pane_ParamLimits

0xc8d8,	// (0x000b69a0) mup2_visualizer_spec_pane

0x42fa,	// (0x000ae3c2) mup2_spec_half_pane

0x4303,	// (0x000ae3cb) mup2_spec_half_pane_cp

0x430b,	// (0x000ae3d3) mup2_spec_bar_pane_ParamLimits

0x430b,	// (0x000ae3d3) mup2_spec_bar_pane

0xc879,	// (0x000b6941) mup2_spec_bar_pane_g1

0xc883,	// (0x000b694b) mup2_spec_bar_pane_g2

0x0001,

0xf60b,	// (0x000b96d3) mup2_spec_bar_pane_g

0x432b,	// (0x000ae3f3) mup2_osc_middle_pane

0xc895,	// (0x000b695d) mup2_visualizer_osc_pane_g1

0x945c,	// (0x000b3524) popup_number_entry_window_t1_ParamLimits

0x946f,	// (0x000b3537) popup_number_entry_window_t2_ParamLimits

0x9481,	// (0x000b3549) popup_number_entry_window_t3_ParamLimits

0x03ed,	// (0x000aa4b5) popup_number_entry_window_t5_ParamLimits

0x03ed,	// (0x000aa4b5) popup_number_entry_window_t5

0xf0cd,	// (0x000b9195) popup_number_entry_window_t_ParamLimits

0x9493,	// (0x000b355b) text_title_cp2_ParamLimits

0x9907,	// (0x000b39cf) aid_hotspot_pointer_text2_pane

0x9921,	// (0x000b39e9) main_viewer_pane_g9_ParamLimits

0x9921,	// (0x000b39e9) main_viewer_pane_g9

0xac6d,	// (0x000b4d35) cale_month_pane_t1_ParamLimits

0xacaa,	// (0x000b4d72) bg_cale_pane_ParamLimits

0xacc2,	// (0x000b4d8a) list_cale_pane_ParamLimits

0xacd3,	// (0x000b4d9b) listscroll_cale_day_pane_t1

0xace5,	// (0x000b4dad) scroll_pane_cp09_ParamLimits

0x2a34,	// (0x000acafc) main_mup_eq_pane_t1_ParamLimits

0x2a34,	// (0x000acafc) main_mup_eq_pane_t1

0x2a4e,	// (0x000acb16) main_mup_eq_pane_t2_ParamLimits

0x2a4e,	// (0x000acb16) main_mup_eq_pane_t2

0x2a68,	// (0x000acb30) main_mup_eq_pane_t3_ParamLimits

0x2a68,	// (0x000acb30) main_mup_eq_pane_t3

0x2a84,	// (0x000acb4c) main_mup_eq_pane_t4_ParamLimits

0x2a84,	// (0x000acb4c) main_mup_eq_pane_t4

0x2aa0,	// (0x000acb68) main_mup_eq_pane_t5_ParamLimits

0x2aa0,	// (0x000acb68) main_mup_eq_pane_t5

0x2abc,	// (0x000acb84) main_mup_eq_pane_t6_ParamLimits

0x2abc,	// (0x000acb84) main_mup_eq_pane_t6

0x2ad0,	// (0x000acb98) main_mup_eq_pane_t7_ParamLimits

0x2ad0,	// (0x000acb98) main_mup_eq_pane_t7

0x2ae4,	// (0x000acbac) main_mup_eq_pane_t8_ParamLimits

0x2ae4,	// (0x000acbac) main_mup_eq_pane_t8

0x2af8,	// (0x000acbc0) main_mup_eq_pane_t9_ParamLimits

0x2af8,	// (0x000acbc0) main_mup_eq_pane_t9

0x2b12,	// (0x000acbda) main_mup_eq_pane_t10_ParamLimits

0x2b12,	// (0x000acbda) main_mup_eq_pane_t10

0x0009,

0xf45a,	// (0x000b9522) main_mup_eq_pane_t_ParamLimits

0xf45a,	// (0x000b9522) main_mup_eq_pane_t

0x2bc1,	// (0x000acc89) mup_equalizer_pane_cp5_ParamLimits

0x2bd5,	// (0x000acc9d) mup_equalizer_pane_cp6_ParamLimits

0x2be9,	// (0x000accb1) mup_equalizer_pane_cp7_ParamLimits

0x9432,	// (0x000b34fa) main_gallery_pane

0xc89e,	// (0x000b6966) smil2_volume_pane

0xc8a6,	// (0x000b696e) smil_status_volume_pane_g1_ParamLimits

0xc8b9,	// (0x000b6981) smil_status_volume_pane_g2_ParamLimits

0x9981,	// (0x000b3a49) smil_status_volume_pane_g3_ParamLimits

0xf610,	// (0x000b96d8) smil_status_volume_pane_g_ParamLimits

0xca0b,	// (0x000b6ad3) bg_popup_window_pane_cp07_ParamLimits

0xca19,	// (0x000b6ae1) blid_firmament_pane

0x4334,	// (0x000ae3fc) aid_size_cell_gallery_ParamLimits

0x4334,	// (0x000ae3fc) aid_size_cell_gallery

0x434a,	// (0x000ae412) grid_gallery_pane_ParamLimits

0x434a,	// (0x000ae412) grid_gallery_pane

0x4363,	// (0x000ae42b) cell_gallery_pane_ParamLimits

0x4363,	// (0x000ae42b) cell_gallery_pane

0xcb3e,	// (0x000b6c06) bg_cell_gallery_focus_pane_ParamLimits

0xcb3e,	// (0x000b6c06) bg_cell_gallery_focus_pane

0xcb50,	// (0x000b6c18) cell_gallery_pane_g1_ParamLimits

0xcb50,	// (0x000b6c18) cell_gallery_pane_g1

0x43ac,	// (0x000ae474) cell_gallery_pane_g2_ParamLimits

0x43ac,	// (0x000ae474) cell_gallery_pane_g2

0x43b9,	// (0x000ae481) cell_gallery_pane_g3_ParamLimits

0x43b9,	// (0x000ae481) cell_gallery_pane_g3

0xcb5c,	// (0x000b6c24) cell_gallery_pane_g4_ParamLimits

0xcb5c,	// (0x000b6c24) cell_gallery_pane_g4

0x0003,

0xf6be,	// (0x000b9786) cell_gallery_pane_g_ParamLimits

0xf6be,	// (0x000b9786) cell_gallery_pane_g

0xcb68,	// (0x000b6c30) bg_cell_gallery_focus_pane_g1

0xcb70,	// (0x000b6c38) bg_cell_gallery_focus_pane_g2

0xcb78,	// (0x000b6c40) bg_cell_gallery_focus_pane_g3

0xcb80,	// (0x000b6c48) bg_cell_gallery_focus_pane_g4

0xcb88,	// (0x000b6c50) bg_cell_gallery_focus_pane_g5

0xcb90,	// (0x000b6c58) bg_cell_gallery_focus_pane_g6

0xcb98,	// (0x000b6c60) bg_cell_gallery_focus_pane_g7

0xcba0,	// (0x000b6c68) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6c7,	// (0x000b978f) bg_cell_gallery_focus_pane_g

0xcba8,	// (0x000b6c70) aid_firma_cardinal

0xcbbc,	// (0x000b6c84) blid_firmament_pane_t1

0xcbd3,	// (0x000b6c9b) blid_firmament_pane_t2

0xcbea,	// (0x000b6cb2) blid_firmament_pane_t3

0xcc01,	// (0x000b6cc9) blid_firmament_pane_t4

0x0003,

0xf6d8,	// (0x000b97a0) blid_firmament_pane_t

0xcc18,	// (0x000b6ce0) blid_sat_info_pane

0xcc28,	// (0x000b6cf0) blid_sat_info_pane_g1

0xcc28,	// (0x000b6cf0) blid_sat_info_pane_g2

0x0001,

0xf6e1,	// (0x000b97a9) blid_sat_info_pane_g

0xcc32,	// (0x000b6cfa) blid_sat_info_pane_t1

0xcc40,	// (0x000b6d08) smil2_volume_content_pane

0xcc49,	// (0x000b6d11) smil2_volume_pane_g1

0xa33a,	// (0x000b4402) smil2_volume_content_pane_g1

0xcc51,	// (0x000b6d19) smil2_volume_content_pane_g2

0xcc5a,	// (0x000b6d22) smil2_volume_content_pane_g3

0xcc63,	// (0x000b6d2b) smil2_volume_content_pane_g4

0xcc6c,	// (0x000b6d34) smil2_volume_content_pane_g5

0xcc75,	// (0x000b6d3d) smil2_volume_content_pane_g6

0xcc7e,	// (0x000b6d46) smil2_volume_content_pane_g7

0xcc87,	// (0x000b6d4f) smil2_volume_content_pane_g8

0xcc90,	// (0x000b6d58) smil2_volume_content_pane_g9

0xcc99,	// (0x000b6d61) smil2_volume_content_pane_g10

0x0009,

0xf6e6,	// (0x000b97ae) smil2_volume_content_pane_g

0x0b46,	// (0x000aac0e) cale_week_day_heading_pane_t1_ParamLimits

0x0b90,	// (0x000aac58) cale_week_day_heading_pane_t2_ParamLimits

0x0bdf,	// (0x000aaca7) cale_week_day_heading_pane_t3_ParamLimits

0x0c2e,	// (0x000aacf6) cale_week_day_heading_pane_t4_ParamLimits

0x0c7d,	// (0x000aad45) cale_week_day_heading_pane_t5_ParamLimits

0x0cd4,	// (0x000aad9c) cale_week_day_heading_pane_t6_ParamLimits

0x0d2b,	// (0x000aadf3) cale_week_day_heading_pane_t7_ParamLimits

0xf1d2,	// (0x000b929a) cale_week_day_heading_pane_t_ParamLimits

0xa43b,	// (0x000b4503) bg_cale_side_pane_ParamLimits

0x0d75,	// (0x000aae3d) cale_week_time_pane_t1_ParamLimits

0x0d8f,	// (0x000aae57) cale_week_time_pane_t2_ParamLimits

0x0da9,	// (0x000aae71) cale_week_time_pane_t3_ParamLimits

0x0dc3,	// (0x000aae8b) cale_week_time_pane_t4_ParamLimits

0x0ddd,	// (0x000aaea5) cale_week_time_pane_t5_ParamLimits

0x0df7,	// (0x000aaebf) cale_week_time_pane_t6_ParamLimits

0x0e11,	// (0x000aaed9) cale_week_time_pane_t7_ParamLimits

0x0e31,	// (0x000aaef9) cale_week_time_pane_t8_ParamLimits

0xf1e1,	// (0x000b92a9) cale_week_time_pane_t_ParamLimits

0x0e51,	// (0x000aaf19) cell_cale_week_pane_g2_ParamLimits

0xa43b,	// (0x000b4503) bg_cale_side_pane_cp01_ParamLimits

0x2153,	// (0x000ac21b) cale_month_week_pane_t1_ParamLimits

0x216c,	// (0x000ac234) cale_month_week_pane_t2_ParamLimits

0x2185,	// (0x000ac24d) cale_month_week_pane_t3_ParamLimits

0x219e,	// (0x000ac266) cale_month_week_pane_t4_ParamLimits

0x21b7,	// (0x000ac27f) cale_month_week_pane_t5_ParamLimits

0x21d0,	// (0x000ac298) cale_month_week_pane_t6_ParamLimits

0xf2ba,	// (0x000b9382) cale_month_week_pane_t_ParamLimits

0x9844,	// (0x000b390c) cell_cale_month_pane_g1_ParamLimits

0x9432,	// (0x000b34fa) main_cale_event_viewer_pane

0x93ac,	// (0x000b3474) listscroll_cale_event_viewer_pane

0xcca2,	// (0x000b6d6a) list_cale_ev_pane

0xccaa,	// (0x000b6d72) scroll_pane_cp023

0xccb6,	// (0x000b6d7e) field_cale_ev_pane_ParamLimits

0xccb6,	// (0x000b6d7e) field_cale_ev_pane

0xccd2,	// (0x000b6d9a) field_cale_ev_content_pane_ParamLimits

0xccd2,	// (0x000b6d9a) field_cale_ev_content_pane

0xccde,	// (0x000b6da6) field_cale_ev_pane_g1_ParamLimits

0xccde,	// (0x000b6da6) field_cale_ev_pane_g1

0xccea,	// (0x000b6db2) field_cale_ev_pane_g2_ParamLimits

0xccea,	// (0x000b6db2) field_cale_ev_pane_g2

0xcd02,	// (0x000b6dca) field_cale_ev_pane_g3_ParamLimits

0xcd02,	// (0x000b6dca) field_cale_ev_pane_g3

0x0002,

0xf6fb,	// (0x000b97c3) field_cale_ev_pane_g_ParamLimits

0xf6fb,	// (0x000b97c3) field_cale_ev_pane_g

0xcd1a,	// (0x000b6de2) field_cale_ev_pane_t1_ParamLimits

0xcd1a,	// (0x000b6de2) field_cale_ev_pane_t1

0xcd31,	// (0x000b6df9) field_cale_ev_content_pane_t1_ParamLimits

0xcd31,	// (0x000b6df9) field_cale_ev_content_pane_t1

0x2c9f,	// (0x000acd67) bg_button_pane_cp01

0x0889,	// (0x000aa951) listscroll_cale_week_pane_ParamLimits

0xa3e5,	// (0x000b44ad) popup_toolbar_window_cp01

0xa40c,	// (0x000b44d4) listscroll_cale_week_pane_t1_ParamLimits

0x0889,	// (0x000aa951) listscroll_cale_day_pane_ParamLimits

0xa3e5,	// (0x000b44ad) popup_toolbar_window_cp02

0xacd3,	// (0x000b4d9b) listscroll_cale_day_pane_t1_ParamLimits

0x367e,	// (0x000ad746) main_cale_month_pane_ParamLimits

0x996c,	// (0x000b3a34) popup_toolbar_window_cp03_ParamLimits

0x996c,	// (0x000b3a34) popup_toolbar_window_cp03

0x2f79,	// (0x000ad041) main_image_pane_g2_ParamLimits

0x2f79,	// (0x000ad041) main_image_pane_g2

0x2f8a,	// (0x000ad052) main_image_pane_g3_ParamLimits

0x2f8a,	// (0x000ad052) main_image_pane_g3

0x0002,

0xf4ec,	// (0x000b95b4) main_image_pane_g_ParamLimits

0xf4ec,	// (0x000b95b4) main_image_pane_g

0xb68a,	// (0x000b5752) main_image_pane_t1_ParamLimits

0x2f9b,	// (0x000ad063) main_image_pane_t2_ParamLimits

0x2f9b,	// (0x000ad063) main_image_pane_t2

0x2fad,	// (0x000ad075) main_image_pane_t3_ParamLimits

0x2fad,	// (0x000ad075) main_image_pane_t3

0x2fd5,	// (0x000ad09d) main_image_pane_t4_ParamLimits

0x2fd5,	// (0x000ad09d) main_image_pane_t4

0x0003,

0xf4f3,	// (0x000b95bb) main_image_pane_t_ParamLimits

0xf4f3,	// (0x000b95bb) main_image_pane_t

0x2ff5,	// (0x000ad0bd) popup_image_details_window_cp01

0x2fff,	// (0x000ad0c7) popup_toobar_trans_pane_cp01_ParamLimits

0x2fff,	// (0x000ad0c7) popup_toobar_trans_pane_cp01

0x378f,	// (0x000ad857) popup_image_details_window_ParamLimits

0x378f,	// (0x000ad857) popup_image_details_window

0x993f,	// (0x000b3a07) popup_image_focus_window

0x3ba0,	// (0x000adc68) camera2_autofocus_pane_ParamLimits

0x3ba0,	// (0x000adc68) camera2_autofocus_pane

0x93ac,	// (0x000b3474) bg_popup_sub_pane_cp06

0xcd4e,	// (0x000b6e16) popup_image_focus_window_g1

0xcd56,	// (0x000b6e1e) popup_image_focus_window_g2

0xcd5e,	// (0x000b6e26) popup_image_focus_window_g3

0xcd66,	// (0x000b6e2e) popup_image_focus_window_g4

0x0003,

0xf702,	// (0x000b97ca) popup_image_focus_window_g

0xcd6e,	// (0x000b6e36) popup_image_focus_window_t1

0xcd7c,	// (0x000b6e44) popup_image_focus_window_t2

0xcd8c,	// (0x000b6e54) popup_image_focus_window_t3

0x0002,

0xf70b,	// (0x000b97d3) popup_image_focus_window_t

0xcd9a,	// (0x000b6e62) camera2_autofocus_pane_g1

0xa4f7,	// (0x000b45bf) bg_tb_trans_pane_cp01

0xcda8,	// (0x000b6e70) popup_image_details_window_g1

0xcdbb,	// (0x000b6e83) popup_image_details_window_g2

0x0002,

0xf71d,	// (0x000b97e5) popup_image_details_window_g

0xcde4,	// (0x000b6eac) popup_image_details_window_t1

0xcdf6,	// (0x000b6ebe) popup_image_details_window_t2

0xce0f,	// (0x000b6ed7) popup_image_details_window_t3

0xce23,	// (0x000b6eeb) popup_image_details_window_t4

0xce3e,	// (0x000b6f06) popup_image_details_window_t5

0x0004,

0xf724,	// (0x000b97ec) popup_image_details_window_t

0xa29c,	// (0x000b4364) bg_calc_paper_pane_ParamLimits

0x9432,	// (0x000b34fa) grid_highlight_pane_cp013

0x979c,	// (0x000b3864) list_calc_pane_ParamLimits

0x97ae,	// (0x000b3876) scroll_pane_cp024

0xa2b0,	// (0x000b4378) bg_calc_display_pane_ParamLimits

0x06d7,	// (0x000aa79f) calc_display_pane_t1_ParamLimits

0x06e9,	// (0x000aa7b1) calc_display_pane_t2_ParamLimits

0x97b6,	// (0x000b387e) calc_display_pane_t3_ParamLimits

0xf154,	// (0x000b921c) calc_display_pane_t_ParamLimits

0x07ae,	// (0x000aa876) cell_calc_pane_g2

0x0001,

0xf171,	// (0x000b9239) cell_calc_pane_g

0x07b7,	// (0x000aa87f) cell_calc_pane_t1

0xa30f,	// (0x000b43d7) grid_highlight_pane_cp02_ParamLimits

0xa325,	// (0x000b43ed) toolbar_button_pane_cp01_ParamLimits

0xa325,	// (0x000b43ed) toolbar_button_pane_cp01

0xb6cf,	// (0x000b5797) temp_image_control_pane_ParamLimits

0xb6cf,	// (0x000b5797) temp_image_control_pane

0x9424,	// (0x000b34ec) main_mp3_pane

0xce58,	// (0x000b6f20) temp_image_control_pane_g1_ParamLimits

0xce58,	// (0x000b6f20) temp_image_control_pane_g1

0xce66,	// (0x000b6f2e) temp_image_control_pane_g2_ParamLimits

0xce66,	// (0x000b6f2e) temp_image_control_pane_g2

0xce78,	// (0x000b6f40) temp_image_control_pane_g3_ParamLimits

0xce78,	// (0x000b6f40) temp_image_control_pane_g3

0x43f6,	// (0x000ae4be) temp_image_control_pane_g4_ParamLimits

0x43f6,	// (0x000ae4be) temp_image_control_pane_g4

0x0003,

0xf72f,	// (0x000b97f7) temp_image_control_pane_g_ParamLimits

0xf72f,	// (0x000b97f7) temp_image_control_pane_g

0xce58,	// (0x000b6f20) main_mp3_pane_g1

0x4409,	// (0x000ae4d1) main_mp3_pane_g2

0x0007,

0xf738,	// (0x000b9800) main_mp3_pane_g

0xcebb,	// (0x000b6f83) main_mp3_pane_t1

0xa48d,	// (0x000b4555) main_camera_pane_g8_ParamLimits

0xa48d,	// (0x000b4555) main_camera_pane_g8

0x1174,	// (0x000ab23c) main_video_pane_g7_ParamLimits

0x1174,	// (0x000ab23c) main_video_pane_g7

0x99c1,	// (0x000b3a89) main_camera2_pane_t7_ParamLimits

0x99c1,	// (0x000b3a89) main_camera2_pane_t7

0xaa8b,	// (0x000b4b53) scroll_pane_cp025_ParamLimits

0xaa8b,	// (0x000b4b53) scroll_pane_cp025

0xaa9f,	// (0x000b4b67) scroll_pane_cp026_ParamLimits

0xaa9f,	// (0x000b4b67) scroll_pane_cp026

0xaaae,	// (0x000b4b76) wml_content_pane_ParamLimits

0x9432,	// (0x000b34fa) main_touch_calib_pane

0x44df,	// (0x000ae5a7) main_touch_calib_pane_g1

0x44f1,	// (0x000ae5b9) main_touch_calib_pane_g2

0x4503,	// (0x000ae5cb) main_touch_calib_pane_g3

0x4515,	// (0x000ae5dd) main_touch_calib_pane_g4

0x0003,

0xf756,	// (0x000b981e) main_touch_calib_pane_g

0x4527,	// (0x000ae5ef) main_touch_calib_pane_t1

0x4541,	// (0x000ae609) main_touch_calib_pane_t2

0x0004,

0xf75f,	// (0x000b9827) main_touch_calib_pane_t

0xb252,	// (0x000b531a) mup_progress_pane_cp02

0xb287,	// (0x000b534f) navi_pane_g1

0xb342,	// (0x000b540a) navi_pane_mp_t3

0x9424,	// (0x000b34ec) main_mp3_pane_ParamLimits

0x390c,	// (0x000ad9d4) navi_pane_ParamLimits

0xce58,	// (0x000b6f20) main_mp3_pane_g1_ParamLimits

0x4409,	// (0x000ae4d1) main_mp3_pane_g2_ParamLimits

0x4417,	// (0x000ae4df) main_mp3_pane_g3_ParamLimits

0x4417,	// (0x000ae4df) main_mp3_pane_g3

0x4425,	// (0x000ae4ed) main_mp3_pane_g4_ParamLimits

0x4425,	// (0x000ae4ed) main_mp3_pane_g4

0xce88,	// (0x000b6f50) main_mp3_pane_g5_ParamLimits

0xce88,	// (0x000b6f50) main_mp3_pane_g5

0xce96,	// (0x000b6f5e) main_mp3_pane_g6_ParamLimits

0xce96,	// (0x000b6f5e) main_mp3_pane_g6

0xcea3,	// (0x000b6f6b) main_mp3_pane_g7_ParamLimits

0xcea3,	// (0x000b6f6b) main_mp3_pane_g7

0xceaf,	// (0x000b6f77) main_mp3_pane_g8_ParamLimits

0xceaf,	// (0x000b6f77) main_mp3_pane_g8

0xf738,	// (0x000b9800) main_mp3_pane_g_ParamLimits

0x4433,	// (0x000ae4fb) main_mp3_pane_t2

0x4441,	// (0x000ae509) main_mp3_pane_t3

0xcec9,	// (0x000b6f91) main_mp3_pane_t4

0xced7,	// (0x000b6f9f) main_mp3_pane_t5

0x0005,

0xf749,	// (0x000b9811) main_mp3_pane_t

0xcee5,	// (0x000b6fad) mup_progress_pane_cp01

0x93da,	// (0x000b34a2) aid_zoom_text_secondary2

0xcca2,	// (0x000b6d6a) list_cale_ev2_pane

0xccaa,	// (0x000b6d72) scroll_pane_cp023_ParamLimits

0x4597,	// (0x000ae65f) field_cale_ev2_pane_ParamLimits

0x4597,	// (0x000ae65f) field_cale_ev2_pane

0xa505,	// (0x000b45cd) field_cale_ev2_pane_g1_ParamLimits

0xa505,	// (0x000b45cd) field_cale_ev2_pane_g1

0xa511,	// (0x000b45d9) field_cale_ev2_pane_g2_ParamLimits

0xa511,	// (0x000b45d9) field_cale_ev2_pane_g2

0xa529,	// (0x000b45f1) field_cale_ev2_pane_g3_ParamLimits

0xa529,	// (0x000b45f1) field_cale_ev2_pane_g3

0x0003,

0xf76a,	// (0x000b9832) field_cale_ev2_pane_g_ParamLimits

0xf76a,	// (0x000b9832) field_cale_ev2_pane_g

0xa54d,	// (0x000b4615) field_cale_ev2_pane_t1_ParamLimits

0xa54d,	// (0x000b4615) field_cale_ev2_pane_t1

0xa564,	// (0x000b462c) field_cale_ev2_pane_t2_ParamLimits

0xa564,	// (0x000b462c) field_cale_ev2_pane_t2

0x0001,

0xf773,	// (0x000b983b) field_cale_ev2_pane_t_ParamLimits

0xf773,	// (0x000b983b) field_cale_ev2_pane_t

0x2e2c,	// (0x000acef4) main_postcard_pane_g5_ParamLimits

0x2e2c,	// (0x000acef4) main_postcard_pane_g5

0x2e42,	// (0x000acf0a) main_postcard_pane_g6_ParamLimits

0x2e42,	// (0x000acf0a) main_postcard_pane_g6

0x0f2e,	// (0x000aaff6) camera2_autofocus_pane_cp_ParamLimits

0x0f2e,	// (0x000aaff6) camera2_autofocus_pane_cp

0x9424,	// (0x000b34ec) main_mup3_pane

0x45d9,	// (0x000ae6a1) main_mup3_pane_g1_ParamLimits

0x45d9,	// (0x000ae6a1) main_mup3_pane_g1

0x45fb,	// (0x000ae6c3) main_mup3_pane_g2_ParamLimits

0x45fb,	// (0x000ae6c3) main_mup3_pane_g2

0x467d,	// (0x000ae745) main_mup3_pane_g3_ParamLimits

0x467d,	// (0x000ae745) main_mup3_pane_g3

0x46c3,	// (0x000ae78b) main_mup3_pane_g4_ParamLimits

0x46c3,	// (0x000ae78b) main_mup3_pane_g4

0x4709,	// (0x000ae7d1) main_mup3_pane_g5_ParamLimits

0x4709,	// (0x000ae7d1) main_mup3_pane_g5

0x4751,	// (0x000ae819) main_mup3_pane_g6_ParamLimits

0x4751,	// (0x000ae819) main_mup3_pane_g6

0xceed,	// (0x000b6fb5) main_mup3_pane_g7_ParamLimits

0xceed,	// (0x000b6fb5) main_mup3_pane_g7

0x0007,

0xf783,	// (0x000b984b) main_mup3_pane_g_ParamLimits

0xf783,	// (0x000b984b) main_mup3_pane_g

0x47cf,	// (0x000ae897) main_mup3_pane_t1_ParamLimits

0x47cf,	// (0x000ae897) main_mup3_pane_t1

0x4843,	// (0x000ae90b) main_mup3_pane_t2_ParamLimits

0x4843,	// (0x000ae90b) main_mup3_pane_t2

0x4917,	// (0x000ae9df) main_mup3_pane_t4_ParamLimits

0x4917,	// (0x000ae9df) main_mup3_pane_t4

0x496d,	// (0x000aea35) main_mup3_pane_t5_ParamLimits

0x496d,	// (0x000aea35) main_mup3_pane_t5

0x4a29,	// (0x000aeaf1) main_mup3_pane_t6_ParamLimits

0x4a29,	// (0x000aeaf1) main_mup3_pane_t6

0x0005,

0xf794,	// (0x000b985c) main_mup3_pane_t_ParamLimits

0xf794,	// (0x000b985c) main_mup3_pane_t

0x4ae1,	// (0x000aeba9) mup3_progress_pane_ParamLimits

0x4ae1,	// (0x000aeba9) mup3_progress_pane

0x4b6d,	// (0x000aec35) popup_mup3_control_window_ParamLimits

0x4b6d,	// (0x000aec35) popup_mup3_control_window

0xcefb,	// (0x000b6fc3) popup_mup3_text_window

0x4b9f,	// (0x000aec67) mup3_progress_pane_t1

0x4bbe,	// (0x000aec86) mup3_progress_pane_t2

0xcf03,	// (0x000b6fcb) mup3_progress_pane_t3

0x0002,

0xf7a1,	// (0x000b9869) mup3_progress_pane_t

0xcf20,	// (0x000b6fe8) mup_progress_pane_cp03

0x93ac,	// (0x000b3474) bg_tb_trans_pane_cp04

0x4bdd,	// (0x000aeca5) mup3_volume_pane

0x4be5,	// (0x000aecad) popup_mup3_control_window_g1

0x4bee,	// (0x000aecb6) mup3_volume_pane_g1

0x4bf7,	// (0x000aecbf) mup3_volume_pane_g2

0x4c00,	// (0x000aecc8) mup3_volume_pane_g3

0x0002,

0xf7a8,	// (0x000b9870) mup3_volume_pane_g

0x93ac,	// (0x000b3474) bg_tb_trans_pane_cp03

0xcf30,	// (0x000b6ff8) popup_mup3_text_window_g1

0xcf38,	// (0x000b7000) popup_mup3_text_window_t1

0xa2f8,	// (0x000b43c0) list_calc_item_pane_g1_ParamLimits

0xc979,	// (0x000b6a41) mup_volume_pane_cp_g1

0x455b,	// (0x000ae623) main_touch_calib_pane_t3

0x456f,	// (0x000ae637) main_touch_calib_pane_t4

0x4583,	// (0x000ae64b) main_touch_calib_pane_t5

0x93b6,	// (0x000b347e) aid_cell_size_toolbar2

0x93be,	// (0x000b3486) aid_popup3_width_pane

0x93ca,	// (0x000b3492) aid_zoom_text_msg_primary

0x0f05,	// (0x000aafcd) vorec_t7

0xa2bc,	// (0x000b4384) bg_calc_paper_pane_g1_ParamLimits

0xa2c8,	// (0x000b4390) bg_calc_paper_pane_g2_ParamLimits

0xa2d4,	// (0x000b439c) bg_calc_paper_pane_g3_ParamLimits

0xa2e0,	// (0x000b43a8) bg_calc_paper_pane_g4_ParamLimits

0xa2ec,	// (0x000b43b4) bg_calc_paper_pane_g5_ParamLimits

0x0732,	// (0x000aa7fa) bg_calc_paper_pane_g6_ParamLimits

0x0743,	// (0x000aa80b) bg_calc_paper_pane_g7_ParamLimits

0x0754,	// (0x000aa81c) bg_calc_paper_pane_g8_ParamLimits

0xf15b,	// (0x000b9223) bg_calc_paper_pane_g_ParamLimits

0x0767,	// (0x000aa82f) calc_bg_paper_pane_g9_ParamLimits

0x1086,	// (0x000ab14e) image_qvga_pane_ParamLimits

0x1086,	// (0x000ab14e) image_qvga_pane

0xa1cc,	// (0x000b4294) bg_popup_sub_pane_cp04_ParamLimits

0xb606,	// (0x000b56ce) popup_mup_playback_window_g1_ParamLimits

0xb612,	// (0x000b56da) popup_mup_playback_window_t1_ParamLimits

0xb627,	// (0x000b56ef) popup_mup_playback_window_t2_ParamLimits

0xf4e7,	// (0x000b95af) popup_mup_playback_window_t_ParamLimits

0x4097,	// (0x000ae15f) main_mup2_pane_g3_ParamLimits

0x4097,	// (0x000ae15f) main_mup2_pane_g3

0x1498,	// (0x000ab560) popup_toolbar_window_cp04

0xba1c,	// (0x000b5ae4) popup_call2_audio_second_window_g3_ParamLimits

0xba1c,	// (0x000b5ae4) popup_call2_audio_second_window_g3

0xbe26,	// (0x000b5eee) popup_call2_audio_first_window_g4_ParamLimits

0xbe26,	// (0x000b5eee) popup_call2_audio_first_window_g4

0xc4b1,	// (0x000b6579) popup_call2_audio_in_window_g4_ParamLimits

0xc4b1,	// (0x000b6579) popup_call2_audio_in_window_g4

0x2f5b,	// (0x000ad023) aid_area_sk_bg_cut_ParamLimits

0x2f5b,	// (0x000ad023) aid_area_sk_bg_cut

0xb63c,	// (0x000b5704) aid_area_sk_bg_cut_2_ParamLimits

0xb63c,	// (0x000b5704) aid_area_sk_bg_cut_2

0x439c,	// (0x000ae464) aid_placing_details_win

0x43a4,	// (0x000ae46c) aid_placing_details_win_2

0xcd9a,	// (0x000b6e62) camera2_autofocus_pane_g1_ParamLimits

0x0334,	// (0x000aa3fc) popup_fixed_preview_cale_window_ParamLimits

0x0334,	// (0x000aa3fc) popup_fixed_preview_cale_window

0xb3c8,	// (0x000b5490) navi_slider_pane_g3

0xb3d1,	// (0x000b5499) navi_slider_pane_g4

0xb3da,	// (0x000b54a2) navi_slider_pane_g5

0xb3c8,	// (0x000b5490) navi_slider_pane_g6

0x98ee,	// (0x000b39b6) navi_slider_pane_g7

0xb546,	// (0x000b560e) mup_scale_pane_g3

0xb54f,	// (0x000b5617) mup_scale_pane_g4

0xb558,	// (0x000b5620) mup_scale_pane_g5

0x2bfd,	// (0x000accc5) mup_scale_pane_g6

0x2c06,	// (0x000accce) mup_scale_pane_g7

0xb3c8,	// (0x000b5490) cams2_slider_pane_g3

0xc9fb,	// (0x000b6ac3) cams2_slider_pane_g4

0x9a27,	// (0x000b3aef) cams2_slider_pane_g5

0xb3c8,	// (0x000b5490) cams2_slider_pane_g6

0x9a2f,	// (0x000b3af7) cams2_slider_pane_g7

0xcc28,	// (0x000b6cf0) camera2_autofocus_pane_cp_g1

0xc812,	// (0x000b68da) bg_popup_preview_window_pane_cp02_ParamLimits

0xc812,	// (0x000b68da) bg_popup_preview_window_pane_cp02

0xcf46,	// (0x000b700e) list_fp_cale_pane_ParamLimits

0xcf46,	// (0x000b700e) list_fp_cale_pane

0xcf52,	// (0x000b701a) popup_fixed_preview_cale_window_t1_ParamLimits

0xcf52,	// (0x000b701a) popup_fixed_preview_cale_window_t1

0x4c09,	// (0x000aecd1) popup_fixed_preview_cale_window_t2_ParamLimits

0x4c09,	// (0x000aecd1) popup_fixed_preview_cale_window_t2

0x4c1e,	// (0x000aece6) popup_fixed_preview_cale_window_t3_ParamLimits

0x4c1e,	// (0x000aece6) popup_fixed_preview_cale_window_t3

0x0002,

0xf7af,	// (0x000b9877) popup_fixed_preview_cale_window_t_ParamLimits

0xf7af,	// (0x000b9877) popup_fixed_preview_cale_window_t

0x4c33,	// (0x000aecfb) list_single_fp_cale_pane_ParamLimits

0x4c33,	// (0x000aecfb) list_single_fp_cale_pane

0xcf70,	// (0x000b7038) list_single_fp_cale_pane_g1_ParamLimits

0xcf70,	// (0x000b7038) list_single_fp_cale_pane_g1

0xcf7c,	// (0x000b7044) list_single_fp_cale_pane_g2_ParamLimits

0xcf7c,	// (0x000b7044) list_single_fp_cale_pane_g2

0x0002,

0xf7b6,	// (0x000b987e) list_single_fp_cale_pane_g_ParamLimits

0xf7b6,	// (0x000b987e) list_single_fp_cale_pane_g

0xcf95,	// (0x000b705d) list_single_fp_cale_pane_t1_ParamLimits

0xcf95,	// (0x000b705d) list_single_fp_cale_pane_t1

0xcfa7,	// (0x000b706f) list_single_fp_cale_pane_t2_ParamLimits

0xcfa7,	// (0x000b706f) list_single_fp_cale_pane_t2

0x0001,

0xf7bd,	// (0x000b9885) list_single_fp_cale_pane_t_ParamLimits

0xf7bd,	// (0x000b9885) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x9432,	// (0x000b34fa) main_dialer_pane

0x4c4a,	// (0x000aed12) aid_cell_size_keypad

0x4c54,	// (0x000aed1c) dialer_ne_pane

0x4c5c,	// (0x000aed24) grid_dialer_command_1_pane

0x4c64,	// (0x000aed2c) grid_dialer_command_2_pane

0x4c6c,	// (0x000aed34) grid_dialer_keypad_pane

0x4c7e,	// (0x000aed46) bg_popup_call_pane_cp06_ParamLimits

0x4c7e,	// (0x000aed46) bg_popup_call_pane_cp06

0x4c8a,	// (0x000aed52) dialer_ne_clear_pane_ParamLimits

0x4c8a,	// (0x000aed52) dialer_ne_clear_pane

0xcfda,	// (0x000b70a2) dialer_ne_pane_g1

0xcfe2,	// (0x000b70aa) dialer_ne_pane_t1_ParamLimits

0xcfe2,	// (0x000b70aa) dialer_ne_pane_t1

0x4c96,	// (0x000aed5e) dialer_ne_pane_t2_ParamLimits

0x4c96,	// (0x000aed5e) dialer_ne_pane_t2

0x4cc0,	// (0x000aed88) dialer_ne_pane_t3_ParamLimits

0x4cc0,	// (0x000aed88) dialer_ne_pane_t3

0x0002,

0xf7c2,	// (0x000b988a) dialer_ne_pane_t_ParamLimits

0xf7c2,	// (0x000b988a) dialer_ne_pane_t

0x4cf0,	// (0x000aedb8) dialer_ne_pane_t3_copy1_ParamLimits

0x4cf0,	// (0x000aedb8) dialer_ne_pane_t3_copy1

0x4d1f,	// (0x000aede7) cell_dialer_keypad_pane_ParamLimits

0x4d1f,	// (0x000aede7) cell_dialer_keypad_pane

0x4d36,	// (0x000aedfe) cell_dialer_command_1_pane_ParamLimits

0x4d36,	// (0x000aedfe) cell_dialer_command_1_pane

0x4d4c,	// (0x000aee14) cell_dialer_command_2_pane_ParamLimits

0x4d4c,	// (0x000aee14) cell_dialer_command_2_pane

0xcff4,	// (0x000b70bc) bg_button_pane_cp02_ParamLimits

0xcff4,	// (0x000b70bc) bg_button_pane_cp02

0x4d5b,	// (0x000aee23) cell_dialer_keypad_pane_g1_ParamLimits

0x4d5b,	// (0x000aee23) cell_dialer_keypad_pane_g1

0xcff4,	// (0x000b70bc) bg_button_pane_cp03_ParamLimits

0xcff4,	// (0x000b70bc) bg_button_pane_cp03

0x4d70,	// (0x000aee38) cell_dialer_command_1_pane_g1_ParamLimits

0x4d70,	// (0x000aee38) cell_dialer_command_1_pane_g1

0xd000,	// (0x000b70c8) bg_button_pane_cp04

0x4d83,	// (0x000aee4b) cell_dialer_command_2_pane_g1

0xb3b7,	// (0x000b547f) bg_button_pane_cp06

0xd008,	// (0x000b70d0) dialer_ne_clear_pane_g1

0xb293,	// (0x000b535b) navi_pane_g2

0xb2c1,	// (0x000b5389) navi_pane_g3

0x0002,

0xf3ea,	// (0x000b94b2) navi_pane_g

0xb350,	// (0x000b5418) navi_pane_mv_g2

0xb377,	// (0x000b543f) navi_pane_mv_g5

0x27bd,	// (0x000ac885) navi_pane_mv_t1

0xa2b0,	// (0x000b4378) main_clock2_pane

0x4dd0,	// (0x000aee98) main_clock2_list_pane_ParamLimits

0x4dd0,	// (0x000aee98) main_clock2_list_pane

0x4e0a,	// (0x000aeed2) main_clock2_pane_t1_ParamLimits

0x4e0a,	// (0x000aeed2) main_clock2_pane_t1

0x4e48,	// (0x000aef10) main_clock2_pane_t2_ParamLimits

0x4e48,	// (0x000aef10) main_clock2_pane_t2

0x0004,

0xf7c9,	// (0x000b9891) main_clock2_pane_t_ParamLimits

0xf7c9,	// (0x000b9891) main_clock2_pane_t

0x4ee6,	// (0x000aefae) popup_clock_analogue_window_cp03_ParamLimits

0x4ee6,	// (0x000aefae) popup_clock_analogue_window_cp03

0x4f0b,	// (0x000aefd3) popup_clock_digital_window_cp02_ParamLimits

0x4f0b,	// (0x000aefd3) popup_clock_digital_window_cp02

0x4f7e,	// (0x000af046) main_clock2_list_single_pane_ParamLimits

0x4f7e,	// (0x000af046) main_clock2_list_single_pane

0xb3b7,	// (0x000b547f) list_highlight_pane_cp05

0xd026,	// (0x000b70ee) main_clock2_list_single_pane_t1

0x1498,	// (0x000ab560) popup_toolbar_window_cp04_ParamLimits

0x43c6,	// (0x000ae48e) camera2_autofocus_pane_g2_ParamLimits

0x43c6,	// (0x000ae48e) camera2_autofocus_pane_g2

0x43d2,	// (0x000ae49a) camera2_autofocus_pane_g3_ParamLimits

0x43d2,	// (0x000ae49a) camera2_autofocus_pane_g3

0x43de,	// (0x000ae4a6) camera2_autofocus_pane_g4_ParamLimits

0x43de,	// (0x000ae4a6) camera2_autofocus_pane_g4

0x43ea,	// (0x000ae4b2) camera2_autofocus_pane_g5_ParamLimits

0x43ea,	// (0x000ae4b2) camera2_autofocus_pane_g5

0x0004,

0xf712,	// (0x000b97da) camera2_autofocus_pane_g_ParamLimits

0xf712,	// (0x000b97da) camera2_autofocus_pane_g

0x45b9,	// (0x000ae681) camera2_autofocus_pane_cp_g2

0x45c1,	// (0x000ae689) camera2_autofocus_pane_cp_g3

0x45c9,	// (0x000ae691) camera2_autofocus_pane_cp_g4

0x45d1,	// (0x000ae699) camera2_autofocus_pane_cp_g5

0x0004,

0xf778,	// (0x000b9840) camera2_autofocus_pane_cp_g

0x4c76,	// (0x000aed3e) popup_dialer_spcha_window

0x93ac,	// (0x000b3474) bg_popup_sub_pane_cp07

0xd034,	// (0x000b70fc) list_spcha_pane

0xd03c,	// (0x000b7104) list_single_spcha_pane_ParamLimits

0xd03c,	// (0x000b7104) list_single_spcha_pane

0x93ac,	// (0x000b3474) list_highlight_pane_cp06

0xd04d,	// (0x000b7115) list_single_spcha_pane_t1

0xc25b,	// (0x000b6323) popup_call2_audio_out_window_g4_ParamLimits

0xc25b,	// (0x000b6323) popup_call2_audio_out_window_g4

0x9432,	// (0x000b34fa) main_imed2_pane

0x9947,	// (0x000b3a0f) popup_imed_adjust2_window

0x37a7,	// (0x000ad86f) popup_imed_trans_window_ParamLimits

0x37a7,	// (0x000ad86f) popup_imed_trans_window

0xca64,	// (0x000b6b2c) popup_blid_sat_info2_window_t1

0xca72,	// (0x000b6b3a) popup_blid_sat_info2_window_t2

0x000a,

0xf6a7,	// (0x000b976f) popup_blid_sat_info2_window_t

0x5028,	// (0x000af0f0) aid_size_cell_colour_35

0x5048,	// (0x000af110) aid_size_cell_colour_112

0x5068,	// (0x000af130) aid_size_cell_effect

0xc81e,	// (0x000b68e6) bg_tb_trans_pane_cp02

0xade4,	// (0x000b4eac) heading_imed_pane

0x5088,	// (0x000af150) listscroll_imed_pane

0xd05b,	// (0x000b7123) heading_imed_pane_g1

0xd063,	// (0x000b712b) heading_imed_pane_t1

0xd071,	// (0x000b7139) grid_imed_colour_35_pane_ParamLimits

0xd071,	// (0x000b7139) grid_imed_colour_35_pane

0x5094,	// (0x000af15c) grid_imed_effect_pane

0xd089,	// (0x000b7151) list_imed_aspect_pane

0x50aa,	// (0x000af172) scroll_pane_cp027_ParamLimits

0x50aa,	// (0x000af172) scroll_pane_cp027

0x50bb,	// (0x000af183) cell_imed_effect_pane_ParamLimits

0x50bb,	// (0x000af183) cell_imed_effect_pane

0xd091,	// (0x000b7159) cell_imed_colour_pane_ParamLimits

0xd091,	// (0x000b7159) cell_imed_colour_pane

0xd0d3,	// (0x000b719b) cell_imed_colour_pane_g1_ParamLimits

0xd0d3,	// (0x000b719b) cell_imed_colour_pane_g1

0xd0e4,	// (0x000b71ac) hgihlgiht_grid_pane_cp016_ParamLimits

0xd0e4,	// (0x000b71ac) hgihlgiht_grid_pane_cp016

0x50e2,	// (0x000af1aa) cell_imed_effect_pane_g1

0x50ea,	// (0x000af1b2) grid_highlight_pane_cp017

0xd0f5,	// (0x000b71bd) list_imed_single_pane_ParamLimits

0xd0f5,	// (0x000b71bd) list_imed_single_pane

0x93ac,	// (0x000b3474) list_highlight_pane_cp07

0xd10b,	// (0x000b71d3) list_imed_aspect_pane_comp1_t1

0xc81e,	// (0x000b68e6) bg_tb_trans_pane_cp05

0xd12d,	// (0x000b71f5) popup_imed_adjust2_window_g1

0xd154,	// (0x000b721c) popup_imed_adjust2_window_t1

0xd16c,	// (0x000b7234) slider_imed_adjust_pane

0xd180,	// (0x000b7248) slider_imed_adjust_pane_g1

0xd190,	// (0x000b7258) slider_imed_adjust_pane_g2

0xd1a0,	// (0x000b7268) slider_imed_adjust_pane_g3

0xd1b1,	// (0x000b7279) slider_imed_adjust_pane_g4

0x0003,

0xf7e6,	// (0x000b98ae) slider_imed_adjust_pane_g

0x50f3,	// (0x000af1bb) aid_size_cell_clipart2

0x50ff,	// (0x000af1c7) grid_imed_clipart_pane

0xd1c2,	// (0x000b728a) scroll_pane_cp031

0x5109,	// (0x000af1d1) cell_imed_clipart_pane_ParamLimits

0x5109,	// (0x000af1d1) cell_imed_clipart_pane

0x512d,	// (0x000af1f5) cell_imed_clipart_pane_g1

0x93ac,	// (0x000b3474) grid_highlight_pane_cp014

0x4de5,	// (0x000aeead) main_clock2_pane_g1_ParamLimits

0x4de5,	// (0x000aeead) main_clock2_pane_g1

0x4f29,	// (0x000aeff1) aid_call2_pane_cp10

0x4f3b,	// (0x000af003) aid_call_pane_cp10

0xb1f2,	// (0x000b52ba) popup_clock_analogue_window_cp10_g1

0xb1f2,	// (0x000b52ba) popup_clock_analogue_window_cp10_g2

0x4f4d,	// (0x000af015) popup_clock_analogue_window_cp10_g3

0x4f4d,	// (0x000af015) popup_clock_analogue_window_cp10_g4

0xb1f2,	// (0x000b52ba) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7d4,	// (0x000b989c) popup_clock_analogue_window_cp10_g

0x4f5f,	// (0x000af027) popup_clock_analogue_window_cp10_t1

0x4f90,	// (0x000af058) clock_digital_number_pane_cp10_ParamLimits

0x4f90,	// (0x000af058) clock_digital_number_pane_cp10

0x4fa8,	// (0x000af070) clock_digital_number_pane_cp11_ParamLimits

0x4fa8,	// (0x000af070) clock_digital_number_pane_cp11

0x4fc0,	// (0x000af088) clock_digital_number_pane_cp12_ParamLimits

0x4fc0,	// (0x000af088) clock_digital_number_pane_cp12

0x4fd8,	// (0x000af0a0) clock_digital_number_pane_cp13_ParamLimits

0x4fd8,	// (0x000af0a0) clock_digital_number_pane_cp13

0x4ff0,	// (0x000af0b8) clock_digital_separator_pane_cp10_ParamLimits

0x4ff0,	// (0x000af0b8) clock_digital_separator_pane_cp10

0x5008,	// (0x000af0d0) popup_clock_digital_window_cp02_t1_ParamLimits

0x5008,	// (0x000af0d0) popup_clock_digital_window_cp02_t1

0xa1c4,	// (0x000b428c) clock_digital_number_pane_cp10_g1

0xa1c4,	// (0x000b428c) clock_digital_number_pane_cp10_g2

0x0001,

0xf7ef,	// (0x000b98b7) clock_digital_number_pane_cp10_g

0xa1c4,	// (0x000b428c) clock_digital_separator_pane_cp10_g1

0xa1c4,	// (0x000b428c) clock_digital_separator_pane_g2_cp10

0xb37f,	// (0x000b5447) navi_pane_vded_g4

0xb388,	// (0x000b5450) navi_pane_vded_g5

0xb391,	// (0x000b5459) navi_pane_vded_t1

0x9432,	// (0x000b34fa) main_vded_pane

0x5136,	// (0x000af1fe) main_vded_pane_g1

0x5140,	// (0x000af208) main_vded_pane_g2

0x514a,	// (0x000af212) main_vded_pane_g3

0x0002,

0xf7f4,	// (0x000b98bc) main_vded_pane_g

0x5154,	// (0x000af21c) main_vded_pane_t1

0x5162,	// (0x000af22a) main_vded_pane_t2

0x0001,

0xf7fb,	// (0x000b98c3) main_vded_pane_t

0x5170,	// (0x000af238) vded_slider_pane

0x517a,	// (0x000af242) vded_video_pane

0xd1ca,	// (0x000b7292) vded_video_pane_g1

0x5184,	// (0x000af24c) vded_video_pane_g2

0xcc28,	// (0x000b6cf0) vded_video_pane_g3

0x0002,

0xf800,	// (0x000b98c8) vded_video_pane_g

0xd1d4,	// (0x000b729c) vded_slider_pane_g1

0xd1dd,	// (0x000b72a5) vded_slider_pane_g2

0xd1e6,	// (0x000b72ae) vded_slider_pane_g3

0xd1ef,	// (0x000b72b7) vded_slider_pane_g4

0xd1f8,	// (0x000b72c0) vded_slider_pane_g5

0x0004,

0xf807,	// (0x000b98cf) vded_slider_pane_g

0x4b55,	// (0x000aec1d) mup3_rocker_pane_ParamLimits

0x4b55,	// (0x000aec1d) mup3_rocker_pane

0x518d,	// (0x000af255) mup3_control_keys_pane_g1

0x5195,	// (0x000af25d) mup3_control_keys_pane_g2

0x519d,	// (0x000af265) mup3_control_keys_pane_g3

0x51a5,	// (0x000af26d) mup3_control_keys_pane_g4

0x0003,

0xf812,	// (0x000b98da) mup3_control_keys_pane_g

0x036b,	// (0x000aa433) popup_toolbar2_fixed_window_cp01_ParamLimits

0x036b,	// (0x000aa433) popup_toolbar2_fixed_window_cp01

0x4b89,	// (0x000aec51) popup_toolbar2_fixed_window_cp02_ParamLimits

0x4b89,	// (0x000aec51) popup_toolbar2_fixed_window_cp02

0xbb8e,	// (0x000b5c56) popup_call2_audio_second_window_t4_ParamLimits

0xbb8e,	// (0x000b5c56) popup_call2_audio_second_window_t4

0xc0c8,	// (0x000b6190) popup_call2_audio_first_window_t6_ParamLimits

0xc0c8,	// (0x000b6190) popup_call2_audio_first_window_t6

0xc35e,	// (0x000b6426) popup_call2_audio_out_window_t6_ParamLimits

0xc35e,	// (0x000b6426) popup_call2_audio_out_window_t6

0x9432,	// (0x000b34fa) main_vitu_pane

0x51b5,	// (0x000af27d) aid_size_cell_itu_ParamLimits

0x51b5,	// (0x000af27d) aid_size_cell_itu

0xa4f7,	// (0x000b45bf) bg_popup_window_pane_cp08_ParamLimits

0xa4f7,	// (0x000b45bf) bg_popup_window_pane_cp08

0x51cb,	// (0x000af293) field_vitu_entry_pane_ParamLimits

0x51cb,	// (0x000af293) field_vitu_entry_pane

0x51e2,	// (0x000af2aa) grid_vitu_function_pane_ParamLimits

0x51e2,	// (0x000af2aa) grid_vitu_function_pane

0x51fd,	// (0x000af2c5) grid_vitu_itu_pane_ParamLimits

0x51fd,	// (0x000af2c5) grid_vitu_itu_pane

0x521b,	// (0x000af2e3) cell_vitu_itu_pane_ParamLimits

0x521b,	// (0x000af2e3) cell_vitu_itu_pane

0x523f,	// (0x000af307) cell_vitu_function_pane_ParamLimits

0x523f,	// (0x000af307) cell_vitu_function_pane

0xa4f7,	// (0x000b45bf) bg_popup_sub_pane_cp08_ParamLimits

0xa4f7,	// (0x000b45bf) bg_popup_sub_pane_cp08

0x525a,	// (0x000af322) field_vitu_entry_pane_t1_ParamLimits

0x525a,	// (0x000af322) field_vitu_entry_pane_t1

0xd219,	// (0x000b72e1) field_vitu_entry_pane_t2_ParamLimits

0xd219,	// (0x000b72e1) field_vitu_entry_pane_t2

0x0001,

0xf820,	// (0x000b98e8) field_vitu_entry_pane_t_ParamLimits

0xf820,	// (0x000b98e8) field_vitu_entry_pane_t

0xd236,	// (0x000b72fe) bg_button_pane_cp05_ParamLimits

0xd236,	// (0x000b72fe) bg_button_pane_cp05

0x5279,	// (0x000af341) cell_vitu_itu_pane_g1

0x5291,	// (0x000af359) cell_vitu_itu_pane_t1_ParamLimits

0x5291,	// (0x000af359) cell_vitu_itu_pane_t1

0x52a3,	// (0x000af36b) cell_vitu_itu_pane_t2_ParamLimits

0x52a3,	// (0x000af36b) cell_vitu_itu_pane_t2

0x0002,

0xf825,	// (0x000b98ed) cell_vitu_itu_pane_t_ParamLimits

0xf825,	// (0x000b98ed) cell_vitu_itu_pane_t

0xd244,	// (0x000b730c) bg_button_pane_cp07

0x52e6,	// (0x000af3ae) cell_vitu_function_pane_g1

0x9794,	// (0x000b385c) main_calc_pane_g1

0x0192,	// (0x000aa25a) aid_visual_content_pane

0x9432,	// (0x000b34fa) main_vradio_pane

0x52ef,	// (0x000af3b7) main_vradio_pane_g1_ParamLimits

0x52ef,	// (0x000af3b7) main_vradio_pane_g1

0xd24e,	// (0x000b7316) main_vradio_pane_g2_ParamLimits

0xd24e,	// (0x000b7316) main_vradio_pane_g2

0x0001,

0xf82c,	// (0x000b98f4) main_vradio_pane_g_ParamLimits

0xf82c,	// (0x000b98f4) main_vradio_pane_g

0x5308,	// (0x000af3d0) main_vradio_pane_t1_ParamLimits

0x5308,	// (0x000af3d0) main_vradio_pane_t1

0x531d,	// (0x000af3e5) main_vradio_pane_t2_ParamLimits

0x531d,	// (0x000af3e5) main_vradio_pane_t2

0xd25b,	// (0x000b7323) main_vradio_pane_t3_ParamLimits

0xd25b,	// (0x000b7323) main_vradio_pane_t3

0x0002,

0xf831,	// (0x000b98f9) main_vradio_pane_t_ParamLimits

0xf831,	// (0x000b98f9) main_vradio_pane_t

0x5332,	// (0x000af3fa) vradio_rocker_control_pane_ParamLimits

0x5332,	// (0x000af3fa) vradio_rocker_control_pane

0x5344,	// (0x000af40c) vradio_station_info_pane_ParamLimits

0x5344,	// (0x000af40c) vradio_station_info_pane

0xd26f,	// (0x000b7337) vradio_frequency_info_pane_ParamLimits

0xd26f,	// (0x000b7337) vradio_frequency_info_pane

0xcc28,	// (0x000b6cf0) vradio_station_info_pane_g1

0xd27e,	// (0x000b7346) vradio_station_info_pane_t1_ParamLimits

0xd27e,	// (0x000b7346) vradio_station_info_pane_t1

0xd2a0,	// (0x000b7368) vradio_station_info_pane_t2_ParamLimits

0xd2a0,	// (0x000b7368) vradio_station_info_pane_t2

0x0001,

0xf838,	// (0x000b9900) vradio_station_info_pane_t_ParamLimits

0xf838,	// (0x000b9900) vradio_station_info_pane_t

0xd2b2,	// (0x000b737a) vradio_tuning_pane

0xd2ba,	// (0x000b7382) vradio_rocker_control_pane_g1

0xd2c2,	// (0x000b738a) vradio_rocker_control_pane_g2

0xd2ca,	// (0x000b7392) vradio_rocker_control_pane_g3

0xd2d2,	// (0x000b739a) vradio_rocker_control_pane_g4

0xd2da,	// (0x000b73a2) vradio_rocker_control_pane_g5

0x0004,

0xf83d,	// (0x000b9905) vradio_rocker_control_pane_g

0x5356,	// (0x000af41e) vradio_frequency_info_pane_g1

0xd2e2,	// (0x000b73aa) vradio_frequency_info_pane_t1_ParamLimits

0xd2e2,	// (0x000b73aa) vradio_frequency_info_pane_t1

0x5360,	// (0x000af428) vradio_tuning_pane_g1

0x536b,	// (0x000af433) vradio_tuning_pane_t1

0x93e2,	// (0x000b34aa) area_side_right_pane_ParamLimits

0x93e2,	// (0x000b34aa) area_side_right_pane

0xc7d9,	// (0x000b68a1) status_small_pane_g1

0xc7e1,	// (0x000b68a9) status_small_pane_g2

0xc7ea,	// (0x000b68b2) status_small_pane_g3

0xc7f3,	// (0x000b68bb) status_small_pane_g4

0x0003,

0xf5fd,	// (0x000b96c5) status_small_pane_g

0xc7fc,	// (0x000b68c4) status_small_pane_t1

0x9432,	// (0x000b34fa) main_video3_pane

0xd2f6,	// (0x000b73be) cams_zoom_vslider_pane

0xd2fe,	// (0x000b73c6) image3_wide_pane_ParamLimits

0xd2fe,	// (0x000b73c6) image3_wide_pane

0xd318,	// (0x000b73e0) image3_wide_small_pane

0xd324,	// (0x000b73ec) main_video3_pane_g1_ParamLimits

0xd324,	// (0x000b73ec) main_video3_pane_g1

0xd340,	// (0x000b7408) main_video3_pane_g2_ParamLimits

0xd340,	// (0x000b7408) main_video3_pane_g2

0x0001,

0xf848,	// (0x000b9910) main_video3_pane_g_ParamLimits

0xf848,	// (0x000b9910) main_video3_pane_g

0xd35c,	// (0x000b7424) main_video3_pane_t1_ParamLimits

0xd35c,	// (0x000b7424) main_video3_pane_t1

0xd387,	// (0x000b744f) main_video3_pane_t2_ParamLimits

0xd387,	// (0x000b744f) main_video3_pane_t2

0xd3b2,	// (0x000b747a) main_video3_pane_t3_ParamLimits

0xd3b2,	// (0x000b747a) main_video3_pane_t3

0x0002,

0xf84d,	// (0x000b9915) main_video3_pane_t_ParamLimits

0xf84d,	// (0x000b9915) main_video3_pane_t

0xd3df,	// (0x000b74a7) cams_zoom_vslider_pane_g1

0xd3e8,	// (0x000b74b0) cams_zoom_vslider_pane_g2

0x0001,

0xf854,	// (0x000b991c) cams_zoom_vslider_pane_g

0xd3f0,	// (0x000b74b8) small_slider_vertical_pane

0xcc28,	// (0x000b6cf0) small_slider_vertical_pane_g1

0xcc28,	// (0x000b6cf0) small_slider_vertical_pane_g2

0xd3f8,	// (0x000b74c0) small_slider_vertical_pane_g3

0x0002,

0xf859,	// (0x000b9921) small_slider_vertical_pane_g

0x9432,	// (0x000b34fa) main_hwr_training_pane

0xd401,	// (0x000b74c9) hwr_training_instruct_pane_ParamLimits

0xd401,	// (0x000b74c9) hwr_training_instruct_pane

0x537a,	// (0x000af442) hwr_training_navi_pane_ParamLimits

0x537a,	// (0x000af442) hwr_training_navi_pane

0x5399,	// (0x000af461) hwr_training_write_pane_ParamLimits

0x5399,	// (0x000af461) hwr_training_write_pane

0x93ac,	// (0x000b3474) bg_frame_shadow_pane

0xd438,	// (0x000b7500) hwr_training_write_pane_g1

0xd440,	// (0x000b7508) hwr_training_write_pane_g2

0xd448,	// (0x000b7510) hwr_training_write_pane_g3

0xd450,	// (0x000b7518) hwr_training_write_pane_g4

0xd458,	// (0x000b7520) hwr_training_write_pane_g5

0xd460,	// (0x000b7528) hwr_training_write_pane_g6

0xd468,	// (0x000b7530) hwr_training_write_pane_g7

0x0006,

0xf860,	// (0x000b9928) hwr_training_write_pane_g

0x9a38,	// (0x000b3b00) hwr_training_navi_pane_g1_ParamLimits

0x9a38,	// (0x000b3b00) hwr_training_navi_pane_g1

0x9a4a,	// (0x000b3b12) hwr_training_navi_pane_g2_ParamLimits

0x9a4a,	// (0x000b3b12) hwr_training_navi_pane_g2

0x9a5c,	// (0x000b3b24) hwr_training_navi_pane_g3_ParamLimits

0x9a5c,	// (0x000b3b24) hwr_training_navi_pane_g3

0x9a6c,	// (0x000b3b34) hwr_training_navi_pane_g4_ParamLimits

0x9a6c,	// (0x000b3b34) hwr_training_navi_pane_g4

0x0004,

0xf86f,	// (0x000b9937) hwr_training_navi_pane_g_ParamLimits

0xf86f,	// (0x000b9937) hwr_training_navi_pane_g

0x9a79,	// (0x000b3b41) hwr_training_navi_pane_t1

0x53e3,	// (0x000af4ab) list_single_hwr_training_instruct_pane_ParamLimits

0x53e3,	// (0x000af4ab) list_single_hwr_training_instruct_pane

0xd470,	// (0x000b7538) list_single_hwr_training_instruct_pane_t1

0xcb68,	// (0x000b6c30) bg_frame_shadow_pane_g1

0xd47f,	// (0x000b7547) bg_frame_shadow_pane_g2

0xd487,	// (0x000b754f) bg_frame_shadow_pane_g3

0xd48f,	// (0x000b7557) bg_frame_shadow_pane_g4

0xd497,	// (0x000b755f) bg_frame_shadow_pane_g5

0xd49f,	// (0x000b7567) bg_frame_shadow_pane_g6

0xd4a7,	// (0x000b756f) bg_frame_shadow_pane_g7

0xa37b,	// (0x000b4443) bg_frame_shadow_pane_g8

0x0007,

0xf87a,	// (0x000b9942) bg_frame_shadow_pane_g

0x9432,	// (0x000b34fa) main_video_tele_dialer_pane

0x53fa,	// (0x000af4c2) aid_size_cell_video_keypad_ParamLimits

0x53fa,	// (0x000af4c2) aid_size_cell_video_keypad

0x5414,	// (0x000af4dc) grid_video_dialer_keypad_pane_ParamLimits

0x5414,	// (0x000af4dc) grid_video_dialer_keypad_pane

0x5462,	// (0x000af52a) video_down_pane_cp_ParamLimits

0x5462,	// (0x000af52a) video_down_pane_cp

0x5494,	// (0x000af55c) cell_video_dialer_keypad_pane_ParamLimits

0x5494,	// (0x000af55c) cell_video_dialer_keypad_pane

0xd4af,	// (0x000b7577) bg_button_pane_cp08_ParamLimits

0xd4af,	// (0x000b7577) bg_button_pane_cp08

0x54b6,	// (0x000af57e) cell_video_dialer_keypad_pane_g1_ParamLimits

0x54b6,	// (0x000af57e) cell_video_dialer_keypad_pane_g1

0x4b3f,	// (0x000aec07) mup3_rocker2_pane_ParamLimits

0x4b3f,	// (0x000aec07) mup3_rocker2_pane

0xcc28,	// (0x000b6cf0) mup3_rocker2_pane_g1

0x3690,	// (0x000ad758) main_dialer2_pane

0x9432,	// (0x000b34fa) main_mp4_pane

0x9a8f,	// (0x000b3b57) main_mp4_pane_g1_ParamLimits

0x9a8f,	// (0x000b3b57) main_mp4_pane_g1

0x9a8f,	// (0x000b3b57) main_mp4_pane_g2_ParamLimits

0x9a8f,	// (0x000b3b57) main_mp4_pane_g2

0x54f1,	// (0x000af5b9) main_mp4_pane_g3_ParamLimits

0x54f1,	// (0x000af5b9) main_mp4_pane_g3

0x9a9d,	// (0x000b3b65) main_mp4_pane_g4_ParamLimits

0x9a9d,	// (0x000b3b65) main_mp4_pane_g4

0x9ac5,	// (0x000b3b8d) main_mp4_pane_g5_ParamLimits

0x9ac5,	// (0x000b3b8d) main_mp4_pane_g5

0x0005,

0xf89a,	// (0x000b9962) main_mp4_pane_g_ParamLimits

0xf89a,	// (0x000b9962) main_mp4_pane_g

0x9b15,	// (0x000b3bdd) main_mp4_pane_t1_ParamLimits

0x9b15,	// (0x000b3bdd) main_mp4_pane_t1

0x9b71,	// (0x000b3c39) main_mp4_pane_t2_ParamLimits

0x9b71,	// (0x000b3c39) main_mp4_pane_t2

0xd4bb,	// (0x000b7583) main_mp4_pane_t3_ParamLimits

0xd4bb,	// (0x000b7583) main_mp4_pane_t3

0x9bc3,	// (0x000b3c8b) main_mp4_pane_t4_ParamLimits

0x9bc3,	// (0x000b3c8b) main_mp4_pane_t4

0x0003,

0xf8a7,	// (0x000b996f) main_mp4_pane_t_ParamLimits

0xf8a7,	// (0x000b996f) main_mp4_pane_t

0x9c07,	// (0x000b3ccf) mp4_progress_pane_ParamLimits

0x9c07,	// (0x000b3ccf) mp4_progress_pane

0x9c51,	// (0x000b3d19) mp4_rocker_pane_ParamLimits

0x9c51,	// (0x000b3d19) mp4_rocker_pane

0xd4e3,	// (0x000b75ab) mp4_progress_pane_t1

0xd4fc,	// (0x000b75c4) mp4_progress_pane_t2

0x0001,

0xf8b0,	// (0x000b9978) mp4_progress_pane_t

0xd515,	// (0x000b75dd) mup_progress_pane_cp04

0xd5a8,	// (0x000b7670) mp4_rocker_pane_g1

0x552d,	// (0x000af5f5) aid_cell_size_keypad2_ParamLimits

0x552d,	// (0x000af5f5) aid_cell_size_keypad2

0x5543,	// (0x000af60b) dialer2_ne_pane_ParamLimits

0x5543,	// (0x000af60b) dialer2_ne_pane

0x555d,	// (0x000af625) grid_dialer2_keypad_pane_ParamLimits

0x555d,	// (0x000af625) grid_dialer2_keypad_pane

0xca0b,	// (0x000b6ad3) bg_popup_call_pane_cp07_ParamLimits

0xca0b,	// (0x000b6ad3) bg_popup_call_pane_cp07

0x557b,	// (0x000af643) dialer2_ne_pane_t1_ParamLimits

0x557b,	// (0x000af643) dialer2_ne_pane_t1

0x55b8,	// (0x000af680) cell_dialer2_keypad_pane_ParamLimits

0x55b8,	// (0x000af680) cell_dialer2_keypad_pane

0xd533,	// (0x000b75fb) bg_button_pane_pane_cp04_ParamLimits

0xd533,	// (0x000b75fb) bg_button_pane_pane_cp04

0x55da,	// (0x000af6a2) cell_dialer2_keypad_pane_g1_ParamLimits

0x55da,	// (0x000af6a2) cell_dialer2_keypad_pane_g1

0x136c,	// (0x000ab434) aid_placing_vt_set_content_ParamLimits

0x136c,	// (0x000ab434) aid_placing_vt_set_content

0x1394,	// (0x000ab45c) aid_placing_vt_set_title_ParamLimits

0x1394,	// (0x000ab45c) aid_placing_vt_set_title

0x9432,	// (0x000b34fa) main_image3_pane

0x56a0,	// (0x000af768) area_side_right_pane_cp01_ParamLimits

0x56a0,	// (0x000af768) area_side_right_pane_cp01

0x9a8f,	// (0x000b3b57) main_image3_pane_g1_ParamLimits

0x9a8f,	// (0x000b3b57) main_image3_pane_g1

0x56b7,	// (0x000af77f) main_image3_pane_g2_ParamLimits

0x56b7,	// (0x000af77f) main_image3_pane_g2

0x56df,	// (0x000af7a7) main_image3_pane_g3_ParamLimits

0x56df,	// (0x000af7a7) main_image3_pane_g3

0x5709,	// (0x000af7d1) main_image3_pane_g4_ParamLimits

0x5709,	// (0x000af7d1) main_image3_pane_g4

0x0003,

0xf8bf,	// (0x000b9987) main_image3_pane_g_ParamLimits

0xf8bf,	// (0x000b9987) main_image3_pane_g

0x5733,	// (0x000af7fb) main_image3_pane_t1_ParamLimits

0x5733,	// (0x000af7fb) main_image3_pane_t1

0x578b,	// (0x000af853) main_image3_pane_t2_ParamLimits

0x578b,	// (0x000af853) main_image3_pane_t2

0x57dd,	// (0x000af8a5) main_image3_pane_t3_ParamLimits

0x57dd,	// (0x000af8a5) main_image3_pane_t3

0x0003,

0xf8c8,	// (0x000b9990) main_image3_pane_t_ParamLimits

0xf8c8,	// (0x000b9990) main_image3_pane_t

0xa4f7,	// (0x000b45bf) grid_sctrl_middle_pane_cp01_ParamLimits

0xa4f7,	// (0x000b45bf) grid_sctrl_middle_pane_cp01

0x5865,	// (0x000af92d) cell_sctrl_middle_pane_cp01_ParamLimits

0x5865,	// (0x000af92d) cell_sctrl_middle_pane_cp01

0x5882,	// (0x000af94a) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x5882,	// (0x000af94a) cell_sctrl_middle_pane_cp01_g1

0x9432,	// (0x000b34fa) main_call4_pane

0x5898,	// (0x000af960) aid_size_button_call4_ParamLimits

0x5898,	// (0x000af960) aid_size_button_call4

0x58c9,	// (0x000af991) call4_windows_pane_ParamLimits

0x58c9,	// (0x000af991) call4_windows_pane

0x58e9,	// (0x000af9b1) grid_call4_button_pane_ParamLimits

0x58e9,	// (0x000af9b1) grid_call4_button_pane

0xd53f,	// (0x000b7607) call4_windows_conf_pane

0xd554,	// (0x000b761c) popup_call4_audio_first_window_ParamLimits

0xd554,	// (0x000b761c) popup_call4_audio_first_window

0xd5b2,	// (0x000b767a) popup_call4_audio_second_window_ParamLimits

0xd5b2,	// (0x000b767a) popup_call4_audio_second_window

0xd5c6,	// (0x000b768e) popup_call4_audio_wait_window_ParamLimits

0xd5c6,	// (0x000b768e) popup_call4_audio_wait_window

0x5916,	// (0x000af9de) cell_call4_button_pane_ParamLimits

0x5916,	// (0x000af9de) cell_call4_button_pane

0x593f,	// (0x000afa07) bg_button_pane_cp09_ParamLimits

0x593f,	// (0x000afa07) bg_button_pane_cp09

0x594b,	// (0x000afa13) cell_call4_button_pane_g1_ParamLimits

0x594b,	// (0x000afa13) cell_call4_button_pane_g1

0x5971,	// (0x000afa39) cell_call4_button_pane_t1_ParamLimits

0x5971,	// (0x000afa39) cell_call4_button_pane_t1

0xd60e,	// (0x000b76d6) popup_call4_audio_conf_window_ParamLimits

0xd60e,	// (0x000b76d6) popup_call4_audio_conf_window

0x4b9f,	// (0x000aec67) mup3_progress_pane_t1_ParamLimits

0x4bbe,	// (0x000aec86) mup3_progress_pane_t2_ParamLimits

0xcf03,	// (0x000b6fcb) mup3_progress_pane_t3_ParamLimits

0xf7a1,	// (0x000b9869) mup3_progress_pane_t_ParamLimits

0xcf20,	// (0x000b6fe8) mup_progress_pane_cp03_ParamLimits

0x51ad,	// (0x000af275) mup3_control_keys_pane_g4_copy1

0x9c35,	// (0x000b3cfd) mp4_rocker2_pane_ParamLimits

0x9c35,	// (0x000b3cfd) mp4_rocker2_pane

0xd622,	// (0x000b76ea) mp4_rocker2_pane_g1

0xd62a,	// (0x000b76f2) mp4_rocker2_pane_g2

0x9ca3,	// (0x000b3d6b) mp4_rocker2_pane_g3

0x9cab,	// (0x000b3d73) mp4_rocker2_pane_g4

0x9cb3,	// (0x000b3d7b) mp4_rocker2_pane_g5

0x0004,

0xf8d1,	// (0x000b9999) mp4_rocker2_pane_g

0x9432,	// (0x000b34fa) main_camera4_pane

0x9432,	// (0x000b34fa) main_video4_pane

0x5430,	// (0x000af4f8) main_video_tele_dialer_pane_t1_ParamLimits

0x5430,	// (0x000af4f8) main_video_tele_dialer_pane_t1

0x5449,	// (0x000af511) main_video_tele_dialer_pane_t2_ParamLimits

0x5449,	// (0x000af511) main_video_tele_dialer_pane_t2

0x0001,

0xf88b,	// (0x000b9953) main_video_tele_dialer_pane_t_ParamLimits

0xf88b,	// (0x000b9953) main_video_tele_dialer_pane_t

0x59af,	// (0x000afa77) cam4_autofocus_pane_ParamLimits

0x59af,	// (0x000afa77) cam4_autofocus_pane

0x59c5,	// (0x000afa8d) cam4_image_uncrop_pane_ParamLimits

0x59c5,	// (0x000afa8d) cam4_image_uncrop_pane

0x59df,	// (0x000afaa7) cam4_indicators_pane_ParamLimits

0x59df,	// (0x000afaa7) cam4_indicators_pane

0x5a0a,	// (0x000afad2) main_camera4_pane_g1_ParamLimits

0x5a0a,	// (0x000afad2) main_camera4_pane_g1

0x5a1c,	// (0x000afae4) main_camera4_pane_g2_ParamLimits

0x5a1c,	// (0x000afae4) main_camera4_pane_g2

0x5a2f,	// (0x000afaf7) main_camera4_pane_g3_ParamLimits

0x5a2f,	// (0x000afaf7) main_camera4_pane_g3

0x5a42,	// (0x000afb0a) main_camera4_pane_g4_ParamLimits

0x5a42,	// (0x000afb0a) main_camera4_pane_g4

0x5a55,	// (0x000afb1d) main_camera4_pane_g5_ParamLimits

0x5a55,	// (0x000afb1d) main_camera4_pane_g5

0x0005,

0xf8dc,	// (0x000b99a4) main_camera4_pane_g_ParamLimits

0xf8dc,	// (0x000b99a4) main_camera4_pane_g

0x5a79,	// (0x000afb41) main_camera4_pane_t1_ParamLimits

0x5a79,	// (0x000afb41) main_camera4_pane_t1

0x9cd7,	// (0x000b3d9f) bg_tb_trans_pane_cp06

0x9ced,	// (0x000b3db5) cam4_indicators_pane_g1

0x9cfe,	// (0x000b3dc6) cam4_indicators_pane_g2

0x0002,

0xf8f7,	// (0x000b99bf) cam4_indicators_pane_g

0x9d1c,	// (0x000b3de4) cam4_indicators_pane_t1

0x5add,	// (0x000afba5) main_video4_pane_g1_ParamLimits

0x5add,	// (0x000afba5) main_video4_pane_g1

0x5aec,	// (0x000afbb4) main_video4_pane_g2_ParamLimits

0x5aec,	// (0x000afbb4) main_video4_pane_g2

0x5afb,	// (0x000afbc3) main_video4_pane_g3_ParamLimits

0x5afb,	// (0x000afbc3) main_video4_pane_g3

0x5b0a,	// (0x000afbd2) main_video4_pane_g4_ParamLimits

0x5b0a,	// (0x000afbd2) main_video4_pane_g4

0x0004,

0xf8fe,	// (0x000b99c6) main_video4_pane_g_ParamLimits

0xf8fe,	// (0x000b99c6) main_video4_pane_g

0x5b28,	// (0x000afbf0) vid4_indicators_pane_ParamLimits

0x5b28,	// (0x000afbf0) vid4_indicators_pane

0x5b56,	// (0x000afc1e) video4_image_uncrop_cif_pane_ParamLimits

0x5b56,	// (0x000afc1e) video4_image_uncrop_cif_pane

0x5b70,	// (0x000afc38) video4_image_uncrop_nhd_pane_ParamLimits

0x5b70,	// (0x000afc38) video4_image_uncrop_nhd_pane

0x59c5,	// (0x000afa8d) video4_image_uncrop_vga_pane_ParamLimits

0x59c5,	// (0x000afa8d) video4_image_uncrop_vga_pane

0x9424,	// (0x000b34ec) bg_tb_trans_pane_cp07

0x9d46,	// (0x000b3e0e) vid4_indicators_pane_g1

0x9d5a,	// (0x000b3e22) vid4_indicators_pane_g2

0x9d6e,	// (0x000b3e36) vid4_indicators_pane_g3

0x0004,

0xf909,	// (0x000b99d1) vid4_indicators_pane_g

0x9d9b,	// (0x000b3e63) vid4_indicators_pane_t1

0x5b84,	// (0x000afc4c) cam4_autofocus_pane_g1

0x5b8c,	// (0x000afc54) cam4_autofocus_pane_g2

0x5b94,	// (0x000afc5c) cam4_autofocus_pane_g3

0x0002,

0xf914,	// (0x000b99dc) cam4_autofocus_pane_g

0x5b9c,	// (0x000afc64) cam4_autofocus_pane_g3_copy1

0x5478,	// (0x000af540) video_down_pane_cp_t1

0x5486,	// (0x000af54e) video_down_pane_cp_t2

0x0001,

0xf890,	// (0x000b9958) video_down_pane_cp_t

0x9424,	// (0x000b34ec) popup_vitu2_window_ParamLimits

0x9424,	// (0x000b34ec) popup_vitu2_window

0x5ba4,	// (0x000afc6c) aid_size_cell2_itu2_ParamLimits

0x5ba4,	// (0x000afc6c) aid_size_cell2_itu2

0x5bca,	// (0x000afc92) aid_size_cell_itu2_ParamLimits

0x5bca,	// (0x000afc92) aid_size_cell_itu2

0x5c26,	// (0x000afcee) bg_popup_window_pane_cp09_ParamLimits

0x5c26,	// (0x000afcee) bg_popup_window_pane_cp09

0x5c34,	// (0x000afcfc) field_vitu2_entry_pane_ParamLimits

0x5c34,	// (0x000afcfc) field_vitu2_entry_pane

0x5c5a,	// (0x000afd22) grid_vitu2_function_pane_ParamLimits

0x5c5a,	// (0x000afd22) grid_vitu2_function_pane

0x5cab,	// (0x000afd73) grid_vitu2_itu_pane_ParamLimits

0x5cab,	// (0x000afd73) grid_vitu2_itu_pane

0x5d3c,	// (0x000afe04) cell_vitu2_itu_pane_ParamLimits

0x5d3c,	// (0x000afe04) cell_vitu2_itu_pane

0x5d60,	// (0x000afe28) cell_vitu2_function_pane_ParamLimits

0x5d60,	// (0x000afe28) cell_vitu2_function_pane

0xd644,	// (0x000b770c) bg_popup_call_pane_cp08_ParamLimits

0xd644,	// (0x000b770c) bg_popup_call_pane_cp08

0xd65d,	// (0x000b7725) field_vitu2_entry_pane_g1

0xd669,	// (0x000b7731) field_vitu2_entry_pane_g2

0x0002,

0xf91b,	// (0x000b99e3) field_vitu2_entry_pane_g

0x5d9f,	// (0x000afe67) field_vitu2_entry_pane_t1_ParamLimits

0x5d9f,	// (0x000afe67) field_vitu2_entry_pane_t1

0xa579,	// (0x000b4641) field_vitu2_entry_pane_t2_ParamLimits

0xa579,	// (0x000b4641) field_vitu2_entry_pane_t2

0x0001,

0xf922,	// (0x000b99ea) field_vitu2_entry_pane_t_ParamLimits

0xf922,	// (0x000b99ea) field_vitu2_entry_pane_t

0x5dce,	// (0x000afe96) bg_button_pane_cp010_ParamLimits

0x5dce,	// (0x000afe96) bg_button_pane_cp010

0x5ddc,	// (0x000afea4) cell_vitu2_itu_pane_g1

0x5e07,	// (0x000afecf) cell_vitu2_itu_pane_t1_ParamLimits

0x5e07,	// (0x000afecf) cell_vitu2_itu_pane_t1

0x006a,	// (0x000aa132) cell_vitu2_itu_pane_t2_ParamLimits

0x006a,	// (0x000aa132) cell_vitu2_itu_pane_t2

0x0002,

0xf92c,	// (0x000b99f4) cell_vitu2_itu_pane_t_ParamLimits

0xf92c,	// (0x000b99f4) cell_vitu2_itu_pane_t

0x9424,	// (0x000b34ec) bg_button_pane_cp011

0x5e65,	// (0x000aff2d) cell_vitu2_function_pane_g1

0x9432,	// (0x000b34fa) main_myfav_hc_pane

0x582d,	// (0x000af8f5) popup_image3_note_pane_ParamLimits

0x582d,	// (0x000af8f5) popup_image3_note_pane

0x5849,	// (0x000af911) popup_image3_tool_bar_pane_ParamLimits

0x5849,	// (0x000af911) popup_image3_tool_bar_pane

0x00f8,	// (0x000aa1c0) cell_vitu2_itu_pane_t3_ParamLimits

0x00f8,	// (0x000aa1c0) cell_vitu2_itu_pane_t3

0x93ac,	// (0x000b3474) bg_popup_trans_pane

0xd68b,	// (0x000b7753) grid_image3_tool_bar_pane

0xd695,	// (0x000b775d) bg_popup_trans_pane_g1

0xab94,	// (0x000b4c5c) bg_popup_trans_pane_g2

0xd69d,	// (0x000b7765) bg_popup_trans_pane_g3

0xd6a5,	// (0x000b776d) bg_popup_trans_pane_g4

0xd6ad,	// (0x000b7775) bg_popup_trans_pane_g5

0xd6b5,	// (0x000b777d) bg_popup_trans_pane_g6

0xd6bd,	// (0x000b7785) bg_popup_trans_pane_g7

0xd6c5,	// (0x000b778d) bg_popup_trans_pane_g8

0xab74,	// (0x000b4c3c) bg_popup_trans_pane_g9

0x0008,

0xf933,	// (0x000b99fb) bg_popup_trans_pane_g

0xd6cd,	// (0x000b7795) cell_image3_tool_bar_pane_ParamLimits

0xd6cd,	// (0x000b7795) cell_image3_tool_bar_pane

0xcc28,	// (0x000b6cf0) cell_image3_tool_bar_pane_g1

0x93ac,	// (0x000b3474) bg_popup_trans_pane_cp1

0xd6e1,	// (0x000b77a9) popup_image3_note_pane_t1

0xd6ef,	// (0x000b77b7) popup_image3_note_pane_t2

0xd6fd,	// (0x000b77c5) popup_image3_note_pane_t3

0x0002,

0xf946,	// (0x000b9a0e) popup_image3_note_pane_t

0xd70b,	// (0x000b77d3) popup_image3_note_pane_t3_copy1

0x5e79,	// (0x000aff41) bg_myfav_hc_instruction_pane_ParamLimits

0x5e79,	// (0x000aff41) bg_myfav_hc_instruction_pane

0x5e8f,	// (0x000aff57) cell_myfav_contact_pane_ParamLimits

0x5e8f,	// (0x000aff57) cell_myfav_contact_pane

0x5ead,	// (0x000aff75) cell_myfav_contact_pane_cp1_ParamLimits

0x5ead,	// (0x000aff75) cell_myfav_contact_pane_cp1

0x5ec5,	// (0x000aff8d) cell_myfav_contact_pane_cp2_ParamLimits

0x5ec5,	// (0x000aff8d) cell_myfav_contact_pane_cp2

0x5edd,	// (0x000affa5) cell_myfav_contact_pane_cp3_ParamLimits

0x5edd,	// (0x000affa5) cell_myfav_contact_pane_cp3

0x5ef4,	// (0x000affbc) cell_myfav_contact_pane_cp4_ParamLimits

0x5ef4,	// (0x000affbc) cell_myfav_contact_pane_cp4

0x5f0c,	// (0x000affd4) cell_myfav_contact_pane_cp5_ParamLimits

0x5f0c,	// (0x000affd4) cell_myfav_contact_pane_cp5

0x5f20,	// (0x000affe8) cell_myfav_contact_pane_cp6_ParamLimits

0x5f20,	// (0x000affe8) cell_myfav_contact_pane_cp6

0x5f36,	// (0x000afffe) cell_myfav_contact_pane_cp7_ParamLimits

0x5f36,	// (0x000afffe) cell_myfav_contact_pane_cp7

0xd719,	// (0x000b77e1) listscroll_gen_pane_cp05

0x5f50,	// (0x000b0018) main_myfav_hc_pane_g1_ParamLimits

0x5f50,	// (0x000b0018) main_myfav_hc_pane_g1

0x5f6a,	// (0x000b0032) main_myfav_hc_pane_g2_ParamLimits

0x5f6a,	// (0x000b0032) main_myfav_hc_pane_g2

0x0002,

0xf94d,	// (0x000b9a15) main_myfav_hc_pane_g_ParamLimits

0xf94d,	// (0x000b9a15) main_myfav_hc_pane_g

0x5f9c,	// (0x000b0064) main_myfav_hc_pane_t1_ParamLimits

0x5f9c,	// (0x000b0064) main_myfav_hc_pane_t1

0xd722,	// (0x000b77ea) main_myfav_hc_pane_t2_ParamLimits

0xd722,	// (0x000b77ea) main_myfav_hc_pane_t2

0xd734,	// (0x000b77fc) main_myfav_hc_pane_t3_ParamLimits

0xd734,	// (0x000b77fc) main_myfav_hc_pane_t3

0x5fb3,	// (0x000b007b) main_myfav_hc_pane_t4_ParamLimits

0x5fb3,	// (0x000b007b) main_myfav_hc_pane_t4

0x0004,

0xf954,	// (0x000b9a1c) main_myfav_hc_pane_t_ParamLimits

0xf954,	// (0x000b9a1c) main_myfav_hc_pane_t

0xcc28,	// (0x000b6cf0) bg_myfav_hc_instruction_pane_g1

0xd746,	// (0x000b780e) cell_myfav_contact_pane_g1_ParamLimits

0xd746,	// (0x000b780e) cell_myfav_contact_pane_g1

0xd746,	// (0x000b780e) cell_myfav_contact_pane_g2_ParamLimits

0xd746,	// (0x000b780e) cell_myfav_contact_pane_g2

0xd752,	// (0x000b781a) cell_myfav_contact_pane_g3_ParamLimits

0xd752,	// (0x000b781a) cell_myfav_contact_pane_g3

0xceed,	// (0x000b6fb5) cell_myfav_contact_pane_g4_ParamLimits

0xceed,	// (0x000b6fb5) cell_myfav_contact_pane_g4

0xd75f,	// (0x000b7827) cell_myfav_contact_pane_g5_ParamLimits

0xd75f,	// (0x000b7827) cell_myfav_contact_pane_g5

0x0004,

0xf95f,	// (0x000b9a27) cell_myfav_contact_pane_g_ParamLimits

0xf95f,	// (0x000b9a27) cell_myfav_contact_pane_g

0x5f84,	// (0x000b004c) main_myfav_hc_pane_g3_ParamLimits

0x5f84,	// (0x000b004c) main_myfav_hc_pane_g3

0x02cd,	// (0x000aa395) popup_adpt_find_window

0x5fdb,	// (0x000b00a3) afind_page_pane_ParamLimits

0x5fdb,	// (0x000b00a3) afind_page_pane

0x5ff0,	// (0x000b00b8) aid_size_cell_afind_ParamLimits

0x5ff0,	// (0x000b00b8) aid_size_cell_afind

0x600e,	// (0x000b00d6) bg_popup_sub_pane_cp09_ParamLimits

0x600e,	// (0x000b00d6) bg_popup_sub_pane_cp09

0x601b,	// (0x000b00e3) find_pane_cp01_ParamLimits

0x601b,	// (0x000b00e3) find_pane_cp01

0xd76b,	// (0x000b7833) grid_afind_control_pane_ParamLimits

0xd76b,	// (0x000b7833) grid_afind_control_pane

0x6028,	// (0x000b00f0) grid_afind_pane_ParamLimits

0x6028,	// (0x000b00f0) grid_afind_pane

0x6047,	// (0x000b010f) cell_afind_pane_ParamLimits

0x6047,	// (0x000b010f) cell_afind_pane

0xcc28,	// (0x000b6cf0) afind_page_pane_g1

0x60a8,	// (0x000b0170) afind_page_pane_g2

0x60b1,	// (0x000b0179) afind_page_pane_g3

0x0002,

0xf96a,	// (0x000b9a32) afind_page_pane_g

0x60ba,	// (0x000b0182) afind_page_pane_t1

0xd77f,	// (0x000b7847) cell_afind_grid_control_pane_ParamLimits

0xd77f,	// (0x000b7847) cell_afind_grid_control_pane

0xd533,	// (0x000b75fb) bg_button_pane_cp69_ParamLimits

0xd533,	// (0x000b75fb) bg_button_pane_cp69

0x60da,	// (0x000b01a2) cell_afind_pane_g1_ParamLimits

0x60da,	// (0x000b01a2) cell_afind_pane_g1

0x60e7,	// (0x000b01af) cell_afind_pane_t1_ParamLimits

0x60e7,	// (0x000b01af) cell_afind_pane_t1

0xa4d7,	// (0x000b459f) bg_button_pane_cp72

0xd78e,	// (0x000b7856) cell_afind_grid_control_pane_g1

0x313c,	// (0x000ad204) aid_image_placing_area_ParamLimits

0x313c,	// (0x000ad204) aid_image_placing_area

0xd201,	// (0x000b72c9) field_vitu_entry_pane_g1_ParamLimits

0xd201,	// (0x000b72c9) field_vitu_entry_pane_g1

0xd20d,	// (0x000b72d5) field_vitu_entry_pane_g2_ParamLimits

0xd20d,	// (0x000b72d5) field_vitu_entry_pane_g2

0x0001,

0xf81b,	// (0x000b98e3) field_vitu_entry_pane_g_ParamLimits

0xf81b,	// (0x000b98e3) field_vitu_entry_pane_g

0x5279,	// (0x000af341) cell_vitu_itu_pane_g1_ParamLimits

0x52c9,	// (0x000af391) cell_vitu_itu_pane_t3_ParamLimits

0x52c9,	// (0x000af391) cell_vitu_itu_pane_t3

0xd4e3,	// (0x000b75ab) mp4_progress_pane_t1_ParamLimits

0xd4fc,	// (0x000b75c4) mp4_progress_pane_t2_ParamLimits

0xf8b0,	// (0x000b9978) mp4_progress_pane_t_ParamLimits

0xd515,	// (0x000b75dd) mup_progress_pane_cp04_ParamLimits

0x5fc7,	// (0x000b008f) main_myfav_hc_pane_t5_ParamLimits

0x5fc7,	// (0x000b008f) main_myfav_hc_pane_t5

0x93d2,	// (0x000b349a) aid_zoom_text_primary

0x02cd,	// (0x000aa395) popup_adpt_find_window_ParamLimits

0x9424,	// (0x000b34ec) main_cam_set_pane

0x59f6,	// (0x000afabe) cam4_zoom_pane_ParamLimits

0x59f6,	// (0x000afabe) cam4_zoom_pane

0x60f9,	// (0x000b01c1) main_cam_set_pane_g1_ParamLimits

0x60f9,	// (0x000b01c1) main_cam_set_pane_g1

0x6107,	// (0x000b01cf) main_cam_set_pane_g2_ParamLimits

0x6107,	// (0x000b01cf) main_cam_set_pane_g2

0x0001,

0xf971,	// (0x000b9a39) main_cam_set_pane_g_ParamLimits

0xf971,	// (0x000b9a39) main_cam_set_pane_g

0x6128,	// (0x000b01f0) main_cam_set_pane_t1_ParamLimits

0x6128,	// (0x000b01f0) main_cam_set_pane_t1

0x6143,	// (0x000b020b) main_cset_listscroll_pane_ParamLimits

0x6143,	// (0x000b020b) main_cset_listscroll_pane

0x6163,	// (0x000b022b) main_cset_slider_pane_ParamLimits

0x6163,	// (0x000b022b) main_cset_slider_pane

0xd79f,	// (0x000b7867) main_cset_list_pane_ParamLimits

0xd79f,	// (0x000b7867) main_cset_list_pane

0xd7af,	// (0x000b7877) scroll_pane_cp028

0x6189,	// (0x000b0251) aid_area_touch_slider

0x61a5,	// (0x000b026d) cset_slider_pane

0x61cf,	// (0x000b0297) main_cset_slider_pane_g1

0x61e4,	// (0x000b02ac) main_cset_slider_pane_g2

0x0011,

0xf976,	// (0x000b9a3e) main_cset_slider_pane_g

0xd7e8,	// (0x000b78b0) main_cset_slider_pane_t1

0x62a0,	// (0x000b0368) main_cset_slider_pane_t2

0x62ba,	// (0x000b0382) main_cset_slider_pane_t3

0x62d4,	// (0x000b039c) main_cset_slider_pane_t4

0x62ee,	// (0x000b03b6) main_cset_slider_pane_t5

0x6308,	// (0x000b03d0) main_cset_slider_pane_t6

0x631d,	// (0x000b03e5) main_cset_slider_pane_t7

0x000e,

0xf99b,	// (0x000b9a63) main_cset_slider_pane_t

0x6421,	// (0x000b04e9) cset_list_set_pane_ParamLimits

0x6421,	// (0x000b04e9) cset_list_set_pane

0x6434,	// (0x000b04fc) aid_position_infowindow_above

0x643c,	// (0x000b0504) aid_position_infowindow_below

0x6444,	// (0x000b050c) cset_list_set_pane_g1_ParamLimits

0x6444,	// (0x000b050c) cset_list_set_pane_g1

0xa596,	// (0x000b465e) cset_list_set_pane_g3_ParamLimits

0xa596,	// (0x000b465e) cset_list_set_pane_g3

0x0001,

0xf9ba,	// (0x000b9a82) cset_list_set_pane_g_ParamLimits

0xf9ba,	// (0x000b9a82) cset_list_set_pane_g

0xa5a5,	// (0x000b466d) cset_list_set_pane_t1_ParamLimits

0xa5a5,	// (0x000b466d) cset_list_set_pane_t1

0xa4f7,	// (0x000b45bf) list_highlight_pane_cp021_ParamLimits

0xa4f7,	// (0x000b45bf) list_highlight_pane_cp021

0xb546,	// (0x000b560e) cset_slider_pane_g1

0xb558,	// (0x000b5620) cset_slider_pane_g2

0xb54f,	// (0x000b5617) cset_slider_pane_g3

0x0002,

0xf9bf,	// (0x000b9a87) cset_slider_pane_g

0x9db2,	// (0x000b3e7a) aid_area_touch_cam4_zoom

0x9dba,	// (0x000b3e82) cam4_zoom_cont_pane

0x9dc2,	// (0x000b3e8a) cam4_zoom_pane_g1

0x9dca,	// (0x000b3e92) cam4_zoom_pane_g2

0x6450,	// (0x000b0518) cam4_zoom_pane_g3

0x0002,

0xf9c6,	// (0x000b9a8e) cam4_zoom_pane_g

0x9dd2,	// (0x000b3e9a) cam4_zoom_cont_pane_g1

0x9ddb,	// (0x000b3ea3) cam4_zoom_cont_pane_g2

0x9de4,	// (0x000b3eac) cam4_zoom_cont_pane_g3

0x0002,

0xf9cd,	// (0x000b9a95) cam4_zoom_cont_pane_g

0x58b6,	// (0x000af97e) call4_image_pane_ParamLimits

0x58b6,	// (0x000af97e) call4_image_pane

0xd53f,	// (0x000b7607) call4_windows_conf_pane_ParamLimits

0xd57e,	// (0x000b7646) popup_call4_audio_in_window_ParamLimits

0xd57e,	// (0x000b7646) popup_call4_audio_in_window

0x93ac,	// (0x000b3474) bg_popup_call2_act_pane_cp02

0xd606,	// (0x000b76ce) call4_list_conf_pane

0xcc28,	// (0x000b6cf0) call4_image_pane_g1

0xcc28,	// (0x000b6cf0) call4_image_pane_g2

0x0001,

0xf6e1,	// (0x000b97a9) call4_image_pane_g

0xd888,	// (0x000b7950) list_single_graphic_popup_conf4_pane_ParamLimits

0xd888,	// (0x000b7950) list_single_graphic_popup_conf4_pane

0x93ac,	// (0x000b3474) list_highlight_pane_cp022

0xd89b,	// (0x000b7963) list_single_graphic_popup_conf4_pane_g1

0xb0da,	// (0x000b51a2) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9d4,	// (0x000b9a9c) list_single_graphic_popup_conf4_pane_g

0xd8a3,	// (0x000b796b) list_single_graphic_popup_conf4_pane_t1

0x14b8,	// (0x000ab580) popup_vtel_slider_window_ParamLimits

0x14b8,	// (0x000ab580) popup_vtel_slider_window

0xd521,	// (0x000b75e9) dialer2_ne_pane_t2_ParamLimits

0xd521,	// (0x000b75e9) dialer2_ne_pane_t2

0x0001,

0xf8b5,	// (0x000b997d) dialer2_ne_pane_t_ParamLimits

0xf8b5,	// (0x000b997d) dialer2_ne_pane_t

0xca0b,	// (0x000b6ad3) bg_popup_sub_pane_cp010_ParamLimits

0xca0b,	// (0x000b6ad3) bg_popup_sub_pane_cp010

0x6458,	// (0x000b0520) popup_vtel_slider_window_g1_ParamLimits

0x6458,	// (0x000b0520) popup_vtel_slider_window_g1

0x646b,	// (0x000b0533) popup_vtel_slider_window_g2_ParamLimits

0x646b,	// (0x000b0533) popup_vtel_slider_window_g2

0x0003,

0xf9d9,	// (0x000b9aa1) popup_vtel_slider_window_g_ParamLimits

0xf9d9,	// (0x000b9aa1) popup_vtel_slider_window_g

0x64c1,	// (0x000b0589) vtel_slider_pane_ParamLimits

0x64c1,	// (0x000b0589) vtel_slider_pane

0x64e3,	// (0x000b05ab) vtel_slider_pane_g1_ParamLimits

0x64e3,	// (0x000b05ab) vtel_slider_pane_g1

0x64f7,	// (0x000b05bf) vtel_slider_pane_g2_ParamLimits

0x64f7,	// (0x000b05bf) vtel_slider_pane_g2

0x650f,	// (0x000b05d7) vtel_slider_pane_g3_ParamLimits

0x650f,	// (0x000b05d7) vtel_slider_pane_g3

0x64e3,	// (0x000b05ab) vtel_slider_pane_g4_ParamLimits

0x64e3,	// (0x000b05ab) vtel_slider_pane_g4

0x6525,	// (0x000b05ed) vtel_slider_pane_g5_ParamLimits

0x6525,	// (0x000b05ed) vtel_slider_pane_g5

0x0004,

0xf9e2,	// (0x000b9aaa) vtel_slider_pane_g_ParamLimits

0xf9e2,	// (0x000b9aaa) vtel_slider_pane_g

0x9424,	// (0x000b34ec) main_gallery2_pane

0x5bf6,	// (0x000afcbe) aid_size_row_itut2_dropdow_list_ParamLimits

0x5bf6,	// (0x000afcbe) aid_size_row_itut2_dropdow_list

0x5c82,	// (0x000afd4a) grid_vitu2_function_top_pane_ParamLimits

0x5c82,	// (0x000afd4a) grid_vitu2_function_top_pane

0x5ce7,	// (0x000afdaf) popup_vitu2_dropdown_list_window_ParamLimits

0x5ce7,	// (0x000afdaf) popup_vitu2_dropdown_list_window

0x5d10,	// (0x000afdd8) popup_vitu2_match_list_window

0x6549,	// (0x000b0611) cell_vitu2_function_top_pane_ParamLimits

0x6549,	// (0x000b0611) cell_vitu2_function_top_pane

0x6567,	// (0x000b062f) cell_vitu2_function_top_pane_cp01_ParamLimits

0x6567,	// (0x000b062f) cell_vitu2_function_top_pane_cp01

0x6585,	// (0x000b064d) cell_vitu2_function_top_wide_pane_ParamLimits

0x6585,	// (0x000b064d) cell_vitu2_function_top_wide_pane

0x9424,	// (0x000b34ec) bg_button_pane_cp012

0x65a3,	// (0x000b066b) cell_vitu2_function_top_pane_g1

0x9ded,	// (0x000b3eb5) bg_button_pane_cp013_ParamLimits

0x9ded,	// (0x000b3eb5) bg_button_pane_cp013

0x65b7,	// (0x000b067f) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x65b7,	// (0x000b067f) cell_vitu2_function_top_wide_pane_g1

0x9424,	// (0x000b34ec) bg_popup_sub_pane_cp20

0x65cf,	// (0x000b0697) list_vitu2_match_list_pane

0xd695,	// (0x000b775d) bg_popup_sub_pane_cp20_g1

0xd69d,	// (0x000b7765) bg_popup_sub_pane_cp20_g2

0xab94,	// (0x000b4c5c) bg_popup_sub_pane_cp20_g3

0xd6a5,	// (0x000b776d) bg_popup_sub_pane_cp20_g4

0xab74,	// (0x000b4c3c) bg_popup_sub_pane_cp20_g5

0xd8b9,	// (0x000b7981) bg_popup_sub_pane_cp20_g6

0xd6b5,	// (0x000b777d) bg_popup_sub_pane_cp20_g7

0xd6bd,	// (0x000b7785) bg_popup_sub_pane_cp20_g8

0xd6c5,	// (0x000b778d) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9ed,	// (0x000b9ab5) bg_popup_sub_pane_cp20_g

0x9e09,	// (0x000b3ed1) list_vitu2_match_list_item_pane_ParamLimits

0x9e09,	// (0x000b3ed1) list_vitu2_match_list_item_pane

0x9e1b,	// (0x000b3ee3) list_vitu2_match_list_item_pane_t1

0x9432,	// (0x000b34fa) bg_popup_sub_pane_cp21

0x9e29,	// (0x000b3ef1) grid_vitu2_dropdown_list_pane

0x6637,	// (0x000b06ff) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x6637,	// (0x000b06ff) cell_vitu2_dropdown_list_char_pane

0x6658,	// (0x000b0720) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x6658,	// (0x000b0720) cell_vitu2_dropdown_list_ctrl_pane

0xd8c1,	// (0x000b7989) cell_vitu2_dropdown_list_char_pane_g1

0xd8ca,	// (0x000b7992) cell_vitu2_dropdown_list_char_pane_g2

0xd8d3,	// (0x000b799b) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa0a,	// (0x000b9ad2) cell_vitu2_dropdown_list_char_pane_g

0x6684,	// (0x000b074c) cell_vitu2_dropdown_list_char_pane_t1

0x6692,	// (0x000b075a) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x6692,	// (0x000b075a) cell_vitu2_dropdown_list_ctrl_pane_g1

0x66a2,	// (0x000b076a) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x66a2,	// (0x000b076a) cell_vitu2_dropdown_list_ctrl_pane_g2

0x66b3,	// (0x000b077b) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x66b3,	// (0x000b077b) cell_vitu2_dropdown_list_ctrl_pane_g3

0x66c3,	// (0x000b078b) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x66c3,	// (0x000b078b) cell_vitu2_dropdown_list_ctrl_pane_g4

0x9cd7,	// (0x000b3d9f) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x9cd7,	// (0x000b3d9f) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa11,	// (0x000b9ad9) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa11,	// (0x000b9ad9) cell_vitu2_dropdown_list_ctrl_pane_g

0x66df,	// (0x000b07a7) aid_size_cell_gallery2_ParamLimits

0x66df,	// (0x000b07a7) aid_size_cell_gallery2

0x66fd,	// (0x000b07c5) grid_gallery2_pane_ParamLimits

0x66fd,	// (0x000b07c5) grid_gallery2_pane

0x6717,	// (0x000b07df) scroll_pane_cp029_ParamLimits

0x6717,	// (0x000b07df) scroll_pane_cp029

0x6723,	// (0x000b07eb) cell_gallery2_pane_ParamLimits

0x6723,	// (0x000b07eb) cell_gallery2_pane

0xd8dc,	// (0x000b79a4) cell_gallery2_pane_g2

0x677f,	// (0x000b0847) cell_gallery2_pane_g3

0xd8e4,	// (0x000b79ac) cell_gallery2_pane_g4

0xd8ec,	// (0x000b79b4) cell_gallery2_pane_g5

0xb3b7,	// (0x000b547f) grid_highlight_pane_cp10

0x5d10,	// (0x000afdd8) popup_vitu2_match_list_window_ParamLimits

0x5d25,	// (0x000afded) popup_vitu2_query_window_ParamLimits

0x5d25,	// (0x000afded) popup_vitu2_query_window

0x9432,	// (0x000b34fa) bg_vitu2_candi_button_pane

0xd8c1,	// (0x000b7989) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd8ca,	// (0x000b7992) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd8d3,	// (0x000b799b) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x6787,	// (0x000b084f) bg_button_pane_cp015

0x679b,	// (0x000b0863) bg_button_pane_cp016

0x67ae,	// (0x000b0876) bg_button_pane_cp017

0xc81e,	// (0x000b68e6) bg_popup_sub_pane_cp22

0xd8f4,	// (0x000b79bc) popup_vitu2_query_window_g1

0x67f3,	// (0x000b08bb) popup_vitu2_query_window_g2

0x0002,

0xfa1c,	// (0x000b9ae4) popup_vitu2_query_window_g

0x6812,	// (0x000b08da) popup_vitu2_query_window_t1_ParamLimits

0x6812,	// (0x000b08da) popup_vitu2_query_window_t1

0x6847,	// (0x000b090f) popup_vitu2_query_window_t2_ParamLimits

0x6847,	// (0x000b090f) popup_vitu2_query_window_t2

0x6859,	// (0x000b0921) popup_vitu2_query_window_t3_ParamLimits

0x6859,	// (0x000b0921) popup_vitu2_query_window_t3

0x6881,	// (0x000b0949) popup_vitu2_query_window_t4_ParamLimits

0x6881,	// (0x000b0949) popup_vitu2_query_window_t4

0x68a2,	// (0x000b096a) popup_vitu2_query_window_t5_ParamLimits

0x68a2,	// (0x000b096a) popup_vitu2_query_window_t5

0x0006,

0xfa23,	// (0x000b9aeb) popup_vitu2_query_window_t_ParamLimits

0xfa23,	// (0x000b9aeb) popup_vitu2_query_window_t

0xd797,	// (0x000b785f) main_cset_text_pane

0x6189,	// (0x000b0251) aid_area_touch_slider_ParamLimits

0x61a5,	// (0x000b026d) cset_slider_pane_ParamLimits

0x61cf,	// (0x000b0297) main_cset_slider_pane_g1_ParamLimits

0x61e4,	// (0x000b02ac) main_cset_slider_pane_g2_ParamLimits

0xd7b8,	// (0x000b7880) main_cset_slider_pane_g3_ParamLimits

0xd7b8,	// (0x000b7880) main_cset_slider_pane_g3

0x61f9,	// (0x000b02c1) main_cset_slider_pane_g4_ParamLimits

0x61f9,	// (0x000b02c1) main_cset_slider_pane_g4

0x6208,	// (0x000b02d0) main_cset_slider_pane_g5_ParamLimits

0x6208,	// (0x000b02d0) main_cset_slider_pane_g5

0x6214,	// (0x000b02dc) main_cset_slider_pane_g6_ParamLimits

0x6214,	// (0x000b02dc) main_cset_slider_pane_g6

0xf976,	// (0x000b9a3e) main_cset_slider_pane_g_ParamLimits

0xd7e8,	// (0x000b78b0) main_cset_slider_pane_t1_ParamLimits

0x62a0,	// (0x000b0368) main_cset_slider_pane_t2_ParamLimits

0x62ba,	// (0x000b0382) main_cset_slider_pane_t3_ParamLimits

0x62d4,	// (0x000b039c) main_cset_slider_pane_t4_ParamLimits

0x62ee,	// (0x000b03b6) main_cset_slider_pane_t5_ParamLimits

0x6308,	// (0x000b03d0) main_cset_slider_pane_t6_ParamLimits

0x631d,	// (0x000b03e5) main_cset_slider_pane_t7_ParamLimits

0x6347,	// (0x000b040f) main_cset_slider_pane_t8_ParamLimits

0x6347,	// (0x000b040f) main_cset_slider_pane_t8

0x636f,	// (0x000b0437) main_cset_slider_pane_t9_ParamLimits

0x636f,	// (0x000b0437) main_cset_slider_pane_t9

0x6397,	// (0x000b045f) main_cset_slider_pane_t10_ParamLimits

0x6397,	// (0x000b045f) main_cset_slider_pane_t10

0x63bf,	// (0x000b0487) main_cset_slider_pane_t11_ParamLimits

0x63bf,	// (0x000b0487) main_cset_slider_pane_t11

0x63e7,	// (0x000b04af) main_cset_slider_pane_t12_ParamLimits

0x63e7,	// (0x000b04af) main_cset_slider_pane_t12

0x6404,	// (0x000b04cc) main_cset_slider_pane_t13_ParamLimits

0x6404,	// (0x000b04cc) main_cset_slider_pane_t13

0xf99b,	// (0x000b9a63) main_cset_slider_pane_t_ParamLimits

0x93ac,	// (0x000b3474) bg_popup_sub_pane_cp011

0xd900,	// (0x000b79c8) main_cset_text_pane_g1

0xd908,	// (0x000b79d0) main_cset_text_pane_t1

0xd916,	// (0x000b79de) main_cset_text_pane_t2

0xd924,	// (0x000b79ec) main_cset_text_pane_t3

0xd932,	// (0x000b79fa) main_cset_text_pane_t4

0xd940,	// (0x000b7a08) main_cset_text_pane_t5

0xd94e,	// (0x000b7a16) main_cset_text_pane_t6

0xd95c,	// (0x000b7a24) main_cset_text_pane_t7

0x0006,

0xfa32,	// (0x000b9afa) main_cset_text_pane_t

0x9432,	// (0x000b34fa) main_cam4_burst_pane

0x9432,	// (0x000b34fa) main_cam5_pane

0x60c8,	// (0x000b0190) bg_button_pane_cp019

0x60d1,	// (0x000b0199) bg_button_pane_cp020

0xd7c4,	// (0x000b788c) main_cset_slider_pane_g7_ParamLimits

0xd7c4,	// (0x000b788c) main_cset_slider_pane_g7

0xd7d0,	// (0x000b7898) main_cset_slider_pane_g8_ParamLimits

0xd7d0,	// (0x000b7898) main_cset_slider_pane_g8

0x6228,	// (0x000b02f0) main_cset_slider_pane_g9_ParamLimits

0x6228,	// (0x000b02f0) main_cset_slider_pane_g9

0x6234,	// (0x000b02fc) main_cset_slider_pane_g10_ParamLimits

0x6234,	// (0x000b02fc) main_cset_slider_pane_g10

0x6240,	// (0x000b0308) main_cset_slider_pane_g11_ParamLimits

0x6240,	// (0x000b0308) main_cset_slider_pane_g11

0x624c,	// (0x000b0314) main_cset_slider_pane_g12_ParamLimits

0x624c,	// (0x000b0314) main_cset_slider_pane_g12

0x6258,	// (0x000b0320) main_cset_slider_pane_g13_ParamLimits

0x6258,	// (0x000b0320) main_cset_slider_pane_g13

0x6264,	// (0x000b032c) main_cset_slider_pane_g14_ParamLimits

0x6264,	// (0x000b032c) main_cset_slider_pane_g14

0x6270,	// (0x000b0338) main_cset_slider_pane_g15_ParamLimits

0x6270,	// (0x000b0338) main_cset_slider_pane_g15

0xd816,	// (0x000b78de) main_cset_slider_pane_t14_ParamLimits

0xd816,	// (0x000b78de) main_cset_slider_pane_t14

0xd84f,	// (0x000b7917) main_cset_slider_pane_t15_ParamLimits

0xd84f,	// (0x000b7917) main_cset_slider_pane_t15

0x6919,	// (0x000b09e1) aid_cam4_burst_size_cell_ParamLimits

0x6919,	// (0x000b09e1) aid_cam4_burst_size_cell

0x6939,	// (0x000b0a01) grid_cam4_burst_pane_ParamLimits

0x6939,	// (0x000b0a01) grid_cam4_burst_pane

0x6971,	// (0x000b0a39) linegrid_cam4_burst_pane_ParamLimits

0x6971,	// (0x000b0a39) linegrid_cam4_burst_pane

0xd96a,	// (0x000b7a32) scroll_pane_cp30_ParamLimits

0xd96a,	// (0x000b7a32) scroll_pane_cp30

0x6997,	// (0x000b0a5f) cell_cam4_burst_pane_ParamLimits

0x6997,	// (0x000b0a5f) cell_cam4_burst_pane

0xd976,	// (0x000b7a3e) linegrid_cam4_burst_pane_g1_ParamLimits

0xd976,	// (0x000b7a3e) linegrid_cam4_burst_pane_g1

0x69e4,	// (0x000b0aac) linegrid_cam4_burst_pane_g2_ParamLimits

0x69e4,	// (0x000b0aac) linegrid_cam4_burst_pane_g2

0xd983,	// (0x000b7a4b) linegrid_cam4_burst_pane_g3_ParamLimits

0xd983,	// (0x000b7a4b) linegrid_cam4_burst_pane_g3

0x0002,

0xfa41,	// (0x000b9b09) linegrid_cam4_burst_pane_g_ParamLimits

0xfa41,	// (0x000b9b09) linegrid_cam4_burst_pane_g

0x69f5,	// (0x000b0abd) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x69f5,	// (0x000b0abd) linegrid_cam4_burst_pane_g3_copy1

0xd990,	// (0x000b7a58) linegrid_cam4_burst_pane_g4_ParamLimits

0xd990,	// (0x000b7a58) linegrid_cam4_burst_pane_g4

0x6a0f,	// (0x000b0ad7) linegrid_cam4_burst_pane_g5_ParamLimits

0x6a0f,	// (0x000b0ad7) linegrid_cam4_burst_pane_g5

0x6a20,	// (0x000b0ae8) linegrid_cam4_burst_pane_g6_ParamLimits

0x6a20,	// (0x000b0ae8) linegrid_cam4_burst_pane_g6

0xd99d,	// (0x000b7a65) linegrid_cam4_burst_pane_g7_ParamLimits

0xd99d,	// (0x000b7a65) linegrid_cam4_burst_pane_g7

0x6a37,	// (0x000b0aff) cell_cam4_burst_pane_g1

0xd9b6,	// (0x000b7a7e) main_cam5_pane_t1_ParamLimits

0xd9b6,	// (0x000b7a7e) main_cam5_pane_t1

0xd9c8,	// (0x000b7a90) main_cam5_pane_t2_ParamLimits

0xd9c8,	// (0x000b7a90) main_cam5_pane_t2

0xd9da,	// (0x000b7aa2) main_cam5_pane_t3_ParamLimits

0xd9da,	// (0x000b7aa2) main_cam5_pane_t3

0xd9ec,	// (0x000b7ab4) main_cam5_pane_t4_ParamLimits

0xd9ec,	// (0x000b7ab4) main_cam5_pane_t4

0xda04,	// (0x000b7acc) main_cam5_pane_t5_ParamLimits

0xda04,	// (0x000b7acc) main_cam5_pane_t5

0xda18,	// (0x000b7ae0) main_cam5_pane_t6_ParamLimits

0xda18,	// (0x000b7ae0) main_cam5_pane_t6

0xda2c,	// (0x000b7af4) main_cam5_pane_t7_ParamLimits

0xda2c,	// (0x000b7af4) main_cam5_pane_t7

0xda3e,	// (0x000b7b06) main_cam5_pane_t8_ParamLimits

0xda3e,	// (0x000b7b06) main_cam5_pane_t8

0xda5a,	// (0x000b7b22) main_cam5_pane_t9_ParamLimits

0xda5a,	// (0x000b7b22) main_cam5_pane_t9

0xda6c,	// (0x000b7b34) main_cam5_pane_t10_ParamLimits

0xda6c,	// (0x000b7b34) main_cam5_pane_t10

0xda7e,	// (0x000b7b46) main_cam5_pane_t11_ParamLimits

0xda7e,	// (0x000b7b46) main_cam5_pane_t11

0xda90,	// (0x000b7b58) main_cam5_pane_t12_ParamLimits

0xda90,	// (0x000b7b58) main_cam5_pane_t12

0xdaa5,	// (0x000b7b6d) main_cam5_pane_t13_ParamLimits

0xdaa5,	// (0x000b7b6d) main_cam5_pane_t13

0x000c,

0xfa4d,	// (0x000b9b15) main_cam5_pane_t_ParamLimits

0xfa4d,	// (0x000b9b15) main_cam5_pane_t

0x034f,	// (0x000aa417) popup_scut_keymap_window_ParamLimits

0x034f,	// (0x000aa417) popup_scut_keymap_window

0x6a4c,	// (0x000b0b14) aid_size_cell_brow_shortcut

0xb3b7,	// (0x000b547f) bg_popup_window_pane_cp010

0x6a58,	// (0x000b0b20) grid_scut_pane

0x6a64,	// (0x000b0b2c) cell_scut_pane_ParamLimits

0x6a64,	// (0x000b0b2c) cell_scut_pane

0x6a7b,	// (0x000b0b43) cell_scut_pane_g1

0xdac2,	// (0x000b7b8a) cell_scut_pane_t1

0xdad1,	// (0x000b7b99) cell_scut_pane_t2

0x6a84,	// (0x000b0b4c) cell_scut_pane_t3

0x0002,

0xfa68,	// (0x000b9b30) cell_scut_pane_t

0x4762,	// (0x000ae82a) main_mup3_pane_g8_ParamLimits

0x4762,	// (0x000ae82a) main_mup3_pane_g8

0x5c0e,	// (0x000afcd6) area_vitu2_query_pane_ParamLimits

0x5c0e,	// (0x000afcd6) area_vitu2_query_pane

0x67c1,	// (0x000b0889) input_focus_pane_cp08

0xdae0,	// (0x000b7ba8) area_vitu2_query_pane_g1

0x6a92,	// (0x000b0b5a) area_vitu2_query_pane_g2

0x0001,

0xfa6f,	// (0x000b9b37) area_vitu2_query_pane_g

0x6aa3,	// (0x000b0b6b) area_vitu2_query_pane_t1_ParamLimits

0x6aa3,	// (0x000b0b6b) area_vitu2_query_pane_t1

0x6ab7,	// (0x000b0b7f) area_vitu2_query_pane_t2_ParamLimits

0x6ab7,	// (0x000b0b7f) area_vitu2_query_pane_t2

0x6acb,	// (0x000b0b93) area_vitu2_query_pane_t3_ParamLimits

0x6acb,	// (0x000b0b93) area_vitu2_query_pane_t3

0xa5ba,	// (0x000b4682) area_vitu2_query_pane_t4_ParamLimits

0xa5ba,	// (0x000b4682) area_vitu2_query_pane_t4

0xa5e2,	// (0x000b46aa) area_vitu2_query_pane_t5_ParamLimits

0xa5e2,	// (0x000b46aa) area_vitu2_query_pane_t5

0xa60a,	// (0x000b46d2) area_vitu2_query_pane_t6_ParamLimits

0xa60a,	// (0x000b46d2) area_vitu2_query_pane_t6

0x0006,

0xfa74,	// (0x000b9b3c) area_vitu2_query_pane_t_ParamLimits

0xfa74,	// (0x000b9b3c) area_vitu2_query_pane_t

0x6af3,	// (0x000b0bbb) bg_button_pane_cp018

0x6b01,	// (0x000b0bc9) bg_button_pane_cp021

0x6b0d,	// (0x000b0bd5) bg_button_pane_cp022

0x6b1e,	// (0x000b0be6) input_focus_pane_cp09

0xb1fe,	// (0x000b52c6) aid_size_touch_mv_arrow_left

0xb229,	// (0x000b52f1) aid_size_touch_mv_arrow_right

0x6288,	// (0x000b0350) main_cset_slider_pane_g16_ParamLimits

0x6288,	// (0x000b0350) main_cset_slider_pane_g16

0x6294,	// (0x000b035c) main_cset_slider_pane_g17_ParamLimits

0x6294,	// (0x000b035c) main_cset_slider_pane_g17

0x6a37,	// (0x000b0aff) cell_cam4_burst_pane_g1_ParamLimits

0x93ac,	// (0x000b3474) compa_mode_pane

0x647b,	// (0x000b0543) popup_vtel_slider_window_g3_ParamLimits

0x647b,	// (0x000b0543) popup_vtel_slider_window_g3

0x6492,	// (0x000b055a) popup_vtel_slider_window_g4_ParamLimits

0x6492,	// (0x000b055a) popup_vtel_slider_window_g4

0x64a9,	// (0x000b0571) popup_vtel_slider_window_t1_ParamLimits

0x64a9,	// (0x000b0571) popup_vtel_slider_window_t1

0x9432,	// (0x000b34fa) main_cl_pane

0x9947,	// (0x000b3a0f) popup_imed_adjust2_window_ParamLimits

0xc81e,	// (0x000b68e6) bg_tb_trans_pane_cp05_ParamLimits

0xd12d,	// (0x000b71f5) popup_imed_adjust2_window_g1_ParamLimits

0xd13c,	// (0x000b7204) popup_imed_adjust2_window_g2_ParamLimits

0xd13c,	// (0x000b7204) popup_imed_adjust2_window_g2

0xd148,	// (0x000b7210) popup_imed_adjust2_window_g3_ParamLimits

0xd148,	// (0x000b7210) popup_imed_adjust2_window_g3

0x0002,

0xf7df,	// (0x000b98a7) popup_imed_adjust2_window_g_ParamLimits

0xf7df,	// (0x000b98a7) popup_imed_adjust2_window_g

0xd154,	// (0x000b721c) popup_imed_adjust2_window_t1_ParamLimits

0xd16c,	// (0x000b7234) slider_imed_adjust_pane_ParamLimits

0xd180,	// (0x000b7248) slider_imed_adjust_pane_g1_ParamLimits

0xd190,	// (0x000b7258) slider_imed_adjust_pane_g2_ParamLimits

0xd1a0,	// (0x000b7268) slider_imed_adjust_pane_g3_ParamLimits

0xd1b1,	// (0x000b7279) slider_imed_adjust_pane_g4_ParamLimits

0xf7e6,	// (0x000b98ae) slider_imed_adjust_pane_g_ParamLimits

0x5997,	// (0x000afa5f) aid_touch_area_cam4_ParamLimits

0x5997,	// (0x000afa5f) aid_touch_area_cam4

0x9cbb,	// (0x000b3d83) battery_pane_cp01

0x5a66,	// (0x000afb2e) main_camera4_pane_g6_ParamLimits

0x5a66,	// (0x000afb2e) main_camera4_pane_g6

0x5a90,	// (0x000afb58) main_camera4_pane_t2_ParamLimits

0x5a90,	// (0x000afb58) main_camera4_pane_t2

0x0001,

0xf8e9,	// (0x000b99b1) main_camera4_pane_t_ParamLimits

0xf8e9,	// (0x000b99b1) main_camera4_pane_t

0x5ac5,	// (0x000afb8d) aid_touch_area_vid4_ParamLimits

0x5ac5,	// (0x000afb8d) aid_touch_area_vid4

0x5b19,	// (0x000afbe1) main_video4_pane_g5_ParamLimits

0x5b19,	// (0x000afbe1) main_video4_pane_g5

0x5b3e,	// (0x000afc06) vid4_progress_pane_ParamLimits

0x5b3e,	// (0x000afc06) vid4_progress_pane

0xd7dc,	// (0x000b78a4) main_cset_slider_pane_g18_ParamLimits

0xd7dc,	// (0x000b78a4) main_cset_slider_pane_g18

0xd9aa,	// (0x000b7a72) cell_cam4_burst_pane_g2_ParamLimits

0xd9aa,	// (0x000b7a72) cell_cam4_burst_pane_g2

0x0001,

0xfa48,	// (0x000b9b10) cell_cam4_burst_pane_g_ParamLimits

0xfa48,	// (0x000b9b10) cell_cam4_burst_pane_g

0xa2b0,	// (0x000b4378) bg_cl_pane_ParamLimits

0xa2b0,	// (0x000b4378) bg_cl_pane

0x6b2f,	// (0x000b0bf7) cl_header_pane_ParamLimits

0x6b2f,	// (0x000b0bf7) cl_header_pane

0x6b43,	// (0x000b0c0b) cl_listscroll_pane_ParamLimits

0x6b43,	// (0x000b0c0b) cl_listscroll_pane

0xdaec,	// (0x000b7bb4) bg_cl_pane_g1

0xdaf4,	// (0x000b7bbc) bg_cl_pane_g2

0xdafc,	// (0x000b7bc4) bg_cl_pane_g3

0xdb04,	// (0x000b7bcc) bg_cl_pane_g4

0xdb0c,	// (0x000b7bd4) bg_cl_pane_g5

0xdb14,	// (0x000b7bdc) bg_cl_pane_g6

0xdb1c,	// (0x000b7be4) bg_cl_pane_g7

0xdb24,	// (0x000b7bec) bg_cl_pane_g8

0xdb2c,	// (0x000b7bf4) bg_cl_pane_g9

0x0008,

0xfa83,	// (0x000b9b4b) bg_cl_pane_g

0x6b53,	// (0x000b0c1b) aid_height_cl_leading_ParamLimits

0x6b53,	// (0x000b0c1b) aid_height_cl_leading

0x6b5f,	// (0x000b0c27) aid_height_cl_text_ParamLimits

0x6b5f,	// (0x000b0c27) aid_height_cl_text

0xa4f7,	// (0x000b45bf) bg_cl_header_pane_ParamLimits

0xa4f7,	// (0x000b45bf) bg_cl_header_pane

0x6b7e,	// (0x000b0c46) cl_header_pane_g1_ParamLimits

0x6b7e,	// (0x000b0c46) cl_header_pane_g1

0x6b94,	// (0x000b0c5c) cl_header_pane_t1_ParamLimits

0x6b94,	// (0x000b0c5c) cl_header_pane_t1

0xdb34,	// (0x000b7bfc) cl_list_pane

0xd7af,	// (0x000b7877) hc_scroll_pane_cp01

0xab74,	// (0x000b4c3c) bg_cl_header_pane_g1

0xd695,	// (0x000b775d) bg_cl_header_pane_g2

0xab94,	// (0x000b4c5c) bg_cl_header_pane_g3

0xd6a5,	// (0x000b776d) bg_cl_header_pane_g4

0xd69d,	// (0x000b7765) bg_cl_header_pane_g5

0xd8b9,	// (0x000b7981) bg_cl_header_pane_g6

0xd6bd,	// (0x000b7785) bg_cl_header_pane_g7

0xd6c5,	// (0x000b778d) bg_cl_header_pane_g8

0xd6b5,	// (0x000b777d) bg_cl_header_pane_g9

0x0008,

0xfa96,	// (0x000b9b5e) bg_cl_header_pane_g

0x6bad,	// (0x000b0c75) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x6bad,	// (0x000b0c75) hc_cl_list_double_graphic_heading_pane

0x6bbe,	// (0x000b0c86) hc_cl_list_single_graphic_pane_ParamLimits

0x6bbe,	// (0x000b0c86) hc_cl_list_single_graphic_pane

0x6bd7,	// (0x000b0c9f) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x6bd7,	// (0x000b0c9f) hc_cl_list_single_graphic_pane_g1

0x6be3,	// (0x000b0cab) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x6be3,	// (0x000b0cab) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaa9,	// (0x000b9b71) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaa9,	// (0x000b9b71) hc_cl_list_single_graphic_pane_g

0x6bf7,	// (0x000b0cbf) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x6bf7,	// (0x000b0cbf) hc_cl_list_single_graphic_pane_t1

0x6bd7,	// (0x000b0c9f) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x6bd7,	// (0x000b0c9f) hc_cl_list_double_graphic_heading_pane_g1

0x6c0c,	// (0x000b0cd4) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x6c0c,	// (0x000b0cd4) hc_cl_list_double_graphic_heading_pane_g2

0x6c20,	// (0x000b0ce8) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x6c20,	// (0x000b0ce8) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfaae,	// (0x000b9b76) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfaae,	// (0x000b9b76) hc_cl_list_double_graphic_heading_pane_g

0x6c34,	// (0x000b0cfc) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x6c34,	// (0x000b0cfc) hc_cl_list_double_graphic_heading_pane_t1

0x6c49,	// (0x000b0d11) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x6c49,	// (0x000b0d11) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfab5,	// (0x000b9b7d) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfab5,	// (0x000b9b7d) hc_cl_list_double_graphic_heading_pane_t

0x6c5e,	// (0x000b0d26) vid4_progress_pane_g1

0x6c70,	// (0x000b0d38) vid4_progress_pane_g2

0xae5d,	// (0x000b4f25) vid4_progress_pane_g3

0x9e39,	// (0x000b3f01) vid4_progress_pane_g4

0x0004,

0xfaba,	// (0x000b9b82) vid4_progress_pane_g

0x9e57,	// (0x000b3f1f) vid4_progress_pane_t1

0x9e6c,	// (0x000b3f34) vid4_progress_pane_t2

0x0002,

0xfac5,	// (0x000b9b8d) vid4_progress_pane_t

0x9e98,	// (0x000b3f60) wait_bar_pane_cp07

0xca19,	// (0x000b6ae1) blid_firmament_pane_ParamLimits

0xca5c,	// (0x000b6b24) popup_blid_sat_info2_window_g1

0xca80,	// (0x000b6b48) popup_blid_sat_info2_window_t3

0xca8e,	// (0x000b6b56) popup_blid_sat_info2_window_t4

0xca9c,	// (0x000b6b64) popup_blid_sat_info2_window_t5

0xcaaa,	// (0x000b6b72) popup_blid_sat_info2_window_t6

0xcaba,	// (0x000b6b82) popup_blid_sat_info2_window_t7

0xcac8,	// (0x000b6b90) popup_blid_sat_info2_window_t8

0xcad6,	// (0x000b6b9e) popup_blid_sat_info2_window_t9

0xcae4,	// (0x000b6bac) popup_blid_sat_info2_window_t10

0xcba8,	// (0x000b6c70) aid_firma_cardinal_ParamLimits

0xcbbc,	// (0x000b6c84) blid_firmament_pane_t1_ParamLimits

0xcbd3,	// (0x000b6c9b) blid_firmament_pane_t2_ParamLimits

0xcbea,	// (0x000b6cb2) blid_firmament_pane_t3_ParamLimits

0xcc01,	// (0x000b6cc9) blid_firmament_pane_t4_ParamLimits

0xf6d8,	// (0x000b97a0) blid_firmament_pane_t_ParamLimits

0xcc18,	// (0x000b6ce0) blid_sat_info_pane_ParamLimits

0x9424,	// (0x000b34ec) main_cam_set_pane_ParamLimits

0x5028,	// (0x000af0f0) aid_size_cell_colour_35_ParamLimits

0x5048,	// (0x000af110) aid_size_cell_colour_112_ParamLimits

0x5068,	// (0x000af130) aid_size_cell_effect_ParamLimits

0xc81e,	// (0x000b68e6) bg_tb_trans_pane_cp02_ParamLimits

0xade4,	// (0x000b4eac) heading_imed_pane_ParamLimits

0x5088,	// (0x000af150) listscroll_imed_pane_ParamLimits

0xbe38,	// (0x000b5f00) popup_call2_audio_first_window_g5_ParamLimits

0xbe38,	// (0x000b5f00) popup_call2_audio_first_window_g5

0x5642,	// (0x000af70a) aid_size_touch_image3_arrow_left_ParamLimits

0x5642,	// (0x000af70a) aid_size_touch_image3_arrow_left

0x566e,	// (0x000af736) aid_size_touch_image3_arrow_right_ParamLimits

0x566e,	// (0x000af736) aid_size_touch_image3_arrow_right

0x9e82,	// (0x000b3f4a) vid4_progress_pane_t3

0x53b4,	// (0x000af47c) main_hwr_training_symbol_option_pane_ParamLimits

0x53b4,	// (0x000af47c) main_hwr_training_symbol_option_pane

0xd423,	// (0x000b74eb) popup_hwr_training_preview_window_ParamLimits

0xd423,	// (0x000b74eb) popup_hwr_training_preview_window

0x53d4,	// (0x000af49c) hwr_training_navi_pane_g5_ParamLimits

0x53d4,	// (0x000af49c) hwr_training_navi_pane_g5

0xd683,	// (0x000b774b) popup_char_count_window

0x9424,	// (0x000b34ec) bg_popup_sub_pane_cp20_ParamLimits

0x65cf,	// (0x000b0697) list_vitu2_match_list_pane_ParamLimits

0x65de,	// (0x000b06a6) vitu2_page_scroll_pane_ParamLimits

0x65de,	// (0x000b06a6) vitu2_page_scroll_pane

0xdb3d,	// (0x000b7c05) list_single_hwr_training_symbol_option_pane_ParamLimits

0xdb3d,	// (0x000b7c05) list_single_hwr_training_symbol_option_pane

0xdb50,	// (0x000b7c18) list_single_hwr_training_symbol_option_pane_g1

0xdb58,	// (0x000b7c20) list_single_hwr_training_symbol_option_pane_t1

0xdb66,	// (0x000b7c2e) bg_button_pane_cp023

0xdb6f,	// (0x000b7c37) bg_button_pane_cp024

0x6cba,	// (0x000b0d82) vitu2_page_scroll_pane_g1

0x6cc2,	// (0x000b0d8a) vitu2_page_scroll_pane_g2

0x0001,

0xfacc,	// (0x000b9b94) vitu2_page_scroll_pane_g

0x6cca,	// (0x000b0d92) vitu2_page_scroll_pane_t1

0xd1dd,	// (0x000b72a5) popup_char_count_window_g1

0xdba2,	// (0x000b7c6a) popup_char_count_window_g2

0xdbab,	// (0x000b7c73) popup_char_count_window_g3

0x0002,

0xfad1,	// (0x000b9b99) popup_char_count_window_g

0xdbb4,	// (0x000b7c7c) popup_char_count_window_t1

0x9432,	// (0x000b34fa) main_vded2_pane

0xd119,	// (0x000b71e1) aid_size_cell_imed_line

0xd123,	// (0x000b71eb) grid_imed_line_width_pane

0x9d7f,	// (0x000b3e47) vid4_indicators_pane_g4

0xdbc2,	// (0x000b7c8a) cell_imed_line_width_pane_ParamLimits

0xdbc2,	// (0x000b7c8a) cell_imed_line_width_pane

0xdbd6,	// (0x000b7c9e) cell_imed_line_width_pane_g1

0xd5a0,	// (0x000b7668) cell_imed_line_width_pane_g2

0x0001,

0xfad8,	// (0x000b9ba0) cell_imed_line_width_pane_g

0x6cd9,	// (0x000b0da1) main_vded2_pane_g1_ParamLimits

0x6cd9,	// (0x000b0da1) main_vded2_pane_g1

0x6cef,	// (0x000b0db7) main_vded2_pane_g2_ParamLimits

0x6cef,	// (0x000b0db7) main_vded2_pane_g2

0x0001,

0xfadd,	// (0x000b9ba5) main_vded2_pane_g_ParamLimits

0xfadd,	// (0x000b9ba5) main_vded2_pane_g

0x6d01,	// (0x000b0dc9) vded2_slider_pane_ParamLimits

0x6d01,	// (0x000b0dc9) vded2_slider_pane

0x6d11,	// (0x000b0dd9) aid_size_touch_vded2_end

0x6d1b,	// (0x000b0de3) aid_size_touch_vded2_playhead

0xdbdf,	// (0x000b7ca7) aid_size_touch_vded2_start

0xdbe7,	// (0x000b7caf) vded2_slider_bg_pane

0xdbf0,	// (0x000b7cb8) vded2_slider_pane_g1

0xdbf9,	// (0x000b7cc1) vded2_slider_pane_g2

0x6d25,	// (0x000b0ded) vded2_slider_pane_g3

0x0002,

0xfae2,	// (0x000b9baa) vded2_slider_pane_g

0xdc01,	// (0x000b7cc9) vded2_slider_bg_pane_g1

0xdc0a,	// (0x000b7cd2) vded2_slider_bg_pane_g2

0xdc13,	// (0x000b7cdb) vded2_slider_bg_pane_g3

0x0002,

0xfae9,	// (0x000b9bb1) vded2_slider_bg_pane_g

0x2da5,	// (0x000ace6d) aid_postcard_touch_down_pane_ParamLimits

0x2da5,	// (0x000ace6d) aid_postcard_touch_down_pane

0x2dbb,	// (0x000ace83) aid_postcard_touch_up_pane_ParamLimits

0x2dbb,	// (0x000ace83) aid_postcard_touch_up_pane

0x9432,	// (0x000b34fa) main_blid2_pane

0x992d,	// (0x000b39f5) popup_blid2_search_window

0x93ac,	// (0x000b3474) blid2_gps_pane

0x93ac,	// (0x000b3474) blid2_navig_pane

0x93ac,	// (0x000b3474) blid2_search_pane

0x93ac,	// (0x000b3474) blid2_tripm_pane

0x6d30,	// (0x000b0df8) blid2_search_pane_g1_ParamLimits

0x6d30,	// (0x000b0df8) blid2_search_pane_g1

0x6d48,	// (0x000b0e10) blid2_search_pane_t1_ParamLimits

0x6d48,	// (0x000b0e10) blid2_search_pane_t1

0x6d5a,	// (0x000b0e22) aid_size_cell_blid2_gps_ParamLimits

0x6d5a,	// (0x000b0e22) aid_size_cell_blid2_gps

0x6d72,	// (0x000b0e3a) blid2_gps_pane_g1_ParamLimits

0x6d72,	// (0x000b0e3a) blid2_gps_pane_g1

0x6d86,	// (0x000b0e4e) grid_blid2_satellite_pane_ParamLimits

0x6d86,	// (0x000b0e4e) grid_blid2_satellite_pane

0x6da0,	// (0x000b0e68) blid2_navig_pane_g1_ParamLimits

0x6da0,	// (0x000b0e68) blid2_navig_pane_g1

0x6dac,	// (0x000b0e74) blid2_navig_pane_t1_ParamLimits

0x6dac,	// (0x000b0e74) blid2_navig_pane_t1

0x6dc7,	// (0x000b0e8f) blid2_navig_pane_t2_ParamLimits

0x6dc7,	// (0x000b0e8f) blid2_navig_pane_t2

0x0001,

0xfaf0,	// (0x000b9bb8) blid2_navig_pane_t_ParamLimits

0xfaf0,	// (0x000b9bb8) blid2_navig_pane_t

0x6de2,	// (0x000b0eaa) blid2_navig_ring_pane_ParamLimits

0x6de2,	// (0x000b0eaa) blid2_navig_ring_pane

0x6dfb,	// (0x000b0ec3) blid2_speed_pane_ParamLimits

0x6dfb,	// (0x000b0ec3) blid2_speed_pane

0x6e07,	// (0x000b0ecf) blid2_tripm_pane_g1_ParamLimits

0x6e07,	// (0x000b0ecf) blid2_tripm_pane_g1

0x6e22,	// (0x000b0eea) blid2_tripm_pane_g2_ParamLimits

0x6e22,	// (0x000b0eea) blid2_tripm_pane_g2

0x6e36,	// (0x000b0efe) blid2_tripm_pane_g3_ParamLimits

0x6e36,	// (0x000b0efe) blid2_tripm_pane_g3

0x6e4a,	// (0x000b0f12) blid2_tripm_pane_g4_ParamLimits

0x6e4a,	// (0x000b0f12) blid2_tripm_pane_g4

0x6e5e,	// (0x000b0f26) blid2_tripm_pane_g5_ParamLimits

0x6e5e,	// (0x000b0f26) blid2_tripm_pane_g5

0x0005,

0xfaf5,	// (0x000b9bbd) blid2_tripm_pane_g_ParamLimits

0xfaf5,	// (0x000b9bbd) blid2_tripm_pane_g

0x6e84,	// (0x000b0f4c) blid2_tripm_pane_t1_ParamLimits

0x6e84,	// (0x000b0f4c) blid2_tripm_pane_t1

0x6e9f,	// (0x000b0f67) blid2_tripm_pane_t2_ParamLimits

0x6e9f,	// (0x000b0f67) blid2_tripm_pane_t2

0x6eb8,	// (0x000b0f80) blid2_tripm_pane_t3_ParamLimits

0x6eb8,	// (0x000b0f80) blid2_tripm_pane_t3

0x0003,

0xfb02,	// (0x000b9bca) blid2_tripm_pane_t_ParamLimits

0xfb02,	// (0x000b9bca) blid2_tripm_pane_t

0x6eff,	// (0x000b0fc7) cell_blid2_satellite_pane_ParamLimits

0x6eff,	// (0x000b0fc7) cell_blid2_satellite_pane

0x6f1d,	// (0x000b0fe5) cell_blid2_satellite_pane_g1

0xdc1c,	// (0x000b7ce4) cell_blid2_satellite_pane_t1

0xcc28,	// (0x000b6cf0) blid2_speed_pane_g1

0xdc2a,	// (0x000b7cf2) blid2_speed_pane_t1

0xdc38,	// (0x000b7d00) blid2_speed_pane_t2

0x0001,

0xfb0b,	// (0x000b9bd3) blid2_speed_pane_t

0xcc28,	// (0x000b6cf0) blid2_navig_ring_pane_g1

0x6f26,	// (0x000b0fee) blid2_navig_ring_pane_g2

0x6f2e,	// (0x000b0ff6) blid2_navig_ring_pane_g3

0x6f36,	// (0x000b0ffe) blid2_navig_ring_pane_g4

0x6f3e,	// (0x000b1006) blid2_navig_ring_pane_g5

0x0004,

0xfb10,	// (0x000b9bd8) blid2_navig_ring_pane_g

0x93ac,	// (0x000b3474) bg_popup_window_pane_cp011

0xdc46,	// (0x000b7d0e) popup_blid2_search_window_g1

0xdc4e,	// (0x000b7d16) popup_blid2_search_window_t1

0xdc5c,	// (0x000b7d24) popup_blid2_search_window_t2

0x0001,

0xfb1b,	// (0x000b9be3) popup_blid2_search_window_t

0xaa83,	// (0x000b4b4b) main_browser_pane_g1

0xa2b0,	// (0x000b4378) main_browser_pane_ParamLimits

0x9424,	// (0x000b34ec) bg_button_pane_cp011_ParamLimits

0x5e65,	// (0x000aff2d) cell_vitu2_function_pane_g1_ParamLimits

0xc81e,	// (0x000b68e6) bg_popup_sub_pane_cp22_ParamLimits

0x67c1,	// (0x000b0889) input_focus_pane_cp08_ParamLimits

0x67d8,	// (0x000b08a0) popup_vitu2_query_button_pane_ParamLimits

0x67d8,	// (0x000b08a0) popup_vitu2_query_button_pane

0x67e9,	// (0x000b08b1) popup_vitu2_query_input_button_pane

0xd8f4,	// (0x000b79bc) popup_vitu2_query_window_g1_ParamLimits

0x67f3,	// (0x000b08bb) popup_vitu2_query_window_g2_ParamLimits

0xfa1c,	// (0x000b9ae4) popup_vitu2_query_window_g_ParamLimits

0x93ac,	// (0x000b3474) bg_button_pane_cp026

0x6f46,	// (0x000b100e) popup_vitu2_query_input_button_pane_g1

0x93ac,	// (0x000b3474) bg_button_pane_cp025

0xdc6a,	// (0x000b7d32) popup_vitu2_query_button_pane_t1

0x444f,	// (0x000ae517) main_mp3_pane_t6

0x445d,	// (0x000ae525) popup_slider_window_cp01

0x9ce5,	// (0x000b3dad) cam4_battery_pane

0x9d3e,	// (0x000b3e06) cam4_battery_pane_cp02

0x9e31,	// (0x000b3ef9) cam4_battery_pane_cp01

0x9e31,	// (0x000b3ef9) cam4_battery_pane_cp03

0xd5a8,	// (0x000b7670) cam4_battery_pane_g1

0xcc28,	// (0x000b6cf0) cam4_battery_pane_g2

0x0001,

0xfb20,	// (0x000b9be8) cam4_battery_pane_g

0xcaf2,	// (0x000b6bba) popup_blid_sat_info2_window_t11

0xb1fe,	// (0x000b52c6) aid_size_touch_mv_arrow_left_ParamLimits

0xb229,	// (0x000b52f1) aid_size_touch_mv_arrow_right_ParamLimits

0xb287,	// (0x000b534f) navi_pane_g1_ParamLimits

0xb293,	// (0x000b535b) navi_pane_g2_ParamLimits

0xb2c1,	// (0x000b5389) navi_pane_g3_ParamLimits

0xf3ea,	// (0x000b94b2) navi_pane_g_ParamLimits

0x27bd,	// (0x000ac885) navi_pane_mv_t1_ParamLimits

0x5094,	// (0x000af15c) grid_imed_effect_pane_ParamLimits

0x13b5,	// (0x000ab47d) aid_placing_vt_slider_lsc

0xa9d2,	// (0x000b4a9a) aid_placing_vt_slider_prt

0xa4f7,	// (0x000b45bf) bg_tb_trans_pane_cp01_ParamLimits

0xcda8,	// (0x000b6e70) popup_image_details_window_g1_ParamLimits

0xcdbb,	// (0x000b6e83) popup_image_details_window_g2_ParamLimits

0xcdd0,	// (0x000b6e98) popup_image_details_window_g3_ParamLimits

0xcdd0,	// (0x000b6e98) popup_image_details_window_g3

0xf71d,	// (0x000b97e5) popup_image_details_window_g_ParamLimits

0xcde4,	// (0x000b6eac) popup_image_details_window_t1_ParamLimits

0xcdf6,	// (0x000b6ebe) popup_image_details_window_t2_ParamLimits

0xce0f,	// (0x000b6ed7) popup_image_details_window_t3_ParamLimits

0xce23,	// (0x000b6eeb) popup_image_details_window_t4_ParamLimits

0xce3e,	// (0x000b6f06) popup_image_details_window_t5_ParamLimits

0xf724,	// (0x000b97ec) popup_image_details_window_t_ParamLimits

0x6b6b,	// (0x000b0c33) cl_header_name_pane_ParamLimits

0x6b6b,	// (0x000b0c33) cl_header_name_pane

0x6f4e,	// (0x000b1016) cl_header_name_pane_t1_ParamLimits

0x6f4e,	// (0x000b1016) cl_header_name_pane_t1

0x6f6f,	// (0x000b1037) cl_header_name_pane_t2_ParamLimits

0x6f6f,	// (0x000b1037) cl_header_name_pane_t2

0x6fb1,	// (0x000b1079) cl_header_name_pane_t3_ParamLimits

0x6fb1,	// (0x000b1079) cl_header_name_pane_t3

0x0002,

0xfb25,	// (0x000b9bed) cl_header_name_pane_t_ParamLimits

0xfb25,	// (0x000b9bed) cl_header_name_pane_t

0xb350,	// (0x000b5418) navi_pane_mv_g2_ParamLimits

0xd65d,	// (0x000b7725) field_vitu2_entry_pane_g1_ParamLimits

0xd669,	// (0x000b7731) field_vitu2_entry_pane_g2_ParamLimits

0xd675,	// (0x000b773d) field_vitu2_entry_pane_g3_ParamLimits

0xd675,	// (0x000b773d) field_vitu2_entry_pane_g3

0xf91b,	// (0x000b99e3) field_vitu2_entry_pane_g_ParamLimits

0x5ddc,	// (0x000afea4) cell_vitu2_itu_pane_g1_ParamLimits

0x5dec,	// (0x000afeb4) cell_vitu2_itu_pane_g2_ParamLimits

0x5dec,	// (0x000afeb4) cell_vitu2_itu_pane_g2

0x0001,

0xf927,	// (0x000b99ef) cell_vitu2_itu_pane_g_ParamLimits

0xf927,	// (0x000b99ef) cell_vitu2_itu_pane_g

0x9424,	// (0x000b34ec) bg_vkb2_func_pane_cp05_ParamLimits

0x9424,	// (0x000b34ec) bg_vkb2_func_pane_cp05

0x9424,	// (0x000b34ec) bg_vkb2_func_pane_cp03

0x9424,	// (0x000b34ec) bg_vkb2_func_pane_cp04

0x9424,	// (0x000b34ec) bg_vkb2_func_pane_cp10_ParamLimits

0x9424,	// (0x000b34ec) bg_vkb2_func_pane_cp10

0x6b0d,	// (0x000b0bd5) bg_vkb2_func_pane_cp08

0x6af3,	// (0x000b0bbb) bg_vkb2_func_pane_cp06

0x6b01,	// (0x000b0bc9) bg_vkb2_func_pane_cp07

0xdb78,	// (0x000b7c40) bg_vkb2_func_pane_cp11_ParamLimits

0xdb78,	// (0x000b7c40) bg_vkb2_func_pane_cp11

0xdb8d,	// (0x000b7c55) bg_vkb2_func_pane_cp12_ParamLimits

0xdb8d,	// (0x000b7c55) bg_vkb2_func_pane_cp12

0x93ac,	// (0x000b3474) bg_vkb2_func_pane_cp09

0xd695,	// (0x000b775d) bg_vkb2_func_pane_g1

0xab94,	// (0x000b4c5c) bg_vkb2_func_pane_g2

0xd69d,	// (0x000b7765) bg_vkb2_func_pane_g3

0xd6a5,	// (0x000b776d) bg_vkb2_func_pane_g4

0xd8b9,	// (0x000b7981) bg_vkb2_func_pane_g5

0xd6bd,	// (0x000b7785) bg_vkb2_func_pane_g6

0xd6c5,	// (0x000b778d) bg_vkb2_func_pane_g7

0xd6b5,	// (0x000b777d) bg_vkb2_func_pane_g8

0xab74,	// (0x000b4c3c) bg_vkb2_func_pane_g9

0x0008,

0xfb2c,	// (0x000b9bf4) bg_vkb2_func_pane_g

0x6e72,	// (0x000b0f3a) blid2_tripm_pane_g6_ParamLimits

0x6e72,	// (0x000b0f3a) blid2_tripm_pane_g6

0xd4db,	// (0x000b75a3) mp4_progress_pane_g1

0x6eeb,	// (0x000b0fb3) blid2_tripm_values_pane_ParamLimits

0x6eeb,	// (0x000b0fb3) blid2_tripm_values_pane

0x6fe2,	// (0x000b10aa) blid2_tripm_values_pane_t1

0x6ff0,	// (0x000b10b8) blid2_tripm_values_pane_t2

0x6ffe,	// (0x000b10c6) blid2_tripm_values_pane_t3

0x700c,	// (0x000b10d4) blid2_tripm_values_pane_t4

0x701a,	// (0x000b10e2) blid2_tripm_values_pane_t5

0x7028,	// (0x000b10f0) blid2_tripm_values_pane_t6

0x7036,	// (0x000b10fe) blid2_tripm_values_pane_t7

0x7044,	// (0x000b110c) blid2_tripm_values_pane_t8

0x7052,	// (0x000b111a) blid2_tripm_values_pane_t9

0x0008,

0xfb3f,	// (0x000b9c07) blid2_tripm_values_pane_t

0x13f7,	// (0x000ab4bf) call_video_pane_t1_ParamLimits

0x1415,	// (0x000ab4dd) call_video_pane_t2_ParamLimits

0xf273,	// (0x000b933b) call_video_pane_t_ParamLimits

0x2caa,	// (0x000acd72) msg_header_pane_g1_ParamLimits

0xb582,	// (0x000b564a) msg_header_pane_g2_ParamLimits

0xb582,	// (0x000b564a) msg_header_pane_g2

0x0001,

0xf48d,	// (0x000b9555) msg_header_pane_g_ParamLimits

0xf48d,	// (0x000b9555) msg_header_pane_g

0xa2b0,	// (0x000b4378) main_clock2_pane_ParamLimits

0x4d8b,	// (0x000aee53) grid_clock2_toolbar_pane_ParamLimits

0x4d8b,	// (0x000aee53) grid_clock2_toolbar_pane

0x4d8b,	// (0x000aee53) listscroll_clock2_pane_ParamLimits

0x4d8b,	// (0x000aee53) listscroll_clock2_pane

0x4e86,	// (0x000aef4e) main_clock2_pane_t3_ParamLimits

0x4e86,	// (0x000aef4e) main_clock2_pane_t3

0x4eaa,	// (0x000aef72) main_clock2_pane_t4_ParamLimits

0x4eaa,	// (0x000aef72) main_clock2_pane_t4

0xdc78,	// (0x000b7d40) cell_clock2_toolbar_pane

0xdc80,	// (0x000b7d48) cell_clock2_toolbar_pane_cp01

0xdc80,	// (0x000b7d48) cell_clock2_toolbar_pane_cp02

0xdc88,	// (0x000b7d50) cell_clock2_toolbar_pane_cp03

0xdc90,	// (0x000b7d58) list_clock2_pane

0xb174,	// (0x000b523c) scroll_pane_cp10

0xdc98,	// (0x000b7d60) list_single_clock2_pane_ParamLimits

0xdc98,	// (0x000b7d60) list_single_clock2_pane

0xb3b7,	// (0x000b547f) list_highlight_pane_cp08

0xdca5,	// (0x000b7d6d) list_single_clock2_pane_t1

0xdcb3,	// (0x000b7d7b) list_single_clock2_pane_t2

0x0001,

0xfb52,	// (0x000b9c1a) list_single_clock2_pane_t

0x93ac,	// (0x000b3474) bg_button_pane_cp10

0xdcc1,	// (0x000b7d89) cell_clock2_toolbar_pane_g1

0x2d31,	// (0x000acdf9) aid_main_viewer_pane_g1_ParamLimits

0x2d31,	// (0x000acdf9) aid_main_viewer_pane_g1

0x2d3f,	// (0x000ace07) aid_main_viewer_pane_g2_ParamLimits

0x2d3f,	// (0x000ace07) aid_main_viewer_pane_g2

0x2d4d,	// (0x000ace15) aid_main_viewer_pane_g3_ParamLimits

0x2d4d,	// (0x000ace15) aid_main_viewer_pane_g3

0x2d5c,	// (0x000ace24) aid_main_viewer_pane_g4_ParamLimits

0x2d5c,	// (0x000ace24) aid_main_viewer_pane_g4

0x0003,

0xf49e,	// (0x000b9566) aid_main_viewer_pane_g_ParamLimits

0xf49e,	// (0x000b9566) aid_main_viewer_pane_g

0x366a,	// (0x000ad732) main_calc_pane_ParamLimits

0x3690,	// (0x000ad758) main_dialer2_pane_ParamLimits

0x9432,	// (0x000b34fa) main_cam6_pane

0x9432,	// (0x000b34fa) main_vid6_pane

0x4d97,	// (0x000aee5f) listscroll_gen_pane_cp06_ParamLimits

0x4d97,	// (0x000aee5f) listscroll_gen_pane_cp06

0x4ecd,	// (0x000aef95) main_clock2_pane_t5_ParamLimits

0x4ecd,	// (0x000aef95) main_clock2_pane_t5

0x4f29,	// (0x000aeff1) aid_call2_pane_cp10_ParamLimits

0x4f3b,	// (0x000af003) aid_call_pane_cp10_ParamLimits

0xb1f2,	// (0x000b52ba) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb1f2,	// (0x000b52ba) popup_clock_analogue_window_cp10_g2_ParamLimits

0x4f4d,	// (0x000af015) popup_clock_analogue_window_cp10_g3_ParamLimits

0x4f4d,	// (0x000af015) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb1f2,	// (0x000b52ba) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7d4,	// (0x000b989c) popup_clock_analogue_window_cp10_g_ParamLimits

0x4f5f,	// (0x000af027) popup_clock_analogue_window_cp10_t1_ParamLimits

0x55ef,	// (0x000af6b7) cell_dialer2_keypad_pane_g2_ParamLimits

0x55ef,	// (0x000af6b7) cell_dialer2_keypad_pane_g2

0x0001,

0xf8ba,	// (0x000b9982) cell_dialer2_keypad_pane_g_ParamLimits

0xf8ba,	// (0x000b9982) cell_dialer2_keypad_pane_g

0x560b,	// (0x000af6d3) cell_dialer2_keypad_pane_t1

0x617b,	// (0x000b0243) main_cset_text2_pane_ParamLimits

0x617b,	// (0x000b0243) main_cset_text2_pane

0xdae0,	// (0x000b7ba8) area_vitu2_query_pane_g1_ParamLimits

0x6a92,	// (0x000b0b5a) area_vitu2_query_pane_g2_ParamLimits

0xfa6f,	// (0x000b9b37) area_vitu2_query_pane_g_ParamLimits

0xa632,	// (0x000b46fa) area_vitu2_query_pane_t7_ParamLimits

0xa632,	// (0x000b46fa) area_vitu2_query_pane_t7

0x6af3,	// (0x000b0bbb) bg_button_pane_cp018_ParamLimits

0x6b01,	// (0x000b0bc9) bg_button_pane_cp021_ParamLimits

0x6b0d,	// (0x000b0bd5) bg_button_pane_cp022_ParamLimits

0x6b0d,	// (0x000b0bd5) bg_vkb2_func_pane_cp08_ParamLimits

0x6af3,	// (0x000b0bbb) bg_vkb2_func_pane_cp06_ParamLimits

0x6b01,	// (0x000b0bc9) bg_vkb2_func_pane_cp07_ParamLimits

0x6b1e,	// (0x000b0be6) input_focus_pane_cp09_ParamLimits

0x9ea8,	// (0x000b3f70) cam6_autofocus_pane_ParamLimits

0x9ea8,	// (0x000b3f70) cam6_autofocus_pane

0x7060,	// (0x000b1128) cam6_image_uncrop_pane_ParamLimits

0x7060,	// (0x000b1128) cam6_image_uncrop_pane

0x706f,	// (0x000b1137) cam6_indi_pane_ParamLimits

0x706f,	// (0x000b1137) cam6_indi_pane

0x7085,	// (0x000b114d) cam6_mode_pane_ParamLimits

0x7085,	// (0x000b114d) cam6_mode_pane

0x7097,	// (0x000b115f) cam6_timer_pane_ParamLimits

0x7097,	// (0x000b115f) cam6_timer_pane

0x70a3,	// (0x000b116b) cam6_zoom_pane_ParamLimits

0x70a3,	// (0x000b116b) cam6_zoom_pane

0x70af,	// (0x000b1177) cam6_mode_pane_g1_ParamLimits

0x70af,	// (0x000b1177) cam6_mode_pane_g1

0x70bf,	// (0x000b1187) cam6_mode_pane_g2_ParamLimits

0x70bf,	// (0x000b1187) cam6_mode_pane_g2

0x70cf,	// (0x000b1197) cam6_mode_pane_g3_ParamLimits

0x70cf,	// (0x000b1197) cam6_mode_pane_g3

0x70df,	// (0x000b11a7) cam6_mode_pane_g4_ParamLimits

0x70df,	// (0x000b11a7) cam6_mode_pane_g4

0x0003,

0xfb57,	// (0x000b9c1f) cam6_mode_pane_g_ParamLimits

0xfb57,	// (0x000b9c1f) cam6_mode_pane_g

0xdcc9,	// (0x000b7d91) bg_tb_trans_pane_cp08_ParamLimits

0xdcc9,	// (0x000b7d91) bg_tb_trans_pane_cp08

0xdcd7,	// (0x000b7d9f) cam6_battery_pane_ParamLimits

0xdcd7,	// (0x000b7d9f) cam6_battery_pane

0xdced,	// (0x000b7db5) cam6_indi_pane_g1_ParamLimits

0xdced,	// (0x000b7db5) cam6_indi_pane_g1

0xdcff,	// (0x000b7dc7) cam6_indi_pane_g2_ParamLimits

0xdcff,	// (0x000b7dc7) cam6_indi_pane_g2

0xdd11,	// (0x000b7dd9) cam6_indi_pane_g3_ParamLimits

0xdd11,	// (0x000b7dd9) cam6_indi_pane_g3

0x0002,

0xfb60,	// (0x000b9c28) cam6_indi_pane_g_ParamLimits

0xfb60,	// (0x000b9c28) cam6_indi_pane_g

0xdd23,	// (0x000b7deb) cam6_indi_pane_t1_ParamLimits

0xdd23,	// (0x000b7deb) cam6_indi_pane_t1

0x70ef,	// (0x000b11b7) cam6_autofocus_pane_g1

0x70f7,	// (0x000b11bf) cam6_autofocus_pane_g2

0x70ff,	// (0x000b11c7) cam6_autofocus_pane_g3

0x7107,	// (0x000b11cf) cam6_autofocus_pane_g4

0x0003,

0xfb67,	// (0x000b9c2f) cam6_autofocus_pane_g

0xdd49,	// (0x000b7e11) cam6_timer_pane_g1

0xdd51,	// (0x000b7e19) cam6_timer_pane_t1

0xdd5f,	// (0x000b7e27) cam6_zoom_cont_pane

0xdd67,	// (0x000b7e2f) cam6_zoom_pane_g1

0xdd6f,	// (0x000b7e37) cam6_zoom_pane_g2

0x710f,	// (0x000b11d7) cam6_zoom_pane_g3

0x0002,

0xfb70,	// (0x000b9c38) cam6_zoom_pane_g

0xcc28,	// (0x000b6cf0) cam6_battery_pane_g1

0xcc28,	// (0x000b6cf0) cam6_battery_pane_g2

0x0001,

0xf6e1,	// (0x000b97a9) cam6_battery_pane_g

0xdd77,	// (0x000b7e3f) cam6_zoom_cont_pane_g1

0xdd80,	// (0x000b7e48) cam6_zoom_cont_pane_g2

0xdd89,	// (0x000b7e51) cam6_zoom_cont_pane_g3

0x0002,

0xfb77,	// (0x000b9c3f) cam6_zoom_cont_pane_g

0x712c,	// (0x000b11f4) cam6_mode_pane_cp_ParamLimits

0x712c,	// (0x000b11f4) cam6_mode_pane_cp

0x713e,	// (0x000b1206) cam6_zoom_pane_cp_ParamLimits

0x713e,	// (0x000b1206) cam6_zoom_pane_cp

0x714a,	// (0x000b1212) vid6_image_uncrop_cif_pane_ParamLimits

0x714a,	// (0x000b1212) vid6_image_uncrop_cif_pane

0x715a,	// (0x000b1222) vid6_image_uncrop_nhd_pane_ParamLimits

0x715a,	// (0x000b1222) vid6_image_uncrop_nhd_pane

0x7169,	// (0x000b1231) vid6_image_uncrop_vga_pane_ParamLimits

0x7169,	// (0x000b1231) vid6_image_uncrop_vga_pane

0x7178,	// (0x000b1240) vid6_image_uncrop_wvga_pane_ParamLimits

0x7178,	// (0x000b1240) vid6_image_uncrop_wvga_pane

0x7187,	// (0x000b124f) vid6_indi_pane_ParamLimits

0x7187,	// (0x000b124f) vid6_indi_pane

0xdcc9,	// (0x000b7d91) bg_tb_trans_pane_cp09_ParamLimits

0xdcc9,	// (0x000b7d91) bg_tb_trans_pane_cp09

0xdda1,	// (0x000b7e69) cam6_battery_pane_cp_ParamLimits

0xdda1,	// (0x000b7e69) cam6_battery_pane_cp

0xddad,	// (0x000b7e75) vid6_indi_pane_g1_ParamLimits

0xddad,	// (0x000b7e75) vid6_indi_pane_g1

0xddbf,	// (0x000b7e87) vid6_indi_pane_g2_ParamLimits

0xddbf,	// (0x000b7e87) vid6_indi_pane_g2

0xddd1,	// (0x000b7e99) vid6_indi_pane_g3_ParamLimits

0xddd1,	// (0x000b7e99) vid6_indi_pane_g3

0xdde6,	// (0x000b7eae) vid6_indi_pane_g4_ParamLimits

0xdde6,	// (0x000b7eae) vid6_indi_pane_g4

0xddfb,	// (0x000b7ec3) vid6_indi_pane_g5_ParamLimits

0xddfb,	// (0x000b7ec3) vid6_indi_pane_g5

0x0004,

0xfb7e,	// (0x000b9c46) vid6_indi_pane_g_ParamLimits

0xfb7e,	// (0x000b9c46) vid6_indi_pane_g

0xde15,	// (0x000b7edd) vid6_indi_pane_t1_ParamLimits

0xde15,	// (0x000b7edd) vid6_indi_pane_t1

0xde2b,	// (0x000b7ef3) vid6_indi_pane_t2_ParamLimits

0xde2b,	// (0x000b7ef3) vid6_indi_pane_t2

0xde53,	// (0x000b7f1b) vid6_indi_pane_t3_ParamLimits

0xde53,	// (0x000b7f1b) vid6_indi_pane_t3

0xde7b,	// (0x000b7f43) vid6_indi_pane_t4_ParamLimits

0xde7b,	// (0x000b7f43) vid6_indi_pane_t4

0x0003,

0xfb89,	// (0x000b9c51) vid6_indi_pane_t_ParamLimits

0xfb89,	// (0x000b9c51) vid6_indi_pane_t

0xde9f,	// (0x000b7f67) wait_bar_pane_cp08

0x719f,	// (0x000b1267) main_cset_text2_pane_t1_ParamLimits

0x719f,	// (0x000b1267) main_cset_text2_pane_t1

0x7117,	// (0x000b11df) listscroll_gen_pane_cp06_t1_ParamLimits

0x7117,	// (0x000b11df) listscroll_gen_pane_cp06_t1

0x9432,	// (0x000b34fa) main_cam6_set_pane

0x9cd7,	// (0x000b3d9f) bg_tb_trans_pane_cp06_ParamLimits

0x9ced,	// (0x000b3db5) cam4_indicators_pane_g1_ParamLimits

0x9cfe,	// (0x000b3dc6) cam4_indicators_pane_g2_ParamLimits

0xf8f7,	// (0x000b99bf) cam4_indicators_pane_g_ParamLimits

0x9d1c,	// (0x000b3de4) cam4_indicators_pane_t1_ParamLimits

0x9424,	// (0x000b34ec) bg_tb_trans_pane_cp07_ParamLimits

0x9d46,	// (0x000b3e0e) vid4_indicators_pane_g1_ParamLimits

0x9d5a,	// (0x000b3e22) vid4_indicators_pane_g2_ParamLimits

0x9d6e,	// (0x000b3e36) vid4_indicators_pane_g3_ParamLimits

0x9d7f,	// (0x000b3e47) vid4_indicators_pane_g4_ParamLimits

0xf909,	// (0x000b99d1) vid4_indicators_pane_g_ParamLimits

0x9d9b,	// (0x000b3e63) vid4_indicators_pane_t1_ParamLimits

0x6c5e,	// (0x000b0d26) vid4_progress_pane_g1_ParamLimits

0x6c70,	// (0x000b0d38) vid4_progress_pane_g2_ParamLimits

0xae5d,	// (0x000b4f25) vid4_progress_pane_g3_ParamLimits

0x9e39,	// (0x000b3f01) vid4_progress_pane_g4_ParamLimits

0xfaba,	// (0x000b9b82) vid4_progress_pane_g_ParamLimits

0x9e57,	// (0x000b3f1f) vid4_progress_pane_t1_ParamLimits

0x9e6c,	// (0x000b3f34) vid4_progress_pane_t2_ParamLimits

0x9e82,	// (0x000b3f4a) vid4_progress_pane_t3_ParamLimits

0xfac5,	// (0x000b9b8d) vid4_progress_pane_t_ParamLimits

0x9e98,	// (0x000b3f60) wait_bar_pane_cp07_ParamLimits

0x71be,	// (0x000b1286) main_cam6_set_pane_g2_ParamLimits

0x71be,	// (0x000b1286) main_cam6_set_pane_g2

0x71e2,	// (0x000b12aa) main_cset6_listscroll_pane_ParamLimits

0x71e2,	// (0x000b12aa) main_cset6_listscroll_pane

0x71fe,	// (0x000b12c6) main_cset6_slider_pane_ParamLimits

0x71fe,	// (0x000b12c6) main_cset6_slider_pane

0x7214,	// (0x000b12dc) main_cset6_text2_pane_ParamLimits

0x7214,	// (0x000b12dc) main_cset6_text2_pane

0xdeae,	// (0x000b7f76) main_cset6_text_pane

0xdeb6,	// (0x000b7f7e) main_cset_list_pane_copy1_ParamLimits

0xdeb6,	// (0x000b7f7e) main_cset_list_pane_copy1

0xdec6,	// (0x000b7f8e) scroll_pane_cp028_copy1

0x7222,	// (0x000b12ea) cset_list_set_pane_copy1

0x7234,	// (0x000b12fc) aid_position_infowindow_above_copy1

0x723c,	// (0x000b1304) aid_position_infowindow_below_copy1

0x7244,	// (0x000b130c) cset_list_set_pane_g1_copy1

0x724c,	// (0x000b1314) cset_list_set_pane_g3_copy1_ParamLimits

0x724c,	// (0x000b1314) cset_list_set_pane_g3_copy1

0x725b,	// (0x000b1323) cset_list_set_pane_t1_copy1_ParamLimits

0x725b,	// (0x000b1323) cset_list_set_pane_t1_copy1

0xa4f7,	// (0x000b45bf) list_highlight_pane_cp021_copy1_ParamLimits

0xa4f7,	// (0x000b45bf) list_highlight_pane_cp021_copy1

0xdecf,	// (0x000b7f97) cset6_slider_pane_ParamLimits

0xdecf,	// (0x000b7f97) cset6_slider_pane

0xdefb,	// (0x000b7fc3) main_cset6_slider_pane_g1_ParamLimits

0xdefb,	// (0x000b7fc3) main_cset6_slider_pane_g1

0x7270,	// (0x000b1338) main_cset6_slider_pane_g2_ParamLimits

0x7270,	// (0x000b1338) main_cset6_slider_pane_g2

0xdf23,	// (0x000b7feb) main_cset6_slider_pane_g3_ParamLimits

0xdf23,	// (0x000b7feb) main_cset6_slider_pane_g3

0x7298,	// (0x000b1360) main_cset6_slider_pane_g4_ParamLimits

0x7298,	// (0x000b1360) main_cset6_slider_pane_g4

0x72a4,	// (0x000b136c) main_cset6_slider_pane_g5_ParamLimits

0x72a4,	// (0x000b136c) main_cset6_slider_pane_g5

0xd7c4,	// (0x000b788c) main_cset6_slider_pane_g7_ParamLimits

0xd7c4,	// (0x000b788c) main_cset6_slider_pane_g7

0xd7d0,	// (0x000b7898) main_cset6_slider_pane_g8_ParamLimits

0xd7d0,	// (0x000b7898) main_cset6_slider_pane_g8

0x6228,	// (0x000b02f0) main_cset6_slider_pane_g9_ParamLimits

0x6228,	// (0x000b02f0) main_cset6_slider_pane_g9

0x6234,	// (0x000b02fc) main_cset6_slider_pane_g10_ParamLimits

0x6234,	// (0x000b02fc) main_cset6_slider_pane_g10

0x6240,	// (0x000b0308) main_cset6_slider_pane_g11_ParamLimits

0x6240,	// (0x000b0308) main_cset6_slider_pane_g11

0x624c,	// (0x000b0314) main_cset6_slider_pane_g12_ParamLimits

0x624c,	// (0x000b0314) main_cset6_slider_pane_g12

0x6258,	// (0x000b0320) main_cset6_slider_pane_g13_ParamLimits

0x6258,	// (0x000b0320) main_cset6_slider_pane_g13

0x6264,	// (0x000b032c) main_cset6_slider_pane_g14_ParamLimits

0x6264,	// (0x000b032c) main_cset6_slider_pane_g14

0x72b0,	// (0x000b1378) main_cset6_slider_pane_g15_ParamLimits

0x72b0,	// (0x000b1378) main_cset6_slider_pane_g15

0x6288,	// (0x000b0350) main_cset6_slider_pane_g16_ParamLimits

0x6288,	// (0x000b0350) main_cset6_slider_pane_g16

0x6294,	// (0x000b035c) main_cset6_slider_pane_g17_ParamLimits

0x6294,	// (0x000b035c) main_cset6_slider_pane_g17

0x0011,

0xfb92,	// (0x000b9c5a) main_cset6_slider_pane_g_ParamLimits

0xfb92,	// (0x000b9c5a) main_cset6_slider_pane_g

0xdf2f,	// (0x000b7ff7) main_cset6_slider_pane_t1_ParamLimits

0xdf2f,	// (0x000b7ff7) main_cset6_slider_pane_t1

0x72e0,	// (0x000b13a8) main_cset6_slider_pane_t2_ParamLimits

0x72e0,	// (0x000b13a8) main_cset6_slider_pane_t2

0x730b,	// (0x000b13d3) main_cset6_slider_pane_t3_ParamLimits

0x730b,	// (0x000b13d3) main_cset6_slider_pane_t3

0x7336,	// (0x000b13fe) main_cset6_slider_pane_t4_ParamLimits

0x7336,	// (0x000b13fe) main_cset6_slider_pane_t4

0x7361,	// (0x000b1429) main_cset6_slider_pane_t5_ParamLimits

0x7361,	// (0x000b1429) main_cset6_slider_pane_t5

0xdf70,	// (0x000b8038) main_cset6_slider_pane_t7_ParamLimits

0xdf70,	// (0x000b8038) main_cset6_slider_pane_t7

0x738c,	// (0x000b1454) main_cset6_slider_pane_t8_ParamLimits

0x738c,	// (0x000b1454) main_cset6_slider_pane_t8

0x73b0,	// (0x000b1478) main_cset6_slider_pane_t9_ParamLimits

0x73b0,	// (0x000b1478) main_cset6_slider_pane_t9

0x73d4,	// (0x000b149c) main_cset6_slider_pane_t10_ParamLimits

0x73d4,	// (0x000b149c) main_cset6_slider_pane_t10

0x73f8,	// (0x000b14c0) main_cset6_slider_pane_t11_ParamLimits

0x73f8,	// (0x000b14c0) main_cset6_slider_pane_t11

0xdfa6,	// (0x000b806e) main_cset6_slider_pane_t14_ParamLimits

0xdfa6,	// (0x000b806e) main_cset6_slider_pane_t14

0xdfdf,	// (0x000b80a7) main_cset6_slider_pane_t15_ParamLimits

0xdfdf,	// (0x000b80a7) main_cset6_slider_pane_t15

0x000b,

0xfbb7,	// (0x000b9c7f) main_cset6_slider_pane_t_ParamLimits

0xfbb7,	// (0x000b9c7f) main_cset6_slider_pane_t

0xe018,	// (0x000b80e0) cset_slider_pane_g1_copy1

0xe021,	// (0x000b80e9) cset_slider_pane_g2_copy1

0xe02a,	// (0x000b80f2) cset_slider_pane_g3_copy1

0x93ac,	// (0x000b3474) bg_popup_sub_pane_cp011_copy1

0xe033,	// (0x000b80fb) main_cset_text_pane_g1_copy1

0xd908,	// (0x000b79d0) main_cset_text_pane_t1_copy1

0xd916,	// (0x000b79de) main_cset_text_pane_t2_copy1

0xd924,	// (0x000b79ec) main_cset_text_pane_t3_copy1

0xd932,	// (0x000b79fa) main_cset_text_pane_t4_copy1

0xd940,	// (0x000b7a08) main_cset_text_pane_t5_copy1

0xe03b,	// (0x000b8103) main_cset_text_pane_t6_copy1

0xe049,	// (0x000b8111) main_cset_text_pane_t7_copy1

0x74eb,	// (0x000b15b3) main_cset_text2_pane_t1_copy1

0x9424,	// (0x000b34ec) main_ncimui_pane

0x38cc,	// (0x000ad994) popup_query_ncimui_window_ParamLimits

0x38cc,	// (0x000ad994) popup_query_ncimui_window

0xa541,	// (0x000b4609) field_cale_ev2_pane_g4_ParamLimits

0xa541,	// (0x000b4609) field_cale_ev2_pane_g4

0x54cb,	// (0x000af593) cell_video_dialer_keypad_pane_g2_ParamLimits

0x54cb,	// (0x000af593) cell_video_dialer_keypad_pane_g2

0x0001,

0xf895,	// (0x000b995d) cell_video_dialer_keypad_pane_g_ParamLimits

0xf895,	// (0x000b995d) cell_video_dialer_keypad_pane_g

0x54e3,	// (0x000af5ab) cell_video_dialer_keypad_pane_t1

0x93ac,	// (0x000b3474) bg_popup_window_pane_cp012

0xb035,	// (0x000b50fd) heading_pane_cp06

0xe075,	// (0x000b813d) ncim_query_content_pane

0x93ac,	// (0x000b3474) bg_popup_heading_pane_cp01

0xe07d,	// (0x000b8145) ncim_heading_pane_t1

0xe08b,	// (0x000b8153) ncim_indicator_popup_pane

0xe09d,	// (0x000b8165) ncim_query_button_pane

0xe0b1,	// (0x000b8179) ncim_query_content_pane_t1

0xe0c3,	// (0x000b818b) ncim_query_content_pane_t2

0x0005,

0xfbfb,	// (0x000b9cc3) ncim_query_content_pane_t

0xe0fd,	// (0x000b81c5) ncim_query_list_pane

0xe10f,	// (0x000b81d7) ncim_query_popup_pane

0xe08b,	// (0x000b8153) ncim_indicator_popup_pane_ParamLimits

0x762f,	// (0x000b16f7) ncim_query_content_pane_g1_ParamLimits

0x762f,	// (0x000b16f7) ncim_query_content_pane_g1

0xe0b1,	// (0x000b8179) ncim_query_content_pane_t1_ParamLimits

0xe0c3,	// (0x000b818b) ncim_query_content_pane_t2_ParamLimits

0x763b,	// (0x000b1703) ncim_query_content_pane_t3_ParamLimits

0x763b,	// (0x000b1703) ncim_query_content_pane_t3

0x7663,	// (0x000b172b) ncim_query_content_pane_t4_ParamLimits

0x7663,	// (0x000b172b) ncim_query_content_pane_t4

0x768b,	// (0x000b1753) ncim_query_content_pane_t5_ParamLimits

0x768b,	// (0x000b1753) ncim_query_content_pane_t5

0xe0d5,	// (0x000b819d) ncim_query_content_pane_t6_ParamLimits

0xe0d5,	// (0x000b819d) ncim_query_content_pane_t6

0xfbfb,	// (0x000b9cc3) ncim_query_content_pane_t_ParamLimits

0xe0fd,	// (0x000b81c5) ncim_query_list_pane_ParamLimits

0xe10f,	// (0x000b81d7) ncim_query_popup_pane_ParamLimits

0xe123,	// (0x000b81eb) wait_bar_pane_cp04

0x93ac,	// (0x000b3474) input_focus_pane_cp011

0xe12b,	// (0x000b81f3) ncim_query_popup_pane_t1

0xe139,	// (0x000b8201) ncim_list_query_list_pane_ParamLimits

0xe139,	// (0x000b8201) ncim_list_query_list_pane

0x93ac,	// (0x000b3474) bg_button_pane_cp027

0xe14c,	// (0x000b8214) ncim_query_button_pane_g1

0x93ac,	// (0x000b3474) list_highlight_pane_cp012

0xe156,	// (0x000b821e) ncim_list_query_list_pane_g1

0xe15e,	// (0x000b8226) ncim_list_query_list_pane_t1

0x9d0d,	// (0x000b3dd5) cam4_indicators_pane_g3_ParamLimits

0x9d0d,	// (0x000b3dd5) cam4_indicators_pane_g3

0x9d8b,	// (0x000b3e53) vid4_indicators_pane_g5_ParamLimits

0x9d8b,	// (0x000b3e53) vid4_indicators_pane_g5

0x9e48,	// (0x000b3f10) vid4_progress_pane_g5_ParamLimits

0x9e48,	// (0x000b3f10) vid4_progress_pane_g5

0x751d,	// (0x000b15e5) main_ncimui_pane_g1

0x7583,	// (0x000b164b) ncimui_group_query_pane_ParamLimits

0x7583,	// (0x000b164b) ncimui_group_query_pane

0x75cb,	// (0x000b1693) ncimui_list_pane_ParamLimits

0x75cb,	// (0x000b1693) ncimui_list_pane

0x75f2,	// (0x000b16ba) ncimui_text_pane_ParamLimits

0x75f2,	// (0x000b16ba) ncimui_text_pane

0x76b3,	// (0x000b177b) ncimui_text_pane_t1_ParamLimits

0x76b3,	// (0x000b177b) ncimui_text_pane_t1

0xe16c,	// (0x000b8234) ncimui_list_single_graphic_pane_ParamLimits

0xe16c,	// (0x000b8234) ncimui_list_single_graphic_pane

0x76d1,	// (0x000b1799) ncimui_query_pane_ParamLimits

0x76d1,	// (0x000b1799) ncimui_query_pane

0x93ac,	// (0x000b3474) list_highlight_pane_cp013

0xe17c,	// (0x000b8244) ncim_list_query_list_pane_t1_copy1

0xe156,	// (0x000b821e) ncim_list_single_graphic_pane_g1

0xe18a,	// (0x000b8252) ncim_query_button_pane_cp01

0xe196,	// (0x000b825e) ncim_query_entry_pane_ParamLimits

0xe196,	// (0x000b825e) ncim_query_entry_pane

0xe1a9,	// (0x000b8271) ncimui_query_pane_g1

0xe1b5,	// (0x000b827d) ncimui_query_pane_t1_ParamLimits

0xe1b5,	// (0x000b827d) ncimui_query_pane_t1

0xa4f7,	// (0x000b45bf) input_focus_pane_cp012

0xe1ce,	// (0x000b8296) ncim_query_entry_pane_t1

0xa2b0,	// (0x000b4378) main_im_pane_ParamLimits

0x9424,	// (0x000b34ec) main_mobtv_pane_ParamLimits

0x9424,	// (0x000b34ec) main_mobtv_pane

0x72c8,	// (0x000b1390) main_cset6_slider_pane_g18_ParamLimits

0x72c8,	// (0x000b1390) main_cset6_slider_pane_g18

0x72d4,	// (0x000b139c) main_cset6_slider_pane_g19_ParamLimits

0x72d4,	// (0x000b139c) main_cset6_slider_pane_g19

0x76e4,	// (0x000b17ac) bg_main_mobtv_pane_ParamLimits

0x76e4,	// (0x000b17ac) bg_main_mobtv_pane

0x76f2,	// (0x000b17ba) main_mobtv_info_pane

0x76fb,	// (0x000b17c3) main_mobtv_loading_pane_ParamLimits

0x76fb,	// (0x000b17c3) main_mobtv_loading_pane

0xe1e0,	// (0x000b82a8) main_mobtv_pg_channel_list_pane

0xe1ea,	// (0x000b82b2) main_mobtv_pg_hdr_pane

0x7708,	// (0x000b17d0) main_mobtv_programe_curr_pane_ParamLimits

0x7708,	// (0x000b17d0) main_mobtv_programe_curr_pane

0x7715,	// (0x000b17dd) main_mobtv_programe_next_pane_ParamLimits

0x7715,	// (0x000b17dd) main_mobtv_programe_next_pane

0xe1f3,	// (0x000b82bb) popup_mobtv_noti_window

0xcc28,	// (0x000b6cf0) main_tv_pg_hdr_pane_g1

0xe1fb,	// (0x000b82c3) main_tv_pg_hdr_pane_g2

0xe203,	// (0x000b82cb) main_tv_pg_hdr_pane_g3

0xe20b,	// (0x000b82d3) main_tv_pg_hdr_pane_g4

0xe213,	// (0x000b82db) main_tv_pg_hdr_pane_g5

0xe21d,	// (0x000b82e5) main_tv_pg_hdr_pane_g6

0xe227,	// (0x000b82ef) main_tv_pg_hdr_pane_g7

0xe231,	// (0x000b82f9) main_tv_pg_hdr_pane_g8

0xe23b,	// (0x000b8303) main_tv_pg_hdr_pane_g9

0xe245,	// (0x000b830d) main_tv_pg_hdr_pane_g10

0xe24f,	// (0x000b8317) main_tv_pg_hdr_pane_g11

0x000a,

0xfc08,	// (0x000b9cd0) main_tv_pg_hdr_pane_g

0xe259,	// (0x000b8321) main_tv_pg_hdr_pane_t1

0xe267,	// (0x000b832f) main_tv_pg_hdr_pane_t2

0xe275,	// (0x000b833d) main_tv_pg_hdr_pane_t3

0xe285,	// (0x000b834d) main_tv_pg_hdr_pane_t4

0xe295,	// (0x000b835d) main_tv_pg_hdr_pane_t5

0x0004,

0xfc1f,	// (0x000b9ce7) main_tv_pg_hdr_pane_t

0xe2a5,	// (0x000b836d) single_mobtv_pg_channel_pane_ParamLimits

0xe2a5,	// (0x000b836d) single_mobtv_pg_channel_pane

0xe2b7,	// (0x000b837f) single_mobtv_pg_channel_table_pane

0xe2c0,	// (0x000b8388) single_mobtv_pg_channel_thumb_pane

0xe2c9,	// (0x000b8391) single_tv_pg_channel_pane_g1

0xe2d2,	// (0x000b839a) single_tv_pg_channel_pane_g2

0x0001,

0xfc2a,	// (0x000b9cf2) single_tv_pg_channel_pane_g

0xce88,	// (0x000b6f50) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xce88,	// (0x000b6f50) bg_single_mobtv_pg_channel_thumb_pane

0xe2db,	// (0x000b83a3) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe2db,	// (0x000b83a3) single_mobtv_pg_channel_thumb_pane_g1

0xe2e9,	// (0x000b83b1) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe2e9,	// (0x000b83b1) single_mobtv_pg_channel_thumb_pane_g2

0xe2f5,	// (0x000b83bd) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe2f5,	// (0x000b83bd) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc2f,	// (0x000b9cf7) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc2f,	// (0x000b9cf7) single_mobtv_pg_channel_thumb_pane_g

0xe301,	// (0x000b83c9) single_mobtv_pg_channel_thumb_pane_t1

0xe30f,	// (0x000b83d7) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc36,	// (0x000b9cfe) single_mobtv_pg_channel_thumb_pane_t

0xcc28,	// (0x000b6cf0) bg_single_mobtv_pg_channel_table_pane_g1

0xcc28,	// (0x000b6cf0) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6e1,	// (0x000b97a9) bg_single_mobtv_pg_channel_table_pane_g

0xe31d,	// (0x000b83e5) single_mobtv_pg_channel_table_pane_t1

0xe32b,	// (0x000b83f3) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc3b,	// (0x000b9d03) single_mobtv_pg_channel_table_pane_t

0x772a,	// (0x000b17f2) main_mobtv_info_pane_g1_ParamLimits

0x772a,	// (0x000b17f2) main_mobtv_info_pane_g1

0x7748,	// (0x000b1810) main_mobtv_info_pane_t1_ParamLimits

0x7748,	// (0x000b1810) main_mobtv_info_pane_t1

0x77c0,	// (0x000b1888) main_mobtv_info_pane_t2_ParamLimits

0x77c0,	// (0x000b1888) main_mobtv_info_pane_t2

0x0002,

0xfc45,	// (0x000b9d0d) main_mobtv_info_pane_t_ParamLimits

0xfc45,	// (0x000b9d0d) main_mobtv_info_pane_t

0x784f,	// (0x000b1917) wait_bar_pane_cp05

0x7861,	// (0x000b1929) main_mobtv_loading_pane_g1_ParamLimits

0x7861,	// (0x000b1929) main_mobtv_loading_pane_g1

0x7874,	// (0x000b193c) main_mobtv_loading_pane_g2_ParamLimits

0x7874,	// (0x000b193c) main_mobtv_loading_pane_g2

0x7880,	// (0x000b1948) main_mobtv_loading_pane_g3_ParamLimits

0x7880,	// (0x000b1948) main_mobtv_loading_pane_g3

0x0002,

0xfc4c,	// (0x000b9d14) main_mobtv_loading_pane_g_ParamLimits

0xfc4c,	// (0x000b9d14) main_mobtv_loading_pane_g

0xe339,	// (0x000b8401) main_mobtv_loading_pane_t1_ParamLimits

0xe339,	// (0x000b8401) main_mobtv_loading_pane_t1

0xe351,	// (0x000b8419) main_mobtv_loading_pane_t2_ParamLimits

0xe351,	// (0x000b8419) main_mobtv_loading_pane_t2

0x0001,

0xfc53,	// (0x000b9d1b) main_mobtv_loading_pane_t_ParamLimits

0xfc53,	// (0x000b9d1b) main_mobtv_loading_pane_t

0x7893,	// (0x000b195b) wait_bar_pane_cp06_ParamLimits

0x7893,	// (0x000b195b) wait_bar_pane_cp06

0xe375,	// (0x000b843d) main_mobtv_programe_curr_pane_t1

0xe383,	// (0x000b844b) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc58,	// (0x000b9d20) main_mobtv_programe_curr_pane_t

0xe391,	// (0x000b8459) main_mobtv_programe_next_pane_t1

0xe39f,	// (0x000b8467) main_mobtv_programe_next_pane_t2

0xe3ad,	// (0x000b8475) main_mobtv_programe_next_pane_t3

0x0002,

0xfc5d,	// (0x000b9d25) main_mobtv_programe_next_pane_t

0x93ac,	// (0x000b3474) bg_popup_mobtv_noti_window_pane

0xe3bb,	// (0x000b8483) popup_mobtv_noti_window_g1

0xe3c3,	// (0x000b848b) popup_mobtv_noti_window_t1

0xe3d1,	// (0x000b8499) popup_mobtv_noti_window_t2

0x0001,

0xfc64,	// (0x000b9d2c) popup_mobtv_noti_window_t

0xcc28,	// (0x000b6cf0) bg_popup_mobtv_noti_window_pane_g1

0x9432,	// (0x000b34fa) sc_clock_pane

0x9432,	// (0x000b34fa) main_fs_bigclock_pane

0x6ed5,	// (0x000b0f9d) blid2_tripm_pane_t4_ParamLimits

0x6ed5,	// (0x000b0f9d) blid2_tripm_pane_t4

0x78a2,	// (0x000b196a) sc_clock_pane_g1_ParamLimits

0x78a2,	// (0x000b196a) sc_clock_pane_g1

0x78b4,	// (0x000b197c) sc_clock_pane_t1_ParamLimits

0x78b4,	// (0x000b197c) sc_clock_pane_t1

0x78d6,	// (0x000b199e) sc_clock_pane_t2_ParamLimits

0x78d6,	// (0x000b199e) sc_clock_pane_t2

0x78ee,	// (0x000b19b6) sc_clock_pane_t3_ParamLimits

0x78ee,	// (0x000b19b6) sc_clock_pane_t3

0x0004,

0xfc69,	// (0x000b9d31) sc_clock_pane_t_ParamLimits

0xfc69,	// (0x000b9d31) sc_clock_pane_t

0x88b2,	// (0x000b297a) main_fs_bigclock_indicator_pane_ParamLimits

0x88b2,	// (0x000b297a) main_fs_bigclock_indicator_pane

0xce58,	// (0x000b6f20) main_fs_bigclock_pane_g1_ParamLimits

0xce58,	// (0x000b6f20) main_fs_bigclock_pane_g1

0x88be,	// (0x000b2986) main_fs_bigclock_pane_t1_ParamLimits

0x88be,	// (0x000b2986) main_fs_bigclock_pane_t1

0x88d0,	// (0x000b2998) main_fs_bigclock_pane_t2_ParamLimits

0x88d0,	// (0x000b2998) main_fs_bigclock_pane_t2

0x88e2,	// (0x000b29aa) main_fs_bigclock_pane_t3_ParamLimits

0x88e2,	// (0x000b29aa) main_fs_bigclock_pane_t3

0x0002,

0xfe73,	// (0x000b9f3b) main_fs_bigclock_pane_t_ParamLimits

0xfe73,	// (0x000b9f3b) main_fs_bigclock_pane_t

0xec65,	// (0x000b8d2d) main_fs_bigclock_indicator_pane_g1

0xe0a5,	// (0x000b816d) ncim_query_content_pane_g2_ParamLimits

0xe0a5,	// (0x000b816d) ncim_query_content_pane_g2

0x0001,

0xfbf6,	// (0x000b9cbe) ncim_query_content_pane_g_ParamLimits

0xfbf6,	// (0x000b9cbe) ncim_query_content_pane_g

0x7907,	// (0x000b19cf) sc_clock_pane_t4_ParamLimits

0x7907,	// (0x000b19cf) sc_clock_pane_t4

0x9424,	// (0x000b34ec) main_radioblah_pane

0xd5d4,	// (0x000b769c) cell_call4_button_pane_t1_copy1_ParamLimits

0xd5d4,	// (0x000b769c) cell_call4_button_pane_t1_copy1

0x7535,	// (0x000b15fd) main_ncimui_pane_t1_ParamLimits

0x7535,	// (0x000b15fd) main_ncimui_pane_t1

0x754f,	// (0x000b1617) main_ncimui_pane_t2_ParamLimits

0x754f,	// (0x000b1617) main_ncimui_pane_t2

0x0002,

0xfbef,	// (0x000b9cb7) main_ncimui_pane_t_ParamLimits

0xfbef,	// (0x000b9cb7) main_ncimui_pane_t

0xe50c,	// (0x000b85d4) main_radioblah_anim_pane_ParamLimits

0xe50c,	// (0x000b85d4) main_radioblah_anim_pane

0xe51d,	// (0x000b85e5) main_radioblah_info_pane_ParamLimits

0xe51d,	// (0x000b85e5) main_radioblah_info_pane

0xe531,	// (0x000b85f9) main_radioblah_pane_t1_ParamLimits

0xe531,	// (0x000b85f9) main_radioblah_pane_t1

0xe54d,	// (0x000b8615) main_radioblah_pane_t2_ParamLimits

0xe54d,	// (0x000b8615) main_radioblah_pane_t2

0x0003,

0xfc8a,	// (0x000b9d52) main_radioblah_pane_t_ParamLimits

0xfc8a,	// (0x000b9d52) main_radioblah_pane_t

0x79bd,	// (0x000b1a85) main_radioblah_rocker_ctrl_pane_ParamLimits

0x79bd,	// (0x000b1a85) main_radioblah_rocker_ctrl_pane

0xe595,	// (0x000b865d) main_radioblah_info_pane_t1_ParamLimits

0xe595,	// (0x000b865d) main_radioblah_info_pane_t1

0x7a15,	// (0x000b1add) main_radioblah_info_pane_t2_ParamLimits

0x7a15,	// (0x000b1add) main_radioblah_info_pane_t2

0x0003,

0xfc93,	// (0x000b9d5b) main_radioblah_info_pane_t_ParamLimits

0xfc93,	// (0x000b9d5b) main_radioblah_info_pane_t

0xcc28,	// (0x000b6cf0) main_radioblah_rocker_ctrl_pane_g1

0x7ac5,	// (0x000b1b8d) main_radioblah_rocker_ctrl_pane_g2

0x7acd,	// (0x000b1b95) main_radioblah_rocker_ctrl_pane_g3

0x7ad5,	// (0x000b1b9d) main_radioblah_rocker_ctrl_pane_g4

0x7add,	// (0x000b1ba5) main_radioblah_rocker_ctrl_pane_g5

0x7ae5,	// (0x000b1bad) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc9c,	// (0x000b9d64) main_radioblah_rocker_ctrl_pane_g

0x74eb,	// (0x000b15b3) main_cset_text2_pane_t1_copy1_ParamLimits

0x9ccf,	// (0x000b3d97) cam4_image_uncrop_qvga_pane

0x9d36,	// (0x000b3dfe) vid4_image_uncrop_qcif_pane

0x9ea8,	// (0x000b3f70) cam6_image_uncrop_qvga_pane_ParamLimits

0x9ea8,	// (0x000b3f70) cam6_image_uncrop_qvga_pane

0xdd91,	// (0x000b7e59) vid6_image_uncrop_qcif_pane_ParamLimits

0xdd91,	// (0x000b7e59) vid6_image_uncrop_qcif_pane

0x93ac,	// (0x000b3474) bg_popup_preview_window_pane_cp03

0xe057,	// (0x000b811f) list_cset_text2_pane

0xe05f,	// (0x000b8127) main_cset6_text2_pane_g1

0xe067,	// (0x000b812f) main_cset6_text2_pane_t1

0x7aed,	// (0x000b1bb5) list_cset_text2_pane_t1_ParamLimits

0x7aed,	// (0x000b1bb5) list_cset_text2_pane_t1

0x9424,	// (0x000b34ec) main_radioblah_pane_ParamLimits

0x783b,	// (0x000b1903) main_mobtv_info_pane_t3_ParamLimits

0x783b,	// (0x000b1903) main_mobtv_info_pane_t3

0x79ab,	// (0x000b1a73) main_radioblah_pane_g1

0x79e5,	// (0x000b1aad) main_radioblah_info_pane_g1

0x7a6a,	// (0x000b1b32) main_radioblah_info_pane_t3_ParamLimits

0x7a6a,	// (0x000b1b32) main_radioblah_info_pane_t3

0x22f1,	// (0x000ac3b9) highlight_cell_cale_month_pane_ParamLimits

0x22f1,	// (0x000ac3b9) highlight_cell_cale_month_pane

0x9432,	// (0x000b34fa) main_phob_fisheye_pane

0xcf64,	// (0x000b702c) scroll_pane_cp0031_ParamLimits

0xcf64,	// (0x000b702c) scroll_pane_cp0031

0xde9f,	// (0x000b7f67) wait_bar_pane_cp08_ParamLimits

0x7222,	// (0x000b12ea) cset_list_set_pane_copy1_ParamLimits

0xe5cf,	// (0x000b8697) highlight_cell_cale_month_pane_g1

0x7b08,	// (0x000b1bd0) highlight_cell_cale_month_pane_t1

0xdb34,	// (0x000b7bfc) list_gen_pane_cp01

0xd7af,	// (0x000b7877) scroll_pane_01

0x7b16,	// (0x000b1bde) list_single_double_fisheye_pane

0x7b1f,	// (0x000b1be7) list_double_fisheye_pane_g1_ParamLimits

0x7b1f,	// (0x000b1be7) list_double_fisheye_pane_g1

0x7b2b,	// (0x000b1bf3) list_double_fisheye_pane_g2_ParamLimits

0x7b2b,	// (0x000b1bf3) list_double_fisheye_pane_g2

0x7b3f,	// (0x000b1c07) list_double_fisheye_pane_g3_ParamLimits

0x7b3f,	// (0x000b1c07) list_double_fisheye_pane_g3

0x0004,

0xfca9,	// (0x000b9d71) list_double_fisheye_pane_g_ParamLimits

0xfca9,	// (0x000b9d71) list_double_fisheye_pane_g

0x7b68,	// (0x000b1c30) list_double_fisheye_pane_t1_ParamLimits

0x7b68,	// (0x000b1c30) list_double_fisheye_pane_t1

0x7b83,	// (0x000b1c4b) list_double_fisheye_pane_t2_ParamLimits

0x7b83,	// (0x000b1c4b) list_double_fisheye_pane_t2

0x0001,

0xfcb4,	// (0x000b9d7c) list_double_fisheye_pane_t_ParamLimits

0xfcb4,	// (0x000b9d7c) list_double_fisheye_pane_t

0x9432,	// (0x000b34fa) main_call5_pane

0x7932,	// (0x000b19fa) sc_swipe_pane_ParamLimits

0x7932,	// (0x000b19fa) sc_swipe_pane

0x7bb8,	// (0x000b1c80) call5_image_pane_ParamLimits

0x7bb8,	// (0x000b1c80) call5_image_pane

0x7bd5,	// (0x000b1c9d) call5_swipe_1_pane_ParamLimits

0x7bd5,	// (0x000b1c9d) call5_swipe_1_pane

0x7be8,	// (0x000b1cb0) call5_swipe_2_pane_ParamLimits

0x7be8,	// (0x000b1cb0) call5_swipe_2_pane

0x7c13,	// (0x000b1cdb) popup_call5_audio_first_window_ParamLimits

0x7c13,	// (0x000b1cdb) popup_call5_audio_first_window

0xce88,	// (0x000b6f50) call5_swipe_1_pane_g1_ParamLimits

0xce88,	// (0x000b6f50) call5_swipe_1_pane_g1

0xe5d7,	// (0x000b869f) call5_swipe_1_pane_g2_ParamLimits

0xe5d7,	// (0x000b869f) call5_swipe_1_pane_g2

0x0001,

0xfcb9,	// (0x000b9d81) call5_swipe_1_pane_g_ParamLimits

0xfcb9,	// (0x000b9d81) call5_swipe_1_pane_g

0xe5e3,	// (0x000b86ab) call5_swipe_1_pane_t1_ParamLimits

0xe5e3,	// (0x000b86ab) call5_swipe_1_pane_t1

0xce88,	// (0x000b6f50) call5_swipe_2_pane_g1_ParamLimits

0xce88,	// (0x000b6f50) call5_swipe_2_pane_g1

0xe5f8,	// (0x000b86c0) call5_swipe_2_pane_g2_ParamLimits

0xe5f8,	// (0x000b86c0) call5_swipe_2_pane_g2

0x0001,

0xfcbe,	// (0x000b9d86) call5_swipe_2_pane_g_ParamLimits

0xfcbe,	// (0x000b9d86) call5_swipe_2_pane_g

0xe604,	// (0x000b86cc) call5_swipe_2_pane_t1_ParamLimits

0xe604,	// (0x000b86cc) call5_swipe_2_pane_t1

0xe619,	// (0x000b86e1) sc_swipe_pane_g1_ParamLimits

0xe619,	// (0x000b86e1) sc_swipe_pane_g1

0xe626,	// (0x000b86ee) sc_swipe_pane_g2_ParamLimits

0xe626,	// (0x000b86ee) sc_swipe_pane_g2

0x0001,

0xfcc3,	// (0x000b9d8b) sc_swipe_pane_g_ParamLimits

0xfcc3,	// (0x000b9d8b) sc_swipe_pane_g

0xe632,	// (0x000b86fa) sc_swipe_pane_t1_ParamLimits

0xe632,	// (0x000b86fa) sc_swipe_pane_t1

0x9432,	// (0x000b34fa) main_cmail_launcher_pane

0x7c24,	// (0x000b1cec) aid_size_cell_cmail_l_ParamLimits

0x7c24,	// (0x000b1cec) aid_size_cell_cmail_l

0x7c3e,	// (0x000b1d06) grid_cmail_l_pane_ParamLimits

0x7c3e,	// (0x000b1d06) grid_cmail_l_pane

0x7c59,	// (0x000b1d21) cell_cmail_l_pane_ParamLimits

0x7c59,	// (0x000b1d21) cell_cmail_l_pane

0x7c7f,	// (0x000b1d47) cell_cmail_l_pane_g1_ParamLimits

0x7c7f,	// (0x000b1d47) cell_cmail_l_pane_g1

0x7c90,	// (0x000b1d58) cell_cmail_l_pane_t1_ParamLimits

0x7c90,	// (0x000b1d58) cell_cmail_l_pane_t1

0xe647,	// (0x000b870f) cell_cmail_l_pane_t2_ParamLimits

0xe647,	// (0x000b870f) cell_cmail_l_pane_t2

0x0001,

0xfcc8,	// (0x000b9d90) cell_cmail_l_pane_t_ParamLimits

0xfcc8,	// (0x000b9d90) cell_cmail_l_pane_t

0xa4f7,	// (0x000b45bf) grid_highlight_pane_cp018_ParamLimits

0xa4f7,	// (0x000b45bf) grid_highlight_pane_cp018

0x0234,	// (0x000aa2fc) main2_pane_ParamLimits

0x0234,	// (0x000aa2fc) main2_pane

0xa35b,	// (0x000b4423) popup_sp_fs_action_menu_bg_pane_g1

0xa363,	// (0x000b442b) popup_sp_fs_action_menu_bg_pane_g2

0xa36b,	// (0x000b4433) popup_sp_fs_action_menu_bg_pane_g3

0xa373,	// (0x000b443b) popup_sp_fs_action_menu_bg_pane_g4

0xa37b,	// (0x000b4443) popup_sp_fs_action_menu_bg_pane_g5

0xa383,	// (0x000b444b) popup_sp_fs_action_menu_bg_pane_g6

0xa38b,	// (0x000b4453) popup_sp_fs_action_menu_bg_pane_g7

0xa393,	// (0x000b445b) popup_sp_fs_action_menu_bg_pane_g8

0xa39b,	// (0x000b4463) popup_sp_fs_action_menu_bg_pane_g9

0xa3a3,	// (0x000b446b) popup_sp_fs_action_menu_bg_pane_g10

0xa3a3,	// (0x000b446b) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf18d,	// (0x000b9255) popup_sp_fs_action_menu_bg_pane_g

0x122f,	// (0x000ab2f7) list_medium_line_x2_t3_g3_g1_ParamLimits

0x122f,	// (0x000ab2f7) list_medium_line_x2_t3_g3_g1

0x123b,	// (0x000ab303) list_medium_line_x2_t3_g3_g2_ParamLimits

0x123b,	// (0x000ab303) list_medium_line_x2_t3_g3_g2

0x1247,	// (0x000ab30f) list_medium_line_x2_t3_g3_g3_ParamLimits

0x1247,	// (0x000ab30f) list_medium_line_x2_t3_g3_g3

0x0002,

0xf23d,	// (0x000b9305) list_medium_line_x2_t3_g3_g_ParamLimits

0xf23d,	// (0x000b9305) list_medium_line_x2_t3_g3_g

0x1253,	// (0x000ab31b) list_medium_line_x2_t3_g3_t1_ParamLimits

0x1253,	// (0x000ab31b) list_medium_line_x2_t3_g3_t1

0x1268,	// (0x000ab330) list_medium_line_x2_t3_g3_t2_ParamLimits

0x1268,	// (0x000ab330) list_medium_line_x2_t3_g3_t2

0x127c,	// (0x000ab344) list_medium_line_x2_t3_g3_t3_ParamLimits

0x127c,	// (0x000ab344) list_medium_line_x2_t3_g3_t3

0x0002,

0xf244,	// (0x000b930c) list_medium_line_x2_t3_g3_t_ParamLimits

0xf244,	// (0x000b930c) list_medium_line_x2_t3_g3_t

0x122f,	// (0x000ab2f7) list_medium_line_x2_t3_g2_g1_ParamLimits

0x122f,	// (0x000ab2f7) list_medium_line_x2_t3_g2_g1

0x1247,	// (0x000ab30f) list_medium_line_x2_t3_g2_g2_ParamLimits

0x1247,	// (0x000ab30f) list_medium_line_x2_t3_g2_g2

0x0001,

0xf24b,	// (0x000b9313) list_medium_line_x2_t3_g2_g_ParamLimits

0xf24b,	// (0x000b9313) list_medium_line_x2_t3_g2_g

0x1291,	// (0x000ab359) list_medium_line_x2_t3_g2_t1_ParamLimits

0x1291,	// (0x000ab359) list_medium_line_x2_t3_g2_t1

0x12a7,	// (0x000ab36f) list_medium_line_x2_t3_g2_t2_ParamLimits

0x12a7,	// (0x000ab36f) list_medium_line_x2_t3_g2_t2

0x12b9,	// (0x000ab381) list_medium_line_x2_t3_g2_t3_ParamLimits

0x12b9,	// (0x000ab381) list_medium_line_x2_t3_g2_t3

0x0002,

0xf250,	// (0x000b9318) list_medium_line_x2_t3_g2_t_ParamLimits

0xf250,	// (0x000b9318) list_medium_line_x2_t3_g2_t

0x122f,	// (0x000ab2f7) list_medium_line_x2_t4_g4_g1_ParamLimits

0x122f,	// (0x000ab2f7) list_medium_line_x2_t4_g4_g1

0x12d6,	// (0x000ab39e) list_medium_line_x2_t4_g4_g2_ParamLimits

0x12d6,	// (0x000ab39e) list_medium_line_x2_t4_g4_g2

0x123b,	// (0x000ab303) list_medium_line_x2_t4_g4_g3_ParamLimits

0x123b,	// (0x000ab303) list_medium_line_x2_t4_g4_g3

0x12e2,	// (0x000ab3aa) list_medium_line_x2_t4_g4_g4_ParamLimits

0x12e2,	// (0x000ab3aa) list_medium_line_x2_t4_g4_g4

0x0003,

0xf257,	// (0x000b931f) list_medium_line_x2_t4_g4_g_ParamLimits

0xf257,	// (0x000b931f) list_medium_line_x2_t4_g4_g

0x12ee,	// (0x000ab3b6) list_medium_line_x2_t4_g4_t1_ParamLimits

0x12ee,	// (0x000ab3b6) list_medium_line_x2_t4_g4_t1

0x1308,	// (0x000ab3d0) list_medium_line_x2_t4_g4_t2_ParamLimits

0x1308,	// (0x000ab3d0) list_medium_line_x2_t4_g4_t2

0x131d,	// (0x000ab3e5) list_medium_line_x2_t4_g4_t3_ParamLimits

0x131d,	// (0x000ab3e5) list_medium_line_x2_t4_g4_t3

0x1332,	// (0x000ab3fa) list_medium_line_x2_t4_g4_t4_ParamLimits

0x1332,	// (0x000ab3fa) list_medium_line_x2_t4_g4_t4

0x0003,

0xf260,	// (0x000b9328) list_medium_line_x2_t4_g4_t_ParamLimits

0xf260,	// (0x000b9328) list_medium_line_x2_t4_g4_t

0x122f,	// (0x000ab2f7) list_medium_line_x2_t2_g4_g1_ParamLimits

0x122f,	// (0x000ab2f7) list_medium_line_x2_t2_g4_g1

0x12d6,	// (0x000ab39e) list_medium_line_x2_t2_g4_g2_ParamLimits

0x12d6,	// (0x000ab39e) list_medium_line_x2_t2_g4_g2

0x123b,	// (0x000ab303) list_medium_line_x2_t2_g4_g3_ParamLimits

0x123b,	// (0x000ab303) list_medium_line_x2_t2_g4_g3

0x1247,	// (0x000ab30f) list_medium_line_x2_t2_g4_g4_ParamLimits

0x1247,	// (0x000ab30f) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c7,	// (0x000b938f) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c7,	// (0x000b938f) list_medium_line_x2_t2_g4_g

0x2317,	// (0x000ac3df) list_medium_line_x2_t2_g4_t1_ParamLimits

0x2317,	// (0x000ac3df) list_medium_line_x2_t2_g4_t1

0x127c,	// (0x000ab344) list_medium_line_x2_t2_g4_t2_ParamLimits

0x127c,	// (0x000ab344) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2d0,	// (0x000b9398) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2d0,	// (0x000b9398) list_medium_line_x2_t2_g4_t

0x122f,	// (0x000ab2f7) list_medium_line_x2_t2_g3_g1_ParamLimits

0x122f,	// (0x000ab2f7) list_medium_line_x2_t2_g3_g1

0x123b,	// (0x000ab303) list_medium_line_x2_t2_g3_g2_ParamLimits

0x123b,	// (0x000ab303) list_medium_line_x2_t2_g3_g2

0x1247,	// (0x000ab30f) list_medium_line_x2_t2_g3_g3_ParamLimits

0x1247,	// (0x000ab30f) list_medium_line_x2_t2_g3_g3

0x0002,

0xf23d,	// (0x000b9305) list_medium_line_x2_t2_g3_g_ParamLimits

0xf23d,	// (0x000b9305) list_medium_line_x2_t2_g3_g

0x232c,	// (0x000ac3f4) list_medium_line_x2_t2_g3_t1_ParamLimits

0x232c,	// (0x000ac3f4) list_medium_line_x2_t2_g3_t1

0x127c,	// (0x000ab344) list_medium_line_x2_t2_g3_t2_ParamLimits

0x127c,	// (0x000ab344) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d5,	// (0x000b939d) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d5,	// (0x000b939d) list_medium_line_x2_t2_g3_t

0x246b,	// (0x000ac533) main_sp_fs_list_pane_ParamLimits

0x246b,	// (0x000ac533) main_sp_fs_list_pane

0xbfa3,	// (0x000b606b) sp_fs_scroll_pane_ParamLimits

0xbfa3,	// (0x000b606b) sp_fs_scroll_pane

0x2477,	// (0x000ac53f) list_medium_line_x2_t3_t1

0x2487,	// (0x000ac54f) list_medium_line_x2_t3_t2

0x2495,	// (0x000ac55d) list_medium_line_x2_t3_t3

0x0002,

0xf320,	// (0x000b93e8) list_medium_line_x2_t3_t

0x24a3,	// (0x000ac56b) list_medium_line_x3_t4_t1

0x24b3,	// (0x000ac57b) list_medium_line_x3_t4_t2

0x24c1,	// (0x000ac589) list_medium_line_x3_t4_t3

0x2495,	// (0x000ac55d) list_medium_line_x3_t4_t4

0x0003,

0xf327,	// (0x000b93ef) list_medium_line_x3_t4_t

0x24cf,	// (0x000ac597) list_medium_line_x4_t5_t1

0x24df,	// (0x000ac5a7) list_medium_line_x4_t5_t2

0x24c1,	// (0x000ac589) list_medium_line_x4_t5_t3

0x24ed,	// (0x000ac5b5) list_medium_line_x4_t5_t4

0x2495,	// (0x000ac55d) list_medium_line_x4_t5_t5

0x0004,

0xf330,	// (0x000b93f8) list_medium_line_x4_t5_t

0x122f,	// (0x000ab2f7) list_medium_line_t4_g4_g1_ParamLimits

0x122f,	// (0x000ab2f7) list_medium_line_t4_g4_g1

0x12e2,	// (0x000ab3aa) list_medium_line_t4_g4_g2_ParamLimits

0x12e2,	// (0x000ab3aa) list_medium_line_t4_g4_g2

0x24fb,	// (0x000ac5c3) list_medium_line_t4_g4_g3_ParamLimits

0x24fb,	// (0x000ac5c3) list_medium_line_t4_g4_g3

0x1247,	// (0x000ab30f) list_medium_line_t4_g4_g4_ParamLimits

0x1247,	// (0x000ab30f) list_medium_line_t4_g4_g4

0x0003,

0xf33b,	// (0x000b9403) list_medium_line_t4_g4_g_ParamLimits

0xf33b,	// (0x000b9403) list_medium_line_t4_g4_g

0x2507,	// (0x000ac5cf) list_medium_line_t4_g4_t1_ParamLimits

0x2507,	// (0x000ac5cf) list_medium_line_t4_g4_t1

0x251c,	// (0x000ac5e4) list_medium_line_t4_g4_t2_ParamLimits

0x251c,	// (0x000ac5e4) list_medium_line_t4_g4_t2

0x2531,	// (0x000ac5f9) list_medium_line_t4_g4_t3_ParamLimits

0x2531,	// (0x000ac5f9) list_medium_line_t4_g4_t3

0x127c,	// (0x000ab344) list_medium_line_t4_g4_t4_ParamLimits

0x127c,	// (0x000ab344) list_medium_line_t4_g4_t4

0x0003,

0xf344,	// (0x000b940c) list_medium_line_t4_g4_t_ParamLimits

0xf344,	// (0x000b940c) list_medium_line_t4_g4_t

0x25e5,	// (0x000ac6ad) chi_dic_find_pane_g1

0x36a4,	// (0x000ad76c) main_tport_pane

0x653b,	// (0x000b0603) list_medium_line_plain_t1

0x65ed,	// (0x000b06b5) list_medium_line_t2_g2_g1_ParamLimits

0x65ed,	// (0x000b06b5) list_medium_line_t2_g2_g1

0x65f9,	// (0x000b06c1) list_medium_line_t2_g2_g2_ParamLimits

0x65f9,	// (0x000b06c1) list_medium_line_t2_g2_g2

0x0001,

0xfa00,	// (0x000b9ac8) list_medium_line_t2_g2_g_ParamLimits

0xfa00,	// (0x000b9ac8) list_medium_line_t2_g2_g

0x6605,	// (0x000b06cd) list_medium_line_t2_g2_t1_ParamLimits

0x6605,	// (0x000b06cd) list_medium_line_t2_g2_t1

0x661c,	// (0x000b06e4) list_medium_line_t2_g2_t2_ParamLimits

0x661c,	// (0x000b06e4) list_medium_line_t2_g2_t2

0x0001,

0xfa05,	// (0x000b9acd) list_medium_line_t2_g2_t_ParamLimits

0xfa05,	// (0x000b9acd) list_medium_line_t2_g2_t

0xa656,	// (0x000b471e) aid_sp_fs_list_icon_a_sm

0xa65e,	// (0x000b4726) aid_sp_fs_list_icon_d

0xb45a,	// (0x000b5522) aid_sp_fs_text_primary

0xa666,	// (0x000b472e) aid_sp_fs_text_secondary

0x6c82,	// (0x000b0d4a) list_medium_line

0x6c82,	// (0x000b0d4a) list_medium_line_g2

0x6c82,	// (0x000b0d4a) list_medium_line_g3

0x6c82,	// (0x000b0d4a) list_medium_line_plain

0x6c82,	// (0x000b0d4a) list_medium_line_plain_t2

0x6c82,	// (0x000b0d4a) list_medium_line_plain_t3

0x6c82,	// (0x000b0d4a) list_medium_line_right_icon

0x6c82,	// (0x000b0d4a) list_medium_line_right_iconx2

0x6c82,	// (0x000b0d4a) list_medium_line_t2

0x6c82,	// (0x000b0d4a) list_medium_line_t2_g2

0x6c82,	// (0x000b0d4a) list_medium_line_t2_g3

0x6c82,	// (0x000b0d4a) list_medium_line_t2_right_icon

0x6c82,	// (0x000b0d4a) list_medium_line_t2_right_iconx2

0x6c82,	// (0x000b0d4a) list_medium_line_t3

0x6c82,	// (0x000b0d4a) list_medium_line_t3_g2

0x6c82,	// (0x000b0d4a) list_medium_line_t3_g3

0x6c82,	// (0x000b0d4a) list_medium_line_t3_right_iconx2

0x6c8b,	// (0x000b0d53) list_medium_line_t4_g4

0x6c94,	// (0x000b0d5c) list_medium_line_x2

0x6c94,	// (0x000b0d5c) list_medium_line_x2_t2_g2

0x6c94,	// (0x000b0d5c) list_medium_line_x2_t2_g3

0x6c94,	// (0x000b0d5c) list_medium_line_x2_t2_g4

0x6c94,	// (0x000b0d5c) list_medium_line_x2_t3

0x6c94,	// (0x000b0d5c) list_medium_line_x2_t3_g2

0x6c94,	// (0x000b0d5c) list_medium_line_x2_t3_g3

0x6c94,	// (0x000b0d5c) list_medium_line_x2_t3_g4

0x6c94,	// (0x000b0d5c) list_medium_line_x2_t4_g2

0x6c94,	// (0x000b0d5c) list_medium_line_x2_t4_g4

0x6c9d,	// (0x000b0d65) list_medium_line_x3

0x6c9d,	// (0x000b0d65) list_medium_line_x3_t4

0x6c9d,	// (0x000b0d65) list_medium_line_x3_t4_g4

0x6c8b,	// (0x000b0d53) list_medium_line_x4_t4

0x6c8b,	// (0x000b0d53) list_medium_line_x4_t4_g7

0x6c8b,	// (0x000b0d53) list_medium_line_x4_t5

0x6ca6,	// (0x000b0d6e) list_single_fs_dyc_pane_ParamLimits

0x6ca6,	// (0x000b0d6e) list_single_fs_dyc_pane

0x122f,	// (0x000ab2f7) list_medium_line_x4_t4_g7_g1_ParamLimits

0x122f,	// (0x000ab2f7) list_medium_line_x4_t4_g7_g1

0x741c,	// (0x000b14e4) list_medium_line_x4_t4_g7_g2_ParamLimits

0x741c,	// (0x000b14e4) list_medium_line_x4_t4_g7_g2

0x7428,	// (0x000b14f0) list_medium_line_x4_t4_g7_g3_ParamLimits

0x7428,	// (0x000b14f0) list_medium_line_x4_t4_g7_g3

0x7437,	// (0x000b14ff) list_medium_line_x4_t4_g7_g4_ParamLimits

0x7437,	// (0x000b14ff) list_medium_line_x4_t4_g7_g4

0x7443,	// (0x000b150b) list_medium_line_x4_t4_g7_g5_ParamLimits

0x7443,	// (0x000b150b) list_medium_line_x4_t4_g7_g5

0x7452,	// (0x000b151a) list_medium_line_x4_t4_g7_g6_ParamLimits

0x7452,	// (0x000b151a) list_medium_line_x4_t4_g7_g6

0x7461,	// (0x000b1529) list_medium_line_x4_t4_g7_g7_ParamLimits

0x7461,	// (0x000b1529) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbd0,	// (0x000b9c98) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbd0,	// (0x000b9c98) list_medium_line_x4_t4_g7_g

0x746d,	// (0x000b1535) list_medium_line_x4_t4_g7_t1_ParamLimits

0x746d,	// (0x000b1535) list_medium_line_x4_t4_g7_t1

0x7482,	// (0x000b154a) list_medium_line_x4_t4_g7_t2_ParamLimits

0x7482,	// (0x000b154a) list_medium_line_x4_t4_g7_t2

0x7497,	// (0x000b155f) list_medium_line_x4_t4_g7_t3_ParamLimits

0x7497,	// (0x000b155f) list_medium_line_x4_t4_g7_t3

0x74ac,	// (0x000b1574) list_medium_line_x4_t4_g7_t4_ParamLimits

0x74ac,	// (0x000b1574) list_medium_line_x4_t4_g7_t4

0x74be,	// (0x000b1586) list_medium_line_x4_t4_g7_t5_ParamLimits

0x74be,	// (0x000b1586) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbdf,	// (0x000b9ca7) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbdf,	// (0x000b9ca7) list_medium_line_x4_t4_g7_t

0x74d0,	// (0x000b1598) list_single_dyc_row_pane_ParamLimits

0x74d0,	// (0x000b1598) list_single_dyc_row_pane

0x7ba5,	// (0x000b1c6d) call5_gesture_pane_ParamLimits

0x7ba5,	// (0x000b1c6d) call5_gesture_pane

0x7bfb,	// (0x000b1cc3) call5_windows_pane_ParamLimits

0x7bfb,	// (0x000b1cc3) call5_windows_pane

0x7ca6,	// (0x000b1d6e) call5_swipe_1_pane_cp_ParamLimits

0x7ca6,	// (0x000b1d6e) call5_swipe_1_pane_cp

0x7cb2,	// (0x000b1d7a) call5_swipe_2_pane_cp_ParamLimits

0x7cb2,	// (0x000b1d7a) call5_swipe_2_pane_cp

0xb3b7,	// (0x000b547f) call5_image_pane_cp

0x7cbe,	// (0x000b1d86) popup_call5_audio_first_window_cp_ParamLimits

0x7cbe,	// (0x000b1d86) popup_call5_audio_first_window_cp

0xe619,	// (0x000b86e1) call5_swipe_1_pane_g1_cp_ParamLimits

0xe619,	// (0x000b86e1) call5_swipe_1_pane_g1_cp

0xe659,	// (0x000b8721) call5_swipe_1_pane_g2_cp

0xe632,	// (0x000b86fa) call5_swipe_1_pane_t1_cp_ParamLimits

0xe632,	// (0x000b86fa) call5_swipe_1_pane_t1_cp

0xe619,	// (0x000b86e1) call5_swipe_2_pane_g1_cp_ParamLimits

0xe619,	// (0x000b86e1) call5_swipe_2_pane_g1_cp

0xe661,	// (0x000b8729) call5_swipe_2_pane_g2_cp

0xe669,	// (0x000b8731) call5_swipe_2_pane_t1_cp_ParamLimits

0xe669,	// (0x000b8731) call5_swipe_2_pane_t1_cp

0xa4f7,	// (0x000b45bf) main_sp_fs_email_pane

0xe67e,	// (0x000b8746) main_sp_fs_listscroll_pane_te

0xb463,	// (0x000b552b) popup_sp_fs_action_menu_pane_ParamLimits

0xb463,	// (0x000b552b) popup_sp_fs_action_menu_pane

0xcc28,	// (0x000b6cf0) bg_sp_fs_ctrlbar_pane_g1

0xe687,	// (0x000b874f) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe690,	// (0x000b8758) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe699,	// (0x000b8761) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xcc28,	// (0x000b6cf0) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfccd,	// (0x000b9d95) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xca0b,	// (0x000b6ad3) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xca0b,	// (0x000b6ad3) bg_sp_fs_ctrlbar_ddmenu_pane

0xe6a2,	// (0x000b876a) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe6a2,	// (0x000b876a) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe6ae,	// (0x000b8776) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe6ae,	// (0x000b8776) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcd6,	// (0x000b9d9e) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcd6,	// (0x000b9d9e) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe6ba,	// (0x000b8782) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe6ba,	// (0x000b8782) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x7ccc,	// (0x000b1d94) list_medium_line_t2_right_icon_g1

0x7cd4,	// (0x000b1d9c) list_medium_line_t2_right_icon_t1

0x7ce4,	// (0x000b1dac) list_medium_line_t2_right_icon_t2

0x0001,

0xfcdb,	// (0x000b9da3) list_medium_line_t2_right_icon_t

0xc81e,	// (0x000b68e6) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc81e,	// (0x000b68e6) bg_sp_fs_ctrlbar_pane

0x7d3e,	// (0x000b1e06) main_sp_fs_ctrlbar_button_pane_cp01

0x7d48,	// (0x000b1e10) main_sp_fs_ctrlbar_ddmenu_pane

0xe70c,	// (0x000b87d4) main_sp_fs_ctrlbar_pane_g1

0xe718,	// (0x000b87e0) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfce0,	// (0x000b9da8) main_sp_fs_ctrlbar_pane_g

0xe724,	// (0x000b87ec) main_sp_fs_ctrlbar_pane_t1

0x7d52,	// (0x000b1e1a) main_sp_fs_ctrlbar_pane

0x7d76,	// (0x000b1e3e) main_sp_fs_listscroll_pane_te_cp01

0x7d96,	// (0x000b1e5e) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x7d96,	// (0x000b1e5e) popup_sp_fs_action_menu_pane_cp01

0xa4f7,	// (0x000b45bf) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xa4f7,	// (0x000b45bf) bg_sp_fs_highlight_list_pane_cp01

0xa66f,	// (0x000b4737) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xa66f,	// (0x000b4737) sp_fs_action_menu_list_gene_pane_g1

0xe754,	// (0x000b881c) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe754,	// (0x000b881c) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcea,	// (0x000b9db2) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcea,	// (0x000b9db2) sp_fs_action_menu_list_gene_pane_g

0xa67e,	// (0x000b4746) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xa67e,	// (0x000b4746) sp_fs_action_menu_list_gene_pane_t1

0xa696,	// (0x000b475e) sp_fs_action_menu_list_gene_pane_ParamLimits

0xa696,	// (0x000b475e) sp_fs_action_menu_list_gene_pane

0xe761,	// (0x000b8829) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe761,	// (0x000b8829) popup_sp_fs_action_menu_bg_pane

0xa6b5,	// (0x000b477d) sp_fs_action_menu_list_pane_ParamLimits

0xa6b5,	// (0x000b477d) sp_fs_action_menu_list_pane

0xa6d5,	// (0x000b479d) sp_fs_scroll_pane_cp01_ParamLimits

0xa6d5,	// (0x000b479d) sp_fs_scroll_pane_cp01

0x7dc6,	// (0x000b1e8e) list_medium_line_plain_t2_t1

0x7dd6,	// (0x000b1e9e) list_medium_line_plain_t2_t2

0x0001,

0xfcef,	// (0x000b9db7) list_medium_line_plain_t2_t

0x7de6,	// (0x000b1eae) list_medium_line_plain_t3_t1

0x7df6,	// (0x000b1ebe) list_medium_line_plain_t3_t2

0x7e04,	// (0x000b1ecc) list_medium_line_plain_t3_t3

0x0002,

0xfcf4,	// (0x000b9dbc) list_medium_line_plain_t3_t

0x122f,	// (0x000ab2f7) list_medium_line_x2_t2_g2_g1_ParamLimits

0x122f,	// (0x000ab2f7) list_medium_line_x2_t2_g2_g1

0x1247,	// (0x000ab30f) list_medium_line_x2_t2_g2_g2_ParamLimits

0x1247,	// (0x000ab30f) list_medium_line_x2_t2_g2_g2

0x0001,

0xf24b,	// (0x000b9313) list_medium_line_x2_t2_g2_g_ParamLimits

0xf24b,	// (0x000b9313) list_medium_line_x2_t2_g2_g

0x2507,	// (0x000ac5cf) list_medium_line_x2_t2_g2_t1_ParamLimits

0x2507,	// (0x000ac5cf) list_medium_line_x2_t2_g2_t1

0x127c,	// (0x000ab344) list_medium_line_x2_t2_g2_t2_ParamLimits

0x127c,	// (0x000ab344) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcfb,	// (0x000b9dc3) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcfb,	// (0x000b9dc3) list_medium_line_x2_t2_g2_t

0x122f,	// (0x000ab2f7) list_medium_line_x2_t4_g2_g1_ParamLimits

0x122f,	// (0x000ab2f7) list_medium_line_x2_t4_g2_g1

0x7e12,	// (0x000b1eda) list_medium_line_x2_t4_g2_g2_ParamLimits

0x7e12,	// (0x000b1eda) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd00,	// (0x000b9dc8) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd00,	// (0x000b9dc8) list_medium_line_x2_t4_g2_g

0x7e24,	// (0x000b1eec) list_medium_line_x2_t4_g2_t1_ParamLimits

0x7e24,	// (0x000b1eec) list_medium_line_x2_t4_g2_t1

0x7e3e,	// (0x000b1f06) list_medium_line_x2_t4_g2_t2_ParamLimits

0x7e3e,	// (0x000b1f06) list_medium_line_x2_t4_g2_t2

0x7e53,	// (0x000b1f1b) list_medium_line_x2_t4_g2_t3_ParamLimits

0x7e53,	// (0x000b1f1b) list_medium_line_x2_t4_g2_t3

0x127c,	// (0x000ab344) list_medium_line_x2_t4_g2_t4_ParamLimits

0x127c,	// (0x000ab344) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd05,	// (0x000b9dcd) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd05,	// (0x000b9dcd) list_medium_line_x2_t4_g2_t

0x7e68,	// (0x000b1f30) list_medium_line_t3_right_iconx2_g1

0x7ccc,	// (0x000b1d94) list_medium_line_t3_right_iconx2_g2

0x7e70,	// (0x000b1f38) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd0e,	// (0x000b9dd6) list_medium_line_t3_right_iconx2_g

0x7e7a,	// (0x000b1f42) list_medium_line_t3_right_iconx2_t1

0x7e8a,	// (0x000b1f52) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd15,	// (0x000b9ddd) list_medium_line_t3_right_iconx2_t

0x122f,	// (0x000ab2f7) list_medium_line_x3_t4_g4_g1_ParamLimits

0x122f,	// (0x000ab2f7) list_medium_line_x3_t4_g4_g1

0x123b,	// (0x000ab303) list_medium_line_x3_t4_g4_g2_ParamLimits

0x123b,	// (0x000ab303) list_medium_line_x3_t4_g4_g2

0x12e2,	// (0x000ab3aa) list_medium_line_x3_t4_g4_g3_ParamLimits

0x12e2,	// (0x000ab3aa) list_medium_line_x3_t4_g4_g3

0x7e98,	// (0x000b1f60) list_medium_line_x3_t4_g4_g4_ParamLimits

0x7e98,	// (0x000b1f60) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd1a,	// (0x000b9de2) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd1a,	// (0x000b9de2) list_medium_line_x3_t4_g4_g

0x7ea4,	// (0x000b1f6c) list_medium_line_x3_t4_g4_t1_ParamLimits

0x7ea4,	// (0x000b1f6c) list_medium_line_x3_t4_g4_t1

0x7ebb,	// (0x000b1f83) list_medium_line_x3_t4_g4_t2_ParamLimits

0x7ebb,	// (0x000b1f83) list_medium_line_x3_t4_g4_t2

0x251c,	// (0x000ac5e4) list_medium_line_x3_t4_g4_t3_ParamLimits

0x251c,	// (0x000ac5e4) list_medium_line_x3_t4_g4_t3

0x7ed6,	// (0x000b1f9e) list_medium_line_x3_t4_g4_t4_ParamLimits

0x7ed6,	// (0x000b1f9e) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd23,	// (0x000b9deb) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd23,	// (0x000b9deb) list_medium_line_x3_t4_g4_t

0x7ef3,	// (0x000b1fbb) list_single_dyc_row_text_pane_t1_ParamLimits

0x7ef3,	// (0x000b1fbb) list_single_dyc_row_text_pane_t1

0x7f3c,	// (0x000b2004) list_single_dyc_row_text_pane_t2_ParamLimits

0x7f3c,	// (0x000b2004) list_single_dyc_row_text_pane_t2

0xa6fb,	// (0x000b47c3) list_single_dyc_row_text_pane_t3_ParamLimits

0xa6fb,	// (0x000b47c3) list_single_dyc_row_text_pane_t3

0x0005,

0xfd2c,	// (0x000b9df4) list_single_dyc_row_text_pane_t_ParamLimits

0xfd2c,	// (0x000b9df4) list_single_dyc_row_text_pane_t

0xa71f,	// (0x000b47e7) list_single_dyc_row_pane_g1_ParamLimits

0xa71f,	// (0x000b47e7) list_single_dyc_row_pane_g1

0xa72b,	// (0x000b47f3) list_single_dyc_row_pane_g2_ParamLimits

0xa72b,	// (0x000b47f3) list_single_dyc_row_pane_g2

0xa737,	// (0x000b47ff) list_single_dyc_row_pane_g3_ParamLimits

0xa737,	// (0x000b47ff) list_single_dyc_row_pane_g3

0xa743,	// (0x000b480b) list_single_dyc_row_pane_g4_ParamLimits

0xa743,	// (0x000b480b) list_single_dyc_row_pane_g4

0x0003,

0xfd39,	// (0x000b9e01) list_single_dyc_row_pane_g_ParamLimits

0xfd39,	// (0x000b9e01) list_single_dyc_row_pane_g

0xa74f,	// (0x000b4817) list_single_dyc_row_text_pane_ParamLimits

0xa74f,	// (0x000b4817) list_single_dyc_row_text_pane

0x93ac,	// (0x000b3474) bg_sp_fs_scroll_pane

0xe76f,	// (0x000b8837) thumb_sp_fs_scroll_pane

0x65ed,	// (0x000b06b5) list_medium_line_g1_ParamLimits

0x65ed,	// (0x000b06b5) list_medium_line_g1

0x8071,	// (0x000b2139) list_medium_line_t1_ParamLimits

0x8071,	// (0x000b2139) list_medium_line_t1

0x122f,	// (0x000ab2f7) list_medium_line_x2_g1_ParamLimits

0x122f,	// (0x000ab2f7) list_medium_line_x2_g1

0x123b,	// (0x000ab303) list_medium_line_x2_g2_ParamLimits

0x123b,	// (0x000ab303) list_medium_line_x2_g2

0x0001,

0xfd42,	// (0x000b9e0a) list_medium_line_x2_g_ParamLimits

0xfd42,	// (0x000b9e0a) list_medium_line_x2_g

0xa76e,	// (0x000b4836) list_medium_line_x2_t1_ParamLimits

0xa76e,	// (0x000b4836) list_medium_line_x2_t1

0x122f,	// (0x000ab2f7) list_medium_line_x3_g1_ParamLimits

0x122f,	// (0x000ab2f7) list_medium_line_x3_g1

0x123b,	// (0x000ab303) list_medium_line_x3_g2_ParamLimits

0x123b,	// (0x000ab303) list_medium_line_x3_g2

0x0001,

0xfd42,	// (0x000b9e0a) list_medium_line_x3_g_ParamLimits

0xfd42,	// (0x000b9e0a) list_medium_line_x3_g

0xa76e,	// (0x000b4836) list_medium_line_x3_t1_ParamLimits

0xa76e,	// (0x000b4836) list_medium_line_x3_t1

0xe778,	// (0x000b8840) thumb_sp_fs_scroll_pane_g1

0xe781,	// (0x000b8849) thumb_sp_fs_scroll_pane_g2

0xe78a,	// (0x000b8852) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x000b9e0f) thumb_sp_fs_scroll_pane_g

0xe778,	// (0x000b8840) bg_sp_fs_scroll_pane_g1

0xe781,	// (0x000b8849) bg_sp_fs_scroll_pane_g2

0xe78a,	// (0x000b8852) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x000b9e0f) bg_sp_fs_scroll_pane_g

0x122f,	// (0x000ab2f7) list_medium_line_x2_t3_g4_g1_ParamLimits

0x122f,	// (0x000ab2f7) list_medium_line_x2_t3_g4_g1

0x12d6,	// (0x000ab39e) list_medium_line_x2_t3_g4_g2_ParamLimits

0x12d6,	// (0x000ab39e) list_medium_line_x2_t3_g4_g2

0x123b,	// (0x000ab303) list_medium_line_x2_t3_g4_g3_ParamLimits

0x123b,	// (0x000ab303) list_medium_line_x2_t3_g4_g3

0x1247,	// (0x000ab30f) list_medium_line_x2_t3_g4_g4_ParamLimits

0x1247,	// (0x000ab30f) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c7,	// (0x000b938f) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c7,	// (0x000b938f) list_medium_line_x2_t3_g4_g

0x8086,	// (0x000b214e) list_medium_line_x2_t3_g4_t1_ParamLimits

0x8086,	// (0x000b214e) list_medium_line_x2_t3_g4_t1

0x80a0,	// (0x000b2168) list_medium_line_x2_t3_g4_t2_ParamLimits

0x80a0,	// (0x000b2168) list_medium_line_x2_t3_g4_t2

0x127c,	// (0x000ab344) list_medium_line_x2_t3_g4_t3_ParamLimits

0x127c,	// (0x000ab344) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd4e,	// (0x000b9e16) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd4e,	// (0x000b9e16) list_medium_line_x2_t3_g4_t

0x65ed,	// (0x000b06b5) list_medium_line_g2_g1_ParamLimits

0x65ed,	// (0x000b06b5) list_medium_line_g2_g1

0x65f9,	// (0x000b06c1) list_medium_line_g2_g2_ParamLimits

0x65f9,	// (0x000b06c1) list_medium_line_g2_g2

0x0001,

0xfa00,	// (0x000b9ac8) list_medium_line_g2_g_ParamLimits

0xfa00,	// (0x000b9ac8) list_medium_line_g2_g

0x80b9,	// (0x000b2181) list_medium_line_g2_t1_ParamLimits

0x80b9,	// (0x000b2181) list_medium_line_g2_t1

0x65ed,	// (0x000b06b5) list_medium_line_t3_g2_g1_ParamLimits

0x65ed,	// (0x000b06b5) list_medium_line_t3_g2_g1

0x65f9,	// (0x000b06c1) list_medium_line_t3_g2_g2_ParamLimits

0x65f9,	// (0x000b06c1) list_medium_line_t3_g2_g2

0x0001,

0xfa00,	// (0x000b9ac8) list_medium_line_t3_g2_g_ParamLimits

0xfa00,	// (0x000b9ac8) list_medium_line_t3_g2_g

0x80ce,	// (0x000b2196) list_medium_line_t3_g2_t1_ParamLimits

0x80ce,	// (0x000b2196) list_medium_line_t3_g2_t1

0x80e5,	// (0x000b21ad) list_medium_line_t3_g2_t2_ParamLimits

0x80e5,	// (0x000b21ad) list_medium_line_t3_g2_t2

0x80fa,	// (0x000b21c2) list_medium_line_t3_g2_t3_ParamLimits

0x80fa,	// (0x000b21c2) list_medium_line_t3_g2_t3

0x0002,

0xfd55,	// (0x000b9e1d) list_medium_line_t3_g2_t_ParamLimits

0xfd55,	// (0x000b9e1d) list_medium_line_t3_g2_t

0x7ccc,	// (0x000b1d94) list_medium_line_right_icon_g1

0x8113,	// (0x000b21db) list_medium_line_right_icon_t1

0x65ed,	// (0x000b06b5) list_medium_line_t2_g1_ParamLimits

0x65ed,	// (0x000b06b5) list_medium_line_t2_g1

0x8121,	// (0x000b21e9) list_medium_line_t2_t1_ParamLimits

0x8121,	// (0x000b21e9) list_medium_line_t2_t1

0x813b,	// (0x000b2203) list_medium_line_t2_t2_ParamLimits

0x813b,	// (0x000b2203) list_medium_line_t2_t2

0x0001,

0xfd5c,	// (0x000b9e24) list_medium_line_t2_t_ParamLimits

0xfd5c,	// (0x000b9e24) list_medium_line_t2_t

0x65ed,	// (0x000b06b5) list_medium_line_t3_g1_ParamLimits

0x65ed,	// (0x000b06b5) list_medium_line_t3_g1

0x8154,	// (0x000b221c) list_medium_line_t3_t1_ParamLimits

0x8154,	// (0x000b221c) list_medium_line_t3_t1

0x816b,	// (0x000b2233) list_medium_line_t3_t2_ParamLimits

0x816b,	// (0x000b2233) list_medium_line_t3_t2

0x8180,	// (0x000b2248) list_medium_line_t3_t3_ParamLimits

0x8180,	// (0x000b2248) list_medium_line_t3_t3

0x0002,

0xfd61,	// (0x000b9e29) list_medium_line_t3_t_ParamLimits

0xfd61,	// (0x000b9e29) list_medium_line_t3_t

0x65ed,	// (0x000b06b5) list_medium_line_g3_g1_ParamLimits

0x65ed,	// (0x000b06b5) list_medium_line_g3_g1

0x8192,	// (0x000b225a) list_medium_line_g3_g2_ParamLimits

0x8192,	// (0x000b225a) list_medium_line_g3_g2

0x65f9,	// (0x000b06c1) list_medium_line_g3_g3_ParamLimits

0x65f9,	// (0x000b06c1) list_medium_line_g3_g3

0x0002,

0xfd68,	// (0x000b9e30) list_medium_line_g3_g_ParamLimits

0xfd68,	// (0x000b9e30) list_medium_line_g3_g

0x819e,	// (0x000b2266) list_medium_line_g3_t1_ParamLimits

0x819e,	// (0x000b2266) list_medium_line_g3_t1

0x65ed,	// (0x000b06b5) list_medium_line_t2_g3_g1_ParamLimits

0x65ed,	// (0x000b06b5) list_medium_line_t2_g3_g1

0x8192,	// (0x000b225a) list_medium_line_t2_g3_g2_ParamLimits

0x8192,	// (0x000b225a) list_medium_line_t2_g3_g2

0x65f9,	// (0x000b06c1) list_medium_line_t2_g3_g3_ParamLimits

0x65f9,	// (0x000b06c1) list_medium_line_t2_g3_g3

0x0002,

0xfd68,	// (0x000b9e30) list_medium_line_t2_g3_g_ParamLimits

0xfd68,	// (0x000b9e30) list_medium_line_t2_g3_g

0x81b3,	// (0x000b227b) list_medium_line_t2_g3_t1_ParamLimits

0x81b3,	// (0x000b227b) list_medium_line_t2_g3_t1

0x81cd,	// (0x000b2295) list_medium_line_t2_g3_t2_ParamLimits

0x81cd,	// (0x000b2295) list_medium_line_t2_g3_t2

0x0001,

0xfd6f,	// (0x000b9e37) list_medium_line_t2_g3_t_ParamLimits

0xfd6f,	// (0x000b9e37) list_medium_line_t2_g3_t

0x65ed,	// (0x000b06b5) list_medium_line_t3_g3_g1_ParamLimits

0x65ed,	// (0x000b06b5) list_medium_line_t3_g3_g1

0x8192,	// (0x000b225a) list_medium_line_t3_g3_g2_ParamLimits

0x8192,	// (0x000b225a) list_medium_line_t3_g3_g2

0x65f9,	// (0x000b06c1) list_medium_line_t3_g3_g3_ParamLimits

0x65f9,	// (0x000b06c1) list_medium_line_t3_g3_g3

0x0002,

0xfd68,	// (0x000b9e30) list_medium_line_t3_g3_g_ParamLimits

0xfd68,	// (0x000b9e30) list_medium_line_t3_g3_g

0x81e8,	// (0x000b22b0) list_medium_line_t3_g3_t1_ParamLimits

0x81e8,	// (0x000b22b0) list_medium_line_t3_g3_t1

0x81fc,	// (0x000b22c4) list_medium_line_t3_g3_t2_ParamLimits

0x81fc,	// (0x000b22c4) list_medium_line_t3_g3_t2

0x820e,	// (0x000b22d6) list_medium_line_t3_g3_t3_ParamLimits

0x820e,	// (0x000b22d6) list_medium_line_t3_g3_t3

0x0002,

0xfd74,	// (0x000b9e3c) list_medium_line_t3_g3_t_ParamLimits

0xfd74,	// (0x000b9e3c) list_medium_line_t3_g3_t

0x7e68,	// (0x000b1f30) list_medium_line_right_iconx2_g1

0x7ccc,	// (0x000b1d94) list_medium_line_right_iconx2_g2

0x0001,

0xfd7b,	// (0x000b9e43) list_medium_line_right_iconx2_g

0x8222,	// (0x000b22ea) list_medium_line_right_iconx2_t1

0x7e68,	// (0x000b1f30) list_medium_line_t2_right_iconx2_g1

0x7ccc,	// (0x000b1d94) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd7b,	// (0x000b9e43) list_medium_line_t2_right_iconx2_g

0x8230,	// (0x000b22f8) list_medium_line_t2_right_iconx2_t1

0x8240,	// (0x000b2308) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd80,	// (0x000b9e48) list_medium_line_t2_right_iconx2_t

0x8252,	// (0x000b231a) list_medium_line_x4_t4_t1

0x8260,	// (0x000b2328) list_medium_line_x4_t4_t2

0x8270,	// (0x000b2338) list_medium_line_x4_t4_t3

0x8280,	// (0x000b2348) list_medium_line_x4_t4_t4

0x0003,

0xfd85,	// (0x000b9e4d) list_medium_line_x4_t4_t

0x82d3,	// (0x000b239b) tport_appsw_pane_ParamLimits

0x82d3,	// (0x000b239b) tport_appsw_pane

0x82eb,	// (0x000b23b3) tport_contact_pane_ParamLimits

0x82eb,	// (0x000b23b3) tport_contact_pane

0x8303,	// (0x000b23cb) tport_listscroll_pane_ParamLimits

0x8303,	// (0x000b23cb) tport_listscroll_pane

0x831d,	// (0x000b23e5) cell_tport_appsw_pane_ParamLimits

0x831d,	// (0x000b23e5) cell_tport_appsw_pane

0xd675,	// (0x000b773d) tport_appsw_pane_g1_ParamLimits

0xd675,	// (0x000b773d) tport_appsw_pane_g1

0xe793,	// (0x000b885b) tport_contact_pane_g1

0xe12b,	// (0x000b81f3) tport_contact_pane_t1

0xe79c,	// (0x000b8864) tport_contact_pane_t2

0x0001,

0xfd8e,	// (0x000b9e56) tport_contact_pane_t

0xe7aa,	// (0x000b8872) list_tport_pane

0xe7b3,	// (0x000b887b) scroll_pane_cp_030

0x8365,	// (0x000b242d) cell_tport_appsw_pane_g1

0x8375,	// (0x000b243d) cell_tport_appsw_pane_t1

0x8383,	// (0x000b244b) grid_highlight_pane_cp019

0x838b,	// (0x000b2453) list_tport_double_graphic_pane_ParamLimits

0x838b,	// (0x000b2453) list_tport_double_graphic_pane

0xa4f7,	// (0x000b45bf) list_highlight_pane_cp023_ParamLimits

0xa4f7,	// (0x000b45bf) list_highlight_pane_cp023

0x8398,	// (0x000b2460) list_tport_double_graphic_pane_g1_ParamLimits

0x8398,	// (0x000b2460) list_tport_double_graphic_pane_g1

0x83a5,	// (0x000b246d) list_tport_double_graphic_pane_t1_ParamLimits

0x83a5,	// (0x000b246d) list_tport_double_graphic_pane_t1

0x83ba,	// (0x000b2482) list_tport_double_graphic_pane_t2_ParamLimits

0x83ba,	// (0x000b2482) list_tport_double_graphic_pane_t2

0x0001,

0xfd9a,	// (0x000b9e62) list_tport_double_graphic_pane_t_ParamLimits

0xfd9a,	// (0x000b9e62) list_tport_double_graphic_pane_t

0x93ac,	// (0x000b3474) main_cale_note_pane

0x5d85,	// (0x000afe4d) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x5d85,	// (0x000afe4d) cell_vitu2_function_top_wide_pane_cp01

0x784f,	// (0x000b1917) wait_bar_pane_cp05_ParamLimits

0xa4f7,	// (0x000b45bf) listscroll_cmail_pane

0xe7bc,	// (0x000b8884) list_cmail_pane

0x83cc,	// (0x000b2494) list_cmail_body_pane

0x83e1,	// (0x000b24a9) list_single_cmail_header_caption_pane

0x83fa,	// (0x000b24c2) list_single_cmail_header_detail_pane_ParamLimits

0x83fa,	// (0x000b24c2) list_single_cmail_header_detail_pane

0xe7cc,	// (0x000b8894) list_single_cmail_header_caption_pane_t1

0x842e,	// (0x000b24f6) list_single_cmail_header_detail_pane_g1_ParamLimits

0x842e,	// (0x000b24f6) list_single_cmail_header_detail_pane_g1

0xa784,	// (0x000b484c) list_single_cmail_header_detail_pane_g2_ParamLimits

0xa784,	// (0x000b484c) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd9f,	// (0x000b9e67) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd9f,	// (0x000b9e67) list_single_cmail_header_detail_pane_g

0x8446,	// (0x000b250e) list_single_cmail_header_detail_pane_t1_ParamLimits

0x8446,	// (0x000b250e) list_single_cmail_header_detail_pane_t1

0x8484,	// (0x000b254c) list_single_cmail_header_editor_pane_bg_ParamLimits

0x8484,	// (0x000b254c) list_single_cmail_header_editor_pane_bg

0xe7e7,	// (0x000b88af) list_cmail_body_pane_g1

0xe7f0,	// (0x000b88b8) list_cmail_body_pane_t1

0xd695,	// (0x000b775d) list_single_cmail_header_editor_pane_bg_g1

0xab94,	// (0x000b4c5c) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd6a5,	// (0x000b776d) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd69d,	// (0x000b7765) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd8b9,	// (0x000b7981) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd6c5,	// (0x000b778d) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd6b5,	// (0x000b777d) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd6bd,	// (0x000b7785) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xab74,	// (0x000b4c3c) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x849d,	// (0x000b2565) calenote_gesture_pane_ParamLimits

0x849d,	// (0x000b2565) calenote_gesture_pane

0x84bd,	// (0x000b2585) calenote_window_pane_ParamLimits

0x84bd,	// (0x000b2585) calenote_window_pane

0xe7fe,	// (0x000b88c6) popup_note_window_cp01

0x84d9,	// (0x000b25a1) calenote_swipe_1_pane_ParamLimits

0x84d9,	// (0x000b25a1) calenote_swipe_1_pane

0x7cb2,	// (0x000b1d7a) calenote_swipe_2_pane_ParamLimits

0x7cb2,	// (0x000b1d7a) calenote_swipe_2_pane

0xe619,	// (0x000b86e1) calenote_swipe_1_pane_g1_ParamLimits

0xe619,	// (0x000b86e1) calenote_swipe_1_pane_g1

0xe626,	// (0x000b86ee) calenote_swipe_1_pane_g2_ParamLimits

0xe626,	// (0x000b86ee) calenote_swipe_1_pane_g2

0x0001,

0xfcc3,	// (0x000b9d8b) calenote_swipe_1_pane_g_ParamLimits

0xfcc3,	// (0x000b9d8b) calenote_swipe_1_pane_g

0xe810,	// (0x000b88d8) calenote_swipe_1_pane_t1_ParamLimits

0xe810,	// (0x000b88d8) calenote_swipe_1_pane_t1

0xe619,	// (0x000b86e1) calenote_swipe_2_pane_g1_ParamLimits

0xe619,	// (0x000b86e1) calenote_swipe_2_pane_g1

0xe82f,	// (0x000b88f7) calenote_swipe_2_pane_g2_ParamLimits

0xe82f,	// (0x000b88f7) calenote_swipe_2_pane_g2

0x0001,

0xfdab,	// (0x000b9e73) calenote_swipe_2_pane_g_ParamLimits

0xfdab,	// (0x000b9e73) calenote_swipe_2_pane_g

0xe83b,	// (0x000b8903) calenote_swipe_2_pane_t1_ParamLimits

0xe83b,	// (0x000b8903) calenote_swipe_2_pane_t1

0x93ac,	// (0x000b3474) main_mup_navstr_pane

0x4a3b,	// (0x000aeb03) main_mup3_pane_t7_ParamLimits

0x4a3b,	// (0x000aeb03) main_mup3_pane_t7

0x9aed,	// (0x000b3bb5) main_mp4_pane_g6_ParamLimits

0x9aed,	// (0x000b3bb5) main_mp4_pane_g6

0x9c91,	// (0x000b3d59) main_image3_pane_t4_ParamLimits

0x9c91,	// (0x000b3d59) main_image3_pane_t4

0x84ee,	// (0x000b25b6) popup_navstr_preview_pane_ParamLimits

0x84ee,	// (0x000b25b6) popup_navstr_preview_pane

0x8502,	// (0x000b25ca) scroll_navstr_pane_ParamLimits

0x8502,	// (0x000b25ca) scroll_navstr_pane

0x93ac,	// (0x000b3474) bg_popup_preview_window_pane_cp04

0xe862,	// (0x000b892a) popup_navstr_preview_pane_t1

0x8516,	// (0x000b25de) scroll_navstr_pane_g1_ParamLimits

0x8516,	// (0x000b25de) scroll_navstr_pane_g1

0x852a,	// (0x000b25f2) scroll_navstr_pane_t1_ParamLimits

0x852a,	// (0x000b25f2) scroll_navstr_pane_t1

0xe807,	// (0x000b88cf) bg_button_pane_cp014

0xe807,	// (0x000b88cf) bg_button_pane_cp030

0x7b4b,	// (0x000b1c13) list_double_fisheye_pane_g4_ParamLimits

0x7b4b,	// (0x000b1c13) list_double_fisheye_pane_g4

0x7b57,	// (0x000b1c1f) list_double_fisheye_pane_g5_ParamLimits

0x7b57,	// (0x000b1c1f) list_double_fisheye_pane_g5

0xbfa3,	// (0x000b606b) sp_fs_scroll_pane_cp03

0xe70c,	// (0x000b87d4) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe718,	// (0x000b87e0) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfce0,	// (0x000b9da8) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe724,	// (0x000b87ec) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe7c4,	// (0x000b888c) sp_fs_scroll_pane_cp02

0xa3d4,	// (0x000b449c) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa3d4,	// (0x000b449c) popup_sp_fs_calendar_preview_list_single_pane

0x93ac,	// (0x000b3474) main_cam6_pano_pane

0x9424,	// (0x000b34ec) main_mup3_pane_ParamLimits

0x93ac,	// (0x000b3474) main_phacti_pane

0x7722,	// (0x000b17ea) bg_button_pane_cp11

0x773c,	// (0x000b1804) main_mobtv_info_pane_g2_ParamLimits

0x773c,	// (0x000b1804) main_mobtv_info_pane_g2

0x0001,

0xfc40,	// (0x000b9d08) main_mobtv_info_pane_g_ParamLimits

0xfc40,	// (0x000b9d08) main_mobtv_info_pane_g

0x7919,	// (0x000b19e1) sc_clock_pane_t5_ParamLimits

0x7919,	// (0x000b19e1) sc_clock_pane_t5

0x79ab,	// (0x000b1a73) main_radioblah_pane_g1_ParamLimits

0xe565,	// (0x000b862d) main_radioblah_pane_t3_ParamLimits

0xe565,	// (0x000b862d) main_radioblah_pane_t3

0xe57d,	// (0x000b8645) main_radioblah_pane_t4_ParamLimits

0xe57d,	// (0x000b8645) main_radioblah_pane_t4

0x79d3,	// (0x000b1a9b) main_radioblah_text_pane_ParamLimits

0x79d3,	// (0x000b1a9b) main_radioblah_text_pane

0x79e5,	// (0x000b1aad) main_radioblah_info_pane_g1_ParamLimits

0x7a7e,	// (0x000b1b46) main_radioblah_info_pane_t4_ParamLimits

0x7a7e,	// (0x000b1b46) main_radioblah_info_pane_t4

0xa4f7,	// (0x000b45bf) main_sp_fs_calendar_pane

0x8540,	// (0x000b2608) main_phacti_pane_g1

0x8548,	// (0x000b2610) phacti_note_pane_ParamLimits

0x8548,	// (0x000b2610) phacti_note_pane

0xe879,	// (0x000b8941) phacti_term_pane_ParamLimits

0xe879,	// (0x000b8941) phacti_term_pane

0xe88e,	// (0x000b8956) phacti_note_pane_t1_ParamLimits

0xe88e,	// (0x000b8956) phacti_note_pane_t1

0xa7b4,	// (0x000b487c) phacti_term_pane_g1

0xa7bc,	// (0x000b4884) phacti_term_pane_t1_ParamLimits

0xa7bc,	// (0x000b4884) phacti_term_pane_t1

0xe8a5,	// (0x000b896d) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe8ad,	// (0x000b8975) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdb5,	// (0x000b9e7d) popup_sp_fs_calendar_preview_list_single_pane_g

0xe8b5,	// (0x000b897d) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe8b5,	// (0x000b897d) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe8cb,	// (0x000b8993) aid_popup_sp_fs_bg_corner_pane

0xcc28,	// (0x000b6cf0) popup_sp_fs_calendar_preview_bg_pane_g1

0x93ac,	// (0x000b3474) popup_sp_fs_calendar_preview_bg_pane

0x10b8,	// (0x000ab180) popup_sp_fs_calendar_preview_list_pane

0xc81e,	// (0x000b68e6) bg_main_sp_fs_cale_pane_ParamLimits

0xc81e,	// (0x000b68e6) bg_main_sp_fs_cale_pane

0xa7ef,	// (0x000b48b7) listscroll_cale_mrui_pane_ParamLimits

0xa7ef,	// (0x000b48b7) listscroll_cale_mrui_pane

0xa804,	// (0x000b48cc) listscroll_sp_fs_schedule_track_pane

0xa80d,	// (0x000b48d5) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xa80d,	// (0x000b48d5) main_sp_fs_ctrlbar_pane_cp01

0xe8d3,	// (0x000b899b) main_sp_fs_ribbon_pane

0xa820,	// (0x000b48e8) popup_sp_fs_cale_preview_window

0x85bd,	// (0x000b2685) list_single_sp_fs_schedule_track_pane_ParamLimits

0x85bd,	// (0x000b2685) list_single_sp_fs_schedule_track_pane

0xa4f7,	// (0x000b45bf) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xa4f7,	// (0x000b45bf) bg_sp_fs_highlight_list_pane_cp03

0x85d3,	// (0x000b269b) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x85d3,	// (0x000b269b) list_single_sp_fs_schedule_track_pane_g1

0x85df,	// (0x000b26a7) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x85df,	// (0x000b26a7) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdba,	// (0x000b9e82) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdba,	// (0x000b9e82) list_single_sp_fs_schedule_track_pane_g

0x85eb,	// (0x000b26b3) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x85eb,	// (0x000b26b3) list_single_sp_fs_schedule_track_pane_t1

0x8605,	// (0x000b26cd) sp_fs_schedule_track_pane_ParamLimits

0x8605,	// (0x000b26cd) sp_fs_schedule_track_pane

0xe8db,	// (0x000b89a3) sp_fs_schedule_track_pane_g1

0xe8e3,	// (0x000b89ab) sp_fs_schedule_track_pane_g2

0xe8eb,	// (0x000b89b3) sp_fs_schedule_track_pane_g3

0xe8f3,	// (0x000b89bb) sp_fs_schedule_track_pane_g4

0xe8fb,	// (0x000b89c3) sp_fs_schedule_track_pane_g5

0x0004,

0xfdbf,	// (0x000b9e87) sp_fs_schedule_track_pane_g

0xd695,	// (0x000b775d) bg_sp_fs_schedule_viewer_highlight_g1

0xab94,	// (0x000b4c5c) bg_sp_fs_schedule_viewer_highlight_g2

0xd69d,	// (0x000b7765) bg_sp_fs_schedule_viewer_highlight_g3

0xd6a5,	// (0x000b776d) bg_sp_fs_schedule_viewer_highlight_g4

0xd8b9,	// (0x000b7981) bg_sp_fs_schedule_viewer_highlight_g5

0xd6b5,	// (0x000b777d) bg_sp_fs_schedule_viewer_highlight_g6

0xd6bd,	// (0x000b7785) bg_sp_fs_schedule_viewer_highlight_g7

0xd6c5,	// (0x000b778d) bg_sp_fs_schedule_viewer_highlight_g8

0xab74,	// (0x000b4c3c) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdca,	// (0x000b9e92) bg_sp_fs_schedule_viewer_highlight_g

0x93ac,	// (0x000b3474) bg_main_sp_fs_ribbon_pane

0x8616,	// (0x000b26de) main_sp_fs_ribbon_pane_g1

0xe903,	// (0x000b89cb) main_sp_fs_ribbon_pane_t1

0x861f,	// (0x000b26e7) main_sp_fs_ribbon_pane_t2

0xe912,	// (0x000b89da) main_sp_fs_ribbon_pane_t3

0x0002,

0xfddd,	// (0x000b9ea5) main_sp_fs_ribbon_pane_t

0xe921,	// (0x000b89e9) main_sp_fs_ribbon_scheduler_pane

0xe929,	// (0x000b89f1) bg_main_sp_fs_ribbon_pane_g1

0xe932,	// (0x000b89fa) bg_main_sp_fs_ribbon_pane_g2

0xe93b,	// (0x000b8a03) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfde4,	// (0x000b9eac) bg_main_sp_fs_ribbon_pane_g

0xe943,	// (0x000b8a0b) main_sp_fs_ribbon_scheduler_pane_g1

0xe94c,	// (0x000b8a14) main_sp_fs_ribbon_scheduler_pane_g2

0xe955,	// (0x000b8a1d) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdeb,	// (0x000b9eb3) main_sp_fs_ribbon_scheduler_pane_g

0xe95e,	// (0x000b8a26) list_cale_mrui_pane

0x862e,	// (0x000b26f6) sp_fs_scroll_pane_cp07_ParamLimits

0x862e,	// (0x000b26f6) sp_fs_scroll_pane_cp07

0x864a,	// (0x000b2712) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x864a,	// (0x000b2712) bg_sp_fs_schedule_viewer_highlight

0xe96b,	// (0x000b8a33) list_single_sp_fs_schedule_track_pane_cp01

0xe973,	// (0x000b8a3b) list_sp_fs_schedule_track_pane

0xe97b,	// (0x000b8a43) sp_fs_scroll_pane_cp06_ParamLimits

0xe97b,	// (0x000b8a43) sp_fs_scroll_pane_cp06

0xcc28,	// (0x000b6cf0) bgmain_sp_fs_calendar_pane_g1

0x865a,	// (0x000b2722) list_single_cale_mrui_pane_ParamLimits

0x865a,	// (0x000b2722) list_single_cale_mrui_pane

0xa832,	// (0x000b48fa) list_single_cale_mrui_row_pane_ParamLimits

0xa832,	// (0x000b48fa) list_single_cale_mrui_row_pane

0xa83f,	// (0x000b4907) list_single_cale_mrui_row_pane_g1_ParamLimits

0xa83f,	// (0x000b4907) list_single_cale_mrui_row_pane_g1

0xa877,	// (0x000b493f) list_single_cale_mrui_row_pane_t1_ParamLimits

0xa877,	// (0x000b493f) list_single_cale_mrui_row_pane_t1

0x867c,	// (0x000b2744) list_single_cale_mrui_row_pane_t2_ParamLimits

0x867c,	// (0x000b2744) list_single_cale_mrui_row_pane_t2

0xa889,	// (0x000b4951) list_single_cale_mrui_row_pane_t3_ParamLimits

0xa889,	// (0x000b4951) list_single_cale_mrui_row_pane_t3

0xa8b8,	// (0x000b4980) list_single_cale_mrui_row_pane_t4_ParamLimits

0xa8b8,	// (0x000b4980) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf9,	// (0x000b9ec1) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf9,	// (0x000b9ec1) list_single_cale_mrui_row_pane_t

0x86e4,	// (0x000b27ac) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x86e4,	// (0x000b27ac) list_single_cmail_header_editor_pane_bg_cp01

0x870a,	// (0x000b27d2) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x870a,	// (0x000b27d2) list_single_cmail_header_editor_pane_bg_cp02

0x872a,	// (0x000b27f2) main_radioblah_text_pane_t1_ParamLimits

0x872a,	// (0x000b27f2) main_radioblah_text_pane_t1

0xe99a,	// (0x000b8a62) cam6_indi_pane_cp01

0xe9a2,	// (0x000b8a6a) cam6_mode_pane_cp01

0xe9aa,	// (0x000b8a72) cam6_pano_pane

0xe9b3,	// (0x000b8a7b) cam6_zoom_pane_cp01

0xe9bb,	// (0x000b8a83) cam6_pano_image_pane

0xe9c6,	// (0x000b8a8e) cam6_pano_pane_g1

0xe2d2,	// (0x000b839a) cam6_pano_pane_g2

0xe9cf,	// (0x000b8a97) cam6_pano_pane_g3

0xe9d8,	// (0x000b8aa0) cam6_pano_pane_g4

0xd1ca,	// (0x000b7292) cam6_pano_pane_g5

0xe9e1,	// (0x000b8aa9) cam6_pano_pane_g6

0xe9eb,	// (0x000b8ab3) cam6_pano_pane_g7

0xe9f3,	// (0x000b8abb) cam6_pano_pane_g8

0xe9fc,	// (0x000b8ac4) cam6_pano_pane_g9

0x0008,

0xfe02,	// (0x000b9eca) cam6_pano_pane_g

0x93ac,	// (0x000b3474) main_browser_tag_pane

0xe85a,	// (0x000b8922) grid_navstr_albumart_pane

0xea07,	// (0x000b8acf) cell_navstr_albumart_pane_ParamLimits

0xea07,	// (0x000b8acf) cell_navstr_albumart_pane

0xb571,	// (0x000b5639) cell_navstr_albumart_pane_g1

0xc62f,	// (0x000b66f7) cell_navstr_albumart_pane_g2

0xc63f,	// (0x000b6707) cell_navstr_albumart_pane_g3

0xc637,	// (0x000b66ff) cell_navstr_albumart_pane_g4

0x0003,

0xfe15,	// (0x000b9edd) cell_navstr_albumart_pane_g

0x8745,	// (0x000b280d) bt_list_pane_ParamLimits

0x8745,	// (0x000b280d) bt_list_pane

0xea29,	// (0x000b8af1) bt_list_pane_t1

0xea38,	// (0x000b8b00) bt_list_pane_t2

0x0001,

0xfe1e,	// (0x000b9ee6) bt_list_pane_t

0x93ac,	// (0x000b3474) main_cale_prevew_pane

0x875a,	// (0x000b2822) popup_cale_preview_window_ParamLimits

0x875a,	// (0x000b2822) popup_cale_preview_window

0xa4f7,	// (0x000b45bf) bg_popup_preview_window_pane_cp05_ParamLimits

0xa4f7,	// (0x000b45bf) bg_popup_preview_window_pane_cp05

0xea47,	// (0x000b8b0f) list_cale_preview_pane_ParamLimits

0xea47,	// (0x000b8b0f) list_cale_preview_pane

0xea53,	// (0x000b8b1b) list_double_cale_preview_pane_ParamLimits

0xea53,	// (0x000b8b1b) list_double_cale_preview_pane

0xea65,	// (0x000b8b2d) list_single_cale_preview_pane_ParamLimits

0xea65,	// (0x000b8b2d) list_single_cale_preview_pane

0xea79,	// (0x000b8b41) list_single_cale_preview_pane_g1

0xea81,	// (0x000b8b49) list_single_cale_preview_pane_t1_ParamLimits

0xea81,	// (0x000b8b49) list_single_cale_preview_pane_t1

0xea96,	// (0x000b8b5e) list_double_cale_preview_pane_g1

0xea9e,	// (0x000b8b66) list_double_cale_preview_pane_t1_ParamLimits

0xea9e,	// (0x000b8b66) list_double_cale_preview_pane_t1

0xeab3,	// (0x000b8b7b) list_double_cale_preview_pane_t2_ParamLimits

0xeab3,	// (0x000b8b7b) list_double_cale_preview_pane_t2

0x0001,

0xfe23,	// (0x000b9eeb) list_double_cale_preview_pane_t_ParamLimits

0xfe23,	// (0x000b9eeb) list_double_cale_preview_pane_t

0x93ac,	// (0x000b3474) main_ezdial_pane

0xa4f7,	// (0x000b45bf) main_sp_fs_email_pane_ParamLimits

0x7cf6,	// (0x000b1dbe) cmail_ddmenu_btn01_pane_ParamLimits

0x7cf6,	// (0x000b1dbe) cmail_ddmenu_btn01_pane

0x7d09,	// (0x000b1dd1) cmail_ddmenu_btn02_pane_ParamLimits

0x7d09,	// (0x000b1dd1) cmail_ddmenu_btn02_pane

0x7d2c,	// (0x000b1df4) cmail_ddmenu_btn03_pane_ParamLimits

0x7d2c,	// (0x000b1df4) cmail_ddmenu_btn03_pane

0x7d52,	// (0x000b1e1a) main_sp_fs_ctrlbar_pane_ParamLimits

0x7d76,	// (0x000b1e3e) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x83cc,	// (0x000b2494) list_cmail_body_pane_ParamLimits

0x8423,	// (0x000b24eb) bg_button_pane_cp12

0xe7da,	// (0x000b88a2) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe7da,	// (0x000b88a2) list_single_cmail_header_detail_pane_g3

0xa790,	// (0x000b4858) list_single_cmail_header_detail_pane_t2_ParamLimits

0xa790,	// (0x000b4858) list_single_cmail_header_detail_pane_t2

0x0001,

0xfda6,	// (0x000b9e6e) list_single_cmail_header_detail_pane_t_ParamLimits

0xfda6,	// (0x000b9e6e) list_single_cmail_header_detail_pane_t

0xa7d1,	// (0x000b4899) phacti_term_pane_t2_ParamLimits

0xa7d1,	// (0x000b4899) phacti_term_pane_t2

0x0001,

0xfdb0,	// (0x000b9e78) phacti_term_pane_t_ParamLimits

0xfdb0,	// (0x000b9e78) phacti_term_pane_t

0xeacb,	// (0x000b8b93) aid_size_list_single_double

0x8773,	// (0x000b283b) popup_ezdial_listscroll_window

0x878e,	// (0x000b2856) popup_number_entry_window_cp01

0xb3b7,	// (0x000b547f) bg_popup_call_pane_cp09

0xead7,	// (0x000b8b9f) ezdial_list_pane

0xeadf,	// (0x000b8ba7) scroll_pane_cp23

0xc81e,	// (0x000b68e6) bg_button_pane_cp028_ParamLimits

0xc81e,	// (0x000b68e6) bg_button_pane_cp028

0x879c,	// (0x000b2864) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x879c,	// (0x000b2864) cmail_ddmenu_btn01_pane_g1

0x87a8,	// (0x000b2870) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x87a8,	// (0x000b2870) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe28,	// (0x000b9ef0) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe28,	// (0x000b9ef0) cmail_ddmenu_btn01_pane_g

0xeae7,	// (0x000b8baf) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xeae7,	// (0x000b8baf) cmail_ddmenu_btn01_pane_t1

0xc81e,	// (0x000b68e6) bg_button_pane_cp029_ParamLimits

0xc81e,	// (0x000b68e6) bg_button_pane_cp029

0x87b4,	// (0x000b287c) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x87b4,	// (0x000b287c) cmail_ddmenu_btn02_pane_g1

0x87cc,	// (0x000b2894) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x87cc,	// (0x000b2894) cmail_ddmenu_btn02_pane_t1

0xa4f7,	// (0x000b45bf) bg_button_pane_cp031_ParamLimits

0xa4f7,	// (0x000b45bf) bg_button_pane_cp031

0x87b4,	// (0x000b287c) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x87b4,	// (0x000b287c) cmail_ddmenu_btn03_pane_g1

0x87cc,	// (0x000b2894) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x87cc,	// (0x000b2894) cmail_ddmenu_btn03_pane_t1

0x560b,	// (0x000af6d3) cell_dialer2_keypad_pane_t1_ParamLimits

0x5625,	// (0x000af6ed) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x5625,	// (0x000af6ed) cell_dialer2_keypad_pane_t1_copy1

0x757b,	// (0x000b1643) ncimui_group_button_pane

0xa4f7,	// (0x000b45bf) main_sp_fs_calendar_pane_ParamLimits

0x83e1,	// (0x000b24a9) list_single_cmail_header_caption_pane_ParamLimits

0xa7e6,	// (0x000b48ae) aid_recal_txt_sm_pane

0x93ac,	// (0x000b3474) mian_recal_day_pane

0xa820,	// (0x000b48e8) popup_sp_fs_cale_preview_window_ParamLimits

0xeafc,	// (0x000b8bc4) list_recal_day_pane

0xa902,	// (0x000b49ca) list_single_recal_day_pane_ParamLimits

0xa902,	// (0x000b49ca) list_single_recal_day_pane

0xeb23,	// (0x000b8beb) list_single_recal_day_pane_g1_ParamLimits

0xeb23,	// (0x000b8beb) list_single_recal_day_pane_g1

0xa914,	// (0x000b49dc) list_single_recal_day_pane_g2_ParamLimits

0xa914,	// (0x000b49dc) list_single_recal_day_pane_g2

0xa924,	// (0x000b49ec) list_single_recal_day_pane_g3_ParamLimits

0xa924,	// (0x000b49ec) list_single_recal_day_pane_g3

0x87f0,	// (0x000b28b8) list_single_recal_day_pane_g4_ParamLimits

0x87f0,	// (0x000b28b8) list_single_recal_day_pane_g4

0xa930,	// (0x000b49f8) list_single_recal_day_pane_g5_ParamLimits

0xa930,	// (0x000b49f8) list_single_recal_day_pane_g5

0xa940,	// (0x000b4a08) list_single_recal_day_pane_g6_ParamLimits

0xa940,	// (0x000b4a08) list_single_recal_day_pane_g6

0x0004,

0xfe37,	// (0x000b9eff) list_single_recal_day_pane_g_ParamLimits

0xfe37,	// (0x000b9eff) list_single_recal_day_pane_g

0xa954,	// (0x000b4a1c) list_single_recal_day_pane_t1

0xa966,	// (0x000b4a2e) list_single_recal_day_pane_t2

0x0001,

0xfe42,	// (0x000b9f0a) list_single_recal_day_pane_t

0x8810,	// (0x000b28d8) ncimui_query_button_pane_ParamLimits

0x8810,	// (0x000b28d8) ncimui_query_button_pane

0x8820,	// (0x000b28e8) ncimui_query_button_pane_t1_ParamLimits

0x8820,	// (0x000b28e8) ncimui_query_button_pane_t1

0xeb2f,	// (0x000b8bf7) ncimui_query_button_pane_t2_ParamLimits

0xeb2f,	// (0x000b8bf7) ncimui_query_button_pane_t2

0x0001,

0xfe47,	// (0x000b9f0f) ncimui_query_button_pane_t_ParamLimits

0xfe47,	// (0x000b9f0f) ncimui_query_button_pane_t

0x8833,	// (0x000b28fb) query_button_pane_ParamLimits

0x8833,	// (0x000b28fb) query_button_pane

0x93ac,	// (0x000b3474) bg_button_pane_cp0028

0xeb42,	// (0x000b8c0a) query_button_pane_t1

0x36a4,	// (0x000ad76c) main_tport_pane_ParamLimits

0x8290,	// (0x000b2358) bg_popup_window_pane_cp01_ParamLimits

0x8290,	// (0x000b2358) bg_popup_window_pane_cp01

0x82ab,	// (0x000b2373) heading_pane_cp08_ParamLimits

0x82ab,	// (0x000b2373) heading_pane_cp08

0x82be,	// (0x000b2386) heading_pane_cp07_ParamLimits

0x82be,	// (0x000b2386) heading_pane_cp07

0x8365,	// (0x000b242d) cell_tport_appsw_pane_g2

0x0002,

0xfd93,	// (0x000b9e5b) cell_tport_appsw_pane_g

0x2c2b,	// (0x000accf3) input_candi_list_open_g1

0xad5f,	// (0x000b4e27) list_cale_time_pane_g6_ParamLimits

0xad5f,	// (0x000b4e27) list_cale_time_pane_g6

0x4467,	// (0x000ae52f) aid_size_touch_calib_1_ParamLimits

0x4467,	// (0x000ae52f) aid_size_touch_calib_1

0x4479,	// (0x000ae541) aid_size_touch_calib_2_ParamLimits

0x4479,	// (0x000ae541) aid_size_touch_calib_2

0x4491,	// (0x000ae559) aid_size_touch_calib_3_ParamLimits

0x4491,	// (0x000ae559) aid_size_touch_calib_3

0x44af,	// (0x000ae577) aid_size_touch_calib_4_ParamLimits

0x44af,	// (0x000ae577) aid_size_touch_calib_4

0x44c7,	// (0x000ae58f) main_touch_calib_button_group_pane_ParamLimits

0x44c7,	// (0x000ae58f) main_touch_calib_button_group_pane

0x44df,	// (0x000ae5a7) main_touch_calib_pane_g1_ParamLimits

0x44f1,	// (0x000ae5b9) main_touch_calib_pane_g2_ParamLimits

0x4503,	// (0x000ae5cb) main_touch_calib_pane_g3_ParamLimits

0x4515,	// (0x000ae5dd) main_touch_calib_pane_g4_ParamLimits

0xf756,	// (0x000b981e) main_touch_calib_pane_g_ParamLimits

0x4527,	// (0x000ae5ef) main_touch_calib_pane_t1_ParamLimits

0x4541,	// (0x000ae609) main_touch_calib_pane_t2_ParamLimits

0x455b,	// (0x000ae623) main_touch_calib_pane_t3_ParamLimits

0x456f,	// (0x000ae637) main_touch_calib_pane_t4_ParamLimits

0x4583,	// (0x000ae64b) main_touch_calib_pane_t5_ParamLimits

0xf75f,	// (0x000b9827) main_touch_calib_pane_t_ParamLimits

0xcf88,	// (0x000b7050) list_single_fp_cale_pane_g3_ParamLimits

0xcf88,	// (0x000b7050) list_single_fp_cale_pane_g3

0x9424,	// (0x000b34ec) bg_button_pane_cp012_ParamLimits

0x9424,	// (0x000b34ec) bg_vkb2_func_pane_cp03_ParamLimits

0x65a3,	// (0x000b066b) cell_vitu2_function_top_pane_g1_ParamLimits

0x9424,	// (0x000b34ec) bg_vkb2_func_pane_cp04_ParamLimits

0x7509,	// (0x000b15d1) main_ncimui_button_group_pane_ParamLimits

0x7509,	// (0x000b15d1) main_ncimui_button_group_pane

0x7569,	// (0x000b1631) main_ncimui_pane_t3_ParamLimits

0x7569,	// (0x000b1631) main_ncimui_pane_t3

0xe870,	// (0x000b8938) phacti_button_group_pane

0xeacb,	// (0x000b8b93) aid_size_list_single_double_ParamLimits

0x8773,	// (0x000b283b) popup_ezdial_listscroll_window_ParamLimits

0x878e,	// (0x000b2856) popup_number_entry_window_cp01_ParamLimits

0x8846,	// (0x000b290e) phacti_button_pane_ParamLimits

0x8846,	// (0x000b290e) phacti_button_pane

0x93ac,	// (0x000b3474) bg_button_pane_cp14

0xeb50,	// (0x000b8c18) phacti_button_pane_t1

0x8857,	// (0x000b291f) main_touch_calib_button_pane_ParamLimits

0x8857,	// (0x000b291f) main_touch_calib_button_pane

0xa2b0,	// (0x000b4378) bg_button_pane_cp18_ParamLimits

0xa2b0,	// (0x000b4378) bg_button_pane_cp18

0xeb5e,	// (0x000b8c26) main_touch_calib_button_pane_t1_ParamLimits

0xeb5e,	// (0x000b8c26) main_touch_calib_button_pane_t1

0xeb74,	// (0x000b8c3c) main_touch_calib_button_pane_t2_ParamLimits

0xeb74,	// (0x000b8c3c) main_touch_calib_button_pane_t2

0x0001,

0xfe4c,	// (0x000b9f14) main_touch_calib_button_pane_t_ParamLimits

0xfe4c,	// (0x000b9f14) main_touch_calib_button_pane_t

0x93ac,	// (0x000b3474) cell_ncimui_button_pane

0x93ac,	// (0x000b3474) bg_button_pane_cp032

0xeb9b,	// (0x000b8c63) cell_ncimui_button_pane_t1

0x9c71,	// (0x000b3d39) image3_infobar_pane_ParamLimits

0x9c71,	// (0x000b3d39) image3_infobar_pane

0x7945,	// (0x000b1a0d) fs_bigclock_status_pane_ParamLimits

0x7945,	// (0x000b1a0d) fs_bigclock_status_pane

0x7952,	// (0x000b1a1a) main_fs_bigclock_clock_pane_ParamLimits

0x7952,	// (0x000b1a1a) main_fs_bigclock_clock_pane

0x796e,	// (0x000b1a36) main_fs_bigclock_indi_pane_ParamLimits

0x796e,	// (0x000b1a36) main_fs_bigclock_indi_pane

0x7987,	// (0x000b1a4f) main_fs_bigclock_swipe_pane_ParamLimits

0x7987,	// (0x000b1a4f) main_fs_bigclock_swipe_pane

0x93ac,	// (0x000b3474) main_fs_clock_dumped_data

0xe3df,	// (0x000b84a7) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe3df,	// (0x000b84a7) list_single_fs_bigclock_indicator_pane_g1

0xe3fa,	// (0x000b84c2) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe3fa,	// (0x000b84c2) list_single_fs_bigclock_indicator_pane_g2

0xe414,	// (0x000b84dc) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe414,	// (0x000b84dc) list_single_fs_bigclock_indicator_pane_g3

0xe42e,	// (0x000b84f6) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe42e,	// (0x000b84f6) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc74,	// (0x000b9d3c) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc74,	// (0x000b9d3c) list_single_fs_bigclock_indicator_pane_g

0xe457,	// (0x000b851f) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe457,	// (0x000b851f) list_single_fs_bigclock_indicator_pane_t1

0xe47f,	// (0x000b8547) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe47f,	// (0x000b8547) list_single_fs_bigclock_indicator_pane_t2

0xe4a7,	// (0x000b856f) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe4a7,	// (0x000b856f) list_single_fs_bigclock_indicator_pane_t3

0xe4cf,	// (0x000b8597) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe4cf,	// (0x000b8597) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc7f,	// (0x000b9d47) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc7f,	// (0x000b9d47) list_single_fs_bigclock_indicator_pane_t

0xeba9,	// (0x000b8c71) image3_infobar_fav_pane_ParamLimits

0xeba9,	// (0x000b8c71) image3_infobar_fav_pane

0xebb9,	// (0x000b8c81) image3_infobar_loc_pane_ParamLimits

0xebb9,	// (0x000b8c81) image3_infobar_loc_pane

0xebcd,	// (0x000b8c95) image3_infobar_time_pane_ParamLimits

0xebcd,	// (0x000b8c95) image3_infobar_time_pane

0xcc28,	// (0x000b6cf0) image3_infobar_time_pane_g1

0xebdd,	// (0x000b8ca5) image3_infobar_time_pane_t1

0xcc28,	// (0x000b6cf0) image3_infobar_loc_pane_g1

0xebeb,	// (0x000b8cb3) image3_infobar_loc_pane_g2

0x0001,

0xfe51,	// (0x000b9f19) image3_infobar_loc_pane_g

0xebf3,	// (0x000b8cbb) image3_infobar_loc_pane_t1

0xcc28,	// (0x000b6cf0) image3_infobar_fav_pane_g1

0xec01,	// (0x000b8cc9) image3_infobar_fav_pane_g2

0x0001,

0xfe56,	// (0x000b9f1e) image3_infobar_fav_pane_g

0xec09,	// (0x000b8cd1) fs_bigclock_status_battery_pane

0xec12,	// (0x000b8cda) fs_bigclock_status_signal_pane

0xec1b,	// (0x000b8ce3) fs_bigclock_status_title_pane

0xec24,	// (0x000b8cec) fs_bigclock_status_signal_pane_g1

0xec2d,	// (0x000b8cf5) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe5b,	// (0x000b9f23) fs_bigclock_status_signal_pane_g

0xec35,	// (0x000b8cfd) fs_bigclock_status_battery_pane_g1

0xec3e,	// (0x000b8d06) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe60,	// (0x000b9f28) fs_bigclock_status_battery_pane_g

0xec46,	// (0x000b8d0e) fs_bigclock_status_title_pane_t1

0xcc28,	// (0x000b6cf0) main_fs_bigclock_clock_pane_g1

0x886c,	// (0x000b2934) main_fs_bigclock_clock_pane_g2

0x886c,	// (0x000b2934) main_fs_bigclock_clock_pane_g3

0x886c,	// (0x000b2934) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe65,	// (0x000b9f2d) main_fs_bigclock_clock_pane_g

0x8874,	// (0x000b293c) main_fs_bigclock_clock_pane_t1

0x8882,	// (0x000b294a) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe6e,	// (0x000b9f36) main_fs_bigclock_clock_pane_t

0xec54,	// (0x000b8d1c) list_single_fs_bigclock_indicator_pane_ParamLimits

0xec54,	// (0x000b8d1c) list_single_fs_bigclock_indicator_pane

0x8891,	// (0x000b2959) list_single_fs_bigclock_pane_ParamLimits

0x8891,	// (0x000b2959) list_single_fs_bigclock_pane

0xec6e,	// (0x000b8d36) main_fs_bigclock_indicator_pane_t1

0xec7d,	// (0x000b8d45) list_single_fs_bigclock_pane_g1

0xec85,	// (0x000b8d4d) list_single_fs_bigclock_pane_t1

0xcc28,	// (0x000b6cf0) main_fs_bigclock_swipe_pane_g1

0xecc8,	// (0x000b8d90) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe7f,	// (0x000b9f47) main_fs_bigclock_swipe_pane_g

0xecd0,	// (0x000b8d98) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xecd0,	// (0x000b8d98) main_fs_bigclock_swipe_pane_t1

0x2546,	// (0x000ac60e) call_type_pane_ParamLimits

0x93ac,	// (0x000b3474) main_btmg_pane

0xa86b,	// (0x000b4933) list_single_cale_mrui_row_pane_g2_ParamLimits

0xa86b,	// (0x000b4933) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdf2,	// (0x000b9eba) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdf2,	// (0x000b9eba) list_single_cale_mrui_row_pane_g

0xa8f1,	// (0x000b49b9) list_recal_vselct_arw_lo_pane

0xeb1b,	// (0x000b8be3) list_recal_vselct_arw_up_pane

0xa8f9,	// (0x000b49c1) list_recal_vselct_pane

0x88f4,	// (0x000b29bc) btmg_button_pane

0x88fe,	// (0x000b29c6) main_btmg_pane_g1

0x93ac,	// (0x000b3474) bg_button_pane_cp044

0xeced,	// (0x000b8db5) btmg_button_pane_t1

0xc80a,	// (0x000b68d2) aid_listscroll_gen

0xa4f7,	// (0x000b45bf) main_cntbar_detail_pane

0xe7bc,	// (0x000b8884) list_cmail_folder_pane

0xbfa3,	// (0x000b606b) sp_fs_scroll_pane_cp03_ParamLimits

0x8908,	// (0x000b29d0) list_single_fs_dyc_pane_cp01_ParamLimits

0x8908,	// (0x000b29d0) list_single_fs_dyc_pane_cp01

0xecfb,	// (0x000b8dc3) aid_size_cmail_indent

0xa978,	// (0x000b4a40) list_single_dyc_row_pane_cp01

0x894c,	// (0x000b2a14) cntbar_detail_list_pane_ParamLimits

0x894c,	// (0x000b2a14) cntbar_detail_list_pane

0x8998,	// (0x000b2a60) main_cntbar_detail_cont_pane_ParamLimits

0x8998,	// (0x000b2a60) main_cntbar_detail_cont_pane

0xbfa3,	// (0x000b606b) scroll_pane_cp032_ParamLimits

0xbfa3,	// (0x000b606b) scroll_pane_cp032

0x89ac,	// (0x000b2a74) cntbar_detail_list_event_pane_ParamLimits

0x89ac,	// (0x000b2a74) cntbar_detail_list_event_pane

0x895c,	// (0x000b2a24) cntbar_detail_list_shct_pane

0xabe2,	// (0x000b4caa) aid_list_gen

0xed04,	// (0x000b8dcc) aid_scroll

0xed0d,	// (0x000b8dd5) aid_size_touch_scroll_bar

0x6c94,	// (0x000b0d5c) aid_list_double

0xeb92,	// (0x000b8c5a) aid_list_single

0x6c82,	// (0x000b0d4a) aid_list_single_lg

0xa981,	// (0x000b4a49) aid_list_z_g_a_sm

0xa989,	// (0x000b4a51) aid_list_z_g_d

0xa991,	// (0x000b4a59) aid_txt_z_prm

0x89bc,	// (0x000b2a84) aid_txt_z_prm_cp01

0x89ca,	// (0x000b2a92) aid_txt_z_sec

0x89d8,	// (0x000b2aa0) main_cntbar_detail_cont_pane_g1_ParamLimits

0x89d8,	// (0x000b2aa0) main_cntbar_detail_cont_pane_g1

0x89ec,	// (0x000b2ab4) main_cntbar_detail_cont_pane_g2_ParamLimits

0x89ec,	// (0x000b2ab4) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe84,	// (0x000b9f4c) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe84,	// (0x000b9f4c) main_cntbar_detail_cont_pane_g

0xed16,	// (0x000b8dde) main_cntbar_detail_cont_pane_t1

0xed24,	// (0x000b8dec) main_cntbar_detail_cont_pane_t2

0xed32,	// (0x000b8dfa) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe89,	// (0x000b9f51) main_cntbar_detail_cont_pane_t

0x89fc,	// (0x000b2ac4) cell_cntbar_detail_list_shct_pane_ParamLimits

0x89fc,	// (0x000b2ac4) cell_cntbar_detail_list_shct_pane

0xed40,	// (0x000b8e08) cntbar_detail_list_shct_pane_g1

0xed49,	// (0x000b8e11) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe90,	// (0x000b9f58) cntbar_detail_list_shct_pane_g

0x8a10,	// (0x000b2ad8) cntbar_detail_list_event_pane_g1_ParamLimits

0x8a10,	// (0x000b2ad8) cntbar_detail_list_event_pane_g1

0x8a1c,	// (0x000b2ae4) cntbar_detail_list_event_pane_g2_ParamLimits

0x8a1c,	// (0x000b2ae4) cntbar_detail_list_event_pane_g2

0x0005,

0xfe95,	// (0x000b9f5d) cntbar_detail_list_event_pane_g_ParamLimits

0xfe95,	// (0x000b9f5d) cntbar_detail_list_event_pane_g

0x8a88,	// (0x000b2b50) cntbar_detail_list_event_pane_t1_ParamLimits

0x8a88,	// (0x000b2b50) cntbar_detail_list_event_pane_t1

0x8a9d,	// (0x000b2b65) cntbar_detail_list_event_pane_t2_ParamLimits

0x8a9d,	// (0x000b2b65) cntbar_detail_list_event_pane_t2

0x0002,

0xfea2,	// (0x000b9f6a) cntbar_detail_list_event_pane_t_ParamLimits

0xfea2,	// (0x000b9f6a) cntbar_detail_list_event_pane_t

0xcc28,	// (0x000b6cf0) cell_cntbar_detail_list_shct_pane_g1

0xb36f,	// (0x000b5437) navi_pane_mv_g3

0xa4f7,	// (0x000b45bf) main_cntbar_detail_pane_ParamLimits

0x93ac,	// (0x000b3474) main_notif_wgt_pane

0x9a87,	// (0x000b3b4f) aid_tch_main_mp4_pane_g4

0x9c69,	// (0x000b3d31) popup_slider_window_cp02

0xa8e7,	// (0x000b49af) list_recal_day_event_pane

0x8920,	// (0x000b29e8) cntbar_detail_btn_pane_ParamLimits

0x8920,	// (0x000b29e8) cntbar_detail_btn_pane

0x8936,	// (0x000b29fe) cntbar_detail_btn_pane_cp01_ParamLimits

0x8936,	// (0x000b29fe) cntbar_detail_btn_pane_cp01

0x895c,	// (0x000b2a24) cntbar_detail_list_shct_pane_ParamLimits

0x896c,	// (0x000b2a34) cntbar_detail_pane_g1_ParamLimits

0x896c,	// (0x000b2a34) cntbar_detail_pane_g1

0x897c,	// (0x000b2a44) cntbar_detail_pane_t1_ParamLimits

0x897c,	// (0x000b2a44) cntbar_detail_pane_t1

0x8a28,	// (0x000b2af0) cntbar_detail_list_event_pane_g3_ParamLimits

0x8a28,	// (0x000b2af0) cntbar_detail_list_event_pane_g3

0x8a40,	// (0x000b2b08) cntbar_detail_list_event_pane_g4_ParamLimits

0x8a40,	// (0x000b2b08) cntbar_detail_list_event_pane_g4

0x8a58,	// (0x000b2b20) cntbar_detail_list_event_pane_g5_ParamLimits

0x8a58,	// (0x000b2b20) cntbar_detail_list_event_pane_g5

0x8a70,	// (0x000b2b38) cntbar_detail_list_event_pane_g6_ParamLimits

0x8a70,	// (0x000b2b38) cntbar_detail_list_event_pane_g6

0x8ab2,	// (0x000b2b7a) cntbar_detail_list_event_pane_t3_ParamLimits

0x8ab2,	// (0x000b2b7a) cntbar_detail_list_event_pane_t3

0x8ac4,	// (0x000b2b8c) popup_notif_wgt_window_ParamLimits

0x8ac4,	// (0x000b2b8c) popup_notif_wgt_window

0x8add,	// (0x000b2ba5) popup_submenu_window_cp01_ParamLimits

0x8add,	// (0x000b2ba5) popup_submenu_window_cp01

0xb3b7,	// (0x000b547f) bg_popup_window_pane_cp10

0xed52,	// (0x000b8e1a) listscroll_notif_wgt_pane

0xed63,	// (0x000b8e2b) list_notif_wgt_window

0xed6c,	// (0x000b8e34) scroll_pane_cp033

0x8aef,	// (0x000b2bb7) list_notif_wgt_row_pane_ParamLimits

0x8aef,	// (0x000b2bb7) list_notif_wgt_row_pane

0xed75,	// (0x000b8e3d) aid_size_list_notif_wgt_del

0xed82,	// (0x000b8e4a) list_notif_wgt_row_pane_g1

0xed8e,	// (0x000b8e56) list_notif_wgt_row_pane_g2

0xed9a,	// (0x000b8e62) list_notif_wgt_row_pane_g3

0x0002,

0xfea9,	// (0x000b9f71) list_notif_wgt_row_pane_g

0xeda7,	// (0x000b8e6f) list_notif_wgt_row_pane_t1

0xedbc,	// (0x000b8e84) list_notif_wgt_row_pane_t2

0xedce,	// (0x000b8e96) list_notif_wgt_row_pane_t3

0x0002,

0xfeb0,	// (0x000b9f78) list_notif_wgt_row_pane_t

0xd8d3,	// (0x000b799b) list_recal_day_event_pane_g1

0xede0,	// (0x000b8ea8) list_recal_day_event_pane_t1

0x93ac,	// (0x000b3474) bg_button_pane_cp045

0xedef,	// (0x000b8eb7) cntbar_detail_btn_pane_t1

0xc81e,	// (0x000b68e6) main_callh_pane_ParamLimits

0xc81e,	// (0x000b68e6) main_callh_pane

0x93ac,	// (0x000b3474) main_coverflow0_pane

0x93ac,	// (0x000b3474) main_wgtman_pane

0x7995,	// (0x000b1a5d) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x7995,	// (0x000b1a5d) main_fs_bigclock_unlock_btn_pane

0x835d,	// (0x000b2425) bg_button_pane_cp16

0x836d,	// (0x000b2435) cell_tport_appsw_pane_g3

0x8aff,	// (0x000b2bc7) cf0_flow_pane_ParamLimits

0x8aff,	// (0x000b2bc7) cf0_flow_pane

0xedfd,	// (0x000b8ec5) listscroll_cf0_pane

0xee08,	// (0x000b8ed0) main_cf0_pane_g1

0x8b14,	// (0x000b2bdc) main_cf0_pane_t1_ParamLimits

0x8b14,	// (0x000b2bdc) main_cf0_pane_t1

0x8b2b,	// (0x000b2bf3) main_cf0_pane_t2_ParamLimits

0x8b2b,	// (0x000b2bf3) main_cf0_pane_t2

0x0001,

0xfebc,	// (0x000b9f84) main_cf0_pane_t_ParamLimits

0xfebc,	// (0x000b9f84) main_cf0_pane_t

0xee1a,	// (0x000b8ee2) scroll_pane_cp11

0x8b42,	// (0x000b2c0a) cf0_flow_pane_g1

0x8b4a,	// (0x000b2c12) cf0_flow_pane_g2

0x0001,

0xfec1,	// (0x000b9f89) cf0_flow_pane_g

0x8b52,	// (0x000b2c1a) cf0_flow_pane_t1

0x93ac,	// (0x000b3474) main_call6_pane

0x93ac,	// (0x000b3474) main_calllock_pane

0x8b60,	// (0x000b2c28) call6_btn_grp_pane_ParamLimits

0x8b60,	// (0x000b2c28) call6_btn_grp_pane

0x8b7a,	// (0x000b2c42) call6_pane_g1_ParamLimits

0x8b7a,	// (0x000b2c42) call6_pane_g1

0x8b8f,	// (0x000b2c57) popup_call6_1st_window_ParamLimits

0x8b8f,	// (0x000b2c57) popup_call6_1st_window

0x8ba0,	// (0x000b2c68) popup_call6_2nd_window_ParamLimits

0x8ba0,	// (0x000b2c68) popup_call6_2nd_window

0x8bb1,	// (0x000b2c79) cell_call6_btn_pane_ParamLimits

0x8bb1,	// (0x000b2c79) cell_call6_btn_pane

0xb3b7,	// (0x000b547f) bg_popup_call2_in_pane_cp03

0xee25,	// (0x000b8eed) popup_call6_1st_window_g1

0xee2d,	// (0x000b8ef5) popup_call6_1st_window_g2

0xee35,	// (0x000b8efd) popup_call6_1st_window_g3

0x0002,

0xfec6,	// (0x000b9f8e) popup_call6_1st_window_g

0xee3d,	// (0x000b8f05) popup_call6_1st_window_t1

0xee4c,	// (0x000b8f14) popup_call6_1st_window_t2

0xee5c,	// (0x000b8f24) popup_call6_1st_window_t3

0x0002,

0xfecd,	// (0x000b9f95) popup_call6_1st_window_t

0xb3b7,	// (0x000b547f) bg_popup_call2_in_pane_cp04

0xee25,	// (0x000b8eed) popup_call6_2nd_window_g1

0xee2d,	// (0x000b8ef5) popup_call6_2nd_window_g2

0xee35,	// (0x000b8efd) popup_call6_2nd_window_g3

0x0002,

0xfec6,	// (0x000b9f8e) popup_call6_2nd_window_g

0xee3d,	// (0x000b8f05) popup_call6_2nd_window_t1

0x93ac,	// (0x000b3474) bg_button_pane_cp15

0xee6c,	// (0x000b8f34) cell_call6_btn_pane_g1

0xee75,	// (0x000b8f3d) cell_call6_btn_pane_t1

0x8bc5,	// (0x000b2c8d) listscroll_wgtman_pane_ParamLimits

0x8bc5,	// (0x000b2c8d) listscroll_wgtman_pane

0x8be6,	// (0x000b2cae) wgtman_btn_pane_ParamLimits

0x8be6,	// (0x000b2cae) wgtman_btn_pane

0xb174,	// (0x000b523c) aid_scroll_copy1

0xee84,	// (0x000b8f4c) list_wgtman_pane

0x8c29,	// (0x000b2cf1) wgtman_btn_pane_g1_ParamLimits

0x8c29,	// (0x000b2cf1) wgtman_btn_pane_g1

0x8c55,	// (0x000b2d1d) wgtman_btn_pane_t1_ParamLimits

0x8c55,	// (0x000b2d1d) wgtman_btn_pane_t1

0xee8e,	// (0x000b8f56) wgtman_btn_pane_t2_ParamLimits

0xee8e,	// (0x000b8f56) wgtman_btn_pane_t2

0x0001,

0xfed4,	// (0x000b9f9c) wgtman_btn_pane_t_ParamLimits

0xfed4,	// (0x000b9f9c) wgtman_btn_pane_t

0x8c92,	// (0x000b2d5a) listrow_wgtman_pane_ParamLimits

0x8c92,	// (0x000b2d5a) listrow_wgtman_pane

0x8ca5,	// (0x000b2d6d) listrow_wgtman_pane_g1

0x8cb2,	// (0x000b2d7a) listrow_wgtman_pane_g2

0x0001,

0xfed9,	// (0x000b9fa1) listrow_wgtman_pane_g

0x8cd0,	// (0x000b2d98) listrow_wgtman_pane_t1

0x8ce8,	// (0x000b2db0) listrow_wgtman_pane_t2

0x0001,

0xfede,	// (0x000b9fa6) listrow_wgtman_pane_t

0x8d0e,	// (0x000b2dd6) wait_bar_pane_cp09

0xeea5,	// (0x000b8f6d) main_calllock_btn_pane

0xeeaf,	// (0x000b8f77) main_calllock_pane_g1

0x93ac,	// (0x000b3474) bg_button_pane_cp17

0xeeba,	// (0x000b8f82) main_calllock_btn_pane_g1

0xeec3,	// (0x000b8f8b) main_calllock_btn_pane_t1

0x93ac,	// (0x000b3474) main_dialer3_pane

0x93ac,	// (0x000b3474) main_fmrd2_pane

0xcc28,	// (0x000b6cf0) main_fs_bigclock_unlock_btn_pane_g1

0xeeda,	// (0x000b8fa2) main_fs_bigclock_unlock_btn_pane_t1

0x8d20,	// (0x000b2de8) area_fmrd2_info_pane_ParamLimits

0x8d20,	// (0x000b2de8) area_fmrd2_info_pane

0x8d31,	// (0x000b2df9) area_fmrd2_visual_pane_ParamLimits

0x8d31,	// (0x000b2df9) area_fmrd2_visual_pane

0x8d3f,	// (0x000b2e07) fmrd2_indi_pane_ParamLimits

0x8d3f,	// (0x000b2e07) fmrd2_indi_pane

0x8d4c,	// (0x000b2e14) area_fmrd2_visual_pane_g1

0x8d54,	// (0x000b2e1c) area_fmrd2_visual_pane_t1

0x8d64,	// (0x000b2e2c) area_fmrd2_visual_pane_t2

0x8d74,	// (0x000b2e3c) area_fmrd2_visual_pane_t3

0x0002,

0xfee8,	// (0x000b9fb0) area_fmrd2_visual_pane_t

0x8d84,	// (0x000b2e4c) area_fmrd2_info_pane_g1

0x8d8c,	// (0x000b2e54) area_fmrd2_info_pane_t1

0x8d9c,	// (0x000b2e64) area_fmrd2_info_pane_t2

0x8dac,	// (0x000b2e74) area_fmrd2_info_pane_t3

0x8dbc,	// (0x000b2e84) area_fmrd2_info_pane_t4

0x0003,

0xfeef,	// (0x000b9fb7) area_fmrd2_info_pane_t

0x8dca,	// (0x000b2e92) fmrd2_indi_pane_t1

0x8dda,	// (0x000b2ea2) fmrd2_indi_pane_t2

0x8dea,	// (0x000b2eb2) fmrd2_indi_pane_t3

0x0002,

0xfef8,	// (0x000b9fc0) fmrd2_indi_pane_t

0xe43d,	// (0x000b8505) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe43d,	// (0x000b8505) list_single_fs_bigclock_indicator_pane_g5

0xe4e4,	// (0x000b85ac) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe4e4,	// (0x000b85ac) list_single_fs_bigclock_indicator_pane_t5

0x855c,	// (0x000b2624) aid_cell_bcale_month_pane_ParamLimits

0x855c,	// (0x000b2624) aid_cell_bcale_month_pane

0x857a,	// (0x000b2642) bcale_month_pane_ParamLimits

0x857a,	// (0x000b2642) bcale_month_pane

0x859e,	// (0x000b2666) bcale_preview_pane_ParamLimits

0x859e,	// (0x000b2666) bcale_preview_pane

0xec85,	// (0x000b8d4d) list_single_fs_bigclock_pane_t1_ParamLimits

0xeca4,	// (0x000b8d6c) list_single_fs_bigclock_pane_t2_ParamLimits

0xeca4,	// (0x000b8d6c) list_single_fs_bigclock_pane_t2

0x0001,

0xfe7a,	// (0x000b9f42) list_single_fs_bigclock_pane_t_ParamLimits

0xfe7a,	// (0x000b9f42) list_single_fs_bigclock_pane_t

0xeed2,	// (0x000b8f9a) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfee3,	// (0x000b9fab) main_fs_bigclock_unlock_btn_pane_g

0x8dfa,	// (0x000b2ec2) aid_dia3_key_size_ParamLimits

0x8dfa,	// (0x000b2ec2) aid_dia3_key_size

0x8e09,	// (0x000b2ed1) aid_dia3_listrow_size_ParamLimits

0x8e09,	// (0x000b2ed1) aid_dia3_listrow_size

0x8e1e,	// (0x000b2ee6) dia3_keypad_fun_pane_ParamLimits

0x8e1e,	// (0x000b2ee6) dia3_keypad_fun_pane

0x8e3a,	// (0x000b2f02) dia3_keypad_num_pane_ParamLimits

0x8e3a,	// (0x000b2f02) dia3_keypad_num_pane

0x8e55,	// (0x000b2f1d) dia3_listscroll_pane_ParamLimits

0x8e55,	// (0x000b2f1d) dia3_listscroll_pane

0x8e68,	// (0x000b2f30) dia3_numentry_pane_ParamLimits

0x8e68,	// (0x000b2f30) dia3_numentry_pane

0xeee8,	// (0x000b8fb0) dia3_list_pane

0xeef3,	// (0x000b8fbb) scroll_pane_cp12

0x93ac,	// (0x000b3474) bg_dia3_numentry_pane

0x8e7c,	// (0x000b2f44) dia3_numentry_pane_t1

0x8e8b,	// (0x000b2f53) cell_dia3_key_num_pane

0x8e93,	// (0x000b2f5b) cell_dia3_key0_fun_pane_ParamLimits

0x8e93,	// (0x000b2f5b) cell_dia3_key0_fun_pane

0x8ea7,	// (0x000b2f6f) cell_dia3_key1_fun_pane_ParamLimits

0x8ea7,	// (0x000b2f6f) cell_dia3_key1_fun_pane

0x8ebf,	// (0x000b2f87) dia3_listrow_pane

0xe14c,	// (0x000b8214) bg_dia3_numentry_pane_g1

0x93ac,	// (0x000b3474) bg_button_pane_cp21

0xeefe,	// (0x000b8fc6) cell_dia3_key_num_pane_t1

0xef0c,	// (0x000b8fd4) cell_dia3_key_num_pane_t2

0xef1b,	// (0x000b8fe3) cell_dia3_key_num_pane_t3

0xef2a,	// (0x000b8ff2) cell_dia3_key_num_pane_t4

0x0003,

0xfeff,	// (0x000b9fc7) cell_dia3_key_num_pane_t

0x93ac,	// (0x000b3474) bg_button_pane_cp19

0x8ed1,	// (0x000b2f99) cell_dia3_key0_fun_pane_g1

0x93ac,	// (0x000b3474) bg_button_pane_cp20

0x8ed9,	// (0x000b2fa1) cell_dia3_key1_fun_pane_g1

0x8ee1,	// (0x000b2fa9) area_left_week_number_pane

0x8eed,	// (0x000b2fb5) area_top_day_name_pane

0x8f00,	// (0x000b2fc8) frame_month_view_pane

0xef39,	// (0x000b9001) grid_month_view_pane

0x8f13,	// (0x000b2fdb) cell_top_day_name_pane_ParamLimits

0x8f13,	// (0x000b2fdb) cell_top_day_name_pane

0x8f40,	// (0x000b3008) cell_area_left_week_number_pane_ParamLimits

0x8f40,	// (0x000b3008) cell_area_left_week_number_pane

0x8f54,	// (0x000b301c) cell_month_view_pane_ParamLimits

0x8f54,	// (0x000b301c) cell_month_view_pane

0xef47,	// (0x000b900f) frm_month_g1

0x8f81,	// (0x000b3049) frm_month_g2

0x8f94,	// (0x000b305c) frm_month_g3

0x8fa7,	// (0x000b306f) frm_month_g4

0x8fba,	// (0x000b3082) frm_month_g5

0x8fcd,	// (0x000b3095) frm_month_g6

0x8fe0,	// (0x000b30a8) frm_month_g7

0xef54,	// (0x000b901c) frm_month_g8

0x8ff3,	// (0x000b30bb) frm_month_g9

0x9003,	// (0x000b30cb) frm_month_g10

0x9013,	// (0x000b30db) frm_month_g11

0x9023,	// (0x000b30eb) frm_month_g12

0x9035,	// (0x000b30fd) frm_month_g13

0x9047,	// (0x000b310f) frm_month_g14

0x905b,	// (0x000b3123) frm_month_g15

0x906f,	// (0x000b3137) frm_month_g16

0x000f,

0xff08,	// (0x000b9fd0) frm_month_g

0xef61,	// (0x000b9029) cell_top_day_name_pane_t1

0x9083,	// (0x000b314b) cell_area_left_week_number_pane_g1

0x908f,	// (0x000b3157) cell_area_left_week_number_pane_t1

0xce88,	// (0x000b6f50) cell_month_view_pane_g1

0x90a2,	// (0x000b316a) cell_month_view_pane_t1

0x93ac,	// (0x000b3474) main_fps_pane

0xe6d4,	// (0x000b879c) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe6d4,	// (0x000b879c) cmail_ddmenu_btn02_pane_cp1

0xe6f0,	// (0x000b87b8) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe6f0,	// (0x000b87b8) cmail_ddmenu_btn02_pane_cp2

0x87c0,	// (0x000b2888) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x87c0,	// (0x000b2888) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe2d,	// (0x000b9ef5) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe2d,	// (0x000b9ef5) cmail_ddmenu_btn02_pane_g

0x87de,	// (0x000b28a6) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x87de,	// (0x000b28a6) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe32,	// (0x000b9efa) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe32,	// (0x000b9efa) cmail_ddmenu_btn02_pane_t

0x90b5,	// (0x000b317d) fps_text_pane_ParamLimits

0x90b5,	// (0x000b317d) fps_text_pane

0x90cc,	// (0x000b3194) main_fps_pane_g1_ParamLimits

0x90cc,	// (0x000b3194) main_fps_pane_g1

0x90e6,	// (0x000b31ae) wait_bar_pane_cp010_ParamLimits

0x90e6,	// (0x000b31ae) wait_bar_pane_cp010

0x90f7,	// (0x000b31bf) fps_text_pane_t1_ParamLimits

0x90f7,	// (0x000b31bf) fps_text_pane_t1

0xd632,	// (0x000b76fa) cam4_image_uncrop_pane_g1

0xd63b,	// (0x000b7703) cam4_image_uncrop_pane_g2

0x5ab1,	// (0x000afb79) cam4_image_uncrop_pane_g3

0x5aba,	// (0x000afb82) cam4_image_uncrop_pane_g4

0x0003,

0xf8ee,	// (0x000b99b6) cam4_image_uncrop_pane_g

0x8ebf,	// (0x000b2f87) dia3_listrow_pane_ParamLimits

0x93ac,	// (0x000b3474) main_phob2_pane

0x832e,	// (0x000b23f6) cell_tport_appsw_pane_cp02_ParamLimits

0x832e,	// (0x000b23f6) cell_tport_appsw_pane_cp02

0x8342,	// (0x000b240a) cell_tport_appsw_pane_cp03_ParamLimits

0x8342,	// (0x000b240a) cell_tport_appsw_pane_cp03

0x93ac,	// (0x000b3474) phob2_contact_card_pane

0x93ac,	// (0x000b3474) phob2_listscroll_pane

0xef74,	// (0x000b903c) phob2_list_pane

0xef7c,	// (0x000b9044) scroll_pane_cp034

0x910f,	// (0x000b31d7) phob2_cc_data_pane_ParamLimits

0x910f,	// (0x000b31d7) phob2_cc_data_pane

0x912e,	// (0x000b31f6) phob2_cc_listscroll_pane_ParamLimits

0x912e,	// (0x000b31f6) phob2_cc_listscroll_pane

0x914c,	// (0x000b3214) list_double_large_graphic_phob2_pane_ParamLimits

0x914c,	// (0x000b3214) list_double_large_graphic_phob2_pane

0x915f,	// (0x000b3227) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x915f,	// (0x000b3227) list_double_large_graphic_phob2_pane_g1

0x9175,	// (0x000b323d) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x9175,	// (0x000b323d) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff29,	// (0x000b9ff1) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff29,	// (0x000b9ff1) list_double_large_graphic_phob2_pane_g

0x9181,	// (0x000b3249) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x9181,	// (0x000b3249) list_double_large_graphic_phob2_pane_t1

0x9197,	// (0x000b325f) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x9197,	// (0x000b325f) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff2e,	// (0x000b9ff6) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff2e,	// (0x000b9ff6) list_double_large_graphic_phob2_pane_t

0x93ac,	// (0x000b3474) list_highlight_pane_cp024

0x91ac,	// (0x000b3274) phob2_cc_button_pane

0x91b4,	// (0x000b327c) phob2_cc_data_pane_g1_ParamLimits

0x91b4,	// (0x000b327c) phob2_cc_data_pane_g1

0x91c9,	// (0x000b3291) phob2_cc_data_pane_g2_ParamLimits

0x91c9,	// (0x000b3291) phob2_cc_data_pane_g2

0x0001,

0xff33,	// (0x000b9ffb) phob2_cc_data_pane_g_ParamLimits

0xff33,	// (0x000b9ffb) phob2_cc_data_pane_g

0x91d9,	// (0x000b32a1) phob2_cc_data_pane_t1_ParamLimits

0x91d9,	// (0x000b32a1) phob2_cc_data_pane_t1

0x91f1,	// (0x000b32b9) phob2_cc_data_pane_t2_ParamLimits

0x91f1,	// (0x000b32b9) phob2_cc_data_pane_t2

0x9209,	// (0x000b32d1) phob2_cc_data_pane_t3_ParamLimits

0x9209,	// (0x000b32d1) phob2_cc_data_pane_t3

0x0002,

0xff38,	// (0x000ba000) phob2_cc_data_pane_t_ParamLimits

0xff38,	// (0x000ba000) phob2_cc_data_pane_t

0xef84,	// (0x000b904c) phob2_cc_list_pane_ParamLimits

0xef84,	// (0x000b904c) phob2_cc_list_pane

0xd96a,	// (0x000b7a32) scroll_pane_cp035_ParamLimits

0xd96a,	// (0x000b7a32) scroll_pane_cp035

0xa4f7,	// (0x000b45bf) bg_button_pane_cp033

0xef90,	// (0x000b9058) phob2_cc_button_pane_g1

0xef9c,	// (0x000b9064) phob2_cc_button_pane_t1

0xefb1,	// (0x000b9079) phob2_cc_button_pane_t2

0x0001,

0xff3f,	// (0x000ba007) phob2_cc_button_pane_t

0x9221,	// (0x000b32e9) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9221,	// (0x000b32e9) list_double_large_graphic_phob2_cc_pane

0x9234,	// (0x000b32fc) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9234,	// (0x000b32fc) list_double_large_graphic_phob2_cc_pane_g1

0x9240,	// (0x000b3308) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x9240,	// (0x000b3308) list_double_large_graphic_phob2_cc_pane_g2

0x924c,	// (0x000b3314) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x924c,	// (0x000b3314) list_double_large_graphic_phob2_cc_pane_g3

0x9258,	// (0x000b3320) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x9258,	// (0x000b3320) list_double_large_graphic_phob2_cc_pane_g4

0x9264,	// (0x000b332c) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x9264,	// (0x000b332c) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff44,	// (0x000ba00c) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff44,	// (0x000ba00c) list_double_large_graphic_phob2_cc_pane_g

0x9270,	// (0x000b3338) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x9270,	// (0x000b3338) list_double_large_graphic_phob2_cc_pane_t1

0x9299,	// (0x000b3361) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x9299,	// (0x000b3361) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff4f,	// (0x000ba017) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff4f,	// (0x000ba017) list_double_large_graphic_phob2_cc_pane_t

0xefc3,	// (0x000b908b) list_highlight_pane_cp025_ParamLimits

0xefc3,	// (0x000b908b) list_highlight_pane_cp025

0xa4f7,	// (0x000b45bf) bg_button_pane_cp033_ParamLimits

0xef90,	// (0x000b9058) phob2_cc_button_pane_g1_ParamLimits

0xef9c,	// (0x000b9064) phob2_cc_button_pane_t1_ParamLimits

0xefb1,	// (0x000b9079) phob2_cc_button_pane_t2_ParamLimits

0xff3f,	// (0x000ba007) phob2_cc_button_pane_t_ParamLimits

0x038f,	// (0x000aa457) popup_wgtman_window

0xd7af,	// (0x000b7877) scroll_pane_cp038

0x8c0b,	// (0x000b2cd3) wgtman_btn_pane_cp_01_ParamLimits

0x8c0b,	// (0x000b2cd3) wgtman_btn_pane_cp_01

0xefd1,	// (0x000b9099) wgtman_content_pane

0xefda,	// (0x000b90a2) wgtman_heading_pane

0x93ac,	// (0x000b3474) bg_heading_pane_cp02

0xefe3,	// (0x000b90ab) wgtman_heading_pane_g1

0xefeb,	// (0x000b90b3) wgtman_heading_pane_t1

0xeff9,	// (0x000b90c1) scroll_pane_cp036

0xf001,	// (0x000b90c9) wgtman_list_pane

0xf009,	// (0x000b90d1) wgtman_list_pane_t1_ParamLimits

0xf009,	// (0x000b90d1) wgtman_list_pane_t1

0x9cc3,	// (0x000b3d8b) cam4_grid_pane

0x6787,	// (0x000b084f) bg_button_pane_cp015_ParamLimits

0x679b,	// (0x000b0863) bg_button_pane_cp016_ParamLimits

0x67ae,	// (0x000b0876) bg_button_pane_cp017_ParamLimits

0x6806,	// (0x000b08ce) popup_vitu2_query_window_g3_ParamLimits

0x6806,	// (0x000b08ce) popup_vitu2_query_window_g3

0x68c3,	// (0x000b098b) popup_vitu2_query_window_t6_ParamLimits

0x68c3,	// (0x000b098b) popup_vitu2_query_window_t6

0x68ee,	// (0x000b09b6) popup_vitu2_query_window_t7_ParamLimits

0x68ee,	// (0x000b09b6) popup_vitu2_query_window_t7

0xd632,	// (0x000b76fa) cam4_grid_pane_g1

0xd63b,	// (0x000b7703) cam4_grid_pane_g2

0xf025,	// (0x000b90ed) cam4_grid_pane_g3

0xf02e,	// (0x000b90f6) cam4_grid_pane_g4

0x0003,

0xff54,	// (0x000ba01c) cam4_grid_pane_g

0x13b5,	// (0x000ab47d) aid_placing_vt_slider_lsc_ParamLimits

0x16b2,	// (0x000ab77a) vidtel_button_pane_ParamLimits

0x16b2,	// (0x000ab77a) vidtel_button_pane

0xf039,	// (0x000b9101) bg_button_pane_cp034

0x92c2,	// (0x000b338a) vidtel_button_pane_g1

0xf043,	// (0x000b910b) vidtel_button_pane_t1

0xd8b1,	// (0x000b7979) aid_size_vtel_slider_touch

0xd96a,	// (0x000b7a32) scroll_pane_cp039

0xe18a,	// (0x000b8252) ncim_query_button_pane_cp01_ParamLimits

0xe1a9,	// (0x000b8271) ncimui_query_pane_g1_ParamLimits

0xa4f7,	// (0x000b45bf) input_focus_pane_cp012_ParamLimits

0xe1ce,	// (0x000b8296) ncim_query_entry_pane_t1_ParamLimits

0xd96a,	// (0x000b7a32) scroll_pane_cp039_ParamLimits

0xb25a,	// (0x000b5322) navi_pane_bcale_mc_g1

0xb262,	// (0x000b532a) navi_pane_bcale_mc_t1

0xe739,	// (0x000b8801) main_sp_fs_email_pane_g1

0xe745,	// (0x000b880d) main_sp_fs_email_pane_g2

0x0001,

0xfce5,	// (0x000b9dad) main_sp_fs_email_pane_g

0xe98d,	// (0x000b8a55) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe98d,	// (0x000b8a55) list_single_cale_mrui_row_pane_g3

0x8806,	// (0x000b28ce) list_single_recal_day_pane_g5_event_pane

0xa94c,	// (0x000b4a14) list_single_recal_day_pane_g7

0xf051,	// (0x000b9119) list_recal_day_event_pane_cp01

0xf05a,	// (0x000b9122) list_recal_vselct_arw_lo_pane_cp01

0xf062,	// (0x000b912a) list_recal_vselct_arw_up_pane_cp01

0xf06a,	// (0x000b9132) list_recal_vselct_pane_cp01

0xd8d3,	// (0x000b799b) list_recal_day_event_pane_cp01_g1

0xa99f,	// (0x000b4a67) list_recal_day_event_pane_cp01_t1

0xa954,	// (0x000b4a1c) list_single_recal_day_pane_t1_ParamLimits

0xa966,	// (0x000b4a2e) list_single_recal_day_pane_t2_ParamLimits

0xfe42,	// (0x000b9f0a) list_single_recal_day_pane_t_ParamLimits

0xa1cc,	// (0x000b4294) bg_notes_pane_ParamLimits

0xa28e,	// (0x000b4356) list_notes_pane_ParamLimits

0x06c3,	// (0x000aa78b) scroll_pane_cp06_ParamLimits

0xa2b0,	// (0x000b4378) main_notes_pane_ParamLimits

0x93ac,	// (0x000b3474) main_welc_pane

0x92ca,	// (0x000b3392) main_welc_body_pane_ParamLimits

0x92ca,	// (0x000b3392) main_welc_body_pane

0x92e7,	// (0x000b33af) main_welc_opti_pane_ParamLimits

0x92e7,	// (0x000b33af) main_welc_opti_pane

0x9330,	// (0x000b33f8) main_welc_pane_t1_ParamLimits

0x9330,	// (0x000b33f8) main_welc_pane_t1

0x9352,	// (0x000b341a) main_welc_body_row_pane_ParamLimits

0x9352,	// (0x000b341a) main_welc_body_row_pane

0xf074,	// (0x000b913c) main_welc_opti_row_pane_ParamLimits

0xf074,	// (0x000b913c) main_welc_opti_row_pane

0xf082,	// (0x000b914a) main_welc_opti_row_pane_g1

0xf08a,	// (0x000b9152) main_welc_opti_row_pane_t1

0xf09a,	// (0x000b9162) main_welc_body_row_pane_t1

0xed5b,	// (0x000b8e23) popup_notif_wgt_heading_pane

0xed75,	// (0x000b8e3d) aid_size_list_notif_wgt_del_ParamLimits

0xed82,	// (0x000b8e4a) list_notif_wgt_row_pane_g1_ParamLimits

0xed8e,	// (0x000b8e56) list_notif_wgt_row_pane_g2_ParamLimits

0xed9a,	// (0x000b8e62) list_notif_wgt_row_pane_g3_ParamLimits

0xfea9,	// (0x000b9f71) list_notif_wgt_row_pane_g_ParamLimits

0xeda7,	// (0x000b8e6f) list_notif_wgt_row_pane_t1_ParamLimits

0xedbc,	// (0x000b8e84) list_notif_wgt_row_pane_t2_ParamLimits

0xedce,	// (0x000b8e96) list_notif_wgt_row_pane_t3_ParamLimits

0xfeb0,	// (0x000b9f78) list_notif_wgt_row_pane_t_ParamLimits

0x8ca5,	// (0x000b2d6d) listrow_wgtman_pane_g1_ParamLimits

0x8cb2,	// (0x000b2d7a) listrow_wgtman_pane_g2_ParamLimits

0xfed9,	// (0x000b9fa1) listrow_wgtman_pane_g_ParamLimits

0x8cd0,	// (0x000b2d98) listrow_wgtman_pane_t1_ParamLimits

0x8ce8,	// (0x000b2db0) listrow_wgtman_pane_t2_ParamLimits

0xfede,	// (0x000b9fa6) listrow_wgtman_pane_t_ParamLimits

0x8d0e,	// (0x000b2dd6) wait_bar_pane_cp09_ParamLimits

0x93ac,	// (0x000b3474) bg_popup_heading_pane_cp02

0xf0a9,	// (0x000b9171) popup_notif_wgt_heading_pane_g1

0xf0b1,	// (0x000b9179) popup_notif_wgt_heading_pane_t1

0x93ac,	// (0x000b3474) main_vids_pane

0x93ac,	// (0x000b3474) vids_listscroll_pane

0x9368,	// (0x000b3430) scroll_pane_cp040

0x93ac,	// (0x000b3474) vids_list_pane

0x9373,	// (0x000b343b) vids_list_double_pane_ParamLimits

0x9373,	// (0x000b343b) vids_list_double_pane

0x9384,	// (0x000b344c) vids_list_double_pane_g1

0x938d,	// (0x000b3455) vids_list_double_pane_t1

0x939c,	// (0x000b3464) vids_list_double_pane_t2

0x0001,

0xff62,	// (0x000ba02a) vids_list_double_pane_t

0x9424,	// (0x000b34ec) main_ncimui_pane_ParamLimits

0x751d,	// (0x000b15e5) main_ncimui_pane_g1_ParamLimits

0x7529,	// (0x000b15f1) main_ncimui_pane_g2_ParamLimits

0x7529,	// (0x000b15f1) main_ncimui_pane_g2

0x0001,

0xfbea,	// (0x000b9cb2) main_ncimui_pane_g_ParamLimits

0xfbea,	// (0x000b9cb2) main_ncimui_pane_g

0x9306,	// (0x000b33ce) main_welc_pane_g1_ParamLimits

0x9306,	// (0x000b33ce) main_welc_pane_g1

0x931b,	// (0x000b33e3) main_welc_pane_g2_ParamLimits

0x931b,	// (0x000b33e3) main_welc_pane_g2

0x0001,

0xff5d,	// (0x000ba025) main_welc_pane_g_ParamLimits

0xff5d,	// (0x000ba025) main_welc_pane_g

0xa1cc,	// (0x000b4294) listscroll_mce_pane_ParamLimits

0xb3af,	// (0x000b5477) wait_bar_pane_cp10

0xc812,	// (0x000b68da) main_cale_day_pane_ParamLimits

0xc812,	// (0x000b68da) main_cale_week_pane_ParamLimits

0xa1cc,	// (0x000b4294) main_messa_pane_ParamLimits

0x4dbc,	// (0x000aee84) main_clock2_btn_pane_ParamLimits

0x4dbc,	// (0x000aee84) main_clock2_btn_pane

0xd010,	// (0x000b70d8) main_clock2_btn_pane_cp01_ParamLimits

0xd010,	// (0x000b70d8) main_clock2_btn_pane_cp01

0xe95e,	// (0x000b8a26) list_cale_mrui_pane_ParamLimits

0xee12,	// (0x000b8eda) main_cf0_pane_g2

0x0001,

0xfeb7,	// (0x000b9f7f) main_cf0_pane_g

0x8ee1,	// (0x000b2fa9) area_left_week_number_pane_ParamLimits

0x8eed,	// (0x000b2fb5) area_top_day_name_pane_ParamLimits

0x8f00,	// (0x000b2fc8) frame_month_view_pane_ParamLimits

0xef39,	// (0x000b9001) grid_month_view_pane_ParamLimits

0xef47,	// (0x000b900f) frm_month_g1_ParamLimits

0x8f81,	// (0x000b3049) frm_month_g2_ParamLimits

0x8f94,	// (0x000b305c) frm_month_g3_ParamLimits

0x8fa7,	// (0x000b306f) frm_month_g4_ParamLimits

0x8fba,	// (0x000b3082) frm_month_g5_ParamLimits

0x8fcd,	// (0x000b3095) frm_month_g6_ParamLimits

0x8fe0,	// (0x000b30a8) frm_month_g7_ParamLimits

0xef54,	// (0x000b901c) frm_month_g8_ParamLimits

0x8ff3,	// (0x000b30bb) frm_month_g9_ParamLimits

0x9003,	// (0x000b30cb) frm_month_g10_ParamLimits

0x9013,	// (0x000b30db) frm_month_g11_ParamLimits

0x9023,	// (0x000b30eb) frm_month_g12_ParamLimits

0x9035,	// (0x000b30fd) frm_month_g13_ParamLimits

0x9047,	// (0x000b310f) frm_month_g14_ParamLimits

0x905b,	// (0x000b3123) frm_month_g15_ParamLimits

0x906f,	// (0x000b3137) frm_month_g16_ParamLimits

0xff08,	// (0x000b9fd0) frm_month_g_ParamLimits

0xef61,	// (0x000b9029) cell_top_day_name_pane_t1_ParamLimits

0x9083,	// (0x000b314b) cell_area_left_week_number_pane_g1_ParamLimits

0x908f,	// (0x000b3157) cell_area_left_week_number_pane_t1_ParamLimits

0xce88,	// (0x000b6f50) cell_month_view_pane_g1_ParamLimits

0x90a2,	// (0x000b316a) cell_month_view_pane_t1_ParamLimits

0xa1c4,	// (0x000b428c) main_clock2_btn_pane_g1

0xf0bf,	// (0x000b9187) main_clock2_btn_pane_t1

0xa4f7,	// (0x000b45bf) listscroll_cmail_pane_ParamLimits

0xe739,	// (0x000b8801) main_sp_fs_email_pane_g1_ParamLimits

0xe745,	// (0x000b880d) main_sp_fs_email_pane_g2_ParamLimits

0xfce5,	// (0x000b9dad) main_sp_fs_email_pane_g_ParamLimits

0xeafc,	// (0x000b8bc4) list_recal_day_pane_ParamLimits

0xeb0d,	// (0x000b8bd5) mian_recal_day_pane_t1

0x7fb2,	// (0x000b207a) list_single_dyc_row_text_pane_t4_ParamLimits

0x7fb2,	// (0x000b207a) list_single_dyc_row_text_pane_t4

0x7ffb,	// (0x000b20c3) list_single_dyc_row_text_pane_t5_ParamLimits

0x7ffb,	// (0x000b20c3) list_single_dyc_row_text_pane_t5

0xa70d,	// (0x000b47d5) list_single_dyc_row_text_pane_t6_ParamLimits

0xa70d,	// (0x000b47d5) list_single_dyc_row_text_pane_t6

0xad3e,	// (0x000b4e06) aid_mgn_list_cale_time_pane

0x9424,	// (0x000b34ec) main_gallery2_pane_ParamLimits
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
	};

} // end of namespace AknLayoutScalable_Abrw_pnl4_apps_nhd4_lsc_tch_Large
