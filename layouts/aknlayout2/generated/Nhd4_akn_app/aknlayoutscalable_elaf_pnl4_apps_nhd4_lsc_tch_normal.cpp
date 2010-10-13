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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x0000e311 };

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
0x09b4,	// (0x0000ecc5) Screen

0x09c0,	// (0x0000ecd1) application_window

0x09fc,	// (0x0000ed0d) area_bottom_pane_ParamLimits

0x09fc,	// (0x0000ed0d) area_bottom_pane

0x0a35,	// (0x0000ed46) area_top_pane_ParamLimits

0x0a35,	// (0x0000ed46) area_top_pane

0x9282,	// (0x00017593) call_video_uplink_pane_ParamLimits

0x9282,	// (0x00017593) call_video_uplink_pane

0x0ac3,	// (0x0000edd4) main_pane_ParamLimits

0x0ac3,	// (0x0000edd4) main_pane

0xbae3,	// (0x00019df4) context_pane

0x363c,	// (0x0001194d) navi_pane

0x366e,	// (0x0001197f) popup_cale_events_window_ParamLimits

0x366e,	// (0x0001197f) popup_cale_events_window

0xbaf6,	// (0x00019e07) popup_mup_playback_window

0x3686,	// (0x00011997) signal_pane

0x9a55,	// (0x00017d66) main_browser_pane

0x9c8a,	// (0x00017f9b) main_burst_pane

0x33a4,	// (0x000116b5) main_calc_pane

0xba83,	// (0x00019d94) main_cale_day_pane

0x0efc,	// (0x0000f20d) main_cale_month_pane

0xba83,	// (0x00019d94) main_cale_week_pane

0x9c8a,	// (0x00017f9b) main_call_pane

0x96c1,	// (0x000179d2) main_call_poc_pane

0x9c8a,	// (0x00017f9b) main_camera_pane

0x9c8a,	// (0x00017f9b) main_chi_dic_pane

0xa4d8,	// (0x000187e9) main_clock_pane

0x96c1,	// (0x000179d2) main_fmradio_pane

0x9c8a,	// (0x00017f9b) main_graph_messa_pane

0x96c1,	// (0x000179d2) main_help_pane

0x9a55,	// (0x00017d66) main_im_pane

0x991c,	// (0x00017c2d) main_image_pane_ParamLimits

0x991c,	// (0x00017c2d) main_image_pane

0x96c1,	// (0x000179d2) main_location2_pane

0x9c8a,	// (0x00017f9b) main_location_pane

0x991c,	// (0x00017c2d) main_messa_pane

0x96c1,	// (0x000179d2) main_mp2_pane

0x9c8a,	// (0x00017f9b) main_mp_pane

0x96c1,	// (0x000179d2) main_msg_pane

0x96c1,	// (0x000179d2) main_mup_eq_pane

0x96c1,	// (0x000179d2) main_mup_pane

0x9a55,	// (0x00017d66) main_notes_pane

0x96c1,	// (0x000179d2) main_pec_pane

0x96c1,	// (0x000179d2) main_phob_pane

0x96c1,	// (0x000179d2) main_pinb_pane

0x96c1,	// (0x000179d2) main_postcard_pane

0x96c1,	// (0x000179d2) main_qdial_pane

0x9c8a,	// (0x00017f9b) main_skin_pane

0x96c1,	// (0x000179d2) main_smil2_pane

0x9c8a,	// (0x00017f9b) main_smil_pane

0x9c8a,	// (0x00017f9b) main_video_pane

0x9c8a,	// (0x00017f9b) main_video_tele_pane

0x991c,	// (0x00017c2d) main_viewer_pane_ParamLimits

0x991c,	// (0x00017c2d) main_viewer_pane

0x9c8a,	// (0x00017f9b) main_vorec_pane

0x33f8,	// (0x00011709) popup_blid_sat_info_window_ParamLimits

0x33f8,	// (0x00011709) popup_blid_sat_info_window

0x3450,	// (0x00011761) popup_dyc_status_message_window_ParamLimits

0x3450,	// (0x00011761) popup_dyc_status_message_window

0x3468,	// (0x00011779) popup_grid_large_graphic_window_ParamLimits

0x3468,	// (0x00011779) popup_grid_large_graphic_window

0x3518,	// (0x00011829) popup_loc_request_window_ParamLimits

0x3518,	// (0x00011829) popup_loc_request_window

0x3614,	// (0x00011925) popup_wml_address_window_ParamLimits

0x3614,	// (0x00011925) popup_wml_address_window

0x31de,	// (0x000114ef) call_muted_g1

0x2ed3,	// (0x000111e4) popup_call_audio_conf_window_ParamLimits

0x2ed3,	// (0x000111e4) popup_call_audio_conf_window

0x31f2,	// (0x00011503) popup_call_audio_first_window_ParamLimits

0x31f2,	// (0x00011503) popup_call_audio_first_window

0x3268,	// (0x00011579) popup_call_audio_in_window_ParamLimits

0x3268,	// (0x00011579) popup_call_audio_in_window

0x32a4,	// (0x000115b5) popup_call_audio_out_window_ParamLimits

0x32a4,	// (0x000115b5) popup_call_audio_out_window

0x32de,	// (0x000115ef) popup_call_audio_second_window_ParamLimits

0x32de,	// (0x000115ef) popup_call_audio_second_window

0x3334,	// (0x00011645) popup_call_audio_wait_window_ParamLimits

0x3334,	// (0x00011645) popup_call_audio_wait_window

0x3369,	// (0x0001167a) popup_number_entry_window_ParamLimits

0x3369,	// (0x0001167a) popup_number_entry_window

0x92ae,	// (0x000175bf) bg_popup_call_pane_cp05_ParamLimits

0x92ae,	// (0x000175bf) bg_popup_call_pane_cp05

0x92ce,	// (0x000175df) popup_number_entry_window_t1

0x92e1,	// (0x000175f2) popup_number_entry_window_t2

0x92f3,	// (0x00017604) popup_number_entry_window_t3

0x0003,

0xf040,	// (0x0001d351) popup_number_entry_window_t

0x9305,	// (0x00017616) text_title_cp2

0x9318,	// (0x00017629) bg_popup_call_pane_cp_ParamLimits

0x9318,	// (0x00017629) bg_popup_call_pane_cp

0x9326,	// (0x00017637) call_thumbnail_pane

0x932e,	// (0x0001763f) popup_call_audio_in_window_g1_ParamLimits

0x932e,	// (0x0001763f) popup_call_audio_in_window_g1

0x933a,	// (0x0001764b) popup_call_audio_in_window_g2_ParamLimits

0x933a,	// (0x0001764b) popup_call_audio_in_window_g2

0x9346,	// (0x00017657) popup_call_audio_in_window_g3_ParamLimits

0x9346,	// (0x00017657) popup_call_audio_in_window_g3

0x0002,

0xf049,	// (0x0001d35a) popup_call_audio_in_window_g_ParamLimits

0xf049,	// (0x0001d35a) popup_call_audio_in_window_g

0x9352,	// (0x00017663) popup_call_audio_in_window_t1_ParamLimits

0x9352,	// (0x00017663) popup_call_audio_in_window_t1

0x936e,	// (0x0001767f) popup_call_audio_in_window_t2_ParamLimits

0x936e,	// (0x0001767f) popup_call_audio_in_window_t2

0x938a,	// (0x0001769b) popup_call_audio_in_window_t3_ParamLimits

0x938a,	// (0x0001769b) popup_call_audio_in_window_t3

0x0002,

0xf050,	// (0x0001d361) popup_call_audio_in_window_t_ParamLimits

0xf050,	// (0x0001d361) popup_call_audio_in_window_t

0x9318,	// (0x00017629) bg_popup_call_pane_cp01_ParamLimits

0x9318,	// (0x00017629) bg_popup_call_pane_cp01

0x9326,	// (0x00017637) call_thumbnail_pane_cp02

0x939d,	// (0x000176ae) call_type_pane_cp022

0x93a5,	// (0x000176b6) popup_call_audio_out_window_g1_ParamLimits

0x93a5,	// (0x000176b6) popup_call_audio_out_window_g1

0x93b7,	// (0x000176c8) popup_call_audio_out_window_g2_ParamLimits

0x93b7,	// (0x000176c8) popup_call_audio_out_window_g2

0x93c3,	// (0x000176d4) popup_call_audio_out_window_g3_ParamLimits

0x93c3,	// (0x000176d4) popup_call_audio_out_window_g3

0x0002,

0xf057,	// (0x0001d368) popup_call_audio_out_window_g_ParamLimits

0xf057,	// (0x0001d368) popup_call_audio_out_window_g

0x93d5,	// (0x000176e6) popup_call_audio_out_window_t1_ParamLimits

0x93d5,	// (0x000176e6) popup_call_audio_out_window_t1

0x93ed,	// (0x000176fe) popup_call_audio_out_window_t2_ParamLimits

0x93ed,	// (0x000176fe) popup_call_audio_out_window_t2

0x0001,

0xf05e,	// (0x0001d36f) popup_call_audio_out_window_t_ParamLimits

0xf05e,	// (0x0001d36f) popup_call_audio_out_window_t

0x9402,	// (0x00017713) bg_popup_call_pane_ParamLimits

0x9402,	// (0x00017713) bg_popup_call_pane

0x0c7f,	// (0x0000ef90) call_thumbnail_pane_cp_ParamLimits

0x0c7f,	// (0x0000ef90) call_thumbnail_pane_cp

0x9486,	// (0x00017797) call_type_pane_cp01_ParamLimits

0x9486,	// (0x00017797) call_type_pane_cp01

0x94ca,	// (0x000177db) popup_call_audio_first_window_g1_ParamLimits

0x94ca,	// (0x000177db) popup_call_audio_first_window_g1

0x9516,	// (0x00017827) popup_call_audio_first_window_g2_ParamLimits

0x9516,	// (0x00017827) popup_call_audio_first_window_g2

0x0001,

0xf063,	// (0x0001d374) popup_call_audio_first_window_g_ParamLimits

0xf063,	// (0x0001d374) popup_call_audio_first_window_g

0x955a,	// (0x0001786b) popup_call_audio_first_window_t1_ParamLimits

0x955a,	// (0x0001786b) popup_call_audio_first_window_t1

0x9606,	// (0x00017917) popup_call_audio_first_window_t4_ParamLimits

0x9606,	// (0x00017917) popup_call_audio_first_window_t4

0x9692,	// (0x000179a3) popup_call_audio_first_window_t5_ParamLimits

0x9692,	// (0x000179a3) popup_call_audio_first_window_t5

0x0002,

0xf068,	// (0x0001d379) popup_call_audio_first_window_t_ParamLimits

0xf068,	// (0x0001d379) popup_call_audio_first_window_t

0x96c1,	// (0x000179d2) bg_popup_call_pane_cp02

0x96cb,	// (0x000179dc) call_type_pane_cp023

0x96d3,	// (0x000179e4) popup_call_audio_wait_window_g1

0x96db,	// (0x000179ec) popup_call_audio_wait_window_g2

0x0001,

0xf06f,	// (0x0001d380) popup_call_audio_wait_window_g

0x96e3,	// (0x000179f4) popup_call_audio_wait_window_t3

0x96f1,	// (0x00017a02) bg_popup_call_pane_cp03_ParamLimits

0x96f1,	// (0x00017a02) bg_popup_call_pane_cp03

0x9751,	// (0x00017a62) call_thumbnail_pane_cp011_ParamLimits

0x9751,	// (0x00017a62) call_thumbnail_pane_cp011

0x975d,	// (0x00017a6e) call_type_pane_cp034_ParamLimits

0x975d,	// (0x00017a6e) call_type_pane_cp034

0x9799,	// (0x00017aaa) popup_call_audio_second_window_g1_ParamLimits

0x9799,	// (0x00017aaa) popup_call_audio_second_window_g1

0x97d5,	// (0x00017ae6) popup_call_audio_second_window_g2_ParamLimits

0x97d5,	// (0x00017ae6) popup_call_audio_second_window_g2

0x0001,

0xf074,	// (0x0001d385) popup_call_audio_second_window_g_ParamLimits

0xf074,	// (0x0001d385) popup_call_audio_second_window_g

0x9811,	// (0x00017b22) popup_call_audio_second_window_t1_ParamLimits

0x9811,	// (0x00017b22) popup_call_audio_second_window_t1

0x9892,	// (0x00017ba3) popup_call_audio_second_window_t2_ParamLimits

0x9892,	// (0x00017ba3) popup_call_audio_second_window_t2

0x98c8,	// (0x00017bd9) popup_call_audio_second_window_t3_ParamLimits

0x98c8,	// (0x00017bd9) popup_call_audio_second_window_t3

0x0002,

0xf079,	// (0x0001d38a) popup_call_audio_second_window_t_ParamLimits

0xf079,	// (0x0001d38a) popup_call_audio_second_window_t

0x96c1,	// (0x000179d2) bg_popup_call_pane_cp04

0x98fe,	// (0x00017c0f) list_conf_pane

0x9906,	// (0x00017c17) popup_call_audio_conf_window_t1

0x9914,	// (0x00017c25) call_thumbnail_pane_g1

0x991c,	// (0x00017c2d) bg_pinb_pane_ParamLimits

0x991c,	// (0x00017c2d) bg_pinb_pane

0x992a,	// (0x00017c3b) find_pinb_pane

0x991c,	// (0x00017c2d) listscroll_pinb_pane_ParamLimits

0x991c,	// (0x00017c2d) listscroll_pinb_pane

0x9934,	// (0x00017c45) pinb_bg_pane_g1

0x9934,	// (0x00017c45) pinb_bg_pane_g2

0x9934,	// (0x00017c45) pinb_bg_pane_g3

0x9934,	// (0x00017c45) pinb_bg_pane_g4

0x9934,	// (0x00017c45) pinb_bg_pane_g5

0x9934,	// (0x00017c45) pinb_bg_pane_g6

0x9934,	// (0x00017c45) pinb_bg_pane_g7

0x9934,	// (0x00017c45) pinb_bg_pane_g8

0x9934,	// (0x00017c45) pinb_bg_pane_g9

0x9934,	// (0x00017c45) pinb_bg_pane_g10

0x0009,

0xf080,	// (0x0001d391) pinb_bg_pane_g

0x9231,	// (0x00017542) grid_pinb_pane

0x9231,	// (0x00017542) list_pinb_pane

0x92a0,	// (0x000175b1) scroll_pane_cp01_ParamLimits

0x92a0,	// (0x000175b1) scroll_pane_cp01

0x993e,	// (0x00017c4f) find_pinb_pane_g1_ParamLimits

0x993e,	// (0x00017c4f) find_pinb_pane_g1

0x9956,	// (0x00017c67) find_pinb_pane_t1

0x9968,	// (0x00017c79) find_pinb_pane_t2

0x0001,

0xf09a,	// (0x0001d3ab) find_pinb_pane_t

0x997d,	// (0x00017c8e) input_focus_pane_cp01_ParamLimits

0x997d,	// (0x00017c8e) input_focus_pane_cp01

0x9989,	// (0x00017c9a) cell_pinb_pane_ParamLimits

0x9989,	// (0x00017c9a) cell_pinb_pane

0x9997,	// (0x00017ca8) cell_pinb_pane_g1_ParamLimits

0x9997,	// (0x00017ca8) cell_pinb_pane_g1

0x99a5,	// (0x00017cb6) cell_pinb_pane_g2_ParamLimits

0x99a5,	// (0x00017cb6) cell_pinb_pane_g2

0x99a5,	// (0x00017cb6) cell_pinb_pane_g3_ParamLimits

0x99a5,	// (0x00017cb6) cell_pinb_pane_g3

0x0002,

0xf09f,	// (0x0001d3b0) cell_pinb_pane_g_ParamLimits

0xf09f,	// (0x0001d3b0) cell_pinb_pane_g

0x96c1,	// (0x000179d2) grid_highlight_pane_cp01

0x9989,	// (0x00017c9a) list_pinb_item_pane_ParamLimits

0x9989,	// (0x00017c9a) list_pinb_item_pane

0x9231,	// (0x00017542) list_highlight_pane_cp02

0x99b3,	// (0x00017cc4) list_pinb_item_pane_g1_ParamLimits

0x99b3,	// (0x00017cc4) list_pinb_item_pane_g1

0x99a5,	// (0x00017cb6) list_pinb_item_pane_g2_ParamLimits

0x99a5,	// (0x00017cb6) list_pinb_item_pane_g2

0x9997,	// (0x00017ca8) list_pinb_item_pane_g3_ParamLimits

0x9997,	// (0x00017ca8) list_pinb_item_pane_g3

0x99a5,	// (0x00017cb6) list_pinb_item_pane_g4_ParamLimits

0x99a5,	// (0x00017cb6) list_pinb_item_pane_g4

0x0003,

0xf0a6,	// (0x0001d3b7) list_pinb_item_pane_g_ParamLimits

0xf0a6,	// (0x0001d3b7) list_pinb_item_pane_g

0x99c1,	// (0x00017cd2) list_pinb_item_pane_t1_ParamLimits

0x99c1,	// (0x00017cd2) list_pinb_item_pane_t1

0x0cc1,	// (0x0000efd2) calc_display_pane

0x0ce6,	// (0x0000eff7) calc_paper_pane

0x0d09,	// (0x0000f01a) grid_calc_pane

0x9231,	// (0x00017542) bg_list_pane_cp01

0x99dd,	// (0x00017cee) clock_g1

0x99dd,	// (0x00017cee) clock_g2

0x0001,

0xf0af,	// (0x0001d3c0) clock_g

0x99e7,	// (0x00017cf8) clock_t1_ParamLimits

0x99e7,	// (0x00017cf8) clock_t1

0x99fb,	// (0x00017d0c) clock_t2_ParamLimits

0x99fb,	// (0x00017d0c) clock_t2

0x99fb,	// (0x00017d0c) clock_t3_ParamLimits

0x99fb,	// (0x00017d0c) clock_t3

0x99fb,	// (0x00017d0c) clock_t4_ParamLimits

0x99fb,	// (0x00017d0c) clock_t4

0x99e7,	// (0x00017cf8) clock_t5_ParamLimits

0x99e7,	// (0x00017cf8) clock_t5

0x99fb,	// (0x00017d0c) clock_t6_ParamLimits

0x99fb,	// (0x00017d0c) clock_t6

0x99fb,	// (0x00017d0c) clock_t7_ParamLimits

0x99fb,	// (0x00017d0c) clock_t7

0x99fb,	// (0x00017d0c) clock_t8_ParamLimits

0x99fb,	// (0x00017d0c) clock_t8

0x99fb,	// (0x00017d0c) clock_t9_ParamLimits

0x99fb,	// (0x00017d0c) clock_t9

0x0008,

0xf0b4,	// (0x0001d3c5) clock_t_ParamLimits

0xf0b4,	// (0x0001d3c5) clock_t

0x9231,	// (0x00017542) popup_clock_analogue_window_cp02

0x9231,	// (0x00017542) popup_clock_digital_window_cp01

0x96c1,	// (0x000179d2) listscroll_help_pane

0x96c1,	// (0x000179d2) phob_pre_status_pane

0x9a0f,	// (0x00017d20) grid_qdial_pane

0x991c,	// (0x00017c2d) listscroll_mce_pane

0x991c,	// (0x00017c2d) bg_notes_pane

0x9a19,	// (0x00017d2a) list_notes_pane

0x0d37,	// (0x0000f048) scroll_pane_cp06

0x9a27,	// (0x00017d38) bg_calc_paper_pane

0x9a3b,	// (0x00017d4c) list_calc_pane

0x9a55,	// (0x00017d66) bg_calc_display_pane

0x0d4b,	// (0x0000f05c) calc_display_pane_t1

0x0d5d,	// (0x0000f06e) calc_display_pane_t2

0x9a61,	// (0x00017d72) calc_display_pane_t3

0x0002,

0xf0c7,	// (0x0001d3d8) calc_display_pane_t

0x0d6f,	// (0x0000f080) cell_calc_pane_ParamLimits

0x0d6f,	// (0x0000f080) cell_calc_pane

0x9a73,	// (0x00017d84) bg_calc_paper_pane_g1

0x9a7f,	// (0x00017d90) bg_calc_paper_pane_g2

0x9a8b,	// (0x00017d9c) bg_calc_paper_pane_g3

0x9a97,	// (0x00017da8) bg_calc_paper_pane_g4

0x9aa3,	// (0x00017db4) bg_calc_paper_pane_g5

0x0da4,	// (0x0000f0b5) bg_calc_paper_pane_g6

0x0db3,	// (0x0000f0c4) bg_calc_paper_pane_g7

0x0dc2,	// (0x0000f0d3) bg_calc_paper_pane_g8

0x0007,

0xf0ce,	// (0x0001d3df) bg_calc_paper_pane_g

0x0dd5,	// (0x0000f0e6) calc_bg_paper_pane_g9

0x0de8,	// (0x0000f0f9) list_calc_item_pane_ParamLimits

0x0de8,	// (0x0000f0f9) list_calc_item_pane

0x9aaf,	// (0x00017dc0) list_calc_item_pane_g1

0x9abc,	// (0x00017dcd) list_calc_item_pane_t1_ParamLimits

0x9abc,	// (0x00017dcd) list_calc_item_pane_t1

0x0dfd,	// (0x0000f10e) list_calc_item_pane_t2_ParamLimits

0x0dfd,	// (0x0000f10e) list_calc_item_pane_t2

0x0001,

0xf0df,	// (0x0001d3f0) list_calc_item_pane_t_ParamLimits

0xf0df,	// (0x0001d3f0) list_calc_item_pane_t

0x9934,	// (0x00017c45) cell_calc_pane_g1

0x9ace,	// (0x00017ddf) grid_highlight_pane_cp02

0x9af0,	// (0x00017e01) bg_calc_display_pane_g1

0x0e2f,	// (0x0000f140) bg_calc_display_pane_g2

0xcdfc,	// (0x0001b10d) bg_calc_display_pane_g3

0x0002,

0xf0e9,	// (0x0001d3fa) bg_calc_display_pane_g

0x0e39,	// (0x0000f14a) cell_qdial_pane_ParamLimits

0x0e39,	// (0x0000f14a) cell_qdial_pane

0x0e4d,	// (0x0000f15e) cell_qdial_pane_g1_ParamLimits

0x0e4d,	// (0x0000f15e) cell_qdial_pane_g1

0x0e63,	// (0x0000f174) cell_qdial_pane_g2_ParamLimits

0x0e63,	// (0x0000f174) cell_qdial_pane_g2

0x9af9,	// (0x00017e0a) cell_qdial_pane_g3_ParamLimits

0x9af9,	// (0x00017e0a) cell_qdial_pane_g3

0x0003,

0xf0f0,	// (0x0001d401) cell_qdial_pane_g_ParamLimits

0xf0f0,	// (0x0001d401) cell_qdial_pane_g

0x0e89,	// (0x0000f19a) cell_qdial_pane_t1_ParamLimits

0x0e89,	// (0x0000f19a) cell_qdial_pane_t1

0x0ea1,	// (0x0000f1b2) cell_qdial_pane_t2_ParamLimits

0x0ea1,	// (0x0000f1b2) cell_qdial_pane_t2

0x0eb4,	// (0x0000f1c5) cell_qdial_pane_t3_ParamLimits

0x0eb4,	// (0x0000f1c5) cell_qdial_pane_t3

0x0002,

0xf0f9,	// (0x0001d40a) cell_qdial_pane_t_ParamLimits

0xf0f9,	// (0x0001d40a) cell_qdial_pane_t

0x96c1,	// (0x000179d2) grid_highlight_pane_cp04

0x9b05,	// (0x00017e16) thumbnail_qdial_pane_ParamLimits

0x9b05,	// (0x00017e16) thumbnail_qdial_pane

0x9b61,	// (0x00017e72) list_help_pane

0x9b6a,	// (0x00017e7b) scroll_pane_cp02

0x0ec7,	// (0x0000f1d8) help_list_pane_t1_ParamLimits

0x0ec7,	// (0x0000f1d8) help_list_pane_t1

0x9b73,	// (0x00017e84) bg_notes_pane_g2

0x9b7b,	// (0x00017e8c) bg_notes_pane_g3

0x9b83,	// (0x00017e94) notes_bg_pane_g1

0x9b8b,	// (0x00017e9c) notes_bg_pane_g4

0x9b93,	// (0x00017ea4) notes_bg_pane_g5

0x9b9b,	// (0x00017eac) notes_bg_pane_g6

0x9ba3,	// (0x00017eb4) notes_bg_pane_g7

0x9bab,	// (0x00017ebc) notes_bg_pane_g8

0x9bb3,	// (0x00017ec4) notes_bg_pane_g9

0x0006,

0xf117,	// (0x0001d428) notes_bg_pane_g

0x0ee6,	// (0x0000f1f7) list_notes_text_pane_ParamLimits

0x0ee6,	// (0x0000f1f7) list_notes_text_pane

0x9bbb,	// (0x00017ecc) list_notes_text_pane_g1

0x9bc4,	// (0x00017ed5) list_notes_text_pane_t1

0x0efc,	// (0x0000f20d) listscroll_cale_week_pane

0x0f28,	// (0x0000f239) bg_cale_heading_pane

0x9bec,	// (0x00017efd) bg_cale_pane_cp01

0x0f40,	// (0x0000f251) cale_week_corner_pane

0x0f5f,	// (0x0000f270) cale_week_day_heading_pane

0x0f7c,	// (0x0000f28d) cale_week_scroll_pane_g1

0x0f8f,	// (0x0000f2a0) cale_week_scroll_pane_g2

0x0fa7,	// (0x0000f2b8) cale_week_scroll_pane_g3

0x0fbf,	// (0x0000f2d0) cale_week_scroll_pane_g4

0x0fd7,	// (0x0000f2e8) cale_week_scroll_pane_g5

0x0ff7,	// (0x0000f308) cale_week_scroll_pane_g6

0x1017,	// (0x0000f328) cale_week_scroll_pane_g7

0x1037,	// (0x0000f348) cale_week_scroll_pane_g8

0x105b,	// (0x0000f36c) cale_week_scroll_pane_g9

0x1073,	// (0x0000f384) cale_week_scroll_pane_g10

0x108b,	// (0x0000f39c) cale_week_scroll_pane_g11

0x10a3,	// (0x0000f3b4) cale_week_scroll_pane_g12

0x10bb,	// (0x0000f3cc) cale_week_scroll_pane_g13

0x10bb,	// (0x0000f3cc) cale_week_scroll_pane_g14

0x10bb,	// (0x0000f3cc) cale_week_scroll_pane_g15

0x000f,

0xf126,	// (0x0001d437) cale_week_scroll_pane_g

0x10f7,	// (0x0000f408) cale_week_time_pane

0x111b,	// (0x0000f42c) grid_cale_week_pane

0x9c1b,	// (0x00017f2c) scroll_pane_cp08

0x1141,	// (0x0000f452) cell_cale_week_pane_ParamLimits

0x1141,	// (0x0000f452) cell_cale_week_pane

0x11cf,	// (0x0000f4e0) cale_week_day_heading_pane_t1

0x11f9,	// (0x0000f50a) cale_week_day_heading_pane_t2

0x1228,	// (0x0000f539) cale_week_day_heading_pane_t3

0x1257,	// (0x0000f568) cale_week_day_heading_pane_t4

0x1286,	// (0x0000f597) cale_week_day_heading_pane_t5

0x12bd,	// (0x0000f5ce) cale_week_day_heading_pane_t6

0x12f4,	// (0x0000f605) cale_week_day_heading_pane_t7

0x0006,

0xf147,	// (0x0001d458) cale_week_day_heading_pane_t

0x9c38,	// (0x00017f49) bg_cale_side_pane

0x131e,	// (0x0000f62f) cale_week_time_pane_t1

0x1338,	// (0x0000f649) cale_week_time_pane_t2

0x1352,	// (0x0000f663) cale_week_time_pane_t3

0x136c,	// (0x0000f67d) cale_week_time_pane_t4

0x1386,	// (0x0000f697) cale_week_time_pane_t5

0x13a0,	// (0x0000f6b1) cale_week_time_pane_t6

0x13ba,	// (0x0000f6cb) cale_week_time_pane_t7

0x13d4,	// (0x0000f6e5) cale_week_time_pane_t8

0x0007,

0xf156,	// (0x0001d467) cale_week_time_pane_t

0x13f4,	// (0x0000f705) cell_cale_week_pane_g2

0x1418,	// (0x0000f729) cell_cale_week_pane_g3_ParamLimits

0x1418,	// (0x0000f729) cell_cale_week_pane_g3

0x9c46,	// (0x00017f57) grid_highlight_pane_cp07

0x9c4e,	// (0x00017f5f) listscroll_gms_pane

0x9c58,	// (0x00017f69) grid_gms_pane

0x9c61,	// (0x00017f72) listscroll_gms_pane_g1

0x9c69,	// (0x00017f7a) listscroll_gms_pane_g2

0x0001,

0xf167,	// (0x0001d478) listscroll_gms_pane_g

0x1430,	// (0x0000f741) scroll_pane_cp010

0x143b,	// (0x0000f74c) cell_gms_pane_ParamLimits

0x143b,	// (0x0000f74c) cell_gms_pane

0x144d,	// (0x0000f75e) cell_gms_pane_g1

0x9c71,	// (0x00017f82) cell_gms_pane_g2

0x9bbb,	// (0x00017ecc) cell_gms_pane_g3

0x9c79,	// (0x00017f8a) cell_gms_pane_g4

0x0003,

0xf16c,	// (0x0001d47d) cell_gms_pane_g

0x9c82,	// (0x00017f93) grid_highlight_pane_cp09

0x3166,	// (0x00011477) phob_pre_status_pane_g1

0x316e,	// (0x0001147f) phob_pre_status_pane_g2

0x3176,	// (0x00011487) phob_pre_status_pane_g3

0x317e,	// (0x0001148f) phob_pre_status_pane_g4

0x0004,

0xf52e,	// (0x0001d83f) phob_pre_status_pane_g

0x318e,	// (0x0001149f) phob_pre_status_pane_t1

0x319c,	// (0x000114ad) phob_pre_status_pane_t2

0x31ac,	// (0x000114bd) phob_pre_status_pane_t3

0x0002,

0xf539,	// (0x0001d84a) phob_pre_status_pane_t

0x9c8a,	// (0x00017f9b) bg_list_pane_cp05

0x145d,	// (0x0000f76e) grid_vorec_pane

0x1465,	// (0x0000f776) vorec_t1

0x1473,	// (0x0000f784) vorec_t2

0x1481,	// (0x0000f792) vorec_t3

0x148f,	// (0x0000f7a0) vorec_t4

0xeafb,	// (0x0001ce0c) vorec_t5

0x8426,	// (0x00016737) vorec_t6

0x0004,

0xf175,	// (0x0001d486) vorec_t

0x8434,	// (0x00016745) wait_bar_pane_cp01

0x14ab,	// (0x0000f7bc) cell_vorec_pane_ParamLimits

0x14ab,	// (0x0000f7bc) cell_vorec_pane

0x9c92,	// (0x00017fa3) cell_vorec_pane_g1

0x96c1,	// (0x000179d2) grid_highlight_pane_cp05

0x92a0,	// (0x000175b1) cams_zoom_pane

0x92a0,	// (0x000175b1) image_vga_pane

0x9997,	// (0x00017ca8) main_camera_pane_g1

0x9997,	// (0x00017ca8) main_camera_pane_g2

0x9997,	// (0x00017ca8) main_camera_pane_g3

0x9997,	// (0x00017ca8) main_camera_pane_g4

0x9997,	// (0x00017ca8) main_camera_pane_g5

0x9997,	// (0x00017ca8) main_camera_pane_g6

0x9997,	// (0x00017ca8) main_camera_pane_g7

0x0007,

0xf180,	// (0x0001d491) main_camera_pane_g

0x99e7,	// (0x00017cf8) main_camera_pane_t1

0x99e7,	// (0x00017cf8) main_camera_pane_t2

0x0001,

0xf191,	// (0x0001d4a2) main_camera_pane_t

0x14d2,	// (0x0000f7e3) cams_zoom_pane_cp_ParamLimits

0x14d2,	// (0x0000f7e3) cams_zoom_pane_cp

0x1506,	// (0x0000f817) image_cif_pane_ParamLimits

0x1506,	// (0x0000f817) image_cif_pane

0x9231,	// (0x00017542) image_subqcif_pane

0x1518,	// (0x0000f829) main_video_pane_g1_ParamLimits

0x1518,	// (0x0000f829) main_video_pane_g1

0x1546,	// (0x0000f857) main_video_pane_g2_ParamLimits

0x1546,	// (0x0000f857) main_video_pane_g2

0x1580,	// (0x0000f891) main_video_pane_g3_ParamLimits

0x1580,	// (0x0000f891) main_video_pane_g3

0x1580,	// (0x0000f891) main_video_pane_g4_ParamLimits

0x1580,	// (0x0000f891) main_video_pane_g4

0x15b4,	// (0x0000f8c5) main_video_pane_g5_ParamLimits

0x15b4,	// (0x0000f8c5) main_video_pane_g5

0x9c9c,	// (0x00017fad) main_video_pane_g6_ParamLimits

0x9c9c,	// (0x00017fad) main_video_pane_g6

0x0006,

0xf196,	// (0x0001d4a7) main_video_pane_g_ParamLimits

0xf196,	// (0x0001d4a7) main_video_pane_g

0x15d0,	// (0x0000f8e1) main_video_pane_t1_ParamLimits

0x15d0,	// (0x0000f8e1) main_video_pane_t1

0x99dd,	// (0x00017cee) cams_zoom_pane_g1

0x99dd,	// (0x00017cee) cams_zoom_pane_g2

0x99dd,	// (0x00017cee) cams_zoom_pane_g3

0x99dd,	// (0x00017cee) cams_zoom_pane_g4

0x0003,

0xf1a5,	// (0x0001d4b6) cams_zoom_pane_g

0x92a0,	// (0x000175b1) grid_cams_pane

0x92a0,	// (0x000175b1) linegrid_cams_pane

0x1614,	// (0x0000f925) cell_cams_pane_ParamLimits

0x1614,	// (0x0000f925) cell_cams_pane

0x9231,	// (0x00017542) cams_burst_image_pane

0x99dd,	// (0x00017cee) cell_cams_pane_g1

0x9231,	// (0x00017542) grid_highlight_pane_cp03

0x9934,	// (0x00017c45) mp_bg_pane_g1

0x9231,	// (0x00017542) bg_list_pane_cp03

0x9231,	// (0x00017542) bg_mp_pane

0x9231,	// (0x00017542) grid_mp_pane

0x99dd,	// (0x00017cee) media_player_g1

0xa1fd,	// (0x0001850e) media_player_t1

0xa1fd,	// (0x0001850e) media_player_t2

0xa1fd,	// (0x0001850e) media_player_t3

0xa1fd,	// (0x0001850e) media_player_t4

0xa1fd,	// (0x0001850e) media_player_t5

0xa1fd,	// (0x0001850e) media_player_t6

0xa1fd,	// (0x0001850e) media_player_t7

0x0006,

0xf518,	// (0x0001d829) media_player_t

0x9231,	// (0x00017542) wait_bar_pane_cp02

0xf4fd,	// (0x0001d80e) main_usb_pane_t

0xa4d8,	// (0x000187e9) cell_mp_pane

0x9934,	// (0x00017c45) cell_mp_pane_g1

0x96c1,	// (0x000179d2) grid_highlight_pane_cp06

0x9cb6,	// (0x00017fc7) grid_skin_colour_pane

0x9cbe,	// (0x00017fcf) list_highlight_pane_cp03

0x1629,	// (0x0000f93a) skin_g1

0x9cc6,	// (0x00017fd7) skin_t1

0x9cd5,	// (0x00017fe6) skin_t2

0x0001,

0xf1d3,	// (0x0001d4e4) skin_t

0x1631,	// (0x0000f942) cell_skin_colour_pane_ParamLimits

0x1631,	// (0x0000f942) cell_skin_colour_pane

0x9ce3,	// (0x00017ff4) cell_skin_colour_pane_g1

0x16aa,	// (0x0000f9bb) call_video_g1_ParamLimits

0x16aa,	// (0x0000f9bb) call_video_g1

0x16c6,	// (0x0000f9d7) call_video_g2_ParamLimits

0x16c6,	// (0x0000f9d7) call_video_g2

0x0001,

0xf1d8,	// (0x0001d4e9) call_video_g_ParamLimits

0xf1d8,	// (0x0001d4e9) call_video_g

0x1718,	// (0x0000fa29) call_video_uplink_pane_cp1_ParamLimits

0x1718,	// (0x0000fa29) call_video_uplink_pane_cp1

0x9cf5,	// (0x00018006) call_video_uplink_pane_cp2

0x17b7,	// (0x0000fac8) video_down_crop_pane_ParamLimits

0x17b7,	// (0x0000fac8) video_down_crop_pane

0x18a0,	// (0x0000fbb1) video_down_pane_ParamLimits

0x18a0,	// (0x0000fbb1) video_down_pane

0x9cfd,	// (0x0001800e) video_down_subqcif_pane_ParamLimits

0x9cfd,	// (0x0001800e) video_down_subqcif_pane

0x9d15,	// (0x00018026) video_down_subqcif_pane_cp_ParamLimits

0x9d15,	// (0x00018026) video_down_subqcif_pane_cp

0x9d3b,	// (0x0001804c) im_reading_pane_ParamLimits

0x9d3b,	// (0x0001804c) im_reading_pane

0x19b0,	// (0x0000fcc1) im_writing_pane_ParamLimits

0x19b0,	// (0x0000fcc1) im_writing_pane

0x19c6,	// (0x0000fcd7) im_reading_pane_t1

0x9d55,	// (0x00018066) list_im_pane

0x9d66,	// (0x00018077) scroll_pane_cp07

0x1a00,	// (0x0000fd11) im_writing_pane_t1_ParamLimits

0x1a00,	// (0x0000fd11) im_writing_pane_t1

0x9d7f,	// (0x00018090) im_writing_pane_t2_ParamLimits

0x9d7f,	// (0x00018090) im_writing_pane_t2

0x0001,

0xf1e2,	// (0x0001d4f3) im_writing_pane_t_ParamLimits

0xf1e2,	// (0x0001d4f3) im_writing_pane_t

0x96c1,	// (0x000179d2) input_focus_pane_cp04

0x96c1,	// (0x000179d2) input_focus_pane_cp05

0x1a15,	// (0x0000fd26) list_im_single_pane_ParamLimits

0x1a15,	// (0x0000fd26) list_im_single_pane

0x1a2a,	// (0x0000fd3b) list_single_im_pane_t1

0x9c8a,	// (0x00017f9b) blid_accuracy_pane

0x9c8a,	// (0x00017f9b) blid_compass_pane

0xba3b,	// (0x00019d4c) main_location_t1

0xba3b,	// (0x00019d4c) main_location_t2

0xba3b,	// (0x00019d4c) main_location_t3

0x0002,

0xf527,	// (0x0001d838) main_location_t

0x96c1,	// (0x000179d2) aid_levels_location

0x9934,	// (0x00017c45) blid_accuracy_pane_g1

0x9934,	// (0x00017c45) blid_accuracy_pane_g2

0x0001,

0xf231,	// (0x0001d542) blid_accuracy_pane_g

0x9dc7,	// (0x000180d8) wml_content_pane

0x9e05,	// (0x00018116) wml_button_pane_ParamLimits

0x9e05,	// (0x00018116) wml_button_pane

0x1a39,	// (0x0000fd4a) wml_list_single_large_pane_ParamLimits

0x1a39,	// (0x0000fd4a) wml_list_single_large_pane

0x1a4e,	// (0x0000fd5f) wml_list_single_medium_pane_ParamLimits

0x1a4e,	// (0x0000fd5f) wml_list_single_medium_pane

0x1a65,	// (0x0000fd76) wml_list_single_small_pane_ParamLimits

0x1a65,	// (0x0000fd76) wml_list_single_small_pane

0x9e19,	// (0x0001812a) wml_selection_box_pane_ParamLimits

0x9e19,	// (0x0001812a) wml_selection_box_pane

0x9e2c,	// (0x0001813d) wml_list_single_pane_t1

0x9e3b,	// (0x0001814c) wml_list_single_medium_pane_t1

0x9e4a,	// (0x0001815b) wml_list_single_large_pane_t1

0x9e59,	// (0x0001816a) input_focus_pane_cp02_ParamLimits

0x9e59,	// (0x0001816a) input_focus_pane_cp02

0x9e6c,	// (0x0001817d) wml_selection_box_pane_g1

0x9e75,	// (0x00018186) wml_selection_box_pane_t1_ParamLimits

0x9e75,	// (0x00018186) wml_selection_box_pane_t1

0x991c,	// (0x00017c2d) bg_wml_button_pane_ParamLimits

0x991c,	// (0x00017c2d) bg_wml_button_pane

0x9e8d,	// (0x0001819e) wml_button_pane_g1

0x9e95,	// (0x000181a6) wml_button_pane_t1

0x9e8d,	// (0x0001819e) wml_button_bg_pane_g1

0x9ea5,	// (0x000181b6) wml_button_bg_pane_g2

0x9ead,	// (0x000181be) wml_button_bg_pane_g3

0x9eb5,	// (0x000181c6) wml_button_bg_pane_g4

0x9ebd,	// (0x000181ce) wml_button_bg_pane_g5

0x9ec5,	// (0x000181d6) wml_button_bg_pane_g6

0x9ecd,	// (0x000181de) wml_button_bg_pane_g7

0x9ed5,	// (0x000181e6) wml_button_bg_pane_g8

0x9edd,	// (0x000181ee) wml_button_bg_pane_g9

0x0008,

0xf1e7,	// (0x0001d4f8) wml_button_bg_pane_g

0x1a7e,	// (0x0000fd8f) bg_list_pane_cp02

0x9ee5,	// (0x000181f6) mce_header_pane_ParamLimits

0x9ee5,	// (0x000181f6) mce_header_pane

0x9efb,	// (0x0001820c) mce_icon_pane

0x9efb,	// (0x0001820c) mce_image_pane

0x9f04,	// (0x00018215) mce_text_pane_ParamLimits

0x9f04,	// (0x00018215) mce_text_pane

0x1a86,	// (0x0000fd97) scroll_pane_cp03

0x9dfd,	// (0x0001810e) scroll_pane_cp04

0x9f17,	// (0x00018228) scroll_pane_cp05_ParamLimits

0x9f17,	// (0x00018228) scroll_pane_cp05

0x1a90,	// (0x0000fda1) mce_header_field_pane_ParamLimits

0x1a90,	// (0x0000fda1) mce_header_field_pane

0x1aa7,	// (0x0000fdb8) mce_header_field_pane_2_ParamLimits

0x1aa7,	// (0x0000fdb8) mce_header_field_pane_2

0x1abd,	// (0x0000fdce) mce_header_field_pane_3

0x1ac5,	// (0x0000fdd6) list_single_mce_message_pane_ParamLimits

0x1ac5,	// (0x0000fdd6) list_single_mce_message_pane

0x1adb,	// (0x0000fdec) list_single_mce_smart_pane_ParamLimits

0x1adb,	// (0x0000fdec) list_single_mce_smart_pane

0x9f23,	// (0x00018234) input_focus_pane_cp03

0x9f2c,	// (0x0001823d) list_header_data_pane

0x1afc,	// (0x0000fe0d) mce_header_field_pane_t1

0x1b0c,	// (0x0000fe1d) list_single_mce_header_pane_ParamLimits

0x1b0c,	// (0x0000fe1d) list_single_mce_header_pane

0x9f34,	// (0x00018245) list_single_mce_header_pane_t1

0x9f43,	// (0x00018254) list_single_mce_message_pane_g1

0x9f4b,	// (0x0001825c) list_single_mce_message_pane_t1

0x1b46,	// (0x0000fe57) bg_cale_heading_pane_cp01_ParamLimits

0x1b46,	// (0x0000fe57) bg_cale_heading_pane_cp01

0x9f59,	// (0x0001826a) bg_cale_pane_cp02_ParamLimits

0x9f59,	// (0x0001826a) bg_cale_pane_cp02

0x1b80,	// (0x0000fe91) cale_month_corner_pane

0x1b9f,	// (0x0000feb0) cale_month_day_heading_pane_ParamLimits

0x1b9f,	// (0x0000feb0) cale_month_day_heading_pane

0x1bf1,	// (0x0000ff02) cale_month_pane_g1_ParamLimits

0x1bf1,	// (0x0000ff02) cale_month_pane_g1

0x1c20,	// (0x0000ff31) cale_month_pane_g2_ParamLimits

0x1c20,	// (0x0000ff31) cale_month_pane_g2

0x1c50,	// (0x0000ff61) cale_month_pane_g3_ParamLimits

0x1c50,	// (0x0000ff61) cale_month_pane_g3

0x1c8c,	// (0x0000ff9d) cale_month_pane_g4_ParamLimits

0x1c8c,	// (0x0000ff9d) cale_month_pane_g4

0x1cc8,	// (0x0000ffd9) cale_month_pane_g5_ParamLimits

0x1cc8,	// (0x0000ffd9) cale_month_pane_g5

0x1d10,	// (0x00010021) cale_month_pane_g6_ParamLimits

0x1d10,	// (0x00010021) cale_month_pane_g6

0x1d5c,	// (0x0001006d) cale_month_pane_g7_ParamLimits

0x1d5c,	// (0x0001006d) cale_month_pane_g7

0x1dac,	// (0x000100bd) cale_month_pane_g8_ParamLimits

0x1dac,	// (0x000100bd) cale_month_pane_g8

0x1e00,	// (0x00010111) cale_month_pane_g9_ParamLimits

0x1e00,	// (0x00010111) cale_month_pane_g9

0x1e52,	// (0x00010163) cale_month_pane_g10_ParamLimits

0x1e52,	// (0x00010163) cale_month_pane_g10

0x1ea4,	// (0x000101b5) cale_month_pane_g11_ParamLimits

0x1ea4,	// (0x000101b5) cale_month_pane_g11

0x1ef6,	// (0x00010207) cale_month_pane_g12_ParamLimits

0x1ef6,	// (0x00010207) cale_month_pane_g12

0x1f48,	// (0x00010259) cale_month_pane_g13_ParamLimits

0x1f48,	// (0x00010259) cale_month_pane_g13

0x000c,

0xf1fa,	// (0x0001d50b) cale_month_pane_g_ParamLimits

0xf1fa,	// (0x0001d50b) cale_month_pane_g

0x1f9a,	// (0x000102ab) cale_month_week_pane

0x1fbe,	// (0x000102cf) grid_cale_month_pane_ParamLimits

0x1fbe,	// (0x000102cf) grid_cale_month_pane

0x2007,	// (0x00010318) cale_month_day_heading_pane_t1

0x2049,	// (0x0001035a) cale_month_day_heading_pane_t2

0x207e,	// (0x0001038f) cale_month_day_heading_pane_t3

0x20b3,	// (0x000103c4) cale_month_day_heading_pane_t4

0x20f0,	// (0x00010401) cale_month_day_heading_pane_t5

0x2135,	// (0x00010446) cale_month_day_heading_pane_t6

0x217a,	// (0x0001048b) cale_month_day_heading_pane_t7

0x0006,

0xf215,	// (0x0001d526) cale_month_day_heading_pane_t

0x9c38,	// (0x00017f49) bg_cale_side_pane_cp01

0x21c7,	// (0x000104d8) cale_month_week_pane_t1

0x21e0,	// (0x000104f1) cale_month_week_pane_t2

0x21f9,	// (0x0001050a) cale_month_week_pane_t3

0x2212,	// (0x00010523) cale_month_week_pane_t4

0x222b,	// (0x0001053c) cale_month_week_pane_t5

0x2244,	// (0x00010555) cale_month_week_pane_t6

0x0005,

0xf224,	// (0x0001d535) cale_month_week_pane_t

0x225d,	// (0x0001056e) cell_cale_month_pane_ParamLimits

0x225d,	// (0x0001056e) cell_cale_month_pane

0x9f98,	// (0x000182a9) cell_cale_month_pane_g1

0x238b,	// (0x0001069c) cell_cale_month_pane_t1_ParamLimits

0x238b,	// (0x0001069c) cell_cale_month_pane_t1

0x9c46,	// (0x00017f57) grid_highlight_pane_cp08

0x9934,	// (0x00017c45) main_smil_g1

0x23b7,	// (0x000106c8) smil_status_pane

0x9fa4,	// (0x000182b5) smil_text_pane

0xb913,	// (0x00019c24) bg_popup_call3_rect_pane_g8

0xb91b,	// (0x00019c2c) bg_popup_call3_rect_pane_g9

0x0008,

0xf4ad,	// (0x0001d7be) bg_popup_call3_rect_pane_g

0xbb58,	// (0x00019e69) smil_status_volume_pane_g1

0x9fae,	// (0x000182bf) smil_status_pane_t1

0xbb8b,	// (0x00019e9c) volume_smil_pane

0x9fc5,	// (0x000182d6) list_smil_text_pane

0x23cc,	// (0x000106dd) scroll_pane_cp011

0x23d7,	// (0x000106e8) smil_text_list_pane_t1_ParamLimits

0x23d7,	// (0x000106e8) smil_text_list_pane_t1

0x9fcf,	// (0x000182e0) aid_volume_smil_ParamLimits

0x9fcf,	// (0x000182e0) aid_volume_smil

0x9934,	// (0x00017c45) smil_volume_pane_g1

0x9934,	// (0x00017c45) smil_volume_pane_g2

0x0001,

0xf231,	// (0x0001d542) smil_volume_pane_g

0x0efc,	// (0x0000f20d) listscroll_cale_day_pane

0x9ff1,	// (0x00018302) bg_cale_pane

0xa009,	// (0x0001831a) list_cale_pane

0xa02c,	// (0x0001833d) scroll_pane_cp09

0xa03d,	// (0x0001834e) cale_bg_pane_g1

0xa045,	// (0x00018356) cale_bg_pane_g2

0xa04d,	// (0x0001835e) cale_bg_pane_g3

0xa055,	// (0x00018366) cale_bg_pane_g4

0xa05d,	// (0x0001836e) cale_bg_pane_g5

0xa065,	// (0x00018376) cale_bg_pane_g6

0xa06d,	// (0x0001837e) cale_bg_pane_g7

0xa075,	// (0x00018386) cale_bg_pane_g8

0xa07d,	// (0x0001838e) cale_bg_pane_g9

0x0008,

0xf236,	// (0x0001d547) cale_bg_pane_g

0x2423,	// (0x00010734) list_cale_time_pane_ParamLimits

0x2423,	// (0x00010734) list_cale_time_pane

0xa085,	// (0x00018396) list_cale_time_pane_g1_ParamLimits

0xa085,	// (0x00018396) list_cale_time_pane_g1

0xa091,	// (0x000183a2) list_cale_time_pane_g2_ParamLimits

0xa091,	// (0x000183a2) list_cale_time_pane_g2

0x2439,	// (0x0001074a) list_cale_time_pane_g3_ParamLimits

0x2439,	// (0x0001074a) list_cale_time_pane_g3

0x2447,	// (0x00010758) list_cale_time_pane_g4_ParamLimits

0x2447,	// (0x00010758) list_cale_time_pane_g4

0x2455,	// (0x00010766) list_cale_time_pane_g5_ParamLimits

0x2455,	// (0x00010766) list_cale_time_pane_g5

0x0005,

0xf249,	// (0x0001d55a) list_cale_time_pane_g_ParamLimits

0xf249,	// (0x0001d55a) list_cale_time_pane_g

0xa0ab,	// (0x000183bc) list_cale_time_pane_t1_ParamLimits

0xa0ab,	// (0x000183bc) list_cale_time_pane_t1

0xa0d3,	// (0x000183e4) list_cale_time_pane_t2_ParamLimits

0xa0d3,	// (0x000183e4) list_cale_time_pane_t2

0x26e2,	// (0x000109f3) aid_blid_cardinal_pane

0x2720,	// (0x00010a31) compass_pane_t4

0xa0fb,	// (0x0001840c) list_cale_time_pane_t4_ParamLimits

0xa0fb,	// (0x0001840c) list_cale_time_pane_t4

0x272e,	// (0x00010a3f) compass_pane_t5

0x273c,	// (0x00010a4d) compass_pane_t6

0x274a,	// (0x00010a5b) compass_pane_t7

0xa5f2,	// (0x00018903) navi_pane_cc_t1

0xa7e1,	// (0x00018af2) aid_phob_thumbnail_center_pane

0x2bb8,	// (0x00010ec9) main_postcard_pane_g4_ParamLimits

0x0002,

0xf256,	// (0x0001d567) list_cale_time_pane_t_ParamLimits

0xf256,	// (0x0001d567) list_cale_time_pane_t

0x9318,	// (0x00017629) bg_popup_window_pane_cp02_ParamLimits

0x9318,	// (0x00017629) bg_popup_window_pane_cp02

0xa123,	// (0x00018434) heading_pane_cp01_ParamLimits

0xa123,	// (0x00018434) heading_pane_cp01

0xa12f,	// (0x00018440) loc_req_pane_ParamLimits

0xa12f,	// (0x00018440) loc_req_pane

0xa13f,	// (0x00018450) loc_type_pane_ParamLimits

0xa13f,	// (0x00018450) loc_type_pane

0xa151,	// (0x00018462) loc_type_pane_t1_ParamLimits

0xa151,	// (0x00018462) loc_type_pane_t1

0xa163,	// (0x00018474) loc_type_pane_t2_ParamLimits

0xa163,	// (0x00018474) loc_type_pane_t2

0xa175,	// (0x00018486) loc_type_pane_t3_ParamLimits

0xa175,	// (0x00018486) loc_type_pane_t3

0x0002,

0xf25d,	// (0x0001d56e) loc_type_pane_t_ParamLimits

0xf25d,	// (0x0001d56e) loc_type_pane_t

0xa187,	// (0x00018498) list_loc_req_pane

0xa191,	// (0x000184a2) scroll_pane_cp012

0x2463,	// (0x00010774) list_single_loc_request_popup_menu_pane_ParamLimits

0x2463,	// (0x00010774) list_single_loc_request_popup_menu_pane

0xa19c,	// (0x000184ad) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xa19c,	// (0x000184ad) list_single_loc_request_popup_menu_pane_g1

0xa1a8,	// (0x000184b9) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xa1a8,	// (0x000184b9) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf264,	// (0x0001d575) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf264,	// (0x0001d575) list_single_loc_request_popup_menu_pane_g

0xa1b4,	// (0x000184c5) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xa1b4,	// (0x000184c5) list_single_loc_request_popup_menu_pane_t1

0x991c,	// (0x00017c2d) bg_popup_window_pane_cp03_ParamLimits

0x991c,	// (0x00017c2d) bg_popup_window_pane_cp03

0xa1ca,	// (0x000184db) heading_loc_req_pane_ParamLimits

0xa1ca,	// (0x000184db) heading_loc_req_pane

0x2470,	// (0x00010781) popup_dyc_status_message_window_g1_ParamLimits

0x2470,	// (0x00010781) popup_dyc_status_message_window_g1

0x2484,	// (0x00010795) popup_dyc_status_message_window_t1_ParamLimits

0x2484,	// (0x00010795) popup_dyc_status_message_window_t1

0x2499,	// (0x000107aa) popup_dyc_status_message_window_t2_ParamLimits

0x2499,	// (0x000107aa) popup_dyc_status_message_window_t2

0x24ae,	// (0x000107bf) popup_dyc_status_message_window_t3_ParamLimits

0x24ae,	// (0x000107bf) popup_dyc_status_message_window_t3

0x0002,

0xf269,	// (0x0001d57a) popup_dyc_status_message_window_t_ParamLimits

0xf269,	// (0x0001d57a) popup_dyc_status_message_window_t

0x96c1,	// (0x000179d2) bg_heading_pane_cp01

0xa1d6,	// (0x000184e7) heading_loc_req_pane_g1

0xa1de,	// (0x000184ef) heading_loc_req_pane_g2

0xa1e6,	// (0x000184f7) heading_loc_req_pane_g3

0x0002,

0xf270,	// (0x0001d581) heading_loc_req_pane_g

0xa1ee,	// (0x000184ff) heading_loc_req_pane_t1

0xa20d,	// (0x0001851e) bg_popup_sub_pane_cp01_ParamLimits

0xa20d,	// (0x0001851e) bg_popup_sub_pane_cp01

0xa21b,	// (0x0001852c) popup_cale_events_window_g1_ParamLimits

0xa21b,	// (0x0001852c) popup_cale_events_window_g1

0xa23b,	// (0x0001854c) popup_cale_events_window_g2_ParamLimits

0xa23b,	// (0x0001854c) popup_cale_events_window_g2

0x0001,

0xf292,	// (0x0001d5a3) popup_cale_events_window_g_ParamLimits

0xf292,	// (0x0001d5a3) popup_cale_events_window_g

0xa25b,	// (0x0001856c) popup_cale_events_window_t1_ParamLimits

0xa25b,	// (0x0001856c) popup_cale_events_window_t1

0xa26d,	// (0x0001857e) popup_cale_events_window_t2_ParamLimits

0xa26d,	// (0x0001857e) popup_cale_events_window_t2

0xa2ab,	// (0x000185bc) popup_cale_events_window_t3_ParamLimits

0xa2ab,	// (0x000185bc) popup_cale_events_window_t3

0xa2e5,	// (0x000185f6) popup_cale_events_window_t4_ParamLimits

0xa2e5,	// (0x000185f6) popup_cale_events_window_t4

0x0003,

0xf297,	// (0x0001d5a8) popup_cale_events_window_t_ParamLimits

0xf297,	// (0x0001d5a8) popup_cale_events_window_t

0x24d6,	// (0x000107e7) call_type_pane

0x24e6,	// (0x000107f7) popup_call_status_window_g1

0x24fa,	// (0x0001080b) popup_call_status_window_g2

0x250e,	// (0x0001081f) popup_call_status_window_g3

0x0002,

0xf2a0,	// (0x0001d5b1) popup_call_status_window_g

0xa31b,	// (0x0001862c) call_type_pane_g1

0xa324,	// (0x00018635) call_type_pane_g2

0x0001,

0xf2a7,	// (0x0001d5b8) call_type_pane_g

0x96c1,	// (0x000179d2) bg_popup_sub_pane_cp02

0xa32d,	// (0x0001863e) listscroll_popup_wml_pane

0xa335,	// (0x00018646) list_wml_pane

0xa33f,	// (0x00018650) scroll_pane_cp013

0xa34a,	// (0x0001865b) list_single_graphic_popup_wml_pane_ParamLimits

0xa34a,	// (0x0001865b) list_single_graphic_popup_wml_pane

0x9934,	// (0x00017c45) list_single_graphic_popup_wml_pane_g1

0xa35e,	// (0x0001866f) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf2ac,	// (0x0001d5bd) list_single_graphic_popup_wml_pane_g

0xa366,	// (0x00018677) list_single_graphic_popup_wml_pane_t1

0xa37c,	// (0x0001868d) aid_call_pane

0x9914,	// (0x00017c25) popup_clock_analogue_window_g1

0x9914,	// (0x00017c25) popup_clock_analogue_window_g2

0xa384,	// (0x00018695) popup_clock_analogue_window_g3

0xa384,	// (0x00018695) popup_clock_analogue_window_g4

0x9934,	// (0x00017c45) popup_clock_analogue_window_g5

0x0004,

0xf2b1,	// (0x0001d5c2) popup_clock_analogue_window_g

0xa38c,	// (0x0001869d) popup_clock_analogue_window_t1

0xa39a,	// (0x000186ab) clock_digital_number_pane_ParamLimits

0xa39a,	// (0x000186ab) clock_digital_number_pane

0xa3a6,	// (0x000186b7) clock_digital_number_pane_cp02_ParamLimits

0xa3a6,	// (0x000186b7) clock_digital_number_pane_cp02

0xa3b2,	// (0x000186c3) clock_digital_number_pane_cp03_ParamLimits

0xa3b2,	// (0x000186c3) clock_digital_number_pane_cp03

0xa3be,	// (0x000186cf) clock_digital_number_pane_cp04_ParamLimits

0xa3be,	// (0x000186cf) clock_digital_number_pane_cp04

0xa3ca,	// (0x000186db) clock_digital_separator_pane_ParamLimits

0xa3ca,	// (0x000186db) clock_digital_separator_pane

0xa3d6,	// (0x000186e7) popup_clock_digital_window_t1

0x9934,	// (0x00017c45) clock_digital_number_pane_g1

0x9934,	// (0x00017c45) clock_digital_number_pane_g2

0x0001,

0xf231,	// (0x0001d542) clock_digital_number_pane_g

0x9934,	// (0x00017c45) clock_digital_separator_pane_g1

0x9934,	// (0x00017c45) clock_digital_separator_pane_g2

0x0001,

0xf231,	// (0x0001d542) clock_digital_separator_pane_g

0x96c1,	// (0x000179d2) bg_popup_window_pane_cp04

0xa3f3,	// (0x00018704) heading_pane_cp03

0x9c8a,	// (0x00017f9b) listscroll_popup_gms_pane

0x96c1,	// (0x000179d2) grid_large_graphic_popup_pane

0xa3fc,	// (0x0001870d) listscroll_popup_gms_pane_g1

0xa405,	// (0x00018716) listscroll_popup_gms_pane_g2

0x0001,

0xf2bc,	// (0x0001d5cd) listscroll_popup_gms_pane_g

0xa40e,	// (0x0001871f) scroll_pane_cp014

0x9989,	// (0x00017c9a) cell_large_graphic_popup_pane_ParamLimits

0x9989,	// (0x00017c9a) cell_large_graphic_popup_pane

0x9997,	// (0x00017ca8) cell_large_graphic_popup_pane_g1_ParamLimits

0x9997,	// (0x00017ca8) cell_large_graphic_popup_pane_g1

0xa417,	// (0x00018728) cell_large_graphic_popup_pane_g2_ParamLimits

0xa417,	// (0x00018728) cell_large_graphic_popup_pane_g2

0xa425,	// (0x00018736) cell_large_graphic_popup_pane_g3_ParamLimits

0xa425,	// (0x00018736) cell_large_graphic_popup_pane_g3

0xa433,	// (0x00018744) cell_large_graphic_popup_pane_g4_ParamLimits

0xa433,	// (0x00018744) cell_large_graphic_popup_pane_g4

0x0003,

0xf2c1,	// (0x0001d5d2) cell_large_graphic_popup_pane_g_ParamLimits

0xf2c1,	// (0x0001d5d2) cell_large_graphic_popup_pane_g

0x96c1,	// (0x000179d2) grid_highlight_pane_cp010

0x9934,	// (0x00017c45) bg_popup_call_pane_g1

0xa444,	// (0x00018755) list_single_graphic_popup_conf_pane_ParamLimits

0xa444,	// (0x00018755) list_single_graphic_popup_conf_pane

0xa457,	// (0x00018768) list_highlight_pane_cp01

0xa460,	// (0x00018771) list_single_graphic_popup_conf_pane_g1

0xa468,	// (0x00018779) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf2ca,	// (0x0001d5db) list_single_graphic_popup_conf_pane_g

0xa470,	// (0x00018781) list_single_graphic_popup_conf_pane_t1

0xa47e,	// (0x0001878f) linegrid_cams_pane_g1

0x251d,	// (0x0001082e) linegrid_cams_pane_g2

0x9bbb,	// (0x00017ecc) linegrid_cams_pane_g3

0xa487,	// (0x00018798) linegrid_cams_pane_g4

0x2526,	// (0x00010837) linegrid_cams_pane_g5

0x252f,	// (0x00010840) linegrid_cams_pane_g6

0x9c79,	// (0x00017f8a) linegrid_cams_pane_g7

0x0006,

0xf2cf,	// (0x0001d5e0) linegrid_cams_pane_g

0xa490,	// (0x000187a1) popup_clock_analogue_window

0xa490,	// (0x000187a1) popup_clock_digital_window

0x96c1,	// (0x000179d2) popup_phob_thumbnail_window

0x9934,	// (0x00017c45) call_video_uplink_pane_g1

0xa499,	// (0x000187aa) call_video_uplink_pane_g2

0x0001,

0xf2de,	// (0x0001d5ef) call_video_uplink_pane_g

0xa4a1,	// (0x000187b2) video_uplink_pane

0xa4a9,	// (0x000187ba) mce_image_pane_g1

0x253a,	// (0x0001084b) mce_image_pane_g2

0x2542,	// (0x00010853) mce_image_pane_g3

0x254a,	// (0x0001085b) mce_image_pane_g4

0x2554,	// (0x00010865) mce_image_pane_g5

0x0004,

0xf2e3,	// (0x0001d5f4) mce_image_pane_g

0xa4b3,	// (0x000187c4) control_top_pane_stacon_cp01_ParamLimits

0xa4b3,	// (0x000187c4) control_top_pane_stacon_cp01

0xa4c7,	// (0x000187d8) uni_indicator_pane_stacon_cp01_ParamLimits

0xa4c7,	// (0x000187d8) uni_indicator_pane_stacon_cp01

0xa4d8,	// (0x000187e9) bg_popup_sub_pane_cp03

0x255c,	// (0x0001086d) chi_dic_find_pane

0x2564,	// (0x00010875) listscroll_chi_dic_pane

0x256d,	// (0x0001087e) main_pane_chidic_g1

0x2580,	// (0x00010891) chi_dic_find_pane_t1

0xa4e2,	// (0x000187f3) find_chidic_pane

0xa4eb,	// (0x000187fc) chi_dic_list_pane_ParamLimits

0xa4eb,	// (0x000187fc) chi_dic_list_pane

0xa4fc,	// (0x0001880d) scroll_pane_cp020

0x258e,	// (0x0001089f) find_chidic_pane_t1

0x96c1,	// (0x000179d2) input_focus_pane_cp06

0x259d,	// (0x000108ae) list_chi_dic_pane_ParamLimits

0x259d,	// (0x000108ae) list_chi_dic_pane

0x25af,	// (0x000108c0) list_chi_dic_pane_t1_ParamLimits

0x25af,	// (0x000108c0) list_chi_dic_pane_t1

0x96c1,	// (0x000179d2) list_highlight_pane_cp020

0xa504,	// (0x00018815) bg_cale_heading_pane_g1

0x25c2,	// (0x000108d3) bg_cale_heading_pane_g2

0x25ca,	// (0x000108db) bg_cale_heading_pane_g3

0x25d2,	// (0x000108e3) bg_cale_heading_pane_g4

0x25dc,	// (0x000108ed) bg_cale_heading_pane_g5

0x25e6,	// (0x000108f7) bg_cale_heading_pane_g6

0x25ee,	// (0x000108ff) bg_cale_heading_pane_g7

0x25f6,	// (0x00010907) bg_cale_heading_pane_g8

0x2600,	// (0x00010911) bg_cale_heading_pane_g9

0x0008,

0xf2ee,	// (0x0001d5ff) bg_cale_heading_pane_g

0xa504,	// (0x00018815) bg_cale_side_pane_g1

0x260a,	// (0x0001091b) bg_cale_side_pane_g2

0x2612,	// (0x00010923) bg_cale_side_pane_g3

0x261a,	// (0x0001092b) bg_cale_side_pane_g4

0x2622,	// (0x00010933) bg_cale_side_pane_g5

0x262a,	// (0x0001093b) bg_cale_side_pane_g6

0x2632,	// (0x00010943) bg_cale_side_pane_g7

0x263a,	// (0x0001094b) bg_cale_side_pane_g8

0x2642,	// (0x00010953) bg_cale_side_pane_g9

0x0008,

0xf301,	// (0x0001d612) bg_cale_side_pane_g

0x264a,	// (0x0001095b) popup_call_status_window_ParamLimits

0x264a,	// (0x0001095b) popup_call_status_window

0xa50c,	// (0x0001881d) stacon_top_pane

0xa514,	// (0x00018825) status_pane_ParamLimits

0xa514,	// (0x00018825) status_pane

0xa529,	// (0x0001883a) status_small_pane

0xa531,	// (0x00018842) control_pane

0x96c1,	// (0x000179d2) stacon_bottom_pane

0xa539,	// (0x0001884a) list_single_mce_smart_pane_t1_ParamLimits

0xa539,	// (0x0001884a) list_single_mce_smart_pane_t1

0xa54c,	// (0x0001885d) list_single_mce_smart_pane_t2_ParamLimits

0xa54c,	// (0x0001885d) list_single_mce_smart_pane_t2

0x0001,

0xf314,	// (0x0001d625) list_single_mce_smart_pane_t_ParamLimits

0xf314,	// (0x0001d625) list_single_mce_smart_pane_t

0x2691,	// (0x000109a2) compass_pane

0x269a,	// (0x000109ab) main_location2_pane_t1

0x26ac,	// (0x000109bd) main_location2_pane_t2

0x26be,	// (0x000109cf) main_location2_pane_t3

0x0003,

0xf319,	// (0x0001d62a) main_location2_pane_t

0xa56b,	// (0x0001887c) compass_pane_g1_ParamLimits

0xa56b,	// (0x0001887c) compass_pane_g1

0x2702,	// (0x00010a13) compass_pane_t1

0x2711,	// (0x00010a22) compass_pane_t2

0x0005,

0xf322,	// (0x0001d633) compass_pane_t

0x2758,	// (0x00010a69) text_secondary_cp61

0xa5e9,	// (0x000188fa) navi_pane_cams_g5

0xa665,	// (0x00018976) navi_pane_im_t1

0xa673,	// (0x00018984) navi_pane_mp_g1_ParamLimits

0xa673,	// (0x00018984) navi_pane_mp_g1

0xa687,	// (0x00018998) navi_pane_mp_g2_ParamLimits

0xa687,	// (0x00018998) navi_pane_mp_g2

0xa693,	// (0x000189a4) navi_pane_mp_g3_ParamLimits

0xa693,	// (0x000189a4) navi_pane_mp_g3

0x0002,

0xf336,	// (0x0001d647) navi_pane_mp_g_ParamLimits

0xf336,	// (0x0001d647) navi_pane_mp_g

0xa69f,	// (0x000189b0) navi_pane_mp_t1

0xa6ad,	// (0x000189be) navi_pane_mp_t2

0x0002,

0xf33d,	// (0x0001d64e) navi_pane_mp_t

0xa718,	// (0x00018a29) navi_pane_vt_g1

0xa69f,	// (0x000189b0) navi_pane_vt_t1

0xa720,	// (0x00018a31) navi_slider_pane

0x9c8a,	// (0x00017f9b) zooming_pane

0xa730,	// (0x00018a41) navi_slider_pane_g1

0xa739,	// (0x00018a4a) navi_slider_pane_g2

0x0006,

0xf344,	// (0x0001d655) navi_slider_pane_g

0xa766,	// (0x00018a77) aid_levels_zoom

0xa76e,	// (0x00018a7f) zooming_pane_g1

0xa776,	// (0x00018a87) zooming_pane_g2

0xa776,	// (0x00018a87) zooming_pane_g3

0x0002,

0xf353,	// (0x0001d664) zooming_pane_g

0xa77e,	// (0x00018a8f) level_10_zoom

0xa787,	// (0x00018a98) level_11_zoom

0xa790,	// (0x00018aa1) level_1_zoom

0xa799,	// (0x00018aaa) level_2_zoom

0xa7a2,	// (0x00018ab3) level_3_zoom

0xa7ab,	// (0x00018abc) level_4_zoom

0xa7b4,	// (0x00018ac5) level_5_zoom

0xa7bd,	// (0x00018ace) level_6_zoom

0xa7c6,	// (0x00018ad7) level_7_zoom

0xa7cf,	// (0x00018ae0) level_8_zoom

0xa7d8,	// (0x00018ae9) level_9_zoom

0xa7e9,	// (0x00018afa) popup_phob_thumbnail_window_g1

0xa7f1,	// (0x00018b02) popup_phob_thumbnail_window_g2

0x0001,

0xf35a,	// (0x0001d66b) popup_phob_thumbnail_window_g

0x31bc,	// (0x000114cd) level_1_location

0x31c4,	// (0x000114d5) level_2_location

0x31cc,	// (0x000114dd) level_3_location

0x31d4,	// (0x000114e5) level_4_location

0x9c8a,	// (0x00017f9b) level_5_location

0x27a9,	// (0x00010aba) mce_icon_pane_g1

0x27b3,	// (0x00010ac4) mce_icon_pane_g2

0x0001,

0xf35f,	// (0x0001d670) mce_icon_pane_g

0xa7f9,	// (0x00018b0a) main_mup_pane_g1_ParamLimits

0xa7f9,	// (0x00018b0a) main_mup_pane_g1

0xa7f9,	// (0x00018b0a) main_mup_pane_g2_ParamLimits

0xa7f9,	// (0x00018b0a) main_mup_pane_g2

0xa7f9,	// (0x00018b0a) main_mup_pane_g3_ParamLimits

0xa7f9,	// (0x00018b0a) main_mup_pane_g3

0xa7f9,	// (0x00018b0a) main_mup_pane_g4_ParamLimits

0xa7f9,	// (0x00018b0a) main_mup_pane_g4

0xa7f9,	// (0x00018b0a) main_mup_pane_g5_ParamLimits

0xa7f9,	// (0x00018b0a) main_mup_pane_g5

0xa7f9,	// (0x00018b0a) main_mup_pane_g6_ParamLimits

0xa7f9,	// (0x00018b0a) main_mup_pane_g6

0xa7f9,	// (0x00018b0a) main_mup_pane_g7_ParamLimits

0xa7f9,	// (0x00018b0a) main_mup_pane_g7

0xa7f9,	// (0x00018b0a) main_mup_pane_g8_ParamLimits

0xa7f9,	// (0x00018b0a) main_mup_pane_g8

0xa7f9,	// (0x00018b0a) main_mup_pane_g9_ParamLimits

0xa7f9,	// (0x00018b0a) main_mup_pane_g9

0xa7f9,	// (0x00018b0a) main_mup_pane_g10_ParamLimits

0xa7f9,	// (0x00018b0a) main_mup_pane_g10

0xa7f9,	// (0x00018b0a) main_mup_pane_g11_ParamLimits

0xa7f9,	// (0x00018b0a) main_mup_pane_g11

0x9997,	// (0x00017ca8) main_mup_pane_g12_ParamLimits

0x9997,	// (0x00017ca8) main_mup_pane_g12

0xa7f9,	// (0x00018b0a) main_mup_pane_g13_ParamLimits

0xa7f9,	// (0x00018b0a) main_mup_pane_g13

0x000c,

0xf364,	// (0x0001d675) main_mup_pane_g_ParamLimits

0xf364,	// (0x0001d675) main_mup_pane_g

0xa807,	// (0x00018b18) main_mup_pane_t1_ParamLimits

0xa807,	// (0x00018b18) main_mup_pane_t1

0xa807,	// (0x00018b18) main_mup_pane_t2_ParamLimits

0xa807,	// (0x00018b18) main_mup_pane_t2

0xa807,	// (0x00018b18) main_mup_pane_t3_ParamLimits

0xa807,	// (0x00018b18) main_mup_pane_t3

0x99e7,	// (0x00017cf8) main_mup_pane_t4_ParamLimits

0x99e7,	// (0x00017cf8) main_mup_pane_t4

0x99e7,	// (0x00017cf8) main_mup_pane_t5_ParamLimits

0x99e7,	// (0x00017cf8) main_mup_pane_t5

0x99fb,	// (0x00017d0c) main_mup_pane_t6_ParamLimits

0x99fb,	// (0x00017d0c) main_mup_pane_t6

0x0005,

0xf37f,	// (0x0001d690) main_mup_pane_t_ParamLimits

0xf37f,	// (0x0001d690) main_mup_pane_t

0x9989,	// (0x00017c9a) mup_progress_pane_ParamLimits

0x9989,	// (0x00017c9a) mup_progress_pane

0xa81b,	// (0x00018b2c) mup_visualizer_pane_ParamLimits

0xa81b,	// (0x00018b2c) mup_visualizer_pane

0xa81b,	// (0x00018b2c) mup_volume_pane_ParamLimits

0xa81b,	// (0x00018b2c) mup_volume_pane

0x99a5,	// (0x00017cb6) mup_visualizer_pane_g1_ParamLimits

0x99a5,	// (0x00017cb6) mup_visualizer_pane_g1

0xa829,	// (0x00018b3a) mup_visualizer_pane_g2_ParamLimits

0xa829,	// (0x00018b3a) mup_visualizer_pane_g2

0x9997,	// (0x00017ca8) mup_visualizer_pane_g3_ParamLimits

0x9997,	// (0x00017ca8) mup_visualizer_pane_g3

0x0002,

0xf38c,	// (0x0001d69d) mup_visualizer_pane_g_ParamLimits

0xf38c,	// (0x0001d69d) mup_visualizer_pane_g

0x99dd,	// (0x00017cee) mup_volume_pane_g1

0x99dd,	// (0x00017cee) mup_volume_pane_g2

0x0001,

0xf0af,	// (0x0001d3c0) mup_volume_pane_g

0x99dd,	// (0x00017cee) mup_progress_pane_g1

0x99dd,	// (0x00017cee) mup_progress_pane_g2

0x99dd,	// (0x00017cee) mup_progress_pane_g3

0x0002,

0xf393,	// (0x0001d6a4) mup_progress_pane_g

0x96c1,	// (0x000179d2) bg_popup_window_pane_cp05

0xa837,	// (0x00018b48) heading_pane_cp02_ParamLimits

0xa837,	// (0x00018b48) heading_pane_cp02

0xa851,	// (0x00018b62) list_popup_blid_pane

0xa859,	// (0x00018b6a) list_blid_sat_info_pane_ParamLimits

0xa859,	// (0x00018b6a) list_blid_sat_info_pane

0xa86c,	// (0x00018b7d) list_blid_sat_info_pane_g1

0xa874,	// (0x00018b85) list_blid_sat_info_pane_t1

0x28b3,	// (0x00010bc4) mup_equalizer_pane_ParamLimits

0x28b3,	// (0x00010bc4) mup_equalizer_pane

0x28cc,	// (0x00010bdd) mup_equalizer_pane_cp1_ParamLimits

0x28cc,	// (0x00010bdd) mup_equalizer_pane_cp1

0x28e9,	// (0x00010bfa) mup_equalizer_pane_cp2_ParamLimits

0x28e9,	// (0x00010bfa) mup_equalizer_pane_cp2

0x2906,	// (0x00010c17) mup_equalizer_pane_cp3_ParamLimits

0x2906,	// (0x00010c17) mup_equalizer_pane_cp3

0x2927,	// (0x00010c38) mup_equalizer_pane_cp4_ParamLimits

0x2927,	// (0x00010c38) mup_equalizer_pane_cp4

0x2948,	// (0x00010c59) mup_equalizer_pane_cp5

0x295c,	// (0x00010c6d) mup_equalizer_pane_cp6

0x2970,	// (0x00010c81) mup_equalizer_pane_cp7

0xb993,	// (0x00019ca4) bg_popup_call_poc_act_pane_g9

0xb99b,	// (0x00019cac) bg_popup_call_poc_act_pane_g10

0xb9a3,	// (0x00019cb4) bg_popup_call_poc_act_pane_g11

0x000a,

0x991c,	// (0x00017c2d) mup_scale_pane

0x9934,	// (0x00017c45) mup_scale_pane_g1

0xa882,	// (0x00018b93) mup_scale_pane_g2

0x0006,

0xf3af,	// (0x0001d6c0) mup_scale_pane_g

0xa8a6,	// (0x00018bb7) msg_data_pane

0xa8ae,	// (0x00018bbf) scroll_pane_cp017

0x2996,	// (0x00010ca7) bg_list_pane_cp04_ParamLimits

0x2996,	// (0x00010ca7) bg_list_pane_cp04

0xa8b6,	// (0x00018bc7) msg_data_pane_g1

0x29ba,	// (0x00010ccb) msg_data_pane_g2

0x29c2,	// (0x00010cd3) msg_data_pane_g3

0x29ca,	// (0x00010cdb) msg_data_pane_g4

0x29d2,	// (0x00010ce3) msg_data_pane_g5

0x29da,	// (0x00010ceb) msg_data_pane_g6

0x29e2,	// (0x00010cf3) msg_data_pane_g7

0x0006,

0xf3be,	// (0x0001d6cf) msg_data_pane_g

0x29ea,	// (0x00010cfb) msg_text_pane_ParamLimits

0x29ea,	// (0x00010cfb) msg_text_pane

0x2a1f,	// (0x00010d30) qrid_highlight_pane_cp011_ParamLimits

0x2a1f,	// (0x00010d30) qrid_highlight_pane_cp011

0x96c1,	// (0x000179d2) msg_body_pane

0x991c,	// (0x00017c2d) msg_header_pane

0xa8d2,	// (0x00018be3) input_focus_pane_cp07

0x2a43,	// (0x00010d54) msg_header_pane_t1_ParamLimits

0x2a43,	// (0x00010d54) msg_header_pane_t1

0x2a5f,	// (0x00010d70) msg_header_pane_t2_ParamLimits

0x2a5f,	// (0x00010d70) msg_header_pane_t2

0x0001,

0xf3d2,	// (0x0001d6e3) msg_header_pane_t_ParamLimits

0xf3d2,	// (0x0001d6e3) msg_header_pane_t

0xa8f3,	// (0x00018c04) msg_body_pane_g1

0x2a7f,	// (0x00010d90) msg_body_pane_t1_ParamLimits

0x2a7f,	// (0x00010d90) msg_body_pane_t1

0x2ab0,	// (0x00010dc1) msg_body_pane_t2_ParamLimits

0x2ab0,	// (0x00010dc1) msg_body_pane_t2

0x2ac2,	// (0x00010dd3) msg_body_pane_t3_ParamLimits

0x2ac2,	// (0x00010dd3) msg_body_pane_t3

0x0002,

0xf3d7,	// (0x0001d6e8) msg_body_pane_t_ParamLimits

0xf3d7,	// (0x0001d6e8) msg_body_pane_t

0x2b0e,	// (0x00010e1f) main_viewer_pane_g1_ParamLimits

0x2b0e,	// (0x00010e1f) main_viewer_pane_g1

0x2b1c,	// (0x00010e2d) main_viewer_pane_g2_ParamLimits

0x2b1c,	// (0x00010e2d) main_viewer_pane_g2

0x2b2a,	// (0x00010e3b) main_viewer_pane_g3_ParamLimits

0x2b2a,	// (0x00010e3b) main_viewer_pane_g3

0x2b39,	// (0x00010e4a) main_viewer_pane_g4_ParamLimits

0x2b39,	// (0x00010e4a) main_viewer_pane_g4

0xa913,	// (0x00018c24) main_viewer_pane_g5_ParamLimits

0xa913,	// (0x00018c24) main_viewer_pane_g5

0xa913,	// (0x00018c24) main_viewer_pane_g7_ParamLimits

0xa913,	// (0x00018c24) main_viewer_pane_g7

0xa925,	// (0x00018c36) main_viewer_pane_g8_ParamLimits

0xa925,	// (0x00018c36) main_viewer_pane_g8

0x0007,

0xf3e7,	// (0x0001d6f8) main_viewer_pane_g_ParamLimits

0xf3e7,	// (0x0001d6f8) main_viewer_pane_g

0xa93d,	// (0x00018c4e) viewer_content_pane_ParamLimits

0xa93d,	// (0x00018c4e) viewer_content_pane

0x2b75,	// (0x00010e86) main_postcard_pane_g1_ParamLimits

0x2b75,	// (0x00010e86) main_postcard_pane_g1

0x2b8b,	// (0x00010e9c) main_postcard_pane_g2_ParamLimits

0x2b8b,	// (0x00010e9c) main_postcard_pane_g2

0x2ba1,	// (0x00010eb2) main_postcard_pane_g3_ParamLimits

0x2ba1,	// (0x00010eb2) main_postcard_pane_g3

0x0005,

0xf3f8,	// (0x0001d709) main_postcard_pane_g_ParamLimits

0xf3f8,	// (0x0001d709) main_postcard_pane_g

0x2bb8,	// (0x00010ec9) main_postcard_pane_g4

0xbb6b,	// (0x00019e7c) smil_status_volume_pane_g2

0x2bfb,	// (0x00010f0c) postcard_pane_ParamLimits

0x2bfb,	// (0x00010f0c) postcard_pane

0xa94b,	// (0x00018c5c) postcard_pane_g1_ParamLimits

0xa94b,	// (0x00018c5c) postcard_pane_g1

0x2c3d,	// (0x00010f4e) postcard_pane_g2_ParamLimits

0x2c3d,	// (0x00010f4e) postcard_pane_g2

0x2c49,	// (0x00010f5a) postcard_pane_g3_ParamLimits

0x2c49,	// (0x00010f5a) postcard_pane_g3

0xa959,	// (0x00018c6a) postcard_pane_g4_ParamLimits

0xa959,	// (0x00018c6a) postcard_pane_g4

0x2c55,	// (0x00010f66) postcard_pane_g5_ParamLimits

0x2c55,	// (0x00010f66) postcard_pane_g5

0x2c6a,	// (0x00010f7b) postcard_pane_g6_ParamLimits

0x2c6a,	// (0x00010f7b) postcard_pane_g6

0xa94b,	// (0x00018c5c) postcard_pane_g7_ParamLimits

0xa94b,	// (0x00018c5c) postcard_pane_g7

0x0006,

0xf405,	// (0x0001d716) postcard_pane_g_ParamLimits

0xf405,	// (0x0001d716) postcard_pane_g

0x2c7e,	// (0x00010f8f) main_mp2_pane_g1_ParamLimits

0x2c7e,	// (0x00010f8f) main_mp2_pane_g1

0x2c8a,	// (0x00010f9b) main_mp2_pane_g2_ParamLimits

0x2c8a,	// (0x00010f9b) main_mp2_pane_g2

0x2c96,	// (0x00010fa7) main_mp2_pane_g3_ParamLimits

0x2c96,	// (0x00010fa7) main_mp2_pane_g3

0x0002,

0xf414,	// (0x0001d725) main_mp2_pane_g_ParamLimits

0xf414,	// (0x0001d725) main_mp2_pane_g

0x2ca2,	// (0x00010fb3) main_mp2_pane_t1_ParamLimits

0x2ca2,	// (0x00010fb3) main_mp2_pane_t1

0x2cb7,	// (0x00010fc8) main_mp2_pane_t2_ParamLimits

0x2cb7,	// (0x00010fc8) main_mp2_pane_t2

0x2cc9,	// (0x00010fda) main_mp2_pane_t3_ParamLimits

0x2cc9,	// (0x00010fda) main_mp2_pane_t3

0x0002,

0xf41b,	// (0x0001d72c) main_mp2_pane_t_ParamLimits

0xf41b,	// (0x0001d72c) main_mp2_pane_t

0x92a0,	// (0x000175b1) pec_content_pane_ParamLimits

0x92a0,	// (0x000175b1) pec_content_pane

0x9231,	// (0x00017542) scroll_pane_cp015

0xa81b,	// (0x00018b2c) pec_attribute_pane_ParamLimits

0xa81b,	// (0x00018b2c) pec_attribute_pane

0x9997,	// (0x00017ca8) pec_content_pane_g1_ParamLimits

0x9997,	// (0x00017ca8) pec_content_pane_g1

0xa967,	// (0x00018c78) pec_content_pane_t1_ParamLimits

0xa967,	// (0x00018c78) pec_content_pane_t1

0xa97b,	// (0x00018c8c) pec_content_pane_t2_ParamLimits

0xa97b,	// (0x00018c8c) pec_content_pane_t2

0x0001,

0xf422,	// (0x0001d733) pec_content_pane_t_ParamLimits

0xf422,	// (0x0001d733) pec_content_pane_t

0x9989,	// (0x00017c9a) list_single_graphic_pane_cp01_ParamLimits

0x9989,	// (0x00017c9a) list_single_graphic_pane_cp01

0x991c,	// (0x00017c2d) bg_popup_sub_pane_cp04

0xa98f,	// (0x00018ca0) popup_mup_playback_window_g1

0xa99b,	// (0x00018cac) popup_mup_playback_window_t1

0xa9b0,	// (0x00018cc1) popup_mup_playback_window_t2

0x0001,

0xf427,	// (0x0001d738) popup_mup_playback_window_t

0xa9e7,	// (0x00018cf8) main_image_pane_g1_ParamLimits

0xa9e7,	// (0x00018cf8) main_image_pane_g1

0xaa2a,	// (0x00018d3b) scroll_pane_cp018_ParamLimits

0xaa2a,	// (0x00018d3b) scroll_pane_cp018

0xaa42,	// (0x00018d53) scroll_pane_cp016_ParamLimits

0xaa42,	// (0x00018d53) scroll_pane_cp016

0x2d93,	// (0x000110a4) smil2_image_pane_ParamLimits

0x2d93,	// (0x000110a4) smil2_image_pane

0x2dc3,	// (0x000110d4) smil2_root_pane_ParamLimits

0x2dc3,	// (0x000110d4) smil2_root_pane

0x2dfb,	// (0x0001110c) smil2_text_pane_ParamLimits

0x2dfb,	// (0x0001110c) smil2_text_pane

0x9231,	// (0x00017542) bg_list_pane_cp06

0x9231,	// (0x00017542) grid_radio_pane

0x96c1,	// (0x000179d2) bg_popup_window_pane_cp06

0xa1fd,	// (0x0001850e) main_fmradio_pane_t1

0xb9eb,	// (0x00019cfc) heading_pane_cp04

0xa1fd,	// (0x0001850e) main_fmradio_pane_t2

0xb9f3,	// (0x00019d04) popup_cale_lunar_info_window_g1

0xa1fd,	// (0x0001850e) main_fmradio_pane_t3

0xb9fb,	// (0x00019d0c) popup_cale_lunar_info_window_g2

0xa1fd,	// (0x0001850e) main_fmradio_pane_t4

0x0001,

0xa1fd,	// (0x0001850e) main_fmradio_pane_t5

0x0004,

0xf50a,	// (0x0001d81b) popup_cale_lunar_info_window_g

0xf287,	// (0x0001d598) main_fmradio_pane_t

0x9231,	// (0x00017542) wait_bar_pane_cp03

0x9989,	// (0x00017c9a) cell_fmradio_pane_ParamLimits

0x9989,	// (0x00017c9a) cell_fmradio_pane

0x9997,	// (0x00017ca8) cell_fmradio_pane_g1_ParamLimits

0x9997,	// (0x00017ca8) cell_fmradio_pane_g1

0x9231,	// (0x00017542) grid_highlight_pane_cp011

0xaa76,	// (0x00018d87) poc_content_pane_ParamLimits

0xaa76,	// (0x00018d87) poc_content_pane

0xaa88,	// (0x00018d99) scroll_pane_cp019

0x2e7b,	// (0x0001118c) popup_call_poc_act_window_ParamLimits

0x2e7b,	// (0x0001118c) popup_call_poc_act_window

0x2e9f,	// (0x000111b0) popup_call_poc_inact_window_ParamLimits

0x2e9f,	// (0x000111b0) popup_call_poc_inact_window

0xf4d3,	// (0x0001d7e4) bg_popup_call_poc_act_pane_g

0xb9ab,	// (0x00019cbc) bg_popup_call_poc_inact_pane_g1

0xb9b3,	// (0x00019cc4) bg_popup_call_poc_inact_pane_g2

0xaa90,	// (0x00018da1) popup_call_poc_act_window_g2

0xb9bb,	// (0x00019ccc) bg_popup_call_poc_inact_pane_g3

0xb93b,	// (0x00019c4c) bg_popup_call_poc_inact_pane_g4

0xb9c3,	// (0x00019cd4) bg_popup_call_poc_inact_pane_g5

0xaa98,	// (0x00018da9) popup_call_poc_act_window_t1_ParamLimits

0xaa98,	// (0x00018da9) popup_call_poc_act_window_t1

0xaac0,	// (0x00018dd1) popup_call_poc_act_window_t2_ParamLimits

0xaac0,	// (0x00018dd1) popup_call_poc_act_window_t2

0xaae8,	// (0x00018df9) popup_call_poc_act_window_t3_ParamLimits

0xaae8,	// (0x00018df9) popup_call_poc_act_window_t3

0xab10,	// (0x00018e21) popup_call_poc_act_window_t4_ParamLimits

0xab10,	// (0x00018e21) popup_call_poc_act_window_t4

0x0003,

0xf43c,	// (0x0001d74d) popup_call_poc_act_window_t_ParamLimits

0xf43c,	// (0x0001d74d) popup_call_poc_act_window_t

0xb9cb,	// (0x00019cdc) bg_popup_call_poc_inact_pane_g6

0xb9d3,	// (0x00019ce4) bg_popup_call_poc_inact_pane_g7

0xb9db,	// (0x00019cec) bg_popup_call_poc_inact_pane_g8

0xab22,	// (0x00018e33) popup_call_poc_inact_window_g2

0xb9e3,	// (0x00019cf4) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf4ea,	// (0x0001d7fb) bg_popup_call_poc_inact_pane_g

0xab2a,	// (0x00018e3b) popup_call_poc_inact_window_t1_ParamLimits

0xab2a,	// (0x00018e3b) popup_call_poc_inact_window_t1

0xab3f,	// (0x00018e50) popup_call_poc_inact_window_t2_ParamLimits

0xab3f,	// (0x00018e50) popup_call_poc_inact_window_t2

0xab54,	// (0x00018e65) popup_call_poc_inact_window_t3_ParamLimits

0xab54,	// (0x00018e65) popup_call_poc_inact_window_t3

0x0002,

0xf445,	// (0x0001d756) popup_call_poc_inact_window_t_ParamLimits

0xf445,	// (0x0001d756) popup_call_poc_inact_window_t

0xbae3,	// (0x00019df4) context_pane_ParamLimits

0x3686,	// (0x00011997) signal_pane_ParamLimits

0x9c8a,	// (0x00017f9b) main_call2_pane

0xbabc,	// (0x00019dcd) popup_phob_thumbnail2_window_ParamLimits

0xbabc,	// (0x00019dcd) popup_phob_thumbnail2_window

0xa8fb,	// (0x00018c0c) aid_hotspot_pointer_arrow_pane

0xa903,	// (0x00018c14) aid_hotspot_pointer_hand_pane

0x3186,	// (0x00011497) phob_pre_status_pane_g5

0x92a0,	// (0x000175b1) cams_zoom_pane_ParamLimits

0x92a0,	// (0x000175b1) image_vga_pane_ParamLimits

0x9997,	// (0x00017ca8) main_camera_pane_g1_ParamLimits

0x9997,	// (0x00017ca8) main_camera_pane_g2_ParamLimits

0x9997,	// (0x00017ca8) main_camera_pane_g3_ParamLimits

0x9997,	// (0x00017ca8) main_camera_pane_g4_ParamLimits

0x9997,	// (0x00017ca8) main_camera_pane_g5_ParamLimits

0x9997,	// (0x00017ca8) main_camera_pane_g6_ParamLimits

0x9997,	// (0x00017ca8) main_camera_pane_g7_ParamLimits

0xf180,	// (0x0001d491) main_camera_pane_g_ParamLimits

0x99e7,	// (0x00017cf8) main_camera_pane_t1_ParamLimits

0x99e7,	// (0x00017cf8) main_camera_pane_t2_ParamLimits

0xf191,	// (0x0001d4a2) main_camera_pane_t_ParamLimits

0x991c,	// (0x00017c2d) bg_popup_preview_window_pane_cp01_ParamLimits

0x991c,	// (0x00017c2d) bg_popup_preview_window_pane_cp01

0xab69,	// (0x00018e7a) popup_phob_thumbnail2_window_g1_ParamLimits

0xab69,	// (0x00018e7a) popup_phob_thumbnail2_window_g1

0x96c1,	// (0x000179d2) call2_cli_visual_pane

0x2ed3,	// (0x000111e4) popup_call2_audio_conf_window_ParamLimits

0x2ed3,	// (0x000111e4) popup_call2_audio_conf_window

0x2ef3,	// (0x00011204) popup_call2_audio_first_window_ParamLimits

0x2ef3,	// (0x00011204) popup_call2_audio_first_window

0x2f89,	// (0x0001129a) popup_call2_audio_in_window_ParamLimits

0x2f89,	// (0x0001129a) popup_call2_audio_in_window

0x2fd1,	// (0x000112e2) popup_call2_audio_out_window_ParamLimits

0x2fd1,	// (0x000112e2) popup_call2_audio_out_window

0x303b,	// (0x0001134c) popup_call2_audio_second_window_ParamLimits

0x303b,	// (0x0001134c) popup_call2_audio_second_window

0x30a1,	// (0x000113b2) popup_call2_audio_wait_window_ParamLimits

0x30a1,	// (0x000113b2) popup_call2_audio_wait_window

0x96c1,	// (0x000179d2) bg_popup_call2_act_pane_cp03

0x98fe,	// (0x00017c0f) list_conf_pane_cp

0xab75,	// (0x00018e86) popup_call2_audio_conf_window_t1

0xab83,	// (0x00018e94) list_single_graphic_popup_conf2_pane_ParamLimits

0xab83,	// (0x00018e94) list_single_graphic_popup_conf2_pane

0xa457,	// (0x00018768) list_highlight_pane_cp04

0xab96,	// (0x00018ea7) list_single_graphic_popup_conf2_pane_g1

0xa468,	// (0x00018779) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf44c,	// (0x0001d75d) list_single_graphic_popup_conf2_pane_g

0xaba0,	// (0x00018eb1) list_single_graphic_popup_conf2_pane_t1

0xabae,	// (0x00018ebf) bg_popup_call2_act_pane_cp01_ParamLimits

0xabae,	// (0x00018ebf) bg_popup_call2_act_pane_cp01

0xac38,	// (0x00018f49) call_type_pane_cp05_ParamLimits

0xac38,	// (0x00018f49) call_type_pane_cp05

0xac8c,	// (0x00018f9d) popup_call2_audio_second_window_g1_ParamLimits

0xac8c,	// (0x00018f9d) popup_call2_audio_second_window_g1

0xace0,	// (0x00018ff1) popup_call2_audio_second_window_g2_ParamLimits

0xace0,	// (0x00018ff1) popup_call2_audio_second_window_g2

0x0002,

0xf451,	// (0x0001d762) popup_call2_audio_second_window_g_ParamLimits

0xf451,	// (0x0001d762) popup_call2_audio_second_window_g

0xad45,	// (0x00019056) popup_call2_audio_second_window_t1_ParamLimits

0xad45,	// (0x00019056) popup_call2_audio_second_window_t1

0xae00,	// (0x00019111) popup_call2_audio_second_window_t2_ParamLimits

0xae00,	// (0x00019111) popup_call2_audio_second_window_t2

0xae53,	// (0x00019164) popup_call2_audio_second_window_t3_ParamLimits

0xae53,	// (0x00019164) popup_call2_audio_second_window_t3

0x0003,

0xf458,	// (0x0001d769) popup_call2_audio_second_window_t_ParamLimits

0xf458,	// (0x0001d769) popup_call2_audio_second_window_t

0x96c1,	// (0x000179d2) bg_popup_call2_in_pane_cp02

0x96cb,	// (0x000179dc) call_type_pane_cp04

0x30db,	// (0x000113ec) popup_call2_audio_wait_window_g1

0x30e3,	// (0x000113f4) popup_call2_audio_wait_window_g2

0x0001,

0xf461,	// (0x0001d772) popup_call2_audio_wait_window_g

0x96e3,	// (0x000179f4) popup_call2_audio_wait_window_t3

0xaf46,	// (0x00019257) bg_popup_call2_act_pane_ParamLimits

0xaf46,	// (0x00019257) bg_popup_call2_act_pane

0xb006,	// (0x00019317) call_type_pane_cp03_ParamLimits

0xb006,	// (0x00019317) call_type_pane_cp03

0xb06a,	// (0x0001937b) popup_call2_audio_first_window_g1_ParamLimits

0xb06a,	// (0x0001937b) popup_call2_audio_first_window_g1

0xb0da,	// (0x000193eb) popup_call2_audio_first_window_g2_ParamLimits

0xb0da,	// (0x000193eb) popup_call2_audio_first_window_g2

0xb13e,	// (0x0001944f) popup_call2_audio_first_window_g3_ParamLimits

0xb13e,	// (0x0001944f) popup_call2_audio_first_window_g3

0x0004,

0xf466,	// (0x0001d777) popup_call2_audio_first_window_g_ParamLimits

0xf466,	// (0x0001d777) popup_call2_audio_first_window_g

0xb1c6,	// (0x000194d7) popup_call2_audio_first_window_t1_ParamLimits

0xb1c6,	// (0x000194d7) popup_call2_audio_first_window_t1

0xb2c9,	// (0x000195da) popup_call2_audio_first_window_t4_ParamLimits

0xb2c9,	// (0x000195da) popup_call2_audio_first_window_t4

0xb3ac,	// (0x000196bd) popup_call2_audio_first_window_t5_ParamLimits

0xb3ac,	// (0x000196bd) popup_call2_audio_first_window_t5

0x0003,

0xf471,	// (0x0001d782) popup_call2_audio_first_window_t_ParamLimits

0xf471,	// (0x0001d782) popup_call2_audio_first_window_t

0x9914,	// (0x00017c25) bg_popup_call2_act_pane_g1

0xba03,	// (0x00019d14) popup_cale_lunar_info_window_t1

0xba11,	// (0x00019d22) popup_cale_lunar_info_window_t2

0xba1f,	// (0x00019d30) popup_cale_lunar_info_window_t3

0x96c1,	// (0x000179d2) bg_popup_call2_bubble_pane

0xb4ad,	// (0x000197be) bg_popup_call2_in_pane_cp01_ParamLimits

0xb4ad,	// (0x000197be) bg_popup_call2_in_pane_cp01

0x939d,	// (0x000176ae) call_type_pane_cp02

0x30eb,	// (0x000113fc) popup_call2_audio_out_window_g1_ParamLimits

0x30eb,	// (0x000113fc) popup_call2_audio_out_window_g1

0xb4f5,	// (0x00019806) popup_call2_audio_out_window_g2_ParamLimits

0xb4f5,	// (0x00019806) popup_call2_audio_out_window_g2

0x3117,	// (0x00011428) popup_call2_audio_out_window_g3_ParamLimits

0x3117,	// (0x00011428) popup_call2_audio_out_window_g3

0x0003,

0xf47a,	// (0x0001d78b) popup_call2_audio_out_window_g_ParamLimits

0xf47a,	// (0x0001d78b) popup_call2_audio_out_window_g

0xb52c,	// (0x0001983d) popup_call2_audio_out_window_t1_ParamLimits

0xb52c,	// (0x0001983d) popup_call2_audio_out_window_t1

0xb58b,	// (0x0001989c) popup_call2_audio_out_window_t2_ParamLimits

0xb58b,	// (0x0001989c) popup_call2_audio_out_window_t2

0xb5df,	// (0x000198f0) popup_call2_audio_out_window_t3_ParamLimits

0xb5df,	// (0x000198f0) popup_call2_audio_out_window_t3

0xb5f5,	// (0x00019906) popup_call2_audio_out_window_t4_ParamLimits

0xb5f5,	// (0x00019906) popup_call2_audio_out_window_t4

0xb60b,	// (0x0001991c) popup_call2_audio_out_window_t5_ParamLimits

0xb60b,	// (0x0001991c) popup_call2_audio_out_window_t5

0x0005,

0xf483,	// (0x0001d794) popup_call2_audio_out_window_t_ParamLimits

0xf483,	// (0x0001d794) popup_call2_audio_out_window_t

0xb66f,	// (0x00019980) bg_popup_call2_in_pane_ParamLimits

0xb66f,	// (0x00019980) bg_popup_call2_in_pane

0xb6cb,	// (0x000199dc) popup_call2_audio_in_window_g1_ParamLimits

0xb6cb,	// (0x000199dc) popup_call2_audio_in_window_g1

0xb703,	// (0x00019a14) popup_call2_audio_in_window_g2_ParamLimits

0xb703,	// (0x00019a14) popup_call2_audio_in_window_g2

0xb73b,	// (0x00019a4c) popup_call2_audio_in_window_g3_ParamLimits

0xb73b,	// (0x00019a4c) popup_call2_audio_in_window_g3

0x0003,

0xf490,	// (0x0001d7a1) popup_call2_audio_in_window_g_ParamLimits

0xf490,	// (0x0001d7a1) popup_call2_audio_in_window_g

0xb793,	// (0x00019aa4) popup_call2_audio_in_window_t1_ParamLimits

0xb793,	// (0x00019aa4) popup_call2_audio_in_window_t1

0xb813,	// (0x00019b24) popup_call2_audio_in_window_t2_ParamLimits

0xb813,	// (0x00019b24) popup_call2_audio_in_window_t2

0xb893,	// (0x00019ba4) popup_call2_audio_in_window_t3_ParamLimits

0xb893,	// (0x00019ba4) popup_call2_audio_in_window_t3

0xb8ad,	// (0x00019bbe) popup_call2_audio_in_window_t4_ParamLimits

0xb8ad,	// (0x00019bbe) popup_call2_audio_in_window_t4

0xb8bf,	// (0x00019bd0) popup_call2_audio_in_window_t5_ParamLimits

0xb8bf,	// (0x00019bd0) popup_call2_audio_in_window_t5

0xb8d1,	// (0x00019be2) popup_call2_audio_in_window_t6_ParamLimits

0xb8d1,	// (0x00019be2) popup_call2_audio_in_window_t6

0x0005,

0xf499,	// (0x0001d7aa) popup_call2_audio_in_window_t_ParamLimits

0xf499,	// (0x0001d7aa) popup_call2_audio_in_window_t

0x9914,	// (0x00017c25) bg_popup_call2_in_pane_g1

0xba2d,	// (0x00019d3e) popup_cale_lunar_info_window_t4

0x0003,

0xf50f,	// (0x0001d820) popup_cale_lunar_info_window_t

0x991c,	// (0x00017c2d) bg_popup_call2_rect_pane_ParamLimits

0x991c,	// (0x00017c2d) bg_popup_call2_rect_pane

0x96c1,	// (0x000179d2) call2_cli_visual_graphic_pane

0x96c1,	// (0x000179d2) call2_cli_visual_text_pane

0xbb7e,	// (0x00019e8f) smil_status_volume_pane_g3

0x0002,

0x9934,	// (0x00017c45) call2_cli_visual_graphic_pane_g1

0x9934,	// (0x00017c45) call2_cli_visual_graphic_pane_g2

0x9934,	// (0x00017c45) call2_cli_visual_graphic_pane_g3

0x0002,

0xf4a6,	// (0x0001d7b7) call2_cli_visual_graphic_pane_g

0xb8e3,	// (0x00019bf4) bg_popup_call2_rect_pane_g1

0x9b59,	// (0x00017e6a) bg_popup_call2_rect_pane_g2

0xb8eb,	// (0x00019bfc) bg_popup_call2_rect_pane_g3

0xb8f3,	// (0x00019c04) bg_popup_call2_rect_pane_g4

0xb8fb,	// (0x00019c0c) bg_popup_call2_rect_pane_g5

0xb903,	// (0x00019c14) bg_popup_call2_rect_pane_g6

0xb90b,	// (0x00019c1c) bg_popup_call2_rect_pane_g7

0xb913,	// (0x00019c24) bg_popup_call2_rect_pane_g8

0xb91b,	// (0x00019c2c) bg_popup_call2_rect_pane_g9

0x0008,

0xf4ad,	// (0x0001d7be) bg_popup_call2_rect_pane_g

0xb923,	// (0x00019c34) bg_popup_call2_bubble_pane_g1

0xb92b,	// (0x00019c3c) bg_popup_call2_bubble_pane_g2

0xb933,	// (0x00019c44) bg_popup_call2_bubble_pane_g3

0xb93b,	// (0x00019c4c) bg_popup_call2_bubble_pane_g4

0xb943,	// (0x00019c54) bg_popup_call2_bubble_pane_g5

0xb94b,	// (0x00019c5c) bg_popup_call2_bubble_pane_g6

0xb953,	// (0x00019c64) bg_popup_call2_bubble_pane_g7

0xb95b,	// (0x00019c6c) bg_popup_call2_bubble_pane_g8

0xb963,	// (0x00019c74) bg_popup_call2_bubble_pane_g9

0x0008,

0xf4c0,	// (0x0001d7d1) bg_popup_call2_bubble_pane_g

0x0f0e,	// (0x0000f21f) aid_cale_week_size_cell_pane

0x14be,	// (0x0000f7cf) aid_cams_cif_uncrop_pane_ParamLimits

0x14be,	// (0x0000f7cf) aid_cams_cif_uncrop_pane

0x92a0,	// (0x000175b1) aid_cams_size_cell_ParamLimits

0x92a0,	// (0x000175b1) aid_cams_size_cell

0x92a0,	// (0x000175b1) grid_cams_pane_ParamLimits

0x92a0,	// (0x000175b1) linegrid_cams_pane_ParamLimits

0x16dc,	// (0x0000f9ed) call_video_pane_t1

0x16fa,	// (0x0000fa0b) call_video_pane_t2

0x0001,

0xf1dd,	// (0x0001d4ee) call_video_pane_t

0x1b20,	// (0x0000fe31) aid_cale_month_size_cell_pane_ParamLimits

0x1b20,	// (0x0000fe31) aid_cale_month_size_cell_pane

0xf553,	// (0x0001d864) smil_status_volume_pane_g

0xbb8b,	// (0x00019e9c) volume_smil_pane_ParamLimits

0x9243,	// (0x00017554) aid_popup2_width_pane

0x0e73,	// (0x0000f184) cell_qdial_pane_g4_ParamLimits

0x0e73,	// (0x0000f184) cell_qdial_pane_g4

0x26e2,	// (0x000109f3) aid_blid_cardinal_pane_ParamLimits

0x26ee,	// (0x000109ff) aid_blid_destination_pane_ParamLimits

0x26ee,	// (0x000109ff) aid_blid_destination_pane

0x991c,	// (0x00017c2d) bg_popup_call_poc_act_pane_ParamLimits

0x991c,	// (0x00017c2d) bg_popup_call_poc_act_pane

0x991c,	// (0x00017c2d) bg_popup_call_poc_inact_pane_ParamLimits

0x991c,	// (0x00017c2d) bg_popup_call_poc_inact_pane

0xb96b,	// (0x00019c7c) bg_popup_call_poc_act_pane_g1

0xb973,	// (0x00019c84) bg_popup_call_poc_act_pane_g2

0xb97b,	// (0x00019c8c) bg_popup_call_poc_act_pane_g3

0xb93b,	// (0x00019c4c) bg_popup_call_poc_act_pane_g4

0xb943,	// (0x00019c54) bg_popup_call_poc_act_pane_g5

0xb983,	// (0x00019c94) bg_popup_call_poc_act_pane_g6

0xb953,	// (0x00019c64) bg_popup_call_poc_act_pane_g7

0xb98b,	// (0x00019c9c) bg_popup_call_poc_act_pane_g8

0x96c1,	// (0x000179d2) main_usb_pane

0xba97,	// (0x00019da8) popup_cale_lunar_info_window

0x19c6,	// (0x0000fcd7) im_reading_pane_t1_ParamLimits

0x9d55,	// (0x00018066) list_im_pane_ParamLimits

0x9d66,	// (0x00018077) scroll_pane_cp07_ParamLimits

0x96c1,	// (0x000179d2) grid_highlight_pane_cp012

0x991c,	// (0x00017c2d) mup_scale_pane_ParamLimits

0x9997,	// (0x00017ca8) main_usb_pane_g1_ParamLimits

0x9997,	// (0x00017ca8) main_usb_pane_g1

0x9997,	// (0x00017ca8) main_usb_pane_g2_ParamLimits

0x9997,	// (0x00017ca8) main_usb_pane_g2

0x0001,

0xf1bc,	// (0x0001d4cd) main_usb_pane_g_ParamLimits

0xf1bc,	// (0x0001d4cd) main_usb_pane_g

0x99e7,	// (0x00017cf8) main_usb_pane_t1_ParamLimits

0x99e7,	// (0x00017cf8) main_usb_pane_t1

0x99e7,	// (0x00017cf8) main_usb_pane_t2_ParamLimits

0x99e7,	// (0x00017cf8) main_usb_pane_t2

0x99e7,	// (0x00017cf8) main_usb_pane_t3_ParamLimits

0x99e7,	// (0x00017cf8) main_usb_pane_t3

0x99e7,	// (0x00017cf8) main_usb_pane_t4_ParamLimits

0x99e7,	// (0x00017cf8) main_usb_pane_t4

0x99e7,	// (0x00017cf8) main_usb_pane_t5_ParamLimits

0x99e7,	// (0x00017cf8) main_usb_pane_t5

0x99e7,	// (0x00017cf8) main_usb_pane_t6_ParamLimits

0x99e7,	// (0x00017cf8) main_usb_pane_t6

0x0005,

0xf4fd,	// (0x0001d80e) main_usb_pane_t_ParamLimits

0x2691,	// (0x000109a2) aid_text_placing

0x269a,	// (0x000109ab) main_location2_pane_t1_ParamLimits

0x26ac,	// (0x000109bd) main_location2_pane_t2_ParamLimits

0x26be,	// (0x000109cf) main_location2_pane_t3_ParamLimits

0x26d0,	// (0x000109e1) main_location2_pane_t4_ParamLimits

0x26d0,	// (0x000109e1) main_location2_pane_t4

0xf319,	// (0x0001d62a) main_location2_pane_t_ParamLimits

0x994a,	// (0x00017c5b) find_pinb_pane_g2_ParamLimits

0x994a,	// (0x00017c5b) find_pinb_pane_g2

0x0001,

0xf095,	// (0x0001d3a6) find_pinb_pane_g_ParamLimits

0xf095,	// (0x0001d3a6) find_pinb_pane_g

0x9956,	// (0x00017c67) find_pinb_pane_t1_ParamLimits

0x9968,	// (0x00017c79) find_pinb_pane_t2_ParamLimits

0xf09a,	// (0x0001d3ab) find_pinb_pane_t_ParamLimits

0x96c1,	// (0x000179d2) main_call3_pane

0x2007,	// (0x00010318) cale_month_day_heading_pane_t1_ParamLimits

0x2049,	// (0x0001035a) cale_month_day_heading_pane_t2_ParamLimits

0x207e,	// (0x0001038f) cale_month_day_heading_pane_t3_ParamLimits

0x20b3,	// (0x000103c4) cale_month_day_heading_pane_t4_ParamLimits

0x20f0,	// (0x00010401) cale_month_day_heading_pane_t5_ParamLimits

0x2135,	// (0x00010446) cale_month_day_heading_pane_t6_ParamLimits

0x217a,	// (0x0001048b) cale_month_day_heading_pane_t7_ParamLimits

0xf215,	// (0x0001d526) cale_month_day_heading_pane_t_ParamLimits

0x9fbc,	// (0x000182cd) smil_status_volume_pane

0x2c19,	// (0x00010f2a) postcard_address_pane_ParamLimits

0x2c19,	// (0x00010f2a) postcard_address_pane

0x2c2b,	// (0x00010f3c) postcard_message_pane_ParamLimits

0x2c2b,	// (0x00010f3c) postcard_message_pane

0x3143,	// (0x00011454) call2_cli_visual_pane_t1_ParamLimits

0x3143,	// (0x00011454) call2_cli_visual_pane_t1

0xbbb8,	// (0x00019ec9) postcard_message_pane_t1_ParamLimits

0xbbb8,	// (0x00019ec9) postcard_message_pane_t1

0xbba0,	// (0x00019eb1) postcard_address_pane_t1_ParamLimits

0xbba0,	// (0x00019eb1) postcard_address_pane_t1

0x3839,	// (0x00011b4a) popup_call3_audio_in_window_ParamLimits

0x3839,	// (0x00011b4a) popup_call3_audio_in_window

0x36c4,	// (0x000119d5) bg_popup_call3_in_pane_ParamLimits

0x36c4,	// (0x000119d5) bg_popup_call3_in_pane

0x373a,	// (0x00011a4b) popup_call3_audio_in_window_g1_ParamLimits

0x373a,	// (0x00011a4b) popup_call3_audio_in_window_g1

0x375a,	// (0x00011a6b) popup_call3_audio_in_window_g2_ParamLimits

0x375a,	// (0x00011a6b) popup_call3_audio_in_window_g2

0x377a,	// (0x00011a8b) popup_call3_audio_in_window_g3_ParamLimits

0x377a,	// (0x00011a8b) popup_call3_audio_in_window_g3

0x0003,

0xf55a,	// (0x0001d86b) popup_call3_audio_in_window_g_ParamLimits

0xf55a,	// (0x0001d86b) popup_call3_audio_in_window_g

0x37ab,	// (0x00011abc) popup_call3_audio_in_window_t1_ParamLimits

0x37ab,	// (0x00011abc) popup_call3_audio_in_window_t1

0x37e9,	// (0x00011afa) popup_call3_audio_in_window_t2_ParamLimits

0x37e9,	// (0x00011afa) popup_call3_audio_in_window_t2

0x3827,	// (0x00011b38) popup_call3_audio_in_window_t3_ParamLimits

0x3827,	// (0x00011b38) popup_call3_audio_in_window_t3

0x0002,

0xf563,	// (0x0001d874) popup_call3_audio_in_window_t_ParamLimits

0xf563,	// (0x0001d874) popup_call3_audio_in_window_t

0x9c8a,	// (0x00017f9b) bg_popup_call3_rect_pane

0xb8e3,	// (0x00019bf4) bg_popup_call3_rect_pane_g1

0x9b59,	// (0x00017e6a) bg_popup_call3_rect_pane_g2

0xb8eb,	// (0x00019bfc) bg_popup_call3_rect_pane_g3

0xb8f3,	// (0x00019c04) bg_popup_call3_rect_pane_g4

0xb8fb,	// (0x00019c0c) bg_popup_call3_rect_pane_g5

0xb903,	// (0x00019c14) bg_popup_call3_rect_pane_g6

0xb90b,	// (0x00019c1c) bg_popup_call3_rect_pane_g7

0x9231,	// (0x00017542) mup_visualizer_osc_pane

0x9231,	// (0x00017542) mup_visualizer_spec_pane

0x36f4,	// (0x00011a05) call3_video_qcif_pane_ParamLimits

0x36f4,	// (0x00011a05) call3_video_qcif_pane

0x3707,	// (0x00011a18) call3_video_qcif_uncrop_pane_ParamLimits

0x3707,	// (0x00011a18) call3_video_qcif_uncrop_pane

0x3715,	// (0x00011a26) call3_video_subqcif_pane_ParamLimits

0x3715,	// (0x00011a26) call3_video_subqcif_pane

0x3729,	// (0x00011a3a) call3_video_subqcif_uncrop_pane_ParamLimits

0x3729,	// (0x00011a3a) call3_video_subqcif_uncrop_pane

0x379a,	// (0x00011aab) popup_call3_audio_in_window_g4_ParamLimits

0x379a,	// (0x00011aab) popup_call3_audio_in_window_g4

0x9231,	// (0x00017542) mup_spec_half_pane

0x9231,	// (0x00017542) mup_spec_half_pane_cp

0x9231,	// (0x00017542) mup_osc_middle_pane

0x99dd,	// (0x00017cee) mup_visualizer_osc_pane_g1

0xbb31,	// (0x00019e42) mup_spec_bar_pane_ParamLimits

0xbb31,	// (0x00019e42) mup_spec_bar_pane

0x99dd,	// (0x00017cee) mup_spec_bar_pane_g1

0x99dd,	// (0x00017cee) mup_spec_bar_pane_g2

0x0001,

0xf0af,	// (0x0001d3c0) mup_spec_bar_pane_g

0x0f0e,	// (0x0000f21f) aid_cale_week_size_cell_pane_ParamLimits

0x0f28,	// (0x0000f239) bg_cale_heading_pane_ParamLimits

0x9bec,	// (0x00017efd) bg_cale_pane_cp01_ParamLimits

0x0f40,	// (0x0000f251) cale_week_corner_pane_ParamLimits

0x0f5f,	// (0x0000f270) cale_week_day_heading_pane_ParamLimits

0x0f7c,	// (0x0000f28d) cale_week_scroll_pane_g1_ParamLimits

0x0f8f,	// (0x0000f2a0) cale_week_scroll_pane_g2_ParamLimits

0x0fa7,	// (0x0000f2b8) cale_week_scroll_pane_g3_ParamLimits

0x0fbf,	// (0x0000f2d0) cale_week_scroll_pane_g4_ParamLimits

0x0fd7,	// (0x0000f2e8) cale_week_scroll_pane_g5_ParamLimits

0x0ff7,	// (0x0000f308) cale_week_scroll_pane_g6_ParamLimits

0x1017,	// (0x0000f328) cale_week_scroll_pane_g7_ParamLimits

0x1037,	// (0x0000f348) cale_week_scroll_pane_g8_ParamLimits

0x105b,	// (0x0000f36c) cale_week_scroll_pane_g9_ParamLimits

0x1073,	// (0x0000f384) cale_week_scroll_pane_g10_ParamLimits

0x108b,	// (0x0000f39c) cale_week_scroll_pane_g11_ParamLimits

0x10a3,	// (0x0000f3b4) cale_week_scroll_pane_g12_ParamLimits

0x10bb,	// (0x0000f3cc) cale_week_scroll_pane_g13_ParamLimits

0x10bb,	// (0x0000f3cc) cale_week_scroll_pane_g14_ParamLimits

0x10bb,	// (0x0000f3cc) cale_week_scroll_pane_g15_ParamLimits

0xf126,	// (0x0001d437) cale_week_scroll_pane_g_ParamLimits

0x10f7,	// (0x0000f408) cale_week_time_pane_ParamLimits

0x111b,	// (0x0000f42c) grid_cale_week_pane_ParamLimits

0x9c09,	// (0x00017f1a) listscroll_cale_week_pane_t1

0x9c1b,	// (0x00017f2c) scroll_pane_cp08_ParamLimits

0x1b80,	// (0x0000fe91) cale_month_corner_pane_ParamLimits

0x9f86,	// (0x00018297) cale_month_pane_t1

0x1f9a,	// (0x000102ab) cale_month_week_pane_ParamLimits

0x24e6,	// (0x000107f7) popup_call_status_window_g1_ParamLimits

0x24fa,	// (0x0001080b) popup_call_status_window_g2_ParamLimits

0x250e,	// (0x0001081f) popup_call_status_window_g3_ParamLimits

0xf2a0,	// (0x0001d5b1) popup_call_status_window_g_ParamLimits

0xa374,	// (0x00018685) aid_call2_pane

0x2a35,	// (0x00010d46) msg_header_pane_g1

0x2c19,	// (0x00010f2a) postcard_address2_pane_ParamLimits

0x2c19,	// (0x00010f2a) postcard_address2_pane

0x2c2b,	// (0x00010f3c) postcard_message2_pane_ParamLimits

0x2c2b,	// (0x00010f3c) postcard_message2_pane

0x3694,	// (0x000119a5) message2_row_pane_ParamLimits

0x3694,	// (0x000119a5) message2_row_pane

0x36b1,	// (0x000119c2) address2_row_pane_ParamLimits

0x36b1,	// (0x000119c2) address2_row_pane

0xbafe,	// (0x00019e0f) postcard_message2_row_pane_g1

0xbb06,	// (0x00019e17) postcard_message2_row_pane_t1

0xbafe,	// (0x00019e0f) address2_row_pane_g1

0xbb06,	// (0x00019e17) address2_row_pane_t1

0x1455,	// (0x0000f766) aid_size_cell_vorec

0x96c1,	// (0x000179d2) main_rss_pane

0xbb14,	// (0x00019e25) rss_list_single_pane_ParamLimits

0xbb14,	// (0x00019e25) rss_list_single_pane

0xbb22,	// (0x00019e33) rss_list_single_pane_t1

0xbb22,	// (0x00019e33) rss_list_single_pane_t2

0x0001,

0xf54e,	// (0x0001d85f) rss_list_single_pane_t

0x96c1,	// (0x000179d2) main_camera2_pane

0x96c1,	// (0x000179d2) main_video2_pane

0xbbd4,	// (0x00019ee5) cams_zoom_pane_cp2_ParamLimits

0xbbd4,	// (0x00019ee5) cams_zoom_pane_cp2

0xbbd4,	// (0x00019ee5) image2_vga_pane_ParamLimits

0xbbd4,	// (0x00019ee5) image2_vga_pane

0xbbe2,	// (0x00019ef3) main_camera2_pane_g1_ParamLimits

0xbbe2,	// (0x00019ef3) main_camera2_pane_g1

0xbbe2,	// (0x00019ef3) main_camera2_pane_g2_ParamLimits

0xbbe2,	// (0x00019ef3) main_camera2_pane_g2

0xbbe2,	// (0x00019ef3) main_camera2_pane_g3_ParamLimits

0xbbe2,	// (0x00019ef3) main_camera2_pane_g3

0xbbe2,	// (0x00019ef3) main_camera2_pane_g4_ParamLimits

0xbbe2,	// (0x00019ef3) main_camera2_pane_g4

0xbbe2,	// (0x00019ef3) main_camera2_pane_g5_ParamLimits

0xbbe2,	// (0x00019ef3) main_camera2_pane_g5

0xbbe2,	// (0x00019ef3) main_camera2_pane_g6_ParamLimits

0xbbe2,	// (0x00019ef3) main_camera2_pane_g6

0xbbe2,	// (0x00019ef3) main_camera2_pane_g7_ParamLimits

0xbbe2,	// (0x00019ef3) main_camera2_pane_g7

0xbbe2,	// (0x00019ef3) main_camera2_pane_g8_ParamLimits

0xbbe2,	// (0x00019ef3) main_camera2_pane_g8

0x0008,

0xf56a,	// (0x0001d87b) main_camera2_pane_g_ParamLimits

0xf56a,	// (0x0001d87b) main_camera2_pane_g

0x385b,	// (0x00011b6c) main_camera2_pane_t1_ParamLimits

0x385b,	// (0x00011b6c) main_camera2_pane_t1

0x385b,	// (0x00011b6c) main_camera2_pane_t2_ParamLimits

0x385b,	// (0x00011b6c) main_camera2_pane_t2

0x385b,	// (0x00011b6c) main_camera2_pane_t3_ParamLimits

0x385b,	// (0x00011b6c) main_camera2_pane_t3

0x385b,	// (0x00011b6c) main_camera2_pane_t4_ParamLimits

0x385b,	// (0x00011b6c) main_camera2_pane_t4

0x0006,

0xf57d,	// (0x0001d88e) main_camera2_pane_t_ParamLimits

0xf57d,	// (0x0001d88e) main_camera2_pane_t

0xbc04,	// (0x00019f15) cams_zoom_pane_cp4_ParamLimits

0xbc04,	// (0x00019f15) cams_zoom_pane_cp4

0xbc12,	// (0x00019f23) image2_cif_pane_ParamLimits

0xbc12,	// (0x00019f23) image2_cif_pane

0x92a0,	// (0x000175b1) image2_subqcif_pane_ParamLimits

0x92a0,	// (0x000175b1) image2_subqcif_pane

0x386f,	// (0x00011b80) main_video2_pane_g1_ParamLimits

0x386f,	// (0x00011b80) main_video2_pane_g1

0x386f,	// (0x00011b80) main_video2_pane_g2_ParamLimits

0x386f,	// (0x00011b80) main_video2_pane_g2

0x386f,	// (0x00011b80) main_video2_pane_g3_ParamLimits

0x386f,	// (0x00011b80) main_video2_pane_g3

0x386f,	// (0x00011b80) main_video2_pane_g4_ParamLimits

0x386f,	// (0x00011b80) main_video2_pane_g4

0x386f,	// (0x00011b80) main_video2_pane_g5_ParamLimits

0x386f,	// (0x00011b80) main_video2_pane_g5

0x386f,	// (0x00011b80) main_video2_pane_g6_ParamLimits

0x386f,	// (0x00011b80) main_video2_pane_g6

0x0005,

0xf58c,	// (0x0001d89d) main_video2_pane_g_ParamLimits

0xf58c,	// (0x0001d89d) main_video2_pane_g

0x387d,	// (0x00011b8e) main_video2_pane_t1_ParamLimits

0x387d,	// (0x00011b8e) main_video2_pane_t1

0x387d,	// (0x00011b8e) main_video2_pane_t2_ParamLimits

0x387d,	// (0x00011b8e) main_video2_pane_t2

0x387d,	// (0x00011b8e) main_video2_pane_t3_ParamLimits

0x387d,	// (0x00011b8e) main_video2_pane_t3

0x0002,

0xf599,	// (0x0001d8aa) main_video2_pane_t_ParamLimits

0xf599,	// (0x0001d8aa) main_video2_pane_t

0x31e8,	// (0x000114f9) call_muted_g2

0x0001,

0xf540,	// (0x0001d851) call_muted_g

0x96c1,	// (0x000179d2) main_mup2_pane

0xa7f9,	// (0x00018b0a) main_mup2_pane_g1_ParamLimits

0xa7f9,	// (0x00018b0a) main_mup2_pane_g1

0xa7f9,	// (0x00018b0a) main_mup2_pane_g2_ParamLimits

0xa7f9,	// (0x00018b0a) main_mup2_pane_g2

0x99dd,	// (0x00017cee) main_mup_pane_g13_cp1

0x9231,	// (0x00017542) mup_volume_pane_cp1

0xa7f9,	// (0x00018b0a) main_mup2_pane_g4_ParamLimits

0xa7f9,	// (0x00018b0a) main_mup2_pane_g4

0xa7f9,	// (0x00018b0a) main_mup2_pane_g5_ParamLimits

0xa7f9,	// (0x00018b0a) main_mup2_pane_g5

0xa7f9,	// (0x00018b0a) main_mup2_pane_g6_ParamLimits

0xa7f9,	// (0x00018b0a) main_mup2_pane_g6

0xa7f9,	// (0x00018b0a) main_mup2_pane_g7_ParamLimits

0xa7f9,	// (0x00018b0a) main_mup2_pane_g7

0x0006,

0xf5a0,	// (0x0001d8b1) main_mup2_pane_g_ParamLimits

0xf5a0,	// (0x0001d8b1) main_mup2_pane_g

0xa807,	// (0x00018b18) main_mup2_pane_t1_ParamLimits

0xa807,	// (0x00018b18) main_mup2_pane_t1

0xa807,	// (0x00018b18) main_mup2_pane_t2_ParamLimits

0xa807,	// (0x00018b18) main_mup2_pane_t2

0xa807,	// (0x00018b18) main_mup2_pane_t3_ParamLimits

0xa807,	// (0x00018b18) main_mup2_pane_t3

0xa807,	// (0x00018b18) main_mup2_pane_t4_ParamLimits

0xa807,	// (0x00018b18) main_mup2_pane_t4

0xa807,	// (0x00018b18) main_mup2_pane_t5_ParamLimits

0xa807,	// (0x00018b18) main_mup2_pane_t5

0xa807,	// (0x00018b18) main_mup2_pane_t6_ParamLimits

0xa807,	// (0x00018b18) main_mup2_pane_t6

0x0005,

0xf5af,	// (0x0001d8c0) main_mup2_pane_t_ParamLimits

0xf5af,	// (0x0001d8c0) main_mup2_pane_t

0xa81b,	// (0x00018b2c) mup2_visualizer_pane_ParamLimits

0xa81b,	// (0x00018b2c) mup2_visualizer_pane

0xa81b,	// (0x00018b2c) mup_progress_pane_cp_ParamLimits

0xa81b,	// (0x00018b2c) mup_progress_pane_cp

0xbc20,	// (0x00019f31) mup_volume_pane_cp_ParamLimits

0xbc20,	// (0x00019f31) mup_volume_pane_cp

0x9997,	// (0x00017ca8) mup2_visualizer_pane_g1_ParamLimits

0x9997,	// (0x00017ca8) mup2_visualizer_pane_g1

0x99a5,	// (0x00017cb6) mup2_visualizer_pane_g2_ParamLimits

0x99a5,	// (0x00017cb6) mup2_visualizer_pane_g2

0x99a5,	// (0x00017cb6) mup2_visualizer_pane_g3_ParamLimits

0x99a5,	// (0x00017cb6) mup2_visualizer_pane_g3

0x0002,

0xf09f,	// (0x0001d3b0) mup2_visualizer_pane_g_ParamLimits

0xf09f,	// (0x0001d3b0) mup2_visualizer_pane_g

0x9231,	// (0x00017542) aid_size_cell_fmradio

0x339a,	// (0x000116ab) aid_height_parent_landcape

0x9de4,	// (0x000180f5) wml_content_pane_cp

0x9dec,	// (0x000180fd) wml_tabs_pane

0x9df5,	// (0x00018106) popup_wml_miniature_window

0x9dfd,	// (0x0001810e) scroll_pane_cp021

0x9e11,	// (0x00018122) wml_content_pane_comp8

0x96c1,	// (0x000179d2) bg_popup_sub_pane_cp05

0xbc36,	// (0x00019f47) popup_wml_miniature_window_g1

0xbc3e,	// (0x00019f4f) wml_miniature_view_pane

0x3891,	// (0x00011ba2) aid_size_wml_view

0x3899,	// (0x00011baa) wml_miniature_view_pane_g1

0x38a2,	// (0x00011bb3) wml_miniature_view_pane_g2

0x38ab,	// (0x00011bbc) wml_miniature_view_pane_g3

0x38b3,	// (0x00011bc4) wml_miniature_view_pane_g4

0x38bb,	// (0x00011bcc) wml_miniature_view_pane_g5

0x38c3,	// (0x00011bd4) wml_miniature_view_pane_g6

0x38cb,	// (0x00011bdc) wml_miniature_view_pane_g7

0x38d3,	// (0x00011be4) wml_miniature_view_pane_g8

0x0007,

0xf5bc,	// (0x0001d8cd) wml_miniature_view_pane_g

0xbc46,	// (0x00019f57) background_graphic_ParamLimits

0xbc46,	// (0x00019f57) background_graphic

0xbc52,	// (0x00019f63) wml_tabs_2_pane

0xbc5b,	// (0x00019f6c) wml_tabs_3_pane_ParamLimits

0xbc5b,	// (0x00019f6c) wml_tabs_3_pane

0xbc6d,	// (0x00019f7e) wml_tabs_4_pane_ParamLimits

0xbc6d,	// (0x00019f7e) wml_tabs_4_pane

0xbc83,	// (0x00019f94) wml_tabs_5_pane_ParamLimits

0xbc83,	// (0x00019f94) wml_tabs_5_pane

0xbc9d,	// (0x00019fae) wml_tabs_pane_g2_ParamLimits

0xbc9d,	// (0x00019fae) wml_tabs_pane_g2

0xbcb2,	// (0x00019fc3) wml_tabs_pane_g3_ParamLimits

0xbcb2,	// (0x00019fc3) wml_tabs_pane_g3

0xbcc7,	// (0x00019fd8) wml_tabs_2_active_pane_ParamLimits

0xbcc7,	// (0x00019fd8) wml_tabs_2_active_pane

0xbcc7,	// (0x00019fd8) wml_tabs_2_passive_pane_ParamLimits

0xbcc7,	// (0x00019fd8) wml_tabs_2_passive_pane

0x38db,	// (0x00011bec) wml_tabs_3_active_pane_cp_ParamLimits

0x38db,	// (0x00011bec) wml_tabs_3_active_pane_cp

0x38f0,	// (0x00011c01) wml_tabs_3_passive_pane_ParamLimits

0x38f0,	// (0x00011c01) wml_tabs_3_passive_pane

0x3903,	// (0x00011c14) wml_tabs_3_passive_pane_cp_ParamLimits

0x3903,	// (0x00011c14) wml_tabs_3_passive_pane_cp

0x391a,	// (0x00011c2b) tabs_4_active_pane

0x3922,	// (0x00011c33) tabs_4_passive_pane

0x392c,	// (0x00011c3d) tabs_4_passive_pane_cp

0x3934,	// (0x00011c45) tabs_4_passive_pane_cp2

0x315e,	// (0x0001146f) aid_height_text

0xa81b,	// (0x00018b2c) mup_volume_cont_pane_ParamLimits

0xa81b,	// (0x00018b2c) mup_volume_cont_pane

0x9231,	// (0x00017542) aid_size_cell_pinb

0x9231,	// (0x00017542) aid_size_list_pinb

0xa81b,	// (0x00018b2c) mup2_volume_cont_pane_ParamLimits

0xa81b,	// (0x00018b2c) mup2_volume_cont_pane

0xbcd5,	// (0x00019fe6) mup2_volume_cont_pane_g1_ParamLimits

0xbcd5,	// (0x00019fe6) mup2_volume_cont_pane_g1

0x09cc,	// (0x0000ecdd) aid_size_cell_touch_ParamLimits

0x09cc,	// (0x0000ecdd) aid_size_cell_touch

0x0bf8,	// (0x0000ef09) touch_pane_ParamLimits

0x0bf8,	// (0x0000ef09) touch_pane

0x9231,	// (0x00017542) main_rss2_pane

0xbcf4,	// (0x0001a005) listscroll_rss2_pane

0xbcfd,	// (0x0001a00e) rss2_navigation_pane

0xbd05,	// (0x0001a016) list_rss2_pane

0xa4fc,	// (0x0001880d) scroll_pane_cp22

0xbd0d,	// (0x0001a01e) rss2_navigation_pane_g1

0xbd16,	// (0x0001a027) rss2_navigation_pane_g2

0xbd1e,	// (0x0001a02f) rss2_navigation_pane_g3

0x0002,

0xf5cd,	// (0x0001d8de) rss2_navigation_pane_g

0xbd26,	// (0x0001a037) rss2_navigation_pane_t1

0x393e,	// (0x00011c4f) rss2_list_single_pane_ParamLimits

0x393e,	// (0x00011c4f) rss2_list_single_pane

0xbd34,	// (0x0001a045) rss2_list_single_pane_t2

0xbd42,	// (0x0001a053) rss2_list_single_pane_t3_ParamLimits

0xbd42,	// (0x0001a053) rss2_list_single_pane_t3

0xbd5f,	// (0x0001a070) rss2_list_single_pane_t4

0x23c2,	// (0x000106d3) smil_status_pane_g1

0x92a0,	// (0x000175b1) main_image2_pane_ParamLimits

0x92a0,	// (0x000175b1) main_image2_pane

0xbbe2,	// (0x00019ef3) main_camera2_pane_g9_ParamLimits

0xbbe2,	// (0x00019ef3) main_camera2_pane_g9

0x385b,	// (0x00011b6c) main_camera2_pane_t5_ParamLimits

0x385b,	// (0x00011b6c) main_camera2_pane_t5

0xbbf0,	// (0x00019f01) main_camera2_pane_t6_ParamLimits

0xbbf0,	// (0x00019f01) main_camera2_pane_t6

0x3954,	// (0x00011c65) main_image2_pane_g1_ParamLimits

0x3954,	// (0x00011c65) main_image2_pane_g1

0x2e31,	// (0x00011142) smil2_video_pane_ParamLimits

0x2e31,	// (0x00011142) smil2_video_pane

0x924f,	// (0x00017560) aid_zoom_text_primary_cp

0x9296,	// (0x000175a7) popup_preview_fixed_window

0x9d4d,	// (0x0001805e) im_reading_pane_g1

0x384d,	// (0x00011b5e) cams2_bc_adjust_pane_cp_ParamLimits

0x384d,	// (0x00011b5e) cams2_bc_adjust_pane_cp

0xa81b,	// (0x00018b2c) cams2_bc_adjust_pane_ParamLimits

0xa81b,	// (0x00018b2c) cams2_bc_adjust_pane

0x99dd,	// (0x00017cee) cams2_bc_adjust_pane_g1

0x9231,	// (0x00017542) cams2_slider_pane

0x99dd,	// (0x00017cee) cams2_slider_pane_g1

0x99dd,	// (0x00017cee) cams2_slider_pane_g2

0x0006,

0xf5d4,	// (0x0001d8e5) cams2_slider_pane_g

0x0cc1,	// (0x0000efd2) calc_display_pane_ParamLimits

0x0ce6,	// (0x0000eff7) calc_paper_pane_ParamLimits

0x0d09,	// (0x0000f01a) grid_calc_pane_ParamLimits

0xa3d6,	// (0x000186e7) popup_clock_digital_window_t1_ParamLimits

0xaa13,	// (0x00018d24) main_image_pane_t1

0x0ca3,	// (0x0000efb4) aid_size_cell_calc_ParamLimits

0x0ca3,	// (0x0000efb4) aid_size_cell_calc

0x33e0,	// (0x000116f1) popup_blid_sat_info2_window_ParamLimits

0x33e0,	// (0x000116f1) popup_blid_sat_info2_window

0xbd6d,	// (0x0001a07e) aid_size_cell_blid

0xbc12,	// (0x00019f23) bg_popup_window_pane_cp07

0xbd8a,	// (0x0001a09b) grid_popup_blid_pane

0xbd94,	// (0x0001a0a5) heading_pane_cp05_ParamLimits

0xbd94,	// (0x0001a0a5) heading_pane_cp05

0xbe5e,	// (0x0001a16f) cell_popup_blid_pane_ParamLimits

0xbe5e,	// (0x0001a16f) cell_popup_blid_pane

0xbe82,	// (0x0001a193) cell_popup_blid_pane_g1

0xbe8a,	// (0x0001a19b) cell_popup_blid_pane_t1

0xa81b,	// (0x00018b2c) mup2_indicator_pane_ParamLimits

0xa81b,	// (0x00018b2c) mup2_indicator_pane

0x9231,	// (0x00017542) mup2_visualizer_osc_pane

0xbc20,	// (0x00019f31) mup2_visualizer_spec_pane_ParamLimits

0xbc20,	// (0x00019f31) mup2_visualizer_spec_pane

0x9231,	// (0x00017542) mup2_spec_half_pane

0x9231,	// (0x00017542) mup2_spec_half_pane_cp

0xbe98,	// (0x0001a1a9) mup2_spec_bar_pane_ParamLimits

0xbe98,	// (0x0001a1a9) mup2_spec_bar_pane

0x99dd,	// (0x00017cee) mup2_spec_bar_pane_g1

0xbeb7,	// (0x0001a1c8) mup2_spec_bar_pane_g2

0x0001,

0xf5fa,	// (0x0001d90b) mup2_spec_bar_pane_g

0x9231,	// (0x00017542) mup2_osc_middle_pane

0x99dd,	// (0x00017cee) mup2_visualizer_osc_pane_g1

0x92ce,	// (0x000175df) popup_number_entry_window_t1_ParamLimits

0x92e1,	// (0x000175f2) popup_number_entry_window_t2_ParamLimits

0x92f3,	// (0x00017604) popup_number_entry_window_t3_ParamLimits

0x0c4a,	// (0x0000ef5b) popup_number_entry_window_t5_ParamLimits

0x0c4a,	// (0x0000ef5b) popup_number_entry_window_t5

0xf040,	// (0x0001d351) popup_number_entry_window_t_ParamLimits

0x9305,	// (0x00017616) text_title_cp2_ParamLimits

0xa90b,	// (0x00018c1c) aid_hotspot_pointer_text2_pane

0xa931,	// (0x00018c42) main_viewer_pane_g9_ParamLimits

0xa931,	// (0x00018c42) main_viewer_pane_g9

0x9f86,	// (0x00018297) cale_month_pane_t1_ParamLimits

0x9ff1,	// (0x00018302) bg_cale_pane_ParamLimits

0xa009,	// (0x0001831a) list_cale_pane_ParamLimits

0xa01a,	// (0x0001832b) listscroll_cale_day_pane_t1

0xa02c,	// (0x0001833d) scroll_pane_cp09_ParamLimits

0x27bb,	// (0x00010acc) main_mup_eq_pane_t1_ParamLimits

0x27bb,	// (0x00010acc) main_mup_eq_pane_t1

0x27d5,	// (0x00010ae6) main_mup_eq_pane_t2_ParamLimits

0x27d5,	// (0x00010ae6) main_mup_eq_pane_t2

0x27ef,	// (0x00010b00) main_mup_eq_pane_t3_ParamLimits

0x27ef,	// (0x00010b00) main_mup_eq_pane_t3

0x280b,	// (0x00010b1c) main_mup_eq_pane_t4_ParamLimits

0x280b,	// (0x00010b1c) main_mup_eq_pane_t4

0x2827,	// (0x00010b38) main_mup_eq_pane_t5_ParamLimits

0x2827,	// (0x00010b38) main_mup_eq_pane_t5

0x2843,	// (0x00010b54) main_mup_eq_pane_t6_ParamLimits

0x2843,	// (0x00010b54) main_mup_eq_pane_t6

0x2857,	// (0x00010b68) main_mup_eq_pane_t7_ParamLimits

0x2857,	// (0x00010b68) main_mup_eq_pane_t7

0x286b,	// (0x00010b7c) main_mup_eq_pane_t8_ParamLimits

0x286b,	// (0x00010b7c) main_mup_eq_pane_t8

0x287f,	// (0x00010b90) main_mup_eq_pane_t9_ParamLimits

0x287f,	// (0x00010b90) main_mup_eq_pane_t9

0x2899,	// (0x00010baa) main_mup_eq_pane_t10_ParamLimits

0x2899,	// (0x00010baa) main_mup_eq_pane_t10

0x0009,

0xf39a,	// (0x0001d6ab) main_mup_eq_pane_t_ParamLimits

0xf39a,	// (0x0001d6ab) main_mup_eq_pane_t

0x2948,	// (0x00010c59) mup_equalizer_pane_cp5_ParamLimits

0x295c,	// (0x00010c6d) mup_equalizer_pane_cp6_ParamLimits

0x2970,	// (0x00010c81) mup_equalizer_pane_cp7_ParamLimits

0x9231,	// (0x00017542) main_gallery_pane

0xbb50,	// (0x00019e61) smil2_volume_pane

0xbb58,	// (0x00019e69) smil_status_volume_pane_g1_ParamLimits

0xbb6b,	// (0x00019e7c) smil_status_volume_pane_g2_ParamLimits

0xbb7e,	// (0x00019e8f) smil_status_volume_pane_g3_ParamLimits

0xf553,	// (0x0001d864) smil_status_volume_pane_g_ParamLimits

0xbc12,	// (0x00019f23) bg_popup_window_pane_cp07_ParamLimits

0xbd75,	// (0x0001a086) blid_firmament_pane

0x92a0,	// (0x000175b1) aid_size_cell_gallery_ParamLimits

0x92a0,	// (0x000175b1) aid_size_cell_gallery

0x92a0,	// (0x000175b1) grid_gallery_pane_ParamLimits

0x92a0,	// (0x000175b1) grid_gallery_pane

0xbc12,	// (0x00019f23) cell_gallery_pane_ParamLimits

0xbc12,	// (0x00019f23) cell_gallery_pane

0x92a0,	// (0x000175b1) bg_cell_gallery_focus_pane_ParamLimits

0x92a0,	// (0x000175b1) bg_cell_gallery_focus_pane

0x9997,	// (0x00017ca8) cell_gallery_pane_g1_ParamLimits

0x9997,	// (0x00017ca8) cell_gallery_pane_g1

0x9997,	// (0x00017ca8) cell_gallery_pane_g2_ParamLimits

0x9997,	// (0x00017ca8) cell_gallery_pane_g2

0x9997,	// (0x00017ca8) cell_gallery_pane_g3_ParamLimits

0x9997,	// (0x00017ca8) cell_gallery_pane_g3

0x99a5,	// (0x00017cb6) cell_gallery_pane_g4_ParamLimits

0x99a5,	// (0x00017cb6) cell_gallery_pane_g4

0x0003,

0xf5ff,	// (0x0001d910) cell_gallery_pane_g_ParamLimits

0xf5ff,	// (0x0001d910) cell_gallery_pane_g

0xbec1,	// (0x0001a1d2) bg_cell_gallery_focus_pane_g1

0xbec9,	// (0x0001a1da) bg_cell_gallery_focus_pane_g2

0xbed1,	// (0x0001a1e2) bg_cell_gallery_focus_pane_g3

0xbed9,	// (0x0001a1ea) bg_cell_gallery_focus_pane_g4

0xbee1,	// (0x0001a1f2) bg_cell_gallery_focus_pane_g5

0xbee9,	// (0x0001a1fa) bg_cell_gallery_focus_pane_g6

0xbef1,	// (0x0001a202) bg_cell_gallery_focus_pane_g7

0xbef9,	// (0x0001a20a) bg_cell_gallery_focus_pane_g8

0x0007,

0xf608,	// (0x0001d919) bg_cell_gallery_focus_pane_g

0xbf01,	// (0x0001a212) aid_firma_cardinal

0xbf15,	// (0x0001a226) blid_firmament_pane_t1

0xbf2c,	// (0x0001a23d) blid_firmament_pane_t2

0xbf43,	// (0x0001a254) blid_firmament_pane_t3

0xbf5a,	// (0x0001a26b) blid_firmament_pane_t4

0x0003,

0xf619,	// (0x0001d92a) blid_firmament_pane_t

0xbf71,	// (0x0001a282) blid_sat_info_pane

0x99dd,	// (0x00017cee) blid_sat_info_pane_g1

0x99dd,	// (0x00017cee) blid_sat_info_pane_g2

0x0001,

0xf0af,	// (0x0001d3c0) blid_sat_info_pane_g

0xbf81,	// (0x0001a292) blid_sat_info_pane_t1

0xbf8f,	// (0x0001a2a0) smil2_volume_content_pane

0xbf98,	// (0x0001a2a9) smil2_volume_pane_g1

0x9af0,	// (0x00017e01) smil2_volume_content_pane_g1

0xbfa0,	// (0x0001a2b1) smil2_volume_content_pane_g2

0xbfa9,	// (0x0001a2ba) smil2_volume_content_pane_g3

0xbfb2,	// (0x0001a2c3) smil2_volume_content_pane_g4

0xbfbb,	// (0x0001a2cc) smil2_volume_content_pane_g5

0xbfc4,	// (0x0001a2d5) smil2_volume_content_pane_g6

0xbfcd,	// (0x0001a2de) smil2_volume_content_pane_g7

0xbfd6,	// (0x0001a2e7) smil2_volume_content_pane_g8

0xbfdf,	// (0x0001a2f0) smil2_volume_content_pane_g9

0xbfe8,	// (0x0001a2f9) smil2_volume_content_pane_g10

0x0009,

0xf622,	// (0x0001d933) smil2_volume_content_pane_g

0x11cf,	// (0x0000f4e0) cale_week_day_heading_pane_t1_ParamLimits

0x11f9,	// (0x0000f50a) cale_week_day_heading_pane_t2_ParamLimits

0x1228,	// (0x0000f539) cale_week_day_heading_pane_t3_ParamLimits

0x1257,	// (0x0000f568) cale_week_day_heading_pane_t4_ParamLimits

0x1286,	// (0x0000f597) cale_week_day_heading_pane_t5_ParamLimits

0x12bd,	// (0x0000f5ce) cale_week_day_heading_pane_t6_ParamLimits

0x12f4,	// (0x0000f605) cale_week_day_heading_pane_t7_ParamLimits

0xf147,	// (0x0001d458) cale_week_day_heading_pane_t_ParamLimits

0x9c38,	// (0x00017f49) bg_cale_side_pane_ParamLimits

0x131e,	// (0x0000f62f) cale_week_time_pane_t1_ParamLimits

0x1338,	// (0x0000f649) cale_week_time_pane_t2_ParamLimits

0x1352,	// (0x0000f663) cale_week_time_pane_t3_ParamLimits

0x136c,	// (0x0000f67d) cale_week_time_pane_t4_ParamLimits

0x1386,	// (0x0000f697) cale_week_time_pane_t5_ParamLimits

0x13a0,	// (0x0000f6b1) cale_week_time_pane_t6_ParamLimits

0x13ba,	// (0x0000f6cb) cale_week_time_pane_t7_ParamLimits

0x13d4,	// (0x0000f6e5) cale_week_time_pane_t8_ParamLimits

0xf156,	// (0x0001d467) cale_week_time_pane_t_ParamLimits

0x13f4,	// (0x0000f705) cell_cale_week_pane_g2_ParamLimits

0x9c38,	// (0x00017f49) bg_cale_side_pane_cp01_ParamLimits

0x21c7,	// (0x000104d8) cale_month_week_pane_t1_ParamLimits

0x21e0,	// (0x000104f1) cale_month_week_pane_t2_ParamLimits

0x21f9,	// (0x0001050a) cale_month_week_pane_t3_ParamLimits

0x2212,	// (0x00010523) cale_month_week_pane_t4_ParamLimits

0x222b,	// (0x0001053c) cale_month_week_pane_t5_ParamLimits

0x2244,	// (0x00010555) cale_month_week_pane_t6_ParamLimits

0xf224,	// (0x0001d535) cale_month_week_pane_t_ParamLimits

0x9f98,	// (0x000182a9) cell_cale_month_pane_g1_ParamLimits

0x9231,	// (0x00017542) main_cale_event_viewer_pane

0x9231,	// (0x00017542) listscroll_cale_event_viewer_pane

0xbff1,	// (0x0001a302) list_cale_ev_pane

0xbff9,	// (0x0001a30a) scroll_pane_cp023

0xc005,	// (0x0001a316) field_cale_ev_pane_ParamLimits

0xc005,	// (0x0001a316) field_cale_ev_pane

0xc023,	// (0x0001a334) field_cale_ev_content_pane_ParamLimits

0xc023,	// (0x0001a334) field_cale_ev_content_pane

0xc02f,	// (0x0001a340) field_cale_ev_pane_g1_ParamLimits

0xc02f,	// (0x0001a340) field_cale_ev_pane_g1

0xc03b,	// (0x0001a34c) field_cale_ev_pane_g2_ParamLimits

0xc03b,	// (0x0001a34c) field_cale_ev_pane_g2

0xc053,	// (0x0001a364) field_cale_ev_pane_g3_ParamLimits

0xc053,	// (0x0001a364) field_cale_ev_pane_g3

0x0002,

0xf637,	// (0x0001d948) field_cale_ev_pane_g_ParamLimits

0xf637,	// (0x0001d948) field_cale_ev_pane_g

0xc06b,	// (0x0001a37c) field_cale_ev_pane_t1_ParamLimits

0xc06b,	// (0x0001a37c) field_cale_ev_pane_t1

0xc082,	// (0x0001a393) field_cale_ev_content_pane_t1_ParamLimits

0xc082,	// (0x0001a393) field_cale_ev_content_pane_t1

0xa8be,	// (0x00018bcf) bg_button_pane_cp01

0x0efc,	// (0x0000f20d) listscroll_cale_week_pane_ParamLimits

0x9be3,	// (0x00017ef4) popup_toolbar_window_cp01

0x9c09,	// (0x00017f1a) listscroll_cale_week_pane_t1_ParamLimits

0x0efc,	// (0x0000f20d) listscroll_cale_day_pane_ParamLimits

0x9be3,	// (0x00017ef4) popup_toolbar_window_cp02

0xa01a,	// (0x0001832b) listscroll_cale_day_pane_t1_ParamLimits

0x0efc,	// (0x0000f20d) main_cale_month_pane_ParamLimits

0xbace,	// (0x00019ddf) popup_toolbar_window_cp03_ParamLimits

0xbace,	// (0x00019ddf) popup_toolbar_window_cp03

0x2cf9,	// (0x0001100a) main_image_pane_g2_ParamLimits

0x2cf9,	// (0x0001100a) main_image_pane_g2

0x2d0a,	// (0x0001101b) main_image_pane_g3_ParamLimits

0x2d0a,	// (0x0001101b) main_image_pane_g3

0x0002,

0xf42c,	// (0x0001d73d) main_image_pane_g_ParamLimits

0xf42c,	// (0x0001d73d) main_image_pane_g

0xaa13,	// (0x00018d24) main_image_pane_t1_ParamLimits

0x2d1b,	// (0x0001102c) main_image_pane_t2_ParamLimits

0x2d1b,	// (0x0001102c) main_image_pane_t2

0x2d2d,	// (0x0001103e) main_image_pane_t3_ParamLimits

0x2d2d,	// (0x0001103e) main_image_pane_t3

0x2d55,	// (0x00011066) main_image_pane_t4_ParamLimits

0x2d55,	// (0x00011066) main_image_pane_t4

0x0003,

0xf433,	// (0x0001d744) main_image_pane_t_ParamLimits

0xf433,	// (0x0001d744) main_image_pane_t

0x2d75,	// (0x00011086) popup_image_details_window_cp01

0x2d7f,	// (0x00011090) popup_toobar_trans_pane_cp01_ParamLimits

0x2d7f,	// (0x00011090) popup_toobar_trans_pane_cp01

0x34b1,	// (0x000117c2) popup_image_details_window_ParamLimits

0x34b1,	// (0x000117c2) popup_image_details_window

0xbaa1,	// (0x00019db2) popup_image_focus_window

0xbbd4,	// (0x00019ee5) camera2_autofocus_pane_ParamLimits

0xbbd4,	// (0x00019ee5) camera2_autofocus_pane

0x9231,	// (0x00017542) bg_popup_sub_pane_cp06

0xc0a0,	// (0x0001a3b1) popup_image_focus_window_g1

0xc0a8,	// (0x0001a3b9) popup_image_focus_window_g2

0xc0b0,	// (0x0001a3c1) popup_image_focus_window_g3

0xc0b8,	// (0x0001a3c9) popup_image_focus_window_g4

0x0003,

0xf63e,	// (0x0001d94f) popup_image_focus_window_g

0xc0c0,	// (0x0001a3d1) popup_image_focus_window_t1

0xc0ce,	// (0x0001a3df) popup_image_focus_window_t2

0xc0de,	// (0x0001a3ef) popup_image_focus_window_t3

0x0002,

0xf647,	// (0x0001d958) popup_image_focus_window_t

0x9997,	// (0x00017ca8) camera2_autofocus_pane_g1

0x92a0,	// (0x000175b1) bg_tb_trans_pane_cp01

0xc0ec,	// (0x0001a3fd) popup_image_details_window_g1

0xc0ff,	// (0x0001a410) popup_image_details_window_g2

0x0002,

0xf659,	// (0x0001d96a) popup_image_details_window_g

0xc128,	// (0x0001a439) popup_image_details_window_t1

0xc13a,	// (0x0001a44b) popup_image_details_window_t2

0xc153,	// (0x0001a464) popup_image_details_window_t3

0xc167,	// (0x0001a478) popup_image_details_window_t4

0xc182,	// (0x0001a493) popup_image_details_window_t5

0x0004,

0xf660,	// (0x0001d971) popup_image_details_window_t

0x9a27,	// (0x00017d38) bg_calc_paper_pane_ParamLimits

0x9231,	// (0x00017542) grid_highlight_pane_cp013

0x9a3b,	// (0x00017d4c) list_calc_pane_ParamLimits

0x9a4d,	// (0x00017d5e) scroll_pane_cp024

0x9a55,	// (0x00017d66) bg_calc_display_pane_ParamLimits

0x0d4b,	// (0x0000f05c) calc_display_pane_t1_ParamLimits

0x0d5d,	// (0x0000f06e) calc_display_pane_t2_ParamLimits

0x9a61,	// (0x00017d72) calc_display_pane_t3_ParamLimits

0xf0c7,	// (0x0001d3d8) calc_display_pane_t_ParamLimits

0x0e17,	// (0x0000f128) cell_calc_pane_g2

0x0001,

0xf0e4,	// (0x0001d3f5) cell_calc_pane_g

0x0e20,	// (0x0000f131) cell_calc_pane_t1

0x9ace,	// (0x00017ddf) grid_highlight_pane_cp02_ParamLimits

0x9ae4,	// (0x00017df5) toolbar_button_pane_cp01_ParamLimits

0x9ae4,	// (0x00017df5) toolbar_button_pane_cp01

0xaa58,	// (0x00018d69) temp_image_control_pane_ParamLimits

0xaa58,	// (0x00018d69) temp_image_control_pane

0x92a0,	// (0x000175b1) main_mp3_pane

0xc19c,	// (0x0001a4ad) temp_image_control_pane_g1_ParamLimits

0xc19c,	// (0x0001a4ad) temp_image_control_pane_g1

0xc1aa,	// (0x0001a4bb) temp_image_control_pane_g2_ParamLimits

0xc1aa,	// (0x0001a4bb) temp_image_control_pane_g2

0xc1bc,	// (0x0001a4cd) temp_image_control_pane_g3_ParamLimits

0xc1bc,	// (0x0001a4cd) temp_image_control_pane_g3

0x396a,	// (0x00011c7b) temp_image_control_pane_g4_ParamLimits

0x396a,	// (0x00011c7b) temp_image_control_pane_g4

0x0003,

0xf66b,	// (0x0001d97c) temp_image_control_pane_g_ParamLimits

0xf66b,	// (0x0001d97c) temp_image_control_pane_g

0xc19c,	// (0x0001a4ad) main_mp3_pane_g1

0x397d,	// (0x00011c8e) main_mp3_pane_g2

0x0007,

0xf674,	// (0x0001d985) main_mp3_pane_g

0xc1f1,	// (0x0001a502) main_mp3_pane_t1

0x99a5,	// (0x00017cb6) main_camera_pane_g8_ParamLimits

0x99a5,	// (0x00017cb6) main_camera_pane_g8

0x15c2,	// (0x0000f8d3) main_video_pane_g7_ParamLimits

0x15c2,	// (0x0000f8d3) main_video_pane_g7

0x99fb,	// (0x00017d0c) main_camera2_pane_t7_ParamLimits

0x99fb,	// (0x00017d0c) main_camera2_pane_t7

0x9da4,	// (0x000180b5) scroll_pane_cp025_ParamLimits

0x9da4,	// (0x000180b5) scroll_pane_cp025

0x9db8,	// (0x000180c9) scroll_pane_cp026_ParamLimits

0x9db8,	// (0x000180c9) scroll_pane_cp026

0x9dc7,	// (0x000180d8) wml_content_pane_ParamLimits

0x9231,	// (0x00017542) main_touch_calib_pane

0x3a51,	// (0x00011d62) main_touch_calib_pane_g1

0x3a63,	// (0x00011d74) main_touch_calib_pane_g2

0x3a75,	// (0x00011d86) main_touch_calib_pane_g3

0x3a87,	// (0x00011d98) main_touch_calib_pane_g4

0x0003,

0xf692,	// (0x0001d9a3) main_touch_calib_pane_g

0x3a99,	// (0x00011daa) main_touch_calib_pane_t1

0x3ab3,	// (0x00011dc4) main_touch_calib_pane_t2

0x0004,

0xf69b,	// (0x0001d9ac) main_touch_calib_pane_t

0xa5cb,	// (0x000188dc) mup_progress_pane_cp02

0xa600,	// (0x00018911) navi_pane_g1

0xa6bb,	// (0x000189cc) navi_pane_mp_t3

0x92a0,	// (0x000175b1) main_mp3_pane_ParamLimits

0x363c,	// (0x0001194d) navi_pane_ParamLimits

0xc19c,	// (0x0001a4ad) main_mp3_pane_g1_ParamLimits

0x397d,	// (0x00011c8e) main_mp3_pane_g2_ParamLimits

0x398b,	// (0x00011c9c) main_mp3_pane_g3_ParamLimits

0x398b,	// (0x00011c9c) main_mp3_pane_g3

0x3999,	// (0x00011caa) main_mp3_pane_g4_ParamLimits

0x3999,	// (0x00011caa) main_mp3_pane_g4

0x9997,	// (0x00017ca8) main_mp3_pane_g5_ParamLimits

0x9997,	// (0x00017ca8) main_mp3_pane_g5

0xc1cc,	// (0x0001a4dd) main_mp3_pane_g6_ParamLimits

0xc1cc,	// (0x0001a4dd) main_mp3_pane_g6

0xc1d9,	// (0x0001a4ea) main_mp3_pane_g7_ParamLimits

0xc1d9,	// (0x0001a4ea) main_mp3_pane_g7

0xc1e5,	// (0x0001a4f6) main_mp3_pane_g8_ParamLimits

0xc1e5,	// (0x0001a4f6) main_mp3_pane_g8

0xf674,	// (0x0001d985) main_mp3_pane_g_ParamLimits

0x39a5,	// (0x00011cb6) main_mp3_pane_t2

0x39b3,	// (0x00011cc4) main_mp3_pane_t3

0xc1ff,	// (0x0001a510) main_mp3_pane_t4

0xc20d,	// (0x0001a51e) main_mp3_pane_t5

0x0005,

0xf685,	// (0x0001d996) main_mp3_pane_t

0xc21b,	// (0x0001a52c) mup_progress_pane_cp01

0x924f,	// (0x00017560) aid_zoom_text_secondary2

0xbff1,	// (0x0001a302) list_cale_ev2_pane

0xbff9,	// (0x0001a30a) scroll_pane_cp023_ParamLimits

0x3b09,	// (0x00011e1a) field_cale_ev2_pane_ParamLimits

0x3b09,	// (0x00011e1a) field_cale_ev2_pane

0xc223,	// (0x0001a534) field_cale_ev2_pane_g1_ParamLimits

0xc223,	// (0x0001a534) field_cale_ev2_pane_g1

0xc22f,	// (0x0001a540) field_cale_ev2_pane_g2_ParamLimits

0xc22f,	// (0x0001a540) field_cale_ev2_pane_g2

0xc247,	// (0x0001a558) field_cale_ev2_pane_g3_ParamLimits

0xc247,	// (0x0001a558) field_cale_ev2_pane_g3

0x0003,

0xf6a6,	// (0x0001d9b7) field_cale_ev2_pane_g_ParamLimits

0xf6a6,	// (0x0001d9b7) field_cale_ev2_pane_g

0xc26b,	// (0x0001a57c) field_cale_ev2_pane_t1_ParamLimits

0xc26b,	// (0x0001a57c) field_cale_ev2_pane_t1

0xc282,	// (0x0001a593) field_cale_ev2_pane_t2_ParamLimits

0xc282,	// (0x0001a593) field_cale_ev2_pane_t2

0x0001,

0xf6af,	// (0x0001d9c0) field_cale_ev2_pane_t_ParamLimits

0xf6af,	// (0x0001d9c0) field_cale_ev2_pane_t

0x2bcf,	// (0x00010ee0) main_postcard_pane_g5_ParamLimits

0x2bcf,	// (0x00010ee0) main_postcard_pane_g5

0x2be5,	// (0x00010ef6) main_postcard_pane_g6_ParamLimits

0x2be5,	// (0x00010ef6) main_postcard_pane_g6

0x92a0,	// (0x000175b1) camera2_autofocus_pane_cp_ParamLimits

0x92a0,	// (0x000175b1) camera2_autofocus_pane_cp

0x92a0,	// (0x000175b1) main_mup3_pane

0x3b6e,	// (0x00011e7f) main_mup3_pane_g1_ParamLimits

0x3b6e,	// (0x00011e7f) main_mup3_pane_g1

0x3b90,	// (0x00011ea1) main_mup3_pane_g2_ParamLimits

0x3b90,	// (0x00011ea1) main_mup3_pane_g2

0x3c10,	// (0x00011f21) main_mup3_pane_g3_ParamLimits

0x3c10,	// (0x00011f21) main_mup3_pane_g3

0x3c56,	// (0x00011f67) main_mup3_pane_g4_ParamLimits

0x3c56,	// (0x00011f67) main_mup3_pane_g4

0x3c9c,	// (0x00011fad) main_mup3_pane_g5_ParamLimits

0x3c9c,	// (0x00011fad) main_mup3_pane_g5

0x3ce2,	// (0x00011ff3) main_mup3_pane_g6_ParamLimits

0x3ce2,	// (0x00011ff3) main_mup3_pane_g6

0x99a5,	// (0x00017cb6) main_mup3_pane_g7_ParamLimits

0x99a5,	// (0x00017cb6) main_mup3_pane_g7

0x0007,

0xf6bf,	// (0x0001d9d0) main_mup3_pane_g_ParamLimits

0xf6bf,	// (0x0001d9d0) main_mup3_pane_g

0x3d60,	// (0x00012071) main_mup3_pane_t1_ParamLimits

0x3d60,	// (0x00012071) main_mup3_pane_t1

0x3dd4,	// (0x000120e5) main_mup3_pane_t2_ParamLimits

0x3dd4,	// (0x000120e5) main_mup3_pane_t2

0x3ea8,	// (0x000121b9) main_mup3_pane_t4_ParamLimits

0x3ea8,	// (0x000121b9) main_mup3_pane_t4

0x3efe,	// (0x0001220f) main_mup3_pane_t5_ParamLimits

0x3efe,	// (0x0001220f) main_mup3_pane_t5

0x3fba,	// (0x000122cb) main_mup3_pane_t6_ParamLimits

0x3fba,	// (0x000122cb) main_mup3_pane_t6

0x0005,

0xf6d0,	// (0x0001d9e1) main_mup3_pane_t_ParamLimits

0xf6d0,	// (0x0001d9e1) main_mup3_pane_t

0x4072,	// (0x00012383) mup3_progress_pane_ParamLimits

0x4072,	// (0x00012383) mup3_progress_pane

0x40fe,	// (0x0001240f) popup_mup3_control_window_ParamLimits

0x40fe,	// (0x0001240f) popup_mup3_control_window

0xc297,	// (0x0001a5a8) popup_mup3_text_window

0x4130,	// (0x00012441) mup3_progress_pane_t1

0x414f,	// (0x00012460) mup3_progress_pane_t2

0xc29f,	// (0x0001a5b0) mup3_progress_pane_t3

0x0002,

0xf6dd,	// (0x0001d9ee) mup3_progress_pane_t

0xc2bc,	// (0x0001a5cd) mup_progress_pane_cp03

0x9231,	// (0x00017542) bg_tb_trans_pane_cp04

0x416e,	// (0x0001247f) mup3_volume_pane

0x4176,	// (0x00012487) popup_mup3_control_window_g1

0x417f,	// (0x00012490) mup3_volume_pane_g1

0x4188,	// (0x00012499) mup3_volume_pane_g2

0x4191,	// (0x000124a2) mup3_volume_pane_g3

0x0002,

0xf6e4,	// (0x0001d9f5) mup3_volume_pane_g

0x9231,	// (0x00017542) bg_tb_trans_pane_cp03

0xc2cc,	// (0x0001a5dd) popup_mup3_text_window_g1

0xc2d4,	// (0x0001a5e5) popup_mup3_text_window_t1

0x9aaf,	// (0x00017dc0) list_calc_item_pane_g1_ParamLimits

0xbceb,	// (0x00019ffc) mup_volume_pane_cp_g1

0x3acd,	// (0x00011dde) main_touch_calib_pane_t3

0x3ae1,	// (0x00011df2) main_touch_calib_pane_t4

0x3af5,	// (0x00011e06) main_touch_calib_pane_t5

0x923b,	// (0x0001754c) aid_cell_size_toolbar2

0x9243,	// (0x00017554) aid_popup3_width_pane

0x924f,	// (0x00017560) aid_zoom_text_msg_primary

0x149d,	// (0x0000f7ae) vorec_t7

0x9a73,	// (0x00017d84) bg_calc_paper_pane_g1_ParamLimits

0x9a7f,	// (0x00017d90) bg_calc_paper_pane_g2_ParamLimits

0x9a8b,	// (0x00017d9c) bg_calc_paper_pane_g3_ParamLimits

0x9a97,	// (0x00017da8) bg_calc_paper_pane_g4_ParamLimits

0x9aa3,	// (0x00017db4) bg_calc_paper_pane_g5_ParamLimits

0x0da4,	// (0x0000f0b5) bg_calc_paper_pane_g6_ParamLimits

0x0db3,	// (0x0000f0c4) bg_calc_paper_pane_g7_ParamLimits

0x0dc2,	// (0x0000f0d3) bg_calc_paper_pane_g8_ParamLimits

0xf0ce,	// (0x0001d3df) bg_calc_paper_pane_g_ParamLimits

0x0dd5,	// (0x0000f0e6) calc_bg_paper_pane_g9_ParamLimits

0x92a0,	// (0x000175b1) image_qvga_pane_ParamLimits

0x92a0,	// (0x000175b1) image_qvga_pane

0x991c,	// (0x00017c2d) bg_popup_sub_pane_cp04_ParamLimits

0xa98f,	// (0x00018ca0) popup_mup_playback_window_g1_ParamLimits

0xa99b,	// (0x00018cac) popup_mup_playback_window_t1_ParamLimits

0xa9b0,	// (0x00018cc1) popup_mup_playback_window_t2_ParamLimits

0xf427,	// (0x0001d738) popup_mup_playback_window_t_ParamLimits

0x99a5,	// (0x00017cb6) main_mup2_pane_g3_ParamLimits

0x99a5,	// (0x00017cb6) main_mup2_pane_g3

0x177d,	// (0x0000fa8e) popup_toolbar_window_cp04

0xad34,	// (0x00019045) popup_call2_audio_second_window_g3_ParamLimits

0xad34,	// (0x00019045) popup_call2_audio_second_window_g3

0xb14c,	// (0x0001945d) popup_call2_audio_first_window_g4_ParamLimits

0xb14c,	// (0x0001945d) popup_call2_audio_first_window_g4

0xb773,	// (0x00019a84) popup_call2_audio_in_window_g4_ParamLimits

0xb773,	// (0x00019a84) popup_call2_audio_in_window_g4

0x2cdb,	// (0x00010fec) aid_area_sk_bg_cut_ParamLimits

0x2cdb,	// (0x00010fec) aid_area_sk_bg_cut

0xa9c5,	// (0x00018cd6) aid_area_sk_bg_cut_2_ParamLimits

0xa9c5,	// (0x00018cd6) aid_area_sk_bg_cut_2

0x9231,	// (0x00017542) aid_placing_details_win

0x9231,	// (0x00017542) aid_placing_details_win_2

0x9997,	// (0x00017ca8) camera2_autofocus_pane_g1_ParamLimits

0x0b91,	// (0x0000eea2) popup_fixed_preview_cale_window_ParamLimits

0x0b91,	// (0x0000eea2) popup_fixed_preview_cale_window

0xa742,	// (0x00018a53) navi_slider_pane_g3

0xa74b,	// (0x00018a5c) navi_slider_pane_g4

0xa754,	// (0x00018a65) navi_slider_pane_g5

0xa742,	// (0x00018a53) navi_slider_pane_g6

0xa75d,	// (0x00018a6e) navi_slider_pane_g7

0xa88b,	// (0x00018b9c) mup_scale_pane_g3

0xa894,	// (0x00018ba5) mup_scale_pane_g4

0xa89d,	// (0x00018bae) mup_scale_pane_g5

0x2984,	// (0x00010c95) mup_scale_pane_g6

0x298d,	// (0x00010c9e) mup_scale_pane_g7

0x99dd,	// (0x00017cee) cams2_slider_pane_g3

0x99dd,	// (0x00017cee) cams2_slider_pane_g4

0x99dd,	// (0x00017cee) cams2_slider_pane_g5

0x99dd,	// (0x00017cee) cams2_slider_pane_g6

0x99dd,	// (0x00017cee) cams2_slider_pane_g7

0x99dd,	// (0x00017cee) camera2_autofocus_pane_cp_g1

0xba83,	// (0x00019d94) bg_popup_preview_window_pane_cp02_ParamLimits

0xba83,	// (0x00019d94) bg_popup_preview_window_pane_cp02

0xc2e2,	// (0x0001a5f3) list_fp_cale_pane_ParamLimits

0xc2e2,	// (0x0001a5f3) list_fp_cale_pane

0xc2ee,	// (0x0001a5ff) popup_fixed_preview_cale_window_t1_ParamLimits

0xc2ee,	// (0x0001a5ff) popup_fixed_preview_cale_window_t1

0x419a,	// (0x000124ab) popup_fixed_preview_cale_window_t2_ParamLimits

0x419a,	// (0x000124ab) popup_fixed_preview_cale_window_t2

0x41af,	// (0x000124c0) popup_fixed_preview_cale_window_t3_ParamLimits

0x41af,	// (0x000124c0) popup_fixed_preview_cale_window_t3

0x0002,

0xf6eb,	// (0x0001d9fc) popup_fixed_preview_cale_window_t_ParamLimits

0xf6eb,	// (0x0001d9fc) popup_fixed_preview_cale_window_t

0x41c4,	// (0x000124d5) list_single_fp_cale_pane_ParamLimits

0x41c4,	// (0x000124d5) list_single_fp_cale_pane

0xc30c,	// (0x0001a61d) list_single_fp_cale_pane_g1_ParamLimits

0xc30c,	// (0x0001a61d) list_single_fp_cale_pane_g1

0xc318,	// (0x0001a629) list_single_fp_cale_pane_g2_ParamLimits

0xc318,	// (0x0001a629) list_single_fp_cale_pane_g2

0x0002,

0xf6f2,	// (0x0001da03) list_single_fp_cale_pane_g_ParamLimits

0xf6f2,	// (0x0001da03) list_single_fp_cale_pane_g

0xc331,	// (0x0001a642) list_single_fp_cale_pane_t1_ParamLimits

0xc331,	// (0x0001a642) list_single_fp_cale_pane_t1

0xc343,	// (0x0001a654) list_single_fp_cale_pane_t2_ParamLimits

0xc343,	// (0x0001a654) list_single_fp_cale_pane_t2

0x0001,

0xf6f9,	// (0x0001da0a) list_single_fp_cale_pane_t_ParamLimits

0xf6f9,	// (0x0001da0a) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x9231,	// (0x00017542) main_dialer_pane

0x9231,	// (0x00017542) aid_cell_size_keypad

0x9231,	// (0x00017542) dialer_ne_pane

0x9231,	// (0x00017542) grid_dialer_command_1_pane

0x9231,	// (0x00017542) grid_dialer_command_2_pane

0x9231,	// (0x00017542) grid_dialer_keypad_pane

0x41da,	// (0x000124eb) bg_popup_call_pane_cp06_ParamLimits

0x41da,	// (0x000124eb) bg_popup_call_pane_cp06

0x41da,	// (0x000124eb) dialer_ne_clear_pane_ParamLimits

0x41da,	// (0x000124eb) dialer_ne_clear_pane

0x99dd,	// (0x00017cee) dialer_ne_pane_g1

0x99fb,	// (0x00017d0c) dialer_ne_pane_t1_ParamLimits

0x99fb,	// (0x00017d0c) dialer_ne_pane_t1

0x41e8,	// (0x000124f9) dialer_ne_pane_t2_ParamLimits

0x41e8,	// (0x000124f9) dialer_ne_pane_t2

0x4210,	// (0x00012521) dialer_ne_pane_t3_ParamLimits

0x4210,	// (0x00012521) dialer_ne_pane_t3

0x0002,

0xf6fe,	// (0x0001da0f) dialer_ne_pane_t_ParamLimits

0xf6fe,	// (0x0001da0f) dialer_ne_pane_t

0x4210,	// (0x00012521) dialer_ne_pane_t3_copy1_ParamLimits

0x4210,	// (0x00012521) dialer_ne_pane_t3_copy1

0xc376,	// (0x0001a687) cell_dialer_keypad_pane_ParamLimits

0xc376,	// (0x0001a687) cell_dialer_keypad_pane

0x92a0,	// (0x000175b1) cell_dialer_command_1_pane_ParamLimits

0x92a0,	// (0x000175b1) cell_dialer_command_1_pane

0xc38d,	// (0x0001a69e) cell_dialer_command_2_pane_ParamLimits

0xc38d,	// (0x0001a69e) cell_dialer_command_2_pane

0x92a0,	// (0x000175b1) bg_button_pane_cp02_ParamLimits

0x92a0,	// (0x000175b1) bg_button_pane_cp02

0x9997,	// (0x00017ca8) cell_dialer_keypad_pane_g1_ParamLimits

0x9997,	// (0x00017ca8) cell_dialer_keypad_pane_g1

0x92a0,	// (0x000175b1) bg_button_pane_cp03_ParamLimits

0x92a0,	// (0x000175b1) bg_button_pane_cp03

0x9997,	// (0x00017ca8) cell_dialer_command_1_pane_g1_ParamLimits

0x9997,	// (0x00017ca8) cell_dialer_command_1_pane_g1

0x9231,	// (0x00017542) bg_button_pane_cp04

0x99dd,	// (0x00017cee) cell_dialer_command_2_pane_g1

0x9231,	// (0x00017542) bg_button_pane_cp06

0x99dd,	// (0x00017cee) dialer_ne_clear_pane_g1

0xa60c,	// (0x0001891d) navi_pane_g2

0xa63a,	// (0x0001894b) navi_pane_g3

0x0002,

0xf32f,	// (0x0001d640) navi_pane_g

0xa6c9,	// (0x000189da) navi_pane_mv_g2

0xa6f0,	// (0x00018a01) navi_pane_mv_g5

0x2767,	// (0x00010a78) navi_pane_mv_t1

0x9a55,	// (0x00017d66) main_clock2_pane

0x92a0,	// (0x000175b1) main_clock2_list_pane_ParamLimits

0x92a0,	// (0x000175b1) main_clock2_list_pane

0x42a6,	// (0x000125b7) main_clock2_pane_t1_ParamLimits

0x42a6,	// (0x000125b7) main_clock2_pane_t1

0x42e1,	// (0x000125f2) main_clock2_pane_t2_ParamLimits

0x42e1,	// (0x000125f2) main_clock2_pane_t2

0x0004,

0xf70a,	// (0x0001da1b) main_clock2_pane_t_ParamLimits

0xf70a,	// (0x0001da1b) main_clock2_pane_t

0x4381,	// (0x00012692) popup_clock_analogue_window_cp03_ParamLimits

0x4381,	// (0x00012692) popup_clock_analogue_window_cp03

0x43a6,	// (0x000126b7) popup_clock_digital_window_cp02_ParamLimits

0x43a6,	// (0x000126b7) popup_clock_digital_window_cp02

0x441f,	// (0x00012730) main_clock2_list_single_pane_ParamLimits

0x441f,	// (0x00012730) main_clock2_list_single_pane

0x9c8a,	// (0x00017f9b) list_highlight_pane_cp05

0xc3d0,	// (0x0001a6e1) main_clock2_list_single_pane_t1

0x177d,	// (0x0000fa8e) popup_toolbar_window_cp04_ParamLimits

0x99a5,	// (0x00017cb6) camera2_autofocus_pane_g2_ParamLimits

0x99a5,	// (0x00017cb6) camera2_autofocus_pane_g2

0x99a5,	// (0x00017cb6) camera2_autofocus_pane_g3_ParamLimits

0x99a5,	// (0x00017cb6) camera2_autofocus_pane_g3

0x99a5,	// (0x00017cb6) camera2_autofocus_pane_g4_ParamLimits

0x99a5,	// (0x00017cb6) camera2_autofocus_pane_g4

0x99a5,	// (0x00017cb6) camera2_autofocus_pane_g5_ParamLimits

0x99a5,	// (0x00017cb6) camera2_autofocus_pane_g5

0x0004,

0xf64e,	// (0x0001d95f) camera2_autofocus_pane_g_ParamLimits

0xf64e,	// (0x0001d95f) camera2_autofocus_pane_g

0x3b2a,	// (0x00011e3b) camera2_autofocus_pane_cp_g2

0x3b32,	// (0x00011e43) camera2_autofocus_pane_cp_g3

0x3b3a,	// (0x00011e4b) camera2_autofocus_pane_cp_g4

0x3b42,	// (0x00011e53) camera2_autofocus_pane_cp_g5

0x0004,

0xf6b4,	// (0x0001d9c5) camera2_autofocus_pane_cp_g

0x9231,	// (0x00017542) popup_dialer_spcha_window

0x9231,	// (0x00017542) bg_popup_sub_pane_cp07

0x9231,	// (0x00017542) list_spcha_pane

0xc3de,	// (0x0001a6ef) list_single_spcha_pane_ParamLimits

0xc3de,	// (0x0001a6ef) list_single_spcha_pane

0x9231,	// (0x00017542) list_highlight_pane_cp06

0xa1fd,	// (0x0001850e) list_single_spcha_pane_t1

0xb51d,	// (0x0001982e) popup_call2_audio_out_window_g4_ParamLimits

0xb51d,	// (0x0001982e) popup_call2_audio_out_window_g4

0x9231,	// (0x00017542) main_imed2_pane

0xbaa9,	// (0x00019dba) popup_imed_adjust2_window

0x34c9,	// (0x000117da) popup_imed_trans_window_ParamLimits

0x34c9,	// (0x000117da) popup_imed_trans_window

0xbdc0,	// (0x0001a0d1) popup_blid_sat_info2_window_t1

0xbdce,	// (0x0001a0df) popup_blid_sat_info2_window_t2

0x000a,

0xf5e3,	// (0x0001d8f4) popup_blid_sat_info2_window_t

0x44d0,	// (0x000127e1) aid_size_cell_colour_35

0x44f0,	// (0x00012801) aid_size_cell_colour_112

0x4510,	// (0x00012821) aid_size_cell_effect

0xa81b,	// (0x00018b2c) bg_tb_trans_pane_cp02

0xa123,	// (0x00018434) heading_imed_pane

0x4530,	// (0x00012841) listscroll_imed_pane

0xc3f0,	// (0x0001a701) heading_imed_pane_g1

0xc3f8,	// (0x0001a709) heading_imed_pane_t1

0xc406,	// (0x0001a717) grid_imed_colour_35_pane_ParamLimits

0xc406,	// (0x0001a717) grid_imed_colour_35_pane

0x453c,	// (0x0001284d) grid_imed_effect_pane

0xc41e,	// (0x0001a72f) list_imed_aspect_pane

0x4552,	// (0x00012863) scroll_pane_cp027_ParamLimits

0x4552,	// (0x00012863) scroll_pane_cp027

0x4563,	// (0x00012874) cell_imed_effect_pane_ParamLimits

0x4563,	// (0x00012874) cell_imed_effect_pane

0xc426,	// (0x0001a737) cell_imed_colour_pane_ParamLimits

0xc426,	// (0x0001a737) cell_imed_colour_pane

0xc468,	// (0x0001a779) cell_imed_colour_pane_g1_ParamLimits

0xc468,	// (0x0001a779) cell_imed_colour_pane_g1

0xc479,	// (0x0001a78a) hgihlgiht_grid_pane_cp016_ParamLimits

0xc479,	// (0x0001a78a) hgihlgiht_grid_pane_cp016

0x458a,	// (0x0001289b) cell_imed_effect_pane_g1

0x4592,	// (0x000128a3) grid_highlight_pane_cp017

0xc48a,	// (0x0001a79b) list_imed_single_pane_ParamLimits

0xc48a,	// (0x0001a79b) list_imed_single_pane

0x9231,	// (0x00017542) list_highlight_pane_cp07

0xc49f,	// (0x0001a7b0) list_imed_aspect_pane_comp1_t1

0xa81b,	// (0x00018b2c) bg_tb_trans_pane_cp05

0xc4c1,	// (0x0001a7d2) popup_imed_adjust2_window_g1

0xc4e8,	// (0x0001a7f9) popup_imed_adjust2_window_t1

0xc500,	// (0x0001a811) slider_imed_adjust_pane

0xc514,	// (0x0001a825) slider_imed_adjust_pane_g1

0xc524,	// (0x0001a835) slider_imed_adjust_pane_g2

0xc534,	// (0x0001a845) slider_imed_adjust_pane_g3

0xc545,	// (0x0001a856) slider_imed_adjust_pane_g4

0x0003,

0xf727,	// (0x0001da38) slider_imed_adjust_pane_g

0x459b,	// (0x000128ac) aid_size_cell_clipart2

0x45a7,	// (0x000128b8) grid_imed_clipart_pane

0xa8ae,	// (0x00018bbf) scroll_pane_cp031

0x45b1,	// (0x000128c2) cell_imed_clipart_pane_ParamLimits

0x45b1,	// (0x000128c2) cell_imed_clipart_pane

0x45d3,	// (0x000128e4) cell_imed_clipart_pane_g1

0x9231,	// (0x00017542) grid_highlight_pane_cp014

0x4282,	// (0x00012593) main_clock2_pane_g1_ParamLimits

0x4282,	// (0x00012593) main_clock2_pane_g1

0x43c6,	// (0x000126d7) aid_call2_pane_cp10

0x43d8,	// (0x000126e9) aid_call_pane_cp10

0xa56b,	// (0x0001887c) popup_clock_analogue_window_cp10_g1

0xa56b,	// (0x0001887c) popup_clock_analogue_window_cp10_g2

0x43ea,	// (0x000126fb) popup_clock_analogue_window_cp10_g3

0x43ea,	// (0x000126fb) popup_clock_analogue_window_cp10_g4

0xa56b,	// (0x0001887c) popup_clock_analogue_window_cp10_g5

0x0004,

0xf715,	// (0x0001da26) popup_clock_analogue_window_cp10_g

0x4400,	// (0x00012711) popup_clock_analogue_window_cp10_t1

0x4431,	// (0x00012742) clock_digital_number_pane_cp10_ParamLimits

0x4431,	// (0x00012742) clock_digital_number_pane_cp10

0x4449,	// (0x0001275a) clock_digital_number_pane_cp11_ParamLimits

0x4449,	// (0x0001275a) clock_digital_number_pane_cp11

0x4461,	// (0x00012772) clock_digital_number_pane_cp12_ParamLimits

0x4461,	// (0x00012772) clock_digital_number_pane_cp12

0x447b,	// (0x0001278c) clock_digital_number_pane_cp13_ParamLimits

0x447b,	// (0x0001278c) clock_digital_number_pane_cp13

0x4495,	// (0x000127a6) clock_digital_separator_pane_cp10_ParamLimits

0x4495,	// (0x000127a6) clock_digital_separator_pane_cp10

0x44af,	// (0x000127c0) popup_clock_digital_window_cp02_t1_ParamLimits

0x44af,	// (0x000127c0) popup_clock_digital_window_cp02_t1

0x9914,	// (0x00017c25) clock_digital_number_pane_cp10_g1

0x9914,	// (0x00017c25) clock_digital_number_pane_cp10_g2

0x0001,

0xf730,	// (0x0001da41) clock_digital_number_pane_cp10_g

0x9914,	// (0x00017c25) clock_digital_separator_pane_cp10_g1

0x9914,	// (0x00017c25) clock_digital_separator_pane_g2_cp10

0xa6f8,	// (0x00018a09) navi_pane_vded_g4

0xa701,	// (0x00018a12) navi_pane_vded_g5

0xa70a,	// (0x00018a1b) navi_pane_vded_t1

0x9231,	// (0x00017542) main_vded_pane

0x45dc,	// (0x000128ed) main_vded_pane_g1

0x45e6,	// (0x000128f7) main_vded_pane_g2

0x45f0,	// (0x00012901) main_vded_pane_g3

0x0002,

0xf735,	// (0x0001da46) main_vded_pane_g

0x45fa,	// (0x0001290b) main_vded_pane_t1

0x4608,	// (0x00012919) main_vded_pane_t2

0x0001,

0xf73c,	// (0x0001da4d) main_vded_pane_t

0x4616,	// (0x00012927) vded_slider_pane

0x461e,	// (0x0001292f) vded_video_pane

0xc556,	// (0x0001a867) vded_video_pane_g1

0x4626,	// (0x00012937) vded_video_pane_g2

0x99dd,	// (0x00017cee) vded_video_pane_g3

0x0002,

0xf741,	// (0x0001da52) vded_video_pane_g

0xc560,	// (0x0001a871) vded_slider_pane_g1

0xbceb,	// (0x00019ffc) vded_slider_pane_g2

0xc569,	// (0x0001a87a) vded_slider_pane_g3

0xc572,	// (0x0001a883) vded_slider_pane_g4

0xc57b,	// (0x0001a88c) vded_slider_pane_g5

0x0004,

0xf748,	// (0x0001da59) vded_slider_pane_g

0x40e6,	// (0x000123f7) mup3_rocker_pane_ParamLimits

0x40e6,	// (0x000123f7) mup3_rocker_pane

0x462f,	// (0x00012940) mup3_control_keys_pane_g1

0x4637,	// (0x00012948) mup3_control_keys_pane_g2

0x463f,	// (0x00012950) mup3_control_keys_pane_g3

0x4647,	// (0x00012958) mup3_control_keys_pane_g4

0x0003,

0xf753,	// (0x0001da64) mup3_control_keys_pane_g

0x0bc8,	// (0x0000eed9) popup_toolbar2_fixed_window_cp01_ParamLimits

0x0bc8,	// (0x0000eed9) popup_toolbar2_fixed_window_cp01

0x411a,	// (0x0001242b) popup_toolbar2_fixed_window_cp02_ParamLimits

0x411a,	// (0x0001242b) popup_toolbar2_fixed_window_cp02

0xaea6,	// (0x000191b7) popup_call2_audio_second_window_t4_ParamLimits

0xaea6,	// (0x000191b7) popup_call2_audio_second_window_t4

0xb3e2,	// (0x000196f3) popup_call2_audio_first_window_t6_ParamLimits

0xb3e2,	// (0x000196f3) popup_call2_audio_first_window_t6

0xb620,	// (0x00019931) popup_call2_audio_out_window_t6_ParamLimits

0xb620,	// (0x00019931) popup_call2_audio_out_window_t6

0x9231,	// (0x00017542) main_vitu_pane

0x92a0,	// (0x000175b1) aid_size_cell_itu_ParamLimits

0x92a0,	// (0x000175b1) aid_size_cell_itu

0x92a0,	// (0x000175b1) bg_popup_window_pane_cp08_ParamLimits

0x92a0,	// (0x000175b1) bg_popup_window_pane_cp08

0x92a0,	// (0x000175b1) field_vitu_entry_pane_ParamLimits

0x92a0,	// (0x000175b1) field_vitu_entry_pane

0x92a0,	// (0x000175b1) grid_vitu_function_pane_ParamLimits

0x92a0,	// (0x000175b1) grid_vitu_function_pane

0x92a0,	// (0x000175b1) grid_vitu_itu_pane_ParamLimits

0x92a0,	// (0x000175b1) grid_vitu_itu_pane

0x92a0,	// (0x000175b1) cell_vitu_itu_pane_ParamLimits

0x92a0,	// (0x000175b1) cell_vitu_itu_pane

0x92a0,	// (0x000175b1) cell_vitu_function_pane_ParamLimits

0x92a0,	// (0x000175b1) cell_vitu_function_pane

0x92a0,	// (0x000175b1) bg_popup_sub_pane_cp08_ParamLimits

0x92a0,	// (0x000175b1) bg_popup_sub_pane_cp08

0x99e7,	// (0x00017cf8) field_vitu_entry_pane_t1_ParamLimits

0x99e7,	// (0x00017cf8) field_vitu_entry_pane_t1

0xc584,	// (0x0001a895) field_vitu_entry_pane_t2_ParamLimits

0xc584,	// (0x0001a895) field_vitu_entry_pane_t2

0x0001,

0xf75c,	// (0x0001da6d) field_vitu_entry_pane_t_ParamLimits

0xf75c,	// (0x0001da6d) field_vitu_entry_pane_t

0xbc12,	// (0x00019f23) bg_button_pane_cp05_ParamLimits

0xbc12,	// (0x00019f23) bg_button_pane_cp05

0xc5a1,	// (0x0001a8b2) cell_vitu_itu_pane_g1

0xa807,	// (0x00018b18) cell_vitu_itu_pane_t1_ParamLimits

0xa807,	// (0x00018b18) cell_vitu_itu_pane_t1

0xa807,	// (0x00018b18) cell_vitu_itu_pane_t2_ParamLimits

0xa807,	// (0x00018b18) cell_vitu_itu_pane_t2

0x0002,

0xf761,	// (0x0001da72) cell_vitu_itu_pane_t_ParamLimits

0xf761,	// (0x0001da72) cell_vitu_itu_pane_t

0x9231,	// (0x00017542) bg_button_pane_cp07

0x99dd,	// (0x00017cee) cell_vitu_function_pane_g1

0x99d5,	// (0x00017ce6) main_calc_pane_g1

0x09f0,	// (0x0000ed01) aid_visual_content_pane

0x9231,	// (0x00017542) main_vradio_pane

0x9997,	// (0x00017ca8) main_vradio_pane_g1_ParamLimits

0x9997,	// (0x00017ca8) main_vradio_pane_g1

0x99a5,	// (0x00017cb6) main_vradio_pane_g2_ParamLimits

0x99a5,	// (0x00017cb6) main_vradio_pane_g2

0x0001,

0xf768,	// (0x0001da79) main_vradio_pane_g_ParamLimits

0xf768,	// (0x0001da79) main_vradio_pane_g

0x99e7,	// (0x00017cf8) main_vradio_pane_t1_ParamLimits

0x99e7,	// (0x00017cf8) main_vradio_pane_t1

0x99e7,	// (0x00017cf8) main_vradio_pane_t2_ParamLimits

0x99e7,	// (0x00017cf8) main_vradio_pane_t2

0x99fb,	// (0x00017d0c) main_vradio_pane_t3_ParamLimits

0x99fb,	// (0x00017d0c) main_vradio_pane_t3

0x0002,

0xf76d,	// (0x0001da7e) main_vradio_pane_t_ParamLimits

0xf76d,	// (0x0001da7e) main_vradio_pane_t

0x92a0,	// (0x000175b1) vradio_rocker_control_pane_ParamLimits

0x92a0,	// (0x000175b1) vradio_rocker_control_pane

0x92a0,	// (0x000175b1) vradio_station_info_pane_ParamLimits

0x92a0,	// (0x000175b1) vradio_station_info_pane

0x92a0,	// (0x000175b1) vradio_frequency_info_pane_ParamLimits

0x92a0,	// (0x000175b1) vradio_frequency_info_pane

0x99dd,	// (0x00017cee) vradio_station_info_pane_g1

0xa807,	// (0x00018b18) vradio_station_info_pane_t1_ParamLimits

0xa807,	// (0x00018b18) vradio_station_info_pane_t1

0x99fb,	// (0x00017d0c) vradio_station_info_pane_t2_ParamLimits

0x99fb,	// (0x00017d0c) vradio_station_info_pane_t2

0x0001,

0xf774,	// (0x0001da85) vradio_station_info_pane_t_ParamLimits

0xf774,	// (0x0001da85) vradio_station_info_pane_t

0x9231,	// (0x00017542) vradio_tuning_pane

0x4657,	// (0x00012968) vradio_rocker_control_pane_g1

0xc5bd,	// (0x0001a8ce) vradio_rocker_control_pane_g2

0x4661,	// (0x00012972) vradio_rocker_control_pane_g3

0x466b,	// (0x0001297c) vradio_rocker_control_pane_g4

0x4675,	// (0x00012986) vradio_rocker_control_pane_g5

0x0004,

0xf779,	// (0x0001da8a) vradio_rocker_control_pane_g

0x99dd,	// (0x00017cee) vradio_frequency_info_pane_g1

0x99e7,	// (0x00017cf8) vradio_frequency_info_pane_t1_ParamLimits

0x99e7,	// (0x00017cf8) vradio_frequency_info_pane_t1

0x467f,	// (0x00012990) vradio_tuning_pane_g1

0x468a,	// (0x0001299b) vradio_tuning_pane_t1

0x925f,	// (0x00017570) area_side_right_pane_ParamLimits

0x925f,	// (0x00017570) area_side_right_pane

0xba4a,	// (0x00019d5b) status_small_pane_g1

0xba52,	// (0x00019d63) status_small_pane_g2

0xba5b,	// (0x00019d6c) status_small_pane_g3

0xba64,	// (0x00019d75) status_small_pane_g4

0x0003,

0xf545,	// (0x0001d856) status_small_pane_g

0xba6d,	// (0x00019d7e) status_small_pane_t1

0x9231,	// (0x00017542) main_video3_pane

0x9231,	// (0x00017542) cams_zoom_vslider_pane

0xc5c5,	// (0x0001a8d6) image3_wide_pane_ParamLimits

0xc5c5,	// (0x0001a8d6) image3_wide_pane

0x9231,	// (0x00017542) image3_wide_small_pane

0xc5df,	// (0x0001a8f0) main_video3_pane_g1_ParamLimits

0xc5df,	// (0x0001a8f0) main_video3_pane_g1

0xc5df,	// (0x0001a8f0) main_video3_pane_g2_ParamLimits

0xc5df,	// (0x0001a8f0) main_video3_pane_g2

0x0001,

0xf784,	// (0x0001da95) main_video3_pane_g_ParamLimits

0xf784,	// (0x0001da95) main_video3_pane_g

0xc5fd,	// (0x0001a90e) main_video3_pane_t1_ParamLimits

0xc5fd,	// (0x0001a90e) main_video3_pane_t1

0xc5fd,	// (0x0001a90e) main_video3_pane_t2_ParamLimits

0xc5fd,	// (0x0001a90e) main_video3_pane_t2

0xc5fd,	// (0x0001a90e) main_video3_pane_t3_ParamLimits

0xc5fd,	// (0x0001a90e) main_video3_pane_t3

0x0002,

0xf789,	// (0x0001da9a) main_video3_pane_t_ParamLimits

0xf789,	// (0x0001da9a) main_video3_pane_t

0x99dd,	// (0x00017cee) cams_zoom_vslider_pane_g1

0x99dd,	// (0x00017cee) cams_zoom_vslider_pane_g2

0x0001,

0xf0af,	// (0x0001d3c0) cams_zoom_vslider_pane_g

0x9231,	// (0x00017542) small_slider_vertical_pane

0x99dd,	// (0x00017cee) small_slider_vertical_pane_g1

0x99dd,	// (0x00017cee) small_slider_vertical_pane_g2

0xc624,	// (0x0001a935) small_slider_vertical_pane_g3

0x0002,

0xf790,	// (0x0001daa1) small_slider_vertical_pane_g

0x9231,	// (0x00017542) main_hwr_training_pane

0xc62d,	// (0x0001a93e) hwr_training_instruct_pane_ParamLimits

0xc62d,	// (0x0001a93e) hwr_training_instruct_pane

0x4699,	// (0x000129aa) hwr_training_navi_pane_ParamLimits

0x4699,	// (0x000129aa) hwr_training_navi_pane

0x46b8,	// (0x000129c9) hwr_training_write_pane_ParamLimits

0x46b8,	// (0x000129c9) hwr_training_write_pane

0x9231,	// (0x00017542) bg_frame_shadow_pane

0xc664,	// (0x0001a975) hwr_training_write_pane_g1

0xc66c,	// (0x0001a97d) hwr_training_write_pane_g2

0xc674,	// (0x0001a985) hwr_training_write_pane_g3

0xc67c,	// (0x0001a98d) hwr_training_write_pane_g4

0xc684,	// (0x0001a995) hwr_training_write_pane_g5

0xc68c,	// (0x0001a99d) hwr_training_write_pane_g6

0xc694,	// (0x0001a9a5) hwr_training_write_pane_g7

0x0006,

0xf797,	// (0x0001daa8) hwr_training_write_pane_g

0xc69c,	// (0x0001a9ad) hwr_training_navi_pane_g1_ParamLimits

0xc69c,	// (0x0001a9ad) hwr_training_navi_pane_g1

0xc6ae,	// (0x0001a9bf) hwr_training_navi_pane_g2_ParamLimits

0xc6ae,	// (0x0001a9bf) hwr_training_navi_pane_g2

0xc6c0,	// (0x0001a9d1) hwr_training_navi_pane_g3_ParamLimits

0xc6c0,	// (0x0001a9d1) hwr_training_navi_pane_g3

0xc6d0,	// (0x0001a9e1) hwr_training_navi_pane_g4_ParamLimits

0xc6d0,	// (0x0001a9e1) hwr_training_navi_pane_g4

0x0004,

0xf7a6,	// (0x0001dab7) hwr_training_navi_pane_g_ParamLimits

0xf7a6,	// (0x0001dab7) hwr_training_navi_pane_g

0xc6dd,	// (0x0001a9ee) hwr_training_navi_pane_t1

0x4702,	// (0x00012a13) list_single_hwr_training_instruct_pane_ParamLimits

0x4702,	// (0x00012a13) list_single_hwr_training_instruct_pane

0xc6eb,	// (0x0001a9fc) list_single_hwr_training_instruct_pane_t1

0xbec1,	// (0x0001a1d2) bg_frame_shadow_pane_g1

0xc6fa,	// (0x0001aa0b) bg_frame_shadow_pane_g2

0xc702,	// (0x0001aa13) bg_frame_shadow_pane_g3

0xc70a,	// (0x0001aa1b) bg_frame_shadow_pane_g4

0xc712,	// (0x0001aa23) bg_frame_shadow_pane_g5

0xc71a,	// (0x0001aa2b) bg_frame_shadow_pane_g6

0xc722,	// (0x0001aa33) bg_frame_shadow_pane_g7

0x9b31,	// (0x00017e42) bg_frame_shadow_pane_g8

0x0007,

0xf7b1,	// (0x0001dac2) bg_frame_shadow_pane_g

0x9231,	// (0x00017542) main_video_tele_dialer_pane

0x4718,	// (0x00012a29) aid_size_cell_video_keypad_ParamLimits

0x4718,	// (0x00012a29) aid_size_cell_video_keypad

0x4732,	// (0x00012a43) grid_video_dialer_keypad_pane_ParamLimits

0x4732,	// (0x00012a43) grid_video_dialer_keypad_pane

0x4780,	// (0x00012a91) video_down_pane_cp_ParamLimits

0x4780,	// (0x00012a91) video_down_pane_cp

0x47b2,	// (0x00012ac3) cell_video_dialer_keypad_pane_ParamLimits

0x47b2,	// (0x00012ac3) cell_video_dialer_keypad_pane

0xc72a,	// (0x0001aa3b) bg_button_pane_cp08_ParamLimits

0xc72a,	// (0x0001aa3b) bg_button_pane_cp08

0x47d4,	// (0x00012ae5) cell_video_dialer_keypad_pane_g1_ParamLimits

0x47d4,	// (0x00012ae5) cell_video_dialer_keypad_pane_g1

0x40d0,	// (0x000123e1) mup3_rocker2_pane_ParamLimits

0x40d0,	// (0x000123e1) mup3_rocker2_pane

0x99dd,	// (0x00017cee) mup3_rocker2_pane_g1

0x33b8,	// (0x000116c9) main_dialer2_pane

0x9231,	// (0x00017542) main_mp4_pane

0xc754,	// (0x0001aa65) main_mp4_pane_g1_ParamLimits

0xc754,	// (0x0001aa65) main_mp4_pane_g1

0xc754,	// (0x0001aa65) main_mp4_pane_g2_ParamLimits

0xc754,	// (0x0001aa65) main_mp4_pane_g2

0x480e,	// (0x00012b1f) main_mp4_pane_g3_ParamLimits

0x480e,	// (0x00012b1f) main_mp4_pane_g3

0xc772,	// (0x0001aa83) main_mp4_pane_g4_ParamLimits

0xc772,	// (0x0001aa83) main_mp4_pane_g4

0xc79a,	// (0x0001aaab) main_mp4_pane_g5_ParamLimits

0xc79a,	// (0x0001aaab) main_mp4_pane_g5

0x0007,

0xf7d1,	// (0x0001dae2) main_mp4_pane_g_ParamLimits

0xf7d1,	// (0x0001dae2) main_mp4_pane_g

0xc802,	// (0x0001ab13) main_mp4_pane_t1_ParamLimits

0xc802,	// (0x0001ab13) main_mp4_pane_t1

0xc864,	// (0x0001ab75) main_mp4_pane_t2_ParamLimits

0xc864,	// (0x0001ab75) main_mp4_pane_t2

0xc8c8,	// (0x0001abd9) main_mp4_pane_t3_ParamLimits

0xc8c8,	// (0x0001abd9) main_mp4_pane_t3

0xc926,	// (0x0001ac37) main_mp4_pane_t4_ParamLimits

0xc926,	// (0x0001ac37) main_mp4_pane_t4

0x0003,

0xf7e2,	// (0x0001daf3) main_mp4_pane_t_ParamLimits

0xf7e2,	// (0x0001daf3) main_mp4_pane_t

0xc984,	// (0x0001ac95) mp4_progress_pane_ParamLimits

0xc984,	// (0x0001ac95) mp4_progress_pane

0xc9b8,	// (0x0001acc9) mp4_rocker_pane_ParamLimits

0xc9b8,	// (0x0001acc9) mp4_rocker_pane

0xc9d4,	// (0x0001ace5) mp4_progress_pane_t1

0xc9f6,	// (0x0001ad07) mp4_progress_pane_t2

0x0001,

0xf7eb,	// (0x0001dafc) mp4_progress_pane_t

0xca18,	// (0x0001ad29) mup_progress_pane_cp04

0x99dd,	// (0x00017cee) mp4_rocker_pane_g1

0x92a0,	// (0x000175b1) aid_cell_size_keypad2_ParamLimits

0x92a0,	// (0x000175b1) aid_cell_size_keypad2

0x92a0,	// (0x000175b1) dialer2_ne_pane_ParamLimits

0x92a0,	// (0x000175b1) dialer2_ne_pane

0x92a0,	// (0x000175b1) grid_dialer2_keypad_pane_ParamLimits

0x92a0,	// (0x000175b1) grid_dialer2_keypad_pane

0xbc12,	// (0x00019f23) bg_popup_call_pane_cp07_ParamLimits

0xbc12,	// (0x00019f23) bg_popup_call_pane_cp07

0x483e,	// (0x00012b4f) dialer2_ne_pane_t1_ParamLimits

0x483e,	// (0x00012b4f) dialer2_ne_pane_t1

0x487d,	// (0x00012b8e) cell_dialer2_keypad_pane_ParamLimits

0x487d,	// (0x00012b8e) cell_dialer2_keypad_pane

0xbc12,	// (0x00019f23) bg_button_pane_pane_cp04_ParamLimits

0xbc12,	// (0x00019f23) bg_button_pane_pane_cp04

0x9997,	// (0x00017ca8) cell_dialer2_keypad_pane_g1_ParamLimits

0x9997,	// (0x00017ca8) cell_dialer2_keypad_pane_g1

0x1651,	// (0x0000f962) aid_placing_vt_set_content_ParamLimits

0x1651,	// (0x0000f962) aid_placing_vt_set_content

0x1679,	// (0x0000f98a) aid_placing_vt_set_title_ParamLimits

0x1679,	// (0x0000f98a) aid_placing_vt_set_title

0x9231,	// (0x00017542) main_image3_pane

0x48f2,	// (0x00012c03) area_side_right_pane_cp01_ParamLimits

0x48f2,	// (0x00012c03) area_side_right_pane_cp01

0x4909,	// (0x00012c1a) main_image3_pane_g1_ParamLimits

0x4909,	// (0x00012c1a) main_image3_pane_g1

0x4917,	// (0x00012c28) main_image3_pane_g2_ParamLimits

0x4917,	// (0x00012c28) main_image3_pane_g2

0x493f,	// (0x00012c50) main_image3_pane_g3_ParamLimits

0x493f,	// (0x00012c50) main_image3_pane_g3

0x4969,	// (0x00012c7a) main_image3_pane_g4_ParamLimits

0x4969,	// (0x00012c7a) main_image3_pane_g4

0x0003,

0xf7fa,	// (0x0001db0b) main_image3_pane_g_ParamLimits

0xf7fa,	// (0x0001db0b) main_image3_pane_g

0x4993,	// (0x00012ca4) main_image3_pane_t1_ParamLimits

0x4993,	// (0x00012ca4) main_image3_pane_t1

0x49eb,	// (0x00012cfc) main_image3_pane_t2_ParamLimits

0x49eb,	// (0x00012cfc) main_image3_pane_t2

0x4a3d,	// (0x00012d4e) main_image3_pane_t3_ParamLimits

0x4a3d,	// (0x00012d4e) main_image3_pane_t3

0x0003,

0xf803,	// (0x0001db14) main_image3_pane_t_ParamLimits

0xf803,	// (0x0001db14) main_image3_pane_t

0x92a0,	// (0x000175b1) grid_sctrl_middle_pane_cp01_ParamLimits

0x92a0,	// (0x000175b1) grid_sctrl_middle_pane_cp01

0x4ac5,	// (0x00012dd6) cell_sctrl_middle_pane_cp01_ParamLimits

0x4ac5,	// (0x00012dd6) cell_sctrl_middle_pane_cp01

0x4ae2,	// (0x00012df3) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x4ae2,	// (0x00012df3) cell_sctrl_middle_pane_cp01_g1

0x9231,	// (0x00017542) main_call4_pane

0x4af8,	// (0x00012e09) aid_size_button_call4_ParamLimits

0x4af8,	// (0x00012e09) aid_size_button_call4

0x4b2b,	// (0x00012e3c) call4_windows_pane_ParamLimits

0x4b2b,	// (0x00012e3c) call4_windows_pane

0x4b4a,	// (0x00012e5b) grid_call4_button_pane_ParamLimits

0x4b4a,	// (0x00012e5b) grid_call4_button_pane

0x4b7d,	// (0x00012e8e) call4_windows_conf_pane

0x4b92,	// (0x00012ea3) popup_call4_audio_first_window_ParamLimits

0x4b92,	// (0x00012ea3) popup_call4_audio_first_window

0x4be2,	// (0x00012ef3) popup_call4_audio_second_window_ParamLimits

0x4be2,	// (0x00012ef3) popup_call4_audio_second_window

0x4bf9,	// (0x00012f0a) popup_call4_audio_wait_window_ParamLimits

0x4bf9,	// (0x00012f0a) popup_call4_audio_wait_window

0x4c07,	// (0x00012f18) cell_call4_button_pane_ParamLimits

0x4c07,	// (0x00012f18) cell_call4_button_pane

0x4c2c,	// (0x00012f3d) bg_button_pane_cp09_ParamLimits

0x4c2c,	// (0x00012f3d) bg_button_pane_cp09

0x4c38,	// (0x00012f49) cell_call4_button_pane_g1_ParamLimits

0x4c38,	// (0x00012f49) cell_call4_button_pane_g1

0x4c5e,	// (0x00012f6f) cell_call4_button_pane_t1_ParamLimits

0x4c5e,	// (0x00012f6f) cell_call4_button_pane_t1

0xcac5,	// (0x0001add6) popup_call4_audio_conf_window_ParamLimits

0xcac5,	// (0x0001add6) popup_call4_audio_conf_window

0x4130,	// (0x00012441) mup3_progress_pane_t1_ParamLimits

0x414f,	// (0x00012460) mup3_progress_pane_t2_ParamLimits

0xc29f,	// (0x0001a5b0) mup3_progress_pane_t3_ParamLimits

0xf6dd,	// (0x0001d9ee) mup3_progress_pane_t_ParamLimits

0xc2bc,	// (0x0001a5cd) mup_progress_pane_cp03_ParamLimits

0x464f,	// (0x00012960) mup3_control_keys_pane_g4_copy1

0xc9b8,	// (0x0001acc9) mp4_rocker2_pane_ParamLimits

0xc9b8,	// (0x0001acc9) mp4_rocker2_pane

0xcad9,	// (0x0001adea) mp4_rocker2_pane_g1

0xcad9,	// (0x0001adea) mp4_rocker2_pane_g2

0xcad9,	// (0x0001adea) mp4_rocker2_pane_g3

0xcad9,	// (0x0001adea) mp4_rocker2_pane_g4

0xcad9,	// (0x0001adea) mp4_rocker2_pane_g5

0x0004,

0xf80c,	// (0x0001db1d) mp4_rocker2_pane_g

0x9231,	// (0x00017542) main_camera4_pane

0x9231,	// (0x00017542) main_video4_pane

0x474e,	// (0x00012a5f) main_video_tele_dialer_pane_t1_ParamLimits

0x474e,	// (0x00012a5f) main_video_tele_dialer_pane_t1

0x4767,	// (0x00012a78) main_video_tele_dialer_pane_t2_ParamLimits

0x4767,	// (0x00012a78) main_video_tele_dialer_pane_t2

0x0001,

0xf7c2,	// (0x0001dad3) main_video_tele_dialer_pane_t_ParamLimits

0xf7c2,	// (0x0001dad3) main_video_tele_dialer_pane_t

0x4ca0,	// (0x00012fb1) cam4_autofocus_pane_ParamLimits

0x4ca0,	// (0x00012fb1) cam4_autofocus_pane

0x4cb6,	// (0x00012fc7) cam4_image_uncrop_pane_ParamLimits

0x4cb6,	// (0x00012fc7) cam4_image_uncrop_pane

0x4cd0,	// (0x00012fe1) cam4_indicators_pane_ParamLimits

0x4cd0,	// (0x00012fe1) cam4_indicators_pane

0x4cfb,	// (0x0001300c) main_camera4_pane_g1_ParamLimits

0x4cfb,	// (0x0001300c) main_camera4_pane_g1

0x4d0d,	// (0x0001301e) main_camera4_pane_g2_ParamLimits

0x4d0d,	// (0x0001301e) main_camera4_pane_g2

0x4d20,	// (0x00013031) main_camera4_pane_g3_ParamLimits

0x4d20,	// (0x00013031) main_camera4_pane_g3

0x4d33,	// (0x00013044) main_camera4_pane_g4_ParamLimits

0x4d33,	// (0x00013044) main_camera4_pane_g4

0x4d46,	// (0x00013057) main_camera4_pane_g5_ParamLimits

0x4d46,	// (0x00013057) main_camera4_pane_g5

0x0005,

0xf817,	// (0x0001db28) main_camera4_pane_g_ParamLimits

0xf817,	// (0x0001db28) main_camera4_pane_g

0x4d6a,	// (0x0001307b) main_camera4_pane_t1_ParamLimits

0x4d6a,	// (0x0001307b) main_camera4_pane_t1

0x9997,	// (0x00017ca8) bg_tb_trans_pane_cp06

0xcb05,	// (0x0001ae16) cam4_indicators_pane_g1

0xcb16,	// (0x0001ae27) cam4_indicators_pane_g2

0x0002,

0xf832,	// (0x0001db43) cam4_indicators_pane_g

0xcb2e,	// (0x0001ae3f) cam4_indicators_pane_t1

0x4dce,	// (0x000130df) main_video4_pane_g1_ParamLimits

0x4dce,	// (0x000130df) main_video4_pane_g1

0x4ddd,	// (0x000130ee) main_video4_pane_g2_ParamLimits

0x4ddd,	// (0x000130ee) main_video4_pane_g2

0x4dec,	// (0x000130fd) main_video4_pane_g3_ParamLimits

0x4dec,	// (0x000130fd) main_video4_pane_g3

0x4dfb,	// (0x0001310c) main_video4_pane_g4_ParamLimits

0x4dfb,	// (0x0001310c) main_video4_pane_g4

0x0004,

0xf839,	// (0x0001db4a) main_video4_pane_g_ParamLimits

0xf839,	// (0x0001db4a) main_video4_pane_g

0x4e19,	// (0x0001312a) vid4_indicators_pane_ParamLimits

0x4e19,	// (0x0001312a) vid4_indicators_pane

0x4e47,	// (0x00013158) video4_image_uncrop_cif_pane_ParamLimits

0x4e47,	// (0x00013158) video4_image_uncrop_cif_pane

0x4e61,	// (0x00013172) video4_image_uncrop_nhd_pane_ParamLimits

0x4e61,	// (0x00013172) video4_image_uncrop_nhd_pane

0x4cb6,	// (0x00012fc7) video4_image_uncrop_vga_pane_ParamLimits

0x4cb6,	// (0x00012fc7) video4_image_uncrop_vga_pane

0x92a0,	// (0x000175b1) bg_tb_trans_pane_cp07

0xcb58,	// (0x0001ae69) vid4_indicators_pane_g1

0xcb6c,	// (0x0001ae7d) vid4_indicators_pane_g2

0xcb80,	// (0x0001ae91) vid4_indicators_pane_g3

0x0004,

0xf844,	// (0x0001db55) vid4_indicators_pane_g

0xcbad,	// (0x0001aebe) vid4_indicators_pane_t1

0x4e75,	// (0x00013186) cam4_autofocus_pane_g1

0x4e7d,	// (0x0001318e) cam4_autofocus_pane_g2

0x4e85,	// (0x00013196) cam4_autofocus_pane_g3

0x0002,

0xf84f,	// (0x0001db60) cam4_autofocus_pane_g

0x4e8d,	// (0x0001319e) cam4_autofocus_pane_g3_copy1

0x4796,	// (0x00012aa7) video_down_pane_cp_t1

0x47a4,	// (0x00012ab5) video_down_pane_cp_t2

0x0001,

0xf7c7,	// (0x0001dad8) video_down_pane_cp_t

0x92a0,	// (0x000175b1) popup_vitu2_window_ParamLimits

0x92a0,	// (0x000175b1) popup_vitu2_window

0x4e95,	// (0x000131a6) aid_size_cell2_itu2_ParamLimits

0x4e95,	// (0x000131a6) aid_size_cell2_itu2

0x4ebb,	// (0x000131cc) aid_size_cell_itu2_ParamLimits

0x4ebb,	// (0x000131cc) aid_size_cell_itu2

0x41da,	// (0x000124eb) bg_popup_window_pane_cp09_ParamLimits

0x41da,	// (0x000124eb) bg_popup_window_pane_cp09

0x4f17,	// (0x00013228) field_vitu2_entry_pane_ParamLimits

0x4f17,	// (0x00013228) field_vitu2_entry_pane

0x4f3d,	// (0x0001324e) grid_vitu2_function_pane_ParamLimits

0x4f3d,	// (0x0001324e) grid_vitu2_function_pane

0x4f8a,	// (0x0001329b) grid_vitu2_itu_pane_ParamLimits

0x4f8a,	// (0x0001329b) grid_vitu2_itu_pane

0x501c,	// (0x0001332d) cell_vitu2_itu_pane_ParamLimits

0x501c,	// (0x0001332d) cell_vitu2_itu_pane

0x5048,	// (0x00013359) cell_vitu2_function_pane_ParamLimits

0x5048,	// (0x00013359) cell_vitu2_function_pane

0xcbc4,	// (0x0001aed5) bg_popup_call_pane_cp08_ParamLimits

0xcbc4,	// (0x0001aed5) bg_popup_call_pane_cp08

0xcbdb,	// (0x0001aeec) field_vitu2_entry_pane_g1

0xcbe7,	// (0x0001aef8) field_vitu2_entry_pane_g2

0x0002,

0xf856,	// (0x0001db67) field_vitu2_entry_pane_g

0x5087,	// (0x00013398) field_vitu2_entry_pane_t1_ParamLimits

0x5087,	// (0x00013398) field_vitu2_entry_pane_t1

0xcbf3,	// (0x0001af04) field_vitu2_entry_pane_t2_ParamLimits

0xcbf3,	// (0x0001af04) field_vitu2_entry_pane_t2

0x0001,

0xf85d,	// (0x0001db6e) field_vitu2_entry_pane_t_ParamLimits

0xf85d,	// (0x0001db6e) field_vitu2_entry_pane_t

0x50b7,	// (0x000133c8) bg_button_pane_cp010_ParamLimits

0x50b7,	// (0x000133c8) bg_button_pane_cp010

0x50c5,	// (0x000133d6) cell_vitu2_itu_pane_g1

0x50eb,	// (0x000133fc) cell_vitu2_itu_pane_t1_ParamLimits

0x50eb,	// (0x000133fc) cell_vitu2_itu_pane_t1

0x5149,	// (0x0001345a) cell_vitu2_itu_pane_t2_ParamLimits

0x5149,	// (0x0001345a) cell_vitu2_itu_pane_t2

0x0002,

0xf867,	// (0x0001db78) cell_vitu2_itu_pane_t_ParamLimits

0xf867,	// (0x0001db78) cell_vitu2_itu_pane_t

0x92a0,	// (0x000175b1) bg_button_pane_cp011

0x5235,	// (0x00013546) cell_vitu2_function_pane_g1

0x9231,	// (0x00017542) main_myfav_hc_pane

0x4a8d,	// (0x00012d9e) popup_image3_note_pane_ParamLimits

0x4a8d,	// (0x00012d9e) popup_image3_note_pane

0x4aa9,	// (0x00012dba) popup_image3_tool_bar_pane_ParamLimits

0x4aa9,	// (0x00012dba) popup_image3_tool_bar_pane

0x51d7,	// (0x000134e8) cell_vitu2_itu_pane_t3_ParamLimits

0x51d7,	// (0x000134e8) cell_vitu2_itu_pane_t3

0x9231,	// (0x00017542) bg_popup_trans_pane

0xcc18,	// (0x0001af29) grid_image3_tool_bar_pane

0xcc22,	// (0x0001af33) bg_popup_trans_pane_g1

0x9ead,	// (0x000181be) bg_popup_trans_pane_g2

0xcc2a,	// (0x0001af3b) bg_popup_trans_pane_g3

0xcc32,	// (0x0001af43) bg_popup_trans_pane_g4

0xcc3a,	// (0x0001af4b) bg_popup_trans_pane_g5

0xcc42,	// (0x0001af53) bg_popup_trans_pane_g6

0xcc4a,	// (0x0001af5b) bg_popup_trans_pane_g7

0xcc52,	// (0x0001af63) bg_popup_trans_pane_g8

0x9e8d,	// (0x0001819e) bg_popup_trans_pane_g9

0x0008,

0xf86e,	// (0x0001db7f) bg_popup_trans_pane_g

0xcc5a,	// (0x0001af6b) cell_image3_tool_bar_pane_ParamLimits

0xcc5a,	// (0x0001af6b) cell_image3_tool_bar_pane

0x99dd,	// (0x00017cee) cell_image3_tool_bar_pane_g1

0x9231,	// (0x00017542) bg_popup_trans_pane_cp1

0xcc6e,	// (0x0001af7f) popup_image3_note_pane_t1

0xcc7c,	// (0x0001af8d) popup_image3_note_pane_t2

0xcc8a,	// (0x0001af9b) popup_image3_note_pane_t3

0x0002,

0xf881,	// (0x0001db92) popup_image3_note_pane_t

0xcc98,	// (0x0001afa9) popup_image3_note_pane_t3_copy1

0x5248,	// (0x00013559) bg_myfav_hc_instruction_pane_ParamLimits

0x5248,	// (0x00013559) bg_myfav_hc_instruction_pane

0x525c,	// (0x0001356d) cell_myfav_contact_pane_ParamLimits

0x525c,	// (0x0001356d) cell_myfav_contact_pane

0x527a,	// (0x0001358b) cell_myfav_contact_pane_cp1_ParamLimits

0x527a,	// (0x0001358b) cell_myfav_contact_pane_cp1

0x5292,	// (0x000135a3) cell_myfav_contact_pane_cp2_ParamLimits

0x5292,	// (0x000135a3) cell_myfav_contact_pane_cp2

0x52aa,	// (0x000135bb) cell_myfav_contact_pane_cp3_ParamLimits

0x52aa,	// (0x000135bb) cell_myfav_contact_pane_cp3

0x52c1,	// (0x000135d2) cell_myfav_contact_pane_cp4_ParamLimits

0x52c1,	// (0x000135d2) cell_myfav_contact_pane_cp4

0x52d9,	// (0x000135ea) cell_myfav_contact_pane_cp5_ParamLimits

0x52d9,	// (0x000135ea) cell_myfav_contact_pane_cp5

0x52ed,	// (0x000135fe) cell_myfav_contact_pane_cp6_ParamLimits

0x52ed,	// (0x000135fe) cell_myfav_contact_pane_cp6

0x5303,	// (0x00013614) cell_myfav_contact_pane_cp7_ParamLimits

0x5303,	// (0x00013614) cell_myfav_contact_pane_cp7

0xcca6,	// (0x0001afb7) listscroll_gen_pane_cp05

0x531d,	// (0x0001362e) main_myfav_hc_pane_g1_ParamLimits

0x531d,	// (0x0001362e) main_myfav_hc_pane_g1

0x5337,	// (0x00013648) main_myfav_hc_pane_g2_ParamLimits

0x5337,	// (0x00013648) main_myfav_hc_pane_g2

0x0002,

0xf888,	// (0x0001db99) main_myfav_hc_pane_g_ParamLimits

0xf888,	// (0x0001db99) main_myfav_hc_pane_g

0x5369,	// (0x0001367a) main_myfav_hc_pane_t1_ParamLimits

0x5369,	// (0x0001367a) main_myfav_hc_pane_t1

0xccaf,	// (0x0001afc0) main_myfav_hc_pane_t2_ParamLimits

0xccaf,	// (0x0001afc0) main_myfav_hc_pane_t2

0xccc1,	// (0x0001afd2) main_myfav_hc_pane_t3_ParamLimits

0xccc1,	// (0x0001afd2) main_myfav_hc_pane_t3

0x5380,	// (0x00013691) main_myfav_hc_pane_t4_ParamLimits

0x5380,	// (0x00013691) main_myfav_hc_pane_t4

0x0004,

0xf88f,	// (0x0001dba0) main_myfav_hc_pane_t_ParamLimits

0xf88f,	// (0x0001dba0) main_myfav_hc_pane_t

0x99dd,	// (0x00017cee) bg_myfav_hc_instruction_pane_g1

0xccd3,	// (0x0001afe4) cell_myfav_contact_pane_g1_ParamLimits

0xccd3,	// (0x0001afe4) cell_myfav_contact_pane_g1

0xccd3,	// (0x0001afe4) cell_myfav_contact_pane_g2_ParamLimits

0xccd3,	// (0x0001afe4) cell_myfav_contact_pane_g2

0xccdf,	// (0x0001aff0) cell_myfav_contact_pane_g3_ParamLimits

0xccdf,	// (0x0001aff0) cell_myfav_contact_pane_g3

0x99a5,	// (0x00017cb6) cell_myfav_contact_pane_g4_ParamLimits

0x99a5,	// (0x00017cb6) cell_myfav_contact_pane_g4

0xccec,	// (0x0001affd) cell_myfav_contact_pane_g5_ParamLimits

0xccec,	// (0x0001affd) cell_myfav_contact_pane_g5

0x0004,

0xf89a,	// (0x0001dbab) cell_myfav_contact_pane_g_ParamLimits

0xf89a,	// (0x0001dbab) cell_myfav_contact_pane_g

0x5351,	// (0x00013662) main_myfav_hc_pane_g3_ParamLimits

0x5351,	// (0x00013662) main_myfav_hc_pane_g3

0x0b2b,	// (0x0000ee3c) popup_adpt_find_window

0x53a8,	// (0x000136b9) afind_page_pane_ParamLimits

0x53a8,	// (0x000136b9) afind_page_pane

0x53be,	// (0x000136cf) aid_size_cell_afind_ParamLimits

0x53be,	// (0x000136cf) aid_size_cell_afind

0x53dc,	// (0x000136ed) bg_popup_sub_pane_cp09_ParamLimits

0x53dc,	// (0x000136ed) bg_popup_sub_pane_cp09

0x53ee,	// (0x000136ff) find_pane_cp01_ParamLimits

0x53ee,	// (0x000136ff) find_pane_cp01

0xccf8,	// (0x0001b009) grid_afind_control_pane_ParamLimits

0xccf8,	// (0x0001b009) grid_afind_control_pane

0x5402,	// (0x00013713) grid_afind_pane_ParamLimits

0x5402,	// (0x00013713) grid_afind_pane

0x5424,	// (0x00013735) cell_afind_pane_ParamLimits

0x5424,	// (0x00013735) cell_afind_pane

0x99dd,	// (0x00017cee) afind_page_pane_g1

0x548b,	// (0x0001379c) afind_page_pane_g2

0x5493,	// (0x000137a4) afind_page_pane_g3

0x0002,

0xf8a5,	// (0x0001dbb6) afind_page_pane_g

0x549b,	// (0x000137ac) afind_page_pane_t1

0xcd1e,	// (0x0001b02f) cell_afind_grid_control_pane_ParamLimits

0xcd1e,	// (0x0001b02f) cell_afind_grid_control_pane

0xcd2d,	// (0x0001b03e) bg_button_pane_cp69_ParamLimits

0xcd2d,	// (0x0001b03e) bg_button_pane_cp69

0x54a9,	// (0x000137ba) cell_afind_pane_g1_ParamLimits

0x54a9,	// (0x000137ba) cell_afind_pane_g1

0x54b6,	// (0x000137c7) cell_afind_pane_t1_ParamLimits

0x54b6,	// (0x000137c7) cell_afind_pane_t1

0xcd39,	// (0x0001b04a) bg_button_pane_cp72

0xcd41,	// (0x0001b052) cell_afind_grid_control_pane_g1

0x2eb8,	// (0x000111c9) aid_image_placing_area_ParamLimits

0x2eb8,	// (0x000111c9) aid_image_placing_area

0x9997,	// (0x00017ca8) field_vitu_entry_pane_g1_ParamLimits

0x9997,	// (0x00017ca8) field_vitu_entry_pane_g1

0x9997,	// (0x00017ca8) field_vitu_entry_pane_g2_ParamLimits

0x9997,	// (0x00017ca8) field_vitu_entry_pane_g2

0x0001,

0xf1bc,	// (0x0001d4cd) field_vitu_entry_pane_g_ParamLimits

0xf1bc,	// (0x0001d4cd) field_vitu_entry_pane_g

0xc5a1,	// (0x0001a8b2) cell_vitu_itu_pane_g1_ParamLimits

0xc584,	// (0x0001a895) cell_vitu_itu_pane_t3_ParamLimits

0xc584,	// (0x0001a895) cell_vitu_itu_pane_t3

0xc9d4,	// (0x0001ace5) mp4_progress_pane_t1_ParamLimits

0xc9f6,	// (0x0001ad07) mp4_progress_pane_t2_ParamLimits

0xf7eb,	// (0x0001dafc) mp4_progress_pane_t_ParamLimits

0xca18,	// (0x0001ad29) mup_progress_pane_cp04_ParamLimits

0x5394,	// (0x000136a5) main_myfav_hc_pane_t5_ParamLimits

0x5394,	// (0x000136a5) main_myfav_hc_pane_t5

0x9257,	// (0x00017568) aid_zoom_text_primary

0x0b2b,	// (0x0000ee3c) popup_adpt_find_window_ParamLimits

0x92a0,	// (0x000175b1) main_cam_set_pane

0x4ce7,	// (0x00012ff8) cam4_zoom_pane_ParamLimits

0x4ce7,	// (0x00012ff8) cam4_zoom_pane

0x54c8,	// (0x000137d9) main_cam_set_pane_g1_ParamLimits

0x54c8,	// (0x000137d9) main_cam_set_pane_g1

0x54d6,	// (0x000137e7) main_cam_set_pane_g2_ParamLimits

0x54d6,	// (0x000137e7) main_cam_set_pane_g2

0x0001,

0xf8ac,	// (0x0001dbbd) main_cam_set_pane_g_ParamLimits

0xf8ac,	// (0x0001dbbd) main_cam_set_pane_g

0x54f7,	// (0x00013808) main_cam_set_pane_t1_ParamLimits

0x54f7,	// (0x00013808) main_cam_set_pane_t1

0x5512,	// (0x00013823) main_cset_listscroll_pane_ParamLimits

0x5512,	// (0x00013823) main_cset_listscroll_pane

0x5538,	// (0x00013849) main_cset_slider_pane_ParamLimits

0x5538,	// (0x00013849) main_cset_slider_pane

0xcd52,	// (0x0001b063) main_cset_list_pane_ParamLimits

0xcd52,	// (0x0001b063) main_cset_list_pane

0xcd62,	// (0x0001b073) scroll_pane_cp028

0x555e,	// (0x0001386f) aid_area_touch_slider

0x557a,	// (0x0001388b) cset_slider_pane

0x559d,	// (0x000138ae) main_cset_slider_pane_g1

0x55b2,	// (0x000138c3) main_cset_slider_pane_g2

0x0011,

0xf8b1,	// (0x0001dbc2) main_cset_slider_pane_g

0xcd9b,	// (0x0001b0ac) main_cset_slider_pane_t1

0x5656,	// (0x00013967) main_cset_slider_pane_t2

0x5670,	// (0x00013981) main_cset_slider_pane_t3

0x568a,	// (0x0001399b) main_cset_slider_pane_t4

0x56a4,	// (0x000139b5) main_cset_slider_pane_t5

0x56be,	// (0x000139cf) main_cset_slider_pane_t6

0x56d3,	// (0x000139e4) main_cset_slider_pane_t7

0x000e,

0xf8d6,	// (0x0001dbe7) main_cset_slider_pane_t

0x57d7,	// (0x00013ae8) cset_list_set_pane_ParamLimits

0x57d7,	// (0x00013ae8) cset_list_set_pane

0xce62,	// (0x0001b173) aid_position_infowindow_above

0xce6a,	// (0x0001b17b) aid_position_infowindow_below

0x57e9,	// (0x00013afa) cset_list_set_pane_g1_ParamLimits

0x57e9,	// (0x00013afa) cset_list_set_pane_g1

0x57f5,	// (0x00013b06) cset_list_set_pane_g3_ParamLimits

0x57f5,	// (0x00013b06) cset_list_set_pane_g3

0x0001,

0xf8f5,	// (0x0001dc06) cset_list_set_pane_g_ParamLimits

0xf8f5,	// (0x0001dc06) cset_list_set_pane_g

0x5804,	// (0x00013b15) cset_list_set_pane_t1_ParamLimits

0x5804,	// (0x00013b15) cset_list_set_pane_t1

0x92a0,	// (0x000175b1) list_highlight_pane_cp021_ParamLimits

0x92a0,	// (0x000175b1) list_highlight_pane_cp021

0xa88b,	// (0x00018b9c) cset_slider_pane_g1

0xa89d,	// (0x00018bae) cset_slider_pane_g2

0xa894,	// (0x00018ba5) cset_slider_pane_g3

0x0002,

0xf8fa,	// (0x0001dc0b) cset_slider_pane_g

0xce72,	// (0x0001b183) aid_area_touch_cam4_zoom

0xce7a,	// (0x0001b18b) cam4_zoom_cont_pane

0xce82,	// (0x0001b193) cam4_zoom_pane_g1

0xce8a,	// (0x0001b19b) cam4_zoom_pane_g2

0x5819,	// (0x00013b2a) cam4_zoom_pane_g3

0x0002,

0xf901,	// (0x0001dc12) cam4_zoom_pane_g

0xce92,	// (0x0001b1a3) cam4_zoom_cont_pane_g1

0xce9b,	// (0x0001b1ac) cam4_zoom_cont_pane_g2

0xcea4,	// (0x0001b1b5) cam4_zoom_cont_pane_g3

0x0002,

0xf908,	// (0x0001dc19) cam4_zoom_cont_pane_g

0x4b16,	// (0x00012e27) call4_image_pane_ParamLimits

0x4b16,	// (0x00012e27) call4_image_pane

0x4b7d,	// (0x00012e8e) call4_windows_conf_pane_ParamLimits

0x4bc0,	// (0x00012ed1) popup_call4_audio_in_window_ParamLimits

0x4bc0,	// (0x00012ed1) popup_call4_audio_in_window

0x9231,	// (0x00017542) bg_popup_call2_act_pane_cp02

0xcabd,	// (0x0001adce) call4_list_conf_pane

0x99dd,	// (0x00017cee) call4_image_pane_g1

0x99dd,	// (0x00017cee) call4_image_pane_g2

0x0001,

0xf0af,	// (0x0001d3c0) call4_image_pane_g

0xcead,	// (0x0001b1be) list_single_graphic_popup_conf4_pane_ParamLimits

0xcead,	// (0x0001b1be) list_single_graphic_popup_conf4_pane

0x9231,	// (0x00017542) list_highlight_pane_cp022

0xcec0,	// (0x0001b1d1) list_single_graphic_popup_conf4_pane_g1

0xa468,	// (0x00018779) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf90f,	// (0x0001dc20) list_single_graphic_popup_conf4_pane_g

0xcec8,	// (0x0001b1d9) list_single_graphic_popup_conf4_pane_t1

0x179d,	// (0x0000faae) popup_vtel_slider_window_ParamLimits

0x179d,	// (0x0000faae) popup_vtel_slider_window

0xca2b,	// (0x0001ad3c) dialer2_ne_pane_t2_ParamLimits

0xca2b,	// (0x0001ad3c) dialer2_ne_pane_t2

0x0001,

0xf7f0,	// (0x0001db01) dialer2_ne_pane_t_ParamLimits

0xf7f0,	// (0x0001db01) dialer2_ne_pane_t

0xbc12,	// (0x00019f23) bg_popup_sub_pane_cp010_ParamLimits

0xbc12,	// (0x00019f23) bg_popup_sub_pane_cp010

0x5821,	// (0x00013b32) popup_vtel_slider_window_g1_ParamLimits

0x5821,	// (0x00013b32) popup_vtel_slider_window_g1

0x5834,	// (0x00013b45) popup_vtel_slider_window_g2_ParamLimits

0x5834,	// (0x00013b45) popup_vtel_slider_window_g2

0x0003,

0xf914,	// (0x0001dc25) popup_vtel_slider_window_g_ParamLimits

0xf914,	// (0x0001dc25) popup_vtel_slider_window_g

0x588a,	// (0x00013b9b) vtel_slider_pane_ParamLimits

0x588a,	// (0x00013b9b) vtel_slider_pane

0x58ac,	// (0x00013bbd) vtel_slider_pane_g1_ParamLimits

0x58ac,	// (0x00013bbd) vtel_slider_pane_g1

0x58c0,	// (0x00013bd1) vtel_slider_pane_g2_ParamLimits

0x58c0,	// (0x00013bd1) vtel_slider_pane_g2

0x58d8,	// (0x00013be9) vtel_slider_pane_g3_ParamLimits

0x58d8,	// (0x00013be9) vtel_slider_pane_g3

0x58ac,	// (0x00013bbd) vtel_slider_pane_g4_ParamLimits

0x58ac,	// (0x00013bbd) vtel_slider_pane_g4

0x58ee,	// (0x00013bff) vtel_slider_pane_g5_ParamLimits

0x58ee,	// (0x00013bff) vtel_slider_pane_g5

0x0004,

0xf91d,	// (0x0001dc2e) vtel_slider_pane_g_ParamLimits

0xf91d,	// (0x0001dc2e) vtel_slider_pane_g

0x92a0,	// (0x000175b1) main_gallery2_pane

0x4ee7,	// (0x000131f8) aid_size_row_itut2_dropdow_list_ParamLimits

0x4ee7,	// (0x000131f8) aid_size_row_itut2_dropdow_list

0x4f61,	// (0x00013272) grid_vitu2_function_top_pane_ParamLimits

0x4f61,	// (0x00013272) grid_vitu2_function_top_pane

0x4fc5,	// (0x000132d6) popup_vitu2_dropdown_list_window_ParamLimits

0x4fc5,	// (0x000132d6) popup_vitu2_dropdown_list_window

0x4ff0,	// (0x00013301) popup_vitu2_match_list_window

0x5904,	// (0x00013c15) cell_vitu2_function_top_pane_ParamLimits

0x5904,	// (0x00013c15) cell_vitu2_function_top_pane

0x591c,	// (0x00013c2d) cell_vitu2_function_top_pane_cp01_ParamLimits

0x591c,	// (0x00013c2d) cell_vitu2_function_top_pane_cp01

0x5938,	// (0x00013c49) cell_vitu2_function_top_wide_pane_ParamLimits

0x5938,	// (0x00013c49) cell_vitu2_function_top_wide_pane

0x92a0,	// (0x000175b1) bg_button_pane_cp012

0x5956,	// (0x00013c67) cell_vitu2_function_top_pane_g1

0xcede,	// (0x0001b1ef) bg_button_pane_cp013_ParamLimits

0xcede,	// (0x0001b1ef) bg_button_pane_cp013

0x596a,	// (0x00013c7b) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x596a,	// (0x00013c7b) cell_vitu2_function_top_wide_pane_g1

0x92a0,	// (0x000175b1) bg_popup_sub_pane_cp20

0x5982,	// (0x00013c93) list_vitu2_match_list_pane

0xcc22,	// (0x0001af33) bg_popup_sub_pane_cp20_g1

0xcc2a,	// (0x0001af3b) bg_popup_sub_pane_cp20_g2

0x9ead,	// (0x000181be) bg_popup_sub_pane_cp20_g3

0xcc32,	// (0x0001af43) bg_popup_sub_pane_cp20_g4

0x9e8d,	// (0x0001819e) bg_popup_sub_pane_cp20_g5

0xcefa,	// (0x0001b20b) bg_popup_sub_pane_cp20_g6

0xcc42,	// (0x0001af53) bg_popup_sub_pane_cp20_g7

0xcc4a,	// (0x0001af5b) bg_popup_sub_pane_cp20_g8

0xcc52,	// (0x0001af63) bg_popup_sub_pane_cp20_g9

0x0008,

0xf928,	// (0x0001dc39) bg_popup_sub_pane_cp20_g

0xcf02,	// (0x0001b213) list_vitu2_match_list_item_pane_ParamLimits

0xcf02,	// (0x0001b213) list_vitu2_match_list_item_pane

0xcf14,	// (0x0001b225) list_vitu2_match_list_item_pane_t1

0x9231,	// (0x00017542) bg_popup_sub_pane_cp21

0x9c8a,	// (0x00017f9b) grid_vitu2_dropdown_list_pane

0x599a,	// (0x00013cab) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x599a,	// (0x00013cab) cell_vitu2_dropdown_list_char_pane

0x59ba,	// (0x00013ccb) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x59ba,	// (0x00013ccb) cell_vitu2_dropdown_list_ctrl_pane

0xcf22,	// (0x0001b233) cell_vitu2_dropdown_list_char_pane_g1

0xcf2b,	// (0x0001b23c) cell_vitu2_dropdown_list_char_pane_g2

0xcf34,	// (0x0001b245) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf93b,	// (0x0001dc4c) cell_vitu2_dropdown_list_char_pane_g

0x59e2,	// (0x00013cf3) cell_vitu2_dropdown_list_char_pane_t1

0x59f0,	// (0x00013d01) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x59f0,	// (0x00013d01) cell_vitu2_dropdown_list_ctrl_pane_g1

0x59fd,	// (0x00013d0e) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x59fd,	// (0x00013d0e) cell_vitu2_dropdown_list_ctrl_pane_g2

0x5a0a,	// (0x00013d1b) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x5a0a,	// (0x00013d1b) cell_vitu2_dropdown_list_ctrl_pane_g3

0x5a17,	// (0x00013d28) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x5a17,	// (0x00013d28) cell_vitu2_dropdown_list_ctrl_pane_g4

0x9997,	// (0x00017ca8) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x9997,	// (0x00017ca8) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf942,	// (0x0001dc53) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf942,	// (0x0001dc53) cell_vitu2_dropdown_list_ctrl_pane_g

0x5a33,	// (0x00013d44) aid_size_cell_gallery2_ParamLimits

0x5a33,	// (0x00013d44) aid_size_cell_gallery2

0x5a51,	// (0x00013d62) grid_gallery2_pane_ParamLimits

0x5a51,	// (0x00013d62) grid_gallery2_pane

0x5a6b,	// (0x00013d7c) scroll_pane_cp029_ParamLimits

0x5a6b,	// (0x00013d7c) scroll_pane_cp029

0x5a7c,	// (0x00013d8d) cell_gallery2_pane_ParamLimits

0x5a7c,	// (0x00013d8d) cell_gallery2_pane

0xcf3d,	// (0x0001b24e) cell_gallery2_pane_g2

0x5adb,	// (0x00013dec) cell_gallery2_pane_g3

0xcf45,	// (0x0001b256) cell_gallery2_pane_g4

0xcf4d,	// (0x0001b25e) cell_gallery2_pane_g5

0x9c8a,	// (0x00017f9b) grid_highlight_pane_cp10

0x4ff0,	// (0x00013301) popup_vitu2_match_list_window_ParamLimits

0x5005,	// (0x00013316) popup_vitu2_query_window_ParamLimits

0x5005,	// (0x00013316) popup_vitu2_query_window

0x9231,	// (0x00017542) bg_vitu2_candi_button_pane

0xcf22,	// (0x0001b233) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xcf2b,	// (0x0001b23c) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xcf34,	// (0x0001b245) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x5ae3,	// (0x00013df4) bg_button_pane_cp015

0x5af4,	// (0x00013e05) bg_button_pane_cp016

0x5b00,	// (0x00013e11) bg_button_pane_cp017

0xa81b,	// (0x00018b2c) bg_popup_sub_pane_cp22

0xcf55,	// (0x0001b266) popup_vitu2_query_window_g1

0x5b3e,	// (0x00013e4f) popup_vitu2_query_window_g2

0x0002,

0xf94d,	// (0x0001dc5e) popup_vitu2_query_window_g

0x5b60,	// (0x00013e71) popup_vitu2_query_window_t1_ParamLimits

0x5b60,	// (0x00013e71) popup_vitu2_query_window_t1

0x5b93,	// (0x00013ea4) popup_vitu2_query_window_t2_ParamLimits

0x5b93,	// (0x00013ea4) popup_vitu2_query_window_t2

0x5ba5,	// (0x00013eb6) popup_vitu2_query_window_t3_ParamLimits

0x5ba5,	// (0x00013eb6) popup_vitu2_query_window_t3

0x5bcd,	// (0x00013ede) popup_vitu2_query_window_t4_ParamLimits

0x5bcd,	// (0x00013ede) popup_vitu2_query_window_t4

0x5be1,	// (0x00013ef2) popup_vitu2_query_window_t5_ParamLimits

0x5be1,	// (0x00013ef2) popup_vitu2_query_window_t5

0x0006,

0xf954,	// (0x0001dc65) popup_vitu2_query_window_t_ParamLimits

0xf954,	// (0x0001dc65) popup_vitu2_query_window_t

0xcd4a,	// (0x0001b05b) main_cset_text_pane

0x555e,	// (0x0001386f) aid_area_touch_slider_ParamLimits

0x557a,	// (0x0001388b) cset_slider_pane_ParamLimits

0x559d,	// (0x000138ae) main_cset_slider_pane_g1_ParamLimits

0x55b2,	// (0x000138c3) main_cset_slider_pane_g2_ParamLimits

0xcd6b,	// (0x0001b07c) main_cset_slider_pane_g3_ParamLimits

0xcd6b,	// (0x0001b07c) main_cset_slider_pane_g3

0x55c7,	// (0x000138d8) main_cset_slider_pane_g4_ParamLimits

0x55c7,	// (0x000138d8) main_cset_slider_pane_g4

0x55d6,	// (0x000138e7) main_cset_slider_pane_g5_ParamLimits

0x55d6,	// (0x000138e7) main_cset_slider_pane_g5

0x55e2,	// (0x000138f3) main_cset_slider_pane_g6_ParamLimits

0x55e2,	// (0x000138f3) main_cset_slider_pane_g6

0xf8b1,	// (0x0001dbc2) main_cset_slider_pane_g_ParamLimits

0xcd9b,	// (0x0001b0ac) main_cset_slider_pane_t1_ParamLimits

0x5656,	// (0x00013967) main_cset_slider_pane_t2_ParamLimits

0x5670,	// (0x00013981) main_cset_slider_pane_t3_ParamLimits

0x568a,	// (0x0001399b) main_cset_slider_pane_t4_ParamLimits

0x56a4,	// (0x000139b5) main_cset_slider_pane_t5_ParamLimits

0x56be,	// (0x000139cf) main_cset_slider_pane_t6_ParamLimits

0x56d3,	// (0x000139e4) main_cset_slider_pane_t7_ParamLimits

0x56fd,	// (0x00013a0e) main_cset_slider_pane_t8_ParamLimits

0x56fd,	// (0x00013a0e) main_cset_slider_pane_t8

0x5725,	// (0x00013a36) main_cset_slider_pane_t9_ParamLimits

0x5725,	// (0x00013a36) main_cset_slider_pane_t9

0x574d,	// (0x00013a5e) main_cset_slider_pane_t10_ParamLimits

0x574d,	// (0x00013a5e) main_cset_slider_pane_t10

0x5775,	// (0x00013a86) main_cset_slider_pane_t11_ParamLimits

0x5775,	// (0x00013a86) main_cset_slider_pane_t11

0x579d,	// (0x00013aae) main_cset_slider_pane_t12_ParamLimits

0x579d,	// (0x00013aae) main_cset_slider_pane_t12

0x57ba,	// (0x00013acb) main_cset_slider_pane_t13_ParamLimits

0x57ba,	// (0x00013acb) main_cset_slider_pane_t13

0xf8d6,	// (0x0001dbe7) main_cset_slider_pane_t_ParamLimits

0x9231,	// (0x00017542) bg_popup_sub_pane_cp011

0xcf61,	// (0x0001b272) main_cset_text_pane_g1

0xcf69,	// (0x0001b27a) main_cset_text_pane_t1

0xcf77,	// (0x0001b288) main_cset_text_pane_t2

0xcf85,	// (0x0001b296) main_cset_text_pane_t3

0xcf93,	// (0x0001b2a4) main_cset_text_pane_t4

0xcfa1,	// (0x0001b2b2) main_cset_text_pane_t5

0xcfaf,	// (0x0001b2c0) main_cset_text_pane_t6

0xcfbd,	// (0x0001b2ce) main_cset_text_pane_t7

0x0006,

0xf963,	// (0x0001dc74) main_cset_text_pane_t

0x9231,	// (0x00017542) main_cam4_burst_pane

0x9231,	// (0x00017542) main_cam5_pane

0xcd0c,	// (0x0001b01d) bg_button_pane_cp019

0xcd15,	// (0x0001b026) bg_button_pane_cp020

0xcd77,	// (0x0001b088) main_cset_slider_pane_g7_ParamLimits

0xcd77,	// (0x0001b088) main_cset_slider_pane_g7

0xcd83,	// (0x0001b094) main_cset_slider_pane_g8_ParamLimits

0xcd83,	// (0x0001b094) main_cset_slider_pane_g8

0x55f6,	// (0x00013907) main_cset_slider_pane_g9_ParamLimits

0x55f6,	// (0x00013907) main_cset_slider_pane_g9

0x5602,	// (0x00013913) main_cset_slider_pane_g10_ParamLimits

0x5602,	// (0x00013913) main_cset_slider_pane_g10

0x560e,	// (0x0001391f) main_cset_slider_pane_g11_ParamLimits

0x560e,	// (0x0001391f) main_cset_slider_pane_g11

0x561a,	// (0x0001392b) main_cset_slider_pane_g12_ParamLimits

0x561a,	// (0x0001392b) main_cset_slider_pane_g12

0x5626,	// (0x00013937) main_cset_slider_pane_g13_ParamLimits

0x5626,	// (0x00013937) main_cset_slider_pane_g13

0x5632,	// (0x00013943) main_cset_slider_pane_g14_ParamLimits

0x5632,	// (0x00013943) main_cset_slider_pane_g14

0x563e,	// (0x0001394f) main_cset_slider_pane_g15_ParamLimits

0x563e,	// (0x0001394f) main_cset_slider_pane_g15

0xcdc3,	// (0x0001b0d4) main_cset_slider_pane_t14_ParamLimits

0xcdc3,	// (0x0001b0d4) main_cset_slider_pane_t14

0xce29,	// (0x0001b13a) main_cset_slider_pane_t15_ParamLimits

0xce29,	// (0x0001b13a) main_cset_slider_pane_t15

0x5c4b,	// (0x00013f5c) aid_cam4_burst_size_cell_ParamLimits

0x5c4b,	// (0x00013f5c) aid_cam4_burst_size_cell

0x5c6b,	// (0x00013f7c) grid_cam4_burst_pane_ParamLimits

0x5c6b,	// (0x00013f7c) grid_cam4_burst_pane

0x5ca3,	// (0x00013fb4) linegrid_cam4_burst_pane_ParamLimits

0x5ca3,	// (0x00013fb4) linegrid_cam4_burst_pane

0xcfcb,	// (0x0001b2dc) scroll_pane_cp30_ParamLimits

0xcfcb,	// (0x0001b2dc) scroll_pane_cp30

0x5cc7,	// (0x00013fd8) cell_cam4_burst_pane_ParamLimits

0x5cc7,	// (0x00013fd8) cell_cam4_burst_pane

0xcfd7,	// (0x0001b2e8) linegrid_cam4_burst_pane_g1_ParamLimits

0xcfd7,	// (0x0001b2e8) linegrid_cam4_burst_pane_g1

0x5d14,	// (0x00014025) linegrid_cam4_burst_pane_g2_ParamLimits

0x5d14,	// (0x00014025) linegrid_cam4_burst_pane_g2

0xcfe4,	// (0x0001b2f5) linegrid_cam4_burst_pane_g3_ParamLimits

0xcfe4,	// (0x0001b2f5) linegrid_cam4_burst_pane_g3

0x0002,

0xf972,	// (0x0001dc83) linegrid_cam4_burst_pane_g_ParamLimits

0xf972,	// (0x0001dc83) linegrid_cam4_burst_pane_g

0x5d25,	// (0x00014036) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x5d25,	// (0x00014036) linegrid_cam4_burst_pane_g3_copy1

0xcff1,	// (0x0001b302) linegrid_cam4_burst_pane_g4_ParamLimits

0xcff1,	// (0x0001b302) linegrid_cam4_burst_pane_g4

0x5d3f,	// (0x00014050) linegrid_cam4_burst_pane_g5_ParamLimits

0x5d3f,	// (0x00014050) linegrid_cam4_burst_pane_g5

0x5d50,	// (0x00014061) linegrid_cam4_burst_pane_g6_ParamLimits

0x5d50,	// (0x00014061) linegrid_cam4_burst_pane_g6

0xcffe,	// (0x0001b30f) linegrid_cam4_burst_pane_g7_ParamLimits

0xcffe,	// (0x0001b30f) linegrid_cam4_burst_pane_g7

0x5d67,	// (0x00014078) cell_cam4_burst_pane_g1

0xd017,	// (0x0001b328) main_cam5_pane_t1_ParamLimits

0xd017,	// (0x0001b328) main_cam5_pane_t1

0xd029,	// (0x0001b33a) main_cam5_pane_t2_ParamLimits

0xd029,	// (0x0001b33a) main_cam5_pane_t2

0xd03b,	// (0x0001b34c) main_cam5_pane_t3_ParamLimits

0xd03b,	// (0x0001b34c) main_cam5_pane_t3

0xd04d,	// (0x0001b35e) main_cam5_pane_t4_ParamLimits

0xd04d,	// (0x0001b35e) main_cam5_pane_t4

0xd065,	// (0x0001b376) main_cam5_pane_t5_ParamLimits

0xd065,	// (0x0001b376) main_cam5_pane_t5

0xd079,	// (0x0001b38a) main_cam5_pane_t6_ParamLimits

0xd079,	// (0x0001b38a) main_cam5_pane_t6

0xd08d,	// (0x0001b39e) main_cam5_pane_t7_ParamLimits

0xd08d,	// (0x0001b39e) main_cam5_pane_t7

0xd09f,	// (0x0001b3b0) main_cam5_pane_t8_ParamLimits

0xd09f,	// (0x0001b3b0) main_cam5_pane_t8

0xd0bb,	// (0x0001b3cc) main_cam5_pane_t9_ParamLimits

0xd0bb,	// (0x0001b3cc) main_cam5_pane_t9

0xd0cd,	// (0x0001b3de) main_cam5_pane_t10_ParamLimits

0xd0cd,	// (0x0001b3de) main_cam5_pane_t10

0xd0df,	// (0x0001b3f0) main_cam5_pane_t11_ParamLimits

0xd0df,	// (0x0001b3f0) main_cam5_pane_t11

0xd0f1,	// (0x0001b402) main_cam5_pane_t12_ParamLimits

0xd0f1,	// (0x0001b402) main_cam5_pane_t12

0xd106,	// (0x0001b417) main_cam5_pane_t13_ParamLimits

0xd106,	// (0x0001b417) main_cam5_pane_t13

0x000c,

0xf97e,	// (0x0001dc8f) main_cam5_pane_t_ParamLimits

0xf97e,	// (0x0001dc8f) main_cam5_pane_t

0x0bac,	// (0x0000eebd) popup_scut_keymap_window_ParamLimits

0x0bac,	// (0x0000eebd) popup_scut_keymap_window

0x5d7a,	// (0x0001408b) aid_size_cell_brow_shortcut

0x9c8a,	// (0x00017f9b) bg_popup_window_pane_cp010

0x5d86,	// (0x00014097) grid_scut_pane

0x5d92,	// (0x000140a3) cell_scut_pane_ParamLimits

0x5d92,	// (0x000140a3) cell_scut_pane

0x5da9,	// (0x000140ba) cell_scut_pane_g1

0xd123,	// (0x0001b434) cell_scut_pane_t1

0xd132,	// (0x0001b443) cell_scut_pane_t2

0x5db2,	// (0x000140c3) cell_scut_pane_t3

0x0002,

0xf999,	// (0x0001dcaa) cell_scut_pane_t

0x3cf3,	// (0x00012004) main_mup3_pane_g8_ParamLimits

0x3cf3,	// (0x00012004) main_mup3_pane_g8

0x4f01,	// (0x00013212) area_vitu2_query_pane_ParamLimits

0x4f01,	// (0x00013212) area_vitu2_query_pane

0x5b0c,	// (0x00013e1d) input_focus_pane_cp08

0xd141,	// (0x0001b452) area_vitu2_query_pane_g1

0x5dc0,	// (0x000140d1) area_vitu2_query_pane_g2

0x0001,

0xf9a0,	// (0x0001dcb1) area_vitu2_query_pane_g

0x5dcf,	// (0x000140e0) area_vitu2_query_pane_t1_ParamLimits

0x5dcf,	// (0x000140e0) area_vitu2_query_pane_t1

0x5de3,	// (0x000140f4) area_vitu2_query_pane_t2_ParamLimits

0x5de3,	// (0x000140f4) area_vitu2_query_pane_t2

0x5df7,	// (0x00014108) area_vitu2_query_pane_t3_ParamLimits

0x5df7,	// (0x00014108) area_vitu2_query_pane_t3

0xd14d,	// (0x0001b45e) area_vitu2_query_pane_t4_ParamLimits

0xd14d,	// (0x0001b45e) area_vitu2_query_pane_t4

0xd175,	// (0x0001b486) area_vitu2_query_pane_t5_ParamLimits

0xd175,	// (0x0001b486) area_vitu2_query_pane_t5

0xd19d,	// (0x0001b4ae) area_vitu2_query_pane_t6_ParamLimits

0xd19d,	// (0x0001b4ae) area_vitu2_query_pane_t6

0x0006,

0xf9a5,	// (0x0001dcb6) area_vitu2_query_pane_t_ParamLimits

0xf9a5,	// (0x0001dcb6) area_vitu2_query_pane_t

0x5e1f,	// (0x00014130) bg_button_pane_cp018

0x5e2b,	// (0x0001413c) bg_button_pane_cp021

0x5e37,	// (0x00014148) bg_button_pane_cp022

0x5e56,	// (0x00014167) input_focus_pane_cp09

0xa577,	// (0x00018888) aid_size_touch_mv_arrow_left

0xa5a2,	// (0x000188b3) aid_size_touch_mv_arrow_right

0xce11,	// (0x0001b122) main_cset_slider_pane_g16_ParamLimits

0xce11,	// (0x0001b122) main_cset_slider_pane_g16

0xce1d,	// (0x0001b12e) main_cset_slider_pane_g17_ParamLimits

0xce1d,	// (0x0001b12e) main_cset_slider_pane_g17

0x5d67,	// (0x00014078) cell_cam4_burst_pane_g1_ParamLimits

0x9231,	// (0x00017542) compa_mode_pane

0x5844,	// (0x00013b55) popup_vtel_slider_window_g3_ParamLimits

0x5844,	// (0x00013b55) popup_vtel_slider_window_g3

0x585b,	// (0x00013b6c) popup_vtel_slider_window_g4_ParamLimits

0x585b,	// (0x00013b6c) popup_vtel_slider_window_g4

0x5872,	// (0x00013b83) popup_vtel_slider_window_t1_ParamLimits

0x5872,	// (0x00013b83) popup_vtel_slider_window_t1

0x9231,	// (0x00017542) main_cl_pane

0xbaa9,	// (0x00019dba) popup_imed_adjust2_window_ParamLimits

0xa81b,	// (0x00018b2c) bg_tb_trans_pane_cp05_ParamLimits

0xc4c1,	// (0x0001a7d2) popup_imed_adjust2_window_g1_ParamLimits

0xc4d0,	// (0x0001a7e1) popup_imed_adjust2_window_g2_ParamLimits

0xc4d0,	// (0x0001a7e1) popup_imed_adjust2_window_g2

0xc4dc,	// (0x0001a7ed) popup_imed_adjust2_window_g3_ParamLimits

0xc4dc,	// (0x0001a7ed) popup_imed_adjust2_window_g3

0x0002,

0xf720,	// (0x0001da31) popup_imed_adjust2_window_g_ParamLimits

0xf720,	// (0x0001da31) popup_imed_adjust2_window_g

0xc4e8,	// (0x0001a7f9) popup_imed_adjust2_window_t1_ParamLimits

0xc500,	// (0x0001a811) slider_imed_adjust_pane_ParamLimits

0xc514,	// (0x0001a825) slider_imed_adjust_pane_g1_ParamLimits

0xc524,	// (0x0001a835) slider_imed_adjust_pane_g2_ParamLimits

0xc534,	// (0x0001a845) slider_imed_adjust_pane_g3_ParamLimits

0xc545,	// (0x0001a856) slider_imed_adjust_pane_g4_ParamLimits

0xf727,	// (0x0001da38) slider_imed_adjust_pane_g_ParamLimits

0x4c88,	// (0x00012f99) aid_touch_area_cam4_ParamLimits

0x4c88,	// (0x00012f99) aid_touch_area_cam4

0xcae1,	// (0x0001adf2) battery_pane_cp01

0x4d57,	// (0x00013068) main_camera4_pane_g6_ParamLimits

0x4d57,	// (0x00013068) main_camera4_pane_g6

0x4d81,	// (0x00013092) main_camera4_pane_t2_ParamLimits

0x4d81,	// (0x00013092) main_camera4_pane_t2

0x0001,

0xf824,	// (0x0001db35) main_camera4_pane_t_ParamLimits

0xf824,	// (0x0001db35) main_camera4_pane_t

0x4db6,	// (0x000130c7) aid_touch_area_vid4_ParamLimits

0x4db6,	// (0x000130c7) aid_touch_area_vid4

0x4e0a,	// (0x0001311b) main_video4_pane_g5_ParamLimits

0x4e0a,	// (0x0001311b) main_video4_pane_g5

0x4e2f,	// (0x00013140) vid4_progress_pane_ParamLimits

0x4e2f,	// (0x00013140) vid4_progress_pane

0xcd8f,	// (0x0001b0a0) main_cset_slider_pane_g18_ParamLimits

0xcd8f,	// (0x0001b0a0) main_cset_slider_pane_g18

0xd00b,	// (0x0001b31c) cell_cam4_burst_pane_g2_ParamLimits

0xd00b,	// (0x0001b31c) cell_cam4_burst_pane_g2

0x0001,

0xf979,	// (0x0001dc8a) cell_cam4_burst_pane_g_ParamLimits

0xf979,	// (0x0001dc8a) cell_cam4_burst_pane_g

0x9a55,	// (0x00017d66) bg_cl_pane_ParamLimits

0x9a55,	// (0x00017d66) bg_cl_pane

0x5e66,	// (0x00014177) cl_header_pane_ParamLimits

0x5e66,	// (0x00014177) cl_header_pane

0x5e7a,	// (0x0001418b) cl_listscroll_pane_ParamLimits

0x5e7a,	// (0x0001418b) cl_listscroll_pane

0xd1e9,	// (0x0001b4fa) bg_cl_pane_g1

0xd1f1,	// (0x0001b502) bg_cl_pane_g2

0xd1f9,	// (0x0001b50a) bg_cl_pane_g3

0xd201,	// (0x0001b512) bg_cl_pane_g4

0xd209,	// (0x0001b51a) bg_cl_pane_g5

0xd211,	// (0x0001b522) bg_cl_pane_g6

0xd219,	// (0x0001b52a) bg_cl_pane_g7

0xd221,	// (0x0001b532) bg_cl_pane_g8

0xd229,	// (0x0001b53a) bg_cl_pane_g9

0x0008,

0xf9b4,	// (0x0001dcc5) bg_cl_pane_g

0x5e8a,	// (0x0001419b) aid_height_cl_leading_ParamLimits

0x5e8a,	// (0x0001419b) aid_height_cl_leading

0x5e96,	// (0x000141a7) aid_height_cl_text_ParamLimits

0x5e96,	// (0x000141a7) aid_height_cl_text

0x92a0,	// (0x000175b1) bg_cl_header_pane_ParamLimits

0x92a0,	// (0x000175b1) bg_cl_header_pane

0x5eb5,	// (0x000141c6) cl_header_pane_g1_ParamLimits

0x5eb5,	// (0x000141c6) cl_header_pane_g1

0x5ecb,	// (0x000141dc) cl_header_pane_t1_ParamLimits

0x5ecb,	// (0x000141dc) cl_header_pane_t1

0xd231,	// (0x0001b542) cl_list_pane

0xcd62,	// (0x0001b073) hc_scroll_pane_cp01

0x9e8d,	// (0x0001819e) bg_cl_header_pane_g1

0xcc22,	// (0x0001af33) bg_cl_header_pane_g2

0x9ead,	// (0x000181be) bg_cl_header_pane_g3

0xcc32,	// (0x0001af43) bg_cl_header_pane_g4

0xcc2a,	// (0x0001af3b) bg_cl_header_pane_g5

0xcefa,	// (0x0001b20b) bg_cl_header_pane_g6

0xcc4a,	// (0x0001af5b) bg_cl_header_pane_g7

0xcc52,	// (0x0001af63) bg_cl_header_pane_g8

0xcc42,	// (0x0001af53) bg_cl_header_pane_g9

0x0008,

0xf9c7,	// (0x0001dcd8) bg_cl_header_pane_g

0x5ee4,	// (0x000141f5) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x5ee4,	// (0x000141f5) hc_cl_list_double_graphic_heading_pane

0x5ef5,	// (0x00014206) hc_cl_list_single_graphic_pane_ParamLimits

0x5ef5,	// (0x00014206) hc_cl_list_single_graphic_pane

0x5f0e,	// (0x0001421f) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x5f0e,	// (0x0001421f) hc_cl_list_single_graphic_pane_g1

0x5f1a,	// (0x0001422b) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x5f1a,	// (0x0001422b) hc_cl_list_single_graphic_pane_g2

0x0001,

0xf9da,	// (0x0001dceb) hc_cl_list_single_graphic_pane_g_ParamLimits

0xf9da,	// (0x0001dceb) hc_cl_list_single_graphic_pane_g

0x5f2e,	// (0x0001423f) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x5f2e,	// (0x0001423f) hc_cl_list_single_graphic_pane_t1

0x5f0e,	// (0x0001421f) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x5f0e,	// (0x0001421f) hc_cl_list_double_graphic_heading_pane_g1

0x5f43,	// (0x00014254) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x5f43,	// (0x00014254) hc_cl_list_double_graphic_heading_pane_g2

0x5f57,	// (0x00014268) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x5f57,	// (0x00014268) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xf9df,	// (0x0001dcf0) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xf9df,	// (0x0001dcf0) hc_cl_list_double_graphic_heading_pane_g

0x5f6b,	// (0x0001427c) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x5f6b,	// (0x0001427c) hc_cl_list_double_graphic_heading_pane_t1

0x5f80,	// (0x00014291) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x5f80,	// (0x00014291) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xf9e6,	// (0x0001dcf7) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xf9e6,	// (0x0001dcf7) hc_cl_list_double_graphic_heading_pane_t

0xd242,	// (0x0001b553) vid4_progress_pane_g1

0xd252,	// (0x0001b563) vid4_progress_pane_g2

0x5f95,	// (0x000142a6) vid4_progress_pane_g3

0xd262,	// (0x0001b573) vid4_progress_pane_g4

0x0004,

0xf9eb,	// (0x0001dcfc) vid4_progress_pane_g

0x5fa7,	// (0x000142b8) vid4_progress_pane_t1

0xd27a,	// (0x0001b58b) vid4_progress_pane_t2

0x0002,

0xf9f6,	// (0x0001dd07) vid4_progress_pane_t

0x5fbd,	// (0x000142ce) wait_bar_pane_cp07

0xbd75,	// (0x0001a086) blid_firmament_pane_ParamLimits

0xbdb8,	// (0x0001a0c9) popup_blid_sat_info2_window_g1

0xbddc,	// (0x0001a0ed) popup_blid_sat_info2_window_t3

0xbdea,	// (0x0001a0fb) popup_blid_sat_info2_window_t4

0xbdf8,	// (0x0001a109) popup_blid_sat_info2_window_t5

0xbe06,	// (0x0001a117) popup_blid_sat_info2_window_t6

0xbe16,	// (0x0001a127) popup_blid_sat_info2_window_t7

0xbe24,	// (0x0001a135) popup_blid_sat_info2_window_t8

0xbe32,	// (0x0001a143) popup_blid_sat_info2_window_t9

0xbe40,	// (0x0001a151) popup_blid_sat_info2_window_t10

0xbf01,	// (0x0001a212) aid_firma_cardinal_ParamLimits

0xbf15,	// (0x0001a226) blid_firmament_pane_t1_ParamLimits

0xbf2c,	// (0x0001a23d) blid_firmament_pane_t2_ParamLimits

0xbf43,	// (0x0001a254) blid_firmament_pane_t3_ParamLimits

0xbf5a,	// (0x0001a26b) blid_firmament_pane_t4_ParamLimits

0xf619,	// (0x0001d92a) blid_firmament_pane_t_ParamLimits

0xbf71,	// (0x0001a282) blid_sat_info_pane_ParamLimits

0x92a0,	// (0x000175b1) main_cam_set_pane_ParamLimits

0x44d0,	// (0x000127e1) aid_size_cell_colour_35_ParamLimits

0x44f0,	// (0x00012801) aid_size_cell_colour_112_ParamLimits

0x4510,	// (0x00012821) aid_size_cell_effect_ParamLimits

0xa81b,	// (0x00018b2c) bg_tb_trans_pane_cp02_ParamLimits

0xa123,	// (0x00018434) heading_imed_pane_ParamLimits

0x4530,	// (0x00012841) listscroll_imed_pane_ParamLimits

0xb15e,	// (0x0001946f) popup_call2_audio_first_window_g5_ParamLimits

0xb15e,	// (0x0001946f) popup_call2_audio_first_window_g5

0x4894,	// (0x00012ba5) aid_size_touch_image3_arrow_left_ParamLimits

0x4894,	// (0x00012ba5) aid_size_touch_image3_arrow_left

0x48c0,	// (0x00012bd1) aid_size_touch_image3_arrow_right_ParamLimits

0x48c0,	// (0x00012bd1) aid_size_touch_image3_arrow_right

0xd28f,	// (0x0001b5a0) vid4_progress_pane_t3

0x46d3,	// (0x000129e4) main_hwr_training_symbol_option_pane_ParamLimits

0x46d3,	// (0x000129e4) main_hwr_training_symbol_option_pane

0xc64f,	// (0x0001a960) popup_hwr_training_preview_window_ParamLimits

0xc64f,	// (0x0001a960) popup_hwr_training_preview_window

0x46f3,	// (0x00012a04) hwr_training_navi_pane_g5_ParamLimits

0x46f3,	// (0x00012a04) hwr_training_navi_pane_g5

0xcc10,	// (0x0001af21) popup_char_count_window

0x92a0,	// (0x000175b1) bg_popup_sub_pane_cp20_ParamLimits

0x5982,	// (0x00013c93) list_vitu2_match_list_pane_ParamLimits

0x598e,	// (0x00013c9f) vitu2_page_scroll_pane_ParamLimits

0x598e,	// (0x00013c9f) vitu2_page_scroll_pane

0xd2c7,	// (0x0001b5d8) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd2c7,	// (0x0001b5d8) list_single_hwr_training_symbol_option_pane

0xd2da,	// (0x0001b5eb) list_single_hwr_training_symbol_option_pane_g1

0xd2e2,	// (0x0001b5f3) list_single_hwr_training_symbol_option_pane_t1

0xd2f0,	// (0x0001b601) bg_button_pane_cp023

0xd2f9,	// (0x0001b60a) bg_button_pane_cp024

0xd32c,	// (0x0001b63d) vitu2_page_scroll_pane_g1

0xd334,	// (0x0001b645) vitu2_page_scroll_pane_g2

0x0001,

0xf9fd,	// (0x0001dd0e) vitu2_page_scroll_pane_g

0xd33c,	// (0x0001b64d) vitu2_page_scroll_pane_t1

0x9af0,	// (0x00017e01) popup_char_count_window_g1

0xd34b,	// (0x0001b65c) popup_char_count_window_g2

0xcdfc,	// (0x0001b10d) popup_char_count_window_g3

0x0002,

0xfa02,	// (0x0001dd13) popup_char_count_window_g

0xd354,	// (0x0001b665) popup_char_count_window_t1

0x9231,	// (0x00017542) main_vded2_pane

0xc4ad,	// (0x0001a7be) aid_size_cell_imed_line

0xc4b7,	// (0x0001a7c8) grid_imed_line_width_pane

0xcb91,	// (0x0001aea2) vid4_indicators_pane_g4

0xd362,	// (0x0001b673) cell_imed_line_width_pane_ParamLimits

0xd362,	// (0x0001b673) cell_imed_line_width_pane

0xd376,	// (0x0001b687) cell_imed_line_width_pane_g1

0xd37f,	// (0x0001b690) cell_imed_line_width_pane_g2

0x0001,

0xfa09,	// (0x0001dd1a) cell_imed_line_width_pane_g

0x5fe2,	// (0x000142f3) main_vded2_pane_g1_ParamLimits

0x5fe2,	// (0x000142f3) main_vded2_pane_g1

0x5ff8,	// (0x00014309) main_vded2_pane_g2_ParamLimits

0x5ff8,	// (0x00014309) main_vded2_pane_g2

0x0001,

0xfa0e,	// (0x0001dd1f) main_vded2_pane_g_ParamLimits

0xfa0e,	// (0x0001dd1f) main_vded2_pane_g

0x600a,	// (0x0001431b) vded2_slider_pane_ParamLimits

0x600a,	// (0x0001431b) vded2_slider_pane

0x601a,	// (0x0001432b) aid_size_touch_vded2_end

0x6024,	// (0x00014335) aid_size_touch_vded2_playhead

0xd387,	// (0x0001b698) aid_size_touch_vded2_start

0xd38f,	// (0x0001b6a0) vded2_slider_bg_pane

0xd398,	// (0x0001b6a9) vded2_slider_pane_g1

0xd3a1,	// (0x0001b6b2) vded2_slider_pane_g2

0x602e,	// (0x0001433f) vded2_slider_pane_g3

0x0002,

0xfa13,	// (0x0001dd24) vded2_slider_pane_g

0xd3a9,	// (0x0001b6ba) vded2_slider_bg_pane_g1

0xd3b2,	// (0x0001b6c3) vded2_slider_bg_pane_g2

0xd3bb,	// (0x0001b6cc) vded2_slider_bg_pane_g3

0x0002,

0xfa1a,	// (0x0001dd2b) vded2_slider_bg_pane_g

0x2b48,	// (0x00010e59) aid_postcard_touch_down_pane_ParamLimits

0x2b48,	// (0x00010e59) aid_postcard_touch_down_pane

0x2b5e,	// (0x00010e6f) aid_postcard_touch_up_pane_ParamLimits

0x2b5e,	// (0x00010e6f) aid_postcard_touch_up_pane

0x9231,	// (0x00017542) main_blid2_pane

0xba8f,	// (0x00019da0) popup_blid2_search_window

0x9231,	// (0x00017542) blid2_gps_pane

0x9231,	// (0x00017542) blid2_navig_pane

0x9231,	// (0x00017542) blid2_search_pane

0x9231,	// (0x00017542) blid2_tripm_pane

0x6039,	// (0x0001434a) blid2_search_pane_g1_ParamLimits

0x6039,	// (0x0001434a) blid2_search_pane_g1

0x6051,	// (0x00014362) blid2_search_pane_t1_ParamLimits

0x6051,	// (0x00014362) blid2_search_pane_t1

0x6063,	// (0x00014374) aid_size_cell_blid2_gps_ParamLimits

0x6063,	// (0x00014374) aid_size_cell_blid2_gps

0x607b,	// (0x0001438c) blid2_gps_pane_g1_ParamLimits

0x607b,	// (0x0001438c) blid2_gps_pane_g1

0x608f,	// (0x000143a0) grid_blid2_satellite_pane_ParamLimits

0x608f,	// (0x000143a0) grid_blid2_satellite_pane

0x60a9,	// (0x000143ba) blid2_navig_pane_g1_ParamLimits

0x60a9,	// (0x000143ba) blid2_navig_pane_g1

0x60b5,	// (0x000143c6) blid2_navig_pane_t1_ParamLimits

0x60b5,	// (0x000143c6) blid2_navig_pane_t1

0x60d0,	// (0x000143e1) blid2_navig_pane_t2_ParamLimits

0x60d0,	// (0x000143e1) blid2_navig_pane_t2

0x0001,

0xfa21,	// (0x0001dd32) blid2_navig_pane_t_ParamLimits

0xfa21,	// (0x0001dd32) blid2_navig_pane_t

0x60eb,	// (0x000143fc) blid2_navig_ring_pane_ParamLimits

0x60eb,	// (0x000143fc) blid2_navig_ring_pane

0x6104,	// (0x00014415) blid2_speed_pane_ParamLimits

0x6104,	// (0x00014415) blid2_speed_pane

0x6110,	// (0x00014421) blid2_tripm_pane_g1_ParamLimits

0x6110,	// (0x00014421) blid2_tripm_pane_g1

0x612b,	// (0x0001443c) blid2_tripm_pane_g2_ParamLimits

0x612b,	// (0x0001443c) blid2_tripm_pane_g2

0x613f,	// (0x00014450) blid2_tripm_pane_g3_ParamLimits

0x613f,	// (0x00014450) blid2_tripm_pane_g3

0x6153,	// (0x00014464) blid2_tripm_pane_g4_ParamLimits

0x6153,	// (0x00014464) blid2_tripm_pane_g4

0x6167,	// (0x00014478) blid2_tripm_pane_g5_ParamLimits

0x6167,	// (0x00014478) blid2_tripm_pane_g5

0x0005,

0xfa26,	// (0x0001dd37) blid2_tripm_pane_g_ParamLimits

0xfa26,	// (0x0001dd37) blid2_tripm_pane_g

0x618d,	// (0x0001449e) blid2_tripm_pane_t1_ParamLimits

0x618d,	// (0x0001449e) blid2_tripm_pane_t1

0x61a8,	// (0x000144b9) blid2_tripm_pane_t2_ParamLimits

0x61a8,	// (0x000144b9) blid2_tripm_pane_t2

0x61c1,	// (0x000144d2) blid2_tripm_pane_t3_ParamLimits

0x61c1,	// (0x000144d2) blid2_tripm_pane_t3

0x0003,

0xfa33,	// (0x0001dd44) blid2_tripm_pane_t_ParamLimits

0xfa33,	// (0x0001dd44) blid2_tripm_pane_t

0x6208,	// (0x00014519) cell_blid2_satellite_pane_ParamLimits

0x6208,	// (0x00014519) cell_blid2_satellite_pane

0x6226,	// (0x00014537) cell_blid2_satellite_pane_g1

0xd3c4,	// (0x0001b6d5) cell_blid2_satellite_pane_t1

0x99dd,	// (0x00017cee) blid2_speed_pane_g1

0xd3d2,	// (0x0001b6e3) blid2_speed_pane_t1

0xd3e0,	// (0x0001b6f1) blid2_speed_pane_t2

0x0001,

0xfa3c,	// (0x0001dd4d) blid2_speed_pane_t

0x99dd,	// (0x00017cee) blid2_navig_ring_pane_g1

0x622f,	// (0x00014540) blid2_navig_ring_pane_g2

0x6237,	// (0x00014548) blid2_navig_ring_pane_g3

0x623f,	// (0x00014550) blid2_navig_ring_pane_g4

0x6247,	// (0x00014558) blid2_navig_ring_pane_g5

0x0004,

0xfa41,	// (0x0001dd52) blid2_navig_ring_pane_g

0x9231,	// (0x00017542) bg_popup_window_pane_cp011

0xd3ee,	// (0x0001b6ff) popup_blid2_search_window_g1

0xd3f6,	// (0x0001b707) popup_blid2_search_window_t1

0xd404,	// (0x0001b715) popup_blid2_search_window_t2

0x0001,

0xfa4c,	// (0x0001dd5d) popup_blid2_search_window_t

0x9d9c,	// (0x000180ad) main_browser_pane_g1

0x9a55,	// (0x00017d66) main_browser_pane_ParamLimits

0x92a0,	// (0x000175b1) bg_button_pane_cp011_ParamLimits

0x5235,	// (0x00013546) cell_vitu2_function_pane_g1_ParamLimits

0xa81b,	// (0x00018b2c) bg_popup_sub_pane_cp22_ParamLimits

0x5b0c,	// (0x00013e1d) input_focus_pane_cp08_ParamLimits

0x5b27,	// (0x00013e38) popup_vitu2_query_button_pane_ParamLimits

0x5b27,	// (0x00013e38) popup_vitu2_query_button_pane

0x5b36,	// (0x00013e47) popup_vitu2_query_input_button_pane

0xcf55,	// (0x0001b266) popup_vitu2_query_window_g1_ParamLimits

0x5b3e,	// (0x00013e4f) popup_vitu2_query_window_g2_ParamLimits

0xf94d,	// (0x0001dc5e) popup_vitu2_query_window_g_ParamLimits

0x9231,	// (0x00017542) bg_button_pane_cp026

0x624f,	// (0x00014560) popup_vitu2_query_input_button_pane_g1

0x9231,	// (0x00017542) bg_button_pane_cp025

0xd412,	// (0x0001b723) popup_vitu2_query_button_pane_t1

0x39c1,	// (0x00011cd2) main_mp3_pane_t6

0x39cf,	// (0x00011ce0) popup_slider_window_cp01

0xcafd,	// (0x0001ae0e) cam4_battery_pane

0xcb50,	// (0x0001ae61) cam4_battery_pane_cp02

0xd23a,	// (0x0001b54b) cam4_battery_pane_cp01

0xd23a,	// (0x0001b54b) cam4_battery_pane_cp03

0x99dd,	// (0x00017cee) cam4_battery_pane_g1

0xd420,	// (0x0001b731) cam4_battery_pane_g2

0x0001,

0xfa51,	// (0x0001dd62) cam4_battery_pane_g

0xbe4e,	// (0x0001a15f) popup_blid_sat_info2_window_t11

0xa577,	// (0x00018888) aid_size_touch_mv_arrow_left_ParamLimits

0xa5a2,	// (0x000188b3) aid_size_touch_mv_arrow_right_ParamLimits

0xa600,	// (0x00018911) navi_pane_g1_ParamLimits

0xa60c,	// (0x0001891d) navi_pane_g2_ParamLimits

0xa63a,	// (0x0001894b) navi_pane_g3_ParamLimits

0xf32f,	// (0x0001d640) navi_pane_g_ParamLimits

0x2767,	// (0x00010a78) navi_pane_mv_t1_ParamLimits

0x453c,	// (0x0001284d) grid_imed_effect_pane_ParamLimits

0x169a,	// (0x0000f9ab) aid_placing_vt_slider_lsc

0x9ceb,	// (0x00017ffc) aid_placing_vt_slider_prt

0x92a0,	// (0x000175b1) bg_tb_trans_pane_cp01_ParamLimits

0xc0ec,	// (0x0001a3fd) popup_image_details_window_g1_ParamLimits

0xc0ff,	// (0x0001a410) popup_image_details_window_g2_ParamLimits

0xc114,	// (0x0001a425) popup_image_details_window_g3_ParamLimits

0xc114,	// (0x0001a425) popup_image_details_window_g3

0xf659,	// (0x0001d96a) popup_image_details_window_g_ParamLimits

0xc128,	// (0x0001a439) popup_image_details_window_t1_ParamLimits

0xc13a,	// (0x0001a44b) popup_image_details_window_t2_ParamLimits

0xc153,	// (0x0001a464) popup_image_details_window_t3_ParamLimits

0xc167,	// (0x0001a478) popup_image_details_window_t4_ParamLimits

0xc182,	// (0x0001a493) popup_image_details_window_t5_ParamLimits

0xf660,	// (0x0001d971) popup_image_details_window_t_ParamLimits

0x5ea2,	// (0x000141b3) cl_header_name_pane_ParamLimits

0x5ea2,	// (0x000141b3) cl_header_name_pane

0x6257,	// (0x00014568) cl_header_name_pane_t1_ParamLimits

0x6257,	// (0x00014568) cl_header_name_pane_t1

0x6278,	// (0x00014589) cl_header_name_pane_t2_ParamLimits

0x6278,	// (0x00014589) cl_header_name_pane_t2

0x62ba,	// (0x000145cb) cl_header_name_pane_t3_ParamLimits

0x62ba,	// (0x000145cb) cl_header_name_pane_t3

0x0002,

0xfa56,	// (0x0001dd67) cl_header_name_pane_t_ParamLimits

0xfa56,	// (0x0001dd67) cl_header_name_pane_t

0xa6c9,	// (0x000189da) navi_pane_mv_g2_ParamLimits

0xcbdb,	// (0x0001aeec) field_vitu2_entry_pane_g1_ParamLimits

0xcbe7,	// (0x0001aef8) field_vitu2_entry_pane_g2_ParamLimits

0xa7f9,	// (0x00018b0a) field_vitu2_entry_pane_g3_ParamLimits

0xa7f9,	// (0x00018b0a) field_vitu2_entry_pane_g3

0xf856,	// (0x0001db67) field_vitu2_entry_pane_g_ParamLimits

0x50c5,	// (0x000133d6) cell_vitu2_itu_pane_g1_ParamLimits

0x50dd,	// (0x000133ee) cell_vitu2_itu_pane_g2_ParamLimits

0x50dd,	// (0x000133ee) cell_vitu2_itu_pane_g2

0x0001,

0xf862,	// (0x0001db73) cell_vitu2_itu_pane_g_ParamLimits

0xf862,	// (0x0001db73) cell_vitu2_itu_pane_g

0x92a0,	// (0x000175b1) bg_vkb2_func_pane_cp05_ParamLimits

0x92a0,	// (0x000175b1) bg_vkb2_func_pane_cp05

0x92a0,	// (0x000175b1) bg_vkb2_func_pane_cp03

0x92a0,	// (0x000175b1) bg_vkb2_func_pane_cp04

0x92a0,	// (0x000175b1) bg_vkb2_func_pane_cp10_ParamLimits

0x92a0,	// (0x000175b1) bg_vkb2_func_pane_cp10

0x5e46,	// (0x00014157) bg_vkb2_func_pane_cp08

0x5e1f,	// (0x00014130) bg_vkb2_func_pane_cp06

0x5e2b,	// (0x0001413c) bg_vkb2_func_pane_cp07

0xd302,	// (0x0001b613) bg_vkb2_func_pane_cp11_ParamLimits

0xd302,	// (0x0001b613) bg_vkb2_func_pane_cp11

0xd317,	// (0x0001b628) bg_vkb2_func_pane_cp12_ParamLimits

0xd317,	// (0x0001b628) bg_vkb2_func_pane_cp12

0x9231,	// (0x00017542) bg_vkb2_func_pane_cp09

0xcc22,	// (0x0001af33) bg_vkb2_func_pane_g1

0x9ead,	// (0x000181be) bg_vkb2_func_pane_g2

0xcc2a,	// (0x0001af3b) bg_vkb2_func_pane_g3

0xcc32,	// (0x0001af43) bg_vkb2_func_pane_g4

0xcefa,	// (0x0001b20b) bg_vkb2_func_pane_g5

0xcc4a,	// (0x0001af5b) bg_vkb2_func_pane_g6

0xcc52,	// (0x0001af63) bg_vkb2_func_pane_g7

0xcc42,	// (0x0001af53) bg_vkb2_func_pane_g8

0x9e8d,	// (0x0001819e) bg_vkb2_func_pane_g9

0x0008,

0xfa5d,	// (0x0001dd6e) bg_vkb2_func_pane_g

0x617b,	// (0x0001448c) blid2_tripm_pane_g6_ParamLimits

0x617b,	// (0x0001448c) blid2_tripm_pane_g6

0xc9cc,	// (0x0001acdd) mp4_progress_pane_g1

0x61f4,	// (0x00014505) blid2_tripm_values_pane_ParamLimits

0x61f4,	// (0x00014505) blid2_tripm_values_pane

0x62eb,	// (0x000145fc) blid2_tripm_values_pane_t1

0x62f9,	// (0x0001460a) blid2_tripm_values_pane_t2

0x6307,	// (0x00014618) blid2_tripm_values_pane_t3

0x6315,	// (0x00014626) blid2_tripm_values_pane_t4

0x6323,	// (0x00014634) blid2_tripm_values_pane_t5

0x6331,	// (0x00014642) blid2_tripm_values_pane_t6

0x633f,	// (0x00014650) blid2_tripm_values_pane_t7

0x634d,	// (0x0001465e) blid2_tripm_values_pane_t8

0x635b,	// (0x0001466c) blid2_tripm_values_pane_t9

0x0008,

0xfa70,	// (0x0001dd81) blid2_tripm_values_pane_t

0x16dc,	// (0x0000f9ed) call_video_pane_t1_ParamLimits

0x16fa,	// (0x0000fa0b) call_video_pane_t2_ParamLimits

0xf1dd,	// (0x0001d4ee) call_video_pane_t_ParamLimits

0x2a35,	// (0x00010d46) msg_header_pane_g1_ParamLimits

0xa8e7,	// (0x00018bf8) msg_header_pane_g2_ParamLimits

0xa8e7,	// (0x00018bf8) msg_header_pane_g2

0x0001,

0xf3cd,	// (0x0001d6de) msg_header_pane_g_ParamLimits

0xf3cd,	// (0x0001d6de) msg_header_pane_g

0x9a55,	// (0x00017d66) main_clock2_pane_ParamLimits

0x423d,	// (0x0001254e) grid_clock2_toolbar_pane_ParamLimits

0x423d,	// (0x0001254e) grid_clock2_toolbar_pane

0x423d,	// (0x0001254e) listscroll_clock2_pane_ParamLimits

0x423d,	// (0x0001254e) listscroll_clock2_pane

0x4321,	// (0x00012632) main_clock2_pane_t3_ParamLimits

0x4321,	// (0x00012632) main_clock2_pane_t3

0x4345,	// (0x00012656) main_clock2_pane_t4_ParamLimits

0x4345,	// (0x00012656) main_clock2_pane_t4

0xd42a,	// (0x0001b73b) cell_clock2_toolbar_pane

0xd432,	// (0x0001b743) cell_clock2_toolbar_pane_cp01

0xd432,	// (0x0001b743) cell_clock2_toolbar_pane_cp02

0xd43a,	// (0x0001b74b) cell_clock2_toolbar_pane_cp03

0xd442,	// (0x0001b753) list_clock2_pane

0xa4fc,	// (0x0001880d) scroll_pane_cp10

0xd44a,	// (0x0001b75b) list_single_clock2_pane_ParamLimits

0xd44a,	// (0x0001b75b) list_single_clock2_pane

0x9c8a,	// (0x00017f9b) list_highlight_pane_cp08

0xd457,	// (0x0001b768) list_single_clock2_pane_t1

0xd465,	// (0x0001b776) list_single_clock2_pane_t2

0x0001,

0xfa83,	// (0x0001dd94) list_single_clock2_pane_t

0x9231,	// (0x00017542) bg_button_pane_cp10

0xd473,	// (0x0001b784) cell_clock2_toolbar_pane_g1

0x2ad4,	// (0x00010de5) aid_main_viewer_pane_g1_ParamLimits

0x2ad4,	// (0x00010de5) aid_main_viewer_pane_g1

0x2ae2,	// (0x00010df3) aid_main_viewer_pane_g2_ParamLimits

0x2ae2,	// (0x00010df3) aid_main_viewer_pane_g2

0x2af0,	// (0x00010e01) aid_main_viewer_pane_g3_ParamLimits

0x2af0,	// (0x00010e01) aid_main_viewer_pane_g3

0x2aff,	// (0x00010e10) aid_main_viewer_pane_g4_ParamLimits

0x2aff,	// (0x00010e10) aid_main_viewer_pane_g4

0x0003,

0xf3de,	// (0x0001d6ef) aid_main_viewer_pane_g_ParamLimits

0xf3de,	// (0x0001d6ef) aid_main_viewer_pane_g

0x33a4,	// (0x000116b5) main_calc_pane_ParamLimits

0x33b8,	// (0x000116c9) main_dialer2_pane_ParamLimits

0x9231,	// (0x00017542) main_cam6_pane

0x9231,	// (0x00017542) main_vid6_pane

0x4249,	// (0x0001255a) listscroll_gen_pane_cp06_ParamLimits

0x4249,	// (0x0001255a) listscroll_gen_pane_cp06

0x4368,	// (0x00012679) main_clock2_pane_t5_ParamLimits

0x4368,	// (0x00012679) main_clock2_pane_t5

0x43c6,	// (0x000126d7) aid_call2_pane_cp10_ParamLimits

0x43d8,	// (0x000126e9) aid_call_pane_cp10_ParamLimits

0xa56b,	// (0x0001887c) popup_clock_analogue_window_cp10_g1_ParamLimits

0xa56b,	// (0x0001887c) popup_clock_analogue_window_cp10_g2_ParamLimits

0x43ea,	// (0x000126fb) popup_clock_analogue_window_cp10_g3_ParamLimits

0x43ea,	// (0x000126fb) popup_clock_analogue_window_cp10_g4_ParamLimits

0xa56b,	// (0x0001887c) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf715,	// (0x0001da26) popup_clock_analogue_window_cp10_g_ParamLimits

0x4400,	// (0x00012711) popup_clock_analogue_window_cp10_t1_ParamLimits

0xca3d,	// (0x0001ad4e) cell_dialer2_keypad_pane_g2_ParamLimits

0xca3d,	// (0x0001ad4e) cell_dialer2_keypad_pane_g2

0x0001,

0xf7f5,	// (0x0001db06) cell_dialer2_keypad_pane_g_ParamLimits

0xf7f5,	// (0x0001db06) cell_dialer2_keypad_pane_g

0x99e7,	// (0x00017cf8) cell_dialer2_keypad_pane_t1

0x5550,	// (0x00013861) main_cset_text2_pane_ParamLimits

0x5550,	// (0x00013861) main_cset_text2_pane

0xd141,	// (0x0001b452) area_vitu2_query_pane_g1_ParamLimits

0x5dc0,	// (0x000140d1) area_vitu2_query_pane_g2_ParamLimits

0xf9a0,	// (0x0001dcb1) area_vitu2_query_pane_g_ParamLimits

0xd1c5,	// (0x0001b4d6) area_vitu2_query_pane_t7_ParamLimits

0xd1c5,	// (0x0001b4d6) area_vitu2_query_pane_t7

0x5e1f,	// (0x00014130) bg_button_pane_cp018_ParamLimits

0x5e2b,	// (0x0001413c) bg_button_pane_cp021_ParamLimits

0x5e37,	// (0x00014148) bg_button_pane_cp022_ParamLimits

0x5e46,	// (0x00014157) bg_vkb2_func_pane_cp08_ParamLimits

0x5e1f,	// (0x00014130) bg_vkb2_func_pane_cp06_ParamLimits

0x5e2b,	// (0x0001413c) bg_vkb2_func_pane_cp07_ParamLimits

0x5e56,	// (0x00014167) input_focus_pane_cp09_ParamLimits

0x6369,	// (0x0001467a) cam6_autofocus_pane_ParamLimits

0x6369,	// (0x0001467a) cam6_autofocus_pane

0x6375,	// (0x00014686) cam6_image_uncrop_pane_ParamLimits

0x6375,	// (0x00014686) cam6_image_uncrop_pane

0x6385,	// (0x00014696) cam6_indi_pane_ParamLimits

0x6385,	// (0x00014696) cam6_indi_pane

0x639b,	// (0x000146ac) cam6_mode_pane_ParamLimits

0x639b,	// (0x000146ac) cam6_mode_pane

0x63ad,	// (0x000146be) cam6_timer_pane_ParamLimits

0x63ad,	// (0x000146be) cam6_timer_pane

0x63b9,	// (0x000146ca) cam6_zoom_pane_ParamLimits

0x63b9,	// (0x000146ca) cam6_zoom_pane

0x63c6,	// (0x000146d7) cam6_mode_pane_g1_ParamLimits

0x63c6,	// (0x000146d7) cam6_mode_pane_g1

0x63d6,	// (0x000146e7) cam6_mode_pane_g2_ParamLimits

0x63d6,	// (0x000146e7) cam6_mode_pane_g2

0x63e6,	// (0x000146f7) cam6_mode_pane_g3_ParamLimits

0x63e6,	// (0x000146f7) cam6_mode_pane_g3

0x63f6,	// (0x00014707) cam6_mode_pane_g4_ParamLimits

0x63f6,	// (0x00014707) cam6_mode_pane_g4

0x0003,

0xfa88,	// (0x0001dd99) cam6_mode_pane_g_ParamLimits

0xfa88,	// (0x0001dd99) cam6_mode_pane_g

0xbc04,	// (0x00019f15) bg_tb_trans_pane_cp08_ParamLimits

0xbc04,	// (0x00019f15) bg_tb_trans_pane_cp08

0xd489,	// (0x0001b79a) cam6_battery_pane_ParamLimits

0xd489,	// (0x0001b79a) cam6_battery_pane

0xd49f,	// (0x0001b7b0) cam6_indi_pane_g1_ParamLimits

0xd49f,	// (0x0001b7b0) cam6_indi_pane_g1

0xd4b1,	// (0x0001b7c2) cam6_indi_pane_g2_ParamLimits

0xd4b1,	// (0x0001b7c2) cam6_indi_pane_g2

0xd4c3,	// (0x0001b7d4) cam6_indi_pane_g3_ParamLimits

0xd4c3,	// (0x0001b7d4) cam6_indi_pane_g3

0x0002,

0xfa91,	// (0x0001dda2) cam6_indi_pane_g_ParamLimits

0xfa91,	// (0x0001dda2) cam6_indi_pane_g

0xd4d5,	// (0x0001b7e6) cam6_indi_pane_t1_ParamLimits

0xd4d5,	// (0x0001b7e6) cam6_indi_pane_t1

0x4e75,	// (0x00013186) cam6_autofocus_pane_g1

0x4e7d,	// (0x0001318e) cam6_autofocus_pane_g2

0x4e85,	// (0x00013196) cam6_autofocus_pane_g3

0x4e8d,	// (0x0001319e) cam6_autofocus_pane_g4

0x0003,

0xfa98,	// (0x0001dda9) cam6_autofocus_pane_g

0xd4fb,	// (0x0001b80c) cam6_timer_pane_g1

0xd503,	// (0x0001b814) cam6_timer_pane_t1

0xd511,	// (0x0001b822) cam6_zoom_cont_pane

0xd519,	// (0x0001b82a) cam6_zoom_pane_g1

0xd522,	// (0x0001b833) cam6_zoom_pane_g2

0x6406,	// (0x00014717) cam6_zoom_pane_g3

0x0002,

0xfaa1,	// (0x0001ddb2) cam6_zoom_pane_g

0x99dd,	// (0x00017cee) cam6_battery_pane_g1

0x99dd,	// (0x00017cee) cam6_battery_pane_g2

0x0001,

0xf0af,	// (0x0001d3c0) cam6_battery_pane_g

0xd519,	// (0x0001b82a) cam6_zoom_cont_pane_g1

0xd522,	// (0x0001b833) cam6_zoom_cont_pane_g2

0xd52b,	// (0x0001b83c) cam6_zoom_cont_pane_g3

0x0002,

0xfaa8,	// (0x0001ddb9) cam6_zoom_cont_pane_g

0x6424,	// (0x00014735) cam6_mode_pane_cp_ParamLimits

0x6424,	// (0x00014735) cam6_mode_pane_cp

0x6436,	// (0x00014747) cam6_zoom_pane_cp_ParamLimits

0x6436,	// (0x00014747) cam6_zoom_pane_cp

0x6442,	// (0x00014753) vid6_image_uncrop_cif_pane_ParamLimits

0x6442,	// (0x00014753) vid6_image_uncrop_cif_pane

0x6452,	// (0x00014763) vid6_image_uncrop_nhd_pane_ParamLimits

0x6452,	// (0x00014763) vid6_image_uncrop_nhd_pane

0x6461,	// (0x00014772) vid6_image_uncrop_vga_pane_ParamLimits

0x6461,	// (0x00014772) vid6_image_uncrop_vga_pane

0x6470,	// (0x00014781) vid6_image_uncrop_wvga_pane_ParamLimits

0x6470,	// (0x00014781) vid6_image_uncrop_wvga_pane

0x647f,	// (0x00014790) vid6_indi_pane_ParamLimits

0x647f,	// (0x00014790) vid6_indi_pane

0xbc04,	// (0x00019f15) bg_tb_trans_pane_cp09_ParamLimits

0xbc04,	// (0x00019f15) bg_tb_trans_pane_cp09

0xd543,	// (0x0001b854) cam6_battery_pane_cp_ParamLimits

0xd543,	// (0x0001b854) cam6_battery_pane_cp

0xd54f,	// (0x0001b860) vid6_indi_pane_g1_ParamLimits

0xd54f,	// (0x0001b860) vid6_indi_pane_g1

0xd561,	// (0x0001b872) vid6_indi_pane_g2_ParamLimits

0xd561,	// (0x0001b872) vid6_indi_pane_g2

0xd573,	// (0x0001b884) vid6_indi_pane_g3_ParamLimits

0xd573,	// (0x0001b884) vid6_indi_pane_g3

0xd588,	// (0x0001b899) vid6_indi_pane_g4_ParamLimits

0xd588,	// (0x0001b899) vid6_indi_pane_g4

0xd59d,	// (0x0001b8ae) vid6_indi_pane_g5_ParamLimits

0xd59d,	// (0x0001b8ae) vid6_indi_pane_g5

0x0004,

0xfaaf,	// (0x0001ddc0) vid6_indi_pane_g_ParamLimits

0xfaaf,	// (0x0001ddc0) vid6_indi_pane_g

0xd5b7,	// (0x0001b8c8) vid6_indi_pane_t1_ParamLimits

0xd5b7,	// (0x0001b8c8) vid6_indi_pane_t1

0xd5cd,	// (0x0001b8de) vid6_indi_pane_t2_ParamLimits

0xd5cd,	// (0x0001b8de) vid6_indi_pane_t2

0xd5f5,	// (0x0001b906) vid6_indi_pane_t3_ParamLimits

0xd5f5,	// (0x0001b906) vid6_indi_pane_t3

0xd61d,	// (0x0001b92e) vid6_indi_pane_t4_ParamLimits

0xd61d,	// (0x0001b92e) vid6_indi_pane_t4

0x0003,

0xfaba,	// (0x0001ddcb) vid6_indi_pane_t_ParamLimits

0xfaba,	// (0x0001ddcb) vid6_indi_pane_t

0xd641,	// (0x0001b952) wait_bar_pane_cp08

0x6497,	// (0x000147a8) main_cset_text2_pane_t1_ParamLimits

0x6497,	// (0x000147a8) main_cset_text2_pane_t1

0x640f,	// (0x00014720) listscroll_gen_pane_cp06_t1_ParamLimits

0x640f,	// (0x00014720) listscroll_gen_pane_cp06_t1

0x9231,	// (0x00017542) main_cam6_set_pane

0x9997,	// (0x00017ca8) bg_tb_trans_pane_cp06_ParamLimits

0xcb05,	// (0x0001ae16) cam4_indicators_pane_g1_ParamLimits

0xcb16,	// (0x0001ae27) cam4_indicators_pane_g2_ParamLimits

0xf832,	// (0x0001db43) cam4_indicators_pane_g_ParamLimits

0xcb2e,	// (0x0001ae3f) cam4_indicators_pane_t1_ParamLimits

0x92a0,	// (0x000175b1) bg_tb_trans_pane_cp07_ParamLimits

0xcb58,	// (0x0001ae69) vid4_indicators_pane_g1_ParamLimits

0xcb6c,	// (0x0001ae7d) vid4_indicators_pane_g2_ParamLimits

0xcb80,	// (0x0001ae91) vid4_indicators_pane_g3_ParamLimits

0xcb91,	// (0x0001aea2) vid4_indicators_pane_g4_ParamLimits

0xf844,	// (0x0001db55) vid4_indicators_pane_g_ParamLimits

0xcbad,	// (0x0001aebe) vid4_indicators_pane_t1_ParamLimits

0xd242,	// (0x0001b553) vid4_progress_pane_g1_ParamLimits

0xd252,	// (0x0001b563) vid4_progress_pane_g2_ParamLimits

0x5f95,	// (0x000142a6) vid4_progress_pane_g3_ParamLimits

0xd262,	// (0x0001b573) vid4_progress_pane_g4_ParamLimits

0xf9eb,	// (0x0001dcfc) vid4_progress_pane_g_ParamLimits

0x5fa7,	// (0x000142b8) vid4_progress_pane_t1_ParamLimits

0xd27a,	// (0x0001b58b) vid4_progress_pane_t2_ParamLimits

0xd28f,	// (0x0001b5a0) vid4_progress_pane_t3_ParamLimits

0xf9f6,	// (0x0001dd07) vid4_progress_pane_t_ParamLimits

0x5fbd,	// (0x000142ce) wait_bar_pane_cp07_ParamLimits

0x64b5,	// (0x000147c6) main_cam6_set_pane_g2_ParamLimits

0x64b5,	// (0x000147c6) main_cam6_set_pane_g2

0x64d9,	// (0x000147ea) main_cset6_listscroll_pane_ParamLimits

0x64d9,	// (0x000147ea) main_cset6_listscroll_pane

0x64f5,	// (0x00014806) main_cset6_slider_pane_ParamLimits

0x64f5,	// (0x00014806) main_cset6_slider_pane

0x650b,	// (0x0001481c) main_cset6_text2_pane_ParamLimits

0x650b,	// (0x0001481c) main_cset6_text2_pane

0xd650,	// (0x0001b961) main_cset6_text_pane

0xd658,	// (0x0001b969) main_cset_list_pane_copy1_ParamLimits

0xd658,	// (0x0001b969) main_cset_list_pane_copy1

0xd668,	// (0x0001b979) scroll_pane_cp028_copy1

0x6519,	// (0x0001482a) cset_list_set_pane_copy1

0x652b,	// (0x0001483c) aid_position_infowindow_above_copy1

0x6533,	// (0x00014844) aid_position_infowindow_below_copy1

0xd671,	// (0x0001b982) cset_list_set_pane_g1_copy1

0xd679,	// (0x0001b98a) cset_list_set_pane_g3_copy1_ParamLimits

0xd679,	// (0x0001b98a) cset_list_set_pane_g3_copy1

0xd688,	// (0x0001b999) cset_list_set_pane_t1_copy1_ParamLimits

0xd688,	// (0x0001b999) cset_list_set_pane_t1_copy1

0x92a0,	// (0x000175b1) list_highlight_pane_cp021_copy1_ParamLimits

0x92a0,	// (0x000175b1) list_highlight_pane_cp021_copy1

0xd69d,	// (0x0001b9ae) cset6_slider_pane_ParamLimits

0xd69d,	// (0x0001b9ae) cset6_slider_pane

0xd6c9,	// (0x0001b9da) main_cset6_slider_pane_g1_ParamLimits

0xd6c9,	// (0x0001b9da) main_cset6_slider_pane_g1

0x653b,	// (0x0001484c) main_cset6_slider_pane_g2_ParamLimits

0x653b,	// (0x0001484c) main_cset6_slider_pane_g2

0xd6f1,	// (0x0001ba02) main_cset6_slider_pane_g3_ParamLimits

0xd6f1,	// (0x0001ba02) main_cset6_slider_pane_g3

0x6563,	// (0x00014874) main_cset6_slider_pane_g4_ParamLimits

0x6563,	// (0x00014874) main_cset6_slider_pane_g4

0xd6fd,	// (0x0001ba0e) main_cset6_slider_pane_g5_ParamLimits

0xd6fd,	// (0x0001ba0e) main_cset6_slider_pane_g5

0xcd77,	// (0x0001b088) main_cset6_slider_pane_g7_ParamLimits

0xcd77,	// (0x0001b088) main_cset6_slider_pane_g7

0xcd83,	// (0x0001b094) main_cset6_slider_pane_g8_ParamLimits

0xcd83,	// (0x0001b094) main_cset6_slider_pane_g8

0x55f6,	// (0x00013907) main_cset6_slider_pane_g9_ParamLimits

0x55f6,	// (0x00013907) main_cset6_slider_pane_g9

0x5602,	// (0x00013913) main_cset6_slider_pane_g10_ParamLimits

0x5602,	// (0x00013913) main_cset6_slider_pane_g10

0x560e,	// (0x0001391f) main_cset6_slider_pane_g11_ParamLimits

0x560e,	// (0x0001391f) main_cset6_slider_pane_g11

0x561a,	// (0x0001392b) main_cset6_slider_pane_g12_ParamLimits

0x561a,	// (0x0001392b) main_cset6_slider_pane_g12

0x5626,	// (0x00013937) main_cset6_slider_pane_g13_ParamLimits

0x5626,	// (0x00013937) main_cset6_slider_pane_g13

0x5632,	// (0x00013943) main_cset6_slider_pane_g14_ParamLimits

0x5632,	// (0x00013943) main_cset6_slider_pane_g14

0x656f,	// (0x00014880) main_cset6_slider_pane_g15_ParamLimits

0x656f,	// (0x00014880) main_cset6_slider_pane_g15

0xce11,	// (0x0001b122) main_cset6_slider_pane_g16_ParamLimits

0xce11,	// (0x0001b122) main_cset6_slider_pane_g16

0xce1d,	// (0x0001b12e) main_cset6_slider_pane_g17_ParamLimits

0xce1d,	// (0x0001b12e) main_cset6_slider_pane_g17

0x0011,

0xfac3,	// (0x0001ddd4) main_cset6_slider_pane_g_ParamLimits

0xfac3,	// (0x0001ddd4) main_cset6_slider_pane_g

0xd709,	// (0x0001ba1a) main_cset6_slider_pane_t1_ParamLimits

0xd709,	// (0x0001ba1a) main_cset6_slider_pane_t1

0x659f,	// (0x000148b0) main_cset6_slider_pane_t2_ParamLimits

0x659f,	// (0x000148b0) main_cset6_slider_pane_t2

0x65ca,	// (0x000148db) main_cset6_slider_pane_t3_ParamLimits

0x65ca,	// (0x000148db) main_cset6_slider_pane_t3

0x65f5,	// (0x00014906) main_cset6_slider_pane_t4_ParamLimits

0x65f5,	// (0x00014906) main_cset6_slider_pane_t4

0x6620,	// (0x00014931) main_cset6_slider_pane_t5_ParamLimits

0x6620,	// (0x00014931) main_cset6_slider_pane_t5

0xd74a,	// (0x0001ba5b) main_cset6_slider_pane_t7_ParamLimits

0xd74a,	// (0x0001ba5b) main_cset6_slider_pane_t7

0x664b,	// (0x0001495c) main_cset6_slider_pane_t8_ParamLimits

0x664b,	// (0x0001495c) main_cset6_slider_pane_t8

0x666f,	// (0x00014980) main_cset6_slider_pane_t9_ParamLimits

0x666f,	// (0x00014980) main_cset6_slider_pane_t9

0x6693,	// (0x000149a4) main_cset6_slider_pane_t10_ParamLimits

0x6693,	// (0x000149a4) main_cset6_slider_pane_t10

0x66b7,	// (0x000149c8) main_cset6_slider_pane_t11_ParamLimits

0x66b7,	// (0x000149c8) main_cset6_slider_pane_t11

0xd780,	// (0x0001ba91) main_cset6_slider_pane_t14_ParamLimits

0xd780,	// (0x0001ba91) main_cset6_slider_pane_t14

0xd7b9,	// (0x0001baca) main_cset6_slider_pane_t15_ParamLimits

0xd7b9,	// (0x0001baca) main_cset6_slider_pane_t15

0x000b,

0xfae8,	// (0x0001ddf9) main_cset6_slider_pane_t_ParamLimits

0xfae8,	// (0x0001ddf9) main_cset6_slider_pane_t

0xce92,	// (0x0001b1a3) cset_slider_pane_g1_copy1

0xce9b,	// (0x0001b1ac) cset_slider_pane_g2_copy1

0xcea4,	// (0x0001b1b5) cset_slider_pane_g3_copy1

0x9231,	// (0x00017542) bg_popup_sub_pane_cp011_copy1

0xd7fb,	// (0x0001bb0c) main_cset_text_pane_g1_copy1

0xcf69,	// (0x0001b27a) main_cset_text_pane_t1_copy1

0xcf77,	// (0x0001b288) main_cset_text_pane_t2_copy1

0xcf85,	// (0x0001b296) main_cset_text_pane_t3_copy1

0xcf93,	// (0x0001b2a4) main_cset_text_pane_t4_copy1

0xcfa1,	// (0x0001b2b2) main_cset_text_pane_t5_copy1

0xd803,	// (0x0001bb14) main_cset_text_pane_t6_copy1

0xd811,	// (0x0001bb22) main_cset_text_pane_t7_copy1

0x6497,	// (0x000147a8) main_cset_text2_pane_t1_copy1

0x92a0,	// (0x000175b1) main_ncimui_pane

0x35fc,	// (0x0001190d) popup_query_ncimui_window_ParamLimits

0x35fc,	// (0x0001190d) popup_query_ncimui_window

0xc25f,	// (0x0001a570) field_cale_ev2_pane_g4_ParamLimits

0xc25f,	// (0x0001a570) field_cale_ev2_pane_g4

0x47e8,	// (0x00012af9) cell_video_dialer_keypad_pane_g2_ParamLimits

0x47e8,	// (0x00012af9) cell_video_dialer_keypad_pane_g2

0x0001,

0xf7cc,	// (0x0001dadd) cell_video_dialer_keypad_pane_g_ParamLimits

0xf7cc,	// (0x0001dadd) cell_video_dialer_keypad_pane_g

0x4800,	// (0x00012b11) cell_video_dialer_keypad_pane_t1

0x9231,	// (0x00017542) bg_popup_window_pane_cp012

0xb9eb,	// (0x00019cfc) heading_pane_cp06

0xd83d,	// (0x0001bb4e) ncim_query_content_pane

0x9231,	// (0x00017542) bg_popup_heading_pane_cp01

0xd845,	// (0x0001bb56) ncim_heading_pane_t1

0xd853,	// (0x0001bb64) ncim_indicator_popup_pane

0xd865,	// (0x0001bb76) ncim_query_button_pane

0xd879,	// (0x0001bb8a) ncim_query_content_pane_t1

0xd88b,	// (0x0001bb9c) ncim_query_content_pane_t2

0x0005,

0xfb2c,	// (0x0001de3d) ncim_query_content_pane_t

0xd8c5,	// (0x0001bbd6) ncim_query_list_pane

0xd8d7,	// (0x0001bbe8) ncim_query_popup_pane

0xd853,	// (0x0001bb64) ncim_indicator_popup_pane_ParamLimits

0x6821,	// (0x00014b32) ncim_query_content_pane_g1_ParamLimits

0x6821,	// (0x00014b32) ncim_query_content_pane_g1

0xd879,	// (0x0001bb8a) ncim_query_content_pane_t1_ParamLimits

0xd88b,	// (0x0001bb9c) ncim_query_content_pane_t2_ParamLimits

0x682d,	// (0x00014b3e) ncim_query_content_pane_t3_ParamLimits

0x682d,	// (0x00014b3e) ncim_query_content_pane_t3

0x6855,	// (0x00014b66) ncim_query_content_pane_t4_ParamLimits

0x6855,	// (0x00014b66) ncim_query_content_pane_t4

0x687d,	// (0x00014b8e) ncim_query_content_pane_t5_ParamLimits

0x687d,	// (0x00014b8e) ncim_query_content_pane_t5

0xd89d,	// (0x0001bbae) ncim_query_content_pane_t6_ParamLimits

0xd89d,	// (0x0001bbae) ncim_query_content_pane_t6

0xfb2c,	// (0x0001de3d) ncim_query_content_pane_t_ParamLimits

0xd8c5,	// (0x0001bbd6) ncim_query_list_pane_ParamLimits

0xd8d7,	// (0x0001bbe8) ncim_query_popup_pane_ParamLimits

0xd8eb,	// (0x0001bbfc) wait_bar_pane_cp04

0x9231,	// (0x00017542) input_focus_pane_cp011

0xd8f3,	// (0x0001bc04) ncim_query_popup_pane_t1

0xd901,	// (0x0001bc12) ncim_list_query_list_pane_ParamLimits

0xd901,	// (0x0001bc12) ncim_list_query_list_pane

0x9231,	// (0x00017542) bg_button_pane_cp027

0xd90e,	// (0x0001bc1f) ncim_query_button_pane_g1

0x9231,	// (0x00017542) list_highlight_pane_cp012

0xd918,	// (0x0001bc29) ncim_list_query_list_pane_g1

0xd920,	// (0x0001bc31) ncim_list_query_list_pane_t1

0xcb22,	// (0x0001ae33) cam4_indicators_pane_g3_ParamLimits

0xcb22,	// (0x0001ae33) cam4_indicators_pane_g3

0xcb9d,	// (0x0001aeae) vid4_indicators_pane_g5_ParamLimits

0xcb9d,	// (0x0001aeae) vid4_indicators_pane_g5

0xd26e,	// (0x0001b57f) vid4_progress_pane_g5_ParamLimits

0xd26e,	// (0x0001b57f) vid4_progress_pane_g5

0x670c,	// (0x00014a1d) main_ncimui_pane_g1

0x6775,	// (0x00014a86) ncimui_group_query_pane_ParamLimits

0x6775,	// (0x00014a86) ncimui_group_query_pane

0x67bd,	// (0x00014ace) ncimui_list_pane_ParamLimits

0x67bd,	// (0x00014ace) ncimui_list_pane

0x67e4,	// (0x00014af5) ncimui_text_pane_ParamLimits

0x67e4,	// (0x00014af5) ncimui_text_pane

0x68a5,	// (0x00014bb6) ncimui_text_pane_t1_ParamLimits

0x68a5,	// (0x00014bb6) ncimui_text_pane_t1

0xd92e,	// (0x0001bc3f) ncimui_list_single_graphic_pane_ParamLimits

0xd92e,	// (0x0001bc3f) ncimui_list_single_graphic_pane

0x68c3,	// (0x00014bd4) ncimui_query_pane_ParamLimits

0x68c3,	// (0x00014bd4) ncimui_query_pane

0x9231,	// (0x00017542) list_highlight_pane_cp013

0xd93e,	// (0x0001bc4f) ncim_list_query_list_pane_t1_copy1

0xd94c,	// (0x0001bc5d) ncim_list_single_graphic_pane_g1

0x68d6,	// (0x00014be7) ncim_query_button_pane_cp01

0x68e2,	// (0x00014bf3) ncim_query_entry_pane_ParamLimits

0x68e2,	// (0x00014bf3) ncim_query_entry_pane

0x68f5,	// (0x00014c06) ncimui_query_pane_g1

0x6901,	// (0x00014c12) ncimui_query_pane_t1_ParamLimits

0x6901,	// (0x00014c12) ncimui_query_pane_t1

0x92a0,	// (0x000175b1) input_focus_pane_cp012

0xd954,	// (0x0001bc65) ncim_query_entry_pane_t1

0x9a55,	// (0x00017d66) main_im_pane_ParamLimits

0x92a0,	// (0x000175b1) main_mobtv_pane_ParamLimits

0x92a0,	// (0x000175b1) main_mobtv_pane

0x6587,	// (0x00014898) main_cset6_slider_pane_g18_ParamLimits

0x6587,	// (0x00014898) main_cset6_slider_pane_g18

0x6593,	// (0x000148a4) main_cset6_slider_pane_g19_ParamLimits

0x6593,	// (0x000148a4) main_cset6_slider_pane_g19

0x99b3,	// (0x00017cc4) bg_main_mobtv_pane_ParamLimits

0x99b3,	// (0x00017cc4) bg_main_mobtv_pane

0x691a,	// (0x00014c2b) main_mobtv_info_pane

0x6923,	// (0x00014c34) main_mobtv_loading_pane_ParamLimits

0x6923,	// (0x00014c34) main_mobtv_loading_pane

0xd966,	// (0x0001bc77) main_mobtv_pg_channel_list_pane

0xd970,	// (0x0001bc81) main_mobtv_pg_hdr_pane

0x6930,	// (0x00014c41) main_mobtv_programe_curr_pane_ParamLimits

0x6930,	// (0x00014c41) main_mobtv_programe_curr_pane

0x693d,	// (0x00014c4e) main_mobtv_programe_next_pane_ParamLimits

0x693d,	// (0x00014c4e) main_mobtv_programe_next_pane

0xd979,	// (0x0001bc8a) popup_mobtv_noti_window

0x99dd,	// (0x00017cee) main_tv_pg_hdr_pane_g1

0xd981,	// (0x0001bc92) main_tv_pg_hdr_pane_g2

0xd989,	// (0x0001bc9a) main_tv_pg_hdr_pane_g3

0xd991,	// (0x0001bca2) main_tv_pg_hdr_pane_g4

0xd999,	// (0x0001bcaa) main_tv_pg_hdr_pane_g5

0xd9a3,	// (0x0001bcb4) main_tv_pg_hdr_pane_g6

0xd9ad,	// (0x0001bcbe) main_tv_pg_hdr_pane_g7

0xd9b7,	// (0x0001bcc8) main_tv_pg_hdr_pane_g8

0xd9c1,	// (0x0001bcd2) main_tv_pg_hdr_pane_g9

0xd9cb,	// (0x0001bcdc) main_tv_pg_hdr_pane_g10

0xd9d5,	// (0x0001bce6) main_tv_pg_hdr_pane_g11

0x000a,

0xfb39,	// (0x0001de4a) main_tv_pg_hdr_pane_g

0xd9df,	// (0x0001bcf0) main_tv_pg_hdr_pane_t1

0xd9ed,	// (0x0001bcfe) main_tv_pg_hdr_pane_t2

0xd9fb,	// (0x0001bd0c) main_tv_pg_hdr_pane_t3

0xda0b,	// (0x0001bd1c) main_tv_pg_hdr_pane_t4

0xda1b,	// (0x0001bd2c) main_tv_pg_hdr_pane_t5

0x0004,

0xfb50,	// (0x0001de61) main_tv_pg_hdr_pane_t

0xda2b,	// (0x0001bd3c) single_mobtv_pg_channel_pane_ParamLimits

0xda2b,	// (0x0001bd3c) single_mobtv_pg_channel_pane

0xda3d,	// (0x0001bd4e) single_mobtv_pg_channel_table_pane

0x9fbc,	// (0x000182cd) single_mobtv_pg_channel_thumb_pane

0xda46,	// (0x0001bd57) single_tv_pg_channel_pane_g1

0xda4f,	// (0x0001bd60) single_tv_pg_channel_pane_g2

0x0001,

0xfb5b,	// (0x0001de6c) single_tv_pg_channel_pane_g

0x9997,	// (0x00017ca8) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x9997,	// (0x00017ca8) bg_single_mobtv_pg_channel_thumb_pane

0xda58,	// (0x0001bd69) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xda58,	// (0x0001bd69) single_mobtv_pg_channel_thumb_pane_g1

0xda66,	// (0x0001bd77) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xda66,	// (0x0001bd77) single_mobtv_pg_channel_thumb_pane_g2

0xda72,	// (0x0001bd83) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xda72,	// (0x0001bd83) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfb60,	// (0x0001de71) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfb60,	// (0x0001de71) single_mobtv_pg_channel_thumb_pane_g

0xda7e,	// (0x0001bd8f) single_mobtv_pg_channel_thumb_pane_t1

0xda8c,	// (0x0001bd9d) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfb67,	// (0x0001de78) single_mobtv_pg_channel_thumb_pane_t

0x99dd,	// (0x00017cee) bg_single_mobtv_pg_channel_table_pane_g1

0x99dd,	// (0x00017cee) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf0af,	// (0x0001d3c0) bg_single_mobtv_pg_channel_table_pane_g

0xda9a,	// (0x0001bdab) single_mobtv_pg_channel_table_pane_t1

0xdaa8,	// (0x0001bdb9) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfb6c,	// (0x0001de7d) single_mobtv_pg_channel_table_pane_t

0x6952,	// (0x00014c63) main_mobtv_info_pane_g1_ParamLimits

0x6952,	// (0x00014c63) main_mobtv_info_pane_g1

0x6970,	// (0x00014c81) main_mobtv_info_pane_t1_ParamLimits

0x6970,	// (0x00014c81) main_mobtv_info_pane_t1

0x69e8,	// (0x00014cf9) main_mobtv_info_pane_t2_ParamLimits

0x69e8,	// (0x00014cf9) main_mobtv_info_pane_t2

0x0002,

0xfb76,	// (0x0001de87) main_mobtv_info_pane_t_ParamLimits

0xfb76,	// (0x0001de87) main_mobtv_info_pane_t

0x6a77,	// (0x00014d88) wait_bar_pane_cp05

0x6a89,	// (0x00014d9a) main_mobtv_loading_pane_g1_ParamLimits

0x6a89,	// (0x00014d9a) main_mobtv_loading_pane_g1

0x6a9c,	// (0x00014dad) main_mobtv_loading_pane_g2_ParamLimits

0x6a9c,	// (0x00014dad) main_mobtv_loading_pane_g2

0x6aa8,	// (0x00014db9) main_mobtv_loading_pane_g3_ParamLimits

0x6aa8,	// (0x00014db9) main_mobtv_loading_pane_g3

0x0002,

0xfb7d,	// (0x0001de8e) main_mobtv_loading_pane_g_ParamLimits

0xfb7d,	// (0x0001de8e) main_mobtv_loading_pane_g

0xdab6,	// (0x0001bdc7) main_mobtv_loading_pane_t1_ParamLimits

0xdab6,	// (0x0001bdc7) main_mobtv_loading_pane_t1

0xdace,	// (0x0001bddf) main_mobtv_loading_pane_t2_ParamLimits

0xdace,	// (0x0001bddf) main_mobtv_loading_pane_t2

0x0001,

0xfb84,	// (0x0001de95) main_mobtv_loading_pane_t_ParamLimits

0xfb84,	// (0x0001de95) main_mobtv_loading_pane_t

0x6abb,	// (0x00014dcc) wait_bar_pane_cp06_ParamLimits

0x6abb,	// (0x00014dcc) wait_bar_pane_cp06

0xdaf2,	// (0x0001be03) main_mobtv_programe_curr_pane_t1

0xdb00,	// (0x0001be11) main_mobtv_programe_curr_pane_t2

0x0001,

0xfb89,	// (0x0001de9a) main_mobtv_programe_curr_pane_t

0xdb0e,	// (0x0001be1f) main_mobtv_programe_next_pane_t1

0xdb1c,	// (0x0001be2d) main_mobtv_programe_next_pane_t2

0xdb2a,	// (0x0001be3b) main_mobtv_programe_next_pane_t3

0x0002,

0xfb8e,	// (0x0001de9f) main_mobtv_programe_next_pane_t

0x9231,	// (0x00017542) bg_popup_mobtv_noti_window_pane

0xdb38,	// (0x0001be49) popup_mobtv_noti_window_g1

0xdb40,	// (0x0001be51) popup_mobtv_noti_window_t1

0xdb4e,	// (0x0001be5f) popup_mobtv_noti_window_t2

0x0001,

0xfb95,	// (0x0001dea6) popup_mobtv_noti_window_t

0x99dd,	// (0x00017cee) bg_popup_mobtv_noti_window_pane_g1

0x9231,	// (0x00017542) sc_clock_pane

0x9231,	// (0x00017542) main_fs_bigclock_pane

0x61de,	// (0x000144ef) blid2_tripm_pane_t4_ParamLimits

0x61de,	// (0x000144ef) blid2_tripm_pane_t4

0x9997,	// (0x00017ca8) sc_clock_pane_g1_ParamLimits

0x9997,	// (0x00017ca8) sc_clock_pane_g1

0x99e7,	// (0x00017cf8) sc_clock_pane_t1_ParamLimits

0x99e7,	// (0x00017cf8) sc_clock_pane_t1

0x99e7,	// (0x00017cf8) sc_clock_pane_t2_ParamLimits

0x99e7,	// (0x00017cf8) sc_clock_pane_t2

0x99e7,	// (0x00017cf8) sc_clock_pane_t3_ParamLimits

0x99e7,	// (0x00017cf8) sc_clock_pane_t3

0x0004,

0xfb9a,	// (0x0001deab) sc_clock_pane_t_ParamLimits

0xfb9a,	// (0x0001deab) sc_clock_pane_t

0x7689,	// (0x0001599a) main_fs_bigclock_indicator_pane_ParamLimits

0x7689,	// (0x0001599a) main_fs_bigclock_indicator_pane

0x6b19,	// (0x00014e2a) main_fs_bigclock_pane_g1_ParamLimits

0x6b19,	// (0x00014e2a) main_fs_bigclock_pane_g1

0x7695,	// (0x000159a6) main_fs_bigclock_pane_t1_ParamLimits

0x7695,	// (0x000159a6) main_fs_bigclock_pane_t1

0x76a7,	// (0x000159b8) main_fs_bigclock_pane_t2_ParamLimits

0x76a7,	// (0x000159b8) main_fs_bigclock_pane_t2

0x76bb,	// (0x000159cc) main_fs_bigclock_pane_t3_ParamLimits

0x76bb,	// (0x000159cc) main_fs_bigclock_pane_t3

0x0002,

0xfd2b,	// (0x0001e03c) main_fs_bigclock_pane_t_ParamLimits

0xfd2b,	// (0x0001e03c) main_fs_bigclock_pane_t

0xe66f,	// (0x0001c980) main_fs_bigclock_indicator_pane_g1

0xd86d,	// (0x0001bb7e) ncim_query_content_pane_g2_ParamLimits

0xd86d,	// (0x0001bb7e) ncim_query_content_pane_g2

0x0001,

0xfb27,	// (0x0001de38) ncim_query_content_pane_g_ParamLimits

0xfb27,	// (0x0001de38) ncim_query_content_pane_g

0x99e7,	// (0x00017cf8) sc_clock_pane_t4_ParamLimits

0x99e7,	// (0x00017cf8) sc_clock_pane_t4

0x92a0,	// (0x000175b1) main_radioblah_pane

0xca8b,	// (0x0001ad9c) cell_call4_button_pane_t1_copy1_ParamLimits

0xca8b,	// (0x0001ad9c) cell_call4_button_pane_t1_copy1

0x6724,	// (0x00014a35) main_ncimui_pane_t1_ParamLimits

0x6724,	// (0x00014a35) main_ncimui_pane_t1

0x673e,	// (0x00014a4f) main_ncimui_pane_t2_ParamLimits

0x673e,	// (0x00014a4f) main_ncimui_pane_t2

0x0002,

0xfb20,	// (0x0001de31) main_ncimui_pane_t_ParamLimits

0xfb20,	// (0x0001de31) main_ncimui_pane_t

0xa81b,	// (0x00018b2c) main_radioblah_anim_pane_ParamLimits

0xa81b,	// (0x00018b2c) main_radioblah_anim_pane

0xa81b,	// (0x00018b2c) main_radioblah_info_pane_ParamLimits

0xa81b,	// (0x00018b2c) main_radioblah_info_pane

0xa807,	// (0x00018b18) main_radioblah_pane_t1_ParamLimits

0xa807,	// (0x00018b18) main_radioblah_pane_t1

0xa807,	// (0x00018b18) main_radioblah_pane_t2_ParamLimits

0xa807,	// (0x00018b18) main_radioblah_pane_t2

0x0003,

0xfbbb,	// (0x0001decc) main_radioblah_pane_t_ParamLimits

0xfbbb,	// (0x0001decc) main_radioblah_pane_t

0x92a0,	// (0x000175b1) main_radioblah_rocker_ctrl_pane_ParamLimits

0x92a0,	// (0x000175b1) main_radioblah_rocker_ctrl_pane

0xbbf0,	// (0x00019f01) main_radioblah_info_pane_t1_ParamLimits

0xbbf0,	// (0x00019f01) main_radioblah_info_pane_t1

0xdcc4,	// (0x0001bfd5) main_radioblah_info_pane_t2_ParamLimits

0xdcc4,	// (0x0001bfd5) main_radioblah_info_pane_t2

0x0003,

0xfbc4,	// (0x0001ded5) main_radioblah_info_pane_t_ParamLimits

0xfbc4,	// (0x0001ded5) main_radioblah_info_pane_t

0x99dd,	// (0x00017cee) main_radioblah_rocker_ctrl_pane_g1

0x99dd,	// (0x00017cee) main_radioblah_rocker_ctrl_pane_g2

0x99dd,	// (0x00017cee) main_radioblah_rocker_ctrl_pane_g3

0x99dd,	// (0x00017cee) main_radioblah_rocker_ctrl_pane_g4

0x99dd,	// (0x00017cee) main_radioblah_rocker_ctrl_pane_g5

0x99dd,	// (0x00017cee) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfbcd,	// (0x0001dede) main_radioblah_rocker_ctrl_pane_g

0x6497,	// (0x000147a8) main_cset_text2_pane_t1_copy1_ParamLimits

0xcaf5,	// (0x0001ae06) cam4_image_uncrop_qvga_pane

0xcb48,	// (0x0001ae59) vid4_image_uncrop_qcif_pane

0xd47b,	// (0x0001b78c) cam6_image_uncrop_qvga_pane_ParamLimits

0xd47b,	// (0x0001b78c) cam6_image_uncrop_qvga_pane

0xd533,	// (0x0001b844) vid6_image_uncrop_qcif_pane_ParamLimits

0xd533,	// (0x0001b844) vid6_image_uncrop_qcif_pane

0x9231,	// (0x00017542) bg_popup_preview_window_pane_cp03

0xd81f,	// (0x0001bb30) list_cset_text2_pane

0xd827,	// (0x0001bb38) main_cset6_text2_pane_g1

0xd82f,	// (0x0001bb40) main_cset6_text2_pane_t1

0xe8cd,	// (0x0001cbde) list_cset_text2_pane_t1_ParamLimits

0xe8cd,	// (0x0001cbde) list_cset_text2_pane_t1

0x92a0,	// (0x000175b1) main_radioblah_pane_ParamLimits

0x6a63,	// (0x00014d74) main_mobtv_info_pane_t3_ParamLimits

0x6a63,	// (0x00014d74) main_mobtv_info_pane_t3

0xa7f9,	// (0x00018b0a) main_radioblah_pane_g1

0xdc94,	// (0x0001bfa5) main_radioblah_info_pane_g1

0x99fb,	// (0x00017d0c) main_radioblah_info_pane_t3_ParamLimits

0x99fb,	// (0x00017d0c) main_radioblah_info_pane_t3

0x2365,	// (0x00010676) highlight_cell_cale_month_pane_ParamLimits

0x2365,	// (0x00010676) highlight_cell_cale_month_pane

0x9231,	// (0x00017542) main_phob_fisheye_pane

0xc300,	// (0x0001a611) scroll_pane_cp0031_ParamLimits

0xc300,	// (0x0001a611) scroll_pane_cp0031

0xd641,	// (0x0001b952) wait_bar_pane_cp08_ParamLimits

0x6519,	// (0x0001482a) cset_list_set_pane_copy1_ParamLimits

0xdd13,	// (0x0001c024) highlight_cell_cale_month_pane_g1

0x6b66,	// (0x00014e77) highlight_cell_cale_month_pane_t1

0xd231,	// (0x0001b542) list_gen_pane_cp01

0xcd62,	// (0x0001b073) scroll_pane_01

0x6b74,	// (0x00014e85) list_single_double_fisheye_pane

0x6b7d,	// (0x00014e8e) list_double_fisheye_pane_g1_ParamLimits

0x6b7d,	// (0x00014e8e) list_double_fisheye_pane_g1

0x6b89,	// (0x00014e9a) list_double_fisheye_pane_g2_ParamLimits

0x6b89,	// (0x00014e9a) list_double_fisheye_pane_g2

0x6b9d,	// (0x00014eae) list_double_fisheye_pane_g3_ParamLimits

0x6b9d,	// (0x00014eae) list_double_fisheye_pane_g3

0x0004,

0xfbda,	// (0x0001deeb) list_double_fisheye_pane_g_ParamLimits

0xfbda,	// (0x0001deeb) list_double_fisheye_pane_g

0x6bc6,	// (0x00014ed7) list_double_fisheye_pane_t1_ParamLimits

0x6bc6,	// (0x00014ed7) list_double_fisheye_pane_t1

0x6be1,	// (0x00014ef2) list_double_fisheye_pane_t2_ParamLimits

0x6be1,	// (0x00014ef2) list_double_fisheye_pane_t2

0x0001,

0xfbe5,	// (0x0001def6) list_double_fisheye_pane_t_ParamLimits

0xfbe5,	// (0x0001def6) list_double_fisheye_pane_t

0x9231,	// (0x00017542) main_call5_pane

0x92a0,	// (0x000175b1) sc_swipe_pane_ParamLimits

0x92a0,	// (0x000175b1) sc_swipe_pane

0x6c16,	// (0x00014f27) call5_image_pane_ParamLimits

0x6c16,	// (0x00014f27) call5_image_pane

0x6c33,	// (0x00014f44) call5_swipe_1_pane_ParamLimits

0x6c33,	// (0x00014f44) call5_swipe_1_pane

0x6c46,	// (0x00014f57) call5_swipe_2_pane_ParamLimits

0x6c46,	// (0x00014f57) call5_swipe_2_pane

0x6c71,	// (0x00014f82) popup_call5_audio_first_window_ParamLimits

0x6c71,	// (0x00014f82) popup_call5_audio_first_window

0x9997,	// (0x00017ca8) call5_swipe_1_pane_g1_ParamLimits

0x9997,	// (0x00017ca8) call5_swipe_1_pane_g1

0xdd1b,	// (0x0001c02c) call5_swipe_1_pane_g2_ParamLimits

0xdd1b,	// (0x0001c02c) call5_swipe_1_pane_g2

0x0001,

0xfbea,	// (0x0001defb) call5_swipe_1_pane_g_ParamLimits

0xfbea,	// (0x0001defb) call5_swipe_1_pane_g

0xdd27,	// (0x0001c038) call5_swipe_1_pane_t1_ParamLimits

0xdd27,	// (0x0001c038) call5_swipe_1_pane_t1

0x9997,	// (0x00017ca8) call5_swipe_2_pane_g1_ParamLimits

0x9997,	// (0x00017ca8) call5_swipe_2_pane_g1

0xdd3c,	// (0x0001c04d) call5_swipe_2_pane_g2_ParamLimits

0xdd3c,	// (0x0001c04d) call5_swipe_2_pane_g2

0x0001,

0xfbef,	// (0x0001df00) call5_swipe_2_pane_g_ParamLimits

0xfbef,	// (0x0001df00) call5_swipe_2_pane_g

0xdd48,	// (0x0001c059) call5_swipe_2_pane_t1_ParamLimits

0xdd48,	// (0x0001c059) call5_swipe_2_pane_t1

0x9997,	// (0x00017ca8) sc_swipe_pane_g1_ParamLimits

0x9997,	// (0x00017ca8) sc_swipe_pane_g1

0x99a5,	// (0x00017cb6) sc_swipe_pane_g2_ParamLimits

0x99a5,	// (0x00017cb6) sc_swipe_pane_g2

0x0001,

0xf768,	// (0x0001da79) sc_swipe_pane_g_ParamLimits

0xf768,	// (0x0001da79) sc_swipe_pane_g

0x99e7,	// (0x00017cf8) sc_swipe_pane_t1_ParamLimits

0x99e7,	// (0x00017cf8) sc_swipe_pane_t1

0x9231,	// (0x00017542) main_cmail_launcher_pane

0x6c82,	// (0x00014f93) aid_size_cell_cmail_l_ParamLimits

0x6c82,	// (0x00014f93) aid_size_cell_cmail_l

0x6c90,	// (0x00014fa1) grid_cmail_l_pane_ParamLimits

0x6c90,	// (0x00014fa1) grid_cmail_l_pane

0x6caa,	// (0x00014fbb) cell_cmail_l_pane_ParamLimits

0x6caa,	// (0x00014fbb) cell_cmail_l_pane

0xdd5d,	// (0x0001c06e) cell_cmail_l_pane_g1_ParamLimits

0xdd5d,	// (0x0001c06e) cell_cmail_l_pane_g1

0xdd69,	// (0x0001c07a) cell_cmail_l_pane_t1_ParamLimits

0xdd69,	// (0x0001c07a) cell_cmail_l_pane_t1

0xdd7f,	// (0x0001c090) cell_cmail_l_pane_t2_ParamLimits

0xdd7f,	// (0x0001c090) cell_cmail_l_pane_t2

0x0001,

0xfbf4,	// (0x0001df05) cell_cmail_l_pane_t_ParamLimits

0xfbf4,	// (0x0001df05) cell_cmail_l_pane_t

0x92a0,	// (0x000175b1) grid_highlight_pane_cp018_ParamLimits

0x92a0,	// (0x000175b1) grid_highlight_pane_cp018

0x0a92,	// (0x0000eda3) main2_pane_ParamLimits

0x0a92,	// (0x0000eda3) main2_pane

0x9b11,	// (0x00017e22) popup_sp_fs_action_menu_bg_pane_g1

0x9b19,	// (0x00017e2a) popup_sp_fs_action_menu_bg_pane_g2

0x9b21,	// (0x00017e32) popup_sp_fs_action_menu_bg_pane_g3

0x9b29,	// (0x00017e3a) popup_sp_fs_action_menu_bg_pane_g4

0x9b31,	// (0x00017e42) popup_sp_fs_action_menu_bg_pane_g5

0x9b39,	// (0x00017e4a) popup_sp_fs_action_menu_bg_pane_g6

0x9b41,	// (0x00017e52) popup_sp_fs_action_menu_bg_pane_g7

0x9b49,	// (0x00017e5a) popup_sp_fs_action_menu_bg_pane_g8

0x9b51,	// (0x00017e62) popup_sp_fs_action_menu_bg_pane_g9

0x9b59,	// (0x00017e6a) popup_sp_fs_action_menu_bg_pane_g10

0x9b59,	// (0x00017e6a) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf100,	// (0x0001d411) popup_sp_fs_action_menu_bg_pane_g

0x9997,	// (0x00017ca8) list_medium_line_x2_t3_g3_g1_ParamLimits

0x9997,	// (0x00017ca8) list_medium_line_x2_t3_g3_g1

0x9997,	// (0x00017ca8) list_medium_line_x2_t3_g3_g2_ParamLimits

0x9997,	// (0x00017ca8) list_medium_line_x2_t3_g3_g2

0x9997,	// (0x00017ca8) list_medium_line_x2_t3_g3_g3_ParamLimits

0x9997,	// (0x00017ca8) list_medium_line_x2_t3_g3_g3

0x0002,

0xf1ae,	// (0x0001d4bf) list_medium_line_x2_t3_g3_g_ParamLimits

0xf1ae,	// (0x0001d4bf) list_medium_line_x2_t3_g3_g

0x99e7,	// (0x00017cf8) list_medium_line_x2_t3_g3_t1_ParamLimits

0x99e7,	// (0x00017cf8) list_medium_line_x2_t3_g3_t1

0x99e7,	// (0x00017cf8) list_medium_line_x2_t3_g3_t2_ParamLimits

0x99e7,	// (0x00017cf8) list_medium_line_x2_t3_g3_t2

0x99e7,	// (0x00017cf8) list_medium_line_x2_t3_g3_t3_ParamLimits

0x99e7,	// (0x00017cf8) list_medium_line_x2_t3_g3_t3

0x0002,

0xf1b5,	// (0x0001d4c6) list_medium_line_x2_t3_g3_t_ParamLimits

0xf1b5,	// (0x0001d4c6) list_medium_line_x2_t3_g3_t

0x9997,	// (0x00017ca8) list_medium_line_x2_t3_g2_g1_ParamLimits

0x9997,	// (0x00017ca8) list_medium_line_x2_t3_g2_g1

0x9997,	// (0x00017ca8) list_medium_line_x2_t3_g2_g2_ParamLimits

0x9997,	// (0x00017ca8) list_medium_line_x2_t3_g2_g2

0x0001,

0xf1bc,	// (0x0001d4cd) list_medium_line_x2_t3_g2_g_ParamLimits

0xf1bc,	// (0x0001d4cd) list_medium_line_x2_t3_g2_g

0x99e7,	// (0x00017cf8) list_medium_line_x2_t3_g2_t1_ParamLimits

0x99e7,	// (0x00017cf8) list_medium_line_x2_t3_g2_t1

0x99e7,	// (0x00017cf8) list_medium_line_x2_t3_g2_t2_ParamLimits

0x99e7,	// (0x00017cf8) list_medium_line_x2_t3_g2_t2

0x99e7,	// (0x00017cf8) list_medium_line_x2_t3_g2_t3_ParamLimits

0x99e7,	// (0x00017cf8) list_medium_line_x2_t3_g2_t3

0x0002,

0xf1b5,	// (0x0001d4c6) list_medium_line_x2_t3_g2_t_ParamLimits

0xf1b5,	// (0x0001d4c6) list_medium_line_x2_t3_g2_t

0x9997,	// (0x00017ca8) list_medium_line_x2_t4_g4_g1_ParamLimits

0x9997,	// (0x00017ca8) list_medium_line_x2_t4_g4_g1

0x9997,	// (0x00017ca8) list_medium_line_x2_t4_g4_g2_ParamLimits

0x9997,	// (0x00017ca8) list_medium_line_x2_t4_g4_g2

0x9997,	// (0x00017ca8) list_medium_line_x2_t4_g4_g3_ParamLimits

0x9997,	// (0x00017ca8) list_medium_line_x2_t4_g4_g3

0x9997,	// (0x00017ca8) list_medium_line_x2_t4_g4_g4_ParamLimits

0x9997,	// (0x00017ca8) list_medium_line_x2_t4_g4_g4

0x0003,

0xf1c1,	// (0x0001d4d2) list_medium_line_x2_t4_g4_g_ParamLimits

0xf1c1,	// (0x0001d4d2) list_medium_line_x2_t4_g4_g

0x99e7,	// (0x00017cf8) list_medium_line_x2_t4_g4_t1_ParamLimits

0x99e7,	// (0x00017cf8) list_medium_line_x2_t4_g4_t1

0x99e7,	// (0x00017cf8) list_medium_line_x2_t4_g4_t2_ParamLimits

0x99e7,	// (0x00017cf8) list_medium_line_x2_t4_g4_t2

0x99e7,	// (0x00017cf8) list_medium_line_x2_t4_g4_t3_ParamLimits

0x99e7,	// (0x00017cf8) list_medium_line_x2_t4_g4_t3

0x99e7,	// (0x00017cf8) list_medium_line_x2_t4_g4_t4_ParamLimits

0x99e7,	// (0x00017cf8) list_medium_line_x2_t4_g4_t4

0x0003,

0xf1ca,	// (0x0001d4db) list_medium_line_x2_t4_g4_t_ParamLimits

0xf1ca,	// (0x0001d4db) list_medium_line_x2_t4_g4_t

0x9997,	// (0x00017ca8) list_medium_line_x2_t2_g4_g1_ParamLimits

0x9997,	// (0x00017ca8) list_medium_line_x2_t2_g4_g1

0x9997,	// (0x00017ca8) list_medium_line_x2_t2_g4_g2_ParamLimits

0x9997,	// (0x00017ca8) list_medium_line_x2_t2_g4_g2

0x9997,	// (0x00017ca8) list_medium_line_x2_t2_g4_g3_ParamLimits

0x9997,	// (0x00017ca8) list_medium_line_x2_t2_g4_g3

0x9997,	// (0x00017ca8) list_medium_line_x2_t2_g4_g4_ParamLimits

0x9997,	// (0x00017ca8) list_medium_line_x2_t2_g4_g4

0x0003,

0xf1c1,	// (0x0001d4d2) list_medium_line_x2_t2_g4_g_ParamLimits

0xf1c1,	// (0x0001d4d2) list_medium_line_x2_t2_g4_g

0x99e7,	// (0x00017cf8) list_medium_line_x2_t2_g4_t1_ParamLimits

0x99e7,	// (0x00017cf8) list_medium_line_x2_t2_g4_t1

0x99e7,	// (0x00017cf8) list_medium_line_x2_t2_g4_t2_ParamLimits

0x99e7,	// (0x00017cf8) list_medium_line_x2_t2_g4_t2

0x0001,

0xf191,	// (0x0001d4a2) list_medium_line_x2_t2_g4_t_ParamLimits

0xf191,	// (0x0001d4a2) list_medium_line_x2_t2_g4_t

0x9997,	// (0x00017ca8) list_medium_line_x2_t2_g3_g1_ParamLimits

0x9997,	// (0x00017ca8) list_medium_line_x2_t2_g3_g1

0x9997,	// (0x00017ca8) list_medium_line_x2_t2_g3_g2_ParamLimits

0x9997,	// (0x00017ca8) list_medium_line_x2_t2_g3_g2

0x9997,	// (0x00017ca8) list_medium_line_x2_t2_g3_g3_ParamLimits

0x9997,	// (0x00017ca8) list_medium_line_x2_t2_g3_g3

0x0002,

0xf1ae,	// (0x0001d4bf) list_medium_line_x2_t2_g3_g_ParamLimits

0xf1ae,	// (0x0001d4bf) list_medium_line_x2_t2_g3_g

0x99e7,	// (0x00017cf8) list_medium_line_x2_t2_g3_t1_ParamLimits

0x99e7,	// (0x00017cf8) list_medium_line_x2_t2_g3_t1

0x99e7,	// (0x00017cf8) list_medium_line_x2_t2_g3_t2_ParamLimits

0x99e7,	// (0x00017cf8) list_medium_line_x2_t2_g3_t2

0x0001,

0xf191,	// (0x0001d4a2) list_medium_line_x2_t2_g3_t_ParamLimits

0xf191,	// (0x0001d4a2) list_medium_line_x2_t2_g3_t

0x24ca,	// (0x000107db) main_sp_fs_list_pane_ParamLimits

0x24ca,	// (0x000107db) main_sp_fs_list_pane

0xce05,	// (0x0001b116) sp_fs_scroll_pane_ParamLimits

0xce05,	// (0x0001b116) sp_fs_scroll_pane

0xa1fd,	// (0x0001850e) list_medium_line_x2_t3_t1

0xa1fd,	// (0x0001850e) list_medium_line_x2_t3_t2

0xa1fd,	// (0x0001850e) list_medium_line_x2_t3_t3

0x0002,

0xf277,	// (0x0001d588) list_medium_line_x2_t3_t

0xa1fd,	// (0x0001850e) list_medium_line_x3_t4_t1

0xa1fd,	// (0x0001850e) list_medium_line_x3_t4_t2

0xa1fd,	// (0x0001850e) list_medium_line_x3_t4_t3

0xa1fd,	// (0x0001850e) list_medium_line_x3_t4_t4

0x0003,

0xf27e,	// (0x0001d58f) list_medium_line_x3_t4_t

0xa1fd,	// (0x0001850e) list_medium_line_x4_t5_t1

0xa1fd,	// (0x0001850e) list_medium_line_x4_t5_t2

0xa1fd,	// (0x0001850e) list_medium_line_x4_t5_t3

0xa1fd,	// (0x0001850e) list_medium_line_x4_t5_t4

0xa1fd,	// (0x0001850e) list_medium_line_x4_t5_t5

0x0004,

0xf287,	// (0x0001d598) list_medium_line_x4_t5_t

0x9997,	// (0x00017ca8) list_medium_line_t4_g4_g1_ParamLimits

0x9997,	// (0x00017ca8) list_medium_line_t4_g4_g1

0x9997,	// (0x00017ca8) list_medium_line_t4_g4_g2_ParamLimits

0x9997,	// (0x00017ca8) list_medium_line_t4_g4_g2

0x9997,	// (0x00017ca8) list_medium_line_t4_g4_g3_ParamLimits

0x9997,	// (0x00017ca8) list_medium_line_t4_g4_g3

0x9997,	// (0x00017ca8) list_medium_line_t4_g4_g4_ParamLimits

0x9997,	// (0x00017ca8) list_medium_line_t4_g4_g4

0x0003,

0xf1c1,	// (0x0001d4d2) list_medium_line_t4_g4_g_ParamLimits

0xf1c1,	// (0x0001d4d2) list_medium_line_t4_g4_g

0x99e7,	// (0x00017cf8) list_medium_line_t4_g4_t1_ParamLimits

0x99e7,	// (0x00017cf8) list_medium_line_t4_g4_t1

0x99e7,	// (0x00017cf8) list_medium_line_t4_g4_t2_ParamLimits

0x99e7,	// (0x00017cf8) list_medium_line_t4_g4_t2

0x99e7,	// (0x00017cf8) list_medium_line_t4_g4_t3_ParamLimits

0x99e7,	// (0x00017cf8) list_medium_line_t4_g4_t3

0x99e7,	// (0x00017cf8) list_medium_line_t4_g4_t4_ParamLimits

0x99e7,	// (0x00017cf8) list_medium_line_t4_g4_t4

0x0003,

0xf1ca,	// (0x0001d4db) list_medium_line_t4_g4_t_ParamLimits

0xf1ca,	// (0x0001d4db) list_medium_line_t4_g4_t

0x2575,	// (0x00010886) chi_dic_find_pane_g1

0x33cc,	// (0x000116dd) main_tport_pane

0xa1fd,	// (0x0001850e) list_medium_line_plain_t1

0x9997,	// (0x00017ca8) list_medium_line_t2_g2_g1_ParamLimits

0x9997,	// (0x00017ca8) list_medium_line_t2_g2_g1

0x9997,	// (0x00017ca8) list_medium_line_t2_g2_g2_ParamLimits

0x9997,	// (0x00017ca8) list_medium_line_t2_g2_g2

0x0001,

0xf1bc,	// (0x0001d4cd) list_medium_line_t2_g2_g_ParamLimits

0xf1bc,	// (0x0001d4cd) list_medium_line_t2_g2_g

0x99e7,	// (0x00017cf8) list_medium_line_t2_g2_t1_ParamLimits

0x99e7,	// (0x00017cf8) list_medium_line_t2_g2_t1

0x99e7,	// (0x00017cf8) list_medium_line_t2_g2_t2_ParamLimits

0x99e7,	// (0x00017cf8) list_medium_line_t2_g2_t2

0x0001,

0xf191,	// (0x0001d4a2) list_medium_line_t2_g2_t_ParamLimits

0xf191,	// (0x0001d4a2) list_medium_line_t2_g2_t

0xd2a5,	// (0x0001b5b6) aid_sp_fs_list_icon_a_sm

0xd2ad,	// (0x0001b5be) aid_sp_fs_list_icon_d

0xd2b5,	// (0x0001b5c6) aid_sp_fs_text_primary

0xd2be,	// (0x0001b5cf) aid_sp_fs_text_secondary

0x9231,	// (0x00017542) list_medium_line

0x9231,	// (0x00017542) list_medium_line_g2

0x9231,	// (0x00017542) list_medium_line_g3

0x9231,	// (0x00017542) list_medium_line_plain

0x9231,	// (0x00017542) list_medium_line_plain_t2

0x9231,	// (0x00017542) list_medium_line_plain_t3

0x9231,	// (0x00017542) list_medium_line_right_icon

0x9231,	// (0x00017542) list_medium_line_right_iconx2

0x9231,	// (0x00017542) list_medium_line_t2

0x9231,	// (0x00017542) list_medium_line_t2_g2

0x9231,	// (0x00017542) list_medium_line_t2_g3

0x9231,	// (0x00017542) list_medium_line_t2_right_icon

0x9231,	// (0x00017542) list_medium_line_t2_right_iconx2

0x9231,	// (0x00017542) list_medium_line_t3

0x9231,	// (0x00017542) list_medium_line_t3_g2

0x9231,	// (0x00017542) list_medium_line_t3_g3

0x9231,	// (0x00017542) list_medium_line_t3_right_iconx2

0x9231,	// (0x00017542) list_medium_line_t4_g4

0x9231,	// (0x00017542) list_medium_line_x2

0x9231,	// (0x00017542) list_medium_line_x2_t2_g2

0x9231,	// (0x00017542) list_medium_line_x2_t2_g3

0x9231,	// (0x00017542) list_medium_line_x2_t2_g4

0x9231,	// (0x00017542) list_medium_line_x2_t3

0x9231,	// (0x00017542) list_medium_line_x2_t3_g2

0x9231,	// (0x00017542) list_medium_line_x2_t3_g3

0x9231,	// (0x00017542) list_medium_line_x2_t3_g4

0x9231,	// (0x00017542) list_medium_line_x2_t4_g2

0x9231,	// (0x00017542) list_medium_line_x2_t4_g4

0x9231,	// (0x00017542) list_medium_line_x3

0x9231,	// (0x00017542) list_medium_line_x3_t4

0x9231,	// (0x00017542) list_medium_line_x3_t4_g4

0x9231,	// (0x00017542) list_medium_line_x4_t4

0x9231,	// (0x00017542) list_medium_line_x4_t4_g7

0x9231,	// (0x00017542) list_medium_line_x4_t5

0x5fce,	// (0x000142df) list_single_fs_dyc_pane_ParamLimits

0x5fce,	// (0x000142df) list_single_fs_dyc_pane

0x9997,	// (0x00017ca8) list_medium_line_x4_t4_g7_g1_ParamLimits

0x9997,	// (0x00017ca8) list_medium_line_x4_t4_g7_g1

0x9997,	// (0x00017ca8) list_medium_line_x4_t4_g7_g2_ParamLimits

0x9997,	// (0x00017ca8) list_medium_line_x4_t4_g7_g2

0x9997,	// (0x00017ca8) list_medium_line_x4_t4_g7_g3_ParamLimits

0x9997,	// (0x00017ca8) list_medium_line_x4_t4_g7_g3

0x9997,	// (0x00017ca8) list_medium_line_x4_t4_g7_g4_ParamLimits

0x9997,	// (0x00017ca8) list_medium_line_x4_t4_g7_g4

0x9997,	// (0x00017ca8) list_medium_line_x4_t4_g7_g5_ParamLimits

0x9997,	// (0x00017ca8) list_medium_line_x4_t4_g7_g5

0x9997,	// (0x00017ca8) list_medium_line_x4_t4_g7_g6_ParamLimits

0x9997,	// (0x00017ca8) list_medium_line_x4_t4_g7_g6

0x99a5,	// (0x00017cb6) list_medium_line_x4_t4_g7_g7_ParamLimits

0x99a5,	// (0x00017cb6) list_medium_line_x4_t4_g7_g7

0x0006,

0xfb01,	// (0x0001de12) list_medium_line_x4_t4_g7_g_ParamLimits

0xfb01,	// (0x0001de12) list_medium_line_x4_t4_g7_g

0x99e7,	// (0x00017cf8) list_medium_line_x4_t4_g7_t1_ParamLimits

0x99e7,	// (0x00017cf8) list_medium_line_x4_t4_g7_t1

0x99e7,	// (0x00017cf8) list_medium_line_x4_t4_g7_t2_ParamLimits

0x99e7,	// (0x00017cf8) list_medium_line_x4_t4_g7_t2

0x99e7,	// (0x00017cf8) list_medium_line_x4_t4_g7_t3_ParamLimits

0x99e7,	// (0x00017cf8) list_medium_line_x4_t4_g7_t3

0x99fb,	// (0x00017d0c) list_medium_line_x4_t4_g7_t4_ParamLimits

0x99fb,	// (0x00017d0c) list_medium_line_x4_t4_g7_t4

0x99fb,	// (0x00017d0c) list_medium_line_x4_t4_g7_t5_ParamLimits

0x99fb,	// (0x00017d0c) list_medium_line_x4_t4_g7_t5

0x0004,

0xfb10,	// (0x0001de21) list_medium_line_x4_t4_g7_t_ParamLimits

0xfb10,	// (0x0001de21) list_medium_line_x4_t4_g7_t

0x66db,	// (0x000149ec) list_single_dyc_row_pane_ParamLimits

0x66db,	// (0x000149ec) list_single_dyc_row_pane

0x6c03,	// (0x00014f14) call5_gesture_pane_ParamLimits

0x6c03,	// (0x00014f14) call5_gesture_pane

0x6c59,	// (0x00014f6a) call5_windows_pane_ParamLimits

0x6c59,	// (0x00014f6a) call5_windows_pane

0x6cc4,	// (0x00014fd5) call5_swipe_1_pane_cp_ParamLimits

0x6cc4,	// (0x00014fd5) call5_swipe_1_pane_cp

0x6cd0,	// (0x00014fe1) call5_swipe_2_pane_cp_ParamLimits

0x6cd0,	// (0x00014fe1) call5_swipe_2_pane_cp

0x9c8a,	// (0x00017f9b) call5_image_pane_cp

0x6cdc,	// (0x00014fed) popup_call5_audio_first_window_cp_ParamLimits

0x6cdc,	// (0x00014fed) popup_call5_audio_first_window_cp

0xdd9c,	// (0x0001c0ad) call5_swipe_1_pane_g1_cp_ParamLimits

0xdd9c,	// (0x0001c0ad) call5_swipe_1_pane_g1_cp

0xdda9,	// (0x0001c0ba) call5_swipe_1_pane_g2_cp

0xddb1,	// (0x0001c0c2) call5_swipe_1_pane_t1_cp_ParamLimits

0xddb1,	// (0x0001c0c2) call5_swipe_1_pane_t1_cp

0xdd9c,	// (0x0001c0ad) call5_swipe_2_pane_g1_cp_ParamLimits

0xdd9c,	// (0x0001c0ad) call5_swipe_2_pane_g1_cp

0xddc6,	// (0x0001c0d7) call5_swipe_2_pane_g2_cp

0xddce,	// (0x0001c0df) call5_swipe_2_pane_t1_cp_ParamLimits

0xddce,	// (0x0001c0df) call5_swipe_2_pane_t1_cp

0x92a0,	// (0x000175b1) main_sp_fs_email_pane

0xdde3,	// (0x0001c0f4) main_sp_fs_listscroll_pane_te

0x6cea,	// (0x00014ffb) popup_sp_fs_action_menu_pane_ParamLimits

0x6cea,	// (0x00014ffb) popup_sp_fs_action_menu_pane

0x99dd,	// (0x00017cee) bg_sp_fs_ctrlbar_pane_g1

0xddec,	// (0x0001c0fd) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xddf5,	// (0x0001c106) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xba64,	// (0x00019d75) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x99dd,	// (0x00017cee) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfbf9,	// (0x0001df0a) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xbc12,	// (0x00019f23) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xbc12,	// (0x00019f23) bg_sp_fs_ctrlbar_ddmenu_pane

0xddfe,	// (0x0001c10f) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xddfe,	// (0x0001c10f) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xde0a,	// (0x0001c11b) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xde0a,	// (0x0001c11b) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfc02,	// (0x0001df13) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfc02,	// (0x0001df13) main_sp_fs_ctrlbar_ddmenu_pane_g

0xde16,	// (0x0001c127) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xde16,	// (0x0001c127) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x99dd,	// (0x00017cee) list_medium_line_t2_right_icon_g1

0xa1fd,	// (0x0001850e) list_medium_line_t2_right_icon_t1

0xa1fd,	// (0x0001850e) list_medium_line_t2_right_icon_t2

0x0001,

0xfc07,	// (0x0001df18) list_medium_line_t2_right_icon_t

0xa81b,	// (0x00018b2c) bg_sp_fs_ctrlbar_pane_ParamLimits

0xa81b,	// (0x00018b2c) bg_sp_fs_ctrlbar_pane

0x6d74,	// (0x00015085) main_sp_fs_ctrlbar_button_pane_cp01

0x6d7e,	// (0x0001508f) main_sp_fs_ctrlbar_ddmenu_pane

0xde68,	// (0x0001c179) main_sp_fs_ctrlbar_pane_g1

0xde74,	// (0x0001c185) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfc0c,	// (0x0001df1d) main_sp_fs_ctrlbar_pane_g

0x6dbc,	// (0x000150cd) main_sp_fs_ctrlbar_pane_t1

0x6dfb,	// (0x0001510c) main_sp_fs_ctrlbar_pane

0x6e1f,	// (0x00015130) main_sp_fs_listscroll_pane_te_cp01

0x6e49,	// (0x0001515a) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x6e49,	// (0x0001515a) popup_sp_fs_action_menu_pane_cp01

0x92a0,	// (0x000175b1) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x92a0,	// (0x000175b1) bg_sp_fs_highlight_list_pane_cp01

0xde9b,	// (0x0001c1ac) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xde9b,	// (0x0001c1ac) sp_fs_action_menu_list_gene_pane_g1

0xdeaa,	// (0x0001c1bb) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xdeaa,	// (0x0001c1bb) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfc1a,	// (0x0001df2b) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfc1a,	// (0x0001df2b) sp_fs_action_menu_list_gene_pane_g

0xdeb7,	// (0x0001c1c8) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xdeb7,	// (0x0001c1c8) sp_fs_action_menu_list_gene_pane_t1

0xdecf,	// (0x0001c1e0) sp_fs_action_menu_list_gene_pane_ParamLimits

0xdecf,	// (0x0001c1e0) sp_fs_action_menu_list_gene_pane

0xdeee,	// (0x0001c1ff) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xdeee,	// (0x0001c1ff) popup_sp_fs_action_menu_bg_pane

0xdefc,	// (0x0001c20d) sp_fs_action_menu_list_pane_ParamLimits

0xdefc,	// (0x0001c20d) sp_fs_action_menu_list_pane

0x6e6e,	// (0x0001517f) sp_fs_scroll_pane_cp01_ParamLimits

0x6e6e,	// (0x0001517f) sp_fs_scroll_pane_cp01

0xa1fd,	// (0x0001850e) list_medium_line_plain_t2_t1

0xa1fd,	// (0x0001850e) list_medium_line_plain_t2_t2

0x0001,

0xfc07,	// (0x0001df18) list_medium_line_plain_t2_t

0xa1fd,	// (0x0001850e) list_medium_line_plain_t3_t1

0xa1fd,	// (0x0001850e) list_medium_line_plain_t3_t2

0xa1fd,	// (0x0001850e) list_medium_line_plain_t3_t3

0x0002,

0xf277,	// (0x0001d588) list_medium_line_plain_t3_t

0x9997,	// (0x00017ca8) list_medium_line_x2_t2_g2_g1_ParamLimits

0x9997,	// (0x00017ca8) list_medium_line_x2_t2_g2_g1

0x9997,	// (0x00017ca8) list_medium_line_x2_t2_g2_g2_ParamLimits

0x9997,	// (0x00017ca8) list_medium_line_x2_t2_g2_g2

0x0001,

0xf1bc,	// (0x0001d4cd) list_medium_line_x2_t2_g2_g_ParamLimits

0xf1bc,	// (0x0001d4cd) list_medium_line_x2_t2_g2_g

0x99e7,	// (0x00017cf8) list_medium_line_x2_t2_g2_t1_ParamLimits

0x99e7,	// (0x00017cf8) list_medium_line_x2_t2_g2_t1

0x99e7,	// (0x00017cf8) list_medium_line_x2_t2_g2_t2_ParamLimits

0x99e7,	// (0x00017cf8) list_medium_line_x2_t2_g2_t2

0x0001,

0xf191,	// (0x0001d4a2) list_medium_line_x2_t2_g2_t_ParamLimits

0xf191,	// (0x0001d4a2) list_medium_line_x2_t2_g2_t

0x9997,	// (0x00017ca8) list_medium_line_x2_t4_g2_g1_ParamLimits

0x9997,	// (0x00017ca8) list_medium_line_x2_t4_g2_g1

0x9997,	// (0x00017ca8) list_medium_line_x2_t4_g2_g2_ParamLimits

0x9997,	// (0x00017ca8) list_medium_line_x2_t4_g2_g2

0x0001,

0xf1bc,	// (0x0001d4cd) list_medium_line_x2_t4_g2_g_ParamLimits

0xf1bc,	// (0x0001d4cd) list_medium_line_x2_t4_g2_g

0x99e7,	// (0x00017cf8) list_medium_line_x2_t4_g2_t1_ParamLimits

0x99e7,	// (0x00017cf8) list_medium_line_x2_t4_g2_t1

0x99e7,	// (0x00017cf8) list_medium_line_x2_t4_g2_t2_ParamLimits

0x99e7,	// (0x00017cf8) list_medium_line_x2_t4_g2_t2

0x99e7,	// (0x00017cf8) list_medium_line_x2_t4_g2_t3_ParamLimits

0x99e7,	// (0x00017cf8) list_medium_line_x2_t4_g2_t3

0x99e7,	// (0x00017cf8) list_medium_line_x2_t4_g2_t4_ParamLimits

0x99e7,	// (0x00017cf8) list_medium_line_x2_t4_g2_t4

0x0003,

0xf1ca,	// (0x0001d4db) list_medium_line_x2_t4_g2_t_ParamLimits

0xf1ca,	// (0x0001d4db) list_medium_line_x2_t4_g2_t

0x99dd,	// (0x00017cee) list_medium_line_t3_right_iconx2_g1

0x99dd,	// (0x00017cee) list_medium_line_t3_right_iconx2_g2

0x99dd,	// (0x00017cee) list_medium_line_t3_right_iconx2_g3

0x0002,

0xf393,	// (0x0001d6a4) list_medium_line_t3_right_iconx2_g

0xa1fd,	// (0x0001850e) list_medium_line_t3_right_iconx2_t1

0xa1fd,	// (0x0001850e) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfc07,	// (0x0001df18) list_medium_line_t3_right_iconx2_t

0x9997,	// (0x00017ca8) list_medium_line_x3_t4_g4_g1_ParamLimits

0x9997,	// (0x00017ca8) list_medium_line_x3_t4_g4_g1

0x9997,	// (0x00017ca8) list_medium_line_x3_t4_g4_g2_ParamLimits

0x9997,	// (0x00017ca8) list_medium_line_x3_t4_g4_g2

0x9997,	// (0x00017ca8) list_medium_line_x3_t4_g4_g3_ParamLimits

0x9997,	// (0x00017ca8) list_medium_line_x3_t4_g4_g3

0x9997,	// (0x00017ca8) list_medium_line_x3_t4_g4_g4_ParamLimits

0x9997,	// (0x00017ca8) list_medium_line_x3_t4_g4_g4

0x0003,

0xf1c1,	// (0x0001d4d2) list_medium_line_x3_t4_g4_g_ParamLimits

0xf1c1,	// (0x0001d4d2) list_medium_line_x3_t4_g4_g

0x99e7,	// (0x00017cf8) list_medium_line_x3_t4_g4_t1_ParamLimits

0x99e7,	// (0x00017cf8) list_medium_line_x3_t4_g4_t1

0x99e7,	// (0x00017cf8) list_medium_line_x3_t4_g4_t2_ParamLimits

0x99e7,	// (0x00017cf8) list_medium_line_x3_t4_g4_t2

0x99e7,	// (0x00017cf8) list_medium_line_x3_t4_g4_t3_ParamLimits

0x99e7,	// (0x00017cf8) list_medium_line_x3_t4_g4_t3

0x99e7,	// (0x00017cf8) list_medium_line_x3_t4_g4_t4_ParamLimits

0x99e7,	// (0x00017cf8) list_medium_line_x3_t4_g4_t4

0x0003,

0xf1ca,	// (0x0001d4db) list_medium_line_x3_t4_g4_t_ParamLimits

0xf1ca,	// (0x0001d4db) list_medium_line_x3_t4_g4_t

0x6e94,	// (0x000151a5) list_single_dyc_row_text_pane_t1_ParamLimits

0x6e94,	// (0x000151a5) list_single_dyc_row_text_pane_t1

0x6edd,	// (0x000151ee) list_single_dyc_row_text_pane_t2_ParamLimits

0x6edd,	// (0x000151ee) list_single_dyc_row_text_pane_t2

0xdf1c,	// (0x0001c22d) list_single_dyc_row_text_pane_t3_ParamLimits

0xdf1c,	// (0x0001c22d) list_single_dyc_row_text_pane_t3

0x0005,

0xfc1f,	// (0x0001df30) list_single_dyc_row_text_pane_t_ParamLimits

0xfc1f,	// (0x0001df30) list_single_dyc_row_text_pane_t

0xdf40,	// (0x0001c251) list_single_dyc_row_pane_g1_ParamLimits

0xdf40,	// (0x0001c251) list_single_dyc_row_pane_g1

0xdf4c,	// (0x0001c25d) list_single_dyc_row_pane_g2_ParamLimits

0xdf4c,	// (0x0001c25d) list_single_dyc_row_pane_g2

0xdf58,	// (0x0001c269) list_single_dyc_row_pane_g3_ParamLimits

0xdf58,	// (0x0001c269) list_single_dyc_row_pane_g3

0xdf64,	// (0x0001c275) list_single_dyc_row_pane_g4_ParamLimits

0xdf64,	// (0x0001c275) list_single_dyc_row_pane_g4

0x0003,

0xfc2c,	// (0x0001df3d) list_single_dyc_row_pane_g_ParamLimits

0xfc2c,	// (0x0001df3d) list_single_dyc_row_pane_g

0xdf70,	// (0x0001c281) list_single_dyc_row_text_pane_ParamLimits

0xdf70,	// (0x0001c281) list_single_dyc_row_text_pane

0x9231,	// (0x00017542) bg_sp_fs_scroll_pane

0xdf8f,	// (0x0001c2a0) thumb_sp_fs_scroll_pane

0x9997,	// (0x00017ca8) list_medium_line_g1_ParamLimits

0x9997,	// (0x00017ca8) list_medium_line_g1

0x99e7,	// (0x00017cf8) list_medium_line_t1_ParamLimits

0x99e7,	// (0x00017cf8) list_medium_line_t1

0x9997,	// (0x00017ca8) list_medium_line_x2_g1_ParamLimits

0x9997,	// (0x00017ca8) list_medium_line_x2_g1

0x9997,	// (0x00017ca8) list_medium_line_x2_g2_ParamLimits

0x9997,	// (0x00017ca8) list_medium_line_x2_g2

0x0001,

0xf1bc,	// (0x0001d4cd) list_medium_line_x2_g_ParamLimits

0xf1bc,	// (0x0001d4cd) list_medium_line_x2_g

0x99e7,	// (0x00017cf8) list_medium_line_x2_t1_ParamLimits

0x99e7,	// (0x00017cf8) list_medium_line_x2_t1

0x9997,	// (0x00017ca8) list_medium_line_x3_g1_ParamLimits

0x9997,	// (0x00017ca8) list_medium_line_x3_g1

0xdf98,	// (0x0001c2a9) list_medium_line_x3_g2_ParamLimits

0xdf98,	// (0x0001c2a9) list_medium_line_x3_g2

0x0001,

0xfc35,	// (0x0001df46) list_medium_line_x3_g_ParamLimits

0xfc35,	// (0x0001df46) list_medium_line_x3_g

0xdfa6,	// (0x0001c2b7) list_medium_line_x3_t1_ParamLimits

0xdfa6,	// (0x0001c2b7) list_medium_line_x3_t1

0xdfba,	// (0x0001c2cb) thumb_sp_fs_scroll_pane_g1

0xdfc3,	// (0x0001c2d4) thumb_sp_fs_scroll_pane_g2

0xdfcc,	// (0x0001c2dd) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfc3a,	// (0x0001df4b) thumb_sp_fs_scroll_pane_g

0xdfba,	// (0x0001c2cb) bg_sp_fs_scroll_pane_g1

0xdfc3,	// (0x0001c2d4) bg_sp_fs_scroll_pane_g2

0xdfcc,	// (0x0001c2dd) bg_sp_fs_scroll_pane_g3

0x0002,

0xfc3a,	// (0x0001df4b) bg_sp_fs_scroll_pane_g

0x9997,	// (0x00017ca8) list_medium_line_x2_t3_g4_g1_ParamLimits

0x9997,	// (0x00017ca8) list_medium_line_x2_t3_g4_g1

0x9997,	// (0x00017ca8) list_medium_line_x2_t3_g4_g2_ParamLimits

0x9997,	// (0x00017ca8) list_medium_line_x2_t3_g4_g2

0x9997,	// (0x00017ca8) list_medium_line_x2_t3_g4_g3_ParamLimits

0x9997,	// (0x00017ca8) list_medium_line_x2_t3_g4_g3

0x9997,	// (0x00017ca8) list_medium_line_x2_t3_g4_g4_ParamLimits

0x9997,	// (0x00017ca8) list_medium_line_x2_t3_g4_g4

0x0003,

0xf1c1,	// (0x0001d4d2) list_medium_line_x2_t3_g4_g_ParamLimits

0xf1c1,	// (0x0001d4d2) list_medium_line_x2_t3_g4_g

0x99e7,	// (0x00017cf8) list_medium_line_x2_t3_g4_t1_ParamLimits

0x99e7,	// (0x00017cf8) list_medium_line_x2_t3_g4_t1

0x99e7,	// (0x00017cf8) list_medium_line_x2_t3_g4_t2_ParamLimits

0x99e7,	// (0x00017cf8) list_medium_line_x2_t3_g4_t2

0x99e7,	// (0x00017cf8) list_medium_line_x2_t3_g4_t3_ParamLimits

0x99e7,	// (0x00017cf8) list_medium_line_x2_t3_g4_t3

0x0002,

0xf1b5,	// (0x0001d4c6) list_medium_line_x2_t3_g4_t_ParamLimits

0xf1b5,	// (0x0001d4c6) list_medium_line_x2_t3_g4_t

0x9997,	// (0x00017ca8) list_medium_line_g2_g1_ParamLimits

0x9997,	// (0x00017ca8) list_medium_line_g2_g1

0x9997,	// (0x00017ca8) list_medium_line_g2_g2_ParamLimits

0x9997,	// (0x00017ca8) list_medium_line_g2_g2

0x0001,

0xf1bc,	// (0x0001d4cd) list_medium_line_g2_g_ParamLimits

0xf1bc,	// (0x0001d4cd) list_medium_line_g2_g

0x99e7,	// (0x00017cf8) list_medium_line_g2_t1_ParamLimits

0x99e7,	// (0x00017cf8) list_medium_line_g2_t1

0x9997,	// (0x00017ca8) list_medium_line_t3_g2_g1_ParamLimits

0x9997,	// (0x00017ca8) list_medium_line_t3_g2_g1

0x9997,	// (0x00017ca8) list_medium_line_t3_g2_g2_ParamLimits

0x9997,	// (0x00017ca8) list_medium_line_t3_g2_g2

0x0001,

0xf1bc,	// (0x0001d4cd) list_medium_line_t3_g2_g_ParamLimits

0xf1bc,	// (0x0001d4cd) list_medium_line_t3_g2_g

0x99e7,	// (0x00017cf8) list_medium_line_t3_g2_t1_ParamLimits

0x99e7,	// (0x00017cf8) list_medium_line_t3_g2_t1

0x99e7,	// (0x00017cf8) list_medium_line_t3_g2_t2_ParamLimits

0x99e7,	// (0x00017cf8) list_medium_line_t3_g2_t2

0x99e7,	// (0x00017cf8) list_medium_line_t3_g2_t3_ParamLimits

0x99e7,	// (0x00017cf8) list_medium_line_t3_g2_t3

0x0002,

0xf1b5,	// (0x0001d4c6) list_medium_line_t3_g2_t_ParamLimits

0xf1b5,	// (0x0001d4c6) list_medium_line_t3_g2_t

0x99dd,	// (0x00017cee) list_medium_line_right_icon_g1

0xa1fd,	// (0x0001850e) list_medium_line_right_icon_t1

0x9997,	// (0x00017ca8) list_medium_line_t2_g1_ParamLimits

0x9997,	// (0x00017ca8) list_medium_line_t2_g1

0x99e7,	// (0x00017cf8) list_medium_line_t2_t1_ParamLimits

0x99e7,	// (0x00017cf8) list_medium_line_t2_t1

0x99e7,	// (0x00017cf8) list_medium_line_t2_t2_ParamLimits

0x99e7,	// (0x00017cf8) list_medium_line_t2_t2

0x0001,

0xf191,	// (0x0001d4a2) list_medium_line_t2_t_ParamLimits

0xf191,	// (0x0001d4a2) list_medium_line_t2_t

0x9997,	// (0x00017ca8) list_medium_line_t3_g1_ParamLimits

0x9997,	// (0x00017ca8) list_medium_line_t3_g1

0x99e7,	// (0x00017cf8) list_medium_line_t3_t1_ParamLimits

0x99e7,	// (0x00017cf8) list_medium_line_t3_t1

0x99e7,	// (0x00017cf8) list_medium_line_t3_t2_ParamLimits

0x99e7,	// (0x00017cf8) list_medium_line_t3_t2

0x99e7,	// (0x00017cf8) list_medium_line_t3_t3_ParamLimits

0x99e7,	// (0x00017cf8) list_medium_line_t3_t3

0x0002,

0xf1b5,	// (0x0001d4c6) list_medium_line_t3_t_ParamLimits

0xf1b5,	// (0x0001d4c6) list_medium_line_t3_t

0x9997,	// (0x00017ca8) list_medium_line_g3_g1_ParamLimits

0x9997,	// (0x00017ca8) list_medium_line_g3_g1

0x9997,	// (0x00017ca8) list_medium_line_g3_g2_ParamLimits

0x9997,	// (0x00017ca8) list_medium_line_g3_g2

0x9997,	// (0x00017ca8) list_medium_line_g3_g3_ParamLimits

0x9997,	// (0x00017ca8) list_medium_line_g3_g3

0x0002,

0xf1ae,	// (0x0001d4bf) list_medium_line_g3_g_ParamLimits

0xf1ae,	// (0x0001d4bf) list_medium_line_g3_g

0x99e7,	// (0x00017cf8) list_medium_line_g3_t1_ParamLimits

0x99e7,	// (0x00017cf8) list_medium_line_g3_t1

0x9997,	// (0x00017ca8) list_medium_line_t2_g3_g1_ParamLimits

0x9997,	// (0x00017ca8) list_medium_line_t2_g3_g1

0x9997,	// (0x00017ca8) list_medium_line_t2_g3_g2_ParamLimits

0x9997,	// (0x00017ca8) list_medium_line_t2_g3_g2

0x9997,	// (0x00017ca8) list_medium_line_t2_g3_g3_ParamLimits

0x9997,	// (0x00017ca8) list_medium_line_t2_g3_g3

0x0002,

0xf1ae,	// (0x0001d4bf) list_medium_line_t2_g3_g_ParamLimits

0xf1ae,	// (0x0001d4bf) list_medium_line_t2_g3_g

0x99e7,	// (0x00017cf8) list_medium_line_t2_g3_t1_ParamLimits

0x99e7,	// (0x00017cf8) list_medium_line_t2_g3_t1

0x99e7,	// (0x00017cf8) list_medium_line_t2_g3_t2_ParamLimits

0x99e7,	// (0x00017cf8) list_medium_line_t2_g3_t2

0x0001,

0xf191,	// (0x0001d4a2) list_medium_line_t2_g3_t_ParamLimits

0xf191,	// (0x0001d4a2) list_medium_line_t2_g3_t

0x9997,	// (0x00017ca8) list_medium_line_t3_g3_g1_ParamLimits

0x9997,	// (0x00017ca8) list_medium_line_t3_g3_g1

0x9997,	// (0x00017ca8) list_medium_line_t3_g3_g2_ParamLimits

0x9997,	// (0x00017ca8) list_medium_line_t3_g3_g2

0x9997,	// (0x00017ca8) list_medium_line_t3_g3_g3_ParamLimits

0x9997,	// (0x00017ca8) list_medium_line_t3_g3_g3

0x0002,

0xf1ae,	// (0x0001d4bf) list_medium_line_t3_g3_g_ParamLimits

0xf1ae,	// (0x0001d4bf) list_medium_line_t3_g3_g

0x99e7,	// (0x00017cf8) list_medium_line_t3_g3_t1_ParamLimits

0x99e7,	// (0x00017cf8) list_medium_line_t3_g3_t1

0x99e7,	// (0x00017cf8) list_medium_line_t3_g3_t2_ParamLimits

0x99e7,	// (0x00017cf8) list_medium_line_t3_g3_t2

0x99e7,	// (0x00017cf8) list_medium_line_t3_g3_t3_ParamLimits

0x99e7,	// (0x00017cf8) list_medium_line_t3_g3_t3

0x0002,

0xf1b5,	// (0x0001d4c6) list_medium_line_t3_g3_t_ParamLimits

0xf1b5,	// (0x0001d4c6) list_medium_line_t3_g3_t

0x99dd,	// (0x00017cee) list_medium_line_right_iconx2_g1

0x99dd,	// (0x00017cee) list_medium_line_right_iconx2_g2

0x0001,

0xf0af,	// (0x0001d3c0) list_medium_line_right_iconx2_g

0xa1fd,	// (0x0001850e) list_medium_line_right_iconx2_t1

0x99dd,	// (0x00017cee) list_medium_line_t2_right_iconx2_g1

0x99dd,	// (0x00017cee) list_medium_line_t2_right_iconx2_g2

0x0001,

0xf0af,	// (0x0001d3c0) list_medium_line_t2_right_iconx2_g

0xa1fd,	// (0x0001850e) list_medium_line_t2_right_iconx2_t1

0xa1fd,	// (0x0001850e) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfc07,	// (0x0001df18) list_medium_line_t2_right_iconx2_t

0xa1fd,	// (0x0001850e) list_medium_line_x4_t4_t1

0xa1fd,	// (0x0001850e) list_medium_line_x4_t4_t2

0xa1fd,	// (0x0001850e) list_medium_line_x4_t4_t3

0xa1fd,	// (0x0001850e) list_medium_line_x4_t4_t4

0x0003,

0xf27e,	// (0x0001d58f) list_medium_line_x4_t4_t

0x7055,	// (0x00015366) tport_appsw_pane_ParamLimits

0x7055,	// (0x00015366) tport_appsw_pane

0x706d,	// (0x0001537e) tport_contact_pane_ParamLimits

0x706d,	// (0x0001537e) tport_contact_pane

0x7085,	// (0x00015396) tport_listscroll_pane_ParamLimits

0x7085,	// (0x00015396) tport_listscroll_pane

0x709f,	// (0x000153b0) cell_tport_appsw_pane_ParamLimits

0x709f,	// (0x000153b0) cell_tport_appsw_pane

0xa7f9,	// (0x00018b0a) tport_appsw_pane_g1_ParamLimits

0xa7f9,	// (0x00018b0a) tport_appsw_pane_g1

0xdfd5,	// (0x0001c2e6) tport_contact_pane_g1

0xdfde,	// (0x0001c2ef) tport_contact_pane_t1

0xdfec,	// (0x0001c2fd) tport_contact_pane_t2

0x0001,

0xfc41,	// (0x0001df52) tport_contact_pane_t

0xdffa,	// (0x0001c30b) list_tport_pane

0xe003,	// (0x0001c314) scroll_pane_cp_030

0x70e7,	// (0x000153f8) cell_tport_appsw_pane_g1

0x70f7,	// (0x00015408) cell_tport_appsw_pane_t1

0x7105,	// (0x00015416) grid_highlight_pane_cp019

0x710d,	// (0x0001541e) list_tport_double_graphic_pane_ParamLimits

0x710d,	// (0x0001541e) list_tport_double_graphic_pane

0x92a0,	// (0x000175b1) list_highlight_pane_cp023_ParamLimits

0x92a0,	// (0x000175b1) list_highlight_pane_cp023

0x711a,	// (0x0001542b) list_tport_double_graphic_pane_g1_ParamLimits

0x711a,	// (0x0001542b) list_tport_double_graphic_pane_g1

0x7127,	// (0x00015438) list_tport_double_graphic_pane_t1_ParamLimits

0x7127,	// (0x00015438) list_tport_double_graphic_pane_t1

0x713c,	// (0x0001544d) list_tport_double_graphic_pane_t2_ParamLimits

0x713c,	// (0x0001544d) list_tport_double_graphic_pane_t2

0x0001,

0xfc4d,	// (0x0001df5e) list_tport_double_graphic_pane_t_ParamLimits

0xfc4d,	// (0x0001df5e) list_tport_double_graphic_pane_t

0x9231,	// (0x00017542) main_cale_note_pane

0x506d,	// (0x0001337e) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x506d,	// (0x0001337e) cell_vitu2_function_top_wide_pane_cp01

0x6a77,	// (0x00014d88) wait_bar_pane_cp05_ParamLimits

0x92a0,	// (0x000175b1) listscroll_cmail_pane

0xe014,	// (0x0001c325) list_cmail_pane

0x714e,	// (0x0001545f) list_cmail_body_pane

0x7164,	// (0x00015475) list_single_cmail_header_caption_pane

0x717b,	// (0x0001548c) list_single_cmail_header_detail_pane_ParamLimits

0x717b,	// (0x0001548c) list_single_cmail_header_detail_pane

0xe02b,	// (0x0001c33c) list_single_cmail_header_caption_pane_t1

0x71a9,	// (0x000154ba) list_single_cmail_header_detail_pane_g1_ParamLimits

0x71a9,	// (0x000154ba) list_single_cmail_header_detail_pane_g1

0xe042,	// (0x0001c353) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe042,	// (0x0001c353) list_single_cmail_header_detail_pane_g2

0x0002,

0xfc52,	// (0x0001df63) list_single_cmail_header_detail_pane_g_ParamLimits

0xfc52,	// (0x0001df63) list_single_cmail_header_detail_pane_g

0x71c1,	// (0x000154d2) list_single_cmail_header_detail_pane_t1_ParamLimits

0x71c1,	// (0x000154d2) list_single_cmail_header_detail_pane_t1

0x71ff,	// (0x00015510) list_single_cmail_header_editor_pane_bg_ParamLimits

0x71ff,	// (0x00015510) list_single_cmail_header_editor_pane_bg

0xda4f,	// (0x0001bd60) list_cmail_body_pane_g1

0xe07f,	// (0x0001c390) list_cmail_body_pane_t1

0xcc22,	// (0x0001af33) list_single_cmail_header_editor_pane_bg_g1

0x9ead,	// (0x000181be) list_single_cmail_header_editor_pane_bg_g1_copy1

0xcc32,	// (0x0001af43) list_single_cmail_header_editor_pane_bg_g1_copy2

0xcc2a,	// (0x0001af3b) list_single_cmail_header_editor_pane_bg_g1_copy3

0xcefa,	// (0x0001b20b) list_single_cmail_header_editor_pane_bg_g1_copy4

0xcc52,	// (0x0001af63) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xcc42,	// (0x0001af53) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xcc4a,	// (0x0001af5b) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x9e8d,	// (0x0001819e) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x7218,	// (0x00015529) calenote_gesture_pane_ParamLimits

0x7218,	// (0x00015529) calenote_gesture_pane

0x7238,	// (0x00015549) calenote_window_pane_ParamLimits

0x7238,	// (0x00015549) calenote_window_pane

0xe08d,	// (0x0001c39e) popup_note_window_cp01

0x7254,	// (0x00015565) calenote_swipe_1_pane_ParamLimits

0x7254,	// (0x00015565) calenote_swipe_1_pane

0x6cd0,	// (0x00014fe1) calenote_swipe_2_pane_ParamLimits

0x6cd0,	// (0x00014fe1) calenote_swipe_2_pane

0xdd9c,	// (0x0001c0ad) calenote_swipe_1_pane_g1_ParamLimits

0xdd9c,	// (0x0001c0ad) calenote_swipe_1_pane_g1

0xe09f,	// (0x0001c3b0) calenote_swipe_1_pane_g2_ParamLimits

0xe09f,	// (0x0001c3b0) calenote_swipe_1_pane_g2

0x0001,

0xfc5e,	// (0x0001df6f) calenote_swipe_1_pane_g_ParamLimits

0xfc5e,	// (0x0001df6f) calenote_swipe_1_pane_g

0xe0ab,	// (0x0001c3bc) calenote_swipe_1_pane_t1_ParamLimits

0xe0ab,	// (0x0001c3bc) calenote_swipe_1_pane_t1

0xdd9c,	// (0x0001c0ad) calenote_swipe_2_pane_g1_ParamLimits

0xdd9c,	// (0x0001c0ad) calenote_swipe_2_pane_g1

0xe0ca,	// (0x0001c3db) calenote_swipe_2_pane_g2_ParamLimits

0xe0ca,	// (0x0001c3db) calenote_swipe_2_pane_g2

0x0001,

0xfc63,	// (0x0001df74) calenote_swipe_2_pane_g_ParamLimits

0xfc63,	// (0x0001df74) calenote_swipe_2_pane_g

0xe0d6,	// (0x0001c3e7) calenote_swipe_2_pane_t1_ParamLimits

0xe0d6,	// (0x0001c3e7) calenote_swipe_2_pane_t1

0x9231,	// (0x00017542) main_mup_navstr_pane

0x3fcc,	// (0x000122dd) main_mup3_pane_t7_ParamLimits

0x3fcc,	// (0x000122dd) main_mup3_pane_t7

0xc7c2,	// (0x0001aad3) main_mp4_pane_g6_ParamLimits

0xc7c2,	// (0x0001aad3) main_mp4_pane_g6

0xca79,	// (0x0001ad8a) main_image3_pane_t4_ParamLimits

0xca79,	// (0x0001ad8a) main_image3_pane_t4

0x7269,	// (0x0001557a) popup_navstr_preview_pane_ParamLimits

0x7269,	// (0x0001557a) popup_navstr_preview_pane

0x727d,	// (0x0001558e) scroll_navstr_pane_ParamLimits

0x727d,	// (0x0001558e) scroll_navstr_pane

0x9231,	// (0x00017542) bg_popup_preview_window_pane_cp04

0xe0fd,	// (0x0001c40e) popup_navstr_preview_pane_t1

0x7291,	// (0x000155a2) scroll_navstr_pane_g1_ParamLimits

0x7291,	// (0x000155a2) scroll_navstr_pane_g1

0x72a5,	// (0x000155b6) scroll_navstr_pane_t1_ParamLimits

0x72a5,	// (0x000155b6) scroll_navstr_pane_t1

0xe096,	// (0x0001c3a7) bg_button_pane_cp014

0xe096,	// (0x0001c3a7) bg_button_pane_cp030

0x6ba9,	// (0x00014eba) list_double_fisheye_pane_g4_ParamLimits

0x6ba9,	// (0x00014eba) list_double_fisheye_pane_g4

0x6bb5,	// (0x00014ec6) list_double_fisheye_pane_g5_ParamLimits

0x6bb5,	// (0x00014ec6) list_double_fisheye_pane_g5

0xce05,	// (0x0001b116) sp_fs_scroll_pane_cp03

0xde68,	// (0x0001c179) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xde74,	// (0x0001c185) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfc0c,	// (0x0001df1d) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x6dbc,	// (0x000150cd) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe023,	// (0x0001c334) sp_fs_scroll_pane_cp02

0x9bd2,	// (0x00017ee3) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x9bd2,	// (0x00017ee3) popup_sp_fs_calendar_preview_list_single_pane

0x9231,	// (0x00017542) main_cam6_pano_pane

0x92a0,	// (0x000175b1) main_mup3_pane_ParamLimits

0x9231,	// (0x00017542) main_phacti_pane

0x694a,	// (0x00014c5b) bg_button_pane_cp11

0x6964,	// (0x00014c75) main_mobtv_info_pane_g2_ParamLimits

0x6964,	// (0x00014c75) main_mobtv_info_pane_g2

0x0001,

0xfb71,	// (0x0001de82) main_mobtv_info_pane_g_ParamLimits

0xfb71,	// (0x0001de82) main_mobtv_info_pane_g

0x99e7,	// (0x00017cf8) sc_clock_pane_t5_ParamLimits

0x99e7,	// (0x00017cf8) sc_clock_pane_t5

0xa7f9,	// (0x00018b0a) main_radioblah_pane_g1_ParamLimits

0xa807,	// (0x00018b18) main_radioblah_pane_t3_ParamLimits

0xa807,	// (0x00018b18) main_radioblah_pane_t3

0xa807,	// (0x00018b18) main_radioblah_pane_t4_ParamLimits

0xa807,	// (0x00018b18) main_radioblah_pane_t4

0x92a0,	// (0x000175b1) main_radioblah_text_pane_ParamLimits

0x92a0,	// (0x000175b1) main_radioblah_text_pane

0xdc94,	// (0x0001bfa5) main_radioblah_info_pane_g1_ParamLimits

0xdcd8,	// (0x0001bfe9) main_radioblah_info_pane_t4_ParamLimits

0xdcd8,	// (0x0001bfe9) main_radioblah_info_pane_t4

0x92a0,	// (0x000175b1) main_sp_fs_calendar_pane

0x72bc,	// (0x000155cd) main_phacti_pane_g1

0x72c4,	// (0x000155d5) phacti_note_pane_ParamLimits

0x72c4,	// (0x000155d5) phacti_note_pane

0xe114,	// (0x0001c425) phacti_term_pane_ParamLimits

0xe114,	// (0x0001c425) phacti_term_pane

0xe129,	// (0x0001c43a) phacti_note_pane_t1_ParamLimits

0xe129,	// (0x0001c43a) phacti_note_pane_t1

0xe140,	// (0x0001c451) phacti_term_pane_g1

0xe148,	// (0x0001c459) phacti_term_pane_t1_ParamLimits

0xe148,	// (0x0001c459) phacti_term_pane_t1

0xe172,	// (0x0001c483) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe17a,	// (0x0001c48b) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfc6d,	// (0x0001df7e) popup_sp_fs_calendar_preview_list_single_pane_g

0xe182,	// (0x0001c493) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe182,	// (0x0001c493) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe198,	// (0x0001c4a9) aid_popup_sp_fs_bg_corner_pane

0x99dd,	// (0x00017cee) popup_sp_fs_calendar_preview_bg_pane_g1

0x9231,	// (0x00017542) popup_sp_fs_calendar_preview_bg_pane

0xe1a0,	// (0x0001c4b1) popup_sp_fs_calendar_preview_list_pane

0xa81b,	// (0x00018b2c) bg_main_sp_fs_cale_pane_ParamLimits

0xa81b,	// (0x00018b2c) bg_main_sp_fs_cale_pane

0xe1b1,	// (0x0001c4c2) listscroll_cale_mrui_pane_ParamLimits

0xe1b1,	// (0x0001c4c2) listscroll_cale_mrui_pane

0xe1c6,	// (0x0001c4d7) listscroll_sp_fs_schedule_track_pane

0xe1cf,	// (0x0001c4e0) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe1cf,	// (0x0001c4e0) main_sp_fs_ctrlbar_pane_cp01

0xe1e2,	// (0x0001c4f3) main_sp_fs_ribbon_pane

0xe1ea,	// (0x0001c4fb) popup_sp_fs_cale_preview_window

0x7339,	// (0x0001564a) list_single_sp_fs_schedule_track_pane_ParamLimits

0x7339,	// (0x0001564a) list_single_sp_fs_schedule_track_pane

0x92a0,	// (0x000175b1) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x92a0,	// (0x000175b1) bg_sp_fs_highlight_list_pane_cp03

0x734d,	// (0x0001565e) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x734d,	// (0x0001565e) list_single_sp_fs_schedule_track_pane_g1

0x7359,	// (0x0001566a) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x7359,	// (0x0001566a) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfc72,	// (0x0001df83) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfc72,	// (0x0001df83) list_single_sp_fs_schedule_track_pane_g

0x7365,	// (0x00015676) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x7365,	// (0x00015676) list_single_sp_fs_schedule_track_pane_t1

0x737f,	// (0x00015690) sp_fs_schedule_track_pane_ParamLimits

0x737f,	// (0x00015690) sp_fs_schedule_track_pane

0xe1fc,	// (0x0001c50d) sp_fs_schedule_track_pane_g1

0xe204,	// (0x0001c515) sp_fs_schedule_track_pane_g2

0xe20c,	// (0x0001c51d) sp_fs_schedule_track_pane_g3

0xe214,	// (0x0001c525) sp_fs_schedule_track_pane_g4

0xe21c,	// (0x0001c52d) sp_fs_schedule_track_pane_g5

0x0004,

0xfc77,	// (0x0001df88) sp_fs_schedule_track_pane_g

0xcc22,	// (0x0001af33) bg_sp_fs_schedule_viewer_highlight_g1

0x9ead,	// (0x000181be) bg_sp_fs_schedule_viewer_highlight_g2

0xcc2a,	// (0x0001af3b) bg_sp_fs_schedule_viewer_highlight_g3

0xcc32,	// (0x0001af43) bg_sp_fs_schedule_viewer_highlight_g4

0xcefa,	// (0x0001b20b) bg_sp_fs_schedule_viewer_highlight_g5

0xcc42,	// (0x0001af53) bg_sp_fs_schedule_viewer_highlight_g6

0xcc4a,	// (0x0001af5b) bg_sp_fs_schedule_viewer_highlight_g7

0xcc52,	// (0x0001af63) bg_sp_fs_schedule_viewer_highlight_g8

0x9e8d,	// (0x0001819e) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfc82,	// (0x0001df93) bg_sp_fs_schedule_viewer_highlight_g

0x9231,	// (0x00017542) bg_main_sp_fs_ribbon_pane

0x7390,	// (0x000156a1) main_sp_fs_ribbon_pane_g1

0xe224,	// (0x0001c535) main_sp_fs_ribbon_pane_t1

0x7399,	// (0x000156aa) main_sp_fs_ribbon_pane_t2

0xe233,	// (0x0001c544) main_sp_fs_ribbon_pane_t3

0x0002,

0xfc95,	// (0x0001dfa6) main_sp_fs_ribbon_pane_t

0xe242,	// (0x0001c553) main_sp_fs_ribbon_scheduler_pane

0xe24a,	// (0x0001c55b) bg_main_sp_fs_ribbon_pane_g1

0xe253,	// (0x0001c564) bg_main_sp_fs_ribbon_pane_g2

0xe25c,	// (0x0001c56d) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfc9c,	// (0x0001dfad) bg_main_sp_fs_ribbon_pane_g

0xe264,	// (0x0001c575) main_sp_fs_ribbon_scheduler_pane_g1

0xe26d,	// (0x0001c57e) main_sp_fs_ribbon_scheduler_pane_g2

0xe276,	// (0x0001c587) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfca3,	// (0x0001dfb4) main_sp_fs_ribbon_scheduler_pane_g

0xe27f,	// (0x0001c590) list_cale_mrui_pane

0x73a8,	// (0x000156b9) sp_fs_scroll_pane_cp07_ParamLimits

0x73a8,	// (0x000156b9) sp_fs_scroll_pane_cp07

0x73c4,	// (0x000156d5) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x73c4,	// (0x000156d5) bg_sp_fs_schedule_viewer_highlight

0xe28c,	// (0x0001c59d) list_single_sp_fs_schedule_track_pane_cp01

0xe294,	// (0x0001c5a5) list_sp_fs_schedule_track_pane

0xe29c,	// (0x0001c5ad) sp_fs_scroll_pane_cp06_ParamLimits

0xe29c,	// (0x0001c5ad) sp_fs_scroll_pane_cp06

0x99dd,	// (0x00017cee) bgmain_sp_fs_calendar_pane_g1

0x73d4,	// (0x000156e5) list_single_cale_mrui_pane_ParamLimits

0x73d4,	// (0x000156e5) list_single_cale_mrui_pane

0xe2ae,	// (0x0001c5bf) list_single_cale_mrui_row_pane_ParamLimits

0xe2ae,	// (0x0001c5bf) list_single_cale_mrui_row_pane

0xe2bb,	// (0x0001c5cc) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe2bb,	// (0x0001c5cc) list_single_cale_mrui_row_pane_g1

0xe300,	// (0x0001c611) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe300,	// (0x0001c611) list_single_cale_mrui_row_pane_t1

0x73f5,	// (0x00015706) list_single_cale_mrui_row_pane_t2_ParamLimits

0x73f5,	// (0x00015706) list_single_cale_mrui_row_pane_t2

0xe312,	// (0x0001c623) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe312,	// (0x0001c623) list_single_cale_mrui_row_pane_t3

0xe341,	// (0x0001c652) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe341,	// (0x0001c652) list_single_cale_mrui_row_pane_t4

0x0003,

0xfcb1,	// (0x0001dfc2) list_single_cale_mrui_row_pane_t_ParamLimits

0xfcb1,	// (0x0001dfc2) list_single_cale_mrui_row_pane_t

0x745d,	// (0x0001576e) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x745d,	// (0x0001576e) list_single_cmail_header_editor_pane_bg_cp01

0x748b,	// (0x0001579c) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x748b,	// (0x0001579c) list_single_cmail_header_editor_pane_bg_cp02

0xe370,	// (0x0001c681) main_radioblah_text_pane_t1_ParamLimits

0xe370,	// (0x0001c681) main_radioblah_text_pane_t1

0xe38a,	// (0x0001c69b) cam6_indi_pane_cp01

0xe392,	// (0x0001c6a3) cam6_mode_pane_cp01

0xe39a,	// (0x0001c6ab) cam6_pano_pane

0xe3a3,	// (0x0001c6b4) cam6_zoom_pane_cp01

0xe3ab,	// (0x0001c6bc) cam6_pano_image_pane

0xe3b6,	// (0x0001c6c7) cam6_pano_pane_g1

0xda4f,	// (0x0001bd60) cam6_pano_pane_g2

0xe3bf,	// (0x0001c6d0) cam6_pano_pane_g3

0xe3c8,	// (0x0001c6d9) cam6_pano_pane_g4

0xc556,	// (0x0001a867) cam6_pano_pane_g5

0xe3d1,	// (0x0001c6e2) cam6_pano_pane_g6

0xe3db,	// (0x0001c6ec) cam6_pano_pane_g7

0xe3e3,	// (0x0001c6f4) cam6_pano_pane_g8

0xe3ec,	// (0x0001c6fd) cam6_pano_pane_g9

0x0008,

0xfcba,	// (0x0001dfcb) cam6_pano_pane_g

0x9231,	// (0x00017542) main_browser_tag_pane

0xe0f5,	// (0x0001c406) grid_navstr_albumart_pane

0xe3f7,	// (0x0001c708) cell_navstr_albumart_pane_ParamLimits

0xe3f7,	// (0x0001c708) cell_navstr_albumart_pane

0xe417,	// (0x0001c728) cell_navstr_albumart_pane_g1

0xb8eb,	// (0x00019bfc) cell_navstr_albumart_pane_g2

0xb8fb,	// (0x00019c0c) cell_navstr_albumart_pane_g3

0xb8f3,	// (0x00019c04) cell_navstr_albumart_pane_g4

0x0003,

0xfccd,	// (0x0001dfde) cell_navstr_albumart_pane_g

0x74ab,	// (0x000157bc) bt_list_pane_ParamLimits

0x74ab,	// (0x000157bc) bt_list_pane

0x74bf,	// (0x000157d0) bt_list_pane_t1

0x74ce,	// (0x000157df) bt_list_pane_t2

0x0001,

0xfcd6,	// (0x0001dfe7) bt_list_pane_t

0x9231,	// (0x00017542) main_cale_prevew_pane

0x74dd,	// (0x000157ee) popup_cale_preview_window_ParamLimits

0x74dd,	// (0x000157ee) popup_cale_preview_window

0x92a0,	// (0x000175b1) bg_popup_preview_window_pane_cp05_ParamLimits

0x92a0,	// (0x000175b1) bg_popup_preview_window_pane_cp05

0xe41f,	// (0x0001c730) list_cale_preview_pane_ParamLimits

0xe41f,	// (0x0001c730) list_cale_preview_pane

0x74f6,	// (0x00015807) list_double_cale_preview_pane_ParamLimits

0x74f6,	// (0x00015807) list_double_cale_preview_pane

0xcc5a,	// (0x0001af6b) list_single_cale_preview_pane_ParamLimits

0xcc5a,	// (0x0001af6b) list_single_cale_preview_pane

0x7508,	// (0x00015819) list_single_cale_preview_pane_g1

0x7510,	// (0x00015821) list_single_cale_preview_pane_t1_ParamLimits

0x7510,	// (0x00015821) list_single_cale_preview_pane_t1

0x7525,	// (0x00015836) list_double_cale_preview_pane_g1

0x752d,	// (0x0001583e) list_double_cale_preview_pane_t1_ParamLimits

0x752d,	// (0x0001583e) list_double_cale_preview_pane_t1

0x7542,	// (0x00015853) list_double_cale_preview_pane_t2_ParamLimits

0x7542,	// (0x00015853) list_double_cale_preview_pane_t2

0x0001,

0xfcdb,	// (0x0001dfec) list_double_cale_preview_pane_t_ParamLimits

0xfcdb,	// (0x0001dfec) list_double_cale_preview_pane_t

0x9231,	// (0x00017542) main_ezdial_pane

0x92a0,	// (0x000175b1) main_sp_fs_email_pane_ParamLimits

0x6d2c,	// (0x0001503d) cmail_ddmenu_btn01_pane_ParamLimits

0x6d2c,	// (0x0001503d) cmail_ddmenu_btn01_pane

0x6d3f,	// (0x00015050) cmail_ddmenu_btn02_pane_ParamLimits

0x6d3f,	// (0x00015050) cmail_ddmenu_btn02_pane

0x6d62,	// (0x00015073) cmail_ddmenu_btn03_pane_ParamLimits

0x6d62,	// (0x00015073) cmail_ddmenu_btn03_pane

0x6dfb,	// (0x0001510c) main_sp_fs_ctrlbar_pane_ParamLimits

0x6e1f,	// (0x00015130) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x714e,	// (0x0001545f) list_cmail_body_pane_ParamLimits

0xe039,	// (0x0001c34a) bg_button_pane_cp12

0xe04e,	// (0x0001c35f) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe04e,	// (0x0001c35f) list_single_cmail_header_detail_pane_g3

0xe05b,	// (0x0001c36c) list_single_cmail_header_detail_pane_t2_ParamLimits

0xe05b,	// (0x0001c36c) list_single_cmail_header_detail_pane_t2

0x0001,

0xfc59,	// (0x0001df6a) list_single_cmail_header_detail_pane_t_ParamLimits

0xfc59,	// (0x0001df6a) list_single_cmail_header_detail_pane_t

0xe15d,	// (0x0001c46e) phacti_term_pane_t2_ParamLimits

0xe15d,	// (0x0001c46e) phacti_term_pane_t2

0x0001,

0xfc68,	// (0x0001df79) phacti_term_pane_t_ParamLimits

0xfc68,	// (0x0001df79) phacti_term_pane_t

0xe42b,	// (0x0001c73c) aid_size_list_single_double

0x755a,	// (0x0001586b) popup_ezdial_listscroll_window

0xe437,	// (0x0001c748) popup_number_entry_window_cp01

0x9c8a,	// (0x00017f9b) bg_popup_call_pane_cp09

0xe444,	// (0x0001c755) ezdial_list_pane

0xe44c,	// (0x0001c75d) scroll_pane_cp23

0xa81b,	// (0x00018b2c) bg_button_pane_cp028_ParamLimits

0xa81b,	// (0x00018b2c) bg_button_pane_cp028

0x7571,	// (0x00015882) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x7571,	// (0x00015882) cmail_ddmenu_btn01_pane_g1

0x757d,	// (0x0001588e) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x757d,	// (0x0001588e) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfce0,	// (0x0001dff1) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfce0,	// (0x0001dff1) cmail_ddmenu_btn01_pane_g

0xe454,	// (0x0001c765) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xe454,	// (0x0001c765) cmail_ddmenu_btn01_pane_t1

0xa81b,	// (0x00018b2c) bg_button_pane_cp029_ParamLimits

0xa81b,	// (0x00018b2c) bg_button_pane_cp029

0x7589,	// (0x0001589a) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x7589,	// (0x0001589a) cmail_ddmenu_btn02_pane_g1

0x75a1,	// (0x000158b2) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x75a1,	// (0x000158b2) cmail_ddmenu_btn02_pane_t1

0x92a0,	// (0x000175b1) bg_button_pane_cp031_ParamLimits

0x92a0,	// (0x000175b1) bg_button_pane_cp031

0x7589,	// (0x0001589a) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x7589,	// (0x0001589a) cmail_ddmenu_btn03_pane_g1

0x75a1,	// (0x000158b2) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x75a1,	// (0x000158b2) cmail_ddmenu_btn03_pane_t1

0x99e7,	// (0x00017cf8) cell_dialer2_keypad_pane_t1_ParamLimits

0xc584,	// (0x0001a895) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xc584,	// (0x0001a895) cell_dialer2_keypad_pane_t1_copy1

0x676d,	// (0x00014a7e) ncimui_group_button_pane

0x92a0,	// (0x000175b1) main_sp_fs_calendar_pane_ParamLimits

0x7164,	// (0x00015475) list_single_cmail_header_caption_pane_ParamLimits

0xe1a8,	// (0x0001c4b9) aid_recal_txt_sm_pane

0x9231,	// (0x00017542) mian_recal_day_pane

0xe1ea,	// (0x0001c4fb) popup_sp_fs_cale_preview_window_ParamLimits

0xe469,	// (0x0001c77a) list_recal_day_pane

0xe4ab,	// (0x0001c7bc) list_single_recal_day_pane_ParamLimits

0xe4ab,	// (0x0001c7bc) list_single_recal_day_pane

0xe4bd,	// (0x0001c7ce) list_single_recal_day_pane_g1_ParamLimits

0xe4bd,	// (0x0001c7ce) list_single_recal_day_pane_g1

0xe4c9,	// (0x0001c7da) list_single_recal_day_pane_g2_ParamLimits

0xe4c9,	// (0x0001c7da) list_single_recal_day_pane_g2

0xe4d5,	// (0x0001c7e6) list_single_recal_day_pane_g3_ParamLimits

0xe4d5,	// (0x0001c7e6) list_single_recal_day_pane_g3

0x75c5,	// (0x000158d6) list_single_recal_day_pane_g4_ParamLimits

0x75c5,	// (0x000158d6) list_single_recal_day_pane_g4

0xe4e1,	// (0x0001c7f2) list_single_recal_day_pane_g5_ParamLimits

0xe4e1,	// (0x0001c7f2) list_single_recal_day_pane_g5

0xe4ed,	// (0x0001c7fe) list_single_recal_day_pane_g6_ParamLimits

0xe4ed,	// (0x0001c7fe) list_single_recal_day_pane_g6

0x0004,

0xfcef,	// (0x0001e000) list_single_recal_day_pane_g_ParamLimits

0xfcef,	// (0x0001e000) list_single_recal_day_pane_g

0xe501,	// (0x0001c812) list_single_recal_day_pane_t1

0xe513,	// (0x0001c824) list_single_recal_day_pane_t2

0x0001,

0xfcfa,	// (0x0001e00b) list_single_recal_day_pane_t

0x75dd,	// (0x000158ee) ncimui_query_button_pane_ParamLimits

0x75dd,	// (0x000158ee) ncimui_query_button_pane

0x75ed,	// (0x000158fe) ncimui_query_button_pane_t1_ParamLimits

0x75ed,	// (0x000158fe) ncimui_query_button_pane_t1

0xe525,	// (0x0001c836) ncimui_query_button_pane_t2_ParamLimits

0xe525,	// (0x0001c836) ncimui_query_button_pane_t2

0x0001,

0xfcff,	// (0x0001e010) ncimui_query_button_pane_t_ParamLimits

0xfcff,	// (0x0001e010) ncimui_query_button_pane_t

0x7600,	// (0x00015911) query_button_pane_ParamLimits

0x7600,	// (0x00015911) query_button_pane

0x9231,	// (0x00017542) bg_button_pane_cp0028

0xe538,	// (0x0001c849) query_button_pane_t1

0x33cc,	// (0x000116dd) main_tport_pane_ParamLimits

0x7012,	// (0x00015323) bg_popup_window_pane_cp01_ParamLimits

0x7012,	// (0x00015323) bg_popup_window_pane_cp01

0x702d,	// (0x0001533e) heading_pane_cp08_ParamLimits

0x702d,	// (0x0001533e) heading_pane_cp08

0x7040,	// (0x00015351) heading_pane_cp07_ParamLimits

0x7040,	// (0x00015351) heading_pane_cp07

0x70e7,	// (0x000153f8) cell_tport_appsw_pane_g2

0x0002,

0xfc46,	// (0x0001df57) cell_tport_appsw_pane_g

0x29b2,	// (0x00010cc3) input_candi_list_open_g1

0xa09e,	// (0x000183af) list_cale_time_pane_g6_ParamLimits

0xa09e,	// (0x000183af) list_cale_time_pane_g6

0x39d9,	// (0x00011cea) aid_size_touch_calib_1_ParamLimits

0x39d9,	// (0x00011cea) aid_size_touch_calib_1

0x39eb,	// (0x00011cfc) aid_size_touch_calib_2_ParamLimits

0x39eb,	// (0x00011cfc) aid_size_touch_calib_2

0x3a03,	// (0x00011d14) aid_size_touch_calib_3_ParamLimits

0x3a03,	// (0x00011d14) aid_size_touch_calib_3

0x3a21,	// (0x00011d32) aid_size_touch_calib_4_ParamLimits

0x3a21,	// (0x00011d32) aid_size_touch_calib_4

0x3a39,	// (0x00011d4a) main_touch_calib_button_group_pane_ParamLimits

0x3a39,	// (0x00011d4a) main_touch_calib_button_group_pane

0x3a51,	// (0x00011d62) main_touch_calib_pane_g1_ParamLimits

0x3a63,	// (0x00011d74) main_touch_calib_pane_g2_ParamLimits

0x3a75,	// (0x00011d86) main_touch_calib_pane_g3_ParamLimits

0x3a87,	// (0x00011d98) main_touch_calib_pane_g4_ParamLimits

0xf692,	// (0x0001d9a3) main_touch_calib_pane_g_ParamLimits

0x3a99,	// (0x00011daa) main_touch_calib_pane_t1_ParamLimits

0x3ab3,	// (0x00011dc4) main_touch_calib_pane_t2_ParamLimits

0x3acd,	// (0x00011dde) main_touch_calib_pane_t3_ParamLimits

0x3ae1,	// (0x00011df2) main_touch_calib_pane_t4_ParamLimits

0x3af5,	// (0x00011e06) main_touch_calib_pane_t5_ParamLimits

0xf69b,	// (0x0001d9ac) main_touch_calib_pane_t_ParamLimits

0xc324,	// (0x0001a635) list_single_fp_cale_pane_g3_ParamLimits

0xc324,	// (0x0001a635) list_single_fp_cale_pane_g3

0x92a0,	// (0x000175b1) bg_button_pane_cp012_ParamLimits

0x92a0,	// (0x000175b1) bg_vkb2_func_pane_cp03_ParamLimits

0x5956,	// (0x00013c67) cell_vitu2_function_top_pane_g1_ParamLimits

0x92a0,	// (0x000175b1) bg_vkb2_func_pane_cp04_ParamLimits

0x66f8,	// (0x00014a09) main_ncimui_button_group_pane_ParamLimits

0x66f8,	// (0x00014a09) main_ncimui_button_group_pane

0x6758,	// (0x00014a69) main_ncimui_pane_t3_ParamLimits

0x6758,	// (0x00014a69) main_ncimui_pane_t3

0xe10b,	// (0x0001c41c) phacti_button_group_pane

0xe42b,	// (0x0001c73c) aid_size_list_single_double_ParamLimits

0x755a,	// (0x0001586b) popup_ezdial_listscroll_window_ParamLimits

0xe437,	// (0x0001c748) popup_number_entry_window_cp01_ParamLimits

0x7613,	// (0x00015924) phacti_button_pane_ParamLimits

0x7613,	// (0x00015924) phacti_button_pane

0x9231,	// (0x00017542) bg_button_pane_cp14

0xe546,	// (0x0001c857) phacti_button_pane_t1

0x7624,	// (0x00015935) main_touch_calib_button_pane_ParamLimits

0x7624,	// (0x00015935) main_touch_calib_button_pane

0x9a55,	// (0x00017d66) bg_button_pane_cp18_ParamLimits

0x9a55,	// (0x00017d66) bg_button_pane_cp18

0xe554,	// (0x0001c865) main_touch_calib_button_pane_t1_ParamLimits

0xe554,	// (0x0001c865) main_touch_calib_button_pane_t1

0xe56a,	// (0x0001c87b) main_touch_calib_button_pane_t2_ParamLimits

0xe56a,	// (0x0001c87b) main_touch_calib_button_pane_t2

0x0001,

0xfd04,	// (0x0001e015) main_touch_calib_button_pane_t_ParamLimits

0xfd04,	// (0x0001e015) main_touch_calib_button_pane_t

0x9231,	// (0x00017542) cell_ncimui_button_pane

0x9231,	// (0x00017542) bg_button_pane_cp032

0xe588,	// (0x0001c899) cell_ncimui_button_pane_t1

0xca59,	// (0x0001ad6a) image3_infobar_pane_ParamLimits

0xca59,	// (0x0001ad6a) image3_infobar_pane

0x6aca,	// (0x00014ddb) fs_bigclock_status_pane_ParamLimits

0x6aca,	// (0x00014ddb) fs_bigclock_status_pane

0x6ad7,	// (0x00014de8) main_fs_bigclock_clock_pane_ParamLimits

0x6ad7,	// (0x00014de8) main_fs_bigclock_clock_pane

0x6af5,	// (0x00014e06) main_fs_bigclock_indi_pane_ParamLimits

0x6af5,	// (0x00014e06) main_fs_bigclock_indi_pane

0x6b27,	// (0x00014e38) main_fs_bigclock_swipe_pane_ParamLimits

0x6b27,	// (0x00014e38) main_fs_bigclock_swipe_pane

0x9231,	// (0x00017542) main_fs_clock_dumped_data

0xdb5c,	// (0x0001be6d) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xdb5c,	// (0x0001be6d) list_single_fs_bigclock_indicator_pane_g1

0xdb78,	// (0x0001be89) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xdb78,	// (0x0001be89) list_single_fs_bigclock_indicator_pane_g2

0xdb92,	// (0x0001bea3) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xdb92,	// (0x0001bea3) list_single_fs_bigclock_indicator_pane_g3

0xdbac,	// (0x0001bebd) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xdbac,	// (0x0001bebd) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfba5,	// (0x0001deb6) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfba5,	// (0x0001deb6) list_single_fs_bigclock_indicator_pane_g

0xdbd7,	// (0x0001bee8) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xdbd7,	// (0x0001bee8) list_single_fs_bigclock_indicator_pane_t1

0xdbff,	// (0x0001bf10) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xdbff,	// (0x0001bf10) list_single_fs_bigclock_indicator_pane_t2

0xdc27,	// (0x0001bf38) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xdc27,	// (0x0001bf38) list_single_fs_bigclock_indicator_pane_t3

0xdc4f,	// (0x0001bf60) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xdc4f,	// (0x0001bf60) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfbb0,	// (0x0001dec1) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfbb0,	// (0x0001dec1) list_single_fs_bigclock_indicator_pane_t

0xe596,	// (0x0001c8a7) image3_infobar_fav_pane_ParamLimits

0xe596,	// (0x0001c8a7) image3_infobar_fav_pane

0xe5a6,	// (0x0001c8b7) image3_infobar_loc_pane_ParamLimits

0xe5a6,	// (0x0001c8b7) image3_infobar_loc_pane

0xe5ba,	// (0x0001c8cb) image3_infobar_time_pane_ParamLimits

0xe5ba,	// (0x0001c8cb) image3_infobar_time_pane

0x99dd,	// (0x00017cee) image3_infobar_time_pane_g1

0xe5ca,	// (0x0001c8db) image3_infobar_time_pane_t1

0x99dd,	// (0x00017cee) image3_infobar_loc_pane_g1

0xe5d8,	// (0x0001c8e9) image3_infobar_loc_pane_g2

0x0001,

0xfd09,	// (0x0001e01a) image3_infobar_loc_pane_g

0xe5e0,	// (0x0001c8f1) image3_infobar_loc_pane_t1

0x99dd,	// (0x00017cee) image3_infobar_fav_pane_g1

0xe5ee,	// (0x0001c8ff) image3_infobar_fav_pane_g2

0x0001,

0xfd0e,	// (0x0001e01f) image3_infobar_fav_pane_g

0xe5f6,	// (0x0001c907) fs_bigclock_status_battery_pane

0xe5ff,	// (0x0001c910) fs_bigclock_status_signal_pane

0xe608,	// (0x0001c919) fs_bigclock_status_title_pane

0xe611,	// (0x0001c922) fs_bigclock_status_signal_pane_g1

0xe61a,	// (0x0001c92b) fs_bigclock_status_signal_pane_g2

0x0001,

0xfd13,	// (0x0001e024) fs_bigclock_status_signal_pane_g

0xe622,	// (0x0001c933) fs_bigclock_status_battery_pane_g1

0xe62b,	// (0x0001c93c) fs_bigclock_status_battery_pane_g2

0x0001,

0xfd18,	// (0x0001e029) fs_bigclock_status_battery_pane_g

0xe633,	// (0x0001c944) fs_bigclock_status_title_pane_t1

0x7639,	// (0x0001594a) main_fs_bigclock_clock_pane_g1

0x7639,	// (0x0001594a) main_fs_bigclock_clock_pane_g2

0x764a,	// (0x0001595b) main_fs_bigclock_clock_pane_g3

0x764a,	// (0x0001595b) main_fs_bigclock_clock_pane_g4

0x0003,

0xfd1d,	// (0x0001e02e) main_fs_bigclock_clock_pane_g

0x765d,	// (0x0001596e) main_fs_bigclock_clock_pane_t1

0x7673,	// (0x00015984) main_fs_bigclock_clock_pane_t2

0x0001,

0xfd26,	// (0x0001e037) main_fs_bigclock_clock_pane_t

0xe641,	// (0x0001c952) list_single_fs_bigclock_indicator_pane_ParamLimits

0xe641,	// (0x0001c952) list_single_fs_bigclock_indicator_pane

0xe652,	// (0x0001c963) list_single_fs_bigclock_pane_ParamLimits

0xe652,	// (0x0001c963) list_single_fs_bigclock_pane

0xe678,	// (0x0001c989) main_fs_bigclock_indicator_pane_t1

0xe687,	// (0x0001c998) list_single_fs_bigclock_pane_g1

0xe68f,	// (0x0001c9a0) list_single_fs_bigclock_pane_t1

0x99dd,	// (0x00017cee) main_fs_bigclock_swipe_pane_g1

0xe6d2,	// (0x0001c9e3) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfd37,	// (0x0001e048) main_fs_bigclock_swipe_pane_g

0xe6da,	// (0x0001c9eb) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xe6da,	// (0x0001c9eb) main_fs_bigclock_swipe_pane_t1

0x24d6,	// (0x000107e7) call_type_pane_ParamLimits

0x9231,	// (0x00017542) main_btmg_pane

0xe2e7,	// (0x0001c5f8) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe2e7,	// (0x0001c5f8) list_single_cale_mrui_row_pane_g2

0x0002,

0xfcaa,	// (0x0001dfbb) list_single_cale_mrui_row_pane_g_ParamLimits

0xfcaa,	// (0x0001dfbb) list_single_cale_mrui_row_pane_g

0xe492,	// (0x0001c7a3) list_recal_vselct_arw_lo_pane

0xe49a,	// (0x0001c7ab) list_recal_vselct_arw_up_pane

0xe4a2,	// (0x0001c7b3) list_recal_vselct_pane

0x76cd,	// (0x000159de) btmg_button_pane

0x76d7,	// (0x000159e8) main_btmg_pane_g1

0x9231,	// (0x00017542) bg_button_pane_cp044

0xe6f7,	// (0x0001ca08) btmg_button_pane_t1

0xba7b,	// (0x00019d8c) aid_listscroll_gen

0x92a0,	// (0x000175b1) main_cntbar_detail_pane

0xe00c,	// (0x0001c31d) list_cmail_folder_pane

0xce05,	// (0x0001b116) sp_fs_scroll_pane_cp03_ParamLimits

0x76e1,	// (0x000159f2) list_single_fs_dyc_pane_cp01_ParamLimits

0x76e1,	// (0x000159f2) list_single_fs_dyc_pane_cp01

0xe705,	// (0x0001ca16) aid_size_cmail_indent

0xe70e,	// (0x0001ca1f) list_single_dyc_row_pane_cp01

0x772a,	// (0x00015a3b) cntbar_detail_list_pane_ParamLimits

0x772a,	// (0x00015a3b) cntbar_detail_list_pane

0x7776,	// (0x00015a87) main_cntbar_detail_cont_pane_ParamLimits

0x7776,	// (0x00015a87) main_cntbar_detail_cont_pane

0xce05,	// (0x0001b116) scroll_pane_cp032_ParamLimits

0xce05,	// (0x0001b116) scroll_pane_cp032

0x778a,	// (0x00015a9b) cntbar_detail_list_event_pane_ParamLimits

0x778a,	// (0x00015a9b) cntbar_detail_list_event_pane

0x773a,	// (0x00015a4b) cntbar_detail_list_shct_pane

0x9efb,	// (0x0001820c) aid_list_gen

0xe717,	// (0x0001ca28) aid_scroll

0xe720,	// (0x0001ca31) aid_size_touch_scroll_bar

0x779a,	// (0x00015aab) aid_list_double

0x77a3,	// (0x00015ab4) aid_list_single

0x779a,	// (0x00015aab) aid_list_single_lg

0x77ac,	// (0x00015abd) aid_list_z_g_a_sm

0x77b4,	// (0x00015ac5) aid_list_z_g_d

0x77bc,	// (0x00015acd) aid_txt_z_prm

0x77ca,	// (0x00015adb) aid_txt_z_prm_cp01

0x77d8,	// (0x00015ae9) aid_txt_z_sec

0x77e6,	// (0x00015af7) main_cntbar_detail_cont_pane_g1_ParamLimits

0x77e6,	// (0x00015af7) main_cntbar_detail_cont_pane_g1

0x77fa,	// (0x00015b0b) main_cntbar_detail_cont_pane_g2_ParamLimits

0x77fa,	// (0x00015b0b) main_cntbar_detail_cont_pane_g2

0x0001,

0xfd3c,	// (0x0001e04d) main_cntbar_detail_cont_pane_g_ParamLimits

0xfd3c,	// (0x0001e04d) main_cntbar_detail_cont_pane_g

0xe729,	// (0x0001ca3a) main_cntbar_detail_cont_pane_t1

0xe737,	// (0x0001ca48) main_cntbar_detail_cont_pane_t2

0xe745,	// (0x0001ca56) main_cntbar_detail_cont_pane_t3

0x0002,

0xfd41,	// (0x0001e052) main_cntbar_detail_cont_pane_t

0x780a,	// (0x00015b1b) cell_cntbar_detail_list_shct_pane_ParamLimits

0x780a,	// (0x00015b1b) cell_cntbar_detail_list_shct_pane

0xe753,	// (0x0001ca64) cntbar_detail_list_shct_pane_g1

0xe75c,	// (0x0001ca6d) cntbar_detail_list_shct_pane_g2

0x0001,

0xfd48,	// (0x0001e059) cntbar_detail_list_shct_pane_g

0x781e,	// (0x00015b2f) cntbar_detail_list_event_pane_g1_ParamLimits

0x781e,	// (0x00015b2f) cntbar_detail_list_event_pane_g1

0x782a,	// (0x00015b3b) cntbar_detail_list_event_pane_g2_ParamLimits

0x782a,	// (0x00015b3b) cntbar_detail_list_event_pane_g2

0x0005,

0xfd4d,	// (0x0001e05e) cntbar_detail_list_event_pane_g_ParamLimits

0xfd4d,	// (0x0001e05e) cntbar_detail_list_event_pane_g

0x7896,	// (0x00015ba7) cntbar_detail_list_event_pane_t1_ParamLimits

0x7896,	// (0x00015ba7) cntbar_detail_list_event_pane_t1

0x78ab,	// (0x00015bbc) cntbar_detail_list_event_pane_t2_ParamLimits

0x78ab,	// (0x00015bbc) cntbar_detail_list_event_pane_t2

0x0002,

0xfd5a,	// (0x0001e06b) cntbar_detail_list_event_pane_t_ParamLimits

0xfd5a,	// (0x0001e06b) cntbar_detail_list_event_pane_t

0x99dd,	// (0x00017cee) cell_cntbar_detail_list_shct_pane_g1

0xa6e8,	// (0x000189f9) navi_pane_mv_g3

0x92a0,	// (0x000175b1) main_cntbar_detail_pane_ParamLimits

0x9231,	// (0x00017542) main_notif_wgt_pane

0xc74c,	// (0x0001aa5d) aid_tch_main_mp4_pane_g4

0xc9c4,	// (0x0001acd5) popup_slider_window_cp02

0xe488,	// (0x0001c799) list_recal_day_event_pane

0x76f8,	// (0x00015a09) cntbar_detail_btn_pane_ParamLimits

0x76f8,	// (0x00015a09) cntbar_detail_btn_pane

0x7711,	// (0x00015a22) cntbar_detail_btn_pane_cp01_ParamLimits

0x7711,	// (0x00015a22) cntbar_detail_btn_pane_cp01

0x773a,	// (0x00015a4b) cntbar_detail_list_shct_pane_ParamLimits

0x774a,	// (0x00015a5b) cntbar_detail_pane_g1_ParamLimits

0x774a,	// (0x00015a5b) cntbar_detail_pane_g1

0x775a,	// (0x00015a6b) cntbar_detail_pane_t1_ParamLimits

0x775a,	// (0x00015a6b) cntbar_detail_pane_t1

0x7836,	// (0x00015b47) cntbar_detail_list_event_pane_g3_ParamLimits

0x7836,	// (0x00015b47) cntbar_detail_list_event_pane_g3

0x784e,	// (0x00015b5f) cntbar_detail_list_event_pane_g4_ParamLimits

0x784e,	// (0x00015b5f) cntbar_detail_list_event_pane_g4

0x7866,	// (0x00015b77) cntbar_detail_list_event_pane_g5_ParamLimits

0x7866,	// (0x00015b77) cntbar_detail_list_event_pane_g5

0x787e,	// (0x00015b8f) cntbar_detail_list_event_pane_g6_ParamLimits

0x787e,	// (0x00015b8f) cntbar_detail_list_event_pane_g6

0x78c0,	// (0x00015bd1) cntbar_detail_list_event_pane_t3_ParamLimits

0x78c0,	// (0x00015bd1) cntbar_detail_list_event_pane_t3

0x78d2,	// (0x00015be3) popup_notif_wgt_window_ParamLimits

0x78d2,	// (0x00015be3) popup_notif_wgt_window

0x78eb,	// (0x00015bfc) popup_submenu_window_cp01_ParamLimits

0x78eb,	// (0x00015bfc) popup_submenu_window_cp01

0x9c8a,	// (0x00017f9b) bg_popup_window_pane_cp10

0xe765,	// (0x0001ca76) listscroll_notif_wgt_pane

0xe777,	// (0x0001ca88) list_notif_wgt_window

0xe780,	// (0x0001ca91) scroll_pane_cp033

0x78fd,	// (0x00015c0e) list_notif_wgt_row_pane_ParamLimits

0x78fd,	// (0x00015c0e) list_notif_wgt_row_pane

0xe789,	// (0x0001ca9a) aid_size_list_notif_wgt_del

0xe796,	// (0x0001caa7) list_notif_wgt_row_pane_g1

0xe7a2,	// (0x0001cab3) list_notif_wgt_row_pane_g2

0xe7b1,	// (0x0001cac2) list_notif_wgt_row_pane_g3

0x0002,

0xfd61,	// (0x0001e072) list_notif_wgt_row_pane_g

0xe7be,	// (0x0001cacf) list_notif_wgt_row_pane_t1

0xe7d4,	// (0x0001cae5) list_notif_wgt_row_pane_t2

0xe7e6,	// (0x0001caf7) list_notif_wgt_row_pane_t3

0x0002,

0xfd68,	// (0x0001e079) list_notif_wgt_row_pane_t

0xcf22,	// (0x0001b233) list_recal_day_event_pane_g1

0xe7f8,	// (0x0001cb09) list_recal_day_event_pane_t1

0x9231,	// (0x00017542) bg_button_pane_cp045

0x790d,	// (0x00015c1e) cntbar_detail_btn_pane_t1

0xa81b,	// (0x00018b2c) main_callh_pane_ParamLimits

0xa81b,	// (0x00018b2c) main_callh_pane

0x9231,	// (0x00017542) main_coverflow0_pane

0x9231,	// (0x00017542) main_wgtman_pane

0x6b3f,	// (0x00014e50) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x6b3f,	// (0x00014e50) main_fs_bigclock_unlock_btn_pane

0x70df,	// (0x000153f0) bg_button_pane_cp16

0x70ef,	// (0x00015400) cell_tport_appsw_pane_g3

0x791b,	// (0x00015c2c) cf0_flow_pane_ParamLimits

0x791b,	// (0x00015c2c) cf0_flow_pane

0xe807,	// (0x0001cb18) listscroll_cf0_pane

0xe812,	// (0x0001cb23) main_cf0_pane_g1

0x7930,	// (0x00015c41) main_cf0_pane_t1_ParamLimits

0x7930,	// (0x00015c41) main_cf0_pane_t1

0x7947,	// (0x00015c58) main_cf0_pane_t2_ParamLimits

0x7947,	// (0x00015c58) main_cf0_pane_t2

0x0001,

0xfd74,	// (0x0001e085) main_cf0_pane_t_ParamLimits

0xfd74,	// (0x0001e085) main_cf0_pane_t

0xe824,	// (0x0001cb35) scroll_pane_cp11

0x795e,	// (0x00015c6f) cf0_flow_pane_g1

0x7966,	// (0x00015c77) cf0_flow_pane_g2

0x0001,

0xfd79,	// (0x0001e08a) cf0_flow_pane_g

0x796e,	// (0x00015c7f) cf0_flow_pane_t1

0x9231,	// (0x00017542) main_call6_pane

0x9231,	// (0x00017542) main_calllock_pane

0x797c,	// (0x00015c8d) call6_btn_grp_pane_ParamLimits

0x797c,	// (0x00015c8d) call6_btn_grp_pane

0x7996,	// (0x00015ca7) call6_pane_g1_ParamLimits

0x7996,	// (0x00015ca7) call6_pane_g1

0x79ac,	// (0x00015cbd) popup_call6_1st_window_ParamLimits

0x79ac,	// (0x00015cbd) popup_call6_1st_window

0x79bd,	// (0x00015cce) popup_call6_2nd_window_ParamLimits

0x79bd,	// (0x00015cce) popup_call6_2nd_window

0x79ce,	// (0x00015cdf) cell_call6_btn_pane_ParamLimits

0x79ce,	// (0x00015cdf) cell_call6_btn_pane

0x9c8a,	// (0x00017f9b) bg_popup_call2_in_pane_cp03

0xe82f,	// (0x0001cb40) popup_call6_1st_window_g1

0xe837,	// (0x0001cb48) popup_call6_1st_window_g2

0xe83f,	// (0x0001cb50) popup_call6_1st_window_g3

0x0002,

0xfd7e,	// (0x0001e08f) popup_call6_1st_window_g

0xe847,	// (0x0001cb58) popup_call6_1st_window_t1

0xe856,	// (0x0001cb67) popup_call6_1st_window_t2

0xe864,	// (0x0001cb75) popup_call6_1st_window_t3

0x0002,

0xfd85,	// (0x0001e096) popup_call6_1st_window_t

0x9c8a,	// (0x00017f9b) bg_popup_call2_in_pane_cp04

0xe872,	// (0x0001cb83) popup_call6_2nd_window_g1

0xe87a,	// (0x0001cb8b) popup_call6_2nd_window_g2

0xe882,	// (0x0001cb93) popup_call6_2nd_window_g3

0x0002,

0xfd8c,	// (0x0001e09d) popup_call6_2nd_window_g

0xe88a,	// (0x0001cb9b) popup_call6_2nd_window_t1

0x9231,	// (0x00017542) bg_button_pane_cp15

0xe899,	// (0x0001cbaa) cell_call6_btn_pane_g1

0xe8a2,	// (0x0001cbb3) cell_call6_btn_pane_t1

0x79e2,	// (0x00015cf3) listscroll_wgtman_pane_ParamLimits

0x79e2,	// (0x00015cf3) listscroll_wgtman_pane

0x7a03,	// (0x00015d14) wgtman_btn_pane_ParamLimits

0x7a03,	// (0x00015d14) wgtman_btn_pane

0xa4fc,	// (0x0001880d) aid_scroll_copy1

0xe8b1,	// (0x0001cbc2) list_wgtman_pane

0x7a46,	// (0x00015d57) wgtman_btn_pane_g1_ParamLimits

0x7a46,	// (0x00015d57) wgtman_btn_pane_g1

0x7a72,	// (0x00015d83) wgtman_btn_pane_t1_ParamLimits

0x7a72,	// (0x00015d83) wgtman_btn_pane_t1

0xe8e8,	// (0x0001cbf9) wgtman_btn_pane_t2_ParamLimits

0xe8e8,	// (0x0001cbf9) wgtman_btn_pane_t2

0x0001,

0xfd93,	// (0x0001e0a4) wgtman_btn_pane_t_ParamLimits

0xfd93,	// (0x0001e0a4) wgtman_btn_pane_t

0x7aaf,	// (0x00015dc0) listrow_wgtman_pane_ParamLimits

0x7aaf,	// (0x00015dc0) listrow_wgtman_pane

0x7ac2,	// (0x00015dd3) listrow_wgtman_pane_g1

0x7acf,	// (0x00015de0) listrow_wgtman_pane_g2

0x0001,

0xfd98,	// (0x0001e0a9) listrow_wgtman_pane_g

0x7aed,	// (0x00015dfe) listrow_wgtman_pane_t1

0x7b05,	// (0x00015e16) listrow_wgtman_pane_t2

0x0001,

0xfd9d,	// (0x0001e0ae) listrow_wgtman_pane_t

0x7b2b,	// (0x00015e3c) wait_bar_pane_cp09

0xe8ff,	// (0x0001cc10) main_calllock_btn_pane

0xe909,	// (0x0001cc1a) main_calllock_pane_g1

0x9231,	// (0x00017542) bg_button_pane_cp17

0xe899,	// (0x0001cbaa) main_calllock_btn_pane_g1

0xe911,	// (0x0001cc22) main_calllock_btn_pane_t1

0x9231,	// (0x00017542) main_dialer3_pane

0x9231,	// (0x00017542) main_fmrd2_pane

0x99dd,	// (0x00017cee) main_fs_bigclock_unlock_btn_pane_g1

0x7b45,	// (0x00015e56) main_fs_bigclock_unlock_btn_pane_t1

0x7b53,	// (0x00015e64) area_fmrd2_info_pane_ParamLimits

0x7b53,	// (0x00015e64) area_fmrd2_info_pane

0x7b64,	// (0x00015e75) area_fmrd2_visual_pane_ParamLimits

0x7b64,	// (0x00015e75) area_fmrd2_visual_pane

0x7b72,	// (0x00015e83) fmrd2_indi_pane_ParamLimits

0x7b72,	// (0x00015e83) fmrd2_indi_pane

0x7b7f,	// (0x00015e90) area_fmrd2_visual_pane_g1

0x7b87,	// (0x00015e98) area_fmrd2_visual_pane_t1

0x7b97,	// (0x00015ea8) area_fmrd2_visual_pane_t2

0x7ba7,	// (0x00015eb8) area_fmrd2_visual_pane_t3

0x0002,

0xfda7,	// (0x0001e0b8) area_fmrd2_visual_pane_t

0x7bb7,	// (0x00015ec8) area_fmrd2_info_pane_g1

0x7bbf,	// (0x00015ed0) area_fmrd2_info_pane_t1

0x7bcf,	// (0x00015ee0) area_fmrd2_info_pane_t2

0x7bdf,	// (0x00015ef0) area_fmrd2_info_pane_t3

0x7bef,	// (0x00015f00) area_fmrd2_info_pane_t4

0x0003,

0xfdae,	// (0x0001e0bf) area_fmrd2_info_pane_t

0x7bfd,	// (0x00015f0e) fmrd2_indi_pane_t1

0x7c0d,	// (0x00015f1e) fmrd2_indi_pane_t2

0x7c1d,	// (0x00015f2e) fmrd2_indi_pane_t3

0x0002,

0xfdb7,	// (0x0001e0c8) fmrd2_indi_pane_t

0xdbbb,	// (0x0001becc) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xdbbb,	// (0x0001becc) list_single_fs_bigclock_indicator_pane_g5

0xdc6c,	// (0x0001bf7d) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xdc6c,	// (0x0001bf7d) list_single_fs_bigclock_indicator_pane_t5

0x72d8,	// (0x000155e9) aid_cell_bcale_month_pane_ParamLimits

0x72d8,	// (0x000155e9) aid_cell_bcale_month_pane

0x72f6,	// (0x00015607) bcale_month_pane_ParamLimits

0x72f6,	// (0x00015607) bcale_month_pane

0x731a,	// (0x0001562b) bcale_preview_pane_ParamLimits

0x731a,	// (0x0001562b) bcale_preview_pane

0xe68f,	// (0x0001c9a0) list_single_fs_bigclock_pane_t1_ParamLimits

0xe6ae,	// (0x0001c9bf) list_single_fs_bigclock_pane_t2_ParamLimits

0xe6ae,	// (0x0001c9bf) list_single_fs_bigclock_pane_t2

0x0001,

0xfd32,	// (0x0001e043) list_single_fs_bigclock_pane_t_ParamLimits

0xfd32,	// (0x0001e043) list_single_fs_bigclock_pane_t

0x7b3d,	// (0x00015e4e) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfda2,	// (0x0001e0b3) main_fs_bigclock_unlock_btn_pane_g

0x7c2d,	// (0x00015f3e) aid_dia3_key_size_ParamLimits

0x7c2d,	// (0x00015f3e) aid_dia3_key_size

0x7c3c,	// (0x00015f4d) aid_dia3_listrow_size_ParamLimits

0x7c3c,	// (0x00015f4d) aid_dia3_listrow_size

0x7c51,	// (0x00015f62) dia3_keypad_fun_pane_ParamLimits

0x7c51,	// (0x00015f62) dia3_keypad_fun_pane

0x7c6d,	// (0x00015f7e) dia3_keypad_num_pane_ParamLimits

0x7c6d,	// (0x00015f7e) dia3_keypad_num_pane

0x7c88,	// (0x00015f99) dia3_listscroll_pane_ParamLimits

0x7c88,	// (0x00015f99) dia3_listscroll_pane

0x7c9b,	// (0x00015fac) dia3_numentry_pane_ParamLimits

0x7c9b,	// (0x00015fac) dia3_numentry_pane

0xe920,	// (0x0001cc31) dia3_list_pane

0xe92b,	// (0x0001cc3c) scroll_pane_cp12

0x9231,	// (0x00017542) bg_dia3_numentry_pane

0x7cb3,	// (0x00015fc4) dia3_numentry_pane_t1

0x7cc2,	// (0x00015fd3) cell_dia3_key_num_pane

0x7cca,	// (0x00015fdb) cell_dia3_key0_fun_pane_ParamLimits

0x7cca,	// (0x00015fdb) cell_dia3_key0_fun_pane

0x7cde,	// (0x00015fef) cell_dia3_key1_fun_pane_ParamLimits

0x7cde,	// (0x00015fef) cell_dia3_key1_fun_pane

0x7cf6,	// (0x00016007) dia3_listrow_pane

0xd90e,	// (0x0001bc1f) bg_dia3_numentry_pane_g1

0x9231,	// (0x00017542) bg_button_pane_cp21

0xe936,	// (0x0001cc47) cell_dia3_key_num_pane_t1

0xe944,	// (0x0001cc55) cell_dia3_key_num_pane_t2

0xe953,	// (0x0001cc64) cell_dia3_key_num_pane_t3

0xe962,	// (0x0001cc73) cell_dia3_key_num_pane_t4

0x0003,

0xfdbe,	// (0x0001e0cf) cell_dia3_key_num_pane_t

0x9231,	// (0x00017542) bg_button_pane_cp19

0x7d08,	// (0x00016019) cell_dia3_key0_fun_pane_g1

0x9231,	// (0x00017542) bg_button_pane_cp20

0x7d10,	// (0x00016021) cell_dia3_key1_fun_pane_g1

0x7d18,	// (0x00016029) area_left_week_number_pane

0x7d24,	// (0x00016035) area_top_day_name_pane

0x7d37,	// (0x00016048) frame_month_view_pane

0xe971,	// (0x0001cc82) grid_month_view_pane

0x7d4a,	// (0x0001605b) cell_top_day_name_pane_ParamLimits

0x7d4a,	// (0x0001605b) cell_top_day_name_pane

0x7d77,	// (0x00016088) cell_area_left_week_number_pane_ParamLimits

0x7d77,	// (0x00016088) cell_area_left_week_number_pane

0x7d8b,	// (0x0001609c) cell_month_view_pane_ParamLimits

0x7d8b,	// (0x0001609c) cell_month_view_pane

0xe97f,	// (0x0001cc90) frm_month_g1

0x7db8,	// (0x000160c9) frm_month_g2

0x7dcb,	// (0x000160dc) frm_month_g3

0x7dde,	// (0x000160ef) frm_month_g4

0x7df1,	// (0x00016102) frm_month_g5

0x7e04,	// (0x00016115) frm_month_g6

0x7e17,	// (0x00016128) frm_month_g7

0xe98c,	// (0x0001cc9d) frm_month_g8

0x7e2a,	// (0x0001613b) frm_month_g9

0x7e3a,	// (0x0001614b) frm_month_g10

0x7e4a,	// (0x0001615b) frm_month_g11

0x7e5a,	// (0x0001616b) frm_month_g12

0x7e6c,	// (0x0001617d) frm_month_g13

0x7e7e,	// (0x0001618f) frm_month_g14

0x7e92,	// (0x000161a3) frm_month_g15

0x7ea6,	// (0x000161b7) frm_month_g16

0x000f,

0xfdc7,	// (0x0001e0d8) frm_month_g

0xe999,	// (0x0001ccaa) cell_top_day_name_pane_t1

0x7eba,	// (0x000161cb) cell_area_left_week_number_pane_g1

0x7ec6,	// (0x000161d7) cell_area_left_week_number_pane_t1

0x9997,	// (0x00017ca8) cell_month_view_pane_g1

0x7ed9,	// (0x000161ea) cell_month_view_pane_t1

0x9231,	// (0x00017542) main_fps_pane

0xde30,	// (0x0001c141) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xde30,	// (0x0001c141) cmail_ddmenu_btn02_pane_cp1

0xde4c,	// (0x0001c15d) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xde4c,	// (0x0001c15d) cmail_ddmenu_btn02_pane_cp2

0x7595,	// (0x000158a6) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x7595,	// (0x000158a6) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfce5,	// (0x0001dff6) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfce5,	// (0x0001dff6) cmail_ddmenu_btn02_pane_g

0x75b3,	// (0x000158c4) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x75b3,	// (0x000158c4) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfcea,	// (0x0001dffb) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfcea,	// (0x0001dffb) cmail_ddmenu_btn02_pane_t

0x7eec,	// (0x000161fd) fps_text_pane_ParamLimits

0x7eec,	// (0x000161fd) fps_text_pane

0x7f03,	// (0x00016214) main_fps_pane_g1_ParamLimits

0x7f03,	// (0x00016214) main_fps_pane_g1

0x7f1d,	// (0x0001622e) wait_bar_pane_cp010_ParamLimits

0x7f1d,	// (0x0001622e) wait_bar_pane_cp010

0x7f2e,	// (0x0001623f) fps_text_pane_t1_ParamLimits

0x7f2e,	// (0x0001623f) fps_text_pane_t1

0xe8bb,	// (0x0001cbcc) cam4_image_uncrop_pane_g1

0xe8c4,	// (0x0001cbd5) cam4_image_uncrop_pane_g2

0x4da2,	// (0x000130b3) cam4_image_uncrop_pane_g3

0x4dab,	// (0x000130bc) cam4_image_uncrop_pane_g4

0x0003,

0xf829,	// (0x0001db3a) cam4_image_uncrop_pane_g

0x7cf6,	// (0x00016007) dia3_listrow_pane_ParamLimits

0x9231,	// (0x00017542) main_phob2_pane

0x70b0,	// (0x000153c1) cell_tport_appsw_pane_cp02_ParamLimits

0x70b0,	// (0x000153c1) cell_tport_appsw_pane_cp02

0x70c4,	// (0x000153d5) cell_tport_appsw_pane_cp03_ParamLimits

0x70c4,	// (0x000153d5) cell_tport_appsw_pane_cp03

0x9231,	// (0x00017542) phob2_contact_card_pane

0x9231,	// (0x00017542) phob2_listscroll_pane

0xe9ac,	// (0x0001ccbd) phob2_list_pane

0xe44c,	// (0x0001c75d) scroll_pane_cp034

0x7f46,	// (0x00016257) phob2_cc_data_pane_ParamLimits

0x7f46,	// (0x00016257) phob2_cc_data_pane

0x7f65,	// (0x00016276) phob2_cc_listscroll_pane_ParamLimits

0x7f65,	// (0x00016276) phob2_cc_listscroll_pane

0x7aaf,	// (0x00015dc0) list_double_large_graphic_phob2_pane_ParamLimits

0x7aaf,	// (0x00015dc0) list_double_large_graphic_phob2_pane

0x7f83,	// (0x00016294) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x7f83,	// (0x00016294) list_double_large_graphic_phob2_pane_g1

0x7f90,	// (0x000162a1) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x7f90,	// (0x000162a1) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfde8,	// (0x0001e0f9) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfde8,	// (0x0001e0f9) list_double_large_graphic_phob2_pane_g

0x7fb6,	// (0x000162c7) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x7fb6,	// (0x000162c7) list_double_large_graphic_phob2_pane_t1

0x7fcb,	// (0x000162dc) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x7fcb,	// (0x000162dc) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfdf1,	// (0x0001e102) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfdf1,	// (0x0001e102) list_double_large_graphic_phob2_pane_t

0x9231,	// (0x00017542) list_highlight_pane_cp024

0xe9b4,	// (0x0001ccc5) phob2_cc_button_pane

0x7fe0,	// (0x000162f1) phob2_cc_data_pane_g1_ParamLimits

0x7fe0,	// (0x000162f1) phob2_cc_data_pane_g1

0x7ff7,	// (0x00016308) phob2_cc_data_pane_g2_ParamLimits

0x7ff7,	// (0x00016308) phob2_cc_data_pane_g2

0x0001,

0xfdf6,	// (0x0001e107) phob2_cc_data_pane_g_ParamLimits

0xfdf6,	// (0x0001e107) phob2_cc_data_pane_g

0x8009,	// (0x0001631a) phob2_cc_data_pane_t1_ParamLimits

0x8009,	// (0x0001631a) phob2_cc_data_pane_t1

0x8021,	// (0x00016332) phob2_cc_data_pane_t2_ParamLimits

0x8021,	// (0x00016332) phob2_cc_data_pane_t2

0x8039,	// (0x0001634a) phob2_cc_data_pane_t3_ParamLimits

0x8039,	// (0x0001634a) phob2_cc_data_pane_t3

0x0002,

0xfdfb,	// (0x0001e10c) phob2_cc_data_pane_t_ParamLimits

0xfdfb,	// (0x0001e10c) phob2_cc_data_pane_t

0xe9bc,	// (0x0001cccd) phob2_cc_list_pane_ParamLimits

0xe9bc,	// (0x0001cccd) phob2_cc_list_pane

0xcfcb,	// (0x0001b2dc) scroll_pane_cp035_ParamLimits

0xcfcb,	// (0x0001b2dc) scroll_pane_cp035

0x92a0,	// (0x000175b1) bg_button_pane_cp033

0xe9c8,	// (0x0001ccd9) phob2_cc_button_pane_g1

0xe9d4,	// (0x0001cce5) phob2_cc_button_pane_t1

0xe9e9,	// (0x0001ccfa) phob2_cc_button_pane_t2

0x0001,

0xfe02,	// (0x0001e113) phob2_cc_button_pane_t

0x8051,	// (0x00016362) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x8051,	// (0x00016362) list_double_large_graphic_phob2_cc_pane

0x8083,	// (0x00016394) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x8083,	// (0x00016394) list_double_large_graphic_phob2_cc_pane_g1

0xe9fb,	// (0x0001cd0c) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xe9fb,	// (0x0001cd0c) list_double_large_graphic_phob2_cc_pane_g2

0x808f,	// (0x000163a0) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x808f,	// (0x000163a0) list_double_large_graphic_phob2_cc_pane_g3

0x809b,	// (0x000163ac) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x809b,	// (0x000163ac) list_double_large_graphic_phob2_cc_pane_g4

0x80a7,	// (0x000163b8) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x80a7,	// (0x000163b8) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfe07,	// (0x0001e118) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfe07,	// (0x0001e118) list_double_large_graphic_phob2_cc_pane_g

0x80b3,	// (0x000163c4) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x80b3,	// (0x000163c4) list_double_large_graphic_phob2_cc_pane_t1

0x80dc,	// (0x000163ed) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x80dc,	// (0x000163ed) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfe12,	// (0x0001e123) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfe12,	// (0x0001e123) list_double_large_graphic_phob2_cc_pane_t

0xea07,	// (0x0001cd18) list_highlight_pane_cp025_ParamLimits

0xea07,	// (0x0001cd18) list_highlight_pane_cp025

0x92a0,	// (0x000175b1) bg_button_pane_cp033_ParamLimits

0xe9c8,	// (0x0001ccd9) phob2_cc_button_pane_g1_ParamLimits

0xe9d4,	// (0x0001cce5) phob2_cc_button_pane_t1_ParamLimits

0xe9e9,	// (0x0001ccfa) phob2_cc_button_pane_t2_ParamLimits

0xfe02,	// (0x0001e113) phob2_cc_button_pane_t_ParamLimits

0x0bec,	// (0x0000eefd) popup_wgtman_window

0xcd62,	// (0x0001b073) scroll_pane_cp038

0x7a28,	// (0x00015d39) wgtman_btn_pane_cp_01_ParamLimits

0x7a28,	// (0x00015d39) wgtman_btn_pane_cp_01

0xea15,	// (0x0001cd26) wgtman_content_pane

0xea1e,	// (0x0001cd2f) wgtman_heading_pane

0x9231,	// (0x00017542) bg_heading_pane_cp02

0xea27,	// (0x0001cd38) wgtman_heading_pane_g1

0xea2f,	// (0x0001cd40) wgtman_heading_pane_t1

0xea3d,	// (0x0001cd4e) scroll_pane_cp036

0xea45,	// (0x0001cd56) wgtman_list_pane

0xe8cd,	// (0x0001cbde) wgtman_list_pane_t1_ParamLimits

0xe8cd,	// (0x0001cbde) wgtman_list_pane_t1

0xcae9,	// (0x0001adfa) cam4_grid_pane

0x5ae3,	// (0x00013df4) bg_button_pane_cp015_ParamLimits

0x5af4,	// (0x00013e05) bg_button_pane_cp016_ParamLimits

0x5b00,	// (0x00013e11) bg_button_pane_cp017_ParamLimits

0x5b54,	// (0x00013e65) popup_vitu2_query_window_g3_ParamLimits

0x5b54,	// (0x00013e65) popup_vitu2_query_window_g3

0x5bf5,	// (0x00013f06) popup_vitu2_query_window_t6_ParamLimits

0x5bf5,	// (0x00013f06) popup_vitu2_query_window_t6

0x5c20,	// (0x00013f31) popup_vitu2_query_window_t7_ParamLimits

0x5c20,	// (0x00013f31) popup_vitu2_query_window_t7

0xe8bb,	// (0x0001cbcc) cam4_grid_pane_g1

0xe8c4,	// (0x0001cbd5) cam4_grid_pane_g2

0xea4d,	// (0x0001cd5e) cam4_grid_pane_g3

0xea56,	// (0x0001cd67) cam4_grid_pane_g4

0x0003,

0xfe17,	// (0x0001e128) cam4_grid_pane_g

0x169a,	// (0x0000f9ab) aid_placing_vt_slider_lsc_ParamLimits

0x1997,	// (0x0000fca8) vidtel_button_pane_ParamLimits

0x1997,	// (0x0000fca8) vidtel_button_pane

0x9231,	// (0x00017542) bg_button_pane_cp034

0xea61,	// (0x0001cd72) vidtel_button_pane_g1

0xea69,	// (0x0001cd7a) vidtel_button_pane_t1

0xced6,	// (0x0001b1e7) aid_size_vtel_slider_touch

0xcfcb,	// (0x0001b2dc) scroll_pane_cp039

0x68d6,	// (0x00014be7) ncim_query_button_pane_cp01_ParamLimits

0x68f5,	// (0x00014c06) ncimui_query_pane_g1_ParamLimits

0x92a0,	// (0x000175b1) input_focus_pane_cp012_ParamLimits

0xd954,	// (0x0001bc65) ncim_query_entry_pane_t1_ParamLimits

0xcfcb,	// (0x0001b2dc) scroll_pane_cp039_ParamLimits

0xa5d3,	// (0x000188e4) navi_pane_bcale_mc_g1

0xa5db,	// (0x000188ec) navi_pane_bcale_mc_t1

0xde80,	// (0x0001c191) main_sp_fs_email_pane_g1

0xde8c,	// (0x0001c19d) main_sp_fs_email_pane_g2

0x0001,

0xfc15,	// (0x0001df26) main_sp_fs_email_pane_g

0xe2f3,	// (0x0001c604) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe2f3,	// (0x0001c604) list_single_cale_mrui_row_pane_g3

0x75d3,	// (0x000158e4) list_single_recal_day_pane_g5_event_pane

0xe4f9,	// (0x0001c80a) list_single_recal_day_pane_g7

0xea7f,	// (0x0001cd90) list_recal_day_event_pane_cp01

0xea88,	// (0x0001cd99) list_recal_vselct_arw_lo_pane_cp01

0xea90,	// (0x0001cda1) list_recal_vselct_arw_up_pane_cp01

0xea98,	// (0x0001cda9) list_recal_vselct_pane_cp01

0xcf22,	// (0x0001b233) list_recal_day_event_pane_cp01_g1

0xeaa2,	// (0x0001cdb3) list_recal_day_event_pane_cp01_t1

0xe501,	// (0x0001c812) list_single_recal_day_pane_t1_ParamLimits

0xe513,	// (0x0001c824) list_single_recal_day_pane_t2_ParamLimits

0xfcfa,	// (0x0001e00b) list_single_recal_day_pane_t_ParamLimits

0x991c,	// (0x00017c2d) bg_notes_pane_ParamLimits

0x9a19,	// (0x00017d2a) list_notes_pane_ParamLimits

0x0d37,	// (0x0000f048) scroll_pane_cp06_ParamLimits

0x9a55,	// (0x00017d66) main_notes_pane_ParamLimits

0x92a0,	// (0x000175b1) main_welc_pane

0x8132,	// (0x00016443) main_welc_body_pane_ParamLimits

0x8132,	// (0x00016443) main_welc_body_pane

0x814f,	// (0x00016460) main_welc_opti_pane_ParamLimits

0x814f,	// (0x00016460) main_welc_opti_pane

0x81c6,	// (0x000164d7) main_welc_pane_t1_ParamLimits

0x81c6,	// (0x000164d7) main_welc_pane_t1

0x83be,	// (0x000166cf) main_welc_body_row_pane_ParamLimits

0x83be,	// (0x000166cf) main_welc_body_row_pane

0x9989,	// (0x00017c9a) main_welc_opti_row_pane_ParamLimits

0x9989,	// (0x00017c9a) main_welc_opti_row_pane

0xeac0,	// (0x0001cdd1) main_welc_opti_row_pane_g1

0x83d3,	// (0x000166e4) main_welc_opti_row_pane_t1

0xeac8,	// (0x0001cdd9) main_welc_body_row_pane_t1

0xe76f,	// (0x0001ca80) popup_notif_wgt_heading_pane

0xe789,	// (0x0001ca9a) aid_size_list_notif_wgt_del_ParamLimits

0xe796,	// (0x0001caa7) list_notif_wgt_row_pane_g1_ParamLimits

0xe7a2,	// (0x0001cab3) list_notif_wgt_row_pane_g2_ParamLimits

0xe7b1,	// (0x0001cac2) list_notif_wgt_row_pane_g3_ParamLimits

0xfd61,	// (0x0001e072) list_notif_wgt_row_pane_g_ParamLimits

0xe7be,	// (0x0001cacf) list_notif_wgt_row_pane_t1_ParamLimits

0xe7d4,	// (0x0001cae5) list_notif_wgt_row_pane_t2_ParamLimits

0xe7e6,	// (0x0001caf7) list_notif_wgt_row_pane_t3_ParamLimits

0xfd68,	// (0x0001e079) list_notif_wgt_row_pane_t_ParamLimits

0x7ac2,	// (0x00015dd3) listrow_wgtman_pane_g1_ParamLimits

0x7acf,	// (0x00015de0) listrow_wgtman_pane_g2_ParamLimits

0xfd98,	// (0x0001e0a9) listrow_wgtman_pane_g_ParamLimits

0x7aed,	// (0x00015dfe) listrow_wgtman_pane_t1_ParamLimits

0x7b05,	// (0x00015e16) listrow_wgtman_pane_t2_ParamLimits

0xfd9d,	// (0x0001e0ae) listrow_wgtman_pane_t_ParamLimits

0x7b2b,	// (0x00015e3c) wait_bar_pane_cp09_ParamLimits

0x9231,	// (0x00017542) bg_popup_heading_pane_cp02

0xead7,	// (0x0001cde8) popup_notif_wgt_heading_pane_g1

0xeadf,	// (0x0001cdf0) popup_notif_wgt_heading_pane_t1

0x9231,	// (0x00017542) main_vids_pane

0x9231,	// (0x00017542) vids_listscroll_pane

0x83e2,	// (0x000166f3) scroll_pane_cp040

0x9231,	// (0x00017542) vids_list_pane

0x83ed,	// (0x000166fe) vids_list_double_pane_ParamLimits

0x83ed,	// (0x000166fe) vids_list_double_pane

0x83fe,	// (0x0001670f) vids_list_double_pane_g1

0x8407,	// (0x00016718) vids_list_double_pane_t1

0x8416,	// (0x00016727) vids_list_double_pane_t2

0x0001,

0xfe36,	// (0x0001e147) vids_list_double_pane_t

0x92a0,	// (0x000175b1) main_ncimui_pane_ParamLimits

0x670c,	// (0x00014a1d) main_ncimui_pane_g1_ParamLimits

0x6718,	// (0x00014a29) main_ncimui_pane_g2_ParamLimits

0x6718,	// (0x00014a29) main_ncimui_pane_g2

0x0001,

0xfb1b,	// (0x0001de2c) main_ncimui_pane_g_ParamLimits

0xfb1b,	// (0x0001de2c) main_ncimui_pane_g

0x816a,	// (0x0001647b) main_welc_pane_g1_ParamLimits

0x816a,	// (0x0001647b) main_welc_pane_g1

0x817f,	// (0x00016490) main_welc_pane_g2_ParamLimits

0x817f,	// (0x00016490) main_welc_pane_g2

0x0003,

0xfe20,	// (0x0001e131) main_welc_pane_g_ParamLimits

0xfe20,	// (0x0001e131) main_welc_pane_g

0x991c,	// (0x00017c2d) listscroll_mce_pane_ParamLimits

0xa728,	// (0x00018a39) wait_bar_pane_cp10

0xba83,	// (0x00019d94) main_cale_day_pane_ParamLimits

0xba83,	// (0x00019d94) main_cale_week_pane_ParamLimits

0x991c,	// (0x00017c2d) main_messa_pane_ParamLimits

0x426e,	// (0x0001257f) main_clock2_btn_pane_ParamLimits

0x426e,	// (0x0001257f) main_clock2_btn_pane

0xc39e,	// (0x0001a6af) main_clock2_btn_pane_cp01_ParamLimits

0xc39e,	// (0x0001a6af) main_clock2_btn_pane_cp01

0xe27f,	// (0x0001c590) list_cale_mrui_pane_ParamLimits

0xe81c,	// (0x0001cb2d) main_cf0_pane_g2

0x0001,

0xfd6f,	// (0x0001e080) main_cf0_pane_g

0x7d18,	// (0x00016029) area_left_week_number_pane_ParamLimits

0x7d24,	// (0x00016035) area_top_day_name_pane_ParamLimits

0x7d37,	// (0x00016048) frame_month_view_pane_ParamLimits

0xe971,	// (0x0001cc82) grid_month_view_pane_ParamLimits

0xe97f,	// (0x0001cc90) frm_month_g1_ParamLimits

0x7db8,	// (0x000160c9) frm_month_g2_ParamLimits

0x7dcb,	// (0x000160dc) frm_month_g3_ParamLimits

0x7dde,	// (0x000160ef) frm_month_g4_ParamLimits

0x7df1,	// (0x00016102) frm_month_g5_ParamLimits

0x7e04,	// (0x00016115) frm_month_g6_ParamLimits

0x7e17,	// (0x00016128) frm_month_g7_ParamLimits

0xe98c,	// (0x0001cc9d) frm_month_g8_ParamLimits

0x7e2a,	// (0x0001613b) frm_month_g9_ParamLimits

0x7e3a,	// (0x0001614b) frm_month_g10_ParamLimits

0x7e4a,	// (0x0001615b) frm_month_g11_ParamLimits

0x7e5a,	// (0x0001616b) frm_month_g12_ParamLimits

0x7e6c,	// (0x0001617d) frm_month_g13_ParamLimits

0x7e7e,	// (0x0001618f) frm_month_g14_ParamLimits

0x7e92,	// (0x000161a3) frm_month_g15_ParamLimits

0x7ea6,	// (0x000161b7) frm_month_g16_ParamLimits

0xfdc7,	// (0x0001e0d8) frm_month_g_ParamLimits

0xe999,	// (0x0001ccaa) cell_top_day_name_pane_t1_ParamLimits

0x7eba,	// (0x000161cb) cell_area_left_week_number_pane_g1_ParamLimits

0x7ec6,	// (0x000161d7) cell_area_left_week_number_pane_t1_ParamLimits

0x9997,	// (0x00017ca8) cell_month_view_pane_g1_ParamLimits

0x7ed9,	// (0x000161ea) cell_month_view_pane_t1_ParamLimits

0x9914,	// (0x00017c25) main_clock2_btn_pane_g1

0xeaed,	// (0x0001cdfe) main_clock2_btn_pane_t1

0x92a0,	// (0x000175b1) listscroll_cmail_pane_ParamLimits

0xde80,	// (0x0001c191) main_sp_fs_email_pane_g1_ParamLimits

0xde8c,	// (0x0001c19d) main_sp_fs_email_pane_g2_ParamLimits

0xfc15,	// (0x0001df26) main_sp_fs_email_pane_g_ParamLimits

0xe469,	// (0x0001c77a) list_recal_day_pane_ParamLimits

0xe47a,	// (0x0001c78b) mian_recal_day_pane_t1

0x6f53,	// (0x00015264) list_single_dyc_row_text_pane_t4_ParamLimits

0x6f53,	// (0x00015264) list_single_dyc_row_text_pane_t4

0x6f9c,	// (0x000152ad) list_single_dyc_row_text_pane_t5_ParamLimits

0x6f9c,	// (0x000152ad) list_single_dyc_row_text_pane_t5

0xdf2e,	// (0x0001c23f) list_single_dyc_row_text_pane_t6_ParamLimits

0xdf2e,	// (0x0001c23f) list_single_dyc_row_text_pane_t6

0x241b,	// (0x0001072c) aid_mgn_list_cale_time_pane

0x92a0,	// (0x000175b1) main_gallery2_pane_ParamLimits

0xc3b4,	// (0x0001a6c5) main_clock2_pane_cp01_t1

0xc3c2,	// (0x0001a6d3) main_clock2_pane_cp01_t3

0x0001,

0xf705,	// (0x0001da16) main_clock2_pane_cp01_t

0x10d3,	// (0x0000f3e4) cale_week_scroll_pane_g16_ParamLimits

0x10d3,	// (0x0000f3e4) cale_week_scroll_pane_g16

0x9c8a,	// (0x00017f9b) vorec_slider_pane

0xea69,	// (0x0001cd7a) vidtel_button_pane_t1_ParamLimits

0x7639,	// (0x0001594a) main_fs_bigclock_clock_pane_g1_ParamLimits

0x7639,	// (0x0001594a) main_fs_bigclock_clock_pane_g2_ParamLimits

0x764a,	// (0x0001595b) main_fs_bigclock_clock_pane_g3_ParamLimits

0x764a,	// (0x0001595b) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfd1d,	// (0x0001e02e) main_fs_bigclock_clock_pane_g_ParamLimits

0x765d,	// (0x0001596e) main_fs_bigclock_clock_pane_t1_ParamLimits

0x7673,	// (0x00015984) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfd26,	// (0x0001e037) main_fs_bigclock_clock_pane_t_ParamLimits

0x3b4a,	// (0x00011e5b) main_mup3_lyrics_pane_ParamLimits

0x3b4a,	// (0x00011e5b) main_mup3_lyrics_pane

0x843e,	// (0x0001674f) main_mup3_lyrics_pane_t1_ParamLimits

0x843e,	// (0x0001674f) main_mup3_lyrics_pane_t1

0xc736,	// (0x0001aa47) aid_main_mp4_pane_t1_area

0xc740,	// (0x0001aa51) aid_main_mp4_pane_t2_area

0xc7ea,	// (0x0001aafb) main_mp4_pane_g7_ParamLimits

0xc7ea,	// (0x0001aafb) main_mp4_pane_g7

0xc7f6,	// (0x0001ab07) main_mp4_pane_g8_ParamLimits

0xc7f6,	// (0x0001ab07) main_mp4_pane_g8

0x4b73,	// (0x00012e84) aid_call6_pane_g1_size

0x806c,	// (0x0001637d) list_double_large_graphic_phob2_other_pane_ParamLimits

0x806c,	// (0x0001637d) list_double_large_graphic_phob2_other_pane

0xa504,	// (0x00018815) list_double_large_graphic_phob2_other_pane_g1

0x9231,	// (0x00017542) list_highlight_pane_cp026

0x92a0,	// (0x000175b1) main_welc_pane_ParamLimits

0x6d88,	// (0x00015099) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0x6d88,	// (0x00015099) main_sp_fs_ctrlbar_pane_g3

0x6da2,	// (0x000150b3) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0x6da2,	// (0x000150b3) main_sp_fs_ctrlbar_pane_g4

0x6dd6,	// (0x000150e7) toolbar2_fixed_button_pane_cp01

0x6de1,	// (0x000150f2) toolbar2_fixed_button_pane_cp02

0x6dee,	// (0x000150ff) toolbar2_fixed_button_pane_cp03

0x8118,	// (0x00016429) list_welc_entry_pane_ParamLimits

0x8118,	// (0x00016429) list_welc_entry_pane

0x8194,	// (0x000164a5) main_welc_pane_g3_ParamLimits

0x8194,	// (0x000164a5) main_welc_pane_g3

0x81e4,	// (0x000164f5) main_welc_pane_t2_ParamLimits

0x81e4,	// (0x000164f5) main_welc_pane_t2

0x81ff,	// (0x00016510) main_welc_pane_t3_ParamLimits

0x81ff,	// (0x00016510) main_welc_pane_t3

0x0005,

0xfe29,	// (0x0001e13a) main_welc_pane_t_ParamLimits

0xfe29,	// (0x0001e13a) main_welc_pane_t

0x832f,	// (0x00016640) welc_button_pane_ParamLimits

0x832f,	// (0x00016640) welc_button_pane

0x83a9,	// (0x000166ba) welc_service_logo_pane_ParamLimits

0x83a9,	// (0x000166ba) welc_service_logo_pane

0x845a,	// (0x0001676b) list_single_welc_entry_pane_ParamLimits

0x845a,	// (0x0001676b) list_single_welc_entry_pane

0x846b,	// (0x0001677c) list_single_welc_entry_pane_g1

0x8473,	// (0x00016784) list_single_welc_entry_pane_t1

0x8481,	// (0x00016792) list_single_welc_entry_pane_t2

0x0001,

0xfe3b,	// (0x0001e14c) list_single_welc_entry_pane_t

0x9231,	// (0x00017542) bg_button_pane_cp035

0x848f,	// (0x000167a0) welc_button_pane_t1

0xeb09,	// (0x0001ce1a) welc_service_logo_pane_g1

0xeb12,	// (0x0001ce23) welc_service_logo_pane_g2

0x0001,

0xfe40,	// (0x0001e151) welc_service_logo_pane_g

0x9231,	// (0x00017542) main_int_radio_pane

0xd7f2,	// (0x0001bb03) list_single_fs_dyc_pane_g1

0x7f9c,	// (0x000162ad) list_double_large_graphic_phob2_pane_g3_ParamLimits

0x7f9c,	// (0x000162ad) list_double_large_graphic_phob2_pane_g3

0x7fa8,	// (0x000162b9) list_double_large_graphic_phob2_pane_g4_ParamLimits

0x7fa8,	// (0x000162b9) list_double_large_graphic_phob2_pane_g4

0x849d,	// (0x000167ae) main_int_radio1_pane_ParamLimits

0x849d,	// (0x000167ae) main_int_radio1_pane

0xeb1b,	// (0x0001ce2c) find_pane_cp02

0x84ba,	// (0x000167cb) input_focus_pane_cp12_ParamLimits

0x84ba,	// (0x000167cb) input_focus_pane_cp12

0x84ca,	// (0x000167db) input_focus_pane_cp13_ParamLimits

0x84ca,	// (0x000167db) input_focus_pane_cp13

0x84de,	// (0x000167ef) input_focus_pane_cp14_ParamLimits

0x84de,	// (0x000167ef) input_focus_pane_cp14

0xeb24,	// (0x0001ce35) int_radio1_listscroll_pane

0x84f2,	// (0x00016803) main_int_radio1_pane_g1_ParamLimits

0x84f2,	// (0x00016803) main_int_radio1_pane_g1

0x850a,	// (0x0001681b) main_int_radio1_pane_t1_ParamLimits

0x850a,	// (0x0001681b) main_int_radio1_pane_t1

0x8525,	// (0x00016836) main_int_radio1_pane_t2_ParamLimits

0x8525,	// (0x00016836) main_int_radio1_pane_t2

0x8540,	// (0x00016851) main_int_radio1_pane_t3_ParamLimits

0x8540,	// (0x00016851) main_int_radio1_pane_t3

0x855b,	// (0x0001686c) main_int_radio1_pane_t4_ParamLimits

0x855b,	// (0x0001686c) main_int_radio1_pane_t4

0xeb2e,	// (0x0001ce3f) main_int_radio1_pane_t5_ParamLimits

0xeb2e,	// (0x0001ce3f) main_int_radio1_pane_t5

0x856d,	// (0x0001687e) main_int_radio1_pane_t6_ParamLimits

0x856d,	// (0x0001687e) main_int_radio1_pane_t6

0x8582,	// (0x00016893) main_int_radio1_pane_t7_ParamLimits

0x8582,	// (0x00016893) main_int_radio1_pane_t7

0x8597,	// (0x000168a8) main_int_radio1_pane_t8_ParamLimits

0x8597,	// (0x000168a8) main_int_radio1_pane_t8

0x85b6,	// (0x000168c7) main_int_radio1_pane_t9_ParamLimits

0x85b6,	// (0x000168c7) main_int_radio1_pane_t9

0x85c8,	// (0x000168d9) main_int_radio1_pane_t10_ParamLimits

0x85c8,	// (0x000168d9) main_int_radio1_pane_t10

0x85ee,	// (0x000168ff) main_int_radio1_pane_t11_ParamLimits

0x85ee,	// (0x000168ff) main_int_radio1_pane_t11

0x8614,	// (0x00016925) main_int_radio1_pane_t12_ParamLimits

0x8614,	// (0x00016925) main_int_radio1_pane_t12

0x000b,

0xfe45,	// (0x0001e156) main_int_radio1_pane_t_ParamLimits

0xfe45,	// (0x0001e156) main_int_radio1_pane_t

0xeb40,	// (0x0001ce51) int_radio_list_pane

0xe44c,	// (0x0001c75d) scroll_pane_cp037

0xeb48,	// (0x0001ce59) list_double_large_graphic_int_radio_pane_ParamLimits

0xeb48,	// (0x0001ce59) list_double_large_graphic_int_radio_pane

0xeb61,	// (0x0001ce72) list_double_large_graphic_int_radio_pane_g1

0xeb6a,	// (0x0001ce7b) list_double_large_graphic_int_radio_pane_t1

0xeb78,	// (0x0001ce89) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfe5e,	// (0x0001e16f) list_double_large_graphic_int_radio_pane_t

0x9231,	// (0x00017542) list_highlight_pane_cp027

0xeab0,	// (0x0001cdc1) main_button_pane_4

0x81a7,	// (0x000164b8) main_welc_pane_g4_ParamLimits

0x81a7,	// (0x000164b8) main_welc_pane_g4

0x8218,	// (0x00016529) main_welc_pane_t4_ParamLimits

0x8218,	// (0x00016529) main_welc_pane_t4

0x822f,	// (0x00016540) main_welc_pane_t5_ParamLimits

0x822f,	// (0x00016540) main_welc_pane_t5

0x826c,	// (0x0001657d) main_welc_pane_t6_ParamLimits

0x826c,	// (0x0001657d) main_welc_pane_t6

0x8346,	// (0x00016657) welc_button_pane_2_ParamLimits

0x8346,	// (0x00016657) welc_button_pane_2

0x8362,	// (0x00016673) welc_button_pane_3_ParamLimits

0x8362,	// (0x00016673) welc_button_pane_3

0xeab8,	// (0x0001cdc9) welc_button_pane_4

0x8381,	// (0x00016692) welc_button_pane_5_ParamLimits

0x8381,	// (0x00016692) welc_button_pane_5

0x09f0,	// (0x0000ed01) main_popup_welc_pane

0xeb9e,	// (0x0001ceaf) main_welc_sk_g3

0xeba8,	// (0x0001ceb9) main_welc_sk_g4

0xebb2,	// (0x0001cec3) main_welc_sk_t3

0xebc2,	// (0x0001ced3) main_welc_sk_t4

0xebd2,	// (0x0001cee3) popup_welc_pane_t4

0xebe0,	// (0x0001cef1) popup_welc_pane_t5

0xebee,	// (0x0001ceff) popup_welc_pane_t6

0x9231,	// (0x00017542) main_acti_pane

0x9231,	// (0x00017542) main_sso_pane

0x8626,	// (0x00016937) sso_body_pane_ParamLimits

0x8626,	// (0x00016937) sso_body_pane

0x863a,	// (0x0001694b) sso_logo_pane_ParamLimits

0x863a,	// (0x0001694b) sso_logo_pane

0x8673,	// (0x00016984) sso_sk_pane_ParamLimits

0x8673,	// (0x00016984) sso_sk_pane

0xec2c,	// (0x0001cf3d) main_sso_logo_pane_g1

0x8685,	// (0x00016996) sso_sk_pane_t1_ParamLimits

0x8685,	// (0x00016996) sso_sk_pane_t1

0x869f,	// (0x000169b0) sso_sk_pane_t2_ParamLimits

0x869f,	// (0x000169b0) sso_sk_pane_t2

0x0001,

0xfe63,	// (0x0001e174) sso_sk_pane_t_ParamLimits

0xfe63,	// (0x0001e174) sso_sk_pane_t

0xec37,	// (0x0001cf48) aid_sso_gap

0xec40,	// (0x0001cf51) aid_sso_txt1

0xec4a,	// (0x0001cf5b) aid_sso_txt2

0xec54,	// (0x0001cf65) aid_sso_txt3

0x0002,

0xfe68,	// (0x0001e179) aid_sso_txt

0xec5e,	// (0x0001cf6f) aid_sso_widget

0x8709,	// (0x00016a1a) sso_btn_pane_ParamLimits

0x8709,	// (0x00016a1a) sso_btn_pane

0x878d,	// (0x00016a9e) sso_option_pane_ParamLimits

0x878d,	// (0x00016a9e) sso_option_pane

0x8843,	// (0x00016b54) sso_query_pane_ParamLimits

0x8843,	// (0x00016b54) sso_query_pane

0x8899,	// (0x00016baa) sso_query_pane_cp01_ParamLimits

0x8899,	// (0x00016baa) sso_query_pane_cp01

0x88f3,	// (0x00016c04) sso_t_hdr_pane_ParamLimits

0x88f3,	// (0x00016c04) sso_t_hdr_pane

0x891d,	// (0x00016c2e) sso_t_nml_pane_ParamLimits

0x891d,	// (0x00016c2e) sso_t_nml_pane

0xec68,	// (0x0001cf79) sso_t_sub_pane

0x8647,	// (0x00016958) sso_popup_window_ParamLimits

0x8647,	// (0x00016958) sso_popup_window

0x86b5,	// (0x000169c6) sso_apps_pane_ParamLimits

0x86b5,	// (0x000169c6) sso_apps_pane

0x86df,	// (0x000169f0) sso_body_pane_g1

0x86e9,	// (0x000169fa) sso_body_pane_t1

0x86f9,	// (0x00016a0a) sso_body_pane_t2

0x0001,

0xfe6f,	// (0x0001e180) sso_body_pane_t

0x8755,	// (0x00016a66) sso_btn_pane_cp01_ParamLimits

0x8755,	// (0x00016a66) sso_btn_pane_cp01

0x8817,	// (0x00016b28) sso_prog_pane_ParamLimits

0x8817,	// (0x00016b28) sso_prog_pane

0x8973,	// (0x00016c84) sso_t_hdr_pane_t1_ParamLimits

0x8973,	// (0x00016c84) sso_t_hdr_pane_t1

0xec7d,	// (0x0001cf8e) input_focus_pane_cp10_ParamLimits

0xec7d,	// (0x0001cf8e) input_focus_pane_cp10

0xec91,	// (0x0001cfa2) sso_query_pane_t1_ParamLimits

0xec91,	// (0x0001cfa2) sso_query_pane_t1

0xeca4,	// (0x0001cfb5) sso_query_pane_t2_ParamLimits

0xeca4,	// (0x0001cfb5) sso_query_pane_t2

0xecbd,	// (0x0001cfce) sso_query_pane_t3_ParamLimits

0xecbd,	// (0x0001cfce) sso_query_pane_t3

0xece7,	// (0x0001cff8) sso_query_pane_t4_ParamLimits

0xece7,	// (0x0001cff8) sso_query_pane_t4

0x0003,

0xfe74,	// (0x0001e185) sso_query_pane_t_ParamLimits

0xfe74,	// (0x0001e185) sso_query_pane_t

0xeb95,	// (0x0001cea6) bg_button_pane_cp22

0xeb86,	// (0x0001ce97) sso_btn_pane_t1

0x8986,	// (0x00016c97) sso_t_nml_pane_t1_ParamLimits

0x8986,	// (0x00016c97) sso_t_nml_pane_t1

0xed0b,	// (0x0001d01c) sso_option_row_pane_ParamLimits

0xed0b,	// (0x0001d01c) sso_option_row_pane

0xed18,	// (0x0001d029) sso_t_sub_pane_t1_ParamLimits

0xed18,	// (0x0001d029) sso_t_sub_pane_t1

0x92a0,	// (0x000175b1) bg_popup_window_pane_cp11_ParamLimits

0x92a0,	// (0x000175b1) bg_popup_window_pane_cp11

0xed35,	// (0x0001d046) popup_sk_window_cp01_ParamLimits

0xed35,	// (0x0001d046) popup_sk_window_cp01

0xed42,	// (0x0001d053) sso_popup_body_pane_ParamLimits

0xed42,	// (0x0001d053) sso_popup_body_pane

0xed4f,	// (0x0001d060) scroll_pane_cp21_ParamLimits

0xed4f,	// (0x0001d060) scroll_pane_cp21

0xed5c,	// (0x0001d06d) sso_popup_body_t_pane_ParamLimits

0xed5c,	// (0x0001d06d) sso_popup_body_t_pane

0xed69,	// (0x0001d07a) sso_popup_body_t_hdr_pane_ParamLimits

0xed69,	// (0x0001d07a) sso_popup_body_t_hdr_pane

0x89a1,	// (0x00016cb2) sso_popup_body_t_nml_pane_ParamLimits

0x89a1,	// (0x00016cb2) sso_popup_body_t_nml_pane

0x89c8,	// (0x00016cd9) sso_popup_body_t_sub_pane_ParamLimits

0x89c8,	// (0x00016cd9) sso_popup_body_t_sub_pane

0xed7b,	// (0x0001d08c) sso_popup_body_t_hdr_pane_t1

0x89eb,	// (0x00016cfc) sso_popup_body_t_nml_pane_t1_ParamLimits

0x89eb,	// (0x00016cfc) sso_popup_body_t_nml_pane_t1

0xed8b,	// (0x0001d09c) sso_popup_body_t_sub_pane_t1_ParamLimits

0xed8b,	// (0x0001d09c) sso_popup_body_t_sub_pane_t1

0x99dd,	// (0x00017cee) sso_prog_pane_g1

0x8a24,	// (0x00016d35) sso_apps_pane_comp1_ParamLimits

0x8a24,	// (0x00016d35) sso_apps_pane_comp1

0xedb0,	// (0x0001d0c1) sso_apps_pane_comp1_g1

0xedb8,	// (0x0001d0c9) sso_apps_pane_comp1_t1

0xedd4,	// (0x0001d0e5) sso_option_row_pane_g1

0xeddc,	// (0x0001d0ed) sso_option_row_pane_t1

0xe014,	// (0x0001c325) list_cmail_pane_ParamLimits

0x9231,	// (0x00017542) main_call7_pane

0x8105,	// (0x00016416) bg_welc_area_ParamLimits

0x8105,	// (0x00016416) bg_welc_area

0x82aa,	// (0x000165bb) sso_t_hdr_pane_a_t1_ParamLimits

0x82aa,	// (0x000165bb) sso_t_hdr_pane_a_t1

0x82c5,	// (0x000165d6) sso_t_nml_pane_a_t1_ParamLimits

0x82c5,	// (0x000165d6) sso_t_nml_pane_a_t1

0x82f4,	// (0x00016605) sso_t_sub_pane_a_t1_ParamLimits

0x82f4,	// (0x00016605) sso_t_sub_pane_a_t1

0x8397,	// (0x000166a8) welc_button_pane_cp01_ParamLimits

0x8397,	// (0x000166a8) welc_button_pane_cp01

0xeb86,	// (0x0001ce97) sso_btn_pane_t1_copy1

0xeb95,	// (0x0001cea6) welc_button_pane_2_comp1

0xebfc,	// (0x0001cf0d) sso_t_hdr_pane_p_t1

0xec0c,	// (0x0001cf1d) sso_t_nml_pane_p_t1

0xec1c,	// (0x0001cf2d) sso_t_sub_pane_p_t1

0x9231,	// (0x00017542) main_att_pane

0x9231,	// (0x00017542) main_vod_pane

0xec68,	// (0x0001cf79) sso_t_sub_pane_ParamLimits

0xedc6,	// (0x0001d0d7) input_focus_pane_cp10_t1

0xeddc,	// (0x0001d0ed) sso_option_row_pane_t1_ParamLimits

0x8a3e,	// (0x00016d4f) main_att_body_pane_ParamLimits

0x8a3e,	// (0x00016d4f) main_att_body_pane

0x8a54,	// (0x00016d65) att_btn_emg_pane_ParamLimits

0x8a54,	// (0x00016d65) att_btn_emg_pane

0x8a73,	// (0x00016d84) att_btn_pane_ParamLimits

0x8a73,	// (0x00016d84) att_btn_pane

0x8ae4,	// (0x00016df5) att_btn_pane_cp01_ParamLimits

0x8ae4,	// (0x00016df5) att_btn_pane_cp01

0x8b04,	// (0x00016e15) att_li_srv_pane_ParamLimits

0x8b04,	// (0x00016e15) att_li_srv_pane

0x8b21,	// (0x00016e32) att_opt_pane_ParamLimits

0x8b21,	// (0x00016e32) att_opt_pane

0x8b6b,	// (0x00016e7c) att_query_pane_ParamLimits

0x8b6b,	// (0x00016e7c) att_query_pane

0x8be4,	// (0x00016ef5) att_query_pane_cp01_ParamLimits

0x8be4,	// (0x00016ef5) att_query_pane_cp01

0x8c30,	// (0x00016f41) att_t_hdr_pane_ParamLimits

0x8c30,	// (0x00016f41) att_t_hdr_pane

0x8c9c,	// (0x00016fad) att_t_nml_pane_ParamLimits

0x8c9c,	// (0x00016fad) att_t_nml_pane

0x8d0c,	// (0x0001701d) att_t_nml_pane_cp01_ParamLimits

0x8d0c,	// (0x0001701d) att_t_nml_pane_cp01

0x8d38,	// (0x00017049) att_t_nmlb_pane_ParamLimits

0x8d38,	// (0x00017049) att_t_nmlb_pane

0x8da5,	// (0x000170b6) att_term_pane_ParamLimits

0x8da5,	// (0x000170b6) att_term_pane

0x8def,	// (0x00017100) main_att_body_pane_g1_ParamLimits

0x8def,	// (0x00017100) main_att_body_pane_g1

0xedf5,	// (0x0001d106) att_t_hdr_pane_t1_ParamLimits

0xedf5,	// (0x0001d106) att_t_hdr_pane_t1

0xee0e,	// (0x0001d11f) att_t_nml_pane_t1_ParamLimits

0xee0e,	// (0x0001d11f) att_t_nml_pane_t1

0xee33,	// (0x0001d144) att_btn_pane_t1

0xeb95,	// (0x0001cea6) bg_button_pane_cp23

0x8e1b,	// (0x0001712c) att_li_srv_row_pane_ParamLimits

0x8e1b,	// (0x0001712c) att_li_srv_row_pane

0xee43,	// (0x0001d154) att_t_nmlb_pane_t1_ParamLimits

0xee43,	// (0x0001d154) att_t_nmlb_pane_t1

0xee61,	// (0x0001d172) att_query_pane_t1

0xee70,	// (0x0001d181) att_query_pane_t2

0xee7f,	// (0x0001d190) att_query_pane_t3

0x0002,

0xfe7d,	// (0x0001e18e) att_query_pane_t

0xee8e,	// (0x0001d19f) input_focus_pane_cp11

0xee97,	// (0x0001d1a8) att_term_pane_t1_ParamLimits

0xee97,	// (0x0001d1a8) att_term_pane_t1

0x9231,	// (0x00017542) att_opt_row_pane

0xedd4,	// (0x0001d0e5) att_opt_row_pane_g1

0xeeb4,	// (0x0001d1c5) att_opt_row_pane_t1_ParamLimits

0xeeb4,	// (0x0001d1c5) att_opt_row_pane_t1

0x8e2b,	// (0x0001713c) att_li_srv_row_pane_g1

0x8e33,	// (0x00017144) att_li_srv_row_pane_t1_ParamLimits

0x8e33,	// (0x00017144) att_li_srv_row_pane_t1

0x8e48,	// (0x00017159) att_li_srv_row_pane_t2_ParamLimits

0x8e48,	// (0x00017159) att_li_srv_row_pane_t2

0x0001,

0xfe84,	// (0x0001e195) att_li_srv_row_pane_t_ParamLimits

0xfe84,	// (0x0001e195) att_li_srv_row_pane_t

0xeecd,	// (0x0001d1de) att_btn_close_pane_g1

0x9231,	// (0x00017542) bg_button_pane_cp24

0x8e5d,	// (0x0001716e) main_vod_body_pane_ParamLimits

0x8e5d,	// (0x0001716e) main_vod_body_pane

0x8e71,	// (0x00017182) main_vod_body_pane_g1_ParamLimits

0x8e71,	// (0x00017182) main_vod_body_pane_g1

0x8ea5,	// (0x000171b6) scroll_pane_cp24_ParamLimits

0x8ea5,	// (0x000171b6) scroll_pane_cp24

0x8ef3,	// (0x00017204) vod_btn_pane_ParamLimits

0x8ef3,	// (0x00017204) vod_btn_pane

0x8f35,	// (0x00017246) vod_det_pane_ParamLimits

0x8f35,	// (0x00017246) vod_det_pane

0x8f65,	// (0x00017276) vod_logo_g1_ParamLimits

0x8f65,	// (0x00017276) vod_logo_g1

0x8fa3,	// (0x000172b4) vod_opt_pane_ParamLimits

0x8fa3,	// (0x000172b4) vod_opt_pane

0x8fd6,	// (0x000172e7) vod_opt_pane_cp01_ParamLimits

0x8fd6,	// (0x000172e7) vod_opt_pane_cp01

0x9002,	// (0x00017313) vod_query_pane_ParamLimits

0x9002,	// (0x00017313) vod_query_pane

0x902d,	// (0x0001733e) vod_query_pane_cp01_ParamLimits

0x902d,	// (0x0001733e) vod_query_pane_cp01

0x9039,	// (0x0001734a) vod_t_nml_pane_ParamLimits

0x9039,	// (0x0001734a) vod_t_nml_pane

0x90e2,	// (0x000173f3) vod_t_nml_pane_cp01_ParamLimits

0x90e2,	// (0x000173f3) vod_t_nml_pane_cp01

0x911e,	// (0x0001742f) vod_t_sub_pane_ParamLimits

0x911e,	// (0x0001742f) vod_t_sub_pane

0x914f,	// (0x00017460) vod_t_sub_pane_cp01_ParamLimits

0x914f,	// (0x00017460) vod_t_sub_pane_cp01

0xee8e,	// (0x0001d19f) vod_query_field_pane

0xeed5,	// (0x0001d1e6) vod_query_pane_t1

0xeb95,	// (0x0001cea6) bg_button_pane_cp25

0xeb86,	// (0x0001ce97) sso_btn_pane_t1_copy2

0x917b,	// (0x0001748c) vod_t_nml_pane_t1_ParamLimits

0x917b,	// (0x0001748c) vod_t_nml_pane_t1

0xeee4,	// (0x0001d1f5) vod_opt_row_pane_ParamLimits

0xeee4,	// (0x0001d1f5) vod_opt_row_pane

0xeef6,	// (0x0001d207) vod_t_sub_pane_t1_ParamLimits

0xeef6,	// (0x0001d207) vod_t_sub_pane_t1

0xef0f,	// (0x0001d220) vod_det_cell_pane_ParamLimits

0xef0f,	// (0x0001d220) vod_det_cell_pane

0x9231,	// (0x00017542) input_focus_pane_cp15

0xef20,	// (0x0001d231) vod_query_field_pane_t1

0xef2e,	// (0x0001d23f) vod_opt_row_pane_g1_ParamLimits

0xef2e,	// (0x0001d23f) vod_opt_row_pane_g1

0xef3a,	// (0x0001d24b) vod_opt_row_pane_t1_ParamLimits

0xef3a,	// (0x0001d24b) vod_opt_row_pane_t1

0xef59,	// (0x0001d26a) vod_det_cell_field_pane

0xef62,	// (0x0001d273) vod_det_cell_pane_g1

0xef6a,	// (0x0001d27b) vod_det_cell_pane_t1

0x9231,	// (0x00017542) input_focus_pane_cp16

0xef79,	// (0x0001d28a) vod_det_cell_field_pane_t1

0x797c,	// (0x00015c8d) call7_btn_grp_pane_ParamLimits

0x797c,	// (0x00015c8d) call7_btn_grp_pane

0x91aa,	// (0x000174bb) call7_bubble_pane_ParamLimits

0x91aa,	// (0x000174bb) call7_bubble_pane

0x91c1,	// (0x000174d2) cell_call7_btn_pane_ParamLimits

0x91c1,	// (0x000174d2) cell_call7_btn_pane

0x91d5,	// (0x000174e6) call7_pane_g1_ParamLimits

0x91d5,	// (0x000174e6) call7_pane_g1

0x91e4,	// (0x000174f5) call7_windows_conf_pane_ParamLimits

0x91e4,	// (0x000174f5) call7_windows_conf_pane

0x91fe,	// (0x0001750f) popup_call7_1st_window_ParamLimits

0x91fe,	// (0x0001750f) popup_call7_1st_window

0x920f,	// (0x00017520) popup_call7_2nd_window_ParamLimits

0x920f,	// (0x00017520) popup_call7_2nd_window

0x9220,	// (0x00017531) popup_call7_3rd_window_ParamLimits

0x9220,	// (0x00017531) popup_call7_3rd_window

0x9231,	// (0x00017542) bg_button_pane_cp26

0xe899,	// (0x0001cbaa) cell_call7_btn_pane_g1

0xe8a2,	// (0x0001cbb3) cell_call7_btn_pane_t1

0x9231,	// (0x00017542) bg_popup_window_pane_cp12

0xef87,	// (0x0001d298) popup_call7_1st_window_g1

0xef8f,	// (0x0001d2a0) popup_call7_1st_window_g2

0xef97,	// (0x0001d2a8) popup_call7_1st_window_g3

0x0002,

0xfe89,	// (0x0001e19a) popup_call7_1st_window_g

0xef9f,	// (0x0001d2b0) popup_call7_1st_window_t1

0xefae,	// (0x0001d2bf) popup_call7_1st_window_t2

0xefbc,	// (0x0001d2cd) popup_call7_1st_window_t3

0x0002,

0xfe90,	// (0x0001e1a1) popup_call7_1st_window_t

0x9231,	// (0x00017542) bg_popup_window_pane_cp13

0xefca,	// (0x0001d2db) popup_call7_2nd_window_g1

0xefd2,	// (0x0001d2e3) popup_call7_2nd_window_g2

0xefda,	// (0x0001d2eb) popup_call7_2nd_window_g3

0x0002,

0xfe97,	// (0x0001e1a8) popup_call7_2nd_window_g

0xefe2,	// (0x0001d2f3) popup_call7_2nd_window_t1

0x9231,	// (0x00017542) bg_popup_window_pane_cp14

0xeff1,	// (0x0001d302) call7_list_conf_pane

0xeff9,	// (0x0001d30a) call7_list_conf_row_pane_ParamLimits

0xeff9,	// (0x0001d30a) call7_list_conf_row_pane

0xf00c,	// (0x0001d31d) call7_list_conf_row_pane_g1

0xf014,	// (0x0001d325) call7_list_conf_row_pane_g2

0x0001,

0xfe9e,	// (0x0001e1af) call7_list_conf_row_pane_g

0xf01c,	// (0x0001d32d) call7_list_conf_row_pane_t1

0x9231,	// (0x00017542) list_highlight_pane_cp22

0x87e3,	// (0x00016af4) sso_option_pane_cp01_ParamLimits

0x87e3,	// (0x00016af4) sso_option_pane_cp01

0x991c,	// (0x00017c2d) msg_header_pane_ParamLimits

0xa8be,	// (0x00018bcf) bg_button_pane_cp01_ParamLimits

0xa8d2,	// (0x00018be3) input_focus_pane_cp07_ParamLimits

0x6e3f,	// (0x00015150) popup_email_progress_window

0x99dd,	// (0x00017cee) popup_email_progress_window_g1

0xf02a,	// (0x0001d33b) popup_email_progress_window_g2

0x0001,

0xfea3,	// (0x0001e1b4) popup_email_progress_window_g

0xf032,	// (0x0001d343) popup_email_progress_window_t1
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

} // end of namespace AknLayoutScalable_Elaf_pnl4_apps_nhd4_lsc_tch_Normal
