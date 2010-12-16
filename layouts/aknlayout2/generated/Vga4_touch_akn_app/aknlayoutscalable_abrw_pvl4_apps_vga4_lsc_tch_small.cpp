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

#include "aknlayoutscalable_abrw_pvl4_apps_vga4_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pvl4_apps_vga4_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x00062b2e };

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
0x0312,	// (0x00062e40) Screen

0x031e,	// (0x00062e4c) application_window

0x035a,	// (0x00062e88) area_bottom_pane_ParamLimits

0x035a,	// (0x00062e88) area_bottom_pane

0x0393,	// (0x00062ec1) area_top_pane_ParamLimits

0x0393,	// (0x00062ec1) area_top_pane

0xa03e,	// (0x0006cb6c) call_video_uplink_pane_ParamLimits

0xa03e,	// (0x0006cb6c) call_video_uplink_pane

0x0421,	// (0x00062f4f) main_pane_ParamLimits

0x0421,	// (0x00062f4f) main_pane

0xe4dd,	// (0x0007100b) context_pane

0x3464,	// (0x00065f92) navi_pane

0x349b,	// (0x00065fc9) popup_cale_events_window_ParamLimits

0x349b,	// (0x00065fc9) popup_cale_events_window

0xe4f0,	// (0x0007101e) popup_mup_playback_window

0x34b3,	// (0x00065fe1) signal_pane

0xc4b6,	// (0x0006efe4) main_browser_pane

0xc693,	// (0x0006f1c1) main_burst_pane

0x317c,	// (0x00065caa) main_calc_pane

0xe4d1,	// (0x00070fff) main_cale_day_pane

0x07eb,	// (0x00063319) main_cale_month_pane

0xe4d1,	// (0x00070fff) main_cale_week_pane

0xc693,	// (0x0006f1c1) main_call_pane

0xc144,	// (0x0006ec72) main_call_poc_pane

0xc693,	// (0x0006f1c1) main_camera_pane

0xc693,	// (0x0006f1c1) main_chi_dic_pane

0xce49,	// (0x0006f977) main_clock_pane

0xc144,	// (0x0006ec72) main_fmradio_pane

0xc693,	// (0x0006f1c1) main_graph_messa_pane

0xc144,	// (0x0006ec72) main_help_pane

0xc4b6,	// (0x0006efe4) main_im_pane

0xc39f,	// (0x0006eecd) main_image_pane_ParamLimits

0xc39f,	// (0x0006eecd) main_image_pane

0xc144,	// (0x0006ec72) main_location2_pane

0xc693,	// (0x0006f1c1) main_location_pane

0xc39f,	// (0x0006eecd) main_messa_pane

0xc144,	// (0x0006ec72) main_mp2_pane

0xc693,	// (0x0006f1c1) main_mp_pane

0xc144,	// (0x0006ec72) main_msg_pane

0xc144,	// (0x0006ec72) main_mup_eq_pane

0xc144,	// (0x0006ec72) main_mup_pane

0xc4b6,	// (0x0006efe4) main_notes_pane

0xc144,	// (0x0006ec72) main_pec_pane

0xc144,	// (0x0006ec72) main_phob_pane

0xc144,	// (0x0006ec72) main_pinb_pane

0xc144,	// (0x0006ec72) main_postcard_pane

0xc144,	// (0x0006ec72) main_qdial_pane

0xc693,	// (0x0006f1c1) main_skin_pane

0xc144,	// (0x0006ec72) main_smil2_pane

0xc693,	// (0x0006f1c1) main_smil_pane

0xc693,	// (0x0006f1c1) main_video_pane

0xc693,	// (0x0006f1c1) main_video_tele_pane

0xc39f,	// (0x0006eecd) main_viewer_pane_ParamLimits

0xc39f,	// (0x0006eecd) main_viewer_pane

0xc693,	// (0x0006f1c1) main_vorec_pane

0x31d2,	// (0x00065d00) popup_blid_sat_info_window_ParamLimits

0x31d2,	// (0x00065d00) popup_blid_sat_info_window

0x3236,	// (0x00065d64) popup_dyc_status_message_window_ParamLimits

0x3236,	// (0x00065d64) popup_dyc_status_message_window

0x3250,	// (0x00065d7e) popup_grid_large_graphic_window_ParamLimits

0x3250,	// (0x00065d7e) popup_grid_large_graphic_window

0x3312,	// (0x00065e40) popup_loc_request_window_ParamLimits

0x3312,	// (0x00065e40) popup_loc_request_window

0x3438,	// (0x00065f66) popup_wml_address_window_ParamLimits

0x3438,	// (0x00065f66) popup_wml_address_window

0x2fba,	// (0x00065ae8) call_muted_g1

0x2c93,	// (0x000657c1) popup_call_audio_conf_window_ParamLimits

0x2c93,	// (0x000657c1) popup_call_audio_conf_window

0x2fca,	// (0x00065af8) popup_call_audio_first_window_ParamLimits

0x2fca,	// (0x00065af8) popup_call_audio_first_window

0x3040,	// (0x00065b6e) popup_call_audio_in_window_ParamLimits

0x3040,	// (0x00065b6e) popup_call_audio_in_window

0x307c,	// (0x00065baa) popup_call_audio_out_window_ParamLimits

0x307c,	// (0x00065baa) popup_call_audio_out_window

0x30b6,	// (0x00065be4) popup_call_audio_second_window_ParamLimits

0x30b6,	// (0x00065be4) popup_call_audio_second_window

0x310c,	// (0x00065c3a) popup_call_audio_wait_window_ParamLimits

0x310c,	// (0x00065c3a) popup_call_audio_wait_window

0x3141,	// (0x00065c6f) popup_number_entry_window_ParamLimits

0x3141,	// (0x00065c6f) popup_number_entry_window

0xa074,	// (0x0006cba2) bg_popup_call_pane_cp05_ParamLimits

0xa074,	// (0x0006cba2) bg_popup_call_pane_cp05

0xa094,	// (0x0006cbc2) popup_number_entry_window_t1

0xa0a7,	// (0x0006cbd5) popup_number_entry_window_t2

0xa0b9,	// (0x0006cbe7) popup_number_entry_window_t3

0x0003,

0xf01d,	// (0x00071b4b) popup_number_entry_window_t

0xa100,	// (0x0006cc2e) text_title_cp2

0xa113,	// (0x0006cc41) bg_popup_call_pane_cp_ParamLimits

0xa113,	// (0x0006cc41) bg_popup_call_pane_cp

0xa121,	// (0x0006cc4f) call_thumbnail_pane

0xa129,	// (0x0006cc57) popup_call_audio_in_window_g1_ParamLimits

0xa129,	// (0x0006cc57) popup_call_audio_in_window_g1

0xa135,	// (0x0006cc63) popup_call_audio_in_window_g2_ParamLimits

0xa135,	// (0x0006cc63) popup_call_audio_in_window_g2

0xa141,	// (0x0006cc6f) popup_call_audio_in_window_g3_ParamLimits

0xa141,	// (0x0006cc6f) popup_call_audio_in_window_g3

0x0002,

0xf026,	// (0x00071b54) popup_call_audio_in_window_g_ParamLimits

0xf026,	// (0x00071b54) popup_call_audio_in_window_g

0xa14d,	// (0x0006cc7b) popup_call_audio_in_window_t1_ParamLimits

0xa14d,	// (0x0006cc7b) popup_call_audio_in_window_t1

0xa169,	// (0x0006cc97) popup_call_audio_in_window_t2_ParamLimits

0xa169,	// (0x0006cc97) popup_call_audio_in_window_t2

0xa185,	// (0x0006ccb3) popup_call_audio_in_window_t3_ParamLimits

0xa185,	// (0x0006ccb3) popup_call_audio_in_window_t3

0x0002,

0xf02d,	// (0x00071b5b) popup_call_audio_in_window_t_ParamLimits

0xf02d,	// (0x00071b5b) popup_call_audio_in_window_t

0xa113,	// (0x0006cc41) bg_popup_call_pane_cp01_ParamLimits

0xa113,	// (0x0006cc41) bg_popup_call_pane_cp01

0xa121,	// (0x0006cc4f) call_thumbnail_pane_cp02

0xa198,	// (0x0006ccc6) call_type_pane_cp022

0xa1a0,	// (0x0006ccce) popup_call_audio_out_window_g1_ParamLimits

0xa1a0,	// (0x0006ccce) popup_call_audio_out_window_g1

0xa1b2,	// (0x0006cce0) popup_call_audio_out_window_g2_ParamLimits

0xa1b2,	// (0x0006cce0) popup_call_audio_out_window_g2

0xa1be,	// (0x0006ccec) popup_call_audio_out_window_g3_ParamLimits

0xa1be,	// (0x0006ccec) popup_call_audio_out_window_g3

0x0002,

0xf034,	// (0x00071b62) popup_call_audio_out_window_g_ParamLimits

0xf034,	// (0x00071b62) popup_call_audio_out_window_g

0xa1d0,	// (0x0006ccfe) popup_call_audio_out_window_t1_ParamLimits

0xa1d0,	// (0x0006ccfe) popup_call_audio_out_window_t1

0xa1e8,	// (0x0006cd16) popup_call_audio_out_window_t2_ParamLimits

0xa1e8,	// (0x0006cd16) popup_call_audio_out_window_t2

0x0001,

0xf03b,	// (0x00071b69) popup_call_audio_out_window_t_ParamLimits

0xf03b,	// (0x00071b69) popup_call_audio_out_window_t

0xa1fd,	// (0x0006cd2b) bg_popup_call_pane_ParamLimits

0xa1fd,	// (0x0006cd2b) bg_popup_call_pane

0x0542,	// (0x00063070) call_thumbnail_pane_cp_ParamLimits

0x0542,	// (0x00063070) call_thumbnail_pane_cp

0xa281,	// (0x0006cdaf) call_type_pane_cp01_ParamLimits

0xa281,	// (0x0006cdaf) call_type_pane_cp01

0xa2c5,	// (0x0006cdf3) popup_call_audio_first_window_g1_ParamLimits

0xa2c5,	// (0x0006cdf3) popup_call_audio_first_window_g1

0xa311,	// (0x0006ce3f) popup_call_audio_first_window_g2_ParamLimits

0xa311,	// (0x0006ce3f) popup_call_audio_first_window_g2

0x0001,

0xf040,	// (0x00071b6e) popup_call_audio_first_window_g_ParamLimits

0xf040,	// (0x00071b6e) popup_call_audio_first_window_g

0xa355,	// (0x0006ce83) popup_call_audio_first_window_t1_ParamLimits

0xa355,	// (0x0006ce83) popup_call_audio_first_window_t1

0xa401,	// (0x0006cf2f) popup_call_audio_first_window_t4_ParamLimits

0xa401,	// (0x0006cf2f) popup_call_audio_first_window_t4

0xc115,	// (0x0006ec43) popup_call_audio_first_window_t5_ParamLimits

0xc115,	// (0x0006ec43) popup_call_audio_first_window_t5

0x0002,

0xf045,	// (0x00071b73) popup_call_audio_first_window_t_ParamLimits

0xf045,	// (0x00071b73) popup_call_audio_first_window_t

0xc144,	// (0x0006ec72) bg_popup_call_pane_cp02

0xc14e,	// (0x0006ec7c) call_type_pane_cp023

0xc156,	// (0x0006ec84) popup_call_audio_wait_window_g1

0xc15e,	// (0x0006ec8c) popup_call_audio_wait_window_g2

0x0001,

0xf04c,	// (0x00071b7a) popup_call_audio_wait_window_g

0xc166,	// (0x0006ec94) popup_call_audio_wait_window_t3

0xc174,	// (0x0006eca2) bg_popup_call_pane_cp03_ParamLimits

0xc174,	// (0x0006eca2) bg_popup_call_pane_cp03

0xc1d4,	// (0x0006ed02) call_thumbnail_pane_cp011_ParamLimits

0xc1d4,	// (0x0006ed02) call_thumbnail_pane_cp011

0xc1e0,	// (0x0006ed0e) call_type_pane_cp034_ParamLimits

0xc1e0,	// (0x0006ed0e) call_type_pane_cp034

0xc21c,	// (0x0006ed4a) popup_call_audio_second_window_g1_ParamLimits

0xc21c,	// (0x0006ed4a) popup_call_audio_second_window_g1

0xc258,	// (0x0006ed86) popup_call_audio_second_window_g2_ParamLimits

0xc258,	// (0x0006ed86) popup_call_audio_second_window_g2

0x0001,

0xf051,	// (0x00071b7f) popup_call_audio_second_window_g_ParamLimits

0xf051,	// (0x00071b7f) popup_call_audio_second_window_g

0xc294,	// (0x0006edc2) popup_call_audio_second_window_t1_ParamLimits

0xc294,	// (0x0006edc2) popup_call_audio_second_window_t1

0xc315,	// (0x0006ee43) popup_call_audio_second_window_t2_ParamLimits

0xc315,	// (0x0006ee43) popup_call_audio_second_window_t2

0xc34b,	// (0x0006ee79) popup_call_audio_second_window_t3_ParamLimits

0xc34b,	// (0x0006ee79) popup_call_audio_second_window_t3

0x0002,

0xf056,	// (0x00071b84) popup_call_audio_second_window_t_ParamLimits

0xf056,	// (0x00071b84) popup_call_audio_second_window_t

0xc144,	// (0x0006ec72) bg_popup_call_pane_cp04

0xc381,	// (0x0006eeaf) list_conf_pane

0xc389,	// (0x0006eeb7) popup_call_audio_conf_window_t1

0xc397,	// (0x0006eec5) call_thumbnail_pane_g1

0xc39f,	// (0x0006eecd) bg_pinb_pane_ParamLimits

0xc39f,	// (0x0006eecd) bg_pinb_pane

0xc3ad,	// (0x0006eedb) find_pinb_pane

0xc39f,	// (0x0006eecd) listscroll_pinb_pane_ParamLimits

0xc39f,	// (0x0006eecd) listscroll_pinb_pane

0xc3b7,	// (0x0006eee5) pinb_bg_pane_g1

0xc3b7,	// (0x0006eee5) pinb_bg_pane_g2

0xc3b7,	// (0x0006eee5) pinb_bg_pane_g3

0xc3b7,	// (0x0006eee5) pinb_bg_pane_g4

0xc3b7,	// (0x0006eee5) pinb_bg_pane_g5

0xc3b7,	// (0x0006eee5) pinb_bg_pane_g6

0xc3b7,	// (0x0006eee5) pinb_bg_pane_g7

0xc3b7,	// (0x0006eee5) pinb_bg_pane_g8

0xc3b7,	// (0x0006eee5) pinb_bg_pane_g9

0xc3b7,	// (0x0006eee5) pinb_bg_pane_g10

0x0009,

0xf05d,	// (0x00071b8b) pinb_bg_pane_g

0x9fdf,	// (0x0006cb0d) grid_pinb_pane

0x9fdf,	// (0x0006cb0d) list_pinb_pane

0xa48d,	// (0x0006cfbb) scroll_pane_cp01_ParamLimits

0xa48d,	// (0x0006cfbb) scroll_pane_cp01

0xc3c1,	// (0x0006eeef) find_pinb_pane_g1_ParamLimits

0xc3c1,	// (0x0006eeef) find_pinb_pane_g1

0xc3d9,	// (0x0006ef07) find_pinb_pane_t1

0xc3eb,	// (0x0006ef19) find_pinb_pane_t2

0x0001,

0xf077,	// (0x00071ba5) find_pinb_pane_t

0xc400,	// (0x0006ef2e) input_focus_pane_cp01_ParamLimits

0xc400,	// (0x0006ef2e) input_focus_pane_cp01

0xc40c,	// (0x0006ef3a) cell_pinb_pane_ParamLimits

0xc40c,	// (0x0006ef3a) cell_pinb_pane

0xc41a,	// (0x0006ef48) cell_pinb_pane_g1_ParamLimits

0xc41a,	// (0x0006ef48) cell_pinb_pane_g1

0xc428,	// (0x0006ef56) cell_pinb_pane_g2_ParamLimits

0xc428,	// (0x0006ef56) cell_pinb_pane_g2

0xc428,	// (0x0006ef56) cell_pinb_pane_g3_ParamLimits

0xc428,	// (0x0006ef56) cell_pinb_pane_g3

0x0002,

0xf07c,	// (0x00071baa) cell_pinb_pane_g_ParamLimits

0xf07c,	// (0x00071baa) cell_pinb_pane_g

0xc144,	// (0x0006ec72) grid_highlight_pane_cp01

0xc40c,	// (0x0006ef3a) list_pinb_item_pane_ParamLimits

0xc40c,	// (0x0006ef3a) list_pinb_item_pane

0x9fdf,	// (0x0006cb0d) list_highlight_pane_cp02

0xc436,	// (0x0006ef64) list_pinb_item_pane_g1_ParamLimits

0xc436,	// (0x0006ef64) list_pinb_item_pane_g1

0xc428,	// (0x0006ef56) list_pinb_item_pane_g2_ParamLimits

0xc428,	// (0x0006ef56) list_pinb_item_pane_g2

0xc41a,	// (0x0006ef48) list_pinb_item_pane_g3_ParamLimits

0xc41a,	// (0x0006ef48) list_pinb_item_pane_g3

0xc428,	// (0x0006ef56) list_pinb_item_pane_g4_ParamLimits

0xc428,	// (0x0006ef56) list_pinb_item_pane_g4

0x0003,

0xf083,	// (0x00071bb1) list_pinb_item_pane_g_ParamLimits

0xf083,	// (0x00071bb1) list_pinb_item_pane_g

0xc444,	// (0x0006ef72) list_pinb_item_pane_t1_ParamLimits

0xc444,	// (0x0006ef72) list_pinb_item_pane_t1

0x0586,	// (0x000630b4) calc_display_pane

0x05ab,	// (0x000630d9) calc_paper_pane

0x05ce,	// (0x000630fc) grid_calc_pane

0x9fdf,	// (0x0006cb0d) bg_list_pane_cp01

0xc458,	// (0x0006ef86) clock_g1

0xc458,	// (0x0006ef86) clock_g2

0x0001,

0xf08c,	// (0x00071bba) clock_g

0xc462,	// (0x0006ef90) clock_t1_ParamLimits

0xc462,	// (0x0006ef90) clock_t1

0xc476,	// (0x0006efa4) clock_t2_ParamLimits

0xc476,	// (0x0006efa4) clock_t2

0xc476,	// (0x0006efa4) clock_t3_ParamLimits

0xc476,	// (0x0006efa4) clock_t3

0xc476,	// (0x0006efa4) clock_t4_ParamLimits

0xc476,	// (0x0006efa4) clock_t4

0xc462,	// (0x0006ef90) clock_t5_ParamLimits

0xc462,	// (0x0006ef90) clock_t5

0xc476,	// (0x0006efa4) clock_t6_ParamLimits

0xc476,	// (0x0006efa4) clock_t6

0xc476,	// (0x0006efa4) clock_t7_ParamLimits

0xc476,	// (0x0006efa4) clock_t7

0xc476,	// (0x0006efa4) clock_t8_ParamLimits

0xc476,	// (0x0006efa4) clock_t8

0xc476,	// (0x0006efa4) clock_t9_ParamLimits

0xc476,	// (0x0006efa4) clock_t9

0x0008,

0xf091,	// (0x00071bbf) clock_t_ParamLimits

0xf091,	// (0x00071bbf) clock_t

0x9fdf,	// (0x0006cb0d) popup_clock_analogue_window_cp02

0x9fdf,	// (0x0006cb0d) popup_clock_digital_window_cp01

0xc144,	// (0x0006ec72) listscroll_help_pane

0xc144,	// (0x0006ec72) phob_pre_status_pane

0xc48a,	// (0x0006efb8) grid_qdial_pane

0xc39f,	// (0x0006eecd) listscroll_mce_pane

0xc39f,	// (0x0006eecd) bg_notes_pane

0xc494,	// (0x0006efc2) list_notes_pane

0x05fc,	// (0x0006312a) scroll_pane_cp06

0xc4a2,	// (0x0006efd0) bg_calc_paper_pane

0xa4a3,	// (0x0006cfd1) list_calc_pane

0xc4b6,	// (0x0006efe4) bg_calc_display_pane

0x0610,	// (0x0006313e) calc_display_pane_t1

0x0625,	// (0x00063153) calc_display_pane_t2

0xa4bd,	// (0x0006cfeb) calc_display_pane_t3

0x0002,

0xf0a4,	// (0x00071bd2) calc_display_pane_t

0x063a,	// (0x00063168) cell_calc_pane_ParamLimits

0x063a,	// (0x00063168) cell_calc_pane

0xc4c2,	// (0x0006eff0) bg_calc_paper_pane_g1

0xc4ce,	// (0x0006effc) bg_calc_paper_pane_g2

0xc4da,	// (0x0006f008) bg_calc_paper_pane_g3

0xc4e6,	// (0x0006f014) bg_calc_paper_pane_g4

0xc4f2,	// (0x0006f020) bg_calc_paper_pane_g5

0x0675,	// (0x000631a3) bg_calc_paper_pane_g6

0x0688,	// (0x000631b6) bg_calc_paper_pane_g7

0x069b,	// (0x000631c9) bg_calc_paper_pane_g8

0x0007,

0xf0ab,	// (0x00071bd9) bg_calc_paper_pane_g

0x06ae,	// (0x000631dc) calc_bg_paper_pane_g9

0x06c1,	// (0x000631ef) list_calc_item_pane_ParamLimits

0x06c1,	// (0x000631ef) list_calc_item_pane

0xc4fe,	// (0x0006f02c) list_calc_item_pane_g1

0xa4cf,	// (0x0006cffd) list_calc_item_pane_t1_ParamLimits

0xa4cf,	// (0x0006cffd) list_calc_item_pane_t1

0x06d9,	// (0x00063207) list_calc_item_pane_t2_ParamLimits

0x06d9,	// (0x00063207) list_calc_item_pane_t2

0x0001,

0xf0bc,	// (0x00071bea) list_calc_item_pane_t_ParamLimits

0xf0bc,	// (0x00071bea) list_calc_item_pane_t

0xc3b7,	// (0x0006eee5) cell_calc_pane_g1

0xc50b,	// (0x0006f039) grid_highlight_pane_cp02

0x070b,	// (0x00063239) bg_calc_display_pane_g1

0x0714,	// (0x00063242) bg_calc_display_pane_g2

0xccda,	// (0x0006f808) bg_calc_display_pane_g3

0x0002,

0xf0c6,	// (0x00071bf4) bg_calc_display_pane_g

0x071e,	// (0x0006324c) cell_qdial_pane_ParamLimits

0x071e,	// (0x0006324c) cell_qdial_pane

0x0732,	// (0x00063260) cell_qdial_pane_g1_ParamLimits

0x0732,	// (0x00063260) cell_qdial_pane_g1

0x0748,	// (0x00063276) cell_qdial_pane_g2_ParamLimits

0x0748,	// (0x00063276) cell_qdial_pane_g2

0xc52d,	// (0x0006f05b) cell_qdial_pane_g3_ParamLimits

0xc52d,	// (0x0006f05b) cell_qdial_pane_g3

0x0003,

0xf0cd,	// (0x00071bfb) cell_qdial_pane_g_ParamLimits

0xf0cd,	// (0x00071bfb) cell_qdial_pane_g

0x076f,	// (0x0006329d) cell_qdial_pane_t1_ParamLimits

0x076f,	// (0x0006329d) cell_qdial_pane_t1

0x0787,	// (0x000632b5) cell_qdial_pane_t2_ParamLimits

0x0787,	// (0x000632b5) cell_qdial_pane_t2

0x079a,	// (0x000632c8) cell_qdial_pane_t3_ParamLimits

0x079a,	// (0x000632c8) cell_qdial_pane_t3

0x0002,

0xf0d6,	// (0x00071c04) cell_qdial_pane_t_ParamLimits

0xf0d6,	// (0x00071c04) cell_qdial_pane_t

0xc144,	// (0x0006ec72) grid_highlight_pane_cp04

0xc539,	// (0x0006f067) thumbnail_qdial_pane_ParamLimits

0xc539,	// (0x0006f067) thumbnail_qdial_pane

0xc595,	// (0x0006f0c3) list_help_pane

0xc59e,	// (0x0006f0cc) scroll_pane_cp02

0x07ad,	// (0x000632db) help_list_pane_t1_ParamLimits

0x07ad,	// (0x000632db) help_list_pane_t1

0xc5a7,	// (0x0006f0d5) bg_notes_pane_g2

0xc5af,	// (0x0006f0dd) bg_notes_pane_g3

0xc5b7,	// (0x0006f0e5) notes_bg_pane_g1

0xc5bf,	// (0x0006f0ed) notes_bg_pane_g4

0xc5c7,	// (0x0006f0f5) notes_bg_pane_g5

0xc5cf,	// (0x0006f0fd) notes_bg_pane_g6

0xc5d7,	// (0x0006f105) notes_bg_pane_g7

0xc5df,	// (0x0006f10d) notes_bg_pane_g8

0xc5e7,	// (0x0006f115) notes_bg_pane_g9

0x0006,

0xf0f4,	// (0x00071c22) notes_bg_pane_g

0x07d1,	// (0x000632ff) list_notes_text_pane_ParamLimits

0x07d1,	// (0x000632ff) list_notes_text_pane

0xc5ef,	// (0x0006f11d) list_notes_text_pane_g1

0xcce3,	// (0x0006f811) list_notes_text_pane_t1

0x07eb,	// (0x00063319) listscroll_cale_week_pane

0x0817,	// (0x00063345) bg_cale_heading_pane

0x083b,	// (0x00063369) bg_cale_pane_cp01

0x0858,	// (0x00063386) cale_week_corner_pane

0x0877,	// (0x000633a5) cale_week_day_heading_pane

0x08a0,	// (0x000633ce) cale_week_scroll_pane_g1

0x08bf,	// (0x000633ed) cale_week_scroll_pane_g2

0x08d7,	// (0x00063405) cale_week_scroll_pane_g3

0x08ef,	// (0x0006341d) cale_week_scroll_pane_g4

0x0907,	// (0x00063435) cale_week_scroll_pane_g5

0x0927,	// (0x00063455) cale_week_scroll_pane_g6

0x0947,	// (0x00063475) cale_week_scroll_pane_g7

0x0967,	// (0x00063495) cale_week_scroll_pane_g8

0x098b,	// (0x000634b9) cale_week_scroll_pane_g9

0x09a3,	// (0x000634d1) cale_week_scroll_pane_g10

0x09bb,	// (0x000634e9) cale_week_scroll_pane_g11

0x09d3,	// (0x00063501) cale_week_scroll_pane_g12

0x09f3,	// (0x00063521) cale_week_scroll_pane_g13

0x0a17,	// (0x00063545) cale_week_scroll_pane_g14

0x0a3b,	// (0x00063569) cale_week_scroll_pane_g15

0x000f,

0xf103,	// (0x00071c31) cale_week_scroll_pane_g

0x0a83,	// (0x000635b1) cale_week_time_pane

0x0aa7,	// (0x000635d5) grid_cale_week_pane

0xc61b,	// (0x0006f149) scroll_pane_cp08

0x0ad5,	// (0x00063603) cell_cale_week_pane_ParamLimits

0x0ad5,	// (0x00063603) cell_cale_week_pane

0x0b6d,	// (0x0006369b) cale_week_day_heading_pane_t1

0x0b97,	// (0x000636c5) cale_week_day_heading_pane_t2

0x0bc6,	// (0x000636f4) cale_week_day_heading_pane_t3

0x0bf5,	// (0x00063723) cale_week_day_heading_pane_t4

0x0c24,	// (0x00063752) cale_week_day_heading_pane_t5

0x0c57,	// (0x00063785) cale_week_day_heading_pane_t6

0x0c8e,	// (0x000637bc) cale_week_day_heading_pane_t7

0x0006,

0xf124,	// (0x00071c52) cale_week_day_heading_pane_t

0xc638,	// (0x0006f166) bg_cale_side_pane

0x0cb8,	// (0x000637e6) cale_week_time_pane_t1

0x0cd2,	// (0x00063800) cale_week_time_pane_t2

0x0cec,	// (0x0006381a) cale_week_time_pane_t3

0x0d06,	// (0x00063834) cale_week_time_pane_t4

0x0d20,	// (0x0006384e) cale_week_time_pane_t5

0x0d3a,	// (0x00063868) cale_week_time_pane_t6

0x0d58,	// (0x00063886) cale_week_time_pane_t7

0x0d7a,	// (0x000638a8) cale_week_time_pane_t8

0x0007,

0xf133,	// (0x00071c61) cale_week_time_pane_t

0x0d9e,	// (0x000638cc) cell_cale_week_pane_g2

0x0dc2,	// (0x000638f0) cell_cale_week_pane_g3_ParamLimits

0x0dc2,	// (0x000638f0) cell_cale_week_pane_g3

0xc646,	// (0x0006f174) grid_highlight_pane_cp07

0xc64e,	// (0x0006f17c) listscroll_gms_pane

0xc658,	// (0x0006f186) grid_gms_pane

0xc661,	// (0x0006f18f) listscroll_gms_pane_g1

0xc669,	// (0x0006f197) listscroll_gms_pane_g2

0x0001,

0xf144,	// (0x00071c72) listscroll_gms_pane_g

0x0dda,	// (0x00063908) scroll_pane_cp010

0x0de5,	// (0x00063913) cell_gms_pane_ParamLimits

0x0de5,	// (0x00063913) cell_gms_pane

0x0dfc,	// (0x0006392a) cell_gms_pane_g1

0xc671,	// (0x0006f19f) cell_gms_pane_g2

0xc679,	// (0x0006f1a7) cell_gms_pane_g3

0xc682,	// (0x0006f1b0) cell_gms_pane_g4

0x0003,

0xf149,	// (0x00071c77) cell_gms_pane_g

0xc68b,	// (0x0006f1b9) grid_highlight_pane_cp09

0x2f3e,	// (0x00065a6c) phob_pre_status_pane_g1

0x2f46,	// (0x00065a74) phob_pre_status_pane_g2

0x2f4e,	// (0x00065a7c) phob_pre_status_pane_g3

0x2f56,	// (0x00065a84) phob_pre_status_pane_g4

0x0004,

0xf4e5,	// (0x00072013) phob_pre_status_pane_g

0x2f66,	// (0x00065a94) phob_pre_status_pane_t1

0x2f76,	// (0x00065aa4) phob_pre_status_pane_t2

0x2f86,	// (0x00065ab4) phob_pre_status_pane_t3

0x0002,

0xf4f0,	// (0x0007201e) phob_pre_status_pane_t

0xc693,	// (0x0006f1c1) bg_list_pane_cp05

0x0e0c,	// (0x0006393a) grid_vorec_pane

0x0e16,	// (0x00063944) vorec_t1

0x0e24,	// (0x00063952) vorec_t2

0x0e32,	// (0x00063960) vorec_t3

0x0e40,	// (0x0006396e) vorec_t4

0xcccc,	// (0x0006f7fa) vorec_t5

0x9127,	// (0x0006bc55) vorec_t6

0x0004,

0xf152,	// (0x00071c80) vorec_t

0x9135,	// (0x0006bc63) wait_bar_pane_cp01

0x0e5c,	// (0x0006398a) cell_vorec_pane_ParamLimits

0x0e5c,	// (0x0006398a) cell_vorec_pane

0xa4ea,	// (0x0006d018) cell_vorec_pane_g1

0xc144,	// (0x0006ec72) grid_highlight_pane_cp05

0xa48d,	// (0x0006cfbb) cams_zoom_pane

0xa48d,	// (0x0006cfbb) image_vga_pane

0xc41a,	// (0x0006ef48) main_camera_pane_g1

0xc41a,	// (0x0006ef48) main_camera_pane_g2

0xc41a,	// (0x0006ef48) main_camera_pane_g3

0xc41a,	// (0x0006ef48) main_camera_pane_g4

0xc41a,	// (0x0006ef48) main_camera_pane_g5

0xc41a,	// (0x0006ef48) main_camera_pane_g6

0xc41a,	// (0x0006ef48) main_camera_pane_g7

0x0007,

0xf15d,	// (0x00071c8b) main_camera_pane_g

0xc462,	// (0x0006ef90) main_camera_pane_t1

0xc462,	// (0x0006ef90) main_camera_pane_t2

0x0001,

0xf16e,	// (0x00071c9c) main_camera_pane_t

0x0e85,	// (0x000639b3) cams_zoom_pane_cp_ParamLimits

0x0e85,	// (0x000639b3) cams_zoom_pane_cp

0x0eb9,	// (0x000639e7) image_cif_pane_ParamLimits

0x0eb9,	// (0x000639e7) image_cif_pane

0x9fdf,	// (0x0006cb0d) image_subqcif_pane

0x0ecb,	// (0x000639f9) main_video_pane_g1_ParamLimits

0x0ecb,	// (0x000639f9) main_video_pane_g1

0x0ef9,	// (0x00063a27) main_video_pane_g2_ParamLimits

0x0ef9,	// (0x00063a27) main_video_pane_g2

0x0f33,	// (0x00063a61) main_video_pane_g3_ParamLimits

0x0f33,	// (0x00063a61) main_video_pane_g3

0x0f33,	// (0x00063a61) main_video_pane_g4_ParamLimits

0x0f33,	// (0x00063a61) main_video_pane_g4

0x0f67,	// (0x00063a95) main_video_pane_g5_ParamLimits

0x0f67,	// (0x00063a95) main_video_pane_g5

0xc69b,	// (0x0006f1c9) main_video_pane_g6_ParamLimits

0xc69b,	// (0x0006f1c9) main_video_pane_g6

0x0006,

0xf173,	// (0x00071ca1) main_video_pane_g_ParamLimits

0xf173,	// (0x00071ca1) main_video_pane_g

0x0f83,	// (0x00063ab1) main_video_pane_t1_ParamLimits

0x0f83,	// (0x00063ab1) main_video_pane_t1

0xc458,	// (0x0006ef86) cams_zoom_pane_g1

0xc458,	// (0x0006ef86) cams_zoom_pane_g2

0xc458,	// (0x0006ef86) cams_zoom_pane_g3

0xc458,	// (0x0006ef86) cams_zoom_pane_g4

0x0003,

0xf182,	// (0x00071cb0) cams_zoom_pane_g

0xa48d,	// (0x0006cfbb) grid_cams_pane

0xa48d,	// (0x0006cfbb) linegrid_cams_pane

0x0fc7,	// (0x00063af5) cell_cams_pane_ParamLimits

0x0fc7,	// (0x00063af5) cell_cams_pane

0x9fdf,	// (0x0006cb0d) cams_burst_image_pane

0xc458,	// (0x0006ef86) cell_cams_pane_g1

0x9fdf,	// (0x0006cb0d) grid_highlight_pane_cp03

0xc3b7,	// (0x0006eee5) mp_bg_pane_g1

0x9fdf,	// (0x0006cb0d) bg_list_pane_cp03

0x9fdf,	// (0x0006cb0d) bg_mp_pane

0x9fdf,	// (0x0006cb0d) grid_mp_pane

0xc458,	// (0x0006ef86) media_player_g1

0xcbae,	// (0x0006f6dc) media_player_t1

0xcbae,	// (0x0006f6dc) media_player_t2

0xcbae,	// (0x0006f6dc) media_player_t3

0xcbae,	// (0x0006f6dc) media_player_t4

0xcbae,	// (0x0006f6dc) media_player_t5

0xcbae,	// (0x0006f6dc) media_player_t6

0xcbae,	// (0x0006f6dc) media_player_t7

0x0006,

0xf4cf,	// (0x00071ffd) media_player_t

0x9fdf,	// (0x0006cb0d) wait_bar_pane_cp02

0xf4b4,	// (0x00071fe2) main_usb_pane_t

0xce49,	// (0x0006f977) cell_mp_pane

0xc3b7,	// (0x0006eee5) cell_mp_pane_g1

0xc144,	// (0x0006ec72) grid_highlight_pane_cp06

0xc6b5,	// (0x0006f1e3) grid_skin_colour_pane

0xc6bd,	// (0x0006f1eb) list_highlight_pane_cp03

0x0fdc,	// (0x00063b0a) skin_g1

0xc6c5,	// (0x0006f1f3) skin_t1

0xc6d4,	// (0x0006f202) skin_t2

0x0001,

0xf1b0,	// (0x00071cde) skin_t

0x0fe4,	// (0x00063b12) cell_skin_colour_pane_ParamLimits

0x0fe4,	// (0x00063b12) cell_skin_colour_pane

0xc6e2,	// (0x0006f210) cell_skin_colour_pane_g1

0x1056,	// (0x00063b84) call_video_g1_ParamLimits

0x1056,	// (0x00063b84) call_video_g1

0x1072,	// (0x00063ba0) call_video_g2_ParamLimits

0x1072,	// (0x00063ba0) call_video_g2

0x0001,

0xf1b5,	// (0x00071ce3) call_video_g_ParamLimits

0xf1b5,	// (0x00071ce3) call_video_g

0x10ba,	// (0x00063be8) call_video_uplink_pane_cp1_ParamLimits

0x10ba,	// (0x00063be8) call_video_uplink_pane_cp1

0xc6f4,	// (0x0006f222) call_video_uplink_pane_cp2

0x114a,	// (0x00063c78) video_down_crop_pane_ParamLimits

0x114a,	// (0x00063c78) video_down_crop_pane

0x1232,	// (0x00063d60) video_down_pane_ParamLimits

0x1232,	// (0x00063d60) video_down_pane

0xc6fc,	// (0x0006f22a) video_down_subqcif_pane_ParamLimits

0xc6fc,	// (0x0006f22a) video_down_subqcif_pane

0xc716,	// (0x0006f244) video_down_subqcif_pane_cp_ParamLimits

0xc716,	// (0x0006f244) video_down_subqcif_pane_cp

0xc73c,	// (0x0006f26a) im_reading_pane_ParamLimits

0xc73c,	// (0x0006f26a) im_reading_pane

0x133d,	// (0x00063e6b) im_writing_pane_ParamLimits

0x133d,	// (0x00063e6b) im_writing_pane

0x135b,	// (0x00063e89) im_reading_pane_t1

0xc756,	// (0x0006f284) list_im_pane

0xc767,	// (0x0006f295) scroll_pane_cp07

0x139a,	// (0x00063ec8) im_writing_pane_t1_ParamLimits

0x139a,	// (0x00063ec8) im_writing_pane_t1

0xc780,	// (0x0006f2ae) im_writing_pane_t2_ParamLimits

0xc780,	// (0x0006f2ae) im_writing_pane_t2

0x0001,

0xf1bf,	// (0x00071ced) im_writing_pane_t_ParamLimits

0xf1bf,	// (0x00071ced) im_writing_pane_t

0xc144,	// (0x0006ec72) input_focus_pane_cp04

0xc144,	// (0x0006ec72) input_focus_pane_cp05

0x13af,	// (0x00063edd) list_im_single_pane_ParamLimits

0x13af,	// (0x00063edd) list_im_single_pane

0xc79d,	// (0x0006f2cb) list_single_im_pane_t1

0xc693,	// (0x0006f1c1) blid_accuracy_pane

0xc693,	// (0x0006f1c1) blid_compass_pane

0xe489,	// (0x00070fb7) main_location_t1

0xe489,	// (0x00070fb7) main_location_t2

0xe489,	// (0x00070fb7) main_location_t3

0x0002,

0xf4de,	// (0x0007200c) main_location_t

0xc144,	// (0x0006ec72) aid_levels_location

0xc3b7,	// (0x0006eee5) blid_accuracy_pane_g1

0xc3b7,	// (0x0006eee5) blid_accuracy_pane_g2

0x0001,

0xf20e,	// (0x00071d3c) blid_accuracy_pane_g

0xc7d7,	// (0x0006f305) wml_content_pane

0xc815,	// (0x0006f343) wml_button_pane_ParamLimits

0xc815,	// (0x0006f343) wml_button_pane

0x13c5,	// (0x00063ef3) wml_list_single_large_pane_ParamLimits

0x13c5,	// (0x00063ef3) wml_list_single_large_pane

0x13de,	// (0x00063f0c) wml_list_single_medium_pane_ParamLimits

0x13de,	// (0x00063f0c) wml_list_single_medium_pane

0x13f8,	// (0x00063f26) wml_list_single_small_pane_ParamLimits

0x13f8,	// (0x00063f26) wml_list_single_small_pane

0xc829,	// (0x0006f357) wml_selection_box_pane_ParamLimits

0xc829,	// (0x0006f357) wml_selection_box_pane

0xc83c,	// (0x0006f36a) wml_list_single_pane_t1

0xc84b,	// (0x0006f379) wml_list_single_medium_pane_t1

0xc85a,	// (0x0006f388) wml_list_single_large_pane_t1

0xc869,	// (0x0006f397) input_focus_pane_cp02_ParamLimits

0xc869,	// (0x0006f397) input_focus_pane_cp02

0xc87c,	// (0x0006f3aa) wml_selection_box_pane_g1

0xc885,	// (0x0006f3b3) wml_selection_box_pane_t1_ParamLimits

0xc885,	// (0x0006f3b3) wml_selection_box_pane_t1

0xc39f,	// (0x0006eecd) bg_wml_button_pane_ParamLimits

0xc39f,	// (0x0006eecd) bg_wml_button_pane

0xc89d,	// (0x0006f3cb) wml_button_pane_g1

0xc8a5,	// (0x0006f3d3) wml_button_pane_t1

0xc89d,	// (0x0006f3cb) wml_button_bg_pane_g1

0xc8b5,	// (0x0006f3e3) wml_button_bg_pane_g2

0xc8bd,	// (0x0006f3eb) wml_button_bg_pane_g3

0xc8c5,	// (0x0006f3f3) wml_button_bg_pane_g4

0xc8cd,	// (0x0006f3fb) wml_button_bg_pane_g5

0xc8d5,	// (0x0006f403) wml_button_bg_pane_g6

0xc8dd,	// (0x0006f40b) wml_button_bg_pane_g7

0xc8e5,	// (0x0006f413) wml_button_bg_pane_g8

0xc8ed,	// (0x0006f41b) wml_button_bg_pane_g9

0x0008,

0xf1c4,	// (0x00071cf2) wml_button_bg_pane_g

0x1414,	// (0x00063f42) bg_list_pane_cp02

0xc8f5,	// (0x0006f423) mce_header_pane_ParamLimits

0xc8f5,	// (0x0006f423) mce_header_pane

0xc90b,	// (0x0006f439) mce_icon_pane

0xc90b,	// (0x0006f439) mce_image_pane

0xc914,	// (0x0006f442) mce_text_pane_ParamLimits

0xc914,	// (0x0006f442) mce_text_pane

0x141e,	// (0x00063f4c) scroll_pane_cp03

0xc80d,	// (0x0006f33b) scroll_pane_cp04

0xc927,	// (0x0006f455) scroll_pane_cp05_ParamLimits

0xc927,	// (0x0006f455) scroll_pane_cp05

0x1428,	// (0x00063f56) mce_header_field_pane_ParamLimits

0x1428,	// (0x00063f56) mce_header_field_pane

0x1441,	// (0x00063f6f) mce_header_field_pane_2_ParamLimits

0x1441,	// (0x00063f6f) mce_header_field_pane_2

0x1457,	// (0x00063f85) mce_header_field_pane_3

0x145f,	// (0x00063f8d) list_single_mce_message_pane_ParamLimits

0x145f,	// (0x00063f8d) list_single_mce_message_pane

0x147b,	// (0x00063fa9) list_single_mce_smart_pane_ParamLimits

0x147b,	// (0x00063fa9) list_single_mce_smart_pane

0xc933,	// (0x0006f461) input_focus_pane_cp03

0xc93c,	// (0x0006f46a) list_header_data_pane

0x14a2,	// (0x00063fd0) mce_header_field_pane_t1

0x14b2,	// (0x00063fe0) list_single_mce_header_pane_ParamLimits

0x14b2,	// (0x00063fe0) list_single_mce_header_pane

0xc944,	// (0x0006f472) list_single_mce_header_pane_t1

0xc953,	// (0x0006f481) list_single_mce_message_pane_g1

0xc95b,	// (0x0006f489) list_single_mce_message_pane_t1

0x14ec,	// (0x0006401a) bg_cale_heading_pane_cp01_ParamLimits

0x14ec,	// (0x0006401a) bg_cale_heading_pane_cp01

0xc969,	// (0x0006f497) bg_cale_pane_cp02_ParamLimits

0xc969,	// (0x0006f497) bg_cale_pane_cp02

0x153e,	// (0x0006406c) cale_month_corner_pane

0x155d,	// (0x0006408b) cale_month_day_heading_pane_ParamLimits

0x155d,	// (0x0006408b) cale_month_day_heading_pane

0x15c7,	// (0x000640f5) cale_month_pane_g1_ParamLimits

0x15c7,	// (0x000640f5) cale_month_pane_g1

0x160e,	// (0x0006413c) cale_month_pane_g2_ParamLimits

0x160e,	// (0x0006413c) cale_month_pane_g2

0x164a,	// (0x00064178) cale_month_pane_g3_ParamLimits

0x164a,	// (0x00064178) cale_month_pane_g3

0x169e,	// (0x000641cc) cale_month_pane_g4_ParamLimits

0x169e,	// (0x000641cc) cale_month_pane_g4

0x16f2,	// (0x00064220) cale_month_pane_g5_ParamLimits

0x16f2,	// (0x00064220) cale_month_pane_g5

0x174e,	// (0x0006427c) cale_month_pane_g6_ParamLimits

0x174e,	// (0x0006427c) cale_month_pane_g6

0x17b2,	// (0x000642e0) cale_month_pane_g7_ParamLimits

0x17b2,	// (0x000642e0) cale_month_pane_g7

0x181a,	// (0x00064348) cale_month_pane_g8_ParamLimits

0x181a,	// (0x00064348) cale_month_pane_g8

0x1886,	// (0x000643b4) cale_month_pane_g9_ParamLimits

0x1886,	// (0x000643b4) cale_month_pane_g9

0x18ea,	// (0x00064418) cale_month_pane_g10_ParamLimits

0x18ea,	// (0x00064418) cale_month_pane_g10

0x193c,	// (0x0006446a) cale_month_pane_g11_ParamLimits

0x193c,	// (0x0006446a) cale_month_pane_g11

0x198e,	// (0x000644bc) cale_month_pane_g12_ParamLimits

0x198e,	// (0x000644bc) cale_month_pane_g12

0x19e6,	// (0x00064514) cale_month_pane_g13_ParamLimits

0x19e6,	// (0x00064514) cale_month_pane_g13

0x000c,

0xf1d7,	// (0x00071d05) cale_month_pane_g_ParamLimits

0xf1d7,	// (0x00071d05) cale_month_pane_g

0x1a3e,	// (0x0006456c) cale_month_week_pane

0x1a62,	// (0x00064590) grid_cale_month_pane_ParamLimits

0x1a62,	// (0x00064590) grid_cale_month_pane

0x1ac3,	// (0x000645f1) cale_month_day_heading_pane_t1

0x1b49,	// (0x00064677) cale_month_day_heading_pane_t2

0x1bc2,	// (0x000646f0) cale_month_day_heading_pane_t3

0x1c3b,	// (0x00064769) cale_month_day_heading_pane_t4

0x1cbc,	// (0x000647ea) cale_month_day_heading_pane_t5

0x1d45,	// (0x00064873) cale_month_day_heading_pane_t6

0x1dce,	// (0x000648fc) cale_month_day_heading_pane_t7

0x0006,

0xf1f2,	// (0x00071d20) cale_month_day_heading_pane_t

0xc638,	// (0x0006f166) bg_cale_side_pane_cp01

0x1e5f,	// (0x0006498d) cale_month_week_pane_t1

0x1e78,	// (0x000649a6) cale_month_week_pane_t2

0x1e91,	// (0x000649bf) cale_month_week_pane_t3

0x1eaa,	// (0x000649d8) cale_month_week_pane_t4

0x1ec3,	// (0x000649f1) cale_month_week_pane_t5

0x1edc,	// (0x00064a0a) cale_month_week_pane_t6

0x0005,

0xf201,	// (0x00071d2f) cale_month_week_pane_t

0x1f01,	// (0x00064a2f) cell_cale_month_pane_ParamLimits

0x1f01,	// (0x00064a2f) cell_cale_month_pane

0xa4f4,	// (0x0006d022) cell_cale_month_pane_g1

0x2037,	// (0x00064b65) cell_cale_month_pane_t1_ParamLimits

0x2037,	// (0x00064b65) cell_cale_month_pane_t1

0xc646,	// (0x0006f174) grid_highlight_pane_cp08

0xc3b7,	// (0x0006eee5) main_smil_g1

0x2063,	// (0x00064b91) smil_status_pane

0xc9a8,	// (0x0006f4d6) smil_text_pane

0xc5e7,	// (0x0006f115) bg_popup_call3_rect_pane_g8

0xc5df,	// (0x0006f10d) bg_popup_call3_rect_pane_g9

0x0008,

0xf213,	// (0x00071d41) bg_popup_call3_rect_pane_g

0xe552,	// (0x00071080) smil_status_volume_pane_g1

0xc9b2,	// (0x0006f4e0) smil_status_pane_t1

0xa656,	// (0x0006d184) volume_smil_pane

0xc9c9,	// (0x0006f4f7) list_smil_text_pane

0x2078,	// (0x00064ba6) scroll_pane_cp011

0x2083,	// (0x00064bb1) smil_text_list_pane_t1_ParamLimits

0x2083,	// (0x00064bb1) smil_text_list_pane_t1

0xa500,	// (0x0006d02e) aid_volume_smil_ParamLimits

0xa500,	// (0x0006d02e) aid_volume_smil

0xc3b7,	// (0x0006eee5) smil_volume_pane_g1

0xc3b7,	// (0x0006eee5) smil_volume_pane_g2

0x0001,

0xf20e,	// (0x00071d3c) smil_volume_pane_g

0x20cf,	// (0x00064bfd) listscroll_cale_day_pane

0xc9dc,	// (0x0006f50a) bg_cale_pane

0xc9f4,	// (0x0006f522) list_cale_pane

0xca17,	// (0x0006f545) scroll_pane_cp09

0xc5b7,	// (0x0006f0e5) cale_bg_pane_g1

0xc5af,	// (0x0006f0dd) cale_bg_pane_g2

0xc5a7,	// (0x0006f0d5) cale_bg_pane_g3

0xc5c7,	// (0x0006f0f5) cale_bg_pane_g4

0xc5bf,	// (0x0006f0ed) cale_bg_pane_g5

0xc5cf,	// (0x0006f0fd) cale_bg_pane_g6

0xc5d7,	// (0x0006f105) cale_bg_pane_g7

0xc5e7,	// (0x0006f115) cale_bg_pane_g8

0xc5df,	// (0x0006f10d) cale_bg_pane_g9

0x0008,

0xf213,	// (0x00071d41) cale_bg_pane_g

0xca28,	// (0x0006f556) list_cale_time_pane_ParamLimits

0xca28,	// (0x0006f556) list_cale_time_pane

0xca3f,	// (0x0006f56d) list_cale_time_pane_g1_ParamLimits

0xca3f,	// (0x0006f56d) list_cale_time_pane_g1

0xca4b,	// (0x0006f579) list_cale_time_pane_g2_ParamLimits

0xca4b,	// (0x0006f579) list_cale_time_pane_g2

0x20e9,	// (0x00064c17) list_cale_time_pane_g3_ParamLimits

0x20e9,	// (0x00064c17) list_cale_time_pane_g3

0x20f7,	// (0x00064c25) list_cale_time_pane_g4_ParamLimits

0x20f7,	// (0x00064c25) list_cale_time_pane_g4

0x2105,	// (0x00064c33) list_cale_time_pane_g5_ParamLimits

0x2105,	// (0x00064c33) list_cale_time_pane_g5

0x0005,

0xf226,	// (0x00071d54) list_cale_time_pane_g_ParamLimits

0xf226,	// (0x00071d54) list_cale_time_pane_g

0xca65,	// (0x0006f593) list_cale_time_pane_t1_ParamLimits

0xca65,	// (0x0006f593) list_cale_time_pane_t1

0xca8d,	// (0x0006f5bb) list_cale_time_pane_t2_ParamLimits

0xca8d,	// (0x0006f5bb) list_cale_time_pane_t2

0x23b7,	// (0x00064ee5) aid_blid_cardinal_pane

0x23f5,	// (0x00064f23) compass_pane_t4

0xcab5,	// (0x0006f5e3) list_cale_time_pane_t4_ParamLimits

0xcab5,	// (0x0006f5e3) list_cale_time_pane_t4

0x2403,	// (0x00064f31) compass_pane_t5

0x2413,	// (0x00064f41) compass_pane_t6

0x2421,	// (0x00064f4f) compass_pane_t7

0xcef9,	// (0x0006fa27) navi_pane_cc_t1

0xd046,	// (0x0006fb74) aid_phob_thumbnail_center_pane

0x294c,	// (0x0006547a) main_postcard_pane_g4_ParamLimits

0x0002,

0xf233,	// (0x00071d61) list_cale_time_pane_t_ParamLimits

0xf233,	// (0x00071d61) list_cale_time_pane_t

0xa113,	// (0x0006cc41) bg_popup_window_pane_cp02_ParamLimits

0xa113,	// (0x0006cc41) bg_popup_window_pane_cp02

0xcadd,	// (0x0006f60b) heading_pane_cp01_ParamLimits

0xcadd,	// (0x0006f60b) heading_pane_cp01

0xcae9,	// (0x0006f617) loc_req_pane_ParamLimits

0xcae9,	// (0x0006f617) loc_req_pane

0xcafb,	// (0x0006f629) loc_type_pane_ParamLimits

0xcafb,	// (0x0006f629) loc_type_pane

0xcb0d,	// (0x0006f63b) loc_type_pane_t1_ParamLimits

0xcb0d,	// (0x0006f63b) loc_type_pane_t1

0xcb1f,	// (0x0006f64d) loc_type_pane_t2_ParamLimits

0xcb1f,	// (0x0006f64d) loc_type_pane_t2

0xcb31,	// (0x0006f65f) loc_type_pane_t3_ParamLimits

0xcb31,	// (0x0006f65f) loc_type_pane_t3

0x0002,

0xf23a,	// (0x00071d68) loc_type_pane_t_ParamLimits

0xf23a,	// (0x00071d68) loc_type_pane_t

0xcb43,	// (0x0006f671) list_loc_req_pane

0xcb4d,	// (0x0006f67b) scroll_pane_cp012

0x2113,	// (0x00064c41) list_single_loc_request_popup_menu_pane_ParamLimits

0x2113,	// (0x00064c41) list_single_loc_request_popup_menu_pane

0xcb58,	// (0x0006f686) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xcb58,	// (0x0006f686) list_single_loc_request_popup_menu_pane_g1

0xcb64,	// (0x0006f692) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xcb64,	// (0x0006f692) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf241,	// (0x00071d6f) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf241,	// (0x00071d6f) list_single_loc_request_popup_menu_pane_g

0xcb70,	// (0x0006f69e) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xcb70,	// (0x0006f69e) list_single_loc_request_popup_menu_pane_t1

0xc39f,	// (0x0006eecd) bg_popup_window_pane_cp03_ParamLimits

0xc39f,	// (0x0006eecd) bg_popup_window_pane_cp03

0xccf1,	// (0x0006f81f) heading_loc_req_pane_ParamLimits

0xccf1,	// (0x0006f81f) heading_loc_req_pane

0x2120,	// (0x00064c4e) popup_dyc_status_message_window_g1_ParamLimits

0x2120,	// (0x00064c4e) popup_dyc_status_message_window_g1

0x2134,	// (0x00064c62) popup_dyc_status_message_window_t1_ParamLimits

0x2134,	// (0x00064c62) popup_dyc_status_message_window_t1

0x2149,	// (0x00064c77) popup_dyc_status_message_window_t2_ParamLimits

0x2149,	// (0x00064c77) popup_dyc_status_message_window_t2

0x215e,	// (0x00064c8c) popup_dyc_status_message_window_t3_ParamLimits

0x215e,	// (0x00064c8c) popup_dyc_status_message_window_t3

0x0002,

0xf246,	// (0x00071d74) popup_dyc_status_message_window_t_ParamLimits

0xf246,	// (0x00071d74) popup_dyc_status_message_window_t

0xc144,	// (0x0006ec72) bg_heading_pane_cp01

0xcb86,	// (0x0006f6b4) heading_loc_req_pane_g1

0xcb8e,	// (0x0006f6bc) heading_loc_req_pane_g2

0xcb96,	// (0x0006f6c4) heading_loc_req_pane_g3

0x0002,

0xf24d,	// (0x00071d7b) heading_loc_req_pane_g

0xcb9e,	// (0x0006f6cc) heading_loc_req_pane_t1

0xcbbe,	// (0x0006f6ec) bg_popup_sub_pane_cp01_ParamLimits

0xcbbe,	// (0x0006f6ec) bg_popup_sub_pane_cp01

0xcbcc,	// (0x0006f6fa) popup_cale_events_window_g1_ParamLimits

0xcbcc,	// (0x0006f6fa) popup_cale_events_window_g1

0xcbec,	// (0x0006f71a) popup_cale_events_window_g2_ParamLimits

0xcbec,	// (0x0006f71a) popup_cale_events_window_g2

0x0001,

0xf26f,	// (0x00071d9d) popup_cale_events_window_g_ParamLimits

0xf26f,	// (0x00071d9d) popup_cale_events_window_g

0xcc0c,	// (0x0006f73a) popup_cale_events_window_t1_ParamLimits

0xcc0c,	// (0x0006f73a) popup_cale_events_window_t1

0xcc1e,	// (0x0006f74c) popup_cale_events_window_t2_ParamLimits

0xcc1e,	// (0x0006f74c) popup_cale_events_window_t2

0xcc5c,	// (0x0006f78a) popup_cale_events_window_t3_ParamLimits

0xcc5c,	// (0x0006f78a) popup_cale_events_window_t3

0xcc96,	// (0x0006f7c4) popup_cale_events_window_t4_ParamLimits

0xcc96,	// (0x0006f7c4) popup_cale_events_window_t4

0x0003,

0xf274,	// (0x00071da2) popup_cale_events_window_t_ParamLimits

0xf274,	// (0x00071da2) popup_cale_events_window_t

0x2186,	// (0x00064cb4) call_type_pane

0x2196,	// (0x00064cc4) popup_call_status_window_g1

0x21aa,	// (0x00064cd8) popup_call_status_window_g2

0x21be,	// (0x00064cec) popup_call_status_window_g3

0x0002,

0xf27d,	// (0x00071dab) popup_call_status_window_g

0xccfd,	// (0x0006f82b) call_type_pane_g1

0xcd06,	// (0x0006f834) call_type_pane_g2

0x0001,

0xf284,	// (0x00071db2) call_type_pane_g

0xc144,	// (0x0006ec72) bg_popup_sub_pane_cp02

0xcd0f,	// (0x0006f83d) listscroll_popup_wml_pane

0xcd17,	// (0x0006f845) list_wml_pane

0xcd21,	// (0x0006f84f) scroll_pane_cp013

0xcd2c,	// (0x0006f85a) list_single_graphic_popup_wml_pane_ParamLimits

0xcd2c,	// (0x0006f85a) list_single_graphic_popup_wml_pane

0xc3b7,	// (0x0006eee5) list_single_graphic_popup_wml_pane_g1

0xcd40,	// (0x0006f86e) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf289,	// (0x00071db7) list_single_graphic_popup_wml_pane_g

0xcd48,	// (0x0006f876) list_single_graphic_popup_wml_pane_t1

0xcd5e,	// (0x0006f88c) aid_call_pane

0xc397,	// (0x0006eec5) popup_clock_analogue_window_g1

0xc397,	// (0x0006eec5) popup_clock_analogue_window_g2

0xa52e,	// (0x0006d05c) popup_clock_analogue_window_g3

0xa52e,	// (0x0006d05c) popup_clock_analogue_window_g4

0xc3b7,	// (0x0006eee5) popup_clock_analogue_window_g5

0x0004,

0xf28e,	// (0x00071dbc) popup_clock_analogue_window_g

0xa536,	// (0x0006d064) popup_clock_analogue_window_t1

0xa544,	// (0x0006d072) clock_digital_number_pane_ParamLimits

0xa544,	// (0x0006d072) clock_digital_number_pane

0xa550,	// (0x0006d07e) clock_digital_number_pane_cp02_ParamLimits

0xa550,	// (0x0006d07e) clock_digital_number_pane_cp02

0xa55c,	// (0x0006d08a) clock_digital_number_pane_cp03_ParamLimits

0xa55c,	// (0x0006d08a) clock_digital_number_pane_cp03

0xa568,	// (0x0006d096) clock_digital_number_pane_cp04_ParamLimits

0xa568,	// (0x0006d096) clock_digital_number_pane_cp04

0xa574,	// (0x0006d0a2) clock_digital_separator_pane_ParamLimits

0xa574,	// (0x0006d0a2) clock_digital_separator_pane

0xa580,	// (0x0006d0ae) popup_clock_digital_window_t1

0xc3b7,	// (0x0006eee5) clock_digital_number_pane_g1

0xc3b7,	// (0x0006eee5) clock_digital_number_pane_g2

0x0001,

0xf20e,	// (0x00071d3c) clock_digital_number_pane_g

0xc3b7,	// (0x0006eee5) clock_digital_separator_pane_g1

0xc3b7,	// (0x0006eee5) clock_digital_separator_pane_g2

0x0001,

0xf20e,	// (0x00071d3c) clock_digital_separator_pane_g

0xc144,	// (0x0006ec72) bg_popup_window_pane_cp04

0xcd66,	// (0x0006f894) heading_pane_cp03

0xc693,	// (0x0006f1c1) listscroll_popup_gms_pane

0xc144,	// (0x0006ec72) grid_large_graphic_popup_pane

0xcd6e,	// (0x0006f89c) listscroll_popup_gms_pane_g1

0xcd77,	// (0x0006f8a5) listscroll_popup_gms_pane_g2

0x0001,

0xf299,	// (0x00071dc7) listscroll_popup_gms_pane_g

0xcd80,	// (0x0006f8ae) scroll_pane_cp014

0xc40c,	// (0x0006ef3a) cell_large_graphic_popup_pane_ParamLimits

0xc40c,	// (0x0006ef3a) cell_large_graphic_popup_pane

0xc41a,	// (0x0006ef48) cell_large_graphic_popup_pane_g1_ParamLimits

0xc41a,	// (0x0006ef48) cell_large_graphic_popup_pane_g1

0xcd89,	// (0x0006f8b7) cell_large_graphic_popup_pane_g2_ParamLimits

0xcd89,	// (0x0006f8b7) cell_large_graphic_popup_pane_g2

0xcd97,	// (0x0006f8c5) cell_large_graphic_popup_pane_g3_ParamLimits

0xcd97,	// (0x0006f8c5) cell_large_graphic_popup_pane_g3

0xcda5,	// (0x0006f8d3) cell_large_graphic_popup_pane_g4_ParamLimits

0xcda5,	// (0x0006f8d3) cell_large_graphic_popup_pane_g4

0x0003,

0xf29e,	// (0x00071dcc) cell_large_graphic_popup_pane_g_ParamLimits

0xf29e,	// (0x00071dcc) cell_large_graphic_popup_pane_g

0xc144,	// (0x0006ec72) grid_highlight_pane_cp010

0xc3b7,	// (0x0006eee5) bg_popup_call_pane_g1

0xcdb6,	// (0x0006f8e4) list_single_graphic_popup_conf_pane_ParamLimits

0xcdb6,	// (0x0006f8e4) list_single_graphic_popup_conf_pane

0xcdc8,	// (0x0006f8f6) list_highlight_pane_cp01

0xcdd1,	// (0x0006f8ff) list_single_graphic_popup_conf_pane_g1

0xcdd9,	// (0x0006f907) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf2a7,	// (0x00071dd5) list_single_graphic_popup_conf_pane_g

0xcde1,	// (0x0006f90f) list_single_graphic_popup_conf_pane_t1

0xcdef,	// (0x0006f91d) linegrid_cams_pane_g1

0x21ce,	// (0x00064cfc) linegrid_cams_pane_g2

0xc679,	// (0x0006f1a7) linegrid_cams_pane_g3

0xcdf8,	// (0x0006f926) linegrid_cams_pane_g4

0x21d7,	// (0x00064d05) linegrid_cams_pane_g5

0x21e0,	// (0x00064d0e) linegrid_cams_pane_g6

0xc682,	// (0x0006f1b0) linegrid_cams_pane_g7

0x0006,

0xf2ac,	// (0x00071dda) linegrid_cams_pane_g

0xce01,	// (0x0006f92f) popup_clock_analogue_window

0xce01,	// (0x0006f92f) popup_clock_digital_window

0xc144,	// (0x0006ec72) popup_phob_thumbnail_window

0xc3b7,	// (0x0006eee5) call_video_uplink_pane_g1

0xce0a,	// (0x0006f938) call_video_uplink_pane_g2

0x0001,

0xf2bb,	// (0x00071de9) call_video_uplink_pane_g

0xce12,	// (0x0006f940) video_uplink_pane

0xce1a,	// (0x0006f948) mce_image_pane_g1

0x21eb,	// (0x00064d19) mce_image_pane_g2

0x21f5,	// (0x00064d23) mce_image_pane_g3

0x21ff,	// (0x00064d2d) mce_image_pane_g4

0x2207,	// (0x00064d35) mce_image_pane_g5

0x0004,

0xf2c0,	// (0x00071dee) mce_image_pane_g

0xce24,	// (0x0006f952) control_top_pane_stacon_cp01_ParamLimits

0xce24,	// (0x0006f952) control_top_pane_stacon_cp01

0xce38,	// (0x0006f966) uni_indicator_pane_stacon_cp01_ParamLimits

0xce38,	// (0x0006f966) uni_indicator_pane_stacon_cp01

0xce49,	// (0x0006f977) bg_popup_sub_pane_cp03

0x220f,	// (0x00064d3d) chi_dic_find_pane

0x2217,	// (0x00064d45) listscroll_chi_dic_pane

0x2220,	// (0x00064d4e) main_pane_chidic_g1

0x2233,	// (0x00064d61) chi_dic_find_pane_t1

0xce53,	// (0x0006f981) find_chidic_pane

0xce5c,	// (0x0006f98a) chi_dic_list_pane_ParamLimits

0xce5c,	// (0x0006f98a) chi_dic_list_pane

0xce6d,	// (0x0006f99b) scroll_pane_cp020

0x2241,	// (0x00064d6f) find_chidic_pane_t1

0xc144,	// (0x0006ec72) input_focus_pane_cp06

0x2250,	// (0x00064d7e) list_chi_dic_pane_ParamLimits

0x2250,	// (0x00064d7e) list_chi_dic_pane

0x2262,	// (0x00064d90) list_chi_dic_pane_t1_ParamLimits

0x2262,	// (0x00064d90) list_chi_dic_pane_t1

0xc144,	// (0x0006ec72) list_highlight_pane_cp020

0xce75,	// (0x0006f9a3) bg_cale_heading_pane_g1

0x2275,	// (0x00064da3) bg_cale_heading_pane_g2

0x227d,	// (0x00064dab) bg_cale_heading_pane_g3

0x2285,	// (0x00064db3) bg_cale_heading_pane_g4

0x228f,	// (0x00064dbd) bg_cale_heading_pane_g5

0x2299,	// (0x00064dc7) bg_cale_heading_pane_g6

0x22a1,	// (0x00064dcf) bg_cale_heading_pane_g7

0x22a9,	// (0x00064dd7) bg_cale_heading_pane_g8

0x22b3,	// (0x00064de1) bg_cale_heading_pane_g9

0x0008,

0xf2cb,	// (0x00071df9) bg_cale_heading_pane_g

0xce75,	// (0x0006f9a3) bg_cale_side_pane_g1

0x22bd,	// (0x00064deb) bg_cale_side_pane_g2

0x22c7,	// (0x00064df5) bg_cale_side_pane_g3

0x22d1,	// (0x00064dff) bg_cale_side_pane_g4

0x22db,	// (0x00064e09) bg_cale_side_pane_g5

0x22e5,	// (0x00064e13) bg_cale_side_pane_g6

0x22ef,	// (0x00064e1d) bg_cale_side_pane_g7

0x22f9,	// (0x00064e27) bg_cale_side_pane_g8

0x2301,	// (0x00064e2f) bg_cale_side_pane_g9

0x0008,

0xf2de,	// (0x00071e0c) bg_cale_side_pane_g

0x2309,	// (0x00064e37) popup_call_status_window_ParamLimits

0x2309,	// (0x00064e37) popup_call_status_window

0xce7d,	// (0x0006f9ab) stacon_top_pane

0xce85,	// (0x0006f9b3) status_pane_ParamLimits

0xce85,	// (0x0006f9b3) status_pane

0xce9a,	// (0x0006f9c8) status_small_pane

0xcea2,	// (0x0006f9d0) control_pane

0xc144,	// (0x0006ec72) stacon_bottom_pane

0xceaa,	// (0x0006f9d8) list_single_mce_smart_pane_t1_ParamLimits

0xceaa,	// (0x0006f9d8) list_single_mce_smart_pane_t1

0xcebd,	// (0x0006f9eb) list_single_mce_smart_pane_t2_ParamLimits

0xcebd,	// (0x0006f9eb) list_single_mce_smart_pane_t2

0x0001,

0xf2f1,	// (0x00071e1f) list_single_mce_smart_pane_t_ParamLimits

0xf2f1,	// (0x00071e1f) list_single_mce_smart_pane_t

0x2356,	// (0x00064e84) compass_pane

0x2361,	// (0x00064e8f) main_location2_pane_t1

0x2377,	// (0x00064ea5) main_location2_pane_t2

0x238d,	// (0x00064ebb) main_location2_pane_t3

0x0003,

0xf2f6,	// (0x00071e24) main_location2_pane_t

0xcedc,	// (0x0006fa0a) compass_pane_g1_ParamLimits

0xcedc,	// (0x0006fa0a) compass_pane_g1

0x23d7,	// (0x00064f05) compass_pane_t1

0x23e6,	// (0x00064f14) compass_pane_t2

0x0005,

0xf2ff,	// (0x00071e2d) compass_pane_t

0x2431,	// (0x00064f5f) text_secondary_cp61

0xcef0,	// (0x0006fa1e) navi_pane_cams_g5

0xcf13,	// (0x0006fa41) navi_pane_im_t1

0xcf21,	// (0x0006fa4f) navi_pane_mp_g1_ParamLimits

0xcf21,	// (0x0006fa4f) navi_pane_mp_g1

0xcf35,	// (0x0006fa63) navi_pane_mp_g2_ParamLimits

0xcf35,	// (0x0006fa63) navi_pane_mp_g2

0xcf41,	// (0x0006fa6f) navi_pane_mp_g3_ParamLimits

0xcf41,	// (0x0006fa6f) navi_pane_mp_g3

0x0002,

0xf313,	// (0x00071e41) navi_pane_mp_g_ParamLimits

0xf313,	// (0x00071e41) navi_pane_mp_g

0xcf4d,	// (0x0006fa7b) navi_pane_mp_t1

0xcf5b,	// (0x0006fa89) navi_pane_mp_t2

0x0002,

0xf31a,	// (0x00071e48) navi_pane_mp_t

0xcf97,	// (0x0006fac5) navi_pane_vt_g1

0xcf4d,	// (0x0006fa7b) navi_pane_vt_t1

0xcf9f,	// (0x0006facd) navi_slider_pane

0xc693,	// (0x0006f1c1) zooming_pane

0xcfa7,	// (0x0006fad5) navi_slider_pane_g1

0xa59d,	// (0x0006d0cb) navi_slider_pane_g2

0x0006,

0xf321,	// (0x00071e4f) navi_slider_pane_g

0xcfcb,	// (0x0006faf9) aid_levels_zoom

0xcfd3,	// (0x0006fb01) zooming_pane_g1

0xcfdb,	// (0x0006fb09) zooming_pane_g2

0xcfdb,	// (0x0006fb09) zooming_pane_g3

0x0002,

0xf330,	// (0x00071e5e) zooming_pane_g

0xcfe3,	// (0x0006fb11) level_10_zoom

0xcfec,	// (0x0006fb1a) level_11_zoom

0xcff5,	// (0x0006fb23) level_1_zoom

0xcffe,	// (0x0006fb2c) level_2_zoom

0xd007,	// (0x0006fb35) level_3_zoom

0xd010,	// (0x0006fb3e) level_4_zoom

0xd019,	// (0x0006fb47) level_5_zoom

0xd022,	// (0x0006fb50) level_6_zoom

0xd02b,	// (0x0006fb59) level_7_zoom

0xd034,	// (0x0006fb62) level_8_zoom

0xd03d,	// (0x0006fb6b) level_9_zoom

0xd04e,	// (0x0006fb7c) popup_phob_thumbnail_window_g1

0xd056,	// (0x0006fb84) popup_phob_thumbnail_window_g2

0x0001,

0xf337,	// (0x00071e65) popup_phob_thumbnail_window_g

0x2f96,	// (0x00065ac4) level_1_location

0x2f9e,	// (0x00065acc) level_2_location

0x2fa6,	// (0x00065ad4) level_3_location

0x2fb0,	// (0x00065ade) level_4_location

0xc693,	// (0x0006f1c1) level_5_location

0x257a,	// (0x000650a8) mce_icon_pane_g1

0x2584,	// (0x000650b2) mce_icon_pane_g2

0x0001,

0xf33c,	// (0x00071e6a) mce_icon_pane_g

0xd05e,	// (0x0006fb8c) main_mup_pane_g1_ParamLimits

0xd05e,	// (0x0006fb8c) main_mup_pane_g1

0xd05e,	// (0x0006fb8c) main_mup_pane_g2_ParamLimits

0xd05e,	// (0x0006fb8c) main_mup_pane_g2

0xd05e,	// (0x0006fb8c) main_mup_pane_g3_ParamLimits

0xd05e,	// (0x0006fb8c) main_mup_pane_g3

0xd05e,	// (0x0006fb8c) main_mup_pane_g4_ParamLimits

0xd05e,	// (0x0006fb8c) main_mup_pane_g4

0xd05e,	// (0x0006fb8c) main_mup_pane_g5_ParamLimits

0xd05e,	// (0x0006fb8c) main_mup_pane_g5

0xd05e,	// (0x0006fb8c) main_mup_pane_g6_ParamLimits

0xd05e,	// (0x0006fb8c) main_mup_pane_g6

0xd05e,	// (0x0006fb8c) main_mup_pane_g7_ParamLimits

0xd05e,	// (0x0006fb8c) main_mup_pane_g7

0xd05e,	// (0x0006fb8c) main_mup_pane_g8_ParamLimits

0xd05e,	// (0x0006fb8c) main_mup_pane_g8

0xd05e,	// (0x0006fb8c) main_mup_pane_g9_ParamLimits

0xd05e,	// (0x0006fb8c) main_mup_pane_g9

0xd05e,	// (0x0006fb8c) main_mup_pane_g10_ParamLimits

0xd05e,	// (0x0006fb8c) main_mup_pane_g10

0xd05e,	// (0x0006fb8c) main_mup_pane_g11_ParamLimits

0xd05e,	// (0x0006fb8c) main_mup_pane_g11

0xc41a,	// (0x0006ef48) main_mup_pane_g12_ParamLimits

0xc41a,	// (0x0006ef48) main_mup_pane_g12

0xd05e,	// (0x0006fb8c) main_mup_pane_g13_ParamLimits

0xd05e,	// (0x0006fb8c) main_mup_pane_g13

0x000c,

0xf341,	// (0x00071e6f) main_mup_pane_g_ParamLimits

0xf341,	// (0x00071e6f) main_mup_pane_g

0xd06c,	// (0x0006fb9a) main_mup_pane_t1_ParamLimits

0xd06c,	// (0x0006fb9a) main_mup_pane_t1

0xd06c,	// (0x0006fb9a) main_mup_pane_t2_ParamLimits

0xd06c,	// (0x0006fb9a) main_mup_pane_t2

0xd06c,	// (0x0006fb9a) main_mup_pane_t3_ParamLimits

0xd06c,	// (0x0006fb9a) main_mup_pane_t3

0xc462,	// (0x0006ef90) main_mup_pane_t4_ParamLimits

0xc462,	// (0x0006ef90) main_mup_pane_t4

0xc462,	// (0x0006ef90) main_mup_pane_t5_ParamLimits

0xc462,	// (0x0006ef90) main_mup_pane_t5

0xc476,	// (0x0006efa4) main_mup_pane_t6_ParamLimits

0xc476,	// (0x0006efa4) main_mup_pane_t6

0x0005,

0xf35c,	// (0x00071e8a) main_mup_pane_t_ParamLimits

0xf35c,	// (0x00071e8a) main_mup_pane_t

0xc40c,	// (0x0006ef3a) mup_progress_pane_ParamLimits

0xc40c,	// (0x0006ef3a) mup_progress_pane

0xd080,	// (0x0006fbae) mup_visualizer_pane_ParamLimits

0xd080,	// (0x0006fbae) mup_visualizer_pane

0xd080,	// (0x0006fbae) mup_volume_pane_ParamLimits

0xd080,	// (0x0006fbae) mup_volume_pane

0xc428,	// (0x0006ef56) mup_visualizer_pane_g1_ParamLimits

0xc428,	// (0x0006ef56) mup_visualizer_pane_g1

0xd08e,	// (0x0006fbbc) mup_visualizer_pane_g2_ParamLimits

0xd08e,	// (0x0006fbbc) mup_visualizer_pane_g2

0xc41a,	// (0x0006ef48) mup_visualizer_pane_g3_ParamLimits

0xc41a,	// (0x0006ef48) mup_visualizer_pane_g3

0x0002,

0xf369,	// (0x00071e97) mup_visualizer_pane_g_ParamLimits

0xf369,	// (0x00071e97) mup_visualizer_pane_g

0xc458,	// (0x0006ef86) mup_volume_pane_g1

0xc458,	// (0x0006ef86) mup_volume_pane_g2

0x0001,

0xf08c,	// (0x00071bba) mup_volume_pane_g

0xc458,	// (0x0006ef86) mup_progress_pane_g1

0xc458,	// (0x0006ef86) mup_progress_pane_g2

0xc458,	// (0x0006ef86) mup_progress_pane_g3

0x0002,

0xf370,	// (0x00071e9e) mup_progress_pane_g

0xc144,	// (0x0006ec72) bg_popup_window_pane_cp05

0xd09c,	// (0x0006fbca) heading_pane_cp02_ParamLimits

0xd09c,	// (0x0006fbca) heading_pane_cp02

0xd0b8,	// (0x0006fbe6) list_popup_blid_pane

0xd0c0,	// (0x0006fbee) list_blid_sat_info_pane_ParamLimits

0xd0c0,	// (0x0006fbee) list_blid_sat_info_pane

0xd0d3,	// (0x0006fc01) list_blid_sat_info_pane_g1

0xd0db,	// (0x0006fc09) list_blid_sat_info_pane_t1

0x2698,	// (0x000651c6) mup_equalizer_pane_ParamLimits

0x2698,	// (0x000651c6) mup_equalizer_pane

0x26b9,	// (0x000651e7) mup_equalizer_pane_cp1_ParamLimits

0x26b9,	// (0x000651e7) mup_equalizer_pane_cp1

0x26da,	// (0x00065208) mup_equalizer_pane_cp2_ParamLimits

0x26da,	// (0x00065208) mup_equalizer_pane_cp2

0x26ff,	// (0x0006522d) mup_equalizer_pane_cp3_ParamLimits

0x26ff,	// (0x0006522d) mup_equalizer_pane_cp3

0x2728,	// (0x00065256) mup_equalizer_pane_cp4_ParamLimits

0x2728,	// (0x00065256) mup_equalizer_pane_cp4

0x2751,	// (0x0006527f) mup_equalizer_pane_cp5

0x2769,	// (0x00065297) mup_equalizer_pane_cp6

0x2781,	// (0x000652af) mup_equalizer_pane_cp7

0xe427,	// (0x00070f55) bg_popup_call_poc_act_pane_g9

0xe42f,	// (0x00070f5d) bg_popup_call_poc_act_pane_g10

0xe437,	// (0x00070f65) bg_popup_call_poc_act_pane_g11

0x000a,

0xc39f,	// (0x0006eecd) mup_scale_pane

0xc3b7,	// (0x0006eee5) mup_scale_pane_g1

0xd0e9,	// (0x0006fc17) mup_scale_pane_g2

0x0006,

0xf38c,	// (0x00071eba) mup_scale_pane_g

0xd10d,	// (0x0006fc3b) msg_data_pane

0xd115,	// (0x0006fc43) scroll_pane_cp017

0x27ab,	// (0x000652d9) bg_list_pane_cp04_ParamLimits

0x27ab,	// (0x000652d9) bg_list_pane_cp04

0xd125,	// (0x0006fc53) msg_data_pane_g1

0x27c9,	// (0x000652f7) msg_data_pane_g2

0x27d3,	// (0x00065301) msg_data_pane_g3

0x27dd,	// (0x0006530b) msg_data_pane_g4

0x27e5,	// (0x00065313) msg_data_pane_g5

0x27ed,	// (0x0006531b) msg_data_pane_g6

0x27f5,	// (0x00065323) msg_data_pane_g7

0x0006,

0xf39b,	// (0x00071ec9) msg_data_pane_g

0x27fd,	// (0x0006532b) msg_text_pane_ParamLimits

0x27fd,	// (0x0006532b) msg_text_pane

0x2842,	// (0x00065370) qrid_highlight_pane_cp011_ParamLimits

0x2842,	// (0x00065370) qrid_highlight_pane_cp011

0xc144,	// (0x0006ec72) msg_body_pane

0xc39f,	// (0x0006eecd) msg_header_pane

0xd141,	// (0x0006fc6f) input_focus_pane_cp07

0xd162,	// (0x0006fc90) msg_header_pane_t1_ParamLimits

0xd162,	// (0x0006fc90) msg_header_pane_t1

0xd17e,	// (0x0006fcac) msg_header_pane_t2_ParamLimits

0xd17e,	// (0x0006fcac) msg_header_pane_t2

0x0001,

0xf3af,	// (0x00071edd) msg_header_pane_t_ParamLimits

0xf3af,	// (0x00071edd) msg_header_pane_t

0xd19e,	// (0x0006fccc) msg_body_pane_g1

0xd1a6,	// (0x0006fcd4) msg_body_pane_t1_ParamLimits

0xd1a6,	// (0x0006fcd4) msg_body_pane_t1

0xd1d7,	// (0x0006fd05) msg_body_pane_t2_ParamLimits

0xd1d7,	// (0x0006fd05) msg_body_pane_t2

0xd1e9,	// (0x0006fd17) msg_body_pane_t3_ParamLimits

0xd1e9,	// (0x0006fd17) msg_body_pane_t3

0x0002,

0xf3b4,	// (0x00071ee2) msg_body_pane_t_ParamLimits

0xf3b4,	// (0x00071ee2) msg_body_pane_t

0x28a0,	// (0x000653ce) main_viewer_pane_g1_ParamLimits

0x28a0,	// (0x000653ce) main_viewer_pane_g1

0x28ae,	// (0x000653dc) main_viewer_pane_g2_ParamLimits

0x28ae,	// (0x000653dc) main_viewer_pane_g2

0x28bc,	// (0x000653ea) main_viewer_pane_g3_ParamLimits

0x28bc,	// (0x000653ea) main_viewer_pane_g3

0x28cb,	// (0x000653f9) main_viewer_pane_g4_ParamLimits

0x28cb,	// (0x000653f9) main_viewer_pane_g4

0xa5c7,	// (0x0006d0f5) main_viewer_pane_g5_ParamLimits

0xa5c7,	// (0x0006d0f5) main_viewer_pane_g5

0xa5c7,	// (0x0006d0f5) main_viewer_pane_g7_ParamLimits

0xa5c7,	// (0x0006d0f5) main_viewer_pane_g7

0xa5d9,	// (0x0006d107) main_viewer_pane_g8_ParamLimits

0xa5d9,	// (0x0006d107) main_viewer_pane_g8

0x0007,

0xf3c4,	// (0x00071ef2) main_viewer_pane_g_ParamLimits

0xf3c4,	// (0x00071ef2) main_viewer_pane_g

0xd1fb,	// (0x0006fd29) viewer_content_pane_ParamLimits

0xd1fb,	// (0x0006fd29) viewer_content_pane

0x2909,	// (0x00065437) main_postcard_pane_g1_ParamLimits

0x2909,	// (0x00065437) main_postcard_pane_g1

0x291f,	// (0x0006544d) main_postcard_pane_g2_ParamLimits

0x291f,	// (0x0006544d) main_postcard_pane_g2

0x2935,	// (0x00065463) main_postcard_pane_g3_ParamLimits

0x2935,	// (0x00065463) main_postcard_pane_g3

0x0005,

0xf3d5,	// (0x00071f03) main_postcard_pane_g_ParamLimits

0xf3d5,	// (0x00071f03) main_postcard_pane_g

0x294c,	// (0x0006547a) main_postcard_pane_g4

0xe565,	// (0x00071093) smil_status_volume_pane_g2

0x298f,	// (0x000654bd) postcard_pane_ParamLimits

0x298f,	// (0x000654bd) postcard_pane

0xd209,	// (0x0006fd37) postcard_pane_g1_ParamLimits

0xd209,	// (0x0006fd37) postcard_pane_g1

0x29df,	// (0x0006550d) postcard_pane_g2_ParamLimits

0x29df,	// (0x0006550d) postcard_pane_g2

0x29eb,	// (0x00065519) postcard_pane_g3_ParamLimits

0x29eb,	// (0x00065519) postcard_pane_g3

0xd217,	// (0x0006fd45) postcard_pane_g4_ParamLimits

0xd217,	// (0x0006fd45) postcard_pane_g4

0x29f7,	// (0x00065525) postcard_pane_g5_ParamLimits

0x29f7,	// (0x00065525) postcard_pane_g5

0x2a0c,	// (0x0006553a) postcard_pane_g6_ParamLimits

0x2a0c,	// (0x0006553a) postcard_pane_g6

0xd209,	// (0x0006fd37) postcard_pane_g7_ParamLimits

0xd209,	// (0x0006fd37) postcard_pane_g7

0x0006,

0xf3e2,	// (0x00071f10) postcard_pane_g_ParamLimits

0xf3e2,	// (0x00071f10) postcard_pane_g

0x2a24,	// (0x00065552) main_mp2_pane_g1_ParamLimits

0x2a24,	// (0x00065552) main_mp2_pane_g1

0x2a32,	// (0x00065560) main_mp2_pane_g2_ParamLimits

0x2a32,	// (0x00065560) main_mp2_pane_g2

0x2a3e,	// (0x0006556c) main_mp2_pane_g3_ParamLimits

0x2a3e,	// (0x0006556c) main_mp2_pane_g3

0x0002,

0xf3f1,	// (0x00071f1f) main_mp2_pane_g_ParamLimits

0xf3f1,	// (0x00071f1f) main_mp2_pane_g

0x2a4a,	// (0x00065578) main_mp2_pane_t1_ParamLimits

0x2a4a,	// (0x00065578) main_mp2_pane_t1

0x2a61,	// (0x0006558f) main_mp2_pane_t2_ParamLimits

0x2a61,	// (0x0006558f) main_mp2_pane_t2

0x2a73,	// (0x000655a1) main_mp2_pane_t3_ParamLimits

0x2a73,	// (0x000655a1) main_mp2_pane_t3

0x0002,

0xf3f8,	// (0x00071f26) main_mp2_pane_t_ParamLimits

0xf3f8,	// (0x00071f26) main_mp2_pane_t

0xa48d,	// (0x0006cfbb) pec_content_pane_ParamLimits

0xa48d,	// (0x0006cfbb) pec_content_pane

0x9fdf,	// (0x0006cb0d) scroll_pane_cp015

0xd080,	// (0x0006fbae) pec_attribute_pane_ParamLimits

0xd080,	// (0x0006fbae) pec_attribute_pane

0xc41a,	// (0x0006ef48) pec_content_pane_g1_ParamLimits

0xc41a,	// (0x0006ef48) pec_content_pane_g1

0xd225,	// (0x0006fd53) pec_content_pane_t1_ParamLimits

0xd225,	// (0x0006fd53) pec_content_pane_t1

0xd239,	// (0x0006fd67) pec_content_pane_t2_ParamLimits

0xd239,	// (0x0006fd67) pec_content_pane_t2

0x0001,

0xf3ff,	// (0x00071f2d) pec_content_pane_t_ParamLimits

0xf3ff,	// (0x00071f2d) pec_content_pane_t

0xc40c,	// (0x0006ef3a) list_single_graphic_pane_cp01_ParamLimits

0xc40c,	// (0x0006ef3a) list_single_graphic_pane_cp01

0xc39f,	// (0x0006eecd) bg_popup_sub_pane_cp04

0xd24d,	// (0x0006fd7b) popup_mup_playback_window_g1

0xd259,	// (0x0006fd87) popup_mup_playback_window_t1

0xd26e,	// (0x0006fd9c) popup_mup_playback_window_t2

0x0001,

0xf404,	// (0x00071f32) popup_mup_playback_window_t

0xd2a5,	// (0x0006fdd3) main_image_pane_g1_ParamLimits

0xd2a5,	// (0x0006fdd3) main_image_pane_g1

0xd2e8,	// (0x0006fe16) scroll_pane_cp018_ParamLimits

0xd2e8,	// (0x0006fe16) scroll_pane_cp018

0xd300,	// (0x0006fe2e) scroll_pane_cp016_ParamLimits

0xd300,	// (0x0006fe2e) scroll_pane_cp016

0x2b3d,	// (0x0006566b) smil2_image_pane_ParamLimits

0x2b3d,	// (0x0006566b) smil2_image_pane

0x2b73,	// (0x000656a1) smil2_root_pane_ParamLimits

0x2b73,	// (0x000656a1) smil2_root_pane

0x2bab,	// (0x000656d9) smil2_text_pane_ParamLimits

0x2bab,	// (0x000656d9) smil2_text_pane

0x9fdf,	// (0x0006cb0d) bg_list_pane_cp06

0x9fdf,	// (0x0006cb0d) grid_radio_pane

0xc144,	// (0x0006ec72) bg_popup_window_pane_cp06

0xcbae,	// (0x0006f6dc) main_fmradio_pane_t1

0xcd66,	// (0x0006f894) heading_pane_cp04

0xcbae,	// (0x0006f6dc) main_fmradio_pane_t2

0xe43f,	// (0x00070f6d) popup_cale_lunar_info_window_g1

0xcbae,	// (0x0006f6dc) main_fmradio_pane_t3

0xe447,	// (0x00070f75) popup_cale_lunar_info_window_g2

0xcbae,	// (0x0006f6dc) main_fmradio_pane_t4

0x0001,

0xcbae,	// (0x0006f6dc) main_fmradio_pane_t5

0x0004,

0xf4c1,	// (0x00071fef) popup_cale_lunar_info_window_g

0xf264,	// (0x00071d92) main_fmradio_pane_t

0x9fdf,	// (0x0006cb0d) wait_bar_pane_cp03

0xc40c,	// (0x0006ef3a) cell_fmradio_pane_ParamLimits

0xc40c,	// (0x0006ef3a) cell_fmradio_pane

0xc41a,	// (0x0006ef48) cell_fmradio_pane_g1_ParamLimits

0xc41a,	// (0x0006ef48) cell_fmradio_pane_g1

0x9fdf,	// (0x0006cb0d) grid_highlight_pane_cp011

0xd334,	// (0x0006fe62) poc_content_pane_ParamLimits

0xd334,	// (0x0006fe62) poc_content_pane

0xd346,	// (0x0006fe74) scroll_pane_cp019

0x2c3b,	// (0x00065769) popup_call_poc_act_window_ParamLimits

0x2c3b,	// (0x00065769) popup_call_poc_act_window

0x2c5f,	// (0x0006578d) popup_call_poc_inact_window_ParamLimits

0x2c5f,	// (0x0006578d) popup_call_poc_inact_window

0xf49d,	// (0x00071fcb) bg_popup_call_poc_act_pane_g

0xe3b7,	// (0x00070ee5) bg_popup_call_poc_inact_pane_g1

0xe3bf,	// (0x00070eed) bg_popup_call_poc_inact_pane_g2

0xd34e,	// (0x0006fe7c) popup_call_poc_act_window_g2

0xe3c7,	// (0x00070ef5) bg_popup_call_poc_inact_pane_g3

0xe3cf,	// (0x00070efd) bg_popup_call_poc_inact_pane_g4

0xe3d7,	// (0x00070f05) bg_popup_call_poc_inact_pane_g5

0xd356,	// (0x0006fe84) popup_call_poc_act_window_t1_ParamLimits

0xd356,	// (0x0006fe84) popup_call_poc_act_window_t1

0xd37e,	// (0x0006feac) popup_call_poc_act_window_t2_ParamLimits

0xd37e,	// (0x0006feac) popup_call_poc_act_window_t2

0xd3a6,	// (0x0006fed4) popup_call_poc_act_window_t3_ParamLimits

0xd3a6,	// (0x0006fed4) popup_call_poc_act_window_t3

0xd3ce,	// (0x0006fefc) popup_call_poc_act_window_t4_ParamLimits

0xd3ce,	// (0x0006fefc) popup_call_poc_act_window_t4

0x0003,

0xf419,	// (0x00071f47) popup_call_poc_act_window_t_ParamLimits

0xf419,	// (0x00071f47) popup_call_poc_act_window_t

0xe3df,	// (0x00070f0d) bg_popup_call_poc_inact_pane_g6

0xe3e7,	// (0x00070f15) bg_popup_call_poc_inact_pane_g7

0xe3ef,	// (0x00070f1d) bg_popup_call_poc_inact_pane_g8

0xd3e0,	// (0x0006ff0e) popup_call_poc_inact_window_g2

0xe3f7,	// (0x00070f25) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf48a,	// (0x00071fb8) bg_popup_call_poc_inact_pane_g

0xd3e8,	// (0x0006ff16) popup_call_poc_inact_window_t1_ParamLimits

0xd3e8,	// (0x0006ff16) popup_call_poc_inact_window_t1

0xd3fd,	// (0x0006ff2b) popup_call_poc_inact_window_t2_ParamLimits

0xd3fd,	// (0x0006ff2b) popup_call_poc_inact_window_t2

0xd412,	// (0x0006ff40) popup_call_poc_inact_window_t3_ParamLimits

0xd412,	// (0x0006ff40) popup_call_poc_inact_window_t3

0x0002,

0xf422,	// (0x00071f50) popup_call_poc_inact_window_t_ParamLimits

0xf422,	// (0x00071f50) popup_call_poc_inact_window_t

0xe4dd,	// (0x0007100b) context_pane_ParamLimits

0x34b3,	// (0x00065fe1) signal_pane_ParamLimits

0xc693,	// (0x0006f1c1) main_call2_pane

0xa622,	// (0x0006d150) popup_phob_thumbnail2_window_ParamLimits

0xa622,	// (0x0006d150) popup_phob_thumbnail2_window

0xa5af,	// (0x0006d0dd) aid_hotspot_pointer_arrow_pane

0xa5b7,	// (0x0006d0e5) aid_hotspot_pointer_hand_pane

0x2f5e,	// (0x00065a8c) phob_pre_status_pane_g5

0xa48d,	// (0x0006cfbb) cams_zoom_pane_ParamLimits

0xa48d,	// (0x0006cfbb) image_vga_pane_ParamLimits

0xc41a,	// (0x0006ef48) main_camera_pane_g1_ParamLimits

0xc41a,	// (0x0006ef48) main_camera_pane_g2_ParamLimits

0xc41a,	// (0x0006ef48) main_camera_pane_g3_ParamLimits

0xc41a,	// (0x0006ef48) main_camera_pane_g4_ParamLimits

0xc41a,	// (0x0006ef48) main_camera_pane_g5_ParamLimits

0xc41a,	// (0x0006ef48) main_camera_pane_g6_ParamLimits

0xc41a,	// (0x0006ef48) main_camera_pane_g7_ParamLimits

0xf15d,	// (0x00071c8b) main_camera_pane_g_ParamLimits

0xc462,	// (0x0006ef90) main_camera_pane_t1_ParamLimits

0xc462,	// (0x0006ef90) main_camera_pane_t2_ParamLimits

0xf16e,	// (0x00071c9c) main_camera_pane_t_ParamLimits

0xc39f,	// (0x0006eecd) bg_popup_preview_window_pane_cp01_ParamLimits

0xc39f,	// (0x0006eecd) bg_popup_preview_window_pane_cp01

0xd427,	// (0x0006ff55) popup_phob_thumbnail2_window_g1_ParamLimits

0xd427,	// (0x0006ff55) popup_phob_thumbnail2_window_g1

0xc144,	// (0x0006ec72) call2_cli_visual_pane

0x2c93,	// (0x000657c1) popup_call2_audio_conf_window_ParamLimits

0x2c93,	// (0x000657c1) popup_call2_audio_conf_window

0x2cbb,	// (0x000657e9) popup_call2_audio_first_window_ParamLimits

0x2cbb,	// (0x000657e9) popup_call2_audio_first_window

0x2d51,	// (0x0006587f) popup_call2_audio_in_window_ParamLimits

0x2d51,	// (0x0006587f) popup_call2_audio_in_window

0x2d9d,	// (0x000658cb) popup_call2_audio_out_window_ParamLimits

0x2d9d,	// (0x000658cb) popup_call2_audio_out_window

0x2e0f,	// (0x0006593d) popup_call2_audio_second_window_ParamLimits

0x2e0f,	// (0x0006593d) popup_call2_audio_second_window

0x2e75,	// (0x000659a3) popup_call2_audio_wait_window_ParamLimits

0x2e75,	// (0x000659a3) popup_call2_audio_wait_window

0xc144,	// (0x0006ec72) bg_popup_call2_act_pane_cp03

0xc381,	// (0x0006eeaf) list_conf_pane_cp

0xd433,	// (0x0006ff61) popup_call2_audio_conf_window_t1

0xd441,	// (0x0006ff6f) list_single_graphic_popup_conf2_pane_ParamLimits

0xd441,	// (0x0006ff6f) list_single_graphic_popup_conf2_pane

0xcdc8,	// (0x0006f8f6) list_highlight_pane_cp04

0xd454,	// (0x0006ff82) list_single_graphic_popup_conf2_pane_g1

0xcdd9,	// (0x0006f907) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf429,	// (0x00071f57) list_single_graphic_popup_conf2_pane_g

0xd45e,	// (0x0006ff8c) list_single_graphic_popup_conf2_pane_t1

0xd46c,	// (0x0006ff9a) bg_popup_call2_act_pane_cp01_ParamLimits

0xd46c,	// (0x0006ff9a) bg_popup_call2_act_pane_cp01

0xd4f6,	// (0x00070024) call_type_pane_cp05_ParamLimits

0xd4f6,	// (0x00070024) call_type_pane_cp05

0xd54a,	// (0x00070078) popup_call2_audio_second_window_g1_ParamLimits

0xd54a,	// (0x00070078) popup_call2_audio_second_window_g1

0xd59e,	// (0x000700cc) popup_call2_audio_second_window_g2_ParamLimits

0xd59e,	// (0x000700cc) popup_call2_audio_second_window_g2

0x0002,

0xf42e,	// (0x00071f5c) popup_call2_audio_second_window_g_ParamLimits

0xf42e,	// (0x00071f5c) popup_call2_audio_second_window_g

0xd603,	// (0x00070131) popup_call2_audio_second_window_t1_ParamLimits

0xd603,	// (0x00070131) popup_call2_audio_second_window_t1

0xd8ce,	// (0x000703fc) popup_call2_audio_second_window_t2_ParamLimits

0xd8ce,	// (0x000703fc) popup_call2_audio_second_window_t2

0xd921,	// (0x0007044f) popup_call2_audio_second_window_t3_ParamLimits

0xd921,	// (0x0007044f) popup_call2_audio_second_window_t3

0x0003,

0xf435,	// (0x00071f63) popup_call2_audio_second_window_t_ParamLimits

0xf435,	// (0x00071f63) popup_call2_audio_second_window_t

0xc144,	// (0x0006ec72) bg_popup_call2_in_pane_cp02

0xc14e,	// (0x0006ec7c) call_type_pane_cp04

0x2eaf,	// (0x000659dd) popup_call2_audio_wait_window_g1

0x2eb7,	// (0x000659e5) popup_call2_audio_wait_window_g2

0x0001,

0xf43e,	// (0x00071f6c) popup_call2_audio_wait_window_g

0xc166,	// (0x0006ec94) popup_call2_audio_wait_window_t3

0xda14,	// (0x00070542) bg_popup_call2_act_pane_ParamLimits

0xda14,	// (0x00070542) bg_popup_call2_act_pane

0xdad4,	// (0x00070602) call_type_pane_cp03_ParamLimits

0xdad4,	// (0x00070602) call_type_pane_cp03

0xdb38,	// (0x00070666) popup_call2_audio_first_window_g1_ParamLimits

0xdb38,	// (0x00070666) popup_call2_audio_first_window_g1

0xdba8,	// (0x000706d6) popup_call2_audio_first_window_g2_ParamLimits

0xdba8,	// (0x000706d6) popup_call2_audio_first_window_g2

0xdc0c,	// (0x0007073a) popup_call2_audio_first_window_g3_ParamLimits

0xdc0c,	// (0x0007073a) popup_call2_audio_first_window_g3

0x0004,

0xf443,	// (0x00071f71) popup_call2_audio_first_window_g_ParamLimits

0xf443,	// (0x00071f71) popup_call2_audio_first_window_g

0xdc94,	// (0x000707c2) popup_call2_audio_first_window_t1_ParamLimits

0xdc94,	// (0x000707c2) popup_call2_audio_first_window_t1

0xdd97,	// (0x000708c5) popup_call2_audio_first_window_t4_ParamLimits

0xdd97,	// (0x000708c5) popup_call2_audio_first_window_t4

0xde7a,	// (0x000709a8) popup_call2_audio_first_window_t5_ParamLimits

0xde7a,	// (0x000709a8) popup_call2_audio_first_window_t5

0x0003,

0xf44e,	// (0x00071f7c) popup_call2_audio_first_window_t_ParamLimits

0xf44e,	// (0x00071f7c) popup_call2_audio_first_window_t

0xc397,	// (0x0006eec5) bg_popup_call2_act_pane_g1

0xe451,	// (0x00070f7f) popup_cale_lunar_info_window_t1

0xe45f,	// (0x00070f8d) popup_cale_lunar_info_window_t2

0xe46d,	// (0x00070f9b) popup_cale_lunar_info_window_t3

0xc144,	// (0x0006ec72) bg_popup_call2_bubble_pane

0xdf7b,	// (0x00070aa9) bg_popup_call2_in_pane_cp01_ParamLimits

0xdf7b,	// (0x00070aa9) bg_popup_call2_in_pane_cp01

0xa198,	// (0x0006ccc6) call_type_pane_cp02

0x2ebf,	// (0x000659ed) popup_call2_audio_out_window_g1_ParamLimits

0x2ebf,	// (0x000659ed) popup_call2_audio_out_window_g1

0xdfc3,	// (0x00070af1) popup_call2_audio_out_window_g2_ParamLimits

0xdfc3,	// (0x00070af1) popup_call2_audio_out_window_g2

0x2eeb,	// (0x00065a19) popup_call2_audio_out_window_g3_ParamLimits

0x2eeb,	// (0x00065a19) popup_call2_audio_out_window_g3

0x0003,

0xf457,	// (0x00071f85) popup_call2_audio_out_window_g_ParamLimits

0xf457,	// (0x00071f85) popup_call2_audio_out_window_g

0xdffa,	// (0x00070b28) popup_call2_audio_out_window_t1_ParamLimits

0xdffa,	// (0x00070b28) popup_call2_audio_out_window_t1

0xe059,	// (0x00070b87) popup_call2_audio_out_window_t2_ParamLimits

0xe059,	// (0x00070b87) popup_call2_audio_out_window_t2

0xe0ad,	// (0x00070bdb) popup_call2_audio_out_window_t3_ParamLimits

0xe0ad,	// (0x00070bdb) popup_call2_audio_out_window_t3

0xe0c3,	// (0x00070bf1) popup_call2_audio_out_window_t4_ParamLimits

0xe0c3,	// (0x00070bf1) popup_call2_audio_out_window_t4

0xe0d9,	// (0x00070c07) popup_call2_audio_out_window_t5_ParamLimits

0xe0d9,	// (0x00070c07) popup_call2_audio_out_window_t5

0x0005,

0xf460,	// (0x00071f8e) popup_call2_audio_out_window_t_ParamLimits

0xf460,	// (0x00071f8e) popup_call2_audio_out_window_t

0xe13d,	// (0x00070c6b) bg_popup_call2_in_pane_ParamLimits

0xe13d,	// (0x00070c6b) bg_popup_call2_in_pane

0xe199,	// (0x00070cc7) popup_call2_audio_in_window_g1_ParamLimits

0xe199,	// (0x00070cc7) popup_call2_audio_in_window_g1

0xe1d1,	// (0x00070cff) popup_call2_audio_in_window_g2_ParamLimits

0xe1d1,	// (0x00070cff) popup_call2_audio_in_window_g2

0xe209,	// (0x00070d37) popup_call2_audio_in_window_g3_ParamLimits

0xe209,	// (0x00070d37) popup_call2_audio_in_window_g3

0x0003,

0xf46d,	// (0x00071f9b) popup_call2_audio_in_window_g_ParamLimits

0xf46d,	// (0x00071f9b) popup_call2_audio_in_window_g

0xe261,	// (0x00070d8f) popup_call2_audio_in_window_t1_ParamLimits

0xe261,	// (0x00070d8f) popup_call2_audio_in_window_t1

0xe2e1,	// (0x00070e0f) popup_call2_audio_in_window_t2_ParamLimits

0xe2e1,	// (0x00070e0f) popup_call2_audio_in_window_t2

0xe361,	// (0x00070e8f) popup_call2_audio_in_window_t3_ParamLimits

0xe361,	// (0x00070e8f) popup_call2_audio_in_window_t3

0xe37b,	// (0x00070ea9) popup_call2_audio_in_window_t4_ParamLimits

0xe37b,	// (0x00070ea9) popup_call2_audio_in_window_t4

0xe38d,	// (0x00070ebb) popup_call2_audio_in_window_t5_ParamLimits

0xe38d,	// (0x00070ebb) popup_call2_audio_in_window_t5

0xe3a2,	// (0x00070ed0) popup_call2_audio_in_window_t6_ParamLimits

0xe3a2,	// (0x00070ed0) popup_call2_audio_in_window_t6

0x0005,

0xf476,	// (0x00071fa4) popup_call2_audio_in_window_t_ParamLimits

0xf476,	// (0x00071fa4) popup_call2_audio_in_window_t

0xc397,	// (0x0006eec5) bg_popup_call2_in_pane_g1

0xe47b,	// (0x00070fa9) popup_cale_lunar_info_window_t4

0x0003,

0xf4c6,	// (0x00071ff4) popup_cale_lunar_info_window_t

0xc39f,	// (0x0006eecd) bg_popup_call2_rect_pane_ParamLimits

0xc39f,	// (0x0006eecd) bg_popup_call2_rect_pane

0xc144,	// (0x0006ec72) call2_cli_visual_graphic_pane

0xc144,	// (0x0006ec72) call2_cli_visual_text_pane

0xa649,	// (0x0006d177) smil_status_volume_pane_g3

0x0002,

0xc3b7,	// (0x0006eee5) call2_cli_visual_graphic_pane_g1

0xc3b7,	// (0x0006eee5) call2_cli_visual_graphic_pane_g2

0xc3b7,	// (0x0006eee5) call2_cli_visual_graphic_pane_g3

0x0002,

0xf483,	// (0x00071fb1) call2_cli_visual_graphic_pane_g

0xc5b7,	// (0x0006f0e5) bg_popup_call2_rect_pane_g1

0xc5af,	// (0x0006f0dd) bg_popup_call2_rect_pane_g2

0xc5a7,	// (0x0006f0d5) bg_popup_call2_rect_pane_g3

0xc5c7,	// (0x0006f0f5) bg_popup_call2_rect_pane_g4

0xc5bf,	// (0x0006f0ed) bg_popup_call2_rect_pane_g5

0xc5cf,	// (0x0006f0fd) bg_popup_call2_rect_pane_g6

0xc5d7,	// (0x0006f105) bg_popup_call2_rect_pane_g7

0xc5e7,	// (0x0006f115) bg_popup_call2_rect_pane_g8

0xc5df,	// (0x0006f10d) bg_popup_call2_rect_pane_g9

0x0008,

0xf213,	// (0x00071d41) bg_popup_call2_rect_pane_g

0xe3b7,	// (0x00070ee5) bg_popup_call2_bubble_pane_g1

0xe3bf,	// (0x00070eed) bg_popup_call2_bubble_pane_g2

0xe3c7,	// (0x00070ef5) bg_popup_call2_bubble_pane_g3

0xe3cf,	// (0x00070efd) bg_popup_call2_bubble_pane_g4

0xe3d7,	// (0x00070f05) bg_popup_call2_bubble_pane_g5

0xe3df,	// (0x00070f0d) bg_popup_call2_bubble_pane_g6

0xe3e7,	// (0x00070f15) bg_popup_call2_bubble_pane_g7

0xe3ef,	// (0x00070f1d) bg_popup_call2_bubble_pane_g8

0xe3f7,	// (0x00070f25) bg_popup_call2_bubble_pane_g9

0x0008,

0xf48a,	// (0x00071fb8) bg_popup_call2_bubble_pane_g

0x07fd,	// (0x0006332b) aid_cale_week_size_cell_pane

0x0e71,	// (0x0006399f) aid_cams_cif_uncrop_pane_ParamLimits

0x0e71,	// (0x0006399f) aid_cams_cif_uncrop_pane

0xa48d,	// (0x0006cfbb) aid_cams_size_cell_ParamLimits

0xa48d,	// (0x0006cfbb) aid_cams_size_cell

0xa48d,	// (0x0006cfbb) grid_cams_pane_ParamLimits

0xa48d,	// (0x0006cfbb) linegrid_cams_pane_ParamLimits

0x1086,	// (0x00063bb4) call_video_pane_t1

0x10a0,	// (0x00063bce) call_video_pane_t2

0x0001,

0xf1ba,	// (0x00071ce8) call_video_pane_t

0x14c6,	// (0x00063ff4) aid_cale_month_size_cell_pane_ParamLimits

0x14c6,	// (0x00063ff4) aid_cale_month_size_cell_pane

0xf50a,	// (0x00072038) smil_status_volume_pane_g

0xa656,	// (0x0006d184) volume_smil_pane_ParamLimits

0x9ff1,	// (0x0006cb1f) aid_popup2_width_pane

0x0759,	// (0x00063287) cell_qdial_pane_g4_ParamLimits

0x0759,	// (0x00063287) cell_qdial_pane_g4

0x23b7,	// (0x00064ee5) aid_blid_cardinal_pane_ParamLimits

0x23c3,	// (0x00064ef1) aid_blid_destination_pane_ParamLimits

0x23c3,	// (0x00064ef1) aid_blid_destination_pane

0xc39f,	// (0x0006eecd) bg_popup_call_poc_act_pane_ParamLimits

0xc39f,	// (0x0006eecd) bg_popup_call_poc_act_pane

0xc39f,	// (0x0006eecd) bg_popup_call_poc_inact_pane_ParamLimits

0xc39f,	// (0x0006eecd) bg_popup_call_poc_inact_pane

0xe3ff,	// (0x00070f2d) bg_popup_call_poc_act_pane_g1

0xe407,	// (0x00070f35) bg_popup_call_poc_act_pane_g2

0xe40f,	// (0x00070f3d) bg_popup_call_poc_act_pane_g3

0xe3cf,	// (0x00070efd) bg_popup_call_poc_act_pane_g4

0xe3d7,	// (0x00070f05) bg_popup_call_poc_act_pane_g5

0xe417,	// (0x00070f45) bg_popup_call_poc_act_pane_g6

0xe3e7,	// (0x00070f15) bg_popup_call_poc_act_pane_g7

0xe41f,	// (0x00070f4d) bg_popup_call_poc_act_pane_g8

0xc144,	// (0x0006ec72) main_usb_pane

0xa5f9,	// (0x0006d127) popup_cale_lunar_info_window

0x135b,	// (0x00063e89) im_reading_pane_t1_ParamLimits

0xc756,	// (0x0006f284) list_im_pane_ParamLimits

0xc767,	// (0x0006f295) scroll_pane_cp07_ParamLimits

0xc144,	// (0x0006ec72) grid_highlight_pane_cp012

0xc39f,	// (0x0006eecd) mup_scale_pane_ParamLimits

0xc41a,	// (0x0006ef48) main_usb_pane_g1_ParamLimits

0xc41a,	// (0x0006ef48) main_usb_pane_g1

0xc41a,	// (0x0006ef48) main_usb_pane_g2_ParamLimits

0xc41a,	// (0x0006ef48) main_usb_pane_g2

0x0001,

0xf199,	// (0x00071cc7) main_usb_pane_g_ParamLimits

0xf199,	// (0x00071cc7) main_usb_pane_g

0xc462,	// (0x0006ef90) main_usb_pane_t1_ParamLimits

0xc462,	// (0x0006ef90) main_usb_pane_t1

0xc462,	// (0x0006ef90) main_usb_pane_t2_ParamLimits

0xc462,	// (0x0006ef90) main_usb_pane_t2

0xc462,	// (0x0006ef90) main_usb_pane_t3_ParamLimits

0xc462,	// (0x0006ef90) main_usb_pane_t3

0xc462,	// (0x0006ef90) main_usb_pane_t4_ParamLimits

0xc462,	// (0x0006ef90) main_usb_pane_t4

0xc462,	// (0x0006ef90) main_usb_pane_t5_ParamLimits

0xc462,	// (0x0006ef90) main_usb_pane_t5

0xc462,	// (0x0006ef90) main_usb_pane_t6_ParamLimits

0xc462,	// (0x0006ef90) main_usb_pane_t6

0x0005,

0xf4b4,	// (0x00071fe2) main_usb_pane_t_ParamLimits

0x2356,	// (0x00064e84) aid_text_placing

0x2361,	// (0x00064e8f) main_location2_pane_t1_ParamLimits

0x2377,	// (0x00064ea5) main_location2_pane_t2_ParamLimits

0x238d,	// (0x00064ebb) main_location2_pane_t3_ParamLimits

0x23a3,	// (0x00064ed1) main_location2_pane_t4_ParamLimits

0x23a3,	// (0x00064ed1) main_location2_pane_t4

0xf2f6,	// (0x00071e24) main_location2_pane_t_ParamLimits

0xc3cd,	// (0x0006eefb) find_pinb_pane_g2_ParamLimits

0xc3cd,	// (0x0006eefb) find_pinb_pane_g2

0x0001,

0xf072,	// (0x00071ba0) find_pinb_pane_g_ParamLimits

0xf072,	// (0x00071ba0) find_pinb_pane_g

0xc3d9,	// (0x0006ef07) find_pinb_pane_t1_ParamLimits

0xc3eb,	// (0x0006ef19) find_pinb_pane_t2_ParamLimits

0xf077,	// (0x00071ba5) find_pinb_pane_t_ParamLimits

0xc144,	// (0x0006ec72) main_call3_pane

0x1ac3,	// (0x000645f1) cale_month_day_heading_pane_t1_ParamLimits

0x1b49,	// (0x00064677) cale_month_day_heading_pane_t2_ParamLimits

0x1bc2,	// (0x000646f0) cale_month_day_heading_pane_t3_ParamLimits

0x1c3b,	// (0x00064769) cale_month_day_heading_pane_t4_ParamLimits

0x1cbc,	// (0x000647ea) cale_month_day_heading_pane_t5_ParamLimits

0x1d45,	// (0x00064873) cale_month_day_heading_pane_t6_ParamLimits

0x1dce,	// (0x000648fc) cale_month_day_heading_pane_t7_ParamLimits

0xf1f2,	// (0x00071d20) cale_month_day_heading_pane_t_ParamLimits

0xc9c0,	// (0x0006f4ee) smil_status_volume_pane

0x29b3,	// (0x000654e1) postcard_address_pane_ParamLimits

0x29b3,	// (0x000654e1) postcard_address_pane

0x29c9,	// (0x000654f7) postcard_message_pane_ParamLimits

0x29c9,	// (0x000654f7) postcard_message_pane

0x2f17,	// (0x00065a45) call2_cli_visual_pane_t1_ParamLimits

0x2f17,	// (0x00065a45) call2_cli_visual_pane_t1

0xe590,	// (0x000710be) postcard_message_pane_t1_ParamLimits

0xe590,	// (0x000710be) postcard_message_pane_t1

0xe578,	// (0x000710a6) postcard_address_pane_t1_ParamLimits

0xe578,	// (0x000710a6) postcard_address_pane_t1

0x366f,	// (0x0006619d) popup_call3_audio_in_window_ParamLimits

0x366f,	// (0x0006619d) popup_call3_audio_in_window

0x34f4,	// (0x00066022) bg_popup_call3_in_pane_ParamLimits

0x34f4,	// (0x00066022) bg_popup_call3_in_pane

0x3570,	// (0x0006609e) popup_call3_audio_in_window_g1_ParamLimits

0x3570,	// (0x0006609e) popup_call3_audio_in_window_g1

0x3590,	// (0x000660be) popup_call3_audio_in_window_g2_ParamLimits

0x3590,	// (0x000660be) popup_call3_audio_in_window_g2

0x35b0,	// (0x000660de) popup_call3_audio_in_window_g3_ParamLimits

0x35b0,	// (0x000660de) popup_call3_audio_in_window_g3

0x0003,

0xf511,	// (0x0007203f) popup_call3_audio_in_window_g_ParamLimits

0xf511,	// (0x0007203f) popup_call3_audio_in_window_g

0x35e1,	// (0x0006610f) popup_call3_audio_in_window_t1_ParamLimits

0x35e1,	// (0x0006610f) popup_call3_audio_in_window_t1

0x361f,	// (0x0006614d) popup_call3_audio_in_window_t2_ParamLimits

0x361f,	// (0x0006614d) popup_call3_audio_in_window_t2

0x365d,	// (0x0006618b) popup_call3_audio_in_window_t3_ParamLimits

0x365d,	// (0x0006618b) popup_call3_audio_in_window_t3

0x0002,

0xf51a,	// (0x00072048) popup_call3_audio_in_window_t_ParamLimits

0xf51a,	// (0x00072048) popup_call3_audio_in_window_t

0xc693,	// (0x0006f1c1) bg_popup_call3_rect_pane

0xc5b7,	// (0x0006f0e5) bg_popup_call3_rect_pane_g1

0xc5af,	// (0x0006f0dd) bg_popup_call3_rect_pane_g2

0xc5a7,	// (0x0006f0d5) bg_popup_call3_rect_pane_g3

0xc5c7,	// (0x0006f0f5) bg_popup_call3_rect_pane_g4

0xc5bf,	// (0x0006f0ed) bg_popup_call3_rect_pane_g5

0xc5cf,	// (0x0006f0fd) bg_popup_call3_rect_pane_g6

0xc5d7,	// (0x0006f105) bg_popup_call3_rect_pane_g7

0x9fdf,	// (0x0006cb0d) mup_visualizer_osc_pane

0x9fdf,	// (0x0006cb0d) mup_visualizer_spec_pane

0x3524,	// (0x00066052) call3_video_qcif_pane_ParamLimits

0x3524,	// (0x00066052) call3_video_qcif_pane

0x3537,	// (0x00066065) call3_video_qcif_uncrop_pane_ParamLimits

0x3537,	// (0x00066065) call3_video_qcif_uncrop_pane

0x3547,	// (0x00066075) call3_video_subqcif_pane_ParamLimits

0x3547,	// (0x00066075) call3_video_subqcif_pane

0x355d,	// (0x0006608b) call3_video_subqcif_uncrop_pane_ParamLimits

0x355d,	// (0x0006608b) call3_video_subqcif_uncrop_pane

0x35d0,	// (0x000660fe) popup_call3_audio_in_window_g4_ParamLimits

0x35d0,	// (0x000660fe) popup_call3_audio_in_window_g4

0x9fdf,	// (0x0006cb0d) mup_spec_half_pane

0x9fdf,	// (0x0006cb0d) mup_spec_half_pane_cp

0x9fdf,	// (0x0006cb0d) mup_osc_middle_pane

0xc458,	// (0x0006ef86) mup_visualizer_osc_pane_g1

0xe52b,	// (0x00071059) mup_spec_bar_pane_ParamLimits

0xe52b,	// (0x00071059) mup_spec_bar_pane

0xc458,	// (0x0006ef86) mup_spec_bar_pane_g1

0xc458,	// (0x0006ef86) mup_spec_bar_pane_g2

0x0001,

0xf08c,	// (0x00071bba) mup_spec_bar_pane_g

0x07fd,	// (0x0006332b) aid_cale_week_size_cell_pane_ParamLimits

0x0817,	// (0x00063345) bg_cale_heading_pane_ParamLimits

0x083b,	// (0x00063369) bg_cale_pane_cp01_ParamLimits

0x0858,	// (0x00063386) cale_week_corner_pane_ParamLimits

0x0877,	// (0x000633a5) cale_week_day_heading_pane_ParamLimits

0x08a0,	// (0x000633ce) cale_week_scroll_pane_g1_ParamLimits

0x08bf,	// (0x000633ed) cale_week_scroll_pane_g2_ParamLimits

0x08d7,	// (0x00063405) cale_week_scroll_pane_g3_ParamLimits

0x08ef,	// (0x0006341d) cale_week_scroll_pane_g4_ParamLimits

0x0907,	// (0x00063435) cale_week_scroll_pane_g5_ParamLimits

0x0927,	// (0x00063455) cale_week_scroll_pane_g6_ParamLimits

0x0947,	// (0x00063475) cale_week_scroll_pane_g7_ParamLimits

0x0967,	// (0x00063495) cale_week_scroll_pane_g8_ParamLimits

0x098b,	// (0x000634b9) cale_week_scroll_pane_g9_ParamLimits

0x09a3,	// (0x000634d1) cale_week_scroll_pane_g10_ParamLimits

0x09bb,	// (0x000634e9) cale_week_scroll_pane_g11_ParamLimits

0x09d3,	// (0x00063501) cale_week_scroll_pane_g12_ParamLimits

0x09f3,	// (0x00063521) cale_week_scroll_pane_g13_ParamLimits

0x0a17,	// (0x00063545) cale_week_scroll_pane_g14_ParamLimits

0x0a3b,	// (0x00063569) cale_week_scroll_pane_g15_ParamLimits

0xf103,	// (0x00071c31) cale_week_scroll_pane_g_ParamLimits

0x0a83,	// (0x000635b1) cale_week_time_pane_ParamLimits

0x0aa7,	// (0x000635d5) grid_cale_week_pane_ParamLimits

0xc609,	// (0x0006f137) listscroll_cale_week_pane_t1

0xc61b,	// (0x0006f149) scroll_pane_cp08_ParamLimits

0x153e,	// (0x0006406c) cale_month_corner_pane_ParamLimits

0xc996,	// (0x0006f4c4) cale_month_pane_t1

0x1a3e,	// (0x0006456c) cale_month_week_pane_ParamLimits

0x2196,	// (0x00064cc4) popup_call_status_window_g1_ParamLimits

0x21aa,	// (0x00064cd8) popup_call_status_window_g2_ParamLimits

0x21be,	// (0x00064cec) popup_call_status_window_g3_ParamLimits

0xf27d,	// (0x00071dab) popup_call_status_window_g_ParamLimits

0xcd56,	// (0x0006f884) aid_call2_pane

0x2858,	// (0x00065386) msg_header_pane_g1

0x29b3,	// (0x000654e1) postcard_address2_pane_ParamLimits

0x29b3,	// (0x000654e1) postcard_address2_pane

0x29c9,	// (0x000654f7) postcard_message2_pane_ParamLimits

0x29c9,	// (0x000654f7) postcard_message2_pane

0x34c1,	// (0x00065fef) message2_row_pane_ParamLimits

0x34c1,	// (0x00065fef) message2_row_pane

0x34e1,	// (0x0006600f) address2_row_pane_ParamLimits

0x34e1,	// (0x0006600f) address2_row_pane

0xe4f8,	// (0x00071026) postcard_message2_row_pane_g1

0xe500,	// (0x0007102e) postcard_message2_row_pane_t1

0xe4f8,	// (0x00071026) address2_row_pane_g1

0xe500,	// (0x0007102e) address2_row_pane_t1

0x0e04,	// (0x00063932) aid_size_cell_vorec

0xc144,	// (0x0006ec72) main_rss_pane

0xe50e,	// (0x0007103c) rss_list_single_pane_ParamLimits

0xe50e,	// (0x0007103c) rss_list_single_pane

0xe51c,	// (0x0007104a) rss_list_single_pane_t1

0xe51c,	// (0x0007104a) rss_list_single_pane_t2

0x0001,

0xf505,	// (0x00072033) rss_list_single_pane_t

0xc144,	// (0x0006ec72) main_camera2_pane

0xc144,	// (0x0006ec72) main_video2_pane

0xa66b,	// (0x0006d199) cams_zoom_pane_cp2_ParamLimits

0xa66b,	// (0x0006d199) cams_zoom_pane_cp2

0xa66b,	// (0x0006d199) image2_vga_pane_ParamLimits

0xa66b,	// (0x0006d199) image2_vga_pane

0xa679,	// (0x0006d1a7) main_camera2_pane_g1_ParamLimits

0xa679,	// (0x0006d1a7) main_camera2_pane_g1

0xa679,	// (0x0006d1a7) main_camera2_pane_g2_ParamLimits

0xa679,	// (0x0006d1a7) main_camera2_pane_g2

0xa679,	// (0x0006d1a7) main_camera2_pane_g3_ParamLimits

0xa679,	// (0x0006d1a7) main_camera2_pane_g3

0xa679,	// (0x0006d1a7) main_camera2_pane_g4_ParamLimits

0xa679,	// (0x0006d1a7) main_camera2_pane_g4

0xa679,	// (0x0006d1a7) main_camera2_pane_g5_ParamLimits

0xa679,	// (0x0006d1a7) main_camera2_pane_g5

0xa679,	// (0x0006d1a7) main_camera2_pane_g6_ParamLimits

0xa679,	// (0x0006d1a7) main_camera2_pane_g6

0xa679,	// (0x0006d1a7) main_camera2_pane_g7_ParamLimits

0xa679,	// (0x0006d1a7) main_camera2_pane_g7

0xa679,	// (0x0006d1a7) main_camera2_pane_g8_ParamLimits

0xa679,	// (0x0006d1a7) main_camera2_pane_g8

0x0008,

0xf521,	// (0x0007204f) main_camera2_pane_g_ParamLimits

0xf521,	// (0x0007204f) main_camera2_pane_g

0x3691,	// (0x000661bf) main_camera2_pane_t1_ParamLimits

0x3691,	// (0x000661bf) main_camera2_pane_t1

0x3691,	// (0x000661bf) main_camera2_pane_t2_ParamLimits

0x3691,	// (0x000661bf) main_camera2_pane_t2

0x3691,	// (0x000661bf) main_camera2_pane_t3_ParamLimits

0x3691,	// (0x000661bf) main_camera2_pane_t3

0x3691,	// (0x000661bf) main_camera2_pane_t4_ParamLimits

0x3691,	// (0x000661bf) main_camera2_pane_t4

0x0006,

0xf534,	// (0x00072062) main_camera2_pane_t_ParamLimits

0xf534,	// (0x00072062) main_camera2_pane_t

0xa6bd,	// (0x0006d1eb) cams_zoom_pane_cp4_ParamLimits

0xa6bd,	// (0x0006d1eb) cams_zoom_pane_cp4

0x36a5,	// (0x000661d3) image2_cif_pane_ParamLimits

0x36a5,	// (0x000661d3) image2_cif_pane

0xa05c,	// (0x0006cb8a) image2_subqcif_pane_ParamLimits

0xa05c,	// (0x0006cb8a) image2_subqcif_pane

0x36b3,	// (0x000661e1) main_video2_pane_g1_ParamLimits

0x36b3,	// (0x000661e1) main_video2_pane_g1

0x36b3,	// (0x000661e1) main_video2_pane_g2_ParamLimits

0x36b3,	// (0x000661e1) main_video2_pane_g2

0x36b3,	// (0x000661e1) main_video2_pane_g3_ParamLimits

0x36b3,	// (0x000661e1) main_video2_pane_g3

0x36b3,	// (0x000661e1) main_video2_pane_g4_ParamLimits

0x36b3,	// (0x000661e1) main_video2_pane_g4

0x36b3,	// (0x000661e1) main_video2_pane_g5_ParamLimits

0x36b3,	// (0x000661e1) main_video2_pane_g5

0x36b3,	// (0x000661e1) main_video2_pane_g6_ParamLimits

0x36b3,	// (0x000661e1) main_video2_pane_g6

0x0005,

0xf543,	// (0x00072071) main_video2_pane_g_ParamLimits

0xf543,	// (0x00072071) main_video2_pane_g

0x36c1,	// (0x000661ef) main_video2_pane_t1_ParamLimits

0x36c1,	// (0x000661ef) main_video2_pane_t1

0x36c1,	// (0x000661ef) main_video2_pane_t2_ParamLimits

0x36c1,	// (0x000661ef) main_video2_pane_t2

0x36c1,	// (0x000661ef) main_video2_pane_t3_ParamLimits

0x36c1,	// (0x000661ef) main_video2_pane_t3

0x0002,

0xf550,	// (0x0007207e) main_video2_pane_t_ParamLimits

0xf550,	// (0x0007207e) main_video2_pane_t

0x2fc2,	// (0x00065af0) call_muted_g2

0x0001,

0xf4f7,	// (0x00072025) call_muted_g

0xc144,	// (0x0006ec72) main_mup2_pane

0xd05e,	// (0x0006fb8c) main_mup2_pane_g1_ParamLimits

0xd05e,	// (0x0006fb8c) main_mup2_pane_g1

0xd05e,	// (0x0006fb8c) main_mup2_pane_g2_ParamLimits

0xd05e,	// (0x0006fb8c) main_mup2_pane_g2

0x3782,	// (0x000662b0) main_mup_pane_g13_cp1

0xa06a,	// (0x0006cb98) mup_volume_pane_cp1

0xd05e,	// (0x0006fb8c) main_mup2_pane_g4_ParamLimits

0xd05e,	// (0x0006fb8c) main_mup2_pane_g4

0xd05e,	// (0x0006fb8c) main_mup2_pane_g5_ParamLimits

0xd05e,	// (0x0006fb8c) main_mup2_pane_g5

0xd05e,	// (0x0006fb8c) main_mup2_pane_g6_ParamLimits

0xd05e,	// (0x0006fb8c) main_mup2_pane_g6

0xd05e,	// (0x0006fb8c) main_mup2_pane_g7_ParamLimits

0xd05e,	// (0x0006fb8c) main_mup2_pane_g7

0x0006,

0xf557,	// (0x00072085) main_mup2_pane_g_ParamLimits

0xf557,	// (0x00072085) main_mup2_pane_g

0xd06c,	// (0x0006fb9a) main_mup2_pane_t1_ParamLimits

0xd06c,	// (0x0006fb9a) main_mup2_pane_t1

0xd06c,	// (0x0006fb9a) main_mup2_pane_t2_ParamLimits

0xd06c,	// (0x0006fb9a) main_mup2_pane_t2

0xd06c,	// (0x0006fb9a) main_mup2_pane_t3_ParamLimits

0xd06c,	// (0x0006fb9a) main_mup2_pane_t3

0xd06c,	// (0x0006fb9a) main_mup2_pane_t4_ParamLimits

0xd06c,	// (0x0006fb9a) main_mup2_pane_t4

0xd06c,	// (0x0006fb9a) main_mup2_pane_t5_ParamLimits

0xd06c,	// (0x0006fb9a) main_mup2_pane_t5

0xd06c,	// (0x0006fb9a) main_mup2_pane_t6_ParamLimits

0xd06c,	// (0x0006fb9a) main_mup2_pane_t6

0x0005,

0xf566,	// (0x00072094) main_mup2_pane_t_ParamLimits

0xf566,	// (0x00072094) main_mup2_pane_t

0xd080,	// (0x0006fbae) mup2_visualizer_pane_ParamLimits

0xd080,	// (0x0006fbae) mup2_visualizer_pane

0xd080,	// (0x0006fbae) mup_progress_pane_cp_ParamLimits

0xd080,	// (0x0006fbae) mup_progress_pane_cp

0xa6e1,	// (0x0006d20f) mup_volume_pane_cp_ParamLimits

0xa6e1,	// (0x0006d20f) mup_volume_pane_cp

0xc41a,	// (0x0006ef48) mup2_visualizer_pane_g1_ParamLimits

0xc41a,	// (0x0006ef48) mup2_visualizer_pane_g1

0xc428,	// (0x0006ef56) mup2_visualizer_pane_g2_ParamLimits

0xc428,	// (0x0006ef56) mup2_visualizer_pane_g2

0xc428,	// (0x0006ef56) mup2_visualizer_pane_g3_ParamLimits

0xc428,	// (0x0006ef56) mup2_visualizer_pane_g3

0x0002,

0xf07c,	// (0x00071baa) mup2_visualizer_pane_g_ParamLimits

0xf07c,	// (0x00071baa) mup2_visualizer_pane_g

0x9fdf,	// (0x0006cb0d) aid_size_cell_fmradio

0x3172,	// (0x00065ca0) aid_height_parent_landcape

0xc7f4,	// (0x0006f322) wml_content_pane_cp

0xc7fc,	// (0x0006f32a) wml_tabs_pane

0xc805,	// (0x0006f333) popup_wml_miniature_window

0xc80d,	// (0x0006f33b) scroll_pane_cp021

0xc821,	// (0x0006f34f) wml_content_pane_comp8

0xc144,	// (0x0006ec72) bg_popup_sub_pane_cp05

0xe5c2,	// (0x000710f0) popup_wml_miniature_window_g1

0xe5ca,	// (0x000710f8) wml_miniature_view_pane

0x36d5,	// (0x00066203) aid_size_wml_view

0x36dd,	// (0x0006620b) wml_miniature_view_pane_g1

0x36e6,	// (0x00066214) wml_miniature_view_pane_g2

0x36ef,	// (0x0006621d) wml_miniature_view_pane_g3

0x36f7,	// (0x00066225) wml_miniature_view_pane_g4

0x36ff,	// (0x0006622d) wml_miniature_view_pane_g5

0x3707,	// (0x00066235) wml_miniature_view_pane_g6

0x370f,	// (0x0006623d) wml_miniature_view_pane_g7

0x3717,	// (0x00066245) wml_miniature_view_pane_g8

0x0007,

0xf573,	// (0x000720a1) wml_miniature_view_pane_g

0xe5d2,	// (0x00071100) background_graphic_ParamLimits

0xe5d2,	// (0x00071100) background_graphic

0xe5de,	// (0x0007110c) wml_tabs_2_pane

0xe5e7,	// (0x00071115) wml_tabs_3_pane_ParamLimits

0xe5e7,	// (0x00071115) wml_tabs_3_pane

0xe5f9,	// (0x00071127) wml_tabs_4_pane_ParamLimits

0xe5f9,	// (0x00071127) wml_tabs_4_pane

0xe60f,	// (0x0007113d) wml_tabs_5_pane_ParamLimits

0xe60f,	// (0x0007113d) wml_tabs_5_pane

0xe629,	// (0x00071157) wml_tabs_pane_g2_ParamLimits

0xe629,	// (0x00071157) wml_tabs_pane_g2

0xe63e,	// (0x0007116c) wml_tabs_pane_g3_ParamLimits

0xe63e,	// (0x0007116c) wml_tabs_pane_g3

0xe653,	// (0x00071181) wml_tabs_2_active_pane_ParamLimits

0xe653,	// (0x00071181) wml_tabs_2_active_pane

0xe653,	// (0x00071181) wml_tabs_2_passive_pane_ParamLimits

0xe653,	// (0x00071181) wml_tabs_2_passive_pane

0x371f,	// (0x0006624d) wml_tabs_3_active_pane_cp_ParamLimits

0x371f,	// (0x0006624d) wml_tabs_3_active_pane_cp

0x3734,	// (0x00066262) wml_tabs_3_passive_pane_ParamLimits

0x3734,	// (0x00066262) wml_tabs_3_passive_pane

0x3747,	// (0x00066275) wml_tabs_3_passive_pane_cp_ParamLimits

0x3747,	// (0x00066275) wml_tabs_3_passive_pane_cp

0x375e,	// (0x0006628c) tabs_4_active_pane

0x3766,	// (0x00066294) tabs_4_passive_pane

0x3770,	// (0x0006629e) tabs_4_passive_pane_cp

0x3778,	// (0x000662a6) tabs_4_passive_pane_cp2

0x2f36,	// (0x00065a64) aid_height_text

0xd080,	// (0x0006fbae) mup_volume_cont_pane_ParamLimits

0xd080,	// (0x0006fbae) mup_volume_cont_pane

0x9fdf,	// (0x0006cb0d) aid_size_cell_pinb

0x9fdf,	// (0x0006cb0d) aid_size_list_pinb

0xd080,	// (0x0006fbae) mup2_volume_cont_pane_ParamLimits

0xd080,	// (0x0006fbae) mup2_volume_cont_pane

0xa6cb,	// (0x0006d1f9) mup2_volume_cont_pane_g1_ParamLimits

0xa6cb,	// (0x0006d1f9) mup2_volume_cont_pane_g1

0x032a,	// (0x00062e58) aid_size_cell_touch_ParamLimits

0x032a,	// (0x00062e58) aid_size_cell_touch

0x04f0,	// (0x0006301e) touch_pane_ParamLimits

0x04f0,	// (0x0006301e) touch_pane

0xa06a,	// (0x0006cb98) main_rss2_pane

0xe66a,	// (0x00071198) listscroll_rss2_pane

0xe673,	// (0x000711a1) rss2_navigation_pane

0xe67b,	// (0x000711a9) list_rss2_pane

0xce6d,	// (0x0006f99b) scroll_pane_cp22

0xe683,	// (0x000711b1) rss2_navigation_pane_g1

0xe68c,	// (0x000711ba) rss2_navigation_pane_g2

0xe694,	// (0x000711c2) rss2_navigation_pane_g3

0x0002,

0xf584,	// (0x000720b2) rss2_navigation_pane_g

0xe69c,	// (0x000711ca) rss2_navigation_pane_t1

0x378c,	// (0x000662ba) rss2_list_single_pane_ParamLimits

0x378c,	// (0x000662ba) rss2_list_single_pane

0xe6aa,	// (0x000711d8) rss2_list_single_pane_t2

0xe6b8,	// (0x000711e6) rss2_list_single_pane_t3_ParamLimits

0xe6b8,	// (0x000711e6) rss2_list_single_pane_t3

0xe6d5,	// (0x00071203) rss2_list_single_pane_t4

0x206e,	// (0x00064b9c) smil_status_pane_g1

0xa05c,	// (0x0006cb8a) main_image2_pane_ParamLimits

0xa05c,	// (0x0006cb8a) main_image2_pane

0xa679,	// (0x0006d1a7) main_camera2_pane_g9_ParamLimits

0xa679,	// (0x0006d1a7) main_camera2_pane_g9

0x3691,	// (0x000661bf) main_camera2_pane_t5_ParamLimits

0x3691,	// (0x000661bf) main_camera2_pane_t5

0xa687,	// (0x0006d1b5) main_camera2_pane_t6_ParamLimits

0xa687,	// (0x0006d1b5) main_camera2_pane_t6

0x37a3,	// (0x000662d1) main_image2_pane_g1_ParamLimits

0x37a3,	// (0x000662d1) main_image2_pane_g1

0x2be5,	// (0x00065713) smil2_video_pane_ParamLimits

0x2be5,	// (0x00065713) smil2_video_pane

0xa00d,	// (0x0006cb3b) aid_zoom_text_primary_cp

0xa052,	// (0x0006cb80) popup_preview_fixed_window

0xc74e,	// (0x0006f27c) im_reading_pane_g1

0x3683,	// (0x000661b1) cams2_bc_adjust_pane_cp_ParamLimits

0x3683,	// (0x000661b1) cams2_bc_adjust_pane_cp

0xa6af,	// (0x0006d1dd) cams2_bc_adjust_pane_ParamLimits

0xa6af,	// (0x0006d1dd) cams2_bc_adjust_pane

0x3782,	// (0x000662b0) cams2_bc_adjust_pane_g1

0xa06a,	// (0x0006cb98) cams2_slider_pane

0x3782,	// (0x000662b0) cams2_slider_pane_g1

0x3782,	// (0x000662b0) cams2_slider_pane_g2

0x0006,

0xf58b,	// (0x000720b9) cams2_slider_pane_g

0x0586,	// (0x000630b4) calc_display_pane_ParamLimits

0x05ab,	// (0x000630d9) calc_paper_pane_ParamLimits

0x05ce,	// (0x000630fc) grid_calc_pane_ParamLimits

0xa580,	// (0x0006d0ae) popup_clock_digital_window_t1_ParamLimits

0xd2d1,	// (0x0006fdff) main_image_pane_t1

0x0566,	// (0x00063094) aid_size_cell_calc_ParamLimits

0x0566,	// (0x00063094) aid_size_cell_calc

0x31b8,	// (0x00065ce6) popup_blid_sat_info2_window_ParamLimits

0x31b8,	// (0x00065ce6) popup_blid_sat_info2_window

0xe6e3,	// (0x00071211) aid_size_cell_blid

0xe6eb,	// (0x00071219) bg_popup_window_pane_cp07

0xe70e,	// (0x0007123c) grid_popup_blid_pane

0xe718,	// (0x00071246) heading_pane_cp05_ParamLimits

0xe718,	// (0x00071246) heading_pane_cp05

0xe7e2,	// (0x00071310) cell_popup_blid_pane_ParamLimits

0xe7e2,	// (0x00071310) cell_popup_blid_pane

0xe80c,	// (0x0007133a) cell_popup_blid_pane_g1

0xe814,	// (0x00071342) cell_popup_blid_pane_t1

0xd080,	// (0x0006fbae) mup2_indicator_pane_ParamLimits

0xd080,	// (0x0006fbae) mup2_indicator_pane

0x9fdf,	// (0x0006cb0d) mup2_visualizer_osc_pane

0xe5ac,	// (0x000710da) mup2_visualizer_spec_pane_ParamLimits

0xe5ac,	// (0x000710da) mup2_visualizer_spec_pane

0x9fdf,	// (0x0006cb0d) mup2_spec_half_pane

0x9fdf,	// (0x0006cb0d) mup2_spec_half_pane_cp

0xe822,	// (0x00071350) mup2_spec_bar_pane_ParamLimits

0xe822,	// (0x00071350) mup2_spec_bar_pane

0xc458,	// (0x0006ef86) mup2_spec_bar_pane_g1

0xe841,	// (0x0007136f) mup2_spec_bar_pane_g2

0x0001,

0xf5b1,	// (0x000720df) mup2_spec_bar_pane_g

0x9fdf,	// (0x0006cb0d) mup2_osc_middle_pane

0xc458,	// (0x0006ef86) mup2_visualizer_osc_pane_g1

0xa094,	// (0x0006cbc2) popup_number_entry_window_t1_ParamLimits

0xa0a7,	// (0x0006cbd5) popup_number_entry_window_t2_ParamLimits

0xa0b9,	// (0x0006cbe7) popup_number_entry_window_t3_ParamLimits

0xa0cb,	// (0x0006cbf9) popup_number_entry_window_t5_ParamLimits

0xa0cb,	// (0x0006cbf9) popup_number_entry_window_t5

0xf01d,	// (0x00071b4b) popup_number_entry_window_t_ParamLimits

0xa100,	// (0x0006cc2e) text_title_cp2_ParamLimits

0xa5bf,	// (0x0006d0ed) aid_hotspot_pointer_text2_pane

0xa5e5,	// (0x0006d113) main_viewer_pane_g9_ParamLimits

0xa5e5,	// (0x0006d113) main_viewer_pane_g9

0xc996,	// (0x0006f4c4) cale_month_pane_t1_ParamLimits

0xc9dc,	// (0x0006f50a) bg_cale_pane_ParamLimits

0xc9f4,	// (0x0006f522) list_cale_pane_ParamLimits

0xca05,	// (0x0006f533) listscroll_cale_day_pane_t1

0xca17,	// (0x0006f545) scroll_pane_cp09_ParamLimits

0x258c,	// (0x000650ba) main_mup_eq_pane_t1_ParamLimits

0x258c,	// (0x000650ba) main_mup_eq_pane_t1

0x25a8,	// (0x000650d6) main_mup_eq_pane_t2_ParamLimits

0x25a8,	// (0x000650d6) main_mup_eq_pane_t2

0x25c4,	// (0x000650f2) main_mup_eq_pane_t3_ParamLimits

0x25c4,	// (0x000650f2) main_mup_eq_pane_t3

0x25e2,	// (0x00065110) main_mup_eq_pane_t4_ParamLimits

0x25e2,	// (0x00065110) main_mup_eq_pane_t4

0x2600,	// (0x0006512e) main_mup_eq_pane_t5_ParamLimits

0x2600,	// (0x0006512e) main_mup_eq_pane_t5

0x261e,	// (0x0006514c) main_mup_eq_pane_t6_ParamLimits

0x261e,	// (0x0006514c) main_mup_eq_pane_t6

0x2634,	// (0x00065162) main_mup_eq_pane_t7_ParamLimits

0x2634,	// (0x00065162) main_mup_eq_pane_t7

0x264a,	// (0x00065178) main_mup_eq_pane_t8_ParamLimits

0x264a,	// (0x00065178) main_mup_eq_pane_t8

0x2660,	// (0x0006518e) main_mup_eq_pane_t9_ParamLimits

0x2660,	// (0x0006518e) main_mup_eq_pane_t9

0x267c,	// (0x000651aa) main_mup_eq_pane_t10_ParamLimits

0x267c,	// (0x000651aa) main_mup_eq_pane_t10

0x0009,

0xf377,	// (0x00071ea5) main_mup_eq_pane_t_ParamLimits

0xf377,	// (0x00071ea5) main_mup_eq_pane_t

0x2751,	// (0x0006527f) mup_equalizer_pane_cp5_ParamLimits

0x2769,	// (0x00065297) mup_equalizer_pane_cp6_ParamLimits

0x2781,	// (0x000652af) mup_equalizer_pane_cp7_ParamLimits

0xa06a,	// (0x0006cb98) main_gallery_pane

0xe54a,	// (0x00071078) smil2_volume_pane

0xe552,	// (0x00071080) smil_status_volume_pane_g1_ParamLimits

0xe565,	// (0x00071093) smil_status_volume_pane_g2_ParamLimits

0xa649,	// (0x0006d177) smil_status_volume_pane_g3_ParamLimits

0xf50a,	// (0x00072038) smil_status_volume_pane_g_ParamLimits

0xe6eb,	// (0x00071219) bg_popup_window_pane_cp07_ParamLimits

0xe6f9,	// (0x00071227) blid_firmament_pane

0xa48d,	// (0x0006cfbb) aid_size_cell_gallery_ParamLimits

0xa48d,	// (0x0006cfbb) aid_size_cell_gallery

0xa48d,	// (0x0006cfbb) grid_gallery_pane_ParamLimits

0xa48d,	// (0x0006cfbb) grid_gallery_pane

0xe6eb,	// (0x00071219) cell_gallery_pane_ParamLimits

0xe6eb,	// (0x00071219) cell_gallery_pane

0xa48d,	// (0x0006cfbb) bg_cell_gallery_focus_pane_ParamLimits

0xa48d,	// (0x0006cfbb) bg_cell_gallery_focus_pane

0xc41a,	// (0x0006ef48) cell_gallery_pane_g1_ParamLimits

0xc41a,	// (0x0006ef48) cell_gallery_pane_g1

0xc41a,	// (0x0006ef48) cell_gallery_pane_g2_ParamLimits

0xc41a,	// (0x0006ef48) cell_gallery_pane_g2

0xc41a,	// (0x0006ef48) cell_gallery_pane_g3_ParamLimits

0xc41a,	// (0x0006ef48) cell_gallery_pane_g3

0xc428,	// (0x0006ef56) cell_gallery_pane_g4_ParamLimits

0xc428,	// (0x0006ef56) cell_gallery_pane_g4

0x0003,

0xf5b6,	// (0x000720e4) cell_gallery_pane_g_ParamLimits

0xf5b6,	// (0x000720e4) cell_gallery_pane_g

0xe84b,	// (0x00071379) bg_cell_gallery_focus_pane_g1

0xe853,	// (0x00071381) bg_cell_gallery_focus_pane_g2

0xe85b,	// (0x00071389) bg_cell_gallery_focus_pane_g3

0xe863,	// (0x00071391) bg_cell_gallery_focus_pane_g4

0xe86b,	// (0x00071399) bg_cell_gallery_focus_pane_g5

0xe873,	// (0x000713a1) bg_cell_gallery_focus_pane_g6

0xe87b,	// (0x000713a9) bg_cell_gallery_focus_pane_g7

0xe883,	// (0x000713b1) bg_cell_gallery_focus_pane_g8

0x0007,

0xf5bf,	// (0x000720ed) bg_cell_gallery_focus_pane_g

0xe88b,	// (0x000713b9) aid_firma_cardinal

0xe89f,	// (0x000713cd) blid_firmament_pane_t1

0xe8b6,	// (0x000713e4) blid_firmament_pane_t2

0xe8cd,	// (0x000713fb) blid_firmament_pane_t3

0xe8e4,	// (0x00071412) blid_firmament_pane_t4

0x0003,

0xf5d0,	// (0x000720fe) blid_firmament_pane_t

0xe8fb,	// (0x00071429) blid_sat_info_pane

0xc458,	// (0x0006ef86) blid_sat_info_pane_g1

0xc458,	// (0x0006ef86) blid_sat_info_pane_g2

0x0001,

0xf08c,	// (0x00071bba) blid_sat_info_pane_g

0xe90b,	// (0x00071439) blid_sat_info_pane_t1

0xe919,	// (0x00071447) smil2_volume_content_pane

0xe922,	// (0x00071450) smil2_volume_pane_g1

0xccda,	// (0x0006f808) smil2_volume_content_pane_g1

0xe92a,	// (0x00071458) smil2_volume_content_pane_g2

0xe933,	// (0x00071461) smil2_volume_content_pane_g3

0xe93c,	// (0x0007146a) smil2_volume_content_pane_g4

0xe945,	// (0x00071473) smil2_volume_content_pane_g5

0xe94e,	// (0x0007147c) smil2_volume_content_pane_g6

0xe957,	// (0x00071485) smil2_volume_content_pane_g7

0xe960,	// (0x0007148e) smil2_volume_content_pane_g8

0xe969,	// (0x00071497) smil2_volume_content_pane_g9

0xe972,	// (0x000714a0) smil2_volume_content_pane_g10

0x0009,

0xf5d9,	// (0x00072107) smil2_volume_content_pane_g

0x0b6d,	// (0x0006369b) cale_week_day_heading_pane_t1_ParamLimits

0x0b97,	// (0x000636c5) cale_week_day_heading_pane_t2_ParamLimits

0x0bc6,	// (0x000636f4) cale_week_day_heading_pane_t3_ParamLimits

0x0bf5,	// (0x00063723) cale_week_day_heading_pane_t4_ParamLimits

0x0c24,	// (0x00063752) cale_week_day_heading_pane_t5_ParamLimits

0x0c57,	// (0x00063785) cale_week_day_heading_pane_t6_ParamLimits

0x0c8e,	// (0x000637bc) cale_week_day_heading_pane_t7_ParamLimits

0xf124,	// (0x00071c52) cale_week_day_heading_pane_t_ParamLimits

0xc638,	// (0x0006f166) bg_cale_side_pane_ParamLimits

0x0cb8,	// (0x000637e6) cale_week_time_pane_t1_ParamLimits

0x0cd2,	// (0x00063800) cale_week_time_pane_t2_ParamLimits

0x0cec,	// (0x0006381a) cale_week_time_pane_t3_ParamLimits

0x0d06,	// (0x00063834) cale_week_time_pane_t4_ParamLimits

0x0d20,	// (0x0006384e) cale_week_time_pane_t5_ParamLimits

0x0d3a,	// (0x00063868) cale_week_time_pane_t6_ParamLimits

0x0d58,	// (0x00063886) cale_week_time_pane_t7_ParamLimits

0x0d7a,	// (0x000638a8) cale_week_time_pane_t8_ParamLimits

0xf133,	// (0x00071c61) cale_week_time_pane_t_ParamLimits

0x0d9e,	// (0x000638cc) cell_cale_week_pane_g2_ParamLimits

0xc638,	// (0x0006f166) bg_cale_side_pane_cp01_ParamLimits

0x1e5f,	// (0x0006498d) cale_month_week_pane_t1_ParamLimits

0x1e78,	// (0x000649a6) cale_month_week_pane_t2_ParamLimits

0x1e91,	// (0x000649bf) cale_month_week_pane_t3_ParamLimits

0x1eaa,	// (0x000649d8) cale_month_week_pane_t4_ParamLimits

0x1ec3,	// (0x000649f1) cale_month_week_pane_t5_ParamLimits

0x1edc,	// (0x00064a0a) cale_month_week_pane_t6_ParamLimits

0xf201,	// (0x00071d2f) cale_month_week_pane_t_ParamLimits

0xa4f4,	// (0x0006d022) cell_cale_month_pane_g1_ParamLimits

0xa06a,	// (0x0006cb98) main_cale_event_viewer_pane

0x9fdf,	// (0x0006cb0d) listscroll_cale_event_viewer_pane

0xe97b,	// (0x000714a9) list_cale_ev_pane

0xe983,	// (0x000714b1) scroll_pane_cp023

0x37b9,	// (0x000662e7) field_cale_ev_pane_ParamLimits

0x37b9,	// (0x000662e7) field_cale_ev_pane

0xe98f,	// (0x000714bd) field_cale_ev_content_pane_ParamLimits

0xe98f,	// (0x000714bd) field_cale_ev_content_pane

0xe99b,	// (0x000714c9) field_cale_ev_pane_g1_ParamLimits

0xe99b,	// (0x000714c9) field_cale_ev_pane_g1

0xe9a7,	// (0x000714d5) field_cale_ev_pane_g2_ParamLimits

0xe9a7,	// (0x000714d5) field_cale_ev_pane_g2

0xe9bf,	// (0x000714ed) field_cale_ev_pane_g3_ParamLimits

0xe9bf,	// (0x000714ed) field_cale_ev_pane_g3

0x0002,

0xf5ee,	// (0x0007211c) field_cale_ev_pane_g_ParamLimits

0xf5ee,	// (0x0007211c) field_cale_ev_pane_g

0xe9d7,	// (0x00071505) field_cale_ev_pane_t1_ParamLimits

0xe9d7,	// (0x00071505) field_cale_ev_pane_t1

0x37dd,	// (0x0006630b) field_cale_ev_content_pane_t1_ParamLimits

0x37dd,	// (0x0006630b) field_cale_ev_content_pane_t1

0xd12d,	// (0x0006fc5b) bg_button_pane_cp01

0x07eb,	// (0x00063319) listscroll_cale_week_pane_ParamLimits

0xa4e1,	// (0x0006d00f) popup_toolbar_window_cp01

0xc609,	// (0x0006f137) listscroll_cale_week_pane_t1_ParamLimits

0x20cf,	// (0x00064bfd) listscroll_cale_day_pane_ParamLimits

0xc9d3,	// (0x0006f501) popup_toolbar_window_cp02

0xca05,	// (0x0006f533) listscroll_cale_day_pane_t1_ParamLimits

0x07eb,	// (0x00063319) main_cale_month_pane_ParamLimits

0xa634,	// (0x0006d162) popup_toolbar_window_cp03_ParamLimits

0xa634,	// (0x0006d162) popup_toolbar_window_cp03

0x2aa3,	// (0x000655d1) main_image_pane_g2_ParamLimits

0x2aa3,	// (0x000655d1) main_image_pane_g2

0x2ab4,	// (0x000655e2) main_image_pane_g3_ParamLimits

0x2ab4,	// (0x000655e2) main_image_pane_g3

0x0002,

0xf409,	// (0x00071f37) main_image_pane_g_ParamLimits

0xf409,	// (0x00071f37) main_image_pane_g

0xd2d1,	// (0x0006fdff) main_image_pane_t1_ParamLimits

0x2ac5,	// (0x000655f3) main_image_pane_t2_ParamLimits

0x2ac5,	// (0x000655f3) main_image_pane_t2

0x2ad7,	// (0x00065605) main_image_pane_t3_ParamLimits

0x2ad7,	// (0x00065605) main_image_pane_t3

0x2aff,	// (0x0006562d) main_image_pane_t4_ParamLimits

0x2aff,	// (0x0006562d) main_image_pane_t4

0x0003,

0xf410,	// (0x00071f3e) main_image_pane_t_ParamLimits

0xf410,	// (0x00071f3e) main_image_pane_t

0x2b1f,	// (0x0006564d) popup_image_details_window_cp01

0x2b29,	// (0x00065657) popup_toobar_trans_pane_cp01_ParamLimits

0x2b29,	// (0x00065657) popup_toobar_trans_pane_cp01

0x32ab,	// (0x00065dd9) popup_image_details_window_ParamLimits

0x32ab,	// (0x00065dd9) popup_image_details_window

0xa605,	// (0x0006d133) popup_image_focus_window

0xa66b,	// (0x0006d199) camera2_autofocus_pane_ParamLimits

0xa66b,	// (0x0006d199) camera2_autofocus_pane

0x9fdf,	// (0x0006cb0d) bg_popup_sub_pane_cp06

0xe9ee,	// (0x0007151c) popup_image_focus_window_g1

0xe9f6,	// (0x00071524) popup_image_focus_window_g2

0xe9fe,	// (0x0007152c) popup_image_focus_window_g3

0xea06,	// (0x00071534) popup_image_focus_window_g4

0x0003,

0xf5f5,	// (0x00072123) popup_image_focus_window_g

0xea0e,	// (0x0007153c) popup_image_focus_window_t1

0xea1c,	// (0x0007154a) popup_image_focus_window_t2

0xea2c,	// (0x0007155a) popup_image_focus_window_t3

0x0002,

0xf5fe,	// (0x0007212c) popup_image_focus_window_t

0xc41a,	// (0x0006ef48) camera2_autofocus_pane_g1

0xa48d,	// (0x0006cfbb) bg_tb_trans_pane_cp01

0xea3a,	// (0x00071568) popup_image_details_window_g1

0xea4d,	// (0x0007157b) popup_image_details_window_g2

0x0002,

0xf610,	// (0x0007213e) popup_image_details_window_g

0xea76,	// (0x000715a4) popup_image_details_window_t1

0xea88,	// (0x000715b6) popup_image_details_window_t2

0xeaa1,	// (0x000715cf) popup_image_details_window_t3

0xeab5,	// (0x000715e3) popup_image_details_window_t4

0xead0,	// (0x000715fe) popup_image_details_window_t5

0x0004,

0xf617,	// (0x00072145) popup_image_details_window_t

0xc4a2,	// (0x0006efd0) bg_calc_paper_pane_ParamLimits

0xa06a,	// (0x0006cb98) grid_highlight_pane_cp013

0xa4a3,	// (0x0006cfd1) list_calc_pane_ParamLimits

0xa4b5,	// (0x0006cfe3) scroll_pane_cp024

0xc4b6,	// (0x0006efe4) bg_calc_display_pane_ParamLimits

0x0610,	// (0x0006313e) calc_display_pane_t1_ParamLimits

0x0625,	// (0x00063153) calc_display_pane_t2_ParamLimits

0xa4bd,	// (0x0006cfeb) calc_display_pane_t3_ParamLimits

0xf0a4,	// (0x00071bd2) calc_display_pane_t_ParamLimits

0x06f3,	// (0x00063221) cell_calc_pane_g2

0x0001,

0xf0c1,	// (0x00071bef) cell_calc_pane_g

0x06fc,	// (0x0006322a) cell_calc_pane_t1

0xc50b,	// (0x0006f039) grid_highlight_pane_cp02_ParamLimits

0xc521,	// (0x0006f04f) toolbar_button_pane_cp01_ParamLimits

0xc521,	// (0x0006f04f) toolbar_button_pane_cp01

0xd316,	// (0x0006fe44) temp_image_control_pane_ParamLimits

0xd316,	// (0x0006fe44) temp_image_control_pane

0xa05c,	// (0x0006cb8a) main_mp3_pane

0xeaea,	// (0x00071618) temp_image_control_pane_g1_ParamLimits

0xeaea,	// (0x00071618) temp_image_control_pane_g1

0xeaf8,	// (0x00071626) temp_image_control_pane_g2_ParamLimits

0xeaf8,	// (0x00071626) temp_image_control_pane_g2

0xeb0a,	// (0x00071638) temp_image_control_pane_g3_ParamLimits

0xeb0a,	// (0x00071638) temp_image_control_pane_g3

0x37fe,	// (0x0006632c) temp_image_control_pane_g4_ParamLimits

0x37fe,	// (0x0006632c) temp_image_control_pane_g4

0x0003,

0xf622,	// (0x00072150) temp_image_control_pane_g_ParamLimits

0xf622,	// (0x00072150) temp_image_control_pane_g

0xeaea,	// (0x00071618) main_mp3_pane_g1

0x3811,	// (0x0006633f) main_mp3_pane_g2

0x0007,

0xf62b,	// (0x00072159) main_mp3_pane_g

0xeb3f,	// (0x0007166d) main_mp3_pane_t1

0xc428,	// (0x0006ef56) main_camera_pane_g8_ParamLimits

0xc428,	// (0x0006ef56) main_camera_pane_g8

0x0f75,	// (0x00063aa3) main_video_pane_g7_ParamLimits

0x0f75,	// (0x00063aa3) main_video_pane_g7

0xa69b,	// (0x0006d1c9) main_camera2_pane_t7_ParamLimits

0xa69b,	// (0x0006d1c9) main_camera2_pane_t7

0xc7b4,	// (0x0006f2e2) scroll_pane_cp025_ParamLimits

0xc7b4,	// (0x0006f2e2) scroll_pane_cp025

0xc7c8,	// (0x0006f2f6) scroll_pane_cp026_ParamLimits

0xc7c8,	// (0x0006f2f6) scroll_pane_cp026

0xc7d7,	// (0x0006f305) wml_content_pane_ParamLimits

0xa06a,	// (0x0006cb98) main_touch_calib_pane

0x38e3,	// (0x00066411) main_touch_calib_pane_g1

0x38f5,	// (0x00066423) main_touch_calib_pane_g2

0x3907,	// (0x00066435) main_touch_calib_pane_g3

0x3919,	// (0x00066447) main_touch_calib_pane_g4

0x0003,

0xf649,	// (0x00072177) main_touch_calib_pane_g

0x392b,	// (0x00066459) main_touch_calib_pane_t1

0x3945,	// (0x00066473) main_touch_calib_pane_t2

0x0004,

0xf652,	// (0x00072180) main_touch_calib_pane_t

0xcee8,	// (0x0006fa16) mup_progress_pane_cp02

0xcf07,	// (0x0006fa35) navi_pane_g1

0xcf69,	// (0x0006fa97) navi_pane_mp_t3

0xa05c,	// (0x0006cb8a) main_mp3_pane_ParamLimits

0x3464,	// (0x00065f92) navi_pane_ParamLimits

0xeaea,	// (0x00071618) main_mp3_pane_g1_ParamLimits

0x3811,	// (0x0006633f) main_mp3_pane_g2_ParamLimits

0x381d,	// (0x0006634b) main_mp3_pane_g3_ParamLimits

0x381d,	// (0x0006634b) main_mp3_pane_g3

0x382b,	// (0x00066359) main_mp3_pane_g4_ParamLimits

0x382b,	// (0x00066359) main_mp3_pane_g4

0xc41a,	// (0x0006ef48) main_mp3_pane_g5_ParamLimits

0xc41a,	// (0x0006ef48) main_mp3_pane_g5

0xeb1a,	// (0x00071648) main_mp3_pane_g6_ParamLimits

0xeb1a,	// (0x00071648) main_mp3_pane_g6

0xeb27,	// (0x00071655) main_mp3_pane_g7_ParamLimits

0xeb27,	// (0x00071655) main_mp3_pane_g7

0xeb33,	// (0x00071661) main_mp3_pane_g8_ParamLimits

0xeb33,	// (0x00071661) main_mp3_pane_g8

0xf62b,	// (0x00072159) main_mp3_pane_g_ParamLimits

0x3837,	// (0x00066365) main_mp3_pane_t2

0x3845,	// (0x00066373) main_mp3_pane_t3

0xeb4d,	// (0x0007167b) main_mp3_pane_t4

0xeb5b,	// (0x00071689) main_mp3_pane_t5

0x0005,

0xf63c,	// (0x0007216a) main_mp3_pane_t

0xeb69,	// (0x00071697) mup_progress_pane_cp01

0xa005,	// (0x0006cb33) aid_zoom_text_secondary2

0xe97b,	// (0x000714a9) list_cale_ev2_pane

0xe983,	// (0x000714b1) scroll_pane_cp023_ParamLimits

0x399f,	// (0x000664cd) field_cale_ev2_pane_ParamLimits

0x399f,	// (0x000664cd) field_cale_ev2_pane

0x39c3,	// (0x000664f1) field_cale_ev2_pane_g1_ParamLimits

0x39c3,	// (0x000664f1) field_cale_ev2_pane_g1

0x39cf,	// (0x000664fd) field_cale_ev2_pane_g2_ParamLimits

0x39cf,	// (0x000664fd) field_cale_ev2_pane_g2

0x39e7,	// (0x00066515) field_cale_ev2_pane_g3_ParamLimits

0x39e7,	// (0x00066515) field_cale_ev2_pane_g3

0x0003,

0xf65d,	// (0x0007218b) field_cale_ev2_pane_g_ParamLimits

0xf65d,	// (0x0007218b) field_cale_ev2_pane_g

0x39ff,	// (0x0006652d) field_cale_ev2_pane_t1_ParamLimits

0x39ff,	// (0x0006652d) field_cale_ev2_pane_t1

0x3a16,	// (0x00066544) field_cale_ev2_pane_t2_ParamLimits

0x3a16,	// (0x00066544) field_cale_ev2_pane_t2

0x0001,

0xf666,	// (0x00072194) field_cale_ev2_pane_t_ParamLimits

0xf666,	// (0x00072194) field_cale_ev2_pane_t

0x2963,	// (0x00065491) main_postcard_pane_g5_ParamLimits

0x2963,	// (0x00065491) main_postcard_pane_g5

0x2979,	// (0x000654a7) main_postcard_pane_g6_ParamLimits

0x2979,	// (0x000654a7) main_postcard_pane_g6

0xa48d,	// (0x0006cfbb) camera2_autofocus_pane_cp_ParamLimits

0xa48d,	// (0x0006cfbb) camera2_autofocus_pane_cp

0xa05c,	// (0x0006cb8a) main_mup3_pane

0x3a75,	// (0x000665a3) main_mup3_pane_g1_ParamLimits

0x3a75,	// (0x000665a3) main_mup3_pane_g1

0x3ac7,	// (0x000665f5) main_mup3_pane_g2_ParamLimits

0x3ac7,	// (0x000665f5) main_mup3_pane_g2

0x3b27,	// (0x00066655) main_mup3_pane_g3_ParamLimits

0x3b27,	// (0x00066655) main_mup3_pane_g3

0x3b8f,	// (0x000666bd) main_mup3_pane_g4_ParamLimits

0x3b8f,	// (0x000666bd) main_mup3_pane_g4

0x3bf7,	// (0x00066725) main_mup3_pane_g5_ParamLimits

0x3bf7,	// (0x00066725) main_mup3_pane_g5

0xa6f7,	// (0x0006d225) main_mup3_pane_g6_ParamLimits

0xa6f7,	// (0x0006d225) main_mup3_pane_g6

0xc428,	// (0x0006ef56) main_mup3_pane_g7_ParamLimits

0xc428,	// (0x0006ef56) main_mup3_pane_g7

0x0007,

0xf676,	// (0x000721a4) main_mup3_pane_g_ParamLimits

0xf676,	// (0x000721a4) main_mup3_pane_g

0x3cd0,	// (0x000667fe) main_mup3_pane_t1_ParamLimits

0x3cd0,	// (0x000667fe) main_mup3_pane_t1

0x3db6,	// (0x000668e4) main_mup3_pane_t2_ParamLimits

0x3db6,	// (0x000668e4) main_mup3_pane_t2

0x3ea0,	// (0x000669ce) main_mup3_pane_t4_ParamLimits

0x3ea0,	// (0x000669ce) main_mup3_pane_t4

0x3eb2,	// (0x000669e0) main_mup3_pane_t5_ParamLimits

0x3eb2,	// (0x000669e0) main_mup3_pane_t5

0x3f8c,	// (0x00066aba) main_mup3_pane_t6_ParamLimits

0x3f8c,	// (0x00066aba) main_mup3_pane_t6

0x0005,

0xf687,	// (0x000721b5) main_mup3_pane_t_ParamLimits

0xf687,	// (0x000721b5) main_mup3_pane_t

0x4034,	// (0x00066b62) mup3_progress_pane_ParamLimits

0x4034,	// (0x00066b62) mup3_progress_pane

0x409c,	// (0x00066bca) popup_mup3_control_window_ParamLimits

0x409c,	// (0x00066bca) popup_mup3_control_window

0xeb7d,	// (0x000716ab) popup_mup3_text_window

0x40b4,	// (0x00066be2) mup3_progress_pane_t1

0x40cb,	// (0x00066bf9) mup3_progress_pane_t2

0xeb85,	// (0x000716b3) mup3_progress_pane_t3

0x0002,

0xf694,	// (0x000721c2) mup3_progress_pane_t

0xeb9c,	// (0x000716ca) mup_progress_pane_cp03

0xebad,	// (0x000716db) bg_tb_trans_pane_cp04

0xebad,	// (0x000716db) mup3_volume_pane

0xebb5,	// (0x000716e3) popup_mup3_control_window_g1

0xebb5,	// (0x000716e3) mup3_volume_pane_g1

0xebb5,	// (0x000716e3) mup3_volume_pane_g2

0xebb5,	// (0x000716e3) mup3_volume_pane_g3

0x0002,

0xf69b,	// (0x000721c9) mup3_volume_pane_g

0x9fdf,	// (0x0006cb0d) bg_tb_trans_pane_cp03

0xebbd,	// (0x000716eb) popup_mup3_text_window_g1

0xebc5,	// (0x000716f3) popup_mup3_text_window_t1

0xc4fe,	// (0x0006f02c) list_calc_item_pane_g1_ParamLimits

0xe661,	// (0x0007118f) mup_volume_pane_cp_g1

0x395f,	// (0x0006648d) main_touch_calib_pane_t3

0x3973,	// (0x000664a1) main_touch_calib_pane_t4

0x3989,	// (0x000664b7) main_touch_calib_pane_t5

0x9fe9,	// (0x0006cb17) aid_cell_size_toolbar2

0x9ff1,	// (0x0006cb1f) aid_popup3_width_pane

0x9ffd,	// (0x0006cb2b) aid_zoom_text_msg_primary

0x0e4e,	// (0x0006397c) vorec_t7

0xc4c2,	// (0x0006eff0) bg_calc_paper_pane_g1_ParamLimits

0xc4ce,	// (0x0006effc) bg_calc_paper_pane_g2_ParamLimits

0xc4da,	// (0x0006f008) bg_calc_paper_pane_g3_ParamLimits

0xc4e6,	// (0x0006f014) bg_calc_paper_pane_g4_ParamLimits

0xc4f2,	// (0x0006f020) bg_calc_paper_pane_g5_ParamLimits

0x0675,	// (0x000631a3) bg_calc_paper_pane_g6_ParamLimits

0x0688,	// (0x000631b6) bg_calc_paper_pane_g7_ParamLimits

0x069b,	// (0x000631c9) bg_calc_paper_pane_g8_ParamLimits

0xf0ab,	// (0x00071bd9) bg_calc_paper_pane_g_ParamLimits

0x06ae,	// (0x000631dc) calc_bg_paper_pane_g9_ParamLimits

0xa48d,	// (0x0006cfbb) image_qvga_pane_ParamLimits

0xa48d,	// (0x0006cfbb) image_qvga_pane

0xc39f,	// (0x0006eecd) bg_popup_sub_pane_cp04_ParamLimits

0xd24d,	// (0x0006fd7b) popup_mup_playback_window_g1_ParamLimits

0xd259,	// (0x0006fd87) popup_mup_playback_window_t1_ParamLimits

0xd26e,	// (0x0006fd9c) popup_mup_playback_window_t2_ParamLimits

0xf404,	// (0x00071f32) popup_mup_playback_window_t_ParamLimits

0xc428,	// (0x0006ef56) main_mup2_pane_g3_ParamLimits

0xc428,	// (0x0006ef56) main_mup2_pane_g3

0x110e,	// (0x00063c3c) popup_toolbar_window_cp04

0xd5f2,	// (0x00070120) popup_call2_audio_second_window_g3_ParamLimits

0xd5f2,	// (0x00070120) popup_call2_audio_second_window_g3

0xdc1a,	// (0x00070748) popup_call2_audio_first_window_g4_ParamLimits

0xdc1a,	// (0x00070748) popup_call2_audio_first_window_g4

0xe241,	// (0x00070d6f) popup_call2_audio_in_window_g4_ParamLimits

0xe241,	// (0x00070d6f) popup_call2_audio_in_window_g4

0x2a85,	// (0x000655b3) aid_area_sk_bg_cut_ParamLimits

0x2a85,	// (0x000655b3) aid_area_sk_bg_cut

0xd283,	// (0x0006fdb1) aid_area_sk_bg_cut_2_ParamLimits

0xd283,	// (0x0006fdb1) aid_area_sk_bg_cut_2

0x9fdf,	// (0x0006cb0d) aid_placing_details_win

0x9fdf,	// (0x0006cb0d) aid_placing_details_win_2

0xc41a,	// (0x0006ef48) camera2_autofocus_pane_g1_ParamLimits

0x0489,	// (0x00062fb7) popup_fixed_preview_cale_window_ParamLimits

0x0489,	// (0x00062fb7) popup_fixed_preview_cale_window

0xcfb0,	// (0x0006fade) navi_slider_pane_g3

0xcfb9,	// (0x0006fae7) navi_slider_pane_g4

0xcfc2,	// (0x0006faf0) navi_slider_pane_g5

0xcfb0,	// (0x0006fade) navi_slider_pane_g6

0xa5a6,	// (0x0006d0d4) navi_slider_pane_g7

0xd0f2,	// (0x0006fc20) mup_scale_pane_g3

0xd0fb,	// (0x0006fc29) mup_scale_pane_g4

0xd104,	// (0x0006fc32) mup_scale_pane_g5

0x2799,	// (0x000652c7) mup_scale_pane_g6

0x27a2,	// (0x000652d0) mup_scale_pane_g7

0x3782,	// (0x000662b0) cams2_slider_pane_g3

0x3782,	// (0x000662b0) cams2_slider_pane_g4

0x3782,	// (0x000662b0) cams2_slider_pane_g5

0x3782,	// (0x000662b0) cams2_slider_pane_g6

0x3782,	// (0x000662b0) cams2_slider_pane_g7

0xc458,	// (0x0006ef86) camera2_autofocus_pane_cp_g1

0xe4d1,	// (0x00070fff) bg_popup_preview_window_pane_cp02_ParamLimits

0xe4d1,	// (0x00070fff) bg_popup_preview_window_pane_cp02

0xebd3,	// (0x00071701) list_fp_cale_pane_ParamLimits

0xebd3,	// (0x00071701) list_fp_cale_pane

0xebdf,	// (0x0007170d) popup_fixed_preview_cale_window_t1_ParamLimits

0xebdf,	// (0x0007170d) popup_fixed_preview_cale_window_t1

0x40e2,	// (0x00066c10) popup_fixed_preview_cale_window_t2_ParamLimits

0x40e2,	// (0x00066c10) popup_fixed_preview_cale_window_t2

0x40f7,	// (0x00066c25) popup_fixed_preview_cale_window_t3_ParamLimits

0x40f7,	// (0x00066c25) popup_fixed_preview_cale_window_t3

0x0002,

0xf6a2,	// (0x000721d0) popup_fixed_preview_cale_window_t_ParamLimits

0xf6a2,	// (0x000721d0) popup_fixed_preview_cale_window_t

0x410e,	// (0x00066c3c) list_single_fp_cale_pane_ParamLimits

0x410e,	// (0x00066c3c) list_single_fp_cale_pane

0xebfd,	// (0x0007172b) list_single_fp_cale_pane_g1_ParamLimits

0xebfd,	// (0x0007172b) list_single_fp_cale_pane_g1

0xec09,	// (0x00071737) list_single_fp_cale_pane_g2_ParamLimits

0xec09,	// (0x00071737) list_single_fp_cale_pane_g2

0x0002,

0xf6a9,	// (0x000721d7) list_single_fp_cale_pane_g_ParamLimits

0xf6a9,	// (0x000721d7) list_single_fp_cale_pane_g

0xec22,	// (0x00071750) list_single_fp_cale_pane_t1_ParamLimits

0xec22,	// (0x00071750) list_single_fp_cale_pane_t1

0xec34,	// (0x00071762) list_single_fp_cale_pane_t2_ParamLimits

0xec34,	// (0x00071762) list_single_fp_cale_pane_t2

0x0001,

0xf6b0,	// (0x000721de) list_single_fp_cale_pane_t_ParamLimits

0xf6b0,	// (0x000721de) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xa06a,	// (0x0006cb98) main_dialer_pane

0x9fdf,	// (0x0006cb0d) aid_cell_size_keypad

0x9fdf,	// (0x0006cb0d) dialer_ne_pane

0x9fdf,	// (0x0006cb0d) grid_dialer_command_1_pane

0x9fdf,	// (0x0006cb0d) grid_dialer_command_2_pane

0x9fdf,	// (0x0006cb0d) grid_dialer_keypad_pane

0x4123,	// (0x00066c51) bg_popup_call_pane_cp06_ParamLimits

0x4123,	// (0x00066c51) bg_popup_call_pane_cp06

0x4123,	// (0x00066c51) dialer_ne_clear_pane_ParamLimits

0x4123,	// (0x00066c51) dialer_ne_clear_pane

0xc458,	// (0x0006ef86) dialer_ne_pane_g1

0xc476,	// (0x0006efa4) dialer_ne_pane_t1_ParamLimits

0xc476,	// (0x0006efa4) dialer_ne_pane_t1

0x4131,	// (0x00066c5f) dialer_ne_pane_t2_ParamLimits

0x4131,	// (0x00066c5f) dialer_ne_pane_t2

0x4159,	// (0x00066c87) dialer_ne_pane_t3_ParamLimits

0x4159,	// (0x00066c87) dialer_ne_pane_t3

0x0002,

0xf6b5,	// (0x000721e3) dialer_ne_pane_t_ParamLimits

0xf6b5,	// (0x000721e3) dialer_ne_pane_t

0x4159,	// (0x00066c87) dialer_ne_pane_t3_copy1_ParamLimits

0x4159,	// (0x00066c87) dialer_ne_pane_t3_copy1

0xec67,	// (0x00071795) cell_dialer_keypad_pane_ParamLimits

0xec67,	// (0x00071795) cell_dialer_keypad_pane

0xa48d,	// (0x0006cfbb) cell_dialer_command_1_pane_ParamLimits

0xa48d,	// (0x0006cfbb) cell_dialer_command_1_pane

0xec7e,	// (0x000717ac) cell_dialer_command_2_pane_ParamLimits

0xec7e,	// (0x000717ac) cell_dialer_command_2_pane

0xa48d,	// (0x0006cfbb) bg_button_pane_cp02_ParamLimits

0xa48d,	// (0x0006cfbb) bg_button_pane_cp02

0xc41a,	// (0x0006ef48) cell_dialer_keypad_pane_g1_ParamLimits

0xc41a,	// (0x0006ef48) cell_dialer_keypad_pane_g1

0xa48d,	// (0x0006cfbb) bg_button_pane_cp03_ParamLimits

0xa48d,	// (0x0006cfbb) bg_button_pane_cp03

0xc41a,	// (0x0006ef48) cell_dialer_command_1_pane_g1_ParamLimits

0xc41a,	// (0x0006ef48) cell_dialer_command_1_pane_g1

0x9fdf,	// (0x0006cb0d) bg_button_pane_cp04

0xc458,	// (0x0006ef86) cell_dialer_command_2_pane_g1

0x9fdf,	// (0x0006cb0d) bg_button_pane_cp06

0xc458,	// (0x0006ef86) dialer_ne_clear_pane_g1

0x24a8,	// (0x00064fd6) navi_pane_g2

0x24d6,	// (0x00065004) navi_pane_g3

0x0002,

0xf30c,	// (0x00071e3a) navi_pane_g

0x2501,	// (0x0006502f) navi_pane_mv_g2

0x2528,	// (0x00065056) navi_pane_mv_g5

0x2530,	// (0x0006505e) navi_pane_mv_t1

0xc4b6,	// (0x0006efe4) main_clock2_pane

0xa48d,	// (0x0006cfbb) main_clock2_list_pane_ParamLimits

0xa48d,	// (0x0006cfbb) main_clock2_list_pane

0x41ec,	// (0x00066d1a) main_clock2_pane_t1_ParamLimits

0x41ec,	// (0x00066d1a) main_clock2_pane_t1

0x4227,	// (0x00066d55) main_clock2_pane_t2_ParamLimits

0x4227,	// (0x00066d55) main_clock2_pane_t2

0x0004,

0xf6c1,	// (0x000721ef) main_clock2_pane_t_ParamLimits

0xf6c1,	// (0x000721ef) main_clock2_pane_t

0x42bd,	// (0x00066deb) popup_clock_analogue_window_cp03_ParamLimits

0x42bd,	// (0x00066deb) popup_clock_analogue_window_cp03

0x42e2,	// (0x00066e10) popup_clock_digital_window_cp02_ParamLimits

0x42e2,	// (0x00066e10) popup_clock_digital_window_cp02

0x435b,	// (0x00066e89) main_clock2_list_single_pane_ParamLimits

0x435b,	// (0x00066e89) main_clock2_list_single_pane

0xc693,	// (0x0006f1c1) list_highlight_pane_cp05

0xecbf,	// (0x000717ed) main_clock2_list_single_pane_t1

0x110e,	// (0x00063c3c) popup_toolbar_window_cp04_ParamLimits

0xc428,	// (0x0006ef56) camera2_autofocus_pane_g2_ParamLimits

0xc428,	// (0x0006ef56) camera2_autofocus_pane_g2

0xc428,	// (0x0006ef56) camera2_autofocus_pane_g3_ParamLimits

0xc428,	// (0x0006ef56) camera2_autofocus_pane_g3

0xc428,	// (0x0006ef56) camera2_autofocus_pane_g4_ParamLimits

0xc428,	// (0x0006ef56) camera2_autofocus_pane_g4

0xc428,	// (0x0006ef56) camera2_autofocus_pane_g5_ParamLimits

0xc428,	// (0x0006ef56) camera2_autofocus_pane_g5

0x0004,

0xf605,	// (0x00072133) camera2_autofocus_pane_g_ParamLimits

0xf605,	// (0x00072133) camera2_autofocus_pane_g

0x3a2b,	// (0x00066559) camera2_autofocus_pane_cp_g2

0x3a33,	// (0x00066561) camera2_autofocus_pane_cp_g3

0x3a3b,	// (0x00066569) camera2_autofocus_pane_cp_g4

0x3a43,	// (0x00066571) camera2_autofocus_pane_cp_g5

0x0004,

0xf66b,	// (0x00072199) camera2_autofocus_pane_cp_g

0x9fdf,	// (0x0006cb0d) popup_dialer_spcha_window

0x9fdf,	// (0x0006cb0d) bg_popup_sub_pane_cp07

0x9fdf,	// (0x0006cb0d) list_spcha_pane

0xeccd,	// (0x000717fb) list_single_spcha_pane_ParamLimits

0xeccd,	// (0x000717fb) list_single_spcha_pane

0x9fdf,	// (0x0006cb0d) list_highlight_pane_cp06

0xcbae,	// (0x0006f6dc) list_single_spcha_pane_t1

0xdfeb,	// (0x00070b19) popup_call2_audio_out_window_g4_ParamLimits

0xdfeb,	// (0x00070b19) popup_call2_audio_out_window_g4

0xa06a,	// (0x0006cb98) main_imed2_pane

0xa60f,	// (0x0006d13d) popup_imed_adjust2_window

0x32c3,	// (0x00065df1) popup_imed_trans_window_ParamLimits

0x32c3,	// (0x00065df1) popup_imed_trans_window

0xe744,	// (0x00071272) popup_blid_sat_info2_window_t1

0xe752,	// (0x00071280) popup_blid_sat_info2_window_t2

0x000a,

0xf59a,	// (0x000720c8) popup_blid_sat_info2_window_t

0x4416,	// (0x00066f44) aid_size_cell_colour_35

0x4436,	// (0x00066f64) aid_size_cell_colour_112

0x4456,	// (0x00066f84) aid_size_cell_effect

0xd080,	// (0x0006fbae) bg_tb_trans_pane_cp02

0x4476,	// (0x00066fa4) heading_imed_pane

0x4482,	// (0x00066fb0) listscroll_imed_pane

0xecdf,	// (0x0007180d) heading_imed_pane_g1

0xece7,	// (0x00071815) heading_imed_pane_t1

0xecf5,	// (0x00071823) grid_imed_colour_35_pane_ParamLimits

0xecf5,	// (0x00071823) grid_imed_colour_35_pane

0x448e,	// (0x00066fbc) grid_imed_effect_pane

0xed11,	// (0x0007183f) list_imed_aspect_pane

0x44a5,	// (0x00066fd3) scroll_pane_cp027_ParamLimits

0x44a5,	// (0x00066fd3) scroll_pane_cp027

0x44b6,	// (0x00066fe4) cell_imed_effect_pane_ParamLimits

0x44b6,	// (0x00066fe4) cell_imed_effect_pane

0xed19,	// (0x00071847) cell_imed_colour_pane_ParamLimits

0xed19,	// (0x00071847) cell_imed_colour_pane

0xed63,	// (0x00071891) cell_imed_colour_pane_g1_ParamLimits

0xed63,	// (0x00071891) cell_imed_colour_pane_g1

0xed74,	// (0x000718a2) hgihlgiht_grid_pane_cp016_ParamLimits

0xed74,	// (0x000718a2) hgihlgiht_grid_pane_cp016

0x44e1,	// (0x0006700f) cell_imed_effect_pane_g1

0x44e9,	// (0x00067017) grid_highlight_pane_cp017

0xed85,	// (0x000718b3) list_imed_single_pane_ParamLimits

0xed85,	// (0x000718b3) list_imed_single_pane

0x9fdf,	// (0x0006cb0d) list_highlight_pane_cp07

0xed99,	// (0x000718c7) list_imed_aspect_pane_comp1_t1

0xd080,	// (0x0006fbae) bg_tb_trans_pane_cp05

0xedbb,	// (0x000718e9) popup_imed_adjust2_window_g1

0xede2,	// (0x00071910) popup_imed_adjust2_window_t1

0xedfa,	// (0x00071928) slider_imed_adjust_pane

0xee0e,	// (0x0007193c) slider_imed_adjust_pane_g1

0xee1e,	// (0x0007194c) slider_imed_adjust_pane_g2

0xee2e,	// (0x0007195c) slider_imed_adjust_pane_g3

0xee3f,	// (0x0007196d) slider_imed_adjust_pane_g4

0x0003,

0xf6de,	// (0x0007220c) slider_imed_adjust_pane_g

0x44f2,	// (0x00067020) aid_size_cell_clipart2

0xee50,	// (0x0007197e) grid_imed_clipart_pane

0xd115,	// (0x0006fc43) scroll_pane_cp031

0x44fe,	// (0x0006702c) cell_imed_clipart_pane_ParamLimits

0x44fe,	// (0x0006702c) cell_imed_clipart_pane

0x451b,	// (0x00067049) cell_imed_clipart_pane_g1

0x9fdf,	// (0x0006cb0d) grid_highlight_pane_cp014

0x41c8,	// (0x00066cf6) main_clock2_pane_g1_ParamLimits

0x41c8,	// (0x00066cf6) main_clock2_pane_g1

0x4302,	// (0x00066e30) aid_call2_pane_cp10

0x4314,	// (0x00066e42) aid_call_pane_cp10

0xcedc,	// (0x0006fa0a) popup_clock_analogue_window_cp10_g1

0xcedc,	// (0x0006fa0a) popup_clock_analogue_window_cp10_g2

0x4326,	// (0x00066e54) popup_clock_analogue_window_cp10_g3

0x4326,	// (0x00066e54) popup_clock_analogue_window_cp10_g4

0xcedc,	// (0x0006fa0a) popup_clock_analogue_window_cp10_g5

0x0004,

0xf6cc,	// (0x000721fa) popup_clock_analogue_window_cp10_g

0x433c,	// (0x00066e6a) popup_clock_analogue_window_cp10_t1

0x436d,	// (0x00066e9b) clock_digital_number_pane_cp10_ParamLimits

0x436d,	// (0x00066e9b) clock_digital_number_pane_cp10

0x4387,	// (0x00066eb5) clock_digital_number_pane_cp11_ParamLimits

0x4387,	// (0x00066eb5) clock_digital_number_pane_cp11

0x43a1,	// (0x00066ecf) clock_digital_number_pane_cp12_ParamLimits

0x43a1,	// (0x00066ecf) clock_digital_number_pane_cp12

0x43bd,	// (0x00066eeb) clock_digital_number_pane_cp13_ParamLimits

0x43bd,	// (0x00066eeb) clock_digital_number_pane_cp13

0x43d9,	// (0x00066f07) clock_digital_separator_pane_cp10_ParamLimits

0x43d9,	// (0x00066f07) clock_digital_separator_pane_cp10

0x43f5,	// (0x00066f23) popup_clock_digital_window_cp02_t1_ParamLimits

0x43f5,	// (0x00066f23) popup_clock_digital_window_cp02_t1

0xc397,	// (0x0006eec5) clock_digital_number_pane_cp10_g1

0xc397,	// (0x0006eec5) clock_digital_number_pane_cp10_g2

0x0001,

0xf6e7,	// (0x00072215) clock_digital_number_pane_cp10_g

0xc397,	// (0x0006eec5) clock_digital_separator_pane_cp10_g1

0xc397,	// (0x0006eec5) clock_digital_separator_pane_g2_cp10

0xcf77,	// (0x0006faa5) navi_pane_vded_g4

0xcf80,	// (0x0006faae) navi_pane_vded_g5

0xcf89,	// (0x0006fab7) navi_pane_vded_t1

0xa06a,	// (0x0006cb98) main_vded_pane

0x4524,	// (0x00067052) main_vded_pane_g1

0x4530,	// (0x0006705e) main_vded_pane_g2

0x453c,	// (0x0006706a) main_vded_pane_g3

0x0002,

0xf6ec,	// (0x0007221a) main_vded_pane_g

0x4548,	// (0x00067076) main_vded_pane_t1

0x4556,	// (0x00067084) main_vded_pane_t2

0x0001,

0xf6f3,	// (0x00072221) main_vded_pane_t

0x4564,	// (0x00067092) vded_slider_pane

0x456e,	// (0x0006709c) vded_video_pane

0xee5a,	// (0x00071988) vded_video_pane_g1

0x457a,	// (0x000670a8) vded_video_pane_g2

0xc458,	// (0x0006ef86) vded_video_pane_g3

0x0002,

0xf6f8,	// (0x00072226) vded_video_pane_g

0xee64,	// (0x00071992) vded_slider_pane_g1

0xe661,	// (0x0007118f) vded_slider_pane_g2

0xee6d,	// (0x0007199b) vded_slider_pane_g3

0xee76,	// (0x000719a4) vded_slider_pane_g4

0xee7f,	// (0x000719ad) vded_slider_pane_g5

0x0004,

0xf6ff,	// (0x0007222d) vded_slider_pane_g

0xa703,	// (0x0006d231) mup3_rocker_pane_ParamLimits

0xa703,	// (0x0006d231) mup3_rocker_pane

0xebb5,	// (0x000716e3) mup3_control_keys_pane_g1

0xee88,	// (0x000719b6) mup3_control_keys_pane_g2

0xebb5,	// (0x000716e3) mup3_control_keys_pane_g3

0xee90,	// (0x000719be) mup3_control_keys_pane_g4

0x0003,

0xf70a,	// (0x00072238) mup3_control_keys_pane_g

0x04c0,	// (0x00062fee) popup_toolbar2_fixed_window_cp01_ParamLimits

0x04c0,	// (0x00062fee) popup_toolbar2_fixed_window_cp01

0xa703,	// (0x0006d231) popup_toolbar2_fixed_window_cp02_ParamLimits

0xa703,	// (0x0006d231) popup_toolbar2_fixed_window_cp02

0xd974,	// (0x000704a2) popup_call2_audio_second_window_t4_ParamLimits

0xd974,	// (0x000704a2) popup_call2_audio_second_window_t4

0xdeb0,	// (0x000709de) popup_call2_audio_first_window_t6_ParamLimits

0xdeb0,	// (0x000709de) popup_call2_audio_first_window_t6

0xe0ee,	// (0x00070c1c) popup_call2_audio_out_window_t6_ParamLimits

0xe0ee,	// (0x00070c1c) popup_call2_audio_out_window_t6

0xa06a,	// (0x0006cb98) main_vitu_pane

0xa48d,	// (0x0006cfbb) aid_size_cell_itu_ParamLimits

0xa48d,	// (0x0006cfbb) aid_size_cell_itu

0xa48d,	// (0x0006cfbb) bg_popup_window_pane_cp08_ParamLimits

0xa48d,	// (0x0006cfbb) bg_popup_window_pane_cp08

0xa48d,	// (0x0006cfbb) field_vitu_entry_pane_ParamLimits

0xa48d,	// (0x0006cfbb) field_vitu_entry_pane

0xa48d,	// (0x0006cfbb) grid_vitu_function_pane_ParamLimits

0xa48d,	// (0x0006cfbb) grid_vitu_function_pane

0xa48d,	// (0x0006cfbb) grid_vitu_itu_pane_ParamLimits

0xa48d,	// (0x0006cfbb) grid_vitu_itu_pane

0xa48d,	// (0x0006cfbb) cell_vitu_itu_pane_ParamLimits

0xa48d,	// (0x0006cfbb) cell_vitu_itu_pane

0xa48d,	// (0x0006cfbb) cell_vitu_function_pane_ParamLimits

0xa48d,	// (0x0006cfbb) cell_vitu_function_pane

0xa48d,	// (0x0006cfbb) bg_popup_sub_pane_cp08_ParamLimits

0xa48d,	// (0x0006cfbb) bg_popup_sub_pane_cp08

0xc462,	// (0x0006ef90) field_vitu_entry_pane_t1_ParamLimits

0xc462,	// (0x0006ef90) field_vitu_entry_pane_t1

0xee98,	// (0x000719c6) field_vitu_entry_pane_t2_ParamLimits

0xee98,	// (0x000719c6) field_vitu_entry_pane_t2

0x0001,

0xf713,	// (0x00072241) field_vitu_entry_pane_t_ParamLimits

0xf713,	// (0x00072241) field_vitu_entry_pane_t

0xe6eb,	// (0x00071219) bg_button_pane_cp05_ParamLimits

0xe6eb,	// (0x00071219) bg_button_pane_cp05

0xeeb5,	// (0x000719e3) cell_vitu_itu_pane_g1

0xd06c,	// (0x0006fb9a) cell_vitu_itu_pane_t1_ParamLimits

0xd06c,	// (0x0006fb9a) cell_vitu_itu_pane_t1

0xd06c,	// (0x0006fb9a) cell_vitu_itu_pane_t2_ParamLimits

0xd06c,	// (0x0006fb9a) cell_vitu_itu_pane_t2

0x0002,

0xf718,	// (0x00072246) cell_vitu_itu_pane_t_ParamLimits

0xf718,	// (0x00072246) cell_vitu_itu_pane_t

0x9fdf,	// (0x0006cb0d) bg_button_pane_cp07

0xc458,	// (0x0006ef86) cell_vitu_function_pane_g1

0xa49b,	// (0x0006cfc9) main_calc_pane_g1

0x034e,	// (0x00062e7c) aid_visual_content_pane

0xa06a,	// (0x0006cb98) main_vradio_pane

0xc41a,	// (0x0006ef48) main_vradio_pane_g1_ParamLimits

0xc41a,	// (0x0006ef48) main_vradio_pane_g1

0xc428,	// (0x0006ef56) main_vradio_pane_g2_ParamLimits

0xc428,	// (0x0006ef56) main_vradio_pane_g2

0x0001,

0xf71f,	// (0x0007224d) main_vradio_pane_g_ParamLimits

0xf71f,	// (0x0007224d) main_vradio_pane_g

0xc462,	// (0x0006ef90) main_vradio_pane_t1_ParamLimits

0xc462,	// (0x0006ef90) main_vradio_pane_t1

0xc462,	// (0x0006ef90) main_vradio_pane_t2_ParamLimits

0xc462,	// (0x0006ef90) main_vradio_pane_t2

0xc476,	// (0x0006efa4) main_vradio_pane_t3_ParamLimits

0xc476,	// (0x0006efa4) main_vradio_pane_t3

0x0002,

0xf724,	// (0x00072252) main_vradio_pane_t_ParamLimits

0xf724,	// (0x00072252) main_vradio_pane_t

0xa48d,	// (0x0006cfbb) vradio_rocker_control_pane_ParamLimits

0xa48d,	// (0x0006cfbb) vradio_rocker_control_pane

0xa48d,	// (0x0006cfbb) vradio_station_info_pane_ParamLimits

0xa48d,	// (0x0006cfbb) vradio_station_info_pane

0xa48d,	// (0x0006cfbb) vradio_frequency_info_pane_ParamLimits

0xa48d,	// (0x0006cfbb) vradio_frequency_info_pane

0xc458,	// (0x0006ef86) vradio_station_info_pane_g1

0xd06c,	// (0x0006fb9a) vradio_station_info_pane_t1_ParamLimits

0xd06c,	// (0x0006fb9a) vradio_station_info_pane_t1

0xc476,	// (0x0006efa4) vradio_station_info_pane_t2_ParamLimits

0xc476,	// (0x0006efa4) vradio_station_info_pane_t2

0x0001,

0xf72b,	// (0x00072259) vradio_station_info_pane_t_ParamLimits

0xf72b,	// (0x00072259) vradio_station_info_pane_t

0x9fdf,	// (0x0006cb0d) vradio_tuning_pane

0x4583,	// (0x000670b1) vradio_rocker_control_pane_g1

0xeed1,	// (0x000719ff) vradio_rocker_control_pane_g2

0x458d,	// (0x000670bb) vradio_rocker_control_pane_g3

0x4597,	// (0x000670c5) vradio_rocker_control_pane_g4

0x45a1,	// (0x000670cf) vradio_rocker_control_pane_g5

0x0004,

0xf730,	// (0x0007225e) vradio_rocker_control_pane_g

0xc458,	// (0x0006ef86) vradio_frequency_info_pane_g1

0xc462,	// (0x0006ef90) vradio_frequency_info_pane_t1_ParamLimits

0xc462,	// (0x0006ef90) vradio_frequency_info_pane_t1

0x45ab,	// (0x000670d9) vradio_tuning_pane_g1

0x45b6,	// (0x000670e4) vradio_tuning_pane_t1

0xa015,	// (0x0006cb43) area_side_right_pane_ParamLimits

0xa015,	// (0x0006cb43) area_side_right_pane

0xe498,	// (0x00070fc6) status_small_pane_g1

0xe4a0,	// (0x00070fce) status_small_pane_g2

0xe4a9,	// (0x00070fd7) status_small_pane_g3

0xe4b2,	// (0x00070fe0) status_small_pane_g4

0x0003,

0xf4fc,	// (0x0007202a) status_small_pane_g

0xe4bb,	// (0x00070fe9) status_small_pane_t1

0xa06a,	// (0x0006cb98) main_video3_pane

0x9fdf,	// (0x0006cb0d) cams_zoom_vslider_pane

0xeed9,	// (0x00071a07) image3_wide_pane_ParamLimits

0xeed9,	// (0x00071a07) image3_wide_pane

0x9fdf,	// (0x0006cb0d) image3_wide_small_pane

0xeef3,	// (0x00071a21) main_video3_pane_g1_ParamLimits

0xeef3,	// (0x00071a21) main_video3_pane_g1

0xeef3,	// (0x00071a21) main_video3_pane_g2_ParamLimits

0xeef3,	// (0x00071a21) main_video3_pane_g2

0x0001,

0xf73b,	// (0x00072269) main_video3_pane_g_ParamLimits

0xf73b,	// (0x00072269) main_video3_pane_g

0xef11,	// (0x00071a3f) main_video3_pane_t1_ParamLimits

0xef11,	// (0x00071a3f) main_video3_pane_t1

0xef11,	// (0x00071a3f) main_video3_pane_t2_ParamLimits

0xef11,	// (0x00071a3f) main_video3_pane_t2

0xef11,	// (0x00071a3f) main_video3_pane_t3_ParamLimits

0xef11,	// (0x00071a3f) main_video3_pane_t3

0x0002,

0xf740,	// (0x0007226e) main_video3_pane_t_ParamLimits

0xf740,	// (0x0007226e) main_video3_pane_t

0xc458,	// (0x0006ef86) cams_zoom_vslider_pane_g1

0xc458,	// (0x0006ef86) cams_zoom_vslider_pane_g2

0x0001,

0xf08c,	// (0x00071bba) cams_zoom_vslider_pane_g

0x9fdf,	// (0x0006cb0d) small_slider_vertical_pane

0xc458,	// (0x0006ef86) small_slider_vertical_pane_g1

0xc458,	// (0x0006ef86) small_slider_vertical_pane_g2

0xef38,	// (0x00071a66) small_slider_vertical_pane_g3

0x0002,

0xf747,	// (0x00072275) small_slider_vertical_pane_g

0xa06a,	// (0x0006cb98) main_hwr_training_pane

0xef41,	// (0x00071a6f) hwr_training_instruct_pane_ParamLimits

0xef41,	// (0x00071a6f) hwr_training_instruct_pane

0x45c5,	// (0x000670f3) hwr_training_navi_pane_ParamLimits

0x45c5,	// (0x000670f3) hwr_training_navi_pane

0x45e4,	// (0x00067112) hwr_training_write_pane_ParamLimits

0x45e4,	// (0x00067112) hwr_training_write_pane

0x9fdf,	// (0x0006cb0d) bg_frame_shadow_pane

0xef78,	// (0x00071aa6) hwr_training_write_pane_g1

0xef80,	// (0x00071aae) hwr_training_write_pane_g2

0xef88,	// (0x00071ab6) hwr_training_write_pane_g3

0xef90,	// (0x00071abe) hwr_training_write_pane_g4

0xef98,	// (0x00071ac6) hwr_training_write_pane_g5

0xefa0,	// (0x00071ace) hwr_training_write_pane_g6

0xefa8,	// (0x00071ad6) hwr_training_write_pane_g7

0x0006,

0xf74e,	// (0x0007227c) hwr_training_write_pane_g

0xa70f,	// (0x0006d23d) hwr_training_navi_pane_g1_ParamLimits

0xa70f,	// (0x0006d23d) hwr_training_navi_pane_g1

0xa721,	// (0x0006d24f) hwr_training_navi_pane_g2_ParamLimits

0xa721,	// (0x0006d24f) hwr_training_navi_pane_g2

0xa733,	// (0x0006d261) hwr_training_navi_pane_g3_ParamLimits

0xa733,	// (0x0006d261) hwr_training_navi_pane_g3

0xa743,	// (0x0006d271) hwr_training_navi_pane_g4_ParamLimits

0xa743,	// (0x0006d271) hwr_training_navi_pane_g4

0x0004,

0xf75d,	// (0x0007228b) hwr_training_navi_pane_g_ParamLimits

0xf75d,	// (0x0007228b) hwr_training_navi_pane_g

0xa750,	// (0x0006d27e) hwr_training_navi_pane_t1

0x462c,	// (0x0006715a) list_single_hwr_training_instruct_pane_ParamLimits

0x462c,	// (0x0006715a) list_single_hwr_training_instruct_pane

0xefb0,	// (0x00071ade) list_single_hwr_training_instruct_pane_t1

0xe84b,	// (0x00071379) bg_frame_shadow_pane_g1

0xefbf,	// (0x00071aed) bg_frame_shadow_pane_g2

0xefc7,	// (0x00071af5) bg_frame_shadow_pane_g3

0xefcf,	// (0x00071afd) bg_frame_shadow_pane_g4

0xefd7,	// (0x00071b05) bg_frame_shadow_pane_g5

0xefdf,	// (0x00071b0d) bg_frame_shadow_pane_g6

0xefe7,	// (0x00071b15) bg_frame_shadow_pane_g7

0xc565,	// (0x0006f093) bg_frame_shadow_pane_g8

0x0007,

0xf768,	// (0x00072296) bg_frame_shadow_pane_g

0xa06a,	// (0x0006cb98) main_video_tele_dialer_pane

0x4648,	// (0x00067176) aid_size_cell_video_keypad_ParamLimits

0x4648,	// (0x00067176) aid_size_cell_video_keypad

0x4662,	// (0x00067190) grid_video_dialer_keypad_pane_ParamLimits

0x4662,	// (0x00067190) grid_video_dialer_keypad_pane

0x46ae,	// (0x000671dc) video_down_pane_cp_ParamLimits

0x46ae,	// (0x000671dc) video_down_pane_cp

0x46e0,	// (0x0006720e) cell_video_dialer_keypad_pane_ParamLimits

0x46e0,	// (0x0006720e) cell_video_dialer_keypad_pane

0xefef,	// (0x00071b1d) bg_button_pane_cp08_ParamLimits

0xefef,	// (0x00071b1d) bg_button_pane_cp08

0x4706,	// (0x00067234) cell_video_dialer_keypad_pane_g1_ParamLimits

0x4706,	// (0x00067234) cell_video_dialer_keypad_pane_g1

0xa703,	// (0x0006d231) mup3_rocker2_pane_ParamLimits

0xa703,	// (0x0006d231) mup3_rocker2_pane

0xc458,	// (0x0006ef86) mup3_rocker2_pane_g1

0x3190,	// (0x00065cbe) main_dialer2_pane

0xa06a,	// (0x0006cb98) main_mp4_pane

0xa77c,	// (0x0006d2aa) main_mp4_pane_g1_ParamLimits

0xa77c,	// (0x0006d2aa) main_mp4_pane_g1

0xa77c,	// (0x0006d2aa) main_mp4_pane_g2_ParamLimits

0xa77c,	// (0x0006d2aa) main_mp4_pane_g2

0x4741,	// (0x0006726f) main_mp4_pane_g3_ParamLimits

0x4741,	// (0x0006726f) main_mp4_pane_g3

0xa79a,	// (0x0006d2c8) main_mp4_pane_g4_ParamLimits

0xa79a,	// (0x0006d2c8) main_mp4_pane_g4

0xa7c2,	// (0x0006d2f0) main_mp4_pane_g5_ParamLimits

0xa7c2,	// (0x0006d2f0) main_mp4_pane_g5

0x0007,

0xf788,	// (0x000722b6) main_mp4_pane_g_ParamLimits

0xf788,	// (0x000722b6) main_mp4_pane_g

0xa82a,	// (0x0006d358) main_mp4_pane_t1_ParamLimits

0xa82a,	// (0x0006d358) main_mp4_pane_t1

0xa88c,	// (0x0006d3ba) main_mp4_pane_t2_ParamLimits

0xa88c,	// (0x0006d3ba) main_mp4_pane_t2

0xa8f0,	// (0x0006d41e) main_mp4_pane_t3_ParamLimits

0xa8f0,	// (0x0006d41e) main_mp4_pane_t3

0xa94e,	// (0x0006d47c) main_mp4_pane_t4_ParamLimits

0xa94e,	// (0x0006d47c) main_mp4_pane_t4

0x0003,

0xf799,	// (0x000722c7) main_mp4_pane_t_ParamLimits

0xf799,	// (0x000722c7) main_mp4_pane_t

0xa9ac,	// (0x0006d4da) mp4_progress_pane_ParamLimits

0xa9ac,	// (0x0006d4da) mp4_progress_pane

0xa9e0,	// (0x0006d50e) mp4_rocker_pane_ParamLimits

0xa9e0,	// (0x0006d50e) mp4_rocker_pane

0x477b,	// (0x000672a9) mp4_progress_pane_t1

0x4799,	// (0x000672c7) mp4_progress_pane_t2

0x0001,

0xf7a2,	// (0x000722d0) mp4_progress_pane_t

0x47b8,	// (0x000672e6) mup_progress_pane_cp04

0x3782,	// (0x000662b0) mp4_rocker_pane_g1

0xa05c,	// (0x0006cb8a) aid_cell_size_keypad2_ParamLimits

0xa05c,	// (0x0006cb8a) aid_cell_size_keypad2

0xa05c,	// (0x0006cb8a) dialer2_ne_pane_ParamLimits

0xa05c,	// (0x0006cb8a) dialer2_ne_pane

0xa05c,	// (0x0006cb8a) grid_dialer2_keypad_pane_ParamLimits

0xa05c,	// (0x0006cb8a) grid_dialer2_keypad_pane

0xe6eb,	// (0x00071219) bg_popup_call_pane_cp07_ParamLimits

0xe6eb,	// (0x00071219) bg_popup_call_pane_cp07

0x47cb,	// (0x000672f9) dialer2_ne_pane_t1_ParamLimits

0x47cb,	// (0x000672f9) dialer2_ne_pane_t1

0x481d,	// (0x0006734b) cell_dialer2_keypad_pane_ParamLimits

0x481d,	// (0x0006734b) cell_dialer2_keypad_pane

0xe6eb,	// (0x00071219) bg_button_pane_pane_cp04_ParamLimits

0xe6eb,	// (0x00071219) bg_button_pane_pane_cp04

0xc41a,	// (0x0006ef48) cell_dialer2_keypad_pane_g1_ParamLimits

0xc41a,	// (0x0006ef48) cell_dialer2_keypad_pane_g1

0x1004,	// (0x00063b32) aid_placing_vt_set_content_ParamLimits

0x1004,	// (0x00063b32) aid_placing_vt_set_content

0x1028,	// (0x00063b56) aid_placing_vt_set_title_ParamLimits

0x1028,	// (0x00063b56) aid_placing_vt_set_title

0xa06a,	// (0x0006cb98) main_image3_pane

0x48ae,	// (0x000673dc) area_side_right_pane_cp01_ParamLimits

0x48ae,	// (0x000673dc) area_side_right_pane_cp01

0x48c7,	// (0x000673f5) main_image3_pane_g1_ParamLimits

0x48c7,	// (0x000673f5) main_image3_pane_g1

0x48d5,	// (0x00067403) main_image3_pane_g2_ParamLimits

0x48d5,	// (0x00067403) main_image3_pane_g2

0x48fd,	// (0x0006742b) main_image3_pane_g3_ParamLimits

0x48fd,	// (0x0006742b) main_image3_pane_g3

0x4927,	// (0x00067455) main_image3_pane_g4_ParamLimits

0x4927,	// (0x00067455) main_image3_pane_g4

0x0003,

0xf7b1,	// (0x000722df) main_image3_pane_g_ParamLimits

0xf7b1,	// (0x000722df) main_image3_pane_g

0x4951,	// (0x0006747f) main_image3_pane_t1_ParamLimits

0x4951,	// (0x0006747f) main_image3_pane_t1

0x49a9,	// (0x000674d7) main_image3_pane_t2_ParamLimits

0x49a9,	// (0x000674d7) main_image3_pane_t2

0x49fb,	// (0x00067529) main_image3_pane_t3_ParamLimits

0x49fb,	// (0x00067529) main_image3_pane_t3

0x0003,

0xf7ba,	// (0x000722e8) main_image3_pane_t_ParamLimits

0xf7ba,	// (0x000722e8) main_image3_pane_t

0xa48d,	// (0x0006cfbb) grid_sctrl_middle_pane_cp01_ParamLimits

0xa48d,	// (0x0006cfbb) grid_sctrl_middle_pane_cp01

0x4a83,	// (0x000675b1) cell_sctrl_middle_pane_cp01_ParamLimits

0x4a83,	// (0x000675b1) cell_sctrl_middle_pane_cp01

0x4aa0,	// (0x000675ce) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x4aa0,	// (0x000675ce) cell_sctrl_middle_pane_cp01_g1

0xa06a,	// (0x0006cb98) main_call4_pane

0x4ab5,	// (0x000675e3) aid_size_button_call4_ParamLimits

0x4ab5,	// (0x000675e3) aid_size_button_call4

0x4ae8,	// (0x00067616) call4_windows_pane_ParamLimits

0x4ae8,	// (0x00067616) call4_windows_pane

0x4b07,	// (0x00067635) grid_call4_button_pane_ParamLimits

0x4b07,	// (0x00067635) grid_call4_button_pane

0x4b3e,	// (0x0006766c) call4_windows_conf_pane

0x4b57,	// (0x00067685) popup_call4_audio_first_window_ParamLimits

0x4b57,	// (0x00067685) popup_call4_audio_first_window

0x4ba7,	// (0x000676d5) popup_call4_audio_second_window_ParamLimits

0x4ba7,	// (0x000676d5) popup_call4_audio_second_window

0x4bc0,	// (0x000676ee) popup_call4_audio_wait_window_ParamLimits

0x4bc0,	// (0x000676ee) popup_call4_audio_wait_window

0x4bce,	// (0x000676fc) cell_call4_button_pane_ParamLimits

0x4bce,	// (0x000676fc) cell_call4_button_pane

0x4bf5,	// (0x00067723) bg_button_pane_cp09_ParamLimits

0x4bf5,	// (0x00067723) bg_button_pane_cp09

0x4c01,	// (0x0006772f) cell_call4_button_pane_g1_ParamLimits

0x4c01,	// (0x0006772f) cell_call4_button_pane_g1

0x4c27,	// (0x00067755) cell_call4_button_pane_t1_ParamLimits

0x4c27,	// (0x00067755) cell_call4_button_pane_t1

0x4c55,	// (0x00067783) popup_call4_audio_conf_window_ParamLimits

0x4c55,	// (0x00067783) popup_call4_audio_conf_window

0x40b4,	// (0x00066be2) mup3_progress_pane_t1_ParamLimits

0x40cb,	// (0x00066bf9) mup3_progress_pane_t2_ParamLimits

0xeb85,	// (0x000716b3) mup3_progress_pane_t3_ParamLimits

0xf694,	// (0x000721c2) mup3_progress_pane_t_ParamLimits

0xeb9c,	// (0x000716ca) mup_progress_pane_cp03_ParamLimits

0xebb5,	// (0x000716e3) mup3_control_keys_pane_g4_copy1

0xa9e0,	// (0x0006d50e) mp4_rocker2_pane_ParamLimits

0xa9e0,	// (0x0006d50e) mp4_rocker2_pane

0xee88,	// (0x000719b6) mp4_rocker2_pane_g1

0xee88,	// (0x000719b6) mp4_rocker2_pane_g2

0xee88,	// (0x000719b6) mp4_rocker2_pane_g3

0xee88,	// (0x000719b6) mp4_rocker2_pane_g4

0xee88,	// (0x000719b6) mp4_rocker2_pane_g5

0x0004,

0xf7c3,	// (0x000722f1) mp4_rocker2_pane_g

0xa06a,	// (0x0006cb98) main_camera4_pane

0xa06a,	// (0x0006cb98) main_video4_pane

0x467c,	// (0x000671aa) main_video_tele_dialer_pane_t1_ParamLimits

0x467c,	// (0x000671aa) main_video_tele_dialer_pane_t1

0x4695,	// (0x000671c3) main_video_tele_dialer_pane_t2_ParamLimits

0x4695,	// (0x000671c3) main_video_tele_dialer_pane_t2

0x0001,

0xf779,	// (0x000722a7) main_video_tele_dialer_pane_t_ParamLimits

0xf779,	// (0x000722a7) main_video_tele_dialer_pane_t

0x4c87,	// (0x000677b5) cam4_autofocus_pane_ParamLimits

0x4c87,	// (0x000677b5) cam4_autofocus_pane

0x4c9d,	// (0x000677cb) cam4_image_uncrop_pane_ParamLimits

0x4c9d,	// (0x000677cb) cam4_image_uncrop_pane

0x4cb6,	// (0x000677e4) cam4_indicators_pane_ParamLimits

0x4cb6,	// (0x000677e4) cam4_indicators_pane

0x4ce6,	// (0x00067814) main_camera4_pane_g1_ParamLimits

0x4ce6,	// (0x00067814) main_camera4_pane_g1

0x4cf8,	// (0x00067826) main_camera4_pane_g2_ParamLimits

0x4cf8,	// (0x00067826) main_camera4_pane_g2

0x4d0b,	// (0x00067839) main_camera4_pane_g3_ParamLimits

0x4d0b,	// (0x00067839) main_camera4_pane_g3

0x4d1e,	// (0x0006784c) main_camera4_pane_g4_ParamLimits

0x4d1e,	// (0x0006784c) main_camera4_pane_g4

0x4d31,	// (0x0006785f) main_camera4_pane_g5_ParamLimits

0x4d31,	// (0x0006785f) main_camera4_pane_g5

0x0005,

0xf7ce,	// (0x000722fc) main_camera4_pane_g_ParamLimits

0xf7ce,	// (0x000722fc) main_camera4_pane_g

0x4d55,	// (0x00067883) main_camera4_pane_t1_ParamLimits

0x4d55,	// (0x00067883) main_camera4_pane_t1

0xaa8e,	// (0x0006d5bc) bg_tb_trans_pane_cp06

0xaaa4,	// (0x0006d5d2) cam4_indicators_pane_g1

0xaab5,	// (0x0006d5e3) cam4_indicators_pane_g2

0x0002,

0xf7e9,	// (0x00072317) cam4_indicators_pane_g

0xaacd,	// (0x0006d5fb) cam4_indicators_pane_t1

0x4db9,	// (0x000678e7) main_video4_pane_g1_ParamLimits

0x4db9,	// (0x000678e7) main_video4_pane_g1

0x4dc8,	// (0x000678f6) main_video4_pane_g2_ParamLimits

0x4dc8,	// (0x000678f6) main_video4_pane_g2

0x4dd8,	// (0x00067906) main_video4_pane_g3_ParamLimits

0x4dd8,	// (0x00067906) main_video4_pane_g3

0x4de8,	// (0x00067916) main_video4_pane_g4_ParamLimits

0x4de8,	// (0x00067916) main_video4_pane_g4

0x0004,

0xf7f0,	// (0x0007231e) main_video4_pane_g_ParamLimits

0xf7f0,	// (0x0007231e) main_video4_pane_g

0x4e08,	// (0x00067936) vid4_indicators_pane_ParamLimits

0x4e08,	// (0x00067936) vid4_indicators_pane

0x4e32,	// (0x00067960) video4_image_uncrop_cif_pane_ParamLimits

0x4e32,	// (0x00067960) video4_image_uncrop_cif_pane

0x4e4c,	// (0x0006797a) video4_image_uncrop_nhd_pane_ParamLimits

0x4e4c,	// (0x0006797a) video4_image_uncrop_nhd_pane

0x4c9d,	// (0x000677cb) video4_image_uncrop_vga_pane_ParamLimits

0x4c9d,	// (0x000677cb) video4_image_uncrop_vga_pane

0xa05c,	// (0x0006cb8a) bg_tb_trans_pane_cp07

0xaafb,	// (0x0006d629) vid4_indicators_pane_g1

0xab11,	// (0x0006d63f) vid4_indicators_pane_g2

0xab25,	// (0x0006d653) vid4_indicators_pane_g3

0x0004,

0xf7fb,	// (0x00072329) vid4_indicators_pane_g

0xab56,	// (0x0006d684) vid4_indicators_pane_t1

0x4e63,	// (0x00067991) cam4_autofocus_pane_g1

0x4e6b,	// (0x00067999) cam4_autofocus_pane_g2

0x4e73,	// (0x000679a1) cam4_autofocus_pane_g3

0x0002,

0xf806,	// (0x00072334) cam4_autofocus_pane_g

0x4e7b,	// (0x000679a9) cam4_autofocus_pane_g3_copy1

0x46c4,	// (0x000671f2) video_down_pane_cp_t1

0x46d2,	// (0x00067200) video_down_pane_cp_t2

0x0001,

0xf77e,	// (0x000722ac) video_down_pane_cp_t

0xa05c,	// (0x0006cb8a) popup_vitu2_window_ParamLimits

0xa05c,	// (0x0006cb8a) popup_vitu2_window

0x4e83,	// (0x000679b1) aid_size_cell2_itu2_ParamLimits

0x4e83,	// (0x000679b1) aid_size_cell2_itu2

0x4ea9,	// (0x000679d7) aid_size_cell_itu2_ParamLimits

0x4ea9,	// (0x000679d7) aid_size_cell_itu2

0x4f07,	// (0x00067a35) bg_popup_window_pane_cp09_ParamLimits

0x4f07,	// (0x00067a35) bg_popup_window_pane_cp09

0x4f15,	// (0x00067a43) field_vitu2_entry_pane_ParamLimits

0x4f15,	// (0x00067a43) field_vitu2_entry_pane

0x4f3d,	// (0x00067a6b) grid_vitu2_function_pane_ParamLimits

0x4f3d,	// (0x00067a6b) grid_vitu2_function_pane

0x4f8e,	// (0x00067abc) grid_vitu2_itu_pane_ParamLimits

0x4f8e,	// (0x00067abc) grid_vitu2_itu_pane

0x501e,	// (0x00067b4c) cell_vitu2_itu_pane_ParamLimits

0x501e,	// (0x00067b4c) cell_vitu2_itu_pane

0x504c,	// (0x00067b7a) cell_vitu2_function_pane_ParamLimits

0x504c,	// (0x00067b7a) cell_vitu2_function_pane

0x5090,	// (0x00067bbe) bg_popup_call_pane_cp08_ParamLimits

0x5090,	// (0x00067bbe) bg_popup_call_pane_cp08

0x50a7,	// (0x00067bd5) field_vitu2_entry_pane_g1

0x50b3,	// (0x00067be1) field_vitu2_entry_pane_g2

0x0002,

0xf80d,	// (0x0007233b) field_vitu2_entry_pane_g

0x50bf,	// (0x00067bed) field_vitu2_entry_pane_t1_ParamLimits

0x50bf,	// (0x00067bed) field_vitu2_entry_pane_t1

0x50ee,	// (0x00067c1c) field_vitu2_entry_pane_t2_ParamLimits

0x50ee,	// (0x00067c1c) field_vitu2_entry_pane_t2

0x0001,

0xf814,	// (0x00072342) field_vitu2_entry_pane_t_ParamLimits

0xf814,	// (0x00072342) field_vitu2_entry_pane_t

0x5113,	// (0x00067c41) bg_button_pane_cp010_ParamLimits

0x5113,	// (0x00067c41) bg_button_pane_cp010

0x5121,	// (0x00067c4f) cell_vitu2_itu_pane_g1

0x5147,	// (0x00067c75) cell_vitu2_itu_pane_t1_ParamLimits

0x5147,	// (0x00067c75) cell_vitu2_itu_pane_t1

0x51a5,	// (0x00067cd3) cell_vitu2_itu_pane_t2_ParamLimits

0x51a5,	// (0x00067cd3) cell_vitu2_itu_pane_t2

0x0002,

0xf81e,	// (0x0007234c) cell_vitu2_itu_pane_t_ParamLimits

0xf81e,	// (0x0007234c) cell_vitu2_itu_pane_t

0xa05c,	// (0x0006cb8a) bg_button_pane_cp011

0x5291,	// (0x00067dbf) cell_vitu2_function_pane_g1

0xa06a,	// (0x0006cb98) main_myfav_hc_pane

0x4a4b,	// (0x00067579) popup_image3_note_pane_ParamLimits

0x4a4b,	// (0x00067579) popup_image3_note_pane

0x4a67,	// (0x00067595) popup_image3_tool_bar_pane_ParamLimits

0x4a67,	// (0x00067595) popup_image3_tool_bar_pane

0x5233,	// (0x00067d61) cell_vitu2_itu_pane_t3_ParamLimits

0x5233,	// (0x00067d61) cell_vitu2_itu_pane_t3

0x9fdf,	// (0x0006cb0d) bg_popup_trans_pane

0x52a5,	// (0x00067dd3) grid_image3_tool_bar_pane

0x52af,	// (0x00067ddd) bg_popup_trans_pane_g1

0xc8bd,	// (0x0006f3eb) bg_popup_trans_pane_g2

0x52b7,	// (0x00067de5) bg_popup_trans_pane_g3

0x52bf,	// (0x00067ded) bg_popup_trans_pane_g4

0x52c7,	// (0x00067df5) bg_popup_trans_pane_g5

0x52cf,	// (0x00067dfd) bg_popup_trans_pane_g6

0x52d7,	// (0x00067e05) bg_popup_trans_pane_g7

0x52df,	// (0x00067e0d) bg_popup_trans_pane_g8

0xc89d,	// (0x0006f3cb) bg_popup_trans_pane_g9

0x0008,

0xf825,	// (0x00072353) bg_popup_trans_pane_g

0x52e7,	// (0x00067e15) cell_image3_tool_bar_pane_ParamLimits

0x52e7,	// (0x00067e15) cell_image3_tool_bar_pane

0xc458,	// (0x0006ef86) cell_image3_tool_bar_pane_g1

0x9fdf,	// (0x0006cb0d) bg_popup_trans_pane_cp1

0x52fd,	// (0x00067e2b) popup_image3_note_pane_t1

0x530b,	// (0x00067e39) popup_image3_note_pane_t2

0x5319,	// (0x00067e47) popup_image3_note_pane_t3

0x0002,

0xf838,	// (0x00072366) popup_image3_note_pane_t

0x5329,	// (0x00067e57) popup_image3_note_pane_t3_copy1

0x5337,	// (0x00067e65) bg_myfav_hc_instruction_pane_ParamLimits

0x5337,	// (0x00067e65) bg_myfav_hc_instruction_pane

0x534f,	// (0x00067e7d) cell_myfav_contact_pane_ParamLimits

0x534f,	// (0x00067e7d) cell_myfav_contact_pane

0x536b,	// (0x00067e99) cell_myfav_contact_pane_cp1_ParamLimits

0x536b,	// (0x00067e99) cell_myfav_contact_pane_cp1

0x5383,	// (0x00067eb1) cell_myfav_contact_pane_cp2_ParamLimits

0x5383,	// (0x00067eb1) cell_myfav_contact_pane_cp2

0x539b,	// (0x00067ec9) cell_myfav_contact_pane_cp3_ParamLimits

0x539b,	// (0x00067ec9) cell_myfav_contact_pane_cp3

0x53b2,	// (0x00067ee0) cell_myfav_contact_pane_cp4_ParamLimits

0x53b2,	// (0x00067ee0) cell_myfav_contact_pane_cp4

0x53ca,	// (0x00067ef8) cell_myfav_contact_pane_cp5_ParamLimits

0x53ca,	// (0x00067ef8) cell_myfav_contact_pane_cp5

0x53de,	// (0x00067f0c) cell_myfav_contact_pane_cp6_ParamLimits

0x53de,	// (0x00067f0c) cell_myfav_contact_pane_cp6

0x53f4,	// (0x00067f22) cell_myfav_contact_pane_cp7_ParamLimits

0x53f4,	// (0x00067f22) cell_myfav_contact_pane_cp7

0x540c,	// (0x00067f3a) listscroll_gen_pane_cp05

0x5415,	// (0x00067f43) main_myfav_hc_pane_g1_ParamLimits

0x5415,	// (0x00067f43) main_myfav_hc_pane_g1

0x542f,	// (0x00067f5d) main_myfav_hc_pane_g2_ParamLimits

0x542f,	// (0x00067f5d) main_myfav_hc_pane_g2

0x0002,

0xf83f,	// (0x0007236d) main_myfav_hc_pane_g_ParamLimits

0xf83f,	// (0x0007236d) main_myfav_hc_pane_g

0x5463,	// (0x00067f91) main_myfav_hc_pane_t1_ParamLimits

0x5463,	// (0x00067f91) main_myfav_hc_pane_t1

0x547a,	// (0x00067fa8) main_myfav_hc_pane_t2_ParamLimits

0x547a,	// (0x00067fa8) main_myfav_hc_pane_t2

0x548c,	// (0x00067fba) main_myfav_hc_pane_t3_ParamLimits

0x548c,	// (0x00067fba) main_myfav_hc_pane_t3

0x549e,	// (0x00067fcc) main_myfav_hc_pane_t4_ParamLimits

0x549e,	// (0x00067fcc) main_myfav_hc_pane_t4

0x0004,

0xf846,	// (0x00072374) main_myfav_hc_pane_t_ParamLimits

0xf846,	// (0x00072374) main_myfav_hc_pane_t

0xc458,	// (0x0006ef86) bg_myfav_hc_instruction_pane_g1

0x54c8,	// (0x00067ff6) cell_myfav_contact_pane_g1_ParamLimits

0x54c8,	// (0x00067ff6) cell_myfav_contact_pane_g1

0x54c8,	// (0x00067ff6) cell_myfav_contact_pane_g2_ParamLimits

0x54c8,	// (0x00067ff6) cell_myfav_contact_pane_g2

0x54d4,	// (0x00068002) cell_myfav_contact_pane_g3_ParamLimits

0x54d4,	// (0x00068002) cell_myfav_contact_pane_g3

0xc428,	// (0x0006ef56) cell_myfav_contact_pane_g4_ParamLimits

0xc428,	// (0x0006ef56) cell_myfav_contact_pane_g4

0x54e1,	// (0x0006800f) cell_myfav_contact_pane_g5_ParamLimits

0x54e1,	// (0x0006800f) cell_myfav_contact_pane_g5

0x0004,

0xf851,	// (0x0007237f) cell_myfav_contact_pane_g_ParamLimits

0xf851,	// (0x0007237f) cell_myfav_contact_pane_g

0x5449,	// (0x00067f77) main_myfav_hc_pane_g3_ParamLimits

0x5449,	// (0x00067f77) main_myfav_hc_pane_g3

0x02ac,	// (0x00062dda) popup_adpt_find_window

0x54ed,	// (0x0006801b) afind_page_pane_ParamLimits

0x54ed,	// (0x0006801b) afind_page_pane

0x5503,	// (0x00068031) aid_size_cell_afind_ParamLimits

0x5503,	// (0x00068031) aid_size_cell_afind

0x5521,	// (0x0006804f) bg_popup_sub_pane_cp09_ParamLimits

0x5521,	// (0x0006804f) bg_popup_sub_pane_cp09

0x5533,	// (0x00068061) find_pane_cp01_ParamLimits

0x5533,	// (0x00068061) find_pane_cp01

0x5547,	// (0x00068075) grid_afind_control_pane_ParamLimits

0x5547,	// (0x00068075) grid_afind_control_pane

0x555b,	// (0x00068089) grid_afind_pane_ParamLimits

0x555b,	// (0x00068089) grid_afind_pane

0x557d,	// (0x000680ab) cell_afind_pane_ParamLimits

0x557d,	// (0x000680ab) cell_afind_pane

0xc458,	// (0x0006ef86) afind_page_pane_g1

0x55e6,	// (0x00068114) afind_page_pane_g2

0x55ee,	// (0x0006811c) afind_page_pane_g3

0x0002,

0xf85c,	// (0x0007238a) afind_page_pane_g

0x55f6,	// (0x00068124) afind_page_pane_t1

0x5616,	// (0x00068144) cell_afind_grid_control_pane_ParamLimits

0x5616,	// (0x00068144) cell_afind_grid_control_pane

0x5625,	// (0x00068153) bg_button_pane_cp69_ParamLimits

0x5625,	// (0x00068153) bg_button_pane_cp69

0x5631,	// (0x0006815f) cell_afind_pane_g1_ParamLimits

0x5631,	// (0x0006815f) cell_afind_pane_g1

0x563e,	// (0x0006816c) cell_afind_pane_t1_ParamLimits

0x563e,	// (0x0006816c) cell_afind_pane_t1

0x5650,	// (0x0006817e) bg_button_pane_cp72

0x5658,	// (0x00068186) cell_afind_grid_control_pane_g1

0x2c78,	// (0x000657a6) aid_image_placing_area_ParamLimits

0x2c78,	// (0x000657a6) aid_image_placing_area

0xc41a,	// (0x0006ef48) field_vitu_entry_pane_g1_ParamLimits

0xc41a,	// (0x0006ef48) field_vitu_entry_pane_g1

0xc41a,	// (0x0006ef48) field_vitu_entry_pane_g2_ParamLimits

0xc41a,	// (0x0006ef48) field_vitu_entry_pane_g2

0x0001,

0xf199,	// (0x00071cc7) field_vitu_entry_pane_g_ParamLimits

0xf199,	// (0x00071cc7) field_vitu_entry_pane_g

0xeeb5,	// (0x000719e3) cell_vitu_itu_pane_g1_ParamLimits

0xee98,	// (0x000719c6) cell_vitu_itu_pane_t3_ParamLimits

0xee98,	// (0x000719c6) cell_vitu_itu_pane_t3

0x477b,	// (0x000672a9) mp4_progress_pane_t1_ParamLimits

0x4799,	// (0x000672c7) mp4_progress_pane_t2_ParamLimits

0xf7a2,	// (0x000722d0) mp4_progress_pane_t_ParamLimits

0x47b8,	// (0x000672e6) mup_progress_pane_cp04_ParamLimits

0x54b2,	// (0x00067fe0) main_myfav_hc_pane_t5_ParamLimits

0x54b2,	// (0x00067fe0) main_myfav_hc_pane_t5

0xa005,	// (0x0006cb33) aid_zoom_text_primary

0x02ac,	// (0x00062dda) popup_adpt_find_window_ParamLimits

0xa05c,	// (0x0006cb8a) main_cam_set_pane

0x4ccf,	// (0x000677fd) cam4_zoom_pane_ParamLimits

0x4ccf,	// (0x000677fd) cam4_zoom_pane

0x5661,	// (0x0006818f) main_cam_set_pane_g1_ParamLimits

0x5661,	// (0x0006818f) main_cam_set_pane_g1

0x566f,	// (0x0006819d) main_cam_set_pane_g2_ParamLimits

0x566f,	// (0x0006819d) main_cam_set_pane_g2

0x0001,

0xf863,	// (0x00072391) main_cam_set_pane_g_ParamLimits

0xf863,	// (0x00072391) main_cam_set_pane_g

0x5690,	// (0x000681be) main_cam_set_pane_t1_ParamLimits

0x5690,	// (0x000681be) main_cam_set_pane_t1

0x56ab,	// (0x000681d9) main_cset_listscroll_pane_ParamLimits

0x56ab,	// (0x000681d9) main_cset_listscroll_pane

0x56d3,	// (0x00068201) main_cset_slider_pane_ParamLimits

0x56d3,	// (0x00068201) main_cset_slider_pane

0x5705,	// (0x00068233) main_cset_list_pane_ParamLimits

0x5705,	// (0x00068233) main_cset_list_pane

0x5715,	// (0x00068243) scroll_pane_cp028

0x571e,	// (0x0006824c) aid_area_touch_slider

0x573a,	// (0x00068268) cset_slider_pane

0x575d,	// (0x0006828b) main_cset_slider_pane_g1

0x5772,	// (0x000682a0) main_cset_slider_pane_g2

0x0011,

0xf868,	// (0x00072396) main_cset_slider_pane_g

0x5864,	// (0x00068392) main_cset_slider_pane_t1

0x588c,	// (0x000683ba) main_cset_slider_pane_t2

0x58a6,	// (0x000683d4) main_cset_slider_pane_t3

0x58c0,	// (0x000683ee) main_cset_slider_pane_t4

0x58da,	// (0x00068408) main_cset_slider_pane_t5

0x58f8,	// (0x00068426) main_cset_slider_pane_t6

0x590d,	// (0x0006843b) main_cset_slider_pane_t7

0x000e,

0xf88d,	// (0x000723bb) main_cset_slider_pane_t

0x5a8b,	// (0x000685b9) cset_list_set_pane_ParamLimits

0x5a8b,	// (0x000685b9) cset_list_set_pane

0x5a9f,	// (0x000685cd) aid_position_infowindow_above

0x5aa7,	// (0x000685d5) aid_position_infowindow_below

0x5aaf,	// (0x000685dd) cset_list_set_pane_g1_ParamLimits

0x5aaf,	// (0x000685dd) cset_list_set_pane_g1

0x5abb,	// (0x000685e9) cset_list_set_pane_g3_ParamLimits

0x5abb,	// (0x000685e9) cset_list_set_pane_g3

0x0001,

0xf8ac,	// (0x000723da) cset_list_set_pane_g_ParamLimits

0xf8ac,	// (0x000723da) cset_list_set_pane_g

0x5aca,	// (0x000685f8) cset_list_set_pane_t1_ParamLimits

0x5aca,	// (0x000685f8) cset_list_set_pane_t1

0xa48d,	// (0x0006cfbb) list_highlight_pane_cp021_ParamLimits

0xa48d,	// (0x0006cfbb) list_highlight_pane_cp021

0xd0f2,	// (0x0006fc20) cset_slider_pane_g1

0xd104,	// (0x0006fc32) cset_slider_pane_g2

0xd0fb,	// (0x0006fc29) cset_slider_pane_g3

0x0002,

0xf8b1,	// (0x000723df) cset_slider_pane_g

0xcd80,	// (0x0006f8ae) aid_area_touch_cam4_zoom

0x5adf,	// (0x0006860d) cam4_zoom_cont_pane

0x5ae7,	// (0x00068615) cam4_zoom_pane_g1

0x5aef,	// (0x0006861d) cam4_zoom_pane_g2

0x5af7,	// (0x00068625) cam4_zoom_pane_g3

0x0002,

0xf8b8,	// (0x000723e6) cam4_zoom_pane_g

0xab6d,	// (0x0006d69b) cam4_zoom_cont_pane_g1

0xab76,	// (0x0006d6a4) cam4_zoom_cont_pane_g2

0xab7f,	// (0x0006d6ad) cam4_zoom_cont_pane_g3

0x0002,

0xf8bf,	// (0x000723ed) cam4_zoom_cont_pane_g

0x4ad3,	// (0x00067601) call4_image_pane_ParamLimits

0x4ad3,	// (0x00067601) call4_image_pane

0x4b3e,	// (0x0006766c) call4_windows_conf_pane_ParamLimits

0x4b85,	// (0x000676b3) popup_call4_audio_in_window_ParamLimits

0x4b85,	// (0x000676b3) popup_call4_audio_in_window

0x9fdf,	// (0x0006cb0d) bg_popup_call2_act_pane_cp02

0x4c4d,	// (0x0006777b) call4_list_conf_pane

0xc458,	// (0x0006ef86) call4_image_pane_g1

0xc458,	// (0x0006ef86) call4_image_pane_g2

0x0001,

0xf08c,	// (0x00071bba) call4_image_pane_g

0x5aff,	// (0x0006862d) list_single_graphic_popup_conf4_pane_ParamLimits

0x5aff,	// (0x0006862d) list_single_graphic_popup_conf4_pane

0x9fdf,	// (0x0006cb0d) list_highlight_pane_cp022

0x5b14,	// (0x00068642) list_single_graphic_popup_conf4_pane_g1

0xcdd9,	// (0x0006f907) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf8c6,	// (0x000723f4) list_single_graphic_popup_conf4_pane_g

0x5b1c,	// (0x0006864a) list_single_graphic_popup_conf4_pane_t1

0x1130,	// (0x00063c5e) popup_vtel_slider_window_ParamLimits

0x1130,	// (0x00063c5e) popup_vtel_slider_window

0x480b,	// (0x00067339) dialer2_ne_pane_t2_ParamLimits

0x480b,	// (0x00067339) dialer2_ne_pane_t2

0x0001,

0xf7a7,	// (0x000722d5) dialer2_ne_pane_t_ParamLimits

0xf7a7,	// (0x000722d5) dialer2_ne_pane_t

0xe6eb,	// (0x00071219) bg_popup_sub_pane_cp010_ParamLimits

0xe6eb,	// (0x00071219) bg_popup_sub_pane_cp010

0x5b32,	// (0x00068660) popup_vtel_slider_window_g1_ParamLimits

0x5b32,	// (0x00068660) popup_vtel_slider_window_g1

0x5b45,	// (0x00068673) popup_vtel_slider_window_g2_ParamLimits

0x5b45,	// (0x00068673) popup_vtel_slider_window_g2

0x0003,

0xf8cb,	// (0x000723f9) popup_vtel_slider_window_g_ParamLimits

0xf8cb,	// (0x000723f9) popup_vtel_slider_window_g

0x5b9b,	// (0x000686c9) vtel_slider_pane_ParamLimits

0x5b9b,	// (0x000686c9) vtel_slider_pane

0x5bbd,	// (0x000686eb) vtel_slider_pane_g1_ParamLimits

0x5bbd,	// (0x000686eb) vtel_slider_pane_g1

0x5bd1,	// (0x000686ff) vtel_slider_pane_g2_ParamLimits

0x5bd1,	// (0x000686ff) vtel_slider_pane_g2

0x5be9,	// (0x00068717) vtel_slider_pane_g3_ParamLimits

0x5be9,	// (0x00068717) vtel_slider_pane_g3

0x5bbd,	// (0x000686eb) vtel_slider_pane_g4_ParamLimits

0x5bbd,	// (0x000686eb) vtel_slider_pane_g4

0x5bff,	// (0x0006872d) vtel_slider_pane_g5_ParamLimits

0x5bff,	// (0x0006872d) vtel_slider_pane_g5

0x0004,

0xf8d4,	// (0x00072402) vtel_slider_pane_g_ParamLimits

0xf8d4,	// (0x00072402) vtel_slider_pane_g

0xa05c,	// (0x0006cb8a) main_gallery2_pane

0x4ed5,	// (0x00067a03) aid_size_row_itut2_dropdow_list_ParamLimits

0x4ed5,	// (0x00067a03) aid_size_row_itut2_dropdow_list

0x4f65,	// (0x00067a93) grid_vitu2_function_top_pane_ParamLimits

0x4f65,	// (0x00067a93) grid_vitu2_function_top_pane

0x4fc9,	// (0x00067af7) popup_vitu2_dropdown_list_window_ParamLimits

0x4fc9,	// (0x00067af7) popup_vitu2_dropdown_list_window

0x4ff0,	// (0x00067b1e) popup_vitu2_match_list_window

0x5c15,	// (0x00068743) cell_vitu2_function_top_pane_ParamLimits

0x5c15,	// (0x00068743) cell_vitu2_function_top_pane

0x5c2f,	// (0x0006875d) cell_vitu2_function_top_pane_cp01_ParamLimits

0x5c2f,	// (0x0006875d) cell_vitu2_function_top_pane_cp01

0x5c4b,	// (0x00068779) cell_vitu2_function_top_wide_pane_ParamLimits

0x5c4b,	// (0x00068779) cell_vitu2_function_top_wide_pane

0xa05c,	// (0x0006cb8a) bg_button_pane_cp012

0x5c69,	// (0x00068797) cell_vitu2_function_top_pane_g1

0xab88,	// (0x0006d6b6) bg_button_pane_cp013_ParamLimits

0xab88,	// (0x0006d6b6) bg_button_pane_cp013

0x5c7d,	// (0x000687ab) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x5c7d,	// (0x000687ab) cell_vitu2_function_top_wide_pane_g1

0xa05c,	// (0x0006cb8a) bg_popup_sub_pane_cp20

0x5c95,	// (0x000687c3) list_vitu2_match_list_pane

0x52af,	// (0x00067ddd) bg_popup_sub_pane_cp20_g1

0x52b7,	// (0x00067de5) bg_popup_sub_pane_cp20_g2

0xc8bd,	// (0x0006f3eb) bg_popup_sub_pane_cp20_g3

0x52bf,	// (0x00067ded) bg_popup_sub_pane_cp20_g4

0xc89d,	// (0x0006f3cb) bg_popup_sub_pane_cp20_g5

0x5cad,	// (0x000687db) bg_popup_sub_pane_cp20_g6

0x52cf,	// (0x00067dfd) bg_popup_sub_pane_cp20_g7

0x52d7,	// (0x00067e05) bg_popup_sub_pane_cp20_g8

0x52df,	// (0x00067e0d) bg_popup_sub_pane_cp20_g9

0x0008,

0xf8df,	// (0x0007240d) bg_popup_sub_pane_cp20_g

0xaba4,	// (0x0006d6d2) list_vitu2_match_list_item_pane_ParamLimits

0xaba4,	// (0x0006d6d2) list_vitu2_match_list_item_pane

0xabb6,	// (0x0006d6e4) list_vitu2_match_list_item_pane_t1

0xa06a,	// (0x0006cb98) bg_popup_sub_pane_cp21

0xc693,	// (0x0006f1c1) grid_vitu2_dropdown_list_pane

0x5cb5,	// (0x000687e3) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x5cb5,	// (0x000687e3) cell_vitu2_dropdown_list_char_pane

0x5cd7,	// (0x00068805) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x5cd7,	// (0x00068805) cell_vitu2_dropdown_list_ctrl_pane

0x5d01,	// (0x0006882f) cell_vitu2_dropdown_list_char_pane_g1

0x5d0a,	// (0x00068838) cell_vitu2_dropdown_list_char_pane_g2

0x5d13,	// (0x00068841) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf8f2,	// (0x00072420) cell_vitu2_dropdown_list_char_pane_g

0x5d1c,	// (0x0006884a) cell_vitu2_dropdown_list_char_pane_t1

0x5d2a,	// (0x00068858) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x5d2a,	// (0x00068858) cell_vitu2_dropdown_list_ctrl_pane_g1

0x5d3a,	// (0x00068868) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x5d3a,	// (0x00068868) cell_vitu2_dropdown_list_ctrl_pane_g2

0x5d4b,	// (0x00068879) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x5d4b,	// (0x00068879) cell_vitu2_dropdown_list_ctrl_pane_g3

0x5d5b,	// (0x00068889) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x5d5b,	// (0x00068889) cell_vitu2_dropdown_list_ctrl_pane_g4

0xaa8e,	// (0x0006d5bc) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xaa8e,	// (0x0006d5bc) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf8f9,	// (0x00072427) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf8f9,	// (0x00072427) cell_vitu2_dropdown_list_ctrl_pane_g

0x5d77,	// (0x000688a5) aid_size_cell_gallery2_ParamLimits

0x5d77,	// (0x000688a5) aid_size_cell_gallery2

0x5d95,	// (0x000688c3) grid_gallery2_pane_ParamLimits

0x5d95,	// (0x000688c3) grid_gallery2_pane

0x5daf,	// (0x000688dd) scroll_pane_cp029_ParamLimits

0x5daf,	// (0x000688dd) scroll_pane_cp029

0x5dc0,	// (0x000688ee) cell_gallery2_pane_ParamLimits

0x5dc0,	// (0x000688ee) cell_gallery2_pane

0x5e24,	// (0x00068952) cell_gallery2_pane_g2

0x5e2c,	// (0x0006895a) cell_gallery2_pane_g3

0x5e34,	// (0x00068962) cell_gallery2_pane_g4

0x5e3c,	// (0x0006896a) cell_gallery2_pane_g5

0xc693,	// (0x0006f1c1) grid_highlight_pane_cp10

0x4ff0,	// (0x00067b1e) popup_vitu2_match_list_window_ParamLimits

0x5007,	// (0x00067b35) popup_vitu2_query_window_ParamLimits

0x5007,	// (0x00067b35) popup_vitu2_query_window

0xa06a,	// (0x0006cb98) bg_vitu2_candi_button_pane

0x5d01,	// (0x0006882f) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x5d0a,	// (0x00068838) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x5d13,	// (0x00068841) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x5e44,	// (0x00068972) bg_button_pane_cp015

0x5e5b,	// (0x00068989) bg_button_pane_cp016

0x5e67,	// (0x00068995) bg_button_pane_cp017

0xd080,	// (0x0006fbae) bg_popup_sub_pane_cp22

0x5ea8,	// (0x000689d6) popup_vitu2_query_window_g1

0x5eb4,	// (0x000689e2) popup_vitu2_query_window_g2

0x0002,

0xf904,	// (0x00072432) popup_vitu2_query_window_g

0x5eda,	// (0x00068a08) popup_vitu2_query_window_t1_ParamLimits

0x5eda,	// (0x00068a08) popup_vitu2_query_window_t1

0x5f0f,	// (0x00068a3d) popup_vitu2_query_window_t2_ParamLimits

0x5f0f,	// (0x00068a3d) popup_vitu2_query_window_t2

0x5f21,	// (0x00068a4f) popup_vitu2_query_window_t3_ParamLimits

0x5f21,	// (0x00068a4f) popup_vitu2_query_window_t3

0x5f49,	// (0x00068a77) popup_vitu2_query_window_t4_ParamLimits

0x5f49,	// (0x00068a77) popup_vitu2_query_window_t4

0x5f5d,	// (0x00068a8b) popup_vitu2_query_window_t5_ParamLimits

0x5f5d,	// (0x00068a8b) popup_vitu2_query_window_t5

0x0006,

0xf90b,	// (0x00072439) popup_vitu2_query_window_t_ParamLimits

0xf90b,	// (0x00072439) popup_vitu2_query_window_t

0x56fd,	// (0x0006822b) main_cset_text_pane

0x571e,	// (0x0006824c) aid_area_touch_slider_ParamLimits

0x573a,	// (0x00068268) cset_slider_pane_ParamLimits

0x575d,	// (0x0006828b) main_cset_slider_pane_g1_ParamLimits

0x5772,	// (0x000682a0) main_cset_slider_pane_g2_ParamLimits

0x5787,	// (0x000682b5) main_cset_slider_pane_g3_ParamLimits

0x5787,	// (0x000682b5) main_cset_slider_pane_g3

0x5793,	// (0x000682c1) main_cset_slider_pane_g4_ParamLimits

0x5793,	// (0x000682c1) main_cset_slider_pane_g4

0x57a2,	// (0x000682d0) main_cset_slider_pane_g5_ParamLimits

0x57a2,	// (0x000682d0) main_cset_slider_pane_g5

0x57b0,	// (0x000682de) main_cset_slider_pane_g6_ParamLimits

0x57b0,	// (0x000682de) main_cset_slider_pane_g6

0xf868,	// (0x00072396) main_cset_slider_pane_g_ParamLimits

0x5864,	// (0x00068392) main_cset_slider_pane_t1_ParamLimits

0x588c,	// (0x000683ba) main_cset_slider_pane_t2_ParamLimits

0x58a6,	// (0x000683d4) main_cset_slider_pane_t3_ParamLimits

0x58c0,	// (0x000683ee) main_cset_slider_pane_t4_ParamLimits

0x58da,	// (0x00068408) main_cset_slider_pane_t5_ParamLimits

0x58f8,	// (0x00068426) main_cset_slider_pane_t6_ParamLimits

0x590d,	// (0x0006843b) main_cset_slider_pane_t7_ParamLimits

0x593b,	// (0x00068469) main_cset_slider_pane_t8_ParamLimits

0x593b,	// (0x00068469) main_cset_slider_pane_t8

0x5963,	// (0x00068491) main_cset_slider_pane_t9_ParamLimits

0x5963,	// (0x00068491) main_cset_slider_pane_t9

0x598b,	// (0x000684b9) main_cset_slider_pane_t10_ParamLimits

0x598b,	// (0x000684b9) main_cset_slider_pane_t10

0x59b3,	// (0x000684e1) main_cset_slider_pane_t11_ParamLimits

0x59b3,	// (0x000684e1) main_cset_slider_pane_t11

0x59dd,	// (0x0006850b) main_cset_slider_pane_t12_ParamLimits

0x59dd,	// (0x0006850b) main_cset_slider_pane_t12

0x59fa,	// (0x00068528) main_cset_slider_pane_t13_ParamLimits

0x59fa,	// (0x00068528) main_cset_slider_pane_t13

0xf88d,	// (0x000723bb) main_cset_slider_pane_t_ParamLimits

0x9fdf,	// (0x0006cb0d) bg_popup_sub_pane_cp011

0x5fc7,	// (0x00068af5) main_cset_text_pane_g1

0x5fcf,	// (0x00068afd) main_cset_text_pane_t1

0x5fdd,	// (0x00068b0b) main_cset_text_pane_t2

0x5feb,	// (0x00068b19) main_cset_text_pane_t3

0x5ff9,	// (0x00068b27) main_cset_text_pane_t4

0x6007,	// (0x00068b35) main_cset_text_pane_t5

0x6015,	// (0x00068b43) main_cset_text_pane_t6

0x6023,	// (0x00068b51) main_cset_text_pane_t7

0x0006,

0xf91a,	// (0x00072448) main_cset_text_pane_t

0xa06a,	// (0x0006cb98) main_cam4_burst_pane

0xa06a,	// (0x0006cb98) main_cam5_pane

0x5604,	// (0x00068132) bg_button_pane_cp019

0x560d,	// (0x0006813b) bg_button_pane_cp020

0x57c4,	// (0x000682f2) main_cset_slider_pane_g7_ParamLimits

0x57c4,	// (0x000682f2) main_cset_slider_pane_g7

0x57d0,	// (0x000682fe) main_cset_slider_pane_g8_ParamLimits

0x57d0,	// (0x000682fe) main_cset_slider_pane_g8

0x57dc,	// (0x0006830a) main_cset_slider_pane_g9_ParamLimits

0x57dc,	// (0x0006830a) main_cset_slider_pane_g9

0x57e8,	// (0x00068316) main_cset_slider_pane_g10_ParamLimits

0x57e8,	// (0x00068316) main_cset_slider_pane_g10

0x57f4,	// (0x00068322) main_cset_slider_pane_g11_ParamLimits

0x57f4,	// (0x00068322) main_cset_slider_pane_g11

0x5800,	// (0x0006832e) main_cset_slider_pane_g12_ParamLimits

0x5800,	// (0x0006832e) main_cset_slider_pane_g12

0x580c,	// (0x0006833a) main_cset_slider_pane_g13_ParamLimits

0x580c,	// (0x0006833a) main_cset_slider_pane_g13

0x5818,	// (0x00068346) main_cset_slider_pane_g14_ParamLimits

0x5818,	// (0x00068346) main_cset_slider_pane_g14

0x5824,	// (0x00068352) main_cset_slider_pane_g15_ParamLimits

0x5824,	// (0x00068352) main_cset_slider_pane_g15

0x5a19,	// (0x00068547) main_cset_slider_pane_t14_ParamLimits

0x5a19,	// (0x00068547) main_cset_slider_pane_t14

0x5a52,	// (0x00068580) main_cset_slider_pane_t15_ParamLimits

0x5a52,	// (0x00068580) main_cset_slider_pane_t15

0x6031,	// (0x00068b5f) aid_cam4_burst_size_cell_ParamLimits

0x6031,	// (0x00068b5f) aid_cam4_burst_size_cell

0x6051,	// (0x00068b7f) grid_cam4_burst_pane_ParamLimits

0x6051,	// (0x00068b7f) grid_cam4_burst_pane

0x608b,	// (0x00068bb9) linegrid_cam4_burst_pane_ParamLimits

0x608b,	// (0x00068bb9) linegrid_cam4_burst_pane

0xabc4,	// (0x0006d6f2) scroll_pane_cp30_ParamLimits

0xabc4,	// (0x0006d6f2) scroll_pane_cp30

0x60ad,	// (0x00068bdb) cell_cam4_burst_pane_ParamLimits

0x60ad,	// (0x00068bdb) cell_cam4_burst_pane

0x6102,	// (0x00068c30) linegrid_cam4_burst_pane_g1_ParamLimits

0x6102,	// (0x00068c30) linegrid_cam4_burst_pane_g1

0x610f,	// (0x00068c3d) linegrid_cam4_burst_pane_g2_ParamLimits

0x610f,	// (0x00068c3d) linegrid_cam4_burst_pane_g2

0x6120,	// (0x00068c4e) linegrid_cam4_burst_pane_g3_ParamLimits

0x6120,	// (0x00068c4e) linegrid_cam4_burst_pane_g3

0x0002,

0xf929,	// (0x00072457) linegrid_cam4_burst_pane_g_ParamLimits

0xf929,	// (0x00072457) linegrid_cam4_burst_pane_g

0x612d,	// (0x00068c5b) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x612d,	// (0x00068c5b) linegrid_cam4_burst_pane_g3_copy1

0x614b,	// (0x00068c79) linegrid_cam4_burst_pane_g4_ParamLimits

0x614b,	// (0x00068c79) linegrid_cam4_burst_pane_g4

0x6158,	// (0x00068c86) linegrid_cam4_burst_pane_g5_ParamLimits

0x6158,	// (0x00068c86) linegrid_cam4_burst_pane_g5

0x6169,	// (0x00068c97) linegrid_cam4_burst_pane_g6_ParamLimits

0x6169,	// (0x00068c97) linegrid_cam4_burst_pane_g6

0x6180,	// (0x00068cae) linegrid_cam4_burst_pane_g7_ParamLimits

0x6180,	// (0x00068cae) linegrid_cam4_burst_pane_g7

0x618d,	// (0x00068cbb) cell_cam4_burst_pane_g1

0x61ac,	// (0x00068cda) main_cam5_pane_t1_ParamLimits

0x61ac,	// (0x00068cda) main_cam5_pane_t1

0x61be,	// (0x00068cec) main_cam5_pane_t2_ParamLimits

0x61be,	// (0x00068cec) main_cam5_pane_t2

0x61d0,	// (0x00068cfe) main_cam5_pane_t3_ParamLimits

0x61d0,	// (0x00068cfe) main_cam5_pane_t3

0x61e2,	// (0x00068d10) main_cam5_pane_t4_ParamLimits

0x61e2,	// (0x00068d10) main_cam5_pane_t4

0x61fa,	// (0x00068d28) main_cam5_pane_t5_ParamLimits

0x61fa,	// (0x00068d28) main_cam5_pane_t5

0x620e,	// (0x00068d3c) main_cam5_pane_t6_ParamLimits

0x620e,	// (0x00068d3c) main_cam5_pane_t6

0x6222,	// (0x00068d50) main_cam5_pane_t7_ParamLimits

0x6222,	// (0x00068d50) main_cam5_pane_t7

0x6234,	// (0x00068d62) main_cam5_pane_t8_ParamLimits

0x6234,	// (0x00068d62) main_cam5_pane_t8

0x6252,	// (0x00068d80) main_cam5_pane_t9_ParamLimits

0x6252,	// (0x00068d80) main_cam5_pane_t9

0x6264,	// (0x00068d92) main_cam5_pane_t10_ParamLimits

0x6264,	// (0x00068d92) main_cam5_pane_t10

0x6276,	// (0x00068da4) main_cam5_pane_t11_ParamLimits

0x6276,	// (0x00068da4) main_cam5_pane_t11

0x628a,	// (0x00068db8) main_cam5_pane_t12_ParamLimits

0x628a,	// (0x00068db8) main_cam5_pane_t12

0x62a1,	// (0x00068dcf) main_cam5_pane_t13_ParamLimits

0x62a1,	// (0x00068dcf) main_cam5_pane_t13

0x000c,

0xf935,	// (0x00072463) main_cam5_pane_t_ParamLimits

0xf935,	// (0x00072463) main_cam5_pane_t

0x04a4,	// (0x00062fd2) popup_scut_keymap_window_ParamLimits

0x04a4,	// (0x00062fd2) popup_scut_keymap_window

0x62c4,	// (0x00068df2) aid_size_cell_brow_shortcut

0xc693,	// (0x0006f1c1) bg_popup_window_pane_cp010

0x62d0,	// (0x00068dfe) grid_scut_pane

0x62dc,	// (0x00068e0a) cell_scut_pane_ParamLimits

0x62dc,	// (0x00068e0a) cell_scut_pane

0x62f5,	// (0x00068e23) cell_scut_pane_g1

0x62fe,	// (0x00068e2c) cell_scut_pane_t1

0x630d,	// (0x00068e3b) cell_scut_pane_t2

0x631c,	// (0x00068e4a) cell_scut_pane_t3

0x0002,

0xf950,	// (0x0007247e) cell_scut_pane_t

0x3c5f,	// (0x0006678d) main_mup3_pane_g8_ParamLimits

0x3c5f,	// (0x0006678d) main_mup3_pane_g8

0x4eef,	// (0x00067a1d) area_vitu2_query_pane_ParamLimits

0x4eef,	// (0x00067a1d) area_vitu2_query_pane

0x5e73,	// (0x000689a1) input_focus_pane_cp08

0x632a,	// (0x00068e58) area_vitu2_query_pane_g1

0x6336,	// (0x00068e64) area_vitu2_query_pane_g2

0x0001,

0xf957,	// (0x00072485) area_vitu2_query_pane_g

0x634b,	// (0x00068e79) area_vitu2_query_pane_t1_ParamLimits

0x634b,	// (0x00068e79) area_vitu2_query_pane_t1

0x635f,	// (0x00068e8d) area_vitu2_query_pane_t2_ParamLimits

0x635f,	// (0x00068e8d) area_vitu2_query_pane_t2

0x6373,	// (0x00068ea1) area_vitu2_query_pane_t3_ParamLimits

0x6373,	// (0x00068ea1) area_vitu2_query_pane_t3

0x639f,	// (0x00068ecd) area_vitu2_query_pane_t4_ParamLimits

0x639f,	// (0x00068ecd) area_vitu2_query_pane_t4

0x63c7,	// (0x00068ef5) area_vitu2_query_pane_t5_ParamLimits

0x63c7,	// (0x00068ef5) area_vitu2_query_pane_t5

0x63ef,	// (0x00068f1d) area_vitu2_query_pane_t6_ParamLimits

0x63ef,	// (0x00068f1d) area_vitu2_query_pane_t6

0x0006,

0xf95c,	// (0x0007248a) area_vitu2_query_pane_t_ParamLimits

0xf95c,	// (0x0007248a) area_vitu2_query_pane_t

0x643b,	// (0x00068f69) bg_button_pane_cp018

0x6447,	// (0x00068f75) bg_button_pane_cp021

0x6453,	// (0x00068f81) bg_button_pane_cp022

0x647e,	// (0x00068fac) input_focus_pane_cp09

0x2440,	// (0x00064f6e) aid_size_touch_mv_arrow_left

0x2469,	// (0x00064f97) aid_size_touch_mv_arrow_right

0x583c,	// (0x0006836a) main_cset_slider_pane_g16_ParamLimits

0x583c,	// (0x0006836a) main_cset_slider_pane_g16

0x584a,	// (0x00068378) main_cset_slider_pane_g17_ParamLimits

0x584a,	// (0x00068378) main_cset_slider_pane_g17

0x618d,	// (0x00068cbb) cell_cam4_burst_pane_g1_ParamLimits

0x9fdf,	// (0x0006cb0d) compa_mode_pane

0x5b55,	// (0x00068683) popup_vtel_slider_window_g3_ParamLimits

0x5b55,	// (0x00068683) popup_vtel_slider_window_g3

0x5b6c,	// (0x0006869a) popup_vtel_slider_window_g4_ParamLimits

0x5b6c,	// (0x0006869a) popup_vtel_slider_window_g4

0x5b83,	// (0x000686b1) popup_vtel_slider_window_t1_ParamLimits

0x5b83,	// (0x000686b1) popup_vtel_slider_window_t1

0xa06a,	// (0x0006cb98) main_cl_pane

0xa60f,	// (0x0006d13d) popup_imed_adjust2_window_ParamLimits

0xd080,	// (0x0006fbae) bg_tb_trans_pane_cp05_ParamLimits

0xedbb,	// (0x000718e9) popup_imed_adjust2_window_g1_ParamLimits

0xedca,	// (0x000718f8) popup_imed_adjust2_window_g2_ParamLimits

0xedca,	// (0x000718f8) popup_imed_adjust2_window_g2

0xedd6,	// (0x00071904) popup_imed_adjust2_window_g3_ParamLimits

0xedd6,	// (0x00071904) popup_imed_adjust2_window_g3

0x0002,

0xf6d7,	// (0x00072205) popup_imed_adjust2_window_g_ParamLimits

0xf6d7,	// (0x00072205) popup_imed_adjust2_window_g

0xede2,	// (0x00071910) popup_imed_adjust2_window_t1_ParamLimits

0xedfa,	// (0x00071928) slider_imed_adjust_pane_ParamLimits

0xee0e,	// (0x0007193c) slider_imed_adjust_pane_g1_ParamLimits

0xee1e,	// (0x0007194c) slider_imed_adjust_pane_g2_ParamLimits

0xee2e,	// (0x0007195c) slider_imed_adjust_pane_g3_ParamLimits

0xee3f,	// (0x0007196d) slider_imed_adjust_pane_g4_ParamLimits

0xf6de,	// (0x0007220c) slider_imed_adjust_pane_g_ParamLimits

0x4c6f,	// (0x0006779d) aid_touch_area_cam4_ParamLimits

0x4c6f,	// (0x0006779d) aid_touch_area_cam4

0xaa5c,	// (0x0006d58a) battery_pane_cp01

0x4d42,	// (0x00067870) main_camera4_pane_g6_ParamLimits

0x4d42,	// (0x00067870) main_camera4_pane_g6

0x4d6c,	// (0x0006789a) main_camera4_pane_t2_ParamLimits

0x4d6c,	// (0x0006789a) main_camera4_pane_t2

0x0001,

0xf7db,	// (0x00072309) main_camera4_pane_t_ParamLimits

0xf7db,	// (0x00072309) main_camera4_pane_t

0x4da1,	// (0x000678cf) aid_touch_area_vid4_ParamLimits

0x4da1,	// (0x000678cf) aid_touch_area_vid4

0x4df8,	// (0x00067926) main_video4_pane_g5_ParamLimits

0x4df8,	// (0x00067926) main_video4_pane_g5

0x4e1e,	// (0x0006794c) vid4_progress_pane_ParamLimits

0x4e1e,	// (0x0006794c) vid4_progress_pane

0x5858,	// (0x00068386) main_cset_slider_pane_g18_ParamLimits

0x5858,	// (0x00068386) main_cset_slider_pane_g18

0x61a0,	// (0x00068cce) cell_cam4_burst_pane_g2_ParamLimits

0x61a0,	// (0x00068cce) cell_cam4_burst_pane_g2

0x0001,

0xf930,	// (0x0007245e) cell_cam4_burst_pane_g_ParamLimits

0xf930,	// (0x0007245e) cell_cam4_burst_pane_g

0xc4b6,	// (0x0006efe4) bg_cl_pane_ParamLimits

0xc4b6,	// (0x0006efe4) bg_cl_pane

0x648f,	// (0x00068fbd) cl_header_pane_ParamLimits

0x648f,	// (0x00068fbd) cl_header_pane

0x64a3,	// (0x00068fd1) cl_listscroll_pane_ParamLimits

0x64a3,	// (0x00068fd1) cl_listscroll_pane

0x64b3,	// (0x00068fe1) bg_cl_pane_g1

0x64bb,	// (0x00068fe9) bg_cl_pane_g2

0x64c3,	// (0x00068ff1) bg_cl_pane_g3

0x64cb,	// (0x00068ff9) bg_cl_pane_g4

0x64d3,	// (0x00069001) bg_cl_pane_g5

0x64db,	// (0x00069009) bg_cl_pane_g6

0x64e3,	// (0x00069011) bg_cl_pane_g7

0x64eb,	// (0x00069019) bg_cl_pane_g8

0x64f3,	// (0x00069021) bg_cl_pane_g9

0x0008,

0xf96b,	// (0x00072499) bg_cl_pane_g

0x64fb,	// (0x00069029) aid_height_cl_leading_ParamLimits

0x64fb,	// (0x00069029) aid_height_cl_leading

0x6507,	// (0x00069035) aid_height_cl_text_ParamLimits

0x6507,	// (0x00069035) aid_height_cl_text

0xa48d,	// (0x0006cfbb) bg_cl_header_pane_ParamLimits

0xa48d,	// (0x0006cfbb) bg_cl_header_pane

0x6526,	// (0x00069054) cl_header_pane_g1_ParamLimits

0x6526,	// (0x00069054) cl_header_pane_g1

0x653c,	// (0x0006906a) cl_header_pane_t1_ParamLimits

0x653c,	// (0x0006906a) cl_header_pane_t1

0x6555,	// (0x00069083) cl_list_pane

0x5715,	// (0x00068243) hc_scroll_pane_cp01

0xc89d,	// (0x0006f3cb) bg_cl_header_pane_g1

0x52af,	// (0x00067ddd) bg_cl_header_pane_g2

0xc8bd,	// (0x0006f3eb) bg_cl_header_pane_g3

0x52bf,	// (0x00067ded) bg_cl_header_pane_g4

0x52b7,	// (0x00067de5) bg_cl_header_pane_g5

0x5cad,	// (0x000687db) bg_cl_header_pane_g6

0x52d7,	// (0x00067e05) bg_cl_header_pane_g7

0x52df,	// (0x00067e0d) bg_cl_header_pane_g8

0x52cf,	// (0x00067dfd) bg_cl_header_pane_g9

0x0008,

0xf97e,	// (0x000724ac) bg_cl_header_pane_g

0x655e,	// (0x0006908c) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x655e,	// (0x0006908c) hc_cl_list_double_graphic_heading_pane

0x6571,	// (0x0006909f) hc_cl_list_single_graphic_pane_ParamLimits

0x6571,	// (0x0006909f) hc_cl_list_single_graphic_pane

0x6589,	// (0x000690b7) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x6589,	// (0x000690b7) hc_cl_list_single_graphic_pane_g1

0x6595,	// (0x000690c3) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x6595,	// (0x000690c3) hc_cl_list_single_graphic_pane_g2

0x0001,

0xf991,	// (0x000724bf) hc_cl_list_single_graphic_pane_g_ParamLimits

0xf991,	// (0x000724bf) hc_cl_list_single_graphic_pane_g

0x65a9,	// (0x000690d7) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x65a9,	// (0x000690d7) hc_cl_list_single_graphic_pane_t1

0x6589,	// (0x000690b7) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x6589,	// (0x000690b7) hc_cl_list_double_graphic_heading_pane_g1

0x65be,	// (0x000690ec) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x65be,	// (0x000690ec) hc_cl_list_double_graphic_heading_pane_g2

0x65d2,	// (0x00069100) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x65d2,	// (0x00069100) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xf996,	// (0x000724c4) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xf996,	// (0x000724c4) hc_cl_list_double_graphic_heading_pane_g

0x65e6,	// (0x00069114) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x65e6,	// (0x00069114) hc_cl_list_double_graphic_heading_pane_t1

0x65fb,	// (0x00069129) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x65fb,	// (0x00069129) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xf99d,	// (0x000724cb) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xf99d,	// (0x000724cb) hc_cl_list_double_graphic_heading_pane_t

0xabd8,	// (0x0006d706) vid4_progress_pane_g1

0xabe8,	// (0x0006d716) vid4_progress_pane_g2

0x6610,	// (0x0006913e) vid4_progress_pane_g3

0xabf8,	// (0x0006d726) vid4_progress_pane_g4

0x0004,

0xf9a2,	// (0x000724d0) vid4_progress_pane_g

0x6622,	// (0x00069150) vid4_progress_pane_t1

0xac16,	// (0x0006d744) vid4_progress_pane_t2

0x0002,

0xf9ad,	// (0x000724db) vid4_progress_pane_t

0x663c,	// (0x0006916a) wait_bar_pane_cp07

0xe6f9,	// (0x00071227) blid_firmament_pane_ParamLimits

0xe73c,	// (0x0007126a) popup_blid_sat_info2_window_g1

0xe760,	// (0x0007128e) popup_blid_sat_info2_window_t3

0xe76e,	// (0x0007129c) popup_blid_sat_info2_window_t4

0xe77c,	// (0x000712aa) popup_blid_sat_info2_window_t5

0xe78a,	// (0x000712b8) popup_blid_sat_info2_window_t6

0xe79a,	// (0x000712c8) popup_blid_sat_info2_window_t7

0xe7a8,	// (0x000712d6) popup_blid_sat_info2_window_t8

0xe7b6,	// (0x000712e4) popup_blid_sat_info2_window_t9

0xe7c4,	// (0x000712f2) popup_blid_sat_info2_window_t10

0xe88b,	// (0x000713b9) aid_firma_cardinal_ParamLimits

0xe89f,	// (0x000713cd) blid_firmament_pane_t1_ParamLimits

0xe8b6,	// (0x000713e4) blid_firmament_pane_t2_ParamLimits

0xe8cd,	// (0x000713fb) blid_firmament_pane_t3_ParamLimits

0xe8e4,	// (0x00071412) blid_firmament_pane_t4_ParamLimits

0xf5d0,	// (0x000720fe) blid_firmament_pane_t_ParamLimits

0xe8fb,	// (0x00071429) blid_sat_info_pane_ParamLimits

0xa05c,	// (0x0006cb8a) main_cam_set_pane_ParamLimits

0x4416,	// (0x00066f44) aid_size_cell_colour_35_ParamLimits

0x4436,	// (0x00066f64) aid_size_cell_colour_112_ParamLimits

0x4456,	// (0x00066f84) aid_size_cell_effect_ParamLimits

0xd080,	// (0x0006fbae) bg_tb_trans_pane_cp02_ParamLimits

0x4476,	// (0x00066fa4) heading_imed_pane_ParamLimits

0x4482,	// (0x00066fb0) listscroll_imed_pane_ParamLimits

0xdc2c,	// (0x0007075a) popup_call2_audio_first_window_g5_ParamLimits

0xdc2c,	// (0x0007075a) popup_call2_audio_first_window_g5

0x4850,	// (0x0006737e) aid_size_touch_image3_arrow_left_ParamLimits

0x4850,	// (0x0006737e) aid_size_touch_image3_arrow_left

0x487c,	// (0x000673aa) aid_size_touch_image3_arrow_right_ParamLimits

0x487c,	// (0x000673aa) aid_size_touch_image3_arrow_right

0xac2f,	// (0x0006d75d) vid4_progress_pane_t3

0x45ff,	// (0x0006712d) main_hwr_training_symbol_option_pane_ParamLimits

0x45ff,	// (0x0006712d) main_hwr_training_symbol_option_pane

0xef63,	// (0x00071a91) popup_hwr_training_preview_window_ParamLimits

0xef63,	// (0x00071a91) popup_hwr_training_preview_window

0x461f,	// (0x0006714d) hwr_training_navi_pane_g5_ParamLimits

0x461f,	// (0x0006714d) hwr_training_navi_pane_g5

0x510b,	// (0x00067c39) popup_char_count_window

0xa05c,	// (0x0006cb8a) bg_popup_sub_pane_cp20_ParamLimits

0x5c95,	// (0x000687c3) list_vitu2_match_list_pane_ParamLimits

0x5ca1,	// (0x000687cf) vitu2_page_scroll_pane_ParamLimits

0x5ca1,	// (0x000687cf) vitu2_page_scroll_pane

0x6685,	// (0x000691b3) list_single_hwr_training_symbol_option_pane_ParamLimits

0x6685,	// (0x000691b3) list_single_hwr_training_symbol_option_pane

0x6698,	// (0x000691c6) list_single_hwr_training_symbol_option_pane_g1

0x66a0,	// (0x000691ce) list_single_hwr_training_symbol_option_pane_t1

0x66ae,	// (0x000691dc) bg_button_pane_cp023

0x66b7,	// (0x000691e5) bg_button_pane_cp024

0x66ea,	// (0x00069218) vitu2_page_scroll_pane_g1

0x66f2,	// (0x00069220) vitu2_page_scroll_pane_g2

0x0001,

0xf9b4,	// (0x000724e2) vitu2_page_scroll_pane_g

0x66fa,	// (0x00069228) vitu2_page_scroll_pane_t1

0x6709,	// (0x00069237) popup_char_count_window_g1

0x6712,	// (0x00069240) popup_char_count_window_g2

0x671b,	// (0x00069249) popup_char_count_window_g3

0x0002,

0xf9b9,	// (0x000724e7) popup_char_count_window_g

0x6724,	// (0x00069252) popup_char_count_window_t1

0xa06a,	// (0x0006cb98) main_vded2_pane

0xeda7,	// (0x000718d5) aid_size_cell_imed_line

0xedb1,	// (0x000718df) grid_imed_line_width_pane

0xab38,	// (0x0006d666) vid4_indicators_pane_g4

0x6732,	// (0x00069260) cell_imed_line_width_pane_ParamLimits

0x6732,	// (0x00069260) cell_imed_line_width_pane

0x6748,	// (0x00069276) cell_imed_line_width_pane_g1

0x6751,	// (0x0006927f) cell_imed_line_width_pane_g2

0x0001,

0xf9c0,	// (0x000724ee) cell_imed_line_width_pane_g

0x6759,	// (0x00069287) main_vded2_pane_g1_ParamLimits

0x6759,	// (0x00069287) main_vded2_pane_g1

0x6774,	// (0x000692a2) main_vded2_pane_g2_ParamLimits

0x6774,	// (0x000692a2) main_vded2_pane_g2

0x0001,

0xf9c5,	// (0x000724f3) main_vded2_pane_g_ParamLimits

0xf9c5,	// (0x000724f3) main_vded2_pane_g

0x6786,	// (0x000692b4) vded2_slider_pane_ParamLimits

0x6786,	// (0x000692b4) vded2_slider_pane

0x6796,	// (0x000692c4) aid_size_touch_vded2_end

0x67a0,	// (0x000692ce) aid_size_touch_vded2_playhead

0x67aa,	// (0x000692d8) aid_size_touch_vded2_start

0x67b2,	// (0x000692e0) vded2_slider_bg_pane

0x67bb,	// (0x000692e9) vded2_slider_pane_g1

0x67c4,	// (0x000692f2) vded2_slider_pane_g2

0x67cc,	// (0x000692fa) vded2_slider_pane_g3

0x0002,

0xf9ca,	// (0x000724f8) vded2_slider_pane_g

0x67d7,	// (0x00069305) vded2_slider_bg_pane_g1

0x67e0,	// (0x0006930e) vded2_slider_bg_pane_g2

0x67e9,	// (0x00069317) vded2_slider_bg_pane_g3

0x0002,

0xf9d1,	// (0x000724ff) vded2_slider_bg_pane_g

0x28da,	// (0x00065408) aid_postcard_touch_down_pane_ParamLimits

0x28da,	// (0x00065408) aid_postcard_touch_down_pane

0x28f2,	// (0x00065420) aid_postcard_touch_up_pane_ParamLimits

0x28f2,	// (0x00065420) aid_postcard_touch_up_pane

0xa06a,	// (0x0006cb98) main_blid2_pane

0xa5f1,	// (0x0006d11f) popup_blid2_search_window

0x9fdf,	// (0x0006cb0d) blid2_gps_pane

0x9fdf,	// (0x0006cb0d) blid2_navig_pane

0x9fdf,	// (0x0006cb0d) blid2_search_pane

0x9fdf,	// (0x0006cb0d) blid2_tripm_pane

0x67f2,	// (0x00069320) blid2_search_pane_g1_ParamLimits

0x67f2,	// (0x00069320) blid2_search_pane_g1

0x6805,	// (0x00069333) blid2_search_pane_t1_ParamLimits

0x6805,	// (0x00069333) blid2_search_pane_t1

0x6817,	// (0x00069345) aid_size_cell_blid2_gps_ParamLimits

0x6817,	// (0x00069345) aid_size_cell_blid2_gps

0x682f,	// (0x0006935d) blid2_gps_pane_g1_ParamLimits

0x682f,	// (0x0006935d) blid2_gps_pane_g1

0x6843,	// (0x00069371) grid_blid2_satellite_pane_ParamLimits

0x6843,	// (0x00069371) grid_blid2_satellite_pane

0x685b,	// (0x00069389) blid2_navig_pane_g1_ParamLimits

0x685b,	// (0x00069389) blid2_navig_pane_g1

0x6867,	// (0x00069395) blid2_navig_pane_t1_ParamLimits

0x6867,	// (0x00069395) blid2_navig_pane_t1

0x6882,	// (0x000693b0) blid2_navig_pane_t2_ParamLimits

0x6882,	// (0x000693b0) blid2_navig_pane_t2

0x0001,

0xf9d8,	// (0x00072506) blid2_navig_pane_t_ParamLimits

0xf9d8,	// (0x00072506) blid2_navig_pane_t

0x689d,	// (0x000693cb) blid2_navig_ring_pane_ParamLimits

0x689d,	// (0x000693cb) blid2_navig_ring_pane

0x68b8,	// (0x000693e6) blid2_speed_pane_ParamLimits

0x68b8,	// (0x000693e6) blid2_speed_pane

0x68c4,	// (0x000693f2) blid2_tripm_pane_g1_ParamLimits

0x68c4,	// (0x000693f2) blid2_tripm_pane_g1

0x68df,	// (0x0006940d) blid2_tripm_pane_g2_ParamLimits

0x68df,	// (0x0006940d) blid2_tripm_pane_g2

0x68f2,	// (0x00069420) blid2_tripm_pane_g3_ParamLimits

0x68f2,	// (0x00069420) blid2_tripm_pane_g3

0x6903,	// (0x00069431) blid2_tripm_pane_g4_ParamLimits

0x6903,	// (0x00069431) blid2_tripm_pane_g4

0x6914,	// (0x00069442) blid2_tripm_pane_g5_ParamLimits

0x6914,	// (0x00069442) blid2_tripm_pane_g5

0x0005,

0xf9dd,	// (0x0007250b) blid2_tripm_pane_g_ParamLimits

0xf9dd,	// (0x0007250b) blid2_tripm_pane_g

0x693a,	// (0x00069468) blid2_tripm_pane_t1_ParamLimits

0x693a,	// (0x00069468) blid2_tripm_pane_t1

0x6953,	// (0x00069481) blid2_tripm_pane_t2_ParamLimits

0x6953,	// (0x00069481) blid2_tripm_pane_t2

0x696c,	// (0x0006949a) blid2_tripm_pane_t3_ParamLimits

0x696c,	// (0x0006949a) blid2_tripm_pane_t3

0x0003,

0xf9ea,	// (0x00072518) blid2_tripm_pane_t_ParamLimits

0xf9ea,	// (0x00072518) blid2_tripm_pane_t

0x69b3,	// (0x000694e1) cell_blid2_satellite_pane_ParamLimits

0x69b3,	// (0x000694e1) cell_blid2_satellite_pane

0x69cf,	// (0x000694fd) cell_blid2_satellite_pane_g1

0x69d8,	// (0x00069506) cell_blid2_satellite_pane_t1

0xc458,	// (0x0006ef86) blid2_speed_pane_g1

0x69e6,	// (0x00069514) blid2_speed_pane_t1

0x69f4,	// (0x00069522) blid2_speed_pane_t2

0x0001,

0xf9f3,	// (0x00072521) blid2_speed_pane_t

0xc458,	// (0x0006ef86) blid2_navig_ring_pane_g1

0x6a02,	// (0x00069530) blid2_navig_ring_pane_g2

0x6a0a,	// (0x00069538) blid2_navig_ring_pane_g3

0x6a12,	// (0x00069540) blid2_navig_ring_pane_g4

0x6a1a,	// (0x00069548) blid2_navig_ring_pane_g5

0x0004,

0xf9f8,	// (0x00072526) blid2_navig_ring_pane_g

0x9fdf,	// (0x0006cb0d) bg_popup_window_pane_cp011

0x6a22,	// (0x00069550) popup_blid2_search_window_g1

0x6a2a,	// (0x00069558) popup_blid2_search_window_t1

0x6a38,	// (0x00069566) popup_blid2_search_window_t2

0x0001,

0xfa03,	// (0x00072531) popup_blid2_search_window_t

0xc7ac,	// (0x0006f2da) main_browser_pane_g1

0xc4b6,	// (0x0006efe4) main_browser_pane_ParamLimits

0xa05c,	// (0x0006cb8a) bg_button_pane_cp011_ParamLimits

0x5291,	// (0x00067dbf) cell_vitu2_function_pane_g1_ParamLimits

0xd080,	// (0x0006fbae) bg_popup_sub_pane_cp22_ParamLimits

0x5e73,	// (0x000689a1) input_focus_pane_cp08_ParamLimits

0x5e8f,	// (0x000689bd) popup_vitu2_query_button_pane_ParamLimits

0x5e8f,	// (0x000689bd) popup_vitu2_query_button_pane

0x5e9e,	// (0x000689cc) popup_vitu2_query_input_button_pane

0x5ea8,	// (0x000689d6) popup_vitu2_query_window_g1_ParamLimits

0x5eb4,	// (0x000689e2) popup_vitu2_query_window_g2_ParamLimits

0xf904,	// (0x00072432) popup_vitu2_query_window_g_ParamLimits

0x9fdf,	// (0x0006cb0d) bg_button_pane_cp026

0x6a46,	// (0x00069574) popup_vitu2_query_input_button_pane_g1

0x9fdf,	// (0x0006cb0d) bg_button_pane_cp025

0x6a4e,	// (0x0006957c) popup_vitu2_query_button_pane_t1

0x3853,	// (0x00066381) main_mp3_pane_t6

0x3861,	// (0x0006638f) popup_slider_window_cp01

0xaa9c,	// (0x0006d5ca) cam4_battery_pane

0xaaf1,	// (0x0006d61f) cam4_battery_pane_cp02

0xabd0,	// (0x0006d6fe) cam4_battery_pane_cp01

0xabd0,	// (0x0006d6fe) cam4_battery_pane_cp03

0x3782,	// (0x000662b0) cam4_battery_pane_g1

0xc458,	// (0x0006ef86) cam4_battery_pane_g2

0x0001,

0xfa08,	// (0x00072536) cam4_battery_pane_g

0xe7d2,	// (0x00071300) popup_blid_sat_info2_window_t11

0x2440,	// (0x00064f6e) aid_size_touch_mv_arrow_left_ParamLimits

0x2469,	// (0x00064f97) aid_size_touch_mv_arrow_right_ParamLimits

0xcf07,	// (0x0006fa35) navi_pane_g1_ParamLimits

0x24a8,	// (0x00064fd6) navi_pane_g2_ParamLimits

0x24d6,	// (0x00065004) navi_pane_g3_ParamLimits

0xf30c,	// (0x00071e3a) navi_pane_g_ParamLimits

0x2530,	// (0x0006505e) navi_pane_mv_t1_ParamLimits

0x448e,	// (0x00066fbc) grid_imed_effect_pane_ParamLimits

0x1047,	// (0x00063b75) aid_placing_vt_slider_lsc

0xc6ea,	// (0x0006f218) aid_placing_vt_slider_prt

0xa48d,	// (0x0006cfbb) bg_tb_trans_pane_cp01_ParamLimits

0xea3a,	// (0x00071568) popup_image_details_window_g1_ParamLimits

0xea4d,	// (0x0007157b) popup_image_details_window_g2_ParamLimits

0xea62,	// (0x00071590) popup_image_details_window_g3_ParamLimits

0xea62,	// (0x00071590) popup_image_details_window_g3

0xf610,	// (0x0007213e) popup_image_details_window_g_ParamLimits

0xea76,	// (0x000715a4) popup_image_details_window_t1_ParamLimits

0xea88,	// (0x000715b6) popup_image_details_window_t2_ParamLimits

0xeaa1,	// (0x000715cf) popup_image_details_window_t3_ParamLimits

0xeab5,	// (0x000715e3) popup_image_details_window_t4_ParamLimits

0xead0,	// (0x000715fe) popup_image_details_window_t5_ParamLimits

0xf617,	// (0x00072145) popup_image_details_window_t_ParamLimits

0x6513,	// (0x00069041) cl_header_name_pane_ParamLimits

0x6513,	// (0x00069041) cl_header_name_pane

0x6a5c,	// (0x0006958a) cl_header_name_pane_t1_ParamLimits

0x6a5c,	// (0x0006958a) cl_header_name_pane_t1

0x6a7d,	// (0x000695ab) cl_header_name_pane_t2_ParamLimits

0x6a7d,	// (0x000695ab) cl_header_name_pane_t2

0x6abf,	// (0x000695ed) cl_header_name_pane_t3_ParamLimits

0x6abf,	// (0x000695ed) cl_header_name_pane_t3

0x0002,

0xfa0d,	// (0x0007253b) cl_header_name_pane_t_ParamLimits

0xfa0d,	// (0x0007253b) cl_header_name_pane_t

0x2501,	// (0x0006502f) navi_pane_mv_g2_ParamLimits

0x50a7,	// (0x00067bd5) field_vitu2_entry_pane_g1_ParamLimits

0x50b3,	// (0x00067be1) field_vitu2_entry_pane_g2_ParamLimits

0xd05e,	// (0x0006fb8c) field_vitu2_entry_pane_g3_ParamLimits

0xd05e,	// (0x0006fb8c) field_vitu2_entry_pane_g3

0xf80d,	// (0x0007233b) field_vitu2_entry_pane_g_ParamLimits

0x5121,	// (0x00067c4f) cell_vitu2_itu_pane_g1_ParamLimits

0x5139,	// (0x00067c67) cell_vitu2_itu_pane_g2_ParamLimits

0x5139,	// (0x00067c67) cell_vitu2_itu_pane_g2

0x0001,

0xf819,	// (0x00072347) cell_vitu2_itu_pane_g_ParamLimits

0xf819,	// (0x00072347) cell_vitu2_itu_pane_g

0xa05c,	// (0x0006cb8a) bg_vkb2_func_pane_cp05_ParamLimits

0xa05c,	// (0x0006cb8a) bg_vkb2_func_pane_cp05

0xa05c,	// (0x0006cb8a) bg_vkb2_func_pane_cp03

0xa05c,	// (0x0006cb8a) bg_vkb2_func_pane_cp04

0xa05c,	// (0x0006cb8a) bg_vkb2_func_pane_cp10_ParamLimits

0xa05c,	// (0x0006cb8a) bg_vkb2_func_pane_cp10

0x6468,	// (0x00068f96) bg_vkb2_func_pane_cp08

0x643b,	// (0x00068f69) bg_vkb2_func_pane_cp06

0x6447,	// (0x00068f75) bg_vkb2_func_pane_cp07

0x66c0,	// (0x000691ee) bg_vkb2_func_pane_cp11_ParamLimits

0x66c0,	// (0x000691ee) bg_vkb2_func_pane_cp11

0x66d5,	// (0x00069203) bg_vkb2_func_pane_cp12_ParamLimits

0x66d5,	// (0x00069203) bg_vkb2_func_pane_cp12

0x9fdf,	// (0x0006cb0d) bg_vkb2_func_pane_cp09

0x52af,	// (0x00067ddd) bg_vkb2_func_pane_g1

0xc8bd,	// (0x0006f3eb) bg_vkb2_func_pane_g2

0x52b7,	// (0x00067de5) bg_vkb2_func_pane_g3

0x52bf,	// (0x00067ded) bg_vkb2_func_pane_g4

0x5cad,	// (0x000687db) bg_vkb2_func_pane_g5

0x52d7,	// (0x00067e05) bg_vkb2_func_pane_g6

0x52df,	// (0x00067e0d) bg_vkb2_func_pane_g7

0x52cf,	// (0x00067dfd) bg_vkb2_func_pane_g8

0xc89d,	// (0x0006f3cb) bg_vkb2_func_pane_g9

0x0008,

0xfa14,	// (0x00072542) bg_vkb2_func_pane_g

0x6928,	// (0x00069456) blid2_tripm_pane_g6_ParamLimits

0x6928,	// (0x00069456) blid2_tripm_pane_g6

0x4773,	// (0x000672a1) mp4_progress_pane_g1

0x699f,	// (0x000694cd) blid2_tripm_values_pane_ParamLimits

0x699f,	// (0x000694cd) blid2_tripm_values_pane

0x6af0,	// (0x0006961e) blid2_tripm_values_pane_t1

0x6afe,	// (0x0006962c) blid2_tripm_values_pane_t2

0x6b0c,	// (0x0006963a) blid2_tripm_values_pane_t3

0x6b1a,	// (0x00069648) blid2_tripm_values_pane_t4

0x6b28,	// (0x00069656) blid2_tripm_values_pane_t5

0x6b36,	// (0x00069664) blid2_tripm_values_pane_t6

0x6b44,	// (0x00069672) blid2_tripm_values_pane_t7

0x6b52,	// (0x00069680) blid2_tripm_values_pane_t8

0x6b60,	// (0x0006968e) blid2_tripm_values_pane_t9

0x0008,

0xfa27,	// (0x00072555) blid2_tripm_values_pane_t

0x1086,	// (0x00063bb4) call_video_pane_t1_ParamLimits

0x10a0,	// (0x00063bce) call_video_pane_t2_ParamLimits

0xf1ba,	// (0x00071ce8) call_video_pane_t_ParamLimits

0x2858,	// (0x00065386) msg_header_pane_g1_ParamLimits

0xd156,	// (0x0006fc84) msg_header_pane_g2_ParamLimits

0xd156,	// (0x0006fc84) msg_header_pane_g2

0x0001,

0xf3aa,	// (0x00071ed8) msg_header_pane_g_ParamLimits

0xf3aa,	// (0x00071ed8) msg_header_pane_g

0xc4b6,	// (0x0006efe4) main_clock2_pane_ParamLimits

0x4186,	// (0x00066cb4) grid_clock2_toolbar_pane_ParamLimits

0x4186,	// (0x00066cb4) grid_clock2_toolbar_pane

0x4186,	// (0x00066cb4) listscroll_clock2_pane_ParamLimits

0x4186,	// (0x00066cb4) listscroll_clock2_pane

0x4262,	// (0x00066d90) main_clock2_pane_t3_ParamLimits

0x4262,	// (0x00066d90) main_clock2_pane_t3

0x4283,	// (0x00066db1) main_clock2_pane_t4_ParamLimits

0x4283,	// (0x00066db1) main_clock2_pane_t4

0x6b6e,	// (0x0006969c) cell_clock2_toolbar_pane

0x6b76,	// (0x000696a4) cell_clock2_toolbar_pane_cp01

0x6b76,	// (0x000696a4) cell_clock2_toolbar_pane_cp02

0x6b7e,	// (0x000696ac) cell_clock2_toolbar_pane_cp03

0x6b86,	// (0x000696b4) list_clock2_pane

0xce6d,	// (0x0006f99b) scroll_pane_cp10

0x6b8e,	// (0x000696bc) list_single_clock2_pane_ParamLimits

0x6b8e,	// (0x000696bc) list_single_clock2_pane

0xc693,	// (0x0006f1c1) list_highlight_pane_cp08

0x6b9b,	// (0x000696c9) list_single_clock2_pane_t1

0xac44,	// (0x0006d772) list_single_clock2_pane_t2

0x0001,

0xfa3a,	// (0x00072568) list_single_clock2_pane_t

0x9fdf,	// (0x0006cb0d) bg_button_pane_cp10

0xac52,	// (0x0006d780) cell_clock2_toolbar_pane_g1

0x2866,	// (0x00065394) aid_main_viewer_pane_g1_ParamLimits

0x2866,	// (0x00065394) aid_main_viewer_pane_g1

0x2874,	// (0x000653a2) aid_main_viewer_pane_g2_ParamLimits

0x2874,	// (0x000653a2) aid_main_viewer_pane_g2

0x2882,	// (0x000653b0) aid_main_viewer_pane_g3_ParamLimits

0x2882,	// (0x000653b0) aid_main_viewer_pane_g3

0x2891,	// (0x000653bf) aid_main_viewer_pane_g4_ParamLimits

0x2891,	// (0x000653bf) aid_main_viewer_pane_g4

0x0003,

0xf3bb,	// (0x00071ee9) aid_main_viewer_pane_g_ParamLimits

0xf3bb,	// (0x00071ee9) aid_main_viewer_pane_g

0x317c,	// (0x00065caa) main_calc_pane_ParamLimits

0x3190,	// (0x00065cbe) main_dialer2_pane_ParamLimits

0xa06a,	// (0x0006cb98) main_cam6_pane

0xa06a,	// (0x0006cb98) main_vid6_pane

0x4192,	// (0x00066cc0) listscroll_gen_pane_cp06_ParamLimits

0x4192,	// (0x00066cc0) listscroll_gen_pane_cp06

0x42a4,	// (0x00066dd2) main_clock2_pane_t5_ParamLimits

0x42a4,	// (0x00066dd2) main_clock2_pane_t5

0x4302,	// (0x00066e30) aid_call2_pane_cp10_ParamLimits

0x4314,	// (0x00066e42) aid_call_pane_cp10_ParamLimits

0xcedc,	// (0x0006fa0a) popup_clock_analogue_window_cp10_g1_ParamLimits

0xcedc,	// (0x0006fa0a) popup_clock_analogue_window_cp10_g2_ParamLimits

0x4326,	// (0x00066e54) popup_clock_analogue_window_cp10_g3_ParamLimits

0x4326,	// (0x00066e54) popup_clock_analogue_window_cp10_g4_ParamLimits

0xcedc,	// (0x0006fa0a) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf6cc,	// (0x000721fa) popup_clock_analogue_window_cp10_g_ParamLimits

0x433c,	// (0x00066e6a) popup_clock_analogue_window_cp10_t1_ParamLimits

0x4834,	// (0x00067362) cell_dialer2_keypad_pane_g2_ParamLimits

0x4834,	// (0x00067362) cell_dialer2_keypad_pane_g2

0x0001,

0xf7ac,	// (0x000722da) cell_dialer2_keypad_pane_g_ParamLimits

0xf7ac,	// (0x000722da) cell_dialer2_keypad_pane_g

0xc462,	// (0x0006ef90) cell_dialer2_keypad_pane_t1

0x56ef,	// (0x0006821d) main_cset_text2_pane_ParamLimits

0x56ef,	// (0x0006821d) main_cset_text2_pane

0x632a,	// (0x00068e58) area_vitu2_query_pane_g1_ParamLimits

0x6336,	// (0x00068e64) area_vitu2_query_pane_g2_ParamLimits

0xf957,	// (0x00072485) area_vitu2_query_pane_g_ParamLimits

0x6417,	// (0x00068f45) area_vitu2_query_pane_t7_ParamLimits

0x6417,	// (0x00068f45) area_vitu2_query_pane_t7

0x643b,	// (0x00068f69) bg_button_pane_cp018_ParamLimits

0x6447,	// (0x00068f75) bg_button_pane_cp021_ParamLimits

0x6453,	// (0x00068f81) bg_button_pane_cp022_ParamLimits

0x6468,	// (0x00068f96) bg_vkb2_func_pane_cp08_ParamLimits

0x643b,	// (0x00068f69) bg_vkb2_func_pane_cp06_ParamLimits

0x6447,	// (0x00068f75) bg_vkb2_func_pane_cp07_ParamLimits

0x647e,	// (0x00068fac) input_focus_pane_cp09_ParamLimits

0xac5a,	// (0x0006d788) cam6_autofocus_pane_ParamLimits

0xac5a,	// (0x0006d788) cam6_autofocus_pane

0x6ba9,	// (0x000696d7) cam6_image_uncrop_pane_ParamLimits

0x6ba9,	// (0x000696d7) cam6_image_uncrop_pane

0x6bb9,	// (0x000696e7) cam6_indi_pane_ParamLimits

0x6bb9,	// (0x000696e7) cam6_indi_pane

0x6bcf,	// (0x000696fd) cam6_mode_pane_ParamLimits

0x6bcf,	// (0x000696fd) cam6_mode_pane

0x6be1,	// (0x0006970f) cam6_timer_pane_ParamLimits

0x6be1,	// (0x0006970f) cam6_timer_pane

0x6bed,	// (0x0006971b) cam6_zoom_pane_ParamLimits

0x6bed,	// (0x0006971b) cam6_zoom_pane

0x6bfb,	// (0x00069729) cam6_mode_pane_g1_ParamLimits

0x6bfb,	// (0x00069729) cam6_mode_pane_g1

0x6c0b,	// (0x00069739) cam6_mode_pane_g2_ParamLimits

0x6c0b,	// (0x00069739) cam6_mode_pane_g2

0x6c1b,	// (0x00069749) cam6_mode_pane_g3_ParamLimits

0x6c1b,	// (0x00069749) cam6_mode_pane_g3

0x6c2b,	// (0x00069759) cam6_mode_pane_g4_ParamLimits

0x6c2b,	// (0x00069759) cam6_mode_pane_g4

0x0003,

0xfa3f,	// (0x0007256d) cam6_mode_pane_g_ParamLimits

0xfa3f,	// (0x0007256d) cam6_mode_pane_g

0xeffb,	// (0x00071b29) bg_tb_trans_pane_cp08_ParamLimits

0xeffb,	// (0x00071b29) bg_tb_trans_pane_cp08

0xac68,	// (0x0006d796) cam6_battery_pane_ParamLimits

0xac68,	// (0x0006d796) cam6_battery_pane

0xac7e,	// (0x0006d7ac) cam6_indi_pane_g1_ParamLimits

0xac7e,	// (0x0006d7ac) cam6_indi_pane_g1

0xac90,	// (0x0006d7be) cam6_indi_pane_g2_ParamLimits

0xac90,	// (0x0006d7be) cam6_indi_pane_g2

0xaca2,	// (0x0006d7d0) cam6_indi_pane_g3_ParamLimits

0xaca2,	// (0x0006d7d0) cam6_indi_pane_g3

0x0002,

0xfa48,	// (0x00072576) cam6_indi_pane_g_ParamLimits

0xfa48,	// (0x00072576) cam6_indi_pane_g

0xacb4,	// (0x0006d7e2) cam6_indi_pane_t1_ParamLimits

0xacb4,	// (0x0006d7e2) cam6_indi_pane_t1

0x4e6b,	// (0x00067999) cam6_autofocus_pane_g1

0x4e63,	// (0x00067991) cam6_autofocus_pane_g2

0x4e7b,	// (0x000679a9) cam6_autofocus_pane_g3

0x4e73,	// (0x000679a1) cam6_autofocus_pane_g4

0x0003,

0xfa4f,	// (0x0007257d) cam6_autofocus_pane_g

0xacda,	// (0x0006d808) cam6_timer_pane_g1

0xace2,	// (0x0006d810) cam6_timer_pane_t1

0xacf0,	// (0x0006d81e) cam6_zoom_cont_pane

0xacf8,	// (0x0006d826) cam6_zoom_pane_g1

0xad01,	// (0x0006d82f) cam6_zoom_pane_g2

0x6c3b,	// (0x00069769) cam6_zoom_pane_g3

0x0002,

0xfa58,	// (0x00072586) cam6_zoom_pane_g

0xc458,	// (0x0006ef86) cam6_battery_pane_g1

0xc458,	// (0x0006ef86) cam6_battery_pane_g2

0x0001,

0xf08c,	// (0x00071bba) cam6_battery_pane_g

0xacf8,	// (0x0006d826) cam6_zoom_cont_pane_g1

0xad01,	// (0x0006d82f) cam6_zoom_cont_pane_g2

0xad0a,	// (0x0006d838) cam6_zoom_cont_pane_g3

0x0002,

0xfa5f,	// (0x0007258d) cam6_zoom_cont_pane_g

0x6c59,	// (0x00069787) cam6_mode_pane_cp_ParamLimits

0x6c59,	// (0x00069787) cam6_mode_pane_cp

0x6c6b,	// (0x00069799) cam6_zoom_pane_cp_ParamLimits

0x6c6b,	// (0x00069799) cam6_zoom_pane_cp

0x6c79,	// (0x000697a7) vid6_image_uncrop_cif_pane_ParamLimits

0x6c79,	// (0x000697a7) vid6_image_uncrop_cif_pane

0x6c89,	// (0x000697b7) vid6_image_uncrop_nhd_pane_ParamLimits

0x6c89,	// (0x000697b7) vid6_image_uncrop_nhd_pane

0x6c98,	// (0x000697c6) vid6_image_uncrop_vga_pane_ParamLimits

0x6c98,	// (0x000697c6) vid6_image_uncrop_vga_pane

0x6ca7,	// (0x000697d5) vid6_image_uncrop_wvga_pane_ParamLimits

0x6ca7,	// (0x000697d5) vid6_image_uncrop_wvga_pane

0x6cb6,	// (0x000697e4) vid6_indi_pane_ParamLimits

0x6cb6,	// (0x000697e4) vid6_indi_pane

0xeffb,	// (0x00071b29) bg_tb_trans_pane_cp09_ParamLimits

0xeffb,	// (0x00071b29) bg_tb_trans_pane_cp09

0xad22,	// (0x0006d850) cam6_battery_pane_cp_ParamLimits

0xad22,	// (0x0006d850) cam6_battery_pane_cp

0xad2e,	// (0x0006d85c) vid6_indi_pane_g1_ParamLimits

0xad2e,	// (0x0006d85c) vid6_indi_pane_g1

0xad40,	// (0x0006d86e) vid6_indi_pane_g2_ParamLimits

0xad40,	// (0x0006d86e) vid6_indi_pane_g2

0xad52,	// (0x0006d880) vid6_indi_pane_g3_ParamLimits

0xad52,	// (0x0006d880) vid6_indi_pane_g3

0xad69,	// (0x0006d897) vid6_indi_pane_g4_ParamLimits

0xad69,	// (0x0006d897) vid6_indi_pane_g4

0xad80,	// (0x0006d8ae) vid6_indi_pane_g5_ParamLimits

0xad80,	// (0x0006d8ae) vid6_indi_pane_g5

0x0004,

0xfa66,	// (0x00072594) vid6_indi_pane_g_ParamLimits

0xfa66,	// (0x00072594) vid6_indi_pane_g

0xad9a,	// (0x0006d8c8) vid6_indi_pane_t1_ParamLimits

0xad9a,	// (0x0006d8c8) vid6_indi_pane_t1

0xadb0,	// (0x0006d8de) vid6_indi_pane_t2_ParamLimits

0xadb0,	// (0x0006d8de) vid6_indi_pane_t2

0xadd8,	// (0x0006d906) vid6_indi_pane_t3_ParamLimits

0xadd8,	// (0x0006d906) vid6_indi_pane_t3

0xae00,	// (0x0006d92e) vid6_indi_pane_t4_ParamLimits

0xae00,	// (0x0006d92e) vid6_indi_pane_t4

0x0003,

0xfa71,	// (0x0007259f) vid6_indi_pane_t_ParamLimits

0xfa71,	// (0x0007259f) vid6_indi_pane_t

0xae24,	// (0x0006d952) wait_bar_pane_cp08

0x6cce,	// (0x000697fc) main_cset_text2_pane_t1_ParamLimits

0x6cce,	// (0x000697fc) main_cset_text2_pane_t1

0x6c44,	// (0x00069772) listscroll_gen_pane_cp06_t1_ParamLimits

0x6c44,	// (0x00069772) listscroll_gen_pane_cp06_t1

0xa06a,	// (0x0006cb98) main_cam6_set_pane

0xaa8e,	// (0x0006d5bc) bg_tb_trans_pane_cp06_ParamLimits

0xaaa4,	// (0x0006d5d2) cam4_indicators_pane_g1_ParamLimits

0xaab5,	// (0x0006d5e3) cam4_indicators_pane_g2_ParamLimits

0xf7e9,	// (0x00072317) cam4_indicators_pane_g_ParamLimits

0xaacd,	// (0x0006d5fb) cam4_indicators_pane_t1_ParamLimits

0xa05c,	// (0x0006cb8a) bg_tb_trans_pane_cp07_ParamLimits

0xaafb,	// (0x0006d629) vid4_indicators_pane_g1_ParamLimits

0xab11,	// (0x0006d63f) vid4_indicators_pane_g2_ParamLimits

0xab25,	// (0x0006d653) vid4_indicators_pane_g3_ParamLimits

0xab38,	// (0x0006d666) vid4_indicators_pane_g4_ParamLimits

0xf7fb,	// (0x00072329) vid4_indicators_pane_g_ParamLimits

0xab56,	// (0x0006d684) vid4_indicators_pane_t1_ParamLimits

0xabd8,	// (0x0006d706) vid4_progress_pane_g1_ParamLimits

0xabe8,	// (0x0006d716) vid4_progress_pane_g2_ParamLimits

0x6610,	// (0x0006913e) vid4_progress_pane_g3_ParamLimits

0xabf8,	// (0x0006d726) vid4_progress_pane_g4_ParamLimits

0xf9a2,	// (0x000724d0) vid4_progress_pane_g_ParamLimits

0x6622,	// (0x00069150) vid4_progress_pane_t1_ParamLimits

0xac16,	// (0x0006d744) vid4_progress_pane_t2_ParamLimits

0xac2f,	// (0x0006d75d) vid4_progress_pane_t3_ParamLimits

0xf9ad,	// (0x000724db) vid4_progress_pane_t_ParamLimits

0x663c,	// (0x0006916a) wait_bar_pane_cp07_ParamLimits

0x6cef,	// (0x0006981d) main_cam6_set_pane_g2_ParamLimits

0x6cef,	// (0x0006981d) main_cam6_set_pane_g2

0x6d15,	// (0x00069843) main_cset6_listscroll_pane_ParamLimits

0x6d15,	// (0x00069843) main_cset6_listscroll_pane

0x6d33,	// (0x00069861) main_cset6_slider_pane_ParamLimits

0x6d33,	// (0x00069861) main_cset6_slider_pane

0x6d49,	// (0x00069877) main_cset6_text2_pane_ParamLimits

0x6d49,	// (0x00069877) main_cset6_text2_pane

0xae33,	// (0x0006d961) main_cset6_text_pane

0xae3b,	// (0x0006d969) main_cset_list_pane_copy1_ParamLimits

0xae3b,	// (0x0006d969) main_cset_list_pane_copy1

0xae4b,	// (0x0006d979) scroll_pane_cp028_copy1

0x6d57,	// (0x00069885) cset_list_set_pane_copy1

0x6d6b,	// (0x00069899) aid_position_infowindow_above_copy1

0x6d73,	// (0x000698a1) aid_position_infowindow_below_copy1

0x6d7b,	// (0x000698a9) cset_list_set_pane_g1_copy1

0x6d83,	// (0x000698b1) cset_list_set_pane_g3_copy1_ParamLimits

0x6d83,	// (0x000698b1) cset_list_set_pane_g3_copy1

0x6d92,	// (0x000698c0) cset_list_set_pane_t1_copy1_ParamLimits

0x6d92,	// (0x000698c0) cset_list_set_pane_t1_copy1

0xa48d,	// (0x0006cfbb) list_highlight_pane_cp021_copy1_ParamLimits

0xa48d,	// (0x0006cfbb) list_highlight_pane_cp021_copy1

0xae54,	// (0x0006d982) cset6_slider_pane_ParamLimits

0xae54,	// (0x0006d982) cset6_slider_pane

0xae80,	// (0x0006d9ae) main_cset6_slider_pane_g1_ParamLimits

0xae80,	// (0x0006d9ae) main_cset6_slider_pane_g1

0x6da7,	// (0x000698d5) main_cset6_slider_pane_g2_ParamLimits

0x6da7,	// (0x000698d5) main_cset6_slider_pane_g2

0xaea8,	// (0x0006d9d6) main_cset6_slider_pane_g3_ParamLimits

0xaea8,	// (0x0006d9d6) main_cset6_slider_pane_g3

0x6dcf,	// (0x000698fd) main_cset6_slider_pane_g4_ParamLimits

0x6dcf,	// (0x000698fd) main_cset6_slider_pane_g4

0x6ddb,	// (0x00069909) main_cset6_slider_pane_g5_ParamLimits

0x6ddb,	// (0x00069909) main_cset6_slider_pane_g5

0x57c4,	// (0x000682f2) main_cset6_slider_pane_g7_ParamLimits

0x57c4,	// (0x000682f2) main_cset6_slider_pane_g7

0x57d0,	// (0x000682fe) main_cset6_slider_pane_g8_ParamLimits

0x57d0,	// (0x000682fe) main_cset6_slider_pane_g8

0x57dc,	// (0x0006830a) main_cset6_slider_pane_g9_ParamLimits

0x57dc,	// (0x0006830a) main_cset6_slider_pane_g9

0x57e8,	// (0x00068316) main_cset6_slider_pane_g10_ParamLimits

0x57e8,	// (0x00068316) main_cset6_slider_pane_g10

0x57f4,	// (0x00068322) main_cset6_slider_pane_g11_ParamLimits

0x57f4,	// (0x00068322) main_cset6_slider_pane_g11

0x5800,	// (0x0006832e) main_cset6_slider_pane_g12_ParamLimits

0x5800,	// (0x0006832e) main_cset6_slider_pane_g12

0x580c,	// (0x0006833a) main_cset6_slider_pane_g13_ParamLimits

0x580c,	// (0x0006833a) main_cset6_slider_pane_g13

0x5818,	// (0x00068346) main_cset6_slider_pane_g14_ParamLimits

0x5818,	// (0x00068346) main_cset6_slider_pane_g14

0x6de9,	// (0x00069917) main_cset6_slider_pane_g15_ParamLimits

0x6de9,	// (0x00069917) main_cset6_slider_pane_g15

0x583c,	// (0x0006836a) main_cset6_slider_pane_g16_ParamLimits

0x583c,	// (0x0006836a) main_cset6_slider_pane_g16

0x584a,	// (0x00068378) main_cset6_slider_pane_g17_ParamLimits

0x584a,	// (0x00068378) main_cset6_slider_pane_g17

0x0011,

0xfa7a,	// (0x000725a8) main_cset6_slider_pane_g_ParamLimits

0xfa7a,	// (0x000725a8) main_cset6_slider_pane_g

0xaeb4,	// (0x0006d9e2) main_cset6_slider_pane_t1_ParamLimits

0xaeb4,	// (0x0006d9e2) main_cset6_slider_pane_t1

0x6e19,	// (0x00069947) main_cset6_slider_pane_t2_ParamLimits

0x6e19,	// (0x00069947) main_cset6_slider_pane_t2

0x6e44,	// (0x00069972) main_cset6_slider_pane_t3_ParamLimits

0x6e44,	// (0x00069972) main_cset6_slider_pane_t3

0x6e6f,	// (0x0006999d) main_cset6_slider_pane_t4_ParamLimits

0x6e6f,	// (0x0006999d) main_cset6_slider_pane_t4

0x6e9a,	// (0x000699c8) main_cset6_slider_pane_t5_ParamLimits

0x6e9a,	// (0x000699c8) main_cset6_slider_pane_t5

0xaef5,	// (0x0006da23) main_cset6_slider_pane_t7_ParamLimits

0xaef5,	// (0x0006da23) main_cset6_slider_pane_t7

0x6ec7,	// (0x000699f5) main_cset6_slider_pane_t8_ParamLimits

0x6ec7,	// (0x000699f5) main_cset6_slider_pane_t8

0x6eeb,	// (0x00069a19) main_cset6_slider_pane_t9_ParamLimits

0x6eeb,	// (0x00069a19) main_cset6_slider_pane_t9

0x6f0f,	// (0x00069a3d) main_cset6_slider_pane_t10_ParamLimits

0x6f0f,	// (0x00069a3d) main_cset6_slider_pane_t10

0x6f33,	// (0x00069a61) main_cset6_slider_pane_t11_ParamLimits

0x6f33,	// (0x00069a61) main_cset6_slider_pane_t11

0xaf2b,	// (0x0006da59) main_cset6_slider_pane_t14_ParamLimits

0xaf2b,	// (0x0006da59) main_cset6_slider_pane_t14

0xaf64,	// (0x0006da92) main_cset6_slider_pane_t15_ParamLimits

0xaf64,	// (0x0006da92) main_cset6_slider_pane_t15

0x000b,

0xfa9f,	// (0x000725cd) main_cset6_slider_pane_t_ParamLimits

0xfa9f,	// (0x000725cd) main_cset6_slider_pane_t

0x6f59,	// (0x00069a87) cset_slider_pane_g1_copy1

0x6f62,	// (0x00069a90) cset_slider_pane_g2_copy1

0x6f6b,	// (0x00069a99) cset_slider_pane_g3_copy1

0x9fdf,	// (0x0006cb0d) bg_popup_sub_pane_cp011_copy1

0xafa6,	// (0x0006dad4) main_cset_text_pane_g1_copy1

0x5fcf,	// (0x00068afd) main_cset_text_pane_t1_copy1

0x5fdd,	// (0x00068b0b) main_cset_text_pane_t2_copy1

0x5feb,	// (0x00068b19) main_cset_text_pane_t3_copy1

0x5ff9,	// (0x00068b27) main_cset_text_pane_t4_copy1

0x6007,	// (0x00068b35) main_cset_text_pane_t5_copy1

0xafae,	// (0x0006dadc) main_cset_text_pane_t6_copy1

0xafbc,	// (0x0006daea) main_cset_text_pane_t7_copy1

0x6cce,	// (0x000697fc) main_cset_text2_pane_t1_copy1

0xa05c,	// (0x0006cb8a) main_ncimui_pane

0x341e,	// (0x00065f4c) popup_query_ncimui_window_ParamLimits

0x341e,	// (0x00065f4c) popup_query_ncimui_window

0xeb71,	// (0x0007169f) field_cale_ev2_pane_g4_ParamLimits

0xeb71,	// (0x0007169f) field_cale_ev2_pane_g4

0x471b,	// (0x00067249) cell_video_dialer_keypad_pane_g2_ParamLimits

0x471b,	// (0x00067249) cell_video_dialer_keypad_pane_g2

0x0001,

0xf783,	// (0x000722b1) cell_video_dialer_keypad_pane_g_ParamLimits

0xf783,	// (0x000722b1) cell_video_dialer_keypad_pane_g

0x4733,	// (0x00067261) cell_video_dialer_keypad_pane_t1

0x9fdf,	// (0x0006cb0d) bg_popup_window_pane_cp012

0xcd66,	// (0x0006f894) heading_pane_cp06

0xafe8,	// (0x0006db16) ncim_query_content_pane

0x9fdf,	// (0x0006cb0d) bg_popup_heading_pane_cp01

0xaff0,	// (0x0006db1e) ncim_heading_pane_t1

0xaffe,	// (0x0006db2c) ncim_indicator_popup_pane

0xb010,	// (0x0006db3e) ncim_query_button_pane

0xb026,	// (0x0006db54) ncim_query_content_pane_t1

0xb038,	// (0x0006db66) ncim_query_content_pane_t2

0x0005,

0xfae3,	// (0x00072611) ncim_query_content_pane_t

0xb072,	// (0x0006dba0) ncim_query_list_pane

0xb084,	// (0x0006dbb2) ncim_query_popup_pane

0xaffe,	// (0x0006db2c) ncim_indicator_popup_pane_ParamLimits

0x70ba,	// (0x00069be8) ncim_query_content_pane_g1_ParamLimits

0x70ba,	// (0x00069be8) ncim_query_content_pane_g1

0xb026,	// (0x0006db54) ncim_query_content_pane_t1_ParamLimits

0xb038,	// (0x0006db66) ncim_query_content_pane_t2_ParamLimits

0x70c6,	// (0x00069bf4) ncim_query_content_pane_t3_ParamLimits

0x70c6,	// (0x00069bf4) ncim_query_content_pane_t3

0x70ee,	// (0x00069c1c) ncim_query_content_pane_t4_ParamLimits

0x70ee,	// (0x00069c1c) ncim_query_content_pane_t4

0x7116,	// (0x00069c44) ncim_query_content_pane_t5_ParamLimits

0x7116,	// (0x00069c44) ncim_query_content_pane_t5

0xb04a,	// (0x0006db78) ncim_query_content_pane_t6_ParamLimits

0xb04a,	// (0x0006db78) ncim_query_content_pane_t6

0xfae3,	// (0x00072611) ncim_query_content_pane_t_ParamLimits

0xb072,	// (0x0006dba0) ncim_query_list_pane_ParamLimits

0xb084,	// (0x0006dbb2) ncim_query_popup_pane_ParamLimits

0xb098,	// (0x0006dbc6) wait_bar_pane_cp04

0x9fdf,	// (0x0006cb0d) input_focus_pane_cp011

0xb0a0,	// (0x0006dbce) ncim_query_popup_pane_t1

0xb0ae,	// (0x0006dbdc) ncim_list_query_list_pane_ParamLimits

0xb0ae,	// (0x0006dbdc) ncim_list_query_list_pane

0x9fdf,	// (0x0006cb0d) bg_button_pane_cp027

0xb0c1,	// (0x0006dbef) ncim_query_button_pane_g1

0x9fdf,	// (0x0006cb0d) list_highlight_pane_cp012

0xb0cb,	// (0x0006dbf9) ncim_list_query_list_pane_g1

0xb0d3,	// (0x0006dc01) ncim_list_query_list_pane_t1

0xaac1,	// (0x0006d5ef) cam4_indicators_pane_g3_ParamLimits

0xaac1,	// (0x0006d5ef) cam4_indicators_pane_g3

0xab44,	// (0x0006d672) vid4_indicators_pane_g5_ParamLimits

0xab44,	// (0x0006d672) vid4_indicators_pane_g5

0xac07,	// (0x0006d735) vid4_progress_pane_g5_ParamLimits

0xac07,	// (0x0006d735) vid4_progress_pane_g5

0x6fa5,	// (0x00069ad3) main_ncimui_pane_g1

0x700e,	// (0x00069b3c) ncimui_group_query_pane_ParamLimits

0x700e,	// (0x00069b3c) ncimui_group_query_pane

0x7056,	// (0x00069b84) ncimui_list_pane_ParamLimits

0x7056,	// (0x00069b84) ncimui_list_pane

0x707d,	// (0x00069bab) ncimui_text_pane_ParamLimits

0x707d,	// (0x00069bab) ncimui_text_pane

0x713e,	// (0x00069c6c) ncimui_text_pane_t1_ParamLimits

0x713e,	// (0x00069c6c) ncimui_text_pane_t1

0xb0e1,	// (0x0006dc0f) ncimui_list_single_graphic_pane_ParamLimits

0xb0e1,	// (0x0006dc0f) ncimui_list_single_graphic_pane

0x715c,	// (0x00069c8a) ncimui_query_pane_ParamLimits

0x715c,	// (0x00069c8a) ncimui_query_pane

0x9fdf,	// (0x0006cb0d) list_highlight_pane_cp013

0xb0f1,	// (0x0006dc1f) ncim_list_query_list_pane_t1_copy1

0xb0cb,	// (0x0006dbf9) ncim_list_single_graphic_pane_g1

0x716f,	// (0x00069c9d) ncim_query_button_pane_cp01

0x717b,	// (0x00069ca9) ncim_query_entry_pane_ParamLimits

0x717b,	// (0x00069ca9) ncim_query_entry_pane

0x718e,	// (0x00069cbc) ncimui_query_pane_g1

0x719a,	// (0x00069cc8) ncimui_query_pane_t1_ParamLimits

0x719a,	// (0x00069cc8) ncimui_query_pane_t1

0xa48d,	// (0x0006cfbb) input_focus_pane_cp012

0xb0ff,	// (0x0006dc2d) ncim_query_entry_pane_t1

0xc4b6,	// (0x0006efe4) main_im_pane_ParamLimits

0xa05c,	// (0x0006cb8a) main_mobtv_pane_ParamLimits

0xa05c,	// (0x0006cb8a) main_mobtv_pane

0x6e01,	// (0x0006992f) main_cset6_slider_pane_g18_ParamLimits

0x6e01,	// (0x0006992f) main_cset6_slider_pane_g18

0x6e0d,	// (0x0006993b) main_cset6_slider_pane_g19_ParamLimits

0x6e0d,	// (0x0006993b) main_cset6_slider_pane_g19

0xc436,	// (0x0006ef64) bg_main_mobtv_pane_ParamLimits

0xc436,	// (0x0006ef64) bg_main_mobtv_pane

0x71b3,	// (0x00069ce1) main_mobtv_info_pane

0x71be,	// (0x00069cec) main_mobtv_loading_pane_ParamLimits

0x71be,	// (0x00069cec) main_mobtv_loading_pane

0xb111,	// (0x0006dc3f) main_mobtv_pg_channel_list_pane

0xb11b,	// (0x0006dc49) main_mobtv_pg_hdr_pane

0x71cb,	// (0x00069cf9) main_mobtv_programe_curr_pane_ParamLimits

0x71cb,	// (0x00069cf9) main_mobtv_programe_curr_pane

0x71d8,	// (0x00069d06) main_mobtv_programe_next_pane_ParamLimits

0x71d8,	// (0x00069d06) main_mobtv_programe_next_pane

0xb124,	// (0x0006dc52) popup_mobtv_noti_window

0xc458,	// (0x0006ef86) main_tv_pg_hdr_pane_g1

0xb12e,	// (0x0006dc5c) main_tv_pg_hdr_pane_g2

0xb136,	// (0x0006dc64) main_tv_pg_hdr_pane_g3

0xb13e,	// (0x0006dc6c) main_tv_pg_hdr_pane_g4

0xb146,	// (0x0006dc74) main_tv_pg_hdr_pane_g5

0xb150,	// (0x0006dc7e) main_tv_pg_hdr_pane_g6

0xb15a,	// (0x0006dc88) main_tv_pg_hdr_pane_g7

0xb164,	// (0x0006dc92) main_tv_pg_hdr_pane_g8

0xb16e,	// (0x0006dc9c) main_tv_pg_hdr_pane_g9

0xb178,	// (0x0006dca6) main_tv_pg_hdr_pane_g10

0xb182,	// (0x0006dcb0) main_tv_pg_hdr_pane_g11

0x000a,

0xfaf0,	// (0x0007261e) main_tv_pg_hdr_pane_g

0xb18c,	// (0x0006dcba) main_tv_pg_hdr_pane_t1

0xb19a,	// (0x0006dcc8) main_tv_pg_hdr_pane_t2

0xb1a8,	// (0x0006dcd6) main_tv_pg_hdr_pane_t3

0xb1b8,	// (0x0006dce6) main_tv_pg_hdr_pane_t4

0xb1c8,	// (0x0006dcf6) main_tv_pg_hdr_pane_t5

0x0004,

0xfb07,	// (0x00072635) main_tv_pg_hdr_pane_t

0xb1d8,	// (0x0006dd06) single_mobtv_pg_channel_pane_ParamLimits

0xb1d8,	// (0x0006dd06) single_mobtv_pg_channel_pane

0xb1ea,	// (0x0006dd18) single_mobtv_pg_channel_table_pane

0xb1f3,	// (0x0006dd21) single_mobtv_pg_channel_thumb_pane

0xb1fc,	// (0x0006dd2a) single_tv_pg_channel_pane_g1

0xb205,	// (0x0006dd33) single_tv_pg_channel_pane_g2

0x0001,

0xfb12,	// (0x00072640) single_tv_pg_channel_pane_g

0xc41a,	// (0x0006ef48) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xc41a,	// (0x0006ef48) bg_single_mobtv_pg_channel_thumb_pane

0xb20e,	// (0x0006dd3c) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xb20e,	// (0x0006dd3c) single_mobtv_pg_channel_thumb_pane_g1

0xb21c,	// (0x0006dd4a) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xb21c,	// (0x0006dd4a) single_mobtv_pg_channel_thumb_pane_g2

0xb228,	// (0x0006dd56) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xb228,	// (0x0006dd56) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfb17,	// (0x00072645) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfb17,	// (0x00072645) single_mobtv_pg_channel_thumb_pane_g

0xb234,	// (0x0006dd62) single_mobtv_pg_channel_thumb_pane_t1

0xb242,	// (0x0006dd70) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfb1e,	// (0x0007264c) single_mobtv_pg_channel_thumb_pane_t

0xc458,	// (0x0006ef86) bg_single_mobtv_pg_channel_table_pane_g1

0xc458,	// (0x0006ef86) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf08c,	// (0x00071bba) bg_single_mobtv_pg_channel_table_pane_g

0xb250,	// (0x0006dd7e) single_mobtv_pg_channel_table_pane_t1

0xb25e,	// (0x0006dd8c) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfb23,	// (0x00072651) single_mobtv_pg_channel_table_pane_t

0x71ed,	// (0x00069d1b) main_mobtv_info_pane_g1_ParamLimits

0x71ed,	// (0x00069d1b) main_mobtv_info_pane_g1

0x720b,	// (0x00069d39) main_mobtv_info_pane_t1_ParamLimits

0x720b,	// (0x00069d39) main_mobtv_info_pane_t1

0x7283,	// (0x00069db1) main_mobtv_info_pane_t2_ParamLimits

0x7283,	// (0x00069db1) main_mobtv_info_pane_t2

0x0002,

0xfb2d,	// (0x0007265b) main_mobtv_info_pane_t_ParamLimits

0xfb2d,	// (0x0007265b) main_mobtv_info_pane_t

0x7314,	// (0x00069e42) wait_bar_pane_cp05

0x7326,	// (0x00069e54) main_mobtv_loading_pane_g1_ParamLimits

0x7326,	// (0x00069e54) main_mobtv_loading_pane_g1

0x7337,	// (0x00069e65) main_mobtv_loading_pane_g2_ParamLimits

0x7337,	// (0x00069e65) main_mobtv_loading_pane_g2

0x7343,	// (0x00069e71) main_mobtv_loading_pane_g3_ParamLimits

0x7343,	// (0x00069e71) main_mobtv_loading_pane_g3

0x0002,

0xfb34,	// (0x00072662) main_mobtv_loading_pane_g_ParamLimits

0xfb34,	// (0x00072662) main_mobtv_loading_pane_g

0xb26c,	// (0x0006dd9a) main_mobtv_loading_pane_t1_ParamLimits

0xb26c,	// (0x0006dd9a) main_mobtv_loading_pane_t1

0xb284,	// (0x0006ddb2) main_mobtv_loading_pane_t2_ParamLimits

0xb284,	// (0x0006ddb2) main_mobtv_loading_pane_t2

0x0001,

0xfb3b,	// (0x00072669) main_mobtv_loading_pane_t_ParamLimits

0xfb3b,	// (0x00072669) main_mobtv_loading_pane_t

0x7356,	// (0x00069e84) wait_bar_pane_cp06_ParamLimits

0x7356,	// (0x00069e84) wait_bar_pane_cp06

0xb2a8,	// (0x0006ddd6) main_mobtv_programe_curr_pane_t1

0xb2b6,	// (0x0006dde4) main_mobtv_programe_curr_pane_t2

0x0001,

0xfb40,	// (0x0007266e) main_mobtv_programe_curr_pane_t

0xb2c4,	// (0x0006ddf2) main_mobtv_programe_next_pane_t1

0xb2d2,	// (0x0006de00) main_mobtv_programe_next_pane_t2

0xb2e0,	// (0x0006de0e) main_mobtv_programe_next_pane_t3

0x0002,

0xfb45,	// (0x00072673) main_mobtv_programe_next_pane_t

0x9fdf,	// (0x0006cb0d) bg_popup_mobtv_noti_window_pane

0xb2ee,	// (0x0006de1c) popup_mobtv_noti_window_g1

0xb2f6,	// (0x0006de24) popup_mobtv_noti_window_t1

0xb304,	// (0x0006de32) popup_mobtv_noti_window_t2

0x0001,

0xfb4c,	// (0x0007267a) popup_mobtv_noti_window_t

0xc458,	// (0x0006ef86) bg_popup_mobtv_noti_window_pane_g1

0xa06a,	// (0x0006cb98) sc_clock_pane

0xa06a,	// (0x0006cb98) main_fs_bigclock_pane

0x6989,	// (0x000694b7) blid2_tripm_pane_t4_ParamLimits

0x6989,	// (0x000694b7) blid2_tripm_pane_t4

0xc41a,	// (0x0006ef48) sc_clock_pane_g1_ParamLimits

0xc41a,	// (0x0006ef48) sc_clock_pane_g1

0xc462,	// (0x0006ef90) sc_clock_pane_t1_ParamLimits

0xc462,	// (0x0006ef90) sc_clock_pane_t1

0xc462,	// (0x0006ef90) sc_clock_pane_t2_ParamLimits

0xc462,	// (0x0006ef90) sc_clock_pane_t2

0xc462,	// (0x0006ef90) sc_clock_pane_t3_ParamLimits

0xc462,	// (0x0006ef90) sc_clock_pane_t3

0x0004,

0xfb51,	// (0x0007267f) sc_clock_pane_t_ParamLimits

0xfb51,	// (0x0007267f) sc_clock_pane_t

0x83a5,	// (0x0006aed3) main_fs_bigclock_indicator_pane_ParamLimits

0x83a5,	// (0x0006aed3) main_fs_bigclock_indicator_pane

0x73d6,	// (0x00069f04) main_fs_bigclock_pane_g1_ParamLimits

0x73d6,	// (0x00069f04) main_fs_bigclock_pane_g1

0x83b1,	// (0x0006aedf) main_fs_bigclock_pane_t1_ParamLimits

0x83b1,	// (0x0006aedf) main_fs_bigclock_pane_t1

0x83c3,	// (0x0006aef1) main_fs_bigclock_pane_t2_ParamLimits

0x83c3,	// (0x0006aef1) main_fs_bigclock_pane_t2

0x83d7,	// (0x0006af05) main_fs_bigclock_pane_t3_ParamLimits

0x83d7,	// (0x0006af05) main_fs_bigclock_pane_t3

0x0002,

0xfcda,	// (0x00072808) main_fs_bigclock_pane_t_ParamLimits

0xfcda,	// (0x00072808) main_fs_bigclock_pane_t

0xb998,	// (0x0006e4c6) main_fs_bigclock_indicator_pane_g1

0xb018,	// (0x0006db46) ncim_query_content_pane_g2_ParamLimits

0xb018,	// (0x0006db46) ncim_query_content_pane_g2

0x0001,

0xfade,	// (0x0007260c) ncim_query_content_pane_g_ParamLimits

0xfade,	// (0x0007260c) ncim_query_content_pane_g

0xc462,	// (0x0006ef90) sc_clock_pane_t4_ParamLimits

0xc462,	// (0x0006ef90) sc_clock_pane_t4

0xa05c,	// (0x0006cb8a) main_radioblah_pane

0xaa2a,	// (0x0006d558) cell_call4_button_pane_t1_copy1_ParamLimits

0xaa2a,	// (0x0006d558) cell_call4_button_pane_t1_copy1

0x6fbd,	// (0x00069aeb) main_ncimui_pane_t1_ParamLimits

0x6fbd,	// (0x00069aeb) main_ncimui_pane_t1

0x6fd7,	// (0x00069b05) main_ncimui_pane_t2_ParamLimits

0x6fd7,	// (0x00069b05) main_ncimui_pane_t2

0x0002,

0xfad7,	// (0x00072605) main_ncimui_pane_t_ParamLimits

0xfad7,	// (0x00072605) main_ncimui_pane_t

0xd080,	// (0x0006fbae) main_radioblah_anim_pane_ParamLimits

0xd080,	// (0x0006fbae) main_radioblah_anim_pane

0xd080,	// (0x0006fbae) main_radioblah_info_pane_ParamLimits

0xd080,	// (0x0006fbae) main_radioblah_info_pane

0xd06c,	// (0x0006fb9a) main_radioblah_pane_t1_ParamLimits

0xd06c,	// (0x0006fb9a) main_radioblah_pane_t1

0xd06c,	// (0x0006fb9a) main_radioblah_pane_t2_ParamLimits

0xd06c,	// (0x0006fb9a) main_radioblah_pane_t2

0x0003,

0xfb72,	// (0x000726a0) main_radioblah_pane_t_ParamLimits

0xfb72,	// (0x000726a0) main_radioblah_pane_t

0xa48d,	// (0x0006cfbb) main_radioblah_rocker_ctrl_pane_ParamLimits

0xa48d,	// (0x0006cfbb) main_radioblah_rocker_ctrl_pane

0xf009,	// (0x00071b37) main_radioblah_info_pane_t1_ParamLimits

0xf009,	// (0x00071b37) main_radioblah_info_pane_t1

0xb342,	// (0x0006de70) main_radioblah_info_pane_t2_ParamLimits

0xb342,	// (0x0006de70) main_radioblah_info_pane_t2

0x0003,

0xfb7b,	// (0x000726a9) main_radioblah_info_pane_t_ParamLimits

0xfb7b,	// (0x000726a9) main_radioblah_info_pane_t

0xc458,	// (0x0006ef86) main_radioblah_rocker_ctrl_pane_g1

0xc458,	// (0x0006ef86) main_radioblah_rocker_ctrl_pane_g2

0xc458,	// (0x0006ef86) main_radioblah_rocker_ctrl_pane_g3

0xc458,	// (0x0006ef86) main_radioblah_rocker_ctrl_pane_g4

0xc458,	// (0x0006ef86) main_radioblah_rocker_ctrl_pane_g5

0xc458,	// (0x0006ef86) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfb84,	// (0x000726b2) main_radioblah_rocker_ctrl_pane_g

0x6cce,	// (0x000697fc) main_cset_text2_pane_t1_copy1_ParamLimits

0xaa70,	// (0x0006d59e) cam4_image_uncrop_qvga_pane

0xaae7,	// (0x0006d615) vid4_image_uncrop_qcif_pane

0xac5a,	// (0x0006d788) cam6_image_uncrop_qvga_pane_ParamLimits

0xac5a,	// (0x0006d788) cam6_image_uncrop_qvga_pane

0xad12,	// (0x0006d840) vid6_image_uncrop_qcif_pane_ParamLimits

0xad12,	// (0x0006d840) vid6_image_uncrop_qcif_pane

0x9fdf,	// (0x0006cb0d) bg_popup_preview_window_pane_cp03

0xafca,	// (0x0006daf8) list_cset_text2_pane

0xafd2,	// (0x0006db00) main_cset6_text2_pane_g1

0xafda,	// (0x0006db08) main_cset6_text2_pane_t1

0xb391,	// (0x0006debf) list_cset_text2_pane_t1_ParamLimits

0xb391,	// (0x0006debf) list_cset_text2_pane_t1

0xa05c,	// (0x0006cb8a) main_radioblah_pane_ParamLimits

0x7300,	// (0x00069e2e) main_mobtv_info_pane_t3_ParamLimits

0x7300,	// (0x00069e2e) main_mobtv_info_pane_t3

0xd05e,	// (0x0006fb8c) main_radioblah_pane_g1

0xb312,	// (0x0006de40) main_radioblah_info_pane_g1

0xc476,	// (0x0006efa4) main_radioblah_info_pane_t3_ParamLimits

0xc476,	// (0x0006efa4) main_radioblah_info_pane_t3

0x2011,	// (0x00064b3f) highlight_cell_cale_month_pane_ParamLimits

0x2011,	// (0x00064b3f) highlight_cell_cale_month_pane

0xa06a,	// (0x0006cb98) main_phob_fisheye_pane

0xebf1,	// (0x0007171f) scroll_pane_cp0031_ParamLimits

0xebf1,	// (0x0007171f) scroll_pane_cp0031

0xae24,	// (0x0006d952) wait_bar_pane_cp08_ParamLimits

0x6d57,	// (0x00069885) cset_list_set_pane_copy1_ParamLimits

0xb3ab,	// (0x0006ded9) highlight_cell_cale_month_pane_g1

0x756d,	// (0x0006a09b) highlight_cell_cale_month_pane_t1

0x6555,	// (0x00069083) list_gen_pane_cp01

0x5715,	// (0x00068243) scroll_pane_01

0x757b,	// (0x0006a0a9) list_single_double_fisheye_pane

0x7584,	// (0x0006a0b2) list_double_fisheye_pane_g1_ParamLimits

0x7584,	// (0x0006a0b2) list_double_fisheye_pane_g1

0x7590,	// (0x0006a0be) list_double_fisheye_pane_g2_ParamLimits

0x7590,	// (0x0006a0be) list_double_fisheye_pane_g2

0x75a4,	// (0x0006a0d2) list_double_fisheye_pane_g3_ParamLimits

0x75a4,	// (0x0006a0d2) list_double_fisheye_pane_g3

0x0004,

0xfb91,	// (0x000726bf) list_double_fisheye_pane_g_ParamLimits

0xfb91,	// (0x000726bf) list_double_fisheye_pane_g

0x75cd,	// (0x0006a0fb) list_double_fisheye_pane_t1_ParamLimits

0x75cd,	// (0x0006a0fb) list_double_fisheye_pane_t1

0x75e8,	// (0x0006a116) list_double_fisheye_pane_t2_ParamLimits

0x75e8,	// (0x0006a116) list_double_fisheye_pane_t2

0x0001,

0xfb9c,	// (0x000726ca) list_double_fisheye_pane_t_ParamLimits

0xfb9c,	// (0x000726ca) list_double_fisheye_pane_t

0xa06a,	// (0x0006cb98) main_call5_pane

0xa48d,	// (0x0006cfbb) sc_swipe_pane_ParamLimits

0xa48d,	// (0x0006cfbb) sc_swipe_pane

0x761d,	// (0x0006a14b) call5_image_pane_ParamLimits

0x761d,	// (0x0006a14b) call5_image_pane

0x763a,	// (0x0006a168) call5_swipe_1_pane_ParamLimits

0x763a,	// (0x0006a168) call5_swipe_1_pane

0x764d,	// (0x0006a17b) call5_swipe_2_pane_ParamLimits

0x764d,	// (0x0006a17b) call5_swipe_2_pane

0x7678,	// (0x0006a1a6) popup_call5_audio_first_window_ParamLimits

0x7678,	// (0x0006a1a6) popup_call5_audio_first_window

0xc41a,	// (0x0006ef48) call5_swipe_1_pane_g1_ParamLimits

0xc41a,	// (0x0006ef48) call5_swipe_1_pane_g1

0xb3b3,	// (0x0006dee1) call5_swipe_1_pane_g2_ParamLimits

0xb3b3,	// (0x0006dee1) call5_swipe_1_pane_g2

0x0001,

0xfba1,	// (0x000726cf) call5_swipe_1_pane_g_ParamLimits

0xfba1,	// (0x000726cf) call5_swipe_1_pane_g

0xb3bf,	// (0x0006deed) call5_swipe_1_pane_t1_ParamLimits

0xb3bf,	// (0x0006deed) call5_swipe_1_pane_t1

0xc41a,	// (0x0006ef48) call5_swipe_2_pane_g1_ParamLimits

0xc41a,	// (0x0006ef48) call5_swipe_2_pane_g1

0xb3d4,	// (0x0006df02) call5_swipe_2_pane_g2_ParamLimits

0xb3d4,	// (0x0006df02) call5_swipe_2_pane_g2

0x0001,

0xfba6,	// (0x000726d4) call5_swipe_2_pane_g_ParamLimits

0xfba6,	// (0x000726d4) call5_swipe_2_pane_g

0xb3e0,	// (0x0006df0e) call5_swipe_2_pane_t1_ParamLimits

0xb3e0,	// (0x0006df0e) call5_swipe_2_pane_t1

0xc41a,	// (0x0006ef48) sc_swipe_pane_g1_ParamLimits

0xc41a,	// (0x0006ef48) sc_swipe_pane_g1

0xc428,	// (0x0006ef56) sc_swipe_pane_g2_ParamLimits

0xc428,	// (0x0006ef56) sc_swipe_pane_g2

0x0001,

0xf71f,	// (0x0007224d) sc_swipe_pane_g_ParamLimits

0xf71f,	// (0x0007224d) sc_swipe_pane_g

0xc462,	// (0x0006ef90) sc_swipe_pane_t1_ParamLimits

0xc462,	// (0x0006ef90) sc_swipe_pane_t1

0xa06a,	// (0x0006cb98) main_cmail_launcher_pane

0x768d,	// (0x0006a1bb) aid_size_cell_cmail_l_ParamLimits

0x768d,	// (0x0006a1bb) aid_size_cell_cmail_l

0x76a2,	// (0x0006a1d0) grid_cmail_l_pane_ParamLimits

0x76a2,	// (0x0006a1d0) grid_cmail_l_pane

0x76bc,	// (0x0006a1ea) cell_cmail_l_pane_ParamLimits

0x76bc,	// (0x0006a1ea) cell_cmail_l_pane

0x76dd,	// (0x0006a20b) cell_cmail_l_pane_g1_ParamLimits

0x76dd,	// (0x0006a20b) cell_cmail_l_pane_g1

0x76e9,	// (0x0006a217) cell_cmail_l_pane_t1_ParamLimits

0x76e9,	// (0x0006a217) cell_cmail_l_pane_t1

0x76ff,	// (0x0006a22d) cell_cmail_l_pane_t2_ParamLimits

0x76ff,	// (0x0006a22d) cell_cmail_l_pane_t2

0x0001,

0xfbab,	// (0x000726d9) cell_cmail_l_pane_t_ParamLimits

0xfbab,	// (0x000726d9) cell_cmail_l_pane_t

0xa48d,	// (0x0006cfbb) grid_highlight_pane_cp018_ParamLimits

0xa48d,	// (0x0006cfbb) grid_highlight_pane_cp018

0x03f0,	// (0x00062f1e) main2_pane_ParamLimits

0x03f0,	// (0x00062f1e) main2_pane

0xc545,	// (0x0006f073) popup_sp_fs_action_menu_bg_pane_g1

0xc54d,	// (0x0006f07b) popup_sp_fs_action_menu_bg_pane_g2

0xc555,	// (0x0006f083) popup_sp_fs_action_menu_bg_pane_g3

0xc55d,	// (0x0006f08b) popup_sp_fs_action_menu_bg_pane_g4

0xc565,	// (0x0006f093) popup_sp_fs_action_menu_bg_pane_g5

0xc56d,	// (0x0006f09b) popup_sp_fs_action_menu_bg_pane_g6

0xc575,	// (0x0006f0a3) popup_sp_fs_action_menu_bg_pane_g7

0xc57d,	// (0x0006f0ab) popup_sp_fs_action_menu_bg_pane_g8

0xc585,	// (0x0006f0b3) popup_sp_fs_action_menu_bg_pane_g9

0xc58d,	// (0x0006f0bb) popup_sp_fs_action_menu_bg_pane_g10

0xc58d,	// (0x0006f0bb) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf0dd,	// (0x00071c0b) popup_sp_fs_action_menu_bg_pane_g

0xc41a,	// (0x0006ef48) list_medium_line_x2_t3_g3_g1_ParamLimits

0xc41a,	// (0x0006ef48) list_medium_line_x2_t3_g3_g1

0xc41a,	// (0x0006ef48) list_medium_line_x2_t3_g3_g2_ParamLimits

0xc41a,	// (0x0006ef48) list_medium_line_x2_t3_g3_g2

0xc41a,	// (0x0006ef48) list_medium_line_x2_t3_g3_g3_ParamLimits

0xc41a,	// (0x0006ef48) list_medium_line_x2_t3_g3_g3

0x0002,

0xf18b,	// (0x00071cb9) list_medium_line_x2_t3_g3_g_ParamLimits

0xf18b,	// (0x00071cb9) list_medium_line_x2_t3_g3_g

0xc462,	// (0x0006ef90) list_medium_line_x2_t3_g3_t1_ParamLimits

0xc462,	// (0x0006ef90) list_medium_line_x2_t3_g3_t1

0xc462,	// (0x0006ef90) list_medium_line_x2_t3_g3_t2_ParamLimits

0xc462,	// (0x0006ef90) list_medium_line_x2_t3_g3_t2

0xc462,	// (0x0006ef90) list_medium_line_x2_t3_g3_t3_ParamLimits

0xc462,	// (0x0006ef90) list_medium_line_x2_t3_g3_t3

0x0002,

0xf192,	// (0x00071cc0) list_medium_line_x2_t3_g3_t_ParamLimits

0xf192,	// (0x00071cc0) list_medium_line_x2_t3_g3_t

0xc41a,	// (0x0006ef48) list_medium_line_x2_t3_g2_g1_ParamLimits

0xc41a,	// (0x0006ef48) list_medium_line_x2_t3_g2_g1

0xc41a,	// (0x0006ef48) list_medium_line_x2_t3_g2_g2_ParamLimits

0xc41a,	// (0x0006ef48) list_medium_line_x2_t3_g2_g2

0x0001,

0xf199,	// (0x00071cc7) list_medium_line_x2_t3_g2_g_ParamLimits

0xf199,	// (0x00071cc7) list_medium_line_x2_t3_g2_g

0xc462,	// (0x0006ef90) list_medium_line_x2_t3_g2_t1_ParamLimits

0xc462,	// (0x0006ef90) list_medium_line_x2_t3_g2_t1

0xc462,	// (0x0006ef90) list_medium_line_x2_t3_g2_t2_ParamLimits

0xc462,	// (0x0006ef90) list_medium_line_x2_t3_g2_t2

0xc462,	// (0x0006ef90) list_medium_line_x2_t3_g2_t3_ParamLimits

0xc462,	// (0x0006ef90) list_medium_line_x2_t3_g2_t3

0x0002,

0xf192,	// (0x00071cc0) list_medium_line_x2_t3_g2_t_ParamLimits

0xf192,	// (0x00071cc0) list_medium_line_x2_t3_g2_t

0xc41a,	// (0x0006ef48) list_medium_line_x2_t4_g4_g1_ParamLimits

0xc41a,	// (0x0006ef48) list_medium_line_x2_t4_g4_g1

0xc41a,	// (0x0006ef48) list_medium_line_x2_t4_g4_g2_ParamLimits

0xc41a,	// (0x0006ef48) list_medium_line_x2_t4_g4_g2

0xc41a,	// (0x0006ef48) list_medium_line_x2_t4_g4_g3_ParamLimits

0xc41a,	// (0x0006ef48) list_medium_line_x2_t4_g4_g3

0xc41a,	// (0x0006ef48) list_medium_line_x2_t4_g4_g4_ParamLimits

0xc41a,	// (0x0006ef48) list_medium_line_x2_t4_g4_g4

0x0003,

0xf19e,	// (0x00071ccc) list_medium_line_x2_t4_g4_g_ParamLimits

0xf19e,	// (0x00071ccc) list_medium_line_x2_t4_g4_g

0xc462,	// (0x0006ef90) list_medium_line_x2_t4_g4_t1_ParamLimits

0xc462,	// (0x0006ef90) list_medium_line_x2_t4_g4_t1

0xc462,	// (0x0006ef90) list_medium_line_x2_t4_g4_t2_ParamLimits

0xc462,	// (0x0006ef90) list_medium_line_x2_t4_g4_t2

0xc462,	// (0x0006ef90) list_medium_line_x2_t4_g4_t3_ParamLimits

0xc462,	// (0x0006ef90) list_medium_line_x2_t4_g4_t3

0xc462,	// (0x0006ef90) list_medium_line_x2_t4_g4_t4_ParamLimits

0xc462,	// (0x0006ef90) list_medium_line_x2_t4_g4_t4

0x0003,

0xf1a7,	// (0x00071cd5) list_medium_line_x2_t4_g4_t_ParamLimits

0xf1a7,	// (0x00071cd5) list_medium_line_x2_t4_g4_t

0xc41a,	// (0x0006ef48) list_medium_line_x2_t2_g4_g1_ParamLimits

0xc41a,	// (0x0006ef48) list_medium_line_x2_t2_g4_g1

0xc41a,	// (0x0006ef48) list_medium_line_x2_t2_g4_g2_ParamLimits

0xc41a,	// (0x0006ef48) list_medium_line_x2_t2_g4_g2

0xc41a,	// (0x0006ef48) list_medium_line_x2_t2_g4_g3_ParamLimits

0xc41a,	// (0x0006ef48) list_medium_line_x2_t2_g4_g3

0xc41a,	// (0x0006ef48) list_medium_line_x2_t2_g4_g4_ParamLimits

0xc41a,	// (0x0006ef48) list_medium_line_x2_t2_g4_g4

0x0003,

0xf19e,	// (0x00071ccc) list_medium_line_x2_t2_g4_g_ParamLimits

0xf19e,	// (0x00071ccc) list_medium_line_x2_t2_g4_g

0xc462,	// (0x0006ef90) list_medium_line_x2_t2_g4_t1_ParamLimits

0xc462,	// (0x0006ef90) list_medium_line_x2_t2_g4_t1

0xc462,	// (0x0006ef90) list_medium_line_x2_t2_g4_t2_ParamLimits

0xc462,	// (0x0006ef90) list_medium_line_x2_t2_g4_t2

0x0001,

0xf16e,	// (0x00071c9c) list_medium_line_x2_t2_g4_t_ParamLimits

0xf16e,	// (0x00071c9c) list_medium_line_x2_t2_g4_t

0xc41a,	// (0x0006ef48) list_medium_line_x2_t2_g3_g1_ParamLimits

0xc41a,	// (0x0006ef48) list_medium_line_x2_t2_g3_g1

0xc41a,	// (0x0006ef48) list_medium_line_x2_t2_g3_g2_ParamLimits

0xc41a,	// (0x0006ef48) list_medium_line_x2_t2_g3_g2

0xc41a,	// (0x0006ef48) list_medium_line_x2_t2_g3_g3_ParamLimits

0xc41a,	// (0x0006ef48) list_medium_line_x2_t2_g3_g3

0x0002,

0xf18b,	// (0x00071cb9) list_medium_line_x2_t2_g3_g_ParamLimits

0xf18b,	// (0x00071cb9) list_medium_line_x2_t2_g3_g

0xc462,	// (0x0006ef90) list_medium_line_x2_t2_g3_t1_ParamLimits

0xc462,	// (0x0006ef90) list_medium_line_x2_t2_g3_t1

0xc462,	// (0x0006ef90) list_medium_line_x2_t2_g3_t2_ParamLimits

0xc462,	// (0x0006ef90) list_medium_line_x2_t2_g3_t2

0x0001,

0xf16e,	// (0x00071c9c) list_medium_line_x2_t2_g3_t_ParamLimits

0xf16e,	// (0x00071c9c) list_medium_line_x2_t2_g3_t

0x217a,	// (0x00064ca8) main_sp_fs_list_pane_ParamLimits

0x217a,	// (0x00064ca8) main_sp_fs_list_pane

0xa522,	// (0x0006d050) sp_fs_scroll_pane_ParamLimits

0xa522,	// (0x0006d050) sp_fs_scroll_pane

0xcbae,	// (0x0006f6dc) list_medium_line_x2_t3_t1

0xcbae,	// (0x0006f6dc) list_medium_line_x2_t3_t2

0xcbae,	// (0x0006f6dc) list_medium_line_x2_t3_t3

0x0002,

0xf254,	// (0x00071d82) list_medium_line_x2_t3_t

0xcbae,	// (0x0006f6dc) list_medium_line_x3_t4_t1

0xcbae,	// (0x0006f6dc) list_medium_line_x3_t4_t2

0xcbae,	// (0x0006f6dc) list_medium_line_x3_t4_t3

0xcbae,	// (0x0006f6dc) list_medium_line_x3_t4_t4

0x0003,

0xf25b,	// (0x00071d89) list_medium_line_x3_t4_t

0xcbae,	// (0x0006f6dc) list_medium_line_x4_t5_t1

0xcbae,	// (0x0006f6dc) list_medium_line_x4_t5_t2

0xcbae,	// (0x0006f6dc) list_medium_line_x4_t5_t3

0xcbae,	// (0x0006f6dc) list_medium_line_x4_t5_t4

0xcbae,	// (0x0006f6dc) list_medium_line_x4_t5_t5

0x0004,

0xf264,	// (0x00071d92) list_medium_line_x4_t5_t

0xc41a,	// (0x0006ef48) list_medium_line_t4_g4_g1_ParamLimits

0xc41a,	// (0x0006ef48) list_medium_line_t4_g4_g1

0xc41a,	// (0x0006ef48) list_medium_line_t4_g4_g2_ParamLimits

0xc41a,	// (0x0006ef48) list_medium_line_t4_g4_g2

0xc41a,	// (0x0006ef48) list_medium_line_t4_g4_g3_ParamLimits

0xc41a,	// (0x0006ef48) list_medium_line_t4_g4_g3

0xc41a,	// (0x0006ef48) list_medium_line_t4_g4_g4_ParamLimits

0xc41a,	// (0x0006ef48) list_medium_line_t4_g4_g4

0x0003,

0xf19e,	// (0x00071ccc) list_medium_line_t4_g4_g_ParamLimits

0xf19e,	// (0x00071ccc) list_medium_line_t4_g4_g

0xc462,	// (0x0006ef90) list_medium_line_t4_g4_t1_ParamLimits

0xc462,	// (0x0006ef90) list_medium_line_t4_g4_t1

0xc462,	// (0x0006ef90) list_medium_line_t4_g4_t2_ParamLimits

0xc462,	// (0x0006ef90) list_medium_line_t4_g4_t2

0xc462,	// (0x0006ef90) list_medium_line_t4_g4_t3_ParamLimits

0xc462,	// (0x0006ef90) list_medium_line_t4_g4_t3

0xc462,	// (0x0006ef90) list_medium_line_t4_g4_t4_ParamLimits

0xc462,	// (0x0006ef90) list_medium_line_t4_g4_t4

0x0003,

0xf1a7,	// (0x00071cd5) list_medium_line_t4_g4_t_ParamLimits

0xf1a7,	// (0x00071cd5) list_medium_line_t4_g4_t

0x2228,	// (0x00064d56) chi_dic_find_pane_g1

0x31a4,	// (0x00065cd2) main_tport_pane

0xcbae,	// (0x0006f6dc) list_medium_line_plain_t1

0xc41a,	// (0x0006ef48) list_medium_line_t2_g2_g1_ParamLimits

0xc41a,	// (0x0006ef48) list_medium_line_t2_g2_g1

0xc41a,	// (0x0006ef48) list_medium_line_t2_g2_g2_ParamLimits

0xc41a,	// (0x0006ef48) list_medium_line_t2_g2_g2

0x0001,

0xf199,	// (0x00071cc7) list_medium_line_t2_g2_g_ParamLimits

0xf199,	// (0x00071cc7) list_medium_line_t2_g2_g

0xc462,	// (0x0006ef90) list_medium_line_t2_g2_t1_ParamLimits

0xc462,	// (0x0006ef90) list_medium_line_t2_g2_t1

0xc462,	// (0x0006ef90) list_medium_line_t2_g2_t2_ParamLimits

0xc462,	// (0x0006ef90) list_medium_line_t2_g2_t2

0x0001,

0xf16e,	// (0x00071c9c) list_medium_line_t2_g2_t_ParamLimits

0xf16e,	// (0x00071c9c) list_medium_line_t2_g2_t

0x664f,	// (0x0006917d) aid_sp_fs_list_icon_a_sm

0x6657,	// (0x00069185) aid_sp_fs_list_icon_d

0x665f,	// (0x0006918d) aid_sp_fs_text_primary

0x6668,	// (0x00069196) aid_sp_fs_text_secondary

0x9fdf,	// (0x0006cb0d) list_medium_line

0x9fdf,	// (0x0006cb0d) list_medium_line_g2

0x9fdf,	// (0x0006cb0d) list_medium_line_g3

0x9fdf,	// (0x0006cb0d) list_medium_line_plain

0x9fdf,	// (0x0006cb0d) list_medium_line_plain_t2

0x9fdf,	// (0x0006cb0d) list_medium_line_plain_t3

0x9fdf,	// (0x0006cb0d) list_medium_line_right_icon

0x9fdf,	// (0x0006cb0d) list_medium_line_right_iconx2

0x9fdf,	// (0x0006cb0d) list_medium_line_t2

0x9fdf,	// (0x0006cb0d) list_medium_line_t2_g2

0x9fdf,	// (0x0006cb0d) list_medium_line_t2_g3

0x9fdf,	// (0x0006cb0d) list_medium_line_t2_right_icon

0x9fdf,	// (0x0006cb0d) list_medium_line_t2_right_iconx2

0x9fdf,	// (0x0006cb0d) list_medium_line_t3

0x9fdf,	// (0x0006cb0d) list_medium_line_t3_g2

0x9fdf,	// (0x0006cb0d) list_medium_line_t3_g3

0x9fdf,	// (0x0006cb0d) list_medium_line_t3_right_iconx2

0x9fdf,	// (0x0006cb0d) list_medium_line_t4_g4

0x9fdf,	// (0x0006cb0d) list_medium_line_x2

0x9fdf,	// (0x0006cb0d) list_medium_line_x2_t2_g2

0x9fdf,	// (0x0006cb0d) list_medium_line_x2_t2_g3

0x9fdf,	// (0x0006cb0d) list_medium_line_x2_t2_g4

0x9fdf,	// (0x0006cb0d) list_medium_line_x2_t3

0x9fdf,	// (0x0006cb0d) list_medium_line_x2_t3_g2

0x9fdf,	// (0x0006cb0d) list_medium_line_x2_t3_g3

0x9fdf,	// (0x0006cb0d) list_medium_line_x2_t3_g4

0x9fdf,	// (0x0006cb0d) list_medium_line_x2_t4_g2

0x9fdf,	// (0x0006cb0d) list_medium_line_x2_t4_g4

0x9fdf,	// (0x0006cb0d) list_medium_line_x3

0x9fdf,	// (0x0006cb0d) list_medium_line_x3_t4

0x9fdf,	// (0x0006cb0d) list_medium_line_x3_t4_g4

0x9fdf,	// (0x0006cb0d) list_medium_line_x4_t4

0x9fdf,	// (0x0006cb0d) list_medium_line_x4_t4_g7

0x9fdf,	// (0x0006cb0d) list_medium_line_x4_t5

0x6671,	// (0x0006919f) list_single_fs_dyc_pane_ParamLimits

0x6671,	// (0x0006919f) list_single_fs_dyc_pane

0xc41a,	// (0x0006ef48) list_medium_line_x4_t4_g7_g1_ParamLimits

0xc41a,	// (0x0006ef48) list_medium_line_x4_t4_g7_g1

0xc41a,	// (0x0006ef48) list_medium_line_x4_t4_g7_g2_ParamLimits

0xc41a,	// (0x0006ef48) list_medium_line_x4_t4_g7_g2

0xc41a,	// (0x0006ef48) list_medium_line_x4_t4_g7_g3_ParamLimits

0xc41a,	// (0x0006ef48) list_medium_line_x4_t4_g7_g3

0xc41a,	// (0x0006ef48) list_medium_line_x4_t4_g7_g4_ParamLimits

0xc41a,	// (0x0006ef48) list_medium_line_x4_t4_g7_g4

0xc41a,	// (0x0006ef48) list_medium_line_x4_t4_g7_g5_ParamLimits

0xc41a,	// (0x0006ef48) list_medium_line_x4_t4_g7_g5

0xc41a,	// (0x0006ef48) list_medium_line_x4_t4_g7_g6_ParamLimits

0xc41a,	// (0x0006ef48) list_medium_line_x4_t4_g7_g6

0xc428,	// (0x0006ef56) list_medium_line_x4_t4_g7_g7_ParamLimits

0xc428,	// (0x0006ef56) list_medium_line_x4_t4_g7_g7

0x0006,

0xfab8,	// (0x000725e6) list_medium_line_x4_t4_g7_g_ParamLimits

0xfab8,	// (0x000725e6) list_medium_line_x4_t4_g7_g

0xc462,	// (0x0006ef90) list_medium_line_x4_t4_g7_t1_ParamLimits

0xc462,	// (0x0006ef90) list_medium_line_x4_t4_g7_t1

0xc462,	// (0x0006ef90) list_medium_line_x4_t4_g7_t2_ParamLimits

0xc462,	// (0x0006ef90) list_medium_line_x4_t4_g7_t2

0xc462,	// (0x0006ef90) list_medium_line_x4_t4_g7_t3_ParamLimits

0xc462,	// (0x0006ef90) list_medium_line_x4_t4_g7_t3

0xc476,	// (0x0006efa4) list_medium_line_x4_t4_g7_t4_ParamLimits

0xc476,	// (0x0006efa4) list_medium_line_x4_t4_g7_t4

0xc476,	// (0x0006efa4) list_medium_line_x4_t4_g7_t5_ParamLimits

0xc476,	// (0x0006efa4) list_medium_line_x4_t4_g7_t5

0x0004,

0xfac7,	// (0x000725f5) list_medium_line_x4_t4_g7_t_ParamLimits

0xfac7,	// (0x000725f5) list_medium_line_x4_t4_g7_t

0x6f74,	// (0x00069aa2) list_single_dyc_row_pane_ParamLimits

0x6f74,	// (0x00069aa2) list_single_dyc_row_pane

0x760a,	// (0x0006a138) call5_gesture_pane_ParamLimits

0x760a,	// (0x0006a138) call5_gesture_pane

0x7660,	// (0x0006a18e) call5_windows_pane_ParamLimits

0x7660,	// (0x0006a18e) call5_windows_pane

0x771c,	// (0x0006a24a) call5_swipe_1_pane_cp_ParamLimits

0x771c,	// (0x0006a24a) call5_swipe_1_pane_cp

0x7728,	// (0x0006a256) call5_swipe_2_pane_cp_ParamLimits

0x7728,	// (0x0006a256) call5_swipe_2_pane_cp

0xc693,	// (0x0006f1c1) call5_image_pane_cp

0x7734,	// (0x0006a262) popup_call5_audio_first_window_cp_ParamLimits

0x7734,	// (0x0006a262) popup_call5_audio_first_window_cp

0xb3f5,	// (0x0006df23) call5_swipe_1_pane_g1_cp_ParamLimits

0xb3f5,	// (0x0006df23) call5_swipe_1_pane_g1_cp

0xb402,	// (0x0006df30) call5_swipe_1_pane_g2_cp

0xb40a,	// (0x0006df38) call5_swipe_1_pane_t1_cp_ParamLimits

0xb40a,	// (0x0006df38) call5_swipe_1_pane_t1_cp

0xb3f5,	// (0x0006df23) call5_swipe_2_pane_g1_cp_ParamLimits

0xb3f5,	// (0x0006df23) call5_swipe_2_pane_g1_cp

0xb41f,	// (0x0006df4d) call5_swipe_2_pane_g2_cp

0xb427,	// (0x0006df55) call5_swipe_2_pane_t1_cp_ParamLimits

0xb427,	// (0x0006df55) call5_swipe_2_pane_t1_cp

0xa48d,	// (0x0006cfbb) main_sp_fs_email_pane

0x7742,	// (0x0006a270) main_sp_fs_listscroll_pane_te

0x774b,	// (0x0006a279) popup_sp_fs_action_menu_pane_ParamLimits

0x774b,	// (0x0006a279) popup_sp_fs_action_menu_pane

0xc458,	// (0x0006ef86) bg_sp_fs_ctrlbar_pane_g1

0xb43c,	// (0x0006df6a) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xb445,	// (0x0006df73) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xb44e,	// (0x0006df7c) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc458,	// (0x0006ef86) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfbb0,	// (0x000726de) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xe6eb,	// (0x00071219) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xe6eb,	// (0x00071219) bg_sp_fs_ctrlbar_ddmenu_pane

0xb457,	// (0x0006df85) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xb457,	// (0x0006df85) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xb463,	// (0x0006df91) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xb463,	// (0x0006df91) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfbb9,	// (0x000726e7) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfbb9,	// (0x000726e7) main_sp_fs_ctrlbar_ddmenu_pane_g

0xb46f,	// (0x0006df9d) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xb46f,	// (0x0006df9d) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xc458,	// (0x0006ef86) list_medium_line_t2_right_icon_g1

0xcbae,	// (0x0006f6dc) list_medium_line_t2_right_icon_t1

0xcbae,	// (0x0006f6dc) list_medium_line_t2_right_icon_t2

0x0001,

0xfbbe,	// (0x000726ec) list_medium_line_t2_right_icon_t

0xd080,	// (0x0006fbae) bg_sp_fs_ctrlbar_pane_ParamLimits

0xd080,	// (0x0006fbae) bg_sp_fs_ctrlbar_pane

0x77de,	// (0x0006a30c) main_sp_fs_ctrlbar_button_pane_cp01

0x77e8,	// (0x0006a316) main_sp_fs_ctrlbar_ddmenu_pane

0xb4c3,	// (0x0006dff1) main_sp_fs_ctrlbar_pane_g1

0xb4cf,	// (0x0006dffd) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfbc3,	// (0x000726f1) main_sp_fs_ctrlbar_pane_g

0x7826,	// (0x0006a354) main_sp_fs_ctrlbar_pane_t1

0x7865,	// (0x0006a393) main_sp_fs_ctrlbar_pane

0x7889,	// (0x0006a3b7) main_sp_fs_listscroll_pane_te_cp01

0x78b5,	// (0x0006a3e3) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x78b5,	// (0x0006a3e3) popup_sp_fs_action_menu_pane_cp01

0xa48d,	// (0x0006cfbb) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xa48d,	// (0x0006cfbb) bg_sp_fs_highlight_list_pane_cp01

0x78da,	// (0x0006a408) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x78da,	// (0x0006a408) sp_fs_action_menu_list_gene_pane_g1

0xb4f6,	// (0x0006e024) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xb4f6,	// (0x0006e024) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfbd1,	// (0x000726ff) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfbd1,	// (0x000726ff) sp_fs_action_menu_list_gene_pane_g

0x78e9,	// (0x0006a417) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x78e9,	// (0x0006a417) sp_fs_action_menu_list_gene_pane_t1

0x7901,	// (0x0006a42f) sp_fs_action_menu_list_gene_pane_ParamLimits

0x7901,	// (0x0006a42f) sp_fs_action_menu_list_gene_pane

0xb503,	// (0x0006e031) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xb503,	// (0x0006e031) popup_sp_fs_action_menu_bg_pane

0x7924,	// (0x0006a452) sp_fs_action_menu_list_pane_ParamLimits

0x7924,	// (0x0006a452) sp_fs_action_menu_list_pane

0x7948,	// (0x0006a476) sp_fs_scroll_pane_cp01_ParamLimits

0x7948,	// (0x0006a476) sp_fs_scroll_pane_cp01

0xcbae,	// (0x0006f6dc) list_medium_line_plain_t2_t1

0xcbae,	// (0x0006f6dc) list_medium_line_plain_t2_t2

0x0001,

0xfbbe,	// (0x000726ec) list_medium_line_plain_t2_t

0xcbae,	// (0x0006f6dc) list_medium_line_plain_t3_t1

0xcbae,	// (0x0006f6dc) list_medium_line_plain_t3_t2

0xcbae,	// (0x0006f6dc) list_medium_line_plain_t3_t3

0x0002,

0xf254,	// (0x00071d82) list_medium_line_plain_t3_t

0xc41a,	// (0x0006ef48) list_medium_line_x2_t2_g2_g1_ParamLimits

0xc41a,	// (0x0006ef48) list_medium_line_x2_t2_g2_g1

0xc41a,	// (0x0006ef48) list_medium_line_x2_t2_g2_g2_ParamLimits

0xc41a,	// (0x0006ef48) list_medium_line_x2_t2_g2_g2

0x0001,

0xf199,	// (0x00071cc7) list_medium_line_x2_t2_g2_g_ParamLimits

0xf199,	// (0x00071cc7) list_medium_line_x2_t2_g2_g

0xc462,	// (0x0006ef90) list_medium_line_x2_t2_g2_t1_ParamLimits

0xc462,	// (0x0006ef90) list_medium_line_x2_t2_g2_t1

0xc462,	// (0x0006ef90) list_medium_line_x2_t2_g2_t2_ParamLimits

0xc462,	// (0x0006ef90) list_medium_line_x2_t2_g2_t2

0x0001,

0xf16e,	// (0x00071c9c) list_medium_line_x2_t2_g2_t_ParamLimits

0xf16e,	// (0x00071c9c) list_medium_line_x2_t2_g2_t

0xc41a,	// (0x0006ef48) list_medium_line_x2_t4_g2_g1_ParamLimits

0xc41a,	// (0x0006ef48) list_medium_line_x2_t4_g2_g1

0xc41a,	// (0x0006ef48) list_medium_line_x2_t4_g2_g2_ParamLimits

0xc41a,	// (0x0006ef48) list_medium_line_x2_t4_g2_g2

0x0001,

0xf199,	// (0x00071cc7) list_medium_line_x2_t4_g2_g_ParamLimits

0xf199,	// (0x00071cc7) list_medium_line_x2_t4_g2_g

0xc462,	// (0x0006ef90) list_medium_line_x2_t4_g2_t1_ParamLimits

0xc462,	// (0x0006ef90) list_medium_line_x2_t4_g2_t1

0xc462,	// (0x0006ef90) list_medium_line_x2_t4_g2_t2_ParamLimits

0xc462,	// (0x0006ef90) list_medium_line_x2_t4_g2_t2

0xc462,	// (0x0006ef90) list_medium_line_x2_t4_g2_t3_ParamLimits

0xc462,	// (0x0006ef90) list_medium_line_x2_t4_g2_t3

0xc462,	// (0x0006ef90) list_medium_line_x2_t4_g2_t4_ParamLimits

0xc462,	// (0x0006ef90) list_medium_line_x2_t4_g2_t4

0x0003,

0xf1a7,	// (0x00071cd5) list_medium_line_x2_t4_g2_t_ParamLimits

0xf1a7,	// (0x00071cd5) list_medium_line_x2_t4_g2_t

0xc458,	// (0x0006ef86) list_medium_line_t3_right_iconx2_g1

0xc458,	// (0x0006ef86) list_medium_line_t3_right_iconx2_g2

0xc458,	// (0x0006ef86) list_medium_line_t3_right_iconx2_g3

0x0002,

0xf370,	// (0x00071e9e) list_medium_line_t3_right_iconx2_g

0xcbae,	// (0x0006f6dc) list_medium_line_t3_right_iconx2_t1

0xcbae,	// (0x0006f6dc) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfbbe,	// (0x000726ec) list_medium_line_t3_right_iconx2_t

0xc41a,	// (0x0006ef48) list_medium_line_x3_t4_g4_g1_ParamLimits

0xc41a,	// (0x0006ef48) list_medium_line_x3_t4_g4_g1

0xc41a,	// (0x0006ef48) list_medium_line_x3_t4_g4_g2_ParamLimits

0xc41a,	// (0x0006ef48) list_medium_line_x3_t4_g4_g2

0xc41a,	// (0x0006ef48) list_medium_line_x3_t4_g4_g3_ParamLimits

0xc41a,	// (0x0006ef48) list_medium_line_x3_t4_g4_g3

0xc41a,	// (0x0006ef48) list_medium_line_x3_t4_g4_g4_ParamLimits

0xc41a,	// (0x0006ef48) list_medium_line_x3_t4_g4_g4

0x0003,

0xf19e,	// (0x00071ccc) list_medium_line_x3_t4_g4_g_ParamLimits

0xf19e,	// (0x00071ccc) list_medium_line_x3_t4_g4_g

0xc462,	// (0x0006ef90) list_medium_line_x3_t4_g4_t1_ParamLimits

0xc462,	// (0x0006ef90) list_medium_line_x3_t4_g4_t1

0xc462,	// (0x0006ef90) list_medium_line_x3_t4_g4_t2_ParamLimits

0xc462,	// (0x0006ef90) list_medium_line_x3_t4_g4_t2

0xc462,	// (0x0006ef90) list_medium_line_x3_t4_g4_t3_ParamLimits

0xc462,	// (0x0006ef90) list_medium_line_x3_t4_g4_t3

0xc462,	// (0x0006ef90) list_medium_line_x3_t4_g4_t4_ParamLimits

0xc462,	// (0x0006ef90) list_medium_line_x3_t4_g4_t4

0x0003,

0xf1a7,	// (0x00071cd5) list_medium_line_x3_t4_g4_t_ParamLimits

0xf1a7,	// (0x00071cd5) list_medium_line_x3_t4_g4_t

0x796e,	// (0x0006a49c) list_single_dyc_row_text_pane_t1_ParamLimits

0x796e,	// (0x0006a49c) list_single_dyc_row_text_pane_t1

0x79b7,	// (0x0006a4e5) list_single_dyc_row_text_pane_t2_ParamLimits

0x79b7,	// (0x0006a4e5) list_single_dyc_row_text_pane_t2

0x7a2d,	// (0x0006a55b) list_single_dyc_row_text_pane_t3_ParamLimits

0x7a2d,	// (0x0006a55b) list_single_dyc_row_text_pane_t3

0x0005,

0xfbd6,	// (0x00072704) list_single_dyc_row_text_pane_t_ParamLimits

0xfbd6,	// (0x00072704) list_single_dyc_row_text_pane_t

0x7b10,	// (0x0006a63e) list_single_dyc_row_pane_g1_ParamLimits

0x7b10,	// (0x0006a63e) list_single_dyc_row_pane_g1

0x7b1c,	// (0x0006a64a) list_single_dyc_row_pane_g2_ParamLimits

0x7b1c,	// (0x0006a64a) list_single_dyc_row_pane_g2

0x7b28,	// (0x0006a656) list_single_dyc_row_pane_g3_ParamLimits

0x7b28,	// (0x0006a656) list_single_dyc_row_pane_g3

0x7b3b,	// (0x0006a669) list_single_dyc_row_pane_g4_ParamLimits

0x7b3b,	// (0x0006a669) list_single_dyc_row_pane_g4

0x0006,

0xfbe3,	// (0x00072711) list_single_dyc_row_pane_g_ParamLimits

0xfbe3,	// (0x00072711) list_single_dyc_row_pane_g

0x7b8d,	// (0x0006a6bb) list_single_dyc_row_text_pane_ParamLimits

0x7b8d,	// (0x0006a6bb) list_single_dyc_row_text_pane

0x9fdf,	// (0x0006cb0d) bg_sp_fs_scroll_pane

0xb511,	// (0x0006e03f) thumb_sp_fs_scroll_pane

0xc41a,	// (0x0006ef48) list_medium_line_g1_ParamLimits

0xc41a,	// (0x0006ef48) list_medium_line_g1

0xc462,	// (0x0006ef90) list_medium_line_t1_ParamLimits

0xc462,	// (0x0006ef90) list_medium_line_t1

0xc41a,	// (0x0006ef48) list_medium_line_x2_g1_ParamLimits

0xc41a,	// (0x0006ef48) list_medium_line_x2_g1

0xc41a,	// (0x0006ef48) list_medium_line_x2_g2_ParamLimits

0xc41a,	// (0x0006ef48) list_medium_line_x2_g2

0x0001,

0xf199,	// (0x00071cc7) list_medium_line_x2_g_ParamLimits

0xf199,	// (0x00071cc7) list_medium_line_x2_g

0xc462,	// (0x0006ef90) list_medium_line_x2_t1_ParamLimits

0xc462,	// (0x0006ef90) list_medium_line_x2_t1

0xc41a,	// (0x0006ef48) list_medium_line_x3_g1_ParamLimits

0xc41a,	// (0x0006ef48) list_medium_line_x3_g1

0xaa8e,	// (0x0006d5bc) list_medium_line_x3_g2_ParamLimits

0xaa8e,	// (0x0006d5bc) list_medium_line_x3_g2

0x0001,

0xfbf2,	// (0x00072720) list_medium_line_x3_g_ParamLimits

0xfbf2,	// (0x00072720) list_medium_line_x3_g

0xb51a,	// (0x0006e048) list_medium_line_x3_t1_ParamLimits

0xb51a,	// (0x0006e048) list_medium_line_x3_t1

0xb52e,	// (0x0006e05c) thumb_sp_fs_scroll_pane_g1

0xb537,	// (0x0006e065) thumb_sp_fs_scroll_pane_g2

0xb540,	// (0x0006e06e) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfbf7,	// (0x00072725) thumb_sp_fs_scroll_pane_g

0xb52e,	// (0x0006e05c) bg_sp_fs_scroll_pane_g1

0xb537,	// (0x0006e065) bg_sp_fs_scroll_pane_g2

0xb540,	// (0x0006e06e) bg_sp_fs_scroll_pane_g3

0x0002,

0xfbf7,	// (0x00072725) bg_sp_fs_scroll_pane_g

0xc41a,	// (0x0006ef48) list_medium_line_x2_t3_g4_g1_ParamLimits

0xc41a,	// (0x0006ef48) list_medium_line_x2_t3_g4_g1

0xc41a,	// (0x0006ef48) list_medium_line_x2_t3_g4_g2_ParamLimits

0xc41a,	// (0x0006ef48) list_medium_line_x2_t3_g4_g2

0xc41a,	// (0x0006ef48) list_medium_line_x2_t3_g4_g3_ParamLimits

0xc41a,	// (0x0006ef48) list_medium_line_x2_t3_g4_g3

0xc41a,	// (0x0006ef48) list_medium_line_x2_t3_g4_g4_ParamLimits

0xc41a,	// (0x0006ef48) list_medium_line_x2_t3_g4_g4

0x0003,

0xf19e,	// (0x00071ccc) list_medium_line_x2_t3_g4_g_ParamLimits

0xf19e,	// (0x00071ccc) list_medium_line_x2_t3_g4_g

0xc462,	// (0x0006ef90) list_medium_line_x2_t3_g4_t1_ParamLimits

0xc462,	// (0x0006ef90) list_medium_line_x2_t3_g4_t1

0xc462,	// (0x0006ef90) list_medium_line_x2_t3_g4_t2_ParamLimits

0xc462,	// (0x0006ef90) list_medium_line_x2_t3_g4_t2

0xc462,	// (0x0006ef90) list_medium_line_x2_t3_g4_t3_ParamLimits

0xc462,	// (0x0006ef90) list_medium_line_x2_t3_g4_t3

0x0002,

0xf192,	// (0x00071cc0) list_medium_line_x2_t3_g4_t_ParamLimits

0xf192,	// (0x00071cc0) list_medium_line_x2_t3_g4_t

0xc41a,	// (0x0006ef48) list_medium_line_g2_g1_ParamLimits

0xc41a,	// (0x0006ef48) list_medium_line_g2_g1

0xc41a,	// (0x0006ef48) list_medium_line_g2_g2_ParamLimits

0xc41a,	// (0x0006ef48) list_medium_line_g2_g2

0x0001,

0xf199,	// (0x00071cc7) list_medium_line_g2_g_ParamLimits

0xf199,	// (0x00071cc7) list_medium_line_g2_g

0xc462,	// (0x0006ef90) list_medium_line_g2_t1_ParamLimits

0xc462,	// (0x0006ef90) list_medium_line_g2_t1

0xc41a,	// (0x0006ef48) list_medium_line_t3_g2_g1_ParamLimits

0xc41a,	// (0x0006ef48) list_medium_line_t3_g2_g1

0xc41a,	// (0x0006ef48) list_medium_line_t3_g2_g2_ParamLimits

0xc41a,	// (0x0006ef48) list_medium_line_t3_g2_g2

0x0001,

0xf199,	// (0x00071cc7) list_medium_line_t3_g2_g_ParamLimits

0xf199,	// (0x00071cc7) list_medium_line_t3_g2_g

0xc462,	// (0x0006ef90) list_medium_line_t3_g2_t1_ParamLimits

0xc462,	// (0x0006ef90) list_medium_line_t3_g2_t1

0xc462,	// (0x0006ef90) list_medium_line_t3_g2_t2_ParamLimits

0xc462,	// (0x0006ef90) list_medium_line_t3_g2_t2

0xc462,	// (0x0006ef90) list_medium_line_t3_g2_t3_ParamLimits

0xc462,	// (0x0006ef90) list_medium_line_t3_g2_t3

0x0002,

0xf192,	// (0x00071cc0) list_medium_line_t3_g2_t_ParamLimits

0xf192,	// (0x00071cc0) list_medium_line_t3_g2_t

0xc458,	// (0x0006ef86) list_medium_line_right_icon_g1

0xcbae,	// (0x0006f6dc) list_medium_line_right_icon_t1

0xc41a,	// (0x0006ef48) list_medium_line_t2_g1_ParamLimits

0xc41a,	// (0x0006ef48) list_medium_line_t2_g1

0xc462,	// (0x0006ef90) list_medium_line_t2_t1_ParamLimits

0xc462,	// (0x0006ef90) list_medium_line_t2_t1

0xc462,	// (0x0006ef90) list_medium_line_t2_t2_ParamLimits

0xc462,	// (0x0006ef90) list_medium_line_t2_t2

0x0001,

0xf16e,	// (0x00071c9c) list_medium_line_t2_t_ParamLimits

0xf16e,	// (0x00071c9c) list_medium_line_t2_t

0xc41a,	// (0x0006ef48) list_medium_line_t3_g1_ParamLimits

0xc41a,	// (0x0006ef48) list_medium_line_t3_g1

0xc462,	// (0x0006ef90) list_medium_line_t3_t1_ParamLimits

0xc462,	// (0x0006ef90) list_medium_line_t3_t1

0xc462,	// (0x0006ef90) list_medium_line_t3_t2_ParamLimits

0xc462,	// (0x0006ef90) list_medium_line_t3_t2

0xc462,	// (0x0006ef90) list_medium_line_t3_t3_ParamLimits

0xc462,	// (0x0006ef90) list_medium_line_t3_t3

0x0002,

0xf192,	// (0x00071cc0) list_medium_line_t3_t_ParamLimits

0xf192,	// (0x00071cc0) list_medium_line_t3_t

0xc41a,	// (0x0006ef48) list_medium_line_g3_g1_ParamLimits

0xc41a,	// (0x0006ef48) list_medium_line_g3_g1

0xc41a,	// (0x0006ef48) list_medium_line_g3_g2_ParamLimits

0xc41a,	// (0x0006ef48) list_medium_line_g3_g2

0xc41a,	// (0x0006ef48) list_medium_line_g3_g3_ParamLimits

0xc41a,	// (0x0006ef48) list_medium_line_g3_g3

0x0002,

0xf18b,	// (0x00071cb9) list_medium_line_g3_g_ParamLimits

0xf18b,	// (0x00071cb9) list_medium_line_g3_g

0xc462,	// (0x0006ef90) list_medium_line_g3_t1_ParamLimits

0xc462,	// (0x0006ef90) list_medium_line_g3_t1

0xc41a,	// (0x0006ef48) list_medium_line_t2_g3_g1_ParamLimits

0xc41a,	// (0x0006ef48) list_medium_line_t2_g3_g1

0xc41a,	// (0x0006ef48) list_medium_line_t2_g3_g2_ParamLimits

0xc41a,	// (0x0006ef48) list_medium_line_t2_g3_g2

0xc41a,	// (0x0006ef48) list_medium_line_t2_g3_g3_ParamLimits

0xc41a,	// (0x0006ef48) list_medium_line_t2_g3_g3

0x0002,

0xf18b,	// (0x00071cb9) list_medium_line_t2_g3_g_ParamLimits

0xf18b,	// (0x00071cb9) list_medium_line_t2_g3_g

0xc462,	// (0x0006ef90) list_medium_line_t2_g3_t1_ParamLimits

0xc462,	// (0x0006ef90) list_medium_line_t2_g3_t1

0xc462,	// (0x0006ef90) list_medium_line_t2_g3_t2_ParamLimits

0xc462,	// (0x0006ef90) list_medium_line_t2_g3_t2

0x0001,

0xf16e,	// (0x00071c9c) list_medium_line_t2_g3_t_ParamLimits

0xf16e,	// (0x00071c9c) list_medium_line_t2_g3_t

0xc41a,	// (0x0006ef48) list_medium_line_t3_g3_g1_ParamLimits

0xc41a,	// (0x0006ef48) list_medium_line_t3_g3_g1

0xc41a,	// (0x0006ef48) list_medium_line_t3_g3_g2_ParamLimits

0xc41a,	// (0x0006ef48) list_medium_line_t3_g3_g2

0xc41a,	// (0x0006ef48) list_medium_line_t3_g3_g3_ParamLimits

0xc41a,	// (0x0006ef48) list_medium_line_t3_g3_g3

0x0002,

0xf18b,	// (0x00071cb9) list_medium_line_t3_g3_g_ParamLimits

0xf18b,	// (0x00071cb9) list_medium_line_t3_g3_g

0xc462,	// (0x0006ef90) list_medium_line_t3_g3_t1_ParamLimits

0xc462,	// (0x0006ef90) list_medium_line_t3_g3_t1

0xc462,	// (0x0006ef90) list_medium_line_t3_g3_t2_ParamLimits

0xc462,	// (0x0006ef90) list_medium_line_t3_g3_t2

0xc462,	// (0x0006ef90) list_medium_line_t3_g3_t3_ParamLimits

0xc462,	// (0x0006ef90) list_medium_line_t3_g3_t3

0x0002,

0xf192,	// (0x00071cc0) list_medium_line_t3_g3_t_ParamLimits

0xf192,	// (0x00071cc0) list_medium_line_t3_g3_t

0xc458,	// (0x0006ef86) list_medium_line_right_iconx2_g1

0xc458,	// (0x0006ef86) list_medium_line_right_iconx2_g2

0x0001,

0xf08c,	// (0x00071bba) list_medium_line_right_iconx2_g

0xcbae,	// (0x0006f6dc) list_medium_line_right_iconx2_t1

0xc458,	// (0x0006ef86) list_medium_line_t2_right_iconx2_g1

0xc458,	// (0x0006ef86) list_medium_line_t2_right_iconx2_g2

0x0001,

0xf08c,	// (0x00071bba) list_medium_line_t2_right_iconx2_g

0xcbae,	// (0x0006f6dc) list_medium_line_t2_right_iconx2_t1

0xcbae,	// (0x0006f6dc) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfbbe,	// (0x000726ec) list_medium_line_t2_right_iconx2_t

0xcbae,	// (0x0006f6dc) list_medium_line_x4_t4_t1

0xcbae,	// (0x0006f6dc) list_medium_line_x4_t4_t2

0xcbae,	// (0x0006f6dc) list_medium_line_x4_t4_t3

0xcbae,	// (0x0006f6dc) list_medium_line_x4_t4_t4

0x0003,

0xf25b,	// (0x00071d89) list_medium_line_x4_t4_t

0x7bf6,	// (0x0006a724) tport_appsw_pane_ParamLimits

0x7bf6,	// (0x0006a724) tport_appsw_pane

0x7c0e,	// (0x0006a73c) tport_contact_pane_ParamLimits

0x7c0e,	// (0x0006a73c) tport_contact_pane

0x7c29,	// (0x0006a757) tport_listscroll_pane_ParamLimits

0x7c29,	// (0x0006a757) tport_listscroll_pane

0x7c41,	// (0x0006a76f) cell_tport_appsw_pane_ParamLimits

0x7c41,	// (0x0006a76f) cell_tport_appsw_pane

0xd05e,	// (0x0006fb8c) tport_appsw_pane_g1_ParamLimits

0xd05e,	// (0x0006fb8c) tport_appsw_pane_g1

0x7c8b,	// (0x0006a7b9) tport_contact_pane_g1

0x7c94,	// (0x0006a7c2) tport_contact_pane_t1

0x7ca2,	// (0x0006a7d0) tport_contact_pane_t2

0x0001,

0xfbfe,	// (0x0007272c) tport_contact_pane_t

0xb549,	// (0x0006e077) list_tport_pane

0xb552,	// (0x0006e080) scroll_pane_cp_030

0x7cb8,	// (0x0006a7e6) cell_tport_appsw_pane_g1

0x7cc8,	// (0x0006a7f6) cell_tport_appsw_pane_t1

0x7cd6,	// (0x0006a804) grid_highlight_pane_cp019

0x7cde,	// (0x0006a80c) list_tport_double_graphic_pane_ParamLimits

0x7cde,	// (0x0006a80c) list_tport_double_graphic_pane

0xa48d,	// (0x0006cfbb) list_highlight_pane_cp023_ParamLimits

0xa48d,	// (0x0006cfbb) list_highlight_pane_cp023

0x7ceb,	// (0x0006a819) list_tport_double_graphic_pane_g1_ParamLimits

0x7ceb,	// (0x0006a819) list_tport_double_graphic_pane_g1

0x7cf8,	// (0x0006a826) list_tport_double_graphic_pane_t1_ParamLimits

0x7cf8,	// (0x0006a826) list_tport_double_graphic_pane_t1

0x7d0d,	// (0x0006a83b) list_tport_double_graphic_pane_t2_ParamLimits

0x7d0d,	// (0x0006a83b) list_tport_double_graphic_pane_t2

0x0001,

0xfc0a,	// (0x00072738) list_tport_double_graphic_pane_t_ParamLimits

0xfc0a,	// (0x00072738) list_tport_double_graphic_pane_t

0x9fdf,	// (0x0006cb0d) main_cale_note_pane

0x5075,	// (0x00067ba3) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x5075,	// (0x00067ba3) cell_vitu2_function_top_wide_pane_cp01

0x7314,	// (0x00069e42) wait_bar_pane_cp05_ParamLimits

0xa48d,	// (0x0006cfbb) listscroll_cmail_pane

0xb563,	// (0x0006e091) list_cmail_pane

0x7d1f,	// (0x0006a84d) list_cmail_body_pane

0x7d36,	// (0x0006a864) list_single_cmail_header_caption_pane

0x7d50,	// (0x0006a87e) list_single_cmail_header_detail_pane_ParamLimits

0x7d50,	// (0x0006a87e) list_single_cmail_header_detail_pane

0xb57a,	// (0x0006e0a8) list_single_cmail_header_caption_pane_t1

0x7d83,	// (0x0006a8b1) list_single_cmail_header_detail_pane_g1_ParamLimits

0x7d83,	// (0x0006a8b1) list_single_cmail_header_detail_pane_g1

0x7d9b,	// (0x0006a8c9) list_single_cmail_header_detail_pane_g2_ParamLimits

0x7d9b,	// (0x0006a8c9) list_single_cmail_header_detail_pane_g2

0x0002,

0xfc0f,	// (0x0007273d) list_single_cmail_header_detail_pane_g_ParamLimits

0xfc0f,	// (0x0007273d) list_single_cmail_header_detail_pane_g

0x7da7,	// (0x0006a8d5) list_single_cmail_header_detail_pane_t1_ParamLimits

0x7da7,	// (0x0006a8d5) list_single_cmail_header_detail_pane_t1

0x7e07,	// (0x0006a935) list_single_cmail_header_editor_pane_bg_ParamLimits

0x7e07,	// (0x0006a935) list_single_cmail_header_editor_pane_bg

0xb205,	// (0x0006dd33) list_cmail_body_pane_g1

0xb59e,	// (0x0006e0cc) list_cmail_body_pane_t1

0x52af,	// (0x00067ddd) list_single_cmail_header_editor_pane_bg_g1

0xc8bd,	// (0x0006f3eb) list_single_cmail_header_editor_pane_bg_g1_copy1

0x52bf,	// (0x00067ded) list_single_cmail_header_editor_pane_bg_g1_copy2

0x52b7,	// (0x00067de5) list_single_cmail_header_editor_pane_bg_g1_copy3

0x5cad,	// (0x000687db) list_single_cmail_header_editor_pane_bg_g1_copy4

0x52df,	// (0x00067e0d) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x52cf,	// (0x00067dfd) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x52d7,	// (0x00067e05) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xc89d,	// (0x0006f3cb) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x7e1a,	// (0x0006a948) calenote_gesture_pane_ParamLimits

0x7e1a,	// (0x0006a948) calenote_gesture_pane

0x7e3a,	// (0x0006a968) calenote_window_pane_ParamLimits

0x7e3a,	// (0x0006a968) calenote_window_pane

0xb5ac,	// (0x0006e0da) popup_note_window_cp01

0x7e56,	// (0x0006a984) calenote_swipe_1_pane_ParamLimits

0x7e56,	// (0x0006a984) calenote_swipe_1_pane

0x7728,	// (0x0006a256) calenote_swipe_2_pane_ParamLimits

0x7728,	// (0x0006a256) calenote_swipe_2_pane

0xb3f5,	// (0x0006df23) calenote_swipe_1_pane_g1_ParamLimits

0xb3f5,	// (0x0006df23) calenote_swipe_1_pane_g1

0xb5be,	// (0x0006e0ec) calenote_swipe_1_pane_g2_ParamLimits

0xb5be,	// (0x0006e0ec) calenote_swipe_1_pane_g2

0x0001,

0xfc1b,	// (0x00072749) calenote_swipe_1_pane_g_ParamLimits

0xfc1b,	// (0x00072749) calenote_swipe_1_pane_g

0xb5ca,	// (0x0006e0f8) calenote_swipe_1_pane_t1_ParamLimits

0xb5ca,	// (0x0006e0f8) calenote_swipe_1_pane_t1

0xb3f5,	// (0x0006df23) calenote_swipe_2_pane_g1_ParamLimits

0xb3f5,	// (0x0006df23) calenote_swipe_2_pane_g1

0xb5e9,	// (0x0006e117) calenote_swipe_2_pane_g2_ParamLimits

0xb5e9,	// (0x0006e117) calenote_swipe_2_pane_g2

0x0001,

0xfc20,	// (0x0007274e) calenote_swipe_2_pane_g_ParamLimits

0xfc20,	// (0x0007274e) calenote_swipe_2_pane_g

0xb5f5,	// (0x0006e123) calenote_swipe_2_pane_t1_ParamLimits

0xb5f5,	// (0x0006e123) calenote_swipe_2_pane_t1

0x9fdf,	// (0x0006cb0d) main_mup_navstr_pane

0x3f9e,	// (0x00066acc) main_mup3_pane_t7_ParamLimits

0x3f9e,	// (0x00066acc) main_mup3_pane_t7

0xa7ea,	// (0x0006d318) main_mp4_pane_g6_ParamLimits

0xa7ea,	// (0x0006d318) main_mp4_pane_g6

0xaa18,	// (0x0006d546) main_image3_pane_t4_ParamLimits

0xaa18,	// (0x0006d546) main_image3_pane_t4

0x7e6b,	// (0x0006a999) popup_navstr_preview_pane_ParamLimits

0x7e6b,	// (0x0006a999) popup_navstr_preview_pane

0x7e7b,	// (0x0006a9a9) scroll_navstr_pane_ParamLimits

0x7e7b,	// (0x0006a9a9) scroll_navstr_pane

0x9fdf,	// (0x0006cb0d) bg_popup_preview_window_pane_cp04

0xb61c,	// (0x0006e14a) popup_navstr_preview_pane_t1

0x7e8f,	// (0x0006a9bd) scroll_navstr_pane_g1_ParamLimits

0x7e8f,	// (0x0006a9bd) scroll_navstr_pane_g1

0x7ea3,	// (0x0006a9d1) scroll_navstr_pane_t1_ParamLimits

0x7ea3,	// (0x0006a9d1) scroll_navstr_pane_t1

0xb5b5,	// (0x0006e0e3) bg_button_pane_cp014

0xb5b5,	// (0x0006e0e3) bg_button_pane_cp030

0x75b0,	// (0x0006a0de) list_double_fisheye_pane_g4_ParamLimits

0x75b0,	// (0x0006a0de) list_double_fisheye_pane_g4

0x75bc,	// (0x0006a0ea) list_double_fisheye_pane_g5_ParamLimits

0x75bc,	// (0x0006a0ea) list_double_fisheye_pane_g5

0xa522,	// (0x0006d050) sp_fs_scroll_pane_cp03

0xb4c3,	// (0x0006dff1) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xb4cf,	// (0x0006dffd) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfbc3,	// (0x000726f1) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x7826,	// (0x0006a354) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xb572,	// (0x0006e0a0) sp_fs_scroll_pane_cp02

0xc5f8,	// (0x0006f126) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xc5f8,	// (0x0006f126) popup_sp_fs_calendar_preview_list_single_pane

0x9fdf,	// (0x0006cb0d) main_cam6_pano_pane

0xa05c,	// (0x0006cb8a) main_mup3_pane_ParamLimits

0x9fdf,	// (0x0006cb0d) main_phacti_pane

0x71e5,	// (0x00069d13) bg_button_pane_cp11

0x71ff,	// (0x00069d2d) main_mobtv_info_pane_g2_ParamLimits

0x71ff,	// (0x00069d2d) main_mobtv_info_pane_g2

0x0001,

0xfb28,	// (0x00072656) main_mobtv_info_pane_g_ParamLimits

0xfb28,	// (0x00072656) main_mobtv_info_pane_g

0xc462,	// (0x0006ef90) sc_clock_pane_t5_ParamLimits

0xc462,	// (0x0006ef90) sc_clock_pane_t5

0xd05e,	// (0x0006fb8c) main_radioblah_pane_g1_ParamLimits

0xd06c,	// (0x0006fb9a) main_radioblah_pane_t3_ParamLimits

0xd06c,	// (0x0006fb9a) main_radioblah_pane_t3

0xd06c,	// (0x0006fb9a) main_radioblah_pane_t4_ParamLimits

0xd06c,	// (0x0006fb9a) main_radioblah_pane_t4

0xa48d,	// (0x0006cfbb) main_radioblah_text_pane_ParamLimits

0xa48d,	// (0x0006cfbb) main_radioblah_text_pane

0xb312,	// (0x0006de40) main_radioblah_info_pane_g1_ParamLimits

0xb356,	// (0x0006de84) main_radioblah_info_pane_t4_ParamLimits

0xb356,	// (0x0006de84) main_radioblah_info_pane_t4

0xa48d,	// (0x0006cfbb) main_sp_fs_calendar_pane

0x7eba,	// (0x0006a9e8) main_phacti_pane_g1

0x7ec2,	// (0x0006a9f0) phacti_note_pane_ParamLimits

0x7ec2,	// (0x0006a9f0) phacti_note_pane

0xb633,	// (0x0006e161) phacti_term_pane_ParamLimits

0xb633,	// (0x0006e161) phacti_term_pane

0xb648,	// (0x0006e176) phacti_note_pane_t1_ParamLimits

0xb648,	// (0x0006e176) phacti_note_pane_t1

0x7ed6,	// (0x0006aa04) phacti_term_pane_g1

0x7ede,	// (0x0006aa0c) phacti_term_pane_t1_ParamLimits

0x7ede,	// (0x0006aa0c) phacti_term_pane_t1

0xb65f,	// (0x0006e18d) popup_sp_fs_calendar_preview_list_single_pane_g1

0xb667,	// (0x0006e195) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfc2a,	// (0x00072758) popup_sp_fs_calendar_preview_list_single_pane_g

0xb66f,	// (0x0006e19d) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xb66f,	// (0x0006e19d) popup_sp_fs_calendar_preview_list_single_pane_t1

0xb685,	// (0x0006e1b3) aid_popup_sp_fs_bg_corner_pane

0xc458,	// (0x0006ef86) popup_sp_fs_calendar_preview_bg_pane_g1

0x9fdf,	// (0x0006cb0d) popup_sp_fs_calendar_preview_bg_pane

0xb68d,	// (0x0006e1bb) popup_sp_fs_calendar_preview_list_pane

0xb695,	// (0x0006e1c3) bg_main_sp_fs_cale_pane_ParamLimits

0xb695,	// (0x0006e1c3) bg_main_sp_fs_cale_pane

0xb6ad,	// (0x0006e1db) listscroll_cale_mrui_pane_ParamLimits

0xb6ad,	// (0x0006e1db) listscroll_cale_mrui_pane

0xebad,	// (0x000716db) listscroll_sp_fs_schedule_track_pane

0x7f1d,	// (0x0006aa4b) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x7f1d,	// (0x0006aa4b) main_sp_fs_ctrlbar_pane_cp01

0xebad,	// (0x000716db) main_sp_fs_ribbon_pane

0x7f33,	// (0x0006aa61) popup_sp_fs_cale_preview_window

0xb6c5,	// (0x0006e1f3) list_single_sp_fs_schedule_track_pane_ParamLimits

0xb6c5,	// (0x0006e1f3) list_single_sp_fs_schedule_track_pane

0xa703,	// (0x0006d231) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xa703,	// (0x0006d231) bg_sp_fs_highlight_list_pane_cp03

0xa6f7,	// (0x0006d225) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xa6f7,	// (0x0006d225) list_single_sp_fs_schedule_track_pane_g1

0xa6f7,	// (0x0006d225) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xa6f7,	// (0x0006d225) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfc2f,	// (0x0007275d) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfc2f,	// (0x0007275d) list_single_sp_fs_schedule_track_pane_g

0x7f45,	// (0x0006aa73) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x7f45,	// (0x0006aa73) list_single_sp_fs_schedule_track_pane_t1

0x7f57,	// (0x0006aa85) sp_fs_schedule_track_pane_ParamLimits

0x7f57,	// (0x0006aa85) sp_fs_schedule_track_pane

0xebb5,	// (0x000716e3) sp_fs_schedule_track_pane_g1

0xebb5,	// (0x000716e3) sp_fs_schedule_track_pane_g2

0xebb5,	// (0x000716e3) sp_fs_schedule_track_pane_g3

0xebb5,	// (0x000716e3) sp_fs_schedule_track_pane_g4

0xebb5,	// (0x000716e3) sp_fs_schedule_track_pane_g5

0x0004,

0xfc34,	// (0x00072762) sp_fs_schedule_track_pane_g

0xebb5,	// (0x000716e3) bg_sp_fs_schedule_viewer_highlight_g1

0xebb5,	// (0x000716e3) bg_sp_fs_schedule_viewer_highlight_g2

0xebb5,	// (0x000716e3) bg_sp_fs_schedule_viewer_highlight_g3

0xebb5,	// (0x000716e3) bg_sp_fs_schedule_viewer_highlight_g4

0xebb5,	// (0x000716e3) bg_sp_fs_schedule_viewer_highlight_g5

0xebb5,	// (0x000716e3) bg_sp_fs_schedule_viewer_highlight_g6

0xebb5,	// (0x000716e3) bg_sp_fs_schedule_viewer_highlight_g7

0xebb5,	// (0x000716e3) bg_sp_fs_schedule_viewer_highlight_g8

0xebb5,	// (0x000716e3) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfc3f,	// (0x0007276d) bg_sp_fs_schedule_viewer_highlight_g

0xebad,	// (0x000716db) bg_main_sp_fs_ribbon_pane

0xebb5,	// (0x000716e3) main_sp_fs_ribbon_pane_g1

0xb6d1,	// (0x0006e1ff) main_sp_fs_ribbon_pane_t1

0xb6d1,	// (0x0006e1ff) main_sp_fs_ribbon_pane_t2

0xb6d1,	// (0x0006e1ff) main_sp_fs_ribbon_pane_t3

0x0002,

0xfc52,	// (0x00072780) main_sp_fs_ribbon_pane_t

0xebad,	// (0x000716db) main_sp_fs_ribbon_scheduler_pane

0xebb5,	// (0x000716e3) bg_main_sp_fs_ribbon_pane_g1

0xebb5,	// (0x000716e3) bg_main_sp_fs_ribbon_pane_g2

0xebb5,	// (0x000716e3) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xf69b,	// (0x000721c9) bg_main_sp_fs_ribbon_pane_g

0xebb5,	// (0x000716e3) main_sp_fs_ribbon_scheduler_pane_g1

0xebb5,	// (0x000716e3) main_sp_fs_ribbon_scheduler_pane_g2

0xebb5,	// (0x000716e3) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xf69b,	// (0x000721c9) main_sp_fs_ribbon_scheduler_pane_g

0xb6df,	// (0x0006e20d) list_cale_mrui_pane

0x7f63,	// (0x0006aa91) sp_fs_scroll_pane_cp07_ParamLimits

0x7f63,	// (0x0006aa91) sp_fs_scroll_pane_cp07

0xa703,	// (0x0006d231) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xa703,	// (0x0006d231) bg_sp_fs_schedule_viewer_highlight

0xebad,	// (0x000716db) list_single_sp_fs_schedule_track_pane_cp01

0xebad,	// (0x000716db) list_sp_fs_schedule_track_pane

0xb6ec,	// (0x0006e21a) sp_fs_scroll_pane_cp06_ParamLimits

0xb6ec,	// (0x0006e21a) sp_fs_scroll_pane_cp06

0xc458,	// (0x0006ef86) bgmain_sp_fs_calendar_pane_g1

0x7f7f,	// (0x0006aaad) list_single_cale_mrui_pane_ParamLimits

0x7f7f,	// (0x0006aaad) list_single_cale_mrui_pane

0x7fa2,	// (0x0006aad0) list_single_cale_mrui_row_pane_ParamLimits

0x7fa2,	// (0x0006aad0) list_single_cale_mrui_row_pane

0x7faf,	// (0x0006aadd) list_single_cale_mrui_row_pane_g1_ParamLimits

0x7faf,	// (0x0006aadd) list_single_cale_mrui_row_pane_g1

0x7fe7,	// (0x0006ab15) list_single_cale_mrui_row_pane_t1_ParamLimits

0x7fe7,	// (0x0006ab15) list_single_cale_mrui_row_pane_t1

0x7ff9,	// (0x0006ab27) list_single_cale_mrui_row_pane_t2_ParamLimits

0x7ff9,	// (0x0006ab27) list_single_cale_mrui_row_pane_t2

0x805f,	// (0x0006ab8d) list_single_cale_mrui_row_pane_t3_ParamLimits

0x805f,	// (0x0006ab8d) list_single_cale_mrui_row_pane_t3

0x808e,	// (0x0006abbc) list_single_cale_mrui_row_pane_t4_ParamLimits

0x808e,	// (0x0006abbc) list_single_cale_mrui_row_pane_t4

0x0003,

0xfc60,	// (0x0007278e) list_single_cale_mrui_row_pane_t_ParamLimits

0xfc60,	// (0x0007278e) list_single_cale_mrui_row_pane_t

0x80bd,	// (0x0006abeb) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x80bd,	// (0x0006abeb) list_single_cmail_header_editor_pane_bg_cp01

0x80e9,	// (0x0006ac17) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x80e9,	// (0x0006ac17) list_single_cmail_header_editor_pane_bg_cp02

0xb70d,	// (0x0006e23b) main_radioblah_text_pane_t1_ParamLimits

0xb70d,	// (0x0006e23b) main_radioblah_text_pane_t1

0xb727,	// (0x0006e255) cam6_indi_pane_cp01

0xb72f,	// (0x0006e25d) cam6_mode_pane_cp01

0xb737,	// (0x0006e265) cam6_pano_pane

0xb740,	// (0x0006e26e) cam6_zoom_pane_cp01

0xb74a,	// (0x0006e278) cam6_pano_image_pane

0xb753,	// (0x0006e281) cam6_pano_pane_g1

0xb205,	// (0x0006dd33) cam6_pano_pane_g2

0xb75c,	// (0x0006e28a) cam6_pano_pane_g3

0xb765,	// (0x0006e293) cam6_pano_pane_g4

0xee5a,	// (0x00071988) cam6_pano_pane_g5

0xb76e,	// (0x0006e29c) cam6_pano_pane_g6

0xb776,	// (0x0006e2a4) cam6_pano_pane_g7

0xb77e,	// (0x0006e2ac) cam6_pano_pane_g8

0xb787,	// (0x0006e2b5) cam6_pano_pane_g9

0x0008,

0xfc69,	// (0x00072797) cam6_pano_pane_g

0x9fdf,	// (0x0006cb0d) main_browser_tag_pane

0xb614,	// (0x0006e142) grid_navstr_albumart_pane

0xb792,	// (0x0006e2c0) cell_navstr_albumart_pane_ParamLimits

0xb792,	// (0x0006e2c0) cell_navstr_albumart_pane

0xb7ae,	// (0x0006e2dc) cell_navstr_albumart_pane_g1

0xb7b6,	// (0x0006e2e4) cell_navstr_albumart_pane_g2

0xb7be,	// (0x0006e2ec) cell_navstr_albumart_pane_g3

0xb7c6,	// (0x0006e2f4) cell_navstr_albumart_pane_g4

0x0003,

0xfc7c,	// (0x000727aa) cell_navstr_albumart_pane_g

0x8107,	// (0x0006ac35) bt_list_pane_ParamLimits

0x8107,	// (0x0006ac35) bt_list_pane

0x811d,	// (0x0006ac4b) bt_list_pane_t1

0x812c,	// (0x0006ac5a) bt_list_pane_t2

0x0001,

0xfc85,	// (0x000727b3) bt_list_pane_t

0x9fdf,	// (0x0006cb0d) main_cale_prevew_pane

0x813b,	// (0x0006ac69) popup_cale_preview_window_ParamLimits

0x813b,	// (0x0006ac69) popup_cale_preview_window

0xa48d,	// (0x0006cfbb) bg_popup_preview_window_pane_cp05_ParamLimits

0xa48d,	// (0x0006cfbb) bg_popup_preview_window_pane_cp05

0xb7ce,	// (0x0006e2fc) list_cale_preview_pane_ParamLimits

0xb7ce,	// (0x0006e2fc) list_cale_preview_pane

0x8158,	// (0x0006ac86) list_double_cale_preview_pane_ParamLimits

0x8158,	// (0x0006ac86) list_double_cale_preview_pane

0x816c,	// (0x0006ac9a) list_single_cale_preview_pane_ParamLimits

0x816c,	// (0x0006ac9a) list_single_cale_preview_pane

0x8184,	// (0x0006acb2) list_single_cale_preview_pane_g1

0x818c,	// (0x0006acba) list_single_cale_preview_pane_t1_ParamLimits

0x818c,	// (0x0006acba) list_single_cale_preview_pane_t1

0x81a1,	// (0x0006accf) list_double_cale_preview_pane_g1

0x81a9,	// (0x0006acd7) list_double_cale_preview_pane_t1_ParamLimits

0x81a9,	// (0x0006acd7) list_double_cale_preview_pane_t1

0x81be,	// (0x0006acec) list_double_cale_preview_pane_t2_ParamLimits

0x81be,	// (0x0006acec) list_double_cale_preview_pane_t2

0x0001,

0xfc8a,	// (0x000727b8) list_double_cale_preview_pane_t_ParamLimits

0xfc8a,	// (0x000727b8) list_double_cale_preview_pane_t

0x9fdf,	// (0x0006cb0d) main_ezdial_pane

0xa48d,	// (0x0006cfbb) main_sp_fs_email_pane_ParamLimits

0x7791,	// (0x0006a2bf) cmail_ddmenu_btn01_pane_ParamLimits

0x7791,	// (0x0006a2bf) cmail_ddmenu_btn01_pane

0x77a4,	// (0x0006a2d2) cmail_ddmenu_btn02_pane_ParamLimits

0x77a4,	// (0x0006a2d2) cmail_ddmenu_btn02_pane

0x77c7,	// (0x0006a2f5) cmail_ddmenu_btn03_pane_ParamLimits

0x77c7,	// (0x0006a2f5) cmail_ddmenu_btn03_pane

0x7865,	// (0x0006a393) main_sp_fs_ctrlbar_pane_ParamLimits

0x7889,	// (0x0006a3b7) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x7d1f,	// (0x0006a84d) list_cmail_body_pane_ParamLimits

0xb588,	// (0x0006e0b6) bg_button_pane_cp12

0xb591,	// (0x0006e0bf) list_single_cmail_header_detail_pane_g3_ParamLimits

0xb591,	// (0x0006e0bf) list_single_cmail_header_detail_pane_g3

0x7de3,	// (0x0006a911) list_single_cmail_header_detail_pane_t2_ParamLimits

0x7de3,	// (0x0006a911) list_single_cmail_header_detail_pane_t2

0x0001,

0xfc16,	// (0x00072744) list_single_cmail_header_detail_pane_t_ParamLimits

0xfc16,	// (0x00072744) list_single_cmail_header_detail_pane_t

0x7ef3,	// (0x0006aa21) phacti_term_pane_t2_ParamLimits

0x7ef3,	// (0x0006aa21) phacti_term_pane_t2

0x0001,

0xfc25,	// (0x00072753) phacti_term_pane_t_ParamLimits

0xfc25,	// (0x00072753) phacti_term_pane_t

0xb7da,	// (0x0006e308) aid_size_list_single_double

0x81d6,	// (0x0006ad04) popup_ezdial_listscroll_window

0xb7e6,	// (0x0006e314) popup_number_entry_window_cp01

0xc693,	// (0x0006f1c1) bg_popup_call_pane_cp09

0xb7f3,	// (0x0006e321) ezdial_list_pane

0xb7fb,	// (0x0006e329) scroll_pane_cp23

0xd080,	// (0x0006fbae) bg_button_pane_cp028_ParamLimits

0xd080,	// (0x0006fbae) bg_button_pane_cp028

0x81f2,	// (0x0006ad20) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x81f2,	// (0x0006ad20) cmail_ddmenu_btn01_pane_g1

0x8201,	// (0x0006ad2f) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x8201,	// (0x0006ad2f) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfc8f,	// (0x000727bd) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfc8f,	// (0x000727bd) cmail_ddmenu_btn01_pane_g

0xb803,	// (0x0006e331) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xb803,	// (0x0006e331) cmail_ddmenu_btn01_pane_t1

0xd080,	// (0x0006fbae) bg_button_pane_cp029_ParamLimits

0xd080,	// (0x0006fbae) bg_button_pane_cp029

0x8217,	// (0x0006ad45) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x8217,	// (0x0006ad45) cmail_ddmenu_btn02_pane_g1

0x8232,	// (0x0006ad60) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x8232,	// (0x0006ad60) cmail_ddmenu_btn02_pane_t1

0xa48d,	// (0x0006cfbb) bg_button_pane_cp031_ParamLimits

0xa48d,	// (0x0006cfbb) bg_button_pane_cp031

0x8217,	// (0x0006ad45) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x8217,	// (0x0006ad45) cmail_ddmenu_btn03_pane_g1

0x8232,	// (0x0006ad60) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x8232,	// (0x0006ad60) cmail_ddmenu_btn03_pane_t1

0xc462,	// (0x0006ef90) cell_dialer2_keypad_pane_t1_ParamLimits

0xee98,	// (0x000719c6) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xee98,	// (0x000719c6) cell_dialer2_keypad_pane_t1_copy1

0x7006,	// (0x00069b34) ncimui_group_button_pane

0xa48d,	// (0x0006cfbb) main_sp_fs_calendar_pane_ParamLimits

0x7d36,	// (0x0006a864) list_single_cmail_header_caption_pane_ParamLimits

0x7f14,	// (0x0006aa42) aid_recal_txt_sm_pane

0x9fdf,	// (0x0006cb0d) mian_recal_day_pane

0x7f33,	// (0x0006aa61) popup_sp_fs_cale_preview_window_ParamLimits

0xb819,	// (0x0006e347) list_recal_day_pane

0x8275,	// (0x0006ada3) list_single_recal_day_pane_ParamLimits

0x8275,	// (0x0006ada3) list_single_recal_day_pane

0xb840,	// (0x0006e36e) list_single_recal_day_pane_g1_ParamLimits

0xb840,	// (0x0006e36e) list_single_recal_day_pane_g1

0x8287,	// (0x0006adb5) list_single_recal_day_pane_g2_ParamLimits

0x8287,	// (0x0006adb5) list_single_recal_day_pane_g2

0x8293,	// (0x0006adc1) list_single_recal_day_pane_g3_ParamLimits

0x8293,	// (0x0006adc1) list_single_recal_day_pane_g3

0x829f,	// (0x0006adcd) list_single_recal_day_pane_g4_ParamLimits

0x829f,	// (0x0006adcd) list_single_recal_day_pane_g4

0x82ad,	// (0x0006addb) list_single_recal_day_pane_g5_ParamLimits

0x82ad,	// (0x0006addb) list_single_recal_day_pane_g5

0x82c3,	// (0x0006adf1) list_single_recal_day_pane_g6_ParamLimits

0x82c3,	// (0x0006adf1) list_single_recal_day_pane_g6

0x0004,

0xfc9e,	// (0x000727cc) list_single_recal_day_pane_g_ParamLimits

0xfc9e,	// (0x000727cc) list_single_recal_day_pane_g

0x82d7,	// (0x0006ae05) list_single_recal_day_pane_t1

0x82e9,	// (0x0006ae17) list_single_recal_day_pane_t2

0x0001,

0xfca9,	// (0x000727d7) list_single_recal_day_pane_t

0x82fb,	// (0x0006ae29) ncimui_query_button_pane_ParamLimits

0x82fb,	// (0x0006ae29) ncimui_query_button_pane

0x830b,	// (0x0006ae39) ncimui_query_button_pane_t1_ParamLimits

0x830b,	// (0x0006ae39) ncimui_query_button_pane_t1

0xb84c,	// (0x0006e37a) ncimui_query_button_pane_t2_ParamLimits

0xb84c,	// (0x0006e37a) ncimui_query_button_pane_t2

0x0001,

0xfcae,	// (0x000727dc) ncimui_query_button_pane_t_ParamLimits

0xfcae,	// (0x000727dc) ncimui_query_button_pane_t

0x831e,	// (0x0006ae4c) query_button_pane_ParamLimits

0x831e,	// (0x0006ae4c) query_button_pane

0x9fdf,	// (0x0006cb0d) bg_button_pane_cp0028

0xb85f,	// (0x0006e38d) query_button_pane_t1

0x31a4,	// (0x00065cd2) main_tport_pane_ParamLimits

0x7bb2,	// (0x0006a6e0) bg_popup_window_pane_cp01_ParamLimits

0x7bb2,	// (0x0006a6e0) bg_popup_window_pane_cp01

0x7bcb,	// (0x0006a6f9) heading_pane_cp08_ParamLimits

0x7bcb,	// (0x0006a6f9) heading_pane_cp08

0x7be1,	// (0x0006a70f) heading_pane_cp07_ParamLimits

0x7be1,	// (0x0006a70f) heading_pane_cp07

0x7cb8,	// (0x0006a7e6) cell_tport_appsw_pane_g2

0x0002,

0xfc03,	// (0x00072731) cell_tport_appsw_pane_g

0xd11d,	// (0x0006fc4b) input_candi_list_open_g1

0xca58,	// (0x0006f586) list_cale_time_pane_g6_ParamLimits

0xca58,	// (0x0006f586) list_cale_time_pane_g6

0x386b,	// (0x00066399) aid_size_touch_calib_1_ParamLimits

0x386b,	// (0x00066399) aid_size_touch_calib_1

0x387d,	// (0x000663ab) aid_size_touch_calib_2_ParamLimits

0x387d,	// (0x000663ab) aid_size_touch_calib_2

0x3895,	// (0x000663c3) aid_size_touch_calib_3_ParamLimits

0x3895,	// (0x000663c3) aid_size_touch_calib_3

0x38b3,	// (0x000663e1) aid_size_touch_calib_4_ParamLimits

0x38b3,	// (0x000663e1) aid_size_touch_calib_4

0x38cb,	// (0x000663f9) main_touch_calib_button_group_pane_ParamLimits

0x38cb,	// (0x000663f9) main_touch_calib_button_group_pane

0x38e3,	// (0x00066411) main_touch_calib_pane_g1_ParamLimits

0x38f5,	// (0x00066423) main_touch_calib_pane_g2_ParamLimits

0x3907,	// (0x00066435) main_touch_calib_pane_g3_ParamLimits

0x3919,	// (0x00066447) main_touch_calib_pane_g4_ParamLimits

0xf649,	// (0x00072177) main_touch_calib_pane_g_ParamLimits

0x392b,	// (0x00066459) main_touch_calib_pane_t1_ParamLimits

0x3945,	// (0x00066473) main_touch_calib_pane_t2_ParamLimits

0x395f,	// (0x0006648d) main_touch_calib_pane_t3_ParamLimits

0x3973,	// (0x000664a1) main_touch_calib_pane_t4_ParamLimits

0x3989,	// (0x000664b7) main_touch_calib_pane_t5_ParamLimits

0xf652,	// (0x00072180) main_touch_calib_pane_t_ParamLimits

0xec15,	// (0x00071743) list_single_fp_cale_pane_g3_ParamLimits

0xec15,	// (0x00071743) list_single_fp_cale_pane_g3

0xa05c,	// (0x0006cb8a) bg_button_pane_cp012_ParamLimits

0xa05c,	// (0x0006cb8a) bg_vkb2_func_pane_cp03_ParamLimits

0x5c69,	// (0x00068797) cell_vitu2_function_top_pane_g1_ParamLimits

0xa05c,	// (0x0006cb8a) bg_vkb2_func_pane_cp04_ParamLimits

0x6f91,	// (0x00069abf) main_ncimui_button_group_pane_ParamLimits

0x6f91,	// (0x00069abf) main_ncimui_button_group_pane

0x6ff1,	// (0x00069b1f) main_ncimui_pane_t3_ParamLimits

0x6ff1,	// (0x00069b1f) main_ncimui_pane_t3

0xb62a,	// (0x0006e158) phacti_button_group_pane

0xb7da,	// (0x0006e308) aid_size_list_single_double_ParamLimits

0x81d6,	// (0x0006ad04) popup_ezdial_listscroll_window_ParamLimits

0xb7e6,	// (0x0006e314) popup_number_entry_window_cp01_ParamLimits

0x8331,	// (0x0006ae5f) phacti_button_pane_ParamLimits

0x8331,	// (0x0006ae5f) phacti_button_pane

0x9fdf,	// (0x0006cb0d) bg_button_pane_cp14

0xb86d,	// (0x0006e39b) phacti_button_pane_t1

0x8342,	// (0x0006ae70) main_touch_calib_button_pane_ParamLimits

0x8342,	// (0x0006ae70) main_touch_calib_button_pane

0xc4b6,	// (0x0006efe4) bg_button_pane_cp18_ParamLimits

0xc4b6,	// (0x0006efe4) bg_button_pane_cp18

0xb87b,	// (0x0006e3a9) main_touch_calib_button_pane_t1_ParamLimits

0xb87b,	// (0x0006e3a9) main_touch_calib_button_pane_t1

0xb891,	// (0x0006e3bf) main_touch_calib_button_pane_t2_ParamLimits

0xb891,	// (0x0006e3bf) main_touch_calib_button_pane_t2

0x0001,

0xfcb3,	// (0x000727e1) main_touch_calib_button_pane_t_ParamLimits

0xfcb3,	// (0x000727e1) main_touch_calib_button_pane_t

0x9fdf,	// (0x0006cb0d) cell_ncimui_button_pane

0x9fdf,	// (0x0006cb0d) bg_button_pane_cp032

0xb8af,	// (0x0006e3dd) cell_ncimui_button_pane_t1

0xa9f6,	// (0x0006d524) image3_infobar_pane_ParamLimits

0xa9f6,	// (0x0006d524) image3_infobar_pane

0x7365,	// (0x00069e93) fs_bigclock_status_pane_ParamLimits

0x7365,	// (0x00069e93) fs_bigclock_status_pane

0x7372,	// (0x00069ea0) main_fs_bigclock_clock_pane_ParamLimits

0x7372,	// (0x00069ea0) main_fs_bigclock_clock_pane

0x73a4,	// (0x00069ed2) main_fs_bigclock_indi_pane_ParamLimits

0x73a4,	// (0x00069ed2) main_fs_bigclock_indi_pane

0x73e4,	// (0x00069f12) main_fs_bigclock_swipe_pane_ParamLimits

0x73e4,	// (0x00069f12) main_fs_bigclock_swipe_pane

0x9fdf,	// (0x0006cb0d) main_fs_clock_dumped_data

0x7430,	// (0x00069f5e) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x7430,	// (0x00069f5e) list_single_fs_bigclock_indicator_pane_g1

0x7449,	// (0x00069f77) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x7449,	// (0x00069f77) list_single_fs_bigclock_indicator_pane_g2

0x7463,	// (0x00069f91) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x7463,	// (0x00069f91) list_single_fs_bigclock_indicator_pane_g3

0x747d,	// (0x00069fab) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x747d,	// (0x00069fab) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfb5c,	// (0x0007268a) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfb5c,	// (0x0007268a) list_single_fs_bigclock_indicator_pane_g

0x74ac,	// (0x00069fda) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x74ac,	// (0x00069fda) list_single_fs_bigclock_indicator_pane_t1

0x74d4,	// (0x0006a002) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x74d4,	// (0x0006a002) list_single_fs_bigclock_indicator_pane_t2

0x74fc,	// (0x0006a02a) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x74fc,	// (0x0006a02a) list_single_fs_bigclock_indicator_pane_t3

0x7524,	// (0x0006a052) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x7524,	// (0x0006a052) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfb67,	// (0x00072695) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfb67,	// (0x00072695) list_single_fs_bigclock_indicator_pane_t

0xb8bd,	// (0x0006e3eb) image3_infobar_fav_pane_ParamLimits

0xb8bd,	// (0x0006e3eb) image3_infobar_fav_pane

0xb8cd,	// (0x0006e3fb) image3_infobar_loc_pane_ParamLimits

0xb8cd,	// (0x0006e3fb) image3_infobar_loc_pane

0xb8e3,	// (0x0006e411) image3_infobar_time_pane_ParamLimits

0xb8e3,	// (0x0006e411) image3_infobar_time_pane

0xc458,	// (0x0006ef86) image3_infobar_time_pane_g1

0xb8f3,	// (0x0006e421) image3_infobar_time_pane_t1

0xc458,	// (0x0006ef86) image3_infobar_loc_pane_g1

0xb901,	// (0x0006e42f) image3_infobar_loc_pane_g2

0x0001,

0xfcb8,	// (0x000727e6) image3_infobar_loc_pane_g

0xb909,	// (0x0006e437) image3_infobar_loc_pane_t1

0xc458,	// (0x0006ef86) image3_infobar_fav_pane_g1

0xb917,	// (0x0006e445) image3_infobar_fav_pane_g2

0x0001,

0xfcbd,	// (0x000727eb) image3_infobar_fav_pane_g

0xb91f,	// (0x0006e44d) fs_bigclock_status_battery_pane

0xb928,	// (0x0006e456) fs_bigclock_status_signal_pane

0xb931,	// (0x0006e45f) fs_bigclock_status_title_pane

0xb93a,	// (0x0006e468) fs_bigclock_status_signal_pane_g1

0xb943,	// (0x0006e471) fs_bigclock_status_signal_pane_g2

0x0001,

0xfcc2,	// (0x000727f0) fs_bigclock_status_signal_pane_g

0xb94b,	// (0x0006e479) fs_bigclock_status_battery_pane_g1

0xb954,	// (0x0006e482) fs_bigclock_status_battery_pane_g2

0x0001,

0xfcc7,	// (0x000727f5) fs_bigclock_status_battery_pane_g

0xb95c,	// (0x0006e48a) fs_bigclock_status_title_pane_t1

0x8357,	// (0x0006ae85) main_fs_bigclock_clock_pane_g1

0x8357,	// (0x0006ae85) main_fs_bigclock_clock_pane_g2

0x8357,	// (0x0006ae85) main_fs_bigclock_clock_pane_g3

0x8357,	// (0x0006ae85) main_fs_bigclock_clock_pane_g4

0x0003,

0xfccc,	// (0x000727fa) main_fs_bigclock_clock_pane_g

0x836f,	// (0x0006ae9d) main_fs_bigclock_clock_pane_t1

0x8387,	// (0x0006aeb5) main_fs_bigclock_clock_pane_t2

0x0001,

0xfcd5,	// (0x00072803) main_fs_bigclock_clock_pane_t

0xb96a,	// (0x0006e498) list_single_fs_bigclock_indicator_pane_ParamLimits

0xb96a,	// (0x0006e498) list_single_fs_bigclock_indicator_pane

0xb97b,	// (0x0006e4a9) list_single_fs_bigclock_pane_ParamLimits

0xb97b,	// (0x0006e4a9) list_single_fs_bigclock_pane

0xb9a1,	// (0x0006e4cf) main_fs_bigclock_indicator_pane_t1

0xb9b0,	// (0x0006e4de) list_single_fs_bigclock_pane_g1

0xb9b8,	// (0x0006e4e6) list_single_fs_bigclock_pane_t1

0xc458,	// (0x0006ef86) main_fs_bigclock_swipe_pane_g1

0xb9fb,	// (0x0006e529) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfce6,	// (0x00072814) main_fs_bigclock_swipe_pane_g

0xba03,	// (0x0006e531) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xba03,	// (0x0006e531) main_fs_bigclock_swipe_pane_t1

0x2186,	// (0x00064cb4) call_type_pane_ParamLimits

0x9fdf,	// (0x0006cb0d) main_btmg_pane

0x7fdb,	// (0x0006ab09) list_single_cale_mrui_row_pane_g2_ParamLimits

0x7fdb,	// (0x0006ab09) list_single_cale_mrui_row_pane_g2

0x0002,

0xfc59,	// (0x00072787) list_single_cale_mrui_row_pane_g_ParamLimits

0xfc59,	// (0x00072787) list_single_cale_mrui_row_pane_g

0x8263,	// (0x0006ad91) list_recal_vselct_arw_lo_pane

0xb838,	// (0x0006e366) list_recal_vselct_arw_up_pane

0x826b,	// (0x0006ad99) list_recal_vselct_pane

0x83e9,	// (0x0006af17) btmg_button_pane

0x83f3,	// (0x0006af21) main_btmg_pane_g1

0x9fdf,	// (0x0006cb0d) bg_button_pane_cp044

0xba20,	// (0x0006e54e) btmg_button_pane_t1

0xe4c9,	// (0x00070ff7) aid_listscroll_gen

0xa48d,	// (0x0006cfbb) main_cntbar_detail_pane

0xb55b,	// (0x0006e089) list_cmail_folder_pane

0xa522,	// (0x0006d050) sp_fs_scroll_pane_cp03_ParamLimits

0x83fd,	// (0x0006af2b) list_single_fs_dyc_pane_cp01_ParamLimits

0x83fd,	// (0x0006af2b) list_single_fs_dyc_pane_cp01

0xba2e,	// (0x0006e55c) aid_size_cmail_indent

0x8418,	// (0x0006af46) list_single_dyc_row_pane_cp01

0x8455,	// (0x0006af83) cntbar_detail_list_pane_ParamLimits

0x8455,	// (0x0006af83) cntbar_detail_list_pane

0x84a7,	// (0x0006afd5) main_cntbar_detail_cont_pane_ParamLimits

0x84a7,	// (0x0006afd5) main_cntbar_detail_cont_pane

0xa522,	// (0x0006d050) scroll_pane_cp032_ParamLimits

0xa522,	// (0x0006d050) scroll_pane_cp032

0x84bb,	// (0x0006afe9) cntbar_detail_list_event_pane_ParamLimits

0x84bb,	// (0x0006afe9) cntbar_detail_list_event_pane

0x8467,	// (0x0006af95) cntbar_detail_list_shct_pane

0xc90b,	// (0x0006f439) aid_list_gen

0xba37,	// (0x0006e565) aid_scroll

0xba40,	// (0x0006e56e) aid_size_touch_scroll_bar

0x84cb,	// (0x0006aff9) aid_list_double

0x84d4,	// (0x0006b002) aid_list_single

0x84cb,	// (0x0006aff9) aid_list_single_lg

0x84dd,	// (0x0006b00b) aid_list_z_g_a_sm

0x84e5,	// (0x0006b013) aid_list_z_g_d

0x84ed,	// (0x0006b01b) aid_txt_z_prm

0x84fb,	// (0x0006b029) aid_txt_z_prm_cp01

0x8509,	// (0x0006b037) aid_txt_z_sec

0x8517,	// (0x0006b045) main_cntbar_detail_cont_pane_g1_ParamLimits

0x8517,	// (0x0006b045) main_cntbar_detail_cont_pane_g1

0x852b,	// (0x0006b059) main_cntbar_detail_cont_pane_g2_ParamLimits

0x852b,	// (0x0006b059) main_cntbar_detail_cont_pane_g2

0x0001,

0xfceb,	// (0x00072819) main_cntbar_detail_cont_pane_g_ParamLimits

0xfceb,	// (0x00072819) main_cntbar_detail_cont_pane_g

0xba49,	// (0x0006e577) main_cntbar_detail_cont_pane_t1

0xba57,	// (0x0006e585) main_cntbar_detail_cont_pane_t2

0xba65,	// (0x0006e593) main_cntbar_detail_cont_pane_t3

0x0002,

0xfcf0,	// (0x0007281e) main_cntbar_detail_cont_pane_t

0x853b,	// (0x0006b069) cell_cntbar_detail_list_shct_pane_ParamLimits

0x853b,	// (0x0006b069) cell_cntbar_detail_list_shct_pane

0xba73,	// (0x0006e5a1) cntbar_detail_list_shct_pane_g1

0xba7c,	// (0x0006e5aa) cntbar_detail_list_shct_pane_g2

0x0001,

0xfcf7,	// (0x00072825) cntbar_detail_list_shct_pane_g

0x854d,	// (0x0006b07b) cntbar_detail_list_event_pane_g1_ParamLimits

0x854d,	// (0x0006b07b) cntbar_detail_list_event_pane_g1

0x8559,	// (0x0006b087) cntbar_detail_list_event_pane_g2_ParamLimits

0x8559,	// (0x0006b087) cntbar_detail_list_event_pane_g2

0x0005,

0xfcfc,	// (0x0007282a) cntbar_detail_list_event_pane_g_ParamLimits

0xfcfc,	// (0x0007282a) cntbar_detail_list_event_pane_g

0x85c7,	// (0x0006b0f5) cntbar_detail_list_event_pane_t1_ParamLimits

0x85c7,	// (0x0006b0f5) cntbar_detail_list_event_pane_t1

0x85dc,	// (0x0006b10a) cntbar_detail_list_event_pane_t2_ParamLimits

0x85dc,	// (0x0006b10a) cntbar_detail_list_event_pane_t2

0x0002,

0xfd09,	// (0x00072837) cntbar_detail_list_event_pane_t_ParamLimits

0xfd09,	// (0x00072837) cntbar_detail_list_event_pane_t

0xc458,	// (0x0006ef86) cell_cntbar_detail_list_shct_pane_g1

0x2520,	// (0x0006504e) navi_pane_mv_g3

0xa48d,	// (0x0006cfbb) main_cntbar_detail_pane_ParamLimits

0x9fdf,	// (0x0006cb0d) main_notif_wgt_pane

0xa774,	// (0x0006d2a2) aid_tch_main_mp4_pane_g4

0xa9ec,	// (0x0006d51a) popup_slider_window_cp02

0x8259,	// (0x0006ad87) list_recal_day_event_pane

0x8421,	// (0x0006af4f) cntbar_detail_btn_pane_ParamLimits

0x8421,	// (0x0006af4f) cntbar_detail_btn_pane

0x843a,	// (0x0006af68) cntbar_detail_btn_pane_cp01_ParamLimits

0x843a,	// (0x0006af68) cntbar_detail_btn_pane_cp01

0x8467,	// (0x0006af95) cntbar_detail_list_shct_pane_ParamLimits

0x8477,	// (0x0006afa5) cntbar_detail_pane_g1_ParamLimits

0x8477,	// (0x0006afa5) cntbar_detail_pane_g1

0x848b,	// (0x0006afb9) cntbar_detail_pane_t1_ParamLimits

0x848b,	// (0x0006afb9) cntbar_detail_pane_t1

0x8565,	// (0x0006b093) cntbar_detail_list_event_pane_g3_ParamLimits

0x8565,	// (0x0006b093) cntbar_detail_list_event_pane_g3

0x857d,	// (0x0006b0ab) cntbar_detail_list_event_pane_g4_ParamLimits

0x857d,	// (0x0006b0ab) cntbar_detail_list_event_pane_g4

0x8595,	// (0x0006b0c3) cntbar_detail_list_event_pane_g5_ParamLimits

0x8595,	// (0x0006b0c3) cntbar_detail_list_event_pane_g5

0x85ad,	// (0x0006b0db) cntbar_detail_list_event_pane_g6_ParamLimits

0x85ad,	// (0x0006b0db) cntbar_detail_list_event_pane_g6

0x85f1,	// (0x0006b11f) cntbar_detail_list_event_pane_t3_ParamLimits

0x85f1,	// (0x0006b11f) cntbar_detail_list_event_pane_t3

0x8603,	// (0x0006b131) popup_notif_wgt_window_ParamLimits

0x8603,	// (0x0006b131) popup_notif_wgt_window

0x861c,	// (0x0006b14a) popup_submenu_window_cp01_ParamLimits

0x861c,	// (0x0006b14a) popup_submenu_window_cp01

0xc693,	// (0x0006f1c1) bg_popup_window_pane_cp10

0xba85,	// (0x0006e5b3) listscroll_notif_wgt_pane

0xba97,	// (0x0006e5c5) list_notif_wgt_window

0xbaa0,	// (0x0006e5ce) scroll_pane_cp033

0x8630,	// (0x0006b15e) list_notif_wgt_row_pane_ParamLimits

0x8630,	// (0x0006b15e) list_notif_wgt_row_pane

0xbaa9,	// (0x0006e5d7) aid_size_list_notif_wgt_del

0xbab6,	// (0x0006e5e4) list_notif_wgt_row_pane_g1

0xbac2,	// (0x0006e5f0) list_notif_wgt_row_pane_g2

0xbad1,	// (0x0006e5ff) list_notif_wgt_row_pane_g3

0x0002,

0xfd10,	// (0x0007283e) list_notif_wgt_row_pane_g

0xbade,	// (0x0006e60c) list_notif_wgt_row_pane_t1

0xbaf4,	// (0x0006e622) list_notif_wgt_row_pane_t2

0xbb06,	// (0x0006e634) list_notif_wgt_row_pane_t3

0x0002,

0xfd17,	// (0x00072845) list_notif_wgt_row_pane_t

0x5d13,	// (0x00068841) list_recal_day_event_pane_g1

0xbb18,	// (0x0006e646) list_recal_day_event_pane_t1

0x9fdf,	// (0x0006cb0d) bg_button_pane_cp045

0x8640,	// (0x0006b16e) cntbar_detail_btn_pane_t1

0xd080,	// (0x0006fbae) main_callh_pane_ParamLimits

0xd080,	// (0x0006fbae) main_callh_pane

0x9fdf,	// (0x0006cb0d) main_coverflow0_pane

0x9fdf,	// (0x0006cb0d) main_wgtman_pane

0x7405,	// (0x00069f33) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x7405,	// (0x00069f33) main_fs_bigclock_unlock_btn_pane

0x7cb0,	// (0x0006a7de) bg_button_pane_cp16

0x7cc0,	// (0x0006a7ee) cell_tport_appsw_pane_g3

0x864e,	// (0x0006b17c) cf0_flow_pane_ParamLimits

0x864e,	// (0x0006b17c) cf0_flow_pane

0xbb27,	// (0x0006e655) listscroll_cf0_pane

0xbb32,	// (0x0006e660) main_cf0_pane_g1

0x8663,	// (0x0006b191) main_cf0_pane_t1_ParamLimits

0x8663,	// (0x0006b191) main_cf0_pane_t1

0x867a,	// (0x0006b1a8) main_cf0_pane_t2_ParamLimits

0x867a,	// (0x0006b1a8) main_cf0_pane_t2

0x0001,

0xfd23,	// (0x00072851) main_cf0_pane_t_ParamLimits

0xfd23,	// (0x00072851) main_cf0_pane_t

0xbb44,	// (0x0006e672) scroll_pane_cp11

0x8691,	// (0x0006b1bf) cf0_flow_pane_g1

0x869d,	// (0x0006b1cb) cf0_flow_pane_g2

0x0001,

0xfd28,	// (0x00072856) cf0_flow_pane_g

0x86a9,	// (0x0006b1d7) cf0_flow_pane_t1

0x9fdf,	// (0x0006cb0d) main_call6_pane

0x9fdf,	// (0x0006cb0d) main_calllock_pane

0x86bb,	// (0x0006b1e9) call6_btn_grp_pane_ParamLimits

0x86bb,	// (0x0006b1e9) call6_btn_grp_pane

0x86d5,	// (0x0006b203) call6_pane_g1_ParamLimits

0x86d5,	// (0x0006b203) call6_pane_g1

0x86ee,	// (0x0006b21c) popup_call6_1st_window_ParamLimits

0x86ee,	// (0x0006b21c) popup_call6_1st_window

0x8702,	// (0x0006b230) popup_call6_2nd_window_ParamLimits

0x8702,	// (0x0006b230) popup_call6_2nd_window

0x8716,	// (0x0006b244) cell_call6_btn_pane_ParamLimits

0x8716,	// (0x0006b244) cell_call6_btn_pane

0xc693,	// (0x0006f1c1) bg_popup_call2_in_pane_cp03

0xbb4f,	// (0x0006e67d) popup_call6_1st_window_g1

0xbb57,	// (0x0006e685) popup_call6_1st_window_g2

0xbb5f,	// (0x0006e68d) popup_call6_1st_window_g3

0x0002,

0xfd2d,	// (0x0007285b) popup_call6_1st_window_g

0xbb67,	// (0x0006e695) popup_call6_1st_window_t1

0xbb76,	// (0x0006e6a4) popup_call6_1st_window_t2

0xbb86,	// (0x0006e6b4) popup_call6_1st_window_t3

0x0002,

0xfd34,	// (0x00072862) popup_call6_1st_window_t

0xc693,	// (0x0006f1c1) bg_popup_call2_in_pane_cp04

0xbb96,	// (0x0006e6c4) popup_call6_2nd_window_g1

0xbb9e,	// (0x0006e6cc) popup_call6_2nd_window_g2

0xbba6,	// (0x0006e6d4) popup_call6_2nd_window_g3

0x0002,

0xfd3b,	// (0x00072869) popup_call6_2nd_window_g

0xbbae,	// (0x0006e6dc) popup_call6_2nd_window_t1

0xa06a,	// (0x0006cb98) bg_button_pane_cp15

0xbbbd,	// (0x0006e6eb) cell_call6_btn_pane_g1

0xbbc6,	// (0x0006e6f4) cell_call6_btn_pane_t1

0x872a,	// (0x0006b258) listscroll_wgtman_pane_ParamLimits

0x872a,	// (0x0006b258) listscroll_wgtman_pane

0x874b,	// (0x0006b279) wgtman_btn_pane_ParamLimits

0x874b,	// (0x0006b279) wgtman_btn_pane

0xce6d,	// (0x0006f99b) aid_scroll_copy1

0xbbd5,	// (0x0006e703) list_wgtman_pane

0x878e,	// (0x0006b2bc) wgtman_btn_pane_g1_ParamLimits

0x878e,	// (0x0006b2bc) wgtman_btn_pane_g1

0x87ba,	// (0x0006b2e8) wgtman_btn_pane_t1_ParamLimits

0x87ba,	// (0x0006b2e8) wgtman_btn_pane_t1

0xbbdf,	// (0x0006e70d) wgtman_btn_pane_t2_ParamLimits

0xbbdf,	// (0x0006e70d) wgtman_btn_pane_t2

0x0001,

0xfd42,	// (0x00072870) wgtman_btn_pane_t_ParamLimits

0xfd42,	// (0x00072870) wgtman_btn_pane_t

0x87f7,	// (0x0006b325) listrow_wgtman_pane_ParamLimits

0x87f7,	// (0x0006b325) listrow_wgtman_pane

0x880b,	// (0x0006b339) listrow_wgtman_pane_g1

0x8818,	// (0x0006b346) listrow_wgtman_pane_g2

0x0001,

0xfd47,	// (0x00072875) listrow_wgtman_pane_g

0x8836,	// (0x0006b364) listrow_wgtman_pane_t1

0x884e,	// (0x0006b37c) listrow_wgtman_pane_t2

0x0001,

0xfd4c,	// (0x0007287a) listrow_wgtman_pane_t

0x8874,	// (0x0006b3a2) wait_bar_pane_cp09

0xbbf6,	// (0x0006e724) main_calllock_btn_pane

0xbc00,	// (0x0006e72e) main_calllock_pane_g1

0x9fdf,	// (0x0006cb0d) bg_button_pane_cp17

0xbc0c,	// (0x0006e73a) main_calllock_btn_pane_g1

0xbc15,	// (0x0006e743) main_calllock_btn_pane_t1

0x9fdf,	// (0x0006cb0d) main_dialer3_pane

0x9fdf,	// (0x0006cb0d) main_fmrd2_pane

0xc458,	// (0x0006ef86) main_fs_bigclock_unlock_btn_pane_g1

0x888e,	// (0x0006b3bc) main_fs_bigclock_unlock_btn_pane_t1

0x889c,	// (0x0006b3ca) area_fmrd2_info_pane_ParamLimits

0x889c,	// (0x0006b3ca) area_fmrd2_info_pane

0x88ad,	// (0x0006b3db) area_fmrd2_visual_pane_ParamLimits

0x88ad,	// (0x0006b3db) area_fmrd2_visual_pane

0x88bb,	// (0x0006b3e9) fmrd2_indi_pane_ParamLimits

0x88bb,	// (0x0006b3e9) fmrd2_indi_pane

0x88c8,	// (0x0006b3f6) area_fmrd2_visual_pane_g1

0x88d0,	// (0x0006b3fe) area_fmrd2_visual_pane_t1

0x88e0,	// (0x0006b40e) area_fmrd2_visual_pane_t2

0x88f0,	// (0x0006b41e) area_fmrd2_visual_pane_t3

0x0002,

0xfd56,	// (0x00072884) area_fmrd2_visual_pane_t

0x8900,	// (0x0006b42e) area_fmrd2_info_pane_g1

0x8908,	// (0x0006b436) area_fmrd2_info_pane_t1

0x8918,	// (0x0006b446) area_fmrd2_info_pane_t2

0x8928,	// (0x0006b456) area_fmrd2_info_pane_t3

0x8938,	// (0x0006b466) area_fmrd2_info_pane_t4

0x0003,

0xfd5d,	// (0x0007288b) area_fmrd2_info_pane_t

0x8948,	// (0x0006b476) fmrd2_indi_pane_t1

0x8958,	// (0x0006b486) fmrd2_indi_pane_t2

0x8968,	// (0x0006b496) fmrd2_indi_pane_t3

0x0002,

0xfd66,	// (0x00072894) fmrd2_indi_pane_t

0x748e,	// (0x00069fbc) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x748e,	// (0x00069fbc) list_single_fs_bigclock_indicator_pane_g5

0x7543,	// (0x0006a071) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x7543,	// (0x0006a071) list_single_fs_bigclock_indicator_pane_t5

0x7f08,	// (0x0006aa36) aid_cell_bcale_month_pane_ParamLimits

0x7f08,	// (0x0006aa36) aid_cell_bcale_month_pane

0x7f08,	// (0x0006aa36) bcale_month_pane_ParamLimits

0x7f08,	// (0x0006aa36) bcale_month_pane

0xa703,	// (0x0006d231) bcale_preview_pane_ParamLimits

0xa703,	// (0x0006d231) bcale_preview_pane

0xb9b8,	// (0x0006e4e6) list_single_fs_bigclock_pane_t1_ParamLimits

0xb9d7,	// (0x0006e505) list_single_fs_bigclock_pane_t2_ParamLimits

0xb9d7,	// (0x0006e505) list_single_fs_bigclock_pane_t2

0x0001,

0xfce1,	// (0x0007280f) list_single_fs_bigclock_pane_t_ParamLimits

0xfce1,	// (0x0007280f) list_single_fs_bigclock_pane_t

0x8886,	// (0x0006b3b4) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfd51,	// (0x0007287f) main_fs_bigclock_unlock_btn_pane_g

0x8978,	// (0x0006b4a6) aid_dia3_key_size_ParamLimits

0x8978,	// (0x0006b4a6) aid_dia3_key_size

0x898c,	// (0x0006b4ba) aid_dia3_listrow_size_ParamLimits

0x898c,	// (0x0006b4ba) aid_dia3_listrow_size

0x89a6,	// (0x0006b4d4) dia3_keypad_fun_pane_ParamLimits

0x89a6,	// (0x0006b4d4) dia3_keypad_fun_pane

0x89c0,	// (0x0006b4ee) dia3_keypad_num_pane_ParamLimits

0x89c0,	// (0x0006b4ee) dia3_keypad_num_pane

0x89da,	// (0x0006b508) dia3_listscroll_pane_ParamLimits

0x89da,	// (0x0006b508) dia3_listscroll_pane

0x89f0,	// (0x0006b51e) dia3_numentry_pane_ParamLimits

0x89f0,	// (0x0006b51e) dia3_numentry_pane

0xbc24,	// (0x0006e752) dia3_list_pane

0x8a0a,	// (0x0006b538) scroll_pane_cp12

0x9fdf,	// (0x0006cb0d) bg_dia3_numentry_pane

0x8a15,	// (0x0006b543) dia3_numentry_pane_t1

0xebad,	// (0x000716db) cell_dia3_key_num_pane

0x8a24,	// (0x0006b552) cell_dia3_key0_fun_pane_ParamLimits

0x8a24,	// (0x0006b552) cell_dia3_key0_fun_pane

0x8a38,	// (0x0006b566) cell_dia3_key1_fun_pane_ParamLimits

0x8a38,	// (0x0006b566) cell_dia3_key1_fun_pane

0x8a4d,	// (0x0006b57b) dia3_listrow_pane

0xb0c1,	// (0x0006dbef) bg_dia3_numentry_pane_g1

0x9fdf,	// (0x0006cb0d) bg_button_pane_cp21

0x8a5f,	// (0x0006b58d) cell_dia3_key_num_pane_t1

0x8a6d,	// (0x0006b59b) cell_dia3_key_num_pane_t2

0x8a6d,	// (0x0006b59b) cell_dia3_key_num_pane_t3

0x8a6d,	// (0x0006b59b) cell_dia3_key_num_pane_t4

0x0003,

0xfd6d,	// (0x0007289b) cell_dia3_key_num_pane_t

0x9fdf,	// (0x0006cb0d) bg_button_pane_cp19

0x8a7c,	// (0x0006b5aa) cell_dia3_key0_fun_pane_g1

0x9fdf,	// (0x0006cb0d) bg_button_pane_cp20

0x8a84,	// (0x0006b5b2) cell_dia3_key1_fun_pane_g1

0xa703,	// (0x0006d231) area_left_week_number_pane

0xa703,	// (0x0006d231) area_top_day_name_pane

0xa703,	// (0x0006d231) frame_month_view_pane

0xa703,	// (0x0006d231) grid_month_view_pane

0xa703,	// (0x0006d231) cell_top_day_name_pane_ParamLimits

0xa703,	// (0x0006d231) cell_top_day_name_pane

0xa703,	// (0x0006d231) cell_area_left_week_number_pane_ParamLimits

0xa703,	// (0x0006d231) cell_area_left_week_number_pane

0xa703,	// (0x0006d231) cell_month_view_pane_ParamLimits

0xa703,	// (0x0006d231) cell_month_view_pane

0xa6f7,	// (0x0006d225) frm_month_g1

0xa6f7,	// (0x0006d225) frm_month_g2

0xa6f7,	// (0x0006d225) frm_month_g3

0xa6f7,	// (0x0006d225) frm_month_g4

0xa6f7,	// (0x0006d225) frm_month_g5

0xa6f7,	// (0x0006d225) frm_month_g6

0xa6f7,	// (0x0006d225) frm_month_g7

0xa6f7,	// (0x0006d225) frm_month_g8

0xa6f7,	// (0x0006d225) frm_month_g9

0xa6f7,	// (0x0006d225) frm_month_g10

0xa6f7,	// (0x0006d225) frm_month_g11

0xa6f7,	// (0x0006d225) frm_month_g12

0xa6f7,	// (0x0006d225) frm_month_g13

0xa6f7,	// (0x0006d225) frm_month_g14

0xa6f7,	// (0x0006d225) frm_month_g15

0xa6f7,	// (0x0006d225) frm_month_g16

0x000f,

0xfd76,	// (0x000728a4) frm_month_g

0xbc2e,	// (0x0006e75c) cell_top_day_name_pane_t1

0xa6f7,	// (0x0006d225) cell_area_left_week_number_pane_g1

0xbc2e,	// (0x0006e75c) cell_area_left_week_number_pane_t1

0xa6f7,	// (0x0006d225) cell_month_view_pane_g1

0xbc2e,	// (0x0006e75c) cell_month_view_pane_t1

0x9fdf,	// (0x0006cb0d) main_fps_pane

0xb489,	// (0x0006dfb7) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xb489,	// (0x0006dfb7) cmail_ddmenu_btn02_pane_cp1

0xb4a5,	// (0x0006dfd3) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xb4a5,	// (0x0006dfd3) cmail_ddmenu_btn02_pane_cp2

0x8226,	// (0x0006ad54) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x8226,	// (0x0006ad54) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfc94,	// (0x000727c2) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfc94,	// (0x000727c2) cmail_ddmenu_btn02_pane_g

0x8247,	// (0x0006ad75) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x8247,	// (0x0006ad75) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfc99,	// (0x000727c7) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfc99,	// (0x000727c7) cmail_ddmenu_btn02_pane_t

0x8a8c,	// (0x0006b5ba) fps_text_pane_ParamLimits

0x8a8c,	// (0x0006b5ba) fps_text_pane

0x8aa3,	// (0x0006b5d1) main_fps_pane_g1_ParamLimits

0x8aa3,	// (0x0006b5d1) main_fps_pane_g1

0x8abb,	// (0x0006b5e9) wait_bar_pane_cp010_ParamLimits

0x8abb,	// (0x0006b5e9) wait_bar_pane_cp010

0x8ace,	// (0x0006b5fc) fps_text_pane_t1_ParamLimits

0x8ace,	// (0x0006b5fc) fps_text_pane_t1

0xaa7a,	// (0x0006d5a8) cam4_image_uncrop_pane_g1

0xaa83,	// (0x0006d5b1) cam4_image_uncrop_pane_g2

0x4d8d,	// (0x000678bb) cam4_image_uncrop_pane_g3

0x4d96,	// (0x000678c4) cam4_image_uncrop_pane_g4

0x0003,

0xf7e0,	// (0x0007230e) cam4_image_uncrop_pane_g

0x8a4d,	// (0x0006b57b) dia3_listrow_pane_ParamLimits

0x9fdf,	// (0x0006cb0d) main_phob2_pane

0x7c5a,	// (0x0006a788) cell_tport_appsw_pane_cp02_ParamLimits

0x7c5a,	// (0x0006a788) cell_tport_appsw_pane_cp02

0x7c6e,	// (0x0006a79c) cell_tport_appsw_pane_cp03_ParamLimits

0x7c6e,	// (0x0006a79c) cell_tport_appsw_pane_cp03

0x9fdf,	// (0x0006cb0d) phob2_contact_card_pane

0x9fdf,	// (0x0006cb0d) phob2_listscroll_pane

0xbc40,	// (0x0006e76e) phob2_list_pane

0xbc48,	// (0x0006e776) scroll_pane_cp034

0x8ae6,	// (0x0006b614) phob2_cc_data_pane_ParamLimits

0x8ae6,	// (0x0006b614) phob2_cc_data_pane

0x8aff,	// (0x0006b62d) phob2_cc_listscroll_pane_ParamLimits

0x8aff,	// (0x0006b62d) phob2_cc_listscroll_pane

0x8b20,	// (0x0006b64e) list_double_large_graphic_phob2_pane_ParamLimits

0x8b20,	// (0x0006b64e) list_double_large_graphic_phob2_pane

0x8b41,	// (0x0006b66f) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x8b41,	// (0x0006b66f) list_double_large_graphic_phob2_pane_g1

0x8b53,	// (0x0006b681) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x8b53,	// (0x0006b681) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfd97,	// (0x000728c5) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfd97,	// (0x000728c5) list_double_large_graphic_phob2_pane_g

0x8b87,	// (0x0006b6b5) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x8b87,	// (0x0006b6b5) list_double_large_graphic_phob2_pane_t1

0x8bab,	// (0x0006b6d9) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x8bab,	// (0x0006b6d9) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfda0,	// (0x000728ce) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfda0,	// (0x000728ce) list_double_large_graphic_phob2_pane_t

0xa48d,	// (0x0006cfbb) list_highlight_pane_cp024

0x8bcc,	// (0x0006b6fa) phob2_cc_button_pane

0x8bd8,	// (0x0006b706) phob2_cc_data_pane_g1_ParamLimits

0x8bd8,	// (0x0006b706) phob2_cc_data_pane_g1

0x8bf0,	// (0x0006b71e) phob2_cc_data_pane_g2_ParamLimits

0x8bf0,	// (0x0006b71e) phob2_cc_data_pane_g2

0x0001,

0xfda5,	// (0x000728d3) phob2_cc_data_pane_g_ParamLimits

0xfda5,	// (0x000728d3) phob2_cc_data_pane_g

0x8c08,	// (0x0006b736) phob2_cc_data_pane_t1_ParamLimits

0x8c08,	// (0x0006b736) phob2_cc_data_pane_t1

0x8c36,	// (0x0006b764) phob2_cc_data_pane_t2_ParamLimits

0x8c36,	// (0x0006b764) phob2_cc_data_pane_t2

0x8c68,	// (0x0006b796) phob2_cc_data_pane_t3_ParamLimits

0x8c68,	// (0x0006b796) phob2_cc_data_pane_t3

0x0002,

0xfdaa,	// (0x000728d8) phob2_cc_data_pane_t_ParamLimits

0xfdaa,	// (0x000728d8) phob2_cc_data_pane_t

0xbc50,	// (0x0006e77e) phob2_cc_list_pane_ParamLimits

0xbc50,	// (0x0006e77e) phob2_cc_list_pane

0xabc4,	// (0x0006d6f2) scroll_pane_cp035_ParamLimits

0xabc4,	// (0x0006d6f2) scroll_pane_cp035

0xa48d,	// (0x0006cfbb) bg_button_pane_cp033

0x8c98,	// (0x0006b7c6) phob2_cc_button_pane_g1

0x8ca4,	// (0x0006b7d2) phob2_cc_button_pane_t1

0x8cb9,	// (0x0006b7e7) phob2_cc_button_pane_t2

0x0001,

0xfdb1,	// (0x000728df) phob2_cc_button_pane_t

0x8ccb,	// (0x0006b7f9) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x8ccb,	// (0x0006b7f9) list_double_large_graphic_phob2_cc_pane

0x8d02,	// (0x0006b830) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x8d02,	// (0x0006b830) list_double_large_graphic_phob2_cc_pane_g1

0x8d0e,	// (0x0006b83c) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x8d0e,	// (0x0006b83c) list_double_large_graphic_phob2_cc_pane_g2

0x8d1a,	// (0x0006b848) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x8d1a,	// (0x0006b848) list_double_large_graphic_phob2_cc_pane_g3

0x8d26,	// (0x0006b854) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x8d26,	// (0x0006b854) list_double_large_graphic_phob2_cc_pane_g4

0x8d32,	// (0x0006b860) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x8d32,	// (0x0006b860) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfdb6,	// (0x000728e4) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfdb6,	// (0x000728e4) list_double_large_graphic_phob2_cc_pane_g

0x8d3e,	// (0x0006b86c) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x8d3e,	// (0x0006b86c) list_double_large_graphic_phob2_cc_pane_t1

0x8d67,	// (0x0006b895) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x8d67,	// (0x0006b895) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfdc1,	// (0x000728ef) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfdc1,	// (0x000728ef) list_double_large_graphic_phob2_cc_pane_t

0xbc5c,	// (0x0006e78a) list_highlight_pane_cp025_ParamLimits

0xbc5c,	// (0x0006e78a) list_highlight_pane_cp025

0xa48d,	// (0x0006cfbb) bg_button_pane_cp033_ParamLimits

0x8c98,	// (0x0006b7c6) phob2_cc_button_pane_g1_ParamLimits

0x8ca4,	// (0x0006b7d2) phob2_cc_button_pane_t1_ParamLimits

0x8cb9,	// (0x0006b7e7) phob2_cc_button_pane_t2_ParamLimits

0xfdb1,	// (0x000728df) phob2_cc_button_pane_t_ParamLimits

0x04e4,	// (0x00063012) popup_wgtman_window

0x5715,	// (0x00068243) scroll_pane_cp038

0x8770,	// (0x0006b29e) wgtman_btn_pane_cp_01_ParamLimits

0x8770,	// (0x0006b29e) wgtman_btn_pane_cp_01

0xbc6a,	// (0x0006e798) wgtman_content_pane

0xbc73,	// (0x0006e7a1) wgtman_heading_pane

0x9fdf,	// (0x0006cb0d) bg_heading_pane_cp02

0xbc7c,	// (0x0006e7aa) wgtman_heading_pane_g1

0xbc84,	// (0x0006e7b2) wgtman_heading_pane_t1

0xbc92,	// (0x0006e7c0) scroll_pane_cp036

0xbc9a,	// (0x0006e7c8) wgtman_list_pane

0xb391,	// (0x0006debf) wgtman_list_pane_t1_ParamLimits

0xb391,	// (0x0006debf) wgtman_list_pane_t1

0xaa64,	// (0x0006d592) cam4_grid_pane

0x5e44,	// (0x00068972) bg_button_pane_cp015_ParamLimits

0x5e5b,	// (0x00068989) bg_button_pane_cp016_ParamLimits

0x5e67,	// (0x00068995) bg_button_pane_cp017_ParamLimits

0x5ece,	// (0x000689fc) popup_vitu2_query_window_g3_ParamLimits

0x5ece,	// (0x000689fc) popup_vitu2_query_window_g3

0x5f71,	// (0x00068a9f) popup_vitu2_query_window_t6_ParamLimits

0x5f71,	// (0x00068a9f) popup_vitu2_query_window_t6

0x5f9c,	// (0x00068aca) popup_vitu2_query_window_t7_ParamLimits

0x5f9c,	// (0x00068aca) popup_vitu2_query_window_t7

0xaa7a,	// (0x0006d5a8) cam4_grid_pane_g1

0xaa83,	// (0x0006d5b1) cam4_grid_pane_g2

0xbca2,	// (0x0006e7d0) cam4_grid_pane_g3

0xbcab,	// (0x0006e7d9) cam4_grid_pane_g4

0x0003,

0xfdc6,	// (0x000728f4) cam4_grid_pane_g

0x1047,	// (0x00063b75) aid_placing_vt_slider_lsc_ParamLimits

0x1324,	// (0x00063e52) vidtel_button_pane_ParamLimits

0x1324,	// (0x00063e52) vidtel_button_pane

0x9fdf,	// (0x0006cb0d) bg_button_pane_cp034

0xbcb6,	// (0x0006e7e4) vidtel_button_pane_g1

0xbcbe,	// (0x0006e7ec) vidtel_button_pane_t1

0x5b2a,	// (0x00068658) aid_size_vtel_slider_touch

0xabc4,	// (0x0006d6f2) scroll_pane_cp039

0x716f,	// (0x00069c9d) ncim_query_button_pane_cp01_ParamLimits

0x718e,	// (0x00069cbc) ncimui_query_pane_g1_ParamLimits

0xa48d,	// (0x0006cfbb) input_focus_pane_cp012_ParamLimits

0xb0ff,	// (0x0006dc2d) ncim_query_entry_pane_t1_ParamLimits

0xabc4,	// (0x0006d6f2) scroll_pane_cp039_ParamLimits

0x2492,	// (0x00064fc0) navi_pane_bcale_mc_g1

0x249a,	// (0x00064fc8) navi_pane_bcale_mc_t1

0xb4db,	// (0x0006e009) main_sp_fs_email_pane_g1

0xb4e7,	// (0x0006e015) main_sp_fs_email_pane_g2

0x0001,

0xfbcc,	// (0x000726fa) main_sp_fs_email_pane_g

0xb700,	// (0x0006e22e) list_single_cale_mrui_row_pane_g3_ParamLimits

0xb700,	// (0x0006e22e) list_single_cale_mrui_row_pane_g3

0x82b9,	// (0x0006ade7) list_single_recal_day_pane_g5_event_pane

0x82cf,	// (0x0006adfd) list_single_recal_day_pane_g7

0xbcd4,	// (0x0006e802) list_recal_day_event_pane_cp01

0xbcdd,	// (0x0006e80b) list_recal_vselct_arw_lo_pane_cp01

0xbce5,	// (0x0006e813) list_recal_vselct_arw_up_pane_cp01

0xbced,	// (0x0006e81b) list_recal_vselct_pane_cp01

0x5d13,	// (0x00068841) list_recal_day_event_pane_cp01_g1

0x8d90,	// (0x0006b8be) list_recal_day_event_pane_cp01_t1

0x82d7,	// (0x0006ae05) list_single_recal_day_pane_t1_ParamLimits

0x82e9,	// (0x0006ae17) list_single_recal_day_pane_t2_ParamLimits

0xfca9,	// (0x000727d7) list_single_recal_day_pane_t_ParamLimits

0xc39f,	// (0x0006eecd) bg_notes_pane_ParamLimits

0xc494,	// (0x0006efc2) list_notes_pane_ParamLimits

0x05fc,	// (0x0006312a) scroll_pane_cp06_ParamLimits

0xc4b6,	// (0x0006efe4) main_notes_pane_ParamLimits

0xa48d,	// (0x0006cfbb) main_welc_pane

0x8de6,	// (0x0006b914) main_welc_body_pane_ParamLimits

0x8de6,	// (0x0006b914) main_welc_body_pane

0x8e05,	// (0x0006b933) main_welc_opti_pane_ParamLimits

0x8e05,	// (0x0006b933) main_welc_opti_pane

0x8e7a,	// (0x0006b9a8) main_welc_pane_t1_ParamLimits

0x8e7a,	// (0x0006b9a8) main_welc_pane_t1

0x90bd,	// (0x0006bbeb) main_welc_body_row_pane_ParamLimits

0x90bd,	// (0x0006bbeb) main_welc_body_row_pane

0xc40c,	// (0x0006ef3a) main_welc_opti_row_pane_ParamLimits

0xc40c,	// (0x0006ef3a) main_welc_opti_row_pane

0xbcff,	// (0x0006e82d) main_welc_opti_row_pane_g1

0x90d1,	// (0x0006bbff) main_welc_opti_row_pane_t1

0xbd07,	// (0x0006e835) main_welc_body_row_pane_t1

0xba8f,	// (0x0006e5bd) popup_notif_wgt_heading_pane

0xbaa9,	// (0x0006e5d7) aid_size_list_notif_wgt_del_ParamLimits

0xbab6,	// (0x0006e5e4) list_notif_wgt_row_pane_g1_ParamLimits

0xbac2,	// (0x0006e5f0) list_notif_wgt_row_pane_g2_ParamLimits

0xbad1,	// (0x0006e5ff) list_notif_wgt_row_pane_g3_ParamLimits

0xfd10,	// (0x0007283e) list_notif_wgt_row_pane_g_ParamLimits

0xbade,	// (0x0006e60c) list_notif_wgt_row_pane_t1_ParamLimits

0xbaf4,	// (0x0006e622) list_notif_wgt_row_pane_t2_ParamLimits

0xbb06,	// (0x0006e634) list_notif_wgt_row_pane_t3_ParamLimits

0xfd17,	// (0x00072845) list_notif_wgt_row_pane_t_ParamLimits

0x880b,	// (0x0006b339) listrow_wgtman_pane_g1_ParamLimits

0x8818,	// (0x0006b346) listrow_wgtman_pane_g2_ParamLimits

0xfd47,	// (0x00072875) listrow_wgtman_pane_g_ParamLimits

0x8836,	// (0x0006b364) listrow_wgtman_pane_t1_ParamLimits

0x884e,	// (0x0006b37c) listrow_wgtman_pane_t2_ParamLimits

0xfd4c,	// (0x0007287a) listrow_wgtman_pane_t_ParamLimits

0x8874,	// (0x0006b3a2) wait_bar_pane_cp09_ParamLimits

0x9fdf,	// (0x0006cb0d) bg_popup_heading_pane_cp02

0xbd16,	// (0x0006e844) popup_notif_wgt_heading_pane_g1

0xbd1e,	// (0x0006e84c) popup_notif_wgt_heading_pane_t1

0x9fdf,	// (0x0006cb0d) main_vids_pane

0x9fdf,	// (0x0006cb0d) vids_listscroll_pane

0x90e0,	// (0x0006bc0e) scroll_pane_cp040

0x9fdf,	// (0x0006cb0d) vids_list_pane

0x90eb,	// (0x0006bc19) vids_list_double_pane_ParamLimits

0x90eb,	// (0x0006bc19) vids_list_double_pane

0x90fe,	// (0x0006bc2c) vids_list_double_pane_g1

0x9107,	// (0x0006bc35) vids_list_double_pane_t1

0x9117,	// (0x0006bc45) vids_list_double_pane_t2

0x0001,

0xfde5,	// (0x00072913) vids_list_double_pane_t

0xa05c,	// (0x0006cb8a) main_ncimui_pane_ParamLimits

0x6fa5,	// (0x00069ad3) main_ncimui_pane_g1_ParamLimits

0x6fb1,	// (0x00069adf) main_ncimui_pane_g2_ParamLimits

0x6fb1,	// (0x00069adf) main_ncimui_pane_g2

0x0001,

0xfad2,	// (0x00072600) main_ncimui_pane_g_ParamLimits

0xfad2,	// (0x00072600) main_ncimui_pane_g

0x8e24,	// (0x0006b952) main_welc_pane_g1_ParamLimits

0x8e24,	// (0x0006b952) main_welc_pane_g1

0x8e39,	// (0x0006b967) main_welc_pane_g2_ParamLimits

0x8e39,	// (0x0006b967) main_welc_pane_g2

0x0003,

0xfdcf,	// (0x000728fd) main_welc_pane_g_ParamLimits

0xfdcf,	// (0x000728fd) main_welc_pane_g

0xc39f,	// (0x0006eecd) listscroll_mce_pane_ParamLimits

0x2572,	// (0x000650a0) wait_bar_pane_cp10

0xe4d1,	// (0x00070fff) main_cale_day_pane_ParamLimits

0xe4d1,	// (0x00070fff) main_cale_week_pane_ParamLimits

0xc39f,	// (0x0006eecd) main_messa_pane_ParamLimits

0x41b6,	// (0x00066ce4) main_clock2_btn_pane_ParamLimits

0x41b6,	// (0x00066ce4) main_clock2_btn_pane

0xec8f,	// (0x000717bd) main_clock2_btn_pane_cp01_ParamLimits

0xec8f,	// (0x000717bd) main_clock2_btn_pane_cp01

0xb6df,	// (0x0006e20d) list_cale_mrui_pane_ParamLimits

0xbb3c,	// (0x0006e66a) main_cf0_pane_g2

0x0001,

0xfd1e,	// (0x0007284c) main_cf0_pane_g

0xa703,	// (0x0006d231) area_left_week_number_pane_ParamLimits

0xa703,	// (0x0006d231) area_top_day_name_pane_ParamLimits

0xa703,	// (0x0006d231) frame_month_view_pane_ParamLimits

0xa703,	// (0x0006d231) grid_month_view_pane_ParamLimits

0xa6f7,	// (0x0006d225) frm_month_g1_ParamLimits

0xa6f7,	// (0x0006d225) frm_month_g2_ParamLimits

0xa6f7,	// (0x0006d225) frm_month_g3_ParamLimits

0xa6f7,	// (0x0006d225) frm_month_g4_ParamLimits

0xa6f7,	// (0x0006d225) frm_month_g5_ParamLimits

0xa6f7,	// (0x0006d225) frm_month_g6_ParamLimits

0xa6f7,	// (0x0006d225) frm_month_g7_ParamLimits

0xa6f7,	// (0x0006d225) frm_month_g8_ParamLimits

0xa6f7,	// (0x0006d225) frm_month_g9_ParamLimits

0xa6f7,	// (0x0006d225) frm_month_g10_ParamLimits

0xa6f7,	// (0x0006d225) frm_month_g11_ParamLimits

0xa6f7,	// (0x0006d225) frm_month_g12_ParamLimits

0xa6f7,	// (0x0006d225) frm_month_g13_ParamLimits

0xa6f7,	// (0x0006d225) frm_month_g14_ParamLimits

0xa6f7,	// (0x0006d225) frm_month_g15_ParamLimits

0xa6f7,	// (0x0006d225) frm_month_g16_ParamLimits

0xfd76,	// (0x000728a4) frm_month_g_ParamLimits

0xbc2e,	// (0x0006e75c) cell_top_day_name_pane_t1_ParamLimits

0xa6f7,	// (0x0006d225) cell_area_left_week_number_pane_g1_ParamLimits

0xbc2e,	// (0x0006e75c) cell_area_left_week_number_pane_t1_ParamLimits

0xa6f7,	// (0x0006d225) cell_month_view_pane_g1_ParamLimits

0xbc2e,	// (0x0006e75c) cell_month_view_pane_t1_ParamLimits

0xc397,	// (0x0006eec5) main_clock2_btn_pane_g1

0xbd2c,	// (0x0006e85a) main_clock2_btn_pane_t1

0xa48d,	// (0x0006cfbb) listscroll_cmail_pane_ParamLimits

0xb4db,	// (0x0006e009) main_sp_fs_email_pane_g1_ParamLimits

0xb4e7,	// (0x0006e015) main_sp_fs_email_pane_g2_ParamLimits

0xfbcc,	// (0x000726fa) main_sp_fs_email_pane_g_ParamLimits

0xb819,	// (0x0006e347) list_recal_day_pane_ParamLimits

0xb82a,	// (0x0006e358) mian_recal_day_pane_t1

0x7a3f,	// (0x0006a56d) list_single_dyc_row_text_pane_t4_ParamLimits

0x7a3f,	// (0x0006a56d) list_single_dyc_row_text_pane_t4

0x7a88,	// (0x0006a5b6) list_single_dyc_row_text_pane_t5_ParamLimits

0x7a88,	// (0x0006a5b6) list_single_dyc_row_text_pane_t5

0x7afe,	// (0x0006a62c) list_single_dyc_row_text_pane_t6_ParamLimits

0x7afe,	// (0x0006a62c) list_single_dyc_row_text_pane_t6

0x20e1,	// (0x00064c0f) aid_mgn_list_cale_time_pane

0xa05c,	// (0x0006cb8a) main_gallery2_pane_ParamLimits

0xeca3,	// (0x000717d1) main_clock2_pane_cp01_t1

0xecb1,	// (0x000717df) main_clock2_pane_cp01_t3

0x0001,

0xf6bc,	// (0x000721ea) main_clock2_pane_cp01_t

0x0a5f,	// (0x0006358d) cale_week_scroll_pane_g16_ParamLimits

0x0a5f,	// (0x0006358d) cale_week_scroll_pane_g16

0xc693,	// (0x0006f1c1) vorec_slider_pane

0xbcbe,	// (0x0006e7ec) vidtel_button_pane_t1_ParamLimits

0x8357,	// (0x0006ae85) main_fs_bigclock_clock_pane_g1_ParamLimits

0x8357,	// (0x0006ae85) main_fs_bigclock_clock_pane_g2_ParamLimits

0x8357,	// (0x0006ae85) main_fs_bigclock_clock_pane_g3_ParamLimits

0x8357,	// (0x0006ae85) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfccc,	// (0x000727fa) main_fs_bigclock_clock_pane_g_ParamLimits

0x836f,	// (0x0006ae9d) main_fs_bigclock_clock_pane_t1_ParamLimits

0x8387,	// (0x0006aeb5) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfcd5,	// (0x00072803) main_fs_bigclock_clock_pane_t_ParamLimits

0x3a4b,	// (0x00066579) main_mup3_lyrics_pane_ParamLimits

0x3a4b,	// (0x00066579) main_mup3_lyrics_pane

0x913f,	// (0x0006bc6d) main_mup3_lyrics_pane_t1_ParamLimits

0x913f,	// (0x0006bc6d) main_mup3_lyrics_pane_t1

0xa75e,	// (0x0006d28c) aid_main_mp4_pane_t1_area

0xa768,	// (0x0006d296) aid_main_mp4_pane_t2_area

0xa812,	// (0x0006d340) main_mp4_pane_g7_ParamLimits

0xa812,	// (0x0006d340) main_mp4_pane_g7

0xa81e,	// (0x0006d34c) main_mp4_pane_g8_ParamLimits

0xa81e,	// (0x0006d34c) main_mp4_pane_g8

0x4b32,	// (0x00067660) aid_call6_pane_g1_size

0x8cea,	// (0x0006b818) list_double_large_graphic_phob2_other_pane_ParamLimits

0x8cea,	// (0x0006b818) list_double_large_graphic_phob2_other_pane

0xc5b7,	// (0x0006f0e5) list_double_large_graphic_phob2_other_pane_g1

0x9fdf,	// (0x0006cb0d) list_highlight_pane_cp026

0xa48d,	// (0x0006cfbb) main_welc_pane_ParamLimits

0x77f2,	// (0x0006a320) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0x77f2,	// (0x0006a320) main_sp_fs_ctrlbar_pane_g3

0x780c,	// (0x0006a33a) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0x780c,	// (0x0006a33a) main_sp_fs_ctrlbar_pane_g4

0x7840,	// (0x0006a36e) toolbar2_fixed_button_pane_cp01

0x784b,	// (0x0006a379) toolbar2_fixed_button_pane_cp02

0x7858,	// (0x0006a386) toolbar2_fixed_button_pane_cp03

0x8dc0,	// (0x0006b8ee) list_welc_entry_pane_ParamLimits

0x8dc0,	// (0x0006b8ee) list_welc_entry_pane

0x8e4e,	// (0x0006b97c) main_welc_pane_g3_ParamLimits

0x8e4e,	// (0x0006b97c) main_welc_pane_g3

0x8e9c,	// (0x0006b9ca) main_welc_pane_t2_ParamLimits

0x8e9c,	// (0x0006b9ca) main_welc_pane_t2

0x8ebf,	// (0x0006b9ed) main_welc_pane_t3_ParamLimits

0x8ebf,	// (0x0006b9ed) main_welc_pane_t3

0x0005,

0xfdd8,	// (0x00072906) main_welc_pane_t_ParamLimits

0xfdd8,	// (0x00072906) main_welc_pane_t

0x900c,	// (0x0006bb3a) welc_button_pane_ParamLimits

0x900c,	// (0x0006bb3a) welc_button_pane

0x90a5,	// (0x0006bbd3) welc_service_logo_pane_ParamLimits

0x90a5,	// (0x0006bbd3) welc_service_logo_pane

0x915a,	// (0x0006bc88) list_single_welc_entry_pane_ParamLimits

0x915a,	// (0x0006bc88) list_single_welc_entry_pane

0x916b,	// (0x0006bc99) list_single_welc_entry_pane_g1

0x9173,	// (0x0006bca1) list_single_welc_entry_pane_t1

0x9181,	// (0x0006bcaf) list_single_welc_entry_pane_t2

0x0001,

0xfdea,	// (0x00072918) list_single_welc_entry_pane_t

0x9fdf,	// (0x0006cb0d) bg_button_pane_cp035

0xbd3a,	// (0x0006e868) welc_button_pane_t1

0x918f,	// (0x0006bcbd) welc_service_logo_pane_g1

0x9198,	// (0x0006bcc6) welc_service_logo_pane_g2

0x0001,

0xfdef,	// (0x0007291d) welc_service_logo_pane_g

0xa06a,	// (0x0006cb98) main_int_radio_pane

0xaf9d,	// (0x0006dacb) list_single_fs_dyc_pane_g1

0x8b62,	// (0x0006b690) list_double_large_graphic_phob2_pane_g3_ParamLimits

0x8b62,	// (0x0006b690) list_double_large_graphic_phob2_pane_g3

0x8b74,	// (0x0006b6a2) list_double_large_graphic_phob2_pane_g4_ParamLimits

0x8b74,	// (0x0006b6a2) list_double_large_graphic_phob2_pane_g4

0x91a1,	// (0x0006bccf) main_int_radio1_pane_ParamLimits

0x91a1,	// (0x0006bccf) main_int_radio1_pane

0xbd48,	// (0x0006e876) find_pane_cp02

0x91be,	// (0x0006bcec) input_focus_pane_cp12_ParamLimits

0x91be,	// (0x0006bcec) input_focus_pane_cp12

0x91ce,	// (0x0006bcfc) input_focus_pane_cp13_ParamLimits

0x91ce,	// (0x0006bcfc) input_focus_pane_cp13

0x91e2,	// (0x0006bd10) input_focus_pane_cp14_ParamLimits

0x91e2,	// (0x0006bd10) input_focus_pane_cp14

0xbd51,	// (0x0006e87f) int_radio1_listscroll_pane

0x91f6,	// (0x0006bd24) main_int_radio1_pane_g1_ParamLimits

0x91f6,	// (0x0006bd24) main_int_radio1_pane_g1

0x920c,	// (0x0006bd3a) main_int_radio1_pane_t1_ParamLimits

0x920c,	// (0x0006bd3a) main_int_radio1_pane_t1

0x9225,	// (0x0006bd53) main_int_radio1_pane_t2_ParamLimits

0x9225,	// (0x0006bd53) main_int_radio1_pane_t2

0x9240,	// (0x0006bd6e) main_int_radio1_pane_t3_ParamLimits

0x9240,	// (0x0006bd6e) main_int_radio1_pane_t3

0x925b,	// (0x0006bd89) main_int_radio1_pane_t4_ParamLimits

0x925b,	// (0x0006bd89) main_int_radio1_pane_t4

0xbd5b,	// (0x0006e889) main_int_radio1_pane_t5_ParamLimits

0xbd5b,	// (0x0006e889) main_int_radio1_pane_t5

0x926d,	// (0x0006bd9b) main_int_radio1_pane_t6_ParamLimits

0x926d,	// (0x0006bd9b) main_int_radio1_pane_t6

0x9282,	// (0x0006bdb0) main_int_radio1_pane_t7_ParamLimits

0x9282,	// (0x0006bdb0) main_int_radio1_pane_t7

0x9297,	// (0x0006bdc5) main_int_radio1_pane_t8_ParamLimits

0x9297,	// (0x0006bdc5) main_int_radio1_pane_t8

0x92b4,	// (0x0006bde2) main_int_radio1_pane_t9_ParamLimits

0x92b4,	// (0x0006bde2) main_int_radio1_pane_t9

0x92c6,	// (0x0006bdf4) main_int_radio1_pane_t10_ParamLimits

0x92c6,	// (0x0006bdf4) main_int_radio1_pane_t10

0x92ec,	// (0x0006be1a) main_int_radio1_pane_t11_ParamLimits

0x92ec,	// (0x0006be1a) main_int_radio1_pane_t11

0x9312,	// (0x0006be40) main_int_radio1_pane_t12_ParamLimits

0x9312,	// (0x0006be40) main_int_radio1_pane_t12

0x000b,

0xfdf4,	// (0x00072922) main_int_radio1_pane_t_ParamLimits

0xfdf4,	// (0x00072922) main_int_radio1_pane_t

0xbc40,	// (0x0006e76e) int_radio_list_pane

0xbc48,	// (0x0006e776) scroll_pane_cp037

0xbd6d,	// (0x0006e89b) list_double_large_graphic_int_radio_pane_ParamLimits

0xbd6d,	// (0x0006e89b) list_double_large_graphic_int_radio_pane

0xbd81,	// (0x0006e8af) list_double_large_graphic_int_radio_pane_g1

0x9324,	// (0x0006be52) list_double_large_graphic_int_radio_pane_t1

0x9332,	// (0x0006be60) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfe0d,	// (0x0007293b) list_double_large_graphic_int_radio_pane_t

0x9fdf,	// (0x0006cb0d) list_highlight_pane_cp027

0xbcf7,	// (0x0006e825) main_button_pane_4

0x8e62,	// (0x0006b990) main_welc_pane_g4_ParamLimits

0x8e62,	// (0x0006b990) main_welc_pane_g4

0x8ee2,	// (0x0006ba10) main_welc_pane_t4_ParamLimits

0x8ee2,	// (0x0006ba10) main_welc_pane_t4

0x8f05,	// (0x0006ba33) main_welc_pane_t5_ParamLimits

0x8f05,	// (0x0006ba33) main_welc_pane_t5

0x8f44,	// (0x0006ba72) main_welc_pane_t6_ParamLimits

0x8f44,	// (0x0006ba72) main_welc_pane_t6

0x9020,	// (0x0006bb4e) welc_button_pane_2_ParamLimits

0x9020,	// (0x0006bb4e) welc_button_pane_2

0x9047,	// (0x0006bb75) welc_button_pane_3_ParamLimits

0x9047,	// (0x0006bb75) welc_button_pane_3

0xbcf7,	// (0x0006e825) welc_button_pane_4

0x9071,	// (0x0006bb9f) welc_button_pane_5_ParamLimits

0x9071,	// (0x0006bb9f) welc_button_pane_5

0x034e,	// (0x00062e7c) main_popup_welc_pane

0xbda2,	// (0x0006e8d0) main_welc_sk_g3

0xbdac,	// (0x0006e8da) main_welc_sk_g4

0xbdb6,	// (0x0006e8e4) main_welc_sk_t3

0xbdc6,	// (0x0006e8f4) main_welc_sk_t4

0xbdd6,	// (0x0006e904) popup_welc_pane_t4

0xbde4,	// (0x0006e912) popup_welc_pane_t5

0xbdf2,	// (0x0006e920) popup_welc_pane_t6

0xa06a,	// (0x0006cb98) main_acti_pane

0x9fdf,	// (0x0006cb0d) main_sso_pane

0x9340,	// (0x0006be6e) sso_body_pane_ParamLimits

0x9340,	// (0x0006be6e) sso_body_pane

0x9363,	// (0x0006be91) sso_logo_pane_ParamLimits

0x9363,	// (0x0006be91) sso_logo_pane

0x93a1,	// (0x0006becf) sso_sk_pane_ParamLimits

0x93a1,	// (0x0006becf) sso_sk_pane

0x93b3,	// (0x0006bee1) main_sso_logo_pane_g1

0x93bc,	// (0x0006beea) sso_sk_pane_t1_ParamLimits

0x93bc,	// (0x0006beea) sso_sk_pane_t1

0x93d6,	// (0x0006bf04) sso_sk_pane_t2_ParamLimits

0x93d6,	// (0x0006bf04) sso_sk_pane_t2

0x0001,

0xfe12,	// (0x00072940) sso_sk_pane_t_ParamLimits

0xfe12,	// (0x00072940) sso_sk_pane_t

0xbe34,	// (0x0006e962) aid_sso_gap

0xbe3d,	// (0x0006e96b) aid_sso_txt1

0xbe47,	// (0x0006e975) aid_sso_txt2

0xbe51,	// (0x0006e97f) aid_sso_txt3

0x0002,

0xfe17,	// (0x00072945) aid_sso_txt

0xbe5b,	// (0x0006e989) aid_sso_widget

0x9440,	// (0x0006bf6e) sso_btn_pane_ParamLimits

0x9440,	// (0x0006bf6e) sso_btn_pane

0x94d4,	// (0x0006c002) sso_option_pane_ParamLimits

0x94d4,	// (0x0006c002) sso_option_pane

0x9588,	// (0x0006c0b6) sso_query_pane_ParamLimits

0x9588,	// (0x0006c0b6) sso_query_pane

0x95de,	// (0x0006c10c) sso_query_pane_cp01_ParamLimits

0x95de,	// (0x0006c10c) sso_query_pane_cp01

0x963c,	// (0x0006c16a) sso_t_hdr_pane_ParamLimits

0x963c,	// (0x0006c16a) sso_t_hdr_pane

0x9666,	// (0x0006c194) sso_t_nml_pane_ParamLimits

0x9666,	// (0x0006c194) sso_t_nml_pane

0xbe65,	// (0x0006e993) sso_t_sub_pane

0x9375,	// (0x0006bea3) sso_popup_window_ParamLimits

0x9375,	// (0x0006bea3) sso_popup_window

0x93ec,	// (0x0006bf1a) sso_apps_pane_ParamLimits

0x93ec,	// (0x0006bf1a) sso_apps_pane

0x9416,	// (0x0006bf44) sso_body_pane_g1

0x9420,	// (0x0006bf4e) sso_body_pane_t1

0x9430,	// (0x0006bf5e) sso_body_pane_t2

0x0001,

0xfe1e,	// (0x0007294c) sso_body_pane_t

0x948c,	// (0x0006bfba) sso_btn_pane_cp01_ParamLimits

0x948c,	// (0x0006bfba) sso_btn_pane_cp01

0x955c,	// (0x0006c08a) sso_prog_pane_ParamLimits

0x955c,	// (0x0006c08a) sso_prog_pane

0x96d8,	// (0x0006c206) sso_t_hdr_pane_t1_ParamLimits

0x96d8,	// (0x0006c206) sso_t_hdr_pane_t1

0xbe7a,	// (0x0006e9a8) input_focus_pane_cp10_ParamLimits

0xbe7a,	// (0x0006e9a8) input_focus_pane_cp10

0xbe8e,	// (0x0006e9bc) sso_query_pane_t1_ParamLimits

0xbe8e,	// (0x0006e9bc) sso_query_pane_t1

0xbea1,	// (0x0006e9cf) sso_query_pane_t2_ParamLimits

0xbea1,	// (0x0006e9cf) sso_query_pane_t2

0xbebb,	// (0x0006e9e9) sso_query_pane_t3_ParamLimits

0xbebb,	// (0x0006e9e9) sso_query_pane_t3

0xbee5,	// (0x0006ea13) sso_query_pane_t4_ParamLimits

0xbee5,	// (0x0006ea13) sso_query_pane_t4

0x0003,

0xfe23,	// (0x00072951) sso_query_pane_t_ParamLimits

0xfe23,	// (0x00072951) sso_query_pane_t

0xbf09,	// (0x0006ea37) bg_button_pane_cp22

0xbf12,	// (0x0006ea40) sso_btn_pane_t1

0x96eb,	// (0x0006c219) sso_t_nml_pane_t1_ParamLimits

0x96eb,	// (0x0006c219) sso_t_nml_pane_t1

0xbf21,	// (0x0006ea4f) sso_option_row_pane_ParamLimits

0xbf21,	// (0x0006ea4f) sso_option_row_pane

0xbf2e,	// (0x0006ea5c) sso_t_sub_pane_t1_ParamLimits

0xbf2e,	// (0x0006ea5c) sso_t_sub_pane_t1

0xa48d,	// (0x0006cfbb) bg_popup_window_pane_cp11_ParamLimits

0xa48d,	// (0x0006cfbb) bg_popup_window_pane_cp11

0xbf4b,	// (0x0006ea79) popup_sk_window_cp01_ParamLimits

0xbf4b,	// (0x0006ea79) popup_sk_window_cp01

0xbf58,	// (0x0006ea86) sso_popup_body_pane_ParamLimits

0xbf58,	// (0x0006ea86) sso_popup_body_pane

0xbf65,	// (0x0006ea93) scroll_pane_cp21_ParamLimits

0xbf65,	// (0x0006ea93) scroll_pane_cp21

0xbf72,	// (0x0006eaa0) sso_popup_body_t_pane_ParamLimits

0xbf72,	// (0x0006eaa0) sso_popup_body_t_pane

0xbf7f,	// (0x0006eaad) sso_popup_body_t_hdr_pane_ParamLimits

0xbf7f,	// (0x0006eaad) sso_popup_body_t_hdr_pane

0x9706,	// (0x0006c234) sso_popup_body_t_nml_pane_ParamLimits

0x9706,	// (0x0006c234) sso_popup_body_t_nml_pane

0x972d,	// (0x0006c25b) sso_popup_body_t_sub_pane_ParamLimits

0x972d,	// (0x0006c25b) sso_popup_body_t_sub_pane

0xbf91,	// (0x0006eabf) sso_popup_body_t_hdr_pane_t1

0x9750,	// (0x0006c27e) sso_popup_body_t_nml_pane_t1_ParamLimits

0x9750,	// (0x0006c27e) sso_popup_body_t_nml_pane_t1

0xbfa1,	// (0x0006eacf) sso_popup_body_t_sub_pane_t1_ParamLimits

0xbfa1,	// (0x0006eacf) sso_popup_body_t_sub_pane_t1

0xc458,	// (0x0006ef86) sso_prog_pane_g1

0x9788,	// (0x0006c2b6) sso_apps_pane_comp1_ParamLimits

0x9788,	// (0x0006c2b6) sso_apps_pane_comp1

0xbfc6,	// (0x0006eaf4) sso_apps_pane_comp1_g1

0xbfce,	// (0x0006eafc) sso_apps_pane_comp1_t1

0xbfea,	// (0x0006eb18) sso_option_row_pane_g1

0xc002,	// (0x0006eb30) sso_option_row_pane_t1

0xb563,	// (0x0006e091) list_cmail_pane_ParamLimits

0x9fdf,	// (0x0006cb0d) main_call7_pane

0x8d9e,	// (0x0006b8cc) bg_welc_area_ParamLimits

0x8d9e,	// (0x0006b8cc) bg_welc_area

0x8f87,	// (0x0006bab5) sso_t_hdr_pane_a_t1_ParamLimits

0x8f87,	// (0x0006bab5) sso_t_hdr_pane_a_t1

0x8fa2,	// (0x0006bad0) sso_t_nml_pane_a_t1_ParamLimits

0x8fa2,	// (0x0006bad0) sso_t_nml_pane_a_t1

0x8fd1,	// (0x0006baff) sso_t_sub_pane_a_t1_ParamLimits

0x8fd1,	// (0x0006baff) sso_t_sub_pane_a_t1

0x908c,	// (0x0006bbba) welc_button_pane_cp01_ParamLimits

0x908c,	// (0x0006bbba) welc_button_pane_cp01

0xbd8a,	// (0x0006e8b8) sso_btn_pane_t1_copy1

0xbd99,	// (0x0006e8c7) welc_button_pane_2_comp1

0xbe02,	// (0x0006e930) sso_t_hdr_pane_p_t1

0xbe12,	// (0x0006e940) sso_t_nml_pane_p_t1

0xbe22,	// (0x0006e950) sso_t_sub_pane_p_t1

0x9fdf,	// (0x0006cb0d) main_att_pane

0x9fdf,	// (0x0006cb0d) main_vod_pane

0xbe65,	// (0x0006e993) sso_t_sub_pane_ParamLimits

0xbfdc,	// (0x0006eb0a) input_focus_pane_cp10_t1

0xc002,	// (0x0006eb30) sso_option_row_pane_t1_ParamLimits

0x97a2,	// (0x0006c2d0) main_att_body_pane_ParamLimits

0x97a2,	// (0x0006c2d0) main_att_body_pane

0x97b8,	// (0x0006c2e6) att_btn_emg_pane_ParamLimits

0x97b8,	// (0x0006c2e6) att_btn_emg_pane

0x97d7,	// (0x0006c305) att_btn_pane_ParamLimits

0x97d7,	// (0x0006c305) att_btn_pane

0x984a,	// (0x0006c378) att_btn_pane_cp01_ParamLimits

0x984a,	// (0x0006c378) att_btn_pane_cp01

0x9888,	// (0x0006c3b6) att_li_srv_pane_ParamLimits

0x9888,	// (0x0006c3b6) att_li_srv_pane

0x98a5,	// (0x0006c3d3) att_opt_pane_ParamLimits

0x98a5,	// (0x0006c3d3) att_opt_pane

0x98ef,	// (0x0006c41d) att_query_pane_ParamLimits

0x98ef,	// (0x0006c41d) att_query_pane

0x9968,	// (0x0006c496) att_query_pane_cp01_ParamLimits

0x9968,	// (0x0006c496) att_query_pane_cp01

0x99b4,	// (0x0006c4e2) att_t_hdr_pane_ParamLimits

0x99b4,	// (0x0006c4e2) att_t_hdr_pane

0x9a24,	// (0x0006c552) att_t_nml_pane_ParamLimits

0x9a24,	// (0x0006c552) att_t_nml_pane

0x9aa2,	// (0x0006c5d0) att_t_nml_pane_cp01_ParamLimits

0x9aa2,	// (0x0006c5d0) att_t_nml_pane_cp01

0x9ad0,	// (0x0006c5fe) att_t_nmlb_pane_ParamLimits

0x9ad0,	// (0x0006c5fe) att_t_nmlb_pane

0x9b3f,	// (0x0006c66d) att_term_pane_ParamLimits

0x9b3f,	// (0x0006c66d) att_term_pane

0x9b8f,	// (0x0006c6bd) main_att_body_pane_g1_ParamLimits

0x9b8f,	// (0x0006c6bd) main_att_body_pane_g1

0xc01e,	// (0x0006eb4c) att_t_hdr_pane_t1_ParamLimits

0xc01e,	// (0x0006eb4c) att_t_hdr_pane_t1

0xc031,	// (0x0006eb5f) att_t_nml_pane_t1_ParamLimits

0xc031,	// (0x0006eb5f) att_t_nml_pane_t1

0xbf12,	// (0x0006ea40) att_btn_pane_t1

0xbf09,	// (0x0006ea37) bg_button_pane_cp23

0x9bbb,	// (0x0006c6e9) att_li_srv_row_pane_ParamLimits

0x9bbb,	// (0x0006c6e9) att_li_srv_row_pane

0xc056,	// (0x0006eb84) att_t_nmlb_pane_t1_ParamLimits

0xc056,	// (0x0006eb84) att_t_nmlb_pane_t1

0xc072,	// (0x0006eba0) att_query_pane_t1

0xc081,	// (0x0006ebaf) att_query_pane_t2

0xc090,	// (0x0006ebbe) att_query_pane_t3

0x0002,

0xfe31,	// (0x0007295f) att_query_pane_t

0xc09f,	// (0x0006ebcd) input_focus_pane_cp11

0xc0a8,	// (0x0006ebd6) att_term_pane_t1_ParamLimits

0xc0a8,	// (0x0006ebd6) att_term_pane_t1

0x9fdf,	// (0x0006cb0d) att_opt_row_pane

0xc0c5,	// (0x0006ebf3) att_opt_row_pane_g1

0xc0cd,	// (0x0006ebfb) att_opt_row_pane_t1_ParamLimits

0xc0cd,	// (0x0006ebfb) att_opt_row_pane_t1

0x9bcb,	// (0x0006c6f9) att_li_srv_row_pane_g1

0x9bd3,	// (0x0006c701) att_li_srv_row_pane_t1_ParamLimits

0x9bd3,	// (0x0006c701) att_li_srv_row_pane_t1

0x9bd3,	// (0x0006c701) att_li_srv_row_pane_t2_ParamLimits

0x9bd3,	// (0x0006c701) att_li_srv_row_pane_t2

0x0001,

0xfe38,	// (0x00072966) att_li_srv_row_pane_t_ParamLimits

0xfe38,	// (0x00072966) att_li_srv_row_pane_t

0xc0e6,	// (0x0006ec14) att_btn_close_pane_g1

0x9fdf,	// (0x0006cb0d) bg_button_pane_cp24

0x9be8,	// (0x0006c716) main_vod_body_pane_ParamLimits

0x9be8,	// (0x0006c716) main_vod_body_pane

0x9bfc,	// (0x0006c72a) main_vod_body_pane_g1_ParamLimits

0x9bfc,	// (0x0006c72a) main_vod_body_pane_g1

0x9c30,	// (0x0006c75e) scroll_pane_cp24_ParamLimits

0x9c30,	// (0x0006c75e) scroll_pane_cp24

0x9c7e,	// (0x0006c7ac) vod_btn_pane_ParamLimits

0x9c7e,	// (0x0006c7ac) vod_btn_pane

0x9cc4,	// (0x0006c7f2) vod_det_pane_ParamLimits

0x9cc4,	// (0x0006c7f2) vod_det_pane

0x9cf8,	// (0x0006c826) vod_logo_g1_ParamLimits

0x9cf8,	// (0x0006c826) vod_logo_g1

0x9d36,	// (0x0006c864) vod_opt_pane_ParamLimits

0x9d36,	// (0x0006c864) vod_opt_pane

0x9d69,	// (0x0006c897) vod_opt_pane_cp01_ParamLimits

0x9d69,	// (0x0006c897) vod_opt_pane_cp01

0x9d95,	// (0x0006c8c3) vod_query_pane_ParamLimits

0x9d95,	// (0x0006c8c3) vod_query_pane

0x9dc0,	// (0x0006c8ee) vod_query_pane_cp01_ParamLimits

0x9dc0,	// (0x0006c8ee) vod_query_pane_cp01

0x9dcc,	// (0x0006c8fa) vod_t_nml_pane_ParamLimits

0x9dcc,	// (0x0006c8fa) vod_t_nml_pane

0x9e7d,	// (0x0006c9ab) vod_t_nml_pane_cp01_ParamLimits

0x9e7d,	// (0x0006c9ab) vod_t_nml_pane_cp01

0x9eb9,	// (0x0006c9e7) vod_t_sub_pane_ParamLimits

0x9eb9,	// (0x0006c9e7) vod_t_sub_pane

0x9eea,	// (0x0006ca18) vod_t_sub_pane_cp01_ParamLimits

0x9eea,	// (0x0006ca18) vod_t_sub_pane_cp01

0xc09f,	// (0x0006ebcd) vod_query_field_pane

0xc0ee,	// (0x0006ec1c) vod_query_pane_t1

0xc0fd,	// (0x0006ec2b) bg_button_pane_cp25

0xbf12,	// (0x0006ea40) sso_btn_pane_t1_copy2

0x9f16,	// (0x0006ca44) vod_t_nml_pane_t1_ParamLimits

0x9f16,	// (0x0006ca44) vod_t_nml_pane_t1

0xd6be,	// (0x000701ec) vod_opt_row_pane_ParamLimits

0xd6be,	// (0x000701ec) vod_opt_row_pane

0xd6d0,	// (0x000701fe) vod_t_sub_pane_t1_ParamLimits

0xd6d0,	// (0x000701fe) vod_t_sub_pane_t1

0xd6e9,	// (0x00070217) vod_det_cell_pane_ParamLimits

0xd6e9,	// (0x00070217) vod_det_cell_pane

0x9fdf,	// (0x0006cb0d) input_focus_pane_cp15

0xd6fa,	// (0x00070228) vod_query_field_pane_t1

0xd708,	// (0x00070236) vod_opt_row_pane_g1_ParamLimits

0xd708,	// (0x00070236) vod_opt_row_pane_g1

0xd714,	// (0x00070242) vod_opt_row_pane_t1_ParamLimits

0xd714,	// (0x00070242) vod_opt_row_pane_t1

0xd736,	// (0x00070264) vod_det_cell_field_pane

0xd73f,	// (0x0007026d) vod_det_cell_pane_g1

0xd747,	// (0x00070275) vod_det_cell_pane_t1

0x9fdf,	// (0x0006cb0d) input_focus_pane_cp16

0xd756,	// (0x00070284) vod_det_cell_field_pane_t1

0x9f4b,	// (0x0006ca79) call7_btn_grp_pane_ParamLimits

0x9f4b,	// (0x0006ca79) call7_btn_grp_pane

0xa48d,	// (0x0006cfbb) call7_bubble_pane_ParamLimits

0xa48d,	// (0x0006cfbb) call7_bubble_pane

0x9f65,	// (0x0006ca93) cell_call7_btn_pane_ParamLimits

0x9f65,	// (0x0006ca93) cell_call7_btn_pane

0x9f79,	// (0x0006caa7) call7_pane_g1_ParamLimits

0x9f79,	// (0x0006caa7) call7_pane_g1

0x9f8b,	// (0x0006cab9) call7_windows_conf_pane_ParamLimits

0x9f8b,	// (0x0006cab9) call7_windows_conf_pane

0x9fa9,	// (0x0006cad7) popup_call7_1st_window_ParamLimits

0x9fa9,	// (0x0006cad7) popup_call7_1st_window

0x9fbb,	// (0x0006cae9) popup_call7_2nd_window_ParamLimits

0x9fbb,	// (0x0006cae9) popup_call7_2nd_window

0x9fcd,	// (0x0006cafb) popup_call7_3rd_window_ParamLimits

0x9fcd,	// (0x0006cafb) popup_call7_3rd_window

0x9fdf,	// (0x0006cb0d) bg_button_pane_cp26

0xbc0c,	// (0x0006e73a) cell_call7_btn_pane_g1

0xc106,	// (0x0006ec34) cell_call7_btn_pane_t1

0x9fdf,	// (0x0006cb0d) bg_popup_window_pane_cp12

0xd764,	// (0x00070292) popup_call7_1st_window_g1

0xd76c,	// (0x0007029a) popup_call7_1st_window_g2

0xd774,	// (0x000702a2) popup_call7_1st_window_g3

0x0002,

0xfe3d,	// (0x0007296b) popup_call7_1st_window_g

0xd77c,	// (0x000702aa) popup_call7_1st_window_t1

0xd78b,	// (0x000702b9) popup_call7_1st_window_t2

0xd79b,	// (0x000702c9) popup_call7_1st_window_t3

0x0002,

0xfe44,	// (0x00072972) popup_call7_1st_window_t

0x9fdf,	// (0x0006cb0d) bg_popup_window_pane_cp13

0xd7ab,	// (0x000702d9) popup_call7_2nd_window_g1

0xd7b3,	// (0x000702e1) popup_call7_2nd_window_g2

0xd7bb,	// (0x000702e9) popup_call7_2nd_window_g3

0x0002,

0xfe4b,	// (0x00072979) popup_call7_2nd_window_g

0xd7c3,	// (0x000702f1) popup_call7_2nd_window_t1

0x9fdf,	// (0x0006cb0d) bg_popup_window_pane_cp14

0xd7d2,	// (0x00070300) call7_list_conf_pane

0xd7da,	// (0x00070308) call7_list_conf_row_pane_ParamLimits

0xd7da,	// (0x00070308) call7_list_conf_row_pane

0xd7ed,	// (0x0007031b) call7_list_conf_row_pane_g1

0xd7f5,	// (0x00070323) call7_list_conf_row_pane_g2

0x0001,

0xfe52,	// (0x00072980) call7_list_conf_row_pane_g

0xd7fd,	// (0x0007032b) call7_list_conf_row_pane_t1

0x9fdf,	// (0x0006cb0d) list_highlight_pane_cp22

0x9528,	// (0x0006c056) sso_option_pane_cp01_ParamLimits

0x9528,	// (0x0006c056) sso_option_pane_cp01

0xc39f,	// (0x0006eecd) msg_header_pane_ParamLimits

0xd12d,	// (0x0006fc5b) bg_button_pane_cp01_ParamLimits

0xd141,	// (0x0006fc6f) input_focus_pane_cp07_ParamLimits

0x78a9,	// (0x0006a3d7) popup_email_progress_window

0xc458,	// (0x0006ef86) popup_email_progress_window_g1

0xd80b,	// (0x00070339) popup_email_progress_window_g2

0x0001,

0xfe57,	// (0x00072985) popup_email_progress_window_g

0xd813,	// (0x00070341) popup_email_progress_window_t1

0x9fdf,	// (0x0006cb0d) cmail_conv_pane

0x7b51,	// (0x0006a67f) list_single_dyc_row_pane_g5_ParamLimits

0x7b51,	// (0x0006a67f) list_single_dyc_row_pane_g5

0x7b5d,	// (0x0006a68b) list_single_dyc_row_pane_g6_ParamLimits

0x7b5d,	// (0x0006a68b) list_single_dyc_row_pane_g6

0x7b75,	// (0x0006a6a3) list_single_dyc_row_pane_g7_ParamLimits

0x7b75,	// (0x0006a6a3) list_single_dyc_row_pane_g7

0x8dda,	// (0x0006b908) main_button_pane_5_ParamLimits

0x8dda,	// (0x0006b908) main_button_pane_5

0x9357,	// (0x0006be85) sso_emg_call_btn_pane_ParamLimits

0x9357,	// (0x0006be85) sso_emg_call_btn_pane

0x96bc,	// (0x0006c1ea) sso_t_sub_pane_cp01_ParamLimits

0x96bc,	// (0x0006c1ea) sso_t_sub_pane_cp01

0xbfea,	// (0x0006eb18) sso_option_row_pane_g1_ParamLimits

0xbff6,	// (0x0006eb24) sso_option_row_pane_g2_ParamLimits

0xbff6,	// (0x0006eb24) sso_option_row_pane_g2

0x0001,

0xfe2c,	// (0x0007295a) sso_option_row_pane_g_ParamLimits

0xfe2c,	// (0x0007295a) sso_option_row_pane_g

0x9866,	// (0x0006c394) att_btn_pane_cp02_ParamLimits

0x9866,	// (0x0006c394) att_btn_pane_cp02

0xd821,	// (0x0007034f) cmail_conv_hdr_pane

0xd82a,	// (0x00070358) list_cmail_conv_pane

0xd834,	// (0x00070362) scroll_pane_cp31

0xd83c,	// (0x0007036a) cmail_conv_hdr_pane_t1

0xd84a,	// (0x00070378) cmail_conv_hdr_pane_t2

0x0001,

0xfe5c,	// (0x0007298a) cmail_conv_hdr_pane_t

0xd858,	// (0x00070386) bubble_cmail_conv_pane_ParamLimits

0xd858,	// (0x00070386) bubble_cmail_conv_pane

0xb685,	// (0x0006e1b3) aid_size_colorization_pane

0xc693,	// (0x0006f1c1) bg_bubble_cmail_conv_pane

0xd874,	// (0x000703a2) body_bubble_cmail_conv_pane

0xcb86,	// (0x0006f6b4) bubble_cmail_conv_pane_g1

0xcb8e,	// (0x0006f6bc) bubble_cmail_conv_pane_g2

0xcb96,	// (0x0006f6c4) bubble_cmail_conv_pane_g3

0x0002,

0xf24d,	// (0x00071d7b) bubble_cmail_conv_pane_g

0xd87c,	// (0x000703aa) bubble_cmail_conv_pane_t1

0xd88a,	// (0x000703b8) bg_bubble_cmail_conv_pane_g1

0xd893,	// (0x000703c1) bg_bubble_cmail_conv_pane_g2

0xd89c,	// (0x000703ca) bg_bubble_cmail_conv_pane_g3

0x0002,

0xfe61,	// (0x0007298f) bg_bubble_cmail_conv_pane_g

0xd8a5,	// (0x000703d3) body_bubble_cmail_conv_pane_t1_ParamLimits

0xd8a5,	// (0x000703d3) body_bubble_cmail_conv_pane_t1

0xd8bc,	// (0x000703ea) body_bubble_cmail_conv_pane_t2_ParamLimits

0xd8bc,	// (0x000703ea) body_bubble_cmail_conv_pane_t2

0x0001,

0xfe68,	// (0x00072996) body_bubble_cmail_conv_pane_t_ParamLimits

0xfe68,	// (0x00072996) body_bubble_cmail_conv_pane_t

0xa48d,	// (0x0006cfbb) list_highlight_pane_cp024_ParamLimits
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
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
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
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	};

} // end of namespace AknLayoutScalable_Abrw_pvl4_apps_vga4_lsc_tch_Small
