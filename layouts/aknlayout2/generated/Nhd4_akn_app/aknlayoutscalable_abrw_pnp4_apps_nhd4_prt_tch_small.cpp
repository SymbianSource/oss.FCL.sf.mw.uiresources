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

#include "aknlayoutscalable_abrw_pnp4_apps_nhd4_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pnp4_apps_nhd4_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x00051b02 };

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
0x32a5,	// (0x00054da7) Screen

0x32b1,	// (0x00054db3) application_window

0x330d,	// (0x00054e0f) area_bottom_pane_ParamLimits

0x330d,	// (0x00054e0f) area_bottom_pane

0x3365,	// (0x00054e67) area_top_pane_ParamLimits

0x3365,	// (0x00054e67) area_top_pane

0x33c9,	// (0x00054ecb) call_video_uplink_pane_ParamLimits

0x33c9,	// (0x00054ecb) call_video_uplink_pane

0x3408,	// (0x00054f0a) main_pane_ParamLimits

0x3408,	// (0x00054f0a) main_pane

0xe490,	// (0x0005ff92) context_pane

0x60b2,	// (0x00057bb4) navi_pane

0x60d8,	// (0x00057bda) popup_cale_events_window_ParamLimits

0x60d8,	// (0x00057bda) popup_cale_events_window

0xe4a3,	// (0x0005ffa5) popup_mup_playback_window

0x60f0,	// (0x00057bf2) signal_pane

0xc10e,	// (0x0005dc10) main_browser_pane

0xc2c0,	// (0x0005ddc2) main_burst_pane

0x5f34,	// (0x00057a36) main_calc_pane

0xe484,	// (0x0005ff86) main_cale_day_pane

0x38c4,	// (0x000553c6) main_cale_month_pane

0xe484,	// (0x0005ff86) main_cale_week_pane

0xc2c0,	// (0x0005ddc2) main_call_pane

0xbd8e,	// (0x0005d890) main_call_poc_pane

0xc2c0,	// (0x0005ddc2) main_camera_pane

0xc2c0,	// (0x0005ddc2) main_chi_dic_pane

0xce94,	// (0x0005e996) main_clock_pane

0xbd8e,	// (0x0005d890) main_fmradio_pane

0xc2c0,	// (0x0005ddc2) main_graph_messa_pane

0xbd8e,	// (0x0005d890) main_help_pane

0xc10e,	// (0x0005dc10) main_im_pane

0xbfe9,	// (0x0005daeb) main_image_pane_ParamLimits

0xbfe9,	// (0x0005daeb) main_image_pane

0xbd8e,	// (0x0005d890) main_location2_pane

0xc2c0,	// (0x0005ddc2) main_location_pane

0xbfe9,	// (0x0005daeb) main_messa_pane

0xbd8e,	// (0x0005d890) main_mp2_pane

0xc2c0,	// (0x0005ddc2) main_mp_pane

0xbd8e,	// (0x0005d890) main_msg_pane

0xbd8e,	// (0x0005d890) main_mup_eq_pane

0xbd8e,	// (0x0005d890) main_mup_pane

0xc10e,	// (0x0005dc10) main_notes_pane

0xbd8e,	// (0x0005d890) main_pec_pane

0xbd8e,	// (0x0005d890) main_phob_pane

0xbd8e,	// (0x0005d890) main_pinb_pane

0xbd8e,	// (0x0005d890) main_postcard_pane

0xbd8e,	// (0x0005d890) main_qdial_pane

0xc2c0,	// (0x0005ddc2) main_skin_pane

0xbd8e,	// (0x0005d890) main_smil2_pane

0xc2c0,	// (0x0005ddc2) main_smil_pane

0xc2c0,	// (0x0005ddc2) main_video_pane

0xc2c0,	// (0x0005ddc2) main_video_tele_pane

0xbfe9,	// (0x0005daeb) main_viewer_pane_ParamLimits

0xbfe9,	// (0x0005daeb) main_viewer_pane

0xc2c0,	// (0x0005ddc2) main_vorec_pane

0x5f80,	// (0x00057a82) popup_blid_sat_info_window_ParamLimits

0x5f80,	// (0x00057a82) popup_blid_sat_info_window

0x5fa0,	// (0x00057aa2) popup_dyc_status_message_window_ParamLimits

0x5fa0,	// (0x00057aa2) popup_dyc_status_message_window

0x5fae,	// (0x00057ab0) popup_grid_large_graphic_window_ParamLimits

0x5fae,	// (0x00057ab0) popup_grid_large_graphic_window

0x603d,	// (0x00057b3f) popup_loc_request_window_ParamLimits

0x603d,	// (0x00057b3f) popup_loc_request_window

0x608a,	// (0x00057b8c) popup_wml_address_window_ParamLimits

0x608a,	// (0x00057b8c) popup_wml_address_window

0x5e0c,	// (0x0005790e) call_muted_g1

0x5af9,	// (0x000575fb) popup_call_audio_conf_window_ParamLimits

0x5af9,	// (0x000575fb) popup_call_audio_conf_window

0x5e1c,	// (0x0005791e) popup_call_audio_first_window_ParamLimits

0x5e1c,	// (0x0005791e) popup_call_audio_first_window

0x5e5c,	// (0x0005795e) popup_call_audio_in_window_ParamLimits

0x5e5c,	// (0x0005795e) popup_call_audio_in_window

0x5e80,	// (0x00057982) popup_call_audio_out_window_ParamLimits

0x5e80,	// (0x00057982) popup_call_audio_out_window

0x5ea2,	// (0x000579a4) popup_call_audio_second_window_ParamLimits

0x5ea2,	// (0x000579a4) popup_call_audio_second_window

0x5ed2,	// (0x000579d4) popup_call_audio_wait_window_ParamLimits

0x5ed2,	// (0x000579d4) popup_call_audio_wait_window

0x5ef3,	// (0x000579f5) popup_number_entry_window_ParamLimits

0x5ef3,	// (0x000579f5) popup_number_entry_window

0xb97b,	// (0x0005d47d) bg_popup_call_pane_cp05_ParamLimits

0xb97b,	// (0x0005d47d) bg_popup_call_pane_cp05

0xb99b,	// (0x0005d49d) popup_number_entry_window_t1

0xb9ae,	// (0x0005d4b0) popup_number_entry_window_t2

0xb9c0,	// (0x0005d4c2) popup_number_entry_window_t3

0x0003,

0xf040,	// (0x00060b42) popup_number_entry_window_t

0xb9d2,	// (0x0005d4d4) text_title_cp2

0xb9e5,	// (0x0005d4e7) bg_popup_call_pane_cp_ParamLimits

0xb9e5,	// (0x0005d4e7) bg_popup_call_pane_cp

0xb9f3,	// (0x0005d4f5) call_thumbnail_pane

0xb9fb,	// (0x0005d4fd) popup_call_audio_in_window_g1_ParamLimits

0xb9fb,	// (0x0005d4fd) popup_call_audio_in_window_g1

0xba07,	// (0x0005d509) popup_call_audio_in_window_g2_ParamLimits

0xba07,	// (0x0005d509) popup_call_audio_in_window_g2

0xba13,	// (0x0005d515) popup_call_audio_in_window_g3_ParamLimits

0xba13,	// (0x0005d515) popup_call_audio_in_window_g3

0x0002,

0xf049,	// (0x00060b4b) popup_call_audio_in_window_g_ParamLimits

0xf049,	// (0x00060b4b) popup_call_audio_in_window_g

0xba1f,	// (0x0005d521) popup_call_audio_in_window_t1_ParamLimits

0xba1f,	// (0x0005d521) popup_call_audio_in_window_t1

0xba3b,	// (0x0005d53d) popup_call_audio_in_window_t2_ParamLimits

0xba3b,	// (0x0005d53d) popup_call_audio_in_window_t2

0xba57,	// (0x0005d559) popup_call_audio_in_window_t3_ParamLimits

0xba57,	// (0x0005d559) popup_call_audio_in_window_t3

0x0002,

0xf050,	// (0x00060b52) popup_call_audio_in_window_t_ParamLimits

0xf050,	// (0x00060b52) popup_call_audio_in_window_t

0xb9e5,	// (0x0005d4e7) bg_popup_call_pane_cp01_ParamLimits

0xb9e5,	// (0x0005d4e7) bg_popup_call_pane_cp01

0xb9f3,	// (0x0005d4f5) call_thumbnail_pane_cp02

0xba6a,	// (0x0005d56c) call_type_pane_cp022

0xba72,	// (0x0005d574) popup_call_audio_out_window_g1_ParamLimits

0xba72,	// (0x0005d574) popup_call_audio_out_window_g1

0xba84,	// (0x0005d586) popup_call_audio_out_window_g2_ParamLimits

0xba84,	// (0x0005d586) popup_call_audio_out_window_g2

0xba90,	// (0x0005d592) popup_call_audio_out_window_g3_ParamLimits

0xba90,	// (0x0005d592) popup_call_audio_out_window_g3

0x0002,

0xf057,	// (0x00060b59) popup_call_audio_out_window_g_ParamLimits

0xf057,	// (0x00060b59) popup_call_audio_out_window_g

0xbaa2,	// (0x0005d5a4) popup_call_audio_out_window_t1_ParamLimits

0xbaa2,	// (0x0005d5a4) popup_call_audio_out_window_t1

0xbaba,	// (0x0005d5bc) popup_call_audio_out_window_t2_ParamLimits

0xbaba,	// (0x0005d5bc) popup_call_audio_out_window_t2

0x0001,

0xf05e,	// (0x00060b60) popup_call_audio_out_window_t_ParamLimits

0xf05e,	// (0x00060b60) popup_call_audio_out_window_t

0xbacf,	// (0x0005d5d1) bg_popup_call_pane_ParamLimits

0xbacf,	// (0x0005d5d1) bg_popup_call_pane

0x3587,	// (0x00055089) call_thumbnail_pane_cp_ParamLimits

0x3587,	// (0x00055089) call_thumbnail_pane_cp

0xbb53,	// (0x0005d655) call_type_pane_cp01_ParamLimits

0xbb53,	// (0x0005d655) call_type_pane_cp01

0xbb97,	// (0x0005d699) popup_call_audio_first_window_g1_ParamLimits

0xbb97,	// (0x0005d699) popup_call_audio_first_window_g1

0xbbe3,	// (0x0005d6e5) popup_call_audio_first_window_g2_ParamLimits

0xbbe3,	// (0x0005d6e5) popup_call_audio_first_window_g2

0x0001,

0xf063,	// (0x00060b65) popup_call_audio_first_window_g_ParamLimits

0xf063,	// (0x00060b65) popup_call_audio_first_window_g

0xbc27,	// (0x0005d729) popup_call_audio_first_window_t1_ParamLimits

0xbc27,	// (0x0005d729) popup_call_audio_first_window_t1

0xbcd3,	// (0x0005d7d5) popup_call_audio_first_window_t4_ParamLimits

0xbcd3,	// (0x0005d7d5) popup_call_audio_first_window_t4

0xbd5f,	// (0x0005d861) popup_call_audio_first_window_t5_ParamLimits

0xbd5f,	// (0x0005d861) popup_call_audio_first_window_t5

0x0002,

0xf068,	// (0x00060b6a) popup_call_audio_first_window_t_ParamLimits

0xf068,	// (0x00060b6a) popup_call_audio_first_window_t

0xbd8e,	// (0x0005d890) bg_popup_call_pane_cp02

0xbd98,	// (0x0005d89a) call_type_pane_cp023

0xbda0,	// (0x0005d8a2) popup_call_audio_wait_window_g1

0xbda8,	// (0x0005d8aa) popup_call_audio_wait_window_g2

0x0001,

0xf06f,	// (0x00060b71) popup_call_audio_wait_window_g

0xbdb0,	// (0x0005d8b2) popup_call_audio_wait_window_t3

0xbdbe,	// (0x0005d8c0) bg_popup_call_pane_cp03_ParamLimits

0xbdbe,	// (0x0005d8c0) bg_popup_call_pane_cp03

0xbe1e,	// (0x0005d920) call_thumbnail_pane_cp011_ParamLimits

0xbe1e,	// (0x0005d920) call_thumbnail_pane_cp011

0xbe2a,	// (0x0005d92c) call_type_pane_cp034_ParamLimits

0xbe2a,	// (0x0005d92c) call_type_pane_cp034

0xbe66,	// (0x0005d968) popup_call_audio_second_window_g1_ParamLimits

0xbe66,	// (0x0005d968) popup_call_audio_second_window_g1

0xbea2,	// (0x0005d9a4) popup_call_audio_second_window_g2_ParamLimits

0xbea2,	// (0x0005d9a4) popup_call_audio_second_window_g2

0x0001,

0xf074,	// (0x00060b76) popup_call_audio_second_window_g_ParamLimits

0xf074,	// (0x00060b76) popup_call_audio_second_window_g

0xbede,	// (0x0005d9e0) popup_call_audio_second_window_t1_ParamLimits

0xbede,	// (0x0005d9e0) popup_call_audio_second_window_t1

0xbf5f,	// (0x0005da61) popup_call_audio_second_window_t2_ParamLimits

0xbf5f,	// (0x0005da61) popup_call_audio_second_window_t2

0xbf95,	// (0x0005da97) popup_call_audio_second_window_t3_ParamLimits

0xbf95,	// (0x0005da97) popup_call_audio_second_window_t3

0x0002,

0xf079,	// (0x00060b7b) popup_call_audio_second_window_t_ParamLimits

0xf079,	// (0x00060b7b) popup_call_audio_second_window_t

0xbd8e,	// (0x0005d890) bg_popup_call_pane_cp04

0xbfcb,	// (0x0005dacd) list_conf_pane

0xbfd3,	// (0x0005dad5) popup_call_audio_conf_window_t1

0xbfe1,	// (0x0005dae3) call_thumbnail_pane_g1

0xbfe9,	// (0x0005daeb) bg_pinb_pane_ParamLimits

0xbfe9,	// (0x0005daeb) bg_pinb_pane

0xbff7,	// (0x0005daf9) find_pinb_pane

0xbfe9,	// (0x0005daeb) listscroll_pinb_pane_ParamLimits

0xbfe9,	// (0x0005daeb) listscroll_pinb_pane

0xc001,	// (0x0005db03) pinb_bg_pane_g1

0xc001,	// (0x0005db03) pinb_bg_pane_g2

0xc001,	// (0x0005db03) pinb_bg_pane_g3

0xc001,	// (0x0005db03) pinb_bg_pane_g4

0xc001,	// (0x0005db03) pinb_bg_pane_g5

0xc001,	// (0x0005db03) pinb_bg_pane_g6

0xc001,	// (0x0005db03) pinb_bg_pane_g7

0xc001,	// (0x0005db03) pinb_bg_pane_g8

0xc001,	// (0x0005db03) pinb_bg_pane_g9

0xc001,	// (0x0005db03) pinb_bg_pane_g10

0x0009,

0xf080,	// (0x00060b82) pinb_bg_pane_g

0xb971,	// (0x0005d473) grid_pinb_pane

0xb971,	// (0x0005d473) list_pinb_pane

0xc00b,	// (0x0005db0d) scroll_pane_cp01_ParamLimits

0xc00b,	// (0x0005db0d) scroll_pane_cp01

0xc019,	// (0x0005db1b) find_pinb_pane_g1_ParamLimits

0xc019,	// (0x0005db1b) find_pinb_pane_g1

0xc031,	// (0x0005db33) find_pinb_pane_t1

0xc043,	// (0x0005db45) find_pinb_pane_t2

0x0001,

0xf09a,	// (0x00060b9c) find_pinb_pane_t

0xc058,	// (0x0005db5a) input_focus_pane_cp01_ParamLimits

0xc058,	// (0x0005db5a) input_focus_pane_cp01

0xc064,	// (0x0005db66) cell_pinb_pane_ParamLimits

0xc064,	// (0x0005db66) cell_pinb_pane

0xc072,	// (0x0005db74) cell_pinb_pane_g1_ParamLimits

0xc072,	// (0x0005db74) cell_pinb_pane_g1

0xc080,	// (0x0005db82) cell_pinb_pane_g2_ParamLimits

0xc080,	// (0x0005db82) cell_pinb_pane_g2

0xc080,	// (0x0005db82) cell_pinb_pane_g3_ParamLimits

0xc080,	// (0x0005db82) cell_pinb_pane_g3

0x0002,

0xf09f,	// (0x00060ba1) cell_pinb_pane_g_ParamLimits

0xf09f,	// (0x00060ba1) cell_pinb_pane_g

0xbd8e,	// (0x0005d890) grid_highlight_pane_cp01

0xc064,	// (0x0005db66) list_pinb_item_pane_ParamLimits

0xc064,	// (0x0005db66) list_pinb_item_pane

0xb971,	// (0x0005d473) list_highlight_pane_cp02

0xc08e,	// (0x0005db90) list_pinb_item_pane_g1_ParamLimits

0xc08e,	// (0x0005db90) list_pinb_item_pane_g1

0xc080,	// (0x0005db82) list_pinb_item_pane_g2_ParamLimits

0xc080,	// (0x0005db82) list_pinb_item_pane_g2

0xc072,	// (0x0005db74) list_pinb_item_pane_g3_ParamLimits

0xc072,	// (0x0005db74) list_pinb_item_pane_g3

0xc080,	// (0x0005db82) list_pinb_item_pane_g4_ParamLimits

0xc080,	// (0x0005db82) list_pinb_item_pane_g4

0x0003,

0xf0a6,	// (0x00060ba8) list_pinb_item_pane_g_ParamLimits

0xf0a6,	// (0x00060ba8) list_pinb_item_pane_g

0xc09c,	// (0x0005db9e) list_pinb_item_pane_t1_ParamLimits

0xc09c,	// (0x0005db9e) list_pinb_item_pane_t1

0x35c5,	// (0x000550c7) calc_display_pane

0x35e3,	// (0x000550e5) calc_paper_pane

0x35ff,	// (0x00055101) grid_calc_pane

0xb971,	// (0x0005d473) bg_list_pane_cp01

0xc0b0,	// (0x0005dbb2) clock_g1

0xc0b0,	// (0x0005dbb2) clock_g2

0x0001,

0xf0af,	// (0x00060bb1) clock_g

0xc0ba,	// (0x0005dbbc) clock_t1_ParamLimits

0xc0ba,	// (0x0005dbbc) clock_t1

0xc0ce,	// (0x0005dbd0) clock_t2_ParamLimits

0xc0ce,	// (0x0005dbd0) clock_t2

0xc0ce,	// (0x0005dbd0) clock_t3_ParamLimits

0xc0ce,	// (0x0005dbd0) clock_t3

0xc0ce,	// (0x0005dbd0) clock_t4_ParamLimits

0xc0ce,	// (0x0005dbd0) clock_t4

0xc0ba,	// (0x0005dbbc) clock_t5_ParamLimits

0xc0ba,	// (0x0005dbbc) clock_t5

0xc0ce,	// (0x0005dbd0) clock_t6_ParamLimits

0xc0ce,	// (0x0005dbd0) clock_t6

0xc0ce,	// (0x0005dbd0) clock_t7_ParamLimits

0xc0ce,	// (0x0005dbd0) clock_t7

0xc0ce,	// (0x0005dbd0) clock_t8_ParamLimits

0xc0ce,	// (0x0005dbd0) clock_t8

0xc0ce,	// (0x0005dbd0) clock_t9_ParamLimits

0xc0ce,	// (0x0005dbd0) clock_t9

0x0008,

0xf0b4,	// (0x00060bb6) clock_t_ParamLimits

0xf0b4,	// (0x00060bb6) clock_t

0xb971,	// (0x0005d473) popup_clock_analogue_window_cp02

0xb971,	// (0x0005d473) popup_clock_digital_window_cp01

0xbd8e,	// (0x0005d890) listscroll_help_pane

0xbd8e,	// (0x0005d890) phob_pre_status_pane

0xc0e2,	// (0x0005dbe4) grid_qdial_pane

0xbfe9,	// (0x0005daeb) listscroll_mce_pane

0xbfe9,	// (0x0005daeb) bg_notes_pane

0xc0ec,	// (0x0005dbee) list_notes_pane

0x362b,	// (0x0005512d) scroll_pane_cp06

0xc0fa,	// (0x0005dbfc) bg_calc_paper_pane

0x363a,	// (0x0005513c) list_calc_pane

0xc10e,	// (0x0005dc10) bg_calc_display_pane

0x3654,	// (0x00055156) calc_display_pane_t1

0x3669,	// (0x0005516b) calc_display_pane_t2

0x367e,	// (0x00055180) calc_display_pane_t3

0x0002,

0xf0c7,	// (0x00060bc9) calc_display_pane_t

0x3690,	// (0x00055192) cell_calc_pane_ParamLimits

0x3690,	// (0x00055192) cell_calc_pane

0xc11a,	// (0x0005dc1c) bg_calc_paper_pane_g1

0xc126,	// (0x0005dc28) bg_calc_paper_pane_g2

0xc132,	// (0x0005dc34) bg_calc_paper_pane_g3

0xc13e,	// (0x0005dc40) bg_calc_paper_pane_g4

0xc14a,	// (0x0005dc4c) bg_calc_paper_pane_g5

0x36bd,	// (0x000551bf) bg_calc_paper_pane_g6

0x36ce,	// (0x000551d0) bg_calc_paper_pane_g7

0x36df,	// (0x000551e1) bg_calc_paper_pane_g8

0x0007,

0xf0ce,	// (0x00060bd0) bg_calc_paper_pane_g

0x36f0,	// (0x000551f2) calc_bg_paper_pane_g9

0x3701,	// (0x00055203) list_calc_item_pane_ParamLimits

0x3701,	// (0x00055203) list_calc_item_pane

0xc156,	// (0x0005dc58) list_calc_item_pane_g1

0x372e,	// (0x00055230) list_calc_item_pane_t1_ParamLimits

0x372e,	// (0x00055230) list_calc_item_pane_t1

0x3740,	// (0x00055242) list_calc_item_pane_t2_ParamLimits

0x3740,	// (0x00055242) list_calc_item_pane_t2

0x0001,

0xf0df,	// (0x00060be1) list_calc_item_pane_t_ParamLimits

0xf0df,	// (0x00060be1) list_calc_item_pane_t

0xc001,	// (0x0005db03) cell_calc_pane_g1

0xc163,	// (0x0005dc65) grid_highlight_pane_cp02

0x3770,	// (0x00055272) bg_calc_display_pane_g1

0x3779,	// (0x0005527b) bg_calc_display_pane_g2

0x3783,	// (0x00055285) bg_calc_display_pane_g3

0x0002,

0xf0e9,	// (0x00060beb) bg_calc_display_pane_g

0x378c,	// (0x0005528e) cell_qdial_pane_ParamLimits

0x378c,	// (0x0005528e) cell_qdial_pane

0x37a0,	// (0x000552a2) cell_qdial_pane_g1_ParamLimits

0x37a0,	// (0x000552a2) cell_qdial_pane_g1

0x37ad,	// (0x000552af) cell_qdial_pane_g2_ParamLimits

0x37ad,	// (0x000552af) cell_qdial_pane_g2

0xc185,	// (0x0005dc87) cell_qdial_pane_g3_ParamLimits

0xc185,	// (0x0005dc87) cell_qdial_pane_g3

0x0003,

0xf0f0,	// (0x00060bf2) cell_qdial_pane_g_ParamLimits

0xf0f0,	// (0x00060bf2) cell_qdial_pane_g

0x37ca,	// (0x000552cc) cell_qdial_pane_t1_ParamLimits

0x37ca,	// (0x000552cc) cell_qdial_pane_t1

0x37e2,	// (0x000552e4) cell_qdial_pane_t2_ParamLimits

0x37e2,	// (0x000552e4) cell_qdial_pane_t2

0x37f5,	// (0x000552f7) cell_qdial_pane_t3_ParamLimits

0x37f5,	// (0x000552f7) cell_qdial_pane_t3

0x0002,

0xf0f9,	// (0x00060bfb) cell_qdial_pane_t_ParamLimits

0xf0f9,	// (0x00060bfb) cell_qdial_pane_t

0xbd8e,	// (0x0005d890) grid_highlight_pane_cp04

0xc191,	// (0x0005dc93) thumbnail_qdial_pane_ParamLimits

0xc191,	// (0x0005dc93) thumbnail_qdial_pane

0xc1ed,	// (0x0005dcef) list_help_pane

0xc1f6,	// (0x0005dcf8) scroll_pane_cp02

0x3808,	// (0x0005530a) help_list_pane_t1_ParamLimits

0x3808,	// (0x0005530a) help_list_pane_t1

0x3842,	// (0x00055344) bg_notes_pane_g2

0x384a,	// (0x0005534c) bg_notes_pane_g3

0x3852,	// (0x00055354) notes_bg_pane_g1

0x385a,	// (0x0005535c) notes_bg_pane_g4

0x3862,	// (0x00055364) notes_bg_pane_g5

0x386a,	// (0x0005536c) notes_bg_pane_g6

0x3872,	// (0x00055374) notes_bg_pane_g7

0x387a,	// (0x0005537c) notes_bg_pane_g8

0x3882,	// (0x00055384) notes_bg_pane_g9

0x0006,

0xf117,	// (0x00060c19) notes_bg_pane_g

0x388a,	// (0x0005538c) list_notes_text_pane_ParamLimits

0x388a,	// (0x0005538c) list_notes_text_pane

0xc1ff,	// (0x0005dd01) list_notes_text_pane_g1

0x38b6,	// (0x000553b8) list_notes_text_pane_t1

0x38c4,	// (0x000553c6) listscroll_cale_week_pane

0x38e9,	// (0x000553eb) bg_cale_heading_pane

0xc222,	// (0x0005dd24) bg_cale_pane_cp01

0x390b,	// (0x0005540d) cale_week_corner_pane

0x3925,	// (0x00055427) cale_week_day_heading_pane

0x3947,	// (0x00055449) cale_week_scroll_pane_g1

0x3964,	// (0x00055466) cale_week_scroll_pane_g2

0x3977,	// (0x00055479) cale_week_scroll_pane_g3

0x398a,	// (0x0005548c) cale_week_scroll_pane_g4

0x399d,	// (0x0005549f) cale_week_scroll_pane_g5

0x39b0,	// (0x000554b2) cale_week_scroll_pane_g6

0x39c3,	// (0x000554c5) cale_week_scroll_pane_g7

0x39d8,	// (0x000554da) cale_week_scroll_pane_g8

0x39ed,	// (0x000554ef) cale_week_scroll_pane_g9

0x3a00,	// (0x00055502) cale_week_scroll_pane_g10

0x3a13,	// (0x00055515) cale_week_scroll_pane_g11

0x3a26,	// (0x00055528) cale_week_scroll_pane_g12

0x3a3d,	// (0x0005553f) cale_week_scroll_pane_g13

0x3a58,	// (0x0005555a) cale_week_scroll_pane_g14

0x3a73,	// (0x00055575) cale_week_scroll_pane_g15

0x000f,

0xf126,	// (0x00060c28) cale_week_scroll_pane_g

0x3aa3,	// (0x000555a5) cale_week_time_pane

0x3ab8,	// (0x000555ba) grid_cale_week_pane

0xc251,	// (0x0005dd53) scroll_pane_cp08

0x3ad7,	// (0x000555d9) cell_cale_week_pane_ParamLimits

0x3ad7,	// (0x000555d9) cell_cale_week_pane

0x3b39,	// (0x0005563b) cale_week_day_heading_pane_t1

0x3b54,	// (0x00055656) cale_week_day_heading_pane_t2

0x3b6f,	// (0x00055671) cale_week_day_heading_pane_t3

0x3b8a,	// (0x0005568c) cale_week_day_heading_pane_t4

0x3ba5,	// (0x000556a7) cale_week_day_heading_pane_t5

0x3bc0,	// (0x000556c2) cale_week_day_heading_pane_t6

0x3bdb,	// (0x000556dd) cale_week_day_heading_pane_t7

0x0006,

0xf147,	// (0x00060c49) cale_week_day_heading_pane_t

0xc26e,	// (0x0005dd70) bg_cale_side_pane

0x3bf6,	// (0x000556f8) cale_week_time_pane_t1

0x3c10,	// (0x00055712) cale_week_time_pane_t2

0x3c2a,	// (0x0005572c) cale_week_time_pane_t3

0x3c44,	// (0x00055746) cale_week_time_pane_t4

0x3c5e,	// (0x00055760) cale_week_time_pane_t5

0x3c78,	// (0x0005577a) cale_week_time_pane_t6

0x3c98,	// (0x0005579a) cale_week_time_pane_t7

0x3cba,	// (0x000557bc) cale_week_time_pane_t8

0x0007,

0xf156,	// (0x00060c58) cale_week_time_pane_t

0x3cde,	// (0x000557e0) cell_cale_week_pane_g2

0x3d02,	// (0x00055804) cell_cale_week_pane_g3_ParamLimits

0x3d02,	// (0x00055804) cell_cale_week_pane_g3

0xc27c,	// (0x0005dd7e) grid_highlight_pane_cp07

0xc284,	// (0x0005dd86) listscroll_gms_pane

0xc28e,	// (0x0005dd90) grid_gms_pane

0xc297,	// (0x0005dd99) listscroll_gms_pane_g1

0xc29f,	// (0x0005dda1) listscroll_gms_pane_g2

0x0001,

0xf167,	// (0x00060c69) listscroll_gms_pane_g

0x3d1a,	// (0x0005581c) scroll_pane_cp010

0x3d25,	// (0x00055827) cell_gms_pane_ParamLimits

0x3d25,	// (0x00055827) cell_gms_pane

0x3d35,	// (0x00055837) cell_gms_pane_g1

0xc2a7,	// (0x0005dda9) cell_gms_pane_g2

0xc1ff,	// (0x0005dd01) cell_gms_pane_g3

0xc2af,	// (0x0005ddb1) cell_gms_pane_g4

0x0003,

0xf16c,	// (0x00060c6e) cell_gms_pane_g

0xc2b8,	// (0x0005ddba) grid_highlight_pane_cp09

0x5d90,	// (0x00057892) phob_pre_status_pane_g1

0x5d98,	// (0x0005789a) phob_pre_status_pane_g2

0x5da0,	// (0x000578a2) phob_pre_status_pane_g3

0x5da8,	// (0x000578aa) phob_pre_status_pane_g4

0x0004,

0xf538,	// (0x0006103a) phob_pre_status_pane_g

0x5db8,	// (0x000578ba) phob_pre_status_pane_t1

0x5dc8,	// (0x000578ca) phob_pre_status_pane_t2

0x5dd8,	// (0x000578da) phob_pre_status_pane_t3

0x0002,

0xf543,	// (0x00061045) phob_pre_status_pane_t

0xc2c0,	// (0x0005ddc2) bg_list_pane_cp05

0x3d45,	// (0x00055847) grid_vorec_pane

0x3d4f,	// (0x00055851) vorec_t1

0x3d5d,	// (0x0005585f) vorec_t2

0x3d6b,	// (0x0005586d) vorec_t3

0x3d79,	// (0x0005587b) vorec_t4

0xac40,	// (0x0005c742) vorec_t5

0xac4e,	// (0x0005c750) vorec_t6

0x0004,

0xf175,	// (0x00060c77) vorec_t

0xac5c,	// (0x0005c75e) wait_bar_pane_cp01

0x3d95,	// (0x00055897) cell_vorec_pane_ParamLimits

0x3d95,	// (0x00055897) cell_vorec_pane

0x3da8,	// (0x000558aa) cell_vorec_pane_g1

0xbd8e,	// (0x0005d890) grid_highlight_pane_cp05

0xc064,	// (0x0005db66) cams_zoom_pane

0xc064,	// (0x0005db66) image_vga_pane

0xc080,	// (0x0005db82) main_camera_pane_g1

0xc080,	// (0x0005db82) main_camera_pane_g2

0xc080,	// (0x0005db82) main_camera_pane_g3

0xc080,	// (0x0005db82) main_camera_pane_g4

0xc080,	// (0x0005db82) main_camera_pane_g5

0xc080,	// (0x0005db82) main_camera_pane_g6

0xc080,	// (0x0005db82) main_camera_pane_g7

0x0007,

0xf180,	// (0x00060c82) main_camera_pane_g

0xc0ce,	// (0x0005dbd0) main_camera_pane_t1

0xc0ce,	// (0x0005dbd0) main_camera_pane_t2

0x0001,

0xf191,	// (0x00060c93) main_camera_pane_t

0x3db2,	// (0x000558b4) cams_zoom_pane_cp_ParamLimits

0x3db2,	// (0x000558b4) cams_zoom_pane_cp

0x3de0,	// (0x000558e2) image_cif_pane_ParamLimits

0x3de0,	// (0x000558e2) image_cif_pane

0xb971,	// (0x0005d473) image_subqcif_pane

0x3dee,	// (0x000558f0) main_video_pane_g1_ParamLimits

0x3dee,	// (0x000558f0) main_video_pane_g1

0x3e16,	// (0x00055918) main_video_pane_g2_ParamLimits

0x3e16,	// (0x00055918) main_video_pane_g2

0x3e49,	// (0x0005594b) main_video_pane_g3_ParamLimits

0x3e49,	// (0x0005594b) main_video_pane_g3

0x3e49,	// (0x0005594b) main_video_pane_g4_ParamLimits

0x3e49,	// (0x0005594b) main_video_pane_g4

0x3e77,	// (0x00055979) main_video_pane_g5_ParamLimits

0x3e77,	// (0x00055979) main_video_pane_g5

0xc2c8,	// (0x0005ddca) main_video_pane_g6_ParamLimits

0xc2c8,	// (0x0005ddca) main_video_pane_g6

0x0006,

0xf196,	// (0x00060c98) main_video_pane_g_ParamLimits

0xf196,	// (0x00060c98) main_video_pane_g

0x3e93,	// (0x00055995) main_video_pane_t1_ParamLimits

0x3e93,	// (0x00055995) main_video_pane_t1

0xc0b0,	// (0x0005dbb2) cams_zoom_pane_g1

0xc0b0,	// (0x0005dbb2) cams_zoom_pane_g2

0xc0b0,	// (0x0005dbb2) cams_zoom_pane_g3

0xc0b0,	// (0x0005dbb2) cams_zoom_pane_g4

0x0003,

0xf1a5,	// (0x00060ca7) cams_zoom_pane_g

0xc064,	// (0x0005db66) grid_cams_pane

0xc064,	// (0x0005db66) linegrid_cams_pane

0x3ecd,	// (0x000559cf) cell_cams_pane_ParamLimits

0x3ecd,	// (0x000559cf) cell_cams_pane

0xb971,	// (0x0005d473) cams_burst_image_pane

0xc0b0,	// (0x0005dbb2) cell_cams_pane_g1

0xb971,	// (0x0005d473) grid_highlight_pane_cp03

0xc001,	// (0x0005db03) mp_bg_pane_g1

0xb971,	// (0x0005d473) bg_list_pane_cp03

0xb971,	// (0x0005d473) bg_mp_pane

0xb971,	// (0x0005d473) grid_mp_pane

0xc0b0,	// (0x0005dbb2) media_player_g1

0xc7ef,	// (0x0005e2f1) media_player_t1

0xc7ef,	// (0x0005e2f1) media_player_t2

0xc7ef,	// (0x0005e2f1) media_player_t3

0xc7ef,	// (0x0005e2f1) media_player_t4

0xc7ef,	// (0x0005e2f1) media_player_t5

0xc7ef,	// (0x0005e2f1) media_player_t6

0xc7ef,	// (0x0005e2f1) media_player_t7

0x0006,

0xf522,	// (0x00061024) media_player_t

0xb971,	// (0x0005d473) wait_bar_pane_cp02

0xf507,	// (0x00061009) main_usb_pane_t

0xce94,	// (0x0005e996) cell_mp_pane

0xc001,	// (0x0005db03) cell_mp_pane_g1

0xbd8e,	// (0x0005d890) grid_highlight_pane_cp06

0xc2e2,	// (0x0005dde4) grid_skin_colour_pane

0xc2ea,	// (0x0005ddec) list_highlight_pane_cp03

0x3ee2,	// (0x000559e4) skin_g1

0xc2f2,	// (0x0005ddf4) skin_t1

0xc301,	// (0x0005de03) skin_t2

0x0001,

0xf1d3,	// (0x00060cd5) skin_t

0x3eec,	// (0x000559ee) cell_skin_colour_pane_ParamLimits

0x3eec,	// (0x000559ee) cell_skin_colour_pane

0xc30f,	// (0x0005de11) cell_skin_colour_pane_g1

0x3f70,	// (0x00055a72) call_video_g1_ParamLimits

0x3f70,	// (0x00055a72) call_video_g1

0x3f80,	// (0x00055a82) call_video_g2_ParamLimits

0x3f80,	// (0x00055a82) call_video_g2

0x0001,

0xf1d8,	// (0x00060cda) call_video_g_ParamLimits

0xf1d8,	// (0x00060cda) call_video_g

0x3fda,	// (0x00055adc) call_video_uplink_pane_cp1_ParamLimits

0x3fda,	// (0x00055adc) call_video_uplink_pane_cp1

0xc321,	// (0x0005de23) call_video_uplink_pane_cp2

0x40a6,	// (0x00055ba8) video_down_crop_pane_ParamLimits

0x40a6,	// (0x00055ba8) video_down_crop_pane

0x4198,	// (0x00055c9a) video_down_pane_ParamLimits

0x4198,	// (0x00055c9a) video_down_pane

0xc329,	// (0x0005de2b) video_down_subqcif_pane_ParamLimits

0xc329,	// (0x0005de2b) video_down_subqcif_pane

0xc341,	// (0x0005de43) video_down_subqcif_pane_cp_ParamLimits

0xc341,	// (0x0005de43) video_down_subqcif_pane_cp

0xc367,	// (0x0005de69) im_reading_pane_ParamLimits

0xc367,	// (0x0005de69) im_reading_pane

0x42b8,	// (0x00055dba) im_writing_pane_ParamLimits

0x42b8,	// (0x00055dba) im_writing_pane

0x42d6,	// (0x00055dd8) im_reading_pane_t1

0xc381,	// (0x0005de83) list_im_pane

0xc392,	// (0x0005de94) scroll_pane_cp07

0x432e,	// (0x00055e30) im_writing_pane_t1_ParamLimits

0x432e,	// (0x00055e30) im_writing_pane_t1

0xc3ab,	// (0x0005dead) im_writing_pane_t2_ParamLimits

0xc3ab,	// (0x0005dead) im_writing_pane_t2

0x0001,

0xf1e2,	// (0x00060ce4) im_writing_pane_t_ParamLimits

0xf1e2,	// (0x00060ce4) im_writing_pane_t

0xbd8e,	// (0x0005d890) input_focus_pane_cp04

0xbd8e,	// (0x0005d890) input_focus_pane_cp05

0x4340,	// (0x00055e42) list_im_single_pane_ParamLimits

0x4340,	// (0x00055e42) list_im_single_pane

0x4367,	// (0x00055e69) list_single_im_pane_t1

0xc2c0,	// (0x0005ddc2) blid_accuracy_pane

0xc2c0,	// (0x0005ddc2) blid_compass_pane

0xe43c,	// (0x0005ff3e) main_location_t1

0xe43c,	// (0x0005ff3e) main_location_t2

0xe43c,	// (0x0005ff3e) main_location_t3

0x0002,

0xf531,	// (0x00061033) main_location_t

0xbd8e,	// (0x0005d890) aid_levels_location

0xc001,	// (0x0005db03) blid_accuracy_pane_g1

0xc001,	// (0x0005db03) blid_accuracy_pane_g2

0x0001,

0xf236,	// (0x00060d38) blid_accuracy_pane_g

0xc3f3,	// (0x0005def5) wml_content_pane

0xc431,	// (0x0005df33) wml_button_pane_ParamLimits

0xc431,	// (0x0005df33) wml_button_pane

0x4376,	// (0x00055e78) wml_list_single_large_pane_ParamLimits

0x4376,	// (0x00055e78) wml_list_single_large_pane

0x43a1,	// (0x00055ea3) wml_list_single_medium_pane_ParamLimits

0x43a1,	// (0x00055ea3) wml_list_single_medium_pane

0x43d3,	// (0x00055ed5) wml_list_single_small_pane_ParamLimits

0x43d3,	// (0x00055ed5) wml_list_single_small_pane

0xc445,	// (0x0005df47) wml_selection_box_pane_ParamLimits

0xc445,	// (0x0005df47) wml_selection_box_pane

0xc458,	// (0x0005df5a) wml_list_single_pane_t1

0xc467,	// (0x0005df69) wml_list_single_medium_pane_t1

0xc476,	// (0x0005df78) wml_list_single_large_pane_t1

0xc485,	// (0x0005df87) input_focus_pane_cp02_ParamLimits

0xc485,	// (0x0005df87) input_focus_pane_cp02

0xc498,	// (0x0005df9a) wml_selection_box_pane_g1

0xc4a1,	// (0x0005dfa3) wml_selection_box_pane_t1_ParamLimits

0xc4a1,	// (0x0005dfa3) wml_selection_box_pane_t1

0xbfe9,	// (0x0005daeb) bg_wml_button_pane_ParamLimits

0xbfe9,	// (0x0005daeb) bg_wml_button_pane

0xc4b9,	// (0x0005dfbb) wml_button_pane_g1

0xc4c1,	// (0x0005dfc3) wml_button_pane_t1

0xc4b9,	// (0x0005dfbb) wml_button_bg_pane_g1

0xc4d1,	// (0x0005dfd3) wml_button_bg_pane_g2

0xc4d9,	// (0x0005dfdb) wml_button_bg_pane_g3

0xc4e1,	// (0x0005dfe3) wml_button_bg_pane_g4

0xc4e9,	// (0x0005dfeb) wml_button_bg_pane_g5

0xc4f1,	// (0x0005dff3) wml_button_bg_pane_g6

0xc4f9,	// (0x0005dffb) wml_button_bg_pane_g7

0xc501,	// (0x0005e003) wml_button_bg_pane_g8

0xc509,	// (0x0005e00b) wml_button_bg_pane_g9

0x0008,

0xf1e7,	// (0x00060ce9) wml_button_bg_pane_g

0x4410,	// (0x00055f12) bg_list_pane_cp02

0xc511,	// (0x0005e013) mce_header_pane_ParamLimits

0xc511,	// (0x0005e013) mce_header_pane

0xc527,	// (0x0005e029) mce_icon_pane

0xc527,	// (0x0005e029) mce_image_pane

0xc530,	// (0x0005e032) mce_text_pane_ParamLimits

0xc530,	// (0x0005e032) mce_text_pane

0x441a,	// (0x00055f1c) scroll_pane_cp03

0xc429,	// (0x0005df2b) scroll_pane_cp04

0xc543,	// (0x0005e045) scroll_pane_cp05_ParamLimits

0xc543,	// (0x0005e045) scroll_pane_cp05

0x4424,	// (0x00055f26) mce_header_field_pane_ParamLimits

0x4424,	// (0x00055f26) mce_header_field_pane

0x4444,	// (0x00055f46) mce_header_field_pane_2_ParamLimits

0x4444,	// (0x00055f46) mce_header_field_pane_2

0x445a,	// (0x00055f5c) mce_header_field_pane_3

0x4462,	// (0x00055f64) list_single_mce_message_pane_ParamLimits

0x4462,	// (0x00055f64) list_single_mce_message_pane

0x4490,	// (0x00055f92) list_single_mce_smart_pane_ParamLimits

0x4490,	// (0x00055f92) list_single_mce_smart_pane

0xc54f,	// (0x0005e051) input_focus_pane_cp03

0xc558,	// (0x0005e05a) list_header_data_pane

0x44c9,	// (0x00055fcb) mce_header_field_pane_t1

0x44d7,	// (0x00055fd9) list_single_mce_header_pane_ParamLimits

0x44d7,	// (0x00055fd9) list_single_mce_header_pane

0xc560,	// (0x0005e062) list_single_mce_header_pane_t1

0xc56f,	// (0x0005e071) list_single_mce_message_pane_g1

0xc577,	// (0x0005e079) list_single_mce_message_pane_t1

0x452d,	// (0x0005602f) bg_cale_heading_pane_cp01_ParamLimits

0x452d,	// (0x0005602f) bg_cale_heading_pane_cp01

0xc585,	// (0x0005e087) bg_cale_pane_cp02_ParamLimits

0xc585,	// (0x0005e087) bg_cale_pane_cp02

0x457b,	// (0x0005607d) cale_month_corner_pane

0x459a,	// (0x0005609c) cale_month_day_heading_pane_ParamLimits

0x459a,	// (0x0005609c) cale_month_day_heading_pane

0x4600,	// (0x00056102) cale_month_pane_g1_ParamLimits

0x4600,	// (0x00056102) cale_month_pane_g1

0x4643,	// (0x00056145) cale_month_pane_g2_ParamLimits

0x4643,	// (0x00056145) cale_month_pane_g2

0x467d,	// (0x0005617f) cale_month_pane_g3_ParamLimits

0x467d,	// (0x0005617f) cale_month_pane_g3

0x46cd,	// (0x000561cf) cale_month_pane_g4_ParamLimits

0x46cd,	// (0x000561cf) cale_month_pane_g4

0x471d,	// (0x0005621f) cale_month_pane_g5_ParamLimits

0x471d,	// (0x0005621f) cale_month_pane_g5

0x476d,	// (0x0005626f) cale_month_pane_g6_ParamLimits

0x476d,	// (0x0005626f) cale_month_pane_g6

0x47bd,	// (0x000562bf) cale_month_pane_g7_ParamLimits

0x47bd,	// (0x000562bf) cale_month_pane_g7

0x4825,	// (0x00056327) cale_month_pane_g8_ParamLimits

0x4825,	// (0x00056327) cale_month_pane_g8

0x488d,	// (0x0005638f) cale_month_pane_g9_ParamLimits

0x488d,	// (0x0005638f) cale_month_pane_g9

0x48eb,	// (0x000563ed) cale_month_pane_g10_ParamLimits

0x48eb,	// (0x000563ed) cale_month_pane_g10

0x4949,	// (0x0005644b) cale_month_pane_g11_ParamLimits

0x4949,	// (0x0005644b) cale_month_pane_g11

0x499d,	// (0x0005649f) cale_month_pane_g12_ParamLimits

0x499d,	// (0x0005649f) cale_month_pane_g12

0x49f3,	// (0x000564f5) cale_month_pane_g13_ParamLimits

0x49f3,	// (0x000564f5) cale_month_pane_g13

0x000c,

0xf1fa,	// (0x00060cfc) cale_month_pane_g_ParamLimits

0xf1fa,	// (0x00060cfc) cale_month_pane_g

0x4a49,	// (0x0005654b) cale_month_week_pane

0x4a6d,	// (0x0005656f) grid_cale_month_pane_ParamLimits

0x4a6d,	// (0x0005656f) grid_cale_month_pane

0x4aca,	// (0x000565cc) cale_month_day_heading_pane_t1

0x4b50,	// (0x00056652) cale_month_day_heading_pane_t2

0x4bc9,	// (0x000566cb) cale_month_day_heading_pane_t3

0x4c42,	// (0x00056744) cale_month_day_heading_pane_t4

0x4cbb,	// (0x000567bd) cale_month_day_heading_pane_t5

0x4d34,	// (0x00056836) cale_month_day_heading_pane_t6

0x4dad,	// (0x000568af) cale_month_day_heading_pane_t7

0x0006,

0xf215,	// (0x00060d17) cale_month_day_heading_pane_t

0xc26e,	// (0x0005dd70) bg_cale_side_pane_cp01

0x4e3e,	// (0x00056940) cale_month_week_pane_t1

0x4e57,	// (0x00056959) cale_month_week_pane_t2

0x4e70,	// (0x00056972) cale_month_week_pane_t3

0x4e89,	// (0x0005698b) cale_month_week_pane_t4

0x4ea4,	// (0x000569a6) cale_month_week_pane_t5

0x4ec5,	// (0x000569c7) cale_month_week_pane_t6

0x0005,

0xf224,	// (0x00060d26) cale_month_week_pane_t

0x4ee6,	// (0x000569e8) cell_cale_month_pane_ParamLimits

0x4ee6,	// (0x000569e8) cell_cale_month_pane

0x500c,	// (0x00056b0e) cell_cale_month_pane_g1

0x5018,	// (0x00056b1a) cell_cale_month_pane_t1_ParamLimits

0x5018,	// (0x00056b1a) cell_cale_month_pane_t1

0xc27c,	// (0x0005dd7e) grid_highlight_pane_cp08

0xc001,	// (0x0005db03) main_smil_g1

0x5044,	// (0x00056b46) smil_status_pane

0xc5c4,	// (0x0005e0c6) smil_text_pane

0xe314,	// (0x0005fe16) bg_popup_call3_rect_pane_g8

0xe31c,	// (0x0005fe1e) bg_popup_call3_rect_pane_g9

0x0008,

0xf4b2,	// (0x00060fb4) bg_popup_call3_rect_pane_g

0xe505,	// (0x00060007) smil_status_volume_pane_g1

0xc5ce,	// (0x0005e0d0) smil_status_pane_t1

0x6139,	// (0x00057c3b) volume_smil_pane

0xc5e5,	// (0x0005e0e7) list_smil_text_pane

0x5057,	// (0x00056b59) scroll_pane_cp011

0x5062,	// (0x00056b64) smil_text_list_pane_t1_ParamLimits

0x5062,	// (0x00056b64) smil_text_list_pane_t1

0x50ef,	// (0x00056bf1) aid_volume_smil_ParamLimits

0x50ef,	// (0x00056bf1) aid_volume_smil

0xc001,	// (0x0005db03) smil_volume_pane_g1

0xc001,	// (0x0005db03) smil_volume_pane_g2

0x0001,

0xf236,	// (0x00060d38) smil_volume_pane_g

0x38c4,	// (0x000553c6) listscroll_cale_day_pane

0xc5ef,	// (0x0005e0f1) bg_cale_pane

0xc607,	// (0x0005e109) list_cale_pane

0xc62a,	// (0x0005e12c) scroll_pane_cp09

0xc63b,	// (0x0005e13d) cale_bg_pane_g1

0xc643,	// (0x0005e145) cale_bg_pane_g2

0xc64b,	// (0x0005e14d) cale_bg_pane_g3

0xc653,	// (0x0005e155) cale_bg_pane_g4

0xc65b,	// (0x0005e15d) cale_bg_pane_g5

0xc663,	// (0x0005e165) cale_bg_pane_g6

0xc66b,	// (0x0005e16d) cale_bg_pane_g7

0xc673,	// (0x0005e175) cale_bg_pane_g8

0xc67b,	// (0x0005e17d) cale_bg_pane_g9

0x0008,

0xf23b,	// (0x00060d3d) cale_bg_pane_g

0x5119,	// (0x00056c1b) list_cale_time_pane_ParamLimits

0x5119,	// (0x00056c1b) list_cale_time_pane

0xc683,	// (0x0005e185) list_cale_time_pane_g1_ParamLimits

0xc683,	// (0x0005e185) list_cale_time_pane_g1

0xc68f,	// (0x0005e191) list_cale_time_pane_g2_ParamLimits

0xc68f,	// (0x0005e191) list_cale_time_pane_g2

0x5141,	// (0x00056c43) list_cale_time_pane_g3_ParamLimits

0x5141,	// (0x00056c43) list_cale_time_pane_g3

0x514f,	// (0x00056c51) list_cale_time_pane_g4_ParamLimits

0x514f,	// (0x00056c51) list_cale_time_pane_g4

0x515d,	// (0x00056c5f) list_cale_time_pane_g5_ParamLimits

0x515d,	// (0x00056c5f) list_cale_time_pane_g5

0x0005,

0xf24e,	// (0x00060d50) list_cale_time_pane_g_ParamLimits

0xf24e,	// (0x00060d50) list_cale_time_pane_g

0xc6a9,	// (0x0005e1ab) list_cale_time_pane_t1_ParamLimits

0xc6a9,	// (0x0005e1ab) list_cale_time_pane_t1

0xc6d1,	// (0x0005e1d3) list_cale_time_pane_t2_ParamLimits

0xc6d1,	// (0x0005e1d3) list_cale_time_pane_t2

0x5431,	// (0x00056f33) aid_blid_cardinal_pane

0x5473,	// (0x00056f75) compass_pane_t4

0xc6f9,	// (0x0005e1fb) list_cale_time_pane_t4_ParamLimits

0xc6f9,	// (0x0005e1fb) list_cale_time_pane_t4

0x5481,	// (0x00056f83) compass_pane_t5

0x5491,	// (0x00056f93) compass_pane_t6

0x549f,	// (0x00056fa1) compass_pane_t7

0xcfae,	// (0x0005eab0) navi_pane_cc_t1

0xd18b,	// (0x0005ec8d) aid_phob_thumbnail_center_pane

0x58d6,	// (0x000573d8) main_postcard_pane_g4_ParamLimits

0x0002,

0xf25b,	// (0x00060d5d) list_cale_time_pane_t_ParamLimits

0xf25b,	// (0x00060d5d) list_cale_time_pane_t

0xb9e5,	// (0x0005d4e7) bg_popup_window_pane_cp02_ParamLimits

0xb9e5,	// (0x0005d4e7) bg_popup_window_pane_cp02

0xc721,	// (0x0005e223) heading_pane_cp01_ParamLimits

0xc721,	// (0x0005e223) heading_pane_cp01

0xc72d,	// (0x0005e22f) loc_req_pane_ParamLimits

0xc72d,	// (0x0005e22f) loc_req_pane

0xc73d,	// (0x0005e23f) loc_type_pane_ParamLimits

0xc73d,	// (0x0005e23f) loc_type_pane

0xc74f,	// (0x0005e251) loc_type_pane_t1_ParamLimits

0xc74f,	// (0x0005e251) loc_type_pane_t1

0xc761,	// (0x0005e263) loc_type_pane_t2_ParamLimits

0xc761,	// (0x0005e263) loc_type_pane_t2

0xc773,	// (0x0005e275) loc_type_pane_t3_ParamLimits

0xc773,	// (0x0005e275) loc_type_pane_t3

0x0002,

0xf262,	// (0x00060d64) loc_type_pane_t_ParamLimits

0xf262,	// (0x00060d64) loc_type_pane_t

0xc785,	// (0x0005e287) list_loc_req_pane

0xc78f,	// (0x0005e291) scroll_pane_cp012

0x516b,	// (0x00056c6d) list_single_loc_request_popup_menu_pane_ParamLimits

0x516b,	// (0x00056c6d) list_single_loc_request_popup_menu_pane

0xc79a,	// (0x0005e29c) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xc79a,	// (0x0005e29c) list_single_loc_request_popup_menu_pane_g1

0xc7a6,	// (0x0005e2a8) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xc7a6,	// (0x0005e2a8) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf269,	// (0x00060d6b) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf269,	// (0x00060d6b) list_single_loc_request_popup_menu_pane_g

0xc7b2,	// (0x0005e2b4) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xc7b2,	// (0x0005e2b4) list_single_loc_request_popup_menu_pane_t1

0x5184,	// (0x00056c86) bg_popup_window_pane_cp03_ParamLimits

0x5184,	// (0x00056c86) bg_popup_window_pane_cp03

0x5192,	// (0x00056c94) heading_loc_req_pane_ParamLimits

0x5192,	// (0x00056c94) heading_loc_req_pane

0x519e,	// (0x00056ca0) popup_dyc_status_message_window_g1_ParamLimits

0x519e,	// (0x00056ca0) popup_dyc_status_message_window_g1

0x51aa,	// (0x00056cac) popup_dyc_status_message_window_t1_ParamLimits

0x51aa,	// (0x00056cac) popup_dyc_status_message_window_t1

0x51bc,	// (0x00056cbe) popup_dyc_status_message_window_t2_ParamLimits

0x51bc,	// (0x00056cbe) popup_dyc_status_message_window_t2

0x51ce,	// (0x00056cd0) popup_dyc_status_message_window_t3_ParamLimits

0x51ce,	// (0x00056cd0) popup_dyc_status_message_window_t3

0x0002,

0xf26e,	// (0x00060d70) popup_dyc_status_message_window_t_ParamLimits

0xf26e,	// (0x00060d70) popup_dyc_status_message_window_t

0xbd8e,	// (0x0005d890) bg_heading_pane_cp01

0xc7c8,	// (0x0005e2ca) heading_loc_req_pane_g1

0xc7d0,	// (0x0005e2d2) heading_loc_req_pane_g2

0xc7d8,	// (0x0005e2da) heading_loc_req_pane_g3

0x0002,

0xf275,	// (0x00060d77) heading_loc_req_pane_g

0xc7e0,	// (0x0005e2e2) heading_loc_req_pane_t1

0xc7ff,	// (0x0005e301) bg_popup_sub_pane_cp01_ParamLimits

0xc7ff,	// (0x0005e301) bg_popup_sub_pane_cp01

0xc80d,	// (0x0005e30f) popup_cale_events_window_g1_ParamLimits

0xc80d,	// (0x0005e30f) popup_cale_events_window_g1

0xc82d,	// (0x0005e32f) popup_cale_events_window_g2_ParamLimits

0xc82d,	// (0x0005e32f) popup_cale_events_window_g2

0x0001,

0xf297,	// (0x00060d99) popup_cale_events_window_g_ParamLimits

0xf297,	// (0x00060d99) popup_cale_events_window_g

0xc84d,	// (0x0005e34f) popup_cale_events_window_t1_ParamLimits

0xc84d,	// (0x0005e34f) popup_cale_events_window_t1

0xc85f,	// (0x0005e361) popup_cale_events_window_t2_ParamLimits

0xc85f,	// (0x0005e361) popup_cale_events_window_t2

0xc89d,	// (0x0005e39f) popup_cale_events_window_t3_ParamLimits

0xc89d,	// (0x0005e39f) popup_cale_events_window_t3

0xcd10,	// (0x0005e812) popup_cale_events_window_t4_ParamLimits

0xcd10,	// (0x0005e812) popup_cale_events_window_t4

0x0003,

0xf29c,	// (0x00060d9e) popup_cale_events_window_t_ParamLimits

0xf29c,	// (0x00060d9e) popup_cale_events_window_t

0x51f8,	// (0x00056cfa) call_type_pane

0xd947,	// (0x0005f449) popup_call_status_window_g1

0x5204,	// (0x00056d06) popup_call_status_window_g2

0x5210,	// (0x00056d12) popup_call_status_window_g3

0x0002,

0xf2a5,	// (0x00060da7) popup_call_status_window_g

0xcd46,	// (0x0005e848) call_type_pane_g1

0xcd4f,	// (0x0005e851) call_type_pane_g2

0x0001,

0xf2ac,	// (0x00060dae) call_type_pane_g

0xbd8e,	// (0x0005d890) bg_popup_sub_pane_cp02

0xcd58,	// (0x0005e85a) listscroll_popup_wml_pane

0xcd60,	// (0x0005e862) list_wml_pane

0xcd6a,	// (0x0005e86c) scroll_pane_cp013

0xcd75,	// (0x0005e877) list_single_graphic_popup_wml_pane_ParamLimits

0xcd75,	// (0x0005e877) list_single_graphic_popup_wml_pane

0xc001,	// (0x0005db03) list_single_graphic_popup_wml_pane_g1

0xcd89,	// (0x0005e88b) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf2b1,	// (0x00060db3) list_single_graphic_popup_wml_pane_g

0xcd91,	// (0x0005e893) list_single_graphic_popup_wml_pane_t1

0xcda7,	// (0x0005e8a9) aid_call_pane

0xbfe1,	// (0x0005dae3) popup_clock_analogue_window_g1

0xbfe1,	// (0x0005dae3) popup_clock_analogue_window_g2

0x521c,	// (0x00056d1e) popup_clock_analogue_window_g3

0x521c,	// (0x00056d1e) popup_clock_analogue_window_g4

0xc001,	// (0x0005db03) popup_clock_analogue_window_g5

0x0004,

0xf2b6,	// (0x00060db8) popup_clock_analogue_window_g

0x5224,	// (0x00056d26) popup_clock_analogue_window_t1

0x5232,	// (0x00056d34) clock_digital_number_pane_ParamLimits

0x5232,	// (0x00056d34) clock_digital_number_pane

0x523e,	// (0x00056d40) clock_digital_number_pane_cp02_ParamLimits

0x523e,	// (0x00056d40) clock_digital_number_pane_cp02

0x524a,	// (0x00056d4c) clock_digital_number_pane_cp03_ParamLimits

0x524a,	// (0x00056d4c) clock_digital_number_pane_cp03

0x5256,	// (0x00056d58) clock_digital_number_pane_cp04_ParamLimits

0x5256,	// (0x00056d58) clock_digital_number_pane_cp04

0x5262,	// (0x00056d64) clock_digital_separator_pane_ParamLimits

0x5262,	// (0x00056d64) clock_digital_separator_pane

0x526e,	// (0x00056d70) popup_clock_digital_window_t1

0xc001,	// (0x0005db03) clock_digital_number_pane_g1

0xc001,	// (0x0005db03) clock_digital_number_pane_g2

0x0001,

0xf236,	// (0x00060d38) clock_digital_number_pane_g

0xc001,	// (0x0005db03) clock_digital_separator_pane_g1

0xc001,	// (0x0005db03) clock_digital_separator_pane_g2

0x0001,

0xf236,	// (0x00060d38) clock_digital_separator_pane_g

0xbd8e,	// (0x0005d890) bg_popup_window_pane_cp04

0xcdaf,	// (0x0005e8b1) heading_pane_cp03

0xc2c0,	// (0x0005ddc2) listscroll_popup_gms_pane

0xbd8e,	// (0x0005d890) grid_large_graphic_popup_pane

0xcdb8,	// (0x0005e8ba) listscroll_popup_gms_pane_g1

0xcdc1,	// (0x0005e8c3) listscroll_popup_gms_pane_g2

0x0001,

0xf2c1,	// (0x00060dc3) listscroll_popup_gms_pane_g

0xcdca,	// (0x0005e8cc) scroll_pane_cp014

0xc064,	// (0x0005db66) cell_large_graphic_popup_pane_ParamLimits

0xc064,	// (0x0005db66) cell_large_graphic_popup_pane

0xc072,	// (0x0005db74) cell_large_graphic_popup_pane_g1_ParamLimits

0xc072,	// (0x0005db74) cell_large_graphic_popup_pane_g1

0xcdd3,	// (0x0005e8d5) cell_large_graphic_popup_pane_g2_ParamLimits

0xcdd3,	// (0x0005e8d5) cell_large_graphic_popup_pane_g2

0xcde1,	// (0x0005e8e3) cell_large_graphic_popup_pane_g3_ParamLimits

0xcde1,	// (0x0005e8e3) cell_large_graphic_popup_pane_g3

0xcdef,	// (0x0005e8f1) cell_large_graphic_popup_pane_g4_ParamLimits

0xcdef,	// (0x0005e8f1) cell_large_graphic_popup_pane_g4

0x0003,

0xf2c6,	// (0x00060dc8) cell_large_graphic_popup_pane_g_ParamLimits

0xf2c6,	// (0x00060dc8) cell_large_graphic_popup_pane_g

0xbd8e,	// (0x0005d890) grid_highlight_pane_cp010

0xc001,	// (0x0005db03) bg_popup_call_pane_g1

0xce00,	// (0x0005e902) list_single_graphic_popup_conf_pane_ParamLimits

0xce00,	// (0x0005e902) list_single_graphic_popup_conf_pane

0xce13,	// (0x0005e915) list_highlight_pane_cp01

0xce1c,	// (0x0005e91e) list_single_graphic_popup_conf_pane_g1

0xce24,	// (0x0005e926) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf2cf,	// (0x00060dd1) list_single_graphic_popup_conf_pane_g

0xce2c,	// (0x0005e92e) list_single_graphic_popup_conf_pane_t1

0xce3a,	// (0x0005e93c) linegrid_cams_pane_g1

0x528b,	// (0x00056d8d) linegrid_cams_pane_g2

0xc1ff,	// (0x0005dd01) linegrid_cams_pane_g3

0xce43,	// (0x0005e945) linegrid_cams_pane_g4

0x5294,	// (0x00056d96) linegrid_cams_pane_g5

0x529d,	// (0x00056d9f) linegrid_cams_pane_g6

0xc2af,	// (0x0005ddb1) linegrid_cams_pane_g7

0x0006,

0xf2d4,	// (0x00060dd6) linegrid_cams_pane_g

0xce4c,	// (0x0005e94e) popup_clock_analogue_window

0xce4c,	// (0x0005e94e) popup_clock_digital_window

0xbd8e,	// (0x0005d890) popup_phob_thumbnail_window

0xc001,	// (0x0005db03) call_video_uplink_pane_g1

0xce55,	// (0x0005e957) call_video_uplink_pane_g2

0x0001,

0xf2e3,	// (0x00060de5) call_video_uplink_pane_g

0xce5d,	// (0x0005e95f) video_uplink_pane

0xce65,	// (0x0005e967) mce_image_pane_g1

0x52a6,	// (0x00056da8) mce_image_pane_g2

0x52ae,	// (0x00056db0) mce_image_pane_g3

0x52b6,	// (0x00056db8) mce_image_pane_g4

0x52be,	// (0x00056dc0) mce_image_pane_g5

0x0004,

0xf2e8,	// (0x00060dea) mce_image_pane_g

0xce6f,	// (0x0005e971) control_top_pane_stacon_cp01_ParamLimits

0xce6f,	// (0x0005e971) control_top_pane_stacon_cp01

0xce83,	// (0x0005e985) uni_indicator_pane_stacon_cp01_ParamLimits

0xce83,	// (0x0005e985) uni_indicator_pane_stacon_cp01

0xce94,	// (0x0005e996) bg_popup_sub_pane_cp03

0x52c6,	// (0x00056dc8) chi_dic_find_pane

0x52ce,	// (0x00056dd0) listscroll_chi_dic_pane

0x52d7,	// (0x00056dd9) main_pane_chidic_g1

0x52ea,	// (0x00056dec) chi_dic_find_pane_t1

0xce9e,	// (0x0005e9a0) find_chidic_pane

0xcea7,	// (0x0005e9a9) chi_dic_list_pane_ParamLimits

0xcea7,	// (0x0005e9a9) chi_dic_list_pane

0xceb8,	// (0x0005e9ba) scroll_pane_cp020

0x52f8,	// (0x00056dfa) find_chidic_pane_t1

0xbd8e,	// (0x0005d890) input_focus_pane_cp06

0x5307,	// (0x00056e09) list_chi_dic_pane_ParamLimits

0x5307,	// (0x00056e09) list_chi_dic_pane

0x5324,	// (0x00056e26) list_chi_dic_pane_t1_ParamLimits

0x5324,	// (0x00056e26) list_chi_dic_pane_t1

0xbd8e,	// (0x0005d890) list_highlight_pane_cp020

0xcec0,	// (0x0005e9c2) bg_cale_heading_pane_g1

0x5337,	// (0x00056e39) bg_cale_heading_pane_g2

0x533f,	// (0x00056e41) bg_cale_heading_pane_g3

0x5347,	// (0x00056e49) bg_cale_heading_pane_g4

0x5351,	// (0x00056e53) bg_cale_heading_pane_g5

0x535b,	// (0x00056e5d) bg_cale_heading_pane_g6

0x5363,	// (0x00056e65) bg_cale_heading_pane_g7

0x536b,	// (0x00056e6d) bg_cale_heading_pane_g8

0x5375,	// (0x00056e77) bg_cale_heading_pane_g9

0x0008,

0xf2f3,	// (0x00060df5) bg_cale_heading_pane_g

0xcec0,	// (0x0005e9c2) bg_cale_side_pane_g1

0x537f,	// (0x00056e81) bg_cale_side_pane_g2

0x5389,	// (0x00056e8b) bg_cale_side_pane_g3

0x5393,	// (0x00056e95) bg_cale_side_pane_g4

0x539d,	// (0x00056e9f) bg_cale_side_pane_g5

0x53a7,	// (0x00056ea9) bg_cale_side_pane_g6

0x53b1,	// (0x00056eb3) bg_cale_side_pane_g7

0x53bb,	// (0x00056ebd) bg_cale_side_pane_g8

0x53c3,	// (0x00056ec5) bg_cale_side_pane_g9

0x0008,

0xf306,	// (0x00060e08) bg_cale_side_pane_g

0x53cb,	// (0x00056ecd) popup_call_status_window_ParamLimits

0x53cb,	// (0x00056ecd) popup_call_status_window

0xcec8,	// (0x0005e9ca) stacon_top_pane

0xced0,	// (0x0005e9d2) status_pane_ParamLimits

0xced0,	// (0x0005e9d2) status_pane

0xcee5,	// (0x0005e9e7) status_small_pane

0xceed,	// (0x0005e9ef) control_pane

0xbd8e,	// (0x0005d890) stacon_bottom_pane

0xcef5,	// (0x0005e9f7) list_single_mce_smart_pane_t1_ParamLimits

0xcef5,	// (0x0005e9f7) list_single_mce_smart_pane_t1

0xcf08,	// (0x0005ea0a) list_single_mce_smart_pane_t2_ParamLimits

0xcf08,	// (0x0005ea0a) list_single_mce_smart_pane_t2

0x0001,

0xf319,	// (0x00060e1b) list_single_mce_smart_pane_t_ParamLimits

0xf319,	// (0x00060e1b) list_single_mce_smart_pane_t

0x53d7,	// (0x00056ed9) compass_pane

0x53e3,	// (0x00056ee5) main_location2_pane_t1

0x53f7,	// (0x00056ef9) main_location2_pane_t2

0x540b,	// (0x00056f0d) main_location2_pane_t3

0x0003,

0xf31e,	// (0x00060e20) main_location2_pane_t

0xcf27,	// (0x0005ea29) compass_pane_g1_ParamLimits

0xcf27,	// (0x0005ea29) compass_pane_g1

0x5455,	// (0x00056f57) compass_pane_t1

0x5464,	// (0x00056f66) compass_pane_t2

0x0005,

0xf327,	// (0x00060e29) compass_pane_t

0x54af,	// (0x00056fb1) text_secondary_cp61

0xcfa5,	// (0x0005eaa7) navi_pane_cams_g5

0xd021,	// (0x0005eb23) navi_pane_im_t1

0xd02f,	// (0x0005eb31) navi_pane_mp_g1_ParamLimits

0xd02f,	// (0x0005eb31) navi_pane_mp_g1

0xd043,	// (0x0005eb45) navi_pane_mp_g2_ParamLimits

0xd043,	// (0x0005eb45) navi_pane_mp_g2

0xd04f,	// (0x0005eb51) navi_pane_mp_g3_ParamLimits

0xd04f,	// (0x0005eb51) navi_pane_mp_g3

0x0002,

0xf33b,	// (0x00060e3d) navi_pane_mp_g_ParamLimits

0xf33b,	// (0x00060e3d) navi_pane_mp_g

0xd05b,	// (0x0005eb5d) navi_pane_mp_t1

0xd069,	// (0x0005eb6b) navi_pane_mp_t2

0x0002,

0xf342,	// (0x00060e44) navi_pane_mp_t

0xd0d4,	// (0x0005ebd6) navi_pane_vt_g1

0xd05b,	// (0x0005eb5d) navi_pane_vt_t1

0xd0dc,	// (0x0005ebde) navi_slider_pane

0xc2c0,	// (0x0005ddc2) zooming_pane

0xd0ec,	// (0x0005ebee) navi_slider_pane_g1

0x54ea,	// (0x00056fec) navi_slider_pane_g2

0x0006,

0xf349,	// (0x00060e4b) navi_slider_pane_g

0xd110,	// (0x0005ec12) aid_levels_zoom

0xd118,	// (0x0005ec1a) zooming_pane_g1

0xd120,	// (0x0005ec22) zooming_pane_g2

0xd120,	// (0x0005ec22) zooming_pane_g3

0x0002,

0xf358,	// (0x00060e5a) zooming_pane_g

0xd128,	// (0x0005ec2a) level_10_zoom

0xd131,	// (0x0005ec33) level_11_zoom

0xd13a,	// (0x0005ec3c) level_1_zoom

0xd143,	// (0x0005ec45) level_2_zoom

0xd14c,	// (0x0005ec4e) level_3_zoom

0xd155,	// (0x0005ec57) level_4_zoom

0xd15e,	// (0x0005ec60) level_5_zoom

0xd167,	// (0x0005ec69) level_6_zoom

0xd170,	// (0x0005ec72) level_7_zoom

0xd179,	// (0x0005ec7b) level_8_zoom

0xd182,	// (0x0005ec84) level_9_zoom

0xd193,	// (0x0005ec95) popup_phob_thumbnail_window_g1

0xd19b,	// (0x0005ec9d) popup_phob_thumbnail_window_g2

0x0001,

0xf35f,	// (0x00060e61) popup_phob_thumbnail_window_g

0x5de8,	// (0x000578ea) level_1_location

0x5df0,	// (0x000578f2) level_2_location

0x5df8,	// (0x000578fa) level_3_location

0x5e02,	// (0x00057904) level_4_location

0xc2c0,	// (0x0005ddc2) level_5_location

0x54fc,	// (0x00056ffe) mce_icon_pane_g1

0x5504,	// (0x00057006) mce_icon_pane_g2

0x0001,

0xf364,	// (0x00060e66) mce_icon_pane_g

0x550c,	// (0x0005700e) main_mup_pane_g1_ParamLimits

0x550c,	// (0x0005700e) main_mup_pane_g1

0xc08e,	// (0x0005db90) main_mup_pane_g2_ParamLimits

0xc08e,	// (0x0005db90) main_mup_pane_g2

0xc08e,	// (0x0005db90) main_mup_pane_g3_ParamLimits

0xc08e,	// (0x0005db90) main_mup_pane_g3

0xc08e,	// (0x0005db90) main_mup_pane_g4_ParamLimits

0xc08e,	// (0x0005db90) main_mup_pane_g4

0xc08e,	// (0x0005db90) main_mup_pane_g5_ParamLimits

0xc08e,	// (0x0005db90) main_mup_pane_g5

0xc08e,	// (0x0005db90) main_mup_pane_g6_ParamLimits

0xc08e,	// (0x0005db90) main_mup_pane_g6

0xc08e,	// (0x0005db90) main_mup_pane_g7_ParamLimits

0xc08e,	// (0x0005db90) main_mup_pane_g7

0xc08e,	// (0x0005db90) main_mup_pane_g8_ParamLimits

0xc08e,	// (0x0005db90) main_mup_pane_g8

0xc08e,	// (0x0005db90) main_mup_pane_g9_ParamLimits

0xc08e,	// (0x0005db90) main_mup_pane_g9

0xc08e,	// (0x0005db90) main_mup_pane_g10_ParamLimits

0xc08e,	// (0x0005db90) main_mup_pane_g10

0xc08e,	// (0x0005db90) main_mup_pane_g11_ParamLimits

0xc08e,	// (0x0005db90) main_mup_pane_g11

0xc080,	// (0x0005db82) main_mup_pane_g12_ParamLimits

0xc080,	// (0x0005db82) main_mup_pane_g12

0xc08e,	// (0x0005db90) main_mup_pane_g13_ParamLimits

0xc08e,	// (0x0005db90) main_mup_pane_g13

0x000c,

0xf369,	// (0x00060e6b) main_mup_pane_g_ParamLimits

0xf369,	// (0x00060e6b) main_mup_pane_g

0xc09c,	// (0x0005db9e) main_mup_pane_t1_ParamLimits

0xc09c,	// (0x0005db9e) main_mup_pane_t1

0xc09c,	// (0x0005db9e) main_mup_pane_t2_ParamLimits

0xc09c,	// (0x0005db9e) main_mup_pane_t2

0xc09c,	// (0x0005db9e) main_mup_pane_t3_ParamLimits

0xc09c,	// (0x0005db9e) main_mup_pane_t3

0xc0ce,	// (0x0005dbd0) main_mup_pane_t4_ParamLimits

0xc0ce,	// (0x0005dbd0) main_mup_pane_t4

0xc0ce,	// (0x0005dbd0) main_mup_pane_t5_ParamLimits

0xc0ce,	// (0x0005dbd0) main_mup_pane_t5

0xc0ba,	// (0x0005dbbc) main_mup_pane_t6_ParamLimits

0xc0ba,	// (0x0005dbbc) main_mup_pane_t6

0x0005,

0xf384,	// (0x00060e86) main_mup_pane_t_ParamLimits

0xf384,	// (0x00060e86) main_mup_pane_t

0xc00b,	// (0x0005db0d) mup_progress_pane_ParamLimits

0xc00b,	// (0x0005db0d) mup_progress_pane

0xe52b,	// (0x0006002d) mup_visualizer_pane_ParamLimits

0xe52b,	// (0x0006002d) mup_visualizer_pane

0xe52b,	// (0x0006002d) mup_volume_pane_ParamLimits

0xe52b,	// (0x0006002d) mup_volume_pane

0xc080,	// (0x0005db82) mup_visualizer_pane_g1_ParamLimits

0xc080,	// (0x0005db82) mup_visualizer_pane_g1

0xd1a3,	// (0x0005eca5) mup_visualizer_pane_g2_ParamLimits

0xd1a3,	// (0x0005eca5) mup_visualizer_pane_g2

0xc072,	// (0x0005db74) mup_visualizer_pane_g3_ParamLimits

0xc072,	// (0x0005db74) mup_visualizer_pane_g3

0x0002,

0xf391,	// (0x00060e93) mup_visualizer_pane_g_ParamLimits

0xf391,	// (0x00060e93) mup_visualizer_pane_g

0xc0b0,	// (0x0005dbb2) mup_volume_pane_g1

0xc0b0,	// (0x0005dbb2) mup_volume_pane_g2

0x0001,

0xf0af,	// (0x00060bb1) mup_volume_pane_g

0xc0b0,	// (0x0005dbb2) mup_progress_pane_g1

0xc0b0,	// (0x0005dbb2) mup_progress_pane_g2

0xc0b0,	// (0x0005dbb2) mup_progress_pane_g3

0x0002,

0xf398,	// (0x00060e9a) mup_progress_pane_g

0xbd8e,	// (0x0005d890) bg_popup_window_pane_cp05

0xd1b1,	// (0x0005ecb3) heading_pane_cp02_ParamLimits

0xd1b1,	// (0x0005ecb3) heading_pane_cp02

0xd1cb,	// (0x0005eccd) list_popup_blid_pane

0xd1d3,	// (0x0005ecd5) list_blid_sat_info_pane_ParamLimits

0xd1d3,	// (0x0005ecd5) list_blid_sat_info_pane

0xd1e6,	// (0x0005ece8) list_blid_sat_info_pane_g1

0xd1ee,	// (0x0005ecf0) list_blid_sat_info_pane_t1

0x5607,	// (0x00057109) mup_equalizer_pane_ParamLimits

0x5607,	// (0x00057109) mup_equalizer_pane

0x5628,	// (0x0005712a) mup_equalizer_pane_cp1_ParamLimits

0x5628,	// (0x0005712a) mup_equalizer_pane_cp1

0x5649,	// (0x0005714b) mup_equalizer_pane_cp2_ParamLimits

0x5649,	// (0x0005714b) mup_equalizer_pane_cp2

0x566a,	// (0x0005716c) mup_equalizer_pane_cp3_ParamLimits

0x566a,	// (0x0005716c) mup_equalizer_pane_cp3

0x568b,	// (0x0005718d) mup_equalizer_pane_cp4_ParamLimits

0x568b,	// (0x0005718d) mup_equalizer_pane_cp4

0x56ac,	// (0x000571ae) mup_equalizer_pane_cp5

0x56c2,	// (0x000571c4) mup_equalizer_pane_cp6

0x56da,	// (0x000571dc) mup_equalizer_pane_cp7

0xe394,	// (0x0005fe96) bg_popup_call_poc_act_pane_g9

0xe39c,	// (0x0005fe9e) bg_popup_call_poc_act_pane_g10

0xe3a4,	// (0x0005fea6) bg_popup_call_poc_act_pane_g11

0x000a,

0xbfe9,	// (0x0005daeb) mup_scale_pane

0xc001,	// (0x0005db03) mup_scale_pane_g1

0xd1fc,	// (0x0005ecfe) mup_scale_pane_g2

0x0006,

0xf3b4,	// (0x00060eb6) mup_scale_pane_g

0xd220,	// (0x0005ed22) msg_data_pane

0xd228,	// (0x0005ed2a) scroll_pane_cp017

0x5704,	// (0x00057206) bg_list_pane_cp04_ParamLimits

0x5704,	// (0x00057206) bg_list_pane_cp04

0xd238,	// (0x0005ed3a) msg_data_pane_g1

0x571c,	// (0x0005721e) msg_data_pane_g2

0x5724,	// (0x00057226) msg_data_pane_g3

0x572c,	// (0x0005722e) msg_data_pane_g4

0x5734,	// (0x00057236) msg_data_pane_g5

0x573c,	// (0x0005723e) msg_data_pane_g6

0x5744,	// (0x00057246) msg_data_pane_g7

0x0006,

0xf3c3,	// (0x00060ec5) msg_data_pane_g

0x574c,	// (0x0005724e) msg_text_pane_ParamLimits

0x574c,	// (0x0005724e) msg_text_pane

0x57b8,	// (0x000572ba) qrid_highlight_pane_cp011_ParamLimits

0x57b8,	// (0x000572ba) qrid_highlight_pane_cp011

0xbd8e,	// (0x0005d890) msg_body_pane

0xbfe9,	// (0x0005daeb) msg_header_pane

0xd254,	// (0x0005ed56) input_focus_pane_cp07

0xd275,	// (0x0005ed77) msg_header_pane_t1_ParamLimits

0xd275,	// (0x0005ed77) msg_header_pane_t1

0xd291,	// (0x0005ed93) msg_header_pane_t2_ParamLimits

0xd291,	// (0x0005ed93) msg_header_pane_t2

0x0001,

0xf3d7,	// (0x00060ed9) msg_header_pane_t_ParamLimits

0xf3d7,	// (0x00060ed9) msg_header_pane_t

0xd2b1,	// (0x0005edb3) msg_body_pane_g1

0xd2b9,	// (0x0005edbb) msg_body_pane_t1_ParamLimits

0xd2b9,	// (0x0005edbb) msg_body_pane_t1

0xd2ea,	// (0x0005edec) msg_body_pane_t2_ParamLimits

0xd2ea,	// (0x0005edec) msg_body_pane_t2

0xd2fc,	// (0x0005edfe) msg_body_pane_t3_ParamLimits

0xd2fc,	// (0x0005edfe) msg_body_pane_t3

0x0002,

0xf3dc,	// (0x00060ede) msg_body_pane_t_ParamLimits

0xf3dc,	// (0x00060ede) msg_body_pane_t

0x5832,	// (0x00057334) main_viewer_pane_g1_ParamLimits

0x5832,	// (0x00057334) main_viewer_pane_g1

0x583e,	// (0x00057340) main_viewer_pane_g2_ParamLimits

0x583e,	// (0x00057340) main_viewer_pane_g2

0x584a,	// (0x0005734c) main_viewer_pane_g3_ParamLimits

0x584a,	// (0x0005734c) main_viewer_pane_g3

0x585b,	// (0x0005735d) main_viewer_pane_g4_ParamLimits

0x585b,	// (0x0005735d) main_viewer_pane_g4

0x586c,	// (0x0005736e) main_viewer_pane_g5_ParamLimits

0x586c,	// (0x0005736e) main_viewer_pane_g5

0x586c,	// (0x0005736e) main_viewer_pane_g7_ParamLimits

0x586c,	// (0x0005736e) main_viewer_pane_g7

0xc79a,	// (0x0005e29c) main_viewer_pane_g8_ParamLimits

0xc79a,	// (0x0005e29c) main_viewer_pane_g8

0x0007,

0xf3ec,	// (0x00060eee) main_viewer_pane_g_ParamLimits

0xf3ec,	// (0x00060eee) main_viewer_pane_g

0xd33e,	// (0x0005ee40) viewer_content_pane_ParamLimits

0xd33e,	// (0x0005ee40) viewer_content_pane

0x58aa,	// (0x000573ac) main_postcard_pane_g1_ParamLimits

0x58aa,	// (0x000573ac) main_postcard_pane_g1

0x58b8,	// (0x000573ba) main_postcard_pane_g2_ParamLimits

0x58b8,	// (0x000573ba) main_postcard_pane_g2

0x58c6,	// (0x000573c8) main_postcard_pane_g3_ParamLimits

0x58c6,	// (0x000573c8) main_postcard_pane_g3

0x0005,

0xf3fd,	// (0x00060eff) main_postcard_pane_g_ParamLimits

0xf3fd,	// (0x00060eff) main_postcard_pane_g

0x58d6,	// (0x000573d8) main_postcard_pane_g4

0xe518,	// (0x0006001a) smil_status_volume_pane_g2

0x5902,	// (0x00057404) postcard_pane_ParamLimits

0x5902,	// (0x00057404) postcard_pane

0xd947,	// (0x0005f449) postcard_pane_g1_ParamLimits

0xd947,	// (0x0005f449) postcard_pane_g1

0x5934,	// (0x00057436) postcard_pane_g2_ParamLimits

0x5934,	// (0x00057436) postcard_pane_g2

0x5940,	// (0x00057442) postcard_pane_g3_ParamLimits

0x5940,	// (0x00057442) postcard_pane_g3

0xd34c,	// (0x0005ee4e) postcard_pane_g4_ParamLimits

0xd34c,	// (0x0005ee4e) postcard_pane_g4

0x594c,	// (0x0005744e) postcard_pane_g5_ParamLimits

0x594c,	// (0x0005744e) postcard_pane_g5

0x5958,	// (0x0005745a) postcard_pane_g6_ParamLimits

0x5958,	// (0x0005745a) postcard_pane_g6

0xd35a,	// (0x0005ee5c) postcard_pane_g7_ParamLimits

0xd35a,	// (0x0005ee5c) postcard_pane_g7

0x0006,

0xf40a,	// (0x00060f0c) postcard_pane_g_ParamLimits

0xf40a,	// (0x00060f0c) postcard_pane_g

0x5964,	// (0x00057466) main_mp2_pane_g1_ParamLimits

0x5964,	// (0x00057466) main_mp2_pane_g1

0x5970,	// (0x00057472) main_mp2_pane_g2_ParamLimits

0x5970,	// (0x00057472) main_mp2_pane_g2

0x597c,	// (0x0005747e) main_mp2_pane_g3_ParamLimits

0x597c,	// (0x0005747e) main_mp2_pane_g3

0x0002,

0xf419,	// (0x00060f1b) main_mp2_pane_g_ParamLimits

0xf419,	// (0x00060f1b) main_mp2_pane_g

0x5988,	// (0x0005748a) main_mp2_pane_t1_ParamLimits

0x5988,	// (0x0005748a) main_mp2_pane_t1

0x599f,	// (0x000574a1) main_mp2_pane_t2_ParamLimits

0x599f,	// (0x000574a1) main_mp2_pane_t2

0x59b1,	// (0x000574b3) main_mp2_pane_t3_ParamLimits

0x59b1,	// (0x000574b3) main_mp2_pane_t3

0x0002,

0xf420,	// (0x00060f22) main_mp2_pane_t_ParamLimits

0xf420,	// (0x00060f22) main_mp2_pane_t

0xc00b,	// (0x0005db0d) pec_content_pane_ParamLimits

0xc00b,	// (0x0005db0d) pec_content_pane

0xb971,	// (0x0005d473) scroll_pane_cp015

0xd30e,	// (0x0005ee10) pec_attribute_pane_ParamLimits

0xd30e,	// (0x0005ee10) pec_attribute_pane

0xc072,	// (0x0005db74) pec_content_pane_g1_ParamLimits

0xc072,	// (0x0005db74) pec_content_pane_g1

0xd368,	// (0x0005ee6a) pec_content_pane_t1_ParamLimits

0xd368,	// (0x0005ee6a) pec_content_pane_t1

0xd37c,	// (0x0005ee7e) pec_content_pane_t2_ParamLimits

0xd37c,	// (0x0005ee7e) pec_content_pane_t2

0x0001,

0xf427,	// (0x00060f29) pec_content_pane_t_ParamLimits

0xf427,	// (0x00060f29) pec_content_pane_t

0xc064,	// (0x0005db66) list_single_graphic_pane_cp01_ParamLimits

0xc064,	// (0x0005db66) list_single_graphic_pane_cp01

0xbfe9,	// (0x0005daeb) bg_popup_sub_pane_cp04

0xd390,	// (0x0005ee92) popup_mup_playback_window_g1

0xd39c,	// (0x0005ee9e) popup_mup_playback_window_t1

0xd3b1,	// (0x0005eeb3) popup_mup_playback_window_t2

0x0001,

0xf42c,	// (0x00060f2e) popup_mup_playback_window_t

0xd3e8,	// (0x0005eeea) main_image_pane_g1_ParamLimits

0xd3e8,	// (0x0005eeea) main_image_pane_g1

0xd42b,	// (0x0005ef2d) scroll_pane_cp018_ParamLimits

0xd42b,	// (0x0005ef2d) scroll_pane_cp018

0xd443,	// (0x0005ef45) scroll_pane_cp016_ParamLimits

0xd443,	// (0x0005ef45) scroll_pane_cp016

0x5a34,	// (0x00057536) smil2_image_pane_ParamLimits

0x5a34,	// (0x00057536) smil2_image_pane

0x5a64,	// (0x00057566) smil2_root_pane_ParamLimits

0x5a64,	// (0x00057566) smil2_root_pane

0x5a90,	// (0x00057592) smil2_text_pane_ParamLimits

0x5a90,	// (0x00057592) smil2_text_pane

0xb971,	// (0x0005d473) bg_list_pane_cp06

0xb971,	// (0x0005d473) grid_radio_pane

0xbd8e,	// (0x0005d890) bg_popup_window_pane_cp06

0xc7ef,	// (0x0005e2f1) main_fmradio_pane_t1

0xe3ec,	// (0x0005feee) heading_pane_cp04

0xc7ef,	// (0x0005e2f1) main_fmradio_pane_t2

0xe3f4,	// (0x0005fef6) popup_cale_lunar_info_window_g1

0xc7ef,	// (0x0005e2f1) main_fmradio_pane_t3

0xe3fc,	// (0x0005fefe) popup_cale_lunar_info_window_g2

0xc7ef,	// (0x0005e2f1) main_fmradio_pane_t4

0x0001,

0xc7ef,	// (0x0005e2f1) main_fmradio_pane_t5

0x0004,

0xf514,	// (0x00061016) popup_cale_lunar_info_window_g

0xf28c,	// (0x00060d8e) main_fmradio_pane_t

0xb971,	// (0x0005d473) wait_bar_pane_cp03

0xc064,	// (0x0005db66) cell_fmradio_pane_ParamLimits

0xc064,	// (0x0005db66) cell_fmradio_pane

0xc072,	// (0x0005db74) cell_fmradio_pane_g1_ParamLimits

0xc072,	// (0x0005db74) cell_fmradio_pane_g1

0xb971,	// (0x0005d473) grid_highlight_pane_cp011

0xd477,	// (0x0005ef79) poc_content_pane_ParamLimits

0xd477,	// (0x0005ef79) poc_content_pane

0xd489,	// (0x0005ef8b) scroll_pane_cp019

0x5ad0,	// (0x000575d2) popup_call_poc_act_window_ParamLimits

0x5ad0,	// (0x000575d2) popup_call_poc_act_window

0x5add,	// (0x000575df) popup_call_poc_inact_window_ParamLimits

0x5add,	// (0x000575df) popup_call_poc_inact_window

0xf4d8,	// (0x00060fda) bg_popup_call_poc_act_pane_g

0xe3ac,	// (0x0005feae) bg_popup_call_poc_inact_pane_g1

0xe3b4,	// (0x0005feb6) bg_popup_call_poc_inact_pane_g2

0xd491,	// (0x0005ef93) popup_call_poc_act_window_g2

0xe3bc,	// (0x0005febe) bg_popup_call_poc_inact_pane_g3

0xe33c,	// (0x0005fe3e) bg_popup_call_poc_inact_pane_g4

0xe3c4,	// (0x0005fec6) bg_popup_call_poc_inact_pane_g5

0xd499,	// (0x0005ef9b) popup_call_poc_act_window_t1_ParamLimits

0xd499,	// (0x0005ef9b) popup_call_poc_act_window_t1

0xd4c1,	// (0x0005efc3) popup_call_poc_act_window_t2_ParamLimits

0xd4c1,	// (0x0005efc3) popup_call_poc_act_window_t2

0xd4e9,	// (0x0005efeb) popup_call_poc_act_window_t3_ParamLimits

0xd4e9,	// (0x0005efeb) popup_call_poc_act_window_t3

0xd511,	// (0x0005f013) popup_call_poc_act_window_t4_ParamLimits

0xd511,	// (0x0005f013) popup_call_poc_act_window_t4

0x0003,

0xf441,	// (0x00060f43) popup_call_poc_act_window_t_ParamLimits

0xf441,	// (0x00060f43) popup_call_poc_act_window_t

0xe3cc,	// (0x0005fece) bg_popup_call_poc_inact_pane_g6

0xe3d4,	// (0x0005fed6) bg_popup_call_poc_inact_pane_g7

0xe3dc,	// (0x0005fede) bg_popup_call_poc_inact_pane_g8

0xd523,	// (0x0005f025) popup_call_poc_inact_window_g2

0xe3e4,	// (0x0005fee6) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf4ef,	// (0x00060ff1) bg_popup_call_poc_inact_pane_g

0xd52b,	// (0x0005f02d) popup_call_poc_inact_window_t1_ParamLimits

0xd52b,	// (0x0005f02d) popup_call_poc_inact_window_t1

0xd540,	// (0x0005f042) popup_call_poc_inact_window_t2_ParamLimits

0xd540,	// (0x0005f042) popup_call_poc_inact_window_t2

0xd555,	// (0x0005f057) popup_call_poc_inact_window_t3_ParamLimits

0xd555,	// (0x0005f057) popup_call_poc_inact_window_t3

0x0002,

0xf44a,	// (0x00060f4c) popup_call_poc_inact_window_t_ParamLimits

0xf44a,	// (0x00060f4c) popup_call_poc_inact_window_t

0xe490,	// (0x0005ff92) context_pane_ParamLimits

0x60f0,	// (0x00057bf2) signal_pane_ParamLimits

0xc2c0,	// (0x0005ddc2) main_call2_pane

0x6063,	// (0x00057b65) popup_phob_thumbnail2_window_ParamLimits

0x6063,	// (0x00057b65) popup_phob_thumbnail2_window

0x57e0,	// (0x000572e2) aid_hotspot_pointer_arrow_pane

0x57e8,	// (0x000572ea) aid_hotspot_pointer_hand_pane

0x5db0,	// (0x000578b2) phob_pre_status_pane_g5

0xc064,	// (0x0005db66) cams_zoom_pane_ParamLimits

0xc064,	// (0x0005db66) image_vga_pane_ParamLimits

0xc080,	// (0x0005db82) main_camera_pane_g1_ParamLimits

0xc080,	// (0x0005db82) main_camera_pane_g2_ParamLimits

0xc080,	// (0x0005db82) main_camera_pane_g3_ParamLimits

0xc080,	// (0x0005db82) main_camera_pane_g4_ParamLimits

0xc080,	// (0x0005db82) main_camera_pane_g5_ParamLimits

0xc080,	// (0x0005db82) main_camera_pane_g6_ParamLimits

0xc080,	// (0x0005db82) main_camera_pane_g7_ParamLimits

0xf180,	// (0x00060c82) main_camera_pane_g_ParamLimits

0xc0ce,	// (0x0005dbd0) main_camera_pane_t1_ParamLimits

0xc0ce,	// (0x0005dbd0) main_camera_pane_t2_ParamLimits

0xf191,	// (0x00060c93) main_camera_pane_t_ParamLimits

0xbfe9,	// (0x0005daeb) bg_popup_preview_window_pane_cp01_ParamLimits

0xbfe9,	// (0x0005daeb) bg_popup_preview_window_pane_cp01

0xd56a,	// (0x0005f06c) popup_phob_thumbnail2_window_g1_ParamLimits

0xd56a,	// (0x0005f06c) popup_phob_thumbnail2_window_g1

0xbd8e,	// (0x0005d890) call2_cli_visual_pane

0x5af9,	// (0x000575fb) popup_call2_audio_conf_window_ParamLimits

0x5af9,	// (0x000575fb) popup_call2_audio_conf_window

0x5b0e,	// (0x00057610) popup_call2_audio_first_window_ParamLimits

0x5b0e,	// (0x00057610) popup_call2_audio_first_window

0x5bac,	// (0x000576ae) popup_call2_audio_in_window_ParamLimits

0x5bac,	// (0x000576ae) popup_call2_audio_in_window

0x5bee,	// (0x000576f0) popup_call2_audio_out_window_ParamLimits

0x5bee,	// (0x000576f0) popup_call2_audio_out_window

0x5c50,	// (0x00057752) popup_call2_audio_second_window_ParamLimits

0x5c50,	// (0x00057752) popup_call2_audio_second_window

0x5cae,	// (0x000577b0) popup_call2_audio_wait_window_ParamLimits

0x5cae,	// (0x000577b0) popup_call2_audio_wait_window

0xbd8e,	// (0x0005d890) bg_popup_call2_act_pane_cp03

0xbfcb,	// (0x0005dacd) list_conf_pane_cp

0xd576,	// (0x0005f078) popup_call2_audio_conf_window_t1

0xd584,	// (0x0005f086) list_single_graphic_popup_conf2_pane_ParamLimits

0xd584,	// (0x0005f086) list_single_graphic_popup_conf2_pane

0xce13,	// (0x0005e915) list_highlight_pane_cp04

0xd597,	// (0x0005f099) list_single_graphic_popup_conf2_pane_g1

0xce24,	// (0x0005e926) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf451,	// (0x00060f53) list_single_graphic_popup_conf2_pane_g

0xd5a1,	// (0x0005f0a3) list_single_graphic_popup_conf2_pane_t1

0xd5af,	// (0x0005f0b1) bg_popup_call2_act_pane_cp01_ParamLimits

0xd5af,	// (0x0005f0b1) bg_popup_call2_act_pane_cp01

0xd639,	// (0x0005f13b) call_type_pane_cp05_ParamLimits

0xd639,	// (0x0005f13b) call_type_pane_cp05

0xd68d,	// (0x0005f18f) popup_call2_audio_second_window_g1_ParamLimits

0xd68d,	// (0x0005f18f) popup_call2_audio_second_window_g1

0xd6e1,	// (0x0005f1e3) popup_call2_audio_second_window_g2_ParamLimits

0xd6e1,	// (0x0005f1e3) popup_call2_audio_second_window_g2

0x0002,

0xf456,	// (0x00060f58) popup_call2_audio_second_window_g_ParamLimits

0xf456,	// (0x00060f58) popup_call2_audio_second_window_g

0xd746,	// (0x0005f248) popup_call2_audio_second_window_t1_ParamLimits

0xd746,	// (0x0005f248) popup_call2_audio_second_window_t1

0xd801,	// (0x0005f303) popup_call2_audio_second_window_t2_ParamLimits

0xd801,	// (0x0005f303) popup_call2_audio_second_window_t2

0xd854,	// (0x0005f356) popup_call2_audio_second_window_t3_ParamLimits

0xd854,	// (0x0005f356) popup_call2_audio_second_window_t3

0x0003,

0xf45d,	// (0x00060f5f) popup_call2_audio_second_window_t_ParamLimits

0xf45d,	// (0x00060f5f) popup_call2_audio_second_window_t

0xbd8e,	// (0x0005d890) bg_popup_call2_in_pane_cp02

0xbd98,	// (0x0005d89a) call_type_pane_cp04

0x5ced,	// (0x000577ef) popup_call2_audio_wait_window_g1

0x5cf5,	// (0x000577f7) popup_call2_audio_wait_window_g2

0x0001,

0xf466,	// (0x00060f68) popup_call2_audio_wait_window_g

0xbdb0,	// (0x0005d8b2) popup_call2_audio_wait_window_t3

0xd955,	// (0x0005f457) bg_popup_call2_act_pane_ParamLimits

0xd955,	// (0x0005f457) bg_popup_call2_act_pane

0xda15,	// (0x0005f517) call_type_pane_cp03_ParamLimits

0xda15,	// (0x0005f517) call_type_pane_cp03

0xda79,	// (0x0005f57b) popup_call2_audio_first_window_g1_ParamLimits

0xda79,	// (0x0005f57b) popup_call2_audio_first_window_g1

0xdae9,	// (0x0005f5eb) popup_call2_audio_first_window_g2_ParamLimits

0xdae9,	// (0x0005f5eb) popup_call2_audio_first_window_g2

0xd947,	// (0x0005f449) popup_call2_audio_first_window_g3_ParamLimits

0xd947,	// (0x0005f449) popup_call2_audio_first_window_g3

0x0004,

0xf46b,	// (0x00060f6d) popup_call2_audio_first_window_g_ParamLimits

0xf46b,	// (0x00060f6d) popup_call2_audio_first_window_g

0xdbc7,	// (0x0005f6c9) popup_call2_audio_first_window_t1_ParamLimits

0xdbc7,	// (0x0005f6c9) popup_call2_audio_first_window_t1

0xdcca,	// (0x0005f7cc) popup_call2_audio_first_window_t4_ParamLimits

0xdcca,	// (0x0005f7cc) popup_call2_audio_first_window_t4

0xddad,	// (0x0005f8af) popup_call2_audio_first_window_t5_ParamLimits

0xddad,	// (0x0005f8af) popup_call2_audio_first_window_t5

0x0003,

0xf476,	// (0x00060f78) popup_call2_audio_first_window_t_ParamLimits

0xf476,	// (0x00060f78) popup_call2_audio_first_window_t

0xbfe1,	// (0x0005dae3) bg_popup_call2_act_pane_g1

0xe404,	// (0x0005ff06) popup_cale_lunar_info_window_t1

0xe412,	// (0x0005ff14) popup_cale_lunar_info_window_t2

0xe420,	// (0x0005ff22) popup_cale_lunar_info_window_t3

0xbd8e,	// (0x0005d890) bg_popup_call2_bubble_pane

0xdeae,	// (0x0005f9b0) bg_popup_call2_in_pane_cp01_ParamLimits

0xdeae,	// (0x0005f9b0) bg_popup_call2_in_pane_cp01

0xba6a,	// (0x0005d56c) call_type_pane_cp02

0x5cfd,	// (0x000577ff) popup_call2_audio_out_window_g1_ParamLimits

0x5cfd,	// (0x000577ff) popup_call2_audio_out_window_g1

0xdef6,	// (0x0005f9f8) popup_call2_audio_out_window_g2_ParamLimits

0xdef6,	// (0x0005f9f8) popup_call2_audio_out_window_g2

0x5d29,	// (0x0005782b) popup_call2_audio_out_window_g3_ParamLimits

0x5d29,	// (0x0005782b) popup_call2_audio_out_window_g3

0x0003,

0xf47f,	// (0x00060f81) popup_call2_audio_out_window_g_ParamLimits

0xf47f,	// (0x00060f81) popup_call2_audio_out_window_g

0xdf2d,	// (0x0005fa2f) popup_call2_audio_out_window_t1_ParamLimits

0xdf2d,	// (0x0005fa2f) popup_call2_audio_out_window_t1

0xdf8c,	// (0x0005fa8e) popup_call2_audio_out_window_t2_ParamLimits

0xdf8c,	// (0x0005fa8e) popup_call2_audio_out_window_t2

0xdfe0,	// (0x0005fae2) popup_call2_audio_out_window_t3_ParamLimits

0xdfe0,	// (0x0005fae2) popup_call2_audio_out_window_t3

0xdff6,	// (0x0005faf8) popup_call2_audio_out_window_t4_ParamLimits

0xdff6,	// (0x0005faf8) popup_call2_audio_out_window_t4

0xe00c,	// (0x0005fb0e) popup_call2_audio_out_window_t5_ParamLimits

0xe00c,	// (0x0005fb0e) popup_call2_audio_out_window_t5

0x0005,

0xf488,	// (0x00060f8a) popup_call2_audio_out_window_t_ParamLimits

0xf488,	// (0x00060f8a) popup_call2_audio_out_window_t

0xe070,	// (0x0005fb72) bg_popup_call2_in_pane_ParamLimits

0xe070,	// (0x0005fb72) bg_popup_call2_in_pane

0xe0cc,	// (0x0005fbce) popup_call2_audio_in_window_g1_ParamLimits

0xe0cc,	// (0x0005fbce) popup_call2_audio_in_window_g1

0xe104,	// (0x0005fc06) popup_call2_audio_in_window_g2_ParamLimits

0xe104,	// (0x0005fc06) popup_call2_audio_in_window_g2

0xe13c,	// (0x0005fc3e) popup_call2_audio_in_window_g3_ParamLimits

0xe13c,	// (0x0005fc3e) popup_call2_audio_in_window_g3

0x0003,

0xf495,	// (0x00060f97) popup_call2_audio_in_window_g_ParamLimits

0xf495,	// (0x00060f97) popup_call2_audio_in_window_g

0xe194,	// (0x0005fc96) popup_call2_audio_in_window_t1_ParamLimits

0xe194,	// (0x0005fc96) popup_call2_audio_in_window_t1

0xe214,	// (0x0005fd16) popup_call2_audio_in_window_t2_ParamLimits

0xe214,	// (0x0005fd16) popup_call2_audio_in_window_t2

0xe294,	// (0x0005fd96) popup_call2_audio_in_window_t3_ParamLimits

0xe294,	// (0x0005fd96) popup_call2_audio_in_window_t3

0xe2ae,	// (0x0005fdb0) popup_call2_audio_in_window_t4_ParamLimits

0xe2ae,	// (0x0005fdb0) popup_call2_audio_in_window_t4

0xe2c0,	// (0x0005fdc2) popup_call2_audio_in_window_t5_ParamLimits

0xe2c0,	// (0x0005fdc2) popup_call2_audio_in_window_t5

0xe2d2,	// (0x0005fdd4) popup_call2_audio_in_window_t6_ParamLimits

0xe2d2,	// (0x0005fdd4) popup_call2_audio_in_window_t6

0x0005,

0xf49e,	// (0x00060fa0) popup_call2_audio_in_window_t_ParamLimits

0xf49e,	// (0x00060fa0) popup_call2_audio_in_window_t

0xbfe1,	// (0x0005dae3) bg_popup_call2_in_pane_g1

0xe42e,	// (0x0005ff30) popup_cale_lunar_info_window_t4

0x0003,

0xf519,	// (0x0006101b) popup_cale_lunar_info_window_t

0xbfe9,	// (0x0005daeb) bg_popup_call2_rect_pane_ParamLimits

0xbfe9,	// (0x0005daeb) bg_popup_call2_rect_pane

0xbd8e,	// (0x0005d890) call2_cli_visual_graphic_pane

0xbd8e,	// (0x0005d890) call2_cli_visual_text_pane

0x612c,	// (0x00057c2e) smil_status_volume_pane_g3

0x0002,

0xc001,	// (0x0005db03) call2_cli_visual_graphic_pane_g1

0xc001,	// (0x0005db03) call2_cli_visual_graphic_pane_g2

0xc001,	// (0x0005db03) call2_cli_visual_graphic_pane_g3

0x0002,

0xf4ab,	// (0x00060fad) call2_cli_visual_graphic_pane_g

0xe2e4,	// (0x0005fde6) bg_popup_call2_rect_pane_g1

0xc1e5,	// (0x0005dce7) bg_popup_call2_rect_pane_g2

0xe2ec,	// (0x0005fdee) bg_popup_call2_rect_pane_g3

0xe2f4,	// (0x0005fdf6) bg_popup_call2_rect_pane_g4

0xe2fc,	// (0x0005fdfe) bg_popup_call2_rect_pane_g5

0xe304,	// (0x0005fe06) bg_popup_call2_rect_pane_g6

0xe30c,	// (0x0005fe0e) bg_popup_call2_rect_pane_g7

0xe314,	// (0x0005fe16) bg_popup_call2_rect_pane_g8

0xe31c,	// (0x0005fe1e) bg_popup_call2_rect_pane_g9

0x0008,

0xf4b2,	// (0x00060fb4) bg_popup_call2_rect_pane_g

0xe324,	// (0x0005fe26) bg_popup_call2_bubble_pane_g1

0xe32c,	// (0x0005fe2e) bg_popup_call2_bubble_pane_g2

0xe334,	// (0x0005fe36) bg_popup_call2_bubble_pane_g3

0xe33c,	// (0x0005fe3e) bg_popup_call2_bubble_pane_g4

0xe344,	// (0x0005fe46) bg_popup_call2_bubble_pane_g5

0xe34c,	// (0x0005fe4e) bg_popup_call2_bubble_pane_g6

0xe354,	// (0x0005fe56) bg_popup_call2_bubble_pane_g7

0xe35c,	// (0x0005fe5e) bg_popup_call2_bubble_pane_g8

0xe364,	// (0x0005fe66) bg_popup_call2_bubble_pane_g9

0x0008,

0xf4c5,	// (0x00060fc7) bg_popup_call2_bubble_pane_g

0x38d4,	// (0x000553d6) aid_cale_week_size_cell_pane

0xbfe9,	// (0x0005daeb) aid_cams_cif_uncrop_pane_ParamLimits

0xbfe9,	// (0x0005daeb) aid_cams_cif_uncrop_pane

0xc064,	// (0x0005db66) aid_cams_size_cell_ParamLimits

0xc064,	// (0x0005db66) aid_cams_size_cell

0xc064,	// (0x0005db66) grid_cams_pane_ParamLimits

0xc064,	// (0x0005db66) linegrid_cams_pane_ParamLimits

0x3f98,	// (0x00055a9a) call_video_pane_t1

0x3fb9,	// (0x00055abb) call_video_pane_t2

0x0001,

0xf1dd,	// (0x00060cdf) call_video_pane_t

0x4507,	// (0x00056009) aid_cale_month_size_cell_pane_ParamLimits

0x4507,	// (0x00056009) aid_cale_month_size_cell_pane

0xf55d,	// (0x0006105f) smil_status_volume_pane_g

0x6139,	// (0x00057c3b) volume_smil_pane_ParamLimits

0x32c5,	// (0x00054dc7) aid_popup2_width_pane

0x37bd,	// (0x000552bf) cell_qdial_pane_g4_ParamLimits

0x37bd,	// (0x000552bf) cell_qdial_pane_g4

0x5431,	// (0x00056f33) aid_blid_cardinal_pane_ParamLimits

0x5441,	// (0x00056f43) aid_blid_destination_pane_ParamLimits

0x5441,	// (0x00056f43) aid_blid_destination_pane

0xbfe9,	// (0x0005daeb) bg_popup_call_poc_act_pane_ParamLimits

0xbfe9,	// (0x0005daeb) bg_popup_call_poc_act_pane

0xbfe9,	// (0x0005daeb) bg_popup_call_poc_inact_pane_ParamLimits

0xbfe9,	// (0x0005daeb) bg_popup_call_poc_inact_pane

0xe36c,	// (0x0005fe6e) bg_popup_call_poc_act_pane_g1

0xe374,	// (0x0005fe76) bg_popup_call_poc_act_pane_g2

0xe37c,	// (0x0005fe7e) bg_popup_call_poc_act_pane_g3

0xe33c,	// (0x0005fe3e) bg_popup_call_poc_act_pane_g4

0xe344,	// (0x0005fe46) bg_popup_call_poc_act_pane_g5

0xe384,	// (0x0005fe86) bg_popup_call_poc_act_pane_g6

0xe354,	// (0x0005fe56) bg_popup_call_poc_act_pane_g7

0xe38c,	// (0x0005fe8e) bg_popup_call_poc_act_pane_g8

0xbd8e,	// (0x0005d890) main_usb_pane

0x5f96,	// (0x00057a98) popup_cale_lunar_info_window

0x42d6,	// (0x00055dd8) im_reading_pane_t1_ParamLimits

0xc381,	// (0x0005de83) list_im_pane_ParamLimits

0xc392,	// (0x0005de94) scroll_pane_cp07_ParamLimits

0xbd8e,	// (0x0005d890) grid_highlight_pane_cp012

0xbfe9,	// (0x0005daeb) mup_scale_pane_ParamLimits

0xc080,	// (0x0005db82) main_usb_pane_g1_ParamLimits

0xc080,	// (0x0005db82) main_usb_pane_g1

0xc080,	// (0x0005db82) main_usb_pane_g2_ParamLimits

0xc080,	// (0x0005db82) main_usb_pane_g2

0x0001,

0xf502,	// (0x00061004) main_usb_pane_g_ParamLimits

0xf502,	// (0x00061004) main_usb_pane_g

0xc0ce,	// (0x0005dbd0) main_usb_pane_t1_ParamLimits

0xc0ce,	// (0x0005dbd0) main_usb_pane_t1

0xc0ce,	// (0x0005dbd0) main_usb_pane_t2_ParamLimits

0xc0ce,	// (0x0005dbd0) main_usb_pane_t2

0xc0ce,	// (0x0005dbd0) main_usb_pane_t3_ParamLimits

0xc0ce,	// (0x0005dbd0) main_usb_pane_t3

0xc0ce,	// (0x0005dbd0) main_usb_pane_t4_ParamLimits

0xc0ce,	// (0x0005dbd0) main_usb_pane_t4

0xc0ce,	// (0x0005dbd0) main_usb_pane_t5_ParamLimits

0xc0ce,	// (0x0005dbd0) main_usb_pane_t5

0xc0ce,	// (0x0005dbd0) main_usb_pane_t6_ParamLimits

0xc0ce,	// (0x0005dbd0) main_usb_pane_t6

0x0005,

0xf507,	// (0x00061009) main_usb_pane_t_ParamLimits

0x53d7,	// (0x00056ed9) aid_text_placing

0x53e3,	// (0x00056ee5) main_location2_pane_t1_ParamLimits

0x53f7,	// (0x00056ef9) main_location2_pane_t2_ParamLimits

0x540b,	// (0x00056f0d) main_location2_pane_t3_ParamLimits

0x541f,	// (0x00056f21) main_location2_pane_t4_ParamLimits

0x541f,	// (0x00056f21) main_location2_pane_t4

0xf31e,	// (0x00060e20) main_location2_pane_t_ParamLimits

0xc025,	// (0x0005db27) find_pinb_pane_g2_ParamLimits

0xc025,	// (0x0005db27) find_pinb_pane_g2

0x0001,

0xf095,	// (0x00060b97) find_pinb_pane_g_ParamLimits

0xf095,	// (0x00060b97) find_pinb_pane_g

0xc031,	// (0x0005db33) find_pinb_pane_t1_ParamLimits

0xc043,	// (0x0005db45) find_pinb_pane_t2_ParamLimits

0xf09a,	// (0x00060b9c) find_pinb_pane_t_ParamLimits

0xbd8e,	// (0x0005d890) main_call3_pane

0x4aca,	// (0x000565cc) cale_month_day_heading_pane_t1_ParamLimits

0x4b50,	// (0x00056652) cale_month_day_heading_pane_t2_ParamLimits

0x4bc9,	// (0x000566cb) cale_month_day_heading_pane_t3_ParamLimits

0x4c42,	// (0x00056744) cale_month_day_heading_pane_t4_ParamLimits

0x4cbb,	// (0x000567bd) cale_month_day_heading_pane_t5_ParamLimits

0x4d34,	// (0x00056836) cale_month_day_heading_pane_t6_ParamLimits

0x4dad,	// (0x000568af) cale_month_day_heading_pane_t7_ParamLimits

0xf215,	// (0x00060d17) cale_month_day_heading_pane_t_ParamLimits

0xc5dc,	// (0x0005e0de) smil_status_volume_pane

0x591c,	// (0x0005741e) postcard_address_pane_ParamLimits

0x591c,	// (0x0005741e) postcard_address_pane

0x5928,	// (0x0005742a) postcard_message_pane_ParamLimits

0x5928,	// (0x0005742a) postcard_message_pane

0x5d55,	// (0x00057857) call2_cli_visual_pane_t1_ParamLimits

0x5d55,	// (0x00057857) call2_cli_visual_pane_t1

0xe551,	// (0x00060053) postcard_message_pane_t1_ParamLimits

0xe551,	// (0x00060053) postcard_message_pane_t1

0xe539,	// (0x0006003b) postcard_address_pane_t1_ParamLimits

0xe539,	// (0x0006003b) postcard_address_pane_t1

0x626a,	// (0x00057d6c) popup_call3_audio_in_window_ParamLimits

0x626a,	// (0x00057d6c) popup_call3_audio_in_window

0x614e,	// (0x00057c50) bg_popup_call3_in_pane_ParamLimits

0x614e,	// (0x00057c50) bg_popup_call3_in_pane

0x61b0,	// (0x00057cb2) popup_call3_audio_in_window_g1_ParamLimits

0x61b0,	// (0x00057cb2) popup_call3_audio_in_window_g1

0x61c8,	// (0x00057cca) popup_call3_audio_in_window_g2_ParamLimits

0x61c8,	// (0x00057cca) popup_call3_audio_in_window_g2

0x61e0,	// (0x00057ce2) popup_call3_audio_in_window_g3_ParamLimits

0x61e0,	// (0x00057ce2) popup_call3_audio_in_window_g3

0x0003,

0xf564,	// (0x00061066) popup_call3_audio_in_window_g_ParamLimits

0xf564,	// (0x00061066) popup_call3_audio_in_window_g

0x6208,	// (0x00057d0a) popup_call3_audio_in_window_t1_ParamLimits

0x6208,	// (0x00057d0a) popup_call3_audio_in_window_t1

0x6230,	// (0x00057d32) popup_call3_audio_in_window_t2_ParamLimits

0x6230,	// (0x00057d32) popup_call3_audio_in_window_t2

0x6258,	// (0x00057d5a) popup_call3_audio_in_window_t3_ParamLimits

0x6258,	// (0x00057d5a) popup_call3_audio_in_window_t3

0x0002,

0xf56d,	// (0x0006106f) popup_call3_audio_in_window_t_ParamLimits

0xf56d,	// (0x0006106f) popup_call3_audio_in_window_t

0xc2c0,	// (0x0005ddc2) bg_popup_call3_rect_pane

0xe2e4,	// (0x0005fde6) bg_popup_call3_rect_pane_g1

0xc1e5,	// (0x0005dce7) bg_popup_call3_rect_pane_g2

0xe2ec,	// (0x0005fdee) bg_popup_call3_rect_pane_g3

0xe2f4,	// (0x0005fdf6) bg_popup_call3_rect_pane_g4

0xe2fc,	// (0x0005fdfe) bg_popup_call3_rect_pane_g5

0xe304,	// (0x0005fe06) bg_popup_call3_rect_pane_g6

0xe30c,	// (0x0005fe0e) bg_popup_call3_rect_pane_g7

0xb971,	// (0x0005d473) mup_visualizer_osc_pane

0xb971,	// (0x0005d473) mup_visualizer_spec_pane

0x616e,	// (0x00057c70) call3_video_qcif_pane_ParamLimits

0x616e,	// (0x00057c70) call3_video_qcif_pane

0x6180,	// (0x00057c82) call3_video_qcif_uncrop_pane_ParamLimits

0x6180,	// (0x00057c82) call3_video_qcif_uncrop_pane

0x618e,	// (0x00057c90) call3_video_subqcif_pane_ParamLimits

0x618e,	// (0x00057c90) call3_video_subqcif_pane

0x61a0,	// (0x00057ca2) call3_video_subqcif_uncrop_pane_ParamLimits

0x61a0,	// (0x00057ca2) call3_video_subqcif_uncrop_pane

0x61f8,	// (0x00057cfa) popup_call3_audio_in_window_g4_ParamLimits

0x61f8,	// (0x00057cfa) popup_call3_audio_in_window_g4

0xb971,	// (0x0005d473) mup_spec_half_pane

0xb971,	// (0x0005d473) mup_spec_half_pane_cp

0xb971,	// (0x0005d473) mup_osc_middle_pane

0xc0b0,	// (0x0005dbb2) mup_visualizer_osc_pane_g1

0xe4de,	// (0x0005ffe0) mup_spec_bar_pane_ParamLimits

0xe4de,	// (0x0005ffe0) mup_spec_bar_pane

0xc0b0,	// (0x0005dbb2) mup_spec_bar_pane_g1

0xc0b0,	// (0x0005dbb2) mup_spec_bar_pane_g2

0x0001,

0xf0af,	// (0x00060bb1) mup_spec_bar_pane_g

0x38d4,	// (0x000553d6) aid_cale_week_size_cell_pane_ParamLimits

0x38e9,	// (0x000553eb) bg_cale_heading_pane_ParamLimits

0xc222,	// (0x0005dd24) bg_cale_pane_cp01_ParamLimits

0x390b,	// (0x0005540d) cale_week_corner_pane_ParamLimits

0x3925,	// (0x00055427) cale_week_day_heading_pane_ParamLimits

0x3947,	// (0x00055449) cale_week_scroll_pane_g1_ParamLimits

0x3964,	// (0x00055466) cale_week_scroll_pane_g2_ParamLimits

0x3977,	// (0x00055479) cale_week_scroll_pane_g3_ParamLimits

0x398a,	// (0x0005548c) cale_week_scroll_pane_g4_ParamLimits

0x399d,	// (0x0005549f) cale_week_scroll_pane_g5_ParamLimits

0x39b0,	// (0x000554b2) cale_week_scroll_pane_g6_ParamLimits

0x39c3,	// (0x000554c5) cale_week_scroll_pane_g7_ParamLimits

0x39d8,	// (0x000554da) cale_week_scroll_pane_g8_ParamLimits

0x39ed,	// (0x000554ef) cale_week_scroll_pane_g9_ParamLimits

0x3a00,	// (0x00055502) cale_week_scroll_pane_g10_ParamLimits

0x3a13,	// (0x00055515) cale_week_scroll_pane_g11_ParamLimits

0x3a26,	// (0x00055528) cale_week_scroll_pane_g12_ParamLimits

0x3a3d,	// (0x0005553f) cale_week_scroll_pane_g13_ParamLimits

0x3a58,	// (0x0005555a) cale_week_scroll_pane_g14_ParamLimits

0x3a73,	// (0x00055575) cale_week_scroll_pane_g15_ParamLimits

0xf126,	// (0x00060c28) cale_week_scroll_pane_g_ParamLimits

0x3aa3,	// (0x000555a5) cale_week_time_pane_ParamLimits

0x3ab8,	// (0x000555ba) grid_cale_week_pane_ParamLimits

0xc23f,	// (0x0005dd41) listscroll_cale_week_pane_t1

0xc251,	// (0x0005dd53) scroll_pane_cp08_ParamLimits

0x457b,	// (0x0005607d) cale_month_corner_pane_ParamLimits

0xc5b2,	// (0x0005e0b4) cale_month_pane_t1

0x4a49,	// (0x0005654b) cale_month_week_pane_ParamLimits

0xd947,	// (0x0005f449) popup_call_status_window_g1_ParamLimits

0x5204,	// (0x00056d06) popup_call_status_window_g2_ParamLimits

0x5210,	// (0x00056d12) popup_call_status_window_g3_ParamLimits

0xf2a5,	// (0x00060da7) popup_call_status_window_g_ParamLimits

0xcd9f,	// (0x0005e8a1) aid_call2_pane

0x57d4,	// (0x000572d6) msg_header_pane_g1

0x591c,	// (0x0005741e) postcard_address2_pane_ParamLimits

0x591c,	// (0x0005741e) postcard_address2_pane

0x5928,	// (0x0005742a) postcard_message2_pane_ParamLimits

0x5928,	// (0x0005742a) postcard_message2_pane

0x60fe,	// (0x00057c00) message2_row_pane_ParamLimits

0x60fe,	// (0x00057c00) message2_row_pane

0x6119,	// (0x00057c1b) address2_row_pane_ParamLimits

0x6119,	// (0x00057c1b) address2_row_pane

0xe4ab,	// (0x0005ffad) postcard_message2_row_pane_g1

0xe4b3,	// (0x0005ffb5) postcard_message2_row_pane_t1

0xe4ab,	// (0x0005ffad) address2_row_pane_g1

0xe4b3,	// (0x0005ffb5) address2_row_pane_t1

0x3d3d,	// (0x0005583f) aid_size_cell_vorec

0xbd8e,	// (0x0005d890) main_rss_pane

0xe4c1,	// (0x0005ffc3) rss_list_single_pane_ParamLimits

0xe4c1,	// (0x0005ffc3) rss_list_single_pane

0xe4cf,	// (0x0005ffd1) rss_list_single_pane_t1

0xe4cf,	// (0x0005ffd1) rss_list_single_pane_t2

0x0001,

0xf558,	// (0x0006105a) rss_list_single_pane_t

0xbd8e,	// (0x0005d890) main_camera2_pane

0xbd8e,	// (0x0005d890) main_video2_pane

0x34d0,	// (0x00054fd2) cams_zoom_pane_cp2_ParamLimits

0x34d0,	// (0x00054fd2) cams_zoom_pane_cp2

0x34d0,	// (0x00054fd2) image2_vga_pane_ParamLimits

0x34d0,	// (0x00054fd2) image2_vga_pane

0xcdd3,	// (0x0005e8d5) main_camera2_pane_g1_ParamLimits

0xcdd3,	// (0x0005e8d5) main_camera2_pane_g1

0xcdd3,	// (0x0005e8d5) main_camera2_pane_g2_ParamLimits

0xcdd3,	// (0x0005e8d5) main_camera2_pane_g2

0xcdd3,	// (0x0005e8d5) main_camera2_pane_g3_ParamLimits

0xcdd3,	// (0x0005e8d5) main_camera2_pane_g3

0xcdd3,	// (0x0005e8d5) main_camera2_pane_g4_ParamLimits

0xcdd3,	// (0x0005e8d5) main_camera2_pane_g4

0xcdd3,	// (0x0005e8d5) main_camera2_pane_g5_ParamLimits

0xcdd3,	// (0x0005e8d5) main_camera2_pane_g5

0xcdd3,	// (0x0005e8d5) main_camera2_pane_g6_ParamLimits

0xcdd3,	// (0x0005e8d5) main_camera2_pane_g6

0xcdd3,	// (0x0005e8d5) main_camera2_pane_g7_ParamLimits

0xcdd3,	// (0x0005e8d5) main_camera2_pane_g7

0xcdd3,	// (0x0005e8d5) main_camera2_pane_g8_ParamLimits

0xcdd3,	// (0x0005e8d5) main_camera2_pane_g8

0x0008,

0xf574,	// (0x00061076) main_camera2_pane_g_ParamLimits

0xf574,	// (0x00061076) main_camera2_pane_g

0x6287,	// (0x00057d89) main_camera2_pane_t1_ParamLimits

0x6287,	// (0x00057d89) main_camera2_pane_t1

0x6287,	// (0x00057d89) main_camera2_pane_t2_ParamLimits

0x6287,	// (0x00057d89) main_camera2_pane_t2

0x6287,	// (0x00057d89) main_camera2_pane_t3_ParamLimits

0x6287,	// (0x00057d89) main_camera2_pane_t3

0x6287,	// (0x00057d89) main_camera2_pane_t4_ParamLimits

0x6287,	// (0x00057d89) main_camera2_pane_t4

0x0006,

0xf587,	// (0x00061089) main_camera2_pane_t_ParamLimits

0xf587,	// (0x00061089) main_camera2_pane_t

0x62af,	// (0x00057db1) cams_zoom_pane_cp4_ParamLimits

0x62af,	// (0x00057db1) cams_zoom_pane_cp4

0x5f41,	// (0x00057a43) image2_cif_pane_ParamLimits

0x5f41,	// (0x00057a43) image2_cif_pane

0x34d0,	// (0x00054fd2) image2_subqcif_pane_ParamLimits

0x34d0,	// (0x00054fd2) image2_subqcif_pane

0x62bd,	// (0x00057dbf) main_video2_pane_g1_ParamLimits

0x62bd,	// (0x00057dbf) main_video2_pane_g1

0x62bd,	// (0x00057dbf) main_video2_pane_g2_ParamLimits

0x62bd,	// (0x00057dbf) main_video2_pane_g2

0x62bd,	// (0x00057dbf) main_video2_pane_g3_ParamLimits

0x62bd,	// (0x00057dbf) main_video2_pane_g3

0x62bd,	// (0x00057dbf) main_video2_pane_g4_ParamLimits

0x62bd,	// (0x00057dbf) main_video2_pane_g4

0x62bd,	// (0x00057dbf) main_video2_pane_g5_ParamLimits

0x62bd,	// (0x00057dbf) main_video2_pane_g5

0x62bd,	// (0x00057dbf) main_video2_pane_g6_ParamLimits

0x62bd,	// (0x00057dbf) main_video2_pane_g6

0x0005,

0xf596,	// (0x00061098) main_video2_pane_g_ParamLimits

0xf596,	// (0x00061098) main_video2_pane_g

0x62cb,	// (0x00057dcd) main_video2_pane_t1_ParamLimits

0x62cb,	// (0x00057dcd) main_video2_pane_t1

0x62cb,	// (0x00057dcd) main_video2_pane_t2_ParamLimits

0x62cb,	// (0x00057dcd) main_video2_pane_t2

0x62cb,	// (0x00057dcd) main_video2_pane_t3_ParamLimits

0x62cb,	// (0x00057dcd) main_video2_pane_t3

0x0002,

0xf5a3,	// (0x000610a5) main_video2_pane_t_ParamLimits

0xf5a3,	// (0x000610a5) main_video2_pane_t

0x5e14,	// (0x00057916) call_muted_g2

0x0001,

0xf54a,	// (0x0006104c) call_muted_g

0xbd8e,	// (0x0005d890) main_mup2_pane

0xc08e,	// (0x0005db90) main_mup2_pane_g1_ParamLimits

0xc08e,	// (0x0005db90) main_mup2_pane_g1

0xc08e,	// (0x0005db90) main_mup2_pane_g2_ParamLimits

0xc08e,	// (0x0005db90) main_mup2_pane_g2

0x0e28,	// (0x0005292a) main_mup_pane_g13_cp1

0x34ea,	// (0x00054fec) mup_volume_pane_cp1

0xc08e,	// (0x0005db90) main_mup2_pane_g4_ParamLimits

0xc08e,	// (0x0005db90) main_mup2_pane_g4

0xc08e,	// (0x0005db90) main_mup2_pane_g5_ParamLimits

0xc08e,	// (0x0005db90) main_mup2_pane_g5

0xc08e,	// (0x0005db90) main_mup2_pane_g6_ParamLimits

0xc08e,	// (0x0005db90) main_mup2_pane_g6

0xc08e,	// (0x0005db90) main_mup2_pane_g7_ParamLimits

0xc08e,	// (0x0005db90) main_mup2_pane_g7

0x0006,

0xf5aa,	// (0x000610ac) main_mup2_pane_g_ParamLimits

0xf5aa,	// (0x000610ac) main_mup2_pane_g

0xc09c,	// (0x0005db9e) main_mup2_pane_t1_ParamLimits

0xc09c,	// (0x0005db9e) main_mup2_pane_t1

0xc09c,	// (0x0005db9e) main_mup2_pane_t2_ParamLimits

0xc09c,	// (0x0005db9e) main_mup2_pane_t2

0xc09c,	// (0x0005db9e) main_mup2_pane_t3_ParamLimits

0xc09c,	// (0x0005db9e) main_mup2_pane_t3

0xc09c,	// (0x0005db9e) main_mup2_pane_t4_ParamLimits

0xc09c,	// (0x0005db9e) main_mup2_pane_t4

0xc09c,	// (0x0005db9e) main_mup2_pane_t5_ParamLimits

0xc09c,	// (0x0005db9e) main_mup2_pane_t5

0xc09c,	// (0x0005db9e) main_mup2_pane_t6_ParamLimits

0xc09c,	// (0x0005db9e) main_mup2_pane_t6

0x0005,

0xf5b9,	// (0x000610bb) main_mup2_pane_t_ParamLimits

0xf5b9,	// (0x000610bb) main_mup2_pane_t

0xe52b,	// (0x0006002d) mup2_visualizer_pane_ParamLimits

0xe52b,	// (0x0006002d) mup2_visualizer_pane

0xe52b,	// (0x0006002d) mup_progress_pane_cp_ParamLimits

0xe52b,	// (0x0006002d) mup_progress_pane_cp

0x6392,	// (0x00057e94) mup_volume_pane_cp_ParamLimits

0x6392,	// (0x00057e94) mup_volume_pane_cp

0xc072,	// (0x0005db74) mup2_visualizer_pane_g1_ParamLimits

0xc072,	// (0x0005db74) mup2_visualizer_pane_g1

0xc080,	// (0x0005db82) mup2_visualizer_pane_g2_ParamLimits

0xc080,	// (0x0005db82) mup2_visualizer_pane_g2

0xc080,	// (0x0005db82) mup2_visualizer_pane_g3_ParamLimits

0xc080,	// (0x0005db82) mup2_visualizer_pane_g3

0x0002,

0xf09f,	// (0x00060ba1) mup2_visualizer_pane_g_ParamLimits

0xf09f,	// (0x00060ba1) mup2_visualizer_pane_g

0xb971,	// (0x0005d473) aid_size_cell_fmradio

0x5f2a,	// (0x00057a2c) aid_height_parent_landcape

0xc410,	// (0x0005df12) wml_content_pane_cp

0xc418,	// (0x0005df1a) wml_tabs_pane

0xc421,	// (0x0005df23) popup_wml_miniature_window

0xc429,	// (0x0005df2b) scroll_pane_cp021

0xc43d,	// (0x0005df3f) wml_content_pane_comp8

0xbd8e,	// (0x0005d890) bg_popup_sub_pane_cp05

0xe583,	// (0x00060085) popup_wml_miniature_window_g1

0xe58b,	// (0x0006008d) wml_miniature_view_pane

0x62df,	// (0x00057de1) aid_size_wml_view

0x62e7,	// (0x00057de9) wml_miniature_view_pane_g1

0x62f0,	// (0x00057df2) wml_miniature_view_pane_g2

0x62f9,	// (0x00057dfb) wml_miniature_view_pane_g3

0x6301,	// (0x00057e03) wml_miniature_view_pane_g4

0x6309,	// (0x00057e0b) wml_miniature_view_pane_g5

0x6311,	// (0x00057e13) wml_miniature_view_pane_g6

0x6319,	// (0x00057e1b) wml_miniature_view_pane_g7

0x6321,	// (0x00057e23) wml_miniature_view_pane_g8

0x0007,

0xf5c6,	// (0x000610c8) wml_miniature_view_pane_g

0xe593,	// (0x00060095) background_graphic_ParamLimits

0xe593,	// (0x00060095) background_graphic

0xe59f,	// (0x000600a1) wml_tabs_2_pane

0xe5a8,	// (0x000600aa) wml_tabs_3_pane_ParamLimits

0xe5a8,	// (0x000600aa) wml_tabs_3_pane

0xe5ba,	// (0x000600bc) wml_tabs_4_pane_ParamLimits

0xe5ba,	// (0x000600bc) wml_tabs_4_pane

0xe5d0,	// (0x000600d2) wml_tabs_5_pane_ParamLimits

0xe5d0,	// (0x000600d2) wml_tabs_5_pane

0xe5ea,	// (0x000600ec) wml_tabs_pane_g2_ParamLimits

0xe5ea,	// (0x000600ec) wml_tabs_pane_g2

0xe5ff,	// (0x00060101) wml_tabs_pane_g3_ParamLimits

0xe5ff,	// (0x00060101) wml_tabs_pane_g3

0xe614,	// (0x00060116) wml_tabs_2_active_pane_ParamLimits

0xe614,	// (0x00060116) wml_tabs_2_active_pane

0xe614,	// (0x00060116) wml_tabs_2_passive_pane_ParamLimits

0xe614,	// (0x00060116) wml_tabs_2_passive_pane

0x6329,	// (0x00057e2b) wml_tabs_3_active_pane_cp_ParamLimits

0x6329,	// (0x00057e2b) wml_tabs_3_active_pane_cp

0x633a,	// (0x00057e3c) wml_tabs_3_passive_pane_ParamLimits

0x633a,	// (0x00057e3c) wml_tabs_3_passive_pane

0x634b,	// (0x00057e4d) wml_tabs_3_passive_pane_cp_ParamLimits

0x634b,	// (0x00057e4d) wml_tabs_3_passive_pane_cp

0x635c,	// (0x00057e5e) tabs_4_active_pane

0x6364,	// (0x00057e66) tabs_4_passive_pane

0x636c,	// (0x00057e6e) tabs_4_passive_pane_cp

0x6374,	// (0x00057e76) tabs_4_passive_pane_cp2

0x5d88,	// (0x0005788a) aid_height_text

0xe52b,	// (0x0006002d) mup_volume_cont_pane_ParamLimits

0xe52b,	// (0x0006002d) mup_volume_cont_pane

0xb971,	// (0x0005d473) aid_size_cell_pinb

0xb971,	// (0x0005d473) aid_size_list_pinb

0xe52b,	// (0x0006002d) mup2_volume_cont_pane_ParamLimits

0xe52b,	// (0x0006002d) mup2_volume_cont_pane

0x637c,	// (0x00057e7e) mup2_volume_cont_pane_g1_ParamLimits

0x637c,	// (0x00057e7e) mup2_volume_cont_pane_g1

0x32d1,	// (0x00054dd3) aid_size_cell_touch_ParamLimits

0x32d1,	// (0x00054dd3) aid_size_cell_touch

0x34f4,	// (0x00054ff6) touch_pane_ParamLimits

0x34f4,	// (0x00054ff6) touch_pane

0x34ea,	// (0x00054fec) main_rss2_pane

0xe62b,	// (0x0006012d) listscroll_rss2_pane

0xe634,	// (0x00060136) rss2_navigation_pane

0xe63c,	// (0x0006013e) list_rss2_pane

0xceb8,	// (0x0005e9ba) scroll_pane_cp22

0xe644,	// (0x00060146) rss2_navigation_pane_g1

0xe64d,	// (0x0006014f) rss2_navigation_pane_g2

0xe655,	// (0x00060157) rss2_navigation_pane_g3

0x0002,

0xf5d7,	// (0x000610d9) rss2_navigation_pane_g

0xe65d,	// (0x0006015f) rss2_navigation_pane_t1

0x63a8,	// (0x00057eaa) rss2_list_single_pane_ParamLimits

0x63a8,	// (0x00057eaa) rss2_list_single_pane

0xe66b,	// (0x0006016d) rss2_list_single_pane_t2

0xe679,	// (0x0006017b) rss2_list_single_pane_t3_ParamLimits

0xe679,	// (0x0006017b) rss2_list_single_pane_t3

0xe696,	// (0x00060198) rss2_list_single_pane_t4

0x504f,	// (0x00056b51) smil_status_pane_g1

0x5f41,	// (0x00057a43) main_image2_pane_ParamLimits

0x5f41,	// (0x00057a43) main_image2_pane

0xcdd3,	// (0x0005e8d5) main_camera2_pane_g9_ParamLimits

0xcdd3,	// (0x0005e8d5) main_camera2_pane_g9

0x6287,	// (0x00057d89) main_camera2_pane_t5_ParamLimits

0x6287,	// (0x00057d89) main_camera2_pane_t5

0x629b,	// (0x00057d9d) main_camera2_pane_t6_ParamLimits

0x629b,	// (0x00057d9d) main_camera2_pane_t6

0x63dc,	// (0x00057ede) main_image2_pane_g1_ParamLimits

0x63dc,	// (0x00057ede) main_image2_pane_g1

0x5aba,	// (0x000575bc) smil2_video_pane_ParamLimits

0x5aba,	// (0x000575bc) smil2_video_pane

0x3139,	// (0x00054c3b) aid_zoom_text_primary_cp

0x3485,	// (0x00054f87) popup_preview_fixed_window

0xc379,	// (0x0005de7b) im_reading_pane_g1

0x6279,	// (0x00057d7b) cams2_bc_adjust_pane_cp_ParamLimits

0x6279,	// (0x00057d7b) cams2_bc_adjust_pane_cp

0x34d0,	// (0x00054fd2) cams2_bc_adjust_pane_ParamLimits

0x34d0,	// (0x00054fd2) cams2_bc_adjust_pane

0x0e28,	// (0x0005292a) cams2_bc_adjust_pane_g1

0x34ea,	// (0x00054fec) cams2_slider_pane

0x0e28,	// (0x0005292a) cams2_slider_pane_g1

0x0e28,	// (0x0005292a) cams2_slider_pane_g2

0x0006,

0xf5de,	// (0x000610e0) cams2_slider_pane_g

0x35c5,	// (0x000550c7) calc_display_pane_ParamLimits

0x35e3,	// (0x000550e5) calc_paper_pane_ParamLimits

0x35ff,	// (0x00055101) grid_calc_pane_ParamLimits

0x526e,	// (0x00056d70) popup_clock_digital_window_t1_ParamLimits

0xd414,	// (0x0005ef16) main_image_pane_t1

0x35ab,	// (0x000550ad) aid_size_cell_calc_ParamLimits

0x35ab,	// (0x000550ad) aid_size_cell_calc

0x5f72,	// (0x00057a74) popup_blid_sat_info2_window_ParamLimits

0x5f72,	// (0x00057a74) popup_blid_sat_info2_window

0xe6a4,	// (0x000601a6) aid_size_cell_blid

0xe52b,	// (0x0006002d) bg_popup_window_pane_cp07

0xe6c1,	// (0x000601c3) grid_popup_blid_pane

0xe6cb,	// (0x000601cd) heading_pane_cp05_ParamLimits

0xe6cb,	// (0x000601cd) heading_pane_cp05

0xe7b7,	// (0x000602b9) cell_popup_blid_pane_ParamLimits

0xe7b7,	// (0x000602b9) cell_popup_blid_pane

0xe7db,	// (0x000602dd) cell_popup_blid_pane_g1

0xe7e3,	// (0x000602e5) cell_popup_blid_pane_t1

0xe52b,	// (0x0006002d) mup2_indicator_pane_ParamLimits

0xe52b,	// (0x0006002d) mup2_indicator_pane

0xb971,	// (0x0005d473) mup2_visualizer_osc_pane

0xe56d,	// (0x0006006f) mup2_visualizer_spec_pane_ParamLimits

0xe56d,	// (0x0006006f) mup2_visualizer_spec_pane

0xb971,	// (0x0005d473) mup2_spec_half_pane

0xb971,	// (0x0005d473) mup2_spec_half_pane_cp

0xe7f1,	// (0x000602f3) mup2_spec_bar_pane_ParamLimits

0xe7f1,	// (0x000602f3) mup2_spec_bar_pane

0xc0b0,	// (0x0005dbb2) mup2_spec_bar_pane_g1

0xe810,	// (0x00060312) mup2_spec_bar_pane_g2

0x0001,

0xf604,	// (0x00061106) mup2_spec_bar_pane_g

0xb971,	// (0x0005d473) mup2_osc_middle_pane

0xc0b0,	// (0x0005dbb2) mup2_visualizer_osc_pane_g1

0xb99b,	// (0x0005d49d) popup_number_entry_window_t1_ParamLimits

0xb9ae,	// (0x0005d4b0) popup_number_entry_window_t2_ParamLimits

0xb9c0,	// (0x0005d4c2) popup_number_entry_window_t3_ParamLimits

0x354b,	// (0x0005504d) popup_number_entry_window_t5_ParamLimits

0x354b,	// (0x0005504d) popup_number_entry_window_t5

0xf040,	// (0x00060b42) popup_number_entry_window_t_ParamLimits

0xb9d2,	// (0x0005d4d4) text_title_cp2_ParamLimits

0x57f0,	// (0x000572f2) aid_hotspot_pointer_text2_pane

0x587e,	// (0x00057380) main_viewer_pane_g9_ParamLimits

0x587e,	// (0x00057380) main_viewer_pane_g9

0xc5b2,	// (0x0005e0b4) cale_month_pane_t1_ParamLimits

0xc5ef,	// (0x0005e0f1) bg_cale_pane_ParamLimits

0xc607,	// (0x0005e109) list_cale_pane_ParamLimits

0xc618,	// (0x0005e11a) listscroll_cale_day_pane_t1

0xc62a,	// (0x0005e12c) scroll_pane_cp09_ParamLimits

0x551f,	// (0x00057021) main_mup_eq_pane_t1_ParamLimits

0x551f,	// (0x00057021) main_mup_eq_pane_t1

0x5539,	// (0x0005703b) main_mup_eq_pane_t2_ParamLimits

0x5539,	// (0x0005703b) main_mup_eq_pane_t2

0x5551,	// (0x00057053) main_mup_eq_pane_t3_ParamLimits

0x5551,	// (0x00057053) main_mup_eq_pane_t3

0x5569,	// (0x0005706b) main_mup_eq_pane_t4_ParamLimits

0x5569,	// (0x0005706b) main_mup_eq_pane_t4

0x5581,	// (0x00057083) main_mup_eq_pane_t5_ParamLimits

0x5581,	// (0x00057083) main_mup_eq_pane_t5

0x5599,	// (0x0005709b) main_mup_eq_pane_t6_ParamLimits

0x5599,	// (0x0005709b) main_mup_eq_pane_t6

0x55ad,	// (0x000570af) main_mup_eq_pane_t7_ParamLimits

0x55ad,	// (0x000570af) main_mup_eq_pane_t7

0x55c1,	// (0x000570c3) main_mup_eq_pane_t8_ParamLimits

0x55c1,	// (0x000570c3) main_mup_eq_pane_t8

0x55d7,	// (0x000570d9) main_mup_eq_pane_t9_ParamLimits

0x55d7,	// (0x000570d9) main_mup_eq_pane_t9

0x55ef,	// (0x000570f1) main_mup_eq_pane_t10_ParamLimits

0x55ef,	// (0x000570f1) main_mup_eq_pane_t10

0x0009,

0xf39f,	// (0x00060ea1) main_mup_eq_pane_t_ParamLimits

0xf39f,	// (0x00060ea1) main_mup_eq_pane_t

0x56ac,	// (0x000571ae) mup_equalizer_pane_cp5_ParamLimits

0x56c2,	// (0x000571c4) mup_equalizer_pane_cp6_ParamLimits

0x56da,	// (0x000571dc) mup_equalizer_pane_cp7_ParamLimits

0x34ea,	// (0x00054fec) main_gallery_pane

0xe4fd,	// (0x0005ffff) smil2_volume_pane

0xe505,	// (0x00060007) smil_status_volume_pane_g1_ParamLimits

0xe518,	// (0x0006001a) smil_status_volume_pane_g2_ParamLimits

0x612c,	// (0x00057c2e) smil_status_volume_pane_g3_ParamLimits

0xf55d,	// (0x0006105f) smil_status_volume_pane_g_ParamLimits

0xe52b,	// (0x0006002d) bg_popup_window_pane_cp07_ParamLimits

0xe6ac,	// (0x000601ae) blid_firmament_pane

0xc064,	// (0x0005db66) aid_size_cell_gallery_ParamLimits

0xc064,	// (0x0005db66) aid_size_cell_gallery

0xc064,	// (0x0005db66) grid_gallery_pane_ParamLimits

0xc064,	// (0x0005db66) grid_gallery_pane

0xd30e,	// (0x0005ee10) cell_gallery_pane_ParamLimits

0xd30e,	// (0x0005ee10) cell_gallery_pane

0xc00b,	// (0x0005db0d) bg_cell_gallery_focus_pane_ParamLimits

0xc00b,	// (0x0005db0d) bg_cell_gallery_focus_pane

0xc072,	// (0x0005db74) cell_gallery_pane_g1_ParamLimits

0xc072,	// (0x0005db74) cell_gallery_pane_g1

0xc072,	// (0x0005db74) cell_gallery_pane_g2_ParamLimits

0xc072,	// (0x0005db74) cell_gallery_pane_g2

0xc072,	// (0x0005db74) cell_gallery_pane_g3_ParamLimits

0xc072,	// (0x0005db74) cell_gallery_pane_g3

0xc080,	// (0x0005db82) cell_gallery_pane_g4_ParamLimits

0xc080,	// (0x0005db82) cell_gallery_pane_g4

0x0003,

0xf609,	// (0x0006110b) cell_gallery_pane_g_ParamLimits

0xf609,	// (0x0006110b) cell_gallery_pane_g

0xe81a,	// (0x0006031c) bg_cell_gallery_focus_pane_g1

0xe822,	// (0x00060324) bg_cell_gallery_focus_pane_g2

0xe82a,	// (0x0006032c) bg_cell_gallery_focus_pane_g3

0xe832,	// (0x00060334) bg_cell_gallery_focus_pane_g4

0xe83a,	// (0x0006033c) bg_cell_gallery_focus_pane_g5

0xe842,	// (0x00060344) bg_cell_gallery_focus_pane_g6

0xe84a,	// (0x0006034c) bg_cell_gallery_focus_pane_g7

0xe852,	// (0x00060354) bg_cell_gallery_focus_pane_g8

0x0007,

0xf612,	// (0x00061114) bg_cell_gallery_focus_pane_g

0xe85a,	// (0x0006035c) aid_firma_cardinal

0xe86e,	// (0x00060370) blid_firmament_pane_t1

0xe885,	// (0x00060387) blid_firmament_pane_t2

0xe89c,	// (0x0006039e) blid_firmament_pane_t3

0xe8b3,	// (0x000603b5) blid_firmament_pane_t4

0x0003,

0xf623,	// (0x00061125) blid_firmament_pane_t

0xe8ca,	// (0x000603cc) blid_sat_info_pane

0xc0b0,	// (0x0005dbb2) blid_sat_info_pane_g1

0xc0b0,	// (0x0005dbb2) blid_sat_info_pane_g2

0x0001,

0xf0af,	// (0x00060bb1) blid_sat_info_pane_g

0xe8da,	// (0x000603dc) blid_sat_info_pane_t1

0xe8e8,	// (0x000603ea) smil2_volume_content_pane

0xe8f1,	// (0x000603f3) smil2_volume_pane_g1

0xc8d7,	// (0x0005e3d9) smil2_volume_content_pane_g1

0xe8f9,	// (0x000603fb) smil2_volume_content_pane_g2

0xe902,	// (0x00060404) smil2_volume_content_pane_g3

0xe90b,	// (0x0006040d) smil2_volume_content_pane_g4

0xe914,	// (0x00060416) smil2_volume_content_pane_g5

0xe91d,	// (0x0006041f) smil2_volume_content_pane_g6

0xe926,	// (0x00060428) smil2_volume_content_pane_g7

0xe92f,	// (0x00060431) smil2_volume_content_pane_g8

0xe938,	// (0x0006043a) smil2_volume_content_pane_g9

0xe941,	// (0x00060443) smil2_volume_content_pane_g10

0x0009,

0xf62c,	// (0x0006112e) smil2_volume_content_pane_g

0x3b39,	// (0x0005563b) cale_week_day_heading_pane_t1_ParamLimits

0x3b54,	// (0x00055656) cale_week_day_heading_pane_t2_ParamLimits

0x3b6f,	// (0x00055671) cale_week_day_heading_pane_t3_ParamLimits

0x3b8a,	// (0x0005568c) cale_week_day_heading_pane_t4_ParamLimits

0x3ba5,	// (0x000556a7) cale_week_day_heading_pane_t5_ParamLimits

0x3bc0,	// (0x000556c2) cale_week_day_heading_pane_t6_ParamLimits

0x3bdb,	// (0x000556dd) cale_week_day_heading_pane_t7_ParamLimits

0xf147,	// (0x00060c49) cale_week_day_heading_pane_t_ParamLimits

0xc26e,	// (0x0005dd70) bg_cale_side_pane_ParamLimits

0x3bf6,	// (0x000556f8) cale_week_time_pane_t1_ParamLimits

0x3c10,	// (0x00055712) cale_week_time_pane_t2_ParamLimits

0x3c2a,	// (0x0005572c) cale_week_time_pane_t3_ParamLimits

0x3c44,	// (0x00055746) cale_week_time_pane_t4_ParamLimits

0x3c5e,	// (0x00055760) cale_week_time_pane_t5_ParamLimits

0x3c78,	// (0x0005577a) cale_week_time_pane_t6_ParamLimits

0x3c98,	// (0x0005579a) cale_week_time_pane_t7_ParamLimits

0x3cba,	// (0x000557bc) cale_week_time_pane_t8_ParamLimits

0xf156,	// (0x00060c58) cale_week_time_pane_t_ParamLimits

0x3cde,	// (0x000557e0) cell_cale_week_pane_g2_ParamLimits

0xc26e,	// (0x0005dd70) bg_cale_side_pane_cp01_ParamLimits

0x4e3e,	// (0x00056940) cale_month_week_pane_t1_ParamLimits

0x4e57,	// (0x00056959) cale_month_week_pane_t2_ParamLimits

0x4e70,	// (0x00056972) cale_month_week_pane_t3_ParamLimits

0x4e89,	// (0x0005698b) cale_month_week_pane_t4_ParamLimits

0x4ea4,	// (0x000569a6) cale_month_week_pane_t5_ParamLimits

0x4ec5,	// (0x000569c7) cale_month_week_pane_t6_ParamLimits

0xf224,	// (0x00060d26) cale_month_week_pane_t_ParamLimits

0x500c,	// (0x00056b0e) cell_cale_month_pane_g1_ParamLimits

0x34ea,	// (0x00054fec) main_cale_event_viewer_pane

0xb971,	// (0x0005d473) listscroll_cale_event_viewer_pane

0xe94a,	// (0x0006044c) list_cale_ev_pane

0xe952,	// (0x00060454) scroll_pane_cp023

0xe95e,	// (0x00060460) field_cale_ev_pane_ParamLimits

0xe95e,	// (0x00060460) field_cale_ev_pane

0xe97c,	// (0x0006047e) field_cale_ev_content_pane_ParamLimits

0xe97c,	// (0x0006047e) field_cale_ev_content_pane

0xe988,	// (0x0006048a) field_cale_ev_pane_g1_ParamLimits

0xe988,	// (0x0006048a) field_cale_ev_pane_g1

0xe994,	// (0x00060496) field_cale_ev_pane_g2_ParamLimits

0xe994,	// (0x00060496) field_cale_ev_pane_g2

0xe9ac,	// (0x000604ae) field_cale_ev_pane_g3_ParamLimits

0xe9ac,	// (0x000604ae) field_cale_ev_pane_g3

0x0002,

0xf641,	// (0x00061143) field_cale_ev_pane_g_ParamLimits

0xf641,	// (0x00061143) field_cale_ev_pane_g

0xe9c4,	// (0x000604c6) field_cale_ev_pane_t1_ParamLimits

0xe9c4,	// (0x000604c6) field_cale_ev_pane_t1

0xe9db,	// (0x000604dd) field_cale_ev_content_pane_t1_ParamLimits

0xe9db,	// (0x000604dd) field_cale_ev_content_pane_t1

0xd240,	// (0x0005ed42) bg_button_pane_cp01

0x38c4,	// (0x000553c6) listscroll_cale_week_pane_ParamLimits

0xc219,	// (0x0005dd1b) popup_toolbar_window_cp01

0xc23f,	// (0x0005dd41) listscroll_cale_week_pane_t1_ParamLimits

0x38c4,	// (0x000553c6) listscroll_cale_day_pane_ParamLimits

0xc219,	// (0x0005dd1b) popup_toolbar_window_cp02

0xc618,	// (0x0005e11a) listscroll_cale_day_pane_t1_ParamLimits

0x38c4,	// (0x000553c6) main_cale_month_pane_ParamLimits

0x6075,	// (0x00057b77) popup_toolbar_window_cp03_ParamLimits

0x6075,	// (0x00057b77) popup_toolbar_window_cp03

0x59d0,	// (0x000574d2) main_image_pane_g2_ParamLimits

0x59d0,	// (0x000574d2) main_image_pane_g2

0x59dc,	// (0x000574de) main_image_pane_g3_ParamLimits

0x59dc,	// (0x000574de) main_image_pane_g3

0x0002,

0xf431,	// (0x00060f33) main_image_pane_g_ParamLimits

0xf431,	// (0x00060f33) main_image_pane_g

0xd414,	// (0x0005ef16) main_image_pane_t1_ParamLimits

0x59e8,	// (0x000574ea) main_image_pane_t2_ParamLimits

0x59e8,	// (0x000574ea) main_image_pane_t2

0x59fa,	// (0x000574fc) main_image_pane_t3_ParamLimits

0x59fa,	// (0x000574fc) main_image_pane_t3

0x5a0c,	// (0x0005750e) main_image_pane_t4_ParamLimits

0x5a0c,	// (0x0005750e) main_image_pane_t4

0x0003,

0xf438,	// (0x00060f3a) main_image_pane_t_ParamLimits

0xf438,	// (0x00060f3a) main_image_pane_t

0x5a1e,	// (0x00057520) popup_image_details_window_cp01

0x5a28,	// (0x0005752a) popup_toobar_trans_pane_cp01_ParamLimits

0x5a28,	// (0x0005752a) popup_toobar_trans_pane_cp01

0x5fc5,	// (0x00057ac7) popup_image_details_window_ParamLimits

0x5fc5,	// (0x00057ac7) popup_image_details_window

0x5fd3,	// (0x00057ad5) popup_image_focus_window

0x34d0,	// (0x00054fd2) camera2_autofocus_pane_ParamLimits

0x34d0,	// (0x00054fd2) camera2_autofocus_pane

0xb971,	// (0x0005d473) bg_popup_sub_pane_cp06

0xe9f9,	// (0x000604fb) popup_image_focus_window_g1

0xea01,	// (0x00060503) popup_image_focus_window_g2

0xea09,	// (0x0006050b) popup_image_focus_window_g3

0xea11,	// (0x00060513) popup_image_focus_window_g4

0x0003,

0xf648,	// (0x0006114a) popup_image_focus_window_g

0xea19,	// (0x0006051b) popup_image_focus_window_t1

0xea27,	// (0x00060529) popup_image_focus_window_t2

0xea37,	// (0x00060539) popup_image_focus_window_t3

0x0002,

0xf651,	// (0x00061153) popup_image_focus_window_t

0xc072,	// (0x0005db74) camera2_autofocus_pane_g1

0xc00b,	// (0x0005db0d) bg_tb_trans_pane_cp01

0xea45,	// (0x00060547) popup_image_details_window_g1

0xea58,	// (0x0006055a) popup_image_details_window_g2

0x0002,

0xf663,	// (0x00061165) popup_image_details_window_g

0xea81,	// (0x00060583) popup_image_details_window_t1

0xea93,	// (0x00060595) popup_image_details_window_t2

0xeaac,	// (0x000605ae) popup_image_details_window_t3

0xeac0,	// (0x000605c2) popup_image_details_window_t4

0xeadb,	// (0x000605dd) popup_image_details_window_t5

0x0004,

0xf66a,	// (0x0006116c) popup_image_details_window_t

0xc0fa,	// (0x0005dbfc) bg_calc_paper_pane_ParamLimits

0x34ea,	// (0x00054fec) grid_highlight_pane_cp013

0x363a,	// (0x0005513c) list_calc_pane_ParamLimits

0x364c,	// (0x0005514e) scroll_pane_cp024

0xc10e,	// (0x0005dc10) bg_calc_display_pane_ParamLimits

0x3654,	// (0x00055156) calc_display_pane_t1_ParamLimits

0x3669,	// (0x0005516b) calc_display_pane_t2_ParamLimits

0x367e,	// (0x00055180) calc_display_pane_t3_ParamLimits

0xf0c7,	// (0x00060bc9) calc_display_pane_t_ParamLimits

0x3758,	// (0x0005525a) cell_calc_pane_g2

0x0001,

0xf0e4,	// (0x00060be6) cell_calc_pane_g

0x3761,	// (0x00055263) cell_calc_pane_t1

0xc163,	// (0x0005dc65) grid_highlight_pane_cp02_ParamLimits

0xc179,	// (0x0005dc7b) toolbar_button_pane_cp01_ParamLimits

0xc179,	// (0x0005dc7b) toolbar_button_pane_cp01

0xd459,	// (0x0005ef5b) temp_image_control_pane_ParamLimits

0xd459,	// (0x0005ef5b) temp_image_control_pane

0x5f41,	// (0x00057a43) main_mp3_pane

0xeaf5,	// (0x000605f7) temp_image_control_pane_g1_ParamLimits

0xeaf5,	// (0x000605f7) temp_image_control_pane_g1

0xeb03,	// (0x00060605) temp_image_control_pane_g2_ParamLimits

0xeb03,	// (0x00060605) temp_image_control_pane_g2

0xeb15,	// (0x00060617) temp_image_control_pane_g3_ParamLimits

0xeb15,	// (0x00060617) temp_image_control_pane_g3

0x63e8,	// (0x00057eea) temp_image_control_pane_g4_ParamLimits

0x63e8,	// (0x00057eea) temp_image_control_pane_g4

0x0003,

0xf675,	// (0x00061177) temp_image_control_pane_g_ParamLimits

0xf675,	// (0x00061177) temp_image_control_pane_g

0xeaf5,	// (0x000605f7) main_mp3_pane_g1

0x63f9,	// (0x00057efb) main_mp3_pane_g2

0x0007,

0xf67e,	// (0x00061180) main_mp3_pane_g

0xeb4a,	// (0x0006064c) main_mp3_pane_t1

0xc080,	// (0x0005db82) main_camera_pane_g8_ParamLimits

0xc080,	// (0x0005db82) main_camera_pane_g8

0x3e85,	// (0x00055987) main_video_pane_g7_ParamLimits

0x3e85,	// (0x00055987) main_video_pane_g7

0x6287,	// (0x00057d89) main_camera2_pane_t7_ParamLimits

0x6287,	// (0x00057d89) main_camera2_pane_t7

0xc3d0,	// (0x0005ded2) scroll_pane_cp025_ParamLimits

0xc3d0,	// (0x0005ded2) scroll_pane_cp025

0xc3e4,	// (0x0005dee6) scroll_pane_cp026_ParamLimits

0xc3e4,	// (0x0005dee6) scroll_pane_cp026

0xc3f3,	// (0x0005def5) wml_content_pane_ParamLimits

0x34ea,	// (0x00054fec) main_touch_calib_pane

0x649d,	// (0x00057f9f) main_touch_calib_pane_g1

0x64a9,	// (0x00057fab) main_touch_calib_pane_g2

0x64b5,	// (0x00057fb7) main_touch_calib_pane_g3

0x64c1,	// (0x00057fc3) main_touch_calib_pane_g4

0x0003,

0xf69c,	// (0x0006119e) main_touch_calib_pane_g

0x64cd,	// (0x00057fcf) main_touch_calib_pane_t1

0x64e6,	// (0x00057fe8) main_touch_calib_pane_t2

0x0004,

0xf6a5,	// (0x000611a7) main_touch_calib_pane_t

0xcf87,	// (0x0005ea89) mup_progress_pane_cp02

0xcfbc,	// (0x0005eabe) navi_pane_g1

0xd077,	// (0x0005eb79) navi_pane_mp_t3

0x5f41,	// (0x00057a43) main_mp3_pane_ParamLimits

0x60b2,	// (0x00057bb4) navi_pane_ParamLimits

0xeaf5,	// (0x000605f7) main_mp3_pane_g1_ParamLimits

0x63f9,	// (0x00057efb) main_mp3_pane_g2_ParamLimits

0x6405,	// (0x00057f07) main_mp3_pane_g3_ParamLimits

0x6405,	// (0x00057f07) main_mp3_pane_g3

0x6411,	// (0x00057f13) main_mp3_pane_g4_ParamLimits

0x6411,	// (0x00057f13) main_mp3_pane_g4

0xc072,	// (0x0005db74) main_mp3_pane_g5_ParamLimits

0xc072,	// (0x0005db74) main_mp3_pane_g5

0xeb25,	// (0x00060627) main_mp3_pane_g6_ParamLimits

0xeb25,	// (0x00060627) main_mp3_pane_g6

0xeb32,	// (0x00060634) main_mp3_pane_g7_ParamLimits

0xeb32,	// (0x00060634) main_mp3_pane_g7

0xeb3e,	// (0x00060640) main_mp3_pane_g8_ParamLimits

0xeb3e,	// (0x00060640) main_mp3_pane_g8

0xf67e,	// (0x00061180) main_mp3_pane_g_ParamLimits

0x641d,	// (0x00057f1f) main_mp3_pane_t2

0x642d,	// (0x00057f2f) main_mp3_pane_t3

0xeb58,	// (0x0006065a) main_mp3_pane_t4

0xeb66,	// (0x00060668) main_mp3_pane_t5

0x0005,

0xf68f,	// (0x00061191) main_mp3_pane_t

0xeb74,	// (0x00060676) mup_progress_pane_cp01

0x3139,	// (0x00054c3b) aid_zoom_text_secondary2

0xe94a,	// (0x0006044c) list_cale_ev2_pane

0xe952,	// (0x00060454) scroll_pane_cp023_ParamLimits

0x6541,	// (0x00058043) field_cale_ev2_pane_ParamLimits

0x6541,	// (0x00058043) field_cale_ev2_pane

0xeb7c,	// (0x0006067e) field_cale_ev2_pane_g1_ParamLimits

0xeb7c,	// (0x0006067e) field_cale_ev2_pane_g1

0xeb88,	// (0x0006068a) field_cale_ev2_pane_g2_ParamLimits

0xeb88,	// (0x0006068a) field_cale_ev2_pane_g2

0xeba0,	// (0x000606a2) field_cale_ev2_pane_g3_ParamLimits

0xeba0,	// (0x000606a2) field_cale_ev2_pane_g3

0x0003,

0xf6b0,	// (0x000611b2) field_cale_ev2_pane_g_ParamLimits

0xf6b0,	// (0x000611b2) field_cale_ev2_pane_g

0xebc4,	// (0x000606c6) field_cale_ev2_pane_t1_ParamLimits

0xebc4,	// (0x000606c6) field_cale_ev2_pane_t1

0xebdb,	// (0x000606dd) field_cale_ev2_pane_t2_ParamLimits

0xebdb,	// (0x000606dd) field_cale_ev2_pane_t2

0x0001,

0xf6b9,	// (0x000611bb) field_cale_ev2_pane_t_ParamLimits

0xf6b9,	// (0x000611bb) field_cale_ev2_pane_t

0x58e6,	// (0x000573e8) main_postcard_pane_g5_ParamLimits

0x58e6,	// (0x000573e8) main_postcard_pane_g5

0x58f4,	// (0x000573f6) main_postcard_pane_g6_ParamLimits

0x58f4,	// (0x000573f6) main_postcard_pane_g6

0xc064,	// (0x0005db66) camera2_autofocus_pane_cp_ParamLimits

0xc064,	// (0x0005db66) camera2_autofocus_pane_cp

0x5f41,	// (0x00057a43) main_mup3_pane

0x65aa,	// (0x000580ac) main_mup3_pane_g1_ParamLimits

0x65aa,	// (0x000580ac) main_mup3_pane_g1

0x65cb,	// (0x000580cd) main_mup3_pane_g2_ParamLimits

0x65cb,	// (0x000580cd) main_mup3_pane_g2

0x6645,	// (0x00058147) main_mup3_pane_g3_ParamLimits

0x6645,	// (0x00058147) main_mup3_pane_g3

0x6688,	// (0x0005818a) main_mup3_pane_g4_ParamLimits

0x6688,	// (0x0005818a) main_mup3_pane_g4

0x66cb,	// (0x000581cd) main_mup3_pane_g5_ParamLimits

0x66cb,	// (0x000581cd) main_mup3_pane_g5

0x670e,	// (0x00058210) main_mup3_pane_g6_ParamLimits

0x670e,	// (0x00058210) main_mup3_pane_g6

0xc080,	// (0x0005db82) main_mup3_pane_g7_ParamLimits

0xc080,	// (0x0005db82) main_mup3_pane_g7

0x0007,

0xf6c9,	// (0x000611cb) main_mup3_pane_g_ParamLimits

0xf6c9,	// (0x000611cb) main_mup3_pane_g

0x6784,	// (0x00058286) main_mup3_pane_t1_ParamLimits

0x6784,	// (0x00058286) main_mup3_pane_t1

0x67f3,	// (0x000582f5) main_mup3_pane_t2_ParamLimits

0x67f3,	// (0x000582f5) main_mup3_pane_t2

0x68bc,	// (0x000583be) main_mup3_pane_t4_ParamLimits

0x68bc,	// (0x000583be) main_mup3_pane_t4

0x690a,	// (0x0005840c) main_mup3_pane_t5_ParamLimits

0x690a,	// (0x0005840c) main_mup3_pane_t5

0x69ba,	// (0x000584bc) main_mup3_pane_t6_ParamLimits

0x69ba,	// (0x000584bc) main_mup3_pane_t6

0x0005,

0xf6da,	// (0x000611dc) main_mup3_pane_t_ParamLimits

0xf6da,	// (0x000611dc) main_mup3_pane_t

0x6a66,	// (0x00058568) mup3_progress_pane_ParamLimits

0x6a66,	// (0x00058568) mup3_progress_pane

0x6ada,	// (0x000585dc) popup_mup3_control_window_ParamLimits

0x6ada,	// (0x000585dc) popup_mup3_control_window

0xebf0,	// (0x000606f2) popup_mup3_text_window

0x6af3,	// (0x000585f5) mup3_progress_pane_t1

0x6b12,	// (0x00058614) mup3_progress_pane_t2

0xebf8,	// (0x000606fa) mup3_progress_pane_t3

0x0002,

0xf6e7,	// (0x000611e9) mup3_progress_pane_t

0xec15,	// (0x00060717) mup_progress_pane_cp03

0xb971,	// (0x0005d473) bg_tb_trans_pane_cp04

0x6b31,	// (0x00058633) mup3_volume_pane

0x6b39,	// (0x0005863b) popup_mup3_control_window_g1

0x6b42,	// (0x00058644) mup3_volume_pane_g1

0x6b4b,	// (0x0005864d) mup3_volume_pane_g2

0x6b54,	// (0x00058656) mup3_volume_pane_g3

0x0002,

0xf6ee,	// (0x000611f0) mup3_volume_pane_g

0xb971,	// (0x0005d473) bg_tb_trans_pane_cp03

0xec25,	// (0x00060727) popup_mup3_text_window_g1

0xec2d,	// (0x0006072f) popup_mup3_text_window_t1

0xc156,	// (0x0005dc58) list_calc_item_pane_g1_ParamLimits

0xe622,	// (0x00060124) mup_volume_pane_cp_g1

0x64ff,	// (0x00058001) main_touch_calib_pane_t3

0x6515,	// (0x00058017) main_touch_calib_pane_t4

0x652b,	// (0x0005802d) main_touch_calib_pane_t5

0x32bd,	// (0x00054dbf) aid_cell_size_toolbar2

0x32c5,	// (0x00054dc7) aid_popup3_width_pane

0x3131,	// (0x00054c33) aid_zoom_text_msg_primary

0x3d87,	// (0x00055889) vorec_t7

0xc11a,	// (0x0005dc1c) bg_calc_paper_pane_g1_ParamLimits

0xc126,	// (0x0005dc28) bg_calc_paper_pane_g2_ParamLimits

0xc132,	// (0x0005dc34) bg_calc_paper_pane_g3_ParamLimits

0xc13e,	// (0x0005dc40) bg_calc_paper_pane_g4_ParamLimits

0xc14a,	// (0x0005dc4c) bg_calc_paper_pane_g5_ParamLimits

0x36bd,	// (0x000551bf) bg_calc_paper_pane_g6_ParamLimits

0x36ce,	// (0x000551d0) bg_calc_paper_pane_g7_ParamLimits

0x36df,	// (0x000551e1) bg_calc_paper_pane_g8_ParamLimits

0xf0ce,	// (0x00060bd0) bg_calc_paper_pane_g_ParamLimits

0x36f0,	// (0x000551f2) calc_bg_paper_pane_g9_ParamLimits

0xc064,	// (0x0005db66) image_qvga_pane_ParamLimits

0xc064,	// (0x0005db66) image_qvga_pane

0xbfe9,	// (0x0005daeb) bg_popup_sub_pane_cp04_ParamLimits

0xd390,	// (0x0005ee92) popup_mup_playback_window_g1_ParamLimits

0xd39c,	// (0x0005ee9e) popup_mup_playback_window_t1_ParamLimits

0xd3b1,	// (0x0005eeb3) popup_mup_playback_window_t2_ParamLimits

0xf42c,	// (0x00060f2e) popup_mup_playback_window_t_ParamLimits

0xc072,	// (0x0005db74) main_mup2_pane_g3_ParamLimits

0xc072,	// (0x0005db74) main_mup2_pane_g3

0x4046,	// (0x00055b48) popup_toolbar_window_cp04

0xd735,	// (0x0005f237) popup_call2_audio_second_window_g3_ParamLimits

0xd735,	// (0x0005f237) popup_call2_audio_second_window_g3

0xdb4d,	// (0x0005f64f) popup_call2_audio_first_window_g4_ParamLimits

0xdb4d,	// (0x0005f64f) popup_call2_audio_first_window_g4

0xe174,	// (0x0005fc76) popup_call2_audio_in_window_g4_ParamLimits

0xe174,	// (0x0005fc76) popup_call2_audio_in_window_g4

0x59c3,	// (0x000574c5) aid_area_sk_bg_cut_ParamLimits

0x59c3,	// (0x000574c5) aid_area_sk_bg_cut

0xd3c6,	// (0x0005eec8) aid_area_sk_bg_cut_2_ParamLimits

0xd3c6,	// (0x0005eec8) aid_area_sk_bg_cut_2

0xb971,	// (0x0005d473) aid_placing_details_win

0xb971,	// (0x0005d473) aid_placing_details_win_2

0xc072,	// (0x0005db74) camera2_autofocus_pane_g1_ParamLimits

0x3476,	// (0x00054f78) popup_fixed_preview_cale_window_ParamLimits

0x3476,	// (0x00054f78) popup_fixed_preview_cale_window

0xd0f5,	// (0x0005ebf7) navi_slider_pane_g3

0xd0fe,	// (0x0005ec00) navi_slider_pane_g4

0xd107,	// (0x0005ec09) navi_slider_pane_g5

0xd0f5,	// (0x0005ebf7) navi_slider_pane_g6

0x54f3,	// (0x00056ff5) navi_slider_pane_g7

0xd205,	// (0x0005ed07) mup_scale_pane_g3

0xd20e,	// (0x0005ed10) mup_scale_pane_g4

0xd217,	// (0x0005ed19) mup_scale_pane_g5

0x56f2,	// (0x000571f4) mup_scale_pane_g6

0x56fb,	// (0x000571fd) mup_scale_pane_g7

0x0e28,	// (0x0005292a) cams2_slider_pane_g3

0x0e28,	// (0x0005292a) cams2_slider_pane_g4

0x0e28,	// (0x0005292a) cams2_slider_pane_g5

0x0e28,	// (0x0005292a) cams2_slider_pane_g6

0x0e28,	// (0x0005292a) cams2_slider_pane_g7

0xc0b0,	// (0x0005dbb2) camera2_autofocus_pane_cp_g1

0xe484,	// (0x0005ff86) bg_popup_preview_window_pane_cp02_ParamLimits

0xe484,	// (0x0005ff86) bg_popup_preview_window_pane_cp02

0xec3b,	// (0x0006073d) list_fp_cale_pane_ParamLimits

0xec3b,	// (0x0006073d) list_fp_cale_pane

0xec47,	// (0x00060749) popup_fixed_preview_cale_window_t1_ParamLimits

0xec47,	// (0x00060749) popup_fixed_preview_cale_window_t1

0x6b5d,	// (0x0005865f) popup_fixed_preview_cale_window_t2_ParamLimits

0x6b5d,	// (0x0005865f) popup_fixed_preview_cale_window_t2

0x6b72,	// (0x00058674) popup_fixed_preview_cale_window_t3_ParamLimits

0x6b72,	// (0x00058674) popup_fixed_preview_cale_window_t3

0x0002,

0xf6f5,	// (0x000611f7) popup_fixed_preview_cale_window_t_ParamLimits

0xf6f5,	// (0x000611f7) popup_fixed_preview_cale_window_t

0x6b87,	// (0x00058689) list_single_fp_cale_pane_ParamLimits

0x6b87,	// (0x00058689) list_single_fp_cale_pane

0xec65,	// (0x00060767) list_single_fp_cale_pane_g1_ParamLimits

0xec65,	// (0x00060767) list_single_fp_cale_pane_g1

0xec71,	// (0x00060773) list_single_fp_cale_pane_g2_ParamLimits

0xec71,	// (0x00060773) list_single_fp_cale_pane_g2

0x0002,

0xf6fc,	// (0x000611fe) list_single_fp_cale_pane_g_ParamLimits

0xf6fc,	// (0x000611fe) list_single_fp_cale_pane_g

0xec8a,	// (0x0006078c) list_single_fp_cale_pane_t1_ParamLimits

0xec8a,	// (0x0006078c) list_single_fp_cale_pane_t1

0xec9c,	// (0x0006079e) list_single_fp_cale_pane_t2_ParamLimits

0xec9c,	// (0x0006079e) list_single_fp_cale_pane_t2

0x0001,

0xf703,	// (0x00061205) list_single_fp_cale_pane_t_ParamLimits

0xf703,	// (0x00061205) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x34ea,	// (0x00054fec) main_dialer_pane

0xb971,	// (0x0005d473) aid_cell_size_keypad

0xb971,	// (0x0005d473) dialer_ne_pane

0xb971,	// (0x0005d473) grid_dialer_command_1_pane

0xb971,	// (0x0005d473) grid_dialer_command_2_pane

0xb971,	// (0x0005d473) grid_dialer_keypad_pane

0xe52b,	// (0x0006002d) bg_popup_call_pane_cp06_ParamLimits

0xe52b,	// (0x0006002d) bg_popup_call_pane_cp06

0xe52b,	// (0x0006002d) dialer_ne_clear_pane_ParamLimits

0xe52b,	// (0x0006002d) dialer_ne_clear_pane

0xc0b0,	// (0x0005dbb2) dialer_ne_pane_g1

0xc0ce,	// (0x0005dbd0) dialer_ne_pane_t1_ParamLimits

0xc0ce,	// (0x0005dbd0) dialer_ne_pane_t1

0xedf8,	// (0x000608fa) dialer_ne_pane_t2_ParamLimits

0xedf8,	// (0x000608fa) dialer_ne_pane_t2

0x6b9a,	// (0x0005869c) dialer_ne_pane_t3_ParamLimits

0x6b9a,	// (0x0005869c) dialer_ne_pane_t3

0x0002,

0xf708,	// (0x0006120a) dialer_ne_pane_t_ParamLimits

0xf708,	// (0x0006120a) dialer_ne_pane_t

0x6b9a,	// (0x0005869c) dialer_ne_pane_t3_copy1_ParamLimits

0x6b9a,	// (0x0005869c) dialer_ne_pane_t3_copy1

0xeccf,	// (0x000607d1) cell_dialer_keypad_pane_ParamLimits

0xeccf,	// (0x000607d1) cell_dialer_keypad_pane

0xc00b,	// (0x0005db0d) cell_dialer_command_1_pane_ParamLimits

0xc00b,	// (0x0005db0d) cell_dialer_command_1_pane

0xece6,	// (0x000607e8) cell_dialer_command_2_pane_ParamLimits

0xece6,	// (0x000607e8) cell_dialer_command_2_pane

0xc00b,	// (0x0005db0d) bg_button_pane_cp02_ParamLimits

0xc00b,	// (0x0005db0d) bg_button_pane_cp02

0xc072,	// (0x0005db74) cell_dialer_keypad_pane_g1_ParamLimits

0xc072,	// (0x0005db74) cell_dialer_keypad_pane_g1

0xc00b,	// (0x0005db0d) bg_button_pane_cp03_ParamLimits

0xc00b,	// (0x0005db0d) bg_button_pane_cp03

0xc072,	// (0x0005db74) cell_dialer_command_1_pane_g1_ParamLimits

0xc072,	// (0x0005db74) cell_dialer_command_1_pane_g1

0xb971,	// (0x0005d473) bg_button_pane_cp04

0xc0b0,	// (0x0005dbb2) cell_dialer_command_2_pane_g1

0xb971,	// (0x0005d473) bg_button_pane_cp06

0xc0b0,	// (0x0005dbb2) dialer_ne_clear_pane_g1

0xcfc8,	// (0x0005eaca) navi_pane_g2

0xcff6,	// (0x0005eaf8) navi_pane_g3

0x0002,

0xf334,	// (0x00060e36) navi_pane_g

0xd085,	// (0x0005eb87) navi_pane_mv_g2

0xd0ac,	// (0x0005ebae) navi_pane_mv_g5

0x54be,	// (0x00056fc0) navi_pane_mv_t1

0xc10e,	// (0x0005dc10) main_clock2_pane

0xc064,	// (0x0005db66) main_clock2_list_pane_ParamLimits

0xc064,	// (0x0005db66) main_clock2_list_pane

0x6c10,	// (0x00058712) main_clock2_pane_t1_ParamLimits

0x6c10,	// (0x00058712) main_clock2_pane_t1

0x6c3e,	// (0x00058740) main_clock2_pane_t2_ParamLimits

0x6c3e,	// (0x00058740) main_clock2_pane_t2

0x0004,

0xf714,	// (0x00061216) main_clock2_pane_t_ParamLimits

0xf714,	// (0x00061216) main_clock2_pane_t

0x6ca3,	// (0x000587a5) popup_clock_analogue_window_cp03_ParamLimits

0x6ca3,	// (0x000587a5) popup_clock_analogue_window_cp03

0x6cc1,	// (0x000587c3) popup_clock_digital_window_cp02_ParamLimits

0x6cc1,	// (0x000587c3) popup_clock_digital_window_cp02

0x6d36,	// (0x00058838) main_clock2_list_single_pane_ParamLimits

0x6d36,	// (0x00058838) main_clock2_list_single_pane

0xc2c0,	// (0x0005ddc2) list_highlight_pane_cp05

0xed29,	// (0x0006082b) main_clock2_list_single_pane_t1

0x4046,	// (0x00055b48) popup_toolbar_window_cp04_ParamLimits

0xc080,	// (0x0005db82) camera2_autofocus_pane_g2_ParamLimits

0xc080,	// (0x0005db82) camera2_autofocus_pane_g2

0xc080,	// (0x0005db82) camera2_autofocus_pane_g3_ParamLimits

0xc080,	// (0x0005db82) camera2_autofocus_pane_g3

0xc080,	// (0x0005db82) camera2_autofocus_pane_g4_ParamLimits

0xc080,	// (0x0005db82) camera2_autofocus_pane_g4

0xc080,	// (0x0005db82) camera2_autofocus_pane_g5_ParamLimits

0xc080,	// (0x0005db82) camera2_autofocus_pane_g5

0x0004,

0xf658,	// (0x0006115a) camera2_autofocus_pane_g_ParamLimits

0xf658,	// (0x0006115a) camera2_autofocus_pane_g

0x656b,	// (0x0005806d) camera2_autofocus_pane_cp_g2

0x6573,	// (0x00058075) camera2_autofocus_pane_cp_g3

0x657b,	// (0x0005807d) camera2_autofocus_pane_cp_g4

0x6583,	// (0x00058085) camera2_autofocus_pane_cp_g5

0x0004,

0xf6be,	// (0x000611c0) camera2_autofocus_pane_cp_g

0xb971,	// (0x0005d473) popup_dialer_spcha_window

0xb971,	// (0x0005d473) bg_popup_sub_pane_cp07

0xb971,	// (0x0005d473) list_spcha_pane

0xed37,	// (0x00060839) list_single_spcha_pane_ParamLimits

0xed37,	// (0x00060839) list_single_spcha_pane

0xb971,	// (0x0005d473) list_highlight_pane_cp06

0xc7ef,	// (0x0005e2f1) list_single_spcha_pane_t1

0xdf1e,	// (0x0005fa20) popup_call2_audio_out_window_g4_ParamLimits

0xdf1e,	// (0x0005fa20) popup_call2_audio_out_window_g4

0x34ea,	// (0x00054fec) main_imed2_pane

0x5fdb,	// (0x00057add) popup_imed_adjust2_window

0x5fee,	// (0x00057af0) popup_imed_trans_window_ParamLimits

0x5fee,	// (0x00057af0) popup_imed_trans_window

0xe6f7,	// (0x000601f9) popup_blid_sat_info2_window_t1

0xe705,	// (0x00060207) popup_blid_sat_info2_window_t2

0x000a,

0xf5ed,	// (0x000610ef) popup_blid_sat_info2_window_t

0x6deb,	// (0x000588ed) aid_size_cell_colour_35

0x6e05,	// (0x00058907) aid_size_cell_colour_112

0x6e1c,	// (0x0005891e) aid_size_cell_effect

0xc00b,	// (0x0005db0d) bg_tb_trans_pane_cp02

0xc8e0,	// (0x0005e3e2) heading_imed_pane

0x6e36,	// (0x00058938) listscroll_imed_pane

0xed49,	// (0x0006084b) heading_imed_pane_g1

0xed51,	// (0x00060853) heading_imed_pane_t1

0xed5f,	// (0x00060861) grid_imed_colour_35_pane_ParamLimits

0xed5f,	// (0x00060861) grid_imed_colour_35_pane

0x6e42,	// (0x00058944) grid_imed_effect_pane

0xed77,	// (0x00060879) list_imed_aspect_pane

0x6e52,	// (0x00058954) scroll_pane_cp027_ParamLimits

0x6e52,	// (0x00058954) scroll_pane_cp027

0x6e5e,	// (0x00058960) cell_imed_effect_pane_ParamLimits

0x6e5e,	// (0x00058960) cell_imed_effect_pane

0xed7f,	// (0x00060881) cell_imed_colour_pane_ParamLimits

0xed7f,	// (0x00060881) cell_imed_colour_pane

0xedc1,	// (0x000608c3) cell_imed_colour_pane_g1_ParamLimits

0xedc1,	// (0x000608c3) cell_imed_colour_pane_g1

0xedd2,	// (0x000608d4) hgihlgiht_grid_pane_cp016_ParamLimits

0xedd2,	// (0x000608d4) hgihlgiht_grid_pane_cp016

0x6e76,	// (0x00058978) cell_imed_effect_pane_g1

0x6e7e,	// (0x00058980) grid_highlight_pane_cp017

0xede3,	// (0x000608e5) list_imed_single_pane_ParamLimits

0xede3,	// (0x000608e5) list_imed_single_pane

0xb971,	// (0x0005d473) list_highlight_pane_cp07

0xee15,	// (0x00060917) list_imed_aspect_pane_comp1_t1

0xd30e,	// (0x0005ee10) bg_tb_trans_pane_cp05

0xee37,	// (0x00060939) popup_imed_adjust2_window_g1

0xee5e,	// (0x00060960) popup_imed_adjust2_window_t1

0xee76,	// (0x00060978) slider_imed_adjust_pane

0xee8a,	// (0x0006098c) slider_imed_adjust_pane_g1

0xee9a,	// (0x0006099c) slider_imed_adjust_pane_g2

0xeeaa,	// (0x000609ac) slider_imed_adjust_pane_g3

0xeebb,	// (0x000609bd) slider_imed_adjust_pane_g4

0x0003,

0xf731,	// (0x00061233) slider_imed_adjust_pane_g

0x6e87,	// (0x00058989) aid_size_cell_clipart2

0x6e93,	// (0x00058995) grid_imed_clipart_pane

0xd228,	// (0x0005ed2a) scroll_pane_cp031

0x6e9d,	// (0x0005899f) cell_imed_clipart_pane_ParamLimits

0x6e9d,	// (0x0005899f) cell_imed_clipart_pane

0x6ec0,	// (0x000589c2) cell_imed_clipart_pane_g1

0xb971,	// (0x0005d473) grid_highlight_pane_cp014

0x6bf2,	// (0x000586f4) main_clock2_pane_g1_ParamLimits

0x6bf2,	// (0x000586f4) main_clock2_pane_g1

0x6cdd,	// (0x000587df) aid_call2_pane_cp10

0x6cef,	// (0x000587f1) aid_call_pane_cp10

0xcf27,	// (0x0005ea29) popup_clock_analogue_window_cp10_g1

0xcf27,	// (0x0005ea29) popup_clock_analogue_window_cp10_g2

0x6d01,	// (0x00058803) popup_clock_analogue_window_cp10_g3

0x6d01,	// (0x00058803) popup_clock_analogue_window_cp10_g4

0xcf27,	// (0x0005ea29) popup_clock_analogue_window_cp10_g5

0x0004,

0xf71f,	// (0x00061221) popup_clock_analogue_window_cp10_g

0x6d17,	// (0x00058819) popup_clock_analogue_window_cp10_t1

0x6d48,	// (0x0005884a) clock_digital_number_pane_cp10_ParamLimits

0x6d48,	// (0x0005884a) clock_digital_number_pane_cp10

0x6d62,	// (0x00058864) clock_digital_number_pane_cp11_ParamLimits

0x6d62,	// (0x00058864) clock_digital_number_pane_cp11

0x6d7c,	// (0x0005887e) clock_digital_number_pane_cp12_ParamLimits

0x6d7c,	// (0x0005887e) clock_digital_number_pane_cp12

0x6d96,	// (0x00058898) clock_digital_number_pane_cp13_ParamLimits

0x6d96,	// (0x00058898) clock_digital_number_pane_cp13

0x6db0,	// (0x000588b2) clock_digital_separator_pane_cp10_ParamLimits

0x6db0,	// (0x000588b2) clock_digital_separator_pane_cp10

0x6dca,	// (0x000588cc) popup_clock_digital_window_cp02_t1_ParamLimits

0x6dca,	// (0x000588cc) popup_clock_digital_window_cp02_t1

0xbfe1,	// (0x0005dae3) clock_digital_number_pane_cp10_g1

0xbfe1,	// (0x0005dae3) clock_digital_number_pane_cp10_g2

0x0001,

0xf73a,	// (0x0006123c) clock_digital_number_pane_cp10_g

0xbfe1,	// (0x0005dae3) clock_digital_separator_pane_cp10_g1

0xbfe1,	// (0x0005dae3) clock_digital_separator_pane_g2_cp10

0xd0b4,	// (0x0005ebb6) navi_pane_vded_g4

0xd0bd,	// (0x0005ebbf) navi_pane_vded_g5

0xd0c6,	// (0x0005ebc8) navi_pane_vded_t1

0x34ea,	// (0x00054fec) main_vded_pane

0x6ec9,	// (0x000589cb) main_vded_pane_g1

0x6ed5,	// (0x000589d7) main_vded_pane_g2

0x6edf,	// (0x000589e1) main_vded_pane_g3

0x0002,

0xf73f,	// (0x00061241) main_vded_pane_g

0x6ee9,	// (0x000589eb) main_vded_pane_t1

0x6ef7,	// (0x000589f9) main_vded_pane_t2

0x0001,

0xf746,	// (0x00061248) main_vded_pane_t

0x6f05,	// (0x00058a07) vded_slider_pane

0x6f0f,	// (0x00058a11) vded_video_pane

0xeecc,	// (0x000609ce) vded_video_pane_g1

0x6f19,	// (0x00058a1b) vded_video_pane_g2

0xc0b0,	// (0x0005dbb2) vded_video_pane_g3

0x0002,

0xf74b,	// (0x0006124d) vded_video_pane_g

0xeed6,	// (0x000609d8) vded_slider_pane_g1

0xe622,	// (0x00060124) vded_slider_pane_g2

0xeedf,	// (0x000609e1) vded_slider_pane_g3

0xeee8,	// (0x000609ea) vded_slider_pane_g4

0xeef1,	// (0x000609f3) vded_slider_pane_g5

0x0004,

0xf752,	// (0x00061254) vded_slider_pane_g

0x6acc,	// (0x000585ce) mup3_rocker_pane_ParamLimits

0x6acc,	// (0x000585ce) mup3_rocker_pane

0x6f22,	// (0x00058a24) mup3_control_keys_pane_g1

0x6f2a,	// (0x00058a2c) mup3_control_keys_pane_g2

0x6f32,	// (0x00058a34) mup3_control_keys_pane_g3

0x6f3a,	// (0x00058a3c) mup3_control_keys_pane_g4

0x0003,

0xf75d,	// (0x0006125f) mup3_control_keys_pane_g

0x349e,	// (0x00054fa0) popup_toolbar2_fixed_window_cp01_ParamLimits

0x349e,	// (0x00054fa0) popup_toolbar2_fixed_window_cp01

0x6ae6,	// (0x000585e8) popup_toolbar2_fixed_window_cp02_ParamLimits

0x6ae6,	// (0x000585e8) popup_toolbar2_fixed_window_cp02

0xd8a7,	// (0x0005f3a9) popup_call2_audio_second_window_t4_ParamLimits

0xd8a7,	// (0x0005f3a9) popup_call2_audio_second_window_t4

0xdde3,	// (0x0005f8e5) popup_call2_audio_first_window_t6_ParamLimits

0xdde3,	// (0x0005f8e5) popup_call2_audio_first_window_t6

0xe021,	// (0x0005fb23) popup_call2_audio_out_window_t6_ParamLimits

0xe021,	// (0x0005fb23) popup_call2_audio_out_window_t6

0x34ea,	// (0x00054fec) main_vitu_pane

0xc064,	// (0x0005db66) aid_size_cell_itu_ParamLimits

0xc064,	// (0x0005db66) aid_size_cell_itu

0xc064,	// (0x0005db66) bg_popup_window_pane_cp08_ParamLimits

0xc064,	// (0x0005db66) bg_popup_window_pane_cp08

0xc064,	// (0x0005db66) field_vitu_entry_pane_ParamLimits

0xc064,	// (0x0005db66) field_vitu_entry_pane

0xc064,	// (0x0005db66) grid_vitu_function_pane_ParamLimits

0xc064,	// (0x0005db66) grid_vitu_function_pane

0xc064,	// (0x0005db66) grid_vitu_itu_pane_ParamLimits

0xc064,	// (0x0005db66) grid_vitu_itu_pane

0xc064,	// (0x0005db66) cell_vitu_itu_pane_ParamLimits

0xc064,	// (0x0005db66) cell_vitu_itu_pane

0xc064,	// (0x0005db66) cell_vitu_function_pane_ParamLimits

0xc064,	// (0x0005db66) cell_vitu_function_pane

0xc00b,	// (0x0005db0d) bg_popup_sub_pane_cp08_ParamLimits

0xc00b,	// (0x0005db0d) bg_popup_sub_pane_cp08

0xc0ba,	// (0x0005dbbc) field_vitu_entry_pane_t1_ParamLimits

0xc0ba,	// (0x0005dbbc) field_vitu_entry_pane_t1

0xedf8,	// (0x000608fa) field_vitu_entry_pane_t2_ParamLimits

0xedf8,	// (0x000608fa) field_vitu_entry_pane_t2

0x0001,

0xf766,	// (0x00061268) field_vitu_entry_pane_t_ParamLimits

0xf766,	// (0x00061268) field_vitu_entry_pane_t

0xe52b,	// (0x0006002d) bg_button_pane_cp05_ParamLimits

0xe52b,	// (0x0006002d) bg_button_pane_cp05

0xeefa,	// (0x000609fc) cell_vitu_itu_pane_g1

0xd31c,	// (0x0005ee1e) cell_vitu_itu_pane_t1_ParamLimits

0xd31c,	// (0x0005ee1e) cell_vitu_itu_pane_t1

0xd31c,	// (0x0005ee1e) cell_vitu_itu_pane_t2_ParamLimits

0xd31c,	// (0x0005ee1e) cell_vitu_itu_pane_t2

0x0002,

0xf76b,	// (0x0006126d) cell_vitu_itu_pane_t_ParamLimits

0xf76b,	// (0x0006126d) cell_vitu_itu_pane_t

0xb971,	// (0x0005d473) bg_button_pane_cp07

0xc0b0,	// (0x0005dbb2) cell_vitu_function_pane_g1

0x3623,	// (0x00055125) main_calc_pane_g1

0x32f9,	// (0x00054dfb) aid_visual_content_pane

0x34ea,	// (0x00054fec) main_vradio_pane

0xc080,	// (0x0005db82) main_vradio_pane_g1_ParamLimits

0xc080,	// (0x0005db82) main_vradio_pane_g1

0xc080,	// (0x0005db82) main_vradio_pane_g2_ParamLimits

0xc080,	// (0x0005db82) main_vradio_pane_g2

0x0001,

0xf502,	// (0x00061004) main_vradio_pane_g_ParamLimits

0xf502,	// (0x00061004) main_vradio_pane_g

0xc0ce,	// (0x0005dbd0) main_vradio_pane_t1_ParamLimits

0xc0ce,	// (0x0005dbd0) main_vradio_pane_t1

0xc0ce,	// (0x0005dbd0) main_vradio_pane_t2_ParamLimits

0xc0ce,	// (0x0005dbd0) main_vradio_pane_t2

0xc0ce,	// (0x0005dbd0) main_vradio_pane_t3_ParamLimits

0xc0ce,	// (0x0005dbd0) main_vradio_pane_t3

0x0002,

0xf772,	// (0x00061274) main_vradio_pane_t_ParamLimits

0xf772,	// (0x00061274) main_vradio_pane_t

0xc064,	// (0x0005db66) vradio_rocker_control_pane_ParamLimits

0xc064,	// (0x0005db66) vradio_rocker_control_pane

0xc064,	// (0x0005db66) vradio_station_info_pane_ParamLimits

0xc064,	// (0x0005db66) vradio_station_info_pane

0xc00b,	// (0x0005db0d) vradio_frequency_info_pane_ParamLimits

0xc00b,	// (0x0005db0d) vradio_frequency_info_pane

0xc0b0,	// (0x0005dbb2) vradio_station_info_pane_g1

0xd31c,	// (0x0005ee1e) vradio_station_info_pane_t1_ParamLimits

0xd31c,	// (0x0005ee1e) vradio_station_info_pane_t1

0xc0ce,	// (0x0005dbd0) vradio_station_info_pane_t2_ParamLimits

0xc0ce,	// (0x0005dbd0) vradio_station_info_pane_t2

0x0001,

0xf779,	// (0x0006127b) vradio_station_info_pane_t_ParamLimits

0xf779,	// (0x0006127b) vradio_station_info_pane_t

0xb971,	// (0x0005d473) vradio_tuning_pane

0x6f4a,	// (0x00058a4c) vradio_rocker_control_pane_g1

0xef16,	// (0x00060a18) vradio_rocker_control_pane_g2

0x6f52,	// (0x00058a54) vradio_rocker_control_pane_g3

0x6f5a,	// (0x00058a5c) vradio_rocker_control_pane_g4

0x6f62,	// (0x00058a64) vradio_rocker_control_pane_g5

0x0004,

0xf77e,	// (0x00061280) vradio_rocker_control_pane_g

0xc0b0,	// (0x0005dbb2) vradio_frequency_info_pane_g1

0xc0ba,	// (0x0005dbbc) vradio_frequency_info_pane_t1_ParamLimits

0xc0ba,	// (0x0005dbbc) vradio_frequency_info_pane_t1

0x6f6a,	// (0x00058a6c) vradio_tuning_pane_g1

0x6f77,	// (0x00058a79) vradio_tuning_pane_t1

0x3342,	// (0x00054e44) area_side_right_pane_ParamLimits

0x3342,	// (0x00054e44) area_side_right_pane

0xe44b,	// (0x0005ff4d) status_small_pane_g1

0xe453,	// (0x0005ff55) status_small_pane_g2

0xe45c,	// (0x0005ff5e) status_small_pane_g3

0xe465,	// (0x0005ff67) status_small_pane_g4

0x0003,

0xf54f,	// (0x00061051) status_small_pane_g

0xe46e,	// (0x0005ff70) status_small_pane_t1

0x34ea,	// (0x00054fec) main_video3_pane

0xb971,	// (0x0005d473) cams_zoom_vslider_pane

0xef1e,	// (0x00060a20) image3_wide_pane_ParamLimits

0xef1e,	// (0x00060a20) image3_wide_pane

0xb971,	// (0x0005d473) image3_wide_small_pane

0xef38,	// (0x00060a3a) main_video3_pane_g1_ParamLimits

0xef38,	// (0x00060a3a) main_video3_pane_g1

0xef38,	// (0x00060a3a) main_video3_pane_g2_ParamLimits

0xef38,	// (0x00060a3a) main_video3_pane_g2

0x0001,

0xf789,	// (0x0006128b) main_video3_pane_g_ParamLimits

0xf789,	// (0x0006128b) main_video3_pane_g

0xef56,	// (0x00060a58) main_video3_pane_t1_ParamLimits

0xef56,	// (0x00060a58) main_video3_pane_t1

0xef56,	// (0x00060a58) main_video3_pane_t2_ParamLimits

0xef56,	// (0x00060a58) main_video3_pane_t2

0xef56,	// (0x00060a58) main_video3_pane_t3_ParamLimits

0xef56,	// (0x00060a58) main_video3_pane_t3

0x0002,

0xf78e,	// (0x00061290) main_video3_pane_t_ParamLimits

0xf78e,	// (0x00061290) main_video3_pane_t

0xc0b0,	// (0x0005dbb2) cams_zoom_vslider_pane_g1

0xc0b0,	// (0x0005dbb2) cams_zoom_vslider_pane_g2

0x0001,

0xf0af,	// (0x00060bb1) cams_zoom_vslider_pane_g

0xb971,	// (0x0005d473) small_slider_vertical_pane

0xc0b0,	// (0x0005dbb2) small_slider_vertical_pane_g1

0xc0b0,	// (0x0005dbb2) small_slider_vertical_pane_g2

0xef7d,	// (0x00060a7f) small_slider_vertical_pane_g3

0x0002,

0xf795,	// (0x00061297) small_slider_vertical_pane_g

0x34ea,	// (0x00054fec) main_hwr_training_pane

0xef86,	// (0x00060a88) hwr_training_instruct_pane_ParamLimits

0xef86,	// (0x00060a88) hwr_training_instruct_pane

0x6f86,	// (0x00058a88) hwr_training_navi_pane_ParamLimits

0x6f86,	// (0x00058a88) hwr_training_navi_pane

0x6fa0,	// (0x00058aa2) hwr_training_write_pane_ParamLimits

0x6fa0,	// (0x00058aa2) hwr_training_write_pane

0xb971,	// (0x0005d473) bg_frame_shadow_pane

0xefbd,	// (0x00060abf) hwr_training_write_pane_g1

0xefc5,	// (0x00060ac7) hwr_training_write_pane_g2

0xefcd,	// (0x00060acf) hwr_training_write_pane_g3

0xefd5,	// (0x00060ad7) hwr_training_write_pane_g4

0xefdd,	// (0x00060adf) hwr_training_write_pane_g5

0xefe5,	// (0x00060ae7) hwr_training_write_pane_g6

0xefed,	// (0x00060aef) hwr_training_write_pane_g7

0x0006,

0xf79c,	// (0x0006129e) hwr_training_write_pane_g

0x6fd8,	// (0x00058ada) hwr_training_navi_pane_g1_ParamLimits

0x6fd8,	// (0x00058ada) hwr_training_navi_pane_g1

0x6fea,	// (0x00058aec) hwr_training_navi_pane_g2_ParamLimits

0x6fea,	// (0x00058aec) hwr_training_navi_pane_g2

0x6ffc,	// (0x00058afe) hwr_training_navi_pane_g3_ParamLimits

0x6ffc,	// (0x00058afe) hwr_training_navi_pane_g3

0x700c,	// (0x00058b0e) hwr_training_navi_pane_g4_ParamLimits

0x700c,	// (0x00058b0e) hwr_training_navi_pane_g4

0x0004,

0xf7ab,	// (0x000612ad) hwr_training_navi_pane_g_ParamLimits

0xf7ab,	// (0x000612ad) hwr_training_navi_pane_g

0x7026,	// (0x00058b28) hwr_training_navi_pane_t1

0x7034,	// (0x00058b36) list_single_hwr_training_instruct_pane_ParamLimits

0x7034,	// (0x00058b36) list_single_hwr_training_instruct_pane

0xeff5,	// (0x00060af7) list_single_hwr_training_instruct_pane_t1

0xe81a,	// (0x0006031c) bg_frame_shadow_pane_g1

0xf004,	// (0x00060b06) bg_frame_shadow_pane_g2

0xf00c,	// (0x00060b0e) bg_frame_shadow_pane_g3

0xf014,	// (0x00060b16) bg_frame_shadow_pane_g4

0xf01c,	// (0x00060b1e) bg_frame_shadow_pane_g5

0xf024,	// (0x00060b26) bg_frame_shadow_pane_g6

0xf02c,	// (0x00060b2e) bg_frame_shadow_pane_g7

0xc1bd,	// (0x0005dcbf) bg_frame_shadow_pane_g8

0x0007,

0xf7b6,	// (0x000612b8) bg_frame_shadow_pane_g

0x34ea,	// (0x00054fec) main_video_tele_dialer_pane

0x705d,	// (0x00058b5f) aid_size_cell_video_keypad_ParamLimits

0x705d,	// (0x00058b5f) aid_size_cell_video_keypad

0x706d,	// (0x00058b6f) grid_video_dialer_keypad_pane_ParamLimits

0x706d,	// (0x00058b6f) grid_video_dialer_keypad_pane

0x70a1,	// (0x00058ba3) video_down_pane_cp_ParamLimits

0x70a1,	// (0x00058ba3) video_down_pane_cp

0x70cb,	// (0x00058bcd) cell_video_dialer_keypad_pane_ParamLimits

0x70cb,	// (0x00058bcd) cell_video_dialer_keypad_pane

0xf034,	// (0x00060b36) bg_button_pane_cp08_ParamLimits

0xf034,	// (0x00060b36) bg_button_pane_cp08

0x70e0,	// (0x00058be2) cell_video_dialer_keypad_pane_g1_ParamLimits

0x70e0,	// (0x00058be2) cell_video_dialer_keypad_pane_g1

0x6ac0,	// (0x000585c2) mup3_rocker2_pane_ParamLimits

0x6ac0,	// (0x000585c2) mup3_rocker2_pane

0xc0b0,	// (0x0005dbb2) mup3_rocker2_pane_g1

0x5f4f,	// (0x00057a51) main_dialer2_pane

0x34ea,	// (0x00054fec) main_mp4_pane

0x7138,	// (0x00058c3a) main_mp4_pane_g1_ParamLimits

0x7138,	// (0x00058c3a) main_mp4_pane_g1

0x715a,	// (0x00058c5c) main_mp4_pane_g2_ParamLimits

0x715a,	// (0x00058c5c) main_mp4_pane_g2

0x7178,	// (0x00058c7a) main_mp4_pane_g3_ParamLimits

0x7178,	// (0x00058c7a) main_mp4_pane_g3

0x71b1,	// (0x00058cb3) main_mp4_pane_g4_ParamLimits

0x71b1,	// (0x00058cb3) main_mp4_pane_g4

0x71d9,	// (0x00058cdb) main_mp4_pane_g5_ParamLimits

0x71d9,	// (0x00058cdb) main_mp4_pane_g5

0x0007,

0xf7d6,	// (0x000612d8) main_mp4_pane_g_ParamLimits

0xf7d6,	// (0x000612d8) main_mp4_pane_g

0x7241,	// (0x00058d43) main_mp4_pane_t1_ParamLimits

0x7241,	// (0x00058d43) main_mp4_pane_t1

0x72a3,	// (0x00058da5) main_mp4_pane_t2_ParamLimits

0x72a3,	// (0x00058da5) main_mp4_pane_t2

0x7307,	// (0x00058e09) main_mp4_pane_t3_ParamLimits

0x7307,	// (0x00058e09) main_mp4_pane_t3

0x7365,	// (0x00058e67) main_mp4_pane_t4_ParamLimits

0x7365,	// (0x00058e67) main_mp4_pane_t4

0x0003,

0xf7e7,	// (0x000612e9) main_mp4_pane_t_ParamLimits

0xf7e7,	// (0x000612e9) main_mp4_pane_t

0x73c3,	// (0x00058ec5) mp4_progress_pane_ParamLimits

0x73c3,	// (0x00058ec5) mp4_progress_pane

0x73f7,	// (0x00058ef9) mp4_rocker_pane_ParamLimits

0x73f7,	// (0x00058ef9) mp4_rocker_pane

0x06d8,	// (0x000521da) mp4_progress_pane_t1

0x06fa,	// (0x000521fc) mp4_progress_pane_t2

0x0001,

0xf7f0,	// (0x000612f2) mp4_progress_pane_t

0x071c,	// (0x0005221e) mup_progress_pane_cp04

0x0e28,	// (0x0005292a) mp4_rocker_pane_g1

0x34d0,	// (0x00054fd2) aid_cell_size_keypad2_ParamLimits

0x34d0,	// (0x00054fd2) aid_cell_size_keypad2

0x34d0,	// (0x00054fd2) dialer2_ne_pane_ParamLimits

0x34d0,	// (0x00054fd2) dialer2_ne_pane

0x34d0,	// (0x00054fd2) grid_dialer2_keypad_pane_ParamLimits

0x34d0,	// (0x00054fd2) grid_dialer2_keypad_pane

0xe73d,	// (0x0006023f) bg_popup_call_pane_cp07_ParamLimits

0xe73d,	// (0x0006023f) bg_popup_call_pane_cp07

0x740b,	// (0x00058f0d) dialer2_ne_pane_t1_ParamLimits

0x740b,	// (0x00058f0d) dialer2_ne_pane_t1

0x7432,	// (0x00058f34) cell_dialer2_keypad_pane_ParamLimits

0x7432,	// (0x00058f34) cell_dialer2_keypad_pane

0xe52b,	// (0x0006002d) bg_button_pane_pane_cp04_ParamLimits

0xe52b,	// (0x0006002d) bg_button_pane_pane_cp04

0xc072,	// (0x0005db74) cell_dialer2_keypad_pane_g1_ParamLimits

0xc072,	// (0x0005db74) cell_dialer2_keypad_pane_g1

0x3f08,	// (0x00055a0a) aid_placing_vt_set_content_ParamLimits

0x3f08,	// (0x00055a0a) aid_placing_vt_set_content

0x3f34,	// (0x00055a36) aid_placing_vt_set_title_ParamLimits

0x3f34,	// (0x00055a36) aid_placing_vt_set_title

0x34ea,	// (0x00054fec) main_image3_pane

0x747b,	// (0x00058f7d) area_side_right_pane_cp01_ParamLimits

0x747b,	// (0x00058f7d) area_side_right_pane_cp01

0x74a8,	// (0x00058faa) main_image3_pane_g1_ParamLimits

0x74a8,	// (0x00058faa) main_image3_pane_g1

0x74b6,	// (0x00058fb8) main_image3_pane_g2_ParamLimits

0x74b6,	// (0x00058fb8) main_image3_pane_g2

0x74cf,	// (0x00058fd1) main_image3_pane_g3_ParamLimits

0x74cf,	// (0x00058fd1) main_image3_pane_g3

0x74e8,	// (0x00058fea) main_image3_pane_g4_ParamLimits

0x74e8,	// (0x00058fea) main_image3_pane_g4

0x0003,

0xf7ff,	// (0x00061301) main_image3_pane_g_ParamLimits

0xf7ff,	// (0x00061301) main_image3_pane_g

0x7501,	// (0x00059003) main_image3_pane_t1_ParamLimits

0x7501,	// (0x00059003) main_image3_pane_t1

0x7526,	// (0x00059028) main_image3_pane_t2_ParamLimits

0x7526,	// (0x00059028) main_image3_pane_t2

0x7545,	// (0x00059047) main_image3_pane_t3_ParamLimits

0x7545,	// (0x00059047) main_image3_pane_t3

0x0003,

0xf808,	// (0x0006130a) main_image3_pane_t_ParamLimits

0xf808,	// (0x0006130a) main_image3_pane_t

0xc064,	// (0x0005db66) grid_sctrl_middle_pane_cp01_ParamLimits

0xc064,	// (0x0005db66) grid_sctrl_middle_pane_cp01

0x75a6,	// (0x000590a8) cell_sctrl_middle_pane_cp01_ParamLimits

0x75a6,	// (0x000590a8) cell_sctrl_middle_pane_cp01

0x75b7,	// (0x000590b9) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x75b7,	// (0x000590b9) cell_sctrl_middle_pane_cp01_g1

0x34ea,	// (0x00054fec) main_call4_pane

0x75c4,	// (0x000590c6) aid_size_button_call4_ParamLimits

0x75c4,	// (0x000590c6) aid_size_button_call4

0x75fa,	// (0x000590fc) call4_windows_pane_ParamLimits

0x75fa,	// (0x000590fc) call4_windows_pane

0x760f,	// (0x00059111) grid_call4_button_pane_ParamLimits

0x760f,	// (0x00059111) grid_call4_button_pane

0x763d,	// (0x0005913f) call4_windows_conf_pane

0x7652,	// (0x00059154) popup_call4_audio_first_window_ParamLimits

0x7652,	// (0x00059154) popup_call4_audio_first_window

0x76a2,	// (0x000591a4) popup_call4_audio_second_window_ParamLimits

0x76a2,	// (0x000591a4) popup_call4_audio_second_window

0x76bb,	// (0x000591bd) popup_call4_audio_wait_window_ParamLimits

0x76bb,	// (0x000591bd) popup_call4_audio_wait_window

0x76c9,	// (0x000591cb) cell_call4_button_pane_ParamLimits

0x76c9,	// (0x000591cb) cell_call4_button_pane

0x76ec,	// (0x000591ee) bg_button_pane_cp09_ParamLimits

0x76ec,	// (0x000591ee) bg_button_pane_cp09

0x76f8,	// (0x000591fa) cell_call4_button_pane_g1_ParamLimits

0x76f8,	// (0x000591fa) cell_call4_button_pane_g1

0x7705,	// (0x00059207) cell_call4_button_pane_t1_ParamLimits

0x7705,	// (0x00059207) cell_call4_button_pane_t1

0x0765,	// (0x00052267) popup_call4_audio_conf_window_ParamLimits

0x0765,	// (0x00052267) popup_call4_audio_conf_window

0x6af3,	// (0x000585f5) mup3_progress_pane_t1_ParamLimits

0x6b12,	// (0x00058614) mup3_progress_pane_t2_ParamLimits

0xebf8,	// (0x000606fa) mup3_progress_pane_t3_ParamLimits

0xf6e7,	// (0x000611e9) mup3_progress_pane_t_ParamLimits

0xec15,	// (0x00060717) mup_progress_pane_cp03_ParamLimits

0x6f42,	// (0x00058a44) mup3_control_keys_pane_g4_copy1

0x73f7,	// (0x00058ef9) mp4_rocker2_pane_ParamLimits

0x73f7,	// (0x00058ef9) mp4_rocker2_pane

0x7749,	// (0x0005924b) mp4_rocker2_pane_g1

0x7749,	// (0x0005924b) mp4_rocker2_pane_g2

0x7749,	// (0x0005924b) mp4_rocker2_pane_g3

0x7749,	// (0x0005924b) mp4_rocker2_pane_g4

0x7749,	// (0x0005924b) mp4_rocker2_pane_g5

0x0004,

0xf811,	// (0x00061313) mp4_rocker2_pane_g

0x34ea,	// (0x00054fec) main_camera4_pane

0x34ea,	// (0x00054fec) main_video4_pane

0x707d,	// (0x00058b7f) main_video_tele_dialer_pane_t1_ParamLimits

0x707d,	// (0x00058b7f) main_video_tele_dialer_pane_t1

0x708f,	// (0x00058b91) main_video_tele_dialer_pane_t2_ParamLimits

0x708f,	// (0x00058b91) main_video_tele_dialer_pane_t2

0x0001,

0xf7c7,	// (0x000612c9) main_video_tele_dialer_pane_t_ParamLimits

0xf7c7,	// (0x000612c9) main_video_tele_dialer_pane_t

0x7769,	// (0x0005926b) cam4_autofocus_pane_ParamLimits

0x7769,	// (0x0005926b) cam4_autofocus_pane

0x7783,	// (0x00059285) cam4_image_uncrop_pane_ParamLimits

0x7783,	// (0x00059285) cam4_image_uncrop_pane

0x779a,	// (0x0005929c) cam4_indicators_pane_ParamLimits

0x779a,	// (0x0005929c) cam4_indicators_pane

0x77b6,	// (0x000592b8) main_camera4_pane_g1_ParamLimits

0x77b6,	// (0x000592b8) main_camera4_pane_g1

0x77c2,	// (0x000592c4) main_camera4_pane_g2_ParamLimits

0x77c2,	// (0x000592c4) main_camera4_pane_g2

0x77c2,	// (0x000592c4) main_camera4_pane_g3_ParamLimits

0x77c2,	// (0x000592c4) main_camera4_pane_g3

0x77ce,	// (0x000592d0) main_camera4_pane_g4_ParamLimits

0x77ce,	// (0x000592d0) main_camera4_pane_g4

0x77da,	// (0x000592dc) main_camera4_pane_g5_ParamLimits

0x77da,	// (0x000592dc) main_camera4_pane_g5

0x0005,

0xf81c,	// (0x0006131e) main_camera4_pane_g_ParamLimits

0xf81c,	// (0x0006131e) main_camera4_pane_g

0x77f4,	// (0x000592f6) main_camera4_pane_t1_ParamLimits

0x77f4,	// (0x000592f6) main_camera4_pane_t1

0x18bd,	// (0x000533bf) bg_tb_trans_pane_cp06

0x7844,	// (0x00059346) cam4_indicators_pane_g1

0x7855,	// (0x00059357) cam4_indicators_pane_g2

0x0002,

0xf837,	// (0x00061339) cam4_indicators_pane_g

0x786d,	// (0x0005936f) cam4_indicators_pane_t1

0x7897,	// (0x00059399) main_video4_pane_g1_ParamLimits

0x7897,	// (0x00059399) main_video4_pane_g1

0x78a3,	// (0x000593a5) main_video4_pane_g2_ParamLimits

0x78a3,	// (0x000593a5) main_video4_pane_g2

0x78af,	// (0x000593b1) main_video4_pane_g3_ParamLimits

0x78af,	// (0x000593b1) main_video4_pane_g3

0x78bb,	// (0x000593bd) main_video4_pane_g4_ParamLimits

0x78bb,	// (0x000593bd) main_video4_pane_g4

0x0004,

0xf83e,	// (0x00061340) main_video4_pane_g_ParamLimits

0xf83e,	// (0x00061340) main_video4_pane_g

0x78db,	// (0x000593dd) vid4_indicators_pane_ParamLimits

0x78db,	// (0x000593dd) vid4_indicators_pane

0x78fa,	// (0x000593fc) video4_image_uncrop_cif_pane_ParamLimits

0x78fa,	// (0x000593fc) video4_image_uncrop_cif_pane

0x7909,	// (0x0005940b) video4_image_uncrop_nhd_pane_ParamLimits

0x7909,	// (0x0005940b) video4_image_uncrop_nhd_pane

0x7783,	// (0x00059285) video4_image_uncrop_vga_pane_ParamLimits

0x7783,	// (0x00059285) video4_image_uncrop_vga_pane

0x5f41,	// (0x00057a43) bg_tb_trans_pane_cp07

0x791e,	// (0x00059420) vid4_indicators_pane_g1

0x7932,	// (0x00059434) vid4_indicators_pane_g2

0x7946,	// (0x00059448) vid4_indicators_pane_g3

0x0004,

0xf849,	// (0x0006134b) vid4_indicators_pane_g

0x7973,	// (0x00059475) vid4_indicators_pane_t1

0x798a,	// (0x0005948c) cam4_autofocus_pane_g1

0x7992,	// (0x00059494) cam4_autofocus_pane_g2

0x799a,	// (0x0005949c) cam4_autofocus_pane_g3

0x0002,

0xf854,	// (0x00061356) cam4_autofocus_pane_g

0x79a2,	// (0x000594a4) cam4_autofocus_pane_g3_copy1

0x70af,	// (0x00058bb1) video_down_pane_cp_t1

0x70bd,	// (0x00058bbf) video_down_pane_cp_t2

0x0001,

0xf7cc,	// (0x000612ce) video_down_pane_cp_t

0x34d0,	// (0x00054fd2) popup_vitu2_window_ParamLimits

0x34d0,	// (0x00054fd2) popup_vitu2_window

0x79aa,	// (0x000594ac) aid_size_cell2_itu2_ParamLimits

0x79aa,	// (0x000594ac) aid_size_cell2_itu2

0x79cc,	// (0x000594ce) aid_size_cell_itu2_ParamLimits

0x79cc,	// (0x000594ce) aid_size_cell_itu2

0x7a10,	// (0x00059512) bg_popup_window_pane_cp09_ParamLimits

0x7a10,	// (0x00059512) bg_popup_window_pane_cp09

0x7a1e,	// (0x00059520) field_vitu2_entry_pane_ParamLimits

0x7a1e,	// (0x00059520) field_vitu2_entry_pane

0x7a3e,	// (0x00059540) grid_vitu2_function_pane_ParamLimits

0x7a3e,	// (0x00059540) grid_vitu2_function_pane

0x7a7e,	// (0x00059580) grid_vitu2_itu_pane_ParamLimits

0x7a7e,	// (0x00059580) grid_vitu2_itu_pane

0x7af2,	// (0x000595f4) cell_vitu2_itu_pane_ParamLimits

0x7af2,	// (0x000595f4) cell_vitu2_itu_pane

0x7b0b,	// (0x0005960d) cell_vitu2_function_pane_ParamLimits

0x7b0b,	// (0x0005960d) cell_vitu2_function_pane

0x0779,	// (0x0005227b) bg_popup_call_pane_cp08_ParamLimits

0x0779,	// (0x0005227b) bg_popup_call_pane_cp08

0x0790,	// (0x00052292) field_vitu2_entry_pane_g1

0x079c,	// (0x0005229e) field_vitu2_entry_pane_g2

0x0002,

0xf85b,	// (0x0006135d) field_vitu2_entry_pane_g

0x7b4c,	// (0x0005964e) field_vitu2_entry_pane_t1_ParamLimits

0x7b4c,	// (0x0005964e) field_vitu2_entry_pane_t1

0x0205,	// (0x00051d07) field_vitu2_entry_pane_t2_ParamLimits

0x0205,	// (0x00051d07) field_vitu2_entry_pane_t2

0x0001,

0xf862,	// (0x00061364) field_vitu2_entry_pane_t_ParamLimits

0xf862,	// (0x00061364) field_vitu2_entry_pane_t

0x6279,	// (0x00057d7b) bg_button_pane_cp010_ParamLimits

0x6279,	// (0x00057d7b) bg_button_pane_cp010

0x7b89,	// (0x0005968b) cell_vitu2_itu_pane_g1

0x7baf,	// (0x000596b1) cell_vitu2_itu_pane_t1_ParamLimits

0x7baf,	// (0x000596b1) cell_vitu2_itu_pane_t1

0x31dd,	// (0x00054cdf) cell_vitu2_itu_pane_t2_ParamLimits

0x31dd,	// (0x00054cdf) cell_vitu2_itu_pane_t2

0x0002,

0xf86c,	// (0x0006136e) cell_vitu2_itu_pane_t_ParamLimits

0xf86c,	// (0x0006136e) cell_vitu2_itu_pane_t

0x5f41,	// (0x00057a43) bg_button_pane_cp011

0x7bfb,	// (0x000596fd) cell_vitu2_function_pane_g1

0x34ea,	// (0x00054fec) main_myfav_hc_pane

0x7587,	// (0x00059089) popup_image3_note_pane_ParamLimits

0x7587,	// (0x00059089) popup_image3_note_pane

0x7595,	// (0x00059097) popup_image3_tool_bar_pane_ParamLimits

0x7595,	// (0x00059097) popup_image3_tool_bar_pane

0x3253,	// (0x00054d55) cell_vitu2_itu_pane_t3_ParamLimits

0x3253,	// (0x00054d55) cell_vitu2_itu_pane_t3

0xb971,	// (0x0005d473) bg_popup_trans_pane

0x07b0,	// (0x000522b2) grid_image3_tool_bar_pane

0x07ba,	// (0x000522bc) bg_popup_trans_pane_g1

0xc4d9,	// (0x0005dfdb) bg_popup_trans_pane_g2

0x07c2,	// (0x000522c4) bg_popup_trans_pane_g3

0x07ca,	// (0x000522cc) bg_popup_trans_pane_g4

0x07d2,	// (0x000522d4) bg_popup_trans_pane_g5

0x07da,	// (0x000522dc) bg_popup_trans_pane_g6

0x07e2,	// (0x000522e4) bg_popup_trans_pane_g7

0x07ea,	// (0x000522ec) bg_popup_trans_pane_g8

0xc4b9,	// (0x0005dfbb) bg_popup_trans_pane_g9

0x0008,

0xf873,	// (0x00061375) bg_popup_trans_pane_g

0x07f2,	// (0x000522f4) cell_image3_tool_bar_pane_ParamLimits

0x07f2,	// (0x000522f4) cell_image3_tool_bar_pane

0xc0b0,	// (0x0005dbb2) cell_image3_tool_bar_pane_g1

0xb971,	// (0x0005d473) bg_popup_trans_pane_cp1

0x0806,	// (0x00052308) popup_image3_note_pane_t1

0x0814,	// (0x00052316) popup_image3_note_pane_t2

0x0822,	// (0x00052324) popup_image3_note_pane_t3

0x0002,

0xf886,	// (0x00061388) popup_image3_note_pane_t

0x0830,	// (0x00052332) popup_image3_note_pane_t3_copy1

0x7c0f,	// (0x00059711) bg_myfav_hc_instruction_pane_ParamLimits

0x7c0f,	// (0x00059711) bg_myfav_hc_instruction_pane

0x7c27,	// (0x00059729) cell_myfav_contact_pane_ParamLimits

0x7c27,	// (0x00059729) cell_myfav_contact_pane

0x7c41,	// (0x00059743) cell_myfav_contact_pane_cp1_ParamLimits

0x7c41,	// (0x00059743) cell_myfav_contact_pane_cp1

0x7c59,	// (0x0005975b) cell_myfav_contact_pane_cp2_ParamLimits

0x7c59,	// (0x0005975b) cell_myfav_contact_pane_cp2

0x7c71,	// (0x00059773) cell_myfav_contact_pane_cp3_ParamLimits

0x7c71,	// (0x00059773) cell_myfav_contact_pane_cp3

0x7c88,	// (0x0005978a) cell_myfav_contact_pane_cp4_ParamLimits

0x7c88,	// (0x0005978a) cell_myfav_contact_pane_cp4

0x7c9e,	// (0x000597a0) cell_myfav_contact_pane_cp5_ParamLimits

0x7c9e,	// (0x000597a0) cell_myfav_contact_pane_cp5

0x7cb2,	// (0x000597b4) cell_myfav_contact_pane_cp6_ParamLimits

0x7cb2,	// (0x000597b4) cell_myfav_contact_pane_cp6

0x7cc6,	// (0x000597c8) cell_myfav_contact_pane_cp7_ParamLimits

0x7cc6,	// (0x000597c8) cell_myfav_contact_pane_cp7

0x083e,	// (0x00052340) listscroll_gen_pane_cp05

0x7cde,	// (0x000597e0) main_myfav_hc_pane_g1_ParamLimits

0x7cde,	// (0x000597e0) main_myfav_hc_pane_g1

0x7cf4,	// (0x000597f6) main_myfav_hc_pane_g2_ParamLimits

0x7cf4,	// (0x000597f6) main_myfav_hc_pane_g2

0x0002,

0xf88d,	// (0x0006138f) main_myfav_hc_pane_g_ParamLimits

0xf88d,	// (0x0006138f) main_myfav_hc_pane_g

0x7d24,	// (0x00059826) main_myfav_hc_pane_t1_ParamLimits

0x7d24,	// (0x00059826) main_myfav_hc_pane_t1

0x0847,	// (0x00052349) main_myfav_hc_pane_t2_ParamLimits

0x0847,	// (0x00052349) main_myfav_hc_pane_t2

0x0859,	// (0x0005235b) main_myfav_hc_pane_t3_ParamLimits

0x0859,	// (0x0005235b) main_myfav_hc_pane_t3

0x7d3b,	// (0x0005983d) main_myfav_hc_pane_t4_ParamLimits

0x7d3b,	// (0x0005983d) main_myfav_hc_pane_t4

0x0004,

0xf894,	// (0x00061396) main_myfav_hc_pane_t_ParamLimits

0xf894,	// (0x00061396) main_myfav_hc_pane_t

0xc0b0,	// (0x0005dbb2) bg_myfav_hc_instruction_pane_g1

0x086b,	// (0x0005236d) cell_myfav_contact_pane_g1_ParamLimits

0x086b,	// (0x0005236d) cell_myfav_contact_pane_g1

0x086b,	// (0x0005236d) cell_myfav_contact_pane_g2_ParamLimits

0x086b,	// (0x0005236d) cell_myfav_contact_pane_g2

0x0877,	// (0x00052379) cell_myfav_contact_pane_g3_ParamLimits

0x0877,	// (0x00052379) cell_myfav_contact_pane_g3

0xc080,	// (0x0005db82) cell_myfav_contact_pane_g4_ParamLimits

0xc080,	// (0x0005db82) cell_myfav_contact_pane_g4

0x0884,	// (0x00052386) cell_myfav_contact_pane_g5_ParamLimits

0x0884,	// (0x00052386) cell_myfav_contact_pane_g5

0x0004,

0xf89f,	// (0x000613a1) cell_myfav_contact_pane_g_ParamLimits

0xf89f,	// (0x000613a1) cell_myfav_contact_pane_g

0x7d0c,	// (0x0005980e) main_myfav_hc_pane_g3_ParamLimits

0x7d0c,	// (0x0005980e) main_myfav_hc_pane_g3

0x3141,	// (0x00054c43) popup_adpt_find_window

0x7d65,	// (0x00059867) afind_page_pane_ParamLimits

0x7d65,	// (0x00059867) afind_page_pane

0x7d72,	// (0x00059874) aid_size_cell_afind_ParamLimits

0x7d72,	// (0x00059874) aid_size_cell_afind

0x7d8c,	// (0x0005988e) bg_popup_sub_pane_cp09_ParamLimits

0x7d8c,	// (0x0005988e) bg_popup_sub_pane_cp09

0x7d9d,	// (0x0005989f) find_pane_cp01_ParamLimits

0x7d9d,	// (0x0005989f) find_pane_cp01

0x0890,	// (0x00052392) grid_afind_control_pane_ParamLimits

0x0890,	// (0x00052392) grid_afind_control_pane

0x7db0,	// (0x000598b2) grid_afind_pane_ParamLimits

0x7db0,	// (0x000598b2) grid_afind_pane

0x7dcc,	// (0x000598ce) cell_afind_pane_ParamLimits

0x7dcc,	// (0x000598ce) cell_afind_pane

0xc0b0,	// (0x0005dbb2) afind_page_pane_g1

0x7e14,	// (0x00059916) afind_page_pane_g2

0x7e1c,	// (0x0005991e) afind_page_pane_g3

0x0002,

0xf8aa,	// (0x000613ac) afind_page_pane_g

0x7e24,	// (0x00059926) afind_page_pane_t1

0x08b6,	// (0x000523b8) cell_afind_grid_control_pane_ParamLimits

0x08b6,	// (0x000523b8) cell_afind_grid_control_pane

0x08c5,	// (0x000523c7) bg_button_pane_cp69_ParamLimits

0x08c5,	// (0x000523c7) bg_button_pane_cp69

0x7e32,	// (0x00059934) cell_afind_pane_g1_ParamLimits

0x7e32,	// (0x00059934) cell_afind_pane_g1

0x7e3f,	// (0x00059941) cell_afind_pane_t1_ParamLimits

0x7e3f,	// (0x00059941) cell_afind_pane_t1

0x08d1,	// (0x000523d3) bg_button_pane_cp72

0x08d9,	// (0x000523db) cell_afind_grid_control_pane_g1

0x5aea,	// (0x000575ec) aid_image_placing_area_ParamLimits

0x5aea,	// (0x000575ec) aid_image_placing_area

0xc072,	// (0x0005db74) field_vitu_entry_pane_g1_ParamLimits

0xc072,	// (0x0005db74) field_vitu_entry_pane_g1

0xc072,	// (0x0005db74) field_vitu_entry_pane_g2_ParamLimits

0xc072,	// (0x0005db74) field_vitu_entry_pane_g2

0x0001,

0xf1bc,	// (0x00060cbe) field_vitu_entry_pane_g_ParamLimits

0xf1bc,	// (0x00060cbe) field_vitu_entry_pane_g

0xeefa,	// (0x000609fc) cell_vitu_itu_pane_g1_ParamLimits

0xedf8,	// (0x000608fa) cell_vitu_itu_pane_t3_ParamLimits

0xedf8,	// (0x000608fa) cell_vitu_itu_pane_t3

0x06d8,	// (0x000521da) mp4_progress_pane_t1_ParamLimits

0x06fa,	// (0x000521fc) mp4_progress_pane_t2_ParamLimits

0xf7f0,	// (0x000612f2) mp4_progress_pane_t_ParamLimits

0x071c,	// (0x0005221e) mup_progress_pane_cp04_ParamLimits

0x7d4f,	// (0x00059851) main_myfav_hc_pane_t5_ParamLimits

0x7d4f,	// (0x00059851) main_myfav_hc_pane_t5

0x3305,	// (0x00054e07) aid_zoom_text_primary

0x3141,	// (0x00054c43) popup_adpt_find_window_ParamLimits

0x5f41,	// (0x00057a43) main_cam_set_pane

0x77a8,	// (0x000592aa) cam4_zoom_pane_ParamLimits

0x77a8,	// (0x000592aa) cam4_zoom_pane

0x7e51,	// (0x00059953) main_cam_set_pane_g1_ParamLimits

0x7e51,	// (0x00059953) main_cam_set_pane_g1

0x7e5f,	// (0x00059961) main_cam_set_pane_g2_ParamLimits

0x7e5f,	// (0x00059961) main_cam_set_pane_g2

0x0001,

0xf8b1,	// (0x000613b3) main_cam_set_pane_g_ParamLimits

0xf8b1,	// (0x000613b3) main_cam_set_pane_g

0x7e6b,	// (0x0005996d) main_cam_set_pane_t1_ParamLimits

0x7e6b,	// (0x0005996d) main_cam_set_pane_t1

0x7e87,	// (0x00059989) main_cset_listscroll_pane_ParamLimits

0x7e87,	// (0x00059989) main_cset_listscroll_pane

0x7eb9,	// (0x000599bb) main_cset_slider_pane_ParamLimits

0x7eb9,	// (0x000599bb) main_cset_slider_pane

0x08ea,	// (0x000523ec) main_cset_list_pane_ParamLimits

0x08ea,	// (0x000523ec) main_cset_list_pane

0x08fa,	// (0x000523fc) scroll_pane_cp028

0x7ed8,	// (0x000599da) aid_area_touch_slider

0x7ef4,	// (0x000599f6) cset_slider_pane

0x7f17,	// (0x00059a19) main_cset_slider_pane_g1

0x7f2c,	// (0x00059a2e) main_cset_slider_pane_g2

0x0011,

0xf8b6,	// (0x000613b8) main_cset_slider_pane_g

0x0933,	// (0x00052435) main_cset_slider_pane_t1

0x7ff2,	// (0x00059af4) main_cset_slider_pane_t2

0x800c,	// (0x00059b0e) main_cset_slider_pane_t3

0x8026,	// (0x00059b28) main_cset_slider_pane_t4

0x8044,	// (0x00059b46) main_cset_slider_pane_t5

0x8062,	// (0x00059b64) main_cset_slider_pane_t6

0x8079,	// (0x00059b7b) main_cset_slider_pane_t7

0x000e,

0xf8db,	// (0x000613dd) main_cset_slider_pane_t

0x8187,	// (0x00059c89) cset_list_set_pane_ParamLimits

0x8187,	// (0x00059c89) cset_list_set_pane

0x09cd,	// (0x000524cf) aid_position_infowindow_above

0x09d5,	// (0x000524d7) aid_position_infowindow_below

0x81a0,	// (0x00059ca2) cset_list_set_pane_g1_ParamLimits

0x81a0,	// (0x00059ca2) cset_list_set_pane_g1

0x81ac,	// (0x00059cae) cset_list_set_pane_g3_ParamLimits

0x81ac,	// (0x00059cae) cset_list_set_pane_g3

0x0001,

0xf8fa,	// (0x000613fc) cset_list_set_pane_g_ParamLimits

0xf8fa,	// (0x000613fc) cset_list_set_pane_g

0x81bb,	// (0x00059cbd) cset_list_set_pane_t1_ParamLimits

0x81bb,	// (0x00059cbd) cset_list_set_pane_t1

0xc00b,	// (0x0005db0d) list_highlight_pane_cp021_ParamLimits

0xc00b,	// (0x0005db0d) list_highlight_pane_cp021

0xd205,	// (0x0005ed07) cset_slider_pane_g1

0xd217,	// (0x0005ed19) cset_slider_pane_g2

0xd20e,	// (0x0005ed10) cset_slider_pane_g3

0x0002,

0xf8ff,	// (0x00061401) cset_slider_pane_g

0x81d0,	// (0x00059cd2) aid_area_touch_cam4_zoom

0x81d8,	// (0x00059cda) cam4_zoom_cont_pane

0x81e0,	// (0x00059ce2) cam4_zoom_pane_g1

0x81e8,	// (0x00059cea) cam4_zoom_pane_g2

0x81f0,	// (0x00059cf2) cam4_zoom_pane_g3

0x0002,

0xf906,	// (0x00061408) cam4_zoom_pane_g

0x81f8,	// (0x00059cfa) cam4_zoom_cont_pane_g1

0x8201,	// (0x00059d03) cam4_zoom_cont_pane_g2

0x820a,	// (0x00059d0c) cam4_zoom_cont_pane_g3

0x0002,

0xf90d,	// (0x0006140f) cam4_zoom_cont_pane_g

0x75de,	// (0x000590e0) call4_image_pane_ParamLimits

0x75de,	// (0x000590e0) call4_image_pane

0x763d,	// (0x0005913f) call4_windows_conf_pane_ParamLimits

0x7680,	// (0x00059182) popup_call4_audio_in_window_ParamLimits

0x7680,	// (0x00059182) popup_call4_audio_in_window

0xb971,	// (0x0005d473) bg_popup_call2_act_pane_cp02

0x075d,	// (0x0005225f) call4_list_conf_pane

0xc0b0,	// (0x0005dbb2) call4_image_pane_g1

0xc0b0,	// (0x0005dbb2) call4_image_pane_g2

0x0001,

0xf0af,	// (0x00060bb1) call4_image_pane_g

0x09f8,	// (0x000524fa) list_single_graphic_popup_conf4_pane_ParamLimits

0x09f8,	// (0x000524fa) list_single_graphic_popup_conf4_pane

0xb971,	// (0x0005d473) list_highlight_pane_cp022

0x0a0b,	// (0x0005250d) list_single_graphic_popup_conf4_pane_g1

0xce24,	// (0x0005e926) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf914,	// (0x00061416) list_single_graphic_popup_conf4_pane_g

0x0a13,	// (0x00052515) list_single_graphic_popup_conf4_pane_t1

0x4098,	// (0x00055b9a) popup_vtel_slider_window_ParamLimits

0x4098,	// (0x00055b9a) popup_vtel_slider_window

0x072f,	// (0x00052231) dialer2_ne_pane_t2_ParamLimits

0x072f,	// (0x00052231) dialer2_ne_pane_t2

0x0001,

0xf7f5,	// (0x000612f7) dialer2_ne_pane_t_ParamLimits

0xf7f5,	// (0x000612f7) dialer2_ne_pane_t

0xc00b,	// (0x0005db0d) bg_popup_sub_pane_cp010_ParamLimits

0xc00b,	// (0x0005db0d) bg_popup_sub_pane_cp010

0x8213,	// (0x00059d15) popup_vtel_slider_window_g1_ParamLimits

0x8213,	// (0x00059d15) popup_vtel_slider_window_g1

0x821f,	// (0x00059d21) popup_vtel_slider_window_g2_ParamLimits

0x821f,	// (0x00059d21) popup_vtel_slider_window_g2

0x0003,

0xf919,	// (0x0006141b) popup_vtel_slider_window_g_ParamLimits

0xf919,	// (0x0006141b) popup_vtel_slider_window_g

0x8267,	// (0x00059d69) vtel_slider_pane_ParamLimits

0x8267,	// (0x00059d69) vtel_slider_pane

0x8276,	// (0x00059d78) vtel_slider_pane_g1_ParamLimits

0x8276,	// (0x00059d78) vtel_slider_pane_g1

0x8283,	// (0x00059d85) vtel_slider_pane_g2_ParamLimits

0x8283,	// (0x00059d85) vtel_slider_pane_g2

0x8290,	// (0x00059d92) vtel_slider_pane_g3_ParamLimits

0x8290,	// (0x00059d92) vtel_slider_pane_g3

0x8276,	// (0x00059d78) vtel_slider_pane_g4_ParamLimits

0x8276,	// (0x00059d78) vtel_slider_pane_g4

0x829d,	// (0x00059d9f) vtel_slider_pane_g5_ParamLimits

0x829d,	// (0x00059d9f) vtel_slider_pane_g5

0x0004,

0xf922,	// (0x00061424) vtel_slider_pane_g_ParamLimits

0xf922,	// (0x00061424) vtel_slider_pane_g

0x5f41,	// (0x00057a43) main_gallery2_pane

0x79f2,	// (0x000594f4) aid_size_row_itut2_dropdow_list_ParamLimits

0x79f2,	// (0x000594f4) aid_size_row_itut2_dropdow_list

0x7a5c,	// (0x0005955e) grid_vitu2_function_top_pane_ParamLimits

0x7a5c,	// (0x0005955e) grid_vitu2_function_top_pane

0x7ab0,	// (0x000595b2) popup_vitu2_dropdown_list_window_ParamLimits

0x7ab0,	// (0x000595b2) popup_vitu2_dropdown_list_window

0x7ad2,	// (0x000595d4) popup_vitu2_match_list_window

0x82aa,	// (0x00059dac) cell_vitu2_function_top_pane_ParamLimits

0x82aa,	// (0x00059dac) cell_vitu2_function_top_pane

0x82c4,	// (0x00059dc6) cell_vitu2_function_top_pane_cp01_ParamLimits

0x82c4,	// (0x00059dc6) cell_vitu2_function_top_pane_cp01

0x82e0,	// (0x00059de2) cell_vitu2_function_top_wide_pane_ParamLimits

0x82e0,	// (0x00059de2) cell_vitu2_function_top_wide_pane

0x5f41,	// (0x00057a43) bg_button_pane_cp012

0x82fe,	// (0x00059e00) cell_vitu2_function_top_pane_g1

0x8312,	// (0x00059e14) bg_button_pane_cp013_ParamLimits

0x8312,	// (0x00059e14) bg_button_pane_cp013

0x832e,	// (0x00059e30) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x832e,	// (0x00059e30) cell_vitu2_function_top_wide_pane_g1

0x34d0,	// (0x00054fd2) bg_popup_sub_pane_cp20

0x8346,	// (0x00059e48) list_vitu2_match_list_pane

0x07ba,	// (0x000522bc) bg_popup_sub_pane_cp20_g1

0x07c2,	// (0x000522c4) bg_popup_sub_pane_cp20_g2

0xc4d9,	// (0x0005dfdb) bg_popup_sub_pane_cp20_g3

0x07ca,	// (0x000522cc) bg_popup_sub_pane_cp20_g4

0xc4b9,	// (0x0005dfbb) bg_popup_sub_pane_cp20_g5

0x0a29,	// (0x0005252b) bg_popup_sub_pane_cp20_g6

0x07da,	// (0x000522dc) bg_popup_sub_pane_cp20_g7

0x07e2,	// (0x000522e4) bg_popup_sub_pane_cp20_g8

0x07ea,	// (0x000522ec) bg_popup_sub_pane_cp20_g9

0x0008,

0xf92d,	// (0x0006142f) bg_popup_sub_pane_cp20_g

0x835e,	// (0x00059e60) list_vitu2_match_list_item_pane_ParamLimits

0x835e,	// (0x00059e60) list_vitu2_match_list_item_pane

0x8370,	// (0x00059e72) list_vitu2_match_list_item_pane_t1

0x34ea,	// (0x00054fec) bg_popup_sub_pane_cp21

0xc2c0,	// (0x0005ddc2) grid_vitu2_dropdown_list_pane

0x837e,	// (0x00059e80) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x837e,	// (0x00059e80) cell_vitu2_dropdown_list_char_pane

0x83a0,	// (0x00059ea2) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x83a0,	// (0x00059ea2) cell_vitu2_dropdown_list_ctrl_pane

0x0a43,	// (0x00052545) cell_vitu2_dropdown_list_char_pane_g1

0x0a3a,	// (0x0005253c) cell_vitu2_dropdown_list_char_pane_g2

0x0a31,	// (0x00052533) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf940,	// (0x00061442) cell_vitu2_dropdown_list_char_pane_g

0x83c8,	// (0x00059eca) cell_vitu2_dropdown_list_char_pane_t1

0x83d6,	// (0x00059ed8) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x83d6,	// (0x00059ed8) cell_vitu2_dropdown_list_ctrl_pane_g1

0x83e6,	// (0x00059ee8) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x83e6,	// (0x00059ee8) cell_vitu2_dropdown_list_ctrl_pane_g2

0x83f7,	// (0x00059ef9) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x83f7,	// (0x00059ef9) cell_vitu2_dropdown_list_ctrl_pane_g3

0x8407,	// (0x00059f09) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x8407,	// (0x00059f09) cell_vitu2_dropdown_list_ctrl_pane_g4

0x18bd,	// (0x000533bf) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x18bd,	// (0x000533bf) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf947,	// (0x00061449) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf947,	// (0x00061449) cell_vitu2_dropdown_list_ctrl_pane_g

0x8420,	// (0x00059f22) aid_size_cell_gallery2_ParamLimits

0x8420,	// (0x00059f22) aid_size_cell_gallery2

0x843a,	// (0x00059f3c) grid_gallery2_pane_ParamLimits

0x843a,	// (0x00059f3c) grid_gallery2_pane

0x8451,	// (0x00059f53) scroll_pane_cp029_ParamLimits

0x8451,	// (0x00059f53) scroll_pane_cp029

0x8461,	// (0x00059f63) cell_gallery2_pane_ParamLimits

0x8461,	// (0x00059f63) cell_gallery2_pane

0x0a4c,	// (0x0005254e) cell_gallery2_pane_g2

0x84b6,	// (0x00059fb8) cell_gallery2_pane_g3

0x0a54,	// (0x00052556) cell_gallery2_pane_g4

0x0a5c,	// (0x0005255e) cell_gallery2_pane_g5

0xc2c0,	// (0x0005ddc2) grid_highlight_pane_cp10

0x7ad2,	// (0x000595d4) popup_vitu2_match_list_window_ParamLimits

0x7ae4,	// (0x000595e6) popup_vitu2_query_window_ParamLimits

0x7ae4,	// (0x000595e6) popup_vitu2_query_window

0x34ea,	// (0x00054fec) bg_vitu2_candi_button_pane

0x0a43,	// (0x00052545) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x0a3a,	// (0x0005253c) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x0a31,	// (0x00052533) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x84be,	// (0x00059fc0) bg_button_pane_cp015

0x84d3,	// (0x00059fd5) bg_button_pane_cp016

0x84df,	// (0x00059fe1) bg_button_pane_cp017

0xd30e,	// (0x0005ee10) bg_popup_sub_pane_cp22

0x0a64,	// (0x00052566) popup_vitu2_query_window_g1

0x851f,	// (0x0005a021) popup_vitu2_query_window_g2

0x0002,

0xf952,	// (0x00061454) popup_vitu2_query_window_g

0x8543,	// (0x0005a045) popup_vitu2_query_window_t1_ParamLimits

0x8543,	// (0x0005a045) popup_vitu2_query_window_t1

0x8576,	// (0x0005a078) popup_vitu2_query_window_t2_ParamLimits

0x8576,	// (0x0005a078) popup_vitu2_query_window_t2

0x8588,	// (0x0005a08a) popup_vitu2_query_window_t3_ParamLimits

0x8588,	// (0x0005a08a) popup_vitu2_query_window_t3

0x85b0,	// (0x0005a0b2) popup_vitu2_query_window_t4_ParamLimits

0x85b0,	// (0x0005a0b2) popup_vitu2_query_window_t4

0x85c4,	// (0x0005a0c6) popup_vitu2_query_window_t5_ParamLimits

0x85c4,	// (0x0005a0c6) popup_vitu2_query_window_t5

0x0006,

0xf959,	// (0x0006145b) popup_vitu2_query_window_t_ParamLimits

0xf959,	// (0x0006145b) popup_vitu2_query_window_t

0x08e2,	// (0x000523e4) main_cset_text_pane

0x7ed8,	// (0x000599da) aid_area_touch_slider_ParamLimits

0x7ef4,	// (0x000599f6) cset_slider_pane_ParamLimits

0x7f17,	// (0x00059a19) main_cset_slider_pane_g1_ParamLimits

0x7f2c,	// (0x00059a2e) main_cset_slider_pane_g2_ParamLimits

0x0903,	// (0x00052405) main_cset_slider_pane_g3_ParamLimits

0x0903,	// (0x00052405) main_cset_slider_pane_g3

0x7f41,	// (0x00059a43) main_cset_slider_pane_g4_ParamLimits

0x7f41,	// (0x00059a43) main_cset_slider_pane_g4

0x7f50,	// (0x00059a52) main_cset_slider_pane_g5_ParamLimits

0x7f50,	// (0x00059a52) main_cset_slider_pane_g5

0x7f5e,	// (0x00059a60) main_cset_slider_pane_g6_ParamLimits

0x7f5e,	// (0x00059a60) main_cset_slider_pane_g6

0xf8b6,	// (0x000613b8) main_cset_slider_pane_g_ParamLimits

0x0933,	// (0x00052435) main_cset_slider_pane_t1_ParamLimits

0x7ff2,	// (0x00059af4) main_cset_slider_pane_t2_ParamLimits

0x800c,	// (0x00059b0e) main_cset_slider_pane_t3_ParamLimits

0x8026,	// (0x00059b28) main_cset_slider_pane_t4_ParamLimits

0x8044,	// (0x00059b46) main_cset_slider_pane_t5_ParamLimits

0x8062,	// (0x00059b64) main_cset_slider_pane_t6_ParamLimits

0x8079,	// (0x00059b7b) main_cset_slider_pane_t7_ParamLimits

0x80a7,	// (0x00059ba9) main_cset_slider_pane_t8_ParamLimits

0x80a7,	// (0x00059ba9) main_cset_slider_pane_t8

0x80cf,	// (0x00059bd1) main_cset_slider_pane_t9_ParamLimits

0x80cf,	// (0x00059bd1) main_cset_slider_pane_t9

0x80f7,	// (0x00059bf9) main_cset_slider_pane_t10_ParamLimits

0x80f7,	// (0x00059bf9) main_cset_slider_pane_t10

0x811f,	// (0x00059c21) main_cset_slider_pane_t11_ParamLimits

0x811f,	// (0x00059c21) main_cset_slider_pane_t11

0x8149,	// (0x00059c4b) main_cset_slider_pane_t12_ParamLimits

0x8149,	// (0x00059c4b) main_cset_slider_pane_t12

0x8168,	// (0x00059c6a) main_cset_slider_pane_t13_ParamLimits

0x8168,	// (0x00059c6a) main_cset_slider_pane_t13

0xf8db,	// (0x000613dd) main_cset_slider_pane_t_ParamLimits

0xb971,	// (0x0005d473) bg_popup_sub_pane_cp011

0x0a70,	// (0x00052572) main_cset_text_pane_g1

0x0a78,	// (0x0005257a) main_cset_text_pane_t1

0x0a86,	// (0x00052588) main_cset_text_pane_t2

0x0a94,	// (0x00052596) main_cset_text_pane_t3

0x0aa2,	// (0x000525a4) main_cset_text_pane_t4

0x0ab0,	// (0x000525b2) main_cset_text_pane_t5

0x0abe,	// (0x000525c0) main_cset_text_pane_t6

0x0acc,	// (0x000525ce) main_cset_text_pane_t7

0x0006,

0xf968,	// (0x0006146a) main_cset_text_pane_t

0x34ea,	// (0x00054fec) main_cam4_burst_pane

0x34ea,	// (0x00054fec) main_cam5_pane

0x08a4,	// (0x000523a6) bg_button_pane_cp019

0x08ad,	// (0x000523af) bg_button_pane_cp020

0x090f,	// (0x00052411) main_cset_slider_pane_g7_ParamLimits

0x090f,	// (0x00052411) main_cset_slider_pane_g7

0x091b,	// (0x0005241d) main_cset_slider_pane_g8_ParamLimits

0x091b,	// (0x0005241d) main_cset_slider_pane_g8

0x7f72,	// (0x00059a74) main_cset_slider_pane_g9_ParamLimits

0x7f72,	// (0x00059a74) main_cset_slider_pane_g9

0x7f7e,	// (0x00059a80) main_cset_slider_pane_g10_ParamLimits

0x7f7e,	// (0x00059a80) main_cset_slider_pane_g10

0x7f8a,	// (0x00059a8c) main_cset_slider_pane_g11_ParamLimits

0x7f8a,	// (0x00059a8c) main_cset_slider_pane_g11

0x7f96,	// (0x00059a98) main_cset_slider_pane_g12_ParamLimits

0x7f96,	// (0x00059a98) main_cset_slider_pane_g12

0x7fa2,	// (0x00059aa4) main_cset_slider_pane_g13_ParamLimits

0x7fa2,	// (0x00059aa4) main_cset_slider_pane_g13

0x7fb0,	// (0x00059ab2) main_cset_slider_pane_g14_ParamLimits

0x7fb0,	// (0x00059ab2) main_cset_slider_pane_g14

0x7fbe,	// (0x00059ac0) main_cset_slider_pane_g15_ParamLimits

0x7fbe,	// (0x00059ac0) main_cset_slider_pane_g15

0x095b,	// (0x0005245d) main_cset_slider_pane_t14_ParamLimits

0x095b,	// (0x0005245d) main_cset_slider_pane_t14

0x0994,	// (0x00052496) main_cset_slider_pane_t15_ParamLimits

0x0994,	// (0x00052496) main_cset_slider_pane_t15

0x862e,	// (0x0005a130) aid_cam4_burst_size_cell_ParamLimits

0x862e,	// (0x0005a130) aid_cam4_burst_size_cell

0x864a,	// (0x0005a14c) grid_cam4_burst_pane_ParamLimits

0x864a,	// (0x0005a14c) grid_cam4_burst_pane

0x867a,	// (0x0005a17c) linegrid_cam4_burst_pane_ParamLimits

0x867a,	// (0x0005a17c) linegrid_cam4_burst_pane

0x869a,	// (0x0005a19c) scroll_pane_cp30_ParamLimits

0x869a,	// (0x0005a19c) scroll_pane_cp30

0x86a6,	// (0x0005a1a8) cell_cam4_burst_pane_ParamLimits

0x86a6,	// (0x0005a1a8) cell_cam4_burst_pane

0x0ada,	// (0x000525dc) linegrid_cam4_burst_pane_g1_ParamLimits

0x0ada,	// (0x000525dc) linegrid_cam4_burst_pane_g1

0x86e2,	// (0x0005a1e4) linegrid_cam4_burst_pane_g2_ParamLimits

0x86e2,	// (0x0005a1e4) linegrid_cam4_burst_pane_g2

0x0ae7,	// (0x000525e9) linegrid_cam4_burst_pane_g3_ParamLimits

0x0ae7,	// (0x000525e9) linegrid_cam4_burst_pane_g3

0x0002,

0xf977,	// (0x00061479) linegrid_cam4_burst_pane_g_ParamLimits

0xf977,	// (0x00061479) linegrid_cam4_burst_pane_g

0x86f3,	// (0x0005a1f5) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x86f3,	// (0x0005a1f5) linegrid_cam4_burst_pane_g3_copy1

0x0af4,	// (0x000525f6) linegrid_cam4_burst_pane_g4_ParamLimits

0x0af4,	// (0x000525f6) linegrid_cam4_burst_pane_g4

0x870d,	// (0x0005a20f) linegrid_cam4_burst_pane_g5_ParamLimits

0x870d,	// (0x0005a20f) linegrid_cam4_burst_pane_g5

0x871e,	// (0x0005a220) linegrid_cam4_burst_pane_g6_ParamLimits

0x871e,	// (0x0005a220) linegrid_cam4_burst_pane_g6

0x0b01,	// (0x00052603) linegrid_cam4_burst_pane_g7_ParamLimits

0x0b01,	// (0x00052603) linegrid_cam4_burst_pane_g7

0x872f,	// (0x0005a231) cell_cam4_burst_pane_g1

0x0b1a,	// (0x0005261c) main_cam5_pane_t1_ParamLimits

0x0b1a,	// (0x0005261c) main_cam5_pane_t1

0x0b2c,	// (0x0005262e) main_cam5_pane_t2_ParamLimits

0x0b2c,	// (0x0005262e) main_cam5_pane_t2

0x0b3e,	// (0x00052640) main_cam5_pane_t3_ParamLimits

0x0b3e,	// (0x00052640) main_cam5_pane_t3

0x0b50,	// (0x00052652) main_cam5_pane_t4_ParamLimits

0x0b50,	// (0x00052652) main_cam5_pane_t4

0x0b68,	// (0x0005266a) main_cam5_pane_t5_ParamLimits

0x0b68,	// (0x0005266a) main_cam5_pane_t5

0x0b7c,	// (0x0005267e) main_cam5_pane_t6_ParamLimits

0x0b7c,	// (0x0005267e) main_cam5_pane_t6

0x0bb5,	// (0x000526b7) main_cam5_pane_t7_ParamLimits

0x0bb5,	// (0x000526b7) main_cam5_pane_t7

0x0bc7,	// (0x000526c9) main_cam5_pane_t8_ParamLimits

0x0bc7,	// (0x000526c9) main_cam5_pane_t8

0x0be3,	// (0x000526e5) main_cam5_pane_t9_ParamLimits

0x0be3,	// (0x000526e5) main_cam5_pane_t9

0x0bf5,	// (0x000526f7) main_cam5_pane_t10_ParamLimits

0x0bf5,	// (0x000526f7) main_cam5_pane_t10

0x0c07,	// (0x00052709) main_cam5_pane_t11_ParamLimits

0x0c07,	// (0x00052709) main_cam5_pane_t11

0x0c19,	// (0x0005271b) main_cam5_pane_t12_ParamLimits

0x0c19,	// (0x0005271b) main_cam5_pane_t12

0x0c2e,	// (0x00052730) main_cam5_pane_t13_ParamLimits

0x0c2e,	// (0x00052730) main_cam5_pane_t13

0x000c,

0xf983,	// (0x00061485) main_cam5_pane_t_ParamLimits

0xf983,	// (0x00061485) main_cam5_pane_t

0x348f,	// (0x00054f91) popup_scut_keymap_window_ParamLimits

0x348f,	// (0x00054f91) popup_scut_keymap_window

0x8742,	// (0x0005a244) aid_size_cell_brow_shortcut

0xc2c0,	// (0x0005ddc2) bg_popup_window_pane_cp010

0x874e,	// (0x0005a250) grid_scut_pane

0x875a,	// (0x0005a25c) cell_scut_pane_ParamLimits

0x875a,	// (0x0005a25c) cell_scut_pane

0x8771,	// (0x0005a273) cell_scut_pane_g1

0x0c4b,	// (0x0005274d) cell_scut_pane_t1

0x0c5a,	// (0x0005275c) cell_scut_pane_t2

0x877a,	// (0x0005a27c) cell_scut_pane_t3

0x0002,

0xf99e,	// (0x000614a0) cell_scut_pane_t

0x671c,	// (0x0005821e) main_mup3_pane_g8_ParamLimits

0x671c,	// (0x0005821e) main_mup3_pane_g8

0x7a02,	// (0x00059504) area_vitu2_query_pane_ParamLimits

0x7a02,	// (0x00059504) area_vitu2_query_pane

0x84eb,	// (0x00059fed) input_focus_pane_cp08

0x0c69,	// (0x0005276b) area_vitu2_query_pane_g1

0x8788,	// (0x0005a28a) area_vitu2_query_pane_g2

0x0001,

0xf9a5,	// (0x000614a7) area_vitu2_query_pane_g

0x8799,	// (0x0005a29b) area_vitu2_query_pane_t1_ParamLimits

0x8799,	// (0x0005a29b) area_vitu2_query_pane_t1

0x87ad,	// (0x0005a2af) area_vitu2_query_pane_t2_ParamLimits

0x87ad,	// (0x0005a2af) area_vitu2_query_pane_t2

0x87c1,	// (0x0005a2c3) area_vitu2_query_pane_t3_ParamLimits

0x87c1,	// (0x0005a2c3) area_vitu2_query_pane_t3

0x027e,	// (0x00051d80) area_vitu2_query_pane_t4_ParamLimits

0x027e,	// (0x00051d80) area_vitu2_query_pane_t4

0x02a6,	// (0x00051da8) area_vitu2_query_pane_t5_ParamLimits

0x02a6,	// (0x00051da8) area_vitu2_query_pane_t5

0x02ce,	// (0x00051dd0) area_vitu2_query_pane_t6_ParamLimits

0x02ce,	// (0x00051dd0) area_vitu2_query_pane_t6

0x0006,

0xf9aa,	// (0x000614ac) area_vitu2_query_pane_t_ParamLimits

0xf9aa,	// (0x000614ac) area_vitu2_query_pane_t

0x84d3,	// (0x00059fd5) bg_button_pane_cp018

0x87e9,	// (0x0005a2eb) bg_button_pane_cp021

0x87f5,	// (0x0005a2f7) bg_button_pane_cp022

0x8818,	// (0x0005a31a) input_focus_pane_cp09

0xcf33,	// (0x0005ea35) aid_size_touch_mv_arrow_left

0xcf5e,	// (0x0005ea60) aid_size_touch_mv_arrow_right

0x7fd6,	// (0x00059ad8) main_cset_slider_pane_g16_ParamLimits

0x7fd6,	// (0x00059ad8) main_cset_slider_pane_g16

0x7fe4,	// (0x00059ae6) main_cset_slider_pane_g17_ParamLimits

0x7fe4,	// (0x00059ae6) main_cset_slider_pane_g17

0x872f,	// (0x0005a231) cell_cam4_burst_pane_g1_ParamLimits

0xb971,	// (0x0005d473) compa_mode_pane

0x822b,	// (0x00059d2d) popup_vtel_slider_window_g3_ParamLimits

0x822b,	// (0x00059d2d) popup_vtel_slider_window_g3

0x823f,	// (0x00059d41) popup_vtel_slider_window_g4_ParamLimits

0x823f,	// (0x00059d41) popup_vtel_slider_window_g4

0x8253,	// (0x00059d55) popup_vtel_slider_window_t1_ParamLimits

0x8253,	// (0x00059d55) popup_vtel_slider_window_t1

0x34ea,	// (0x00054fec) main_cl_pane

0x5fdb,	// (0x00057add) popup_imed_adjust2_window_ParamLimits

0xd30e,	// (0x0005ee10) bg_tb_trans_pane_cp05_ParamLimits

0xee37,	// (0x00060939) popup_imed_adjust2_window_g1_ParamLimits

0xee46,	// (0x00060948) popup_imed_adjust2_window_g2_ParamLimits

0xee46,	// (0x00060948) popup_imed_adjust2_window_g2

0xee52,	// (0x00060954) popup_imed_adjust2_window_g3_ParamLimits

0xee52,	// (0x00060954) popup_imed_adjust2_window_g3

0x0002,

0xf72a,	// (0x0006122c) popup_imed_adjust2_window_g_ParamLimits

0xf72a,	// (0x0006122c) popup_imed_adjust2_window_g

0xee5e,	// (0x00060960) popup_imed_adjust2_window_t1_ParamLimits

0xee76,	// (0x00060978) slider_imed_adjust_pane_ParamLimits

0xee8a,	// (0x0006098c) slider_imed_adjust_pane_g1_ParamLimits

0xee9a,	// (0x0006099c) slider_imed_adjust_pane_g2_ParamLimits

0xeeaa,	// (0x000609ac) slider_imed_adjust_pane_g3_ParamLimits

0xeebb,	// (0x000609bd) slider_imed_adjust_pane_g4_ParamLimits

0xf731,	// (0x00061233) slider_imed_adjust_pane_g_ParamLimits

0x7751,	// (0x00059253) aid_touch_area_cam4_ParamLimits

0x7751,	// (0x00059253) aid_touch_area_cam4

0x7761,	// (0x00059263) battery_pane_cp01

0x77e8,	// (0x000592ea) main_camera4_pane_g6_ParamLimits

0x77e8,	// (0x000592ea) main_camera4_pane_g6

0x7806,	// (0x00059308) main_camera4_pane_t2_ParamLimits

0x7806,	// (0x00059308) main_camera4_pane_t2

0x0001,

0xf829,	// (0x0006132b) main_camera4_pane_t_ParamLimits

0xf829,	// (0x0006132b) main_camera4_pane_t

0x7887,	// (0x00059389) aid_touch_area_vid4_ParamLimits

0x7887,	// (0x00059389) aid_touch_area_vid4

0x78c7,	// (0x000593c9) main_video4_pane_g5_ParamLimits

0x78c7,	// (0x000593c9) main_video4_pane_g5

0x78eb,	// (0x000593ed) vid4_progress_pane_ParamLimits

0x78eb,	// (0x000593ed) vid4_progress_pane

0x0927,	// (0x00052429) main_cset_slider_pane_g18_ParamLimits

0x0927,	// (0x00052429) main_cset_slider_pane_g18

0x0b0e,	// (0x00052610) cell_cam4_burst_pane_g2_ParamLimits

0x0b0e,	// (0x00052610) cell_cam4_burst_pane_g2

0x0001,

0xf97e,	// (0x00061480) cell_cam4_burst_pane_g_ParamLimits

0xf97e,	// (0x00061480) cell_cam4_burst_pane_g

0x8828,	// (0x0005a32a) bg_cl_pane_ParamLimits

0x8828,	// (0x0005a32a) bg_cl_pane

0x8834,	// (0x0005a336) cl_header_pane_ParamLimits

0x8834,	// (0x0005a336) cl_header_pane

0x8840,	// (0x0005a342) cl_listscroll_pane_ParamLimits

0x8840,	// (0x0005a342) cl_listscroll_pane

0x0c75,	// (0x00052777) bg_cl_pane_g1

0x0c7d,	// (0x0005277f) bg_cl_pane_g2

0x0c85,	// (0x00052787) bg_cl_pane_g3

0x0c8d,	// (0x0005278f) bg_cl_pane_g4

0x0c95,	// (0x00052797) bg_cl_pane_g5

0x0c9d,	// (0x0005279f) bg_cl_pane_g6

0x0ca5,	// (0x000527a7) bg_cl_pane_g7

0x0cad,	// (0x000527af) bg_cl_pane_g8

0x0cb5,	// (0x000527b7) bg_cl_pane_g9

0x0008,

0xf9b9,	// (0x000614bb) bg_cl_pane_g

0x884c,	// (0x0005a34e) aid_height_cl_leading_ParamLimits

0x884c,	// (0x0005a34e) aid_height_cl_leading

0x8858,	// (0x0005a35a) aid_height_cl_text_ParamLimits

0x8858,	// (0x0005a35a) aid_height_cl_text

0xc064,	// (0x0005db66) bg_cl_header_pane_ParamLimits

0xc064,	// (0x0005db66) bg_cl_header_pane

0x8870,	// (0x0005a372) cl_header_pane_g1_ParamLimits

0x8870,	// (0x0005a372) cl_header_pane_g1

0x887d,	// (0x0005a37f) cl_header_pane_t1_ParamLimits

0x887d,	// (0x0005a37f) cl_header_pane_t1

0x0cbd,	// (0x000527bf) cl_list_pane

0x08fa,	// (0x000523fc) hc_scroll_pane_cp01

0xc4b9,	// (0x0005dfbb) bg_cl_header_pane_g1

0x07ba,	// (0x000522bc) bg_cl_header_pane_g2

0xc4d9,	// (0x0005dfdb) bg_cl_header_pane_g3

0x07ca,	// (0x000522cc) bg_cl_header_pane_g4

0x07c2,	// (0x000522c4) bg_cl_header_pane_g5

0x0a29,	// (0x0005252b) bg_cl_header_pane_g6

0x07e2,	// (0x000522e4) bg_cl_header_pane_g7

0x07ea,	// (0x000522ec) bg_cl_header_pane_g8

0x07da,	// (0x000522dc) bg_cl_header_pane_g9

0x0008,

0xf9cc,	// (0x000614ce) bg_cl_header_pane_g

0x888f,	// (0x0005a391) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x888f,	// (0x0005a391) hc_cl_list_double_graphic_heading_pane

0x88a3,	// (0x0005a3a5) hc_cl_list_single_graphic_pane_ParamLimits

0x88a3,	// (0x0005a3a5) hc_cl_list_single_graphic_pane

0x88bd,	// (0x0005a3bf) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x88bd,	// (0x0005a3bf) hc_cl_list_single_graphic_pane_g1

0x88c9,	// (0x0005a3cb) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x88c9,	// (0x0005a3cb) hc_cl_list_single_graphic_pane_g2

0x0001,

0xf9df,	// (0x000614e1) hc_cl_list_single_graphic_pane_g_ParamLimits

0xf9df,	// (0x000614e1) hc_cl_list_single_graphic_pane_g

0x88dd,	// (0x0005a3df) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x88dd,	// (0x0005a3df) hc_cl_list_single_graphic_pane_t1

0x88bd,	// (0x0005a3bf) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x88bd,	// (0x0005a3bf) hc_cl_list_double_graphic_heading_pane_g1

0x88f2,	// (0x0005a3f4) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x88f2,	// (0x0005a3f4) hc_cl_list_double_graphic_heading_pane_g2

0x8906,	// (0x0005a408) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x8906,	// (0x0005a408) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xf9e4,	// (0x000614e6) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xf9e4,	// (0x000614e6) hc_cl_list_double_graphic_heading_pane_g

0x891a,	// (0x0005a41c) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x891a,	// (0x0005a41c) hc_cl_list_double_graphic_heading_pane_t1

0x892f,	// (0x0005a431) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x892f,	// (0x0005a431) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xf9eb,	// (0x000614ed) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xf9eb,	// (0x000614ed) hc_cl_list_double_graphic_heading_pane_t

0x894c,	// (0x0005a44e) vid4_progress_pane_g1

0x895c,	// (0x0005a45e) vid4_progress_pane_g2

0x896c,	// (0x0005a46e) vid4_progress_pane_g3

0x897e,	// (0x0005a480) vid4_progress_pane_g4

0x0004,

0xf9f0,	// (0x000614f2) vid4_progress_pane_g

0x8996,	// (0x0005a498) vid4_progress_pane_t1

0x89ac,	// (0x0005a4ae) vid4_progress_pane_t2

0x0002,

0xf9fb,	// (0x000614fd) vid4_progress_pane_t

0x89d7,	// (0x0005a4d9) wait_bar_pane_cp07

0xe6ac,	// (0x000601ae) blid_firmament_pane_ParamLimits

0xe6ef,	// (0x000601f1) popup_blid_sat_info2_window_g1

0xe713,	// (0x00060215) popup_blid_sat_info2_window_t3

0xe721,	// (0x00060223) popup_blid_sat_info2_window_t4

0xe72f,	// (0x00060231) popup_blid_sat_info2_window_t5

0xe75f,	// (0x00060261) popup_blid_sat_info2_window_t6

0xe76f,	// (0x00060271) popup_blid_sat_info2_window_t7

0xe77d,	// (0x0006027f) popup_blid_sat_info2_window_t8

0xe78b,	// (0x0006028d) popup_blid_sat_info2_window_t9

0xe799,	// (0x0006029b) popup_blid_sat_info2_window_t10

0xe85a,	// (0x0006035c) aid_firma_cardinal_ParamLimits

0xe86e,	// (0x00060370) blid_firmament_pane_t1_ParamLimits

0xe885,	// (0x00060387) blid_firmament_pane_t2_ParamLimits

0xe89c,	// (0x0006039e) blid_firmament_pane_t3_ParamLimits

0xe8b3,	// (0x000603b5) blid_firmament_pane_t4_ParamLimits

0xf623,	// (0x00061125) blid_firmament_pane_t_ParamLimits

0xe8ca,	// (0x000603cc) blid_sat_info_pane_ParamLimits

0x5f41,	// (0x00057a43) main_cam_set_pane_ParamLimits

0x6deb,	// (0x000588ed) aid_size_cell_colour_35_ParamLimits

0x6e05,	// (0x00058907) aid_size_cell_colour_112_ParamLimits

0x6e1c,	// (0x0005891e) aid_size_cell_effect_ParamLimits

0xc00b,	// (0x0005db0d) bg_tb_trans_pane_cp02_ParamLimits

0xc8e0,	// (0x0005e3e2) heading_imed_pane_ParamLimits

0x6e36,	// (0x00058938) listscroll_imed_pane_ParamLimits

0xdb5f,	// (0x0005f661) popup_call2_audio_first_window_g5_ParamLimits

0xdb5f,	// (0x0005f661) popup_call2_audio_first_window_g5

0x7449,	// (0x00058f4b) aid_size_touch_image3_arrow_left_ParamLimits

0x7449,	// (0x00058f4b) aid_size_touch_image3_arrow_left

0x745f,	// (0x00058f61) aid_size_touch_image3_arrow_right_ParamLimits

0x745f,	// (0x00058f61) aid_size_touch_image3_arrow_right

0x89c1,	// (0x0005a4c3) vid4_progress_pane_t3

0x6fb8,	// (0x00058aba) main_hwr_training_symbol_option_pane_ParamLimits

0x6fb8,	// (0x00058aba) main_hwr_training_symbol_option_pane

0xefa8,	// (0x00060aaa) popup_hwr_training_preview_window_ParamLimits

0xefa8,	// (0x00060aaa) popup_hwr_training_preview_window

0x7019,	// (0x00058b1b) hwr_training_navi_pane_g5_ParamLimits

0x7019,	// (0x00058b1b) hwr_training_navi_pane_g5

0x07a8,	// (0x000522aa) popup_char_count_window

0x34d0,	// (0x00054fd2) bg_popup_sub_pane_cp20_ParamLimits

0x8346,	// (0x00059e48) list_vitu2_match_list_pane_ParamLimits

0x8352,	// (0x00059e54) vitu2_page_scroll_pane_ParamLimits

0x8352,	// (0x00059e54) vitu2_page_scroll_pane

0x0ccf,	// (0x000527d1) list_single_hwr_training_symbol_option_pane_ParamLimits

0x0ccf,	// (0x000527d1) list_single_hwr_training_symbol_option_pane

0x0ce2,	// (0x000527e4) list_single_hwr_training_symbol_option_pane_g1

0x0cea,	// (0x000527ec) list_single_hwr_training_symbol_option_pane_t1

0x0cf8,	// (0x000527fa) bg_button_pane_cp023

0x0d01,	// (0x00052803) bg_button_pane_cp024

0x0d34,	// (0x00052836) vitu2_page_scroll_pane_g1

0x0d3c,	// (0x0005283e) vitu2_page_scroll_pane_g2

0x0001,

0xfa02,	// (0x00061504) vitu2_page_scroll_pane_g

0x0d44,	// (0x00052846) vitu2_page_scroll_pane_t1

0xc8d7,	// (0x0005e3d9) popup_char_count_window_g1

0x0d53,	// (0x00052855) popup_char_count_window_g2

0x0bac,	// (0x000526ae) popup_char_count_window_g3

0x0002,

0xfa07,	// (0x00061509) popup_char_count_window_g

0x0d5c,	// (0x0005285e) popup_char_count_window_t1

0x34ea,	// (0x00054fec) main_vded2_pane

0xee23,	// (0x00060925) aid_size_cell_imed_line

0xee2d,	// (0x0006092f) grid_imed_line_width_pane

0x7957,	// (0x00059459) vid4_indicators_pane_g4

0x0d6a,	// (0x0005286c) cell_imed_line_width_pane_ParamLimits

0x0d6a,	// (0x0005286c) cell_imed_line_width_pane

0x0d7e,	// (0x00052880) cell_imed_line_width_pane_g1

0x0d87,	// (0x00052889) cell_imed_line_width_pane_g2

0x0001,

0xfa0e,	// (0x00061510) cell_imed_line_width_pane_g

0x89fc,	// (0x0005a4fe) main_vded2_pane_g1_ParamLimits

0x89fc,	// (0x0005a4fe) main_vded2_pane_g1

0x8a09,	// (0x0005a50b) main_vded2_pane_g2_ParamLimits

0x8a09,	// (0x0005a50b) main_vded2_pane_g2

0x0001,

0xfa13,	// (0x00061515) main_vded2_pane_g_ParamLimits

0xfa13,	// (0x00061515) main_vded2_pane_g

0x8a17,	// (0x0005a519) vded2_slider_pane_ParamLimits

0x8a17,	// (0x0005a519) vded2_slider_pane

0x8a24,	// (0x0005a526) aid_size_touch_vded2_end

0x8a2e,	// (0x0005a530) aid_size_touch_vded2_playhead

0x0d8f,	// (0x00052891) aid_size_touch_vded2_start

0x0d97,	// (0x00052899) vded2_slider_bg_pane

0x0da0,	// (0x000528a2) vded2_slider_pane_g1

0x0da9,	// (0x000528ab) vded2_slider_pane_g2

0x8a36,	// (0x0005a538) vded2_slider_pane_g3

0x0002,

0xfa18,	// (0x0006151a) vded2_slider_pane_g

0x0db1,	// (0x000528b3) vded2_slider_bg_pane_g1

0x0dba,	// (0x000528bc) vded2_slider_bg_pane_g2

0x0dc3,	// (0x000528c5) vded2_slider_bg_pane_g3

0x0002,

0xfa1f,	// (0x00061521) vded2_slider_bg_pane_g

0x588a,	// (0x0005738c) aid_postcard_touch_down_pane_ParamLimits

0x588a,	// (0x0005738c) aid_postcard_touch_down_pane

0x589a,	// (0x0005739c) aid_postcard_touch_up_pane_ParamLimits

0x589a,	// (0x0005739c) aid_postcard_touch_up_pane

0x34ea,	// (0x00054fec) main_blid2_pane

0x5f6a,	// (0x00057a6c) popup_blid2_search_window

0xb971,	// (0x0005d473) blid2_gps_pane

0xb971,	// (0x0005d473) blid2_navig_pane

0xb971,	// (0x0005d473) blid2_search_pane

0xb971,	// (0x0005d473) blid2_tripm_pane

0x8a3f,	// (0x0005a541) blid2_search_pane_g1_ParamLimits

0x8a3f,	// (0x0005a541) blid2_search_pane_g1

0x8a4f,	// (0x0005a551) blid2_search_pane_t1_ParamLimits

0x8a4f,	// (0x0005a551) blid2_search_pane_t1

0x8a61,	// (0x0005a563) aid_size_cell_blid2_gps_ParamLimits

0x8a61,	// (0x0005a563) aid_size_cell_blid2_gps

0x8a71,	// (0x0005a573) blid2_gps_pane_g1_ParamLimits

0x8a71,	// (0x0005a573) blid2_gps_pane_g1

0x8a7d,	// (0x0005a57f) grid_blid2_satellite_pane_ParamLimits

0x8a7d,	// (0x0005a57f) grid_blid2_satellite_pane

0x8a8d,	// (0x0005a58f) blid2_navig_pane_g1_ParamLimits

0x8a8d,	// (0x0005a58f) blid2_navig_pane_g1

0x8a99,	// (0x0005a59b) blid2_navig_pane_t1_ParamLimits

0x8a99,	// (0x0005a59b) blid2_navig_pane_t1

0x8aab,	// (0x0005a5ad) blid2_navig_pane_t2_ParamLimits

0x8aab,	// (0x0005a5ad) blid2_navig_pane_t2

0x0001,

0xfa26,	// (0x00061528) blid2_navig_pane_t_ParamLimits

0xfa26,	// (0x00061528) blid2_navig_pane_t

0x8abd,	// (0x0005a5bf) blid2_navig_ring_pane_ParamLimits

0x8abd,	// (0x0005a5bf) blid2_navig_ring_pane

0x8acd,	// (0x0005a5cf) blid2_speed_pane_ParamLimits

0x8acd,	// (0x0005a5cf) blid2_speed_pane

0x8ad9,	// (0x0005a5db) blid2_tripm_pane_g1_ParamLimits

0x8ad9,	// (0x0005a5db) blid2_tripm_pane_g1

0x8ae9,	// (0x0005a5eb) blid2_tripm_pane_g2_ParamLimits

0x8ae9,	// (0x0005a5eb) blid2_tripm_pane_g2

0x8af5,	// (0x0005a5f7) blid2_tripm_pane_g3_ParamLimits

0x8af5,	// (0x0005a5f7) blid2_tripm_pane_g3

0x8b01,	// (0x0005a603) blid2_tripm_pane_g4_ParamLimits

0x8b01,	// (0x0005a603) blid2_tripm_pane_g4

0x8b0d,	// (0x0005a60f) blid2_tripm_pane_g5_ParamLimits

0x8b0d,	// (0x0005a60f) blid2_tripm_pane_g5

0x0005,

0xfa2b,	// (0x0006152d) blid2_tripm_pane_g_ParamLimits

0xfa2b,	// (0x0006152d) blid2_tripm_pane_g

0x8b29,	// (0x0005a62b) blid2_tripm_pane_t1_ParamLimits

0x8b29,	// (0x0005a62b) blid2_tripm_pane_t1

0x8b3d,	// (0x0005a63f) blid2_tripm_pane_t2_ParamLimits

0x8b3d,	// (0x0005a63f) blid2_tripm_pane_t2

0x8b4f,	// (0x0005a651) blid2_tripm_pane_t3_ParamLimits

0x8b4f,	// (0x0005a651) blid2_tripm_pane_t3

0x0003,

0xfa38,	// (0x0006153a) blid2_tripm_pane_t_ParamLimits

0xfa38,	// (0x0006153a) blid2_tripm_pane_t

0x8b81,	// (0x0005a683) cell_blid2_satellite_pane_ParamLimits

0x8b81,	// (0x0005a683) cell_blid2_satellite_pane

0x8b9b,	// (0x0005a69d) cell_blid2_satellite_pane_g1

0x0dcc,	// (0x000528ce) cell_blid2_satellite_pane_t1

0xc0b0,	// (0x0005dbb2) blid2_speed_pane_g1

0x0dda,	// (0x000528dc) blid2_speed_pane_t1

0x0de8,	// (0x000528ea) blid2_speed_pane_t2

0x0001,

0xfa41,	// (0x00061543) blid2_speed_pane_t

0xc0b0,	// (0x0005dbb2) blid2_navig_ring_pane_g1

0x8ba4,	// (0x0005a6a6) blid2_navig_ring_pane_g2

0x8bac,	// (0x0005a6ae) blid2_navig_ring_pane_g3

0x8bb4,	// (0x0005a6b6) blid2_navig_ring_pane_g4

0x8bbc,	// (0x0005a6be) blid2_navig_ring_pane_g5

0x0004,

0xfa46,	// (0x00061548) blid2_navig_ring_pane_g

0xb971,	// (0x0005d473) bg_popup_window_pane_cp011

0x0df6,	// (0x000528f8) popup_blid2_search_window_g1

0x0dfe,	// (0x00052900) popup_blid2_search_window_t1

0x0e0c,	// (0x0005290e) popup_blid2_search_window_t2

0x0001,

0xfa51,	// (0x00061553) popup_blid2_search_window_t

0xc3c8,	// (0x0005deca) main_browser_pane_g1

0xc10e,	// (0x0005dc10) main_browser_pane_ParamLimits

0x5f41,	// (0x00057a43) bg_button_pane_cp011_ParamLimits

0x7bfb,	// (0x000596fd) cell_vitu2_function_pane_g1_ParamLimits

0xd30e,	// (0x0005ee10) bg_popup_sub_pane_cp22_ParamLimits

0x84eb,	// (0x00059fed) input_focus_pane_cp08_ParamLimits

0x8506,	// (0x0005a008) popup_vitu2_query_button_pane_ParamLimits

0x8506,	// (0x0005a008) popup_vitu2_query_button_pane

0x8515,	// (0x0005a017) popup_vitu2_query_input_button_pane

0x0a64,	// (0x00052566) popup_vitu2_query_window_g1_ParamLimits

0x851f,	// (0x0005a021) popup_vitu2_query_window_g2_ParamLimits

0xf952,	// (0x00061454) popup_vitu2_query_window_g_ParamLimits

0xb971,	// (0x0005d473) bg_button_pane_cp026

0x8bc4,	// (0x0005a6c6) popup_vitu2_query_input_button_pane_g1

0xb971,	// (0x0005d473) bg_button_pane_cp025

0x0e1a,	// (0x0005291c) popup_vitu2_query_button_pane_t1

0x643d,	// (0x00057f3f) main_mp3_pane_t6

0x644d,	// (0x00057f4f) popup_slider_window_cp01

0x783c,	// (0x0005933e) cam4_battery_pane

0x7916,	// (0x00059418) cam4_battery_pane_cp02

0x8944,	// (0x0005a446) cam4_battery_pane_cp01

0x8944,	// (0x0005a446) cam4_battery_pane_cp03

0x0e28,	// (0x0005292a) cam4_battery_pane_g1

0xc0b0,	// (0x0005dbb2) cam4_battery_pane_g2

0x0001,

0xfa56,	// (0x00061558) cam4_battery_pane_g

0xe7a7,	// (0x000602a9) popup_blid_sat_info2_window_t11

0xcf33,	// (0x0005ea35) aid_size_touch_mv_arrow_left_ParamLimits

0xcf5e,	// (0x0005ea60) aid_size_touch_mv_arrow_right_ParamLimits

0xcfbc,	// (0x0005eabe) navi_pane_g1_ParamLimits

0xcfc8,	// (0x0005eaca) navi_pane_g2_ParamLimits

0xcff6,	// (0x0005eaf8) navi_pane_g3_ParamLimits

0xf334,	// (0x00060e36) navi_pane_g_ParamLimits

0x54be,	// (0x00056fc0) navi_pane_mv_t1_ParamLimits

0x6e42,	// (0x00058944) grid_imed_effect_pane_ParamLimits

0x3f58,	// (0x00055a5a) aid_placing_vt_slider_lsc

0xc317,	// (0x0005de19) aid_placing_vt_slider_prt

0xc00b,	// (0x0005db0d) bg_tb_trans_pane_cp01_ParamLimits

0xea45,	// (0x00060547) popup_image_details_window_g1_ParamLimits

0xea58,	// (0x0006055a) popup_image_details_window_g2_ParamLimits

0xea6d,	// (0x0006056f) popup_image_details_window_g3_ParamLimits

0xea6d,	// (0x0006056f) popup_image_details_window_g3

0xf663,	// (0x00061165) popup_image_details_window_g_ParamLimits

0xea81,	// (0x00060583) popup_image_details_window_t1_ParamLimits

0xea93,	// (0x00060595) popup_image_details_window_t2_ParamLimits

0xeaac,	// (0x000605ae) popup_image_details_window_t3_ParamLimits

0xeac0,	// (0x000605c2) popup_image_details_window_t4_ParamLimits

0xeadb,	// (0x000605dd) popup_image_details_window_t5_ParamLimits

0xf66a,	// (0x0006116c) popup_image_details_window_t_ParamLimits

0x8864,	// (0x0005a366) cl_header_name_pane_ParamLimits

0x8864,	// (0x0005a366) cl_header_name_pane

0x8bcc,	// (0x0005a6ce) cl_header_name_pane_t1_ParamLimits

0x8bcc,	// (0x0005a6ce) cl_header_name_pane_t1

0x8be3,	// (0x0005a6e5) cl_header_name_pane_t2_ParamLimits

0x8be3,	// (0x0005a6e5) cl_header_name_pane_t2

0x8c0d,	// (0x0005a70f) cl_header_name_pane_t3_ParamLimits

0x8c0d,	// (0x0005a70f) cl_header_name_pane_t3

0x0002,

0xfa5b,	// (0x0006155d) cl_header_name_pane_t_ParamLimits

0xfa5b,	// (0x0006155d) cl_header_name_pane_t

0xd085,	// (0x0005eb87) navi_pane_mv_g2_ParamLimits

0x0790,	// (0x00052292) field_vitu2_entry_pane_g1_ParamLimits

0x079c,	// (0x0005229e) field_vitu2_entry_pane_g2_ParamLimits

0xd330,	// (0x0005ee32) field_vitu2_entry_pane_g3_ParamLimits

0xd330,	// (0x0005ee32) field_vitu2_entry_pane_g3

0xf85b,	// (0x0006135d) field_vitu2_entry_pane_g_ParamLimits

0x7b89,	// (0x0005968b) cell_vitu2_itu_pane_g1_ParamLimits

0x7ba1,	// (0x000596a3) cell_vitu2_itu_pane_g2_ParamLimits

0x7ba1,	// (0x000596a3) cell_vitu2_itu_pane_g2

0x0001,

0xf867,	// (0x00061369) cell_vitu2_itu_pane_g_ParamLimits

0xf867,	// (0x00061369) cell_vitu2_itu_pane_g

0x5f41,	// (0x00057a43) bg_vkb2_func_pane_cp05_ParamLimits

0x5f41,	// (0x00057a43) bg_vkb2_func_pane_cp05

0x5f41,	// (0x00057a43) bg_vkb2_func_pane_cp03

0x5f41,	// (0x00057a43) bg_vkb2_func_pane_cp04

0x5f41,	// (0x00057a43) bg_vkb2_func_pane_cp10_ParamLimits

0x5f41,	// (0x00057a43) bg_vkb2_func_pane_cp10

0x8806,	// (0x0005a308) bg_vkb2_func_pane_cp08

0x84d3,	// (0x00059fd5) bg_vkb2_func_pane_cp06

0x87e9,	// (0x0005a2eb) bg_vkb2_func_pane_cp07

0x0d0a,	// (0x0005280c) bg_vkb2_func_pane_cp11_ParamLimits

0x0d0a,	// (0x0005280c) bg_vkb2_func_pane_cp11

0x0d1f,	// (0x00052821) bg_vkb2_func_pane_cp12_ParamLimits

0x0d1f,	// (0x00052821) bg_vkb2_func_pane_cp12

0xb971,	// (0x0005d473) bg_vkb2_func_pane_cp09

0x07ba,	// (0x000522bc) bg_vkb2_func_pane_g1

0xc4d9,	// (0x0005dfdb) bg_vkb2_func_pane_g2

0x07c2,	// (0x000522c4) bg_vkb2_func_pane_g3

0x07ca,	// (0x000522cc) bg_vkb2_func_pane_g4

0x0a29,	// (0x0005252b) bg_vkb2_func_pane_g5

0x07e2,	// (0x000522e4) bg_vkb2_func_pane_g6

0x07ea,	// (0x000522ec) bg_vkb2_func_pane_g7

0x07da,	// (0x000522dc) bg_vkb2_func_pane_g8

0xc4b9,	// (0x0005dfbb) bg_vkb2_func_pane_g9

0x0008,

0xfa62,	// (0x00061564) bg_vkb2_func_pane_g

0x8b1b,	// (0x0005a61d) blid2_tripm_pane_g6_ParamLimits

0x8b1b,	// (0x0005a61d) blid2_tripm_pane_g6

0x06d0,	// (0x000521d2) mp4_progress_pane_g1

0x8b75,	// (0x0005a677) blid2_tripm_values_pane_ParamLimits

0x8b75,	// (0x0005a677) blid2_tripm_values_pane

0x8c32,	// (0x0005a734) blid2_tripm_values_pane_t1

0x8c40,	// (0x0005a742) blid2_tripm_values_pane_t2

0x8c4e,	// (0x0005a750) blid2_tripm_values_pane_t3

0x8c5c,	// (0x0005a75e) blid2_tripm_values_pane_t4

0x8c6a,	// (0x0005a76c) blid2_tripm_values_pane_t5

0x8c78,	// (0x0005a77a) blid2_tripm_values_pane_t6

0x8c86,	// (0x0005a788) blid2_tripm_values_pane_t7

0x8c94,	// (0x0005a796) blid2_tripm_values_pane_t8

0x8ca2,	// (0x0005a7a4) blid2_tripm_values_pane_t9

0x0008,

0xfa75,	// (0x00061577) blid2_tripm_values_pane_t

0x3f98,	// (0x00055a9a) call_video_pane_t1_ParamLimits

0x3fb9,	// (0x00055abb) call_video_pane_t2_ParamLimits

0xf1dd,	// (0x00060cdf) call_video_pane_t_ParamLimits

0x57d4,	// (0x000572d6) msg_header_pane_g1_ParamLimits

0xd269,	// (0x0005ed6b) msg_header_pane_g2_ParamLimits

0xd269,	// (0x0005ed6b) msg_header_pane_g2

0x0001,

0xf3d2,	// (0x00060ed4) msg_header_pane_g_ParamLimits

0xf3d2,	// (0x00060ed4) msg_header_pane_g

0xc10e,	// (0x0005dc10) main_clock2_pane_ParamLimits

0x6bbc,	// (0x000586be) grid_clock2_toolbar_pane_ParamLimits

0x6bbc,	// (0x000586be) grid_clock2_toolbar_pane

0x6bbc,	// (0x000586be) listscroll_clock2_pane_ParamLimits

0x6bbc,	// (0x000586be) listscroll_clock2_pane

0x6c6c,	// (0x0005876e) main_clock2_pane_t3_ParamLimits

0x6c6c,	// (0x0005876e) main_clock2_pane_t3

0x6c7e,	// (0x00058780) main_clock2_pane_t4_ParamLimits

0x6c7e,	// (0x00058780) main_clock2_pane_t4

0x0e32,	// (0x00052934) cell_clock2_toolbar_pane

0x0e3a,	// (0x0005293c) cell_clock2_toolbar_pane_cp01

0x0e3a,	// (0x0005293c) cell_clock2_toolbar_pane_cp02

0x0e42,	// (0x00052944) cell_clock2_toolbar_pane_cp03

0x0e4a,	// (0x0005294c) list_clock2_pane

0xceb8,	// (0x0005e9ba) scroll_pane_cp10

0x0e52,	// (0x00052954) list_single_clock2_pane_ParamLimits

0x0e52,	// (0x00052954) list_single_clock2_pane

0xc2c0,	// (0x0005ddc2) list_highlight_pane_cp08

0x0e5f,	// (0x00052961) list_single_clock2_pane_t1

0x0e6d,	// (0x0005296f) list_single_clock2_pane_t2

0x0001,

0xfa88,	// (0x0006158a) list_single_clock2_pane_t

0xb971,	// (0x0005d473) bg_button_pane_cp10

0x0e7b,	// (0x0005297d) cell_clock2_toolbar_pane_g1

0x57f8,	// (0x000572fa) aid_main_viewer_pane_g1_ParamLimits

0x57f8,	// (0x000572fa) aid_main_viewer_pane_g1

0x5804,	// (0x00057306) aid_main_viewer_pane_g2_ParamLimits

0x5804,	// (0x00057306) aid_main_viewer_pane_g2

0x5810,	// (0x00057312) aid_main_viewer_pane_g3_ParamLimits

0x5810,	// (0x00057312) aid_main_viewer_pane_g3

0x5821,	// (0x00057323) aid_main_viewer_pane_g4_ParamLimits

0x5821,	// (0x00057323) aid_main_viewer_pane_g4

0x0003,

0xf3e3,	// (0x00060ee5) aid_main_viewer_pane_g_ParamLimits

0xf3e3,	// (0x00060ee5) aid_main_viewer_pane_g

0x5f34,	// (0x00057a36) main_calc_pane_ParamLimits

0x5f4f,	// (0x00057a51) main_dialer2_pane_ParamLimits

0x34ea,	// (0x00054fec) main_cam6_pane

0x34ea,	// (0x00054fec) main_vid6_pane

0x6bc8,	// (0x000586ca) listscroll_gen_pane_cp06_ParamLimits

0x6bc8,	// (0x000586ca) listscroll_gen_pane_cp06

0x6c90,	// (0x00058792) main_clock2_pane_t5_ParamLimits

0x6c90,	// (0x00058792) main_clock2_pane_t5

0x6cdd,	// (0x000587df) aid_call2_pane_cp10_ParamLimits

0x6cef,	// (0x000587f1) aid_call_pane_cp10_ParamLimits

0xcf27,	// (0x0005ea29) popup_clock_analogue_window_cp10_g1_ParamLimits

0xcf27,	// (0x0005ea29) popup_clock_analogue_window_cp10_g2_ParamLimits

0x6d01,	// (0x00058803) popup_clock_analogue_window_cp10_g3_ParamLimits

0x6d01,	// (0x00058803) popup_clock_analogue_window_cp10_g4_ParamLimits

0xcf27,	// (0x0005ea29) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf71f,	// (0x00061221) popup_clock_analogue_window_cp10_g_ParamLimits

0x6d17,	// (0x00058819) popup_clock_analogue_window_cp10_t1_ParamLimits

0x0741,	// (0x00052243) cell_dialer2_keypad_pane_g2_ParamLimits

0x0741,	// (0x00052243) cell_dialer2_keypad_pane_g2

0x0001,

0xf7fa,	// (0x000612fc) cell_dialer2_keypad_pane_g_ParamLimits

0xf7fa,	// (0x000612fc) cell_dialer2_keypad_pane_g

0xc0ba,	// (0x0005dbbc) cell_dialer2_keypad_pane_t1

0x7ec5,	// (0x000599c7) main_cset_text2_pane_ParamLimits

0x7ec5,	// (0x000599c7) main_cset_text2_pane

0x0c69,	// (0x0005276b) area_vitu2_query_pane_g1_ParamLimits

0x8788,	// (0x0005a28a) area_vitu2_query_pane_g2_ParamLimits

0xf9a5,	// (0x000614a7) area_vitu2_query_pane_g_ParamLimits

0x02f6,	// (0x00051df8) area_vitu2_query_pane_t7_ParamLimits

0x02f6,	// (0x00051df8) area_vitu2_query_pane_t7

0x84d3,	// (0x00059fd5) bg_button_pane_cp018_ParamLimits

0x87e9,	// (0x0005a2eb) bg_button_pane_cp021_ParamLimits

0x87f5,	// (0x0005a2f7) bg_button_pane_cp022_ParamLimits

0x8806,	// (0x0005a308) bg_vkb2_func_pane_cp08_ParamLimits

0x84d3,	// (0x00059fd5) bg_vkb2_func_pane_cp06_ParamLimits

0x87e9,	// (0x0005a2eb) bg_vkb2_func_pane_cp07_ParamLimits

0x8818,	// (0x0005a31a) input_focus_pane_cp09_ParamLimits

0x8cb0,	// (0x0005a7b2) cam6_autofocus_pane_ParamLimits

0x8cb0,	// (0x0005a7b2) cam6_autofocus_pane

0x8ccc,	// (0x0005a7ce) cam6_image_uncrop_pane_ParamLimits

0x8ccc,	// (0x0005a7ce) cam6_image_uncrop_pane

0x8d05,	// (0x0005a807) cam6_indi_pane_ParamLimits

0x8d05,	// (0x0005a807) cam6_indi_pane

0x8d1f,	// (0x0005a821) cam6_mode_pane_ParamLimits

0x8d1f,	// (0x0005a821) cam6_mode_pane

0x8d33,	// (0x0005a835) cam6_timer_pane_ParamLimits

0x8d33,	// (0x0005a835) cam6_timer_pane

0x8d47,	// (0x0005a849) cam6_zoom_pane_ParamLimits

0x8d47,	// (0x0005a849) cam6_zoom_pane

0x8d62,	// (0x0005a864) cam6_mode_pane_g1_ParamLimits

0x8d62,	// (0x0005a864) cam6_mode_pane_g1

0x8d6e,	// (0x0005a870) cam6_mode_pane_g2_ParamLimits

0x8d6e,	// (0x0005a870) cam6_mode_pane_g2

0x8d7a,	// (0x0005a87c) cam6_mode_pane_g3_ParamLimits

0x8d7a,	// (0x0005a87c) cam6_mode_pane_g3

0x8d86,	// (0x0005a888) cam6_mode_pane_g4_ParamLimits

0x8d86,	// (0x0005a888) cam6_mode_pane_g4

0x0003,

0xfa8d,	// (0x0006158f) cam6_mode_pane_g_ParamLimits

0xfa8d,	// (0x0006158f) cam6_mode_pane_g

0xe73d,	// (0x0006023f) bg_tb_trans_pane_cp08_ParamLimits

0xe73d,	// (0x0006023f) bg_tb_trans_pane_cp08

0x0e83,	// (0x00052985) cam6_battery_pane_ParamLimits

0x0e83,	// (0x00052985) cam6_battery_pane

0x0e99,	// (0x0005299b) cam6_indi_pane_g1_ParamLimits

0x0e99,	// (0x0005299b) cam6_indi_pane_g1

0x0eab,	// (0x000529ad) cam6_indi_pane_g2_ParamLimits

0x0eab,	// (0x000529ad) cam6_indi_pane_g2

0x0ebd,	// (0x000529bf) cam6_indi_pane_g3_ParamLimits

0x0ebd,	// (0x000529bf) cam6_indi_pane_g3

0x0002,

0xfa96,	// (0x00061598) cam6_indi_pane_g_ParamLimits

0xfa96,	// (0x00061598) cam6_indi_pane_g

0x0ecf,	// (0x000529d1) cam6_indi_pane_t1_ParamLimits

0x0ecf,	// (0x000529d1) cam6_indi_pane_t1

0x7992,	// (0x00059494) cam6_autofocus_pane_g1

0x798a,	// (0x0005948c) cam6_autofocus_pane_g2

0x79a2,	// (0x000594a4) cam6_autofocus_pane_g3

0x799a,	// (0x0005949c) cam6_autofocus_pane_g4

0x0003,

0xfa9d,	// (0x0006159f) cam6_autofocus_pane_g

0x0ef5,	// (0x000529f7) cam6_timer_pane_g1

0x0efd,	// (0x000529ff) cam6_timer_pane_t1

0x0f0b,	// (0x00052a0d) cam6_zoom_cont_pane

0x0f13,	// (0x00052a15) cam6_zoom_pane_g1

0x0f1c,	// (0x00052a1e) cam6_zoom_pane_g2

0x8d92,	// (0x0005a894) cam6_zoom_pane_g3

0x0002,

0xfaa6,	// (0x000615a8) cam6_zoom_pane_g

0xc0b0,	// (0x0005dbb2) cam6_battery_pane_g1

0xc0b0,	// (0x0005dbb2) cam6_battery_pane_g2

0x0001,

0xf0af,	// (0x00060bb1) cam6_battery_pane_g

0x0f13,	// (0x00052a15) cam6_zoom_cont_pane_g1

0x0f1c,	// (0x00052a1e) cam6_zoom_cont_pane_g2

0x0f25,	// (0x00052a27) cam6_zoom_cont_pane_g3

0x0002,

0xfaad,	// (0x000615af) cam6_zoom_cont_pane_g

0x8db0,	// (0x0005a8b2) cam6_mode_pane_cp_ParamLimits

0x8db0,	// (0x0005a8b2) cam6_mode_pane_cp

0x8dc4,	// (0x0005a8c6) cam6_zoom_pane_cp_ParamLimits

0x8dc4,	// (0x0005a8c6) cam6_zoom_pane_cp

0x8ddc,	// (0x0005a8de) vid6_image_uncrop_cif_pane_ParamLimits

0x8ddc,	// (0x0005a8de) vid6_image_uncrop_cif_pane

0x8e08,	// (0x0005a90a) vid6_image_uncrop_nhd_pane_ParamLimits

0x8e08,	// (0x0005a90a) vid6_image_uncrop_nhd_pane

0x8e25,	// (0x0005a927) vid6_image_uncrop_vga_pane_ParamLimits

0x8e25,	// (0x0005a927) vid6_image_uncrop_vga_pane

0x8e44,	// (0x0005a946) vid6_image_uncrop_wvga_pane_ParamLimits

0x8e44,	// (0x0005a946) vid6_image_uncrop_wvga_pane

0x8e61,	// (0x0005a963) vid6_indi_pane_ParamLimits

0x8e61,	// (0x0005a963) vid6_indi_pane

0xe73d,	// (0x0006023f) bg_tb_trans_pane_cp09_ParamLimits

0xe73d,	// (0x0006023f) bg_tb_trans_pane_cp09

0x0f3d,	// (0x00052a3f) cam6_battery_pane_cp_ParamLimits

0x0f3d,	// (0x00052a3f) cam6_battery_pane_cp

0x0f49,	// (0x00052a4b) vid6_indi_pane_g1_ParamLimits

0x0f49,	// (0x00052a4b) vid6_indi_pane_g1

0x0f5b,	// (0x00052a5d) vid6_indi_pane_g2_ParamLimits

0x0f5b,	// (0x00052a5d) vid6_indi_pane_g2

0x0f6d,	// (0x00052a6f) vid6_indi_pane_g3_ParamLimits

0x0f6d,	// (0x00052a6f) vid6_indi_pane_g3

0x0f82,	// (0x00052a84) vid6_indi_pane_g4_ParamLimits

0x0f82,	// (0x00052a84) vid6_indi_pane_g4

0x0f97,	// (0x00052a99) vid6_indi_pane_g5_ParamLimits

0x0f97,	// (0x00052a99) vid6_indi_pane_g5

0x0004,

0xfab4,	// (0x000615b6) vid6_indi_pane_g_ParamLimits

0xfab4,	// (0x000615b6) vid6_indi_pane_g

0x0fb1,	// (0x00052ab3) vid6_indi_pane_t1_ParamLimits

0x0fb1,	// (0x00052ab3) vid6_indi_pane_t1

0x0fc7,	// (0x00052ac9) vid6_indi_pane_t2_ParamLimits

0x0fc7,	// (0x00052ac9) vid6_indi_pane_t2

0x0fef,	// (0x00052af1) vid6_indi_pane_t3_ParamLimits

0x0fef,	// (0x00052af1) vid6_indi_pane_t3

0x1017,	// (0x00052b19) vid6_indi_pane_t4_ParamLimits

0x1017,	// (0x00052b19) vid6_indi_pane_t4

0x0003,

0xfabf,	// (0x000615c1) vid6_indi_pane_t_ParamLimits

0xfabf,	// (0x000615c1) vid6_indi_pane_t

0x103b,	// (0x00052b3d) wait_bar_pane_cp08

0x8e84,	// (0x0005a986) main_cset_text2_pane_t1_ParamLimits

0x8e84,	// (0x0005a986) main_cset_text2_pane_t1

0x8d9b,	// (0x0005a89d) listscroll_gen_pane_cp06_t1_ParamLimits

0x8d9b,	// (0x0005a89d) listscroll_gen_pane_cp06_t1

0x34ea,	// (0x00054fec) main_cam6_set_pane

0x18bd,	// (0x000533bf) bg_tb_trans_pane_cp06_ParamLimits

0x7844,	// (0x00059346) cam4_indicators_pane_g1_ParamLimits

0x7855,	// (0x00059357) cam4_indicators_pane_g2_ParamLimits

0xf837,	// (0x00061339) cam4_indicators_pane_g_ParamLimits

0x786d,	// (0x0005936f) cam4_indicators_pane_t1_ParamLimits

0x5f41,	// (0x00057a43) bg_tb_trans_pane_cp07_ParamLimits

0x791e,	// (0x00059420) vid4_indicators_pane_g1_ParamLimits

0x7932,	// (0x00059434) vid4_indicators_pane_g2_ParamLimits

0x7946,	// (0x00059448) vid4_indicators_pane_g3_ParamLimits

0x7957,	// (0x00059459) vid4_indicators_pane_g4_ParamLimits

0xf849,	// (0x0006134b) vid4_indicators_pane_g_ParamLimits

0x7973,	// (0x00059475) vid4_indicators_pane_t1_ParamLimits

0x894c,	// (0x0005a44e) vid4_progress_pane_g1_ParamLimits

0x895c,	// (0x0005a45e) vid4_progress_pane_g2_ParamLimits

0x896c,	// (0x0005a46e) vid4_progress_pane_g3_ParamLimits

0x897e,	// (0x0005a480) vid4_progress_pane_g4_ParamLimits

0xf9f0,	// (0x000614f2) vid4_progress_pane_g_ParamLimits

0x8996,	// (0x0005a498) vid4_progress_pane_t1_ParamLimits

0x89ac,	// (0x0005a4ae) vid4_progress_pane_t2_ParamLimits

0x89c1,	// (0x0005a4c3) vid4_progress_pane_t3_ParamLimits

0xf9fb,	// (0x000614fd) vid4_progress_pane_t_ParamLimits

0x89d7,	// (0x0005a4d9) wait_bar_pane_cp07_ParamLimits

0x8ebb,	// (0x0005a9bd) main_cam6_set_pane_g2_ParamLimits

0x8ebb,	// (0x0005a9bd) main_cam6_set_pane_g2

0x8ec7,	// (0x0005a9c9) main_cset6_listscroll_pane_ParamLimits

0x8ec7,	// (0x0005a9c9) main_cset6_listscroll_pane

0x8ef2,	// (0x0005a9f4) main_cset6_slider_pane_ParamLimits

0x8ef2,	// (0x0005a9f4) main_cset6_slider_pane

0x8efe,	// (0x0005aa00) main_cset6_text2_pane_ParamLimits

0x8efe,	// (0x0005aa00) main_cset6_text2_pane

0x104a,	// (0x00052b4c) main_cset6_text_pane

0x1052,	// (0x00052b54) main_cset_list_pane_copy1_ParamLimits

0x1052,	// (0x00052b54) main_cset_list_pane_copy1

0x1062,	// (0x00052b64) scroll_pane_cp028_copy1

0x8f11,	// (0x0005aa13) cset_list_set_pane_copy1

0x8f27,	// (0x0005aa29) aid_position_infowindow_above_copy1

0x8f2f,	// (0x0005aa31) aid_position_infowindow_below_copy1

0x8f37,	// (0x0005aa39) cset_list_set_pane_g1_copy1

0x81ac,	// (0x00059cae) cset_list_set_pane_g3_copy1_ParamLimits

0x81ac,	// (0x00059cae) cset_list_set_pane_g3_copy1

0x81bb,	// (0x00059cbd) cset_list_set_pane_t1_copy1_ParamLimits

0x81bb,	// (0x00059cbd) cset_list_set_pane_t1_copy1

0xc00b,	// (0x0005db0d) list_highlight_pane_cp021_copy1_ParamLimits

0xc00b,	// (0x0005db0d) list_highlight_pane_cp021_copy1

0x106b,	// (0x00052b6d) cset6_slider_pane_ParamLimits

0x106b,	// (0x00052b6d) cset6_slider_pane

0x10bb,	// (0x00052bbd) main_cset6_slider_pane_g1_ParamLimits

0x10bb,	// (0x00052bbd) main_cset6_slider_pane_g1

0x8f3f,	// (0x0005aa41) main_cset6_slider_pane_g2_ParamLimits

0x8f3f,	// (0x0005aa41) main_cset6_slider_pane_g2

0x10e3,	// (0x00052be5) main_cset6_slider_pane_g3_ParamLimits

0x10e3,	// (0x00052be5) main_cset6_slider_pane_g3

0x8f67,	// (0x0005aa69) main_cset6_slider_pane_g4_ParamLimits

0x8f67,	// (0x0005aa69) main_cset6_slider_pane_g4

0x8f73,	// (0x0005aa75) main_cset6_slider_pane_g5_ParamLimits

0x8f73,	// (0x0005aa75) main_cset6_slider_pane_g5

0x090f,	// (0x00052411) main_cset6_slider_pane_g7_ParamLimits

0x090f,	// (0x00052411) main_cset6_slider_pane_g7

0x091b,	// (0x0005241d) main_cset6_slider_pane_g8_ParamLimits

0x091b,	// (0x0005241d) main_cset6_slider_pane_g8

0x8f81,	// (0x0005aa83) main_cset6_slider_pane_g9_ParamLimits

0x8f81,	// (0x0005aa83) main_cset6_slider_pane_g9

0x8f8d,	// (0x0005aa8f) main_cset6_slider_pane_g10_ParamLimits

0x8f8d,	// (0x0005aa8f) main_cset6_slider_pane_g10

0x8f99,	// (0x0005aa9b) main_cset6_slider_pane_g11_ParamLimits

0x8f99,	// (0x0005aa9b) main_cset6_slider_pane_g11

0x8fa5,	// (0x0005aaa7) main_cset6_slider_pane_g12_ParamLimits

0x8fa5,	// (0x0005aaa7) main_cset6_slider_pane_g12

0x1097,	// (0x00052b99) main_cset6_slider_pane_g13_ParamLimits

0x1097,	// (0x00052b99) main_cset6_slider_pane_g13

0x10a3,	// (0x00052ba5) main_cset6_slider_pane_g14_ParamLimits

0x10a3,	// (0x00052ba5) main_cset6_slider_pane_g14

0x8fb1,	// (0x0005aab3) main_cset6_slider_pane_g15_ParamLimits

0x8fb1,	// (0x0005aab3) main_cset6_slider_pane_g15

0x8fc9,	// (0x0005aacb) main_cset6_slider_pane_g16_ParamLimits

0x8fc9,	// (0x0005aacb) main_cset6_slider_pane_g16

0x8fd7,	// (0x0005aad9) main_cset6_slider_pane_g17_ParamLimits

0x8fd7,	// (0x0005aad9) main_cset6_slider_pane_g17

0x0011,

0xfac8,	// (0x000615ca) main_cset6_slider_pane_g_ParamLimits

0xfac8,	// (0x000615ca) main_cset6_slider_pane_g

0x10fb,	// (0x00052bfd) main_cset6_slider_pane_t1_ParamLimits

0x10fb,	// (0x00052bfd) main_cset6_slider_pane_t1

0x8ff1,	// (0x0005aaf3) main_cset6_slider_pane_t2_ParamLimits

0x8ff1,	// (0x0005aaf3) main_cset6_slider_pane_t2

0x901c,	// (0x0005ab1e) main_cset6_slider_pane_t3_ParamLimits

0x901c,	// (0x0005ab1e) main_cset6_slider_pane_t3

0x9047,	// (0x0005ab49) main_cset6_slider_pane_t4_ParamLimits

0x9047,	// (0x0005ab49) main_cset6_slider_pane_t4

0x9072,	// (0x0005ab74) main_cset6_slider_pane_t5_ParamLimits

0x9072,	// (0x0005ab74) main_cset6_slider_pane_t5

0x113c,	// (0x00052c3e) main_cset6_slider_pane_t7_ParamLimits

0x113c,	// (0x00052c3e) main_cset6_slider_pane_t7

0x909f,	// (0x0005aba1) main_cset6_slider_pane_t8_ParamLimits

0x909f,	// (0x0005aba1) main_cset6_slider_pane_t8

0x90c3,	// (0x0005abc5) main_cset6_slider_pane_t9_ParamLimits

0x90c3,	// (0x0005abc5) main_cset6_slider_pane_t9

0x90e7,	// (0x0005abe9) main_cset6_slider_pane_t10_ParamLimits

0x90e7,	// (0x0005abe9) main_cset6_slider_pane_t10

0x910b,	// (0x0005ac0d) main_cset6_slider_pane_t11_ParamLimits

0x910b,	// (0x0005ac0d) main_cset6_slider_pane_t11

0x1172,	// (0x00052c74) main_cset6_slider_pane_t14_ParamLimits

0x1172,	// (0x00052c74) main_cset6_slider_pane_t14

0x11ab,	// (0x00052cad) main_cset6_slider_pane_t15_ParamLimits

0x11ab,	// (0x00052cad) main_cset6_slider_pane_t15

0x000b,

0xfaed,	// (0x000615ef) main_cset6_slider_pane_t_ParamLimits

0xfaed,	// (0x000615ef) main_cset6_slider_pane_t

0x09dd,	// (0x000524df) cset_slider_pane_g1_copy1

0x09e6,	// (0x000524e8) cset_slider_pane_g2_copy1

0x09ef,	// (0x000524f1) cset_slider_pane_g3_copy1

0xb971,	// (0x0005d473) bg_popup_sub_pane_cp011_copy1

0x11ed,	// (0x00052cef) main_cset_text_pane_g1_copy1

0x0a78,	// (0x0005257a) main_cset_text_pane_t1_copy1

0x0a86,	// (0x00052588) main_cset_text_pane_t2_copy1

0x0a94,	// (0x00052596) main_cset_text_pane_t3_copy1

0x0aa2,	// (0x000525a4) main_cset_text_pane_t4_copy1

0x0ab0,	// (0x000525b2) main_cset_text_pane_t5_copy1

0x11f5,	// (0x00052cf7) main_cset_text_pane_t6_copy1

0x1203,	// (0x00052d05) main_cset_text_pane_t7_copy1

0x914e,	// (0x0005ac50) main_cset_text2_pane_t1_copy1

0x5f41,	// (0x00057a43) main_ncimui_pane

0x5fa0,	// (0x00057aa2) popup_query_ncimui_window_ParamLimits

0x5fa0,	// (0x00057aa2) popup_query_ncimui_window

0xebb8,	// (0x000606ba) field_cale_ev2_pane_g4_ParamLimits

0xebb8,	// (0x000606ba) field_cale_ev2_pane_g4

0x70f4,	// (0x00058bf6) cell_video_dialer_keypad_pane_g2_ParamLimits

0x70f4,	// (0x00058bf6) cell_video_dialer_keypad_pane_g2

0x0001,

0xf7d1,	// (0x000612d3) cell_video_dialer_keypad_pane_g_ParamLimits

0xf7d1,	// (0x000612d3) cell_video_dialer_keypad_pane_g

0x710c,	// (0x00058c0e) cell_video_dialer_keypad_pane_t1

0xb971,	// (0x0005d473) bg_popup_window_pane_cp012

0xe3ec,	// (0x0005feee) heading_pane_cp06

0x122f,	// (0x00052d31) ncim_query_content_pane

0xb971,	// (0x0005d473) bg_popup_heading_pane_cp01

0x1237,	// (0x00052d39) ncim_heading_pane_t1

0x1245,	// (0x00052d47) ncim_indicator_popup_pane

0x1257,	// (0x00052d59) ncim_query_button_pane

0x126b,	// (0x00052d6d) ncim_query_content_pane_t1

0x127d,	// (0x00052d7f) ncim_query_content_pane_t2

0x0005,

0xfb31,	// (0x00061633) ncim_query_content_pane_t

0x12b7,	// (0x00052db9) ncim_query_list_pane

0x12c9,	// (0x00052dcb) ncim_query_popup_pane

0x1245,	// (0x00052d47) ncim_indicator_popup_pane_ParamLimits

0x92a2,	// (0x0005ada4) ncim_query_content_pane_g1_ParamLimits

0x92a2,	// (0x0005ada4) ncim_query_content_pane_g1

0x126b,	// (0x00052d6d) ncim_query_content_pane_t1_ParamLimits

0x127d,	// (0x00052d7f) ncim_query_content_pane_t2_ParamLimits

0x92ae,	// (0x0005adb0) ncim_query_content_pane_t3_ParamLimits

0x92ae,	// (0x0005adb0) ncim_query_content_pane_t3

0x92cb,	// (0x0005adcd) ncim_query_content_pane_t4_ParamLimits

0x92cb,	// (0x0005adcd) ncim_query_content_pane_t4

0x92e8,	// (0x0005adea) ncim_query_content_pane_t5_ParamLimits

0x92e8,	// (0x0005adea) ncim_query_content_pane_t5

0x128f,	// (0x00052d91) ncim_query_content_pane_t6_ParamLimits

0x128f,	// (0x00052d91) ncim_query_content_pane_t6

0xfb31,	// (0x00061633) ncim_query_content_pane_t_ParamLimits

0x12b7,	// (0x00052db9) ncim_query_list_pane_ParamLimits

0x12c9,	// (0x00052dcb) ncim_query_popup_pane_ParamLimits

0x12dd,	// (0x00052ddf) wait_bar_pane_cp04

0xb971,	// (0x0005d473) input_focus_pane_cp011

0x12e5,	// (0x00052de7) ncim_query_popup_pane_t1

0x12f3,	// (0x00052df5) ncim_list_query_list_pane_ParamLimits

0x12f3,	// (0x00052df5) ncim_list_query_list_pane

0xb971,	// (0x0005d473) bg_button_pane_cp027

0x1300,	// (0x00052e02) ncim_query_button_pane_g1

0xb971,	// (0x0005d473) list_highlight_pane_cp012

0x130a,	// (0x00052e0c) ncim_list_query_list_pane_g1

0x1312,	// (0x00052e14) ncim_list_query_list_pane_t1

0x7861,	// (0x00059363) cam4_indicators_pane_g3_ParamLimits

0x7861,	// (0x00059363) cam4_indicators_pane_g3

0x7963,	// (0x00059465) vid4_indicators_pane_g5_ParamLimits

0x7963,	// (0x00059465) vid4_indicators_pane_g5

0x898a,	// (0x0005a48c) vid4_progress_pane_g5_ParamLimits

0x898a,	// (0x0005a48c) vid4_progress_pane_g5

0x918e,	// (0x0005ac90) main_ncimui_pane_g1

0x91f6,	// (0x0005acf8) ncimui_group_query_pane_ParamLimits

0x91f6,	// (0x0005acf8) ncimui_group_query_pane

0x923e,	// (0x0005ad40) ncimui_list_pane_ParamLimits

0x923e,	// (0x0005ad40) ncimui_list_pane

0x9265,	// (0x0005ad67) ncimui_text_pane_ParamLimits

0x9265,	// (0x0005ad67) ncimui_text_pane

0x9305,	// (0x0005ae07) ncimui_text_pane_t1_ParamLimits

0x9305,	// (0x0005ae07) ncimui_text_pane_t1

0x1320,	// (0x00052e22) ncimui_list_single_graphic_pane_ParamLimits

0x1320,	// (0x00052e22) ncimui_list_single_graphic_pane

0x9324,	// (0x0005ae26) ncimui_query_pane_ParamLimits

0x9324,	// (0x0005ae26) ncimui_query_pane

0xb971,	// (0x0005d473) list_highlight_pane_cp013

0x1330,	// (0x00052e32) ncim_list_query_list_pane_t1_copy1

0x133e,	// (0x00052e40) ncim_list_single_graphic_pane_g1

0x9337,	// (0x0005ae39) ncim_query_button_pane_cp01

0x9343,	// (0x0005ae45) ncim_query_entry_pane_ParamLimits

0x9343,	// (0x0005ae45) ncim_query_entry_pane

0x9356,	// (0x0005ae58) ncimui_query_pane_g1

0x9362,	// (0x0005ae64) ncimui_query_pane_t1_ParamLimits

0x9362,	// (0x0005ae64) ncimui_query_pane_t1

0xc00b,	// (0x0005db0d) input_focus_pane_cp012

0x1346,	// (0x00052e48) ncim_query_entry_pane_t1

0xc10e,	// (0x0005dc10) main_im_pane_ParamLimits

0x5f41,	// (0x00057a43) main_mobtv_pane_ParamLimits

0x5f41,	// (0x00057a43) main_mobtv_pane

0x8fe5,	// (0x0005aae7) main_cset6_slider_pane_g18_ParamLimits

0x8fe5,	// (0x0005aae7) main_cset6_slider_pane_g18

0x10ef,	// (0x00052bf1) main_cset6_slider_pane_g19_ParamLimits

0x10ef,	// (0x00052bf1) main_cset6_slider_pane_g19

0xd330,	// (0x0005ee32) bg_main_mobtv_pane_ParamLimits

0xd330,	// (0x0005ee32) bg_main_mobtv_pane

0x937b,	// (0x0005ae7d) main_mobtv_info_pane

0x9386,	// (0x0005ae88) main_mobtv_loading_pane_ParamLimits

0x9386,	// (0x0005ae88) main_mobtv_loading_pane

0x1358,	// (0x00052e5a) main_mobtv_pg_channel_list_pane

0x1362,	// (0x00052e64) main_mobtv_pg_hdr_pane

0x9393,	// (0x0005ae95) main_mobtv_programe_curr_pane_ParamLimits

0x9393,	// (0x0005ae95) main_mobtv_programe_curr_pane

0x93a0,	// (0x0005aea2) main_mobtv_programe_next_pane_ParamLimits

0x93a0,	// (0x0005aea2) main_mobtv_programe_next_pane

0x136b,	// (0x00052e6d) popup_mobtv_noti_window

0xc0b0,	// (0x0005dbb2) main_tv_pg_hdr_pane_g1

0x1373,	// (0x00052e75) main_tv_pg_hdr_pane_g2

0x137b,	// (0x00052e7d) main_tv_pg_hdr_pane_g3

0x1383,	// (0x00052e85) main_tv_pg_hdr_pane_g4

0x138b,	// (0x00052e8d) main_tv_pg_hdr_pane_g5

0x1395,	// (0x00052e97) main_tv_pg_hdr_pane_g6

0x139f,	// (0x00052ea1) main_tv_pg_hdr_pane_g7

0x13a9,	// (0x00052eab) main_tv_pg_hdr_pane_g8

0x13b3,	// (0x00052eb5) main_tv_pg_hdr_pane_g9

0x13bd,	// (0x00052ebf) main_tv_pg_hdr_pane_g10

0x13c7,	// (0x00052ec9) main_tv_pg_hdr_pane_g11

0x000a,

0xfb3e,	// (0x00061640) main_tv_pg_hdr_pane_g

0x13d1,	// (0x00052ed3) main_tv_pg_hdr_pane_t1

0x13df,	// (0x00052ee1) main_tv_pg_hdr_pane_t2

0x13ed,	// (0x00052eef) main_tv_pg_hdr_pane_t3

0x13fd,	// (0x00052eff) main_tv_pg_hdr_pane_t4

0x140d,	// (0x00052f0f) main_tv_pg_hdr_pane_t5

0x0004,

0xfb55,	// (0x00061657) main_tv_pg_hdr_pane_t

0x141d,	// (0x00052f1f) single_mobtv_pg_channel_pane_ParamLimits

0x141d,	// (0x00052f1f) single_mobtv_pg_channel_pane

0x142f,	// (0x00052f31) single_mobtv_pg_channel_table_pane

0xc5dc,	// (0x0005e0de) single_mobtv_pg_channel_thumb_pane

0x1438,	// (0x00052f3a) single_tv_pg_channel_pane_g1

0x1441,	// (0x00052f43) single_tv_pg_channel_pane_g2

0x0001,

0xfb60,	// (0x00061662) single_tv_pg_channel_pane_g

0xc072,	// (0x0005db74) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xc072,	// (0x0005db74) bg_single_mobtv_pg_channel_thumb_pane

0x144a,	// (0x00052f4c) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x144a,	// (0x00052f4c) single_mobtv_pg_channel_thumb_pane_g1

0x1458,	// (0x00052f5a) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x1458,	// (0x00052f5a) single_mobtv_pg_channel_thumb_pane_g2

0x1464,	// (0x00052f66) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x1464,	// (0x00052f66) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfb65,	// (0x00061667) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfb65,	// (0x00061667) single_mobtv_pg_channel_thumb_pane_g

0x1470,	// (0x00052f72) single_mobtv_pg_channel_thumb_pane_t1

0x147e,	// (0x00052f80) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfb6c,	// (0x0006166e) single_mobtv_pg_channel_thumb_pane_t

0xc0b0,	// (0x0005dbb2) bg_single_mobtv_pg_channel_table_pane_g1

0xc0b0,	// (0x0005dbb2) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf0af,	// (0x00060bb1) bg_single_mobtv_pg_channel_table_pane_g

0x148c,	// (0x00052f8e) single_mobtv_pg_channel_table_pane_t1

0x149a,	// (0x00052f9c) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfb71,	// (0x00061673) single_mobtv_pg_channel_table_pane_t

0x93b5,	// (0x0005aeb7) main_mobtv_info_pane_g1_ParamLimits

0x93b5,	// (0x0005aeb7) main_mobtv_info_pane_g1

0x93d1,	// (0x0005aed3) main_mobtv_info_pane_t1_ParamLimits

0x93d1,	// (0x0005aed3) main_mobtv_info_pane_t1

0x9449,	// (0x0005af4b) main_mobtv_info_pane_t2_ParamLimits

0x9449,	// (0x0005af4b) main_mobtv_info_pane_t2

0x0002,

0xfb7b,	// (0x0006167d) main_mobtv_info_pane_t_ParamLimits

0xfb7b,	// (0x0006167d) main_mobtv_info_pane_t

0x94d8,	// (0x0005afda) wait_bar_pane_cp05

0x94ea,	// (0x0005afec) main_mobtv_loading_pane_g1_ParamLimits

0x94ea,	// (0x0005afec) main_mobtv_loading_pane_g1

0x94f8,	// (0x0005affa) main_mobtv_loading_pane_g2_ParamLimits

0x94f8,	// (0x0005affa) main_mobtv_loading_pane_g2

0x9504,	// (0x0005b006) main_mobtv_loading_pane_g3_ParamLimits

0x9504,	// (0x0005b006) main_mobtv_loading_pane_g3

0x0002,

0xfb82,	// (0x00061684) main_mobtv_loading_pane_g_ParamLimits

0xfb82,	// (0x00061684) main_mobtv_loading_pane_g

0x14a8,	// (0x00052faa) main_mobtv_loading_pane_t1_ParamLimits

0x14a8,	// (0x00052faa) main_mobtv_loading_pane_t1

0x14c0,	// (0x00052fc2) main_mobtv_loading_pane_t2_ParamLimits

0x14c0,	// (0x00052fc2) main_mobtv_loading_pane_t2

0x0001,

0xfb89,	// (0x0006168b) main_mobtv_loading_pane_t_ParamLimits

0xfb89,	// (0x0006168b) main_mobtv_loading_pane_t

0x9512,	// (0x0005b014) wait_bar_pane_cp06_ParamLimits

0x9512,	// (0x0005b014) wait_bar_pane_cp06

0x14e4,	// (0x00052fe6) main_mobtv_programe_curr_pane_t1

0x14f2,	// (0x00052ff4) main_mobtv_programe_curr_pane_t2

0x0001,

0xfb8e,	// (0x00061690) main_mobtv_programe_curr_pane_t

0x1500,	// (0x00053002) main_mobtv_programe_next_pane_t1

0x150e,	// (0x00053010) main_mobtv_programe_next_pane_t2

0x151c,	// (0x0005301e) main_mobtv_programe_next_pane_t3

0x0002,

0xfb93,	// (0x00061695) main_mobtv_programe_next_pane_t

0xb971,	// (0x0005d473) bg_popup_mobtv_noti_window_pane

0x152a,	// (0x0005302c) popup_mobtv_noti_window_g1

0x1532,	// (0x00053034) popup_mobtv_noti_window_t1

0x1540,	// (0x00053042) popup_mobtv_noti_window_t2

0x0001,

0xfb9a,	// (0x0006169c) popup_mobtv_noti_window_t

0xc0b0,	// (0x0005dbb2) bg_popup_mobtv_noti_window_pane_g1

0x34ea,	// (0x00054fec) sc_clock_pane

0x34ea,	// (0x00054fec) main_fs_bigclock_pane

0x8b63,	// (0x0005a665) blid2_tripm_pane_t4_ParamLimits

0x8b63,	// (0x0005a665) blid2_tripm_pane_t4

0xc080,	// (0x0005db82) sc_clock_pane_g1_ParamLimits

0xc080,	// (0x0005db82) sc_clock_pane_g1

0xc0ce,	// (0x0005dbd0) sc_clock_pane_t1_ParamLimits

0xc0ce,	// (0x0005dbd0) sc_clock_pane_t1

0xc0ce,	// (0x0005dbd0) sc_clock_pane_t2_ParamLimits

0xc0ce,	// (0x0005dbd0) sc_clock_pane_t2

0xc0ce,	// (0x0005dbd0) sc_clock_pane_t3_ParamLimits

0xc0ce,	// (0x0005dbd0) sc_clock_pane_t3

0x0004,

0xfb9f,	// (0x000616a1) sc_clock_pane_t_ParamLimits

0xfb9f,	// (0x000616a1) sc_clock_pane_t

0xa013,	// (0x0005bb15) main_fs_bigclock_indicator_pane_ParamLimits

0xa013,	// (0x0005bb15) main_fs_bigclock_indicator_pane

0x9559,	// (0x0005b05b) main_fs_bigclock_pane_g1_ParamLimits

0x9559,	// (0x0005b05b) main_fs_bigclock_pane_g1

0xa01f,	// (0x0005bb21) main_fs_bigclock_pane_t1_ParamLimits

0xa01f,	// (0x0005bb21) main_fs_bigclock_pane_t1

0xa031,	// (0x0005bb33) main_fs_bigclock_pane_t2_ParamLimits

0xa031,	// (0x0005bb33) main_fs_bigclock_pane_t2

0xa045,	// (0x0005bb47) main_fs_bigclock_pane_t3_ParamLimits

0xa045,	// (0x0005bb47) main_fs_bigclock_pane_t3

0x0002,

0xfd35,	// (0x00061837) main_fs_bigclock_pane_t_ParamLimits

0xfd35,	// (0x00061837) main_fs_bigclock_pane_t

0x1da8,	// (0x000538aa) main_fs_bigclock_indicator_pane_g1

0x125f,	// (0x00052d61) ncim_query_content_pane_g2_ParamLimits

0x125f,	// (0x00052d61) ncim_query_content_pane_g2

0x0001,

0xfb2c,	// (0x0006162e) ncim_query_content_pane_g_ParamLimits

0xfb2c,	// (0x0006162e) ncim_query_content_pane_g

0xc0ce,	// (0x0005dbd0) sc_clock_pane_t4_ParamLimits

0xc0ce,	// (0x0005dbd0) sc_clock_pane_t4

0x5f41,	// (0x00057a43) main_radioblah_pane

0x7717,	// (0x00059219) cell_call4_button_pane_t1_copy1_ParamLimits

0x7717,	// (0x00059219) cell_call4_button_pane_t1_copy1

0x91a8,	// (0x0005acaa) main_ncimui_pane_t1_ParamLimits

0x91a8,	// (0x0005acaa) main_ncimui_pane_t1

0x91c2,	// (0x0005acc4) main_ncimui_pane_t2_ParamLimits

0x91c2,	// (0x0005acc4) main_ncimui_pane_t2

0x0002,

0xfb25,	// (0x00061627) main_ncimui_pane_t_ParamLimits

0xfb25,	// (0x00061627) main_ncimui_pane_t

0xd30e,	// (0x0005ee10) main_radioblah_anim_pane_ParamLimits

0xd30e,	// (0x0005ee10) main_radioblah_anim_pane

0xd30e,	// (0x0005ee10) main_radioblah_info_pane_ParamLimits

0xd30e,	// (0x0005ee10) main_radioblah_info_pane

0xd31c,	// (0x0005ee1e) main_radioblah_pane_t1_ParamLimits

0xd31c,	// (0x0005ee1e) main_radioblah_pane_t1

0xd31c,	// (0x0005ee1e) main_radioblah_pane_t2_ParamLimits

0xd31c,	// (0x0005ee1e) main_radioblah_pane_t2

0x0003,

0xfbc0,	// (0x000616c2) main_radioblah_pane_t_ParamLimits

0xfbc0,	// (0x000616c2) main_radioblah_pane_t

0xc064,	// (0x0005db66) main_radioblah_rocker_ctrl_pane_ParamLimits

0xc064,	// (0x0005db66) main_radioblah_rocker_ctrl_pane

0xe74b,	// (0x0006024d) main_radioblah_info_pane_t1_ParamLimits

0xe74b,	// (0x0006024d) main_radioblah_info_pane_t1

0x16c2,	// (0x000531c4) main_radioblah_info_pane_t2_ParamLimits

0x16c2,	// (0x000531c4) main_radioblah_info_pane_t2

0x0003,

0xfbc9,	// (0x000616cb) main_radioblah_info_pane_t_ParamLimits

0xfbc9,	// (0x000616cb) main_radioblah_info_pane_t

0xc0b0,	// (0x0005dbb2) main_radioblah_rocker_ctrl_pane_g1

0xc0b0,	// (0x0005dbb2) main_radioblah_rocker_ctrl_pane_g2

0xc0b0,	// (0x0005dbb2) main_radioblah_rocker_ctrl_pane_g3

0xc0b0,	// (0x0005dbb2) main_radioblah_rocker_ctrl_pane_g4

0xc0b0,	// (0x0005dbb2) main_radioblah_rocker_ctrl_pane_g5

0xc0b0,	// (0x0005dbb2) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfbd2,	// (0x000616d4) main_radioblah_rocker_ctrl_pane_g

0x914e,	// (0x0005ac50) main_cset_text2_pane_t1_copy1_ParamLimits

0x7792,	// (0x00059294) cam4_image_uncrop_qvga_pane

0x78d3,	// (0x000593d5) vid4_image_uncrop_qcif_pane

0x8cf7,	// (0x0005a7f9) cam6_image_uncrop_qvga_pane_ParamLimits

0x8cf7,	// (0x0005a7f9) cam6_image_uncrop_qvga_pane

0x0f2d,	// (0x00052a2f) vid6_image_uncrop_qcif_pane_ParamLimits

0x0f2d,	// (0x00052a2f) vid6_image_uncrop_qcif_pane

0xb971,	// (0x0005d473) bg_popup_preview_window_pane_cp03

0x1211,	// (0x00052d13) list_cset_text2_pane

0x1219,	// (0x00052d1b) main_cset6_text2_pane_g1

0x1221,	// (0x00052d23) main_cset6_text2_pane_t1

0x959d,	// (0x0005b09f) list_cset_text2_pane_t1_ParamLimits

0x959d,	// (0x0005b09f) list_cset_text2_pane_t1

0x5f41,	// (0x00057a43) main_radioblah_pane_ParamLimits

0x94c4,	// (0x0005afc6) main_mobtv_info_pane_t3_ParamLimits

0x94c4,	// (0x0005afc6) main_mobtv_info_pane_t3

0xd330,	// (0x0005ee32) main_radioblah_pane_g1

0x1692,	// (0x00053194) main_radioblah_info_pane_g1

0xc0ce,	// (0x0005dbd0) main_radioblah_info_pane_t3_ParamLimits

0xc0ce,	// (0x0005dbd0) main_radioblah_info_pane_t3

0x4fe6,	// (0x00056ae8) highlight_cell_cale_month_pane_ParamLimits

0x4fe6,	// (0x00056ae8) highlight_cell_cale_month_pane

0x34ea,	// (0x00054fec) main_phob_fisheye_pane

0xec59,	// (0x0006075b) scroll_pane_cp0031_ParamLimits

0xec59,	// (0x0006075b) scroll_pane_cp0031

0x103b,	// (0x00052b3d) wait_bar_pane_cp08_ParamLimits

0x8f11,	// (0x0005aa13) cset_list_set_pane_copy1_ParamLimits

0x1711,	// (0x00053213) highlight_cell_cale_month_pane_g1

0x95be,	// (0x0005b0c0) highlight_cell_cale_month_pane_t1

0x0cbd,	// (0x000527bf) list_gen_pane_cp01

0x08fa,	// (0x000523fc) scroll_pane_01

0x95cc,	// (0x0005b0ce) list_single_double_fisheye_pane

0x95d5,	// (0x0005b0d7) list_double_fisheye_pane_g1_ParamLimits

0x95d5,	// (0x0005b0d7) list_double_fisheye_pane_g1

0x95e1,	// (0x0005b0e3) list_double_fisheye_pane_g2_ParamLimits

0x95e1,	// (0x0005b0e3) list_double_fisheye_pane_g2

0x95f5,	// (0x0005b0f7) list_double_fisheye_pane_g3_ParamLimits

0x95f5,	// (0x0005b0f7) list_double_fisheye_pane_g3

0x0004,

0xfbdf,	// (0x000616e1) list_double_fisheye_pane_g_ParamLimits

0xfbdf,	// (0x000616e1) list_double_fisheye_pane_g

0x961e,	// (0x0005b120) list_double_fisheye_pane_t1_ParamLimits

0x961e,	// (0x0005b120) list_double_fisheye_pane_t1

0x9639,	// (0x0005b13b) list_double_fisheye_pane_t2_ParamLimits

0x9639,	// (0x0005b13b) list_double_fisheye_pane_t2

0x0001,

0xfbea,	// (0x000616ec) list_double_fisheye_pane_t_ParamLimits

0xfbea,	// (0x000616ec) list_double_fisheye_pane_t

0x34ea,	// (0x00054fec) main_call5_pane

0xc064,	// (0x0005db66) sc_swipe_pane_ParamLimits

0xc064,	// (0x0005db66) sc_swipe_pane

0x9667,	// (0x0005b169) call5_image_pane_ParamLimits

0x9667,	// (0x0005b169) call5_image_pane

0x9677,	// (0x0005b179) call5_swipe_1_pane_ParamLimits

0x9677,	// (0x0005b179) call5_swipe_1_pane

0x9683,	// (0x0005b185) call5_swipe_2_pane_ParamLimits

0x9683,	// (0x0005b185) call5_swipe_2_pane

0x969d,	// (0x0005b19f) popup_call5_audio_first_window_ParamLimits

0x969d,	// (0x0005b19f) popup_call5_audio_first_window

0xc072,	// (0x0005db74) call5_swipe_1_pane_g1_ParamLimits

0xc072,	// (0x0005db74) call5_swipe_1_pane_g1

0x1719,	// (0x0005321b) call5_swipe_1_pane_g2_ParamLimits

0x1719,	// (0x0005321b) call5_swipe_1_pane_g2

0x0001,

0xfbef,	// (0x000616f1) call5_swipe_1_pane_g_ParamLimits

0xfbef,	// (0x000616f1) call5_swipe_1_pane_g

0x1725,	// (0x00053227) call5_swipe_1_pane_t1_ParamLimits

0x1725,	// (0x00053227) call5_swipe_1_pane_t1

0xc072,	// (0x0005db74) call5_swipe_2_pane_g1_ParamLimits

0xc072,	// (0x0005db74) call5_swipe_2_pane_g1

0x173a,	// (0x0005323c) call5_swipe_2_pane_g2_ParamLimits

0x173a,	// (0x0005323c) call5_swipe_2_pane_g2

0x0001,

0xfbf4,	// (0x000616f6) call5_swipe_2_pane_g_ParamLimits

0xfbf4,	// (0x000616f6) call5_swipe_2_pane_g

0x1746,	// (0x00053248) call5_swipe_2_pane_t1_ParamLimits

0x1746,	// (0x00053248) call5_swipe_2_pane_t1

0xc072,	// (0x0005db74) sc_swipe_pane_g1_ParamLimits

0xc072,	// (0x0005db74) sc_swipe_pane_g1

0xc080,	// (0x0005db82) sc_swipe_pane_g2_ParamLimits

0xc080,	// (0x0005db82) sc_swipe_pane_g2

0x0001,

0xfbf9,	// (0x000616fb) sc_swipe_pane_g_ParamLimits

0xfbf9,	// (0x000616fb) sc_swipe_pane_g

0xc0ba,	// (0x0005dbbc) sc_swipe_pane_t1_ParamLimits

0xc0ba,	// (0x0005dbbc) sc_swipe_pane_t1

0x34ea,	// (0x00054fec) main_cmail_launcher_pane

0x96ab,	// (0x0005b1ad) aid_size_cell_cmail_l_ParamLimits

0x96ab,	// (0x0005b1ad) aid_size_cell_cmail_l

0x96b9,	// (0x0005b1bb) grid_cmail_l_pane_ParamLimits

0x96b9,	// (0x0005b1bb) grid_cmail_l_pane

0x96c9,	// (0x0005b1cb) cell_cmail_l_pane_ParamLimits

0x96c9,	// (0x0005b1cb) cell_cmail_l_pane

0x175b,	// (0x0005325d) cell_cmail_l_pane_g1_ParamLimits

0x175b,	// (0x0005325d) cell_cmail_l_pane_g1

0x1767,	// (0x00053269) cell_cmail_l_pane_t1_ParamLimits

0x1767,	// (0x00053269) cell_cmail_l_pane_t1

0x177d,	// (0x0005327f) cell_cmail_l_pane_t2_ParamLimits

0x177d,	// (0x0005327f) cell_cmail_l_pane_t2

0x0001,

0xfbfe,	// (0x00061700) cell_cmail_l_pane_t_ParamLimits

0xfbfe,	// (0x00061700) cell_cmail_l_pane_t

0xc00b,	// (0x0005db0d) grid_highlight_pane_cp018_ParamLimits

0xc00b,	// (0x0005db0d) grid_highlight_pane_cp018

0x33dd,	// (0x00054edf) main2_pane_ParamLimits

0x33dd,	// (0x00054edf) main2_pane

0xc19d,	// (0x0005dc9f) popup_sp_fs_action_menu_bg_pane_g1

0xc1a5,	// (0x0005dca7) popup_sp_fs_action_menu_bg_pane_g2

0xc1ad,	// (0x0005dcaf) popup_sp_fs_action_menu_bg_pane_g3

0xc1b5,	// (0x0005dcb7) popup_sp_fs_action_menu_bg_pane_g4

0xc1bd,	// (0x0005dcbf) popup_sp_fs_action_menu_bg_pane_g5

0xc1c5,	// (0x0005dcc7) popup_sp_fs_action_menu_bg_pane_g6

0xc1cd,	// (0x0005dccf) popup_sp_fs_action_menu_bg_pane_g7

0xc1d5,	// (0x0005dcd7) popup_sp_fs_action_menu_bg_pane_g8

0xc1dd,	// (0x0005dcdf) popup_sp_fs_action_menu_bg_pane_g9

0xc1e5,	// (0x0005dce7) popup_sp_fs_action_menu_bg_pane_g10

0xc1e5,	// (0x0005dce7) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf100,	// (0x00060c02) popup_sp_fs_action_menu_bg_pane_g

0xc072,	// (0x0005db74) list_medium_line_x2_t3_g3_g1_ParamLimits

0xc072,	// (0x0005db74) list_medium_line_x2_t3_g3_g1

0xc072,	// (0x0005db74) list_medium_line_x2_t3_g3_g2_ParamLimits

0xc072,	// (0x0005db74) list_medium_line_x2_t3_g3_g2

0xc072,	// (0x0005db74) list_medium_line_x2_t3_g3_g3_ParamLimits

0xc072,	// (0x0005db74) list_medium_line_x2_t3_g3_g3

0x0002,

0xf1ae,	// (0x00060cb0) list_medium_line_x2_t3_g3_g_ParamLimits

0xf1ae,	// (0x00060cb0) list_medium_line_x2_t3_g3_g

0xc0ba,	// (0x0005dbbc) list_medium_line_x2_t3_g3_t1_ParamLimits

0xc0ba,	// (0x0005dbbc) list_medium_line_x2_t3_g3_t1

0xc0ba,	// (0x0005dbbc) list_medium_line_x2_t3_g3_t2_ParamLimits

0xc0ba,	// (0x0005dbbc) list_medium_line_x2_t3_g3_t2

0xc0ba,	// (0x0005dbbc) list_medium_line_x2_t3_g3_t3_ParamLimits

0xc0ba,	// (0x0005dbbc) list_medium_line_x2_t3_g3_t3

0x0002,

0xf1b5,	// (0x00060cb7) list_medium_line_x2_t3_g3_t_ParamLimits

0xf1b5,	// (0x00060cb7) list_medium_line_x2_t3_g3_t

0xc072,	// (0x0005db74) list_medium_line_x2_t3_g2_g1_ParamLimits

0xc072,	// (0x0005db74) list_medium_line_x2_t3_g2_g1

0xc072,	// (0x0005db74) list_medium_line_x2_t3_g2_g2_ParamLimits

0xc072,	// (0x0005db74) list_medium_line_x2_t3_g2_g2

0x0001,

0xf1bc,	// (0x00060cbe) list_medium_line_x2_t3_g2_g_ParamLimits

0xf1bc,	// (0x00060cbe) list_medium_line_x2_t3_g2_g

0xc0ba,	// (0x0005dbbc) list_medium_line_x2_t3_g2_t1_ParamLimits

0xc0ba,	// (0x0005dbbc) list_medium_line_x2_t3_g2_t1

0xc0ba,	// (0x0005dbbc) list_medium_line_x2_t3_g2_t2_ParamLimits

0xc0ba,	// (0x0005dbbc) list_medium_line_x2_t3_g2_t2

0xc0ba,	// (0x0005dbbc) list_medium_line_x2_t3_g2_t3_ParamLimits

0xc0ba,	// (0x0005dbbc) list_medium_line_x2_t3_g2_t3

0x0002,

0xf1b5,	// (0x00060cb7) list_medium_line_x2_t3_g2_t_ParamLimits

0xf1b5,	// (0x00060cb7) list_medium_line_x2_t3_g2_t

0xc072,	// (0x0005db74) list_medium_line_x2_t4_g4_g1_ParamLimits

0xc072,	// (0x0005db74) list_medium_line_x2_t4_g4_g1

0xc072,	// (0x0005db74) list_medium_line_x2_t4_g4_g2_ParamLimits

0xc072,	// (0x0005db74) list_medium_line_x2_t4_g4_g2

0xc072,	// (0x0005db74) list_medium_line_x2_t4_g4_g3_ParamLimits

0xc072,	// (0x0005db74) list_medium_line_x2_t4_g4_g3

0xc072,	// (0x0005db74) list_medium_line_x2_t4_g4_g4_ParamLimits

0xc072,	// (0x0005db74) list_medium_line_x2_t4_g4_g4

0x0003,

0xf1c1,	// (0x00060cc3) list_medium_line_x2_t4_g4_g_ParamLimits

0xf1c1,	// (0x00060cc3) list_medium_line_x2_t4_g4_g

0xc0ba,	// (0x0005dbbc) list_medium_line_x2_t4_g4_t1_ParamLimits

0xc0ba,	// (0x0005dbbc) list_medium_line_x2_t4_g4_t1

0xc0ba,	// (0x0005dbbc) list_medium_line_x2_t4_g4_t2_ParamLimits

0xc0ba,	// (0x0005dbbc) list_medium_line_x2_t4_g4_t2

0xc0ba,	// (0x0005dbbc) list_medium_line_x2_t4_g4_t3_ParamLimits

0xc0ba,	// (0x0005dbbc) list_medium_line_x2_t4_g4_t3

0xc0ba,	// (0x0005dbbc) list_medium_line_x2_t4_g4_t4_ParamLimits

0xc0ba,	// (0x0005dbbc) list_medium_line_x2_t4_g4_t4

0x0003,

0xf1ca,	// (0x00060ccc) list_medium_line_x2_t4_g4_t_ParamLimits

0xf1ca,	// (0x00060ccc) list_medium_line_x2_t4_g4_t

0xc072,	// (0x0005db74) list_medium_line_x2_t2_g4_g1_ParamLimits

0xc072,	// (0x0005db74) list_medium_line_x2_t2_g4_g1

0xc072,	// (0x0005db74) list_medium_line_x2_t2_g4_g2_ParamLimits

0xc072,	// (0x0005db74) list_medium_line_x2_t2_g4_g2

0xc072,	// (0x0005db74) list_medium_line_x2_t2_g4_g3_ParamLimits

0xc072,	// (0x0005db74) list_medium_line_x2_t2_g4_g3

0xc072,	// (0x0005db74) list_medium_line_x2_t2_g4_g4_ParamLimits

0xc072,	// (0x0005db74) list_medium_line_x2_t2_g4_g4

0x0003,

0xf1c1,	// (0x00060cc3) list_medium_line_x2_t2_g4_g_ParamLimits

0xf1c1,	// (0x00060cc3) list_medium_line_x2_t2_g4_g

0xc0ba,	// (0x0005dbbc) list_medium_line_x2_t2_g4_t1_ParamLimits

0xc0ba,	// (0x0005dbbc) list_medium_line_x2_t2_g4_t1

0xc0ba,	// (0x0005dbbc) list_medium_line_x2_t2_g4_t2_ParamLimits

0xc0ba,	// (0x0005dbbc) list_medium_line_x2_t2_g4_t2

0x0001,

0xf231,	// (0x00060d33) list_medium_line_x2_t2_g4_t_ParamLimits

0xf231,	// (0x00060d33) list_medium_line_x2_t2_g4_t

0xc072,	// (0x0005db74) list_medium_line_x2_t2_g3_g1_ParamLimits

0xc072,	// (0x0005db74) list_medium_line_x2_t2_g3_g1

0xc072,	// (0x0005db74) list_medium_line_x2_t2_g3_g2_ParamLimits

0xc072,	// (0x0005db74) list_medium_line_x2_t2_g3_g2

0xc072,	// (0x0005db74) list_medium_line_x2_t2_g3_g3_ParamLimits

0xc072,	// (0x0005db74) list_medium_line_x2_t2_g3_g3

0x0002,

0xf1ae,	// (0x00060cb0) list_medium_line_x2_t2_g3_g_ParamLimits

0xf1ae,	// (0x00060cb0) list_medium_line_x2_t2_g3_g

0xc0ba,	// (0x0005dbbc) list_medium_line_x2_t2_g3_t1_ParamLimits

0xc0ba,	// (0x0005dbbc) list_medium_line_x2_t2_g3_t1

0xc0ba,	// (0x0005dbbc) list_medium_line_x2_t2_g3_t2_ParamLimits

0xc0ba,	// (0x0005dbbc) list_medium_line_x2_t2_g3_t2

0x0001,

0xf231,	// (0x00060d33) list_medium_line_x2_t2_g3_t_ParamLimits

0xf231,	// (0x00060d33) list_medium_line_x2_t2_g3_t

0x51e0,	// (0x00056ce2) main_sp_fs_list_pane_ParamLimits

0x51e0,	// (0x00056ce2) main_sp_fs_list_pane

0x51ec,	// (0x00056cee) sp_fs_scroll_pane_ParamLimits

0x51ec,	// (0x00056cee) sp_fs_scroll_pane

0xc7ef,	// (0x0005e2f1) list_medium_line_x2_t3_t1

0xc7ef,	// (0x0005e2f1) list_medium_line_x2_t3_t2

0xc7ef,	// (0x0005e2f1) list_medium_line_x2_t3_t3

0x0002,

0xf27c,	// (0x00060d7e) list_medium_line_x2_t3_t

0xc7ef,	// (0x0005e2f1) list_medium_line_x3_t4_t1

0xc7ef,	// (0x0005e2f1) list_medium_line_x3_t4_t2

0xc7ef,	// (0x0005e2f1) list_medium_line_x3_t4_t3

0xc7ef,	// (0x0005e2f1) list_medium_line_x3_t4_t4

0x0003,

0xf283,	// (0x00060d85) list_medium_line_x3_t4_t

0xc7ef,	// (0x0005e2f1) list_medium_line_x4_t5_t1

0xc7ef,	// (0x0005e2f1) list_medium_line_x4_t5_t2

0xc7ef,	// (0x0005e2f1) list_medium_line_x4_t5_t3

0xc7ef,	// (0x0005e2f1) list_medium_line_x4_t5_t4

0xc7ef,	// (0x0005e2f1) list_medium_line_x4_t5_t5

0x0004,

0xf28c,	// (0x00060d8e) list_medium_line_x4_t5_t

0xc072,	// (0x0005db74) list_medium_line_t4_g4_g1_ParamLimits

0xc072,	// (0x0005db74) list_medium_line_t4_g4_g1

0xc072,	// (0x0005db74) list_medium_line_t4_g4_g2_ParamLimits

0xc072,	// (0x0005db74) list_medium_line_t4_g4_g2

0xc072,	// (0x0005db74) list_medium_line_t4_g4_g3_ParamLimits

0xc072,	// (0x0005db74) list_medium_line_t4_g4_g3

0xc072,	// (0x0005db74) list_medium_line_t4_g4_g4_ParamLimits

0xc072,	// (0x0005db74) list_medium_line_t4_g4_g4

0x0003,

0xf1c1,	// (0x00060cc3) list_medium_line_t4_g4_g_ParamLimits

0xf1c1,	// (0x00060cc3) list_medium_line_t4_g4_g

0xc0ba,	// (0x0005dbbc) list_medium_line_t4_g4_t1_ParamLimits

0xc0ba,	// (0x0005dbbc) list_medium_line_t4_g4_t1

0xc0ba,	// (0x0005dbbc) list_medium_line_t4_g4_t2_ParamLimits

0xc0ba,	// (0x0005dbbc) list_medium_line_t4_g4_t2

0xc0ba,	// (0x0005dbbc) list_medium_line_t4_g4_t3_ParamLimits

0xc0ba,	// (0x0005dbbc) list_medium_line_t4_g4_t3

0xc0ba,	// (0x0005dbbc) list_medium_line_t4_g4_t4_ParamLimits

0xc0ba,	// (0x0005dbbc) list_medium_line_t4_g4_t4

0x0003,

0xf1ca,	// (0x00060ccc) list_medium_line_t4_g4_t_ParamLimits

0xf1ca,	// (0x00060ccc) list_medium_line_t4_g4_t

0x52df,	// (0x00056de1) chi_dic_find_pane_g1

0x5f5d,	// (0x00057a5f) main_tport_pane

0xc7ef,	// (0x0005e2f1) list_medium_line_plain_t1

0xc072,	// (0x0005db74) list_medium_line_t2_g2_g1_ParamLimits

0xc072,	// (0x0005db74) list_medium_line_t2_g2_g1

0xc072,	// (0x0005db74) list_medium_line_t2_g2_g2_ParamLimits

0xc072,	// (0x0005db74) list_medium_line_t2_g2_g2

0x0001,

0xf1bc,	// (0x00060cbe) list_medium_line_t2_g2_g_ParamLimits

0xf1bc,	// (0x00060cbe) list_medium_line_t2_g2_g

0xc0ba,	// (0x0005dbbc) list_medium_line_t2_g2_t1_ParamLimits

0xc0ba,	// (0x0005dbbc) list_medium_line_t2_g2_t1

0xc0ba,	// (0x0005dbbc) list_medium_line_t2_g2_t2_ParamLimits

0xc0ba,	// (0x0005dbbc) list_medium_line_t2_g2_t2

0x0001,

0xf231,	// (0x00060d33) list_medium_line_t2_g2_t_ParamLimits

0xf231,	// (0x00060d33) list_medium_line_t2_g2_t

0x0385,	// (0x00051e87) aid_sp_fs_list_icon_a_sm

0x038d,	// (0x00051e8f) aid_sp_fs_list_icon_d

0x0395,	// (0x00051e97) aid_sp_fs_text_primary

0x0cc6,	// (0x000527c8) aid_sp_fs_text_secondary

0xb971,	// (0x0005d473) list_medium_line

0xb971,	// (0x0005d473) list_medium_line_g2

0xb971,	// (0x0005d473) list_medium_line_g3

0xb971,	// (0x0005d473) list_medium_line_plain

0xb971,	// (0x0005d473) list_medium_line_plain_t2

0xb971,	// (0x0005d473) list_medium_line_plain_t3

0xb971,	// (0x0005d473) list_medium_line_right_icon

0xb971,	// (0x0005d473) list_medium_line_right_iconx2

0xb971,	// (0x0005d473) list_medium_line_t2

0xb971,	// (0x0005d473) list_medium_line_t2_g2

0xb971,	// (0x0005d473) list_medium_line_t2_g3

0xb971,	// (0x0005d473) list_medium_line_t2_right_icon

0xb971,	// (0x0005d473) list_medium_line_t2_right_iconx2

0xb971,	// (0x0005d473) list_medium_line_t3

0xb971,	// (0x0005d473) list_medium_line_t3_g2

0xb971,	// (0x0005d473) list_medium_line_t3_g3

0xb971,	// (0x0005d473) list_medium_line_t3_right_iconx2

0xb971,	// (0x0005d473) list_medium_line_t4_g4

0xb971,	// (0x0005d473) list_medium_line_x2

0xb971,	// (0x0005d473) list_medium_line_x2_t2_g2

0xb971,	// (0x0005d473) list_medium_line_x2_t2_g3

0xb971,	// (0x0005d473) list_medium_line_x2_t2_g4

0xb971,	// (0x0005d473) list_medium_line_x2_t3

0xb971,	// (0x0005d473) list_medium_line_x2_t3_g2

0xb971,	// (0x0005d473) list_medium_line_x2_t3_g3

0xb971,	// (0x0005d473) list_medium_line_x2_t3_g4

0xb971,	// (0x0005d473) list_medium_line_x2_t4_g2

0xb971,	// (0x0005d473) list_medium_line_x2_t4_g4

0xb971,	// (0x0005d473) list_medium_line_x3

0xb971,	// (0x0005d473) list_medium_line_x3_t4

0xb971,	// (0x0005d473) list_medium_line_x3_t4_g4

0xb971,	// (0x0005d473) list_medium_line_x4_t4

0xb971,	// (0x0005d473) list_medium_line_x4_t4_g7

0xb971,	// (0x0005d473) list_medium_line_x4_t5

0x89e8,	// (0x0005a4ea) list_single_fs_dyc_pane_ParamLimits

0x89e8,	// (0x0005a4ea) list_single_fs_dyc_pane

0xc072,	// (0x0005db74) list_medium_line_x4_t4_g7_g1_ParamLimits

0xc072,	// (0x0005db74) list_medium_line_x4_t4_g7_g1

0xc072,	// (0x0005db74) list_medium_line_x4_t4_g7_g2_ParamLimits

0xc072,	// (0x0005db74) list_medium_line_x4_t4_g7_g2

0xc072,	// (0x0005db74) list_medium_line_x4_t4_g7_g3_ParamLimits

0xc072,	// (0x0005db74) list_medium_line_x4_t4_g7_g3

0xc072,	// (0x0005db74) list_medium_line_x4_t4_g7_g4_ParamLimits

0xc072,	// (0x0005db74) list_medium_line_x4_t4_g7_g4

0xc072,	// (0x0005db74) list_medium_line_x4_t4_g7_g5_ParamLimits

0xc072,	// (0x0005db74) list_medium_line_x4_t4_g7_g5

0xc072,	// (0x0005db74) list_medium_line_x4_t4_g7_g6_ParamLimits

0xc072,	// (0x0005db74) list_medium_line_x4_t4_g7_g6

0xc080,	// (0x0005db82) list_medium_line_x4_t4_g7_g7_ParamLimits

0xc080,	// (0x0005db82) list_medium_line_x4_t4_g7_g7

0x0006,

0xfb06,	// (0x00061608) list_medium_line_x4_t4_g7_g_ParamLimits

0xfb06,	// (0x00061608) list_medium_line_x4_t4_g7_g

0xc0ba,	// (0x0005dbbc) list_medium_line_x4_t4_g7_t1_ParamLimits

0xc0ba,	// (0x0005dbbc) list_medium_line_x4_t4_g7_t1

0xc0ba,	// (0x0005dbbc) list_medium_line_x4_t4_g7_t2_ParamLimits

0xc0ba,	// (0x0005dbbc) list_medium_line_x4_t4_g7_t2

0xc0ba,	// (0x0005dbbc) list_medium_line_x4_t4_g7_t3_ParamLimits

0xc0ba,	// (0x0005dbbc) list_medium_line_x4_t4_g7_t3

0xc0ce,	// (0x0005dbd0) list_medium_line_x4_t4_g7_t4_ParamLimits

0xc0ce,	// (0x0005dbd0) list_medium_line_x4_t4_g7_t4

0xc0ce,	// (0x0005dbd0) list_medium_line_x4_t4_g7_t5_ParamLimits

0xc0ce,	// (0x0005dbd0) list_medium_line_x4_t4_g7_t5

0x0004,

0xfb15,	// (0x00061617) list_medium_line_x4_t4_g7_t_ParamLimits

0xfb15,	// (0x00061617) list_medium_line_x4_t4_g7_t

0x9131,	// (0x0005ac33) list_single_dyc_row_pane_ParamLimits

0x9131,	// (0x0005ac33) list_single_dyc_row_pane

0x965b,	// (0x0005b15d) call5_gesture_pane_ParamLimits

0x965b,	// (0x0005b15d) call5_gesture_pane

0x968f,	// (0x0005b191) call5_windows_pane_ParamLimits

0x968f,	// (0x0005b191) call5_windows_pane

0x96e2,	// (0x0005b1e4) call5_swipe_1_pane_cp_ParamLimits

0x96e2,	// (0x0005b1e4) call5_swipe_1_pane_cp

0x96ee,	// (0x0005b1f0) call5_swipe_2_pane_cp_ParamLimits

0x96ee,	// (0x0005b1f0) call5_swipe_2_pane_cp

0xc2c0,	// (0x0005ddc2) call5_image_pane_cp

0x96fa,	// (0x0005b1fc) popup_call5_audio_first_window_cp_ParamLimits

0x96fa,	// (0x0005b1fc) popup_call5_audio_first_window_cp

0x179a,	// (0x0005329c) call5_swipe_1_pane_g1_cp_ParamLimits

0x179a,	// (0x0005329c) call5_swipe_1_pane_g1_cp

0x17a7,	// (0x000532a9) call5_swipe_1_pane_g2_cp

0x17af,	// (0x000532b1) call5_swipe_1_pane_t1_cp_ParamLimits

0x17af,	// (0x000532b1) call5_swipe_1_pane_t1_cp

0x179a,	// (0x0005329c) call5_swipe_2_pane_g1_cp_ParamLimits

0x179a,	// (0x0005329c) call5_swipe_2_pane_g1_cp

0x17c4,	// (0x000532c6) call5_swipe_2_pane_g2_cp

0x17cc,	// (0x000532ce) call5_swipe_2_pane_t1_cp_ParamLimits

0x17cc,	// (0x000532ce) call5_swipe_2_pane_t1_cp

0xc00b,	// (0x0005db0d) main_sp_fs_email_pane

0x17e1,	// (0x000532e3) main_sp_fs_listscroll_pane_te

0x9708,	// (0x0005b20a) popup_sp_fs_action_menu_pane_ParamLimits

0x9708,	// (0x0005b20a) popup_sp_fs_action_menu_pane

0xc0b0,	// (0x0005dbb2) bg_sp_fs_ctrlbar_pane_g1

0x17ea,	// (0x000532ec) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x17f3,	// (0x000532f5) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe465,	// (0x0005ff67) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc0b0,	// (0x0005dbb2) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfc03,	// (0x00061705) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xe52b,	// (0x0006002d) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xe52b,	// (0x0006002d) bg_sp_fs_ctrlbar_ddmenu_pane

0x17fc,	// (0x000532fe) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x17fc,	// (0x000532fe) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x1808,	// (0x0005330a) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x1808,	// (0x0005330a) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfc0c,	// (0x0006170e) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfc0c,	// (0x0006170e) main_sp_fs_ctrlbar_ddmenu_pane_g

0x1814,	// (0x00053316) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x1814,	// (0x00053316) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xc0b0,	// (0x0005dbb2) list_medium_line_t2_right_icon_g1

0xc7ef,	// (0x0005e2f1) list_medium_line_t2_right_icon_t1

0xc7ef,	// (0x0005e2f1) list_medium_line_t2_right_icon_t2

0x0001,

0xfc11,	// (0x00061713) list_medium_line_t2_right_icon_t

0xd30e,	// (0x0005ee10) bg_sp_fs_ctrlbar_pane_ParamLimits

0xd30e,	// (0x0005ee10) bg_sp_fs_ctrlbar_pane

0x978d,	// (0x0005b28f) main_sp_fs_ctrlbar_button_pane_cp01

0x9795,	// (0x0005b297) main_sp_fs_ctrlbar_ddmenu_pane

0x1866,	// (0x00053368) main_sp_fs_ctrlbar_pane_g1

0x1872,	// (0x00053374) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfc16,	// (0x00061718) main_sp_fs_ctrlbar_pane_g

0x97d1,	// (0x0005b2d3) main_sp_fs_ctrlbar_pane_t1

0x980c,	// (0x0005b30e) main_sp_fs_ctrlbar_pane

0x9822,	// (0x0005b324) main_sp_fs_listscroll_pane_te_cp01

0x983d,	// (0x0005b33f) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x983d,	// (0x0005b33f) popup_sp_fs_action_menu_pane_cp01

0xc00b,	// (0x0005db0d) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xc00b,	// (0x0005db0d) bg_sp_fs_highlight_list_pane_cp01

0x039e,	// (0x00051ea0) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x039e,	// (0x00051ea0) sp_fs_action_menu_list_gene_pane_g1

0x1899,	// (0x0005339b) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x1899,	// (0x0005339b) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfc24,	// (0x00061726) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfc24,	// (0x00061726) sp_fs_action_menu_list_gene_pane_g

0x03ad,	// (0x00051eaf) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x03ad,	// (0x00051eaf) sp_fs_action_menu_list_gene_pane_t1

0x03c5,	// (0x00051ec7) sp_fs_action_menu_list_gene_pane_ParamLimits

0x03c5,	// (0x00051ec7) sp_fs_action_menu_list_gene_pane

0x18a6,	// (0x000533a8) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x18a6,	// (0x000533a8) popup_sp_fs_action_menu_bg_pane

0x03e4,	// (0x00051ee6) sp_fs_action_menu_list_pane_ParamLimits

0x03e4,	// (0x00051ee6) sp_fs_action_menu_list_pane

0x985d,	// (0x0005b35f) sp_fs_scroll_pane_cp01_ParamLimits

0x985d,	// (0x0005b35f) sp_fs_scroll_pane_cp01

0xc7ef,	// (0x0005e2f1) list_medium_line_plain_t2_t1

0xc7ef,	// (0x0005e2f1) list_medium_line_plain_t2_t2

0x0001,

0xfc11,	// (0x00061713) list_medium_line_plain_t2_t

0xc7ef,	// (0x0005e2f1) list_medium_line_plain_t3_t1

0xc7ef,	// (0x0005e2f1) list_medium_line_plain_t3_t2

0xc7ef,	// (0x0005e2f1) list_medium_line_plain_t3_t3

0x0002,

0xf27c,	// (0x00060d7e) list_medium_line_plain_t3_t

0xc072,	// (0x0005db74) list_medium_line_x2_t2_g2_g1_ParamLimits

0xc072,	// (0x0005db74) list_medium_line_x2_t2_g2_g1

0xc072,	// (0x0005db74) list_medium_line_x2_t2_g2_g2_ParamLimits

0xc072,	// (0x0005db74) list_medium_line_x2_t2_g2_g2

0x0001,

0xf1bc,	// (0x00060cbe) list_medium_line_x2_t2_g2_g_ParamLimits

0xf1bc,	// (0x00060cbe) list_medium_line_x2_t2_g2_g

0xc0ba,	// (0x0005dbbc) list_medium_line_x2_t2_g2_t1_ParamLimits

0xc0ba,	// (0x0005dbbc) list_medium_line_x2_t2_g2_t1

0xc0ba,	// (0x0005dbbc) list_medium_line_x2_t2_g2_t2_ParamLimits

0xc0ba,	// (0x0005dbbc) list_medium_line_x2_t2_g2_t2

0x0001,

0xf231,	// (0x00060d33) list_medium_line_x2_t2_g2_t_ParamLimits

0xf231,	// (0x00060d33) list_medium_line_x2_t2_g2_t

0xc072,	// (0x0005db74) list_medium_line_x2_t4_g2_g1_ParamLimits

0xc072,	// (0x0005db74) list_medium_line_x2_t4_g2_g1

0xc072,	// (0x0005db74) list_medium_line_x2_t4_g2_g2_ParamLimits

0xc072,	// (0x0005db74) list_medium_line_x2_t4_g2_g2

0x0001,

0xf1bc,	// (0x00060cbe) list_medium_line_x2_t4_g2_g_ParamLimits

0xf1bc,	// (0x00060cbe) list_medium_line_x2_t4_g2_g

0xc0ba,	// (0x0005dbbc) list_medium_line_x2_t4_g2_t1_ParamLimits

0xc0ba,	// (0x0005dbbc) list_medium_line_x2_t4_g2_t1

0xc0ba,	// (0x0005dbbc) list_medium_line_x2_t4_g2_t2_ParamLimits

0xc0ba,	// (0x0005dbbc) list_medium_line_x2_t4_g2_t2

0xc0ba,	// (0x0005dbbc) list_medium_line_x2_t4_g2_t3_ParamLimits

0xc0ba,	// (0x0005dbbc) list_medium_line_x2_t4_g2_t3

0xc0ba,	// (0x0005dbbc) list_medium_line_x2_t4_g2_t4_ParamLimits

0xc0ba,	// (0x0005dbbc) list_medium_line_x2_t4_g2_t4

0x0003,

0xf1ca,	// (0x00060ccc) list_medium_line_x2_t4_g2_t_ParamLimits

0xf1ca,	// (0x00060ccc) list_medium_line_x2_t4_g2_t

0xc0b0,	// (0x0005dbb2) list_medium_line_t3_right_iconx2_g1

0xc0b0,	// (0x0005dbb2) list_medium_line_t3_right_iconx2_g2

0xc0b0,	// (0x0005dbb2) list_medium_line_t3_right_iconx2_g3

0x0002,

0xf398,	// (0x00060e9a) list_medium_line_t3_right_iconx2_g

0xc7ef,	// (0x0005e2f1) list_medium_line_t3_right_iconx2_t1

0xc7ef,	// (0x0005e2f1) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfc11,	// (0x00061713) list_medium_line_t3_right_iconx2_t

0xc072,	// (0x0005db74) list_medium_line_x3_t4_g4_g1_ParamLimits

0xc072,	// (0x0005db74) list_medium_line_x3_t4_g4_g1

0xc072,	// (0x0005db74) list_medium_line_x3_t4_g4_g2_ParamLimits

0xc072,	// (0x0005db74) list_medium_line_x3_t4_g4_g2

0xc072,	// (0x0005db74) list_medium_line_x3_t4_g4_g3_ParamLimits

0xc072,	// (0x0005db74) list_medium_line_x3_t4_g4_g3

0xc072,	// (0x0005db74) list_medium_line_x3_t4_g4_g4_ParamLimits

0xc072,	// (0x0005db74) list_medium_line_x3_t4_g4_g4

0x0003,

0xf1c1,	// (0x00060cc3) list_medium_line_x3_t4_g4_g_ParamLimits

0xf1c1,	// (0x00060cc3) list_medium_line_x3_t4_g4_g

0xc0ba,	// (0x0005dbbc) list_medium_line_x3_t4_g4_t1_ParamLimits

0xc0ba,	// (0x0005dbbc) list_medium_line_x3_t4_g4_t1

0xc0ba,	// (0x0005dbbc) list_medium_line_x3_t4_g4_t2_ParamLimits

0xc0ba,	// (0x0005dbbc) list_medium_line_x3_t4_g4_t2

0xc0ba,	// (0x0005dbbc) list_medium_line_x3_t4_g4_t3_ParamLimits

0xc0ba,	// (0x0005dbbc) list_medium_line_x3_t4_g4_t3

0xc0ba,	// (0x0005dbbc) list_medium_line_x3_t4_g4_t4_ParamLimits

0xc0ba,	// (0x0005dbbc) list_medium_line_x3_t4_g4_t4

0x0003,

0xf1ca,	// (0x00060ccc) list_medium_line_x3_t4_g4_t_ParamLimits

0xf1ca,	// (0x00060ccc) list_medium_line_x3_t4_g4_t

0x9883,	// (0x0005b385) list_single_dyc_row_text_pane_t1_ParamLimits

0x9883,	// (0x0005b385) list_single_dyc_row_text_pane_t1

0x98ba,	// (0x0005b3bc) list_single_dyc_row_text_pane_t2_ParamLimits

0x98ba,	// (0x0005b3bc) list_single_dyc_row_text_pane_t2

0x0404,	// (0x00051f06) list_single_dyc_row_text_pane_t3_ParamLimits

0x0404,	// (0x00051f06) list_single_dyc_row_text_pane_t3

0x0005,

0xfc29,	// (0x0006172b) list_single_dyc_row_text_pane_t_ParamLimits

0xfc29,	// (0x0006172b) list_single_dyc_row_text_pane_t

0x0428,	// (0x00051f2a) list_single_dyc_row_pane_g1_ParamLimits

0x0428,	// (0x00051f2a) list_single_dyc_row_pane_g1

0x0434,	// (0x00051f36) list_single_dyc_row_pane_g2_ParamLimits

0x0434,	// (0x00051f36) list_single_dyc_row_pane_g2

0x0440,	// (0x00051f42) list_single_dyc_row_pane_g3_ParamLimits

0x0440,	// (0x00051f42) list_single_dyc_row_pane_g3

0x044c,	// (0x00051f4e) list_single_dyc_row_pane_g4_ParamLimits

0x044c,	// (0x00051f4e) list_single_dyc_row_pane_g4

0x0003,

0xfc36,	// (0x00061738) list_single_dyc_row_pane_g_ParamLimits

0xfc36,	// (0x00061738) list_single_dyc_row_pane_g

0x0458,	// (0x00051f5a) list_single_dyc_row_text_pane_ParamLimits

0x0458,	// (0x00051f5a) list_single_dyc_row_text_pane

0xb971,	// (0x0005d473) bg_sp_fs_scroll_pane

0x18b4,	// (0x000533b6) thumb_sp_fs_scroll_pane

0xc072,	// (0x0005db74) list_medium_line_g1_ParamLimits

0xc072,	// (0x0005db74) list_medium_line_g1

0xc0ba,	// (0x0005dbbc) list_medium_line_t1_ParamLimits

0xc0ba,	// (0x0005dbbc) list_medium_line_t1

0xc072,	// (0x0005db74) list_medium_line_x2_g1_ParamLimits

0xc072,	// (0x0005db74) list_medium_line_x2_g1

0xc072,	// (0x0005db74) list_medium_line_x2_g2_ParamLimits

0xc072,	// (0x0005db74) list_medium_line_x2_g2

0x0001,

0xf1bc,	// (0x00060cbe) list_medium_line_x2_g_ParamLimits

0xf1bc,	// (0x00060cbe) list_medium_line_x2_g

0xc0ba,	// (0x0005dbbc) list_medium_line_x2_t1_ParamLimits

0xc0ba,	// (0x0005dbbc) list_medium_line_x2_t1

0xc072,	// (0x0005db74) list_medium_line_x3_g1_ParamLimits

0xc072,	// (0x0005db74) list_medium_line_x3_g1

0x18bd,	// (0x000533bf) list_medium_line_x3_g2_ParamLimits

0x18bd,	// (0x000533bf) list_medium_line_x3_g2

0x0001,

0xfc3f,	// (0x00061741) list_medium_line_x3_g_ParamLimits

0xfc3f,	// (0x00061741) list_medium_line_x3_g

0x18cb,	// (0x000533cd) list_medium_line_x3_t1_ParamLimits

0x18cb,	// (0x000533cd) list_medium_line_x3_t1

0x18df,	// (0x000533e1) thumb_sp_fs_scroll_pane_g1

0x18e8,	// (0x000533ea) thumb_sp_fs_scroll_pane_g2

0x18f1,	// (0x000533f3) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfc44,	// (0x00061746) thumb_sp_fs_scroll_pane_g

0x18df,	// (0x000533e1) bg_sp_fs_scroll_pane_g1

0x18e8,	// (0x000533ea) bg_sp_fs_scroll_pane_g2

0x18f1,	// (0x000533f3) bg_sp_fs_scroll_pane_g3

0x0002,

0xfc44,	// (0x00061746) bg_sp_fs_scroll_pane_g

0xc072,	// (0x0005db74) list_medium_line_x2_t3_g4_g1_ParamLimits

0xc072,	// (0x0005db74) list_medium_line_x2_t3_g4_g1

0xc072,	// (0x0005db74) list_medium_line_x2_t3_g4_g2_ParamLimits

0xc072,	// (0x0005db74) list_medium_line_x2_t3_g4_g2

0xc072,	// (0x0005db74) list_medium_line_x2_t3_g4_g3_ParamLimits

0xc072,	// (0x0005db74) list_medium_line_x2_t3_g4_g3

0xc072,	// (0x0005db74) list_medium_line_x2_t3_g4_g4_ParamLimits

0xc072,	// (0x0005db74) list_medium_line_x2_t3_g4_g4

0x0003,

0xf1c1,	// (0x00060cc3) list_medium_line_x2_t3_g4_g_ParamLimits

0xf1c1,	// (0x00060cc3) list_medium_line_x2_t3_g4_g

0xc0ba,	// (0x0005dbbc) list_medium_line_x2_t3_g4_t1_ParamLimits

0xc0ba,	// (0x0005dbbc) list_medium_line_x2_t3_g4_t1

0xc0ba,	// (0x0005dbbc) list_medium_line_x2_t3_g4_t2_ParamLimits

0xc0ba,	// (0x0005dbbc) list_medium_line_x2_t3_g4_t2

0xc0ba,	// (0x0005dbbc) list_medium_line_x2_t3_g4_t3_ParamLimits

0xc0ba,	// (0x0005dbbc) list_medium_line_x2_t3_g4_t3

0x0002,

0xf1b5,	// (0x00060cb7) list_medium_line_x2_t3_g4_t_ParamLimits

0xf1b5,	// (0x00060cb7) list_medium_line_x2_t3_g4_t

0xc072,	// (0x0005db74) list_medium_line_g2_g1_ParamLimits

0xc072,	// (0x0005db74) list_medium_line_g2_g1

0xc072,	// (0x0005db74) list_medium_line_g2_g2_ParamLimits

0xc072,	// (0x0005db74) list_medium_line_g2_g2

0x0001,

0xf1bc,	// (0x00060cbe) list_medium_line_g2_g_ParamLimits

0xf1bc,	// (0x00060cbe) list_medium_line_g2_g

0xc0ba,	// (0x0005dbbc) list_medium_line_g2_t1_ParamLimits

0xc0ba,	// (0x0005dbbc) list_medium_line_g2_t1

0xc072,	// (0x0005db74) list_medium_line_t3_g2_g1_ParamLimits

0xc072,	// (0x0005db74) list_medium_line_t3_g2_g1

0xc072,	// (0x0005db74) list_medium_line_t3_g2_g2_ParamLimits

0xc072,	// (0x0005db74) list_medium_line_t3_g2_g2

0x0001,

0xf1bc,	// (0x00060cbe) list_medium_line_t3_g2_g_ParamLimits

0xf1bc,	// (0x00060cbe) list_medium_line_t3_g2_g

0xc0ba,	// (0x0005dbbc) list_medium_line_t3_g2_t1_ParamLimits

0xc0ba,	// (0x0005dbbc) list_medium_line_t3_g2_t1

0xc0ba,	// (0x0005dbbc) list_medium_line_t3_g2_t2_ParamLimits

0xc0ba,	// (0x0005dbbc) list_medium_line_t3_g2_t2

0xc0ba,	// (0x0005dbbc) list_medium_line_t3_g2_t3_ParamLimits

0xc0ba,	// (0x0005dbbc) list_medium_line_t3_g2_t3

0x0002,

0xf1b5,	// (0x00060cb7) list_medium_line_t3_g2_t_ParamLimits

0xf1b5,	// (0x00060cb7) list_medium_line_t3_g2_t

0xc0b0,	// (0x0005dbb2) list_medium_line_right_icon_g1

0xc7ef,	// (0x0005e2f1) list_medium_line_right_icon_t1

0xc072,	// (0x0005db74) list_medium_line_t2_g1_ParamLimits

0xc072,	// (0x0005db74) list_medium_line_t2_g1

0xc0ba,	// (0x0005dbbc) list_medium_line_t2_t1_ParamLimits

0xc0ba,	// (0x0005dbbc) list_medium_line_t2_t1

0xc0ba,	// (0x0005dbbc) list_medium_line_t2_t2_ParamLimits

0xc0ba,	// (0x0005dbbc) list_medium_line_t2_t2

0x0001,

0xf231,	// (0x00060d33) list_medium_line_t2_t_ParamLimits

0xf231,	// (0x00060d33) list_medium_line_t2_t

0xc072,	// (0x0005db74) list_medium_line_t3_g1_ParamLimits

0xc072,	// (0x0005db74) list_medium_line_t3_g1

0xc0ba,	// (0x0005dbbc) list_medium_line_t3_t1_ParamLimits

0xc0ba,	// (0x0005dbbc) list_medium_line_t3_t1

0xc0ba,	// (0x0005dbbc) list_medium_line_t3_t2_ParamLimits

0xc0ba,	// (0x0005dbbc) list_medium_line_t3_t2

0xc0ba,	// (0x0005dbbc) list_medium_line_t3_t3_ParamLimits

0xc0ba,	// (0x0005dbbc) list_medium_line_t3_t3

0x0002,

0xf1b5,	// (0x00060cb7) list_medium_line_t3_t_ParamLimits

0xf1b5,	// (0x00060cb7) list_medium_line_t3_t

0xc072,	// (0x0005db74) list_medium_line_g3_g1_ParamLimits

0xc072,	// (0x0005db74) list_medium_line_g3_g1

0xc072,	// (0x0005db74) list_medium_line_g3_g2_ParamLimits

0xc072,	// (0x0005db74) list_medium_line_g3_g2

0xc072,	// (0x0005db74) list_medium_line_g3_g3_ParamLimits

0xc072,	// (0x0005db74) list_medium_line_g3_g3

0x0002,

0xf1ae,	// (0x00060cb0) list_medium_line_g3_g_ParamLimits

0xf1ae,	// (0x00060cb0) list_medium_line_g3_g

0xc0ba,	// (0x0005dbbc) list_medium_line_g3_t1_ParamLimits

0xc0ba,	// (0x0005dbbc) list_medium_line_g3_t1

0xc072,	// (0x0005db74) list_medium_line_t2_g3_g1_ParamLimits

0xc072,	// (0x0005db74) list_medium_line_t2_g3_g1

0xc072,	// (0x0005db74) list_medium_line_t2_g3_g2_ParamLimits

0xc072,	// (0x0005db74) list_medium_line_t2_g3_g2

0xc072,	// (0x0005db74) list_medium_line_t2_g3_g3_ParamLimits

0xc072,	// (0x0005db74) list_medium_line_t2_g3_g3

0x0002,

0xf1ae,	// (0x00060cb0) list_medium_line_t2_g3_g_ParamLimits

0xf1ae,	// (0x00060cb0) list_medium_line_t2_g3_g

0xc0ba,	// (0x0005dbbc) list_medium_line_t2_g3_t1_ParamLimits

0xc0ba,	// (0x0005dbbc) list_medium_line_t2_g3_t1

0xc0ba,	// (0x0005dbbc) list_medium_line_t2_g3_t2_ParamLimits

0xc0ba,	// (0x0005dbbc) list_medium_line_t2_g3_t2

0x0001,

0xf231,	// (0x00060d33) list_medium_line_t2_g3_t_ParamLimits

0xf231,	// (0x00060d33) list_medium_line_t2_g3_t

0xc072,	// (0x0005db74) list_medium_line_t3_g3_g1_ParamLimits

0xc072,	// (0x0005db74) list_medium_line_t3_g3_g1

0xc072,	// (0x0005db74) list_medium_line_t3_g3_g2_ParamLimits

0xc072,	// (0x0005db74) list_medium_line_t3_g3_g2

0xc072,	// (0x0005db74) list_medium_line_t3_g3_g3_ParamLimits

0xc072,	// (0x0005db74) list_medium_line_t3_g3_g3

0x0002,

0xf1ae,	// (0x00060cb0) list_medium_line_t3_g3_g_ParamLimits

0xf1ae,	// (0x00060cb0) list_medium_line_t3_g3_g

0xc0ba,	// (0x0005dbbc) list_medium_line_t3_g3_t1_ParamLimits

0xc0ba,	// (0x0005dbbc) list_medium_line_t3_g3_t1

0xc0ba,	// (0x0005dbbc) list_medium_line_t3_g3_t2_ParamLimits

0xc0ba,	// (0x0005dbbc) list_medium_line_t3_g3_t2

0xc0ba,	// (0x0005dbbc) list_medium_line_t3_g3_t3_ParamLimits

0xc0ba,	// (0x0005dbbc) list_medium_line_t3_g3_t3

0x0002,

0xf1b5,	// (0x00060cb7) list_medium_line_t3_g3_t_ParamLimits

0xf1b5,	// (0x00060cb7) list_medium_line_t3_g3_t

0xc0b0,	// (0x0005dbb2) list_medium_line_right_iconx2_g1

0xc0b0,	// (0x0005dbb2) list_medium_line_right_iconx2_g2

0x0001,

0xf0af,	// (0x00060bb1) list_medium_line_right_iconx2_g

0xc7ef,	// (0x0005e2f1) list_medium_line_right_iconx2_t1

0xc0b0,	// (0x0005dbb2) list_medium_line_t2_right_iconx2_g1

0xc0b0,	// (0x0005dbb2) list_medium_line_t2_right_iconx2_g2

0x0001,

0xf0af,	// (0x00060bb1) list_medium_line_t2_right_iconx2_g

0xc7ef,	// (0x0005e2f1) list_medium_line_t2_right_iconx2_t1

0xc7ef,	// (0x0005e2f1) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfc11,	// (0x00061713) list_medium_line_t2_right_iconx2_t

0xc7ef,	// (0x0005e2f1) list_medium_line_x4_t4_t1

0xc7ef,	// (0x0005e2f1) list_medium_line_x4_t4_t2

0xc7ef,	// (0x0005e2f1) list_medium_line_x4_t4_t3

0xc7ef,	// (0x0005e2f1) list_medium_line_x4_t4_t4

0x0003,

0xf283,	// (0x00060d85) list_medium_line_x4_t4_t

0x9a07,	// (0x0005b509) tport_appsw_pane_ParamLimits

0x9a07,	// (0x0005b509) tport_appsw_pane

0x9a15,	// (0x0005b517) tport_contact_pane_ParamLimits

0x9a15,	// (0x0005b517) tport_contact_pane

0x9a25,	// (0x0005b527) tport_listscroll_pane_ParamLimits

0x9a25,	// (0x0005b527) tport_listscroll_pane

0x9a35,	// (0x0005b537) cell_tport_appsw_pane_ParamLimits

0x9a35,	// (0x0005b537) cell_tport_appsw_pane

0xc080,	// (0x0005db82) tport_appsw_pane_g1_ParamLimits

0xc080,	// (0x0005db82) tport_appsw_pane_g1

0x18fa,	// (0x000533fc) tport_contact_pane_g1

0x1903,	// (0x00053405) tport_contact_pane_t1

0x1911,	// (0x00053413) tport_contact_pane_t2

0x0001,

0xfc4b,	// (0x0006174d) tport_contact_pane_t

0x191f,	// (0x00053421) list_tport_pane

0x1928,	// (0x0005342a) scroll_pane_cp_030

0x9a68,	// (0x0005b56a) cell_tport_appsw_pane_g1

0x9a78,	// (0x0005b57a) cell_tport_appsw_pane_t1

0x9a86,	// (0x0005b588) grid_highlight_pane_cp019

0x9a8e,	// (0x0005b590) list_tport_double_graphic_pane_ParamLimits

0x9a8e,	// (0x0005b590) list_tport_double_graphic_pane

0xc00b,	// (0x0005db0d) list_highlight_pane_cp023_ParamLimits

0xc00b,	// (0x0005db0d) list_highlight_pane_cp023

0x9a9f,	// (0x0005b5a1) list_tport_double_graphic_pane_g1_ParamLimits

0x9a9f,	// (0x0005b5a1) list_tport_double_graphic_pane_g1

0x9aac,	// (0x0005b5ae) list_tport_double_graphic_pane_t1_ParamLimits

0x9aac,	// (0x0005b5ae) list_tport_double_graphic_pane_t1

0x9ac1,	// (0x0005b5c3) list_tport_double_graphic_pane_t2_ParamLimits

0x9ac1,	// (0x0005b5c3) list_tport_double_graphic_pane_t2

0x0001,

0xfc57,	// (0x00061759) list_tport_double_graphic_pane_t_ParamLimits

0xfc57,	// (0x00061759) list_tport_double_graphic_pane_t

0xb971,	// (0x0005d473) main_cale_note_pane

0x7b32,	// (0x00059634) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x7b32,	// (0x00059634) cell_vitu2_function_top_wide_pane_cp01

0x94d8,	// (0x0005afda) wait_bar_pane_cp05_ParamLimits

0xc00b,	// (0x0005db0d) listscroll_cmail_pane

0x1939,	// (0x0005343b) list_cmail_pane

0x9ad3,	// (0x0005b5d5) list_cmail_body_pane

0x9afb,	// (0x0005b5fd) list_single_cmail_header_caption_pane

0x9b2a,	// (0x0005b62c) list_single_cmail_header_detail_pane_ParamLimits

0x9b2a,	// (0x0005b62c) list_single_cmail_header_detail_pane

0x1950,	// (0x00053452) list_single_cmail_header_caption_pane_t1

0x9b67,	// (0x0005b669) list_single_cmail_header_detail_pane_g1_ParamLimits

0x9b67,	// (0x0005b669) list_single_cmail_header_detail_pane_g1

0x0477,	// (0x00051f79) list_single_cmail_header_detail_pane_g2_ParamLimits

0x0477,	// (0x00051f79) list_single_cmail_header_detail_pane_g2

0x0002,

0xfc5c,	// (0x0006175e) list_single_cmail_header_detail_pane_g_ParamLimits

0xfc5c,	// (0x0006175e) list_single_cmail_header_detail_pane_g

0x9b7d,	// (0x0005b67f) list_single_cmail_header_detail_pane_t1_ParamLimits

0x9b7d,	// (0x0005b67f) list_single_cmail_header_detail_pane_t1

0x9bb9,	// (0x0005b6bb) list_single_cmail_header_editor_pane_bg_ParamLimits

0x9bb9,	// (0x0005b6bb) list_single_cmail_header_editor_pane_bg

0x1441,	// (0x00052f43) list_cmail_body_pane_g1

0x1974,	// (0x00053476) list_cmail_body_pane_t1

0x07ba,	// (0x000522bc) list_single_cmail_header_editor_pane_bg_g1

0xc4d9,	// (0x0005dfdb) list_single_cmail_header_editor_pane_bg_g1_copy1

0x07ca,	// (0x000522cc) list_single_cmail_header_editor_pane_bg_g1_copy2

0x07c2,	// (0x000522c4) list_single_cmail_header_editor_pane_bg_g1_copy3

0x0a29,	// (0x0005252b) list_single_cmail_header_editor_pane_bg_g1_copy4

0x07ea,	// (0x000522ec) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x07da,	// (0x000522dc) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x07e2,	// (0x000522e4) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xc4b9,	// (0x0005dfbb) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x9bd0,	// (0x0005b6d2) calenote_gesture_pane_ParamLimits

0x9bd0,	// (0x0005b6d2) calenote_gesture_pane

0x9bea,	// (0x0005b6ec) calenote_window_pane_ParamLimits

0x9bea,	// (0x0005b6ec) calenote_window_pane

0x1982,	// (0x00053484) popup_note_window_cp01

0x9c02,	// (0x0005b704) calenote_swipe_1_pane_ParamLimits

0x9c02,	// (0x0005b704) calenote_swipe_1_pane

0x96ee,	// (0x0005b1f0) calenote_swipe_2_pane_ParamLimits

0x96ee,	// (0x0005b1f0) calenote_swipe_2_pane

0x179a,	// (0x0005329c) calenote_swipe_1_pane_g1_ParamLimits

0x179a,	// (0x0005329c) calenote_swipe_1_pane_g1

0x1994,	// (0x00053496) calenote_swipe_1_pane_g2_ParamLimits

0x1994,	// (0x00053496) calenote_swipe_1_pane_g2

0x0001,

0xfc68,	// (0x0006176a) calenote_swipe_1_pane_g_ParamLimits

0xfc68,	// (0x0006176a) calenote_swipe_1_pane_g

0x19a0,	// (0x000534a2) calenote_swipe_1_pane_t1_ParamLimits

0x19a0,	// (0x000534a2) calenote_swipe_1_pane_t1

0x179a,	// (0x0005329c) calenote_swipe_2_pane_g1_ParamLimits

0x179a,	// (0x0005329c) calenote_swipe_2_pane_g1

0x19bf,	// (0x000534c1) calenote_swipe_2_pane_g2_ParamLimits

0x19bf,	// (0x000534c1) calenote_swipe_2_pane_g2

0x0001,

0xfc6d,	// (0x0006176f) calenote_swipe_2_pane_g_ParamLimits

0xfc6d,	// (0x0006176f) calenote_swipe_2_pane_g

0x19cb,	// (0x000534cd) calenote_swipe_2_pane_t1_ParamLimits

0x19cb,	// (0x000534cd) calenote_swipe_2_pane_t1

0xb971,	// (0x0005d473) main_mup_navstr_pane

0x69cc,	// (0x000584ce) main_mup3_pane_t7_ParamLimits

0x69cc,	// (0x000584ce) main_mup3_pane_t7

0x7201,	// (0x00058d03) main_mp4_pane_g6_ParamLimits

0x7201,	// (0x00058d03) main_mp4_pane_g6

0x7575,	// (0x00059077) main_image3_pane_t4_ParamLimits

0x7575,	// (0x00059077) main_image3_pane_t4

0x9c15,	// (0x0005b717) popup_navstr_preview_pane_ParamLimits

0x9c15,	// (0x0005b717) popup_navstr_preview_pane

0x9c21,	// (0x0005b723) scroll_navstr_pane_ParamLimits

0x9c21,	// (0x0005b723) scroll_navstr_pane

0xb971,	// (0x0005d473) bg_popup_preview_window_pane_cp04

0x19f2,	// (0x000534f4) popup_navstr_preview_pane_t1

0x9c2d,	// (0x0005b72f) scroll_navstr_pane_g1_ParamLimits

0x9c2d,	// (0x0005b72f) scroll_navstr_pane_g1

0x9c3a,	// (0x0005b73c) scroll_navstr_pane_t1_ParamLimits

0x9c3a,	// (0x0005b73c) scroll_navstr_pane_t1

0x198b,	// (0x0005348d) bg_button_pane_cp014

0x198b,	// (0x0005348d) bg_button_pane_cp030

0x9601,	// (0x0005b103) list_double_fisheye_pane_g4_ParamLimits

0x9601,	// (0x0005b103) list_double_fisheye_pane_g4

0x960d,	// (0x0005b10f) list_double_fisheye_pane_g5_ParamLimits

0x960d,	// (0x0005b10f) list_double_fisheye_pane_g5

0x1584,	// (0x00053086) sp_fs_scroll_pane_cp03

0x1866,	// (0x00053368) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x1872,	// (0x00053374) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfc16,	// (0x00061718) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x97d1,	// (0x0005b2d3) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x1948,	// (0x0005344a) sp_fs_scroll_pane_cp02

0xc208,	// (0x0005dd0a) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xc208,	// (0x0005dd0a) popup_sp_fs_calendar_preview_list_single_pane

0xb971,	// (0x0005d473) main_cam6_pano_pane

0x5f41,	// (0x00057a43) main_mup3_pane_ParamLimits

0xb971,	// (0x0005d473) main_phacti_pane

0x93ad,	// (0x0005aeaf) bg_button_pane_cp11

0x93c5,	// (0x0005aec7) main_mobtv_info_pane_g2_ParamLimits

0x93c5,	// (0x0005aec7) main_mobtv_info_pane_g2

0x0001,

0xfb76,	// (0x00061678) main_mobtv_info_pane_g_ParamLimits

0xfb76,	// (0x00061678) main_mobtv_info_pane_g

0xc0ce,	// (0x0005dbd0) sc_clock_pane_t5_ParamLimits

0xc0ce,	// (0x0005dbd0) sc_clock_pane_t5

0xd330,	// (0x0005ee32) main_radioblah_pane_g1_ParamLimits

0xd31c,	// (0x0005ee1e) main_radioblah_pane_t3_ParamLimits

0xd31c,	// (0x0005ee1e) main_radioblah_pane_t3

0xd31c,	// (0x0005ee1e) main_radioblah_pane_t4_ParamLimits

0xd31c,	// (0x0005ee1e) main_radioblah_pane_t4

0xc064,	// (0x0005db66) main_radioblah_text_pane_ParamLimits

0xc064,	// (0x0005db66) main_radioblah_text_pane

0x1692,	// (0x00053194) main_radioblah_info_pane_g1_ParamLimits

0x16d6,	// (0x000531d8) main_radioblah_info_pane_t4_ParamLimits

0x16d6,	// (0x000531d8) main_radioblah_info_pane_t4

0xc00b,	// (0x0005db0d) main_sp_fs_calendar_pane

0x9c4c,	// (0x0005b74e) main_phacti_pane_g1

0x9c54,	// (0x0005b756) phacti_note_pane_ParamLimits

0x9c54,	// (0x0005b756) phacti_note_pane

0x1a09,	// (0x0005350b) phacti_term_pane_ParamLimits

0x1a09,	// (0x0005350b) phacti_term_pane

0x1a1e,	// (0x00053520) phacti_note_pane_t1_ParamLimits

0x1a1e,	// (0x00053520) phacti_note_pane_t1

0x04a7,	// (0x00051fa9) phacti_term_pane_g1

0x04af,	// (0x00051fb1) phacti_term_pane_t1_ParamLimits

0x04af,	// (0x00051fb1) phacti_term_pane_t1

0x1a35,	// (0x00053537) popup_sp_fs_calendar_preview_list_single_pane_g1

0x1a3d,	// (0x0005353f) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfc77,	// (0x00061779) popup_sp_fs_calendar_preview_list_single_pane_g

0x1a45,	// (0x00053547) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x1a45,	// (0x00053547) popup_sp_fs_calendar_preview_list_single_pane_t1

0x1a5b,	// (0x0005355d) aid_popup_sp_fs_bg_corner_pane

0xc0b0,	// (0x0005dbb2) popup_sp_fs_calendar_preview_bg_pane_g1

0xb971,	// (0x0005d473) popup_sp_fs_calendar_preview_bg_pane

0x1a63,	// (0x00053565) popup_sp_fs_calendar_preview_list_pane

0xd30e,	// (0x0005ee10) bg_main_sp_fs_cale_pane_ParamLimits

0xd30e,	// (0x0005ee10) bg_main_sp_fs_cale_pane

0x04e2,	// (0x00051fe4) listscroll_cale_mrui_pane_ParamLimits

0x04e2,	// (0x00051fe4) listscroll_cale_mrui_pane

0x04f7,	// (0x00051ff9) listscroll_sp_fs_schedule_track_pane

0x0500,	// (0x00052002) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x0500,	// (0x00052002) main_sp_fs_ctrlbar_pane_cp01

0x1a6b,	// (0x0005356d) main_sp_fs_ribbon_pane

0x0513,	// (0x00052015) popup_sp_fs_cale_preview_window

0x9cb7,	// (0x0005b7b9) list_single_sp_fs_schedule_track_pane_ParamLimits

0x9cb7,	// (0x0005b7b9) list_single_sp_fs_schedule_track_pane

0xc064,	// (0x0005db66) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xc064,	// (0x0005db66) bg_sp_fs_highlight_list_pane_cp03

0x9cdd,	// (0x0005b7df) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x9cdd,	// (0x0005b7df) list_single_sp_fs_schedule_track_pane_g1

0x9ce9,	// (0x0005b7eb) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x9ce9,	// (0x0005b7eb) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfc7c,	// (0x0006177e) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfc7c,	// (0x0006177e) list_single_sp_fs_schedule_track_pane_g

0x9cf5,	// (0x0005b7f7) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x9cf5,	// (0x0005b7f7) list_single_sp_fs_schedule_track_pane_t1

0x9d0d,	// (0x0005b80f) sp_fs_schedule_track_pane_ParamLimits

0x9d0d,	// (0x0005b80f) sp_fs_schedule_track_pane

0x1a73,	// (0x00053575) sp_fs_schedule_track_pane_g1

0x1a7b,	// (0x0005357d) sp_fs_schedule_track_pane_g2

0x1a83,	// (0x00053585) sp_fs_schedule_track_pane_g3

0x1a8b,	// (0x0005358d) sp_fs_schedule_track_pane_g4

0x1a93,	// (0x00053595) sp_fs_schedule_track_pane_g5

0x0004,

0xfc81,	// (0x00061783) sp_fs_schedule_track_pane_g

0x07ba,	// (0x000522bc) bg_sp_fs_schedule_viewer_highlight_g1

0xc4d9,	// (0x0005dfdb) bg_sp_fs_schedule_viewer_highlight_g2

0x07c2,	// (0x000522c4) bg_sp_fs_schedule_viewer_highlight_g3

0x07ca,	// (0x000522cc) bg_sp_fs_schedule_viewer_highlight_g4

0x0a29,	// (0x0005252b) bg_sp_fs_schedule_viewer_highlight_g5

0x07da,	// (0x000522dc) bg_sp_fs_schedule_viewer_highlight_g6

0x07e2,	// (0x000522e4) bg_sp_fs_schedule_viewer_highlight_g7

0x07ea,	// (0x000522ec) bg_sp_fs_schedule_viewer_highlight_g8

0xc4b9,	// (0x0005dfbb) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfc8c,	// (0x0006178e) bg_sp_fs_schedule_viewer_highlight_g

0xb971,	// (0x0005d473) bg_main_sp_fs_ribbon_pane

0x9d1d,	// (0x0005b81f) main_sp_fs_ribbon_pane_g1

0x1a9b,	// (0x0005359d) main_sp_fs_ribbon_pane_t1

0x9d26,	// (0x0005b828) main_sp_fs_ribbon_pane_t2

0x1aaa,	// (0x000535ac) main_sp_fs_ribbon_pane_t3

0x0002,

0xfc9f,	// (0x000617a1) main_sp_fs_ribbon_pane_t

0x1ab9,	// (0x000535bb) main_sp_fs_ribbon_scheduler_pane

0x1ac1,	// (0x000535c3) bg_main_sp_fs_ribbon_pane_g1

0x1aca,	// (0x000535cc) bg_main_sp_fs_ribbon_pane_g2

0x1ad3,	// (0x000535d5) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfca6,	// (0x000617a8) bg_main_sp_fs_ribbon_pane_g

0x1adb,	// (0x000535dd) main_sp_fs_ribbon_scheduler_pane_g1

0x1ae4,	// (0x000535e6) main_sp_fs_ribbon_scheduler_pane_g2

0x1aed,	// (0x000535ef) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfcad,	// (0x000617af) main_sp_fs_ribbon_scheduler_pane_g

0x1af6,	// (0x000535f8) list_cale_mrui_pane

0x9d35,	// (0x0005b837) sp_fs_scroll_pane_cp07_ParamLimits

0x9d35,	// (0x0005b837) sp_fs_scroll_pane_cp07

0x9d51,	// (0x0005b853) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x9d51,	// (0x0005b853) bg_sp_fs_schedule_viewer_highlight

0x1b03,	// (0x00053605) list_single_sp_fs_schedule_track_pane_cp01

0x1b0b,	// (0x0005360d) list_sp_fs_schedule_track_pane

0x1b13,	// (0x00053615) sp_fs_scroll_pane_cp06_ParamLimits

0x1b13,	// (0x00053615) sp_fs_scroll_pane_cp06

0xc0b0,	// (0x0005dbb2) bgmain_sp_fs_calendar_pane_g1

0x9d5e,	// (0x0005b860) list_single_cale_mrui_pane_ParamLimits

0x9d5e,	// (0x0005b860) list_single_cale_mrui_pane

0x0525,	// (0x00052027) list_single_cale_mrui_row_pane_ParamLimits

0x0525,	// (0x00052027) list_single_cale_mrui_row_pane

0x0532,	// (0x00052034) list_single_cale_mrui_row_pane_g1_ParamLimits

0x0532,	// (0x00052034) list_single_cale_mrui_row_pane_g1

0x056a,	// (0x0005206c) list_single_cale_mrui_row_pane_t1_ParamLimits

0x056a,	// (0x0005206c) list_single_cale_mrui_row_pane_t1

0x9d8c,	// (0x0005b88e) list_single_cale_mrui_row_pane_t2_ParamLimits

0x9d8c,	// (0x0005b88e) list_single_cale_mrui_row_pane_t2

0x057c,	// (0x0005207e) list_single_cale_mrui_row_pane_t3_ParamLimits

0x057c,	// (0x0005207e) list_single_cale_mrui_row_pane_t3

0x05ab,	// (0x000520ad) list_single_cale_mrui_row_pane_t4_ParamLimits

0x05ab,	// (0x000520ad) list_single_cale_mrui_row_pane_t4

0x0003,

0xfcbb,	// (0x000617bd) list_single_cale_mrui_row_pane_t_ParamLimits

0xfcbb,	// (0x000617bd) list_single_cale_mrui_row_pane_t

0x9df2,	// (0x0005b8f4) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x9df2,	// (0x0005b8f4) list_single_cmail_header_editor_pane_bg_cp01

0x9e1a,	// (0x0005b91c) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x9e1a,	// (0x0005b91c) list_single_cmail_header_editor_pane_bg_cp02

0x1b32,	// (0x00053634) main_radioblah_text_pane_t1_ParamLimits

0x1b32,	// (0x00053634) main_radioblah_text_pane_t1

0x1b4c,	// (0x0005364e) cam6_indi_pane_cp01

0x1b54,	// (0x00053656) cam6_mode_pane_cp01

0x1b5c,	// (0x0005365e) cam6_pano_pane

0x1b65,	// (0x00053667) cam6_zoom_pane_cp01

0x1b6d,	// (0x0005366f) cam6_pano_image_pane

0x1b78,	// (0x0005367a) cam6_pano_pane_g1

0x1441,	// (0x00052f43) cam6_pano_pane_g2

0x1b81,	// (0x00053683) cam6_pano_pane_g3

0x1b8a,	// (0x0005368c) cam6_pano_pane_g4

0xeecc,	// (0x000609ce) cam6_pano_pane_g5

0x1b93,	// (0x00053695) cam6_pano_pane_g6

0x1b9d,	// (0x0005369f) cam6_pano_pane_g7

0x1ba5,	// (0x000536a7) cam6_pano_pane_g8

0x1bae,	// (0x000536b0) cam6_pano_pane_g9

0x0008,

0xfcc4,	// (0x000617c6) cam6_pano_pane_g

0xb971,	// (0x0005d473) main_browser_tag_pane

0x19ea,	// (0x000534ec) grid_navstr_albumart_pane

0x1bb9,	// (0x000536bb) cell_navstr_albumart_pane_ParamLimits

0x1bb9,	// (0x000536bb) cell_navstr_albumart_pane

0x1bd9,	// (0x000536db) cell_navstr_albumart_pane_g1

0xe2ec,	// (0x0005fdee) cell_navstr_albumart_pane_g2

0xe2fc,	// (0x0005fdfe) cell_navstr_albumart_pane_g3

0xe2f4,	// (0x0005fdf6) cell_navstr_albumart_pane_g4

0x0003,

0xfcd7,	// (0x000617d9) cell_navstr_albumart_pane_g

0x9e36,	// (0x0005b938) bt_list_pane_ParamLimits

0x9e36,	// (0x0005b938) bt_list_pane

0x9e57,	// (0x0005b959) bt_list_pane_t1

0x9e66,	// (0x0005b968) bt_list_pane_t2

0x0001,

0xfce0,	// (0x000617e2) bt_list_pane_t

0xb971,	// (0x0005d473) main_cale_prevew_pane

0x9e75,	// (0x0005b977) popup_cale_preview_window_ParamLimits

0x9e75,	// (0x0005b977) popup_cale_preview_window

0xc00b,	// (0x0005db0d) bg_popup_preview_window_pane_cp05_ParamLimits

0xc00b,	// (0x0005db0d) bg_popup_preview_window_pane_cp05

0x1be1,	// (0x000536e3) list_cale_preview_pane_ParamLimits

0x1be1,	// (0x000536e3) list_cale_preview_pane

0x9e8e,	// (0x0005b990) list_double_cale_preview_pane_ParamLimits

0x9e8e,	// (0x0005b990) list_double_cale_preview_pane

0x9ea0,	// (0x0005b9a2) list_single_cale_preview_pane_ParamLimits

0x9ea0,	// (0x0005b9a2) list_single_cale_preview_pane

0x9eb4,	// (0x0005b9b6) list_single_cale_preview_pane_g1

0x9ebc,	// (0x0005b9be) list_single_cale_preview_pane_t1_ParamLimits

0x9ebc,	// (0x0005b9be) list_single_cale_preview_pane_t1

0x9ed1,	// (0x0005b9d3) list_double_cale_preview_pane_g1

0x9ed9,	// (0x0005b9db) list_double_cale_preview_pane_t1_ParamLimits

0x9ed9,	// (0x0005b9db) list_double_cale_preview_pane_t1

0x9eee,	// (0x0005b9f0) list_double_cale_preview_pane_t2_ParamLimits

0x9eee,	// (0x0005b9f0) list_double_cale_preview_pane_t2

0x0001,

0xfce5,	// (0x000617e7) list_double_cale_preview_pane_t_ParamLimits

0xfce5,	// (0x000617e7) list_double_cale_preview_pane_t

0xb971,	// (0x0005d473) main_ezdial_pane

0xc00b,	// (0x0005db0d) main_sp_fs_email_pane_ParamLimits

0x974a,	// (0x0005b24c) cmail_ddmenu_btn01_pane_ParamLimits

0x974a,	// (0x0005b24c) cmail_ddmenu_btn01_pane

0x975f,	// (0x0005b261) cmail_ddmenu_btn02_pane_ParamLimits

0x975f,	// (0x0005b261) cmail_ddmenu_btn02_pane

0x9777,	// (0x0005b279) cmail_ddmenu_btn03_pane_ParamLimits

0x9777,	// (0x0005b279) cmail_ddmenu_btn03_pane

0x980c,	// (0x0005b30e) main_sp_fs_ctrlbar_pane_ParamLimits

0x9822,	// (0x0005b324) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x9ad3,	// (0x0005b5d5) list_cmail_body_pane_ParamLimits

0x195e,	// (0x00053460) bg_button_pane_cp12

0x1967,	// (0x00053469) list_single_cmail_header_detail_pane_g3_ParamLimits

0x1967,	// (0x00053469) list_single_cmail_header_detail_pane_g3

0x0483,	// (0x00051f85) list_single_cmail_header_detail_pane_t2_ParamLimits

0x0483,	// (0x00051f85) list_single_cmail_header_detail_pane_t2

0x0001,

0xfc63,	// (0x00061765) list_single_cmail_header_detail_pane_t_ParamLimits

0xfc63,	// (0x00061765) list_single_cmail_header_detail_pane_t

0x04c4,	// (0x00051fc6) phacti_term_pane_t2_ParamLimits

0x04c4,	// (0x00051fc6) phacti_term_pane_t2

0x0001,

0xfc72,	// (0x00061774) phacti_term_pane_t_ParamLimits

0xfc72,	// (0x00061774) phacti_term_pane_t

0x1bed,	// (0x000536ef) aid_size_list_single_double

0x9f06,	// (0x0005ba08) popup_ezdial_listscroll_window

0x1bf9,	// (0x000536fb) popup_number_entry_window_cp01

0xc2c0,	// (0x0005ddc2) bg_popup_call_pane_cp09

0x1c06,	// (0x00053708) ezdial_list_pane

0x1c0e,	// (0x00053710) scroll_pane_cp23

0xe52b,	// (0x0006002d) bg_button_pane_cp028_ParamLimits

0xe52b,	// (0x0006002d) bg_button_pane_cp028

0x9f1f,	// (0x0005ba21) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x9f1f,	// (0x0005ba21) cmail_ddmenu_btn01_pane_g1

0x9f2f,	// (0x0005ba31) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x9f2f,	// (0x0005ba31) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfcea,	// (0x000617ec) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfcea,	// (0x000617ec) cmail_ddmenu_btn01_pane_g

0x1c16,	// (0x00053718) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x1c16,	// (0x00053718) cmail_ddmenu_btn01_pane_t1

0xd30e,	// (0x0005ee10) bg_button_pane_cp029_ParamLimits

0xd30e,	// (0x0005ee10) bg_button_pane_cp029

0x9f2f,	// (0x0005ba31) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x9f2f,	// (0x0005ba31) cmail_ddmenu_btn02_pane_g1

0x9f47,	// (0x0005ba49) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x9f47,	// (0x0005ba49) cmail_ddmenu_btn02_pane_t1

0xc064,	// (0x0005db66) bg_button_pane_cp031_ParamLimits

0xc064,	// (0x0005db66) bg_button_pane_cp031

0x9f2f,	// (0x0005ba31) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x9f2f,	// (0x0005ba31) cmail_ddmenu_btn03_pane_g1

0x9f47,	// (0x0005ba49) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x9f47,	// (0x0005ba49) cmail_ddmenu_btn03_pane_t1

0xc0ba,	// (0x0005dbbc) cell_dialer2_keypad_pane_t1_ParamLimits

0xedf8,	// (0x000608fa) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xedf8,	// (0x000608fa) cell_dialer2_keypad_pane_t1_copy1

0x91ee,	// (0x0005acf0) ncimui_group_button_pane

0xc00b,	// (0x0005db0d) main_sp_fs_calendar_pane_ParamLimits

0x9afb,	// (0x0005b5fd) list_single_cmail_header_caption_pane_ParamLimits

0x04d9,	// (0x00051fdb) aid_recal_txt_sm_pane

0xb971,	// (0x0005d473) mian_recal_day_pane

0x0513,	// (0x00052015) popup_sp_fs_cale_preview_window_ParamLimits

0x1c2b,	// (0x0005372d) list_recal_day_pane

0x05f5,	// (0x000520f7) list_single_recal_day_pane_ParamLimits

0x05f5,	// (0x000520f7) list_single_recal_day_pane

0x1c52,	// (0x00053754) list_single_recal_day_pane_g1_ParamLimits

0x1c52,	// (0x00053754) list_single_recal_day_pane_g1

0x0607,	// (0x00052109) list_single_recal_day_pane_g2_ParamLimits

0x0607,	// (0x00052109) list_single_recal_day_pane_g2

0x0613,	// (0x00052115) list_single_recal_day_pane_g3_ParamLimits

0x0613,	// (0x00052115) list_single_recal_day_pane_g3

0x9f6b,	// (0x0005ba6d) list_single_recal_day_pane_g4_ParamLimits

0x9f6b,	// (0x0005ba6d) list_single_recal_day_pane_g4

0x061f,	// (0x00052121) list_single_recal_day_pane_g5_ParamLimits

0x061f,	// (0x00052121) list_single_recal_day_pane_g5

0x062b,	// (0x0005212d) list_single_recal_day_pane_g6_ParamLimits

0x062b,	// (0x0005212d) list_single_recal_day_pane_g6

0x0004,

0xfcf9,	// (0x000617fb) list_single_recal_day_pane_g_ParamLimits

0xfcf9,	// (0x000617fb) list_single_recal_day_pane_g

0x063f,	// (0x00052141) list_single_recal_day_pane_t1

0x0651,	// (0x00052153) list_single_recal_day_pane_t2

0x0001,

0xfd04,	// (0x00061806) list_single_recal_day_pane_t

0x9f83,	// (0x0005ba85) ncimui_query_button_pane_ParamLimits

0x9f83,	// (0x0005ba85) ncimui_query_button_pane

0x9f93,	// (0x0005ba95) ncimui_query_button_pane_t1_ParamLimits

0x9f93,	// (0x0005ba95) ncimui_query_button_pane_t1

0x1c5e,	// (0x00053760) ncimui_query_button_pane_t2_ParamLimits

0x1c5e,	// (0x00053760) ncimui_query_button_pane_t2

0x0001,

0xfd09,	// (0x0006180b) ncimui_query_button_pane_t_ParamLimits

0xfd09,	// (0x0006180b) ncimui_query_button_pane_t

0x9fa6,	// (0x0005baa8) query_button_pane_ParamLimits

0x9fa6,	// (0x0005baa8) query_button_pane

0xb971,	// (0x0005d473) bg_button_pane_cp0028

0x1c71,	// (0x00053773) query_button_pane_t1

0x5f5d,	// (0x00057a5f) main_tport_pane_ParamLimits

0x99dd,	// (0x0005b4df) bg_popup_window_pane_cp01_ParamLimits

0x99dd,	// (0x0005b4df) bg_popup_window_pane_cp01

0x99eb,	// (0x0005b4ed) heading_pane_cp08_ParamLimits

0x99eb,	// (0x0005b4ed) heading_pane_cp08

0x99f9,	// (0x0005b4fb) heading_pane_cp07_ParamLimits

0x99f9,	// (0x0005b4fb) heading_pane_cp07

0x9a68,	// (0x0005b56a) cell_tport_appsw_pane_g2

0x0002,

0xfc50,	// (0x00061752) cell_tport_appsw_pane_g

0xd230,	// (0x0005ed32) input_candi_list_open_g1

0xc69c,	// (0x0005e19e) list_cale_time_pane_g6_ParamLimits

0xc69c,	// (0x0005e19e) list_cale_time_pane_g6

0x6457,	// (0x00057f59) aid_size_touch_calib_1_ParamLimits

0x6457,	// (0x00057f59) aid_size_touch_calib_1

0x6463,	// (0x00057f65) aid_size_touch_calib_2_ParamLimits

0x6463,	// (0x00057f65) aid_size_touch_calib_2

0x6471,	// (0x00057f73) aid_size_touch_calib_3_ParamLimits

0x6471,	// (0x00057f73) aid_size_touch_calib_3

0x6481,	// (0x00057f83) aid_size_touch_calib_4_ParamLimits

0x6481,	// (0x00057f83) aid_size_touch_calib_4

0x648f,	// (0x00057f91) main_touch_calib_button_group_pane_ParamLimits

0x648f,	// (0x00057f91) main_touch_calib_button_group_pane

0x649d,	// (0x00057f9f) main_touch_calib_pane_g1_ParamLimits

0x64a9,	// (0x00057fab) main_touch_calib_pane_g2_ParamLimits

0x64b5,	// (0x00057fb7) main_touch_calib_pane_g3_ParamLimits

0x64c1,	// (0x00057fc3) main_touch_calib_pane_g4_ParamLimits

0xf69c,	// (0x0006119e) main_touch_calib_pane_g_ParamLimits

0x64cd,	// (0x00057fcf) main_touch_calib_pane_t1_ParamLimits

0x64e6,	// (0x00057fe8) main_touch_calib_pane_t2_ParamLimits

0x64ff,	// (0x00058001) main_touch_calib_pane_t3_ParamLimits

0x6515,	// (0x00058017) main_touch_calib_pane_t4_ParamLimits

0x652b,	// (0x0005802d) main_touch_calib_pane_t5_ParamLimits

0xf6a5,	// (0x000611a7) main_touch_calib_pane_t_ParamLimits

0xec7d,	// (0x0006077f) list_single_fp_cale_pane_g3_ParamLimits

0xec7d,	// (0x0006077f) list_single_fp_cale_pane_g3

0x5f41,	// (0x00057a43) bg_button_pane_cp012_ParamLimits

0x5f41,	// (0x00057a43) bg_vkb2_func_pane_cp03_ParamLimits

0x82fe,	// (0x00059e00) cell_vitu2_function_top_pane_g1_ParamLimits

0x5f41,	// (0x00057a43) bg_vkb2_func_pane_cp04_ParamLimits

0x9176,	// (0x0005ac78) main_ncimui_button_group_pane_ParamLimits

0x9176,	// (0x0005ac78) main_ncimui_button_group_pane

0x91dc,	// (0x0005acde) main_ncimui_pane_t3_ParamLimits

0x91dc,	// (0x0005acde) main_ncimui_pane_t3

0x1a00,	// (0x00053502) phacti_button_group_pane

0x1bed,	// (0x000536ef) aid_size_list_single_double_ParamLimits

0x9f06,	// (0x0005ba08) popup_ezdial_listscroll_window_ParamLimits

0x1bf9,	// (0x000536fb) popup_number_entry_window_cp01_ParamLimits

0x9fb3,	// (0x0005bab5) phacti_button_pane_ParamLimits

0x9fb3,	// (0x0005bab5) phacti_button_pane

0xb971,	// (0x0005d473) bg_button_pane_cp14

0x1c7f,	// (0x00053781) phacti_button_pane_t1

0x9fc4,	// (0x0005bac6) main_touch_calib_button_pane_ParamLimits

0x9fc4,	// (0x0005bac6) main_touch_calib_button_pane

0xc10e,	// (0x0005dc10) bg_button_pane_cp18_ParamLimits

0xc10e,	// (0x0005dc10) bg_button_pane_cp18

0x1c8d,	// (0x0005378f) main_touch_calib_button_pane_t1_ParamLimits

0x1c8d,	// (0x0005378f) main_touch_calib_button_pane_t1

0x1ca3,	// (0x000537a5) main_touch_calib_button_pane_t2_ParamLimits

0x1ca3,	// (0x000537a5) main_touch_calib_button_pane_t2

0x0001,

0xfd0e,	// (0x00061810) main_touch_calib_button_pane_t_ParamLimits

0xfd0e,	// (0x00061810) main_touch_calib_button_pane_t

0xb971,	// (0x0005d473) cell_ncimui_button_pane

0xb971,	// (0x0005d473) bg_button_pane_cp032

0x1cc1,	// (0x000537c3) cell_ncimui_button_pane_t1

0x7488,	// (0x00058f8a) image3_infobar_pane_ParamLimits

0x7488,	// (0x00058f8a) image3_infobar_pane

0x951e,	// (0x0005b020) fs_bigclock_status_pane_ParamLimits

0x951e,	// (0x0005b020) fs_bigclock_status_pane

0x952b,	// (0x0005b02d) main_fs_bigclock_clock_pane_ParamLimits

0x952b,	// (0x0005b02d) main_fs_bigclock_clock_pane

0x953f,	// (0x0005b041) main_fs_bigclock_indi_pane_ParamLimits

0x953f,	// (0x0005b041) main_fs_bigclock_indi_pane

0x9567,	// (0x0005b069) main_fs_bigclock_swipe_pane_ParamLimits

0x9567,	// (0x0005b069) main_fs_bigclock_swipe_pane

0xb971,	// (0x0005d473) main_fs_clock_dumped_data

0x154e,	// (0x00053050) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x154e,	// (0x00053050) list_single_fs_bigclock_indicator_pane_g1

0x156a,	// (0x0005306c) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x156a,	// (0x0005306c) list_single_fs_bigclock_indicator_pane_g2

0x1590,	// (0x00053092) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x1590,	// (0x00053092) list_single_fs_bigclock_indicator_pane_g3

0x15aa,	// (0x000530ac) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x15aa,	// (0x000530ac) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfbaa,	// (0x000616ac) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfbaa,	// (0x000616ac) list_single_fs_bigclock_indicator_pane_g

0x15d5,	// (0x000530d7) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x15d5,	// (0x000530d7) list_single_fs_bigclock_indicator_pane_t1

0x15fd,	// (0x000530ff) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x15fd,	// (0x000530ff) list_single_fs_bigclock_indicator_pane_t2

0x1625,	// (0x00053127) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x1625,	// (0x00053127) list_single_fs_bigclock_indicator_pane_t3

0x164d,	// (0x0005314f) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x164d,	// (0x0005314f) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfbb5,	// (0x000616b7) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfbb5,	// (0x000616b7) list_single_fs_bigclock_indicator_pane_t

0x1ccf,	// (0x000537d1) image3_infobar_fav_pane_ParamLimits

0x1ccf,	// (0x000537d1) image3_infobar_fav_pane

0x1cdf,	// (0x000537e1) image3_infobar_loc_pane_ParamLimits

0x1cdf,	// (0x000537e1) image3_infobar_loc_pane

0x1cf3,	// (0x000537f5) image3_infobar_time_pane_ParamLimits

0x1cf3,	// (0x000537f5) image3_infobar_time_pane

0xc0b0,	// (0x0005dbb2) image3_infobar_time_pane_g1

0x1d03,	// (0x00053805) image3_infobar_time_pane_t1

0xc0b0,	// (0x0005dbb2) image3_infobar_loc_pane_g1

0x1d11,	// (0x00053813) image3_infobar_loc_pane_g2

0x0001,

0xfd13,	// (0x00061815) image3_infobar_loc_pane_g

0x1d19,	// (0x0005381b) image3_infobar_loc_pane_t1

0xc0b0,	// (0x0005dbb2) image3_infobar_fav_pane_g1

0x1d27,	// (0x00053829) image3_infobar_fav_pane_g2

0x0001,

0xfd18,	// (0x0006181a) image3_infobar_fav_pane_g

0x1d2f,	// (0x00053831) fs_bigclock_status_battery_pane

0x1d38,	// (0x0005383a) fs_bigclock_status_signal_pane

0x1d41,	// (0x00053843) fs_bigclock_status_title_pane

0x1d4a,	// (0x0005384c) fs_bigclock_status_signal_pane_g1

0x1d53,	// (0x00053855) fs_bigclock_status_signal_pane_g2

0x0001,

0xfd1d,	// (0x0006181f) fs_bigclock_status_signal_pane_g

0x1d5b,	// (0x0005385d) fs_bigclock_status_battery_pane_g1

0x1d64,	// (0x00053866) fs_bigclock_status_battery_pane_g2

0x0001,

0xfd22,	// (0x00061824) fs_bigclock_status_battery_pane_g

0x1d6c,	// (0x0005386e) fs_bigclock_status_title_pane_t1

0x9fd4,	// (0x0005bad6) main_fs_bigclock_clock_pane_g1

0x9fd4,	// (0x0005bad6) main_fs_bigclock_clock_pane_g2

0x9fe1,	// (0x0005bae3) main_fs_bigclock_clock_pane_g3

0x9fe1,	// (0x0005bae3) main_fs_bigclock_clock_pane_g4

0x0003,

0xfd27,	// (0x00061829) main_fs_bigclock_clock_pane_g

0x9fed,	// (0x0005baef) main_fs_bigclock_clock_pane_t1

0xa000,	// (0x0005bb02) main_fs_bigclock_clock_pane_t2

0x0001,

0xfd30,	// (0x00061832) main_fs_bigclock_clock_pane_t

0x1d7a,	// (0x0005387c) list_single_fs_bigclock_indicator_pane_ParamLimits

0x1d7a,	// (0x0005387c) list_single_fs_bigclock_indicator_pane

0x1d8b,	// (0x0005388d) list_single_fs_bigclock_pane_ParamLimits

0x1d8b,	// (0x0005388d) list_single_fs_bigclock_pane

0x1db1,	// (0x000538b3) main_fs_bigclock_indicator_pane_t1

0x1dc0,	// (0x000538c2) list_single_fs_bigclock_pane_g1

0x1dc8,	// (0x000538ca) list_single_fs_bigclock_pane_t1

0xc0b0,	// (0x0005dbb2) main_fs_bigclock_swipe_pane_g1

0x1e0b,	// (0x0005390d) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfd41,	// (0x00061843) main_fs_bigclock_swipe_pane_g

0x1e13,	// (0x00053915) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x1e13,	// (0x00053915) main_fs_bigclock_swipe_pane_t1

0x51f8,	// (0x00056cfa) call_type_pane_ParamLimits

0xb971,	// (0x0005d473) main_btmg_pane

0x055e,	// (0x00052060) list_single_cale_mrui_row_pane_g2_ParamLimits

0x055e,	// (0x00052060) list_single_cale_mrui_row_pane_g2

0x0002,

0xfcb4,	// (0x000617b6) list_single_cale_mrui_row_pane_g_ParamLimits

0xfcb4,	// (0x000617b6) list_single_cale_mrui_row_pane_g

0x05e4,	// (0x000520e6) list_recal_vselct_arw_lo_pane

0x1c4a,	// (0x0005374c) list_recal_vselct_arw_up_pane

0x05ec,	// (0x000520ee) list_recal_vselct_pane

0xa057,	// (0x0005bb59) btmg_button_pane

0xa063,	// (0x0005bb65) main_btmg_pane_g1

0xb971,	// (0x0005d473) bg_button_pane_cp044

0x1e30,	// (0x00053932) btmg_button_pane_t1

0xe47c,	// (0x0005ff7e) aid_listscroll_gen

0xc00b,	// (0x0005db0d) main_cntbar_detail_pane

0x1931,	// (0x00053433) list_cmail_folder_pane

0x1584,	// (0x00053086) sp_fs_scroll_pane_cp03_ParamLimits

0x9afb,	// (0x0005b5fd) list_single_fs_dyc_pane_cp01_ParamLimits

0x9afb,	// (0x0005b5fd) list_single_fs_dyc_pane_cp01

0x1e3e,	// (0x00053940) aid_size_cmail_indent

0x0663,	// (0x00052165) list_single_dyc_row_pane_cp01

0xa08b,	// (0x0005bb8d) cntbar_detail_list_pane_ParamLimits

0xa08b,	// (0x0005bb8d) cntbar_detail_list_pane

0xa0c5,	// (0x0005bbc7) main_cntbar_detail_cont_pane_ParamLimits

0xa0c5,	// (0x0005bbc7) main_cntbar_detail_cont_pane

0x51ec,	// (0x00056cee) scroll_pane_cp032_ParamLimits

0x51ec,	// (0x00056cee) scroll_pane_cp032

0xa0d1,	// (0x0005bbd3) cntbar_detail_list_event_pane_ParamLimits

0xa0d1,	// (0x0005bbd3) cntbar_detail_list_event_pane

0xa097,	// (0x0005bb99) cntbar_detail_list_shct_pane

0xc527,	// (0x0005e029) aid_list_gen

0x1e47,	// (0x00053949) aid_scroll

0x1e50,	// (0x00053952) aid_size_touch_scroll_bar

0x1e59,	// (0x0005395b) aid_list_double

0xa0e5,	// (0x0005bbe7) aid_list_single

0xa0ee,	// (0x0005bbf0) aid_list_single_lg

0x066c,	// (0x0005216e) aid_list_z_g_a_sm

0x0674,	// (0x00052176) aid_list_z_g_d

0x067c,	// (0x0005217e) aid_txt_z_prm

0x068a,	// (0x0005218c) aid_txt_z_prm_cp01

0x0698,	// (0x0005219a) aid_txt_z_sec

0xa0f7,	// (0x0005bbf9) main_cntbar_detail_cont_pane_g1_ParamLimits

0xa0f7,	// (0x0005bbf9) main_cntbar_detail_cont_pane_g1

0xa104,	// (0x0005bc06) main_cntbar_detail_cont_pane_g2_ParamLimits

0xa104,	// (0x0005bc06) main_cntbar_detail_cont_pane_g2

0x0001,

0xfd46,	// (0x00061848) main_cntbar_detail_cont_pane_g_ParamLimits

0xfd46,	// (0x00061848) main_cntbar_detail_cont_pane_g

0x1e62,	// (0x00053964) main_cntbar_detail_cont_pane_t1

0x1e70,	// (0x00053972) main_cntbar_detail_cont_pane_t2

0x1e7e,	// (0x00053980) main_cntbar_detail_cont_pane_t3

0x0002,

0xfd4b,	// (0x0006184d) main_cntbar_detail_cont_pane_t

0xa110,	// (0x0005bc12) cell_cntbar_detail_list_shct_pane_ParamLimits

0xa110,	// (0x0005bc12) cell_cntbar_detail_list_shct_pane

0x1e8c,	// (0x0005398e) cntbar_detail_list_shct_pane_g1

0x1e95,	// (0x00053997) cntbar_detail_list_shct_pane_g2

0x0001,

0xfd52,	// (0x00061854) cntbar_detail_list_shct_pane_g

0xa124,	// (0x0005bc26) cntbar_detail_list_event_pane_g1_ParamLimits

0xa124,	// (0x0005bc26) cntbar_detail_list_event_pane_g1

0xa130,	// (0x0005bc32) cntbar_detail_list_event_pane_g2_ParamLimits

0xa130,	// (0x0005bc32) cntbar_detail_list_event_pane_g2

0x0005,

0xfd57,	// (0x00061859) cntbar_detail_list_event_pane_g_ParamLimits

0xfd57,	// (0x00061859) cntbar_detail_list_event_pane_g

0xa19c,	// (0x0005bc9e) cntbar_detail_list_event_pane_t1_ParamLimits

0xa19c,	// (0x0005bc9e) cntbar_detail_list_event_pane_t1

0xa1b1,	// (0x0005bcb3) cntbar_detail_list_event_pane_t2_ParamLimits

0xa1b1,	// (0x0005bcb3) cntbar_detail_list_event_pane_t2

0x0002,

0xfd64,	// (0x00061866) cntbar_detail_list_event_pane_t_ParamLimits

0xfd64,	// (0x00061866) cntbar_detail_list_event_pane_t

0xc0b0,	// (0x0005dbb2) cell_cntbar_detail_list_shct_pane_g1

0xd0a4,	// (0x0005eba6) navi_pane_mv_g3

0xc00b,	// (0x0005db0d) main_cntbar_detail_pane_ParamLimits

0xb971,	// (0x0005d473) main_notif_wgt_pane

0x7130,	// (0x00058c32) aid_tch_main_mp4_pane_g4

0x7403,	// (0x00058f05) popup_slider_window_cp02

0x05da,	// (0x000520dc) list_recal_day_event_pane

0xa06b,	// (0x0005bb6d) cntbar_detail_btn_pane_ParamLimits

0xa06b,	// (0x0005bb6d) cntbar_detail_btn_pane

0xa07b,	// (0x0005bb7d) cntbar_detail_btn_pane_cp01_ParamLimits

0xa07b,	// (0x0005bb7d) cntbar_detail_btn_pane_cp01

0xa097,	// (0x0005bb99) cntbar_detail_list_shct_pane_ParamLimits

0xa0a3,	// (0x0005bba5) cntbar_detail_pane_g1_ParamLimits

0xa0a3,	// (0x0005bba5) cntbar_detail_pane_g1

0xa0af,	// (0x0005bbb1) cntbar_detail_pane_t1_ParamLimits

0xa0af,	// (0x0005bbb1) cntbar_detail_pane_t1

0xa13c,	// (0x0005bc3e) cntbar_detail_list_event_pane_g3_ParamLimits

0xa13c,	// (0x0005bc3e) cntbar_detail_list_event_pane_g3

0xa154,	// (0x0005bc56) cntbar_detail_list_event_pane_g4_ParamLimits

0xa154,	// (0x0005bc56) cntbar_detail_list_event_pane_g4

0xa16c,	// (0x0005bc6e) cntbar_detail_list_event_pane_g5_ParamLimits

0xa16c,	// (0x0005bc6e) cntbar_detail_list_event_pane_g5

0xa184,	// (0x0005bc86) cntbar_detail_list_event_pane_g6_ParamLimits

0xa184,	// (0x0005bc86) cntbar_detail_list_event_pane_g6

0xa1c6,	// (0x0005bcc8) cntbar_detail_list_event_pane_t3_ParamLimits

0xa1c6,	// (0x0005bcc8) cntbar_detail_list_event_pane_t3

0xa1d8,	// (0x0005bcda) popup_notif_wgt_window_ParamLimits

0xa1d8,	// (0x0005bcda) popup_notif_wgt_window

0xa1e8,	// (0x0005bcea) popup_submenu_window_cp01_ParamLimits

0xa1e8,	// (0x0005bcea) popup_submenu_window_cp01

0xc2c0,	// (0x0005ddc2) bg_popup_window_pane_cp10

0x1e9e,	// (0x000539a0) listscroll_notif_wgt_pane

0x1eb0,	// (0x000539b2) list_notif_wgt_window

0x1eb9,	// (0x000539bb) scroll_pane_cp033

0xa1f6,	// (0x0005bcf8) list_notif_wgt_row_pane_ParamLimits

0xa1f6,	// (0x0005bcf8) list_notif_wgt_row_pane

0x1ec2,	// (0x000539c4) aid_size_list_notif_wgt_del

0x1ecf,	// (0x000539d1) list_notif_wgt_row_pane_g1

0x1edb,	// (0x000539dd) list_notif_wgt_row_pane_g2

0x1f17,	// (0x00053a19) list_notif_wgt_row_pane_g3

0x0002,

0xfd6b,	// (0x0006186d) list_notif_wgt_row_pane_g

0x1f24,	// (0x00053a26) list_notif_wgt_row_pane_t1

0x1f3a,	// (0x00053a3c) list_notif_wgt_row_pane_t2

0x1f4c,	// (0x00053a4e) list_notif_wgt_row_pane_t3

0x0002,

0xfd72,	// (0x00061874) list_notif_wgt_row_pane_t

0x0a31,	// (0x00052533) list_recal_day_event_pane_g1

0x1f5e,	// (0x00053a60) list_recal_day_event_pane_t1

0xb971,	// (0x0005d473) bg_button_pane_cp045

0xa208,	// (0x0005bd0a) cntbar_detail_btn_pane_t1

0xd30e,	// (0x0005ee10) main_callh_pane_ParamLimits

0xd30e,	// (0x0005ee10) main_callh_pane

0xb971,	// (0x0005d473) main_coverflow0_pane

0xb971,	// (0x0005d473) main_wgtman_pane

0x957f,	// (0x0005b081) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x957f,	// (0x0005b081) main_fs_bigclock_unlock_btn_pane

0x9a60,	// (0x0005b562) bg_button_pane_cp16

0x9a70,	// (0x0005b572) cell_tport_appsw_pane_g3

0xa216,	// (0x0005bd18) cf0_flow_pane_ParamLimits

0xa216,	// (0x0005bd18) cf0_flow_pane

0x1f6d,	// (0x00053a6f) listscroll_cf0_pane

0x1f78,	// (0x00053a7a) main_cf0_pane_g1

0xa225,	// (0x0005bd27) main_cf0_pane_t1_ParamLimits

0xa225,	// (0x0005bd27) main_cf0_pane_t1

0xa239,	// (0x0005bd3b) main_cf0_pane_t2_ParamLimits

0xa239,	// (0x0005bd3b) main_cf0_pane_t2

0x0001,

0xfd7e,	// (0x00061880) main_cf0_pane_t_ParamLimits

0xfd7e,	// (0x00061880) main_cf0_pane_t

0x1f8a,	// (0x00053a8c) scroll_pane_cp11

0xa24d,	// (0x0005bd4f) cf0_flow_pane_g1

0xa255,	// (0x0005bd57) cf0_flow_pane_g2

0x0001,

0xfd83,	// (0x00061885) cf0_flow_pane_g

0xa25d,	// (0x0005bd5f) cf0_flow_pane_t1

0xb971,	// (0x0005d473) main_call6_pane

0xb971,	// (0x0005d473) main_calllock_pane

0xa26b,	// (0x0005bd6d) call6_btn_grp_pane_ParamLimits

0xa26b,	// (0x0005bd6d) call6_btn_grp_pane

0xa27a,	// (0x0005bd7c) call6_pane_g1_ParamLimits

0xa27a,	// (0x0005bd7c) call6_pane_g1

0xa28a,	// (0x0005bd8c) popup_call6_1st_window_ParamLimits

0xa28a,	// (0x0005bd8c) popup_call6_1st_window

0xa298,	// (0x0005bd9a) popup_call6_2nd_window_ParamLimits

0xa298,	// (0x0005bd9a) popup_call6_2nd_window

0xa2a6,	// (0x0005bda8) cell_call6_btn_pane_ParamLimits

0xa2a6,	// (0x0005bda8) cell_call6_btn_pane

0xc2c0,	// (0x0005ddc2) bg_popup_call2_in_pane_cp03

0x1f95,	// (0x00053a97) popup_call6_1st_window_g1

0x1f9d,	// (0x00053a9f) popup_call6_1st_window_g2

0x1fa5,	// (0x00053aa7) popup_call6_1st_window_g3

0x0002,

0xfd88,	// (0x0006188a) popup_call6_1st_window_g

0x1fad,	// (0x00053aaf) popup_call6_1st_window_t1

0x1fbc,	// (0x00053abe) popup_call6_1st_window_t2

0x1fca,	// (0x00053acc) popup_call6_1st_window_t3

0x0002,

0xfd8f,	// (0x00061891) popup_call6_1st_window_t

0xc2c0,	// (0x0005ddc2) bg_popup_call2_in_pane_cp04

0x1fd8,	// (0x00053ada) popup_call6_2nd_window_g1

0x1fe0,	// (0x00053ae2) popup_call6_2nd_window_g2

0x1fe8,	// (0x00053aea) popup_call6_2nd_window_g3

0x0002,

0xfd96,	// (0x00061898) popup_call6_2nd_window_g

0x1ff0,	// (0x00053af2) popup_call6_2nd_window_t1

0x34ea,	// (0x00054fec) bg_button_pane_cp15

0xa2b5,	// (0x0005bdb7) cell_call6_btn_pane_g1

0xa2be,	// (0x0005bdc0) cell_call6_btn_pane_t1

0xa2cd,	// (0x0005bdcf) listscroll_wgtman_pane_ParamLimits

0xa2cd,	// (0x0005bdcf) listscroll_wgtman_pane

0xa2e9,	// (0x0005bdeb) wgtman_btn_pane_ParamLimits

0xa2e9,	// (0x0005bdeb) wgtman_btn_pane

0xceb8,	// (0x0005e9ba) aid_scroll_copy1

0x2017,	// (0x00053b19) list_wgtman_pane

0xa31e,	// (0x0005be20) wgtman_btn_pane_g1_ParamLimits

0xa31e,	// (0x0005be20) wgtman_btn_pane_g1

0xa346,	// (0x0005be48) wgtman_btn_pane_t1_ParamLimits

0xa346,	// (0x0005be48) wgtman_btn_pane_t1

0x2021,	// (0x00053b23) wgtman_btn_pane_t2_ParamLimits

0x2021,	// (0x00053b23) wgtman_btn_pane_t2

0x0001,

0xfd9d,	// (0x0006189f) wgtman_btn_pane_t_ParamLimits

0xfd9d,	// (0x0006189f) wgtman_btn_pane_t

0xa37d,	// (0x0005be7f) listrow_wgtman_pane_ParamLimits

0xa37d,	// (0x0005be7f) listrow_wgtman_pane

0xa399,	// (0x0005be9b) listrow_wgtman_pane_g1

0xa3a6,	// (0x0005bea8) listrow_wgtman_pane_g2

0x0001,

0xfda2,	// (0x000618a4) listrow_wgtman_pane_g

0xa3c4,	// (0x0005bec6) listrow_wgtman_pane_t1

0xa3dc,	// (0x0005bede) listrow_wgtman_pane_t2

0x0001,

0xfda7,	// (0x000618a9) listrow_wgtman_pane_t

0xa402,	// (0x0005bf04) wait_bar_pane_cp09

0x2038,	// (0x00053b3a) main_calllock_btn_pane

0x2042,	// (0x00053b44) main_calllock_pane_g1

0xb971,	// (0x0005d473) bg_button_pane_cp17

0x1fff,	// (0x00053b01) main_calllock_btn_pane_g1

0x204a,	// (0x00053b4c) main_calllock_btn_pane_t1

0xb971,	// (0x0005d473) main_dialer3_pane

0xb971,	// (0x0005d473) main_fmrd2_pane

0xc0b0,	// (0x0005dbb2) main_fs_bigclock_unlock_btn_pane_g1

0xa41c,	// (0x0005bf1e) main_fs_bigclock_unlock_btn_pane_t1

0xa42a,	// (0x0005bf2c) area_fmrd2_info_pane_ParamLimits

0xa42a,	// (0x0005bf2c) area_fmrd2_info_pane

0xa438,	// (0x0005bf3a) area_fmrd2_visual_pane_ParamLimits

0xa438,	// (0x0005bf3a) area_fmrd2_visual_pane

0xa446,	// (0x0005bf48) fmrd2_indi_pane_ParamLimits

0xa446,	// (0x0005bf48) fmrd2_indi_pane

0xa453,	// (0x0005bf55) area_fmrd2_visual_pane_g1

0xa45b,	// (0x0005bf5d) area_fmrd2_visual_pane_t1

0xa46b,	// (0x0005bf6d) area_fmrd2_visual_pane_t2

0xa47b,	// (0x0005bf7d) area_fmrd2_visual_pane_t3

0x0002,

0xfdb1,	// (0x000618b3) area_fmrd2_visual_pane_t

0xa48b,	// (0x0005bf8d) area_fmrd2_info_pane_g1

0xa493,	// (0x0005bf95) area_fmrd2_info_pane_t1

0xa4a3,	// (0x0005bfa5) area_fmrd2_info_pane_t2

0xa4b3,	// (0x0005bfb5) area_fmrd2_info_pane_t3

0xa4c3,	// (0x0005bfc5) area_fmrd2_info_pane_t4

0x0003,

0xfdb8,	// (0x000618ba) area_fmrd2_info_pane_t

0xa4d1,	// (0x0005bfd3) fmrd2_indi_pane_t1

0xa4e1,	// (0x0005bfe3) fmrd2_indi_pane_t2

0xa4f1,	// (0x0005bff3) fmrd2_indi_pane_t3

0x0002,

0xfdc1,	// (0x000618c3) fmrd2_indi_pane_t

0x15b9,	// (0x000530bb) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x15b9,	// (0x000530bb) list_single_fs_bigclock_indicator_pane_g5

0x166a,	// (0x0005316c) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x166a,	// (0x0005316c) list_single_fs_bigclock_indicator_pane_t5

0x9c6a,	// (0x0005b76c) aid_cell_bcale_month_pane_ParamLimits

0x9c6a,	// (0x0005b76c) aid_cell_bcale_month_pane

0x9c88,	// (0x0005b78a) bcale_month_pane_ParamLimits

0x9c88,	// (0x0005b78a) bcale_month_pane

0x9ca6,	// (0x0005b7a8) bcale_preview_pane_ParamLimits

0x9ca6,	// (0x0005b7a8) bcale_preview_pane

0x1dc8,	// (0x000538ca) list_single_fs_bigclock_pane_t1_ParamLimits

0x1de7,	// (0x000538e9) list_single_fs_bigclock_pane_t2_ParamLimits

0x1de7,	// (0x000538e9) list_single_fs_bigclock_pane_t2

0x0001,

0xfd3c,	// (0x0006183e) list_single_fs_bigclock_pane_t_ParamLimits

0xfd3c,	// (0x0006183e) list_single_fs_bigclock_pane_t

0xa414,	// (0x0005bf16) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfdac,	// (0x000618ae) main_fs_bigclock_unlock_btn_pane_g

0xa4ff,	// (0x0005c001) aid_dia3_key_size_ParamLimits

0xa4ff,	// (0x0005c001) aid_dia3_key_size

0xa50b,	// (0x0005c00d) aid_dia3_listrow_size_ParamLimits

0xa50b,	// (0x0005c00d) aid_dia3_listrow_size

0xa51b,	// (0x0005c01d) dia3_keypad_fun_pane_ParamLimits

0xa51b,	// (0x0005c01d) dia3_keypad_fun_pane

0xa52d,	// (0x0005c02f) dia3_keypad_num_pane_ParamLimits

0xa52d,	// (0x0005c02f) dia3_keypad_num_pane

0xa53f,	// (0x0005c041) dia3_listscroll_pane_ParamLimits

0xa53f,	// (0x0005c041) dia3_listscroll_pane

0xa54d,	// (0x0005c04f) dia3_numentry_pane_ParamLimits

0xa54d,	// (0x0005c04f) dia3_numentry_pane

0x2059,	// (0x00053b5b) dia3_list_pane

0x2064,	// (0x00053b66) scroll_pane_cp12

0xb971,	// (0x0005d473) bg_dia3_numentry_pane

0xa55b,	// (0x0005c05d) dia3_numentry_pane_t1

0xa56a,	// (0x0005c06c) cell_dia3_key_num_pane

0xa572,	// (0x0005c074) cell_dia3_key0_fun_pane_ParamLimits

0xa572,	// (0x0005c074) cell_dia3_key0_fun_pane

0xa57f,	// (0x0005c081) cell_dia3_key1_fun_pane_ParamLimits

0xa57f,	// (0x0005c081) cell_dia3_key1_fun_pane

0xa58c,	// (0x0005c08e) dia3_listrow_pane

0x1300,	// (0x00052e02) bg_dia3_numentry_pane_g1

0xb971,	// (0x0005d473) bg_button_pane_cp21

0x206f,	// (0x00053b71) cell_dia3_key_num_pane_t1

0x207d,	// (0x00053b7f) cell_dia3_key_num_pane_t2

0x208c,	// (0x00053b8e) cell_dia3_key_num_pane_t3

0x209b,	// (0x00053b9d) cell_dia3_key_num_pane_t4

0x0003,

0xfdc8,	// (0x000618ca) cell_dia3_key_num_pane_t

0xb971,	// (0x0005d473) bg_button_pane_cp19

0xa599,	// (0x0005c09b) cell_dia3_key0_fun_pane_g1

0xb971,	// (0x0005d473) bg_button_pane_cp20

0xa5a1,	// (0x0005c0a3) cell_dia3_key1_fun_pane_g1

0xa5a9,	// (0x0005c0ab) area_left_week_number_pane

0xa5bc,	// (0x0005c0be) area_top_day_name_pane

0xa5ca,	// (0x0005c0cc) frame_month_view_pane

0x20aa,	// (0x00053bac) grid_month_view_pane

0xa5df,	// (0x0005c0e1) cell_top_day_name_pane_ParamLimits

0xa5df,	// (0x0005c0e1) cell_top_day_name_pane

0xa5f9,	// (0x0005c0fb) cell_area_left_week_number_pane_ParamLimits

0xa5f9,	// (0x0005c0fb) cell_area_left_week_number_pane

0xa61c,	// (0x0005c11e) cell_month_view_pane_ParamLimits

0xa61c,	// (0x0005c11e) cell_month_view_pane

0x20b8,	// (0x00053bba) frm_month_g1

0xa648,	// (0x0005c14a) frm_month_g2

0xa659,	// (0x0005c15b) frm_month_g3

0xa66a,	// (0x0005c16c) frm_month_g4

0xa67b,	// (0x0005c17d) frm_month_g5

0xa68e,	// (0x0005c190) frm_month_g6

0xa6a1,	// (0x0005c1a3) frm_month_g7

0x20c5,	// (0x00053bc7) frm_month_g8

0xa6b4,	// (0x0005c1b6) frm_month_g9

0xa6c1,	// (0x0005c1c3) frm_month_g10

0xa6ce,	// (0x0005c1d0) frm_month_g11

0xa6db,	// (0x0005c1dd) frm_month_g12

0xa6e8,	// (0x0005c1ea) frm_month_g13

0xa6f5,	// (0x0005c1f7) frm_month_g14

0xa704,	// (0x0005c206) frm_month_g15

0xa713,	// (0x0005c215) frm_month_g16

0x000f,

0xfdd1,	// (0x000618d3) frm_month_g

0x20d2,	// (0x00053bd4) cell_top_day_name_pane_t1

0xa722,	// (0x0005c224) cell_area_left_week_number_pane_g1

0xa731,	// (0x0005c233) cell_area_left_week_number_pane_t1

0xc072,	// (0x0005db74) cell_month_view_pane_g1

0xa747,	// (0x0005c249) cell_month_view_pane_t1

0xb971,	// (0x0005d473) main_fps_pane

0x182e,	// (0x00053330) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x182e,	// (0x00053330) cmail_ddmenu_btn02_pane_cp1

0x184a,	// (0x0005334c) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x184a,	// (0x0005334c) cmail_ddmenu_btn02_pane_cp2

0x9f3b,	// (0x0005ba3d) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x9f3b,	// (0x0005ba3d) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfcef,	// (0x000617f1) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfcef,	// (0x000617f1) cmail_ddmenu_btn02_pane_g

0x9f59,	// (0x0005ba5b) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x9f59,	// (0x0005ba5b) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfcf4,	// (0x000617f6) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfcf4,	// (0x000617f6) cmail_ddmenu_btn02_pane_t

0xa75d,	// (0x0005c25f) fps_text_pane_ParamLimits

0xa75d,	// (0x0005c25f) fps_text_pane

0xa76a,	// (0x0005c26c) main_fps_pane_g1_ParamLimits

0xa76a,	// (0x0005c26c) main_fps_pane_g1

0xa778,	// (0x0005c27a) wait_bar_pane_cp010_ParamLimits

0xa778,	// (0x0005c27a) wait_bar_pane_cp010

0xa784,	// (0x0005c286) fps_text_pane_t1_ParamLimits

0xa784,	// (0x0005c286) fps_text_pane_t1

0x7818,	// (0x0005931a) cam4_image_uncrop_pane_g1

0x7821,	// (0x00059323) cam4_image_uncrop_pane_g2

0x782a,	// (0x0005932c) cam4_image_uncrop_pane_g3

0x7833,	// (0x00059335) cam4_image_uncrop_pane_g4

0x0003,

0xf82e,	// (0x00061330) cam4_image_uncrop_pane_g

0xa58c,	// (0x0005c08e) dia3_listrow_pane_ParamLimits

0xb971,	// (0x0005d473) main_phob2_pane

0x9a42,	// (0x0005b544) cell_tport_appsw_pane_cp02_ParamLimits

0x9a42,	// (0x0005b544) cell_tport_appsw_pane_cp02

0x9a51,	// (0x0005b553) cell_tport_appsw_pane_cp03_ParamLimits

0x9a51,	// (0x0005b553) cell_tport_appsw_pane_cp03

0xb971,	// (0x0005d473) phob2_contact_card_pane

0xb971,	// (0x0005d473) phob2_listscroll_pane

0x20e5,	// (0x00053be7) phob2_list_pane

0x1c0e,	// (0x00053710) scroll_pane_cp034

0xa79d,	// (0x0005c29f) phob2_cc_data_pane_ParamLimits

0xa79d,	// (0x0005c29f) phob2_cc_data_pane

0xa7b7,	// (0x0005c2b9) phob2_cc_listscroll_pane_ParamLimits

0xa7b7,	// (0x0005c2b9) phob2_cc_listscroll_pane

0xa37d,	// (0x0005be7f) list_double_large_graphic_phob2_pane_ParamLimits

0xa37d,	// (0x0005be7f) list_double_large_graphic_phob2_pane

0xa7d1,	// (0x0005c2d3) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xa7d1,	// (0x0005c2d3) list_double_large_graphic_phob2_pane_g1

0xa7de,	// (0x0005c2e0) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xa7de,	// (0x0005c2e0) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfdf2,	// (0x000618f4) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfdf2,	// (0x000618f4) list_double_large_graphic_phob2_pane_g

0xa804,	// (0x0005c306) list_double_large_graphic_phob2_pane_t1_ParamLimits

0xa804,	// (0x0005c306) list_double_large_graphic_phob2_pane_t1

0xa819,	// (0x0005c31b) list_double_large_graphic_phob2_pane_t2_ParamLimits

0xa819,	// (0x0005c31b) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfdfb,	// (0x000618fd) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfdfb,	// (0x000618fd) list_double_large_graphic_phob2_pane_t

0xb971,	// (0x0005d473) list_highlight_pane_cp024

0x20ed,	// (0x00053bef) phob2_cc_button_pane

0xa82e,	// (0x0005c330) phob2_cc_data_pane_g1_ParamLimits

0xa82e,	// (0x0005c330) phob2_cc_data_pane_g1

0xa83d,	// (0x0005c33f) phob2_cc_data_pane_g2_ParamLimits

0xa83d,	// (0x0005c33f) phob2_cc_data_pane_g2

0x0001,

0xfe00,	// (0x00061902) phob2_cc_data_pane_g_ParamLimits

0xfe00,	// (0x00061902) phob2_cc_data_pane_g

0xa84c,	// (0x0005c34e) phob2_cc_data_pane_t1_ParamLimits

0xa84c,	// (0x0005c34e) phob2_cc_data_pane_t1

0xa861,	// (0x0005c363) phob2_cc_data_pane_t2_ParamLimits

0xa861,	// (0x0005c363) phob2_cc_data_pane_t2

0xa876,	// (0x0005c378) phob2_cc_data_pane_t3_ParamLimits

0xa876,	// (0x0005c378) phob2_cc_data_pane_t3

0x0002,

0xfe05,	// (0x00061907) phob2_cc_data_pane_t_ParamLimits

0xfe05,	// (0x00061907) phob2_cc_data_pane_t

0x20f5,	// (0x00053bf7) phob2_cc_list_pane_ParamLimits

0x20f5,	// (0x00053bf7) phob2_cc_list_pane

0x10af,	// (0x00052bb1) scroll_pane_cp035_ParamLimits

0x10af,	// (0x00052bb1) scroll_pane_cp035

0xc00b,	// (0x0005db0d) bg_button_pane_cp033

0x2101,	// (0x00053c03) phob2_cc_button_pane_g1

0x210d,	// (0x00053c0f) phob2_cc_button_pane_t1

0x2122,	// (0x00053c24) phob2_cc_button_pane_t2

0x0001,

0xfe0c,	// (0x0006190e) phob2_cc_button_pane_t

0xa88b,	// (0x0005c38d) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xa88b,	// (0x0005c38d) list_double_large_graphic_phob2_cc_pane

0xa8ff,	// (0x0005c401) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xa8ff,	// (0x0005c401) list_double_large_graphic_phob2_cc_pane_g1

0xa910,	// (0x0005c412) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xa910,	// (0x0005c412) list_double_large_graphic_phob2_cc_pane_g2

0xa91c,	// (0x0005c41e) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xa91c,	// (0x0005c41e) list_double_large_graphic_phob2_cc_pane_g3

0xa928,	// (0x0005c42a) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0xa928,	// (0x0005c42a) list_double_large_graphic_phob2_cc_pane_g4

0xa934,	// (0x0005c436) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xa934,	// (0x0005c436) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfe11,	// (0x00061913) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfe11,	// (0x00061913) list_double_large_graphic_phob2_cc_pane_g

0xa940,	// (0x0005c442) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0xa940,	// (0x0005c442) list_double_large_graphic_phob2_cc_pane_t1

0xa969,	// (0x0005c46b) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0xa969,	// (0x0005c46b) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfe1c,	// (0x0006191e) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfe1c,	// (0x0006191e) list_double_large_graphic_phob2_cc_pane_t

0x2134,	// (0x00053c36) list_highlight_pane_cp025_ParamLimits

0x2134,	// (0x00053c36) list_highlight_pane_cp025

0xc00b,	// (0x0005db0d) bg_button_pane_cp033_ParamLimits

0x2101,	// (0x00053c03) phob2_cc_button_pane_g1_ParamLimits

0x210d,	// (0x00053c0f) phob2_cc_button_pane_t1_ParamLimits

0x2122,	// (0x00053c24) phob2_cc_button_pane_t2_ParamLimits

0xfe0c,	// (0x0006190e) phob2_cc_button_pane_t_ParamLimits

0x34de,	// (0x00054fe0) popup_wgtman_window

0x08fa,	// (0x000523fc) scroll_pane_cp038

0xa306,	// (0x0005be08) wgtman_btn_pane_cp_01_ParamLimits

0xa306,	// (0x0005be08) wgtman_btn_pane_cp_01

0x2142,	// (0x00053c44) wgtman_content_pane

0x214b,	// (0x00053c4d) wgtman_heading_pane

0xb971,	// (0x0005d473) bg_heading_pane_cp02

0x2154,	// (0x00053c56) wgtman_heading_pane_g1

0x215c,	// (0x00053c5e) wgtman_heading_pane_t1

0x216a,	// (0x00053c6c) scroll_pane_cp036

0x2172,	// (0x00053c74) wgtman_list_pane

0x1efc,	// (0x000539fe) wgtman_list_pane_t1_ParamLimits

0x1efc,	// (0x000539fe) wgtman_list_pane_t1

0x7777,	// (0x00059279) cam4_grid_pane

0x84be,	// (0x00059fc0) bg_button_pane_cp015_ParamLimits

0x84d3,	// (0x00059fd5) bg_button_pane_cp016_ParamLimits

0x84df,	// (0x00059fe1) bg_button_pane_cp017_ParamLimits

0x8537,	// (0x0005a039) popup_vitu2_query_window_g3_ParamLimits

0x8537,	// (0x0005a039) popup_vitu2_query_window_g3

0x85d8,	// (0x0005a0da) popup_vitu2_query_window_t6_ParamLimits

0x85d8,	// (0x0005a0da) popup_vitu2_query_window_t6

0x8603,	// (0x0005a105) popup_vitu2_query_window_t7_ParamLimits

0x8603,	// (0x0005a105) popup_vitu2_query_window_t7

0x1eea,	// (0x000539ec) cam4_grid_pane_g1

0x1ef3,	// (0x000539f5) cam4_grid_pane_g2

0x217a,	// (0x00053c7c) cam4_grid_pane_g3

0x2183,	// (0x00053c85) cam4_grid_pane_g4

0x0003,

0xfe21,	// (0x00061923) cam4_grid_pane_g

0x3f58,	// (0x00055a5a) aid_placing_vt_slider_lsc_ParamLimits

0x4298,	// (0x00055d9a) vidtel_button_pane_ParamLimits

0x4298,	// (0x00055d9a) vidtel_button_pane

0xb971,	// (0x0005d473) bg_button_pane_cp034

0x218e,	// (0x00053c90) vidtel_button_pane_g1

0x2196,	// (0x00053c98) vidtel_button_pane_t1

0x0a21,	// (0x00052523) aid_size_vtel_slider_touch

0x10af,	// (0x00052bb1) scroll_pane_cp039

0x9337,	// (0x0005ae39) ncim_query_button_pane_cp01_ParamLimits

0x9356,	// (0x0005ae58) ncimui_query_pane_g1_ParamLimits

0xc00b,	// (0x0005db0d) input_focus_pane_cp012_ParamLimits

0x1346,	// (0x00052e48) ncim_query_entry_pane_t1_ParamLimits

0x10af,	// (0x00052bb1) scroll_pane_cp039_ParamLimits

0xcf8f,	// (0x0005ea91) navi_pane_bcale_mc_g1

0xcf97,	// (0x0005ea99) navi_pane_bcale_mc_t1

0x187e,	// (0x00053380) main_sp_fs_email_pane_g1

0x188a,	// (0x0005338c) main_sp_fs_email_pane_g2

0x0001,

0xfc1f,	// (0x00061721) main_sp_fs_email_pane_g

0x1b25,	// (0x00053627) list_single_cale_mrui_row_pane_g3_ParamLimits

0x1b25,	// (0x00053627) list_single_cale_mrui_row_pane_g3

0x9f79,	// (0x0005ba7b) list_single_recal_day_pane_g5_event_pane

0x0637,	// (0x00052139) list_single_recal_day_pane_g7

0x21ac,	// (0x00053cae) list_recal_day_event_pane_cp01

0x21b5,	// (0x00053cb7) list_recal_vselct_arw_lo_pane_cp01

0x21bd,	// (0x00053cbf) list_recal_vselct_arw_up_pane_cp01

0x21c5,	// (0x00053cc7) list_recal_vselct_pane_cp01

0x0a31,	// (0x00052533) list_recal_day_event_pane_cp01_g1

0x06a6,	// (0x000521a8) list_recal_day_event_pane_cp01_t1

0x063f,	// (0x00052141) list_single_recal_day_pane_t1_ParamLimits

0x0651,	// (0x00052153) list_single_recal_day_pane_t2_ParamLimits

0xfd04,	// (0x00061806) list_single_recal_day_pane_t_ParamLimits

0xbfe9,	// (0x0005daeb) bg_notes_pane_ParamLimits

0xc0ec,	// (0x0005dbee) list_notes_pane_ParamLimits

0x362b,	// (0x0005512d) scroll_pane_cp06_ParamLimits

0xc10e,	// (0x0005dc10) main_notes_pane_ParamLimits

0xc00b,	// (0x0005db0d) main_welc_pane

0xa9b4,	// (0x0005c4b6) main_welc_body_pane_ParamLimits

0xa9b4,	// (0x0005c4b6) main_welc_body_pane

0xa9cd,	// (0x0005c4cf) main_welc_opti_pane_ParamLimits

0xa9cd,	// (0x0005c4cf) main_welc_opti_pane

0xaa28,	// (0x0005c52a) main_welc_pane_t1_ParamLimits

0xaa28,	// (0x0005c52a) main_welc_pane_t1

0xabbe,	// (0x0005c6c0) main_welc_body_row_pane_ParamLimits

0xabbe,	// (0x0005c6c0) main_welc_body_row_pane

0xc064,	// (0x0005db66) main_welc_opti_row_pane_ParamLimits

0xc064,	// (0x0005db66) main_welc_opti_row_pane

0x21df,	// (0x00053ce1) main_welc_opti_row_pane_g1

0xabe7,	// (0x0005c6e9) main_welc_opti_row_pane_t1

0x21e7,	// (0x00053ce9) main_welc_body_row_pane_t1

0x1ea8,	// (0x000539aa) popup_notif_wgt_heading_pane

0x1ec2,	// (0x000539c4) aid_size_list_notif_wgt_del_ParamLimits

0x1ecf,	// (0x000539d1) list_notif_wgt_row_pane_g1_ParamLimits

0x1edb,	// (0x000539dd) list_notif_wgt_row_pane_g2_ParamLimits

0x1f17,	// (0x00053a19) list_notif_wgt_row_pane_g3_ParamLimits

0xfd6b,	// (0x0006186d) list_notif_wgt_row_pane_g_ParamLimits

0x1f24,	// (0x00053a26) list_notif_wgt_row_pane_t1_ParamLimits

0x1f3a,	// (0x00053a3c) list_notif_wgt_row_pane_t2_ParamLimits

0x1f4c,	// (0x00053a4e) list_notif_wgt_row_pane_t3_ParamLimits

0xfd72,	// (0x00061874) list_notif_wgt_row_pane_t_ParamLimits

0xa399,	// (0x0005be9b) listrow_wgtman_pane_g1_ParamLimits

0xa3a6,	// (0x0005bea8) listrow_wgtman_pane_g2_ParamLimits

0xfda2,	// (0x000618a4) listrow_wgtman_pane_g_ParamLimits

0xa3c4,	// (0x0005bec6) listrow_wgtman_pane_t1_ParamLimits

0xa3dc,	// (0x0005bede) listrow_wgtman_pane_t2_ParamLimits

0xfda7,	// (0x000618a9) listrow_wgtman_pane_t_ParamLimits

0xa402,	// (0x0005bf04) wait_bar_pane_cp09_ParamLimits

0xb971,	// (0x0005d473) bg_popup_heading_pane_cp02

0x21f6,	// (0x00053cf8) popup_notif_wgt_heading_pane_g1

0x21fe,	// (0x00053d00) popup_notif_wgt_heading_pane_t1

0xb971,	// (0x0005d473) main_vids_pane

0xb971,	// (0x0005d473) vids_listscroll_pane

0xabf6,	// (0x0005c6f8) scroll_pane_cp040

0xb971,	// (0x0005d473) vids_list_pane

0xac01,	// (0x0005c703) vids_list_double_pane_ParamLimits

0xac01,	// (0x0005c703) vids_list_double_pane

0xac19,	// (0x0005c71b) vids_list_double_pane_g1

0xac22,	// (0x0005c724) vids_list_double_pane_t1

0xac32,	// (0x0005c734) vids_list_double_pane_t2

0x0001,

0xfe40,	// (0x00061942) vids_list_double_pane_t

0x5f41,	// (0x00057a43) main_ncimui_pane_ParamLimits

0x918e,	// (0x0005ac90) main_ncimui_pane_g1_ParamLimits

0x919a,	// (0x0005ac9c) main_ncimui_pane_g2_ParamLimits

0x919a,	// (0x0005ac9c) main_ncimui_pane_g2

0x0001,

0xfb20,	// (0x00061622) main_ncimui_pane_g_ParamLimits

0xfb20,	// (0x00061622) main_ncimui_pane_g

0xa9e6,	// (0x0005c4e8) main_welc_pane_g1_ParamLimits

0xa9e6,	// (0x0005c4e8) main_welc_pane_g1

0xa9f2,	// (0x0005c4f4) main_welc_pane_g2_ParamLimits

0xa9f2,	// (0x0005c4f4) main_welc_pane_g2

0x0003,

0xfe2a,	// (0x0006192c) main_welc_pane_g_ParamLimits

0xfe2a,	// (0x0006192c) main_welc_pane_g

0xbfe9,	// (0x0005daeb) listscroll_mce_pane_ParamLimits

0xd0e4,	// (0x0005ebe6) wait_bar_pane_cp10

0xe484,	// (0x0005ff86) main_cale_day_pane_ParamLimits

0xe484,	// (0x0005ff86) main_cale_week_pane_ParamLimits

0xbfe9,	// (0x0005daeb) main_messa_pane_ParamLimits

0x6be6,	// (0x000586e8) main_clock2_btn_pane_ParamLimits

0x6be6,	// (0x000586e8) main_clock2_btn_pane

0xecf7,	// (0x000607f9) main_clock2_btn_pane_cp01_ParamLimits

0xecf7,	// (0x000607f9) main_clock2_btn_pane_cp01

0x1af6,	// (0x000535f8) list_cale_mrui_pane_ParamLimits

0x1f82,	// (0x00053a84) main_cf0_pane_g2

0x0001,

0xfd79,	// (0x0006187b) main_cf0_pane_g

0xa5a9,	// (0x0005c0ab) area_left_week_number_pane_ParamLimits

0xa5bc,	// (0x0005c0be) area_top_day_name_pane_ParamLimits

0xa5ca,	// (0x0005c0cc) frame_month_view_pane_ParamLimits

0x20aa,	// (0x00053bac) grid_month_view_pane_ParamLimits

0x20b8,	// (0x00053bba) frm_month_g1_ParamLimits

0xa648,	// (0x0005c14a) frm_month_g2_ParamLimits

0xa659,	// (0x0005c15b) frm_month_g3_ParamLimits

0xa66a,	// (0x0005c16c) frm_month_g4_ParamLimits

0xa67b,	// (0x0005c17d) frm_month_g5_ParamLimits

0xa68e,	// (0x0005c190) frm_month_g6_ParamLimits

0xa6a1,	// (0x0005c1a3) frm_month_g7_ParamLimits

0x20c5,	// (0x00053bc7) frm_month_g8_ParamLimits

0xa6b4,	// (0x0005c1b6) frm_month_g9_ParamLimits

0xa6c1,	// (0x0005c1c3) frm_month_g10_ParamLimits

0xa6ce,	// (0x0005c1d0) frm_month_g11_ParamLimits

0xa6db,	// (0x0005c1dd) frm_month_g12_ParamLimits

0xa6e8,	// (0x0005c1ea) frm_month_g13_ParamLimits

0xa6f5,	// (0x0005c1f7) frm_month_g14_ParamLimits

0xa704,	// (0x0005c206) frm_month_g15_ParamLimits

0xa713,	// (0x0005c215) frm_month_g16_ParamLimits

0xfdd1,	// (0x000618d3) frm_month_g_ParamLimits

0x20d2,	// (0x00053bd4) cell_top_day_name_pane_t1_ParamLimits

0xa722,	// (0x0005c224) cell_area_left_week_number_pane_g1_ParamLimits

0xa731,	// (0x0005c233) cell_area_left_week_number_pane_t1_ParamLimits

0xc072,	// (0x0005db74) cell_month_view_pane_g1_ParamLimits

0xa747,	// (0x0005c249) cell_month_view_pane_t1_ParamLimits

0xbfe1,	// (0x0005dae3) main_clock2_btn_pane_g1

0x220c,	// (0x00053d0e) main_clock2_btn_pane_t1

0xc00b,	// (0x0005db0d) listscroll_cmail_pane_ParamLimits

0x187e,	// (0x00053380) main_sp_fs_email_pane_g1_ParamLimits

0x188a,	// (0x0005338c) main_sp_fs_email_pane_g2_ParamLimits

0xfc1f,	// (0x00061721) main_sp_fs_email_pane_g_ParamLimits

0x1c2b,	// (0x0005372d) list_recal_day_pane_ParamLimits

0x1c3c,	// (0x0005373e) mian_recal_day_pane_t1

0x9930,	// (0x0005b432) list_single_dyc_row_text_pane_t4_ParamLimits

0x9930,	// (0x0005b432) list_single_dyc_row_text_pane_t4

0x9967,	// (0x0005b469) list_single_dyc_row_text_pane_t5_ParamLimits

0x9967,	// (0x0005b469) list_single_dyc_row_text_pane_t5

0x0416,	// (0x00051f18) list_single_dyc_row_text_pane_t6_ParamLimits

0x0416,	// (0x00051f18) list_single_dyc_row_text_pane_t6

0x5111,	// (0x00056c13) aid_mgn_list_cale_time_pane

0x5f41,	// (0x00057a43) main_gallery2_pane_ParamLimits

0xed0d,	// (0x0006080f) main_clock2_pane_cp01_t1

0xed1b,	// (0x0006081d) main_clock2_pane_cp01_t3

0x0001,

0xf70f,	// (0x00061211) main_clock2_pane_cp01_t

0x3a8e,	// (0x00055590) cale_week_scroll_pane_g16_ParamLimits

0x3a8e,	// (0x00055590) cale_week_scroll_pane_g16

0xc2c0,	// (0x0005ddc2) vorec_slider_pane

0x2196,	// (0x00053c98) vidtel_button_pane_t1_ParamLimits

0x9fd4,	// (0x0005bad6) main_fs_bigclock_clock_pane_g1_ParamLimits

0x9fd4,	// (0x0005bad6) main_fs_bigclock_clock_pane_g2_ParamLimits

0x9fe1,	// (0x0005bae3) main_fs_bigclock_clock_pane_g3_ParamLimits

0x9fe1,	// (0x0005bae3) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfd27,	// (0x00061829) main_fs_bigclock_clock_pane_g_ParamLimits

0x9fed,	// (0x0005baef) main_fs_bigclock_clock_pane_t1_ParamLimits

0xa000,	// (0x0005bb02) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfd30,	// (0x00061832) main_fs_bigclock_clock_pane_t_ParamLimits

0x658b,	// (0x0005808d) main_mup3_lyrics_pane_ParamLimits

0x658b,	// (0x0005808d) main_mup3_lyrics_pane

0xac65,	// (0x0005c767) main_mup3_lyrics_pane_t1_ParamLimits

0xac65,	// (0x0005c767) main_mup3_lyrics_pane_t1

0x711a,	// (0x00058c1c) aid_main_mp4_pane_t1_area

0x7124,	// (0x00058c26) aid_main_mp4_pane_t2_area

0x7229,	// (0x00058d2b) main_mp4_pane_g7_ParamLimits

0x7229,	// (0x00058d2b) main_mp4_pane_g7

0x7235,	// (0x00058d37) main_mp4_pane_g8_ParamLimits

0x7235,	// (0x00058d37) main_mp4_pane_g8

0x7631,	// (0x00059133) aid_call6_pane_g1_size

0xa8d1,	// (0x0005c3d3) list_double_large_graphic_phob2_other_pane_ParamLimits

0xa8d1,	// (0x0005c3d3) list_double_large_graphic_phob2_other_pane

0xc63b,	// (0x0005e13d) list_double_large_graphic_phob2_other_pane_g1

0xb971,	// (0x0005d473) list_highlight_pane_cp026

0xc00b,	// (0x0005db0d) main_welc_pane_ParamLimits

0x979f,	// (0x0005b2a1) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0x979f,	// (0x0005b2a1) main_sp_fs_ctrlbar_pane_g3

0x97b7,	// (0x0005b2b9) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0x97b7,	// (0x0005b2b9) main_sp_fs_ctrlbar_pane_g4

0x97e9,	// (0x0005b2eb) toolbar2_fixed_button_pane_cp01

0x97f4,	// (0x0005b2f6) toolbar2_fixed_button_pane_cp02

0x97ff,	// (0x0005b301) toolbar2_fixed_button_pane_cp03

0xa9a4,	// (0x0005c4a6) list_welc_entry_pane_ParamLimits

0xa9a4,	// (0x0005c4a6) list_welc_entry_pane

0xaa00,	// (0x0005c502) main_welc_pane_g3_ParamLimits

0xaa00,	// (0x0005c502) main_welc_pane_g3

0xaa42,	// (0x0005c544) main_welc_pane_t2_ParamLimits

0xaa42,	// (0x0005c544) main_welc_pane_t2

0xaa56,	// (0x0005c558) main_welc_pane_t3_ParamLimits

0xaa56,	// (0x0005c558) main_welc_pane_t3

0x0005,

0xfe33,	// (0x00061935) main_welc_pane_t_ParamLimits

0xfe33,	// (0x00061935) main_welc_pane_t

0xab52,	// (0x0005c654) welc_button_pane_ParamLimits

0xab52,	// (0x0005c654) welc_button_pane

0xabb0,	// (0x0005c6b2) welc_service_logo_pane_ParamLimits

0xabb0,	// (0x0005c6b2) welc_service_logo_pane

0xac9b,	// (0x0005c79d) list_single_welc_entry_pane_ParamLimits

0xac9b,	// (0x0005c79d) list_single_welc_entry_pane

0xacac,	// (0x0005c7ae) list_single_welc_entry_pane_g1

0xacb4,	// (0x0005c7b6) list_single_welc_entry_pane_t1

0xacc2,	// (0x0005c7c4) list_single_welc_entry_pane_t2

0x0001,

0xfe45,	// (0x00061947) list_single_welc_entry_pane_t

0xb971,	// (0x0005d473) bg_button_pane_cp035

0xacd0,	// (0x0005c7d2) welc_button_pane_t1

0x221a,	// (0x00053d1c) welc_service_logo_pane_g1

0x2223,	// (0x00053d25) welc_service_logo_pane_g2

0x0001,

0xfe4a,	// (0x0006194c) welc_service_logo_pane_g

0x34ea,	// (0x00054fec) main_int_radio_pane

0x11e4,	// (0x00052ce6) list_single_fs_dyc_pane_g1

0xa7ea,	// (0x0005c2ec) list_double_large_graphic_phob2_pane_g3_ParamLimits

0xa7ea,	// (0x0005c2ec) list_double_large_graphic_phob2_pane_g3

0xa7f6,	// (0x0005c2f8) list_double_large_graphic_phob2_pane_g4_ParamLimits

0xa7f6,	// (0x0005c2f8) list_double_large_graphic_phob2_pane_g4

0xacde,	// (0x0005c7e0) main_int_radio1_pane_ParamLimits

0xacde,	// (0x0005c7e0) main_int_radio1_pane

0x222c,	// (0x00053d2e) find_pane_cp02

0xacf0,	// (0x0005c7f2) input_focus_pane_cp12_ParamLimits

0xacf0,	// (0x0005c7f2) input_focus_pane_cp12

0xacfc,	// (0x0005c7fe) input_focus_pane_cp13_ParamLimits

0xacfc,	// (0x0005c7fe) input_focus_pane_cp13

0xad14,	// (0x0005c816) input_focus_pane_cp14_ParamLimits

0xad14,	// (0x0005c816) input_focus_pane_cp14

0x2235,	// (0x00053d37) int_radio1_listscroll_pane

0xad2c,	// (0x0005c82e) main_int_radio1_pane_g1_ParamLimits

0xad2c,	// (0x0005c82e) main_int_radio1_pane_g1

0xad3c,	// (0x0005c83e) main_int_radio1_pane_t1_ParamLimits

0xad3c,	// (0x0005c83e) main_int_radio1_pane_t1

0xad50,	// (0x0005c852) main_int_radio1_pane_t2_ParamLimits

0xad50,	// (0x0005c852) main_int_radio1_pane_t2

0xad64,	// (0x0005c866) main_int_radio1_pane_t3_ParamLimits

0xad64,	// (0x0005c866) main_int_radio1_pane_t3

0xad78,	// (0x0005c87a) main_int_radio1_pane_t4_ParamLimits

0xad78,	// (0x0005c87a) main_int_radio1_pane_t4

0x223f,	// (0x00053d41) main_int_radio1_pane_t5_ParamLimits

0x223f,	// (0x00053d41) main_int_radio1_pane_t5

0xad8f,	// (0x0005c891) main_int_radio1_pane_t6_ParamLimits

0xad8f,	// (0x0005c891) main_int_radio1_pane_t6

0xada1,	// (0x0005c8a3) main_int_radio1_pane_t7_ParamLimits

0xada1,	// (0x0005c8a3) main_int_radio1_pane_t7

0xadb3,	// (0x0005c8b5) main_int_radio1_pane_t8_ParamLimits

0xadb3,	// (0x0005c8b5) main_int_radio1_pane_t8

0xadc7,	// (0x0005c8c9) main_int_radio1_pane_t9_ParamLimits

0xadc7,	// (0x0005c8c9) main_int_radio1_pane_t9

0xadd9,	// (0x0005c8db) main_int_radio1_pane_t10_ParamLimits

0xadd9,	// (0x0005c8db) main_int_radio1_pane_t10

0xae0a,	// (0x0005c90c) main_int_radio1_pane_t11_ParamLimits

0xae0a,	// (0x0005c90c) main_int_radio1_pane_t11

0xae3b,	// (0x0005c93d) main_int_radio1_pane_t12_ParamLimits

0xae3b,	// (0x0005c93d) main_int_radio1_pane_t12

0x000b,

0xfe4f,	// (0x00061951) main_int_radio1_pane_t_ParamLimits

0xfe4f,	// (0x00061951) main_int_radio1_pane_t

0x2251,	// (0x00053d53) int_radio_list_pane

0x1c0e,	// (0x00053710) scroll_pane_cp037

0x2259,	// (0x00053d5b) list_double_large_graphic_int_radio_pane_ParamLimits

0x2259,	// (0x00053d5b) list_double_large_graphic_int_radio_pane

0x2272,	// (0x00053d74) list_double_large_graphic_int_radio_pane_g1

0x06b4,	// (0x000521b6) list_double_large_graphic_int_radio_pane_t1

0x06c2,	// (0x000521c4) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfe68,	// (0x0006196a) list_double_large_graphic_int_radio_pane_t

0xb971,	// (0x0005d473) list_highlight_pane_cp027

0x21cf,	// (0x00053cd1) main_button_pane_4

0xaa0c,	// (0x0005c50e) main_welc_pane_g4_ParamLimits

0xaa0c,	// (0x0005c50e) main_welc_pane_g4

0xaa68,	// (0x0005c56a) main_welc_pane_t4_ParamLimits

0xaa68,	// (0x0005c56a) main_welc_pane_t4

0xaa7a,	// (0x0005c57c) main_welc_pane_t5_ParamLimits

0xaa7a,	// (0x0005c57c) main_welc_pane_t5

0xaaaa,	// (0x0005c5ac) main_welc_pane_t6_ParamLimits

0xaaaa,	// (0x0005c5ac) main_welc_pane_t6

0xab60,	// (0x0005c662) welc_button_pane_2_ParamLimits

0xab60,	// (0x0005c662) welc_button_pane_2

0xab78,	// (0x0005c67a) welc_button_pane_3_ParamLimits

0xab78,	// (0x0005c67a) welc_button_pane_3

0x21d7,	// (0x00053cd9) welc_button_pane_4

0xab92,	// (0x0005c694) welc_button_pane_5_ParamLimits

0xab92,	// (0x0005c694) welc_button_pane_5

0x32f9,	// (0x00054dfb) main_popup_welc_pane

0x2293,	// (0x00053d95) main_welc_sk_g3

0x229d,	// (0x00053d9f) main_welc_sk_g4

0x22a7,	// (0x00053da9) main_welc_sk_t3

0x22b7,	// (0x00053db9) main_welc_sk_t4

0x22c7,	// (0x00053dc9) popup_welc_pane_t4

0x22d5,	// (0x00053dd7) popup_welc_pane_t5

0x22e3,	// (0x00053de5) popup_welc_pane_t6

0x34ea,	// (0x00054fec) main_acti_pane

0xb971,	// (0x0005d473) main_sso_pane

0xae52,	// (0x0005c954) sso_body_pane_ParamLimits

0xae52,	// (0x0005c954) sso_body_pane

0xae60,	// (0x0005c962) sso_logo_pane_ParamLimits

0xae60,	// (0x0005c962) sso_logo_pane

0xae91,	// (0x0005c993) sso_sk_pane_ParamLimits

0xae91,	// (0x0005c993) sso_sk_pane

0xc8fc,	// (0x0005e3fe) main_sso_logo_pane_g1

0xae9e,	// (0x0005c9a0) sso_sk_pane_t1_ParamLimits

0xae9e,	// (0x0005c9a0) sso_sk_pane_t1

0xaeb2,	// (0x0005c9b4) sso_sk_pane_t2_ParamLimits

0xaeb2,	// (0x0005c9b4) sso_sk_pane_t2

0x0001,

0xfe6d,	// (0x0006196f) sso_sk_pane_t_ParamLimits

0xfe6d,	// (0x0006196f) sso_sk_pane_t

0xc907,	// (0x0005e409) aid_sso_gap

0xc910,	// (0x0005e412) aid_sso_txt1

0xc91a,	// (0x0005e41c) aid_sso_txt2

0xc924,	// (0x0005e426) aid_sso_txt3

0x0002,

0xfe72,	// (0x00061974) aid_sso_txt

0xc92e,	// (0x0005e430) aid_sso_widget

0xaf0f,	// (0x0005ca11) sso_btn_pane_ParamLimits

0xaf0f,	// (0x0005ca11) sso_btn_pane

0xaf83,	// (0x0005ca85) sso_option_pane_ParamLimits

0xaf83,	// (0x0005ca85) sso_option_pane

0xb02f,	// (0x0005cb31) sso_query_pane_ParamLimits

0xb02f,	// (0x0005cb31) sso_query_pane

0xb07f,	// (0x0005cb81) sso_query_pane_cp01_ParamLimits

0xb07f,	// (0x0005cb81) sso_query_pane_cp01

0xb0d1,	// (0x0005cbd3) sso_t_hdr_pane_ParamLimits

0xb0d1,	// (0x0005cbd3) sso_t_hdr_pane

0xb0f5,	// (0x0005cbf7) sso_t_nml_pane_ParamLimits

0xb0f5,	// (0x0005cbf7) sso_t_nml_pane

0xc938,	// (0x0005e43a) sso_t_sub_pane

0xae6d,	// (0x0005c96f) sso_popup_window_ParamLimits

0xae6d,	// (0x0005c96f) sso_popup_window

0xaec4,	// (0x0005c9c6) sso_apps_pane_ParamLimits

0xaec4,	// (0x0005c9c6) sso_apps_pane

0xaee7,	// (0x0005c9e9) sso_body_pane_g1

0xaeef,	// (0x0005c9f1) sso_body_pane_t1

0xaeff,	// (0x0005ca01) sso_body_pane_t2

0x0001,

0xfe79,	// (0x0006197b) sso_body_pane_t

0xaf53,	// (0x0005ca55) sso_btn_pane_cp01_ParamLimits

0xaf53,	// (0x0005ca55) sso_btn_pane_cp01

0xb001,	// (0x0005cb03) sso_prog_pane_ParamLimits

0xb001,	// (0x0005cb03) sso_prog_pane

0xb145,	// (0x0005cc47) sso_t_hdr_pane_t1_ParamLimits

0xb145,	// (0x0005cc47) sso_t_hdr_pane_t1

0xc94d,	// (0x0005e44f) input_focus_pane_cp10_ParamLimits

0xc94d,	// (0x0005e44f) input_focus_pane_cp10

0xc961,	// (0x0005e463) sso_query_pane_t1_ParamLimits

0xc961,	// (0x0005e463) sso_query_pane_t1

0xc974,	// (0x0005e476) sso_query_pane_t2_ParamLimits

0xc974,	// (0x0005e476) sso_query_pane_t2

0xc98d,	// (0x0005e48f) sso_query_pane_t3_ParamLimits

0xc98d,	// (0x0005e48f) sso_query_pane_t3

0xc9b7,	// (0x0005e4b9) sso_query_pane_t4_ParamLimits

0xc9b7,	// (0x0005e4b9) sso_query_pane_t4

0x0003,

0xfe7e,	// (0x00061980) sso_query_pane_t_ParamLimits

0xfe7e,	// (0x00061980) sso_query_pane_t

0x228a,	// (0x00053d8c) bg_button_pane_cp22

0x227b,	// (0x00053d7d) sso_btn_pane_t1

0xb15e,	// (0x0005cc60) sso_t_nml_pane_t1_ParamLimits

0xb15e,	// (0x0005cc60) sso_t_nml_pane_t1

0xc9db,	// (0x0005e4dd) sso_option_row_pane_ParamLimits

0xc9db,	// (0x0005e4dd) sso_option_row_pane

0xc9e8,	// (0x0005e4ea) sso_t_sub_pane_t1_ParamLimits

0xc9e8,	// (0x0005e4ea) sso_t_sub_pane_t1

0xc00b,	// (0x0005db0d) bg_popup_window_pane_cp11_ParamLimits

0xc00b,	// (0x0005db0d) bg_popup_window_pane_cp11

0xca05,	// (0x0005e507) popup_sk_window_cp01_ParamLimits

0xca05,	// (0x0005e507) popup_sk_window_cp01

0xca12,	// (0x0005e514) sso_popup_body_pane_ParamLimits

0xca12,	// (0x0005e514) sso_popup_body_pane

0xca1f,	// (0x0005e521) scroll_pane_cp21_ParamLimits

0xca1f,	// (0x0005e521) scroll_pane_cp21

0xca2c,	// (0x0005e52e) sso_popup_body_t_pane_ParamLimits

0xca2c,	// (0x0005e52e) sso_popup_body_t_pane

0xca39,	// (0x0005e53b) sso_popup_body_t_hdr_pane_ParamLimits

0xca39,	// (0x0005e53b) sso_popup_body_t_hdr_pane

0xb17b,	// (0x0005cc7d) sso_popup_body_t_nml_pane_ParamLimits

0xb17b,	// (0x0005cc7d) sso_popup_body_t_nml_pane

0xb199,	// (0x0005cc9b) sso_popup_body_t_sub_pane_ParamLimits

0xb199,	// (0x0005cc9b) sso_popup_body_t_sub_pane

0xca4b,	// (0x0005e54d) sso_popup_body_t_hdr_pane_t1

0xb1bc,	// (0x0005ccbe) sso_popup_body_t_nml_pane_t1_ParamLimits

0xb1bc,	// (0x0005ccbe) sso_popup_body_t_nml_pane_t1

0xca5b,	// (0x0005e55d) sso_popup_body_t_sub_pane_t1_ParamLimits

0xca5b,	// (0x0005e55d) sso_popup_body_t_sub_pane_t1

0xc0b0,	// (0x0005dbb2) sso_prog_pane_g1

0xb203,	// (0x0005cd05) sso_apps_pane_comp1_ParamLimits

0xb203,	// (0x0005cd05) sso_apps_pane_comp1

0xca80,	// (0x0005e582) sso_apps_pane_comp1_g1

0xca88,	// (0x0005e58a) sso_apps_pane_comp1_t1

0xcaa4,	// (0x0005e5a6) sso_option_row_pane_g1

0xcaac,	// (0x0005e5ae) sso_option_row_pane_t1

0x1939,	// (0x0005343b) list_cmail_pane_ParamLimits

0xb971,	// (0x0005d473) main_call7_pane

0xa992,	// (0x0005c494) bg_welc_area_ParamLimits

0xa992,	// (0x0005c494) bg_welc_area

0xaae0,	// (0x0005c5e2) sso_t_hdr_pane_a_t1_ParamLimits

0xaae0,	// (0x0005c5e2) sso_t_hdr_pane_a_t1

0xaaf4,	// (0x0005c5f6) sso_t_nml_pane_a_t1_ParamLimits

0xaaf4,	// (0x0005c5f6) sso_t_nml_pane_a_t1

0xab1e,	// (0x0005c620) sso_t_sub_pane_a_t1_ParamLimits

0xab1e,	// (0x0005c620) sso_t_sub_pane_a_t1

0xaba2,	// (0x0005c6a4) welc_button_pane_cp01_ParamLimits

0xaba2,	// (0x0005c6a4) welc_button_pane_cp01

0x227b,	// (0x00053d7d) sso_btn_pane_t1_copy1

0x228a,	// (0x00053d8c) welc_button_pane_2_comp1

0x22f1,	// (0x00053df3) sso_t_hdr_pane_p_t1

0x2301,	// (0x00053e03) sso_t_nml_pane_p_t1

0xc8ec,	// (0x0005e3ee) sso_t_sub_pane_p_t1

0xb971,	// (0x0005d473) main_att_pane

0xb971,	// (0x0005d473) main_vod_pane

0xc938,	// (0x0005e43a) sso_t_sub_pane_ParamLimits

0xca96,	// (0x0005e598) input_focus_pane_cp10_t1

0xcaac,	// (0x0005e5ae) sso_option_row_pane_t1_ParamLimits

0xb21d,	// (0x0005cd1f) main_att_body_pane_ParamLimits

0xb21d,	// (0x0005cd1f) main_att_body_pane

0xb231,	// (0x0005cd33) att_btn_emg_pane_ParamLimits

0xb231,	// (0x0005cd33) att_btn_emg_pane

0xb249,	// (0x0005cd4b) att_btn_pane_ParamLimits

0xb249,	// (0x0005cd4b) att_btn_pane

0xb2b1,	// (0x0005cdb3) att_btn_pane_cp01_ParamLimits

0xb2b1,	// (0x0005cdb3) att_btn_pane_cp01

0xb2cb,	// (0x0005cdcd) att_li_srv_pane_ParamLimits

0xb2cb,	// (0x0005cdcd) att_li_srv_pane

0xb2dd,	// (0x0005cddf) att_opt_pane_ParamLimits

0xb2dd,	// (0x0005cddf) att_opt_pane

0xb321,	// (0x0005ce23) att_query_pane_ParamLimits

0xb321,	// (0x0005ce23) att_query_pane

0xb391,	// (0x0005ce93) att_query_pane_cp01_ParamLimits

0xb391,	// (0x0005ce93) att_query_pane_cp01

0xb3d5,	// (0x0005ced7) att_t_hdr_pane_ParamLimits

0xb3d5,	// (0x0005ced7) att_t_hdr_pane

0xb43b,	// (0x0005cf3d) att_t_nml_pane_ParamLimits

0xb43b,	// (0x0005cf3d) att_t_nml_pane

0xb4a3,	// (0x0005cfa5) att_t_nml_pane_cp01_ParamLimits

0xb4a3,	// (0x0005cfa5) att_t_nml_pane_cp01

0xb4c7,	// (0x0005cfc9) att_t_nmlb_pane_ParamLimits

0xb4c7,	// (0x0005cfc9) att_t_nmlb_pane

0xb52b,	// (0x0005d02d) att_term_pane_ParamLimits

0xb52b,	// (0x0005d02d) att_term_pane

0xb56d,	// (0x0005d06f) main_att_body_pane_g1_ParamLimits

0xb56d,	// (0x0005d06f) main_att_body_pane_g1

0xcac5,	// (0x0005e5c7) att_t_hdr_pane_t1_ParamLimits

0xcac5,	// (0x0005e5c7) att_t_hdr_pane_t1

0xcade,	// (0x0005e5e0) att_t_nml_pane_t1_ParamLimits

0xcade,	// (0x0005e5e0) att_t_nml_pane_t1

0xcb03,	// (0x0005e605) att_btn_pane_t1

0x228a,	// (0x00053d8c) bg_button_pane_cp23

0xb597,	// (0x0005d099) att_li_srv_row_pane_ParamLimits

0xb597,	// (0x0005d099) att_li_srv_row_pane

0xcb13,	// (0x0005e615) att_t_nmlb_pane_t1_ParamLimits

0xcb13,	// (0x0005e615) att_t_nmlb_pane_t1

0xcb31,	// (0x0005e633) att_query_pane_t1

0xcb40,	// (0x0005e642) att_query_pane_t2

0xcb4f,	// (0x0005e651) att_query_pane_t3

0x0002,

0xfe87,	// (0x00061989) att_query_pane_t

0xcb5e,	// (0x0005e660) input_focus_pane_cp11

0xcb67,	// (0x0005e669) att_term_pane_t1_ParamLimits

0xcb67,	// (0x0005e669) att_term_pane_t1

0xb971,	// (0x0005d473) att_opt_row_pane

0xcaa4,	// (0x0005e5a6) att_opt_row_pane_g1

0xcb84,	// (0x0005e686) att_opt_row_pane_t1_ParamLimits

0xcb84,	// (0x0005e686) att_opt_row_pane_t1

0xb5a7,	// (0x0005d0a9) att_li_srv_row_pane_g1

0xb5af,	// (0x0005d0b1) att_li_srv_row_pane_t1_ParamLimits

0xb5af,	// (0x0005d0b1) att_li_srv_row_pane_t1

0xb5c4,	// (0x0005d0c6) att_li_srv_row_pane_t2_ParamLimits

0xb5c4,	// (0x0005d0c6) att_li_srv_row_pane_t2

0x0001,

0xfe8e,	// (0x00061990) att_li_srv_row_pane_t_ParamLimits

0xfe8e,	// (0x00061990) att_li_srv_row_pane_t

0xcb9d,	// (0x0005e69f) att_btn_close_pane_g1

0xb971,	// (0x0005d473) bg_button_pane_cp24

0xb5d9,	// (0x0005d0db) main_vod_body_pane_ParamLimits

0xb5d9,	// (0x0005d0db) main_vod_body_pane

0xb5e7,	// (0x0005d0e9) main_vod_body_pane_g1_ParamLimits

0xb5e7,	// (0x0005d0e9) main_vod_body_pane_g1

0xb617,	// (0x0005d119) scroll_pane_cp24_ParamLimits

0xb617,	// (0x0005d119) scroll_pane_cp24

0xb65f,	// (0x0005d161) vod_btn_pane_ParamLimits

0xb65f,	// (0x0005d161) vod_btn_pane

0xb69d,	// (0x0005d19f) vod_det_pane_ParamLimits

0xb69d,	// (0x0005d19f) vod_det_pane

0xb6c7,	// (0x0005d1c9) vod_logo_g1_ParamLimits

0xb6c7,	// (0x0005d1c9) vod_logo_g1

0xb701,	// (0x0005d203) vod_opt_pane_ParamLimits

0xb701,	// (0x0005d203) vod_opt_pane

0xb731,	// (0x0005d233) vod_opt_pane_cp01_ParamLimits

0xb731,	// (0x0005d233) vod_opt_pane_cp01

0xb759,	// (0x0005d25b) vod_query_pane_ParamLimits

0xb759,	// (0x0005d25b) vod_query_pane

0xb781,	// (0x0005d283) vod_query_pane_cp01_ParamLimits

0xb781,	// (0x0005d283) vod_query_pane_cp01

0xb78d,	// (0x0005d28f) vod_t_nml_pane_ParamLimits

0xb78d,	// (0x0005d28f) vod_t_nml_pane

0xb82f,	// (0x0005d331) vod_t_nml_pane_cp01_ParamLimits

0xb82f,	// (0x0005d331) vod_t_nml_pane_cp01

0xb867,	// (0x0005d369) vod_t_sub_pane_ParamLimits

0xb867,	// (0x0005d369) vod_t_sub_pane

0xb893,	// (0x0005d395) vod_t_sub_pane_cp01_ParamLimits

0xb893,	// (0x0005d395) vod_t_sub_pane_cp01

0xcb5e,	// (0x0005e660) vod_query_field_pane

0xcba5,	// (0x0005e6a7) vod_query_pane_t1

0x228a,	// (0x00053d8c) bg_button_pane_cp25

0x227b,	// (0x00053d7d) sso_btn_pane_t1_copy2

0xb8bb,	// (0x0005d3bd) vod_t_nml_pane_t1_ParamLimits

0xb8bb,	// (0x0005d3bd) vod_t_nml_pane_t1

0xcbb4,	// (0x0005e6b6) vod_opt_row_pane_ParamLimits

0xcbb4,	// (0x0005e6b6) vod_opt_row_pane

0xcbc6,	// (0x0005e6c8) vod_t_sub_pane_t1_ParamLimits

0xcbc6,	// (0x0005e6c8) vod_t_sub_pane_t1

0xcbdf,	// (0x0005e6e1) vod_det_cell_pane_ParamLimits

0xcbdf,	// (0x0005e6e1) vod_det_cell_pane

0xb971,	// (0x0005d473) input_focus_pane_cp15

0xcbf0,	// (0x0005e6f2) vod_query_field_pane_t1

0xcbfe,	// (0x0005e700) vod_opt_row_pane_g1_ParamLimits

0xcbfe,	// (0x0005e700) vod_opt_row_pane_g1

0xcc0a,	// (0x0005e70c) vod_opt_row_pane_t1_ParamLimits

0xcc0a,	// (0x0005e70c) vod_opt_row_pane_t1

0xcc29,	// (0x0005e72b) vod_det_cell_field_pane

0xcc32,	// (0x0005e734) vod_det_cell_pane_g1

0xcc3a,	// (0x0005e73c) vod_det_cell_pane_t1

0xb971,	// (0x0005d473) input_focus_pane_cp16

0xcc49,	// (0x0005e74b) vod_det_cell_field_pane_t1

0xb8f0,	// (0x0005d3f2) call7_btn_grp_pane_ParamLimits

0xb8f0,	// (0x0005d3f2) call7_btn_grp_pane

0xb8ff,	// (0x0005d401) call7_bubble_pane_ParamLimits

0xb8ff,	// (0x0005d401) call7_bubble_pane

0xb90d,	// (0x0005d40f) cell_call7_btn_pane_ParamLimits

0xb90d,	// (0x0005d40f) cell_call7_btn_pane

0xb91c,	// (0x0005d41e) call7_pane_g1_ParamLimits

0xb91c,	// (0x0005d41e) call7_pane_g1

0xb92b,	// (0x0005d42d) call7_windows_conf_pane_ParamLimits

0xb92b,	// (0x0005d42d) call7_windows_conf_pane

0xb947,	// (0x0005d449) popup_call7_1st_window_ParamLimits

0xb947,	// (0x0005d449) popup_call7_1st_window

0xb955,	// (0x0005d457) popup_call7_2nd_window_ParamLimits

0xb955,	// (0x0005d457) popup_call7_2nd_window

0xb963,	// (0x0005d465) popup_call7_3rd_window_ParamLimits

0xb963,	// (0x0005d465) popup_call7_3rd_window

0xb971,	// (0x0005d473) bg_button_pane_cp26

0x1fff,	// (0x00053b01) cell_call7_btn_pane_g1

0x2008,	// (0x00053b0a) cell_call7_btn_pane_t1

0xb971,	// (0x0005d473) bg_popup_window_pane_cp12

0xcc57,	// (0x0005e759) popup_call7_1st_window_g1

0xcc5f,	// (0x0005e761) popup_call7_1st_window_g2

0xcc67,	// (0x0005e769) popup_call7_1st_window_g3

0x0002,

0xfe93,	// (0x00061995) popup_call7_1st_window_g

0xcc6f,	// (0x0005e771) popup_call7_1st_window_t1

0xcc7e,	// (0x0005e780) popup_call7_1st_window_t2

0xcc8c,	// (0x0005e78e) popup_call7_1st_window_t3

0x0002,

0xfe9a,	// (0x0006199c) popup_call7_1st_window_t

0xb971,	// (0x0005d473) bg_popup_window_pane_cp13

0xcc9a,	// (0x0005e79c) popup_call7_2nd_window_g1

0xcca2,	// (0x0005e7a4) popup_call7_2nd_window_g2

0xccaa,	// (0x0005e7ac) popup_call7_2nd_window_g3

0x0002,

0xfea1,	// (0x000619a3) popup_call7_2nd_window_g

0xccb2,	// (0x0005e7b4) popup_call7_2nd_window_t1

0xb971,	// (0x0005d473) bg_popup_window_pane_cp14

0xccc1,	// (0x0005e7c3) call7_list_conf_pane

0xccc9,	// (0x0005e7cb) call7_list_conf_row_pane_ParamLimits

0xccc9,	// (0x0005e7cb) call7_list_conf_row_pane

0xccdc,	// (0x0005e7de) call7_list_conf_row_pane_g1

0xcce4,	// (0x0005e7e6) call7_list_conf_row_pane_g2

0x0001,

0xfea8,	// (0x000619aa) call7_list_conf_row_pane_g

0xccec,	// (0x0005e7ee) call7_list_conf_row_pane_t1

0xb971,	// (0x0005d473) list_highlight_pane_cp22

0xafd3,	// (0x0005cad5) sso_option_pane_cp01_ParamLimits

0xafd3,	// (0x0005cad5) sso_option_pane_cp01

0xbfe9,	// (0x0005daeb) msg_header_pane_ParamLimits

0xd240,	// (0x0005ed42) bg_button_pane_cp01_ParamLimits

0xd254,	// (0x0005ed56) input_focus_pane_cp07_ParamLimits

0x9833,	// (0x0005b335) popup_email_progress_window

0xc0b0,	// (0x0005dbb2) popup_email_progress_window_g1

0xccfa,	// (0x0005e7fc) popup_email_progress_window_g2

0x0001,

0xfead,	// (0x000619af) popup_email_progress_window_g

0xcd02,	// (0x0005e804) popup_email_progress_window_t1
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
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	};

} // end of namespace AknLayoutScalable_Abrw_pnp4_apps_nhd4_prt_tch_Small
