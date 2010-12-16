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

#include "aknlayoutscalable_elaf_pnp4_apps_nhd4_prt_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x00069f25 };

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
0x68c3,	// (0x000707e8) Screen

0x68cf,	// (0x000707f4) application_window

0x692b,	// (0x00070850) area_bottom_pane_ParamLimits

0x692b,	// (0x00070850) area_bottom_pane

0x6983,	// (0x000708a8) area_top_pane_ParamLimits

0x6983,	// (0x000708a8) area_top_pane

0x69e7,	// (0x0007090c) call_video_uplink_pane_ParamLimits

0x69e7,	// (0x0007090c) call_video_uplink_pane

0x6a26,	// (0x0007094b) main_pane_ParamLimits

0x6a26,	// (0x0007094b) main_pane

0x46c9,	// (0x0006e5ee) context_pane

0x9677,	// (0x0007359c) navi_pane

0x969d,	// (0x000735c2) popup_cale_events_window_ParamLimits

0x969d,	// (0x000735c2) popup_cale_events_window

0x46dc,	// (0x0006e601) popup_mup_playback_window

0x96b5,	// (0x000735da) signal_pane

0x221c,	// (0x0006c141) main_browser_pane

0x2807,	// (0x0006c72c) main_burst_pane

0x9507,	// (0x0007342c) main_calc_pane

0x46bd,	// (0x0006e5e2) main_cale_day_pane

0x6f2c,	// (0x00070e51) main_cale_month_pane

0x46bd,	// (0x0006e5e2) main_cale_week_pane

0x2807,	// (0x0006c72c) main_call_pane

0x1e9c,	// (0x0006bdc1) main_call_poc_pane

0x2807,	// (0x0006c72c) main_camera_pane

0x2807,	// (0x0006c72c) main_chi_dic_pane

0x3115,	// (0x0006d03a) main_clock_pane

0x1e9c,	// (0x0006bdc1) main_fmradio_pane

0x2807,	// (0x0006c72c) main_graph_messa_pane

0x1e9c,	// (0x0006bdc1) main_help_pane

0x221c,	// (0x0006c141) main_im_pane

0x20f7,	// (0x0006c01c) main_image_pane_ParamLimits

0x20f7,	// (0x0006c01c) main_image_pane

0x1e9c,	// (0x0006bdc1) main_location2_pane

0x2807,	// (0x0006c72c) main_location_pane

0x20f7,	// (0x0006c01c) main_messa_pane

0x1e9c,	// (0x0006bdc1) main_mp2_pane

0x2807,	// (0x0006c72c) main_mp_pane

0x1e9c,	// (0x0006bdc1) main_msg_pane

0x1e9c,	// (0x0006bdc1) main_mup_eq_pane

0x1e9c,	// (0x0006bdc1) main_mup_pane

0x221c,	// (0x0006c141) main_notes_pane

0x1e9c,	// (0x0006bdc1) main_pec_pane

0x1e9c,	// (0x0006bdc1) main_phob_pane

0x1e9c,	// (0x0006bdc1) main_pinb_pane

0x1e9c,	// (0x0006bdc1) main_postcard_pane

0x1e9c,	// (0x0006bdc1) main_qdial_pane

0x2807,	// (0x0006c72c) main_skin_pane

0x1e9c,	// (0x0006bdc1) main_smil2_pane

0x2807,	// (0x0006c72c) main_smil_pane

0x2807,	// (0x0006c72c) main_video_pane

0x2807,	// (0x0006c72c) main_video_tele_pane

0x20f7,	// (0x0006c01c) main_viewer_pane_ParamLimits

0x20f7,	// (0x0006c01c) main_viewer_pane

0x2807,	// (0x0006c72c) main_vorec_pane

0x9545,	// (0x0007346a) popup_blid_sat_info_window_ParamLimits

0x9545,	// (0x0007346a) popup_blid_sat_info_window

0x9565,	// (0x0007348a) popup_dyc_status_message_window_ParamLimits

0x9565,	// (0x0007348a) popup_dyc_status_message_window

0x9573,	// (0x00073498) popup_grid_large_graphic_window_ParamLimits

0x9573,	// (0x00073498) popup_grid_large_graphic_window

0x9602,	// (0x00073527) popup_loc_request_window_ParamLimits

0x9602,	// (0x00073527) popup_loc_request_window

0x964f,	// (0x00073574) popup_wml_address_window_ParamLimits

0x964f,	// (0x00073574) popup_wml_address_window

0x93d7,	// (0x000732fc) call_muted_g1

0x90c4,	// (0x00072fe9) popup_call_audio_conf_window_ParamLimits

0x90c4,	// (0x00072fe9) popup_call_audio_conf_window

0x93e7,	// (0x0007330c) popup_call_audio_first_window_ParamLimits

0x93e7,	// (0x0007330c) popup_call_audio_first_window

0x9427,	// (0x0007334c) popup_call_audio_in_window_ParamLimits

0x9427,	// (0x0007334c) popup_call_audio_in_window

0x944b,	// (0x00073370) popup_call_audio_out_window_ParamLimits

0x944b,	// (0x00073370) popup_call_audio_out_window

0x946d,	// (0x00073392) popup_call_audio_second_window_ParamLimits

0x946d,	// (0x00073392) popup_call_audio_second_window

0x949d,	// (0x000733c2) popup_call_audio_wait_window_ParamLimits

0x949d,	// (0x000733c2) popup_call_audio_wait_window

0x94be,	// (0x000733e3) popup_number_entry_window_ParamLimits

0x94be,	// (0x000733e3) popup_number_entry_window

0x1a63,	// (0x0006b988) bg_popup_call_pane_cp05_ParamLimits

0x1a63,	// (0x0006b988) bg_popup_call_pane_cp05

0x1a83,	// (0x0006b9a8) popup_number_entry_window_t1

0x1a96,	// (0x0006b9bb) popup_number_entry_window_t2

0x1aa8,	// (0x0006b9cd) popup_number_entry_window_t3

0x0003,

0xf01d,	// (0x00078f42) popup_number_entry_window_t

0x1aba,	// (0x0006b9df) text_title_cp2

0x1acd,	// (0x0006b9f2) bg_popup_call_pane_cp_ParamLimits

0x1acd,	// (0x0006b9f2) bg_popup_call_pane_cp

0x1adb,	// (0x0006ba00) call_thumbnail_pane

0x1ae3,	// (0x0006ba08) popup_call_audio_in_window_g1_ParamLimits

0x1ae3,	// (0x0006ba08) popup_call_audio_in_window_g1

0x1aef,	// (0x0006ba14) popup_call_audio_in_window_g2_ParamLimits

0x1aef,	// (0x0006ba14) popup_call_audio_in_window_g2

0x1afb,	// (0x0006ba20) popup_call_audio_in_window_g3_ParamLimits

0x1afb,	// (0x0006ba20) popup_call_audio_in_window_g3

0x0002,

0xf026,	// (0x00078f4b) popup_call_audio_in_window_g_ParamLimits

0xf026,	// (0x00078f4b) popup_call_audio_in_window_g

0x1b07,	// (0x0006ba2c) popup_call_audio_in_window_t1_ParamLimits

0x1b07,	// (0x0006ba2c) popup_call_audio_in_window_t1

0x1b23,	// (0x0006ba48) popup_call_audio_in_window_t2_ParamLimits

0x1b23,	// (0x0006ba48) popup_call_audio_in_window_t2

0x1b3f,	// (0x0006ba64) popup_call_audio_in_window_t3_ParamLimits

0x1b3f,	// (0x0006ba64) popup_call_audio_in_window_t3

0x0002,

0xf02d,	// (0x00078f52) popup_call_audio_in_window_t_ParamLimits

0xf02d,	// (0x00078f52) popup_call_audio_in_window_t

0x1acd,	// (0x0006b9f2) bg_popup_call_pane_cp01_ParamLimits

0x1acd,	// (0x0006b9f2) bg_popup_call_pane_cp01

0x1adb,	// (0x0006ba00) call_thumbnail_pane_cp02

0x1b52,	// (0x0006ba77) call_type_pane_cp022

0x1b5a,	// (0x0006ba7f) popup_call_audio_out_window_g1_ParamLimits

0x1b5a,	// (0x0006ba7f) popup_call_audio_out_window_g1

0x1b6c,	// (0x0006ba91) popup_call_audio_out_window_g2_ParamLimits

0x1b6c,	// (0x0006ba91) popup_call_audio_out_window_g2

0x1b78,	// (0x0006ba9d) popup_call_audio_out_window_g3_ParamLimits

0x1b78,	// (0x0006ba9d) popup_call_audio_out_window_g3

0x0002,

0xf034,	// (0x00078f59) popup_call_audio_out_window_g_ParamLimits

0xf034,	// (0x00078f59) popup_call_audio_out_window_g

0x1b8a,	// (0x0006baaf) popup_call_audio_out_window_t1_ParamLimits

0x1b8a,	// (0x0006baaf) popup_call_audio_out_window_t1

0x1ba2,	// (0x0006bac7) popup_call_audio_out_window_t2_ParamLimits

0x1ba2,	// (0x0006bac7) popup_call_audio_out_window_t2

0x0001,

0xf03b,	// (0x00078f60) popup_call_audio_out_window_t_ParamLimits

0xf03b,	// (0x00078f60) popup_call_audio_out_window_t

0x1bb7,	// (0x0006badc) bg_popup_call_pane_ParamLimits

0x1bb7,	// (0x0006badc) bg_popup_call_pane

0x6c29,	// (0x00070b4e) call_thumbnail_pane_cp_ParamLimits

0x6c29,	// (0x00070b4e) call_thumbnail_pane_cp

0x1c3b,	// (0x0006bb60) call_type_pane_cp01_ParamLimits

0x1c3b,	// (0x0006bb60) call_type_pane_cp01

0x1c7f,	// (0x0006bba4) popup_call_audio_first_window_g1_ParamLimits

0x1c7f,	// (0x0006bba4) popup_call_audio_first_window_g1

0x1ccb,	// (0x0006bbf0) popup_call_audio_first_window_g2_ParamLimits

0x1ccb,	// (0x0006bbf0) popup_call_audio_first_window_g2

0x0001,

0xf040,	// (0x00078f65) popup_call_audio_first_window_g_ParamLimits

0xf040,	// (0x00078f65) popup_call_audio_first_window_g

0x1d0f,	// (0x0006bc34) popup_call_audio_first_window_t1_ParamLimits

0x1d0f,	// (0x0006bc34) popup_call_audio_first_window_t1

0x1dbb,	// (0x0006bce0) popup_call_audio_first_window_t4_ParamLimits

0x1dbb,	// (0x0006bce0) popup_call_audio_first_window_t4

0x1e47,	// (0x0006bd6c) popup_call_audio_first_window_t5_ParamLimits

0x1e47,	// (0x0006bd6c) popup_call_audio_first_window_t5

0x0002,

0xf045,	// (0x00078f6a) popup_call_audio_first_window_t_ParamLimits

0xf045,	// (0x00078f6a) popup_call_audio_first_window_t

0x1e9c,	// (0x0006bdc1) bg_popup_call_pane_cp02

0x1ea6,	// (0x0006bdcb) call_type_pane_cp023

0x1eae,	// (0x0006bdd3) popup_call_audio_wait_window_g1

0x1eb6,	// (0x0006bddb) popup_call_audio_wait_window_g2

0x0001,

0xf04c,	// (0x00078f71) popup_call_audio_wait_window_g

0x1ebe,	// (0x0006bde3) popup_call_audio_wait_window_t3

0x1ecc,	// (0x0006bdf1) bg_popup_call_pane_cp03_ParamLimits

0x1ecc,	// (0x0006bdf1) bg_popup_call_pane_cp03

0x1f2c,	// (0x0006be51) call_thumbnail_pane_cp011_ParamLimits

0x1f2c,	// (0x0006be51) call_thumbnail_pane_cp011

0x1f38,	// (0x0006be5d) call_type_pane_cp034_ParamLimits

0x1f38,	// (0x0006be5d) call_type_pane_cp034

0x1f74,	// (0x0006be99) popup_call_audio_second_window_g1_ParamLimits

0x1f74,	// (0x0006be99) popup_call_audio_second_window_g1

0x1fb0,	// (0x0006bed5) popup_call_audio_second_window_g2_ParamLimits

0x1fb0,	// (0x0006bed5) popup_call_audio_second_window_g2

0x0001,

0xf051,	// (0x00078f76) popup_call_audio_second_window_g_ParamLimits

0xf051,	// (0x00078f76) popup_call_audio_second_window_g

0x1fec,	// (0x0006bf11) popup_call_audio_second_window_t1_ParamLimits

0x1fec,	// (0x0006bf11) popup_call_audio_second_window_t1

0x206d,	// (0x0006bf92) popup_call_audio_second_window_t2_ParamLimits

0x206d,	// (0x0006bf92) popup_call_audio_second_window_t2

0x20a3,	// (0x0006bfc8) popup_call_audio_second_window_t3_ParamLimits

0x20a3,	// (0x0006bfc8) popup_call_audio_second_window_t3

0x0002,

0xf056,	// (0x00078f7b) popup_call_audio_second_window_t_ParamLimits

0xf056,	// (0x00078f7b) popup_call_audio_second_window_t

0x1e9c,	// (0x0006bdc1) bg_popup_call_pane_cp04

0x20d9,	// (0x0006bffe) list_conf_pane

0x20e1,	// (0x0006c006) popup_call_audio_conf_window_t1

0x20ef,	// (0x0006c014) call_thumbnail_pane_g1

0x20f7,	// (0x0006c01c) bg_pinb_pane_ParamLimits

0x20f7,	// (0x0006c01c) bg_pinb_pane

0x2105,	// (0x0006c02a) find_pinb_pane

0x20f7,	// (0x0006c01c) listscroll_pinb_pane_ParamLimits

0x20f7,	// (0x0006c01c) listscroll_pinb_pane

0x210f,	// (0x0006c034) pinb_bg_pane_g1

0x210f,	// (0x0006c034) pinb_bg_pane_g2

0x210f,	// (0x0006c034) pinb_bg_pane_g3

0x210f,	// (0x0006c034) pinb_bg_pane_g4

0x210f,	// (0x0006c034) pinb_bg_pane_g5

0x210f,	// (0x0006c034) pinb_bg_pane_g6

0x210f,	// (0x0006c034) pinb_bg_pane_g7

0x210f,	// (0x0006c034) pinb_bg_pane_g8

0x210f,	// (0x0006c034) pinb_bg_pane_g9

0x210f,	// (0x0006c034) pinb_bg_pane_g10

0x0009,

0xf05d,	// (0x00078f82) pinb_bg_pane_g

0x1a59,	// (0x0006b97e) grid_pinb_pane

0x1a59,	// (0x0006b97e) list_pinb_pane

0x2119,	// (0x0006c03e) scroll_pane_cp01_ParamLimits

0x2119,	// (0x0006c03e) scroll_pane_cp01

0x2127,	// (0x0006c04c) find_pinb_pane_g1_ParamLimits

0x2127,	// (0x0006c04c) find_pinb_pane_g1

0x213f,	// (0x0006c064) find_pinb_pane_t1

0x2151,	// (0x0006c076) find_pinb_pane_t2

0x0001,

0xf077,	// (0x00078f9c) find_pinb_pane_t

0x2166,	// (0x0006c08b) input_focus_pane_cp01_ParamLimits

0x2166,	// (0x0006c08b) input_focus_pane_cp01

0x2172,	// (0x0006c097) cell_pinb_pane_ParamLimits

0x2172,	// (0x0006c097) cell_pinb_pane

0x2180,	// (0x0006c0a5) cell_pinb_pane_g1_ParamLimits

0x2180,	// (0x0006c0a5) cell_pinb_pane_g1

0x218e,	// (0x0006c0b3) cell_pinb_pane_g2_ParamLimits

0x218e,	// (0x0006c0b3) cell_pinb_pane_g2

0x218e,	// (0x0006c0b3) cell_pinb_pane_g3_ParamLimits

0x218e,	// (0x0006c0b3) cell_pinb_pane_g3

0x0002,

0xf07c,	// (0x00078fa1) cell_pinb_pane_g_ParamLimits

0xf07c,	// (0x00078fa1) cell_pinb_pane_g

0x1e9c,	// (0x0006bdc1) grid_highlight_pane_cp01

0x2172,	// (0x0006c097) list_pinb_item_pane_ParamLimits

0x2172,	// (0x0006c097) list_pinb_item_pane

0x1a59,	// (0x0006b97e) list_highlight_pane_cp02

0x219c,	// (0x0006c0c1) list_pinb_item_pane_g1_ParamLimits

0x219c,	// (0x0006c0c1) list_pinb_item_pane_g1

0x218e,	// (0x0006c0b3) list_pinb_item_pane_g2_ParamLimits

0x218e,	// (0x0006c0b3) list_pinb_item_pane_g2

0x2180,	// (0x0006c0a5) list_pinb_item_pane_g3_ParamLimits

0x2180,	// (0x0006c0a5) list_pinb_item_pane_g3

0x218e,	// (0x0006c0b3) list_pinb_item_pane_g4_ParamLimits

0x218e,	// (0x0006c0b3) list_pinb_item_pane_g4

0x0003,

0xf083,	// (0x00078fa8) list_pinb_item_pane_g_ParamLimits

0xf083,	// (0x00078fa8) list_pinb_item_pane_g

0x21aa,	// (0x0006c0cf) list_pinb_item_pane_t1_ParamLimits

0x21aa,	// (0x0006c0cf) list_pinb_item_pane_t1

0x6c67,	// (0x00070b8c) calc_display_pane

0x6c85,	// (0x00070baa) calc_paper_pane

0x6ca1,	// (0x00070bc6) grid_calc_pane

0x1a59,	// (0x0006b97e) bg_list_pane_cp01

0x21be,	// (0x0006c0e3) clock_g1

0x21be,	// (0x0006c0e3) clock_g2

0x0001,

0xf08c,	// (0x00078fb1) clock_g

0x21c8,	// (0x0006c0ed) clock_t1_ParamLimits

0x21c8,	// (0x0006c0ed) clock_t1

0x21dc,	// (0x0006c101) clock_t2_ParamLimits

0x21dc,	// (0x0006c101) clock_t2

0x21dc,	// (0x0006c101) clock_t3_ParamLimits

0x21dc,	// (0x0006c101) clock_t3

0x21dc,	// (0x0006c101) clock_t4_ParamLimits

0x21dc,	// (0x0006c101) clock_t4

0x21c8,	// (0x0006c0ed) clock_t5_ParamLimits

0x21c8,	// (0x0006c0ed) clock_t5

0x21dc,	// (0x0006c101) clock_t6_ParamLimits

0x21dc,	// (0x0006c101) clock_t6

0x21dc,	// (0x0006c101) clock_t7_ParamLimits

0x21dc,	// (0x0006c101) clock_t7

0x21dc,	// (0x0006c101) clock_t8_ParamLimits

0x21dc,	// (0x0006c101) clock_t8

0x21dc,	// (0x0006c101) clock_t9_ParamLimits

0x21dc,	// (0x0006c101) clock_t9

0x0008,

0xf091,	// (0x00078fb6) clock_t_ParamLimits

0xf091,	// (0x00078fb6) clock_t

0x1a59,	// (0x0006b97e) popup_clock_analogue_window_cp02

0x1a59,	// (0x0006b97e) popup_clock_digital_window_cp01

0x1e9c,	// (0x0006bdc1) listscroll_help_pane

0x1e9c,	// (0x0006bdc1) phob_pre_status_pane

0x21f0,	// (0x0006c115) grid_qdial_pane

0x20f7,	// (0x0006c01c) listscroll_mce_pane

0x20f7,	// (0x0006c01c) bg_notes_pane

0x21fa,	// (0x0006c11f) list_notes_pane

0x6ccd,	// (0x00070bf2) scroll_pane_cp06

0x2208,	// (0x0006c12d) bg_calc_paper_pane

0x6cdc,	// (0x00070c01) list_calc_pane

0x221c,	// (0x0006c141) bg_calc_display_pane

0x6cf6,	// (0x00070c1b) calc_display_pane_t1

0x6d0b,	// (0x00070c30) calc_display_pane_t2

0x6d20,	// (0x00070c45) calc_display_pane_t3

0x0002,

0xf0a4,	// (0x00078fc9) calc_display_pane_t

0x6d32,	// (0x00070c57) cell_calc_pane_ParamLimits

0x6d32,	// (0x00070c57) cell_calc_pane

0x2228,	// (0x0006c14d) bg_calc_paper_pane_g1

0x2240,	// (0x0006c165) bg_calc_paper_pane_g2

0x2234,	// (0x0006c159) bg_calc_paper_pane_g3

0x2258,	// (0x0006c17d) bg_calc_paper_pane_g4

0x224c,	// (0x0006c171) bg_calc_paper_pane_g5

0x6d5f,	// (0x00070c84) bg_calc_paper_pane_g6

0x6d70,	// (0x00070c95) bg_calc_paper_pane_g7

0x6d81,	// (0x00070ca6) bg_calc_paper_pane_g8

0x0007,

0xf0ab,	// (0x00078fd0) bg_calc_paper_pane_g

0x6d92,	// (0x00070cb7) calc_bg_paper_pane_g9

0x6da3,	// (0x00070cc8) list_calc_item_pane_ParamLimits

0x6da3,	// (0x00070cc8) list_calc_item_pane

0x2264,	// (0x0006c189) list_calc_item_pane_g1

0x6dd0,	// (0x00070cf5) list_calc_item_pane_t1_ParamLimits

0x6dd0,	// (0x00070cf5) list_calc_item_pane_t1

0x6de2,	// (0x00070d07) list_calc_item_pane_t2_ParamLimits

0x6de2,	// (0x00070d07) list_calc_item_pane_t2

0x0001,

0xf0bc,	// (0x00078fe1) list_calc_item_pane_t_ParamLimits

0xf0bc,	// (0x00078fe1) list_calc_item_pane_t

0x210f,	// (0x0006c034) cell_calc_pane_g1

0x2271,	// (0x0006c196) grid_highlight_pane_cp02

0x6e12,	// (0x00070d37) bg_calc_display_pane_g1

0x6e1b,	// (0x00070d40) bg_calc_display_pane_g2

0x6e25,	// (0x00070d4a) bg_calc_display_pane_g3

0x0002,

0xf0c6,	// (0x00078feb) bg_calc_display_pane_g

0x6e2e,	// (0x00070d53) cell_qdial_pane_ParamLimits

0x6e2e,	// (0x00070d53) cell_qdial_pane

0x6e42,	// (0x00070d67) cell_qdial_pane_g1_ParamLimits

0x6e42,	// (0x00070d67) cell_qdial_pane_g1

0x6e4f,	// (0x00070d74) cell_qdial_pane_g2_ParamLimits

0x6e4f,	// (0x00070d74) cell_qdial_pane_g2

0x2293,	// (0x0006c1b8) cell_qdial_pane_g3_ParamLimits

0x2293,	// (0x0006c1b8) cell_qdial_pane_g3

0x0003,

0xf0cd,	// (0x00078ff2) cell_qdial_pane_g_ParamLimits

0xf0cd,	// (0x00078ff2) cell_qdial_pane_g

0x6e6c,	// (0x00070d91) cell_qdial_pane_t1_ParamLimits

0x6e6c,	// (0x00070d91) cell_qdial_pane_t1

0x6e84,	// (0x00070da9) cell_qdial_pane_t2_ParamLimits

0x6e84,	// (0x00070da9) cell_qdial_pane_t2

0x6e97,	// (0x00070dbc) cell_qdial_pane_t3_ParamLimits

0x6e97,	// (0x00070dbc) cell_qdial_pane_t3

0x0002,

0xf0d6,	// (0x00078ffb) cell_qdial_pane_t_ParamLimits

0xf0d6,	// (0x00078ffb) cell_qdial_pane_t

0x1e9c,	// (0x0006bdc1) grid_highlight_pane_cp04

0x229f,	// (0x0006c1c4) thumbnail_qdial_pane_ParamLimits

0x229f,	// (0x0006c1c4) thumbnail_qdial_pane

0x26f5,	// (0x0006c61a) list_help_pane

0x26fe,	// (0x0006c623) scroll_pane_cp02

0x6eaa,	// (0x00070dcf) help_list_pane_t1_ParamLimits

0x6eaa,	// (0x00070dcf) help_list_pane_t1

0x270f,	// (0x0006c634) bg_notes_pane_g2

0x2707,	// (0x0006c62c) bg_notes_pane_g3

0x2717,	// (0x0006c63c) notes_bg_pane_g1

0x2727,	// (0x0006c64c) notes_bg_pane_g4

0x271f,	// (0x0006c644) notes_bg_pane_g5

0x272f,	// (0x0006c654) notes_bg_pane_g6

0x2737,	// (0x0006c65c) notes_bg_pane_g7

0x2747,	// (0x0006c66c) notes_bg_pane_g8

0x273f,	// (0x0006c664) notes_bg_pane_g9

0x0006,

0xf0f4,	// (0x00079019) notes_bg_pane_g

0x6ee4,	// (0x00070e09) list_notes_text_pane_ParamLimits

0x6ee4,	// (0x00070e09) list_notes_text_pane

0x274f,	// (0x0006c674) list_notes_text_pane_g1

0x5f2f,	// (0x0006fe54) list_notes_text_pane_t1

0x6f2c,	// (0x00070e51) listscroll_cale_week_pane

0x6f51,	// (0x00070e76) bg_cale_heading_pane

0x2769,	// (0x0006c68e) bg_cale_pane_cp01

0x6f73,	// (0x00070e98) cale_week_corner_pane

0x6f8d,	// (0x00070eb2) cale_week_day_heading_pane

0x6faf,	// (0x00070ed4) cale_week_scroll_pane_g1

0x6fcc,	// (0x00070ef1) cale_week_scroll_pane_g2

0x6fdf,	// (0x00070f04) cale_week_scroll_pane_g3

0x6ff2,	// (0x00070f17) cale_week_scroll_pane_g4

0x7005,	// (0x00070f2a) cale_week_scroll_pane_g5

0x7018,	// (0x00070f3d) cale_week_scroll_pane_g6

0x702b,	// (0x00070f50) cale_week_scroll_pane_g7

0x7040,	// (0x00070f65) cale_week_scroll_pane_g8

0x7055,	// (0x00070f7a) cale_week_scroll_pane_g9

0x7068,	// (0x00070f8d) cale_week_scroll_pane_g10

0x707b,	// (0x00070fa0) cale_week_scroll_pane_g11

0x708e,	// (0x00070fb3) cale_week_scroll_pane_g12

0x70a5,	// (0x00070fca) cale_week_scroll_pane_g13

0x70c0,	// (0x00070fe5) cale_week_scroll_pane_g14

0x70db,	// (0x00071000) cale_week_scroll_pane_g15

0x000f,

0xf103,	// (0x00079028) cale_week_scroll_pane_g

0x710b,	// (0x00071030) cale_week_time_pane

0x7120,	// (0x00071045) grid_cale_week_pane

0x2798,	// (0x0006c6bd) scroll_pane_cp08

0x713f,	// (0x00071064) cell_cale_week_pane_ParamLimits

0x713f,	// (0x00071064) cell_cale_week_pane

0x71a1,	// (0x000710c6) cale_week_day_heading_pane_t1

0x71bc,	// (0x000710e1) cale_week_day_heading_pane_t2

0x71d7,	// (0x000710fc) cale_week_day_heading_pane_t3

0x71f2,	// (0x00071117) cale_week_day_heading_pane_t4

0x720d,	// (0x00071132) cale_week_day_heading_pane_t5

0x7228,	// (0x0007114d) cale_week_day_heading_pane_t6

0x7243,	// (0x00071168) cale_week_day_heading_pane_t7

0x0006,

0xf124,	// (0x00079049) cale_week_day_heading_pane_t

0x27b5,	// (0x0006c6da) bg_cale_side_pane

0x725e,	// (0x00071183) cale_week_time_pane_t1

0x7278,	// (0x0007119d) cale_week_time_pane_t2

0x7292,	// (0x000711b7) cale_week_time_pane_t3

0x72ac,	// (0x000711d1) cale_week_time_pane_t4

0x72c6,	// (0x000711eb) cale_week_time_pane_t5

0x72e0,	// (0x00071205) cale_week_time_pane_t6

0x7300,	// (0x00071225) cale_week_time_pane_t7

0x7322,	// (0x00071247) cale_week_time_pane_t8

0x0007,

0xf133,	// (0x00079058) cale_week_time_pane_t

0x7346,	// (0x0007126b) cell_cale_week_pane_g2

0x736a,	// (0x0007128f) cell_cale_week_pane_g3_ParamLimits

0x736a,	// (0x0007128f) cell_cale_week_pane_g3

0x27c3,	// (0x0006c6e8) grid_highlight_pane_cp07

0x27cb,	// (0x0006c6f0) listscroll_gms_pane

0x27d5,	// (0x0006c6fa) grid_gms_pane

0x27de,	// (0x0006c703) listscroll_gms_pane_g1

0x27e6,	// (0x0006c70b) listscroll_gms_pane_g2

0x0001,

0xf144,	// (0x00079069) listscroll_gms_pane_g

0x7382,	// (0x000712a7) scroll_pane_cp010

0x738d,	// (0x000712b2) cell_gms_pane_ParamLimits

0x738d,	// (0x000712b2) cell_gms_pane

0x739d,	// (0x000712c2) cell_gms_pane_g1

0x27ee,	// (0x0006c713) cell_gms_pane_g2

0x274f,	// (0x0006c674) cell_gms_pane_g3

0x27f6,	// (0x0006c71b) cell_gms_pane_g4

0x0003,

0xf149,	// (0x0007906e) cell_gms_pane_g

0x27ff,	// (0x0006c724) grid_highlight_pane_cp09

0x935b,	// (0x00073280) phob_pre_status_pane_g1

0x9363,	// (0x00073288) phob_pre_status_pane_g2

0x936b,	// (0x00073290) phob_pre_status_pane_g3

0x9373,	// (0x00073298) phob_pre_status_pane_g4

0x0004,

0xf502,	// (0x00079427) phob_pre_status_pane_g

0x9383,	// (0x000732a8) phob_pre_status_pane_t1

0x9393,	// (0x000732b8) phob_pre_status_pane_t2

0x93a3,	// (0x000732c8) phob_pre_status_pane_t3

0x0002,

0xf50d,	// (0x00079432) phob_pre_status_pane_t

0x2807,	// (0x0006c72c) bg_list_pane_cp05

0x73ad,	// (0x000712d2) grid_vorec_pane

0x73b7,	// (0x000712dc) vorec_t1

0x73c5,	// (0x000712ea) vorec_t2

0x73d3,	// (0x000712f8) vorec_t3

0x73e1,	// (0x00071306) vorec_t4

0xdbdf,	// (0x00077b04) vorec_t5

0xdbed,	// (0x00077b12) vorec_t6

0x0004,

0xf152,	// (0x00079077) vorec_t

0xdbfb,	// (0x00077b20) wait_bar_pane_cp01

0x73fd,	// (0x00071322) cell_vorec_pane_ParamLimits

0x73fd,	// (0x00071322) cell_vorec_pane

0x7410,	// (0x00071335) cell_vorec_pane_g1

0x1e9c,	// (0x0006bdc1) grid_highlight_pane_cp05

0x2172,	// (0x0006c097) cams_zoom_pane

0x2172,	// (0x0006c097) image_vga_pane

0x218e,	// (0x0006c0b3) main_camera_pane_g1

0x218e,	// (0x0006c0b3) main_camera_pane_g2

0x218e,	// (0x0006c0b3) main_camera_pane_g3

0x218e,	// (0x0006c0b3) main_camera_pane_g4

0x218e,	// (0x0006c0b3) main_camera_pane_g5

0x218e,	// (0x0006c0b3) main_camera_pane_g6

0x218e,	// (0x0006c0b3) main_camera_pane_g7

0x0007,

0xf15d,	// (0x00079082) main_camera_pane_g

0x21dc,	// (0x0006c101) main_camera_pane_t1

0x21dc,	// (0x0006c101) main_camera_pane_t2

0x0001,

0xf16e,	// (0x00079093) main_camera_pane_t

0x741a,	// (0x0007133f) cams_zoom_pane_cp_ParamLimits

0x741a,	// (0x0007133f) cams_zoom_pane_cp

0x7448,	// (0x0007136d) image_cif_pane_ParamLimits

0x7448,	// (0x0007136d) image_cif_pane

0x1a59,	// (0x0006b97e) image_subqcif_pane

0x7456,	// (0x0007137b) main_video_pane_g1_ParamLimits

0x7456,	// (0x0007137b) main_video_pane_g1

0x747e,	// (0x000713a3) main_video_pane_g2_ParamLimits

0x747e,	// (0x000713a3) main_video_pane_g2

0x74b1,	// (0x000713d6) main_video_pane_g3_ParamLimits

0x74b1,	// (0x000713d6) main_video_pane_g3

0x74b1,	// (0x000713d6) main_video_pane_g4_ParamLimits

0x74b1,	// (0x000713d6) main_video_pane_g4

0x74df,	// (0x00071404) main_video_pane_g5_ParamLimits

0x74df,	// (0x00071404) main_video_pane_g5

0x280f,	// (0x0006c734) main_video_pane_g6_ParamLimits

0x280f,	// (0x0006c734) main_video_pane_g6

0x0006,

0xf173,	// (0x00079098) main_video_pane_g_ParamLimits

0xf173,	// (0x00079098) main_video_pane_g

0x74fb,	// (0x00071420) main_video_pane_t1_ParamLimits

0x74fb,	// (0x00071420) main_video_pane_t1

0x21be,	// (0x0006c0e3) cams_zoom_pane_g1

0x21be,	// (0x0006c0e3) cams_zoom_pane_g2

0x21be,	// (0x0006c0e3) cams_zoom_pane_g3

0x21be,	// (0x0006c0e3) cams_zoom_pane_g4

0x0003,

0xf182,	// (0x000790a7) cams_zoom_pane_g

0x2172,	// (0x0006c097) grid_cams_pane

0x2172,	// (0x0006c097) linegrid_cams_pane

0x7535,	// (0x0007145a) cell_cams_pane_ParamLimits

0x7535,	// (0x0007145a) cell_cams_pane

0x1a59,	// (0x0006b97e) cams_burst_image_pane

0x21be,	// (0x0006c0e3) cell_cams_pane_g1

0x1a59,	// (0x0006b97e) grid_highlight_pane_cp03

0x210f,	// (0x0006c034) mp_bg_pane_g1

0x1a59,	// (0x0006b97e) bg_list_pane_cp03

0x1a59,	// (0x0006b97e) bg_mp_pane

0x1a59,	// (0x0006b97e) grid_mp_pane

0x21be,	// (0x0006c0e3) media_player_g1

0x2eaa,	// (0x0006cdcf) media_player_t1

0x2eaa,	// (0x0006cdcf) media_player_t2

0x2eaa,	// (0x0006cdcf) media_player_t3

0x2eaa,	// (0x0006cdcf) media_player_t4

0x2eaa,	// (0x0006cdcf) media_player_t5

0x2eaa,	// (0x0006cdcf) media_player_t6

0x2eaa,	// (0x0006cdcf) media_player_t7

0x0006,

0xf4ec,	// (0x00079411) media_player_t

0x1a59,	// (0x0006b97e) wait_bar_pane_cp02

0xf4d1,	// (0x000793f6) main_usb_pane_t

0x3115,	// (0x0006d03a) cell_mp_pane

0x210f,	// (0x0006c034) cell_mp_pane_g1

0x1e9c,	// (0x0006bdc1) grid_highlight_pane_cp06

0x2829,	// (0x0006c74e) grid_skin_colour_pane

0x2831,	// (0x0006c756) list_highlight_pane_cp03

0x754a,	// (0x0007146f) skin_g1

0x2839,	// (0x0006c75e) skin_t1

0x2848,	// (0x0006c76d) skin_t2

0x0001,

0xf1b0,	// (0x000790d5) skin_t

0x7554,	// (0x00071479) cell_skin_colour_pane_ParamLimits

0x7554,	// (0x00071479) cell_skin_colour_pane

0x2856,	// (0x0006c77b) cell_skin_colour_pane_g1

0x75d8,	// (0x000714fd) call_video_g1_ParamLimits

0x75d8,	// (0x000714fd) call_video_g1

0x75e8,	// (0x0007150d) call_video_g2_ParamLimits

0x75e8,	// (0x0007150d) call_video_g2

0x0001,

0xf1b5,	// (0x000790da) call_video_g_ParamLimits

0xf1b5,	// (0x000790da) call_video_g

0x7642,	// (0x00071567) call_video_uplink_pane_cp1_ParamLimits

0x7642,	// (0x00071567) call_video_uplink_pane_cp1

0x2868,	// (0x0006c78d) call_video_uplink_pane_cp2

0x770e,	// (0x00071633) video_down_crop_pane_ParamLimits

0x770e,	// (0x00071633) video_down_crop_pane

0x7800,	// (0x00071725) video_down_pane_ParamLimits

0x7800,	// (0x00071725) video_down_pane

0x2870,	// (0x0006c795) video_down_subqcif_pane_ParamLimits

0x2870,	// (0x0006c795) video_down_subqcif_pane

0x2888,	// (0x0006c7ad) video_down_subqcif_pane_cp_ParamLimits

0x2888,	// (0x0006c7ad) video_down_subqcif_pane_cp

0x28ae,	// (0x0006c7d3) im_reading_pane_ParamLimits

0x28ae,	// (0x0006c7d3) im_reading_pane

0x7920,	// (0x00071845) im_writing_pane_ParamLimits

0x7920,	// (0x00071845) im_writing_pane

0x793e,	// (0x00071863) im_reading_pane_t1

0x28c8,	// (0x0006c7ed) list_im_pane

0x28d9,	// (0x0006c7fe) scroll_pane_cp07

0x7996,	// (0x000718bb) im_writing_pane_t1_ParamLimits

0x7996,	// (0x000718bb) im_writing_pane_t1

0x28f2,	// (0x0006c817) im_writing_pane_t2_ParamLimits

0x28f2,	// (0x0006c817) im_writing_pane_t2

0x0001,

0xf1bf,	// (0x000790e4) im_writing_pane_t_ParamLimits

0xf1bf,	// (0x000790e4) im_writing_pane_t

0x1e9c,	// (0x0006bdc1) input_focus_pane_cp04

0x1e9c,	// (0x0006bdc1) input_focus_pane_cp05

0x79a8,	// (0x000718cd) list_im_single_pane_ParamLimits

0x79a8,	// (0x000718cd) list_im_single_pane

0x79cf,	// (0x000718f4) list_single_im_pane_t1

0x2807,	// (0x0006c72c) blid_accuracy_pane

0x2807,	// (0x0006c72c) blid_compass_pane

0x4675,	// (0x0006e59a) main_location_t1

0x4675,	// (0x0006e59a) main_location_t2

0x4675,	// (0x0006e59a) main_location_t3

0x0002,

0xf4fb,	// (0x00079420) main_location_t

0x1e9c,	// (0x0006bdc1) aid_levels_location

0x210f,	// (0x0006c034) blid_accuracy_pane_g1

0x210f,	// (0x0006c034) blid_accuracy_pane_g2

0x0001,

0xf213,	// (0x00079138) blid_accuracy_pane_g

0x293a,	// (0x0006c85f) wml_content_pane

0x2b26,	// (0x0006ca4b) wml_button_pane_ParamLimits

0x2b26,	// (0x0006ca4b) wml_button_pane

0x79de,	// (0x00071903) wml_list_single_large_pane_ParamLimits

0x79de,	// (0x00071903) wml_list_single_large_pane

0x7a09,	// (0x0007192e) wml_list_single_medium_pane_ParamLimits

0x7a09,	// (0x0007192e) wml_list_single_medium_pane

0x7a3b,	// (0x00071960) wml_list_single_small_pane_ParamLimits

0x7a3b,	// (0x00071960) wml_list_single_small_pane

0x2b3a,	// (0x0006ca5f) wml_selection_box_pane_ParamLimits

0x2b3a,	// (0x0006ca5f) wml_selection_box_pane

0x2b4d,	// (0x0006ca72) wml_list_single_pane_t1

0x2b5c,	// (0x0006ca81) wml_list_single_medium_pane_t1

0x2b6b,	// (0x0006ca90) wml_list_single_large_pane_t1

0x2b7a,	// (0x0006ca9f) input_focus_pane_cp02_ParamLimits

0x2b7a,	// (0x0006ca9f) input_focus_pane_cp02

0x2b8d,	// (0x0006cab2) wml_selection_box_pane_g1

0x2b96,	// (0x0006cabb) wml_selection_box_pane_t1_ParamLimits

0x2b96,	// (0x0006cabb) wml_selection_box_pane_t1

0x20f7,	// (0x0006c01c) bg_wml_button_pane_ParamLimits

0x20f7,	// (0x0006c01c) bg_wml_button_pane

0x2bae,	// (0x0006cad3) wml_button_pane_g1

0x2bb6,	// (0x0006cadb) wml_button_pane_t1

0x2bae,	// (0x0006cad3) wml_button_bg_pane_g1

0x2bc6,	// (0x0006caeb) wml_button_bg_pane_g2

0x2bce,	// (0x0006caf3) wml_button_bg_pane_g3

0x2bd6,	// (0x0006cafb) wml_button_bg_pane_g4

0x2bde,	// (0x0006cb03) wml_button_bg_pane_g5

0x2be6,	// (0x0006cb0b) wml_button_bg_pane_g6

0x2bee,	// (0x0006cb13) wml_button_bg_pane_g7

0x2bf6,	// (0x0006cb1b) wml_button_bg_pane_g8

0x2bfe,	// (0x0006cb23) wml_button_bg_pane_g9

0x0008,

0xf1c4,	// (0x000790e9) wml_button_bg_pane_g

0x7a78,	// (0x0007199d) bg_list_pane_cp02

0x2c06,	// (0x0006cb2b) mce_header_pane_ParamLimits

0x2c06,	// (0x0006cb2b) mce_header_pane

0x2c1c,	// (0x0006cb41) mce_icon_pane

0x2c1c,	// (0x0006cb41) mce_image_pane

0x2c25,	// (0x0006cb4a) mce_text_pane_ParamLimits

0x2c25,	// (0x0006cb4a) mce_text_pane

0x7a82,	// (0x000719a7) scroll_pane_cp03

0x2b1e,	// (0x0006ca43) scroll_pane_cp04

0x2c38,	// (0x0006cb5d) scroll_pane_cp05_ParamLimits

0x2c38,	// (0x0006cb5d) scroll_pane_cp05

0x7a8c,	// (0x000719b1) mce_header_field_pane_ParamLimits

0x7a8c,	// (0x000719b1) mce_header_field_pane

0x7aac,	// (0x000719d1) mce_header_field_pane_2_ParamLimits

0x7aac,	// (0x000719d1) mce_header_field_pane_2

0x7ac2,	// (0x000719e7) mce_header_field_pane_3

0x7aca,	// (0x000719ef) list_single_mce_message_pane_ParamLimits

0x7aca,	// (0x000719ef) list_single_mce_message_pane

0x7af8,	// (0x00071a1d) list_single_mce_smart_pane_ParamLimits

0x7af8,	// (0x00071a1d) list_single_mce_smart_pane

0x2c44,	// (0x0006cb69) input_focus_pane_cp03

0x2c4d,	// (0x0006cb72) list_header_data_pane

0x7b31,	// (0x00071a56) mce_header_field_pane_t1

0x7b3f,	// (0x00071a64) list_single_mce_header_pane_ParamLimits

0x7b3f,	// (0x00071a64) list_single_mce_header_pane

0x2c55,	// (0x0006cb7a) list_single_mce_header_pane_t1

0x2c64,	// (0x0006cb89) list_single_mce_message_pane_g1

0x2c6c,	// (0x0006cb91) list_single_mce_message_pane_t1

0x7b95,	// (0x00071aba) bg_cale_heading_pane_cp01_ParamLimits

0x7b95,	// (0x00071aba) bg_cale_heading_pane_cp01

0x2c7a,	// (0x0006cb9f) bg_cale_pane_cp02_ParamLimits

0x2c7a,	// (0x0006cb9f) bg_cale_pane_cp02

0x7be3,	// (0x00071b08) cale_month_corner_pane

0x7c02,	// (0x00071b27) cale_month_day_heading_pane_ParamLimits

0x7c02,	// (0x00071b27) cale_month_day_heading_pane

0x7c68,	// (0x00071b8d) cale_month_pane_g1_ParamLimits

0x7c68,	// (0x00071b8d) cale_month_pane_g1

0x7cab,	// (0x00071bd0) cale_month_pane_g2_ParamLimits

0x7cab,	// (0x00071bd0) cale_month_pane_g2

0x7ce5,	// (0x00071c0a) cale_month_pane_g3_ParamLimits

0x7ce5,	// (0x00071c0a) cale_month_pane_g3

0x7d35,	// (0x00071c5a) cale_month_pane_g4_ParamLimits

0x7d35,	// (0x00071c5a) cale_month_pane_g4

0x7d85,	// (0x00071caa) cale_month_pane_g5_ParamLimits

0x7d85,	// (0x00071caa) cale_month_pane_g5

0x7dd5,	// (0x00071cfa) cale_month_pane_g6_ParamLimits

0x7dd5,	// (0x00071cfa) cale_month_pane_g6

0x7e25,	// (0x00071d4a) cale_month_pane_g7_ParamLimits

0x7e25,	// (0x00071d4a) cale_month_pane_g7

0x7e8d,	// (0x00071db2) cale_month_pane_g8_ParamLimits

0x7e8d,	// (0x00071db2) cale_month_pane_g8

0x7ef5,	// (0x00071e1a) cale_month_pane_g9_ParamLimits

0x7ef5,	// (0x00071e1a) cale_month_pane_g9

0x7f53,	// (0x00071e78) cale_month_pane_g10_ParamLimits

0x7f53,	// (0x00071e78) cale_month_pane_g10

0x7fb1,	// (0x00071ed6) cale_month_pane_g11_ParamLimits

0x7fb1,	// (0x00071ed6) cale_month_pane_g11

0x8005,	// (0x00071f2a) cale_month_pane_g12_ParamLimits

0x8005,	// (0x00071f2a) cale_month_pane_g12

0x805b,	// (0x00071f80) cale_month_pane_g13_ParamLimits

0x805b,	// (0x00071f80) cale_month_pane_g13

0x000c,

0xf1d7,	// (0x000790fc) cale_month_pane_g_ParamLimits

0xf1d7,	// (0x000790fc) cale_month_pane_g

0x80b1,	// (0x00071fd6) cale_month_week_pane

0x80d5,	// (0x00071ffa) grid_cale_month_pane_ParamLimits

0x80d5,	// (0x00071ffa) grid_cale_month_pane

0x8132,	// (0x00072057) cale_month_day_heading_pane_t1

0x81b8,	// (0x000720dd) cale_month_day_heading_pane_t2

0x8231,	// (0x00072156) cale_month_day_heading_pane_t3

0x82aa,	// (0x000721cf) cale_month_day_heading_pane_t4

0x8323,	// (0x00072248) cale_month_day_heading_pane_t5

0x839c,	// (0x000722c1) cale_month_day_heading_pane_t6

0x8415,	// (0x0007233a) cale_month_day_heading_pane_t7

0x0006,

0xf1f2,	// (0x00079117) cale_month_day_heading_pane_t

0x27b5,	// (0x0006c6da) bg_cale_side_pane_cp01

0x84a6,	// (0x000723cb) cale_month_week_pane_t1

0x84bf,	// (0x000723e4) cale_month_week_pane_t2

0x84d8,	// (0x000723fd) cale_month_week_pane_t3

0x84f1,	// (0x00072416) cale_month_week_pane_t4

0x850c,	// (0x00072431) cale_month_week_pane_t5

0x852d,	// (0x00072452) cale_month_week_pane_t6

0x0005,

0xf201,	// (0x00079126) cale_month_week_pane_t

0x854e,	// (0x00072473) cell_cale_month_pane_ParamLimits

0x854e,	// (0x00072473) cell_cale_month_pane

0x8674,	// (0x00072599) cell_cale_month_pane_g1

0x8680,	// (0x000725a5) cell_cale_month_pane_t1_ParamLimits

0x8680,	// (0x000725a5) cell_cale_month_pane_t1

0x27c3,	// (0x0006c6e8) grid_highlight_pane_cp08

0x210f,	// (0x0006c034) main_smil_g1

0x86ac,	// (0x000725d1) smil_status_pane

0x2cb9,	// (0x0006cbde) smil_text_pane

0x2747,	// (0x0006c66c) bg_popup_call3_rect_pane_g8

0x273f,	// (0x0006c664) bg_popup_call3_rect_pane_g9

0x0008,

0xf218,	// (0x0007913d) bg_popup_call3_rect_pane_g

0x4751,	// (0x0006e676) smil_status_volume_pane_g1

0x2cc3,	// (0x0006cbe8) smil_status_pane_t1

0x96fe,	// (0x00073623) volume_smil_pane

0x2cda,	// (0x0006cbff) list_smil_text_pane

0x86bf,	// (0x000725e4) scroll_pane_cp011

0x86ca,	// (0x000725ef) smil_text_list_pane_t1_ParamLimits

0x86ca,	// (0x000725ef) smil_text_list_pane_t1

0x8757,	// (0x0007267c) aid_volume_smil_ParamLimits

0x8757,	// (0x0007267c) aid_volume_smil

0x210f,	// (0x0006c034) smil_volume_pane_g1

0x210f,	// (0x0006c034) smil_volume_pane_g2

0x0001,

0xf213,	// (0x00079138) smil_volume_pane_g

0x6f2c,	// (0x00070e51) listscroll_cale_day_pane

0x2ce4,	// (0x0006cc09) bg_cale_pane

0x2cfc,	// (0x0006cc21) list_cale_pane

0x2d1f,	// (0x0006cc44) scroll_pane_cp09

0x2717,	// (0x0006c63c) cale_bg_pane_g1

0x270f,	// (0x0006c634) cale_bg_pane_g2

0x2707,	// (0x0006c62c) cale_bg_pane_g3

0x2727,	// (0x0006c64c) cale_bg_pane_g4

0x271f,	// (0x0006c644) cale_bg_pane_g5

0x272f,	// (0x0006c654) cale_bg_pane_g6

0x2737,	// (0x0006c65c) cale_bg_pane_g7

0x2747,	// (0x0006c66c) cale_bg_pane_g8

0x273f,	// (0x0006c664) cale_bg_pane_g9

0x0008,

0xf218,	// (0x0007913d) cale_bg_pane_g

0x8781,	// (0x000726a6) list_cale_time_pane_ParamLimits

0x8781,	// (0x000726a6) list_cale_time_pane

0x2d30,	// (0x0006cc55) list_cale_time_pane_g1_ParamLimits

0x2d30,	// (0x0006cc55) list_cale_time_pane_g1

0x2d3c,	// (0x0006cc61) list_cale_time_pane_g2_ParamLimits

0x2d3c,	// (0x0006cc61) list_cale_time_pane_g2

0x87a9,	// (0x000726ce) list_cale_time_pane_g3_ParamLimits

0x87a9,	// (0x000726ce) list_cale_time_pane_g3

0x87b7,	// (0x000726dc) list_cale_time_pane_g4_ParamLimits

0x87b7,	// (0x000726dc) list_cale_time_pane_g4

0x87c5,	// (0x000726ea) list_cale_time_pane_g5_ParamLimits

0x87c5,	// (0x000726ea) list_cale_time_pane_g5

0x0005,

0xf22b,	// (0x00079150) list_cale_time_pane_g_ParamLimits

0xf22b,	// (0x00079150) list_cale_time_pane_g

0x2d56,	// (0x0006cc7b) list_cale_time_pane_t1_ParamLimits

0x2d56,	// (0x0006cc7b) list_cale_time_pane_t1

0x2d7e,	// (0x0006cca3) list_cale_time_pane_t2_ParamLimits

0x2d7e,	// (0x0006cca3) list_cale_time_pane_t2

0x8a80,	// (0x000729a5) aid_blid_cardinal_pane

0x8ac2,	// (0x000729e7) compass_pane_t4

0x2da6,	// (0x0006cccb) list_cale_time_pane_t4_ParamLimits

0x2da6,	// (0x0006cccb) list_cale_time_pane_t4

0x8ad0,	// (0x000729f5) compass_pane_t5

0x8ae0,	// (0x00072a05) compass_pane_t6

0x8aee,	// (0x00072a13) compass_pane_t7

0x322f,	// (0x0006d154) navi_pane_cc_t1

0x340c,	// (0x0006d331) aid_phob_thumbnail_center_pane

0x8ea1,	// (0x00072dc6) main_postcard_pane_g4_ParamLimits

0x0002,

0xf238,	// (0x0007915d) list_cale_time_pane_t_ParamLimits

0xf238,	// (0x0007915d) list_cale_time_pane_t

0x1acd,	// (0x0006b9f2) bg_popup_window_pane_cp02_ParamLimits

0x1acd,	// (0x0006b9f2) bg_popup_window_pane_cp02

0x2dce,	// (0x0006ccf3) heading_pane_cp01_ParamLimits

0x2dce,	// (0x0006ccf3) heading_pane_cp01

0x2dda,	// (0x0006ccff) loc_req_pane_ParamLimits

0x2dda,	// (0x0006ccff) loc_req_pane

0x2dec,	// (0x0006cd11) loc_type_pane_ParamLimits

0x2dec,	// (0x0006cd11) loc_type_pane

0x2dfe,	// (0x0006cd23) loc_type_pane_t1_ParamLimits

0x2dfe,	// (0x0006cd23) loc_type_pane_t1

0x2e10,	// (0x0006cd35) loc_type_pane_t2_ParamLimits

0x2e10,	// (0x0006cd35) loc_type_pane_t2

0x2e22,	// (0x0006cd47) loc_type_pane_t3_ParamLimits

0x2e22,	// (0x0006cd47) loc_type_pane_t3

0x0002,

0xf23f,	// (0x00079164) loc_type_pane_t_ParamLimits

0xf23f,	// (0x00079164) loc_type_pane_t

0x2e34,	// (0x0006cd59) list_loc_req_pane

0x2e3e,	// (0x0006cd63) scroll_pane_cp012

0x5f3d,	// (0x0006fe62) list_single_loc_request_popup_menu_pane_ParamLimits

0x5f3d,	// (0x0006fe62) list_single_loc_request_popup_menu_pane

0x2e49,	// (0x0006cd6e) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x2e49,	// (0x0006cd6e) list_single_loc_request_popup_menu_pane_g1

0x2e55,	// (0x0006cd7a) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x2e55,	// (0x0006cd7a) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf246,	// (0x0007916b) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf246,	// (0x0007916b) list_single_loc_request_popup_menu_pane_g

0x2e61,	// (0x0006cd86) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x2e61,	// (0x0006cd86) list_single_loc_request_popup_menu_pane_t1

0x87d3,	// (0x000726f8) bg_popup_window_pane_cp03_ParamLimits

0x87d3,	// (0x000726f8) bg_popup_window_pane_cp03

0x87e1,	// (0x00072706) heading_loc_req_pane_ParamLimits

0x87e1,	// (0x00072706) heading_loc_req_pane

0x87ed,	// (0x00072712) popup_dyc_status_message_window_g1_ParamLimits

0x87ed,	// (0x00072712) popup_dyc_status_message_window_g1

0x87f9,	// (0x0007271e) popup_dyc_status_message_window_t1_ParamLimits

0x87f9,	// (0x0007271e) popup_dyc_status_message_window_t1

0x880b,	// (0x00072730) popup_dyc_status_message_window_t2_ParamLimits

0x880b,	// (0x00072730) popup_dyc_status_message_window_t2

0x881d,	// (0x00072742) popup_dyc_status_message_window_t3_ParamLimits

0x881d,	// (0x00072742) popup_dyc_status_message_window_t3

0x0002,

0xf24b,	// (0x00079170) popup_dyc_status_message_window_t_ParamLimits

0xf24b,	// (0x00079170) popup_dyc_status_message_window_t

0x1e9c,	// (0x0006bdc1) bg_heading_pane_cp01

0x2e83,	// (0x0006cda8) heading_loc_req_pane_g1

0x2e8b,	// (0x0006cdb0) heading_loc_req_pane_g2

0x2e93,	// (0x0006cdb8) heading_loc_req_pane_g3

0x0002,

0xf252,	// (0x00079177) heading_loc_req_pane_g

0x2e9b,	// (0x0006cdc0) heading_loc_req_pane_t1

0x2eba,	// (0x0006cddf) bg_popup_sub_pane_cp01_ParamLimits

0x2eba,	// (0x0006cddf) bg_popup_sub_pane_cp01

0x2ec8,	// (0x0006cded) popup_cale_events_window_g1_ParamLimits

0x2ec8,	// (0x0006cded) popup_cale_events_window_g1

0x2ee8,	// (0x0006ce0d) popup_cale_events_window_g2_ParamLimits

0x2ee8,	// (0x0006ce0d) popup_cale_events_window_g2

0x0001,

0xf274,	// (0x00079199) popup_cale_events_window_g_ParamLimits

0xf274,	// (0x00079199) popup_cale_events_window_g

0x2f08,	// (0x0006ce2d) popup_cale_events_window_t1_ParamLimits

0x2f08,	// (0x0006ce2d) popup_cale_events_window_t1

0x2f1a,	// (0x0006ce3f) popup_cale_events_window_t2_ParamLimits

0x2f1a,	// (0x0006ce3f) popup_cale_events_window_t2

0x2f58,	// (0x0006ce7d) popup_cale_events_window_t3_ParamLimits

0x2f58,	// (0x0006ce7d) popup_cale_events_window_t3

0x2f92,	// (0x0006ceb7) popup_cale_events_window_t4_ParamLimits

0x2f92,	// (0x0006ceb7) popup_cale_events_window_t4

0x0003,

0xf279,	// (0x0007919e) popup_cale_events_window_t_ParamLimits

0xf279,	// (0x0007919e) popup_cale_events_window_t

0x8847,	// (0x0007276c) call_type_pane

0x3dc0,	// (0x0006dce5) popup_call_status_window_g1

0x8853,	// (0x00072778) popup_call_status_window_g2

0x885f,	// (0x00072784) popup_call_status_window_g3

0x0002,

0xf282,	// (0x000791a7) popup_call_status_window_g

0x2fc8,	// (0x0006ceed) call_type_pane_g1

0x2fd1,	// (0x0006cef6) call_type_pane_g2

0x0001,

0xf289,	// (0x000791ae) call_type_pane_g

0x1e9c,	// (0x0006bdc1) bg_popup_sub_pane_cp02

0x2fda,	// (0x0006ceff) listscroll_popup_wml_pane

0x2fe2,	// (0x0006cf07) list_wml_pane

0x2fec,	// (0x0006cf11) scroll_pane_cp013

0x2ff7,	// (0x0006cf1c) list_single_graphic_popup_wml_pane_ParamLimits

0x2ff7,	// (0x0006cf1c) list_single_graphic_popup_wml_pane

0x210f,	// (0x0006c034) list_single_graphic_popup_wml_pane_g1

0x300b,	// (0x0006cf30) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf28e,	// (0x000791b3) list_single_graphic_popup_wml_pane_g

0x3013,	// (0x0006cf38) list_single_graphic_popup_wml_pane_t1

0x3021,	// (0x0006cf46) aid_call_pane

0x20ef,	// (0x0006c014) popup_clock_analogue_window_g1

0x20ef,	// (0x0006c014) popup_clock_analogue_window_g2

0x886b,	// (0x00072790) popup_clock_analogue_window_g3

0x886b,	// (0x00072790) popup_clock_analogue_window_g4

0x210f,	// (0x0006c034) popup_clock_analogue_window_g5

0x0004,

0xf293,	// (0x000791b8) popup_clock_analogue_window_g

0x8873,	// (0x00072798) popup_clock_analogue_window_t1

0x8881,	// (0x000727a6) clock_digital_number_pane_ParamLimits

0x8881,	// (0x000727a6) clock_digital_number_pane

0x888d,	// (0x000727b2) clock_digital_number_pane_cp02_ParamLimits

0x888d,	// (0x000727b2) clock_digital_number_pane_cp02

0x8899,	// (0x000727be) clock_digital_number_pane_cp03_ParamLimits

0x8899,	// (0x000727be) clock_digital_number_pane_cp03

0x88a5,	// (0x000727ca) clock_digital_number_pane_cp04_ParamLimits

0x88a5,	// (0x000727ca) clock_digital_number_pane_cp04

0x88b1,	// (0x000727d6) clock_digital_separator_pane_ParamLimits

0x88b1,	// (0x000727d6) clock_digital_separator_pane

0x88bd,	// (0x000727e2) popup_clock_digital_window_t1

0x210f,	// (0x0006c034) clock_digital_number_pane_g1

0x210f,	// (0x0006c034) clock_digital_number_pane_g2

0x0001,

0xf213,	// (0x00079138) clock_digital_number_pane_g

0x210f,	// (0x0006c034) clock_digital_separator_pane_g1

0x210f,	// (0x0006c034) clock_digital_separator_pane_g2

0x0001,

0xf213,	// (0x00079138) clock_digital_separator_pane_g

0x1e9c,	// (0x0006bdc1) bg_popup_window_pane_cp04

0x3031,	// (0x0006cf56) heading_pane_cp03

0x2807,	// (0x0006c72c) listscroll_popup_gms_pane

0x1e9c,	// (0x0006bdc1) grid_large_graphic_popup_pane

0x3039,	// (0x0006cf5e) listscroll_popup_gms_pane_g1

0x3042,	// (0x0006cf67) listscroll_popup_gms_pane_g2

0x0001,

0xf29e,	// (0x000791c3) listscroll_popup_gms_pane_g

0x304b,	// (0x0006cf70) scroll_pane_cp014

0x2172,	// (0x0006c097) cell_large_graphic_popup_pane_ParamLimits

0x2172,	// (0x0006c097) cell_large_graphic_popup_pane

0x2180,	// (0x0006c0a5) cell_large_graphic_popup_pane_g1_ParamLimits

0x2180,	// (0x0006c0a5) cell_large_graphic_popup_pane_g1

0x3054,	// (0x0006cf79) cell_large_graphic_popup_pane_g2_ParamLimits

0x3054,	// (0x0006cf79) cell_large_graphic_popup_pane_g2

0x3062,	// (0x0006cf87) cell_large_graphic_popup_pane_g3_ParamLimits

0x3062,	// (0x0006cf87) cell_large_graphic_popup_pane_g3

0x3070,	// (0x0006cf95) cell_large_graphic_popup_pane_g4_ParamLimits

0x3070,	// (0x0006cf95) cell_large_graphic_popup_pane_g4

0x0003,

0xf2a3,	// (0x000791c8) cell_large_graphic_popup_pane_g_ParamLimits

0xf2a3,	// (0x000791c8) cell_large_graphic_popup_pane_g

0x1e9c,	// (0x0006bdc1) grid_highlight_pane_cp010

0x210f,	// (0x0006c034) bg_popup_call_pane_g1

0x3081,	// (0x0006cfa6) list_single_graphic_popup_conf_pane_ParamLimits

0x3081,	// (0x0006cfa6) list_single_graphic_popup_conf_pane

0x3094,	// (0x0006cfb9) list_highlight_pane_cp01

0x309d,	// (0x0006cfc2) list_single_graphic_popup_conf_pane_g1

0x30a5,	// (0x0006cfca) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf2ac,	// (0x000791d1) list_single_graphic_popup_conf_pane_g

0x30ad,	// (0x0006cfd2) list_single_graphic_popup_conf_pane_t1

0x30bb,	// (0x0006cfe0) linegrid_cams_pane_g1

0x88da,	// (0x000727ff) linegrid_cams_pane_g2

0x274f,	// (0x0006c674) linegrid_cams_pane_g3

0x30c4,	// (0x0006cfe9) linegrid_cams_pane_g4

0x88e3,	// (0x00072808) linegrid_cams_pane_g5

0x88ec,	// (0x00072811) linegrid_cams_pane_g6

0x27f6,	// (0x0006c71b) linegrid_cams_pane_g7

0x0006,

0xf2b1,	// (0x000791d6) linegrid_cams_pane_g

0x30cd,	// (0x0006cff2) popup_clock_analogue_window

0x30cd,	// (0x0006cff2) popup_clock_digital_window

0x1e9c,	// (0x0006bdc1) popup_phob_thumbnail_window

0x210f,	// (0x0006c034) call_video_uplink_pane_g1

0x30d6,	// (0x0006cffb) call_video_uplink_pane_g2

0x0001,

0xf2c0,	// (0x000791e5) call_video_uplink_pane_g

0x30de,	// (0x0006d003) video_uplink_pane

0x30e6,	// (0x0006d00b) mce_image_pane_g1

0x88f5,	// (0x0007281a) mce_image_pane_g2

0x88fd,	// (0x00072822) mce_image_pane_g3

0x8905,	// (0x0007282a) mce_image_pane_g4

0x890d,	// (0x00072832) mce_image_pane_g5

0x0004,

0xf2c5,	// (0x000791ea) mce_image_pane_g

0x30f0,	// (0x0006d015) control_top_pane_stacon_cp01_ParamLimits

0x30f0,	// (0x0006d015) control_top_pane_stacon_cp01

0x3104,	// (0x0006d029) uni_indicator_pane_stacon_cp01_ParamLimits

0x3104,	// (0x0006d029) uni_indicator_pane_stacon_cp01

0x3115,	// (0x0006d03a) bg_popup_sub_pane_cp03

0x8915,	// (0x0007283a) chi_dic_find_pane

0x891d,	// (0x00072842) listscroll_chi_dic_pane

0x8926,	// (0x0007284b) main_pane_chidic_g1

0x8939,	// (0x0007285e) chi_dic_find_pane_t1

0x311f,	// (0x0006d044) find_chidic_pane

0x3128,	// (0x0006d04d) chi_dic_list_pane_ParamLimits

0x3128,	// (0x0006d04d) chi_dic_list_pane

0x3139,	// (0x0006d05e) scroll_pane_cp020

0x8947,	// (0x0007286c) find_chidic_pane_t1

0x1e9c,	// (0x0006bdc1) input_focus_pane_cp06

0x8956,	// (0x0007287b) list_chi_dic_pane_ParamLimits

0x8956,	// (0x0007287b) list_chi_dic_pane

0x8973,	// (0x00072898) list_chi_dic_pane_t1_ParamLimits

0x8973,	// (0x00072898) list_chi_dic_pane_t1

0x1e9c,	// (0x0006bdc1) list_highlight_pane_cp020

0x3141,	// (0x0006d066) bg_cale_heading_pane_g1

0x8986,	// (0x000728ab) bg_cale_heading_pane_g2

0x898e,	// (0x000728b3) bg_cale_heading_pane_g3

0x8996,	// (0x000728bb) bg_cale_heading_pane_g4

0x89a0,	// (0x000728c5) bg_cale_heading_pane_g5

0x89aa,	// (0x000728cf) bg_cale_heading_pane_g6

0x89b2,	// (0x000728d7) bg_cale_heading_pane_g7

0x89ba,	// (0x000728df) bg_cale_heading_pane_g8

0x89c4,	// (0x000728e9) bg_cale_heading_pane_g9

0x0008,

0xf2d0,	// (0x000791f5) bg_cale_heading_pane_g

0x3141,	// (0x0006d066) bg_cale_side_pane_g1

0x89ce,	// (0x000728f3) bg_cale_side_pane_g2

0x89d8,	// (0x000728fd) bg_cale_side_pane_g3

0x89e2,	// (0x00072907) bg_cale_side_pane_g4

0x89ec,	// (0x00072911) bg_cale_side_pane_g5

0x89f6,	// (0x0007291b) bg_cale_side_pane_g6

0x8a00,	// (0x00072925) bg_cale_side_pane_g7

0x8a0a,	// (0x0007292f) bg_cale_side_pane_g8

0x8a12,	// (0x00072937) bg_cale_side_pane_g9

0x0008,

0xf2e3,	// (0x00079208) bg_cale_side_pane_g

0x8a1a,	// (0x0007293f) popup_call_status_window_ParamLimits

0x8a1a,	// (0x0007293f) popup_call_status_window

0x3149,	// (0x0006d06e) stacon_top_pane

0x3151,	// (0x0006d076) status_pane_ParamLimits

0x3151,	// (0x0006d076) status_pane

0x3166,	// (0x0006d08b) status_small_pane

0x316e,	// (0x0006d093) control_pane

0x1e9c,	// (0x0006bdc1) stacon_bottom_pane

0x3176,	// (0x0006d09b) list_single_mce_smart_pane_t1_ParamLimits

0x3176,	// (0x0006d09b) list_single_mce_smart_pane_t1

0x3189,	// (0x0006d0ae) list_single_mce_smart_pane_t2_ParamLimits

0x3189,	// (0x0006d0ae) list_single_mce_smart_pane_t2

0x0001,

0xf2f6,	// (0x0007921b) list_single_mce_smart_pane_t_ParamLimits

0xf2f6,	// (0x0007921b) list_single_mce_smart_pane_t

0x8a26,	// (0x0007294b) compass_pane

0x8a32,	// (0x00072957) main_location2_pane_t1

0x8a46,	// (0x0007296b) main_location2_pane_t2

0x8a5a,	// (0x0007297f) main_location2_pane_t3

0x0003,

0xf2fb,	// (0x00079220) main_location2_pane_t

0x31a8,	// (0x0006d0cd) compass_pane_g1_ParamLimits

0x31a8,	// (0x0006d0cd) compass_pane_g1

0x8aa4,	// (0x000729c9) compass_pane_t1

0x8ab3,	// (0x000729d8) compass_pane_t2

0x0005,

0xf304,	// (0x00079229) compass_pane_t

0x8afe,	// (0x00072a23) text_secondary_cp61

0x3226,	// (0x0006d14b) navi_pane_cams_g5

0x32a2,	// (0x0006d1c7) navi_pane_im_t1

0x32b0,	// (0x0006d1d5) navi_pane_mp_g1_ParamLimits

0x32b0,	// (0x0006d1d5) navi_pane_mp_g1

0x32c4,	// (0x0006d1e9) navi_pane_mp_g2_ParamLimits

0x32c4,	// (0x0006d1e9) navi_pane_mp_g2

0x32d0,	// (0x0006d1f5) navi_pane_mp_g3_ParamLimits

0x32d0,	// (0x0006d1f5) navi_pane_mp_g3

0x0002,

0xf318,	// (0x0007923d) navi_pane_mp_g_ParamLimits

0xf318,	// (0x0007923d) navi_pane_mp_g

0x32dc,	// (0x0006d201) navi_pane_mp_t1

0x32ea,	// (0x0006d20f) navi_pane_mp_t2

0x0002,

0xf31f,	// (0x00079244) navi_pane_mp_t

0x3355,	// (0x0006d27a) navi_pane_vt_g1

0x32dc,	// (0x0006d201) navi_pane_vt_t1

0x335d,	// (0x0006d282) navi_slider_pane

0x2807,	// (0x0006c72c) zooming_pane

0x336d,	// (0x0006d292) navi_slider_pane_g1

0x8b39,	// (0x00072a5e) navi_slider_pane_g2

0x0006,

0xf326,	// (0x0007924b) navi_slider_pane_g

0x3391,	// (0x0006d2b6) aid_levels_zoom

0x3399,	// (0x0006d2be) zooming_pane_g1

0x33a1,	// (0x0006d2c6) zooming_pane_g2

0x33a1,	// (0x0006d2c6) zooming_pane_g3

0x0002,

0xf335,	// (0x0007925a) zooming_pane_g

0x33a9,	// (0x0006d2ce) level_10_zoom

0x33b2,	// (0x0006d2d7) level_11_zoom

0x33bb,	// (0x0006d2e0) level_1_zoom

0x33c4,	// (0x0006d2e9) level_2_zoom

0x33cd,	// (0x0006d2f2) level_3_zoom

0x33d6,	// (0x0006d2fb) level_4_zoom

0x33df,	// (0x0006d304) level_5_zoom

0x33e8,	// (0x0006d30d) level_6_zoom

0x33f1,	// (0x0006d316) level_7_zoom

0x33fa,	// (0x0006d31f) level_8_zoom

0x3403,	// (0x0006d328) level_9_zoom

0x3414,	// (0x0006d339) popup_phob_thumbnail_window_g1

0x341c,	// (0x0006d341) popup_phob_thumbnail_window_g2

0x0001,

0xf33c,	// (0x00079261) popup_phob_thumbnail_window_g

0x93b3,	// (0x000732d8) level_1_location

0x93bb,	// (0x000732e0) level_2_location

0x93c3,	// (0x000732e8) level_3_location

0x93cd,	// (0x000732f2) level_4_location

0x2807,	// (0x0006c72c) level_5_location

0x8b4b,	// (0x00072a70) mce_icon_pane_g1

0x8b53,	// (0x00072a78) mce_icon_pane_g2

0x0001,

0xf341,	// (0x00079266) mce_icon_pane_g

0x8b5b,	// (0x00072a80) main_mup_pane_g1_ParamLimits

0x8b5b,	// (0x00072a80) main_mup_pane_g1

0x219c,	// (0x0006c0c1) main_mup_pane_g2_ParamLimits

0x219c,	// (0x0006c0c1) main_mup_pane_g2

0x219c,	// (0x0006c0c1) main_mup_pane_g3_ParamLimits

0x219c,	// (0x0006c0c1) main_mup_pane_g3

0x219c,	// (0x0006c0c1) main_mup_pane_g4_ParamLimits

0x219c,	// (0x0006c0c1) main_mup_pane_g4

0x219c,	// (0x0006c0c1) main_mup_pane_g5_ParamLimits

0x219c,	// (0x0006c0c1) main_mup_pane_g5

0x219c,	// (0x0006c0c1) main_mup_pane_g6_ParamLimits

0x219c,	// (0x0006c0c1) main_mup_pane_g6

0x219c,	// (0x0006c0c1) main_mup_pane_g7_ParamLimits

0x219c,	// (0x0006c0c1) main_mup_pane_g7

0x219c,	// (0x0006c0c1) main_mup_pane_g8_ParamLimits

0x219c,	// (0x0006c0c1) main_mup_pane_g8

0x219c,	// (0x0006c0c1) main_mup_pane_g9_ParamLimits

0x219c,	// (0x0006c0c1) main_mup_pane_g9

0x219c,	// (0x0006c0c1) main_mup_pane_g10_ParamLimits

0x219c,	// (0x0006c0c1) main_mup_pane_g10

0x219c,	// (0x0006c0c1) main_mup_pane_g11_ParamLimits

0x219c,	// (0x0006c0c1) main_mup_pane_g11

0x218e,	// (0x0006c0b3) main_mup_pane_g12_ParamLimits

0x218e,	// (0x0006c0b3) main_mup_pane_g12

0x219c,	// (0x0006c0c1) main_mup_pane_g13_ParamLimits

0x219c,	// (0x0006c0c1) main_mup_pane_g13

0x000c,

0xf346,	// (0x0007926b) main_mup_pane_g_ParamLimits

0xf346,	// (0x0007926b) main_mup_pane_g

0x21aa,	// (0x0006c0cf) main_mup_pane_t1_ParamLimits

0x21aa,	// (0x0006c0cf) main_mup_pane_t1

0x21aa,	// (0x0006c0cf) main_mup_pane_t2_ParamLimits

0x21aa,	// (0x0006c0cf) main_mup_pane_t2

0x21aa,	// (0x0006c0cf) main_mup_pane_t3_ParamLimits

0x21aa,	// (0x0006c0cf) main_mup_pane_t3

0x21dc,	// (0x0006c101) main_mup_pane_t4_ParamLimits

0x21dc,	// (0x0006c101) main_mup_pane_t4

0x21dc,	// (0x0006c101) main_mup_pane_t5_ParamLimits

0x21dc,	// (0x0006c101) main_mup_pane_t5

0x21c8,	// (0x0006c0ed) main_mup_pane_t6_ParamLimits

0x21c8,	// (0x0006c0ed) main_mup_pane_t6

0x0005,

0xf361,	// (0x00079286) main_mup_pane_t_ParamLimits

0xf361,	// (0x00079286) main_mup_pane_t

0x2119,	// (0x0006c03e) mup_progress_pane_ParamLimits

0x2119,	// (0x0006c03e) mup_progress_pane

0x4888,	// (0x0006e7ad) mup_visualizer_pane_ParamLimits

0x4888,	// (0x0006e7ad) mup_visualizer_pane

0x4888,	// (0x0006e7ad) mup_volume_pane_ParamLimits

0x4888,	// (0x0006e7ad) mup_volume_pane

0x218e,	// (0x0006c0b3) mup_visualizer_pane_g1_ParamLimits

0x218e,	// (0x0006c0b3) mup_visualizer_pane_g1

0x3454,	// (0x0006d379) mup_visualizer_pane_g2_ParamLimits

0x3454,	// (0x0006d379) mup_visualizer_pane_g2

0x2180,	// (0x0006c0a5) mup_visualizer_pane_g3_ParamLimits

0x2180,	// (0x0006c0a5) mup_visualizer_pane_g3

0x0002,

0xf36e,	// (0x00079293) mup_visualizer_pane_g_ParamLimits

0xf36e,	// (0x00079293) mup_visualizer_pane_g

0x21be,	// (0x0006c0e3) mup_volume_pane_g1

0x21be,	// (0x0006c0e3) mup_volume_pane_g2

0x0001,

0xf08c,	// (0x00078fb1) mup_volume_pane_g

0x21be,	// (0x0006c0e3) mup_progress_pane_g1

0x21be,	// (0x0006c0e3) mup_progress_pane_g2

0x21be,	// (0x0006c0e3) mup_progress_pane_g3

0x0002,

0xf375,	// (0x0007929a) mup_progress_pane_g

0x1e9c,	// (0x0006bdc1) bg_popup_window_pane_cp05

0x3462,	// (0x0006d387) heading_pane_cp02_ParamLimits

0x3462,	// (0x0006d387) heading_pane_cp02

0x347c,	// (0x0006d3a1) list_popup_blid_pane

0x3484,	// (0x0006d3a9) list_blid_sat_info_pane_ParamLimits

0x3484,	// (0x0006d3a9) list_blid_sat_info_pane

0x3497,	// (0x0006d3bc) list_blid_sat_info_pane_g1

0x349f,	// (0x0006d3c4) list_blid_sat_info_pane_t1

0x8c56,	// (0x00072b7b) mup_equalizer_pane_ParamLimits

0x8c56,	// (0x00072b7b) mup_equalizer_pane

0x8c77,	// (0x00072b9c) mup_equalizer_pane_cp1_ParamLimits

0x8c77,	// (0x00072b9c) mup_equalizer_pane_cp1

0x8c98,	// (0x00072bbd) mup_equalizer_pane_cp2_ParamLimits

0x8c98,	// (0x00072bbd) mup_equalizer_pane_cp2

0x8cb9,	// (0x00072bde) mup_equalizer_pane_cp3_ParamLimits

0x8cb9,	// (0x00072bde) mup_equalizer_pane_cp3

0x8cda,	// (0x00072bff) mup_equalizer_pane_cp4_ParamLimits

0x8cda,	// (0x00072bff) mup_equalizer_pane_cp4

0x8cfb,	// (0x00072c20) mup_equalizer_pane_cp5

0x8d11,	// (0x00072c36) mup_equalizer_pane_cp6

0x8d29,	// (0x00072c4e) mup_equalizer_pane_cp7

0x45d5,	// (0x0006e4fa) bg_popup_call_poc_act_pane_g9

0x45dd,	// (0x0006e502) bg_popup_call_poc_act_pane_g10

0x45e5,	// (0x0006e50a) bg_popup_call_poc_act_pane_g11

0x000a,

0x20f7,	// (0x0006c01c) mup_scale_pane

0x210f,	// (0x0006c034) mup_scale_pane_g1

0x34ad,	// (0x0006d3d2) mup_scale_pane_g2

0x0006,

0xf391,	// (0x000792b6) mup_scale_pane_g

0x34d1,	// (0x0006d3f6) msg_data_pane

0x34d9,	// (0x0006d3fe) scroll_pane_cp017

0x5f57,	// (0x0006fe7c) bg_list_pane_cp04_ParamLimits

0x5f57,	// (0x0006fe7c) bg_list_pane_cp04

0x34e9,	// (0x0006d40e) msg_data_pane_g1

0x8d53,	// (0x00072c78) msg_data_pane_g2

0x8d5b,	// (0x00072c80) msg_data_pane_g3

0x8d63,	// (0x00072c88) msg_data_pane_g4

0x8d6b,	// (0x00072c90) msg_data_pane_g5

0x8d73,	// (0x00072c98) msg_data_pane_g6

0x8d7b,	// (0x00072ca0) msg_data_pane_g7

0x0006,

0xf3a0,	// (0x000792c5) msg_data_pane_g

0x5f7b,	// (0x0006fea0) msg_text_pane_ParamLimits

0x5f7b,	// (0x0006fea0) msg_text_pane

0x8d83,	// (0x00072ca8) qrid_highlight_pane_cp011_ParamLimits

0x8d83,	// (0x00072ca8) qrid_highlight_pane_cp011

0x1e9c,	// (0x0006bdc1) msg_body_pane

0x20f7,	// (0x0006c01c) msg_header_pane

0x5fdc,	// (0x0006ff01) input_focus_pane_cp07

0x5ffd,	// (0x0006ff22) msg_header_pane_t1_ParamLimits

0x5ffd,	// (0x0006ff22) msg_header_pane_t1

0x6019,	// (0x0006ff3e) msg_header_pane_t2_ParamLimits

0x6019,	// (0x0006ff3e) msg_header_pane_t2

0x0001,

0xf3b4,	// (0x000792d9) msg_header_pane_t_ParamLimits

0xf3b4,	// (0x000792d9) msg_header_pane_t

0x3562,	// (0x0006d487) msg_body_pane_g1

0x6039,	// (0x0006ff5e) msg_body_pane_t1_ParamLimits

0x6039,	// (0x0006ff5e) msg_body_pane_t1

0x606a,	// (0x0006ff8f) msg_body_pane_t2_ParamLimits

0x606a,	// (0x0006ff8f) msg_body_pane_t2

0x607c,	// (0x0006ffa1) msg_body_pane_t3_ParamLimits

0x607c,	// (0x0006ffa1) msg_body_pane_t3

0x0002,

0xf3b9,	// (0x000792de) msg_body_pane_t_ParamLimits

0xf3b9,	// (0x000792de) msg_body_pane_t

0x8df1,	// (0x00072d16) main_viewer_pane_g1_ParamLimits

0x8df1,	// (0x00072d16) main_viewer_pane_g1

0x8dfd,	// (0x00072d22) main_viewer_pane_g2_ParamLimits

0x8dfd,	// (0x00072d22) main_viewer_pane_g2

0x8e09,	// (0x00072d2e) main_viewer_pane_g3_ParamLimits

0x8e09,	// (0x00072d2e) main_viewer_pane_g3

0x8e1a,	// (0x00072d3f) main_viewer_pane_g4_ParamLimits

0x8e1a,	// (0x00072d3f) main_viewer_pane_g4

0x8e2b,	// (0x00072d50) main_viewer_pane_g5_ParamLimits

0x8e2b,	// (0x00072d50) main_viewer_pane_g5

0x8e2b,	// (0x00072d50) main_viewer_pane_g7_ParamLimits

0x8e2b,	// (0x00072d50) main_viewer_pane_g7

0x8e3d,	// (0x00072d62) main_viewer_pane_g8_ParamLimits

0x8e3d,	// (0x00072d62) main_viewer_pane_g8

0x0007,

0xf3c9,	// (0x000792ee) main_viewer_pane_g_ParamLimits

0xf3c9,	// (0x000792ee) main_viewer_pane_g

0x35bf,	// (0x0006d4e4) viewer_content_pane_ParamLimits

0x35bf,	// (0x0006d4e4) viewer_content_pane

0x8e75,	// (0x00072d9a) main_postcard_pane_g1_ParamLimits

0x8e75,	// (0x00072d9a) main_postcard_pane_g1

0x8e83,	// (0x00072da8) main_postcard_pane_g2_ParamLimits

0x8e83,	// (0x00072da8) main_postcard_pane_g2

0x8e91,	// (0x00072db6) main_postcard_pane_g3_ParamLimits

0x8e91,	// (0x00072db6) main_postcard_pane_g3

0x0005,

0xf3da,	// (0x000792ff) main_postcard_pane_g_ParamLimits

0xf3da,	// (0x000792ff) main_postcard_pane_g

0x8ea1,	// (0x00072dc6) main_postcard_pane_g4

0x473e,	// (0x0006e663) smil_status_volume_pane_g2

0x8ecd,	// (0x00072df2) postcard_pane_ParamLimits

0x8ecd,	// (0x00072df2) postcard_pane

0x3dc0,	// (0x0006dce5) postcard_pane_g1_ParamLimits

0x3dc0,	// (0x0006dce5) postcard_pane_g1

0x8eff,	// (0x00072e24) postcard_pane_g2_ParamLimits

0x8eff,	// (0x00072e24) postcard_pane_g2

0x8f0b,	// (0x00072e30) postcard_pane_g3_ParamLimits

0x8f0b,	// (0x00072e30) postcard_pane_g3

0x35db,	// (0x0006d500) postcard_pane_g4_ParamLimits

0x35db,	// (0x0006d500) postcard_pane_g4

0x8f17,	// (0x00072e3c) postcard_pane_g5_ParamLimits

0x8f17,	// (0x00072e3c) postcard_pane_g5

0x8f23,	// (0x00072e48) postcard_pane_g6_ParamLimits

0x8f23,	// (0x00072e48) postcard_pane_g6

0x35cd,	// (0x0006d4f2) postcard_pane_g7_ParamLimits

0x35cd,	// (0x0006d4f2) postcard_pane_g7

0x0006,

0xf3e7,	// (0x0007930c) postcard_pane_g_ParamLimits

0xf3e7,	// (0x0007930c) postcard_pane_g

0x8f2f,	// (0x00072e54) main_mp2_pane_g1_ParamLimits

0x8f2f,	// (0x00072e54) main_mp2_pane_g1

0x8f3b,	// (0x00072e60) main_mp2_pane_g2_ParamLimits

0x8f3b,	// (0x00072e60) main_mp2_pane_g2

0x8f47,	// (0x00072e6c) main_mp2_pane_g3_ParamLimits

0x8f47,	// (0x00072e6c) main_mp2_pane_g3

0x0002,

0xf3f6,	// (0x0007931b) main_mp2_pane_g_ParamLimits

0xf3f6,	// (0x0007931b) main_mp2_pane_g

0x8f53,	// (0x00072e78) main_mp2_pane_t1_ParamLimits

0x8f53,	// (0x00072e78) main_mp2_pane_t1

0x8f6a,	// (0x00072e8f) main_mp2_pane_t2_ParamLimits

0x8f6a,	// (0x00072e8f) main_mp2_pane_t2

0x8f7c,	// (0x00072ea1) main_mp2_pane_t3_ParamLimits

0x8f7c,	// (0x00072ea1) main_mp2_pane_t3

0x0002,

0xf3fd,	// (0x00079322) main_mp2_pane_t_ParamLimits

0xf3fd,	// (0x00079322) main_mp2_pane_t

0x2119,	// (0x0006c03e) pec_content_pane_ParamLimits

0x2119,	// (0x0006c03e) pec_content_pane

0x1a59,	// (0x0006b97e) scroll_pane_cp015

0x3446,	// (0x0006d36b) pec_attribute_pane_ParamLimits

0x3446,	// (0x0006d36b) pec_attribute_pane

0x2180,	// (0x0006c0a5) pec_content_pane_g1_ParamLimits

0x2180,	// (0x0006c0a5) pec_content_pane_g1

0x35e9,	// (0x0006d50e) pec_content_pane_t1_ParamLimits

0x35e9,	// (0x0006d50e) pec_content_pane_t1

0x35fd,	// (0x0006d522) pec_content_pane_t2_ParamLimits

0x35fd,	// (0x0006d522) pec_content_pane_t2

0x0001,

0xf404,	// (0x00079329) pec_content_pane_t_ParamLimits

0xf404,	// (0x00079329) pec_content_pane_t

0x2172,	// (0x0006c097) list_single_graphic_pane_cp01_ParamLimits

0x2172,	// (0x0006c097) list_single_graphic_pane_cp01

0x20f7,	// (0x0006c01c) bg_popup_sub_pane_cp04

0x3611,	// (0x0006d536) popup_mup_playback_window_g1

0x361d,	// (0x0006d542) popup_mup_playback_window_t1

0x3632,	// (0x0006d557) popup_mup_playback_window_t2

0x0001,

0xf409,	// (0x0007932e) popup_mup_playback_window_t

0x3669,	// (0x0006d58e) main_image_pane_g1_ParamLimits

0x3669,	// (0x0006d58e) main_image_pane_g1

0x36ac,	// (0x0006d5d1) scroll_pane_cp018_ParamLimits

0x36ac,	// (0x0006d5d1) scroll_pane_cp018

0x36c4,	// (0x0006d5e9) scroll_pane_cp016_ParamLimits

0x36c4,	// (0x0006d5e9) scroll_pane_cp016

0x8fff,	// (0x00072f24) smil2_image_pane_ParamLimits

0x8fff,	// (0x00072f24) smil2_image_pane

0x902f,	// (0x00072f54) smil2_root_pane_ParamLimits

0x902f,	// (0x00072f54) smil2_root_pane

0x905b,	// (0x00072f80) smil2_text_pane_ParamLimits

0x905b,	// (0x00072f80) smil2_text_pane

0x1a59,	// (0x0006b97e) bg_list_pane_cp06

0x1a59,	// (0x0006b97e) grid_radio_pane

0x1e9c,	// (0x0006bdc1) bg_popup_window_pane_cp06

0x2eaa,	// (0x0006cdcf) main_fmradio_pane_t1

0x3031,	// (0x0006cf56) heading_pane_cp04

0x2eaa,	// (0x0006cdcf) main_fmradio_pane_t2

0x462d,	// (0x0006e552) popup_cale_lunar_info_window_g1

0x2eaa,	// (0x0006cdcf) main_fmradio_pane_t3

0x4635,	// (0x0006e55a) popup_cale_lunar_info_window_g2

0x2eaa,	// (0x0006cdcf) main_fmradio_pane_t4

0x0001,

0x2eaa,	// (0x0006cdcf) main_fmradio_pane_t5

0x0004,

0xf4de,	// (0x00079403) popup_cale_lunar_info_window_g

0xf269,	// (0x0007918e) main_fmradio_pane_t

0x1a59,	// (0x0006b97e) wait_bar_pane_cp03

0x2172,	// (0x0006c097) cell_fmradio_pane_ParamLimits

0x2172,	// (0x0006c097) cell_fmradio_pane

0x2180,	// (0x0006c0a5) cell_fmradio_pane_g1_ParamLimits

0x2180,	// (0x0006c0a5) cell_fmradio_pane_g1

0x1a59,	// (0x0006b97e) grid_highlight_pane_cp011

0x36f8,	// (0x0006d61d) poc_content_pane_ParamLimits

0x36f8,	// (0x0006d61d) poc_content_pane

0x370a,	// (0x0006d62f) scroll_pane_cp019

0x909b,	// (0x00072fc0) popup_call_poc_act_window_ParamLimits

0x909b,	// (0x00072fc0) popup_call_poc_act_window

0x90a8,	// (0x00072fcd) popup_call_poc_inact_window_ParamLimits

0x90a8,	// (0x00072fcd) popup_call_poc_inact_window

0xf4a2,	// (0x000793c7) bg_popup_call_poc_act_pane_g

0x45ed,	// (0x0006e512) bg_popup_call_poc_inact_pane_g1

0x45f5,	// (0x0006e51a) bg_popup_call_poc_inact_pane_g2

0x3712,	// (0x0006d637) popup_call_poc_act_window_g2

0x45fd,	// (0x0006e522) bg_popup_call_poc_inact_pane_g3

0x457d,	// (0x0006e4a2) bg_popup_call_poc_inact_pane_g4

0x4605,	// (0x0006e52a) bg_popup_call_poc_inact_pane_g5

0x371a,	// (0x0006d63f) popup_call_poc_act_window_t1_ParamLimits

0x371a,	// (0x0006d63f) popup_call_poc_act_window_t1

0x3742,	// (0x0006d667) popup_call_poc_act_window_t2_ParamLimits

0x3742,	// (0x0006d667) popup_call_poc_act_window_t2

0x376a,	// (0x0006d68f) popup_call_poc_act_window_t3_ParamLimits

0x376a,	// (0x0006d68f) popup_call_poc_act_window_t3

0x3792,	// (0x0006d6b7) popup_call_poc_act_window_t4_ParamLimits

0x3792,	// (0x0006d6b7) popup_call_poc_act_window_t4

0x0003,

0xf41e,	// (0x00079343) popup_call_poc_act_window_t_ParamLimits

0xf41e,	// (0x00079343) popup_call_poc_act_window_t

0x460d,	// (0x0006e532) bg_popup_call_poc_inact_pane_g6

0x4615,	// (0x0006e53a) bg_popup_call_poc_inact_pane_g7

0x461d,	// (0x0006e542) bg_popup_call_poc_inact_pane_g8

0x37a4,	// (0x0006d6c9) popup_call_poc_inact_window_g2

0x4625,	// (0x0006e54a) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf4b9,	// (0x000793de) bg_popup_call_poc_inact_pane_g

0x37ac,	// (0x0006d6d1) popup_call_poc_inact_window_t1_ParamLimits

0x37ac,	// (0x0006d6d1) popup_call_poc_inact_window_t1

0x37c1,	// (0x0006d6e6) popup_call_poc_inact_window_t2_ParamLimits

0x37c1,	// (0x0006d6e6) popup_call_poc_inact_window_t2

0x37d6,	// (0x0006d6fb) popup_call_poc_inact_window_t3_ParamLimits

0x37d6,	// (0x0006d6fb) popup_call_poc_inact_window_t3

0x0002,

0xf427,	// (0x0007934c) popup_call_poc_inact_window_t_ParamLimits

0xf427,	// (0x0007934c) popup_call_poc_inact_window_t

0x46c9,	// (0x0006e5ee) context_pane_ParamLimits

0x96b5,	// (0x000735da) signal_pane_ParamLimits

0x2807,	// (0x0006c72c) main_call2_pane

0x9628,	// (0x0007354d) popup_phob_thumbnail2_window_ParamLimits

0x9628,	// (0x0007354d) popup_phob_thumbnail2_window

0x8d9f,	// (0x00072cc4) aid_hotspot_pointer_arrow_pane

0x8da7,	// (0x00072ccc) aid_hotspot_pointer_hand_pane

0x937b,	// (0x000732a0) phob_pre_status_pane_g5

0x2172,	// (0x0006c097) cams_zoom_pane_ParamLimits

0x2172,	// (0x0006c097) image_vga_pane_ParamLimits

0x218e,	// (0x0006c0b3) main_camera_pane_g1_ParamLimits

0x218e,	// (0x0006c0b3) main_camera_pane_g2_ParamLimits

0x218e,	// (0x0006c0b3) main_camera_pane_g3_ParamLimits

0x218e,	// (0x0006c0b3) main_camera_pane_g4_ParamLimits

0x218e,	// (0x0006c0b3) main_camera_pane_g5_ParamLimits

0x218e,	// (0x0006c0b3) main_camera_pane_g6_ParamLimits

0x218e,	// (0x0006c0b3) main_camera_pane_g7_ParamLimits

0xf15d,	// (0x00079082) main_camera_pane_g_ParamLimits

0x21dc,	// (0x0006c101) main_camera_pane_t1_ParamLimits

0x21dc,	// (0x0006c101) main_camera_pane_t2_ParamLimits

0xf16e,	// (0x00079093) main_camera_pane_t_ParamLimits

0x20f7,	// (0x0006c01c) bg_popup_preview_window_pane_cp01_ParamLimits

0x20f7,	// (0x0006c01c) bg_popup_preview_window_pane_cp01

0x37eb,	// (0x0006d710) popup_phob_thumbnail2_window_g1_ParamLimits

0x37eb,	// (0x0006d710) popup_phob_thumbnail2_window_g1

0x1e9c,	// (0x0006bdc1) call2_cli_visual_pane

0x90c4,	// (0x00072fe9) popup_call2_audio_conf_window_ParamLimits

0x90c4,	// (0x00072fe9) popup_call2_audio_conf_window

0x90d9,	// (0x00072ffe) popup_call2_audio_first_window_ParamLimits

0x90d9,	// (0x00072ffe) popup_call2_audio_first_window

0x9177,	// (0x0007309c) popup_call2_audio_in_window_ParamLimits

0x9177,	// (0x0007309c) popup_call2_audio_in_window

0x91b9,	// (0x000730de) popup_call2_audio_out_window_ParamLimits

0x91b9,	// (0x000730de) popup_call2_audio_out_window

0x921b,	// (0x00073140) popup_call2_audio_second_window_ParamLimits

0x921b,	// (0x00073140) popup_call2_audio_second_window

0x9279,	// (0x0007319e) popup_call2_audio_wait_window_ParamLimits

0x9279,	// (0x0007319e) popup_call2_audio_wait_window

0x1e9c,	// (0x0006bdc1) bg_popup_call2_act_pane_cp03

0x20d9,	// (0x0006bffe) list_conf_pane_cp

0x37f7,	// (0x0006d71c) popup_call2_audio_conf_window_t1

0x3805,	// (0x0006d72a) list_single_graphic_popup_conf2_pane_ParamLimits

0x3805,	// (0x0006d72a) list_single_graphic_popup_conf2_pane

0x3094,	// (0x0006cfb9) list_highlight_pane_cp04

0x3818,	// (0x0006d73d) list_single_graphic_popup_conf2_pane_g1

0x30a5,	// (0x0006cfca) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf42e,	// (0x00079353) list_single_graphic_popup_conf2_pane_g

0x3822,	// (0x0006d747) list_single_graphic_popup_conf2_pane_t1

0x3830,	// (0x0006d755) bg_popup_call2_act_pane_cp01_ParamLimits

0x3830,	// (0x0006d755) bg_popup_call2_act_pane_cp01

0x38ba,	// (0x0006d7df) call_type_pane_cp05_ParamLimits

0x38ba,	// (0x0006d7df) call_type_pane_cp05

0x390e,	// (0x0006d833) popup_call2_audio_second_window_g1_ParamLimits

0x390e,	// (0x0006d833) popup_call2_audio_second_window_g1

0x3962,	// (0x0006d887) popup_call2_audio_second_window_g2_ParamLimits

0x3962,	// (0x0006d887) popup_call2_audio_second_window_g2

0x0002,

0xf433,	// (0x00079358) popup_call2_audio_second_window_g_ParamLimits

0xf433,	// (0x00079358) popup_call2_audio_second_window_g

0x39c7,	// (0x0006d8ec) popup_call2_audio_second_window_t1_ParamLimits

0x39c7,	// (0x0006d8ec) popup_call2_audio_second_window_t1

0x3a82,	// (0x0006d9a7) popup_call2_audio_second_window_t2_ParamLimits

0x3a82,	// (0x0006d9a7) popup_call2_audio_second_window_t2

0x3ad5,	// (0x0006d9fa) popup_call2_audio_second_window_t3_ParamLimits

0x3ad5,	// (0x0006d9fa) popup_call2_audio_second_window_t3

0x0003,

0xf43a,	// (0x0007935f) popup_call2_audio_second_window_t_ParamLimits

0xf43a,	// (0x0007935f) popup_call2_audio_second_window_t

0x1e9c,	// (0x0006bdc1) bg_popup_call2_in_pane_cp02

0x1ea6,	// (0x0006bdcb) call_type_pane_cp04

0x92b8,	// (0x000731dd) popup_call2_audio_wait_window_g1

0x92c0,	// (0x000731e5) popup_call2_audio_wait_window_g2

0x0001,

0xf443,	// (0x00079368) popup_call2_audio_wait_window_g

0x1ebe,	// (0x0006bde3) popup_call2_audio_wait_window_t3

0x3bc8,	// (0x0006daed) bg_popup_call2_act_pane_ParamLimits

0x3bc8,	// (0x0006daed) bg_popup_call2_act_pane

0x3c88,	// (0x0006dbad) call_type_pane_cp03_ParamLimits

0x3c88,	// (0x0006dbad) call_type_pane_cp03

0x3cec,	// (0x0006dc11) popup_call2_audio_first_window_g1_ParamLimits

0x3cec,	// (0x0006dc11) popup_call2_audio_first_window_g1

0x3d5c,	// (0x0006dc81) popup_call2_audio_first_window_g2_ParamLimits

0x3d5c,	// (0x0006dc81) popup_call2_audio_first_window_g2

0x3dc0,	// (0x0006dce5) popup_call2_audio_first_window_g3_ParamLimits

0x3dc0,	// (0x0006dce5) popup_call2_audio_first_window_g3

0x0004,

0xf448,	// (0x0007936d) popup_call2_audio_first_window_g_ParamLimits

0xf448,	// (0x0007936d) popup_call2_audio_first_window_g

0x3e48,	// (0x0006dd6d) popup_call2_audio_first_window_t1_ParamLimits

0x3e48,	// (0x0006dd6d) popup_call2_audio_first_window_t1

0x3f4b,	// (0x0006de70) popup_call2_audio_first_window_t4_ParamLimits

0x3f4b,	// (0x0006de70) popup_call2_audio_first_window_t4

0x402e,	// (0x0006df53) popup_call2_audio_first_window_t5_ParamLimits

0x402e,	// (0x0006df53) popup_call2_audio_first_window_t5

0x0003,

0xf453,	// (0x00079378) popup_call2_audio_first_window_t_ParamLimits

0xf453,	// (0x00079378) popup_call2_audio_first_window_t

0x20ef,	// (0x0006c014) bg_popup_call2_act_pane_g1

0x463d,	// (0x0006e562) popup_cale_lunar_info_window_t1

0x464b,	// (0x0006e570) popup_cale_lunar_info_window_t2

0x4659,	// (0x0006e57e) popup_cale_lunar_info_window_t3

0x1e9c,	// (0x0006bdc1) bg_popup_call2_bubble_pane

0x412f,	// (0x0006e054) bg_popup_call2_in_pane_cp01_ParamLimits

0x412f,	// (0x0006e054) bg_popup_call2_in_pane_cp01

0x1b52,	// (0x0006ba77) call_type_pane_cp02

0x92c8,	// (0x000731ed) popup_call2_audio_out_window_g1_ParamLimits

0x92c8,	// (0x000731ed) popup_call2_audio_out_window_g1

0x4177,	// (0x0006e09c) popup_call2_audio_out_window_g2_ParamLimits

0x4177,	// (0x0006e09c) popup_call2_audio_out_window_g2

0x92f4,	// (0x00073219) popup_call2_audio_out_window_g3_ParamLimits

0x92f4,	// (0x00073219) popup_call2_audio_out_window_g3

0x0003,

0xf45c,	// (0x00079381) popup_call2_audio_out_window_g_ParamLimits

0xf45c,	// (0x00079381) popup_call2_audio_out_window_g

0x41ae,	// (0x0006e0d3) popup_call2_audio_out_window_t1_ParamLimits

0x41ae,	// (0x0006e0d3) popup_call2_audio_out_window_t1

0x420d,	// (0x0006e132) popup_call2_audio_out_window_t2_ParamLimits

0x420d,	// (0x0006e132) popup_call2_audio_out_window_t2

0x4261,	// (0x0006e186) popup_call2_audio_out_window_t3_ParamLimits

0x4261,	// (0x0006e186) popup_call2_audio_out_window_t3

0x4277,	// (0x0006e19c) popup_call2_audio_out_window_t4_ParamLimits

0x4277,	// (0x0006e19c) popup_call2_audio_out_window_t4

0x428d,	// (0x0006e1b2) popup_call2_audio_out_window_t5_ParamLimits

0x428d,	// (0x0006e1b2) popup_call2_audio_out_window_t5

0x0005,

0xf465,	// (0x0007938a) popup_call2_audio_out_window_t_ParamLimits

0xf465,	// (0x0007938a) popup_call2_audio_out_window_t

0x42f1,	// (0x0006e216) bg_popup_call2_in_pane_ParamLimits

0x42f1,	// (0x0006e216) bg_popup_call2_in_pane

0x434d,	// (0x0006e272) popup_call2_audio_in_window_g1_ParamLimits

0x434d,	// (0x0006e272) popup_call2_audio_in_window_g1

0x4385,	// (0x0006e2aa) popup_call2_audio_in_window_g2_ParamLimits

0x4385,	// (0x0006e2aa) popup_call2_audio_in_window_g2

0x43bd,	// (0x0006e2e2) popup_call2_audio_in_window_g3_ParamLimits

0x43bd,	// (0x0006e2e2) popup_call2_audio_in_window_g3

0x0003,

0xf472,	// (0x00079397) popup_call2_audio_in_window_g_ParamLimits

0xf472,	// (0x00079397) popup_call2_audio_in_window_g

0x4415,	// (0x0006e33a) popup_call2_audio_in_window_t1_ParamLimits

0x4415,	// (0x0006e33a) popup_call2_audio_in_window_t1

0x4495,	// (0x0006e3ba) popup_call2_audio_in_window_t2_ParamLimits

0x4495,	// (0x0006e3ba) popup_call2_audio_in_window_t2

0x4515,	// (0x0006e43a) popup_call2_audio_in_window_t3_ParamLimits

0x4515,	// (0x0006e43a) popup_call2_audio_in_window_t3

0x452f,	// (0x0006e454) popup_call2_audio_in_window_t4_ParamLimits

0x452f,	// (0x0006e454) popup_call2_audio_in_window_t4

0x4541,	// (0x0006e466) popup_call2_audio_in_window_t5_ParamLimits

0x4541,	// (0x0006e466) popup_call2_audio_in_window_t5

0x4553,	// (0x0006e478) popup_call2_audio_in_window_t6_ParamLimits

0x4553,	// (0x0006e478) popup_call2_audio_in_window_t6

0x0005,

0xf47b,	// (0x000793a0) popup_call2_audio_in_window_t_ParamLimits

0xf47b,	// (0x000793a0) popup_call2_audio_in_window_t

0x20ef,	// (0x0006c014) bg_popup_call2_in_pane_g1

0x4667,	// (0x0006e58c) popup_cale_lunar_info_window_t4

0x0003,

0xf4e3,	// (0x00079408) popup_cale_lunar_info_window_t

0x20f7,	// (0x0006c01c) bg_popup_call2_rect_pane_ParamLimits

0x20f7,	// (0x0006c01c) bg_popup_call2_rect_pane

0x1e9c,	// (0x0006bdc1) call2_cli_visual_graphic_pane

0x1e9c,	// (0x0006bdc1) call2_cli_visual_text_pane

0x96f1,	// (0x00073616) smil_status_volume_pane_g3

0x0002,

0x210f,	// (0x0006c034) call2_cli_visual_graphic_pane_g1

0x210f,	// (0x0006c034) call2_cli_visual_graphic_pane_g2

0x210f,	// (0x0006c034) call2_cli_visual_graphic_pane_g3

0x0002,

0xf488,	// (0x000793ad) call2_cli_visual_graphic_pane_g

0x2717,	// (0x0006c63c) bg_popup_call2_rect_pane_g1

0x270f,	// (0x0006c634) bg_popup_call2_rect_pane_g2

0x2707,	// (0x0006c62c) bg_popup_call2_rect_pane_g3

0x2727,	// (0x0006c64c) bg_popup_call2_rect_pane_g4

0x271f,	// (0x0006c644) bg_popup_call2_rect_pane_g5

0x272f,	// (0x0006c654) bg_popup_call2_rect_pane_g6

0x2737,	// (0x0006c65c) bg_popup_call2_rect_pane_g7

0x2747,	// (0x0006c66c) bg_popup_call2_rect_pane_g8

0x273f,	// (0x0006c664) bg_popup_call2_rect_pane_g9

0x0008,

0xf218,	// (0x0007913d) bg_popup_call2_rect_pane_g

0x4565,	// (0x0006e48a) bg_popup_call2_bubble_pane_g1

0x456d,	// (0x0006e492) bg_popup_call2_bubble_pane_g2

0x4575,	// (0x0006e49a) bg_popup_call2_bubble_pane_g3

0x457d,	// (0x0006e4a2) bg_popup_call2_bubble_pane_g4

0x4585,	// (0x0006e4aa) bg_popup_call2_bubble_pane_g5

0x458d,	// (0x0006e4b2) bg_popup_call2_bubble_pane_g6

0x4595,	// (0x0006e4ba) bg_popup_call2_bubble_pane_g7

0x459d,	// (0x0006e4c2) bg_popup_call2_bubble_pane_g8

0x45a5,	// (0x0006e4ca) bg_popup_call2_bubble_pane_g9

0x0008,

0xf48f,	// (0x000793b4) bg_popup_call2_bubble_pane_g

0x6f3c,	// (0x00070e61) aid_cale_week_size_cell_pane

0x20f7,	// (0x0006c01c) aid_cams_cif_uncrop_pane_ParamLimits

0x20f7,	// (0x0006c01c) aid_cams_cif_uncrop_pane

0x2172,	// (0x0006c097) aid_cams_size_cell_ParamLimits

0x2172,	// (0x0006c097) aid_cams_size_cell

0x2172,	// (0x0006c097) grid_cams_pane_ParamLimits

0x2172,	// (0x0006c097) linegrid_cams_pane_ParamLimits

0x7600,	// (0x00071525) call_video_pane_t1

0x7621,	// (0x00071546) call_video_pane_t2

0x0001,

0xf1ba,	// (0x000790df) call_video_pane_t

0x7b6f,	// (0x00071a94) aid_cale_month_size_cell_pane_ParamLimits

0x7b6f,	// (0x00071a94) aid_cale_month_size_cell_pane

0xf527,	// (0x0007944c) smil_status_volume_pane_g

0x96fe,	// (0x00073623) volume_smil_pane_ParamLimits

0x68e3,	// (0x00070808) aid_popup2_width_pane

0x6e5f,	// (0x00070d84) cell_qdial_pane_g4_ParamLimits

0x6e5f,	// (0x00070d84) cell_qdial_pane_g4

0x8a80,	// (0x000729a5) aid_blid_cardinal_pane_ParamLimits

0x8a90,	// (0x000729b5) aid_blid_destination_pane_ParamLimits

0x8a90,	// (0x000729b5) aid_blid_destination_pane

0x20f7,	// (0x0006c01c) bg_popup_call_poc_act_pane_ParamLimits

0x20f7,	// (0x0006c01c) bg_popup_call_poc_act_pane

0x20f7,	// (0x0006c01c) bg_popup_call_poc_inact_pane_ParamLimits

0x20f7,	// (0x0006c01c) bg_popup_call_poc_inact_pane

0x45ad,	// (0x0006e4d2) bg_popup_call_poc_act_pane_g1

0x45b5,	// (0x0006e4da) bg_popup_call_poc_act_pane_g2

0x45bd,	// (0x0006e4e2) bg_popup_call_poc_act_pane_g3

0x457d,	// (0x0006e4a2) bg_popup_call_poc_act_pane_g4

0x4585,	// (0x0006e4aa) bg_popup_call_poc_act_pane_g5

0x45c5,	// (0x0006e4ea) bg_popup_call_poc_act_pane_g6

0x4595,	// (0x0006e4ba) bg_popup_call_poc_act_pane_g7

0x45cd,	// (0x0006e4f2) bg_popup_call_poc_act_pane_g8

0x1e9c,	// (0x0006bdc1) main_usb_pane

0x955b,	// (0x00073480) popup_cale_lunar_info_window

0x793e,	// (0x00071863) im_reading_pane_t1_ParamLimits

0x28c8,	// (0x0006c7ed) list_im_pane_ParamLimits

0x28d9,	// (0x0006c7fe) scroll_pane_cp07_ParamLimits

0x1e9c,	// (0x0006bdc1) grid_highlight_pane_cp012

0x20f7,	// (0x0006c01c) mup_scale_pane_ParamLimits

0x218e,	// (0x0006c0b3) main_usb_pane_g1_ParamLimits

0x218e,	// (0x0006c0b3) main_usb_pane_g1

0x218e,	// (0x0006c0b3) main_usb_pane_g2_ParamLimits

0x218e,	// (0x0006c0b3) main_usb_pane_g2

0x0001,

0xf4cc,	// (0x000793f1) main_usb_pane_g_ParamLimits

0xf4cc,	// (0x000793f1) main_usb_pane_g

0x21dc,	// (0x0006c101) main_usb_pane_t1_ParamLimits

0x21dc,	// (0x0006c101) main_usb_pane_t1

0x21dc,	// (0x0006c101) main_usb_pane_t2_ParamLimits

0x21dc,	// (0x0006c101) main_usb_pane_t2

0x21dc,	// (0x0006c101) main_usb_pane_t3_ParamLimits

0x21dc,	// (0x0006c101) main_usb_pane_t3

0x21dc,	// (0x0006c101) main_usb_pane_t4_ParamLimits

0x21dc,	// (0x0006c101) main_usb_pane_t4

0x21dc,	// (0x0006c101) main_usb_pane_t5_ParamLimits

0x21dc,	// (0x0006c101) main_usb_pane_t5

0x21dc,	// (0x0006c101) main_usb_pane_t6_ParamLimits

0x21dc,	// (0x0006c101) main_usb_pane_t6

0x0005,

0xf4d1,	// (0x000793f6) main_usb_pane_t_ParamLimits

0x8a26,	// (0x0007294b) aid_text_placing

0x8a32,	// (0x00072957) main_location2_pane_t1_ParamLimits

0x8a46,	// (0x0007296b) main_location2_pane_t2_ParamLimits

0x8a5a,	// (0x0007297f) main_location2_pane_t3_ParamLimits

0x8a6e,	// (0x00072993) main_location2_pane_t4_ParamLimits

0x8a6e,	// (0x00072993) main_location2_pane_t4

0xf2fb,	// (0x00079220) main_location2_pane_t_ParamLimits

0x2133,	// (0x0006c058) find_pinb_pane_g2_ParamLimits

0x2133,	// (0x0006c058) find_pinb_pane_g2

0x0001,

0xf072,	// (0x00078f97) find_pinb_pane_g_ParamLimits

0xf072,	// (0x00078f97) find_pinb_pane_g

0x213f,	// (0x0006c064) find_pinb_pane_t1_ParamLimits

0x2151,	// (0x0006c076) find_pinb_pane_t2_ParamLimits

0xf077,	// (0x00078f9c) find_pinb_pane_t_ParamLimits

0x1e9c,	// (0x0006bdc1) main_call3_pane

0x8132,	// (0x00072057) cale_month_day_heading_pane_t1_ParamLimits

0x81b8,	// (0x000720dd) cale_month_day_heading_pane_t2_ParamLimits

0x8231,	// (0x00072156) cale_month_day_heading_pane_t3_ParamLimits

0x82aa,	// (0x000721cf) cale_month_day_heading_pane_t4_ParamLimits

0x8323,	// (0x00072248) cale_month_day_heading_pane_t5_ParamLimits

0x839c,	// (0x000722c1) cale_month_day_heading_pane_t6_ParamLimits

0x8415,	// (0x0007233a) cale_month_day_heading_pane_t7_ParamLimits

0xf1f2,	// (0x00079117) cale_month_day_heading_pane_t_ParamLimits

0x2cd1,	// (0x0006cbf6) smil_status_volume_pane

0x8ee7,	// (0x00072e0c) postcard_address_pane_ParamLimits

0x8ee7,	// (0x00072e0c) postcard_address_pane

0x8ef3,	// (0x00072e18) postcard_message_pane_ParamLimits

0x8ef3,	// (0x00072e18) postcard_message_pane

0x9320,	// (0x00073245) call2_cli_visual_pane_t1_ParamLimits

0x9320,	// (0x00073245) call2_cli_visual_pane_t1

0x477c,	// (0x0006e6a1) postcard_message_pane_t1_ParamLimits

0x477c,	// (0x0006e6a1) postcard_message_pane_t1

0x4764,	// (0x0006e689) postcard_address_pane_t1_ParamLimits

0x4764,	// (0x0006e689) postcard_address_pane_t1

0x982f,	// (0x00073754) popup_call3_audio_in_window_ParamLimits

0x982f,	// (0x00073754) popup_call3_audio_in_window

0x9713,	// (0x00073638) bg_popup_call3_in_pane_ParamLimits

0x9713,	// (0x00073638) bg_popup_call3_in_pane

0x9775,	// (0x0007369a) popup_call3_audio_in_window_g1_ParamLimits

0x9775,	// (0x0007369a) popup_call3_audio_in_window_g1

0x978d,	// (0x000736b2) popup_call3_audio_in_window_g2_ParamLimits

0x978d,	// (0x000736b2) popup_call3_audio_in_window_g2

0x97a5,	// (0x000736ca) popup_call3_audio_in_window_g3_ParamLimits

0x97a5,	// (0x000736ca) popup_call3_audio_in_window_g3

0x0003,

0xf52e,	// (0x00079453) popup_call3_audio_in_window_g_ParamLimits

0xf52e,	// (0x00079453) popup_call3_audio_in_window_g

0x97cd,	// (0x000736f2) popup_call3_audio_in_window_t1_ParamLimits

0x97cd,	// (0x000736f2) popup_call3_audio_in_window_t1

0x97f5,	// (0x0007371a) popup_call3_audio_in_window_t2_ParamLimits

0x97f5,	// (0x0007371a) popup_call3_audio_in_window_t2

0x981d,	// (0x00073742) popup_call3_audio_in_window_t3_ParamLimits

0x981d,	// (0x00073742) popup_call3_audio_in_window_t3

0x0002,

0xf537,	// (0x0007945c) popup_call3_audio_in_window_t_ParamLimits

0xf537,	// (0x0007945c) popup_call3_audio_in_window_t

0x2807,	// (0x0006c72c) bg_popup_call3_rect_pane

0x2717,	// (0x0006c63c) bg_popup_call3_rect_pane_g1

0x270f,	// (0x0006c634) bg_popup_call3_rect_pane_g2

0x2707,	// (0x0006c62c) bg_popup_call3_rect_pane_g3

0x2727,	// (0x0006c64c) bg_popup_call3_rect_pane_g4

0x271f,	// (0x0006c644) bg_popup_call3_rect_pane_g5

0x272f,	// (0x0006c654) bg_popup_call3_rect_pane_g6

0x2737,	// (0x0006c65c) bg_popup_call3_rect_pane_g7

0x1a59,	// (0x0006b97e) mup_visualizer_osc_pane

0x1a59,	// (0x0006b97e) mup_visualizer_spec_pane

0x9733,	// (0x00073658) call3_video_qcif_pane_ParamLimits

0x9733,	// (0x00073658) call3_video_qcif_pane

0x9745,	// (0x0007366a) call3_video_qcif_uncrop_pane_ParamLimits

0x9745,	// (0x0007366a) call3_video_qcif_uncrop_pane

0x9753,	// (0x00073678) call3_video_subqcif_pane_ParamLimits

0x9753,	// (0x00073678) call3_video_subqcif_pane

0x9765,	// (0x0007368a) call3_video_subqcif_uncrop_pane_ParamLimits

0x9765,	// (0x0007368a) call3_video_subqcif_uncrop_pane

0x97bd,	// (0x000736e2) popup_call3_audio_in_window_g4_ParamLimits

0x97bd,	// (0x000736e2) popup_call3_audio_in_window_g4

0x1a59,	// (0x0006b97e) mup_spec_half_pane

0x1a59,	// (0x0006b97e) mup_spec_half_pane_cp

0x1a59,	// (0x0006b97e) mup_osc_middle_pane

0x21be,	// (0x0006c0e3) mup_visualizer_osc_pane_g1

0x4717,	// (0x0006e63c) mup_spec_bar_pane_ParamLimits

0x4717,	// (0x0006e63c) mup_spec_bar_pane

0x21be,	// (0x0006c0e3) mup_spec_bar_pane_g1

0x21be,	// (0x0006c0e3) mup_spec_bar_pane_g2

0x0001,

0xf08c,	// (0x00078fb1) mup_spec_bar_pane_g

0x6f3c,	// (0x00070e61) aid_cale_week_size_cell_pane_ParamLimits

0x6f51,	// (0x00070e76) bg_cale_heading_pane_ParamLimits

0x2769,	// (0x0006c68e) bg_cale_pane_cp01_ParamLimits

0x6f73,	// (0x00070e98) cale_week_corner_pane_ParamLimits

0x6f8d,	// (0x00070eb2) cale_week_day_heading_pane_ParamLimits

0x6faf,	// (0x00070ed4) cale_week_scroll_pane_g1_ParamLimits

0x6fcc,	// (0x00070ef1) cale_week_scroll_pane_g2_ParamLimits

0x6fdf,	// (0x00070f04) cale_week_scroll_pane_g3_ParamLimits

0x6ff2,	// (0x00070f17) cale_week_scroll_pane_g4_ParamLimits

0x7005,	// (0x00070f2a) cale_week_scroll_pane_g5_ParamLimits

0x7018,	// (0x00070f3d) cale_week_scroll_pane_g6_ParamLimits

0x702b,	// (0x00070f50) cale_week_scroll_pane_g7_ParamLimits

0x7040,	// (0x00070f65) cale_week_scroll_pane_g8_ParamLimits

0x7055,	// (0x00070f7a) cale_week_scroll_pane_g9_ParamLimits

0x7068,	// (0x00070f8d) cale_week_scroll_pane_g10_ParamLimits

0x707b,	// (0x00070fa0) cale_week_scroll_pane_g11_ParamLimits

0x708e,	// (0x00070fb3) cale_week_scroll_pane_g12_ParamLimits

0x70a5,	// (0x00070fca) cale_week_scroll_pane_g13_ParamLimits

0x70c0,	// (0x00070fe5) cale_week_scroll_pane_g14_ParamLimits

0x70db,	// (0x00071000) cale_week_scroll_pane_g15_ParamLimits

0xf103,	// (0x00079028) cale_week_scroll_pane_g_ParamLimits

0x710b,	// (0x00071030) cale_week_time_pane_ParamLimits

0x7120,	// (0x00071045) grid_cale_week_pane_ParamLimits

0x2786,	// (0x0006c6ab) listscroll_cale_week_pane_t1

0x2798,	// (0x0006c6bd) scroll_pane_cp08_ParamLimits

0x7be3,	// (0x00071b08) cale_month_corner_pane_ParamLimits

0x2ca7,	// (0x0006cbcc) cale_month_pane_t1

0x80b1,	// (0x00071fd6) cale_month_week_pane_ParamLimits

0x3dc0,	// (0x0006dce5) popup_call_status_window_g1_ParamLimits

0x8853,	// (0x00072778) popup_call_status_window_g2_ParamLimits

0x885f,	// (0x00072784) popup_call_status_window_g3_ParamLimits

0xf282,	// (0x000791a7) popup_call_status_window_g_ParamLimits

0x3029,	// (0x0006cf4e) aid_call2_pane

0x5ff1,	// (0x0006ff16) msg_header_pane_g1

0x8ee7,	// (0x00072e0c) postcard_address2_pane_ParamLimits

0x8ee7,	// (0x00072e0c) postcard_address2_pane

0x8ef3,	// (0x00072e18) postcard_message2_pane_ParamLimits

0x8ef3,	// (0x00072e18) postcard_message2_pane

0x96c3,	// (0x000735e8) message2_row_pane_ParamLimits

0x96c3,	// (0x000735e8) message2_row_pane

0x96de,	// (0x00073603) address2_row_pane_ParamLimits

0x96de,	// (0x00073603) address2_row_pane

0x46e4,	// (0x0006e609) postcard_message2_row_pane_g1

0x46ec,	// (0x0006e611) postcard_message2_row_pane_t1

0x46e4,	// (0x0006e609) address2_row_pane_g1

0x46ec,	// (0x0006e611) address2_row_pane_t1

0x73a5,	// (0x000712ca) aid_size_cell_vorec

0x1e9c,	// (0x0006bdc1) main_rss_pane

0x46fa,	// (0x0006e61f) rss_list_single_pane_ParamLimits

0x46fa,	// (0x0006e61f) rss_list_single_pane

0x4708,	// (0x0006e62d) rss_list_single_pane_t1

0x4708,	// (0x0006e62d) rss_list_single_pane_t2

0x0001,

0xf522,	// (0x00079447) rss_list_single_pane_t

0x1e9c,	// (0x0006bdc1) main_camera2_pane

0x1e9c,	// (0x0006bdc1) main_video2_pane

0x2172,	// (0x0006c097) cams_zoom_pane_cp2_ParamLimits

0x2172,	// (0x0006c097) cams_zoom_pane_cp2

0x2172,	// (0x0006c097) image2_vga_pane_ParamLimits

0x2172,	// (0x0006c097) image2_vga_pane

0x218e,	// (0x0006c0b3) main_camera2_pane_g1_ParamLimits

0x218e,	// (0x0006c0b3) main_camera2_pane_g1

0x218e,	// (0x0006c0b3) main_camera2_pane_g2_ParamLimits

0x218e,	// (0x0006c0b3) main_camera2_pane_g2

0x218e,	// (0x0006c0b3) main_camera2_pane_g3_ParamLimits

0x218e,	// (0x0006c0b3) main_camera2_pane_g3

0x218e,	// (0x0006c0b3) main_camera2_pane_g4_ParamLimits

0x218e,	// (0x0006c0b3) main_camera2_pane_g4

0x218e,	// (0x0006c0b3) main_camera2_pane_g5_ParamLimits

0x218e,	// (0x0006c0b3) main_camera2_pane_g5

0x218e,	// (0x0006c0b3) main_camera2_pane_g6_ParamLimits

0x218e,	// (0x0006c0b3) main_camera2_pane_g6

0x218e,	// (0x0006c0b3) main_camera2_pane_g7_ParamLimits

0x218e,	// (0x0006c0b3) main_camera2_pane_g7

0x218e,	// (0x0006c0b3) main_camera2_pane_g8_ParamLimits

0x218e,	// (0x0006c0b3) main_camera2_pane_g8

0x0008,

0xf53e,	// (0x00079463) main_camera2_pane_g_ParamLimits

0xf53e,	// (0x00079463) main_camera2_pane_g

0x21dc,	// (0x0006c101) main_camera2_pane_t1_ParamLimits

0x21dc,	// (0x0006c101) main_camera2_pane_t1

0x21dc,	// (0x0006c101) main_camera2_pane_t2_ParamLimits

0x21dc,	// (0x0006c101) main_camera2_pane_t2

0x21dc,	// (0x0006c101) main_camera2_pane_t3_ParamLimits

0x21dc,	// (0x0006c101) main_camera2_pane_t3

0x21dc,	// (0x0006c101) main_camera2_pane_t4_ParamLimits

0x21dc,	// (0x0006c101) main_camera2_pane_t4

0x0006,

0xf551,	// (0x00079476) main_camera2_pane_t_ParamLimits

0xf551,	// (0x00079476) main_camera2_pane_t

0x3446,	// (0x0006d36b) cams_zoom_pane_cp4_ParamLimits

0x3446,	// (0x0006d36b) cams_zoom_pane_cp4

0x2119,	// (0x0006c03e) image2_cif_pane_ParamLimits

0x2119,	// (0x0006c03e) image2_cif_pane

0x2172,	// (0x0006c097) image2_subqcif_pane_ParamLimits

0x2172,	// (0x0006c097) image2_subqcif_pane

0x3424,	// (0x0006d349) main_video2_pane_g1_ParamLimits

0x3424,	// (0x0006d349) main_video2_pane_g1

0x3424,	// (0x0006d349) main_video2_pane_g2_ParamLimits

0x3424,	// (0x0006d349) main_video2_pane_g2

0x3424,	// (0x0006d349) main_video2_pane_g3_ParamLimits

0x3424,	// (0x0006d349) main_video2_pane_g3

0x3424,	// (0x0006d349) main_video2_pane_g4_ParamLimits

0x3424,	// (0x0006d349) main_video2_pane_g4

0x3424,	// (0x0006d349) main_video2_pane_g5_ParamLimits

0x3424,	// (0x0006d349) main_video2_pane_g5

0x3424,	// (0x0006d349) main_video2_pane_g6_ParamLimits

0x3424,	// (0x0006d349) main_video2_pane_g6

0x0005,

0xf560,	// (0x00079485) main_video2_pane_g_ParamLimits

0xf560,	// (0x00079485) main_video2_pane_g

0x3432,	// (0x0006d357) main_video2_pane_t1_ParamLimits

0x3432,	// (0x0006d357) main_video2_pane_t1

0x3432,	// (0x0006d357) main_video2_pane_t2_ParamLimits

0x3432,	// (0x0006d357) main_video2_pane_t2

0x3432,	// (0x0006d357) main_video2_pane_t3_ParamLimits

0x3432,	// (0x0006d357) main_video2_pane_t3

0x0002,

0xf56d,	// (0x00079492) main_video2_pane_t_ParamLimits

0xf56d,	// (0x00079492) main_video2_pane_t

0x93df,	// (0x00073304) call_muted_g2

0x0001,

0xf514,	// (0x00079439) call_muted_g

0x1e9c,	// (0x0006bdc1) main_mup2_pane

0x219c,	// (0x0006c0c1) main_mup2_pane_g1_ParamLimits

0x219c,	// (0x0006c0c1) main_mup2_pane_g1

0x219c,	// (0x0006c0c1) main_mup2_pane_g2_ParamLimits

0x219c,	// (0x0006c0c1) main_mup2_pane_g2

0x21be,	// (0x0006c0e3) main_mup_pane_g13_cp1

0x1a59,	// (0x0006b97e) mup_volume_pane_cp1

0x219c,	// (0x0006c0c1) main_mup2_pane_g4_ParamLimits

0x219c,	// (0x0006c0c1) main_mup2_pane_g4

0x219c,	// (0x0006c0c1) main_mup2_pane_g5_ParamLimits

0x219c,	// (0x0006c0c1) main_mup2_pane_g5

0x219c,	// (0x0006c0c1) main_mup2_pane_g6_ParamLimits

0x219c,	// (0x0006c0c1) main_mup2_pane_g6

0x219c,	// (0x0006c0c1) main_mup2_pane_g7_ParamLimits

0x219c,	// (0x0006c0c1) main_mup2_pane_g7

0x0006,

0xf574,	// (0x00079499) main_mup2_pane_g_ParamLimits

0xf574,	// (0x00079499) main_mup2_pane_g

0x21aa,	// (0x0006c0cf) main_mup2_pane_t1_ParamLimits

0x21aa,	// (0x0006c0cf) main_mup2_pane_t1

0x21aa,	// (0x0006c0cf) main_mup2_pane_t2_ParamLimits

0x21aa,	// (0x0006c0cf) main_mup2_pane_t2

0x21aa,	// (0x0006c0cf) main_mup2_pane_t3_ParamLimits

0x21aa,	// (0x0006c0cf) main_mup2_pane_t3

0x21aa,	// (0x0006c0cf) main_mup2_pane_t4_ParamLimits

0x21aa,	// (0x0006c0cf) main_mup2_pane_t4

0x21aa,	// (0x0006c0cf) main_mup2_pane_t5_ParamLimits

0x21aa,	// (0x0006c0cf) main_mup2_pane_t5

0x21aa,	// (0x0006c0cf) main_mup2_pane_t6_ParamLimits

0x21aa,	// (0x0006c0cf) main_mup2_pane_t6

0x0005,

0xf583,	// (0x000794a8) main_mup2_pane_t_ParamLimits

0xf583,	// (0x000794a8) main_mup2_pane_t

0x4888,	// (0x0006e7ad) mup2_visualizer_pane_ParamLimits

0x4888,	// (0x0006e7ad) mup2_visualizer_pane

0x4888,	// (0x0006e7ad) mup_progress_pane_cp_ParamLimits

0x4888,	// (0x0006e7ad) mup_progress_pane_cp

0x4798,	// (0x0006e6bd) mup_volume_pane_cp_ParamLimits

0x4798,	// (0x0006e6bd) mup_volume_pane_cp

0x2180,	// (0x0006c0a5) mup2_visualizer_pane_g1_ParamLimits

0x2180,	// (0x0006c0a5) mup2_visualizer_pane_g1

0x218e,	// (0x0006c0b3) mup2_visualizer_pane_g2_ParamLimits

0x218e,	// (0x0006c0b3) mup2_visualizer_pane_g2

0x218e,	// (0x0006c0b3) mup2_visualizer_pane_g3_ParamLimits

0x218e,	// (0x0006c0b3) mup2_visualizer_pane_g3

0x0002,

0xf07c,	// (0x00078fa1) mup2_visualizer_pane_g_ParamLimits

0xf07c,	// (0x00078fa1) mup2_visualizer_pane_g

0x1a59,	// (0x0006b97e) aid_size_cell_fmradio

0x94f5,	// (0x0007341a) aid_height_parent_landcape

0x2957,	// (0x0006c87c) wml_content_pane_cp

0x295f,	// (0x0006c884) wml_tabs_pane

0x2b16,	// (0x0006ca3b) popup_wml_miniature_window

0x2b1e,	// (0x0006ca43) scroll_pane_cp021

0x2b32,	// (0x0006ca57) wml_content_pane_comp8

0x1e9c,	// (0x0006bdc1) bg_popup_sub_pane_cp05

0x47ae,	// (0x0006e6d3) popup_wml_miniature_window_g1

0x47b6,	// (0x0006e6db) wml_miniature_view_pane

0x984c,	// (0x00073771) aid_size_wml_view

0x9854,	// (0x00073779) wml_miniature_view_pane_g1

0x985d,	// (0x00073782) wml_miniature_view_pane_g2

0x9866,	// (0x0007378b) wml_miniature_view_pane_g3

0x986e,	// (0x00073793) wml_miniature_view_pane_g4

0x9876,	// (0x0007379b) wml_miniature_view_pane_g5

0x987e,	// (0x000737a3) wml_miniature_view_pane_g6

0x9886,	// (0x000737ab) wml_miniature_view_pane_g7

0x988e,	// (0x000737b3) wml_miniature_view_pane_g8

0x0007,

0xf590,	// (0x000794b5) wml_miniature_view_pane_g

0x47be,	// (0x0006e6e3) background_graphic_ParamLimits

0x47be,	// (0x0006e6e3) background_graphic

0x47ca,	// (0x0006e6ef) wml_tabs_2_pane

0x47d3,	// (0x0006e6f8) wml_tabs_3_pane_ParamLimits

0x47d3,	// (0x0006e6f8) wml_tabs_3_pane

0x47e5,	// (0x0006e70a) wml_tabs_4_pane_ParamLimits

0x47e5,	// (0x0006e70a) wml_tabs_4_pane

0x47fb,	// (0x0006e720) wml_tabs_5_pane_ParamLimits

0x47fb,	// (0x0006e720) wml_tabs_5_pane

0x4815,	// (0x0006e73a) wml_tabs_pane_g2_ParamLimits

0x4815,	// (0x0006e73a) wml_tabs_pane_g2

0x482a,	// (0x0006e74f) wml_tabs_pane_g3_ParamLimits

0x482a,	// (0x0006e74f) wml_tabs_pane_g3

0x483f,	// (0x0006e764) wml_tabs_2_active_pane_ParamLimits

0x483f,	// (0x0006e764) wml_tabs_2_active_pane

0x483f,	// (0x0006e764) wml_tabs_2_passive_pane_ParamLimits

0x483f,	// (0x0006e764) wml_tabs_2_passive_pane

0x9896,	// (0x000737bb) wml_tabs_3_active_pane_cp_ParamLimits

0x9896,	// (0x000737bb) wml_tabs_3_active_pane_cp

0x98a7,	// (0x000737cc) wml_tabs_3_passive_pane_ParamLimits

0x98a7,	// (0x000737cc) wml_tabs_3_passive_pane

0x98b8,	// (0x000737dd) wml_tabs_3_passive_pane_cp_ParamLimits

0x98b8,	// (0x000737dd) wml_tabs_3_passive_pane_cp

0x98c9,	// (0x000737ee) tabs_4_active_pane

0x98d1,	// (0x000737f6) tabs_4_passive_pane

0x98d9,	// (0x000737fe) tabs_4_passive_pane_cp

0x98e1,	// (0x00073806) tabs_4_passive_pane_cp2

0x9353,	// (0x00073278) aid_height_text

0x4888,	// (0x0006e7ad) mup_volume_cont_pane_ParamLimits

0x4888,	// (0x0006e7ad) mup_volume_cont_pane

0x1a59,	// (0x0006b97e) aid_size_cell_pinb

0x1a59,	// (0x0006b97e) aid_size_list_pinb

0x4888,	// (0x0006e7ad) mup2_volume_cont_pane_ParamLimits

0x4888,	// (0x0006e7ad) mup2_volume_cont_pane

0x98e9,	// (0x0007380e) mup2_volume_cont_pane_g1_ParamLimits

0x98e9,	// (0x0007380e) mup2_volume_cont_pane_g1

0x68ef,	// (0x00070814) aid_size_cell_touch_ParamLimits

0x68ef,	// (0x00070814) aid_size_cell_touch

0x6b96,	// (0x00070abb) touch_pane_ParamLimits

0x6b96,	// (0x00070abb) touch_pane

0x1a59,	// (0x0006b97e) main_rss2_pane

0x4856,	// (0x0006e77b) listscroll_rss2_pane

0x485f,	// (0x0006e784) rss2_navigation_pane

0x4867,	// (0x0006e78c) list_rss2_pane

0x3139,	// (0x0006d05e) scroll_pane_cp22

0x486f,	// (0x0006e794) rss2_navigation_pane_g1

0x4878,	// (0x0006e79d) rss2_navigation_pane_g2

0x4880,	// (0x0006e7a5) rss2_navigation_pane_g3

0x0002,

0xf5a1,	// (0x000794c6) rss2_navigation_pane_g

0x48b8,	// (0x0006e7dd) rss2_navigation_pane_t1

0x98ff,	// (0x00073824) rss2_list_single_pane_ParamLimits

0x98ff,	// (0x00073824) rss2_list_single_pane

0x48c6,	// (0x0006e7eb) rss2_list_single_pane_t2

0x48d4,	// (0x0006e7f9) rss2_list_single_pane_t3_ParamLimits

0x48d4,	// (0x0006e7f9) rss2_list_single_pane_t3

0x48f1,	// (0x0006e816) rss2_list_single_pane_t4

0x86b7,	// (0x000725dc) smil_status_pane_g1

0x2119,	// (0x0006c03e) main_image2_pane_ParamLimits

0x2119,	// (0x0006c03e) main_image2_pane

0x218e,	// (0x0006c0b3) main_camera2_pane_g9_ParamLimits

0x218e,	// (0x0006c0b3) main_camera2_pane_g9

0x21dc,	// (0x0006c101) main_camera2_pane_t5_ParamLimits

0x21dc,	// (0x0006c101) main_camera2_pane_t5

0x48a4,	// (0x0006e7c9) main_camera2_pane_t6_ParamLimits

0x48a4,	// (0x0006e7c9) main_camera2_pane_t6

0x9933,	// (0x00073858) main_image2_pane_g1_ParamLimits

0x9933,	// (0x00073858) main_image2_pane_g1

0x9085,	// (0x00072faa) smil2_video_pane_ParamLimits

0x9085,	// (0x00072faa) smil2_video_pane

0x6923,	// (0x00070848) aid_zoom_text_primary_cp

0x6b3f,	// (0x00070a64) popup_preview_fixed_window

0x28c0,	// (0x0006c7e5) im_reading_pane_g1

0x983e,	// (0x00073763) cams2_bc_adjust_pane_cp_ParamLimits

0x983e,	// (0x00073763) cams2_bc_adjust_pane_cp

0x2172,	// (0x0006c097) cams2_bc_adjust_pane_ParamLimits

0x2172,	// (0x0006c097) cams2_bc_adjust_pane

0x21be,	// (0x0006c0e3) cams2_bc_adjust_pane_g1

0x1a59,	// (0x0006b97e) cams2_slider_pane

0x21be,	// (0x0006c0e3) cams2_slider_pane_g1

0x21be,	// (0x0006c0e3) cams2_slider_pane_g2

0x0006,

0xf5a8,	// (0x000794cd) cams2_slider_pane_g

0x6c67,	// (0x00070b8c) calc_display_pane_ParamLimits

0x6c85,	// (0x00070baa) calc_paper_pane_ParamLimits

0x6ca1,	// (0x00070bc6) grid_calc_pane_ParamLimits

0x88bd,	// (0x000727e2) popup_clock_digital_window_t1_ParamLimits

0x3695,	// (0x0006d5ba) main_image_pane_t1

0x6c4d,	// (0x00070b72) aid_size_cell_calc_ParamLimits

0x6c4d,	// (0x00070b72) aid_size_cell_calc

0x9537,	// (0x0007345c) popup_blid_sat_info2_window_ParamLimits

0x9537,	// (0x0007345c) popup_blid_sat_info2_window

0x48ff,	// (0x0006e824) aid_size_cell_blid

0x4888,	// (0x0006e7ad) bg_popup_window_pane_cp07

0x491c,	// (0x0006e841) grid_popup_blid_pane

0x4926,	// (0x0006e84b) heading_pane_cp05_ParamLimits

0x4926,	// (0x0006e84b) heading_pane_cp05

0x49f0,	// (0x0006e915) cell_popup_blid_pane_ParamLimits

0x49f0,	// (0x0006e915) cell_popup_blid_pane

0x4a14,	// (0x0006e939) cell_popup_blid_pane_g1

0x4a1c,	// (0x0006e941) cell_popup_blid_pane_t1

0x4888,	// (0x0006e7ad) mup2_indicator_pane_ParamLimits

0x4888,	// (0x0006e7ad) mup2_indicator_pane

0x1a59,	// (0x0006b97e) mup2_visualizer_osc_pane

0x4798,	// (0x0006e6bd) mup2_visualizer_spec_pane_ParamLimits

0x4798,	// (0x0006e6bd) mup2_visualizer_spec_pane

0x1a59,	// (0x0006b97e) mup2_spec_half_pane

0x1a59,	// (0x0006b97e) mup2_spec_half_pane_cp

0x4a2a,	// (0x0006e94f) mup2_spec_bar_pane_ParamLimits

0x4a2a,	// (0x0006e94f) mup2_spec_bar_pane

0x21be,	// (0x0006c0e3) mup2_spec_bar_pane_g1

0x4a49,	// (0x0006e96e) mup2_spec_bar_pane_g2

0x0001,

0xf5ce,	// (0x000794f3) mup2_spec_bar_pane_g

0x1a59,	// (0x0006b97e) mup2_osc_middle_pane

0x21be,	// (0x0006c0e3) mup2_visualizer_osc_pane_g1

0x1a83,	// (0x0006b9a8) popup_number_entry_window_t1_ParamLimits

0x1a96,	// (0x0006b9bb) popup_number_entry_window_t2_ParamLimits

0x1aa8,	// (0x0006b9cd) popup_number_entry_window_t3_ParamLimits

0x6bed,	// (0x00070b12) popup_number_entry_window_t5_ParamLimits

0x6bed,	// (0x00070b12) popup_number_entry_window_t5

0xf01d,	// (0x00078f42) popup_number_entry_window_t_ParamLimits

0x1aba,	// (0x0006b9df) text_title_cp2_ParamLimits

0x8daf,	// (0x00072cd4) aid_hotspot_pointer_text2_pane

0x8e49,	// (0x00072d6e) main_viewer_pane_g9_ParamLimits

0x8e49,	// (0x00072d6e) main_viewer_pane_g9

0x2ca7,	// (0x0006cbcc) cale_month_pane_t1_ParamLimits

0x2ce4,	// (0x0006cc09) bg_cale_pane_ParamLimits

0x2cfc,	// (0x0006cc21) list_cale_pane_ParamLimits

0x2d0d,	// (0x0006cc32) listscroll_cale_day_pane_t1

0x2d1f,	// (0x0006cc44) scroll_pane_cp09_ParamLimits

0x8b6e,	// (0x00072a93) main_mup_eq_pane_t1_ParamLimits

0x8b6e,	// (0x00072a93) main_mup_eq_pane_t1

0x8b88,	// (0x00072aad) main_mup_eq_pane_t2_ParamLimits

0x8b88,	// (0x00072aad) main_mup_eq_pane_t2

0x8ba0,	// (0x00072ac5) main_mup_eq_pane_t3_ParamLimits

0x8ba0,	// (0x00072ac5) main_mup_eq_pane_t3

0x8bb8,	// (0x00072add) main_mup_eq_pane_t4_ParamLimits

0x8bb8,	// (0x00072add) main_mup_eq_pane_t4

0x8bd0,	// (0x00072af5) main_mup_eq_pane_t5_ParamLimits

0x8bd0,	// (0x00072af5) main_mup_eq_pane_t5

0x8be8,	// (0x00072b0d) main_mup_eq_pane_t6_ParamLimits

0x8be8,	// (0x00072b0d) main_mup_eq_pane_t6

0x8bfc,	// (0x00072b21) main_mup_eq_pane_t7_ParamLimits

0x8bfc,	// (0x00072b21) main_mup_eq_pane_t7

0x8c10,	// (0x00072b35) main_mup_eq_pane_t8_ParamLimits

0x8c10,	// (0x00072b35) main_mup_eq_pane_t8

0x8c26,	// (0x00072b4b) main_mup_eq_pane_t9_ParamLimits

0x8c26,	// (0x00072b4b) main_mup_eq_pane_t9

0x8c3e,	// (0x00072b63) main_mup_eq_pane_t10_ParamLimits

0x8c3e,	// (0x00072b63) main_mup_eq_pane_t10

0x0009,

0xf37c,	// (0x000792a1) main_mup_eq_pane_t_ParamLimits

0xf37c,	// (0x000792a1) main_mup_eq_pane_t

0x8cfb,	// (0x00072c20) mup_equalizer_pane_cp5_ParamLimits

0x8d11,	// (0x00072c36) mup_equalizer_pane_cp6_ParamLimits

0x8d29,	// (0x00072c4e) mup_equalizer_pane_cp7_ParamLimits

0x1a59,	// (0x0006b97e) main_gallery_pane

0x4736,	// (0x0006e65b) smil2_volume_pane

0x4751,	// (0x0006e676) smil_status_volume_pane_g1_ParamLimits

0x473e,	// (0x0006e663) smil_status_volume_pane_g2_ParamLimits

0x96f1,	// (0x00073616) smil_status_volume_pane_g3_ParamLimits

0xf527,	// (0x0007944c) smil_status_volume_pane_g_ParamLimits

0x4888,	// (0x0006e7ad) bg_popup_window_pane_cp07_ParamLimits

0x4907,	// (0x0006e82c) blid_firmament_pane

0x2172,	// (0x0006c097) aid_size_cell_gallery_ParamLimits

0x2172,	// (0x0006c097) aid_size_cell_gallery

0x2172,	// (0x0006c097) grid_gallery_pane_ParamLimits

0x2172,	// (0x0006c097) grid_gallery_pane

0x3446,	// (0x0006d36b) cell_gallery_pane_ParamLimits

0x3446,	// (0x0006d36b) cell_gallery_pane

0x2119,	// (0x0006c03e) bg_cell_gallery_focus_pane_ParamLimits

0x2119,	// (0x0006c03e) bg_cell_gallery_focus_pane

0x2180,	// (0x0006c0a5) cell_gallery_pane_g1_ParamLimits

0x2180,	// (0x0006c0a5) cell_gallery_pane_g1

0x2180,	// (0x0006c0a5) cell_gallery_pane_g2_ParamLimits

0x2180,	// (0x0006c0a5) cell_gallery_pane_g2

0x2180,	// (0x0006c0a5) cell_gallery_pane_g3_ParamLimits

0x2180,	// (0x0006c0a5) cell_gallery_pane_g3

0x218e,	// (0x0006c0b3) cell_gallery_pane_g4_ParamLimits

0x218e,	// (0x0006c0b3) cell_gallery_pane_g4

0x0003,

0xf5d3,	// (0x000794f8) cell_gallery_pane_g_ParamLimits

0xf5d3,	// (0x000794f8) cell_gallery_pane_g

0x4a53,	// (0x0006e978) bg_cell_gallery_focus_pane_g1

0x4a5b,	// (0x0006e980) bg_cell_gallery_focus_pane_g2

0x4a63,	// (0x0006e988) bg_cell_gallery_focus_pane_g3

0x4a6b,	// (0x0006e990) bg_cell_gallery_focus_pane_g4

0x4a73,	// (0x0006e998) bg_cell_gallery_focus_pane_g5

0x4a7b,	// (0x0006e9a0) bg_cell_gallery_focus_pane_g6

0x4a83,	// (0x0006e9a8) bg_cell_gallery_focus_pane_g7

0x4a8b,	// (0x0006e9b0) bg_cell_gallery_focus_pane_g8

0x0007,

0xf5dc,	// (0x00079501) bg_cell_gallery_focus_pane_g

0x4a93,	// (0x0006e9b8) aid_firma_cardinal

0x4aa7,	// (0x0006e9cc) blid_firmament_pane_t1

0x4abe,	// (0x0006e9e3) blid_firmament_pane_t2

0x4ad5,	// (0x0006e9fa) blid_firmament_pane_t3

0x4aec,	// (0x0006ea11) blid_firmament_pane_t4

0x0003,

0xf5ed,	// (0x00079512) blid_firmament_pane_t

0x4b03,	// (0x0006ea28) blid_sat_info_pane

0x21be,	// (0x0006c0e3) blid_sat_info_pane_g1

0x21be,	// (0x0006c0e3) blid_sat_info_pane_g2

0x0001,

0xf08c,	// (0x00078fb1) blid_sat_info_pane_g

0x4b13,	// (0x0006ea38) blid_sat_info_pane_t1

0x4b21,	// (0x0006ea46) smil2_volume_content_pane

0x4b2a,	// (0x0006ea4f) smil2_volume_pane_g1

0x22c3,	// (0x0006c1e8) smil2_volume_content_pane_g1

0x4b32,	// (0x0006ea57) smil2_volume_content_pane_g2

0x4b3b,	// (0x0006ea60) smil2_volume_content_pane_g3

0x4b44,	// (0x0006ea69) smil2_volume_content_pane_g4

0x4b4d,	// (0x0006ea72) smil2_volume_content_pane_g5

0x4b56,	// (0x0006ea7b) smil2_volume_content_pane_g6

0x4b5f,	// (0x0006ea84) smil2_volume_content_pane_g7

0x4b68,	// (0x0006ea8d) smil2_volume_content_pane_g8

0x4b71,	// (0x0006ea96) smil2_volume_content_pane_g9

0x4b7a,	// (0x0006ea9f) smil2_volume_content_pane_g10

0x0009,

0xf5f6,	// (0x0007951b) smil2_volume_content_pane_g

0x71a1,	// (0x000710c6) cale_week_day_heading_pane_t1_ParamLimits

0x71bc,	// (0x000710e1) cale_week_day_heading_pane_t2_ParamLimits

0x71d7,	// (0x000710fc) cale_week_day_heading_pane_t3_ParamLimits

0x71f2,	// (0x00071117) cale_week_day_heading_pane_t4_ParamLimits

0x720d,	// (0x00071132) cale_week_day_heading_pane_t5_ParamLimits

0x7228,	// (0x0007114d) cale_week_day_heading_pane_t6_ParamLimits

0x7243,	// (0x00071168) cale_week_day_heading_pane_t7_ParamLimits

0xf124,	// (0x00079049) cale_week_day_heading_pane_t_ParamLimits

0x27b5,	// (0x0006c6da) bg_cale_side_pane_ParamLimits

0x725e,	// (0x00071183) cale_week_time_pane_t1_ParamLimits

0x7278,	// (0x0007119d) cale_week_time_pane_t2_ParamLimits

0x7292,	// (0x000711b7) cale_week_time_pane_t3_ParamLimits

0x72ac,	// (0x000711d1) cale_week_time_pane_t4_ParamLimits

0x72c6,	// (0x000711eb) cale_week_time_pane_t5_ParamLimits

0x72e0,	// (0x00071205) cale_week_time_pane_t6_ParamLimits

0x7300,	// (0x00071225) cale_week_time_pane_t7_ParamLimits

0x7322,	// (0x00071247) cale_week_time_pane_t8_ParamLimits

0xf133,	// (0x00079058) cale_week_time_pane_t_ParamLimits

0x7346,	// (0x0007126b) cell_cale_week_pane_g2_ParamLimits

0x27b5,	// (0x0006c6da) bg_cale_side_pane_cp01_ParamLimits

0x84a6,	// (0x000723cb) cale_month_week_pane_t1_ParamLimits

0x84bf,	// (0x000723e4) cale_month_week_pane_t2_ParamLimits

0x84d8,	// (0x000723fd) cale_month_week_pane_t3_ParamLimits

0x84f1,	// (0x00072416) cale_month_week_pane_t4_ParamLimits

0x850c,	// (0x00072431) cale_month_week_pane_t5_ParamLimits

0x852d,	// (0x00072452) cale_month_week_pane_t6_ParamLimits

0xf201,	// (0x00079126) cale_month_week_pane_t_ParamLimits

0x8674,	// (0x00072599) cell_cale_month_pane_g1_ParamLimits

0x1a59,	// (0x0006b97e) main_cale_event_viewer_pane

0x1a59,	// (0x0006b97e) listscroll_cale_event_viewer_pane

0x4b83,	// (0x0006eaa8) list_cale_ev_pane

0x4b8b,	// (0x0006eab0) scroll_pane_cp023

0x4b97,	// (0x0006eabc) field_cale_ev_pane_ParamLimits

0x4b97,	// (0x0006eabc) field_cale_ev_pane

0x4bb5,	// (0x0006eada) field_cale_ev_content_pane_ParamLimits

0x4bb5,	// (0x0006eada) field_cale_ev_content_pane

0x4bc1,	// (0x0006eae6) field_cale_ev_pane_g1_ParamLimits

0x4bc1,	// (0x0006eae6) field_cale_ev_pane_g1

0x4bcd,	// (0x0006eaf2) field_cale_ev_pane_g2_ParamLimits

0x4bcd,	// (0x0006eaf2) field_cale_ev_pane_g2

0x4be5,	// (0x0006eb0a) field_cale_ev_pane_g3_ParamLimits

0x4be5,	// (0x0006eb0a) field_cale_ev_pane_g3

0x0002,

0xf60b,	// (0x00079530) field_cale_ev_pane_g_ParamLimits

0xf60b,	// (0x00079530) field_cale_ev_pane_g

0x4bfd,	// (0x0006eb22) field_cale_ev_pane_t1_ParamLimits

0x4bfd,	// (0x0006eb22) field_cale_ev_pane_t1

0x4c14,	// (0x0006eb39) field_cale_ev_content_pane_t1_ParamLimits

0x4c14,	// (0x0006eb39) field_cale_ev_content_pane_t1

0x34f1,	// (0x0006d416) bg_button_pane_cp01

0x6f2c,	// (0x00070e51) listscroll_cale_week_pane_ParamLimits

0x2968,	// (0x0006c88d) popup_toolbar_window_cp01

0x2786,	// (0x0006c6ab) listscroll_cale_week_pane_t1_ParamLimits

0x6f2c,	// (0x00070e51) listscroll_cale_day_pane_ParamLimits

0x2968,	// (0x0006c88d) popup_toolbar_window_cp02

0x2d0d,	// (0x0006cc32) listscroll_cale_day_pane_t1_ParamLimits

0x6f2c,	// (0x00070e51) main_cale_month_pane_ParamLimits

0x963a,	// (0x0007355f) popup_toolbar_window_cp03_ParamLimits

0x963a,	// (0x0007355f) popup_toolbar_window_cp03

0x8f9b,	// (0x00072ec0) main_image_pane_g2_ParamLimits

0x8f9b,	// (0x00072ec0) main_image_pane_g2

0x8fa7,	// (0x00072ecc) main_image_pane_g3_ParamLimits

0x8fa7,	// (0x00072ecc) main_image_pane_g3

0x0002,

0xf40e,	// (0x00079333) main_image_pane_g_ParamLimits

0xf40e,	// (0x00079333) main_image_pane_g

0x3695,	// (0x0006d5ba) main_image_pane_t1_ParamLimits

0x8fb3,	// (0x00072ed8) main_image_pane_t2_ParamLimits

0x8fb3,	// (0x00072ed8) main_image_pane_t2

0x8fc5,	// (0x00072eea) main_image_pane_t3_ParamLimits

0x8fc5,	// (0x00072eea) main_image_pane_t3

0x8fd7,	// (0x00072efc) main_image_pane_t4_ParamLimits

0x8fd7,	// (0x00072efc) main_image_pane_t4

0x0003,

0xf415,	// (0x0007933a) main_image_pane_t_ParamLimits

0xf415,	// (0x0007933a) main_image_pane_t

0x8fe9,	// (0x00072f0e) popup_image_details_window_cp01

0x8ff3,	// (0x00072f18) popup_toobar_trans_pane_cp01_ParamLimits

0x8ff3,	// (0x00072f18) popup_toobar_trans_pane_cp01

0x958a,	// (0x000734af) popup_image_details_window_ParamLimits

0x958a,	// (0x000734af) popup_image_details_window

0x9598,	// (0x000734bd) popup_image_focus_window

0x2172,	// (0x0006c097) camera2_autofocus_pane_ParamLimits

0x2172,	// (0x0006c097) camera2_autofocus_pane

0x1a59,	// (0x0006b97e) bg_popup_sub_pane_cp06

0x4c32,	// (0x0006eb57) popup_image_focus_window_g1

0x4c3a,	// (0x0006eb5f) popup_image_focus_window_g2

0x4c42,	// (0x0006eb67) popup_image_focus_window_g3

0x4c4a,	// (0x0006eb6f) popup_image_focus_window_g4

0x0003,

0xf612,	// (0x00079537) popup_image_focus_window_g

0x4c52,	// (0x0006eb77) popup_image_focus_window_t1

0x4c60,	// (0x0006eb85) popup_image_focus_window_t2

0x4c70,	// (0x0006eb95) popup_image_focus_window_t3

0x0002,

0xf61b,	// (0x00079540) popup_image_focus_window_t

0x2180,	// (0x0006c0a5) camera2_autofocus_pane_g1

0x2119,	// (0x0006c03e) bg_tb_trans_pane_cp01

0x4c7e,	// (0x0006eba3) popup_image_details_window_g1

0x4c91,	// (0x0006ebb6) popup_image_details_window_g2

0x0002,

0xf62d,	// (0x00079552) popup_image_details_window_g

0x4cba,	// (0x0006ebdf) popup_image_details_window_t1

0x4ccc,	// (0x0006ebf1) popup_image_details_window_t2

0x4ce5,	// (0x0006ec0a) popup_image_details_window_t3

0x4cf9,	// (0x0006ec1e) popup_image_details_window_t4

0x4d14,	// (0x0006ec39) popup_image_details_window_t5

0x0004,

0xf634,	// (0x00079559) popup_image_details_window_t

0x2208,	// (0x0006c12d) bg_calc_paper_pane_ParamLimits

0x1a59,	// (0x0006b97e) grid_highlight_pane_cp013

0x6cdc,	// (0x00070c01) list_calc_pane_ParamLimits

0x6cee,	// (0x00070c13) scroll_pane_cp024

0x221c,	// (0x0006c141) bg_calc_display_pane_ParamLimits

0x6cf6,	// (0x00070c1b) calc_display_pane_t1_ParamLimits

0x6d0b,	// (0x00070c30) calc_display_pane_t2_ParamLimits

0x6d20,	// (0x00070c45) calc_display_pane_t3_ParamLimits

0xf0a4,	// (0x00078fc9) calc_display_pane_t_ParamLimits

0x6dfa,	// (0x00070d1f) cell_calc_pane_g2

0x0001,

0xf0c1,	// (0x00078fe6) cell_calc_pane_g

0x6e03,	// (0x00070d28) cell_calc_pane_t1

0x2271,	// (0x0006c196) grid_highlight_pane_cp02_ParamLimits

0x2287,	// (0x0006c1ac) toolbar_button_pane_cp01_ParamLimits

0x2287,	// (0x0006c1ac) toolbar_button_pane_cp01

0x36da,	// (0x0006d5ff) temp_image_control_pane_ParamLimits

0x36da,	// (0x0006d5ff) temp_image_control_pane

0x2119,	// (0x0006c03e) main_mp3_pane

0x4d2e,	// (0x0006ec53) temp_image_control_pane_g1_ParamLimits

0x4d2e,	// (0x0006ec53) temp_image_control_pane_g1

0x4d3c,	// (0x0006ec61) temp_image_control_pane_g2_ParamLimits

0x4d3c,	// (0x0006ec61) temp_image_control_pane_g2

0x4d4e,	// (0x0006ec73) temp_image_control_pane_g3_ParamLimits

0x4d4e,	// (0x0006ec73) temp_image_control_pane_g3

0x993f,	// (0x00073864) temp_image_control_pane_g4_ParamLimits

0x993f,	// (0x00073864) temp_image_control_pane_g4

0x0003,

0xf63f,	// (0x00079564) temp_image_control_pane_g_ParamLimits

0xf63f,	// (0x00079564) temp_image_control_pane_g

0x4d2e,	// (0x0006ec53) main_mp3_pane_g1

0x9950,	// (0x00073875) main_mp3_pane_g2

0x0007,

0xf648,	// (0x0007956d) main_mp3_pane_g

0x4d83,	// (0x0006eca8) main_mp3_pane_t1

0x218e,	// (0x0006c0b3) main_camera_pane_g8_ParamLimits

0x218e,	// (0x0006c0b3) main_camera_pane_g8

0x74ed,	// (0x00071412) main_video_pane_g7_ParamLimits

0x74ed,	// (0x00071412) main_video_pane_g7

0x21dc,	// (0x0006c101) main_camera2_pane_t7_ParamLimits

0x21dc,	// (0x0006c101) main_camera2_pane_t7

0x2917,	// (0x0006c83c) scroll_pane_cp025_ParamLimits

0x2917,	// (0x0006c83c) scroll_pane_cp025

0x292b,	// (0x0006c850) scroll_pane_cp026_ParamLimits

0x292b,	// (0x0006c850) scroll_pane_cp026

0x293a,	// (0x0006c85f) wml_content_pane_ParamLimits

0x1a59,	// (0x0006b97e) main_touch_calib_pane

0x99f4,	// (0x00073919) main_touch_calib_pane_g1

0x9a00,	// (0x00073925) main_touch_calib_pane_g2

0x9a0c,	// (0x00073931) main_touch_calib_pane_g3

0x9a18,	// (0x0007393d) main_touch_calib_pane_g4

0x0003,

0xf666,	// (0x0007958b) main_touch_calib_pane_g

0x9a24,	// (0x00073949) main_touch_calib_pane_t1

0x9a3d,	// (0x00073962) main_touch_calib_pane_t2

0x0004,

0xf66f,	// (0x00079594) main_touch_calib_pane_t

0x3208,	// (0x0006d12d) mup_progress_pane_cp02

0x323d,	// (0x0006d162) navi_pane_g1

0x32f8,	// (0x0006d21d) navi_pane_mp_t3

0x2119,	// (0x0006c03e) main_mp3_pane_ParamLimits

0x9677,	// (0x0007359c) navi_pane_ParamLimits

0x4d2e,	// (0x0006ec53) main_mp3_pane_g1_ParamLimits

0x9950,	// (0x00073875) main_mp3_pane_g2_ParamLimits

0x995c,	// (0x00073881) main_mp3_pane_g3_ParamLimits

0x995c,	// (0x00073881) main_mp3_pane_g3

0x9968,	// (0x0007388d) main_mp3_pane_g4_ParamLimits

0x9968,	// (0x0007388d) main_mp3_pane_g4

0x2180,	// (0x0006c0a5) main_mp3_pane_g5_ParamLimits

0x2180,	// (0x0006c0a5) main_mp3_pane_g5

0x4d5e,	// (0x0006ec83) main_mp3_pane_g6_ParamLimits

0x4d5e,	// (0x0006ec83) main_mp3_pane_g6

0x4d6b,	// (0x0006ec90) main_mp3_pane_g7_ParamLimits

0x4d6b,	// (0x0006ec90) main_mp3_pane_g7

0x4d77,	// (0x0006ec9c) main_mp3_pane_g8_ParamLimits

0x4d77,	// (0x0006ec9c) main_mp3_pane_g8

0xf648,	// (0x0007956d) main_mp3_pane_g_ParamLimits

0x9974,	// (0x00073899) main_mp3_pane_t2

0x9984,	// (0x000738a9) main_mp3_pane_t3

0x4d91,	// (0x0006ecb6) main_mp3_pane_t4

0x4d9f,	// (0x0006ecc4) main_mp3_pane_t5

0x0005,

0xf659,	// (0x0007957e) main_mp3_pane_t

0x4dad,	// (0x0006ecd2) mup_progress_pane_cp01

0x94ff,	// (0x00073424) aid_zoom_text_secondary2

0x4b83,	// (0x0006eaa8) list_cale_ev2_pane

0x4b8b,	// (0x0006eab0) scroll_pane_cp023_ParamLimits

0x9a98,	// (0x000739bd) field_cale_ev2_pane_ParamLimits

0x9a98,	// (0x000739bd) field_cale_ev2_pane

0x9ac2,	// (0x000739e7) field_cale_ev2_pane_g1_ParamLimits

0x9ac2,	// (0x000739e7) field_cale_ev2_pane_g1

0x9ace,	// (0x000739f3) field_cale_ev2_pane_g2_ParamLimits

0x9ace,	// (0x000739f3) field_cale_ev2_pane_g2

0x9ae6,	// (0x00073a0b) field_cale_ev2_pane_g3_ParamLimits

0x9ae6,	// (0x00073a0b) field_cale_ev2_pane_g3

0x0003,

0xf67a,	// (0x0007959f) field_cale_ev2_pane_g_ParamLimits

0xf67a,	// (0x0007959f) field_cale_ev2_pane_g

0x608e,	// (0x0006ffb3) field_cale_ev2_pane_t1_ParamLimits

0x608e,	// (0x0006ffb3) field_cale_ev2_pane_t1

0x60a5,	// (0x0006ffca) field_cale_ev2_pane_t2_ParamLimits

0x60a5,	// (0x0006ffca) field_cale_ev2_pane_t2

0x0001,

0xf683,	// (0x000795a8) field_cale_ev2_pane_t_ParamLimits

0xf683,	// (0x000795a8) field_cale_ev2_pane_t

0x8eb1,	// (0x00072dd6) main_postcard_pane_g5_ParamLimits

0x8eb1,	// (0x00072dd6) main_postcard_pane_g5

0x8ebf,	// (0x00072de4) main_postcard_pane_g6_ParamLimits

0x8ebf,	// (0x00072de4) main_postcard_pane_g6

0x2172,	// (0x0006c097) camera2_autofocus_pane_cp_ParamLimits

0x2172,	// (0x0006c097) camera2_autofocus_pane_cp

0x2119,	// (0x0006c03e) main_mup3_pane

0x9b49,	// (0x00073a6e) main_mup3_pane_g1_ParamLimits

0x9b49,	// (0x00073a6e) main_mup3_pane_g1

0x9b98,	// (0x00073abd) main_mup3_pane_g2_ParamLimits

0x9b98,	// (0x00073abd) main_mup3_pane_g2

0x9bfb,	// (0x00073b20) main_mup3_pane_g3_ParamLimits

0x9bfb,	// (0x00073b20) main_mup3_pane_g3

0x9c5a,	// (0x00073b7f) main_mup3_pane_g4_ParamLimits

0x9c5a,	// (0x00073b7f) main_mup3_pane_g4

0x9cb9,	// (0x00073bde) main_mup3_pane_g5_ParamLimits

0x9cb9,	// (0x00073bde) main_mup3_pane_g5

0x9d18,	// (0x00073c3d) main_mup3_pane_g6_ParamLimits

0x9d18,	// (0x00073c3d) main_mup3_pane_g6

0x218e,	// (0x0006c0b3) main_mup3_pane_g7_ParamLimits

0x218e,	// (0x0006c0b3) main_mup3_pane_g7

0x0007,

0xf693,	// (0x000795b8) main_mup3_pane_g_ParamLimits

0xf693,	// (0x000795b8) main_mup3_pane_g

0x9d88,	// (0x00073cad) main_mup3_pane_t1_ParamLimits

0x9d88,	// (0x00073cad) main_mup3_pane_t1

0x9e69,	// (0x00073d8e) main_mup3_pane_t2_ParamLimits

0x9e69,	// (0x00073d8e) main_mup3_pane_t2

0x9f4a,	// (0x00073e6f) main_mup3_pane_t4_ParamLimits

0x9f4a,	// (0x00073e6f) main_mup3_pane_t4

0x9f5c,	// (0x00073e81) main_mup3_pane_t5_ParamLimits

0x9f5c,	// (0x00073e81) main_mup3_pane_t5

0xa022,	// (0x00073f47) main_mup3_pane_t6_ParamLimits

0xa022,	// (0x00073f47) main_mup3_pane_t6

0x0005,

0xf6a4,	// (0x000795c9) main_mup3_pane_t_ParamLimits

0xf6a4,	// (0x000795c9) main_mup3_pane_t

0xa0bf,	// (0x00073fe4) mup3_progress_pane_ParamLimits

0xa0bf,	// (0x00073fe4) mup3_progress_pane

0xe924,	// (0x00078849) popup_mup3_control_window_ParamLimits

0xe924,	// (0x00078849) popup_mup3_control_window

0x4e29,	// (0x0006ed4e) popup_mup3_text_window

0xa122,	// (0x00074047) mup3_progress_pane_t1

0xa141,	// (0x00074066) mup3_progress_pane_t2

0x4e31,	// (0x0006ed56) mup3_progress_pane_t3

0x0002,

0xf6b1,	// (0x000795d6) mup3_progress_pane_t

0x4e4e,	// (0x0006ed73) mup_progress_pane_cp03

0x4e5e,	// (0x0006ed83) bg_tb_trans_pane_cp04

0x4e5e,	// (0x0006ed83) mup3_volume_pane

0x4e66,	// (0x0006ed8b) popup_mup3_control_window_g1

0x4e66,	// (0x0006ed8b) mup3_volume_pane_g1

0x4e66,	// (0x0006ed8b) mup3_volume_pane_g2

0x4e66,	// (0x0006ed8b) mup3_volume_pane_g3

0x0002,

0xf6b8,	// (0x000795dd) mup3_volume_pane_g

0x1a59,	// (0x0006b97e) bg_tb_trans_pane_cp03

0x4e6e,	// (0x0006ed93) popup_mup3_text_window_g1

0x4e76,	// (0x0006ed9b) popup_mup3_text_window_t1

0x2264,	// (0x0006c189) list_calc_item_pane_g1_ParamLimits

0x484d,	// (0x0006e772) mup_volume_pane_cp_g1

0x9a56,	// (0x0007397b) main_touch_calib_pane_t3

0x9a6c,	// (0x00073991) main_touch_calib_pane_t4

0x9a82,	// (0x000739a7) main_touch_calib_pane_t5

0x68db,	// (0x00070800) aid_cell_size_toolbar2

0x68e3,	// (0x00070808) aid_popup3_width_pane

0x5f1f,	// (0x0006fe44) aid_zoom_text_msg_primary

0x73ef,	// (0x00071314) vorec_t7

0x2228,	// (0x0006c14d) bg_calc_paper_pane_g1_ParamLimits

0x2240,	// (0x0006c165) bg_calc_paper_pane_g2_ParamLimits

0x2234,	// (0x0006c159) bg_calc_paper_pane_g3_ParamLimits

0x2258,	// (0x0006c17d) bg_calc_paper_pane_g4_ParamLimits

0x224c,	// (0x0006c171) bg_calc_paper_pane_g5_ParamLimits

0x6d5f,	// (0x00070c84) bg_calc_paper_pane_g6_ParamLimits

0x6d70,	// (0x00070c95) bg_calc_paper_pane_g7_ParamLimits

0x6d81,	// (0x00070ca6) bg_calc_paper_pane_g8_ParamLimits

0xf0ab,	// (0x00078fd0) bg_calc_paper_pane_g_ParamLimits

0x6d92,	// (0x00070cb7) calc_bg_paper_pane_g9_ParamLimits

0x2172,	// (0x0006c097) image_qvga_pane_ParamLimits

0x2172,	// (0x0006c097) image_qvga_pane

0x20f7,	// (0x0006c01c) bg_popup_sub_pane_cp04_ParamLimits

0x3611,	// (0x0006d536) popup_mup_playback_window_g1_ParamLimits

0x361d,	// (0x0006d542) popup_mup_playback_window_t1_ParamLimits

0x3632,	// (0x0006d557) popup_mup_playback_window_t2_ParamLimits

0xf409,	// (0x0007932e) popup_mup_playback_window_t_ParamLimits

0x2180,	// (0x0006c0a5) main_mup2_pane_g3_ParamLimits

0x2180,	// (0x0006c0a5) main_mup2_pane_g3

0x76ae,	// (0x000715d3) popup_toolbar_window_cp04

0x39b6,	// (0x0006d8db) popup_call2_audio_second_window_g3_ParamLimits

0x39b6,	// (0x0006d8db) popup_call2_audio_second_window_g3

0x3dce,	// (0x0006dcf3) popup_call2_audio_first_window_g4_ParamLimits

0x3dce,	// (0x0006dcf3) popup_call2_audio_first_window_g4

0x43f5,	// (0x0006e31a) popup_call2_audio_in_window_g4_ParamLimits

0x43f5,	// (0x0006e31a) popup_call2_audio_in_window_g4

0x8f8e,	// (0x00072eb3) aid_area_sk_bg_cut_ParamLimits

0x8f8e,	// (0x00072eb3) aid_area_sk_bg_cut

0x3647,	// (0x0006d56c) aid_area_sk_bg_cut_2_ParamLimits

0x3647,	// (0x0006d56c) aid_area_sk_bg_cut_2

0x1a59,	// (0x0006b97e) aid_placing_details_win

0x1a59,	// (0x0006b97e) aid_placing_details_win_2

0x2180,	// (0x0006c0a5) camera2_autofocus_pane_g1_ParamLimits

0x6b30,	// (0x00070a55) popup_fixed_preview_cale_window_ParamLimits

0x6b30,	// (0x00070a55) popup_fixed_preview_cale_window

0x3388,	// (0x0006d2ad) navi_slider_pane_g3

0x337f,	// (0x0006d2a4) navi_slider_pane_g4

0x3376,	// (0x0006d29b) navi_slider_pane_g5

0x3388,	// (0x0006d2ad) navi_slider_pane_g6

0x8b42,	// (0x00072a67) navi_slider_pane_g7

0x34b6,	// (0x0006d3db) mup_scale_pane_g3

0x34bf,	// (0x0006d3e4) mup_scale_pane_g4

0x34c8,	// (0x0006d3ed) mup_scale_pane_g5

0x8d41,	// (0x00072c66) mup_scale_pane_g6

0x8d4a,	// (0x00072c6f) mup_scale_pane_g7

0x21be,	// (0x0006c0e3) cams2_slider_pane_g3

0x21be,	// (0x0006c0e3) cams2_slider_pane_g4

0x21be,	// (0x0006c0e3) cams2_slider_pane_g5

0x21be,	// (0x0006c0e3) cams2_slider_pane_g6

0x21be,	// (0x0006c0e3) cams2_slider_pane_g7

0x21be,	// (0x0006c0e3) camera2_autofocus_pane_cp_g1

0x46bd,	// (0x0006e5e2) bg_popup_preview_window_pane_cp02_ParamLimits

0x46bd,	// (0x0006e5e2) bg_popup_preview_window_pane_cp02

0x4e84,	// (0x0006eda9) list_fp_cale_pane_ParamLimits

0x4e84,	// (0x0006eda9) list_fp_cale_pane

0x4e90,	// (0x0006edb5) popup_fixed_preview_cale_window_t1_ParamLimits

0x4e90,	// (0x0006edb5) popup_fixed_preview_cale_window_t1

0xa160,	// (0x00074085) popup_fixed_preview_cale_window_t2_ParamLimits

0xa160,	// (0x00074085) popup_fixed_preview_cale_window_t2

0xa175,	// (0x0007409a) popup_fixed_preview_cale_window_t3_ParamLimits

0xa175,	// (0x0007409a) popup_fixed_preview_cale_window_t3

0x0002,

0xf6bf,	// (0x000795e4) popup_fixed_preview_cale_window_t_ParamLimits

0xf6bf,	// (0x000795e4) popup_fixed_preview_cale_window_t

0xa18a,	// (0x000740af) list_single_fp_cale_pane_ParamLimits

0xa18a,	// (0x000740af) list_single_fp_cale_pane

0x4eae,	// (0x0006edd3) list_single_fp_cale_pane_g1_ParamLimits

0x4eae,	// (0x0006edd3) list_single_fp_cale_pane_g1

0x4eba,	// (0x0006eddf) list_single_fp_cale_pane_g2_ParamLimits

0x4eba,	// (0x0006eddf) list_single_fp_cale_pane_g2

0x0002,

0xf6c6,	// (0x000795eb) list_single_fp_cale_pane_g_ParamLimits

0xf6c6,	// (0x000795eb) list_single_fp_cale_pane_g

0x4ed3,	// (0x0006edf8) list_single_fp_cale_pane_t1_ParamLimits

0x4ed3,	// (0x0006edf8) list_single_fp_cale_pane_t1

0x4ee5,	// (0x0006ee0a) list_single_fp_cale_pane_t2_ParamLimits

0x4ee5,	// (0x0006ee0a) list_single_fp_cale_pane_t2

0x0001,

0xf6cd,	// (0x000795f2) list_single_fp_cale_pane_t_ParamLimits

0xf6cd,	// (0x000795f2) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x1a59,	// (0x0006b97e) main_dialer_pane

0x1a59,	// (0x0006b97e) aid_cell_size_keypad

0x1a59,	// (0x0006b97e) dialer_ne_pane

0x1a59,	// (0x0006b97e) grid_dialer_command_1_pane

0x1a59,	// (0x0006b97e) grid_dialer_command_2_pane

0x1a59,	// (0x0006b97e) grid_dialer_keypad_pane

0x4888,	// (0x0006e7ad) bg_popup_call_pane_cp06_ParamLimits

0x4888,	// (0x0006e7ad) bg_popup_call_pane_cp06

0x4888,	// (0x0006e7ad) dialer_ne_clear_pane_ParamLimits

0x4888,	// (0x0006e7ad) dialer_ne_clear_pane

0x21be,	// (0x0006c0e3) dialer_ne_pane_g1

0x21dc,	// (0x0006c101) dialer_ne_pane_t1_ParamLimits

0x21dc,	// (0x0006c101) dialer_ne_pane_t1

0x50f8,	// (0x0006f01d) dialer_ne_pane_t2_ParamLimits

0x50f8,	// (0x0006f01d) dialer_ne_pane_t2

0xa19d,	// (0x000740c2) dialer_ne_pane_t3_ParamLimits

0xa19d,	// (0x000740c2) dialer_ne_pane_t3

0x0002,

0xf6d2,	// (0x000795f7) dialer_ne_pane_t_ParamLimits

0xf6d2,	// (0x000795f7) dialer_ne_pane_t

0xa19d,	// (0x000740c2) dialer_ne_pane_t3_copy1_ParamLimits

0xa19d,	// (0x000740c2) dialer_ne_pane_t3_copy1

0x4f18,	// (0x0006ee3d) cell_dialer_keypad_pane_ParamLimits

0x4f18,	// (0x0006ee3d) cell_dialer_keypad_pane

0x2119,	// (0x0006c03e) cell_dialer_command_1_pane_ParamLimits

0x2119,	// (0x0006c03e) cell_dialer_command_1_pane

0x4f2f,	// (0x0006ee54) cell_dialer_command_2_pane_ParamLimits

0x4f2f,	// (0x0006ee54) cell_dialer_command_2_pane

0x2119,	// (0x0006c03e) bg_button_pane_cp02_ParamLimits

0x2119,	// (0x0006c03e) bg_button_pane_cp02

0x2180,	// (0x0006c0a5) cell_dialer_keypad_pane_g1_ParamLimits

0x2180,	// (0x0006c0a5) cell_dialer_keypad_pane_g1

0x2119,	// (0x0006c03e) bg_button_pane_cp03_ParamLimits

0x2119,	// (0x0006c03e) bg_button_pane_cp03

0x2180,	// (0x0006c0a5) cell_dialer_command_1_pane_g1_ParamLimits

0x2180,	// (0x0006c0a5) cell_dialer_command_1_pane_g1

0x1a59,	// (0x0006b97e) bg_button_pane_cp04

0x21be,	// (0x0006c0e3) cell_dialer_command_2_pane_g1

0x1a59,	// (0x0006b97e) bg_button_pane_cp06

0x21be,	// (0x0006c0e3) dialer_ne_clear_pane_g1

0x3249,	// (0x0006d16e) navi_pane_g2

0x3277,	// (0x0006d19c) navi_pane_g3

0x0002,

0xf311,	// (0x00079236) navi_pane_g

0x3306,	// (0x0006d22b) navi_pane_mv_g2

0x332d,	// (0x0006d252) navi_pane_mv_g5

0x8b0d,	// (0x00072a32) navi_pane_mv_t1

0x221c,	// (0x0006c141) main_clock2_pane

0x2172,	// (0x0006c097) main_clock2_list_pane_ParamLimits

0x2172,	// (0x0006c097) main_clock2_list_pane

0xa213,	// (0x00074138) main_clock2_pane_t1_ParamLimits

0xa213,	// (0x00074138) main_clock2_pane_t1

0xa241,	// (0x00074166) main_clock2_pane_t2_ParamLimits

0xa241,	// (0x00074166) main_clock2_pane_t2

0x0004,

0xf6de,	// (0x00079603) main_clock2_pane_t_ParamLimits

0xf6de,	// (0x00079603) main_clock2_pane_t

0xa2a6,	// (0x000741cb) popup_clock_analogue_window_cp03_ParamLimits

0xa2a6,	// (0x000741cb) popup_clock_analogue_window_cp03

0xa2c4,	// (0x000741e9) popup_clock_digital_window_cp02_ParamLimits

0xa2c4,	// (0x000741e9) popup_clock_digital_window_cp02

0xa339,	// (0x0007425e) main_clock2_list_single_pane_ParamLimits

0xa339,	// (0x0007425e) main_clock2_list_single_pane

0x2807,	// (0x0006c72c) list_highlight_pane_cp05

0x4f72,	// (0x0006ee97) main_clock2_list_single_pane_t1

0x76ae,	// (0x000715d3) popup_toolbar_window_cp04_ParamLimits

0x218e,	// (0x0006c0b3) camera2_autofocus_pane_g2_ParamLimits

0x218e,	// (0x0006c0b3) camera2_autofocus_pane_g2

0x218e,	// (0x0006c0b3) camera2_autofocus_pane_g3_ParamLimits

0x218e,	// (0x0006c0b3) camera2_autofocus_pane_g3

0x218e,	// (0x0006c0b3) camera2_autofocus_pane_g4_ParamLimits

0x218e,	// (0x0006c0b3) camera2_autofocus_pane_g4

0x218e,	// (0x0006c0b3) camera2_autofocus_pane_g5_ParamLimits

0x218e,	// (0x0006c0b3) camera2_autofocus_pane_g5

0x0004,

0xf622,	// (0x00079547) camera2_autofocus_pane_g_ParamLimits

0xf622,	// (0x00079547) camera2_autofocus_pane_g

0x9b0a,	// (0x00073a2f) camera2_autofocus_pane_cp_g2

0x9b12,	// (0x00073a37) camera2_autofocus_pane_cp_g3

0x9b1a,	// (0x00073a3f) camera2_autofocus_pane_cp_g4

0x9b22,	// (0x00073a47) camera2_autofocus_pane_cp_g5

0x0004,

0xf688,	// (0x000795ad) camera2_autofocus_pane_cp_g

0x1a59,	// (0x0006b97e) popup_dialer_spcha_window

0x1a59,	// (0x0006b97e) bg_popup_sub_pane_cp07

0x1a59,	// (0x0006b97e) list_spcha_pane

0x4f80,	// (0x0006eea5) list_single_spcha_pane_ParamLimits

0x4f80,	// (0x0006eea5) list_single_spcha_pane

0x1a59,	// (0x0006b97e) list_highlight_pane_cp06

0x2eaa,	// (0x0006cdcf) list_single_spcha_pane_t1

0x419f,	// (0x0006e0c4) popup_call2_audio_out_window_g4_ParamLimits

0x419f,	// (0x0006e0c4) popup_call2_audio_out_window_g4

0x1a59,	// (0x0006b97e) main_imed2_pane

0x95a0,	// (0x000734c5) popup_imed_adjust2_window

0x95b3,	// (0x000734d8) popup_imed_trans_window_ParamLimits

0x95b3,	// (0x000734d8) popup_imed_trans_window

0x4952,	// (0x0006e877) popup_blid_sat_info2_window_t1

0x4960,	// (0x0006e885) popup_blid_sat_info2_window_t2

0x000a,

0xf5b7,	// (0x000794dc) popup_blid_sat_info2_window_t

0xa3ee,	// (0x00074313) aid_size_cell_colour_35

0xa408,	// (0x0007432d) aid_size_cell_colour_112

0xa41f,	// (0x00074344) aid_size_cell_effect

0x2119,	// (0x0006c03e) bg_tb_trans_pane_cp02

0x2e77,	// (0x0006cd9c) heading_imed_pane

0xa439,	// (0x0007435e) listscroll_imed_pane

0x4f92,	// (0x0006eeb7) heading_imed_pane_g1

0x4f9a,	// (0x0006eebf) heading_imed_pane_t1

0x4fa8,	// (0x0006eecd) grid_imed_colour_35_pane_ParamLimits

0x4fa8,	// (0x0006eecd) grid_imed_colour_35_pane

0xa445,	// (0x0007436a) grid_imed_effect_pane

0x4fc0,	// (0x0006eee5) list_imed_aspect_pane

0xa455,	// (0x0007437a) scroll_pane_cp027_ParamLimits

0xa455,	// (0x0007437a) scroll_pane_cp027

0xa461,	// (0x00074386) cell_imed_effect_pane_ParamLimits

0xa461,	// (0x00074386) cell_imed_effect_pane

0x4fc8,	// (0x0006eeed) cell_imed_colour_pane_ParamLimits

0x4fc8,	// (0x0006eeed) cell_imed_colour_pane

0x500a,	// (0x0006ef2f) cell_imed_colour_pane_g1_ParamLimits

0x500a,	// (0x0006ef2f) cell_imed_colour_pane_g1

0x501b,	// (0x0006ef40) hgihlgiht_grid_pane_cp016_ParamLimits

0x501b,	// (0x0006ef40) hgihlgiht_grid_pane_cp016

0xa479,	// (0x0007439e) cell_imed_effect_pane_g1

0xa481,	// (0x000743a6) grid_highlight_pane_cp017

0x502c,	// (0x0006ef51) list_imed_single_pane_ParamLimits

0x502c,	// (0x0006ef51) list_imed_single_pane

0x1a59,	// (0x0006b97e) list_highlight_pane_cp07

0x5041,	// (0x0006ef66) list_imed_aspect_pane_comp1_t1

0x3446,	// (0x0006d36b) bg_tb_trans_pane_cp05

0x5063,	// (0x0006ef88) popup_imed_adjust2_window_g1

0x508a,	// (0x0006efaf) popup_imed_adjust2_window_t1

0x50a2,	// (0x0006efc7) slider_imed_adjust_pane

0x50b6,	// (0x0006efdb) slider_imed_adjust_pane_g1

0x50c6,	// (0x0006efeb) slider_imed_adjust_pane_g2

0x50d6,	// (0x0006effb) slider_imed_adjust_pane_g3

0x50e7,	// (0x0006f00c) slider_imed_adjust_pane_g4

0x0003,

0xf6fb,	// (0x00079620) slider_imed_adjust_pane_g

0xa48a,	// (0x000743af) aid_size_cell_clipart2

0xa496,	// (0x000743bb) grid_imed_clipart_pane

0x34d9,	// (0x0006d3fe) scroll_pane_cp031

0xa4a0,	// (0x000743c5) cell_imed_clipart_pane_ParamLimits

0xa4a0,	// (0x000743c5) cell_imed_clipart_pane

0xa4c3,	// (0x000743e8) cell_imed_clipart_pane_g1

0x1a59,	// (0x0006b97e) grid_highlight_pane_cp014

0xa1f5,	// (0x0007411a) main_clock2_pane_g1_ParamLimits

0xa1f5,	// (0x0007411a) main_clock2_pane_g1

0xa2e0,	// (0x00074205) aid_call2_pane_cp10

0xa2f2,	// (0x00074217) aid_call_pane_cp10

0x31a8,	// (0x0006d0cd) popup_clock_analogue_window_cp10_g1

0x31a8,	// (0x0006d0cd) popup_clock_analogue_window_cp10_g2

0xa304,	// (0x00074229) popup_clock_analogue_window_cp10_g3

0xa304,	// (0x00074229) popup_clock_analogue_window_cp10_g4

0x31a8,	// (0x0006d0cd) popup_clock_analogue_window_cp10_g5

0x0004,

0xf6e9,	// (0x0007960e) popup_clock_analogue_window_cp10_g

0xa31a,	// (0x0007423f) popup_clock_analogue_window_cp10_t1

0xa34b,	// (0x00074270) clock_digital_number_pane_cp10_ParamLimits

0xa34b,	// (0x00074270) clock_digital_number_pane_cp10

0xa365,	// (0x0007428a) clock_digital_number_pane_cp11_ParamLimits

0xa365,	// (0x0007428a) clock_digital_number_pane_cp11

0xa37f,	// (0x000742a4) clock_digital_number_pane_cp12_ParamLimits

0xa37f,	// (0x000742a4) clock_digital_number_pane_cp12

0xa399,	// (0x000742be) clock_digital_number_pane_cp13_ParamLimits

0xa399,	// (0x000742be) clock_digital_number_pane_cp13

0xa3b3,	// (0x000742d8) clock_digital_separator_pane_cp10_ParamLimits

0xa3b3,	// (0x000742d8) clock_digital_separator_pane_cp10

0xa3cd,	// (0x000742f2) popup_clock_digital_window_cp02_t1_ParamLimits

0xa3cd,	// (0x000742f2) popup_clock_digital_window_cp02_t1

0x20ef,	// (0x0006c014) clock_digital_number_pane_cp10_g1

0x20ef,	// (0x0006c014) clock_digital_number_pane_cp10_g2

0x0001,

0xf704,	// (0x00079629) clock_digital_number_pane_cp10_g

0x20ef,	// (0x0006c014) clock_digital_separator_pane_cp10_g1

0x20ef,	// (0x0006c014) clock_digital_separator_pane_g2_cp10

0x3335,	// (0x0006d25a) navi_pane_vded_g4

0x333e,	// (0x0006d263) navi_pane_vded_g5

0x3347,	// (0x0006d26c) navi_pane_vded_t1

0x1a59,	// (0x0006b97e) main_vded_pane

0xa4cc,	// (0x000743f1) main_vded_pane_g1

0xa4d8,	// (0x000743fd) main_vded_pane_g2

0xa4e2,	// (0x00074407) main_vded_pane_g3

0x0002,

0xf709,	// (0x0007962e) main_vded_pane_g

0xa4ec,	// (0x00074411) main_vded_pane_t1

0xa4fa,	// (0x0007441f) main_vded_pane_t2

0x0001,

0xf710,	// (0x00079635) main_vded_pane_t

0xa508,	// (0x0007442d) vded_slider_pane

0xa512,	// (0x00074437) vded_video_pane

0x5115,	// (0x0006f03a) vded_video_pane_g1

0xa51c,	// (0x00074441) vded_video_pane_g2

0x21be,	// (0x0006c0e3) vded_video_pane_g3

0x0002,

0xf715,	// (0x0007963a) vded_video_pane_g

0x511f,	// (0x0006f044) vded_slider_pane_g1

0x484d,	// (0x0006e772) vded_slider_pane_g2

0x5128,	// (0x0006f04d) vded_slider_pane_g3

0x5131,	// (0x0006f056) vded_slider_pane_g4

0x513a,	// (0x0006f05f) vded_slider_pane_g5

0x0004,

0xf71c,	// (0x00079641) vded_slider_pane_g

0xe924,	// (0x00078849) mup3_rocker_pane_ParamLimits

0xe924,	// (0x00078849) mup3_rocker_pane

0x4e66,	// (0x0006ed8b) mup3_control_keys_pane_g1

0x5143,	// (0x0006f068) mup3_control_keys_pane_g2

0x4e66,	// (0x0006ed8b) mup3_control_keys_pane_g3

0x514b,	// (0x0006f070) mup3_control_keys_pane_g4

0x0003,

0xf727,	// (0x0007964c) mup3_control_keys_pane_g

0x6b58,	// (0x00070a7d) popup_toolbar2_fixed_window_cp01_ParamLimits

0x6b58,	// (0x00070a7d) popup_toolbar2_fixed_window_cp01

0xe924,	// (0x00078849) popup_toolbar2_fixed_window_cp02_ParamLimits

0xe924,	// (0x00078849) popup_toolbar2_fixed_window_cp02

0x3b28,	// (0x0006da4d) popup_call2_audio_second_window_t4_ParamLimits

0x3b28,	// (0x0006da4d) popup_call2_audio_second_window_t4

0x4064,	// (0x0006df89) popup_call2_audio_first_window_t6_ParamLimits

0x4064,	// (0x0006df89) popup_call2_audio_first_window_t6

0x42a2,	// (0x0006e1c7) popup_call2_audio_out_window_t6_ParamLimits

0x42a2,	// (0x0006e1c7) popup_call2_audio_out_window_t6

0x1a59,	// (0x0006b97e) main_vitu_pane

0x2172,	// (0x0006c097) aid_size_cell_itu_ParamLimits

0x2172,	// (0x0006c097) aid_size_cell_itu

0x2172,	// (0x0006c097) bg_popup_window_pane_cp08_ParamLimits

0x2172,	// (0x0006c097) bg_popup_window_pane_cp08

0x2172,	// (0x0006c097) field_vitu_entry_pane_ParamLimits

0x2172,	// (0x0006c097) field_vitu_entry_pane

0x2172,	// (0x0006c097) grid_vitu_function_pane_ParamLimits

0x2172,	// (0x0006c097) grid_vitu_function_pane

0x2172,	// (0x0006c097) grid_vitu_itu_pane_ParamLimits

0x2172,	// (0x0006c097) grid_vitu_itu_pane

0x2172,	// (0x0006c097) cell_vitu_itu_pane_ParamLimits

0x2172,	// (0x0006c097) cell_vitu_itu_pane

0x2172,	// (0x0006c097) cell_vitu_function_pane_ParamLimits

0x2172,	// (0x0006c097) cell_vitu_function_pane

0x2119,	// (0x0006c03e) bg_popup_sub_pane_cp08_ParamLimits

0x2119,	// (0x0006c03e) bg_popup_sub_pane_cp08

0x21c8,	// (0x0006c0ed) field_vitu_entry_pane_t1_ParamLimits

0x21c8,	// (0x0006c0ed) field_vitu_entry_pane_t1

0x50f8,	// (0x0006f01d) field_vitu_entry_pane_t2_ParamLimits

0x50f8,	// (0x0006f01d) field_vitu_entry_pane_t2

0x0001,

0xf730,	// (0x00079655) field_vitu_entry_pane_t_ParamLimits

0xf730,	// (0x00079655) field_vitu_entry_pane_t

0x4888,	// (0x0006e7ad) bg_button_pane_cp05_ParamLimits

0x4888,	// (0x0006e7ad) bg_button_pane_cp05

0x5153,	// (0x0006f078) cell_vitu_itu_pane_g1

0x3432,	// (0x0006d357) cell_vitu_itu_pane_t1_ParamLimits

0x3432,	// (0x0006d357) cell_vitu_itu_pane_t1

0x3432,	// (0x0006d357) cell_vitu_itu_pane_t2_ParamLimits

0x3432,	// (0x0006d357) cell_vitu_itu_pane_t2

0x0002,

0xf735,	// (0x0007965a) cell_vitu_itu_pane_t_ParamLimits

0xf735,	// (0x0007965a) cell_vitu_itu_pane_t

0x1a59,	// (0x0006b97e) bg_button_pane_cp07

0x21be,	// (0x0006c0e3) cell_vitu_function_pane_g1

0x6cc5,	// (0x00070bea) main_calc_pane_g1

0x6917,	// (0x0007083c) aid_visual_content_pane

0x1a59,	// (0x0006b97e) main_vradio_pane

0x218e,	// (0x0006c0b3) main_vradio_pane_g1_ParamLimits

0x218e,	// (0x0006c0b3) main_vradio_pane_g1

0x218e,	// (0x0006c0b3) main_vradio_pane_g2_ParamLimits

0x218e,	// (0x0006c0b3) main_vradio_pane_g2

0x0001,

0xf4cc,	// (0x000793f1) main_vradio_pane_g_ParamLimits

0xf4cc,	// (0x000793f1) main_vradio_pane_g

0x21dc,	// (0x0006c101) main_vradio_pane_t1_ParamLimits

0x21dc,	// (0x0006c101) main_vradio_pane_t1

0x21dc,	// (0x0006c101) main_vradio_pane_t2_ParamLimits

0x21dc,	// (0x0006c101) main_vradio_pane_t2

0x21dc,	// (0x0006c101) main_vradio_pane_t3_ParamLimits

0x21dc,	// (0x0006c101) main_vradio_pane_t3

0x0002,

0xf73c,	// (0x00079661) main_vradio_pane_t_ParamLimits

0xf73c,	// (0x00079661) main_vradio_pane_t

0x2172,	// (0x0006c097) vradio_rocker_control_pane_ParamLimits

0x2172,	// (0x0006c097) vradio_rocker_control_pane

0x2172,	// (0x0006c097) vradio_station_info_pane_ParamLimits

0x2172,	// (0x0006c097) vradio_station_info_pane

0x2119,	// (0x0006c03e) vradio_frequency_info_pane_ParamLimits

0x2119,	// (0x0006c03e) vradio_frequency_info_pane

0x21be,	// (0x0006c0e3) vradio_station_info_pane_g1

0x3432,	// (0x0006d357) vradio_station_info_pane_t1_ParamLimits

0x3432,	// (0x0006d357) vradio_station_info_pane_t1

0x21dc,	// (0x0006c101) vradio_station_info_pane_t2_ParamLimits

0x21dc,	// (0x0006c101) vradio_station_info_pane_t2

0x0001,

0xf743,	// (0x00079668) vradio_station_info_pane_t_ParamLimits

0xf743,	// (0x00079668) vradio_station_info_pane_t

0x1a59,	// (0x0006b97e) vradio_tuning_pane

0xa525,	// (0x0007444a) vradio_rocker_control_pane_g1

0x516f,	// (0x0006f094) vradio_rocker_control_pane_g2

0xa52d,	// (0x00074452) vradio_rocker_control_pane_g3

0xa535,	// (0x0007445a) vradio_rocker_control_pane_g4

0xa53d,	// (0x00074462) vradio_rocker_control_pane_g5

0x0004,

0xf748,	// (0x0007966d) vradio_rocker_control_pane_g

0x21be,	// (0x0006c0e3) vradio_frequency_info_pane_g1

0x21c8,	// (0x0006c0ed) vradio_frequency_info_pane_t1_ParamLimits

0x21c8,	// (0x0006c0ed) vradio_frequency_info_pane_t1

0xa545,	// (0x0007446a) vradio_tuning_pane_g1

0xa552,	// (0x00074477) vradio_tuning_pane_t1

0x6960,	// (0x00070885) area_side_right_pane_ParamLimits

0x6960,	// (0x00070885) area_side_right_pane

0x4684,	// (0x0006e5a9) status_small_pane_g1

0x468c,	// (0x0006e5b1) status_small_pane_g2

0x4695,	// (0x0006e5ba) status_small_pane_g3

0x469e,	// (0x0006e5c3) status_small_pane_g4

0x0003,

0xf519,	// (0x0007943e) status_small_pane_g

0x46a7,	// (0x0006e5cc) status_small_pane_t1

0x1a59,	// (0x0006b97e) main_video3_pane

0x1a59,	// (0x0006b97e) cams_zoom_vslider_pane

0x5177,	// (0x0006f09c) image3_wide_pane_ParamLimits

0x5177,	// (0x0006f09c) image3_wide_pane

0x1a59,	// (0x0006b97e) image3_wide_small_pane

0x5191,	// (0x0006f0b6) main_video3_pane_g1_ParamLimits

0x5191,	// (0x0006f0b6) main_video3_pane_g1

0x5191,	// (0x0006f0b6) main_video3_pane_g2_ParamLimits

0x5191,	// (0x0006f0b6) main_video3_pane_g2

0x0001,

0xf753,	// (0x00079678) main_video3_pane_g_ParamLimits

0xf753,	// (0x00079678) main_video3_pane_g

0x51af,	// (0x0006f0d4) main_video3_pane_t1_ParamLimits

0x51af,	// (0x0006f0d4) main_video3_pane_t1

0x51af,	// (0x0006f0d4) main_video3_pane_t2_ParamLimits

0x51af,	// (0x0006f0d4) main_video3_pane_t2

0x51af,	// (0x0006f0d4) main_video3_pane_t3_ParamLimits

0x51af,	// (0x0006f0d4) main_video3_pane_t3

0x0002,

0xf758,	// (0x0007967d) main_video3_pane_t_ParamLimits

0xf758,	// (0x0007967d) main_video3_pane_t

0x21be,	// (0x0006c0e3) cams_zoom_vslider_pane_g1

0x21be,	// (0x0006c0e3) cams_zoom_vslider_pane_g2

0x0001,

0xf08c,	// (0x00078fb1) cams_zoom_vslider_pane_g

0x1a59,	// (0x0006b97e) small_slider_vertical_pane

0x21be,	// (0x0006c0e3) small_slider_vertical_pane_g1

0x21be,	// (0x0006c0e3) small_slider_vertical_pane_g2

0x51d6,	// (0x0006f0fb) small_slider_vertical_pane_g3

0x0002,

0xf75f,	// (0x00079684) small_slider_vertical_pane_g

0x1a59,	// (0x0006b97e) main_hwr_training_pane

0x51df,	// (0x0006f104) hwr_training_instruct_pane_ParamLimits

0x51df,	// (0x0006f104) hwr_training_instruct_pane

0xa561,	// (0x00074486) hwr_training_navi_pane_ParamLimits

0xa561,	// (0x00074486) hwr_training_navi_pane

0xa57b,	// (0x000744a0) hwr_training_write_pane_ParamLimits

0xa57b,	// (0x000744a0) hwr_training_write_pane

0x1a59,	// (0x0006b97e) bg_frame_shadow_pane

0x5216,	// (0x0006f13b) hwr_training_write_pane_g1

0x521e,	// (0x0006f143) hwr_training_write_pane_g2

0x5226,	// (0x0006f14b) hwr_training_write_pane_g3

0x522e,	// (0x0006f153) hwr_training_write_pane_g4

0x5236,	// (0x0006f15b) hwr_training_write_pane_g5

0x523e,	// (0x0006f163) hwr_training_write_pane_g6

0x5246,	// (0x0006f16b) hwr_training_write_pane_g7

0x0006,

0xf766,	// (0x0007968b) hwr_training_write_pane_g

0xa5b3,	// (0x000744d8) hwr_training_navi_pane_g1_ParamLimits

0xa5b3,	// (0x000744d8) hwr_training_navi_pane_g1

0xa5c5,	// (0x000744ea) hwr_training_navi_pane_g2_ParamLimits

0xa5c5,	// (0x000744ea) hwr_training_navi_pane_g2

0xa5d7,	// (0x000744fc) hwr_training_navi_pane_g3_ParamLimits

0xa5d7,	// (0x000744fc) hwr_training_navi_pane_g3

0xa5e7,	// (0x0007450c) hwr_training_navi_pane_g4_ParamLimits

0xa5e7,	// (0x0007450c) hwr_training_navi_pane_g4

0x0004,

0xf775,	// (0x0007969a) hwr_training_navi_pane_g_ParamLimits

0xf775,	// (0x0007969a) hwr_training_navi_pane_g

0xa601,	// (0x00074526) hwr_training_navi_pane_t1

0xa60f,	// (0x00074534) list_single_hwr_training_instruct_pane_ParamLimits

0xa60f,	// (0x00074534) list_single_hwr_training_instruct_pane

0x524e,	// (0x0006f173) list_single_hwr_training_instruct_pane_t1

0x4a53,	// (0x0006e978) bg_frame_shadow_pane_g1

0x525d,	// (0x0006f182) bg_frame_shadow_pane_g2

0x5265,	// (0x0006f18a) bg_frame_shadow_pane_g3

0x526d,	// (0x0006f192) bg_frame_shadow_pane_g4

0x5275,	// (0x0006f19a) bg_frame_shadow_pane_g5

0x527d,	// (0x0006f1a2) bg_frame_shadow_pane_g6

0x5285,	// (0x0006f1aa) bg_frame_shadow_pane_g7

0x22d4,	// (0x0006c1f9) bg_frame_shadow_pane_g8

0x0007,

0xf780,	// (0x000796a5) bg_frame_shadow_pane_g

0x1a59,	// (0x0006b97e) main_video_tele_dialer_pane

0xa638,	// (0x0007455d) aid_size_cell_video_keypad_ParamLimits

0xa638,	// (0x0007455d) aid_size_cell_video_keypad

0xa648,	// (0x0007456d) grid_video_dialer_keypad_pane_ParamLimits

0xa648,	// (0x0007456d) grid_video_dialer_keypad_pane

0xa67c,	// (0x000745a1) video_down_pane_cp_ParamLimits

0xa67c,	// (0x000745a1) video_down_pane_cp

0xa6a6,	// (0x000745cb) cell_video_dialer_keypad_pane_ParamLimits

0xa6a6,	// (0x000745cb) cell_video_dialer_keypad_pane

0x528d,	// (0x0006f1b2) bg_button_pane_cp08_ParamLimits

0x528d,	// (0x0006f1b2) bg_button_pane_cp08

0xa6bb,	// (0x000745e0) cell_video_dialer_keypad_pane_g1_ParamLimits

0xa6bb,	// (0x000745e0) cell_video_dialer_keypad_pane_g1

0xe924,	// (0x00078849) mup3_rocker2_pane_ParamLimits

0xe924,	// (0x00078849) mup3_rocker2_pane

0x21be,	// (0x0006c0e3) mup3_rocker2_pane_g1

0x9514,	// (0x00073439) main_dialer2_pane

0x1a59,	// (0x0006b97e) main_mp4_pane

0xa713,	// (0x00074638) main_mp4_pane_g1_ParamLimits

0xa713,	// (0x00074638) main_mp4_pane_g1

0xa735,	// (0x0007465a) main_mp4_pane_g2_ParamLimits

0xa735,	// (0x0007465a) main_mp4_pane_g2

0xa753,	// (0x00074678) main_mp4_pane_g3_ParamLimits

0xa753,	// (0x00074678) main_mp4_pane_g3

0xa78c,	// (0x000746b1) main_mp4_pane_g4_ParamLimits

0xa78c,	// (0x000746b1) main_mp4_pane_g4

0xa7b4,	// (0x000746d9) main_mp4_pane_g5_ParamLimits

0xa7b4,	// (0x000746d9) main_mp4_pane_g5

0x0007,

0xf7a0,	// (0x000796c5) main_mp4_pane_g_ParamLimits

0xf7a0,	// (0x000796c5) main_mp4_pane_g

0xa81c,	// (0x00074741) main_mp4_pane_t1_ParamLimits

0xa81c,	// (0x00074741) main_mp4_pane_t1

0xa87e,	// (0x000747a3) main_mp4_pane_t2_ParamLimits

0xa87e,	// (0x000747a3) main_mp4_pane_t2

0xa8e2,	// (0x00074807) main_mp4_pane_t3_ParamLimits

0xa8e2,	// (0x00074807) main_mp4_pane_t3

0xa940,	// (0x00074865) main_mp4_pane_t4_ParamLimits

0xa940,	// (0x00074865) main_mp4_pane_t4

0x0003,

0xf7b1,	// (0x000796d6) main_mp4_pane_t_ParamLimits

0xf7b1,	// (0x000796d6) main_mp4_pane_t

0xa99e,	// (0x000748c3) mp4_progress_pane_ParamLimits

0xa99e,	// (0x000748c3) mp4_progress_pane

0xe930,	// (0x00078855) mp4_rocker_pane_ParamLimits

0xe930,	// (0x00078855) mp4_rocker_pane

0xe944,	// (0x00078869) mp4_progress_pane_t1

0xe963,	// (0x00078888) mp4_progress_pane_t2

0x0001,

0xf7ba,	// (0x000796df) mp4_progress_pane_t

0xe982,	// (0x000788a7) mup_progress_pane_cp04

0x21be,	// (0x0006c0e3) mp4_rocker_pane_g1

0x2172,	// (0x0006c097) aid_cell_size_keypad2_ParamLimits

0x2172,	// (0x0006c097) aid_cell_size_keypad2

0x2172,	// (0x0006c097) dialer2_ne_pane_ParamLimits

0x2172,	// (0x0006c097) dialer2_ne_pane

0x2172,	// (0x0006c097) grid_dialer2_keypad_pane_ParamLimits

0x2172,	// (0x0006c097) grid_dialer2_keypad_pane

0x4896,	// (0x0006e7bb) bg_popup_call_pane_cp07_ParamLimits

0x4896,	// (0x0006e7bb) bg_popup_call_pane_cp07

0xa9da,	// (0x000748ff) dialer2_ne_pane_t1_ParamLimits

0xa9da,	// (0x000748ff) dialer2_ne_pane_t1

0x4f18,	// (0x0006ee3d) cell_dialer2_keypad_pane_ParamLimits

0x4f18,	// (0x0006ee3d) cell_dialer2_keypad_pane

0x4888,	// (0x0006e7ad) bg_button_pane_pane_cp04_ParamLimits

0x4888,	// (0x0006e7ad) bg_button_pane_pane_cp04

0x2180,	// (0x0006c0a5) cell_dialer2_keypad_pane_g1_ParamLimits

0x2180,	// (0x0006c0a5) cell_dialer2_keypad_pane_g1

0x7570,	// (0x00071495) aid_placing_vt_set_content_ParamLimits

0x7570,	// (0x00071495) aid_placing_vt_set_content

0x759c,	// (0x000714c1) aid_placing_vt_set_title_ParamLimits

0x759c,	// (0x000714c1) aid_placing_vt_set_title

0x1a59,	// (0x0006b97e) main_image3_pane

0xaa33,	// (0x00074958) area_side_right_pane_cp01_ParamLimits

0xaa33,	// (0x00074958) area_side_right_pane_cp01

0x219c,	// (0x0006c0c1) main_image3_pane_g1_ParamLimits

0x219c,	// (0x0006c0c1) main_image3_pane_g1

0xaa60,	// (0x00074985) main_image3_pane_g2_ParamLimits

0xaa60,	// (0x00074985) main_image3_pane_g2

0xaa79,	// (0x0007499e) main_image3_pane_g3_ParamLimits

0xaa79,	// (0x0007499e) main_image3_pane_g3

0xaa92,	// (0x000749b7) main_image3_pane_g4_ParamLimits

0xaa92,	// (0x000749b7) main_image3_pane_g4

0x0003,

0xf7c9,	// (0x000796ee) main_image3_pane_g_ParamLimits

0xf7c9,	// (0x000796ee) main_image3_pane_g

0xaaab,	// (0x000749d0) main_image3_pane_t1_ParamLimits

0xaaab,	// (0x000749d0) main_image3_pane_t1

0xaad0,	// (0x000749f5) main_image3_pane_t2_ParamLimits

0xaad0,	// (0x000749f5) main_image3_pane_t2

0xaaef,	// (0x00074a14) main_image3_pane_t3_ParamLimits

0xaaef,	// (0x00074a14) main_image3_pane_t3

0x0003,

0xf7d2,	// (0x000796f7) main_image3_pane_t_ParamLimits

0xf7d2,	// (0x000796f7) main_image3_pane_t

0x2172,	// (0x0006c097) grid_sctrl_middle_pane_cp01_ParamLimits

0x2172,	// (0x0006c097) grid_sctrl_middle_pane_cp01

0xab50,	// (0x00074a75) cell_sctrl_middle_pane_cp01_ParamLimits

0xab50,	// (0x00074a75) cell_sctrl_middle_pane_cp01

0xab61,	// (0x00074a86) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0xab61,	// (0x00074a86) cell_sctrl_middle_pane_cp01_g1

0x1a59,	// (0x0006b97e) main_call4_pane

0xab6e,	// (0x00074a93) aid_size_button_call4_ParamLimits

0xab6e,	// (0x00074a93) aid_size_button_call4

0xaba4,	// (0x00074ac9) call4_windows_pane_ParamLimits

0xaba4,	// (0x00074ac9) call4_windows_pane

0xabb9,	// (0x00074ade) grid_call4_button_pane_ParamLimits

0xabb9,	// (0x00074ade) grid_call4_button_pane

0xabe7,	// (0x00074b0c) call4_windows_conf_pane

0xabfc,	// (0x00074b21) popup_call4_audio_first_window_ParamLimits

0xabfc,	// (0x00074b21) popup_call4_audio_first_window

0xac4c,	// (0x00074b71) popup_call4_audio_second_window_ParamLimits

0xac4c,	// (0x00074b71) popup_call4_audio_second_window

0xac65,	// (0x00074b8a) popup_call4_audio_wait_window_ParamLimits

0xac65,	// (0x00074b8a) popup_call4_audio_wait_window

0xac73,	// (0x00074b98) cell_call4_button_pane_ParamLimits

0xac73,	// (0x00074b98) cell_call4_button_pane

0xac96,	// (0x00074bbb) bg_button_pane_cp09_ParamLimits

0xac96,	// (0x00074bbb) bg_button_pane_cp09

0xaca2,	// (0x00074bc7) cell_call4_button_pane_g1_ParamLimits

0xaca2,	// (0x00074bc7) cell_call4_button_pane_g1

0xacaf,	// (0x00074bd4) cell_call4_button_pane_t1_ParamLimits

0xacaf,	// (0x00074bd4) cell_call4_button_pane_t1

0xe9cb,	// (0x000788f0) popup_call4_audio_conf_window_ParamLimits

0xe9cb,	// (0x000788f0) popup_call4_audio_conf_window

0xa122,	// (0x00074047) mup3_progress_pane_t1_ParamLimits

0xa141,	// (0x00074066) mup3_progress_pane_t2_ParamLimits

0x4e31,	// (0x0006ed56) mup3_progress_pane_t3_ParamLimits

0xf6b1,	// (0x000795d6) mup3_progress_pane_t_ParamLimits

0x4e4e,	// (0x0006ed73) mup_progress_pane_cp03_ParamLimits

0x4e66,	// (0x0006ed8b) mup3_control_keys_pane_g4_copy1

0xe930,	// (0x00078855) mp4_rocker2_pane_ParamLimits

0xe930,	// (0x00078855) mp4_rocker2_pane

0x4e66,	// (0x0006ed8b) mp4_rocker2_pane_g1

0x4e66,	// (0x0006ed8b) mp4_rocker2_pane_g2

0x4e66,	// (0x0006ed8b) mp4_rocker2_pane_g3

0x4e66,	// (0x0006ed8b) mp4_rocker2_pane_g4

0x4e66,	// (0x0006ed8b) mp4_rocker2_pane_g5

0x0004,

0xf7db,	// (0x00079700) mp4_rocker2_pane_g

0x1a59,	// (0x0006b97e) main_camera4_pane

0x1a59,	// (0x0006b97e) main_video4_pane

0xa658,	// (0x0007457d) main_video_tele_dialer_pane_t1_ParamLimits

0xa658,	// (0x0007457d) main_video_tele_dialer_pane_t1

0xa66a,	// (0x0007458f) main_video_tele_dialer_pane_t2_ParamLimits

0xa66a,	// (0x0007458f) main_video_tele_dialer_pane_t2

0x0001,

0xf791,	// (0x000796b6) main_video_tele_dialer_pane_t_ParamLimits

0xf791,	// (0x000796b6) main_video_tele_dialer_pane_t

0xad0b,	// (0x00074c30) cam4_autofocus_pane_ParamLimits

0xad0b,	// (0x00074c30) cam4_autofocus_pane

0xad25,	// (0x00074c4a) cam4_image_uncrop_pane_ParamLimits

0xad25,	// (0x00074c4a) cam4_image_uncrop_pane

0xad3c,	// (0x00074c61) cam4_indicators_pane_ParamLimits

0xad3c,	// (0x00074c61) cam4_indicators_pane

0xad58,	// (0x00074c7d) main_camera4_pane_g1_ParamLimits

0xad58,	// (0x00074c7d) main_camera4_pane_g1

0xad64,	// (0x00074c89) main_camera4_pane_g2_ParamLimits

0xad64,	// (0x00074c89) main_camera4_pane_g2

0xad64,	// (0x00074c89) main_camera4_pane_g3_ParamLimits

0xad64,	// (0x00074c89) main_camera4_pane_g3

0xad70,	// (0x00074c95) main_camera4_pane_g4_ParamLimits

0xad70,	// (0x00074c95) main_camera4_pane_g4

0xad7c,	// (0x00074ca1) main_camera4_pane_g5_ParamLimits

0xad7c,	// (0x00074ca1) main_camera4_pane_g5

0x0005,

0xf7e6,	// (0x0007970b) main_camera4_pane_g_ParamLimits

0xf7e6,	// (0x0007970b) main_camera4_pane_g

0xad96,	// (0x00074cbb) main_camera4_pane_t1_ParamLimits

0xad96,	// (0x00074cbb) main_camera4_pane_t1

0x2180,	// (0x0006c0a5) bg_tb_trans_pane_cp06

0xade6,	// (0x00074d0b) cam4_indicators_pane_g1

0xadf7,	// (0x00074d1c) cam4_indicators_pane_g2

0x0002,

0xf801,	// (0x00079726) cam4_indicators_pane_g

0xae0f,	// (0x00074d34) cam4_indicators_pane_t1

0xae39,	// (0x00074d5e) main_video4_pane_g1_ParamLimits

0xae39,	// (0x00074d5e) main_video4_pane_g1

0xae45,	// (0x00074d6a) main_video4_pane_g2_ParamLimits

0xae45,	// (0x00074d6a) main_video4_pane_g2

0xae51,	// (0x00074d76) main_video4_pane_g3_ParamLimits

0xae51,	// (0x00074d76) main_video4_pane_g3

0xae5d,	// (0x00074d82) main_video4_pane_g4_ParamLimits

0xae5d,	// (0x00074d82) main_video4_pane_g4

0x0004,

0xf808,	// (0x0007972d) main_video4_pane_g_ParamLimits

0xf808,	// (0x0007972d) main_video4_pane_g

0xae7d,	// (0x00074da2) vid4_indicators_pane_ParamLimits

0xae7d,	// (0x00074da2) vid4_indicators_pane

0xae9c,	// (0x00074dc1) video4_image_uncrop_cif_pane_ParamLimits

0xae9c,	// (0x00074dc1) video4_image_uncrop_cif_pane

0xaeab,	// (0x00074dd0) video4_image_uncrop_nhd_pane_ParamLimits

0xaeab,	// (0x00074dd0) video4_image_uncrop_nhd_pane

0xad25,	// (0x00074c4a) video4_image_uncrop_vga_pane_ParamLimits

0xad25,	// (0x00074c4a) video4_image_uncrop_vga_pane

0x2119,	// (0x0006c03e) bg_tb_trans_pane_cp07

0xaec0,	// (0x00074de5) vid4_indicators_pane_g1

0xaed4,	// (0x00074df9) vid4_indicators_pane_g2

0xaee8,	// (0x00074e0d) vid4_indicators_pane_g3

0x0004,

0xf813,	// (0x00079738) vid4_indicators_pane_g

0xaf15,	// (0x00074e3a) vid4_indicators_pane_t1

0xaf2c,	// (0x00074e51) cam4_autofocus_pane_g1

0xaf34,	// (0x00074e59) cam4_autofocus_pane_g2

0xaf3c,	// (0x00074e61) cam4_autofocus_pane_g3

0x0002,

0xf81e,	// (0x00079743) cam4_autofocus_pane_g

0xaf44,	// (0x00074e69) cam4_autofocus_pane_g3_copy1

0xa68a,	// (0x000745af) video_down_pane_cp_t1

0xa698,	// (0x000745bd) video_down_pane_cp_t2

0x0001,

0xf796,	// (0x000796bb) video_down_pane_cp_t

0x2172,	// (0x0006c097) popup_vitu2_window_ParamLimits

0x2172,	// (0x0006c097) popup_vitu2_window

0xaf4c,	// (0x00074e71) aid_size_cell2_itu2_ParamLimits

0xaf4c,	// (0x00074e71) aid_size_cell2_itu2

0xaf6e,	// (0x00074e93) aid_size_cell_itu2_ParamLimits

0xaf6e,	// (0x00074e93) aid_size_cell_itu2

0x4896,	// (0x0006e7bb) bg_popup_window_pane_cp09_ParamLimits

0x4896,	// (0x0006e7bb) bg_popup_window_pane_cp09

0xafb2,	// (0x00074ed7) field_vitu2_entry_pane_ParamLimits

0xafb2,	// (0x00074ed7) field_vitu2_entry_pane

0xafd2,	// (0x00074ef7) grid_vitu2_function_pane_ParamLimits

0xafd2,	// (0x00074ef7) grid_vitu2_function_pane

0xb012,	// (0x00074f37) grid_vitu2_itu_pane_ParamLimits

0xb012,	// (0x00074f37) grid_vitu2_itu_pane

0xb086,	// (0x00074fab) cell_vitu2_itu_pane_ParamLimits

0xb086,	// (0x00074fab) cell_vitu2_itu_pane

0xb09f,	// (0x00074fc4) cell_vitu2_function_pane_ParamLimits

0xb09f,	// (0x00074fc4) cell_vitu2_function_pane

0xe9df,	// (0x00078904) bg_popup_call_pane_cp08_ParamLimits

0xe9df,	// (0x00078904) bg_popup_call_pane_cp08

0xe9f6,	// (0x0007891b) field_vitu2_entry_pane_g1

0xea02,	// (0x00078927) field_vitu2_entry_pane_g2

0x0002,

0xf825,	// (0x0007974a) field_vitu2_entry_pane_g

0xb0e0,	// (0x00075005) field_vitu2_entry_pane_t1_ParamLimits

0xb0e0,	// (0x00075005) field_vitu2_entry_pane_t1

0xea0e,	// (0x00078933) field_vitu2_entry_pane_t2_ParamLimits

0xea0e,	// (0x00078933) field_vitu2_entry_pane_t2

0x0001,

0xf82c,	// (0x00079751) field_vitu2_entry_pane_t_ParamLimits

0xf82c,	// (0x00079751) field_vitu2_entry_pane_t

0x983e,	// (0x00073763) bg_button_pane_cp010_ParamLimits

0x983e,	// (0x00073763) bg_button_pane_cp010

0xb11b,	// (0x00075040) cell_vitu2_itu_pane_g1

0xb141,	// (0x00075066) cell_vitu2_itu_pane_t1_ParamLimits

0xb141,	// (0x00075066) cell_vitu2_itu_pane_t1

0xb18d,	// (0x000750b2) cell_vitu2_itu_pane_t2_ParamLimits

0xb18d,	// (0x000750b2) cell_vitu2_itu_pane_t2

0x0002,

0xf836,	// (0x0007975b) cell_vitu2_itu_pane_t_ParamLimits

0xf836,	// (0x0007975b) cell_vitu2_itu_pane_t

0x2119,	// (0x0006c03e) bg_button_pane_cp011

0xb255,	// (0x0007517a) cell_vitu2_function_pane_g1

0x1a59,	// (0x0006b97e) main_myfav_hc_pane

0xab31,	// (0x00074a56) popup_image3_note_pane_ParamLimits

0xab31,	// (0x00074a56) popup_image3_note_pane

0xab3f,	// (0x00074a64) popup_image3_tool_bar_pane_ParamLimits

0xab3f,	// (0x00074a64) popup_image3_tool_bar_pane

0xb203,	// (0x00075128) cell_vitu2_itu_pane_t3_ParamLimits

0xb203,	// (0x00075128) cell_vitu2_itu_pane_t3

0x1a59,	// (0x0006b97e) bg_popup_trans_pane

0xea33,	// (0x00078958) grid_image3_tool_bar_pane

0xea3d,	// (0x00078962) bg_popup_trans_pane_g1

0x2bce,	// (0x0006caf3) bg_popup_trans_pane_g2

0xea45,	// (0x0007896a) bg_popup_trans_pane_g3

0xea4d,	// (0x00078972) bg_popup_trans_pane_g4

0xea55,	// (0x0007897a) bg_popup_trans_pane_g5

0xea5d,	// (0x00078982) bg_popup_trans_pane_g6

0xea65,	// (0x0007898a) bg_popup_trans_pane_g7

0xea6d,	// (0x00078992) bg_popup_trans_pane_g8

0x2bae,	// (0x0006cad3) bg_popup_trans_pane_g9

0x0008,

0xf83d,	// (0x00079762) bg_popup_trans_pane_g

0xea75,	// (0x0007899a) cell_image3_tool_bar_pane_ParamLimits

0xea75,	// (0x0007899a) cell_image3_tool_bar_pane

0x21be,	// (0x0006c0e3) cell_image3_tool_bar_pane_g1

0x1a59,	// (0x0006b97e) bg_popup_trans_pane_cp1

0xea89,	// (0x000789ae) popup_image3_note_pane_t1

0xea97,	// (0x000789bc) popup_image3_note_pane_t2

0xeaa5,	// (0x000789ca) popup_image3_note_pane_t3

0x0002,

0xf850,	// (0x00079775) popup_image3_note_pane_t

0xeab3,	// (0x000789d8) popup_image3_note_pane_t3_copy1

0xb269,	// (0x0007518e) bg_myfav_hc_instruction_pane_ParamLimits

0xb269,	// (0x0007518e) bg_myfav_hc_instruction_pane

0xb281,	// (0x000751a6) cell_myfav_contact_pane_ParamLimits

0xb281,	// (0x000751a6) cell_myfav_contact_pane

0xb29b,	// (0x000751c0) cell_myfav_contact_pane_cp1_ParamLimits

0xb29b,	// (0x000751c0) cell_myfav_contact_pane_cp1

0xb2b3,	// (0x000751d8) cell_myfav_contact_pane_cp2_ParamLimits

0xb2b3,	// (0x000751d8) cell_myfav_contact_pane_cp2

0xb2cb,	// (0x000751f0) cell_myfav_contact_pane_cp3_ParamLimits

0xb2cb,	// (0x000751f0) cell_myfav_contact_pane_cp3

0xb2e2,	// (0x00075207) cell_myfav_contact_pane_cp4_ParamLimits

0xb2e2,	// (0x00075207) cell_myfav_contact_pane_cp4

0xb2f8,	// (0x0007521d) cell_myfav_contact_pane_cp5_ParamLimits

0xb2f8,	// (0x0007521d) cell_myfav_contact_pane_cp5

0xb30c,	// (0x00075231) cell_myfav_contact_pane_cp6_ParamLimits

0xb30c,	// (0x00075231) cell_myfav_contact_pane_cp6

0xb320,	// (0x00075245) cell_myfav_contact_pane_cp7_ParamLimits

0xb320,	// (0x00075245) cell_myfav_contact_pane_cp7

0xeac1,	// (0x000789e6) listscroll_gen_pane_cp05

0xb338,	// (0x0007525d) main_myfav_hc_pane_g1_ParamLimits

0xb338,	// (0x0007525d) main_myfav_hc_pane_g1

0xb34e,	// (0x00075273) main_myfav_hc_pane_g2_ParamLimits

0xb34e,	// (0x00075273) main_myfav_hc_pane_g2

0x0002,

0xf857,	// (0x0007977c) main_myfav_hc_pane_g_ParamLimits

0xf857,	// (0x0007977c) main_myfav_hc_pane_g

0xb37e,	// (0x000752a3) main_myfav_hc_pane_t1_ParamLimits

0xb37e,	// (0x000752a3) main_myfav_hc_pane_t1

0xeaca,	// (0x000789ef) main_myfav_hc_pane_t2_ParamLimits

0xeaca,	// (0x000789ef) main_myfav_hc_pane_t2

0xeadc,	// (0x00078a01) main_myfav_hc_pane_t3_ParamLimits

0xeadc,	// (0x00078a01) main_myfav_hc_pane_t3

0xb395,	// (0x000752ba) main_myfav_hc_pane_t4_ParamLimits

0xb395,	// (0x000752ba) main_myfav_hc_pane_t4

0x0004,

0xf85e,	// (0x00079783) main_myfav_hc_pane_t_ParamLimits

0xf85e,	// (0x00079783) main_myfav_hc_pane_t

0x21be,	// (0x0006c0e3) bg_myfav_hc_instruction_pane_g1

0xeaee,	// (0x00078a13) cell_myfav_contact_pane_g1_ParamLimits

0xeaee,	// (0x00078a13) cell_myfav_contact_pane_g1

0xeaee,	// (0x00078a13) cell_myfav_contact_pane_g2_ParamLimits

0xeaee,	// (0x00078a13) cell_myfav_contact_pane_g2

0xeafa,	// (0x00078a1f) cell_myfav_contact_pane_g3_ParamLimits

0xeafa,	// (0x00078a1f) cell_myfav_contact_pane_g3

0x218e,	// (0x0006c0b3) cell_myfav_contact_pane_g4_ParamLimits

0x218e,	// (0x0006c0b3) cell_myfav_contact_pane_g4

0xeb07,	// (0x00078a2c) cell_myfav_contact_pane_g5_ParamLimits

0xeb07,	// (0x00078a2c) cell_myfav_contact_pane_g5

0x0004,

0xf869,	// (0x0007978e) cell_myfav_contact_pane_g_ParamLimits

0xf869,	// (0x0007978e) cell_myfav_contact_pane_g

0xb366,	// (0x0007528b) main_myfav_hc_pane_g3_ParamLimits

0xb366,	// (0x0007528b) main_myfav_hc_pane_g3

0x6a94,	// (0x000709b9) popup_adpt_find_window

0xb3bf,	// (0x000752e4) afind_page_pane_ParamLimits

0xb3bf,	// (0x000752e4) afind_page_pane

0xb3cc,	// (0x000752f1) aid_size_cell_afind_ParamLimits

0xb3cc,	// (0x000752f1) aid_size_cell_afind

0xb3e6,	// (0x0007530b) bg_popup_sub_pane_cp09_ParamLimits

0xb3e6,	// (0x0007530b) bg_popup_sub_pane_cp09

0xb3f7,	// (0x0007531c) find_pane_cp01_ParamLimits

0xb3f7,	// (0x0007531c) find_pane_cp01

0xeb13,	// (0x00078a38) grid_afind_control_pane_ParamLimits

0xeb13,	// (0x00078a38) grid_afind_control_pane

0xb40a,	// (0x0007532f) grid_afind_pane_ParamLimits

0xb40a,	// (0x0007532f) grid_afind_pane

0xb426,	// (0x0007534b) cell_afind_pane_ParamLimits

0xb426,	// (0x0007534b) cell_afind_pane

0x21be,	// (0x0006c0e3) afind_page_pane_g1

0xb46e,	// (0x00075393) afind_page_pane_g2

0xb476,	// (0x0007539b) afind_page_pane_g3

0x0002,

0xf874,	// (0x00079799) afind_page_pane_g

0xb47e,	// (0x000753a3) afind_page_pane_t1

0xeb39,	// (0x00078a5e) cell_afind_grid_control_pane_ParamLimits

0xeb39,	// (0x00078a5e) cell_afind_grid_control_pane

0xeb48,	// (0x00078a6d) bg_button_pane_cp69_ParamLimits

0xeb48,	// (0x00078a6d) bg_button_pane_cp69

0xb48c,	// (0x000753b1) cell_afind_pane_g1_ParamLimits

0xb48c,	// (0x000753b1) cell_afind_pane_g1

0xb499,	// (0x000753be) cell_afind_pane_t1_ParamLimits

0xb499,	// (0x000753be) cell_afind_pane_t1

0xeb54,	// (0x00078a79) bg_button_pane_cp72

0xeb5c,	// (0x00078a81) cell_afind_grid_control_pane_g1

0x90b5,	// (0x00072fda) aid_image_placing_area_ParamLimits

0x90b5,	// (0x00072fda) aid_image_placing_area

0x2180,	// (0x0006c0a5) field_vitu_entry_pane_g1_ParamLimits

0x2180,	// (0x0006c0a5) field_vitu_entry_pane_g1

0x2180,	// (0x0006c0a5) field_vitu_entry_pane_g2_ParamLimits

0x2180,	// (0x0006c0a5) field_vitu_entry_pane_g2

0x0001,

0xf199,	// (0x000790be) field_vitu_entry_pane_g_ParamLimits

0xf199,	// (0x000790be) field_vitu_entry_pane_g

0x5153,	// (0x0006f078) cell_vitu_itu_pane_g1_ParamLimits

0x50f8,	// (0x0006f01d) cell_vitu_itu_pane_t3_ParamLimits

0x50f8,	// (0x0006f01d) cell_vitu_itu_pane_t3

0xe944,	// (0x00078869) mp4_progress_pane_t1_ParamLimits

0xe963,	// (0x00078888) mp4_progress_pane_t2_ParamLimits

0xf7ba,	// (0x000796df) mp4_progress_pane_t_ParamLimits

0xe982,	// (0x000788a7) mup_progress_pane_cp04_ParamLimits

0xb3a9,	// (0x000752ce) main_myfav_hc_pane_t5_ParamLimits

0xb3a9,	// (0x000752ce) main_myfav_hc_pane_t5

0x5f27,	// (0x0006fe4c) aid_zoom_text_primary

0x6a94,	// (0x000709b9) popup_adpt_find_window_ParamLimits

0x2119,	// (0x0006c03e) main_cam_set_pane

0xad4a,	// (0x00074c6f) cam4_zoom_pane_ParamLimits

0xad4a,	// (0x00074c6f) cam4_zoom_pane

0xb4ab,	// (0x000753d0) main_cam_set_pane_g1_ParamLimits

0xb4ab,	// (0x000753d0) main_cam_set_pane_g1

0xb4b9,	// (0x000753de) main_cam_set_pane_g2_ParamLimits

0xb4b9,	// (0x000753de) main_cam_set_pane_g2

0x0001,

0xf87b,	// (0x000797a0) main_cam_set_pane_g_ParamLimits

0xf87b,	// (0x000797a0) main_cam_set_pane_g

0xb4c5,	// (0x000753ea) main_cam_set_pane_t1_ParamLimits

0xb4c5,	// (0x000753ea) main_cam_set_pane_t1

0xb4e1,	// (0x00075406) main_cset_listscroll_pane_ParamLimits

0xb4e1,	// (0x00075406) main_cset_listscroll_pane

0xb513,	// (0x00075438) main_cset_slider_pane_ParamLimits

0xb513,	// (0x00075438) main_cset_slider_pane

0xeb6d,	// (0x00078a92) main_cset_list_pane_ParamLimits

0xeb6d,	// (0x00078a92) main_cset_list_pane

0xeb7d,	// (0x00078aa2) scroll_pane_cp028

0xb532,	// (0x00075457) aid_area_touch_slider

0xb54e,	// (0x00075473) cset_slider_pane

0xb571,	// (0x00075496) main_cset_slider_pane_g1

0xb586,	// (0x000754ab) main_cset_slider_pane_g2

0x0011,

0xf880,	// (0x000797a5) main_cset_slider_pane_g

0xebb6,	// (0x00078adb) main_cset_slider_pane_t1

0xb64c,	// (0x00075571) main_cset_slider_pane_t2

0xb666,	// (0x0007558b) main_cset_slider_pane_t3

0xb680,	// (0x000755a5) main_cset_slider_pane_t4

0xb69e,	// (0x000755c3) main_cset_slider_pane_t5

0xb6bc,	// (0x000755e1) main_cset_slider_pane_t6

0xb6d3,	// (0x000755f8) main_cset_slider_pane_t7

0x000e,

0xf8a5,	// (0x000797ca) main_cset_slider_pane_t

0xb7e1,	// (0x00075706) cset_list_set_pane_ParamLimits

0xb7e1,	// (0x00075706) cset_list_set_pane

0xec50,	// (0x00078b75) aid_position_infowindow_above

0xec58,	// (0x00078b7d) aid_position_infowindow_below

0xb7fa,	// (0x0007571f) cset_list_set_pane_g1_ParamLimits

0xb7fa,	// (0x0007571f) cset_list_set_pane_g1

0x60ba,	// (0x0006ffdf) cset_list_set_pane_g3_ParamLimits

0x60ba,	// (0x0006ffdf) cset_list_set_pane_g3

0x0001,

0xf8c4,	// (0x000797e9) cset_list_set_pane_g_ParamLimits

0xf8c4,	// (0x000797e9) cset_list_set_pane_g

0x60c9,	// (0x0006ffee) cset_list_set_pane_t1_ParamLimits

0x60c9,	// (0x0006ffee) cset_list_set_pane_t1

0x2119,	// (0x0006c03e) list_highlight_pane_cp021_ParamLimits

0x2119,	// (0x0006c03e) list_highlight_pane_cp021

0x34b6,	// (0x0006d3db) cset_slider_pane_g1

0x34c8,	// (0x0006d3ed) cset_slider_pane_g2

0x34bf,	// (0x0006d3e4) cset_slider_pane_g3

0x0002,

0xf8c9,	// (0x000797ee) cset_slider_pane_g

0xb806,	// (0x0007572b) aid_area_touch_cam4_zoom

0xb80e,	// (0x00075733) cam4_zoom_cont_pane

0xb816,	// (0x0007573b) cam4_zoom_pane_g1

0xb81e,	// (0x00075743) cam4_zoom_pane_g2

0xb826,	// (0x0007574b) cam4_zoom_pane_g3

0x0002,

0xf8d0,	// (0x000797f5) cam4_zoom_pane_g

0xec60,	// (0x00078b85) cam4_zoom_cont_pane_g1

0xec69,	// (0x00078b8e) cam4_zoom_cont_pane_g2

0xec72,	// (0x00078b97) cam4_zoom_cont_pane_g3

0x0002,

0xf8d7,	// (0x000797fc) cam4_zoom_cont_pane_g

0xab88,	// (0x00074aad) call4_image_pane_ParamLimits

0xab88,	// (0x00074aad) call4_image_pane

0xabe7,	// (0x00074b0c) call4_windows_conf_pane_ParamLimits

0xac2a,	// (0x00074b4f) popup_call4_audio_in_window_ParamLimits

0xac2a,	// (0x00074b4f) popup_call4_audio_in_window

0x1a59,	// (0x0006b97e) bg_popup_call2_act_pane_cp02

0xe9c3,	// (0x000788e8) call4_list_conf_pane

0x21be,	// (0x0006c0e3) call4_image_pane_g1

0x21be,	// (0x0006c0e3) call4_image_pane_g2

0x0001,

0xf08c,	// (0x00078fb1) call4_image_pane_g

0xec7b,	// (0x00078ba0) list_single_graphic_popup_conf4_pane_ParamLimits

0xec7b,	// (0x00078ba0) list_single_graphic_popup_conf4_pane

0x1a59,	// (0x0006b97e) list_highlight_pane_cp022

0xec8e,	// (0x00078bb3) list_single_graphic_popup_conf4_pane_g1

0x30a5,	// (0x0006cfca) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf8de,	// (0x00079803) list_single_graphic_popup_conf4_pane_g

0xec96,	// (0x00078bbb) list_single_graphic_popup_conf4_pane_t1

0x7700,	// (0x00071625) popup_vtel_slider_window_ParamLimits

0x7700,	// (0x00071625) popup_vtel_slider_window

0xe995,	// (0x000788ba) dialer2_ne_pane_t2_ParamLimits

0xe995,	// (0x000788ba) dialer2_ne_pane_t2

0x0001,

0xf7bf,	// (0x000796e4) dialer2_ne_pane_t_ParamLimits

0xf7bf,	// (0x000796e4) dialer2_ne_pane_t

0x2119,	// (0x0006c03e) bg_popup_sub_pane_cp010_ParamLimits

0x2119,	// (0x0006c03e) bg_popup_sub_pane_cp010

0xb82e,	// (0x00075753) popup_vtel_slider_window_g1_ParamLimits

0xb82e,	// (0x00075753) popup_vtel_slider_window_g1

0xb83a,	// (0x0007575f) popup_vtel_slider_window_g2_ParamLimits

0xb83a,	// (0x0007575f) popup_vtel_slider_window_g2

0x0003,

0xf8e3,	// (0x00079808) popup_vtel_slider_window_g_ParamLimits

0xf8e3,	// (0x00079808) popup_vtel_slider_window_g

0xb882,	// (0x000757a7) vtel_slider_pane_ParamLimits

0xb882,	// (0x000757a7) vtel_slider_pane

0xb891,	// (0x000757b6) vtel_slider_pane_g1_ParamLimits

0xb891,	// (0x000757b6) vtel_slider_pane_g1

0xb89e,	// (0x000757c3) vtel_slider_pane_g2_ParamLimits

0xb89e,	// (0x000757c3) vtel_slider_pane_g2

0xb8ab,	// (0x000757d0) vtel_slider_pane_g3_ParamLimits

0xb8ab,	// (0x000757d0) vtel_slider_pane_g3

0xb891,	// (0x000757b6) vtel_slider_pane_g4_ParamLimits

0xb891,	// (0x000757b6) vtel_slider_pane_g4

0xb8b8,	// (0x000757dd) vtel_slider_pane_g5_ParamLimits

0xb8b8,	// (0x000757dd) vtel_slider_pane_g5

0x0004,

0xf8ec,	// (0x00079811) vtel_slider_pane_g_ParamLimits

0xf8ec,	// (0x00079811) vtel_slider_pane_g

0x2119,	// (0x0006c03e) main_gallery2_pane

0xaf94,	// (0x00074eb9) aid_size_row_itut2_dropdow_list_ParamLimits

0xaf94,	// (0x00074eb9) aid_size_row_itut2_dropdow_list

0xaff0,	// (0x00074f15) grid_vitu2_function_top_pane_ParamLimits

0xaff0,	// (0x00074f15) grid_vitu2_function_top_pane

0xb044,	// (0x00074f69) popup_vitu2_dropdown_list_window_ParamLimits

0xb044,	// (0x00074f69) popup_vitu2_dropdown_list_window

0xb066,	// (0x00074f8b) popup_vitu2_match_list_window

0xb8c5,	// (0x000757ea) cell_vitu2_function_top_pane_ParamLimits

0xb8c5,	// (0x000757ea) cell_vitu2_function_top_pane

0xb8df,	// (0x00075804) cell_vitu2_function_top_pane_cp01_ParamLimits

0xb8df,	// (0x00075804) cell_vitu2_function_top_pane_cp01

0xb8fb,	// (0x00075820) cell_vitu2_function_top_wide_pane_ParamLimits

0xb8fb,	// (0x00075820) cell_vitu2_function_top_wide_pane

0x2119,	// (0x0006c03e) bg_button_pane_cp012

0xb919,	// (0x0007583e) cell_vitu2_function_top_pane_g1

0xb92d,	// (0x00075852) bg_button_pane_cp013_ParamLimits

0xb92d,	// (0x00075852) bg_button_pane_cp013

0xb949,	// (0x0007586e) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xb949,	// (0x0007586e) cell_vitu2_function_top_wide_pane_g1

0x2172,	// (0x0006c097) bg_popup_sub_pane_cp20

0xb961,	// (0x00075886) list_vitu2_match_list_pane

0xea3d,	// (0x00078962) bg_popup_sub_pane_cp20_g1

0xea45,	// (0x0007896a) bg_popup_sub_pane_cp20_g2

0x2bce,	// (0x0006caf3) bg_popup_sub_pane_cp20_g3

0xea4d,	// (0x00078972) bg_popup_sub_pane_cp20_g4

0x2bae,	// (0x0006cad3) bg_popup_sub_pane_cp20_g5

0xecac,	// (0x00078bd1) bg_popup_sub_pane_cp20_g6

0xea5d,	// (0x00078982) bg_popup_sub_pane_cp20_g7

0xea65,	// (0x0007898a) bg_popup_sub_pane_cp20_g8

0xea6d,	// (0x00078992) bg_popup_sub_pane_cp20_g9

0x0008,

0xf8f7,	// (0x0007981c) bg_popup_sub_pane_cp20_g

0xb979,	// (0x0007589e) list_vitu2_match_list_item_pane_ParamLimits

0xb979,	// (0x0007589e) list_vitu2_match_list_item_pane

0xb98b,	// (0x000758b0) list_vitu2_match_list_item_pane_t1

0x1a59,	// (0x0006b97e) bg_popup_sub_pane_cp21

0x2807,	// (0x0006c72c) grid_vitu2_dropdown_list_pane

0xb999,	// (0x000758be) cell_vitu2_dropdown_list_char_pane_ParamLimits

0xb999,	// (0x000758be) cell_vitu2_dropdown_list_char_pane

0xb9bb,	// (0x000758e0) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0xb9bb,	// (0x000758e0) cell_vitu2_dropdown_list_ctrl_pane

0xecb4,	// (0x00078bd9) cell_vitu2_dropdown_list_char_pane_g1

0xecbd,	// (0x00078be2) cell_vitu2_dropdown_list_char_pane_g2

0xecc6,	// (0x00078beb) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf90a,	// (0x0007982f) cell_vitu2_dropdown_list_char_pane_g

0xb9e3,	// (0x00075908) cell_vitu2_dropdown_list_char_pane_t1

0xb9f1,	// (0x00075916) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xb9f1,	// (0x00075916) cell_vitu2_dropdown_list_ctrl_pane_g1

0xba01,	// (0x00075926) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xba01,	// (0x00075926) cell_vitu2_dropdown_list_ctrl_pane_g2

0xba12,	// (0x00075937) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xba12,	// (0x00075937) cell_vitu2_dropdown_list_ctrl_pane_g3

0xba22,	// (0x00075947) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0xba22,	// (0x00075947) cell_vitu2_dropdown_list_ctrl_pane_g4

0x2180,	// (0x0006c0a5) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x2180,	// (0x0006c0a5) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf911,	// (0x00079836) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf911,	// (0x00079836) cell_vitu2_dropdown_list_ctrl_pane_g

0xba3b,	// (0x00075960) aid_size_cell_gallery2_ParamLimits

0xba3b,	// (0x00075960) aid_size_cell_gallery2

0xba55,	// (0x0007597a) grid_gallery2_pane_ParamLimits

0xba55,	// (0x0007597a) grid_gallery2_pane

0xba6c,	// (0x00075991) scroll_pane_cp029_ParamLimits

0xba6c,	// (0x00075991) scroll_pane_cp029

0xba7c,	// (0x000759a1) cell_gallery2_pane_ParamLimits

0xba7c,	// (0x000759a1) cell_gallery2_pane

0x2856,	// (0x0006c77b) cell_gallery2_pane_g2

0xbad1,	// (0x000759f6) cell_gallery2_pane_g3

0xeccf,	// (0x00078bf4) cell_gallery2_pane_g4

0xecd7,	// (0x00078bfc) cell_gallery2_pane_g5

0x2807,	// (0x0006c72c) grid_highlight_pane_cp10

0xb066,	// (0x00074f8b) popup_vitu2_match_list_window_ParamLimits

0xb078,	// (0x00074f9d) popup_vitu2_query_window_ParamLimits

0xb078,	// (0x00074f9d) popup_vitu2_query_window

0x1a59,	// (0x0006b97e) bg_vitu2_candi_button_pane

0xecb4,	// (0x00078bd9) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xecbd,	// (0x00078be2) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xecc6,	// (0x00078beb) cell_vitu2_dropdown_list_char_pane_g2_copy2

0xbad9,	// (0x000759fe) bg_button_pane_cp015

0xbaee,	// (0x00075a13) bg_button_pane_cp016

0xbafa,	// (0x00075a1f) bg_button_pane_cp017

0x3446,	// (0x0006d36b) bg_popup_sub_pane_cp22

0xecdf,	// (0x00078c04) popup_vitu2_query_window_g1

0xbb3a,	// (0x00075a5f) popup_vitu2_query_window_g2

0x0002,

0xf91c,	// (0x00079841) popup_vitu2_query_window_g

0xbb5e,	// (0x00075a83) popup_vitu2_query_window_t1_ParamLimits

0xbb5e,	// (0x00075a83) popup_vitu2_query_window_t1

0xbb91,	// (0x00075ab6) popup_vitu2_query_window_t2_ParamLimits

0xbb91,	// (0x00075ab6) popup_vitu2_query_window_t2

0xbba3,	// (0x00075ac8) popup_vitu2_query_window_t3_ParamLimits

0xbba3,	// (0x00075ac8) popup_vitu2_query_window_t3

0xbbcb,	// (0x00075af0) popup_vitu2_query_window_t4_ParamLimits

0xbbcb,	// (0x00075af0) popup_vitu2_query_window_t4

0xbbdf,	// (0x00075b04) popup_vitu2_query_window_t5_ParamLimits

0xbbdf,	// (0x00075b04) popup_vitu2_query_window_t5

0x0006,

0xf923,	// (0x00079848) popup_vitu2_query_window_t_ParamLimits

0xf923,	// (0x00079848) popup_vitu2_query_window_t

0xeb65,	// (0x00078a8a) main_cset_text_pane

0xb532,	// (0x00075457) aid_area_touch_slider_ParamLimits

0xb54e,	// (0x00075473) cset_slider_pane_ParamLimits

0xb571,	// (0x00075496) main_cset_slider_pane_g1_ParamLimits

0xb586,	// (0x000754ab) main_cset_slider_pane_g2_ParamLimits

0xeb86,	// (0x00078aab) main_cset_slider_pane_g3_ParamLimits

0xeb86,	// (0x00078aab) main_cset_slider_pane_g3

0xb59b,	// (0x000754c0) main_cset_slider_pane_g4_ParamLimits

0xb59b,	// (0x000754c0) main_cset_slider_pane_g4

0xb5aa,	// (0x000754cf) main_cset_slider_pane_g5_ParamLimits

0xb5aa,	// (0x000754cf) main_cset_slider_pane_g5

0xb5b8,	// (0x000754dd) main_cset_slider_pane_g6_ParamLimits

0xb5b8,	// (0x000754dd) main_cset_slider_pane_g6

0xf880,	// (0x000797a5) main_cset_slider_pane_g_ParamLimits

0xebb6,	// (0x00078adb) main_cset_slider_pane_t1_ParamLimits

0xb64c,	// (0x00075571) main_cset_slider_pane_t2_ParamLimits

0xb666,	// (0x0007558b) main_cset_slider_pane_t3_ParamLimits

0xb680,	// (0x000755a5) main_cset_slider_pane_t4_ParamLimits

0xb69e,	// (0x000755c3) main_cset_slider_pane_t5_ParamLimits

0xb6bc,	// (0x000755e1) main_cset_slider_pane_t6_ParamLimits

0xb6d3,	// (0x000755f8) main_cset_slider_pane_t7_ParamLimits

0xb701,	// (0x00075626) main_cset_slider_pane_t8_ParamLimits

0xb701,	// (0x00075626) main_cset_slider_pane_t8

0xb729,	// (0x0007564e) main_cset_slider_pane_t9_ParamLimits

0xb729,	// (0x0007564e) main_cset_slider_pane_t9

0xb751,	// (0x00075676) main_cset_slider_pane_t10_ParamLimits

0xb751,	// (0x00075676) main_cset_slider_pane_t10

0xb779,	// (0x0007569e) main_cset_slider_pane_t11_ParamLimits

0xb779,	// (0x0007569e) main_cset_slider_pane_t11

0xb7a3,	// (0x000756c8) main_cset_slider_pane_t12_ParamLimits

0xb7a3,	// (0x000756c8) main_cset_slider_pane_t12

0xb7c2,	// (0x000756e7) main_cset_slider_pane_t13_ParamLimits

0xb7c2,	// (0x000756e7) main_cset_slider_pane_t13

0xf8a5,	// (0x000797ca) main_cset_slider_pane_t_ParamLimits

0x1a59,	// (0x0006b97e) bg_popup_sub_pane_cp011

0xeceb,	// (0x00078c10) main_cset_text_pane_g1

0xecf3,	// (0x00078c18) main_cset_text_pane_t1

0xed01,	// (0x00078c26) main_cset_text_pane_t2

0xed0f,	// (0x00078c34) main_cset_text_pane_t3

0xed1d,	// (0x00078c42) main_cset_text_pane_t4

0xed2b,	// (0x00078c50) main_cset_text_pane_t5

0xed39,	// (0x00078c5e) main_cset_text_pane_t6

0xed47,	// (0x00078c6c) main_cset_text_pane_t7

0x0006,

0xf932,	// (0x00079857) main_cset_text_pane_t

0x1a59,	// (0x0006b97e) main_cam4_burst_pane

0x1a59,	// (0x0006b97e) main_cam5_pane

0xeb27,	// (0x00078a4c) bg_button_pane_cp019

0xeb30,	// (0x00078a55) bg_button_pane_cp020

0xeb92,	// (0x00078ab7) main_cset_slider_pane_g7_ParamLimits

0xeb92,	// (0x00078ab7) main_cset_slider_pane_g7

0xeb9e,	// (0x00078ac3) main_cset_slider_pane_g8_ParamLimits

0xeb9e,	// (0x00078ac3) main_cset_slider_pane_g8

0xb5cc,	// (0x000754f1) main_cset_slider_pane_g9_ParamLimits

0xb5cc,	// (0x000754f1) main_cset_slider_pane_g9

0xb5d8,	// (0x000754fd) main_cset_slider_pane_g10_ParamLimits

0xb5d8,	// (0x000754fd) main_cset_slider_pane_g10

0xb5e4,	// (0x00075509) main_cset_slider_pane_g11_ParamLimits

0xb5e4,	// (0x00075509) main_cset_slider_pane_g11

0xb5f0,	// (0x00075515) main_cset_slider_pane_g12_ParamLimits

0xb5f0,	// (0x00075515) main_cset_slider_pane_g12

0xb5fc,	// (0x00075521) main_cset_slider_pane_g13_ParamLimits

0xb5fc,	// (0x00075521) main_cset_slider_pane_g13

0xb60a,	// (0x0007552f) main_cset_slider_pane_g14_ParamLimits

0xb60a,	// (0x0007552f) main_cset_slider_pane_g14

0xb618,	// (0x0007553d) main_cset_slider_pane_g15_ParamLimits

0xb618,	// (0x0007553d) main_cset_slider_pane_g15

0xebde,	// (0x00078b03) main_cset_slider_pane_t14_ParamLimits

0xebde,	// (0x00078b03) main_cset_slider_pane_t14

0xec17,	// (0x00078b3c) main_cset_slider_pane_t15_ParamLimits

0xec17,	// (0x00078b3c) main_cset_slider_pane_t15

0xbc49,	// (0x00075b6e) aid_cam4_burst_size_cell_ParamLimits

0xbc49,	// (0x00075b6e) aid_cam4_burst_size_cell

0xbc65,	// (0x00075b8a) grid_cam4_burst_pane_ParamLimits

0xbc65,	// (0x00075b8a) grid_cam4_burst_pane

0xbc95,	// (0x00075bba) linegrid_cam4_burst_pane_ParamLimits

0xbc95,	// (0x00075bba) linegrid_cam4_burst_pane

0xbcb5,	// (0x00075bda) scroll_pane_cp30_ParamLimits

0xbcb5,	// (0x00075bda) scroll_pane_cp30

0xbcc1,	// (0x00075be6) cell_cam4_burst_pane_ParamLimits

0xbcc1,	// (0x00075be6) cell_cam4_burst_pane

0xed55,	// (0x00078c7a) linegrid_cam4_burst_pane_g1_ParamLimits

0xed55,	// (0x00078c7a) linegrid_cam4_burst_pane_g1

0xbcfd,	// (0x00075c22) linegrid_cam4_burst_pane_g2_ParamLimits

0xbcfd,	// (0x00075c22) linegrid_cam4_burst_pane_g2

0xed62,	// (0x00078c87) linegrid_cam4_burst_pane_g3_ParamLimits

0xed62,	// (0x00078c87) linegrid_cam4_burst_pane_g3

0x0002,

0xf941,	// (0x00079866) linegrid_cam4_burst_pane_g_ParamLimits

0xf941,	// (0x00079866) linegrid_cam4_burst_pane_g

0xbd0e,	// (0x00075c33) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xbd0e,	// (0x00075c33) linegrid_cam4_burst_pane_g3_copy1

0xed6f,	// (0x00078c94) linegrid_cam4_burst_pane_g4_ParamLimits

0xed6f,	// (0x00078c94) linegrid_cam4_burst_pane_g4

0xbd28,	// (0x00075c4d) linegrid_cam4_burst_pane_g5_ParamLimits

0xbd28,	// (0x00075c4d) linegrid_cam4_burst_pane_g5

0xbd39,	// (0x00075c5e) linegrid_cam4_burst_pane_g6_ParamLimits

0xbd39,	// (0x00075c5e) linegrid_cam4_burst_pane_g6

0xed7c,	// (0x00078ca1) linegrid_cam4_burst_pane_g7_ParamLimits

0xed7c,	// (0x00078ca1) linegrid_cam4_burst_pane_g7

0xbd4a,	// (0x00075c6f) cell_cam4_burst_pane_g1

0xed95,	// (0x00078cba) main_cam5_pane_t1_ParamLimits

0xed95,	// (0x00078cba) main_cam5_pane_t1

0xeda7,	// (0x00078ccc) main_cam5_pane_t2_ParamLimits

0xeda7,	// (0x00078ccc) main_cam5_pane_t2

0xedb9,	// (0x00078cde) main_cam5_pane_t3_ParamLimits

0xedb9,	// (0x00078cde) main_cam5_pane_t3

0xedcb,	// (0x00078cf0) main_cam5_pane_t4_ParamLimits

0xedcb,	// (0x00078cf0) main_cam5_pane_t4

0xede3,	// (0x00078d08) main_cam5_pane_t5_ParamLimits

0xede3,	// (0x00078d08) main_cam5_pane_t5

0xedf7,	// (0x00078d1c) main_cam5_pane_t6_ParamLimits

0xedf7,	// (0x00078d1c) main_cam5_pane_t6

0xee0b,	// (0x00078d30) main_cam5_pane_t7_ParamLimits

0xee0b,	// (0x00078d30) main_cam5_pane_t7

0xee1d,	// (0x00078d42) main_cam5_pane_t8_ParamLimits

0xee1d,	// (0x00078d42) main_cam5_pane_t8

0xee39,	// (0x00078d5e) main_cam5_pane_t9_ParamLimits

0xee39,	// (0x00078d5e) main_cam5_pane_t9

0xee4b,	// (0x00078d70) main_cam5_pane_t10_ParamLimits

0xee4b,	// (0x00078d70) main_cam5_pane_t10

0xee5d,	// (0x00078d82) main_cam5_pane_t11_ParamLimits

0xee5d,	// (0x00078d82) main_cam5_pane_t11

0xee6f,	// (0x00078d94) main_cam5_pane_t12_ParamLimits

0xee6f,	// (0x00078d94) main_cam5_pane_t12

0xee84,	// (0x00078da9) main_cam5_pane_t13_ParamLimits

0xee84,	// (0x00078da9) main_cam5_pane_t13

0x000c,

0xf94d,	// (0x00079872) main_cam5_pane_t_ParamLimits

0xf94d,	// (0x00079872) main_cam5_pane_t

0x6b49,	// (0x00070a6e) popup_scut_keymap_window_ParamLimits

0x6b49,	// (0x00070a6e) popup_scut_keymap_window

0xbd5d,	// (0x00075c82) aid_size_cell_brow_shortcut

0x2807,	// (0x0006c72c) bg_popup_window_pane_cp010

0xbd69,	// (0x00075c8e) grid_scut_pane

0xbd75,	// (0x00075c9a) cell_scut_pane_ParamLimits

0xbd75,	// (0x00075c9a) cell_scut_pane

0xbd8c,	// (0x00075cb1) cell_scut_pane_g1

0xeea1,	// (0x00078dc6) cell_scut_pane_t1

0xeeb0,	// (0x00078dd5) cell_scut_pane_t2

0xbd95,	// (0x00075cba) cell_scut_pane_t3

0x0002,

0xf968,	// (0x0007988d) cell_scut_pane_t

0x9d24,	// (0x00073c49) main_mup3_pane_g8_ParamLimits

0x9d24,	// (0x00073c49) main_mup3_pane_g8

0xafa4,	// (0x00074ec9) area_vitu2_query_pane_ParamLimits

0xafa4,	// (0x00074ec9) area_vitu2_query_pane

0xbb06,	// (0x00075a2b) input_focus_pane_cp08

0xeebf,	// (0x00078de4) area_vitu2_query_pane_g1

0xbda3,	// (0x00075cc8) area_vitu2_query_pane_g2

0x0001,

0xf96f,	// (0x00079894) area_vitu2_query_pane_g

0xbdb4,	// (0x00075cd9) area_vitu2_query_pane_t1_ParamLimits

0xbdb4,	// (0x00075cd9) area_vitu2_query_pane_t1

0xbdc8,	// (0x00075ced) area_vitu2_query_pane_t2_ParamLimits

0xbdc8,	// (0x00075ced) area_vitu2_query_pane_t2

0xbddc,	// (0x00075d01) area_vitu2_query_pane_t3_ParamLimits

0xbddc,	// (0x00075d01) area_vitu2_query_pane_t3

0xeecb,	// (0x00078df0) area_vitu2_query_pane_t4_ParamLimits

0xeecb,	// (0x00078df0) area_vitu2_query_pane_t4

0xeef3,	// (0x00078e18) area_vitu2_query_pane_t5_ParamLimits

0xeef3,	// (0x00078e18) area_vitu2_query_pane_t5

0xef1b,	// (0x00078e40) area_vitu2_query_pane_t6_ParamLimits

0xef1b,	// (0x00078e40) area_vitu2_query_pane_t6

0x0006,

0xf974,	// (0x00079899) area_vitu2_query_pane_t_ParamLimits

0xf974,	// (0x00079899) area_vitu2_query_pane_t

0xbaee,	// (0x00075a13) bg_button_pane_cp018

0xbe04,	// (0x00075d29) bg_button_pane_cp021

0xbe10,	// (0x00075d35) bg_button_pane_cp022

0xbe33,	// (0x00075d58) input_focus_pane_cp09

0x31b4,	// (0x0006d0d9) aid_size_touch_mv_arrow_left

0x31df,	// (0x0006d104) aid_size_touch_mv_arrow_right

0xb630,	// (0x00075555) main_cset_slider_pane_g16_ParamLimits

0xb630,	// (0x00075555) main_cset_slider_pane_g16

0xb63e,	// (0x00075563) main_cset_slider_pane_g17_ParamLimits

0xb63e,	// (0x00075563) main_cset_slider_pane_g17

0xbd4a,	// (0x00075c6f) cell_cam4_burst_pane_g1_ParamLimits

0x1a59,	// (0x0006b97e) compa_mode_pane

0xb846,	// (0x0007576b) popup_vtel_slider_window_g3_ParamLimits

0xb846,	// (0x0007576b) popup_vtel_slider_window_g3

0xb85a,	// (0x0007577f) popup_vtel_slider_window_g4_ParamLimits

0xb85a,	// (0x0007577f) popup_vtel_slider_window_g4

0xb86e,	// (0x00075793) popup_vtel_slider_window_t1_ParamLimits

0xb86e,	// (0x00075793) popup_vtel_slider_window_t1

0x1a59,	// (0x0006b97e) main_cl_pane

0x95a0,	// (0x000734c5) popup_imed_adjust2_window_ParamLimits

0x3446,	// (0x0006d36b) bg_tb_trans_pane_cp05_ParamLimits

0x5063,	// (0x0006ef88) popup_imed_adjust2_window_g1_ParamLimits

0x5072,	// (0x0006ef97) popup_imed_adjust2_window_g2_ParamLimits

0x5072,	// (0x0006ef97) popup_imed_adjust2_window_g2

0x507e,	// (0x0006efa3) popup_imed_adjust2_window_g3_ParamLimits

0x507e,	// (0x0006efa3) popup_imed_adjust2_window_g3

0x0002,

0xf6f4,	// (0x00079619) popup_imed_adjust2_window_g_ParamLimits

0xf6f4,	// (0x00079619) popup_imed_adjust2_window_g

0x508a,	// (0x0006efaf) popup_imed_adjust2_window_t1_ParamLimits

0x50a2,	// (0x0006efc7) slider_imed_adjust_pane_ParamLimits

0x50b6,	// (0x0006efdb) slider_imed_adjust_pane_g1_ParamLimits

0x50c6,	// (0x0006efeb) slider_imed_adjust_pane_g2_ParamLimits

0x50d6,	// (0x0006effb) slider_imed_adjust_pane_g3_ParamLimits

0x50e7,	// (0x0006f00c) slider_imed_adjust_pane_g4_ParamLimits

0xf6fb,	// (0x00079620) slider_imed_adjust_pane_g_ParamLimits

0xacf3,	// (0x00074c18) aid_touch_area_cam4_ParamLimits

0xacf3,	// (0x00074c18) aid_touch_area_cam4

0xad03,	// (0x00074c28) battery_pane_cp01

0xad8a,	// (0x00074caf) main_camera4_pane_g6_ParamLimits

0xad8a,	// (0x00074caf) main_camera4_pane_g6

0xada8,	// (0x00074ccd) main_camera4_pane_t2_ParamLimits

0xada8,	// (0x00074ccd) main_camera4_pane_t2

0x0001,

0xf7f3,	// (0x00079718) main_camera4_pane_t_ParamLimits

0xf7f3,	// (0x00079718) main_camera4_pane_t

0xae29,	// (0x00074d4e) aid_touch_area_vid4_ParamLimits

0xae29,	// (0x00074d4e) aid_touch_area_vid4

0xae69,	// (0x00074d8e) main_video4_pane_g5_ParamLimits

0xae69,	// (0x00074d8e) main_video4_pane_g5

0xae8d,	// (0x00074db2) vid4_progress_pane_ParamLimits

0xae8d,	// (0x00074db2) vid4_progress_pane

0xebaa,	// (0x00078acf) main_cset_slider_pane_g18_ParamLimits

0xebaa,	// (0x00078acf) main_cset_slider_pane_g18

0xed89,	// (0x00078cae) cell_cam4_burst_pane_g2_ParamLimits

0xed89,	// (0x00078cae) cell_cam4_burst_pane_g2

0x0001,

0xf948,	// (0x0007986d) cell_cam4_burst_pane_g_ParamLimits

0xf948,	// (0x0007986d) cell_cam4_burst_pane_g

0xbe43,	// (0x00075d68) bg_cl_pane_ParamLimits

0xbe43,	// (0x00075d68) bg_cl_pane

0xbe4f,	// (0x00075d74) cl_header_pane_ParamLimits

0xbe4f,	// (0x00075d74) cl_header_pane

0xbe5b,	// (0x00075d80) cl_listscroll_pane_ParamLimits

0xbe5b,	// (0x00075d80) cl_listscroll_pane

0xef67,	// (0x00078e8c) bg_cl_pane_g1

0xef6f,	// (0x00078e94) bg_cl_pane_g2

0xef77,	// (0x00078e9c) bg_cl_pane_g3

0xef7f,	// (0x00078ea4) bg_cl_pane_g4

0xef87,	// (0x00078eac) bg_cl_pane_g5

0xef8f,	// (0x00078eb4) bg_cl_pane_g6

0xef97,	// (0x00078ebc) bg_cl_pane_g7

0xef9f,	// (0x00078ec4) bg_cl_pane_g8

0xefa7,	// (0x00078ecc) bg_cl_pane_g9

0x0008,

0xf983,	// (0x000798a8) bg_cl_pane_g

0xbe67,	// (0x00075d8c) aid_height_cl_leading_ParamLimits

0xbe67,	// (0x00075d8c) aid_height_cl_leading

0xbe73,	// (0x00075d98) aid_height_cl_text_ParamLimits

0xbe73,	// (0x00075d98) aid_height_cl_text

0x2172,	// (0x0006c097) bg_cl_header_pane_ParamLimits

0x2172,	// (0x0006c097) bg_cl_header_pane

0xbe8b,	// (0x00075db0) cl_header_pane_g1_ParamLimits

0xbe8b,	// (0x00075db0) cl_header_pane_g1

0xbe98,	// (0x00075dbd) cl_header_pane_t1_ParamLimits

0xbe98,	// (0x00075dbd) cl_header_pane_t1

0xefaf,	// (0x00078ed4) cl_list_pane

0xeb7d,	// (0x00078aa2) hc_scroll_pane_cp01

0x2bae,	// (0x0006cad3) bg_cl_header_pane_g1

0xea3d,	// (0x00078962) bg_cl_header_pane_g2

0x2bce,	// (0x0006caf3) bg_cl_header_pane_g3

0xea4d,	// (0x00078972) bg_cl_header_pane_g4

0xea45,	// (0x0007896a) bg_cl_header_pane_g5

0xecac,	// (0x00078bd1) bg_cl_header_pane_g6

0xea65,	// (0x0007898a) bg_cl_header_pane_g7

0xea6d,	// (0x00078992) bg_cl_header_pane_g8

0xea5d,	// (0x00078982) bg_cl_header_pane_g9

0x0008,

0xf996,	// (0x000798bb) bg_cl_header_pane_g

0xbeaa,	// (0x00075dcf) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xbeaa,	// (0x00075dcf) hc_cl_list_double_graphic_heading_pane

0xbebe,	// (0x00075de3) hc_cl_list_single_graphic_pane_ParamLimits

0xbebe,	// (0x00075de3) hc_cl_list_single_graphic_pane

0xbed8,	// (0x00075dfd) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xbed8,	// (0x00075dfd) hc_cl_list_single_graphic_pane_g1

0xbee4,	// (0x00075e09) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xbee4,	// (0x00075e09) hc_cl_list_single_graphic_pane_g2

0x0001,

0xf9a9,	// (0x000798ce) hc_cl_list_single_graphic_pane_g_ParamLimits

0xf9a9,	// (0x000798ce) hc_cl_list_single_graphic_pane_g

0xbef8,	// (0x00075e1d) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xbef8,	// (0x00075e1d) hc_cl_list_single_graphic_pane_t1

0xbed8,	// (0x00075dfd) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xbed8,	// (0x00075dfd) hc_cl_list_double_graphic_heading_pane_g1

0xbf0d,	// (0x00075e32) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xbf0d,	// (0x00075e32) hc_cl_list_double_graphic_heading_pane_g2

0xbf21,	// (0x00075e46) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xbf21,	// (0x00075e46) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xf9ae,	// (0x000798d3) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xf9ae,	// (0x000798d3) hc_cl_list_double_graphic_heading_pane_g

0xbf35,	// (0x00075e5a) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xbf35,	// (0x00075e5a) hc_cl_list_double_graphic_heading_pane_t1

0xbf4a,	// (0x00075e6f) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xbf4a,	// (0x00075e6f) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xf9b5,	// (0x000798da) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xf9b5,	// (0x000798da) hc_cl_list_double_graphic_heading_pane_t

0xbf67,	// (0x00075e8c) vid4_progress_pane_g1

0xbf77,	// (0x00075e9c) vid4_progress_pane_g2

0xbf87,	// (0x00075eac) vid4_progress_pane_g3

0xbf99,	// (0x00075ebe) vid4_progress_pane_g4

0x0004,

0xf9ba,	// (0x000798df) vid4_progress_pane_g

0xbfb1,	// (0x00075ed6) vid4_progress_pane_t1

0xbfc7,	// (0x00075eec) vid4_progress_pane_t2

0x0002,

0xf9c5,	// (0x000798ea) vid4_progress_pane_t

0xbff2,	// (0x00075f17) wait_bar_pane_cp07

0x4907,	// (0x0006e82c) blid_firmament_pane_ParamLimits

0x494a,	// (0x0006e86f) popup_blid_sat_info2_window_g1

0x496e,	// (0x0006e893) popup_blid_sat_info2_window_t3

0x497c,	// (0x0006e8a1) popup_blid_sat_info2_window_t4

0x498a,	// (0x0006e8af) popup_blid_sat_info2_window_t5

0x4998,	// (0x0006e8bd) popup_blid_sat_info2_window_t6

0x49a8,	// (0x0006e8cd) popup_blid_sat_info2_window_t7

0x49b6,	// (0x0006e8db) popup_blid_sat_info2_window_t8

0x49c4,	// (0x0006e8e9) popup_blid_sat_info2_window_t9

0x49d2,	// (0x0006e8f7) popup_blid_sat_info2_window_t10

0x4a93,	// (0x0006e9b8) aid_firma_cardinal_ParamLimits

0x4aa7,	// (0x0006e9cc) blid_firmament_pane_t1_ParamLimits

0x4abe,	// (0x0006e9e3) blid_firmament_pane_t2_ParamLimits

0x4ad5,	// (0x0006e9fa) blid_firmament_pane_t3_ParamLimits

0x4aec,	// (0x0006ea11) blid_firmament_pane_t4_ParamLimits

0xf5ed,	// (0x00079512) blid_firmament_pane_t_ParamLimits

0x4b03,	// (0x0006ea28) blid_sat_info_pane_ParamLimits

0x2119,	// (0x0006c03e) main_cam_set_pane_ParamLimits

0xa3ee,	// (0x00074313) aid_size_cell_colour_35_ParamLimits

0xa408,	// (0x0007432d) aid_size_cell_colour_112_ParamLimits

0xa41f,	// (0x00074344) aid_size_cell_effect_ParamLimits

0x2119,	// (0x0006c03e) bg_tb_trans_pane_cp02_ParamLimits

0x2e77,	// (0x0006cd9c) heading_imed_pane_ParamLimits

0xa439,	// (0x0007435e) listscroll_imed_pane_ParamLimits

0x3de0,	// (0x0006dd05) popup_call2_audio_first_window_g5_ParamLimits

0x3de0,	// (0x0006dd05) popup_call2_audio_first_window_g5

0xaa01,	// (0x00074926) aid_size_touch_image3_arrow_left_ParamLimits

0xaa01,	// (0x00074926) aid_size_touch_image3_arrow_left

0xaa17,	// (0x0007493c) aid_size_touch_image3_arrow_right_ParamLimits

0xaa17,	// (0x0007493c) aid_size_touch_image3_arrow_right

0xbfdc,	// (0x00075f01) vid4_progress_pane_t3

0xa593,	// (0x000744b8) main_hwr_training_symbol_option_pane_ParamLimits

0xa593,	// (0x000744b8) main_hwr_training_symbol_option_pane

0x5201,	// (0x0006f126) popup_hwr_training_preview_window_ParamLimits

0x5201,	// (0x0006f126) popup_hwr_training_preview_window

0xa5f4,	// (0x00074519) hwr_training_navi_pane_g5_ParamLimits

0xa5f4,	// (0x00074519) hwr_training_navi_pane_g5

0xea2b,	// (0x00078950) popup_char_count_window

0x2172,	// (0x0006c097) bg_popup_sub_pane_cp20_ParamLimits

0xb961,	// (0x00075886) list_vitu2_match_list_pane_ParamLimits

0xb96d,	// (0x00075892) vitu2_page_scroll_pane_ParamLimits

0xb96d,	// (0x00075892) vitu2_page_scroll_pane

0xefc1,	// (0x00078ee6) list_single_hwr_training_symbol_option_pane_ParamLimits

0xefc1,	// (0x00078ee6) list_single_hwr_training_symbol_option_pane

0xefd4,	// (0x00078ef9) list_single_hwr_training_symbol_option_pane_g1

0xefdc,	// (0x00078f01) list_single_hwr_training_symbol_option_pane_t1

0xefea,	// (0x00078f0f) bg_button_pane_cp023

0xeff3,	// (0x00078f18) bg_button_pane_cp024

0x05fc,	// (0x0006a521) vitu2_page_scroll_pane_g1

0x0604,	// (0x0006a529) vitu2_page_scroll_pane_g2

0x0001,

0xf9cc,	// (0x000798f1) vitu2_page_scroll_pane_g

0x060c,	// (0x0006a531) vitu2_page_scroll_pane_t1

0x22c3,	// (0x0006c1e8) popup_char_count_window_g1

0x061b,	// (0x0006a540) popup_char_count_window_g2

0xc00b,	// (0x00075f30) popup_char_count_window_g3

0x0002,

0xf9d1,	// (0x000798f6) popup_char_count_window_g

0x0624,	// (0x0006a549) popup_char_count_window_t1

0x1a59,	// (0x0006b97e) main_vded2_pane

0x504f,	// (0x0006ef74) aid_size_cell_imed_line

0x5059,	// (0x0006ef7e) grid_imed_line_width_pane

0xaef9,	// (0x00074e1e) vid4_indicators_pane_g4

0x0632,	// (0x0006a557) cell_imed_line_width_pane_ParamLimits

0x0632,	// (0x0006a557) cell_imed_line_width_pane

0x0646,	// (0x0006a56b) cell_imed_line_width_pane_g1

0x064f,	// (0x0006a574) cell_imed_line_width_pane_g2

0x0001,

0xf9d8,	// (0x000798fd) cell_imed_line_width_pane_g

0xc014,	// (0x00075f39) main_vded2_pane_g1_ParamLimits

0xc014,	// (0x00075f39) main_vded2_pane_g1

0xc021,	// (0x00075f46) main_vded2_pane_g2_ParamLimits

0xc021,	// (0x00075f46) main_vded2_pane_g2

0x0001,

0xf9dd,	// (0x00079902) main_vded2_pane_g_ParamLimits

0xf9dd,	// (0x00079902) main_vded2_pane_g

0xc02f,	// (0x00075f54) vded2_slider_pane_ParamLimits

0xc02f,	// (0x00075f54) vded2_slider_pane

0xc03c,	// (0x00075f61) aid_size_touch_vded2_end

0xc046,	// (0x00075f6b) aid_size_touch_vded2_playhead

0x0657,	// (0x0006a57c) aid_size_touch_vded2_start

0x065f,	// (0x0006a584) vded2_slider_bg_pane

0x0668,	// (0x0006a58d) vded2_slider_pane_g1

0x0671,	// (0x0006a596) vded2_slider_pane_g2

0xc04e,	// (0x00075f73) vded2_slider_pane_g3

0x0002,

0xf9e2,	// (0x00079907) vded2_slider_pane_g

0x0679,	// (0x0006a59e) vded2_slider_bg_pane_g1

0x0682,	// (0x0006a5a7) vded2_slider_bg_pane_g2

0x068b,	// (0x0006a5b0) vded2_slider_bg_pane_g3

0x0002,

0xf9e9,	// (0x0007990e) vded2_slider_bg_pane_g

0x8e55,	// (0x00072d7a) aid_postcard_touch_down_pane_ParamLimits

0x8e55,	// (0x00072d7a) aid_postcard_touch_down_pane

0x8e65,	// (0x00072d8a) aid_postcard_touch_up_pane_ParamLimits

0x8e65,	// (0x00072d8a) aid_postcard_touch_up_pane

0x1a59,	// (0x0006b97e) main_blid2_pane

0x952f,	// (0x00073454) popup_blid2_search_window

0x1a59,	// (0x0006b97e) blid2_gps_pane

0x1a59,	// (0x0006b97e) blid2_navig_pane

0x1a59,	// (0x0006b97e) blid2_search_pane

0x1a59,	// (0x0006b97e) blid2_tripm_pane

0xc057,	// (0x00075f7c) blid2_search_pane_g1_ParamLimits

0xc057,	// (0x00075f7c) blid2_search_pane_g1

0xc067,	// (0x00075f8c) blid2_search_pane_t1_ParamLimits

0xc067,	// (0x00075f8c) blid2_search_pane_t1

0xc079,	// (0x00075f9e) aid_size_cell_blid2_gps_ParamLimits

0xc079,	// (0x00075f9e) aid_size_cell_blid2_gps

0xc089,	// (0x00075fae) blid2_gps_pane_g1_ParamLimits

0xc089,	// (0x00075fae) blid2_gps_pane_g1

0xc095,	// (0x00075fba) grid_blid2_satellite_pane_ParamLimits

0xc095,	// (0x00075fba) grid_blid2_satellite_pane

0xc0a5,	// (0x00075fca) blid2_navig_pane_g1_ParamLimits

0xc0a5,	// (0x00075fca) blid2_navig_pane_g1

0xc0b1,	// (0x00075fd6) blid2_navig_pane_t1_ParamLimits

0xc0b1,	// (0x00075fd6) blid2_navig_pane_t1

0xc0c3,	// (0x00075fe8) blid2_navig_pane_t2_ParamLimits

0xc0c3,	// (0x00075fe8) blid2_navig_pane_t2

0x0001,

0xf9f0,	// (0x00079915) blid2_navig_pane_t_ParamLimits

0xf9f0,	// (0x00079915) blid2_navig_pane_t

0xc0d5,	// (0x00075ffa) blid2_navig_ring_pane_ParamLimits

0xc0d5,	// (0x00075ffa) blid2_navig_ring_pane

0xc0e5,	// (0x0007600a) blid2_speed_pane_ParamLimits

0xc0e5,	// (0x0007600a) blid2_speed_pane

0xc0f1,	// (0x00076016) blid2_tripm_pane_g1_ParamLimits

0xc0f1,	// (0x00076016) blid2_tripm_pane_g1

0xc101,	// (0x00076026) blid2_tripm_pane_g2_ParamLimits

0xc101,	// (0x00076026) blid2_tripm_pane_g2

0xc10d,	// (0x00076032) blid2_tripm_pane_g3_ParamLimits

0xc10d,	// (0x00076032) blid2_tripm_pane_g3

0xc119,	// (0x0007603e) blid2_tripm_pane_g4_ParamLimits

0xc119,	// (0x0007603e) blid2_tripm_pane_g4

0xc125,	// (0x0007604a) blid2_tripm_pane_g5_ParamLimits

0xc125,	// (0x0007604a) blid2_tripm_pane_g5

0x0005,

0xf9f5,	// (0x0007991a) blid2_tripm_pane_g_ParamLimits

0xf9f5,	// (0x0007991a) blid2_tripm_pane_g

0xc141,	// (0x00076066) blid2_tripm_pane_t1_ParamLimits

0xc141,	// (0x00076066) blid2_tripm_pane_t1

0xc155,	// (0x0007607a) blid2_tripm_pane_t2_ParamLimits

0xc155,	// (0x0007607a) blid2_tripm_pane_t2

0xc167,	// (0x0007608c) blid2_tripm_pane_t3_ParamLimits

0xc167,	// (0x0007608c) blid2_tripm_pane_t3

0x0003,

0xfa02,	// (0x00079927) blid2_tripm_pane_t_ParamLimits

0xfa02,	// (0x00079927) blid2_tripm_pane_t

0xc199,	// (0x000760be) cell_blid2_satellite_pane_ParamLimits

0xc199,	// (0x000760be) cell_blid2_satellite_pane

0xc1b3,	// (0x000760d8) cell_blid2_satellite_pane_g1

0x0694,	// (0x0006a5b9) cell_blid2_satellite_pane_t1

0x21be,	// (0x0006c0e3) blid2_speed_pane_g1

0x06a2,	// (0x0006a5c7) blid2_speed_pane_t1

0x06b0,	// (0x0006a5d5) blid2_speed_pane_t2

0x0001,

0xfa0b,	// (0x00079930) blid2_speed_pane_t

0x21be,	// (0x0006c0e3) blid2_navig_ring_pane_g1

0xc1bc,	// (0x000760e1) blid2_navig_ring_pane_g2

0xc1c4,	// (0x000760e9) blid2_navig_ring_pane_g3

0xc1cc,	// (0x000760f1) blid2_navig_ring_pane_g4

0xc1d4,	// (0x000760f9) blid2_navig_ring_pane_g5

0x0004,

0xfa10,	// (0x00079935) blid2_navig_ring_pane_g

0x1a59,	// (0x0006b97e) bg_popup_window_pane_cp011

0x06be,	// (0x0006a5e3) popup_blid2_search_window_g1

0x06c6,	// (0x0006a5eb) popup_blid2_search_window_t1

0x06d4,	// (0x0006a5f9) popup_blid2_search_window_t2

0x0001,

0xfa1b,	// (0x00079940) popup_blid2_search_window_t

0x290f,	// (0x0006c834) main_browser_pane_g1

0x221c,	// (0x0006c141) main_browser_pane_ParamLimits

0x2119,	// (0x0006c03e) bg_button_pane_cp011_ParamLimits

0xb255,	// (0x0007517a) cell_vitu2_function_pane_g1_ParamLimits

0x3446,	// (0x0006d36b) bg_popup_sub_pane_cp22_ParamLimits

0xbb06,	// (0x00075a2b) input_focus_pane_cp08_ParamLimits

0xbb21,	// (0x00075a46) popup_vitu2_query_button_pane_ParamLimits

0xbb21,	// (0x00075a46) popup_vitu2_query_button_pane

0xbb30,	// (0x00075a55) popup_vitu2_query_input_button_pane

0xecdf,	// (0x00078c04) popup_vitu2_query_window_g1_ParamLimits

0xbb3a,	// (0x00075a5f) popup_vitu2_query_window_g2_ParamLimits

0xf91c,	// (0x00079841) popup_vitu2_query_window_g_ParamLimits

0x1a59,	// (0x0006b97e) bg_button_pane_cp026

0xc1dc,	// (0x00076101) popup_vitu2_query_input_button_pane_g1

0x1a59,	// (0x0006b97e) bg_button_pane_cp025

0x06e2,	// (0x0006a607) popup_vitu2_query_button_pane_t1

0x9994,	// (0x000738b9) main_mp3_pane_t6

0x99a4,	// (0x000738c9) popup_slider_window_cp01

0xadde,	// (0x00074d03) cam4_battery_pane

0xaeb8,	// (0x00074ddd) cam4_battery_pane_cp02

0xbf5f,	// (0x00075e84) cam4_battery_pane_cp01

0xbf5f,	// (0x00075e84) cam4_battery_pane_cp03

0x21be,	// (0x0006c0e3) cam4_battery_pane_g1

0x0073,	// (0x00069f98) cam4_battery_pane_g2

0x0001,

0xfa20,	// (0x00079945) cam4_battery_pane_g

0x49e0,	// (0x0006e905) popup_blid_sat_info2_window_t11

0x31b4,	// (0x0006d0d9) aid_size_touch_mv_arrow_left_ParamLimits

0x31df,	// (0x0006d104) aid_size_touch_mv_arrow_right_ParamLimits

0x323d,	// (0x0006d162) navi_pane_g1_ParamLimits

0x3249,	// (0x0006d16e) navi_pane_g2_ParamLimits

0x3277,	// (0x0006d19c) navi_pane_g3_ParamLimits

0xf311,	// (0x00079236) navi_pane_g_ParamLimits

0x8b0d,	// (0x00072a32) navi_pane_mv_t1_ParamLimits

0xa445,	// (0x0007436a) grid_imed_effect_pane_ParamLimits

0x75c0,	// (0x000714e5) aid_placing_vt_slider_lsc

0x285e,	// (0x0006c783) aid_placing_vt_slider_prt

0x2119,	// (0x0006c03e) bg_tb_trans_pane_cp01_ParamLimits

0x4c7e,	// (0x0006eba3) popup_image_details_window_g1_ParamLimits

0x4c91,	// (0x0006ebb6) popup_image_details_window_g2_ParamLimits

0x4ca6,	// (0x0006ebcb) popup_image_details_window_g3_ParamLimits

0x4ca6,	// (0x0006ebcb) popup_image_details_window_g3

0xf62d,	// (0x00079552) popup_image_details_window_g_ParamLimits

0x4cba,	// (0x0006ebdf) popup_image_details_window_t1_ParamLimits

0x4ccc,	// (0x0006ebf1) popup_image_details_window_t2_ParamLimits

0x4ce5,	// (0x0006ec0a) popup_image_details_window_t3_ParamLimits

0x4cf9,	// (0x0006ec1e) popup_image_details_window_t4_ParamLimits

0x4d14,	// (0x0006ec39) popup_image_details_window_t5_ParamLimits

0xf634,	// (0x00079559) popup_image_details_window_t_ParamLimits

0xbe7f,	// (0x00075da4) cl_header_name_pane_ParamLimits

0xbe7f,	// (0x00075da4) cl_header_name_pane

0xc1e4,	// (0x00076109) cl_header_name_pane_t1_ParamLimits

0xc1e4,	// (0x00076109) cl_header_name_pane_t1

0xc1fb,	// (0x00076120) cl_header_name_pane_t2_ParamLimits

0xc1fb,	// (0x00076120) cl_header_name_pane_t2

0xc225,	// (0x0007614a) cl_header_name_pane_t3_ParamLimits

0xc225,	// (0x0007614a) cl_header_name_pane_t3

0x0002,

0xfa25,	// (0x0007994a) cl_header_name_pane_t_ParamLimits

0xfa25,	// (0x0007994a) cl_header_name_pane_t

0x3306,	// (0x0006d22b) navi_pane_mv_g2_ParamLimits

0xe9f6,	// (0x0007891b) field_vitu2_entry_pane_g1_ParamLimits

0xea02,	// (0x00078927) field_vitu2_entry_pane_g2_ParamLimits

0x3424,	// (0x0006d349) field_vitu2_entry_pane_g3_ParamLimits

0x3424,	// (0x0006d349) field_vitu2_entry_pane_g3

0xf825,	// (0x0007974a) field_vitu2_entry_pane_g_ParamLimits

0xb11b,	// (0x00075040) cell_vitu2_itu_pane_g1_ParamLimits

0xb133,	// (0x00075058) cell_vitu2_itu_pane_g2_ParamLimits

0xb133,	// (0x00075058) cell_vitu2_itu_pane_g2

0x0001,

0xf831,	// (0x00079756) cell_vitu2_itu_pane_g_ParamLimits

0xf831,	// (0x00079756) cell_vitu2_itu_pane_g

0x2119,	// (0x0006c03e) bg_vkb2_func_pane_cp05_ParamLimits

0x2119,	// (0x0006c03e) bg_vkb2_func_pane_cp05

0x2119,	// (0x0006c03e) bg_vkb2_func_pane_cp03

0x2119,	// (0x0006c03e) bg_vkb2_func_pane_cp04

0x2119,	// (0x0006c03e) bg_vkb2_func_pane_cp10_ParamLimits

0x2119,	// (0x0006c03e) bg_vkb2_func_pane_cp10

0xbe21,	// (0x00075d46) bg_vkb2_func_pane_cp08

0xbaee,	// (0x00075a13) bg_vkb2_func_pane_cp06

0xbe04,	// (0x00075d29) bg_vkb2_func_pane_cp07

0xeffc,	// (0x00078f21) bg_vkb2_func_pane_cp11_ParamLimits

0xeffc,	// (0x00078f21) bg_vkb2_func_pane_cp11

0x05e7,	// (0x0006a50c) bg_vkb2_func_pane_cp12_ParamLimits

0x05e7,	// (0x0006a50c) bg_vkb2_func_pane_cp12

0x1a59,	// (0x0006b97e) bg_vkb2_func_pane_cp09

0xea3d,	// (0x00078962) bg_vkb2_func_pane_g1

0x2bce,	// (0x0006caf3) bg_vkb2_func_pane_g2

0xea45,	// (0x0007896a) bg_vkb2_func_pane_g3

0xea4d,	// (0x00078972) bg_vkb2_func_pane_g4

0xecac,	// (0x00078bd1) bg_vkb2_func_pane_g5

0xea65,	// (0x0007898a) bg_vkb2_func_pane_g6

0xea6d,	// (0x00078992) bg_vkb2_func_pane_g7

0xea5d,	// (0x00078982) bg_vkb2_func_pane_g8

0x2bae,	// (0x0006cad3) bg_vkb2_func_pane_g9

0x0008,

0xfa2c,	// (0x00079951) bg_vkb2_func_pane_g

0xc133,	// (0x00076058) blid2_tripm_pane_g6_ParamLimits

0xc133,	// (0x00076058) blid2_tripm_pane_g6

0xe93c,	// (0x00078861) mp4_progress_pane_g1

0xc18d,	// (0x000760b2) blid2_tripm_values_pane_ParamLimits

0xc18d,	// (0x000760b2) blid2_tripm_values_pane

0xc24a,	// (0x0007616f) blid2_tripm_values_pane_t1

0xc258,	// (0x0007617d) blid2_tripm_values_pane_t2

0xc266,	// (0x0007618b) blid2_tripm_values_pane_t3

0xc274,	// (0x00076199) blid2_tripm_values_pane_t4

0xc282,	// (0x000761a7) blid2_tripm_values_pane_t5

0xc290,	// (0x000761b5) blid2_tripm_values_pane_t6

0xc29e,	// (0x000761c3) blid2_tripm_values_pane_t7

0xc2ac,	// (0x000761d1) blid2_tripm_values_pane_t8

0xc2ba,	// (0x000761df) blid2_tripm_values_pane_t9

0x0008,

0xfa3f,	// (0x00079964) blid2_tripm_values_pane_t

0x7600,	// (0x00071525) call_video_pane_t1_ParamLimits

0x7621,	// (0x00071546) call_video_pane_t2_ParamLimits

0xf1ba,	// (0x000790df) call_video_pane_t_ParamLimits

0x5ff1,	// (0x0006ff16) msg_header_pane_g1_ParamLimits

0x351a,	// (0x0006d43f) msg_header_pane_g2_ParamLimits

0x351a,	// (0x0006d43f) msg_header_pane_g2

0x0001,

0xf3af,	// (0x000792d4) msg_header_pane_g_ParamLimits

0xf3af,	// (0x000792d4) msg_header_pane_g

0x221c,	// (0x0006c141) main_clock2_pane_ParamLimits

0xa1bf,	// (0x000740e4) grid_clock2_toolbar_pane_ParamLimits

0xa1bf,	// (0x000740e4) grid_clock2_toolbar_pane

0xa1bf,	// (0x000740e4) listscroll_clock2_pane_ParamLimits

0xa1bf,	// (0x000740e4) listscroll_clock2_pane

0xa26f,	// (0x00074194) main_clock2_pane_t3_ParamLimits

0xa26f,	// (0x00074194) main_clock2_pane_t3

0xa281,	// (0x000741a6) main_clock2_pane_t4_ParamLimits

0xa281,	// (0x000741a6) main_clock2_pane_t4

0x06f0,	// (0x0006a615) cell_clock2_toolbar_pane

0x06f8,	// (0x0006a61d) cell_clock2_toolbar_pane_cp01

0x06f8,	// (0x0006a61d) cell_clock2_toolbar_pane_cp02

0x0700,	// (0x0006a625) cell_clock2_toolbar_pane_cp03

0x0708,	// (0x0006a62d) list_clock2_pane

0x3139,	// (0x0006d05e) scroll_pane_cp10

0x0710,	// (0x0006a635) list_single_clock2_pane_ParamLimits

0x0710,	// (0x0006a635) list_single_clock2_pane

0x2807,	// (0x0006c72c) list_highlight_pane_cp08

0x071d,	// (0x0006a642) list_single_clock2_pane_t1

0x072b,	// (0x0006a650) list_single_clock2_pane_t2

0x0001,

0xfa52,	// (0x00079977) list_single_clock2_pane_t

0x1a59,	// (0x0006b97e) bg_button_pane_cp10

0x0739,	// (0x0006a65e) cell_clock2_toolbar_pane_g1

0x8db7,	// (0x00072cdc) aid_main_viewer_pane_g1_ParamLimits

0x8db7,	// (0x00072cdc) aid_main_viewer_pane_g1

0x8dc3,	// (0x00072ce8) aid_main_viewer_pane_g2_ParamLimits

0x8dc3,	// (0x00072ce8) aid_main_viewer_pane_g2

0x8dcf,	// (0x00072cf4) aid_main_viewer_pane_g3_ParamLimits

0x8dcf,	// (0x00072cf4) aid_main_viewer_pane_g3

0x8de0,	// (0x00072d05) aid_main_viewer_pane_g4_ParamLimits

0x8de0,	// (0x00072d05) aid_main_viewer_pane_g4

0x0003,

0xf3c0,	// (0x000792e5) aid_main_viewer_pane_g_ParamLimits

0xf3c0,	// (0x000792e5) aid_main_viewer_pane_g

0x9507,	// (0x0007342c) main_calc_pane_ParamLimits

0x9514,	// (0x00073439) main_dialer2_pane_ParamLimits

0x1a59,	// (0x0006b97e) main_cam6_pane

0x1a59,	// (0x0006b97e) main_vid6_pane

0xa1cb,	// (0x000740f0) listscroll_gen_pane_cp06_ParamLimits

0xa1cb,	// (0x000740f0) listscroll_gen_pane_cp06

0xa293,	// (0x000741b8) main_clock2_pane_t5_ParamLimits

0xa293,	// (0x000741b8) main_clock2_pane_t5

0xa2e0,	// (0x00074205) aid_call2_pane_cp10_ParamLimits

0xa2f2,	// (0x00074217) aid_call_pane_cp10_ParamLimits

0x31a8,	// (0x0006d0cd) popup_clock_analogue_window_cp10_g1_ParamLimits

0x31a8,	// (0x0006d0cd) popup_clock_analogue_window_cp10_g2_ParamLimits

0xa304,	// (0x00074229) popup_clock_analogue_window_cp10_g3_ParamLimits

0xa304,	// (0x00074229) popup_clock_analogue_window_cp10_g4_ParamLimits

0x31a8,	// (0x0006d0cd) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf6e9,	// (0x0007960e) popup_clock_analogue_window_cp10_g_ParamLimits

0xa31a,	// (0x0007423f) popup_clock_analogue_window_cp10_t1_ParamLimits

0xe9a7,	// (0x000788cc) cell_dialer2_keypad_pane_g2_ParamLimits

0xe9a7,	// (0x000788cc) cell_dialer2_keypad_pane_g2

0x0001,

0xf7c4,	// (0x000796e9) cell_dialer2_keypad_pane_g_ParamLimits

0xf7c4,	// (0x000796e9) cell_dialer2_keypad_pane_g

0x21c8,	// (0x0006c0ed) cell_dialer2_keypad_pane_t1

0xb51f,	// (0x00075444) main_cset_text2_pane_ParamLimits

0xb51f,	// (0x00075444) main_cset_text2_pane

0xeebf,	// (0x00078de4) area_vitu2_query_pane_g1_ParamLimits

0xbda3,	// (0x00075cc8) area_vitu2_query_pane_g2_ParamLimits

0xf96f,	// (0x00079894) area_vitu2_query_pane_g_ParamLimits

0xef43,	// (0x00078e68) area_vitu2_query_pane_t7_ParamLimits

0xef43,	// (0x00078e68) area_vitu2_query_pane_t7

0xbaee,	// (0x00075a13) bg_button_pane_cp018_ParamLimits

0xbe04,	// (0x00075d29) bg_button_pane_cp021_ParamLimits

0xbe10,	// (0x00075d35) bg_button_pane_cp022_ParamLimits

0xbe21,	// (0x00075d46) bg_vkb2_func_pane_cp08_ParamLimits

0xbaee,	// (0x00075a13) bg_vkb2_func_pane_cp06_ParamLimits

0xbe04,	// (0x00075d29) bg_vkb2_func_pane_cp07_ParamLimits

0xbe33,	// (0x00075d58) input_focus_pane_cp09_ParamLimits

0xc2c8,	// (0x000761ed) cam6_autofocus_pane_ParamLimits

0xc2c8,	// (0x000761ed) cam6_autofocus_pane

0xc2e4,	// (0x00076209) cam6_image_uncrop_pane_ParamLimits

0xc2e4,	// (0x00076209) cam6_image_uncrop_pane

0xc31d,	// (0x00076242) cam6_indi_pane_ParamLimits

0xc31d,	// (0x00076242) cam6_indi_pane

0xc337,	// (0x0007625c) cam6_mode_pane_ParamLimits

0xc337,	// (0x0007625c) cam6_mode_pane

0xc34b,	// (0x00076270) cam6_timer_pane_ParamLimits

0xc34b,	// (0x00076270) cam6_timer_pane

0xc35f,	// (0x00076284) cam6_zoom_pane_ParamLimits

0xc35f,	// (0x00076284) cam6_zoom_pane

0xc37a,	// (0x0007629f) cam6_mode_pane_g1_ParamLimits

0xc37a,	// (0x0007629f) cam6_mode_pane_g1

0xc386,	// (0x000762ab) cam6_mode_pane_g2_ParamLimits

0xc386,	// (0x000762ab) cam6_mode_pane_g2

0xc392,	// (0x000762b7) cam6_mode_pane_g3_ParamLimits

0xc392,	// (0x000762b7) cam6_mode_pane_g3

0xc39e,	// (0x000762c3) cam6_mode_pane_g4_ParamLimits

0xc39e,	// (0x000762c3) cam6_mode_pane_g4

0x0003,

0xfa57,	// (0x0007997c) cam6_mode_pane_g_ParamLimits

0xfa57,	// (0x0007997c) cam6_mode_pane_g

0x4896,	// (0x0006e7bb) bg_tb_trans_pane_cp08_ParamLimits

0x4896,	// (0x0006e7bb) bg_tb_trans_pane_cp08

0x074f,	// (0x0006a674) cam6_battery_pane_ParamLimits

0x074f,	// (0x0006a674) cam6_battery_pane

0x0765,	// (0x0006a68a) cam6_indi_pane_g1_ParamLimits

0x0765,	// (0x0006a68a) cam6_indi_pane_g1

0x0777,	// (0x0006a69c) cam6_indi_pane_g2_ParamLimits

0x0777,	// (0x0006a69c) cam6_indi_pane_g2

0x0789,	// (0x0006a6ae) cam6_indi_pane_g3_ParamLimits

0x0789,	// (0x0006a6ae) cam6_indi_pane_g3

0x0002,

0xfa60,	// (0x00079985) cam6_indi_pane_g_ParamLimits

0xfa60,	// (0x00079985) cam6_indi_pane_g

0x079b,	// (0x0006a6c0) cam6_indi_pane_t1_ParamLimits

0x079b,	// (0x0006a6c0) cam6_indi_pane_t1

0xaf2c,	// (0x00074e51) cam6_autofocus_pane_g1

0xaf34,	// (0x00074e59) cam6_autofocus_pane_g2

0xaf3c,	// (0x00074e61) cam6_autofocus_pane_g3

0xaf44,	// (0x00074e69) cam6_autofocus_pane_g4

0x0003,

0xfa67,	// (0x0007998c) cam6_autofocus_pane_g

0x07c1,	// (0x0006a6e6) cam6_timer_pane_g1

0x07c9,	// (0x0006a6ee) cam6_timer_pane_t1

0x07d7,	// (0x0006a6fc) cam6_zoom_cont_pane

0x07df,	// (0x0006a704) cam6_zoom_pane_g1

0x07e8,	// (0x0006a70d) cam6_zoom_pane_g2

0xc3aa,	// (0x000762cf) cam6_zoom_pane_g3

0x0002,

0xfa70,	// (0x00079995) cam6_zoom_pane_g

0x21be,	// (0x0006c0e3) cam6_battery_pane_g1

0x21be,	// (0x0006c0e3) cam6_battery_pane_g2

0x0001,

0xf08c,	// (0x00078fb1) cam6_battery_pane_g

0x07df,	// (0x0006a704) cam6_zoom_cont_pane_g1

0x07e8,	// (0x0006a70d) cam6_zoom_cont_pane_g2

0x07f1,	// (0x0006a716) cam6_zoom_cont_pane_g3

0x0002,

0xfa77,	// (0x0007999c) cam6_zoom_cont_pane_g

0xc3c8,	// (0x000762ed) cam6_mode_pane_cp_ParamLimits

0xc3c8,	// (0x000762ed) cam6_mode_pane_cp

0xc3dc,	// (0x00076301) cam6_zoom_pane_cp_ParamLimits

0xc3dc,	// (0x00076301) cam6_zoom_pane_cp

0xc3f4,	// (0x00076319) vid6_image_uncrop_cif_pane_ParamLimits

0xc3f4,	// (0x00076319) vid6_image_uncrop_cif_pane

0xc420,	// (0x00076345) vid6_image_uncrop_nhd_pane_ParamLimits

0xc420,	// (0x00076345) vid6_image_uncrop_nhd_pane

0xc43d,	// (0x00076362) vid6_image_uncrop_vga_pane_ParamLimits

0xc43d,	// (0x00076362) vid6_image_uncrop_vga_pane

0xc45c,	// (0x00076381) vid6_image_uncrop_wvga_pane_ParamLimits

0xc45c,	// (0x00076381) vid6_image_uncrop_wvga_pane

0xc479,	// (0x0007639e) vid6_indi_pane_ParamLimits

0xc479,	// (0x0007639e) vid6_indi_pane

0x4896,	// (0x0006e7bb) bg_tb_trans_pane_cp09_ParamLimits

0x4896,	// (0x0006e7bb) bg_tb_trans_pane_cp09

0x0809,	// (0x0006a72e) cam6_battery_pane_cp_ParamLimits

0x0809,	// (0x0006a72e) cam6_battery_pane_cp

0x0815,	// (0x0006a73a) vid6_indi_pane_g1_ParamLimits

0x0815,	// (0x0006a73a) vid6_indi_pane_g1

0x0827,	// (0x0006a74c) vid6_indi_pane_g2_ParamLimits

0x0827,	// (0x0006a74c) vid6_indi_pane_g2

0x0839,	// (0x0006a75e) vid6_indi_pane_g3_ParamLimits

0x0839,	// (0x0006a75e) vid6_indi_pane_g3

0x084e,	// (0x0006a773) vid6_indi_pane_g4_ParamLimits

0x084e,	// (0x0006a773) vid6_indi_pane_g4

0x0863,	// (0x0006a788) vid6_indi_pane_g5_ParamLimits

0x0863,	// (0x0006a788) vid6_indi_pane_g5

0x0004,

0xfa7e,	// (0x000799a3) vid6_indi_pane_g_ParamLimits

0xfa7e,	// (0x000799a3) vid6_indi_pane_g

0x087d,	// (0x0006a7a2) vid6_indi_pane_t1_ParamLimits

0x087d,	// (0x0006a7a2) vid6_indi_pane_t1

0x0893,	// (0x0006a7b8) vid6_indi_pane_t2_ParamLimits

0x0893,	// (0x0006a7b8) vid6_indi_pane_t2

0x08bb,	// (0x0006a7e0) vid6_indi_pane_t3_ParamLimits

0x08bb,	// (0x0006a7e0) vid6_indi_pane_t3

0x08e3,	// (0x0006a808) vid6_indi_pane_t4_ParamLimits

0x08e3,	// (0x0006a808) vid6_indi_pane_t4

0x0003,

0xfa89,	// (0x000799ae) vid6_indi_pane_t_ParamLimits

0xfa89,	// (0x000799ae) vid6_indi_pane_t

0x0907,	// (0x0006a82c) wait_bar_pane_cp08

0xc49c,	// (0x000763c1) main_cset_text2_pane_t1_ParamLimits

0xc49c,	// (0x000763c1) main_cset_text2_pane_t1

0xc3b3,	// (0x000762d8) listscroll_gen_pane_cp06_t1_ParamLimits

0xc3b3,	// (0x000762d8) listscroll_gen_pane_cp06_t1

0x1a59,	// (0x0006b97e) main_cam6_set_pane

0x2180,	// (0x0006c0a5) bg_tb_trans_pane_cp06_ParamLimits

0xade6,	// (0x00074d0b) cam4_indicators_pane_g1_ParamLimits

0xadf7,	// (0x00074d1c) cam4_indicators_pane_g2_ParamLimits

0xf801,	// (0x00079726) cam4_indicators_pane_g_ParamLimits

0xae0f,	// (0x00074d34) cam4_indicators_pane_t1_ParamLimits

0x2119,	// (0x0006c03e) bg_tb_trans_pane_cp07_ParamLimits

0xaec0,	// (0x00074de5) vid4_indicators_pane_g1_ParamLimits

0xaed4,	// (0x00074df9) vid4_indicators_pane_g2_ParamLimits

0xaee8,	// (0x00074e0d) vid4_indicators_pane_g3_ParamLimits

0xaef9,	// (0x00074e1e) vid4_indicators_pane_g4_ParamLimits

0xf813,	// (0x00079738) vid4_indicators_pane_g_ParamLimits

0xaf15,	// (0x00074e3a) vid4_indicators_pane_t1_ParamLimits

0xbf67,	// (0x00075e8c) vid4_progress_pane_g1_ParamLimits

0xbf77,	// (0x00075e9c) vid4_progress_pane_g2_ParamLimits

0xbf87,	// (0x00075eac) vid4_progress_pane_g3_ParamLimits

0xbf99,	// (0x00075ebe) vid4_progress_pane_g4_ParamLimits

0xf9ba,	// (0x000798df) vid4_progress_pane_g_ParamLimits

0xbfb1,	// (0x00075ed6) vid4_progress_pane_t1_ParamLimits

0xbfc7,	// (0x00075eec) vid4_progress_pane_t2_ParamLimits

0xbfdc,	// (0x00075f01) vid4_progress_pane_t3_ParamLimits

0xf9c5,	// (0x000798ea) vid4_progress_pane_t_ParamLimits

0xbff2,	// (0x00075f17) wait_bar_pane_cp07_ParamLimits

0xc4d3,	// (0x000763f8) main_cam6_set_pane_g2_ParamLimits

0xc4d3,	// (0x000763f8) main_cam6_set_pane_g2

0xc4df,	// (0x00076404) main_cset6_listscroll_pane_ParamLimits

0xc4df,	// (0x00076404) main_cset6_listscroll_pane

0xc50a,	// (0x0007642f) main_cset6_slider_pane_ParamLimits

0xc50a,	// (0x0007642f) main_cset6_slider_pane

0xc516,	// (0x0007643b) main_cset6_text2_pane_ParamLimits

0xc516,	// (0x0007643b) main_cset6_text2_pane

0x0916,	// (0x0006a83b) main_cset6_text_pane

0x091e,	// (0x0006a843) main_cset_list_pane_copy1_ParamLimits

0x091e,	// (0x0006a843) main_cset_list_pane_copy1

0x092e,	// (0x0006a853) scroll_pane_cp028_copy1

0xc529,	// (0x0007644e) cset_list_set_pane_copy1

0xc53f,	// (0x00076464) aid_position_infowindow_above_copy1

0xc547,	// (0x0007646c) aid_position_infowindow_below_copy1

0xc54f,	// (0x00076474) cset_list_set_pane_g1_copy1

0x6103,	// (0x00070028) cset_list_set_pane_g3_copy1_ParamLimits

0x6103,	// (0x00070028) cset_list_set_pane_g3_copy1

0x6112,	// (0x00070037) cset_list_set_pane_t1_copy1_ParamLimits

0x6112,	// (0x00070037) cset_list_set_pane_t1_copy1

0x2119,	// (0x0006c03e) list_highlight_pane_cp021_copy1_ParamLimits

0x2119,	// (0x0006c03e) list_highlight_pane_cp021_copy1

0x0937,	// (0x0006a85c) cset6_slider_pane_ParamLimits

0x0937,	// (0x0006a85c) cset6_slider_pane

0x0963,	// (0x0006a888) main_cset6_slider_pane_g1_ParamLimits

0x0963,	// (0x0006a888) main_cset6_slider_pane_g1

0xc557,	// (0x0007647c) main_cset6_slider_pane_g2_ParamLimits

0xc557,	// (0x0007647c) main_cset6_slider_pane_g2

0x098b,	// (0x0006a8b0) main_cset6_slider_pane_g3_ParamLimits

0x098b,	// (0x0006a8b0) main_cset6_slider_pane_g3

0xc57f,	// (0x000764a4) main_cset6_slider_pane_g4_ParamLimits

0xc57f,	// (0x000764a4) main_cset6_slider_pane_g4

0xc58b,	// (0x000764b0) main_cset6_slider_pane_g5_ParamLimits

0xc58b,	// (0x000764b0) main_cset6_slider_pane_g5

0xeb92,	// (0x00078ab7) main_cset6_slider_pane_g7_ParamLimits

0xeb92,	// (0x00078ab7) main_cset6_slider_pane_g7

0xeb9e,	// (0x00078ac3) main_cset6_slider_pane_g8_ParamLimits

0xeb9e,	// (0x00078ac3) main_cset6_slider_pane_g8

0xc599,	// (0x000764be) main_cset6_slider_pane_g9_ParamLimits

0xc599,	// (0x000764be) main_cset6_slider_pane_g9

0xc5a5,	// (0x000764ca) main_cset6_slider_pane_g10_ParamLimits

0xc5a5,	// (0x000764ca) main_cset6_slider_pane_g10

0xc5b1,	// (0x000764d6) main_cset6_slider_pane_g11_ParamLimits

0xc5b1,	// (0x000764d6) main_cset6_slider_pane_g11

0xc5bd,	// (0x000764e2) main_cset6_slider_pane_g12_ParamLimits

0xc5bd,	// (0x000764e2) main_cset6_slider_pane_g12

0x04e1,	// (0x0006a406) main_cset6_slider_pane_g13_ParamLimits

0x04e1,	// (0x0006a406) main_cset6_slider_pane_g13

0x04ed,	// (0x0006a412) main_cset6_slider_pane_g14_ParamLimits

0x04ed,	// (0x0006a412) main_cset6_slider_pane_g14

0xc5c9,	// (0x000764ee) main_cset6_slider_pane_g15_ParamLimits

0xc5c9,	// (0x000764ee) main_cset6_slider_pane_g15

0xc5e1,	// (0x00076506) main_cset6_slider_pane_g16_ParamLimits

0xc5e1,	// (0x00076506) main_cset6_slider_pane_g16

0xc5ef,	// (0x00076514) main_cset6_slider_pane_g17_ParamLimits

0xc5ef,	// (0x00076514) main_cset6_slider_pane_g17

0x0011,

0xfa92,	// (0x000799b7) main_cset6_slider_pane_g_ParamLimits

0xfa92,	// (0x000799b7) main_cset6_slider_pane_g

0x09a3,	// (0x0006a8c8) main_cset6_slider_pane_t1_ParamLimits

0x09a3,	// (0x0006a8c8) main_cset6_slider_pane_t1

0xc609,	// (0x0007652e) main_cset6_slider_pane_t2_ParamLimits

0xc609,	// (0x0007652e) main_cset6_slider_pane_t2

0xc634,	// (0x00076559) main_cset6_slider_pane_t3_ParamLimits

0xc634,	// (0x00076559) main_cset6_slider_pane_t3

0xc65f,	// (0x00076584) main_cset6_slider_pane_t4_ParamLimits

0xc65f,	// (0x00076584) main_cset6_slider_pane_t4

0xc68a,	// (0x000765af) main_cset6_slider_pane_t5_ParamLimits

0xc68a,	// (0x000765af) main_cset6_slider_pane_t5

0x09e4,	// (0x0006a909) main_cset6_slider_pane_t7_ParamLimits

0x09e4,	// (0x0006a909) main_cset6_slider_pane_t7

0xc6b7,	// (0x000765dc) main_cset6_slider_pane_t8_ParamLimits

0xc6b7,	// (0x000765dc) main_cset6_slider_pane_t8

0xc6db,	// (0x00076600) main_cset6_slider_pane_t9_ParamLimits

0xc6db,	// (0x00076600) main_cset6_slider_pane_t9

0xc6ff,	// (0x00076624) main_cset6_slider_pane_t10_ParamLimits

0xc6ff,	// (0x00076624) main_cset6_slider_pane_t10

0xc723,	// (0x00076648) main_cset6_slider_pane_t11_ParamLimits

0xc723,	// (0x00076648) main_cset6_slider_pane_t11

0x0a1a,	// (0x0006a93f) main_cset6_slider_pane_t14_ParamLimits

0x0a1a,	// (0x0006a93f) main_cset6_slider_pane_t14

0x0a53,	// (0x0006a978) main_cset6_slider_pane_t15_ParamLimits

0x0a53,	// (0x0006a978) main_cset6_slider_pane_t15

0x000b,

0xfab7,	// (0x000799dc) main_cset6_slider_pane_t_ParamLimits

0xfab7,	// (0x000799dc) main_cset6_slider_pane_t

0xec60,	// (0x00078b85) cset_slider_pane_g1_copy1

0xec69,	// (0x00078b8e) cset_slider_pane_g2_copy1

0xec72,	// (0x00078b97) cset_slider_pane_g3_copy1

0x1a59,	// (0x0006b97e) bg_popup_sub_pane_cp011_copy1

0x0a95,	// (0x0006a9ba) main_cset_text_pane_g1_copy1

0xecf3,	// (0x00078c18) main_cset_text_pane_t1_copy1

0xed01,	// (0x00078c26) main_cset_text_pane_t2_copy1

0xed0f,	// (0x00078c34) main_cset_text_pane_t3_copy1

0xed1d,	// (0x00078c42) main_cset_text_pane_t4_copy1

0xed2b,	// (0x00078c50) main_cset_text_pane_t5_copy1

0x0a9d,	// (0x0006a9c2) main_cset_text_pane_t6_copy1

0x0aab,	// (0x0006a9d0) main_cset_text_pane_t7_copy1

0xc749,	// (0x0007666e) main_cset_text2_pane_t1_copy1

0x2119,	// (0x0006c03e) main_ncimui_pane

0x9565,	// (0x0007348a) popup_query_ncimui_window_ParamLimits

0x9565,	// (0x0007348a) popup_query_ncimui_window

0x9afe,	// (0x00073a23) field_cale_ev2_pane_g4_ParamLimits

0x9afe,	// (0x00073a23) field_cale_ev2_pane_g4

0xa6cf,	// (0x000745f4) cell_video_dialer_keypad_pane_g2_ParamLimits

0xa6cf,	// (0x000745f4) cell_video_dialer_keypad_pane_g2

0x0001,

0xf79b,	// (0x000796c0) cell_video_dialer_keypad_pane_g_ParamLimits

0xf79b,	// (0x000796c0) cell_video_dialer_keypad_pane_g

0xa6e7,	// (0x0007460c) cell_video_dialer_keypad_pane_t1

0x1a59,	// (0x0006b97e) bg_popup_window_pane_cp012

0x3031,	// (0x0006cf56) heading_pane_cp06

0x0ad7,	// (0x0006a9fc) ncim_query_content_pane

0x1a59,	// (0x0006b97e) bg_popup_heading_pane_cp01

0x0adf,	// (0x0006aa04) ncim_heading_pane_t1

0x0aed,	// (0x0006aa12) ncim_indicator_popup_pane

0x0aff,	// (0x0006aa24) ncim_query_button_pane

0x0b13,	// (0x0006aa38) ncim_query_content_pane_t1

0x0b25,	// (0x0006aa4a) ncim_query_content_pane_t2

0x0005,

0xfafb,	// (0x00079a20) ncim_query_content_pane_t

0x0b5f,	// (0x0006aa84) ncim_query_list_pane

0x0b71,	// (0x0006aa96) ncim_query_popup_pane

0x0aed,	// (0x0006aa12) ncim_indicator_popup_pane_ParamLimits

0xc89d,	// (0x000767c2) ncim_query_content_pane_g1_ParamLimits

0xc89d,	// (0x000767c2) ncim_query_content_pane_g1

0x0b13,	// (0x0006aa38) ncim_query_content_pane_t1_ParamLimits

0x0b25,	// (0x0006aa4a) ncim_query_content_pane_t2_ParamLimits

0xc8a9,	// (0x000767ce) ncim_query_content_pane_t3_ParamLimits

0xc8a9,	// (0x000767ce) ncim_query_content_pane_t3

0xc8c6,	// (0x000767eb) ncim_query_content_pane_t4_ParamLimits

0xc8c6,	// (0x000767eb) ncim_query_content_pane_t4

0xc8e3,	// (0x00076808) ncim_query_content_pane_t5_ParamLimits

0xc8e3,	// (0x00076808) ncim_query_content_pane_t5

0x0b37,	// (0x0006aa5c) ncim_query_content_pane_t6_ParamLimits

0x0b37,	// (0x0006aa5c) ncim_query_content_pane_t6

0xfafb,	// (0x00079a20) ncim_query_content_pane_t_ParamLimits

0x0b5f,	// (0x0006aa84) ncim_query_list_pane_ParamLimits

0x0b71,	// (0x0006aa96) ncim_query_popup_pane_ParamLimits

0x0b85,	// (0x0006aaaa) wait_bar_pane_cp04

0x1a59,	// (0x0006b97e) input_focus_pane_cp011

0x0b8d,	// (0x0006aab2) ncim_query_popup_pane_t1

0x0b9b,	// (0x0006aac0) ncim_list_query_list_pane_ParamLimits

0x0b9b,	// (0x0006aac0) ncim_list_query_list_pane

0x1a59,	// (0x0006b97e) bg_button_pane_cp027

0x0ba8,	// (0x0006aacd) ncim_query_button_pane_g1

0x1a59,	// (0x0006b97e) list_highlight_pane_cp012

0x0bb2,	// (0x0006aad7) ncim_list_query_list_pane_g1

0x0bba,	// (0x0006aadf) ncim_list_query_list_pane_t1

0xae03,	// (0x00074d28) cam4_indicators_pane_g3_ParamLimits

0xae03,	// (0x00074d28) cam4_indicators_pane_g3

0xaf05,	// (0x00074e2a) vid4_indicators_pane_g5_ParamLimits

0xaf05,	// (0x00074e2a) vid4_indicators_pane_g5

0xbfa5,	// (0x00075eca) vid4_progress_pane_g5_ParamLimits

0xbfa5,	// (0x00075eca) vid4_progress_pane_g5

0xc789,	// (0x000766ae) main_ncimui_pane_g1

0xc7f1,	// (0x00076716) ncimui_group_query_pane_ParamLimits

0xc7f1,	// (0x00076716) ncimui_group_query_pane

0xc839,	// (0x0007675e) ncimui_list_pane_ParamLimits

0xc839,	// (0x0007675e) ncimui_list_pane

0xc860,	// (0x00076785) ncimui_text_pane_ParamLimits

0xc860,	// (0x00076785) ncimui_text_pane

0xc900,	// (0x00076825) ncimui_text_pane_t1_ParamLimits

0xc900,	// (0x00076825) ncimui_text_pane_t1

0x0bc8,	// (0x0006aaed) ncimui_list_single_graphic_pane_ParamLimits

0x0bc8,	// (0x0006aaed) ncimui_list_single_graphic_pane

0xc91f,	// (0x00076844) ncimui_query_pane_ParamLimits

0xc91f,	// (0x00076844) ncimui_query_pane

0x1a59,	// (0x0006b97e) list_highlight_pane_cp013

0x0bd8,	// (0x0006aafd) ncim_list_query_list_pane_t1_copy1

0x0be6,	// (0x0006ab0b) ncim_list_single_graphic_pane_g1

0xc932,	// (0x00076857) ncim_query_button_pane_cp01

0xc93e,	// (0x00076863) ncim_query_entry_pane_ParamLimits

0xc93e,	// (0x00076863) ncim_query_entry_pane

0xc951,	// (0x00076876) ncimui_query_pane_g1

0xc95d,	// (0x00076882) ncimui_query_pane_t1_ParamLimits

0xc95d,	// (0x00076882) ncimui_query_pane_t1

0x2119,	// (0x0006c03e) input_focus_pane_cp012

0x0bee,	// (0x0006ab13) ncim_query_entry_pane_t1

0x221c,	// (0x0006c141) main_im_pane_ParamLimits

0x2119,	// (0x0006c03e) main_mobtv_pane_ParamLimits

0x2119,	// (0x0006c03e) main_mobtv_pane

0xc5fd,	// (0x00076522) main_cset6_slider_pane_g18_ParamLimits

0xc5fd,	// (0x00076522) main_cset6_slider_pane_g18

0x0997,	// (0x0006a8bc) main_cset6_slider_pane_g19_ParamLimits

0x0997,	// (0x0006a8bc) main_cset6_slider_pane_g19

0x3424,	// (0x0006d349) bg_main_mobtv_pane_ParamLimits

0x3424,	// (0x0006d349) bg_main_mobtv_pane

0xc976,	// (0x0007689b) main_mobtv_info_pane

0xc981,	// (0x000768a6) main_mobtv_loading_pane_ParamLimits

0xc981,	// (0x000768a6) main_mobtv_loading_pane

0x0c00,	// (0x0006ab25) main_mobtv_pg_channel_list_pane

0x0c0a,	// (0x0006ab2f) main_mobtv_pg_hdr_pane

0xc98e,	// (0x000768b3) main_mobtv_programe_curr_pane_ParamLimits

0xc98e,	// (0x000768b3) main_mobtv_programe_curr_pane

0xc99b,	// (0x000768c0) main_mobtv_programe_next_pane_ParamLimits

0xc99b,	// (0x000768c0) main_mobtv_programe_next_pane

0x0c13,	// (0x0006ab38) popup_mobtv_noti_window

0x21be,	// (0x0006c0e3) main_tv_pg_hdr_pane_g1

0x0c1b,	// (0x0006ab40) main_tv_pg_hdr_pane_g2

0x0c23,	// (0x0006ab48) main_tv_pg_hdr_pane_g3

0x0c2b,	// (0x0006ab50) main_tv_pg_hdr_pane_g4

0x0c33,	// (0x0006ab58) main_tv_pg_hdr_pane_g5

0x0c3d,	// (0x0006ab62) main_tv_pg_hdr_pane_g6

0x0c47,	// (0x0006ab6c) main_tv_pg_hdr_pane_g7

0x0c51,	// (0x0006ab76) main_tv_pg_hdr_pane_g8

0x0c5b,	// (0x0006ab80) main_tv_pg_hdr_pane_g9

0x0c65,	// (0x0006ab8a) main_tv_pg_hdr_pane_g10

0x0c6f,	// (0x0006ab94) main_tv_pg_hdr_pane_g11

0x000a,

0xfb08,	// (0x00079a2d) main_tv_pg_hdr_pane_g

0x0c79,	// (0x0006ab9e) main_tv_pg_hdr_pane_t1

0x0c87,	// (0x0006abac) main_tv_pg_hdr_pane_t2

0x0c95,	// (0x0006abba) main_tv_pg_hdr_pane_t3

0x0ca5,	// (0x0006abca) main_tv_pg_hdr_pane_t4

0x0cb5,	// (0x0006abda) main_tv_pg_hdr_pane_t5

0x0004,

0xfb1f,	// (0x00079a44) main_tv_pg_hdr_pane_t

0x0cc5,	// (0x0006abea) single_mobtv_pg_channel_pane_ParamLimits

0x0cc5,	// (0x0006abea) single_mobtv_pg_channel_pane

0x0cd7,	// (0x0006abfc) single_mobtv_pg_channel_table_pane

0x2cd1,	// (0x0006cbf6) single_mobtv_pg_channel_thumb_pane

0x0ce0,	// (0x0006ac05) single_tv_pg_channel_pane_g1

0x0ce9,	// (0x0006ac0e) single_tv_pg_channel_pane_g2

0x0001,

0xfb2a,	// (0x00079a4f) single_tv_pg_channel_pane_g

0x2180,	// (0x0006c0a5) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x2180,	// (0x0006c0a5) bg_single_mobtv_pg_channel_thumb_pane

0x0cf2,	// (0x0006ac17) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x0cf2,	// (0x0006ac17) single_mobtv_pg_channel_thumb_pane_g1

0x0d00,	// (0x0006ac25) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x0d00,	// (0x0006ac25) single_mobtv_pg_channel_thumb_pane_g2

0x0d0c,	// (0x0006ac31) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x0d0c,	// (0x0006ac31) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfb2f,	// (0x00079a54) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfb2f,	// (0x00079a54) single_mobtv_pg_channel_thumb_pane_g

0x0d18,	// (0x0006ac3d) single_mobtv_pg_channel_thumb_pane_t1

0x0d26,	// (0x0006ac4b) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfb36,	// (0x00079a5b) single_mobtv_pg_channel_thumb_pane_t

0x21be,	// (0x0006c0e3) bg_single_mobtv_pg_channel_table_pane_g1

0x21be,	// (0x0006c0e3) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf08c,	// (0x00078fb1) bg_single_mobtv_pg_channel_table_pane_g

0x0d34,	// (0x0006ac59) single_mobtv_pg_channel_table_pane_t1

0x0d42,	// (0x0006ac67) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfb3b,	// (0x00079a60) single_mobtv_pg_channel_table_pane_t

0xc9b0,	// (0x000768d5) main_mobtv_info_pane_g1_ParamLimits

0xc9b0,	// (0x000768d5) main_mobtv_info_pane_g1

0xc9cc,	// (0x000768f1) main_mobtv_info_pane_t1_ParamLimits

0xc9cc,	// (0x000768f1) main_mobtv_info_pane_t1

0xca44,	// (0x00076969) main_mobtv_info_pane_t2_ParamLimits

0xca44,	// (0x00076969) main_mobtv_info_pane_t2

0x0002,

0xfb45,	// (0x00079a6a) main_mobtv_info_pane_t_ParamLimits

0xfb45,	// (0x00079a6a) main_mobtv_info_pane_t

0xcad3,	// (0x000769f8) wait_bar_pane_cp05

0xcae5,	// (0x00076a0a) main_mobtv_loading_pane_g1_ParamLimits

0xcae5,	// (0x00076a0a) main_mobtv_loading_pane_g1

0xcaf3,	// (0x00076a18) main_mobtv_loading_pane_g2_ParamLimits

0xcaf3,	// (0x00076a18) main_mobtv_loading_pane_g2

0xcaff,	// (0x00076a24) main_mobtv_loading_pane_g3_ParamLimits

0xcaff,	// (0x00076a24) main_mobtv_loading_pane_g3

0x0002,

0xfb4c,	// (0x00079a71) main_mobtv_loading_pane_g_ParamLimits

0xfb4c,	// (0x00079a71) main_mobtv_loading_pane_g

0x0d50,	// (0x0006ac75) main_mobtv_loading_pane_t1_ParamLimits

0x0d50,	// (0x0006ac75) main_mobtv_loading_pane_t1

0x0d68,	// (0x0006ac8d) main_mobtv_loading_pane_t2_ParamLimits

0x0d68,	// (0x0006ac8d) main_mobtv_loading_pane_t2

0x0001,

0xfb53,	// (0x00079a78) main_mobtv_loading_pane_t_ParamLimits

0xfb53,	// (0x00079a78) main_mobtv_loading_pane_t

0xcb0d,	// (0x00076a32) wait_bar_pane_cp06_ParamLimits

0xcb0d,	// (0x00076a32) wait_bar_pane_cp06

0x0d8c,	// (0x0006acb1) main_mobtv_programe_curr_pane_t1

0x0d9a,	// (0x0006acbf) main_mobtv_programe_curr_pane_t2

0x0001,

0xfb58,	// (0x00079a7d) main_mobtv_programe_curr_pane_t

0x0da8,	// (0x0006accd) main_mobtv_programe_next_pane_t1

0x0db6,	// (0x0006acdb) main_mobtv_programe_next_pane_t2

0x0dc4,	// (0x0006ace9) main_mobtv_programe_next_pane_t3

0x0002,

0xfb5d,	// (0x00079a82) main_mobtv_programe_next_pane_t

0x1a59,	// (0x0006b97e) bg_popup_mobtv_noti_window_pane

0x0dd2,	// (0x0006acf7) popup_mobtv_noti_window_g1

0x0dda,	// (0x0006acff) popup_mobtv_noti_window_t1

0x0de8,	// (0x0006ad0d) popup_mobtv_noti_window_t2

0x0001,

0xfb64,	// (0x00079a89) popup_mobtv_noti_window_t

0x21be,	// (0x0006c0e3) bg_popup_mobtv_noti_window_pane_g1

0x1a59,	// (0x0006b97e) sc_clock_pane

0x1a59,	// (0x0006b97e) main_fs_bigclock_pane

0xc17b,	// (0x000760a0) blid2_tripm_pane_t4_ParamLimits

0xc17b,	// (0x000760a0) blid2_tripm_pane_t4

0x218e,	// (0x0006c0b3) sc_clock_pane_g1_ParamLimits

0x218e,	// (0x0006c0b3) sc_clock_pane_g1

0x21dc,	// (0x0006c101) sc_clock_pane_t1_ParamLimits

0x21dc,	// (0x0006c101) sc_clock_pane_t1

0x21dc,	// (0x0006c101) sc_clock_pane_t2_ParamLimits

0x21dc,	// (0x0006c101) sc_clock_pane_t2

0x21dc,	// (0x0006c101) sc_clock_pane_t3_ParamLimits

0x21dc,	// (0x0006c101) sc_clock_pane_t3

0x0004,

0xfb69,	// (0x00079a8e) sc_clock_pane_t_ParamLimits

0xfb69,	// (0x00079a8e) sc_clock_pane_t

0xd26e,	// (0x00077193) main_fs_bigclock_indicator_pane_ParamLimits

0xd26e,	// (0x00077193) main_fs_bigclock_indicator_pane

0xcb54,	// (0x00076a79) main_fs_bigclock_pane_g1_ParamLimits

0xcb54,	// (0x00076a79) main_fs_bigclock_pane_g1

0xd27a,	// (0x0007719f) main_fs_bigclock_pane_t1_ParamLimits

0xd27a,	// (0x0007719f) main_fs_bigclock_pane_t1

0xd28c,	// (0x000771b1) main_fs_bigclock_pane_t2_ParamLimits

0xd28c,	// (0x000771b1) main_fs_bigclock_pane_t2

0xd2a0,	// (0x000771c5) main_fs_bigclock_pane_t3_ParamLimits

0xd2a0,	// (0x000771c5) main_fs_bigclock_pane_t3

0x0002,

0xfcec,	// (0x00079c11) main_fs_bigclock_pane_t_ParamLimits

0xfcec,	// (0x00079c11) main_fs_bigclock_pane_t

0x160e,	// (0x0006b533) main_fs_bigclock_indicator_pane_g1

0x0b07,	// (0x0006aa2c) ncim_query_content_pane_g2_ParamLimits

0x0b07,	// (0x0006aa2c) ncim_query_content_pane_g2

0x0001,

0xfaf6,	// (0x00079a1b) ncim_query_content_pane_g_ParamLimits

0xfaf6,	// (0x00079a1b) ncim_query_content_pane_g

0x21dc,	// (0x0006c101) sc_clock_pane_t4_ParamLimits

0x21dc,	// (0x0006c101) sc_clock_pane_t4

0x2119,	// (0x0006c03e) main_radioblah_pane

0xacc1,	// (0x00074be6) cell_call4_button_pane_t1_copy1_ParamLimits

0xacc1,	// (0x00074be6) cell_call4_button_pane_t1_copy1

0xc7a3,	// (0x000766c8) main_ncimui_pane_t1_ParamLimits

0xc7a3,	// (0x000766c8) main_ncimui_pane_t1

0xc7bd,	// (0x000766e2) main_ncimui_pane_t2_ParamLimits

0xc7bd,	// (0x000766e2) main_ncimui_pane_t2

0x0002,

0xfaef,	// (0x00079a14) main_ncimui_pane_t_ParamLimits

0xfaef,	// (0x00079a14) main_ncimui_pane_t

0x3446,	// (0x0006d36b) main_radioblah_anim_pane_ParamLimits

0x3446,	// (0x0006d36b) main_radioblah_anim_pane

0x3446,	// (0x0006d36b) main_radioblah_info_pane_ParamLimits

0x3446,	// (0x0006d36b) main_radioblah_info_pane

0x3432,	// (0x0006d357) main_radioblah_pane_t1_ParamLimits

0x3432,	// (0x0006d357) main_radioblah_pane_t1

0x3432,	// (0x0006d357) main_radioblah_pane_t2_ParamLimits

0x3432,	// (0x0006d357) main_radioblah_pane_t2

0x0003,

0xfb8a,	// (0x00079aaf) main_radioblah_pane_t_ParamLimits

0xfb8a,	// (0x00079aaf) main_radioblah_pane_t

0x2172,	// (0x0006c097) main_radioblah_rocker_ctrl_pane_ParamLimits

0x2172,	// (0x0006c097) main_radioblah_rocker_ctrl_pane

0x48a4,	// (0x0006e7c9) main_radioblah_info_pane_t1_ParamLimits

0x48a4,	// (0x0006e7c9) main_radioblah_info_pane_t1

0x0f5e,	// (0x0006ae83) main_radioblah_info_pane_t2_ParamLimits

0x0f5e,	// (0x0006ae83) main_radioblah_info_pane_t2

0x0003,

0xfb93,	// (0x00079ab8) main_radioblah_info_pane_t_ParamLimits

0xfb93,	// (0x00079ab8) main_radioblah_info_pane_t

0x21be,	// (0x0006c0e3) main_radioblah_rocker_ctrl_pane_g1

0x21be,	// (0x0006c0e3) main_radioblah_rocker_ctrl_pane_g2

0x21be,	// (0x0006c0e3) main_radioblah_rocker_ctrl_pane_g3

0x21be,	// (0x0006c0e3) main_radioblah_rocker_ctrl_pane_g4

0x21be,	// (0x0006c0e3) main_radioblah_rocker_ctrl_pane_g5

0x21be,	// (0x0006c0e3) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfb9c,	// (0x00079ac1) main_radioblah_rocker_ctrl_pane_g

0xc749,	// (0x0007666e) main_cset_text2_pane_t1_copy1_ParamLimits

0xad34,	// (0x00074c59) cam4_image_uncrop_qvga_pane

0xae75,	// (0x00074d9a) vid4_image_uncrop_qcif_pane

0xc30f,	// (0x00076234) cam6_image_uncrop_qvga_pane_ParamLimits

0xc30f,	// (0x00076234) cam6_image_uncrop_qvga_pane

0x07f9,	// (0x0006a71e) vid6_image_uncrop_qcif_pane_ParamLimits

0x07f9,	// (0x0006a71e) vid6_image_uncrop_qcif_pane

0x1a59,	// (0x0006b97e) bg_popup_preview_window_pane_cp03

0x0ab9,	// (0x0006a9de) list_cset_text2_pane

0x0ac1,	// (0x0006a9e6) main_cset6_text2_pane_g1

0x0ac9,	// (0x0006a9ee) main_cset6_text2_pane_t1

0xcb98,	// (0x00076abd) list_cset_text2_pane_t1_ParamLimits

0xcb98,	// (0x00076abd) list_cset_text2_pane_t1

0x2119,	// (0x0006c03e) main_radioblah_pane_ParamLimits

0xcabf,	// (0x000769e4) main_mobtv_info_pane_t3_ParamLimits

0xcabf,	// (0x000769e4) main_mobtv_info_pane_t3

0x3424,	// (0x0006d349) main_radioblah_pane_g1

0x0f2e,	// (0x0006ae53) main_radioblah_info_pane_g1

0x21dc,	// (0x0006c101) main_radioblah_info_pane_t3_ParamLimits

0x21dc,	// (0x0006c101) main_radioblah_info_pane_t3

0x864e,	// (0x00072573) highlight_cell_cale_month_pane_ParamLimits

0x864e,	// (0x00072573) highlight_cell_cale_month_pane

0x1a59,	// (0x0006b97e) main_phob_fisheye_pane

0x4ea2,	// (0x0006edc7) scroll_pane_cp0031_ParamLimits

0x4ea2,	// (0x0006edc7) scroll_pane_cp0031

0x0907,	// (0x0006a82c) wait_bar_pane_cp08_ParamLimits

0xc529,	// (0x0007644e) cset_list_set_pane_copy1_ParamLimits

0x0fc8,	// (0x0006aeed) highlight_cell_cale_month_pane_g1

0xcbb9,	// (0x00076ade) highlight_cell_cale_month_pane_t1

0xefaf,	// (0x00078ed4) list_gen_pane_cp01

0xeb7d,	// (0x00078aa2) scroll_pane_01

0x6144,	// (0x00070069) list_single_double_fisheye_pane

0xcbc7,	// (0x00076aec) list_double_fisheye_pane_g1_ParamLimits

0xcbc7,	// (0x00076aec) list_double_fisheye_pane_g1

0xcbd3,	// (0x00076af8) list_double_fisheye_pane_g2_ParamLimits

0xcbd3,	// (0x00076af8) list_double_fisheye_pane_g2

0xcbe7,	// (0x00076b0c) list_double_fisheye_pane_g3_ParamLimits

0xcbe7,	// (0x00076b0c) list_double_fisheye_pane_g3

0x0004,

0xfba9,	// (0x00079ace) list_double_fisheye_pane_g_ParamLimits

0xfba9,	// (0x00079ace) list_double_fisheye_pane_g

0xcc10,	// (0x00076b35) list_double_fisheye_pane_t1_ParamLimits

0xcc10,	// (0x00076b35) list_double_fisheye_pane_t1

0xcc2b,	// (0x00076b50) list_double_fisheye_pane_t2_ParamLimits

0xcc2b,	// (0x00076b50) list_double_fisheye_pane_t2

0x0001,

0xfbb4,	// (0x00079ad9) list_double_fisheye_pane_t_ParamLimits

0xfbb4,	// (0x00079ad9) list_double_fisheye_pane_t

0x1a59,	// (0x0006b97e) main_call5_pane

0x2172,	// (0x0006c097) sc_swipe_pane_ParamLimits

0x2172,	// (0x0006c097) sc_swipe_pane

0xcc59,	// (0x00076b7e) call5_image_pane_ParamLimits

0xcc59,	// (0x00076b7e) call5_image_pane

0xcc69,	// (0x00076b8e) call5_swipe_1_pane_ParamLimits

0xcc69,	// (0x00076b8e) call5_swipe_1_pane

0xcc75,	// (0x00076b9a) call5_swipe_2_pane_ParamLimits

0xcc75,	// (0x00076b9a) call5_swipe_2_pane

0xcc8f,	// (0x00076bb4) popup_call5_audio_first_window_ParamLimits

0xcc8f,	// (0x00076bb4) popup_call5_audio_first_window

0x2180,	// (0x0006c0a5) call5_swipe_1_pane_g1_ParamLimits

0x2180,	// (0x0006c0a5) call5_swipe_1_pane_g1

0x0fd0,	// (0x0006aef5) call5_swipe_1_pane_g2_ParamLimits

0x0fd0,	// (0x0006aef5) call5_swipe_1_pane_g2

0x0001,

0xfbb9,	// (0x00079ade) call5_swipe_1_pane_g_ParamLimits

0xfbb9,	// (0x00079ade) call5_swipe_1_pane_g

0x0fdc,	// (0x0006af01) call5_swipe_1_pane_t1_ParamLimits

0x0fdc,	// (0x0006af01) call5_swipe_1_pane_t1

0x2180,	// (0x0006c0a5) call5_swipe_2_pane_g1_ParamLimits

0x2180,	// (0x0006c0a5) call5_swipe_2_pane_g1

0x0ff1,	// (0x0006af16) call5_swipe_2_pane_g2_ParamLimits

0x0ff1,	// (0x0006af16) call5_swipe_2_pane_g2

0x0001,

0xfbbe,	// (0x00079ae3) call5_swipe_2_pane_g_ParamLimits

0xfbbe,	// (0x00079ae3) call5_swipe_2_pane_g

0x0ffd,	// (0x0006af22) call5_swipe_2_pane_t1_ParamLimits

0x0ffd,	// (0x0006af22) call5_swipe_2_pane_t1

0x2180,	// (0x0006c0a5) sc_swipe_pane_g1_ParamLimits

0x2180,	// (0x0006c0a5) sc_swipe_pane_g1

0x218e,	// (0x0006c0b3) sc_swipe_pane_g2_ParamLimits

0x218e,	// (0x0006c0b3) sc_swipe_pane_g2

0x0001,

0xfbc3,	// (0x00079ae8) sc_swipe_pane_g_ParamLimits

0xfbc3,	// (0x00079ae8) sc_swipe_pane_g

0x21c8,	// (0x0006c0ed) sc_swipe_pane_t1_ParamLimits

0x21c8,	// (0x0006c0ed) sc_swipe_pane_t1

0x1a59,	// (0x0006b97e) main_cmail_launcher_pane

0xcc9d,	// (0x00076bc2) aid_size_cell_cmail_l_ParamLimits

0xcc9d,	// (0x00076bc2) aid_size_cell_cmail_l

0xccab,	// (0x00076bd0) grid_cmail_l_pane_ParamLimits

0xccab,	// (0x00076bd0) grid_cmail_l_pane

0xccbb,	// (0x00076be0) cell_cmail_l_pane_ParamLimits

0xccbb,	// (0x00076be0) cell_cmail_l_pane

0x1012,	// (0x0006af37) cell_cmail_l_pane_g1_ParamLimits

0x1012,	// (0x0006af37) cell_cmail_l_pane_g1

0x101e,	// (0x0006af43) cell_cmail_l_pane_t1_ParamLimits

0x101e,	// (0x0006af43) cell_cmail_l_pane_t1

0x1034,	// (0x0006af59) cell_cmail_l_pane_t2_ParamLimits

0x1034,	// (0x0006af59) cell_cmail_l_pane_t2

0x0001,

0xfbc8,	// (0x00079aed) cell_cmail_l_pane_t_ParamLimits

0xfbc8,	// (0x00079aed) cell_cmail_l_pane_t

0x2119,	// (0x0006c03e) grid_highlight_pane_cp018_ParamLimits

0x2119,	// (0x0006c03e) grid_highlight_pane_cp018

0x69fb,	// (0x00070920) main2_pane_ParamLimits

0x69fb,	// (0x00070920) main2_pane

0x22ab,	// (0x0006c1d0) popup_sp_fs_action_menu_bg_pane_g1

0x22b3,	// (0x0006c1d8) popup_sp_fs_action_menu_bg_pane_g2

0x22bb,	// (0x0006c1e0) popup_sp_fs_action_menu_bg_pane_g3

0x22cc,	// (0x0006c1f1) popup_sp_fs_action_menu_bg_pane_g4

0x22d4,	// (0x0006c1f9) popup_sp_fs_action_menu_bg_pane_g5

0x22dc,	// (0x0006c201) popup_sp_fs_action_menu_bg_pane_g6

0x22e4,	// (0x0006c209) popup_sp_fs_action_menu_bg_pane_g7

0x22ec,	// (0x0006c211) popup_sp_fs_action_menu_bg_pane_g8

0x22f4,	// (0x0006c219) popup_sp_fs_action_menu_bg_pane_g9

0x26ed,	// (0x0006c612) popup_sp_fs_action_menu_bg_pane_g10

0x26ed,	// (0x0006c612) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf0dd,	// (0x00079002) popup_sp_fs_action_menu_bg_pane_g

0x2180,	// (0x0006c0a5) list_medium_line_x2_t3_g3_g1_ParamLimits

0x2180,	// (0x0006c0a5) list_medium_line_x2_t3_g3_g1

0x2180,	// (0x0006c0a5) list_medium_line_x2_t3_g3_g2_ParamLimits

0x2180,	// (0x0006c0a5) list_medium_line_x2_t3_g3_g2

0x2180,	// (0x0006c0a5) list_medium_line_x2_t3_g3_g3_ParamLimits

0x2180,	// (0x0006c0a5) list_medium_line_x2_t3_g3_g3

0x0002,

0xf18b,	// (0x000790b0) list_medium_line_x2_t3_g3_g_ParamLimits

0xf18b,	// (0x000790b0) list_medium_line_x2_t3_g3_g

0x21c8,	// (0x0006c0ed) list_medium_line_x2_t3_g3_t1_ParamLimits

0x21c8,	// (0x0006c0ed) list_medium_line_x2_t3_g3_t1

0x21c8,	// (0x0006c0ed) list_medium_line_x2_t3_g3_t2_ParamLimits

0x21c8,	// (0x0006c0ed) list_medium_line_x2_t3_g3_t2

0x21c8,	// (0x0006c0ed) list_medium_line_x2_t3_g3_t3_ParamLimits

0x21c8,	// (0x0006c0ed) list_medium_line_x2_t3_g3_t3

0x0002,

0xf192,	// (0x000790b7) list_medium_line_x2_t3_g3_t_ParamLimits

0xf192,	// (0x000790b7) list_medium_line_x2_t3_g3_t

0x2180,	// (0x0006c0a5) list_medium_line_x2_t3_g2_g1_ParamLimits

0x2180,	// (0x0006c0a5) list_medium_line_x2_t3_g2_g1

0x2180,	// (0x0006c0a5) list_medium_line_x2_t3_g2_g2_ParamLimits

0x2180,	// (0x0006c0a5) list_medium_line_x2_t3_g2_g2

0x0001,

0xf199,	// (0x000790be) list_medium_line_x2_t3_g2_g_ParamLimits

0xf199,	// (0x000790be) list_medium_line_x2_t3_g2_g

0x21c8,	// (0x0006c0ed) list_medium_line_x2_t3_g2_t1_ParamLimits

0x21c8,	// (0x0006c0ed) list_medium_line_x2_t3_g2_t1

0x21c8,	// (0x0006c0ed) list_medium_line_x2_t3_g2_t2_ParamLimits

0x21c8,	// (0x0006c0ed) list_medium_line_x2_t3_g2_t2

0x21c8,	// (0x0006c0ed) list_medium_line_x2_t3_g2_t3_ParamLimits

0x21c8,	// (0x0006c0ed) list_medium_line_x2_t3_g2_t3

0x0002,

0xf192,	// (0x000790b7) list_medium_line_x2_t3_g2_t_ParamLimits

0xf192,	// (0x000790b7) list_medium_line_x2_t3_g2_t

0x2180,	// (0x0006c0a5) list_medium_line_x2_t4_g4_g1_ParamLimits

0x2180,	// (0x0006c0a5) list_medium_line_x2_t4_g4_g1

0x2180,	// (0x0006c0a5) list_medium_line_x2_t4_g4_g2_ParamLimits

0x2180,	// (0x0006c0a5) list_medium_line_x2_t4_g4_g2

0x2180,	// (0x0006c0a5) list_medium_line_x2_t4_g4_g3_ParamLimits

0x2180,	// (0x0006c0a5) list_medium_line_x2_t4_g4_g3

0x2180,	// (0x0006c0a5) list_medium_line_x2_t4_g4_g4_ParamLimits

0x2180,	// (0x0006c0a5) list_medium_line_x2_t4_g4_g4

0x0003,

0xf19e,	// (0x000790c3) list_medium_line_x2_t4_g4_g_ParamLimits

0xf19e,	// (0x000790c3) list_medium_line_x2_t4_g4_g

0x21c8,	// (0x0006c0ed) list_medium_line_x2_t4_g4_t1_ParamLimits

0x21c8,	// (0x0006c0ed) list_medium_line_x2_t4_g4_t1

0x21c8,	// (0x0006c0ed) list_medium_line_x2_t4_g4_t2_ParamLimits

0x21c8,	// (0x0006c0ed) list_medium_line_x2_t4_g4_t2

0x21c8,	// (0x0006c0ed) list_medium_line_x2_t4_g4_t3_ParamLimits

0x21c8,	// (0x0006c0ed) list_medium_line_x2_t4_g4_t3

0x21c8,	// (0x0006c0ed) list_medium_line_x2_t4_g4_t4_ParamLimits

0x21c8,	// (0x0006c0ed) list_medium_line_x2_t4_g4_t4

0x0003,

0xf1a7,	// (0x000790cc) list_medium_line_x2_t4_g4_t_ParamLimits

0xf1a7,	// (0x000790cc) list_medium_line_x2_t4_g4_t

0x2180,	// (0x0006c0a5) list_medium_line_x2_t2_g4_g1_ParamLimits

0x2180,	// (0x0006c0a5) list_medium_line_x2_t2_g4_g1

0x2180,	// (0x0006c0a5) list_medium_line_x2_t2_g4_g2_ParamLimits

0x2180,	// (0x0006c0a5) list_medium_line_x2_t2_g4_g2

0x2180,	// (0x0006c0a5) list_medium_line_x2_t2_g4_g3_ParamLimits

0x2180,	// (0x0006c0a5) list_medium_line_x2_t2_g4_g3

0x2180,	// (0x0006c0a5) list_medium_line_x2_t2_g4_g4_ParamLimits

0x2180,	// (0x0006c0a5) list_medium_line_x2_t2_g4_g4

0x0003,

0xf19e,	// (0x000790c3) list_medium_line_x2_t2_g4_g_ParamLimits

0xf19e,	// (0x000790c3) list_medium_line_x2_t2_g4_g

0x21c8,	// (0x0006c0ed) list_medium_line_x2_t2_g4_t1_ParamLimits

0x21c8,	// (0x0006c0ed) list_medium_line_x2_t2_g4_t1

0x21c8,	// (0x0006c0ed) list_medium_line_x2_t2_g4_t2_ParamLimits

0x21c8,	// (0x0006c0ed) list_medium_line_x2_t2_g4_t2

0x0001,

0xf20e,	// (0x00079133) list_medium_line_x2_t2_g4_t_ParamLimits

0xf20e,	// (0x00079133) list_medium_line_x2_t2_g4_t

0x2180,	// (0x0006c0a5) list_medium_line_x2_t2_g3_g1_ParamLimits

0x2180,	// (0x0006c0a5) list_medium_line_x2_t2_g3_g1

0x2180,	// (0x0006c0a5) list_medium_line_x2_t2_g3_g2_ParamLimits

0x2180,	// (0x0006c0a5) list_medium_line_x2_t2_g3_g2

0x2180,	// (0x0006c0a5) list_medium_line_x2_t2_g3_g3_ParamLimits

0x2180,	// (0x0006c0a5) list_medium_line_x2_t2_g3_g3

0x0002,

0xf18b,	// (0x000790b0) list_medium_line_x2_t2_g3_g_ParamLimits

0xf18b,	// (0x000790b0) list_medium_line_x2_t2_g3_g

0x21c8,	// (0x0006c0ed) list_medium_line_x2_t2_g3_t1_ParamLimits

0x21c8,	// (0x0006c0ed) list_medium_line_x2_t2_g3_t1

0x21c8,	// (0x0006c0ed) list_medium_line_x2_t2_g3_t2_ParamLimits

0x21c8,	// (0x0006c0ed) list_medium_line_x2_t2_g3_t2

0x0001,

0xf20e,	// (0x00079133) list_medium_line_x2_t2_g3_t_ParamLimits

0xf20e,	// (0x00079133) list_medium_line_x2_t2_g3_t

0x882f,	// (0x00072754) main_sp_fs_list_pane_ParamLimits

0x882f,	// (0x00072754) main_sp_fs_list_pane

0x883b,	// (0x00072760) sp_fs_scroll_pane_ParamLimits

0x883b,	// (0x00072760) sp_fs_scroll_pane

0x2eaa,	// (0x0006cdcf) list_medium_line_x2_t3_t1

0x2eaa,	// (0x0006cdcf) list_medium_line_x2_t3_t2

0x2eaa,	// (0x0006cdcf) list_medium_line_x2_t3_t3

0x0002,

0xf259,	// (0x0007917e) list_medium_line_x2_t3_t

0x2eaa,	// (0x0006cdcf) list_medium_line_x3_t4_t1

0x2eaa,	// (0x0006cdcf) list_medium_line_x3_t4_t2

0x2eaa,	// (0x0006cdcf) list_medium_line_x3_t4_t3

0x2eaa,	// (0x0006cdcf) list_medium_line_x3_t4_t4

0x0003,

0xf260,	// (0x00079185) list_medium_line_x3_t4_t

0x2eaa,	// (0x0006cdcf) list_medium_line_x4_t5_t1

0x2eaa,	// (0x0006cdcf) list_medium_line_x4_t5_t2

0x2eaa,	// (0x0006cdcf) list_medium_line_x4_t5_t3

0x2eaa,	// (0x0006cdcf) list_medium_line_x4_t5_t4

0x2eaa,	// (0x0006cdcf) list_medium_line_x4_t5_t5

0x0004,

0xf269,	// (0x0007918e) list_medium_line_x4_t5_t

0x2180,	// (0x0006c0a5) list_medium_line_t4_g4_g1_ParamLimits

0x2180,	// (0x0006c0a5) list_medium_line_t4_g4_g1

0x2180,	// (0x0006c0a5) list_medium_line_t4_g4_g2_ParamLimits

0x2180,	// (0x0006c0a5) list_medium_line_t4_g4_g2

0x2180,	// (0x0006c0a5) list_medium_line_t4_g4_g3_ParamLimits

0x2180,	// (0x0006c0a5) list_medium_line_t4_g4_g3

0x2180,	// (0x0006c0a5) list_medium_line_t4_g4_g4_ParamLimits

0x2180,	// (0x0006c0a5) list_medium_line_t4_g4_g4

0x0003,

0xf19e,	// (0x000790c3) list_medium_line_t4_g4_g_ParamLimits

0xf19e,	// (0x000790c3) list_medium_line_t4_g4_g

0x21c8,	// (0x0006c0ed) list_medium_line_t4_g4_t1_ParamLimits

0x21c8,	// (0x0006c0ed) list_medium_line_t4_g4_t1

0x21c8,	// (0x0006c0ed) list_medium_line_t4_g4_t2_ParamLimits

0x21c8,	// (0x0006c0ed) list_medium_line_t4_g4_t2

0x21c8,	// (0x0006c0ed) list_medium_line_t4_g4_t3_ParamLimits

0x21c8,	// (0x0006c0ed) list_medium_line_t4_g4_t3

0x21c8,	// (0x0006c0ed) list_medium_line_t4_g4_t4_ParamLimits

0x21c8,	// (0x0006c0ed) list_medium_line_t4_g4_t4

0x0003,

0xf1a7,	// (0x000790cc) list_medium_line_t4_g4_t_ParamLimits

0xf1a7,	// (0x000790cc) list_medium_line_t4_g4_t

0x892e,	// (0x00072853) chi_dic_find_pane_g1

0x9522,	// (0x00073447) main_tport_pane

0x2eaa,	// (0x0006cdcf) list_medium_line_plain_t1

0x2180,	// (0x0006c0a5) list_medium_line_t2_g2_g1_ParamLimits

0x2180,	// (0x0006c0a5) list_medium_line_t2_g2_g1

0x2180,	// (0x0006c0a5) list_medium_line_t2_g2_g2_ParamLimits

0x2180,	// (0x0006c0a5) list_medium_line_t2_g2_g2

0x0001,

0xf199,	// (0x000790be) list_medium_line_t2_g2_g_ParamLimits

0xf199,	// (0x000790be) list_medium_line_t2_g2_g

0x21c8,	// (0x0006c0ed) list_medium_line_t2_g2_t1_ParamLimits

0x21c8,	// (0x0006c0ed) list_medium_line_t2_g2_t1

0x21c8,	// (0x0006c0ed) list_medium_line_t2_g2_t2_ParamLimits

0x21c8,	// (0x0006c0ed) list_medium_line_t2_g2_t2

0x0001,

0xf20e,	// (0x00079133) list_medium_line_t2_g2_t_ParamLimits

0xf20e,	// (0x00079133) list_medium_line_t2_g2_t

0x60de,	// (0x00070003) aid_sp_fs_list_icon_a_sm

0xc003,	// (0x00075f28) aid_sp_fs_list_icon_d

0x60e6,	// (0x0007000b) aid_sp_fs_text_primary

0xefb8,	// (0x00078edd) aid_sp_fs_text_secondary

0x1a59,	// (0x0006b97e) list_medium_line

0x1a59,	// (0x0006b97e) list_medium_line_g2

0x1a59,	// (0x0006b97e) list_medium_line_g3

0x1a59,	// (0x0006b97e) list_medium_line_plain

0x1a59,	// (0x0006b97e) list_medium_line_plain_t2

0x1a59,	// (0x0006b97e) list_medium_line_plain_t3

0x1a59,	// (0x0006b97e) list_medium_line_right_icon

0x1a59,	// (0x0006b97e) list_medium_line_right_iconx2

0x1a59,	// (0x0006b97e) list_medium_line_t2

0x1a59,	// (0x0006b97e) list_medium_line_t2_g2

0x1a59,	// (0x0006b97e) list_medium_line_t2_g3

0x1a59,	// (0x0006b97e) list_medium_line_t2_right_icon

0x1a59,	// (0x0006b97e) list_medium_line_t2_right_iconx2

0x1a59,	// (0x0006b97e) list_medium_line_t3

0x1a59,	// (0x0006b97e) list_medium_line_t3_g2

0x1a59,	// (0x0006b97e) list_medium_line_t3_g3

0x1a59,	// (0x0006b97e) list_medium_line_t3_right_iconx2

0x1a59,	// (0x0006b97e) list_medium_line_t4_g4

0x1a59,	// (0x0006b97e) list_medium_line_x2

0x1a59,	// (0x0006b97e) list_medium_line_x2_t2_g2

0x1a59,	// (0x0006b97e) list_medium_line_x2_t2_g3

0x1a59,	// (0x0006b97e) list_medium_line_x2_t2_g4

0x1a59,	// (0x0006b97e) list_medium_line_x2_t3

0x1a59,	// (0x0006b97e) list_medium_line_x2_t3_g2

0x1a59,	// (0x0006b97e) list_medium_line_x2_t3_g3

0x1a59,	// (0x0006b97e) list_medium_line_x2_t3_g4

0x1a59,	// (0x0006b97e) list_medium_line_x2_t4_g2

0x1a59,	// (0x0006b97e) list_medium_line_x2_t4_g4

0x1a59,	// (0x0006b97e) list_medium_line_x3

0x1a59,	// (0x0006b97e) list_medium_line_x3_t4

0x1a59,	// (0x0006b97e) list_medium_line_x3_t4_g4

0x1a59,	// (0x0006b97e) list_medium_line_x4_t4

0x1a59,	// (0x0006b97e) list_medium_line_x4_t4_g7

0x1a59,	// (0x0006b97e) list_medium_line_x4_t5

0x60ef,	// (0x00070014) list_single_fs_dyc_pane_ParamLimits

0x60ef,	// (0x00070014) list_single_fs_dyc_pane

0x2180,	// (0x0006c0a5) list_medium_line_x4_t4_g7_g1_ParamLimits

0x2180,	// (0x0006c0a5) list_medium_line_x4_t4_g7_g1

0x2180,	// (0x0006c0a5) list_medium_line_x4_t4_g7_g2_ParamLimits

0x2180,	// (0x0006c0a5) list_medium_line_x4_t4_g7_g2

0x2180,	// (0x0006c0a5) list_medium_line_x4_t4_g7_g3_ParamLimits

0x2180,	// (0x0006c0a5) list_medium_line_x4_t4_g7_g3

0x2180,	// (0x0006c0a5) list_medium_line_x4_t4_g7_g4_ParamLimits

0x2180,	// (0x0006c0a5) list_medium_line_x4_t4_g7_g4

0x2180,	// (0x0006c0a5) list_medium_line_x4_t4_g7_g5_ParamLimits

0x2180,	// (0x0006c0a5) list_medium_line_x4_t4_g7_g5

0x2180,	// (0x0006c0a5) list_medium_line_x4_t4_g7_g6_ParamLimits

0x2180,	// (0x0006c0a5) list_medium_line_x4_t4_g7_g6

0x218e,	// (0x0006c0b3) list_medium_line_x4_t4_g7_g7_ParamLimits

0x218e,	// (0x0006c0b3) list_medium_line_x4_t4_g7_g7

0x0006,

0xfad0,	// (0x000799f5) list_medium_line_x4_t4_g7_g_ParamLimits

0xfad0,	// (0x000799f5) list_medium_line_x4_t4_g7_g

0x21c8,	// (0x0006c0ed) list_medium_line_x4_t4_g7_t1_ParamLimits

0x21c8,	// (0x0006c0ed) list_medium_line_x4_t4_g7_t1

0x21c8,	// (0x0006c0ed) list_medium_line_x4_t4_g7_t2_ParamLimits

0x21c8,	// (0x0006c0ed) list_medium_line_x4_t4_g7_t2

0x21c8,	// (0x0006c0ed) list_medium_line_x4_t4_g7_t3_ParamLimits

0x21c8,	// (0x0006c0ed) list_medium_line_x4_t4_g7_t3

0x21dc,	// (0x0006c101) list_medium_line_x4_t4_g7_t4_ParamLimits

0x21dc,	// (0x0006c101) list_medium_line_x4_t4_g7_t4

0x21dc,	// (0x0006c101) list_medium_line_x4_t4_g7_t5_ParamLimits

0x21dc,	// (0x0006c101) list_medium_line_x4_t4_g7_t5

0x0004,

0xfadf,	// (0x00079a04) list_medium_line_x4_t4_g7_t_ParamLimits

0xfadf,	// (0x00079a04) list_medium_line_x4_t4_g7_t

0x6127,	// (0x0007004c) list_single_dyc_row_pane_ParamLimits

0x6127,	// (0x0007004c) list_single_dyc_row_pane

0xcc4d,	// (0x00076b72) call5_gesture_pane_ParamLimits

0xcc4d,	// (0x00076b72) call5_gesture_pane

0xcc81,	// (0x00076ba6) call5_windows_pane_ParamLimits

0xcc81,	// (0x00076ba6) call5_windows_pane

0xccd4,	// (0x00076bf9) call5_swipe_1_pane_cp_ParamLimits

0xccd4,	// (0x00076bf9) call5_swipe_1_pane_cp

0xcce0,	// (0x00076c05) call5_swipe_2_pane_cp_ParamLimits

0xcce0,	// (0x00076c05) call5_swipe_2_pane_cp

0x2807,	// (0x0006c72c) call5_image_pane_cp

0xccec,	// (0x00076c11) popup_call5_audio_first_window_cp_ParamLimits

0xccec,	// (0x00076c11) popup_call5_audio_first_window_cp

0x1051,	// (0x0006af76) call5_swipe_1_pane_g1_cp_ParamLimits

0x1051,	// (0x0006af76) call5_swipe_1_pane_g1_cp

0x105e,	// (0x0006af83) call5_swipe_1_pane_g2_cp

0x1066,	// (0x0006af8b) call5_swipe_1_pane_t1_cp_ParamLimits

0x1066,	// (0x0006af8b) call5_swipe_1_pane_t1_cp

0x1051,	// (0x0006af76) call5_swipe_2_pane_g1_cp_ParamLimits

0x1051,	// (0x0006af76) call5_swipe_2_pane_g1_cp

0x107b,	// (0x0006afa0) call5_swipe_2_pane_g2_cp

0x1083,	// (0x0006afa8) call5_swipe_2_pane_t1_cp_ParamLimits

0x1083,	// (0x0006afa8) call5_swipe_2_pane_t1_cp

0x2119,	// (0x0006c03e) main_sp_fs_email_pane

0x1098,	// (0x0006afbd) main_sp_fs_listscroll_pane_te

0xccfa,	// (0x00076c1f) popup_sp_fs_action_menu_pane_ParamLimits

0xccfa,	// (0x00076c1f) popup_sp_fs_action_menu_pane

0x21be,	// (0x0006c0e3) bg_sp_fs_ctrlbar_pane_g1

0x10a1,	// (0x0006afc6) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x10aa,	// (0x0006afcf) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x469e,	// (0x0006e5c3) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x21be,	// (0x0006c0e3) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfbcd,	// (0x00079af2) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x4888,	// (0x0006e7ad) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x4888,	// (0x0006e7ad) bg_sp_fs_ctrlbar_ddmenu_pane

0x10b3,	// (0x0006afd8) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x10b3,	// (0x0006afd8) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x10bf,	// (0x0006afe4) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x10bf,	// (0x0006afe4) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfbd6,	// (0x00079afb) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfbd6,	// (0x00079afb) main_sp_fs_ctrlbar_ddmenu_pane_g

0x10cb,	// (0x0006aff0) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x10cb,	// (0x0006aff0) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x21be,	// (0x0006c0e3) list_medium_line_t2_right_icon_g1

0x2eaa,	// (0x0006cdcf) list_medium_line_t2_right_icon_t1

0x2eaa,	// (0x0006cdcf) list_medium_line_t2_right_icon_t2

0x0001,

0xfbdb,	// (0x00079b00) list_medium_line_t2_right_icon_t

0x3446,	// (0x0006d36b) bg_sp_fs_ctrlbar_pane_ParamLimits

0x3446,	// (0x0006d36b) bg_sp_fs_ctrlbar_pane

0xcd81,	// (0x00076ca6) main_sp_fs_ctrlbar_button_pane_cp01

0xcd89,	// (0x00076cae) main_sp_fs_ctrlbar_ddmenu_pane

0x111d,	// (0x0006b042) main_sp_fs_ctrlbar_pane_g1

0x1129,	// (0x0006b04e) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfbe0,	// (0x00079b05) main_sp_fs_ctrlbar_pane_g

0xcdc5,	// (0x00076cea) main_sp_fs_ctrlbar_pane_t1

0xce00,	// (0x00076d25) main_sp_fs_ctrlbar_pane

0xce16,	// (0x00076d3b) main_sp_fs_listscroll_pane_te_cp01

0x614d,	// (0x00070072) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x614d,	// (0x00070072) popup_sp_fs_action_menu_pane_cp01

0x2119,	// (0x0006c03e) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x2119,	// (0x0006c03e) bg_sp_fs_highlight_list_pane_cp01

0x616d,	// (0x00070092) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x616d,	// (0x00070092) sp_fs_action_menu_list_gene_pane_g1

0x1150,	// (0x0006b075) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x1150,	// (0x0006b075) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfbee,	// (0x00079b13) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfbee,	// (0x00079b13) sp_fs_action_menu_list_gene_pane_g

0x617c,	// (0x000700a1) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x617c,	// (0x000700a1) sp_fs_action_menu_list_gene_pane_t1

0x6194,	// (0x000700b9) sp_fs_action_menu_list_gene_pane_ParamLimits

0x6194,	// (0x000700b9) sp_fs_action_menu_list_gene_pane

0x115d,	// (0x0006b082) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x115d,	// (0x0006b082) popup_sp_fs_action_menu_bg_pane

0x61b3,	// (0x000700d8) sp_fs_action_menu_list_pane_ParamLimits

0x61b3,	// (0x000700d8) sp_fs_action_menu_list_pane

0xce31,	// (0x00076d56) sp_fs_scroll_pane_cp01_ParamLimits

0xce31,	// (0x00076d56) sp_fs_scroll_pane_cp01

0x2eaa,	// (0x0006cdcf) list_medium_line_plain_t2_t1

0x2eaa,	// (0x0006cdcf) list_medium_line_plain_t2_t2

0x0001,

0xfbdb,	// (0x00079b00) list_medium_line_plain_t2_t

0x2eaa,	// (0x0006cdcf) list_medium_line_plain_t3_t1

0x2eaa,	// (0x0006cdcf) list_medium_line_plain_t3_t2

0x2eaa,	// (0x0006cdcf) list_medium_line_plain_t3_t3

0x0002,

0xf259,	// (0x0007917e) list_medium_line_plain_t3_t

0x2180,	// (0x0006c0a5) list_medium_line_x2_t2_g2_g1_ParamLimits

0x2180,	// (0x0006c0a5) list_medium_line_x2_t2_g2_g1

0x2180,	// (0x0006c0a5) list_medium_line_x2_t2_g2_g2_ParamLimits

0x2180,	// (0x0006c0a5) list_medium_line_x2_t2_g2_g2

0x0001,

0xf199,	// (0x000790be) list_medium_line_x2_t2_g2_g_ParamLimits

0xf199,	// (0x000790be) list_medium_line_x2_t2_g2_g

0x21c8,	// (0x0006c0ed) list_medium_line_x2_t2_g2_t1_ParamLimits

0x21c8,	// (0x0006c0ed) list_medium_line_x2_t2_g2_t1

0x21c8,	// (0x0006c0ed) list_medium_line_x2_t2_g2_t2_ParamLimits

0x21c8,	// (0x0006c0ed) list_medium_line_x2_t2_g2_t2

0x0001,

0xf20e,	// (0x00079133) list_medium_line_x2_t2_g2_t_ParamLimits

0xf20e,	// (0x00079133) list_medium_line_x2_t2_g2_t

0x2180,	// (0x0006c0a5) list_medium_line_x2_t4_g2_g1_ParamLimits

0x2180,	// (0x0006c0a5) list_medium_line_x2_t4_g2_g1

0x2180,	// (0x0006c0a5) list_medium_line_x2_t4_g2_g2_ParamLimits

0x2180,	// (0x0006c0a5) list_medium_line_x2_t4_g2_g2

0x0001,

0xf199,	// (0x000790be) list_medium_line_x2_t4_g2_g_ParamLimits

0xf199,	// (0x000790be) list_medium_line_x2_t4_g2_g

0x21c8,	// (0x0006c0ed) list_medium_line_x2_t4_g2_t1_ParamLimits

0x21c8,	// (0x0006c0ed) list_medium_line_x2_t4_g2_t1

0x21c8,	// (0x0006c0ed) list_medium_line_x2_t4_g2_t2_ParamLimits

0x21c8,	// (0x0006c0ed) list_medium_line_x2_t4_g2_t2

0x21c8,	// (0x0006c0ed) list_medium_line_x2_t4_g2_t3_ParamLimits

0x21c8,	// (0x0006c0ed) list_medium_line_x2_t4_g2_t3

0x21c8,	// (0x0006c0ed) list_medium_line_x2_t4_g2_t4_ParamLimits

0x21c8,	// (0x0006c0ed) list_medium_line_x2_t4_g2_t4

0x0003,

0xf1a7,	// (0x000790cc) list_medium_line_x2_t4_g2_t_ParamLimits

0xf1a7,	// (0x000790cc) list_medium_line_x2_t4_g2_t

0x21be,	// (0x0006c0e3) list_medium_line_t3_right_iconx2_g1

0x21be,	// (0x0006c0e3) list_medium_line_t3_right_iconx2_g2

0x21be,	// (0x0006c0e3) list_medium_line_t3_right_iconx2_g3

0x0002,

0xf375,	// (0x0007929a) list_medium_line_t3_right_iconx2_g

0x2eaa,	// (0x0006cdcf) list_medium_line_t3_right_iconx2_t1

0x2eaa,	// (0x0006cdcf) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfbdb,	// (0x00079b00) list_medium_line_t3_right_iconx2_t

0x2180,	// (0x0006c0a5) list_medium_line_x3_t4_g4_g1_ParamLimits

0x2180,	// (0x0006c0a5) list_medium_line_x3_t4_g4_g1

0x2180,	// (0x0006c0a5) list_medium_line_x3_t4_g4_g2_ParamLimits

0x2180,	// (0x0006c0a5) list_medium_line_x3_t4_g4_g2

0x2180,	// (0x0006c0a5) list_medium_line_x3_t4_g4_g3_ParamLimits

0x2180,	// (0x0006c0a5) list_medium_line_x3_t4_g4_g3

0x2180,	// (0x0006c0a5) list_medium_line_x3_t4_g4_g4_ParamLimits

0x2180,	// (0x0006c0a5) list_medium_line_x3_t4_g4_g4

0x0003,

0xf19e,	// (0x000790c3) list_medium_line_x3_t4_g4_g_ParamLimits

0xf19e,	// (0x000790c3) list_medium_line_x3_t4_g4_g

0x21c8,	// (0x0006c0ed) list_medium_line_x3_t4_g4_t1_ParamLimits

0x21c8,	// (0x0006c0ed) list_medium_line_x3_t4_g4_t1

0x21c8,	// (0x0006c0ed) list_medium_line_x3_t4_g4_t2_ParamLimits

0x21c8,	// (0x0006c0ed) list_medium_line_x3_t4_g4_t2

0x21c8,	// (0x0006c0ed) list_medium_line_x3_t4_g4_t3_ParamLimits

0x21c8,	// (0x0006c0ed) list_medium_line_x3_t4_g4_t3

0x21c8,	// (0x0006c0ed) list_medium_line_x3_t4_g4_t4_ParamLimits

0x21c8,	// (0x0006c0ed) list_medium_line_x3_t4_g4_t4

0x0003,

0xf1a7,	// (0x000790cc) list_medium_line_x3_t4_g4_t_ParamLimits

0xf1a7,	// (0x000790cc) list_medium_line_x3_t4_g4_t

0x61d3,	// (0x000700f8) list_single_dyc_row_text_pane_t1_ParamLimits

0x61d3,	// (0x000700f8) list_single_dyc_row_text_pane_t1

0x620a,	// (0x0007012f) list_single_dyc_row_text_pane_t2_ParamLimits

0x620a,	// (0x0007012f) list_single_dyc_row_text_pane_t2

0x6280,	// (0x000701a5) list_single_dyc_row_text_pane_t3_ParamLimits

0x6280,	// (0x000701a5) list_single_dyc_row_text_pane_t3

0x0005,

0xfbf3,	// (0x00079b18) list_single_dyc_row_text_pane_t_ParamLimits

0xfbf3,	// (0x00079b18) list_single_dyc_row_text_pane_t

0x6351,	// (0x00070276) list_single_dyc_row_pane_g1_ParamLimits

0x6351,	// (0x00070276) list_single_dyc_row_pane_g1

0x635d,	// (0x00070282) list_single_dyc_row_pane_g2_ParamLimits

0x635d,	// (0x00070282) list_single_dyc_row_pane_g2

0x6369,	// (0x0007028e) list_single_dyc_row_pane_g3_ParamLimits

0x6369,	// (0x0007028e) list_single_dyc_row_pane_g3

0x637c,	// (0x000702a1) list_single_dyc_row_pane_g4_ParamLimits

0x637c,	// (0x000702a1) list_single_dyc_row_pane_g4

0x0006,

0xfc00,	// (0x00079b25) list_single_dyc_row_pane_g_ParamLimits

0xfc00,	// (0x00079b25) list_single_dyc_row_pane_g

0x63ce,	// (0x000702f3) list_single_dyc_row_text_pane_ParamLimits

0x63ce,	// (0x000702f3) list_single_dyc_row_text_pane

0x1a59,	// (0x0006b97e) bg_sp_fs_scroll_pane

0x116b,	// (0x0006b090) thumb_sp_fs_scroll_pane

0x2180,	// (0x0006c0a5) list_medium_line_g1_ParamLimits

0x2180,	// (0x0006c0a5) list_medium_line_g1

0x21c8,	// (0x0006c0ed) list_medium_line_t1_ParamLimits

0x21c8,	// (0x0006c0ed) list_medium_line_t1

0x2180,	// (0x0006c0a5) list_medium_line_x2_g1_ParamLimits

0x2180,	// (0x0006c0a5) list_medium_line_x2_g1

0x2180,	// (0x0006c0a5) list_medium_line_x2_g2_ParamLimits

0x2180,	// (0x0006c0a5) list_medium_line_x2_g2

0x0001,

0xf199,	// (0x000790be) list_medium_line_x2_g_ParamLimits

0xf199,	// (0x000790be) list_medium_line_x2_g

0x21c8,	// (0x0006c0ed) list_medium_line_x2_t1_ParamLimits

0x21c8,	// (0x0006c0ed) list_medium_line_x2_t1

0x2180,	// (0x0006c0a5) list_medium_line_x3_g1_ParamLimits

0x2180,	// (0x0006c0a5) list_medium_line_x3_g1

0x040c,	// (0x0006a331) list_medium_line_x3_g2_ParamLimits

0x040c,	// (0x0006a331) list_medium_line_x3_g2

0x0001,

0xfc0f,	// (0x00079b34) list_medium_line_x3_g_ParamLimits

0xfc0f,	// (0x00079b34) list_medium_line_x3_g

0x1174,	// (0x0006b099) list_medium_line_x3_t1_ParamLimits

0x1174,	// (0x0006b099) list_medium_line_x3_t1

0x1188,	// (0x0006b0ad) thumb_sp_fs_scroll_pane_g1

0x1191,	// (0x0006b0b6) thumb_sp_fs_scroll_pane_g2

0x119a,	// (0x0006b0bf) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfc14,	// (0x00079b39) thumb_sp_fs_scroll_pane_g

0x1188,	// (0x0006b0ad) bg_sp_fs_scroll_pane_g1

0x1191,	// (0x0006b0b6) bg_sp_fs_scroll_pane_g2

0x119a,	// (0x0006b0bf) bg_sp_fs_scroll_pane_g3

0x0002,

0xfc14,	// (0x00079b39) bg_sp_fs_scroll_pane_g

0x2180,	// (0x0006c0a5) list_medium_line_x2_t3_g4_g1_ParamLimits

0x2180,	// (0x0006c0a5) list_medium_line_x2_t3_g4_g1

0x2180,	// (0x0006c0a5) list_medium_line_x2_t3_g4_g2_ParamLimits

0x2180,	// (0x0006c0a5) list_medium_line_x2_t3_g4_g2

0x2180,	// (0x0006c0a5) list_medium_line_x2_t3_g4_g3_ParamLimits

0x2180,	// (0x0006c0a5) list_medium_line_x2_t3_g4_g3

0x2180,	// (0x0006c0a5) list_medium_line_x2_t3_g4_g4_ParamLimits

0x2180,	// (0x0006c0a5) list_medium_line_x2_t3_g4_g4

0x0003,

0xf19e,	// (0x000790c3) list_medium_line_x2_t3_g4_g_ParamLimits

0xf19e,	// (0x000790c3) list_medium_line_x2_t3_g4_g

0x21c8,	// (0x0006c0ed) list_medium_line_x2_t3_g4_t1_ParamLimits

0x21c8,	// (0x0006c0ed) list_medium_line_x2_t3_g4_t1

0x21c8,	// (0x0006c0ed) list_medium_line_x2_t3_g4_t2_ParamLimits

0x21c8,	// (0x0006c0ed) list_medium_line_x2_t3_g4_t2

0x21c8,	// (0x0006c0ed) list_medium_line_x2_t3_g4_t3_ParamLimits

0x21c8,	// (0x0006c0ed) list_medium_line_x2_t3_g4_t3

0x0002,

0xf192,	// (0x000790b7) list_medium_line_x2_t3_g4_t_ParamLimits

0xf192,	// (0x000790b7) list_medium_line_x2_t3_g4_t

0x2180,	// (0x0006c0a5) list_medium_line_g2_g1_ParamLimits

0x2180,	// (0x0006c0a5) list_medium_line_g2_g1

0x2180,	// (0x0006c0a5) list_medium_line_g2_g2_ParamLimits

0x2180,	// (0x0006c0a5) list_medium_line_g2_g2

0x0001,

0xf199,	// (0x000790be) list_medium_line_g2_g_ParamLimits

0xf199,	// (0x000790be) list_medium_line_g2_g

0x21c8,	// (0x0006c0ed) list_medium_line_g2_t1_ParamLimits

0x21c8,	// (0x0006c0ed) list_medium_line_g2_t1

0x2180,	// (0x0006c0a5) list_medium_line_t3_g2_g1_ParamLimits

0x2180,	// (0x0006c0a5) list_medium_line_t3_g2_g1

0x2180,	// (0x0006c0a5) list_medium_line_t3_g2_g2_ParamLimits

0x2180,	// (0x0006c0a5) list_medium_line_t3_g2_g2

0x0001,

0xf199,	// (0x000790be) list_medium_line_t3_g2_g_ParamLimits

0xf199,	// (0x000790be) list_medium_line_t3_g2_g

0x21c8,	// (0x0006c0ed) list_medium_line_t3_g2_t1_ParamLimits

0x21c8,	// (0x0006c0ed) list_medium_line_t3_g2_t1

0x21c8,	// (0x0006c0ed) list_medium_line_t3_g2_t2_ParamLimits

0x21c8,	// (0x0006c0ed) list_medium_line_t3_g2_t2

0x21c8,	// (0x0006c0ed) list_medium_line_t3_g2_t3_ParamLimits

0x21c8,	// (0x0006c0ed) list_medium_line_t3_g2_t3

0x0002,

0xf192,	// (0x000790b7) list_medium_line_t3_g2_t_ParamLimits

0xf192,	// (0x000790b7) list_medium_line_t3_g2_t

0x21be,	// (0x0006c0e3) list_medium_line_right_icon_g1

0x2eaa,	// (0x0006cdcf) list_medium_line_right_icon_t1

0x2180,	// (0x0006c0a5) list_medium_line_t2_g1_ParamLimits

0x2180,	// (0x0006c0a5) list_medium_line_t2_g1

0x21c8,	// (0x0006c0ed) list_medium_line_t2_t1_ParamLimits

0x21c8,	// (0x0006c0ed) list_medium_line_t2_t1

0x21c8,	// (0x0006c0ed) list_medium_line_t2_t2_ParamLimits

0x21c8,	// (0x0006c0ed) list_medium_line_t2_t2

0x0001,

0xf20e,	// (0x00079133) list_medium_line_t2_t_ParamLimits

0xf20e,	// (0x00079133) list_medium_line_t2_t

0x2180,	// (0x0006c0a5) list_medium_line_t3_g1_ParamLimits

0x2180,	// (0x0006c0a5) list_medium_line_t3_g1

0x21c8,	// (0x0006c0ed) list_medium_line_t3_t1_ParamLimits

0x21c8,	// (0x0006c0ed) list_medium_line_t3_t1

0x21c8,	// (0x0006c0ed) list_medium_line_t3_t2_ParamLimits

0x21c8,	// (0x0006c0ed) list_medium_line_t3_t2

0x21c8,	// (0x0006c0ed) list_medium_line_t3_t3_ParamLimits

0x21c8,	// (0x0006c0ed) list_medium_line_t3_t3

0x0002,

0xf192,	// (0x000790b7) list_medium_line_t3_t_ParamLimits

0xf192,	// (0x000790b7) list_medium_line_t3_t

0x2180,	// (0x0006c0a5) list_medium_line_g3_g1_ParamLimits

0x2180,	// (0x0006c0a5) list_medium_line_g3_g1

0x2180,	// (0x0006c0a5) list_medium_line_g3_g2_ParamLimits

0x2180,	// (0x0006c0a5) list_medium_line_g3_g2

0x2180,	// (0x0006c0a5) list_medium_line_g3_g3_ParamLimits

0x2180,	// (0x0006c0a5) list_medium_line_g3_g3

0x0002,

0xf18b,	// (0x000790b0) list_medium_line_g3_g_ParamLimits

0xf18b,	// (0x000790b0) list_medium_line_g3_g

0x21c8,	// (0x0006c0ed) list_medium_line_g3_t1_ParamLimits

0x21c8,	// (0x0006c0ed) list_medium_line_g3_t1

0x2180,	// (0x0006c0a5) list_medium_line_t2_g3_g1_ParamLimits

0x2180,	// (0x0006c0a5) list_medium_line_t2_g3_g1

0x2180,	// (0x0006c0a5) list_medium_line_t2_g3_g2_ParamLimits

0x2180,	// (0x0006c0a5) list_medium_line_t2_g3_g2

0x2180,	// (0x0006c0a5) list_medium_line_t2_g3_g3_ParamLimits

0x2180,	// (0x0006c0a5) list_medium_line_t2_g3_g3

0x0002,

0xf18b,	// (0x000790b0) list_medium_line_t2_g3_g_ParamLimits

0xf18b,	// (0x000790b0) list_medium_line_t2_g3_g

0x21c8,	// (0x0006c0ed) list_medium_line_t2_g3_t1_ParamLimits

0x21c8,	// (0x0006c0ed) list_medium_line_t2_g3_t1

0x21c8,	// (0x0006c0ed) list_medium_line_t2_g3_t2_ParamLimits

0x21c8,	// (0x0006c0ed) list_medium_line_t2_g3_t2

0x0001,

0xf20e,	// (0x00079133) list_medium_line_t2_g3_t_ParamLimits

0xf20e,	// (0x00079133) list_medium_line_t2_g3_t

0x2180,	// (0x0006c0a5) list_medium_line_t3_g3_g1_ParamLimits

0x2180,	// (0x0006c0a5) list_medium_line_t3_g3_g1

0x2180,	// (0x0006c0a5) list_medium_line_t3_g3_g2_ParamLimits

0x2180,	// (0x0006c0a5) list_medium_line_t3_g3_g2

0x2180,	// (0x0006c0a5) list_medium_line_t3_g3_g3_ParamLimits

0x2180,	// (0x0006c0a5) list_medium_line_t3_g3_g3

0x0002,

0xf18b,	// (0x000790b0) list_medium_line_t3_g3_g_ParamLimits

0xf18b,	// (0x000790b0) list_medium_line_t3_g3_g

0x21c8,	// (0x0006c0ed) list_medium_line_t3_g3_t1_ParamLimits

0x21c8,	// (0x0006c0ed) list_medium_line_t3_g3_t1

0x21c8,	// (0x0006c0ed) list_medium_line_t3_g3_t2_ParamLimits

0x21c8,	// (0x0006c0ed) list_medium_line_t3_g3_t2

0x21c8,	// (0x0006c0ed) list_medium_line_t3_g3_t3_ParamLimits

0x21c8,	// (0x0006c0ed) list_medium_line_t3_g3_t3

0x0002,

0xf192,	// (0x000790b7) list_medium_line_t3_g3_t_ParamLimits

0xf192,	// (0x000790b7) list_medium_line_t3_g3_t

0x21be,	// (0x0006c0e3) list_medium_line_right_iconx2_g1

0x21be,	// (0x0006c0e3) list_medium_line_right_iconx2_g2

0x0001,

0xf08c,	// (0x00078fb1) list_medium_line_right_iconx2_g

0x2eaa,	// (0x0006cdcf) list_medium_line_right_iconx2_t1

0x21be,	// (0x0006c0e3) list_medium_line_t2_right_iconx2_g1

0x21be,	// (0x0006c0e3) list_medium_line_t2_right_iconx2_g2

0x0001,

0xf08c,	// (0x00078fb1) list_medium_line_t2_right_iconx2_g

0x2eaa,	// (0x0006cdcf) list_medium_line_t2_right_iconx2_t1

0x2eaa,	// (0x0006cdcf) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfbdb,	// (0x00079b00) list_medium_line_t2_right_iconx2_t

0x2eaa,	// (0x0006cdcf) list_medium_line_x4_t4_t1

0x2eaa,	// (0x0006cdcf) list_medium_line_x4_t4_t2

0x2eaa,	// (0x0006cdcf) list_medium_line_x4_t4_t3

0x2eaa,	// (0x0006cdcf) list_medium_line_x4_t4_t4

0x0003,

0xf260,	// (0x00079185) list_medium_line_x4_t4_t

0xce81,	// (0x00076da6) tport_appsw_pane_ParamLimits

0xce81,	// (0x00076da6) tport_appsw_pane

0xce8f,	// (0x00076db4) tport_contact_pane_ParamLimits

0xce8f,	// (0x00076db4) tport_contact_pane

0xce9f,	// (0x00076dc4) tport_listscroll_pane_ParamLimits

0xce9f,	// (0x00076dc4) tport_listscroll_pane

0xceaf,	// (0x00076dd4) cell_tport_appsw_pane_ParamLimits

0xceaf,	// (0x00076dd4) cell_tport_appsw_pane

0x218e,	// (0x0006c0b3) tport_appsw_pane_g1_ParamLimits

0x218e,	// (0x0006c0b3) tport_appsw_pane_g1

0x11a3,	// (0x0006b0c8) tport_contact_pane_g1

0x11ac,	// (0x0006b0d1) tport_contact_pane_t1

0x11ba,	// (0x0006b0df) tport_contact_pane_t2

0x0001,

0xfc1b,	// (0x00079b40) tport_contact_pane_t

0x11c8,	// (0x0006b0ed) list_tport_pane

0x11d1,	// (0x0006b0f6) scroll_pane_cp_030

0xcee2,	// (0x00076e07) cell_tport_appsw_pane_g1

0xcef2,	// (0x00076e17) cell_tport_appsw_pane_t1

0xcf00,	// (0x00076e25) grid_highlight_pane_cp019

0xcf08,	// (0x00076e2d) list_tport_double_graphic_pane_ParamLimits

0xcf08,	// (0x00076e2d) list_tport_double_graphic_pane

0x2119,	// (0x0006c03e) list_highlight_pane_cp023_ParamLimits

0x2119,	// (0x0006c03e) list_highlight_pane_cp023

0xcf19,	// (0x00076e3e) list_tport_double_graphic_pane_g1_ParamLimits

0xcf19,	// (0x00076e3e) list_tport_double_graphic_pane_g1

0xcf26,	// (0x00076e4b) list_tport_double_graphic_pane_t1_ParamLimits

0xcf26,	// (0x00076e4b) list_tport_double_graphic_pane_t1

0xcf3b,	// (0x00076e60) list_tport_double_graphic_pane_t2_ParamLimits

0xcf3b,	// (0x00076e60) list_tport_double_graphic_pane_t2

0x0001,

0xfc27,	// (0x00079b4c) list_tport_double_graphic_pane_t_ParamLimits

0xfc27,	// (0x00079b4c) list_tport_double_graphic_pane_t

0x1a59,	// (0x0006b97e) main_cale_note_pane

0xb0c6,	// (0x00074feb) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0xb0c6,	// (0x00074feb) cell_vitu2_function_top_wide_pane_cp01

0xcad3,	// (0x000769f8) wait_bar_pane_cp05_ParamLimits

0x2119,	// (0x0006c03e) listscroll_cmail_pane

0x11e2,	// (0x0006b107) list_cmail_pane

0xcf4d,	// (0x00076e72) list_cmail_body_pane

0xcf75,	// (0x00076e9a) list_single_cmail_header_caption_pane

0xcfa4,	// (0x00076ec9) list_single_cmail_header_detail_pane_ParamLimits

0xcfa4,	// (0x00076ec9) list_single_cmail_header_detail_pane

0x11f9,	// (0x0006b11e) list_single_cmail_header_caption_pane_t1

0x63f3,	// (0x00070318) list_single_cmail_header_detail_pane_g1_ParamLimits

0x63f3,	// (0x00070318) list_single_cmail_header_detail_pane_g1

0xcfe1,	// (0x00076f06) list_single_cmail_header_detail_pane_g2_ParamLimits

0xcfe1,	// (0x00076f06) list_single_cmail_header_detail_pane_g2

0x0002,

0xfc2c,	// (0x00079b51) list_single_cmail_header_detail_pane_g_ParamLimits

0xfc2c,	// (0x00079b51) list_single_cmail_header_detail_pane_g

0x6409,	// (0x0007032e) list_single_cmail_header_detail_pane_t1_ParamLimits

0x6409,	// (0x0007032e) list_single_cmail_header_detail_pane_t1

0x6469,	// (0x0007038e) list_single_cmail_header_editor_pane_bg_ParamLimits

0x6469,	// (0x0007038e) list_single_cmail_header_editor_pane_bg

0x0ce9,	// (0x0006ac0e) list_cmail_body_pane_g1

0x121d,	// (0x0006b142) list_cmail_body_pane_t1

0xea3d,	// (0x00078962) list_single_cmail_header_editor_pane_bg_g1

0x2bce,	// (0x0006caf3) list_single_cmail_header_editor_pane_bg_g1_copy1

0xea4d,	// (0x00078972) list_single_cmail_header_editor_pane_bg_g1_copy2

0xea45,	// (0x0007896a) list_single_cmail_header_editor_pane_bg_g1_copy3

0xecac,	// (0x00078bd1) list_single_cmail_header_editor_pane_bg_g1_copy4

0xea6d,	// (0x00078992) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xea5d,	// (0x00078982) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xea65,	// (0x0007898a) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x2bae,	// (0x0006cad3) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xcfed,	// (0x00076f12) calenote_gesture_pane_ParamLimits

0xcfed,	// (0x00076f12) calenote_gesture_pane

0xd007,	// (0x00076f2c) calenote_window_pane_ParamLimits

0xd007,	// (0x00076f2c) calenote_window_pane

0x122b,	// (0x0006b150) popup_note_window_cp01

0xd01f,	// (0x00076f44) calenote_swipe_1_pane_ParamLimits

0xd01f,	// (0x00076f44) calenote_swipe_1_pane

0xcce0,	// (0x00076c05) calenote_swipe_2_pane_ParamLimits

0xcce0,	// (0x00076c05) calenote_swipe_2_pane

0x1051,	// (0x0006af76) calenote_swipe_1_pane_g1_ParamLimits

0x1051,	// (0x0006af76) calenote_swipe_1_pane_g1

0x123d,	// (0x0006b162) calenote_swipe_1_pane_g2_ParamLimits

0x123d,	// (0x0006b162) calenote_swipe_1_pane_g2

0x0001,

0xfc38,	// (0x00079b5d) calenote_swipe_1_pane_g_ParamLimits

0xfc38,	// (0x00079b5d) calenote_swipe_1_pane_g

0x1249,	// (0x0006b16e) calenote_swipe_1_pane_t1_ParamLimits

0x1249,	// (0x0006b16e) calenote_swipe_1_pane_t1

0x1051,	// (0x0006af76) calenote_swipe_2_pane_g1_ParamLimits

0x1051,	// (0x0006af76) calenote_swipe_2_pane_g1

0x1268,	// (0x0006b18d) calenote_swipe_2_pane_g2_ParamLimits

0x1268,	// (0x0006b18d) calenote_swipe_2_pane_g2

0x0001,

0xfc3d,	// (0x00079b62) calenote_swipe_2_pane_g_ParamLimits

0xfc3d,	// (0x00079b62) calenote_swipe_2_pane_g

0x1274,	// (0x0006b199) calenote_swipe_2_pane_t1_ParamLimits

0x1274,	// (0x0006b199) calenote_swipe_2_pane_t1

0x1a59,	// (0x0006b97e) main_mup_navstr_pane

0xa034,	// (0x00073f59) main_mup3_pane_t7_ParamLimits

0xa034,	// (0x00073f59) main_mup3_pane_t7

0xa7dc,	// (0x00074701) main_mp4_pane_g6_ParamLimits

0xa7dc,	// (0x00074701) main_mp4_pane_g6

0xab1f,	// (0x00074a44) main_image3_pane_t4_ParamLimits

0xab1f,	// (0x00074a44) main_image3_pane_t4

0xd032,	// (0x00076f57) popup_navstr_preview_pane_ParamLimits

0xd032,	// (0x00076f57) popup_navstr_preview_pane

0xd03e,	// (0x00076f63) scroll_navstr_pane_ParamLimits

0xd03e,	// (0x00076f63) scroll_navstr_pane

0x1a59,	// (0x0006b97e) bg_popup_preview_window_pane_cp04

0x129b,	// (0x0006b1c0) popup_navstr_preview_pane_t1

0xd04a,	// (0x00076f6f) scroll_navstr_pane_g1_ParamLimits

0xd04a,	// (0x00076f6f) scroll_navstr_pane_g1

0xd057,	// (0x00076f7c) scroll_navstr_pane_t1_ParamLimits

0xd057,	// (0x00076f7c) scroll_navstr_pane_t1

0x1234,	// (0x0006b159) bg_button_pane_cp014

0x1234,	// (0x0006b159) bg_button_pane_cp030

0xcbf3,	// (0x00076b18) list_double_fisheye_pane_g4_ParamLimits

0xcbf3,	// (0x00076b18) list_double_fisheye_pane_g4

0xcbff,	// (0x00076b24) list_double_fisheye_pane_g5_ParamLimits

0xcbff,	// (0x00076b24) list_double_fisheye_pane_g5

0xf011,	// (0x00078f36) sp_fs_scroll_pane_cp03

0x111d,	// (0x0006b042) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x1129,	// (0x0006b04e) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfbe0,	// (0x00079b05) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xcdc5,	// (0x00076cea) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x11f1,	// (0x0006b116) sp_fs_scroll_pane_cp02

0x2758,	// (0x0006c67d) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x2758,	// (0x0006c67d) popup_sp_fs_calendar_preview_list_single_pane

0x1a59,	// (0x0006b97e) main_cam6_pano_pane

0x2119,	// (0x0006c03e) main_mup3_pane_ParamLimits

0x1a59,	// (0x0006b97e) main_phacti_pane

0xc9a8,	// (0x000768cd) bg_button_pane_cp11

0xc9c0,	// (0x000768e5) main_mobtv_info_pane_g2_ParamLimits

0xc9c0,	// (0x000768e5) main_mobtv_info_pane_g2

0x0001,

0xfb40,	// (0x00079a65) main_mobtv_info_pane_g_ParamLimits

0xfb40,	// (0x00079a65) main_mobtv_info_pane_g

0x21dc,	// (0x0006c101) sc_clock_pane_t5_ParamLimits

0x21dc,	// (0x0006c101) sc_clock_pane_t5

0x3424,	// (0x0006d349) main_radioblah_pane_g1_ParamLimits

0x3432,	// (0x0006d357) main_radioblah_pane_t3_ParamLimits

0x3432,	// (0x0006d357) main_radioblah_pane_t3

0x3432,	// (0x0006d357) main_radioblah_pane_t4_ParamLimits

0x3432,	// (0x0006d357) main_radioblah_pane_t4

0x2172,	// (0x0006c097) main_radioblah_text_pane_ParamLimits

0x2172,	// (0x0006c097) main_radioblah_text_pane

0x0f2e,	// (0x0006ae53) main_radioblah_info_pane_g1_ParamLimits

0x0f72,	// (0x0006ae97) main_radioblah_info_pane_t4_ParamLimits

0x0f72,	// (0x0006ae97) main_radioblah_info_pane_t4

0x2119,	// (0x0006c03e) main_sp_fs_calendar_pane

0xd069,	// (0x00076f8e) main_phacti_pane_g1

0xd071,	// (0x00076f96) phacti_note_pane_ParamLimits

0xd071,	// (0x00076f96) phacti_note_pane

0x12b2,	// (0x0006b1d7) phacti_term_pane_ParamLimits

0x12b2,	// (0x0006b1d7) phacti_term_pane

0x12c7,	// (0x0006b1ec) phacti_note_pane_t1_ParamLimits

0x12c7,	// (0x0006b1ec) phacti_note_pane_t1

0x6480,	// (0x000703a5) phacti_term_pane_g1

0x6488,	// (0x000703ad) phacti_term_pane_t1_ParamLimits

0x6488,	// (0x000703ad) phacti_term_pane_t1

0x12de,	// (0x0006b203) popup_sp_fs_calendar_preview_list_single_pane_g1

0x12e6,	// (0x0006b20b) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfc47,	// (0x00079b6c) popup_sp_fs_calendar_preview_list_single_pane_g

0x12ee,	// (0x0006b213) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x12ee,	// (0x0006b213) popup_sp_fs_calendar_preview_list_single_pane_t1

0x1304,	// (0x0006b229) aid_popup_sp_fs_bg_corner_pane

0x21be,	// (0x0006c0e3) popup_sp_fs_calendar_preview_bg_pane_g1

0x1a59,	// (0x0006b97e) popup_sp_fs_calendar_preview_bg_pane

0x130c,	// (0x0006b231) popup_sp_fs_calendar_preview_list_pane

0x1314,	// (0x0006b239) bg_main_sp_fs_cale_pane_ParamLimits

0x1314,	// (0x0006b239) bg_main_sp_fs_cale_pane

0x132c,	// (0x0006b251) listscroll_cale_mrui_pane_ParamLimits

0x132c,	// (0x0006b251) listscroll_cale_mrui_pane

0x4e5e,	// (0x0006ed83) listscroll_sp_fs_schedule_track_pane

0x64bb,	// (0x000703e0) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x64bb,	// (0x000703e0) main_sp_fs_ctrlbar_pane_cp01

0x4e5e,	// (0x0006ed83) main_sp_fs_ribbon_pane

0x64d1,	// (0x000703f6) popup_sp_fs_cale_preview_window

0xe924,	// (0x00078849) list_single_sp_fs_schedule_track_pane_ParamLimits

0xe924,	// (0x00078849) list_single_sp_fs_schedule_track_pane

0xe924,	// (0x00078849) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xe924,	// (0x00078849) bg_sp_fs_highlight_list_pane_cp03

0x9d18,	// (0x00073c3d) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x9d18,	// (0x00073c3d) list_single_sp_fs_schedule_track_pane_g1

0x9d18,	// (0x00073c3d) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x9d18,	// (0x00073c3d) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfc4c,	// (0x00079b71) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfc4c,	// (0x00079b71) list_single_sp_fs_schedule_track_pane_g

0xd087,	// (0x00076fac) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xd087,	// (0x00076fac) list_single_sp_fs_schedule_track_pane_t1

0xe930,	// (0x00078855) sp_fs_schedule_track_pane_ParamLimits

0xe930,	// (0x00078855) sp_fs_schedule_track_pane

0x4e66,	// (0x0006ed8b) sp_fs_schedule_track_pane_g1

0x4e66,	// (0x0006ed8b) sp_fs_schedule_track_pane_g2

0x4e66,	// (0x0006ed8b) sp_fs_schedule_track_pane_g3

0x4e66,	// (0x0006ed8b) sp_fs_schedule_track_pane_g4

0x4e66,	// (0x0006ed8b) sp_fs_schedule_track_pane_g5

0x0004,

0xf7db,	// (0x00079700) sp_fs_schedule_track_pane_g

0x4e66,	// (0x0006ed8b) bg_sp_fs_schedule_viewer_highlight_g1

0x4e66,	// (0x0006ed8b) bg_sp_fs_schedule_viewer_highlight_g2

0x4e66,	// (0x0006ed8b) bg_sp_fs_schedule_viewer_highlight_g3

0x4e66,	// (0x0006ed8b) bg_sp_fs_schedule_viewer_highlight_g4

0x4e66,	// (0x0006ed8b) bg_sp_fs_schedule_viewer_highlight_g5

0x4e66,	// (0x0006ed8b) bg_sp_fs_schedule_viewer_highlight_g6

0x4e66,	// (0x0006ed8b) bg_sp_fs_schedule_viewer_highlight_g7

0x4e66,	// (0x0006ed8b) bg_sp_fs_schedule_viewer_highlight_g8

0x4e66,	// (0x0006ed8b) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfc51,	// (0x00079b76) bg_sp_fs_schedule_viewer_highlight_g

0x4e5e,	// (0x0006ed83) bg_main_sp_fs_ribbon_pane

0x4e66,	// (0x0006ed8b) main_sp_fs_ribbon_pane_g1

0x1344,	// (0x0006b269) main_sp_fs_ribbon_pane_t1

0x1344,	// (0x0006b269) main_sp_fs_ribbon_pane_t2

0x1344,	// (0x0006b269) main_sp_fs_ribbon_pane_t3

0x0002,

0xfc64,	// (0x00079b89) main_sp_fs_ribbon_pane_t

0x4e5e,	// (0x0006ed83) main_sp_fs_ribbon_scheduler_pane

0x4e66,	// (0x0006ed8b) bg_main_sp_fs_ribbon_pane_g1

0x4e66,	// (0x0006ed8b) bg_main_sp_fs_ribbon_pane_g2

0x4e66,	// (0x0006ed8b) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xf6b8,	// (0x000795dd) bg_main_sp_fs_ribbon_pane_g

0x4e66,	// (0x0006ed8b) main_sp_fs_ribbon_scheduler_pane_g1

0x4e66,	// (0x0006ed8b) main_sp_fs_ribbon_scheduler_pane_g2

0x4e66,	// (0x0006ed8b) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xf6b8,	// (0x000795dd) main_sp_fs_ribbon_scheduler_pane_g

0x1352,	// (0x0006b277) list_cale_mrui_pane

0xd099,	// (0x00076fbe) sp_fs_scroll_pane_cp07_ParamLimits

0xd099,	// (0x00076fbe) sp_fs_scroll_pane_cp07

0xe924,	// (0x00078849) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xe924,	// (0x00078849) bg_sp_fs_schedule_viewer_highlight

0x4e5e,	// (0x0006ed83) list_single_sp_fs_schedule_track_pane_cp01

0x4e5e,	// (0x0006ed83) list_sp_fs_schedule_track_pane

0x135f,	// (0x0006b284) sp_fs_scroll_pane_cp06_ParamLimits

0x135f,	// (0x0006b284) sp_fs_scroll_pane_cp06

0x21be,	// (0x0006c0e3) bgmain_sp_fs_calendar_pane_g1

0x64e3,	// (0x00070408) list_single_cale_mrui_pane_ParamLimits

0x64e3,	// (0x00070408) list_single_cale_mrui_pane

0x6511,	// (0x00070436) list_single_cale_mrui_row_pane_ParamLimits

0x6511,	// (0x00070436) list_single_cale_mrui_row_pane

0x651e,	// (0x00070443) list_single_cale_mrui_row_pane_g1_ParamLimits

0x651e,	// (0x00070443) list_single_cale_mrui_row_pane_g1

0x6556,	// (0x0007047b) list_single_cale_mrui_row_pane_t1_ParamLimits

0x6556,	// (0x0007047b) list_single_cale_mrui_row_pane_t1

0x6568,	// (0x0007048d) list_single_cale_mrui_row_pane_t2_ParamLimits

0x6568,	// (0x0007048d) list_single_cale_mrui_row_pane_t2

0x65ce,	// (0x000704f3) list_single_cale_mrui_row_pane_t3_ParamLimits

0x65ce,	// (0x000704f3) list_single_cale_mrui_row_pane_t3

0x65fd,	// (0x00070522) list_single_cale_mrui_row_pane_t4_ParamLimits

0x65fd,	// (0x00070522) list_single_cale_mrui_row_pane_t4

0x0003,

0xfc72,	// (0x00079b97) list_single_cale_mrui_row_pane_t_ParamLimits

0xfc72,	// (0x00079b97) list_single_cale_mrui_row_pane_t

0x662c,	// (0x00070551) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x662c,	// (0x00070551) list_single_cmail_header_editor_pane_bg_cp01

0x6654,	// (0x00070579) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x6654,	// (0x00070579) list_single_cmail_header_editor_pane_bg_cp02

0x1380,	// (0x0006b2a5) main_radioblah_text_pane_t1_ParamLimits

0x1380,	// (0x0006b2a5) main_radioblah_text_pane_t1

0x139a,	// (0x0006b2bf) cam6_indi_pane_cp01

0x13a2,	// (0x0006b2c7) cam6_mode_pane_cp01

0x13aa,	// (0x0006b2cf) cam6_pano_pane

0x13b3,	// (0x0006b2d8) cam6_zoom_pane_cp01

0x13bb,	// (0x0006b2e0) cam6_pano_image_pane

0x13c6,	// (0x0006b2eb) cam6_pano_pane_g1

0x0ce9,	// (0x0006ac0e) cam6_pano_pane_g2

0x13cf,	// (0x0006b2f4) cam6_pano_pane_g3

0x13d8,	// (0x0006b2fd) cam6_pano_pane_g4

0x5115,	// (0x0006f03a) cam6_pano_pane_g5

0x13e1,	// (0x0006b306) cam6_pano_pane_g6

0x13eb,	// (0x0006b310) cam6_pano_pane_g7

0x13f3,	// (0x0006b318) cam6_pano_pane_g8

0x13fc,	// (0x0006b321) cam6_pano_pane_g9

0x0008,

0xfc7b,	// (0x00079ba0) cam6_pano_pane_g

0x1a59,	// (0x0006b97e) main_browser_tag_pane

0x1293,	// (0x0006b1b8) grid_navstr_albumart_pane

0x1407,	// (0x0006b32c) cell_navstr_albumart_pane_ParamLimits

0x1407,	// (0x0006b32c) cell_navstr_albumart_pane

0x1427,	// (0x0006b34c) cell_navstr_albumart_pane_g1

0x142f,	// (0x0006b354) cell_navstr_albumart_pane_g2

0x1437,	// (0x0006b35c) cell_navstr_albumart_pane_g3

0x143f,	// (0x0006b364) cell_navstr_albumart_pane_g4

0x0003,

0xfc8e,	// (0x00079bb3) cell_navstr_albumart_pane_g

0xd0b5,	// (0x00076fda) bt_list_pane_ParamLimits

0xd0b5,	// (0x00076fda) bt_list_pane

0xd0d6,	// (0x00076ffb) bt_list_pane_t1

0xd0e5,	// (0x0007700a) bt_list_pane_t2

0x0001,

0xfc97,	// (0x00079bbc) bt_list_pane_t

0x1a59,	// (0x0006b97e) main_cale_prevew_pane

0xd0f4,	// (0x00077019) popup_cale_preview_window_ParamLimits

0xd0f4,	// (0x00077019) popup_cale_preview_window

0x2119,	// (0x0006c03e) bg_popup_preview_window_pane_cp05_ParamLimits

0x2119,	// (0x0006c03e) bg_popup_preview_window_pane_cp05

0x1447,	// (0x0006b36c) list_cale_preview_pane_ParamLimits

0x1447,	// (0x0006b36c) list_cale_preview_pane

0xd10d,	// (0x00077032) list_double_cale_preview_pane_ParamLimits

0xd10d,	// (0x00077032) list_double_cale_preview_pane

0xd11f,	// (0x00077044) list_single_cale_preview_pane_ParamLimits

0xd11f,	// (0x00077044) list_single_cale_preview_pane

0xd133,	// (0x00077058) list_single_cale_preview_pane_g1

0xd13b,	// (0x00077060) list_single_cale_preview_pane_t1_ParamLimits

0xd13b,	// (0x00077060) list_single_cale_preview_pane_t1

0xd150,	// (0x00077075) list_double_cale_preview_pane_g1

0xd158,	// (0x0007707d) list_double_cale_preview_pane_t1_ParamLimits

0xd158,	// (0x0007707d) list_double_cale_preview_pane_t1

0xd16d,	// (0x00077092) list_double_cale_preview_pane_t2_ParamLimits

0xd16d,	// (0x00077092) list_double_cale_preview_pane_t2

0x0001,

0xfc9c,	// (0x00079bc1) list_double_cale_preview_pane_t_ParamLimits

0xfc9c,	// (0x00079bc1) list_double_cale_preview_pane_t

0x1a59,	// (0x0006b97e) main_ezdial_pane

0x2119,	// (0x0006c03e) main_sp_fs_email_pane_ParamLimits

0xcd3e,	// (0x00076c63) cmail_ddmenu_btn01_pane_ParamLimits

0xcd3e,	// (0x00076c63) cmail_ddmenu_btn01_pane

0xcd53,	// (0x00076c78) cmail_ddmenu_btn02_pane_ParamLimits

0xcd53,	// (0x00076c78) cmail_ddmenu_btn02_pane

0xcd6b,	// (0x00076c90) cmail_ddmenu_btn03_pane_ParamLimits

0xcd6b,	// (0x00076c90) cmail_ddmenu_btn03_pane

0xce00,	// (0x00076d25) main_sp_fs_ctrlbar_pane_ParamLimits

0xce16,	// (0x00076d3b) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xcf4d,	// (0x00076e72) list_cmail_body_pane_ParamLimits

0x1207,	// (0x0006b12c) bg_button_pane_cp12

0x1210,	// (0x0006b135) list_single_cmail_header_detail_pane_g3_ParamLimits

0x1210,	// (0x0006b135) list_single_cmail_header_detail_pane_g3

0x6445,	// (0x0007036a) list_single_cmail_header_detail_pane_t2_ParamLimits

0x6445,	// (0x0007036a) list_single_cmail_header_detail_pane_t2

0x0001,

0xfc33,	// (0x00079b58) list_single_cmail_header_detail_pane_t_ParamLimits

0xfc33,	// (0x00079b58) list_single_cmail_header_detail_pane_t

0x649d,	// (0x000703c2) phacti_term_pane_t2_ParamLimits

0x649d,	// (0x000703c2) phacti_term_pane_t2

0x0001,

0xfc42,	// (0x00079b67) phacti_term_pane_t_ParamLimits

0xfc42,	// (0x00079b67) phacti_term_pane_t

0x1453,	// (0x0006b378) aid_size_list_single_double

0xd185,	// (0x000770aa) popup_ezdial_listscroll_window

0x145f,	// (0x0006b384) popup_number_entry_window_cp01

0x2807,	// (0x0006c72c) bg_popup_call_pane_cp09

0x146c,	// (0x0006b391) ezdial_list_pane

0x1474,	// (0x0006b399) scroll_pane_cp23

0x4888,	// (0x0006e7ad) bg_button_pane_cp028_ParamLimits

0x4888,	// (0x0006e7ad) bg_button_pane_cp028

0xd19e,	// (0x000770c3) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xd19e,	// (0x000770c3) cmail_ddmenu_btn01_pane_g1

0xd1ae,	// (0x000770d3) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xd1ae,	// (0x000770d3) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfca1,	// (0x00079bc6) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfca1,	// (0x00079bc6) cmail_ddmenu_btn01_pane_g

0x147c,	// (0x0006b3a1) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x147c,	// (0x0006b3a1) cmail_ddmenu_btn01_pane_t1

0x3446,	// (0x0006d36b) bg_button_pane_cp029_ParamLimits

0x3446,	// (0x0006d36b) bg_button_pane_cp029

0xd1ae,	// (0x000770d3) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xd1ae,	// (0x000770d3) cmail_ddmenu_btn02_pane_g1

0xd1c6,	// (0x000770eb) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xd1c6,	// (0x000770eb) cmail_ddmenu_btn02_pane_t1

0x2172,	// (0x0006c097) bg_button_pane_cp031_ParamLimits

0x2172,	// (0x0006c097) bg_button_pane_cp031

0xd1ae,	// (0x000770d3) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xd1ae,	// (0x000770d3) cmail_ddmenu_btn03_pane_g1

0xd1c6,	// (0x000770eb) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xd1c6,	// (0x000770eb) cmail_ddmenu_btn03_pane_t1

0x21c8,	// (0x0006c0ed) cell_dialer2_keypad_pane_t1_ParamLimits

0x50f8,	// (0x0006f01d) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x50f8,	// (0x0006f01d) cell_dialer2_keypad_pane_t1_copy1

0xc7e9,	// (0x0007670e) ncimui_group_button_pane

0x2119,	// (0x0006c03e) main_sp_fs_calendar_pane_ParamLimits

0xcf75,	// (0x00076e9a) list_single_cmail_header_caption_pane_ParamLimits

0x64b2,	// (0x000703d7) aid_recal_txt_sm_pane

0x1a59,	// (0x0006b97e) mian_recal_day_pane

0x64d1,	// (0x000703f6) popup_sp_fs_cale_preview_window_ParamLimits

0x1491,	// (0x0006b3b6) list_recal_day_pane

0x668b,	// (0x000705b0) list_single_recal_day_pane_ParamLimits

0x668b,	// (0x000705b0) list_single_recal_day_pane

0x14b8,	// (0x0006b3dd) list_single_recal_day_pane_g1_ParamLimits

0x14b8,	// (0x0006b3dd) list_single_recal_day_pane_g1

0x669d,	// (0x000705c2) list_single_recal_day_pane_g2_ParamLimits

0x669d,	// (0x000705c2) list_single_recal_day_pane_g2

0x66a9,	// (0x000705ce) list_single_recal_day_pane_g3_ParamLimits

0x66a9,	// (0x000705ce) list_single_recal_day_pane_g3

0x66b5,	// (0x000705da) list_single_recal_day_pane_g4_ParamLimits

0x66b5,	// (0x000705da) list_single_recal_day_pane_g4

0x66c3,	// (0x000705e8) list_single_recal_day_pane_g5_ParamLimits

0x66c3,	// (0x000705e8) list_single_recal_day_pane_g5

0x66d9,	// (0x000705fe) list_single_recal_day_pane_g6_ParamLimits

0x66d9,	// (0x000705fe) list_single_recal_day_pane_g6

0x0004,

0xfcb0,	// (0x00079bd5) list_single_recal_day_pane_g_ParamLimits

0xfcb0,	// (0x00079bd5) list_single_recal_day_pane_g

0x66ed,	// (0x00070612) list_single_recal_day_pane_t1

0x66ff,	// (0x00070624) list_single_recal_day_pane_t2

0x0001,

0xfcbb,	// (0x00079be0) list_single_recal_day_pane_t

0xd1ea,	// (0x0007710f) ncimui_query_button_pane_ParamLimits

0xd1ea,	// (0x0007710f) ncimui_query_button_pane

0xd1fa,	// (0x0007711f) ncimui_query_button_pane_t1_ParamLimits

0xd1fa,	// (0x0007711f) ncimui_query_button_pane_t1

0x14c4,	// (0x0006b3e9) ncimui_query_button_pane_t2_ParamLimits

0x14c4,	// (0x0006b3e9) ncimui_query_button_pane_t2

0x0001,

0xfcc0,	// (0x00079be5) ncimui_query_button_pane_t_ParamLimits

0xfcc0,	// (0x00079be5) ncimui_query_button_pane_t

0xd20d,	// (0x00077132) query_button_pane_ParamLimits

0xd20d,	// (0x00077132) query_button_pane

0x1a59,	// (0x0006b97e) bg_button_pane_cp0028

0x14d7,	// (0x0006b3fc) query_button_pane_t1

0x9522,	// (0x00073447) main_tport_pane_ParamLimits

0xce57,	// (0x00076d7c) bg_popup_window_pane_cp01_ParamLimits

0xce57,	// (0x00076d7c) bg_popup_window_pane_cp01

0xce65,	// (0x00076d8a) heading_pane_cp08_ParamLimits

0xce65,	// (0x00076d8a) heading_pane_cp08

0xce73,	// (0x00076d98) heading_pane_cp07_ParamLimits

0xce73,	// (0x00076d98) heading_pane_cp07

0xcee2,	// (0x00076e07) cell_tport_appsw_pane_g2

0x0002,

0xfc20,	// (0x00079b45) cell_tport_appsw_pane_g

0x5f73,	// (0x0006fe98) input_candi_list_open_g1

0x2d49,	// (0x0006cc6e) list_cale_time_pane_g6_ParamLimits

0x2d49,	// (0x0006cc6e) list_cale_time_pane_g6

0x99ae,	// (0x000738d3) aid_size_touch_calib_1_ParamLimits

0x99ae,	// (0x000738d3) aid_size_touch_calib_1

0x99ba,	// (0x000738df) aid_size_touch_calib_2_ParamLimits

0x99ba,	// (0x000738df) aid_size_touch_calib_2

0x99c8,	// (0x000738ed) aid_size_touch_calib_3_ParamLimits

0x99c8,	// (0x000738ed) aid_size_touch_calib_3

0x99d8,	// (0x000738fd) aid_size_touch_calib_4_ParamLimits

0x99d8,	// (0x000738fd) aid_size_touch_calib_4

0x99e6,	// (0x0007390b) main_touch_calib_button_group_pane_ParamLimits

0x99e6,	// (0x0007390b) main_touch_calib_button_group_pane

0x99f4,	// (0x00073919) main_touch_calib_pane_g1_ParamLimits

0x9a00,	// (0x00073925) main_touch_calib_pane_g2_ParamLimits

0x9a0c,	// (0x00073931) main_touch_calib_pane_g3_ParamLimits

0x9a18,	// (0x0007393d) main_touch_calib_pane_g4_ParamLimits

0xf666,	// (0x0007958b) main_touch_calib_pane_g_ParamLimits

0x9a24,	// (0x00073949) main_touch_calib_pane_t1_ParamLimits

0x9a3d,	// (0x00073962) main_touch_calib_pane_t2_ParamLimits

0x9a56,	// (0x0007397b) main_touch_calib_pane_t3_ParamLimits

0x9a6c,	// (0x00073991) main_touch_calib_pane_t4_ParamLimits

0x9a82,	// (0x000739a7) main_touch_calib_pane_t5_ParamLimits

0xf66f,	// (0x00079594) main_touch_calib_pane_t_ParamLimits

0x4ec6,	// (0x0006edeb) list_single_fp_cale_pane_g3_ParamLimits

0x4ec6,	// (0x0006edeb) list_single_fp_cale_pane_g3

0x2119,	// (0x0006c03e) bg_button_pane_cp012_ParamLimits

0x2119,	// (0x0006c03e) bg_vkb2_func_pane_cp03_ParamLimits

0xb919,	// (0x0007583e) cell_vitu2_function_top_pane_g1_ParamLimits

0x2119,	// (0x0006c03e) bg_vkb2_func_pane_cp04_ParamLimits

0xc771,	// (0x00076696) main_ncimui_button_group_pane_ParamLimits

0xc771,	// (0x00076696) main_ncimui_button_group_pane

0xc7d7,	// (0x000766fc) main_ncimui_pane_t3_ParamLimits

0xc7d7,	// (0x000766fc) main_ncimui_pane_t3

0x12a9,	// (0x0006b1ce) phacti_button_group_pane

0x1453,	// (0x0006b378) aid_size_list_single_double_ParamLimits

0xd185,	// (0x000770aa) popup_ezdial_listscroll_window_ParamLimits

0x145f,	// (0x0006b384) popup_number_entry_window_cp01_ParamLimits

0xd21a,	// (0x0007713f) phacti_button_pane_ParamLimits

0xd21a,	// (0x0007713f) phacti_button_pane

0x1a59,	// (0x0006b97e) bg_button_pane_cp14

0x14e5,	// (0x0006b40a) phacti_button_pane_t1

0xd22b,	// (0x00077150) main_touch_calib_button_pane_ParamLimits

0xd22b,	// (0x00077150) main_touch_calib_button_pane

0x221c,	// (0x0006c141) bg_button_pane_cp18_ParamLimits

0x221c,	// (0x0006c141) bg_button_pane_cp18

0x14f3,	// (0x0006b418) main_touch_calib_button_pane_t1_ParamLimits

0x14f3,	// (0x0006b418) main_touch_calib_button_pane_t1

0x1509,	// (0x0006b42e) main_touch_calib_button_pane_t2_ParamLimits

0x1509,	// (0x0006b42e) main_touch_calib_button_pane_t2

0x0001,

0xfcc5,	// (0x00079bea) main_touch_calib_button_pane_t_ParamLimits

0xfcc5,	// (0x00079bea) main_touch_calib_button_pane_t

0x1a59,	// (0x0006b97e) cell_ncimui_button_pane

0x1a59,	// (0x0006b97e) bg_button_pane_cp032

0x1527,	// (0x0006b44c) cell_ncimui_button_pane_t1

0xaa40,	// (0x00074965) image3_infobar_pane_ParamLimits

0xaa40,	// (0x00074965) image3_infobar_pane

0xcb19,	// (0x00076a3e) fs_bigclock_status_pane_ParamLimits

0xcb19,	// (0x00076a3e) fs_bigclock_status_pane

0xcb26,	// (0x00076a4b) main_fs_bigclock_clock_pane_ParamLimits

0xcb26,	// (0x00076a4b) main_fs_bigclock_clock_pane

0xcb3a,	// (0x00076a5f) main_fs_bigclock_indi_pane_ParamLimits

0xcb3a,	// (0x00076a5f) main_fs_bigclock_indi_pane

0xcb62,	// (0x00076a87) main_fs_bigclock_swipe_pane_ParamLimits

0xcb62,	// (0x00076a87) main_fs_bigclock_swipe_pane

0x1a59,	// (0x0006b97e) main_fs_clock_dumped_data

0x0df6,	// (0x0006ad1b) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x0df6,	// (0x0006ad1b) list_single_fs_bigclock_indicator_pane_g1

0x0e12,	// (0x0006ad37) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x0e12,	// (0x0006ad37) list_single_fs_bigclock_indicator_pane_g2

0x0e2c,	// (0x0006ad51) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x0e2c,	// (0x0006ad51) list_single_fs_bigclock_indicator_pane_g3

0x0e46,	// (0x0006ad6b) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x0e46,	// (0x0006ad6b) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfb74,	// (0x00079a99) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfb74,	// (0x00079a99) list_single_fs_bigclock_indicator_pane_g

0x0e71,	// (0x0006ad96) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x0e71,	// (0x0006ad96) list_single_fs_bigclock_indicator_pane_t1

0x0e99,	// (0x0006adbe) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x0e99,	// (0x0006adbe) list_single_fs_bigclock_indicator_pane_t2

0x0ec1,	// (0x0006ade6) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x0ec1,	// (0x0006ade6) list_single_fs_bigclock_indicator_pane_t3

0x0ee9,	// (0x0006ae0e) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x0ee9,	// (0x0006ae0e) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfb7f,	// (0x00079aa4) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfb7f,	// (0x00079aa4) list_single_fs_bigclock_indicator_pane_t

0x1535,	// (0x0006b45a) image3_infobar_fav_pane_ParamLimits

0x1535,	// (0x0006b45a) image3_infobar_fav_pane

0x1545,	// (0x0006b46a) image3_infobar_loc_pane_ParamLimits

0x1545,	// (0x0006b46a) image3_infobar_loc_pane

0x1559,	// (0x0006b47e) image3_infobar_time_pane_ParamLimits

0x1559,	// (0x0006b47e) image3_infobar_time_pane

0x21be,	// (0x0006c0e3) image3_infobar_time_pane_g1

0x1569,	// (0x0006b48e) image3_infobar_time_pane_t1

0x21be,	// (0x0006c0e3) image3_infobar_loc_pane_g1

0x1577,	// (0x0006b49c) image3_infobar_loc_pane_g2

0x0001,

0xfcca,	// (0x00079bef) image3_infobar_loc_pane_g

0x157f,	// (0x0006b4a4) image3_infobar_loc_pane_t1

0x21be,	// (0x0006c0e3) image3_infobar_fav_pane_g1

0x158d,	// (0x0006b4b2) image3_infobar_fav_pane_g2

0x0001,

0xfccf,	// (0x00079bf4) image3_infobar_fav_pane_g

0x1595,	// (0x0006b4ba) fs_bigclock_status_battery_pane

0x159e,	// (0x0006b4c3) fs_bigclock_status_signal_pane

0x15a7,	// (0x0006b4cc) fs_bigclock_status_title_pane

0x15b0,	// (0x0006b4d5) fs_bigclock_status_signal_pane_g1

0x15b9,	// (0x0006b4de) fs_bigclock_status_signal_pane_g2

0x0001,

0xfcd4,	// (0x00079bf9) fs_bigclock_status_signal_pane_g

0x15c1,	// (0x0006b4e6) fs_bigclock_status_battery_pane_g1

0x15ca,	// (0x0006b4ef) fs_bigclock_status_battery_pane_g2

0x0001,

0xfcd9,	// (0x00079bfe) fs_bigclock_status_battery_pane_g

0x15d2,	// (0x0006b4f7) fs_bigclock_status_title_pane_t1

0xd23b,	// (0x00077160) main_fs_bigclock_clock_pane_g1

0xd23b,	// (0x00077160) main_fs_bigclock_clock_pane_g2

0xd23b,	// (0x00077160) main_fs_bigclock_clock_pane_g3

0xd23b,	// (0x00077160) main_fs_bigclock_clock_pane_g4

0x0003,

0xfcde,	// (0x00079c03) main_fs_bigclock_clock_pane_g

0xd247,	// (0x0007716c) main_fs_bigclock_clock_pane_t1

0xd25b,	// (0x00077180) main_fs_bigclock_clock_pane_t2

0x0001,

0xfce7,	// (0x00079c0c) main_fs_bigclock_clock_pane_t

0x15e0,	// (0x0006b505) list_single_fs_bigclock_indicator_pane_ParamLimits

0x15e0,	// (0x0006b505) list_single_fs_bigclock_indicator_pane

0x15f1,	// (0x0006b516) list_single_fs_bigclock_pane_ParamLimits

0x15f1,	// (0x0006b516) list_single_fs_bigclock_pane

0x1617,	// (0x0006b53c) main_fs_bigclock_indicator_pane_t1

0x1626,	// (0x0006b54b) list_single_fs_bigclock_pane_g1

0x162e,	// (0x0006b553) list_single_fs_bigclock_pane_t1

0x21be,	// (0x0006c0e3) main_fs_bigclock_swipe_pane_g1

0x1671,	// (0x0006b596) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfcf8,	// (0x00079c1d) main_fs_bigclock_swipe_pane_g

0x1679,	// (0x0006b59e) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x1679,	// (0x0006b59e) main_fs_bigclock_swipe_pane_t1

0x8847,	// (0x0007276c) call_type_pane_ParamLimits

0x1a59,	// (0x0006b97e) main_btmg_pane

0x654a,	// (0x0007046f) list_single_cale_mrui_row_pane_g2_ParamLimits

0x654a,	// (0x0007046f) list_single_cale_mrui_row_pane_g2

0x0002,

0xfc6b,	// (0x00079b90) list_single_cale_mrui_row_pane_g_ParamLimits

0xfc6b,	// (0x00079b90) list_single_cale_mrui_row_pane_g

0x667a,	// (0x0007059f) list_recal_vselct_arw_lo_pane

0x14b0,	// (0x0006b3d5) list_recal_vselct_arw_up_pane

0x6682,	// (0x000705a7) list_recal_vselct_pane

0xd2b2,	// (0x000771d7) btmg_button_pane

0xd2be,	// (0x000771e3) main_btmg_pane_g1

0x1a59,	// (0x0006b97e) bg_button_pane_cp044

0x1696,	// (0x0006b5bb) btmg_button_pane_t1

0x46b5,	// (0x0006e5da) aid_listscroll_gen

0x2119,	// (0x0006c03e) main_cntbar_detail_pane

0x11da,	// (0x0006b0ff) list_cmail_folder_pane

0xf011,	// (0x00078f36) sp_fs_scroll_pane_cp03_ParamLimits

0x6711,	// (0x00070636) list_single_fs_dyc_pane_cp01_ParamLimits

0x6711,	// (0x00070636) list_single_fs_dyc_pane_cp01

0x16a4,	// (0x0006b5c9) aid_size_cmail_indent

0x673c,	// (0x00070661) list_single_dyc_row_pane_cp01

0xd2e6,	// (0x0007720b) cntbar_detail_list_pane_ParamLimits

0xd2e6,	// (0x0007720b) cntbar_detail_list_pane

0xd320,	// (0x00077245) main_cntbar_detail_cont_pane_ParamLimits

0xd320,	// (0x00077245) main_cntbar_detail_cont_pane

0x883b,	// (0x00072760) scroll_pane_cp032_ParamLimits

0x883b,	// (0x00072760) scroll_pane_cp032

0xd32c,	// (0x00077251) cntbar_detail_list_event_pane_ParamLimits

0xd32c,	// (0x00077251) cntbar_detail_list_event_pane

0xd2f2,	// (0x00077217) cntbar_detail_list_shct_pane

0x2c1c,	// (0x0006cb41) aid_list_gen

0x16ad,	// (0x0006b5d2) aid_scroll

0x16b6,	// (0x0006b5db) aid_size_touch_scroll_bar

0xd340,	// (0x00077265) aid_list_double

0xd349,	// (0x0007726e) aid_list_single

0x16bf,	// (0x0006b5e4) aid_list_single_lg

0x6745,	// (0x0007066a) aid_list_z_g_a_sm

0xd352,	// (0x00077277) aid_list_z_g_d

0x674d,	// (0x00070672) aid_txt_z_prm

0x675b,	// (0x00070680) aid_txt_z_prm_cp01

0x6769,	// (0x0007068e) aid_txt_z_sec

0xd35a,	// (0x0007727f) main_cntbar_detail_cont_pane_g1_ParamLimits

0xd35a,	// (0x0007727f) main_cntbar_detail_cont_pane_g1

0xd367,	// (0x0007728c) main_cntbar_detail_cont_pane_g2_ParamLimits

0xd367,	// (0x0007728c) main_cntbar_detail_cont_pane_g2

0x0001,

0xfcfd,	// (0x00079c22) main_cntbar_detail_cont_pane_g_ParamLimits

0xfcfd,	// (0x00079c22) main_cntbar_detail_cont_pane_g

0x16c8,	// (0x0006b5ed) main_cntbar_detail_cont_pane_t1

0x16d6,	// (0x0006b5fb) main_cntbar_detail_cont_pane_t2

0x16e4,	// (0x0006b609) main_cntbar_detail_cont_pane_t3

0x0002,

0xfd02,	// (0x00079c27) main_cntbar_detail_cont_pane_t

0xd373,	// (0x00077298) cell_cntbar_detail_list_shct_pane_ParamLimits

0xd373,	// (0x00077298) cell_cntbar_detail_list_shct_pane

0x16f2,	// (0x0006b617) cntbar_detail_list_shct_pane_g1

0x16fb,	// (0x0006b620) cntbar_detail_list_shct_pane_g2

0x0001,

0xfd09,	// (0x00079c2e) cntbar_detail_list_shct_pane_g

0xd387,	// (0x000772ac) cntbar_detail_list_event_pane_g1_ParamLimits

0xd387,	// (0x000772ac) cntbar_detail_list_event_pane_g1

0xd393,	// (0x000772b8) cntbar_detail_list_event_pane_g2_ParamLimits

0xd393,	// (0x000772b8) cntbar_detail_list_event_pane_g2

0x0005,

0xfd0e,	// (0x00079c33) cntbar_detail_list_event_pane_g_ParamLimits

0xfd0e,	// (0x00079c33) cntbar_detail_list_event_pane_g

0xd3ff,	// (0x00077324) cntbar_detail_list_event_pane_t1_ParamLimits

0xd3ff,	// (0x00077324) cntbar_detail_list_event_pane_t1

0xd414,	// (0x00077339) cntbar_detail_list_event_pane_t2_ParamLimits

0xd414,	// (0x00077339) cntbar_detail_list_event_pane_t2

0x0002,

0xfd1b,	// (0x00079c40) cntbar_detail_list_event_pane_t_ParamLimits

0xfd1b,	// (0x00079c40) cntbar_detail_list_event_pane_t

0x21be,	// (0x0006c0e3) cell_cntbar_detail_list_shct_pane_g1

0x3325,	// (0x0006d24a) navi_pane_mv_g3

0x2119,	// (0x0006c03e) main_cntbar_detail_pane_ParamLimits

0x1a59,	// (0x0006b97e) main_notif_wgt_pane

0xa70b,	// (0x00074630) aid_tch_main_mp4_pane_g4

0xa9d2,	// (0x000748f7) popup_slider_window_cp02

0x6670,	// (0x00070595) list_recal_day_event_pane

0xd2c6,	// (0x000771eb) cntbar_detail_btn_pane_ParamLimits

0xd2c6,	// (0x000771eb) cntbar_detail_btn_pane

0xd2d6,	// (0x000771fb) cntbar_detail_btn_pane_cp01_ParamLimits

0xd2d6,	// (0x000771fb) cntbar_detail_btn_pane_cp01

0xd2f2,	// (0x00077217) cntbar_detail_list_shct_pane_ParamLimits

0xd2fe,	// (0x00077223) cntbar_detail_pane_g1_ParamLimits

0xd2fe,	// (0x00077223) cntbar_detail_pane_g1

0xd30a,	// (0x0007722f) cntbar_detail_pane_t1_ParamLimits

0xd30a,	// (0x0007722f) cntbar_detail_pane_t1

0xd39f,	// (0x000772c4) cntbar_detail_list_event_pane_g3_ParamLimits

0xd39f,	// (0x000772c4) cntbar_detail_list_event_pane_g3

0xd3b7,	// (0x000772dc) cntbar_detail_list_event_pane_g4_ParamLimits

0xd3b7,	// (0x000772dc) cntbar_detail_list_event_pane_g4

0xd3cf,	// (0x000772f4) cntbar_detail_list_event_pane_g5_ParamLimits

0xd3cf,	// (0x000772f4) cntbar_detail_list_event_pane_g5

0xd3e7,	// (0x0007730c) cntbar_detail_list_event_pane_g6_ParamLimits

0xd3e7,	// (0x0007730c) cntbar_detail_list_event_pane_g6

0xd429,	// (0x0007734e) cntbar_detail_list_event_pane_t3_ParamLimits

0xd429,	// (0x0007734e) cntbar_detail_list_event_pane_t3

0xd43b,	// (0x00077360) popup_notif_wgt_window_ParamLimits

0xd43b,	// (0x00077360) popup_notif_wgt_window

0xd44b,	// (0x00077370) popup_submenu_window_cp01_ParamLimits

0xd44b,	// (0x00077370) popup_submenu_window_cp01

0x2807,	// (0x0006c72c) bg_popup_window_pane_cp10

0x1704,	// (0x0006b629) listscroll_notif_wgt_pane

0x1716,	// (0x0006b63b) list_notif_wgt_window

0x171f,	// (0x0006b644) scroll_pane_cp033

0xd459,	// (0x0007737e) list_notif_wgt_row_pane_ParamLimits

0xd459,	// (0x0007737e) list_notif_wgt_row_pane

0x1728,	// (0x0006b64d) aid_size_list_notif_wgt_del

0x1735,	// (0x0006b65a) list_notif_wgt_row_pane_g1

0x1741,	// (0x0006b666) list_notif_wgt_row_pane_g2

0x1750,	// (0x0006b675) list_notif_wgt_row_pane_g3

0x0002,

0xfd22,	// (0x00079c47) list_notif_wgt_row_pane_g

0x175d,	// (0x0006b682) list_notif_wgt_row_pane_t1

0x1773,	// (0x0006b698) list_notif_wgt_row_pane_t2

0x1785,	// (0x0006b6aa) list_notif_wgt_row_pane_t3

0x0002,

0xfd29,	// (0x00079c4e) list_notif_wgt_row_pane_t

0xecb4,	// (0x00078bd9) list_recal_day_event_pane_g1

0x1797,	// (0x0006b6bc) list_recal_day_event_pane_t1

0x1a59,	// (0x0006b97e) bg_button_pane_cp045

0xd46b,	// (0x00077390) cntbar_detail_btn_pane_t1

0x3446,	// (0x0006d36b) main_callh_pane_ParamLimits

0x3446,	// (0x0006d36b) main_callh_pane

0x1a59,	// (0x0006b97e) main_coverflow0_pane

0x1a59,	// (0x0006b97e) main_wgtman_pane

0xcb7a,	// (0x00076a9f) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xcb7a,	// (0x00076a9f) main_fs_bigclock_unlock_btn_pane

0xceda,	// (0x00076dff) bg_button_pane_cp16

0xceea,	// (0x00076e0f) cell_tport_appsw_pane_g3

0xd479,	// (0x0007739e) cf0_flow_pane_ParamLimits

0xd479,	// (0x0007739e) cf0_flow_pane

0x17a6,	// (0x0006b6cb) listscroll_cf0_pane

0x17b1,	// (0x0006b6d6) main_cf0_pane_g1

0xd488,	// (0x000773ad) main_cf0_pane_t1_ParamLimits

0xd488,	// (0x000773ad) main_cf0_pane_t1

0xd49c,	// (0x000773c1) main_cf0_pane_t2_ParamLimits

0xd49c,	// (0x000773c1) main_cf0_pane_t2

0x0001,

0xfd35,	// (0x00079c5a) main_cf0_pane_t_ParamLimits

0xfd35,	// (0x00079c5a) main_cf0_pane_t

0x17c3,	// (0x0006b6e8) scroll_pane_cp11

0xd4b0,	// (0x000773d5) cf0_flow_pane_g1

0xd4b8,	// (0x000773dd) cf0_flow_pane_g2

0x0001,

0xfd3a,	// (0x00079c5f) cf0_flow_pane_g

0xd4c0,	// (0x000773e5) cf0_flow_pane_t1

0x1a59,	// (0x0006b97e) main_call6_pane

0x1a59,	// (0x0006b97e) main_calllock_pane

0xd4ce,	// (0x000773f3) call6_btn_grp_pane_ParamLimits

0xd4ce,	// (0x000773f3) call6_btn_grp_pane

0xd4dd,	// (0x00077402) call6_pane_g1_ParamLimits

0xd4dd,	// (0x00077402) call6_pane_g1

0xd4ed,	// (0x00077412) popup_call6_1st_window_ParamLimits

0xd4ed,	// (0x00077412) popup_call6_1st_window

0xd4fb,	// (0x00077420) popup_call6_2nd_window_ParamLimits

0xd4fb,	// (0x00077420) popup_call6_2nd_window

0xd509,	// (0x0007742e) cell_call6_btn_pane_ParamLimits

0xd509,	// (0x0007742e) cell_call6_btn_pane

0x2807,	// (0x0006c72c) bg_popup_call2_in_pane_cp03

0x17ce,	// (0x0006b6f3) popup_call6_1st_window_g1

0x17d6,	// (0x0006b6fb) popup_call6_1st_window_g2

0x17de,	// (0x0006b703) popup_call6_1st_window_g3

0x0002,

0xfd3f,	// (0x00079c64) popup_call6_1st_window_g

0x17e6,	// (0x0006b70b) popup_call6_1st_window_t1

0x17f5,	// (0x0006b71a) popup_call6_1st_window_t2

0x1803,	// (0x0006b728) popup_call6_1st_window_t3

0x0002,

0xfd46,	// (0x00079c6b) popup_call6_1st_window_t

0x2807,	// (0x0006c72c) bg_popup_call2_in_pane_cp04

0x1811,	// (0x0006b736) popup_call6_2nd_window_g1

0x1819,	// (0x0006b73e) popup_call6_2nd_window_g2

0x1821,	// (0x0006b746) popup_call6_2nd_window_g3

0x0002,

0xfd4d,	// (0x00079c72) popup_call6_2nd_window_g

0x1829,	// (0x0006b74e) popup_call6_2nd_window_t1

0x1a59,	// (0x0006b97e) bg_button_pane_cp15

0x186b,	// (0x0006b790) cell_call6_btn_pane_g1

0x1a4a,	// (0x0006b96f) cell_call6_btn_pane_t1

0xd518,	// (0x0007743d) listscroll_wgtman_pane_ParamLimits

0xd518,	// (0x0007743d) listscroll_wgtman_pane

0xd534,	// (0x00077459) wgtman_btn_pane_ParamLimits

0xd534,	// (0x00077459) wgtman_btn_pane

0x3139,	// (0x0006d05e) aid_scroll_copy1

0x1838,	// (0x0006b75d) list_wgtman_pane

0xd569,	// (0x0007748e) wgtman_btn_pane_g1_ParamLimits

0xd569,	// (0x0007748e) wgtman_btn_pane_g1

0xd591,	// (0x000774b6) wgtman_btn_pane_t1_ParamLimits

0xd591,	// (0x000774b6) wgtman_btn_pane_t1

0x1842,	// (0x0006b767) wgtman_btn_pane_t2_ParamLimits

0x1842,	// (0x0006b767) wgtman_btn_pane_t2

0x0001,

0xfd54,	// (0x00079c79) wgtman_btn_pane_t_ParamLimits

0xfd54,	// (0x00079c79) wgtman_btn_pane_t

0xd5c8,	// (0x000774ed) listrow_wgtman_pane_ParamLimits

0xd5c8,	// (0x000774ed) listrow_wgtman_pane

0xd5e4,	// (0x00077509) listrow_wgtman_pane_g1

0xd5f1,	// (0x00077516) listrow_wgtman_pane_g2

0x0001,

0xfd59,	// (0x00079c7e) listrow_wgtman_pane_g

0x6777,	// (0x0007069c) listrow_wgtman_pane_t1

0x678f,	// (0x000706b4) listrow_wgtman_pane_t2

0x0001,

0xfd5e,	// (0x00079c83) listrow_wgtman_pane_t

0x67b5,	// (0x000706da) wait_bar_pane_cp09

0x1859,	// (0x0006b77e) main_calllock_btn_pane

0x1863,	// (0x0006b788) main_calllock_pane_g1

0x1a59,	// (0x0006b97e) bg_button_pane_cp17

0x186b,	// (0x0006b790) main_calllock_btn_pane_g1

0x1874,	// (0x0006b799) main_calllock_btn_pane_t1

0x1a59,	// (0x0006b97e) main_dialer3_pane

0x1a59,	// (0x0006b97e) main_fmrd2_pane

0x21be,	// (0x0006c0e3) main_fs_bigclock_unlock_btn_pane_g1

0xd617,	// (0x0007753c) main_fs_bigclock_unlock_btn_pane_t1

0xd625,	// (0x0007754a) area_fmrd2_info_pane_ParamLimits

0xd625,	// (0x0007754a) area_fmrd2_info_pane

0xd633,	// (0x00077558) area_fmrd2_visual_pane_ParamLimits

0xd633,	// (0x00077558) area_fmrd2_visual_pane

0xd641,	// (0x00077566) fmrd2_indi_pane_ParamLimits

0xd641,	// (0x00077566) fmrd2_indi_pane

0xd64e,	// (0x00077573) area_fmrd2_visual_pane_g1

0xd656,	// (0x0007757b) area_fmrd2_visual_pane_t1

0xd666,	// (0x0007758b) area_fmrd2_visual_pane_t2

0xd676,	// (0x0007759b) area_fmrd2_visual_pane_t3

0x0002,

0xfd68,	// (0x00079c8d) area_fmrd2_visual_pane_t

0xd686,	// (0x000775ab) area_fmrd2_info_pane_g1

0xd68e,	// (0x000775b3) area_fmrd2_info_pane_t1

0xd69e,	// (0x000775c3) area_fmrd2_info_pane_t2

0xd6ae,	// (0x000775d3) area_fmrd2_info_pane_t3

0xd6be,	// (0x000775e3) area_fmrd2_info_pane_t4

0x0003,

0xfd6f,	// (0x00079c94) area_fmrd2_info_pane_t

0xd6cc,	// (0x000775f1) fmrd2_indi_pane_t1

0xd6dc,	// (0x00077601) fmrd2_indi_pane_t2

0xd6ec,	// (0x00077611) fmrd2_indi_pane_t3

0x0002,

0xfd78,	// (0x00079c9d) fmrd2_indi_pane_t

0x0e55,	// (0x0006ad7a) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x0e55,	// (0x0006ad7a) list_single_fs_bigclock_indicator_pane_g5

0x0f06,	// (0x0006ae2b) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x0f06,	// (0x0006ae2b) list_single_fs_bigclock_indicator_pane_t5

0xe930,	// (0x00078855) aid_cell_bcale_month_pane_ParamLimits

0xe930,	// (0x00078855) aid_cell_bcale_month_pane

0xe930,	// (0x00078855) bcale_month_pane_ParamLimits

0xe930,	// (0x00078855) bcale_month_pane

0xe924,	// (0x00078849) bcale_preview_pane_ParamLimits

0xe924,	// (0x00078849) bcale_preview_pane

0x162e,	// (0x0006b553) list_single_fs_bigclock_pane_t1_ParamLimits

0x164d,	// (0x0006b572) list_single_fs_bigclock_pane_t2_ParamLimits

0x164d,	// (0x0006b572) list_single_fs_bigclock_pane_t2

0x0001,

0xfcf3,	// (0x00079c18) list_single_fs_bigclock_pane_t_ParamLimits

0xfcf3,	// (0x00079c18) list_single_fs_bigclock_pane_t

0xd60f,	// (0x00077534) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfd63,	// (0x00079c88) main_fs_bigclock_unlock_btn_pane_g

0xd6fa,	// (0x0007761f) aid_dia3_key_size_ParamLimits

0xd6fa,	// (0x0007761f) aid_dia3_key_size

0xd706,	// (0x0007762b) aid_dia3_listrow_size_ParamLimits

0xd706,	// (0x0007762b) aid_dia3_listrow_size

0xd716,	// (0x0007763b) dia3_keypad_fun_pane_ParamLimits

0xd716,	// (0x0007763b) dia3_keypad_fun_pane

0xd728,	// (0x0007764d) dia3_keypad_num_pane_ParamLimits

0xd728,	// (0x0007764d) dia3_keypad_num_pane

0xd73a,	// (0x0007765f) dia3_listscroll_pane_ParamLimits

0xd73a,	// (0x0007765f) dia3_listscroll_pane

0xd748,	// (0x0007766d) dia3_numentry_pane_ParamLimits

0xd748,	// (0x0007766d) dia3_numentry_pane

0x1883,	// (0x0006b7a8) dia3_list_pane

0x188e,	// (0x0006b7b3) scroll_pane_cp12

0x1a59,	// (0x0006b97e) bg_dia3_numentry_pane

0xd756,	// (0x0007767b) dia3_numentry_pane_t1

0xd765,	// (0x0007768a) cell_dia3_key_num_pane

0xd76d,	// (0x00077692) cell_dia3_key0_fun_pane_ParamLimits

0xd76d,	// (0x00077692) cell_dia3_key0_fun_pane

0xd77a,	// (0x0007769f) cell_dia3_key1_fun_pane_ParamLimits

0xd77a,	// (0x0007769f) cell_dia3_key1_fun_pane

0xd787,	// (0x000776ac) dia3_listrow_pane

0x0ba8,	// (0x0006aacd) bg_dia3_numentry_pane_g1

0x1a59,	// (0x0006b97e) bg_button_pane_cp21

0x1899,	// (0x0006b7be) cell_dia3_key_num_pane_t1

0x18a7,	// (0x0006b7cc) cell_dia3_key_num_pane_t2

0x18b6,	// (0x0006b7db) cell_dia3_key_num_pane_t3

0x18c5,	// (0x0006b7ea) cell_dia3_key_num_pane_t4

0x0003,

0xfd7f,	// (0x00079ca4) cell_dia3_key_num_pane_t

0x1a59,	// (0x0006b97e) bg_button_pane_cp19

0xd794,	// (0x000776b9) cell_dia3_key0_fun_pane_g1

0x1a59,	// (0x0006b97e) bg_button_pane_cp20

0xd79c,	// (0x000776c1) cell_dia3_key1_fun_pane_g1

0x0089,	// (0x00069fae) area_left_week_number_pane

0x0089,	// (0x00069fae) area_top_day_name_pane

0x0089,	// (0x00069fae) frame_month_view_pane

0x0089,	// (0x00069fae) grid_month_view_pane

0x0089,	// (0x00069fae) cell_top_day_name_pane_ParamLimits

0x0089,	// (0x00069fae) cell_top_day_name_pane

0x0089,	// (0x00069fae) cell_area_left_week_number_pane_ParamLimits

0x0089,	// (0x00069fae) cell_area_left_week_number_pane

0x0089,	// (0x00069fae) cell_month_view_pane_ParamLimits

0x0089,	// (0x00069fae) cell_month_view_pane

0x007d,	// (0x00069fa2) frm_month_g1

0x007d,	// (0x00069fa2) frm_month_g2

0x007d,	// (0x00069fa2) frm_month_g3

0x007d,	// (0x00069fa2) frm_month_g4

0x007d,	// (0x00069fa2) frm_month_g5

0x007d,	// (0x00069fa2) frm_month_g6

0x007d,	// (0x00069fa2) frm_month_g7

0x007d,	// (0x00069fa2) frm_month_g8

0x007d,	// (0x00069fa2) frm_month_g9

0x007d,	// (0x00069fa2) frm_month_g10

0x007d,	// (0x00069fa2) frm_month_g11

0x007d,	// (0x00069fa2) frm_month_g12

0x007d,	// (0x00069fa2) frm_month_g13

0x007d,	// (0x00069fa2) frm_month_g14

0x007d,	// (0x00069fa2) frm_month_g15

0x007d,	// (0x00069fa2) frm_month_g16

0x000f,

0xfd88,	// (0x00079cad) frm_month_g

0x18d4,	// (0x0006b7f9) cell_top_day_name_pane_t1

0x007d,	// (0x00069fa2) cell_area_left_week_number_pane_g1

0x18d4,	// (0x0006b7f9) cell_area_left_week_number_pane_t1

0x007d,	// (0x00069fa2) cell_month_view_pane_g1

0x18d4,	// (0x0006b7f9) cell_month_view_pane_t1

0x1a59,	// (0x0006b97e) main_fps_pane

0x10e5,	// (0x0006b00a) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x10e5,	// (0x0006b00a) cmail_ddmenu_btn02_pane_cp1

0x1101,	// (0x0006b026) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x1101,	// (0x0006b026) cmail_ddmenu_btn02_pane_cp2

0xd1ba,	// (0x000770df) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xd1ba,	// (0x000770df) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfca6,	// (0x00079bcb) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfca6,	// (0x00079bcb) cmail_ddmenu_btn02_pane_g

0xd1d8,	// (0x000770fd) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xd1d8,	// (0x000770fd) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfcab,	// (0x00079bd0) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfcab,	// (0x00079bd0) cmail_ddmenu_btn02_pane_t

0xd7a4,	// (0x000776c9) fps_text_pane_ParamLimits

0xd7a4,	// (0x000776c9) fps_text_pane

0xd7b1,	// (0x000776d6) main_fps_pane_g1_ParamLimits

0xd7b1,	// (0x000776d6) main_fps_pane_g1

0xd7bf,	// (0x000776e4) wait_bar_pane_cp010_ParamLimits

0xd7bf,	// (0x000776e4) wait_bar_pane_cp010

0xd7cb,	// (0x000776f0) fps_text_pane_t1_ParamLimits

0xd7cb,	// (0x000776f0) fps_text_pane_t1

0xadba,	// (0x00074cdf) cam4_image_uncrop_pane_g1

0xadc3,	// (0x00074ce8) cam4_image_uncrop_pane_g2

0xadcc,	// (0x00074cf1) cam4_image_uncrop_pane_g3

0xadd5,	// (0x00074cfa) cam4_image_uncrop_pane_g4

0x0003,

0xf7f8,	// (0x0007971d) cam4_image_uncrop_pane_g

0xd787,	// (0x000776ac) dia3_listrow_pane_ParamLimits

0x1a59,	// (0x0006b97e) main_phob2_pane

0xcebc,	// (0x00076de1) cell_tport_appsw_pane_cp02_ParamLimits

0xcebc,	// (0x00076de1) cell_tport_appsw_pane_cp02

0xcecb,	// (0x00076df0) cell_tport_appsw_pane_cp03_ParamLimits

0xcecb,	// (0x00076df0) cell_tport_appsw_pane_cp03

0x1a59,	// (0x0006b97e) phob2_contact_card_pane

0x1a59,	// (0x0006b97e) phob2_listscroll_pane

0x18e6,	// (0x0006b80b) phob2_list_pane

0x1474,	// (0x0006b399) scroll_pane_cp034

0xd7e4,	// (0x00077709) phob2_cc_data_pane_ParamLimits

0xd7e4,	// (0x00077709) phob2_cc_data_pane

0xd7fe,	// (0x00077723) phob2_cc_listscroll_pane_ParamLimits

0xd7fe,	// (0x00077723) phob2_cc_listscroll_pane

0xd5c8,	// (0x000774ed) list_double_large_graphic_phob2_pane_ParamLimits

0xd5c8,	// (0x000774ed) list_double_large_graphic_phob2_pane

0xd818,	// (0x0007773d) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xd818,	// (0x0007773d) list_double_large_graphic_phob2_pane_g1

0x67c7,	// (0x000706ec) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x67c7,	// (0x000706ec) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfda9,	// (0x00079cce) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfda9,	// (0x00079cce) list_double_large_graphic_phob2_pane_g

0x67df,	// (0x00070704) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x67df,	// (0x00070704) list_double_large_graphic_phob2_pane_t1

0x67f4,	// (0x00070719) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x67f4,	// (0x00070719) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfdb2,	// (0x00079cd7) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfdb2,	// (0x00079cd7) list_double_large_graphic_phob2_pane_t

0x2172,	// (0x0006c097) list_highlight_pane_cp024

0x18ee,	// (0x0006b813) phob2_cc_button_pane

0xd833,	// (0x00077758) phob2_cc_data_pane_g1_ParamLimits

0xd833,	// (0x00077758) phob2_cc_data_pane_g1

0xd842,	// (0x00077767) phob2_cc_data_pane_g2_ParamLimits

0xd842,	// (0x00077767) phob2_cc_data_pane_g2

0x0001,

0xfdb7,	// (0x00079cdc) phob2_cc_data_pane_g_ParamLimits

0xfdb7,	// (0x00079cdc) phob2_cc_data_pane_g

0xd851,	// (0x00077776) phob2_cc_data_pane_t1_ParamLimits

0xd851,	// (0x00077776) phob2_cc_data_pane_t1

0xd866,	// (0x0007778b) phob2_cc_data_pane_t2_ParamLimits

0xd866,	// (0x0007778b) phob2_cc_data_pane_t2

0xd87b,	// (0x000777a0) phob2_cc_data_pane_t3_ParamLimits

0xd87b,	// (0x000777a0) phob2_cc_data_pane_t3

0x0002,

0xfdbc,	// (0x00079ce1) phob2_cc_data_pane_t_ParamLimits

0xfdbc,	// (0x00079ce1) phob2_cc_data_pane_t

0x18f6,	// (0x0006b81b) phob2_cc_list_pane_ParamLimits

0x18f6,	// (0x0006b81b) phob2_cc_list_pane

0x0570,	// (0x0006a495) scroll_pane_cp035_ParamLimits

0x0570,	// (0x0006a495) scroll_pane_cp035

0x2119,	// (0x0006c03e) bg_button_pane_cp033

0x1902,	// (0x0006b827) phob2_cc_button_pane_g1

0x190e,	// (0x0006b833) phob2_cc_button_pane_t1

0x1923,	// (0x0006b848) phob2_cc_button_pane_t2

0x0001,

0xfdc3,	// (0x00079ce8) phob2_cc_button_pane_t

0xd890,	// (0x000777b5) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xd890,	// (0x000777b5) list_double_large_graphic_phob2_cc_pane

0xd904,	// (0x00077829) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xd904,	// (0x00077829) list_double_large_graphic_phob2_cc_pane_g1

0x6809,	// (0x0007072e) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x6809,	// (0x0007072e) list_double_large_graphic_phob2_cc_pane_g2

0x6818,	// (0x0007073d) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x6818,	// (0x0007073d) list_double_large_graphic_phob2_cc_pane_g3

0x6827,	// (0x0007074c) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x6827,	// (0x0007074c) list_double_large_graphic_phob2_cc_pane_g4

0x6838,	// (0x0007075d) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x6838,	// (0x0007075d) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfdc8,	// (0x00079ced) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfdc8,	// (0x00079ced) list_double_large_graphic_phob2_cc_pane_g

0x6847,	// (0x0007076c) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x6847,	// (0x0007076c) list_double_large_graphic_phob2_cc_pane_t1

0x6870,	// (0x00070795) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x6870,	// (0x00070795) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfdd3,	// (0x00079cf8) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfdd3,	// (0x00079cf8) list_double_large_graphic_phob2_cc_pane_t

0x1935,	// (0x0006b85a) list_highlight_pane_cp025_ParamLimits

0x1935,	// (0x0006b85a) list_highlight_pane_cp025

0x2119,	// (0x0006c03e) bg_button_pane_cp033_ParamLimits

0x1902,	// (0x0006b827) phob2_cc_button_pane_g1_ParamLimits

0x190e,	// (0x0006b833) phob2_cc_button_pane_t1_ParamLimits

0x1923,	// (0x0006b848) phob2_cc_button_pane_t2_ParamLimits

0xfdc3,	// (0x00079ce8) phob2_cc_button_pane_t_ParamLimits

0x6b8a,	// (0x00070aaf) popup_wgtman_window

0xeb7d,	// (0x00078aa2) scroll_pane_cp038

0xd551,	// (0x00077476) wgtman_btn_pane_cp_01_ParamLimits

0xd551,	// (0x00077476) wgtman_btn_pane_cp_01

0x1943,	// (0x0006b868) wgtman_content_pane

0x194c,	// (0x0006b871) wgtman_heading_pane

0x1a59,	// (0x0006b97e) bg_heading_pane_cp02

0x1955,	// (0x0006b87a) wgtman_heading_pane_g1

0x195d,	// (0x0006b882) wgtman_heading_pane_t1

0x196b,	// (0x0006b890) scroll_pane_cp036

0x1973,	// (0x0006b898) wgtman_list_pane

0x0fad,	// (0x0006aed2) wgtman_list_pane_t1_ParamLimits

0x0fad,	// (0x0006aed2) wgtman_list_pane_t1

0xad19,	// (0x00074c3e) cam4_grid_pane

0xbad9,	// (0x000759fe) bg_button_pane_cp015_ParamLimits

0xbaee,	// (0x00075a13) bg_button_pane_cp016_ParamLimits

0xbafa,	// (0x00075a1f) bg_button_pane_cp017_ParamLimits

0xbb52,	// (0x00075a77) popup_vitu2_query_window_g3_ParamLimits

0xbb52,	// (0x00075a77) popup_vitu2_query_window_g3

0xbbf3,	// (0x00075b18) popup_vitu2_query_window_t6_ParamLimits

0xbbf3,	// (0x00075b18) popup_vitu2_query_window_t6

0xbc1e,	// (0x00075b43) popup_vitu2_query_window_t7_ParamLimits

0xbc1e,	// (0x00075b43) popup_vitu2_query_window_t7

0x03fa,	// (0x0006a31f) cam4_grid_pane_g1

0x0403,	// (0x0006a328) cam4_grid_pane_g2

0x197b,	// (0x0006b8a0) cam4_grid_pane_g3

0x1984,	// (0x0006b8a9) cam4_grid_pane_g4

0x0003,

0xfdd8,	// (0x00079cfd) cam4_grid_pane_g

0x75c0,	// (0x000714e5) aid_placing_vt_slider_lsc_ParamLimits

0x7900,	// (0x00071825) vidtel_button_pane_ParamLimits

0x7900,	// (0x00071825) vidtel_button_pane

0x1a59,	// (0x0006b97e) bg_button_pane_cp034

0x198f,	// (0x0006b8b4) vidtel_button_pane_g1

0x1997,	// (0x0006b8bc) vidtel_button_pane_t1

0xeca4,	// (0x00078bc9) aid_size_vtel_slider_touch

0x0570,	// (0x0006a495) scroll_pane_cp039

0xc932,	// (0x00076857) ncim_query_button_pane_cp01_ParamLimits

0xc951,	// (0x00076876) ncimui_query_pane_g1_ParamLimits

0x2119,	// (0x0006c03e) input_focus_pane_cp012_ParamLimits

0x0bee,	// (0x0006ab13) ncim_query_entry_pane_t1_ParamLimits

0x0570,	// (0x0006a495) scroll_pane_cp039_ParamLimits

0x3210,	// (0x0006d135) navi_pane_bcale_mc_g1

0x3218,	// (0x0006d13d) navi_pane_bcale_mc_t1

0x1135,	// (0x0006b05a) main_sp_fs_email_pane_g1

0x1141,	// (0x0006b066) main_sp_fs_email_pane_g2

0x0001,

0xfbe9,	// (0x00079b0e) main_sp_fs_email_pane_g

0x1373,	// (0x0006b298) list_single_cale_mrui_row_pane_g3_ParamLimits

0x1373,	// (0x0006b298) list_single_cale_mrui_row_pane_g3

0x66cf,	// (0x000705f4) list_single_recal_day_pane_g5_event_pane

0x66e5,	// (0x0007060a) list_single_recal_day_pane_g7

0x19ad,	// (0x0006b8d2) list_recal_day_event_pane_cp01

0x19b6,	// (0x0006b8db) list_recal_vselct_arw_lo_pane_cp01

0x19be,	// (0x0006b8e3) list_recal_vselct_arw_up_pane_cp01

0x19c6,	// (0x0006b8eb) list_recal_vselct_pane_cp01

0xecb4,	// (0x00078bd9) list_recal_day_event_pane_cp01_g1

0x6899,	// (0x000707be) list_recal_day_event_pane_cp01_t1

0x66ed,	// (0x00070612) list_single_recal_day_pane_t1_ParamLimits

0x66ff,	// (0x00070624) list_single_recal_day_pane_t2_ParamLimits

0xfcbb,	// (0x00079be0) list_single_recal_day_pane_t_ParamLimits

0x20f7,	// (0x0006c01c) bg_notes_pane_ParamLimits

0x21fa,	// (0x0006c11f) list_notes_pane_ParamLimits

0x6ccd,	// (0x00070bf2) scroll_pane_cp06_ParamLimits

0x221c,	// (0x0006c141) main_notes_pane_ParamLimits

0x2119,	// (0x0006c03e) main_welc_pane

0xd943,	// (0x00077868) main_welc_body_pane_ParamLimits

0xd943,	// (0x00077868) main_welc_body_pane

0xd95c,	// (0x00077881) main_welc_opti_pane_ParamLimits

0xd95c,	// (0x00077881) main_welc_opti_pane

0xd9b1,	// (0x000778d6) main_welc_pane_t1_ParamLimits

0xd9b1,	// (0x000778d6) main_welc_pane_t1

0xdb5d,	// (0x00077a82) main_welc_body_row_pane_ParamLimits

0xdb5d,	// (0x00077a82) main_welc_body_row_pane

0x2172,	// (0x0006c097) main_welc_opti_row_pane_ParamLimits

0x2172,	// (0x0006c097) main_welc_opti_row_pane

0x19d8,	// (0x0006b8fd) main_welc_opti_row_pane_g1

0xdb86,	// (0x00077aab) main_welc_opti_row_pane_t1

0x19e0,	// (0x0006b905) main_welc_body_row_pane_t1

0x170e,	// (0x0006b633) popup_notif_wgt_heading_pane

0x1728,	// (0x0006b64d) aid_size_list_notif_wgt_del_ParamLimits

0x1735,	// (0x0006b65a) list_notif_wgt_row_pane_g1_ParamLimits

0x1741,	// (0x0006b666) list_notif_wgt_row_pane_g2_ParamLimits

0x1750,	// (0x0006b675) list_notif_wgt_row_pane_g3_ParamLimits

0xfd22,	// (0x00079c47) list_notif_wgt_row_pane_g_ParamLimits

0x175d,	// (0x0006b682) list_notif_wgt_row_pane_t1_ParamLimits

0x1773,	// (0x0006b698) list_notif_wgt_row_pane_t2_ParamLimits

0x1785,	// (0x0006b6aa) list_notif_wgt_row_pane_t3_ParamLimits

0xfd29,	// (0x00079c4e) list_notif_wgt_row_pane_t_ParamLimits

0xd5e4,	// (0x00077509) listrow_wgtman_pane_g1_ParamLimits

0xd5f1,	// (0x00077516) listrow_wgtman_pane_g2_ParamLimits

0xfd59,	// (0x00079c7e) listrow_wgtman_pane_g_ParamLimits

0x6777,	// (0x0007069c) listrow_wgtman_pane_t1_ParamLimits

0x678f,	// (0x000706b4) listrow_wgtman_pane_t2_ParamLimits

0xfd5e,	// (0x00079c83) listrow_wgtman_pane_t_ParamLimits

0x67b5,	// (0x000706da) wait_bar_pane_cp09_ParamLimits

0x1a59,	// (0x0006b97e) bg_popup_heading_pane_cp02

0x19ef,	// (0x0006b914) popup_notif_wgt_heading_pane_g1

0x19f7,	// (0x0006b91c) popup_notif_wgt_heading_pane_t1

0x1a59,	// (0x0006b97e) main_vids_pane

0x1a59,	// (0x0006b97e) vids_listscroll_pane

0xdb95,	// (0x00077aba) scroll_pane_cp040

0x1a59,	// (0x0006b97e) vids_list_pane

0xdba0,	// (0x00077ac5) vids_list_double_pane_ParamLimits

0xdba0,	// (0x00077ac5) vids_list_double_pane

0xdbb8,	// (0x00077add) vids_list_double_pane_g1

0xdbc1,	// (0x00077ae6) vids_list_double_pane_t1

0xdbd1,	// (0x00077af6) vids_list_double_pane_t2

0x0001,

0xfdf7,	// (0x00079d1c) vids_list_double_pane_t

0x2119,	// (0x0006c03e) main_ncimui_pane_ParamLimits

0xc789,	// (0x000766ae) main_ncimui_pane_g1_ParamLimits

0xc795,	// (0x000766ba) main_ncimui_pane_g2_ParamLimits

0xc795,	// (0x000766ba) main_ncimui_pane_g2

0x0001,

0xfaea,	// (0x00079a0f) main_ncimui_pane_g_ParamLimits

0xfaea,	// (0x00079a0f) main_ncimui_pane_g

0xd975,	// (0x0007789a) main_welc_pane_g1_ParamLimits

0xd975,	// (0x0007789a) main_welc_pane_g1

0xd981,	// (0x000778a6) main_welc_pane_g2_ParamLimits

0xd981,	// (0x000778a6) main_welc_pane_g2

0x0003,

0xfde1,	// (0x00079d06) main_welc_pane_g_ParamLimits

0xfde1,	// (0x00079d06) main_welc_pane_g

0x20f7,	// (0x0006c01c) listscroll_mce_pane_ParamLimits

0x3365,	// (0x0006d28a) wait_bar_pane_cp10

0x46bd,	// (0x0006e5e2) main_cale_day_pane_ParamLimits

0x46bd,	// (0x0006e5e2) main_cale_week_pane_ParamLimits

0x20f7,	// (0x0006c01c) main_messa_pane_ParamLimits

0xa1e9,	// (0x0007410e) main_clock2_btn_pane_ParamLimits

0xa1e9,	// (0x0007410e) main_clock2_btn_pane

0x4f40,	// (0x0006ee65) main_clock2_btn_pane_cp01_ParamLimits

0x4f40,	// (0x0006ee65) main_clock2_btn_pane_cp01

0x1352,	// (0x0006b277) list_cale_mrui_pane_ParamLimits

0x17bb,	// (0x0006b6e0) main_cf0_pane_g2

0x0001,

0xfd30,	// (0x00079c55) main_cf0_pane_g

0x0089,	// (0x00069fae) area_left_week_number_pane_ParamLimits

0x0089,	// (0x00069fae) area_top_day_name_pane_ParamLimits

0x0089,	// (0x00069fae) frame_month_view_pane_ParamLimits

0x0089,	// (0x00069fae) grid_month_view_pane_ParamLimits

0x007d,	// (0x00069fa2) frm_month_g1_ParamLimits

0x007d,	// (0x00069fa2) frm_month_g2_ParamLimits

0x007d,	// (0x00069fa2) frm_month_g3_ParamLimits

0x007d,	// (0x00069fa2) frm_month_g4_ParamLimits

0x007d,	// (0x00069fa2) frm_month_g5_ParamLimits

0x007d,	// (0x00069fa2) frm_month_g6_ParamLimits

0x007d,	// (0x00069fa2) frm_month_g7_ParamLimits

0x007d,	// (0x00069fa2) frm_month_g8_ParamLimits

0x007d,	// (0x00069fa2) frm_month_g9_ParamLimits

0x007d,	// (0x00069fa2) frm_month_g10_ParamLimits

0x007d,	// (0x00069fa2) frm_month_g11_ParamLimits

0x007d,	// (0x00069fa2) frm_month_g12_ParamLimits

0x007d,	// (0x00069fa2) frm_month_g13_ParamLimits

0x007d,	// (0x00069fa2) frm_month_g14_ParamLimits

0x007d,	// (0x00069fa2) frm_month_g15_ParamLimits

0x007d,	// (0x00069fa2) frm_month_g16_ParamLimits

0xfd88,	// (0x00079cad) frm_month_g_ParamLimits

0x18d4,	// (0x0006b7f9) cell_top_day_name_pane_t1_ParamLimits

0x007d,	// (0x00069fa2) cell_area_left_week_number_pane_g1_ParamLimits

0x18d4,	// (0x0006b7f9) cell_area_left_week_number_pane_t1_ParamLimits

0x007d,	// (0x00069fa2) cell_month_view_pane_g1_ParamLimits

0x18d4,	// (0x0006b7f9) cell_month_view_pane_t1_ParamLimits

0x20ef,	// (0x0006c014) main_clock2_btn_pane_g1

0x1a05,	// (0x0006b92a) main_clock2_btn_pane_t1

0x2119,	// (0x0006c03e) listscroll_cmail_pane_ParamLimits

0x1135,	// (0x0006b05a) main_sp_fs_email_pane_g1_ParamLimits

0x1141,	// (0x0006b066) main_sp_fs_email_pane_g2_ParamLimits

0xfbe9,	// (0x00079b0e) main_sp_fs_email_pane_g_ParamLimits

0x1491,	// (0x0006b3b6) list_recal_day_pane_ParamLimits

0x14a2,	// (0x0006b3c7) mian_recal_day_pane_t1

0x6292,	// (0x000701b7) list_single_dyc_row_text_pane_t4_ParamLimits

0x6292,	// (0x000701b7) list_single_dyc_row_text_pane_t4

0x62c9,	// (0x000701ee) list_single_dyc_row_text_pane_t5_ParamLimits

0x62c9,	// (0x000701ee) list_single_dyc_row_text_pane_t5

0x633f,	// (0x00070264) list_single_dyc_row_text_pane_t6_ParamLimits

0x633f,	// (0x00070264) list_single_dyc_row_text_pane_t6

0x8779,	// (0x0007269e) aid_mgn_list_cale_time_pane

0x2119,	// (0x0006c03e) main_gallery2_pane_ParamLimits

0x4f56,	// (0x0006ee7b) main_clock2_pane_cp01_t1

0x4f64,	// (0x0006ee89) main_clock2_pane_cp01_t3

0x0001,

0xf6d9,	// (0x000795fe) main_clock2_pane_cp01_t

0x70f6,	// (0x0007101b) cale_week_scroll_pane_g16_ParamLimits

0x70f6,	// (0x0007101b) cale_week_scroll_pane_g16

0x2807,	// (0x0006c72c) vorec_slider_pane

0x1997,	// (0x0006b8bc) vidtel_button_pane_t1_ParamLimits

0xd23b,	// (0x00077160) main_fs_bigclock_clock_pane_g1_ParamLimits

0xd23b,	// (0x00077160) main_fs_bigclock_clock_pane_g2_ParamLimits

0xd23b,	// (0x00077160) main_fs_bigclock_clock_pane_g3_ParamLimits

0xd23b,	// (0x00077160) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfcde,	// (0x00079c03) main_fs_bigclock_clock_pane_g_ParamLimits

0xd247,	// (0x0007716c) main_fs_bigclock_clock_pane_t1_ParamLimits

0xd25b,	// (0x00077180) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfce7,	// (0x00079c0c) main_fs_bigclock_clock_pane_t_ParamLimits

0x9b2a,	// (0x00073a4f) main_mup3_lyrics_pane_ParamLimits

0x9b2a,	// (0x00073a4f) main_mup3_lyrics_pane

0xdc04,	// (0x00077b29) main_mup3_lyrics_pane_t1_ParamLimits

0xdc04,	// (0x00077b29) main_mup3_lyrics_pane_t1

0xa6f5,	// (0x0007461a) aid_main_mp4_pane_t1_area

0xa6ff,	// (0x00074624) aid_main_mp4_pane_t2_area

0xa804,	// (0x00074729) main_mp4_pane_g7_ParamLimits

0xa804,	// (0x00074729) main_mp4_pane_g7

0xa810,	// (0x00074735) main_mp4_pane_g8_ParamLimits

0xa810,	// (0x00074735) main_mp4_pane_g8

0xabdb,	// (0x00074b00) aid_call6_pane_g1_size

0xd8d6,	// (0x000777fb) list_double_large_graphic_phob2_other_pane_ParamLimits

0xd8d6,	// (0x000777fb) list_double_large_graphic_phob2_other_pane

0x2717,	// (0x0006c63c) list_double_large_graphic_phob2_other_pane_g1

0x1a59,	// (0x0006b97e) list_highlight_pane_cp026

0x2119,	// (0x0006c03e) main_welc_pane_ParamLimits

0xcd93,	// (0x00076cb8) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0xcd93,	// (0x00076cb8) main_sp_fs_ctrlbar_pane_g3

0xcdab,	// (0x00076cd0) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0xcdab,	// (0x00076cd0) main_sp_fs_ctrlbar_pane_g4

0xcddd,	// (0x00076d02) toolbar2_fixed_button_pane_cp01

0xcde8,	// (0x00076d0d) toolbar2_fixed_button_pane_cp02

0xcdf3,	// (0x00076d18) toolbar2_fixed_button_pane_cp03

0xd927,	// (0x0007784c) list_welc_entry_pane_ParamLimits

0xd927,	// (0x0007784c) list_welc_entry_pane

0xd98f,	// (0x000778b4) main_welc_pane_g3_ParamLimits

0xd98f,	// (0x000778b4) main_welc_pane_g3

0xd9cb,	// (0x000778f0) main_welc_pane_t2_ParamLimits

0xd9cb,	// (0x000778f0) main_welc_pane_t2

0xd9df,	// (0x00077904) main_welc_pane_t3_ParamLimits

0xd9df,	// (0x00077904) main_welc_pane_t3

0x0005,

0xfdea,	// (0x00079d0f) main_welc_pane_t_ParamLimits

0xfdea,	// (0x00079d0f) main_welc_pane_t

0xdae5,	// (0x00077a0a) welc_button_pane_ParamLimits

0xdae5,	// (0x00077a0a) welc_button_pane

0xdb4f,	// (0x00077a74) welc_service_logo_pane_ParamLimits

0xdb4f,	// (0x00077a74) welc_service_logo_pane

0xdc3a,	// (0x00077b5f) list_single_welc_entry_pane_ParamLimits

0xdc3a,	// (0x00077b5f) list_single_welc_entry_pane

0xdc4b,	// (0x00077b70) list_single_welc_entry_pane_g1

0xdc53,	// (0x00077b78) list_single_welc_entry_pane_t1

0xdc61,	// (0x00077b86) list_single_welc_entry_pane_t2

0x0001,

0xfdfc,	// (0x00079d21) list_single_welc_entry_pane_t

0x1a59,	// (0x0006b97e) bg_button_pane_cp035

0xdc6f,	// (0x00077b94) welc_button_pane_t1

0x1a13,	// (0x0006b938) welc_service_logo_pane_g1

0x1a1c,	// (0x0006b941) welc_service_logo_pane_g2

0x0001,

0xfe01,	// (0x00079d26) welc_service_logo_pane_g

0x1a59,	// (0x0006b97e) main_int_radio_pane

0x0a8c,	// (0x0006a9b1) list_single_fs_dyc_pane_g1

0x67d3,	// (0x000706f8) list_double_large_graphic_phob2_pane_g3_ParamLimits

0x67d3,	// (0x000706f8) list_double_large_graphic_phob2_pane_g3

0xd825,	// (0x0007774a) list_double_large_graphic_phob2_pane_g4_ParamLimits

0xd825,	// (0x0007774a) list_double_large_graphic_phob2_pane_g4

0xdc7d,	// (0x00077ba2) main_int_radio1_pane_ParamLimits

0xdc7d,	// (0x00077ba2) main_int_radio1_pane

0x1a25,	// (0x0006b94a) find_pane_cp02

0xdc8f,	// (0x00077bb4) input_focus_pane_cp12_ParamLimits

0xdc8f,	// (0x00077bb4) input_focus_pane_cp12

0xdc9b,	// (0x00077bc0) input_focus_pane_cp13_ParamLimits

0xdc9b,	// (0x00077bc0) input_focus_pane_cp13

0xdcb3,	// (0x00077bd8) input_focus_pane_cp14_ParamLimits

0xdcb3,	// (0x00077bd8) input_focus_pane_cp14

0x1a2e,	// (0x0006b953) int_radio1_listscroll_pane

0xdccb,	// (0x00077bf0) main_int_radio1_pane_g1_ParamLimits

0xdccb,	// (0x00077bf0) main_int_radio1_pane_g1

0xdcdb,	// (0x00077c00) main_int_radio1_pane_t1_ParamLimits

0xdcdb,	// (0x00077c00) main_int_radio1_pane_t1

0xdcef,	// (0x00077c14) main_int_radio1_pane_t2_ParamLimits

0xdcef,	// (0x00077c14) main_int_radio1_pane_t2

0xdd03,	// (0x00077c28) main_int_radio1_pane_t3_ParamLimits

0xdd03,	// (0x00077c28) main_int_radio1_pane_t3

0xdd17,	// (0x00077c3c) main_int_radio1_pane_t4_ParamLimits

0xdd17,	// (0x00077c3c) main_int_radio1_pane_t4

0x1a38,	// (0x0006b95d) main_int_radio1_pane_t5_ParamLimits

0x1a38,	// (0x0006b95d) main_int_radio1_pane_t5

0xdd2e,	// (0x00077c53) main_int_radio1_pane_t6_ParamLimits

0xdd2e,	// (0x00077c53) main_int_radio1_pane_t6

0xdd40,	// (0x00077c65) main_int_radio1_pane_t7_ParamLimits

0xdd40,	// (0x00077c65) main_int_radio1_pane_t7

0xdd52,	// (0x00077c77) main_int_radio1_pane_t8_ParamLimits

0xdd52,	// (0x00077c77) main_int_radio1_pane_t8

0xdd66,	// (0x00077c8b) main_int_radio1_pane_t9_ParamLimits

0xdd66,	// (0x00077c8b) main_int_radio1_pane_t9

0xdd78,	// (0x00077c9d) main_int_radio1_pane_t10_ParamLimits

0xdd78,	// (0x00077c9d) main_int_radio1_pane_t10

0xdda9,	// (0x00077cce) main_int_radio1_pane_t11_ParamLimits

0xdda9,	// (0x00077cce) main_int_radio1_pane_t11

0xddda,	// (0x00077cff) main_int_radio1_pane_t12_ParamLimits

0xddda,	// (0x00077cff) main_int_radio1_pane_t12

0x000b,

0xfe06,	// (0x00079d2b) main_int_radio1_pane_t_ParamLimits

0xfe06,	// (0x00079d2b) main_int_radio1_pane_t

0x22fc,	// (0x0006c221) int_radio_list_pane

0x1474,	// (0x0006b399) scroll_pane_cp037

0x2304,	// (0x0006c229) list_double_large_graphic_int_radio_pane_ParamLimits

0x2304,	// (0x0006c229) list_double_large_graphic_int_radio_pane

0x231d,	// (0x0006c242) list_double_large_graphic_int_radio_pane_g1

0x68a7,	// (0x000707cc) list_double_large_graphic_int_radio_pane_t1

0x68b5,	// (0x000707da) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfe1f,	// (0x00079d44) list_double_large_graphic_int_radio_pane_t

0x1a59,	// (0x0006b97e) list_highlight_pane_cp027

0x19d0,	// (0x0006b8f5) main_button_pane_4

0xd99b,	// (0x000778c0) main_welc_pane_g4_ParamLimits

0xd99b,	// (0x000778c0) main_welc_pane_g4

0xd9f1,	// (0x00077916) main_welc_pane_t4_ParamLimits

0xd9f1,	// (0x00077916) main_welc_pane_t4

0xda05,	// (0x0007792a) main_welc_pane_t5_ParamLimits

0xda05,	// (0x0007792a) main_welc_pane_t5

0xda3d,	// (0x00077962) main_welc_pane_t6_ParamLimits

0xda3d,	// (0x00077962) main_welc_pane_t6

0xdaf3,	// (0x00077a18) welc_button_pane_2_ParamLimits

0xdaf3,	// (0x00077a18) welc_button_pane_2

0xdb11,	// (0x00077a36) welc_button_pane_3_ParamLimits

0xdb11,	// (0x00077a36) welc_button_pane_3

0x19d0,	// (0x0006b8f5) welc_button_pane_4

0xdb31,	// (0x00077a56) welc_button_pane_5_ParamLimits

0xdb31,	// (0x00077a56) welc_button_pane_5

0x6917,	// (0x0007083c) main_popup_welc_pane

0x233e,	// (0x0006c263) main_welc_sk_g3

0x2348,	// (0x0006c26d) main_welc_sk_g4

0x2352,	// (0x0006c277) main_welc_sk_t3

0x2362,	// (0x0006c287) main_welc_sk_t4

0x2372,	// (0x0006c297) popup_welc_pane_t4

0x2380,	// (0x0006c2a5) popup_welc_pane_t5

0x238e,	// (0x0006c2b3) popup_welc_pane_t6

0x1a59,	// (0x0006b97e) main_acti_pane

0x1a59,	// (0x0006b97e) main_sso_pane

0xddf1,	// (0x00077d16) sso_body_pane_ParamLimits

0xddf1,	// (0x00077d16) sso_body_pane

0xde0b,	// (0x00077d30) sso_logo_pane_ParamLimits

0xde0b,	// (0x00077d30) sso_logo_pane

0xde3c,	// (0x00077d61) sso_sk_pane_ParamLimits

0xde3c,	// (0x00077d61) sso_sk_pane

0x23cc,	// (0x0006c2f1) main_sso_logo_pane_g1

0xde49,	// (0x00077d6e) sso_sk_pane_t1_ParamLimits

0xde49,	// (0x00077d6e) sso_sk_pane_t1

0xde5d,	// (0x00077d82) sso_sk_pane_t2_ParamLimits

0xde5d,	// (0x00077d82) sso_sk_pane_t2

0x0001,

0xfe24,	// (0x00079d49) sso_sk_pane_t_ParamLimits

0xfe24,	// (0x00079d49) sso_sk_pane_t

0x23d5,	// (0x0006c2fa) aid_sso_gap

0x23de,	// (0x0006c303) aid_sso_txt1

0x23e8,	// (0x0006c30d) aid_sso_txt2

0x23f2,	// (0x0006c317) aid_sso_txt3

0x0002,

0xfe29,	// (0x00079d4e) aid_sso_txt

0x23fc,	// (0x0006c321) aid_sso_widget

0xdeba,	// (0x00077ddf) sso_btn_pane_ParamLimits

0xdeba,	// (0x00077ddf) sso_btn_pane

0xdf40,	// (0x00077e65) sso_option_pane_ParamLimits

0xdf40,	// (0x00077e65) sso_option_pane

0xdfea,	// (0x00077f0f) sso_query_pane_ParamLimits

0xdfea,	// (0x00077f0f) sso_query_pane

0xe03a,	// (0x00077f5f) sso_query_pane_cp01_ParamLimits

0xe03a,	// (0x00077f5f) sso_query_pane_cp01

0xe08a,	// (0x00077faf) sso_t_hdr_pane_ParamLimits

0xe08a,	// (0x00077faf) sso_t_hdr_pane

0xe0ae,	// (0x00077fd3) sso_t_nml_pane_ParamLimits

0xe0ae,	// (0x00077fd3) sso_t_nml_pane

0xe0fe,	// (0x00078023) sso_t_sub_pane

0xde18,	// (0x00077d3d) sso_popup_window_ParamLimits

0xde18,	// (0x00077d3d) sso_popup_window

0xde6f,	// (0x00077d94) sso_apps_pane_ParamLimits

0xde6f,	// (0x00077d94) sso_apps_pane

0xde92,	// (0x00077db7) sso_body_pane_g1

0xde9a,	// (0x00077dbf) sso_body_pane_t1

0xdeaa,	// (0x00077dcf) sso_body_pane_t2

0x0001,

0xfe30,	// (0x00079d55) sso_body_pane_t

0xdf00,	// (0x00077e25) sso_btn_pane_cp01_ParamLimits

0xdf00,	// (0x00077e25) sso_btn_pane_cp01

0xdfbc,	// (0x00077ee1) sso_prog_pane_ParamLimits

0xdfbc,	// (0x00077ee1) sso_prog_pane

0xe123,	// (0x00078048) sso_t_hdr_pane_t1_ParamLimits

0xe123,	// (0x00078048) sso_t_hdr_pane_t1

0x2406,	// (0x0006c32b) input_focus_pane_cp10_ParamLimits

0x2406,	// (0x0006c32b) input_focus_pane_cp10

0x241a,	// (0x0006c33f) sso_query_pane_t1_ParamLimits

0x241a,	// (0x0006c33f) sso_query_pane_t1

0x242d,	// (0x0006c352) sso_query_pane_t2_ParamLimits

0x242d,	// (0x0006c352) sso_query_pane_t2

0x2446,	// (0x0006c36b) sso_query_pane_t3_ParamLimits

0x2446,	// (0x0006c36b) sso_query_pane_t3

0x2470,	// (0x0006c395) sso_query_pane_t4_ParamLimits

0x2470,	// (0x0006c395) sso_query_pane_t4

0x0003,

0xfe35,	// (0x00079d5a) sso_query_pane_t_ParamLimits

0xfe35,	// (0x00079d5a) sso_query_pane_t

0x2494,	// (0x0006c3b9) bg_button_pane_cp22

0x2326,	// (0x0006c24b) sso_btn_pane_t1

0xe13c,	// (0x00078061) sso_t_nml_pane_t1_ParamLimits

0xe13c,	// (0x00078061) sso_t_nml_pane_t1

0x249d,	// (0x0006c3c2) sso_option_row_pane_ParamLimits

0x249d,	// (0x0006c3c2) sso_option_row_pane

0x24aa,	// (0x0006c3cf) sso_t_sub_pane_t1_ParamLimits

0x24aa,	// (0x0006c3cf) sso_t_sub_pane_t1

0x2119,	// (0x0006c03e) bg_popup_window_pane_cp11_ParamLimits

0x2119,	// (0x0006c03e) bg_popup_window_pane_cp11

0x24c7,	// (0x0006c3ec) popup_sk_window_cp01_ParamLimits

0x24c7,	// (0x0006c3ec) popup_sk_window_cp01

0x24d4,	// (0x0006c3f9) sso_popup_body_pane_ParamLimits

0x24d4,	// (0x0006c3f9) sso_popup_body_pane

0x24e1,	// (0x0006c406) scroll_pane_cp21_ParamLimits

0x24e1,	// (0x0006c406) scroll_pane_cp21

0x24ee,	// (0x0006c413) sso_popup_body_t_pane_ParamLimits

0x24ee,	// (0x0006c413) sso_popup_body_t_pane

0x24fb,	// (0x0006c420) sso_popup_body_t_hdr_pane_ParamLimits

0x24fb,	// (0x0006c420) sso_popup_body_t_hdr_pane

0xe159,	// (0x0007807e) sso_popup_body_t_nml_pane_ParamLimits

0xe159,	// (0x0007807e) sso_popup_body_t_nml_pane

0xe177,	// (0x0007809c) sso_popup_body_t_sub_pane_ParamLimits

0xe177,	// (0x0007809c) sso_popup_body_t_sub_pane

0x250d,	// (0x0006c432) sso_popup_body_t_hdr_pane_t1

0xe19a,	// (0x000780bf) sso_popup_body_t_nml_pane_t1_ParamLimits

0xe19a,	// (0x000780bf) sso_popup_body_t_nml_pane_t1

0x251d,	// (0x0006c442) sso_popup_body_t_sub_pane_t1_ParamLimits

0x251d,	// (0x0006c442) sso_popup_body_t_sub_pane_t1

0x21be,	// (0x0006c0e3) sso_prog_pane_g1

0xe1e1,	// (0x00078106) sso_apps_pane_comp1_ParamLimits

0xe1e1,	// (0x00078106) sso_apps_pane_comp1

0x2542,	// (0x0006c467) sso_apps_pane_comp1_g1

0x254a,	// (0x0006c46f) sso_apps_pane_comp1_t1

0x2566,	// (0x0006c48b) sso_option_row_pane_g1

0x257e,	// (0x0006c4a3) sso_option_row_pane_t1

0x11e2,	// (0x0006b107) list_cmail_pane_ParamLimits

0x1a59,	// (0x0006b97e) main_call7_pane

0xd915,	// (0x0007783a) bg_welc_area_ParamLimits

0xd915,	// (0x0007783a) bg_welc_area

0xda73,	// (0x00077998) sso_t_hdr_pane_a_t1_ParamLimits

0xda73,	// (0x00077998) sso_t_hdr_pane_a_t1

0xda87,	// (0x000779ac) sso_t_nml_pane_a_t1_ParamLimits

0xda87,	// (0x000779ac) sso_t_nml_pane_a_t1

0xdab1,	// (0x000779d6) sso_t_sub_pane_a_t1_ParamLimits

0xdab1,	// (0x000779d6) sso_t_sub_pane_a_t1

0xdb41,	// (0x00077a66) welc_button_pane_cp01_ParamLimits

0xdb41,	// (0x00077a66) welc_button_pane_cp01

0x2326,	// (0x0006c24b) sso_btn_pane_t1_copy1

0x2335,	// (0x0006c25a) welc_button_pane_2_comp1

0x239c,	// (0x0006c2c1) sso_t_hdr_pane_p_t1

0x23ac,	// (0x0006c2d1) sso_t_nml_pane_p_t1

0x23bc,	// (0x0006c2e1) sso_t_sub_pane_p_t1

0x1a59,	// (0x0006b97e) main_att_pane

0x1a59,	// (0x0006b97e) main_vod_pane

0xe0fe,	// (0x00078023) sso_t_sub_pane_ParamLimits

0x2558,	// (0x0006c47d) input_focus_pane_cp10_t1

0x257e,	// (0x0006c4a3) sso_option_row_pane_t1_ParamLimits

0xe1fb,	// (0x00078120) main_att_body_pane_ParamLimits

0xe1fb,	// (0x00078120) main_att_body_pane

0xe20f,	// (0x00078134) att_btn_emg_pane_ParamLimits

0xe20f,	// (0x00078134) att_btn_emg_pane

0xe227,	// (0x0007814c) att_btn_pane_ParamLimits

0xe227,	// (0x0007814c) att_btn_pane

0xe28d,	// (0x000781b2) att_btn_pane_cp01_ParamLimits

0xe28d,	// (0x000781b2) att_btn_pane_cp01

0xe2bf,	// (0x000781e4) att_li_srv_pane_ParamLimits

0xe2bf,	// (0x000781e4) att_li_srv_pane

0xe2d1,	// (0x000781f6) att_opt_pane_ParamLimits

0xe2d1,	// (0x000781f6) att_opt_pane

0xe315,	// (0x0007823a) att_query_pane_ParamLimits

0xe315,	// (0x0007823a) att_query_pane

0xe385,	// (0x000782aa) att_query_pane_cp01_ParamLimits

0xe385,	// (0x000782aa) att_query_pane_cp01

0xe3c9,	// (0x000782ee) att_t_hdr_pane_ParamLimits

0xe3c9,	// (0x000782ee) att_t_hdr_pane

0xe42f,	// (0x00078354) att_t_nml_pane_ParamLimits

0xe42f,	// (0x00078354) att_t_nml_pane

0xe497,	// (0x000783bc) att_t_nml_pane_cp01_ParamLimits

0xe497,	// (0x000783bc) att_t_nml_pane_cp01

0xe4bb,	// (0x000783e0) att_t_nmlb_pane_ParamLimits

0xe4bb,	// (0x000783e0) att_t_nmlb_pane

0xe51f,	// (0x00078444) att_term_pane_ParamLimits

0xe51f,	// (0x00078444) att_term_pane

0xe561,	// (0x00078486) main_att_body_pane_g1_ParamLimits

0xe561,	// (0x00078486) main_att_body_pane_g1

0x259a,	// (0x0006c4bf) att_t_hdr_pane_t1_ParamLimits

0x259a,	// (0x0006c4bf) att_t_hdr_pane_t1

0x25b3,	// (0x0006c4d8) att_t_nml_pane_t1_ParamLimits

0x25b3,	// (0x0006c4d8) att_t_nml_pane_t1

0x25d8,	// (0x0006c4fd) att_btn_pane_t1

0x2494,	// (0x0006c3b9) bg_button_pane_cp23

0xe58b,	// (0x000784b0) att_li_srv_row_pane_ParamLimits

0xe58b,	// (0x000784b0) att_li_srv_row_pane

0x25e7,	// (0x0006c50c) att_t_nmlb_pane_t1_ParamLimits

0x25e7,	// (0x0006c50c) att_t_nmlb_pane_t1

0x2603,	// (0x0006c528) att_query_pane_t1

0x2612,	// (0x0006c537) att_query_pane_t2

0x2621,	// (0x0006c546) att_query_pane_t3

0x0002,

0xfe43,	// (0x00079d68) att_query_pane_t

0x2630,	// (0x0006c555) input_focus_pane_cp11

0x2639,	// (0x0006c55e) att_term_pane_t1_ParamLimits

0x2639,	// (0x0006c55e) att_term_pane_t1

0x1a59,	// (0x0006b97e) att_opt_row_pane

0x2656,	// (0x0006c57b) att_opt_row_pane_g1

0x265e,	// (0x0006c583) att_opt_row_pane_t1_ParamLimits

0x265e,	// (0x0006c583) att_opt_row_pane_t1

0xe59b,	// (0x000784c0) att_li_srv_row_pane_g1

0xe5a3,	// (0x000784c8) att_li_srv_row_pane_t1_ParamLimits

0xe5a3,	// (0x000784c8) att_li_srv_row_pane_t1

0xe5a3,	// (0x000784c8) att_li_srv_row_pane_t2_ParamLimits

0xe5a3,	// (0x000784c8) att_li_srv_row_pane_t2

0x0001,

0xfe4a,	// (0x00079d6f) att_li_srv_row_pane_t_ParamLimits

0xfe4a,	// (0x00079d6f) att_li_srv_row_pane_t

0x2677,	// (0x0006c59c) att_btn_close_pane_g1

0x1a59,	// (0x0006b97e) bg_button_pane_cp24

0x9514,	// (0x00073439) main_vod_body_pane_ParamLimits

0x9514,	// (0x00073439) main_vod_body_pane

0xe5b8,	// (0x000784dd) main_vod_body_pane_g1_ParamLimits

0xe5b8,	// (0x000784dd) main_vod_body_pane_g1

0xe5e8,	// (0x0007850d) scroll_pane_cp24_ParamLimits

0xe5e8,	// (0x0007850d) scroll_pane_cp24

0xe630,	// (0x00078555) vod_btn_pane_ParamLimits

0xe630,	// (0x00078555) vod_btn_pane

0xe66e,	// (0x00078593) vod_det_pane_ParamLimits

0xe66e,	// (0x00078593) vod_det_pane

0xe698,	// (0x000785bd) vod_logo_g1_ParamLimits

0xe698,	// (0x000785bd) vod_logo_g1

0xe6d2,	// (0x000785f7) vod_opt_pane_ParamLimits

0xe6d2,	// (0x000785f7) vod_opt_pane

0xe702,	// (0x00078627) vod_opt_pane_cp01_ParamLimits

0xe702,	// (0x00078627) vod_opt_pane_cp01

0xe72a,	// (0x0007864f) vod_query_pane_ParamLimits

0xe72a,	// (0x0007864f) vod_query_pane

0xe752,	// (0x00078677) vod_query_pane_cp01_ParamLimits

0xe752,	// (0x00078677) vod_query_pane_cp01

0xe75e,	// (0x00078683) vod_t_nml_pane_ParamLimits

0xe75e,	// (0x00078683) vod_t_nml_pane

0xe800,	// (0x00078725) vod_t_nml_pane_cp01_ParamLimits

0xe800,	// (0x00078725) vod_t_nml_pane_cp01

0xe838,	// (0x0007875d) vod_t_sub_pane_ParamLimits

0xe838,	// (0x0007875d) vod_t_sub_pane

0xe864,	// (0x00078789) vod_t_sub_pane_cp01_ParamLimits

0xe864,	// (0x00078789) vod_t_sub_pane_cp01

0x2630,	// (0x0006c555) vod_query_field_pane

0x267f,	// (0x0006c5a4) vod_query_pane_t1

0x268e,	// (0x0006c5b3) bg_button_pane_cp25

0x2326,	// (0x0006c24b) sso_btn_pane_t1_copy2

0xe88c,	// (0x000787b1) vod_t_nml_pane_t1_ParamLimits

0xe88c,	// (0x000787b1) vod_t_nml_pane_t1

0x2697,	// (0x0006c5bc) vod_opt_row_pane_ParamLimits

0x2697,	// (0x0006c5bc) vod_opt_row_pane

0x26a9,	// (0x0006c5ce) vod_t_sub_pane_t1_ParamLimits

0x26a9,	// (0x0006c5ce) vod_t_sub_pane_t1

0x26c2,	// (0x0006c5e7) vod_det_cell_pane_ParamLimits

0x26c2,	// (0x0006c5e7) vod_det_cell_pane

0x1a59,	// (0x0006b97e) input_focus_pane_cp15

0x26d3,	// (0x0006c5f8) vod_query_field_pane_t1

0x26e1,	// (0x0006c606) vod_opt_row_pane_g1_ParamLimits

0x26e1,	// (0x0006c606) vod_opt_row_pane_g1

0x2971,	// (0x0006c896) vod_opt_row_pane_t1_ParamLimits

0x2971,	// (0x0006c896) vod_opt_row_pane_t1

0x2991,	// (0x0006c8b6) vod_det_cell_field_pane

0x299a,	// (0x0006c8bf) vod_det_cell_pane_g1

0x29a2,	// (0x0006c8c7) vod_det_cell_pane_t1

0x1a59,	// (0x0006b97e) input_focus_pane_cp16

0x29b1,	// (0x0006c8d6) vod_det_cell_field_pane_t1

0xd4ce,	// (0x000773f3) call7_btn_grp_pane_ParamLimits

0xd4ce,	// (0x000773f3) call7_btn_grp_pane

0xe8c1,	// (0x000787e6) call7_bubble_pane_ParamLimits

0xe8c1,	// (0x000787e6) call7_bubble_pane

0xd509,	// (0x0007742e) cell_call7_btn_pane_ParamLimits

0xd509,	// (0x0007742e) cell_call7_btn_pane

0xe8cf,	// (0x000787f4) call7_pane_g1_ParamLimits

0xe8cf,	// (0x000787f4) call7_pane_g1

0xe8de,	// (0x00078803) call7_windows_conf_pane_ParamLimits

0xe8de,	// (0x00078803) call7_windows_conf_pane

0xe8fa,	// (0x0007881f) popup_call7_1st_window_ParamLimits

0xe8fa,	// (0x0007881f) popup_call7_1st_window

0xe908,	// (0x0007882d) popup_call7_2nd_window_ParamLimits

0xe908,	// (0x0007882d) popup_call7_2nd_window

0xe916,	// (0x0007883b) popup_call7_3rd_window_ParamLimits

0xe916,	// (0x0007883b) popup_call7_3rd_window

0x1a59,	// (0x0006b97e) bg_button_pane_cp26

0x186b,	// (0x0006b790) cell_call7_btn_pane_g1

0x1a4a,	// (0x0006b96f) cell_call7_btn_pane_t1

0x1a59,	// (0x0006b97e) bg_popup_window_pane_cp12

0x29bf,	// (0x0006c8e4) popup_call7_1st_window_g1

0x29c7,	// (0x0006c8ec) popup_call7_1st_window_g2

0x29cf,	// (0x0006c8f4) popup_call7_1st_window_g3

0x0002,

0xfe4f,	// (0x00079d74) popup_call7_1st_window_g

0x29d7,	// (0x0006c8fc) popup_call7_1st_window_t1

0x29e6,	// (0x0006c90b) popup_call7_1st_window_t2

0x29f4,	// (0x0006c919) popup_call7_1st_window_t3

0x0002,

0xfe56,	// (0x00079d7b) popup_call7_1st_window_t

0x1a59,	// (0x0006b97e) bg_popup_window_pane_cp13

0x2a02,	// (0x0006c927) popup_call7_2nd_window_g1

0x2a0a,	// (0x0006c92f) popup_call7_2nd_window_g2

0x2a12,	// (0x0006c937) popup_call7_2nd_window_g3

0x0002,

0xfe5d,	// (0x00079d82) popup_call7_2nd_window_g

0x2a1a,	// (0x0006c93f) popup_call7_2nd_window_t1

0x1a59,	// (0x0006b97e) bg_popup_window_pane_cp14

0x2a29,	// (0x0006c94e) call7_list_conf_pane

0x2a31,	// (0x0006c956) call7_list_conf_row_pane_ParamLimits

0x2a31,	// (0x0006c956) call7_list_conf_row_pane

0x2a44,	// (0x0006c969) call7_list_conf_row_pane_g1

0x2a4c,	// (0x0006c971) call7_list_conf_row_pane_g2

0x0001,

0xfe64,	// (0x00079d89) call7_list_conf_row_pane_g

0x2a54,	// (0x0006c979) call7_list_conf_row_pane_t1

0x1a59,	// (0x0006b97e) list_highlight_pane_cp22

0xdf8e,	// (0x00077eb3) sso_option_pane_cp01_ParamLimits

0xdf8e,	// (0x00077eb3) sso_option_pane_cp01

0x20f7,	// (0x0006c01c) msg_header_pane_ParamLimits

0x34f1,	// (0x0006d416) bg_button_pane_cp01_ParamLimits

0x5fdc,	// (0x0006ff01) input_focus_pane_cp07_ParamLimits

0xce27,	// (0x00076d4c) popup_email_progress_window

0x21be,	// (0x0006c0e3) popup_email_progress_window_g1

0x2a62,	// (0x0006c987) popup_email_progress_window_g2

0x0001,

0xfe69,	// (0x00079d8e) popup_email_progress_window_g

0x2a6a,	// (0x0006c98f) popup_email_progress_window_t1

0x1a59,	// (0x0006b97e) cmail_conv_pane

0x6392,	// (0x000702b7) list_single_dyc_row_pane_g5_ParamLimits

0x6392,	// (0x000702b7) list_single_dyc_row_pane_g5

0x639e,	// (0x000702c3) list_single_dyc_row_pane_g6_ParamLimits

0x639e,	// (0x000702c3) list_single_dyc_row_pane_g6

0x63b6,	// (0x000702db) list_single_dyc_row_pane_g7_ParamLimits

0x63b6,	// (0x000702db) list_single_dyc_row_pane_g7

0xd937,	// (0x0007785c) main_button_pane_5_ParamLimits

0xd937,	// (0x0007785c) main_button_pane_5

0xddff,	// (0x00077d24) sso_emg_call_btn_pane_ParamLimits

0xddff,	// (0x00077d24) sso_emg_call_btn_pane

0xe113,	// (0x00078038) sso_t_sub_pane_cp01_ParamLimits

0xe113,	// (0x00078038) sso_t_sub_pane_cp01

0x2566,	// (0x0006c48b) sso_option_row_pane_g1_ParamLimits

0x2572,	// (0x0006c497) sso_option_row_pane_g2_ParamLimits

0x2572,	// (0x0006c497) sso_option_row_pane_g2

0x0001,

0xfe3e,	// (0x00079d63) sso_option_row_pane_g_ParamLimits

0xfe3e,	// (0x00079d63) sso_option_row_pane_g

0xe2a5,	// (0x000781ca) att_btn_pane_cp02_ParamLimits

0xe2a5,	// (0x000781ca) att_btn_pane_cp02

0x2a78,	// (0x0006c99d) cmail_conv_hdr_pane

0x2a81,	// (0x0006c9a6) list_cmail_conv_pane

0x2a8b,	// (0x0006c9b0) scroll_pane_cp31

0x2a93,	// (0x0006c9b8) cmail_conv_hdr_pane_t1

0x2aa1,	// (0x0006c9c6) cmail_conv_hdr_pane_t2

0x0001,

0xfe6e,	// (0x00079d93) cmail_conv_hdr_pane_t

0x2aaf,	// (0x0006c9d4) bubble_cmail_conv_pane_ParamLimits

0x2aaf,	// (0x0006c9d4) bubble_cmail_conv_pane

0x1304,	// (0x0006b229) aid_size_colorization_pane

0x2807,	// (0x0006c72c) bg_bubble_cmail_conv_pane

0x2ac7,	// (0x0006c9ec) body_bubble_cmail_conv_pane

0x2e83,	// (0x0006cda8) bubble_cmail_conv_pane_g1

0x2acf,	// (0x0006c9f4) bubble_cmail_conv_pane_g2

0x2ad7,	// (0x0006c9fc) bubble_cmail_conv_pane_g3

0x0002,

0xfe73,	// (0x00079d98) bubble_cmail_conv_pane_g

0x2adf,	// (0x0006ca04) bubble_cmail_conv_pane_t1

0x1188,	// (0x0006b0ad) bg_bubble_cmail_conv_pane_g1

0x1191,	// (0x0006b0b6) bg_bubble_cmail_conv_pane_g2

0x119a,	// (0x0006b0bf) bg_bubble_cmail_conv_pane_g3

0x0002,

0xfc14,	// (0x00079b39) bg_bubble_cmail_conv_pane_g

0x2aed,	// (0x0006ca12) body_bubble_cmail_conv_pane_t1_ParamLimits

0x2aed,	// (0x0006ca12) body_bubble_cmail_conv_pane_t1

0x2b04,	// (0x0006ca29) body_bubble_cmail_conv_pane_t2_ParamLimits

0x2b04,	// (0x0006ca29) body_bubble_cmail_conv_pane_t2

0x0001,

0xfe7a,	// (0x00079d9f) body_bubble_cmail_conv_pane_t_ParamLimits

0xfe7a,	// (0x00079d9f) body_bubble_cmail_conv_pane_t

0x2172,	// (0x0006c097) list_highlight_pane_cp024_ParamLimits
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

} // end of namespace AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch_Large
