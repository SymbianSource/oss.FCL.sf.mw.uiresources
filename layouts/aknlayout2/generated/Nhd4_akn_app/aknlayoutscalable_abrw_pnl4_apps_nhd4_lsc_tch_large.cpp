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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x000844e6 };

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
0x3514,	// (0x000879fa) Screen

0x3520,	// (0x00087a06) application_window

0x355c,	// (0x00087a42) area_bottom_pane_ParamLimits

0x355c,	// (0x00087a42) area_bottom_pane

0x3595,	// (0x00087a7b) area_top_pane_ParamLimits

0x3595,	// (0x00087a7b) area_top_pane

0xbafb,	// (0x0008ffe1) call_video_uplink_pane_ParamLimits

0xbafb,	// (0x0008ffe1) call_video_uplink_pane

0x3623,	// (0x00087b09) main_pane_ParamLimits

0x3623,	// (0x00087b09) main_pane

0x1797,	// (0x00085c7d) context_pane

0x69ed,	// (0x0008aed3) navi_pane

0x6a1f,	// (0x0008af05) popup_cale_events_window_ParamLimits

0x6a1f,	// (0x0008af05) popup_cale_events_window

0x17aa,	// (0x00085c90) popup_mup_playback_window

0x6a37,	// (0x0008af1d) signal_pane

0x3b60,	// (0x00088046) main_browser_pane

0x4432,	// (0x00088918) main_burst_pane

0x6737,	// (0x0008ac1d) main_calc_pane

0x177d,	// (0x00085c63) main_cale_day_pane

0x674b,	// (0x0008ac31) main_cale_month_pane

0x177d,	// (0x00085c63) main_cale_week_pane

0x4432,	// (0x00088918) main_call_pane

0x0ce8,	// (0x000851ce) main_call_poc_pane

0x4432,	// (0x00088918) main_camera_pane

0x4432,	// (0x00088918) main_chi_dic_pane

0xc0ba,	// (0x000905a0) main_clock_pane

0x0ce8,	// (0x000851ce) main_fmradio_pane

0x4432,	// (0x00088918) main_graph_messa_pane

0x0ce8,	// (0x000851ce) main_help_pane

0x3b60,	// (0x00088046) main_im_pane

0x390f,	// (0x00087df5) main_image_pane_ParamLimits

0x390f,	// (0x00087df5) main_image_pane

0x0ce8,	// (0x000851ce) main_location2_pane

0x4432,	// (0x00088918) main_location_pane

0x390f,	// (0x00087df5) main_messa_pane

0x0ce8,	// (0x000851ce) main_mp2_pane

0x4432,	// (0x00088918) main_mp_pane

0x0ce8,	// (0x000851ce) main_msg_pane

0x0ce8,	// (0x000851ce) main_mup_eq_pane

0x0ce8,	// (0x000851ce) main_mup_pane

0x3b60,	// (0x00088046) main_notes_pane

0x0ce8,	// (0x000851ce) main_pec_pane

0x0ce8,	// (0x000851ce) main_phob_pane

0x0ce8,	// (0x000851ce) main_pinb_pane

0x0ce8,	// (0x000851ce) main_postcard_pane

0x0ce8,	// (0x000851ce) main_qdial_pane

0x4432,	// (0x00088918) main_skin_pane

0x0ce8,	// (0x000851ce) main_smil2_pane

0x4432,	// (0x00088918) main_smil_pane

0x4432,	// (0x00088918) main_video_pane

0x4432,	// (0x00088918) main_video_tele_pane

0x390f,	// (0x00087df5) main_viewer_pane_ParamLimits

0x390f,	// (0x00087df5) main_viewer_pane

0x4432,	// (0x00088918) main_vorec_pane

0x67a9,	// (0x0008ac8f) popup_blid_sat_info_window_ParamLimits

0x67a9,	// (0x0008ac8f) popup_blid_sat_info_window

0x6801,	// (0x0008ace7) popup_dyc_status_message_window_ParamLimits

0x6801,	// (0x0008ace7) popup_dyc_status_message_window

0x6819,	// (0x0008acff) popup_grid_large_graphic_window_ParamLimits

0x6819,	// (0x0008acff) popup_grid_large_graphic_window

0x68c9,	// (0x0008adaf) popup_loc_request_window_ParamLimits

0x68c9,	// (0x0008adaf) popup_loc_request_window

0x69c5,	// (0x0008aeab) popup_wml_address_window_ParamLimits

0x69c5,	// (0x0008aeab) popup_wml_address_window

0x6571,	// (0x0008aa57) call_muted_g1

0x61e4,	// (0x0008a6ca) popup_call_audio_conf_window_ParamLimits

0x61e4,	// (0x0008a6ca) popup_call_audio_conf_window

0x6585,	// (0x0008aa6b) popup_call_audio_first_window_ParamLimits

0x6585,	// (0x0008aa6b) popup_call_audio_first_window

0x65fb,	// (0x0008aae1) popup_call_audio_in_window_ParamLimits

0x65fb,	// (0x0008aae1) popup_call_audio_in_window

0x6637,	// (0x0008ab1d) popup_call_audio_out_window_ParamLimits

0x6637,	// (0x0008ab1d) popup_call_audio_out_window

0x6671,	// (0x0008ab57) popup_call_audio_second_window_ParamLimits

0x6671,	// (0x0008ab57) popup_call_audio_second_window

0x66c7,	// (0x0008abad) popup_call_audio_wait_window_ParamLimits

0x66c7,	// (0x0008abad) popup_call_audio_wait_window

0x66fc,	// (0x0008abe2) popup_number_entry_window_ParamLimits

0x66fc,	// (0x0008abe2) popup_number_entry_window

0x08d5,	// (0x00084dbb) bg_popup_call_pane_cp05_ParamLimits

0x08d5,	// (0x00084dbb) bg_popup_call_pane_cp05

0x08f5,	// (0x00084ddb) popup_number_entry_window_t1

0x0908,	// (0x00084dee) popup_number_entry_window_t2

0x091a,	// (0x00084e00) popup_number_entry_window_t3

0x0003,

0xf085,	// (0x0009356b) popup_number_entry_window_t

0x092c,	// (0x00084e12) text_title_cp2

0x093f,	// (0x00084e25) bg_popup_call_pane_cp_ParamLimits

0x093f,	// (0x00084e25) bg_popup_call_pane_cp

0x094d,	// (0x00084e33) call_thumbnail_pane

0x0955,	// (0x00084e3b) popup_call_audio_in_window_g1_ParamLimits

0x0955,	// (0x00084e3b) popup_call_audio_in_window_g1

0x0961,	// (0x00084e47) popup_call_audio_in_window_g2_ParamLimits

0x0961,	// (0x00084e47) popup_call_audio_in_window_g2

0x096d,	// (0x00084e53) popup_call_audio_in_window_g3_ParamLimits

0x096d,	// (0x00084e53) popup_call_audio_in_window_g3

0x0002,

0xf08e,	// (0x00093574) popup_call_audio_in_window_g_ParamLimits

0xf08e,	// (0x00093574) popup_call_audio_in_window_g

0x0979,	// (0x00084e5f) popup_call_audio_in_window_t1_ParamLimits

0x0979,	// (0x00084e5f) popup_call_audio_in_window_t1

0x0995,	// (0x00084e7b) popup_call_audio_in_window_t2_ParamLimits

0x0995,	// (0x00084e7b) popup_call_audio_in_window_t2

0x09b1,	// (0x00084e97) popup_call_audio_in_window_t3_ParamLimits

0x09b1,	// (0x00084e97) popup_call_audio_in_window_t3

0x0002,

0xf095,	// (0x0009357b) popup_call_audio_in_window_t_ParamLimits

0xf095,	// (0x0009357b) popup_call_audio_in_window_t

0x093f,	// (0x00084e25) bg_popup_call_pane_cp01_ParamLimits

0x093f,	// (0x00084e25) bg_popup_call_pane_cp01

0x094d,	// (0x00084e33) call_thumbnail_pane_cp02

0x09c4,	// (0x00084eaa) call_type_pane_cp022

0x09cc,	// (0x00084eb2) popup_call_audio_out_window_g1_ParamLimits

0x09cc,	// (0x00084eb2) popup_call_audio_out_window_g1

0x09de,	// (0x00084ec4) popup_call_audio_out_window_g2_ParamLimits

0x09de,	// (0x00084ec4) popup_call_audio_out_window_g2

0x09ea,	// (0x00084ed0) popup_call_audio_out_window_g3_ParamLimits

0x09ea,	// (0x00084ed0) popup_call_audio_out_window_g3

0x0002,

0xf09c,	// (0x00093582) popup_call_audio_out_window_g_ParamLimits

0xf09c,	// (0x00093582) popup_call_audio_out_window_g

0x09fc,	// (0x00084ee2) popup_call_audio_out_window_t1_ParamLimits

0x09fc,	// (0x00084ee2) popup_call_audio_out_window_t1

0x0a14,	// (0x00084efa) popup_call_audio_out_window_t2_ParamLimits

0x0a14,	// (0x00084efa) popup_call_audio_out_window_t2

0x0001,

0xf0a3,	// (0x00093589) popup_call_audio_out_window_t_ParamLimits

0xf0a3,	// (0x00093589) popup_call_audio_out_window_t

0x0a29,	// (0x00084f0f) bg_popup_call_pane_ParamLimits

0x0a29,	// (0x00084f0f) bg_popup_call_pane

0x37e0,	// (0x00087cc6) call_thumbnail_pane_cp_ParamLimits

0x37e0,	// (0x00087cc6) call_thumbnail_pane_cp

0x0aad,	// (0x00084f93) call_type_pane_cp01_ParamLimits

0x0aad,	// (0x00084f93) call_type_pane_cp01

0x0af1,	// (0x00084fd7) popup_call_audio_first_window_g1_ParamLimits

0x0af1,	// (0x00084fd7) popup_call_audio_first_window_g1

0x0b3d,	// (0x00085023) popup_call_audio_first_window_g2_ParamLimits

0x0b3d,	// (0x00085023) popup_call_audio_first_window_g2

0x0001,

0xf0a8,	// (0x0009358e) popup_call_audio_first_window_g_ParamLimits

0xf0a8,	// (0x0009358e) popup_call_audio_first_window_g

0x0b81,	// (0x00085067) popup_call_audio_first_window_t1_ParamLimits

0x0b81,	// (0x00085067) popup_call_audio_first_window_t1

0x0c2d,	// (0x00085113) popup_call_audio_first_window_t4_ParamLimits

0x0c2d,	// (0x00085113) popup_call_audio_first_window_t4

0x0cb9,	// (0x0008519f) popup_call_audio_first_window_t5_ParamLimits

0x0cb9,	// (0x0008519f) popup_call_audio_first_window_t5

0x0002,

0xf0ad,	// (0x00093593) popup_call_audio_first_window_t_ParamLimits

0xf0ad,	// (0x00093593) popup_call_audio_first_window_t

0x0ce8,	// (0x000851ce) bg_popup_call_pane_cp02

0x0cf2,	// (0x000851d8) call_type_pane_cp023

0x0cfa,	// (0x000851e0) popup_call_audio_wait_window_g1

0x0d02,	// (0x000851e8) popup_call_audio_wait_window_g2

0x0001,

0xf0b4,	// (0x0009359a) popup_call_audio_wait_window_g

0x0d0a,	// (0x000851f0) popup_call_audio_wait_window_t3

0x0d18,	// (0x000851fe) bg_popup_call_pane_cp03_ParamLimits

0x0d18,	// (0x000851fe) bg_popup_call_pane_cp03

0x0d78,	// (0x0008525e) call_thumbnail_pane_cp011_ParamLimits

0x0d78,	// (0x0008525e) call_thumbnail_pane_cp011

0x0d84,	// (0x0008526a) call_type_pane_cp034_ParamLimits

0x0d84,	// (0x0008526a) call_type_pane_cp034

0x0dc0,	// (0x000852a6) popup_call_audio_second_window_g1_ParamLimits

0x0dc0,	// (0x000852a6) popup_call_audio_second_window_g1

0x0dfc,	// (0x000852e2) popup_call_audio_second_window_g2_ParamLimits

0x0dfc,	// (0x000852e2) popup_call_audio_second_window_g2

0x0001,

0xf0b9,	// (0x0009359f) popup_call_audio_second_window_g_ParamLimits

0xf0b9,	// (0x0009359f) popup_call_audio_second_window_g

0x3804,	// (0x00087cea) popup_call_audio_second_window_t1_ParamLimits

0x3804,	// (0x00087cea) popup_call_audio_second_window_t1

0x3885,	// (0x00087d6b) popup_call_audio_second_window_t2_ParamLimits

0x3885,	// (0x00087d6b) popup_call_audio_second_window_t2

0x38bb,	// (0x00087da1) popup_call_audio_second_window_t3_ParamLimits

0x38bb,	// (0x00087da1) popup_call_audio_second_window_t3

0x0002,

0xf0be,	// (0x000935a4) popup_call_audio_second_window_t_ParamLimits

0xf0be,	// (0x000935a4) popup_call_audio_second_window_t

0x0ce8,	// (0x000851ce) bg_popup_call_pane_cp04

0x38f1,	// (0x00087dd7) list_conf_pane

0x38f9,	// (0x00087ddf) popup_call_audio_conf_window_t1

0x3907,	// (0x00087ded) call_thumbnail_pane_g1

0x390f,	// (0x00087df5) bg_pinb_pane_ParamLimits

0x390f,	// (0x00087df5) bg_pinb_pane

0x391d,	// (0x00087e03) find_pinb_pane

0x390f,	// (0x00087df5) listscroll_pinb_pane_ParamLimits

0x390f,	// (0x00087df5) listscroll_pinb_pane

0x3927,	// (0x00087e0d) pinb_bg_pane_g1

0x3927,	// (0x00087e0d) pinb_bg_pane_g2

0x3927,	// (0x00087e0d) pinb_bg_pane_g3

0x3927,	// (0x00087e0d) pinb_bg_pane_g4

0x3927,	// (0x00087e0d) pinb_bg_pane_g5

0x3927,	// (0x00087e0d) pinb_bg_pane_g6

0x3927,	// (0x00087e0d) pinb_bg_pane_g7

0x3927,	// (0x00087e0d) pinb_bg_pane_g8

0x3927,	// (0x00087e0d) pinb_bg_pane_g9

0x3927,	// (0x00087e0d) pinb_bg_pane_g10

0x0009,

0xf0c5,	// (0x000935ab) pinb_bg_pane_g

0x08cb,	// (0x00084db1) grid_pinb_pane

0x08cb,	// (0x00084db1) list_pinb_pane

0x3931,	// (0x00087e17) scroll_pane_cp01_ParamLimits

0x3931,	// (0x00087e17) scroll_pane_cp01

0x393f,	// (0x00087e25) find_pinb_pane_g1_ParamLimits

0x393f,	// (0x00087e25) find_pinb_pane_g1

0x3957,	// (0x00087e3d) find_pinb_pane_t1

0x3969,	// (0x00087e4f) find_pinb_pane_t2

0x0001,

0xf0df,	// (0x000935c5) find_pinb_pane_t

0x397e,	// (0x00087e64) input_focus_pane_cp01_ParamLimits

0x397e,	// (0x00087e64) input_focus_pane_cp01

0x0e38,	// (0x0008531e) cell_pinb_pane_ParamLimits

0x0e38,	// (0x0008531e) cell_pinb_pane

0x398a,	// (0x00087e70) cell_pinb_pane_g1_ParamLimits

0x398a,	// (0x00087e70) cell_pinb_pane_g1

0x3998,	// (0x00087e7e) cell_pinb_pane_g2_ParamLimits

0x3998,	// (0x00087e7e) cell_pinb_pane_g2

0x3998,	// (0x00087e7e) cell_pinb_pane_g3_ParamLimits

0x3998,	// (0x00087e7e) cell_pinb_pane_g3

0x0002,

0xf0e4,	// (0x000935ca) cell_pinb_pane_g_ParamLimits

0xf0e4,	// (0x000935ca) cell_pinb_pane_g

0x0ce8,	// (0x000851ce) grid_highlight_pane_cp01

0x0e38,	// (0x0008531e) list_pinb_item_pane_ParamLimits

0x0e38,	// (0x0008531e) list_pinb_item_pane

0x08cb,	// (0x00084db1) list_highlight_pane_cp02

0x39a6,	// (0x00087e8c) list_pinb_item_pane_g1_ParamLimits

0x39a6,	// (0x00087e8c) list_pinb_item_pane_g1

0x3998,	// (0x00087e7e) list_pinb_item_pane_g2_ParamLimits

0x3998,	// (0x00087e7e) list_pinb_item_pane_g2

0x398a,	// (0x00087e70) list_pinb_item_pane_g3_ParamLimits

0x398a,	// (0x00087e70) list_pinb_item_pane_g3

0x3998,	// (0x00087e7e) list_pinb_item_pane_g4_ParamLimits

0x3998,	// (0x00087e7e) list_pinb_item_pane_g4

0x0003,

0xf0eb,	// (0x000935d1) list_pinb_item_pane_g_ParamLimits

0xf0eb,	// (0x000935d1) list_pinb_item_pane_g

0x39b4,	// (0x00087e9a) list_pinb_item_pane_t1_ParamLimits

0x39b4,	// (0x00087e9a) list_pinb_item_pane_t1

0x39e6,	// (0x00087ecc) calc_display_pane

0x3a0b,	// (0x00087ef1) calc_paper_pane

0x3a2e,	// (0x00087f14) grid_calc_pane

0x0ce8,	// (0x000851ce) bg_list_pane_cp01

0x3a5c,	// (0x00087f42) clock_g1

0x3a64,	// (0x00087f4a) clock_g2

0x0001,

0xf0f4,	// (0x000935da) clock_g

0x3a6c,	// (0x00087f52) clock_t1_ParamLimits

0x3a6c,	// (0x00087f52) clock_t1

0x3a81,	// (0x00087f67) clock_t2_ParamLimits

0x3a81,	// (0x00087f67) clock_t2

0x3a93,	// (0x00087f79) clock_t3_ParamLimits

0x3a93,	// (0x00087f79) clock_t3

0x3aa5,	// (0x00087f8b) clock_t4_ParamLimits

0x3aa5,	// (0x00087f8b) clock_t4

0x3ab7,	// (0x00087f9d) clock_t5_ParamLimits

0x3ab7,	// (0x00087f9d) clock_t5

0x3acc,	// (0x00087fb2) clock_t6_ParamLimits

0x3acc,	// (0x00087fb2) clock_t6

0x3ade,	// (0x00087fc4) clock_t7_ParamLimits

0x3ade,	// (0x00087fc4) clock_t7

0x3af0,	// (0x00087fd6) clock_t8_ParamLimits

0x3af0,	// (0x00087fd6) clock_t8

0x3b04,	// (0x00087fea) clock_t9_ParamLimits

0x3b04,	// (0x00087fea) clock_t9

0x0008,

0xf0f9,	// (0x000935df) clock_t_ParamLimits

0xf0f9,	// (0x000935df) clock_t

0x3b18,	// (0x00087ffe) popup_clock_analogue_window_cp02

0x3b18,	// (0x00087ffe) popup_clock_digital_window_cp01

0x0ce8,	// (0x000851ce) listscroll_help_pane

0x0ce8,	// (0x000851ce) phob_pre_status_pane

0x3b20,	// (0x00088006) grid_qdial_pane

0x390f,	// (0x00087df5) listscroll_mce_pane

0x390f,	// (0x00087df5) bg_notes_pane

0x3b2a,	// (0x00088010) list_notes_pane

0x3b38,	// (0x0008801e) scroll_pane_cp06

0x3b4c,	// (0x00088032) bg_calc_paper_pane

0xbb39,	// (0x0009001f) list_calc_pane

0x3b60,	// (0x00088046) bg_calc_display_pane

0x3b6c,	// (0x00088052) calc_display_pane_t1

0x3b7e,	// (0x00088064) calc_display_pane_t2

0xbb53,	// (0x00090039) calc_display_pane_t3

0x0002,

0xf10c,	// (0x000935f2) calc_display_pane_t

0x3b90,	// (0x00088076) cell_calc_pane_ParamLimits

0x3b90,	// (0x00088076) cell_calc_pane

0x3bc5,	// (0x000880ab) bg_calc_paper_pane_g1

0x3bd1,	// (0x000880b7) bg_calc_paper_pane_g2

0x3bdd,	// (0x000880c3) bg_calc_paper_pane_g3

0x3be9,	// (0x000880cf) bg_calc_paper_pane_g4

0x3bf5,	// (0x000880db) bg_calc_paper_pane_g5

0x3c01,	// (0x000880e7) bg_calc_paper_pane_g6

0x3c10,	// (0x000880f6) bg_calc_paper_pane_g7

0x3c1f,	// (0x00088105) bg_calc_paper_pane_g8

0x0007,

0xf113,	// (0x000935f9) bg_calc_paper_pane_g

0x3c32,	// (0x00088118) calc_bg_paper_pane_g9

0x3c45,	// (0x0008812b) list_calc_item_pane_ParamLimits

0x3c45,	// (0x0008812b) list_calc_item_pane

0x3c5a,	// (0x00088140) list_calc_item_pane_g1

0xbb65,	// (0x0009004b) list_calc_item_pane_t1_ParamLimits

0xbb65,	// (0x0009004b) list_calc_item_pane_t1

0x3c67,	// (0x0008814d) list_calc_item_pane_t2_ParamLimits

0x3c67,	// (0x0008814d) list_calc_item_pane_t2

0x0001,

0xf124,	// (0x0009360a) list_calc_item_pane_t_ParamLimits

0xf124,	// (0x0009360a) list_calc_item_pane_t

0x3927,	// (0x00087e0d) cell_calc_pane_g1

0x3c99,	// (0x0008817f) grid_highlight_pane_cp02

0x2594,	// (0x00086a7a) bg_calc_display_pane_g1

0x3cbb,	// (0x000881a1) bg_calc_display_pane_g2

0x1bda,	// (0x000860c0) bg_calc_display_pane_g3

0x0002,

0xf12e,	// (0x00093614) bg_calc_display_pane_g

0x3cc5,	// (0x000881ab) cell_qdial_pane_ParamLimits

0x3cc5,	// (0x000881ab) cell_qdial_pane

0x3cd9,	// (0x000881bf) cell_qdial_pane_g1_ParamLimits

0x3cd9,	// (0x000881bf) cell_qdial_pane_g1

0x3cef,	// (0x000881d5) cell_qdial_pane_g2_ParamLimits

0x3cef,	// (0x000881d5) cell_qdial_pane_g2

0x3cff,	// (0x000881e5) cell_qdial_pane_g3_ParamLimits

0x3cff,	// (0x000881e5) cell_qdial_pane_g3

0x0003,

0xf135,	// (0x0009361b) cell_qdial_pane_g_ParamLimits

0xf135,	// (0x0009361b) cell_qdial_pane_g

0x3d21,	// (0x00088207) cell_qdial_pane_t1_ParamLimits

0x3d21,	// (0x00088207) cell_qdial_pane_t1

0x3d39,	// (0x0008821f) cell_qdial_pane_t2_ParamLimits

0x3d39,	// (0x0008821f) cell_qdial_pane_t2

0x3d4c,	// (0x00088232) cell_qdial_pane_t3_ParamLimits

0x3d4c,	// (0x00088232) cell_qdial_pane_t3

0x0002,

0xf13e,	// (0x00093624) cell_qdial_pane_t_ParamLimits

0xf13e,	// (0x00093624) cell_qdial_pane_t

0x0ce8,	// (0x000851ce) grid_highlight_pane_cp04

0x3d5f,	// (0x00088245) thumbnail_qdial_pane_ParamLimits

0x3d5f,	// (0x00088245) thumbnail_qdial_pane

0x3dbb,	// (0x000882a1) list_help_pane

0x3dc4,	// (0x000882aa) scroll_pane_cp02

0x3dcd,	// (0x000882b3) help_list_pane_t1_ParamLimits

0x3dcd,	// (0x000882b3) help_list_pane_t1

0xbb77,	// (0x0009005d) bg_notes_pane_g2

0xbb7f,	// (0x00090065) bg_notes_pane_g3

0xbb87,	// (0x0009006d) notes_bg_pane_g1

0xbb8f,	// (0x00090075) notes_bg_pane_g4

0xbb97,	// (0x0009007d) notes_bg_pane_g5

0xbb9f,	// (0x00090085) notes_bg_pane_g6

0xbba7,	// (0x0009008d) notes_bg_pane_g7

0xbbaf,	// (0x00090095) notes_bg_pane_g8

0xbbb7,	// (0x0009009d) notes_bg_pane_g9

0x0006,

0xf15c,	// (0x00093642) notes_bg_pane_g

0x3dec,	// (0x000882d2) list_notes_text_pane_ParamLimits

0x3dec,	// (0x000882d2) list_notes_text_pane

0x3e02,	// (0x000882e8) list_notes_text_pane_g1

0x3e0b,	// (0x000882f1) list_notes_text_pane_t1

0x3e2a,	// (0x00088310) listscroll_cale_week_pane

0x3e5f,	// (0x00088345) bg_cale_heading_pane

0x3e77,	// (0x0008835d) bg_cale_pane_cp01

0x3e94,	// (0x0008837a) cale_week_corner_pane

0x3eb3,	// (0x00088399) cale_week_day_heading_pane

0x3ed0,	// (0x000883b6) cale_week_scroll_pane_g1

0x3ee3,	// (0x000883c9) cale_week_scroll_pane_g2

0x3efb,	// (0x000883e1) cale_week_scroll_pane_g3

0x3f13,	// (0x000883f9) cale_week_scroll_pane_g4

0x3f2b,	// (0x00088411) cale_week_scroll_pane_g5

0x3f4b,	// (0x00088431) cale_week_scroll_pane_g6

0x3f6b,	// (0x00088451) cale_week_scroll_pane_g7

0x3f8b,	// (0x00088471) cale_week_scroll_pane_g8

0x3faf,	// (0x00088495) cale_week_scroll_pane_g9

0x3fc7,	// (0x000884ad) cale_week_scroll_pane_g10

0x3fdf,	// (0x000884c5) cale_week_scroll_pane_g11

0x3ff7,	// (0x000884dd) cale_week_scroll_pane_g12

0x400f,	// (0x000884f5) cale_week_scroll_pane_g13

0x400f,	// (0x000884f5) cale_week_scroll_pane_g14

0x400f,	// (0x000884f5) cale_week_scroll_pane_g15

0x000f,

0xf16b,	// (0x00093651) cale_week_scroll_pane_g

0x404b,	// (0x00088531) cale_week_time_pane

0x406f,	// (0x00088555) grid_cale_week_pane

0x40a7,	// (0x0008858d) scroll_pane_cp08

0x40c4,	// (0x000885aa) cell_cale_week_pane_ParamLimits

0x40c4,	// (0x000885aa) cell_cale_week_pane

0x4152,	// (0x00088638) cale_week_day_heading_pane_t1

0x417c,	// (0x00088662) cale_week_day_heading_pane_t2

0x41ab,	// (0x00088691) cale_week_day_heading_pane_t3

0x41da,	// (0x000886c0) cale_week_day_heading_pane_t4

0x4209,	// (0x000886ef) cale_week_day_heading_pane_t5

0x4240,	// (0x00088726) cale_week_day_heading_pane_t6

0x4277,	// (0x0008875d) cale_week_day_heading_pane_t7

0x0006,

0xf18c,	// (0x00093672) cale_week_day_heading_pane_t

0x42a1,	// (0x00088787) bg_cale_side_pane

0x42af,	// (0x00088795) cale_week_time_pane_t1

0x42c9,	// (0x000887af) cale_week_time_pane_t2

0x42e3,	// (0x000887c9) cale_week_time_pane_t3

0x42fd,	// (0x000887e3) cale_week_time_pane_t4

0x4317,	// (0x000887fd) cale_week_time_pane_t5

0x4331,	// (0x00088817) cale_week_time_pane_t6

0x434b,	// (0x00088831) cale_week_time_pane_t7

0x4365,	// (0x0008884b) cale_week_time_pane_t8

0x0007,

0xf19b,	// (0x00093681) cale_week_time_pane_t

0x4385,	// (0x0008886b) cell_cale_week_pane_g2

0x43a9,	// (0x0008888f) cell_cale_week_pane_g3_ParamLimits

0x43a9,	// (0x0008888f) cell_cale_week_pane_g3

0x43c1,	// (0x000888a7) grid_highlight_pane_cp07

0x43c9,	// (0x000888af) listscroll_gms_pane

0x43d3,	// (0x000888b9) grid_gms_pane

0x43dc,	// (0x000888c2) listscroll_gms_pane_g1

0x43e4,	// (0x000888ca) listscroll_gms_pane_g2

0x0001,

0xf1ac,	// (0x00093692) listscroll_gms_pane_g

0x43ec,	// (0x000888d2) scroll_pane_cp010

0x43f7,	// (0x000888dd) cell_gms_pane_ParamLimits

0x43f7,	// (0x000888dd) cell_gms_pane

0x4409,	// (0x000888ef) cell_gms_pane_g1

0x4411,	// (0x000888f7) cell_gms_pane_g2

0x3e02,	// (0x000882e8) cell_gms_pane_g3

0x4419,	// (0x000888ff) cell_gms_pane_g4

0x0003,

0xf1b1,	// (0x00093697) cell_gms_pane_g

0x4422,	// (0x00088908) grid_highlight_pane_cp09

0x64f9,	// (0x0008a9df) phob_pre_status_pane_g1

0x6501,	// (0x0008a9e7) phob_pre_status_pane_g2

0x6509,	// (0x0008a9ef) phob_pre_status_pane_g3

0x6511,	// (0x0008a9f7) phob_pre_status_pane_g4

0x0004,

0xf588,	// (0x00093a6e) phob_pre_status_pane_g

0x6521,	// (0x0008aa07) phob_pre_status_pane_t1

0x652f,	// (0x0008aa15) phob_pre_status_pane_t2

0x653f,	// (0x0008aa25) phob_pre_status_pane_t3

0x0002,

0xf593,	// (0x00093a79) phob_pre_status_pane_t

0x4432,	// (0x00088918) bg_list_pane_cp05

0x443a,	// (0x00088920) grid_vorec_pane

0x4442,	// (0x00088928) vorec_t1

0x4450,	// (0x00088936) vorec_t2

0x445e,	// (0x00088944) vorec_t3

0x446c,	// (0x00088952) vorec_t4

0xb8ac,	// (0x0008fd92) vorec_t5

0xb8ba,	// (0x0008fda0) vorec_t6

0x0004,

0xf1ba,	// (0x000936a0) vorec_t

0xb8c8,	// (0x0008fdae) wait_bar_pane_cp01

0x4488,	// (0x0008896e) cell_vorec_pane_ParamLimits

0x4488,	// (0x0008896e) cell_vorec_pane

0xbbbf,	// (0x000900a5) cell_vorec_pane_g1

0x0ce8,	// (0x000851ce) grid_highlight_pane_cp05

0x3931,	// (0x00087e17) cams_zoom_pane

0x3931,	// (0x00087e17) image_vga_pane

0x398a,	// (0x00087e70) main_camera_pane_g1

0x398a,	// (0x00087e70) main_camera_pane_g2

0x398a,	// (0x00087e70) main_camera_pane_g3

0x398a,	// (0x00087e70) main_camera_pane_g4

0x398a,	// (0x00087e70) main_camera_pane_g5

0x398a,	// (0x00087e70) main_camera_pane_g6

0x398a,	// (0x00087e70) main_camera_pane_g7

0x0007,

0xf1c5,	// (0x000936ab) main_camera_pane_g

0x449b,	// (0x00088981) main_camera_pane_t1

0x449b,	// (0x00088981) main_camera_pane_t2

0x0001,

0xf1d6,	// (0x000936bc) main_camera_pane_t

0x44c3,	// (0x000889a9) cams_zoom_pane_cp_ParamLimits

0x44c3,	// (0x000889a9) cams_zoom_pane_cp

0x44f7,	// (0x000889dd) image_cif_pane_ParamLimits

0x44f7,	// (0x000889dd) image_cif_pane

0x08cb,	// (0x00084db1) image_subqcif_pane

0x4509,	// (0x000889ef) main_video_pane_g1_ParamLimits

0x4509,	// (0x000889ef) main_video_pane_g1

0x4537,	// (0x00088a1d) main_video_pane_g2_ParamLimits

0x4537,	// (0x00088a1d) main_video_pane_g2

0x4571,	// (0x00088a57) main_video_pane_g3_ParamLimits

0x4571,	// (0x00088a57) main_video_pane_g3

0x4571,	// (0x00088a57) main_video_pane_g4_ParamLimits

0x4571,	// (0x00088a57) main_video_pane_g4

0x45a5,	// (0x00088a8b) main_video_pane_g5_ParamLimits

0x45a5,	// (0x00088a8b) main_video_pane_g5

0x45b3,	// (0x00088a99) main_video_pane_g6_ParamLimits

0x45b3,	// (0x00088a99) main_video_pane_g6

0x0006,

0xf1db,	// (0x000936c1) main_video_pane_g_ParamLimits

0xf1db,	// (0x000936c1) main_video_pane_g

0x45db,	// (0x00088ac1) main_video_pane_t1_ParamLimits

0x45db,	// (0x00088ac1) main_video_pane_t1

0x461f,	// (0x00088b05) cams_zoom_pane_g1

0x461f,	// (0x00088b05) cams_zoom_pane_g2

0x461f,	// (0x00088b05) cams_zoom_pane_g3

0x461f,	// (0x00088b05) cams_zoom_pane_g4

0x0003,

0xf1ea,	// (0x000936d0) cams_zoom_pane_g

0x463d,	// (0x00088b23) grid_cams_pane

0x4657,	// (0x00088b3d) linegrid_cams_pane

0x466a,	// (0x00088b50) cell_cams_pane_ParamLimits

0x466a,	// (0x00088b50) cell_cams_pane

0x468a,	// (0x00088b70) cams_burst_image_pane

0x4692,	// (0x00088b78) cell_cams_pane_g1

0x0ce8,	// (0x000851ce) grid_highlight_pane_cp03

0x3927,	// (0x00087e0d) mp_bg_pane_g1

0x08cb,	// (0x00084db1) bg_list_pane_cp03

0x08cb,	// (0x00084db1) bg_mp_pane

0x08cb,	// (0x00084db1) grid_mp_pane

0x461f,	// (0x00088b05) media_player_g1

0xbddf,	// (0x000902c5) media_player_t1

0xbddf,	// (0x000902c5) media_player_t2

0xbddf,	// (0x000902c5) media_player_t3

0xbddf,	// (0x000902c5) media_player_t4

0xbddf,	// (0x000902c5) media_player_t5

0xbddf,	// (0x000902c5) media_player_t6

0xbddf,	// (0x000902c5) media_player_t7

0x0006,

0xf572,	// (0x00093a58) media_player_t

0x08cb,	// (0x00084db1) wait_bar_pane_cp02

0xf557,	// (0x00093a3d) main_usb_pane_t

0xc0ba,	// (0x000905a0) cell_mp_pane

0x3927,	// (0x00087e0d) cell_mp_pane_g1

0x0ce8,	// (0x000851ce) grid_highlight_pane_cp06

0x469a,	// (0x00088b80) grid_skin_colour_pane

0x46a2,	// (0x00088b88) list_highlight_pane_cp03

0x46aa,	// (0x00088b90) skin_g1

0x46b2,	// (0x00088b98) skin_t1

0x46c1,	// (0x00088ba7) skin_t2

0x0001,

0xf218,	// (0x000936fe) skin_t

0x46cf,	// (0x00088bb5) cell_skin_colour_pane_ParamLimits

0x46cf,	// (0x00088bb5) cell_skin_colour_pane

0x46ef,	// (0x00088bd5) cell_skin_colour_pane_g1

0x475a,	// (0x00088c40) call_video_g1_ParamLimits

0x475a,	// (0x00088c40) call_video_g1

0x4776,	// (0x00088c5c) call_video_g2_ParamLimits

0x4776,	// (0x00088c5c) call_video_g2

0x0001,

0xf21d,	// (0x00093703) call_video_g_ParamLimits

0xf21d,	// (0x00093703) call_video_g

0x47c8,	// (0x00088cae) call_video_uplink_pane_cp1_ParamLimits

0x47c8,	// (0x00088cae) call_video_uplink_pane_cp1

0x482d,	// (0x00088d13) call_video_uplink_pane_cp2

0x486f,	// (0x00088d55) video_down_crop_pane_ParamLimits

0x486f,	// (0x00088d55) video_down_crop_pane

0x4958,	// (0x00088e3e) video_down_pane_ParamLimits

0x4958,	// (0x00088e3e) video_down_pane

0x4a4f,	// (0x00088f35) video_down_subqcif_pane_ParamLimits

0x4a4f,	// (0x00088f35) video_down_subqcif_pane

0x4a67,	// (0x00088f4d) video_down_subqcif_pane_cp_ParamLimits

0x4a67,	// (0x00088f4d) video_down_subqcif_pane_cp

0x4aa6,	// (0x00088f8c) im_reading_pane_ParamLimits

0x4aa6,	// (0x00088f8c) im_reading_pane

0x4ab8,	// (0x00088f9e) im_writing_pane_ParamLimits

0x4ab8,	// (0x00088f9e) im_writing_pane

0x4ad6,	// (0x00088fbc) im_reading_pane_t1

0x4b10,	// (0x00088ff6) list_im_pane

0x4b21,	// (0x00089007) scroll_pane_cp07

0x4b3a,	// (0x00089020) im_writing_pane_t1_ParamLimits

0x4b3a,	// (0x00089020) im_writing_pane_t1

0x4b4f,	// (0x00089035) im_writing_pane_t2_ParamLimits

0x4b4f,	// (0x00089035) im_writing_pane_t2

0x0001,

0xf227,	// (0x0009370d) im_writing_pane_t_ParamLimits

0xf227,	// (0x0009370d) im_writing_pane_t

0x0ce8,	// (0x000851ce) input_focus_pane_cp04

0x0ce8,	// (0x000851ce) input_focus_pane_cp05

0x4b6c,	// (0x00089052) list_im_single_pane_ParamLimits

0x4b6c,	// (0x00089052) list_im_single_pane

0x4b81,	// (0x00089067) list_single_im_pane_t1

0x4432,	// (0x00088918) blid_accuracy_pane

0x4432,	// (0x00088918) blid_compass_pane

0x1735,	// (0x00085c1b) main_location_t1

0x1735,	// (0x00085c1b) main_location_t2

0x1735,	// (0x00085c1b) main_location_t3

0x0002,

0xf581,	// (0x00093a67) main_location_t

0x0ce8,	// (0x000851ce) aid_levels_location

0x3927,	// (0x00087e0d) blid_accuracy_pane_g1

0x3927,	// (0x00087e0d) blid_accuracy_pane_g2

0x0001,

0xf276,	// (0x0009375c) blid_accuracy_pane_g

0x4bbb,	// (0x000890a1) wml_content_pane

0x4bf9,	// (0x000890df) wml_button_pane_ParamLimits

0x4bf9,	// (0x000890df) wml_button_pane

0x4c0d,	// (0x000890f3) wml_list_single_large_pane_ParamLimits

0x4c0d,	// (0x000890f3) wml_list_single_large_pane

0x4c22,	// (0x00089108) wml_list_single_medium_pane_ParamLimits

0x4c22,	// (0x00089108) wml_list_single_medium_pane

0x4c39,	// (0x0008911f) wml_list_single_small_pane_ParamLimits

0x4c39,	// (0x0008911f) wml_list_single_small_pane

0x4c52,	// (0x00089138) wml_selection_box_pane_ParamLimits

0x4c52,	// (0x00089138) wml_selection_box_pane

0x4c65,	// (0x0008914b) wml_list_single_pane_t1

0x4c74,	// (0x0008915a) wml_list_single_medium_pane_t1

0x4c83,	// (0x00089169) wml_list_single_large_pane_t1

0x4c92,	// (0x00089178) input_focus_pane_cp02_ParamLimits

0x4c92,	// (0x00089178) input_focus_pane_cp02

0x4ca5,	// (0x0008918b) wml_selection_box_pane_g1

0x4cae,	// (0x00089194) wml_selection_box_pane_t1_ParamLimits

0x4cae,	// (0x00089194) wml_selection_box_pane_t1

0x390f,	// (0x00087df5) bg_wml_button_pane_ParamLimits

0x390f,	// (0x00087df5) bg_wml_button_pane

0x4cc6,	// (0x000891ac) wml_button_pane_g1

0x4cce,	// (0x000891b4) wml_button_pane_t1

0x4cc6,	// (0x000891ac) wml_button_bg_pane_g1

0x4cde,	// (0x000891c4) wml_button_bg_pane_g2

0x4ce6,	// (0x000891cc) wml_button_bg_pane_g3

0x4cee,	// (0x000891d4) wml_button_bg_pane_g4

0x4cf6,	// (0x000891dc) wml_button_bg_pane_g5

0x4cfe,	// (0x000891e4) wml_button_bg_pane_g6

0x4d06,	// (0x000891ec) wml_button_bg_pane_g7

0x4d0e,	// (0x000891f4) wml_button_bg_pane_g8

0x4d16,	// (0x000891fc) wml_button_bg_pane_g9

0x0008,

0xf22c,	// (0x00093712) wml_button_bg_pane_g

0x4d1e,	// (0x00089204) bg_list_pane_cp02

0x4d26,	// (0x0008920c) mce_header_pane_ParamLimits

0x4d26,	// (0x0008920c) mce_header_pane

0x4d3c,	// (0x00089222) mce_icon_pane

0x4d3c,	// (0x00089222) mce_image_pane

0x4d45,	// (0x0008922b) mce_text_pane_ParamLimits

0x4d45,	// (0x0008922b) mce_text_pane

0x4d58,	// (0x0008923e) scroll_pane_cp03

0x4bf1,	// (0x000890d7) scroll_pane_cp04

0x4d62,	// (0x00089248) scroll_pane_cp05_ParamLimits

0x4d62,	// (0x00089248) scroll_pane_cp05

0x4d6e,	// (0x00089254) mce_header_field_pane_ParamLimits

0x4d6e,	// (0x00089254) mce_header_field_pane

0x4d85,	// (0x0008926b) mce_header_field_pane_2_ParamLimits

0x4d85,	// (0x0008926b) mce_header_field_pane_2

0x4d9b,	// (0x00089281) mce_header_field_pane_3

0x4da3,	// (0x00089289) list_single_mce_message_pane_ParamLimits

0x4da3,	// (0x00089289) list_single_mce_message_pane

0x4db9,	// (0x0008929f) list_single_mce_smart_pane_ParamLimits

0x4db9,	// (0x0008929f) list_single_mce_smart_pane

0x4dda,	// (0x000892c0) input_focus_pane_cp03

0x4de3,	// (0x000892c9) list_header_data_pane

0x4deb,	// (0x000892d1) mce_header_field_pane_t1

0x4dfb,	// (0x000892e1) list_single_mce_header_pane_ParamLimits

0x4dfb,	// (0x000892e1) list_single_mce_header_pane

0x4e0f,	// (0x000892f5) list_single_mce_header_pane_t1

0x4e1e,	// (0x00089304) list_single_mce_message_pane_g1

0x4e26,	// (0x0008930c) list_single_mce_message_pane_t1

0x4e5a,	// (0x00089340) bg_cale_heading_pane_cp01_ParamLimits

0x4e5a,	// (0x00089340) bg_cale_heading_pane_cp01

0x4e94,	// (0x0008937a) bg_cale_pane_cp02_ParamLimits

0x4e94,	// (0x0008937a) bg_cale_pane_cp02

0x4ec1,	// (0x000893a7) cale_month_corner_pane

0x4ee0,	// (0x000893c6) cale_month_day_heading_pane_ParamLimits

0x4ee0,	// (0x000893c6) cale_month_day_heading_pane

0x4f32,	// (0x00089418) cale_month_pane_g1_ParamLimits

0x4f32,	// (0x00089418) cale_month_pane_g1

0x4f61,	// (0x00089447) cale_month_pane_g2_ParamLimits

0x4f61,	// (0x00089447) cale_month_pane_g2

0x4f91,	// (0x00089477) cale_month_pane_g3_ParamLimits

0x4f91,	// (0x00089477) cale_month_pane_g3

0x4fcd,	// (0x000894b3) cale_month_pane_g4_ParamLimits

0x4fcd,	// (0x000894b3) cale_month_pane_g4

0x5009,	// (0x000894ef) cale_month_pane_g5_ParamLimits

0x5009,	// (0x000894ef) cale_month_pane_g5

0x5051,	// (0x00089537) cale_month_pane_g6_ParamLimits

0x5051,	// (0x00089537) cale_month_pane_g6

0x509d,	// (0x00089583) cale_month_pane_g7_ParamLimits

0x509d,	// (0x00089583) cale_month_pane_g7

0x50ed,	// (0x000895d3) cale_month_pane_g8_ParamLimits

0x50ed,	// (0x000895d3) cale_month_pane_g8

0x5141,	// (0x00089627) cale_month_pane_g9_ParamLimits

0x5141,	// (0x00089627) cale_month_pane_g9

0x5193,	// (0x00089679) cale_month_pane_g10_ParamLimits

0x5193,	// (0x00089679) cale_month_pane_g10

0x51e5,	// (0x000896cb) cale_month_pane_g11_ParamLimits

0x51e5,	// (0x000896cb) cale_month_pane_g11

0x5237,	// (0x0008971d) cale_month_pane_g12_ParamLimits

0x5237,	// (0x0008971d) cale_month_pane_g12

0x5289,	// (0x0008976f) cale_month_pane_g13_ParamLimits

0x5289,	// (0x0008976f) cale_month_pane_g13

0x000c,

0xf23f,	// (0x00093725) cale_month_pane_g_ParamLimits

0xf23f,	// (0x00093725) cale_month_pane_g

0x52ed,	// (0x000897d3) cale_month_week_pane

0x5311,	// (0x000897f7) grid_cale_month_pane_ParamLimits

0x5311,	// (0x000897f7) grid_cale_month_pane

0x535a,	// (0x00089840) cale_month_day_heading_pane_t1

0x539c,	// (0x00089882) cale_month_day_heading_pane_t2

0x53d1,	// (0x000898b7) cale_month_day_heading_pane_t3

0x5406,	// (0x000898ec) cale_month_day_heading_pane_t4

0x5443,	// (0x00089929) cale_month_day_heading_pane_t5

0x5488,	// (0x0008996e) cale_month_day_heading_pane_t6

0x54cd,	// (0x000899b3) cale_month_day_heading_pane_t7

0x0006,

0xf25a,	// (0x00093740) cale_month_day_heading_pane_t

0x42a1,	// (0x00088787) bg_cale_side_pane_cp01

0x551a,	// (0x00089a00) cale_month_week_pane_t1

0x5533,	// (0x00089a19) cale_month_week_pane_t2

0x554c,	// (0x00089a32) cale_month_week_pane_t3

0x5565,	// (0x00089a4b) cale_month_week_pane_t4

0x557e,	// (0x00089a64) cale_month_week_pane_t5

0x5597,	// (0x00089a7d) cale_month_week_pane_t6

0x0005,

0xf269,	// (0x0009374f) cale_month_week_pane_t

0x55b0,	// (0x00089a96) cell_cale_month_pane_ParamLimits

0x55b0,	// (0x00089a96) cell_cale_month_pane

0xbbc9,	// (0x000900af) cell_cale_month_pane_g1

0x56de,	// (0x00089bc4) cell_cale_month_pane_t1_ParamLimits

0x56de,	// (0x00089bc4) cell_cale_month_pane_t1

0x43c1,	// (0x000888a7) grid_highlight_pane_cp08

0x3927,	// (0x00087e0d) main_smil_g1

0x570a,	// (0x00089bf0) smil_status_pane

0x5715,	// (0x00089bfb) smil_text_pane

0x160d,	// (0x00085af3) bg_popup_call3_rect_pane_g8

0x1615,	// (0x00085afb) bg_popup_call3_rect_pane_g9

0x0008,

0xf502,	// (0x000939e8) bg_popup_call3_rect_pane_g

0x180c,	// (0x00085cf2) smil_status_volume_pane_g1

0x5729,	// (0x00089c0f) smil_status_pane_t1

0xce69,	// (0x0009134f) volume_smil_pane

0x5740,	// (0x00089c26) list_smil_text_pane

0x574a,	// (0x00089c30) scroll_pane_cp011

0x5755,	// (0x00089c3b) smil_text_list_pane_t1_ParamLimits

0x5755,	// (0x00089c3b) smil_text_list_pane_t1

0xbbd5,	// (0x000900bb) aid_volume_smil_ParamLimits

0xbbd5,	// (0x000900bb) aid_volume_smil

0x3927,	// (0x00087e0d) smil_volume_pane_g1

0x3927,	// (0x00087e0d) smil_volume_pane_g2

0x0001,

0xf276,	// (0x0009375c) smil_volume_pane_g

0x3e2a,	// (0x00088310) listscroll_cale_day_pane

0x5799,	// (0x00089c7f) bg_cale_pane

0xbbf7,	// (0x000900dd) list_cale_pane

0xbc1a,	// (0x00090100) scroll_pane_cp09

0xbc2b,	// (0x00090111) cale_bg_pane_g1

0xbc33,	// (0x00090119) cale_bg_pane_g2

0xbc3b,	// (0x00090121) cale_bg_pane_g3

0xbc43,	// (0x00090129) cale_bg_pane_g4

0xbc4b,	// (0x00090131) cale_bg_pane_g5

0xbc53,	// (0x00090139) cale_bg_pane_g6

0xbc5b,	// (0x00090141) cale_bg_pane_g7

0xbc63,	// (0x00090149) cale_bg_pane_g8

0xbc6b,	// (0x00090151) cale_bg_pane_g9

0x0008,

0xf27b,	// (0x00093761) cale_bg_pane_g

0x57b9,	// (0x00089c9f) list_cale_time_pane_ParamLimits

0x57b9,	// (0x00089c9f) list_cale_time_pane

0xbc73,	// (0x00090159) list_cale_time_pane_g1_ParamLimits

0xbc73,	// (0x00090159) list_cale_time_pane_g1

0xbc7f,	// (0x00090165) list_cale_time_pane_g2_ParamLimits

0xbc7f,	// (0x00090165) list_cale_time_pane_g2

0x57cf,	// (0x00089cb5) list_cale_time_pane_g3_ParamLimits

0x57cf,	// (0x00089cb5) list_cale_time_pane_g3

0x57dd,	// (0x00089cc3) list_cale_time_pane_g4_ParamLimits

0x57dd,	// (0x00089cc3) list_cale_time_pane_g4

0x57eb,	// (0x00089cd1) list_cale_time_pane_g5_ParamLimits

0x57eb,	// (0x00089cd1) list_cale_time_pane_g5

0x0005,

0xf28e,	// (0x00093774) list_cale_time_pane_g_ParamLimits

0xf28e,	// (0x00093774) list_cale_time_pane_g

0xbc99,	// (0x0009017f) list_cale_time_pane_t1_ParamLimits

0xbc99,	// (0x0009017f) list_cale_time_pane_t1

0xbcc1,	// (0x000901a7) list_cale_time_pane_t2_ParamLimits

0xbcc1,	// (0x000901a7) list_cale_time_pane_t2

0x5a78,	// (0x00089f5e) aid_blid_cardinal_pane

0x5ab6,	// (0x00089f9c) compass_pane_t4

0xbce9,	// (0x000901cf) list_cale_time_pane_t4_ParamLimits

0xbce9,	// (0x000901cf) list_cale_time_pane_t4

0x5ac4,	// (0x00089faa) compass_pane_t5

0x5ad2,	// (0x00089fb8) compass_pane_t6

0x5ae0,	// (0x00089fc6) compass_pane_t7

0xc1d4,	// (0x000906ba) navi_pane_cc_t1

0xc3c3,	// (0x000908a9) aid_phob_thumbnail_center_pane

0x5ea7,	// (0x0008a38d) main_postcard_pane_g4_ParamLimits

0x0002,

0xf29b,	// (0x00093781) list_cale_time_pane_t_ParamLimits

0xf29b,	// (0x00093781) list_cale_time_pane_t

0x093f,	// (0x00084e25) bg_popup_window_pane_cp02_ParamLimits

0x093f,	// (0x00084e25) bg_popup_window_pane_cp02

0xbd11,	// (0x000901f7) heading_pane_cp01_ParamLimits

0xbd11,	// (0x000901f7) heading_pane_cp01

0xbd1d,	// (0x00090203) loc_req_pane_ParamLimits

0xbd1d,	// (0x00090203) loc_req_pane

0xbd2d,	// (0x00090213) loc_type_pane_ParamLimits

0xbd2d,	// (0x00090213) loc_type_pane

0xbd3f,	// (0x00090225) loc_type_pane_t1_ParamLimits

0xbd3f,	// (0x00090225) loc_type_pane_t1

0xbd51,	// (0x00090237) loc_type_pane_t2_ParamLimits

0xbd51,	// (0x00090237) loc_type_pane_t2

0xbd63,	// (0x00090249) loc_type_pane_t3_ParamLimits

0xbd63,	// (0x00090249) loc_type_pane_t3

0x0002,

0xf2a2,	// (0x00093788) loc_type_pane_t_ParamLimits

0xf2a2,	// (0x00093788) loc_type_pane_t

0xbd75,	// (0x0009025b) list_loc_req_pane

0xbd7f,	// (0x00090265) scroll_pane_cp012

0x57f9,	// (0x00089cdf) list_single_loc_request_popup_menu_pane_ParamLimits

0x57f9,	// (0x00089cdf) list_single_loc_request_popup_menu_pane

0xbd8a,	// (0x00090270) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xbd8a,	// (0x00090270) list_single_loc_request_popup_menu_pane_g1

0xbd96,	// (0x0009027c) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xbd96,	// (0x0009027c) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf2a9,	// (0x0009378f) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf2a9,	// (0x0009378f) list_single_loc_request_popup_menu_pane_g

0xbda2,	// (0x00090288) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xbda2,	// (0x00090288) list_single_loc_request_popup_menu_pane_t1

0x390f,	// (0x00087df5) bg_popup_window_pane_cp03_ParamLimits

0x390f,	// (0x00087df5) bg_popup_window_pane_cp03

0x1fdc,	// (0x000864c2) heading_loc_req_pane_ParamLimits

0x1fdc,	// (0x000864c2) heading_loc_req_pane

0x5806,	// (0x00089cec) popup_dyc_status_message_window_g1_ParamLimits

0x5806,	// (0x00089cec) popup_dyc_status_message_window_g1

0x581a,	// (0x00089d00) popup_dyc_status_message_window_t1_ParamLimits

0x581a,	// (0x00089d00) popup_dyc_status_message_window_t1

0x582f,	// (0x00089d15) popup_dyc_status_message_window_t2_ParamLimits

0x582f,	// (0x00089d15) popup_dyc_status_message_window_t2

0x5844,	// (0x00089d2a) popup_dyc_status_message_window_t3_ParamLimits

0x5844,	// (0x00089d2a) popup_dyc_status_message_window_t3

0x0002,

0xf2ae,	// (0x00093794) popup_dyc_status_message_window_t_ParamLimits

0xf2ae,	// (0x00093794) popup_dyc_status_message_window_t

0x0ce8,	// (0x000851ce) bg_heading_pane_cp01

0xbdb8,	// (0x0009029e) heading_loc_req_pane_g1

0xbdc0,	// (0x000902a6) heading_loc_req_pane_g2

0xbdc8,	// (0x000902ae) heading_loc_req_pane_g3

0x0002,

0xf2b5,	// (0x0009379b) heading_loc_req_pane_g

0xbdd0,	// (0x000902b6) heading_loc_req_pane_t1

0xbdef,	// (0x000902d5) bg_popup_sub_pane_cp01_ParamLimits

0xbdef,	// (0x000902d5) bg_popup_sub_pane_cp01

0xbdfd,	// (0x000902e3) popup_cale_events_window_g1_ParamLimits

0xbdfd,	// (0x000902e3) popup_cale_events_window_g1

0xbe1d,	// (0x00090303) popup_cale_events_window_g2_ParamLimits

0xbe1d,	// (0x00090303) popup_cale_events_window_g2

0x0001,

0xf2d7,	// (0x000937bd) popup_cale_events_window_g_ParamLimits

0xf2d7,	// (0x000937bd) popup_cale_events_window_g

0xbe3d,	// (0x00090323) popup_cale_events_window_t1_ParamLimits

0xbe3d,	// (0x00090323) popup_cale_events_window_t1

0xbe4f,	// (0x00090335) popup_cale_events_window_t2_ParamLimits

0xbe4f,	// (0x00090335) popup_cale_events_window_t2

0xbe8d,	// (0x00090373) popup_cale_events_window_t3_ParamLimits

0xbe8d,	// (0x00090373) popup_cale_events_window_t3

0xbec7,	// (0x000903ad) popup_cale_events_window_t4_ParamLimits

0xbec7,	// (0x000903ad) popup_cale_events_window_t4

0x0003,

0xf2dc,	// (0x000937c2) popup_cale_events_window_t_ParamLimits

0xf2dc,	// (0x000937c2) popup_cale_events_window_t

0x586c,	// (0x00089d52) call_type_pane

0x587c,	// (0x00089d62) popup_call_status_window_g1

0x5890,	// (0x00089d76) popup_call_status_window_g2

0x58a4,	// (0x00089d8a) popup_call_status_window_g3

0x0002,

0xf2e5,	// (0x000937cb) popup_call_status_window_g

0xbefd,	// (0x000903e3) call_type_pane_g1

0xbf06,	// (0x000903ec) call_type_pane_g2

0x0001,

0xf2ec,	// (0x000937d2) call_type_pane_g

0x0ce8,	// (0x000851ce) bg_popup_sub_pane_cp02

0xbf0f,	// (0x000903f5) listscroll_popup_wml_pane

0xbf17,	// (0x000903fd) list_wml_pane

0xbf21,	// (0x00090407) scroll_pane_cp013

0xbf2c,	// (0x00090412) list_single_graphic_popup_wml_pane_ParamLimits

0xbf2c,	// (0x00090412) list_single_graphic_popup_wml_pane

0x3927,	// (0x00087e0d) list_single_graphic_popup_wml_pane_g1

0xbf40,	// (0x00090426) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf2f1,	// (0x000937d7) list_single_graphic_popup_wml_pane_g

0xbf48,	// (0x0009042e) list_single_graphic_popup_wml_pane_t1

0xbf5e,	// (0x00090444) aid_call_pane

0x3907,	// (0x00087ded) popup_clock_analogue_window_g1

0x3907,	// (0x00087ded) popup_clock_analogue_window_g2

0xbf66,	// (0x0009044c) popup_clock_analogue_window_g3

0xbf66,	// (0x0009044c) popup_clock_analogue_window_g4

0x3927,	// (0x00087e0d) popup_clock_analogue_window_g5

0x0004,

0xf2f6,	// (0x000937dc) popup_clock_analogue_window_g

0xbf6e,	// (0x00090454) popup_clock_analogue_window_t1

0xbf7c,	// (0x00090462) clock_digital_number_pane_ParamLimits

0xbf7c,	// (0x00090462) clock_digital_number_pane

0xbf88,	// (0x0009046e) clock_digital_number_pane_cp02_ParamLimits

0xbf88,	// (0x0009046e) clock_digital_number_pane_cp02

0xbf94,	// (0x0009047a) clock_digital_number_pane_cp03_ParamLimits

0xbf94,	// (0x0009047a) clock_digital_number_pane_cp03

0xbfa0,	// (0x00090486) clock_digital_number_pane_cp04_ParamLimits

0xbfa0,	// (0x00090486) clock_digital_number_pane_cp04

0xbfac,	// (0x00090492) clock_digital_separator_pane_ParamLimits

0xbfac,	// (0x00090492) clock_digital_separator_pane

0xbfb8,	// (0x0009049e) popup_clock_digital_window_t1

0x3927,	// (0x00087e0d) clock_digital_number_pane_g1

0x3927,	// (0x00087e0d) clock_digital_number_pane_g2

0x0001,

0xf276,	// (0x0009375c) clock_digital_number_pane_g

0x3927,	// (0x00087e0d) clock_digital_separator_pane_g1

0x3927,	// (0x00087e0d) clock_digital_separator_pane_g2

0x0001,

0xf276,	// (0x0009375c) clock_digital_separator_pane_g

0x0ce8,	// (0x000851ce) bg_popup_window_pane_cp04

0xbfd5,	// (0x000904bb) heading_pane_cp03

0x4432,	// (0x00088918) listscroll_popup_gms_pane

0x0ce8,	// (0x000851ce) grid_large_graphic_popup_pane

0xbfde,	// (0x000904c4) listscroll_popup_gms_pane_g1

0xbfe7,	// (0x000904cd) listscroll_popup_gms_pane_g2

0x0001,

0xf301,	// (0x000937e7) listscroll_popup_gms_pane_g

0xbff0,	// (0x000904d6) scroll_pane_cp014

0x0e38,	// (0x0008531e) cell_large_graphic_popup_pane_ParamLimits

0x0e38,	// (0x0008531e) cell_large_graphic_popup_pane

0x398a,	// (0x00087e70) cell_large_graphic_popup_pane_g1_ParamLimits

0x398a,	// (0x00087e70) cell_large_graphic_popup_pane_g1

0xbff9,	// (0x000904df) cell_large_graphic_popup_pane_g2_ParamLimits

0xbff9,	// (0x000904df) cell_large_graphic_popup_pane_g2

0xc007,	// (0x000904ed) cell_large_graphic_popup_pane_g3_ParamLimits

0xc007,	// (0x000904ed) cell_large_graphic_popup_pane_g3

0xc015,	// (0x000904fb) cell_large_graphic_popup_pane_g4_ParamLimits

0xc015,	// (0x000904fb) cell_large_graphic_popup_pane_g4

0x0003,

0xf306,	// (0x000937ec) cell_large_graphic_popup_pane_g_ParamLimits

0xf306,	// (0x000937ec) cell_large_graphic_popup_pane_g

0x0ce8,	// (0x000851ce) grid_highlight_pane_cp010

0x3927,	// (0x00087e0d) bg_popup_call_pane_g1

0xc026,	// (0x0009050c) list_single_graphic_popup_conf_pane_ParamLimits

0xc026,	// (0x0009050c) list_single_graphic_popup_conf_pane

0xc039,	// (0x0009051f) list_highlight_pane_cp01

0xc042,	// (0x00090528) list_single_graphic_popup_conf_pane_g1

0xc04a,	// (0x00090530) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf30f,	// (0x000937f5) list_single_graphic_popup_conf_pane_g

0xc052,	// (0x00090538) list_single_graphic_popup_conf_pane_t1

0xc060,	// (0x00090546) linegrid_cams_pane_g1

0x58b3,	// (0x00089d99) linegrid_cams_pane_g2

0x3e02,	// (0x000882e8) linegrid_cams_pane_g3

0xc069,	// (0x0009054f) linegrid_cams_pane_g4

0x58bc,	// (0x00089da2) linegrid_cams_pane_g5

0x58c5,	// (0x00089dab) linegrid_cams_pane_g6

0x4419,	// (0x000888ff) linegrid_cams_pane_g7

0x0006,

0xf314,	// (0x000937fa) linegrid_cams_pane_g

0xc072,	// (0x00090558) popup_clock_analogue_window

0xc072,	// (0x00090558) popup_clock_digital_window

0x0ce8,	// (0x000851ce) popup_phob_thumbnail_window

0x3927,	// (0x00087e0d) call_video_uplink_pane_g1

0xc07b,	// (0x00090561) call_video_uplink_pane_g2

0x0001,

0xf323,	// (0x00093809) call_video_uplink_pane_g

0xc083,	// (0x00090569) video_uplink_pane

0xc08b,	// (0x00090571) mce_image_pane_g1

0x58d0,	// (0x00089db6) mce_image_pane_g2

0x58d8,	// (0x00089dbe) mce_image_pane_g3

0x58e0,	// (0x00089dc6) mce_image_pane_g4

0x58ea,	// (0x00089dd0) mce_image_pane_g5

0x0004,

0xf328,	// (0x0009380e) mce_image_pane_g

0xc095,	// (0x0009057b) control_top_pane_stacon_cp01_ParamLimits

0xc095,	// (0x0009057b) control_top_pane_stacon_cp01

0xc0a9,	// (0x0009058f) uni_indicator_pane_stacon_cp01_ParamLimits

0xc0a9,	// (0x0009058f) uni_indicator_pane_stacon_cp01

0xc0ba,	// (0x000905a0) bg_popup_sub_pane_cp03

0x58f2,	// (0x00089dd8) chi_dic_find_pane

0x58fa,	// (0x00089de0) listscroll_chi_dic_pane

0x5903,	// (0x00089de9) main_pane_chidic_g1

0x5916,	// (0x00089dfc) chi_dic_find_pane_t1

0xc0c4,	// (0x000905aa) find_chidic_pane

0xc0cd,	// (0x000905b3) chi_dic_list_pane_ParamLimits

0xc0cd,	// (0x000905b3) chi_dic_list_pane

0xc0de,	// (0x000905c4) scroll_pane_cp020

0x5924,	// (0x00089e0a) find_chidic_pane_t1

0x0ce8,	// (0x000851ce) input_focus_pane_cp06

0x5933,	// (0x00089e19) list_chi_dic_pane_ParamLimits

0x5933,	// (0x00089e19) list_chi_dic_pane

0x5945,	// (0x00089e2b) list_chi_dic_pane_t1_ParamLimits

0x5945,	// (0x00089e2b) list_chi_dic_pane_t1

0x0ce8,	// (0x000851ce) list_highlight_pane_cp020

0xc0e6,	// (0x000905cc) bg_cale_heading_pane_g1

0x5958,	// (0x00089e3e) bg_cale_heading_pane_g2

0x5960,	// (0x00089e46) bg_cale_heading_pane_g3

0x5968,	// (0x00089e4e) bg_cale_heading_pane_g4

0x5972,	// (0x00089e58) bg_cale_heading_pane_g5

0x597c,	// (0x00089e62) bg_cale_heading_pane_g6

0x5984,	// (0x00089e6a) bg_cale_heading_pane_g7

0x598c,	// (0x00089e72) bg_cale_heading_pane_g8

0x5996,	// (0x00089e7c) bg_cale_heading_pane_g9

0x0008,

0xf333,	// (0x00093819) bg_cale_heading_pane_g

0xc0e6,	// (0x000905cc) bg_cale_side_pane_g1

0x59a0,	// (0x00089e86) bg_cale_side_pane_g2

0x59a8,	// (0x00089e8e) bg_cale_side_pane_g3

0x59b0,	// (0x00089e96) bg_cale_side_pane_g4

0x59b8,	// (0x00089e9e) bg_cale_side_pane_g5

0x59c0,	// (0x00089ea6) bg_cale_side_pane_g6

0x59c8,	// (0x00089eae) bg_cale_side_pane_g7

0x59d0,	// (0x00089eb6) bg_cale_side_pane_g8

0x59d8,	// (0x00089ebe) bg_cale_side_pane_g9

0x0008,

0xf346,	// (0x0009382c) bg_cale_side_pane_g

0x59e0,	// (0x00089ec6) popup_call_status_window_ParamLimits

0x59e0,	// (0x00089ec6) popup_call_status_window

0xc0ee,	// (0x000905d4) stacon_top_pane

0xc0f6,	// (0x000905dc) status_pane_ParamLimits

0xc0f6,	// (0x000905dc) status_pane

0xc10b,	// (0x000905f1) status_small_pane

0xc113,	// (0x000905f9) control_pane

0x0ce8,	// (0x000851ce) stacon_bottom_pane

0xc11b,	// (0x00090601) list_single_mce_smart_pane_t1_ParamLimits

0xc11b,	// (0x00090601) list_single_mce_smart_pane_t1

0xc12e,	// (0x00090614) list_single_mce_smart_pane_t2_ParamLimits

0xc12e,	// (0x00090614) list_single_mce_smart_pane_t2

0x0001,

0xf359,	// (0x0009383f) list_single_mce_smart_pane_t_ParamLimits

0xf359,	// (0x0009383f) list_single_mce_smart_pane_t

0x5a27,	// (0x00089f0d) compass_pane

0x5a30,	// (0x00089f16) main_location2_pane_t1

0x5a42,	// (0x00089f28) main_location2_pane_t2

0x5a54,	// (0x00089f3a) main_location2_pane_t3

0x0003,

0xf35e,	// (0x00093844) main_location2_pane_t

0xc14d,	// (0x00090633) compass_pane_g1_ParamLimits

0xc14d,	// (0x00090633) compass_pane_g1

0x5a98,	// (0x00089f7e) compass_pane_t1

0x5aa7,	// (0x00089f8d) compass_pane_t2

0x0005,

0xf367,	// (0x0009384d) compass_pane_t

0x5aee,	// (0x00089fd4) text_secondary_cp61

0xc1cb,	// (0x000906b1) navi_pane_cams_g5

0xc247,	// (0x0009072d) navi_pane_im_t1

0xc255,	// (0x0009073b) navi_pane_mp_g1_ParamLimits

0xc255,	// (0x0009073b) navi_pane_mp_g1

0xc269,	// (0x0009074f) navi_pane_mp_g2_ParamLimits

0xc269,	// (0x0009074f) navi_pane_mp_g2

0xc275,	// (0x0009075b) navi_pane_mp_g3_ParamLimits

0xc275,	// (0x0009075b) navi_pane_mp_g3

0x0002,

0xf37b,	// (0x00093861) navi_pane_mp_g_ParamLimits

0xf37b,	// (0x00093861) navi_pane_mp_g

0xc281,	// (0x00090767) navi_pane_mp_t1

0xc28f,	// (0x00090775) navi_pane_mp_t2

0x0002,

0xf382,	// (0x00093868) navi_pane_mp_t

0xc2fa,	// (0x000907e0) navi_pane_vt_g1

0xc281,	// (0x00090767) navi_pane_vt_t1

0xc302,	// (0x000907e8) navi_slider_pane

0x4432,	// (0x00088918) zooming_pane

0xc312,	// (0x000907f8) navi_slider_pane_g1

0xc31b,	// (0x00090801) navi_slider_pane_g2

0x0006,

0xf389,	// (0x0009386f) navi_slider_pane_g

0xc348,	// (0x0009082e) aid_levels_zoom

0xc350,	// (0x00090836) zooming_pane_g1

0xc358,	// (0x0009083e) zooming_pane_g2

0xc358,	// (0x0009083e) zooming_pane_g3

0x0002,

0xf398,	// (0x0009387e) zooming_pane_g

0xc360,	// (0x00090846) level_10_zoom

0xc369,	// (0x0009084f) level_11_zoom

0xc372,	// (0x00090858) level_1_zoom

0xc37b,	// (0x00090861) level_2_zoom

0xc384,	// (0x0009086a) level_3_zoom

0xc38d,	// (0x00090873) level_4_zoom

0xc396,	// (0x0009087c) level_5_zoom

0xc39f,	// (0x00090885) level_6_zoom

0xc3a8,	// (0x0009088e) level_7_zoom

0xc3b1,	// (0x00090897) level_8_zoom

0xc3ba,	// (0x000908a0) level_9_zoom

0xc3cb,	// (0x000908b1) popup_phob_thumbnail_window_g1

0xc3d3,	// (0x000908b9) popup_phob_thumbnail_window_g2

0x0001,

0xf39f,	// (0x00093885) popup_phob_thumbnail_window_g

0x654f,	// (0x0008aa35) level_1_location

0x6557,	// (0x0008aa3d) level_2_location

0x655f,	// (0x0008aa45) level_3_location

0x6567,	// (0x0008aa4d) level_4_location

0x4432,	// (0x00088918) level_5_location

0x5b3f,	// (0x0008a025) mce_icon_pane_g1

0x5b49,	// (0x0008a02f) mce_icon_pane_g2

0x0001,

0xf3a4,	// (0x0009388a) mce_icon_pane_g

0x247b,	// (0x00086961) main_mup_pane_g1_ParamLimits

0x247b,	// (0x00086961) main_mup_pane_g1

0x247b,	// (0x00086961) main_mup_pane_g2_ParamLimits

0x247b,	// (0x00086961) main_mup_pane_g2

0x247b,	// (0x00086961) main_mup_pane_g3_ParamLimits

0x247b,	// (0x00086961) main_mup_pane_g3

0x247b,	// (0x00086961) main_mup_pane_g4_ParamLimits

0x247b,	// (0x00086961) main_mup_pane_g4

0x247b,	// (0x00086961) main_mup_pane_g5_ParamLimits

0x247b,	// (0x00086961) main_mup_pane_g5

0x247b,	// (0x00086961) main_mup_pane_g6_ParamLimits

0x247b,	// (0x00086961) main_mup_pane_g6

0x247b,	// (0x00086961) main_mup_pane_g7_ParamLimits

0x247b,	// (0x00086961) main_mup_pane_g7

0x247b,	// (0x00086961) main_mup_pane_g8_ParamLimits

0x247b,	// (0x00086961) main_mup_pane_g8

0x247b,	// (0x00086961) main_mup_pane_g9_ParamLimits

0x247b,	// (0x00086961) main_mup_pane_g9

0x247b,	// (0x00086961) main_mup_pane_g10_ParamLimits

0x247b,	// (0x00086961) main_mup_pane_g10

0x247b,	// (0x00086961) main_mup_pane_g11_ParamLimits

0x247b,	// (0x00086961) main_mup_pane_g11

0x398a,	// (0x00087e70) main_mup_pane_g12_ParamLimits

0x398a,	// (0x00087e70) main_mup_pane_g12

0x247b,	// (0x00086961) main_mup_pane_g13_ParamLimits

0x247b,	// (0x00086961) main_mup_pane_g13

0x000c,

0xf3a9,	// (0x0009388f) main_mup_pane_g_ParamLimits

0xf3a9,	// (0x0009388f) main_mup_pane_g

0x21a0,	// (0x00086686) main_mup_pane_t1_ParamLimits

0x21a0,	// (0x00086686) main_mup_pane_t1

0x21a0,	// (0x00086686) main_mup_pane_t2_ParamLimits

0x21a0,	// (0x00086686) main_mup_pane_t2

0x21a0,	// (0x00086686) main_mup_pane_t3_ParamLimits

0x21a0,	// (0x00086686) main_mup_pane_t3

0x449b,	// (0x00088981) main_mup_pane_t4_ParamLimits

0x449b,	// (0x00088981) main_mup_pane_t4

0x449b,	// (0x00088981) main_mup_pane_t5_ParamLimits

0x449b,	// (0x00088981) main_mup_pane_t5

0xc3db,	// (0x000908c1) main_mup_pane_t6_ParamLimits

0xc3db,	// (0x000908c1) main_mup_pane_t6

0x0005,

0xf3c4,	// (0x000938aa) main_mup_pane_t_ParamLimits

0xf3c4,	// (0x000938aa) main_mup_pane_t

0x0e38,	// (0x0008531e) mup_progress_pane_ParamLimits

0x0e38,	// (0x0008531e) mup_progress_pane

0x1789,	// (0x00085c6f) mup_visualizer_pane_ParamLimits

0x1789,	// (0x00085c6f) mup_visualizer_pane

0x1789,	// (0x00085c6f) mup_volume_pane_ParamLimits

0x1789,	// (0x00085c6f) mup_volume_pane

0x3998,	// (0x00087e7e) mup_visualizer_pane_g1_ParamLimits

0x3998,	// (0x00087e7e) mup_visualizer_pane_g1

0xc3ef,	// (0x000908d5) mup_visualizer_pane_g2_ParamLimits

0xc3ef,	// (0x000908d5) mup_visualizer_pane_g2

0x398a,	// (0x00087e70) mup_visualizer_pane_g3_ParamLimits

0x398a,	// (0x00087e70) mup_visualizer_pane_g3

0x0002,

0xf3d1,	// (0x000938b7) mup_visualizer_pane_g_ParamLimits

0xf3d1,	// (0x000938b7) mup_visualizer_pane_g

0x461f,	// (0x00088b05) mup_volume_pane_g1

0x461f,	// (0x00088b05) mup_volume_pane_g2

0x0001,

0xf3d8,	// (0x000938be) mup_volume_pane_g

0x461f,	// (0x00088b05) mup_progress_pane_g1

0x461f,	// (0x00088b05) mup_progress_pane_g2

0x461f,	// (0x00088b05) mup_progress_pane_g3

0x0002,

0xf3dd,	// (0x000938c3) mup_progress_pane_g

0x0ce8,	// (0x000851ce) bg_popup_window_pane_cp05

0xc3fd,	// (0x000908e3) heading_pane_cp02_ParamLimits

0xc3fd,	// (0x000908e3) heading_pane_cp02

0xc417,	// (0x000908fd) list_popup_blid_pane

0xc41f,	// (0x00090905) list_blid_sat_info_pane_ParamLimits

0xc41f,	// (0x00090905) list_blid_sat_info_pane

0xc432,	// (0x00090918) list_blid_sat_info_pane_g1

0xc43a,	// (0x00090920) list_blid_sat_info_pane_t1

0x5c49,	// (0x0008a12f) mup_equalizer_pane_ParamLimits

0x5c49,	// (0x0008a12f) mup_equalizer_pane

0x5c62,	// (0x0008a148) mup_equalizer_pane_cp1_ParamLimits

0x5c62,	// (0x0008a148) mup_equalizer_pane_cp1

0x5c7f,	// (0x0008a165) mup_equalizer_pane_cp2_ParamLimits

0x5c7f,	// (0x0008a165) mup_equalizer_pane_cp2

0x5c9c,	// (0x0008a182) mup_equalizer_pane_cp3_ParamLimits

0x5c9c,	// (0x0008a182) mup_equalizer_pane_cp3

0x5cbd,	// (0x0008a1a3) mup_equalizer_pane_cp4_ParamLimits

0x5cbd,	// (0x0008a1a3) mup_equalizer_pane_cp4

0x5cde,	// (0x0008a1c4) mup_equalizer_pane_cp5

0x5cf2,	// (0x0008a1d8) mup_equalizer_pane_cp6

0x5d06,	// (0x0008a1ec) mup_equalizer_pane_cp7

0x168d,	// (0x00085b73) bg_popup_call_poc_act_pane_g9

0x1695,	// (0x00085b7b) bg_popup_call_poc_act_pane_g10

0x169d,	// (0x00085b83) bg_popup_call_poc_act_pane_g11

0x000a,

0x390f,	// (0x00087df5) mup_scale_pane

0x3927,	// (0x00087e0d) mup_scale_pane_g1

0xc448,	// (0x0009092e) mup_scale_pane_g2

0x0006,

0xf3f9,	// (0x000938df) mup_scale_pane_g

0xc46c,	// (0x00090952) msg_data_pane

0xc474,	// (0x0009095a) scroll_pane_cp017

0x5d2c,	// (0x0008a212) bg_list_pane_cp04_ParamLimits

0x5d2c,	// (0x0008a212) bg_list_pane_cp04

0xc484,	// (0x0009096a) msg_data_pane_g1

0x5d44,	// (0x0008a22a) msg_data_pane_g2

0x5d4c,	// (0x0008a232) msg_data_pane_g3

0x5d54,	// (0x0008a23a) msg_data_pane_g4

0x5d5c,	// (0x0008a242) msg_data_pane_g5

0x5d64,	// (0x0008a24a) msg_data_pane_g6

0x5d6c,	// (0x0008a252) msg_data_pane_g7

0x0006,

0xf408,	// (0x000938ee) msg_data_pane_g

0x5d74,	// (0x0008a25a) msg_text_pane_ParamLimits

0x5d74,	// (0x0008a25a) msg_text_pane

0x5d9f,	// (0x0008a285) qrid_highlight_pane_cp011_ParamLimits

0x5d9f,	// (0x0008a285) qrid_highlight_pane_cp011

0x0ce8,	// (0x000851ce) msg_body_pane

0x0ce8,	// (0x000851ce) msg_header_pane

0xc495,	// (0x0009097b) input_focus_pane_cp07

0xc4aa,	// (0x00090990) msg_header_pane_t1_ParamLimits

0xc4aa,	// (0x00090990) msg_header_pane_t1

0xc4c0,	// (0x000909a6) msg_header_pane_t2_ParamLimits

0xc4c0,	// (0x000909a6) msg_header_pane_t2

0x0001,

0xf41c,	// (0x00093902) msg_header_pane_t_ParamLimits

0xf41c,	// (0x00093902) msg_header_pane_t

0xc4d7,	// (0x000909bd) msg_body_pane_g1

0xc4df,	// (0x000909c5) msg_body_pane_t1_ParamLimits

0xc4df,	// (0x000909c5) msg_body_pane_t1

0xc510,	// (0x000909f6) msg_body_pane_t2_ParamLimits

0xc510,	// (0x000909f6) msg_body_pane_t2

0xc522,	// (0x00090a08) msg_body_pane_t3_ParamLimits

0xc522,	// (0x00090a08) msg_body_pane_t3

0x0002,

0xf421,	// (0x00093907) msg_body_pane_t_ParamLimits

0xf421,	// (0x00093907) msg_body_pane_t

0x5dfd,	// (0x0008a2e3) main_viewer_pane_g1_ParamLimits

0x5dfd,	// (0x0008a2e3) main_viewer_pane_g1

0x5e0b,	// (0x0008a2f1) main_viewer_pane_g2_ParamLimits

0x5e0b,	// (0x0008a2f1) main_viewer_pane_g2

0x5e19,	// (0x0008a2ff) main_viewer_pane_g3_ParamLimits

0x5e19,	// (0x0008a2ff) main_viewer_pane_g3

0x5e28,	// (0x0008a30e) main_viewer_pane_g4_ParamLimits

0x5e28,	// (0x0008a30e) main_viewer_pane_g4

0xc54c,	// (0x00090a32) main_viewer_pane_g5_ParamLimits

0xc54c,	// (0x00090a32) main_viewer_pane_g5

0xc54c,	// (0x00090a32) main_viewer_pane_g7_ParamLimits

0xc54c,	// (0x00090a32) main_viewer_pane_g7

0xbd8a,	// (0x00090270) main_viewer_pane_g8_ParamLimits

0xbd8a,	// (0x00090270) main_viewer_pane_g8

0x0007,

0xf431,	// (0x00093917) main_viewer_pane_g_ParamLimits

0xf431,	// (0x00093917) main_viewer_pane_g

0xc56a,	// (0x00090a50) viewer_content_pane_ParamLimits

0xc56a,	// (0x00090a50) viewer_content_pane

0x5e64,	// (0x0008a34a) main_postcard_pane_g1_ParamLimits

0x5e64,	// (0x0008a34a) main_postcard_pane_g1

0x5e7a,	// (0x0008a360) main_postcard_pane_g2_ParamLimits

0x5e7a,	// (0x0008a360) main_postcard_pane_g2

0x5e90,	// (0x0008a376) main_postcard_pane_g3_ParamLimits

0x5e90,	// (0x0008a376) main_postcard_pane_g3

0x0005,

0xf442,	// (0x00093928) main_postcard_pane_g_ParamLimits

0xf442,	// (0x00093928) main_postcard_pane_g

0x5ea7,	// (0x0008a38d) main_postcard_pane_g4

0x181f,	// (0x00085d05) smil_status_volume_pane_g2

0x5eea,	// (0x0008a3d0) postcard_pane_ParamLimits

0x5eea,	// (0x0008a3d0) postcard_pane

0xc578,	// (0x00090a5e) postcard_pane_g1_ParamLimits

0xc578,	// (0x00090a5e) postcard_pane_g1

0x5f2c,	// (0x0008a412) postcard_pane_g2_ParamLimits

0x5f2c,	// (0x0008a412) postcard_pane_g2

0x5f38,	// (0x0008a41e) postcard_pane_g3_ParamLimits

0x5f38,	// (0x0008a41e) postcard_pane_g3

0xc586,	// (0x00090a6c) postcard_pane_g4_ParamLimits

0xc586,	// (0x00090a6c) postcard_pane_g4

0x5f44,	// (0x0008a42a) postcard_pane_g5_ParamLimits

0x5f44,	// (0x0008a42a) postcard_pane_g5

0x5f59,	// (0x0008a43f) postcard_pane_g6_ParamLimits

0x5f59,	// (0x0008a43f) postcard_pane_g6

0xc578,	// (0x00090a5e) postcard_pane_g7_ParamLimits

0xc578,	// (0x00090a5e) postcard_pane_g7

0x0006,

0xf44f,	// (0x00093935) postcard_pane_g_ParamLimits

0xf44f,	// (0x00093935) postcard_pane_g

0x5f6d,	// (0x0008a453) main_mp2_pane_g1_ParamLimits

0x5f6d,	// (0x0008a453) main_mp2_pane_g1

0x5f79,	// (0x0008a45f) main_mp2_pane_g2_ParamLimits

0x5f79,	// (0x0008a45f) main_mp2_pane_g2

0x5f85,	// (0x0008a46b) main_mp2_pane_g3_ParamLimits

0x5f85,	// (0x0008a46b) main_mp2_pane_g3

0x0002,

0xf45e,	// (0x00093944) main_mp2_pane_g_ParamLimits

0xf45e,	// (0x00093944) main_mp2_pane_g

0x5f91,	// (0x0008a477) main_mp2_pane_t1_ParamLimits

0x5f91,	// (0x0008a477) main_mp2_pane_t1

0x5fa6,	// (0x0008a48c) main_mp2_pane_t2_ParamLimits

0x5fa6,	// (0x0008a48c) main_mp2_pane_t2

0x5fb8,	// (0x0008a49e) main_mp2_pane_t3_ParamLimits

0x5fb8,	// (0x0008a49e) main_mp2_pane_t3

0x0002,

0xf465,	// (0x0009394b) main_mp2_pane_t_ParamLimits

0xf465,	// (0x0009394b) main_mp2_pane_t

0xc594,	// (0x00090a7a) pec_content_pane_ParamLimits

0xc594,	// (0x00090a7a) pec_content_pane

0x4bf1,	// (0x000890d7) scroll_pane_cp015

0xc5a6,	// (0x00090a8c) pec_attribute_pane_ParamLimits

0xc5a6,	// (0x00090a8c) pec_attribute_pane

0x5fca,	// (0x0008a4b0) pec_content_pane_g1_ParamLimits

0x5fca,	// (0x0008a4b0) pec_content_pane_g1

0xc5b6,	// (0x00090a9c) pec_content_pane_t1_ParamLimits

0xc5b6,	// (0x00090a9c) pec_content_pane_t1

0xc5c8,	// (0x00090aae) pec_content_pane_t2_ParamLimits

0xc5c8,	// (0x00090aae) pec_content_pane_t2

0x0001,

0xf46c,	// (0x00093952) pec_content_pane_t_ParamLimits

0xf46c,	// (0x00093952) pec_content_pane_t

0x5fd6,	// (0x0008a4bc) list_single_graphic_pane_cp01_ParamLimits

0x5fd6,	// (0x0008a4bc) list_single_graphic_pane_cp01

0x390f,	// (0x00087df5) bg_popup_sub_pane_cp04

0xc5da,	// (0x00090ac0) popup_mup_playback_window_g1

0xc5e6,	// (0x00090acc) popup_mup_playback_window_t1

0xc5fb,	// (0x00090ae1) popup_mup_playback_window_t2

0x0001,

0xf471,	// (0x00093957) popup_mup_playback_window_t

0xc632,	// (0x00090b18) main_image_pane_g1_ParamLimits

0xc632,	// (0x00090b18) main_image_pane_g1

0xc675,	// (0x00090b5b) scroll_pane_cp018_ParamLimits

0xc675,	// (0x00090b5b) scroll_pane_cp018

0xc68d,	// (0x00090b73) scroll_pane_cp016_ParamLimits

0xc68d,	// (0x00090b73) scroll_pane_cp016

0x60a4,	// (0x0008a58a) smil2_image_pane_ParamLimits

0x60a4,	// (0x0008a58a) smil2_image_pane

0x60d4,	// (0x0008a5ba) smil2_root_pane_ParamLimits

0x60d4,	// (0x0008a5ba) smil2_root_pane

0x610c,	// (0x0008a5f2) smil2_text_pane_ParamLimits

0x610c,	// (0x0008a5f2) smil2_text_pane

0x0ce8,	// (0x000851ce) bg_list_pane_cp06

0xc6c9,	// (0x00090baf) grid_radio_pane

0x0ce8,	// (0x000851ce) bg_popup_window_pane_cp06

0xc6d1,	// (0x00090bb7) main_fmradio_pane_t1

0x16e5,	// (0x00085bcb) heading_pane_cp04

0xc6df,	// (0x00090bc5) main_fmradio_pane_t2

0x16ed,	// (0x00085bd3) popup_cale_lunar_info_window_g1

0xc6ed,	// (0x00090bd3) main_fmradio_pane_t3

0x16f5,	// (0x00085bdb) popup_cale_lunar_info_window_g2

0xc6fb,	// (0x00090be1) main_fmradio_pane_t4

0x0001,

0xc709,	// (0x00090bef) main_fmradio_pane_t5

0x0004,

0xf564,	// (0x00093a4a) popup_cale_lunar_info_window_g

0xf486,	// (0x0009396c) main_fmradio_pane_t

0xc717,	// (0x00090bfd) wait_bar_pane_cp03

0xc71f,	// (0x00090c05) cell_fmradio_pane_ParamLimits

0xc71f,	// (0x00090c05) cell_fmradio_pane

0xc578,	// (0x00090a5e) cell_fmradio_pane_g1_ParamLimits

0xc578,	// (0x00090a5e) cell_fmradio_pane_g1

0x0ce8,	// (0x000851ce) grid_highlight_pane_cp011

0xc732,	// (0x00090c18) poc_content_pane_ParamLimits

0xc732,	// (0x00090c18) poc_content_pane

0xc744,	// (0x00090c2a) scroll_pane_cp019

0x618c,	// (0x0008a672) popup_call_poc_act_window_ParamLimits

0x618c,	// (0x0008a672) popup_call_poc_act_window

0x61b0,	// (0x0008a696) popup_call_poc_inact_window_ParamLimits

0x61b0,	// (0x0008a696) popup_call_poc_inact_window

0xf528,	// (0x00093a0e) bg_popup_call_poc_act_pane_g

0x16a5,	// (0x00085b8b) bg_popup_call_poc_inact_pane_g1

0x16ad,	// (0x00085b93) bg_popup_call_poc_inact_pane_g2

0xc74c,	// (0x00090c32) popup_call_poc_act_window_g2

0x16b5,	// (0x00085b9b) bg_popup_call_poc_inact_pane_g3

0x1635,	// (0x00085b1b) bg_popup_call_poc_inact_pane_g4

0x16bd,	// (0x00085ba3) bg_popup_call_poc_inact_pane_g5

0xc754,	// (0x00090c3a) popup_call_poc_act_window_t1_ParamLimits

0xc754,	// (0x00090c3a) popup_call_poc_act_window_t1

0xc77c,	// (0x00090c62) popup_call_poc_act_window_t2_ParamLimits

0xc77c,	// (0x00090c62) popup_call_poc_act_window_t2

0xc7a4,	// (0x00090c8a) popup_call_poc_act_window_t3_ParamLimits

0xc7a4,	// (0x00090c8a) popup_call_poc_act_window_t3

0xc7cc,	// (0x00090cb2) popup_call_poc_act_window_t4_ParamLimits

0xc7cc,	// (0x00090cb2) popup_call_poc_act_window_t4

0x0003,

0xf491,	// (0x00093977) popup_call_poc_act_window_t_ParamLimits

0xf491,	// (0x00093977) popup_call_poc_act_window_t

0x16c5,	// (0x00085bab) bg_popup_call_poc_inact_pane_g6

0x16cd,	// (0x00085bb3) bg_popup_call_poc_inact_pane_g7

0x16d5,	// (0x00085bbb) bg_popup_call_poc_inact_pane_g8

0xc7de,	// (0x00090cc4) popup_call_poc_inact_window_g2

0x16dd,	// (0x00085bc3) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf53f,	// (0x00093a25) bg_popup_call_poc_inact_pane_g

0xc7e6,	// (0x00090ccc) popup_call_poc_inact_window_t1_ParamLimits

0xc7e6,	// (0x00090ccc) popup_call_poc_inact_window_t1

0xc7fb,	// (0x00090ce1) popup_call_poc_inact_window_t2_ParamLimits

0xc7fb,	// (0x00090ce1) popup_call_poc_inact_window_t2

0xc810,	// (0x00090cf6) popup_call_poc_inact_window_t3_ParamLimits

0xc810,	// (0x00090cf6) popup_call_poc_inact_window_t3

0x0002,

0xf49a,	// (0x00093980) popup_call_poc_inact_window_t_ParamLimits

0xf49a,	// (0x00093980) popup_call_poc_inact_window_t

0x1797,	// (0x00085c7d) context_pane_ParamLimits

0x6a37,	// (0x0008af1d) signal_pane_ParamLimits

0x4432,	// (0x00088918) main_call2_pane

0xce35,	// (0x0009131b) popup_phob_thumbnail2_window_ParamLimits

0xce35,	// (0x0009131b) popup_phob_thumbnail2_window

0xc534,	// (0x00090a1a) aid_hotspot_pointer_arrow_pane

0xc53c,	// (0x00090a22) aid_hotspot_pointer_hand_pane

0x6519,	// (0x0008a9ff) phob_pre_status_pane_g5

0x3931,	// (0x00087e17) cams_zoom_pane_ParamLimits

0x3931,	// (0x00087e17) image_vga_pane_ParamLimits

0x398a,	// (0x00087e70) main_camera_pane_g1_ParamLimits

0x398a,	// (0x00087e70) main_camera_pane_g2_ParamLimits

0x398a,	// (0x00087e70) main_camera_pane_g3_ParamLimits

0x398a,	// (0x00087e70) main_camera_pane_g4_ParamLimits

0x398a,	// (0x00087e70) main_camera_pane_g5_ParamLimits

0x398a,	// (0x00087e70) main_camera_pane_g6_ParamLimits

0x398a,	// (0x00087e70) main_camera_pane_g7_ParamLimits

0xf1c5,	// (0x000936ab) main_camera_pane_g_ParamLimits

0x449b,	// (0x00088981) main_camera_pane_t1_ParamLimits

0x449b,	// (0x00088981) main_camera_pane_t2_ParamLimits

0xf1d6,	// (0x000936bc) main_camera_pane_t_ParamLimits

0x390f,	// (0x00087df5) bg_popup_preview_window_pane_cp01_ParamLimits

0x390f,	// (0x00087df5) bg_popup_preview_window_pane_cp01

0xc825,	// (0x00090d0b) popup_phob_thumbnail2_window_g1_ParamLimits

0xc825,	// (0x00090d0b) popup_phob_thumbnail2_window_g1

0x0ce8,	// (0x000851ce) call2_cli_visual_pane

0x61e4,	// (0x0008a6ca) popup_call2_audio_conf_window_ParamLimits

0x61e4,	// (0x0008a6ca) popup_call2_audio_conf_window

0x6204,	// (0x0008a6ea) popup_call2_audio_first_window_ParamLimits

0x6204,	// (0x0008a6ea) popup_call2_audio_first_window

0x629a,	// (0x0008a780) popup_call2_audio_in_window_ParamLimits

0x629a,	// (0x0008a780) popup_call2_audio_in_window

0x62e2,	// (0x0008a7c8) popup_call2_audio_out_window_ParamLimits

0x62e2,	// (0x0008a7c8) popup_call2_audio_out_window

0x634c,	// (0x0008a832) popup_call2_audio_second_window_ParamLimits

0x634c,	// (0x0008a832) popup_call2_audio_second_window

0x63b2,	// (0x0008a898) popup_call2_audio_wait_window_ParamLimits

0x63b2,	// (0x0008a898) popup_call2_audio_wait_window

0x0ce8,	// (0x000851ce) bg_popup_call2_act_pane_cp03

0x38f1,	// (0x00087dd7) list_conf_pane_cp

0xc831,	// (0x00090d17) popup_call2_audio_conf_window_t1

0xc83f,	// (0x00090d25) list_single_graphic_popup_conf2_pane_ParamLimits

0xc83f,	// (0x00090d25) list_single_graphic_popup_conf2_pane

0xc039,	// (0x0009051f) list_highlight_pane_cp04

0xc852,	// (0x00090d38) list_single_graphic_popup_conf2_pane_g1

0xc04a,	// (0x00090530) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf4a1,	// (0x00093987) list_single_graphic_popup_conf2_pane_g

0xc85c,	// (0x00090d42) list_single_graphic_popup_conf2_pane_t1

0xc86a,	// (0x00090d50) bg_popup_call2_act_pane_cp01_ParamLimits

0xc86a,	// (0x00090d50) bg_popup_call2_act_pane_cp01

0xc8f4,	// (0x00090dda) call_type_pane_cp05_ParamLimits

0xc8f4,	// (0x00090dda) call_type_pane_cp05

0xc948,	// (0x00090e2e) popup_call2_audio_second_window_g1_ParamLimits

0xc948,	// (0x00090e2e) popup_call2_audio_second_window_g1

0xc99c,	// (0x00090e82) popup_call2_audio_second_window_g2_ParamLimits

0xc99c,	// (0x00090e82) popup_call2_audio_second_window_g2

0x0002,

0xf4a6,	// (0x0009398c) popup_call2_audio_second_window_g_ParamLimits

0xf4a6,	// (0x0009398c) popup_call2_audio_second_window_g

0xca01,	// (0x00090ee7) popup_call2_audio_second_window_t1_ParamLimits

0xca01,	// (0x00090ee7) popup_call2_audio_second_window_t1

0xcabc,	// (0x00090fa2) popup_call2_audio_second_window_t2_ParamLimits

0xcabc,	// (0x00090fa2) popup_call2_audio_second_window_t2

0xcb0f,	// (0x00090ff5) popup_call2_audio_second_window_t3_ParamLimits

0xcb0f,	// (0x00090ff5) popup_call2_audio_second_window_t3

0x0003,

0xf4ad,	// (0x00093993) popup_call2_audio_second_window_t_ParamLimits

0xf4ad,	// (0x00093993) popup_call2_audio_second_window_t

0x0ce8,	// (0x000851ce) bg_popup_call2_in_pane_cp02

0x0cf2,	// (0x000851d8) call_type_pane_cp04

0x63ec,	// (0x0008a8d2) popup_call2_audio_wait_window_g1

0x63f4,	// (0x0008a8da) popup_call2_audio_wait_window_g2

0x0001,

0xf4b6,	// (0x0009399c) popup_call2_audio_wait_window_g

0x0d0a,	// (0x000851f0) popup_call2_audio_wait_window_t3

0xcc02,	// (0x000910e8) bg_popup_call2_act_pane_ParamLimits

0xcc02,	// (0x000910e8) bg_popup_call2_act_pane

0xccc2,	// (0x000911a8) call_type_pane_cp03_ParamLimits

0xccc2,	// (0x000911a8) call_type_pane_cp03

0xcd26,	// (0x0009120c) popup_call2_audio_first_window_g1_ParamLimits

0xcd26,	// (0x0009120c) popup_call2_audio_first_window_g1

0xcd96,	// (0x0009127c) popup_call2_audio_first_window_g2_ParamLimits

0xcd96,	// (0x0009127c) popup_call2_audio_first_window_g2

0xcdfa,	// (0x000912e0) popup_call2_audio_first_window_g3_ParamLimits

0xcdfa,	// (0x000912e0) popup_call2_audio_first_window_g3

0x0004,

0xf4bb,	// (0x000939a1) popup_call2_audio_first_window_g_ParamLimits

0xf4bb,	// (0x000939a1) popup_call2_audio_first_window_g

0x0ec0,	// (0x000853a6) popup_call2_audio_first_window_t1_ParamLimits

0x0ec0,	// (0x000853a6) popup_call2_audio_first_window_t1

0x0fc3,	// (0x000854a9) popup_call2_audio_first_window_t4_ParamLimits

0x0fc3,	// (0x000854a9) popup_call2_audio_first_window_t4

0x10a6,	// (0x0008558c) popup_call2_audio_first_window_t5_ParamLimits

0x10a6,	// (0x0008558c) popup_call2_audio_first_window_t5

0x0003,

0xf4c6,	// (0x000939ac) popup_call2_audio_first_window_t_ParamLimits

0xf4c6,	// (0x000939ac) popup_call2_audio_first_window_t

0x3907,	// (0x00087ded) bg_popup_call2_act_pane_g1

0x16fd,	// (0x00085be3) popup_cale_lunar_info_window_t1

0x170b,	// (0x00085bf1) popup_cale_lunar_info_window_t2

0x1719,	// (0x00085bff) popup_cale_lunar_info_window_t3

0x0ce8,	// (0x000851ce) bg_popup_call2_bubble_pane

0x11a7,	// (0x0008568d) bg_popup_call2_in_pane_cp01_ParamLimits

0x11a7,	// (0x0008568d) bg_popup_call2_in_pane_cp01

0x09c4,	// (0x00084eaa) call_type_pane_cp02

0x63fc,	// (0x0008a8e2) popup_call2_audio_out_window_g1_ParamLimits

0x63fc,	// (0x0008a8e2) popup_call2_audio_out_window_g1

0x11ef,	// (0x000856d5) popup_call2_audio_out_window_g2_ParamLimits

0x11ef,	// (0x000856d5) popup_call2_audio_out_window_g2

0x6428,	// (0x0008a90e) popup_call2_audio_out_window_g3_ParamLimits

0x6428,	// (0x0008a90e) popup_call2_audio_out_window_g3

0x0003,

0xf4cf,	// (0x000939b5) popup_call2_audio_out_window_g_ParamLimits

0xf4cf,	// (0x000939b5) popup_call2_audio_out_window_g

0x1226,	// (0x0008570c) popup_call2_audio_out_window_t1_ParamLimits

0x1226,	// (0x0008570c) popup_call2_audio_out_window_t1

0x1285,	// (0x0008576b) popup_call2_audio_out_window_t2_ParamLimits

0x1285,	// (0x0008576b) popup_call2_audio_out_window_t2

0x12d9,	// (0x000857bf) popup_call2_audio_out_window_t3_ParamLimits

0x12d9,	// (0x000857bf) popup_call2_audio_out_window_t3

0x12ef,	// (0x000857d5) popup_call2_audio_out_window_t4_ParamLimits

0x12ef,	// (0x000857d5) popup_call2_audio_out_window_t4

0x1305,	// (0x000857eb) popup_call2_audio_out_window_t5_ParamLimits

0x1305,	// (0x000857eb) popup_call2_audio_out_window_t5

0x0005,

0xf4d8,	// (0x000939be) popup_call2_audio_out_window_t_ParamLimits

0xf4d8,	// (0x000939be) popup_call2_audio_out_window_t

0x1369,	// (0x0008584f) bg_popup_call2_in_pane_ParamLimits

0x1369,	// (0x0008584f) bg_popup_call2_in_pane

0x13c5,	// (0x000858ab) popup_call2_audio_in_window_g1_ParamLimits

0x13c5,	// (0x000858ab) popup_call2_audio_in_window_g1

0x13fd,	// (0x000858e3) popup_call2_audio_in_window_g2_ParamLimits

0x13fd,	// (0x000858e3) popup_call2_audio_in_window_g2

0x1435,	// (0x0008591b) popup_call2_audio_in_window_g3_ParamLimits

0x1435,	// (0x0008591b) popup_call2_audio_in_window_g3

0x0003,

0xf4e5,	// (0x000939cb) popup_call2_audio_in_window_g_ParamLimits

0xf4e5,	// (0x000939cb) popup_call2_audio_in_window_g

0x148d,	// (0x00085973) popup_call2_audio_in_window_t1_ParamLimits

0x148d,	// (0x00085973) popup_call2_audio_in_window_t1

0x150d,	// (0x000859f3) popup_call2_audio_in_window_t2_ParamLimits

0x150d,	// (0x000859f3) popup_call2_audio_in_window_t2

0x158d,	// (0x00085a73) popup_call2_audio_in_window_t3_ParamLimits

0x158d,	// (0x00085a73) popup_call2_audio_in_window_t3

0x15a7,	// (0x00085a8d) popup_call2_audio_in_window_t4_ParamLimits

0x15a7,	// (0x00085a8d) popup_call2_audio_in_window_t4

0x15b9,	// (0x00085a9f) popup_call2_audio_in_window_t5_ParamLimits

0x15b9,	// (0x00085a9f) popup_call2_audio_in_window_t5

0x15cb,	// (0x00085ab1) popup_call2_audio_in_window_t6_ParamLimits

0x15cb,	// (0x00085ab1) popup_call2_audio_in_window_t6

0x0005,

0xf4ee,	// (0x000939d4) popup_call2_audio_in_window_t_ParamLimits

0xf4ee,	// (0x000939d4) popup_call2_audio_in_window_t

0x3907,	// (0x00087ded) bg_popup_call2_in_pane_g1

0x1727,	// (0x00085c0d) popup_cale_lunar_info_window_t4

0x0003,

0xf569,	// (0x00093a4f) popup_cale_lunar_info_window_t

0x390f,	// (0x00087df5) bg_popup_call2_rect_pane_ParamLimits

0x390f,	// (0x00087df5) bg_popup_call2_rect_pane

0x0ce8,	// (0x000851ce) call2_cli_visual_graphic_pane

0x0ce8,	// (0x000851ce) call2_cli_visual_text_pane

0xce5c,	// (0x00091342) smil_status_volume_pane_g3

0x0002,

0x3927,	// (0x00087e0d) call2_cli_visual_graphic_pane_g1

0x3927,	// (0x00087e0d) call2_cli_visual_graphic_pane_g2

0x3927,	// (0x00087e0d) call2_cli_visual_graphic_pane_g3

0x0002,

0xf4fb,	// (0x000939e1) call2_cli_visual_graphic_pane_g

0x15dd,	// (0x00085ac3) bg_popup_call2_rect_pane_g1

0x3db3,	// (0x00088299) bg_popup_call2_rect_pane_g2

0x15e5,	// (0x00085acb) bg_popup_call2_rect_pane_g3

0x15ed,	// (0x00085ad3) bg_popup_call2_rect_pane_g4

0x15f5,	// (0x00085adb) bg_popup_call2_rect_pane_g5

0x15fd,	// (0x00085ae3) bg_popup_call2_rect_pane_g6

0x1605,	// (0x00085aeb) bg_popup_call2_rect_pane_g7

0x160d,	// (0x00085af3) bg_popup_call2_rect_pane_g8

0x1615,	// (0x00085afb) bg_popup_call2_rect_pane_g9

0x0008,

0xf502,	// (0x000939e8) bg_popup_call2_rect_pane_g

0x161d,	// (0x00085b03) bg_popup_call2_bubble_pane_g1

0x1625,	// (0x00085b0b) bg_popup_call2_bubble_pane_g2

0x162d,	// (0x00085b13) bg_popup_call2_bubble_pane_g3

0x1635,	// (0x00085b1b) bg_popup_call2_bubble_pane_g4

0x163d,	// (0x00085b23) bg_popup_call2_bubble_pane_g5

0x1645,	// (0x00085b2b) bg_popup_call2_bubble_pane_g6

0x164d,	// (0x00085b33) bg_popup_call2_bubble_pane_g7

0x1655,	// (0x00085b3b) bg_popup_call2_bubble_pane_g8

0x165d,	// (0x00085b43) bg_popup_call2_bubble_pane_g9

0x0008,

0xf515,	// (0x000939fb) bg_popup_call2_bubble_pane_g

0x3e45,	// (0x0008832b) aid_cale_week_size_cell_pane

0x44af,	// (0x00088995) aid_cams_cif_uncrop_pane_ParamLimits

0x44af,	// (0x00088995) aid_cams_cif_uncrop_pane

0x4629,	// (0x00088b0f) aid_cams_size_cell_ParamLimits

0x4629,	// (0x00088b0f) aid_cams_size_cell

0x463d,	// (0x00088b23) grid_cams_pane_ParamLimits

0x4657,	// (0x00088b3d) linegrid_cams_pane_ParamLimits

0x478c,	// (0x00088c72) call_video_pane_t1

0x47aa,	// (0x00088c90) call_video_pane_t2

0x0001,

0xf222,	// (0x00093708) call_video_pane_t

0x4e34,	// (0x0008931a) aid_cale_month_size_cell_pane_ParamLimits

0x4e34,	// (0x0008931a) aid_cale_month_size_cell_pane

0xf5ad,	// (0x00093a93) smil_status_volume_pane_g

0xce69,	// (0x0009134f) volume_smil_pane_ParamLimits

0xbab4,	// (0x0008ff9a) aid_popup2_width_pane

0x3d0b,	// (0x000881f1) cell_qdial_pane_g4_ParamLimits

0x3d0b,	// (0x000881f1) cell_qdial_pane_g4

0x5a78,	// (0x00089f5e) aid_blid_cardinal_pane_ParamLimits

0x5a84,	// (0x00089f6a) aid_blid_destination_pane_ParamLimits

0x5a84,	// (0x00089f6a) aid_blid_destination_pane

0x390f,	// (0x00087df5) bg_popup_call_poc_act_pane_ParamLimits

0x390f,	// (0x00087df5) bg_popup_call_poc_act_pane

0x390f,	// (0x00087df5) bg_popup_call_poc_inact_pane_ParamLimits

0x390f,	// (0x00087df5) bg_popup_call_poc_inact_pane

0x1665,	// (0x00085b4b) bg_popup_call_poc_act_pane_g1

0x166d,	// (0x00085b53) bg_popup_call_poc_act_pane_g2

0x1675,	// (0x00085b5b) bg_popup_call_poc_act_pane_g3

0x1635,	// (0x00085b1b) bg_popup_call_poc_act_pane_g4

0x163d,	// (0x00085b23) bg_popup_call_poc_act_pane_g5

0x167d,	// (0x00085b63) bg_popup_call_poc_act_pane_g6

0x164d,	// (0x00085b33) bg_popup_call_poc_act_pane_g7

0x1685,	// (0x00085b6b) bg_popup_call_poc_act_pane_g8

0x0ce8,	// (0x000851ce) main_usb_pane

0xce10,	// (0x000912f6) popup_cale_lunar_info_window

0x4ad6,	// (0x00088fbc) im_reading_pane_t1_ParamLimits

0x4b10,	// (0x00088ff6) list_im_pane_ParamLimits

0x4b21,	// (0x00089007) scroll_pane_cp07_ParamLimits

0x0ce8,	// (0x000851ce) grid_highlight_pane_cp012

0x390f,	// (0x00087df5) mup_scale_pane_ParamLimits

0xc578,	// (0x00090a5e) main_usb_pane_g1_ParamLimits

0xc578,	// (0x00090a5e) main_usb_pane_g1

0x6477,	// (0x0008a95d) main_usb_pane_g2_ParamLimits

0x6477,	// (0x0008a95d) main_usb_pane_g2

0x0001,

0xf552,	// (0x00093a38) main_usb_pane_g_ParamLimits

0xf552,	// (0x00093a38) main_usb_pane_g

0x648d,	// (0x0008a973) main_usb_pane_t1_ParamLimits

0x648d,	// (0x0008a973) main_usb_pane_t1

0x649f,	// (0x0008a985) main_usb_pane_t2_ParamLimits

0x649f,	// (0x0008a985) main_usb_pane_t2

0x64b1,	// (0x0008a997) main_usb_pane_t3_ParamLimits

0x64b1,	// (0x0008a997) main_usb_pane_t3

0x64c3,	// (0x0008a9a9) main_usb_pane_t4_ParamLimits

0x64c3,	// (0x0008a9a9) main_usb_pane_t4

0x64d5,	// (0x0008a9bb) main_usb_pane_t5_ParamLimits

0x64d5,	// (0x0008a9bb) main_usb_pane_t5

0x64e7,	// (0x0008a9cd) main_usb_pane_t6_ParamLimits

0x64e7,	// (0x0008a9cd) main_usb_pane_t6

0x0005,

0xf557,	// (0x00093a3d) main_usb_pane_t_ParamLimits

0x5a27,	// (0x00089f0d) aid_text_placing

0x5a30,	// (0x00089f16) main_location2_pane_t1_ParamLimits

0x5a42,	// (0x00089f28) main_location2_pane_t2_ParamLimits

0x5a54,	// (0x00089f3a) main_location2_pane_t3_ParamLimits

0x5a66,	// (0x00089f4c) main_location2_pane_t4_ParamLimits

0x5a66,	// (0x00089f4c) main_location2_pane_t4

0xf35e,	// (0x00093844) main_location2_pane_t_ParamLimits

0x394b,	// (0x00087e31) find_pinb_pane_g2_ParamLimits

0x394b,	// (0x00087e31) find_pinb_pane_g2

0x0001,

0xf0da,	// (0x000935c0) find_pinb_pane_g_ParamLimits

0xf0da,	// (0x000935c0) find_pinb_pane_g

0x3957,	// (0x00087e3d) find_pinb_pane_t1_ParamLimits

0x3969,	// (0x00087e4f) find_pinb_pane_t2_ParamLimits

0xf0df,	// (0x000935c5) find_pinb_pane_t_ParamLimits

0x0ce8,	// (0x000851ce) main_call3_pane

0x535a,	// (0x00089840) cale_month_day_heading_pane_t1_ParamLimits

0x539c,	// (0x00089882) cale_month_day_heading_pane_t2_ParamLimits

0x53d1,	// (0x000898b7) cale_month_day_heading_pane_t3_ParamLimits

0x5406,	// (0x000898ec) cale_month_day_heading_pane_t4_ParamLimits

0x5443,	// (0x00089929) cale_month_day_heading_pane_t5_ParamLimits

0x5488,	// (0x0008996e) cale_month_day_heading_pane_t6_ParamLimits

0x54cd,	// (0x000899b3) cale_month_day_heading_pane_t7_ParamLimits

0xf25a,	// (0x00093740) cale_month_day_heading_pane_t_ParamLimits

0x5737,	// (0x00089c1d) smil_status_volume_pane

0x5f08,	// (0x0008a3ee) postcard_address_pane_ParamLimits

0x5f08,	// (0x0008a3ee) postcard_address_pane

0x5f1a,	// (0x0008a400) postcard_message_pane_ParamLimits

0x5f1a,	// (0x0008a400) postcard_message_pane

0x6454,	// (0x0008a93a) call2_cli_visual_pane_t1_ParamLimits

0x6454,	// (0x0008a93a) call2_cli_visual_pane_t1

0x184a,	// (0x00085d30) postcard_message_pane_t1_ParamLimits

0x184a,	// (0x00085d30) postcard_message_pane_t1

0x1832,	// (0x00085d18) postcard_address_pane_t1_ParamLimits

0x1832,	// (0x00085d18) postcard_address_pane_t1

0x6bea,	// (0x0008b0d0) popup_call3_audio_in_window_ParamLimits

0x6bea,	// (0x0008b0d0) popup_call3_audio_in_window

0x6a75,	// (0x0008af5b) bg_popup_call3_in_pane_ParamLimits

0x6a75,	// (0x0008af5b) bg_popup_call3_in_pane

0x6aeb,	// (0x0008afd1) popup_call3_audio_in_window_g1_ParamLimits

0x6aeb,	// (0x0008afd1) popup_call3_audio_in_window_g1

0x6b0b,	// (0x0008aff1) popup_call3_audio_in_window_g2_ParamLimits

0x6b0b,	// (0x0008aff1) popup_call3_audio_in_window_g2

0x6b2b,	// (0x0008b011) popup_call3_audio_in_window_g3_ParamLimits

0x6b2b,	// (0x0008b011) popup_call3_audio_in_window_g3

0x0003,

0xf5b4,	// (0x00093a9a) popup_call3_audio_in_window_g_ParamLimits

0xf5b4,	// (0x00093a9a) popup_call3_audio_in_window_g

0x6b5c,	// (0x0008b042) popup_call3_audio_in_window_t1_ParamLimits

0x6b5c,	// (0x0008b042) popup_call3_audio_in_window_t1

0x6b9a,	// (0x0008b080) popup_call3_audio_in_window_t2_ParamLimits

0x6b9a,	// (0x0008b080) popup_call3_audio_in_window_t2

0x6bd8,	// (0x0008b0be) popup_call3_audio_in_window_t3_ParamLimits

0x6bd8,	// (0x0008b0be) popup_call3_audio_in_window_t3

0x0002,

0xf5bd,	// (0x00093aa3) popup_call3_audio_in_window_t_ParamLimits

0xf5bd,	// (0x00093aa3) popup_call3_audio_in_window_t

0x4432,	// (0x00088918) bg_popup_call3_rect_pane

0x15dd,	// (0x00085ac3) bg_popup_call3_rect_pane_g1

0x3db3,	// (0x00088299) bg_popup_call3_rect_pane_g2

0x15e5,	// (0x00085acb) bg_popup_call3_rect_pane_g3

0x15ed,	// (0x00085ad3) bg_popup_call3_rect_pane_g4

0x15f5,	// (0x00085adb) bg_popup_call3_rect_pane_g5

0x15fd,	// (0x00085ae3) bg_popup_call3_rect_pane_g6

0x1605,	// (0x00085aeb) bg_popup_call3_rect_pane_g7

0x08cb,	// (0x00084db1) mup_visualizer_osc_pane

0x08cb,	// (0x00084db1) mup_visualizer_spec_pane

0x6aa5,	// (0x0008af8b) call3_video_qcif_pane_ParamLimits

0x6aa5,	// (0x0008af8b) call3_video_qcif_pane

0x6ab8,	// (0x0008af9e) call3_video_qcif_uncrop_pane_ParamLimits

0x6ab8,	// (0x0008af9e) call3_video_qcif_uncrop_pane

0x6ac6,	// (0x0008afac) call3_video_subqcif_pane_ParamLimits

0x6ac6,	// (0x0008afac) call3_video_subqcif_pane

0x6ada,	// (0x0008afc0) call3_video_subqcif_uncrop_pane_ParamLimits

0x6ada,	// (0x0008afc0) call3_video_subqcif_uncrop_pane

0x6b4b,	// (0x0008b031) popup_call3_audio_in_window_g4_ParamLimits

0x6b4b,	// (0x0008b031) popup_call3_audio_in_window_g4

0x08cb,	// (0x00084db1) mup_spec_half_pane

0x08cb,	// (0x00084db1) mup_spec_half_pane_cp

0x08cb,	// (0x00084db1) mup_osc_middle_pane

0x461f,	// (0x00088b05) mup_visualizer_osc_pane_g1

0x17e5,	// (0x00085ccb) mup_spec_bar_pane_ParamLimits

0x17e5,	// (0x00085ccb) mup_spec_bar_pane

0x461f,	// (0x00088b05) mup_spec_bar_pane_g1

0x461f,	// (0x00088b05) mup_spec_bar_pane_g2

0x0001,

0xf3d8,	// (0x000938be) mup_spec_bar_pane_g

0x3e45,	// (0x0008832b) aid_cale_week_size_cell_pane_ParamLimits

0x3e5f,	// (0x00088345) bg_cale_heading_pane_ParamLimits

0x3e77,	// (0x0008835d) bg_cale_pane_cp01_ParamLimits

0x3e94,	// (0x0008837a) cale_week_corner_pane_ParamLimits

0x3eb3,	// (0x00088399) cale_week_day_heading_pane_ParamLimits

0x3ed0,	// (0x000883b6) cale_week_scroll_pane_g1_ParamLimits

0x3ee3,	// (0x000883c9) cale_week_scroll_pane_g2_ParamLimits

0x3efb,	// (0x000883e1) cale_week_scroll_pane_g3_ParamLimits

0x3f13,	// (0x000883f9) cale_week_scroll_pane_g4_ParamLimits

0x3f2b,	// (0x00088411) cale_week_scroll_pane_g5_ParamLimits

0x3f4b,	// (0x00088431) cale_week_scroll_pane_g6_ParamLimits

0x3f6b,	// (0x00088451) cale_week_scroll_pane_g7_ParamLimits

0x3f8b,	// (0x00088471) cale_week_scroll_pane_g8_ParamLimits

0x3faf,	// (0x00088495) cale_week_scroll_pane_g9_ParamLimits

0x3fc7,	// (0x000884ad) cale_week_scroll_pane_g10_ParamLimits

0x3fdf,	// (0x000884c5) cale_week_scroll_pane_g11_ParamLimits

0x3ff7,	// (0x000884dd) cale_week_scroll_pane_g12_ParamLimits

0x400f,	// (0x000884f5) cale_week_scroll_pane_g13_ParamLimits

0x400f,	// (0x000884f5) cale_week_scroll_pane_g14_ParamLimits

0x400f,	// (0x000884f5) cale_week_scroll_pane_g15_ParamLimits

0xf16b,	// (0x00093651) cale_week_scroll_pane_g_ParamLimits

0x404b,	// (0x00088531) cale_week_time_pane_ParamLimits

0x406f,	// (0x00088555) grid_cale_week_pane_ParamLimits

0x4095,	// (0x0008857b) listscroll_cale_week_pane_t1

0x40a7,	// (0x0008858d) scroll_pane_cp08_ParamLimits

0x4ec1,	// (0x000893a7) cale_month_corner_pane_ParamLimits

0x52db,	// (0x000897c1) cale_month_pane_t1

0x52ed,	// (0x000897d3) cale_month_week_pane_ParamLimits

0x587c,	// (0x00089d62) popup_call_status_window_g1_ParamLimits

0x5890,	// (0x00089d76) popup_call_status_window_g2_ParamLimits

0x58a4,	// (0x00089d8a) popup_call_status_window_g3_ParamLimits

0xf2e5,	// (0x000937cb) popup_call_status_window_g_ParamLimits

0xbf56,	// (0x0009043c) aid_call2_pane

0x5db5,	// (0x0008a29b) msg_header_pane_g1

0x5f08,	// (0x0008a3ee) postcard_address2_pane_ParamLimits

0x5f08,	// (0x0008a3ee) postcard_address2_pane

0x5f1a,	// (0x0008a400) postcard_message2_pane_ParamLimits

0x5f1a,	// (0x0008a400) postcard_message2_pane

0x6a45,	// (0x0008af2b) message2_row_pane_ParamLimits

0x6a45,	// (0x0008af2b) message2_row_pane

0x6a62,	// (0x0008af48) address2_row_pane_ParamLimits

0x6a62,	// (0x0008af48) address2_row_pane

0x17b2,	// (0x00085c98) postcard_message2_row_pane_g1

0x17ba,	// (0x00085ca0) postcard_message2_row_pane_t1

0x17b2,	// (0x00085c98) address2_row_pane_g1

0x17ba,	// (0x00085ca0) address2_row_pane_t1

0x442a,	// (0x00088910) aid_size_cell_vorec

0x0ce8,	// (0x000851ce) main_rss_pane

0x17c8,	// (0x00085cae) rss_list_single_pane_ParamLimits

0x17c8,	// (0x00085cae) rss_list_single_pane

0x17d6,	// (0x00085cbc) rss_list_single_pane_t1

0x17d6,	// (0x00085cbc) rss_list_single_pane_t2

0x0001,

0xf5a8,	// (0x00093a8e) rss_list_single_pane_t

0x0ce8,	// (0x000851ce) main_camera2_pane

0x0ce8,	// (0x000851ce) main_video2_pane

0xce7e,	// (0x00091364) cams_zoom_pane_cp2_ParamLimits

0xce7e,	// (0x00091364) cams_zoom_pane_cp2

0xce7e,	// (0x00091364) image2_vga_pane_ParamLimits

0xce7e,	// (0x00091364) image2_vga_pane

0xed41,	// (0x00093227) main_camera2_pane_g1_ParamLimits

0xed41,	// (0x00093227) main_camera2_pane_g1

0xed41,	// (0x00093227) main_camera2_pane_g2_ParamLimits

0xed41,	// (0x00093227) main_camera2_pane_g2

0xed41,	// (0x00093227) main_camera2_pane_g3_ParamLimits

0xed41,	// (0x00093227) main_camera2_pane_g3

0xed41,	// (0x00093227) main_camera2_pane_g4_ParamLimits

0xed41,	// (0x00093227) main_camera2_pane_g4

0xed41,	// (0x00093227) main_camera2_pane_g5_ParamLimits

0xed41,	// (0x00093227) main_camera2_pane_g5

0xed41,	// (0x00093227) main_camera2_pane_g6_ParamLimits

0xed41,	// (0x00093227) main_camera2_pane_g6

0xed41,	// (0x00093227) main_camera2_pane_g7_ParamLimits

0xed41,	// (0x00093227) main_camera2_pane_g7

0xed41,	// (0x00093227) main_camera2_pane_g8_ParamLimits

0xed41,	// (0x00093227) main_camera2_pane_g8

0x0008,

0xf5c4,	// (0x00093aaa) main_camera2_pane_g_ParamLimits

0xf5c4,	// (0x00093aaa) main_camera2_pane_g

0x6c0c,	// (0x0008b0f2) main_camera2_pane_t1_ParamLimits

0x6c0c,	// (0x0008b0f2) main_camera2_pane_t1

0x6c0c,	// (0x0008b0f2) main_camera2_pane_t2_ParamLimits

0x6c0c,	// (0x0008b0f2) main_camera2_pane_t2

0x6c0c,	// (0x0008b0f2) main_camera2_pane_t3_ParamLimits

0x6c0c,	// (0x0008b0f2) main_camera2_pane_t3

0x6c0c,	// (0x0008b0f2) main_camera2_pane_t4_ParamLimits

0x6c0c,	// (0x0008b0f2) main_camera2_pane_t4

0x0006,

0xf5d7,	// (0x00093abd) main_camera2_pane_t_ParamLimits

0xf5d7,	// (0x00093abd) main_camera2_pane_t

0xed4f,	// (0x00093235) cams_zoom_pane_cp4_ParamLimits

0xed4f,	// (0x00093235) cams_zoom_pane_cp4

0x6c20,	// (0x0008b106) image2_cif_pane_ParamLimits

0x6c20,	// (0x0008b106) image2_cif_pane

0xbb19,	// (0x0008ffff) image2_subqcif_pane_ParamLimits

0xbb19,	// (0x0008ffff) image2_subqcif_pane

0x6c2e,	// (0x0008b114) main_video2_pane_g1_ParamLimits

0x6c2e,	// (0x0008b114) main_video2_pane_g1

0x6c2e,	// (0x0008b114) main_video2_pane_g2_ParamLimits

0x6c2e,	// (0x0008b114) main_video2_pane_g2

0x6c2e,	// (0x0008b114) main_video2_pane_g3_ParamLimits

0x6c2e,	// (0x0008b114) main_video2_pane_g3

0x6c2e,	// (0x0008b114) main_video2_pane_g4_ParamLimits

0x6c2e,	// (0x0008b114) main_video2_pane_g4

0x6c2e,	// (0x0008b114) main_video2_pane_g5_ParamLimits

0x6c2e,	// (0x0008b114) main_video2_pane_g5

0x6c2e,	// (0x0008b114) main_video2_pane_g6_ParamLimits

0x6c2e,	// (0x0008b114) main_video2_pane_g6

0x0005,

0xf5e6,	// (0x00093acc) main_video2_pane_g_ParamLimits

0xf5e6,	// (0x00093acc) main_video2_pane_g

0x6c3c,	// (0x0008b122) main_video2_pane_t1_ParamLimits

0x6c3c,	// (0x0008b122) main_video2_pane_t1

0x6c3c,	// (0x0008b122) main_video2_pane_t2_ParamLimits

0x6c3c,	// (0x0008b122) main_video2_pane_t2

0x6c3c,	// (0x0008b122) main_video2_pane_t3_ParamLimits

0x6c3c,	// (0x0008b122) main_video2_pane_t3

0x0002,

0xf5f3,	// (0x00093ad9) main_video2_pane_t_ParamLimits

0xf5f3,	// (0x00093ad9) main_video2_pane_t

0x657b,	// (0x0008aa61) call_muted_g2

0x0001,

0xf59a,	// (0x00093a80) call_muted_g

0x0ce8,	// (0x000851ce) main_mup2_pane

0x247b,	// (0x00086961) main_mup2_pane_g1_ParamLimits

0x247b,	// (0x00086961) main_mup2_pane_g1

0x247b,	// (0x00086961) main_mup2_pane_g2_ParamLimits

0x247b,	// (0x00086961) main_mup2_pane_g2

0x1924,	// (0x00085e0a) main_mup_pane_g13_cp1

0xbb27,	// (0x0009000d) mup_volume_pane_cp1

0x247b,	// (0x00086961) main_mup2_pane_g4_ParamLimits

0x247b,	// (0x00086961) main_mup2_pane_g4

0x247b,	// (0x00086961) main_mup2_pane_g5_ParamLimits

0x247b,	// (0x00086961) main_mup2_pane_g5

0x247b,	// (0x00086961) main_mup2_pane_g6_ParamLimits

0x247b,	// (0x00086961) main_mup2_pane_g6

0x247b,	// (0x00086961) main_mup2_pane_g7_ParamLimits

0x247b,	// (0x00086961) main_mup2_pane_g7

0x0006,

0xf5fa,	// (0x00093ae0) main_mup2_pane_g_ParamLimits

0xf5fa,	// (0x00093ae0) main_mup2_pane_g

0x21a0,	// (0x00086686) main_mup2_pane_t1_ParamLimits

0x21a0,	// (0x00086686) main_mup2_pane_t1

0x21a0,	// (0x00086686) main_mup2_pane_t2_ParamLimits

0x21a0,	// (0x00086686) main_mup2_pane_t2

0x21a0,	// (0x00086686) main_mup2_pane_t3_ParamLimits

0x21a0,	// (0x00086686) main_mup2_pane_t3

0x21a0,	// (0x00086686) main_mup2_pane_t4_ParamLimits

0x21a0,	// (0x00086686) main_mup2_pane_t4

0x21a0,	// (0x00086686) main_mup2_pane_t5_ParamLimits

0x21a0,	// (0x00086686) main_mup2_pane_t5

0x21a0,	// (0x00086686) main_mup2_pane_t6_ParamLimits

0x21a0,	// (0x00086686) main_mup2_pane_t6

0x0005,

0xf609,	// (0x00093aef) main_mup2_pane_t_ParamLimits

0xf609,	// (0x00093aef) main_mup2_pane_t

0x1789,	// (0x00085c6f) mup2_visualizer_pane_ParamLimits

0x1789,	// (0x00085c6f) mup2_visualizer_pane

0x1789,	// (0x00085c6f) mup_progress_pane_cp_ParamLimits

0x1789,	// (0x00085c6f) mup_progress_pane_cp

0xced8,	// (0x000913be) mup_volume_pane_cp_ParamLimits

0xced8,	// (0x000913be) mup_volume_pane_cp

0x398a,	// (0x00087e70) mup2_visualizer_pane_g1_ParamLimits

0x398a,	// (0x00087e70) mup2_visualizer_pane_g1

0x3998,	// (0x00087e7e) mup2_visualizer_pane_g2_ParamLimits

0x3998,	// (0x00087e7e) mup2_visualizer_pane_g2

0x3998,	// (0x00087e7e) mup2_visualizer_pane_g3_ParamLimits

0x3998,	// (0x00087e7e) mup2_visualizer_pane_g3

0x0002,

0xf0e4,	// (0x000935ca) mup2_visualizer_pane_g_ParamLimits

0xf0e4,	// (0x000935ca) mup2_visualizer_pane_g

0xc6c1,	// (0x00090ba7) aid_size_cell_fmradio

0x672d,	// (0x0008ac13) aid_height_parent_landcape

0x4bd8,	// (0x000890be) wml_content_pane_cp

0x4be0,	// (0x000890c6) wml_tabs_pane

0x4be9,	// (0x000890cf) popup_wml_miniature_window

0x4bf1,	// (0x000890d7) scroll_pane_cp021

0x4c05,	// (0x000890eb) wml_content_pane_comp8

0x0ce8,	// (0x000851ce) bg_popup_sub_pane_cp05

0x187c,	// (0x00085d62) popup_wml_miniature_window_g1

0x1884,	// (0x00085d6a) wml_miniature_view_pane

0x6c50,	// (0x0008b136) aid_size_wml_view

0x6c58,	// (0x0008b13e) wml_miniature_view_pane_g1

0x6c61,	// (0x0008b147) wml_miniature_view_pane_g2

0x6c6a,	// (0x0008b150) wml_miniature_view_pane_g3

0x6c72,	// (0x0008b158) wml_miniature_view_pane_g4

0x6c7a,	// (0x0008b160) wml_miniature_view_pane_g5

0x6c82,	// (0x0008b168) wml_miniature_view_pane_g6

0x6c8a,	// (0x0008b170) wml_miniature_view_pane_g7

0x6c92,	// (0x0008b178) wml_miniature_view_pane_g8

0x0007,

0xf616,	// (0x00093afc) wml_miniature_view_pane_g

0x188c,	// (0x00085d72) background_graphic_ParamLimits

0x188c,	// (0x00085d72) background_graphic

0x1898,	// (0x00085d7e) wml_tabs_2_pane

0x18a1,	// (0x00085d87) wml_tabs_3_pane_ParamLimits

0x18a1,	// (0x00085d87) wml_tabs_3_pane

0x18b3,	// (0x00085d99) wml_tabs_4_pane_ParamLimits

0x18b3,	// (0x00085d99) wml_tabs_4_pane

0x18c9,	// (0x00085daf) wml_tabs_5_pane_ParamLimits

0x18c9,	// (0x00085daf) wml_tabs_5_pane

0x18e3,	// (0x00085dc9) wml_tabs_pane_g2_ParamLimits

0x18e3,	// (0x00085dc9) wml_tabs_pane_g2

0x18f8,	// (0x00085dde) wml_tabs_pane_g3_ParamLimits

0x18f8,	// (0x00085dde) wml_tabs_pane_g3

0x190d,	// (0x00085df3) wml_tabs_2_active_pane_ParamLimits

0x190d,	// (0x00085df3) wml_tabs_2_active_pane

0x190d,	// (0x00085df3) wml_tabs_2_passive_pane_ParamLimits

0x190d,	// (0x00085df3) wml_tabs_2_passive_pane

0x6c9a,	// (0x0008b180) wml_tabs_3_active_pane_cp_ParamLimits

0x6c9a,	// (0x0008b180) wml_tabs_3_active_pane_cp

0x6caf,	// (0x0008b195) wml_tabs_3_passive_pane_ParamLimits

0x6caf,	// (0x0008b195) wml_tabs_3_passive_pane

0x6cc2,	// (0x0008b1a8) wml_tabs_3_passive_pane_cp_ParamLimits

0x6cc2,	// (0x0008b1a8) wml_tabs_3_passive_pane_cp

0x6cd9,	// (0x0008b1bf) tabs_4_active_pane

0x6ce1,	// (0x0008b1c7) tabs_4_passive_pane

0x6ceb,	// (0x0008b1d1) tabs_4_passive_pane_cp

0x6cf3,	// (0x0008b1d9) tabs_4_passive_pane_cp2

0x646f,	// (0x0008a955) aid_height_text

0x1789,	// (0x00085c6f) mup_volume_cont_pane_ParamLimits

0x1789,	// (0x00085c6f) mup_volume_cont_pane

0x08cb,	// (0x00084db1) aid_size_cell_pinb

0x08cb,	// (0x00084db1) aid_size_list_pinb

0x1789,	// (0x00085c6f) mup2_volume_cont_pane_ParamLimits

0x1789,	// (0x00085c6f) mup2_volume_cont_pane

0xcec2,	// (0x000913a8) mup2_volume_cont_pane_g1_ParamLimits

0xcec2,	// (0x000913a8) mup2_volume_cont_pane_g1

0x352c,	// (0x00087a12) aid_size_cell_touch_ParamLimits

0x352c,	// (0x00087a12) aid_size_cell_touch

0x3759,	// (0x00087c3f) touch_pane_ParamLimits

0x3759,	// (0x00087c3f) touch_pane

0xbb27,	// (0x0009000d) main_rss2_pane

0x192e,	// (0x00085e14) listscroll_rss2_pane

0x1937,	// (0x00085e1d) rss2_navigation_pane

0x193f,	// (0x00085e25) list_rss2_pane

0xc0de,	// (0x000905c4) scroll_pane_cp22

0x1947,	// (0x00085e2d) rss2_navigation_pane_g1

0x1950,	// (0x00085e36) rss2_navigation_pane_g2

0x1958,	// (0x00085e3e) rss2_navigation_pane_g3

0x0002,

0xf627,	// (0x00093b0d) rss2_navigation_pane_g

0x1960,	// (0x00085e46) rss2_navigation_pane_t1

0x6cfd,	// (0x0008b1e3) rss2_list_single_pane_ParamLimits

0x6cfd,	// (0x0008b1e3) rss2_list_single_pane

0x196e,	// (0x00085e54) rss2_list_single_pane_t2

0x197c,	// (0x00085e62) rss2_list_single_pane_t3_ParamLimits

0x197c,	// (0x00085e62) rss2_list_single_pane_t3

0x1999,	// (0x00085e7f) rss2_list_single_pane_t4

0x571f,	// (0x00089c05) smil_status_pane_g1

0xbb19,	// (0x0008ffff) main_image2_pane_ParamLimits

0xbb19,	// (0x0008ffff) main_image2_pane

0xed41,	// (0x00093227) main_camera2_pane_g9_ParamLimits

0xed41,	// (0x00093227) main_camera2_pane_g9

0x6c0c,	// (0x0008b0f2) main_camera2_pane_t5_ParamLimits

0x6c0c,	// (0x0008b0f2) main_camera2_pane_t5

0xce8c,	// (0x00091372) main_camera2_pane_t6_ParamLimits

0xce8c,	// (0x00091372) main_camera2_pane_t6

0x6d13,	// (0x0008b1f9) main_image2_pane_g1_ParamLimits

0x6d13,	// (0x0008b1f9) main_image2_pane_g1

0x6142,	// (0x0008a628) smil2_video_pane_ParamLimits

0x6142,	// (0x0008a628) smil2_video_pane

0xbad0,	// (0x0008ffb6) aid_zoom_text_primary_cp

0xbb0f,	// (0x0008fff5) popup_preview_fixed_window

0x4ace,	// (0x00088fb4) im_reading_pane_g1

0x6bfe,	// (0x0008b0e4) cams2_bc_adjust_pane_cp_ParamLimits

0x6bfe,	// (0x0008b0e4) cams2_bc_adjust_pane_cp

0xceb4,	// (0x0009139a) cams2_bc_adjust_pane_ParamLimits

0xceb4,	// (0x0009139a) cams2_bc_adjust_pane

0x1924,	// (0x00085e0a) cams2_bc_adjust_pane_g1

0xbb27,	// (0x0009000d) cams2_slider_pane

0x1924,	// (0x00085e0a) cams2_slider_pane_g1

0x1924,	// (0x00085e0a) cams2_slider_pane_g2

0x0006,

0xf62e,	// (0x00093b14) cams2_slider_pane_g

0x39e6,	// (0x00087ecc) calc_display_pane_ParamLimits

0x3a0b,	// (0x00087ef1) calc_paper_pane_ParamLimits

0x3a2e,	// (0x00087f14) grid_calc_pane_ParamLimits

0xbfb8,	// (0x0009049e) popup_clock_digital_window_t1_ParamLimits

0xc65e,	// (0x00090b44) main_image_pane_t1

0x39c8,	// (0x00087eae) aid_size_cell_calc_ParamLimits

0x39c8,	// (0x00087eae) aid_size_cell_calc

0x6791,	// (0x0008ac77) popup_blid_sat_info2_window_ParamLimits

0x6791,	// (0x0008ac77) popup_blid_sat_info2_window

0x19a7,	// (0x00085e8d) aid_size_cell_blid

0xceee,	// (0x000913d4) bg_popup_window_pane_cp07

0x19c4,	// (0x00085eaa) grid_popup_blid_pane

0x19ce,	// (0x00085eb4) heading_pane_cp05_ParamLimits

0x19ce,	// (0x00085eb4) heading_pane_cp05

0x1a98,	// (0x00085f7e) cell_popup_blid_pane_ParamLimits

0x1a98,	// (0x00085f7e) cell_popup_blid_pane

0x1abc,	// (0x00085fa2) cell_popup_blid_pane_g1

0x1ac4,	// (0x00085faa) cell_popup_blid_pane_t1

0x1789,	// (0x00085c6f) mup2_indicator_pane_ParamLimits

0x1789,	// (0x00085c6f) mup2_indicator_pane

0x08cb,	// (0x00084db1) mup2_visualizer_osc_pane

0x1866,	// (0x00085d4c) mup2_visualizer_spec_pane_ParamLimits

0x1866,	// (0x00085d4c) mup2_visualizer_spec_pane

0x08cb,	// (0x00084db1) mup2_spec_half_pane

0x08cb,	// (0x00084db1) mup2_spec_half_pane_cp

0x1ad2,	// (0x00085fb8) mup2_spec_bar_pane_ParamLimits

0x1ad2,	// (0x00085fb8) mup2_spec_bar_pane

0x461f,	// (0x00088b05) mup2_spec_bar_pane_g1

0x1af1,	// (0x00085fd7) mup2_spec_bar_pane_g2

0x0001,

0xf654,	// (0x00093b3a) mup2_spec_bar_pane_g

0x08cb,	// (0x00084db1) mup2_osc_middle_pane

0x461f,	// (0x00088b05) mup2_visualizer_osc_pane_g1

0x08f5,	// (0x00084ddb) popup_number_entry_window_t1_ParamLimits

0x0908,	// (0x00084dee) popup_number_entry_window_t2_ParamLimits

0x091a,	// (0x00084e00) popup_number_entry_window_t3_ParamLimits

0x37ab,	// (0x00087c91) popup_number_entry_window_t5_ParamLimits

0x37ab,	// (0x00087c91) popup_number_entry_window_t5

0xf085,	// (0x0009356b) popup_number_entry_window_t_ParamLimits

0x092c,	// (0x00084e12) text_title_cp2_ParamLimits

0xc544,	// (0x00090a2a) aid_hotspot_pointer_text2_pane

0xc55e,	// (0x00090a44) main_viewer_pane_g9_ParamLimits

0xc55e,	// (0x00090a44) main_viewer_pane_g9

0x52db,	// (0x000897c1) cale_month_pane_t1_ParamLimits

0x5799,	// (0x00089c7f) bg_cale_pane_ParamLimits

0xbbf7,	// (0x000900dd) list_cale_pane_ParamLimits

0xbc08,	// (0x000900ee) listscroll_cale_day_pane_t1

0xbc1a,	// (0x00090100) scroll_pane_cp09_ParamLimits

0x5b51,	// (0x0008a037) main_mup_eq_pane_t1_ParamLimits

0x5b51,	// (0x0008a037) main_mup_eq_pane_t1

0x5b6b,	// (0x0008a051) main_mup_eq_pane_t2_ParamLimits

0x5b6b,	// (0x0008a051) main_mup_eq_pane_t2

0x5b85,	// (0x0008a06b) main_mup_eq_pane_t3_ParamLimits

0x5b85,	// (0x0008a06b) main_mup_eq_pane_t3

0x5ba1,	// (0x0008a087) main_mup_eq_pane_t4_ParamLimits

0x5ba1,	// (0x0008a087) main_mup_eq_pane_t4

0x5bbd,	// (0x0008a0a3) main_mup_eq_pane_t5_ParamLimits

0x5bbd,	// (0x0008a0a3) main_mup_eq_pane_t5

0x5bd9,	// (0x0008a0bf) main_mup_eq_pane_t6_ParamLimits

0x5bd9,	// (0x0008a0bf) main_mup_eq_pane_t6

0x5bed,	// (0x0008a0d3) main_mup_eq_pane_t7_ParamLimits

0x5bed,	// (0x0008a0d3) main_mup_eq_pane_t7

0x5c01,	// (0x0008a0e7) main_mup_eq_pane_t8_ParamLimits

0x5c01,	// (0x0008a0e7) main_mup_eq_pane_t8

0x5c15,	// (0x0008a0fb) main_mup_eq_pane_t9_ParamLimits

0x5c15,	// (0x0008a0fb) main_mup_eq_pane_t9

0x5c2f,	// (0x0008a115) main_mup_eq_pane_t10_ParamLimits

0x5c2f,	// (0x0008a115) main_mup_eq_pane_t10

0x0009,

0xf3e4,	// (0x000938ca) main_mup_eq_pane_t_ParamLimits

0xf3e4,	// (0x000938ca) main_mup_eq_pane_t

0x5cde,	// (0x0008a1c4) mup_equalizer_pane_cp5_ParamLimits

0x5cf2,	// (0x0008a1d8) mup_equalizer_pane_cp6_ParamLimits

0x5d06,	// (0x0008a1ec) mup_equalizer_pane_cp7_ParamLimits

0xbb27,	// (0x0009000d) main_gallery_pane

0x1804,	// (0x00085cea) smil2_volume_pane

0x180c,	// (0x00085cf2) smil_status_volume_pane_g1_ParamLimits

0x181f,	// (0x00085d05) smil_status_volume_pane_g2_ParamLimits

0xce5c,	// (0x00091342) smil_status_volume_pane_g3_ParamLimits

0xf5ad,	// (0x00093a93) smil_status_volume_pane_g_ParamLimits

0xceee,	// (0x000913d4) bg_popup_window_pane_cp07_ParamLimits

0x19af,	// (0x00085e95) blid_firmament_pane

0x3931,	// (0x00087e17) aid_size_cell_gallery_ParamLimits

0x3931,	// (0x00087e17) aid_size_cell_gallery

0x3931,	// (0x00087e17) grid_gallery_pane_ParamLimits

0x3931,	// (0x00087e17) grid_gallery_pane

0xceee,	// (0x000913d4) cell_gallery_pane_ParamLimits

0xceee,	// (0x000913d4) cell_gallery_pane

0x3931,	// (0x00087e17) bg_cell_gallery_focus_pane_ParamLimits

0x3931,	// (0x00087e17) bg_cell_gallery_focus_pane

0x398a,	// (0x00087e70) cell_gallery_pane_g1_ParamLimits

0x398a,	// (0x00087e70) cell_gallery_pane_g1

0x398a,	// (0x00087e70) cell_gallery_pane_g2_ParamLimits

0x398a,	// (0x00087e70) cell_gallery_pane_g2

0x398a,	// (0x00087e70) cell_gallery_pane_g3_ParamLimits

0x398a,	// (0x00087e70) cell_gallery_pane_g3

0x3998,	// (0x00087e7e) cell_gallery_pane_g4_ParamLimits

0x3998,	// (0x00087e7e) cell_gallery_pane_g4

0x0003,

0xf659,	// (0x00093b3f) cell_gallery_pane_g_ParamLimits

0xf659,	// (0x00093b3f) cell_gallery_pane_g

0x1afb,	// (0x00085fe1) bg_cell_gallery_focus_pane_g1

0x1b03,	// (0x00085fe9) bg_cell_gallery_focus_pane_g2

0x1b0b,	// (0x00085ff1) bg_cell_gallery_focus_pane_g3

0x1b13,	// (0x00085ff9) bg_cell_gallery_focus_pane_g4

0x1b1b,	// (0x00086001) bg_cell_gallery_focus_pane_g5

0x1b23,	// (0x00086009) bg_cell_gallery_focus_pane_g6

0x1b2b,	// (0x00086011) bg_cell_gallery_focus_pane_g7

0x1b33,	// (0x00086019) bg_cell_gallery_focus_pane_g8

0x0007,

0xf662,	// (0x00093b48) bg_cell_gallery_focus_pane_g

0x1b3b,	// (0x00086021) aid_firma_cardinal

0x1b4f,	// (0x00086035) blid_firmament_pane_t1

0x1b66,	// (0x0008604c) blid_firmament_pane_t2

0x1b7d,	// (0x00086063) blid_firmament_pane_t3

0x1b94,	// (0x0008607a) blid_firmament_pane_t4

0x0003,

0xf673,	// (0x00093b59) blid_firmament_pane_t

0x1bab,	// (0x00086091) blid_sat_info_pane

0x461f,	// (0x00088b05) blid_sat_info_pane_g1

0x461f,	// (0x00088b05) blid_sat_info_pane_g2

0x0001,

0xf3d8,	// (0x000938be) blid_sat_info_pane_g

0x1bbb,	// (0x000860a1) blid_sat_info_pane_t1

0x1bc9,	// (0x000860af) smil2_volume_content_pane

0x1bd2,	// (0x000860b8) smil2_volume_pane_g1

0x1bda,	// (0x000860c0) smil2_volume_content_pane_g1

0x1be3,	// (0x000860c9) smil2_volume_content_pane_g2

0x1bec,	// (0x000860d2) smil2_volume_content_pane_g3

0x1bf5,	// (0x000860db) smil2_volume_content_pane_g4

0x1bfe,	// (0x000860e4) smil2_volume_content_pane_g5

0x1c07,	// (0x000860ed) smil2_volume_content_pane_g6

0x1c10,	// (0x000860f6) smil2_volume_content_pane_g7

0x1c19,	// (0x000860ff) smil2_volume_content_pane_g8

0x1c22,	// (0x00086108) smil2_volume_content_pane_g9

0x1c2b,	// (0x00086111) smil2_volume_content_pane_g10

0x0009,

0xf67c,	// (0x00093b62) smil2_volume_content_pane_g

0x4152,	// (0x00088638) cale_week_day_heading_pane_t1_ParamLimits

0x417c,	// (0x00088662) cale_week_day_heading_pane_t2_ParamLimits

0x41ab,	// (0x00088691) cale_week_day_heading_pane_t3_ParamLimits

0x41da,	// (0x000886c0) cale_week_day_heading_pane_t4_ParamLimits

0x4209,	// (0x000886ef) cale_week_day_heading_pane_t5_ParamLimits

0x4240,	// (0x00088726) cale_week_day_heading_pane_t6_ParamLimits

0x4277,	// (0x0008875d) cale_week_day_heading_pane_t7_ParamLimits

0xf18c,	// (0x00093672) cale_week_day_heading_pane_t_ParamLimits

0x42a1,	// (0x00088787) bg_cale_side_pane_ParamLimits

0x42af,	// (0x00088795) cale_week_time_pane_t1_ParamLimits

0x42c9,	// (0x000887af) cale_week_time_pane_t2_ParamLimits

0x42e3,	// (0x000887c9) cale_week_time_pane_t3_ParamLimits

0x42fd,	// (0x000887e3) cale_week_time_pane_t4_ParamLimits

0x4317,	// (0x000887fd) cale_week_time_pane_t5_ParamLimits

0x4331,	// (0x00088817) cale_week_time_pane_t6_ParamLimits

0x434b,	// (0x00088831) cale_week_time_pane_t7_ParamLimits

0x4365,	// (0x0008884b) cale_week_time_pane_t8_ParamLimits

0xf19b,	// (0x00093681) cale_week_time_pane_t_ParamLimits

0x4385,	// (0x0008886b) cell_cale_week_pane_g2_ParamLimits

0x42a1,	// (0x00088787) bg_cale_side_pane_cp01_ParamLimits

0x551a,	// (0x00089a00) cale_month_week_pane_t1_ParamLimits

0x5533,	// (0x00089a19) cale_month_week_pane_t2_ParamLimits

0x554c,	// (0x00089a32) cale_month_week_pane_t3_ParamLimits

0x5565,	// (0x00089a4b) cale_month_week_pane_t4_ParamLimits

0x557e,	// (0x00089a64) cale_month_week_pane_t5_ParamLimits

0x5597,	// (0x00089a7d) cale_month_week_pane_t6_ParamLimits

0xf269,	// (0x0009374f) cale_month_week_pane_t_ParamLimits

0xbbc9,	// (0x000900af) cell_cale_month_pane_g1_ParamLimits

0xbb27,	// (0x0009000d) main_cale_event_viewer_pane

0x08cb,	// (0x00084db1) listscroll_cale_event_viewer_pane

0x1c34,	// (0x0008611a) list_cale_ev_pane

0x1c3c,	// (0x00086122) scroll_pane_cp023

0x1c48,	// (0x0008612e) field_cale_ev_pane_ParamLimits

0x1c48,	// (0x0008612e) field_cale_ev_pane

0x1c66,	// (0x0008614c) field_cale_ev_content_pane_ParamLimits

0x1c66,	// (0x0008614c) field_cale_ev_content_pane

0x1c72,	// (0x00086158) field_cale_ev_pane_g1_ParamLimits

0x1c72,	// (0x00086158) field_cale_ev_pane_g1

0x1c7e,	// (0x00086164) field_cale_ev_pane_g2_ParamLimits

0x1c7e,	// (0x00086164) field_cale_ev_pane_g2

0x1c96,	// (0x0008617c) field_cale_ev_pane_g3_ParamLimits

0x1c96,	// (0x0008617c) field_cale_ev_pane_g3

0x0002,

0xf691,	// (0x00093b77) field_cale_ev_pane_g_ParamLimits

0xf691,	// (0x00093b77) field_cale_ev_pane_g

0x1cae,	// (0x00086194) field_cale_ev_pane_t1_ParamLimits

0x1cae,	// (0x00086194) field_cale_ev_pane_t1

0x1cc5,	// (0x000861ab) field_cale_ev_content_pane_t1_ParamLimits

0x1cc5,	// (0x000861ab) field_cale_ev_content_pane_t1

0xc48c,	// (0x00090972) bg_button_pane_cp01

0x3e2a,	// (0x00088310) listscroll_cale_week_pane_ParamLimits

0x3e3c,	// (0x00088322) popup_toolbar_window_cp01

0x4095,	// (0x0008857b) listscroll_cale_week_pane_t1_ParamLimits

0x3e2a,	// (0x00088310) listscroll_cale_day_pane_ParamLimits

0x3e3c,	// (0x00088322) popup_toolbar_window_cp02

0xbc08,	// (0x000900ee) listscroll_cale_day_pane_t1_ParamLimits

0x674b,	// (0x0008ac31) main_cale_month_pane_ParamLimits

0xce47,	// (0x0009132d) popup_toolbar_window_cp03_ParamLimits

0xce47,	// (0x0009132d) popup_toolbar_window_cp03

0x600a,	// (0x0008a4f0) main_image_pane_g2_ParamLimits

0x600a,	// (0x0008a4f0) main_image_pane_g2

0x601b,	// (0x0008a501) main_image_pane_g3_ParamLimits

0x601b,	// (0x0008a501) main_image_pane_g3

0x0002,

0xf476,	// (0x0009395c) main_image_pane_g_ParamLimits

0xf476,	// (0x0009395c) main_image_pane_g

0xc65e,	// (0x00090b44) main_image_pane_t1_ParamLimits

0x602c,	// (0x0008a512) main_image_pane_t2_ParamLimits

0x602c,	// (0x0008a512) main_image_pane_t2

0x603e,	// (0x0008a524) main_image_pane_t3_ParamLimits

0x603e,	// (0x0008a524) main_image_pane_t3

0x6066,	// (0x0008a54c) main_image_pane_t4_ParamLimits

0x6066,	// (0x0008a54c) main_image_pane_t4

0x0003,

0xf47d,	// (0x00093963) main_image_pane_t_ParamLimits

0xf47d,	// (0x00093963) main_image_pane_t

0x6086,	// (0x0008a56c) popup_image_details_window_cp01

0x6090,	// (0x0008a576) popup_toobar_trans_pane_cp01_ParamLimits

0x6090,	// (0x0008a576) popup_toobar_trans_pane_cp01

0x6862,	// (0x0008ad48) popup_image_details_window_ParamLimits

0x6862,	// (0x0008ad48) popup_image_details_window

0xce1a,	// (0x00091300) popup_image_focus_window

0xce7e,	// (0x00091364) camera2_autofocus_pane_ParamLimits

0xce7e,	// (0x00091364) camera2_autofocus_pane

0x08cb,	// (0x00084db1) bg_popup_sub_pane_cp06

0x1ce3,	// (0x000861c9) popup_image_focus_window_g1

0x1ceb,	// (0x000861d1) popup_image_focus_window_g2

0x1cf3,	// (0x000861d9) popup_image_focus_window_g3

0x1cfb,	// (0x000861e1) popup_image_focus_window_g4

0x0003,

0xf698,	// (0x00093b7e) popup_image_focus_window_g

0x1d03,	// (0x000861e9) popup_image_focus_window_t1

0x1d11,	// (0x000861f7) popup_image_focus_window_t2

0x1d21,	// (0x00086207) popup_image_focus_window_t3

0x0002,

0xf6a1,	// (0x00093b87) popup_image_focus_window_t

0x398a,	// (0x00087e70) camera2_autofocus_pane_g1

0x3931,	// (0x00087e17) bg_tb_trans_pane_cp01

0x1d2f,	// (0x00086215) popup_image_details_window_g1

0x1d42,	// (0x00086228) popup_image_details_window_g2

0x0002,

0xf6b3,	// (0x00093b99) popup_image_details_window_g

0x1d6b,	// (0x00086251) popup_image_details_window_t1

0x1d7d,	// (0x00086263) popup_image_details_window_t2

0x1d96,	// (0x0008627c) popup_image_details_window_t3

0x1daa,	// (0x00086290) popup_image_details_window_t4

0x1dc5,	// (0x000862ab) popup_image_details_window_t5

0x0004,

0xf6ba,	// (0x00093ba0) popup_image_details_window_t

0x3b4c,	// (0x00088032) bg_calc_paper_pane_ParamLimits

0xbb27,	// (0x0009000d) grid_highlight_pane_cp013

0xbb39,	// (0x0009001f) list_calc_pane_ParamLimits

0xbb4b,	// (0x00090031) scroll_pane_cp024

0x3b60,	// (0x00088046) bg_calc_display_pane_ParamLimits

0x3b6c,	// (0x00088052) calc_display_pane_t1_ParamLimits

0x3b7e,	// (0x00088064) calc_display_pane_t2_ParamLimits

0xbb53,	// (0x00090039) calc_display_pane_t3_ParamLimits

0xf10c,	// (0x000935f2) calc_display_pane_t_ParamLimits

0x3c81,	// (0x00088167) cell_calc_pane_g2

0x0001,

0xf129,	// (0x0009360f) cell_calc_pane_g

0x3c8a,	// (0x00088170) cell_calc_pane_t1

0x3c99,	// (0x0008817f) grid_highlight_pane_cp02_ParamLimits

0x3caf,	// (0x00088195) toolbar_button_pane_cp01_ParamLimits

0x3caf,	// (0x00088195) toolbar_button_pane_cp01

0xc6a3,	// (0x00090b89) temp_image_control_pane_ParamLimits

0xc6a3,	// (0x00090b89) temp_image_control_pane

0xbb19,	// (0x0008ffff) main_mp3_pane

0x1ddf,	// (0x000862c5) temp_image_control_pane_g1_ParamLimits

0x1ddf,	// (0x000862c5) temp_image_control_pane_g1

0x1ded,	// (0x000862d3) temp_image_control_pane_g2_ParamLimits

0x1ded,	// (0x000862d3) temp_image_control_pane_g2

0x1dff,	// (0x000862e5) temp_image_control_pane_g3_ParamLimits

0x1dff,	// (0x000862e5) temp_image_control_pane_g3

0x6d29,	// (0x0008b20f) temp_image_control_pane_g4_ParamLimits

0x6d29,	// (0x0008b20f) temp_image_control_pane_g4

0x0003,

0xf6c5,	// (0x00093bab) temp_image_control_pane_g_ParamLimits

0xf6c5,	// (0x00093bab) temp_image_control_pane_g

0x1ddf,	// (0x000862c5) main_mp3_pane_g1

0x6d3c,	// (0x0008b222) main_mp3_pane_g2

0x0007,

0xf6ce,	// (0x00093bb4) main_mp3_pane_g

0x1e34,	// (0x0008631a) main_mp3_pane_t1

0x3998,	// (0x00087e7e) main_camera_pane_g8_ParamLimits

0x3998,	// (0x00087e7e) main_camera_pane_g8

0x45cd,	// (0x00088ab3) main_video_pane_g7_ParamLimits

0x45cd,	// (0x00088ab3) main_video_pane_g7

0xcea0,	// (0x00091386) main_camera2_pane_t7_ParamLimits

0xcea0,	// (0x00091386) main_camera2_pane_t7

0x4b98,	// (0x0008907e) scroll_pane_cp025_ParamLimits

0x4b98,	// (0x0008907e) scroll_pane_cp025

0x4bac,	// (0x00089092) scroll_pane_cp026_ParamLimits

0x4bac,	// (0x00089092) scroll_pane_cp026

0x4bbb,	// (0x000890a1) wml_content_pane_ParamLimits

0xbb27,	// (0x0009000d) main_touch_calib_pane

0x6e10,	// (0x0008b2f6) main_touch_calib_pane_g1

0x6e22,	// (0x0008b308) main_touch_calib_pane_g2

0x6e34,	// (0x0008b31a) main_touch_calib_pane_g3

0x6e46,	// (0x0008b32c) main_touch_calib_pane_g4

0x0003,

0xf6ec,	// (0x00093bd2) main_touch_calib_pane_g

0x6e58,	// (0x0008b33e) main_touch_calib_pane_t1

0x6e72,	// (0x0008b358) main_touch_calib_pane_t2

0x0004,

0xf6f5,	// (0x00093bdb) main_touch_calib_pane_t

0xc1ad,	// (0x00090693) mup_progress_pane_cp02

0xc1e2,	// (0x000906c8) navi_pane_g1

0xc29d,	// (0x00090783) navi_pane_mp_t3

0xbb19,	// (0x0008ffff) main_mp3_pane_ParamLimits

0x69ed,	// (0x0008aed3) navi_pane_ParamLimits

0x1ddf,	// (0x000862c5) main_mp3_pane_g1_ParamLimits

0x6d3c,	// (0x0008b222) main_mp3_pane_g2_ParamLimits

0x6d4a,	// (0x0008b230) main_mp3_pane_g3_ParamLimits

0x6d4a,	// (0x0008b230) main_mp3_pane_g3

0x6d58,	// (0x0008b23e) main_mp3_pane_g4_ParamLimits

0x6d58,	// (0x0008b23e) main_mp3_pane_g4

0x398a,	// (0x00087e70) main_mp3_pane_g5_ParamLimits

0x398a,	// (0x00087e70) main_mp3_pane_g5

0x1e0f,	// (0x000862f5) main_mp3_pane_g6_ParamLimits

0x1e0f,	// (0x000862f5) main_mp3_pane_g6

0x1e1c,	// (0x00086302) main_mp3_pane_g7_ParamLimits

0x1e1c,	// (0x00086302) main_mp3_pane_g7

0x1e28,	// (0x0008630e) main_mp3_pane_g8_ParamLimits

0x1e28,	// (0x0008630e) main_mp3_pane_g8

0xf6ce,	// (0x00093bb4) main_mp3_pane_g_ParamLimits

0x6d64,	// (0x0008b24a) main_mp3_pane_t2

0x6d72,	// (0x0008b258) main_mp3_pane_t3

0x1e42,	// (0x00086328) main_mp3_pane_t4

0x1e50,	// (0x00086336) main_mp3_pane_t5

0x0005,

0xf6df,	// (0x00093bc5) main_mp3_pane_t

0x1e5e,	// (0x00086344) mup_progress_pane_cp01

0xbad0,	// (0x0008ffb6) aid_zoom_text_secondary2

0x1c34,	// (0x0008611a) list_cale_ev2_pane

0x1c3c,	// (0x00086122) scroll_pane_cp023_ParamLimits

0x6ec8,	// (0x0008b3ae) field_cale_ev2_pane_ParamLimits

0x6ec8,	// (0x0008b3ae) field_cale_ev2_pane

0xcefc,	// (0x000913e2) field_cale_ev2_pane_g1_ParamLimits

0xcefc,	// (0x000913e2) field_cale_ev2_pane_g1

0xcf08,	// (0x000913ee) field_cale_ev2_pane_g2_ParamLimits

0xcf08,	// (0x000913ee) field_cale_ev2_pane_g2

0xcf20,	// (0x00091406) field_cale_ev2_pane_g3_ParamLimits

0xcf20,	// (0x00091406) field_cale_ev2_pane_g3

0x0003,

0xf700,	// (0x00093be6) field_cale_ev2_pane_g_ParamLimits

0xf700,	// (0x00093be6) field_cale_ev2_pane_g

0xcf44,	// (0x0009142a) field_cale_ev2_pane_t1_ParamLimits

0xcf44,	// (0x0009142a) field_cale_ev2_pane_t1

0xcf5b,	// (0x00091441) field_cale_ev2_pane_t2_ParamLimits

0xcf5b,	// (0x00091441) field_cale_ev2_pane_t2

0x0001,

0xf709,	// (0x00093bef) field_cale_ev2_pane_t_ParamLimits

0xf709,	// (0x00093bef) field_cale_ev2_pane_t

0x5ebe,	// (0x0008a3a4) main_postcard_pane_g5_ParamLimits

0x5ebe,	// (0x0008a3a4) main_postcard_pane_g5

0x5ed4,	// (0x0008a3ba) main_postcard_pane_g6_ParamLimits

0x5ed4,	// (0x0008a3ba) main_postcard_pane_g6

0x3931,	// (0x00087e17) camera2_autofocus_pane_cp_ParamLimits

0x3931,	// (0x00087e17) camera2_autofocus_pane_cp

0xbb19,	// (0x0008ffff) main_mup3_pane

0x6f2d,	// (0x0008b413) main_mup3_pane_g1_ParamLimits

0x6f2d,	// (0x0008b413) main_mup3_pane_g1

0x6f4f,	// (0x0008b435) main_mup3_pane_g2_ParamLimits

0x6f4f,	// (0x0008b435) main_mup3_pane_g2

0x6fcf,	// (0x0008b4b5) main_mup3_pane_g3_ParamLimits

0x6fcf,	// (0x0008b4b5) main_mup3_pane_g3

0x7015,	// (0x0008b4fb) main_mup3_pane_g4_ParamLimits

0x7015,	// (0x0008b4fb) main_mup3_pane_g4

0x705b,	// (0x0008b541) main_mup3_pane_g5_ParamLimits

0x705b,	// (0x0008b541) main_mup3_pane_g5

0x70a1,	// (0x0008b587) main_mup3_pane_g6_ParamLimits

0x70a1,	// (0x0008b587) main_mup3_pane_g6

0x3998,	// (0x00087e7e) main_mup3_pane_g7_ParamLimits

0x3998,	// (0x00087e7e) main_mup3_pane_g7

0x0007,

0xf719,	// (0x00093bff) main_mup3_pane_g_ParamLimits

0xf719,	// (0x00093bff) main_mup3_pane_g

0x711f,	// (0x0008b605) main_mup3_pane_t1_ParamLimits

0x711f,	// (0x0008b605) main_mup3_pane_t1

0x7193,	// (0x0008b679) main_mup3_pane_t2_ParamLimits

0x7193,	// (0x0008b679) main_mup3_pane_t2

0x7267,	// (0x0008b74d) main_mup3_pane_t4_ParamLimits

0x7267,	// (0x0008b74d) main_mup3_pane_t4

0x72bd,	// (0x0008b7a3) main_mup3_pane_t5_ParamLimits

0x72bd,	// (0x0008b7a3) main_mup3_pane_t5

0x7379,	// (0x0008b85f) main_mup3_pane_t6_ParamLimits

0x7379,	// (0x0008b85f) main_mup3_pane_t6

0x0005,

0xf72a,	// (0x00093c10) main_mup3_pane_t_ParamLimits

0xf72a,	// (0x00093c10) main_mup3_pane_t

0x7431,	// (0x0008b917) mup3_progress_pane_ParamLimits

0x7431,	// (0x0008b917) mup3_progress_pane

0x74bd,	// (0x0008b9a3) popup_mup3_control_window_ParamLimits

0x74bd,	// (0x0008b9a3) popup_mup3_control_window

0x1e66,	// (0x0008634c) popup_mup3_text_window

0x74ef,	// (0x0008b9d5) mup3_progress_pane_t1

0x750e,	// (0x0008b9f4) mup3_progress_pane_t2

0x1e6e,	// (0x00086354) mup3_progress_pane_t3

0x0002,

0xf737,	// (0x00093c1d) mup3_progress_pane_t

0x1e8b,	// (0x00086371) mup_progress_pane_cp03

0x08cb,	// (0x00084db1) bg_tb_trans_pane_cp04

0x752d,	// (0x0008ba13) mup3_volume_pane

0x7535,	// (0x0008ba1b) popup_mup3_control_window_g1

0x753e,	// (0x0008ba24) mup3_volume_pane_g1

0x7547,	// (0x0008ba2d) mup3_volume_pane_g2

0x7550,	// (0x0008ba36) mup3_volume_pane_g3

0x0002,

0xf73e,	// (0x00093c24) mup3_volume_pane_g

0x08cb,	// (0x00084db1) bg_tb_trans_pane_cp03

0x1e9b,	// (0x00086381) popup_mup3_text_window_g1

0x1ea3,	// (0x00086389) popup_mup3_text_window_t1

0x3c5a,	// (0x00088140) list_calc_item_pane_g1_ParamLimits

0x191b,	// (0x00085e01) mup_volume_pane_cp_g1

0x6e8c,	// (0x0008b372) main_touch_calib_pane_t3

0x6ea0,	// (0x0008b386) main_touch_calib_pane_t4

0x6eb4,	// (0x0008b39a) main_touch_calib_pane_t5

0xbaac,	// (0x0008ff92) aid_cell_size_toolbar2

0xbab4,	// (0x0008ff9a) aid_popup3_width_pane

0xbac0,	// (0x0008ffa6) aid_zoom_text_msg_primary

0x447a,	// (0x00088960) vorec_t7

0x3bc5,	// (0x000880ab) bg_calc_paper_pane_g1_ParamLimits

0x3bd1,	// (0x000880b7) bg_calc_paper_pane_g2_ParamLimits

0x3bdd,	// (0x000880c3) bg_calc_paper_pane_g3_ParamLimits

0x3be9,	// (0x000880cf) bg_calc_paper_pane_g4_ParamLimits

0x3bf5,	// (0x000880db) bg_calc_paper_pane_g5_ParamLimits

0x3c01,	// (0x000880e7) bg_calc_paper_pane_g6_ParamLimits

0x3c10,	// (0x000880f6) bg_calc_paper_pane_g7_ParamLimits

0x3c1f,	// (0x00088105) bg_calc_paper_pane_g8_ParamLimits

0xf113,	// (0x000935f9) bg_calc_paper_pane_g_ParamLimits

0x3c32,	// (0x00088118) calc_bg_paper_pane_g9_ParamLimits

0x3931,	// (0x00087e17) image_qvga_pane_ParamLimits

0x3931,	// (0x00087e17) image_qvga_pane

0x390f,	// (0x00087df5) bg_popup_sub_pane_cp04_ParamLimits

0xc5da,	// (0x00090ac0) popup_mup_playback_window_g1_ParamLimits

0xc5e6,	// (0x00090acc) popup_mup_playback_window_t1_ParamLimits

0xc5fb,	// (0x00090ae1) popup_mup_playback_window_t2_ParamLimits

0xf471,	// (0x00093957) popup_mup_playback_window_t_ParamLimits

0x3998,	// (0x00087e7e) main_mup2_pane_g3_ParamLimits

0x3998,	// (0x00087e7e) main_mup2_pane_g3

0x4835,	// (0x00088d1b) popup_toolbar_window_cp04

0xc9f0,	// (0x00090ed6) popup_call2_audio_second_window_g3_ParamLimits

0xc9f0,	// (0x00090ed6) popup_call2_audio_second_window_g3

0x0e46,	// (0x0008532c) popup_call2_audio_first_window_g4_ParamLimits

0x0e46,	// (0x0008532c) popup_call2_audio_first_window_g4

0x146d,	// (0x00085953) popup_call2_audio_in_window_g4_ParamLimits

0x146d,	// (0x00085953) popup_call2_audio_in_window_g4

0x5fec,	// (0x0008a4d2) aid_area_sk_bg_cut_ParamLimits

0x5fec,	// (0x0008a4d2) aid_area_sk_bg_cut

0xc610,	// (0x00090af6) aid_area_sk_bg_cut_2_ParamLimits

0xc610,	// (0x00090af6) aid_area_sk_bg_cut_2

0x08cb,	// (0x00084db1) aid_placing_details_win

0x08cb,	// (0x00084db1) aid_placing_details_win_2

0x398a,	// (0x00087e70) camera2_autofocus_pane_g1_ParamLimits

0x36f2,	// (0x00087bd8) popup_fixed_preview_cale_window_ParamLimits

0x36f2,	// (0x00087bd8) popup_fixed_preview_cale_window

0xc324,	// (0x0009080a) navi_slider_pane_g3

0xc32d,	// (0x00090813) navi_slider_pane_g4

0xc336,	// (0x0009081c) navi_slider_pane_g5

0xc324,	// (0x0009080a) navi_slider_pane_g6

0xc33f,	// (0x00090825) navi_slider_pane_g7

0xc451,	// (0x00090937) mup_scale_pane_g3

0xc45a,	// (0x00090940) mup_scale_pane_g4

0xc463,	// (0x00090949) mup_scale_pane_g5

0x5d1a,	// (0x0008a200) mup_scale_pane_g6

0x5d23,	// (0x0008a209) mup_scale_pane_g7

0x1924,	// (0x00085e0a) cams2_slider_pane_g3

0x1924,	// (0x00085e0a) cams2_slider_pane_g4

0x1924,	// (0x00085e0a) cams2_slider_pane_g5

0x1924,	// (0x00085e0a) cams2_slider_pane_g6

0x1924,	// (0x00085e0a) cams2_slider_pane_g7

0x461f,	// (0x00088b05) camera2_autofocus_pane_cp_g1

0x177d,	// (0x00085c63) bg_popup_preview_window_pane_cp02_ParamLimits

0x177d,	// (0x00085c63) bg_popup_preview_window_pane_cp02

0x1eb1,	// (0x00086397) list_fp_cale_pane_ParamLimits

0x1eb1,	// (0x00086397) list_fp_cale_pane

0x1ebd,	// (0x000863a3) popup_fixed_preview_cale_window_t1_ParamLimits

0x1ebd,	// (0x000863a3) popup_fixed_preview_cale_window_t1

0x7559,	// (0x0008ba3f) popup_fixed_preview_cale_window_t2_ParamLimits

0x7559,	// (0x0008ba3f) popup_fixed_preview_cale_window_t2

0x756e,	// (0x0008ba54) popup_fixed_preview_cale_window_t3_ParamLimits

0x756e,	// (0x0008ba54) popup_fixed_preview_cale_window_t3

0x0002,

0xf745,	// (0x00093c2b) popup_fixed_preview_cale_window_t_ParamLimits

0xf745,	// (0x00093c2b) popup_fixed_preview_cale_window_t

0x7583,	// (0x0008ba69) list_single_fp_cale_pane_ParamLimits

0x7583,	// (0x0008ba69) list_single_fp_cale_pane

0x1edb,	// (0x000863c1) list_single_fp_cale_pane_g1_ParamLimits

0x1edb,	// (0x000863c1) list_single_fp_cale_pane_g1

0x1ee7,	// (0x000863cd) list_single_fp_cale_pane_g2_ParamLimits

0x1ee7,	// (0x000863cd) list_single_fp_cale_pane_g2

0x0002,

0xf74c,	// (0x00093c32) list_single_fp_cale_pane_g_ParamLimits

0xf74c,	// (0x00093c32) list_single_fp_cale_pane_g

0x1f00,	// (0x000863e6) list_single_fp_cale_pane_t1_ParamLimits

0x1f00,	// (0x000863e6) list_single_fp_cale_pane_t1

0x1f12,	// (0x000863f8) list_single_fp_cale_pane_t2_ParamLimits

0x1f12,	// (0x000863f8) list_single_fp_cale_pane_t2

0x0001,

0xf753,	// (0x00093c39) list_single_fp_cale_pane_t_ParamLimits

0xf753,	// (0x00093c39) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xbb27,	// (0x0009000d) main_dialer_pane

0x08cb,	// (0x00084db1) aid_cell_size_keypad

0x08cb,	// (0x00084db1) dialer_ne_pane

0x08cb,	// (0x00084db1) grid_dialer_command_1_pane

0x08cb,	// (0x00084db1) grid_dialer_command_2_pane

0x08cb,	// (0x00084db1) grid_dialer_keypad_pane

0x7599,	// (0x0008ba7f) bg_popup_call_pane_cp06_ParamLimits

0x7599,	// (0x0008ba7f) bg_popup_call_pane_cp06

0x7599,	// (0x0008ba7f) dialer_ne_clear_pane_ParamLimits

0x7599,	// (0x0008ba7f) dialer_ne_clear_pane

0x461f,	// (0x00088b05) dialer_ne_pane_g1

0xc3db,	// (0x000908c1) dialer_ne_pane_t1_ParamLimits

0xc3db,	// (0x000908c1) dialer_ne_pane_t1

0x75a7,	// (0x0008ba8d) dialer_ne_pane_t2_ParamLimits

0x75a7,	// (0x0008ba8d) dialer_ne_pane_t2

0x75cf,	// (0x0008bab5) dialer_ne_pane_t3_ParamLimits

0x75cf,	// (0x0008bab5) dialer_ne_pane_t3

0x0002,

0xf758,	// (0x00093c3e) dialer_ne_pane_t_ParamLimits

0xf758,	// (0x00093c3e) dialer_ne_pane_t

0x75cf,	// (0x0008bab5) dialer_ne_pane_t3_copy1_ParamLimits

0x75cf,	// (0x0008bab5) dialer_ne_pane_t3_copy1

0x1f62,	// (0x00086448) cell_dialer_keypad_pane_ParamLimits

0x1f62,	// (0x00086448) cell_dialer_keypad_pane

0x3931,	// (0x00087e17) cell_dialer_command_1_pane_ParamLimits

0x3931,	// (0x00087e17) cell_dialer_command_1_pane

0x1f79,	// (0x0008645f) cell_dialer_command_2_pane_ParamLimits

0x1f79,	// (0x0008645f) cell_dialer_command_2_pane

0x3931,	// (0x00087e17) bg_button_pane_cp02_ParamLimits

0x3931,	// (0x00087e17) bg_button_pane_cp02

0x398a,	// (0x00087e70) cell_dialer_keypad_pane_g1_ParamLimits

0x398a,	// (0x00087e70) cell_dialer_keypad_pane_g1

0x3931,	// (0x00087e17) bg_button_pane_cp03_ParamLimits

0x3931,	// (0x00087e17) bg_button_pane_cp03

0x398a,	// (0x00087e70) cell_dialer_command_1_pane_g1_ParamLimits

0x398a,	// (0x00087e70) cell_dialer_command_1_pane_g1

0x08cb,	// (0x00084db1) bg_button_pane_cp04

0x461f,	// (0x00088b05) cell_dialer_command_2_pane_g1

0x08cb,	// (0x00084db1) bg_button_pane_cp06

0x461f,	// (0x00088b05) dialer_ne_clear_pane_g1

0xc1ee,	// (0x000906d4) navi_pane_g2

0xc21c,	// (0x00090702) navi_pane_g3

0x0002,

0xf374,	// (0x0009385a) navi_pane_g

0xc2ab,	// (0x00090791) navi_pane_mv_g2

0xc2d2,	// (0x000907b8) navi_pane_mv_g5

0x5afd,	// (0x00089fe3) navi_pane_mv_t1

0x3b60,	// (0x00088046) main_clock2_pane

0x3931,	// (0x00087e17) main_clock2_list_pane_ParamLimits

0x3931,	// (0x00087e17) main_clock2_list_pane

0x7665,	// (0x0008bb4b) main_clock2_pane_t1_ParamLimits

0x7665,	// (0x0008bb4b) main_clock2_pane_t1

0x76a0,	// (0x0008bb86) main_clock2_pane_t2_ParamLimits

0x76a0,	// (0x0008bb86) main_clock2_pane_t2

0x0004,

0xf764,	// (0x00093c4a) main_clock2_pane_t_ParamLimits

0xf764,	// (0x00093c4a) main_clock2_pane_t

0x7740,	// (0x0008bc26) popup_clock_analogue_window_cp03_ParamLimits

0x7740,	// (0x0008bc26) popup_clock_analogue_window_cp03

0x7765,	// (0x0008bc4b) popup_clock_digital_window_cp02_ParamLimits

0x7765,	// (0x0008bc4b) popup_clock_digital_window_cp02

0x77de,	// (0x0008bcc4) main_clock2_list_single_pane_ParamLimits

0x77de,	// (0x0008bcc4) main_clock2_list_single_pane

0x4432,	// (0x00088918) list_highlight_pane_cp05

0x1fbc,	// (0x000864a2) main_clock2_list_single_pane_t1

0x4835,	// (0x00088d1b) popup_toolbar_window_cp04_ParamLimits

0x3998,	// (0x00087e7e) camera2_autofocus_pane_g2_ParamLimits

0x3998,	// (0x00087e7e) camera2_autofocus_pane_g2

0x3998,	// (0x00087e7e) camera2_autofocus_pane_g3_ParamLimits

0x3998,	// (0x00087e7e) camera2_autofocus_pane_g3

0x3998,	// (0x00087e7e) camera2_autofocus_pane_g4_ParamLimits

0x3998,	// (0x00087e7e) camera2_autofocus_pane_g4

0x3998,	// (0x00087e7e) camera2_autofocus_pane_g5_ParamLimits

0x3998,	// (0x00087e7e) camera2_autofocus_pane_g5

0x0004,

0xf6a8,	// (0x00093b8e) camera2_autofocus_pane_g_ParamLimits

0xf6a8,	// (0x00093b8e) camera2_autofocus_pane_g

0x6ee9,	// (0x0008b3cf) camera2_autofocus_pane_cp_g2

0x6ef1,	// (0x0008b3d7) camera2_autofocus_pane_cp_g3

0x6ef9,	// (0x0008b3df) camera2_autofocus_pane_cp_g4

0x6f01,	// (0x0008b3e7) camera2_autofocus_pane_cp_g5

0x0004,

0xf70e,	// (0x00093bf4) camera2_autofocus_pane_cp_g

0x08cb,	// (0x00084db1) popup_dialer_spcha_window

0x08cb,	// (0x00084db1) bg_popup_sub_pane_cp07

0x08cb,	// (0x00084db1) list_spcha_pane

0x1fca,	// (0x000864b0) list_single_spcha_pane_ParamLimits

0x1fca,	// (0x000864b0) list_single_spcha_pane

0x08cb,	// (0x00084db1) list_highlight_pane_cp06

0xbddf,	// (0x000902c5) list_single_spcha_pane_t1

0x1217,	// (0x000856fd) popup_call2_audio_out_window_g4_ParamLimits

0x1217,	// (0x000856fd) popup_call2_audio_out_window_g4

0xbb27,	// (0x0009000d) main_imed2_pane

0xce22,	// (0x00091308) popup_imed_adjust2_window

0x687a,	// (0x0008ad60) popup_imed_trans_window_ParamLimits

0x687a,	// (0x0008ad60) popup_imed_trans_window

0x19fa,	// (0x00085ee0) popup_blid_sat_info2_window_t1

0x1a08,	// (0x00085eee) popup_blid_sat_info2_window_t2

0x000a,

0xf63d,	// (0x00093b23) popup_blid_sat_info2_window_t

0x788f,	// (0x0008bd75) aid_size_cell_colour_35

0x78af,	// (0x0008bd95) aid_size_cell_colour_112

0x78cf,	// (0x0008bdb5) aid_size_cell_effect

0x1789,	// (0x00085c6f) bg_tb_trans_pane_cp02

0xbd11,	// (0x000901f7) heading_imed_pane

0x78ef,	// (0x0008bdd5) listscroll_imed_pane

0x1fe8,	// (0x000864ce) heading_imed_pane_g1

0x1ff0,	// (0x000864d6) heading_imed_pane_t1

0x1ffe,	// (0x000864e4) grid_imed_colour_35_pane_ParamLimits

0x1ffe,	// (0x000864e4) grid_imed_colour_35_pane

0x78fb,	// (0x0008bde1) grid_imed_effect_pane

0x2016,	// (0x000864fc) list_imed_aspect_pane

0x7911,	// (0x0008bdf7) scroll_pane_cp027_ParamLimits

0x7911,	// (0x0008bdf7) scroll_pane_cp027

0x7922,	// (0x0008be08) cell_imed_effect_pane_ParamLimits

0x7922,	// (0x0008be08) cell_imed_effect_pane

0x201e,	// (0x00086504) cell_imed_colour_pane_ParamLimits

0x201e,	// (0x00086504) cell_imed_colour_pane

0x2060,	// (0x00086546) cell_imed_colour_pane_g1_ParamLimits

0x2060,	// (0x00086546) cell_imed_colour_pane_g1

0x2071,	// (0x00086557) hgihlgiht_grid_pane_cp016_ParamLimits

0x2071,	// (0x00086557) hgihlgiht_grid_pane_cp016

0x7949,	// (0x0008be2f) cell_imed_effect_pane_g1

0x7951,	// (0x0008be37) grid_highlight_pane_cp017

0x2082,	// (0x00086568) list_imed_single_pane_ParamLimits

0x2082,	// (0x00086568) list_imed_single_pane

0x08cb,	// (0x00084db1) list_highlight_pane_cp07

0x2097,	// (0x0008657d) list_imed_aspect_pane_comp1_t1

0x1789,	// (0x00085c6f) bg_tb_trans_pane_cp05

0x20b9,	// (0x0008659f) popup_imed_adjust2_window_g1

0x20e0,	// (0x000865c6) popup_imed_adjust2_window_t1

0x20f8,	// (0x000865de) slider_imed_adjust_pane

0x210c,	// (0x000865f2) slider_imed_adjust_pane_g1

0x211c,	// (0x00086602) slider_imed_adjust_pane_g2

0x212c,	// (0x00086612) slider_imed_adjust_pane_g3

0x213d,	// (0x00086623) slider_imed_adjust_pane_g4

0x0003,

0xf781,	// (0x00093c67) slider_imed_adjust_pane_g

0x795a,	// (0x0008be40) aid_size_cell_clipart2

0x7966,	// (0x0008be4c) grid_imed_clipart_pane

0x214e,	// (0x00086634) scroll_pane_cp031

0x7970,	// (0x0008be56) cell_imed_clipart_pane_ParamLimits

0x7970,	// (0x0008be56) cell_imed_clipart_pane

0x7992,	// (0x0008be78) cell_imed_clipart_pane_g1

0x08cb,	// (0x00084db1) grid_highlight_pane_cp014

0x7641,	// (0x0008bb27) main_clock2_pane_g1_ParamLimits

0x7641,	// (0x0008bb27) main_clock2_pane_g1

0x7785,	// (0x0008bc6b) aid_call2_pane_cp10

0x7797,	// (0x0008bc7d) aid_call_pane_cp10

0xc14d,	// (0x00090633) popup_clock_analogue_window_cp10_g1

0xc14d,	// (0x00090633) popup_clock_analogue_window_cp10_g2

0x77a9,	// (0x0008bc8f) popup_clock_analogue_window_cp10_g3

0x77a9,	// (0x0008bc8f) popup_clock_analogue_window_cp10_g4

0xc14d,	// (0x00090633) popup_clock_analogue_window_cp10_g5

0x0004,

0xf76f,	// (0x00093c55) popup_clock_analogue_window_cp10_g

0x77bf,	// (0x0008bca5) popup_clock_analogue_window_cp10_t1

0x77f0,	// (0x0008bcd6) clock_digital_number_pane_cp10_ParamLimits

0x77f0,	// (0x0008bcd6) clock_digital_number_pane_cp10

0x7808,	// (0x0008bcee) clock_digital_number_pane_cp11_ParamLimits

0x7808,	// (0x0008bcee) clock_digital_number_pane_cp11

0x7820,	// (0x0008bd06) clock_digital_number_pane_cp12_ParamLimits

0x7820,	// (0x0008bd06) clock_digital_number_pane_cp12

0x783a,	// (0x0008bd20) clock_digital_number_pane_cp13_ParamLimits

0x783a,	// (0x0008bd20) clock_digital_number_pane_cp13

0x7854,	// (0x0008bd3a) clock_digital_separator_pane_cp10_ParamLimits

0x7854,	// (0x0008bd3a) clock_digital_separator_pane_cp10

0x786e,	// (0x0008bd54) popup_clock_digital_window_cp02_t1_ParamLimits

0x786e,	// (0x0008bd54) popup_clock_digital_window_cp02_t1

0x3907,	// (0x00087ded) clock_digital_number_pane_cp10_g1

0x3907,	// (0x00087ded) clock_digital_number_pane_cp10_g2

0x0001,

0xf78a,	// (0x00093c70) clock_digital_number_pane_cp10_g

0x3907,	// (0x00087ded) clock_digital_separator_pane_cp10_g1

0x3907,	// (0x00087ded) clock_digital_separator_pane_g2_cp10

0xc2da,	// (0x000907c0) navi_pane_vded_g4

0xc2e3,	// (0x000907c9) navi_pane_vded_g5

0xc2ec,	// (0x000907d2) navi_pane_vded_t1

0xbb27,	// (0x0009000d) main_vded_pane

0x799b,	// (0x0008be81) main_vded_pane_g1

0x79a5,	// (0x0008be8b) main_vded_pane_g2

0x79af,	// (0x0008be95) main_vded_pane_g3

0x0002,

0xf78f,	// (0x00093c75) main_vded_pane_g

0x79b9,	// (0x0008be9f) main_vded_pane_t1

0x79c7,	// (0x0008bead) main_vded_pane_t2

0x0001,

0xf796,	// (0x00093c7c) main_vded_pane_t

0x79d5,	// (0x0008bebb) vded_slider_pane

0x79dd,	// (0x0008bec3) vded_video_pane

0x2156,	// (0x0008663c) vded_video_pane_g1

0x79e5,	// (0x0008becb) vded_video_pane_g2

0x461f,	// (0x00088b05) vded_video_pane_g3

0x0002,

0xf79b,	// (0x00093c81) vded_video_pane_g

0x2160,	// (0x00086646) vded_slider_pane_g1

0x191b,	// (0x00085e01) vded_slider_pane_g2

0x2169,	// (0x0008664f) vded_slider_pane_g3

0x2172,	// (0x00086658) vded_slider_pane_g4

0x217b,	// (0x00086661) vded_slider_pane_g5

0x0004,

0xf7a2,	// (0x00093c88) vded_slider_pane_g

0x74a5,	// (0x0008b98b) mup3_rocker_pane_ParamLimits

0x74a5,	// (0x0008b98b) mup3_rocker_pane

0x79ee,	// (0x0008bed4) mup3_control_keys_pane_g1

0x79f6,	// (0x0008bedc) mup3_control_keys_pane_g2

0x79fe,	// (0x0008bee4) mup3_control_keys_pane_g3

0x7a06,	// (0x0008beec) mup3_control_keys_pane_g4

0x0003,

0xf7ad,	// (0x00093c93) mup3_control_keys_pane_g

0x3729,	// (0x00087c0f) popup_toolbar2_fixed_window_cp01_ParamLimits

0x3729,	// (0x00087c0f) popup_toolbar2_fixed_window_cp01

0x74d9,	// (0x0008b9bf) popup_toolbar2_fixed_window_cp02_ParamLimits

0x74d9,	// (0x0008b9bf) popup_toolbar2_fixed_window_cp02

0xcb62,	// (0x00091048) popup_call2_audio_second_window_t4_ParamLimits

0xcb62,	// (0x00091048) popup_call2_audio_second_window_t4

0x10dc,	// (0x000855c2) popup_call2_audio_first_window_t6_ParamLimits

0x10dc,	// (0x000855c2) popup_call2_audio_first_window_t6

0x131a,	// (0x00085800) popup_call2_audio_out_window_t6_ParamLimits

0x131a,	// (0x00085800) popup_call2_audio_out_window_t6

0xbb27,	// (0x0009000d) main_vitu_pane

0x3931,	// (0x00087e17) aid_size_cell_itu_ParamLimits

0x3931,	// (0x00087e17) aid_size_cell_itu

0x3931,	// (0x00087e17) bg_popup_window_pane_cp08_ParamLimits

0x3931,	// (0x00087e17) bg_popup_window_pane_cp08

0x3931,	// (0x00087e17) field_vitu_entry_pane_ParamLimits

0x3931,	// (0x00087e17) field_vitu_entry_pane

0x3931,	// (0x00087e17) grid_vitu_function_pane_ParamLimits

0x3931,	// (0x00087e17) grid_vitu_function_pane

0x3931,	// (0x00087e17) grid_vitu_itu_pane_ParamLimits

0x3931,	// (0x00087e17) grid_vitu_itu_pane

0x3931,	// (0x00087e17) cell_vitu_itu_pane_ParamLimits

0x3931,	// (0x00087e17) cell_vitu_itu_pane

0x3931,	// (0x00087e17) cell_vitu_function_pane_ParamLimits

0x3931,	// (0x00087e17) cell_vitu_function_pane

0x3931,	// (0x00087e17) bg_popup_sub_pane_cp08_ParamLimits

0x3931,	// (0x00087e17) bg_popup_sub_pane_cp08

0x449b,	// (0x00088981) field_vitu_entry_pane_t1_ParamLimits

0x449b,	// (0x00088981) field_vitu_entry_pane_t1

0x1f45,	// (0x0008642b) field_vitu_entry_pane_t2_ParamLimits

0x1f45,	// (0x0008642b) field_vitu_entry_pane_t2

0x0001,

0xf7b6,	// (0x00093c9c) field_vitu_entry_pane_t_ParamLimits

0xf7b6,	// (0x00093c9c) field_vitu_entry_pane_t

0xceee,	// (0x000913d4) bg_button_pane_cp05_ParamLimits

0xceee,	// (0x000913d4) bg_button_pane_cp05

0x2184,	// (0x0008666a) cell_vitu_itu_pane_g1

0x21a0,	// (0x00086686) cell_vitu_itu_pane_t1_ParamLimits

0x21a0,	// (0x00086686) cell_vitu_itu_pane_t1

0x21a0,	// (0x00086686) cell_vitu_itu_pane_t2_ParamLimits

0x21a0,	// (0x00086686) cell_vitu_itu_pane_t2

0x0002,

0xf7bb,	// (0x00093ca1) cell_vitu_itu_pane_t_ParamLimits

0xf7bb,	// (0x00093ca1) cell_vitu_itu_pane_t

0x08cb,	// (0x00084db1) bg_button_pane_cp07

0x461f,	// (0x00088b05) cell_vitu_function_pane_g1

0xbb31,	// (0x00090017) main_calc_pane_g1

0x3550,	// (0x00087a36) aid_visual_content_pane

0xbb27,	// (0x0009000d) main_vradio_pane

0x398a,	// (0x00087e70) main_vradio_pane_g1_ParamLimits

0x398a,	// (0x00087e70) main_vradio_pane_g1

0x3998,	// (0x00087e7e) main_vradio_pane_g2_ParamLimits

0x3998,	// (0x00087e7e) main_vradio_pane_g2

0x0001,

0xf7c2,	// (0x00093ca8) main_vradio_pane_g_ParamLimits

0xf7c2,	// (0x00093ca8) main_vradio_pane_g

0x449b,	// (0x00088981) main_vradio_pane_t1_ParamLimits

0x449b,	// (0x00088981) main_vradio_pane_t1

0x449b,	// (0x00088981) main_vradio_pane_t2_ParamLimits

0x449b,	// (0x00088981) main_vradio_pane_t2

0xc3db,	// (0x000908c1) main_vradio_pane_t3_ParamLimits

0xc3db,	// (0x000908c1) main_vradio_pane_t3

0x0002,

0xf7c7,	// (0x00093cad) main_vradio_pane_t_ParamLimits

0xf7c7,	// (0x00093cad) main_vradio_pane_t

0x3931,	// (0x00087e17) vradio_rocker_control_pane_ParamLimits

0x3931,	// (0x00087e17) vradio_rocker_control_pane

0x3931,	// (0x00087e17) vradio_station_info_pane_ParamLimits

0x3931,	// (0x00087e17) vradio_station_info_pane

0x3931,	// (0x00087e17) vradio_frequency_info_pane_ParamLimits

0x3931,	// (0x00087e17) vradio_frequency_info_pane

0x461f,	// (0x00088b05) vradio_station_info_pane_g1

0x21a0,	// (0x00086686) vradio_station_info_pane_t1_ParamLimits

0x21a0,	// (0x00086686) vradio_station_info_pane_t1

0xc3db,	// (0x000908c1) vradio_station_info_pane_t2_ParamLimits

0xc3db,	// (0x000908c1) vradio_station_info_pane_t2

0x0001,

0xf7ce,	// (0x00093cb4) vradio_station_info_pane_t_ParamLimits

0xf7ce,	// (0x00093cb4) vradio_station_info_pane_t

0x08cb,	// (0x00084db1) vradio_tuning_pane

0x7a16,	// (0x0008befc) vradio_rocker_control_pane_g1

0x21b4,	// (0x0008669a) vradio_rocker_control_pane_g2

0x7a20,	// (0x0008bf06) vradio_rocker_control_pane_g3

0x7a2a,	// (0x0008bf10) vradio_rocker_control_pane_g4

0x7a34,	// (0x0008bf1a) vradio_rocker_control_pane_g5

0x0004,

0xf7d3,	// (0x00093cb9) vradio_rocker_control_pane_g

0x461f,	// (0x00088b05) vradio_frequency_info_pane_g1

0x449b,	// (0x00088981) vradio_frequency_info_pane_t1_ParamLimits

0x449b,	// (0x00088981) vradio_frequency_info_pane_t1

0x7a3e,	// (0x0008bf24) vradio_tuning_pane_g1

0x7a49,	// (0x0008bf2f) vradio_tuning_pane_t1

0xbad8,	// (0x0008ffbe) area_side_right_pane_ParamLimits

0xbad8,	// (0x0008ffbe) area_side_right_pane

0x1744,	// (0x00085c2a) status_small_pane_g1

0x174c,	// (0x00085c32) status_small_pane_g2

0x1755,	// (0x00085c3b) status_small_pane_g3

0x175e,	// (0x00085c44) status_small_pane_g4

0x0003,

0xf59f,	// (0x00093a85) status_small_pane_g

0x1767,	// (0x00085c4d) status_small_pane_t1

0xbb27,	// (0x0009000d) main_video3_pane

0x21bc,	// (0x000866a2) cams_zoom_vslider_pane

0x21c4,	// (0x000866aa) image3_wide_pane_ParamLimits

0x21c4,	// (0x000866aa) image3_wide_pane

0x21de,	// (0x000866c4) image3_wide_small_pane

0x21ea,	// (0x000866d0) main_video3_pane_g1_ParamLimits

0x21ea,	// (0x000866d0) main_video3_pane_g1

0x2206,	// (0x000866ec) main_video3_pane_g2_ParamLimits

0x2206,	// (0x000866ec) main_video3_pane_g2

0x0001,

0xf7de,	// (0x00093cc4) main_video3_pane_g_ParamLimits

0xf7de,	// (0x00093cc4) main_video3_pane_g

0x2222,	// (0x00086708) main_video3_pane_t1_ParamLimits

0x2222,	// (0x00086708) main_video3_pane_t1

0x224d,	// (0x00086733) main_video3_pane_t2_ParamLimits

0x224d,	// (0x00086733) main_video3_pane_t2

0x2278,	// (0x0008675e) main_video3_pane_t3_ParamLimits

0x2278,	// (0x0008675e) main_video3_pane_t3

0x0002,

0xf7e3,	// (0x00093cc9) main_video3_pane_t_ParamLimits

0xf7e3,	// (0x00093cc9) main_video3_pane_t

0x22a5,	// (0x0008678b) cams_zoom_vslider_pane_g1

0x22ae,	// (0x00086794) cams_zoom_vslider_pane_g2

0x0001,

0xf7ea,	// (0x00093cd0) cams_zoom_vslider_pane_g

0x22b6,	// (0x0008679c) small_slider_vertical_pane

0x461f,	// (0x00088b05) small_slider_vertical_pane_g1

0x461f,	// (0x00088b05) small_slider_vertical_pane_g2

0x22be,	// (0x000867a4) small_slider_vertical_pane_g3

0x0002,

0xf7ef,	// (0x00093cd5) small_slider_vertical_pane_g

0xbb27,	// (0x0009000d) main_hwr_training_pane

0x22c7,	// (0x000867ad) hwr_training_instruct_pane_ParamLimits

0x22c7,	// (0x000867ad) hwr_training_instruct_pane

0x7a58,	// (0x0008bf3e) hwr_training_navi_pane_ParamLimits

0x7a58,	// (0x0008bf3e) hwr_training_navi_pane

0x7a77,	// (0x0008bf5d) hwr_training_write_pane_ParamLimits

0x7a77,	// (0x0008bf5d) hwr_training_write_pane

0x08cb,	// (0x00084db1) bg_frame_shadow_pane

0x22fe,	// (0x000867e4) hwr_training_write_pane_g1

0x2306,	// (0x000867ec) hwr_training_write_pane_g2

0x230e,	// (0x000867f4) hwr_training_write_pane_g3

0x2316,	// (0x000867fc) hwr_training_write_pane_g4

0x231e,	// (0x00086804) hwr_training_write_pane_g5

0x2326,	// (0x0008680c) hwr_training_write_pane_g6

0x232e,	// (0x00086814) hwr_training_write_pane_g7

0x0006,

0xf7f6,	// (0x00093cdc) hwr_training_write_pane_g

0xcf70,	// (0x00091456) hwr_training_navi_pane_g1_ParamLimits

0xcf70,	// (0x00091456) hwr_training_navi_pane_g1

0xcf82,	// (0x00091468) hwr_training_navi_pane_g2_ParamLimits

0xcf82,	// (0x00091468) hwr_training_navi_pane_g2

0xcf94,	// (0x0009147a) hwr_training_navi_pane_g3_ParamLimits

0xcf94,	// (0x0009147a) hwr_training_navi_pane_g3

0xcfa4,	// (0x0009148a) hwr_training_navi_pane_g4_ParamLimits

0xcfa4,	// (0x0009148a) hwr_training_navi_pane_g4

0x0004,

0xf805,	// (0x00093ceb) hwr_training_navi_pane_g_ParamLimits

0xf805,	// (0x00093ceb) hwr_training_navi_pane_g

0xcfb1,	// (0x00091497) hwr_training_navi_pane_t1

0x7ac1,	// (0x0008bfa7) list_single_hwr_training_instruct_pane_ParamLimits

0x7ac1,	// (0x0008bfa7) list_single_hwr_training_instruct_pane

0x2336,	// (0x0008681c) list_single_hwr_training_instruct_pane_t1

0x1afb,	// (0x00085fe1) bg_frame_shadow_pane_g1

0x2345,	// (0x0008682b) bg_frame_shadow_pane_g2

0x234d,	// (0x00086833) bg_frame_shadow_pane_g3

0x2355,	// (0x0008683b) bg_frame_shadow_pane_g4

0x235d,	// (0x00086843) bg_frame_shadow_pane_g5

0x2365,	// (0x0008684b) bg_frame_shadow_pane_g6

0x236d,	// (0x00086853) bg_frame_shadow_pane_g7

0x3d8b,	// (0x00088271) bg_frame_shadow_pane_g8

0x0007,

0xf810,	// (0x00093cf6) bg_frame_shadow_pane_g

0xbb27,	// (0x0009000d) main_video_tele_dialer_pane

0x7ad7,	// (0x0008bfbd) aid_size_cell_video_keypad_ParamLimits

0x7ad7,	// (0x0008bfbd) aid_size_cell_video_keypad

0x7af1,	// (0x0008bfd7) grid_video_dialer_keypad_pane_ParamLimits

0x7af1,	// (0x0008bfd7) grid_video_dialer_keypad_pane

0x7b3f,	// (0x0008c025) video_down_pane_cp_ParamLimits

0x7b3f,	// (0x0008c025) video_down_pane_cp

0x7b71,	// (0x0008c057) cell_video_dialer_keypad_pane_ParamLimits

0x7b71,	// (0x0008c057) cell_video_dialer_keypad_pane

0x2375,	// (0x0008685b) bg_button_pane_cp08_ParamLimits

0x2375,	// (0x0008685b) bg_button_pane_cp08

0x7b93,	// (0x0008c079) cell_video_dialer_keypad_pane_g1_ParamLimits

0x7b93,	// (0x0008c079) cell_video_dialer_keypad_pane_g1

0x748f,	// (0x0008b975) mup3_rocker2_pane_ParamLimits

0x748f,	// (0x0008b975) mup3_rocker2_pane

0x461f,	// (0x00088b05) mup3_rocker2_pane_g1

0x675d,	// (0x0008ac43) main_dialer2_pane

0xbb27,	// (0x0009000d) main_mp4_pane

0xcfdd,	// (0x000914c3) main_mp4_pane_g1_ParamLimits

0xcfdd,	// (0x000914c3) main_mp4_pane_g1

0xcfdd,	// (0x000914c3) main_mp4_pane_g2_ParamLimits

0xcfdd,	// (0x000914c3) main_mp4_pane_g2

0x7bcd,	// (0x0008c0b3) main_mp4_pane_g3_ParamLimits

0x7bcd,	// (0x0008c0b3) main_mp4_pane_g3

0xcfeb,	// (0x000914d1) main_mp4_pane_g4_ParamLimits

0xcfeb,	// (0x000914d1) main_mp4_pane_g4

0xd019,	// (0x000914ff) main_mp4_pane_g5_ParamLimits

0xd019,	// (0x000914ff) main_mp4_pane_g5

0x0007,

0xf830,	// (0x00093d16) main_mp4_pane_g_ParamLimits

0xf830,	// (0x00093d16) main_mp4_pane_g

0xd08d,	// (0x00091573) main_mp4_pane_t1_ParamLimits

0xd08d,	// (0x00091573) main_mp4_pane_t1

0xd0e9,	// (0x000915cf) main_mp4_pane_t2_ParamLimits

0xd0e9,	// (0x000915cf) main_mp4_pane_t2

0x2381,	// (0x00086867) main_mp4_pane_t3_ParamLimits

0x2381,	// (0x00086867) main_mp4_pane_t3

0xed5d,	// (0x00093243) main_mp4_pane_t4_ParamLimits

0xed5d,	// (0x00093243) main_mp4_pane_t4

0x0003,

0xf841,	// (0x00093d27) main_mp4_pane_t_ParamLimits

0xf841,	// (0x00093d27) main_mp4_pane_t

0xeda1,	// (0x00093287) mp4_progress_pane_ParamLimits

0xeda1,	// (0x00093287) mp4_progress_pane

0xedeb,	// (0x000932d1) mp4_rocker_pane_ParamLimits

0xedeb,	// (0x000932d1) mp4_rocker_pane

0x23af,	// (0x00086895) mp4_progress_pane_t1

0x23c8,	// (0x000868ae) mp4_progress_pane_t2

0x0001,

0xf84a,	// (0x00093d30) mp4_progress_pane_t

0x23e1,	// (0x000868c7) mup_progress_pane_cp04

0x1924,	// (0x00085e0a) mp4_rocker_pane_g1

0x7c09,	// (0x0008c0ef) aid_cell_size_keypad2_ParamLimits

0x7c09,	// (0x0008c0ef) aid_cell_size_keypad2

0x7c1f,	// (0x0008c105) dialer2_ne_pane_ParamLimits

0x7c1f,	// (0x0008c105) dialer2_ne_pane

0x7c39,	// (0x0008c11f) grid_dialer2_keypad_pane_ParamLimits

0x7c39,	// (0x0008c11f) grid_dialer2_keypad_pane

0xceee,	// (0x000913d4) bg_popup_call_pane_cp07_ParamLimits

0xceee,	// (0x000913d4) bg_popup_call_pane_cp07

0x7c55,	// (0x0008c13b) dialer2_ne_pane_t1_ParamLimits

0x7c55,	// (0x0008c13b) dialer2_ne_pane_t1

0x7c91,	// (0x0008c177) cell_dialer2_keypad_pane_ParamLimits

0x7c91,	// (0x0008c177) cell_dialer2_keypad_pane

0x2414,	// (0x000868fa) bg_button_pane_pane_cp04_ParamLimits

0x2414,	// (0x000868fa) bg_button_pane_pane_cp04

0x7cb3,	// (0x0008c199) cell_dialer2_keypad_pane_g1_ParamLimits

0x7cb3,	// (0x0008c199) cell_dialer2_keypad_pane_g1

0x46f7,	// (0x00088bdd) aid_placing_vt_set_content_ParamLimits

0x46f7,	// (0x00088bdd) aid_placing_vt_set_content

0x471f,	// (0x00088c05) aid_placing_vt_set_title_ParamLimits

0x471f,	// (0x00088c05) aid_placing_vt_set_title

0xbb27,	// (0x0009000d) main_image3_pane

0x7d79,	// (0x0008c25f) area_side_right_pane_cp01_ParamLimits

0x7d79,	// (0x0008c25f) area_side_right_pane_cp01

0xcfdd,	// (0x000914c3) main_image3_pane_g1_ParamLimits

0xcfdd,	// (0x000914c3) main_image3_pane_g1

0x7d90,	// (0x0008c276) main_image3_pane_g2_ParamLimits

0x7d90,	// (0x0008c276) main_image3_pane_g2

0x7db8,	// (0x0008c29e) main_image3_pane_g3_ParamLimits

0x7db8,	// (0x0008c29e) main_image3_pane_g3

0x7de2,	// (0x0008c2c8) main_image3_pane_g4_ParamLimits

0x7de2,	// (0x0008c2c8) main_image3_pane_g4

0x0003,

0xf859,	// (0x00093d3f) main_image3_pane_g_ParamLimits

0xf859,	// (0x00093d3f) main_image3_pane_g

0x7e0c,	// (0x0008c2f2) main_image3_pane_t1_ParamLimits

0x7e0c,	// (0x0008c2f2) main_image3_pane_t1

0x7e64,	// (0x0008c34a) main_image3_pane_t2_ParamLimits

0x7e64,	// (0x0008c34a) main_image3_pane_t2

0x7eb6,	// (0x0008c39c) main_image3_pane_t3_ParamLimits

0x7eb6,	// (0x0008c39c) main_image3_pane_t3

0x0003,

0xf862,	// (0x00093d48) main_image3_pane_t_ParamLimits

0xf862,	// (0x00093d48) main_image3_pane_t

0x3931,	// (0x00087e17) grid_sctrl_middle_pane_cp01_ParamLimits

0x3931,	// (0x00087e17) grid_sctrl_middle_pane_cp01

0x7f3e,	// (0x0008c424) cell_sctrl_middle_pane_cp01_ParamLimits

0x7f3e,	// (0x0008c424) cell_sctrl_middle_pane_cp01

0x7f5b,	// (0x0008c441) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x7f5b,	// (0x0008c441) cell_sctrl_middle_pane_cp01_g1

0xbb27,	// (0x0009000d) main_call4_pane

0x7f71,	// (0x0008c457) aid_size_button_call4_ParamLimits

0x7f71,	// (0x0008c457) aid_size_button_call4

0x7fa4,	// (0x0008c48a) call4_windows_pane_ParamLimits

0x7fa4,	// (0x0008c48a) call4_windows_pane

0x7fc3,	// (0x0008c4a9) grid_call4_button_pane_ParamLimits

0x7fc3,	// (0x0008c4a9) grid_call4_button_pane

0x7ff6,	// (0x0008c4dc) call4_windows_conf_pane

0x800b,	// (0x0008c4f1) popup_call4_audio_first_window_ParamLimits

0x800b,	// (0x0008c4f1) popup_call4_audio_first_window

0x805b,	// (0x0008c541) popup_call4_audio_second_window_ParamLimits

0x805b,	// (0x0008c541) popup_call4_audio_second_window

0x8072,	// (0x0008c558) popup_call4_audio_wait_window_ParamLimits

0x8072,	// (0x0008c558) popup_call4_audio_wait_window

0x8080,	// (0x0008c566) cell_call4_button_pane_ParamLimits

0x8080,	// (0x0008c566) cell_call4_button_pane

0x80a5,	// (0x0008c58b) bg_button_pane_cp09_ParamLimits

0x80a5,	// (0x0008c58b) bg_button_pane_cp09

0x80b1,	// (0x0008c597) cell_call4_button_pane_g1_ParamLimits

0x80b1,	// (0x0008c597) cell_call4_button_pane_g1

0x80d7,	// (0x0008c5bd) cell_call4_button_pane_t1_ParamLimits

0x80d7,	// (0x0008c5bd) cell_call4_button_pane_t1

0x2428,	// (0x0008690e) popup_call4_audio_conf_window_ParamLimits

0x2428,	// (0x0008690e) popup_call4_audio_conf_window

0x74ef,	// (0x0008b9d5) mup3_progress_pane_t1_ParamLimits

0x750e,	// (0x0008b9f4) mup3_progress_pane_t2_ParamLimits

0x1e6e,	// (0x00086354) mup3_progress_pane_t3_ParamLimits

0xf737,	// (0x00093c1d) mup3_progress_pane_t_ParamLimits

0x1e8b,	// (0x00086371) mup_progress_pane_cp03_ParamLimits

0x7a0e,	// (0x0008bef4) mup3_control_keys_pane_g4_copy1

0xedcf,	// (0x000932b5) mp4_rocker2_pane_ParamLimits

0xedcf,	// (0x000932b5) mp4_rocker2_pane

0x243c,	// (0x00086922) mp4_rocker2_pane_g1

0x2444,	// (0x0008692a) mp4_rocker2_pane_g2

0xee6f,	// (0x00093355) mp4_rocker2_pane_g3

0xee77,	// (0x0009335d) mp4_rocker2_pane_g4

0xee7f,	// (0x00093365) mp4_rocker2_pane_g5

0x0004,

0xf86b,	// (0x00093d51) mp4_rocker2_pane_g

0xbb27,	// (0x0009000d) main_camera4_pane

0xbb27,	// (0x0009000d) main_video4_pane

0x7b0d,	// (0x0008bff3) main_video_tele_dialer_pane_t1_ParamLimits

0x7b0d,	// (0x0008bff3) main_video_tele_dialer_pane_t1

0x7b26,	// (0x0008c00c) main_video_tele_dialer_pane_t2_ParamLimits

0x7b26,	// (0x0008c00c) main_video_tele_dialer_pane_t2

0x0001,

0xf821,	// (0x00093d07) main_video_tele_dialer_pane_t_ParamLimits

0xf821,	// (0x00093d07) main_video_tele_dialer_pane_t

0x8119,	// (0x0008c5ff) cam4_autofocus_pane_ParamLimits

0x8119,	// (0x0008c5ff) cam4_autofocus_pane

0x812f,	// (0x0008c615) cam4_image_uncrop_pane_ParamLimits

0x812f,	// (0x0008c615) cam4_image_uncrop_pane

0x8149,	// (0x0008c62f) cam4_indicators_pane_ParamLimits

0x8149,	// (0x0008c62f) cam4_indicators_pane

0x8174,	// (0x0008c65a) main_camera4_pane_g1_ParamLimits

0x8174,	// (0x0008c65a) main_camera4_pane_g1

0x8186,	// (0x0008c66c) main_camera4_pane_g2_ParamLimits

0x8186,	// (0x0008c66c) main_camera4_pane_g2

0x8199,	// (0x0008c67f) main_camera4_pane_g3_ParamLimits

0x8199,	// (0x0008c67f) main_camera4_pane_g3

0x81ac,	// (0x0008c692) main_camera4_pane_g4_ParamLimits

0x81ac,	// (0x0008c692) main_camera4_pane_g4

0x81bf,	// (0x0008c6a5) main_camera4_pane_g5_ParamLimits

0x81bf,	// (0x0008c6a5) main_camera4_pane_g5

0x0005,

0xf876,	// (0x00093d5c) main_camera4_pane_g_ParamLimits

0xf876,	// (0x00093d5c) main_camera4_pane_g

0x81e3,	// (0x0008c6c9) main_camera4_pane_t1_ParamLimits

0x81e3,	// (0x0008c6c9) main_camera4_pane_t1

0x25d8,	// (0x00086abe) bg_tb_trans_pane_cp06

0xeeab,	// (0x00093391) cam4_indicators_pane_g1

0xeebc,	// (0x000933a2) cam4_indicators_pane_g2

0x0002,

0xf891,	// (0x00093d77) cam4_indicators_pane_g

0xeed4,	// (0x000933ba) cam4_indicators_pane_t1

0x8247,	// (0x0008c72d) main_video4_pane_g1_ParamLimits

0x8247,	// (0x0008c72d) main_video4_pane_g1

0x8256,	// (0x0008c73c) main_video4_pane_g2_ParamLimits

0x8256,	// (0x0008c73c) main_video4_pane_g2

0x8265,	// (0x0008c74b) main_video4_pane_g3_ParamLimits

0x8265,	// (0x0008c74b) main_video4_pane_g3

0x8274,	// (0x0008c75a) main_video4_pane_g4_ParamLimits

0x8274,	// (0x0008c75a) main_video4_pane_g4

0x0004,

0xf898,	// (0x00093d7e) main_video4_pane_g_ParamLimits

0xf898,	// (0x00093d7e) main_video4_pane_g

0x8292,	// (0x0008c778) vid4_indicators_pane_ParamLimits

0x8292,	// (0x0008c778) vid4_indicators_pane

0x82c0,	// (0x0008c7a6) video4_image_uncrop_cif_pane_ParamLimits

0x82c0,	// (0x0008c7a6) video4_image_uncrop_cif_pane

0x82da,	// (0x0008c7c0) video4_image_uncrop_nhd_pane_ParamLimits

0x82da,	// (0x0008c7c0) video4_image_uncrop_nhd_pane

0x812f,	// (0x0008c615) video4_image_uncrop_vga_pane_ParamLimits

0x812f,	// (0x0008c615) video4_image_uncrop_vga_pane

0xbb19,	// (0x0008ffff) bg_tb_trans_pane_cp07

0xeefe,	// (0x000933e4) vid4_indicators_pane_g1

0xef12,	// (0x000933f8) vid4_indicators_pane_g2

0xef26,	// (0x0009340c) vid4_indicators_pane_g3

0x0004,

0xf8a3,	// (0x00093d89) vid4_indicators_pane_g

0xef53,	// (0x00093439) vid4_indicators_pane_t1

0x82ee,	// (0x0008c7d4) cam4_autofocus_pane_g1

0x82f6,	// (0x0008c7dc) cam4_autofocus_pane_g2

0x82fe,	// (0x0008c7e4) cam4_autofocus_pane_g3

0x0002,

0xf8ae,	// (0x00093d94) cam4_autofocus_pane_g

0x8306,	// (0x0008c7ec) cam4_autofocus_pane_g3_copy1

0x7b55,	// (0x0008c03b) video_down_pane_cp_t1

0x7b63,	// (0x0008c049) video_down_pane_cp_t2

0x0001,

0xf826,	// (0x00093d0c) video_down_pane_cp_t

0xbb19,	// (0x0008ffff) popup_vitu2_window_ParamLimits

0xbb19,	// (0x0008ffff) popup_vitu2_window

0x830e,	// (0x0008c7f4) aid_size_cell2_itu2_ParamLimits

0x830e,	// (0x0008c7f4) aid_size_cell2_itu2

0x832e,	// (0x0008c814) aid_size_cell_itu2_ParamLimits

0x832e,	// (0x0008c814) aid_size_cell_itu2

0x837b,	// (0x0008c861) bg_popup_window_pane_cp09_ParamLimits

0x837b,	// (0x0008c861) bg_popup_window_pane_cp09

0x8389,	// (0x0008c86f) field_vitu2_entry_pane_ParamLimits

0x8389,	// (0x0008c86f) field_vitu2_entry_pane

0x83ac,	// (0x0008c892) grid_vitu2_function_pane_ParamLimits

0x83ac,	// (0x0008c892) grid_vitu2_function_pane

0x83f7,	// (0x0008c8dd) grid_vitu2_itu_pane_ParamLimits

0x83f7,	// (0x0008c8dd) grid_vitu2_itu_pane

0x8485,	// (0x0008c96b) cell_vitu2_itu_pane_ParamLimits

0x8485,	// (0x0008c96b) cell_vitu2_itu_pane

0x84b1,	// (0x0008c997) cell_vitu2_function_pane_ParamLimits

0x84b1,	// (0x0008c997) cell_vitu2_function_pane

0x244c,	// (0x00086932) bg_popup_call_pane_cp08_ParamLimits

0x244c,	// (0x00086932) bg_popup_call_pane_cp08

0x2463,	// (0x00086949) field_vitu2_entry_pane_g1

0x246f,	// (0x00086955) field_vitu2_entry_pane_g2

0x0002,

0xf8b5,	// (0x00093d9b) field_vitu2_entry_pane_g

0x84f0,	// (0x0008c9d6) field_vitu2_entry_pane_t1_ParamLimits

0x84f0,	// (0x0008c9d6) field_vitu2_entry_pane_t1

0xd13b,	// (0x00091621) field_vitu2_entry_pane_t2_ParamLimits

0xd13b,	// (0x00091621) field_vitu2_entry_pane_t2

0x0001,

0xf8bc,	// (0x00093da2) field_vitu2_entry_pane_t_ParamLimits

0xf8bc,	// (0x00093da2) field_vitu2_entry_pane_t

0x8520,	// (0x0008ca06) bg_button_pane_cp010_ParamLimits

0x8520,	// (0x0008ca06) bg_button_pane_cp010

0x852e,	// (0x0008ca14) cell_vitu2_itu_pane_g1

0x8554,	// (0x0008ca3a) cell_vitu2_itu_pane_t1_ParamLimits

0x8554,	// (0x0008ca3a) cell_vitu2_itu_pane_t1

0x3428,	// (0x0008790e) cell_vitu2_itu_pane_t2_ParamLimits

0x3428,	// (0x0008790e) cell_vitu2_itu_pane_t2

0x0002,

0xf8c6,	// (0x00093dac) cell_vitu2_itu_pane_t_ParamLimits

0xf8c6,	// (0x00093dac) cell_vitu2_itu_pane_t

0xbb19,	// (0x0008ffff) bg_button_pane_cp011

0x85b2,	// (0x0008ca98) cell_vitu2_function_pane_g1

0xbb27,	// (0x0009000d) main_myfav_hc_pane

0x7f06,	// (0x0008c3ec) popup_image3_note_pane_ParamLimits

0x7f06,	// (0x0008c3ec) popup_image3_note_pane

0x7f22,	// (0x0008c408) popup_image3_tool_bar_pane_ParamLimits

0x7f22,	// (0x0008c408) popup_image3_tool_bar_pane

0x34b6,	// (0x0008799c) cell_vitu2_itu_pane_t3_ParamLimits

0x34b6,	// (0x0008799c) cell_vitu2_itu_pane_t3

0x08cb,	// (0x00084db1) bg_popup_trans_pane

0x2491,	// (0x00086977) grid_image3_tool_bar_pane

0x249b,	// (0x00086981) bg_popup_trans_pane_g1

0x4ce6,	// (0x000891cc) bg_popup_trans_pane_g2

0x24a3,	// (0x00086989) bg_popup_trans_pane_g3

0x24ab,	// (0x00086991) bg_popup_trans_pane_g4

0x24b3,	// (0x00086999) bg_popup_trans_pane_g5

0x24bb,	// (0x000869a1) bg_popup_trans_pane_g6

0x24c3,	// (0x000869a9) bg_popup_trans_pane_g7

0x24cb,	// (0x000869b1) bg_popup_trans_pane_g8

0x4cc6,	// (0x000891ac) bg_popup_trans_pane_g9

0x0008,

0xf8cd,	// (0x00093db3) bg_popup_trans_pane_g

0x24d3,	// (0x000869b9) cell_image3_tool_bar_pane_ParamLimits

0x24d3,	// (0x000869b9) cell_image3_tool_bar_pane

0x461f,	// (0x00088b05) cell_image3_tool_bar_pane_g1

0x08cb,	// (0x00084db1) bg_popup_trans_pane_cp1

0x24e7,	// (0x000869cd) popup_image3_note_pane_t1

0x24f5,	// (0x000869db) popup_image3_note_pane_t2

0x2503,	// (0x000869e9) popup_image3_note_pane_t3

0x0002,

0xf8e0,	// (0x00093dc6) popup_image3_note_pane_t

0x2511,	// (0x000869f7) popup_image3_note_pane_t3_copy1

0x85c6,	// (0x0008caac) bg_myfav_hc_instruction_pane_ParamLimits

0x85c6,	// (0x0008caac) bg_myfav_hc_instruction_pane

0x85da,	// (0x0008cac0) cell_myfav_contact_pane_ParamLimits

0x85da,	// (0x0008cac0) cell_myfav_contact_pane

0x85f8,	// (0x0008cade) cell_myfav_contact_pane_cp1_ParamLimits

0x85f8,	// (0x0008cade) cell_myfav_contact_pane_cp1

0x8610,	// (0x0008caf6) cell_myfav_contact_pane_cp2_ParamLimits

0x8610,	// (0x0008caf6) cell_myfav_contact_pane_cp2

0x8628,	// (0x0008cb0e) cell_myfav_contact_pane_cp3_ParamLimits

0x8628,	// (0x0008cb0e) cell_myfav_contact_pane_cp3

0x863f,	// (0x0008cb25) cell_myfav_contact_pane_cp4_ParamLimits

0x863f,	// (0x0008cb25) cell_myfav_contact_pane_cp4

0x8657,	// (0x0008cb3d) cell_myfav_contact_pane_cp5_ParamLimits

0x8657,	// (0x0008cb3d) cell_myfav_contact_pane_cp5

0x866b,	// (0x0008cb51) cell_myfav_contact_pane_cp6_ParamLimits

0x866b,	// (0x0008cb51) cell_myfav_contact_pane_cp6

0x8681,	// (0x0008cb67) cell_myfav_contact_pane_cp7_ParamLimits

0x8681,	// (0x0008cb67) cell_myfav_contact_pane_cp7

0x251f,	// (0x00086a05) listscroll_gen_pane_cp05

0x869b,	// (0x0008cb81) main_myfav_hc_pane_g1_ParamLimits

0x869b,	// (0x0008cb81) main_myfav_hc_pane_g1

0x86b5,	// (0x0008cb9b) main_myfav_hc_pane_g2_ParamLimits

0x86b5,	// (0x0008cb9b) main_myfav_hc_pane_g2

0x0002,

0xf8e7,	// (0x00093dcd) main_myfav_hc_pane_g_ParamLimits

0xf8e7,	// (0x00093dcd) main_myfav_hc_pane_g

0x86e7,	// (0x0008cbcd) main_myfav_hc_pane_t1_ParamLimits

0x86e7,	// (0x0008cbcd) main_myfav_hc_pane_t1

0x2528,	// (0x00086a0e) main_myfav_hc_pane_t2_ParamLimits

0x2528,	// (0x00086a0e) main_myfav_hc_pane_t2

0x253a,	// (0x00086a20) main_myfav_hc_pane_t3_ParamLimits

0x253a,	// (0x00086a20) main_myfav_hc_pane_t3

0x86fe,	// (0x0008cbe4) main_myfav_hc_pane_t4_ParamLimits

0x86fe,	// (0x0008cbe4) main_myfav_hc_pane_t4

0x0004,

0xf8ee,	// (0x00093dd4) main_myfav_hc_pane_t_ParamLimits

0xf8ee,	// (0x00093dd4) main_myfav_hc_pane_t

0x461f,	// (0x00088b05) bg_myfav_hc_instruction_pane_g1

0x254c,	// (0x00086a32) cell_myfav_contact_pane_g1_ParamLimits

0x254c,	// (0x00086a32) cell_myfav_contact_pane_g1

0x254c,	// (0x00086a32) cell_myfav_contact_pane_g2_ParamLimits

0x254c,	// (0x00086a32) cell_myfav_contact_pane_g2

0x2558,	// (0x00086a3e) cell_myfav_contact_pane_g3_ParamLimits

0x2558,	// (0x00086a3e) cell_myfav_contact_pane_g3

0x3998,	// (0x00087e7e) cell_myfav_contact_pane_g4_ParamLimits

0x3998,	// (0x00087e7e) cell_myfav_contact_pane_g4

0x2565,	// (0x00086a4b) cell_myfav_contact_pane_g5_ParamLimits

0x2565,	// (0x00086a4b) cell_myfav_contact_pane_g5

0x0004,

0xf8f9,	// (0x00093ddf) cell_myfav_contact_pane_g_ParamLimits

0xf8f9,	// (0x00093ddf) cell_myfav_contact_pane_g

0x86cf,	// (0x0008cbb5) main_myfav_hc_pane_g3_ParamLimits

0x86cf,	// (0x0008cbb5) main_myfav_hc_pane_g3

0x368b,	// (0x00087b71) popup_adpt_find_window

0x8726,	// (0x0008cc0c) afind_page_pane_ParamLimits

0x8726,	// (0x0008cc0c) afind_page_pane

0x873b,	// (0x0008cc21) aid_size_cell_afind_ParamLimits

0x873b,	// (0x0008cc21) aid_size_cell_afind

0x8759,	// (0x0008cc3f) bg_popup_sub_pane_cp09_ParamLimits

0x8759,	// (0x0008cc3f) bg_popup_sub_pane_cp09

0x8766,	// (0x0008cc4c) find_pane_cp01_ParamLimits

0x8766,	// (0x0008cc4c) find_pane_cp01

0x2571,	// (0x00086a57) grid_afind_control_pane_ParamLimits

0x2571,	// (0x00086a57) grid_afind_control_pane

0x8773,	// (0x0008cc59) grid_afind_pane_ParamLimits

0x8773,	// (0x0008cc59) grid_afind_pane

0x8792,	// (0x0008cc78) cell_afind_pane_ParamLimits

0x8792,	// (0x0008cc78) cell_afind_pane

0x461f,	// (0x00088b05) afind_page_pane_g1

0x87f9,	// (0x0008ccdf) afind_page_pane_g2

0x8802,	// (0x0008cce8) afind_page_pane_g3

0x0002,

0xf904,	// (0x00093dea) afind_page_pane_g

0x880b,	// (0x0008ccf1) afind_page_pane_t1

0x2585,	// (0x00086a6b) cell_afind_grid_control_pane_ParamLimits

0x2585,	// (0x00086a6b) cell_afind_grid_control_pane

0x2414,	// (0x000868fa) bg_button_pane_cp69_ParamLimits

0x2414,	// (0x000868fa) bg_button_pane_cp69

0x882b,	// (0x0008cd11) cell_afind_pane_g1_ParamLimits

0x882b,	// (0x0008cd11) cell_afind_pane_g1

0x8838,	// (0x0008cd1e) cell_afind_pane_t1_ParamLimits

0x8838,	// (0x0008cd1e) cell_afind_pane_t1

0x468a,	// (0x00088b70) bg_button_pane_cp72

0xd158,	// (0x0009163e) cell_afind_grid_control_pane_g1

0x61c9,	// (0x0008a6af) aid_image_placing_area_ParamLimits

0x61c9,	// (0x0008a6af) aid_image_placing_area

0x398a,	// (0x00087e70) field_vitu_entry_pane_g1_ParamLimits

0x398a,	// (0x00087e70) field_vitu_entry_pane_g1

0x398a,	// (0x00087e70) field_vitu_entry_pane_g2_ParamLimits

0x398a,	// (0x00087e70) field_vitu_entry_pane_g2

0x0001,

0xf201,	// (0x000936e7) field_vitu_entry_pane_g_ParamLimits

0xf201,	// (0x000936e7) field_vitu_entry_pane_g

0x2184,	// (0x0008666a) cell_vitu_itu_pane_g1_ParamLimits

0x1f45,	// (0x0008642b) cell_vitu_itu_pane_t3_ParamLimits

0x1f45,	// (0x0008642b) cell_vitu_itu_pane_t3

0x23af,	// (0x00086895) mp4_progress_pane_t1_ParamLimits

0x23c8,	// (0x000868ae) mp4_progress_pane_t2_ParamLimits

0xf84a,	// (0x00093d30) mp4_progress_pane_t_ParamLimits

0x23e1,	// (0x000868c7) mup_progress_pane_cp04_ParamLimits

0x8712,	// (0x0008cbf8) main_myfav_hc_pane_t5_ParamLimits

0x8712,	// (0x0008cbf8) main_myfav_hc_pane_t5

0xbac8,	// (0x0008ffae) aid_zoom_text_primary

0x368b,	// (0x00087b71) popup_adpt_find_window_ParamLimits

0xbb19,	// (0x0008ffff) main_cam_set_pane

0x8160,	// (0x0008c646) cam4_zoom_pane_ParamLimits

0x8160,	// (0x0008c646) cam4_zoom_pane

0x884a,	// (0x0008cd30) main_cam_set_pane_g1_ParamLimits

0x884a,	// (0x0008cd30) main_cam_set_pane_g1

0x8858,	// (0x0008cd3e) main_cam_set_pane_g2_ParamLimits

0x8858,	// (0x0008cd3e) main_cam_set_pane_g2

0x0001,

0xf90b,	// (0x00093df1) main_cam_set_pane_g_ParamLimits

0xf90b,	// (0x00093df1) main_cam_set_pane_g

0x8879,	// (0x0008cd5f) main_cam_set_pane_t1_ParamLimits

0x8879,	// (0x0008cd5f) main_cam_set_pane_t1

0x8894,	// (0x0008cd7a) main_cset_listscroll_pane_ParamLimits

0x8894,	// (0x0008cd7a) main_cset_listscroll_pane

0x88ba,	// (0x0008cda0) main_cset_slider_pane_ParamLimits

0x88ba,	// (0x0008cda0) main_cset_slider_pane

0xd169,	// (0x0009164f) main_cset_list_pane_ParamLimits

0xd169,	// (0x0009164f) main_cset_list_pane

0xd179,	// (0x0009165f) scroll_pane_cp028

0x88e0,	// (0x0008cdc6) aid_area_touch_slider

0x88fc,	// (0x0008cde2) cset_slider_pane

0x891f,	// (0x0008ce05) main_cset_slider_pane_g1

0x8934,	// (0x0008ce1a) main_cset_slider_pane_g2

0x0011,

0xf910,	// (0x00093df6) main_cset_slider_pane_g

0xd1ca,	// (0x000916b0) main_cset_slider_pane_t1

0x89d8,	// (0x0008cebe) main_cset_slider_pane_t2

0x89f2,	// (0x0008ced8) main_cset_slider_pane_t3

0x8a0c,	// (0x0008cef2) main_cset_slider_pane_t4

0x8a26,	// (0x0008cf0c) main_cset_slider_pane_t5

0x8a40,	// (0x0008cf26) main_cset_slider_pane_t6

0x8a55,	// (0x0008cf3b) main_cset_slider_pane_t7

0x000e,

0xf935,	// (0x00093e1b) main_cset_slider_pane_t

0x8b59,	// (0x0008d03f) cset_list_set_pane_ParamLimits

0x8b59,	// (0x0008d03f) cset_list_set_pane

0xd264,	// (0x0009174a) aid_position_infowindow_above

0xd26c,	// (0x00091752) aid_position_infowindow_below

0x8b6b,	// (0x0008d051) cset_list_set_pane_g1_ParamLimits

0x8b6b,	// (0x0008d051) cset_list_set_pane_g1

0x8b77,	// (0x0008d05d) cset_list_set_pane_g3_ParamLimits

0x8b77,	// (0x0008d05d) cset_list_set_pane_g3

0x0001,

0xf954,	// (0x00093e3a) cset_list_set_pane_g_ParamLimits

0xf954,	// (0x00093e3a) cset_list_set_pane_g

0x8b86,	// (0x0008d06c) cset_list_set_pane_t1_ParamLimits

0x8b86,	// (0x0008d06c) cset_list_set_pane_t1

0x3931,	// (0x00087e17) list_highlight_pane_cp021_ParamLimits

0x3931,	// (0x00087e17) list_highlight_pane_cp021

0xc451,	// (0x00090937) cset_slider_pane_g1

0xc463,	// (0x00090949) cset_slider_pane_g2

0xc45a,	// (0x00090940) cset_slider_pane_g3

0x0002,

0xf959,	// (0x00093e3f) cset_slider_pane_g

0xef6a,	// (0x00093450) aid_area_touch_cam4_zoom

0xef72,	// (0x00093458) cam4_zoom_cont_pane

0xef7a,	// (0x00093460) cam4_zoom_pane_g1

0xef82,	// (0x00093468) cam4_zoom_pane_g2

0x8b9b,	// (0x0008d081) cam4_zoom_pane_g3

0x0002,

0xf960,	// (0x00093e46) cam4_zoom_pane_g

0xef8a,	// (0x00093470) cam4_zoom_cont_pane_g1

0xef93,	// (0x00093479) cam4_zoom_cont_pane_g2

0xef9c,	// (0x00093482) cam4_zoom_cont_pane_g3

0x0002,

0xf967,	// (0x00093e4d) cam4_zoom_cont_pane_g

0x7f8f,	// (0x0008c475) call4_image_pane_ParamLimits

0x7f8f,	// (0x0008c475) call4_image_pane

0x7ff6,	// (0x0008c4dc) call4_windows_conf_pane_ParamLimits

0x8039,	// (0x0008c51f) popup_call4_audio_in_window_ParamLimits

0x8039,	// (0x0008c51f) popup_call4_audio_in_window

0x08cb,	// (0x00084db1) bg_popup_call2_act_pane_cp02

0x2420,	// (0x00086906) call4_list_conf_pane

0x461f,	// (0x00088b05) call4_image_pane_g1

0x461f,	// (0x00088b05) call4_image_pane_g2

0x0001,

0xf3d8,	// (0x000938be) call4_image_pane_g

0xd274,	// (0x0009175a) list_single_graphic_popup_conf4_pane_ParamLimits

0xd274,	// (0x0009175a) list_single_graphic_popup_conf4_pane

0x08cb,	// (0x00084db1) list_highlight_pane_cp022

0xd287,	// (0x0009176d) list_single_graphic_popup_conf4_pane_g1

0xc04a,	// (0x00090530) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf96e,	// (0x00093e54) list_single_graphic_popup_conf4_pane_g

0xd28f,	// (0x00091775) list_single_graphic_popup_conf4_pane_t1

0x4855,	// (0x00088d3b) popup_vtel_slider_window_ParamLimits

0x4855,	// (0x00088d3b) popup_vtel_slider_window

0x2402,	// (0x000868e8) dialer2_ne_pane_t2_ParamLimits

0x2402,	// (0x000868e8) dialer2_ne_pane_t2

0x0001,

0xf84f,	// (0x00093d35) dialer2_ne_pane_t_ParamLimits

0xf84f,	// (0x00093d35) dialer2_ne_pane_t

0xceee,	// (0x000913d4) bg_popup_sub_pane_cp010_ParamLimits

0xceee,	// (0x000913d4) bg_popup_sub_pane_cp010

0x8ba3,	// (0x0008d089) popup_vtel_slider_window_g1_ParamLimits

0x8ba3,	// (0x0008d089) popup_vtel_slider_window_g1

0x8bb6,	// (0x0008d09c) popup_vtel_slider_window_g2_ParamLimits

0x8bb6,	// (0x0008d09c) popup_vtel_slider_window_g2

0x0003,

0xf973,	// (0x00093e59) popup_vtel_slider_window_g_ParamLimits

0xf973,	// (0x00093e59) popup_vtel_slider_window_g

0x8c0c,	// (0x0008d0f2) vtel_slider_pane_ParamLimits

0x8c0c,	// (0x0008d0f2) vtel_slider_pane

0x8c2e,	// (0x0008d114) vtel_slider_pane_g1_ParamLimits

0x8c2e,	// (0x0008d114) vtel_slider_pane_g1

0x8c42,	// (0x0008d128) vtel_slider_pane_g2_ParamLimits

0x8c42,	// (0x0008d128) vtel_slider_pane_g2

0x8c5a,	// (0x0008d140) vtel_slider_pane_g3_ParamLimits

0x8c5a,	// (0x0008d140) vtel_slider_pane_g3

0x8c2e,	// (0x0008d114) vtel_slider_pane_g4_ParamLimits

0x8c2e,	// (0x0008d114) vtel_slider_pane_g4

0x8c70,	// (0x0008d156) vtel_slider_pane_g5_ParamLimits

0x8c70,	// (0x0008d156) vtel_slider_pane_g5

0x0004,

0xf97c,	// (0x00093e62) vtel_slider_pane_g_ParamLimits

0xf97c,	// (0x00093e62) vtel_slider_pane_g

0xbb19,	// (0x0008ffff) main_gallery2_pane

0x834e,	// (0x0008c834) aid_size_row_itut2_dropdow_list_ParamLimits

0x834e,	// (0x0008c834) aid_size_row_itut2_dropdow_list

0x83d1,	// (0x0008c8b7) grid_vitu2_function_top_pane_ParamLimits

0x83d1,	// (0x0008c8b7) grid_vitu2_function_top_pane

0x8433,	// (0x0008c919) popup_vitu2_dropdown_list_window_ParamLimits

0x8433,	// (0x0008c919) popup_vitu2_dropdown_list_window

0x8459,	// (0x0008c93f) popup_vitu2_match_list_window

0x8c86,	// (0x0008d16c) cell_vitu2_function_top_pane_ParamLimits

0x8c86,	// (0x0008d16c) cell_vitu2_function_top_pane

0x8c9e,	// (0x0008d184) cell_vitu2_function_top_pane_cp01_ParamLimits

0x8c9e,	// (0x0008d184) cell_vitu2_function_top_pane_cp01

0x8cba,	// (0x0008d1a0) cell_vitu2_function_top_wide_pane_ParamLimits

0x8cba,	// (0x0008d1a0) cell_vitu2_function_top_wide_pane

0xbb19,	// (0x0008ffff) bg_button_pane_cp012

0x8cd8,	// (0x0008d1be) cell_vitu2_function_top_pane_g1

0xefa5,	// (0x0009348b) bg_button_pane_cp013_ParamLimits

0xefa5,	// (0x0009348b) bg_button_pane_cp013

0x8cec,	// (0x0008d1d2) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x8cec,	// (0x0008d1d2) cell_vitu2_function_top_wide_pane_g1

0xbb19,	// (0x0008ffff) bg_popup_sub_pane_cp20

0x8d04,	// (0x0008d1ea) list_vitu2_match_list_pane

0x249b,	// (0x00086981) bg_popup_sub_pane_cp20_g1

0x24a3,	// (0x00086989) bg_popup_sub_pane_cp20_g2

0x4ce6,	// (0x000891cc) bg_popup_sub_pane_cp20_g3

0x24ab,	// (0x00086991) bg_popup_sub_pane_cp20_g4

0x4cc6,	// (0x000891ac) bg_popup_sub_pane_cp20_g5

0xd2a5,	// (0x0009178b) bg_popup_sub_pane_cp20_g6

0x24bb,	// (0x000869a1) bg_popup_sub_pane_cp20_g7

0x24c3,	// (0x000869a9) bg_popup_sub_pane_cp20_g8

0x24cb,	// (0x000869b1) bg_popup_sub_pane_cp20_g9

0x0008,

0xf987,	// (0x00093e6d) bg_popup_sub_pane_cp20_g

0xefc1,	// (0x000934a7) list_vitu2_match_list_item_pane_ParamLimits

0xefc1,	// (0x000934a7) list_vitu2_match_list_item_pane

0xefd3,	// (0x000934b9) list_vitu2_match_list_item_pane_t1

0xbb27,	// (0x0009000d) bg_popup_sub_pane_cp21

0x4432,	// (0x00088918) grid_vitu2_dropdown_list_pane

0x8d1c,	// (0x0008d202) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x8d1c,	// (0x0008d202) cell_vitu2_dropdown_list_char_pane

0x8d3d,	// (0x0008d223) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x8d3d,	// (0x0008d223) cell_vitu2_dropdown_list_ctrl_pane

0xd2ad,	// (0x00091793) cell_vitu2_dropdown_list_char_pane_g1

0xd2b6,	// (0x0009179c) cell_vitu2_dropdown_list_char_pane_g2

0xd2bf,	// (0x000917a5) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf99a,	// (0x00093e80) cell_vitu2_dropdown_list_char_pane_g

0x8d67,	// (0x0008d24d) cell_vitu2_dropdown_list_char_pane_t1

0x8d75,	// (0x0008d25b) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x8d75,	// (0x0008d25b) cell_vitu2_dropdown_list_ctrl_pane_g1

0x8d85,	// (0x0008d26b) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x8d85,	// (0x0008d26b) cell_vitu2_dropdown_list_ctrl_pane_g2

0x8d96,	// (0x0008d27c) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x8d96,	// (0x0008d27c) cell_vitu2_dropdown_list_ctrl_pane_g3

0x8da6,	// (0x0008d28c) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x8da6,	// (0x0008d28c) cell_vitu2_dropdown_list_ctrl_pane_g4

0x25d8,	// (0x00086abe) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x25d8,	// (0x00086abe) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf9a1,	// (0x00093e87) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf9a1,	// (0x00093e87) cell_vitu2_dropdown_list_ctrl_pane_g

0x8dc2,	// (0x0008d2a8) aid_size_cell_gallery2_ParamLimits

0x8dc2,	// (0x0008d2a8) aid_size_cell_gallery2

0x8de0,	// (0x0008d2c6) grid_gallery2_pane_ParamLimits

0x8de0,	// (0x0008d2c6) grid_gallery2_pane

0x8dfa,	// (0x0008d2e0) scroll_pane_cp029_ParamLimits

0x8dfa,	// (0x0008d2e0) scroll_pane_cp029

0x8e0b,	// (0x0008d2f1) cell_gallery2_pane_ParamLimits

0x8e0b,	// (0x0008d2f1) cell_gallery2_pane

0xd2c8,	// (0x000917ae) cell_gallery2_pane_g2

0x8e6a,	// (0x0008d350) cell_gallery2_pane_g3

0xd2d0,	// (0x000917b6) cell_gallery2_pane_g4

0xd2d8,	// (0x000917be) cell_gallery2_pane_g5

0x4432,	// (0x00088918) grid_highlight_pane_cp10

0x8459,	// (0x0008c93f) popup_vitu2_match_list_window_ParamLimits

0x846e,	// (0x0008c954) popup_vitu2_query_window_ParamLimits

0x846e,	// (0x0008c954) popup_vitu2_query_window

0xbb27,	// (0x0009000d) bg_vitu2_candi_button_pane

0xd2ad,	// (0x00091793) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd2b6,	// (0x0009179c) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd2bf,	// (0x000917a5) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x8e72,	// (0x0008d358) bg_button_pane_cp015

0x8e84,	// (0x0008d36a) bg_button_pane_cp016

0x8e97,	// (0x0008d37d) bg_button_pane_cp017

0x1789,	// (0x00085c6f) bg_popup_sub_pane_cp22

0xd2e0,	// (0x000917c6) popup_vitu2_query_window_g1

0x8eda,	// (0x0008d3c0) popup_vitu2_query_window_g2

0x0002,

0xf9ac,	// (0x00093e92) popup_vitu2_query_window_g

0x8ef9,	// (0x0008d3df) popup_vitu2_query_window_t1_ParamLimits

0x8ef9,	// (0x0008d3df) popup_vitu2_query_window_t1

0x8f2e,	// (0x0008d414) popup_vitu2_query_window_t2_ParamLimits

0x8f2e,	// (0x0008d414) popup_vitu2_query_window_t2

0x8f40,	// (0x0008d426) popup_vitu2_query_window_t3_ParamLimits

0x8f40,	// (0x0008d426) popup_vitu2_query_window_t3

0x8f68,	// (0x0008d44e) popup_vitu2_query_window_t4_ParamLimits

0x8f68,	// (0x0008d44e) popup_vitu2_query_window_t4

0x8f89,	// (0x0008d46f) popup_vitu2_query_window_t5_ParamLimits

0x8f89,	// (0x0008d46f) popup_vitu2_query_window_t5

0x0006,

0xf9b3,	// (0x00093e99) popup_vitu2_query_window_t_ParamLimits

0xf9b3,	// (0x00093e99) popup_vitu2_query_window_t

0xd161,	// (0x00091647) main_cset_text_pane

0x88e0,	// (0x0008cdc6) aid_area_touch_slider_ParamLimits

0x88fc,	// (0x0008cde2) cset_slider_pane_ParamLimits

0x891f,	// (0x0008ce05) main_cset_slider_pane_g1_ParamLimits

0x8934,	// (0x0008ce1a) main_cset_slider_pane_g2_ParamLimits

0xd182,	// (0x00091668) main_cset_slider_pane_g3_ParamLimits

0xd182,	// (0x00091668) main_cset_slider_pane_g3

0x8949,	// (0x0008ce2f) main_cset_slider_pane_g4_ParamLimits

0x8949,	// (0x0008ce2f) main_cset_slider_pane_g4

0x8958,	// (0x0008ce3e) main_cset_slider_pane_g5_ParamLimits

0x8958,	// (0x0008ce3e) main_cset_slider_pane_g5

0x8964,	// (0x0008ce4a) main_cset_slider_pane_g6_ParamLimits

0x8964,	// (0x0008ce4a) main_cset_slider_pane_g6

0xf910,	// (0x00093df6) main_cset_slider_pane_g_ParamLimits

0xd1ca,	// (0x000916b0) main_cset_slider_pane_t1_ParamLimits

0x89d8,	// (0x0008cebe) main_cset_slider_pane_t2_ParamLimits

0x89f2,	// (0x0008ced8) main_cset_slider_pane_t3_ParamLimits

0x8a0c,	// (0x0008cef2) main_cset_slider_pane_t4_ParamLimits

0x8a26,	// (0x0008cf0c) main_cset_slider_pane_t5_ParamLimits

0x8a40,	// (0x0008cf26) main_cset_slider_pane_t6_ParamLimits

0x8a55,	// (0x0008cf3b) main_cset_slider_pane_t7_ParamLimits

0x8a7f,	// (0x0008cf65) main_cset_slider_pane_t8_ParamLimits

0x8a7f,	// (0x0008cf65) main_cset_slider_pane_t8

0x8aa7,	// (0x0008cf8d) main_cset_slider_pane_t9_ParamLimits

0x8aa7,	// (0x0008cf8d) main_cset_slider_pane_t9

0x8acf,	// (0x0008cfb5) main_cset_slider_pane_t10_ParamLimits

0x8acf,	// (0x0008cfb5) main_cset_slider_pane_t10

0x8af7,	// (0x0008cfdd) main_cset_slider_pane_t11_ParamLimits

0x8af7,	// (0x0008cfdd) main_cset_slider_pane_t11

0x8b1f,	// (0x0008d005) main_cset_slider_pane_t12_ParamLimits

0x8b1f,	// (0x0008d005) main_cset_slider_pane_t12

0x8b3c,	// (0x0008d022) main_cset_slider_pane_t13_ParamLimits

0x8b3c,	// (0x0008d022) main_cset_slider_pane_t13

0xf935,	// (0x00093e1b) main_cset_slider_pane_t_ParamLimits

0x08cb,	// (0x00084db1) bg_popup_sub_pane_cp011

0xd2ec,	// (0x000917d2) main_cset_text_pane_g1

0xd2f4,	// (0x000917da) main_cset_text_pane_t1

0xd302,	// (0x000917e8) main_cset_text_pane_t2

0xd310,	// (0x000917f6) main_cset_text_pane_t3

0xd31e,	// (0x00091804) main_cset_text_pane_t4

0xd32c,	// (0x00091812) main_cset_text_pane_t5

0xd33a,	// (0x00091820) main_cset_text_pane_t6

0xd348,	// (0x0009182e) main_cset_text_pane_t7

0x0006,

0xf9c2,	// (0x00093ea8) main_cset_text_pane_t

0xbb27,	// (0x0009000d) main_cam4_burst_pane

0xbb27,	// (0x0009000d) main_cam5_pane

0x8819,	// (0x0008ccff) bg_button_pane_cp019

0x8822,	// (0x0008cd08) bg_button_pane_cp020

0xd18e,	// (0x00091674) main_cset_slider_pane_g7_ParamLimits

0xd18e,	// (0x00091674) main_cset_slider_pane_g7

0xd19a,	// (0x00091680) main_cset_slider_pane_g8_ParamLimits

0xd19a,	// (0x00091680) main_cset_slider_pane_g8

0x8978,	// (0x0008ce5e) main_cset_slider_pane_g9_ParamLimits

0x8978,	// (0x0008ce5e) main_cset_slider_pane_g9

0x8984,	// (0x0008ce6a) main_cset_slider_pane_g10_ParamLimits

0x8984,	// (0x0008ce6a) main_cset_slider_pane_g10

0x8990,	// (0x0008ce76) main_cset_slider_pane_g11_ParamLimits

0x8990,	// (0x0008ce76) main_cset_slider_pane_g11

0x899c,	// (0x0008ce82) main_cset_slider_pane_g12_ParamLimits

0x899c,	// (0x0008ce82) main_cset_slider_pane_g12

0x89a8,	// (0x0008ce8e) main_cset_slider_pane_g13_ParamLimits

0x89a8,	// (0x0008ce8e) main_cset_slider_pane_g13

0x89b4,	// (0x0008ce9a) main_cset_slider_pane_g14_ParamLimits

0x89b4,	// (0x0008ce9a) main_cset_slider_pane_g14

0x89c0,	// (0x0008cea6) main_cset_slider_pane_g15_ParamLimits

0x89c0,	// (0x0008cea6) main_cset_slider_pane_g15

0xd1f2,	// (0x000916d8) main_cset_slider_pane_t14_ParamLimits

0xd1f2,	// (0x000916d8) main_cset_slider_pane_t14

0xd22b,	// (0x00091711) main_cset_slider_pane_t15_ParamLimits

0xd22b,	// (0x00091711) main_cset_slider_pane_t15

0x9000,	// (0x0008d4e6) aid_cam4_burst_size_cell_ParamLimits

0x9000,	// (0x0008d4e6) aid_cam4_burst_size_cell

0x9020,	// (0x0008d506) grid_cam4_burst_pane_ParamLimits

0x9020,	// (0x0008d506) grid_cam4_burst_pane

0x9058,	// (0x0008d53e) linegrid_cam4_burst_pane_ParamLimits

0x9058,	// (0x0008d53e) linegrid_cam4_burst_pane

0xd356,	// (0x0009183c) scroll_pane_cp30_ParamLimits

0xd356,	// (0x0009183c) scroll_pane_cp30

0x907c,	// (0x0008d562) cell_cam4_burst_pane_ParamLimits

0x907c,	// (0x0008d562) cell_cam4_burst_pane

0xd362,	// (0x00091848) linegrid_cam4_burst_pane_g1_ParamLimits

0xd362,	// (0x00091848) linegrid_cam4_burst_pane_g1

0x90c9,	// (0x0008d5af) linegrid_cam4_burst_pane_g2_ParamLimits

0x90c9,	// (0x0008d5af) linegrid_cam4_burst_pane_g2

0xd36f,	// (0x00091855) linegrid_cam4_burst_pane_g3_ParamLimits

0xd36f,	// (0x00091855) linegrid_cam4_burst_pane_g3

0x0002,

0xf9d1,	// (0x00093eb7) linegrid_cam4_burst_pane_g_ParamLimits

0xf9d1,	// (0x00093eb7) linegrid_cam4_burst_pane_g

0x90da,	// (0x0008d5c0) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x90da,	// (0x0008d5c0) linegrid_cam4_burst_pane_g3_copy1

0xd37c,	// (0x00091862) linegrid_cam4_burst_pane_g4_ParamLimits

0xd37c,	// (0x00091862) linegrid_cam4_burst_pane_g4

0x90f4,	// (0x0008d5da) linegrid_cam4_burst_pane_g5_ParamLimits

0x90f4,	// (0x0008d5da) linegrid_cam4_burst_pane_g5

0x9105,	// (0x0008d5eb) linegrid_cam4_burst_pane_g6_ParamLimits

0x9105,	// (0x0008d5eb) linegrid_cam4_burst_pane_g6

0xd389,	// (0x0009186f) linegrid_cam4_burst_pane_g7_ParamLimits

0xd389,	// (0x0009186f) linegrid_cam4_burst_pane_g7

0x911c,	// (0x0008d602) cell_cam4_burst_pane_g1

0xd3a2,	// (0x00091888) main_cam5_pane_t1_ParamLimits

0xd3a2,	// (0x00091888) main_cam5_pane_t1

0xd3b4,	// (0x0009189a) main_cam5_pane_t2_ParamLimits

0xd3b4,	// (0x0009189a) main_cam5_pane_t2

0xd3c6,	// (0x000918ac) main_cam5_pane_t3_ParamLimits

0xd3c6,	// (0x000918ac) main_cam5_pane_t3

0xd3d8,	// (0x000918be) main_cam5_pane_t4_ParamLimits

0xd3d8,	// (0x000918be) main_cam5_pane_t4

0xd3f0,	// (0x000918d6) main_cam5_pane_t5_ParamLimits

0xd3f0,	// (0x000918d6) main_cam5_pane_t5

0xd404,	// (0x000918ea) main_cam5_pane_t6_ParamLimits

0xd404,	// (0x000918ea) main_cam5_pane_t6

0xd418,	// (0x000918fe) main_cam5_pane_t7_ParamLimits

0xd418,	// (0x000918fe) main_cam5_pane_t7

0xd42a,	// (0x00091910) main_cam5_pane_t8_ParamLimits

0xd42a,	// (0x00091910) main_cam5_pane_t8

0xd446,	// (0x0009192c) main_cam5_pane_t9_ParamLimits

0xd446,	// (0x0009192c) main_cam5_pane_t9

0xd458,	// (0x0009193e) main_cam5_pane_t10_ParamLimits

0xd458,	// (0x0009193e) main_cam5_pane_t10

0xd46a,	// (0x00091950) main_cam5_pane_t11_ParamLimits

0xd46a,	// (0x00091950) main_cam5_pane_t11

0xd47c,	// (0x00091962) main_cam5_pane_t12_ParamLimits

0xd47c,	// (0x00091962) main_cam5_pane_t12

0xd491,	// (0x00091977) main_cam5_pane_t13_ParamLimits

0xd491,	// (0x00091977) main_cam5_pane_t13

0x000c,

0xf9dd,	// (0x00093ec3) main_cam5_pane_t_ParamLimits

0xf9dd,	// (0x00093ec3) main_cam5_pane_t

0x370d,	// (0x00087bf3) popup_scut_keymap_window_ParamLimits

0x370d,	// (0x00087bf3) popup_scut_keymap_window

0x912f,	// (0x0008d615) aid_size_cell_brow_shortcut

0x4432,	// (0x00088918) bg_popup_window_pane_cp010

0x913b,	// (0x0008d621) grid_scut_pane

0x9147,	// (0x0008d62d) cell_scut_pane_ParamLimits

0x9147,	// (0x0008d62d) cell_scut_pane

0x915e,	// (0x0008d644) cell_scut_pane_g1

0xd4ae,	// (0x00091994) cell_scut_pane_t1

0xd4bd,	// (0x000919a3) cell_scut_pane_t2

0x9167,	// (0x0008d64d) cell_scut_pane_t3

0x0002,

0xf9f8,	// (0x00093ede) cell_scut_pane_t

0x70b2,	// (0x0008b598) main_mup3_pane_g8_ParamLimits

0x70b2,	// (0x0008b598) main_mup3_pane_g8

0x8365,	// (0x0008c84b) area_vitu2_query_pane_ParamLimits

0x8365,	// (0x0008c84b) area_vitu2_query_pane

0x8eaa,	// (0x0008d390) input_focus_pane_cp08

0xd4cc,	// (0x000919b2) area_vitu2_query_pane_g1

0x9175,	// (0x0008d65b) area_vitu2_query_pane_g2

0x0001,

0xf9ff,	// (0x00093ee5) area_vitu2_query_pane_g

0x9186,	// (0x0008d66c) area_vitu2_query_pane_t1_ParamLimits

0x9186,	// (0x0008d66c) area_vitu2_query_pane_t1

0x919a,	// (0x0008d680) area_vitu2_query_pane_t2_ParamLimits

0x919a,	// (0x0008d680) area_vitu2_query_pane_t2

0x91ae,	// (0x0008d694) area_vitu2_query_pane_t3_ParamLimits

0x91ae,	// (0x0008d694) area_vitu2_query_pane_t3

0xd4d8,	// (0x000919be) area_vitu2_query_pane_t4_ParamLimits

0xd4d8,	// (0x000919be) area_vitu2_query_pane_t4

0xd500,	// (0x000919e6) area_vitu2_query_pane_t5_ParamLimits

0xd500,	// (0x000919e6) area_vitu2_query_pane_t5

0xd528,	// (0x00091a0e) area_vitu2_query_pane_t6_ParamLimits

0xd528,	// (0x00091a0e) area_vitu2_query_pane_t6

0x0006,

0xfa04,	// (0x00093eea) area_vitu2_query_pane_t_ParamLimits

0xfa04,	// (0x00093eea) area_vitu2_query_pane_t

0x91d6,	// (0x0008d6bc) bg_button_pane_cp018

0x91e4,	// (0x0008d6ca) bg_button_pane_cp021

0x91f0,	// (0x0008d6d6) bg_button_pane_cp022

0x9201,	// (0x0008d6e7) input_focus_pane_cp09

0xc159,	// (0x0009063f) aid_size_touch_mv_arrow_left

0xc184,	// (0x0009066a) aid_size_touch_mv_arrow_right

0xd1a6,	// (0x0009168c) main_cset_slider_pane_g16_ParamLimits

0xd1a6,	// (0x0009168c) main_cset_slider_pane_g16

0xd1b2,	// (0x00091698) main_cset_slider_pane_g17_ParamLimits

0xd1b2,	// (0x00091698) main_cset_slider_pane_g17

0x911c,	// (0x0008d602) cell_cam4_burst_pane_g1_ParamLimits

0x08cb,	// (0x00084db1) compa_mode_pane

0x8bc6,	// (0x0008d0ac) popup_vtel_slider_window_g3_ParamLimits

0x8bc6,	// (0x0008d0ac) popup_vtel_slider_window_g3

0x8bdd,	// (0x0008d0c3) popup_vtel_slider_window_g4_ParamLimits

0x8bdd,	// (0x0008d0c3) popup_vtel_slider_window_g4

0x8bf4,	// (0x0008d0da) popup_vtel_slider_window_t1_ParamLimits

0x8bf4,	// (0x0008d0da) popup_vtel_slider_window_t1

0xbb27,	// (0x0009000d) main_cl_pane

0xce22,	// (0x00091308) popup_imed_adjust2_window_ParamLimits

0x1789,	// (0x00085c6f) bg_tb_trans_pane_cp05_ParamLimits

0x20b9,	// (0x0008659f) popup_imed_adjust2_window_g1_ParamLimits

0x20c8,	// (0x000865ae) popup_imed_adjust2_window_g2_ParamLimits

0x20c8,	// (0x000865ae) popup_imed_adjust2_window_g2

0x20d4,	// (0x000865ba) popup_imed_adjust2_window_g3_ParamLimits

0x20d4,	// (0x000865ba) popup_imed_adjust2_window_g3

0x0002,

0xf77a,	// (0x00093c60) popup_imed_adjust2_window_g_ParamLimits

0xf77a,	// (0x00093c60) popup_imed_adjust2_window_g

0x20e0,	// (0x000865c6) popup_imed_adjust2_window_t1_ParamLimits

0x20f8,	// (0x000865de) slider_imed_adjust_pane_ParamLimits

0x210c,	// (0x000865f2) slider_imed_adjust_pane_g1_ParamLimits

0x211c,	// (0x00086602) slider_imed_adjust_pane_g2_ParamLimits

0x212c,	// (0x00086612) slider_imed_adjust_pane_g3_ParamLimits

0x213d,	// (0x00086623) slider_imed_adjust_pane_g4_ParamLimits

0xf781,	// (0x00093c67) slider_imed_adjust_pane_g_ParamLimits

0x8101,	// (0x0008c5e7) aid_touch_area_cam4_ParamLimits

0x8101,	// (0x0008c5e7) aid_touch_area_cam4

0xee87,	// (0x0009336d) battery_pane_cp01

0x81d0,	// (0x0008c6b6) main_camera4_pane_g6_ParamLimits

0x81d0,	// (0x0008c6b6) main_camera4_pane_g6

0x81fa,	// (0x0008c6e0) main_camera4_pane_t2_ParamLimits

0x81fa,	// (0x0008c6e0) main_camera4_pane_t2

0x0001,

0xf883,	// (0x00093d69) main_camera4_pane_t_ParamLimits

0xf883,	// (0x00093d69) main_camera4_pane_t

0x822f,	// (0x0008c715) aid_touch_area_vid4_ParamLimits

0x822f,	// (0x0008c715) aid_touch_area_vid4

0x8283,	// (0x0008c769) main_video4_pane_g5_ParamLimits

0x8283,	// (0x0008c769) main_video4_pane_g5

0x82a8,	// (0x0008c78e) vid4_progress_pane_ParamLimits

0x82a8,	// (0x0008c78e) vid4_progress_pane

0xd1be,	// (0x000916a4) main_cset_slider_pane_g18_ParamLimits

0xd1be,	// (0x000916a4) main_cset_slider_pane_g18

0xd396,	// (0x0009187c) cell_cam4_burst_pane_g2_ParamLimits

0xd396,	// (0x0009187c) cell_cam4_burst_pane_g2

0x0001,

0xf9d8,	// (0x00093ebe) cell_cam4_burst_pane_g_ParamLimits

0xf9d8,	// (0x00093ebe) cell_cam4_burst_pane_g

0x3b60,	// (0x00088046) bg_cl_pane_ParamLimits

0x3b60,	// (0x00088046) bg_cl_pane

0x9212,	// (0x0008d6f8) cl_header_pane_ParamLimits

0x9212,	// (0x0008d6f8) cl_header_pane

0x9226,	// (0x0008d70c) cl_listscroll_pane_ParamLimits

0x9226,	// (0x0008d70c) cl_listscroll_pane

0xd574,	// (0x00091a5a) bg_cl_pane_g1

0xd57c,	// (0x00091a62) bg_cl_pane_g2

0xd584,	// (0x00091a6a) bg_cl_pane_g3

0xd58c,	// (0x00091a72) bg_cl_pane_g4

0xd594,	// (0x00091a7a) bg_cl_pane_g5

0xd59c,	// (0x00091a82) bg_cl_pane_g6

0xd5a4,	// (0x00091a8a) bg_cl_pane_g7

0xd5ac,	// (0x00091a92) bg_cl_pane_g8

0xd5b4,	// (0x00091a9a) bg_cl_pane_g9

0x0008,

0xfa13,	// (0x00093ef9) bg_cl_pane_g

0x9236,	// (0x0008d71c) aid_height_cl_leading_ParamLimits

0x9236,	// (0x0008d71c) aid_height_cl_leading

0x9242,	// (0x0008d728) aid_height_cl_text_ParamLimits

0x9242,	// (0x0008d728) aid_height_cl_text

0x3931,	// (0x00087e17) bg_cl_header_pane_ParamLimits

0x3931,	// (0x00087e17) bg_cl_header_pane

0x9261,	// (0x0008d747) cl_header_pane_g1_ParamLimits

0x9261,	// (0x0008d747) cl_header_pane_g1

0x9277,	// (0x0008d75d) cl_header_pane_t1_ParamLimits

0x9277,	// (0x0008d75d) cl_header_pane_t1

0xd5bc,	// (0x00091aa2) cl_list_pane

0xd179,	// (0x0009165f) hc_scroll_pane_cp01

0x4cc6,	// (0x000891ac) bg_cl_header_pane_g1

0x249b,	// (0x00086981) bg_cl_header_pane_g2

0x4ce6,	// (0x000891cc) bg_cl_header_pane_g3

0x24ab,	// (0x00086991) bg_cl_header_pane_g4

0x24a3,	// (0x00086989) bg_cl_header_pane_g5

0xd2a5,	// (0x0009178b) bg_cl_header_pane_g6

0x24c3,	// (0x000869a9) bg_cl_header_pane_g7

0x24cb,	// (0x000869b1) bg_cl_header_pane_g8

0x24bb,	// (0x000869a1) bg_cl_header_pane_g9

0x0008,

0xfa26,	// (0x00093f0c) bg_cl_header_pane_g

0x9290,	// (0x0008d776) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x9290,	// (0x0008d776) hc_cl_list_double_graphic_heading_pane

0x92a1,	// (0x0008d787) hc_cl_list_single_graphic_pane_ParamLimits

0x92a1,	// (0x0008d787) hc_cl_list_single_graphic_pane

0x92ba,	// (0x0008d7a0) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x92ba,	// (0x0008d7a0) hc_cl_list_single_graphic_pane_g1

0x92c6,	// (0x0008d7ac) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x92c6,	// (0x0008d7ac) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfa39,	// (0x00093f1f) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfa39,	// (0x00093f1f) hc_cl_list_single_graphic_pane_g

0x92da,	// (0x0008d7c0) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x92da,	// (0x0008d7c0) hc_cl_list_single_graphic_pane_t1

0x92ba,	// (0x0008d7a0) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x92ba,	// (0x0008d7a0) hc_cl_list_double_graphic_heading_pane_g1

0x92ef,	// (0x0008d7d5) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x92ef,	// (0x0008d7d5) hc_cl_list_double_graphic_heading_pane_g2

0x9303,	// (0x0008d7e9) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x9303,	// (0x0008d7e9) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfa3e,	// (0x00093f24) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfa3e,	// (0x00093f24) hc_cl_list_double_graphic_heading_pane_g

0x9317,	// (0x0008d7fd) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x9317,	// (0x0008d7fd) hc_cl_list_double_graphic_heading_pane_t1

0x932c,	// (0x0008d812) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x932c,	// (0x0008d812) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfa45,	// (0x00093f2b) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfa45,	// (0x00093f2b) hc_cl_list_double_graphic_heading_pane_t

0xefe9,	// (0x000934cf) vid4_progress_pane_g1

0xeff9,	// (0x000934df) vid4_progress_pane_g2

0x9341,	// (0x0008d827) vid4_progress_pane_g3

0xf009,	// (0x000934ef) vid4_progress_pane_g4

0x0004,

0xfa4a,	// (0x00093f30) vid4_progress_pane_g

0x9353,	// (0x0008d839) vid4_progress_pane_t1

0xf021,	// (0x00093507) vid4_progress_pane_t2

0x0002,

0xfa55,	// (0x00093f3b) vid4_progress_pane_t

0x9369,	// (0x0008d84f) wait_bar_pane_cp07

0x19af,	// (0x00085e95) blid_firmament_pane_ParamLimits

0x19f2,	// (0x00085ed8) popup_blid_sat_info2_window_g1

0x1a16,	// (0x00085efc) popup_blid_sat_info2_window_t3

0x1a24,	// (0x00085f0a) popup_blid_sat_info2_window_t4

0x1a32,	// (0x00085f18) popup_blid_sat_info2_window_t5

0x1a40,	// (0x00085f26) popup_blid_sat_info2_window_t6

0x1a50,	// (0x00085f36) popup_blid_sat_info2_window_t7

0x1a5e,	// (0x00085f44) popup_blid_sat_info2_window_t8

0x1a6c,	// (0x00085f52) popup_blid_sat_info2_window_t9

0x1a7a,	// (0x00085f60) popup_blid_sat_info2_window_t10

0x1b3b,	// (0x00086021) aid_firma_cardinal_ParamLimits

0x1b4f,	// (0x00086035) blid_firmament_pane_t1_ParamLimits

0x1b66,	// (0x0008604c) blid_firmament_pane_t2_ParamLimits

0x1b7d,	// (0x00086063) blid_firmament_pane_t3_ParamLimits

0x1b94,	// (0x0008607a) blid_firmament_pane_t4_ParamLimits

0xf673,	// (0x00093b59) blid_firmament_pane_t_ParamLimits

0x1bab,	// (0x00086091) blid_sat_info_pane_ParamLimits

0xbb19,	// (0x0008ffff) main_cam_set_pane_ParamLimits

0x788f,	// (0x0008bd75) aid_size_cell_colour_35_ParamLimits

0x78af,	// (0x0008bd95) aid_size_cell_colour_112_ParamLimits

0x78cf,	// (0x0008bdb5) aid_size_cell_effect_ParamLimits

0x1789,	// (0x00085c6f) bg_tb_trans_pane_cp02_ParamLimits

0xbd11,	// (0x000901f7) heading_imed_pane_ParamLimits

0x78ef,	// (0x0008bdd5) listscroll_imed_pane_ParamLimits

0x0e58,	// (0x0008533e) popup_call2_audio_first_window_g5_ParamLimits

0x0e58,	// (0x0008533e) popup_call2_audio_first_window_g5

0x7d1b,	// (0x0008c201) aid_size_touch_image3_arrow_left_ParamLimits

0x7d1b,	// (0x0008c201) aid_size_touch_image3_arrow_left

0x7d47,	// (0x0008c22d) aid_size_touch_image3_arrow_right_ParamLimits

0x7d47,	// (0x0008c22d) aid_size_touch_image3_arrow_right

0xf036,	// (0x0009351c) vid4_progress_pane_t3

0x7a92,	// (0x0008bf78) main_hwr_training_symbol_option_pane_ParamLimits

0x7a92,	// (0x0008bf78) main_hwr_training_symbol_option_pane

0x22e9,	// (0x000867cf) popup_hwr_training_preview_window_ParamLimits

0x22e9,	// (0x000867cf) popup_hwr_training_preview_window

0x7ab2,	// (0x0008bf98) hwr_training_navi_pane_g5_ParamLimits

0x7ab2,	// (0x0008bf98) hwr_training_navi_pane_g5

0x2489,	// (0x0008696f) popup_char_count_window

0xbb19,	// (0x0008ffff) bg_popup_sub_pane_cp20_ParamLimits

0x8d04,	// (0x0008d1ea) list_vitu2_match_list_pane_ParamLimits

0x8d10,	// (0x0008d1f6) vitu2_page_scroll_pane_ParamLimits

0x8d10,	// (0x0008d1f6) vitu2_page_scroll_pane

0xd5e7,	// (0x00091acd) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd5e7,	// (0x00091acd) list_single_hwr_training_symbol_option_pane

0xd5fa,	// (0x00091ae0) list_single_hwr_training_symbol_option_pane_g1

0xd602,	// (0x00091ae8) list_single_hwr_training_symbol_option_pane_t1

0xd610,	// (0x00091af6) bg_button_pane_cp023

0xd619,	// (0x00091aff) bg_button_pane_cp024

0xd64c,	// (0x00091b32) vitu2_page_scroll_pane_g1

0xd654,	// (0x00091b3a) vitu2_page_scroll_pane_g2

0x0001,

0xfa5c,	// (0x00093f42) vitu2_page_scroll_pane_g

0xd65c,	// (0x00091b42) vitu2_page_scroll_pane_t1

0x1bda,	// (0x000860c0) popup_char_count_window_g1

0xd66b,	// (0x00091b51) popup_char_count_window_g2

0x2594,	// (0x00086a7a) popup_char_count_window_g3

0x0002,

0xfa61,	// (0x00093f47) popup_char_count_window_g

0xd674,	// (0x00091b5a) popup_char_count_window_t1

0xbb27,	// (0x0009000d) main_vded2_pane

0x20a5,	// (0x0008658b) aid_size_cell_imed_line

0x20af,	// (0x00086595) grid_imed_line_width_pane

0xef37,	// (0x0009341d) vid4_indicators_pane_g4

0xd682,	// (0x00091b68) cell_imed_line_width_pane_ParamLimits

0xd682,	// (0x00091b68) cell_imed_line_width_pane

0xd696,	// (0x00091b7c) cell_imed_line_width_pane_g1

0xd69f,	// (0x00091b85) cell_imed_line_width_pane_g2

0x0001,

0xfa68,	// (0x00093f4e) cell_imed_line_width_pane_g

0x938e,	// (0x0008d874) main_vded2_pane_g1_ParamLimits

0x938e,	// (0x0008d874) main_vded2_pane_g1

0x93a4,	// (0x0008d88a) main_vded2_pane_g2_ParamLimits

0x93a4,	// (0x0008d88a) main_vded2_pane_g2

0x0001,

0xfa6d,	// (0x00093f53) main_vded2_pane_g_ParamLimits

0xfa6d,	// (0x00093f53) main_vded2_pane_g

0x93b6,	// (0x0008d89c) vded2_slider_pane_ParamLimits

0x93b6,	// (0x0008d89c) vded2_slider_pane

0x93c6,	// (0x0008d8ac) aid_size_touch_vded2_end

0x93d0,	// (0x0008d8b6) aid_size_touch_vded2_playhead

0xd6a7,	// (0x00091b8d) aid_size_touch_vded2_start

0xd6af,	// (0x00091b95) vded2_slider_bg_pane

0xd6b8,	// (0x00091b9e) vded2_slider_pane_g1

0xd6c1,	// (0x00091ba7) vded2_slider_pane_g2

0x93da,	// (0x0008d8c0) vded2_slider_pane_g3

0x0002,

0xfa72,	// (0x00093f58) vded2_slider_pane_g

0xd6c9,	// (0x00091baf) vded2_slider_bg_pane_g1

0xd6d2,	// (0x00091bb8) vded2_slider_bg_pane_g2

0xd6db,	// (0x00091bc1) vded2_slider_bg_pane_g3

0x0002,

0xfa79,	// (0x00093f5f) vded2_slider_bg_pane_g

0x5e37,	// (0x0008a31d) aid_postcard_touch_down_pane_ParamLimits

0x5e37,	// (0x0008a31d) aid_postcard_touch_down_pane

0x5e4d,	// (0x0008a333) aid_postcard_touch_up_pane_ParamLimits

0x5e4d,	// (0x0008a333) aid_postcard_touch_up_pane

0xbb27,	// (0x0009000d) main_blid2_pane

0xce08,	// (0x000912ee) popup_blid2_search_window

0x08cb,	// (0x00084db1) blid2_gps_pane

0x08cb,	// (0x00084db1) blid2_navig_pane

0x08cb,	// (0x00084db1) blid2_search_pane

0x08cb,	// (0x00084db1) blid2_tripm_pane

0x93e5,	// (0x0008d8cb) blid2_search_pane_g1_ParamLimits

0x93e5,	// (0x0008d8cb) blid2_search_pane_g1

0x93fd,	// (0x0008d8e3) blid2_search_pane_t1_ParamLimits

0x93fd,	// (0x0008d8e3) blid2_search_pane_t1

0x940f,	// (0x0008d8f5) aid_size_cell_blid2_gps_ParamLimits

0x940f,	// (0x0008d8f5) aid_size_cell_blid2_gps

0x9427,	// (0x0008d90d) blid2_gps_pane_g1_ParamLimits

0x9427,	// (0x0008d90d) blid2_gps_pane_g1

0x943b,	// (0x0008d921) grid_blid2_satellite_pane_ParamLimits

0x943b,	// (0x0008d921) grid_blid2_satellite_pane

0x9455,	// (0x0008d93b) blid2_navig_pane_g1_ParamLimits

0x9455,	// (0x0008d93b) blid2_navig_pane_g1

0x9461,	// (0x0008d947) blid2_navig_pane_t1_ParamLimits

0x9461,	// (0x0008d947) blid2_navig_pane_t1

0x947c,	// (0x0008d962) blid2_navig_pane_t2_ParamLimits

0x947c,	// (0x0008d962) blid2_navig_pane_t2

0x0001,

0xfa80,	// (0x00093f66) blid2_navig_pane_t_ParamLimits

0xfa80,	// (0x00093f66) blid2_navig_pane_t

0x9497,	// (0x0008d97d) blid2_navig_ring_pane_ParamLimits

0x9497,	// (0x0008d97d) blid2_navig_ring_pane

0x94b0,	// (0x0008d996) blid2_speed_pane_ParamLimits

0x94b0,	// (0x0008d996) blid2_speed_pane

0x94bc,	// (0x0008d9a2) blid2_tripm_pane_g1_ParamLimits

0x94bc,	// (0x0008d9a2) blid2_tripm_pane_g1

0x94d7,	// (0x0008d9bd) blid2_tripm_pane_g2_ParamLimits

0x94d7,	// (0x0008d9bd) blid2_tripm_pane_g2

0x94eb,	// (0x0008d9d1) blid2_tripm_pane_g3_ParamLimits

0x94eb,	// (0x0008d9d1) blid2_tripm_pane_g3

0x94ff,	// (0x0008d9e5) blid2_tripm_pane_g4_ParamLimits

0x94ff,	// (0x0008d9e5) blid2_tripm_pane_g4

0x9513,	// (0x0008d9f9) blid2_tripm_pane_g5_ParamLimits

0x9513,	// (0x0008d9f9) blid2_tripm_pane_g5

0x0005,

0xfa85,	// (0x00093f6b) blid2_tripm_pane_g_ParamLimits

0xfa85,	// (0x00093f6b) blid2_tripm_pane_g

0x9539,	// (0x0008da1f) blid2_tripm_pane_t1_ParamLimits

0x9539,	// (0x0008da1f) blid2_tripm_pane_t1

0x9554,	// (0x0008da3a) blid2_tripm_pane_t2_ParamLimits

0x9554,	// (0x0008da3a) blid2_tripm_pane_t2

0x956d,	// (0x0008da53) blid2_tripm_pane_t3_ParamLimits

0x956d,	// (0x0008da53) blid2_tripm_pane_t3

0x0003,

0xfa92,	// (0x00093f78) blid2_tripm_pane_t_ParamLimits

0xfa92,	// (0x00093f78) blid2_tripm_pane_t

0x95b4,	// (0x0008da9a) cell_blid2_satellite_pane_ParamLimits

0x95b4,	// (0x0008da9a) cell_blid2_satellite_pane

0x95d2,	// (0x0008dab8) cell_blid2_satellite_pane_g1

0xd6e4,	// (0x00091bca) cell_blid2_satellite_pane_t1

0x461f,	// (0x00088b05) blid2_speed_pane_g1

0xd6f2,	// (0x00091bd8) blid2_speed_pane_t1

0xd700,	// (0x00091be6) blid2_speed_pane_t2

0x0001,

0xfa9b,	// (0x00093f81) blid2_speed_pane_t

0x461f,	// (0x00088b05) blid2_navig_ring_pane_g1

0x95db,	// (0x0008dac1) blid2_navig_ring_pane_g2

0x95e3,	// (0x0008dac9) blid2_navig_ring_pane_g3

0x95eb,	// (0x0008dad1) blid2_navig_ring_pane_g4

0x95f3,	// (0x0008dad9) blid2_navig_ring_pane_g5

0x0004,

0xfaa0,	// (0x00093f86) blid2_navig_ring_pane_g

0x08cb,	// (0x00084db1) bg_popup_window_pane_cp011

0xd70e,	// (0x00091bf4) popup_blid2_search_window_g1

0xd716,	// (0x00091bfc) popup_blid2_search_window_t1

0xd724,	// (0x00091c0a) popup_blid2_search_window_t2

0x0001,

0xfaab,	// (0x00093f91) popup_blid2_search_window_t

0x4b90,	// (0x00089076) main_browser_pane_g1

0x3b60,	// (0x00088046) main_browser_pane_ParamLimits

0xbb19,	// (0x0008ffff) bg_button_pane_cp011_ParamLimits

0x85b2,	// (0x0008ca98) cell_vitu2_function_pane_g1_ParamLimits

0x1789,	// (0x00085c6f) bg_popup_sub_pane_cp22_ParamLimits

0x8eaa,	// (0x0008d390) input_focus_pane_cp08_ParamLimits

0x8ec1,	// (0x0008d3a7) popup_vitu2_query_button_pane_ParamLimits

0x8ec1,	// (0x0008d3a7) popup_vitu2_query_button_pane

0x8ed2,	// (0x0008d3b8) popup_vitu2_query_input_button_pane

0xd2e0,	// (0x000917c6) popup_vitu2_query_window_g1_ParamLimits

0x8eda,	// (0x0008d3c0) popup_vitu2_query_window_g2_ParamLimits

0xf9ac,	// (0x00093e92) popup_vitu2_query_window_g_ParamLimits

0x08cb,	// (0x00084db1) bg_button_pane_cp026

0x95fb,	// (0x0008dae1) popup_vitu2_query_input_button_pane_g1

0x08cb,	// (0x00084db1) bg_button_pane_cp025

0xd732,	// (0x00091c18) popup_vitu2_query_button_pane_t1

0x6d80,	// (0x0008b266) main_mp3_pane_t6

0x6d8e,	// (0x0008b274) popup_slider_window_cp01

0xeea3,	// (0x00093389) cam4_battery_pane

0xeef6,	// (0x000933dc) cam4_battery_pane_cp02

0xefe1,	// (0x000934c7) cam4_battery_pane_cp01

0xefe1,	// (0x000934c7) cam4_battery_pane_cp03

0x1924,	// (0x00085e0a) cam4_battery_pane_g1

0x461f,	// (0x00088b05) cam4_battery_pane_g2

0x0001,

0xfab0,	// (0x00093f96) cam4_battery_pane_g

0x1a88,	// (0x00085f6e) popup_blid_sat_info2_window_t11

0xc159,	// (0x0009063f) aid_size_touch_mv_arrow_left_ParamLimits

0xc184,	// (0x0009066a) aid_size_touch_mv_arrow_right_ParamLimits

0xc1e2,	// (0x000906c8) navi_pane_g1_ParamLimits

0xc1ee,	// (0x000906d4) navi_pane_g2_ParamLimits

0xc21c,	// (0x00090702) navi_pane_g3_ParamLimits

0xf374,	// (0x0009385a) navi_pane_g_ParamLimits

0x5afd,	// (0x00089fe3) navi_pane_mv_t1_ParamLimits

0x78fb,	// (0x0008bde1) grid_imed_effect_pane_ParamLimits

0x4740,	// (0x00088c26) aid_placing_vt_slider_lsc

0x4750,	// (0x00088c36) aid_placing_vt_slider_prt

0x3931,	// (0x00087e17) bg_tb_trans_pane_cp01_ParamLimits

0x1d2f,	// (0x00086215) popup_image_details_window_g1_ParamLimits

0x1d42,	// (0x00086228) popup_image_details_window_g2_ParamLimits

0x1d57,	// (0x0008623d) popup_image_details_window_g3_ParamLimits

0x1d57,	// (0x0008623d) popup_image_details_window_g3

0xf6b3,	// (0x00093b99) popup_image_details_window_g_ParamLimits

0x1d6b,	// (0x00086251) popup_image_details_window_t1_ParamLimits

0x1d7d,	// (0x00086263) popup_image_details_window_t2_ParamLimits

0x1d96,	// (0x0008627c) popup_image_details_window_t3_ParamLimits

0x1daa,	// (0x00086290) popup_image_details_window_t4_ParamLimits

0x1dc5,	// (0x000862ab) popup_image_details_window_t5_ParamLimits

0xf6ba,	// (0x00093ba0) popup_image_details_window_t_ParamLimits

0x924e,	// (0x0008d734) cl_header_name_pane_ParamLimits

0x924e,	// (0x0008d734) cl_header_name_pane

0x9603,	// (0x0008dae9) cl_header_name_pane_t1_ParamLimits

0x9603,	// (0x0008dae9) cl_header_name_pane_t1

0x9624,	// (0x0008db0a) cl_header_name_pane_t2_ParamLimits

0x9624,	// (0x0008db0a) cl_header_name_pane_t2

0x9666,	// (0x0008db4c) cl_header_name_pane_t3_ParamLimits

0x9666,	// (0x0008db4c) cl_header_name_pane_t3

0x0002,

0xfab5,	// (0x00093f9b) cl_header_name_pane_t_ParamLimits

0xfab5,	// (0x00093f9b) cl_header_name_pane_t

0xc2ab,	// (0x00090791) navi_pane_mv_g2_ParamLimits

0x2463,	// (0x00086949) field_vitu2_entry_pane_g1_ParamLimits

0x246f,	// (0x00086955) field_vitu2_entry_pane_g2_ParamLimits

0x247b,	// (0x00086961) field_vitu2_entry_pane_g3_ParamLimits

0x247b,	// (0x00086961) field_vitu2_entry_pane_g3

0xf8b5,	// (0x00093d9b) field_vitu2_entry_pane_g_ParamLimits

0x852e,	// (0x0008ca14) cell_vitu2_itu_pane_g1_ParamLimits

0x8546,	// (0x0008ca2c) cell_vitu2_itu_pane_g2_ParamLimits

0x8546,	// (0x0008ca2c) cell_vitu2_itu_pane_g2

0x0001,

0xf8c1,	// (0x00093da7) cell_vitu2_itu_pane_g_ParamLimits

0xf8c1,	// (0x00093da7) cell_vitu2_itu_pane_g

0xbb19,	// (0x0008ffff) bg_vkb2_func_pane_cp05_ParamLimits

0xbb19,	// (0x0008ffff) bg_vkb2_func_pane_cp05

0xbb19,	// (0x0008ffff) bg_vkb2_func_pane_cp03

0xbb19,	// (0x0008ffff) bg_vkb2_func_pane_cp04

0xbb19,	// (0x0008ffff) bg_vkb2_func_pane_cp10_ParamLimits

0xbb19,	// (0x0008ffff) bg_vkb2_func_pane_cp10

0x91f0,	// (0x0008d6d6) bg_vkb2_func_pane_cp08

0x91d6,	// (0x0008d6bc) bg_vkb2_func_pane_cp06

0x91e4,	// (0x0008d6ca) bg_vkb2_func_pane_cp07

0xd622,	// (0x00091b08) bg_vkb2_func_pane_cp11_ParamLimits

0xd622,	// (0x00091b08) bg_vkb2_func_pane_cp11

0xd637,	// (0x00091b1d) bg_vkb2_func_pane_cp12_ParamLimits

0xd637,	// (0x00091b1d) bg_vkb2_func_pane_cp12

0x08cb,	// (0x00084db1) bg_vkb2_func_pane_cp09

0x249b,	// (0x00086981) bg_vkb2_func_pane_g1

0x4ce6,	// (0x000891cc) bg_vkb2_func_pane_g2

0x24a3,	// (0x00086989) bg_vkb2_func_pane_g3

0x24ab,	// (0x00086991) bg_vkb2_func_pane_g4

0xd2a5,	// (0x0009178b) bg_vkb2_func_pane_g5

0x24c3,	// (0x000869a9) bg_vkb2_func_pane_g6

0x24cb,	// (0x000869b1) bg_vkb2_func_pane_g7

0x24bb,	// (0x000869a1) bg_vkb2_func_pane_g8

0x4cc6,	// (0x000891ac) bg_vkb2_func_pane_g9

0x0008,

0xfabc,	// (0x00093fa2) bg_vkb2_func_pane_g

0x9527,	// (0x0008da0d) blid2_tripm_pane_g6_ParamLimits

0x9527,	// (0x0008da0d) blid2_tripm_pane_g6

0x23a7,	// (0x0008688d) mp4_progress_pane_g1

0x95a0,	// (0x0008da86) blid2_tripm_values_pane_ParamLimits

0x95a0,	// (0x0008da86) blid2_tripm_values_pane

0x9697,	// (0x0008db7d) blid2_tripm_values_pane_t1

0x96a5,	// (0x0008db8b) blid2_tripm_values_pane_t2

0x96b3,	// (0x0008db99) blid2_tripm_values_pane_t3

0x96c1,	// (0x0008dba7) blid2_tripm_values_pane_t4

0x96cf,	// (0x0008dbb5) blid2_tripm_values_pane_t5

0x96dd,	// (0x0008dbc3) blid2_tripm_values_pane_t6

0x96eb,	// (0x0008dbd1) blid2_tripm_values_pane_t7

0x96f9,	// (0x0008dbdf) blid2_tripm_values_pane_t8

0x9707,	// (0x0008dbed) blid2_tripm_values_pane_t9

0x0008,

0xfacf,	// (0x00093fb5) blid2_tripm_values_pane_t

0x478c,	// (0x00088c72) call_video_pane_t1_ParamLimits

0x47aa,	// (0x00088c90) call_video_pane_t2_ParamLimits

0xf222,	// (0x00093708) call_video_pane_t_ParamLimits

0x5db5,	// (0x0008a29b) msg_header_pane_g1_ParamLimits

0xc49e,	// (0x00090984) msg_header_pane_g2_ParamLimits

0xc49e,	// (0x00090984) msg_header_pane_g2

0x0001,

0xf417,	// (0x000938fd) msg_header_pane_g_ParamLimits

0xf417,	// (0x000938fd) msg_header_pane_g

0x3b60,	// (0x00088046) main_clock2_pane_ParamLimits

0x75fc,	// (0x0008bae2) grid_clock2_toolbar_pane_ParamLimits

0x75fc,	// (0x0008bae2) grid_clock2_toolbar_pane

0x75fc,	// (0x0008bae2) listscroll_clock2_pane_ParamLimits

0x75fc,	// (0x0008bae2) listscroll_clock2_pane

0x76e0,	// (0x0008bbc6) main_clock2_pane_t3_ParamLimits

0x76e0,	// (0x0008bbc6) main_clock2_pane_t3

0x7704,	// (0x0008bbea) main_clock2_pane_t4_ParamLimits

0x7704,	// (0x0008bbea) main_clock2_pane_t4

0xd740,	// (0x00091c26) cell_clock2_toolbar_pane

0xd748,	// (0x00091c2e) cell_clock2_toolbar_pane_cp01

0xd748,	// (0x00091c2e) cell_clock2_toolbar_pane_cp02

0xd750,	// (0x00091c36) cell_clock2_toolbar_pane_cp03

0xd758,	// (0x00091c3e) list_clock2_pane

0xc0de,	// (0x000905c4) scroll_pane_cp10

0xd760,	// (0x00091c46) list_single_clock2_pane_ParamLimits

0xd760,	// (0x00091c46) list_single_clock2_pane

0x4432,	// (0x00088918) list_highlight_pane_cp08

0xd76d,	// (0x00091c53) list_single_clock2_pane_t1

0xd77b,	// (0x00091c61) list_single_clock2_pane_t2

0x0001,

0xfae2,	// (0x00093fc8) list_single_clock2_pane_t

0x08cb,	// (0x00084db1) bg_button_pane_cp10

0xd789,	// (0x00091c6f) cell_clock2_toolbar_pane_g1

0x5dc3,	// (0x0008a2a9) aid_main_viewer_pane_g1_ParamLimits

0x5dc3,	// (0x0008a2a9) aid_main_viewer_pane_g1

0x5dd1,	// (0x0008a2b7) aid_main_viewer_pane_g2_ParamLimits

0x5dd1,	// (0x0008a2b7) aid_main_viewer_pane_g2

0x5ddf,	// (0x0008a2c5) aid_main_viewer_pane_g3_ParamLimits

0x5ddf,	// (0x0008a2c5) aid_main_viewer_pane_g3

0x5dee,	// (0x0008a2d4) aid_main_viewer_pane_g4_ParamLimits

0x5dee,	// (0x0008a2d4) aid_main_viewer_pane_g4

0x0003,

0xf428,	// (0x0009390e) aid_main_viewer_pane_g_ParamLimits

0xf428,	// (0x0009390e) aid_main_viewer_pane_g

0x6737,	// (0x0008ac1d) main_calc_pane_ParamLimits

0x675d,	// (0x0008ac43) main_dialer2_pane_ParamLimits

0xbb27,	// (0x0009000d) main_cam6_pane

0xbb27,	// (0x0009000d) main_vid6_pane

0x7608,	// (0x0008baee) listscroll_gen_pane_cp06_ParamLimits

0x7608,	// (0x0008baee) listscroll_gen_pane_cp06

0x7727,	// (0x0008bc0d) main_clock2_pane_t5_ParamLimits

0x7727,	// (0x0008bc0d) main_clock2_pane_t5

0x7785,	// (0x0008bc6b) aid_call2_pane_cp10_ParamLimits

0x7797,	// (0x0008bc7d) aid_call_pane_cp10_ParamLimits

0xc14d,	// (0x00090633) popup_clock_analogue_window_cp10_g1_ParamLimits

0xc14d,	// (0x00090633) popup_clock_analogue_window_cp10_g2_ParamLimits

0x77a9,	// (0x0008bc8f) popup_clock_analogue_window_cp10_g3_ParamLimits

0x77a9,	// (0x0008bc8f) popup_clock_analogue_window_cp10_g4_ParamLimits

0xc14d,	// (0x00090633) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf76f,	// (0x00093c55) popup_clock_analogue_window_cp10_g_ParamLimits

0x77bf,	// (0x0008bca5) popup_clock_analogue_window_cp10_t1_ParamLimits

0x7cc8,	// (0x0008c1ae) cell_dialer2_keypad_pane_g2_ParamLimits

0x7cc8,	// (0x0008c1ae) cell_dialer2_keypad_pane_g2

0x0001,

0xf854,	// (0x00093d3a) cell_dialer2_keypad_pane_g_ParamLimits

0xf854,	// (0x00093d3a) cell_dialer2_keypad_pane_g

0x7ce4,	// (0x0008c1ca) cell_dialer2_keypad_pane_t1

0x88d2,	// (0x0008cdb8) main_cset_text2_pane_ParamLimits

0x88d2,	// (0x0008cdb8) main_cset_text2_pane

0xd4cc,	// (0x000919b2) area_vitu2_query_pane_g1_ParamLimits

0x9175,	// (0x0008d65b) area_vitu2_query_pane_g2_ParamLimits

0xf9ff,	// (0x00093ee5) area_vitu2_query_pane_g_ParamLimits

0xd550,	// (0x00091a36) area_vitu2_query_pane_t7_ParamLimits

0xd550,	// (0x00091a36) area_vitu2_query_pane_t7

0x91d6,	// (0x0008d6bc) bg_button_pane_cp018_ParamLimits

0x91e4,	// (0x0008d6ca) bg_button_pane_cp021_ParamLimits

0x91f0,	// (0x0008d6d6) bg_button_pane_cp022_ParamLimits

0x91f0,	// (0x0008d6d6) bg_vkb2_func_pane_cp08_ParamLimits

0x91d6,	// (0x0008d6bc) bg_vkb2_func_pane_cp06_ParamLimits

0x91e4,	// (0x0008d6ca) bg_vkb2_func_pane_cp07_ParamLimits

0x9201,	// (0x0008d6e7) input_focus_pane_cp09_ParamLimits

0xf04c,	// (0x00093532) cam6_autofocus_pane_ParamLimits

0xf04c,	// (0x00093532) cam6_autofocus_pane

0x9715,	// (0x0008dbfb) cam6_image_uncrop_pane_ParamLimits

0x9715,	// (0x0008dbfb) cam6_image_uncrop_pane

0x9724,	// (0x0008dc0a) cam6_indi_pane_ParamLimits

0x9724,	// (0x0008dc0a) cam6_indi_pane

0x973a,	// (0x0008dc20) cam6_mode_pane_ParamLimits

0x973a,	// (0x0008dc20) cam6_mode_pane

0x974c,	// (0x0008dc32) cam6_timer_pane_ParamLimits

0x974c,	// (0x0008dc32) cam6_timer_pane

0x975c,	// (0x0008dc42) cam6_zoom_pane_ParamLimits

0x975c,	// (0x0008dc42) cam6_zoom_pane

0x9768,	// (0x0008dc4e) cam6_mode_pane_g1_ParamLimits

0x9768,	// (0x0008dc4e) cam6_mode_pane_g1

0x9778,	// (0x0008dc5e) cam6_mode_pane_g2_ParamLimits

0x9778,	// (0x0008dc5e) cam6_mode_pane_g2

0x9788,	// (0x0008dc6e) cam6_mode_pane_g3_ParamLimits

0x9788,	// (0x0008dc6e) cam6_mode_pane_g3

0x9798,	// (0x0008dc7e) cam6_mode_pane_g4_ParamLimits

0x9798,	// (0x0008dc7e) cam6_mode_pane_g4

0x0003,

0xfae7,	// (0x00093fcd) cam6_mode_pane_g_ParamLimits

0xfae7,	// (0x00093fcd) cam6_mode_pane_g

0x23f4,	// (0x000868da) bg_tb_trans_pane_cp08_ParamLimits

0x23f4,	// (0x000868da) bg_tb_trans_pane_cp08

0xd791,	// (0x00091c77) cam6_battery_pane_ParamLimits

0xd791,	// (0x00091c77) cam6_battery_pane

0xd7a7,	// (0x00091c8d) cam6_indi_pane_g1_ParamLimits

0xd7a7,	// (0x00091c8d) cam6_indi_pane_g1

0xd7b9,	// (0x00091c9f) cam6_indi_pane_g2_ParamLimits

0xd7b9,	// (0x00091c9f) cam6_indi_pane_g2

0xd7cb,	// (0x00091cb1) cam6_indi_pane_g3_ParamLimits

0xd7cb,	// (0x00091cb1) cam6_indi_pane_g3

0x0002,

0xfaf0,	// (0x00093fd6) cam6_indi_pane_g_ParamLimits

0xfaf0,	// (0x00093fd6) cam6_indi_pane_g

0xd7dd,	// (0x00091cc3) cam6_indi_pane_t1_ParamLimits

0xd7dd,	// (0x00091cc3) cam6_indi_pane_t1

0x97a8,	// (0x0008dc8e) cam6_autofocus_pane_g1

0x97b0,	// (0x0008dc96) cam6_autofocus_pane_g2

0x97b8,	// (0x0008dc9e) cam6_autofocus_pane_g3

0x97c0,	// (0x0008dca6) cam6_autofocus_pane_g4

0x0003,

0xfaf7,	// (0x00093fdd) cam6_autofocus_pane_g

0xd803,	// (0x00091ce9) cam6_timer_pane_g1

0xd80b,	// (0x00091cf1) cam6_timer_pane_t1

0xd819,	// (0x00091cff) cam6_zoom_cont_pane

0xd821,	// (0x00091d07) cam6_zoom_pane_g1

0xd829,	// (0x00091d0f) cam6_zoom_pane_g2

0x97c8,	// (0x0008dcae) cam6_zoom_pane_g3

0x0002,

0xfb00,	// (0x00093fe6) cam6_zoom_pane_g

0x461f,	// (0x00088b05) cam6_battery_pane_g1

0x461f,	// (0x00088b05) cam6_battery_pane_g2

0x0001,

0xf3d8,	// (0x000938be) cam6_battery_pane_g

0xd831,	// (0x00091d17) cam6_zoom_cont_pane_g1

0xd83a,	// (0x00091d20) cam6_zoom_cont_pane_g2

0xd843,	// (0x00091d29) cam6_zoom_cont_pane_g3

0x0002,

0xfb07,	// (0x00093fed) cam6_zoom_cont_pane_g

0x97e5,	// (0x0008dccb) cam6_mode_pane_cp_ParamLimits

0x97e5,	// (0x0008dccb) cam6_mode_pane_cp

0x97f7,	// (0x0008dcdd) cam6_zoom_pane_cp_ParamLimits

0x97f7,	// (0x0008dcdd) cam6_zoom_pane_cp

0x9803,	// (0x0008dce9) vid6_image_uncrop_cif_pane_ParamLimits

0x9803,	// (0x0008dce9) vid6_image_uncrop_cif_pane

0x9813,	// (0x0008dcf9) vid6_image_uncrop_nhd_pane_ParamLimits

0x9813,	// (0x0008dcf9) vid6_image_uncrop_nhd_pane

0x9822,	// (0x0008dd08) vid6_image_uncrop_vga_pane_ParamLimits

0x9822,	// (0x0008dd08) vid6_image_uncrop_vga_pane

0x9831,	// (0x0008dd17) vid6_image_uncrop_wvga_pane_ParamLimits

0x9831,	// (0x0008dd17) vid6_image_uncrop_wvga_pane

0x9840,	// (0x0008dd26) vid6_indi_pane_ParamLimits

0x9840,	// (0x0008dd26) vid6_indi_pane

0x23f4,	// (0x000868da) bg_tb_trans_pane_cp09_ParamLimits

0x23f4,	// (0x000868da) bg_tb_trans_pane_cp09

0xd85b,	// (0x00091d41) cam6_battery_pane_cp_ParamLimits

0xd85b,	// (0x00091d41) cam6_battery_pane_cp

0xd867,	// (0x00091d4d) vid6_indi_pane_g1_ParamLimits

0xd867,	// (0x00091d4d) vid6_indi_pane_g1

0xd879,	// (0x00091d5f) vid6_indi_pane_g2_ParamLimits

0xd879,	// (0x00091d5f) vid6_indi_pane_g2

0xd88b,	// (0x00091d71) vid6_indi_pane_g3_ParamLimits

0xd88b,	// (0x00091d71) vid6_indi_pane_g3

0xd8a0,	// (0x00091d86) vid6_indi_pane_g4_ParamLimits

0xd8a0,	// (0x00091d86) vid6_indi_pane_g4

0xd8b5,	// (0x00091d9b) vid6_indi_pane_g5_ParamLimits

0xd8b5,	// (0x00091d9b) vid6_indi_pane_g5

0x0004,

0xfb0e,	// (0x00093ff4) vid6_indi_pane_g_ParamLimits

0xfb0e,	// (0x00093ff4) vid6_indi_pane_g

0xd8cf,	// (0x00091db5) vid6_indi_pane_t1_ParamLimits

0xd8cf,	// (0x00091db5) vid6_indi_pane_t1

0xd8e5,	// (0x00091dcb) vid6_indi_pane_t2_ParamLimits

0xd8e5,	// (0x00091dcb) vid6_indi_pane_t2

0xd90d,	// (0x00091df3) vid6_indi_pane_t3_ParamLimits

0xd90d,	// (0x00091df3) vid6_indi_pane_t3

0xd935,	// (0x00091e1b) vid6_indi_pane_t4_ParamLimits

0xd935,	// (0x00091e1b) vid6_indi_pane_t4

0x0003,

0xfb19,	// (0x00093fff) vid6_indi_pane_t_ParamLimits

0xfb19,	// (0x00093fff) vid6_indi_pane_t

0xd959,	// (0x00091e3f) wait_bar_pane_cp08

0x9858,	// (0x0008dd3e) main_cset_text2_pane_t1_ParamLimits

0x9858,	// (0x0008dd3e) main_cset_text2_pane_t1

0x97d0,	// (0x0008dcb6) listscroll_gen_pane_cp06_t1_ParamLimits

0x97d0,	// (0x0008dcb6) listscroll_gen_pane_cp06_t1

0xbb27,	// (0x0009000d) main_cam6_set_pane

0x25d8,	// (0x00086abe) bg_tb_trans_pane_cp06_ParamLimits

0xeeab,	// (0x00093391) cam4_indicators_pane_g1_ParamLimits

0xeebc,	// (0x000933a2) cam4_indicators_pane_g2_ParamLimits

0xf891,	// (0x00093d77) cam4_indicators_pane_g_ParamLimits

0xeed4,	// (0x000933ba) cam4_indicators_pane_t1_ParamLimits

0xbb19,	// (0x0008ffff) bg_tb_trans_pane_cp07_ParamLimits

0xeefe,	// (0x000933e4) vid4_indicators_pane_g1_ParamLimits

0xef12,	// (0x000933f8) vid4_indicators_pane_g2_ParamLimits

0xef26,	// (0x0009340c) vid4_indicators_pane_g3_ParamLimits

0xef37,	// (0x0009341d) vid4_indicators_pane_g4_ParamLimits

0xf8a3,	// (0x00093d89) vid4_indicators_pane_g_ParamLimits

0xef53,	// (0x00093439) vid4_indicators_pane_t1_ParamLimits

0xefe9,	// (0x000934cf) vid4_progress_pane_g1_ParamLimits

0xeff9,	// (0x000934df) vid4_progress_pane_g2_ParamLimits

0x9341,	// (0x0008d827) vid4_progress_pane_g3_ParamLimits

0xf009,	// (0x000934ef) vid4_progress_pane_g4_ParamLimits

0xfa4a,	// (0x00093f30) vid4_progress_pane_g_ParamLimits

0x9353,	// (0x0008d839) vid4_progress_pane_t1_ParamLimits

0xf021,	// (0x00093507) vid4_progress_pane_t2_ParamLimits

0xf036,	// (0x0009351c) vid4_progress_pane_t3_ParamLimits

0xfa55,	// (0x00093f3b) vid4_progress_pane_t_ParamLimits

0x9369,	// (0x0008d84f) wait_bar_pane_cp07_ParamLimits

0x9876,	// (0x0008dd5c) main_cam6_set_pane_g2_ParamLimits

0x9876,	// (0x0008dd5c) main_cam6_set_pane_g2

0x989a,	// (0x0008dd80) main_cset6_listscroll_pane_ParamLimits

0x989a,	// (0x0008dd80) main_cset6_listscroll_pane

0x98b6,	// (0x0008dd9c) main_cset6_slider_pane_ParamLimits

0x98b6,	// (0x0008dd9c) main_cset6_slider_pane

0x98cc,	// (0x0008ddb2) main_cset6_text2_pane_ParamLimits

0x98cc,	// (0x0008ddb2) main_cset6_text2_pane

0xd968,	// (0x00091e4e) main_cset6_text_pane

0xd970,	// (0x00091e56) main_cset_list_pane_copy1_ParamLimits

0xd970,	// (0x00091e56) main_cset_list_pane_copy1

0xd980,	// (0x00091e66) scroll_pane_cp028_copy1

0x98da,	// (0x0008ddc0) cset_list_set_pane_copy1

0x98ec,	// (0x0008ddd2) aid_position_infowindow_above_copy1

0x98f4,	// (0x0008ddda) aid_position_infowindow_below_copy1

0xd989,	// (0x00091e6f) cset_list_set_pane_g1_copy1

0xd991,	// (0x00091e77) cset_list_set_pane_g3_copy1_ParamLimits

0xd991,	// (0x00091e77) cset_list_set_pane_g3_copy1

0xd9a0,	// (0x00091e86) cset_list_set_pane_t1_copy1_ParamLimits

0xd9a0,	// (0x00091e86) cset_list_set_pane_t1_copy1

0x3931,	// (0x00087e17) list_highlight_pane_cp021_copy1_ParamLimits

0x3931,	// (0x00087e17) list_highlight_pane_cp021_copy1

0xd9b5,	// (0x00091e9b) cset6_slider_pane_ParamLimits

0xd9b5,	// (0x00091e9b) cset6_slider_pane

0xd9e1,	// (0x00091ec7) main_cset6_slider_pane_g1_ParamLimits

0xd9e1,	// (0x00091ec7) main_cset6_slider_pane_g1

0x98fc,	// (0x0008dde2) main_cset6_slider_pane_g2_ParamLimits

0x98fc,	// (0x0008dde2) main_cset6_slider_pane_g2

0xda09,	// (0x00091eef) main_cset6_slider_pane_g3_ParamLimits

0xda09,	// (0x00091eef) main_cset6_slider_pane_g3

0x9924,	// (0x0008de0a) main_cset6_slider_pane_g4_ParamLimits

0x9924,	// (0x0008de0a) main_cset6_slider_pane_g4

0xda15,	// (0x00091efb) main_cset6_slider_pane_g5_ParamLimits

0xda15,	// (0x00091efb) main_cset6_slider_pane_g5

0xd18e,	// (0x00091674) main_cset6_slider_pane_g7_ParamLimits

0xd18e,	// (0x00091674) main_cset6_slider_pane_g7

0xd19a,	// (0x00091680) main_cset6_slider_pane_g8_ParamLimits

0xd19a,	// (0x00091680) main_cset6_slider_pane_g8

0x8978,	// (0x0008ce5e) main_cset6_slider_pane_g9_ParamLimits

0x8978,	// (0x0008ce5e) main_cset6_slider_pane_g9

0x8984,	// (0x0008ce6a) main_cset6_slider_pane_g10_ParamLimits

0x8984,	// (0x0008ce6a) main_cset6_slider_pane_g10

0x8990,	// (0x0008ce76) main_cset6_slider_pane_g11_ParamLimits

0x8990,	// (0x0008ce76) main_cset6_slider_pane_g11

0x899c,	// (0x0008ce82) main_cset6_slider_pane_g12_ParamLimits

0x899c,	// (0x0008ce82) main_cset6_slider_pane_g12

0x89a8,	// (0x0008ce8e) main_cset6_slider_pane_g13_ParamLimits

0x89a8,	// (0x0008ce8e) main_cset6_slider_pane_g13

0x89b4,	// (0x0008ce9a) main_cset6_slider_pane_g14_ParamLimits

0x89b4,	// (0x0008ce9a) main_cset6_slider_pane_g14

0x9930,	// (0x0008de16) main_cset6_slider_pane_g15_ParamLimits

0x9930,	// (0x0008de16) main_cset6_slider_pane_g15

0xd1a6,	// (0x0009168c) main_cset6_slider_pane_g16_ParamLimits

0xd1a6,	// (0x0009168c) main_cset6_slider_pane_g16

0xd1b2,	// (0x00091698) main_cset6_slider_pane_g17_ParamLimits

0xd1b2,	// (0x00091698) main_cset6_slider_pane_g17

0x0011,

0xfb22,	// (0x00094008) main_cset6_slider_pane_g_ParamLimits

0xfb22,	// (0x00094008) main_cset6_slider_pane_g

0xda21,	// (0x00091f07) main_cset6_slider_pane_t1_ParamLimits

0xda21,	// (0x00091f07) main_cset6_slider_pane_t1

0x9960,	// (0x0008de46) main_cset6_slider_pane_t2_ParamLimits

0x9960,	// (0x0008de46) main_cset6_slider_pane_t2

0x998b,	// (0x0008de71) main_cset6_slider_pane_t3_ParamLimits

0x998b,	// (0x0008de71) main_cset6_slider_pane_t3

0x99b6,	// (0x0008de9c) main_cset6_slider_pane_t4_ParamLimits

0x99b6,	// (0x0008de9c) main_cset6_slider_pane_t4

0x99e1,	// (0x0008dec7) main_cset6_slider_pane_t5_ParamLimits

0x99e1,	// (0x0008dec7) main_cset6_slider_pane_t5

0xda62,	// (0x00091f48) main_cset6_slider_pane_t7_ParamLimits

0xda62,	// (0x00091f48) main_cset6_slider_pane_t7

0x9a0c,	// (0x0008def2) main_cset6_slider_pane_t8_ParamLimits

0x9a0c,	// (0x0008def2) main_cset6_slider_pane_t8

0x9a30,	// (0x0008df16) main_cset6_slider_pane_t9_ParamLimits

0x9a30,	// (0x0008df16) main_cset6_slider_pane_t9

0x9a54,	// (0x0008df3a) main_cset6_slider_pane_t10_ParamLimits

0x9a54,	// (0x0008df3a) main_cset6_slider_pane_t10

0x9a78,	// (0x0008df5e) main_cset6_slider_pane_t11_ParamLimits

0x9a78,	// (0x0008df5e) main_cset6_slider_pane_t11

0xda98,	// (0x00091f7e) main_cset6_slider_pane_t14_ParamLimits

0xda98,	// (0x00091f7e) main_cset6_slider_pane_t14

0xdad1,	// (0x00091fb7) main_cset6_slider_pane_t15_ParamLimits

0xdad1,	// (0x00091fb7) main_cset6_slider_pane_t15

0x000b,

0xfb47,	// (0x0009402d) main_cset6_slider_pane_t_ParamLimits

0xfb47,	// (0x0009402d) main_cset6_slider_pane_t

0x22be,	// (0x000867a4) cset_slider_pane_g1_copy1

0xdb0a,	// (0x00091ff0) cset_slider_pane_g2_copy1

0xdb13,	// (0x00091ff9) cset_slider_pane_g3_copy1

0x08cb,	// (0x00084db1) bg_popup_sub_pane_cp011_copy1

0xdb25,	// (0x0009200b) main_cset_text_pane_g1_copy1

0xd2f4,	// (0x000917da) main_cset_text_pane_t1_copy1

0xd302,	// (0x000917e8) main_cset_text_pane_t2_copy1

0xd310,	// (0x000917f6) main_cset_text_pane_t3_copy1

0xd31e,	// (0x00091804) main_cset_text_pane_t4_copy1

0xd32c,	// (0x00091812) main_cset_text_pane_t5_copy1

0xdb2d,	// (0x00092013) main_cset_text_pane_t6_copy1

0xdb3b,	// (0x00092021) main_cset_text_pane_t7_copy1

0x9858,	// (0x0008dd3e) main_cset_text2_pane_t1_copy1

0xbb19,	// (0x0008ffff) main_ncimui_pane

0x69ad,	// (0x0008ae93) popup_query_ncimui_window_ParamLimits

0x69ad,	// (0x0008ae93) popup_query_ncimui_window

0xcf38,	// (0x0009141e) field_cale_ev2_pane_g4_ParamLimits

0xcf38,	// (0x0009141e) field_cale_ev2_pane_g4

0x7ba7,	// (0x0008c08d) cell_video_dialer_keypad_pane_g2_ParamLimits

0x7ba7,	// (0x0008c08d) cell_video_dialer_keypad_pane_g2

0x0001,

0xf82b,	// (0x00093d11) cell_video_dialer_keypad_pane_g_ParamLimits

0xf82b,	// (0x00093d11) cell_video_dialer_keypad_pane_g

0x7bbf,	// (0x0008c0a5) cell_video_dialer_keypad_pane_t1

0x08cb,	// (0x00084db1) bg_popup_window_pane_cp012

0x16e5,	// (0x00085bcb) heading_pane_cp06

0xdb67,	// (0x0009204d) ncim_query_content_pane

0x08cb,	// (0x00084db1) bg_popup_heading_pane_cp01

0xdb6f,	// (0x00092055) ncim_heading_pane_t1

0xdb7d,	// (0x00092063) ncim_indicator_popup_pane

0xdb8f,	// (0x00092075) ncim_query_button_pane

0xdba3,	// (0x00092089) ncim_query_content_pane_t1

0xdbb5,	// (0x0009209b) ncim_query_content_pane_t2

0x0005,

0xfb8b,	// (0x00094071) ncim_query_content_pane_t

0xdbef,	// (0x000920d5) ncim_query_list_pane

0xdc01,	// (0x000920e7) ncim_query_popup_pane

0xdb7d,	// (0x00092063) ncim_indicator_popup_pane_ParamLimits

0x9be2,	// (0x0008e0c8) ncim_query_content_pane_g1_ParamLimits

0x9be2,	// (0x0008e0c8) ncim_query_content_pane_g1

0xdba3,	// (0x00092089) ncim_query_content_pane_t1_ParamLimits

0xdbb5,	// (0x0009209b) ncim_query_content_pane_t2_ParamLimits

0x9bee,	// (0x0008e0d4) ncim_query_content_pane_t3_ParamLimits

0x9bee,	// (0x0008e0d4) ncim_query_content_pane_t3

0x9c16,	// (0x0008e0fc) ncim_query_content_pane_t4_ParamLimits

0x9c16,	// (0x0008e0fc) ncim_query_content_pane_t4

0x9c3e,	// (0x0008e124) ncim_query_content_pane_t5_ParamLimits

0x9c3e,	// (0x0008e124) ncim_query_content_pane_t5

0xdbc7,	// (0x000920ad) ncim_query_content_pane_t6_ParamLimits

0xdbc7,	// (0x000920ad) ncim_query_content_pane_t6

0xfb8b,	// (0x00094071) ncim_query_content_pane_t_ParamLimits

0xdbef,	// (0x000920d5) ncim_query_list_pane_ParamLimits

0xdc01,	// (0x000920e7) ncim_query_popup_pane_ParamLimits

0xdc15,	// (0x000920fb) wait_bar_pane_cp04

0x08cb,	// (0x00084db1) input_focus_pane_cp011

0xdc1d,	// (0x00092103) ncim_query_popup_pane_t1

0xdc2b,	// (0x00092111) ncim_list_query_list_pane_ParamLimits

0xdc2b,	// (0x00092111) ncim_list_query_list_pane

0x08cb,	// (0x00084db1) bg_button_pane_cp027

0xdc38,	// (0x0009211e) ncim_query_button_pane_g1

0x08cb,	// (0x00084db1) list_highlight_pane_cp012

0xdc42,	// (0x00092128) ncim_list_query_list_pane_g1

0xdc4a,	// (0x00092130) ncim_list_query_list_pane_t1

0xeec8,	// (0x000933ae) cam4_indicators_pane_g3_ParamLimits

0xeec8,	// (0x000933ae) cam4_indicators_pane_g3

0xef43,	// (0x00093429) vid4_indicators_pane_g5_ParamLimits

0xef43,	// (0x00093429) vid4_indicators_pane_g5

0xf015,	// (0x000934fb) vid4_progress_pane_g5_ParamLimits

0xf015,	// (0x000934fb) vid4_progress_pane_g5

0x9acd,	// (0x0008dfb3) main_ncimui_pane_g1

0x9b36,	// (0x0008e01c) ncimui_group_query_pane_ParamLimits

0x9b36,	// (0x0008e01c) ncimui_group_query_pane

0x9b7e,	// (0x0008e064) ncimui_list_pane_ParamLimits

0x9b7e,	// (0x0008e064) ncimui_list_pane

0x9ba5,	// (0x0008e08b) ncimui_text_pane_ParamLimits

0x9ba5,	// (0x0008e08b) ncimui_text_pane

0x9c66,	// (0x0008e14c) ncimui_text_pane_t1_ParamLimits

0x9c66,	// (0x0008e14c) ncimui_text_pane_t1

0xdc58,	// (0x0009213e) ncimui_list_single_graphic_pane_ParamLimits

0xdc58,	// (0x0009213e) ncimui_list_single_graphic_pane

0x9c84,	// (0x0008e16a) ncimui_query_pane_ParamLimits

0x9c84,	// (0x0008e16a) ncimui_query_pane

0x08cb,	// (0x00084db1) list_highlight_pane_cp013

0xdc68,	// (0x0009214e) ncim_list_query_list_pane_t1_copy1

0xdc76,	// (0x0009215c) ncim_list_single_graphic_pane_g1

0x9c97,	// (0x0008e17d) ncim_query_button_pane_cp01

0x9ca3,	// (0x0008e189) ncim_query_entry_pane_ParamLimits

0x9ca3,	// (0x0008e189) ncim_query_entry_pane

0x9cb6,	// (0x0008e19c) ncimui_query_pane_g1

0x9cc2,	// (0x0008e1a8) ncimui_query_pane_t1_ParamLimits

0x9cc2,	// (0x0008e1a8) ncimui_query_pane_t1

0x3931,	// (0x00087e17) input_focus_pane_cp012

0xdc7e,	// (0x00092164) ncim_query_entry_pane_t1

0x3b60,	// (0x00088046) main_im_pane_ParamLimits

0xbb19,	// (0x0008ffff) main_mobtv_pane_ParamLimits

0xbb19,	// (0x0008ffff) main_mobtv_pane

0x9948,	// (0x0008de2e) main_cset6_slider_pane_g18_ParamLimits

0x9948,	// (0x0008de2e) main_cset6_slider_pane_g18

0x9954,	// (0x0008de3a) main_cset6_slider_pane_g19_ParamLimits

0x9954,	// (0x0008de3a) main_cset6_slider_pane_g19

0x39a6,	// (0x00087e8c) bg_main_mobtv_pane_ParamLimits

0x39a6,	// (0x00087e8c) bg_main_mobtv_pane

0x9cdb,	// (0x0008e1c1) main_mobtv_info_pane

0x9ce4,	// (0x0008e1ca) main_mobtv_loading_pane_ParamLimits

0x9ce4,	// (0x0008e1ca) main_mobtv_loading_pane

0xdc90,	// (0x00092176) main_mobtv_pg_channel_list_pane

0xdc9a,	// (0x00092180) main_mobtv_pg_hdr_pane

0x9cf1,	// (0x0008e1d7) main_mobtv_programe_curr_pane_ParamLimits

0x9cf1,	// (0x0008e1d7) main_mobtv_programe_curr_pane

0x9cfe,	// (0x0008e1e4) main_mobtv_programe_next_pane_ParamLimits

0x9cfe,	// (0x0008e1e4) main_mobtv_programe_next_pane

0xdca3,	// (0x00092189) popup_mobtv_noti_window

0x461f,	// (0x00088b05) main_tv_pg_hdr_pane_g1

0xdcab,	// (0x00092191) main_tv_pg_hdr_pane_g2

0xdcb3,	// (0x00092199) main_tv_pg_hdr_pane_g3

0xdcbb,	// (0x000921a1) main_tv_pg_hdr_pane_g4

0xdcc3,	// (0x000921a9) main_tv_pg_hdr_pane_g5

0xdccd,	// (0x000921b3) main_tv_pg_hdr_pane_g6

0xdcd7,	// (0x000921bd) main_tv_pg_hdr_pane_g7

0xdce1,	// (0x000921c7) main_tv_pg_hdr_pane_g8

0xdceb,	// (0x000921d1) main_tv_pg_hdr_pane_g9

0xdcf5,	// (0x000921db) main_tv_pg_hdr_pane_g10

0xdcff,	// (0x000921e5) main_tv_pg_hdr_pane_g11

0x000a,

0xfb98,	// (0x0009407e) main_tv_pg_hdr_pane_g

0xdd09,	// (0x000921ef) main_tv_pg_hdr_pane_t1

0xdd17,	// (0x000921fd) main_tv_pg_hdr_pane_t2

0xdd25,	// (0x0009220b) main_tv_pg_hdr_pane_t3

0xdd35,	// (0x0009221b) main_tv_pg_hdr_pane_t4

0xdd45,	// (0x0009222b) main_tv_pg_hdr_pane_t5

0x0004,

0xfbaf,	// (0x00094095) main_tv_pg_hdr_pane_t

0xdd55,	// (0x0009223b) single_mobtv_pg_channel_pane_ParamLimits

0xdd55,	// (0x0009223b) single_mobtv_pg_channel_pane

0xdd67,	// (0x0009224d) single_mobtv_pg_channel_table_pane

0x5737,	// (0x00089c1d) single_mobtv_pg_channel_thumb_pane

0xdd70,	// (0x00092256) single_tv_pg_channel_pane_g1

0xdd79,	// (0x0009225f) single_tv_pg_channel_pane_g2

0x0001,

0xfbba,	// (0x000940a0) single_tv_pg_channel_pane_g

0x398a,	// (0x00087e70) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x398a,	// (0x00087e70) bg_single_mobtv_pg_channel_thumb_pane

0xdd82,	// (0x00092268) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xdd82,	// (0x00092268) single_mobtv_pg_channel_thumb_pane_g1

0xdd90,	// (0x00092276) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xdd90,	// (0x00092276) single_mobtv_pg_channel_thumb_pane_g2

0xdd9c,	// (0x00092282) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xdd9c,	// (0x00092282) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfbbf,	// (0x000940a5) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfbbf,	// (0x000940a5) single_mobtv_pg_channel_thumb_pane_g

0xdda8,	// (0x0009228e) single_mobtv_pg_channel_thumb_pane_t1

0xddb6,	// (0x0009229c) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfbc6,	// (0x000940ac) single_mobtv_pg_channel_thumb_pane_t

0x461f,	// (0x00088b05) bg_single_mobtv_pg_channel_table_pane_g1

0x461f,	// (0x00088b05) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf3d8,	// (0x000938be) bg_single_mobtv_pg_channel_table_pane_g

0xddc4,	// (0x000922aa) single_mobtv_pg_channel_table_pane_t1

0xddd2,	// (0x000922b8) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfbcb,	// (0x000940b1) single_mobtv_pg_channel_table_pane_t

0x9d13,	// (0x0008e1f9) main_mobtv_info_pane_g1_ParamLimits

0x9d13,	// (0x0008e1f9) main_mobtv_info_pane_g1

0x9d31,	// (0x0008e217) main_mobtv_info_pane_t1_ParamLimits

0x9d31,	// (0x0008e217) main_mobtv_info_pane_t1

0x9da9,	// (0x0008e28f) main_mobtv_info_pane_t2_ParamLimits

0x9da9,	// (0x0008e28f) main_mobtv_info_pane_t2

0x0002,

0xfbd5,	// (0x000940bb) main_mobtv_info_pane_t_ParamLimits

0xfbd5,	// (0x000940bb) main_mobtv_info_pane_t

0x9e38,	// (0x0008e31e) wait_bar_pane_cp05

0x9e4a,	// (0x0008e330) main_mobtv_loading_pane_g1_ParamLimits

0x9e4a,	// (0x0008e330) main_mobtv_loading_pane_g1

0x9e5d,	// (0x0008e343) main_mobtv_loading_pane_g2_ParamLimits

0x9e5d,	// (0x0008e343) main_mobtv_loading_pane_g2

0x9e69,	// (0x0008e34f) main_mobtv_loading_pane_g3_ParamLimits

0x9e69,	// (0x0008e34f) main_mobtv_loading_pane_g3

0x0002,

0xfbdc,	// (0x000940c2) main_mobtv_loading_pane_g_ParamLimits

0xfbdc,	// (0x000940c2) main_mobtv_loading_pane_g

0xdde0,	// (0x000922c6) main_mobtv_loading_pane_t1_ParamLimits

0xdde0,	// (0x000922c6) main_mobtv_loading_pane_t1

0xddf8,	// (0x000922de) main_mobtv_loading_pane_t2_ParamLimits

0xddf8,	// (0x000922de) main_mobtv_loading_pane_t2

0x0001,

0xfbe3,	// (0x000940c9) main_mobtv_loading_pane_t_ParamLimits

0xfbe3,	// (0x000940c9) main_mobtv_loading_pane_t

0x9e7c,	// (0x0008e362) wait_bar_pane_cp06_ParamLimits

0x9e7c,	// (0x0008e362) wait_bar_pane_cp06

0xde1c,	// (0x00092302) main_mobtv_programe_curr_pane_t1

0xde2a,	// (0x00092310) main_mobtv_programe_curr_pane_t2

0x0001,

0xfbe8,	// (0x000940ce) main_mobtv_programe_curr_pane_t

0xde38,	// (0x0009231e) main_mobtv_programe_next_pane_t1

0xde46,	// (0x0009232c) main_mobtv_programe_next_pane_t2

0xde54,	// (0x0009233a) main_mobtv_programe_next_pane_t3

0x0002,

0xfbed,	// (0x000940d3) main_mobtv_programe_next_pane_t

0x08cb,	// (0x00084db1) bg_popup_mobtv_noti_window_pane

0xde62,	// (0x00092348) popup_mobtv_noti_window_g1

0xde6a,	// (0x00092350) popup_mobtv_noti_window_t1

0xde78,	// (0x0009235e) popup_mobtv_noti_window_t2

0x0001,

0xfbf4,	// (0x000940da) popup_mobtv_noti_window_t

0x461f,	// (0x00088b05) bg_popup_mobtv_noti_window_pane_g1

0xbb27,	// (0x0009000d) sc_clock_pane

0xbb27,	// (0x0009000d) main_fs_bigclock_pane

0x958a,	// (0x0008da70) blid2_tripm_pane_t4_ParamLimits

0x958a,	// (0x0008da70) blid2_tripm_pane_t4

0x9e8b,	// (0x0008e371) sc_clock_pane_g1_ParamLimits

0x9e8b,	// (0x0008e371) sc_clock_pane_g1

0x9e9d,	// (0x0008e383) sc_clock_pane_t1_ParamLimits

0x9e9d,	// (0x0008e383) sc_clock_pane_t1

0x9ebf,	// (0x0008e3a5) sc_clock_pane_t2_ParamLimits

0x9ebf,	// (0x0008e3a5) sc_clock_pane_t2

0x9ed7,	// (0x0008e3bd) sc_clock_pane_t3_ParamLimits

0x9ed7,	// (0x0008e3bd) sc_clock_pane_t3

0x0004,

0xfbf9,	// (0x000940df) sc_clock_pane_t_ParamLimits

0xfbf9,	// (0x000940df) sc_clock_pane_t

0xabb3,	// (0x0008f099) main_fs_bigclock_indicator_pane_ParamLimits

0xabb3,	// (0x0008f099) main_fs_bigclock_indicator_pane

0x9f7d,	// (0x0008e463) main_fs_bigclock_pane_g1_ParamLimits

0x9f7d,	// (0x0008e463) main_fs_bigclock_pane_g1

0xabbf,	// (0x0008f0a5) main_fs_bigclock_pane_t1_ParamLimits

0xabbf,	// (0x0008f0a5) main_fs_bigclock_pane_t1

0xabd1,	// (0x0008f0b7) main_fs_bigclock_pane_t2_ParamLimits

0xabd1,	// (0x0008f0b7) main_fs_bigclock_pane_t2

0xabe5,	// (0x0008f0cb) main_fs_bigclock_pane_t3_ParamLimits

0xabe5,	// (0x0008f0cb) main_fs_bigclock_pane_t3

0x0002,

0xfd8a,	// (0x00094270) main_fs_bigclock_pane_t_ParamLimits

0xfd8a,	// (0x00094270) main_fs_bigclock_pane_t

0xea29,	// (0x00092f0f) main_fs_bigclock_indicator_pane_g1

0xdb97,	// (0x0009207d) ncim_query_content_pane_g2_ParamLimits

0xdb97,	// (0x0009207d) ncim_query_content_pane_g2

0x0001,

0xfb86,	// (0x0009406c) ncim_query_content_pane_g_ParamLimits

0xfb86,	// (0x0009406c) ncim_query_content_pane_g

0x9ef0,	// (0x0008e3d6) sc_clock_pane_t4_ParamLimits

0x9ef0,	// (0x0008e3d6) sc_clock_pane_t4

0xbb19,	// (0x0008ffff) main_radioblah_pane

0xee3d,	// (0x00093323) cell_call4_button_pane_t1_copy1_ParamLimits

0xee3d,	// (0x00093323) cell_call4_button_pane_t1_copy1

0x9ae5,	// (0x0008dfcb) main_ncimui_pane_t1_ParamLimits

0x9ae5,	// (0x0008dfcb) main_ncimui_pane_t1

0x9aff,	// (0x0008dfe5) main_ncimui_pane_t2_ParamLimits

0x9aff,	// (0x0008dfe5) main_ncimui_pane_t2

0x0002,

0xfb7f,	// (0x00094065) main_ncimui_pane_t_ParamLimits

0xfb7f,	// (0x00094065) main_ncimui_pane_t

0xdfbe,	// (0x000924a4) main_radioblah_anim_pane_ParamLimits

0xdfbe,	// (0x000924a4) main_radioblah_anim_pane

0xdfcf,	// (0x000924b5) main_radioblah_info_pane_ParamLimits

0xdfcf,	// (0x000924b5) main_radioblah_info_pane

0xdfe3,	// (0x000924c9) main_radioblah_pane_t1_ParamLimits

0xdfe3,	// (0x000924c9) main_radioblah_pane_t1

0xdfff,	// (0x000924e5) main_radioblah_pane_t2_ParamLimits

0xdfff,	// (0x000924e5) main_radioblah_pane_t2

0x0003,

0xfc1a,	// (0x00094100) main_radioblah_pane_t_ParamLimits

0xfc1a,	// (0x00094100) main_radioblah_pane_t

0x9fdc,	// (0x0008e4c2) main_radioblah_rocker_ctrl_pane_ParamLimits

0x9fdc,	// (0x0008e4c2) main_radioblah_rocker_ctrl_pane

0xe047,	// (0x0009252d) main_radioblah_info_pane_t1_ParamLimits

0xe047,	// (0x0009252d) main_radioblah_info_pane_t1

0xa034,	// (0x0008e51a) main_radioblah_info_pane_t2_ParamLimits

0xa034,	// (0x0008e51a) main_radioblah_info_pane_t2

0x0003,

0xfc23,	// (0x00094109) main_radioblah_info_pane_t_ParamLimits

0xfc23,	// (0x00094109) main_radioblah_info_pane_t

0x461f,	// (0x00088b05) main_radioblah_rocker_ctrl_pane_g1

0xa0e4,	// (0x0008e5ca) main_radioblah_rocker_ctrl_pane_g2

0xa0ec,	// (0x0008e5d2) main_radioblah_rocker_ctrl_pane_g3

0xa0f4,	// (0x0008e5da) main_radioblah_rocker_ctrl_pane_g4

0xa0fc,	// (0x0008e5e2) main_radioblah_rocker_ctrl_pane_g5

0xa104,	// (0x0008e5ea) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc2c,	// (0x00094112) main_radioblah_rocker_ctrl_pane_g

0x9858,	// (0x0008dd3e) main_cset_text2_pane_t1_copy1_ParamLimits

0xee9b,	// (0x00093381) cam4_image_uncrop_qvga_pane

0xeeee,	// (0x000933d4) vid4_image_uncrop_qcif_pane

0xf04c,	// (0x00093532) cam6_image_uncrop_qvga_pane_ParamLimits

0xf04c,	// (0x00093532) cam6_image_uncrop_qvga_pane

0xd84b,	// (0x00091d31) vid6_image_uncrop_qcif_pane_ParamLimits

0xd84b,	// (0x00091d31) vid6_image_uncrop_qcif_pane

0x08cb,	// (0x00084db1) bg_popup_preview_window_pane_cp03

0xdb49,	// (0x0009202f) list_cset_text2_pane

0xdb51,	// (0x00092037) main_cset6_text2_pane_g1

0xdb59,	// (0x0009203f) main_cset6_text2_pane_t1

0x0319,	// (0x000847ff) list_cset_text2_pane_t1_ParamLimits

0x0319,	// (0x000847ff) list_cset_text2_pane_t1

0xbb19,	// (0x0008ffff) main_radioblah_pane_ParamLimits

0x9e24,	// (0x0008e30a) main_mobtv_info_pane_t3_ParamLimits

0x9e24,	// (0x0008e30a) main_mobtv_info_pane_t3

0x9fca,	// (0x0008e4b0) main_radioblah_pane_g1

0xa004,	// (0x0008e4ea) main_radioblah_info_pane_g1

0xa089,	// (0x0008e56f) main_radioblah_info_pane_t3_ParamLimits

0xa089,	// (0x0008e56f) main_radioblah_info_pane_t3

0x56b8,	// (0x00089b9e) highlight_cell_cale_month_pane_ParamLimits

0x56b8,	// (0x00089b9e) highlight_cell_cale_month_pane

0xbb27,	// (0x0009000d) main_phob_fisheye_pane

0x1ecf,	// (0x000863b5) scroll_pane_cp0031_ParamLimits

0x1ecf,	// (0x000863b5) scroll_pane_cp0031

0xd959,	// (0x00091e3f) wait_bar_pane_cp08_ParamLimits

0x98da,	// (0x0008ddc0) cset_list_set_pane_copy1_ParamLimits

0xe081,	// (0x00092567) highlight_cell_cale_month_pane_g1

0xa10c,	// (0x0008e5f2) highlight_cell_cale_month_pane_t1

0xd5bc,	// (0x00091aa2) list_gen_pane_cp01

0xd179,	// (0x0009165f) scroll_pane_01

0xa11a,	// (0x0008e600) list_single_double_fisheye_pane

0xe089,	// (0x0009256f) list_double_fisheye_pane_g1_ParamLimits

0xe089,	// (0x0009256f) list_double_fisheye_pane_g1

0xe095,	// (0x0009257b) list_double_fisheye_pane_g2_ParamLimits

0xe095,	// (0x0009257b) list_double_fisheye_pane_g2

0xa123,	// (0x0008e609) list_double_fisheye_pane_g3_ParamLimits

0xa123,	// (0x0008e609) list_double_fisheye_pane_g3

0x0004,

0xfc39,	// (0x0009411f) list_double_fisheye_pane_g_ParamLimits

0xfc39,	// (0x0009411f) list_double_fisheye_pane_g

0xa12f,	// (0x0008e615) list_double_fisheye_pane_t1_ParamLimits

0xa12f,	// (0x0008e615) list_double_fisheye_pane_t1

0xa14a,	// (0x0008e630) list_double_fisheye_pane_t2_ParamLimits

0xa14a,	// (0x0008e630) list_double_fisheye_pane_t2

0x0001,

0xfc44,	// (0x0009412a) list_double_fisheye_pane_t_ParamLimits

0xfc44,	// (0x0009412a) list_double_fisheye_pane_t

0xbb27,	// (0x0009000d) main_call5_pane

0x9f1b,	// (0x0008e401) sc_swipe_pane_ParamLimits

0x9f1b,	// (0x0008e401) sc_swipe_pane

0xa17f,	// (0x0008e665) call5_image_pane_ParamLimits

0xa17f,	// (0x0008e665) call5_image_pane

0xa19c,	// (0x0008e682) call5_swipe_1_pane_ParamLimits

0xa19c,	// (0x0008e682) call5_swipe_1_pane

0xa1af,	// (0x0008e695) call5_swipe_2_pane_ParamLimits

0xa1af,	// (0x0008e695) call5_swipe_2_pane

0xa1da,	// (0x0008e6c0) popup_call5_audio_first_window_ParamLimits

0xa1da,	// (0x0008e6c0) popup_call5_audio_first_window

0x398a,	// (0x00087e70) call5_swipe_1_pane_g1_ParamLimits

0x398a,	// (0x00087e70) call5_swipe_1_pane_g1

0xe0c6,	// (0x000925ac) call5_swipe_1_pane_g2_ParamLimits

0xe0c6,	// (0x000925ac) call5_swipe_1_pane_g2

0x0001,

0xfc49,	// (0x0009412f) call5_swipe_1_pane_g_ParamLimits

0xfc49,	// (0x0009412f) call5_swipe_1_pane_g

0xe0d2,	// (0x000925b8) call5_swipe_1_pane_t1_ParamLimits

0xe0d2,	// (0x000925b8) call5_swipe_1_pane_t1

0x398a,	// (0x00087e70) call5_swipe_2_pane_g1_ParamLimits

0x398a,	// (0x00087e70) call5_swipe_2_pane_g1

0xe0e7,	// (0x000925cd) call5_swipe_2_pane_g2_ParamLimits

0xe0e7,	// (0x000925cd) call5_swipe_2_pane_g2

0x0001,

0xfc4e,	// (0x00094134) call5_swipe_2_pane_g_ParamLimits

0xfc4e,	// (0x00094134) call5_swipe_2_pane_g

0xe0f3,	// (0x000925d9) call5_swipe_2_pane_t1_ParamLimits

0xe0f3,	// (0x000925d9) call5_swipe_2_pane_t1

0xe108,	// (0x000925ee) sc_swipe_pane_g1_ParamLimits

0xe108,	// (0x000925ee) sc_swipe_pane_g1

0xe115,	// (0x000925fb) sc_swipe_pane_g2_ParamLimits

0xe115,	// (0x000925fb) sc_swipe_pane_g2

0x0001,

0xfc53,	// (0x00094139) sc_swipe_pane_g_ParamLimits

0xfc53,	// (0x00094139) sc_swipe_pane_g

0xe121,	// (0x00092607) sc_swipe_pane_t1_ParamLimits

0xe121,	// (0x00092607) sc_swipe_pane_t1

0xbb27,	// (0x0009000d) main_cmail_launcher_pane

0xa1eb,	// (0x0008e6d1) aid_size_cell_cmail_l_ParamLimits

0xa1eb,	// (0x0008e6d1) aid_size_cell_cmail_l

0xa1f9,	// (0x0008e6df) grid_cmail_l_pane_ParamLimits

0xa1f9,	// (0x0008e6df) grid_cmail_l_pane

0xa213,	// (0x0008e6f9) cell_cmail_l_pane_ParamLimits

0xa213,	// (0x0008e6f9) cell_cmail_l_pane

0xe136,	// (0x0009261c) cell_cmail_l_pane_g1_ParamLimits

0xe136,	// (0x0009261c) cell_cmail_l_pane_g1

0xe142,	// (0x00092628) cell_cmail_l_pane_t1_ParamLimits

0xe142,	// (0x00092628) cell_cmail_l_pane_t1

0xe158,	// (0x0009263e) cell_cmail_l_pane_t2_ParamLimits

0xe158,	// (0x0009263e) cell_cmail_l_pane_t2

0x0001,

0xfc58,	// (0x0009413e) cell_cmail_l_pane_t_ParamLimits

0xfc58,	// (0x0009413e) cell_cmail_l_pane_t

0x3931,	// (0x00087e17) grid_highlight_pane_cp018_ParamLimits

0x3931,	// (0x00087e17) grid_highlight_pane_cp018

0x35f2,	// (0x00087ad8) main2_pane_ParamLimits

0x35f2,	// (0x00087ad8) main2_pane

0x3d6b,	// (0x00088251) popup_sp_fs_action_menu_bg_pane_g1

0x3d73,	// (0x00088259) popup_sp_fs_action_menu_bg_pane_g2

0x3d7b,	// (0x00088261) popup_sp_fs_action_menu_bg_pane_g3

0x3d83,	// (0x00088269) popup_sp_fs_action_menu_bg_pane_g4

0x3d8b,	// (0x00088271) popup_sp_fs_action_menu_bg_pane_g5

0x3d93,	// (0x00088279) popup_sp_fs_action_menu_bg_pane_g6

0x3d9b,	// (0x00088281) popup_sp_fs_action_menu_bg_pane_g7

0x3da3,	// (0x00088289) popup_sp_fs_action_menu_bg_pane_g8

0x3dab,	// (0x00088291) popup_sp_fs_action_menu_bg_pane_g9

0x3db3,	// (0x00088299) popup_sp_fs_action_menu_bg_pane_g10

0x3db3,	// (0x00088299) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf145,	// (0x0009362b) popup_sp_fs_action_menu_bg_pane_g

0x398a,	// (0x00087e70) list_medium_line_x2_t3_g3_g1_ParamLimits

0x398a,	// (0x00087e70) list_medium_line_x2_t3_g3_g1

0x398a,	// (0x00087e70) list_medium_line_x2_t3_g3_g2_ParamLimits

0x398a,	// (0x00087e70) list_medium_line_x2_t3_g3_g2

0x398a,	// (0x00087e70) list_medium_line_x2_t3_g3_g3_ParamLimits

0x398a,	// (0x00087e70) list_medium_line_x2_t3_g3_g3

0x0002,

0xf1f3,	// (0x000936d9) list_medium_line_x2_t3_g3_g_ParamLimits

0xf1f3,	// (0x000936d9) list_medium_line_x2_t3_g3_g

0x449b,	// (0x00088981) list_medium_line_x2_t3_g3_t1_ParamLimits

0x449b,	// (0x00088981) list_medium_line_x2_t3_g3_t1

0x449b,	// (0x00088981) list_medium_line_x2_t3_g3_t2_ParamLimits

0x449b,	// (0x00088981) list_medium_line_x2_t3_g3_t2

0x449b,	// (0x00088981) list_medium_line_x2_t3_g3_t3_ParamLimits

0x449b,	// (0x00088981) list_medium_line_x2_t3_g3_t3

0x0002,

0xf1fa,	// (0x000936e0) list_medium_line_x2_t3_g3_t_ParamLimits

0xf1fa,	// (0x000936e0) list_medium_line_x2_t3_g3_t

0x398a,	// (0x00087e70) list_medium_line_x2_t3_g2_g1_ParamLimits

0x398a,	// (0x00087e70) list_medium_line_x2_t3_g2_g1

0x398a,	// (0x00087e70) list_medium_line_x2_t3_g2_g2_ParamLimits

0x398a,	// (0x00087e70) list_medium_line_x2_t3_g2_g2

0x0001,

0xf201,	// (0x000936e7) list_medium_line_x2_t3_g2_g_ParamLimits

0xf201,	// (0x000936e7) list_medium_line_x2_t3_g2_g

0x449b,	// (0x00088981) list_medium_line_x2_t3_g2_t1_ParamLimits

0x449b,	// (0x00088981) list_medium_line_x2_t3_g2_t1

0x449b,	// (0x00088981) list_medium_line_x2_t3_g2_t2_ParamLimits

0x449b,	// (0x00088981) list_medium_line_x2_t3_g2_t2

0x449b,	// (0x00088981) list_medium_line_x2_t3_g2_t3_ParamLimits

0x449b,	// (0x00088981) list_medium_line_x2_t3_g2_t3

0x0002,

0xf1fa,	// (0x000936e0) list_medium_line_x2_t3_g2_t_ParamLimits

0xf1fa,	// (0x000936e0) list_medium_line_x2_t3_g2_t

0x398a,	// (0x00087e70) list_medium_line_x2_t4_g4_g1_ParamLimits

0x398a,	// (0x00087e70) list_medium_line_x2_t4_g4_g1

0x398a,	// (0x00087e70) list_medium_line_x2_t4_g4_g2_ParamLimits

0x398a,	// (0x00087e70) list_medium_line_x2_t4_g4_g2

0x398a,	// (0x00087e70) list_medium_line_x2_t4_g4_g3_ParamLimits

0x398a,	// (0x00087e70) list_medium_line_x2_t4_g4_g3

0x398a,	// (0x00087e70) list_medium_line_x2_t4_g4_g4_ParamLimits

0x398a,	// (0x00087e70) list_medium_line_x2_t4_g4_g4

0x0003,

0xf206,	// (0x000936ec) list_medium_line_x2_t4_g4_g_ParamLimits

0xf206,	// (0x000936ec) list_medium_line_x2_t4_g4_g

0x449b,	// (0x00088981) list_medium_line_x2_t4_g4_t1_ParamLimits

0x449b,	// (0x00088981) list_medium_line_x2_t4_g4_t1

0x449b,	// (0x00088981) list_medium_line_x2_t4_g4_t2_ParamLimits

0x449b,	// (0x00088981) list_medium_line_x2_t4_g4_t2

0x449b,	// (0x00088981) list_medium_line_x2_t4_g4_t3_ParamLimits

0x449b,	// (0x00088981) list_medium_line_x2_t4_g4_t3

0x449b,	// (0x00088981) list_medium_line_x2_t4_g4_t4_ParamLimits

0x449b,	// (0x00088981) list_medium_line_x2_t4_g4_t4

0x0003,

0xf20f,	// (0x000936f5) list_medium_line_x2_t4_g4_t_ParamLimits

0xf20f,	// (0x000936f5) list_medium_line_x2_t4_g4_t

0x398a,	// (0x00087e70) list_medium_line_x2_t2_g4_g1_ParamLimits

0x398a,	// (0x00087e70) list_medium_line_x2_t2_g4_g1

0x398a,	// (0x00087e70) list_medium_line_x2_t2_g4_g2_ParamLimits

0x398a,	// (0x00087e70) list_medium_line_x2_t2_g4_g2

0x398a,	// (0x00087e70) list_medium_line_x2_t2_g4_g3_ParamLimits

0x398a,	// (0x00087e70) list_medium_line_x2_t2_g4_g3

0x398a,	// (0x00087e70) list_medium_line_x2_t2_g4_g4_ParamLimits

0x398a,	// (0x00087e70) list_medium_line_x2_t2_g4_g4

0x0003,

0xf206,	// (0x000936ec) list_medium_line_x2_t2_g4_g_ParamLimits

0xf206,	// (0x000936ec) list_medium_line_x2_t2_g4_g

0x449b,	// (0x00088981) list_medium_line_x2_t2_g4_t1_ParamLimits

0x449b,	// (0x00088981) list_medium_line_x2_t2_g4_t1

0x449b,	// (0x00088981) list_medium_line_x2_t2_g4_t2_ParamLimits

0x449b,	// (0x00088981) list_medium_line_x2_t2_g4_t2

0x0001,

0xf1d6,	// (0x000936bc) list_medium_line_x2_t2_g4_t_ParamLimits

0xf1d6,	// (0x000936bc) list_medium_line_x2_t2_g4_t

0x398a,	// (0x00087e70) list_medium_line_x2_t2_g3_g1_ParamLimits

0x398a,	// (0x00087e70) list_medium_line_x2_t2_g3_g1

0x398a,	// (0x00087e70) list_medium_line_x2_t2_g3_g2_ParamLimits

0x398a,	// (0x00087e70) list_medium_line_x2_t2_g3_g2

0x398a,	// (0x00087e70) list_medium_line_x2_t2_g3_g3_ParamLimits

0x398a,	// (0x00087e70) list_medium_line_x2_t2_g3_g3

0x0002,

0xf1f3,	// (0x000936d9) list_medium_line_x2_t2_g3_g_ParamLimits

0xf1f3,	// (0x000936d9) list_medium_line_x2_t2_g3_g

0x449b,	// (0x00088981) list_medium_line_x2_t2_g3_t1_ParamLimits

0x449b,	// (0x00088981) list_medium_line_x2_t2_g3_t1

0x449b,	// (0x00088981) list_medium_line_x2_t2_g3_t2_ParamLimits

0x449b,	// (0x00088981) list_medium_line_x2_t2_g3_t2

0x0001,

0xf1d6,	// (0x000936bc) list_medium_line_x2_t2_g3_t_ParamLimits

0xf1d6,	// (0x000936bc) list_medium_line_x2_t2_g3_t

0x5860,	// (0x00089d46) main_sp_fs_list_pane_ParamLimits

0x5860,	// (0x00089d46) main_sp_fs_list_pane

0x25c3,	// (0x00086aa9) sp_fs_scroll_pane_ParamLimits

0x25c3,	// (0x00086aa9) sp_fs_scroll_pane

0xbddf,	// (0x000902c5) list_medium_line_x2_t3_t1

0xbddf,	// (0x000902c5) list_medium_line_x2_t3_t2

0xbddf,	// (0x000902c5) list_medium_line_x2_t3_t3

0x0002,

0xf2bc,	// (0x000937a2) list_medium_line_x2_t3_t

0xbddf,	// (0x000902c5) list_medium_line_x3_t4_t1

0xbddf,	// (0x000902c5) list_medium_line_x3_t4_t2

0xbddf,	// (0x000902c5) list_medium_line_x3_t4_t3

0xbddf,	// (0x000902c5) list_medium_line_x3_t4_t4

0x0003,

0xf2c3,	// (0x000937a9) list_medium_line_x3_t4_t

0xbddf,	// (0x000902c5) list_medium_line_x4_t5_t1

0xbddf,	// (0x000902c5) list_medium_line_x4_t5_t2

0xbddf,	// (0x000902c5) list_medium_line_x4_t5_t3

0xbddf,	// (0x000902c5) list_medium_line_x4_t5_t4

0xbddf,	// (0x000902c5) list_medium_line_x4_t5_t5

0x0004,

0xf2cc,	// (0x000937b2) list_medium_line_x4_t5_t

0x398a,	// (0x00087e70) list_medium_line_t4_g4_g1_ParamLimits

0x398a,	// (0x00087e70) list_medium_line_t4_g4_g1

0x398a,	// (0x00087e70) list_medium_line_t4_g4_g2_ParamLimits

0x398a,	// (0x00087e70) list_medium_line_t4_g4_g2

0x398a,	// (0x00087e70) list_medium_line_t4_g4_g3_ParamLimits

0x398a,	// (0x00087e70) list_medium_line_t4_g4_g3

0x398a,	// (0x00087e70) list_medium_line_t4_g4_g4_ParamLimits

0x398a,	// (0x00087e70) list_medium_line_t4_g4_g4

0x0003,

0xf206,	// (0x000936ec) list_medium_line_t4_g4_g_ParamLimits

0xf206,	// (0x000936ec) list_medium_line_t4_g4_g

0x449b,	// (0x00088981) list_medium_line_t4_g4_t1_ParamLimits

0x449b,	// (0x00088981) list_medium_line_t4_g4_t1

0x449b,	// (0x00088981) list_medium_line_t4_g4_t2_ParamLimits

0x449b,	// (0x00088981) list_medium_line_t4_g4_t2

0x449b,	// (0x00088981) list_medium_line_t4_g4_t3_ParamLimits

0x449b,	// (0x00088981) list_medium_line_t4_g4_t3

0x449b,	// (0x00088981) list_medium_line_t4_g4_t4_ParamLimits

0x449b,	// (0x00088981) list_medium_line_t4_g4_t4

0x0003,

0xf20f,	// (0x000936f5) list_medium_line_t4_g4_t_ParamLimits

0xf20f,	// (0x000936f5) list_medium_line_t4_g4_t

0x590b,	// (0x00089df1) chi_dic_find_pane_g1

0x677d,	// (0x0008ac63) main_tport_pane

0xbddf,	// (0x000902c5) list_medium_line_plain_t1

0x398a,	// (0x00087e70) list_medium_line_t2_g2_g1_ParamLimits

0x398a,	// (0x00087e70) list_medium_line_t2_g2_g1

0x398a,	// (0x00087e70) list_medium_line_t2_g2_g2_ParamLimits

0x398a,	// (0x00087e70) list_medium_line_t2_g2_g2

0x0001,

0xf201,	// (0x000936e7) list_medium_line_t2_g2_g_ParamLimits

0xf201,	// (0x000936e7) list_medium_line_t2_g2_g

0x449b,	// (0x00088981) list_medium_line_t2_g2_t1_ParamLimits

0x449b,	// (0x00088981) list_medium_line_t2_g2_t1

0x449b,	// (0x00088981) list_medium_line_t2_g2_t2_ParamLimits

0x449b,	// (0x00088981) list_medium_line_t2_g2_t2

0x0001,

0xf1d6,	// (0x000936bc) list_medium_line_t2_g2_t_ParamLimits

0xf1d6,	// (0x000936bc) list_medium_line_t2_g2_t

0xd5c5,	// (0x00091aab) aid_sp_fs_list_icon_a_sm

0xd5cd,	// (0x00091ab3) aid_sp_fs_list_icon_d

0xd5d5,	// (0x00091abb) aid_sp_fs_text_primary

0xd5de,	// (0x00091ac4) aid_sp_fs_text_secondary

0x08cb,	// (0x00084db1) list_medium_line

0x08cb,	// (0x00084db1) list_medium_line_g2

0x08cb,	// (0x00084db1) list_medium_line_g3

0x08cb,	// (0x00084db1) list_medium_line_plain

0x08cb,	// (0x00084db1) list_medium_line_plain_t2

0x08cb,	// (0x00084db1) list_medium_line_plain_t3

0x08cb,	// (0x00084db1) list_medium_line_right_icon

0x08cb,	// (0x00084db1) list_medium_line_right_iconx2

0x08cb,	// (0x00084db1) list_medium_line_t2

0x08cb,	// (0x00084db1) list_medium_line_t2_g2

0x08cb,	// (0x00084db1) list_medium_line_t2_g3

0x08cb,	// (0x00084db1) list_medium_line_t2_right_icon

0x08cb,	// (0x00084db1) list_medium_line_t2_right_iconx2

0x08cb,	// (0x00084db1) list_medium_line_t3

0x08cb,	// (0x00084db1) list_medium_line_t3_g2

0x08cb,	// (0x00084db1) list_medium_line_t3_g3

0x08cb,	// (0x00084db1) list_medium_line_t3_right_iconx2

0x08cb,	// (0x00084db1) list_medium_line_t4_g4

0x08cb,	// (0x00084db1) list_medium_line_x2

0x08cb,	// (0x00084db1) list_medium_line_x2_t2_g2

0x08cb,	// (0x00084db1) list_medium_line_x2_t2_g3

0x08cb,	// (0x00084db1) list_medium_line_x2_t2_g4

0x08cb,	// (0x00084db1) list_medium_line_x2_t3

0x08cb,	// (0x00084db1) list_medium_line_x2_t3_g2

0x08cb,	// (0x00084db1) list_medium_line_x2_t3_g3

0x08cb,	// (0x00084db1) list_medium_line_x2_t3_g4

0x08cb,	// (0x00084db1) list_medium_line_x2_t4_g2

0x08cb,	// (0x00084db1) list_medium_line_x2_t4_g4

0x08cb,	// (0x00084db1) list_medium_line_x3

0x08cb,	// (0x00084db1) list_medium_line_x3_t4

0x08cb,	// (0x00084db1) list_medium_line_x3_t4_g4

0x08cb,	// (0x00084db1) list_medium_line_x4_t4

0x08cb,	// (0x00084db1) list_medium_line_x4_t4_g7

0x08cb,	// (0x00084db1) list_medium_line_x4_t5

0x937a,	// (0x0008d860) list_single_fs_dyc_pane_ParamLimits

0x937a,	// (0x0008d860) list_single_fs_dyc_pane

0x398a,	// (0x00087e70) list_medium_line_x4_t4_g7_g1_ParamLimits

0x398a,	// (0x00087e70) list_medium_line_x4_t4_g7_g1

0x398a,	// (0x00087e70) list_medium_line_x4_t4_g7_g2_ParamLimits

0x398a,	// (0x00087e70) list_medium_line_x4_t4_g7_g2

0x398a,	// (0x00087e70) list_medium_line_x4_t4_g7_g3_ParamLimits

0x398a,	// (0x00087e70) list_medium_line_x4_t4_g7_g3

0x398a,	// (0x00087e70) list_medium_line_x4_t4_g7_g4_ParamLimits

0x398a,	// (0x00087e70) list_medium_line_x4_t4_g7_g4

0x398a,	// (0x00087e70) list_medium_line_x4_t4_g7_g5_ParamLimits

0x398a,	// (0x00087e70) list_medium_line_x4_t4_g7_g5

0x398a,	// (0x00087e70) list_medium_line_x4_t4_g7_g6_ParamLimits

0x398a,	// (0x00087e70) list_medium_line_x4_t4_g7_g6

0x3998,	// (0x00087e7e) list_medium_line_x4_t4_g7_g7_ParamLimits

0x3998,	// (0x00087e7e) list_medium_line_x4_t4_g7_g7

0x0006,

0xfb60,	// (0x00094046) list_medium_line_x4_t4_g7_g_ParamLimits

0xfb60,	// (0x00094046) list_medium_line_x4_t4_g7_g

0x449b,	// (0x00088981) list_medium_line_x4_t4_g7_t1_ParamLimits

0x449b,	// (0x00088981) list_medium_line_x4_t4_g7_t1

0x449b,	// (0x00088981) list_medium_line_x4_t4_g7_t2_ParamLimits

0x449b,	// (0x00088981) list_medium_line_x4_t4_g7_t2

0x449b,	// (0x00088981) list_medium_line_x4_t4_g7_t3_ParamLimits

0x449b,	// (0x00088981) list_medium_line_x4_t4_g7_t3

0xc3db,	// (0x000908c1) list_medium_line_x4_t4_g7_t4_ParamLimits

0xc3db,	// (0x000908c1) list_medium_line_x4_t4_g7_t4

0xc3db,	// (0x000908c1) list_medium_line_x4_t4_g7_t5_ParamLimits

0xc3db,	// (0x000908c1) list_medium_line_x4_t4_g7_t5

0x0004,

0xfb6f,	// (0x00094055) list_medium_line_x4_t4_g7_t_ParamLimits

0xfb6f,	// (0x00094055) list_medium_line_x4_t4_g7_t

0x9a9c,	// (0x0008df82) list_single_dyc_row_pane_ParamLimits

0x9a9c,	// (0x0008df82) list_single_dyc_row_pane

0xa16c,	// (0x0008e652) call5_gesture_pane_ParamLimits

0xa16c,	// (0x0008e652) call5_gesture_pane

0xa1c2,	// (0x0008e6a8) call5_windows_pane_ParamLimits

0xa1c2,	// (0x0008e6a8) call5_windows_pane

0xa22d,	// (0x0008e713) call5_swipe_1_pane_cp_ParamLimits

0xa22d,	// (0x0008e713) call5_swipe_1_pane_cp

0xa239,	// (0x0008e71f) call5_swipe_2_pane_cp_ParamLimits

0xa239,	// (0x0008e71f) call5_swipe_2_pane_cp

0x4432,	// (0x00088918) call5_image_pane_cp

0xa245,	// (0x0008e72b) popup_call5_audio_first_window_cp_ParamLimits

0xa245,	// (0x0008e72b) popup_call5_audio_first_window_cp

0xe108,	// (0x000925ee) call5_swipe_1_pane_g1_cp_ParamLimits

0xe108,	// (0x000925ee) call5_swipe_1_pane_g1_cp

0xe175,	// (0x0009265b) call5_swipe_1_pane_g2_cp

0xe121,	// (0x00092607) call5_swipe_1_pane_t1_cp_ParamLimits

0xe121,	// (0x00092607) call5_swipe_1_pane_t1_cp

0xe108,	// (0x000925ee) call5_swipe_2_pane_g1_cp_ParamLimits

0xe108,	// (0x000925ee) call5_swipe_2_pane_g1_cp

0xe17d,	// (0x00092663) call5_swipe_2_pane_g2_cp

0xe185,	// (0x0009266b) call5_swipe_2_pane_t1_cp_ParamLimits

0xe185,	// (0x0009266b) call5_swipe_2_pane_t1_cp

0x3931,	// (0x00087e17) main_sp_fs_email_pane

0xe19a,	// (0x00092680) main_sp_fs_listscroll_pane_te

0xa253,	// (0x0008e739) popup_sp_fs_action_menu_pane_ParamLimits

0xa253,	// (0x0008e739) popup_sp_fs_action_menu_pane

0x461f,	// (0x00088b05) bg_sp_fs_ctrlbar_pane_g1

0xe1a3,	// (0x00092689) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe1ac,	// (0x00092692) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x175e,	// (0x00085c44) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x461f,	// (0x00088b05) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfc5d,	// (0x00094143) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xceee,	// (0x000913d4) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xceee,	// (0x000913d4) bg_sp_fs_ctrlbar_ddmenu_pane

0xe1b5,	// (0x0009269b) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe1b5,	// (0x0009269b) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe1c1,	// (0x000926a7) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe1c1,	// (0x000926a7) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfc66,	// (0x0009414c) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfc66,	// (0x0009414c) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe1cd,	// (0x000926b3) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe1cd,	// (0x000926b3) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x461f,	// (0x00088b05) list_medium_line_t2_right_icon_g1

0xbddf,	// (0x000902c5) list_medium_line_t2_right_icon_t1

0xbddf,	// (0x000902c5) list_medium_line_t2_right_icon_t2

0x0001,

0xfc6b,	// (0x00094151) list_medium_line_t2_right_icon_t

0x1789,	// (0x00085c6f) bg_sp_fs_ctrlbar_pane_ParamLimits

0x1789,	// (0x00085c6f) bg_sp_fs_ctrlbar_pane

0xa2dd,	// (0x0008e7c3) main_sp_fs_ctrlbar_button_pane_cp01

0xa2e7,	// (0x0008e7cd) main_sp_fs_ctrlbar_ddmenu_pane

0xe21f,	// (0x00092705) main_sp_fs_ctrlbar_pane_g1

0xe22b,	// (0x00092711) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfc70,	// (0x00094156) main_sp_fs_ctrlbar_pane_g

0xa325,	// (0x0008e80b) main_sp_fs_ctrlbar_pane_t1

0xa364,	// (0x0008e84a) main_sp_fs_ctrlbar_pane

0xa388,	// (0x0008e86e) main_sp_fs_listscroll_pane_te_cp01

0xa3a8,	// (0x0008e88e) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0xa3a8,	// (0x0008e88e) popup_sp_fs_action_menu_pane_cp01

0x3931,	// (0x00087e17) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x3931,	// (0x00087e17) bg_sp_fs_highlight_list_pane_cp01

0xe252,	// (0x00092738) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xe252,	// (0x00092738) sp_fs_action_menu_list_gene_pane_g1

0xe261,	// (0x00092747) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe261,	// (0x00092747) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfc7e,	// (0x00094164) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfc7e,	// (0x00094164) sp_fs_action_menu_list_gene_pane_g

0xe26e,	// (0x00092754) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xe26e,	// (0x00092754) sp_fs_action_menu_list_gene_pane_t1

0xe286,	// (0x0009276c) sp_fs_action_menu_list_gene_pane_ParamLimits

0xe286,	// (0x0009276c) sp_fs_action_menu_list_gene_pane

0xe2a5,	// (0x0009278b) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe2a5,	// (0x0009278b) popup_sp_fs_action_menu_bg_pane

0xe2b3,	// (0x00092799) sp_fs_action_menu_list_pane_ParamLimits

0xe2b3,	// (0x00092799) sp_fs_action_menu_list_pane

0xa3cd,	// (0x0008e8b3) sp_fs_scroll_pane_cp01_ParamLimits

0xa3cd,	// (0x0008e8b3) sp_fs_scroll_pane_cp01

0xbddf,	// (0x000902c5) list_medium_line_plain_t2_t1

0xbddf,	// (0x000902c5) list_medium_line_plain_t2_t2

0x0001,

0xfc6b,	// (0x00094151) list_medium_line_plain_t2_t

0xbddf,	// (0x000902c5) list_medium_line_plain_t3_t1

0xbddf,	// (0x000902c5) list_medium_line_plain_t3_t2

0xbddf,	// (0x000902c5) list_medium_line_plain_t3_t3

0x0002,

0xf2bc,	// (0x000937a2) list_medium_line_plain_t3_t

0x398a,	// (0x00087e70) list_medium_line_x2_t2_g2_g1_ParamLimits

0x398a,	// (0x00087e70) list_medium_line_x2_t2_g2_g1

0x398a,	// (0x00087e70) list_medium_line_x2_t2_g2_g2_ParamLimits

0x398a,	// (0x00087e70) list_medium_line_x2_t2_g2_g2

0x0001,

0xf201,	// (0x000936e7) list_medium_line_x2_t2_g2_g_ParamLimits

0xf201,	// (0x000936e7) list_medium_line_x2_t2_g2_g

0x449b,	// (0x00088981) list_medium_line_x2_t2_g2_t1_ParamLimits

0x449b,	// (0x00088981) list_medium_line_x2_t2_g2_t1

0x449b,	// (0x00088981) list_medium_line_x2_t2_g2_t2_ParamLimits

0x449b,	// (0x00088981) list_medium_line_x2_t2_g2_t2

0x0001,

0xf1d6,	// (0x000936bc) list_medium_line_x2_t2_g2_t_ParamLimits

0xf1d6,	// (0x000936bc) list_medium_line_x2_t2_g2_t

0x398a,	// (0x00087e70) list_medium_line_x2_t4_g2_g1_ParamLimits

0x398a,	// (0x00087e70) list_medium_line_x2_t4_g2_g1

0x398a,	// (0x00087e70) list_medium_line_x2_t4_g2_g2_ParamLimits

0x398a,	// (0x00087e70) list_medium_line_x2_t4_g2_g2

0x0001,

0xf201,	// (0x000936e7) list_medium_line_x2_t4_g2_g_ParamLimits

0xf201,	// (0x000936e7) list_medium_line_x2_t4_g2_g

0x449b,	// (0x00088981) list_medium_line_x2_t4_g2_t1_ParamLimits

0x449b,	// (0x00088981) list_medium_line_x2_t4_g2_t1

0x449b,	// (0x00088981) list_medium_line_x2_t4_g2_t2_ParamLimits

0x449b,	// (0x00088981) list_medium_line_x2_t4_g2_t2

0x449b,	// (0x00088981) list_medium_line_x2_t4_g2_t3_ParamLimits

0x449b,	// (0x00088981) list_medium_line_x2_t4_g2_t3

0x449b,	// (0x00088981) list_medium_line_x2_t4_g2_t4_ParamLimits

0x449b,	// (0x00088981) list_medium_line_x2_t4_g2_t4

0x0003,

0xf20f,	// (0x000936f5) list_medium_line_x2_t4_g2_t_ParamLimits

0xf20f,	// (0x000936f5) list_medium_line_x2_t4_g2_t

0x461f,	// (0x00088b05) list_medium_line_t3_right_iconx2_g1

0x461f,	// (0x00088b05) list_medium_line_t3_right_iconx2_g2

0x461f,	// (0x00088b05) list_medium_line_t3_right_iconx2_g3

0x0002,

0xf3dd,	// (0x000938c3) list_medium_line_t3_right_iconx2_g

0xbddf,	// (0x000902c5) list_medium_line_t3_right_iconx2_t1

0xbddf,	// (0x000902c5) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfc6b,	// (0x00094151) list_medium_line_t3_right_iconx2_t

0x398a,	// (0x00087e70) list_medium_line_x3_t4_g4_g1_ParamLimits

0x398a,	// (0x00087e70) list_medium_line_x3_t4_g4_g1

0x398a,	// (0x00087e70) list_medium_line_x3_t4_g4_g2_ParamLimits

0x398a,	// (0x00087e70) list_medium_line_x3_t4_g4_g2

0x398a,	// (0x00087e70) list_medium_line_x3_t4_g4_g3_ParamLimits

0x398a,	// (0x00087e70) list_medium_line_x3_t4_g4_g3

0x398a,	// (0x00087e70) list_medium_line_x3_t4_g4_g4_ParamLimits

0x398a,	// (0x00087e70) list_medium_line_x3_t4_g4_g4

0x0003,

0xf206,	// (0x000936ec) list_medium_line_x3_t4_g4_g_ParamLimits

0xf206,	// (0x000936ec) list_medium_line_x3_t4_g4_g

0x449b,	// (0x00088981) list_medium_line_x3_t4_g4_t1_ParamLimits

0x449b,	// (0x00088981) list_medium_line_x3_t4_g4_t1

0x449b,	// (0x00088981) list_medium_line_x3_t4_g4_t2_ParamLimits

0x449b,	// (0x00088981) list_medium_line_x3_t4_g4_t2

0x449b,	// (0x00088981) list_medium_line_x3_t4_g4_t3_ParamLimits

0x449b,	// (0x00088981) list_medium_line_x3_t4_g4_t3

0x449b,	// (0x00088981) list_medium_line_x3_t4_g4_t4_ParamLimits

0x449b,	// (0x00088981) list_medium_line_x3_t4_g4_t4

0x0003,

0xf20f,	// (0x000936f5) list_medium_line_x3_t4_g4_t_ParamLimits

0xf20f,	// (0x000936f5) list_medium_line_x3_t4_g4_t

0xa3f3,	// (0x0008e8d9) list_single_dyc_row_text_pane_t1_ParamLimits

0xa3f3,	// (0x0008e8d9) list_single_dyc_row_text_pane_t1

0xa43c,	// (0x0008e922) list_single_dyc_row_text_pane_t2_ParamLimits

0xa43c,	// (0x0008e922) list_single_dyc_row_text_pane_t2

0xe2d3,	// (0x000927b9) list_single_dyc_row_text_pane_t3_ParamLimits

0xe2d3,	// (0x000927b9) list_single_dyc_row_text_pane_t3

0x0005,

0xfc83,	// (0x00094169) list_single_dyc_row_text_pane_t_ParamLimits

0xfc83,	// (0x00094169) list_single_dyc_row_text_pane_t

0xe2f7,	// (0x000927dd) list_single_dyc_row_pane_g1_ParamLimits

0xe2f7,	// (0x000927dd) list_single_dyc_row_pane_g1

0xe303,	// (0x000927e9) list_single_dyc_row_pane_g2_ParamLimits

0xe303,	// (0x000927e9) list_single_dyc_row_pane_g2

0xe30f,	// (0x000927f5) list_single_dyc_row_pane_g3_ParamLimits

0xe30f,	// (0x000927f5) list_single_dyc_row_pane_g3

0xe31b,	// (0x00092801) list_single_dyc_row_pane_g4_ParamLimits

0xe31b,	// (0x00092801) list_single_dyc_row_pane_g4

0x0003,

0xfc90,	// (0x00094176) list_single_dyc_row_pane_g_ParamLimits

0xfc90,	// (0x00094176) list_single_dyc_row_pane_g

0xe327,	// (0x0009280d) list_single_dyc_row_text_pane_ParamLimits

0xe327,	// (0x0009280d) list_single_dyc_row_text_pane

0x08cb,	// (0x00084db1) bg_sp_fs_scroll_pane

0xe346,	// (0x0009282c) thumb_sp_fs_scroll_pane

0x398a,	// (0x00087e70) list_medium_line_g1_ParamLimits

0x398a,	// (0x00087e70) list_medium_line_g1

0x449b,	// (0x00088981) list_medium_line_t1_ParamLimits

0x449b,	// (0x00088981) list_medium_line_t1

0x398a,	// (0x00087e70) list_medium_line_x2_g1_ParamLimits

0x398a,	// (0x00087e70) list_medium_line_x2_g1

0x398a,	// (0x00087e70) list_medium_line_x2_g2_ParamLimits

0x398a,	// (0x00087e70) list_medium_line_x2_g2

0x0001,

0xf201,	// (0x000936e7) list_medium_line_x2_g_ParamLimits

0xf201,	// (0x000936e7) list_medium_line_x2_g

0x449b,	// (0x00088981) list_medium_line_x2_t1_ParamLimits

0x449b,	// (0x00088981) list_medium_line_x2_t1

0x398a,	// (0x00087e70) list_medium_line_x3_g1_ParamLimits

0x398a,	// (0x00087e70) list_medium_line_x3_g1

0x25d8,	// (0x00086abe) list_medium_line_x3_g2_ParamLimits

0x25d8,	// (0x00086abe) list_medium_line_x3_g2

0x0001,

0xfc99,	// (0x0009417f) list_medium_line_x3_g_ParamLimits

0xfc99,	// (0x0009417f) list_medium_line_x3_g

0xe34f,	// (0x00092835) list_medium_line_x3_t1_ParamLimits

0xe34f,	// (0x00092835) list_medium_line_x3_t1

0xe363,	// (0x00092849) thumb_sp_fs_scroll_pane_g1

0xe36c,	// (0x00092852) thumb_sp_fs_scroll_pane_g2

0xe375,	// (0x0009285b) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfc9e,	// (0x00094184) thumb_sp_fs_scroll_pane_g

0xe363,	// (0x00092849) bg_sp_fs_scroll_pane_g1

0xe36c,	// (0x00092852) bg_sp_fs_scroll_pane_g2

0xe375,	// (0x0009285b) bg_sp_fs_scroll_pane_g3

0x0002,

0xfc9e,	// (0x00094184) bg_sp_fs_scroll_pane_g

0x398a,	// (0x00087e70) list_medium_line_x2_t3_g4_g1_ParamLimits

0x398a,	// (0x00087e70) list_medium_line_x2_t3_g4_g1

0x398a,	// (0x00087e70) list_medium_line_x2_t3_g4_g2_ParamLimits

0x398a,	// (0x00087e70) list_medium_line_x2_t3_g4_g2

0x398a,	// (0x00087e70) list_medium_line_x2_t3_g4_g3_ParamLimits

0x398a,	// (0x00087e70) list_medium_line_x2_t3_g4_g3

0x398a,	// (0x00087e70) list_medium_line_x2_t3_g4_g4_ParamLimits

0x398a,	// (0x00087e70) list_medium_line_x2_t3_g4_g4

0x0003,

0xf206,	// (0x000936ec) list_medium_line_x2_t3_g4_g_ParamLimits

0xf206,	// (0x000936ec) list_medium_line_x2_t3_g4_g

0x449b,	// (0x00088981) list_medium_line_x2_t3_g4_t1_ParamLimits

0x449b,	// (0x00088981) list_medium_line_x2_t3_g4_t1

0x449b,	// (0x00088981) list_medium_line_x2_t3_g4_t2_ParamLimits

0x449b,	// (0x00088981) list_medium_line_x2_t3_g4_t2

0x449b,	// (0x00088981) list_medium_line_x2_t3_g4_t3_ParamLimits

0x449b,	// (0x00088981) list_medium_line_x2_t3_g4_t3

0x0002,

0xf1fa,	// (0x000936e0) list_medium_line_x2_t3_g4_t_ParamLimits

0xf1fa,	// (0x000936e0) list_medium_line_x2_t3_g4_t

0x398a,	// (0x00087e70) list_medium_line_g2_g1_ParamLimits

0x398a,	// (0x00087e70) list_medium_line_g2_g1

0x398a,	// (0x00087e70) list_medium_line_g2_g2_ParamLimits

0x398a,	// (0x00087e70) list_medium_line_g2_g2

0x0001,

0xf201,	// (0x000936e7) list_medium_line_g2_g_ParamLimits

0xf201,	// (0x000936e7) list_medium_line_g2_g

0x449b,	// (0x00088981) list_medium_line_g2_t1_ParamLimits

0x449b,	// (0x00088981) list_medium_line_g2_t1

0x398a,	// (0x00087e70) list_medium_line_t3_g2_g1_ParamLimits

0x398a,	// (0x00087e70) list_medium_line_t3_g2_g1

0x398a,	// (0x00087e70) list_medium_line_t3_g2_g2_ParamLimits

0x398a,	// (0x00087e70) list_medium_line_t3_g2_g2

0x0001,

0xf201,	// (0x000936e7) list_medium_line_t3_g2_g_ParamLimits

0xf201,	// (0x000936e7) list_medium_line_t3_g2_g

0x449b,	// (0x00088981) list_medium_line_t3_g2_t1_ParamLimits

0x449b,	// (0x00088981) list_medium_line_t3_g2_t1

0x449b,	// (0x00088981) list_medium_line_t3_g2_t2_ParamLimits

0x449b,	// (0x00088981) list_medium_line_t3_g2_t2

0x449b,	// (0x00088981) list_medium_line_t3_g2_t3_ParamLimits

0x449b,	// (0x00088981) list_medium_line_t3_g2_t3

0x0002,

0xf1fa,	// (0x000936e0) list_medium_line_t3_g2_t_ParamLimits

0xf1fa,	// (0x000936e0) list_medium_line_t3_g2_t

0x461f,	// (0x00088b05) list_medium_line_right_icon_g1

0xbddf,	// (0x000902c5) list_medium_line_right_icon_t1

0x398a,	// (0x00087e70) list_medium_line_t2_g1_ParamLimits

0x398a,	// (0x00087e70) list_medium_line_t2_g1

0x449b,	// (0x00088981) list_medium_line_t2_t1_ParamLimits

0x449b,	// (0x00088981) list_medium_line_t2_t1

0x449b,	// (0x00088981) list_medium_line_t2_t2_ParamLimits

0x449b,	// (0x00088981) list_medium_line_t2_t2

0x0001,

0xf1d6,	// (0x000936bc) list_medium_line_t2_t_ParamLimits

0xf1d6,	// (0x000936bc) list_medium_line_t2_t

0x398a,	// (0x00087e70) list_medium_line_t3_g1_ParamLimits

0x398a,	// (0x00087e70) list_medium_line_t3_g1

0x449b,	// (0x00088981) list_medium_line_t3_t1_ParamLimits

0x449b,	// (0x00088981) list_medium_line_t3_t1

0x449b,	// (0x00088981) list_medium_line_t3_t2_ParamLimits

0x449b,	// (0x00088981) list_medium_line_t3_t2

0x449b,	// (0x00088981) list_medium_line_t3_t3_ParamLimits

0x449b,	// (0x00088981) list_medium_line_t3_t3

0x0002,

0xf1fa,	// (0x000936e0) list_medium_line_t3_t_ParamLimits

0xf1fa,	// (0x000936e0) list_medium_line_t3_t

0x398a,	// (0x00087e70) list_medium_line_g3_g1_ParamLimits

0x398a,	// (0x00087e70) list_medium_line_g3_g1

0x398a,	// (0x00087e70) list_medium_line_g3_g2_ParamLimits

0x398a,	// (0x00087e70) list_medium_line_g3_g2

0x398a,	// (0x00087e70) list_medium_line_g3_g3_ParamLimits

0x398a,	// (0x00087e70) list_medium_line_g3_g3

0x0002,

0xf1f3,	// (0x000936d9) list_medium_line_g3_g_ParamLimits

0xf1f3,	// (0x000936d9) list_medium_line_g3_g

0x449b,	// (0x00088981) list_medium_line_g3_t1_ParamLimits

0x449b,	// (0x00088981) list_medium_line_g3_t1

0x398a,	// (0x00087e70) list_medium_line_t2_g3_g1_ParamLimits

0x398a,	// (0x00087e70) list_medium_line_t2_g3_g1

0x398a,	// (0x00087e70) list_medium_line_t2_g3_g2_ParamLimits

0x398a,	// (0x00087e70) list_medium_line_t2_g3_g2

0x398a,	// (0x00087e70) list_medium_line_t2_g3_g3_ParamLimits

0x398a,	// (0x00087e70) list_medium_line_t2_g3_g3

0x0002,

0xf1f3,	// (0x000936d9) list_medium_line_t2_g3_g_ParamLimits

0xf1f3,	// (0x000936d9) list_medium_line_t2_g3_g

0x449b,	// (0x00088981) list_medium_line_t2_g3_t1_ParamLimits

0x449b,	// (0x00088981) list_medium_line_t2_g3_t1

0x449b,	// (0x00088981) list_medium_line_t2_g3_t2_ParamLimits

0x449b,	// (0x00088981) list_medium_line_t2_g3_t2

0x0001,

0xf1d6,	// (0x000936bc) list_medium_line_t2_g3_t_ParamLimits

0xf1d6,	// (0x000936bc) list_medium_line_t2_g3_t

0x398a,	// (0x00087e70) list_medium_line_t3_g3_g1_ParamLimits

0x398a,	// (0x00087e70) list_medium_line_t3_g3_g1

0x398a,	// (0x00087e70) list_medium_line_t3_g3_g2_ParamLimits

0x398a,	// (0x00087e70) list_medium_line_t3_g3_g2

0x398a,	// (0x00087e70) list_medium_line_t3_g3_g3_ParamLimits

0x398a,	// (0x00087e70) list_medium_line_t3_g3_g3

0x0002,

0xf1f3,	// (0x000936d9) list_medium_line_t3_g3_g_ParamLimits

0xf1f3,	// (0x000936d9) list_medium_line_t3_g3_g

0x449b,	// (0x00088981) list_medium_line_t3_g3_t1_ParamLimits

0x449b,	// (0x00088981) list_medium_line_t3_g3_t1

0x449b,	// (0x00088981) list_medium_line_t3_g3_t2_ParamLimits

0x449b,	// (0x00088981) list_medium_line_t3_g3_t2

0x449b,	// (0x00088981) list_medium_line_t3_g3_t3_ParamLimits

0x449b,	// (0x00088981) list_medium_line_t3_g3_t3

0x0002,

0xf1fa,	// (0x000936e0) list_medium_line_t3_g3_t_ParamLimits

0xf1fa,	// (0x000936e0) list_medium_line_t3_g3_t

0x461f,	// (0x00088b05) list_medium_line_right_iconx2_g1

0x461f,	// (0x00088b05) list_medium_line_right_iconx2_g2

0x0001,

0xf3d8,	// (0x000938be) list_medium_line_right_iconx2_g

0xbddf,	// (0x000902c5) list_medium_line_right_iconx2_t1

0x461f,	// (0x00088b05) list_medium_line_t2_right_iconx2_g1

0x461f,	// (0x00088b05) list_medium_line_t2_right_iconx2_g2

0x0001,

0xf3d8,	// (0x000938be) list_medium_line_t2_right_iconx2_g

0xbddf,	// (0x000902c5) list_medium_line_t2_right_iconx2_t1

0xbddf,	// (0x000902c5) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfc6b,	// (0x00094151) list_medium_line_t2_right_iconx2_t

0xbddf,	// (0x000902c5) list_medium_line_x4_t4_t1

0xbddf,	// (0x000902c5) list_medium_line_x4_t4_t2

0xbddf,	// (0x000902c5) list_medium_line_x4_t4_t3

0xbddf,	// (0x000902c5) list_medium_line_x4_t4_t4

0x0003,

0xf2c3,	// (0x000937a9) list_medium_line_x4_t4_t

0xa5b4,	// (0x0008ea9a) tport_appsw_pane_ParamLimits

0xa5b4,	// (0x0008ea9a) tport_appsw_pane

0xa5cc,	// (0x0008eab2) tport_contact_pane_ParamLimits

0xa5cc,	// (0x0008eab2) tport_contact_pane

0xa5e4,	// (0x0008eaca) tport_listscroll_pane_ParamLimits

0xa5e4,	// (0x0008eaca) tport_listscroll_pane

0xa5fe,	// (0x0008eae4) cell_tport_appsw_pane_ParamLimits

0xa5fe,	// (0x0008eae4) cell_tport_appsw_pane

0x247b,	// (0x00086961) tport_appsw_pane_g1_ParamLimits

0x247b,	// (0x00086961) tport_appsw_pane_g1

0xe37e,	// (0x00092864) tport_contact_pane_g1

0xe387,	// (0x0009286d) tport_contact_pane_t1

0xe395,	// (0x0009287b) tport_contact_pane_t2

0x0001,

0xfca5,	// (0x0009418b) tport_contact_pane_t

0xe3a3,	// (0x00092889) list_tport_pane

0xe3ac,	// (0x00092892) scroll_pane_cp_030

0xa646,	// (0x0008eb2c) cell_tport_appsw_pane_g1

0xa656,	// (0x0008eb3c) cell_tport_appsw_pane_t1

0xa664,	// (0x0008eb4a) grid_highlight_pane_cp019

0xa66c,	// (0x0008eb52) list_tport_double_graphic_pane_ParamLimits

0xa66c,	// (0x0008eb52) list_tport_double_graphic_pane

0x3931,	// (0x00087e17) list_highlight_pane_cp023_ParamLimits

0x3931,	// (0x00087e17) list_highlight_pane_cp023

0xa679,	// (0x0008eb5f) list_tport_double_graphic_pane_g1_ParamLimits

0xa679,	// (0x0008eb5f) list_tport_double_graphic_pane_g1

0xa686,	// (0x0008eb6c) list_tport_double_graphic_pane_t1_ParamLimits

0xa686,	// (0x0008eb6c) list_tport_double_graphic_pane_t1

0xa69b,	// (0x0008eb81) list_tport_double_graphic_pane_t2_ParamLimits

0xa69b,	// (0x0008eb81) list_tport_double_graphic_pane_t2

0x0001,

0xfcb1,	// (0x00094197) list_tport_double_graphic_pane_t_ParamLimits

0xfcb1,	// (0x00094197) list_tport_double_graphic_pane_t

0x08cb,	// (0x00084db1) main_cale_note_pane

0x84d6,	// (0x0008c9bc) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x84d6,	// (0x0008c9bc) cell_vitu2_function_top_wide_pane_cp01

0x9e38,	// (0x0008e31e) wait_bar_pane_cp05_ParamLimits

0x3931,	// (0x00087e17) listscroll_cmail_pane

0xe3b5,	// (0x0009289b) list_cmail_pane

0xa6ad,	// (0x0008eb93) list_cmail_body_pane

0xa6c3,	// (0x0008eba9) list_single_cmail_header_caption_pane

0xa6da,	// (0x0008ebc0) list_single_cmail_header_detail_pane_ParamLimits

0xa6da,	// (0x0008ebc0) list_single_cmail_header_detail_pane

0xe3c5,	// (0x000928ab) list_single_cmail_header_caption_pane_t1

0xa704,	// (0x0008ebea) list_single_cmail_header_detail_pane_g1_ParamLimits

0xa704,	// (0x0008ebea) list_single_cmail_header_detail_pane_g1

0xe3dc,	// (0x000928c2) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe3dc,	// (0x000928c2) list_single_cmail_header_detail_pane_g2

0x0002,

0xfcb6,	// (0x0009419c) list_single_cmail_header_detail_pane_g_ParamLimits

0xfcb6,	// (0x0009419c) list_single_cmail_header_detail_pane_g

0xe3f5,	// (0x000928db) list_single_cmail_header_detail_pane_t1_ParamLimits

0xe3f5,	// (0x000928db) list_single_cmail_header_detail_pane_t1

0xe455,	// (0x0009293b) list_single_cmail_header_editor_pane_bg_ParamLimits

0xe455,	// (0x0009293b) list_single_cmail_header_editor_pane_bg

0xdd79,	// (0x0009225f) list_cmail_body_pane_g1

0xe46c,	// (0x00092952) list_cmail_body_pane_t1

0x249b,	// (0x00086981) list_single_cmail_header_editor_pane_bg_g1

0x4ce6,	// (0x000891cc) list_single_cmail_header_editor_pane_bg_g1_copy1

0x24ab,	// (0x00086991) list_single_cmail_header_editor_pane_bg_g1_copy2

0x24a3,	// (0x00086989) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd2a5,	// (0x0009178b) list_single_cmail_header_editor_pane_bg_g1_copy4

0x24cb,	// (0x000869b1) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x24bb,	// (0x000869a1) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x24c3,	// (0x000869a9) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x4cc6,	// (0x000891ac) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xa71c,	// (0x0008ec02) calenote_gesture_pane_ParamLimits

0xa71c,	// (0x0008ec02) calenote_gesture_pane

0xa73c,	// (0x0008ec22) calenote_window_pane_ParamLimits

0xa73c,	// (0x0008ec22) calenote_window_pane

0xe47a,	// (0x00092960) popup_note_window_cp01

0xa758,	// (0x0008ec3e) calenote_swipe_1_pane_ParamLimits

0xa758,	// (0x0008ec3e) calenote_swipe_1_pane

0xa239,	// (0x0008e71f) calenote_swipe_2_pane_ParamLimits

0xa239,	// (0x0008e71f) calenote_swipe_2_pane

0xe108,	// (0x000925ee) calenote_swipe_1_pane_g1_ParamLimits

0xe108,	// (0x000925ee) calenote_swipe_1_pane_g1

0xe115,	// (0x000925fb) calenote_swipe_1_pane_g2_ParamLimits

0xe115,	// (0x000925fb) calenote_swipe_1_pane_g2

0x0001,

0xfc53,	// (0x00094139) calenote_swipe_1_pane_g_ParamLimits

0xfc53,	// (0x00094139) calenote_swipe_1_pane_g

0xe48c,	// (0x00092972) calenote_swipe_1_pane_t1_ParamLimits

0xe48c,	// (0x00092972) calenote_swipe_1_pane_t1

0xe108,	// (0x000925ee) calenote_swipe_2_pane_g1_ParamLimits

0xe108,	// (0x000925ee) calenote_swipe_2_pane_g1

0xe4ab,	// (0x00092991) calenote_swipe_2_pane_g2_ParamLimits

0xe4ab,	// (0x00092991) calenote_swipe_2_pane_g2

0x0001,

0xfcc2,	// (0x000941a8) calenote_swipe_2_pane_g_ParamLimits

0xfcc2,	// (0x000941a8) calenote_swipe_2_pane_g

0xe4b7,	// (0x0009299d) calenote_swipe_2_pane_t1_ParamLimits

0xe4b7,	// (0x0009299d) calenote_swipe_2_pane_t1

0x08cb,	// (0x00084db1) main_mup_navstr_pane

0x738b,	// (0x0008b871) main_mup3_pane_t7_ParamLimits

0x738b,	// (0x0008b871) main_mup3_pane_t7

0xd047,	// (0x0009152d) main_mp4_pane_g6_ParamLimits

0xd047,	// (0x0009152d) main_mp4_pane_g6

0xee2b,	// (0x00093311) main_image3_pane_t4_ParamLimits

0xee2b,	// (0x00093311) main_image3_pane_t4

0xa76d,	// (0x0008ec53) popup_navstr_preview_pane_ParamLimits

0xa76d,	// (0x0008ec53) popup_navstr_preview_pane

0xa781,	// (0x0008ec67) scroll_navstr_pane_ParamLimits

0xa781,	// (0x0008ec67) scroll_navstr_pane

0x08cb,	// (0x00084db1) bg_popup_preview_window_pane_cp04

0xe4de,	// (0x000929c4) popup_navstr_preview_pane_t1

0xa795,	// (0x0008ec7b) scroll_navstr_pane_g1_ParamLimits

0xa795,	// (0x0008ec7b) scroll_navstr_pane_g1

0xa7a9,	// (0x0008ec8f) scroll_navstr_pane_t1_ParamLimits

0xa7a9,	// (0x0008ec8f) scroll_navstr_pane_t1

0xe483,	// (0x00092969) bg_button_pane_cp014

0xe483,	// (0x00092969) bg_button_pane_cp030

0xe0a9,	// (0x0009258f) list_double_fisheye_pane_g4_ParamLimits

0xe0a9,	// (0x0009258f) list_double_fisheye_pane_g4

0xe0b5,	// (0x0009259b) list_double_fisheye_pane_g5_ParamLimits

0xe0b5,	// (0x0009259b) list_double_fisheye_pane_g5

0x25c3,	// (0x00086aa9) sp_fs_scroll_pane_cp03

0xe21f,	// (0x00092705) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe22b,	// (0x00092711) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfc70,	// (0x00094156) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xa325,	// (0x0008e80b) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe3bd,	// (0x000928a3) sp_fs_scroll_pane_cp02

0x3e19,	// (0x000882ff) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x3e19,	// (0x000882ff) popup_sp_fs_calendar_preview_list_single_pane

0x08cb,	// (0x00084db1) main_cam6_pano_pane

0xbb19,	// (0x0008ffff) main_mup3_pane_ParamLimits

0x08cb,	// (0x00084db1) main_phacti_pane

0x9d0b,	// (0x0008e1f1) bg_button_pane_cp11

0x9d25,	// (0x0008e20b) main_mobtv_info_pane_g2_ParamLimits

0x9d25,	// (0x0008e20b) main_mobtv_info_pane_g2

0x0001,

0xfbd0,	// (0x000940b6) main_mobtv_info_pane_g_ParamLimits

0xfbd0,	// (0x000940b6) main_mobtv_info_pane_g

0x9f02,	// (0x0008e3e8) sc_clock_pane_t5_ParamLimits

0x9f02,	// (0x0008e3e8) sc_clock_pane_t5

0x9fca,	// (0x0008e4b0) main_radioblah_pane_g1_ParamLimits

0xe017,	// (0x000924fd) main_radioblah_pane_t3_ParamLimits

0xe017,	// (0x000924fd) main_radioblah_pane_t3

0xe02f,	// (0x00092515) main_radioblah_pane_t4_ParamLimits

0xe02f,	// (0x00092515) main_radioblah_pane_t4

0x9ff2,	// (0x0008e4d8) main_radioblah_text_pane_ParamLimits

0x9ff2,	// (0x0008e4d8) main_radioblah_text_pane

0xa004,	// (0x0008e4ea) main_radioblah_info_pane_g1_ParamLimits

0xa09d,	// (0x0008e583) main_radioblah_info_pane_t4_ParamLimits

0xa09d,	// (0x0008e583) main_radioblah_info_pane_t4

0x3931,	// (0x00087e17) main_sp_fs_calendar_pane

0xa7c0,	// (0x0008eca6) main_phacti_pane_g1

0xa7c8,	// (0x0008ecae) phacti_note_pane_ParamLimits

0xa7c8,	// (0x0008ecae) phacti_note_pane

0xe4f5,	// (0x000929db) phacti_term_pane_ParamLimits

0xe4f5,	// (0x000929db) phacti_term_pane

0xe50a,	// (0x000929f0) phacti_note_pane_t1_ParamLimits

0xe50a,	// (0x000929f0) phacti_note_pane_t1

0xe521,	// (0x00092a07) phacti_term_pane_g1

0xe529,	// (0x00092a0f) phacti_term_pane_t1_ParamLimits

0xe529,	// (0x00092a0f) phacti_term_pane_t1

0xe553,	// (0x00092a39) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe55b,	// (0x00092a41) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfccc,	// (0x000941b2) popup_sp_fs_calendar_preview_list_single_pane_g

0xe563,	// (0x00092a49) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe563,	// (0x00092a49) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe579,	// (0x00092a5f) aid_popup_sp_fs_bg_corner_pane

0x461f,	// (0x00088b05) popup_sp_fs_calendar_preview_bg_pane_g1

0x08cb,	// (0x00084db1) popup_sp_fs_calendar_preview_bg_pane

0xe581,	// (0x00092a67) popup_sp_fs_calendar_preview_list_pane

0x1789,	// (0x00085c6f) bg_main_sp_fs_cale_pane_ParamLimits

0x1789,	// (0x00085c6f) bg_main_sp_fs_cale_pane

0xe592,	// (0x00092a78) listscroll_cale_mrui_pane_ParamLimits

0xe592,	// (0x00092a78) listscroll_cale_mrui_pane

0xe5a7,	// (0x00092a8d) listscroll_sp_fs_schedule_track_pane

0xe5b0,	// (0x00092a96) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe5b0,	// (0x00092a96) main_sp_fs_ctrlbar_pane_cp01

0xe5c3,	// (0x00092aa9) main_sp_fs_ribbon_pane

0xe5cb,	// (0x00092ab1) popup_sp_fs_cale_preview_window

0xa83d,	// (0x0008ed23) list_single_sp_fs_schedule_track_pane_ParamLimits

0xa83d,	// (0x0008ed23) list_single_sp_fs_schedule_track_pane

0x3931,	// (0x00087e17) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x3931,	// (0x00087e17) bg_sp_fs_highlight_list_pane_cp03

0xa851,	// (0x0008ed37) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xa851,	// (0x0008ed37) list_single_sp_fs_schedule_track_pane_g1

0xa85d,	// (0x0008ed43) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xa85d,	// (0x0008ed43) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfcd1,	// (0x000941b7) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfcd1,	// (0x000941b7) list_single_sp_fs_schedule_track_pane_g

0xa869,	// (0x0008ed4f) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xa869,	// (0x0008ed4f) list_single_sp_fs_schedule_track_pane_t1

0xa883,	// (0x0008ed69) sp_fs_schedule_track_pane_ParamLimits

0xa883,	// (0x0008ed69) sp_fs_schedule_track_pane

0xe5dd,	// (0x00092ac3) sp_fs_schedule_track_pane_g1

0xe5e5,	// (0x00092acb) sp_fs_schedule_track_pane_g2

0xe5ed,	// (0x00092ad3) sp_fs_schedule_track_pane_g3

0xe5f5,	// (0x00092adb) sp_fs_schedule_track_pane_g4

0xe5fd,	// (0x00092ae3) sp_fs_schedule_track_pane_g5

0x0004,

0xfcd6,	// (0x000941bc) sp_fs_schedule_track_pane_g

0x249b,	// (0x00086981) bg_sp_fs_schedule_viewer_highlight_g1

0x4ce6,	// (0x000891cc) bg_sp_fs_schedule_viewer_highlight_g2

0x24a3,	// (0x00086989) bg_sp_fs_schedule_viewer_highlight_g3

0x24ab,	// (0x00086991) bg_sp_fs_schedule_viewer_highlight_g4

0xd2a5,	// (0x0009178b) bg_sp_fs_schedule_viewer_highlight_g5

0x24bb,	// (0x000869a1) bg_sp_fs_schedule_viewer_highlight_g6

0x24c3,	// (0x000869a9) bg_sp_fs_schedule_viewer_highlight_g7

0x24cb,	// (0x000869b1) bg_sp_fs_schedule_viewer_highlight_g8

0x4cc6,	// (0x000891ac) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfce1,	// (0x000941c7) bg_sp_fs_schedule_viewer_highlight_g

0x08cb,	// (0x00084db1) bg_main_sp_fs_ribbon_pane

0xa894,	// (0x0008ed7a) main_sp_fs_ribbon_pane_g1

0xe605,	// (0x00092aeb) main_sp_fs_ribbon_pane_t1

0xa89d,	// (0x0008ed83) main_sp_fs_ribbon_pane_t2

0xe614,	// (0x00092afa) main_sp_fs_ribbon_pane_t3

0x0002,

0xfcf4,	// (0x000941da) main_sp_fs_ribbon_pane_t

0xe623,	// (0x00092b09) main_sp_fs_ribbon_scheduler_pane

0xe62b,	// (0x00092b11) bg_main_sp_fs_ribbon_pane_g1

0xe634,	// (0x00092b1a) bg_main_sp_fs_ribbon_pane_g2

0xe63d,	// (0x00092b23) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfcfb,	// (0x000941e1) bg_main_sp_fs_ribbon_pane_g

0xe645,	// (0x00092b2b) main_sp_fs_ribbon_scheduler_pane_g1

0xe64e,	// (0x00092b34) main_sp_fs_ribbon_scheduler_pane_g2

0xe657,	// (0x00092b3d) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfd02,	// (0x000941e8) main_sp_fs_ribbon_scheduler_pane_g

0xe660,	// (0x00092b46) list_cale_mrui_pane

0xa8ac,	// (0x0008ed92) sp_fs_scroll_pane_cp07_ParamLimits

0xa8ac,	// (0x0008ed92) sp_fs_scroll_pane_cp07

0xa8c8,	// (0x0008edae) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xa8c8,	// (0x0008edae) bg_sp_fs_schedule_viewer_highlight

0xe66d,	// (0x00092b53) list_single_sp_fs_schedule_track_pane_cp01

0xe675,	// (0x00092b5b) list_sp_fs_schedule_track_pane

0xe67d,	// (0x00092b63) sp_fs_scroll_pane_cp06_ParamLimits

0xe67d,	// (0x00092b63) sp_fs_scroll_pane_cp06

0x461f,	// (0x00088b05) bgmain_sp_fs_calendar_pane_g1

0xa8d8,	// (0x0008edbe) list_single_cale_mrui_pane_ParamLimits

0xa8d8,	// (0x0008edbe) list_single_cale_mrui_pane

0xe68f,	// (0x00092b75) list_single_cale_mrui_row_pane_ParamLimits

0xe68f,	// (0x00092b75) list_single_cale_mrui_row_pane

0xe69c,	// (0x00092b82) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe69c,	// (0x00092b82) list_single_cale_mrui_row_pane_g1

0xe6e1,	// (0x00092bc7) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe6e1,	// (0x00092bc7) list_single_cale_mrui_row_pane_t1

0xa8f9,	// (0x0008eddf) list_single_cale_mrui_row_pane_t2_ParamLimits

0xa8f9,	// (0x0008eddf) list_single_cale_mrui_row_pane_t2

0xe6f3,	// (0x00092bd9) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe6f3,	// (0x00092bd9) list_single_cale_mrui_row_pane_t3

0xe722,	// (0x00092c08) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe722,	// (0x00092c08) list_single_cale_mrui_row_pane_t4

0x0003,

0xfd10,	// (0x000941f6) list_single_cale_mrui_row_pane_t_ParamLimits

0xfd10,	// (0x000941f6) list_single_cale_mrui_row_pane_t

0xa961,	// (0x0008ee47) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0xa961,	// (0x0008ee47) list_single_cmail_header_editor_pane_bg_cp01

0xa987,	// (0x0008ee6d) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0xa987,	// (0x0008ee6d) list_single_cmail_header_editor_pane_bg_cp02

0xa9a7,	// (0x0008ee8d) main_radioblah_text_pane_t1_ParamLimits

0xa9a7,	// (0x0008ee8d) main_radioblah_text_pane_t1

0xe751,	// (0x00092c37) cam6_indi_pane_cp01

0xe759,	// (0x00092c3f) cam6_mode_pane_cp01

0xe761,	// (0x00092c47) cam6_pano_pane

0xe76a,	// (0x00092c50) cam6_zoom_pane_cp01

0xe772,	// (0x00092c58) cam6_pano_image_pane

0xe77d,	// (0x00092c63) cam6_pano_pane_g1

0xdd79,	// (0x0009225f) cam6_pano_pane_g2

0xe786,	// (0x00092c6c) cam6_pano_pane_g3

0xe78f,	// (0x00092c75) cam6_pano_pane_g4

0x2156,	// (0x0008663c) cam6_pano_pane_g5

0xe798,	// (0x00092c7e) cam6_pano_pane_g6

0xe7a2,	// (0x00092c88) cam6_pano_pane_g7

0xe7aa,	// (0x00092c90) cam6_pano_pane_g8

0xe7b3,	// (0x00092c99) cam6_pano_pane_g9

0x0008,

0xfd19,	// (0x000941ff) cam6_pano_pane_g

0x08cb,	// (0x00084db1) main_browser_tag_pane

0xe4d6,	// (0x000929bc) grid_navstr_albumart_pane

0xe7be,	// (0x00092ca4) cell_navstr_albumart_pane_ParamLimits

0xe7be,	// (0x00092ca4) cell_navstr_albumart_pane

0xe7de,	// (0x00092cc4) cell_navstr_albumart_pane_g1

0x15e5,	// (0x00085acb) cell_navstr_albumart_pane_g2

0x15f5,	// (0x00085adb) cell_navstr_albumart_pane_g3

0x15ed,	// (0x00085ad3) cell_navstr_albumart_pane_g4

0x0003,

0xfd2c,	// (0x00094212) cell_navstr_albumart_pane_g

0xa9c2,	// (0x0008eea8) bt_list_pane_ParamLimits

0xa9c2,	// (0x0008eea8) bt_list_pane

0xa9d6,	// (0x0008eebc) bt_list_pane_t1

0xa9e5,	// (0x0008eecb) bt_list_pane_t2

0x0001,

0xfd35,	// (0x0009421b) bt_list_pane_t

0x08cb,	// (0x00084db1) main_cale_prevew_pane

0xa9f4,	// (0x0008eeda) popup_cale_preview_window_ParamLimits

0xa9f4,	// (0x0008eeda) popup_cale_preview_window

0x3931,	// (0x00087e17) bg_popup_preview_window_pane_cp05_ParamLimits

0x3931,	// (0x00087e17) bg_popup_preview_window_pane_cp05

0xe7e6,	// (0x00092ccc) list_cale_preview_pane_ParamLimits

0xe7e6,	// (0x00092ccc) list_cale_preview_pane

0xaa0d,	// (0x0008eef3) list_double_cale_preview_pane_ParamLimits

0xaa0d,	// (0x0008eef3) list_double_cale_preview_pane

0x24d3,	// (0x000869b9) list_single_cale_preview_pane_ParamLimits

0x24d3,	// (0x000869b9) list_single_cale_preview_pane

0xaa1f,	// (0x0008ef05) list_single_cale_preview_pane_g1

0xaa27,	// (0x0008ef0d) list_single_cale_preview_pane_t1_ParamLimits

0xaa27,	// (0x0008ef0d) list_single_cale_preview_pane_t1

0xaa3c,	// (0x0008ef22) list_double_cale_preview_pane_g1

0xaa44,	// (0x0008ef2a) list_double_cale_preview_pane_t1_ParamLimits

0xaa44,	// (0x0008ef2a) list_double_cale_preview_pane_t1

0xaa59,	// (0x0008ef3f) list_double_cale_preview_pane_t2_ParamLimits

0xaa59,	// (0x0008ef3f) list_double_cale_preview_pane_t2

0x0001,

0xfd3a,	// (0x00094220) list_double_cale_preview_pane_t_ParamLimits

0xfd3a,	// (0x00094220) list_double_cale_preview_pane_t

0x08cb,	// (0x00084db1) main_ezdial_pane

0x3931,	// (0x00087e17) main_sp_fs_email_pane_ParamLimits

0xa295,	// (0x0008e77b) cmail_ddmenu_btn01_pane_ParamLimits

0xa295,	// (0x0008e77b) cmail_ddmenu_btn01_pane

0xa2a8,	// (0x0008e78e) cmail_ddmenu_btn02_pane_ParamLimits

0xa2a8,	// (0x0008e78e) cmail_ddmenu_btn02_pane

0xa2cb,	// (0x0008e7b1) cmail_ddmenu_btn03_pane_ParamLimits

0xa2cb,	// (0x0008e7b1) cmail_ddmenu_btn03_pane

0xa364,	// (0x0008e84a) main_sp_fs_ctrlbar_pane_ParamLimits

0xa388,	// (0x0008e86e) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xa6ad,	// (0x0008eb93) list_cmail_body_pane_ParamLimits

0xe3d3,	// (0x000928b9) bg_button_pane_cp12

0xe3e8,	// (0x000928ce) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe3e8,	// (0x000928ce) list_single_cmail_header_detail_pane_g3

0xe431,	// (0x00092917) list_single_cmail_header_detail_pane_t2_ParamLimits

0xe431,	// (0x00092917) list_single_cmail_header_detail_pane_t2

0x0001,

0xfcbd,	// (0x000941a3) list_single_cmail_header_detail_pane_t_ParamLimits

0xfcbd,	// (0x000941a3) list_single_cmail_header_detail_pane_t

0xe53e,	// (0x00092a24) phacti_term_pane_t2_ParamLimits

0xe53e,	// (0x00092a24) phacti_term_pane_t2

0x0001,

0xfcc7,	// (0x000941ad) phacti_term_pane_t_ParamLimits

0xfcc7,	// (0x000941ad) phacti_term_pane_t

0xe7f2,	// (0x00092cd8) aid_size_list_single_double

0xaa71,	// (0x0008ef57) popup_ezdial_listscroll_window

0xaa8d,	// (0x0008ef73) popup_number_entry_window_cp01

0x4432,	// (0x00088918) bg_popup_call_pane_cp09

0xe7fe,	// (0x00092ce4) ezdial_list_pane

0xe806,	// (0x00092cec) scroll_pane_cp23

0x1789,	// (0x00085c6f) bg_button_pane_cp028_ParamLimits

0x1789,	// (0x00085c6f) bg_button_pane_cp028

0xaa9b,	// (0x0008ef81) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xaa9b,	// (0x0008ef81) cmail_ddmenu_btn01_pane_g1

0xaaa7,	// (0x0008ef8d) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xaaa7,	// (0x0008ef8d) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfd3f,	// (0x00094225) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfd3f,	// (0x00094225) cmail_ddmenu_btn01_pane_g

0xe80e,	// (0x00092cf4) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xe80e,	// (0x00092cf4) cmail_ddmenu_btn01_pane_t1

0x1789,	// (0x00085c6f) bg_button_pane_cp029_ParamLimits

0x1789,	// (0x00085c6f) bg_button_pane_cp029

0xaab3,	// (0x0008ef99) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xaab3,	// (0x0008ef99) cmail_ddmenu_btn02_pane_g1

0xaacb,	// (0x0008efb1) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xaacb,	// (0x0008efb1) cmail_ddmenu_btn02_pane_t1

0x3931,	// (0x00087e17) bg_button_pane_cp031_ParamLimits

0x3931,	// (0x00087e17) bg_button_pane_cp031

0xaab3,	// (0x0008ef99) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xaab3,	// (0x0008ef99) cmail_ddmenu_btn03_pane_g1

0xaacb,	// (0x0008efb1) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xaacb,	// (0x0008efb1) cmail_ddmenu_btn03_pane_t1

0x7ce4,	// (0x0008c1ca) cell_dialer2_keypad_pane_t1_ParamLimits

0x7cfe,	// (0x0008c1e4) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x7cfe,	// (0x0008c1e4) cell_dialer2_keypad_pane_t1_copy1

0x9b2e,	// (0x0008e014) ncimui_group_button_pane

0x3931,	// (0x00087e17) main_sp_fs_calendar_pane_ParamLimits

0xa6c3,	// (0x0008eba9) list_single_cmail_header_caption_pane_ParamLimits

0xe589,	// (0x00092a6f) aid_recal_txt_sm_pane

0x08cb,	// (0x00084db1) mian_recal_day_pane

0xe5cb,	// (0x00092ab1) popup_sp_fs_cale_preview_window_ParamLimits

0xe823,	// (0x00092d09) list_recal_day_pane

0xe865,	// (0x00092d4b) list_single_recal_day_pane_ParamLimits

0xe865,	// (0x00092d4b) list_single_recal_day_pane

0xe877,	// (0x00092d5d) list_single_recal_day_pane_g1_ParamLimits

0xe877,	// (0x00092d5d) list_single_recal_day_pane_g1

0xe883,	// (0x00092d69) list_single_recal_day_pane_g2_ParamLimits

0xe883,	// (0x00092d69) list_single_recal_day_pane_g2

0xe88f,	// (0x00092d75) list_single_recal_day_pane_g3_ParamLimits

0xe88f,	// (0x00092d75) list_single_recal_day_pane_g3

0xaaef,	// (0x0008efd5) list_single_recal_day_pane_g4_ParamLimits

0xaaef,	// (0x0008efd5) list_single_recal_day_pane_g4

0xe89b,	// (0x00092d81) list_single_recal_day_pane_g5_ParamLimits

0xe89b,	// (0x00092d81) list_single_recal_day_pane_g5

0xe8a7,	// (0x00092d8d) list_single_recal_day_pane_g6_ParamLimits

0xe8a7,	// (0x00092d8d) list_single_recal_day_pane_g6

0x0004,

0xfd4e,	// (0x00094234) list_single_recal_day_pane_g_ParamLimits

0xfd4e,	// (0x00094234) list_single_recal_day_pane_g

0xe8bb,	// (0x00092da1) list_single_recal_day_pane_t1

0xe8cd,	// (0x00092db3) list_single_recal_day_pane_t2

0x0001,

0xfd59,	// (0x0009423f) list_single_recal_day_pane_t

0xab07,	// (0x0008efed) ncimui_query_button_pane_ParamLimits

0xab07,	// (0x0008efed) ncimui_query_button_pane

0xab17,	// (0x0008effd) ncimui_query_button_pane_t1_ParamLimits

0xab17,	// (0x0008effd) ncimui_query_button_pane_t1

0xe8df,	// (0x00092dc5) ncimui_query_button_pane_t2_ParamLimits

0xe8df,	// (0x00092dc5) ncimui_query_button_pane_t2

0x0001,

0xfd5e,	// (0x00094244) ncimui_query_button_pane_t_ParamLimits

0xfd5e,	// (0x00094244) ncimui_query_button_pane_t

0xab2a,	// (0x0008f010) query_button_pane_ParamLimits

0xab2a,	// (0x0008f010) query_button_pane

0x08cb,	// (0x00084db1) bg_button_pane_cp0028

0xe8f2,	// (0x00092dd8) query_button_pane_t1

0x677d,	// (0x0008ac63) main_tport_pane_ParamLimits

0xa571,	// (0x0008ea57) bg_popup_window_pane_cp01_ParamLimits

0xa571,	// (0x0008ea57) bg_popup_window_pane_cp01

0xa58c,	// (0x0008ea72) heading_pane_cp08_ParamLimits

0xa58c,	// (0x0008ea72) heading_pane_cp08

0xa59f,	// (0x0008ea85) heading_pane_cp07_ParamLimits

0xa59f,	// (0x0008ea85) heading_pane_cp07

0xa646,	// (0x0008eb2c) cell_tport_appsw_pane_g2

0x0002,

0xfcaa,	// (0x00094190) cell_tport_appsw_pane_g

0xc47c,	// (0x00090962) input_candi_list_open_g1

0xbc8c,	// (0x00090172) list_cale_time_pane_g6_ParamLimits

0xbc8c,	// (0x00090172) list_cale_time_pane_g6

0x6d98,	// (0x0008b27e) aid_size_touch_calib_1_ParamLimits

0x6d98,	// (0x0008b27e) aid_size_touch_calib_1

0x6daa,	// (0x0008b290) aid_size_touch_calib_2_ParamLimits

0x6daa,	// (0x0008b290) aid_size_touch_calib_2

0x6dc2,	// (0x0008b2a8) aid_size_touch_calib_3_ParamLimits

0x6dc2,	// (0x0008b2a8) aid_size_touch_calib_3

0x6de0,	// (0x0008b2c6) aid_size_touch_calib_4_ParamLimits

0x6de0,	// (0x0008b2c6) aid_size_touch_calib_4

0x6df8,	// (0x0008b2de) main_touch_calib_button_group_pane_ParamLimits

0x6df8,	// (0x0008b2de) main_touch_calib_button_group_pane

0x6e10,	// (0x0008b2f6) main_touch_calib_pane_g1_ParamLimits

0x6e22,	// (0x0008b308) main_touch_calib_pane_g2_ParamLimits

0x6e34,	// (0x0008b31a) main_touch_calib_pane_g3_ParamLimits

0x6e46,	// (0x0008b32c) main_touch_calib_pane_g4_ParamLimits

0xf6ec,	// (0x00093bd2) main_touch_calib_pane_g_ParamLimits

0x6e58,	// (0x0008b33e) main_touch_calib_pane_t1_ParamLimits

0x6e72,	// (0x0008b358) main_touch_calib_pane_t2_ParamLimits

0x6e8c,	// (0x0008b372) main_touch_calib_pane_t3_ParamLimits

0x6ea0,	// (0x0008b386) main_touch_calib_pane_t4_ParamLimits

0x6eb4,	// (0x0008b39a) main_touch_calib_pane_t5_ParamLimits

0xf6f5,	// (0x00093bdb) main_touch_calib_pane_t_ParamLimits

0x1ef3,	// (0x000863d9) list_single_fp_cale_pane_g3_ParamLimits

0x1ef3,	// (0x000863d9) list_single_fp_cale_pane_g3

0xbb19,	// (0x0008ffff) bg_button_pane_cp012_ParamLimits

0xbb19,	// (0x0008ffff) bg_vkb2_func_pane_cp03_ParamLimits

0x8cd8,	// (0x0008d1be) cell_vitu2_function_top_pane_g1_ParamLimits

0xbb19,	// (0x0008ffff) bg_vkb2_func_pane_cp04_ParamLimits

0x9ab9,	// (0x0008df9f) main_ncimui_button_group_pane_ParamLimits

0x9ab9,	// (0x0008df9f) main_ncimui_button_group_pane

0x9b19,	// (0x0008dfff) main_ncimui_pane_t3_ParamLimits

0x9b19,	// (0x0008dfff) main_ncimui_pane_t3

0xe4ec,	// (0x000929d2) phacti_button_group_pane

0xe7f2,	// (0x00092cd8) aid_size_list_single_double_ParamLimits

0xaa71,	// (0x0008ef57) popup_ezdial_listscroll_window_ParamLimits

0xaa8d,	// (0x0008ef73) popup_number_entry_window_cp01_ParamLimits

0xab3d,	// (0x0008f023) phacti_button_pane_ParamLimits

0xab3d,	// (0x0008f023) phacti_button_pane

0x08cb,	// (0x00084db1) bg_button_pane_cp14

0xe900,	// (0x00092de6) phacti_button_pane_t1

0xab4e,	// (0x0008f034) main_touch_calib_button_pane_ParamLimits

0xab4e,	// (0x0008f034) main_touch_calib_button_pane

0x3b60,	// (0x00088046) bg_button_pane_cp18_ParamLimits

0x3b60,	// (0x00088046) bg_button_pane_cp18

0xe90e,	// (0x00092df4) main_touch_calib_button_pane_t1_ParamLimits

0xe90e,	// (0x00092df4) main_touch_calib_button_pane_t1

0xe924,	// (0x00092e0a) main_touch_calib_button_pane_t2_ParamLimits

0xe924,	// (0x00092e0a) main_touch_calib_button_pane_t2

0x0001,

0xfd63,	// (0x00094249) main_touch_calib_button_pane_t_ParamLimits

0xfd63,	// (0x00094249) main_touch_calib_button_pane_t

0x08cb,	// (0x00084db1) cell_ncimui_button_pane

0x08cb,	// (0x00084db1) bg_button_pane_cp032

0xe942,	// (0x00092e28) cell_ncimui_button_pane_t1

0xee0b,	// (0x000932f1) image3_infobar_pane_ParamLimits

0xee0b,	// (0x000932f1) image3_infobar_pane

0x9f2e,	// (0x0008e414) fs_bigclock_status_pane_ParamLimits

0x9f2e,	// (0x0008e414) fs_bigclock_status_pane

0x9f3b,	// (0x0008e421) main_fs_bigclock_clock_pane_ParamLimits

0x9f3b,	// (0x0008e421) main_fs_bigclock_clock_pane

0x9f59,	// (0x0008e43f) main_fs_bigclock_indi_pane_ParamLimits

0x9f59,	// (0x0008e43f) main_fs_bigclock_indi_pane

0x9f8b,	// (0x0008e471) main_fs_bigclock_swipe_pane_ParamLimits

0x9f8b,	// (0x0008e471) main_fs_bigclock_swipe_pane

0x08cb,	// (0x00084db1) main_fs_clock_dumped_data

0xde86,	// (0x0009236c) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xde86,	// (0x0009236c) list_single_fs_bigclock_indicator_pane_g1

0xdea2,	// (0x00092388) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xdea2,	// (0x00092388) list_single_fs_bigclock_indicator_pane_g2

0xdebc,	// (0x000923a2) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xdebc,	// (0x000923a2) list_single_fs_bigclock_indicator_pane_g3

0xded6,	// (0x000923bc) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xded6,	// (0x000923bc) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc04,	// (0x000940ea) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc04,	// (0x000940ea) list_single_fs_bigclock_indicator_pane_g

0xdf01,	// (0x000923e7) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xdf01,	// (0x000923e7) list_single_fs_bigclock_indicator_pane_t1

0xdf29,	// (0x0009240f) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xdf29,	// (0x0009240f) list_single_fs_bigclock_indicator_pane_t2

0xdf51,	// (0x00092437) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xdf51,	// (0x00092437) list_single_fs_bigclock_indicator_pane_t3

0xdf79,	// (0x0009245f) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xdf79,	// (0x0009245f) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc0f,	// (0x000940f5) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc0f,	// (0x000940f5) list_single_fs_bigclock_indicator_pane_t

0xe950,	// (0x00092e36) image3_infobar_fav_pane_ParamLimits

0xe950,	// (0x00092e36) image3_infobar_fav_pane

0xe960,	// (0x00092e46) image3_infobar_loc_pane_ParamLimits

0xe960,	// (0x00092e46) image3_infobar_loc_pane

0xe974,	// (0x00092e5a) image3_infobar_time_pane_ParamLimits

0xe974,	// (0x00092e5a) image3_infobar_time_pane

0x461f,	// (0x00088b05) image3_infobar_time_pane_g1

0xe984,	// (0x00092e6a) image3_infobar_time_pane_t1

0x461f,	// (0x00088b05) image3_infobar_loc_pane_g1

0xe992,	// (0x00092e78) image3_infobar_loc_pane_g2

0x0001,

0xfd68,	// (0x0009424e) image3_infobar_loc_pane_g

0xe99a,	// (0x00092e80) image3_infobar_loc_pane_t1

0x461f,	// (0x00088b05) image3_infobar_fav_pane_g1

0xe9a8,	// (0x00092e8e) image3_infobar_fav_pane_g2

0x0001,

0xfd6d,	// (0x00094253) image3_infobar_fav_pane_g

0xe9b0,	// (0x00092e96) fs_bigclock_status_battery_pane

0xe9b9,	// (0x00092e9f) fs_bigclock_status_signal_pane

0xe9c2,	// (0x00092ea8) fs_bigclock_status_title_pane

0xe9cb,	// (0x00092eb1) fs_bigclock_status_signal_pane_g1

0xe9d4,	// (0x00092eba) fs_bigclock_status_signal_pane_g2

0x0001,

0xfd72,	// (0x00094258) fs_bigclock_status_signal_pane_g

0xe9dc,	// (0x00092ec2) fs_bigclock_status_battery_pane_g1

0xe9e5,	// (0x00092ecb) fs_bigclock_status_battery_pane_g2

0x0001,

0xfd77,	// (0x0009425d) fs_bigclock_status_battery_pane_g

0xe9ed,	// (0x00092ed3) fs_bigclock_status_title_pane_t1

0xab63,	// (0x0008f049) main_fs_bigclock_clock_pane_g1

0xab63,	// (0x0008f049) main_fs_bigclock_clock_pane_g2

0xab74,	// (0x0008f05a) main_fs_bigclock_clock_pane_g3

0xab74,	// (0x0008f05a) main_fs_bigclock_clock_pane_g4

0x0003,

0xfd7c,	// (0x00094262) main_fs_bigclock_clock_pane_g

0xab87,	// (0x0008f06d) main_fs_bigclock_clock_pane_t1

0xab9d,	// (0x0008f083) main_fs_bigclock_clock_pane_t2

0x0001,

0xfd85,	// (0x0009426b) main_fs_bigclock_clock_pane_t

0xe9fb,	// (0x00092ee1) list_single_fs_bigclock_indicator_pane_ParamLimits

0xe9fb,	// (0x00092ee1) list_single_fs_bigclock_indicator_pane

0xea0c,	// (0x00092ef2) list_single_fs_bigclock_pane_ParamLimits

0xea0c,	// (0x00092ef2) list_single_fs_bigclock_pane

0xea32,	// (0x00092f18) main_fs_bigclock_indicator_pane_t1

0xea41,	// (0x00092f27) list_single_fs_bigclock_pane_g1

0xea49,	// (0x00092f2f) list_single_fs_bigclock_pane_t1

0x461f,	// (0x00088b05) main_fs_bigclock_swipe_pane_g1

0xea8c,	// (0x00092f72) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfd96,	// (0x0009427c) main_fs_bigclock_swipe_pane_g

0xea94,	// (0x00092f7a) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xea94,	// (0x00092f7a) main_fs_bigclock_swipe_pane_t1

0x586c,	// (0x00089d52) call_type_pane_ParamLimits

0x08cb,	// (0x00084db1) main_btmg_pane

0xe6c8,	// (0x00092bae) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe6c8,	// (0x00092bae) list_single_cale_mrui_row_pane_g2

0x0002,

0xfd09,	// (0x000941ef) list_single_cale_mrui_row_pane_g_ParamLimits

0xfd09,	// (0x000941ef) list_single_cale_mrui_row_pane_g

0xe84c,	// (0x00092d32) list_recal_vselct_arw_lo_pane

0xe854,	// (0x00092d3a) list_recal_vselct_arw_up_pane

0xe85c,	// (0x00092d42) list_recal_vselct_pane

0xabf7,	// (0x0008f0dd) btmg_button_pane

0xac01,	// (0x0008f0e7) main_btmg_pane_g1

0x08cb,	// (0x00084db1) bg_button_pane_cp044

0xeab1,	// (0x00092f97) btmg_button_pane_t1

0x1775,	// (0x00085c5b) aid_listscroll_gen

0x3931,	// (0x00087e17) main_cntbar_detail_pane

0xe3b5,	// (0x0009289b) list_cmail_folder_pane

0x25c3,	// (0x00086aa9) sp_fs_scroll_pane_cp03_ParamLimits

0xac0b,	// (0x0008f0f1) list_single_fs_dyc_pane_cp01_ParamLimits

0xac0b,	// (0x0008f0f1) list_single_fs_dyc_pane_cp01

0xeabf,	// (0x00092fa5) aid_size_cmail_indent

0xeac8,	// (0x00092fae) list_single_dyc_row_pane_cp01

0xac53,	// (0x0008f139) cntbar_detail_list_pane_ParamLimits

0xac53,	// (0x0008f139) cntbar_detail_list_pane

0xac9f,	// (0x0008f185) main_cntbar_detail_cont_pane_ParamLimits

0xac9f,	// (0x0008f185) main_cntbar_detail_cont_pane

0x25c3,	// (0x00086aa9) scroll_pane_cp032_ParamLimits

0x25c3,	// (0x00086aa9) scroll_pane_cp032

0xacb3,	// (0x0008f199) cntbar_detail_list_event_pane_ParamLimits

0xacb3,	// (0x0008f199) cntbar_detail_list_event_pane

0xac63,	// (0x0008f149) cntbar_detail_list_shct_pane

0x4d3c,	// (0x00089222) aid_list_gen

0xead1,	// (0x00092fb7) aid_scroll

0xeada,	// (0x00092fc0) aid_size_touch_scroll_bar

0xa11a,	// (0x0008e600) aid_list_double

0xacc3,	// (0x0008f1a9) aid_list_single

0x25cf,	// (0x00086ab5) aid_list_single_lg

0xaccc,	// (0x0008f1b2) aid_list_z_g_a_sm

0xacd4,	// (0x0008f1ba) aid_list_z_g_d

0xacdc,	// (0x0008f1c2) aid_txt_z_prm

0xacea,	// (0x0008f1d0) aid_txt_z_prm_cp01

0xacf8,	// (0x0008f1de) aid_txt_z_sec

0xad06,	// (0x0008f1ec) main_cntbar_detail_cont_pane_g1_ParamLimits

0xad06,	// (0x0008f1ec) main_cntbar_detail_cont_pane_g1

0xad1a,	// (0x0008f200) main_cntbar_detail_cont_pane_g2_ParamLimits

0xad1a,	// (0x0008f200) main_cntbar_detail_cont_pane_g2

0x0001,

0xfd9b,	// (0x00094281) main_cntbar_detail_cont_pane_g_ParamLimits

0xfd9b,	// (0x00094281) main_cntbar_detail_cont_pane_g

0xeae3,	// (0x00092fc9) main_cntbar_detail_cont_pane_t1

0xeaf1,	// (0x00092fd7) main_cntbar_detail_cont_pane_t2

0xeaff,	// (0x00092fe5) main_cntbar_detail_cont_pane_t3

0x0002,

0xfda0,	// (0x00094286) main_cntbar_detail_cont_pane_t

0xad2a,	// (0x0008f210) cell_cntbar_detail_list_shct_pane_ParamLimits

0xad2a,	// (0x0008f210) cell_cntbar_detail_list_shct_pane

0xeb0d,	// (0x00092ff3) cntbar_detail_list_shct_pane_g1

0xeb16,	// (0x00092ffc) cntbar_detail_list_shct_pane_g2

0x0001,

0xfda7,	// (0x0009428d) cntbar_detail_list_shct_pane_g

0xad3e,	// (0x0008f224) cntbar_detail_list_event_pane_g1_ParamLimits

0xad3e,	// (0x0008f224) cntbar_detail_list_event_pane_g1

0xad4a,	// (0x0008f230) cntbar_detail_list_event_pane_g2_ParamLimits

0xad4a,	// (0x0008f230) cntbar_detail_list_event_pane_g2

0x0005,

0xfdac,	// (0x00094292) cntbar_detail_list_event_pane_g_ParamLimits

0xfdac,	// (0x00094292) cntbar_detail_list_event_pane_g

0xadb6,	// (0x0008f29c) cntbar_detail_list_event_pane_t1_ParamLimits

0xadb6,	// (0x0008f29c) cntbar_detail_list_event_pane_t1

0xadcb,	// (0x0008f2b1) cntbar_detail_list_event_pane_t2_ParamLimits

0xadcb,	// (0x0008f2b1) cntbar_detail_list_event_pane_t2

0x0002,

0xfdb9,	// (0x0009429f) cntbar_detail_list_event_pane_t_ParamLimits

0xfdb9,	// (0x0009429f) cntbar_detail_list_event_pane_t

0x461f,	// (0x00088b05) cell_cntbar_detail_list_shct_pane_g1

0xc2ca,	// (0x000907b0) navi_pane_mv_g3

0x3931,	// (0x00087e17) main_cntbar_detail_pane_ParamLimits

0x08cb,	// (0x00084db1) main_notif_wgt_pane

0xcfd5,	// (0x000914bb) aid_tch_main_mp4_pane_g4

0xee03,	// (0x000932e9) popup_slider_window_cp02

0xe842,	// (0x00092d28) list_recal_day_event_pane

0xac21,	// (0x0008f107) cntbar_detail_btn_pane_ParamLimits

0xac21,	// (0x0008f107) cntbar_detail_btn_pane

0xac3a,	// (0x0008f120) cntbar_detail_btn_pane_cp01_ParamLimits

0xac3a,	// (0x0008f120) cntbar_detail_btn_pane_cp01

0xac63,	// (0x0008f149) cntbar_detail_list_shct_pane_ParamLimits

0xac73,	// (0x0008f159) cntbar_detail_pane_g1_ParamLimits

0xac73,	// (0x0008f159) cntbar_detail_pane_g1

0xac83,	// (0x0008f169) cntbar_detail_pane_t1_ParamLimits

0xac83,	// (0x0008f169) cntbar_detail_pane_t1

0xad56,	// (0x0008f23c) cntbar_detail_list_event_pane_g3_ParamLimits

0xad56,	// (0x0008f23c) cntbar_detail_list_event_pane_g3

0xad6e,	// (0x0008f254) cntbar_detail_list_event_pane_g4_ParamLimits

0xad6e,	// (0x0008f254) cntbar_detail_list_event_pane_g4

0xad86,	// (0x0008f26c) cntbar_detail_list_event_pane_g5_ParamLimits

0xad86,	// (0x0008f26c) cntbar_detail_list_event_pane_g5

0xad9e,	// (0x0008f284) cntbar_detail_list_event_pane_g6_ParamLimits

0xad9e,	// (0x0008f284) cntbar_detail_list_event_pane_g6

0xade0,	// (0x0008f2c6) cntbar_detail_list_event_pane_t3_ParamLimits

0xade0,	// (0x0008f2c6) cntbar_detail_list_event_pane_t3

0xadf2,	// (0x0008f2d8) popup_notif_wgt_window_ParamLimits

0xadf2,	// (0x0008f2d8) popup_notif_wgt_window

0xae0b,	// (0x0008f2f1) popup_submenu_window_cp01_ParamLimits

0xae0b,	// (0x0008f2f1) popup_submenu_window_cp01

0x4432,	// (0x00088918) bg_popup_window_pane_cp10

0xeb1f,	// (0x00093005) listscroll_notif_wgt_pane

0xeb31,	// (0x00093017) list_notif_wgt_window

0xeb3a,	// (0x00093020) scroll_pane_cp033

0xae1d,	// (0x0008f303) list_notif_wgt_row_pane_ParamLimits

0xae1d,	// (0x0008f303) list_notif_wgt_row_pane

0xeb43,	// (0x00093029) aid_size_list_notif_wgt_del

0xeb50,	// (0x00093036) list_notif_wgt_row_pane_g1

0xeb5c,	// (0x00093042) list_notif_wgt_row_pane_g2

0xeb6b,	// (0x00093051) list_notif_wgt_row_pane_g3

0x0002,

0xfdc0,	// (0x000942a6) list_notif_wgt_row_pane_g

0xeb78,	// (0x0009305e) list_notif_wgt_row_pane_t1

0xeb8e,	// (0x00093074) list_notif_wgt_row_pane_t2

0xeba0,	// (0x00093086) list_notif_wgt_row_pane_t3

0x0002,

0xfdc7,	// (0x000942ad) list_notif_wgt_row_pane_t

0xd2bf,	// (0x000917a5) list_recal_day_event_pane_g1

0xebb2,	// (0x00093098) list_recal_day_event_pane_t1

0x08cb,	// (0x00084db1) bg_button_pane_cp045

0xae2d,	// (0x0008f313) cntbar_detail_btn_pane_t1

0x1789,	// (0x00085c6f) main_callh_pane_ParamLimits

0x1789,	// (0x00085c6f) main_callh_pane

0x08cb,	// (0x00084db1) main_coverflow0_pane

0x08cb,	// (0x00084db1) main_wgtman_pane

0x9fa3,	// (0x0008e489) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x9fa3,	// (0x0008e489) main_fs_bigclock_unlock_btn_pane

0xa63e,	// (0x0008eb24) bg_button_pane_cp16

0xa64e,	// (0x0008eb34) cell_tport_appsw_pane_g3

0xae3b,	// (0x0008f321) cf0_flow_pane_ParamLimits

0xae3b,	// (0x0008f321) cf0_flow_pane

0xebc1,	// (0x000930a7) listscroll_cf0_pane

0xebcc,	// (0x000930b2) main_cf0_pane_g1

0xae50,	// (0x0008f336) main_cf0_pane_t1_ParamLimits

0xae50,	// (0x0008f336) main_cf0_pane_t1

0xae67,	// (0x0008f34d) main_cf0_pane_t2_ParamLimits

0xae67,	// (0x0008f34d) main_cf0_pane_t2

0x0001,

0xfdd3,	// (0x000942b9) main_cf0_pane_t_ParamLimits

0xfdd3,	// (0x000942b9) main_cf0_pane_t

0xebde,	// (0x000930c4) scroll_pane_cp11

0xae7e,	// (0x0008f364) cf0_flow_pane_g1

0xae86,	// (0x0008f36c) cf0_flow_pane_g2

0x0001,

0xfdd8,	// (0x000942be) cf0_flow_pane_g

0xae8e,	// (0x0008f374) cf0_flow_pane_t1

0x08cb,	// (0x00084db1) main_call6_pane

0x08cb,	// (0x00084db1) main_calllock_pane

0xae9c,	// (0x0008f382) call6_btn_grp_pane_ParamLimits

0xae9c,	// (0x0008f382) call6_btn_grp_pane

0xaeb6,	// (0x0008f39c) call6_pane_g1_ParamLimits

0xaeb6,	// (0x0008f39c) call6_pane_g1

0xaecc,	// (0x0008f3b2) popup_call6_1st_window_ParamLimits

0xaecc,	// (0x0008f3b2) popup_call6_1st_window

0xaedd,	// (0x0008f3c3) popup_call6_2nd_window_ParamLimits

0xaedd,	// (0x0008f3c3) popup_call6_2nd_window

0xaeee,	// (0x0008f3d4) cell_call6_btn_pane_ParamLimits

0xaeee,	// (0x0008f3d4) cell_call6_btn_pane

0x4432,	// (0x00088918) bg_popup_call2_in_pane_cp03

0xebe9,	// (0x000930cf) popup_call6_1st_window_g1

0xebf1,	// (0x000930d7) popup_call6_1st_window_g2

0xebf9,	// (0x000930df) popup_call6_1st_window_g3

0x0002,

0xfddd,	// (0x000942c3) popup_call6_1st_window_g

0xec01,	// (0x000930e7) popup_call6_1st_window_t1

0xec10,	// (0x000930f6) popup_call6_1st_window_t2

0xec1e,	// (0x00093104) popup_call6_1st_window_t3

0x0002,

0xfde4,	// (0x000942ca) popup_call6_1st_window_t

0x4432,	// (0x00088918) bg_popup_call2_in_pane_cp04

0xec2c,	// (0x00093112) popup_call6_2nd_window_g1

0xec34,	// (0x0009311a) popup_call6_2nd_window_g2

0xec3c,	// (0x00093122) popup_call6_2nd_window_g3

0x0002,

0xfdeb,	// (0x000942d1) popup_call6_2nd_window_g

0xec44,	// (0x0009312a) popup_call6_2nd_window_t1

0xbb27,	// (0x0009000d) bg_button_pane_cp15

0xf05a,	// (0x00093540) cell_call6_btn_pane_g1

0xf063,	// (0x00093549) cell_call6_btn_pane_t1

0xaf02,	// (0x0008f3e8) listscroll_wgtman_pane_ParamLimits

0xaf02,	// (0x0008f3e8) listscroll_wgtman_pane

0xaf23,	// (0x0008f409) wgtman_btn_pane_ParamLimits

0xaf23,	// (0x0008f409) wgtman_btn_pane

0xc0de,	// (0x000905c4) aid_scroll_copy1

0xec53,	// (0x00093139) list_wgtman_pane

0xaf66,	// (0x0008f44c) wgtman_btn_pane_g1_ParamLimits

0xaf66,	// (0x0008f44c) wgtman_btn_pane_g1

0xaf92,	// (0x0008f478) wgtman_btn_pane_t1_ParamLimits

0xaf92,	// (0x0008f478) wgtman_btn_pane_t1

0xec5d,	// (0x00093143) wgtman_btn_pane_t2_ParamLimits

0xec5d,	// (0x00093143) wgtman_btn_pane_t2

0x0001,

0xfdf2,	// (0x000942d8) wgtman_btn_pane_t_ParamLimits

0xfdf2,	// (0x000942d8) wgtman_btn_pane_t

0xafcf,	// (0x0008f4b5) listrow_wgtman_pane_ParamLimits

0xafcf,	// (0x0008f4b5) listrow_wgtman_pane

0xafe2,	// (0x0008f4c8) listrow_wgtman_pane_g1

0xafef,	// (0x0008f4d5) listrow_wgtman_pane_g2

0x0001,

0xfdf7,	// (0x000942dd) listrow_wgtman_pane_g

0xb00d,	// (0x0008f4f3) listrow_wgtman_pane_t1

0xb025,	// (0x0008f50b) listrow_wgtman_pane_t2

0x0001,

0xfdfc,	// (0x000942e2) listrow_wgtman_pane_t

0xb04b,	// (0x0008f531) wait_bar_pane_cp09

0xec74,	// (0x0009315a) main_calllock_btn_pane

0xec7e,	// (0x00093164) main_calllock_pane_g1

0x08cb,	// (0x00084db1) bg_button_pane_cp17

0xec86,	// (0x0009316c) main_calllock_btn_pane_g1

0xec8f,	// (0x00093175) main_calllock_btn_pane_t1

0x08cb,	// (0x00084db1) main_dialer3_pane

0x08cb,	// (0x00084db1) main_fmrd2_pane

0x461f,	// (0x00088b05) main_fs_bigclock_unlock_btn_pane_g1

0xb065,	// (0x0008f54b) main_fs_bigclock_unlock_btn_pane_t1

0xb073,	// (0x0008f559) area_fmrd2_info_pane_ParamLimits

0xb073,	// (0x0008f559) area_fmrd2_info_pane

0xb084,	// (0x0008f56a) area_fmrd2_visual_pane_ParamLimits

0xb084,	// (0x0008f56a) area_fmrd2_visual_pane

0xb092,	// (0x0008f578) fmrd2_indi_pane_ParamLimits

0xb092,	// (0x0008f578) fmrd2_indi_pane

0xb09f,	// (0x0008f585) area_fmrd2_visual_pane_g1

0xb0a7,	// (0x0008f58d) area_fmrd2_visual_pane_t1

0xb0b7,	// (0x0008f59d) area_fmrd2_visual_pane_t2

0xb0c7,	// (0x0008f5ad) area_fmrd2_visual_pane_t3

0x0002,

0xfe06,	// (0x000942ec) area_fmrd2_visual_pane_t

0xb0d7,	// (0x0008f5bd) area_fmrd2_info_pane_g1

0xb0df,	// (0x0008f5c5) area_fmrd2_info_pane_t1

0xb0ef,	// (0x0008f5d5) area_fmrd2_info_pane_t2

0xb0ff,	// (0x0008f5e5) area_fmrd2_info_pane_t3

0xb10f,	// (0x0008f5f5) area_fmrd2_info_pane_t4

0x0003,

0xfe0d,	// (0x000942f3) area_fmrd2_info_pane_t

0xb11d,	// (0x0008f603) fmrd2_indi_pane_t1

0xb12d,	// (0x0008f613) fmrd2_indi_pane_t2

0xb13d,	// (0x0008f623) fmrd2_indi_pane_t3

0x0002,

0xfe16,	// (0x000942fc) fmrd2_indi_pane_t

0xdee5,	// (0x000923cb) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xdee5,	// (0x000923cb) list_single_fs_bigclock_indicator_pane_g5

0xdf96,	// (0x0009247c) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xdf96,	// (0x0009247c) list_single_fs_bigclock_indicator_pane_t5

0xa7dc,	// (0x0008ecc2) aid_cell_bcale_month_pane_ParamLimits

0xa7dc,	// (0x0008ecc2) aid_cell_bcale_month_pane

0xa7fa,	// (0x0008ece0) bcale_month_pane_ParamLimits

0xa7fa,	// (0x0008ece0) bcale_month_pane

0xa81e,	// (0x0008ed04) bcale_preview_pane_ParamLimits

0xa81e,	// (0x0008ed04) bcale_preview_pane

0xea49,	// (0x00092f2f) list_single_fs_bigclock_pane_t1_ParamLimits

0xea68,	// (0x00092f4e) list_single_fs_bigclock_pane_t2_ParamLimits

0xea68,	// (0x00092f4e) list_single_fs_bigclock_pane_t2

0x0001,

0xfd91,	// (0x00094277) list_single_fs_bigclock_pane_t_ParamLimits

0xfd91,	// (0x00094277) list_single_fs_bigclock_pane_t

0xb05d,	// (0x0008f543) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfe01,	// (0x000942e7) main_fs_bigclock_unlock_btn_pane_g

0xb14d,	// (0x0008f633) aid_dia3_key_size_ParamLimits

0xb14d,	// (0x0008f633) aid_dia3_key_size

0xb15c,	// (0x0008f642) aid_dia3_listrow_size_ParamLimits

0xb15c,	// (0x0008f642) aid_dia3_listrow_size

0xb171,	// (0x0008f657) dia3_keypad_fun_pane_ParamLimits

0xb171,	// (0x0008f657) dia3_keypad_fun_pane

0xb18d,	// (0x0008f673) dia3_keypad_num_pane_ParamLimits

0xb18d,	// (0x0008f673) dia3_keypad_num_pane

0xb1a8,	// (0x0008f68e) dia3_listscroll_pane_ParamLimits

0xb1a8,	// (0x0008f68e) dia3_listscroll_pane

0xb1bb,	// (0x0008f6a1) dia3_numentry_pane_ParamLimits

0xb1bb,	// (0x0008f6a1) dia3_numentry_pane

0xec9e,	// (0x00093184) dia3_list_pane

0xeca9,	// (0x0009318f) scroll_pane_cp12

0x08cb,	// (0x00084db1) bg_dia3_numentry_pane

0xb1d3,	// (0x0008f6b9) dia3_numentry_pane_t1

0xb1e2,	// (0x0008f6c8) cell_dia3_key_num_pane

0xb1ea,	// (0x0008f6d0) cell_dia3_key0_fun_pane_ParamLimits

0xb1ea,	// (0x0008f6d0) cell_dia3_key0_fun_pane

0xb1fe,	// (0x0008f6e4) cell_dia3_key1_fun_pane_ParamLimits

0xb1fe,	// (0x0008f6e4) cell_dia3_key1_fun_pane

0xb216,	// (0x0008f6fc) dia3_listrow_pane

0xdc38,	// (0x0009211e) bg_dia3_numentry_pane_g1

0x08cb,	// (0x00084db1) bg_button_pane_cp21

0xecb4,	// (0x0009319a) cell_dia3_key_num_pane_t1

0xecc2,	// (0x000931a8) cell_dia3_key_num_pane_t2

0xecd1,	// (0x000931b7) cell_dia3_key_num_pane_t3

0xece0,	// (0x000931c6) cell_dia3_key_num_pane_t4

0x0003,

0xfe1d,	// (0x00094303) cell_dia3_key_num_pane_t

0x08cb,	// (0x00084db1) bg_button_pane_cp19

0xb228,	// (0x0008f70e) cell_dia3_key0_fun_pane_g1

0x08cb,	// (0x00084db1) bg_button_pane_cp20

0xb230,	// (0x0008f716) cell_dia3_key1_fun_pane_g1

0xb238,	// (0x0008f71e) area_left_week_number_pane

0xb244,	// (0x0008f72a) area_top_day_name_pane

0xb257,	// (0x0008f73d) frame_month_view_pane

0xecef,	// (0x000931d5) grid_month_view_pane

0xb26a,	// (0x0008f750) cell_top_day_name_pane_ParamLimits

0xb26a,	// (0x0008f750) cell_top_day_name_pane

0xb297,	// (0x0008f77d) cell_area_left_week_number_pane_ParamLimits

0xb297,	// (0x0008f77d) cell_area_left_week_number_pane

0xb2ab,	// (0x0008f791) cell_month_view_pane_ParamLimits

0xb2ab,	// (0x0008f791) cell_month_view_pane

0xecfd,	// (0x000931e3) frm_month_g1

0xb2d8,	// (0x0008f7be) frm_month_g2

0xb2eb,	// (0x0008f7d1) frm_month_g3

0xb2fe,	// (0x0008f7e4) frm_month_g4

0xb311,	// (0x0008f7f7) frm_month_g5

0xb324,	// (0x0008f80a) frm_month_g6

0xb337,	// (0x0008f81d) frm_month_g7

0xed0a,	// (0x000931f0) frm_month_g8

0xb34a,	// (0x0008f830) frm_month_g9

0xb35a,	// (0x0008f840) frm_month_g10

0xb36a,	// (0x0008f850) frm_month_g11

0xb37a,	// (0x0008f860) frm_month_g12

0xb38c,	// (0x0008f872) frm_month_g13

0xb39e,	// (0x0008f884) frm_month_g14

0xb3b2,	// (0x0008f898) frm_month_g15

0xb3c6,	// (0x0008f8ac) frm_month_g16

0x000f,

0xfe26,	// (0x0009430c) frm_month_g

0xf072,	// (0x00093558) cell_top_day_name_pane_t1

0xb3da,	// (0x0008f8c0) cell_area_left_week_number_pane_g1

0xb3e6,	// (0x0008f8cc) cell_area_left_week_number_pane_t1

0x398a,	// (0x00087e70) cell_month_view_pane_g1

0xb3f9,	// (0x0008f8df) cell_month_view_pane_t1

0x08cb,	// (0x00084db1) main_fps_pane

0xe1e7,	// (0x000926cd) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe1e7,	// (0x000926cd) cmail_ddmenu_btn02_pane_cp1

0xe203,	// (0x000926e9) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe203,	// (0x000926e9) cmail_ddmenu_btn02_pane_cp2

0xaabf,	// (0x0008efa5) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xaabf,	// (0x0008efa5) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfd44,	// (0x0009422a) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfd44,	// (0x0009422a) cmail_ddmenu_btn02_pane_g

0xaadd,	// (0x0008efc3) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xaadd,	// (0x0008efc3) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfd49,	// (0x0009422f) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfd49,	// (0x0009422f) cmail_ddmenu_btn02_pane_t

0xb40c,	// (0x0008f8f2) fps_text_pane_ParamLimits

0xb40c,	// (0x0008f8f2) fps_text_pane

0xb423,	// (0x0008f909) main_fps_pane_g1_ParamLimits

0xb423,	// (0x0008f909) main_fps_pane_g1

0xb43d,	// (0x0008f923) wait_bar_pane_cp010_ParamLimits

0xb43d,	// (0x0008f923) wait_bar_pane_cp010

0xb44e,	// (0x0008f934) fps_text_pane_t1_ParamLimits

0xb44e,	// (0x0008f934) fps_text_pane_t1

0x0334,	// (0x0008481a) cam4_image_uncrop_pane_g1

0x033d,	// (0x00084823) cam4_image_uncrop_pane_g2

0x821b,	// (0x0008c701) cam4_image_uncrop_pane_g3

0x8224,	// (0x0008c70a) cam4_image_uncrop_pane_g4

0x0003,

0xf888,	// (0x00093d6e) cam4_image_uncrop_pane_g

0xb216,	// (0x0008f6fc) dia3_listrow_pane_ParamLimits

0x08cb,	// (0x00084db1) main_phob2_pane

0xa60f,	// (0x0008eaf5) cell_tport_appsw_pane_cp02_ParamLimits

0xa60f,	// (0x0008eaf5) cell_tport_appsw_pane_cp02

0xa623,	// (0x0008eb09) cell_tport_appsw_pane_cp03_ParamLimits

0xa623,	// (0x0008eb09) cell_tport_appsw_pane_cp03

0x08cb,	// (0x00084db1) phob2_contact_card_pane

0x08cb,	// (0x00084db1) phob2_listscroll_pane

0x0079,	// (0x0008455f) phob2_list_pane

0x0081,	// (0x00084567) scroll_pane_cp034

0xb466,	// (0x0008f94c) phob2_cc_data_pane_ParamLimits

0xb466,	// (0x0008f94c) phob2_cc_data_pane

0xb485,	// (0x0008f96b) phob2_cc_listscroll_pane_ParamLimits

0xb485,	// (0x0008f96b) phob2_cc_listscroll_pane

0xafcf,	// (0x0008f4b5) list_double_large_graphic_phob2_pane_ParamLimits

0xafcf,	// (0x0008f4b5) list_double_large_graphic_phob2_pane

0xb4a3,	// (0x0008f989) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xb4a3,	// (0x0008f989) list_double_large_graphic_phob2_pane_g1

0xb4b0,	// (0x0008f996) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xb4b0,	// (0x0008f996) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfe47,	// (0x0009432d) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfe47,	// (0x0009432d) list_double_large_graphic_phob2_pane_g

0xb4d6,	// (0x0008f9bc) list_double_large_graphic_phob2_pane_t1_ParamLimits

0xb4d6,	// (0x0008f9bc) list_double_large_graphic_phob2_pane_t1

0xb4eb,	// (0x0008f9d1) list_double_large_graphic_phob2_pane_t2_ParamLimits

0xb4eb,	// (0x0008f9d1) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfe50,	// (0x00094336) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfe50,	// (0x00094336) list_double_large_graphic_phob2_pane_t

0x08cb,	// (0x00084db1) list_highlight_pane_cp024

0x011a,	// (0x00084600) phob2_cc_button_pane

0xb500,	// (0x0008f9e6) phob2_cc_data_pane_g1_ParamLimits

0xb500,	// (0x0008f9e6) phob2_cc_data_pane_g1

0xb517,	// (0x0008f9fd) phob2_cc_data_pane_g2_ParamLimits

0xb517,	// (0x0008f9fd) phob2_cc_data_pane_g2

0x0001,

0xfe55,	// (0x0009433b) phob2_cc_data_pane_g_ParamLimits

0xfe55,	// (0x0009433b) phob2_cc_data_pane_g

0xb529,	// (0x0008fa0f) phob2_cc_data_pane_t1_ParamLimits

0xb529,	// (0x0008fa0f) phob2_cc_data_pane_t1

0xb541,	// (0x0008fa27) phob2_cc_data_pane_t2_ParamLimits

0xb541,	// (0x0008fa27) phob2_cc_data_pane_t2

0xb559,	// (0x0008fa3f) phob2_cc_data_pane_t3_ParamLimits

0xb559,	// (0x0008fa3f) phob2_cc_data_pane_t3

0x0002,

0xfe5a,	// (0x00094340) phob2_cc_data_pane_t_ParamLimits

0xfe5a,	// (0x00094340) phob2_cc_data_pane_t

0x017f,	// (0x00084665) phob2_cc_list_pane_ParamLimits

0x017f,	// (0x00084665) phob2_cc_list_pane

0xd356,	// (0x0009183c) scroll_pane_cp035_ParamLimits

0xd356,	// (0x0009183c) scroll_pane_cp035

0x3931,	// (0x00087e17) bg_button_pane_cp033

0x018b,	// (0x00084671) phob2_cc_button_pane_g1

0x0197,	// (0x0008467d) phob2_cc_button_pane_t1

0x01ac,	// (0x00084692) phob2_cc_button_pane_t2

0x0001,

0xfe61,	// (0x00094347) phob2_cc_button_pane_t

0xb571,	// (0x0008fa57) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xb571,	// (0x0008fa57) list_double_large_graphic_phob2_cc_pane

0xb5a3,	// (0x0008fa89) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xb5a3,	// (0x0008fa89) list_double_large_graphic_phob2_cc_pane_g1

0xb5af,	// (0x0008fa95) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xb5af,	// (0x0008fa95) list_double_large_graphic_phob2_cc_pane_g2

0xb5bb,	// (0x0008faa1) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xb5bb,	// (0x0008faa1) list_double_large_graphic_phob2_cc_pane_g3

0xb5c7,	// (0x0008faad) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0xb5c7,	// (0x0008faad) list_double_large_graphic_phob2_cc_pane_g4

0xb5d3,	// (0x0008fab9) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xb5d3,	// (0x0008fab9) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfe66,	// (0x0009434c) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfe66,	// (0x0009434c) list_double_large_graphic_phob2_cc_pane_g

0xb5df,	// (0x0008fac5) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0xb5df,	// (0x0008fac5) list_double_large_graphic_phob2_cc_pane_t1

0xb608,	// (0x0008faee) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0xb608,	// (0x0008faee) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfe71,	// (0x00094357) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfe71,	// (0x00094357) list_double_large_graphic_phob2_cc_pane_t

0x02d3,	// (0x000847b9) list_highlight_pane_cp025_ParamLimits

0x02d3,	// (0x000847b9) list_highlight_pane_cp025

0x3931,	// (0x00087e17) bg_button_pane_cp033_ParamLimits

0x018b,	// (0x00084671) phob2_cc_button_pane_g1_ParamLimits

0x0197,	// (0x0008467d) phob2_cc_button_pane_t1_ParamLimits

0x01ac,	// (0x00084692) phob2_cc_button_pane_t2_ParamLimits

0xfe61,	// (0x00094347) phob2_cc_button_pane_t_ParamLimits

0x374d,	// (0x00087c33) popup_wgtman_window

0xd179,	// (0x0009165f) scroll_pane_cp038

0xaf48,	// (0x0008f42e) wgtman_btn_pane_cp_01_ParamLimits

0xaf48,	// (0x0008f42e) wgtman_btn_pane_cp_01

0x02e1,	// (0x000847c7) wgtman_content_pane

0x02ea,	// (0x000847d0) wgtman_heading_pane

0x08cb,	// (0x00084db1) bg_heading_pane_cp02

0x02f3,	// (0x000847d9) wgtman_heading_pane_g1

0x02fb,	// (0x000847e1) wgtman_heading_pane_t1

0x0309,	// (0x000847ef) scroll_pane_cp036

0x0311,	// (0x000847f7) wgtman_list_pane

0x0319,	// (0x000847ff) wgtman_list_pane_t1_ParamLimits

0x0319,	// (0x000847ff) wgtman_list_pane_t1

0xee8f,	// (0x00093375) cam4_grid_pane

0x8e72,	// (0x0008d358) bg_button_pane_cp015_ParamLimits

0x8e84,	// (0x0008d36a) bg_button_pane_cp016_ParamLimits

0x8e97,	// (0x0008d37d) bg_button_pane_cp017_ParamLimits

0x8eed,	// (0x0008d3d3) popup_vitu2_query_window_g3_ParamLimits

0x8eed,	// (0x0008d3d3) popup_vitu2_query_window_g3

0x8faa,	// (0x0008d490) popup_vitu2_query_window_t6_ParamLimits

0x8faa,	// (0x0008d490) popup_vitu2_query_window_t6

0x8fd5,	// (0x0008d4bb) popup_vitu2_query_window_t7_ParamLimits

0x8fd5,	// (0x0008d4bb) popup_vitu2_query_window_t7

0x0334,	// (0x0008481a) cam4_grid_pane_g1

0x033d,	// (0x00084823) cam4_grid_pane_g2

0x0346,	// (0x0008482c) cam4_grid_pane_g3

0x034f,	// (0x00084835) cam4_grid_pane_g4

0x0003,

0xfe76,	// (0x0009435c) cam4_grid_pane_g

0x4740,	// (0x00088c26) aid_placing_vt_slider_lsc_ParamLimits

0x4a8d,	// (0x00088f73) vidtel_button_pane_ParamLimits

0x4a8d,	// (0x00088f73) vidtel_button_pane

0x08cb,	// (0x00084db1) bg_button_pane_cp034

0x035a,	// (0x00084840) vidtel_button_pane_g1

0x0362,	// (0x00084848) vidtel_button_pane_t1

0xd29d,	// (0x00091783) aid_size_vtel_slider_touch

0xd356,	// (0x0009183c) scroll_pane_cp039

0x9c97,	// (0x0008e17d) ncim_query_button_pane_cp01_ParamLimits

0x9cb6,	// (0x0008e19c) ncimui_query_pane_g1_ParamLimits

0x3931,	// (0x00087e17) input_focus_pane_cp012_ParamLimits

0xdc7e,	// (0x00092164) ncim_query_entry_pane_t1_ParamLimits

0xd356,	// (0x0009183c) scroll_pane_cp039_ParamLimits

0xc1b5,	// (0x0009069b) navi_pane_bcale_mc_g1

0xc1bd,	// (0x000906a3) navi_pane_bcale_mc_t1

0xe237,	// (0x0009271d) main_sp_fs_email_pane_g1

0xe243,	// (0x00092729) main_sp_fs_email_pane_g2

0x0001,

0xfc79,	// (0x0009415f) main_sp_fs_email_pane_g

0xe6d4,	// (0x00092bba) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe6d4,	// (0x00092bba) list_single_cale_mrui_row_pane_g3

0xaafd,	// (0x0008efe3) list_single_recal_day_pane_g5_event_pane

0xe8b3,	// (0x00092d99) list_single_recal_day_pane_g7

0x0378,	// (0x0008485e) list_recal_day_event_pane_cp01

0x0381,	// (0x00084867) list_recal_vselct_arw_lo_pane_cp01

0x0389,	// (0x0008486f) list_recal_vselct_arw_up_pane_cp01

0x0391,	// (0x00084877) list_recal_vselct_pane_cp01

0xd2bf,	// (0x000917a5) list_recal_day_event_pane_cp01_g1

0xed17,	// (0x000931fd) list_recal_day_event_pane_cp01_t1

0xe8bb,	// (0x00092da1) list_single_recal_day_pane_t1_ParamLimits

0xe8cd,	// (0x00092db3) list_single_recal_day_pane_t2_ParamLimits

0xfd59,	// (0x0009423f) list_single_recal_day_pane_t_ParamLimits

0x390f,	// (0x00087df5) bg_notes_pane_ParamLimits

0x3b2a,	// (0x00088010) list_notes_pane_ParamLimits

0x3b38,	// (0x0008801e) scroll_pane_cp06_ParamLimits

0x3b60,	// (0x00088046) main_notes_pane_ParamLimits

0x3931,	// (0x00087e17) main_welc_pane

0xb64d,	// (0x0008fb33) main_welc_body_pane_ParamLimits

0xb64d,	// (0x0008fb33) main_welc_body_pane

0xb66a,	// (0x0008fb50) main_welc_opti_pane_ParamLimits

0xb66a,	// (0x0008fb50) main_welc_opti_pane

0xb6de,	// (0x0008fbc4) main_welc_pane_t1_ParamLimits

0xb6de,	// (0x0008fbc4) main_welc_pane_t1

0xb844,	// (0x0008fd2a) main_welc_body_row_pane_ParamLimits

0xb844,	// (0x0008fd2a) main_welc_body_row_pane

0x0e38,	// (0x0008531e) main_welc_opti_row_pane_ParamLimits

0x0e38,	// (0x0008531e) main_welc_opti_row_pane

0x0565,	// (0x00084a4b) main_welc_opti_row_pane_g1

0xb859,	// (0x0008fd3f) main_welc_opti_row_pane_t1

0x057c,	// (0x00084a62) main_welc_body_row_pane_t1

0xeb29,	// (0x0009300f) popup_notif_wgt_heading_pane

0xeb43,	// (0x00093029) aid_size_list_notif_wgt_del_ParamLimits

0xeb50,	// (0x00093036) list_notif_wgt_row_pane_g1_ParamLimits

0xeb5c,	// (0x00093042) list_notif_wgt_row_pane_g2_ParamLimits

0xeb6b,	// (0x00093051) list_notif_wgt_row_pane_g3_ParamLimits

0xfdc0,	// (0x000942a6) list_notif_wgt_row_pane_g_ParamLimits

0xeb78,	// (0x0009305e) list_notif_wgt_row_pane_t1_ParamLimits

0xeb8e,	// (0x00093074) list_notif_wgt_row_pane_t2_ParamLimits

0xeba0,	// (0x00093086) list_notif_wgt_row_pane_t3_ParamLimits

0xfdc7,	// (0x000942ad) list_notif_wgt_row_pane_t_ParamLimits

0xafe2,	// (0x0008f4c8) listrow_wgtman_pane_g1_ParamLimits

0xafef,	// (0x0008f4d5) listrow_wgtman_pane_g2_ParamLimits

0xfdf7,	// (0x000942dd) listrow_wgtman_pane_g_ParamLimits

0xb00d,	// (0x0008f4f3) listrow_wgtman_pane_t1_ParamLimits

0xb025,	// (0x0008f50b) listrow_wgtman_pane_t2_ParamLimits

0xfdfc,	// (0x000942e2) listrow_wgtman_pane_t_ParamLimits

0xb04b,	// (0x0008f531) wait_bar_pane_cp09_ParamLimits

0x08cb,	// (0x00084db1) bg_popup_heading_pane_cp02

0x058b,	// (0x00084a71) popup_notif_wgt_heading_pane_g1

0x0593,	// (0x00084a79) popup_notif_wgt_heading_pane_t1

0x08cb,	// (0x00084db1) main_vids_pane

0x08cb,	// (0x00084db1) vids_listscroll_pane

0xb868,	// (0x0008fd4e) scroll_pane_cp040

0x08cb,	// (0x00084db1) vids_list_pane

0xb873,	// (0x0008fd59) vids_list_double_pane_ParamLimits

0xb873,	// (0x0008fd59) vids_list_double_pane

0xb884,	// (0x0008fd6a) vids_list_double_pane_g1

0xb88d,	// (0x0008fd73) vids_list_double_pane_t1

0xb89c,	// (0x0008fd82) vids_list_double_pane_t2

0x0001,

0xfe95,	// (0x0009437b) vids_list_double_pane_t

0xbb19,	// (0x0008ffff) main_ncimui_pane_ParamLimits

0x9acd,	// (0x0008dfb3) main_ncimui_pane_g1_ParamLimits

0x9ad9,	// (0x0008dfbf) main_ncimui_pane_g2_ParamLimits

0x9ad9,	// (0x0008dfbf) main_ncimui_pane_g2

0x0001,

0xfb7a,	// (0x00094060) main_ncimui_pane_g_ParamLimits

0xfb7a,	// (0x00094060) main_ncimui_pane_g

0xb685,	// (0x0008fb6b) main_welc_pane_g1_ParamLimits

0xb685,	// (0x0008fb6b) main_welc_pane_g1

0xb69a,	// (0x0008fb80) main_welc_pane_g2_ParamLimits

0xb69a,	// (0x0008fb80) main_welc_pane_g2

0x0003,

0xfe7f,	// (0x00094365) main_welc_pane_g_ParamLimits

0xfe7f,	// (0x00094365) main_welc_pane_g

0x390f,	// (0x00087df5) listscroll_mce_pane_ParamLimits

0xc30a,	// (0x000907f0) wait_bar_pane_cp10

0x177d,	// (0x00085c63) main_cale_day_pane_ParamLimits

0x177d,	// (0x00085c63) main_cale_week_pane_ParamLimits

0x390f,	// (0x00087df5) main_messa_pane_ParamLimits

0x762d,	// (0x0008bb13) main_clock2_btn_pane_ParamLimits

0x762d,	// (0x0008bb13) main_clock2_btn_pane

0x1f8a,	// (0x00086470) main_clock2_btn_pane_cp01_ParamLimits

0x1f8a,	// (0x00086470) main_clock2_btn_pane_cp01

0xe660,	// (0x00092b46) list_cale_mrui_pane_ParamLimits

0xebd6,	// (0x000930bc) main_cf0_pane_g2

0x0001,

0xfdce,	// (0x000942b4) main_cf0_pane_g

0xb238,	// (0x0008f71e) area_left_week_number_pane_ParamLimits

0xb244,	// (0x0008f72a) area_top_day_name_pane_ParamLimits

0xb257,	// (0x0008f73d) frame_month_view_pane_ParamLimits

0xecef,	// (0x000931d5) grid_month_view_pane_ParamLimits

0xecfd,	// (0x000931e3) frm_month_g1_ParamLimits

0xb2d8,	// (0x0008f7be) frm_month_g2_ParamLimits

0xb2eb,	// (0x0008f7d1) frm_month_g3_ParamLimits

0xb2fe,	// (0x0008f7e4) frm_month_g4_ParamLimits

0xb311,	// (0x0008f7f7) frm_month_g5_ParamLimits

0xb324,	// (0x0008f80a) frm_month_g6_ParamLimits

0xb337,	// (0x0008f81d) frm_month_g7_ParamLimits

0xed0a,	// (0x000931f0) frm_month_g8_ParamLimits

0xb34a,	// (0x0008f830) frm_month_g9_ParamLimits

0xb35a,	// (0x0008f840) frm_month_g10_ParamLimits

0xb36a,	// (0x0008f850) frm_month_g11_ParamLimits

0xb37a,	// (0x0008f860) frm_month_g12_ParamLimits

0xb38c,	// (0x0008f872) frm_month_g13_ParamLimits

0xb39e,	// (0x0008f884) frm_month_g14_ParamLimits

0xb3b2,	// (0x0008f898) frm_month_g15_ParamLimits

0xb3c6,	// (0x0008f8ac) frm_month_g16_ParamLimits

0xfe26,	// (0x0009430c) frm_month_g_ParamLimits

0xf072,	// (0x00093558) cell_top_day_name_pane_t1_ParamLimits

0xb3da,	// (0x0008f8c0) cell_area_left_week_number_pane_g1_ParamLimits

0xb3e6,	// (0x0008f8cc) cell_area_left_week_number_pane_t1_ParamLimits

0x398a,	// (0x00087e70) cell_month_view_pane_g1_ParamLimits

0xb3f9,	// (0x0008f8df) cell_month_view_pane_t1_ParamLimits

0x3907,	// (0x00087ded) main_clock2_btn_pane_g1

0x05eb,	// (0x00084ad1) main_clock2_btn_pane_t1

0x3931,	// (0x00087e17) listscroll_cmail_pane_ParamLimits

0xe237,	// (0x0009271d) main_sp_fs_email_pane_g1_ParamLimits

0xe243,	// (0x00092729) main_sp_fs_email_pane_g2_ParamLimits

0xfc79,	// (0x0009415f) main_sp_fs_email_pane_g_ParamLimits

0xe823,	// (0x00092d09) list_recal_day_pane_ParamLimits

0xe834,	// (0x00092d1a) mian_recal_day_pane_t1

0xa4b2,	// (0x0008e998) list_single_dyc_row_text_pane_t4_ParamLimits

0xa4b2,	// (0x0008e998) list_single_dyc_row_text_pane_t4

0xa4fb,	// (0x0008e9e1) list_single_dyc_row_text_pane_t5_ParamLimits

0xa4fb,	// (0x0008e9e1) list_single_dyc_row_text_pane_t5

0xe2e5,	// (0x000927cb) list_single_dyc_row_text_pane_t6_ParamLimits

0xe2e5,	// (0x000927cb) list_single_dyc_row_text_pane_t6

0x57b1,	// (0x00089c97) aid_mgn_list_cale_time_pane

0xbb19,	// (0x0008ffff) main_gallery2_pane_ParamLimits

0x1fa0,	// (0x00086486) main_clock2_pane_cp01_t1

0x1fae,	// (0x00086494) main_clock2_pane_cp01_t3

0x0001,

0xf75f,	// (0x00093c45) main_clock2_pane_cp01_t

0x4027,	// (0x0008850d) cale_week_scroll_pane_g16_ParamLimits

0x4027,	// (0x0008850d) cale_week_scroll_pane_g16

0x4432,	// (0x00088918) vorec_slider_pane

0x0362,	// (0x00084848) vidtel_button_pane_t1_ParamLimits

0xab63,	// (0x0008f049) main_fs_bigclock_clock_pane_g1_ParamLimits

0xab63,	// (0x0008f049) main_fs_bigclock_clock_pane_g2_ParamLimits

0xab74,	// (0x0008f05a) main_fs_bigclock_clock_pane_g3_ParamLimits

0xab74,	// (0x0008f05a) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfd7c,	// (0x00094262) main_fs_bigclock_clock_pane_g_ParamLimits

0xab87,	// (0x0008f06d) main_fs_bigclock_clock_pane_t1_ParamLimits

0xab9d,	// (0x0008f083) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfd85,	// (0x0009426b) main_fs_bigclock_clock_pane_t_ParamLimits

0x6f09,	// (0x0008b3ef) main_mup3_lyrics_pane_ParamLimits

0x6f09,	// (0x0008b3ef) main_mup3_lyrics_pane

0xb8d2,	// (0x0008fdb8) main_mup3_lyrics_pane_t1_ParamLimits

0xb8d2,	// (0x0008fdb8) main_mup3_lyrics_pane_t1

0xcfbf,	// (0x000914a5) aid_main_mp4_pane_t1_area

0xcfc9,	// (0x000914af) aid_main_mp4_pane_t2_area

0xd075,	// (0x0009155b) main_mp4_pane_g7_ParamLimits

0xd075,	// (0x0009155b) main_mp4_pane_g7

0xd081,	// (0x00091567) main_mp4_pane_g8_ParamLimits

0xd081,	// (0x00091567) main_mp4_pane_g8

0x7fec,	// (0x0008c4d2) aid_call6_pane_g1_size

0xb58c,	// (0x0008fa72) list_double_large_graphic_phob2_other_pane_ParamLimits

0xb58c,	// (0x0008fa72) list_double_large_graphic_phob2_other_pane

0xc0e6,	// (0x000905cc) list_double_large_graphic_phob2_other_pane_g1

0x08cb,	// (0x00084db1) list_highlight_pane_cp026

0x3931,	// (0x00087e17) main_welc_pane_ParamLimits

0xa2f1,	// (0x0008e7d7) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0xa2f1,	// (0x0008e7d7) main_sp_fs_ctrlbar_pane_g3

0xa30b,	// (0x0008e7f1) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0xa30b,	// (0x0008e7f1) main_sp_fs_ctrlbar_pane_g4

0xa33f,	// (0x0008e825) toolbar2_fixed_button_pane_cp01

0xa34a,	// (0x0008e830) toolbar2_fixed_button_pane_cp02

0xa357,	// (0x0008e83d) toolbar2_fixed_button_pane_cp03

0xb631,	// (0x0008fb17) list_welc_entry_pane_ParamLimits

0xb631,	// (0x0008fb17) list_welc_entry_pane

0xb6af,	// (0x0008fb95) main_welc_pane_g3_ParamLimits

0xb6af,	// (0x0008fb95) main_welc_pane_g3

0xb6fc,	// (0x0008fbe2) main_welc_pane_t2_ParamLimits

0xb6fc,	// (0x0008fbe2) main_welc_pane_t2

0xb716,	// (0x0008fbfc) main_welc_pane_t3_ParamLimits

0xb716,	// (0x0008fbfc) main_welc_pane_t3

0x0005,

0xfe88,	// (0x0009436e) main_welc_pane_t_ParamLimits

0xfe88,	// (0x0009436e) main_welc_pane_t

0xb7c8,	// (0x0008fcae) welc_button_pane_ParamLimits

0xb7c8,	// (0x0008fcae) welc_button_pane

0xb830,	// (0x0008fd16) welc_service_logo_pane_ParamLimits

0xb830,	// (0x0008fd16) welc_service_logo_pane

0xb8ee,	// (0x0008fdd4) list_single_welc_entry_pane_ParamLimits

0xb8ee,	// (0x0008fdd4) list_single_welc_entry_pane

0xb8ff,	// (0x0008fde5) list_single_welc_entry_pane_g1

0xb907,	// (0x0008fded) list_single_welc_entry_pane_t1

0xb915,	// (0x0008fdfb) list_single_welc_entry_pane_t2

0x0001,

0xfe9a,	// (0x00094380) list_single_welc_entry_pane_t

0x08cb,	// (0x00084db1) bg_button_pane_cp035

0x068a,	// (0x00084b70) welc_button_pane_t1

0x0698,	// (0x00084b7e) welc_service_logo_pane_g1

0x06a1,	// (0x00084b87) welc_service_logo_pane_g2

0x0001,

0xfe9f,	// (0x00094385) welc_service_logo_pane_g

0xbb27,	// (0x0009000d) main_int_radio_pane

0xdb1c,	// (0x00092002) list_single_fs_dyc_pane_g1

0xb4bc,	// (0x0008f9a2) list_double_large_graphic_phob2_pane_g3_ParamLimits

0xb4bc,	// (0x0008f9a2) list_double_large_graphic_phob2_pane_g3

0xb4c8,	// (0x0008f9ae) list_double_large_graphic_phob2_pane_g4_ParamLimits

0xb4c8,	// (0x0008f9ae) list_double_large_graphic_phob2_pane_g4

0xb923,	// (0x0008fe09) main_int_radio1_pane_ParamLimits

0xb923,	// (0x0008fe09) main_int_radio1_pane

0x06bc,	// (0x00084ba2) find_pane_cp02

0xb940,	// (0x0008fe26) input_focus_pane_cp12_ParamLimits

0xb940,	// (0x0008fe26) input_focus_pane_cp12

0xb950,	// (0x0008fe36) input_focus_pane_cp13_ParamLimits

0xb950,	// (0x0008fe36) input_focus_pane_cp13

0xb964,	// (0x0008fe4a) input_focus_pane_cp14_ParamLimits

0xb964,	// (0x0008fe4a) input_focus_pane_cp14

0x0701,	// (0x00084be7) int_radio1_listscroll_pane

0xb978,	// (0x0008fe5e) main_int_radio1_pane_g1_ParamLimits

0xb978,	// (0x0008fe5e) main_int_radio1_pane_g1

0xb990,	// (0x0008fe76) main_int_radio1_pane_t1_ParamLimits

0xb990,	// (0x0008fe76) main_int_radio1_pane_t1

0xb9ab,	// (0x0008fe91) main_int_radio1_pane_t2_ParamLimits

0xb9ab,	// (0x0008fe91) main_int_radio1_pane_t2

0xb9c6,	// (0x0008feac) main_int_radio1_pane_t3_ParamLimits

0xb9c6,	// (0x0008feac) main_int_radio1_pane_t3

0xb9e1,	// (0x0008fec7) main_int_radio1_pane_t4_ParamLimits

0xb9e1,	// (0x0008fec7) main_int_radio1_pane_t4

0x076e,	// (0x00084c54) main_int_radio1_pane_t5_ParamLimits

0x076e,	// (0x00084c54) main_int_radio1_pane_t5

0xb9f3,	// (0x0008fed9) main_int_radio1_pane_t6_ParamLimits

0xb9f3,	// (0x0008fed9) main_int_radio1_pane_t6

0xba08,	// (0x0008feee) main_int_radio1_pane_t7_ParamLimits

0xba08,	// (0x0008feee) main_int_radio1_pane_t7

0xba1d,	// (0x0008ff03) main_int_radio1_pane_t8_ParamLimits

0xba1d,	// (0x0008ff03) main_int_radio1_pane_t8

0xba3c,	// (0x0008ff22) main_int_radio1_pane_t9_ParamLimits

0xba3c,	// (0x0008ff22) main_int_radio1_pane_t9

0xba4e,	// (0x0008ff34) main_int_radio1_pane_t10_ParamLimits

0xba4e,	// (0x0008ff34) main_int_radio1_pane_t10

0xba74,	// (0x0008ff5a) main_int_radio1_pane_t11_ParamLimits

0xba74,	// (0x0008ff5a) main_int_radio1_pane_t11

0xba9a,	// (0x0008ff80) main_int_radio1_pane_t12_ParamLimits

0xba9a,	// (0x0008ff80) main_int_radio1_pane_t12

0x000b,

0xfea4,	// (0x0009438a) main_int_radio1_pane_t_ParamLimits

0xfea4,	// (0x0009438a) main_int_radio1_pane_t

0x0843,	// (0x00084d29) int_radio_list_pane

0x0081,	// (0x00084567) scroll_pane_cp037

0x084b,	// (0x00084d31) list_double_large_graphic_int_radio_pane_ParamLimits

0x084b,	// (0x00084d31) list_double_large_graphic_int_radio_pane

0x0864,	// (0x00084d4a) list_double_large_graphic_int_radio_pane_g1

0xed25,	// (0x0009320b) list_double_large_graphic_int_radio_pane_t1

0xed33,	// (0x00093219) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfebd,	// (0x000943a3) list_double_large_graphic_int_radio_pane_t

0x08cb,	// (0x00084db1) list_highlight_pane_cp027

0x03aa,	// (0x00084890) main_button_pane_4

0xb6bf,	// (0x0008fba5) main_welc_pane_g4_ParamLimits

0xb6bf,	// (0x0008fba5) main_welc_pane_g4

0xb72e,	// (0x0008fc14) main_welc_pane_t4_ParamLimits

0xb72e,	// (0x0008fc14) main_welc_pane_t4

0xb743,	// (0x0008fc29) main_welc_pane_t5_ParamLimits

0xb743,	// (0x0008fc29) main_welc_pane_t5

0xb78d,	// (0x0008fc73) main_welc_pane_t6_ParamLimits

0xb78d,	// (0x0008fc73) main_welc_pane_t6

0xb7df,	// (0x0008fcc5) welc_button_pane_2_ParamLimits

0xb7df,	// (0x0008fcc5) welc_button_pane_2

0xb7fb,	// (0x0008fce1) welc_button_pane_3_ParamLimits

0xb7fb,	// (0x0008fce1) welc_button_pane_3

0x03aa,	// (0x00084890) welc_button_pane_4

0xb81a,	// (0x0008fd00) welc_button_pane_5_ParamLimits

0xb81a,	// (0x0008fd00) welc_button_pane_5

0x6771,	// (0x0008ac57) main_popup_welc_pane

0x086d,	// (0x00084d53) main_welc_sk_g3

0x0877,	// (0x00084d5d) main_welc_sk_g4

0x0881,	// (0x00084d67) main_welc_sk_t3

0x0891,	// (0x00084d77) main_welc_sk_t4

0x08a1,	// (0x00084d87) popup_welc_pane_t4

0x08af,	// (0x00084d95) popup_welc_pane_t5

0x08bd,	// (0x00084da3) popup_welc_pane_t6
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
	};

} // end of namespace AknLayoutScalable_Abrw_pnl4_apps_nhd4_lsc_tch_Large
