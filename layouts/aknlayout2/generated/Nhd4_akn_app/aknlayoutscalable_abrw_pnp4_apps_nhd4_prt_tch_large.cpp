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

#include "aknlayoutscalable_abrw_pnp4_apps_nhd4_prt_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pnp4_apps_nhd4_prt_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x0007cec6 };

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
0x3d49,	// (0x00080c0f) Screen

0x3d55,	// (0x00080c1b) application_window

0x3db1,	// (0x00080c77) area_bottom_pane_ParamLimits

0x3db1,	// (0x00080c77) area_bottom_pane

0x3e09,	// (0x00080ccf) area_top_pane_ParamLimits

0x3e09,	// (0x00080ccf) area_top_pane

0x3e6d,	// (0x00080d33) call_video_uplink_pane_ParamLimits

0x3e6d,	// (0x00080d33) call_video_uplink_pane

0x3eac,	// (0x00080d72) main_pane_ParamLimits

0x3eac,	// (0x00080d72) main_pane

0x1d9e,	// (0x0007ec64) context_pane

0x6d23,	// (0x00083be9) navi_pane

0x6d49,	// (0x00083c0f) popup_cale_events_window_ParamLimits

0x6d49,	// (0x00083c0f) popup_cale_events_window

0x1db1,	// (0x0007ec77) popup_mup_playback_window

0x6d61,	// (0x00083c27) signal_pane

0xd540,	// (0x0008a406) main_browser_pane

0xd6f2,	// (0x0008a5b8) main_burst_pane

0x6ba5,	// (0x00083a6b) main_calc_pane

0x1d3e,	// (0x0007ec04) main_cale_day_pane

0x44d7,	// (0x0008139d) main_cale_month_pane

0x1d3e,	// (0x0007ec04) main_cale_week_pane

0xd6f2,	// (0x0008a5b8) main_call_pane

0xd1ea,	// (0x0008a0b0) main_call_poc_pane

0xd6f2,	// (0x0008a5b8) main_camera_pane

0xd6f2,	// (0x0008a5b8) main_chi_dic_pane

0x06b3,	// (0x0007d579) main_clock_pane

0xd1ea,	// (0x0008a0b0) main_fmradio_pane

0xd6f2,	// (0x0008a5b8) main_graph_messa_pane

0xd1ea,	// (0x0008a0b0) main_help_pane

0xd540,	// (0x0008a406) main_im_pane

0xd445,	// (0x0008a30b) main_image_pane_ParamLimits

0xd445,	// (0x0008a30b) main_image_pane

0xd1ea,	// (0x0008a0b0) main_location2_pane

0xd6f2,	// (0x0008a5b8) main_location_pane

0xd445,	// (0x0008a30b) main_messa_pane

0xd1ea,	// (0x0008a0b0) main_mp2_pane

0xd6f2,	// (0x0008a5b8) main_mp_pane

0xd1ea,	// (0x0008a0b0) main_msg_pane

0xd1ea,	// (0x0008a0b0) main_mup_eq_pane

0xd1ea,	// (0x0008a0b0) main_mup_pane

0xd540,	// (0x0008a406) main_notes_pane

0xd1ea,	// (0x0008a0b0) main_pec_pane

0xd1ea,	// (0x0008a0b0) main_phob_pane

0xd1ea,	// (0x0008a0b0) main_pinb_pane

0xd1ea,	// (0x0008a0b0) main_postcard_pane

0xd1ea,	// (0x0008a0b0) main_qdial_pane

0xd6f2,	// (0x0008a5b8) main_skin_pane

0xd1ea,	// (0x0008a0b0) main_smil2_pane

0xd6f2,	// (0x0008a5b8) main_smil_pane

0xd6f2,	// (0x0008a5b8) main_video_pane

0xd6f2,	// (0x0008a5b8) main_video_tele_pane

0xd445,	// (0x0008a30b) main_viewer_pane_ParamLimits

0xd445,	// (0x0008a30b) main_viewer_pane

0xd6f2,	// (0x0008a5b8) main_vorec_pane

0x6bf1,	// (0x00083ab7) popup_blid_sat_info_window_ParamLimits

0x6bf1,	// (0x00083ab7) popup_blid_sat_info_window

0x6c11,	// (0x00083ad7) popup_dyc_status_message_window_ParamLimits

0x6c11,	// (0x00083ad7) popup_dyc_status_message_window

0x6c1f,	// (0x00083ae5) popup_grid_large_graphic_window_ParamLimits

0x6c1f,	// (0x00083ae5) popup_grid_large_graphic_window

0x6cae,	// (0x00083b74) popup_loc_request_window_ParamLimits

0x6cae,	// (0x00083b74) popup_loc_request_window

0x6cfb,	// (0x00083bc1) popup_wml_address_window_ParamLimits

0x6cfb,	// (0x00083bc1) popup_wml_address_window

0x6a7d,	// (0x00083943) call_muted_g1

0x66f2,	// (0x000835b8) popup_call_audio_conf_window_ParamLimits

0x66f2,	// (0x000835b8) popup_call_audio_conf_window

0x6a8d,	// (0x00083953) popup_call_audio_first_window_ParamLimits

0x6a8d,	// (0x00083953) popup_call_audio_first_window

0x6acd,	// (0x00083993) popup_call_audio_in_window_ParamLimits

0x6acd,	// (0x00083993) popup_call_audio_in_window

0x6af1,	// (0x000839b7) popup_call_audio_out_window_ParamLimits

0x6af1,	// (0x000839b7) popup_call_audio_out_window

0x6b13,	// (0x000839d9) popup_call_audio_second_window_ParamLimits

0x6b13,	// (0x000839d9) popup_call_audio_second_window

0x6b43,	// (0x00083a09) popup_call_audio_wait_window_ParamLimits

0x6b43,	// (0x00083a09) popup_call_audio_wait_window

0x6b64,	// (0x00083a2a) popup_number_entry_window_ParamLimits

0x6b64,	// (0x00083a2a) popup_number_entry_window

0xcdd7,	// (0x00089c9d) bg_popup_call_pane_cp05_ParamLimits

0xcdd7,	// (0x00089c9d) bg_popup_call_pane_cp05

0xcdf7,	// (0x00089cbd) popup_number_entry_window_t1

0xce0a,	// (0x00089cd0) popup_number_entry_window_t2

0xce1c,	// (0x00089ce2) popup_number_entry_window_t3

0x0003,

0xf06b,	// (0x0008bf31) popup_number_entry_window_t

0xce2e,	// (0x00089cf4) text_title_cp2

0xce41,	// (0x00089d07) bg_popup_call_pane_cp_ParamLimits

0xce41,	// (0x00089d07) bg_popup_call_pane_cp

0xce4f,	// (0x00089d15) call_thumbnail_pane

0xce57,	// (0x00089d1d) popup_call_audio_in_window_g1_ParamLimits

0xce57,	// (0x00089d1d) popup_call_audio_in_window_g1

0xce63,	// (0x00089d29) popup_call_audio_in_window_g2_ParamLimits

0xce63,	// (0x00089d29) popup_call_audio_in_window_g2

0xce6f,	// (0x00089d35) popup_call_audio_in_window_g3_ParamLimits

0xce6f,	// (0x00089d35) popup_call_audio_in_window_g3

0x0002,

0xf074,	// (0x0008bf3a) popup_call_audio_in_window_g_ParamLimits

0xf074,	// (0x0008bf3a) popup_call_audio_in_window_g

0xce7b,	// (0x00089d41) popup_call_audio_in_window_t1_ParamLimits

0xce7b,	// (0x00089d41) popup_call_audio_in_window_t1

0xce97,	// (0x00089d5d) popup_call_audio_in_window_t2_ParamLimits

0xce97,	// (0x00089d5d) popup_call_audio_in_window_t2

0xceb3,	// (0x00089d79) popup_call_audio_in_window_t3_ParamLimits

0xceb3,	// (0x00089d79) popup_call_audio_in_window_t3

0x0002,

0xf07b,	// (0x0008bf41) popup_call_audio_in_window_t_ParamLimits

0xf07b,	// (0x0008bf41) popup_call_audio_in_window_t

0xce41,	// (0x00089d07) bg_popup_call_pane_cp01_ParamLimits

0xce41,	// (0x00089d07) bg_popup_call_pane_cp01

0xce4f,	// (0x00089d15) call_thumbnail_pane_cp02

0xcec6,	// (0x00089d8c) call_type_pane_cp022

0xcece,	// (0x00089d94) popup_call_audio_out_window_g1_ParamLimits

0xcece,	// (0x00089d94) popup_call_audio_out_window_g1

0xcee0,	// (0x00089da6) popup_call_audio_out_window_g2_ParamLimits

0xcee0,	// (0x00089da6) popup_call_audio_out_window_g2

0xceec,	// (0x00089db2) popup_call_audio_out_window_g3_ParamLimits

0xceec,	// (0x00089db2) popup_call_audio_out_window_g3

0x0002,

0xf082,	// (0x0008bf48) popup_call_audio_out_window_g_ParamLimits

0xf082,	// (0x0008bf48) popup_call_audio_out_window_g

0xcefe,	// (0x00089dc4) popup_call_audio_out_window_t1_ParamLimits

0xcefe,	// (0x00089dc4) popup_call_audio_out_window_t1

0xcf16,	// (0x00089ddc) popup_call_audio_out_window_t2_ParamLimits

0xcf16,	// (0x00089ddc) popup_call_audio_out_window_t2

0x0001,

0xf089,	// (0x0008bf4f) popup_call_audio_out_window_t_ParamLimits

0xf089,	// (0x0008bf4f) popup_call_audio_out_window_t

0xcf2b,	// (0x00089df1) bg_popup_call_pane_ParamLimits

0xcf2b,	// (0x00089df1) bg_popup_call_pane

0x40c8,	// (0x00080f8e) call_thumbnail_pane_cp_ParamLimits

0x40c8,	// (0x00080f8e) call_thumbnail_pane_cp

0xcfaf,	// (0x00089e75) call_type_pane_cp01_ParamLimits

0xcfaf,	// (0x00089e75) call_type_pane_cp01

0xcff3,	// (0x00089eb9) popup_call_audio_first_window_g1_ParamLimits

0xcff3,	// (0x00089eb9) popup_call_audio_first_window_g1

0xd03f,	// (0x00089f05) popup_call_audio_first_window_g2_ParamLimits

0xd03f,	// (0x00089f05) popup_call_audio_first_window_g2

0x0001,

0xf08e,	// (0x0008bf54) popup_call_audio_first_window_g_ParamLimits

0xf08e,	// (0x0008bf54) popup_call_audio_first_window_g

0xd083,	// (0x00089f49) popup_call_audio_first_window_t1_ParamLimits

0xd083,	// (0x00089f49) popup_call_audio_first_window_t1

0xd12f,	// (0x00089ff5) popup_call_audio_first_window_t4_ParamLimits

0xd12f,	// (0x00089ff5) popup_call_audio_first_window_t4

0xd1bb,	// (0x0008a081) popup_call_audio_first_window_t5_ParamLimits

0xd1bb,	// (0x0008a081) popup_call_audio_first_window_t5

0x0002,

0xf093,	// (0x0008bf59) popup_call_audio_first_window_t_ParamLimits

0xf093,	// (0x0008bf59) popup_call_audio_first_window_t

0xd1ea,	// (0x0008a0b0) bg_popup_call_pane_cp02

0xd1f4,	// (0x0008a0ba) call_type_pane_cp023

0xd1fc,	// (0x0008a0c2) popup_call_audio_wait_window_g1

0xd204,	// (0x0008a0ca) popup_call_audio_wait_window_g2

0x0001,

0xf09a,	// (0x0008bf60) popup_call_audio_wait_window_g

0xd20c,	// (0x0008a0d2) popup_call_audio_wait_window_t3

0xd21a,	// (0x0008a0e0) bg_popup_call_pane_cp03_ParamLimits

0xd21a,	// (0x0008a0e0) bg_popup_call_pane_cp03

0xd27a,	// (0x0008a140) call_thumbnail_pane_cp011_ParamLimits

0xd27a,	// (0x0008a140) call_thumbnail_pane_cp011

0xd286,	// (0x0008a14c) call_type_pane_cp034_ParamLimits

0xd286,	// (0x0008a14c) call_type_pane_cp034

0xd2c2,	// (0x0008a188) popup_call_audio_second_window_g1_ParamLimits

0xd2c2,	// (0x0008a188) popup_call_audio_second_window_g1

0xd2fe,	// (0x0008a1c4) popup_call_audio_second_window_g2_ParamLimits

0xd2fe,	// (0x0008a1c4) popup_call_audio_second_window_g2

0x0001,

0xf09f,	// (0x0008bf65) popup_call_audio_second_window_g_ParamLimits

0xf09f,	// (0x0008bf65) popup_call_audio_second_window_g

0xd33a,	// (0x0008a200) popup_call_audio_second_window_t1_ParamLimits

0xd33a,	// (0x0008a200) popup_call_audio_second_window_t1

0xd3bb,	// (0x0008a281) popup_call_audio_second_window_t2_ParamLimits

0xd3bb,	// (0x0008a281) popup_call_audio_second_window_t2

0xd3f1,	// (0x0008a2b7) popup_call_audio_second_window_t3_ParamLimits

0xd3f1,	// (0x0008a2b7) popup_call_audio_second_window_t3

0x0002,

0xf0a4,	// (0x0008bf6a) popup_call_audio_second_window_t_ParamLimits

0xf0a4,	// (0x0008bf6a) popup_call_audio_second_window_t

0xd1ea,	// (0x0008a0b0) bg_popup_call_pane_cp04

0xd427,	// (0x0008a2ed) list_conf_pane

0xd42f,	// (0x0008a2f5) popup_call_audio_conf_window_t1

0xd43d,	// (0x0008a303) call_thumbnail_pane_g1

0xd445,	// (0x0008a30b) bg_pinb_pane_ParamLimits

0xd445,	// (0x0008a30b) bg_pinb_pane

0xd453,	// (0x0008a319) find_pinb_pane

0xd445,	// (0x0008a30b) listscroll_pinb_pane_ParamLimits

0xd445,	// (0x0008a30b) listscroll_pinb_pane

0xd45d,	// (0x0008a323) pinb_bg_pane_g1

0xd45d,	// (0x0008a323) pinb_bg_pane_g2

0xd45d,	// (0x0008a323) pinb_bg_pane_g3

0xd45d,	// (0x0008a323) pinb_bg_pane_g4

0xd45d,	// (0x0008a323) pinb_bg_pane_g5

0xd45d,	// (0x0008a323) pinb_bg_pane_g6

0xd45d,	// (0x0008a323) pinb_bg_pane_g7

0xd45d,	// (0x0008a323) pinb_bg_pane_g8

0xd45d,	// (0x0008a323) pinb_bg_pane_g9

0xd45d,	// (0x0008a323) pinb_bg_pane_g10

0x0009,

0xf0ab,	// (0x0008bf71) pinb_bg_pane_g

0xcdcd,	// (0x00089c93) grid_pinb_pane

0xcdcd,	// (0x00089c93) list_pinb_pane

0xd467,	// (0x0008a32d) scroll_pane_cp01_ParamLimits

0xd467,	// (0x0008a32d) scroll_pane_cp01

0xd475,	// (0x0008a33b) find_pinb_pane_g1_ParamLimits

0xd475,	// (0x0008a33b) find_pinb_pane_g1

0xd48d,	// (0x0008a353) find_pinb_pane_t1

0xd49f,	// (0x0008a365) find_pinb_pane_t2

0x0001,

0xf0c5,	// (0x0008bf8b) find_pinb_pane_t

0xd4b4,	// (0x0008a37a) input_focus_pane_cp01_ParamLimits

0xd4b4,	// (0x0008a37a) input_focus_pane_cp01

0xd4c0,	// (0x0008a386) cell_pinb_pane_ParamLimits

0xd4c0,	// (0x0008a386) cell_pinb_pane

0xd4ce,	// (0x0008a394) cell_pinb_pane_g1_ParamLimits

0xd4ce,	// (0x0008a394) cell_pinb_pane_g1

0xd4dc,	// (0x0008a3a2) cell_pinb_pane_g2_ParamLimits

0xd4dc,	// (0x0008a3a2) cell_pinb_pane_g2

0xd4dc,	// (0x0008a3a2) cell_pinb_pane_g3_ParamLimits

0xd4dc,	// (0x0008a3a2) cell_pinb_pane_g3

0x0002,

0xf0ca,	// (0x0008bf90) cell_pinb_pane_g_ParamLimits

0xf0ca,	// (0x0008bf90) cell_pinb_pane_g

0xd1ea,	// (0x0008a0b0) grid_highlight_pane_cp01

0xd4c0,	// (0x0008a386) list_pinb_item_pane_ParamLimits

0xd4c0,	// (0x0008a386) list_pinb_item_pane

0xcdcd,	// (0x00089c93) list_highlight_pane_cp02

0xd4ea,	// (0x0008a3b0) list_pinb_item_pane_g1_ParamLimits

0xd4ea,	// (0x0008a3b0) list_pinb_item_pane_g1

0xd4dc,	// (0x0008a3a2) list_pinb_item_pane_g2_ParamLimits

0xd4dc,	// (0x0008a3a2) list_pinb_item_pane_g2

0xd4ce,	// (0x0008a394) list_pinb_item_pane_g3_ParamLimits

0xd4ce,	// (0x0008a394) list_pinb_item_pane_g3

0xd4dc,	// (0x0008a3a2) list_pinb_item_pane_g4_ParamLimits

0xd4dc,	// (0x0008a3a2) list_pinb_item_pane_g4

0x0003,

0xf0d1,	// (0x0008bf97) list_pinb_item_pane_g_ParamLimits

0xf0d1,	// (0x0008bf97) list_pinb_item_pane_g

0xd4f8,	// (0x0008a3be) list_pinb_item_pane_t1_ParamLimits

0xd4f8,	// (0x0008a3be) list_pinb_item_pane_t1

0x4106,	// (0x00080fcc) calc_display_pane

0x4124,	// (0x00080fea) calc_paper_pane

0x4140,	// (0x00081006) grid_calc_pane

0xd1ea,	// (0x0008a0b0) bg_list_pane_cp01

0x416c,	// (0x00081032) clock_g1

0x4174,	// (0x0008103a) clock_g2

0x0001,

0xf0da,	// (0x0008bfa0) clock_g

0x417e,	// (0x00081044) clock_t1_ParamLimits

0x417e,	// (0x00081044) clock_t1

0x4193,	// (0x00081059) clock_t2_ParamLimits

0x4193,	// (0x00081059) clock_t2

0x41a5,	// (0x0008106b) clock_t3_ParamLimits

0x41a5,	// (0x0008106b) clock_t3

0x41b7,	// (0x0008107d) clock_t4_ParamLimits

0x41b7,	// (0x0008107d) clock_t4

0x41c9,	// (0x0008108f) clock_t5_ParamLimits

0x41c9,	// (0x0008108f) clock_t5

0x41de,	// (0x000810a4) clock_t6_ParamLimits

0x41de,	// (0x000810a4) clock_t6

0x41f0,	// (0x000810b6) clock_t7_ParamLimits

0x41f0,	// (0x000810b6) clock_t7

0x4202,	// (0x000810c8) clock_t8_ParamLimits

0x4202,	// (0x000810c8) clock_t8

0x4218,	// (0x000810de) clock_t9_ParamLimits

0x4218,	// (0x000810de) clock_t9

0x0008,

0xf0df,	// (0x0008bfa5) clock_t_ParamLimits

0xf0df,	// (0x0008bfa5) clock_t

0xd50c,	// (0x0008a3d2) popup_clock_analogue_window_cp02

0xd50c,	// (0x0008a3d2) popup_clock_digital_window_cp01

0xd1ea,	// (0x0008a0b0) listscroll_help_pane

0xd1ea,	// (0x0008a0b0) phob_pre_status_pane

0xd514,	// (0x0008a3da) grid_qdial_pane

0x422e,	// (0x000810f4) listscroll_mce_pane

0xd445,	// (0x0008a30b) bg_notes_pane

0xd51e,	// (0x0008a3e4) list_notes_pane

0x424c,	// (0x00081112) scroll_pane_cp06

0xd52c,	// (0x0008a3f2) bg_calc_paper_pane

0x425b,	// (0x00081121) list_calc_pane

0xd540,	// (0x0008a406) bg_calc_display_pane

0x4275,	// (0x0008113b) calc_display_pane_t1

0x428a,	// (0x00081150) calc_display_pane_t2

0x429f,	// (0x00081165) calc_display_pane_t3

0x0002,

0xf0f2,	// (0x0008bfb8) calc_display_pane_t

0x42b1,	// (0x00081177) cell_calc_pane_ParamLimits

0x42b1,	// (0x00081177) cell_calc_pane

0xd54c,	// (0x0008a412) bg_calc_paper_pane_g1

0xd558,	// (0x0008a41e) bg_calc_paper_pane_g2

0xd564,	// (0x0008a42a) bg_calc_paper_pane_g3

0xd570,	// (0x0008a436) bg_calc_paper_pane_g4

0xd57c,	// (0x0008a442) bg_calc_paper_pane_g5

0x42de,	// (0x000811a4) bg_calc_paper_pane_g6

0x42ef,	// (0x000811b5) bg_calc_paper_pane_g7

0x4300,	// (0x000811c6) bg_calc_paper_pane_g8

0x0007,

0xf0f9,	// (0x0008bfbf) bg_calc_paper_pane_g

0x4311,	// (0x000811d7) calc_bg_paper_pane_g9

0x4322,	// (0x000811e8) list_calc_item_pane_ParamLimits

0x4322,	// (0x000811e8) list_calc_item_pane

0xd588,	// (0x0008a44e) list_calc_item_pane_g1

0x434f,	// (0x00081215) list_calc_item_pane_t1_ParamLimits

0x434f,	// (0x00081215) list_calc_item_pane_t1

0x4361,	// (0x00081227) list_calc_item_pane_t2_ParamLimits

0x4361,	// (0x00081227) list_calc_item_pane_t2

0x0001,

0xf10a,	// (0x0008bfd0) list_calc_item_pane_t_ParamLimits

0xf10a,	// (0x0008bfd0) list_calc_item_pane_t

0xd45d,	// (0x0008a323) cell_calc_pane_g1

0xd595,	// (0x0008a45b) grid_highlight_pane_cp02

0x4391,	// (0x00081257) bg_calc_display_pane_g1

0x439a,	// (0x00081260) bg_calc_display_pane_g2

0x43a4,	// (0x0008126a) bg_calc_display_pane_g3

0x0002,

0xf114,	// (0x0008bfda) bg_calc_display_pane_g

0x43ad,	// (0x00081273) cell_qdial_pane_ParamLimits

0x43ad,	// (0x00081273) cell_qdial_pane

0x43c1,	// (0x00081287) cell_qdial_pane_g1_ParamLimits

0x43c1,	// (0x00081287) cell_qdial_pane_g1

0x43ce,	// (0x00081294) cell_qdial_pane_g2_ParamLimits

0x43ce,	// (0x00081294) cell_qdial_pane_g2

0xd5b7,	// (0x0008a47d) cell_qdial_pane_g3_ParamLimits

0xd5b7,	// (0x0008a47d) cell_qdial_pane_g3

0x0003,

0xf11b,	// (0x0008bfe1) cell_qdial_pane_g_ParamLimits

0xf11b,	// (0x0008bfe1) cell_qdial_pane_g

0x43eb,	// (0x000812b1) cell_qdial_pane_t1_ParamLimits

0x43eb,	// (0x000812b1) cell_qdial_pane_t1

0x4403,	// (0x000812c9) cell_qdial_pane_t2_ParamLimits

0x4403,	// (0x000812c9) cell_qdial_pane_t2

0x4416,	// (0x000812dc) cell_qdial_pane_t3_ParamLimits

0x4416,	// (0x000812dc) cell_qdial_pane_t3

0x0002,

0xf124,	// (0x0008bfea) cell_qdial_pane_t_ParamLimits

0xf124,	// (0x0008bfea) cell_qdial_pane_t

0xd1ea,	// (0x0008a0b0) grid_highlight_pane_cp04

0xd5c3,	// (0x0008a489) thumbnail_qdial_pane_ParamLimits

0xd5c3,	// (0x0008a489) thumbnail_qdial_pane

0xd61f,	// (0x0008a4e5) list_help_pane

0xd628,	// (0x0008a4ee) scroll_pane_cp02

0x4429,	// (0x000812ef) help_list_pane_t1_ParamLimits

0x4429,	// (0x000812ef) help_list_pane_t1

0x4463,	// (0x00081329) bg_notes_pane_g2

0x446b,	// (0x00081331) bg_notes_pane_g3

0x4473,	// (0x00081339) notes_bg_pane_g1

0x447b,	// (0x00081341) notes_bg_pane_g4

0x4483,	// (0x00081349) notes_bg_pane_g5

0x448b,	// (0x00081351) notes_bg_pane_g6

0x4493,	// (0x00081359) notes_bg_pane_g7

0x449b,	// (0x00081361) notes_bg_pane_g8

0x44a3,	// (0x00081369) notes_bg_pane_g9

0x0006,

0xf142,	// (0x0008c008) notes_bg_pane_g

0x44ab,	// (0x00081371) list_notes_text_pane_ParamLimits

0x44ab,	// (0x00081371) list_notes_text_pane

0xd631,	// (0x0008a4f7) list_notes_text_pane_g1

0x020e,	// (0x0007d0d4) list_notes_text_pane_t1

0x44d7,	// (0x0008139d) listscroll_cale_week_pane

0x44fc,	// (0x000813c2) bg_cale_heading_pane

0xd654,	// (0x0008a51a) bg_cale_pane_cp01

0x451e,	// (0x000813e4) cale_week_corner_pane

0x4538,	// (0x000813fe) cale_week_day_heading_pane

0x455a,	// (0x00081420) cale_week_scroll_pane_g1

0x4577,	// (0x0008143d) cale_week_scroll_pane_g2

0x458a,	// (0x00081450) cale_week_scroll_pane_g3

0x459d,	// (0x00081463) cale_week_scroll_pane_g4

0x45b0,	// (0x00081476) cale_week_scroll_pane_g5

0x45c3,	// (0x00081489) cale_week_scroll_pane_g6

0x45d6,	// (0x0008149c) cale_week_scroll_pane_g7

0x45eb,	// (0x000814b1) cale_week_scroll_pane_g8

0x4600,	// (0x000814c6) cale_week_scroll_pane_g9

0x4613,	// (0x000814d9) cale_week_scroll_pane_g10

0x4626,	// (0x000814ec) cale_week_scroll_pane_g11

0x4639,	// (0x000814ff) cale_week_scroll_pane_g12

0x4650,	// (0x00081516) cale_week_scroll_pane_g13

0x466b,	// (0x00081531) cale_week_scroll_pane_g14

0x4686,	// (0x0008154c) cale_week_scroll_pane_g15

0x000f,

0xf151,	// (0x0008c017) cale_week_scroll_pane_g

0x46b6,	// (0x0008157c) cale_week_time_pane

0x46cb,	// (0x00081591) grid_cale_week_pane

0xd683,	// (0x0008a549) scroll_pane_cp08

0x46ea,	// (0x000815b0) cell_cale_week_pane_ParamLimits

0x46ea,	// (0x000815b0) cell_cale_week_pane

0x474c,	// (0x00081612) cale_week_day_heading_pane_t1

0x4767,	// (0x0008162d) cale_week_day_heading_pane_t2

0x4782,	// (0x00081648) cale_week_day_heading_pane_t3

0x479d,	// (0x00081663) cale_week_day_heading_pane_t4

0x47b8,	// (0x0008167e) cale_week_day_heading_pane_t5

0x47d3,	// (0x00081699) cale_week_day_heading_pane_t6

0x47ee,	// (0x000816b4) cale_week_day_heading_pane_t7

0x0006,

0xf172,	// (0x0008c038) cale_week_day_heading_pane_t

0xd6a0,	// (0x0008a566) bg_cale_side_pane

0x4809,	// (0x000816cf) cale_week_time_pane_t1

0x4823,	// (0x000816e9) cale_week_time_pane_t2

0x483d,	// (0x00081703) cale_week_time_pane_t3

0x4857,	// (0x0008171d) cale_week_time_pane_t4

0x4871,	// (0x00081737) cale_week_time_pane_t5

0x488b,	// (0x00081751) cale_week_time_pane_t6

0x48ab,	// (0x00081771) cale_week_time_pane_t7

0x48cd,	// (0x00081793) cale_week_time_pane_t8

0x0007,

0xf181,	// (0x0008c047) cale_week_time_pane_t

0x48f1,	// (0x000817b7) cell_cale_week_pane_g2

0x4915,	// (0x000817db) cell_cale_week_pane_g3_ParamLimits

0x4915,	// (0x000817db) cell_cale_week_pane_g3

0xd6ae,	// (0x0008a574) grid_highlight_pane_cp07

0xd6b6,	// (0x0008a57c) listscroll_gms_pane

0xd6c0,	// (0x0008a586) grid_gms_pane

0xd6c9,	// (0x0008a58f) listscroll_gms_pane_g1

0xd6d1,	// (0x0008a597) listscroll_gms_pane_g2

0x0001,

0xf192,	// (0x0008c058) listscroll_gms_pane_g

0x492d,	// (0x000817f3) scroll_pane_cp010

0x4938,	// (0x000817fe) cell_gms_pane_ParamLimits

0x4938,	// (0x000817fe) cell_gms_pane

0x4948,	// (0x0008180e) cell_gms_pane_g1

0xd6d9,	// (0x0008a59f) cell_gms_pane_g2

0xd631,	// (0x0008a4f7) cell_gms_pane_g3

0xd6e1,	// (0x0008a5a7) cell_gms_pane_g4

0x0003,

0xf197,	// (0x0008c05d) cell_gms_pane_g

0xd6ea,	// (0x0008a5b0) grid_highlight_pane_cp09

0x6a01,	// (0x000838c7) phob_pre_status_pane_g1

0x6a09,	// (0x000838cf) phob_pre_status_pane_g2

0x6a11,	// (0x000838d7) phob_pre_status_pane_g3

0x6a19,	// (0x000838df) phob_pre_status_pane_g4

0x0004,

0xf573,	// (0x0008c439) phob_pre_status_pane_g

0x6a29,	// (0x000838ef) phob_pre_status_pane_t1

0x6a39,	// (0x000838ff) phob_pre_status_pane_t2

0x6a49,	// (0x0008390f) phob_pre_status_pane_t3

0x0002,

0xf57e,	// (0x0008c444) phob_pre_status_pane_t

0xd6f2,	// (0x0008a5b8) bg_list_pane_cp05

0x4958,	// (0x0008181e) grid_vorec_pane

0x4962,	// (0x00081828) vorec_t1

0x4970,	// (0x00081836) vorec_t2

0x497e,	// (0x00081844) vorec_t3

0x498c,	// (0x00081852) vorec_t4

0xc841,	// (0x00089707) vorec_t5

0xc84f,	// (0x00089715) vorec_t6

0x0004,

0xf1a0,	// (0x0008c066) vorec_t

0xc85d,	// (0x00089723) wait_bar_pane_cp01

0x49a8,	// (0x0008186e) cell_vorec_pane_ParamLimits

0x49a8,	// (0x0008186e) cell_vorec_pane

0x49bb,	// (0x00081881) cell_vorec_pane_g1

0xd1ea,	// (0x0008a0b0) grid_highlight_pane_cp05

0xd4c0,	// (0x0008a386) cams_zoom_pane

0xd4c0,	// (0x0008a386) image_vga_pane

0xd4dc,	// (0x0008a3a2) main_camera_pane_g1

0xd4dc,	// (0x0008a3a2) main_camera_pane_g2

0xd4dc,	// (0x0008a3a2) main_camera_pane_g3

0xd4dc,	// (0x0008a3a2) main_camera_pane_g4

0xd4dc,	// (0x0008a3a2) main_camera_pane_g5

0xd4dc,	// (0x0008a3a2) main_camera_pane_g6

0xd4dc,	// (0x0008a3a2) main_camera_pane_g7

0x0007,

0xf1ab,	// (0x0008c071) main_camera_pane_g

0xd6fa,	// (0x0008a5c0) main_camera_pane_t1

0xd6fa,	// (0x0008a5c0) main_camera_pane_t2

0x0001,

0xf1bc,	// (0x0008c082) main_camera_pane_t

0x49c5,	// (0x0008188b) cams_zoom_pane_cp_ParamLimits

0x49c5,	// (0x0008188b) cams_zoom_pane_cp

0x49f3,	// (0x000818b9) image_cif_pane_ParamLimits

0x49f3,	// (0x000818b9) image_cif_pane

0xcdcd,	// (0x00089c93) image_subqcif_pane

0x4a01,	// (0x000818c7) main_video_pane_g1_ParamLimits

0x4a01,	// (0x000818c7) main_video_pane_g1

0x4a29,	// (0x000818ef) main_video_pane_g2_ParamLimits

0x4a29,	// (0x000818ef) main_video_pane_g2

0x4a5c,	// (0x00081922) main_video_pane_g3_ParamLimits

0x4a5c,	// (0x00081922) main_video_pane_g3

0x4a5c,	// (0x00081922) main_video_pane_g4_ParamLimits

0x4a5c,	// (0x00081922) main_video_pane_g4

0x4a8a,	// (0x00081950) main_video_pane_g5_ParamLimits

0x4a8a,	// (0x00081950) main_video_pane_g5

0xd70e,	// (0x0008a5d4) main_video_pane_g6_ParamLimits

0xd70e,	// (0x0008a5d4) main_video_pane_g6

0x0006,

0xf1c1,	// (0x0008c087) main_video_pane_g_ParamLimits

0xf1c1,	// (0x0008c087) main_video_pane_g

0x4aa6,	// (0x0008196c) main_video_pane_t1_ParamLimits

0x4aa6,	// (0x0008196c) main_video_pane_t1

0xd728,	// (0x0008a5ee) cams_zoom_pane_g1

0xd728,	// (0x0008a5ee) cams_zoom_pane_g2

0xd728,	// (0x0008a5ee) cams_zoom_pane_g3

0xd728,	// (0x0008a5ee) cams_zoom_pane_g4

0x0003,

0xf1d0,	// (0x0008c096) cams_zoom_pane_g

0x4aec,	// (0x000819b2) grid_cams_pane

0x4afa,	// (0x000819c0) linegrid_cams_pane

0x4b08,	// (0x000819ce) cell_cams_pane_ParamLimits

0x4b08,	// (0x000819ce) cell_cams_pane

0xd732,	// (0x0008a5f8) cams_burst_image_pane

0xd73a,	// (0x0008a600) cell_cams_pane_g1

0xd1ea,	// (0x0008a0b0) grid_highlight_pane_cp03

0xd45d,	// (0x0008a323) mp_bg_pane_g1

0xcdcd,	// (0x00089c93) bg_list_pane_cp03

0xcdcd,	// (0x00089c93) bg_mp_pane

0xcdcd,	// (0x00089c93) grid_mp_pane

0xd728,	// (0x0008a5ee) media_player_g1

0x03d8,	// (0x0007d29e) media_player_t1

0x03d8,	// (0x0007d29e) media_player_t2

0x03d8,	// (0x0007d29e) media_player_t3

0x03d8,	// (0x0007d29e) media_player_t4

0x03d8,	// (0x0007d29e) media_player_t5

0x03d8,	// (0x0007d29e) media_player_t6

0x03d8,	// (0x0007d29e) media_player_t7

0x0006,

0xf55d,	// (0x0008c423) media_player_t

0xcdcd,	// (0x00089c93) wait_bar_pane_cp02

0xf542,	// (0x0008c408) main_usb_pane_t

0x06b3,	// (0x0007d579) cell_mp_pane

0xd45d,	// (0x0008a323) cell_mp_pane_g1

0xd1ea,	// (0x0008a0b0) grid_highlight_pane_cp06

0xd756,	// (0x0008a61c) grid_skin_colour_pane

0xd75e,	// (0x0008a624) list_highlight_pane_cp03

0x4b1b,	// (0x000819e1) skin_g1

0xd766,	// (0x0008a62c) skin_t1

0xd775,	// (0x0008a63b) skin_t2

0x0001,

0xf1fe,	// (0x0008c0c4) skin_t

0x4b25,	// (0x000819eb) cell_skin_colour_pane_ParamLimits

0x4b25,	// (0x000819eb) cell_skin_colour_pane

0xd783,	// (0x0008a649) cell_skin_colour_pane_g1

0x4ba9,	// (0x00081a6f) call_video_g1_ParamLimits

0x4ba9,	// (0x00081a6f) call_video_g1

0x4bb9,	// (0x00081a7f) call_video_g2_ParamLimits

0x4bb9,	// (0x00081a7f) call_video_g2

0x0001,

0xf203,	// (0x0008c0c9) call_video_g_ParamLimits

0xf203,	// (0x0008c0c9) call_video_g

0x4c13,	// (0x00081ad9) call_video_uplink_pane_cp1_ParamLimits

0x4c13,	// (0x00081ad9) call_video_uplink_pane_cp1

0xd795,	// (0x0008a65b) call_video_uplink_pane_cp2

0x4cdf,	// (0x00081ba5) video_down_crop_pane_ParamLimits

0x4cdf,	// (0x00081ba5) video_down_crop_pane

0x4dd1,	// (0x00081c97) video_down_pane_ParamLimits

0x4dd1,	// (0x00081c97) video_down_pane

0xd79d,	// (0x0008a663) video_down_subqcif_pane_ParamLimits

0xd79d,	// (0x0008a663) video_down_subqcif_pane

0xd7b5,	// (0x0008a67b) video_down_subqcif_pane_cp_ParamLimits

0xd7b5,	// (0x0008a67b) video_down_subqcif_pane_cp

0xd7db,	// (0x0008a6a1) im_reading_pane_ParamLimits

0xd7db,	// (0x0008a6a1) im_reading_pane

0x4ef1,	// (0x00081db7) im_writing_pane_ParamLimits

0x4ef1,	// (0x00081db7) im_writing_pane

0x4f0f,	// (0x00081dd5) im_reading_pane_t1

0xd7f5,	// (0x0008a6bb) list_im_pane

0xd806,	// (0x0008a6cc) scroll_pane_cp07

0x4f67,	// (0x00081e2d) im_writing_pane_t1_ParamLimits

0x4f67,	// (0x00081e2d) im_writing_pane_t1

0xd81f,	// (0x0008a6e5) im_writing_pane_t2_ParamLimits

0xd81f,	// (0x0008a6e5) im_writing_pane_t2

0x0001,

0xf20d,	// (0x0008c0d3) im_writing_pane_t_ParamLimits

0xf20d,	// (0x0008c0d3) im_writing_pane_t

0xd1ea,	// (0x0008a0b0) input_focus_pane_cp04

0xd1ea,	// (0x0008a0b0) input_focus_pane_cp05

0x4f79,	// (0x00081e3f) list_im_single_pane_ParamLimits

0x4f79,	// (0x00081e3f) list_im_single_pane

0x4fa0,	// (0x00081e66) list_single_im_pane_t1

0xd6f2,	// (0x0008a5b8) blid_accuracy_pane

0xd6f2,	// (0x0008a5b8) blid_compass_pane

0x1cf6,	// (0x0007ebbc) main_location_t1

0x1cf6,	// (0x0007ebbc) main_location_t2

0x1cf6,	// (0x0007ebbc) main_location_t3

0x0002,

0xf56c,	// (0x0008c432) main_location_t

0xd1ea,	// (0x0008a0b0) aid_levels_location

0xd45d,	// (0x0008a323) blid_accuracy_pane_g1

0xd45d,	// (0x0008a323) blid_accuracy_pane_g2

0x0001,

0xf261,	// (0x0008c127) blid_accuracy_pane_g

0xd867,	// (0x0008a72d) wml_content_pane

0xd8a5,	// (0x0008a76b) wml_button_pane_ParamLimits

0xd8a5,	// (0x0008a76b) wml_button_pane

0x4faf,	// (0x00081e75) wml_list_single_large_pane_ParamLimits

0x4faf,	// (0x00081e75) wml_list_single_large_pane

0x4fda,	// (0x00081ea0) wml_list_single_medium_pane_ParamLimits

0x4fda,	// (0x00081ea0) wml_list_single_medium_pane

0x500c,	// (0x00081ed2) wml_list_single_small_pane_ParamLimits

0x500c,	// (0x00081ed2) wml_list_single_small_pane

0xd8b9,	// (0x0008a77f) wml_selection_box_pane_ParamLimits

0xd8b9,	// (0x0008a77f) wml_selection_box_pane

0xd8cc,	// (0x0008a792) wml_list_single_pane_t1

0xd8db,	// (0x0008a7a1) wml_list_single_medium_pane_t1

0xd8ea,	// (0x0008a7b0) wml_list_single_large_pane_t1

0xd8f9,	// (0x0008a7bf) input_focus_pane_cp02_ParamLimits

0xd8f9,	// (0x0008a7bf) input_focus_pane_cp02

0xd90c,	// (0x0008a7d2) wml_selection_box_pane_g1

0xd915,	// (0x0008a7db) wml_selection_box_pane_t1_ParamLimits

0xd915,	// (0x0008a7db) wml_selection_box_pane_t1

0xd445,	// (0x0008a30b) bg_wml_button_pane_ParamLimits

0xd445,	// (0x0008a30b) bg_wml_button_pane

0xd92d,	// (0x0008a7f3) wml_button_pane_g1

0xd935,	// (0x0008a7fb) wml_button_pane_t1

0xd92d,	// (0x0008a7f3) wml_button_bg_pane_g1

0xd945,	// (0x0008a80b) wml_button_bg_pane_g2

0xd94d,	// (0x0008a813) wml_button_bg_pane_g3

0xd955,	// (0x0008a81b) wml_button_bg_pane_g4

0xd95d,	// (0x0008a823) wml_button_bg_pane_g5

0xd965,	// (0x0008a82b) wml_button_bg_pane_g6

0xd96d,	// (0x0008a833) wml_button_bg_pane_g7

0xd975,	// (0x0008a83b) wml_button_bg_pane_g8

0xd97d,	// (0x0008a843) wml_button_bg_pane_g9

0x0008,

0xf212,	// (0x0008c0d8) wml_button_bg_pane_g

0x5049,	// (0x00081f0f) bg_list_pane_cp02

0xd985,	// (0x0008a84b) mce_header_pane_ParamLimits

0xd985,	// (0x0008a84b) mce_header_pane

0xd99b,	// (0x0008a861) mce_icon_pane

0xd99b,	// (0x0008a861) mce_image_pane

0xd9a4,	// (0x0008a86a) mce_text_pane_ParamLimits

0xd9a4,	// (0x0008a86a) mce_text_pane

0x5051,	// (0x00081f17) scroll_pane_cp03

0xd89d,	// (0x0008a763) scroll_pane_cp04

0xd9b7,	// (0x0008a87d) scroll_pane_cp05_ParamLimits

0xd9b7,	// (0x0008a87d) scroll_pane_cp05

0x5059,	// (0x00081f1f) mce_header_field_pane_ParamLimits

0x5059,	// (0x00081f1f) mce_header_field_pane

0x5079,	// (0x00081f3f) mce_header_field_pane_2_ParamLimits

0x5079,	// (0x00081f3f) mce_header_field_pane_2

0x508f,	// (0x00081f55) mce_header_field_pane_3

0x5097,	// (0x00081f5d) list_single_mce_message_pane_ParamLimits

0x5097,	// (0x00081f5d) list_single_mce_message_pane

0x50a8,	// (0x00081f6e) list_single_mce_smart_pane_ParamLimits

0x50a8,	// (0x00081f6e) list_single_mce_smart_pane

0xd9c3,	// (0x0008a889) input_focus_pane_cp03

0xd9cc,	// (0x0008a892) list_header_data_pane

0x50c4,	// (0x00081f8a) mce_header_field_pane_t1

0x50d2,	// (0x00081f98) list_single_mce_header_pane_ParamLimits

0x50d2,	// (0x00081f98) list_single_mce_header_pane

0xd9d4,	// (0x0008a89a) list_single_mce_header_pane_t1

0xd9e3,	// (0x0008a8a9) list_single_mce_message_pane_g1

0xd9eb,	// (0x0008a8b1) list_single_mce_message_pane_t1

0x510a,	// (0x00081fd0) bg_cale_heading_pane_cp01_ParamLimits

0x510a,	// (0x00081fd0) bg_cale_heading_pane_cp01

0xd9f9,	// (0x0008a8bf) bg_cale_pane_cp02_ParamLimits

0xd9f9,	// (0x0008a8bf) bg_cale_pane_cp02

0x5158,	// (0x0008201e) cale_month_corner_pane

0x5177,	// (0x0008203d) cale_month_day_heading_pane_ParamLimits

0x5177,	// (0x0008203d) cale_month_day_heading_pane

0x51dd,	// (0x000820a3) cale_month_pane_g1_ParamLimits

0x51dd,	// (0x000820a3) cale_month_pane_g1

0x5220,	// (0x000820e6) cale_month_pane_g2_ParamLimits

0x5220,	// (0x000820e6) cale_month_pane_g2

0x525a,	// (0x00082120) cale_month_pane_g3_ParamLimits

0x525a,	// (0x00082120) cale_month_pane_g3

0x52aa,	// (0x00082170) cale_month_pane_g4_ParamLimits

0x52aa,	// (0x00082170) cale_month_pane_g4

0x52fa,	// (0x000821c0) cale_month_pane_g5_ParamLimits

0x52fa,	// (0x000821c0) cale_month_pane_g5

0x534a,	// (0x00082210) cale_month_pane_g6_ParamLimits

0x534a,	// (0x00082210) cale_month_pane_g6

0x539a,	// (0x00082260) cale_month_pane_g7_ParamLimits

0x539a,	// (0x00082260) cale_month_pane_g7

0x5402,	// (0x000822c8) cale_month_pane_g8_ParamLimits

0x5402,	// (0x000822c8) cale_month_pane_g8

0x546a,	// (0x00082330) cale_month_pane_g9_ParamLimits

0x546a,	// (0x00082330) cale_month_pane_g9

0x54c8,	// (0x0008238e) cale_month_pane_g10_ParamLimits

0x54c8,	// (0x0008238e) cale_month_pane_g10

0x5526,	// (0x000823ec) cale_month_pane_g11_ParamLimits

0x5526,	// (0x000823ec) cale_month_pane_g11

0x557a,	// (0x00082440) cale_month_pane_g12_ParamLimits

0x557a,	// (0x00082440) cale_month_pane_g12

0x55d0,	// (0x00082496) cale_month_pane_g13_ParamLimits

0x55d0,	// (0x00082496) cale_month_pane_g13

0x000c,

0xf225,	// (0x0008c0eb) cale_month_pane_g_ParamLimits

0xf225,	// (0x0008c0eb) cale_month_pane_g

0x5626,	// (0x000824ec) cale_month_week_pane

0x564a,	// (0x00082510) grid_cale_month_pane_ParamLimits

0x564a,	// (0x00082510) grid_cale_month_pane

0x56a7,	// (0x0008256d) cale_month_day_heading_pane_t1

0x572d,	// (0x000825f3) cale_month_day_heading_pane_t2

0x57a6,	// (0x0008266c) cale_month_day_heading_pane_t3

0x581f,	// (0x000826e5) cale_month_day_heading_pane_t4

0x5898,	// (0x0008275e) cale_month_day_heading_pane_t5

0x5911,	// (0x000827d7) cale_month_day_heading_pane_t6

0x598a,	// (0x00082850) cale_month_day_heading_pane_t7

0x0006,

0xf240,	// (0x0008c106) cale_month_day_heading_pane_t

0xd6a0,	// (0x0008a566) bg_cale_side_pane_cp01

0x5a1b,	// (0x000828e1) cale_month_week_pane_t1

0x5a34,	// (0x000828fa) cale_month_week_pane_t2

0x5a4d,	// (0x00082913) cale_month_week_pane_t3

0x5a66,	// (0x0008292c) cale_month_week_pane_t4

0x5a81,	// (0x00082947) cale_month_week_pane_t5

0x5aa2,	// (0x00082968) cale_month_week_pane_t6

0x0005,

0xf24f,	// (0x0008c115) cale_month_week_pane_t

0x5ac3,	// (0x00082989) cell_cale_month_pane_ParamLimits

0x5ac3,	// (0x00082989) cell_cale_month_pane

0x5be9,	// (0x00082aaf) cell_cale_month_pane_g1

0x5bf5,	// (0x00082abb) cell_cale_month_pane_t1_ParamLimits

0x5bf5,	// (0x00082abb) cell_cale_month_pane_t1

0xd6ae,	// (0x0008a574) grid_highlight_pane_cp08

0xd45d,	// (0x0008a323) main_smil_g1

0x5c21,	// (0x00082ae7) smil_status_pane

0xda38,	// (0x0008a8fe) smil_text_pane

0x1bce,	// (0x0007ea94) bg_popup_call3_rect_pane_g8

0x1bd6,	// (0x0007ea9c) bg_popup_call3_rect_pane_g9

0x0008,

0xf4ed,	// (0x0008c3b3) bg_popup_call3_rect_pane_g

0x1e26,	// (0x0007ecec) smil_status_volume_pane_g1

0xda42,	// (0x0008a908) smil_status_pane_t1

0x6daa,	// (0x00083c70) volume_smil_pane

0xda59,	// (0x0008a91f) list_smil_text_pane

0x5c34,	// (0x00082afa) scroll_pane_cp011

0x5c3f,	// (0x00082b05) smil_text_list_pane_t1_ParamLimits

0x5c3f,	// (0x00082b05) smil_text_list_pane_t1

0x5ccc,	// (0x00082b92) aid_volume_smil_ParamLimits

0x5ccc,	// (0x00082b92) aid_volume_smil

0xd45d,	// (0x0008a323) smil_volume_pane_g1

0xd45d,	// (0x0008a323) smil_volume_pane_g2

0x0001,

0xf261,	// (0x0008c127) smil_volume_pane_g

0x44d7,	// (0x0008139d) listscroll_cale_day_pane

0xda63,	// (0x0008a929) bg_cale_pane

0xda7b,	// (0x0008a941) list_cale_pane

0xda9e,	// (0x0008a964) scroll_pane_cp09

0xdaaf,	// (0x0008a975) cale_bg_pane_g1

0xdab7,	// (0x0008a97d) cale_bg_pane_g2

0xdabf,	// (0x0008a985) cale_bg_pane_g3

0xdac7,	// (0x0008a98d) cale_bg_pane_g4

0xdacf,	// (0x0008a995) cale_bg_pane_g5

0xdad7,	// (0x0008a99d) cale_bg_pane_g6

0x0254,	// (0x0007d11a) cale_bg_pane_g7

0x025c,	// (0x0007d122) cale_bg_pane_g8

0x0264,	// (0x0007d12a) cale_bg_pane_g9

0x0008,

0xf266,	// (0x0008c12c) cale_bg_pane_g

0x5cf6,	// (0x00082bbc) list_cale_time_pane_ParamLimits

0x5cf6,	// (0x00082bbc) list_cale_time_pane

0x026c,	// (0x0007d132) list_cale_time_pane_g1_ParamLimits

0x026c,	// (0x0007d132) list_cale_time_pane_g1

0x0278,	// (0x0007d13e) list_cale_time_pane_g2_ParamLimits

0x0278,	// (0x0007d13e) list_cale_time_pane_g2

0x5d1e,	// (0x00082be4) list_cale_time_pane_g3_ParamLimits

0x5d1e,	// (0x00082be4) list_cale_time_pane_g3

0x5d2c,	// (0x00082bf2) list_cale_time_pane_g4_ParamLimits

0x5d2c,	// (0x00082bf2) list_cale_time_pane_g4

0x5d3a,	// (0x00082c00) list_cale_time_pane_g5_ParamLimits

0x5d3a,	// (0x00082c00) list_cale_time_pane_g5

0x0005,

0xf279,	// (0x0008c13f) list_cale_time_pane_g_ParamLimits

0xf279,	// (0x0008c13f) list_cale_time_pane_g

0x0292,	// (0x0007d158) list_cale_time_pane_t1_ParamLimits

0x0292,	// (0x0007d158) list_cale_time_pane_t1

0x02ba,	// (0x0007d180) list_cale_time_pane_t2_ParamLimits

0x02ba,	// (0x0007d180) list_cale_time_pane_t2

0x600f,	// (0x00082ed5) aid_blid_cardinal_pane

0x6051,	// (0x00082f17) compass_pane_t4

0x02e2,	// (0x0007d1a8) list_cale_time_pane_t4_ParamLimits

0x02e2,	// (0x0007d1a8) list_cale_time_pane_t4

0x605f,	// (0x00082f25) compass_pane_t5

0x606f,	// (0x00082f35) compass_pane_t6

0x607d,	// (0x00082f43) compass_pane_t7

0x07cd,	// (0x0007d693) navi_pane_cc_t1

0x09bc,	// (0x0007d882) aid_phob_thumbnail_center_pane

0x649a,	// (0x00083360) main_postcard_pane_g4_ParamLimits

0x0002,

0xf286,	// (0x0008c14c) list_cale_time_pane_t_ParamLimits

0xf286,	// (0x0008c14c) list_cale_time_pane_t

0xce41,	// (0x00089d07) bg_popup_window_pane_cp02_ParamLimits

0xce41,	// (0x00089d07) bg_popup_window_pane_cp02

0x030a,	// (0x0007d1d0) heading_pane_cp01_ParamLimits

0x030a,	// (0x0007d1d0) heading_pane_cp01

0x0316,	// (0x0007d1dc) loc_req_pane_ParamLimits

0x0316,	// (0x0007d1dc) loc_req_pane

0x0326,	// (0x0007d1ec) loc_type_pane_ParamLimits

0x0326,	// (0x0007d1ec) loc_type_pane

0x0338,	// (0x0007d1fe) loc_type_pane_t1_ParamLimits

0x0338,	// (0x0007d1fe) loc_type_pane_t1

0x034a,	// (0x0007d210) loc_type_pane_t2_ParamLimits

0x034a,	// (0x0007d210) loc_type_pane_t2

0x035c,	// (0x0007d222) loc_type_pane_t3_ParamLimits

0x035c,	// (0x0007d222) loc_type_pane_t3

0x0002,

0xf28d,	// (0x0008c153) loc_type_pane_t_ParamLimits

0xf28d,	// (0x0008c153) loc_type_pane_t

0x036e,	// (0x0007d234) list_loc_req_pane

0x0378,	// (0x0007d23e) scroll_pane_cp012

0x5d48,	// (0x00082c0e) list_single_loc_request_popup_menu_pane_ParamLimits

0x5d48,	// (0x00082c0e) list_single_loc_request_popup_menu_pane

0x0383,	// (0x0007d249) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x0383,	// (0x0007d249) list_single_loc_request_popup_menu_pane_g1

0x038f,	// (0x0007d255) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x038f,	// (0x0007d255) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf294,	// (0x0008c15a) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf294,	// (0x0008c15a) list_single_loc_request_popup_menu_pane_g

0x039b,	// (0x0007d261) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x039b,	// (0x0007d261) list_single_loc_request_popup_menu_pane_t1

0x5d62,	// (0x00082c28) bg_popup_window_pane_cp03_ParamLimits

0x5d62,	// (0x00082c28) bg_popup_window_pane_cp03

0x5d70,	// (0x00082c36) heading_loc_req_pane_ParamLimits

0x5d70,	// (0x00082c36) heading_loc_req_pane

0x5d7c,	// (0x00082c42) popup_dyc_status_message_window_g1_ParamLimits

0x5d7c,	// (0x00082c42) popup_dyc_status_message_window_g1

0x5d88,	// (0x00082c4e) popup_dyc_status_message_window_t1_ParamLimits

0x5d88,	// (0x00082c4e) popup_dyc_status_message_window_t1

0x5d9a,	// (0x00082c60) popup_dyc_status_message_window_t2_ParamLimits

0x5d9a,	// (0x00082c60) popup_dyc_status_message_window_t2

0x5dac,	// (0x00082c72) popup_dyc_status_message_window_t3_ParamLimits

0x5dac,	// (0x00082c72) popup_dyc_status_message_window_t3

0x0002,

0xf299,	// (0x0008c15f) popup_dyc_status_message_window_t_ParamLimits

0xf299,	// (0x0008c15f) popup_dyc_status_message_window_t

0xd1ea,	// (0x0008a0b0) bg_heading_pane_cp01

0x03b1,	// (0x0007d277) heading_loc_req_pane_g1

0x03b9,	// (0x0007d27f) heading_loc_req_pane_g2

0x03c1,	// (0x0007d287) heading_loc_req_pane_g3

0x0002,

0xf2a0,	// (0x0008c166) heading_loc_req_pane_g

0x03c9,	// (0x0007d28f) heading_loc_req_pane_t1

0x03e8,	// (0x0007d2ae) bg_popup_sub_pane_cp01_ParamLimits

0x03e8,	// (0x0007d2ae) bg_popup_sub_pane_cp01

0x03f6,	// (0x0007d2bc) popup_cale_events_window_g1_ParamLimits

0x03f6,	// (0x0007d2bc) popup_cale_events_window_g1

0x0416,	// (0x0007d2dc) popup_cale_events_window_g2_ParamLimits

0x0416,	// (0x0007d2dc) popup_cale_events_window_g2

0x0001,

0xf2c2,	// (0x0008c188) popup_cale_events_window_g_ParamLimits

0xf2c2,	// (0x0008c188) popup_cale_events_window_g

0x0436,	// (0x0007d2fc) popup_cale_events_window_t1_ParamLimits

0x0436,	// (0x0007d2fc) popup_cale_events_window_t1

0x0448,	// (0x0007d30e) popup_cale_events_window_t2_ParamLimits

0x0448,	// (0x0007d30e) popup_cale_events_window_t2

0x0486,	// (0x0007d34c) popup_cale_events_window_t3_ParamLimits

0x0486,	// (0x0007d34c) popup_cale_events_window_t3

0x04c0,	// (0x0007d386) popup_cale_events_window_t4_ParamLimits

0x04c0,	// (0x0007d386) popup_cale_events_window_t4

0x0003,

0xf2c7,	// (0x0008c18d) popup_cale_events_window_t_ParamLimits

0xf2c7,	// (0x0008c18d) popup_cale_events_window_t

0x5dd6,	// (0x00082c9c) call_type_pane

0x13f9,	// (0x0007e2bf) popup_call_status_window_g1

0x5de2,	// (0x00082ca8) popup_call_status_window_g2

0x5dee,	// (0x00082cb4) popup_call_status_window_g3

0x0002,

0xf2d0,	// (0x0008c196) popup_call_status_window_g

0x04f6,	// (0x0007d3bc) call_type_pane_g1

0x04ff,	// (0x0007d3c5) call_type_pane_g2

0x0001,

0xf2d7,	// (0x0008c19d) call_type_pane_g

0xd1ea,	// (0x0008a0b0) bg_popup_sub_pane_cp02

0x0508,	// (0x0007d3ce) listscroll_popup_wml_pane

0x0510,	// (0x0007d3d6) list_wml_pane

0x051a,	// (0x0007d3e0) scroll_pane_cp013

0x0525,	// (0x0007d3eb) list_single_graphic_popup_wml_pane_ParamLimits

0x0525,	// (0x0007d3eb) list_single_graphic_popup_wml_pane

0xd45d,	// (0x0008a323) list_single_graphic_popup_wml_pane_g1

0x0539,	// (0x0007d3ff) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf2dc,	// (0x0008c1a2) list_single_graphic_popup_wml_pane_g

0x0541,	// (0x0007d407) list_single_graphic_popup_wml_pane_t1

0x054f,	// (0x0007d415) aid_call_pane

0xd43d,	// (0x0008a303) popup_clock_analogue_window_g1

0xd43d,	// (0x0008a303) popup_clock_analogue_window_g2

0x5dfa,	// (0x00082cc0) popup_clock_analogue_window_g3

0x5dfa,	// (0x00082cc0) popup_clock_analogue_window_g4

0xd45d,	// (0x0008a323) popup_clock_analogue_window_g5

0x0004,

0xf2e1,	// (0x0008c1a7) popup_clock_analogue_window_g

0x5e02,	// (0x00082cc8) popup_clock_analogue_window_t1

0x5e10,	// (0x00082cd6) clock_digital_number_pane_ParamLimits

0x5e10,	// (0x00082cd6) clock_digital_number_pane

0x5e1c,	// (0x00082ce2) clock_digital_number_pane_cp02_ParamLimits

0x5e1c,	// (0x00082ce2) clock_digital_number_pane_cp02

0x5e28,	// (0x00082cee) clock_digital_number_pane_cp03_ParamLimits

0x5e28,	// (0x00082cee) clock_digital_number_pane_cp03

0x5e34,	// (0x00082cfa) clock_digital_number_pane_cp04_ParamLimits

0x5e34,	// (0x00082cfa) clock_digital_number_pane_cp04

0x5e40,	// (0x00082d06) clock_digital_separator_pane_ParamLimits

0x5e40,	// (0x00082d06) clock_digital_separator_pane

0x5e4c,	// (0x00082d12) popup_clock_digital_window_t1

0xd45d,	// (0x0008a323) clock_digital_number_pane_g1

0xd45d,	// (0x0008a323) clock_digital_number_pane_g2

0x0001,

0xf261,	// (0x0008c127) clock_digital_number_pane_g

0xd45d,	// (0x0008a323) clock_digital_separator_pane_g1

0xd45d,	// (0x0008a323) clock_digital_separator_pane_g2

0x0001,

0xf261,	// (0x0008c127) clock_digital_separator_pane_g

0xd1ea,	// (0x0008a0b0) bg_popup_window_pane_cp04

0x05ce,	// (0x0007d494) heading_pane_cp03

0xd6f2,	// (0x0008a5b8) listscroll_popup_gms_pane

0xd1ea,	// (0x0008a0b0) grid_large_graphic_popup_pane

0x05d7,	// (0x0007d49d) listscroll_popup_gms_pane_g1

0x05e0,	// (0x0007d4a6) listscroll_popup_gms_pane_g2

0x0001,

0xf2ec,	// (0x0008c1b2) listscroll_popup_gms_pane_g

0x05e9,	// (0x0007d4af) scroll_pane_cp014

0xd4c0,	// (0x0008a386) cell_large_graphic_popup_pane_ParamLimits

0xd4c0,	// (0x0008a386) cell_large_graphic_popup_pane

0xd4ce,	// (0x0008a394) cell_large_graphic_popup_pane_g1_ParamLimits

0xd4ce,	// (0x0008a394) cell_large_graphic_popup_pane_g1

0x05f2,	// (0x0007d4b8) cell_large_graphic_popup_pane_g2_ParamLimits

0x05f2,	// (0x0007d4b8) cell_large_graphic_popup_pane_g2

0x0600,	// (0x0007d4c6) cell_large_graphic_popup_pane_g3_ParamLimits

0x0600,	// (0x0007d4c6) cell_large_graphic_popup_pane_g3

0x060e,	// (0x0007d4d4) cell_large_graphic_popup_pane_g4_ParamLimits

0x060e,	// (0x0007d4d4) cell_large_graphic_popup_pane_g4

0x0003,

0xf2f1,	// (0x0008c1b7) cell_large_graphic_popup_pane_g_ParamLimits

0xf2f1,	// (0x0008c1b7) cell_large_graphic_popup_pane_g

0xd1ea,	// (0x0008a0b0) grid_highlight_pane_cp010

0xd45d,	// (0x0008a323) bg_popup_call_pane_g1

0x061f,	// (0x0007d4e5) list_single_graphic_popup_conf_pane_ParamLimits

0x061f,	// (0x0007d4e5) list_single_graphic_popup_conf_pane

0x0632,	// (0x0007d4f8) list_highlight_pane_cp01

0x063b,	// (0x0007d501) list_single_graphic_popup_conf_pane_g1

0x0643,	// (0x0007d509) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf2fa,	// (0x0008c1c0) list_single_graphic_popup_conf_pane_g

0x064b,	// (0x0007d511) list_single_graphic_popup_conf_pane_t1

0x0659,	// (0x0007d51f) linegrid_cams_pane_g1

0x5e69,	// (0x00082d2f) linegrid_cams_pane_g2

0xd631,	// (0x0008a4f7) linegrid_cams_pane_g3

0x0662,	// (0x0007d528) linegrid_cams_pane_g4

0x5e72,	// (0x00082d38) linegrid_cams_pane_g5

0x5e7b,	// (0x00082d41) linegrid_cams_pane_g6

0xd6e1,	// (0x0008a5a7) linegrid_cams_pane_g7

0x0006,

0xf2ff,	// (0x0008c1c5) linegrid_cams_pane_g

0x066b,	// (0x0007d531) popup_clock_analogue_window

0x066b,	// (0x0007d531) popup_clock_digital_window

0xd1ea,	// (0x0008a0b0) popup_phob_thumbnail_window

0xd45d,	// (0x0008a323) call_video_uplink_pane_g1

0x0674,	// (0x0007d53a) call_video_uplink_pane_g2

0x0001,

0xf30e,	// (0x0008c1d4) call_video_uplink_pane_g

0x067c,	// (0x0007d542) video_uplink_pane

0x0684,	// (0x0007d54a) mce_image_pane_g1

0x5e84,	// (0x00082d4a) mce_image_pane_g2

0x5e8c,	// (0x00082d52) mce_image_pane_g3

0x5e94,	// (0x00082d5a) mce_image_pane_g4

0x5e9c,	// (0x00082d62) mce_image_pane_g5

0x0004,

0xf313,	// (0x0008c1d9) mce_image_pane_g

0x068e,	// (0x0007d554) control_top_pane_stacon_cp01_ParamLimits

0x068e,	// (0x0007d554) control_top_pane_stacon_cp01

0x06a2,	// (0x0007d568) uni_indicator_pane_stacon_cp01_ParamLimits

0x06a2,	// (0x0007d568) uni_indicator_pane_stacon_cp01

0x06b3,	// (0x0007d579) bg_popup_sub_pane_cp03

0x5ea4,	// (0x00082d6a) chi_dic_find_pane

0x5eac,	// (0x00082d72) listscroll_chi_dic_pane

0x5eb5,	// (0x00082d7b) main_pane_chidic_g1

0x5ec8,	// (0x00082d8e) chi_dic_find_pane_t1

0x06bd,	// (0x0007d583) find_chidic_pane

0x06c6,	// (0x0007d58c) chi_dic_list_pane_ParamLimits

0x06c6,	// (0x0007d58c) chi_dic_list_pane

0x06d7,	// (0x0007d59d) scroll_pane_cp020

0x5ed6,	// (0x00082d9c) find_chidic_pane_t1

0xd1ea,	// (0x0008a0b0) input_focus_pane_cp06

0x5ee5,	// (0x00082dab) list_chi_dic_pane_ParamLimits

0x5ee5,	// (0x00082dab) list_chi_dic_pane

0x5f02,	// (0x00082dc8) list_chi_dic_pane_t1_ParamLimits

0x5f02,	// (0x00082dc8) list_chi_dic_pane_t1

0xd1ea,	// (0x0008a0b0) list_highlight_pane_cp020

0x06df,	// (0x0007d5a5) bg_cale_heading_pane_g1

0x5f15,	// (0x00082ddb) bg_cale_heading_pane_g2

0x5f1d,	// (0x00082de3) bg_cale_heading_pane_g3

0x5f25,	// (0x00082deb) bg_cale_heading_pane_g4

0x5f2f,	// (0x00082df5) bg_cale_heading_pane_g5

0x5f39,	// (0x00082dff) bg_cale_heading_pane_g6

0x5f41,	// (0x00082e07) bg_cale_heading_pane_g7

0x5f49,	// (0x00082e0f) bg_cale_heading_pane_g8

0x5f53,	// (0x00082e19) bg_cale_heading_pane_g9

0x0008,

0xf31e,	// (0x0008c1e4) bg_cale_heading_pane_g

0x06df,	// (0x0007d5a5) bg_cale_side_pane_g1

0x5f5d,	// (0x00082e23) bg_cale_side_pane_g2

0x5f67,	// (0x00082e2d) bg_cale_side_pane_g3

0x5f71,	// (0x00082e37) bg_cale_side_pane_g4

0x5f7b,	// (0x00082e41) bg_cale_side_pane_g5

0x5f85,	// (0x00082e4b) bg_cale_side_pane_g6

0x5f8f,	// (0x00082e55) bg_cale_side_pane_g7

0x5f99,	// (0x00082e5f) bg_cale_side_pane_g8

0x5fa1,	// (0x00082e67) bg_cale_side_pane_g9

0x0008,

0xf331,	// (0x0008c1f7) bg_cale_side_pane_g

0x5fa9,	// (0x00082e6f) popup_call_status_window_ParamLimits

0x5fa9,	// (0x00082e6f) popup_call_status_window

0x06e7,	// (0x0007d5ad) stacon_top_pane

0x06ef,	// (0x0007d5b5) status_pane_ParamLimits

0x06ef,	// (0x0007d5b5) status_pane

0x0704,	// (0x0007d5ca) status_small_pane

0x070c,	// (0x0007d5d2) control_pane

0xd1ea,	// (0x0008a0b0) stacon_bottom_pane

0x0714,	// (0x0007d5da) list_single_mce_smart_pane_t1_ParamLimits

0x0714,	// (0x0007d5da) list_single_mce_smart_pane_t1

0x0727,	// (0x0007d5ed) list_single_mce_smart_pane_t2_ParamLimits

0x0727,	// (0x0007d5ed) list_single_mce_smart_pane_t2

0x0001,

0xf344,	// (0x0008c20a) list_single_mce_smart_pane_t_ParamLimits

0xf344,	// (0x0008c20a) list_single_mce_smart_pane_t

0x5fb5,	// (0x00082e7b) compass_pane

0x5fc1,	// (0x00082e87) main_location2_pane_t1

0x5fd5,	// (0x00082e9b) main_location2_pane_t2

0x5fe9,	// (0x00082eaf) main_location2_pane_t3

0x0003,

0xf349,	// (0x0008c20f) main_location2_pane_t

0x0746,	// (0x0007d60c) compass_pane_g1_ParamLimits

0x0746,	// (0x0007d60c) compass_pane_g1

0x6033,	// (0x00082ef9) compass_pane_t1

0x6042,	// (0x00082f08) compass_pane_t2

0x0005,

0xf352,	// (0x0008c218) compass_pane_t

0x608d,	// (0x00082f53) text_secondary_cp61

0x07c4,	// (0x0007d68a) navi_pane_cams_g5

0x0840,	// (0x0007d706) navi_pane_im_t1

0x084e,	// (0x0007d714) navi_pane_mp_g1_ParamLimits

0x084e,	// (0x0007d714) navi_pane_mp_g1

0x0862,	// (0x0007d728) navi_pane_mp_g2_ParamLimits

0x0862,	// (0x0007d728) navi_pane_mp_g2

0x086e,	// (0x0007d734) navi_pane_mp_g3_ParamLimits

0x086e,	// (0x0007d734) navi_pane_mp_g3

0x0002,

0xf366,	// (0x0008c22c) navi_pane_mp_g_ParamLimits

0xf366,	// (0x0008c22c) navi_pane_mp_g

0x087a,	// (0x0007d740) navi_pane_mp_t1

0x0888,	// (0x0007d74e) navi_pane_mp_t2

0x0002,

0xf36d,	// (0x0008c233) navi_pane_mp_t

0x08f3,	// (0x0007d7b9) navi_pane_vt_g1

0x087a,	// (0x0007d740) navi_pane_vt_t1

0x08fb,	// (0x0007d7c1) navi_slider_pane

0xd6f2,	// (0x0008a5b8) zooming_pane

0x090b,	// (0x0007d7d1) navi_slider_pane_g1

0x60c8,	// (0x00082f8e) navi_slider_pane_g2

0x0006,

0xf374,	// (0x0008c23a) navi_slider_pane_g

0x0941,	// (0x0007d807) aid_levels_zoom

0x0949,	// (0x0007d80f) zooming_pane_g1

0x0951,	// (0x0007d817) zooming_pane_g2

0x0951,	// (0x0007d817) zooming_pane_g3

0x0002,

0xf383,	// (0x0008c249) zooming_pane_g

0x0959,	// (0x0007d81f) level_10_zoom

0x0962,	// (0x0007d828) level_11_zoom

0x096b,	// (0x0007d831) level_1_zoom

0x0974,	// (0x0007d83a) level_2_zoom

0x097d,	// (0x0007d843) level_3_zoom

0x0986,	// (0x0007d84c) level_4_zoom

0x098f,	// (0x0007d855) level_5_zoom

0x0998,	// (0x0007d85e) level_6_zoom

0x09a1,	// (0x0007d867) level_7_zoom

0x09aa,	// (0x0007d870) level_8_zoom

0x09b3,	// (0x0007d879) level_9_zoom

0x09c4,	// (0x0007d88a) popup_phob_thumbnail_window_g1

0x09cc,	// (0x0007d892) popup_phob_thumbnail_window_g2

0x0001,

0xf38a,	// (0x0008c250) popup_phob_thumbnail_window_g

0x6a59,	// (0x0008391f) level_1_location

0x6a61,	// (0x00083927) level_2_location

0x6a69,	// (0x0008392f) level_3_location

0x6a73,	// (0x00083939) level_4_location

0xd6f2,	// (0x0008a5b8) level_5_location

0x60da,	// (0x00082fa0) mce_icon_pane_g1

0x60e2,	// (0x00082fa8) mce_icon_pane_g2

0x0001,

0xf38f,	// (0x0008c255) mce_icon_pane_g

0x60ea,	// (0x00082fb0) main_mup_pane_g1_ParamLimits

0x60ea,	// (0x00082fb0) main_mup_pane_g1

0xd4ea,	// (0x0008a3b0) main_mup_pane_g2_ParamLimits

0xd4ea,	// (0x0008a3b0) main_mup_pane_g2

0xd4ea,	// (0x0008a3b0) main_mup_pane_g3_ParamLimits

0xd4ea,	// (0x0008a3b0) main_mup_pane_g3

0xd4ea,	// (0x0008a3b0) main_mup_pane_g4_ParamLimits

0xd4ea,	// (0x0008a3b0) main_mup_pane_g4

0xd4ea,	// (0x0008a3b0) main_mup_pane_g5_ParamLimits

0xd4ea,	// (0x0008a3b0) main_mup_pane_g5

0xd4ea,	// (0x0008a3b0) main_mup_pane_g6_ParamLimits

0xd4ea,	// (0x0008a3b0) main_mup_pane_g6

0xd4ea,	// (0x0008a3b0) main_mup_pane_g7_ParamLimits

0xd4ea,	// (0x0008a3b0) main_mup_pane_g7

0xd4ea,	// (0x0008a3b0) main_mup_pane_g8_ParamLimits

0xd4ea,	// (0x0008a3b0) main_mup_pane_g8

0xd4ea,	// (0x0008a3b0) main_mup_pane_g9_ParamLimits

0xd4ea,	// (0x0008a3b0) main_mup_pane_g9

0xd4ea,	// (0x0008a3b0) main_mup_pane_g10_ParamLimits

0xd4ea,	// (0x0008a3b0) main_mup_pane_g10

0xd4ea,	// (0x0008a3b0) main_mup_pane_g11_ParamLimits

0xd4ea,	// (0x0008a3b0) main_mup_pane_g11

0xd4dc,	// (0x0008a3a2) main_mup_pane_g12_ParamLimits

0xd4dc,	// (0x0008a3a2) main_mup_pane_g12

0xd4ea,	// (0x0008a3b0) main_mup_pane_g13_ParamLimits

0xd4ea,	// (0x0008a3b0) main_mup_pane_g13

0x000c,

0xf394,	// (0x0008c25a) main_mup_pane_g_ParamLimits

0xf394,	// (0x0008c25a) main_mup_pane_g

0xd4f8,	// (0x0008a3be) main_mup_pane_t1_ParamLimits

0xd4f8,	// (0x0008a3be) main_mup_pane_t1

0xd4f8,	// (0x0008a3be) main_mup_pane_t2_ParamLimits

0xd4f8,	// (0x0008a3be) main_mup_pane_t2

0xd4f8,	// (0x0008a3be) main_mup_pane_t3_ParamLimits

0xd4f8,	// (0x0008a3be) main_mup_pane_t3

0xd6fa,	// (0x0008a5c0) main_mup_pane_t4_ParamLimits

0xd6fa,	// (0x0008a5c0) main_mup_pane_t4

0xd6fa,	// (0x0008a5c0) main_mup_pane_t5_ParamLimits

0xd6fa,	// (0x0008a5c0) main_mup_pane_t5

0xd742,	// (0x0008a608) main_mup_pane_t6_ParamLimits

0xd742,	// (0x0008a608) main_mup_pane_t6

0x0005,

0xf3af,	// (0x0008c275) main_mup_pane_t_ParamLimits

0xf3af,	// (0x0008c275) main_mup_pane_t

0xd467,	// (0x0008a32d) mup_progress_pane_ParamLimits

0xd467,	// (0x0008a32d) mup_progress_pane

0x1ebf,	// (0x0007ed85) mup_visualizer_pane_ParamLimits

0x1ebf,	// (0x0007ed85) mup_visualizer_pane

0x1ebf,	// (0x0007ed85) mup_volume_pane_ParamLimits

0x1ebf,	// (0x0007ed85) mup_volume_pane

0xd4dc,	// (0x0008a3a2) mup_visualizer_pane_g1_ParamLimits

0xd4dc,	// (0x0008a3a2) mup_visualizer_pane_g1

0x09e2,	// (0x0007d8a8) mup_visualizer_pane_g2_ParamLimits

0x09e2,	// (0x0007d8a8) mup_visualizer_pane_g2

0xd4ce,	// (0x0008a394) mup_visualizer_pane_g3_ParamLimits

0xd4ce,	// (0x0008a394) mup_visualizer_pane_g3

0x0002,

0xf3bc,	// (0x0008c282) mup_visualizer_pane_g_ParamLimits

0xf3bc,	// (0x0008c282) mup_visualizer_pane_g

0xd728,	// (0x0008a5ee) mup_volume_pane_g1

0xd728,	// (0x0008a5ee) mup_volume_pane_g2

0x0001,

0xf3c3,	// (0x0008c289) mup_volume_pane_g

0xd728,	// (0x0008a5ee) mup_progress_pane_g1

0xd728,	// (0x0008a5ee) mup_progress_pane_g2

0xd728,	// (0x0008a5ee) mup_progress_pane_g3

0x0002,

0xf3c8,	// (0x0008c28e) mup_progress_pane_g

0xd1ea,	// (0x0008a0b0) bg_popup_window_pane_cp05

0x09f0,	// (0x0007d8b6) heading_pane_cp02_ParamLimits

0x09f0,	// (0x0007d8b6) heading_pane_cp02

0x0a0a,	// (0x0007d8d0) list_popup_blid_pane

0x0a12,	// (0x0007d8d8) list_blid_sat_info_pane_ParamLimits

0x0a12,	// (0x0007d8d8) list_blid_sat_info_pane

0x0a25,	// (0x0007d8eb) list_blid_sat_info_pane_g1

0x0a2d,	// (0x0007d8f3) list_blid_sat_info_pane_t1

0x61e5,	// (0x000830ab) mup_equalizer_pane_ParamLimits

0x61e5,	// (0x000830ab) mup_equalizer_pane

0x6206,	// (0x000830cc) mup_equalizer_pane_cp1_ParamLimits

0x6206,	// (0x000830cc) mup_equalizer_pane_cp1

0x6227,	// (0x000830ed) mup_equalizer_pane_cp2_ParamLimits

0x6227,	// (0x000830ed) mup_equalizer_pane_cp2

0x6248,	// (0x0008310e) mup_equalizer_pane_cp3_ParamLimits

0x6248,	// (0x0008310e) mup_equalizer_pane_cp3

0x6269,	// (0x0008312f) mup_equalizer_pane_cp4_ParamLimits

0x6269,	// (0x0008312f) mup_equalizer_pane_cp4

0x628a,	// (0x00083150) mup_equalizer_pane_cp5

0x62a0,	// (0x00083166) mup_equalizer_pane_cp6

0x62b8,	// (0x0008317e) mup_equalizer_pane_cp7

0x1c4e,	// (0x0007eb14) bg_popup_call_poc_act_pane_g9

0x1c56,	// (0x0007eb1c) bg_popup_call_poc_act_pane_g10

0x1c5e,	// (0x0007eb24) bg_popup_call_poc_act_pane_g11

0x000a,

0xd445,	// (0x0008a30b) mup_scale_pane

0xd45d,	// (0x0008a323) mup_scale_pane_g1

0x0a3b,	// (0x0007d901) mup_scale_pane_g2

0x0006,

0xf3e4,	// (0x0008c2aa) mup_scale_pane_g

0x0a5f,	// (0x0007d925) msg_data_pane

0x0a67,	// (0x0007d92d) scroll_pane_cp017

0x62e2,	// (0x000831a8) bg_list_pane_cp04_ParamLimits

0x62e2,	// (0x000831a8) bg_list_pane_cp04

0x0a77,	// (0x0007d93d) msg_data_pane_g1

0x62fe,	// (0x000831c4) msg_data_pane_g2

0x6306,	// (0x000831cc) msg_data_pane_g3

0x630e,	// (0x000831d4) msg_data_pane_g4

0x6316,	// (0x000831dc) msg_data_pane_g5

0x631e,	// (0x000831e4) msg_data_pane_g6

0x6326,	// (0x000831ec) msg_data_pane_g7

0x0006,

0xf3f3,	// (0x0008c2b9) msg_data_pane_g

0x632e,	// (0x000831f4) msg_text_pane_ParamLimits

0x632e,	// (0x000831f4) msg_text_pane

0x637c,	// (0x00083242) qrid_highlight_pane_cp011_ParamLimits

0x637c,	// (0x00083242) qrid_highlight_pane_cp011

0xd1ea,	// (0x0008a0b0) msg_body_pane

0xd1ea,	// (0x0008a0b0) msg_header_pane

0x0a88,	// (0x0007d94e) input_focus_pane_cp07

0x0a9d,	// (0x0007d963) msg_header_pane_t1_ParamLimits

0x0a9d,	// (0x0007d963) msg_header_pane_t1

0x0ab3,	// (0x0007d979) msg_header_pane_t2_ParamLimits

0x0ab3,	// (0x0007d979) msg_header_pane_t2

0x0001,

0xf407,	// (0x0008c2cd) msg_header_pane_t_ParamLimits

0xf407,	// (0x0008c2cd) msg_header_pane_t

0x0aca,	// (0x0007d990) msg_body_pane_g1

0x0ad2,	// (0x0007d998) msg_body_pane_t1_ParamLimits

0x0ad2,	// (0x0007d998) msg_body_pane_t1

0x0b03,	// (0x0007d9c9) msg_body_pane_t2_ParamLimits

0x0b03,	// (0x0007d9c9) msg_body_pane_t2

0x0b15,	// (0x0007d9db) msg_body_pane_t3_ParamLimits

0x0b15,	// (0x0007d9db) msg_body_pane_t3

0x0002,

0xf40c,	// (0x0008c2d2) msg_body_pane_t_ParamLimits

0xf40c,	// (0x0008c2d2) msg_body_pane_t

0x63f6,	// (0x000832bc) main_viewer_pane_g1_ParamLimits

0x63f6,	// (0x000832bc) main_viewer_pane_g1

0x6402,	// (0x000832c8) main_viewer_pane_g2_ParamLimits

0x6402,	// (0x000832c8) main_viewer_pane_g2

0x640e,	// (0x000832d4) main_viewer_pane_g3_ParamLimits

0x640e,	// (0x000832d4) main_viewer_pane_g3

0x641f,	// (0x000832e5) main_viewer_pane_g4_ParamLimits

0x641f,	// (0x000832e5) main_viewer_pane_g4

0x6430,	// (0x000832f6) main_viewer_pane_g5_ParamLimits

0x6430,	// (0x000832f6) main_viewer_pane_g5

0x6430,	// (0x000832f6) main_viewer_pane_g7_ParamLimits

0x6430,	// (0x000832f6) main_viewer_pane_g7

0x0383,	// (0x0007d249) main_viewer_pane_g8_ParamLimits

0x0383,	// (0x0007d249) main_viewer_pane_g8

0x0007,

0xf41c,	// (0x0008c2e2) main_viewer_pane_g_ParamLimits

0xf41c,	// (0x0008c2e2) main_viewer_pane_g

0x0b69,	// (0x0007da2f) viewer_content_pane_ParamLimits

0x0b69,	// (0x0007da2f) viewer_content_pane

0x646e,	// (0x00083334) main_postcard_pane_g1_ParamLimits

0x646e,	// (0x00083334) main_postcard_pane_g1

0x647c,	// (0x00083342) main_postcard_pane_g2_ParamLimits

0x647c,	// (0x00083342) main_postcard_pane_g2

0x648a,	// (0x00083350) main_postcard_pane_g3_ParamLimits

0x648a,	// (0x00083350) main_postcard_pane_g3

0x0005,

0xf42d,	// (0x0008c2f3) main_postcard_pane_g_ParamLimits

0xf42d,	// (0x0008c2f3) main_postcard_pane_g

0x649a,	// (0x00083360) main_postcard_pane_g4

0x1e13,	// (0x0007ecd9) smil_status_volume_pane_g2

0x64c6,	// (0x0008338c) postcard_pane_ParamLimits

0x64c6,	// (0x0008338c) postcard_pane

0x13f9,	// (0x0007e2bf) postcard_pane_g1_ParamLimits

0x13f9,	// (0x0007e2bf) postcard_pane_g1

0x64f8,	// (0x000833be) postcard_pane_g2_ParamLimits

0x64f8,	// (0x000833be) postcard_pane_g2

0x6504,	// (0x000833ca) postcard_pane_g3_ParamLimits

0x6504,	// (0x000833ca) postcard_pane_g3

0x0b85,	// (0x0007da4b) postcard_pane_g4_ParamLimits

0x0b85,	// (0x0007da4b) postcard_pane_g4

0x6510,	// (0x000833d6) postcard_pane_g5_ParamLimits

0x6510,	// (0x000833d6) postcard_pane_g5

0x651c,	// (0x000833e2) postcard_pane_g6_ParamLimits

0x651c,	// (0x000833e2) postcard_pane_g6

0x0b77,	// (0x0007da3d) postcard_pane_g7_ParamLimits

0x0b77,	// (0x0007da3d) postcard_pane_g7

0x0006,

0xf43a,	// (0x0008c300) postcard_pane_g_ParamLimits

0xf43a,	// (0x0008c300) postcard_pane_g

0x6528,	// (0x000833ee) main_mp2_pane_g1_ParamLimits

0x6528,	// (0x000833ee) main_mp2_pane_g1

0x6534,	// (0x000833fa) main_mp2_pane_g2_ParamLimits

0x6534,	// (0x000833fa) main_mp2_pane_g2

0x6540,	// (0x00083406) main_mp2_pane_g3_ParamLimits

0x6540,	// (0x00083406) main_mp2_pane_g3

0x0002,

0xf449,	// (0x0008c30f) main_mp2_pane_g_ParamLimits

0xf449,	// (0x0008c30f) main_mp2_pane_g

0x654c,	// (0x00083412) main_mp2_pane_t1_ParamLimits

0x654c,	// (0x00083412) main_mp2_pane_t1

0x6563,	// (0x00083429) main_mp2_pane_t2_ParamLimits

0x6563,	// (0x00083429) main_mp2_pane_t2

0x6575,	// (0x0008343b) main_mp2_pane_t3_ParamLimits

0x6575,	// (0x0008343b) main_mp2_pane_t3

0x0002,

0xf450,	// (0x0008c316) main_mp2_pane_t_ParamLimits

0xf450,	// (0x0008c316) main_mp2_pane_t

0x0b93,	// (0x0007da59) pec_content_pane_ParamLimits

0x0b93,	// (0x0007da59) pec_content_pane

0xd89d,	// (0x0008a763) scroll_pane_cp015

0x0ba5,	// (0x0007da6b) pec_attribute_pane_ParamLimits

0x0ba5,	// (0x0007da6b) pec_attribute_pane

0x6587,	// (0x0008344d) pec_content_pane_g1_ParamLimits

0x6587,	// (0x0008344d) pec_content_pane_g1

0x0bb5,	// (0x0007da7b) pec_content_pane_t1_ParamLimits

0x0bb5,	// (0x0007da7b) pec_content_pane_t1

0x0bc7,	// (0x0007da8d) pec_content_pane_t2_ParamLimits

0x0bc7,	// (0x0007da8d) pec_content_pane_t2

0x0001,

0xf457,	// (0x0008c31d) pec_content_pane_t_ParamLimits

0xf457,	// (0x0008c31d) pec_content_pane_t

0x6593,	// (0x00083459) list_single_graphic_pane_cp01_ParamLimits

0x6593,	// (0x00083459) list_single_graphic_pane_cp01

0xd445,	// (0x0008a30b) bg_popup_sub_pane_cp04

0x0bd9,	// (0x0007da9f) popup_mup_playback_window_g1

0x0be5,	// (0x0007daab) popup_mup_playback_window_t1

0x0bfa,	// (0x0007dac0) popup_mup_playback_window_t2

0x0001,

0xf45c,	// (0x0008c322) popup_mup_playback_window_t

0x0c31,	// (0x0007daf7) main_image_pane_g1_ParamLimits

0x0c31,	// (0x0007daf7) main_image_pane_g1

0x0c74,	// (0x0007db3a) scroll_pane_cp018_ParamLimits

0x0c74,	// (0x0007db3a) scroll_pane_cp018

0x0c8c,	// (0x0007db52) scroll_pane_cp016_ParamLimits

0x0c8c,	// (0x0007db52) scroll_pane_cp016

0x662d,	// (0x000834f3) smil2_image_pane_ParamLimits

0x662d,	// (0x000834f3) smil2_image_pane

0x665d,	// (0x00083523) smil2_root_pane_ParamLimits

0x665d,	// (0x00083523) smil2_root_pane

0x6689,	// (0x0008354f) smil2_text_pane_ParamLimits

0x6689,	// (0x0008354f) smil2_text_pane

0xd1ea,	// (0x0008a0b0) bg_list_pane_cp06

0x0cc8,	// (0x0007db8e) grid_radio_pane

0xd1ea,	// (0x0008a0b0) bg_popup_window_pane_cp06

0x0cd0,	// (0x0007db96) main_fmradio_pane_t1

0x1ca6,	// (0x0007eb6c) heading_pane_cp04

0x0cde,	// (0x0007dba4) main_fmradio_pane_t2

0x1cae,	// (0x0007eb74) popup_cale_lunar_info_window_g1

0x0cec,	// (0x0007dbb2) main_fmradio_pane_t3

0x1cb6,	// (0x0007eb7c) popup_cale_lunar_info_window_g2

0x0cfa,	// (0x0007dbc0) main_fmradio_pane_t4

0x0001,

0x0d08,	// (0x0007dbce) main_fmradio_pane_t5

0x0004,

0xf54f,	// (0x0008c415) popup_cale_lunar_info_window_g

0xf471,	// (0x0008c337) main_fmradio_pane_t

0x0d16,	// (0x0007dbdc) wait_bar_pane_cp03

0x0d1e,	// (0x0007dbe4) cell_fmradio_pane_ParamLimits

0x0d1e,	// (0x0007dbe4) cell_fmradio_pane

0x0b77,	// (0x0007da3d) cell_fmradio_pane_g1_ParamLimits

0x0b77,	// (0x0007da3d) cell_fmradio_pane_g1

0xd1ea,	// (0x0008a0b0) grid_highlight_pane_cp011

0x0d31,	// (0x0007dbf7) poc_content_pane_ParamLimits

0x0d31,	// (0x0007dbf7) poc_content_pane

0x0d43,	// (0x0007dc09) scroll_pane_cp019

0x66c9,	// (0x0008358f) popup_call_poc_act_window_ParamLimits

0x66c9,	// (0x0008358f) popup_call_poc_act_window

0x66d6,	// (0x0008359c) popup_call_poc_inact_window_ParamLimits

0x66d6,	// (0x0008359c) popup_call_poc_inact_window

0xf513,	// (0x0008c3d9) bg_popup_call_poc_act_pane_g

0x1c66,	// (0x0007eb2c) bg_popup_call_poc_inact_pane_g1

0x1c6e,	// (0x0007eb34) bg_popup_call_poc_inact_pane_g2

0x0d4b,	// (0x0007dc11) popup_call_poc_act_window_g2

0x1c76,	// (0x0007eb3c) bg_popup_call_poc_inact_pane_g3

0x1bf6,	// (0x0007eabc) bg_popup_call_poc_inact_pane_g4

0x1c7e,	// (0x0007eb44) bg_popup_call_poc_inact_pane_g5

0x0d53,	// (0x0007dc19) popup_call_poc_act_window_t1_ParamLimits

0x0d53,	// (0x0007dc19) popup_call_poc_act_window_t1

0x0d7b,	// (0x0007dc41) popup_call_poc_act_window_t2_ParamLimits

0x0d7b,	// (0x0007dc41) popup_call_poc_act_window_t2

0x0da3,	// (0x0007dc69) popup_call_poc_act_window_t3_ParamLimits

0x0da3,	// (0x0007dc69) popup_call_poc_act_window_t3

0x0dcb,	// (0x0007dc91) popup_call_poc_act_window_t4_ParamLimits

0x0dcb,	// (0x0007dc91) popup_call_poc_act_window_t4

0x0003,

0xf47c,	// (0x0008c342) popup_call_poc_act_window_t_ParamLimits

0xf47c,	// (0x0008c342) popup_call_poc_act_window_t

0x1c86,	// (0x0007eb4c) bg_popup_call_poc_inact_pane_g6

0x1c8e,	// (0x0007eb54) bg_popup_call_poc_inact_pane_g7

0x1c96,	// (0x0007eb5c) bg_popup_call_poc_inact_pane_g8

0x0ddd,	// (0x0007dca3) popup_call_poc_inact_window_g2

0x1c9e,	// (0x0007eb64) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf52a,	// (0x0008c3f0) bg_popup_call_poc_inact_pane_g

0x0de5,	// (0x0007dcab) popup_call_poc_inact_window_t1_ParamLimits

0x0de5,	// (0x0007dcab) popup_call_poc_inact_window_t1

0x0dfa,	// (0x0007dcc0) popup_call_poc_inact_window_t2_ParamLimits

0x0dfa,	// (0x0007dcc0) popup_call_poc_inact_window_t2

0x0e0f,	// (0x0007dcd5) popup_call_poc_inact_window_t3_ParamLimits

0x0e0f,	// (0x0007dcd5) popup_call_poc_inact_window_t3

0x0002,

0xf485,	// (0x0008c34b) popup_call_poc_inact_window_t_ParamLimits

0xf485,	// (0x0008c34b) popup_call_poc_inact_window_t

0x1d9e,	// (0x0007ec64) context_pane_ParamLimits

0x6d61,	// (0x00083c27) signal_pane_ParamLimits

0xd6f2,	// (0x0008a5b8) main_call2_pane

0x6cd4,	// (0x00083b9a) popup_phob_thumbnail2_window_ParamLimits

0x6cd4,	// (0x00083b9a) popup_phob_thumbnail2_window

0x63a4,	// (0x0008326a) aid_hotspot_pointer_arrow_pane

0x63ac,	// (0x00083272) aid_hotspot_pointer_hand_pane

0x6a21,	// (0x000838e7) phob_pre_status_pane_g5

0xd4c0,	// (0x0008a386) cams_zoom_pane_ParamLimits

0xd4c0,	// (0x0008a386) image_vga_pane_ParamLimits

0xd4dc,	// (0x0008a3a2) main_camera_pane_g1_ParamLimits

0xd4dc,	// (0x0008a3a2) main_camera_pane_g2_ParamLimits

0xd4dc,	// (0x0008a3a2) main_camera_pane_g3_ParamLimits

0xd4dc,	// (0x0008a3a2) main_camera_pane_g4_ParamLimits

0xd4dc,	// (0x0008a3a2) main_camera_pane_g5_ParamLimits

0xd4dc,	// (0x0008a3a2) main_camera_pane_g6_ParamLimits

0xd4dc,	// (0x0008a3a2) main_camera_pane_g7_ParamLimits

0xf1ab,	// (0x0008c071) main_camera_pane_g_ParamLimits

0xd6fa,	// (0x0008a5c0) main_camera_pane_t1_ParamLimits

0xd6fa,	// (0x0008a5c0) main_camera_pane_t2_ParamLimits

0xf1bc,	// (0x0008c082) main_camera_pane_t_ParamLimits

0xd445,	// (0x0008a30b) bg_popup_preview_window_pane_cp01_ParamLimits

0xd445,	// (0x0008a30b) bg_popup_preview_window_pane_cp01

0x0e24,	// (0x0007dcea) popup_phob_thumbnail2_window_g1_ParamLimits

0x0e24,	// (0x0007dcea) popup_phob_thumbnail2_window_g1

0xd1ea,	// (0x0008a0b0) call2_cli_visual_pane

0x66f2,	// (0x000835b8) popup_call2_audio_conf_window_ParamLimits

0x66f2,	// (0x000835b8) popup_call2_audio_conf_window

0x6707,	// (0x000835cd) popup_call2_audio_first_window_ParamLimits

0x6707,	// (0x000835cd) popup_call2_audio_first_window

0x67a5,	// (0x0008366b) popup_call2_audio_in_window_ParamLimits

0x67a5,	// (0x0008366b) popup_call2_audio_in_window

0x67e7,	// (0x000836ad) popup_call2_audio_out_window_ParamLimits

0x67e7,	// (0x000836ad) popup_call2_audio_out_window

0x6849,	// (0x0008370f) popup_call2_audio_second_window_ParamLimits

0x6849,	// (0x0008370f) popup_call2_audio_second_window

0x68a7,	// (0x0008376d) popup_call2_audio_wait_window_ParamLimits

0x68a7,	// (0x0008376d) popup_call2_audio_wait_window

0xd1ea,	// (0x0008a0b0) bg_popup_call2_act_pane_cp03

0xd427,	// (0x0008a2ed) list_conf_pane_cp

0x0e30,	// (0x0007dcf6) popup_call2_audio_conf_window_t1

0x0e3e,	// (0x0007dd04) list_single_graphic_popup_conf2_pane_ParamLimits

0x0e3e,	// (0x0007dd04) list_single_graphic_popup_conf2_pane

0x0632,	// (0x0007d4f8) list_highlight_pane_cp04

0x0e51,	// (0x0007dd17) list_single_graphic_popup_conf2_pane_g1

0x0643,	// (0x0007d509) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf48c,	// (0x0008c352) list_single_graphic_popup_conf2_pane_g

0x0e5b,	// (0x0007dd21) list_single_graphic_popup_conf2_pane_t1

0x0e69,	// (0x0007dd2f) bg_popup_call2_act_pane_cp01_ParamLimits

0x0e69,	// (0x0007dd2f) bg_popup_call2_act_pane_cp01

0x0ef3,	// (0x0007ddb9) call_type_pane_cp05_ParamLimits

0x0ef3,	// (0x0007ddb9) call_type_pane_cp05

0x0f47,	// (0x0007de0d) popup_call2_audio_second_window_g1_ParamLimits

0x0f47,	// (0x0007de0d) popup_call2_audio_second_window_g1

0x0f9b,	// (0x0007de61) popup_call2_audio_second_window_g2_ParamLimits

0x0f9b,	// (0x0007de61) popup_call2_audio_second_window_g2

0x0002,

0xf491,	// (0x0008c357) popup_call2_audio_second_window_g_ParamLimits

0xf491,	// (0x0008c357) popup_call2_audio_second_window_g

0x1000,	// (0x0007dec6) popup_call2_audio_second_window_t1_ParamLimits

0x1000,	// (0x0007dec6) popup_call2_audio_second_window_t1

0x10bb,	// (0x0007df81) popup_call2_audio_second_window_t2_ParamLimits

0x10bb,	// (0x0007df81) popup_call2_audio_second_window_t2

0x110e,	// (0x0007dfd4) popup_call2_audio_second_window_t3_ParamLimits

0x110e,	// (0x0007dfd4) popup_call2_audio_second_window_t3

0x0003,

0xf498,	// (0x0008c35e) popup_call2_audio_second_window_t_ParamLimits

0xf498,	// (0x0008c35e) popup_call2_audio_second_window_t

0xd1ea,	// (0x0008a0b0) bg_popup_call2_in_pane_cp02

0xd1f4,	// (0x0008a0ba) call_type_pane_cp04

0x68e6,	// (0x000837ac) popup_call2_audio_wait_window_g1

0x68ee,	// (0x000837b4) popup_call2_audio_wait_window_g2

0x0001,

0xf4a1,	// (0x0008c367) popup_call2_audio_wait_window_g

0xd20c,	// (0x0008a0d2) popup_call2_audio_wait_window_t3

0x1201,	// (0x0007e0c7) bg_popup_call2_act_pane_ParamLimits

0x1201,	// (0x0007e0c7) bg_popup_call2_act_pane

0x12c1,	// (0x0007e187) call_type_pane_cp03_ParamLimits

0x12c1,	// (0x0007e187) call_type_pane_cp03

0x1325,	// (0x0007e1eb) popup_call2_audio_first_window_g1_ParamLimits

0x1325,	// (0x0007e1eb) popup_call2_audio_first_window_g1

0x1395,	// (0x0007e25b) popup_call2_audio_first_window_g2_ParamLimits

0x1395,	// (0x0007e25b) popup_call2_audio_first_window_g2

0x13f9,	// (0x0007e2bf) popup_call2_audio_first_window_g3_ParamLimits

0x13f9,	// (0x0007e2bf) popup_call2_audio_first_window_g3

0x0004,

0xf4a6,	// (0x0008c36c) popup_call2_audio_first_window_g_ParamLimits

0xf4a6,	// (0x0008c36c) popup_call2_audio_first_window_g

0x1481,	// (0x0007e347) popup_call2_audio_first_window_t1_ParamLimits

0x1481,	// (0x0007e347) popup_call2_audio_first_window_t1

0x1584,	// (0x0007e44a) popup_call2_audio_first_window_t4_ParamLimits

0x1584,	// (0x0007e44a) popup_call2_audio_first_window_t4

0x1667,	// (0x0007e52d) popup_call2_audio_first_window_t5_ParamLimits

0x1667,	// (0x0007e52d) popup_call2_audio_first_window_t5

0x0003,

0xf4b1,	// (0x0008c377) popup_call2_audio_first_window_t_ParamLimits

0xf4b1,	// (0x0008c377) popup_call2_audio_first_window_t

0xd43d,	// (0x0008a303) bg_popup_call2_act_pane_g1

0x1cbe,	// (0x0007eb84) popup_cale_lunar_info_window_t1

0x1ccc,	// (0x0007eb92) popup_cale_lunar_info_window_t2

0x1cda,	// (0x0007eba0) popup_cale_lunar_info_window_t3

0xd1ea,	// (0x0008a0b0) bg_popup_call2_bubble_pane

0x1768,	// (0x0007e62e) bg_popup_call2_in_pane_cp01_ParamLimits

0x1768,	// (0x0007e62e) bg_popup_call2_in_pane_cp01

0xcec6,	// (0x00089d8c) call_type_pane_cp02

0x68f6,	// (0x000837bc) popup_call2_audio_out_window_g1_ParamLimits

0x68f6,	// (0x000837bc) popup_call2_audio_out_window_g1

0x17b0,	// (0x0007e676) popup_call2_audio_out_window_g2_ParamLimits

0x17b0,	// (0x0007e676) popup_call2_audio_out_window_g2

0x6922,	// (0x000837e8) popup_call2_audio_out_window_g3_ParamLimits

0x6922,	// (0x000837e8) popup_call2_audio_out_window_g3

0x0003,

0xf4ba,	// (0x0008c380) popup_call2_audio_out_window_g_ParamLimits

0xf4ba,	// (0x0008c380) popup_call2_audio_out_window_g

0x17e7,	// (0x0007e6ad) popup_call2_audio_out_window_t1_ParamLimits

0x17e7,	// (0x0007e6ad) popup_call2_audio_out_window_t1

0x1846,	// (0x0007e70c) popup_call2_audio_out_window_t2_ParamLimits

0x1846,	// (0x0007e70c) popup_call2_audio_out_window_t2

0x189a,	// (0x0007e760) popup_call2_audio_out_window_t3_ParamLimits

0x189a,	// (0x0007e760) popup_call2_audio_out_window_t3

0x18b0,	// (0x0007e776) popup_call2_audio_out_window_t4_ParamLimits

0x18b0,	// (0x0007e776) popup_call2_audio_out_window_t4

0x18c6,	// (0x0007e78c) popup_call2_audio_out_window_t5_ParamLimits

0x18c6,	// (0x0007e78c) popup_call2_audio_out_window_t5

0x0005,

0xf4c3,	// (0x0008c389) popup_call2_audio_out_window_t_ParamLimits

0xf4c3,	// (0x0008c389) popup_call2_audio_out_window_t

0x192a,	// (0x0007e7f0) bg_popup_call2_in_pane_ParamLimits

0x192a,	// (0x0007e7f0) bg_popup_call2_in_pane

0x1986,	// (0x0007e84c) popup_call2_audio_in_window_g1_ParamLimits

0x1986,	// (0x0007e84c) popup_call2_audio_in_window_g1

0x19be,	// (0x0007e884) popup_call2_audio_in_window_g2_ParamLimits

0x19be,	// (0x0007e884) popup_call2_audio_in_window_g2

0x19f6,	// (0x0007e8bc) popup_call2_audio_in_window_g3_ParamLimits

0x19f6,	// (0x0007e8bc) popup_call2_audio_in_window_g3

0x0003,

0xf4d0,	// (0x0008c396) popup_call2_audio_in_window_g_ParamLimits

0xf4d0,	// (0x0008c396) popup_call2_audio_in_window_g

0x1a4e,	// (0x0007e914) popup_call2_audio_in_window_t1_ParamLimits

0x1a4e,	// (0x0007e914) popup_call2_audio_in_window_t1

0x1ace,	// (0x0007e994) popup_call2_audio_in_window_t2_ParamLimits

0x1ace,	// (0x0007e994) popup_call2_audio_in_window_t2

0x1b4e,	// (0x0007ea14) popup_call2_audio_in_window_t3_ParamLimits

0x1b4e,	// (0x0007ea14) popup_call2_audio_in_window_t3

0x1b68,	// (0x0007ea2e) popup_call2_audio_in_window_t4_ParamLimits

0x1b68,	// (0x0007ea2e) popup_call2_audio_in_window_t4

0x1b7a,	// (0x0007ea40) popup_call2_audio_in_window_t5_ParamLimits

0x1b7a,	// (0x0007ea40) popup_call2_audio_in_window_t5

0x1b8c,	// (0x0007ea52) popup_call2_audio_in_window_t6_ParamLimits

0x1b8c,	// (0x0007ea52) popup_call2_audio_in_window_t6

0x0005,

0xf4d9,	// (0x0008c39f) popup_call2_audio_in_window_t_ParamLimits

0xf4d9,	// (0x0008c39f) popup_call2_audio_in_window_t

0xd43d,	// (0x0008a303) bg_popup_call2_in_pane_g1

0x1ce8,	// (0x0007ebae) popup_cale_lunar_info_window_t4

0x0003,

0xf554,	// (0x0008c41a) popup_cale_lunar_info_window_t

0xd445,	// (0x0008a30b) bg_popup_call2_rect_pane_ParamLimits

0xd445,	// (0x0008a30b) bg_popup_call2_rect_pane

0xd1ea,	// (0x0008a0b0) call2_cli_visual_graphic_pane

0xd1ea,	// (0x0008a0b0) call2_cli_visual_text_pane

0x6d9d,	// (0x00083c63) smil_status_volume_pane_g3

0x0002,

0xd45d,	// (0x0008a323) call2_cli_visual_graphic_pane_g1

0xd45d,	// (0x0008a323) call2_cli_visual_graphic_pane_g2

0xd45d,	// (0x0008a323) call2_cli_visual_graphic_pane_g3

0x0002,

0xf4e6,	// (0x0008c3ac) call2_cli_visual_graphic_pane_g

0x1b9e,	// (0x0007ea64) bg_popup_call2_rect_pane_g1

0xd617,	// (0x0008a4dd) bg_popup_call2_rect_pane_g2

0x1ba6,	// (0x0007ea6c) bg_popup_call2_rect_pane_g3

0x1bae,	// (0x0007ea74) bg_popup_call2_rect_pane_g4

0x1bb6,	// (0x0007ea7c) bg_popup_call2_rect_pane_g5

0x1bbe,	// (0x0007ea84) bg_popup_call2_rect_pane_g6

0x1bc6,	// (0x0007ea8c) bg_popup_call2_rect_pane_g7

0x1bce,	// (0x0007ea94) bg_popup_call2_rect_pane_g8

0x1bd6,	// (0x0007ea9c) bg_popup_call2_rect_pane_g9

0x0008,

0xf4ed,	// (0x0008c3b3) bg_popup_call2_rect_pane_g

0x1bde,	// (0x0007eaa4) bg_popup_call2_bubble_pane_g1

0x1be6,	// (0x0007eaac) bg_popup_call2_bubble_pane_g2

0x1bee,	// (0x0007eab4) bg_popup_call2_bubble_pane_g3

0x1bf6,	// (0x0007eabc) bg_popup_call2_bubble_pane_g4

0x1bfe,	// (0x0007eac4) bg_popup_call2_bubble_pane_g5

0x1c06,	// (0x0007eacc) bg_popup_call2_bubble_pane_g6

0x1c0e,	// (0x0007ead4) bg_popup_call2_bubble_pane_g7

0x1c16,	// (0x0007eadc) bg_popup_call2_bubble_pane_g8

0x1c1e,	// (0x0007eae4) bg_popup_call2_bubble_pane_g9

0x0008,

0xf500,	// (0x0008c3c6) bg_popup_call2_bubble_pane_g

0x44e7,	// (0x000813ad) aid_cale_week_size_cell_pane

0xd445,	// (0x0008a30b) aid_cams_cif_uncrop_pane_ParamLimits

0xd445,	// (0x0008a30b) aid_cams_cif_uncrop_pane

0x4ae0,	// (0x000819a6) aid_cams_size_cell_ParamLimits

0x4ae0,	// (0x000819a6) aid_cams_size_cell

0x4aec,	// (0x000819b2) grid_cams_pane_ParamLimits

0x4afa,	// (0x000819c0) linegrid_cams_pane_ParamLimits

0x4bd1,	// (0x00081a97) call_video_pane_t1

0x4bf2,	// (0x00081ab8) call_video_pane_t2

0x0001,

0xf208,	// (0x0008c0ce) call_video_pane_t

0x50e4,	// (0x00081faa) aid_cale_month_size_cell_pane_ParamLimits

0x50e4,	// (0x00081faa) aid_cale_month_size_cell_pane

0xf598,	// (0x0008c45e) smil_status_volume_pane_g

0x6daa,	// (0x00083c70) volume_smil_pane_ParamLimits

0x3d69,	// (0x00080c2f) aid_popup2_width_pane

0x43de,	// (0x000812a4) cell_qdial_pane_g4_ParamLimits

0x43de,	// (0x000812a4) cell_qdial_pane_g4

0x600f,	// (0x00082ed5) aid_blid_cardinal_pane_ParamLimits

0x601f,	// (0x00082ee5) aid_blid_destination_pane_ParamLimits

0x601f,	// (0x00082ee5) aid_blid_destination_pane

0xd445,	// (0x0008a30b) bg_popup_call_poc_act_pane_ParamLimits

0xd445,	// (0x0008a30b) bg_popup_call_poc_act_pane

0xd445,	// (0x0008a30b) bg_popup_call_poc_inact_pane_ParamLimits

0xd445,	// (0x0008a30b) bg_popup_call_poc_inact_pane

0x1c26,	// (0x0007eaec) bg_popup_call_poc_act_pane_g1

0x1c2e,	// (0x0007eaf4) bg_popup_call_poc_act_pane_g2

0x1c36,	// (0x0007eafc) bg_popup_call_poc_act_pane_g3

0x1bf6,	// (0x0007eabc) bg_popup_call_poc_act_pane_g4

0x1bfe,	// (0x0007eac4) bg_popup_call_poc_act_pane_g5

0x1c3e,	// (0x0007eb04) bg_popup_call_poc_act_pane_g6

0x1c0e,	// (0x0007ead4) bg_popup_call_poc_act_pane_g7

0x1c46,	// (0x0007eb0c) bg_popup_call_poc_act_pane_g8

0xd1ea,	// (0x0008a0b0) main_usb_pane

0x6c07,	// (0x00083acd) popup_cale_lunar_info_window

0x4f0f,	// (0x00081dd5) im_reading_pane_t1_ParamLimits

0xd7f5,	// (0x0008a6bb) list_im_pane_ParamLimits

0xd806,	// (0x0008a6cc) scroll_pane_cp07_ParamLimits

0xd1ea,	// (0x0008a0b0) grid_highlight_pane_cp012

0xd445,	// (0x0008a30b) mup_scale_pane_ParamLimits

0x13f9,	// (0x0007e2bf) main_usb_pane_g1_ParamLimits

0x13f9,	// (0x0007e2bf) main_usb_pane_g1

0x6989,	// (0x0008384f) main_usb_pane_g2_ParamLimits

0x6989,	// (0x0008384f) main_usb_pane_g2

0x0001,

0xf53d,	// (0x0008c403) main_usb_pane_g_ParamLimits

0xf53d,	// (0x0008c403) main_usb_pane_g

0x6995,	// (0x0008385b) main_usb_pane_t1_ParamLimits

0x6995,	// (0x0008385b) main_usb_pane_t1

0x69a7,	// (0x0008386d) main_usb_pane_t2_ParamLimits

0x69a7,	// (0x0008386d) main_usb_pane_t2

0x69b9,	// (0x0008387f) main_usb_pane_t3_ParamLimits

0x69b9,	// (0x0008387f) main_usb_pane_t3

0x69cb,	// (0x00083891) main_usb_pane_t4_ParamLimits

0x69cb,	// (0x00083891) main_usb_pane_t4

0x69dd,	// (0x000838a3) main_usb_pane_t5_ParamLimits

0x69dd,	// (0x000838a3) main_usb_pane_t5

0x69ef,	// (0x000838b5) main_usb_pane_t6_ParamLimits

0x69ef,	// (0x000838b5) main_usb_pane_t6

0x0005,

0xf542,	// (0x0008c408) main_usb_pane_t_ParamLimits

0x5fb5,	// (0x00082e7b) aid_text_placing

0x5fc1,	// (0x00082e87) main_location2_pane_t1_ParamLimits

0x5fd5,	// (0x00082e9b) main_location2_pane_t2_ParamLimits

0x5fe9,	// (0x00082eaf) main_location2_pane_t3_ParamLimits

0x5ffd,	// (0x00082ec3) main_location2_pane_t4_ParamLimits

0x5ffd,	// (0x00082ec3) main_location2_pane_t4

0xf349,	// (0x0008c20f) main_location2_pane_t_ParamLimits

0xd481,	// (0x0008a347) find_pinb_pane_g2_ParamLimits

0xd481,	// (0x0008a347) find_pinb_pane_g2

0x0001,

0xf0c0,	// (0x0008bf86) find_pinb_pane_g_ParamLimits

0xf0c0,	// (0x0008bf86) find_pinb_pane_g

0xd48d,	// (0x0008a353) find_pinb_pane_t1_ParamLimits

0xd49f,	// (0x0008a365) find_pinb_pane_t2_ParamLimits

0xf0c5,	// (0x0008bf8b) find_pinb_pane_t_ParamLimits

0xd1ea,	// (0x0008a0b0) main_call3_pane

0x56a7,	// (0x0008256d) cale_month_day_heading_pane_t1_ParamLimits

0x572d,	// (0x000825f3) cale_month_day_heading_pane_t2_ParamLimits

0x57a6,	// (0x0008266c) cale_month_day_heading_pane_t3_ParamLimits

0x581f,	// (0x000826e5) cale_month_day_heading_pane_t4_ParamLimits

0x5898,	// (0x0008275e) cale_month_day_heading_pane_t5_ParamLimits

0x5911,	// (0x000827d7) cale_month_day_heading_pane_t6_ParamLimits

0x598a,	// (0x00082850) cale_month_day_heading_pane_t7_ParamLimits

0xf240,	// (0x0008c106) cale_month_day_heading_pane_t_ParamLimits

0xda50,	// (0x0008a916) smil_status_volume_pane

0x64e0,	// (0x000833a6) postcard_address_pane_ParamLimits

0x64e0,	// (0x000833a6) postcard_address_pane

0x64ec,	// (0x000833b2) postcard_message_pane_ParamLimits

0x64ec,	// (0x000833b2) postcard_message_pane

0x694e,	// (0x00083814) call2_cli_visual_pane_t1_ParamLimits

0x694e,	// (0x00083814) call2_cli_visual_pane_t1

0x1e73,	// (0x0007ed39) postcard_message_pane_t1_ParamLimits

0x1e73,	// (0x0007ed39) postcard_message_pane_t1

0x1e5b,	// (0x0007ed21) postcard_address_pane_t1_ParamLimits

0x1e5b,	// (0x0007ed21) postcard_address_pane_t1

0x6edb,	// (0x00083da1) popup_call3_audio_in_window_ParamLimits

0x6edb,	// (0x00083da1) popup_call3_audio_in_window

0x6dbf,	// (0x00083c85) bg_popup_call3_in_pane_ParamLimits

0x6dbf,	// (0x00083c85) bg_popup_call3_in_pane

0x6e21,	// (0x00083ce7) popup_call3_audio_in_window_g1_ParamLimits

0x6e21,	// (0x00083ce7) popup_call3_audio_in_window_g1

0x6e39,	// (0x00083cff) popup_call3_audio_in_window_g2_ParamLimits

0x6e39,	// (0x00083cff) popup_call3_audio_in_window_g2

0x6e51,	// (0x00083d17) popup_call3_audio_in_window_g3_ParamLimits

0x6e51,	// (0x00083d17) popup_call3_audio_in_window_g3

0x0003,

0xf59f,	// (0x0008c465) popup_call3_audio_in_window_g_ParamLimits

0xf59f,	// (0x0008c465) popup_call3_audio_in_window_g

0x6e79,	// (0x00083d3f) popup_call3_audio_in_window_t1_ParamLimits

0x6e79,	// (0x00083d3f) popup_call3_audio_in_window_t1

0x6ea1,	// (0x00083d67) popup_call3_audio_in_window_t2_ParamLimits

0x6ea1,	// (0x00083d67) popup_call3_audio_in_window_t2

0x6ec9,	// (0x00083d8f) popup_call3_audio_in_window_t3_ParamLimits

0x6ec9,	// (0x00083d8f) popup_call3_audio_in_window_t3

0x0002,

0xf5a8,	// (0x0008c46e) popup_call3_audio_in_window_t_ParamLimits

0xf5a8,	// (0x0008c46e) popup_call3_audio_in_window_t

0xd6f2,	// (0x0008a5b8) bg_popup_call3_rect_pane

0x1b9e,	// (0x0007ea64) bg_popup_call3_rect_pane_g1

0xd617,	// (0x0008a4dd) bg_popup_call3_rect_pane_g2

0x1ba6,	// (0x0007ea6c) bg_popup_call3_rect_pane_g3

0x1bae,	// (0x0007ea74) bg_popup_call3_rect_pane_g4

0x1bb6,	// (0x0007ea7c) bg_popup_call3_rect_pane_g5

0x1bbe,	// (0x0007ea84) bg_popup_call3_rect_pane_g6

0x1bc6,	// (0x0007ea8c) bg_popup_call3_rect_pane_g7

0xcdcd,	// (0x00089c93) mup_visualizer_osc_pane

0xcdcd,	// (0x00089c93) mup_visualizer_spec_pane

0x6ddf,	// (0x00083ca5) call3_video_qcif_pane_ParamLimits

0x6ddf,	// (0x00083ca5) call3_video_qcif_pane

0x6df1,	// (0x00083cb7) call3_video_qcif_uncrop_pane_ParamLimits

0x6df1,	// (0x00083cb7) call3_video_qcif_uncrop_pane

0x6dff,	// (0x00083cc5) call3_video_subqcif_pane_ParamLimits

0x6dff,	// (0x00083cc5) call3_video_subqcif_pane

0x6e11,	// (0x00083cd7) call3_video_subqcif_uncrop_pane_ParamLimits

0x6e11,	// (0x00083cd7) call3_video_subqcif_uncrop_pane

0x6e69,	// (0x00083d2f) popup_call3_audio_in_window_g4_ParamLimits

0x6e69,	// (0x00083d2f) popup_call3_audio_in_window_g4

0xcdcd,	// (0x00089c93) mup_spec_half_pane

0xcdcd,	// (0x00089c93) mup_spec_half_pane_cp

0xcdcd,	// (0x00089c93) mup_osc_middle_pane

0xd728,	// (0x0008a5ee) mup_visualizer_osc_pane_g1

0x1dec,	// (0x0007ecb2) mup_spec_bar_pane_ParamLimits

0x1dec,	// (0x0007ecb2) mup_spec_bar_pane

0xd728,	// (0x0008a5ee) mup_spec_bar_pane_g1

0xd728,	// (0x0008a5ee) mup_spec_bar_pane_g2

0x0001,

0xf3c3,	// (0x0008c289) mup_spec_bar_pane_g

0x44e7,	// (0x000813ad) aid_cale_week_size_cell_pane_ParamLimits

0x44fc,	// (0x000813c2) bg_cale_heading_pane_ParamLimits

0xd654,	// (0x0008a51a) bg_cale_pane_cp01_ParamLimits

0x451e,	// (0x000813e4) cale_week_corner_pane_ParamLimits

0x4538,	// (0x000813fe) cale_week_day_heading_pane_ParamLimits

0x455a,	// (0x00081420) cale_week_scroll_pane_g1_ParamLimits

0x4577,	// (0x0008143d) cale_week_scroll_pane_g2_ParamLimits

0x458a,	// (0x00081450) cale_week_scroll_pane_g3_ParamLimits

0x459d,	// (0x00081463) cale_week_scroll_pane_g4_ParamLimits

0x45b0,	// (0x00081476) cale_week_scroll_pane_g5_ParamLimits

0x45c3,	// (0x00081489) cale_week_scroll_pane_g6_ParamLimits

0x45d6,	// (0x0008149c) cale_week_scroll_pane_g7_ParamLimits

0x45eb,	// (0x000814b1) cale_week_scroll_pane_g8_ParamLimits

0x4600,	// (0x000814c6) cale_week_scroll_pane_g9_ParamLimits

0x4613,	// (0x000814d9) cale_week_scroll_pane_g10_ParamLimits

0x4626,	// (0x000814ec) cale_week_scroll_pane_g11_ParamLimits

0x4639,	// (0x000814ff) cale_week_scroll_pane_g12_ParamLimits

0x4650,	// (0x00081516) cale_week_scroll_pane_g13_ParamLimits

0x466b,	// (0x00081531) cale_week_scroll_pane_g14_ParamLimits

0x4686,	// (0x0008154c) cale_week_scroll_pane_g15_ParamLimits

0xf151,	// (0x0008c017) cale_week_scroll_pane_g_ParamLimits

0x46b6,	// (0x0008157c) cale_week_time_pane_ParamLimits

0x46cb,	// (0x00081591) grid_cale_week_pane_ParamLimits

0xd671,	// (0x0008a537) listscroll_cale_week_pane_t1

0xd683,	// (0x0008a549) scroll_pane_cp08_ParamLimits

0x5158,	// (0x0008201e) cale_month_corner_pane_ParamLimits

0xda26,	// (0x0008a8ec) cale_month_pane_t1

0x5626,	// (0x000824ec) cale_month_week_pane_ParamLimits

0x13f9,	// (0x0007e2bf) popup_call_status_window_g1_ParamLimits

0x5de2,	// (0x00082ca8) popup_call_status_window_g2_ParamLimits

0x5dee,	// (0x00082cb4) popup_call_status_window_g3_ParamLimits

0xf2d0,	// (0x0008c196) popup_call_status_window_g_ParamLimits

0x0557,	// (0x0007d41d) aid_call2_pane

0x6398,	// (0x0008325e) msg_header_pane_g1

0x64e0,	// (0x000833a6) postcard_address2_pane_ParamLimits

0x64e0,	// (0x000833a6) postcard_address2_pane

0x64ec,	// (0x000833b2) postcard_message2_pane_ParamLimits

0x64ec,	// (0x000833b2) postcard_message2_pane

0x6d6f,	// (0x00083c35) message2_row_pane_ParamLimits

0x6d6f,	// (0x00083c35) message2_row_pane

0x6d8a,	// (0x00083c50) address2_row_pane_ParamLimits

0x6d8a,	// (0x00083c50) address2_row_pane

0x1db9,	// (0x0007ec7f) postcard_message2_row_pane_g1

0x1dc1,	// (0x0007ec87) postcard_message2_row_pane_t1

0x1db9,	// (0x0007ec7f) address2_row_pane_g1

0x1dc1,	// (0x0007ec87) address2_row_pane_t1

0x4950,	// (0x00081816) aid_size_cell_vorec

0xd1ea,	// (0x0008a0b0) main_rss_pane

0x1dcf,	// (0x0007ec95) rss_list_single_pane_ParamLimits

0x1dcf,	// (0x0007ec95) rss_list_single_pane

0x1ddd,	// (0x0007eca3) rss_list_single_pane_t1

0x1ddd,	// (0x0007eca3) rss_list_single_pane_t2

0x0001,

0xf593,	// (0x0008c459) rss_list_single_pane_t

0xd1ea,	// (0x0008a0b0) main_camera2_pane

0xd1ea,	// (0x0008a0b0) main_video2_pane

0x4011,	// (0x00080ed7) cams_zoom_pane_cp2_ParamLimits

0x4011,	// (0x00080ed7) cams_zoom_pane_cp2

0x4011,	// (0x00080ed7) image2_vga_pane_ParamLimits

0x4011,	// (0x00080ed7) image2_vga_pane

0x05f2,	// (0x0007d4b8) main_camera2_pane_g1_ParamLimits

0x05f2,	// (0x0007d4b8) main_camera2_pane_g1

0x05f2,	// (0x0007d4b8) main_camera2_pane_g2_ParamLimits

0x05f2,	// (0x0007d4b8) main_camera2_pane_g2

0x05f2,	// (0x0007d4b8) main_camera2_pane_g3_ParamLimits

0x05f2,	// (0x0007d4b8) main_camera2_pane_g3

0x05f2,	// (0x0007d4b8) main_camera2_pane_g4_ParamLimits

0x05f2,	// (0x0007d4b8) main_camera2_pane_g4

0x05f2,	// (0x0007d4b8) main_camera2_pane_g5_ParamLimits

0x05f2,	// (0x0007d4b8) main_camera2_pane_g5

0x05f2,	// (0x0007d4b8) main_camera2_pane_g6_ParamLimits

0x05f2,	// (0x0007d4b8) main_camera2_pane_g6

0x05f2,	// (0x0007d4b8) main_camera2_pane_g7_ParamLimits

0x05f2,	// (0x0007d4b8) main_camera2_pane_g7

0x05f2,	// (0x0007d4b8) main_camera2_pane_g8_ParamLimits

0x05f2,	// (0x0007d4b8) main_camera2_pane_g8

0x0008,

0xf5af,	// (0x0008c475) main_camera2_pane_g_ParamLimits

0xf5af,	// (0x0008c475) main_camera2_pane_g

0x6ef8,	// (0x00083dbe) main_camera2_pane_t1_ParamLimits

0x6ef8,	// (0x00083dbe) main_camera2_pane_t1

0x6ef8,	// (0x00083dbe) main_camera2_pane_t2_ParamLimits

0x6ef8,	// (0x00083dbe) main_camera2_pane_t2

0x6ef8,	// (0x00083dbe) main_camera2_pane_t3_ParamLimits

0x6ef8,	// (0x00083dbe) main_camera2_pane_t3

0x6ef8,	// (0x00083dbe) main_camera2_pane_t4_ParamLimits

0x6ef8,	// (0x00083dbe) main_camera2_pane_t4

0x0006,

0xf5c2,	// (0x0008c488) main_camera2_pane_t_ParamLimits

0xf5c2,	// (0x0008c488) main_camera2_pane_t

0x6f20,	// (0x00083de6) cams_zoom_pane_cp4_ParamLimits

0x6f20,	// (0x00083de6) cams_zoom_pane_cp4

0x6bb2,	// (0x00083a78) image2_cif_pane_ParamLimits

0x6bb2,	// (0x00083a78) image2_cif_pane

0x4011,	// (0x00080ed7) image2_subqcif_pane_ParamLimits

0x4011,	// (0x00080ed7) image2_subqcif_pane

0x6f2e,	// (0x00083df4) main_video2_pane_g1_ParamLimits

0x6f2e,	// (0x00083df4) main_video2_pane_g1

0x6f2e,	// (0x00083df4) main_video2_pane_g2_ParamLimits

0x6f2e,	// (0x00083df4) main_video2_pane_g2

0x6f2e,	// (0x00083df4) main_video2_pane_g3_ParamLimits

0x6f2e,	// (0x00083df4) main_video2_pane_g3

0x6f2e,	// (0x00083df4) main_video2_pane_g4_ParamLimits

0x6f2e,	// (0x00083df4) main_video2_pane_g4

0x6f2e,	// (0x00083df4) main_video2_pane_g5_ParamLimits

0x6f2e,	// (0x00083df4) main_video2_pane_g5

0x6f2e,	// (0x00083df4) main_video2_pane_g6_ParamLimits

0x6f2e,	// (0x00083df4) main_video2_pane_g6

0x0005,

0xf5d1,	// (0x0008c497) main_video2_pane_g_ParamLimits

0xf5d1,	// (0x0008c497) main_video2_pane_g

0x6f3c,	// (0x00083e02) main_video2_pane_t1_ParamLimits

0x6f3c,	// (0x00083e02) main_video2_pane_t1

0x6f3c,	// (0x00083e02) main_video2_pane_t2_ParamLimits

0x6f3c,	// (0x00083e02) main_video2_pane_t2

0x6f3c,	// (0x00083e02) main_video2_pane_t3_ParamLimits

0x6f3c,	// (0x00083e02) main_video2_pane_t3

0x0002,

0xf5de,	// (0x0008c4a4) main_video2_pane_t_ParamLimits

0xf5de,	// (0x0008c4a4) main_video2_pane_t

0x6a85,	// (0x0008394b) call_muted_g2

0x0001,

0xf585,	// (0x0008c44b) call_muted_g

0xd1ea,	// (0x0008a0b0) main_mup2_pane

0xd4ea,	// (0x0008a3b0) main_mup2_pane_g1_ParamLimits

0xd4ea,	// (0x0008a3b0) main_mup2_pane_g1

0xd4ea,	// (0x0008a3b0) main_mup2_pane_g2_ParamLimits

0xd4ea,	// (0x0008a3b0) main_mup2_pane_g2

0xdadf,	// (0x0008a9a5) main_mup_pane_g13_cp1

0x402b,	// (0x00080ef1) mup_volume_pane_cp1

0xd4ea,	// (0x0008a3b0) main_mup2_pane_g4_ParamLimits

0xd4ea,	// (0x0008a3b0) main_mup2_pane_g4

0xd4ea,	// (0x0008a3b0) main_mup2_pane_g5_ParamLimits

0xd4ea,	// (0x0008a3b0) main_mup2_pane_g5

0xd4ea,	// (0x0008a3b0) main_mup2_pane_g6_ParamLimits

0xd4ea,	// (0x0008a3b0) main_mup2_pane_g6

0xd4ea,	// (0x0008a3b0) main_mup2_pane_g7_ParamLimits

0xd4ea,	// (0x0008a3b0) main_mup2_pane_g7

0x0006,

0xf5e5,	// (0x0008c4ab) main_mup2_pane_g_ParamLimits

0xf5e5,	// (0x0008c4ab) main_mup2_pane_g

0xd4f8,	// (0x0008a3be) main_mup2_pane_t1_ParamLimits

0xd4f8,	// (0x0008a3be) main_mup2_pane_t1

0xd4f8,	// (0x0008a3be) main_mup2_pane_t2_ParamLimits

0xd4f8,	// (0x0008a3be) main_mup2_pane_t2

0xd4f8,	// (0x0008a3be) main_mup2_pane_t3_ParamLimits

0xd4f8,	// (0x0008a3be) main_mup2_pane_t3

0xd4f8,	// (0x0008a3be) main_mup2_pane_t4_ParamLimits

0xd4f8,	// (0x0008a3be) main_mup2_pane_t4

0xd4f8,	// (0x0008a3be) main_mup2_pane_t5_ParamLimits

0xd4f8,	// (0x0008a3be) main_mup2_pane_t5

0xd4f8,	// (0x0008a3be) main_mup2_pane_t6_ParamLimits

0xd4f8,	// (0x0008a3be) main_mup2_pane_t6

0x0005,

0xf5f4,	// (0x0008c4ba) main_mup2_pane_t_ParamLimits

0xf5f4,	// (0x0008c4ba) main_mup2_pane_t

0x1ebf,	// (0x0007ed85) mup2_visualizer_pane_ParamLimits

0x1ebf,	// (0x0007ed85) mup2_visualizer_pane

0x1ebf,	// (0x0007ed85) mup_progress_pane_cp_ParamLimits

0x1ebf,	// (0x0007ed85) mup_progress_pane_cp

0x70a2,	// (0x00083f68) mup_volume_pane_cp_ParamLimits

0x70a2,	// (0x00083f68) mup_volume_pane_cp

0xd4ce,	// (0x0008a394) mup2_visualizer_pane_g1_ParamLimits

0xd4ce,	// (0x0008a394) mup2_visualizer_pane_g1

0xd4dc,	// (0x0008a3a2) mup2_visualizer_pane_g2_ParamLimits

0xd4dc,	// (0x0008a3a2) mup2_visualizer_pane_g2

0xd4dc,	// (0x0008a3a2) mup2_visualizer_pane_g3_ParamLimits

0xd4dc,	// (0x0008a3a2) mup2_visualizer_pane_g3

0x0002,

0xf0ca,	// (0x0008bf90) mup2_visualizer_pane_g_ParamLimits

0xf0ca,	// (0x0008bf90) mup2_visualizer_pane_g

0x0cc0,	// (0x0007db86) aid_size_cell_fmradio

0x6b9b,	// (0x00083a61) aid_height_parent_landcape

0xd884,	// (0x0008a74a) wml_content_pane_cp

0xd88c,	// (0x0008a752) wml_tabs_pane

0xd895,	// (0x0008a75b) popup_wml_miniature_window

0xd89d,	// (0x0008a763) scroll_pane_cp021

0xd8b1,	// (0x0008a777) wml_content_pane_comp8

0xd1ea,	// (0x0008a0b0) bg_popup_sub_pane_cp05

0x6f50,	// (0x00083e16) popup_wml_miniature_window_g1

0x6f58,	// (0x00083e1e) wml_miniature_view_pane

0x6f60,	// (0x00083e26) aid_size_wml_view

0x6f68,	// (0x00083e2e) wml_miniature_view_pane_g1

0x6f71,	// (0x00083e37) wml_miniature_view_pane_g2

0x6f7a,	// (0x00083e40) wml_miniature_view_pane_g3

0x6f82,	// (0x00083e48) wml_miniature_view_pane_g4

0x6f8a,	// (0x00083e50) wml_miniature_view_pane_g5

0x6f92,	// (0x00083e58) wml_miniature_view_pane_g6

0x6f9a,	// (0x00083e60) wml_miniature_view_pane_g7

0x6fa2,	// (0x00083e68) wml_miniature_view_pane_g8

0x0007,

0xf601,	// (0x0008c4c7) wml_miniature_view_pane_g

0x6faa,	// (0x00083e70) background_graphic_ParamLimits

0x6faa,	// (0x00083e70) background_graphic

0x6fb6,	// (0x00083e7c) wml_tabs_2_pane

0x6fbf,	// (0x00083e85) wml_tabs_3_pane_ParamLimits

0x6fbf,	// (0x00083e85) wml_tabs_3_pane

0x6fd1,	// (0x00083e97) wml_tabs_4_pane_ParamLimits

0x6fd1,	// (0x00083e97) wml_tabs_4_pane

0x6fe7,	// (0x00083ead) wml_tabs_5_pane_ParamLimits

0x6fe7,	// (0x00083ead) wml_tabs_5_pane

0x7001,	// (0x00083ec7) wml_tabs_pane_g2_ParamLimits

0x7001,	// (0x00083ec7) wml_tabs_pane_g2

0x7016,	// (0x00083edc) wml_tabs_pane_g3_ParamLimits

0x7016,	// (0x00083edc) wml_tabs_pane_g3

0x702b,	// (0x00083ef1) wml_tabs_2_active_pane_ParamLimits

0x702b,	// (0x00083ef1) wml_tabs_2_active_pane

0x702b,	// (0x00083ef1) wml_tabs_2_passive_pane_ParamLimits

0x702b,	// (0x00083ef1) wml_tabs_2_passive_pane

0x7039,	// (0x00083eff) wml_tabs_3_active_pane_cp_ParamLimits

0x7039,	// (0x00083eff) wml_tabs_3_active_pane_cp

0x704a,	// (0x00083f10) wml_tabs_3_passive_pane_ParamLimits

0x704a,	// (0x00083f10) wml_tabs_3_passive_pane

0x705b,	// (0x00083f21) wml_tabs_3_passive_pane_cp_ParamLimits

0x705b,	// (0x00083f21) wml_tabs_3_passive_pane_cp

0x706c,	// (0x00083f32) tabs_4_active_pane

0x7074,	// (0x00083f3a) tabs_4_passive_pane

0x707c,	// (0x00083f42) tabs_4_passive_pane_cp

0x7084,	// (0x00083f4a) tabs_4_passive_pane_cp2

0x6981,	// (0x00083847) aid_height_text

0x1ebf,	// (0x0007ed85) mup_volume_cont_pane_ParamLimits

0x1ebf,	// (0x0007ed85) mup_volume_cont_pane

0xcdcd,	// (0x00089c93) aid_size_cell_pinb

0xcdcd,	// (0x00089c93) aid_size_list_pinb

0x1ebf,	// (0x0007ed85) mup2_volume_cont_pane_ParamLimits

0x1ebf,	// (0x0007ed85) mup2_volume_cont_pane

0x708c,	// (0x00083f52) mup2_volume_cont_pane_g1_ParamLimits

0x708c,	// (0x00083f52) mup2_volume_cont_pane_g1

0x3d75,	// (0x00080c3b) aid_size_cell_touch_ParamLimits

0x3d75,	// (0x00080c3b) aid_size_cell_touch

0x4035,	// (0x00080efb) touch_pane_ParamLimits

0x4035,	// (0x00080efb) touch_pane

0x402b,	// (0x00080ef1) main_rss2_pane

0x70c1,	// (0x00083f87) listscroll_rss2_pane

0x70ca,	// (0x00083f90) rss2_navigation_pane

0x70d2,	// (0x00083f98) list_rss2_pane

0x06d7,	// (0x0007d59d) scroll_pane_cp22

0x70da,	// (0x00083fa0) rss2_navigation_pane_g1

0x70e3,	// (0x00083fa9) rss2_navigation_pane_g2

0x70eb,	// (0x00083fb1) rss2_navigation_pane_g3

0x0002,

0xf612,	// (0x0008c4d8) rss2_navigation_pane_g

0x70f3,	// (0x00083fb9) rss2_navigation_pane_t1

0x7101,	// (0x00083fc7) rss2_list_single_pane_ParamLimits

0x7101,	// (0x00083fc7) rss2_list_single_pane

0x7135,	// (0x00083ffb) rss2_list_single_pane_t2

0x7143,	// (0x00084009) rss2_list_single_pane_t3_ParamLimits

0x7143,	// (0x00084009) rss2_list_single_pane_t3

0x7160,	// (0x00084026) rss2_list_single_pane_t4

0x5c2c,	// (0x00082af2) smil_status_pane_g1

0x6bb2,	// (0x00083a78) main_image2_pane_ParamLimits

0x6bb2,	// (0x00083a78) main_image2_pane

0x05f2,	// (0x0007d4b8) main_camera2_pane_g9_ParamLimits

0x05f2,	// (0x0007d4b8) main_camera2_pane_g9

0x6ef8,	// (0x00083dbe) main_camera2_pane_t5_ParamLimits

0x6ef8,	// (0x00083dbe) main_camera2_pane_t5

0x6f0c,	// (0x00083dd2) main_camera2_pane_t6_ParamLimits

0x6f0c,	// (0x00083dd2) main_camera2_pane_t6

0x716e,	// (0x00084034) main_image2_pane_g1_ParamLimits

0x716e,	// (0x00084034) main_image2_pane_g1

0x66b3,	// (0x00083579) smil2_video_pane_ParamLimits

0x66b3,	// (0x00083579) smil2_video_pane

0x3da9,	// (0x00080c6f) aid_zoom_text_primary_cp

0x3fc6,	// (0x00080e8c) popup_preview_fixed_window

0xd7ed,	// (0x0008a6b3) im_reading_pane_g1

0x6eea,	// (0x00083db0) cams2_bc_adjust_pane_cp_ParamLimits

0x6eea,	// (0x00083db0) cams2_bc_adjust_pane_cp

0x4011,	// (0x00080ed7) cams2_bc_adjust_pane_ParamLimits

0x4011,	// (0x00080ed7) cams2_bc_adjust_pane

0xdadf,	// (0x0008a9a5) cams2_bc_adjust_pane_g1

0x402b,	// (0x00080ef1) cams2_slider_pane

0xdadf,	// (0x0008a9a5) cams2_slider_pane_g1

0xdadf,	// (0x0008a9a5) cams2_slider_pane_g2

0x0006,

0xf619,	// (0x0008c4df) cams2_slider_pane_g

0x4106,	// (0x00080fcc) calc_display_pane_ParamLimits

0x4124,	// (0x00080fea) calc_paper_pane_ParamLimits

0x4140,	// (0x00081006) grid_calc_pane_ParamLimits

0x5e4c,	// (0x00082d12) popup_clock_digital_window_t1_ParamLimits

0x0c5d,	// (0x0007db23) main_image_pane_t1

0x40ec,	// (0x00080fb2) aid_size_cell_calc_ParamLimits

0x40ec,	// (0x00080fb2) aid_size_cell_calc

0x6be3,	// (0x00083aa9) popup_blid_sat_info2_window_ParamLimits

0x6be3,	// (0x00083aa9) popup_blid_sat_info2_window

0x717a,	// (0x00084040) aid_size_cell_blid

0x1ebf,	// (0x0007ed85) bg_popup_window_pane_cp07

0x7197,	// (0x0008405d) grid_popup_blid_pane

0x71a1,	// (0x00084067) heading_pane_cp05_ParamLimits

0x71a1,	// (0x00084067) heading_pane_cp05

0x726b,	// (0x00084131) cell_popup_blid_pane_ParamLimits

0x726b,	// (0x00084131) cell_popup_blid_pane

0x728f,	// (0x00084155) cell_popup_blid_pane_g1

0x7297,	// (0x0008415d) cell_popup_blid_pane_t1

0x1ebf,	// (0x0007ed85) mup2_indicator_pane_ParamLimits

0x1ebf,	// (0x0007ed85) mup2_indicator_pane

0xcdcd,	// (0x00089c93) mup2_visualizer_osc_pane

0x1ecd,	// (0x0007ed93) mup2_visualizer_spec_pane_ParamLimits

0x1ecd,	// (0x0007ed93) mup2_visualizer_spec_pane

0xcdcd,	// (0x00089c93) mup2_spec_half_pane

0xcdcd,	// (0x00089c93) mup2_spec_half_pane_cp

0x72a5,	// (0x0008416b) mup2_spec_bar_pane_ParamLimits

0x72a5,	// (0x0008416b) mup2_spec_bar_pane

0xd728,	// (0x0008a5ee) mup2_spec_bar_pane_g1

0x72c4,	// (0x0008418a) mup2_spec_bar_pane_g2

0x0001,

0xf63f,	// (0x0008c505) mup2_spec_bar_pane_g

0xcdcd,	// (0x00089c93) mup2_osc_middle_pane

0xd728,	// (0x0008a5ee) mup2_visualizer_osc_pane_g1

0xcdf7,	// (0x00089cbd) popup_number_entry_window_t1_ParamLimits

0xce0a,	// (0x00089cd0) popup_number_entry_window_t2_ParamLimits

0xce1c,	// (0x00089ce2) popup_number_entry_window_t3_ParamLimits

0x408c,	// (0x00080f52) popup_number_entry_window_t5_ParamLimits

0x408c,	// (0x00080f52) popup_number_entry_window_t5

0xf06b,	// (0x0008bf31) popup_number_entry_window_t_ParamLimits

0xce2e,	// (0x00089cf4) text_title_cp2_ParamLimits

0x63b4,	// (0x0008327a) aid_hotspot_pointer_text2_pane

0x6442,	// (0x00083308) main_viewer_pane_g9_ParamLimits

0x6442,	// (0x00083308) main_viewer_pane_g9

0xda26,	// (0x0008a8ec) cale_month_pane_t1_ParamLimits

0xda63,	// (0x0008a929) bg_cale_pane_ParamLimits

0xda7b,	// (0x0008a941) list_cale_pane_ParamLimits

0xda8c,	// (0x0008a952) listscroll_cale_day_pane_t1

0xda9e,	// (0x0008a964) scroll_pane_cp09_ParamLimits

0x60fd,	// (0x00082fc3) main_mup_eq_pane_t1_ParamLimits

0x60fd,	// (0x00082fc3) main_mup_eq_pane_t1

0x6117,	// (0x00082fdd) main_mup_eq_pane_t2_ParamLimits

0x6117,	// (0x00082fdd) main_mup_eq_pane_t2

0x612f,	// (0x00082ff5) main_mup_eq_pane_t3_ParamLimits

0x612f,	// (0x00082ff5) main_mup_eq_pane_t3

0x6147,	// (0x0008300d) main_mup_eq_pane_t4_ParamLimits

0x6147,	// (0x0008300d) main_mup_eq_pane_t4

0x615f,	// (0x00083025) main_mup_eq_pane_t5_ParamLimits

0x615f,	// (0x00083025) main_mup_eq_pane_t5

0x6177,	// (0x0008303d) main_mup_eq_pane_t6_ParamLimits

0x6177,	// (0x0008303d) main_mup_eq_pane_t6

0x618b,	// (0x00083051) main_mup_eq_pane_t7_ParamLimits

0x618b,	// (0x00083051) main_mup_eq_pane_t7

0x619f,	// (0x00083065) main_mup_eq_pane_t8_ParamLimits

0x619f,	// (0x00083065) main_mup_eq_pane_t8

0x61b5,	// (0x0008307b) main_mup_eq_pane_t9_ParamLimits

0x61b5,	// (0x0008307b) main_mup_eq_pane_t9

0x61cd,	// (0x00083093) main_mup_eq_pane_t10_ParamLimits

0x61cd,	// (0x00083093) main_mup_eq_pane_t10

0x0009,

0xf3cf,	// (0x0008c295) main_mup_eq_pane_t_ParamLimits

0xf3cf,	// (0x0008c295) main_mup_eq_pane_t

0x628a,	// (0x00083150) mup_equalizer_pane_cp5_ParamLimits

0x62a0,	// (0x00083166) mup_equalizer_pane_cp6_ParamLimits

0x62b8,	// (0x0008317e) mup_equalizer_pane_cp7_ParamLimits

0x402b,	// (0x00080ef1) main_gallery_pane

0x1e0b,	// (0x0007ecd1) smil2_volume_pane

0x1e26,	// (0x0007ecec) smil_status_volume_pane_g1_ParamLimits

0x1e13,	// (0x0007ecd9) smil_status_volume_pane_g2_ParamLimits

0x6d9d,	// (0x00083c63) smil_status_volume_pane_g3_ParamLimits

0xf598,	// (0x0008c45e) smil_status_volume_pane_g_ParamLimits

0x1ebf,	// (0x0007ed85) bg_popup_window_pane_cp07_ParamLimits

0x7182,	// (0x00084048) blid_firmament_pane

0xd4c0,	// (0x0008a386) aid_size_cell_gallery_ParamLimits

0xd4c0,	// (0x0008a386) aid_size_cell_gallery

0xd4c0,	// (0x0008a386) grid_gallery_pane_ParamLimits

0xd4c0,	// (0x0008a386) grid_gallery_pane

0x09d4,	// (0x0007d89a) cell_gallery_pane_ParamLimits

0x09d4,	// (0x0007d89a) cell_gallery_pane

0xd467,	// (0x0008a32d) bg_cell_gallery_focus_pane_ParamLimits

0xd467,	// (0x0008a32d) bg_cell_gallery_focus_pane

0xd4ce,	// (0x0008a394) cell_gallery_pane_g1_ParamLimits

0xd4ce,	// (0x0008a394) cell_gallery_pane_g1

0xd4ce,	// (0x0008a394) cell_gallery_pane_g2_ParamLimits

0xd4ce,	// (0x0008a394) cell_gallery_pane_g2

0xd4ce,	// (0x0008a394) cell_gallery_pane_g3_ParamLimits

0xd4ce,	// (0x0008a394) cell_gallery_pane_g3

0xd4dc,	// (0x0008a3a2) cell_gallery_pane_g4_ParamLimits

0xd4dc,	// (0x0008a3a2) cell_gallery_pane_g4

0x0003,

0xf644,	// (0x0008c50a) cell_gallery_pane_g_ParamLimits

0xf644,	// (0x0008c50a) cell_gallery_pane_g

0x72ce,	// (0x00084194) bg_cell_gallery_focus_pane_g1

0x72d6,	// (0x0008419c) bg_cell_gallery_focus_pane_g2

0x72de,	// (0x000841a4) bg_cell_gallery_focus_pane_g3

0x72e6,	// (0x000841ac) bg_cell_gallery_focus_pane_g4

0x72ee,	// (0x000841b4) bg_cell_gallery_focus_pane_g5

0x72f6,	// (0x000841bc) bg_cell_gallery_focus_pane_g6

0x72fe,	// (0x000841c4) bg_cell_gallery_focus_pane_g7

0x7306,	// (0x000841cc) bg_cell_gallery_focus_pane_g8

0x0007,

0xf64d,	// (0x0008c513) bg_cell_gallery_focus_pane_g

0x730e,	// (0x000841d4) aid_firma_cardinal

0x7322,	// (0x000841e8) blid_firmament_pane_t1

0x7339,	// (0x000841ff) blid_firmament_pane_t2

0x7350,	// (0x00084216) blid_firmament_pane_t3

0x7367,	// (0x0008422d) blid_firmament_pane_t4

0x0003,

0xf65e,	// (0x0008c524) blid_firmament_pane_t

0x737e,	// (0x00084244) blid_sat_info_pane

0xd728,	// (0x0008a5ee) blid_sat_info_pane_g1

0xd728,	// (0x0008a5ee) blid_sat_info_pane_g2

0x0001,

0xf3c3,	// (0x0008c289) blid_sat_info_pane_g

0x738e,	// (0x00084254) blid_sat_info_pane_t1

0x739c,	// (0x00084262) smil2_volume_content_pane

0x73a5,	// (0x0008426b) smil2_volume_pane_g1

0x73ad,	// (0x00084273) smil2_volume_content_pane_g1

0x73b6,	// (0x0008427c) smil2_volume_content_pane_g2

0x73bf,	// (0x00084285) smil2_volume_content_pane_g3

0x73c8,	// (0x0008428e) smil2_volume_content_pane_g4

0x73d1,	// (0x00084297) smil2_volume_content_pane_g5

0x73da,	// (0x000842a0) smil2_volume_content_pane_g6

0x73e3,	// (0x000842a9) smil2_volume_content_pane_g7

0x73ec,	// (0x000842b2) smil2_volume_content_pane_g8

0x73f5,	// (0x000842bb) smil2_volume_content_pane_g9

0x73fe,	// (0x000842c4) smil2_volume_content_pane_g10

0x0009,

0xf667,	// (0x0008c52d) smil2_volume_content_pane_g

0x474c,	// (0x00081612) cale_week_day_heading_pane_t1_ParamLimits

0x4767,	// (0x0008162d) cale_week_day_heading_pane_t2_ParamLimits

0x4782,	// (0x00081648) cale_week_day_heading_pane_t3_ParamLimits

0x479d,	// (0x00081663) cale_week_day_heading_pane_t4_ParamLimits

0x47b8,	// (0x0008167e) cale_week_day_heading_pane_t5_ParamLimits

0x47d3,	// (0x00081699) cale_week_day_heading_pane_t6_ParamLimits

0x47ee,	// (0x000816b4) cale_week_day_heading_pane_t7_ParamLimits

0xf172,	// (0x0008c038) cale_week_day_heading_pane_t_ParamLimits

0xd6a0,	// (0x0008a566) bg_cale_side_pane_ParamLimits

0x4809,	// (0x000816cf) cale_week_time_pane_t1_ParamLimits

0x4823,	// (0x000816e9) cale_week_time_pane_t2_ParamLimits

0x483d,	// (0x00081703) cale_week_time_pane_t3_ParamLimits

0x4857,	// (0x0008171d) cale_week_time_pane_t4_ParamLimits

0x4871,	// (0x00081737) cale_week_time_pane_t5_ParamLimits

0x488b,	// (0x00081751) cale_week_time_pane_t6_ParamLimits

0x48ab,	// (0x00081771) cale_week_time_pane_t7_ParamLimits

0x48cd,	// (0x00081793) cale_week_time_pane_t8_ParamLimits

0xf181,	// (0x0008c047) cale_week_time_pane_t_ParamLimits

0x48f1,	// (0x000817b7) cell_cale_week_pane_g2_ParamLimits

0xd6a0,	// (0x0008a566) bg_cale_side_pane_cp01_ParamLimits

0x5a1b,	// (0x000828e1) cale_month_week_pane_t1_ParamLimits

0x5a34,	// (0x000828fa) cale_month_week_pane_t2_ParamLimits

0x5a4d,	// (0x00082913) cale_month_week_pane_t3_ParamLimits

0x5a66,	// (0x0008292c) cale_month_week_pane_t4_ParamLimits

0x5a81,	// (0x00082947) cale_month_week_pane_t5_ParamLimits

0x5aa2,	// (0x00082968) cale_month_week_pane_t6_ParamLimits

0xf24f,	// (0x0008c115) cale_month_week_pane_t_ParamLimits

0x5be9,	// (0x00082aaf) cell_cale_month_pane_g1_ParamLimits

0x402b,	// (0x00080ef1) main_cale_event_viewer_pane

0xcdcd,	// (0x00089c93) listscroll_cale_event_viewer_pane

0x7407,	// (0x000842cd) list_cale_ev_pane

0x740f,	// (0x000842d5) scroll_pane_cp023

0x741b,	// (0x000842e1) field_cale_ev_pane_ParamLimits

0x741b,	// (0x000842e1) field_cale_ev_pane

0x7439,	// (0x000842ff) field_cale_ev_content_pane_ParamLimits

0x7439,	// (0x000842ff) field_cale_ev_content_pane

0x7445,	// (0x0008430b) field_cale_ev_pane_g1_ParamLimits

0x7445,	// (0x0008430b) field_cale_ev_pane_g1

0x7451,	// (0x00084317) field_cale_ev_pane_g2_ParamLimits

0x7451,	// (0x00084317) field_cale_ev_pane_g2

0x7469,	// (0x0008432f) field_cale_ev_pane_g3_ParamLimits

0x7469,	// (0x0008432f) field_cale_ev_pane_g3

0x0002,

0xf67c,	// (0x0008c542) field_cale_ev_pane_g_ParamLimits

0xf67c,	// (0x0008c542) field_cale_ev_pane_g

0x7481,	// (0x00084347) field_cale_ev_pane_t1_ParamLimits

0x7481,	// (0x00084347) field_cale_ev_pane_t1

0x7498,	// (0x0008435e) field_cale_ev_content_pane_t1_ParamLimits

0x7498,	// (0x0008435e) field_cale_ev_content_pane_t1

0x0a7f,	// (0x0007d945) bg_button_pane_cp01

0x44d7,	// (0x0008139d) listscroll_cale_week_pane_ParamLimits

0xd64b,	// (0x0008a511) popup_toolbar_window_cp01

0xd671,	// (0x0008a537) listscroll_cale_week_pane_t1_ParamLimits

0x44d7,	// (0x0008139d) listscroll_cale_day_pane_ParamLimits

0xd64b,	// (0x0008a511) popup_toolbar_window_cp02

0xda8c,	// (0x0008a952) listscroll_cale_day_pane_t1_ParamLimits

0x44d7,	// (0x0008139d) main_cale_month_pane_ParamLimits

0x6ce6,	// (0x00083bac) popup_toolbar_window_cp03_ParamLimits

0x6ce6,	// (0x00083bac) popup_toolbar_window_cp03

0x65c9,	// (0x0008348f) main_image_pane_g2_ParamLimits

0x65c9,	// (0x0008348f) main_image_pane_g2

0x65d5,	// (0x0008349b) main_image_pane_g3_ParamLimits

0x65d5,	// (0x0008349b) main_image_pane_g3

0x0002,

0xf461,	// (0x0008c327) main_image_pane_g_ParamLimits

0xf461,	// (0x0008c327) main_image_pane_g

0x0c5d,	// (0x0007db23) main_image_pane_t1_ParamLimits

0x65e1,	// (0x000834a7) main_image_pane_t2_ParamLimits

0x65e1,	// (0x000834a7) main_image_pane_t2

0x65f3,	// (0x000834b9) main_image_pane_t3_ParamLimits

0x65f3,	// (0x000834b9) main_image_pane_t3

0x6605,	// (0x000834cb) main_image_pane_t4_ParamLimits

0x6605,	// (0x000834cb) main_image_pane_t4

0x0003,

0xf468,	// (0x0008c32e) main_image_pane_t_ParamLimits

0xf468,	// (0x0008c32e) main_image_pane_t

0x6617,	// (0x000834dd) popup_image_details_window_cp01

0x6621,	// (0x000834e7) popup_toobar_trans_pane_cp01_ParamLimits

0x6621,	// (0x000834e7) popup_toobar_trans_pane_cp01

0x6c36,	// (0x00083afc) popup_image_details_window_ParamLimits

0x6c36,	// (0x00083afc) popup_image_details_window

0x6c44,	// (0x00083b0a) popup_image_focus_window

0x4011,	// (0x00080ed7) camera2_autofocus_pane_ParamLimits

0x4011,	// (0x00080ed7) camera2_autofocus_pane

0xcdcd,	// (0x00089c93) bg_popup_sub_pane_cp06

0x74b6,	// (0x0008437c) popup_image_focus_window_g1

0x74be,	// (0x00084384) popup_image_focus_window_g2

0x74c6,	// (0x0008438c) popup_image_focus_window_g3

0x74ce,	// (0x00084394) popup_image_focus_window_g4

0x0003,

0xf683,	// (0x0008c549) popup_image_focus_window_g

0x74d6,	// (0x0008439c) popup_image_focus_window_t1

0x74e4,	// (0x000843aa) popup_image_focus_window_t2

0x74f4,	// (0x000843ba) popup_image_focus_window_t3

0x0002,

0xf68c,	// (0x0008c552) popup_image_focus_window_t

0xd4ce,	// (0x0008a394) camera2_autofocus_pane_g1

0xd467,	// (0x0008a32d) bg_tb_trans_pane_cp01

0x7502,	// (0x000843c8) popup_image_details_window_g1

0x7515,	// (0x000843db) popup_image_details_window_g2

0x0002,

0xf69e,	// (0x0008c564) popup_image_details_window_g

0x753e,	// (0x00084404) popup_image_details_window_t1

0x7550,	// (0x00084416) popup_image_details_window_t2

0x7569,	// (0x0008442f) popup_image_details_window_t3

0x757d,	// (0x00084443) popup_image_details_window_t4

0x7598,	// (0x0008445e) popup_image_details_window_t5

0x0004,

0xf6a5,	// (0x0008c56b) popup_image_details_window_t

0xd52c,	// (0x0008a3f2) bg_calc_paper_pane_ParamLimits

0x402b,	// (0x00080ef1) grid_highlight_pane_cp013

0x425b,	// (0x00081121) list_calc_pane_ParamLimits

0x426d,	// (0x00081133) scroll_pane_cp024

0xd540,	// (0x0008a406) bg_calc_display_pane_ParamLimits

0x4275,	// (0x0008113b) calc_display_pane_t1_ParamLimits

0x428a,	// (0x00081150) calc_display_pane_t2_ParamLimits

0x429f,	// (0x00081165) calc_display_pane_t3_ParamLimits

0xf0f2,	// (0x0008bfb8) calc_display_pane_t_ParamLimits

0x4379,	// (0x0008123f) cell_calc_pane_g2

0x0001,

0xf10f,	// (0x0008bfd5) cell_calc_pane_g

0x4382,	// (0x00081248) cell_calc_pane_t1

0xd595,	// (0x0008a45b) grid_highlight_pane_cp02_ParamLimits

0xd5ab,	// (0x0008a471) toolbar_button_pane_cp01_ParamLimits

0xd5ab,	// (0x0008a471) toolbar_button_pane_cp01

0x0ca2,	// (0x0007db68) temp_image_control_pane_ParamLimits

0x0ca2,	// (0x0007db68) temp_image_control_pane

0x6bb2,	// (0x00083a78) main_mp3_pane

0x75b2,	// (0x00084478) temp_image_control_pane_g1_ParamLimits

0x75b2,	// (0x00084478) temp_image_control_pane_g1

0x75c0,	// (0x00084486) temp_image_control_pane_g2_ParamLimits

0x75c0,	// (0x00084486) temp_image_control_pane_g2

0x75d2,	// (0x00084498) temp_image_control_pane_g3_ParamLimits

0x75d2,	// (0x00084498) temp_image_control_pane_g3

0x75e2,	// (0x000844a8) temp_image_control_pane_g4_ParamLimits

0x75e2,	// (0x000844a8) temp_image_control_pane_g4

0x0003,

0xf6b0,	// (0x0008c576) temp_image_control_pane_g_ParamLimits

0xf6b0,	// (0x0008c576) temp_image_control_pane_g

0x75b2,	// (0x00084478) main_mp3_pane_g1

0x75f3,	// (0x000844b9) main_mp3_pane_g2

0x0007,

0xf6b9,	// (0x0008c57f) main_mp3_pane_g

0x763c,	// (0x00084502) main_mp3_pane_t1

0xd4dc,	// (0x0008a3a2) main_camera_pane_g8_ParamLimits

0xd4dc,	// (0x0008a3a2) main_camera_pane_g8

0x4a98,	// (0x0008195e) main_video_pane_g7_ParamLimits

0x4a98,	// (0x0008195e) main_video_pane_g7

0x6ef8,	// (0x00083dbe) main_camera2_pane_t7_ParamLimits

0x6ef8,	// (0x00083dbe) main_camera2_pane_t7

0xd844,	// (0x0008a70a) scroll_pane_cp025_ParamLimits

0xd844,	// (0x0008a70a) scroll_pane_cp025

0xd858,	// (0x0008a71e) scroll_pane_cp026_ParamLimits

0xd858,	// (0x0008a71e) scroll_pane_cp026

0xd867,	// (0x0008a72d) wml_content_pane_ParamLimits

0x402b,	// (0x00080ef1) main_touch_calib_pane

0x76ee,	// (0x000845b4) main_touch_calib_pane_g1

0x76fa,	// (0x000845c0) main_touch_calib_pane_g2

0x7706,	// (0x000845cc) main_touch_calib_pane_g3

0x7712,	// (0x000845d8) main_touch_calib_pane_g4

0x0003,

0xf6d7,	// (0x0008c59d) main_touch_calib_pane_g

0x771e,	// (0x000845e4) main_touch_calib_pane_t1

0x7737,	// (0x000845fd) main_touch_calib_pane_t2

0x0004,

0xf6e0,	// (0x0008c5a6) main_touch_calib_pane_t

0x07a6,	// (0x0007d66c) mup_progress_pane_cp02

0x07db,	// (0x0007d6a1) navi_pane_g1

0x0896,	// (0x0007d75c) navi_pane_mp_t3

0x6bb2,	// (0x00083a78) main_mp3_pane_ParamLimits

0x6d23,	// (0x00083be9) navi_pane_ParamLimits

0x75b2,	// (0x00084478) main_mp3_pane_g1_ParamLimits

0x75f3,	// (0x000844b9) main_mp3_pane_g2_ParamLimits

0x75ff,	// (0x000844c5) main_mp3_pane_g3_ParamLimits

0x75ff,	// (0x000844c5) main_mp3_pane_g3

0x760b,	// (0x000844d1) main_mp3_pane_g4_ParamLimits

0x760b,	// (0x000844d1) main_mp3_pane_g4

0xd4ce,	// (0x0008a394) main_mp3_pane_g5_ParamLimits

0xd4ce,	// (0x0008a394) main_mp3_pane_g5

0x7617,	// (0x000844dd) main_mp3_pane_g6_ParamLimits

0x7617,	// (0x000844dd) main_mp3_pane_g6

0x7624,	// (0x000844ea) main_mp3_pane_g7_ParamLimits

0x7624,	// (0x000844ea) main_mp3_pane_g7

0x7630,	// (0x000844f6) main_mp3_pane_g8_ParamLimits

0x7630,	// (0x000844f6) main_mp3_pane_g8

0xf6b9,	// (0x0008c57f) main_mp3_pane_g_ParamLimits

0x764a,	// (0x00084510) main_mp3_pane_t2

0x765a,	// (0x00084520) main_mp3_pane_t3

0x766a,	// (0x00084530) main_mp3_pane_t4

0x7678,	// (0x0008453e) main_mp3_pane_t5

0x0005,

0xf6ca,	// (0x0008c590) main_mp3_pane_t

0x7696,	// (0x0008455c) mup_progress_pane_cp01

0x3da9,	// (0x00080c6f) aid_zoom_text_secondary2

0x7407,	// (0x000842cd) list_cale_ev2_pane

0x740f,	// (0x000842d5) scroll_pane_cp023_ParamLimits

0x7792,	// (0x00084658) field_cale_ev2_pane_ParamLimits

0x7792,	// (0x00084658) field_cale_ev2_pane

0x1ef9,	// (0x0007edbf) field_cale_ev2_pane_g1_ParamLimits

0x1ef9,	// (0x0007edbf) field_cale_ev2_pane_g1

0x1f05,	// (0x0007edcb) field_cale_ev2_pane_g2_ParamLimits

0x1f05,	// (0x0007edcb) field_cale_ev2_pane_g2

0x1f1d,	// (0x0007ede3) field_cale_ev2_pane_g3_ParamLimits

0x1f1d,	// (0x0007ede3) field_cale_ev2_pane_g3

0x0003,

0xf6eb,	// (0x0008c5b1) field_cale_ev2_pane_g_ParamLimits

0xf6eb,	// (0x0008c5b1) field_cale_ev2_pane_g

0x1f41,	// (0x0007ee07) field_cale_ev2_pane_t1_ParamLimits

0x1f41,	// (0x0007ee07) field_cale_ev2_pane_t1

0x1f58,	// (0x0007ee1e) field_cale_ev2_pane_t2_ParamLimits

0x1f58,	// (0x0007ee1e) field_cale_ev2_pane_t2

0x0001,

0xf6f4,	// (0x0008c5ba) field_cale_ev2_pane_t_ParamLimits

0xf6f4,	// (0x0008c5ba) field_cale_ev2_pane_t

0x64aa,	// (0x00083370) main_postcard_pane_g5_ParamLimits

0x64aa,	// (0x00083370) main_postcard_pane_g5

0x64b8,	// (0x0008337e) main_postcard_pane_g6_ParamLimits

0x64b8,	// (0x0008337e) main_postcard_pane_g6

0xd4c0,	// (0x0008a386) camera2_autofocus_pane_cp_ParamLimits

0xd4c0,	// (0x0008a386) camera2_autofocus_pane_cp

0x6bb2,	// (0x00083a78) main_mup3_pane

0x77fb,	// (0x000846c1) main_mup3_pane_g1_ParamLimits

0x77fb,	// (0x000846c1) main_mup3_pane_g1

0x781c,	// (0x000846e2) main_mup3_pane_g2_ParamLimits

0x781c,	// (0x000846e2) main_mup3_pane_g2

0x7896,	// (0x0008475c) main_mup3_pane_g3_ParamLimits

0x7896,	// (0x0008475c) main_mup3_pane_g3

0x78d9,	// (0x0008479f) main_mup3_pane_g4_ParamLimits

0x78d9,	// (0x0008479f) main_mup3_pane_g4

0x791c,	// (0x000847e2) main_mup3_pane_g5_ParamLimits

0x791c,	// (0x000847e2) main_mup3_pane_g5

0x795f,	// (0x00084825) main_mup3_pane_g6_ParamLimits

0x795f,	// (0x00084825) main_mup3_pane_g6

0xd4dc,	// (0x0008a3a2) main_mup3_pane_g7_ParamLimits

0xd4dc,	// (0x0008a3a2) main_mup3_pane_g7

0x0007,

0xf704,	// (0x0008c5ca) main_mup3_pane_g_ParamLimits

0xf704,	// (0x0008c5ca) main_mup3_pane_g

0x79d5,	// (0x0008489b) main_mup3_pane_t1_ParamLimits

0x79d5,	// (0x0008489b) main_mup3_pane_t1

0x7a44,	// (0x0008490a) main_mup3_pane_t2_ParamLimits

0x7a44,	// (0x0008490a) main_mup3_pane_t2

0x7b0d,	// (0x000849d3) main_mup3_pane_t4_ParamLimits

0x7b0d,	// (0x000849d3) main_mup3_pane_t4

0x7b5b,	// (0x00084a21) main_mup3_pane_t5_ParamLimits

0x7b5b,	// (0x00084a21) main_mup3_pane_t5

0x7c0b,	// (0x00084ad1) main_mup3_pane_t6_ParamLimits

0x7c0b,	// (0x00084ad1) main_mup3_pane_t6

0x0005,

0xf715,	// (0x0008c5db) main_mup3_pane_t_ParamLimits

0xf715,	// (0x0008c5db) main_mup3_pane_t

0x7cb7,	// (0x00084b7d) mup3_progress_pane_ParamLimits

0x7cb7,	// (0x00084b7d) mup3_progress_pane

0x7d2b,	// (0x00084bf1) popup_mup3_control_window_ParamLimits

0x7d2b,	// (0x00084bf1) popup_mup3_control_window

0x7d37,	// (0x00084bfd) popup_mup3_text_window

0x7d4c,	// (0x00084c12) mup3_progress_pane_t1

0x7d6b,	// (0x00084c31) mup3_progress_pane_t2

0x7d8a,	// (0x00084c50) mup3_progress_pane_t3

0x0002,

0xf722,	// (0x0008c5e8) mup3_progress_pane_t

0x7da7,	// (0x00084c6d) mup_progress_pane_cp03

0xcdcd,	// (0x00089c93) bg_tb_trans_pane_cp04

0x7db7,	// (0x00084c7d) mup3_volume_pane

0x7dbf,	// (0x00084c85) popup_mup3_control_window_g1

0x7dc8,	// (0x00084c8e) mup3_volume_pane_g1

0x7dd1,	// (0x00084c97) mup3_volume_pane_g2

0x7dda,	// (0x00084ca0) mup3_volume_pane_g3

0x0002,

0xf729,	// (0x0008c5ef) mup3_volume_pane_g

0xcdcd,	// (0x00089c93) bg_tb_trans_pane_cp03

0x7de3,	// (0x00084ca9) popup_mup3_text_window_g1

0x7deb,	// (0x00084cb1) popup_mup3_text_window_t1

0xd588,	// (0x0008a44e) list_calc_item_pane_g1_ParamLimits

0x70b8,	// (0x00083f7e) mup_volume_pane_cp_g1

0x7750,	// (0x00084616) main_touch_calib_pane_t3

0x7766,	// (0x0008462c) main_touch_calib_pane_t4

0x777c,	// (0x00084642) main_touch_calib_pane_t5

0x3d61,	// (0x00080c27) aid_cell_size_toolbar2

0x3d69,	// (0x00080c2f) aid_popup3_width_pane

0x3c71,	// (0x00080b37) aid_zoom_text_msg_primary

0x499a,	// (0x00081860) vorec_t7

0xd54c,	// (0x0008a412) bg_calc_paper_pane_g1_ParamLimits

0xd558,	// (0x0008a41e) bg_calc_paper_pane_g2_ParamLimits

0xd564,	// (0x0008a42a) bg_calc_paper_pane_g3_ParamLimits

0xd570,	// (0x0008a436) bg_calc_paper_pane_g4_ParamLimits

0xd57c,	// (0x0008a442) bg_calc_paper_pane_g5_ParamLimits

0x42de,	// (0x000811a4) bg_calc_paper_pane_g6_ParamLimits

0x42ef,	// (0x000811b5) bg_calc_paper_pane_g7_ParamLimits

0x4300,	// (0x000811c6) bg_calc_paper_pane_g8_ParamLimits

0xf0f9,	// (0x0008bfbf) bg_calc_paper_pane_g_ParamLimits

0x4311,	// (0x000811d7) calc_bg_paper_pane_g9_ParamLimits

0xd4c0,	// (0x0008a386) image_qvga_pane_ParamLimits

0xd4c0,	// (0x0008a386) image_qvga_pane

0xd445,	// (0x0008a30b) bg_popup_sub_pane_cp04_ParamLimits

0x0bd9,	// (0x0007da9f) popup_mup_playback_window_g1_ParamLimits

0x0be5,	// (0x0007daab) popup_mup_playback_window_t1_ParamLimits

0x0bfa,	// (0x0007dac0) popup_mup_playback_window_t2_ParamLimits

0xf45c,	// (0x0008c322) popup_mup_playback_window_t_ParamLimits

0xd4ce,	// (0x0008a394) main_mup2_pane_g3_ParamLimits

0xd4ce,	// (0x0008a394) main_mup2_pane_g3

0x4c7f,	// (0x00081b45) popup_toolbar_window_cp04

0x0fef,	// (0x0007deb5) popup_call2_audio_second_window_g3_ParamLimits

0x0fef,	// (0x0007deb5) popup_call2_audio_second_window_g3

0x1407,	// (0x0007e2cd) popup_call2_audio_first_window_g4_ParamLimits

0x1407,	// (0x0007e2cd) popup_call2_audio_first_window_g4

0x1a2e,	// (0x0007e8f4) popup_call2_audio_in_window_g4_ParamLimits

0x1a2e,	// (0x0007e8f4) popup_call2_audio_in_window_g4

0x65bc,	// (0x00083482) aid_area_sk_bg_cut_ParamLimits

0x65bc,	// (0x00083482) aid_area_sk_bg_cut

0x0c0f,	// (0x0007dad5) aid_area_sk_bg_cut_2_ParamLimits

0x0c0f,	// (0x0007dad5) aid_area_sk_bg_cut_2

0xcdcd,	// (0x00089c93) aid_placing_details_win

0xcdcd,	// (0x00089c93) aid_placing_details_win_2

0xd4ce,	// (0x0008a394) camera2_autofocus_pane_g1_ParamLimits

0x3fb7,	// (0x00080e7d) popup_fixed_preview_cale_window_ParamLimits

0x3fb7,	// (0x00080e7d) popup_fixed_preview_cale_window

0x092f,	// (0x0007d7f5) navi_slider_pane_g3

0x0926,	// (0x0007d7ec) navi_slider_pane_g4

0x091d,	// (0x0007d7e3) navi_slider_pane_g5

0x092f,	// (0x0007d7f5) navi_slider_pane_g6

0x60d1,	// (0x00082f97) navi_slider_pane_g7

0x0a44,	// (0x0007d90a) mup_scale_pane_g3

0x0a4d,	// (0x0007d913) mup_scale_pane_g4

0x0a56,	// (0x0007d91c) mup_scale_pane_g5

0x62d0,	// (0x00083196) mup_scale_pane_g6

0x62d9,	// (0x0008319f) mup_scale_pane_g7

0xdadf,	// (0x0008a9a5) cams2_slider_pane_g3

0xdadf,	// (0x0008a9a5) cams2_slider_pane_g4

0xdadf,	// (0x0008a9a5) cams2_slider_pane_g5

0xdadf,	// (0x0008a9a5) cams2_slider_pane_g6

0xdadf,	// (0x0008a9a5) cams2_slider_pane_g7

0xd728,	// (0x0008a5ee) camera2_autofocus_pane_cp_g1

0x1d3e,	// (0x0007ec04) bg_popup_preview_window_pane_cp02_ParamLimits

0x1d3e,	// (0x0007ec04) bg_popup_preview_window_pane_cp02

0x7df9,	// (0x00084cbf) list_fp_cale_pane_ParamLimits

0x7df9,	// (0x00084cbf) list_fp_cale_pane

0x7e05,	// (0x00084ccb) popup_fixed_preview_cale_window_t1_ParamLimits

0x7e05,	// (0x00084ccb) popup_fixed_preview_cale_window_t1

0x7e17,	// (0x00084cdd) popup_fixed_preview_cale_window_t2_ParamLimits

0x7e17,	// (0x00084cdd) popup_fixed_preview_cale_window_t2

0x7e2c,	// (0x00084cf2) popup_fixed_preview_cale_window_t3_ParamLimits

0x7e2c,	// (0x00084cf2) popup_fixed_preview_cale_window_t3

0x0002,

0xf730,	// (0x0008c5f6) popup_fixed_preview_cale_window_t_ParamLimits

0xf730,	// (0x0008c5f6) popup_fixed_preview_cale_window_t

0x7e4d,	// (0x00084d13) list_single_fp_cale_pane_ParamLimits

0x7e4d,	// (0x00084d13) list_single_fp_cale_pane

0x7e60,	// (0x00084d26) list_single_fp_cale_pane_g1_ParamLimits

0x7e60,	// (0x00084d26) list_single_fp_cale_pane_g1

0x7e6c,	// (0x00084d32) list_single_fp_cale_pane_g2_ParamLimits

0x7e6c,	// (0x00084d32) list_single_fp_cale_pane_g2

0x0002,

0xf737,	// (0x0008c5fd) list_single_fp_cale_pane_g_ParamLimits

0xf737,	// (0x0008c5fd) list_single_fp_cale_pane_g

0x7e85,	// (0x00084d4b) list_single_fp_cale_pane_t1_ParamLimits

0x7e85,	// (0x00084d4b) list_single_fp_cale_pane_t1

0x7e97,	// (0x00084d5d) list_single_fp_cale_pane_t2_ParamLimits

0x7e97,	// (0x00084d5d) list_single_fp_cale_pane_t2

0x0001,

0xf73e,	// (0x0008c604) list_single_fp_cale_pane_t_ParamLimits

0xf73e,	// (0x0008c604) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x402b,	// (0x00080ef1) main_dialer_pane

0xcdcd,	// (0x00089c93) aid_cell_size_keypad

0xcdcd,	// (0x00089c93) dialer_ne_pane

0xcdcd,	// (0x00089c93) grid_dialer_command_1_pane

0xcdcd,	// (0x00089c93) grid_dialer_command_2_pane

0xcdcd,	// (0x00089c93) grid_dialer_keypad_pane

0x1ebf,	// (0x0007ed85) bg_popup_call_pane_cp06_ParamLimits

0x1ebf,	// (0x0007ed85) bg_popup_call_pane_cp06

0x1ebf,	// (0x0007ed85) dialer_ne_clear_pane_ParamLimits

0x1ebf,	// (0x0007ed85) dialer_ne_clear_pane

0xd728,	// (0x0008a5ee) dialer_ne_pane_g1

0xd6fa,	// (0x0008a5c0) dialer_ne_pane_t1_ParamLimits

0xd6fa,	// (0x0008a5c0) dialer_ne_pane_t1

0x7eca,	// (0x00084d90) dialer_ne_pane_t2_ParamLimits

0x7eca,	// (0x00084d90) dialer_ne_pane_t2

0x7ee7,	// (0x00084dad) dialer_ne_pane_t3_ParamLimits

0x7ee7,	// (0x00084dad) dialer_ne_pane_t3

0x0002,

0xf743,	// (0x0008c609) dialer_ne_pane_t_ParamLimits

0xf743,	// (0x0008c609) dialer_ne_pane_t

0x7ee7,	// (0x00084dad) dialer_ne_pane_t3_copy1_ParamLimits

0x7ee7,	// (0x00084dad) dialer_ne_pane_t3_copy1

0x7f09,	// (0x00084dcf) cell_dialer_keypad_pane_ParamLimits

0x7f09,	// (0x00084dcf) cell_dialer_keypad_pane

0xd467,	// (0x0008a32d) cell_dialer_command_1_pane_ParamLimits

0xd467,	// (0x0008a32d) cell_dialer_command_1_pane

0x7f20,	// (0x00084de6) cell_dialer_command_2_pane_ParamLimits

0x7f20,	// (0x00084de6) cell_dialer_command_2_pane

0xd467,	// (0x0008a32d) bg_button_pane_cp02_ParamLimits

0xd467,	// (0x0008a32d) bg_button_pane_cp02

0xd4ce,	// (0x0008a394) cell_dialer_keypad_pane_g1_ParamLimits

0xd4ce,	// (0x0008a394) cell_dialer_keypad_pane_g1

0xd467,	// (0x0008a32d) bg_button_pane_cp03_ParamLimits

0xd467,	// (0x0008a32d) bg_button_pane_cp03

0xd4ce,	// (0x0008a394) cell_dialer_command_1_pane_g1_ParamLimits

0xd4ce,	// (0x0008a394) cell_dialer_command_1_pane_g1

0xcdcd,	// (0x00089c93) bg_button_pane_cp04

0xd728,	// (0x0008a5ee) cell_dialer_command_2_pane_g1

0xcdcd,	// (0x00089c93) bg_button_pane_cp06

0xd728,	// (0x0008a5ee) dialer_ne_clear_pane_g1

0x07e7,	// (0x0007d6ad) navi_pane_g2

0x0815,	// (0x0007d6db) navi_pane_g3

0x0002,

0xf35f,	// (0x0008c225) navi_pane_g

0x08a4,	// (0x0007d76a) navi_pane_mv_g2

0x08cb,	// (0x0007d791) navi_pane_mv_g5

0x609c,	// (0x00082f62) navi_pane_mv_t1

0xd540,	// (0x0008a406) main_clock2_pane

0xd4c0,	// (0x0008a386) main_clock2_list_pane_ParamLimits

0xd4c0,	// (0x0008a386) main_clock2_list_pane

0x7fb7,	// (0x00084e7d) main_clock2_pane_t1_ParamLimits

0x7fb7,	// (0x00084e7d) main_clock2_pane_t1

0x7fe5,	// (0x00084eab) main_clock2_pane_t2_ParamLimits

0x7fe5,	// (0x00084eab) main_clock2_pane_t2

0x0004,

0xf74f,	// (0x0008c615) main_clock2_pane_t_ParamLimits

0xf74f,	// (0x0008c615) main_clock2_pane_t

0x804a,	// (0x00084f10) popup_clock_analogue_window_cp03_ParamLimits

0x804a,	// (0x00084f10) popup_clock_analogue_window_cp03

0x8068,	// (0x00084f2e) popup_clock_digital_window_cp02_ParamLimits

0x8068,	// (0x00084f2e) popup_clock_digital_window_cp02

0x80dd,	// (0x00084fa3) main_clock2_list_single_pane_ParamLimits

0x80dd,	// (0x00084fa3) main_clock2_list_single_pane

0xd6f2,	// (0x0008a5b8) list_highlight_pane_cp05

0x80ef,	// (0x00084fb5) main_clock2_list_single_pane_t1

0x4c7f,	// (0x00081b45) popup_toolbar_window_cp04_ParamLimits

0xd4dc,	// (0x0008a3a2) camera2_autofocus_pane_g2_ParamLimits

0xd4dc,	// (0x0008a3a2) camera2_autofocus_pane_g2

0xd4dc,	// (0x0008a3a2) camera2_autofocus_pane_g3_ParamLimits

0xd4dc,	// (0x0008a3a2) camera2_autofocus_pane_g3

0xd4dc,	// (0x0008a3a2) camera2_autofocus_pane_g4_ParamLimits

0xd4dc,	// (0x0008a3a2) camera2_autofocus_pane_g4

0xd4dc,	// (0x0008a3a2) camera2_autofocus_pane_g5_ParamLimits

0xd4dc,	// (0x0008a3a2) camera2_autofocus_pane_g5

0x0004,

0xf693,	// (0x0008c559) camera2_autofocus_pane_g_ParamLimits

0xf693,	// (0x0008c559) camera2_autofocus_pane_g

0x77bc,	// (0x00084682) camera2_autofocus_pane_cp_g2

0x77c4,	// (0x0008468a) camera2_autofocus_pane_cp_g3

0x77cc,	// (0x00084692) camera2_autofocus_pane_cp_g4

0x77d4,	// (0x0008469a) camera2_autofocus_pane_cp_g5

0x0004,

0xf6f9,	// (0x0008c5bf) camera2_autofocus_pane_cp_g

0xcdcd,	// (0x00089c93) popup_dialer_spcha_window

0xcdcd,	// (0x00089c93) bg_popup_sub_pane_cp07

0xcdcd,	// (0x00089c93) list_spcha_pane

0x81a0,	// (0x00085066) list_single_spcha_pane_ParamLimits

0x81a0,	// (0x00085066) list_single_spcha_pane

0xcdcd,	// (0x00089c93) list_highlight_pane_cp06

0x03d8,	// (0x0007d29e) list_single_spcha_pane_t1

0x17d8,	// (0x0007e69e) popup_call2_audio_out_window_g4_ParamLimits

0x17d8,	// (0x0007e69e) popup_call2_audio_out_window_g4

0x402b,	// (0x00080ef1) main_imed2_pane

0x6c4c,	// (0x00083b12) popup_imed_adjust2_window

0x6c5f,	// (0x00083b25) popup_imed_trans_window_ParamLimits

0x6c5f,	// (0x00083b25) popup_imed_trans_window

0x71cd,	// (0x00084093) popup_blid_sat_info2_window_t1

0x71db,	// (0x000840a1) popup_blid_sat_info2_window_t2

0x000a,

0xf628,	// (0x0008c4ee) popup_blid_sat_info2_window_t

0x81b2,	// (0x00085078) aid_size_cell_colour_35

0x81cc,	// (0x00085092) aid_size_cell_colour_112

0x81e3,	// (0x000850a9) aid_size_cell_effect

0xd467,	// (0x0008a32d) bg_tb_trans_pane_cp02

0x81fd,	// (0x000850c3) heading_imed_pane

0x8209,	// (0x000850cf) listscroll_imed_pane

0x8215,	// (0x000850db) heading_imed_pane_g1

0x821d,	// (0x000850e3) heading_imed_pane_t1

0x822b,	// (0x000850f1) grid_imed_colour_35_pane_ParamLimits

0x822b,	// (0x000850f1) grid_imed_colour_35_pane

0x8243,	// (0x00085109) grid_imed_effect_pane

0x8253,	// (0x00085119) list_imed_aspect_pane

0x825b,	// (0x00085121) scroll_pane_cp027_ParamLimits

0x825b,	// (0x00085121) scroll_pane_cp027

0x8267,	// (0x0008512d) cell_imed_effect_pane_ParamLimits

0x8267,	// (0x0008512d) cell_imed_effect_pane

0x827f,	// (0x00085145) cell_imed_colour_pane_ParamLimits

0x827f,	// (0x00085145) cell_imed_colour_pane

0x82c1,	// (0x00085187) cell_imed_colour_pane_g1_ParamLimits

0x82c1,	// (0x00085187) cell_imed_colour_pane_g1

0x82d2,	// (0x00085198) hgihlgiht_grid_pane_cp016_ParamLimits

0x82d2,	// (0x00085198) hgihlgiht_grid_pane_cp016

0x82e3,	// (0x000851a9) cell_imed_effect_pane_g1

0x82eb,	// (0x000851b1) grid_highlight_pane_cp017

0x82f4,	// (0x000851ba) list_imed_single_pane_ParamLimits

0x82f4,	// (0x000851ba) list_imed_single_pane

0xcdcd,	// (0x00089c93) list_highlight_pane_cp07

0x8309,	// (0x000851cf) list_imed_aspect_pane_comp1_t1

0x09d4,	// (0x0007d89a) bg_tb_trans_pane_cp05

0x832b,	// (0x000851f1) popup_imed_adjust2_window_g1

0x8352,	// (0x00085218) popup_imed_adjust2_window_t1

0x836a,	// (0x00085230) slider_imed_adjust_pane

0x837e,	// (0x00085244) slider_imed_adjust_pane_g1

0x838e,	// (0x00085254) slider_imed_adjust_pane_g2

0x839e,	// (0x00085264) slider_imed_adjust_pane_g3

0x83af,	// (0x00085275) slider_imed_adjust_pane_g4

0x0003,

0xf76c,	// (0x0008c632) slider_imed_adjust_pane_g

0x83c0,	// (0x00085286) aid_size_cell_clipart2

0x83cc,	// (0x00085292) grid_imed_clipart_pane

0x83d6,	// (0x0008529c) scroll_pane_cp031

0x83de,	// (0x000852a4) cell_imed_clipart_pane_ParamLimits

0x83de,	// (0x000852a4) cell_imed_clipart_pane

0x8401,	// (0x000852c7) cell_imed_clipart_pane_g1

0xcdcd,	// (0x00089c93) grid_highlight_pane_cp014

0x7f99,	// (0x00084e5f) main_clock2_pane_g1_ParamLimits

0x7f99,	// (0x00084e5f) main_clock2_pane_g1

0x8084,	// (0x00084f4a) aid_call2_pane_cp10

0x8096,	// (0x00084f5c) aid_call_pane_cp10

0x0746,	// (0x0007d60c) popup_clock_analogue_window_cp10_g1

0x0746,	// (0x0007d60c) popup_clock_analogue_window_cp10_g2

0x80a8,	// (0x00084f6e) popup_clock_analogue_window_cp10_g3

0x80a8,	// (0x00084f6e) popup_clock_analogue_window_cp10_g4

0x0746,	// (0x0007d60c) popup_clock_analogue_window_cp10_g5

0x0004,

0xf75a,	// (0x0008c620) popup_clock_analogue_window_cp10_g

0x80be,	// (0x00084f84) popup_clock_analogue_window_cp10_t1

0x80fd,	// (0x00084fc3) clock_digital_number_pane_cp10_ParamLimits

0x80fd,	// (0x00084fc3) clock_digital_number_pane_cp10

0x8117,	// (0x00084fdd) clock_digital_number_pane_cp11_ParamLimits

0x8117,	// (0x00084fdd) clock_digital_number_pane_cp11

0x8131,	// (0x00084ff7) clock_digital_number_pane_cp12_ParamLimits

0x8131,	// (0x00084ff7) clock_digital_number_pane_cp12

0x814b,	// (0x00085011) clock_digital_number_pane_cp13_ParamLimits

0x814b,	// (0x00085011) clock_digital_number_pane_cp13

0x8165,	// (0x0008502b) clock_digital_separator_pane_cp10_ParamLimits

0x8165,	// (0x0008502b) clock_digital_separator_pane_cp10

0x817f,	// (0x00085045) popup_clock_digital_window_cp02_t1_ParamLimits

0x817f,	// (0x00085045) popup_clock_digital_window_cp02_t1

0xd43d,	// (0x0008a303) clock_digital_number_pane_cp10_g1

0xd43d,	// (0x0008a303) clock_digital_number_pane_cp10_g2

0x0001,

0xf775,	// (0x0008c63b) clock_digital_number_pane_cp10_g

0xd43d,	// (0x0008a303) clock_digital_separator_pane_cp10_g1

0xd43d,	// (0x0008a303) clock_digital_separator_pane_g2_cp10

0x08d3,	// (0x0007d799) navi_pane_vded_g4

0x08dc,	// (0x0007d7a2) navi_pane_vded_g5

0x08e5,	// (0x0007d7ab) navi_pane_vded_t1

0x402b,	// (0x00080ef1) main_vded_pane

0x840a,	// (0x000852d0) main_vded_pane_g1

0x8416,	// (0x000852dc) main_vded_pane_g2

0x8420,	// (0x000852e6) main_vded_pane_g3

0x0002,

0xf77a,	// (0x0008c640) main_vded_pane_g

0x842a,	// (0x000852f0) main_vded_pane_t1

0x8438,	// (0x000852fe) main_vded_pane_t2

0x0001,

0xf781,	// (0x0008c647) main_vded_pane_t

0x8446,	// (0x0008530c) vded_slider_pane

0x8450,	// (0x00085316) vded_video_pane

0x845a,	// (0x00085320) vded_video_pane_g1

0x8464,	// (0x0008532a) vded_video_pane_g2

0xd728,	// (0x0008a5ee) vded_video_pane_g3

0x0002,

0xf786,	// (0x0008c64c) vded_video_pane_g

0x846d,	// (0x00085333) vded_slider_pane_g1

0x70b8,	// (0x00083f7e) vded_slider_pane_g2

0x8476,	// (0x0008533c) vded_slider_pane_g3

0x847f,	// (0x00085345) vded_slider_pane_g4

0x8488,	// (0x0008534e) vded_slider_pane_g5

0x0004,

0xf78d,	// (0x0008c653) vded_slider_pane_g

0x7d1d,	// (0x00084be3) mup3_rocker_pane_ParamLimits

0x7d1d,	// (0x00084be3) mup3_rocker_pane

0x8491,	// (0x00085357) mup3_control_keys_pane_g1

0x8499,	// (0x0008535f) mup3_control_keys_pane_g2

0x84a1,	// (0x00085367) mup3_control_keys_pane_g3

0x84a9,	// (0x0008536f) mup3_control_keys_pane_g4

0x0003,

0xf798,	// (0x0008c65e) mup3_control_keys_pane_g

0x3fdf,	// (0x00080ea5) popup_toolbar2_fixed_window_cp01_ParamLimits

0x3fdf,	// (0x00080ea5) popup_toolbar2_fixed_window_cp01

0x7d3f,	// (0x00084c05) popup_toolbar2_fixed_window_cp02_ParamLimits

0x7d3f,	// (0x00084c05) popup_toolbar2_fixed_window_cp02

0x1161,	// (0x0007e027) popup_call2_audio_second_window_t4_ParamLimits

0x1161,	// (0x0007e027) popup_call2_audio_second_window_t4

0x169d,	// (0x0007e563) popup_call2_audio_first_window_t6_ParamLimits

0x169d,	// (0x0007e563) popup_call2_audio_first_window_t6

0x18db,	// (0x0007e7a1) popup_call2_audio_out_window_t6_ParamLimits

0x18db,	// (0x0007e7a1) popup_call2_audio_out_window_t6

0x402b,	// (0x00080ef1) main_vitu_pane

0xd4c0,	// (0x0008a386) aid_size_cell_itu_ParamLimits

0xd4c0,	// (0x0008a386) aid_size_cell_itu

0xd4c0,	// (0x0008a386) bg_popup_window_pane_cp08_ParamLimits

0xd4c0,	// (0x0008a386) bg_popup_window_pane_cp08

0xd4c0,	// (0x0008a386) field_vitu_entry_pane_ParamLimits

0xd4c0,	// (0x0008a386) field_vitu_entry_pane

0xd4c0,	// (0x0008a386) grid_vitu_function_pane_ParamLimits

0xd4c0,	// (0x0008a386) grid_vitu_function_pane

0xd4c0,	// (0x0008a386) grid_vitu_itu_pane_ParamLimits

0xd4c0,	// (0x0008a386) grid_vitu_itu_pane

0xd4c0,	// (0x0008a386) cell_vitu_itu_pane_ParamLimits

0xd4c0,	// (0x0008a386) cell_vitu_itu_pane

0xd4c0,	// (0x0008a386) cell_vitu_function_pane_ParamLimits

0xd4c0,	// (0x0008a386) cell_vitu_function_pane

0xd467,	// (0x0008a32d) bg_popup_sub_pane_cp08_ParamLimits

0xd467,	// (0x0008a32d) bg_popup_sub_pane_cp08

0xd742,	// (0x0008a608) field_vitu_entry_pane_t1_ParamLimits

0xd742,	// (0x0008a608) field_vitu_entry_pane_t1

0x7eca,	// (0x00084d90) field_vitu_entry_pane_t2_ParamLimits

0x7eca,	// (0x00084d90) field_vitu_entry_pane_t2

0x0001,

0xf7a1,	// (0x0008c667) field_vitu_entry_pane_t_ParamLimits

0xf7a1,	// (0x0008c667) field_vitu_entry_pane_t

0x1ebf,	// (0x0007ed85) bg_button_pane_cp05_ParamLimits

0x1ebf,	// (0x0007ed85) bg_button_pane_cp05

0x84b9,	// (0x0008537f) cell_vitu_itu_pane_g1

0x84d5,	// (0x0008539b) cell_vitu_itu_pane_t1_ParamLimits

0x84d5,	// (0x0008539b) cell_vitu_itu_pane_t1

0x84d5,	// (0x0008539b) cell_vitu_itu_pane_t2_ParamLimits

0x84d5,	// (0x0008539b) cell_vitu_itu_pane_t2

0x0002,

0xf7a6,	// (0x0008c66c) cell_vitu_itu_pane_t_ParamLimits

0xf7a6,	// (0x0008c66c) cell_vitu_itu_pane_t

0xcdcd,	// (0x00089c93) bg_button_pane_cp07

0xd728,	// (0x0008a5ee) cell_vitu_function_pane_g1

0x4164,	// (0x0008102a) main_calc_pane_g1

0x3d9d,	// (0x00080c63) aid_visual_content_pane

0x402b,	// (0x00080ef1) main_vradio_pane

0xd4dc,	// (0x0008a3a2) main_vradio_pane_g1_ParamLimits

0xd4dc,	// (0x0008a3a2) main_vradio_pane_g1

0xd4dc,	// (0x0008a3a2) main_vradio_pane_g2_ParamLimits

0xd4dc,	// (0x0008a3a2) main_vradio_pane_g2

0x0001,

0xf7ad,	// (0x0008c673) main_vradio_pane_g_ParamLimits

0xf7ad,	// (0x0008c673) main_vradio_pane_g

0xd6fa,	// (0x0008a5c0) main_vradio_pane_t1_ParamLimits

0xd6fa,	// (0x0008a5c0) main_vradio_pane_t1

0xd6fa,	// (0x0008a5c0) main_vradio_pane_t2_ParamLimits

0xd6fa,	// (0x0008a5c0) main_vradio_pane_t2

0xd6fa,	// (0x0008a5c0) main_vradio_pane_t3_ParamLimits

0xd6fa,	// (0x0008a5c0) main_vradio_pane_t3

0x0002,

0xf7b2,	// (0x0008c678) main_vradio_pane_t_ParamLimits

0xf7b2,	// (0x0008c678) main_vradio_pane_t

0xd4c0,	// (0x0008a386) vradio_rocker_control_pane_ParamLimits

0xd4c0,	// (0x0008a386) vradio_rocker_control_pane

0xd4c0,	// (0x0008a386) vradio_station_info_pane_ParamLimits

0xd4c0,	// (0x0008a386) vradio_station_info_pane

0xd467,	// (0x0008a32d) vradio_frequency_info_pane_ParamLimits

0xd467,	// (0x0008a32d) vradio_frequency_info_pane

0xd728,	// (0x0008a5ee) vradio_station_info_pane_g1

0x84d5,	// (0x0008539b) vradio_station_info_pane_t1_ParamLimits

0x84d5,	// (0x0008539b) vradio_station_info_pane_t1

0xd6fa,	// (0x0008a5c0) vradio_station_info_pane_t2_ParamLimits

0xd6fa,	// (0x0008a5c0) vradio_station_info_pane_t2

0x0001,

0xf7b9,	// (0x0008c67f) vradio_station_info_pane_t_ParamLimits

0xf7b9,	// (0x0008c67f) vradio_station_info_pane_t

0xcdcd,	// (0x00089c93) vradio_tuning_pane

0x84e9,	// (0x000853af) vradio_rocker_control_pane_g1

0x84f1,	// (0x000853b7) vradio_rocker_control_pane_g2

0x84f9,	// (0x000853bf) vradio_rocker_control_pane_g3

0x8501,	// (0x000853c7) vradio_rocker_control_pane_g4

0x8509,	// (0x000853cf) vradio_rocker_control_pane_g5

0x0004,

0xf7be,	// (0x0008c684) vradio_rocker_control_pane_g

0xd728,	// (0x0008a5ee) vradio_frequency_info_pane_g1

0xd742,	// (0x0008a608) vradio_frequency_info_pane_t1_ParamLimits

0xd742,	// (0x0008a608) vradio_frequency_info_pane_t1

0x8511,	// (0x000853d7) vradio_tuning_pane_g1

0x851e,	// (0x000853e4) vradio_tuning_pane_t1

0x3de6,	// (0x00080cac) area_side_right_pane_ParamLimits

0x3de6,	// (0x00080cac) area_side_right_pane

0x1d05,	// (0x0007ebcb) status_small_pane_g1

0x1d0d,	// (0x0007ebd3) status_small_pane_g2

0x1d16,	// (0x0007ebdc) status_small_pane_g3

0x1d1f,	// (0x0007ebe5) status_small_pane_g4

0x0003,

0xf58a,	// (0x0008c450) status_small_pane_g

0x1d28,	// (0x0007ebee) status_small_pane_t1

0x402b,	// (0x00080ef1) main_video3_pane

0x852d,	// (0x000853f3) cams_zoom_vslider_pane

0x8535,	// (0x000853fb) image3_wide_pane_ParamLimits

0x8535,	// (0x000853fb) image3_wide_pane

0x854f,	// (0x00085415) image3_wide_small_pane

0x855b,	// (0x00085421) main_video3_pane_g1_ParamLimits

0x855b,	// (0x00085421) main_video3_pane_g1

0x8577,	// (0x0008543d) main_video3_pane_g2_ParamLimits

0x8577,	// (0x0008543d) main_video3_pane_g2

0x0001,

0xf7c9,	// (0x0008c68f) main_video3_pane_g_ParamLimits

0xf7c9,	// (0x0008c68f) main_video3_pane_g

0x8593,	// (0x00085459) main_video3_pane_t1_ParamLimits

0x8593,	// (0x00085459) main_video3_pane_t1

0x85be,	// (0x00085484) main_video3_pane_t2_ParamLimits

0x85be,	// (0x00085484) main_video3_pane_t2

0x85e9,	// (0x000854af) main_video3_pane_t3_ParamLimits

0x85e9,	// (0x000854af) main_video3_pane_t3

0x0002,

0xf7ce,	// (0x0008c694) main_video3_pane_t_ParamLimits

0xf7ce,	// (0x0008c694) main_video3_pane_t

0x8616,	// (0x000854dc) cams_zoom_vslider_pane_g1

0x861f,	// (0x000854e5) cams_zoom_vslider_pane_g2

0x0001,

0xf7d5,	// (0x0008c69b) cams_zoom_vslider_pane_g

0x8627,	// (0x000854ed) small_slider_vertical_pane

0xd728,	// (0x0008a5ee) small_slider_vertical_pane_g1

0xd728,	// (0x0008a5ee) small_slider_vertical_pane_g2

0x862f,	// (0x000854f5) small_slider_vertical_pane_g3

0x0002,

0xf7da,	// (0x0008c6a0) small_slider_vertical_pane_g

0x402b,	// (0x00080ef1) main_hwr_training_pane

0x8638,	// (0x000854fe) hwr_training_instruct_pane_ParamLimits

0x8638,	// (0x000854fe) hwr_training_instruct_pane

0x865a,	// (0x00085520) hwr_training_navi_pane_ParamLimits

0x865a,	// (0x00085520) hwr_training_navi_pane

0x8674,	// (0x0008553a) hwr_training_write_pane_ParamLimits

0x8674,	// (0x0008553a) hwr_training_write_pane

0xcdcd,	// (0x00089c93) bg_frame_shadow_pane

0x86c1,	// (0x00085587) hwr_training_write_pane_g1

0x86c9,	// (0x0008558f) hwr_training_write_pane_g2

0x86d1,	// (0x00085597) hwr_training_write_pane_g3

0x86d9,	// (0x0008559f) hwr_training_write_pane_g4

0x86e1,	// (0x000855a7) hwr_training_write_pane_g5

0x86e9,	// (0x000855af) hwr_training_write_pane_g6

0x86f1,	// (0x000855b7) hwr_training_write_pane_g7

0x0006,

0xf7e1,	// (0x0008c6a7) hwr_training_write_pane_g

0x86f9,	// (0x000855bf) hwr_training_navi_pane_g1_ParamLimits

0x86f9,	// (0x000855bf) hwr_training_navi_pane_g1

0x870b,	// (0x000855d1) hwr_training_navi_pane_g2_ParamLimits

0x870b,	// (0x000855d1) hwr_training_navi_pane_g2

0x871d,	// (0x000855e3) hwr_training_navi_pane_g3_ParamLimits

0x871d,	// (0x000855e3) hwr_training_navi_pane_g3

0x872d,	// (0x000855f3) hwr_training_navi_pane_g4_ParamLimits

0x872d,	// (0x000855f3) hwr_training_navi_pane_g4

0x0004,

0xf7f0,	// (0x0008c6b6) hwr_training_navi_pane_g_ParamLimits

0xf7f0,	// (0x0008c6b6) hwr_training_navi_pane_g

0x8747,	// (0x0008560d) hwr_training_navi_pane_t1

0x8755,	// (0x0008561b) list_single_hwr_training_instruct_pane_ParamLimits

0x8755,	// (0x0008561b) list_single_hwr_training_instruct_pane

0x877e,	// (0x00085644) list_single_hwr_training_instruct_pane_t1

0x72ce,	// (0x00084194) bg_frame_shadow_pane_g1

0x878d,	// (0x00085653) bg_frame_shadow_pane_g2

0x8795,	// (0x0008565b) bg_frame_shadow_pane_g3

0x879d,	// (0x00085663) bg_frame_shadow_pane_g4

0x87a5,	// (0x0008566b) bg_frame_shadow_pane_g5

0x87ad,	// (0x00085673) bg_frame_shadow_pane_g6

0x87b5,	// (0x0008567b) bg_frame_shadow_pane_g7

0xd5ef,	// (0x0008a4b5) bg_frame_shadow_pane_g8

0x0007,

0xf7fb,	// (0x0008c6c1) bg_frame_shadow_pane_g

0x402b,	// (0x00080ef1) main_video_tele_dialer_pane

0x87bd,	// (0x00085683) aid_size_cell_video_keypad_ParamLimits

0x87bd,	// (0x00085683) aid_size_cell_video_keypad

0x87cd,	// (0x00085693) grid_video_dialer_keypad_pane_ParamLimits

0x87cd,	// (0x00085693) grid_video_dialer_keypad_pane

0x8801,	// (0x000856c7) video_down_pane_cp_ParamLimits

0x8801,	// (0x000856c7) video_down_pane_cp

0x882b,	// (0x000856f1) cell_video_dialer_keypad_pane_ParamLimits

0x882b,	// (0x000856f1) cell_video_dialer_keypad_pane

0x8840,	// (0x00085706) bg_button_pane_cp08_ParamLimits

0x8840,	// (0x00085706) bg_button_pane_cp08

0x884c,	// (0x00085712) cell_video_dialer_keypad_pane_g1_ParamLimits

0x884c,	// (0x00085712) cell_video_dialer_keypad_pane_g1

0x7d11,	// (0x00084bd7) mup3_rocker2_pane_ParamLimits

0x7d11,	// (0x00084bd7) mup3_rocker2_pane

0xd728,	// (0x0008a5ee) mup3_rocker2_pane_g1

0x6bc0,	// (0x00083a86) main_dialer2_pane

0x402b,	// (0x00080ef1) main_mp4_pane

0x88a4,	// (0x0008576a) main_mp4_pane_g1_ParamLimits

0x88a4,	// (0x0008576a) main_mp4_pane_g1

0x88b2,	// (0x00085778) main_mp4_pane_g2_ParamLimits

0x88b2,	// (0x00085778) main_mp4_pane_g2

0x88c0,	// (0x00085786) main_mp4_pane_g3_ParamLimits

0x88c0,	// (0x00085786) main_mp4_pane_g3

0x8905,	// (0x000857cb) main_mp4_pane_g4_ParamLimits

0x8905,	// (0x000857cb) main_mp4_pane_g4

0x8933,	// (0x000857f9) main_mp4_pane_g5_ParamLimits

0x8933,	// (0x000857f9) main_mp4_pane_g5

0x0007,

0xf81b,	// (0x0008c6e1) main_mp4_pane_g_ParamLimits

0xf81b,	// (0x0008c6e1) main_mp4_pane_g

0x89a7,	// (0x0008586d) main_mp4_pane_t1_ParamLimits

0x89a7,	// (0x0008586d) main_mp4_pane_t1

0x8a03,	// (0x000858c9) main_mp4_pane_t2_ParamLimits

0x8a03,	// (0x000858c9) main_mp4_pane_t2

0x8a55,	// (0x0008591b) main_mp4_pane_t3_ParamLimits

0x8a55,	// (0x0008591b) main_mp4_pane_t3

0x8a7b,	// (0x00085941) main_mp4_pane_t4_ParamLimits

0x8a7b,	// (0x00085941) main_mp4_pane_t4

0x0003,

0xf82c,	// (0x0008c6f2) main_mp4_pane_t_ParamLimits

0xf82c,	// (0x0008c6f2) main_mp4_pane_t

0x8abf,	// (0x00085985) mp4_progress_pane_ParamLimits

0x8abf,	// (0x00085985) mp4_progress_pane

0x8b09,	// (0x000859cf) mp4_rocker_pane_ParamLimits

0x8b09,	// (0x000859cf) mp4_rocker_pane

0x8b31,	// (0x000859f7) mp4_progress_pane_t1

0x8b4a,	// (0x00085a10) mp4_progress_pane_t2

0x0001,

0xf835,	// (0x0008c6fb) mp4_progress_pane_t

0x8b63,	// (0x00085a29) mup_progress_pane_cp04

0xdadf,	// (0x0008a9a5) mp4_rocker_pane_g1

0x8b76,	// (0x00085a3c) aid_cell_size_keypad2_ParamLimits

0x8b76,	// (0x00085a3c) aid_cell_size_keypad2

0x8b86,	// (0x00085a4c) dialer2_ne_pane_ParamLimits

0x8b86,	// (0x00085a4c) dialer2_ne_pane

0x8b94,	// (0x00085a5a) grid_dialer2_keypad_pane_ParamLimits

0x8b94,	// (0x00085a5a) grid_dialer2_keypad_pane

0x8ba4,	// (0x00085a6a) bg_popup_call_pane_cp07_ParamLimits

0x8ba4,	// (0x00085a6a) bg_popup_call_pane_cp07

0x8bb2,	// (0x00085a78) dialer2_ne_pane_t1_ParamLimits

0x8bb2,	// (0x00085a78) dialer2_ne_pane_t1

0x8be9,	// (0x00085aaf) cell_dialer2_keypad_pane_ParamLimits

0x8be9,	// (0x00085aaf) cell_dialer2_keypad_pane

0x8bfe,	// (0x00085ac4) bg_button_pane_pane_cp04_ParamLimits

0x8bfe,	// (0x00085ac4) bg_button_pane_pane_cp04

0x8c0a,	// (0x00085ad0) cell_dialer2_keypad_pane_g1_ParamLimits

0x8c0a,	// (0x00085ad0) cell_dialer2_keypad_pane_g1

0x4b41,	// (0x00081a07) aid_placing_vt_set_content_ParamLimits

0x4b41,	// (0x00081a07) aid_placing_vt_set_content

0x4b6d,	// (0x00081a33) aid_placing_vt_set_title_ParamLimits

0x4b6d,	// (0x00081a33) aid_placing_vt_set_title

0x402b,	// (0x00080ef1) main_image3_pane

0x8ca4,	// (0x00085b6a) area_side_right_pane_cp01_ParamLimits

0x8ca4,	// (0x00085b6a) area_side_right_pane_cp01

0x8cd1,	// (0x00085b97) main_image3_pane_g1_ParamLimits

0x8cd1,	// (0x00085b97) main_image3_pane_g1

0x8cdf,	// (0x00085ba5) main_image3_pane_g2_ParamLimits

0x8cdf,	// (0x00085ba5) main_image3_pane_g2

0x8cf8,	// (0x00085bbe) main_image3_pane_g3_ParamLimits

0x8cf8,	// (0x00085bbe) main_image3_pane_g3

0x8d11,	// (0x00085bd7) main_image3_pane_g4_ParamLimits

0x8d11,	// (0x00085bd7) main_image3_pane_g4

0x0003,

0xf844,	// (0x0008c70a) main_image3_pane_g_ParamLimits

0xf844,	// (0x0008c70a) main_image3_pane_g

0x8d2a,	// (0x00085bf0) main_image3_pane_t1_ParamLimits

0x8d2a,	// (0x00085bf0) main_image3_pane_t1

0x8d4f,	// (0x00085c15) main_image3_pane_t2_ParamLimits

0x8d4f,	// (0x00085c15) main_image3_pane_t2

0x8d6e,	// (0x00085c34) main_image3_pane_t3_ParamLimits

0x8d6e,	// (0x00085c34) main_image3_pane_t3

0x0003,

0xf84d,	// (0x0008c713) main_image3_pane_t_ParamLimits

0xf84d,	// (0x0008c713) main_image3_pane_t

0xd4c0,	// (0x0008a386) grid_sctrl_middle_pane_cp01_ParamLimits

0xd4c0,	// (0x0008a386) grid_sctrl_middle_pane_cp01

0x8dcf,	// (0x00085c95) cell_sctrl_middle_pane_cp01_ParamLimits

0x8dcf,	// (0x00085c95) cell_sctrl_middle_pane_cp01

0x8de0,	// (0x00085ca6) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x8de0,	// (0x00085ca6) cell_sctrl_middle_pane_cp01_g1

0x402b,	// (0x00080ef1) main_call4_pane

0x8ded,	// (0x00085cb3) aid_size_button_call4_ParamLimits

0x8ded,	// (0x00085cb3) aid_size_button_call4

0x8e23,	// (0x00085ce9) call4_windows_pane_ParamLimits

0x8e23,	// (0x00085ce9) call4_windows_pane

0x8e38,	// (0x00085cfe) grid_call4_button_pane_ParamLimits

0x8e38,	// (0x00085cfe) grid_call4_button_pane

0x8e66,	// (0x00085d2c) call4_windows_conf_pane

0x8e7b,	// (0x00085d41) popup_call4_audio_first_window_ParamLimits

0x8e7b,	// (0x00085d41) popup_call4_audio_first_window

0x8ecb,	// (0x00085d91) popup_call4_audio_second_window_ParamLimits

0x8ecb,	// (0x00085d91) popup_call4_audio_second_window

0x8ee4,	// (0x00085daa) popup_call4_audio_wait_window_ParamLimits

0x8ee4,	// (0x00085daa) popup_call4_audio_wait_window

0x8ef2,	// (0x00085db8) cell_call4_button_pane_ParamLimits

0x8ef2,	// (0x00085db8) cell_call4_button_pane

0x8f15,	// (0x00085ddb) bg_button_pane_cp09_ParamLimits

0x8f15,	// (0x00085ddb) bg_button_pane_cp09

0x8f21,	// (0x00085de7) cell_call4_button_pane_g1_ParamLimits

0x8f21,	// (0x00085de7) cell_call4_button_pane_g1

0x8f2e,	// (0x00085df4) cell_call4_button_pane_t1_ParamLimits

0x8f2e,	// (0x00085df4) cell_call4_button_pane_t1

0x8f7a,	// (0x00085e40) popup_call4_audio_conf_window_ParamLimits

0x8f7a,	// (0x00085e40) popup_call4_audio_conf_window

0x7d4c,	// (0x00084c12) mup3_progress_pane_t1_ParamLimits

0x7d6b,	// (0x00084c31) mup3_progress_pane_t2_ParamLimits

0x7d8a,	// (0x00084c50) mup3_progress_pane_t3_ParamLimits

0xf722,	// (0x0008c5e8) mup3_progress_pane_t_ParamLimits

0x7da7,	// (0x00084c6d) mup_progress_pane_cp03_ParamLimits

0x84b1,	// (0x00085377) mup3_control_keys_pane_g4_copy1

0x8aed,	// (0x000859b3) mp4_rocker2_pane_ParamLimits

0x8aed,	// (0x000859b3) mp4_rocker2_pane

0x8f8e,	// (0x00085e54) mp4_rocker2_pane_g1

0x8f96,	// (0x00085e5c) mp4_rocker2_pane_g2

0x8f9e,	// (0x00085e64) mp4_rocker2_pane_g3

0x8fa6,	// (0x00085e6c) mp4_rocker2_pane_g4

0x8fae,	// (0x00085e74) mp4_rocker2_pane_g5

0x0004,

0xf856,	// (0x0008c71c) mp4_rocker2_pane_g

0x402b,	// (0x00080ef1) main_camera4_pane

0x402b,	// (0x00080ef1) main_video4_pane

0x87dd,	// (0x000856a3) main_video_tele_dialer_pane_t1_ParamLimits

0x87dd,	// (0x000856a3) main_video_tele_dialer_pane_t1

0x87ef,	// (0x000856b5) main_video_tele_dialer_pane_t2_ParamLimits

0x87ef,	// (0x000856b5) main_video_tele_dialer_pane_t2

0x0001,

0xf80c,	// (0x0008c6d2) main_video_tele_dialer_pane_t_ParamLimits

0xf80c,	// (0x0008c6d2) main_video_tele_dialer_pane_t

0x8fce,	// (0x00085e94) cam4_autofocus_pane_ParamLimits

0x8fce,	// (0x00085e94) cam4_autofocus_pane

0x8fe8,	// (0x00085eae) cam4_image_uncrop_pane_ParamLimits

0x8fe8,	// (0x00085eae) cam4_image_uncrop_pane

0x8fff,	// (0x00085ec5) cam4_indicators_pane_ParamLimits

0x8fff,	// (0x00085ec5) cam4_indicators_pane

0x901b,	// (0x00085ee1) main_camera4_pane_g1_ParamLimits

0x901b,	// (0x00085ee1) main_camera4_pane_g1

0x9027,	// (0x00085eed) main_camera4_pane_g2_ParamLimits

0x9027,	// (0x00085eed) main_camera4_pane_g2

0x9027,	// (0x00085eed) main_camera4_pane_g3_ParamLimits

0x9027,	// (0x00085eed) main_camera4_pane_g3

0x9033,	// (0x00085ef9) main_camera4_pane_g4_ParamLimits

0x9033,	// (0x00085ef9) main_camera4_pane_g4

0x903f,	// (0x00085f05) main_camera4_pane_g5_ParamLimits

0x903f,	// (0x00085f05) main_camera4_pane_g5

0x0005,

0xf861,	// (0x0008c727) main_camera4_pane_g_ParamLimits

0xf861,	// (0x0008c727) main_camera4_pane_g

0x9059,	// (0x00085f1f) main_camera4_pane_t1_ParamLimits

0x9059,	// (0x00085f1f) main_camera4_pane_t1

0xdae9,	// (0x0008a9af) bg_tb_trans_pane_cp06

0x90a9,	// (0x00085f6f) cam4_indicators_pane_g1

0x90ba,	// (0x00085f80) cam4_indicators_pane_g2

0x0002,

0xf87c,	// (0x0008c742) cam4_indicators_pane_g

0x90d2,	// (0x00085f98) cam4_indicators_pane_t1

0x90fc,	// (0x00085fc2) main_video4_pane_g1_ParamLimits

0x90fc,	// (0x00085fc2) main_video4_pane_g1

0x9108,	// (0x00085fce) main_video4_pane_g2_ParamLimits

0x9108,	// (0x00085fce) main_video4_pane_g2

0x9114,	// (0x00085fda) main_video4_pane_g3_ParamLimits

0x9114,	// (0x00085fda) main_video4_pane_g3

0x9120,	// (0x00085fe6) main_video4_pane_g4_ParamLimits

0x9120,	// (0x00085fe6) main_video4_pane_g4

0x0004,

0xf883,	// (0x0008c749) main_video4_pane_g_ParamLimits

0xf883,	// (0x0008c749) main_video4_pane_g

0x9140,	// (0x00086006) vid4_indicators_pane_ParamLimits

0x9140,	// (0x00086006) vid4_indicators_pane

0x915f,	// (0x00086025) video4_image_uncrop_cif_pane_ParamLimits

0x915f,	// (0x00086025) video4_image_uncrop_cif_pane

0x916e,	// (0x00086034) video4_image_uncrop_nhd_pane_ParamLimits

0x916e,	// (0x00086034) video4_image_uncrop_nhd_pane

0x8fe8,	// (0x00085eae) video4_image_uncrop_vga_pane_ParamLimits

0x8fe8,	// (0x00085eae) video4_image_uncrop_vga_pane

0x6bb2,	// (0x00083a78) bg_tb_trans_pane_cp07

0x9183,	// (0x00086049) vid4_indicators_pane_g1

0x9197,	// (0x0008605d) vid4_indicators_pane_g2

0x91ab,	// (0x00086071) vid4_indicators_pane_g3

0x0004,

0xf88e,	// (0x0008c754) vid4_indicators_pane_g

0x91d8,	// (0x0008609e) vid4_indicators_pane_t1

0x91ef,	// (0x000860b5) cam4_autofocus_pane_g1

0x91f7,	// (0x000860bd) cam4_autofocus_pane_g2

0x91ff,	// (0x000860c5) cam4_autofocus_pane_g3

0x0002,

0xf899,	// (0x0008c75f) cam4_autofocus_pane_g

0x9207,	// (0x000860cd) cam4_autofocus_pane_g3_copy1

0x880f,	// (0x000856d5) video_down_pane_cp_t1

0x881d,	// (0x000856e3) video_down_pane_cp_t2

0x0001,

0xf811,	// (0x0008c6d7) video_down_pane_cp_t

0x4011,	// (0x00080ed7) popup_vitu2_window_ParamLimits

0x4011,	// (0x00080ed7) popup_vitu2_window

0x920f,	// (0x000860d5) aid_size_cell2_itu2_ParamLimits

0x920f,	// (0x000860d5) aid_size_cell2_itu2

0x9231,	// (0x000860f7) aid_size_cell_itu2_ParamLimits

0x9231,	// (0x000860f7) aid_size_cell_itu2

0x9275,	// (0x0008613b) bg_popup_window_pane_cp09_ParamLimits

0x9275,	// (0x0008613b) bg_popup_window_pane_cp09

0x9283,	// (0x00086149) field_vitu2_entry_pane_ParamLimits

0x9283,	// (0x00086149) field_vitu2_entry_pane

0x92a3,	// (0x00086169) grid_vitu2_function_pane_ParamLimits

0x92a3,	// (0x00086169) grid_vitu2_function_pane

0x92e7,	// (0x000861ad) grid_vitu2_itu_pane_ParamLimits

0x92e7,	// (0x000861ad) grid_vitu2_itu_pane

0x935f,	// (0x00086225) cell_vitu2_itu_pane_ParamLimits

0x935f,	// (0x00086225) cell_vitu2_itu_pane

0x9378,	// (0x0008623e) cell_vitu2_function_pane_ParamLimits

0x9378,	// (0x0008623e) cell_vitu2_function_pane

0x93b9,	// (0x0008627f) bg_popup_call_pane_cp08_ParamLimits

0x93b9,	// (0x0008627f) bg_popup_call_pane_cp08

0x93d0,	// (0x00086296) field_vitu2_entry_pane_g1

0x93dc,	// (0x000862a2) field_vitu2_entry_pane_g2

0x0002,

0xf8a0,	// (0x0008c766) field_vitu2_entry_pane_g

0x93f6,	// (0x000862bc) field_vitu2_entry_pane_t1_ParamLimits

0x93f6,	// (0x000862bc) field_vitu2_entry_pane_t1

0x2345,	// (0x0007f20b) field_vitu2_entry_pane_t2_ParamLimits

0x2345,	// (0x0007f20b) field_vitu2_entry_pane_t2

0x0001,

0xf8a7,	// (0x0008c76d) field_vitu2_entry_pane_t_ParamLimits

0xf8a7,	// (0x0008c76d) field_vitu2_entry_pane_t

0x6eea,	// (0x00083db0) bg_button_pane_cp010_ParamLimits

0x6eea,	// (0x00083db0) bg_button_pane_cp010

0x9431,	// (0x000862f7) cell_vitu2_itu_pane_g1

0x9457,	// (0x0008631d) cell_vitu2_itu_pane_t1_ParamLimits

0x9457,	// (0x0008631d) cell_vitu2_itu_pane_t1

0x3c81,	// (0x00080b47) cell_vitu2_itu_pane_t2_ParamLimits

0x3c81,	// (0x00080b47) cell_vitu2_itu_pane_t2

0x0002,

0xf8b1,	// (0x0008c777) cell_vitu2_itu_pane_t_ParamLimits

0xf8b1,	// (0x0008c777) cell_vitu2_itu_pane_t

0x6bb2,	// (0x00083a78) bg_button_pane_cp011

0x94a3,	// (0x00086369) cell_vitu2_function_pane_g1

0x402b,	// (0x00080ef1) main_myfav_hc_pane

0x8db0,	// (0x00085c76) popup_image3_note_pane_ParamLimits

0x8db0,	// (0x00085c76) popup_image3_note_pane

0x8dbe,	// (0x00085c84) popup_image3_tool_bar_pane_ParamLimits

0x8dbe,	// (0x00085c84) popup_image3_tool_bar_pane

0x3cf7,	// (0x00080bbd) cell_vitu2_itu_pane_t3_ParamLimits

0x3cf7,	// (0x00080bbd) cell_vitu2_itu_pane_t3

0xcdcd,	// (0x00089c93) bg_popup_trans_pane

0x94b7,	// (0x0008637d) grid_image3_tool_bar_pane

0x94c1,	// (0x00086387) bg_popup_trans_pane_g1

0xd94d,	// (0x0008a813) bg_popup_trans_pane_g2

0x94c9,	// (0x0008638f) bg_popup_trans_pane_g3

0x94d1,	// (0x00086397) bg_popup_trans_pane_g4

0x94d9,	// (0x0008639f) bg_popup_trans_pane_g5

0x94e1,	// (0x000863a7) bg_popup_trans_pane_g6

0x94e9,	// (0x000863af) bg_popup_trans_pane_g7

0x94f1,	// (0x000863b7) bg_popup_trans_pane_g8

0xd92d,	// (0x0008a7f3) bg_popup_trans_pane_g9

0x0008,

0xf8b8,	// (0x0008c77e) bg_popup_trans_pane_g

0x94f9,	// (0x000863bf) cell_image3_tool_bar_pane_ParamLimits

0x94f9,	// (0x000863bf) cell_image3_tool_bar_pane

0xd728,	// (0x0008a5ee) cell_image3_tool_bar_pane_g1

0xcdcd,	// (0x00089c93) bg_popup_trans_pane_cp1

0x950d,	// (0x000863d3) popup_image3_note_pane_t1

0x951b,	// (0x000863e1) popup_image3_note_pane_t2

0x9529,	// (0x000863ef) popup_image3_note_pane_t3

0x0002,

0xf8cb,	// (0x0008c791) popup_image3_note_pane_t

0x9537,	// (0x000863fd) popup_image3_note_pane_t3_copy1

0x9545,	// (0x0008640b) bg_myfav_hc_instruction_pane_ParamLimits

0x9545,	// (0x0008640b) bg_myfav_hc_instruction_pane

0x955d,	// (0x00086423) cell_myfav_contact_pane_ParamLimits

0x955d,	// (0x00086423) cell_myfav_contact_pane

0x9577,	// (0x0008643d) cell_myfav_contact_pane_cp1_ParamLimits

0x9577,	// (0x0008643d) cell_myfav_contact_pane_cp1

0x958f,	// (0x00086455) cell_myfav_contact_pane_cp2_ParamLimits

0x958f,	// (0x00086455) cell_myfav_contact_pane_cp2

0x95a7,	// (0x0008646d) cell_myfav_contact_pane_cp3_ParamLimits

0x95a7,	// (0x0008646d) cell_myfav_contact_pane_cp3

0x95be,	// (0x00086484) cell_myfav_contact_pane_cp4_ParamLimits

0x95be,	// (0x00086484) cell_myfav_contact_pane_cp4

0x95d4,	// (0x0008649a) cell_myfav_contact_pane_cp5_ParamLimits

0x95d4,	// (0x0008649a) cell_myfav_contact_pane_cp5

0x95e8,	// (0x000864ae) cell_myfav_contact_pane_cp6_ParamLimits

0x95e8,	// (0x000864ae) cell_myfav_contact_pane_cp6

0x95fc,	// (0x000864c2) cell_myfav_contact_pane_cp7_ParamLimits

0x95fc,	// (0x000864c2) cell_myfav_contact_pane_cp7

0x9614,	// (0x000864da) listscroll_gen_pane_cp05

0x961d,	// (0x000864e3) main_myfav_hc_pane_g1_ParamLimits

0x961d,	// (0x000864e3) main_myfav_hc_pane_g1

0x9633,	// (0x000864f9) main_myfav_hc_pane_g2_ParamLimits

0x9633,	// (0x000864f9) main_myfav_hc_pane_g2

0x0002,

0xf8d2,	// (0x0008c798) main_myfav_hc_pane_g_ParamLimits

0xf8d2,	// (0x0008c798) main_myfav_hc_pane_g

0x9663,	// (0x00086529) main_myfav_hc_pane_t1_ParamLimits

0x9663,	// (0x00086529) main_myfav_hc_pane_t1

0x967a,	// (0x00086540) main_myfav_hc_pane_t2_ParamLimits

0x967a,	// (0x00086540) main_myfav_hc_pane_t2

0x968c,	// (0x00086552) main_myfav_hc_pane_t3_ParamLimits

0x968c,	// (0x00086552) main_myfav_hc_pane_t3

0x969e,	// (0x00086564) main_myfav_hc_pane_t4_ParamLimits

0x969e,	// (0x00086564) main_myfav_hc_pane_t4

0x0004,

0xf8d9,	// (0x0008c79f) main_myfav_hc_pane_t_ParamLimits

0xf8d9,	// (0x0008c79f) main_myfav_hc_pane_t

0xd728,	// (0x0008a5ee) bg_myfav_hc_instruction_pane_g1

0x96c8,	// (0x0008658e) cell_myfav_contact_pane_g1_ParamLimits

0x96c8,	// (0x0008658e) cell_myfav_contact_pane_g1

0x96c8,	// (0x0008658e) cell_myfav_contact_pane_g2_ParamLimits

0x96c8,	// (0x0008658e) cell_myfav_contact_pane_g2

0x96d4,	// (0x0008659a) cell_myfav_contact_pane_g3_ParamLimits

0x96d4,	// (0x0008659a) cell_myfav_contact_pane_g3

0xd4dc,	// (0x0008a3a2) cell_myfav_contact_pane_g4_ParamLimits

0xd4dc,	// (0x0008a3a2) cell_myfav_contact_pane_g4

0x96e1,	// (0x000865a7) cell_myfav_contact_pane_g5_ParamLimits

0x96e1,	// (0x000865a7) cell_myfav_contact_pane_g5

0x0004,

0xf8e4,	// (0x0008c7aa) cell_myfav_contact_pane_g_ParamLimits

0xf8e4,	// (0x0008c7aa) cell_myfav_contact_pane_g

0x964b,	// (0x00086511) main_myfav_hc_pane_g3_ParamLimits

0x964b,	// (0x00086511) main_myfav_hc_pane_g3

0x3f1a,	// (0x00080de0) popup_adpt_find_window

0x96ed,	// (0x000865b3) afind_page_pane_ParamLimits

0x96ed,	// (0x000865b3) afind_page_pane

0x96fa,	// (0x000865c0) aid_size_cell_afind_ParamLimits

0x96fa,	// (0x000865c0) aid_size_cell_afind

0x9714,	// (0x000865da) bg_popup_sub_pane_cp09_ParamLimits

0x9714,	// (0x000865da) bg_popup_sub_pane_cp09

0x9721,	// (0x000865e7) find_pane_cp01_ParamLimits

0x9721,	// (0x000865e7) find_pane_cp01

0x972e,	// (0x000865f4) grid_afind_control_pane_ParamLimits

0x972e,	// (0x000865f4) grid_afind_control_pane

0x9742,	// (0x00086608) grid_afind_pane_ParamLimits

0x9742,	// (0x00086608) grid_afind_pane

0x975c,	// (0x00086622) cell_afind_pane_ParamLimits

0x975c,	// (0x00086622) cell_afind_pane

0xd728,	// (0x0008a5ee) afind_page_pane_g1

0x97a4,	// (0x0008666a) afind_page_pane_g2

0x97ad,	// (0x00086673) afind_page_pane_g3

0x0002,

0xf8ef,	// (0x0008c7b5) afind_page_pane_g

0x97b6,	// (0x0008667c) afind_page_pane_t1

0x97d6,	// (0x0008669c) cell_afind_grid_control_pane_ParamLimits

0x97d6,	// (0x0008669c) cell_afind_grid_control_pane

0x8bfe,	// (0x00085ac4) bg_button_pane_cp69_ParamLimits

0x8bfe,	// (0x00085ac4) bg_button_pane_cp69

0x97e5,	// (0x000866ab) cell_afind_pane_g1_ParamLimits

0x97e5,	// (0x000866ab) cell_afind_pane_g1

0x97f2,	// (0x000866b8) cell_afind_pane_t1_ParamLimits

0x97f2,	// (0x000866b8) cell_afind_pane_t1

0xd732,	// (0x0008a5f8) bg_button_pane_cp72

0x9804,	// (0x000866ca) cell_afind_grid_control_pane_g1

0x66e3,	// (0x000835a9) aid_image_placing_area_ParamLimits

0x66e3,	// (0x000835a9) aid_image_placing_area

0xd4ce,	// (0x0008a394) field_vitu_entry_pane_g1_ParamLimits

0xd4ce,	// (0x0008a394) field_vitu_entry_pane_g1

0xd4ce,	// (0x0008a394) field_vitu_entry_pane_g2_ParamLimits

0xd4ce,	// (0x0008a394) field_vitu_entry_pane_g2

0x0001,

0xf1e7,	// (0x0008c0ad) field_vitu_entry_pane_g_ParamLimits

0xf1e7,	// (0x0008c0ad) field_vitu_entry_pane_g

0x84b9,	// (0x0008537f) cell_vitu_itu_pane_g1_ParamLimits

0x7eca,	// (0x00084d90) cell_vitu_itu_pane_t3_ParamLimits

0x7eca,	// (0x00084d90) cell_vitu_itu_pane_t3

0x8b31,	// (0x000859f7) mp4_progress_pane_t1_ParamLimits

0x8b4a,	// (0x00085a10) mp4_progress_pane_t2_ParamLimits

0xf835,	// (0x0008c6fb) mp4_progress_pane_t_ParamLimits

0x8b63,	// (0x00085a29) mup_progress_pane_cp04_ParamLimits

0x96b2,	// (0x00086578) main_myfav_hc_pane_t5_ParamLimits

0x96b2,	// (0x00086578) main_myfav_hc_pane_t5

0x3c79,	// (0x00080b3f) aid_zoom_text_primary

0x3f1a,	// (0x00080de0) popup_adpt_find_window_ParamLimits

0x6bb2,	// (0x00083a78) main_cam_set_pane

0x900d,	// (0x00085ed3) cam4_zoom_pane_ParamLimits

0x900d,	// (0x00085ed3) cam4_zoom_pane

0x980d,	// (0x000866d3) main_cam_set_pane_g1_ParamLimits

0x980d,	// (0x000866d3) main_cam_set_pane_g1

0x981b,	// (0x000866e1) main_cam_set_pane_g2_ParamLimits

0x981b,	// (0x000866e1) main_cam_set_pane_g2

0x0001,

0xf8f6,	// (0x0008c7bc) main_cam_set_pane_g_ParamLimits

0xf8f6,	// (0x0008c7bc) main_cam_set_pane_g

0x9827,	// (0x000866ed) main_cam_set_pane_t1_ParamLimits

0x9827,	// (0x000866ed) main_cam_set_pane_t1

0x9843,	// (0x00086709) main_cset_listscroll_pane_ParamLimits

0x9843,	// (0x00086709) main_cset_listscroll_pane

0x9875,	// (0x0008673b) main_cset_slider_pane_ParamLimits

0x9875,	// (0x0008673b) main_cset_slider_pane

0x989c,	// (0x00086762) main_cset_list_pane_ParamLimits

0x989c,	// (0x00086762) main_cset_list_pane

0x98ac,	// (0x00086772) scroll_pane_cp028

0x98b5,	// (0x0008677b) aid_area_touch_slider

0x98d1,	// (0x00086797) cset_slider_pane

0x98f4,	// (0x000867ba) main_cset_slider_pane_g1

0x9909,	// (0x000867cf) main_cset_slider_pane_g2

0x0011,

0xf8fb,	// (0x0008c7c1) main_cset_slider_pane_g

0x99ff,	// (0x000868c5) main_cset_slider_pane_t1

0x9a27,	// (0x000868ed) main_cset_slider_pane_t2

0x9a41,	// (0x00086907) main_cset_slider_pane_t3

0x9a5b,	// (0x00086921) main_cset_slider_pane_t4

0x9a79,	// (0x0008693f) main_cset_slider_pane_t5

0x9a97,	// (0x0008695d) main_cset_slider_pane_t6

0x9aae,	// (0x00086974) main_cset_slider_pane_t7

0x000e,

0xf920,	// (0x0008c7e6) main_cset_slider_pane_t

0x9c2e,	// (0x00086af4) cset_list_set_pane_ParamLimits

0x9c2e,	// (0x00086af4) cset_list_set_pane

0xdaf7,	// (0x0008a9bd) aid_position_infowindow_above

0xdaff,	// (0x0008a9c5) aid_position_infowindow_below

0x9c47,	// (0x00086b0d) cset_list_set_pane_g1_ParamLimits

0x9c47,	// (0x00086b0d) cset_list_set_pane_g1

0x9c53,	// (0x00086b19) cset_list_set_pane_g3_ParamLimits

0x9c53,	// (0x00086b19) cset_list_set_pane_g3

0x0001,

0xf93f,	// (0x0008c805) cset_list_set_pane_g_ParamLimits

0xf93f,	// (0x0008c805) cset_list_set_pane_g

0x9c62,	// (0x00086b28) cset_list_set_pane_t1_ParamLimits

0x9c62,	// (0x00086b28) cset_list_set_pane_t1

0xd467,	// (0x0008a32d) list_highlight_pane_cp021_ParamLimits

0xd467,	// (0x0008a32d) list_highlight_pane_cp021

0x0a44,	// (0x0007d90a) cset_slider_pane_g1

0x0a56,	// (0x0007d91c) cset_slider_pane_g2

0x0a4d,	// (0x0007d913) cset_slider_pane_g3

0x0002,

0xf944,	// (0x0008c80a) cset_slider_pane_g

0x9c77,	// (0x00086b3d) aid_area_touch_cam4_zoom

0x9c7f,	// (0x00086b45) cam4_zoom_cont_pane

0x9c87,	// (0x00086b4d) cam4_zoom_pane_g1

0x9c8f,	// (0x00086b55) cam4_zoom_pane_g2

0x9c97,	// (0x00086b5d) cam4_zoom_pane_g3

0x0002,

0xf94b,	// (0x0008c811) cam4_zoom_pane_g

0x9c9f,	// (0x00086b65) cam4_zoom_cont_pane_g1

0x9ca8,	// (0x00086b6e) cam4_zoom_cont_pane_g2

0x9cb1,	// (0x00086b77) cam4_zoom_cont_pane_g3

0x0002,

0xf952,	// (0x0008c818) cam4_zoom_cont_pane_g

0x8e07,	// (0x00085ccd) call4_image_pane_ParamLimits

0x8e07,	// (0x00085ccd) call4_image_pane

0x8e66,	// (0x00085d2c) call4_windows_conf_pane_ParamLimits

0x8ea9,	// (0x00085d6f) popup_call4_audio_in_window_ParamLimits

0x8ea9,	// (0x00085d6f) popup_call4_audio_in_window

0xcdcd,	// (0x00089c93) bg_popup_call2_act_pane_cp02

0x8f72,	// (0x00085e38) call4_list_conf_pane

0xd728,	// (0x0008a5ee) call4_image_pane_g1

0xd728,	// (0x0008a5ee) call4_image_pane_g2

0x0001,

0xf3c3,	// (0x0008c289) call4_image_pane_g

0xdb07,	// (0x0008a9cd) list_single_graphic_popup_conf4_pane_ParamLimits

0xdb07,	// (0x0008a9cd) list_single_graphic_popup_conf4_pane

0xcdcd,	// (0x00089c93) list_highlight_pane_cp022

0xdb1a,	// (0x0008a9e0) list_single_graphic_popup_conf4_pane_g1

0x0643,	// (0x0007d509) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf959,	// (0x0008c81f) list_single_graphic_popup_conf4_pane_g

0xdb22,	// (0x0008a9e8) list_single_graphic_popup_conf4_pane_t1

0x4cd1,	// (0x00081b97) popup_vtel_slider_window_ParamLimits

0x4cd1,	// (0x00081b97) popup_vtel_slider_window

0x8bd7,	// (0x00085a9d) dialer2_ne_pane_t2_ParamLimits

0x8bd7,	// (0x00085a9d) dialer2_ne_pane_t2

0x0001,

0xf83a,	// (0x0008c700) dialer2_ne_pane_t_ParamLimits

0xf83a,	// (0x0008c700) dialer2_ne_pane_t

0xd467,	// (0x0008a32d) bg_popup_sub_pane_cp010_ParamLimits

0xd467,	// (0x0008a32d) bg_popup_sub_pane_cp010

0x9cba,	// (0x00086b80) popup_vtel_slider_window_g1_ParamLimits

0x9cba,	// (0x00086b80) popup_vtel_slider_window_g1

0x9cc6,	// (0x00086b8c) popup_vtel_slider_window_g2_ParamLimits

0x9cc6,	// (0x00086b8c) popup_vtel_slider_window_g2

0x0003,

0xf95e,	// (0x0008c824) popup_vtel_slider_window_g_ParamLimits

0xf95e,	// (0x0008c824) popup_vtel_slider_window_g

0x9d0e,	// (0x00086bd4) vtel_slider_pane_ParamLimits

0x9d0e,	// (0x00086bd4) vtel_slider_pane

0x9d1d,	// (0x00086be3) vtel_slider_pane_g1_ParamLimits

0x9d1d,	// (0x00086be3) vtel_slider_pane_g1

0x9d2a,	// (0x00086bf0) vtel_slider_pane_g2_ParamLimits

0x9d2a,	// (0x00086bf0) vtel_slider_pane_g2

0x9d37,	// (0x00086bfd) vtel_slider_pane_g3_ParamLimits

0x9d37,	// (0x00086bfd) vtel_slider_pane_g3

0x9d1d,	// (0x00086be3) vtel_slider_pane_g4_ParamLimits

0x9d1d,	// (0x00086be3) vtel_slider_pane_g4

0x9d44,	// (0x00086c0a) vtel_slider_pane_g5_ParamLimits

0x9d44,	// (0x00086c0a) vtel_slider_pane_g5

0x0004,

0xf967,	// (0x0008c82d) vtel_slider_pane_g_ParamLimits

0xf967,	// (0x0008c82d) vtel_slider_pane_g

0x6bb2,	// (0x00083a78) main_gallery2_pane

0x9257,	// (0x0008611d) aid_size_row_itut2_dropdow_list_ParamLimits

0x9257,	// (0x0008611d) aid_size_row_itut2_dropdow_list

0x92c5,	// (0x0008618b) grid_vitu2_function_top_pane_ParamLimits

0x92c5,	// (0x0008618b) grid_vitu2_function_top_pane

0x931f,	// (0x000861e5) popup_vitu2_dropdown_list_window_ParamLimits

0x931f,	// (0x000861e5) popup_vitu2_dropdown_list_window

0x933d,	// (0x00086203) popup_vitu2_match_list_window

0x9d51,	// (0x00086c17) cell_vitu2_function_top_pane_ParamLimits

0x9d51,	// (0x00086c17) cell_vitu2_function_top_pane

0x9d6b,	// (0x00086c31) cell_vitu2_function_top_pane_cp01_ParamLimits

0x9d6b,	// (0x00086c31) cell_vitu2_function_top_pane_cp01

0x9d87,	// (0x00086c4d) cell_vitu2_function_top_wide_pane_ParamLimits

0x9d87,	// (0x00086c4d) cell_vitu2_function_top_wide_pane

0x6bb2,	// (0x00083a78) bg_button_pane_cp012

0x9da5,	// (0x00086c6b) cell_vitu2_function_top_pane_g1

0x9db9,	// (0x00086c7f) bg_button_pane_cp013_ParamLimits

0x9db9,	// (0x00086c7f) bg_button_pane_cp013

0x9dd5,	// (0x00086c9b) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x9dd5,	// (0x00086c9b) cell_vitu2_function_top_wide_pane_g1

0x4011,	// (0x00080ed7) bg_popup_sub_pane_cp20

0x9ded,	// (0x00086cb3) list_vitu2_match_list_pane

0x94c1,	// (0x00086387) bg_popup_sub_pane_cp20_g1

0x94c9,	// (0x0008638f) bg_popup_sub_pane_cp20_g2

0xd94d,	// (0x0008a813) bg_popup_sub_pane_cp20_g3

0x94d1,	// (0x00086397) bg_popup_sub_pane_cp20_g4

0xd92d,	// (0x0008a7f3) bg_popup_sub_pane_cp20_g5

0xdb38,	// (0x0008a9fe) bg_popup_sub_pane_cp20_g6

0x94e1,	// (0x000863a7) bg_popup_sub_pane_cp20_g7

0x94e9,	// (0x000863af) bg_popup_sub_pane_cp20_g8

0x94f1,	// (0x000863b7) bg_popup_sub_pane_cp20_g9

0x0008,

0xf972,	// (0x0008c838) bg_popup_sub_pane_cp20_g

0x9e05,	// (0x00086ccb) list_vitu2_match_list_item_pane_ParamLimits

0x9e05,	// (0x00086ccb) list_vitu2_match_list_item_pane

0x9e17,	// (0x00086cdd) list_vitu2_match_list_item_pane_t1

0x402b,	// (0x00080ef1) bg_popup_sub_pane_cp21

0xd6f2,	// (0x0008a5b8) grid_vitu2_dropdown_list_pane

0x9e25,	// (0x00086ceb) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x9e25,	// (0x00086ceb) cell_vitu2_dropdown_list_char_pane

0x9e45,	// (0x00086d0b) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x9e45,	// (0x00086d0b) cell_vitu2_dropdown_list_ctrl_pane

0xdb40,	// (0x0008aa06) cell_vitu2_dropdown_list_char_pane_g1

0xdb49,	// (0x0008aa0f) cell_vitu2_dropdown_list_char_pane_g2

0xdb52,	// (0x0008aa18) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf985,	// (0x0008c84b) cell_vitu2_dropdown_list_char_pane_g

0x9e6d,	// (0x00086d33) cell_vitu2_dropdown_list_char_pane_t1

0x9e7b,	// (0x00086d41) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x9e7b,	// (0x00086d41) cell_vitu2_dropdown_list_ctrl_pane_g1

0x9e88,	// (0x00086d4e) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x9e88,	// (0x00086d4e) cell_vitu2_dropdown_list_ctrl_pane_g2

0x9e95,	// (0x00086d5b) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x9e95,	// (0x00086d5b) cell_vitu2_dropdown_list_ctrl_pane_g3

0x9ea2,	// (0x00086d68) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x9ea2,	// (0x00086d68) cell_vitu2_dropdown_list_ctrl_pane_g4

0xdae9,	// (0x0008a9af) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xdae9,	// (0x0008a9af) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf98c,	// (0x0008c852) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf98c,	// (0x0008c852) cell_vitu2_dropdown_list_ctrl_pane_g

0x9ebe,	// (0x00086d84) aid_size_cell_gallery2_ParamLimits

0x9ebe,	// (0x00086d84) aid_size_cell_gallery2

0x9ed8,	// (0x00086d9e) grid_gallery2_pane_ParamLimits

0x9ed8,	// (0x00086d9e) grid_gallery2_pane

0x9eef,	// (0x00086db5) scroll_pane_cp029_ParamLimits

0x9eef,	// (0x00086db5) scroll_pane_cp029

0x9eff,	// (0x00086dc5) cell_gallery2_pane_ParamLimits

0x9eff,	// (0x00086dc5) cell_gallery2_pane

0xdb5b,	// (0x0008aa21) cell_gallery2_pane_g2

0x9f54,	// (0x00086e1a) cell_gallery2_pane_g3

0xdb63,	// (0x0008aa29) cell_gallery2_pane_g4

0xdb6b,	// (0x0008aa31) cell_gallery2_pane_g5

0xd6f2,	// (0x0008a5b8) grid_highlight_pane_cp10

0x933d,	// (0x00086203) popup_vitu2_match_list_window_ParamLimits

0x934f,	// (0x00086215) popup_vitu2_query_window_ParamLimits

0x934f,	// (0x00086215) popup_vitu2_query_window

0x402b,	// (0x00080ef1) bg_vitu2_candi_button_pane

0xdb40,	// (0x0008aa06) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xdb49,	// (0x0008aa0f) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xdb52,	// (0x0008aa18) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x9f5c,	// (0x00086e22) bg_button_pane_cp015

0x9f71,	// (0x00086e37) bg_button_pane_cp016

0x9f7d,	// (0x00086e43) bg_button_pane_cp017

0x09d4,	// (0x0007d89a) bg_popup_sub_pane_cp22

0xdb73,	// (0x0008aa39) popup_vitu2_query_window_g1

0x9fbd,	// (0x00086e83) popup_vitu2_query_window_g2

0x0002,

0xf997,	// (0x0008c85d) popup_vitu2_query_window_g

0x9fe1,	// (0x00086ea7) popup_vitu2_query_window_t1_ParamLimits

0x9fe1,	// (0x00086ea7) popup_vitu2_query_window_t1

0xa014,	// (0x00086eda) popup_vitu2_query_window_t2_ParamLimits

0xa014,	// (0x00086eda) popup_vitu2_query_window_t2

0xa026,	// (0x00086eec) popup_vitu2_query_window_t3_ParamLimits

0xa026,	// (0x00086eec) popup_vitu2_query_window_t3

0xa04e,	// (0x00086f14) popup_vitu2_query_window_t4_ParamLimits

0xa04e,	// (0x00086f14) popup_vitu2_query_window_t4

0xa062,	// (0x00086f28) popup_vitu2_query_window_t5_ParamLimits

0xa062,	// (0x00086f28) popup_vitu2_query_window_t5

0x0006,

0xf99e,	// (0x0008c864) popup_vitu2_query_window_t_ParamLimits

0xf99e,	// (0x0008c864) popup_vitu2_query_window_t

0x9894,	// (0x0008675a) main_cset_text_pane

0x98b5,	// (0x0008677b) aid_area_touch_slider_ParamLimits

0x98d1,	// (0x00086797) cset_slider_pane_ParamLimits

0x98f4,	// (0x000867ba) main_cset_slider_pane_g1_ParamLimits

0x9909,	// (0x000867cf) main_cset_slider_pane_g2_ParamLimits

0x991e,	// (0x000867e4) main_cset_slider_pane_g3_ParamLimits

0x991e,	// (0x000867e4) main_cset_slider_pane_g3

0x992a,	// (0x000867f0) main_cset_slider_pane_g4_ParamLimits

0x992a,	// (0x000867f0) main_cset_slider_pane_g4

0x9939,	// (0x000867ff) main_cset_slider_pane_g5_ParamLimits

0x9939,	// (0x000867ff) main_cset_slider_pane_g5

0x9947,	// (0x0008680d) main_cset_slider_pane_g6_ParamLimits

0x9947,	// (0x0008680d) main_cset_slider_pane_g6

0xf8fb,	// (0x0008c7c1) main_cset_slider_pane_g_ParamLimits

0x99ff,	// (0x000868c5) main_cset_slider_pane_t1_ParamLimits

0x9a27,	// (0x000868ed) main_cset_slider_pane_t2_ParamLimits

0x9a41,	// (0x00086907) main_cset_slider_pane_t3_ParamLimits

0x9a5b,	// (0x00086921) main_cset_slider_pane_t4_ParamLimits

0x9a79,	// (0x0008693f) main_cset_slider_pane_t5_ParamLimits

0x9a97,	// (0x0008695d) main_cset_slider_pane_t6_ParamLimits

0x9aae,	// (0x00086974) main_cset_slider_pane_t7_ParamLimits

0x9adc,	// (0x000869a2) main_cset_slider_pane_t8_ParamLimits

0x9adc,	// (0x000869a2) main_cset_slider_pane_t8

0x9b04,	// (0x000869ca) main_cset_slider_pane_t9_ParamLimits

0x9b04,	// (0x000869ca) main_cset_slider_pane_t9

0x9b2c,	// (0x000869f2) main_cset_slider_pane_t10_ParamLimits

0x9b2c,	// (0x000869f2) main_cset_slider_pane_t10

0x9b54,	// (0x00086a1a) main_cset_slider_pane_t11_ParamLimits

0x9b54,	// (0x00086a1a) main_cset_slider_pane_t11

0x9b7e,	// (0x00086a44) main_cset_slider_pane_t12_ParamLimits

0x9b7e,	// (0x00086a44) main_cset_slider_pane_t12

0x9b9d,	// (0x00086a63) main_cset_slider_pane_t13_ParamLimits

0x9b9d,	// (0x00086a63) main_cset_slider_pane_t13

0xf920,	// (0x0008c7e6) main_cset_slider_pane_t_ParamLimits

0xcdcd,	// (0x00089c93) bg_popup_sub_pane_cp011

0xdb7f,	// (0x0008aa45) main_cset_text_pane_g1

0xdb87,	// (0x0008aa4d) main_cset_text_pane_t1

0xdb95,	// (0x0008aa5b) main_cset_text_pane_t2

0xdba3,	// (0x0008aa69) main_cset_text_pane_t3

0xdbb1,	// (0x0008aa77) main_cset_text_pane_t4

0xdbbf,	// (0x0008aa85) main_cset_text_pane_t5

0xdbcd,	// (0x0008aa93) main_cset_text_pane_t6

0xdbdb,	// (0x0008aaa1) main_cset_text_pane_t7

0x0006,

0xf9ad,	// (0x0008c873) main_cset_text_pane_t

0x402b,	// (0x00080ef1) main_cam4_burst_pane

0x402b,	// (0x00080ef1) main_cam5_pane

0x97c4,	// (0x0008668a) bg_button_pane_cp019

0x97cd,	// (0x00086693) bg_button_pane_cp020

0x995b,	// (0x00086821) main_cset_slider_pane_g7_ParamLimits

0x995b,	// (0x00086821) main_cset_slider_pane_g7

0x9967,	// (0x0008682d) main_cset_slider_pane_g8_ParamLimits

0x9967,	// (0x0008682d) main_cset_slider_pane_g8

0x9973,	// (0x00086839) main_cset_slider_pane_g9_ParamLimits

0x9973,	// (0x00086839) main_cset_slider_pane_g9

0x997f,	// (0x00086845) main_cset_slider_pane_g10_ParamLimits

0x997f,	// (0x00086845) main_cset_slider_pane_g10

0x998b,	// (0x00086851) main_cset_slider_pane_g11_ParamLimits

0x998b,	// (0x00086851) main_cset_slider_pane_g11

0x9997,	// (0x0008685d) main_cset_slider_pane_g12_ParamLimits

0x9997,	// (0x0008685d) main_cset_slider_pane_g12

0x99a3,	// (0x00086869) main_cset_slider_pane_g13_ParamLimits

0x99a3,	// (0x00086869) main_cset_slider_pane_g13

0x99b1,	// (0x00086877) main_cset_slider_pane_g14_ParamLimits

0x99b1,	// (0x00086877) main_cset_slider_pane_g14

0x99bf,	// (0x00086885) main_cset_slider_pane_g15_ParamLimits

0x99bf,	// (0x00086885) main_cset_slider_pane_g15

0x9bbc,	// (0x00086a82) main_cset_slider_pane_t14_ParamLimits

0x9bbc,	// (0x00086a82) main_cset_slider_pane_t14

0x9bf5,	// (0x00086abb) main_cset_slider_pane_t15_ParamLimits

0x9bf5,	// (0x00086abb) main_cset_slider_pane_t15

0xa0cc,	// (0x00086f92) aid_cam4_burst_size_cell_ParamLimits

0xa0cc,	// (0x00086f92) aid_cam4_burst_size_cell

0xa0e8,	// (0x00086fae) grid_cam4_burst_pane_ParamLimits

0xa0e8,	// (0x00086fae) grid_cam4_burst_pane

0xa118,	// (0x00086fde) linegrid_cam4_burst_pane_ParamLimits

0xa118,	// (0x00086fde) linegrid_cam4_burst_pane

0xa138,	// (0x00086ffe) scroll_pane_cp30_ParamLimits

0xa138,	// (0x00086ffe) scroll_pane_cp30

0xa144,	// (0x0008700a) cell_cam4_burst_pane_ParamLimits

0xa144,	// (0x0008700a) cell_cam4_burst_pane

0xdbe9,	// (0x0008aaaf) linegrid_cam4_burst_pane_g1_ParamLimits

0xdbe9,	// (0x0008aaaf) linegrid_cam4_burst_pane_g1

0xa180,	// (0x00087046) linegrid_cam4_burst_pane_g2_ParamLimits

0xa180,	// (0x00087046) linegrid_cam4_burst_pane_g2

0xdbf6,	// (0x0008aabc) linegrid_cam4_burst_pane_g3_ParamLimits

0xdbf6,	// (0x0008aabc) linegrid_cam4_burst_pane_g3

0x0002,

0xf9bc,	// (0x0008c882) linegrid_cam4_burst_pane_g_ParamLimits

0xf9bc,	// (0x0008c882) linegrid_cam4_burst_pane_g

0xa191,	// (0x00087057) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xa191,	// (0x00087057) linegrid_cam4_burst_pane_g3_copy1

0xdc03,	// (0x0008aac9) linegrid_cam4_burst_pane_g4_ParamLimits

0xdc03,	// (0x0008aac9) linegrid_cam4_burst_pane_g4

0xa1ab,	// (0x00087071) linegrid_cam4_burst_pane_g5_ParamLimits

0xa1ab,	// (0x00087071) linegrid_cam4_burst_pane_g5

0xa1bc,	// (0x00087082) linegrid_cam4_burst_pane_g6_ParamLimits

0xa1bc,	// (0x00087082) linegrid_cam4_burst_pane_g6

0xdc10,	// (0x0008aad6) linegrid_cam4_burst_pane_g7_ParamLimits

0xdc10,	// (0x0008aad6) linegrid_cam4_burst_pane_g7

0xa1cd,	// (0x00087093) cell_cam4_burst_pane_g1

0xdc29,	// (0x0008aaef) main_cam5_pane_t1_ParamLimits

0xdc29,	// (0x0008aaef) main_cam5_pane_t1

0xdc3b,	// (0x0008ab01) main_cam5_pane_t2_ParamLimits

0xdc3b,	// (0x0008ab01) main_cam5_pane_t2

0xdc4d,	// (0x0008ab13) main_cam5_pane_t3_ParamLimits

0xdc4d,	// (0x0008ab13) main_cam5_pane_t3

0xdc5f,	// (0x0008ab25) main_cam5_pane_t4_ParamLimits

0xdc5f,	// (0x0008ab25) main_cam5_pane_t4

0xdc77,	// (0x0008ab3d) main_cam5_pane_t5_ParamLimits

0xdc77,	// (0x0008ab3d) main_cam5_pane_t5

0xdc8b,	// (0x0008ab51) main_cam5_pane_t6_ParamLimits

0xdc8b,	// (0x0008ab51) main_cam5_pane_t6

0xdc9f,	// (0x0008ab65) main_cam5_pane_t7_ParamLimits

0xdc9f,	// (0x0008ab65) main_cam5_pane_t7

0xdcb1,	// (0x0008ab77) main_cam5_pane_t8_ParamLimits

0xdcb1,	// (0x0008ab77) main_cam5_pane_t8

0xdccd,	// (0x0008ab93) main_cam5_pane_t9_ParamLimits

0xdccd,	// (0x0008ab93) main_cam5_pane_t9

0xdcdf,	// (0x0008aba5) main_cam5_pane_t10_ParamLimits

0xdcdf,	// (0x0008aba5) main_cam5_pane_t10

0xdcf1,	// (0x0008abb7) main_cam5_pane_t11_ParamLimits

0xdcf1,	// (0x0008abb7) main_cam5_pane_t11

0xdd03,	// (0x0008abc9) main_cam5_pane_t12_ParamLimits

0xdd03,	// (0x0008abc9) main_cam5_pane_t12

0xdd18,	// (0x0008abde) main_cam5_pane_t13_ParamLimits

0xdd18,	// (0x0008abde) main_cam5_pane_t13

0x000c,

0xf9c8,	// (0x0008c88e) main_cam5_pane_t_ParamLimits

0xf9c8,	// (0x0008c88e) main_cam5_pane_t

0x3fd0,	// (0x00080e96) popup_scut_keymap_window_ParamLimits

0x3fd0,	// (0x00080e96) popup_scut_keymap_window

0xa1e0,	// (0x000870a6) aid_size_cell_brow_shortcut

0xd6f2,	// (0x0008a5b8) bg_popup_window_pane_cp010

0xa1ec,	// (0x000870b2) grid_scut_pane

0xa1f8,	// (0x000870be) cell_scut_pane_ParamLimits

0xa1f8,	// (0x000870be) cell_scut_pane

0xa20f,	// (0x000870d5) cell_scut_pane_g1

0xdd35,	// (0x0008abfb) cell_scut_pane_t1

0xdd44,	// (0x0008ac0a) cell_scut_pane_t2

0xa218,	// (0x000870de) cell_scut_pane_t3

0x0002,

0xf9e3,	// (0x0008c8a9) cell_scut_pane_t

0x796d,	// (0x00084833) main_mup3_pane_g8_ParamLimits

0x796d,	// (0x00084833) main_mup3_pane_g8

0x9265,	// (0x0008612b) area_vitu2_query_pane_ParamLimits

0x9265,	// (0x0008612b) area_vitu2_query_pane

0x9f89,	// (0x00086e4f) input_focus_pane_cp08

0xdd53,	// (0x0008ac19) area_vitu2_query_pane_g1

0xa226,	// (0x000870ec) area_vitu2_query_pane_g2

0x0001,

0xf9ea,	// (0x0008c8b0) area_vitu2_query_pane_g

0xa237,	// (0x000870fd) area_vitu2_query_pane_t1_ParamLimits

0xa237,	// (0x000870fd) area_vitu2_query_pane_t1

0xa24b,	// (0x00087111) area_vitu2_query_pane_t2_ParamLimits

0xa24b,	// (0x00087111) area_vitu2_query_pane_t2

0xa25f,	// (0x00087125) area_vitu2_query_pane_t3_ParamLimits

0xa25f,	// (0x00087125) area_vitu2_query_pane_t3

0x2362,	// (0x0007f228) area_vitu2_query_pane_t4_ParamLimits

0x2362,	// (0x0007f228) area_vitu2_query_pane_t4

0x238a,	// (0x0007f250) area_vitu2_query_pane_t5_ParamLimits

0x238a,	// (0x0007f250) area_vitu2_query_pane_t5

0x23b2,	// (0x0007f278) area_vitu2_query_pane_t6_ParamLimits

0x23b2,	// (0x0007f278) area_vitu2_query_pane_t6

0x0006,

0xf9ef,	// (0x0008c8b5) area_vitu2_query_pane_t_ParamLimits

0xf9ef,	// (0x0008c8b5) area_vitu2_query_pane_t

0x9f71,	// (0x00086e37) bg_button_pane_cp018

0xa287,	// (0x0008714d) bg_button_pane_cp021

0xa293,	// (0x00087159) bg_button_pane_cp022

0xa2b6,	// (0x0008717c) input_focus_pane_cp09

0x0752,	// (0x0007d618) aid_size_touch_mv_arrow_left

0x077d,	// (0x0007d643) aid_size_touch_mv_arrow_right

0x99d7,	// (0x0008689d) main_cset_slider_pane_g16_ParamLimits

0x99d7,	// (0x0008689d) main_cset_slider_pane_g16

0x99e5,	// (0x000868ab) main_cset_slider_pane_g17_ParamLimits

0x99e5,	// (0x000868ab) main_cset_slider_pane_g17

0xa1cd,	// (0x00087093) cell_cam4_burst_pane_g1_ParamLimits

0xcdcd,	// (0x00089c93) compa_mode_pane

0x9cd2,	// (0x00086b98) popup_vtel_slider_window_g3_ParamLimits

0x9cd2,	// (0x00086b98) popup_vtel_slider_window_g3

0x9ce6,	// (0x00086bac) popup_vtel_slider_window_g4_ParamLimits

0x9ce6,	// (0x00086bac) popup_vtel_slider_window_g4

0x9cfa,	// (0x00086bc0) popup_vtel_slider_window_t1_ParamLimits

0x9cfa,	// (0x00086bc0) popup_vtel_slider_window_t1

0x402b,	// (0x00080ef1) main_cl_pane

0x6c4c,	// (0x00083b12) popup_imed_adjust2_window_ParamLimits

0x09d4,	// (0x0007d89a) bg_tb_trans_pane_cp05_ParamLimits

0x832b,	// (0x000851f1) popup_imed_adjust2_window_g1_ParamLimits

0x833a,	// (0x00085200) popup_imed_adjust2_window_g2_ParamLimits

0x833a,	// (0x00085200) popup_imed_adjust2_window_g2

0x8346,	// (0x0008520c) popup_imed_adjust2_window_g3_ParamLimits

0x8346,	// (0x0008520c) popup_imed_adjust2_window_g3

0x0002,

0xf765,	// (0x0008c62b) popup_imed_adjust2_window_g_ParamLimits

0xf765,	// (0x0008c62b) popup_imed_adjust2_window_g

0x8352,	// (0x00085218) popup_imed_adjust2_window_t1_ParamLimits

0x836a,	// (0x00085230) slider_imed_adjust_pane_ParamLimits

0x837e,	// (0x00085244) slider_imed_adjust_pane_g1_ParamLimits

0x838e,	// (0x00085254) slider_imed_adjust_pane_g2_ParamLimits

0x839e,	// (0x00085264) slider_imed_adjust_pane_g3_ParamLimits

0x83af,	// (0x00085275) slider_imed_adjust_pane_g4_ParamLimits

0xf76c,	// (0x0008c632) slider_imed_adjust_pane_g_ParamLimits

0x8fb6,	// (0x00085e7c) aid_touch_area_cam4_ParamLimits

0x8fb6,	// (0x00085e7c) aid_touch_area_cam4

0x8fc6,	// (0x00085e8c) battery_pane_cp01

0x904d,	// (0x00085f13) main_camera4_pane_g6_ParamLimits

0x904d,	// (0x00085f13) main_camera4_pane_g6

0x906b,	// (0x00085f31) main_camera4_pane_t2_ParamLimits

0x906b,	// (0x00085f31) main_camera4_pane_t2

0x0001,

0xf86e,	// (0x0008c734) main_camera4_pane_t_ParamLimits

0xf86e,	// (0x0008c734) main_camera4_pane_t

0x90ec,	// (0x00085fb2) aid_touch_area_vid4_ParamLimits

0x90ec,	// (0x00085fb2) aid_touch_area_vid4

0x912c,	// (0x00085ff2) main_video4_pane_g5_ParamLimits

0x912c,	// (0x00085ff2) main_video4_pane_g5

0x9150,	// (0x00086016) vid4_progress_pane_ParamLimits

0x9150,	// (0x00086016) vid4_progress_pane

0x99f3,	// (0x000868b9) main_cset_slider_pane_g18_ParamLimits

0x99f3,	// (0x000868b9) main_cset_slider_pane_g18

0xdc1d,	// (0x0008aae3) cell_cam4_burst_pane_g2_ParamLimits

0xdc1d,	// (0x0008aae3) cell_cam4_burst_pane_g2

0x0001,

0xf9c3,	// (0x0008c889) cell_cam4_burst_pane_g_ParamLimits

0xf9c3,	// (0x0008c889) cell_cam4_burst_pane_g

0xa2c6,	// (0x0008718c) bg_cl_pane_ParamLimits

0xa2c6,	// (0x0008718c) bg_cl_pane

0xa2d2,	// (0x00087198) cl_header_pane_ParamLimits

0xa2d2,	// (0x00087198) cl_header_pane

0xa2de,	// (0x000871a4) cl_listscroll_pane_ParamLimits

0xa2de,	// (0x000871a4) cl_listscroll_pane

0xdd5f,	// (0x0008ac25) bg_cl_pane_g1

0xdd67,	// (0x0008ac2d) bg_cl_pane_g2

0xdd6f,	// (0x0008ac35) bg_cl_pane_g3

0xdd77,	// (0x0008ac3d) bg_cl_pane_g4

0xdd7f,	// (0x0008ac45) bg_cl_pane_g5

0xdd87,	// (0x0008ac4d) bg_cl_pane_g6

0xdd8f,	// (0x0008ac55) bg_cl_pane_g7

0xdd97,	// (0x0008ac5d) bg_cl_pane_g8

0xdd9f,	// (0x0008ac65) bg_cl_pane_g9

0x0008,

0xf9fe,	// (0x0008c8c4) bg_cl_pane_g

0xa2ea,	// (0x000871b0) aid_height_cl_leading_ParamLimits

0xa2ea,	// (0x000871b0) aid_height_cl_leading

0xa2f6,	// (0x000871bc) aid_height_cl_text_ParamLimits

0xa2f6,	// (0x000871bc) aid_height_cl_text

0xd4c0,	// (0x0008a386) bg_cl_header_pane_ParamLimits

0xd4c0,	// (0x0008a386) bg_cl_header_pane

0xa30e,	// (0x000871d4) cl_header_pane_g1_ParamLimits

0xa30e,	// (0x000871d4) cl_header_pane_g1

0xa31b,	// (0x000871e1) cl_header_pane_t1_ParamLimits

0xa31b,	// (0x000871e1) cl_header_pane_t1

0xdda7,	// (0x0008ac6d) cl_list_pane

0x98ac,	// (0x00086772) hc_scroll_pane_cp01

0xd92d,	// (0x0008a7f3) bg_cl_header_pane_g1

0x94c1,	// (0x00086387) bg_cl_header_pane_g2

0xd94d,	// (0x0008a813) bg_cl_header_pane_g3

0x94d1,	// (0x00086397) bg_cl_header_pane_g4

0x94c9,	// (0x0008638f) bg_cl_header_pane_g5

0xdb38,	// (0x0008a9fe) bg_cl_header_pane_g6

0x94e9,	// (0x000863af) bg_cl_header_pane_g7

0x94f1,	// (0x000863b7) bg_cl_header_pane_g8

0x94e1,	// (0x000863a7) bg_cl_header_pane_g9

0x0008,

0xfa11,	// (0x0008c8d7) bg_cl_header_pane_g

0xa32d,	// (0x000871f3) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xa32d,	// (0x000871f3) hc_cl_list_double_graphic_heading_pane

0xa341,	// (0x00087207) hc_cl_list_single_graphic_pane_ParamLimits

0xa341,	// (0x00087207) hc_cl_list_single_graphic_pane

0xa35b,	// (0x00087221) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xa35b,	// (0x00087221) hc_cl_list_single_graphic_pane_g1

0xa367,	// (0x0008722d) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xa367,	// (0x0008722d) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfa24,	// (0x0008c8ea) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfa24,	// (0x0008c8ea) hc_cl_list_single_graphic_pane_g

0xa37b,	// (0x00087241) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xa37b,	// (0x00087241) hc_cl_list_single_graphic_pane_t1

0xa35b,	// (0x00087221) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xa35b,	// (0x00087221) hc_cl_list_double_graphic_heading_pane_g1

0xa390,	// (0x00087256) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xa390,	// (0x00087256) hc_cl_list_double_graphic_heading_pane_g2

0xa3a4,	// (0x0008726a) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xa3a4,	// (0x0008726a) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfa29,	// (0x0008c8ef) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfa29,	// (0x0008c8ef) hc_cl_list_double_graphic_heading_pane_g

0xa3b8,	// (0x0008727e) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xa3b8,	// (0x0008727e) hc_cl_list_double_graphic_heading_pane_t1

0xa3cd,	// (0x00087293) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xa3cd,	// (0x00087293) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfa30,	// (0x0008c8f6) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfa30,	// (0x0008c8f6) hc_cl_list_double_graphic_heading_pane_t

0xa3ea,	// (0x000872b0) vid4_progress_pane_g1

0xa3fa,	// (0x000872c0) vid4_progress_pane_g2

0xa40a,	// (0x000872d0) vid4_progress_pane_g3

0xa41c,	// (0x000872e2) vid4_progress_pane_g4

0x0004,

0xfa35,	// (0x0008c8fb) vid4_progress_pane_g

0xa434,	// (0x000872fa) vid4_progress_pane_t1

0xa44a,	// (0x00087310) vid4_progress_pane_t2

0x0002,

0xfa40,	// (0x0008c906) vid4_progress_pane_t

0xa475,	// (0x0008733b) wait_bar_pane_cp07

0x7182,	// (0x00084048) blid_firmament_pane_ParamLimits

0x71c5,	// (0x0008408b) popup_blid_sat_info2_window_g1

0x71e9,	// (0x000840af) popup_blid_sat_info2_window_t3

0x71f7,	// (0x000840bd) popup_blid_sat_info2_window_t4

0x7205,	// (0x000840cb) popup_blid_sat_info2_window_t5

0x7213,	// (0x000840d9) popup_blid_sat_info2_window_t6

0x7223,	// (0x000840e9) popup_blid_sat_info2_window_t7

0x7231,	// (0x000840f7) popup_blid_sat_info2_window_t8

0x723f,	// (0x00084105) popup_blid_sat_info2_window_t9

0x724d,	// (0x00084113) popup_blid_sat_info2_window_t10

0x730e,	// (0x000841d4) aid_firma_cardinal_ParamLimits

0x7322,	// (0x000841e8) blid_firmament_pane_t1_ParamLimits

0x7339,	// (0x000841ff) blid_firmament_pane_t2_ParamLimits

0x7350,	// (0x00084216) blid_firmament_pane_t3_ParamLimits

0x7367,	// (0x0008422d) blid_firmament_pane_t4_ParamLimits

0xf65e,	// (0x0008c524) blid_firmament_pane_t_ParamLimits

0x737e,	// (0x00084244) blid_sat_info_pane_ParamLimits

0x6bb2,	// (0x00083a78) main_cam_set_pane_ParamLimits

0x81b2,	// (0x00085078) aid_size_cell_colour_35_ParamLimits

0x81cc,	// (0x00085092) aid_size_cell_colour_112_ParamLimits

0x81e3,	// (0x000850a9) aid_size_cell_effect_ParamLimits

0xd467,	// (0x0008a32d) bg_tb_trans_pane_cp02_ParamLimits

0x81fd,	// (0x000850c3) heading_imed_pane_ParamLimits

0x8209,	// (0x000850cf) listscroll_imed_pane_ParamLimits

0x1419,	// (0x0007e2df) popup_call2_audio_first_window_g5_ParamLimits

0x1419,	// (0x0007e2df) popup_call2_audio_first_window_g5

0x8c72,	// (0x00085b38) aid_size_touch_image3_arrow_left_ParamLimits

0x8c72,	// (0x00085b38) aid_size_touch_image3_arrow_left

0x8c88,	// (0x00085b4e) aid_size_touch_image3_arrow_right_ParamLimits

0x8c88,	// (0x00085b4e) aid_size_touch_image3_arrow_right

0xa45f,	// (0x00087325) vid4_progress_pane_t3

0x868c,	// (0x00085552) main_hwr_training_symbol_option_pane_ParamLimits

0x868c,	// (0x00085552) main_hwr_training_symbol_option_pane

0x86ac,	// (0x00085572) popup_hwr_training_preview_window_ParamLimits

0x86ac,	// (0x00085572) popup_hwr_training_preview_window

0x873a,	// (0x00085600) hwr_training_navi_pane_g5_ParamLimits

0x873a,	// (0x00085600) hwr_training_navi_pane_g5

0x9429,	// (0x000862ef) popup_char_count_window

0x4011,	// (0x00080ed7) bg_popup_sub_pane_cp20_ParamLimits

0x9ded,	// (0x00086cb3) list_vitu2_match_list_pane_ParamLimits

0x9df9,	// (0x00086cbf) vitu2_page_scroll_pane_ParamLimits

0x9df9,	// (0x00086cbf) vitu2_page_scroll_pane

0xddb9,	// (0x0008ac7f) list_single_hwr_training_symbol_option_pane_ParamLimits

0xddb9,	// (0x0008ac7f) list_single_hwr_training_symbol_option_pane

0xddcc,	// (0x0008ac92) list_single_hwr_training_symbol_option_pane_g1

0xddd4,	// (0x0008ac9a) list_single_hwr_training_symbol_option_pane_t1

0xdde2,	// (0x0008aca8) bg_button_pane_cp023

0xddeb,	// (0x0008acb1) bg_button_pane_cp024

0xde1e,	// (0x0008ace4) vitu2_page_scroll_pane_g1

0xde26,	// (0x0008acec) vitu2_page_scroll_pane_g2

0x0001,

0xfa47,	// (0x0008c90d) vitu2_page_scroll_pane_g

0xde2e,	// (0x0008acf4) vitu2_page_scroll_pane_t1

0x73ad,	// (0x00084273) popup_char_count_window_g1

0xde3d,	// (0x0008ad03) popup_char_count_window_g2

0xde46,	// (0x0008ad0c) popup_char_count_window_g3

0x0002,

0xfa4c,	// (0x0008c912) popup_char_count_window_g

0xde4f,	// (0x0008ad15) popup_char_count_window_t1

0x402b,	// (0x00080ef1) main_vded2_pane

0x8317,	// (0x000851dd) aid_size_cell_imed_line

0x8321,	// (0x000851e7) grid_imed_line_width_pane

0x91bc,	// (0x00086082) vid4_indicators_pane_g4

0xde5d,	// (0x0008ad23) cell_imed_line_width_pane_ParamLimits

0xde5d,	// (0x0008ad23) cell_imed_line_width_pane

0xde71,	// (0x0008ad37) cell_imed_line_width_pane_g1

0xde7a,	// (0x0008ad40) cell_imed_line_width_pane_g2

0x0001,

0xfa53,	// (0x0008c919) cell_imed_line_width_pane_g

0xa49a,	// (0x00087360) main_vded2_pane_g1_ParamLimits

0xa49a,	// (0x00087360) main_vded2_pane_g1

0xa4a7,	// (0x0008736d) main_vded2_pane_g2_ParamLimits

0xa4a7,	// (0x0008736d) main_vded2_pane_g2

0x0001,

0xfa58,	// (0x0008c91e) main_vded2_pane_g_ParamLimits

0xfa58,	// (0x0008c91e) main_vded2_pane_g

0xa4b5,	// (0x0008737b) vded2_slider_pane_ParamLimits

0xa4b5,	// (0x0008737b) vded2_slider_pane

0xa4c2,	// (0x00087388) aid_size_touch_vded2_end

0xa4cc,	// (0x00087392) aid_size_touch_vded2_playhead

0xde82,	// (0x0008ad48) aid_size_touch_vded2_start

0xde8a,	// (0x0008ad50) vded2_slider_bg_pane

0xde93,	// (0x0008ad59) vded2_slider_pane_g1

0xde9c,	// (0x0008ad62) vded2_slider_pane_g2

0xa4d4,	// (0x0008739a) vded2_slider_pane_g3

0x0002,

0xfa5d,	// (0x0008c923) vded2_slider_pane_g

0xdea4,	// (0x0008ad6a) vded2_slider_bg_pane_g1

0xdead,	// (0x0008ad73) vded2_slider_bg_pane_g2

0xdeb6,	// (0x0008ad7c) vded2_slider_bg_pane_g3

0x0002,

0xfa64,	// (0x0008c92a) vded2_slider_bg_pane_g

0x644e,	// (0x00083314) aid_postcard_touch_down_pane_ParamLimits

0x644e,	// (0x00083314) aid_postcard_touch_down_pane

0x645e,	// (0x00083324) aid_postcard_touch_up_pane_ParamLimits

0x645e,	// (0x00083324) aid_postcard_touch_up_pane

0x402b,	// (0x00080ef1) main_blid2_pane

0x6bdb,	// (0x00083aa1) popup_blid2_search_window

0xcdcd,	// (0x00089c93) blid2_gps_pane

0xcdcd,	// (0x00089c93) blid2_navig_pane

0xcdcd,	// (0x00089c93) blid2_search_pane

0xcdcd,	// (0x00089c93) blid2_tripm_pane

0xa4dd,	// (0x000873a3) blid2_search_pane_g1_ParamLimits

0xa4dd,	// (0x000873a3) blid2_search_pane_g1

0xa4ed,	// (0x000873b3) blid2_search_pane_t1_ParamLimits

0xa4ed,	// (0x000873b3) blid2_search_pane_t1

0xa4ff,	// (0x000873c5) aid_size_cell_blid2_gps_ParamLimits

0xa4ff,	// (0x000873c5) aid_size_cell_blid2_gps

0xa50f,	// (0x000873d5) blid2_gps_pane_g1_ParamLimits

0xa50f,	// (0x000873d5) blid2_gps_pane_g1

0xa51b,	// (0x000873e1) grid_blid2_satellite_pane_ParamLimits

0xa51b,	// (0x000873e1) grid_blid2_satellite_pane

0xa52b,	// (0x000873f1) blid2_navig_pane_g1_ParamLimits

0xa52b,	// (0x000873f1) blid2_navig_pane_g1

0xa537,	// (0x000873fd) blid2_navig_pane_t1_ParamLimits

0xa537,	// (0x000873fd) blid2_navig_pane_t1

0xa549,	// (0x0008740f) blid2_navig_pane_t2_ParamLimits

0xa549,	// (0x0008740f) blid2_navig_pane_t2

0x0001,

0xfa6b,	// (0x0008c931) blid2_navig_pane_t_ParamLimits

0xfa6b,	// (0x0008c931) blid2_navig_pane_t

0xa55b,	// (0x00087421) blid2_navig_ring_pane_ParamLimits

0xa55b,	// (0x00087421) blid2_navig_ring_pane

0xa56b,	// (0x00087431) blid2_speed_pane_ParamLimits

0xa56b,	// (0x00087431) blid2_speed_pane

0xa577,	// (0x0008743d) blid2_tripm_pane_g1_ParamLimits

0xa577,	// (0x0008743d) blid2_tripm_pane_g1

0xa587,	// (0x0008744d) blid2_tripm_pane_g2_ParamLimits

0xa587,	// (0x0008744d) blid2_tripm_pane_g2

0xa593,	// (0x00087459) blid2_tripm_pane_g3_ParamLimits

0xa593,	// (0x00087459) blid2_tripm_pane_g3

0xa59f,	// (0x00087465) blid2_tripm_pane_g4_ParamLimits

0xa59f,	// (0x00087465) blid2_tripm_pane_g4

0xa5ab,	// (0x00087471) blid2_tripm_pane_g5_ParamLimits

0xa5ab,	// (0x00087471) blid2_tripm_pane_g5

0x0005,

0xfa70,	// (0x0008c936) blid2_tripm_pane_g_ParamLimits

0xfa70,	// (0x0008c936) blid2_tripm_pane_g

0xa5c7,	// (0x0008748d) blid2_tripm_pane_t1_ParamLimits

0xa5c7,	// (0x0008748d) blid2_tripm_pane_t1

0xa5db,	// (0x000874a1) blid2_tripm_pane_t2_ParamLimits

0xa5db,	// (0x000874a1) blid2_tripm_pane_t2

0xa5ed,	// (0x000874b3) blid2_tripm_pane_t3_ParamLimits

0xa5ed,	// (0x000874b3) blid2_tripm_pane_t3

0x0003,

0xfa7d,	// (0x0008c943) blid2_tripm_pane_t_ParamLimits

0xfa7d,	// (0x0008c943) blid2_tripm_pane_t

0xa61f,	// (0x000874e5) cell_blid2_satellite_pane_ParamLimits

0xa61f,	// (0x000874e5) cell_blid2_satellite_pane

0xa639,	// (0x000874ff) cell_blid2_satellite_pane_g1

0xdebf,	// (0x0008ad85) cell_blid2_satellite_pane_t1

0xd728,	// (0x0008a5ee) blid2_speed_pane_g1

0xdecd,	// (0x0008ad93) blid2_speed_pane_t1

0xdedb,	// (0x0008ada1) blid2_speed_pane_t2

0x0001,

0xfa86,	// (0x0008c94c) blid2_speed_pane_t

0xd728,	// (0x0008a5ee) blid2_navig_ring_pane_g1

0xa642,	// (0x00087508) blid2_navig_ring_pane_g2

0xa64a,	// (0x00087510) blid2_navig_ring_pane_g3

0xa652,	// (0x00087518) blid2_navig_ring_pane_g4

0xa65a,	// (0x00087520) blid2_navig_ring_pane_g5

0x0004,

0xfa8b,	// (0x0008c951) blid2_navig_ring_pane_g

0xcdcd,	// (0x00089c93) bg_popup_window_pane_cp011

0xdee9,	// (0x0008adaf) popup_blid2_search_window_g1

0xdef1,	// (0x0008adb7) popup_blid2_search_window_t1

0xdeff,	// (0x0008adc5) popup_blid2_search_window_t2

0x0001,

0xfa96,	// (0x0008c95c) popup_blid2_search_window_t

0xd83c,	// (0x0008a702) main_browser_pane_g1

0xd540,	// (0x0008a406) main_browser_pane_ParamLimits

0x6bb2,	// (0x00083a78) bg_button_pane_cp011_ParamLimits

0x94a3,	// (0x00086369) cell_vitu2_function_pane_g1_ParamLimits

0x09d4,	// (0x0007d89a) bg_popup_sub_pane_cp22_ParamLimits

0x9f89,	// (0x00086e4f) input_focus_pane_cp08_ParamLimits

0x9fa4,	// (0x00086e6a) popup_vitu2_query_button_pane_ParamLimits

0x9fa4,	// (0x00086e6a) popup_vitu2_query_button_pane

0x9fb3,	// (0x00086e79) popup_vitu2_query_input_button_pane

0xdb73,	// (0x0008aa39) popup_vitu2_query_window_g1_ParamLimits

0x9fbd,	// (0x00086e83) popup_vitu2_query_window_g2_ParamLimits

0xf997,	// (0x0008c85d) popup_vitu2_query_window_g_ParamLimits

0xcdcd,	// (0x00089c93) bg_button_pane_cp026

0xa662,	// (0x00087528) popup_vitu2_query_input_button_pane_g1

0xcdcd,	// (0x00089c93) bg_button_pane_cp025

0xdf0d,	// (0x0008add3) popup_vitu2_query_button_pane_t1

0x7686,	// (0x0008454c) main_mp3_pane_t6

0x769e,	// (0x00084564) popup_slider_window_cp01

0x90a1,	// (0x00085f67) cam4_battery_pane

0x917b,	// (0x00086041) cam4_battery_pane_cp02

0xa3e2,	// (0x000872a8) cam4_battery_pane_cp01

0xa3e2,	// (0x000872a8) cam4_battery_pane_cp03

0xdadf,	// (0x0008a9a5) cam4_battery_pane_g1

0xd728,	// (0x0008a5ee) cam4_battery_pane_g2

0x0001,

0xfa9b,	// (0x0008c961) cam4_battery_pane_g

0x725b,	// (0x00084121) popup_blid_sat_info2_window_t11

0x0752,	// (0x0007d618) aid_size_touch_mv_arrow_left_ParamLimits

0x077d,	// (0x0007d643) aid_size_touch_mv_arrow_right_ParamLimits

0x07db,	// (0x0007d6a1) navi_pane_g1_ParamLimits

0x07e7,	// (0x0007d6ad) navi_pane_g2_ParamLimits

0x0815,	// (0x0007d6db) navi_pane_g3_ParamLimits

0xf35f,	// (0x0008c225) navi_pane_g_ParamLimits

0x609c,	// (0x00082f62) navi_pane_mv_t1_ParamLimits

0x8243,	// (0x00085109) grid_imed_effect_pane_ParamLimits

0x4b91,	// (0x00081a57) aid_placing_vt_slider_lsc

0xd78b,	// (0x0008a651) aid_placing_vt_slider_prt

0xd467,	// (0x0008a32d) bg_tb_trans_pane_cp01_ParamLimits

0x7502,	// (0x000843c8) popup_image_details_window_g1_ParamLimits

0x7515,	// (0x000843db) popup_image_details_window_g2_ParamLimits

0x752a,	// (0x000843f0) popup_image_details_window_g3_ParamLimits

0x752a,	// (0x000843f0) popup_image_details_window_g3

0xf69e,	// (0x0008c564) popup_image_details_window_g_ParamLimits

0x753e,	// (0x00084404) popup_image_details_window_t1_ParamLimits

0x7550,	// (0x00084416) popup_image_details_window_t2_ParamLimits

0x7569,	// (0x0008442f) popup_image_details_window_t3_ParamLimits

0x757d,	// (0x00084443) popup_image_details_window_t4_ParamLimits

0x7598,	// (0x0008445e) popup_image_details_window_t5_ParamLimits

0xf6a5,	// (0x0008c56b) popup_image_details_window_t_ParamLimits

0xa302,	// (0x000871c8) cl_header_name_pane_ParamLimits

0xa302,	// (0x000871c8) cl_header_name_pane

0xa66a,	// (0x00087530) cl_header_name_pane_t1_ParamLimits

0xa66a,	// (0x00087530) cl_header_name_pane_t1

0xa681,	// (0x00087547) cl_header_name_pane_t2_ParamLimits

0xa681,	// (0x00087547) cl_header_name_pane_t2

0xa6ab,	// (0x00087571) cl_header_name_pane_t3_ParamLimits

0xa6ab,	// (0x00087571) cl_header_name_pane_t3

0x0002,

0xfaa0,	// (0x0008c966) cl_header_name_pane_t_ParamLimits

0xfaa0,	// (0x0008c966) cl_header_name_pane_t

0x08a4,	// (0x0007d76a) navi_pane_mv_g2_ParamLimits

0x93d0,	// (0x00086296) field_vitu2_entry_pane_g1_ParamLimits

0x93dc,	// (0x000862a2) field_vitu2_entry_pane_g2_ParamLimits

0x93e8,	// (0x000862ae) field_vitu2_entry_pane_g3_ParamLimits

0x93e8,	// (0x000862ae) field_vitu2_entry_pane_g3

0xf8a0,	// (0x0008c766) field_vitu2_entry_pane_g_ParamLimits

0x9431,	// (0x000862f7) cell_vitu2_itu_pane_g1_ParamLimits

0x9449,	// (0x0008630f) cell_vitu2_itu_pane_g2_ParamLimits

0x9449,	// (0x0008630f) cell_vitu2_itu_pane_g2

0x0001,

0xf8ac,	// (0x0008c772) cell_vitu2_itu_pane_g_ParamLimits

0xf8ac,	// (0x0008c772) cell_vitu2_itu_pane_g

0x6bb2,	// (0x00083a78) bg_vkb2_func_pane_cp05_ParamLimits

0x6bb2,	// (0x00083a78) bg_vkb2_func_pane_cp05

0x6bb2,	// (0x00083a78) bg_vkb2_func_pane_cp03

0x6bb2,	// (0x00083a78) bg_vkb2_func_pane_cp04

0x6bb2,	// (0x00083a78) bg_vkb2_func_pane_cp10_ParamLimits

0x6bb2,	// (0x00083a78) bg_vkb2_func_pane_cp10

0xa2a4,	// (0x0008716a) bg_vkb2_func_pane_cp08

0x9f71,	// (0x00086e37) bg_vkb2_func_pane_cp06

0xa287,	// (0x0008714d) bg_vkb2_func_pane_cp07

0xddf4,	// (0x0008acba) bg_vkb2_func_pane_cp11_ParamLimits

0xddf4,	// (0x0008acba) bg_vkb2_func_pane_cp11

0xde09,	// (0x0008accf) bg_vkb2_func_pane_cp12_ParamLimits

0xde09,	// (0x0008accf) bg_vkb2_func_pane_cp12

0xcdcd,	// (0x00089c93) bg_vkb2_func_pane_cp09

0x94c1,	// (0x00086387) bg_vkb2_func_pane_g1

0xd94d,	// (0x0008a813) bg_vkb2_func_pane_g2

0x94c9,	// (0x0008638f) bg_vkb2_func_pane_g3

0x94d1,	// (0x00086397) bg_vkb2_func_pane_g4

0xdb38,	// (0x0008a9fe) bg_vkb2_func_pane_g5

0x94e9,	// (0x000863af) bg_vkb2_func_pane_g6

0x94f1,	// (0x000863b7) bg_vkb2_func_pane_g7

0x94e1,	// (0x000863a7) bg_vkb2_func_pane_g8

0xd92d,	// (0x0008a7f3) bg_vkb2_func_pane_g9

0x0008,

0xfaa7,	// (0x0008c96d) bg_vkb2_func_pane_g

0xa5b9,	// (0x0008747f) blid2_tripm_pane_g6_ParamLimits

0xa5b9,	// (0x0008747f) blid2_tripm_pane_g6

0x8b29,	// (0x000859ef) mp4_progress_pane_g1

0xa613,	// (0x000874d9) blid2_tripm_values_pane_ParamLimits

0xa613,	// (0x000874d9) blid2_tripm_values_pane

0xa6d0,	// (0x00087596) blid2_tripm_values_pane_t1

0xa6de,	// (0x000875a4) blid2_tripm_values_pane_t2

0xa6ec,	// (0x000875b2) blid2_tripm_values_pane_t3

0xa6fa,	// (0x000875c0) blid2_tripm_values_pane_t4

0xa708,	// (0x000875ce) blid2_tripm_values_pane_t5

0xa716,	// (0x000875dc) blid2_tripm_values_pane_t6

0xa724,	// (0x000875ea) blid2_tripm_values_pane_t7

0xa732,	// (0x000875f8) blid2_tripm_values_pane_t8

0xa740,	// (0x00087606) blid2_tripm_values_pane_t9

0x0008,

0xfaba,	// (0x0008c980) blid2_tripm_values_pane_t

0x4bd1,	// (0x00081a97) call_video_pane_t1_ParamLimits

0x4bf2,	// (0x00081ab8) call_video_pane_t2_ParamLimits

0xf208,	// (0x0008c0ce) call_video_pane_t_ParamLimits

0x6398,	// (0x0008325e) msg_header_pane_g1_ParamLimits

0x0a91,	// (0x0007d957) msg_header_pane_g2_ParamLimits

0x0a91,	// (0x0007d957) msg_header_pane_g2

0x0001,

0xf402,	// (0x0008c2c8) msg_header_pane_g_ParamLimits

0xf402,	// (0x0008c2c8) msg_header_pane_g

0xd540,	// (0x0008a406) main_clock2_pane_ParamLimits

0x7f31,	// (0x00084df7) grid_clock2_toolbar_pane_ParamLimits

0x7f31,	// (0x00084df7) grid_clock2_toolbar_pane

0x7f31,	// (0x00084df7) listscroll_clock2_pane_ParamLimits

0x7f31,	// (0x00084df7) listscroll_clock2_pane

0x8013,	// (0x00084ed9) main_clock2_pane_t3_ParamLimits

0x8013,	// (0x00084ed9) main_clock2_pane_t3

0x8025,	// (0x00084eeb) main_clock2_pane_t4_ParamLimits

0x8025,	// (0x00084eeb) main_clock2_pane_t4

0xdf1b,	// (0x0008ade1) cell_clock2_toolbar_pane

0xdf23,	// (0x0008ade9) cell_clock2_toolbar_pane_cp01

0xdf23,	// (0x0008ade9) cell_clock2_toolbar_pane_cp02

0xdf2b,	// (0x0008adf1) cell_clock2_toolbar_pane_cp03

0xdf33,	// (0x0008adf9) list_clock2_pane

0x06d7,	// (0x0007d59d) scroll_pane_cp10

0xdf3b,	// (0x0008ae01) list_single_clock2_pane_ParamLimits

0xdf3b,	// (0x0008ae01) list_single_clock2_pane

0xd6f2,	// (0x0008a5b8) list_highlight_pane_cp08

0xdf48,	// (0x0008ae0e) list_single_clock2_pane_t1

0xdf56,	// (0x0008ae1c) list_single_clock2_pane_t2

0x0001,

0xfacd,	// (0x0008c993) list_single_clock2_pane_t

0xcdcd,	// (0x00089c93) bg_button_pane_cp10

0xdf64,	// (0x0008ae2a) cell_clock2_toolbar_pane_g1

0x63bc,	// (0x00083282) aid_main_viewer_pane_g1_ParamLimits

0x63bc,	// (0x00083282) aid_main_viewer_pane_g1

0x63c8,	// (0x0008328e) aid_main_viewer_pane_g2_ParamLimits

0x63c8,	// (0x0008328e) aid_main_viewer_pane_g2

0x63d4,	// (0x0008329a) aid_main_viewer_pane_g3_ParamLimits

0x63d4,	// (0x0008329a) aid_main_viewer_pane_g3

0x63e5,	// (0x000832ab) aid_main_viewer_pane_g4_ParamLimits

0x63e5,	// (0x000832ab) aid_main_viewer_pane_g4

0x0003,

0xf413,	// (0x0008c2d9) aid_main_viewer_pane_g_ParamLimits

0xf413,	// (0x0008c2d9) aid_main_viewer_pane_g

0x6ba5,	// (0x00083a6b) main_calc_pane_ParamLimits

0x6bc0,	// (0x00083a86) main_dialer2_pane_ParamLimits

0x402b,	// (0x00080ef1) main_cam6_pane

0x402b,	// (0x00080ef1) main_vid6_pane

0x7f3d,	// (0x00084e03) listscroll_gen_pane_cp06_ParamLimits

0x7f3d,	// (0x00084e03) listscroll_gen_pane_cp06

0x8037,	// (0x00084efd) main_clock2_pane_t5_ParamLimits

0x8037,	// (0x00084efd) main_clock2_pane_t5

0x8084,	// (0x00084f4a) aid_call2_pane_cp10_ParamLimits

0x8096,	// (0x00084f5c) aid_call_pane_cp10_ParamLimits

0x0746,	// (0x0007d60c) popup_clock_analogue_window_cp10_g1_ParamLimits

0x0746,	// (0x0007d60c) popup_clock_analogue_window_cp10_g2_ParamLimits

0x80a8,	// (0x00084f6e) popup_clock_analogue_window_cp10_g3_ParamLimits

0x80a8,	// (0x00084f6e) popup_clock_analogue_window_cp10_g4_ParamLimits

0x0746,	// (0x0007d60c) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf75a,	// (0x0008c620) popup_clock_analogue_window_cp10_g_ParamLimits

0x80be,	// (0x00084f84) popup_clock_analogue_window_cp10_t1_ParamLimits

0x8c1f,	// (0x00085ae5) cell_dialer2_keypad_pane_g2_ParamLimits

0x8c1f,	// (0x00085ae5) cell_dialer2_keypad_pane_g2

0x0001,

0xf83f,	// (0x0008c705) cell_dialer2_keypad_pane_g_ParamLimits

0xf83f,	// (0x0008c705) cell_dialer2_keypad_pane_g

0x8c3b,	// (0x00085b01) cell_dialer2_keypad_pane_t1

0x9881,	// (0x00086747) main_cset_text2_pane_ParamLimits

0x9881,	// (0x00086747) main_cset_text2_pane

0xdd53,	// (0x0008ac19) area_vitu2_query_pane_g1_ParamLimits

0xa226,	// (0x000870ec) area_vitu2_query_pane_g2_ParamLimits

0xf9ea,	// (0x0008c8b0) area_vitu2_query_pane_g_ParamLimits

0x23da,	// (0x0007f2a0) area_vitu2_query_pane_t7_ParamLimits

0x23da,	// (0x0007f2a0) area_vitu2_query_pane_t7

0x9f71,	// (0x00086e37) bg_button_pane_cp018_ParamLimits

0xa287,	// (0x0008714d) bg_button_pane_cp021_ParamLimits

0xa293,	// (0x00087159) bg_button_pane_cp022_ParamLimits

0xa2a4,	// (0x0008716a) bg_vkb2_func_pane_cp08_ParamLimits

0x9f71,	// (0x00086e37) bg_vkb2_func_pane_cp06_ParamLimits

0xa287,	// (0x0008714d) bg_vkb2_func_pane_cp07_ParamLimits

0xa2b6,	// (0x0008717c) input_focus_pane_cp09_ParamLimits

0xa74e,	// (0x00087614) cam6_autofocus_pane_ParamLimits

0xa74e,	// (0x00087614) cam6_autofocus_pane

0xa770,	// (0x00087636) cam6_image_uncrop_pane_ParamLimits

0xa770,	// (0x00087636) cam6_image_uncrop_pane

0xa79d,	// (0x00087663) cam6_indi_pane_ParamLimits

0xa79d,	// (0x00087663) cam6_indi_pane

0xa7b7,	// (0x0008767d) cam6_mode_pane_ParamLimits

0xa7b7,	// (0x0008767d) cam6_mode_pane

0xa7cb,	// (0x00087691) cam6_timer_pane_ParamLimits

0xa7cb,	// (0x00087691) cam6_timer_pane

0xa7dc,	// (0x000876a2) cam6_zoom_pane_ParamLimits

0xa7dc,	// (0x000876a2) cam6_zoom_pane

0xa7f4,	// (0x000876ba) cam6_mode_pane_g1_ParamLimits

0xa7f4,	// (0x000876ba) cam6_mode_pane_g1

0xa800,	// (0x000876c6) cam6_mode_pane_g2_ParamLimits

0xa800,	// (0x000876c6) cam6_mode_pane_g2

0xa80c,	// (0x000876d2) cam6_mode_pane_g3_ParamLimits

0xa80c,	// (0x000876d2) cam6_mode_pane_g3

0xa818,	// (0x000876de) cam6_mode_pane_g4_ParamLimits

0xa818,	// (0x000876de) cam6_mode_pane_g4

0x0003,

0xfad2,	// (0x0008c998) cam6_mode_pane_g_ParamLimits

0xfad2,	// (0x0008c998) cam6_mode_pane_g

0x8ba4,	// (0x00085a6a) bg_tb_trans_pane_cp08_ParamLimits

0x8ba4,	// (0x00085a6a) bg_tb_trans_pane_cp08

0xdf6c,	// (0x0008ae32) cam6_battery_pane_ParamLimits

0xdf6c,	// (0x0008ae32) cam6_battery_pane

0xdf82,	// (0x0008ae48) cam6_indi_pane_g1_ParamLimits

0xdf82,	// (0x0008ae48) cam6_indi_pane_g1

0xdf94,	// (0x0008ae5a) cam6_indi_pane_g2_ParamLimits

0xdf94,	// (0x0008ae5a) cam6_indi_pane_g2

0xdfa6,	// (0x0008ae6c) cam6_indi_pane_g3_ParamLimits

0xdfa6,	// (0x0008ae6c) cam6_indi_pane_g3

0x0002,

0xfadb,	// (0x0008c9a1) cam6_indi_pane_g_ParamLimits

0xfadb,	// (0x0008c9a1) cam6_indi_pane_g

0xdfb8,	// (0x0008ae7e) cam6_indi_pane_t1_ParamLimits

0xdfb8,	// (0x0008ae7e) cam6_indi_pane_t1

0x91f7,	// (0x000860bd) cam6_autofocus_pane_g1

0x91ef,	// (0x000860b5) cam6_autofocus_pane_g2

0x9207,	// (0x000860cd) cam6_autofocus_pane_g3

0x91ff,	// (0x000860c5) cam6_autofocus_pane_g4

0x0003,

0xfae2,	// (0x0008c9a8) cam6_autofocus_pane_g

0xdfde,	// (0x0008aea4) cam6_timer_pane_g1

0xdfe6,	// (0x0008aeac) cam6_timer_pane_t1

0xdff4,	// (0x0008aeba) cam6_zoom_cont_pane

0xdffc,	// (0x0008aec2) cam6_zoom_pane_g1

0xe004,	// (0x0008aeca) cam6_zoom_pane_g2

0xa824,	// (0x000876ea) cam6_zoom_pane_g3

0x0002,

0xfaeb,	// (0x0008c9b1) cam6_zoom_pane_g

0xd728,	// (0x0008a5ee) cam6_battery_pane_g1

0xd728,	// (0x0008a5ee) cam6_battery_pane_g2

0x0001,

0xf3c3,	// (0x0008c289) cam6_battery_pane_g

0xe00c,	// (0x0008aed2) cam6_zoom_cont_pane_g1

0xe015,	// (0x0008aedb) cam6_zoom_cont_pane_g2

0xe01e,	// (0x0008aee4) cam6_zoom_cont_pane_g3

0x0002,

0xfaf2,	// (0x0008c9b8) cam6_zoom_cont_pane_g

0xa841,	// (0x00087707) cam6_mode_pane_cp_ParamLimits

0xa841,	// (0x00087707) cam6_mode_pane_cp

0xa855,	// (0x0008771b) cam6_zoom_pane_cp_ParamLimits

0xa855,	// (0x0008771b) cam6_zoom_pane_cp

0xa86d,	// (0x00087733) vid6_image_uncrop_cif_pane_ParamLimits

0xa86d,	// (0x00087733) vid6_image_uncrop_cif_pane

0xa899,	// (0x0008775f) vid6_image_uncrop_nhd_pane_ParamLimits

0xa899,	// (0x0008775f) vid6_image_uncrop_nhd_pane

0xa8b6,	// (0x0008777c) vid6_image_uncrop_vga_pane_ParamLimits

0xa8b6,	// (0x0008777c) vid6_image_uncrop_vga_pane

0xa8d5,	// (0x0008779b) vid6_image_uncrop_wvga_pane_ParamLimits

0xa8d5,	// (0x0008779b) vid6_image_uncrop_wvga_pane

0xa8f2,	// (0x000877b8) vid6_indi_pane_ParamLimits

0xa8f2,	// (0x000877b8) vid6_indi_pane

0x8ba4,	// (0x00085a6a) bg_tb_trans_pane_cp09_ParamLimits

0x8ba4,	// (0x00085a6a) bg_tb_trans_pane_cp09

0xe036,	// (0x0008aefc) cam6_battery_pane_cp_ParamLimits

0xe036,	// (0x0008aefc) cam6_battery_pane_cp

0xe042,	// (0x0008af08) vid6_indi_pane_g1_ParamLimits

0xe042,	// (0x0008af08) vid6_indi_pane_g1

0xe054,	// (0x0008af1a) vid6_indi_pane_g2_ParamLimits

0xe054,	// (0x0008af1a) vid6_indi_pane_g2

0xe066,	// (0x0008af2c) vid6_indi_pane_g3_ParamLimits

0xe066,	// (0x0008af2c) vid6_indi_pane_g3

0xe07b,	// (0x0008af41) vid6_indi_pane_g4_ParamLimits

0xe07b,	// (0x0008af41) vid6_indi_pane_g4

0xe090,	// (0x0008af56) vid6_indi_pane_g5_ParamLimits

0xe090,	// (0x0008af56) vid6_indi_pane_g5

0x0004,

0xfaf9,	// (0x0008c9bf) vid6_indi_pane_g_ParamLimits

0xfaf9,	// (0x0008c9bf) vid6_indi_pane_g

0xe0aa,	// (0x0008af70) vid6_indi_pane_t1_ParamLimits

0xe0aa,	// (0x0008af70) vid6_indi_pane_t1

0xe0c0,	// (0x0008af86) vid6_indi_pane_t2_ParamLimits

0xe0c0,	// (0x0008af86) vid6_indi_pane_t2

0xe0e8,	// (0x0008afae) vid6_indi_pane_t3_ParamLimits

0xe0e8,	// (0x0008afae) vid6_indi_pane_t3

0xe110,	// (0x0008afd6) vid6_indi_pane_t4_ParamLimits

0xe110,	// (0x0008afd6) vid6_indi_pane_t4

0x0003,

0xfb04,	// (0x0008c9ca) vid6_indi_pane_t_ParamLimits

0xfb04,	// (0x0008c9ca) vid6_indi_pane_t

0xe134,	// (0x0008affa) wait_bar_pane_cp08

0xa915,	// (0x000877db) main_cset_text2_pane_t1_ParamLimits

0xa915,	// (0x000877db) main_cset_text2_pane_t1

0xa82c,	// (0x000876f2) listscroll_gen_pane_cp06_t1_ParamLimits

0xa82c,	// (0x000876f2) listscroll_gen_pane_cp06_t1

0x402b,	// (0x00080ef1) main_cam6_set_pane

0xdae9,	// (0x0008a9af) bg_tb_trans_pane_cp06_ParamLimits

0x90a9,	// (0x00085f6f) cam4_indicators_pane_g1_ParamLimits

0x90ba,	// (0x00085f80) cam4_indicators_pane_g2_ParamLimits

0xf87c,	// (0x0008c742) cam4_indicators_pane_g_ParamLimits

0x90d2,	// (0x00085f98) cam4_indicators_pane_t1_ParamLimits

0x6bb2,	// (0x00083a78) bg_tb_trans_pane_cp07_ParamLimits

0x9183,	// (0x00086049) vid4_indicators_pane_g1_ParamLimits

0x9197,	// (0x0008605d) vid4_indicators_pane_g2_ParamLimits

0x91ab,	// (0x00086071) vid4_indicators_pane_g3_ParamLimits

0x91bc,	// (0x00086082) vid4_indicators_pane_g4_ParamLimits

0xf88e,	// (0x0008c754) vid4_indicators_pane_g_ParamLimits

0x91d8,	// (0x0008609e) vid4_indicators_pane_t1_ParamLimits

0xa3ea,	// (0x000872b0) vid4_progress_pane_g1_ParamLimits

0xa3fa,	// (0x000872c0) vid4_progress_pane_g2_ParamLimits

0xa40a,	// (0x000872d0) vid4_progress_pane_g3_ParamLimits

0xa41c,	// (0x000872e2) vid4_progress_pane_g4_ParamLimits

0xfa35,	// (0x0008c8fb) vid4_progress_pane_g_ParamLimits

0xa434,	// (0x000872fa) vid4_progress_pane_t1_ParamLimits

0xa44a,	// (0x00087310) vid4_progress_pane_t2_ParamLimits

0xa45f,	// (0x00087325) vid4_progress_pane_t3_ParamLimits

0xfa40,	// (0x0008c906) vid4_progress_pane_t_ParamLimits

0xa475,	// (0x0008733b) wait_bar_pane_cp07_ParamLimits

0xa94c,	// (0x00087812) main_cam6_set_pane_g2_ParamLimits

0xa94c,	// (0x00087812) main_cam6_set_pane_g2

0xa958,	// (0x0008781e) main_cset6_listscroll_pane_ParamLimits

0xa958,	// (0x0008781e) main_cset6_listscroll_pane

0xa983,	// (0x00087849) main_cset6_slider_pane_ParamLimits

0xa983,	// (0x00087849) main_cset6_slider_pane

0xa98f,	// (0x00087855) main_cset6_text2_pane_ParamLimits

0xa98f,	// (0x00087855) main_cset6_text2_pane

0xe143,	// (0x0008b009) main_cset6_text_pane

0xe14b,	// (0x0008b011) main_cset_list_pane_copy1_ParamLimits

0xe14b,	// (0x0008b011) main_cset_list_pane_copy1

0xe15b,	// (0x0008b021) scroll_pane_cp028_copy1

0xa9a2,	// (0x00087868) cset_list_set_pane_copy1

0xa9b8,	// (0x0008787e) aid_position_infowindow_above_copy1

0xa9c0,	// (0x00087886) aid_position_infowindow_below_copy1

0x2df7,	// (0x0007fcbd) cset_list_set_pane_g1_copy1

0x240f,	// (0x0007f2d5) cset_list_set_pane_g3_copy1_ParamLimits

0x240f,	// (0x0007f2d5) cset_list_set_pane_g3_copy1

0x241e,	// (0x0007f2e4) cset_list_set_pane_t1_copy1_ParamLimits

0x241e,	// (0x0007f2e4) cset_list_set_pane_t1_copy1

0xd467,	// (0x0008a32d) list_highlight_pane_cp021_copy1_ParamLimits

0xd467,	// (0x0008a32d) list_highlight_pane_cp021_copy1

0xe164,	// (0x0008b02a) cset6_slider_pane_ParamLimits

0xe164,	// (0x0008b02a) cset6_slider_pane

0xe190,	// (0x0008b056) main_cset6_slider_pane_g1_ParamLimits

0xe190,	// (0x0008b056) main_cset6_slider_pane_g1

0xa9c8,	// (0x0008788e) main_cset6_slider_pane_g2_ParamLimits

0xa9c8,	// (0x0008788e) main_cset6_slider_pane_g2

0xe1b8,	// (0x0008b07e) main_cset6_slider_pane_g3_ParamLimits

0xe1b8,	// (0x0008b07e) main_cset6_slider_pane_g3

0xa9f0,	// (0x000878b6) main_cset6_slider_pane_g4_ParamLimits

0xa9f0,	// (0x000878b6) main_cset6_slider_pane_g4

0xa9fc,	// (0x000878c2) main_cset6_slider_pane_g5_ParamLimits

0xa9fc,	// (0x000878c2) main_cset6_slider_pane_g5

0x995b,	// (0x00086821) main_cset6_slider_pane_g7_ParamLimits

0x995b,	// (0x00086821) main_cset6_slider_pane_g7

0x9967,	// (0x0008682d) main_cset6_slider_pane_g8_ParamLimits

0x9967,	// (0x0008682d) main_cset6_slider_pane_g8

0xaa0a,	// (0x000878d0) main_cset6_slider_pane_g9_ParamLimits

0xaa0a,	// (0x000878d0) main_cset6_slider_pane_g9

0xaa16,	// (0x000878dc) main_cset6_slider_pane_g10_ParamLimits

0xaa16,	// (0x000878dc) main_cset6_slider_pane_g10

0xaa22,	// (0x000878e8) main_cset6_slider_pane_g11_ParamLimits

0xaa22,	// (0x000878e8) main_cset6_slider_pane_g11

0xaa2e,	// (0x000878f4) main_cset6_slider_pane_g12_ParamLimits

0xaa2e,	// (0x000878f4) main_cset6_slider_pane_g12

0xe1c4,	// (0x0008b08a) main_cset6_slider_pane_g13_ParamLimits

0xe1c4,	// (0x0008b08a) main_cset6_slider_pane_g13

0xe1d0,	// (0x0008b096) main_cset6_slider_pane_g14_ParamLimits

0xe1d0,	// (0x0008b096) main_cset6_slider_pane_g14

0xaa3a,	// (0x00087900) main_cset6_slider_pane_g15_ParamLimits

0xaa3a,	// (0x00087900) main_cset6_slider_pane_g15

0xaa52,	// (0x00087918) main_cset6_slider_pane_g16_ParamLimits

0xaa52,	// (0x00087918) main_cset6_slider_pane_g16

0xaa60,	// (0x00087926) main_cset6_slider_pane_g17_ParamLimits

0xaa60,	// (0x00087926) main_cset6_slider_pane_g17

0x0011,

0xfb0d,	// (0x0008c9d3) main_cset6_slider_pane_g_ParamLimits

0xfb0d,	// (0x0008c9d3) main_cset6_slider_pane_g

0xe1e8,	// (0x0008b0ae) main_cset6_slider_pane_t1_ParamLimits

0xe1e8,	// (0x0008b0ae) main_cset6_slider_pane_t1

0xaa7a,	// (0x00087940) main_cset6_slider_pane_t2_ParamLimits

0xaa7a,	// (0x00087940) main_cset6_slider_pane_t2

0xaaa5,	// (0x0008796b) main_cset6_slider_pane_t3_ParamLimits

0xaaa5,	// (0x0008796b) main_cset6_slider_pane_t3

0xaad0,	// (0x00087996) main_cset6_slider_pane_t4_ParamLimits

0xaad0,	// (0x00087996) main_cset6_slider_pane_t4

0xaafb,	// (0x000879c1) main_cset6_slider_pane_t5_ParamLimits

0xaafb,	// (0x000879c1) main_cset6_slider_pane_t5

0xe229,	// (0x0008b0ef) main_cset6_slider_pane_t7_ParamLimits

0xe229,	// (0x0008b0ef) main_cset6_slider_pane_t7

0xab28,	// (0x000879ee) main_cset6_slider_pane_t8_ParamLimits

0xab28,	// (0x000879ee) main_cset6_slider_pane_t8

0xab4c,	// (0x00087a12) main_cset6_slider_pane_t9_ParamLimits

0xab4c,	// (0x00087a12) main_cset6_slider_pane_t9

0xab70,	// (0x00087a36) main_cset6_slider_pane_t10_ParamLimits

0xab70,	// (0x00087a36) main_cset6_slider_pane_t10

0xab94,	// (0x00087a5a) main_cset6_slider_pane_t11_ParamLimits

0xab94,	// (0x00087a5a) main_cset6_slider_pane_t11

0xe25f,	// (0x0008b125) main_cset6_slider_pane_t14_ParamLimits

0xe25f,	// (0x0008b125) main_cset6_slider_pane_t14

0xe298,	// (0x0008b15e) main_cset6_slider_pane_t15_ParamLimits

0xe298,	// (0x0008b15e) main_cset6_slider_pane_t15

0x000b,

0xfb32,	// (0x0008c9f8) main_cset6_slider_pane_t_ParamLimits

0xfb32,	// (0x0008c9f8) main_cset6_slider_pane_t

0x862f,	// (0x000854f5) cset_slider_pane_g1_copy1

0xe2d1,	// (0x0008b197) cset_slider_pane_g2_copy1

0xe2da,	// (0x0008b1a0) cset_slider_pane_g3_copy1

0xcdcd,	// (0x00089c93) bg_popup_sub_pane_cp011_copy1

0xe2ec,	// (0x0008b1b2) main_cset_text_pane_g1_copy1

0xdb87,	// (0x0008aa4d) main_cset_text_pane_t1_copy1

0xdb95,	// (0x0008aa5b) main_cset_text_pane_t2_copy1

0xdba3,	// (0x0008aa69) main_cset_text_pane_t3_copy1

0xdbb1,	// (0x0008aa77) main_cset_text_pane_t4_copy1

0xdbbf,	// (0x0008aa85) main_cset_text_pane_t5_copy1

0xe2f4,	// (0x0008b1ba) main_cset_text_pane_t6_copy1

0xe302,	// (0x0008b1c8) main_cset_text_pane_t7_copy1

0xabd7,	// (0x00087a9d) main_cset_text2_pane_t1_copy1

0x6bb2,	// (0x00083a78) main_ncimui_pane

0x6c11,	// (0x00083ad7) popup_query_ncimui_window_ParamLimits

0x6c11,	// (0x00083ad7) popup_query_ncimui_window

0x1f35,	// (0x0007edfb) field_cale_ev2_pane_g4_ParamLimits

0x1f35,	// (0x0007edfb) field_cale_ev2_pane_g4

0x8860,	// (0x00085726) cell_video_dialer_keypad_pane_g2_ParamLimits

0x8860,	// (0x00085726) cell_video_dialer_keypad_pane_g2

0x0001,

0xf816,	// (0x0008c6dc) cell_video_dialer_keypad_pane_g_ParamLimits

0xf816,	// (0x0008c6dc) cell_video_dialer_keypad_pane_g

0x8878,	// (0x0008573e) cell_video_dialer_keypad_pane_t1

0xcdcd,	// (0x00089c93) bg_popup_window_pane_cp012

0x1ca6,	// (0x0007eb6c) heading_pane_cp06

0xe33a,	// (0x0008b200) ncim_query_content_pane

0xcdcd,	// (0x00089c93) bg_popup_heading_pane_cp01

0xe342,	// (0x0008b208) ncim_heading_pane_t1

0xe350,	// (0x0008b216) ncim_indicator_popup_pane

0xe362,	// (0x0008b228) ncim_query_button_pane

0xe376,	// (0x0008b23c) ncim_query_content_pane_t1

0xe388,	// (0x0008b24e) ncim_query_content_pane_t2

0x0005,

0xfb76,	// (0x0008ca3c) ncim_query_content_pane_t

0xe3c2,	// (0x0008b288) ncim_query_list_pane

0xe3d4,	// (0x0008b29a) ncim_query_popup_pane

0xe350,	// (0x0008b216) ncim_indicator_popup_pane_ParamLimits

0xad2b,	// (0x00087bf1) ncim_query_content_pane_g1_ParamLimits

0xad2b,	// (0x00087bf1) ncim_query_content_pane_g1

0xe376,	// (0x0008b23c) ncim_query_content_pane_t1_ParamLimits

0xe388,	// (0x0008b24e) ncim_query_content_pane_t2_ParamLimits

0xad37,	// (0x00087bfd) ncim_query_content_pane_t3_ParamLimits

0xad37,	// (0x00087bfd) ncim_query_content_pane_t3

0xad54,	// (0x00087c1a) ncim_query_content_pane_t4_ParamLimits

0xad54,	// (0x00087c1a) ncim_query_content_pane_t4

0xad71,	// (0x00087c37) ncim_query_content_pane_t5_ParamLimits

0xad71,	// (0x00087c37) ncim_query_content_pane_t5

0xe39a,	// (0x0008b260) ncim_query_content_pane_t6_ParamLimits

0xe39a,	// (0x0008b260) ncim_query_content_pane_t6

0xfb76,	// (0x0008ca3c) ncim_query_content_pane_t_ParamLimits

0xe3c2,	// (0x0008b288) ncim_query_list_pane_ParamLimits

0xe3d4,	// (0x0008b29a) ncim_query_popup_pane_ParamLimits

0xe3e8,	// (0x0008b2ae) wait_bar_pane_cp04

0xcdcd,	// (0x00089c93) input_focus_pane_cp011

0xe3f0,	// (0x0008b2b6) ncim_query_popup_pane_t1

0xe3fe,	// (0x0008b2c4) ncim_list_query_list_pane_ParamLimits

0xe3fe,	// (0x0008b2c4) ncim_list_query_list_pane

0xcdcd,	// (0x00089c93) bg_button_pane_cp027

0xe40b,	// (0x0008b2d1) ncim_query_button_pane_g1

0xcdcd,	// (0x00089c93) list_highlight_pane_cp012

0xe415,	// (0x0008b2db) ncim_list_query_list_pane_g1

0xe41d,	// (0x0008b2e3) ncim_list_query_list_pane_t1

0x90c6,	// (0x00085f8c) cam4_indicators_pane_g3_ParamLimits

0x90c6,	// (0x00085f8c) cam4_indicators_pane_g3

0x91c8,	// (0x0008608e) vid4_indicators_pane_g5_ParamLimits

0x91c8,	// (0x0008608e) vid4_indicators_pane_g5

0xa428,	// (0x000872ee) vid4_progress_pane_g5_ParamLimits

0xa428,	// (0x000872ee) vid4_progress_pane_g5

0xac17,	// (0x00087add) main_ncimui_pane_g1

0xac7f,	// (0x00087b45) ncimui_group_query_pane_ParamLimits

0xac7f,	// (0x00087b45) ncimui_group_query_pane

0xacc7,	// (0x00087b8d) ncimui_list_pane_ParamLimits

0xacc7,	// (0x00087b8d) ncimui_list_pane

0xacee,	// (0x00087bb4) ncimui_text_pane_ParamLimits

0xacee,	// (0x00087bb4) ncimui_text_pane

0xad8e,	// (0x00087c54) ncimui_text_pane_t1_ParamLimits

0xad8e,	// (0x00087c54) ncimui_text_pane_t1

0xe42b,	// (0x0008b2f1) ncimui_list_single_graphic_pane_ParamLimits

0xe42b,	// (0x0008b2f1) ncimui_list_single_graphic_pane

0xadad,	// (0x00087c73) ncimui_query_pane_ParamLimits

0xadad,	// (0x00087c73) ncimui_query_pane

0xcdcd,	// (0x00089c93) list_highlight_pane_cp013

0xe43b,	// (0x0008b301) ncim_list_query_list_pane_t1_copy1

0xe449,	// (0x0008b30f) ncim_list_single_graphic_pane_g1

0xadc0,	// (0x00087c86) ncim_query_button_pane_cp01

0xadcc,	// (0x00087c92) ncim_query_entry_pane_ParamLimits

0xadcc,	// (0x00087c92) ncim_query_entry_pane

0xaddf,	// (0x00087ca5) ncimui_query_pane_g1

0xadeb,	// (0x00087cb1) ncimui_query_pane_t1_ParamLimits

0xadeb,	// (0x00087cb1) ncimui_query_pane_t1

0xd467,	// (0x0008a32d) input_focus_pane_cp012

0xe451,	// (0x0008b317) ncim_query_entry_pane_t1

0xd540,	// (0x0008a406) main_im_pane_ParamLimits

0x6bb2,	// (0x00083a78) main_mobtv_pane_ParamLimits

0x6bb2,	// (0x00083a78) main_mobtv_pane

0xaa6e,	// (0x00087934) main_cset6_slider_pane_g18_ParamLimits

0xaa6e,	// (0x00087934) main_cset6_slider_pane_g18

0xe1dc,	// (0x0008b0a2) main_cset6_slider_pane_g19_ParamLimits

0xe1dc,	// (0x0008b0a2) main_cset6_slider_pane_g19

0x93e8,	// (0x000862ae) bg_main_mobtv_pane_ParamLimits

0x93e8,	// (0x000862ae) bg_main_mobtv_pane

0xae04,	// (0x00087cca) main_mobtv_info_pane

0xae0f,	// (0x00087cd5) main_mobtv_loading_pane_ParamLimits

0xae0f,	// (0x00087cd5) main_mobtv_loading_pane

0xe463,	// (0x0008b329) main_mobtv_pg_channel_list_pane

0xe46d,	// (0x0008b333) main_mobtv_pg_hdr_pane

0xae1c,	// (0x00087ce2) main_mobtv_programe_curr_pane_ParamLimits

0xae1c,	// (0x00087ce2) main_mobtv_programe_curr_pane

0xae29,	// (0x00087cef) main_mobtv_programe_next_pane_ParamLimits

0xae29,	// (0x00087cef) main_mobtv_programe_next_pane

0xe476,	// (0x0008b33c) popup_mobtv_noti_window

0xd728,	// (0x0008a5ee) main_tv_pg_hdr_pane_g1

0xe47e,	// (0x0008b344) main_tv_pg_hdr_pane_g2

0xe486,	// (0x0008b34c) main_tv_pg_hdr_pane_g3

0xe48e,	// (0x0008b354) main_tv_pg_hdr_pane_g4

0xe496,	// (0x0008b35c) main_tv_pg_hdr_pane_g5

0xe4a0,	// (0x0008b366) main_tv_pg_hdr_pane_g6

0xe4aa,	// (0x0008b370) main_tv_pg_hdr_pane_g7

0xe4b4,	// (0x0008b37a) main_tv_pg_hdr_pane_g8

0xe4be,	// (0x0008b384) main_tv_pg_hdr_pane_g9

0xe4c8,	// (0x0008b38e) main_tv_pg_hdr_pane_g10

0xe4d2,	// (0x0008b398) main_tv_pg_hdr_pane_g11

0x000a,

0xfb83,	// (0x0008ca49) main_tv_pg_hdr_pane_g

0xe4dc,	// (0x0008b3a2) main_tv_pg_hdr_pane_t1

0xe4ea,	// (0x0008b3b0) main_tv_pg_hdr_pane_t2

0xe4f8,	// (0x0008b3be) main_tv_pg_hdr_pane_t3

0xe508,	// (0x0008b3ce) main_tv_pg_hdr_pane_t4

0xe518,	// (0x0008b3de) main_tv_pg_hdr_pane_t5

0x0004,

0xfb9a,	// (0x0008ca60) main_tv_pg_hdr_pane_t

0xe528,	// (0x0008b3ee) single_mobtv_pg_channel_pane_ParamLimits

0xe528,	// (0x0008b3ee) single_mobtv_pg_channel_pane

0xe53a,	// (0x0008b400) single_mobtv_pg_channel_table_pane

0xda50,	// (0x0008a916) single_mobtv_pg_channel_thumb_pane

0xe543,	// (0x0008b409) single_tv_pg_channel_pane_g1

0xe54c,	// (0x0008b412) single_tv_pg_channel_pane_g2

0x0001,

0xfba5,	// (0x0008ca6b) single_tv_pg_channel_pane_g

0xd4ce,	// (0x0008a394) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xd4ce,	// (0x0008a394) bg_single_mobtv_pg_channel_thumb_pane

0xe555,	// (0x0008b41b) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe555,	// (0x0008b41b) single_mobtv_pg_channel_thumb_pane_g1

0xe563,	// (0x0008b429) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe563,	// (0x0008b429) single_mobtv_pg_channel_thumb_pane_g2

0xe56f,	// (0x0008b435) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe56f,	// (0x0008b435) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfbaa,	// (0x0008ca70) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfbaa,	// (0x0008ca70) single_mobtv_pg_channel_thumb_pane_g

0xe57b,	// (0x0008b441) single_mobtv_pg_channel_thumb_pane_t1

0xe589,	// (0x0008b44f) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfbb1,	// (0x0008ca77) single_mobtv_pg_channel_thumb_pane_t

0xd728,	// (0x0008a5ee) bg_single_mobtv_pg_channel_table_pane_g1

0xd728,	// (0x0008a5ee) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf3c3,	// (0x0008c289) bg_single_mobtv_pg_channel_table_pane_g

0xe597,	// (0x0008b45d) single_mobtv_pg_channel_table_pane_t1

0xe5a5,	// (0x0008b46b) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfbb6,	// (0x0008ca7c) single_mobtv_pg_channel_table_pane_t

0xae3e,	// (0x00087d04) main_mobtv_info_pane_g1_ParamLimits

0xae3e,	// (0x00087d04) main_mobtv_info_pane_g1

0xae5a,	// (0x00087d20) main_mobtv_info_pane_t1_ParamLimits

0xae5a,	// (0x00087d20) main_mobtv_info_pane_t1

0xaed2,	// (0x00087d98) main_mobtv_info_pane_t2_ParamLimits

0xaed2,	// (0x00087d98) main_mobtv_info_pane_t2

0x0002,

0xfbc0,	// (0x0008ca86) main_mobtv_info_pane_t_ParamLimits

0xfbc0,	// (0x0008ca86) main_mobtv_info_pane_t

0xaf61,	// (0x00087e27) wait_bar_pane_cp05

0xaf73,	// (0x00087e39) main_mobtv_loading_pane_g1_ParamLimits

0xaf73,	// (0x00087e39) main_mobtv_loading_pane_g1

0xaf81,	// (0x00087e47) main_mobtv_loading_pane_g2_ParamLimits

0xaf81,	// (0x00087e47) main_mobtv_loading_pane_g2

0xaf8d,	// (0x00087e53) main_mobtv_loading_pane_g3_ParamLimits

0xaf8d,	// (0x00087e53) main_mobtv_loading_pane_g3

0x0002,

0xfbc7,	// (0x0008ca8d) main_mobtv_loading_pane_g_ParamLimits

0xfbc7,	// (0x0008ca8d) main_mobtv_loading_pane_g

0xe5b3,	// (0x0008b479) main_mobtv_loading_pane_t1_ParamLimits

0xe5b3,	// (0x0008b479) main_mobtv_loading_pane_t1

0xe5cb,	// (0x0008b491) main_mobtv_loading_pane_t2_ParamLimits

0xe5cb,	// (0x0008b491) main_mobtv_loading_pane_t2

0x0001,

0xfbce,	// (0x0008ca94) main_mobtv_loading_pane_t_ParamLimits

0xfbce,	// (0x0008ca94) main_mobtv_loading_pane_t

0xaf9b,	// (0x00087e61) wait_bar_pane_cp06_ParamLimits

0xaf9b,	// (0x00087e61) wait_bar_pane_cp06

0xe5ef,	// (0x0008b4b5) main_mobtv_programe_curr_pane_t1

0xe5fd,	// (0x0008b4c3) main_mobtv_programe_curr_pane_t2

0x0001,

0xfbd3,	// (0x0008ca99) main_mobtv_programe_curr_pane_t

0xe60b,	// (0x0008b4d1) main_mobtv_programe_next_pane_t1

0xe619,	// (0x0008b4df) main_mobtv_programe_next_pane_t2

0xe627,	// (0x0008b4ed) main_mobtv_programe_next_pane_t3

0x0002,

0xfbd8,	// (0x0008ca9e) main_mobtv_programe_next_pane_t

0xcdcd,	// (0x00089c93) bg_popup_mobtv_noti_window_pane

0xe635,	// (0x0008b4fb) popup_mobtv_noti_window_g1

0xe63d,	// (0x0008b503) popup_mobtv_noti_window_t1

0xe64b,	// (0x0008b511) popup_mobtv_noti_window_t2

0x0001,

0xfbdf,	// (0x0008caa5) popup_mobtv_noti_window_t

0xd728,	// (0x0008a5ee) bg_popup_mobtv_noti_window_pane_g1

0x402b,	// (0x00080ef1) sc_clock_pane

0x402b,	// (0x00080ef1) main_fs_bigclock_pane

0xa601,	// (0x000874c7) blid2_tripm_pane_t4_ParamLimits

0xa601,	// (0x000874c7) blid2_tripm_pane_t4

0xafa7,	// (0x00087e6d) sc_clock_pane_g1_ParamLimits

0xafa7,	// (0x00087e6d) sc_clock_pane_g1

0xafb5,	// (0x00087e7b) sc_clock_pane_t1_ParamLimits

0xafb5,	// (0x00087e7b) sc_clock_pane_t1

0xafc8,	// (0x00087e8e) sc_clock_pane_t2_ParamLimits

0xafc8,	// (0x00087e8e) sc_clock_pane_t2

0xafda,	// (0x00087ea0) sc_clock_pane_t3_ParamLimits

0xafda,	// (0x00087ea0) sc_clock_pane_t3

0x0004,

0xfbe4,	// (0x0008caaa) sc_clock_pane_t_ParamLimits

0xfbe4,	// (0x0008caaa) sc_clock_pane_t

0xbbb0,	// (0x00088a76) main_fs_bigclock_indicator_pane_ParamLimits

0xbbb0,	// (0x00088a76) main_fs_bigclock_indicator_pane

0xb05d,	// (0x00087f23) main_fs_bigclock_pane_g1_ParamLimits

0xb05d,	// (0x00087f23) main_fs_bigclock_pane_g1

0xbbbc,	// (0x00088a82) main_fs_bigclock_pane_t1_ParamLimits

0xbbbc,	// (0x00088a82) main_fs_bigclock_pane_t1

0xbbce,	// (0x00088a94) main_fs_bigclock_pane_t2_ParamLimits

0xbbce,	// (0x00088a94) main_fs_bigclock_pane_t2

0xbbe2,	// (0x00088aa8) main_fs_bigclock_pane_t3_ParamLimits

0xbbe2,	// (0x00088aa8) main_fs_bigclock_pane_t3

0x0002,

0xfd75,	// (0x0008cc3b) main_fs_bigclock_pane_t_ParamLimits

0xfd75,	// (0x0008cc3b) main_fs_bigclock_pane_t

0xeef4,	// (0x0008bdba) main_fs_bigclock_indicator_pane_g1

0xe36a,	// (0x0008b230) ncim_query_content_pane_g2_ParamLimits

0xe36a,	// (0x0008b230) ncim_query_content_pane_g2

0x0001,

0xfb71,	// (0x0008ca37) ncim_query_content_pane_g_ParamLimits

0xfb71,	// (0x0008ca37) ncim_query_content_pane_g

0xafee,	// (0x00087eb4) sc_clock_pane_t4_ParamLimits

0xafee,	// (0x00087eb4) sc_clock_pane_t4

0x6bb2,	// (0x00083a78) main_radioblah_pane

0x8f40,	// (0x00085e06) cell_call4_button_pane_t1_copy1_ParamLimits

0x8f40,	// (0x00085e06) cell_call4_button_pane_t1_copy1

0xac31,	// (0x00087af7) main_ncimui_pane_t1_ParamLimits

0xac31,	// (0x00087af7) main_ncimui_pane_t1

0xac4b,	// (0x00087b11) main_ncimui_pane_t2_ParamLimits

0xac4b,	// (0x00087b11) main_ncimui_pane_t2

0x0002,

0xfb6a,	// (0x0008ca30) main_ncimui_pane_t_ParamLimits

0xfb6a,	// (0x0008ca30) main_ncimui_pane_t

0xe7de,	// (0x0008b6a4) main_radioblah_anim_pane_ParamLimits

0xe7de,	// (0x0008b6a4) main_radioblah_anim_pane

0xe7ef,	// (0x0008b6b5) main_radioblah_info_pane_ParamLimits

0xe7ef,	// (0x0008b6b5) main_radioblah_info_pane

0xe803,	// (0x0008b6c9) main_radioblah_pane_t1_ParamLimits

0xe803,	// (0x0008b6c9) main_radioblah_pane_t1

0xe81f,	// (0x0008b6e5) main_radioblah_pane_t2_ParamLimits

0xe81f,	// (0x0008b6e5) main_radioblah_pane_t2

0x0003,

0xfc05,	// (0x0008cacb) main_radioblah_pane_t_ParamLimits

0xfc05,	// (0x0008cacb) main_radioblah_pane_t

0xb0b3,	// (0x00087f79) main_radioblah_rocker_ctrl_pane_ParamLimits

0xb0b3,	// (0x00087f79) main_radioblah_rocker_ctrl_pane

0xe867,	// (0x0008b72d) main_radioblah_info_pane_t1_ParamLimits

0xe867,	// (0x0008b72d) main_radioblah_info_pane_t1

0xb0f8,	// (0x00087fbe) main_radioblah_info_pane_t2_ParamLimits

0xb0f8,	// (0x00087fbe) main_radioblah_info_pane_t2

0x0003,

0xfc0e,	// (0x0008cad4) main_radioblah_info_pane_t_ParamLimits

0xfc0e,	// (0x0008cad4) main_radioblah_info_pane_t

0xd728,	// (0x0008a5ee) main_radioblah_rocker_ctrl_pane_g1

0xb1a8,	// (0x0008806e) main_radioblah_rocker_ctrl_pane_g2

0xb1b0,	// (0x00088076) main_radioblah_rocker_ctrl_pane_g3

0xb1b8,	// (0x0008807e) main_radioblah_rocker_ctrl_pane_g4

0xb1c0,	// (0x00088086) main_radioblah_rocker_ctrl_pane_g5

0xb1c8,	// (0x0008808e) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc17,	// (0x0008cadd) main_radioblah_rocker_ctrl_pane_g

0xabd7,	// (0x00087a9d) main_cset_text2_pane_t1_copy1_ParamLimits

0x8ff7,	// (0x00085ebd) cam4_image_uncrop_qvga_pane

0x9138,	// (0x00085ffe) vid4_image_uncrop_qcif_pane

0xa78f,	// (0x00087655) cam6_image_uncrop_qvga_pane_ParamLimits

0xa78f,	// (0x00087655) cam6_image_uncrop_qvga_pane

0xe026,	// (0x0008aeec) vid6_image_uncrop_qcif_pane_ParamLimits

0xe026,	// (0x0008aeec) vid6_image_uncrop_qcif_pane

0xcdcd,	// (0x00089c93) bg_popup_preview_window_pane_cp03

0xe310,	// (0x0008b1d6) list_cset_text2_pane

0xe318,	// (0x0008b1de) main_cset6_text2_pane_g1

0xe320,	// (0x0008b1e6) main_cset6_text2_pane_t1

0xb1d0,	// (0x00088096) list_cset_text2_pane_t1_ParamLimits

0xb1d0,	// (0x00088096) list_cset_text2_pane_t1

0x6bb2,	// (0x00083a78) main_radioblah_pane_ParamLimits

0xaf4d,	// (0x00087e13) main_mobtv_info_pane_t3_ParamLimits

0xaf4d,	// (0x00087e13) main_mobtv_info_pane_t3

0xb0a1,	// (0x00087f67) main_radioblah_pane_g1

0xb0cc,	// (0x00087f92) main_radioblah_info_pane_g1

0xb14d,	// (0x00088013) main_radioblah_info_pane_t3_ParamLimits

0xb14d,	// (0x00088013) main_radioblah_info_pane_t3

0x5bc3,	// (0x00082a89) highlight_cell_cale_month_pane_ParamLimits

0x5bc3,	// (0x00082a89) highlight_cell_cale_month_pane

0x402b,	// (0x00080ef1) main_phob_fisheye_pane

0x7e41,	// (0x00084d07) scroll_pane_cp0031_ParamLimits

0x7e41,	// (0x00084d07) scroll_pane_cp0031

0xe134,	// (0x0008affa) wait_bar_pane_cp08_ParamLimits

0xa9a2,	// (0x00087868) cset_list_set_pane_copy1_ParamLimits

0xe8a1,	// (0x0008b767) highlight_cell_cale_month_pane_g1

0xb1f1,	// (0x000880b7) highlight_cell_cale_month_pane_t1

0xdda7,	// (0x0008ac6d) list_gen_pane_cp01

0x98ac,	// (0x00086772) scroll_pane_01

0xb1ff,	// (0x000880c5) list_single_double_fisheye_pane

0x2433,	// (0x0007f2f9) list_double_fisheye_pane_g1_ParamLimits

0x2433,	// (0x0007f2f9) list_double_fisheye_pane_g1

0x243f,	// (0x0007f305) list_double_fisheye_pane_g2_ParamLimits

0x243f,	// (0x0007f305) list_double_fisheye_pane_g2

0xb208,	// (0x000880ce) list_double_fisheye_pane_g3_ParamLimits

0xb208,	// (0x000880ce) list_double_fisheye_pane_g3

0x0004,

0xfc24,	// (0x0008caea) list_double_fisheye_pane_g_ParamLimits

0xfc24,	// (0x0008caea) list_double_fisheye_pane_g

0xb214,	// (0x000880da) list_double_fisheye_pane_t1_ParamLimits

0xb214,	// (0x000880da) list_double_fisheye_pane_t1

0xb22f,	// (0x000880f5) list_double_fisheye_pane_t2_ParamLimits

0xb22f,	// (0x000880f5) list_double_fisheye_pane_t2

0x0001,

0xfc2f,	// (0x0008caf5) list_double_fisheye_pane_t_ParamLimits

0xfc2f,	// (0x0008caf5) list_double_fisheye_pane_t

0x402b,	// (0x00080ef1) main_call5_pane

0xb014,	// (0x00087eda) sc_swipe_pane_ParamLimits

0xb014,	// (0x00087eda) sc_swipe_pane

0xb25d,	// (0x00088123) call5_image_pane_ParamLimits

0xb25d,	// (0x00088123) call5_image_pane

0xb26d,	// (0x00088133) call5_swipe_1_pane_ParamLimits

0xb26d,	// (0x00088133) call5_swipe_1_pane

0xb279,	// (0x0008813f) call5_swipe_2_pane_ParamLimits

0xb279,	// (0x0008813f) call5_swipe_2_pane

0xb293,	// (0x00088159) popup_call5_audio_first_window_ParamLimits

0xb293,	// (0x00088159) popup_call5_audio_first_window

0xd4ce,	// (0x0008a394) call5_swipe_1_pane_g1_ParamLimits

0xd4ce,	// (0x0008a394) call5_swipe_1_pane_g1

0xe8a9,	// (0x0008b76f) call5_swipe_1_pane_g2_ParamLimits

0xe8a9,	// (0x0008b76f) call5_swipe_1_pane_g2

0x0001,

0xfc34,	// (0x0008cafa) call5_swipe_1_pane_g_ParamLimits

0xfc34,	// (0x0008cafa) call5_swipe_1_pane_g

0xe8b5,	// (0x0008b77b) call5_swipe_1_pane_t1_ParamLimits

0xe8b5,	// (0x0008b77b) call5_swipe_1_pane_t1

0xd4ce,	// (0x0008a394) call5_swipe_2_pane_g1_ParamLimits

0xd4ce,	// (0x0008a394) call5_swipe_2_pane_g1

0xe8ca,	// (0x0008b790) call5_swipe_2_pane_g2_ParamLimits

0xe8ca,	// (0x0008b790) call5_swipe_2_pane_g2

0x0001,

0xfc39,	// (0x0008caff) call5_swipe_2_pane_g_ParamLimits

0xfc39,	// (0x0008caff) call5_swipe_2_pane_g

0xe8d6,	// (0x0008b79c) call5_swipe_2_pane_t1_ParamLimits

0xe8d6,	// (0x0008b79c) call5_swipe_2_pane_t1

0xe8eb,	// (0x0008b7b1) sc_swipe_pane_g1_ParamLimits

0xe8eb,	// (0x0008b7b1) sc_swipe_pane_g1

0xe8f8,	// (0x0008b7be) sc_swipe_pane_g2_ParamLimits

0xe8f8,	// (0x0008b7be) sc_swipe_pane_g2

0x0001,

0xfc3e,	// (0x0008cb04) sc_swipe_pane_g_ParamLimits

0xfc3e,	// (0x0008cb04) sc_swipe_pane_g

0xe904,	// (0x0008b7ca) sc_swipe_pane_t1_ParamLimits

0xe904,	// (0x0008b7ca) sc_swipe_pane_t1

0x402b,	// (0x00080ef1) main_cmail_launcher_pane

0xb2a1,	// (0x00088167) aid_size_cell_cmail_l_ParamLimits

0xb2a1,	// (0x00088167) aid_size_cell_cmail_l

0xb2af,	// (0x00088175) grid_cmail_l_pane_ParamLimits

0xb2af,	// (0x00088175) grid_cmail_l_pane

0xb2bf,	// (0x00088185) cell_cmail_l_pane_ParamLimits

0xb2bf,	// (0x00088185) cell_cmail_l_pane

0xe919,	// (0x0008b7df) cell_cmail_l_pane_g1_ParamLimits

0xe919,	// (0x0008b7df) cell_cmail_l_pane_g1

0xe925,	// (0x0008b7eb) cell_cmail_l_pane_t1_ParamLimits

0xe925,	// (0x0008b7eb) cell_cmail_l_pane_t1

0xe93b,	// (0x0008b801) cell_cmail_l_pane_t2_ParamLimits

0xe93b,	// (0x0008b801) cell_cmail_l_pane_t2

0x0001,

0xfc43,	// (0x0008cb09) cell_cmail_l_pane_t_ParamLimits

0xfc43,	// (0x0008cb09) cell_cmail_l_pane_t

0xd467,	// (0x0008a32d) grid_highlight_pane_cp018_ParamLimits

0xd467,	// (0x0008a32d) grid_highlight_pane_cp018

0x3e81,	// (0x00080d47) main2_pane_ParamLimits

0x3e81,	// (0x00080d47) main2_pane

0xd5cf,	// (0x0008a495) popup_sp_fs_action_menu_bg_pane_g1

0xd5d7,	// (0x0008a49d) popup_sp_fs_action_menu_bg_pane_g2

0xd5df,	// (0x0008a4a5) popup_sp_fs_action_menu_bg_pane_g3

0xd5e7,	// (0x0008a4ad) popup_sp_fs_action_menu_bg_pane_g4

0xd5ef,	// (0x0008a4b5) popup_sp_fs_action_menu_bg_pane_g5

0xd5f7,	// (0x0008a4bd) popup_sp_fs_action_menu_bg_pane_g6

0xd5ff,	// (0x0008a4c5) popup_sp_fs_action_menu_bg_pane_g7

0xd607,	// (0x0008a4cd) popup_sp_fs_action_menu_bg_pane_g8

0xd60f,	// (0x0008a4d5) popup_sp_fs_action_menu_bg_pane_g9

0xd617,	// (0x0008a4dd) popup_sp_fs_action_menu_bg_pane_g10

0xd617,	// (0x0008a4dd) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf12b,	// (0x0008bff1) popup_sp_fs_action_menu_bg_pane_g

0xd4ce,	// (0x0008a394) list_medium_line_x2_t3_g3_g1_ParamLimits

0xd4ce,	// (0x0008a394) list_medium_line_x2_t3_g3_g1

0xd4ce,	// (0x0008a394) list_medium_line_x2_t3_g3_g2_ParamLimits

0xd4ce,	// (0x0008a394) list_medium_line_x2_t3_g3_g2

0xd4ce,	// (0x0008a394) list_medium_line_x2_t3_g3_g3_ParamLimits

0xd4ce,	// (0x0008a394) list_medium_line_x2_t3_g3_g3

0x0002,

0xf1d9,	// (0x0008c09f) list_medium_line_x2_t3_g3_g_ParamLimits

0xf1d9,	// (0x0008c09f) list_medium_line_x2_t3_g3_g

0xd742,	// (0x0008a608) list_medium_line_x2_t3_g3_t1_ParamLimits

0xd742,	// (0x0008a608) list_medium_line_x2_t3_g3_t1

0xd742,	// (0x0008a608) list_medium_line_x2_t3_g3_t2_ParamLimits

0xd742,	// (0x0008a608) list_medium_line_x2_t3_g3_t2

0xd742,	// (0x0008a608) list_medium_line_x2_t3_g3_t3_ParamLimits

0xd742,	// (0x0008a608) list_medium_line_x2_t3_g3_t3

0x0002,

0xf1e0,	// (0x0008c0a6) list_medium_line_x2_t3_g3_t_ParamLimits

0xf1e0,	// (0x0008c0a6) list_medium_line_x2_t3_g3_t

0xd4ce,	// (0x0008a394) list_medium_line_x2_t3_g2_g1_ParamLimits

0xd4ce,	// (0x0008a394) list_medium_line_x2_t3_g2_g1

0xd4ce,	// (0x0008a394) list_medium_line_x2_t3_g2_g2_ParamLimits

0xd4ce,	// (0x0008a394) list_medium_line_x2_t3_g2_g2

0x0001,

0xf1e7,	// (0x0008c0ad) list_medium_line_x2_t3_g2_g_ParamLimits

0xf1e7,	// (0x0008c0ad) list_medium_line_x2_t3_g2_g

0xd742,	// (0x0008a608) list_medium_line_x2_t3_g2_t1_ParamLimits

0xd742,	// (0x0008a608) list_medium_line_x2_t3_g2_t1

0xd742,	// (0x0008a608) list_medium_line_x2_t3_g2_t2_ParamLimits

0xd742,	// (0x0008a608) list_medium_line_x2_t3_g2_t2

0xd742,	// (0x0008a608) list_medium_line_x2_t3_g2_t3_ParamLimits

0xd742,	// (0x0008a608) list_medium_line_x2_t3_g2_t3

0x0002,

0xf1e0,	// (0x0008c0a6) list_medium_line_x2_t3_g2_t_ParamLimits

0xf1e0,	// (0x0008c0a6) list_medium_line_x2_t3_g2_t

0xd4ce,	// (0x0008a394) list_medium_line_x2_t4_g4_g1_ParamLimits

0xd4ce,	// (0x0008a394) list_medium_line_x2_t4_g4_g1

0xd4ce,	// (0x0008a394) list_medium_line_x2_t4_g4_g2_ParamLimits

0xd4ce,	// (0x0008a394) list_medium_line_x2_t4_g4_g2

0xd4ce,	// (0x0008a394) list_medium_line_x2_t4_g4_g3_ParamLimits

0xd4ce,	// (0x0008a394) list_medium_line_x2_t4_g4_g3

0xd4ce,	// (0x0008a394) list_medium_line_x2_t4_g4_g4_ParamLimits

0xd4ce,	// (0x0008a394) list_medium_line_x2_t4_g4_g4

0x0003,

0xf1ec,	// (0x0008c0b2) list_medium_line_x2_t4_g4_g_ParamLimits

0xf1ec,	// (0x0008c0b2) list_medium_line_x2_t4_g4_g

0xd742,	// (0x0008a608) list_medium_line_x2_t4_g4_t1_ParamLimits

0xd742,	// (0x0008a608) list_medium_line_x2_t4_g4_t1

0xd742,	// (0x0008a608) list_medium_line_x2_t4_g4_t2_ParamLimits

0xd742,	// (0x0008a608) list_medium_line_x2_t4_g4_t2

0xd742,	// (0x0008a608) list_medium_line_x2_t4_g4_t3_ParamLimits

0xd742,	// (0x0008a608) list_medium_line_x2_t4_g4_t3

0xd742,	// (0x0008a608) list_medium_line_x2_t4_g4_t4_ParamLimits

0xd742,	// (0x0008a608) list_medium_line_x2_t4_g4_t4

0x0003,

0xf1f5,	// (0x0008c0bb) list_medium_line_x2_t4_g4_t_ParamLimits

0xf1f5,	// (0x0008c0bb) list_medium_line_x2_t4_g4_t

0xd4ce,	// (0x0008a394) list_medium_line_x2_t2_g4_g1_ParamLimits

0xd4ce,	// (0x0008a394) list_medium_line_x2_t2_g4_g1

0xd4ce,	// (0x0008a394) list_medium_line_x2_t2_g4_g2_ParamLimits

0xd4ce,	// (0x0008a394) list_medium_line_x2_t2_g4_g2

0xd4ce,	// (0x0008a394) list_medium_line_x2_t2_g4_g3_ParamLimits

0xd4ce,	// (0x0008a394) list_medium_line_x2_t2_g4_g3

0xd4ce,	// (0x0008a394) list_medium_line_x2_t2_g4_g4_ParamLimits

0xd4ce,	// (0x0008a394) list_medium_line_x2_t2_g4_g4

0x0003,

0xf1ec,	// (0x0008c0b2) list_medium_line_x2_t2_g4_g_ParamLimits

0xf1ec,	// (0x0008c0b2) list_medium_line_x2_t2_g4_g

0xd742,	// (0x0008a608) list_medium_line_x2_t2_g4_t1_ParamLimits

0xd742,	// (0x0008a608) list_medium_line_x2_t2_g4_t1

0xd742,	// (0x0008a608) list_medium_line_x2_t2_g4_t2_ParamLimits

0xd742,	// (0x0008a608) list_medium_line_x2_t2_g4_t2

0x0001,

0xf25c,	// (0x0008c122) list_medium_line_x2_t2_g4_t_ParamLimits

0xf25c,	// (0x0008c122) list_medium_line_x2_t2_g4_t

0xd4ce,	// (0x0008a394) list_medium_line_x2_t2_g3_g1_ParamLimits

0xd4ce,	// (0x0008a394) list_medium_line_x2_t2_g3_g1

0xd4ce,	// (0x0008a394) list_medium_line_x2_t2_g3_g2_ParamLimits

0xd4ce,	// (0x0008a394) list_medium_line_x2_t2_g3_g2

0xd4ce,	// (0x0008a394) list_medium_line_x2_t2_g3_g3_ParamLimits

0xd4ce,	// (0x0008a394) list_medium_line_x2_t2_g3_g3

0x0002,

0xf1d9,	// (0x0008c09f) list_medium_line_x2_t2_g3_g_ParamLimits

0xf1d9,	// (0x0008c09f) list_medium_line_x2_t2_g3_g

0xd742,	// (0x0008a608) list_medium_line_x2_t2_g3_t1_ParamLimits

0xd742,	// (0x0008a608) list_medium_line_x2_t2_g3_t1

0xd742,	// (0x0008a608) list_medium_line_x2_t2_g3_t2_ParamLimits

0xd742,	// (0x0008a608) list_medium_line_x2_t2_g3_t2

0x0001,

0xf25c,	// (0x0008c122) list_medium_line_x2_t2_g3_t_ParamLimits

0xf25c,	// (0x0008c122) list_medium_line_x2_t2_g3_t

0x5dbe,	// (0x00082c84) main_sp_fs_list_pane_ParamLimits

0x5dbe,	// (0x00082c84) main_sp_fs_list_pane

0x5dca,	// (0x00082c90) sp_fs_scroll_pane_ParamLimits

0x5dca,	// (0x00082c90) sp_fs_scroll_pane

0x03d8,	// (0x0007d29e) list_medium_line_x2_t3_t1

0x03d8,	// (0x0007d29e) list_medium_line_x2_t3_t2

0x03d8,	// (0x0007d29e) list_medium_line_x2_t3_t3

0x0002,

0xf2a7,	// (0x0008c16d) list_medium_line_x2_t3_t

0x03d8,	// (0x0007d29e) list_medium_line_x3_t4_t1

0x03d8,	// (0x0007d29e) list_medium_line_x3_t4_t2

0x03d8,	// (0x0007d29e) list_medium_line_x3_t4_t3

0x03d8,	// (0x0007d29e) list_medium_line_x3_t4_t4

0x0003,

0xf2ae,	// (0x0008c174) list_medium_line_x3_t4_t

0x03d8,	// (0x0007d29e) list_medium_line_x4_t5_t1

0x03d8,	// (0x0007d29e) list_medium_line_x4_t5_t2

0x03d8,	// (0x0007d29e) list_medium_line_x4_t5_t3

0x03d8,	// (0x0007d29e) list_medium_line_x4_t5_t4

0x03d8,	// (0x0007d29e) list_medium_line_x4_t5_t5

0x0004,

0xf2b7,	// (0x0008c17d) list_medium_line_x4_t5_t

0xd4ce,	// (0x0008a394) list_medium_line_t4_g4_g1_ParamLimits

0xd4ce,	// (0x0008a394) list_medium_line_t4_g4_g1

0xd4ce,	// (0x0008a394) list_medium_line_t4_g4_g2_ParamLimits

0xd4ce,	// (0x0008a394) list_medium_line_t4_g4_g2

0xd4ce,	// (0x0008a394) list_medium_line_t4_g4_g3_ParamLimits

0xd4ce,	// (0x0008a394) list_medium_line_t4_g4_g3

0xd4ce,	// (0x0008a394) list_medium_line_t4_g4_g4_ParamLimits

0xd4ce,	// (0x0008a394) list_medium_line_t4_g4_g4

0x0003,

0xf1ec,	// (0x0008c0b2) list_medium_line_t4_g4_g_ParamLimits

0xf1ec,	// (0x0008c0b2) list_medium_line_t4_g4_g

0xd742,	// (0x0008a608) list_medium_line_t4_g4_t1_ParamLimits

0xd742,	// (0x0008a608) list_medium_line_t4_g4_t1

0xd742,	// (0x0008a608) list_medium_line_t4_g4_t2_ParamLimits

0xd742,	// (0x0008a608) list_medium_line_t4_g4_t2

0xd742,	// (0x0008a608) list_medium_line_t4_g4_t3_ParamLimits

0xd742,	// (0x0008a608) list_medium_line_t4_g4_t3

0xd742,	// (0x0008a608) list_medium_line_t4_g4_t4_ParamLimits

0xd742,	// (0x0008a608) list_medium_line_t4_g4_t4

0x0003,

0xf1f5,	// (0x0008c0bb) list_medium_line_t4_g4_t_ParamLimits

0xf1f5,	// (0x0008c0bb) list_medium_line_t4_g4_t

0x5ebd,	// (0x00082d83) chi_dic_find_pane_g1

0x6bce,	// (0x00083a94) main_tport_pane

0x03d8,	// (0x0007d29e) list_medium_line_plain_t1

0xd4ce,	// (0x0008a394) list_medium_line_t2_g2_g1_ParamLimits

0xd4ce,	// (0x0008a394) list_medium_line_t2_g2_g1

0xd4ce,	// (0x0008a394) list_medium_line_t2_g2_g2_ParamLimits

0xd4ce,	// (0x0008a394) list_medium_line_t2_g2_g2

0x0001,

0xf1e7,	// (0x0008c0ad) list_medium_line_t2_g2_g_ParamLimits

0xf1e7,	// (0x0008c0ad) list_medium_line_t2_g2_g

0xd742,	// (0x0008a608) list_medium_line_t2_g2_t1_ParamLimits

0xd742,	// (0x0008a608) list_medium_line_t2_g2_t1

0xd742,	// (0x0008a608) list_medium_line_t2_g2_t2_ParamLimits

0xd742,	// (0x0008a608) list_medium_line_t2_g2_t2

0x0001,

0xf25c,	// (0x0008c122) list_medium_line_t2_g2_t_ParamLimits

0xf25c,	// (0x0008c122) list_medium_line_t2_g2_t

0x23fe,	// (0x0007f2c4) aid_sp_fs_list_icon_a_sm

0x2de1,	// (0x0007fca7) aid_sp_fs_list_icon_d

0x2406,	// (0x0007f2cc) aid_sp_fs_text_primary

0xddb0,	// (0x0008ac76) aid_sp_fs_text_secondary

0xcdcd,	// (0x00089c93) list_medium_line

0xcdcd,	// (0x00089c93) list_medium_line_g2

0xcdcd,	// (0x00089c93) list_medium_line_g3

0xcdcd,	// (0x00089c93) list_medium_line_plain

0xcdcd,	// (0x00089c93) list_medium_line_plain_t2

0xcdcd,	// (0x00089c93) list_medium_line_plain_t3

0xcdcd,	// (0x00089c93) list_medium_line_right_icon

0xcdcd,	// (0x00089c93) list_medium_line_right_iconx2

0xcdcd,	// (0x00089c93) list_medium_line_t2

0xcdcd,	// (0x00089c93) list_medium_line_t2_g2

0xcdcd,	// (0x00089c93) list_medium_line_t2_g3

0xcdcd,	// (0x00089c93) list_medium_line_t2_right_icon

0xcdcd,	// (0x00089c93) list_medium_line_t2_right_iconx2

0xcdcd,	// (0x00089c93) list_medium_line_t3

0xcdcd,	// (0x00089c93) list_medium_line_t3_g2

0xcdcd,	// (0x00089c93) list_medium_line_t3_g3

0xcdcd,	// (0x00089c93) list_medium_line_t3_right_iconx2

0xcdcd,	// (0x00089c93) list_medium_line_t4_g4

0xcdcd,	// (0x00089c93) list_medium_line_x2

0xcdcd,	// (0x00089c93) list_medium_line_x2_t2_g2

0xcdcd,	// (0x00089c93) list_medium_line_x2_t2_g3

0xcdcd,	// (0x00089c93) list_medium_line_x2_t2_g4

0xcdcd,	// (0x00089c93) list_medium_line_x2_t3

0xcdcd,	// (0x00089c93) list_medium_line_x2_t3_g2

0xcdcd,	// (0x00089c93) list_medium_line_x2_t3_g3

0xcdcd,	// (0x00089c93) list_medium_line_x2_t3_g4

0xcdcd,	// (0x00089c93) list_medium_line_x2_t4_g2

0xcdcd,	// (0x00089c93) list_medium_line_x2_t4_g4

0xcdcd,	// (0x00089c93) list_medium_line_x3

0xcdcd,	// (0x00089c93) list_medium_line_x3_t4

0xcdcd,	// (0x00089c93) list_medium_line_x3_t4_g4

0xcdcd,	// (0x00089c93) list_medium_line_x4_t4

0xcdcd,	// (0x00089c93) list_medium_line_x4_t4_g7

0xcdcd,	// (0x00089c93) list_medium_line_x4_t5

0xa486,	// (0x0008734c) list_single_fs_dyc_pane_ParamLimits

0xa486,	// (0x0008734c) list_single_fs_dyc_pane

0xd4ce,	// (0x0008a394) list_medium_line_x4_t4_g7_g1_ParamLimits

0xd4ce,	// (0x0008a394) list_medium_line_x4_t4_g7_g1

0xd4ce,	// (0x0008a394) list_medium_line_x4_t4_g7_g2_ParamLimits

0xd4ce,	// (0x0008a394) list_medium_line_x4_t4_g7_g2

0xd4ce,	// (0x0008a394) list_medium_line_x4_t4_g7_g3_ParamLimits

0xd4ce,	// (0x0008a394) list_medium_line_x4_t4_g7_g3

0xd4ce,	// (0x0008a394) list_medium_line_x4_t4_g7_g4_ParamLimits

0xd4ce,	// (0x0008a394) list_medium_line_x4_t4_g7_g4

0xd4ce,	// (0x0008a394) list_medium_line_x4_t4_g7_g5_ParamLimits

0xd4ce,	// (0x0008a394) list_medium_line_x4_t4_g7_g5

0xd4ce,	// (0x0008a394) list_medium_line_x4_t4_g7_g6_ParamLimits

0xd4ce,	// (0x0008a394) list_medium_line_x4_t4_g7_g6

0xd4dc,	// (0x0008a3a2) list_medium_line_x4_t4_g7_g7_ParamLimits

0xd4dc,	// (0x0008a3a2) list_medium_line_x4_t4_g7_g7

0x0006,

0xfb4b,	// (0x0008ca11) list_medium_line_x4_t4_g7_g_ParamLimits

0xfb4b,	// (0x0008ca11) list_medium_line_x4_t4_g7_g

0xd742,	// (0x0008a608) list_medium_line_x4_t4_g7_t1_ParamLimits

0xd742,	// (0x0008a608) list_medium_line_x4_t4_g7_t1

0xd742,	// (0x0008a608) list_medium_line_x4_t4_g7_t2_ParamLimits

0xd742,	// (0x0008a608) list_medium_line_x4_t4_g7_t2

0xd742,	// (0x0008a608) list_medium_line_x4_t4_g7_t3_ParamLimits

0xd742,	// (0x0008a608) list_medium_line_x4_t4_g7_t3

0xd6fa,	// (0x0008a5c0) list_medium_line_x4_t4_g7_t4_ParamLimits

0xd6fa,	// (0x0008a5c0) list_medium_line_x4_t4_g7_t4

0xd6fa,	// (0x0008a5c0) list_medium_line_x4_t4_g7_t5_ParamLimits

0xd6fa,	// (0x0008a5c0) list_medium_line_x4_t4_g7_t5

0x0004,

0xfb5a,	// (0x0008ca20) list_medium_line_x4_t4_g7_t_ParamLimits

0xfb5a,	// (0x0008ca20) list_medium_line_x4_t4_g7_t

0xabba,	// (0x00087a80) list_single_dyc_row_pane_ParamLimits

0xabba,	// (0x00087a80) list_single_dyc_row_pane

0xb251,	// (0x00088117) call5_gesture_pane_ParamLimits

0xb251,	// (0x00088117) call5_gesture_pane

0xb285,	// (0x0008814b) call5_windows_pane_ParamLimits

0xb285,	// (0x0008814b) call5_windows_pane

0xb2d8,	// (0x0008819e) call5_swipe_1_pane_cp_ParamLimits

0xb2d8,	// (0x0008819e) call5_swipe_1_pane_cp

0xb2e4,	// (0x000881aa) call5_swipe_2_pane_cp_ParamLimits

0xb2e4,	// (0x000881aa) call5_swipe_2_pane_cp

0xd6f2,	// (0x0008a5b8) call5_image_pane_cp

0xb2f0,	// (0x000881b6) popup_call5_audio_first_window_cp_ParamLimits

0xb2f0,	// (0x000881b6) popup_call5_audio_first_window_cp

0xe8eb,	// (0x0008b7b1) call5_swipe_1_pane_g1_cp_ParamLimits

0xe8eb,	// (0x0008b7b1) call5_swipe_1_pane_g1_cp

0xe958,	// (0x0008b81e) call5_swipe_1_pane_g2_cp

0xe904,	// (0x0008b7ca) call5_swipe_1_pane_t1_cp_ParamLimits

0xe904,	// (0x0008b7ca) call5_swipe_1_pane_t1_cp

0xe8eb,	// (0x0008b7b1) call5_swipe_2_pane_g1_cp_ParamLimits

0xe8eb,	// (0x0008b7b1) call5_swipe_2_pane_g1_cp

0xe960,	// (0x0008b826) call5_swipe_2_pane_g2_cp

0xe968,	// (0x0008b82e) call5_swipe_2_pane_t1_cp_ParamLimits

0xe968,	// (0x0008b82e) call5_swipe_2_pane_t1_cp

0xd467,	// (0x0008a32d) main_sp_fs_email_pane

0xe97d,	// (0x0008b843) main_sp_fs_listscroll_pane_te

0xb2fe,	// (0x000881c4) popup_sp_fs_action_menu_pane_ParamLimits

0xb2fe,	// (0x000881c4) popup_sp_fs_action_menu_pane

0xd728,	// (0x0008a5ee) bg_sp_fs_ctrlbar_pane_g1

0xe986,	// (0x0008b84c) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe98f,	// (0x0008b855) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x1d1f,	// (0x0007ebe5) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xd728,	// (0x0008a5ee) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfc48,	// (0x0008cb0e) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x1ebf,	// (0x0007ed85) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x1ebf,	// (0x0007ed85) bg_sp_fs_ctrlbar_ddmenu_pane

0xe998,	// (0x0008b85e) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe998,	// (0x0008b85e) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe9a4,	// (0x0008b86a) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe9a4,	// (0x0008b86a) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfc51,	// (0x0008cb17) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfc51,	// (0x0008cb17) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe9b0,	// (0x0008b876) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe9b0,	// (0x0008b876) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xd728,	// (0x0008a5ee) list_medium_line_t2_right_icon_g1

0x03d8,	// (0x0007d29e) list_medium_line_t2_right_icon_t1

0x03d8,	// (0x0007d29e) list_medium_line_t2_right_icon_t2

0x0001,

0xfc56,	// (0x0008cb1c) list_medium_line_t2_right_icon_t

0x09d4,	// (0x0007d89a) bg_sp_fs_ctrlbar_pane_ParamLimits

0x09d4,	// (0x0007d89a) bg_sp_fs_ctrlbar_pane

0xb385,	// (0x0008824b) main_sp_fs_ctrlbar_button_pane_cp01

0xb38d,	// (0x00088253) main_sp_fs_ctrlbar_ddmenu_pane

0xea02,	// (0x0008b8c8) main_sp_fs_ctrlbar_pane_g1

0xea0e,	// (0x0008b8d4) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfc5b,	// (0x0008cb21) main_sp_fs_ctrlbar_pane_g

0xb3c9,	// (0x0008828f) main_sp_fs_ctrlbar_pane_t1

0xb404,	// (0x000882ca) main_sp_fs_ctrlbar_pane

0xb41a,	// (0x000882e0) main_sp_fs_listscroll_pane_te_cp01

0xb42b,	// (0x000882f1) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0xb42b,	// (0x000882f1) popup_sp_fs_action_menu_pane_cp01

0xd467,	// (0x0008a32d) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xd467,	// (0x0008a32d) bg_sp_fs_highlight_list_pane_cp01

0x2470,	// (0x0007f336) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x2470,	// (0x0007f336) sp_fs_action_menu_list_gene_pane_g1

0xea35,	// (0x0008b8fb) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xea35,	// (0x0008b8fb) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfc69,	// (0x0008cb2f) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfc69,	// (0x0008cb2f) sp_fs_action_menu_list_gene_pane_g

0x247f,	// (0x0007f345) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x247f,	// (0x0007f345) sp_fs_action_menu_list_gene_pane_t1

0x2497,	// (0x0007f35d) sp_fs_action_menu_list_gene_pane_ParamLimits

0x2497,	// (0x0007f35d) sp_fs_action_menu_list_gene_pane

0xea42,	// (0x0008b908) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xea42,	// (0x0008b908) popup_sp_fs_action_menu_bg_pane

0x24b6,	// (0x0007f37c) sp_fs_action_menu_list_pane_ParamLimits

0x24b6,	// (0x0007f37c) sp_fs_action_menu_list_pane

0xe724,	// (0x0008b5ea) sp_fs_scroll_pane_cp01_ParamLimits

0xe724,	// (0x0008b5ea) sp_fs_scroll_pane_cp01

0x03d8,	// (0x0007d29e) list_medium_line_plain_t2_t1

0x03d8,	// (0x0007d29e) list_medium_line_plain_t2_t2

0x0001,

0xfc56,	// (0x0008cb1c) list_medium_line_plain_t2_t

0x03d8,	// (0x0007d29e) list_medium_line_plain_t3_t1

0x03d8,	// (0x0007d29e) list_medium_line_plain_t3_t2

0x03d8,	// (0x0007d29e) list_medium_line_plain_t3_t3

0x0002,

0xf2a7,	// (0x0008c16d) list_medium_line_plain_t3_t

0xd4ce,	// (0x0008a394) list_medium_line_x2_t2_g2_g1_ParamLimits

0xd4ce,	// (0x0008a394) list_medium_line_x2_t2_g2_g1

0xd4ce,	// (0x0008a394) list_medium_line_x2_t2_g2_g2_ParamLimits

0xd4ce,	// (0x0008a394) list_medium_line_x2_t2_g2_g2

0x0001,

0xf1e7,	// (0x0008c0ad) list_medium_line_x2_t2_g2_g_ParamLimits

0xf1e7,	// (0x0008c0ad) list_medium_line_x2_t2_g2_g

0xd742,	// (0x0008a608) list_medium_line_x2_t2_g2_t1_ParamLimits

0xd742,	// (0x0008a608) list_medium_line_x2_t2_g2_t1

0xd742,	// (0x0008a608) list_medium_line_x2_t2_g2_t2_ParamLimits

0xd742,	// (0x0008a608) list_medium_line_x2_t2_g2_t2

0x0001,

0xf25c,	// (0x0008c122) list_medium_line_x2_t2_g2_t_ParamLimits

0xf25c,	// (0x0008c122) list_medium_line_x2_t2_g2_t

0xd4ce,	// (0x0008a394) list_medium_line_x2_t4_g2_g1_ParamLimits

0xd4ce,	// (0x0008a394) list_medium_line_x2_t4_g2_g1

0xd4ce,	// (0x0008a394) list_medium_line_x2_t4_g2_g2_ParamLimits

0xd4ce,	// (0x0008a394) list_medium_line_x2_t4_g2_g2

0x0001,

0xf1e7,	// (0x0008c0ad) list_medium_line_x2_t4_g2_g_ParamLimits

0xf1e7,	// (0x0008c0ad) list_medium_line_x2_t4_g2_g

0xd742,	// (0x0008a608) list_medium_line_x2_t4_g2_t1_ParamLimits

0xd742,	// (0x0008a608) list_medium_line_x2_t4_g2_t1

0xd742,	// (0x0008a608) list_medium_line_x2_t4_g2_t2_ParamLimits

0xd742,	// (0x0008a608) list_medium_line_x2_t4_g2_t2

0xd742,	// (0x0008a608) list_medium_line_x2_t4_g2_t3_ParamLimits

0xd742,	// (0x0008a608) list_medium_line_x2_t4_g2_t3

0xd742,	// (0x0008a608) list_medium_line_x2_t4_g2_t4_ParamLimits

0xd742,	// (0x0008a608) list_medium_line_x2_t4_g2_t4

0x0003,

0xf1f5,	// (0x0008c0bb) list_medium_line_x2_t4_g2_t_ParamLimits

0xf1f5,	// (0x0008c0bb) list_medium_line_x2_t4_g2_t

0xd728,	// (0x0008a5ee) list_medium_line_t3_right_iconx2_g1

0xd728,	// (0x0008a5ee) list_medium_line_t3_right_iconx2_g2

0xd728,	// (0x0008a5ee) list_medium_line_t3_right_iconx2_g3

0x0002,

0xf3c8,	// (0x0008c28e) list_medium_line_t3_right_iconx2_g

0x03d8,	// (0x0007d29e) list_medium_line_t3_right_iconx2_t1

0x03d8,	// (0x0007d29e) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfc56,	// (0x0008cb1c) list_medium_line_t3_right_iconx2_t

0xd4ce,	// (0x0008a394) list_medium_line_x3_t4_g4_g1_ParamLimits

0xd4ce,	// (0x0008a394) list_medium_line_x3_t4_g4_g1

0xd4ce,	// (0x0008a394) list_medium_line_x3_t4_g4_g2_ParamLimits

0xd4ce,	// (0x0008a394) list_medium_line_x3_t4_g4_g2

0xd4ce,	// (0x0008a394) list_medium_line_x3_t4_g4_g3_ParamLimits

0xd4ce,	// (0x0008a394) list_medium_line_x3_t4_g4_g3

0xd4ce,	// (0x0008a394) list_medium_line_x3_t4_g4_g4_ParamLimits

0xd4ce,	// (0x0008a394) list_medium_line_x3_t4_g4_g4

0x0003,

0xf1ec,	// (0x0008c0b2) list_medium_line_x3_t4_g4_g_ParamLimits

0xf1ec,	// (0x0008c0b2) list_medium_line_x3_t4_g4_g

0xd742,	// (0x0008a608) list_medium_line_x3_t4_g4_t1_ParamLimits

0xd742,	// (0x0008a608) list_medium_line_x3_t4_g4_t1

0xd742,	// (0x0008a608) list_medium_line_x3_t4_g4_t2_ParamLimits

0xd742,	// (0x0008a608) list_medium_line_x3_t4_g4_t2

0xd742,	// (0x0008a608) list_medium_line_x3_t4_g4_t3_ParamLimits

0xd742,	// (0x0008a608) list_medium_line_x3_t4_g4_t3

0xd742,	// (0x0008a608) list_medium_line_x3_t4_g4_t4_ParamLimits

0xd742,	// (0x0008a608) list_medium_line_x3_t4_g4_t4

0x0003,

0xf1f5,	// (0x0008c0bb) list_medium_line_x3_t4_g4_t_ParamLimits

0xf1f5,	// (0x0008c0bb) list_medium_line_x3_t4_g4_t

0xb44b,	// (0x00088311) list_single_dyc_row_text_pane_t1_ParamLimits

0xb44b,	// (0x00088311) list_single_dyc_row_text_pane_t1

0xb482,	// (0x00088348) list_single_dyc_row_text_pane_t2_ParamLimits

0xb482,	// (0x00088348) list_single_dyc_row_text_pane_t2

0x24d6,	// (0x0007f39c) list_single_dyc_row_text_pane_t3_ParamLimits

0x24d6,	// (0x0007f39c) list_single_dyc_row_text_pane_t3

0x0005,

0xfc6e,	// (0x0008cb34) list_single_dyc_row_text_pane_t_ParamLimits

0xfc6e,	// (0x0008cb34) list_single_dyc_row_text_pane_t

0x24fa,	// (0x0007f3c0) list_single_dyc_row_pane_g1_ParamLimits

0x24fa,	// (0x0007f3c0) list_single_dyc_row_pane_g1

0x2506,	// (0x0007f3cc) list_single_dyc_row_pane_g2_ParamLimits

0x2506,	// (0x0007f3cc) list_single_dyc_row_pane_g2

0x2512,	// (0x0007f3d8) list_single_dyc_row_pane_g3_ParamLimits

0x2512,	// (0x0007f3d8) list_single_dyc_row_pane_g3

0x251e,	// (0x0007f3e4) list_single_dyc_row_pane_g4_ParamLimits

0x251e,	// (0x0007f3e4) list_single_dyc_row_pane_g4

0x0003,

0xfc7b,	// (0x0008cb41) list_single_dyc_row_pane_g_ParamLimits

0xfc7b,	// (0x0008cb41) list_single_dyc_row_pane_g

0x252a,	// (0x0007f3f0) list_single_dyc_row_text_pane_ParamLimits

0x252a,	// (0x0007f3f0) list_single_dyc_row_text_pane

0xcdcd,	// (0x00089c93) bg_sp_fs_scroll_pane

0xea50,	// (0x0008b916) thumb_sp_fs_scroll_pane

0xd4ce,	// (0x0008a394) list_medium_line_g1_ParamLimits

0xd4ce,	// (0x0008a394) list_medium_line_g1

0xd742,	// (0x0008a608) list_medium_line_t1_ParamLimits

0xd742,	// (0x0008a608) list_medium_line_t1

0xd4ce,	// (0x0008a394) list_medium_line_x2_g1_ParamLimits

0xd4ce,	// (0x0008a394) list_medium_line_x2_g1

0xd4ce,	// (0x0008a394) list_medium_line_x2_g2_ParamLimits

0xd4ce,	// (0x0008a394) list_medium_line_x2_g2

0x0001,

0xf1e7,	// (0x0008c0ad) list_medium_line_x2_g_ParamLimits

0xf1e7,	// (0x0008c0ad) list_medium_line_x2_g

0xd742,	// (0x0008a608) list_medium_line_x2_t1_ParamLimits

0xd742,	// (0x0008a608) list_medium_line_x2_t1

0xd4ce,	// (0x0008a394) list_medium_line_x3_g1_ParamLimits

0xd4ce,	// (0x0008a394) list_medium_line_x3_g1

0xdae9,	// (0x0008a9af) list_medium_line_x3_g2_ParamLimits

0xdae9,	// (0x0008a9af) list_medium_line_x3_g2

0x0001,

0xfc84,	// (0x0008cb4a) list_medium_line_x3_g_ParamLimits

0xfc84,	// (0x0008cb4a) list_medium_line_x3_g

0xea59,	// (0x0008b91f) list_medium_line_x3_t1_ParamLimits

0xea59,	// (0x0008b91f) list_medium_line_x3_t1

0xea6d,	// (0x0008b933) thumb_sp_fs_scroll_pane_g1

0xea76,	// (0x0008b93c) thumb_sp_fs_scroll_pane_g2

0xea7f,	// (0x0008b945) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfc89,	// (0x0008cb4f) thumb_sp_fs_scroll_pane_g

0xea6d,	// (0x0008b933) bg_sp_fs_scroll_pane_g1

0xea76,	// (0x0008b93c) bg_sp_fs_scroll_pane_g2

0xea7f,	// (0x0008b945) bg_sp_fs_scroll_pane_g3

0x0002,

0xfc89,	// (0x0008cb4f) bg_sp_fs_scroll_pane_g

0xd4ce,	// (0x0008a394) list_medium_line_x2_t3_g4_g1_ParamLimits

0xd4ce,	// (0x0008a394) list_medium_line_x2_t3_g4_g1

0xd4ce,	// (0x0008a394) list_medium_line_x2_t3_g4_g2_ParamLimits

0xd4ce,	// (0x0008a394) list_medium_line_x2_t3_g4_g2

0xd4ce,	// (0x0008a394) list_medium_line_x2_t3_g4_g3_ParamLimits

0xd4ce,	// (0x0008a394) list_medium_line_x2_t3_g4_g3

0xd4ce,	// (0x0008a394) list_medium_line_x2_t3_g4_g4_ParamLimits

0xd4ce,	// (0x0008a394) list_medium_line_x2_t3_g4_g4

0x0003,

0xf1ec,	// (0x0008c0b2) list_medium_line_x2_t3_g4_g_ParamLimits

0xf1ec,	// (0x0008c0b2) list_medium_line_x2_t3_g4_g

0xd742,	// (0x0008a608) list_medium_line_x2_t3_g4_t1_ParamLimits

0xd742,	// (0x0008a608) list_medium_line_x2_t3_g4_t1

0xd742,	// (0x0008a608) list_medium_line_x2_t3_g4_t2_ParamLimits

0xd742,	// (0x0008a608) list_medium_line_x2_t3_g4_t2

0xd742,	// (0x0008a608) list_medium_line_x2_t3_g4_t3_ParamLimits

0xd742,	// (0x0008a608) list_medium_line_x2_t3_g4_t3

0x0002,

0xf1e0,	// (0x0008c0a6) list_medium_line_x2_t3_g4_t_ParamLimits

0xf1e0,	// (0x0008c0a6) list_medium_line_x2_t3_g4_t

0xd4ce,	// (0x0008a394) list_medium_line_g2_g1_ParamLimits

0xd4ce,	// (0x0008a394) list_medium_line_g2_g1

0xd4ce,	// (0x0008a394) list_medium_line_g2_g2_ParamLimits

0xd4ce,	// (0x0008a394) list_medium_line_g2_g2

0x0001,

0xf1e7,	// (0x0008c0ad) list_medium_line_g2_g_ParamLimits

0xf1e7,	// (0x0008c0ad) list_medium_line_g2_g

0xd742,	// (0x0008a608) list_medium_line_g2_t1_ParamLimits

0xd742,	// (0x0008a608) list_medium_line_g2_t1

0xd4ce,	// (0x0008a394) list_medium_line_t3_g2_g1_ParamLimits

0xd4ce,	// (0x0008a394) list_medium_line_t3_g2_g1

0xd4ce,	// (0x0008a394) list_medium_line_t3_g2_g2_ParamLimits

0xd4ce,	// (0x0008a394) list_medium_line_t3_g2_g2

0x0001,

0xf1e7,	// (0x0008c0ad) list_medium_line_t3_g2_g_ParamLimits

0xf1e7,	// (0x0008c0ad) list_medium_line_t3_g2_g

0xd742,	// (0x0008a608) list_medium_line_t3_g2_t1_ParamLimits

0xd742,	// (0x0008a608) list_medium_line_t3_g2_t1

0xd742,	// (0x0008a608) list_medium_line_t3_g2_t2_ParamLimits

0xd742,	// (0x0008a608) list_medium_line_t3_g2_t2

0xd742,	// (0x0008a608) list_medium_line_t3_g2_t3_ParamLimits

0xd742,	// (0x0008a608) list_medium_line_t3_g2_t3

0x0002,

0xf1e0,	// (0x0008c0a6) list_medium_line_t3_g2_t_ParamLimits

0xf1e0,	// (0x0008c0a6) list_medium_line_t3_g2_t

0xd728,	// (0x0008a5ee) list_medium_line_right_icon_g1

0x03d8,	// (0x0007d29e) list_medium_line_right_icon_t1

0xd4ce,	// (0x0008a394) list_medium_line_t2_g1_ParamLimits

0xd4ce,	// (0x0008a394) list_medium_line_t2_g1

0xd742,	// (0x0008a608) list_medium_line_t2_t1_ParamLimits

0xd742,	// (0x0008a608) list_medium_line_t2_t1

0xd742,	// (0x0008a608) list_medium_line_t2_t2_ParamLimits

0xd742,	// (0x0008a608) list_medium_line_t2_t2

0x0001,

0xf25c,	// (0x0008c122) list_medium_line_t2_t_ParamLimits

0xf25c,	// (0x0008c122) list_medium_line_t2_t

0xd4ce,	// (0x0008a394) list_medium_line_t3_g1_ParamLimits

0xd4ce,	// (0x0008a394) list_medium_line_t3_g1

0xd742,	// (0x0008a608) list_medium_line_t3_t1_ParamLimits

0xd742,	// (0x0008a608) list_medium_line_t3_t1

0xd742,	// (0x0008a608) list_medium_line_t3_t2_ParamLimits

0xd742,	// (0x0008a608) list_medium_line_t3_t2

0xd742,	// (0x0008a608) list_medium_line_t3_t3_ParamLimits

0xd742,	// (0x0008a608) list_medium_line_t3_t3

0x0002,

0xf1e0,	// (0x0008c0a6) list_medium_line_t3_t_ParamLimits

0xf1e0,	// (0x0008c0a6) list_medium_line_t3_t

0xd4ce,	// (0x0008a394) list_medium_line_g3_g1_ParamLimits

0xd4ce,	// (0x0008a394) list_medium_line_g3_g1

0xd4ce,	// (0x0008a394) list_medium_line_g3_g2_ParamLimits

0xd4ce,	// (0x0008a394) list_medium_line_g3_g2

0xd4ce,	// (0x0008a394) list_medium_line_g3_g3_ParamLimits

0xd4ce,	// (0x0008a394) list_medium_line_g3_g3

0x0002,

0xf1d9,	// (0x0008c09f) list_medium_line_g3_g_ParamLimits

0xf1d9,	// (0x0008c09f) list_medium_line_g3_g

0xd742,	// (0x0008a608) list_medium_line_g3_t1_ParamLimits

0xd742,	// (0x0008a608) list_medium_line_g3_t1

0xd4ce,	// (0x0008a394) list_medium_line_t2_g3_g1_ParamLimits

0xd4ce,	// (0x0008a394) list_medium_line_t2_g3_g1

0xd4ce,	// (0x0008a394) list_medium_line_t2_g3_g2_ParamLimits

0xd4ce,	// (0x0008a394) list_medium_line_t2_g3_g2

0xd4ce,	// (0x0008a394) list_medium_line_t2_g3_g3_ParamLimits

0xd4ce,	// (0x0008a394) list_medium_line_t2_g3_g3

0x0002,

0xf1d9,	// (0x0008c09f) list_medium_line_t2_g3_g_ParamLimits

0xf1d9,	// (0x0008c09f) list_medium_line_t2_g3_g

0xd742,	// (0x0008a608) list_medium_line_t2_g3_t1_ParamLimits

0xd742,	// (0x0008a608) list_medium_line_t2_g3_t1

0xd742,	// (0x0008a608) list_medium_line_t2_g3_t2_ParamLimits

0xd742,	// (0x0008a608) list_medium_line_t2_g3_t2

0x0001,

0xf25c,	// (0x0008c122) list_medium_line_t2_g3_t_ParamLimits

0xf25c,	// (0x0008c122) list_medium_line_t2_g3_t

0xd4ce,	// (0x0008a394) list_medium_line_t3_g3_g1_ParamLimits

0xd4ce,	// (0x0008a394) list_medium_line_t3_g3_g1

0xd4ce,	// (0x0008a394) list_medium_line_t3_g3_g2_ParamLimits

0xd4ce,	// (0x0008a394) list_medium_line_t3_g3_g2

0xd4ce,	// (0x0008a394) list_medium_line_t3_g3_g3_ParamLimits

0xd4ce,	// (0x0008a394) list_medium_line_t3_g3_g3

0x0002,

0xf1d9,	// (0x0008c09f) list_medium_line_t3_g3_g_ParamLimits

0xf1d9,	// (0x0008c09f) list_medium_line_t3_g3_g

0xd742,	// (0x0008a608) list_medium_line_t3_g3_t1_ParamLimits

0xd742,	// (0x0008a608) list_medium_line_t3_g3_t1

0xd742,	// (0x0008a608) list_medium_line_t3_g3_t2_ParamLimits

0xd742,	// (0x0008a608) list_medium_line_t3_g3_t2

0xd742,	// (0x0008a608) list_medium_line_t3_g3_t3_ParamLimits

0xd742,	// (0x0008a608) list_medium_line_t3_g3_t3

0x0002,

0xf1e0,	// (0x0008c0a6) list_medium_line_t3_g3_t_ParamLimits

0xf1e0,	// (0x0008c0a6) list_medium_line_t3_g3_t

0xd728,	// (0x0008a5ee) list_medium_line_right_iconx2_g1

0xd728,	// (0x0008a5ee) list_medium_line_right_iconx2_g2

0x0001,

0xf3c3,	// (0x0008c289) list_medium_line_right_iconx2_g

0x03d8,	// (0x0007d29e) list_medium_line_right_iconx2_t1

0xd728,	// (0x0008a5ee) list_medium_line_t2_right_iconx2_g1

0xd728,	// (0x0008a5ee) list_medium_line_t2_right_iconx2_g2

0x0001,

0xf3c3,	// (0x0008c289) list_medium_line_t2_right_iconx2_g

0x03d8,	// (0x0007d29e) list_medium_line_t2_right_iconx2_t1

0x03d8,	// (0x0007d29e) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfc56,	// (0x0008cb1c) list_medium_line_t2_right_iconx2_t

0x03d8,	// (0x0007d29e) list_medium_line_x4_t4_t1

0x03d8,	// (0x0007d29e) list_medium_line_x4_t4_t2

0x03d8,	// (0x0007d29e) list_medium_line_x4_t4_t3

0x03d8,	// (0x0007d29e) list_medium_line_x4_t4_t4

0x0003,

0xf2ae,	// (0x0008c174) list_medium_line_x4_t4_t

0xb5cf,	// (0x00088495) tport_appsw_pane_ParamLimits

0xb5cf,	// (0x00088495) tport_appsw_pane

0xb5dd,	// (0x000884a3) tport_contact_pane_ParamLimits

0xb5dd,	// (0x000884a3) tport_contact_pane

0xb5ed,	// (0x000884b3) tport_listscroll_pane_ParamLimits

0xb5ed,	// (0x000884b3) tport_listscroll_pane

0xb5fd,	// (0x000884c3) cell_tport_appsw_pane_ParamLimits

0xb5fd,	// (0x000884c3) cell_tport_appsw_pane

0xd4dc,	// (0x0008a3a2) tport_appsw_pane_g1_ParamLimits

0xd4dc,	// (0x0008a3a2) tport_appsw_pane_g1

0xea88,	// (0x0008b94e) tport_contact_pane_g1

0xea91,	// (0x0008b957) tport_contact_pane_t1

0xea9f,	// (0x0008b965) tport_contact_pane_t2

0x0001,

0xfc90,	// (0x0008cb56) tport_contact_pane_t

0xeaad,	// (0x0008b973) list_tport_pane

0xeab6,	// (0x0008b97c) scroll_pane_cp_030

0xb630,	// (0x000884f6) cell_tport_appsw_pane_g1

0xb640,	// (0x00088506) cell_tport_appsw_pane_t1

0xb64e,	// (0x00088514) grid_highlight_pane_cp019

0xb656,	// (0x0008851c) list_tport_double_graphic_pane_ParamLimits

0xb656,	// (0x0008851c) list_tport_double_graphic_pane

0xd467,	// (0x0008a32d) list_highlight_pane_cp023_ParamLimits

0xd467,	// (0x0008a32d) list_highlight_pane_cp023

0xb667,	// (0x0008852d) list_tport_double_graphic_pane_g1_ParamLimits

0xb667,	// (0x0008852d) list_tport_double_graphic_pane_g1

0xb674,	// (0x0008853a) list_tport_double_graphic_pane_t1_ParamLimits

0xb674,	// (0x0008853a) list_tport_double_graphic_pane_t1

0xb689,	// (0x0008854f) list_tport_double_graphic_pane_t2_ParamLimits

0xb689,	// (0x0008854f) list_tport_double_graphic_pane_t2

0x0001,

0xfc9c,	// (0x0008cb62) list_tport_double_graphic_pane_t_ParamLimits

0xfc9c,	// (0x0008cb62) list_tport_double_graphic_pane_t

0xcdcd,	// (0x00089c93) main_cale_note_pane

0x939f,	// (0x00086265) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x939f,	// (0x00086265) cell_vitu2_function_top_wide_pane_cp01

0xaf61,	// (0x00087e27) wait_bar_pane_cp05_ParamLimits

0xd467,	// (0x0008a32d) listscroll_cmail_pane

0xeabf,	// (0x0008b985) list_cmail_pane

0xb69b,	// (0x00088561) list_cmail_body_pane

0xb6c3,	// (0x00088589) list_single_cmail_header_caption_pane

0xb6f2,	// (0x000885b8) list_single_cmail_header_detail_pane_ParamLimits

0xb6f2,	// (0x000885b8) list_single_cmail_header_detail_pane

0xeacf,	// (0x0008b995) list_single_cmail_header_caption_pane_t1

0xb72b,	// (0x000885f1) list_single_cmail_header_detail_pane_g1_ParamLimits

0xb72b,	// (0x000885f1) list_single_cmail_header_detail_pane_g1

0x2dff,	// (0x0007fcc5) list_single_cmail_header_detail_pane_g2_ParamLimits

0x2dff,	// (0x0007fcc5) list_single_cmail_header_detail_pane_g2

0x0002,

0xfca1,	// (0x0008cb67) list_single_cmail_header_detail_pane_g_ParamLimits

0xfca1,	// (0x0008cb67) list_single_cmail_header_detail_pane_g

0x2549,	// (0x0007f40f) list_single_cmail_header_detail_pane_t1_ParamLimits

0x2549,	// (0x0007f40f) list_single_cmail_header_detail_pane_t1

0x25a9,	// (0x0007f46f) list_single_cmail_header_editor_pane_bg_ParamLimits

0x25a9,	// (0x0007f46f) list_single_cmail_header_editor_pane_bg

0xe54c,	// (0x0008b412) list_cmail_body_pane_g1

0xeaf3,	// (0x0008b9b9) list_cmail_body_pane_t1

0x94c1,	// (0x00086387) list_single_cmail_header_editor_pane_bg_g1

0xd94d,	// (0x0008a813) list_single_cmail_header_editor_pane_bg_g1_copy1

0x94d1,	// (0x00086397) list_single_cmail_header_editor_pane_bg_g1_copy2

0x94c9,	// (0x0008638f) list_single_cmail_header_editor_pane_bg_g1_copy3

0xdb38,	// (0x0008a9fe) list_single_cmail_header_editor_pane_bg_g1_copy4

0x94f1,	// (0x000863b7) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x94e1,	// (0x000863a7) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x94e9,	// (0x000863af) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xd92d,	// (0x0008a7f3) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xb741,	// (0x00088607) calenote_gesture_pane_ParamLimits

0xb741,	// (0x00088607) calenote_gesture_pane

0xb75b,	// (0x00088621) calenote_window_pane_ParamLimits

0xb75b,	// (0x00088621) calenote_window_pane

0xeb01,	// (0x0008b9c7) popup_note_window_cp01

0xb773,	// (0x00088639) calenote_swipe_1_pane_ParamLimits

0xb773,	// (0x00088639) calenote_swipe_1_pane

0xb2e4,	// (0x000881aa) calenote_swipe_2_pane_ParamLimits

0xb2e4,	// (0x000881aa) calenote_swipe_2_pane

0xe8eb,	// (0x0008b7b1) calenote_swipe_1_pane_g1_ParamLimits

0xe8eb,	// (0x0008b7b1) calenote_swipe_1_pane_g1

0xe8f8,	// (0x0008b7be) calenote_swipe_1_pane_g2_ParamLimits

0xe8f8,	// (0x0008b7be) calenote_swipe_1_pane_g2

0x0001,

0xfc3e,	// (0x0008cb04) calenote_swipe_1_pane_g_ParamLimits

0xfc3e,	// (0x0008cb04) calenote_swipe_1_pane_g

0xeb13,	// (0x0008b9d9) calenote_swipe_1_pane_t1_ParamLimits

0xeb13,	// (0x0008b9d9) calenote_swipe_1_pane_t1

0xe8eb,	// (0x0008b7b1) calenote_swipe_2_pane_g1_ParamLimits

0xe8eb,	// (0x0008b7b1) calenote_swipe_2_pane_g1

0xeb32,	// (0x0008b9f8) calenote_swipe_2_pane_g2_ParamLimits

0xeb32,	// (0x0008b9f8) calenote_swipe_2_pane_g2

0x0001,

0xfcad,	// (0x0008cb73) calenote_swipe_2_pane_g_ParamLimits

0xfcad,	// (0x0008cb73) calenote_swipe_2_pane_g

0xeb3e,	// (0x0008ba04) calenote_swipe_2_pane_t1_ParamLimits

0xeb3e,	// (0x0008ba04) calenote_swipe_2_pane_t1

0xcdcd,	// (0x00089c93) main_mup_navstr_pane

0x7c1d,	// (0x00084ae3) main_mup3_pane_t7_ParamLimits

0x7c1d,	// (0x00084ae3) main_mup3_pane_t7

0x8961,	// (0x00085827) main_mp4_pane_g6_ParamLimits

0x8961,	// (0x00085827) main_mp4_pane_g6

0x8d9e,	// (0x00085c64) main_image3_pane_t4_ParamLimits

0x8d9e,	// (0x00085c64) main_image3_pane_t4

0xb786,	// (0x0008864c) popup_navstr_preview_pane_ParamLimits

0xb786,	// (0x0008864c) popup_navstr_preview_pane

0xb792,	// (0x00088658) scroll_navstr_pane_ParamLimits

0xb792,	// (0x00088658) scroll_navstr_pane

0xcdcd,	// (0x00089c93) bg_popup_preview_window_pane_cp04

0xeb65,	// (0x0008ba2b) popup_navstr_preview_pane_t1

0xb79e,	// (0x00088664) scroll_navstr_pane_g1_ParamLimits

0xb79e,	// (0x00088664) scroll_navstr_pane_g1

0xb7ab,	// (0x00088671) scroll_navstr_pane_t1_ParamLimits

0xb7ab,	// (0x00088671) scroll_navstr_pane_t1

0xeb0a,	// (0x0008b9d0) bg_button_pane_cp014

0xeb0a,	// (0x0008b9d0) bg_button_pane_cp030

0x2453,	// (0x0007f319) list_double_fisheye_pane_g4_ParamLimits

0x2453,	// (0x0007f319) list_double_fisheye_pane_g4

0x245f,	// (0x0007f325) list_double_fisheye_pane_g5_ParamLimits

0x245f,	// (0x0007f325) list_double_fisheye_pane_g5

0xe74a,	// (0x0008b610) sp_fs_scroll_pane_cp03

0xea02,	// (0x0008b8c8) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xea0e,	// (0x0008b8d4) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfc5b,	// (0x0008cb21) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xb3c9,	// (0x0008828f) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xeac7,	// (0x0008b98d) sp_fs_scroll_pane_cp02

0xd63a,	// (0x0008a500) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xd63a,	// (0x0008a500) popup_sp_fs_calendar_preview_list_single_pane

0xcdcd,	// (0x00089c93) main_cam6_pano_pane

0x6bb2,	// (0x00083a78) main_mup3_pane_ParamLimits

0xcdcd,	// (0x00089c93) main_phacti_pane

0xae36,	// (0x00087cfc) bg_button_pane_cp11

0xae4e,	// (0x00087d14) main_mobtv_info_pane_g2_ParamLimits

0xae4e,	// (0x00087d14) main_mobtv_info_pane_g2

0x0001,

0xfbbb,	// (0x0008ca81) main_mobtv_info_pane_g_ParamLimits

0xfbbb,	// (0x0008ca81) main_mobtv_info_pane_g

0xb000,	// (0x00087ec6) sc_clock_pane_t5_ParamLimits

0xb000,	// (0x00087ec6) sc_clock_pane_t5

0xb0a1,	// (0x00087f67) main_radioblah_pane_g1_ParamLimits

0xe837,	// (0x0008b6fd) main_radioblah_pane_t3_ParamLimits

0xe837,	// (0x0008b6fd) main_radioblah_pane_t3

0xe84f,	// (0x0008b715) main_radioblah_pane_t4_ParamLimits

0xe84f,	// (0x0008b715) main_radioblah_pane_t4

0xb0bf,	// (0x00087f85) main_radioblah_text_pane_ParamLimits

0xb0bf,	// (0x00087f85) main_radioblah_text_pane

0xb0cc,	// (0x00087f92) main_radioblah_info_pane_g1_ParamLimits

0xb161,	// (0x00088027) main_radioblah_info_pane_t4_ParamLimits

0xb161,	// (0x00088027) main_radioblah_info_pane_t4

0xd467,	// (0x0008a32d) main_sp_fs_calendar_pane

0xb7bd,	// (0x00088683) main_phacti_pane_g1

0xb7c5,	// (0x0008868b) phacti_note_pane_ParamLimits

0xb7c5,	// (0x0008868b) phacti_note_pane

0xeb7c,	// (0x0008ba42) phacti_term_pane_ParamLimits

0xeb7c,	// (0x0008ba42) phacti_term_pane

0xeb91,	// (0x0008ba57) phacti_note_pane_t1_ParamLimits

0xeb91,	// (0x0008ba57) phacti_note_pane_t1

0x25c0,	// (0x0007f486) phacti_term_pane_g1

0x25c8,	// (0x0007f48e) phacti_term_pane_t1_ParamLimits

0x25c8,	// (0x0007f48e) phacti_term_pane_t1

0xeba8,	// (0x0008ba6e) popup_sp_fs_calendar_preview_list_single_pane_g1

0xebb0,	// (0x0008ba76) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfcb7,	// (0x0008cb7d) popup_sp_fs_calendar_preview_list_single_pane_g

0xebb8,	// (0x0008ba7e) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xebb8,	// (0x0008ba7e) popup_sp_fs_calendar_preview_list_single_pane_t1

0xebce,	// (0x0008ba94) aid_popup_sp_fs_bg_corner_pane

0xd728,	// (0x0008a5ee) popup_sp_fs_calendar_preview_bg_pane_g1

0xcdcd,	// (0x00089c93) popup_sp_fs_calendar_preview_bg_pane

0xebd6,	// (0x0008ba9c) popup_sp_fs_calendar_preview_list_pane

0x09d4,	// (0x0007d89a) bg_main_sp_fs_cale_pane_ParamLimits

0x09d4,	// (0x0007d89a) bg_main_sp_fs_cale_pane

0x25fb,	// (0x0007f4c1) listscroll_cale_mrui_pane_ParamLimits

0x25fb,	// (0x0007f4c1) listscroll_cale_mrui_pane

0x2610,	// (0x0007f4d6) listscroll_sp_fs_schedule_track_pane

0x2619,	// (0x0007f4df) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x2619,	// (0x0007f4df) main_sp_fs_ctrlbar_pane_cp01

0xebde,	// (0x0008baa4) main_sp_fs_ribbon_pane

0x262c,	// (0x0007f4f2) popup_sp_fs_cale_preview_window

0xb828,	// (0x000886ee) list_single_sp_fs_schedule_track_pane_ParamLimits

0xb828,	// (0x000886ee) list_single_sp_fs_schedule_track_pane

0xd4c0,	// (0x0008a386) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xd4c0,	// (0x0008a386) bg_sp_fs_highlight_list_pane_cp03

0xb84e,	// (0x00088714) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xb84e,	// (0x00088714) list_single_sp_fs_schedule_track_pane_g1

0xb85a,	// (0x00088720) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xb85a,	// (0x00088720) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfcbc,	// (0x0008cb82) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfcbc,	// (0x0008cb82) list_single_sp_fs_schedule_track_pane_g

0xb866,	// (0x0008872c) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xb866,	// (0x0008872c) list_single_sp_fs_schedule_track_pane_t1

0xb87e,	// (0x00088744) sp_fs_schedule_track_pane_ParamLimits

0xb87e,	// (0x00088744) sp_fs_schedule_track_pane

0xebe6,	// (0x0008baac) sp_fs_schedule_track_pane_g1

0xebee,	// (0x0008bab4) sp_fs_schedule_track_pane_g2

0xebf6,	// (0x0008babc) sp_fs_schedule_track_pane_g3

0xebfe,	// (0x0008bac4) sp_fs_schedule_track_pane_g4

0xec06,	// (0x0008bacc) sp_fs_schedule_track_pane_g5

0x0004,

0xfcc1,	// (0x0008cb87) sp_fs_schedule_track_pane_g

0x94c1,	// (0x00086387) bg_sp_fs_schedule_viewer_highlight_g1

0xd94d,	// (0x0008a813) bg_sp_fs_schedule_viewer_highlight_g2

0x94c9,	// (0x0008638f) bg_sp_fs_schedule_viewer_highlight_g3

0x94d1,	// (0x00086397) bg_sp_fs_schedule_viewer_highlight_g4

0xdb38,	// (0x0008a9fe) bg_sp_fs_schedule_viewer_highlight_g5

0x94e1,	// (0x000863a7) bg_sp_fs_schedule_viewer_highlight_g6

0x94e9,	// (0x000863af) bg_sp_fs_schedule_viewer_highlight_g7

0x94f1,	// (0x000863b7) bg_sp_fs_schedule_viewer_highlight_g8

0xd92d,	// (0x0008a7f3) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfccc,	// (0x0008cb92) bg_sp_fs_schedule_viewer_highlight_g

0xcdcd,	// (0x00089c93) bg_main_sp_fs_ribbon_pane

0xb88e,	// (0x00088754) main_sp_fs_ribbon_pane_g1

0xec0e,	// (0x0008bad4) main_sp_fs_ribbon_pane_t1

0xb897,	// (0x0008875d) main_sp_fs_ribbon_pane_t2

0xec1d,	// (0x0008bae3) main_sp_fs_ribbon_pane_t3

0x0002,

0xfcdf,	// (0x0008cba5) main_sp_fs_ribbon_pane_t

0xec2c,	// (0x0008baf2) main_sp_fs_ribbon_scheduler_pane

0xec34,	// (0x0008bafa) bg_main_sp_fs_ribbon_pane_g1

0xec3d,	// (0x0008bb03) bg_main_sp_fs_ribbon_pane_g2

0xec46,	// (0x0008bb0c) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfce6,	// (0x0008cbac) bg_main_sp_fs_ribbon_pane_g

0xec4e,	// (0x0008bb14) main_sp_fs_ribbon_scheduler_pane_g1

0xec57,	// (0x0008bb1d) main_sp_fs_ribbon_scheduler_pane_g2

0xec60,	// (0x0008bb26) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfced,	// (0x0008cbb3) main_sp_fs_ribbon_scheduler_pane_g

0xec69,	// (0x0008bb2f) list_cale_mrui_pane

0xb8a6,	// (0x0008876c) sp_fs_scroll_pane_cp07_ParamLimits

0xb8a6,	// (0x0008876c) sp_fs_scroll_pane_cp07

0xb8c2,	// (0x00088788) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xb8c2,	// (0x00088788) bg_sp_fs_schedule_viewer_highlight

0xec76,	// (0x0008bb3c) list_single_sp_fs_schedule_track_pane_cp01

0xec7e,	// (0x0008bb44) list_sp_fs_schedule_track_pane

0xec86,	// (0x0008bb4c) sp_fs_scroll_pane_cp06_ParamLimits

0xec86,	// (0x0008bb4c) sp_fs_scroll_pane_cp06

0xd728,	// (0x0008a5ee) bgmain_sp_fs_calendar_pane_g1

0xb8cf,	// (0x00088795) list_single_cale_mrui_pane_ParamLimits

0xb8cf,	// (0x00088795) list_single_cale_mrui_pane

0x263e,	// (0x0007f504) list_single_cale_mrui_row_pane_ParamLimits

0x263e,	// (0x0007f504) list_single_cale_mrui_row_pane

0x264b,	// (0x0007f511) list_single_cale_mrui_row_pane_g1_ParamLimits

0x264b,	// (0x0007f511) list_single_cale_mrui_row_pane_g1

0x2683,	// (0x0007f549) list_single_cale_mrui_row_pane_t1_ParamLimits

0x2683,	// (0x0007f549) list_single_cale_mrui_row_pane_t1

0xb8fd,	// (0x000887c3) list_single_cale_mrui_row_pane_t2_ParamLimits

0xb8fd,	// (0x000887c3) list_single_cale_mrui_row_pane_t2

0x2695,	// (0x0007f55b) list_single_cale_mrui_row_pane_t3_ParamLimits

0x2695,	// (0x0007f55b) list_single_cale_mrui_row_pane_t3

0x26c4,	// (0x0007f58a) list_single_cale_mrui_row_pane_t4_ParamLimits

0x26c4,	// (0x0007f58a) list_single_cale_mrui_row_pane_t4

0x0003,

0xfcfb,	// (0x0008cbc1) list_single_cale_mrui_row_pane_t_ParamLimits

0xfcfb,	// (0x0008cbc1) list_single_cale_mrui_row_pane_t

0xb963,	// (0x00088829) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0xb963,	// (0x00088829) list_single_cmail_header_editor_pane_bg_cp01

0xb983,	// (0x00088849) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0xb983,	// (0x00088849) list_single_cmail_header_editor_pane_bg_cp02

0xb99f,	// (0x00088865) main_radioblah_text_pane_t1_ParamLimits

0xb99f,	// (0x00088865) main_radioblah_text_pane_t1

0xeca5,	// (0x0008bb6b) cam6_indi_pane_cp01

0xecad,	// (0x0008bb73) cam6_mode_pane_cp01

0xecb5,	// (0x0008bb7b) cam6_pano_pane

0xecbe,	// (0x0008bb84) cam6_zoom_pane_cp01

0xecc6,	// (0x0008bb8c) cam6_pano_image_pane

0xecd1,	// (0x0008bb97) cam6_pano_pane_g1

0xe54c,	// (0x0008b412) cam6_pano_pane_g2

0xecda,	// (0x0008bba0) cam6_pano_pane_g3

0xece3,	// (0x0008bba9) cam6_pano_pane_g4

0x845a,	// (0x00085320) cam6_pano_pane_g5

0xecec,	// (0x0008bbb2) cam6_pano_pane_g6

0xecf6,	// (0x0008bbbc) cam6_pano_pane_g7

0xecfe,	// (0x0008bbc4) cam6_pano_pane_g8

0xed07,	// (0x0008bbcd) cam6_pano_pane_g9

0x0008,

0xfd04,	// (0x0008cbca) cam6_pano_pane_g

0xcdcd,	// (0x00089c93) main_browser_tag_pane

0xeb5d,	// (0x0008ba23) grid_navstr_albumart_pane

0xed12,	// (0x0008bbd8) cell_navstr_albumart_pane_ParamLimits

0xed12,	// (0x0008bbd8) cell_navstr_albumart_pane

0xed32,	// (0x0008bbf8) cell_navstr_albumart_pane_g1

0x1ba6,	// (0x0007ea6c) cell_navstr_albumart_pane_g2

0x1bb6,	// (0x0007ea7c) cell_navstr_albumart_pane_g3

0x1bae,	// (0x0007ea74) cell_navstr_albumart_pane_g4

0x0003,

0xfd17,	// (0x0008cbdd) cell_navstr_albumart_pane_g

0xb9ba,	// (0x00088880) bt_list_pane_ParamLimits

0xb9ba,	// (0x00088880) bt_list_pane

0xb9db,	// (0x000888a1) bt_list_pane_t1

0xb9ea,	// (0x000888b0) bt_list_pane_t2

0x0001,

0xfd20,	// (0x0008cbe6) bt_list_pane_t

0xcdcd,	// (0x00089c93) main_cale_prevew_pane

0xb9f9,	// (0x000888bf) popup_cale_preview_window_ParamLimits

0xb9f9,	// (0x000888bf) popup_cale_preview_window

0xd467,	// (0x0008a32d) bg_popup_preview_window_pane_cp05_ParamLimits

0xd467,	// (0x0008a32d) bg_popup_preview_window_pane_cp05

0xed3a,	// (0x0008bc00) list_cale_preview_pane_ParamLimits

0xed3a,	// (0x0008bc00) list_cale_preview_pane

0xba12,	// (0x000888d8) list_double_cale_preview_pane_ParamLimits

0xba12,	// (0x000888d8) list_double_cale_preview_pane

0xba24,	// (0x000888ea) list_single_cale_preview_pane_ParamLimits

0xba24,	// (0x000888ea) list_single_cale_preview_pane

0xba38,	// (0x000888fe) list_single_cale_preview_pane_g1

0xba40,	// (0x00088906) list_single_cale_preview_pane_t1_ParamLimits

0xba40,	// (0x00088906) list_single_cale_preview_pane_t1

0xba55,	// (0x0008891b) list_double_cale_preview_pane_g1

0xba5d,	// (0x00088923) list_double_cale_preview_pane_t1_ParamLimits

0xba5d,	// (0x00088923) list_double_cale_preview_pane_t1

0xba72,	// (0x00088938) list_double_cale_preview_pane_t2_ParamLimits

0xba72,	// (0x00088938) list_double_cale_preview_pane_t2

0x0001,

0xfd25,	// (0x0008cbeb) list_double_cale_preview_pane_t_ParamLimits

0xfd25,	// (0x0008cbeb) list_double_cale_preview_pane_t

0xcdcd,	// (0x00089c93) main_ezdial_pane

0xd467,	// (0x0008a32d) main_sp_fs_email_pane_ParamLimits

0xb342,	// (0x00088208) cmail_ddmenu_btn01_pane_ParamLimits

0xb342,	// (0x00088208) cmail_ddmenu_btn01_pane

0xb357,	// (0x0008821d) cmail_ddmenu_btn02_pane_ParamLimits

0xb357,	// (0x0008821d) cmail_ddmenu_btn02_pane

0xb36f,	// (0x00088235) cmail_ddmenu_btn03_pane_ParamLimits

0xb36f,	// (0x00088235) cmail_ddmenu_btn03_pane

0xb404,	// (0x000882ca) main_sp_fs_ctrlbar_pane_ParamLimits

0xb41a,	// (0x000882e0) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xb69b,	// (0x00088561) list_cmail_body_pane_ParamLimits

0xeadd,	// (0x0008b9a3) bg_button_pane_cp12

0xeae6,	// (0x0008b9ac) list_single_cmail_header_detail_pane_g3_ParamLimits

0xeae6,	// (0x0008b9ac) list_single_cmail_header_detail_pane_g3

0x2585,	// (0x0007f44b) list_single_cmail_header_detail_pane_t2_ParamLimits

0x2585,	// (0x0007f44b) list_single_cmail_header_detail_pane_t2

0x0001,

0xfca8,	// (0x0008cb6e) list_single_cmail_header_detail_pane_t_ParamLimits

0xfca8,	// (0x0008cb6e) list_single_cmail_header_detail_pane_t

0x25dd,	// (0x0007f4a3) phacti_term_pane_t2_ParamLimits

0x25dd,	// (0x0007f4a3) phacti_term_pane_t2

0x0001,

0xfcb2,	// (0x0008cb78) phacti_term_pane_t_ParamLimits

0xfcb2,	// (0x0008cb78) phacti_term_pane_t

0xed46,	// (0x0008bc0c) aid_size_list_single_double

0xba8a,	// (0x00088950) popup_ezdial_listscroll_window

0xbaae,	// (0x00088974) popup_number_entry_window_cp01

0xd6f2,	// (0x0008a5b8) bg_popup_call_pane_cp09

0xed52,	// (0x0008bc18) ezdial_list_pane

0xed5a,	// (0x0008bc20) scroll_pane_cp23

0x1ebf,	// (0x0007ed85) bg_button_pane_cp028_ParamLimits

0x1ebf,	// (0x0007ed85) bg_button_pane_cp028

0xbabc,	// (0x00088982) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xbabc,	// (0x00088982) cmail_ddmenu_btn01_pane_g1

0xbacc,	// (0x00088992) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xbacc,	// (0x00088992) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfd2a,	// (0x0008cbf0) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfd2a,	// (0x0008cbf0) cmail_ddmenu_btn01_pane_g

0xed62,	// (0x0008bc28) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xed62,	// (0x0008bc28) cmail_ddmenu_btn01_pane_t1

0x09d4,	// (0x0007d89a) bg_button_pane_cp029_ParamLimits

0x09d4,	// (0x0007d89a) bg_button_pane_cp029

0xbacc,	// (0x00088992) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xbacc,	// (0x00088992) cmail_ddmenu_btn02_pane_g1

0xbae4,	// (0x000889aa) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xbae4,	// (0x000889aa) cmail_ddmenu_btn02_pane_t1

0xd4c0,	// (0x0008a386) bg_button_pane_cp031_ParamLimits

0xd4c0,	// (0x0008a386) bg_button_pane_cp031

0xbacc,	// (0x00088992) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xbacc,	// (0x00088992) cmail_ddmenu_btn03_pane_g1

0xbae4,	// (0x000889aa) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xbae4,	// (0x000889aa) cmail_ddmenu_btn03_pane_t1

0x8c3b,	// (0x00085b01) cell_dialer2_keypad_pane_t1_ParamLimits

0x8c55,	// (0x00085b1b) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x8c55,	// (0x00085b1b) cell_dialer2_keypad_pane_t1_copy1

0xac77,	// (0x00087b3d) ncimui_group_button_pane

0xd467,	// (0x0008a32d) main_sp_fs_calendar_pane_ParamLimits

0xb6c3,	// (0x00088589) list_single_cmail_header_caption_pane_ParamLimits

0x25f2,	// (0x0007f4b8) aid_recal_txt_sm_pane

0xcdcd,	// (0x00089c93) mian_recal_day_pane

0x262c,	// (0x0007f4f2) popup_sp_fs_cale_preview_window_ParamLimits

0xed77,	// (0x0008bc3d) list_recal_day_pane

0x270e,	// (0x0007f5d4) list_single_recal_day_pane_ParamLimits

0x270e,	// (0x0007f5d4) list_single_recal_day_pane

0xed9e,	// (0x0008bc64) list_single_recal_day_pane_g1_ParamLimits

0xed9e,	// (0x0008bc64) list_single_recal_day_pane_g1

0x2720,	// (0x0007f5e6) list_single_recal_day_pane_g2_ParamLimits

0x2720,	// (0x0007f5e6) list_single_recal_day_pane_g2

0x272c,	// (0x0007f5f2) list_single_recal_day_pane_g3_ParamLimits

0x272c,	// (0x0007f5f2) list_single_recal_day_pane_g3

0xbb08,	// (0x000889ce) list_single_recal_day_pane_g4_ParamLimits

0xbb08,	// (0x000889ce) list_single_recal_day_pane_g4

0x2738,	// (0x0007f5fe) list_single_recal_day_pane_g5_ParamLimits

0x2738,	// (0x0007f5fe) list_single_recal_day_pane_g5

0x2744,	// (0x0007f60a) list_single_recal_day_pane_g6_ParamLimits

0x2744,	// (0x0007f60a) list_single_recal_day_pane_g6

0x0004,

0xfd39,	// (0x0008cbff) list_single_recal_day_pane_g_ParamLimits

0xfd39,	// (0x0008cbff) list_single_recal_day_pane_g

0x2758,	// (0x0007f61e) list_single_recal_day_pane_t1

0x276a,	// (0x0007f630) list_single_recal_day_pane_t2

0x0001,

0xfd44,	// (0x0008cc0a) list_single_recal_day_pane_t

0xbb20,	// (0x000889e6) ncimui_query_button_pane_ParamLimits

0xbb20,	// (0x000889e6) ncimui_query_button_pane

0xbb30,	// (0x000889f6) ncimui_query_button_pane_t1_ParamLimits

0xbb30,	// (0x000889f6) ncimui_query_button_pane_t1

0xedaa,	// (0x0008bc70) ncimui_query_button_pane_t2_ParamLimits

0xedaa,	// (0x0008bc70) ncimui_query_button_pane_t2

0x0001,

0xfd49,	// (0x0008cc0f) ncimui_query_button_pane_t_ParamLimits

0xfd49,	// (0x0008cc0f) ncimui_query_button_pane_t

0xbb43,	// (0x00088a09) query_button_pane_ParamLimits

0xbb43,	// (0x00088a09) query_button_pane

0xcdcd,	// (0x00089c93) bg_button_pane_cp0028

0xedbd,	// (0x0008bc83) query_button_pane_t1

0x6bce,	// (0x00083a94) main_tport_pane_ParamLimits

0xb5a5,	// (0x0008846b) bg_popup_window_pane_cp01_ParamLimits

0xb5a5,	// (0x0008846b) bg_popup_window_pane_cp01

0xb5b3,	// (0x00088479) heading_pane_cp08_ParamLimits

0xb5b3,	// (0x00088479) heading_pane_cp08

0xb5c1,	// (0x00088487) heading_pane_cp07_ParamLimits

0xb5c1,	// (0x00088487) heading_pane_cp07

0xb630,	// (0x000884f6) cell_tport_appsw_pane_g2

0x0002,

0xfc95,	// (0x0008cb5b) cell_tport_appsw_pane_g

0x0a6f,	// (0x0007d935) input_candi_list_open_g1

0x0285,	// (0x0007d14b) list_cale_time_pane_g6_ParamLimits

0x0285,	// (0x0007d14b) list_cale_time_pane_g6

0x76a8,	// (0x0008456e) aid_size_touch_calib_1_ParamLimits

0x76a8,	// (0x0008456e) aid_size_touch_calib_1

0x76b4,	// (0x0008457a) aid_size_touch_calib_2_ParamLimits

0x76b4,	// (0x0008457a) aid_size_touch_calib_2

0x76c2,	// (0x00084588) aid_size_touch_calib_3_ParamLimits

0x76c2,	// (0x00084588) aid_size_touch_calib_3

0x76d2,	// (0x00084598) aid_size_touch_calib_4_ParamLimits

0x76d2,	// (0x00084598) aid_size_touch_calib_4

0x76e0,	// (0x000845a6) main_touch_calib_button_group_pane_ParamLimits

0x76e0,	// (0x000845a6) main_touch_calib_button_group_pane

0x76ee,	// (0x000845b4) main_touch_calib_pane_g1_ParamLimits

0x76fa,	// (0x000845c0) main_touch_calib_pane_g2_ParamLimits

0x7706,	// (0x000845cc) main_touch_calib_pane_g3_ParamLimits

0x7712,	// (0x000845d8) main_touch_calib_pane_g4_ParamLimits

0xf6d7,	// (0x0008c59d) main_touch_calib_pane_g_ParamLimits

0x771e,	// (0x000845e4) main_touch_calib_pane_t1_ParamLimits

0x7737,	// (0x000845fd) main_touch_calib_pane_t2_ParamLimits

0x7750,	// (0x00084616) main_touch_calib_pane_t3_ParamLimits

0x7766,	// (0x0008462c) main_touch_calib_pane_t4_ParamLimits

0x777c,	// (0x00084642) main_touch_calib_pane_t5_ParamLimits

0xf6e0,	// (0x0008c5a6) main_touch_calib_pane_t_ParamLimits

0x7e78,	// (0x00084d3e) list_single_fp_cale_pane_g3_ParamLimits

0x7e78,	// (0x00084d3e) list_single_fp_cale_pane_g3

0x6bb2,	// (0x00083a78) bg_button_pane_cp012_ParamLimits

0x6bb2,	// (0x00083a78) bg_vkb2_func_pane_cp03_ParamLimits

0x9da5,	// (0x00086c6b) cell_vitu2_function_top_pane_g1_ParamLimits

0x6bb2,	// (0x00083a78) bg_vkb2_func_pane_cp04_ParamLimits

0xabff,	// (0x00087ac5) main_ncimui_button_group_pane_ParamLimits

0xabff,	// (0x00087ac5) main_ncimui_button_group_pane

0xac65,	// (0x00087b2b) main_ncimui_pane_t3_ParamLimits

0xac65,	// (0x00087b2b) main_ncimui_pane_t3

0xeb73,	// (0x0008ba39) phacti_button_group_pane

0xed46,	// (0x0008bc0c) aid_size_list_single_double_ParamLimits

0xba8a,	// (0x00088950) popup_ezdial_listscroll_window_ParamLimits

0xbaae,	// (0x00088974) popup_number_entry_window_cp01_ParamLimits

0xbb50,	// (0x00088a16) phacti_button_pane_ParamLimits

0xbb50,	// (0x00088a16) phacti_button_pane

0xcdcd,	// (0x00089c93) bg_button_pane_cp14

0xedcb,	// (0x0008bc91) phacti_button_pane_t1

0xbb61,	// (0x00088a27) main_touch_calib_button_pane_ParamLimits

0xbb61,	// (0x00088a27) main_touch_calib_button_pane

0xd540,	// (0x0008a406) bg_button_pane_cp18_ParamLimits

0xd540,	// (0x0008a406) bg_button_pane_cp18

0xedd9,	// (0x0008bc9f) main_touch_calib_button_pane_t1_ParamLimits

0xedd9,	// (0x0008bc9f) main_touch_calib_button_pane_t1

0xedef,	// (0x0008bcb5) main_touch_calib_button_pane_t2_ParamLimits

0xedef,	// (0x0008bcb5) main_touch_calib_button_pane_t2

0x0001,

0xfd4e,	// (0x0008cc14) main_touch_calib_button_pane_t_ParamLimits

0xfd4e,	// (0x0008cc14) main_touch_calib_button_pane_t

0xcdcd,	// (0x00089c93) cell_ncimui_button_pane

0xcdcd,	// (0x00089c93) bg_button_pane_cp032

0xee0d,	// (0x0008bcd3) cell_ncimui_button_pane_t1

0x8cb1,	// (0x00085b77) image3_infobar_pane_ParamLimits

0x8cb1,	// (0x00085b77) image3_infobar_pane

0xb022,	// (0x00087ee8) fs_bigclock_status_pane_ParamLimits

0xb022,	// (0x00087ee8) fs_bigclock_status_pane

0xb02f,	// (0x00087ef5) main_fs_bigclock_clock_pane_ParamLimits

0xb02f,	// (0x00087ef5) main_fs_bigclock_clock_pane

0xb043,	// (0x00087f09) main_fs_bigclock_indi_pane_ParamLimits

0xb043,	// (0x00087f09) main_fs_bigclock_indi_pane

0xb06b,	// (0x00087f31) main_fs_bigclock_swipe_pane_ParamLimits

0xb06b,	// (0x00087f31) main_fs_bigclock_swipe_pane

0xcdcd,	// (0x00089c93) main_fs_clock_dumped_data

0xe659,	// (0x0008b51f) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe659,	// (0x0008b51f) list_single_fs_bigclock_indicator_pane_g1

0xe675,	// (0x0008b53b) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe675,	// (0x0008b53b) list_single_fs_bigclock_indicator_pane_g2

0xe68f,	// (0x0008b555) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe68f,	// (0x0008b555) list_single_fs_bigclock_indicator_pane_g3

0xe6a9,	// (0x0008b56f) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe6a9,	// (0x0008b56f) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfbef,	// (0x0008cab5) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfbef,	// (0x0008cab5) list_single_fs_bigclock_indicator_pane_g

0xe6d4,	// (0x0008b59a) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe6d4,	// (0x0008b59a) list_single_fs_bigclock_indicator_pane_t1

0xe6fc,	// (0x0008b5c2) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe6fc,	// (0x0008b5c2) list_single_fs_bigclock_indicator_pane_t2

0xe771,	// (0x0008b637) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe771,	// (0x0008b637) list_single_fs_bigclock_indicator_pane_t3

0xe799,	// (0x0008b65f) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe799,	// (0x0008b65f) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfbfa,	// (0x0008cac0) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfbfa,	// (0x0008cac0) list_single_fs_bigclock_indicator_pane_t

0xee1b,	// (0x0008bce1) image3_infobar_fav_pane_ParamLimits

0xee1b,	// (0x0008bce1) image3_infobar_fav_pane

0xee2b,	// (0x0008bcf1) image3_infobar_loc_pane_ParamLimits

0xee2b,	// (0x0008bcf1) image3_infobar_loc_pane

0xee3f,	// (0x0008bd05) image3_infobar_time_pane_ParamLimits

0xee3f,	// (0x0008bd05) image3_infobar_time_pane

0xd728,	// (0x0008a5ee) image3_infobar_time_pane_g1

0xee4f,	// (0x0008bd15) image3_infobar_time_pane_t1

0xd728,	// (0x0008a5ee) image3_infobar_loc_pane_g1

0xee5d,	// (0x0008bd23) image3_infobar_loc_pane_g2

0x0001,

0xfd53,	// (0x0008cc19) image3_infobar_loc_pane_g

0xee65,	// (0x0008bd2b) image3_infobar_loc_pane_t1

0xd728,	// (0x0008a5ee) image3_infobar_fav_pane_g1

0xee73,	// (0x0008bd39) image3_infobar_fav_pane_g2

0x0001,

0xfd58,	// (0x0008cc1e) image3_infobar_fav_pane_g

0xee7b,	// (0x0008bd41) fs_bigclock_status_battery_pane

0xee84,	// (0x0008bd4a) fs_bigclock_status_signal_pane

0xee8d,	// (0x0008bd53) fs_bigclock_status_title_pane

0xee96,	// (0x0008bd5c) fs_bigclock_status_signal_pane_g1

0xee9f,	// (0x0008bd65) fs_bigclock_status_signal_pane_g2

0x0001,

0xfd5d,	// (0x0008cc23) fs_bigclock_status_signal_pane_g

0xeea7,	// (0x0008bd6d) fs_bigclock_status_battery_pane_g1

0xeeb0,	// (0x0008bd76) fs_bigclock_status_battery_pane_g2

0x0001,

0xfd62,	// (0x0008cc28) fs_bigclock_status_battery_pane_g

0xeeb8,	// (0x0008bd7e) fs_bigclock_status_title_pane_t1

0xbb71,	// (0x00088a37) main_fs_bigclock_clock_pane_g1

0xbb71,	// (0x00088a37) main_fs_bigclock_clock_pane_g2

0xbb7e,	// (0x00088a44) main_fs_bigclock_clock_pane_g3

0xbb7e,	// (0x00088a44) main_fs_bigclock_clock_pane_g4

0x0003,

0xfd67,	// (0x0008cc2d) main_fs_bigclock_clock_pane_g

0xbb8a,	// (0x00088a50) main_fs_bigclock_clock_pane_t1

0xbb9d,	// (0x00088a63) main_fs_bigclock_clock_pane_t2

0x0001,

0xfd70,	// (0x0008cc36) main_fs_bigclock_clock_pane_t

0xeec6,	// (0x0008bd8c) list_single_fs_bigclock_indicator_pane_ParamLimits

0xeec6,	// (0x0008bd8c) list_single_fs_bigclock_indicator_pane

0xeed7,	// (0x0008bd9d) list_single_fs_bigclock_pane_ParamLimits

0xeed7,	// (0x0008bd9d) list_single_fs_bigclock_pane

0xeefd,	// (0x0008bdc3) main_fs_bigclock_indicator_pane_t1

0xef0c,	// (0x0008bdd2) list_single_fs_bigclock_pane_g1

0xef14,	// (0x0008bdda) list_single_fs_bigclock_pane_t1

0xd728,	// (0x0008a5ee) main_fs_bigclock_swipe_pane_g1

0xef57,	// (0x0008be1d) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfd81,	// (0x0008cc47) main_fs_bigclock_swipe_pane_g

0xef5f,	// (0x0008be25) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xef5f,	// (0x0008be25) main_fs_bigclock_swipe_pane_t1

0x5dd6,	// (0x00082c9c) call_type_pane_ParamLimits

0xcdcd,	// (0x00089c93) main_btmg_pane

0x2677,	// (0x0007f53d) list_single_cale_mrui_row_pane_g2_ParamLimits

0x2677,	// (0x0007f53d) list_single_cale_mrui_row_pane_g2

0x0002,

0xfcf4,	// (0x0008cbba) list_single_cale_mrui_row_pane_g_ParamLimits

0xfcf4,	// (0x0008cbba) list_single_cale_mrui_row_pane_g

0x26fd,	// (0x0007f5c3) list_recal_vselct_arw_lo_pane

0xed96,	// (0x0008bc5c) list_recal_vselct_arw_up_pane

0x2705,	// (0x0007f5cb) list_recal_vselct_pane

0xbbf4,	// (0x00088aba) btmg_button_pane

0xbc00,	// (0x00088ac6) main_btmg_pane_g1

0xcdcd,	// (0x00089c93) bg_button_pane_cp044

0xef7c,	// (0x0008be42) btmg_button_pane_t1

0x1d36,	// (0x0007ebfc) aid_listscroll_gen

0xd467,	// (0x0008a32d) main_cntbar_detail_pane

0xeabf,	// (0x0008b985) list_cmail_folder_pane

0xe74a,	// (0x0008b610) sp_fs_scroll_pane_cp03_ParamLimits

0xbc08,	// (0x00088ace) list_single_fs_dyc_pane_cp01_ParamLimits

0xbc08,	// (0x00088ace) list_single_fs_dyc_pane_cp01

0xef8a,	// (0x0008be50) aid_size_cmail_indent

0x277c,	// (0x0007f642) list_single_dyc_row_pane_cp01

0xbc53,	// (0x00088b19) cntbar_detail_list_pane_ParamLimits

0xbc53,	// (0x00088b19) cntbar_detail_list_pane

0xbc8d,	// (0x00088b53) main_cntbar_detail_cont_pane_ParamLimits

0xbc8d,	// (0x00088b53) main_cntbar_detail_cont_pane

0x5dca,	// (0x00082c90) scroll_pane_cp032_ParamLimits

0x5dca,	// (0x00082c90) scroll_pane_cp032

0xbc99,	// (0x00088b5f) cntbar_detail_list_event_pane_ParamLimits

0xbc99,	// (0x00088b5f) cntbar_detail_list_event_pane

0xbc5f,	// (0x00088b25) cntbar_detail_list_shct_pane

0xd99b,	// (0x0008a861) aid_list_gen

0xef93,	// (0x0008be59) aid_scroll

0xef9c,	// (0x0008be62) aid_size_touch_scroll_bar

0xbcad,	// (0x00088b73) aid_list_double

0xbcb6,	// (0x00088b7c) aid_list_single

0xe756,	// (0x0008b61c) aid_list_single_lg

0xbcbf,	// (0x00088b85) aid_list_z_g_a_sm

0xbcc7,	// (0x00088b8d) aid_list_z_g_d

0xbccf,	// (0x00088b95) aid_txt_z_prm

0xbcdd,	// (0x00088ba3) aid_txt_z_prm_cp01

0xbceb,	// (0x00088bb1) aid_txt_z_sec

0xbcf9,	// (0x00088bbf) main_cntbar_detail_cont_pane_g1_ParamLimits

0xbcf9,	// (0x00088bbf) main_cntbar_detail_cont_pane_g1

0xbd06,	// (0x00088bcc) main_cntbar_detail_cont_pane_g2_ParamLimits

0xbd06,	// (0x00088bcc) main_cntbar_detail_cont_pane_g2

0x0001,

0xfd86,	// (0x0008cc4c) main_cntbar_detail_cont_pane_g_ParamLimits

0xfd86,	// (0x0008cc4c) main_cntbar_detail_cont_pane_g

0xefa5,	// (0x0008be6b) main_cntbar_detail_cont_pane_t1

0xefb3,	// (0x0008be79) main_cntbar_detail_cont_pane_t2

0xefc1,	// (0x0008be87) main_cntbar_detail_cont_pane_t3

0x0002,

0xfd8b,	// (0x0008cc51) main_cntbar_detail_cont_pane_t

0xbd12,	// (0x00088bd8) cell_cntbar_detail_list_shct_pane_ParamLimits

0xbd12,	// (0x00088bd8) cell_cntbar_detail_list_shct_pane

0xefcf,	// (0x0008be95) cntbar_detail_list_shct_pane_g1

0xefd8,	// (0x0008be9e) cntbar_detail_list_shct_pane_g2

0x0001,

0xfd92,	// (0x0008cc58) cntbar_detail_list_shct_pane_g

0xbd26,	// (0x00088bec) cntbar_detail_list_event_pane_g1_ParamLimits

0xbd26,	// (0x00088bec) cntbar_detail_list_event_pane_g1

0xbd32,	// (0x00088bf8) cntbar_detail_list_event_pane_g2_ParamLimits

0xbd32,	// (0x00088bf8) cntbar_detail_list_event_pane_g2

0x0005,

0xfd97,	// (0x0008cc5d) cntbar_detail_list_event_pane_g_ParamLimits

0xfd97,	// (0x0008cc5d) cntbar_detail_list_event_pane_g

0xbd9e,	// (0x00088c64) cntbar_detail_list_event_pane_t1_ParamLimits

0xbd9e,	// (0x00088c64) cntbar_detail_list_event_pane_t1

0xbdb3,	// (0x00088c79) cntbar_detail_list_event_pane_t2_ParamLimits

0xbdb3,	// (0x00088c79) cntbar_detail_list_event_pane_t2

0x0002,

0xfda4,	// (0x0008cc6a) cntbar_detail_list_event_pane_t_ParamLimits

0xfda4,	// (0x0008cc6a) cntbar_detail_list_event_pane_t

0xd728,	// (0x0008a5ee) cell_cntbar_detail_list_shct_pane_g1

0x08c3,	// (0x0007d789) navi_pane_mv_g3

0xd467,	// (0x0008a32d) main_cntbar_detail_pane_ParamLimits

0xcdcd,	// (0x00089c93) main_notif_wgt_pane

0x889c,	// (0x00085762) aid_tch_main_mp4_pane_g4

0x8b21,	// (0x000859e7) popup_slider_window_cp02

0x26f3,	// (0x0007f5b9) list_recal_day_event_pane

0xbc33,	// (0x00088af9) cntbar_detail_btn_pane_ParamLimits

0xbc33,	// (0x00088af9) cntbar_detail_btn_pane

0xbc43,	// (0x00088b09) cntbar_detail_btn_pane_cp01_ParamLimits

0xbc43,	// (0x00088b09) cntbar_detail_btn_pane_cp01

0xbc5f,	// (0x00088b25) cntbar_detail_list_shct_pane_ParamLimits

0xbc6b,	// (0x00088b31) cntbar_detail_pane_g1_ParamLimits

0xbc6b,	// (0x00088b31) cntbar_detail_pane_g1

0xbc77,	// (0x00088b3d) cntbar_detail_pane_t1_ParamLimits

0xbc77,	// (0x00088b3d) cntbar_detail_pane_t1

0xbd3e,	// (0x00088c04) cntbar_detail_list_event_pane_g3_ParamLimits

0xbd3e,	// (0x00088c04) cntbar_detail_list_event_pane_g3

0xbd56,	// (0x00088c1c) cntbar_detail_list_event_pane_g4_ParamLimits

0xbd56,	// (0x00088c1c) cntbar_detail_list_event_pane_g4

0xbd6e,	// (0x00088c34) cntbar_detail_list_event_pane_g5_ParamLimits

0xbd6e,	// (0x00088c34) cntbar_detail_list_event_pane_g5

0xbd86,	// (0x00088c4c) cntbar_detail_list_event_pane_g6_ParamLimits

0xbd86,	// (0x00088c4c) cntbar_detail_list_event_pane_g6

0xbdc8,	// (0x00088c8e) cntbar_detail_list_event_pane_t3_ParamLimits

0xbdc8,	// (0x00088c8e) cntbar_detail_list_event_pane_t3

0xbdda,	// (0x00088ca0) popup_notif_wgt_window_ParamLimits

0xbdda,	// (0x00088ca0) popup_notif_wgt_window

0xbdea,	// (0x00088cb0) popup_submenu_window_cp01_ParamLimits

0xbdea,	// (0x00088cb0) popup_submenu_window_cp01

0xd6f2,	// (0x0008a5b8) bg_popup_window_pane_cp10

0xefe1,	// (0x0008bea7) listscroll_notif_wgt_pane

0xeff3,	// (0x0008beb9) list_notif_wgt_window

0xeffc,	// (0x0008bec2) scroll_pane_cp033

0xbdf8,	// (0x00088cbe) list_notif_wgt_row_pane_ParamLimits

0xbdf8,	// (0x00088cbe) list_notif_wgt_row_pane

0xf005,	// (0x0008becb) aid_size_list_notif_wgt_del

0xf012,	// (0x0008bed8) list_notif_wgt_row_pane_g1

0xf01e,	// (0x0008bee4) list_notif_wgt_row_pane_g2

0xf02d,	// (0x0008bef3) list_notif_wgt_row_pane_g3

0x0002,

0xfdab,	// (0x0008cc71) list_notif_wgt_row_pane_g

0xf03a,	// (0x0008bf00) list_notif_wgt_row_pane_t1

0x2785,	// (0x0007f64b) list_notif_wgt_row_pane_t2

0x2797,	// (0x0007f65d) list_notif_wgt_row_pane_t3

0x0002,

0xfdb2,	// (0x0008cc78) list_notif_wgt_row_pane_t

0xdb52,	// (0x0008aa18) list_recal_day_event_pane_g1

0x27a9,	// (0x0007f66f) list_recal_day_event_pane_t1

0xcdcd,	// (0x00089c93) bg_button_pane_cp045

0xbe0a,	// (0x00088cd0) cntbar_detail_btn_pane_t1

0x09d4,	// (0x0007d89a) main_callh_pane_ParamLimits

0x09d4,	// (0x0007d89a) main_callh_pane

0xcdcd,	// (0x00089c93) main_coverflow0_pane

0xcdcd,	// (0x00089c93) main_wgtman_pane

0xb083,	// (0x00087f49) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xb083,	// (0x00087f49) main_fs_bigclock_unlock_btn_pane

0xb628,	// (0x000884ee) bg_button_pane_cp16

0xb638,	// (0x000884fe) cell_tport_appsw_pane_g3

0xbe18,	// (0x00088cde) cf0_flow_pane_ParamLimits

0xbe18,	// (0x00088cde) cf0_flow_pane

0x27b8,	// (0x0007f67e) listscroll_cf0_pane

0x27c3,	// (0x0007f689) main_cf0_pane_g1

0xbe27,	// (0x00088ced) main_cf0_pane_t1_ParamLimits

0xbe27,	// (0x00088ced) main_cf0_pane_t1

0xbe3b,	// (0x00088d01) main_cf0_pane_t2_ParamLimits

0xbe3b,	// (0x00088d01) main_cf0_pane_t2

0x0001,

0xfdbe,	// (0x0008cc84) main_cf0_pane_t_ParamLimits

0xfdbe,	// (0x0008cc84) main_cf0_pane_t

0x27d5,	// (0x0007f69b) scroll_pane_cp11

0xbe4f,	// (0x00088d15) cf0_flow_pane_g1

0xbe57,	// (0x00088d1d) cf0_flow_pane_g2

0x0001,

0xfdc3,	// (0x0008cc89) cf0_flow_pane_g

0xbe5f,	// (0x00088d25) cf0_flow_pane_t1

0xcdcd,	// (0x00089c93) main_call6_pane

0xcdcd,	// (0x00089c93) main_calllock_pane

0xbe6d,	// (0x00088d33) call6_btn_grp_pane_ParamLimits

0xbe6d,	// (0x00088d33) call6_btn_grp_pane

0xbe7c,	// (0x00088d42) call6_pane_g1_ParamLimits

0xbe7c,	// (0x00088d42) call6_pane_g1

0xbe8c,	// (0x00088d52) popup_call6_1st_window_ParamLimits

0xbe8c,	// (0x00088d52) popup_call6_1st_window

0xbe9a,	// (0x00088d60) popup_call6_2nd_window_ParamLimits

0xbe9a,	// (0x00088d60) popup_call6_2nd_window

0xbea8,	// (0x00088d6e) cell_call6_btn_pane_ParamLimits

0xbea8,	// (0x00088d6e) cell_call6_btn_pane

0xd6f2,	// (0x0008a5b8) bg_popup_call2_in_pane_cp03

0x27e0,	// (0x0007f6a6) popup_call6_1st_window_g1

0x27e8,	// (0x0007f6ae) popup_call6_1st_window_g2

0x27f0,	// (0x0007f6b6) popup_call6_1st_window_g3

0x0002,

0xfdc8,	// (0x0008cc8e) popup_call6_1st_window_g

0x27f8,	// (0x0007f6be) popup_call6_1st_window_t1

0x2807,	// (0x0007f6cd) popup_call6_1st_window_t2

0x2815,	// (0x0007f6db) popup_call6_1st_window_t3

0x0002,

0xfdcf,	// (0x0008cc95) popup_call6_1st_window_t

0xd6f2,	// (0x0008a5b8) bg_popup_call2_in_pane_cp04

0x2823,	// (0x0007f6e9) popup_call6_2nd_window_g1

0x282b,	// (0x0007f6f1) popup_call6_2nd_window_g2

0x2833,	// (0x0007f6f9) popup_call6_2nd_window_g3

0x0002,

0xfdd6,	// (0x0008cc9c) popup_call6_2nd_window_g

0x283b,	// (0x0007f701) popup_call6_2nd_window_t1

0x402b,	// (0x00080ef1) bg_button_pane_cp15

0xbeb7,	// (0x00088d7d) cell_call6_btn_pane_g1

0xbec0,	// (0x00088d86) cell_call6_btn_pane_t1

0xbecf,	// (0x00088d95) listscroll_wgtman_pane_ParamLimits

0xbecf,	// (0x00088d95) listscroll_wgtman_pane

0xbeeb,	// (0x00088db1) wgtman_btn_pane_ParamLimits

0xbeeb,	// (0x00088db1) wgtman_btn_pane

0x06d7,	// (0x0007d59d) aid_scroll_copy1

0x2853,	// (0x0007f719) list_wgtman_pane

0xbf20,	// (0x00088de6) wgtman_btn_pane_g1_ParamLimits

0xbf20,	// (0x00088de6) wgtman_btn_pane_g1

0xbf48,	// (0x00088e0e) wgtman_btn_pane_t1_ParamLimits

0xbf48,	// (0x00088e0e) wgtman_btn_pane_t1

0x285d,	// (0x0007f723) wgtman_btn_pane_t2_ParamLimits

0x285d,	// (0x0007f723) wgtman_btn_pane_t2

0x0001,

0xfddd,	// (0x0008cca3) wgtman_btn_pane_t_ParamLimits

0xfddd,	// (0x0008cca3) wgtman_btn_pane_t

0xbf7f,	// (0x00088e45) listrow_wgtman_pane_ParamLimits

0xbf7f,	// (0x00088e45) listrow_wgtman_pane

0xbf9b,	// (0x00088e61) listrow_wgtman_pane_g1

0xbfa8,	// (0x00088e6e) listrow_wgtman_pane_g2

0x0001,

0xfde2,	// (0x0008cca8) listrow_wgtman_pane_g

0xbfc6,	// (0x00088e8c) listrow_wgtman_pane_t1

0xbfde,	// (0x00088ea4) listrow_wgtman_pane_t2

0x0001,

0xfde7,	// (0x0008ccad) listrow_wgtman_pane_t

0xc004,	// (0x00088eca) wait_bar_pane_cp09

0x2874,	// (0x0007f73a) main_calllock_btn_pane

0x287e,	// (0x0007f744) main_calllock_pane_g1

0xcdcd,	// (0x00089c93) bg_button_pane_cp17

0x284a,	// (0x0007f710) main_calllock_btn_pane_g1

0x2886,	// (0x0007f74c) main_calllock_btn_pane_t1

0xcdcd,	// (0x00089c93) main_dialer3_pane

0xcdcd,	// (0x00089c93) main_fmrd2_pane

0xd728,	// (0x0008a5ee) main_fs_bigclock_unlock_btn_pane_g1

0xc01e,	// (0x00088ee4) main_fs_bigclock_unlock_btn_pane_t1

0xc02c,	// (0x00088ef2) area_fmrd2_info_pane_ParamLimits

0xc02c,	// (0x00088ef2) area_fmrd2_info_pane

0xc03a,	// (0x00088f00) area_fmrd2_visual_pane_ParamLimits

0xc03a,	// (0x00088f00) area_fmrd2_visual_pane

0xc048,	// (0x00088f0e) fmrd2_indi_pane_ParamLimits

0xc048,	// (0x00088f0e) fmrd2_indi_pane

0xc055,	// (0x00088f1b) area_fmrd2_visual_pane_g1

0xc05d,	// (0x00088f23) area_fmrd2_visual_pane_t1

0xc06d,	// (0x00088f33) area_fmrd2_visual_pane_t2

0xc07d,	// (0x00088f43) area_fmrd2_visual_pane_t3

0x0002,

0xfdf1,	// (0x0008ccb7) area_fmrd2_visual_pane_t

0xc08d,	// (0x00088f53) area_fmrd2_info_pane_g1

0xc095,	// (0x00088f5b) area_fmrd2_info_pane_t1

0xc0a5,	// (0x00088f6b) area_fmrd2_info_pane_t2

0xc0b5,	// (0x00088f7b) area_fmrd2_info_pane_t3

0xc0c5,	// (0x00088f8b) area_fmrd2_info_pane_t4

0x0003,

0xfdf8,	// (0x0008ccbe) area_fmrd2_info_pane_t

0xc0d3,	// (0x00088f99) fmrd2_indi_pane_t1

0xc0e3,	// (0x00088fa9) fmrd2_indi_pane_t2

0xc0f3,	// (0x00088fb9) fmrd2_indi_pane_t3

0x0002,

0xfe01,	// (0x0008ccc7) fmrd2_indi_pane_t

0xe6b8,	// (0x0008b57e) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe6b8,	// (0x0008b57e) list_single_fs_bigclock_indicator_pane_g5

0xe7b6,	// (0x0008b67c) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe7b6,	// (0x0008b67c) list_single_fs_bigclock_indicator_pane_t5

0xb7db,	// (0x000886a1) aid_cell_bcale_month_pane_ParamLimits

0xb7db,	// (0x000886a1) aid_cell_bcale_month_pane

0xb7f9,	// (0x000886bf) bcale_month_pane_ParamLimits

0xb7f9,	// (0x000886bf) bcale_month_pane

0xb817,	// (0x000886dd) bcale_preview_pane_ParamLimits

0xb817,	// (0x000886dd) bcale_preview_pane

0xef14,	// (0x0008bdda) list_single_fs_bigclock_pane_t1_ParamLimits

0xef33,	// (0x0008bdf9) list_single_fs_bigclock_pane_t2_ParamLimits

0xef33,	// (0x0008bdf9) list_single_fs_bigclock_pane_t2

0x0001,

0xfd7c,	// (0x0008cc42) list_single_fs_bigclock_pane_t_ParamLimits

0xfd7c,	// (0x0008cc42) list_single_fs_bigclock_pane_t

0xc016,	// (0x00088edc) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfdec,	// (0x0008ccb2) main_fs_bigclock_unlock_btn_pane_g

0xc101,	// (0x00088fc7) aid_dia3_key_size_ParamLimits

0xc101,	// (0x00088fc7) aid_dia3_key_size

0xc10d,	// (0x00088fd3) aid_dia3_listrow_size_ParamLimits

0xc10d,	// (0x00088fd3) aid_dia3_listrow_size

0xc11d,	// (0x00088fe3) dia3_keypad_fun_pane_ParamLimits

0xc11d,	// (0x00088fe3) dia3_keypad_fun_pane

0xc12f,	// (0x00088ff5) dia3_keypad_num_pane_ParamLimits

0xc12f,	// (0x00088ff5) dia3_keypad_num_pane

0xc141,	// (0x00089007) dia3_listscroll_pane_ParamLimits

0xc141,	// (0x00089007) dia3_listscroll_pane

0xc14f,	// (0x00089015) dia3_numentry_pane_ParamLimits

0xc14f,	// (0x00089015) dia3_numentry_pane

0x2895,	// (0x0007f75b) dia3_list_pane

0x28a0,	// (0x0007f766) scroll_pane_cp12

0xcdcd,	// (0x00089c93) bg_dia3_numentry_pane

0xc15d,	// (0x00089023) dia3_numentry_pane_t1

0xc16c,	// (0x00089032) cell_dia3_key_num_pane

0xc174,	// (0x0008903a) cell_dia3_key0_fun_pane_ParamLimits

0xc174,	// (0x0008903a) cell_dia3_key0_fun_pane

0xc181,	// (0x00089047) cell_dia3_key1_fun_pane_ParamLimits

0xc181,	// (0x00089047) cell_dia3_key1_fun_pane

0xc18e,	// (0x00089054) dia3_listrow_pane

0xe40b,	// (0x0008b2d1) bg_dia3_numentry_pane_g1

0xcdcd,	// (0x00089c93) bg_button_pane_cp21

0x28ab,	// (0x0007f771) cell_dia3_key_num_pane_t1

0x28b9,	// (0x0007f77f) cell_dia3_key_num_pane_t2

0x28c8,	// (0x0007f78e) cell_dia3_key_num_pane_t3

0x28d7,	// (0x0007f79d) cell_dia3_key_num_pane_t4

0x0003,

0xfe08,	// (0x0008ccce) cell_dia3_key_num_pane_t

0xcdcd,	// (0x00089c93) bg_button_pane_cp19

0xc19b,	// (0x00089061) cell_dia3_key0_fun_pane_g1

0xcdcd,	// (0x00089c93) bg_button_pane_cp20

0xc1a3,	// (0x00089069) cell_dia3_key1_fun_pane_g1

0xc1ab,	// (0x00089071) area_left_week_number_pane

0xc1be,	// (0x00089084) area_top_day_name_pane

0xc1cc,	// (0x00089092) frame_month_view_pane

0x28e6,	// (0x0007f7ac) grid_month_view_pane

0xc1e1,	// (0x000890a7) cell_top_day_name_pane_ParamLimits

0xc1e1,	// (0x000890a7) cell_top_day_name_pane

0xc1fb,	// (0x000890c1) cell_area_left_week_number_pane_ParamLimits

0xc1fb,	// (0x000890c1) cell_area_left_week_number_pane

0xc21e,	// (0x000890e4) cell_month_view_pane_ParamLimits

0xc21e,	// (0x000890e4) cell_month_view_pane

0x28f4,	// (0x0007f7ba) frm_month_g1

0xc24a,	// (0x00089110) frm_month_g2

0xc25b,	// (0x00089121) frm_month_g3

0xc26c,	// (0x00089132) frm_month_g4

0xc27d,	// (0x00089143) frm_month_g5

0xc290,	// (0x00089156) frm_month_g6

0xc2a3,	// (0x00089169) frm_month_g7

0x2901,	// (0x0007f7c7) frm_month_g8

0xc2b6,	// (0x0008917c) frm_month_g9

0xc2c3,	// (0x00089189) frm_month_g10

0xc2d0,	// (0x00089196) frm_month_g11

0xc2dd,	// (0x000891a3) frm_month_g12

0xc2ea,	// (0x000891b0) frm_month_g13

0xc2f7,	// (0x000891bd) frm_month_g14

0xc306,	// (0x000891cc) frm_month_g15

0xc315,	// (0x000891db) frm_month_g16

0x000f,

0xfe11,	// (0x0008ccd7) frm_month_g

0x290e,	// (0x0007f7d4) cell_top_day_name_pane_t1

0xc324,	// (0x000891ea) cell_area_left_week_number_pane_g1

0xc333,	// (0x000891f9) cell_area_left_week_number_pane_t1

0xd4ce,	// (0x0008a394) cell_month_view_pane_g1

0xc349,	// (0x0008920f) cell_month_view_pane_t1

0xcdcd,	// (0x00089c93) main_fps_pane

0xe9ca,	// (0x0008b890) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe9ca,	// (0x0008b890) cmail_ddmenu_btn02_pane_cp1

0xe9e6,	// (0x0008b8ac) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe9e6,	// (0x0008b8ac) cmail_ddmenu_btn02_pane_cp2

0xbad8,	// (0x0008899e) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xbad8,	// (0x0008899e) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfd2f,	// (0x0008cbf5) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfd2f,	// (0x0008cbf5) cmail_ddmenu_btn02_pane_g

0xbaf6,	// (0x000889bc) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xbaf6,	// (0x000889bc) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfd34,	// (0x0008cbfa) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfd34,	// (0x0008cbfa) cmail_ddmenu_btn02_pane_t

0xc35f,	// (0x00089225) fps_text_pane_ParamLimits

0xc35f,	// (0x00089225) fps_text_pane

0xc36c,	// (0x00089232) main_fps_pane_g1_ParamLimits

0xc36c,	// (0x00089232) main_fps_pane_g1

0xc37a,	// (0x00089240) wait_bar_pane_cp010_ParamLimits

0xc37a,	// (0x00089240) wait_bar_pane_cp010

0xc386,	// (0x0008924c) fps_text_pane_t1_ParamLimits

0xc386,	// (0x0008924c) fps_text_pane_t1

0x907d,	// (0x00085f43) cam4_image_uncrop_pane_g1

0x9086,	// (0x00085f4c) cam4_image_uncrop_pane_g2

0x908f,	// (0x00085f55) cam4_image_uncrop_pane_g3

0x9098,	// (0x00085f5e) cam4_image_uncrop_pane_g4

0x0003,

0xf873,	// (0x0008c739) cam4_image_uncrop_pane_g

0xc18e,	// (0x00089054) dia3_listrow_pane_ParamLimits

0xcdcd,	// (0x00089c93) main_phob2_pane

0xb60a,	// (0x000884d0) cell_tport_appsw_pane_cp02_ParamLimits

0xb60a,	// (0x000884d0) cell_tport_appsw_pane_cp02

0xb619,	// (0x000884df) cell_tport_appsw_pane_cp03_ParamLimits

0xb619,	// (0x000884df) cell_tport_appsw_pane_cp03

0xcdcd,	// (0x00089c93) phob2_contact_card_pane

0xcdcd,	// (0x00089c93) phob2_listscroll_pane

0x2921,	// (0x0007f7e7) phob2_list_pane

0x2929,	// (0x0007f7ef) scroll_pane_cp034

0xc39f,	// (0x00089265) phob2_cc_data_pane_ParamLimits

0xc39f,	// (0x00089265) phob2_cc_data_pane

0xc3b9,	// (0x0008927f) phob2_cc_listscroll_pane_ParamLimits

0xc3b9,	// (0x0008927f) phob2_cc_listscroll_pane

0xbf7f,	// (0x00088e45) list_double_large_graphic_phob2_pane_ParamLimits

0xbf7f,	// (0x00088e45) list_double_large_graphic_phob2_pane

0xc3d3,	// (0x00089299) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xc3d3,	// (0x00089299) list_double_large_graphic_phob2_pane_g1

0xc3e0,	// (0x000892a6) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xc3e0,	// (0x000892a6) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfe32,	// (0x0008ccf8) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfe32,	// (0x0008ccf8) list_double_large_graphic_phob2_pane_g

0xc406,	// (0x000892cc) list_double_large_graphic_phob2_pane_t1_ParamLimits

0xc406,	// (0x000892cc) list_double_large_graphic_phob2_pane_t1

0xc41b,	// (0x000892e1) list_double_large_graphic_phob2_pane_t2_ParamLimits

0xc41b,	// (0x000892e1) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfe3b,	// (0x0008cd01) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfe3b,	// (0x0008cd01) list_double_large_graphic_phob2_pane_t

0xcdcd,	// (0x00089c93) list_highlight_pane_cp024

0x2931,	// (0x0007f7f7) phob2_cc_button_pane

0xc430,	// (0x000892f6) phob2_cc_data_pane_g1_ParamLimits

0xc430,	// (0x000892f6) phob2_cc_data_pane_g1

0xc43f,	// (0x00089305) phob2_cc_data_pane_g2_ParamLimits

0xc43f,	// (0x00089305) phob2_cc_data_pane_g2

0x0001,

0xfe40,	// (0x0008cd06) phob2_cc_data_pane_g_ParamLimits

0xfe40,	// (0x0008cd06) phob2_cc_data_pane_g

0xc44e,	// (0x00089314) phob2_cc_data_pane_t1_ParamLimits

0xc44e,	// (0x00089314) phob2_cc_data_pane_t1

0xc463,	// (0x00089329) phob2_cc_data_pane_t2_ParamLimits

0xc463,	// (0x00089329) phob2_cc_data_pane_t2

0xc478,	// (0x0008933e) phob2_cc_data_pane_t3_ParamLimits

0xc478,	// (0x0008933e) phob2_cc_data_pane_t3

0x0002,

0xfe45,	// (0x0008cd0b) phob2_cc_data_pane_t_ParamLimits

0xfe45,	// (0x0008cd0b) phob2_cc_data_pane_t

0x2939,	// (0x0007f7ff) phob2_cc_list_pane_ParamLimits

0x2939,	// (0x0007f7ff) phob2_cc_list_pane

0xe32e,	// (0x0008b1f4) scroll_pane_cp035_ParamLimits

0xe32e,	// (0x0008b1f4) scroll_pane_cp035

0xd467,	// (0x0008a32d) bg_button_pane_cp033

0x2945,	// (0x0007f80b) phob2_cc_button_pane_g1

0x2951,	// (0x0007f817) phob2_cc_button_pane_t1

0x2966,	// (0x0007f82c) phob2_cc_button_pane_t2

0x0001,

0xfe4c,	// (0x0008cd12) phob2_cc_button_pane_t

0xc48d,	// (0x00089353) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xc48d,	// (0x00089353) list_double_large_graphic_phob2_cc_pane

0xc501,	// (0x000893c7) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xc501,	// (0x000893c7) list_double_large_graphic_phob2_cc_pane_g1

0xc512,	// (0x000893d8) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xc512,	// (0x000893d8) list_double_large_graphic_phob2_cc_pane_g2

0xc521,	// (0x000893e7) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xc521,	// (0x000893e7) list_double_large_graphic_phob2_cc_pane_g3

0xc530,	// (0x000893f6) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0xc530,	// (0x000893f6) list_double_large_graphic_phob2_cc_pane_g4

0xc541,	// (0x00089407) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xc541,	// (0x00089407) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfe51,	// (0x0008cd17) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfe51,	// (0x0008cd17) list_double_large_graphic_phob2_cc_pane_g

0xc550,	// (0x00089416) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0xc550,	// (0x00089416) list_double_large_graphic_phob2_cc_pane_t1

0xc579,	// (0x0008943f) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0xc579,	// (0x0008943f) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfe5c,	// (0x0008cd22) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfe5c,	// (0x0008cd22) list_double_large_graphic_phob2_cc_pane_t

0x2978,	// (0x0007f83e) list_highlight_pane_cp025_ParamLimits

0x2978,	// (0x0007f83e) list_highlight_pane_cp025

0xd467,	// (0x0008a32d) bg_button_pane_cp033_ParamLimits

0x2945,	// (0x0007f80b) phob2_cc_button_pane_g1_ParamLimits

0x2951,	// (0x0007f817) phob2_cc_button_pane_t1_ParamLimits

0x2966,	// (0x0007f82c) phob2_cc_button_pane_t2_ParamLimits

0xfe4c,	// (0x0008cd12) phob2_cc_button_pane_t_ParamLimits

0x401f,	// (0x00080ee5) popup_wgtman_window

0x98ac,	// (0x00086772) scroll_pane_cp038

0xbf08,	// (0x00088dce) wgtman_btn_pane_cp_01_ParamLimits

0xbf08,	// (0x00088dce) wgtman_btn_pane_cp_01

0x2986,	// (0x0007f84c) wgtman_content_pane

0x298f,	// (0x0007f855) wgtman_heading_pane

0xcdcd,	// (0x00089c93) bg_heading_pane_cp02

0x2998,	// (0x0007f85e) wgtman_heading_pane_g1

0x29a0,	// (0x0007f866) wgtman_heading_pane_t1

0x29ae,	// (0x0007f874) scroll_pane_cp036

0x29b6,	// (0x0007f87c) wgtman_list_pane

0xf050,	// (0x0008bf16) wgtman_list_pane_t1_ParamLimits

0xf050,	// (0x0008bf16) wgtman_list_pane_t1

0x8fdc,	// (0x00085ea2) cam4_grid_pane

0x9f5c,	// (0x00086e22) bg_button_pane_cp015_ParamLimits

0x9f71,	// (0x00086e37) bg_button_pane_cp016_ParamLimits

0x9f7d,	// (0x00086e43) bg_button_pane_cp017_ParamLimits

0x9fd5,	// (0x00086e9b) popup_vitu2_query_window_g3_ParamLimits

0x9fd5,	// (0x00086e9b) popup_vitu2_query_window_g3

0xa076,	// (0x00086f3c) popup_vitu2_query_window_t6_ParamLimits

0xa076,	// (0x00086f3c) popup_vitu2_query_window_t6

0xa0a1,	// (0x00086f67) popup_vitu2_query_window_t7_ParamLimits

0xa0a1,	// (0x00086f67) popup_vitu2_query_window_t7

0xe75f,	// (0x0008b625) cam4_grid_pane_g1

0xe768,	// (0x0008b62e) cam4_grid_pane_g2

0x29be,	// (0x0007f884) cam4_grid_pane_g3

0x29c7,	// (0x0007f88d) cam4_grid_pane_g4

0x0003,

0xfe61,	// (0x0008cd27) cam4_grid_pane_g

0x4b91,	// (0x00081a57) aid_placing_vt_slider_lsc_ParamLimits

0x4ed1,	// (0x00081d97) vidtel_button_pane_ParamLimits

0x4ed1,	// (0x00081d97) vidtel_button_pane

0xcdcd,	// (0x00089c93) bg_button_pane_cp034

0x29d2,	// (0x0007f898) vidtel_button_pane_g1

0x29da,	// (0x0007f8a0) vidtel_button_pane_t1

0xdb30,	// (0x0008a9f6) aid_size_vtel_slider_touch

0xe32e,	// (0x0008b1f4) scroll_pane_cp039

0xadc0,	// (0x00087c86) ncim_query_button_pane_cp01_ParamLimits

0xaddf,	// (0x00087ca5) ncimui_query_pane_g1_ParamLimits

0xd467,	// (0x0008a32d) input_focus_pane_cp012_ParamLimits

0xe451,	// (0x0008b317) ncim_query_entry_pane_t1_ParamLimits

0xe32e,	// (0x0008b1f4) scroll_pane_cp039_ParamLimits

0x07ae,	// (0x0007d674) navi_pane_bcale_mc_g1

0x07b6,	// (0x0007d67c) navi_pane_bcale_mc_t1

0xea1a,	// (0x0008b8e0) main_sp_fs_email_pane_g1

0xea26,	// (0x0008b8ec) main_sp_fs_email_pane_g2

0x0001,

0xfc64,	// (0x0008cb2a) main_sp_fs_email_pane_g

0xec98,	// (0x0008bb5e) list_single_cale_mrui_row_pane_g3_ParamLimits

0xec98,	// (0x0008bb5e) list_single_cale_mrui_row_pane_g3

0xbb16,	// (0x000889dc) list_single_recal_day_pane_g5_event_pane

0x2750,	// (0x0007f616) list_single_recal_day_pane_g7

0x29f0,	// (0x0007f8b6) list_recal_day_event_pane_cp01

0x29f9,	// (0x0007f8bf) list_recal_vselct_arw_lo_pane_cp01

0x2a01,	// (0x0007f8c7) list_recal_vselct_arw_up_pane_cp01

0x2a09,	// (0x0007f8cf) list_recal_vselct_pane_cp01

0xdb52,	// (0x0008aa18) list_recal_day_event_pane_cp01_g1

0x2a13,	// (0x0007f8d9) list_recal_day_event_pane_cp01_t1

0x2758,	// (0x0007f61e) list_single_recal_day_pane_t1_ParamLimits

0x276a,	// (0x0007f630) list_single_recal_day_pane_t2_ParamLimits

0xfd44,	// (0x0008cc0a) list_single_recal_day_pane_t_ParamLimits

0xd445,	// (0x0008a30b) bg_notes_pane_ParamLimits

0xd51e,	// (0x0008a3e4) list_notes_pane_ParamLimits

0x424c,	// (0x00081112) scroll_pane_cp06_ParamLimits

0xd540,	// (0x0008a406) main_notes_pane_ParamLimits

0xd467,	// (0x0008a32d) main_welc_pane

0xc5c3,	// (0x00089489) main_welc_body_pane_ParamLimits

0xc5c3,	// (0x00089489) main_welc_body_pane

0xc5dc,	// (0x000894a2) main_welc_opti_pane_ParamLimits

0xc5dc,	// (0x000894a2) main_welc_opti_pane

0xc637,	// (0x000894fd) main_welc_pane_t1_ParamLimits

0xc637,	// (0x000894fd) main_welc_pane_t1

0xc7bf,	// (0x00089685) main_welc_body_row_pane_ParamLimits

0xc7bf,	// (0x00089685) main_welc_body_row_pane

0xd4c0,	// (0x0008a386) main_welc_opti_row_pane_ParamLimits

0xd4c0,	// (0x0008a386) main_welc_opti_row_pane

0x2a31,	// (0x0007f8f7) main_welc_opti_row_pane_g1

0xc7e8,	// (0x000896ae) main_welc_opti_row_pane_t1

0x2a39,	// (0x0007f8ff) main_welc_body_row_pane_t1

0xefeb,	// (0x0008beb1) popup_notif_wgt_heading_pane

0xf005,	// (0x0008becb) aid_size_list_notif_wgt_del_ParamLimits

0xf012,	// (0x0008bed8) list_notif_wgt_row_pane_g1_ParamLimits

0xf01e,	// (0x0008bee4) list_notif_wgt_row_pane_g2_ParamLimits

0xf02d,	// (0x0008bef3) list_notif_wgt_row_pane_g3_ParamLimits

0xfdab,	// (0x0008cc71) list_notif_wgt_row_pane_g_ParamLimits

0xf03a,	// (0x0008bf00) list_notif_wgt_row_pane_t1_ParamLimits

0x2785,	// (0x0007f64b) list_notif_wgt_row_pane_t2_ParamLimits

0x2797,	// (0x0007f65d) list_notif_wgt_row_pane_t3_ParamLimits

0xfdb2,	// (0x0008cc78) list_notif_wgt_row_pane_t_ParamLimits

0xbf9b,	// (0x00088e61) listrow_wgtman_pane_g1_ParamLimits

0xbfa8,	// (0x00088e6e) listrow_wgtman_pane_g2_ParamLimits

0xfde2,	// (0x0008cca8) listrow_wgtman_pane_g_ParamLimits

0xbfc6,	// (0x00088e8c) listrow_wgtman_pane_t1_ParamLimits

0xbfde,	// (0x00088ea4) listrow_wgtman_pane_t2_ParamLimits

0xfde7,	// (0x0008ccad) listrow_wgtman_pane_t_ParamLimits

0xc004,	// (0x00088eca) wait_bar_pane_cp09_ParamLimits

0xcdcd,	// (0x00089c93) bg_popup_heading_pane_cp02

0x2a48,	// (0x0007f90e) popup_notif_wgt_heading_pane_g1

0x2a50,	// (0x0007f916) popup_notif_wgt_heading_pane_t1

0xcdcd,	// (0x00089c93) main_vids_pane

0xcdcd,	// (0x00089c93) vids_listscroll_pane

0xc7f7,	// (0x000896bd) scroll_pane_cp040

0xcdcd,	// (0x00089c93) vids_list_pane

0xc802,	// (0x000896c8) vids_list_double_pane_ParamLimits

0xc802,	// (0x000896c8) vids_list_double_pane

0xc81a,	// (0x000896e0) vids_list_double_pane_g1

0xc823,	// (0x000896e9) vids_list_double_pane_t1

0xc833,	// (0x000896f9) vids_list_double_pane_t2

0x0001,

0xfe80,	// (0x0008cd46) vids_list_double_pane_t

0x6bb2,	// (0x00083a78) main_ncimui_pane_ParamLimits

0xac17,	// (0x00087add) main_ncimui_pane_g1_ParamLimits

0xac23,	// (0x00087ae9) main_ncimui_pane_g2_ParamLimits

0xac23,	// (0x00087ae9) main_ncimui_pane_g2

0x0001,

0xfb65,	// (0x0008ca2b) main_ncimui_pane_g_ParamLimits

0xfb65,	// (0x0008ca2b) main_ncimui_pane_g

0xc5f5,	// (0x000894bb) main_welc_pane_g1_ParamLimits

0xc5f5,	// (0x000894bb) main_welc_pane_g1

0xc601,	// (0x000894c7) main_welc_pane_g2_ParamLimits

0xc601,	// (0x000894c7) main_welc_pane_g2

0x0003,

0xfe6a,	// (0x0008cd30) main_welc_pane_g_ParamLimits

0xfe6a,	// (0x0008cd30) main_welc_pane_g

0x422e,	// (0x000810f4) listscroll_mce_pane_ParamLimits

0x0903,	// (0x0007d7c9) wait_bar_pane_cp10

0x1d3e,	// (0x0007ec04) main_cale_day_pane_ParamLimits

0x1d3e,	// (0x0007ec04) main_cale_week_pane_ParamLimits

0xd445,	// (0x0008a30b) main_messa_pane_ParamLimits

0x7f5b,	// (0x00084e21) main_clock2_btn_pane_ParamLimits

0x7f5b,	// (0x00084e21) main_clock2_btn_pane

0x7f67,	// (0x00084e2d) main_clock2_btn_pane_cp01_ParamLimits

0x7f67,	// (0x00084e2d) main_clock2_btn_pane_cp01

0xec69,	// (0x0008bb2f) list_cale_mrui_pane_ParamLimits

0x27cd,	// (0x0007f693) main_cf0_pane_g2

0x0001,

0xfdb9,	// (0x0008cc7f) main_cf0_pane_g

0xc1ab,	// (0x00089071) area_left_week_number_pane_ParamLimits

0xc1be,	// (0x00089084) area_top_day_name_pane_ParamLimits

0xc1cc,	// (0x00089092) frame_month_view_pane_ParamLimits

0x28e6,	// (0x0007f7ac) grid_month_view_pane_ParamLimits

0x28f4,	// (0x0007f7ba) frm_month_g1_ParamLimits

0xc24a,	// (0x00089110) frm_month_g2_ParamLimits

0xc25b,	// (0x00089121) frm_month_g3_ParamLimits

0xc26c,	// (0x00089132) frm_month_g4_ParamLimits

0xc27d,	// (0x00089143) frm_month_g5_ParamLimits

0xc290,	// (0x00089156) frm_month_g6_ParamLimits

0xc2a3,	// (0x00089169) frm_month_g7_ParamLimits

0x2901,	// (0x0007f7c7) frm_month_g8_ParamLimits

0xc2b6,	// (0x0008917c) frm_month_g9_ParamLimits

0xc2c3,	// (0x00089189) frm_month_g10_ParamLimits

0xc2d0,	// (0x00089196) frm_month_g11_ParamLimits

0xc2dd,	// (0x000891a3) frm_month_g12_ParamLimits

0xc2ea,	// (0x000891b0) frm_month_g13_ParamLimits

0xc2f7,	// (0x000891bd) frm_month_g14_ParamLimits

0xc306,	// (0x000891cc) frm_month_g15_ParamLimits

0xc315,	// (0x000891db) frm_month_g16_ParamLimits

0xfe11,	// (0x0008ccd7) frm_month_g_ParamLimits

0x290e,	// (0x0007f7d4) cell_top_day_name_pane_t1_ParamLimits

0xc324,	// (0x000891ea) cell_area_left_week_number_pane_g1_ParamLimits

0xc333,	// (0x000891f9) cell_area_left_week_number_pane_t1_ParamLimits

0xd4ce,	// (0x0008a394) cell_month_view_pane_g1_ParamLimits

0xc349,	// (0x0008920f) cell_month_view_pane_t1_ParamLimits

0xd43d,	// (0x0008a303) main_clock2_btn_pane_g1

0x2a5e,	// (0x0007f924) main_clock2_btn_pane_t1

0xd467,	// (0x0008a32d) listscroll_cmail_pane_ParamLimits

0xea1a,	// (0x0008b8e0) main_sp_fs_email_pane_g1_ParamLimits

0xea26,	// (0x0008b8ec) main_sp_fs_email_pane_g2_ParamLimits

0xfc64,	// (0x0008cb2a) main_sp_fs_email_pane_g_ParamLimits

0xed77,	// (0x0008bc3d) list_recal_day_pane_ParamLimits

0xed88,	// (0x0008bc4e) mian_recal_day_pane_t1

0xb4f8,	// (0x000883be) list_single_dyc_row_text_pane_t4_ParamLimits

0xb4f8,	// (0x000883be) list_single_dyc_row_text_pane_t4

0xb52f,	// (0x000883f5) list_single_dyc_row_text_pane_t5_ParamLimits

0xb52f,	// (0x000883f5) list_single_dyc_row_text_pane_t5

0x24e8,	// (0x0007f3ae) list_single_dyc_row_text_pane_t6_ParamLimits

0x24e8,	// (0x0007f3ae) list_single_dyc_row_text_pane_t6

0x5cee,	// (0x00082bb4) aid_mgn_list_cale_time_pane

0x6bb2,	// (0x00083a78) main_gallery2_pane_ParamLimits

0x7f7d,	// (0x00084e43) main_clock2_pane_cp01_t1

0x7f8b,	// (0x00084e51) main_clock2_pane_cp01_t3

0x0001,

0xf74a,	// (0x0008c610) main_clock2_pane_cp01_t

0x46a1,	// (0x00081567) cale_week_scroll_pane_g16_ParamLimits

0x46a1,	// (0x00081567) cale_week_scroll_pane_g16

0xd6f2,	// (0x0008a5b8) vorec_slider_pane

0x29da,	// (0x0007f8a0) vidtel_button_pane_t1_ParamLimits

0xbb71,	// (0x00088a37) main_fs_bigclock_clock_pane_g1_ParamLimits

0xbb71,	// (0x00088a37) main_fs_bigclock_clock_pane_g2_ParamLimits

0xbb7e,	// (0x00088a44) main_fs_bigclock_clock_pane_g3_ParamLimits

0xbb7e,	// (0x00088a44) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfd67,	// (0x0008cc2d) main_fs_bigclock_clock_pane_g_ParamLimits

0xbb8a,	// (0x00088a50) main_fs_bigclock_clock_pane_t1_ParamLimits

0xbb9d,	// (0x00088a63) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfd70,	// (0x0008cc36) main_fs_bigclock_clock_pane_t_ParamLimits

0x77dc,	// (0x000846a2) main_mup3_lyrics_pane_ParamLimits

0x77dc,	// (0x000846a2) main_mup3_lyrics_pane

0xc867,	// (0x0008972d) main_mup3_lyrics_pane_t1_ParamLimits

0xc867,	// (0x0008972d) main_mup3_lyrics_pane_t1

0x8886,	// (0x0008574c) aid_main_mp4_pane_t1_area

0x8890,	// (0x00085756) aid_main_mp4_pane_t2_area

0x898f,	// (0x00085855) main_mp4_pane_g7_ParamLimits

0x898f,	// (0x00085855) main_mp4_pane_g7

0x899b,	// (0x00085861) main_mp4_pane_g8_ParamLimits

0x899b,	// (0x00085861) main_mp4_pane_g8

0x8e5a,	// (0x00085d20) aid_call6_pane_g1_size

0xc4d3,	// (0x00089399) list_double_large_graphic_phob2_other_pane_ParamLimits

0xc4d3,	// (0x00089399) list_double_large_graphic_phob2_other_pane

0xdaaf,	// (0x0008a975) list_double_large_graphic_phob2_other_pane_g1

0xcdcd,	// (0x00089c93) list_highlight_pane_cp026

0xd467,	// (0x0008a32d) main_welc_pane_ParamLimits

0xb397,	// (0x0008825d) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0xb397,	// (0x0008825d) main_sp_fs_ctrlbar_pane_g3

0xb3af,	// (0x00088275) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0xb3af,	// (0x00088275) main_sp_fs_ctrlbar_pane_g4

0xb3e1,	// (0x000882a7) toolbar2_fixed_button_pane_cp01

0xb3ec,	// (0x000882b2) toolbar2_fixed_button_pane_cp02

0xb3f7,	// (0x000882bd) toolbar2_fixed_button_pane_cp03

0xc5b4,	// (0x0008947a) list_welc_entry_pane_ParamLimits

0xc5b4,	// (0x0008947a) list_welc_entry_pane

0xc60f,	// (0x000894d5) main_welc_pane_g3_ParamLimits

0xc60f,	// (0x000894d5) main_welc_pane_g3

0xc651,	// (0x00089517) main_welc_pane_t2_ParamLimits

0xc651,	// (0x00089517) main_welc_pane_t2

0xc665,	// (0x0008952b) main_welc_pane_t3_ParamLimits

0xc665,	// (0x0008952b) main_welc_pane_t3

0x0005,

0xfe73,	// (0x0008cd39) main_welc_pane_t_ParamLimits

0xfe73,	// (0x0008cd39) main_welc_pane_t

0xc761,	// (0x00089627) welc_button_pane_ParamLimits

0xc761,	// (0x00089627) welc_button_pane

0xc7b1,	// (0x00089677) welc_service_logo_pane_ParamLimits

0xc7b1,	// (0x00089677) welc_service_logo_pane

0xc89d,	// (0x00089763) list_single_welc_entry_pane_ParamLimits

0xc89d,	// (0x00089763) list_single_welc_entry_pane

0xc8ae,	// (0x00089774) list_single_welc_entry_pane_g1

0xc8b6,	// (0x0008977c) list_single_welc_entry_pane_t1

0xc8c4,	// (0x0008978a) list_single_welc_entry_pane_t2

0x0001,

0xfe85,	// (0x0008cd4b) list_single_welc_entry_pane_t

0xcdcd,	// (0x00089c93) bg_button_pane_cp035

0x2a6c,	// (0x0007f932) welc_button_pane_t1

0x2a7a,	// (0x0007f940) welc_service_logo_pane_g1

0x2a83,	// (0x0007f949) welc_service_logo_pane_g2

0x0001,

0xfe8a,	// (0x0008cd50) welc_service_logo_pane_g

0x402b,	// (0x00080ef1) main_int_radio_pane

0xe2e3,	// (0x0008b1a9) list_single_fs_dyc_pane_g1

0xc3ec,	// (0x000892b2) list_double_large_graphic_phob2_pane_g3_ParamLimits

0xc3ec,	// (0x000892b2) list_double_large_graphic_phob2_pane_g3

0xc3f8,	// (0x000892be) list_double_large_graphic_phob2_pane_g4_ParamLimits

0xc3f8,	// (0x000892be) list_double_large_graphic_phob2_pane_g4

0xc8d2,	// (0x00089798) main_int_radio1_pane_ParamLimits

0xc8d2,	// (0x00089798) main_int_radio1_pane

0x2a8c,	// (0x0007f952) find_pane_cp02

0xc8e4,	// (0x000897aa) input_focus_pane_cp12_ParamLimits

0xc8e4,	// (0x000897aa) input_focus_pane_cp12

0xc8f0,	// (0x000897b6) input_focus_pane_cp13_ParamLimits

0xc8f0,	// (0x000897b6) input_focus_pane_cp13

0xc908,	// (0x000897ce) input_focus_pane_cp14_ParamLimits

0xc908,	// (0x000897ce) input_focus_pane_cp14

0x2a95,	// (0x0007f95b) int_radio1_listscroll_pane

0xc920,	// (0x000897e6) main_int_radio1_pane_g1_ParamLimits

0xc920,	// (0x000897e6) main_int_radio1_pane_g1

0xc930,	// (0x000897f6) main_int_radio1_pane_t1_ParamLimits

0xc930,	// (0x000897f6) main_int_radio1_pane_t1

0xc944,	// (0x0008980a) main_int_radio1_pane_t2_ParamLimits

0xc944,	// (0x0008980a) main_int_radio1_pane_t2

0xc958,	// (0x0008981e) main_int_radio1_pane_t3_ParamLimits

0xc958,	// (0x0008981e) main_int_radio1_pane_t3

0xc96c,	// (0x00089832) main_int_radio1_pane_t4_ParamLimits

0xc96c,	// (0x00089832) main_int_radio1_pane_t4

0x2a9f,	// (0x0007f965) main_int_radio1_pane_t5_ParamLimits

0x2a9f,	// (0x0007f965) main_int_radio1_pane_t5

0xc983,	// (0x00089849) main_int_radio1_pane_t6_ParamLimits

0xc983,	// (0x00089849) main_int_radio1_pane_t6

0xc995,	// (0x0008985b) main_int_radio1_pane_t7_ParamLimits

0xc995,	// (0x0008985b) main_int_radio1_pane_t7

0xc9a7,	// (0x0008986d) main_int_radio1_pane_t8_ParamLimits

0xc9a7,	// (0x0008986d) main_int_radio1_pane_t8

0xc9bb,	// (0x00089881) main_int_radio1_pane_t9_ParamLimits

0xc9bb,	// (0x00089881) main_int_radio1_pane_t9

0xc9cd,	// (0x00089893) main_int_radio1_pane_t10_ParamLimits

0xc9cd,	// (0x00089893) main_int_radio1_pane_t10

0xc9fe,	// (0x000898c4) main_int_radio1_pane_t11_ParamLimits

0xc9fe,	// (0x000898c4) main_int_radio1_pane_t11

0xca2f,	// (0x000898f5) main_int_radio1_pane_t12_ParamLimits

0xca2f,	// (0x000898f5) main_int_radio1_pane_t12

0x000b,

0xfe8f,	// (0x0008cd55) main_int_radio1_pane_t_ParamLimits

0xfe8f,	// (0x0008cd55) main_int_radio1_pane_t

0x2ab1,	// (0x0007f977) int_radio_list_pane

0x2929,	// (0x0007f7ef) scroll_pane_cp037

0x2ab9,	// (0x0007f97f) list_double_large_graphic_int_radio_pane_ParamLimits

0x2ab9,	// (0x0007f97f) list_double_large_graphic_int_radio_pane

0x2ad2,	// (0x0007f998) list_double_large_graphic_int_radio_pane_g1

0x2adb,	// (0x0007f9a1) list_double_large_graphic_int_radio_pane_t1

0x2ae9,	// (0x0007f9af) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfea8,	// (0x0008cd6e) list_double_large_graphic_int_radio_pane_t

0xcdcd,	// (0x00089c93) list_highlight_pane_cp027

0x2a21,	// (0x0007f8e7) main_button_pane_4

0xc61b,	// (0x000894e1) main_welc_pane_g4_ParamLimits

0xc61b,	// (0x000894e1) main_welc_pane_g4

0xc677,	// (0x0008953d) main_welc_pane_t4_ParamLimits

0xc677,	// (0x0008953d) main_welc_pane_t4

0xc689,	// (0x0008954f) main_welc_pane_t5_ParamLimits

0xc689,	// (0x0008954f) main_welc_pane_t5

0xc6b9,	// (0x0008957f) main_welc_pane_t6_ParamLimits

0xc6b9,	// (0x0008957f) main_welc_pane_t6

0xc76f,	// (0x00089635) welc_button_pane_2_ParamLimits

0xc76f,	// (0x00089635) welc_button_pane_2

0xc787,	// (0x0008964d) welc_button_pane_3_ParamLimits

0xc787,	// (0x0008964d) welc_button_pane_3

0x2a29,	// (0x0007f8ef) welc_button_pane_4

0xc7a1,	// (0x00089667) welc_button_pane_5_ParamLimits

0xc7a1,	// (0x00089667) welc_button_pane_5

0x3d9d,	// (0x00080c63) main_popup_welc_pane

0x2b06,	// (0x0007f9cc) main_welc_sk_g3

0x2b10,	// (0x0007f9d6) main_welc_sk_g4

0x2b1a,	// (0x0007f9e0) main_welc_sk_t3

0x2b2a,	// (0x0007f9f0) main_welc_sk_t4

0x2b3a,	// (0x0007fa00) popup_welc_pane_t4

0x2b48,	// (0x0007fa0e) popup_welc_pane_t5

0x2b58,	// (0x0007fa1e) popup_welc_pane_t6

0x402b,	// (0x00080ef1) main_acti_pane

0xcdcd,	// (0x00089c93) main_sso_pane

0xca46,	// (0x0008990c) sso_body_pane_ParamLimits

0xca46,	// (0x0008990c) sso_body_pane

0xca54,	// (0x0008991a) sso_logo_pane_ParamLimits

0xca54,	// (0x0008991a) sso_logo_pane

0xca7b,	// (0x00089941) sso_sk_pane_ParamLimits

0xca7b,	// (0x00089941) sso_sk_pane

0xd728,	// (0x0008a5ee) main_sso_logo_pane_g1

0xca88,	// (0x0008994e) sso_sk_pane_t1_ParamLimits

0xca88,	// (0x0008994e) sso_sk_pane_t1

0xca9c,	// (0x00089962) sso_sk_pane_t2_ParamLimits

0xca9c,	// (0x00089962) sso_sk_pane_t2

0x0001,

0xfead,	// (0x0008cd73) sso_sk_pane_t_ParamLimits

0xfead,	// (0x0008cd73) sso_sk_pane_t

0x2b96,	// (0x0007fa5c) aid_sso_gap

0x2b9f,	// (0x0007fa65) aid_sso_txt1

0x2ba9,	// (0x0007fa6f) aid_sso_txt2

0x2bb3,	// (0x0007fa79) aid_sso_txt3

0x0002,

0xfeb2,	// (0x0008cd78) aid_sso_txt

0x2bbd,	// (0x0007fa83) aid_sso_widget

0xcafb,	// (0x000899c1) sso_btn_pane_ParamLimits

0xcafb,	// (0x000899c1) sso_btn_pane

0xcb74,	// (0x00089a3a) sso_option_pane_ParamLimits

0xcb74,	// (0x00089a3a) sso_option_pane

0xcbee,	// (0x00089ab4) sso_query_pane_ParamLimits

0xcbee,	// (0x00089ab4) sso_query_pane

0xcc3e,	// (0x00089b04) sso_query_pane_cp01_ParamLimits

0xcc3e,	// (0x00089b04) sso_query_pane_cp01

0xcc90,	// (0x00089b56) sso_t_hdr_pane_ParamLimits

0xcc90,	// (0x00089b56) sso_t_hdr_pane

0xccaf,	// (0x00089b75) sso_t_nml_pane_ParamLimits

0xccaf,	// (0x00089b75) sso_t_nml_pane

0x2bb3,	// (0x0007fa79) sso_t_sub_pane

0xca61,	// (0x00089927) sso_popup_window_ParamLimits

0xca61,	// (0x00089927) sso_popup_window

0xcaae,	// (0x00089974) sso_apps_pane_ParamLimits

0xcaae,	// (0x00089974) sso_apps_pane

0xcad1,	// (0x00089997) sso_body_pane_g1

0xcadb,	// (0x000899a1) sso_body_pane_t1

0xcaeb,	// (0x000899b1) sso_body_pane_t2

0x0001,

0xfeb9,	// (0x0008cd7f) sso_body_pane_t

0xcb46,	// (0x00089a0c) sso_btn_pane_cp01_ParamLimits

0xcb46,	// (0x00089a0c) sso_btn_pane_cp01

0xcbc0,	// (0x00089a86) sso_prog_pane_ParamLimits

0xcbc0,	// (0x00089a86) sso_prog_pane

0x2bc7,	// (0x0007fa8d) sso_t_hdr_pane_t1_ParamLimits

0x2bc7,	// (0x0007fa8d) sso_t_hdr_pane_t1

0x2bda,	// (0x0007faa0) input_focus_pane_cp10_ParamLimits

0x2bda,	// (0x0007faa0) input_focus_pane_cp10

0x2bf0,	// (0x0007fab6) sso_query_pane_t1_ParamLimits

0x2bf0,	// (0x0007fab6) sso_query_pane_t1

0x2c03,	// (0x0007fac9) sso_query_pane_t2_ParamLimits

0x2c03,	// (0x0007fac9) sso_query_pane_t2

0x2c1c,	// (0x0007fae2) sso_query_pane_t3_ParamLimits

0x2c1c,	// (0x0007fae2) sso_query_pane_t3

0x2c46,	// (0x0007fb0c) sso_query_pane_t4_ParamLimits

0x2c46,	// (0x0007fb0c) sso_query_pane_t4

0x0003,

0xfebe,	// (0x0008cd84) sso_query_pane_t_ParamLimits

0xfebe,	// (0x0008cd84) sso_query_pane_t

0xcdcd,	// (0x00089c93) bg_button_pane_cp22

0x2af7,	// (0x0007f9bd) sso_btn_pane_t1

0xccff,	// (0x00089bc5) sso_t_nml_pane_t1_ParamLimits

0xccff,	// (0x00089bc5) sso_t_nml_pane_t1

0x2c6a,	// (0x0007fb30) sso_option_row_pane_ParamLimits

0x2c6a,	// (0x0007fb30) sso_option_row_pane

0x2c77,	// (0x0007fb3d) sso_t_sub_pane_t1_ParamLimits

0x2c77,	// (0x0007fb3d) sso_t_sub_pane_t1

0xd467,	// (0x0008a32d) bg_popup_window_pane_cp11_ParamLimits

0xd467,	// (0x0008a32d) bg_popup_window_pane_cp11

0x2c8a,	// (0x0007fb50) popup_sk_window_cp01_ParamLimits

0x2c8a,	// (0x0007fb50) popup_sk_window_cp01

0x2c97,	// (0x0007fb5d) sso_popup_body_pane_ParamLimits

0x2c97,	// (0x0007fb5d) sso_popup_body_pane

0x2ca4,	// (0x0007fb6a) scroll_pane_cp21_ParamLimits

0x2ca4,	// (0x0007fb6a) scroll_pane_cp21

0x2cb1,	// (0x0007fb77) sso_popup_body_t_pane_ParamLimits

0x2cb1,	// (0x0007fb77) sso_popup_body_t_pane

0x2cbe,	// (0x0007fb84) sso_popup_body_t_hdr_pane_ParamLimits

0x2cbe,	// (0x0007fb84) sso_popup_body_t_hdr_pane

0x2ccc,	// (0x0007fb92) sso_popup_body_t_nml_pane_ParamLimits

0x2ccc,	// (0x0007fb92) sso_popup_body_t_nml_pane

0x2ce7,	// (0x0007fbad) sso_popup_body_t_sub_pane_ParamLimits

0x2ce7,	// (0x0007fbad) sso_popup_body_t_sub_pane

0x2d0a,	// (0x0007fbd0) sso_popup_body_t_hdr_pane_t1

0xcd1c,	// (0x00089be2) sso_popup_body_t_nml_pane_t1_ParamLimits

0xcd1c,	// (0x00089be2) sso_popup_body_t_nml_pane_t1

0xcd60,	// (0x00089c26) sso_popup_body_t_sub_pane_t1_ParamLimits

0xcd60,	// (0x00089c26) sso_popup_body_t_sub_pane_t1

0xd728,	// (0x0008a5ee) sso_prog_pane_g1

0xcd85,	// (0x00089c4b) sso_apps_pane_comp1_ParamLimits

0xcd85,	// (0x00089c4b) sso_apps_pane_comp1

0xcda1,	// (0x00089c67) sso_apps_pane_comp1_g1

0xcda9,	// (0x00089c6f) sso_apps_pane_comp1_t1

0xcdb7,	// (0x00089c7d) sso_option_row_pane_g1

0xcdbf,	// (0x00089c85) sso_option_row_pane_t1

0xc5a2,	// (0x00089468) bg_welc_area_ParamLimits

0xc5a2,	// (0x00089468) bg_welc_area

0xc6ef,	// (0x000895b5) sso_t_hdr_pane_a_t1_ParamLimits

0xc6ef,	// (0x000895b5) sso_t_hdr_pane_a_t1

0xc703,	// (0x000895c9) sso_t_nml_pane_a_t1_ParamLimits

0xc703,	// (0x000895c9) sso_t_nml_pane_a_t1

0xc72d,	// (0x000895f3) sso_t_sub_pane_a_t1_ParamLimits

0xc72d,	// (0x000895f3) sso_t_sub_pane_a_t1

0x2af7,	// (0x0007f9bd) sso_btn_pane_t1_copy1

0xcdcd,	// (0x00089c93) welc_button_pane_2_comp1

0x2b66,	// (0x0007fa2c) sso_t_hdr_pane_p_t1

0x2b76,	// (0x0007fa3c) sso_t_nml_pane_p_t1

0x2b86,	// (0x0007fa4c) sso_t_sub_pane_p_t1
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
	};

} // end of namespace AknLayoutScalable_Abrw_pnp4_apps_nhd4_prt_tch_Large
