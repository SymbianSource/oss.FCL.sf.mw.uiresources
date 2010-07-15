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

#include "aknlayoutscalable_abrw_phl_apps_qhd_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch[]; }

namespace AknLayoutScalable_Abrw_phl_apps_qhd_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x0006c46b };

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
0x00bc,	// (0x0006c527) Screen

0x00c8,	// (0x0006c533) application_window

0x0114,	// (0x0006c57f) area_bottom_pane_ParamLimits

0x0114,	// (0x0006c57f) area_bottom_pane

0x014d,	// (0x0006c5b8) area_top_pane_ParamLimits

0x014d,	// (0x0006c5b8) area_top_pane

0x94d5,	// (0x00075940) call_video_uplink_pane_ParamLimits

0x94d5,	// (0x00075940) call_video_uplink_pane

0x01db,	// (0x0006c646) main_pane_ParamLimits

0x01db,	// (0x0006c646) main_pane

0xc90e,	// (0x00078d79) context_pane

0x3714,	// (0x0006fb7f) navi_pane

0x3746,	// (0x0006fbb1) popup_cale_events_window_ParamLimits

0x3746,	// (0x0006fbb1) popup_cale_events_window

0xc921,	// (0x00078d8c) popup_mup_playback_window

0x375e,	// (0x0006fbc9) signal_pane

0xa3db,	// (0x00076846) main_browser_pane

0xa5a9,	// (0x00076a14) main_burst_pane

0x3462,	// (0x0006f8cd) main_calc_pane

0xc8f4,	// (0x00078d5f) main_cale_day_pane

0x3476,	// (0x0006f8e1) main_cale_month_pane

0xc8f4,	// (0x00078d5f) main_cale_week_pane

0xa5a9,	// (0x00076a14) main_call_pane

0xa0bb,	// (0x00076526) main_call_poc_pane

0xa5a9,	// (0x00076a14) main_camera_pane

0xa5a9,	// (0x00076a14) main_chi_dic_pane

0xb273,	// (0x000776de) main_clock_pane

0xa0bb,	// (0x00076526) main_fmradio_pane

0xa5a9,	// (0x00076a14) main_graph_messa_pane

0xa0bb,	// (0x00076526) main_help_pane

0xa3db,	// (0x00076846) main_im_pane

0xa316,	// (0x00076781) main_image_pane_ParamLimits

0xa316,	// (0x00076781) main_image_pane

0xa0bb,	// (0x00076526) main_location2_pane

0xa5a9,	// (0x00076a14) main_location_pane

0xa316,	// (0x00076781) main_messa_pane

0xa0bb,	// (0x00076526) main_mp2_pane

0xa5a9,	// (0x00076a14) main_mp_pane

0xa0bb,	// (0x00076526) main_msg_pane

0xa0bb,	// (0x00076526) main_mup_eq_pane

0xa0bb,	// (0x00076526) main_mup_pane

0xa3db,	// (0x00076846) main_notes_pane

0xa0bb,	// (0x00076526) main_pec_pane

0xa0bb,	// (0x00076526) main_phob_pane

0xa0bb,	// (0x00076526) main_pinb_pane

0xa0bb,	// (0x00076526) main_postcard_pane

0xa0bb,	// (0x00076526) main_qdial_pane

0xa5a9,	// (0x00076a14) main_skin_pane

0xa0bb,	// (0x00076526) main_smil2_pane

0xa5a9,	// (0x00076a14) main_smil_pane

0xa5a9,	// (0x00076a14) main_video_pane

0xa5a9,	// (0x00076a14) main_video_tele_pane

0xa316,	// (0x00076781) main_viewer_pane_ParamLimits

0xa316,	// (0x00076781) main_viewer_pane

0xa5a9,	// (0x00076a14) main_vorec_pane

0x34c8,	// (0x0006f933) popup_blid_sat_info_window_ParamLimits

0x34c8,	// (0x0006f933) popup_blid_sat_info_window

0x3520,	// (0x0006f98b) popup_dyc_status_message_window_ParamLimits

0x3520,	// (0x0006f98b) popup_dyc_status_message_window

0x353a,	// (0x0006f9a5) popup_grid_large_graphic_window_ParamLimits

0x353a,	// (0x0006f9a5) popup_grid_large_graphic_window

0x35f6,	// (0x0006fa61) popup_loc_request_window_ParamLimits

0x35f6,	// (0x0006fa61) popup_loc_request_window

0x36ec,	// (0x0006fb57) popup_wml_address_window_ParamLimits

0x36ec,	// (0x0006fb57) popup_wml_address_window

0x329c,	// (0x0006f707) call_muted_g1

0x2f51,	// (0x0006f3bc) popup_call_audio_conf_window_ParamLimits

0x2f51,	// (0x0006f3bc) popup_call_audio_conf_window

0x32b0,	// (0x0006f71b) popup_call_audio_first_window_ParamLimits

0x32b0,	// (0x0006f71b) popup_call_audio_first_window

0x3326,	// (0x0006f791) popup_call_audio_in_window_ParamLimits

0x3326,	// (0x0006f791) popup_call_audio_in_window

0x3362,	// (0x0006f7cd) popup_call_audio_out_window_ParamLimits

0x3362,	// (0x0006f7cd) popup_call_audio_out_window

0x339c,	// (0x0006f807) popup_call_audio_second_window_ParamLimits

0x339c,	// (0x0006f807) popup_call_audio_second_window

0x33f2,	// (0x0006f85d) popup_call_audio_wait_window_ParamLimits

0x33f2,	// (0x0006f85d) popup_call_audio_wait_window

0x3427,	// (0x0006f892) popup_number_entry_window_ParamLimits

0x3427,	// (0x0006f892) popup_number_entry_window

0x950b,	// (0x00075976) bg_popup_call_pane_cp05_ParamLimits

0x950b,	// (0x00075976) bg_popup_call_pane_cp05

0x952b,	// (0x00075996) popup_number_entry_window_t1

0x953e,	// (0x000759a9) popup_number_entry_window_t2

0x9550,	// (0x000759bb) popup_number_entry_window_t3

0x0003,

0xf0af,	// (0x0007b51a) popup_number_entry_window_t

0x9562,	// (0x000759cd) text_title_cp2

0x9575,	// (0x000759e0) bg_popup_call_pane_cp_ParamLimits

0x9575,	// (0x000759e0) bg_popup_call_pane_cp

0x9583,	// (0x000759ee) call_thumbnail_pane

0x958b,	// (0x000759f6) popup_call_audio_in_window_g1_ParamLimits

0x958b,	// (0x000759f6) popup_call_audio_in_window_g1

0x9597,	// (0x00075a02) popup_call_audio_in_window_g2_ParamLimits

0x9597,	// (0x00075a02) popup_call_audio_in_window_g2

0x95a3,	// (0x00075a0e) popup_call_audio_in_window_g3_ParamLimits

0x95a3,	// (0x00075a0e) popup_call_audio_in_window_g3

0x0002,

0xf0b8,	// (0x0007b523) popup_call_audio_in_window_g_ParamLimits

0xf0b8,	// (0x0007b523) popup_call_audio_in_window_g

0x95af,	// (0x00075a1a) popup_call_audio_in_window_t1_ParamLimits

0x95af,	// (0x00075a1a) popup_call_audio_in_window_t1

0x95cb,	// (0x00075a36) popup_call_audio_in_window_t2_ParamLimits

0x95cb,	// (0x00075a36) popup_call_audio_in_window_t2

0x95e7,	// (0x00075a52) popup_call_audio_in_window_t3_ParamLimits

0x95e7,	// (0x00075a52) popup_call_audio_in_window_t3

0x0002,

0xf0bf,	// (0x0007b52a) popup_call_audio_in_window_t_ParamLimits

0xf0bf,	// (0x0007b52a) popup_call_audio_in_window_t

0x9575,	// (0x000759e0) bg_popup_call_pane_cp01_ParamLimits

0x9575,	// (0x000759e0) bg_popup_call_pane_cp01

0x9583,	// (0x000759ee) call_thumbnail_pane_cp02

0x95fa,	// (0x00075a65) call_type_pane_cp022

0x9602,	// (0x00075a6d) popup_call_audio_out_window_g1_ParamLimits

0x9602,	// (0x00075a6d) popup_call_audio_out_window_g1

0x9614,	// (0x00075a7f) popup_call_audio_out_window_g2_ParamLimits

0x9614,	// (0x00075a7f) popup_call_audio_out_window_g2

0x9620,	// (0x00075a8b) popup_call_audio_out_window_g3_ParamLimits

0x9620,	// (0x00075a8b) popup_call_audio_out_window_g3

0x0002,

0xf0c6,	// (0x0007b531) popup_call_audio_out_window_g_ParamLimits

0xf0c6,	// (0x0007b531) popup_call_audio_out_window_g

0x9632,	// (0x00075a9d) popup_call_audio_out_window_t1_ParamLimits

0x9632,	// (0x00075a9d) popup_call_audio_out_window_t1

0x964a,	// (0x00075ab5) popup_call_audio_out_window_t2_ParamLimits

0x964a,	// (0x00075ab5) popup_call_audio_out_window_t2

0x0001,

0xf0cd,	// (0x0007b538) popup_call_audio_out_window_t_ParamLimits

0xf0cd,	// (0x0007b538) popup_call_audio_out_window_t

0x965f,	// (0x00075aca) bg_popup_call_pane_ParamLimits

0x965f,	// (0x00075aca) bg_popup_call_pane

0x0397,	// (0x0006c802) call_thumbnail_pane_cp_ParamLimits

0x0397,	// (0x0006c802) call_thumbnail_pane_cp

0x96e3,	// (0x00075b4e) call_type_pane_cp01_ParamLimits

0x96e3,	// (0x00075b4e) call_type_pane_cp01

0x9727,	// (0x00075b92) popup_call_audio_first_window_g1_ParamLimits

0x9727,	// (0x00075b92) popup_call_audio_first_window_g1

0x9773,	// (0x00075bde) popup_call_audio_first_window_g2_ParamLimits

0x9773,	// (0x00075bde) popup_call_audio_first_window_g2

0x0001,

0xf0d2,	// (0x0007b53d) popup_call_audio_first_window_g_ParamLimits

0xf0d2,	// (0x0007b53d) popup_call_audio_first_window_g

0x97b7,	// (0x00075c22) popup_call_audio_first_window_t1_ParamLimits

0x97b7,	// (0x00075c22) popup_call_audio_first_window_t1

0x9863,	// (0x00075cce) popup_call_audio_first_window_t4_ParamLimits

0x9863,	// (0x00075cce) popup_call_audio_first_window_t4

0x98ef,	// (0x00075d5a) popup_call_audio_first_window_t5_ParamLimits

0x98ef,	// (0x00075d5a) popup_call_audio_first_window_t5

0x0002,

0xf0d7,	// (0x0007b542) popup_call_audio_first_window_t_ParamLimits

0xf0d7,	// (0x0007b542) popup_call_audio_first_window_t

0xa0bb,	// (0x00076526) bg_popup_call_pane_cp02

0xa0c5,	// (0x00076530) call_type_pane_cp023

0xa0cd,	// (0x00076538) popup_call_audio_wait_window_g1

0xa0d5,	// (0x00076540) popup_call_audio_wait_window_g2

0x0001,

0xf0de,	// (0x0007b549) popup_call_audio_wait_window_g

0xa0dd,	// (0x00076548) popup_call_audio_wait_window_t3

0xa0eb,	// (0x00076556) bg_popup_call_pane_cp03_ParamLimits

0xa0eb,	// (0x00076556) bg_popup_call_pane_cp03

0xa14b,	// (0x000765b6) call_thumbnail_pane_cp011_ParamLimits

0xa14b,	// (0x000765b6) call_thumbnail_pane_cp011

0xa157,	// (0x000765c2) call_type_pane_cp034_ParamLimits

0xa157,	// (0x000765c2) call_type_pane_cp034

0xa193,	// (0x000765fe) popup_call_audio_second_window_g1_ParamLimits

0xa193,	// (0x000765fe) popup_call_audio_second_window_g1

0xa1cf,	// (0x0007663a) popup_call_audio_second_window_g2_ParamLimits

0xa1cf,	// (0x0007663a) popup_call_audio_second_window_g2

0x0001,

0xf0e3,	// (0x0007b54e) popup_call_audio_second_window_g_ParamLimits

0xf0e3,	// (0x0007b54e) popup_call_audio_second_window_g

0xa20b,	// (0x00076676) popup_call_audio_second_window_t1_ParamLimits

0xa20b,	// (0x00076676) popup_call_audio_second_window_t1

0xa28c,	// (0x000766f7) popup_call_audio_second_window_t2_ParamLimits

0xa28c,	// (0x000766f7) popup_call_audio_second_window_t2

0xa2c2,	// (0x0007672d) popup_call_audio_second_window_t3_ParamLimits

0xa2c2,	// (0x0007672d) popup_call_audio_second_window_t3

0x0002,

0xf0e8,	// (0x0007b553) popup_call_audio_second_window_t_ParamLimits

0xf0e8,	// (0x0007b553) popup_call_audio_second_window_t

0xa0bb,	// (0x00076526) bg_popup_call_pane_cp04

0xa2f8,	// (0x00076763) list_conf_pane

0xa300,	// (0x0007676b) popup_call_audio_conf_window_t1

0xa30e,	// (0x00076779) call_thumbnail_pane_g1

0xa316,	// (0x00076781) bg_pinb_pane_ParamLimits

0xa316,	// (0x00076781) bg_pinb_pane

0xa324,	// (0x0007678f) find_pinb_pane

0xa32d,	// (0x00076798) listscroll_pinb_pane_ParamLimits

0xa32d,	// (0x00076798) listscroll_pinb_pane

0xa33c,	// (0x000767a7) pinb_bg_pane_g1

0x03bb,	// (0x0006c826) pinb_bg_pane_g2

0x03c7,	// (0x0006c832) pinb_bg_pane_g3

0x03d3,	// (0x0006c83e) pinb_bg_pane_g4

0x03df,	// (0x0006c84a) pinb_bg_pane_g5

0x03eb,	// (0x0006c856) pinb_bg_pane_g6

0x03f6,	// (0x0006c861) pinb_bg_pane_g7

0x0401,	// (0x0006c86c) pinb_bg_pane_g8

0x040c,	// (0x0006c877) pinb_bg_pane_g9

0x0416,	// (0x0006c881) pinb_bg_pane_g10

0x0009,

0xf0ef,	// (0x0007b55a) pinb_bg_pane_g

0x0433,	// (0x0006c89e) grid_pinb_pane

0x043c,	// (0x0006c8a7) list_pinb_pane

0x0445,	// (0x0006c8b0) scroll_pane_cp01_ParamLimits

0x0445,	// (0x0006c8b0) scroll_pane_cp01

0xa346,	// (0x000767b1) find_pinb_pane_g1_ParamLimits

0xa346,	// (0x000767b1) find_pinb_pane_g1

0xa35e,	// (0x000767c9) find_pinb_pane_t1

0xa370,	// (0x000767db) find_pinb_pane_t2

0x0001,

0xf109,	// (0x0007b574) find_pinb_pane_t

0xa385,	// (0x000767f0) input_focus_pane_cp01_ParamLimits

0xa385,	// (0x000767f0) input_focus_pane_cp01

0x0457,	// (0x0006c8c2) cell_pinb_pane_ParamLimits

0x0457,	// (0x0006c8c2) cell_pinb_pane

0x0480,	// (0x0006c8eb) cell_pinb_pane_g1_ParamLimits

0x0480,	// (0x0006c8eb) cell_pinb_pane_g1

0x0490,	// (0x0006c8fb) cell_pinb_pane_g2_ParamLimits

0x0490,	// (0x0006c8fb) cell_pinb_pane_g2

0xa391,	// (0x000767fc) cell_pinb_pane_g3_ParamLimits

0xa391,	// (0x000767fc) cell_pinb_pane_g3

0x0002,

0xf10e,	// (0x0007b579) cell_pinb_pane_g_ParamLimits

0xf10e,	// (0x0007b579) cell_pinb_pane_g

0xa0bb,	// (0x00076526) grid_highlight_pane_cp01

0x049c,	// (0x0006c907) list_pinb_item_pane_ParamLimits

0x049c,	// (0x0006c907) list_pinb_item_pane

0xa0bb,	// (0x00076526) list_highlight_pane_cp02

0x04ae,	// (0x0006c919) list_pinb_item_pane_g1_ParamLimits

0x04ae,	// (0x0006c919) list_pinb_item_pane_g1

0x04bb,	// (0x0006c926) list_pinb_item_pane_g2_ParamLimits

0x04bb,	// (0x0006c926) list_pinb_item_pane_g2

0x04c7,	// (0x0006c932) list_pinb_item_pane_g3_ParamLimits

0x04c7,	// (0x0006c932) list_pinb_item_pane_g3

0x04d8,	// (0x0006c943) list_pinb_item_pane_g4_ParamLimits

0x04d8,	// (0x0006c943) list_pinb_item_pane_g4

0x0003,

0xf115,	// (0x0007b580) list_pinb_item_pane_g_ParamLimits

0xf115,	// (0x0007b580) list_pinb_item_pane_g

0x04e4,	// (0x0006c94f) list_pinb_item_pane_t1_ParamLimits

0x04e4,	// (0x0006c94f) list_pinb_item_pane_t1

0x0519,	// (0x0006c984) calc_display_pane

0x053e,	// (0x0006c9a9) calc_paper_pane

0x0561,	// (0x0006c9cc) grid_calc_pane

0xa0bb,	// (0x00076526) bg_list_pane_cp01

0x058f,	// (0x0006c9fa) clock_g1

0x0597,	// (0x0006ca02) clock_g2

0x0001,

0xf11e,	// (0x0007b589) clock_g

0x059f,	// (0x0006ca0a) clock_t1_ParamLimits

0x059f,	// (0x0006ca0a) clock_t1

0x05b4,	// (0x0006ca1f) clock_t2_ParamLimits

0x05b4,	// (0x0006ca1f) clock_t2

0x05c6,	// (0x0006ca31) clock_t3_ParamLimits

0x05c6,	// (0x0006ca31) clock_t3

0x05d8,	// (0x0006ca43) clock_t4_ParamLimits

0x05d8,	// (0x0006ca43) clock_t4

0x05ea,	// (0x0006ca55) clock_t5_ParamLimits

0x05ea,	// (0x0006ca55) clock_t5

0x05ff,	// (0x0006ca6a) clock_t6_ParamLimits

0x05ff,	// (0x0006ca6a) clock_t6

0x0611,	// (0x0006ca7c) clock_t7_ParamLimits

0x0611,	// (0x0006ca7c) clock_t7

0x0623,	// (0x0006ca8e) clock_t8_ParamLimits

0x0623,	// (0x0006ca8e) clock_t8

0x0637,	// (0x0006caa2) clock_t9_ParamLimits

0x0637,	// (0x0006caa2) clock_t9

0x0008,

0xf123,	// (0x0007b58e) clock_t_ParamLimits

0xf123,	// (0x0007b58e) clock_t

0xa39d,	// (0x00076808) popup_clock_analogue_window_cp02

0xa39d,	// (0x00076808) popup_clock_digital_window_cp01

0xa3a5,	// (0x00076810) listscroll_help_pane

0xa0bb,	// (0x00076526) phob_pre_status_pane

0xa3af,	// (0x0007681a) grid_qdial_pane

0xa316,	// (0x00076781) listscroll_mce_pane

0xa316,	// (0x00076781) bg_notes_pane

0xa3b9,	// (0x00076824) list_notes_pane

0x064b,	// (0x0006cab6) scroll_pane_cp06

0xa3c7,	// (0x00076832) bg_calc_paper_pane

0x9926,	// (0x00075d91) list_calc_pane

0xa3db,	// (0x00076846) bg_calc_display_pane

0x065f,	// (0x0006caca) calc_display_pane_t1

0x0674,	// (0x0006cadf) calc_display_pane_t2

0x9940,	// (0x00075dab) calc_display_pane_t3

0x0002,

0xf136,	// (0x0007b5a1) calc_display_pane_t

0x0689,	// (0x0006caf4) cell_calc_pane_ParamLimits

0x0689,	// (0x0006caf4) cell_calc_pane

0xa3e7,	// (0x00076852) bg_calc_paper_pane_g1

0xa3f3,	// (0x0007685e) bg_calc_paper_pane_g2

0xa3ff,	// (0x0007686a) bg_calc_paper_pane_g3

0xa40b,	// (0x00076876) bg_calc_paper_pane_g4

0xa417,	// (0x00076882) bg_calc_paper_pane_g5

0x06be,	// (0x0006cb29) bg_calc_paper_pane_g6

0x06cd,	// (0x0006cb38) bg_calc_paper_pane_g7

0x06dc,	// (0x0006cb47) bg_calc_paper_pane_g8

0x0007,

0xf13d,	// (0x0007b5a8) bg_calc_paper_pane_g

0x06ef,	// (0x0006cb5a) calc_bg_paper_pane_g9

0x0702,	// (0x0006cb6d) list_calc_item_pane_ParamLimits

0x0702,	// (0x0006cb6d) list_calc_item_pane

0xa423,	// (0x0007688e) list_calc_item_pane_g1

0x9952,	// (0x00075dbd) list_calc_item_pane_t1_ParamLimits

0x9952,	// (0x00075dbd) list_calc_item_pane_t1

0x071a,	// (0x0006cb85) list_calc_item_pane_t2_ParamLimits

0x071a,	// (0x0006cb85) list_calc_item_pane_t2

0x0001,

0xf14e,	// (0x0007b5b9) list_calc_item_pane_t_ParamLimits

0xf14e,	// (0x0007b5b9) list_calc_item_pane_t

0xa430,	// (0x0007689b) cell_calc_pane_g1

0xa43a,	// (0x000768a5) grid_highlight_pane_cp02

0x074c,	// (0x0006cbb7) bg_calc_display_pane_g1

0x0755,	// (0x0006cbc0) bg_calc_display_pane_g2

0xa45c,	// (0x000768c7) bg_calc_display_pane_g3

0x0002,

0xf158,	// (0x0007b5c3) bg_calc_display_pane_g

0x075f,	// (0x0006cbca) cell_qdial_pane_ParamLimits

0x075f,	// (0x0006cbca) cell_qdial_pane

0x0773,	// (0x0006cbde) cell_qdial_pane_g1_ParamLimits

0x0773,	// (0x0006cbde) cell_qdial_pane_g1

0x0789,	// (0x0006cbf4) cell_qdial_pane_g2_ParamLimits

0x0789,	// (0x0006cbf4) cell_qdial_pane_g2

0xa465,	// (0x000768d0) cell_qdial_pane_g3_ParamLimits

0xa465,	// (0x000768d0) cell_qdial_pane_g3

0x0003,

0xf15f,	// (0x0007b5ca) cell_qdial_pane_g_ParamLimits

0xf15f,	// (0x0007b5ca) cell_qdial_pane_g

0x07b0,	// (0x0006cc1b) cell_qdial_pane_t1_ParamLimits

0x07b0,	// (0x0006cc1b) cell_qdial_pane_t1

0x07c8,	// (0x0006cc33) cell_qdial_pane_t2_ParamLimits

0x07c8,	// (0x0006cc33) cell_qdial_pane_t2

0x07db,	// (0x0006cc46) cell_qdial_pane_t3_ParamLimits

0x07db,	// (0x0006cc46) cell_qdial_pane_t3

0x0002,

0xf168,	// (0x0007b5d3) cell_qdial_pane_t_ParamLimits

0xf168,	// (0x0007b5d3) cell_qdial_pane_t

0xa0bb,	// (0x00076526) grid_highlight_pane_cp04

0xa471,	// (0x000768dc) thumbnail_qdial_pane_ParamLimits

0xa471,	// (0x000768dc) thumbnail_qdial_pane

0xa4cd,	// (0x00076938) list_help_pane

0xa4d6,	// (0x00076941) scroll_pane_cp02

0x07ee,	// (0x0006cc59) help_list_pane_t1_ParamLimits

0x07ee,	// (0x0006cc59) help_list_pane_t1

0x9964,	// (0x00075dcf) bg_notes_pane_g2

0x996c,	// (0x00075dd7) bg_notes_pane_g3

0x9974,	// (0x00075ddf) notes_bg_pane_g1

0x997c,	// (0x00075de7) notes_bg_pane_g4

0x9984,	// (0x00075def) notes_bg_pane_g5

0x998c,	// (0x00075df7) notes_bg_pane_g6

0x9994,	// (0x00075dff) notes_bg_pane_g7

0x999c,	// (0x00075e07) notes_bg_pane_g8

0x99a4,	// (0x00075e0f) notes_bg_pane_g9

0x0006,

0xf186,	// (0x0007b5f1) notes_bg_pane_g

0x080b,	// (0x0006cc76) list_notes_text_pane_ParamLimits

0x080b,	// (0x0006cc76) list_notes_text_pane

0xa4df,	// (0x0007694a) list_notes_text_pane_g1

0x0820,	// (0x0006cc8b) list_notes_text_pane_t1

0x082e,	// (0x0006cc99) listscroll_cale_week_pane

0x085a,	// (0x0006ccc5) bg_cale_heading_pane

0xa502,	// (0x0007696d) bg_cale_pane_cp01

0x0872,	// (0x0006ccdd) cale_week_corner_pane

0x0891,	// (0x0006ccfc) cale_week_day_heading_pane

0x08ae,	// (0x0006cd19) cale_week_scroll_pane_g1

0x08c1,	// (0x0006cd2c) cale_week_scroll_pane_g2

0x08d9,	// (0x0006cd44) cale_week_scroll_pane_g3

0x08f1,	// (0x0006cd5c) cale_week_scroll_pane_g4

0x0909,	// (0x0006cd74) cale_week_scroll_pane_g5

0x0929,	// (0x0006cd94) cale_week_scroll_pane_g6

0x0949,	// (0x0006cdb4) cale_week_scroll_pane_g7

0x0969,	// (0x0006cdd4) cale_week_scroll_pane_g8

0x098d,	// (0x0006cdf8) cale_week_scroll_pane_g9

0x09a5,	// (0x0006ce10) cale_week_scroll_pane_g10

0x09bd,	// (0x0006ce28) cale_week_scroll_pane_g11

0x09d5,	// (0x0006ce40) cale_week_scroll_pane_g12

0x09ed,	// (0x0006ce58) cale_week_scroll_pane_g13

0x09ed,	// (0x0006ce58) cale_week_scroll_pane_g14

0x09ed,	// (0x0006ce58) cale_week_scroll_pane_g15

0x000f,

0xf195,	// (0x0007b600) cale_week_scroll_pane_g

0x0a29,	// (0x0006ce94) cale_week_time_pane

0x0a4d,	// (0x0006ceb8) grid_cale_week_pane

0xa531,	// (0x0007699c) scroll_pane_cp08

0x0a73,	// (0x0006cede) cell_cale_week_pane_ParamLimits

0x0a73,	// (0x0006cede) cell_cale_week_pane

0x0b01,	// (0x0006cf6c) cale_week_day_heading_pane_t1

0x0b2b,	// (0x0006cf96) cale_week_day_heading_pane_t2

0x0b5a,	// (0x0006cfc5) cale_week_day_heading_pane_t3

0x0b89,	// (0x0006cff4) cale_week_day_heading_pane_t4

0x0bb8,	// (0x0006d023) cale_week_day_heading_pane_t5

0x0bef,	// (0x0006d05a) cale_week_day_heading_pane_t6

0x0c26,	// (0x0006d091) cale_week_day_heading_pane_t7

0x0006,

0xf1b6,	// (0x0007b621) cale_week_day_heading_pane_t

0xa54e,	// (0x000769b9) bg_cale_side_pane

0x0c50,	// (0x0006d0bb) cale_week_time_pane_t1

0x0c6a,	// (0x0006d0d5) cale_week_time_pane_t2

0x0c84,	// (0x0006d0ef) cale_week_time_pane_t3

0x0c9e,	// (0x0006d109) cale_week_time_pane_t4

0x0cb8,	// (0x0006d123) cale_week_time_pane_t5

0x0cd2,	// (0x0006d13d) cale_week_time_pane_t6

0x0cec,	// (0x0006d157) cale_week_time_pane_t7

0x0d06,	// (0x0006d171) cale_week_time_pane_t8

0x0007,

0xf1c5,	// (0x0007b630) cale_week_time_pane_t

0x0d20,	// (0x0006d18b) cell_cale_week_pane_g2

0x0d3f,	// (0x0006d1aa) cell_cale_week_pane_g3_ParamLimits

0x0d3f,	// (0x0006d1aa) cell_cale_week_pane_g3

0xa55c,	// (0x000769c7) grid_highlight_pane_cp07

0xa564,	// (0x000769cf) listscroll_gms_pane

0xa56e,	// (0x000769d9) grid_gms_pane

0xa577,	// (0x000769e2) listscroll_gms_pane_g1

0xa57f,	// (0x000769ea) listscroll_gms_pane_g2

0x0001,

0xf1d6,	// (0x0007b641) listscroll_gms_pane_g

0x0d57,	// (0x0006d1c2) scroll_pane_cp010

0x0d62,	// (0x0006d1cd) cell_gms_pane_ParamLimits

0x0d62,	// (0x0006d1cd) cell_gms_pane

0x0d75,	// (0x0006d1e0) cell_gms_pane_g1

0xa587,	// (0x000769f2) cell_gms_pane_g2

0xa58f,	// (0x000769fa) cell_gms_pane_g3

0xa598,	// (0x00076a03) cell_gms_pane_g4

0x0003,

0xf1db,	// (0x0007b646) cell_gms_pane_g

0xa5a1,	// (0x00076a0c) grid_highlight_pane_cp09

0x3246,	// (0x0006f6b1) phob_pre_status_pane_g1

0x324e,	// (0x0006f6b9) phob_pre_status_pane_g2

0x3256,	// (0x0006f6c1) phob_pre_status_pane_g3

0x325e,	// (0x0006f6c9) phob_pre_status_pane_g4

0x0004,

0xf5c6,	// (0x0007ba31) phob_pre_status_pane_g

0x326e,	// (0x0006f6d9) phob_pre_status_pane_t1

0x327c,	// (0x0006f6e7) phob_pre_status_pane_t2

0x328c,	// (0x0006f6f7) phob_pre_status_pane_t3

0x0002,

0xf5d1,	// (0x0007ba3c) phob_pre_status_pane_t

0xa5a9,	// (0x00076a14) bg_list_pane_cp05

0x0d85,	// (0x0006d1f0) grid_vorec_pane

0x0d8d,	// (0x0006d1f8) vorec_t1

0x0d9b,	// (0x0006d206) vorec_t2

0x0da9,	// (0x0006d214) vorec_t3

0x0db7,	// (0x0006d222) vorec_t4

0x9449,	// (0x000758b4) vorec_t5

0x9457,	// (0x000758c2) vorec_t6

0x0004,

0xf1e4,	// (0x0007b64f) vorec_t

0x9465,	// (0x000758d0) wait_bar_pane_cp01

0x0dd3,	// (0x0006d23e) cell_vorec_pane_ParamLimits

0x0dd3,	// (0x0006d23e) cell_vorec_pane

0x99ac,	// (0x00075e17) cell_vorec_pane_g1

0xa0bb,	// (0x00076526) grid_highlight_pane_cp05

0x0dfb,	// (0x0006d266) cams_zoom_pane

0x0e0a,	// (0x0006d275) image_vga_pane

0x0e24,	// (0x0006d28f) main_camera_pane_g1

0x0e36,	// (0x0006d2a1) main_camera_pane_g2

0x0e46,	// (0x0006d2b1) main_camera_pane_g3

0x0e56,	// (0x0006d2c1) main_camera_pane_g4

0x0e66,	// (0x0006d2d1) main_camera_pane_g5

0x0e76,	// (0x0006d2e1) main_camera_pane_g6

0x0e88,	// (0x0006d2f3) main_camera_pane_g7

0x0007,

0xf1ef,	// (0x0007b65a) main_camera_pane_g

0x0e98,	// (0x0006d303) main_camera_pane_t1

0x0eae,	// (0x0006d319) main_camera_pane_t2

0x0001,

0xf200,	// (0x0007b66b) main_camera_pane_t

0x0ee8,	// (0x0006d353) cams_zoom_pane_cp_ParamLimits

0x0ee8,	// (0x0006d353) cams_zoom_pane_cp

0x0f10,	// (0x0006d37b) image_cif_pane_ParamLimits

0x0f10,	// (0x0006d37b) image_cif_pane

0x0f46,	// (0x0006d3b1) image_subqcif_pane

0x0f4e,	// (0x0006d3b9) main_video_pane_g1_ParamLimits

0x0f4e,	// (0x0006d3b9) main_video_pane_g1

0x0f72,	// (0x0006d3dd) main_video_pane_g2_ParamLimits

0x0f72,	// (0x0006d3dd) main_video_pane_g2

0x0fa6,	// (0x0006d411) main_video_pane_g3_ParamLimits

0x0fa6,	// (0x0006d411) main_video_pane_g3

0x0fd4,	// (0x0006d43f) main_video_pane_g4_ParamLimits

0x0fd4,	// (0x0006d43f) main_video_pane_g4

0x1002,	// (0x0006d46d) main_video_pane_g5_ParamLimits

0x1002,	// (0x0006d46d) main_video_pane_g5

0xa5bd,	// (0x00076a28) main_video_pane_g6_ParamLimits

0xa5bd,	// (0x00076a28) main_video_pane_g6

0x0006,

0xf205,	// (0x0007b670) main_video_pane_g_ParamLimits

0xf205,	// (0x0007b670) main_video_pane_g

0x102b,	// (0x0006d496) main_video_pane_t1_ParamLimits

0x102b,	// (0x0006d496) main_video_pane_t1

0xa5d7,	// (0x00076a42) cams_zoom_pane_g1

0xa5e0,	// (0x00076a4b) cams_zoom_pane_g2

0xa5e9,	// (0x00076a54) cams_zoom_pane_g3

0xa5f2,	// (0x00076a5d) cams_zoom_pane_g4

0x0003,

0xf214,	// (0x0007b67f) cams_zoom_pane_g

0x1088,	// (0x0006d4f3) grid_cams_pane

0x10a2,	// (0x0006d50d) linegrid_cams_pane

0x10b6,	// (0x0006d521) cell_cams_pane_ParamLimits

0x10b6,	// (0x0006d521) cell_cams_pane

0xa5fb,	// (0x00076a66) cams_burst_image_pane

0xa603,	// (0x00076a6e) cell_cams_pane_g1

0xa0bb,	// (0x00076526) grid_highlight_pane_cp03

0xa430,	// (0x0007689b) mp_bg_pane_g1

0xa0bb,	// (0x00076526) bg_list_pane_cp03

0xc819,	// (0x00078c84) bg_mp_pane

0xc821,	// (0x00078c8c) grid_mp_pane

0xc829,	// (0x00078c94) media_player_g1

0xc831,	// (0x00078c9c) media_player_t1

0xc83f,	// (0x00078caa) media_player_t2

0xc84d,	// (0x00078cb8) media_player_t3

0xc85b,	// (0x00078cc6) media_player_t4

0xc869,	// (0x00078cd4) media_player_t5

0xc877,	// (0x00078ce2) media_player_t6

0xc885,	// (0x00078cf0) media_player_t7

0x0006,

0xf5b0,	// (0x0007ba1b) media_player_t

0xc893,	// (0x00078cfe) wait_bar_pane_cp02

0xf595,	// (0x0007ba00) main_usb_pane_t

0x323d,	// (0x0006f6a8) cell_mp_pane

0xa430,	// (0x0007689b) cell_mp_pane_g1

0xa0bb,	// (0x00076526) grid_highlight_pane_cp06

0xa60b,	// (0x00076a76) grid_skin_colour_pane

0xa613,	// (0x00076a7e) list_highlight_pane_cp03

0x11ec,	// (0x0006d657) skin_g1

0xa61b,	// (0x00076a86) skin_t1

0xa62a,	// (0x00076a95) skin_t2

0x0001,

0xf249,	// (0x0007b6b4) skin_t

0x11f4,	// (0x0006d65f) cell_skin_colour_pane_ParamLimits

0x11f4,	// (0x0006d65f) cell_skin_colour_pane

0xa638,	// (0x00076aa3) cell_skin_colour_pane_g1

0x126d,	// (0x0006d6d8) call_video_g1_ParamLimits

0x126d,	// (0x0006d6d8) call_video_g1

0x1289,	// (0x0006d6f4) call_video_g2_ParamLimits

0x1289,	// (0x0006d6f4) call_video_g2

0x0001,

0xf24e,	// (0x0007b6b9) call_video_g_ParamLimits

0xf24e,	// (0x0007b6b9) call_video_g

0x12db,	// (0x0006d746) call_video_uplink_pane_cp1_ParamLimits

0x12db,	// (0x0006d746) call_video_uplink_pane_cp1

0xa64a,	// (0x00076ab5) call_video_uplink_pane_cp2

0x137a,	// (0x0006d7e5) video_down_crop_pane_ParamLimits

0x137a,	// (0x0006d7e5) video_down_crop_pane

0x1471,	// (0x0006d8dc) video_down_pane_ParamLimits

0x1471,	// (0x0006d8dc) video_down_pane

0xa652,	// (0x00076abd) video_down_subqcif_pane_ParamLimits

0xa652,	// (0x00076abd) video_down_subqcif_pane

0xa66a,	// (0x00076ad5) video_down_subqcif_pane_cp_ParamLimits

0xa66a,	// (0x00076ad5) video_down_subqcif_pane_cp

0xa690,	// (0x00076afb) im_reading_pane_ParamLimits

0xa690,	// (0x00076afb) im_reading_pane

0x1581,	// (0x0006d9ec) im_writing_pane_ParamLimits

0x1581,	// (0x0006d9ec) im_writing_pane

0x1597,	// (0x0006da02) im_reading_pane_t1

0xa6aa,	// (0x00076b15) list_im_pane

0xa6bb,	// (0x00076b26) scroll_pane_cp07

0x15d0,	// (0x0006da3b) im_writing_pane_t1_ParamLimits

0x15d0,	// (0x0006da3b) im_writing_pane_t1

0xa6d4,	// (0x00076b3f) im_writing_pane_t2_ParamLimits

0xa6d4,	// (0x00076b3f) im_writing_pane_t2

0x0001,

0xf258,	// (0x0007b6c3) im_writing_pane_t_ParamLimits

0xf258,	// (0x0007b6c3) im_writing_pane_t

0xa0bb,	// (0x00076526) input_focus_pane_cp04

0xa0bb,	// (0x00076526) input_focus_pane_cp05

0x15e5,	// (0x0006da50) list_im_single_pane_ParamLimits

0x15e5,	// (0x0006da50) list_im_single_pane

0x15f9,	// (0x0006da64) list_single_im_pane_t1

0x31fd,	// (0x0006f668) blid_accuracy_pane

0x3205,	// (0x0006f670) blid_compass_pane

0x320f,	// (0x0006f67a) main_location_t1

0x321f,	// (0x0006f68a) main_location_t2

0x322f,	// (0x0006f69a) main_location_t3

0x0002,

0xf5bf,	// (0x0007ba2a) main_location_t

0xa0bb,	// (0x00076526) aid_levels_location

0xa430,	// (0x0007689b) blid_accuracy_pane_g1

0xa430,	// (0x0007689b) blid_accuracy_pane_g2

0x0001,

0xf2ba,	// (0x0007b725) blid_accuracy_pane_g

0xa71c,	// (0x00076b87) wml_content_pane

0xa75a,	// (0x00076bc5) wml_button_pane_ParamLimits

0xa75a,	// (0x00076bc5) wml_button_pane

0x1608,	// (0x0006da73) wml_list_single_large_pane_ParamLimits

0x1608,	// (0x0006da73) wml_list_single_large_pane

0x161d,	// (0x0006da88) wml_list_single_medium_pane_ParamLimits

0x161d,	// (0x0006da88) wml_list_single_medium_pane

0x1633,	// (0x0006da9e) wml_list_single_small_pane_ParamLimits

0x1633,	// (0x0006da9e) wml_list_single_small_pane

0xa76e,	// (0x00076bd9) wml_selection_box_pane_ParamLimits

0xa76e,	// (0x00076bd9) wml_selection_box_pane

0xa781,	// (0x00076bec) wml_list_single_pane_t1

0xa790,	// (0x00076bfb) wml_list_single_medium_pane_t1

0xa79f,	// (0x00076c0a) wml_list_single_large_pane_t1

0xa7ae,	// (0x00076c19) input_focus_pane_cp02_ParamLimits

0xa7ae,	// (0x00076c19) input_focus_pane_cp02

0xa7c1,	// (0x00076c2c) wml_selection_box_pane_g1

0xa7ca,	// (0x00076c35) wml_selection_box_pane_t1_ParamLimits

0xa7ca,	// (0x00076c35) wml_selection_box_pane_t1

0xa316,	// (0x00076781) bg_wml_button_pane_ParamLimits

0xa316,	// (0x00076781) bg_wml_button_pane

0xa7e2,	// (0x00076c4d) wml_button_pane_g1

0xa7ea,	// (0x00076c55) wml_button_pane_t1

0xa7e2,	// (0x00076c4d) wml_button_bg_pane_g1

0xace1,	// (0x0007714c) wml_button_bg_pane_g2

0xace9,	// (0x00077154) wml_button_bg_pane_g3

0xacf1,	// (0x0007715c) wml_button_bg_pane_g4

0xacf9,	// (0x00077164) wml_button_bg_pane_g5

0xad01,	// (0x0007716c) wml_button_bg_pane_g6

0xad09,	// (0x00077174) wml_button_bg_pane_g7

0xad11,	// (0x0007717c) wml_button_bg_pane_g8

0xad19,	// (0x00077184) wml_button_bg_pane_g9

0x0008,

0xf25d,	// (0x0007b6c8) wml_button_bg_pane_g

0x164b,	// (0x0006dab6) bg_list_pane_cp02

0xad21,	// (0x0007718c) mce_header_pane_ParamLimits

0xad21,	// (0x0007718c) mce_header_pane

0xad37,	// (0x000771a2) mce_icon_pane

0xad37,	// (0x000771a2) mce_image_pane

0xad40,	// (0x000771ab) mce_text_pane_ParamLimits

0xad40,	// (0x000771ab) mce_text_pane

0x1653,	// (0x0006dabe) scroll_pane_cp03

0xa752,	// (0x00076bbd) scroll_pane_cp04

0xad53,	// (0x000771be) scroll_pane_cp05_ParamLimits

0xad53,	// (0x000771be) scroll_pane_cp05

0x165d,	// (0x0006dac8) mce_header_field_pane_ParamLimits

0x165d,	// (0x0006dac8) mce_header_field_pane

0x1674,	// (0x0006dadf) mce_header_field_pane_2_ParamLimits

0x1674,	// (0x0006dadf) mce_header_field_pane_2

0x168a,	// (0x0006daf5) mce_header_field_pane_3

0x1692,	// (0x0006dafd) list_single_mce_message_pane_ParamLimits

0x1692,	// (0x0006dafd) list_single_mce_message_pane

0x16a7,	// (0x0006db12) list_single_mce_smart_pane_ParamLimits

0x16a7,	// (0x0006db12) list_single_mce_smart_pane

0xad5f,	// (0x000771ca) input_focus_pane_cp03

0xad68,	// (0x000771d3) list_header_data_pane

0x16c7,	// (0x0006db32) mce_header_field_pane_t1

0x16d7,	// (0x0006db42) list_single_mce_header_pane_ParamLimits

0x16d7,	// (0x0006db42) list_single_mce_header_pane

0xad70,	// (0x000771db) list_single_mce_header_pane_t1

0xad7f,	// (0x000771ea) list_single_mce_message_pane_g1

0xad87,	// (0x000771f2) list_single_mce_message_pane_t1

0x1711,	// (0x0006db7c) bg_cale_heading_pane_cp01_ParamLimits

0x1711,	// (0x0006db7c) bg_cale_heading_pane_cp01

0xad95,	// (0x00077200) bg_cale_pane_cp02_ParamLimits

0xad95,	// (0x00077200) bg_cale_pane_cp02

0x174b,	// (0x0006dbb6) cale_month_corner_pane

0x176a,	// (0x0006dbd5) cale_month_day_heading_pane_ParamLimits

0x176a,	// (0x0006dbd5) cale_month_day_heading_pane

0x17bc,	// (0x0006dc27) cale_month_pane_g1_ParamLimits

0x17bc,	// (0x0006dc27) cale_month_pane_g1

0x17eb,	// (0x0006dc56) cale_month_pane_g2_ParamLimits

0x17eb,	// (0x0006dc56) cale_month_pane_g2

0x181b,	// (0x0006dc86) cale_month_pane_g3_ParamLimits

0x181b,	// (0x0006dc86) cale_month_pane_g3

0x1857,	// (0x0006dcc2) cale_month_pane_g4_ParamLimits

0x1857,	// (0x0006dcc2) cale_month_pane_g4

0x1893,	// (0x0006dcfe) cale_month_pane_g5_ParamLimits

0x1893,	// (0x0006dcfe) cale_month_pane_g5

0x18db,	// (0x0006dd46) cale_month_pane_g6_ParamLimits

0x18db,	// (0x0006dd46) cale_month_pane_g6

0x1927,	// (0x0006dd92) cale_month_pane_g7_ParamLimits

0x1927,	// (0x0006dd92) cale_month_pane_g7

0x197b,	// (0x0006dde6) cale_month_pane_g8_ParamLimits

0x197b,	// (0x0006dde6) cale_month_pane_g8

0x19cf,	// (0x0006de3a) cale_month_pane_g9_ParamLimits

0x19cf,	// (0x0006de3a) cale_month_pane_g9

0x1a21,	// (0x0006de8c) cale_month_pane_g10_ParamLimits

0x1a21,	// (0x0006de8c) cale_month_pane_g10

0x1a73,	// (0x0006dede) cale_month_pane_g11_ParamLimits

0x1a73,	// (0x0006dede) cale_month_pane_g11

0x1ac5,	// (0x0006df30) cale_month_pane_g12_ParamLimits

0x1ac5,	// (0x0006df30) cale_month_pane_g12

0x1b17,	// (0x0006df82) cale_month_pane_g13_ParamLimits

0x1b17,	// (0x0006df82) cale_month_pane_g13

0x000c,

0xf270,	// (0x0007b6db) cale_month_pane_g_ParamLimits

0xf270,	// (0x0007b6db) cale_month_pane_g

0x1b69,	// (0x0006dfd4) cale_month_week_pane

0x1b8d,	// (0x0006dff8) grid_cale_month_pane_ParamLimits

0x1b8d,	// (0x0006dff8) grid_cale_month_pane

0x1bd6,	// (0x0006e041) cale_month_day_heading_pane_t1

0x1c5c,	// (0x0006e0c7) cale_month_day_heading_pane_t2

0x1cd5,	// (0x0006e140) cale_month_day_heading_pane_t3

0x1d4e,	// (0x0006e1b9) cale_month_day_heading_pane_t4

0x1dcf,	// (0x0006e23a) cale_month_day_heading_pane_t5

0x1e58,	// (0x0006e2c3) cale_month_day_heading_pane_t6

0x1ee1,	// (0x0006e34c) cale_month_day_heading_pane_t7

0x0006,

0xf28b,	// (0x0007b6f6) cale_month_day_heading_pane_t

0xa54e,	// (0x000769b9) bg_cale_side_pane_cp01

0x1f72,	// (0x0006e3dd) cale_month_week_pane_t1

0x1f8b,	// (0x0006e3f6) cale_month_week_pane_t2

0x1fa4,	// (0x0006e40f) cale_month_week_pane_t3

0x1fbd,	// (0x0006e428) cale_month_week_pane_t4

0x1fd6,	// (0x0006e441) cale_month_week_pane_t5

0x1fef,	// (0x0006e45a) cale_month_week_pane_t6

0x0005,

0xf29a,	// (0x0007b705) cale_month_week_pane_t

0x2008,	// (0x0006e473) cell_cale_month_pane_ParamLimits

0x2008,	// (0x0006e473) cell_cale_month_pane

0x99b6,	// (0x00075e21) cell_cale_month_pane_g1

0x2160,	// (0x0006e5cb) cell_cale_month_pane_t1_ParamLimits

0x2160,	// (0x0006e5cb) cell_cale_month_pane_t1

0xa55c,	// (0x000769c7) grid_highlight_pane_cp08

0xa430,	// (0x0007689b) main_smil_g1

0x218c,	// (0x0006e5f7) smil_status_pane

0xadd4,	// (0x0007723f) smil_text_pane

0xc739,	// (0x00078ba4) bg_popup_call3_rect_pane_g8

0xc741,	// (0x00078bac) bg_popup_call3_rect_pane_g9

0x0008,

0xf553,	// (0x0007b9be) bg_popup_call3_rect_pane_g

0xc988,	// (0x00078df3) smil_status_volume_pane_g1

0xadde,	// (0x00077249) smil_status_pane_t1

0x9b00,	// (0x00075f6b) volume_smil_pane

0xadf5,	// (0x00077260) list_smil_text_pane

0x219f,	// (0x0006e60a) scroll_pane_cp011

0x21aa,	// (0x0006e615) smil_text_list_pane_t1_ParamLimits

0x21aa,	// (0x0006e615) smil_text_list_pane_t1

0x99c2,	// (0x00075e2d) aid_volume_smil_ParamLimits

0x99c2,	// (0x00075e2d) aid_volume_smil

0xa430,	// (0x0007689b) smil_volume_pane_g1

0xa430,	// (0x0007689b) smil_volume_pane_g2

0x0001,

0xf2ba,	// (0x0007b725) smil_volume_pane_g

0x082e,	// (0x0006cc99) listscroll_cale_day_pane

0xadff,	// (0x0007726a) bg_cale_pane

0xae17,	// (0x00077282) list_cale_pane

0xae3a,	// (0x000772a5) scroll_pane_cp09

0xae4b,	// (0x000772b6) cale_bg_pane_g1

0xae53,	// (0x000772be) cale_bg_pane_g2

0xae5b,	// (0x000772c6) cale_bg_pane_g3

0xae63,	// (0x000772ce) cale_bg_pane_g4

0xae6b,	// (0x000772d6) cale_bg_pane_g5

0xae73,	// (0x000772de) cale_bg_pane_g6

0xae7b,	// (0x000772e6) cale_bg_pane_g7

0xae83,	// (0x000772ee) cale_bg_pane_g8

0xae8b,	// (0x000772f6) cale_bg_pane_g9

0x0008,

0xf2bf,	// (0x0007b72a) cale_bg_pane_g

0x21ee,	// (0x0006e659) list_cale_time_pane_ParamLimits

0x21ee,	// (0x0006e659) list_cale_time_pane

0xae93,	// (0x000772fe) list_cale_time_pane_g1_ParamLimits

0xae93,	// (0x000772fe) list_cale_time_pane_g1

0xae9f,	// (0x0007730a) list_cale_time_pane_g2_ParamLimits

0xae9f,	// (0x0007730a) list_cale_time_pane_g2

0x2203,	// (0x0006e66e) list_cale_time_pane_g3_ParamLimits

0x2203,	// (0x0006e66e) list_cale_time_pane_g3

0x2211,	// (0x0006e67c) list_cale_time_pane_g4_ParamLimits

0x2211,	// (0x0006e67c) list_cale_time_pane_g4

0x221f,	// (0x0006e68a) list_cale_time_pane_g5_ParamLimits

0x221f,	// (0x0006e68a) list_cale_time_pane_g5

0x0005,

0xf2d2,	// (0x0007b73d) list_cale_time_pane_g_ParamLimits

0xf2d2,	// (0x0007b73d) list_cale_time_pane_g

0xaeb9,	// (0x00077324) list_cale_time_pane_t1_ParamLimits

0xaeb9,	// (0x00077324) list_cale_time_pane_t1

0xaee1,	// (0x0007734c) list_cale_time_pane_t2_ParamLimits

0xaee1,	// (0x0007734c) list_cale_time_pane_t2

0x2580,	// (0x0006e9eb) aid_blid_cardinal_pane

0x25be,	// (0x0006ea29) compass_pane_t4

0xaf09,	// (0x00077374) list_cale_time_pane_t4_ParamLimits

0xaf09,	// (0x00077374) list_cale_time_pane_t4

0x25cc,	// (0x0006ea37) compass_pane_t5

0x25da,	// (0x0006ea45) compass_pane_t6

0x25e8,	// (0x0006ea53) compass_pane_t7

0xb3b8,	// (0x00077823) navi_pane_cc_t1

0xb595,	// (0x00077a00) aid_phob_thumbnail_center_pane

0x2c15,	// (0x0006f080) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2df,	// (0x0007b74a) list_cale_time_pane_t_ParamLimits

0xf2df,	// (0x0007b74a) list_cale_time_pane_t

0x9575,	// (0x000759e0) bg_popup_window_pane_cp02_ParamLimits

0x9575,	// (0x000759e0) bg_popup_window_pane_cp02

0xaf31,	// (0x0007739c) heading_pane_cp01_ParamLimits

0xaf31,	// (0x0007739c) heading_pane_cp01

0xaf3d,	// (0x000773a8) loc_req_pane_ParamLimits

0xaf3d,	// (0x000773a8) loc_req_pane

0xaf4d,	// (0x000773b8) loc_type_pane_ParamLimits

0xaf4d,	// (0x000773b8) loc_type_pane

0xaf5f,	// (0x000773ca) loc_type_pane_t1_ParamLimits

0xaf5f,	// (0x000773ca) loc_type_pane_t1

0xaf71,	// (0x000773dc) loc_type_pane_t2_ParamLimits

0xaf71,	// (0x000773dc) loc_type_pane_t2

0xaf83,	// (0x000773ee) loc_type_pane_t3_ParamLimits

0xaf83,	// (0x000773ee) loc_type_pane_t3

0x0002,

0xf2e6,	// (0x0007b751) loc_type_pane_t_ParamLimits

0xf2e6,	// (0x0007b751) loc_type_pane_t

0xaf95,	// (0x00077400) list_loc_req_pane

0xaf9f,	// (0x0007740a) scroll_pane_cp012

0x222d,	// (0x0006e698) list_single_loc_request_popup_menu_pane_ParamLimits

0x222d,	// (0x0006e698) list_single_loc_request_popup_menu_pane

0xafaa,	// (0x00077415) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xafaa,	// (0x00077415) list_single_loc_request_popup_menu_pane_g1

0xafb6,	// (0x00077421) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xafb6,	// (0x00077421) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf2ed,	// (0x0007b758) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf2ed,	// (0x0007b758) list_single_loc_request_popup_menu_pane_g

0xafc2,	// (0x0007742d) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xafc2,	// (0x0007742d) list_single_loc_request_popup_menu_pane_t1

0xa316,	// (0x00076781) bg_popup_window_pane_cp03_ParamLimits

0xa316,	// (0x00076781) bg_popup_window_pane_cp03

0xafd8,	// (0x00077443) heading_loc_req_pane_ParamLimits

0xafd8,	// (0x00077443) heading_loc_req_pane

0x223a,	// (0x0006e6a5) popup_dyc_status_message_window_g1_ParamLimits

0x223a,	// (0x0006e6a5) popup_dyc_status_message_window_g1

0x224e,	// (0x0006e6b9) popup_dyc_status_message_window_t1_ParamLimits

0x224e,	// (0x0006e6b9) popup_dyc_status_message_window_t1

0x2263,	// (0x0006e6ce) popup_dyc_status_message_window_t2_ParamLimits

0x2263,	// (0x0006e6ce) popup_dyc_status_message_window_t2

0x2278,	// (0x0006e6e3) popup_dyc_status_message_window_t3_ParamLimits

0x2278,	// (0x0006e6e3) popup_dyc_status_message_window_t3

0x0002,

0xf2f2,	// (0x0007b75d) popup_dyc_status_message_window_t_ParamLimits

0xf2f2,	// (0x0007b75d) popup_dyc_status_message_window_t

0xa0bb,	// (0x00076526) bg_heading_pane_cp01

0xafe4,	// (0x0007744f) heading_loc_req_pane_g1

0xafec,	// (0x00077457) heading_loc_req_pane_g2

0xaff4,	// (0x0007745f) heading_loc_req_pane_g3

0x0002,

0xf2f9,	// (0x0007b764) heading_loc_req_pane_g

0xaffc,	// (0x00077467) heading_loc_req_pane_t1

0xb00b,	// (0x00077476) bg_popup_sub_pane_cp01_ParamLimits

0xb00b,	// (0x00077476) bg_popup_sub_pane_cp01

0xb019,	// (0x00077484) popup_cale_events_window_g1_ParamLimits

0xb019,	// (0x00077484) popup_cale_events_window_g1

0xb039,	// (0x000774a4) popup_cale_events_window_g2_ParamLimits

0xb039,	// (0x000774a4) popup_cale_events_window_g2

0x0001,

0xf32d,	// (0x0007b798) popup_cale_events_window_g_ParamLimits

0xf32d,	// (0x0007b798) popup_cale_events_window_g

0xb059,	// (0x000774c4) popup_cale_events_window_t1_ParamLimits

0xb059,	// (0x000774c4) popup_cale_events_window_t1

0xb06b,	// (0x000774d6) popup_cale_events_window_t2_ParamLimits

0xb06b,	// (0x000774d6) popup_cale_events_window_t2

0xb0a9,	// (0x00077514) popup_cale_events_window_t3_ParamLimits

0xb0a9,	// (0x00077514) popup_cale_events_window_t3

0xb0e3,	// (0x0007754e) popup_cale_events_window_t4_ParamLimits

0xb0e3,	// (0x0007754e) popup_cale_events_window_t4

0x0003,

0xf332,	// (0x0007b79d) popup_cale_events_window_t_ParamLimits

0xf332,	// (0x0007b79d) popup_cale_events_window_t

0x237b,	// (0x0006e7e6) call_type_pane

0x238b,	// (0x0006e7f6) popup_call_status_window_g1

0x239f,	// (0x0006e80a) popup_call_status_window_g2

0x23b3,	// (0x0006e81e) popup_call_status_window_g3

0x0002,

0xf33b,	// (0x0007b7a6) popup_call_status_window_g

0xb119,	// (0x00077584) call_type_pane_g1

0xb122,	// (0x0007758d) call_type_pane_g2

0x0001,

0xf342,	// (0x0007b7ad) call_type_pane_g

0xa0bb,	// (0x00076526) bg_popup_sub_pane_cp02

0xb12b,	// (0x00077596) listscroll_popup_wml_pane

0xb133,	// (0x0007759e) list_wml_pane

0xb13d,	// (0x000775a8) scroll_pane_cp013

0xb148,	// (0x000775b3) list_single_graphic_popup_wml_pane_ParamLimits

0xb148,	// (0x000775b3) list_single_graphic_popup_wml_pane

0xa430,	// (0x0007689b) list_single_graphic_popup_wml_pane_g1

0xb15c,	// (0x000775c7) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf347,	// (0x0007b7b2) list_single_graphic_popup_wml_pane_g

0xb164,	// (0x000775cf) list_single_graphic_popup_wml_pane_t1

0xb17a,	// (0x000775e5) aid_call_pane

0xa30e,	// (0x00076779) popup_clock_analogue_window_g1

0xa30e,	// (0x00076779) popup_clock_analogue_window_g2

0x99e4,	// (0x00075e4f) popup_clock_analogue_window_g3

0x99e4,	// (0x00075e4f) popup_clock_analogue_window_g4

0xa430,	// (0x0007689b) popup_clock_analogue_window_g5

0x0004,

0xf34c,	// (0x0007b7b7) popup_clock_analogue_window_g

0x99ec,	// (0x00075e57) popup_clock_analogue_window_t1

0x99fa,	// (0x00075e65) clock_digital_number_pane_ParamLimits

0x99fa,	// (0x00075e65) clock_digital_number_pane

0x9a06,	// (0x00075e71) clock_digital_number_pane_cp02_ParamLimits

0x9a06,	// (0x00075e71) clock_digital_number_pane_cp02

0x9a12,	// (0x00075e7d) clock_digital_number_pane_cp03_ParamLimits

0x9a12,	// (0x00075e7d) clock_digital_number_pane_cp03

0x9a1e,	// (0x00075e89) clock_digital_number_pane_cp04_ParamLimits

0x9a1e,	// (0x00075e89) clock_digital_number_pane_cp04

0x9a2e,	// (0x00075e99) clock_digital_separator_pane_ParamLimits

0x9a2e,	// (0x00075e99) clock_digital_separator_pane

0x9a3a,	// (0x00075ea5) popup_clock_digital_window_t1

0xa430,	// (0x0007689b) clock_digital_number_pane_g1

0xa430,	// (0x0007689b) clock_digital_number_pane_g2

0x0001,

0xf2ba,	// (0x0007b725) clock_digital_number_pane_g

0xa430,	// (0x0007689b) clock_digital_separator_pane_g1

0xa430,	// (0x0007689b) clock_digital_separator_pane_g2

0x0001,

0xf2ba,	// (0x0007b725) clock_digital_separator_pane_g

0xa0bb,	// (0x00076526) bg_popup_window_pane_cp04

0xb182,	// (0x000775ed) heading_pane_cp03

0xb18a,	// (0x000775f5) listscroll_popup_gms_pane

0xb192,	// (0x000775fd) grid_large_graphic_popup_pane

0xb19c,	// (0x00077607) listscroll_popup_gms_pane_g1

0xb1a4,	// (0x0007760f) listscroll_popup_gms_pane_g2

0x0001,

0xf357,	// (0x0007b7c2) listscroll_popup_gms_pane_g

0xa752,	// (0x00076bbd) scroll_pane_cp014

0x23c2,	// (0x0006e82d) cell_large_graphic_popup_pane_ParamLimits

0x23c2,	// (0x0006e82d) cell_large_graphic_popup_pane

0x23da,	// (0x0006e845) cell_large_graphic_popup_pane_g1_ParamLimits

0x23da,	// (0x0006e845) cell_large_graphic_popup_pane_g1

0xb1ac,	// (0x00077617) cell_large_graphic_popup_pane_g2_ParamLimits

0xb1ac,	// (0x00077617) cell_large_graphic_popup_pane_g2

0xb1b8,	// (0x00077623) cell_large_graphic_popup_pane_g3_ParamLimits

0xb1b8,	// (0x00077623) cell_large_graphic_popup_pane_g3

0xb1c5,	// (0x00077630) cell_large_graphic_popup_pane_g4_ParamLimits

0xb1c5,	// (0x00077630) cell_large_graphic_popup_pane_g4

0x0003,

0xf35c,	// (0x0007b7c7) cell_large_graphic_popup_pane_g_ParamLimits

0xf35c,	// (0x0007b7c7) cell_large_graphic_popup_pane_g

0xb1d5,	// (0x00077640) grid_highlight_pane_cp010

0xa430,	// (0x0007689b) bg_popup_call_pane_g1

0xb1df,	// (0x0007764a) list_single_graphic_popup_conf_pane_ParamLimits

0xb1df,	// (0x0007764a) list_single_graphic_popup_conf_pane

0xb1f2,	// (0x0007765d) list_highlight_pane_cp01

0xb1fb,	// (0x00077666) list_single_graphic_popup_conf_pane_g1

0xb203,	// (0x0007766e) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf365,	// (0x0007b7d0) list_single_graphic_popup_conf_pane_g

0xb20b,	// (0x00077676) list_single_graphic_popup_conf_pane_t1

0xb219,	// (0x00077684) linegrid_cams_pane_g1

0x23e6,	// (0x0006e851) linegrid_cams_pane_g2

0xa58f,	// (0x000769fa) linegrid_cams_pane_g3

0xb222,	// (0x0007768d) linegrid_cams_pane_g4

0x23ef,	// (0x0006e85a) linegrid_cams_pane_g5

0x23f8,	// (0x0006e863) linegrid_cams_pane_g6

0xa598,	// (0x00076a03) linegrid_cams_pane_g7

0x0006,

0xf36a,	// (0x0007b7d5) linegrid_cams_pane_g

0xb22b,	// (0x00077696) popup_clock_analogue_window

0xb22b,	// (0x00077696) popup_clock_digital_window

0xa0bb,	// (0x00076526) popup_phob_thumbnail_window

0xa430,	// (0x0007689b) call_video_uplink_pane_g1

0xb234,	// (0x0007769f) call_video_uplink_pane_g2

0x0001,

0xf379,	// (0x0007b7e4) call_video_uplink_pane_g

0xb23c,	// (0x000776a7) video_uplink_pane

0xb244,	// (0x000776af) mce_image_pane_g1

0x2403,	// (0x0006e86e) mce_image_pane_g2

0x240d,	// (0x0006e878) mce_image_pane_g3

0x2415,	// (0x0006e880) mce_image_pane_g4

0x241d,	// (0x0006e888) mce_image_pane_g5

0x0004,

0xf37e,	// (0x0007b7e9) mce_image_pane_g

0xb24e,	// (0x000776b9) control_top_pane_stacon_cp01_ParamLimits

0xb24e,	// (0x000776b9) control_top_pane_stacon_cp01

0xb262,	// (0x000776cd) uni_indicator_pane_stacon_cp01_ParamLimits

0xb262,	// (0x000776cd) uni_indicator_pane_stacon_cp01

0xb273,	// (0x000776de) bg_popup_sub_pane_cp03

0xb27d,	// (0x000776e8) chi_dic_find_pane

0x2425,	// (0x0006e890) listscroll_chi_dic_pane

0xb285,	// (0x000776f0) main_pane_chidic_g1

0xb28d,	// (0x000776f8) chi_dic_find_pane_t1

0xb29b,	// (0x00077706) find_chidic_pane

0xb2a4,	// (0x0007770f) chi_dic_list_pane_ParamLimits

0xb2a4,	// (0x0007770f) chi_dic_list_pane

0xb2b5,	// (0x00077720) scroll_pane_cp020

0xb2bd,	// (0x00077728) find_chidic_pane_t1

0xa0bb,	// (0x00076526) input_focus_pane_cp06

0x2439,	// (0x0006e8a4) list_chi_dic_pane_ParamLimits

0x2439,	// (0x0006e8a4) list_chi_dic_pane

0x244b,	// (0x0006e8b6) list_chi_dic_pane_t1_ParamLimits

0x244b,	// (0x0006e8b6) list_chi_dic_pane_t1

0xa0bb,	// (0x00076526) list_highlight_pane_cp020

0xb2cc,	// (0x00077737) bg_cale_heading_pane_g1

0x245e,	// (0x0006e8c9) bg_cale_heading_pane_g2

0x2466,	// (0x0006e8d1) bg_cale_heading_pane_g3

0x246e,	// (0x0006e8d9) bg_cale_heading_pane_g4

0x2478,	// (0x0006e8e3) bg_cale_heading_pane_g5

0x2482,	// (0x0006e8ed) bg_cale_heading_pane_g6

0x248a,	// (0x0006e8f5) bg_cale_heading_pane_g7

0x2492,	// (0x0006e8fd) bg_cale_heading_pane_g8

0x249c,	// (0x0006e907) bg_cale_heading_pane_g9

0x0008,

0xf389,	// (0x0007b7f4) bg_cale_heading_pane_g

0xb2cc,	// (0x00077737) bg_cale_side_pane_g1

0x24a6,	// (0x0006e911) bg_cale_side_pane_g2

0x24ae,	// (0x0006e919) bg_cale_side_pane_g3

0x24b6,	// (0x0006e921) bg_cale_side_pane_g4

0x24be,	// (0x0006e929) bg_cale_side_pane_g5

0x24c6,	// (0x0006e931) bg_cale_side_pane_g6

0x24ce,	// (0x0006e939) bg_cale_side_pane_g7

0x24d6,	// (0x0006e941) bg_cale_side_pane_g8

0x24de,	// (0x0006e949) bg_cale_side_pane_g9

0x0008,

0xf39c,	// (0x0007b807) bg_cale_side_pane_g

0x24e6,	// (0x0006e951) popup_call_status_window_ParamLimits

0x24e6,	// (0x0006e951) popup_call_status_window

0xb2d4,	// (0x0007773f) stacon_top_pane

0xb2dc,	// (0x00077747) status_pane_ParamLimits

0xb2dc,	// (0x00077747) status_pane

0xb2f1,	// (0x0007775c) status_small_pane

0xb2f9,	// (0x00077764) control_pane

0xa0bb,	// (0x00076526) stacon_bottom_pane

0xb301,	// (0x0007776c) list_single_mce_smart_pane_t1_ParamLimits

0xb301,	// (0x0007776c) list_single_mce_smart_pane_t1

0xb314,	// (0x0007777f) list_single_mce_smart_pane_t2_ParamLimits

0xb314,	// (0x0007777f) list_single_mce_smart_pane_t2

0x0001,

0xf3af,	// (0x0007b81a) list_single_mce_smart_pane_t_ParamLimits

0xf3af,	// (0x0007b81a) list_single_mce_smart_pane_t

0x252f,	// (0x0006e99a) compass_pane

0x2538,	// (0x0006e9a3) main_location2_pane_t1

0x254a,	// (0x0006e9b5) main_location2_pane_t2

0x255c,	// (0x0006e9c7) main_location2_pane_t3

0x0003,

0xf3b4,	// (0x0007b81f) main_location2_pane_t

0xb333,	// (0x0007779e) compass_pane_g1_ParamLimits

0xb333,	// (0x0007779e) compass_pane_g1

0x25a0,	// (0x0006ea0b) compass_pane_t1

0x25af,	// (0x0006ea1a) compass_pane_t2

0x0005,

0xf3bd,	// (0x0007b828) compass_pane_t

0x25f6,	// (0x0006ea61) text_secondary_cp61

0xb3af,	// (0x0007781a) navi_pane_cams_g5

0xb42b,	// (0x00077896) navi_pane_im_t1

0xb439,	// (0x000778a4) navi_pane_mp_g1_ParamLimits

0xb439,	// (0x000778a4) navi_pane_mp_g1

0xb44d,	// (0x000778b8) navi_pane_mp_g2_ParamLimits

0xb44d,	// (0x000778b8) navi_pane_mp_g2

0xb459,	// (0x000778c4) navi_pane_mp_g3_ParamLimits

0xb459,	// (0x000778c4) navi_pane_mp_g3

0x0002,

0xf3d1,	// (0x0007b83c) navi_pane_mp_g_ParamLimits

0xf3d1,	// (0x0007b83c) navi_pane_mp_g

0xb465,	// (0x000778d0) navi_pane_mp_t1

0xb473,	// (0x000778de) navi_pane_mp_t2

0x0002,

0xf3d8,	// (0x0007b843) navi_pane_mp_t

0xb4de,	// (0x00077949) navi_pane_vt_g1

0xb465,	// (0x000778d0) navi_pane_vt_t1

0xb4e6,	// (0x00077951) navi_slider_pane

0xa5a9,	// (0x00076a14) zooming_pane

0xb4f6,	// (0x00077961) navi_slider_pane_g1

0x9a57,	// (0x00075ec2) navi_slider_pane_g2

0x0006,

0xf3df,	// (0x0007b84a) navi_slider_pane_g

0xb51a,	// (0x00077985) aid_levels_zoom

0xb522,	// (0x0007798d) zooming_pane_g1

0xb52a,	// (0x00077995) zooming_pane_g2

0xb52a,	// (0x00077995) zooming_pane_g3

0x0002,

0xf3ee,	// (0x0007b859) zooming_pane_g

0xb532,	// (0x0007799d) level_10_zoom

0xb53b,	// (0x000779a6) level_11_zoom

0xb544,	// (0x000779af) level_1_zoom

0xb54d,	// (0x000779b8) level_2_zoom

0xb556,	// (0x000779c1) level_3_zoom

0xb55f,	// (0x000779ca) level_4_zoom

0xb568,	// (0x000779d3) level_5_zoom

0xb571,	// (0x000779dc) level_6_zoom

0xb57a,	// (0x000779e5) level_7_zoom

0xb583,	// (0x000779ee) level_8_zoom

0xb58c,	// (0x000779f7) level_9_zoom

0xb59d,	// (0x00077a08) popup_phob_thumbnail_window_g1

0xb5a5,	// (0x00077a10) popup_phob_thumbnail_window_g2

0x0001,

0xf3f5,	// (0x0007b860) popup_phob_thumbnail_window_g

0xc89b,	// (0x00078d06) level_1_location

0xc8a3,	// (0x00078d0e) level_2_location

0xc8ab,	// (0x00078d16) level_3_location

0xc8b3,	// (0x00078d1e) level_4_location

0xa5a9,	// (0x00076a14) level_5_location

0x2647,	// (0x0006eab2) mce_icon_pane_g1

0x2651,	// (0x0006eabc) mce_icon_pane_g2

0x0001,

0xf3fa,	// (0x0007b865) mce_icon_pane_g

0x2659,	// (0x0006eac4) main_mup_pane_g1_ParamLimits

0x2659,	// (0x0006eac4) main_mup_pane_g1

0x266f,	// (0x0006eada) main_mup_pane_g2_ParamLimits

0x266f,	// (0x0006eada) main_mup_pane_g2

0x2687,	// (0x0006eaf2) main_mup_pane_g3_ParamLimits

0x2687,	// (0x0006eaf2) main_mup_pane_g3

0x269f,	// (0x0006eb0a) main_mup_pane_g4_ParamLimits

0x269f,	// (0x0006eb0a) main_mup_pane_g4

0x26b7,	// (0x0006eb22) main_mup_pane_g5_ParamLimits

0x26b7,	// (0x0006eb22) main_mup_pane_g5

0x26d3,	// (0x0006eb3e) main_mup_pane_g6_ParamLimits

0x26d3,	// (0x0006eb3e) main_mup_pane_g6

0x26eb,	// (0x0006eb56) main_mup_pane_g7_ParamLimits

0x26eb,	// (0x0006eb56) main_mup_pane_g7

0x2703,	// (0x0006eb6e) main_mup_pane_g8_ParamLimits

0x2703,	// (0x0006eb6e) main_mup_pane_g8

0x271d,	// (0x0006eb88) main_mup_pane_g9_ParamLimits

0x271d,	// (0x0006eb88) main_mup_pane_g9

0x2737,	// (0x0006eba2) main_mup_pane_g10_ParamLimits

0x2737,	// (0x0006eba2) main_mup_pane_g10

0x2751,	// (0x0006ebbc) main_mup_pane_g11_ParamLimits

0x2751,	// (0x0006ebbc) main_mup_pane_g11

0x2765,	// (0x0006ebd0) main_mup_pane_g12_ParamLimits

0x2765,	// (0x0006ebd0) main_mup_pane_g12

0x277b,	// (0x0006ebe6) main_mup_pane_g13_ParamLimits

0x277b,	// (0x0006ebe6) main_mup_pane_g13

0x000c,

0xf3ff,	// (0x0007b86a) main_mup_pane_g_ParamLimits

0xf3ff,	// (0x0007b86a) main_mup_pane_g

0x278f,	// (0x0006ebfa) main_mup_pane_t1_ParamLimits

0x278f,	// (0x0006ebfa) main_mup_pane_t1

0x27a9,	// (0x0006ec14) main_mup_pane_t2_ParamLimits

0x27a9,	// (0x0006ec14) main_mup_pane_t2

0x27c1,	// (0x0006ec2c) main_mup_pane_t3_ParamLimits

0x27c1,	// (0x0006ec2c) main_mup_pane_t3

0x27d9,	// (0x0006ec44) main_mup_pane_t4_ParamLimits

0x27d9,	// (0x0006ec44) main_mup_pane_t4

0x27f7,	// (0x0006ec62) main_mup_pane_t5_ParamLimits

0x27f7,	// (0x0006ec62) main_mup_pane_t5

0x280c,	// (0x0006ec77) main_mup_pane_t6_ParamLimits

0x280c,	// (0x0006ec77) main_mup_pane_t6

0x0005,

0xf41a,	// (0x0007b885) main_mup_pane_t_ParamLimits

0xf41a,	// (0x0007b885) main_mup_pane_t

0x281e,	// (0x0006ec89) mup_progress_pane_ParamLimits

0x281e,	// (0x0006ec89) mup_progress_pane

0x282a,	// (0x0006ec95) mup_visualizer_pane_ParamLimits

0x282a,	// (0x0006ec95) mup_visualizer_pane

0x285a,	// (0x0006ecc5) mup_volume_pane_ParamLimits

0x285a,	// (0x0006ecc5) mup_volume_pane

0xb5ad,	// (0x00077a18) mup_visualizer_pane_g1_ParamLimits

0xb5ad,	// (0x00077a18) mup_visualizer_pane_g1

0xb5ad,	// (0x00077a18) mup_visualizer_pane_g2_ParamLimits

0xb5ad,	// (0x00077a18) mup_visualizer_pane_g2

0xb333,	// (0x0007779e) mup_visualizer_pane_g3_ParamLimits

0xb333,	// (0x0007779e) mup_visualizer_pane_g3

0x0002,

0xf427,	// (0x0007b892) mup_visualizer_pane_g_ParamLimits

0xf427,	// (0x0007b892) mup_visualizer_pane_g

0xa430,	// (0x0007689b) mup_volume_pane_g1

0xb5c3,	// (0x00077a2e) mup_volume_pane_g2

0x0001,

0xf42e,	// (0x0007b899) mup_volume_pane_g

0xa430,	// (0x0007689b) mup_progress_pane_g1

0xb5cc,	// (0x00077a37) mup_progress_pane_g2

0xb5d5,	// (0x00077a40) mup_progress_pane_g3

0x0002,

0xf433,	// (0x0007b89e) mup_progress_pane_g

0xa0bb,	// (0x00076526) bg_popup_window_pane_cp05

0xb5de,	// (0x00077a49) heading_pane_cp02_ParamLimits

0xb5de,	// (0x00077a49) heading_pane_cp02

0xb5f8,	// (0x00077a63) list_popup_blid_pane

0xb600,	// (0x00077a6b) list_blid_sat_info_pane_ParamLimits

0xb600,	// (0x00077a6b) list_blid_sat_info_pane

0xb613,	// (0x00077a7e) list_blid_sat_info_pane_g1

0xb61b,	// (0x00077a86) list_blid_sat_info_pane_t1

0x2970,	// (0x0006eddb) mup_equalizer_pane_ParamLimits

0x2970,	// (0x0006eddb) mup_equalizer_pane

0x2989,	// (0x0006edf4) mup_equalizer_pane_cp1_ParamLimits

0x2989,	// (0x0006edf4) mup_equalizer_pane_cp1

0x29a6,	// (0x0006ee11) mup_equalizer_pane_cp2_ParamLimits

0x29a6,	// (0x0006ee11) mup_equalizer_pane_cp2

0x29c3,	// (0x0006ee2e) mup_equalizer_pane_cp3_ParamLimits

0x29c3,	// (0x0006ee2e) mup_equalizer_pane_cp3

0x29e4,	// (0x0006ee4f) mup_equalizer_pane_cp4_ParamLimits

0x29e4,	// (0x0006ee4f) mup_equalizer_pane_cp4

0x2a05,	// (0x0006ee70) mup_equalizer_pane_cp5

0x2a19,	// (0x0006ee84) mup_equalizer_pane_cp6

0x2a2d,	// (0x0006ee98) mup_equalizer_pane_cp7

0xc7b9,	// (0x00078c24) bg_popup_call_poc_act_pane_g9

0xc7c1,	// (0x00078c2c) bg_popup_call_poc_act_pane_g10

0xc7c9,	// (0x00078c34) bg_popup_call_poc_act_pane_g11

0x000a,

0xa316,	// (0x00076781) mup_scale_pane

0xa430,	// (0x0007689b) mup_scale_pane_g1

0xb629,	// (0x00077a94) mup_scale_pane_g2

0x0006,

0xf44f,	// (0x0007b8ba) mup_scale_pane_g

0xb64d,	// (0x00077ab8) msg_data_pane

0xb655,	// (0x00077ac0) scroll_pane_cp017

0x2a53,	// (0x0006eebe) bg_list_pane_cp04_ParamLimits

0x2a53,	// (0x0006eebe) bg_list_pane_cp04

0xb65d,	// (0x00077ac8) msg_data_pane_g1

0x2a6b,	// (0x0006eed6) msg_data_pane_g2

0x2a75,	// (0x0006eee0) msg_data_pane_g3

0x2a7d,	// (0x0006eee8) msg_data_pane_g4

0x2a85,	// (0x0006eef0) msg_data_pane_g5

0x2a8d,	// (0x0006eef8) msg_data_pane_g6

0x2a95,	// (0x0006ef00) msg_data_pane_g7

0x0006,

0xf45e,	// (0x0007b8c9) msg_data_pane_g

0x2a9d,	// (0x0006ef08) msg_text_pane_ParamLimits

0x2a9d,	// (0x0006ef08) msg_text_pane

0x2aca,	// (0x0006ef35) qrid_highlight_pane_cp011_ParamLimits

0x2aca,	// (0x0006ef35) qrid_highlight_pane_cp011

0xa0bb,	// (0x00076526) msg_body_pane

0xa0bb,	// (0x00076526) msg_header_pane

0xb66e,	// (0x00077ad9) input_focus_pane_cp07

0x2aee,	// (0x0006ef59) msg_header_pane_t1_ParamLimits

0x2aee,	// (0x0006ef59) msg_header_pane_t1

0xa802,	// (0x00076c6d) msg_header_pane_t2_ParamLimits

0xa802,	// (0x00076c6d) msg_header_pane_t2

0x0001,

0xf472,	// (0x0007b8dd) msg_header_pane_t_ParamLimits

0xf472,	// (0x0007b8dd) msg_header_pane_t

0xb683,	// (0x00077aee) msg_body_pane_g1

0x2b00,	// (0x0006ef6b) msg_body_pane_t1_ParamLimits

0x2b00,	// (0x0006ef6b) msg_body_pane_t1

0xa814,	// (0x00076c7f) msg_body_pane_t2_ParamLimits

0xa814,	// (0x00076c7f) msg_body_pane_t2

0xa826,	// (0x00076c91) msg_body_pane_t3_ParamLimits

0xa826,	// (0x00076c91) msg_body_pane_t3

0x0002,

0xf477,	// (0x0007b8e2) msg_body_pane_t_ParamLimits

0xf477,	// (0x0007b8e2) msg_body_pane_t

0x2b6b,	// (0x0006efd6) main_viewer_pane_g1_ParamLimits

0x2b6b,	// (0x0006efd6) main_viewer_pane_g1

0x2b79,	// (0x0006efe4) main_viewer_pane_g2_ParamLimits

0x2b79,	// (0x0006efe4) main_viewer_pane_g2

0x2b87,	// (0x0006eff2) main_viewer_pane_g3_ParamLimits

0x2b87,	// (0x0006eff2) main_viewer_pane_g3

0x2b96,	// (0x0006f001) main_viewer_pane_g4_ParamLimits

0x2b96,	// (0x0006f001) main_viewer_pane_g4

0x9a81,	// (0x00075eec) main_viewer_pane_g5_ParamLimits

0x9a81,	// (0x00075eec) main_viewer_pane_g5

0x9a81,	// (0x00075eec) main_viewer_pane_g7_ParamLimits

0x9a81,	// (0x00075eec) main_viewer_pane_g7

0xafaa,	// (0x00077415) main_viewer_pane_g8_ParamLimits

0xafaa,	// (0x00077415) main_viewer_pane_g8

0x0007,

0xf487,	// (0x0007b8f2) main_viewer_pane_g_ParamLimits

0xf487,	// (0x0007b8f2) main_viewer_pane_g

0xb68b,	// (0x00077af6) viewer_content_pane_ParamLimits

0xb68b,	// (0x00077af6) viewer_content_pane

0x2bd2,	// (0x0006f03d) main_postcard_pane_g1_ParamLimits

0x2bd2,	// (0x0006f03d) main_postcard_pane_g1

0x2be8,	// (0x0006f053) main_postcard_pane_g2_ParamLimits

0x2be8,	// (0x0006f053) main_postcard_pane_g2

0x2bfe,	// (0x0006f069) main_postcard_pane_g3_ParamLimits

0x2bfe,	// (0x0006f069) main_postcard_pane_g3

0x0005,

0xf498,	// (0x0007b903) main_postcard_pane_g_ParamLimits

0xf498,	// (0x0007b903) main_postcard_pane_g

0x2c15,	// (0x0006f080) main_postcard_pane_g4

0xc99b,	// (0x00078e06) smil_status_volume_pane_g2

0x2c58,	// (0x0006f0c3) postcard_pane_ParamLimits

0x2c58,	// (0x0006f0c3) postcard_pane

0xb699,	// (0x00077b04) postcard_pane_g1_ParamLimits

0xb699,	// (0x00077b04) postcard_pane_g1

0x2c9a,	// (0x0006f105) postcard_pane_g2_ParamLimits

0x2c9a,	// (0x0006f105) postcard_pane_g2

0x2ca6,	// (0x0006f111) postcard_pane_g3_ParamLimits

0x2ca6,	// (0x0006f111) postcard_pane_g3

0xb6a7,	// (0x00077b12) postcard_pane_g4_ParamLimits

0xb6a7,	// (0x00077b12) postcard_pane_g4

0x2cb2,	// (0x0006f11d) postcard_pane_g5_ParamLimits

0x2cb2,	// (0x0006f11d) postcard_pane_g5

0x2cc7,	// (0x0006f132) postcard_pane_g6_ParamLimits

0x2cc7,	// (0x0006f132) postcard_pane_g6

0xb699,	// (0x00077b04) postcard_pane_g7_ParamLimits

0xb699,	// (0x00077b04) postcard_pane_g7

0x0006,

0xf4a5,	// (0x0007b910) postcard_pane_g_ParamLimits

0xf4a5,	// (0x0007b910) postcard_pane_g

0x2cdb,	// (0x0006f146) main_mp2_pane_g1_ParamLimits

0x2cdb,	// (0x0006f146) main_mp2_pane_g1

0x2ce7,	// (0x0006f152) main_mp2_pane_g2_ParamLimits

0x2ce7,	// (0x0006f152) main_mp2_pane_g2

0x2cf3,	// (0x0006f15e) main_mp2_pane_g3_ParamLimits

0x2cf3,	// (0x0006f15e) main_mp2_pane_g3

0x0002,

0xf4b4,	// (0x0007b91f) main_mp2_pane_g_ParamLimits

0xf4b4,	// (0x0007b91f) main_mp2_pane_g

0x2cff,	// (0x0006f16a) main_mp2_pane_t1_ParamLimits

0x2cff,	// (0x0006f16a) main_mp2_pane_t1

0x2d14,	// (0x0006f17f) main_mp2_pane_t2_ParamLimits

0x2d14,	// (0x0006f17f) main_mp2_pane_t2

0x2d26,	// (0x0006f191) main_mp2_pane_t3_ParamLimits

0x2d26,	// (0x0006f191) main_mp2_pane_t3

0x0002,

0xf4bb,	// (0x0007b926) main_mp2_pane_t_ParamLimits

0xf4bb,	// (0x0007b926) main_mp2_pane_t

0xb6b5,	// (0x00077b20) pec_content_pane_ParamLimits

0xb6b5,	// (0x00077b20) pec_content_pane

0xa752,	// (0x00076bbd) scroll_pane_cp015

0xb6c7,	// (0x00077b32) pec_attribute_pane_ParamLimits

0xb6c7,	// (0x00077b32) pec_attribute_pane

0x2d38,	// (0x0006f1a3) pec_content_pane_g1_ParamLimits

0x2d38,	// (0x0006f1a3) pec_content_pane_g1

0xb6d7,	// (0x00077b42) pec_content_pane_t1_ParamLimits

0xb6d7,	// (0x00077b42) pec_content_pane_t1

0xb6e9,	// (0x00077b54) pec_content_pane_t2_ParamLimits

0xb6e9,	// (0x00077b54) pec_content_pane_t2

0x0001,

0xf4c2,	// (0x0007b92d) pec_content_pane_t_ParamLimits

0xf4c2,	// (0x0007b92d) pec_content_pane_t

0x2d44,	// (0x0006f1af) list_single_graphic_pane_cp01_ParamLimits

0x2d44,	// (0x0006f1af) list_single_graphic_pane_cp01

0xa316,	// (0x00076781) bg_popup_sub_pane_cp04

0xb6fb,	// (0x00077b66) popup_mup_playback_window_g1

0xb707,	// (0x00077b72) popup_mup_playback_window_t1

0xb71c,	// (0x00077b87) popup_mup_playback_window_t2

0x0001,

0xf4c7,	// (0x0007b932) popup_mup_playback_window_t

0xb753,	// (0x00077bbe) main_image_pane_g1_ParamLimits

0xb753,	// (0x00077bbe) main_image_pane_g1

0xb796,	// (0x00077c01) scroll_pane_cp018_ParamLimits

0xb796,	// (0x00077c01) scroll_pane_cp018

0xb7ae,	// (0x00077c19) scroll_pane_cp016_ParamLimits

0xb7ae,	// (0x00077c19) scroll_pane_cp016

0x2e11,	// (0x0006f27c) smil2_image_pane_ParamLimits

0x2e11,	// (0x0006f27c) smil2_image_pane

0x2e41,	// (0x0006f2ac) smil2_root_pane_ParamLimits

0x2e41,	// (0x0006f2ac) smil2_root_pane

0x2e79,	// (0x0006f2e4) smil2_text_pane_ParamLimits

0x2e79,	// (0x0006f2e4) smil2_text_pane

0xa0bb,	// (0x00076526) bg_list_pane_cp06

0xb7ea,	// (0x00077c55) grid_radio_pane

0xa0bb,	// (0x00076526) bg_popup_window_pane_cp06

0xb7f2,	// (0x00077c5d) main_fmradio_pane_t1

0xb182,	// (0x000775ed) heading_pane_cp04

0xb800,	// (0x00077c6b) main_fmradio_pane_t2

0xc7d1,	// (0x00078c3c) popup_cale_lunar_info_window_g1

0xb80e,	// (0x00077c79) main_fmradio_pane_t3

0xc7d9,	// (0x00078c44) popup_cale_lunar_info_window_g2

0xb81c,	// (0x00077c87) main_fmradio_pane_t4

0x0001,

0xb82a,	// (0x00077c95) main_fmradio_pane_t5

0x0004,

0xf5a2,	// (0x0007ba0d) popup_cale_lunar_info_window_g

0xf4dc,	// (0x0007b947) main_fmradio_pane_t

0xb838,	// (0x00077ca3) wait_bar_pane_cp03

0xb840,	// (0x00077cab) cell_fmradio_pane_ParamLimits

0xb840,	// (0x00077cab) cell_fmradio_pane

0xb699,	// (0x00077b04) cell_fmradio_pane_g1_ParamLimits

0xb699,	// (0x00077b04) cell_fmradio_pane_g1

0xa0bb,	// (0x00076526) grid_highlight_pane_cp011

0xb853,	// (0x00077cbe) poc_content_pane_ParamLimits

0xb853,	// (0x00077cbe) poc_content_pane

0xb865,	// (0x00077cd0) scroll_pane_cp019

0x2ef9,	// (0x0006f364) popup_call_poc_act_window_ParamLimits

0x2ef9,	// (0x0006f364) popup_call_poc_act_window

0x2f1d,	// (0x0006f388) popup_call_poc_inact_window_ParamLimits

0x2f1d,	// (0x0006f388) popup_call_poc_inact_window

0xf579,	// (0x0007b9e4) bg_popup_call_poc_act_pane_g

0xc749,	// (0x00078bb4) bg_popup_call_poc_inact_pane_g1

0xc751,	// (0x00078bbc) bg_popup_call_poc_inact_pane_g2

0xb86d,	// (0x00077cd8) popup_call_poc_act_window_g2

0xc759,	// (0x00078bc4) bg_popup_call_poc_inact_pane_g3

0xc761,	// (0x00078bcc) bg_popup_call_poc_inact_pane_g4

0xc769,	// (0x00078bd4) bg_popup_call_poc_inact_pane_g5

0xb875,	// (0x00077ce0) popup_call_poc_act_window_t1_ParamLimits

0xb875,	// (0x00077ce0) popup_call_poc_act_window_t1

0xb89d,	// (0x00077d08) popup_call_poc_act_window_t2_ParamLimits

0xb89d,	// (0x00077d08) popup_call_poc_act_window_t2

0xb8c5,	// (0x00077d30) popup_call_poc_act_window_t3_ParamLimits

0xb8c5,	// (0x00077d30) popup_call_poc_act_window_t3

0xb8ed,	// (0x00077d58) popup_call_poc_act_window_t4_ParamLimits

0xb8ed,	// (0x00077d58) popup_call_poc_act_window_t4

0x0003,

0xf4e7,	// (0x0007b952) popup_call_poc_act_window_t_ParamLimits

0xf4e7,	// (0x0007b952) popup_call_poc_act_window_t

0xc771,	// (0x00078bdc) bg_popup_call_poc_inact_pane_g6

0xc779,	// (0x00078be4) bg_popup_call_poc_inact_pane_g7

0xc781,	// (0x00078bec) bg_popup_call_poc_inact_pane_g8

0xb8ff,	// (0x00077d6a) popup_call_poc_inact_window_g2

0xc789,	// (0x00078bf4) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf566,	// (0x0007b9d1) bg_popup_call_poc_inact_pane_g

0xb907,	// (0x00077d72) popup_call_poc_inact_window_t1_ParamLimits

0xb907,	// (0x00077d72) popup_call_poc_inact_window_t1

0xb91c,	// (0x00077d87) popup_call_poc_inact_window_t2_ParamLimits

0xb91c,	// (0x00077d87) popup_call_poc_inact_window_t2

0xb931,	// (0x00077d9c) popup_call_poc_inact_window_t3_ParamLimits

0xb931,	// (0x00077d9c) popup_call_poc_inact_window_t3

0x0002,

0xf4f0,	// (0x0007b95b) popup_call_poc_inact_window_t_ParamLimits

0xf4f0,	// (0x0007b95b) popup_call_poc_inact_window_t

0xc90e,	// (0x00078d79) context_pane_ParamLimits

0x375e,	// (0x0006fbc9) signal_pane_ParamLimits

0xa5a9,	// (0x00076a14) main_call2_pane

0x9acc,	// (0x00075f37) popup_phob_thumbnail2_window_ParamLimits

0x9acc,	// (0x00075f37) popup_phob_thumbnail2_window

0x9a69,	// (0x00075ed4) aid_hotspot_pointer_arrow_pane

0x9a71,	// (0x00075edc) aid_hotspot_pointer_hand_pane

0x3266,	// (0x0006f6d1) phob_pre_status_pane_g5

0x0dfb,	// (0x0006d266) cams_zoom_pane_ParamLimits

0x0e0a,	// (0x0006d275) image_vga_pane_ParamLimits

0x0e24,	// (0x0006d28f) main_camera_pane_g1_ParamLimits

0x0e36,	// (0x0006d2a1) main_camera_pane_g2_ParamLimits

0x0e46,	// (0x0006d2b1) main_camera_pane_g3_ParamLimits

0x0e56,	// (0x0006d2c1) main_camera_pane_g4_ParamLimits

0x0e66,	// (0x0006d2d1) main_camera_pane_g5_ParamLimits

0x0e76,	// (0x0006d2e1) main_camera_pane_g6_ParamLimits

0x0e88,	// (0x0006d2f3) main_camera_pane_g7_ParamLimits

0xf1ef,	// (0x0007b65a) main_camera_pane_g_ParamLimits

0x0e98,	// (0x0006d303) main_camera_pane_t1_ParamLimits

0x0eae,	// (0x0006d319) main_camera_pane_t2_ParamLimits

0xf200,	// (0x0007b66b) main_camera_pane_t_ParamLimits

0xa316,	// (0x00076781) bg_popup_preview_window_pane_cp01_ParamLimits

0xa316,	// (0x00076781) bg_popup_preview_window_pane_cp01

0xb946,	// (0x00077db1) popup_phob_thumbnail2_window_g1_ParamLimits

0xb946,	// (0x00077db1) popup_phob_thumbnail2_window_g1

0xa0bb,	// (0x00076526) call2_cli_visual_pane

0x2f51,	// (0x0006f3bc) popup_call2_audio_conf_window_ParamLimits

0x2f51,	// (0x0006f3bc) popup_call2_audio_conf_window

0x2f71,	// (0x0006f3dc) popup_call2_audio_first_window_ParamLimits

0x2f71,	// (0x0006f3dc) popup_call2_audio_first_window

0x3007,	// (0x0006f472) popup_call2_audio_in_window_ParamLimits

0x3007,	// (0x0006f472) popup_call2_audio_in_window

0x304f,	// (0x0006f4ba) popup_call2_audio_out_window_ParamLimits

0x304f,	// (0x0006f4ba) popup_call2_audio_out_window

0x30b9,	// (0x0006f524) popup_call2_audio_second_window_ParamLimits

0x30b9,	// (0x0006f524) popup_call2_audio_second_window

0x311f,	// (0x0006f58a) popup_call2_audio_wait_window_ParamLimits

0x311f,	// (0x0006f58a) popup_call2_audio_wait_window

0xa0bb,	// (0x00076526) bg_popup_call2_act_pane_cp03

0xa2f8,	// (0x00076763) list_conf_pane_cp

0xb952,	// (0x00077dbd) popup_call2_audio_conf_window_t1

0xb1df,	// (0x0007764a) list_single_graphic_popup_conf2_pane_ParamLimits

0xb1df,	// (0x0007764a) list_single_graphic_popup_conf2_pane

0xb1f2,	// (0x0007765d) list_highlight_pane_cp04

0xb960,	// (0x00077dcb) list_single_graphic_popup_conf2_pane_g1

0xb203,	// (0x0007766e) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf4f7,	// (0x0007b962) list_single_graphic_popup_conf2_pane_g

0xb96a,	// (0x00077dd5) list_single_graphic_popup_conf2_pane_t1

0xb978,	// (0x00077de3) bg_popup_call2_act_pane_cp01_ParamLimits

0xb978,	// (0x00077de3) bg_popup_call2_act_pane_cp01

0xba02,	// (0x00077e6d) call_type_pane_cp05_ParamLimits

0xba02,	// (0x00077e6d) call_type_pane_cp05

0xba56,	// (0x00077ec1) popup_call2_audio_second_window_g1_ParamLimits

0xba56,	// (0x00077ec1) popup_call2_audio_second_window_g1

0xbaaa,	// (0x00077f15) popup_call2_audio_second_window_g2_ParamLimits

0xbaaa,	// (0x00077f15) popup_call2_audio_second_window_g2

0x0002,

0xf4fc,	// (0x0007b967) popup_call2_audio_second_window_g_ParamLimits

0xf4fc,	// (0x0007b967) popup_call2_audio_second_window_g

0xbb0f,	// (0x00077f7a) popup_call2_audio_second_window_t1_ParamLimits

0xbb0f,	// (0x00077f7a) popup_call2_audio_second_window_t1

0xbbca,	// (0x00078035) popup_call2_audio_second_window_t2_ParamLimits

0xbbca,	// (0x00078035) popup_call2_audio_second_window_t2

0xbc1d,	// (0x00078088) popup_call2_audio_second_window_t3_ParamLimits

0xbc1d,	// (0x00078088) popup_call2_audio_second_window_t3

0x0003,

0xf503,	// (0x0007b96e) popup_call2_audio_second_window_t_ParamLimits

0xf503,	// (0x0007b96e) popup_call2_audio_second_window_t

0xa0bb,	// (0x00076526) bg_popup_call2_in_pane_cp02

0xa0c5,	// (0x00076530) call_type_pane_cp04

0xa0cd,	// (0x00076538) popup_call2_audio_wait_window_g1

0xa0d5,	// (0x00076540) popup_call2_audio_wait_window_g2

0x0001,

0xf0de,	// (0x0007b549) popup_call2_audio_wait_window_g

0xa0dd,	// (0x00076548) popup_call2_audio_wait_window_t3

0xbd10,	// (0x0007817b) bg_popup_call2_act_pane_ParamLimits

0xbd10,	// (0x0007817b) bg_popup_call2_act_pane

0xbdd0,	// (0x0007823b) call_type_pane_cp03_ParamLimits

0xbdd0,	// (0x0007823b) call_type_pane_cp03

0xbe34,	// (0x0007829f) popup_call2_audio_first_window_g1_ParamLimits

0xbe34,	// (0x0007829f) popup_call2_audio_first_window_g1

0xbea4,	// (0x0007830f) popup_call2_audio_first_window_g2_ParamLimits

0xbea4,	// (0x0007830f) popup_call2_audio_first_window_g2

0xb5ad,	// (0x00077a18) popup_call2_audio_first_window_g3_ParamLimits

0xb5ad,	// (0x00077a18) popup_call2_audio_first_window_g3

0x0004,

0xf50c,	// (0x0007b977) popup_call2_audio_first_window_g_ParamLimits

0xf50c,	// (0x0007b977) popup_call2_audio_first_window_g

0xbf82,	// (0x000783ed) popup_call2_audio_first_window_t1_ParamLimits

0xbf82,	// (0x000783ed) popup_call2_audio_first_window_t1

0xc085,	// (0x000784f0) popup_call2_audio_first_window_t4_ParamLimits

0xc085,	// (0x000784f0) popup_call2_audio_first_window_t4

0xc168,	// (0x000785d3) popup_call2_audio_first_window_t5_ParamLimits

0xc168,	// (0x000785d3) popup_call2_audio_first_window_t5

0x0003,

0xf517,	// (0x0007b982) popup_call2_audio_first_window_t_ParamLimits

0xf517,	// (0x0007b982) popup_call2_audio_first_window_t

0xa30e,	// (0x00076779) bg_popup_call2_act_pane_g1

0xc7e1,	// (0x00078c4c) popup_cale_lunar_info_window_t1

0xc7ef,	// (0x00078c5a) popup_cale_lunar_info_window_t2

0xc7fd,	// (0x00078c68) popup_cale_lunar_info_window_t3

0xa0bb,	// (0x00076526) bg_popup_call2_bubble_pane

0xc269,	// (0x000786d4) bg_popup_call2_in_pane_cp01_ParamLimits

0xc269,	// (0x000786d4) bg_popup_call2_in_pane_cp01

0x95fa,	// (0x00075a65) call_type_pane_cp02

0xc2b1,	// (0x0007871c) popup_call2_audio_out_window_g1_ParamLimits

0xc2b1,	// (0x0007871c) popup_call2_audio_out_window_g1

0xc2dd,	// (0x00078748) popup_call2_audio_out_window_g2_ParamLimits

0xc2dd,	// (0x00078748) popup_call2_audio_out_window_g2

0xc305,	// (0x00078770) popup_call2_audio_out_window_g3_ParamLimits

0xc305,	// (0x00078770) popup_call2_audio_out_window_g3

0x0003,

0xf520,	// (0x0007b98b) popup_call2_audio_out_window_g_ParamLimits

0xf520,	// (0x0007b98b) popup_call2_audio_out_window_g

0xc340,	// (0x000787ab) popup_call2_audio_out_window_t1_ParamLimits

0xc340,	// (0x000787ab) popup_call2_audio_out_window_t1

0xc39f,	// (0x0007880a) popup_call2_audio_out_window_t2_ParamLimits

0xc39f,	// (0x0007880a) popup_call2_audio_out_window_t2

0xc3f3,	// (0x0007885e) popup_call2_audio_out_window_t3_ParamLimits

0xc3f3,	// (0x0007885e) popup_call2_audio_out_window_t3

0xc409,	// (0x00078874) popup_call2_audio_out_window_t4_ParamLimits

0xc409,	// (0x00078874) popup_call2_audio_out_window_t4

0xc41f,	// (0x0007888a) popup_call2_audio_out_window_t5_ParamLimits

0xc41f,	// (0x0007888a) popup_call2_audio_out_window_t5

0x0005,

0xf529,	// (0x0007b994) popup_call2_audio_out_window_t_ParamLimits

0xf529,	// (0x0007b994) popup_call2_audio_out_window_t

0xc483,	// (0x000788ee) bg_popup_call2_in_pane_ParamLimits

0xc483,	// (0x000788ee) bg_popup_call2_in_pane

0xc4df,	// (0x0007894a) popup_call2_audio_in_window_g1_ParamLimits

0xc4df,	// (0x0007894a) popup_call2_audio_in_window_g1

0xc517,	// (0x00078982) popup_call2_audio_in_window_g2_ParamLimits

0xc517,	// (0x00078982) popup_call2_audio_in_window_g2

0xc55b,	// (0x000789c6) popup_call2_audio_in_window_g3_ParamLimits

0xc55b,	// (0x000789c6) popup_call2_audio_in_window_g3

0x0003,

0xf536,	// (0x0007b9a1) popup_call2_audio_in_window_g_ParamLimits

0xf536,	// (0x0007b9a1) popup_call2_audio_in_window_g

0xc5b3,	// (0x00078a1e) popup_call2_audio_in_window_t1_ParamLimits

0xc5b3,	// (0x00078a1e) popup_call2_audio_in_window_t1

0xc633,	// (0x00078a9e) popup_call2_audio_in_window_t2_ParamLimits

0xc633,	// (0x00078a9e) popup_call2_audio_in_window_t2

0xc6b3,	// (0x00078b1e) popup_call2_audio_in_window_t3_ParamLimits

0xc6b3,	// (0x00078b1e) popup_call2_audio_in_window_t3

0xc6cd,	// (0x00078b38) popup_call2_audio_in_window_t4_ParamLimits

0xc6cd,	// (0x00078b38) popup_call2_audio_in_window_t4

0xc6df,	// (0x00078b4a) popup_call2_audio_in_window_t5_ParamLimits

0xc6df,	// (0x00078b4a) popup_call2_audio_in_window_t5

0xc6f4,	// (0x00078b5f) popup_call2_audio_in_window_t6_ParamLimits

0xc6f4,	// (0x00078b5f) popup_call2_audio_in_window_t6

0x0005,

0xf53f,	// (0x0007b9aa) popup_call2_audio_in_window_t_ParamLimits

0xf53f,	// (0x0007b9aa) popup_call2_audio_in_window_t

0xa30e,	// (0x00076779) bg_popup_call2_in_pane_g1

0xc80b,	// (0x00078c76) popup_cale_lunar_info_window_t4

0x0003,

0xf5a7,	// (0x0007ba12) popup_cale_lunar_info_window_t

0xa316,	// (0x00076781) bg_popup_call2_rect_pane_ParamLimits

0xa316,	// (0x00076781) bg_popup_call2_rect_pane

0xa0bb,	// (0x00076526) call2_cli_visual_graphic_pane

0xa0bb,	// (0x00076526) call2_cli_visual_text_pane

0x9af3,	// (0x00075f5e) smil_status_volume_pane_g3

0x0002,

0xa430,	// (0x0007689b) call2_cli_visual_graphic_pane_g1

0xa430,	// (0x0007689b) call2_cli_visual_graphic_pane_g2

0xa430,	// (0x0007689b) call2_cli_visual_graphic_pane_g3

0x0002,

0xf54c,	// (0x0007b9b7) call2_cli_visual_graphic_pane_g

0xc709,	// (0x00078b74) bg_popup_call2_rect_pane_g1

0xa4c5,	// (0x00076930) bg_popup_call2_rect_pane_g2

0xc711,	// (0x00078b7c) bg_popup_call2_rect_pane_g3

0xc719,	// (0x00078b84) bg_popup_call2_rect_pane_g4

0xc721,	// (0x00078b8c) bg_popup_call2_rect_pane_g5

0xc729,	// (0x00078b94) bg_popup_call2_rect_pane_g6

0xc731,	// (0x00078b9c) bg_popup_call2_rect_pane_g7

0xc739,	// (0x00078ba4) bg_popup_call2_rect_pane_g8

0xc741,	// (0x00078bac) bg_popup_call2_rect_pane_g9

0x0008,

0xf553,	// (0x0007b9be) bg_popup_call2_rect_pane_g

0xc749,	// (0x00078bb4) bg_popup_call2_bubble_pane_g1

0xc751,	// (0x00078bbc) bg_popup_call2_bubble_pane_g2

0xc759,	// (0x00078bc4) bg_popup_call2_bubble_pane_g3

0xc761,	// (0x00078bcc) bg_popup_call2_bubble_pane_g4

0xc769,	// (0x00078bd4) bg_popup_call2_bubble_pane_g5

0xc771,	// (0x00078bdc) bg_popup_call2_bubble_pane_g6

0xc779,	// (0x00078be4) bg_popup_call2_bubble_pane_g7

0xc781,	// (0x00078bec) bg_popup_call2_bubble_pane_g8

0xc789,	// (0x00078bf4) bg_popup_call2_bubble_pane_g9

0x0008,

0xf566,	// (0x0007b9d1) bg_popup_call2_bubble_pane_g

0x0840,	// (0x0006ccab) aid_cale_week_size_cell_pane

0x0ec4,	// (0x0006d32f) aid_cams_cif_uncrop_pane_ParamLimits

0x0ec4,	// (0x0006d32f) aid_cams_cif_uncrop_pane

0x1074,	// (0x0006d4df) aid_cams_size_cell_ParamLimits

0x1074,	// (0x0006d4df) aid_cams_size_cell

0x1088,	// (0x0006d4f3) grid_cams_pane_ParamLimits

0x10a2,	// (0x0006d50d) linegrid_cams_pane_ParamLimits

0x129f,	// (0x0006d70a) call_video_pane_t1

0x12bd,	// (0x0006d728) call_video_pane_t2

0x0001,

0xf253,	// (0x0007b6be) call_video_pane_t

0x16eb,	// (0x0006db56) aid_cale_month_size_cell_pane_ParamLimits

0x16eb,	// (0x0006db56) aid_cale_month_size_cell_pane

0xf5f0,	// (0x0007ba5b) smil_status_volume_pane_g

0x9b00,	// (0x00075f6b) volume_smil_pane_ParamLimits

0x949d,	// (0x00075908) aid_popup2_width_pane

0x079a,	// (0x0006cc05) cell_qdial_pane_g4_ParamLimits

0x079a,	// (0x0006cc05) cell_qdial_pane_g4

0x2580,	// (0x0006e9eb) aid_blid_cardinal_pane_ParamLimits

0x258c,	// (0x0006e9f7) aid_blid_destination_pane_ParamLimits

0x258c,	// (0x0006e9f7) aid_blid_destination_pane

0xa316,	// (0x00076781) bg_popup_call_poc_act_pane_ParamLimits

0xa316,	// (0x00076781) bg_popup_call_poc_act_pane

0xa316,	// (0x00076781) bg_popup_call_poc_inact_pane_ParamLimits

0xa316,	// (0x00076781) bg_popup_call_poc_inact_pane

0xc791,	// (0x00078bfc) bg_popup_call_poc_act_pane_g1

0xc799,	// (0x00078c04) bg_popup_call_poc_act_pane_g2

0xc7a1,	// (0x00078c0c) bg_popup_call_poc_act_pane_g3

0xc761,	// (0x00078bcc) bg_popup_call_poc_act_pane_g4

0xc769,	// (0x00078bd4) bg_popup_call_poc_act_pane_g5

0xc7a9,	// (0x00078c14) bg_popup_call_poc_act_pane_g6

0xc779,	// (0x00078be4) bg_popup_call_poc_act_pane_g7

0xc7b1,	// (0x00078c1c) bg_popup_call_poc_act_pane_g8

0xa0bb,	// (0x00076526) main_usb_pane

0x9aa7,	// (0x00075f12) popup_cale_lunar_info_window

0x1597,	// (0x0006da02) im_reading_pane_t1_ParamLimits

0xa6aa,	// (0x00076b15) list_im_pane_ParamLimits

0xa6bb,	// (0x00076b26) scroll_pane_cp07_ParamLimits

0xa0bb,	// (0x00076526) grid_highlight_pane_cp012

0xa316,	// (0x00076781) mup_scale_pane_ParamLimits

0xb699,	// (0x00077b04) main_usb_pane_g1_ParamLimits

0xb699,	// (0x00077b04) main_usb_pane_g1

0x317b,	// (0x0006f5e6) main_usb_pane_g2_ParamLimits

0x317b,	// (0x0006f5e6) main_usb_pane_g2

0x0001,

0xf590,	// (0x0007b9fb) main_usb_pane_g_ParamLimits

0xf590,	// (0x0007b9fb) main_usb_pane_g

0x3191,	// (0x0006f5fc) main_usb_pane_t1_ParamLimits

0x3191,	// (0x0006f5fc) main_usb_pane_t1

0x31a3,	// (0x0006f60e) main_usb_pane_t2_ParamLimits

0x31a3,	// (0x0006f60e) main_usb_pane_t2

0x31b5,	// (0x0006f620) main_usb_pane_t3_ParamLimits

0x31b5,	// (0x0006f620) main_usb_pane_t3

0x31c7,	// (0x0006f632) main_usb_pane_t4_ParamLimits

0x31c7,	// (0x0006f632) main_usb_pane_t4

0x31d9,	// (0x0006f644) main_usb_pane_t5_ParamLimits

0x31d9,	// (0x0006f644) main_usb_pane_t5

0x31eb,	// (0x0006f656) main_usb_pane_t6_ParamLimits

0x31eb,	// (0x0006f656) main_usb_pane_t6

0x0005,

0xf595,	// (0x0007ba00) main_usb_pane_t_ParamLimits

0x252f,	// (0x0006e99a) aid_text_placing

0x2538,	// (0x0006e9a3) main_location2_pane_t1_ParamLimits

0x254a,	// (0x0006e9b5) main_location2_pane_t2_ParamLimits

0x255c,	// (0x0006e9c7) main_location2_pane_t3_ParamLimits

0x256e,	// (0x0006e9d9) main_location2_pane_t4_ParamLimits

0x256e,	// (0x0006e9d9) main_location2_pane_t4

0xf3b4,	// (0x0007b81f) main_location2_pane_t_ParamLimits

0xa352,	// (0x000767bd) find_pinb_pane_g2_ParamLimits

0xa352,	// (0x000767bd) find_pinb_pane_g2

0x0001,

0xf104,	// (0x0007b56f) find_pinb_pane_g_ParamLimits

0xf104,	// (0x0007b56f) find_pinb_pane_g

0xa35e,	// (0x000767c9) find_pinb_pane_t1_ParamLimits

0xa370,	// (0x000767db) find_pinb_pane_t2_ParamLimits

0xf109,	// (0x0007b574) find_pinb_pane_t_ParamLimits

0xa0bb,	// (0x00076526) main_call3_pane

0x1bd6,	// (0x0006e041) cale_month_day_heading_pane_t1_ParamLimits

0x1c5c,	// (0x0006e0c7) cale_month_day_heading_pane_t2_ParamLimits

0x1cd5,	// (0x0006e140) cale_month_day_heading_pane_t3_ParamLimits

0x1d4e,	// (0x0006e1b9) cale_month_day_heading_pane_t4_ParamLimits

0x1dcf,	// (0x0006e23a) cale_month_day_heading_pane_t5_ParamLimits

0x1e58,	// (0x0006e2c3) cale_month_day_heading_pane_t6_ParamLimits

0x1ee1,	// (0x0006e34c) cale_month_day_heading_pane_t7_ParamLimits

0xf28b,	// (0x0007b6f6) cale_month_day_heading_pane_t_ParamLimits

0xadec,	// (0x00077257) smil_status_volume_pane

0x2c76,	// (0x0006f0e1) postcard_address_pane_ParamLimits

0x2c76,	// (0x0006f0e1) postcard_address_pane

0x2c88,	// (0x0006f0f3) postcard_message_pane_ParamLimits

0x2c88,	// (0x0006f0f3) postcard_message_pane

0x3159,	// (0x0006f5c4) call2_cli_visual_pane_t1_ParamLimits

0x3159,	// (0x0006f5c4) call2_cli_visual_pane_t1

0x398b,	// (0x0006fdf6) postcard_message_pane_t1_ParamLimits

0x398b,	// (0x0006fdf6) postcard_message_pane_t1

0x3974,	// (0x0006fddf) postcard_address_pane_t1_ParamLimits

0x3974,	// (0x0006fddf) postcard_address_pane_t1

0x3960,	// (0x0006fdcb) popup_call3_audio_in_window_ParamLimits

0x3960,	// (0x0006fdcb) popup_call3_audio_in_window

0x37eb,	// (0x0006fc56) bg_popup_call3_in_pane_ParamLimits

0x37eb,	// (0x0006fc56) bg_popup_call3_in_pane

0x3861,	// (0x0006fccc) popup_call3_audio_in_window_g1_ParamLimits

0x3861,	// (0x0006fccc) popup_call3_audio_in_window_g1

0x3881,	// (0x0006fcec) popup_call3_audio_in_window_g2_ParamLimits

0x3881,	// (0x0006fcec) popup_call3_audio_in_window_g2

0x38a1,	// (0x0006fd0c) popup_call3_audio_in_window_g3_ParamLimits

0x38a1,	// (0x0006fd0c) popup_call3_audio_in_window_g3

0x0003,

0xf5f7,	// (0x0007ba62) popup_call3_audio_in_window_g_ParamLimits

0xf5f7,	// (0x0007ba62) popup_call3_audio_in_window_g

0x38d2,	// (0x0006fd3d) popup_call3_audio_in_window_t1_ParamLimits

0x38d2,	// (0x0006fd3d) popup_call3_audio_in_window_t1

0x3910,	// (0x0006fd7b) popup_call3_audio_in_window_t2_ParamLimits

0x3910,	// (0x0006fd7b) popup_call3_audio_in_window_t2

0x394e,	// (0x0006fdb9) popup_call3_audio_in_window_t3_ParamLimits

0x394e,	// (0x0006fdb9) popup_call3_audio_in_window_t3

0x0002,

0xf600,	// (0x0007ba6b) popup_call3_audio_in_window_t_ParamLimits

0xf600,	// (0x0007ba6b) popup_call3_audio_in_window_t

0xa5a9,	// (0x00076a14) bg_popup_call3_rect_pane

0xc709,	// (0x00078b74) bg_popup_call3_rect_pane_g1

0xa4c5,	// (0x00076930) bg_popup_call3_rect_pane_g2

0xc711,	// (0x00078b7c) bg_popup_call3_rect_pane_g3

0xc719,	// (0x00078b84) bg_popup_call3_rect_pane_g4

0xc721,	// (0x00078b8c) bg_popup_call3_rect_pane_g5

0xc729,	// (0x00078b94) bg_popup_call3_rect_pane_g6

0xc731,	// (0x00078b9c) bg_popup_call3_rect_pane_g7

0x2870,	// (0x0006ecdb) mup_visualizer_osc_pane

0xb5bb,	// (0x00077a26) mup_visualizer_spec_pane

0x381b,	// (0x0006fc86) call3_video_qcif_pane_ParamLimits

0x381b,	// (0x0006fc86) call3_video_qcif_pane

0x382e,	// (0x0006fc99) call3_video_qcif_uncrop_pane_ParamLimits

0x382e,	// (0x0006fc99) call3_video_qcif_uncrop_pane

0x383c,	// (0x0006fca7) call3_video_subqcif_pane_ParamLimits

0x383c,	// (0x0006fca7) call3_video_subqcif_pane

0x3850,	// (0x0006fcbb) call3_video_subqcif_uncrop_pane_ParamLimits

0x3850,	// (0x0006fcbb) call3_video_subqcif_uncrop_pane

0x38c1,	// (0x0006fd2c) popup_call3_audio_in_window_g4_ParamLimits

0x38c1,	// (0x0006fd2c) popup_call3_audio_in_window_g4

0x37da,	// (0x0006fc45) mup_spec_half_pane

0x37e3,	// (0x0006fc4e) mup_spec_half_pane_cp

0xc96e,	// (0x00078dd9) mup_osc_middle_pane

0xc977,	// (0x00078de2) mup_visualizer_osc_pane_g1

0x37ba,	// (0x0006fc25) mup_spec_bar_pane_ParamLimits

0x37ba,	// (0x0006fc25) mup_spec_bar_pane

0xc95b,	// (0x00078dc6) mup_spec_bar_pane_g1

0xc965,	// (0x00078dd0) mup_spec_bar_pane_g2

0x0001,

0xf5eb,	// (0x0007ba56) mup_spec_bar_pane_g

0x0840,	// (0x0006ccab) aid_cale_week_size_cell_pane_ParamLimits

0x085a,	// (0x0006ccc5) bg_cale_heading_pane_ParamLimits

0xa502,	// (0x0007696d) bg_cale_pane_cp01_ParamLimits

0x0872,	// (0x0006ccdd) cale_week_corner_pane_ParamLimits

0x0891,	// (0x0006ccfc) cale_week_day_heading_pane_ParamLimits

0x08ae,	// (0x0006cd19) cale_week_scroll_pane_g1_ParamLimits

0x08c1,	// (0x0006cd2c) cale_week_scroll_pane_g2_ParamLimits

0x08d9,	// (0x0006cd44) cale_week_scroll_pane_g3_ParamLimits

0x08f1,	// (0x0006cd5c) cale_week_scroll_pane_g4_ParamLimits

0x0909,	// (0x0006cd74) cale_week_scroll_pane_g5_ParamLimits

0x0929,	// (0x0006cd94) cale_week_scroll_pane_g6_ParamLimits

0x0949,	// (0x0006cdb4) cale_week_scroll_pane_g7_ParamLimits

0x0969,	// (0x0006cdd4) cale_week_scroll_pane_g8_ParamLimits

0x098d,	// (0x0006cdf8) cale_week_scroll_pane_g9_ParamLimits

0x09a5,	// (0x0006ce10) cale_week_scroll_pane_g10_ParamLimits

0x09bd,	// (0x0006ce28) cale_week_scroll_pane_g11_ParamLimits

0x09d5,	// (0x0006ce40) cale_week_scroll_pane_g12_ParamLimits

0x09ed,	// (0x0006ce58) cale_week_scroll_pane_g13_ParamLimits

0x09ed,	// (0x0006ce58) cale_week_scroll_pane_g14_ParamLimits

0x09ed,	// (0x0006ce58) cale_week_scroll_pane_g15_ParamLimits

0xf195,	// (0x0007b600) cale_week_scroll_pane_g_ParamLimits

0x0a29,	// (0x0006ce94) cale_week_time_pane_ParamLimits

0x0a4d,	// (0x0006ceb8) grid_cale_week_pane_ParamLimits

0xa51f,	// (0x0007698a) listscroll_cale_week_pane_t1

0xa531,	// (0x0007699c) scroll_pane_cp08_ParamLimits

0x174b,	// (0x0006dbb6) cale_month_corner_pane_ParamLimits

0xadc2,	// (0x0007722d) cale_month_pane_t1

0x1b69,	// (0x0006dfd4) cale_month_week_pane_ParamLimits

0x238b,	// (0x0006e7f6) popup_call_status_window_g1_ParamLimits

0x239f,	// (0x0006e80a) popup_call_status_window_g2_ParamLimits

0x23b3,	// (0x0006e81e) popup_call_status_window_g3_ParamLimits

0xf33b,	// (0x0007b7a6) popup_call_status_window_g_ParamLimits

0xb172,	// (0x000775dd) aid_call2_pane

0x2ae0,	// (0x0006ef4b) msg_header_pane_g1

0x2c76,	// (0x0006f0e1) postcard_address2_pane_ParamLimits

0x2c76,	// (0x0006f0e1) postcard_address2_pane

0x2c88,	// (0x0006f0f3) postcard_message2_pane_ParamLimits

0x2c88,	// (0x0006f0f3) postcard_message2_pane

0x376c,	// (0x0006fbd7) message2_row_pane_ParamLimits

0x376c,	// (0x0006fbd7) message2_row_pane

0x3788,	// (0x0006fbf3) address2_row_pane_ParamLimits

0x3788,	// (0x0006fbf3) address2_row_pane

0xc929,	// (0x00078d94) postcard_message2_row_pane_g1

0xc931,	// (0x00078d9c) postcard_message2_row_pane_t1

0xc929,	// (0x00078d94) address2_row_pane_g1

0xc931,	// (0x00078d9c) address2_row_pane_t1

0x0d7d,	// (0x0006d1e8) aid_size_cell_vorec

0xa0bb,	// (0x00076526) main_rss_pane

0x379b,	// (0x0006fc06) rss_list_single_pane_ParamLimits

0x379b,	// (0x0006fc06) rss_list_single_pane

0xc93f,	// (0x00078daa) rss_list_single_pane_t1

0xc94d,	// (0x00078db8) rss_list_single_pane_t2

0x0001,

0xf5e6,	// (0x0007ba51) rss_list_single_pane_t

0xa0bb,	// (0x00076526) main_camera2_pane

0xa0bb,	// (0x00076526) main_video2_pane

0x3a04,	// (0x0006fe6f) cams_zoom_pane_cp2_ParamLimits

0x3a04,	// (0x0006fe6f) cams_zoom_pane_cp2

0x3a24,	// (0x0006fe8f) image2_vga_pane_ParamLimits

0x3a24,	// (0x0006fe8f) image2_vga_pane

0x3a75,	// (0x0006fee0) main_camera2_pane_g1_ParamLimits

0x3a75,	// (0x0006fee0) main_camera2_pane_g1

0x3a95,	// (0x0006ff00) main_camera2_pane_g2_ParamLimits

0x3a95,	// (0x0006ff00) main_camera2_pane_g2

0x3ab5,	// (0x0006ff20) main_camera2_pane_g3_ParamLimits

0x3ab5,	// (0x0006ff20) main_camera2_pane_g3

0x3ad5,	// (0x0006ff40) main_camera2_pane_g4_ParamLimits

0x3ad5,	// (0x0006ff40) main_camera2_pane_g4

0x3af5,	// (0x0006ff60) main_camera2_pane_g5_ParamLimits

0x3af5,	// (0x0006ff60) main_camera2_pane_g5

0x3b15,	// (0x0006ff80) main_camera2_pane_g6_ParamLimits

0x3b15,	// (0x0006ff80) main_camera2_pane_g6

0x3b35,	// (0x0006ffa0) main_camera2_pane_g7_ParamLimits

0x3b35,	// (0x0006ffa0) main_camera2_pane_g7

0x3b55,	// (0x0006ffc0) main_camera2_pane_g8_ParamLimits

0x3b55,	// (0x0006ffc0) main_camera2_pane_g8

0x0008,

0xf607,	// (0x0007ba72) main_camera2_pane_g_ParamLimits

0xf607,	// (0x0007ba72) main_camera2_pane_g

0x3b95,	// (0x00070000) main_camera2_pane_t1_ParamLimits

0x3b95,	// (0x00070000) main_camera2_pane_t1

0x3bca,	// (0x00070035) main_camera2_pane_t2_ParamLimits

0x3bca,	// (0x00070035) main_camera2_pane_t2

0x3bf0,	// (0x0007005b) main_camera2_pane_t3_ParamLimits

0x3bf0,	// (0x0007005b) main_camera2_pane_t3

0x3c4e,	// (0x000700b9) main_camera2_pane_t4_ParamLimits

0x3c4e,	// (0x000700b9) main_camera2_pane_t4

0x0006,

0xf61a,	// (0x0007ba85) main_camera2_pane_t_ParamLimits

0xf61a,	// (0x0007ba85) main_camera2_pane_t

0x3ce0,	// (0x0007014b) cams_zoom_pane_cp4_ParamLimits

0x3ce0,	// (0x0007014b) cams_zoom_pane_cp4

0x3cf6,	// (0x00070161) image2_cif_pane_ParamLimits

0x3cf6,	// (0x00070161) image2_cif_pane

0x3d21,	// (0x0007018c) image2_subqcif_pane_ParamLimits

0x3d21,	// (0x0007018c) image2_subqcif_pane

0x3d3b,	// (0x000701a6) main_video2_pane_g1_ParamLimits

0x3d3b,	// (0x000701a6) main_video2_pane_g1

0x3d55,	// (0x000701c0) main_video2_pane_g2_ParamLimits

0x3d55,	// (0x000701c0) main_video2_pane_g2

0x3d6b,	// (0x000701d6) main_video2_pane_g3_ParamLimits

0x3d6b,	// (0x000701d6) main_video2_pane_g3

0x3d81,	// (0x000701ec) main_video2_pane_g4_ParamLimits

0x3d81,	// (0x000701ec) main_video2_pane_g4

0x3d97,	// (0x00070202) main_video2_pane_g5_ParamLimits

0x3d97,	// (0x00070202) main_video2_pane_g5

0x3dad,	// (0x00070218) main_video2_pane_g6_ParamLimits

0x3dad,	// (0x00070218) main_video2_pane_g6

0x0005,

0xf629,	// (0x0007ba94) main_video2_pane_g_ParamLimits

0xf629,	// (0x0007ba94) main_video2_pane_g

0x3dc7,	// (0x00070232) main_video2_pane_t1_ParamLimits

0x3dc7,	// (0x00070232) main_video2_pane_t1

0x3deb,	// (0x00070256) main_video2_pane_t2_ParamLimits

0x3deb,	// (0x00070256) main_video2_pane_t2

0x3e39,	// (0x000702a4) main_video2_pane_t3_ParamLimits

0x3e39,	// (0x000702a4) main_video2_pane_t3

0x0002,

0xf636,	// (0x0007baa1) main_video2_pane_t_ParamLimits

0xf636,	// (0x0007baa1) main_video2_pane_t

0x32a6,	// (0x0006f711) call_muted_g2

0x0001,

0xf5d8,	// (0x0007ba43) call_muted_g

0xa0bb,	// (0x00076526) main_mup2_pane

0x3e7d,	// (0x000702e8) main_mup2_pane_g1_ParamLimits

0x3e7d,	// (0x000702e8) main_mup2_pane_g1

0x3e89,	// (0x000702f4) main_mup2_pane_g2_ParamLimits

0x3e89,	// (0x000702f4) main_mup2_pane_g2

0x9b6e,	// (0x00075fd9) main_mup_pane_g13_cp1

0x9b76,	// (0x00075fe1) mup_volume_pane_cp1

0x3ea5,	// (0x00070310) main_mup2_pane_g4_ParamLimits

0x3ea5,	// (0x00070310) main_mup2_pane_g4

0x3eb7,	// (0x00070322) main_mup2_pane_g5_ParamLimits

0x3eb7,	// (0x00070322) main_mup2_pane_g5

0x3ec9,	// (0x00070334) main_mup2_pane_g6_ParamLimits

0x3ec9,	// (0x00070334) main_mup2_pane_g6

0x3edb,	// (0x00070346) main_mup2_pane_g7_ParamLimits

0x3edb,	// (0x00070346) main_mup2_pane_g7

0x0006,

0xf63d,	// (0x0007baa8) main_mup2_pane_g_ParamLimits

0xf63d,	// (0x0007baa8) main_mup2_pane_g

0x3ef3,	// (0x0007035e) main_mup2_pane_t1_ParamLimits

0x3ef3,	// (0x0007035e) main_mup2_pane_t1

0x3f09,	// (0x00070374) main_mup2_pane_t2_ParamLimits

0x3f09,	// (0x00070374) main_mup2_pane_t2

0x3f1f,	// (0x0007038a) main_mup2_pane_t3_ParamLimits

0x3f1f,	// (0x0007038a) main_mup2_pane_t3

0x3f35,	// (0x000703a0) main_mup2_pane_t4_ParamLimits

0x3f35,	// (0x000703a0) main_mup2_pane_t4

0x3f4d,	// (0x000703b8) main_mup2_pane_t5_ParamLimits

0x3f4d,	// (0x000703b8) main_mup2_pane_t5

0x3f65,	// (0x000703d0) main_mup2_pane_t6_ParamLimits

0x3f65,	// (0x000703d0) main_mup2_pane_t6

0x0005,

0xf64c,	// (0x0007bab7) main_mup2_pane_t_ParamLimits

0xf64c,	// (0x0007bab7) main_mup2_pane_t

0x3f95,	// (0x00070400) mup2_visualizer_pane_ParamLimits

0x3f95,	// (0x00070400) mup2_visualizer_pane

0x3fc3,	// (0x0007042e) mup_progress_pane_cp_ParamLimits

0x3fc3,	// (0x0007042e) mup_progress_pane_cp

0x9b59,	// (0x00075fc4) mup_volume_pane_cp_ParamLimits

0x9b59,	// (0x00075fc4) mup_volume_pane_cp

0x3fd7,	// (0x00070442) mup2_visualizer_pane_g1_ParamLimits

0x3fd7,	// (0x00070442) mup2_visualizer_pane_g1

0xc9ae,	// (0x00078e19) mup2_visualizer_pane_g2_ParamLimits

0xc9ae,	// (0x00078e19) mup2_visualizer_pane_g2

0x3fee,	// (0x00070459) mup2_visualizer_pane_g3_ParamLimits

0x3fee,	// (0x00070459) mup2_visualizer_pane_g3

0x0002,

0xf659,	// (0x0007bac4) mup2_visualizer_pane_g_ParamLimits

0xf659,	// (0x0007bac4) mup2_visualizer_pane_g

0xb7e2,	// (0x00077c4d) aid_size_cell_fmradio

0x3458,	// (0x0006f8c3) aid_height_parent_landcape

0xa739,	// (0x00076ba4) wml_content_pane_cp

0xa741,	// (0x00076bac) wml_tabs_pane

0xa74a,	// (0x00076bb5) popup_wml_miniature_window

0xa752,	// (0x00076bbd) scroll_pane_cp021

0xa766,	// (0x00076bd1) wml_content_pane_comp8

0xa0bb,	// (0x00076526) bg_popup_sub_pane_cp05

0xc9cc,	// (0x00078e37) popup_wml_miniature_window_g1

0xc9d4,	// (0x00078e3f) wml_miniature_view_pane

0x3ffa,	// (0x00070465) aid_size_wml_view

0x4002,	// (0x0007046d) wml_miniature_view_pane_g1

0x400b,	// (0x00070476) wml_miniature_view_pane_g2

0x4014,	// (0x0007047f) wml_miniature_view_pane_g3

0x401c,	// (0x00070487) wml_miniature_view_pane_g4

0x4024,	// (0x0007048f) wml_miniature_view_pane_g5

0x402c,	// (0x00070497) wml_miniature_view_pane_g6

0x4034,	// (0x0007049f) wml_miniature_view_pane_g7

0x403c,	// (0x000704a7) wml_miniature_view_pane_g8

0x0007,

0xf660,	// (0x0007bacb) wml_miniature_view_pane_g

0xc9dc,	// (0x00078e47) background_graphic_ParamLimits

0xc9dc,	// (0x00078e47) background_graphic

0xc9e8,	// (0x00078e53) wml_tabs_2_pane

0xc9f1,	// (0x00078e5c) wml_tabs_3_pane_ParamLimits

0xc9f1,	// (0x00078e5c) wml_tabs_3_pane

0xca03,	// (0x00078e6e) wml_tabs_4_pane_ParamLimits

0xca03,	// (0x00078e6e) wml_tabs_4_pane

0xca19,	// (0x00078e84) wml_tabs_5_pane_ParamLimits

0xca19,	// (0x00078e84) wml_tabs_5_pane

0xca33,	// (0x00078e9e) wml_tabs_pane_g2_ParamLimits

0xca33,	// (0x00078e9e) wml_tabs_pane_g2

0xca47,	// (0x00078eb2) wml_tabs_pane_g3_ParamLimits

0xca47,	// (0x00078eb2) wml_tabs_pane_g3

0x4044,	// (0x000704af) wml_tabs_2_active_pane_ParamLimits

0x4044,	// (0x000704af) wml_tabs_2_active_pane

0x4058,	// (0x000704c3) wml_tabs_2_passive_pane_ParamLimits

0x4058,	// (0x000704c3) wml_tabs_2_passive_pane

0x406c,	// (0x000704d7) wml_tabs_3_active_pane_cp_ParamLimits

0x406c,	// (0x000704d7) wml_tabs_3_active_pane_cp

0x4081,	// (0x000704ec) wml_tabs_3_passive_pane_ParamLimits

0x4081,	// (0x000704ec) wml_tabs_3_passive_pane

0x4094,	// (0x000704ff) wml_tabs_3_passive_pane_cp_ParamLimits

0x4094,	// (0x000704ff) wml_tabs_3_passive_pane_cp

0x40ab,	// (0x00070516) tabs_4_active_pane

0x40b3,	// (0x0007051e) tabs_4_passive_pane

0x40bd,	// (0x00070528) tabs_4_passive_pane_cp

0x40c5,	// (0x00070530) tabs_4_passive_pane_cp2

0x3173,	// (0x0006f5de) aid_height_text

0x2846,	// (0x0006ecb1) mup_volume_cont_pane_ParamLimits

0x2846,	// (0x0006ecb1) mup_volume_cont_pane

0x0421,	// (0x0006c88c) aid_size_cell_pinb

0x042b,	// (0x0006c896) aid_size_list_pinb

0x3faf,	// (0x0007041a) mup2_volume_cont_pane_ParamLimits

0x3faf,	// (0x0007041a) mup2_volume_cont_pane

0x9b45,	// (0x00075fb0) mup2_volume_cont_pane_g1_ParamLimits

0x9b45,	// (0x00075fb0) mup2_volume_cont_pane_g1

0x00d4,	// (0x0006c53f) aid_size_cell_touch_ParamLimits

0x00d4,	// (0x0006c53f) aid_size_cell_touch

0x0311,	// (0x0006c77c) touch_pane_ParamLimits

0x0311,	// (0x0006c77c) touch_pane

0x9501,	// (0x0007596c) main_rss2_pane

0xca64,	// (0x00078ecf) listscroll_rss2_pane

0xca6d,	// (0x00078ed8) rss2_navigation_pane

0xca75,	// (0x00078ee0) list_rss2_pane

0xb2b5,	// (0x00077720) scroll_pane_cp22

0xca7d,	// (0x00078ee8) rss2_navigation_pane_g1

0xca86,	// (0x00078ef1) rss2_navigation_pane_g2

0xca8e,	// (0x00078ef9) rss2_navigation_pane_g3

0x0002,

0xf671,	// (0x0007badc) rss2_navigation_pane_g

0xca96,	// (0x00078f01) rss2_navigation_pane_t1

0x40cf,	// (0x0007053a) rss2_list_single_pane_ParamLimits

0x40cf,	// (0x0007053a) rss2_list_single_pane

0xcaa4,	// (0x00078f0f) rss2_list_single_pane_t2

0xcab2,	// (0x00078f1d) rss2_list_single_pane_t3_ParamLimits

0xcab2,	// (0x00078f1d) rss2_list_single_pane_t3

0xcacf,	// (0x00078f3a) rss2_list_single_pane_t4

0x2195,	// (0x0006e600) smil_status_pane_g1

0x94f3,	// (0x0007595e) main_image2_pane_ParamLimits

0x94f3,	// (0x0007595e) main_image2_pane

0x3b75,	// (0x0006ffe0) main_camera2_pane_g9_ParamLimits

0x3b75,	// (0x0006ffe0) main_camera2_pane_g9

0x3ca3,	// (0x0007010e) main_camera2_pane_t5_ParamLimits

0x3ca3,	// (0x0007010e) main_camera2_pane_t5

0x9b15,	// (0x00075f80) main_camera2_pane_t6_ParamLimits

0x9b15,	// (0x00075f80) main_camera2_pane_t6

0x40e4,	// (0x0007054f) main_image2_pane_g1_ParamLimits

0x40e4,	// (0x0007054f) main_image2_pane_g1

0x2eaf,	// (0x0006f31a) smil2_video_pane_ParamLimits

0x2eaf,	// (0x0006f31a) smil2_video_pane

0x010c,	// (0x0006c577) aid_zoom_text_primary_cp

0x94e9,	// (0x00075954) popup_preview_fixed_window

0xa6a2,	// (0x00076b0d) im_reading_pane_g1

0x39ec,	// (0x0006fe57) cams2_bc_adjust_pane_cp_ParamLimits

0x39ec,	// (0x0006fe57) cams2_bc_adjust_pane_cp

0x3cd2,	// (0x0007013d) cams2_bc_adjust_pane_ParamLimits

0x3cd2,	// (0x0007013d) cams2_bc_adjust_pane

0xd17e,	// (0x000795e9) cams2_bc_adjust_pane_g1

0x9b7e,	// (0x00075fe9) cams2_slider_pane

0x9b87,	// (0x00075ff2) cams2_slider_pane_g1

0x9b90,	// (0x00075ffb) cams2_slider_pane_g2

0x0006,

0xf678,	// (0x0007bae3) cams2_slider_pane_g

0x0519,	// (0x0006c984) calc_display_pane_ParamLimits

0x053e,	// (0x0006c9a9) calc_paper_pane_ParamLimits

0x0561,	// (0x0006c9cc) grid_calc_pane_ParamLimits

0x9a3a,	// (0x00075ea5) popup_clock_digital_window_t1_ParamLimits

0xb77f,	// (0x00077bea) main_image_pane_t1

0x04fb,	// (0x0006c966) aid_size_cell_calc_ParamLimits

0x04fb,	// (0x0006c966) aid_size_cell_calc

0x34b0,	// (0x0006f91b) popup_blid_sat_info2_window_ParamLimits

0x34b0,	// (0x0006f91b) popup_blid_sat_info2_window

0xcae5,	// (0x00078f50) aid_size_cell_blid

0xcaed,	// (0x00078f58) bg_popup_window_pane_cp07

0xcb10,	// (0x00078f7b) grid_popup_blid_pane

0xcb1a,	// (0x00078f85) heading_pane_cp05_ParamLimits

0xcb1a,	// (0x00078f85) heading_pane_cp05

0xcbe4,	// (0x0007904f) cell_popup_blid_pane_ParamLimits

0xcbe4,	// (0x0007904f) cell_popup_blid_pane

0xcc08,	// (0x00079073) cell_popup_blid_pane_g1

0xcc10,	// (0x0007907b) cell_popup_blid_pane_t1

0x3f7f,	// (0x000703ea) mup2_indicator_pane_ParamLimits

0x3f7f,	// (0x000703ea) mup2_indicator_pane

0xa5a9,	// (0x00076a14) mup2_visualizer_osc_pane

0xc9ba,	// (0x00078e25) mup2_visualizer_spec_pane_ParamLimits

0xc9ba,	// (0x00078e25) mup2_visualizer_spec_pane

0x40fa,	// (0x00070565) mup2_spec_half_pane

0x4103,	// (0x0007056e) mup2_spec_half_pane_cp

0x410b,	// (0x00070576) mup2_spec_bar_pane_ParamLimits

0x410b,	// (0x00070576) mup2_spec_bar_pane

0xc95b,	// (0x00078dc6) mup2_spec_bar_pane_g1

0xc965,	// (0x00078dd0) mup2_spec_bar_pane_g2

0x0001,

0xf5eb,	// (0x0007ba56) mup2_spec_bar_pane_g

0x412b,	// (0x00070596) mup2_osc_middle_pane

0xc977,	// (0x00078de2) mup2_visualizer_osc_pane_g1

0x952b,	// (0x00075996) popup_number_entry_window_t1_ParamLimits

0x953e,	// (0x000759a9) popup_number_entry_window_t2_ParamLimits

0x9550,	// (0x000759bb) popup_number_entry_window_t3_ParamLimits

0x0363,	// (0x0006c7ce) popup_number_entry_window_t5_ParamLimits

0x0363,	// (0x0006c7ce) popup_number_entry_window_t5

0xf0af,	// (0x0007b51a) popup_number_entry_window_t_ParamLimits

0x9562,	// (0x000759cd) text_title_cp2_ParamLimits

0x9a79,	// (0x00075ee4) aid_hotspot_pointer_text2_pane

0x9a93,	// (0x00075efe) main_viewer_pane_g9_ParamLimits

0x9a93,	// (0x00075efe) main_viewer_pane_g9

0xadc2,	// (0x0007722d) cale_month_pane_t1_ParamLimits

0xadff,	// (0x0007726a) bg_cale_pane_ParamLimits

0xae17,	// (0x00077282) list_cale_pane_ParamLimits

0xae28,	// (0x00077293) listscroll_cale_day_pane_t1

0xae3a,	// (0x000772a5) scroll_pane_cp09_ParamLimits

0x2878,	// (0x0006ece3) main_mup_eq_pane_t1_ParamLimits

0x2878,	// (0x0006ece3) main_mup_eq_pane_t1

0x2892,	// (0x0006ecfd) main_mup_eq_pane_t2_ParamLimits

0x2892,	// (0x0006ecfd) main_mup_eq_pane_t2

0x28ac,	// (0x0006ed17) main_mup_eq_pane_t3_ParamLimits

0x28ac,	// (0x0006ed17) main_mup_eq_pane_t3

0x28c8,	// (0x0006ed33) main_mup_eq_pane_t4_ParamLimits

0x28c8,	// (0x0006ed33) main_mup_eq_pane_t4

0x28e4,	// (0x0006ed4f) main_mup_eq_pane_t5_ParamLimits

0x28e4,	// (0x0006ed4f) main_mup_eq_pane_t5

0x2900,	// (0x0006ed6b) main_mup_eq_pane_t6_ParamLimits

0x2900,	// (0x0006ed6b) main_mup_eq_pane_t6

0x2914,	// (0x0006ed7f) main_mup_eq_pane_t7_ParamLimits

0x2914,	// (0x0006ed7f) main_mup_eq_pane_t7

0x2928,	// (0x0006ed93) main_mup_eq_pane_t8_ParamLimits

0x2928,	// (0x0006ed93) main_mup_eq_pane_t8

0x293c,	// (0x0006eda7) main_mup_eq_pane_t9_ParamLimits

0x293c,	// (0x0006eda7) main_mup_eq_pane_t9

0x2956,	// (0x0006edc1) main_mup_eq_pane_t10_ParamLimits

0x2956,	// (0x0006edc1) main_mup_eq_pane_t10

0x0009,

0xf43a,	// (0x0007b8a5) main_mup_eq_pane_t_ParamLimits

0xf43a,	// (0x0007b8a5) main_mup_eq_pane_t

0x2a05,	// (0x0006ee70) mup_equalizer_pane_cp5_ParamLimits

0x2a19,	// (0x0006ee84) mup_equalizer_pane_cp6_ParamLimits

0x2a2d,	// (0x0006ee98) mup_equalizer_pane_cp7_ParamLimits

0x9501,	// (0x0007596c) main_gallery_pane

0xc980,	// (0x00078deb) smil2_volume_pane

0xc988,	// (0x00078df3) smil_status_volume_pane_g1_ParamLimits

0xc99b,	// (0x00078e06) smil_status_volume_pane_g2_ParamLimits

0x9af3,	// (0x00075f5e) smil_status_volume_pane_g3_ParamLimits

0xf5f0,	// (0x0007ba5b) smil_status_volume_pane_g_ParamLimits

0xcaed,	// (0x00078f58) bg_popup_window_pane_cp07_ParamLimits

0xcafb,	// (0x00078f66) blid_firmament_pane

0x4134,	// (0x0007059f) aid_size_cell_gallery_ParamLimits

0x4134,	// (0x0007059f) aid_size_cell_gallery

0x414a,	// (0x000705b5) grid_gallery_pane_ParamLimits

0x414a,	// (0x000705b5) grid_gallery_pane

0x4163,	// (0x000705ce) cell_gallery_pane_ParamLimits

0x4163,	// (0x000705ce) cell_gallery_pane

0xcc1e,	// (0x00079089) bg_cell_gallery_focus_pane_ParamLimits

0xcc1e,	// (0x00079089) bg_cell_gallery_focus_pane

0xcc30,	// (0x0007909b) cell_gallery_pane_g1_ParamLimits

0xcc30,	// (0x0007909b) cell_gallery_pane_g1

0x41ac,	// (0x00070617) cell_gallery_pane_g2_ParamLimits

0x41ac,	// (0x00070617) cell_gallery_pane_g2

0x41b9,	// (0x00070624) cell_gallery_pane_g3_ParamLimits

0x41b9,	// (0x00070624) cell_gallery_pane_g3

0xcc3c,	// (0x000790a7) cell_gallery_pane_g4_ParamLimits

0xcc3c,	// (0x000790a7) cell_gallery_pane_g4

0x0003,

0xf69e,	// (0x0007bb09) cell_gallery_pane_g_ParamLimits

0xf69e,	// (0x0007bb09) cell_gallery_pane_g

0xcc48,	// (0x000790b3) bg_cell_gallery_focus_pane_g1

0xcc50,	// (0x000790bb) bg_cell_gallery_focus_pane_g2

0xcc58,	// (0x000790c3) bg_cell_gallery_focus_pane_g3

0xcc60,	// (0x000790cb) bg_cell_gallery_focus_pane_g4

0xcc68,	// (0x000790d3) bg_cell_gallery_focus_pane_g5

0xcc70,	// (0x000790db) bg_cell_gallery_focus_pane_g6

0xcc78,	// (0x000790e3) bg_cell_gallery_focus_pane_g7

0xcc80,	// (0x000790eb) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6a7,	// (0x0007bb12) bg_cell_gallery_focus_pane_g

0xcc88,	// (0x000790f3) aid_firma_cardinal

0xcc9c,	// (0x00079107) blid_firmament_pane_t1

0xccb3,	// (0x0007911e) blid_firmament_pane_t2

0xccca,	// (0x00079135) blid_firmament_pane_t3

0xcce1,	// (0x0007914c) blid_firmament_pane_t4

0x0003,

0xf6b8,	// (0x0007bb23) blid_firmament_pane_t

0xccf8,	// (0x00079163) blid_sat_info_pane

0xcd08,	// (0x00079173) blid_sat_info_pane_g1

0xcd08,	// (0x00079173) blid_sat_info_pane_g2

0x0001,

0xf6c1,	// (0x0007bb2c) blid_sat_info_pane_g

0xcd12,	// (0x0007917d) blid_sat_info_pane_t1

0xcd20,	// (0x0007918b) smil2_volume_content_pane

0xcd29,	// (0x00079194) smil2_volume_pane_g1

0xa45c,	// (0x000768c7) smil2_volume_content_pane_g1

0xcd31,	// (0x0007919c) smil2_volume_content_pane_g2

0xcd3a,	// (0x000791a5) smil2_volume_content_pane_g3

0xcd43,	// (0x000791ae) smil2_volume_content_pane_g4

0xcd4c,	// (0x000791b7) smil2_volume_content_pane_g5

0xcd55,	// (0x000791c0) smil2_volume_content_pane_g6

0xcd5e,	// (0x000791c9) smil2_volume_content_pane_g7

0xcd67,	// (0x000791d2) smil2_volume_content_pane_g8

0xcd70,	// (0x000791db) smil2_volume_content_pane_g9

0xcd79,	// (0x000791e4) smil2_volume_content_pane_g10

0x0009,

0xf6c6,	// (0x0007bb31) smil2_volume_content_pane_g

0x0b01,	// (0x0006cf6c) cale_week_day_heading_pane_t1_ParamLimits

0x0b2b,	// (0x0006cf96) cale_week_day_heading_pane_t2_ParamLimits

0x0b5a,	// (0x0006cfc5) cale_week_day_heading_pane_t3_ParamLimits

0x0b89,	// (0x0006cff4) cale_week_day_heading_pane_t4_ParamLimits

0x0bb8,	// (0x0006d023) cale_week_day_heading_pane_t5_ParamLimits

0x0bef,	// (0x0006d05a) cale_week_day_heading_pane_t6_ParamLimits

0x0c26,	// (0x0006d091) cale_week_day_heading_pane_t7_ParamLimits

0xf1b6,	// (0x0007b621) cale_week_day_heading_pane_t_ParamLimits

0xa54e,	// (0x000769b9) bg_cale_side_pane_ParamLimits

0x0c50,	// (0x0006d0bb) cale_week_time_pane_t1_ParamLimits

0x0c6a,	// (0x0006d0d5) cale_week_time_pane_t2_ParamLimits

0x0c84,	// (0x0006d0ef) cale_week_time_pane_t3_ParamLimits

0x0c9e,	// (0x0006d109) cale_week_time_pane_t4_ParamLimits

0x0cb8,	// (0x0006d123) cale_week_time_pane_t5_ParamLimits

0x0cd2,	// (0x0006d13d) cale_week_time_pane_t6_ParamLimits

0x0cec,	// (0x0006d157) cale_week_time_pane_t7_ParamLimits

0x0d06,	// (0x0006d171) cale_week_time_pane_t8_ParamLimits

0xf1c5,	// (0x0007b630) cale_week_time_pane_t_ParamLimits

0x0d20,	// (0x0006d18b) cell_cale_week_pane_g2_ParamLimits

0xa54e,	// (0x000769b9) bg_cale_side_pane_cp01_ParamLimits

0x1f72,	// (0x0006e3dd) cale_month_week_pane_t1_ParamLimits

0x1f8b,	// (0x0006e3f6) cale_month_week_pane_t2_ParamLimits

0x1fa4,	// (0x0006e40f) cale_month_week_pane_t3_ParamLimits

0x1fbd,	// (0x0006e428) cale_month_week_pane_t4_ParamLimits

0x1fd6,	// (0x0006e441) cale_month_week_pane_t5_ParamLimits

0x1fef,	// (0x0006e45a) cale_month_week_pane_t6_ParamLimits

0xf29a,	// (0x0007b705) cale_month_week_pane_t_ParamLimits

0x99b6,	// (0x00075e21) cell_cale_month_pane_g1_ParamLimits

0x9501,	// (0x0007596c) main_cale_event_viewer_pane

0x948b,	// (0x000758f6) listscroll_cale_event_viewer_pane

0xcd82,	// (0x000791ed) list_cale_ev_pane

0xcd8a,	// (0x000791f5) scroll_pane_cp023

0xcd96,	// (0x00079201) field_cale_ev_pane_ParamLimits

0xcd96,	// (0x00079201) field_cale_ev_pane

0xcdb4,	// (0x0007921f) field_cale_ev_content_pane_ParamLimits

0xcdb4,	// (0x0007921f) field_cale_ev_content_pane

0xcdc0,	// (0x0007922b) field_cale_ev_pane_g1_ParamLimits

0xcdc0,	// (0x0007922b) field_cale_ev_pane_g1

0xcdcc,	// (0x00079237) field_cale_ev_pane_g2_ParamLimits

0xcdcc,	// (0x00079237) field_cale_ev_pane_g2

0xcde4,	// (0x0007924f) field_cale_ev_pane_g3_ParamLimits

0xcde4,	// (0x0007924f) field_cale_ev_pane_g3

0x0002,

0xf6db,	// (0x0007bb46) field_cale_ev_pane_g_ParamLimits

0xf6db,	// (0x0007bb46) field_cale_ev_pane_g

0xcdfc,	// (0x00079267) field_cale_ev_pane_t1_ParamLimits

0xcdfc,	// (0x00079267) field_cale_ev_pane_t1

0xce13,	// (0x0007927e) field_cale_ev_content_pane_t1_ParamLimits

0xce13,	// (0x0007927e) field_cale_ev_content_pane_t1

0xb665,	// (0x00077ad0) bg_button_pane_cp01

0x082e,	// (0x0006cc99) listscroll_cale_week_pane_ParamLimits

0xa4f9,	// (0x00076964) popup_toolbar_window_cp01

0xa51f,	// (0x0007698a) listscroll_cale_week_pane_t1_ParamLimits

0x082e,	// (0x0006cc99) listscroll_cale_day_pane_ParamLimits

0xa4f9,	// (0x00076964) popup_toolbar_window_cp02

0xae28,	// (0x00077293) listscroll_cale_day_pane_t1_ParamLimits

0x3476,	// (0x0006f8e1) main_cale_month_pane_ParamLimits

0x9ade,	// (0x00075f49) popup_toolbar_window_cp03_ParamLimits

0x9ade,	// (0x00075f49) popup_toolbar_window_cp03

0x2d77,	// (0x0006f1e2) main_image_pane_g2_ParamLimits

0x2d77,	// (0x0006f1e2) main_image_pane_g2

0x2d88,	// (0x0006f1f3) main_image_pane_g3_ParamLimits

0x2d88,	// (0x0006f1f3) main_image_pane_g3

0x0002,

0xf4cc,	// (0x0007b937) main_image_pane_g_ParamLimits

0xf4cc,	// (0x0007b937) main_image_pane_g

0xb77f,	// (0x00077bea) main_image_pane_t1_ParamLimits

0x2d99,	// (0x0006f204) main_image_pane_t2_ParamLimits

0x2d99,	// (0x0006f204) main_image_pane_t2

0x2dab,	// (0x0006f216) main_image_pane_t3_ParamLimits

0x2dab,	// (0x0006f216) main_image_pane_t3

0x2dd3,	// (0x0006f23e) main_image_pane_t4_ParamLimits

0x2dd3,	// (0x0006f23e) main_image_pane_t4

0x0003,

0xf4d3,	// (0x0007b93e) main_image_pane_t_ParamLimits

0xf4d3,	// (0x0007b93e) main_image_pane_t

0x2df3,	// (0x0006f25e) popup_image_details_window_cp01

0x2dfd,	// (0x0006f268) popup_toobar_trans_pane_cp01_ParamLimits

0x2dfd,	// (0x0006f268) popup_toobar_trans_pane_cp01

0x358f,	// (0x0006f9fa) popup_image_details_window_ParamLimits

0x358f,	// (0x0006f9fa) popup_image_details_window

0x9ab1,	// (0x00075f1c) popup_image_focus_window

0x39a6,	// (0x0006fe11) camera2_autofocus_pane_ParamLimits

0x39a6,	// (0x0006fe11) camera2_autofocus_pane

0x948b,	// (0x000758f6) bg_popup_sub_pane_cp06

0xce31,	// (0x0007929c) popup_image_focus_window_g1

0xce39,	// (0x000792a4) popup_image_focus_window_g2

0xce41,	// (0x000792ac) popup_image_focus_window_g3

0xce49,	// (0x000792b4) popup_image_focus_window_g4

0x0003,

0xf6e2,	// (0x0007bb4d) popup_image_focus_window_g

0xce51,	// (0x000792bc) popup_image_focus_window_t1

0xce5f,	// (0x000792ca) popup_image_focus_window_t2

0xce6f,	// (0x000792da) popup_image_focus_window_t3

0x0002,

0xf6eb,	// (0x0007bb56) popup_image_focus_window_t

0xce7d,	// (0x000792e8) camera2_autofocus_pane_g1

0xa838,	// (0x00076ca3) bg_tb_trans_pane_cp01

0xce8b,	// (0x000792f6) popup_image_details_window_g1

0xce9e,	// (0x00079309) popup_image_details_window_g2

0x0002,

0xf6fd,	// (0x0007bb68) popup_image_details_window_g

0xcec7,	// (0x00079332) popup_image_details_window_t1

0xced9,	// (0x00079344) popup_image_details_window_t2

0xcef2,	// (0x0007935d) popup_image_details_window_t3

0xcf06,	// (0x00079371) popup_image_details_window_t4

0xcf21,	// (0x0007938c) popup_image_details_window_t5

0x0004,

0xf704,	// (0x0007bb6f) popup_image_details_window_t

0xa3c7,	// (0x00076832) bg_calc_paper_pane_ParamLimits

0x9501,	// (0x0007596c) grid_highlight_pane_cp013

0x9926,	// (0x00075d91) list_calc_pane_ParamLimits

0x9938,	// (0x00075da3) scroll_pane_cp024

0xa3db,	// (0x00076846) bg_calc_display_pane_ParamLimits

0x065f,	// (0x0006caca) calc_display_pane_t1_ParamLimits

0x0674,	// (0x0006cadf) calc_display_pane_t2_ParamLimits

0x9940,	// (0x00075dab) calc_display_pane_t3_ParamLimits

0xf136,	// (0x0007b5a1) calc_display_pane_t_ParamLimits

0x0734,	// (0x0006cb9f) cell_calc_pane_g2

0x0001,

0xf153,	// (0x0007b5be) cell_calc_pane_g

0x073d,	// (0x0006cba8) cell_calc_pane_t1

0xa43a,	// (0x000768a5) grid_highlight_pane_cp02_ParamLimits

0xa450,	// (0x000768bb) toolbar_button_pane_cp01_ParamLimits

0xa450,	// (0x000768bb) toolbar_button_pane_cp01

0xb7c4,	// (0x00077c2f) temp_image_control_pane_ParamLimits

0xb7c4,	// (0x00077c2f) temp_image_control_pane

0x94f3,	// (0x0007595e) main_mp3_pane

0xcf3b,	// (0x000793a6) temp_image_control_pane_g1_ParamLimits

0xcf3b,	// (0x000793a6) temp_image_control_pane_g1

0xcf49,	// (0x000793b4) temp_image_control_pane_g2_ParamLimits

0xcf49,	// (0x000793b4) temp_image_control_pane_g2

0xcf5b,	// (0x000793c6) temp_image_control_pane_g3_ParamLimits

0xcf5b,	// (0x000793c6) temp_image_control_pane_g3

0x41f6,	// (0x00070661) temp_image_control_pane_g4_ParamLimits

0x41f6,	// (0x00070661) temp_image_control_pane_g4

0x0003,

0xf70f,	// (0x0007bb7a) temp_image_control_pane_g_ParamLimits

0xf70f,	// (0x0007bb7a) temp_image_control_pane_g

0xcf3b,	// (0x000793a6) main_mp3_pane_g1

0x4209,	// (0x00070674) main_mp3_pane_g2

0x0007,

0xf718,	// (0x0007bb83) main_mp3_pane_g

0xcf9e,	// (0x00079409) main_mp3_pane_t1

0xa5b1,	// (0x00076a1c) main_camera_pane_g8_ParamLimits

0xa5b1,	// (0x00076a1c) main_camera_pane_g8

0x101a,	// (0x0006d485) main_video_pane_g7_ParamLimits

0x101a,	// (0x0006d485) main_video_pane_g7

0x9b33,	// (0x00075f9e) main_camera2_pane_t7_ParamLimits

0x9b33,	// (0x00075f9e) main_camera2_pane_t7

0xa6f9,	// (0x00076b64) scroll_pane_cp025_ParamLimits

0xa6f9,	// (0x00076b64) scroll_pane_cp025

0xa70d,	// (0x00076b78) scroll_pane_cp026_ParamLimits

0xa70d,	// (0x00076b78) scroll_pane_cp026

0xa71c,	// (0x00076b87) wml_content_pane_ParamLimits

0x9501,	// (0x0007596c) main_touch_calib_pane

0x42dd,	// (0x00070748) main_touch_calib_pane_g1

0x42ef,	// (0x0007075a) main_touch_calib_pane_g2

0x4301,	// (0x0007076c) main_touch_calib_pane_g3

0x4313,	// (0x0007077e) main_touch_calib_pane_g4

0x0003,

0xf736,	// (0x0007bba1) main_touch_calib_pane_g

0x4325,	// (0x00070790) main_touch_calib_pane_t1

0x433f,	// (0x000707aa) main_touch_calib_pane_t2

0x0004,

0xf73f,	// (0x0007bbaa) main_touch_calib_pane_t

0xb391,	// (0x000777fc) mup_progress_pane_cp02

0xb3c6,	// (0x00077831) navi_pane_g1

0xb481,	// (0x000778ec) navi_pane_mp_t3

0x94f3,	// (0x0007595e) main_mp3_pane_ParamLimits

0x3714,	// (0x0006fb7f) navi_pane_ParamLimits

0xcf3b,	// (0x000793a6) main_mp3_pane_g1_ParamLimits

0x4209,	// (0x00070674) main_mp3_pane_g2_ParamLimits

0x4217,	// (0x00070682) main_mp3_pane_g3_ParamLimits

0x4217,	// (0x00070682) main_mp3_pane_g3

0x4225,	// (0x00070690) main_mp3_pane_g4_ParamLimits

0x4225,	// (0x00070690) main_mp3_pane_g4

0xcf6b,	// (0x000793d6) main_mp3_pane_g5_ParamLimits

0xcf6b,	// (0x000793d6) main_mp3_pane_g5

0xcf79,	// (0x000793e4) main_mp3_pane_g6_ParamLimits

0xcf79,	// (0x000793e4) main_mp3_pane_g6

0xcf86,	// (0x000793f1) main_mp3_pane_g7_ParamLimits

0xcf86,	// (0x000793f1) main_mp3_pane_g7

0xcf92,	// (0x000793fd) main_mp3_pane_g8_ParamLimits

0xcf92,	// (0x000793fd) main_mp3_pane_g8

0xf718,	// (0x0007bb83) main_mp3_pane_g_ParamLimits

0x4231,	// (0x0007069c) main_mp3_pane_t2

0x423f,	// (0x000706aa) main_mp3_pane_t3

0xcfac,	// (0x00079417) main_mp3_pane_t4

0xcfba,	// (0x00079425) main_mp3_pane_t5

0x0005,

0xf729,	// (0x0007bb94) main_mp3_pane_t

0xcfc8,	// (0x00079433) mup_progress_pane_cp01

0x010c,	// (0x0006c577) aid_zoom_text_secondary2

0xcd82,	// (0x000791ed) list_cale_ev2_pane

0xcd8a,	// (0x000791f5) scroll_pane_cp023_ParamLimits

0x4395,	// (0x00070800) field_cale_ev2_pane_ParamLimits

0x4395,	// (0x00070800) field_cale_ev2_pane

0xa846,	// (0x00076cb1) field_cale_ev2_pane_g1_ParamLimits

0xa846,	// (0x00076cb1) field_cale_ev2_pane_g1

0xa852,	// (0x00076cbd) field_cale_ev2_pane_g2_ParamLimits

0xa852,	// (0x00076cbd) field_cale_ev2_pane_g2

0xa86a,	// (0x00076cd5) field_cale_ev2_pane_g3_ParamLimits

0xa86a,	// (0x00076cd5) field_cale_ev2_pane_g3

0x0003,

0xf74a,	// (0x0007bbb5) field_cale_ev2_pane_g_ParamLimits

0xf74a,	// (0x0007bbb5) field_cale_ev2_pane_g

0x43b5,	// (0x00070820) field_cale_ev2_pane_t1_ParamLimits

0x43b5,	// (0x00070820) field_cale_ev2_pane_t1

0x43cc,	// (0x00070837) field_cale_ev2_pane_t2_ParamLimits

0x43cc,	// (0x00070837) field_cale_ev2_pane_t2

0x0001,

0xf753,	// (0x0007bbbe) field_cale_ev2_pane_t_ParamLimits

0xf753,	// (0x0007bbbe) field_cale_ev2_pane_t

0x2c2c,	// (0x0006f097) main_postcard_pane_g5_ParamLimits

0x2c2c,	// (0x0006f097) main_postcard_pane_g5

0x2c42,	// (0x0006f0ad) main_postcard_pane_g6_ParamLimits

0x2c42,	// (0x0006f0ad) main_postcard_pane_g6

0x0de6,	// (0x0006d251) camera2_autofocus_pane_cp_ParamLimits

0x0de6,	// (0x0006d251) camera2_autofocus_pane_cp

0x94f3,	// (0x0007595e) main_mup3_pane

0x4405,	// (0x00070870) main_mup3_pane_g1_ParamLimits

0x4405,	// (0x00070870) main_mup3_pane_g1

0x4427,	// (0x00070892) main_mup3_pane_g2_ParamLimits

0x4427,	// (0x00070892) main_mup3_pane_g2

0x44a5,	// (0x00070910) main_mup3_pane_g3_ParamLimits

0x44a5,	// (0x00070910) main_mup3_pane_g3

0x44eb,	// (0x00070956) main_mup3_pane_g4_ParamLimits

0x44eb,	// (0x00070956) main_mup3_pane_g4

0x4531,	// (0x0007099c) main_mup3_pane_g5_ParamLimits

0x4531,	// (0x0007099c) main_mup3_pane_g5

0x4577,	// (0x000709e2) main_mup3_pane_g6_ParamLimits

0x4577,	// (0x000709e2) main_mup3_pane_g6

0xcff0,	// (0x0007945b) main_mup3_pane_g7_ParamLimits

0xcff0,	// (0x0007945b) main_mup3_pane_g7

0x0007,

0xf763,	// (0x0007bbce) main_mup3_pane_g_ParamLimits

0xf763,	// (0x0007bbce) main_mup3_pane_g

0x45f5,	// (0x00070a60) main_mup3_pane_t1_ParamLimits

0x45f5,	// (0x00070a60) main_mup3_pane_t1

0x4669,	// (0x00070ad4) main_mup3_pane_t2_ParamLimits

0x4669,	// (0x00070ad4) main_mup3_pane_t2

0x473d,	// (0x00070ba8) main_mup3_pane_t4_ParamLimits

0x473d,	// (0x00070ba8) main_mup3_pane_t4

0x4793,	// (0x00070bfe) main_mup3_pane_t5_ParamLimits

0x4793,	// (0x00070bfe) main_mup3_pane_t5

0x484f,	// (0x00070cba) main_mup3_pane_t6_ParamLimits

0x484f,	// (0x00070cba) main_mup3_pane_t6

0x0005,

0xf774,	// (0x0007bbdf) main_mup3_pane_t_ParamLimits

0xf774,	// (0x0007bbdf) main_mup3_pane_t

0x4907,	// (0x00070d72) mup3_progress_pane_ParamLimits

0x4907,	// (0x00070d72) mup3_progress_pane

0x499d,	// (0x00070e08) popup_mup3_control_window_ParamLimits

0x499d,	// (0x00070e08) popup_mup3_control_window

0xcffe,	// (0x00079469) popup_mup3_text_window

0x49cf,	// (0x00070e3a) mup3_progress_pane_t1

0x49ee,	// (0x00070e59) mup3_progress_pane_t2

0xd006,	// (0x00079471) mup3_progress_pane_t3

0x0002,

0xf781,	// (0x0007bbec) mup3_progress_pane_t

0xd023,	// (0x0007948e) mup_progress_pane_cp03

0x948b,	// (0x000758f6) bg_tb_trans_pane_cp04

0x4a0d,	// (0x00070e78) mup3_volume_pane

0x4a15,	// (0x00070e80) popup_mup3_control_window_g1

0x4a1e,	// (0x00070e89) mup3_volume_pane_g1

0x4a27,	// (0x00070e92) mup3_volume_pane_g2

0x4a30,	// (0x00070e9b) mup3_volume_pane_g3

0x0002,

0xf788,	// (0x0007bbf3) mup3_volume_pane_g

0x948b,	// (0x000758f6) bg_tb_trans_pane_cp03

0xd033,	// (0x0007949e) popup_mup3_text_window_g1

0xd03b,	// (0x000794a6) popup_mup3_text_window_t1

0xa423,	// (0x0007688e) list_calc_item_pane_g1_ParamLimits

0xca5b,	// (0x00078ec6) mup_volume_pane_cp_g1

0x4359,	// (0x000707c4) main_touch_calib_pane_t3

0x436d,	// (0x000707d8) main_touch_calib_pane_t4

0x4381,	// (0x000707ec) main_touch_calib_pane_t5

0x9495,	// (0x00075900) aid_cell_size_toolbar2

0x949d,	// (0x00075908) aid_popup3_width_pane

0x0104,	// (0x0006c56f) aid_zoom_text_msg_primary

0x0dc5,	// (0x0006d230) vorec_t7

0xa3e7,	// (0x00076852) bg_calc_paper_pane_g1_ParamLimits

0xa3f3,	// (0x0007685e) bg_calc_paper_pane_g2_ParamLimits

0xa3ff,	// (0x0007686a) bg_calc_paper_pane_g3_ParamLimits

0xa40b,	// (0x00076876) bg_calc_paper_pane_g4_ParamLimits

0xa417,	// (0x00076882) bg_calc_paper_pane_g5_ParamLimits

0x06be,	// (0x0006cb29) bg_calc_paper_pane_g6_ParamLimits

0x06cd,	// (0x0006cb38) bg_calc_paper_pane_g7_ParamLimits

0x06dc,	// (0x0006cb47) bg_calc_paper_pane_g8_ParamLimits

0xf13d,	// (0x0007b5a8) bg_calc_paper_pane_g_ParamLimits

0x06ef,	// (0x0006cb5a) calc_bg_paper_pane_g9_ParamLimits

0x0f31,	// (0x0006d39c) image_qvga_pane_ParamLimits

0x0f31,	// (0x0006d39c) image_qvga_pane

0xa316,	// (0x00076781) bg_popup_sub_pane_cp04_ParamLimits

0xb6fb,	// (0x00077b66) popup_mup_playback_window_g1_ParamLimits

0xb707,	// (0x00077b72) popup_mup_playback_window_t1_ParamLimits

0xb71c,	// (0x00077b87) popup_mup_playback_window_t2_ParamLimits

0xf4c7,	// (0x0007b932) popup_mup_playback_window_t_ParamLimits

0x3e99,	// (0x00070304) main_mup2_pane_g3_ParamLimits

0x3e99,	// (0x00070304) main_mup2_pane_g3

0x1340,	// (0x0006d7ab) popup_toolbar_window_cp04

0xbafe,	// (0x00077f69) popup_call2_audio_second_window_g3_ParamLimits

0xbafe,	// (0x00077f69) popup_call2_audio_second_window_g3

0xbf08,	// (0x00078373) popup_call2_audio_first_window_g4_ParamLimits

0xbf08,	// (0x00078373) popup_call2_audio_first_window_g4

0xc593,	// (0x000789fe) popup_call2_audio_in_window_g4_ParamLimits

0xc593,	// (0x000789fe) popup_call2_audio_in_window_g4

0x2d59,	// (0x0006f1c4) aid_area_sk_bg_cut_ParamLimits

0x2d59,	// (0x0006f1c4) aid_area_sk_bg_cut

0xb731,	// (0x00077b9c) aid_area_sk_bg_cut_2_ParamLimits

0xb731,	// (0x00077b9c) aid_area_sk_bg_cut_2

0x419c,	// (0x00070607) aid_placing_details_win

0x41a4,	// (0x0007060f) aid_placing_details_win_2

0xce7d,	// (0x000792e8) camera2_autofocus_pane_g1_ParamLimits

0x02aa,	// (0x0006c715) popup_fixed_preview_cale_window_ParamLimits

0x02aa,	// (0x0006c715) popup_fixed_preview_cale_window

0xb4ff,	// (0x0007796a) navi_slider_pane_g3

0xb508,	// (0x00077973) navi_slider_pane_g4

0xb511,	// (0x0007797c) navi_slider_pane_g5

0xb4ff,	// (0x0007796a) navi_slider_pane_g6

0x9a60,	// (0x00075ecb) navi_slider_pane_g7

0xb632,	// (0x00077a9d) mup_scale_pane_g3

0xb63b,	// (0x00077aa6) mup_scale_pane_g4

0xb644,	// (0x00077aaf) mup_scale_pane_g5

0x2a41,	// (0x0006eeac) mup_scale_pane_g6

0x2a4a,	// (0x0006eeb5) mup_scale_pane_g7

0xb4ff,	// (0x0007796a) cams2_slider_pane_g3

0xcadd,	// (0x00078f48) cams2_slider_pane_g4

0x9b99,	// (0x00076004) cams2_slider_pane_g5

0xb4ff,	// (0x0007796a) cams2_slider_pane_g6

0x9ba1,	// (0x0007600c) cams2_slider_pane_g7

0xcd08,	// (0x00079173) camera2_autofocus_pane_cp_g1

0xc8f4,	// (0x00078d5f) bg_popup_preview_window_pane_cp02_ParamLimits

0xc8f4,	// (0x00078d5f) bg_popup_preview_window_pane_cp02

0xd049,	// (0x000794b4) list_fp_cale_pane_ParamLimits

0xd049,	// (0x000794b4) list_fp_cale_pane

0xd055,	// (0x000794c0) popup_fixed_preview_cale_window_t1_ParamLimits

0xd055,	// (0x000794c0) popup_fixed_preview_cale_window_t1

0x4a39,	// (0x00070ea4) popup_fixed_preview_cale_window_t2_ParamLimits

0x4a39,	// (0x00070ea4) popup_fixed_preview_cale_window_t2

0x4a4e,	// (0x00070eb9) popup_fixed_preview_cale_window_t3_ParamLimits

0x4a4e,	// (0x00070eb9) popup_fixed_preview_cale_window_t3

0x0002,

0xf78f,	// (0x0007bbfa) popup_fixed_preview_cale_window_t_ParamLimits

0xf78f,	// (0x0007bbfa) popup_fixed_preview_cale_window_t

0x4a63,	// (0x00070ece) list_single_fp_cale_pane_ParamLimits

0x4a63,	// (0x00070ece) list_single_fp_cale_pane

0xd073,	// (0x000794de) list_single_fp_cale_pane_g1_ParamLimits

0xd073,	// (0x000794de) list_single_fp_cale_pane_g1

0xd07f,	// (0x000794ea) list_single_fp_cale_pane_g2_ParamLimits

0xd07f,	// (0x000794ea) list_single_fp_cale_pane_g2

0x0002,

0xf796,	// (0x0007bc01) list_single_fp_cale_pane_g_ParamLimits

0xf796,	// (0x0007bc01) list_single_fp_cale_pane_g

0xd098,	// (0x00079503) list_single_fp_cale_pane_t1_ParamLimits

0xd098,	// (0x00079503) list_single_fp_cale_pane_t1

0xd0aa,	// (0x00079515) list_single_fp_cale_pane_t2_ParamLimits

0xd0aa,	// (0x00079515) list_single_fp_cale_pane_t2

0x0001,

0xf79d,	// (0x0007bc08) list_single_fp_cale_pane_t_ParamLimits

0xf79d,	// (0x0007bc08) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x9501,	// (0x0007596c) main_dialer_pane

0x4a78,	// (0x00070ee3) aid_cell_size_keypad

0x4a82,	// (0x00070eed) dialer_ne_pane

0x4a8a,	// (0x00070ef5) grid_dialer_command_1_pane

0x4a92,	// (0x00070efd) grid_dialer_command_2_pane

0x4a9a,	// (0x00070f05) grid_dialer_keypad_pane

0x4aac,	// (0x00070f17) bg_popup_call_pane_cp06_ParamLimits

0x4aac,	// (0x00070f17) bg_popup_call_pane_cp06

0x4ab8,	// (0x00070f23) dialer_ne_clear_pane_ParamLimits

0x4ab8,	// (0x00070f23) dialer_ne_clear_pane

0xd0dd,	// (0x00079548) dialer_ne_pane_g1

0xd0e5,	// (0x00079550) dialer_ne_pane_t1_ParamLimits

0xd0e5,	// (0x00079550) dialer_ne_pane_t1

0x4ac4,	// (0x00070f2f) dialer_ne_pane_t2_ParamLimits

0x4ac4,	// (0x00070f2f) dialer_ne_pane_t2

0x4aee,	// (0x00070f59) dialer_ne_pane_t3_ParamLimits

0x4aee,	// (0x00070f59) dialer_ne_pane_t3

0x0002,

0xf7a2,	// (0x0007bc0d) dialer_ne_pane_t_ParamLimits

0xf7a2,	// (0x0007bc0d) dialer_ne_pane_t

0x4b1e,	// (0x00070f89) dialer_ne_pane_t3_copy1_ParamLimits

0x4b1e,	// (0x00070f89) dialer_ne_pane_t3_copy1

0x4b4d,	// (0x00070fb8) cell_dialer_keypad_pane_ParamLimits

0x4b4d,	// (0x00070fb8) cell_dialer_keypad_pane

0x4b64,	// (0x00070fcf) cell_dialer_command_1_pane_ParamLimits

0x4b64,	// (0x00070fcf) cell_dialer_command_1_pane

0x4b7a,	// (0x00070fe5) cell_dialer_command_2_pane_ParamLimits

0x4b7a,	// (0x00070fe5) cell_dialer_command_2_pane

0xd0f7,	// (0x00079562) bg_button_pane_cp02_ParamLimits

0xd0f7,	// (0x00079562) bg_button_pane_cp02

0x4b89,	// (0x00070ff4) cell_dialer_keypad_pane_g1_ParamLimits

0x4b89,	// (0x00070ff4) cell_dialer_keypad_pane_g1

0xd0f7,	// (0x00079562) bg_button_pane_cp03_ParamLimits

0xd0f7,	// (0x00079562) bg_button_pane_cp03

0x4b9d,	// (0x00071008) cell_dialer_command_1_pane_g1_ParamLimits

0x4b9d,	// (0x00071008) cell_dialer_command_1_pane_g1

0xd103,	// (0x0007956e) bg_button_pane_cp04

0x4bb1,	// (0x0007101c) cell_dialer_command_2_pane_g1

0xa5a9,	// (0x00076a14) bg_button_pane_cp06

0xd10b,	// (0x00079576) dialer_ne_clear_pane_g1

0xb3d2,	// (0x0007783d) navi_pane_g2

0xb400,	// (0x0007786b) navi_pane_g3

0x0002,

0xf3ca,	// (0x0007b835) navi_pane_g

0xb48f,	// (0x000778fa) navi_pane_mv_g2

0xb4b6,	// (0x00077921) navi_pane_mv_g5

0x2605,	// (0x0006ea70) navi_pane_mv_t1

0xa3db,	// (0x00076846) main_clock2_pane

0xa838,	// (0x00076ca3) main_clock2_list_pane_ParamLimits

0xa838,	// (0x00076ca3) main_clock2_list_pane

0x4c22,	// (0x0007108d) main_clock2_pane_t1_ParamLimits

0x4c22,	// (0x0007108d) main_clock2_pane_t1

0x4c5d,	// (0x000710c8) main_clock2_pane_t2_ParamLimits

0x4c5d,	// (0x000710c8) main_clock2_pane_t2

0x0004,

0xf7ae,	// (0x0007bc19) main_clock2_pane_t_ParamLimits

0xf7ae,	// (0x0007bc19) main_clock2_pane_t

0x4cfd,	// (0x00071168) popup_clock_analogue_window_cp03_ParamLimits

0x4cfd,	// (0x00071168) popup_clock_analogue_window_cp03

0x4d22,	// (0x0007118d) popup_clock_digital_window_cp02_ParamLimits

0x4d22,	// (0x0007118d) popup_clock_digital_window_cp02

0x4d9b,	// (0x00071206) main_clock2_list_single_pane_ParamLimits

0x4d9b,	// (0x00071206) main_clock2_list_single_pane

0xa5a9,	// (0x00076a14) list_highlight_pane_cp05

0xd149,	// (0x000795b4) main_clock2_list_single_pane_t1

0x1340,	// (0x0006d7ab) popup_toolbar_window_cp04_ParamLimits

0x41c6,	// (0x00070631) camera2_autofocus_pane_g2_ParamLimits

0x41c6,	// (0x00070631) camera2_autofocus_pane_g2

0x41d2,	// (0x0007063d) camera2_autofocus_pane_g3_ParamLimits

0x41d2,	// (0x0007063d) camera2_autofocus_pane_g3

0x41de,	// (0x00070649) camera2_autofocus_pane_g4_ParamLimits

0x41de,	// (0x00070649) camera2_autofocus_pane_g4

0x41ea,	// (0x00070655) camera2_autofocus_pane_g5_ParamLimits

0x41ea,	// (0x00070655) camera2_autofocus_pane_g5

0x0004,

0xf6f2,	// (0x0007bb5d) camera2_autofocus_pane_g_ParamLimits

0xf6f2,	// (0x0007bb5d) camera2_autofocus_pane_g

0xcfd0,	// (0x0007943b) camera2_autofocus_pane_cp_g2

0xcfd8,	// (0x00079443) camera2_autofocus_pane_cp_g3

0xcfe0,	// (0x0007944b) camera2_autofocus_pane_cp_g4

0xcfe8,	// (0x00079453) camera2_autofocus_pane_cp_g5

0x0004,

0xf758,	// (0x0007bbc3) camera2_autofocus_pane_cp_g

0x4aa4,	// (0x00070f0f) popup_dialer_spcha_window

0x948b,	// (0x000758f6) bg_popup_sub_pane_cp07

0xd157,	// (0x000795c2) list_spcha_pane

0xd15f,	// (0x000795ca) list_single_spcha_pane_ParamLimits

0xd15f,	// (0x000795ca) list_single_spcha_pane

0x948b,	// (0x000758f6) list_highlight_pane_cp06

0xd170,	// (0x000795db) list_single_spcha_pane_t1

0xc331,	// (0x0007879c) popup_call2_audio_out_window_g4_ParamLimits

0xc331,	// (0x0007879c) popup_call2_audio_out_window_g4

0x9501,	// (0x0007596c) main_imed2_pane

0x9ab9,	// (0x00075f24) popup_imed_adjust2_window

0x35a7,	// (0x0006fa12) popup_imed_trans_window_ParamLimits

0x35a7,	// (0x0006fa12) popup_imed_trans_window

0xcb46,	// (0x00078fb1) popup_blid_sat_info2_window_t1

0xcb54,	// (0x00078fbf) popup_blid_sat_info2_window_t2

0x000a,

0xf687,	// (0x0007baf2) popup_blid_sat_info2_window_t

0x4e4c,	// (0x000712b7) aid_size_cell_colour_35

0x4e6c,	// (0x000712d7) aid_size_cell_colour_112

0x4e8c,	// (0x000712f7) aid_size_cell_effect

0xc900,	// (0x00078d6b) bg_tb_trans_pane_cp02

0xaf31,	// (0x0007739c) heading_imed_pane

0x4eac,	// (0x00071317) listscroll_imed_pane

0xd186,	// (0x000795f1) heading_imed_pane_g1

0xd18e,	// (0x000795f9) heading_imed_pane_t1

0xd19c,	// (0x00079607) grid_imed_colour_35_pane_ParamLimits

0xd19c,	// (0x00079607) grid_imed_colour_35_pane

0x4eb8,	// (0x00071323) grid_imed_effect_pane

0xd1b3,	// (0x0007961e) list_imed_aspect_pane

0x4ece,	// (0x00071339) scroll_pane_cp027_ParamLimits

0x4ece,	// (0x00071339) scroll_pane_cp027

0x4edf,	// (0x0007134a) cell_imed_effect_pane_ParamLimits

0x4edf,	// (0x0007134a) cell_imed_effect_pane

0xd1bb,	// (0x00079626) cell_imed_colour_pane_ParamLimits

0xd1bb,	// (0x00079626) cell_imed_colour_pane

0xd1fd,	// (0x00079668) cell_imed_colour_pane_g1_ParamLimits

0xd1fd,	// (0x00079668) cell_imed_colour_pane_g1

0xd20e,	// (0x00079679) hgihlgiht_grid_pane_cp016_ParamLimits

0xd20e,	// (0x00079679) hgihlgiht_grid_pane_cp016

0x4f06,	// (0x00071371) cell_imed_effect_pane_g1

0x4f0e,	// (0x00071379) grid_highlight_pane_cp017

0xd21f,	// (0x0007968a) list_imed_single_pane_ParamLimits

0xd21f,	// (0x0007968a) list_imed_single_pane

0x948b,	// (0x000758f6) list_highlight_pane_cp07

0xd234,	// (0x0007969f) list_imed_aspect_pane_comp1_t1

0xc900,	// (0x00078d6b) bg_tb_trans_pane_cp05

0xd256,	// (0x000796c1) popup_imed_adjust2_window_g1

0xd27d,	// (0x000796e8) popup_imed_adjust2_window_t1

0xd295,	// (0x00079700) slider_imed_adjust_pane

0xd2a9,	// (0x00079714) slider_imed_adjust_pane_g1

0xd2b9,	// (0x00079724) slider_imed_adjust_pane_g2

0xd2c9,	// (0x00079734) slider_imed_adjust_pane_g3

0xd2da,	// (0x00079745) slider_imed_adjust_pane_g4

0x0003,

0xf7cb,	// (0x0007bc36) slider_imed_adjust_pane_g

0x4f17,	// (0x00071382) aid_size_cell_clipart2

0x4f23,	// (0x0007138e) grid_imed_clipart_pane

0xd2eb,	// (0x00079756) scroll_pane_cp031

0x4f2d,	// (0x00071398) cell_imed_clipart_pane_ParamLimits

0x4f2d,	// (0x00071398) cell_imed_clipart_pane

0x4f4f,	// (0x000713ba) cell_imed_clipart_pane_g1

0x948b,	// (0x000758f6) grid_highlight_pane_cp014

0x4bfe,	// (0x00071069) main_clock2_pane_g1_ParamLimits

0x4bfe,	// (0x00071069) main_clock2_pane_g1

0x4d42,	// (0x000711ad) aid_call2_pane_cp10

0x4d54,	// (0x000711bf) aid_call_pane_cp10

0xb333,	// (0x0007779e) popup_clock_analogue_window_cp10_g1

0xb333,	// (0x0007779e) popup_clock_analogue_window_cp10_g2

0x4d66,	// (0x000711d1) popup_clock_analogue_window_cp10_g3

0x4d66,	// (0x000711d1) popup_clock_analogue_window_cp10_g4

0xb333,	// (0x0007779e) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7b9,	// (0x0007bc24) popup_clock_analogue_window_cp10_g

0x4d7c,	// (0x000711e7) popup_clock_analogue_window_cp10_t1

0x4dad,	// (0x00071218) clock_digital_number_pane_cp10_ParamLimits

0x4dad,	// (0x00071218) clock_digital_number_pane_cp10

0x4dc5,	// (0x00071230) clock_digital_number_pane_cp11_ParamLimits

0x4dc5,	// (0x00071230) clock_digital_number_pane_cp11

0x4ddd,	// (0x00071248) clock_digital_number_pane_cp12_ParamLimits

0x4ddd,	// (0x00071248) clock_digital_number_pane_cp12

0x4df7,	// (0x00071262) clock_digital_number_pane_cp13_ParamLimits

0x4df7,	// (0x00071262) clock_digital_number_pane_cp13

0x4e11,	// (0x0007127c) clock_digital_separator_pane_cp10_ParamLimits

0x4e11,	// (0x0007127c) clock_digital_separator_pane_cp10

0x4e2b,	// (0x00071296) popup_clock_digital_window_cp02_t1_ParamLimits

0x4e2b,	// (0x00071296) popup_clock_digital_window_cp02_t1

0xa30e,	// (0x00076779) clock_digital_number_pane_cp10_g1

0xa30e,	// (0x00076779) clock_digital_number_pane_cp10_g2

0x0001,

0xf7d4,	// (0x0007bc3f) clock_digital_number_pane_cp10_g

0xa30e,	// (0x00076779) clock_digital_separator_pane_cp10_g1

0xa30e,	// (0x00076779) clock_digital_separator_pane_g2_cp10

0xb4be,	// (0x00077929) navi_pane_vded_g4

0xb4c7,	// (0x00077932) navi_pane_vded_g5

0xb4d0,	// (0x0007793b) navi_pane_vded_t1

0x9501,	// (0x0007596c) main_vded_pane

0x4f58,	// (0x000713c3) main_vded_pane_g1

0x4f62,	// (0x000713cd) main_vded_pane_g2

0x4f6c,	// (0x000713d7) main_vded_pane_g3

0x0002,

0xf7d9,	// (0x0007bc44) main_vded_pane_g

0x4f76,	// (0x000713e1) main_vded_pane_t1

0x4f84,	// (0x000713ef) main_vded_pane_t2

0x0001,

0xf7e0,	// (0x0007bc4b) main_vded_pane_t

0x4f92,	// (0x000713fd) vded_slider_pane

0x4f9a,	// (0x00071405) vded_video_pane

0xd2f3,	// (0x0007975e) vded_video_pane_g1

0x4fa2,	// (0x0007140d) vded_video_pane_g2

0xcd08,	// (0x00079173) vded_video_pane_g3

0x0002,

0xf7e5,	// (0x0007bc50) vded_video_pane_g

0xd2fd,	// (0x00079768) vded_slider_pane_g1

0xca5b,	// (0x00078ec6) vded_slider_pane_g2

0xd306,	// (0x00079771) vded_slider_pane_g3

0xd30f,	// (0x0007977a) vded_slider_pane_g4

0xd318,	// (0x00079783) vded_slider_pane_g5

0x0004,

0xf7ec,	// (0x0007bc57) vded_slider_pane_g

0x4985,	// (0x00070df0) mup3_rocker_pane_ParamLimits

0x4985,	// (0x00070df0) mup3_rocker_pane

0x4fab,	// (0x00071416) mup3_control_keys_pane_g1

0x4fb3,	// (0x0007141e) mup3_control_keys_pane_g2

0x4fbb,	// (0x00071426) mup3_control_keys_pane_g3

0x4fc3,	// (0x0007142e) mup3_control_keys_pane_g4

0x0003,

0xf7f7,	// (0x0007bc62) mup3_control_keys_pane_g

0x02e1,	// (0x0006c74c) popup_toolbar2_fixed_window_cp01_ParamLimits

0x02e1,	// (0x0006c74c) popup_toolbar2_fixed_window_cp01

0x49b9,	// (0x00070e24) popup_toolbar2_fixed_window_cp02_ParamLimits

0x49b9,	// (0x00070e24) popup_toolbar2_fixed_window_cp02

0xbc70,	// (0x000780db) popup_call2_audio_second_window_t4_ParamLimits

0xbc70,	// (0x000780db) popup_call2_audio_second_window_t4

0xc19e,	// (0x00078609) popup_call2_audio_first_window_t6_ParamLimits

0xc19e,	// (0x00078609) popup_call2_audio_first_window_t6

0xc434,	// (0x0007889f) popup_call2_audio_out_window_t6_ParamLimits

0xc434,	// (0x0007889f) popup_call2_audio_out_window_t6

0x9501,	// (0x0007596c) main_vitu_pane

0x4fd3,	// (0x0007143e) aid_size_cell_itu_ParamLimits

0x4fd3,	// (0x0007143e) aid_size_cell_itu

0xa838,	// (0x00076ca3) bg_popup_window_pane_cp08_ParamLimits

0xa838,	// (0x00076ca3) bg_popup_window_pane_cp08

0x4fe9,	// (0x00071454) field_vitu_entry_pane_ParamLimits

0x4fe9,	// (0x00071454) field_vitu_entry_pane

0x5000,	// (0x0007146b) grid_vitu_function_pane_ParamLimits

0x5000,	// (0x0007146b) grid_vitu_function_pane

0x501b,	// (0x00071486) grid_vitu_itu_pane_ParamLimits

0x501b,	// (0x00071486) grid_vitu_itu_pane

0x5039,	// (0x000714a4) cell_vitu_itu_pane_ParamLimits

0x5039,	// (0x000714a4) cell_vitu_itu_pane

0x505b,	// (0x000714c6) cell_vitu_function_pane_ParamLimits

0x505b,	// (0x000714c6) cell_vitu_function_pane

0xa838,	// (0x00076ca3) bg_popup_sub_pane_cp08_ParamLimits

0xa838,	// (0x00076ca3) bg_popup_sub_pane_cp08

0x5074,	// (0x000714df) field_vitu_entry_pane_t1_ParamLimits

0x5074,	// (0x000714df) field_vitu_entry_pane_t1

0xd339,	// (0x000797a4) field_vitu_entry_pane_t2_ParamLimits

0xd339,	// (0x000797a4) field_vitu_entry_pane_t2

0x0001,

0xf805,	// (0x0007bc70) field_vitu_entry_pane_t_ParamLimits

0xf805,	// (0x0007bc70) field_vitu_entry_pane_t

0xd356,	// (0x000797c1) bg_button_pane_cp05_ParamLimits

0xd356,	// (0x000797c1) bg_button_pane_cp05

0x5092,	// (0x000714fd) cell_vitu_itu_pane_g1

0x50aa,	// (0x00071515) cell_vitu_itu_pane_t1_ParamLimits

0x50aa,	// (0x00071515) cell_vitu_itu_pane_t1

0x50bc,	// (0x00071527) cell_vitu_itu_pane_t2_ParamLimits

0x50bc,	// (0x00071527) cell_vitu_itu_pane_t2

0x0002,

0xf80a,	// (0x0007bc75) cell_vitu_itu_pane_t_ParamLimits

0xf80a,	// (0x0007bc75) cell_vitu_itu_pane_t

0xd364,	// (0x000797cf) bg_button_pane_cp07

0x50f1,	// (0x0007155c) cell_vitu_function_pane_g1

0x991e,	// (0x00075d89) main_calc_pane_g1

0x00f8,	// (0x0006c563) aid_visual_content_pane

0x9501,	// (0x0007596c) main_vradio_pane

0x50fa,	// (0x00071565) main_vradio_pane_g1_ParamLimits

0x50fa,	// (0x00071565) main_vradio_pane_g1

0xd36e,	// (0x000797d9) main_vradio_pane_g2_ParamLimits

0xd36e,	// (0x000797d9) main_vradio_pane_g2

0x0001,

0xf811,	// (0x0007bc7c) main_vradio_pane_g_ParamLimits

0xf811,	// (0x0007bc7c) main_vradio_pane_g

0x5113,	// (0x0007157e) main_vradio_pane_t1_ParamLimits

0x5113,	// (0x0007157e) main_vradio_pane_t1

0x5128,	// (0x00071593) main_vradio_pane_t2_ParamLimits

0x5128,	// (0x00071593) main_vradio_pane_t2

0xd37b,	// (0x000797e6) main_vradio_pane_t3_ParamLimits

0xd37b,	// (0x000797e6) main_vradio_pane_t3

0x0002,

0xf816,	// (0x0007bc81) main_vradio_pane_t_ParamLimits

0xf816,	// (0x0007bc81) main_vradio_pane_t

0x513d,	// (0x000715a8) vradio_rocker_control_pane_ParamLimits

0x513d,	// (0x000715a8) vradio_rocker_control_pane

0x514f,	// (0x000715ba) vradio_station_info_pane_ParamLimits

0x514f,	// (0x000715ba) vradio_station_info_pane

0xd38f,	// (0x000797fa) vradio_frequency_info_pane_ParamLimits

0xd38f,	// (0x000797fa) vradio_frequency_info_pane

0xcd08,	// (0x00079173) vradio_station_info_pane_g1

0xd39e,	// (0x00079809) vradio_station_info_pane_t1_ParamLimits

0xd39e,	// (0x00079809) vradio_station_info_pane_t1

0xd3c0,	// (0x0007982b) vradio_station_info_pane_t2_ParamLimits

0xd3c0,	// (0x0007982b) vradio_station_info_pane_t2

0x0001,

0xf81d,	// (0x0007bc88) vradio_station_info_pane_t_ParamLimits

0xf81d,	// (0x0007bc88) vradio_station_info_pane_t

0xd3d2,	// (0x0007983d) vradio_tuning_pane

0xd3da,	// (0x00079845) vradio_rocker_control_pane_g1

0xd3e2,	// (0x0007984d) vradio_rocker_control_pane_g2

0xd3ea,	// (0x00079855) vradio_rocker_control_pane_g3

0xd3f2,	// (0x0007985d) vradio_rocker_control_pane_g4

0xd3fa,	// (0x00079865) vradio_rocker_control_pane_g5

0x0004,

0xf822,	// (0x0007bc8d) vradio_rocker_control_pane_g

0x5161,	// (0x000715cc) vradio_frequency_info_pane_g1

0xd402,	// (0x0007986d) vradio_frequency_info_pane_t1_ParamLimits

0xd402,	// (0x0007986d) vradio_frequency_info_pane_t1

0x516b,	// (0x000715d6) vradio_tuning_pane_g1

0x5176,	// (0x000715e1) vradio_tuning_pane_t1

0x94b1,	// (0x0007591c) area_side_right_pane_ParamLimits

0x94b1,	// (0x0007591c) area_side_right_pane

0xc8bb,	// (0x00078d26) status_small_pane_g1

0xc8c3,	// (0x00078d2e) status_small_pane_g2

0xc8cc,	// (0x00078d37) status_small_pane_g3

0xc8d5,	// (0x00078d40) status_small_pane_g4

0x0003,

0xf5dd,	// (0x0007ba48) status_small_pane_g

0xc8de,	// (0x00078d49) status_small_pane_t1

0x9501,	// (0x0007596c) main_video3_pane

0xd416,	// (0x00079881) cams_zoom_vslider_pane

0xd41e,	// (0x00079889) image3_wide_pane_ParamLimits

0xd41e,	// (0x00079889) image3_wide_pane

0xd438,	// (0x000798a3) image3_wide_small_pane

0xd444,	// (0x000798af) main_video3_pane_g1_ParamLimits

0xd444,	// (0x000798af) main_video3_pane_g1

0xd460,	// (0x000798cb) main_video3_pane_g2_ParamLimits

0xd460,	// (0x000798cb) main_video3_pane_g2

0x0001,

0xf82d,	// (0x0007bc98) main_video3_pane_g_ParamLimits

0xf82d,	// (0x0007bc98) main_video3_pane_g

0xd47c,	// (0x000798e7) main_video3_pane_t1_ParamLimits

0xd47c,	// (0x000798e7) main_video3_pane_t1

0xd4a7,	// (0x00079912) main_video3_pane_t2_ParamLimits

0xd4a7,	// (0x00079912) main_video3_pane_t2

0xd4d2,	// (0x0007993d) main_video3_pane_t3_ParamLimits

0xd4d2,	// (0x0007993d) main_video3_pane_t3

0x0002,

0xf832,	// (0x0007bc9d) main_video3_pane_t_ParamLimits

0xf832,	// (0x0007bc9d) main_video3_pane_t

0xd4ff,	// (0x0007996a) cams_zoom_vslider_pane_g1

0xd508,	// (0x00079973) cams_zoom_vslider_pane_g2

0x0001,

0xf839,	// (0x0007bca4) cams_zoom_vslider_pane_g

0xd510,	// (0x0007997b) small_slider_vertical_pane

0xcd08,	// (0x00079173) small_slider_vertical_pane_g1

0xcd08,	// (0x00079173) small_slider_vertical_pane_g2

0xd518,	// (0x00079983) small_slider_vertical_pane_g3

0x0002,

0xf83e,	// (0x0007bca9) small_slider_vertical_pane_g

0x9501,	// (0x0007596c) main_hwr_training_pane

0xd521,	// (0x0007998c) hwr_training_instruct_pane_ParamLimits

0xd521,	// (0x0007998c) hwr_training_instruct_pane

0x5185,	// (0x000715f0) hwr_training_navi_pane_ParamLimits

0x5185,	// (0x000715f0) hwr_training_navi_pane

0x51a4,	// (0x0007160f) hwr_training_write_pane_ParamLimits

0x51a4,	// (0x0007160f) hwr_training_write_pane

0x948b,	// (0x000758f6) bg_frame_shadow_pane

0xd558,	// (0x000799c3) hwr_training_write_pane_g1

0xd560,	// (0x000799cb) hwr_training_write_pane_g2

0xd568,	// (0x000799d3) hwr_training_write_pane_g3

0xd570,	// (0x000799db) hwr_training_write_pane_g4

0xd578,	// (0x000799e3) hwr_training_write_pane_g5

0xd580,	// (0x000799eb) hwr_training_write_pane_g6

0xd588,	// (0x000799f3) hwr_training_write_pane_g7

0x0006,

0xf845,	// (0x0007bcb0) hwr_training_write_pane_g

0x9baa,	// (0x00076015) hwr_training_navi_pane_g1_ParamLimits

0x9baa,	// (0x00076015) hwr_training_navi_pane_g1

0x9bbc,	// (0x00076027) hwr_training_navi_pane_g2_ParamLimits

0x9bbc,	// (0x00076027) hwr_training_navi_pane_g2

0x9bce,	// (0x00076039) hwr_training_navi_pane_g3_ParamLimits

0x9bce,	// (0x00076039) hwr_training_navi_pane_g3

0x9bde,	// (0x00076049) hwr_training_navi_pane_g4_ParamLimits

0x9bde,	// (0x00076049) hwr_training_navi_pane_g4

0x0004,

0xf854,	// (0x0007bcbf) hwr_training_navi_pane_g_ParamLimits

0xf854,	// (0x0007bcbf) hwr_training_navi_pane_g

0x9beb,	// (0x00076056) hwr_training_navi_pane_t1

0x51ec,	// (0x00071657) list_single_hwr_training_instruct_pane_ParamLimits

0x51ec,	// (0x00071657) list_single_hwr_training_instruct_pane

0xd590,	// (0x000799fb) list_single_hwr_training_instruct_pane_t1

0xcc48,	// (0x000790b3) bg_frame_shadow_pane_g1

0xd59f,	// (0x00079a0a) bg_frame_shadow_pane_g2

0xd5a7,	// (0x00079a12) bg_frame_shadow_pane_g3

0xd5af,	// (0x00079a1a) bg_frame_shadow_pane_g4

0xd5b7,	// (0x00079a22) bg_frame_shadow_pane_g5

0xd5bf,	// (0x00079a2a) bg_frame_shadow_pane_g6

0xd5c7,	// (0x00079a32) bg_frame_shadow_pane_g7

0xa49d,	// (0x00076908) bg_frame_shadow_pane_g8

0x0007,

0xf85f,	// (0x0007bcca) bg_frame_shadow_pane_g

0x9501,	// (0x0007596c) main_video_tele_dialer_pane

0x5201,	// (0x0007166c) aid_size_cell_video_keypad_ParamLimits

0x5201,	// (0x0007166c) aid_size_cell_video_keypad

0x521b,	// (0x00071686) grid_video_dialer_keypad_pane_ParamLimits

0x521b,	// (0x00071686) grid_video_dialer_keypad_pane

0x5267,	// (0x000716d2) video_down_pane_cp_ParamLimits

0x5267,	// (0x000716d2) video_down_pane_cp

0x5299,	// (0x00071704) cell_video_dialer_keypad_pane_ParamLimits

0x5299,	// (0x00071704) cell_video_dialer_keypad_pane

0xd5cf,	// (0x00079a3a) bg_button_pane_cp08_ParamLimits

0xd5cf,	// (0x00079a3a) bg_button_pane_cp08

0x52bb,	// (0x00071726) cell_video_dialer_keypad_pane_g1_ParamLimits

0x52bb,	// (0x00071726) cell_video_dialer_keypad_pane_g1

0x496f,	// (0x00070dda) mup3_rocker2_pane_ParamLimits

0x496f,	// (0x00070dda) mup3_rocker2_pane

0xcd08,	// (0x00079173) mup3_rocker2_pane_g1

0x3488,	// (0x0006f8f3) main_dialer2_pane

0x9501,	// (0x0007596c) main_mp4_pane

0x9c17,	// (0x00076082) main_mp4_pane_g1_ParamLimits

0x9c17,	// (0x00076082) main_mp4_pane_g1

0x9c17,	// (0x00076082) main_mp4_pane_g2_ParamLimits

0x9c17,	// (0x00076082) main_mp4_pane_g2

0x52f2,	// (0x0007175d) main_mp4_pane_g3_ParamLimits

0x52f2,	// (0x0007175d) main_mp4_pane_g3

0x9c25,	// (0x00076090) main_mp4_pane_g4_ParamLimits

0x9c25,	// (0x00076090) main_mp4_pane_g4

0x9c53,	// (0x000760be) main_mp4_pane_g5_ParamLimits

0x9c53,	// (0x000760be) main_mp4_pane_g5

0x0007,

0xf87f,	// (0x0007bcea) main_mp4_pane_g_ParamLimits

0xf87f,	// (0x0007bcea) main_mp4_pane_g

0x9cc7,	// (0x00076132) main_mp4_pane_t1_ParamLimits

0x9cc7,	// (0x00076132) main_mp4_pane_t1

0x9d23,	// (0x0007618e) main_mp4_pane_t2_ParamLimits

0x9d23,	// (0x0007618e) main_mp4_pane_t2

0xd5db,	// (0x00079a46) main_mp4_pane_t3_ParamLimits

0xd5db,	// (0x00079a46) main_mp4_pane_t3

0x9d75,	// (0x000761e0) main_mp4_pane_t4_ParamLimits

0x9d75,	// (0x000761e0) main_mp4_pane_t4

0x0003,

0xf890,	// (0x0007bcfb) main_mp4_pane_t_ParamLimits

0xf890,	// (0x0007bcfb) main_mp4_pane_t

0x9db9,	// (0x00076224) mp4_progress_pane_ParamLimits

0x9db9,	// (0x00076224) mp4_progress_pane

0x9e03,	// (0x0007626e) mp4_rocker_pane_ParamLimits

0x9e03,	// (0x0007626e) mp4_rocker_pane

0xd609,	// (0x00079a74) mp4_progress_pane_t1

0xd622,	// (0x00079a8d) mp4_progress_pane_t2

0x0001,

0xf899,	// (0x0007bd04) mp4_progress_pane_t

0xd63b,	// (0x00079aa6) mup_progress_pane_cp04

0xd64e,	// (0x00079ab9) mp4_rocker_pane_g1

0x532e,	// (0x00071799) aid_cell_size_keypad2_ParamLimits

0x532e,	// (0x00071799) aid_cell_size_keypad2

0x5344,	// (0x000717af) dialer2_ne_pane_ParamLimits

0x5344,	// (0x000717af) dialer2_ne_pane

0x535e,	// (0x000717c9) grid_dialer2_keypad_pane_ParamLimits

0x535e,	// (0x000717c9) grid_dialer2_keypad_pane

0xcaed,	// (0x00078f58) bg_popup_call_pane_cp07_ParamLimits

0xcaed,	// (0x00078f58) bg_popup_call_pane_cp07

0x537a,	// (0x000717e5) dialer2_ne_pane_t1_ParamLimits

0x537a,	// (0x000717e5) dialer2_ne_pane_t1

0x53b5,	// (0x00071820) cell_dialer2_keypad_pane_ParamLimits

0x53b5,	// (0x00071820) cell_dialer2_keypad_pane

0xd66a,	// (0x00079ad5) bg_button_pane_pane_cp04_ParamLimits

0xd66a,	// (0x00079ad5) bg_button_pane_pane_cp04

0x53d7,	// (0x00071842) cell_dialer2_keypad_pane_g1_ParamLimits

0x53d7,	// (0x00071842) cell_dialer2_keypad_pane_g1

0x1214,	// (0x0006d67f) aid_placing_vt_set_content_ParamLimits

0x1214,	// (0x0006d67f) aid_placing_vt_set_content

0x123c,	// (0x0006d6a7) aid_placing_vt_set_title_ParamLimits

0x123c,	// (0x0006d6a7) aid_placing_vt_set_title

0x9501,	// (0x0007596c) main_image3_pane

0x549d,	// (0x00071908) area_side_right_pane_cp01_ParamLimits

0x549d,	// (0x00071908) area_side_right_pane_cp01

0x9c17,	// (0x00076082) main_image3_pane_g1_ParamLimits

0x9c17,	// (0x00076082) main_image3_pane_g1

0x54b4,	// (0x0007191f) main_image3_pane_g2_ParamLimits

0x54b4,	// (0x0007191f) main_image3_pane_g2

0x54dc,	// (0x00071947) main_image3_pane_g3_ParamLimits

0x54dc,	// (0x00071947) main_image3_pane_g3

0x5506,	// (0x00071971) main_image3_pane_g4_ParamLimits

0x5506,	// (0x00071971) main_image3_pane_g4

0x0003,

0xf8a8,	// (0x0007bd13) main_image3_pane_g_ParamLimits

0xf8a8,	// (0x0007bd13) main_image3_pane_g

0x5530,	// (0x0007199b) main_image3_pane_t1_ParamLimits

0x5530,	// (0x0007199b) main_image3_pane_t1

0x5588,	// (0x000719f3) main_image3_pane_t2_ParamLimits

0x5588,	// (0x000719f3) main_image3_pane_t2

0x55da,	// (0x00071a45) main_image3_pane_t3_ParamLimits

0x55da,	// (0x00071a45) main_image3_pane_t3

0x0003,

0xf8b1,	// (0x0007bd1c) main_image3_pane_t_ParamLimits

0xf8b1,	// (0x0007bd1c) main_image3_pane_t

0xa838,	// (0x00076ca3) grid_sctrl_middle_pane_cp01_ParamLimits

0xa838,	// (0x00076ca3) grid_sctrl_middle_pane_cp01

0x5662,	// (0x00071acd) cell_sctrl_middle_pane_cp01_ParamLimits

0x5662,	// (0x00071acd) cell_sctrl_middle_pane_cp01

0x567f,	// (0x00071aea) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x567f,	// (0x00071aea) cell_sctrl_middle_pane_cp01_g1

0x9501,	// (0x0007596c) main_call4_pane

0x5695,	// (0x00071b00) aid_size_button_call4_ParamLimits

0x5695,	// (0x00071b00) aid_size_button_call4

0x56c8,	// (0x00071b33) call4_windows_pane_ParamLimits

0x56c8,	// (0x00071b33) call4_windows_pane

0x56e7,	// (0x00071b52) grid_call4_button_pane_ParamLimits

0x56e7,	// (0x00071b52) grid_call4_button_pane

0x571a,	// (0x00071b85) call4_windows_conf_pane

0x5731,	// (0x00071b9c) popup_call4_audio_first_window_ParamLimits

0x5731,	// (0x00071b9c) popup_call4_audio_first_window

0x5781,	// (0x00071bec) popup_call4_audio_second_window_ParamLimits

0x5781,	// (0x00071bec) popup_call4_audio_second_window

0x5798,	// (0x00071c03) popup_call4_audio_wait_window_ParamLimits

0x5798,	// (0x00071c03) popup_call4_audio_wait_window

0x57a6,	// (0x00071c11) cell_call4_button_pane_ParamLimits

0x57a6,	// (0x00071c11) cell_call4_button_pane

0x57cb,	// (0x00071c36) bg_button_pane_cp09_ParamLimits

0x57cb,	// (0x00071c36) bg_button_pane_cp09

0x57d7,	// (0x00071c42) cell_call4_button_pane_g1_ParamLimits

0x57d7,	// (0x00071c42) cell_call4_button_pane_g1

0x57fd,	// (0x00071c68) cell_call4_button_pane_t1_ParamLimits

0x57fd,	// (0x00071c68) cell_call4_button_pane_t1

0xd67e,	// (0x00079ae9) popup_call4_audio_conf_window_ParamLimits

0xd67e,	// (0x00079ae9) popup_call4_audio_conf_window

0x49cf,	// (0x00070e3a) mup3_progress_pane_t1_ParamLimits

0x49ee,	// (0x00070e59) mup3_progress_pane_t2_ParamLimits

0xd006,	// (0x00079471) mup3_progress_pane_t3_ParamLimits

0xf781,	// (0x0007bbec) mup3_progress_pane_t_ParamLimits

0xd023,	// (0x0007948e) mup_progress_pane_cp03_ParamLimits

0x4fcb,	// (0x00071436) mup3_control_keys_pane_g4_copy1

0x9de7,	// (0x00076252) mp4_rocker2_pane_ParamLimits

0x9de7,	// (0x00076252) mp4_rocker2_pane

0xd692,	// (0x00079afd) mp4_rocker2_pane_g1

0xd69a,	// (0x00079b05) mp4_rocker2_pane_g2

0x9e87,	// (0x000762f2) mp4_rocker2_pane_g3

0x9e8f,	// (0x000762fa) mp4_rocker2_pane_g4

0x9e97,	// (0x00076302) mp4_rocker2_pane_g5

0x0004,

0xf8ba,	// (0x0007bd25) mp4_rocker2_pane_g

0x9501,	// (0x0007596c) main_camera4_pane

0x9501,	// (0x0007596c) main_video4_pane

0x5235,	// (0x000716a0) main_video_tele_dialer_pane_t1_ParamLimits

0x5235,	// (0x000716a0) main_video_tele_dialer_pane_t1

0x524e,	// (0x000716b9) main_video_tele_dialer_pane_t2_ParamLimits

0x524e,	// (0x000716b9) main_video_tele_dialer_pane_t2

0x0001,

0xf870,	// (0x0007bcdb) main_video_tele_dialer_pane_t_ParamLimits

0xf870,	// (0x0007bcdb) main_video_tele_dialer_pane_t

0x583b,	// (0x00071ca6) cam4_autofocus_pane_ParamLimits

0x583b,	// (0x00071ca6) cam4_autofocus_pane

0x5851,	// (0x00071cbc) cam4_image_uncrop_pane_ParamLimits

0x5851,	// (0x00071cbc) cam4_image_uncrop_pane

0x586b,	// (0x00071cd6) cam4_indicators_pane_ParamLimits

0x586b,	// (0x00071cd6) cam4_indicators_pane

0x5896,	// (0x00071d01) main_camera4_pane_g1_ParamLimits

0x5896,	// (0x00071d01) main_camera4_pane_g1

0x58a8,	// (0x00071d13) main_camera4_pane_g2_ParamLimits

0x58a8,	// (0x00071d13) main_camera4_pane_g2

0x58bb,	// (0x00071d26) main_camera4_pane_g3_ParamLimits

0x58bb,	// (0x00071d26) main_camera4_pane_g3

0x58ce,	// (0x00071d39) main_camera4_pane_g4_ParamLimits

0x58ce,	// (0x00071d39) main_camera4_pane_g4

0x58e1,	// (0x00071d4c) main_camera4_pane_g5_ParamLimits

0x58e1,	// (0x00071d4c) main_camera4_pane_g5

0x0005,

0xf8c5,	// (0x0007bd30) main_camera4_pane_g_ParamLimits

0xf8c5,	// (0x0007bd30) main_camera4_pane_g

0x5905,	// (0x00071d70) main_camera4_pane_t1_ParamLimits

0x5905,	// (0x00071d70) main_camera4_pane_t1

0x9ebb,	// (0x00076326) bg_tb_trans_pane_cp06

0x9ed1,	// (0x0007633c) cam4_indicators_pane_g1

0x9ee2,	// (0x0007634d) cam4_indicators_pane_g2

0x0002,

0xf8e0,	// (0x0007bd4b) cam4_indicators_pane_g

0x9f00,	// (0x0007636b) cam4_indicators_pane_t1

0x5969,	// (0x00071dd4) main_video4_pane_g1_ParamLimits

0x5969,	// (0x00071dd4) main_video4_pane_g1

0x5978,	// (0x00071de3) main_video4_pane_g2_ParamLimits

0x5978,	// (0x00071de3) main_video4_pane_g2

0x5987,	// (0x00071df2) main_video4_pane_g3_ParamLimits

0x5987,	// (0x00071df2) main_video4_pane_g3

0x5996,	// (0x00071e01) main_video4_pane_g4_ParamLimits

0x5996,	// (0x00071e01) main_video4_pane_g4

0x0004,

0xf8e7,	// (0x0007bd52) main_video4_pane_g_ParamLimits

0xf8e7,	// (0x0007bd52) main_video4_pane_g

0x59b4,	// (0x00071e1f) vid4_indicators_pane_ParamLimits

0x59b4,	// (0x00071e1f) vid4_indicators_pane

0x59e2,	// (0x00071e4d) video4_image_uncrop_cif_pane_ParamLimits

0x59e2,	// (0x00071e4d) video4_image_uncrop_cif_pane

0x59fc,	// (0x00071e67) video4_image_uncrop_nhd_pane_ParamLimits

0x59fc,	// (0x00071e67) video4_image_uncrop_nhd_pane

0x5851,	// (0x00071cbc) video4_image_uncrop_vga_pane_ParamLimits

0x5851,	// (0x00071cbc) video4_image_uncrop_vga_pane

0x94f3,	// (0x0007595e) bg_tb_trans_pane_cp07

0x9f2c,	// (0x00076397) vid4_indicators_pane_g1

0x9f40,	// (0x000763ab) vid4_indicators_pane_g2

0x9f54,	// (0x000763bf) vid4_indicators_pane_g3

0x0004,

0xf8f2,	// (0x0007bd5d) vid4_indicators_pane_g

0x9f83,	// (0x000763ee) vid4_indicators_pane_t1

0x5a10,	// (0x00071e7b) cam4_autofocus_pane_g1

0x5a18,	// (0x00071e83) cam4_autofocus_pane_g2

0x5a20,	// (0x00071e8b) cam4_autofocus_pane_g3

0x0002,

0xf8fd,	// (0x0007bd68) cam4_autofocus_pane_g

0x5a28,	// (0x00071e93) cam4_autofocus_pane_g3_copy1

0x527d,	// (0x000716e8) video_down_pane_cp_t1

0x528b,	// (0x000716f6) video_down_pane_cp_t2

0x0001,

0xf875,	// (0x0007bce0) video_down_pane_cp_t

0x94f3,	// (0x0007595e) popup_vitu2_window_ParamLimits

0x94f3,	// (0x0007595e) popup_vitu2_window

0x5a30,	// (0x00071e9b) aid_size_cell2_itu2_ParamLimits

0x5a30,	// (0x00071e9b) aid_size_cell2_itu2

0x5a56,	// (0x00071ec1) aid_size_cell_itu2_ParamLimits

0x5a56,	// (0x00071ec1) aid_size_cell_itu2

0x5ab2,	// (0x00071f1d) bg_popup_window_pane_cp09_ParamLimits

0x5ab2,	// (0x00071f1d) bg_popup_window_pane_cp09

0x5ac0,	// (0x00071f2b) field_vitu2_entry_pane_ParamLimits

0x5ac0,	// (0x00071f2b) field_vitu2_entry_pane

0x5ae6,	// (0x00071f51) grid_vitu2_function_pane_ParamLimits

0x5ae6,	// (0x00071f51) grid_vitu2_function_pane

0x5b37,	// (0x00071fa2) grid_vitu2_itu_pane_ParamLimits

0x5b37,	// (0x00071fa2) grid_vitu2_itu_pane

0x5bcf,	// (0x0007203a) cell_vitu2_itu_pane_ParamLimits

0x5bcf,	// (0x0007203a) cell_vitu2_itu_pane

0x5bfb,	// (0x00072066) cell_vitu2_function_pane_ParamLimits

0x5bfb,	// (0x00072066) cell_vitu2_function_pane

0xd6a2,	// (0x00079b0d) bg_popup_call_pane_cp08_ParamLimits

0xd6a2,	// (0x00079b0d) bg_popup_call_pane_cp08

0xd6b9,	// (0x00079b24) field_vitu2_entry_pane_g1

0xd6c5,	// (0x00079b30) field_vitu2_entry_pane_g2

0x0002,

0xf904,	// (0x0007bd6f) field_vitu2_entry_pane_g

0x5c3a,	// (0x000720a5) field_vitu2_entry_pane_t1_ParamLimits

0x5c3a,	// (0x000720a5) field_vitu2_entry_pane_t1

0xa88e,	// (0x00076cf9) field_vitu2_entry_pane_t2_ParamLimits

0xa88e,	// (0x00076cf9) field_vitu2_entry_pane_t2

0x0001,

0xf90b,	// (0x0007bd76) field_vitu2_entry_pane_t_ParamLimits

0xf90b,	// (0x0007bd76) field_vitu2_entry_pane_t

0x5c6a,	// (0x000720d5) bg_button_pane_cp010_ParamLimits

0x5c6a,	// (0x000720d5) bg_button_pane_cp010

0x9f9a,	// (0x00076405) cell_vitu2_itu_pane_g1

0x5c86,	// (0x000720f1) cell_vitu2_itu_pane_t1_ParamLimits

0x5c86,	// (0x000720f1) cell_vitu2_itu_pane_t1

0xffd0,	// (0x0006c43b) cell_vitu2_itu_pane_t2_ParamLimits

0xffd0,	// (0x0006c43b) cell_vitu2_itu_pane_t2

0x0002,

0xf915,	// (0x0007bd80) cell_vitu2_itu_pane_t_ParamLimits

0xf915,	// (0x0007bd80) cell_vitu2_itu_pane_t

0x94f3,	// (0x0007595e) bg_button_pane_cp011

0x5ce4,	// (0x0007214f) cell_vitu2_function_pane_g1

0x9501,	// (0x0007596c) main_myfav_hc_pane

0x562a,	// (0x00071a95) popup_image3_note_pane_ParamLimits

0x562a,	// (0x00071a95) popup_image3_note_pane

0x5646,	// (0x00071ab1) popup_image3_tool_bar_pane_ParamLimits

0x5646,	// (0x00071ab1) popup_image3_tool_bar_pane

0x005e,	// (0x0006c4c9) cell_vitu2_itu_pane_t3_ParamLimits

0x005e,	// (0x0006c4c9) cell_vitu2_itu_pane_t3

0x948b,	// (0x000758f6) bg_popup_trans_pane

0xd6e7,	// (0x00079b52) grid_image3_tool_bar_pane

0xd6f1,	// (0x00079b5c) bg_popup_trans_pane_g1

0xace9,	// (0x00077154) bg_popup_trans_pane_g2

0xd6f9,	// (0x00079b64) bg_popup_trans_pane_g3

0xd701,	// (0x00079b6c) bg_popup_trans_pane_g4

0xd709,	// (0x00079b74) bg_popup_trans_pane_g5

0xd711,	// (0x00079b7c) bg_popup_trans_pane_g6

0xd719,	// (0x00079b84) bg_popup_trans_pane_g7

0xd721,	// (0x00079b8c) bg_popup_trans_pane_g8

0xa7e2,	// (0x00076c4d) bg_popup_trans_pane_g9

0x0008,

0xf91c,	// (0x0007bd87) bg_popup_trans_pane_g

0xd729,	// (0x00079b94) cell_image3_tool_bar_pane_ParamLimits

0xd729,	// (0x00079b94) cell_image3_tool_bar_pane

0xcd08,	// (0x00079173) cell_image3_tool_bar_pane_g1

0x948b,	// (0x000758f6) bg_popup_trans_pane_cp1

0xd73d,	// (0x00079ba8) popup_image3_note_pane_t1

0xd74b,	// (0x00079bb6) popup_image3_note_pane_t2

0xd759,	// (0x00079bc4) popup_image3_note_pane_t3

0x0002,

0xf92f,	// (0x0007bd9a) popup_image3_note_pane_t

0xd767,	// (0x00079bd2) popup_image3_note_pane_t3_copy1

0x5cf8,	// (0x00072163) bg_myfav_hc_instruction_pane_ParamLimits

0x5cf8,	// (0x00072163) bg_myfav_hc_instruction_pane

0x5d0c,	// (0x00072177) cell_myfav_contact_pane_ParamLimits

0x5d0c,	// (0x00072177) cell_myfav_contact_pane

0x5d2a,	// (0x00072195) cell_myfav_contact_pane_cp1_ParamLimits

0x5d2a,	// (0x00072195) cell_myfav_contact_pane_cp1

0x5d42,	// (0x000721ad) cell_myfav_contact_pane_cp2_ParamLimits

0x5d42,	// (0x000721ad) cell_myfav_contact_pane_cp2

0x5d5a,	// (0x000721c5) cell_myfav_contact_pane_cp3_ParamLimits

0x5d5a,	// (0x000721c5) cell_myfav_contact_pane_cp3

0x5d71,	// (0x000721dc) cell_myfav_contact_pane_cp4_ParamLimits

0x5d71,	// (0x000721dc) cell_myfav_contact_pane_cp4

0x5d89,	// (0x000721f4) cell_myfav_contact_pane_cp5_ParamLimits

0x5d89,	// (0x000721f4) cell_myfav_contact_pane_cp5

0x5d9d,	// (0x00072208) cell_myfav_contact_pane_cp6_ParamLimits

0x5d9d,	// (0x00072208) cell_myfav_contact_pane_cp6

0x5db3,	// (0x0007221e) cell_myfav_contact_pane_cp7_ParamLimits

0x5db3,	// (0x0007221e) cell_myfav_contact_pane_cp7

0xd775,	// (0x00079be0) listscroll_gen_pane_cp05

0x5dcd,	// (0x00072238) main_myfav_hc_pane_g1_ParamLimits

0x5dcd,	// (0x00072238) main_myfav_hc_pane_g1

0x5de7,	// (0x00072252) main_myfav_hc_pane_g2_ParamLimits

0x5de7,	// (0x00072252) main_myfav_hc_pane_g2

0x0002,

0xf936,	// (0x0007bda1) main_myfav_hc_pane_g_ParamLimits

0xf936,	// (0x0007bda1) main_myfav_hc_pane_g

0x5e19,	// (0x00072284) main_myfav_hc_pane_t1_ParamLimits

0x5e19,	// (0x00072284) main_myfav_hc_pane_t1

0xd77e,	// (0x00079be9) main_myfav_hc_pane_t2_ParamLimits

0xd77e,	// (0x00079be9) main_myfav_hc_pane_t2

0xd790,	// (0x00079bfb) main_myfav_hc_pane_t3_ParamLimits

0xd790,	// (0x00079bfb) main_myfav_hc_pane_t3

0x5e30,	// (0x0007229b) main_myfav_hc_pane_t4_ParamLimits

0x5e30,	// (0x0007229b) main_myfav_hc_pane_t4

0x0004,

0xf93d,	// (0x0007bda8) main_myfav_hc_pane_t_ParamLimits

0xf93d,	// (0x0007bda8) main_myfav_hc_pane_t

0xcd08,	// (0x00079173) bg_myfav_hc_instruction_pane_g1

0xd7a2,	// (0x00079c0d) cell_myfav_contact_pane_g1_ParamLimits

0xd7a2,	// (0x00079c0d) cell_myfav_contact_pane_g1

0xd7a2,	// (0x00079c0d) cell_myfav_contact_pane_g2_ParamLimits

0xd7a2,	// (0x00079c0d) cell_myfav_contact_pane_g2

0xd7ae,	// (0x00079c19) cell_myfav_contact_pane_g3_ParamLimits

0xd7ae,	// (0x00079c19) cell_myfav_contact_pane_g3

0xcff0,	// (0x0007945b) cell_myfav_contact_pane_g4_ParamLimits

0xcff0,	// (0x0007945b) cell_myfav_contact_pane_g4

0xd7bb,	// (0x00079c26) cell_myfav_contact_pane_g5_ParamLimits

0xd7bb,	// (0x00079c26) cell_myfav_contact_pane_g5

0x0004,

0xf948,	// (0x0007bdb3) cell_myfav_contact_pane_g_ParamLimits

0xf948,	// (0x0007bdb3) cell_myfav_contact_pane_g

0x5e01,	// (0x0007226c) main_myfav_hc_pane_g3_ParamLimits

0x5e01,	// (0x0007226c) main_myfav_hc_pane_g3

0x0243,	// (0x0006c6ae) popup_adpt_find_window

0x5e58,	// (0x000722c3) afind_page_pane_ParamLimits

0x5e58,	// (0x000722c3) afind_page_pane

0x5e6d,	// (0x000722d8) aid_size_cell_afind_ParamLimits

0x5e6d,	// (0x000722d8) aid_size_cell_afind

0x5e8b,	// (0x000722f6) bg_popup_sub_pane_cp09_ParamLimits

0x5e8b,	// (0x000722f6) bg_popup_sub_pane_cp09

0x5e98,	// (0x00072303) find_pane_cp01_ParamLimits

0x5e98,	// (0x00072303) find_pane_cp01

0xd7c7,	// (0x00079c32) grid_afind_control_pane_ParamLimits

0xd7c7,	// (0x00079c32) grid_afind_control_pane

0x5ea5,	// (0x00072310) grid_afind_pane_ParamLimits

0x5ea5,	// (0x00072310) grid_afind_pane

0x5ec7,	// (0x00072332) cell_afind_pane_ParamLimits

0x5ec7,	// (0x00072332) cell_afind_pane

0xcd08,	// (0x00079173) afind_page_pane_g1

0x5f2e,	// (0x00072399) afind_page_pane_g2

0x5f37,	// (0x000723a2) afind_page_pane_g3

0x0002,

0xf953,	// (0x0007bdbe) afind_page_pane_g

0x5f40,	// (0x000723ab) afind_page_pane_t1

0xd7db,	// (0x00079c46) cell_afind_grid_control_pane_ParamLimits

0xd7db,	// (0x00079c46) cell_afind_grid_control_pane

0xd66a,	// (0x00079ad5) bg_button_pane_cp69_ParamLimits

0xd66a,	// (0x00079ad5) bg_button_pane_cp69

0x5f60,	// (0x000723cb) cell_afind_pane_g1_ParamLimits

0x5f60,	// (0x000723cb) cell_afind_pane_g1

0x5f6d,	// (0x000723d8) cell_afind_pane_t1_ParamLimits

0x5f6d,	// (0x000723d8) cell_afind_pane_t1

0xa5fb,	// (0x00076a66) bg_button_pane_cp72

0xd7ea,	// (0x00079c55) cell_afind_grid_control_pane_g1

0x2f36,	// (0x0006f3a1) aid_image_placing_area_ParamLimits

0x2f36,	// (0x0006f3a1) aid_image_placing_area

0xd321,	// (0x0007978c) field_vitu_entry_pane_g1_ParamLimits

0xd321,	// (0x0007978c) field_vitu_entry_pane_g1

0xd32d,	// (0x00079798) field_vitu_entry_pane_g2_ParamLimits

0xd32d,	// (0x00079798) field_vitu_entry_pane_g2

0x0001,

0xf800,	// (0x0007bc6b) field_vitu_entry_pane_g_ParamLimits

0xf800,	// (0x0007bc6b) field_vitu_entry_pane_g

0x5092,	// (0x000714fd) cell_vitu_itu_pane_g1_ParamLimits

0x50d4,	// (0x0007153f) cell_vitu_itu_pane_t3_ParamLimits

0x50d4,	// (0x0007153f) cell_vitu_itu_pane_t3

0xd609,	// (0x00079a74) mp4_progress_pane_t1_ParamLimits

0xd622,	// (0x00079a8d) mp4_progress_pane_t2_ParamLimits

0xf899,	// (0x0007bd04) mp4_progress_pane_t_ParamLimits

0xd63b,	// (0x00079aa6) mup_progress_pane_cp04_ParamLimits

0x5e44,	// (0x000722af) main_myfav_hc_pane_t5_ParamLimits

0x5e44,	// (0x000722af) main_myfav_hc_pane_t5

0x94a9,	// (0x00075914) aid_zoom_text_primary

0x0243,	// (0x0006c6ae) popup_adpt_find_window_ParamLimits

0x94f3,	// (0x0007595e) main_cam_set_pane

0x5882,	// (0x00071ced) cam4_zoom_pane_ParamLimits

0x5882,	// (0x00071ced) cam4_zoom_pane

0x5f7f,	// (0x000723ea) main_cam_set_pane_g1_ParamLimits

0x5f7f,	// (0x000723ea) main_cam_set_pane_g1

0x5f8d,	// (0x000723f8) main_cam_set_pane_g2_ParamLimits

0x5f8d,	// (0x000723f8) main_cam_set_pane_g2

0x0001,

0xf95a,	// (0x0007bdc5) main_cam_set_pane_g_ParamLimits

0xf95a,	// (0x0007bdc5) main_cam_set_pane_g

0x5fae,	// (0x00072419) main_cam_set_pane_t1_ParamLimits

0x5fae,	// (0x00072419) main_cam_set_pane_t1

0x5fc9,	// (0x00072434) main_cset_listscroll_pane_ParamLimits

0x5fc9,	// (0x00072434) main_cset_listscroll_pane

0x5fe9,	// (0x00072454) main_cset_slider_pane_ParamLimits

0x5fe9,	// (0x00072454) main_cset_slider_pane

0xd7fb,	// (0x00079c66) main_cset_list_pane_ParamLimits

0xd7fb,	// (0x00079c66) main_cset_list_pane

0xd80b,	// (0x00079c76) scroll_pane_cp028

0x600f,	// (0x0007247a) aid_area_touch_slider

0x602b,	// (0x00072496) cset_slider_pane

0x6055,	// (0x000724c0) main_cset_slider_pane_g1

0x606a,	// (0x000724d5) main_cset_slider_pane_g2

0x0011,

0xf95f,	// (0x0007bdca) main_cset_slider_pane_g

0xd844,	// (0x00079caf) main_cset_slider_pane_t1

0x6126,	// (0x00072591) main_cset_slider_pane_t2

0x6140,	// (0x000725ab) main_cset_slider_pane_t3

0x615a,	// (0x000725c5) main_cset_slider_pane_t4

0x6174,	// (0x000725df) main_cset_slider_pane_t5

0x618e,	// (0x000725f9) main_cset_slider_pane_t6

0x61a3,	// (0x0007260e) main_cset_slider_pane_t7

0x000e,

0xf984,	// (0x0007bdef) main_cset_slider_pane_t

0x62a7,	// (0x00072712) cset_list_set_pane_ParamLimits

0x62a7,	// (0x00072712) cset_list_set_pane

0x62b9,	// (0x00072724) aid_position_infowindow_above

0x62c1,	// (0x0007272c) aid_position_infowindow_below

0xa8ab,	// (0x00076d16) cset_list_set_pane_g1_ParamLimits

0xa8ab,	// (0x00076d16) cset_list_set_pane_g1

0xa8b7,	// (0x00076d22) cset_list_set_pane_g3_ParamLimits

0xa8b7,	// (0x00076d22) cset_list_set_pane_g3

0x0001,

0xf9a3,	// (0x0007be0e) cset_list_set_pane_g_ParamLimits

0xf9a3,	// (0x0007be0e) cset_list_set_pane_g

0xa8c6,	// (0x00076d31) cset_list_set_pane_t1_ParamLimits

0xa8c6,	// (0x00076d31) cset_list_set_pane_t1

0xa838,	// (0x00076ca3) list_highlight_pane_cp021_ParamLimits

0xa838,	// (0x00076ca3) list_highlight_pane_cp021

0xb632,	// (0x00077a9d) cset_slider_pane_g1

0xb644,	// (0x00077aaf) cset_slider_pane_g2

0xb63b,	// (0x00077aa6) cset_slider_pane_g3

0x0002,

0xf9a8,	// (0x0007be13) cset_slider_pane_g

0x9fac,	// (0x00076417) aid_area_touch_cam4_zoom

0x9fb4,	// (0x0007641f) cam4_zoom_cont_pane

0x9fbc,	// (0x00076427) cam4_zoom_pane_g1

0x9fc4,	// (0x0007642f) cam4_zoom_pane_g2

0x62c9,	// (0x00072734) cam4_zoom_pane_g3

0x0002,

0xf9af,	// (0x0007be1a) cam4_zoom_pane_g

0x9fcc,	// (0x00076437) cam4_zoom_cont_pane_g1

0x9fd5,	// (0x00076440) cam4_zoom_cont_pane_g2

0x9fde,	// (0x00076449) cam4_zoom_cont_pane_g3

0x0002,

0xf9b6,	// (0x0007be21) cam4_zoom_cont_pane_g

0x56b3,	// (0x00071b1e) call4_image_pane_ParamLimits

0x56b3,	// (0x00071b1e) call4_image_pane

0x571a,	// (0x00071b85) call4_windows_conf_pane_ParamLimits

0x575f,	// (0x00071bca) popup_call4_audio_in_window_ParamLimits

0x575f,	// (0x00071bca) popup_call4_audio_in_window

0x948b,	// (0x000758f6) bg_popup_call2_act_pane_cp02

0xd676,	// (0x00079ae1) call4_list_conf_pane

0xcd08,	// (0x00079173) call4_image_pane_g1

0xcd08,	// (0x00079173) call4_image_pane_g2

0x0001,

0xf6c1,	// (0x0007bb2c) call4_image_pane_g

0xd8e4,	// (0x00079d4f) list_single_graphic_popup_conf4_pane_ParamLimits

0xd8e4,	// (0x00079d4f) list_single_graphic_popup_conf4_pane

0x948b,	// (0x000758f6) list_highlight_pane_cp022

0xd8f7,	// (0x00079d62) list_single_graphic_popup_conf4_pane_g1

0xb203,	// (0x0007766e) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9bd,	// (0x0007be28) list_single_graphic_popup_conf4_pane_g

0xd8ff,	// (0x00079d6a) list_single_graphic_popup_conf4_pane_t1

0x1360,	// (0x0006d7cb) popup_vtel_slider_window_ParamLimits

0x1360,	// (0x0006d7cb) popup_vtel_slider_window

0xd658,	// (0x00079ac3) dialer2_ne_pane_t2_ParamLimits

0xd658,	// (0x00079ac3) dialer2_ne_pane_t2

0x0001,

0xf89e,	// (0x0007bd09) dialer2_ne_pane_t_ParamLimits

0xf89e,	// (0x0007bd09) dialer2_ne_pane_t

0xcaed,	// (0x00078f58) bg_popup_sub_pane_cp010_ParamLimits

0xcaed,	// (0x00078f58) bg_popup_sub_pane_cp010

0x62d1,	// (0x0007273c) popup_vtel_slider_window_g1_ParamLimits

0x62d1,	// (0x0007273c) popup_vtel_slider_window_g1

0x62e4,	// (0x0007274f) popup_vtel_slider_window_g2_ParamLimits

0x62e4,	// (0x0007274f) popup_vtel_slider_window_g2

0x0003,

0xf9c2,	// (0x0007be2d) popup_vtel_slider_window_g_ParamLimits

0xf9c2,	// (0x0007be2d) popup_vtel_slider_window_g

0x633a,	// (0x000727a5) vtel_slider_pane_ParamLimits

0x633a,	// (0x000727a5) vtel_slider_pane

0x635c,	// (0x000727c7) vtel_slider_pane_g1_ParamLimits

0x635c,	// (0x000727c7) vtel_slider_pane_g1

0x6370,	// (0x000727db) vtel_slider_pane_g2_ParamLimits

0x6370,	// (0x000727db) vtel_slider_pane_g2

0x6388,	// (0x000727f3) vtel_slider_pane_g3_ParamLimits

0x6388,	// (0x000727f3) vtel_slider_pane_g3

0x635c,	// (0x000727c7) vtel_slider_pane_g4_ParamLimits

0x635c,	// (0x000727c7) vtel_slider_pane_g4

0x639e,	// (0x00072809) vtel_slider_pane_g5_ParamLimits

0x639e,	// (0x00072809) vtel_slider_pane_g5

0x0004,

0xf9cb,	// (0x0007be36) vtel_slider_pane_g_ParamLimits

0xf9cb,	// (0x0007be36) vtel_slider_pane_g

0x94f3,	// (0x0007595e) main_gallery2_pane

0x5a82,	// (0x00071eed) aid_size_row_itut2_dropdow_list_ParamLimits

0x5a82,	// (0x00071eed) aid_size_row_itut2_dropdow_list

0x5b0e,	// (0x00071f79) grid_vitu2_function_top_pane_ParamLimits

0x5b0e,	// (0x00071f79) grid_vitu2_function_top_pane

0x5b78,	// (0x00071fe3) popup_vitu2_dropdown_list_window_ParamLimits

0x5b78,	// (0x00071fe3) popup_vitu2_dropdown_list_window

0x5ba1,	// (0x0007200c) popup_vitu2_match_list_window

0x63c2,	// (0x0007282d) cell_vitu2_function_top_pane_ParamLimits

0x63c2,	// (0x0007282d) cell_vitu2_function_top_pane

0x63da,	// (0x00072845) cell_vitu2_function_top_pane_cp01_ParamLimits

0x63da,	// (0x00072845) cell_vitu2_function_top_pane_cp01

0x63f6,	// (0x00072861) cell_vitu2_function_top_wide_pane_ParamLimits

0x63f6,	// (0x00072861) cell_vitu2_function_top_wide_pane

0x94f3,	// (0x0007595e) bg_button_pane_cp012

0x6412,	// (0x0007287d) cell_vitu2_function_top_pane_g1

0x9fe7,	// (0x00076452) bg_button_pane_cp013_ParamLimits

0x9fe7,	// (0x00076452) bg_button_pane_cp013

0x6426,	// (0x00072891) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x6426,	// (0x00072891) cell_vitu2_function_top_wide_pane_g1

0x94f3,	// (0x0007595e) bg_popup_sub_pane_cp20

0x643e,	// (0x000728a9) list_vitu2_match_list_pane

0xd6f1,	// (0x00079b5c) bg_popup_sub_pane_cp20_g1

0xd6f9,	// (0x00079b64) bg_popup_sub_pane_cp20_g2

0xace9,	// (0x00077154) bg_popup_sub_pane_cp20_g3

0xd701,	// (0x00079b6c) bg_popup_sub_pane_cp20_g4

0xa7e2,	// (0x00076c4d) bg_popup_sub_pane_cp20_g5

0xd915,	// (0x00079d80) bg_popup_sub_pane_cp20_g6

0xd711,	// (0x00079b7c) bg_popup_sub_pane_cp20_g7

0xd719,	// (0x00079b84) bg_popup_sub_pane_cp20_g8

0xd721,	// (0x00079b8c) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9d6,	// (0x0007be41) bg_popup_sub_pane_cp20_g

0xa003,	// (0x0007646e) list_vitu2_match_list_item_pane_ParamLimits

0xa003,	// (0x0007646e) list_vitu2_match_list_item_pane

0xa015,	// (0x00076480) list_vitu2_match_list_item_pane_t1

0x9501,	// (0x0007596c) bg_popup_sub_pane_cp21

0xa023,	// (0x0007648e) grid_vitu2_dropdown_list_pane

0x64ac,	// (0x00072917) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x64ac,	// (0x00072917) cell_vitu2_dropdown_list_char_pane

0x64cd,	// (0x00072938) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x64cd,	// (0x00072938) cell_vitu2_dropdown_list_ctrl_pane

0xd91d,	// (0x00079d88) cell_vitu2_dropdown_list_char_pane_g1

0xd926,	// (0x00079d91) cell_vitu2_dropdown_list_char_pane_g2

0xd92f,	// (0x00079d9a) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf9f3,	// (0x0007be5e) cell_vitu2_dropdown_list_char_pane_g

0x64f9,	// (0x00072964) cell_vitu2_dropdown_list_char_pane_t1

0x6507,	// (0x00072972) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x6507,	// (0x00072972) cell_vitu2_dropdown_list_ctrl_pane_g1

0x6514,	// (0x0007297f) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x6514,	// (0x0007297f) cell_vitu2_dropdown_list_ctrl_pane_g2

0x6521,	// (0x0007298c) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x6521,	// (0x0007298c) cell_vitu2_dropdown_list_ctrl_pane_g3

0x652e,	// (0x00072999) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x652e,	// (0x00072999) cell_vitu2_dropdown_list_ctrl_pane_g4

0x9ebb,	// (0x00076326) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x9ebb,	// (0x00076326) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf9fa,	// (0x0007be65) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf9fa,	// (0x0007be65) cell_vitu2_dropdown_list_ctrl_pane_g

0x654a,	// (0x000729b5) aid_size_cell_gallery2_ParamLimits

0x654a,	// (0x000729b5) aid_size_cell_gallery2

0x6568,	// (0x000729d3) grid_gallery2_pane_ParamLimits

0x6568,	// (0x000729d3) grid_gallery2_pane

0x6582,	// (0x000729ed) scroll_pane_cp029_ParamLimits

0x6582,	// (0x000729ed) scroll_pane_cp029

0x6593,	// (0x000729fe) cell_gallery2_pane_ParamLimits

0x6593,	// (0x000729fe) cell_gallery2_pane

0xd938,	// (0x00079da3) cell_gallery2_pane_g2

0x65f2,	// (0x00072a5d) cell_gallery2_pane_g3

0xd940,	// (0x00079dab) cell_gallery2_pane_g4

0xd948,	// (0x00079db3) cell_gallery2_pane_g5

0xa5a9,	// (0x00076a14) grid_highlight_pane_cp10

0x5ba1,	// (0x0007200c) popup_vitu2_match_list_window_ParamLimits

0x5bb8,	// (0x00072023) popup_vitu2_query_window_ParamLimits

0x5bb8,	// (0x00072023) popup_vitu2_query_window

0x9501,	// (0x0007596c) bg_vitu2_candi_button_pane

0xd91d,	// (0x00079d88) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd926,	// (0x00079d91) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd92f,	// (0x00079d9a) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x65fa,	// (0x00072a65) bg_button_pane_cp015

0x660c,	// (0x00072a77) bg_button_pane_cp016

0x661f,	// (0x00072a8a) bg_button_pane_cp017

0xc900,	// (0x00078d6b) bg_popup_sub_pane_cp22

0xd950,	// (0x00079dbb) popup_vitu2_query_window_g1

0x6664,	// (0x00072acf) popup_vitu2_query_window_g2

0x0002,

0xfa05,	// (0x0007be70) popup_vitu2_query_window_g

0x6683,	// (0x00072aee) popup_vitu2_query_window_t1_ParamLimits

0x6683,	// (0x00072aee) popup_vitu2_query_window_t1

0x66b8,	// (0x00072b23) popup_vitu2_query_window_t2_ParamLimits

0x66b8,	// (0x00072b23) popup_vitu2_query_window_t2

0x66ca,	// (0x00072b35) popup_vitu2_query_window_t3_ParamLimits

0x66ca,	// (0x00072b35) popup_vitu2_query_window_t3

0x66f2,	// (0x00072b5d) popup_vitu2_query_window_t4_ParamLimits

0x66f2,	// (0x00072b5d) popup_vitu2_query_window_t4

0x6713,	// (0x00072b7e) popup_vitu2_query_window_t5_ParamLimits

0x6713,	// (0x00072b7e) popup_vitu2_query_window_t5

0x0006,

0xfa0c,	// (0x0007be77) popup_vitu2_query_window_t_ParamLimits

0xfa0c,	// (0x0007be77) popup_vitu2_query_window_t

0xd7f3,	// (0x00079c5e) main_cset_text_pane

0x600f,	// (0x0007247a) aid_area_touch_slider_ParamLimits

0x602b,	// (0x00072496) cset_slider_pane_ParamLimits

0x6055,	// (0x000724c0) main_cset_slider_pane_g1_ParamLimits

0x606a,	// (0x000724d5) main_cset_slider_pane_g2_ParamLimits

0xd814,	// (0x00079c7f) main_cset_slider_pane_g3_ParamLimits

0xd814,	// (0x00079c7f) main_cset_slider_pane_g3

0x607f,	// (0x000724ea) main_cset_slider_pane_g4_ParamLimits

0x607f,	// (0x000724ea) main_cset_slider_pane_g4

0x608e,	// (0x000724f9) main_cset_slider_pane_g5_ParamLimits

0x608e,	// (0x000724f9) main_cset_slider_pane_g5

0x609a,	// (0x00072505) main_cset_slider_pane_g6_ParamLimits

0x609a,	// (0x00072505) main_cset_slider_pane_g6

0xf95f,	// (0x0007bdca) main_cset_slider_pane_g_ParamLimits

0xd844,	// (0x00079caf) main_cset_slider_pane_t1_ParamLimits

0x6126,	// (0x00072591) main_cset_slider_pane_t2_ParamLimits

0x6140,	// (0x000725ab) main_cset_slider_pane_t3_ParamLimits

0x615a,	// (0x000725c5) main_cset_slider_pane_t4_ParamLimits

0x6174,	// (0x000725df) main_cset_slider_pane_t5_ParamLimits

0x618e,	// (0x000725f9) main_cset_slider_pane_t6_ParamLimits

0x61a3,	// (0x0007260e) main_cset_slider_pane_t7_ParamLimits

0x61cd,	// (0x00072638) main_cset_slider_pane_t8_ParamLimits

0x61cd,	// (0x00072638) main_cset_slider_pane_t8

0x61f5,	// (0x00072660) main_cset_slider_pane_t9_ParamLimits

0x61f5,	// (0x00072660) main_cset_slider_pane_t9

0x621d,	// (0x00072688) main_cset_slider_pane_t10_ParamLimits

0x621d,	// (0x00072688) main_cset_slider_pane_t10

0x6245,	// (0x000726b0) main_cset_slider_pane_t11_ParamLimits

0x6245,	// (0x000726b0) main_cset_slider_pane_t11

0x626d,	// (0x000726d8) main_cset_slider_pane_t12_ParamLimits

0x626d,	// (0x000726d8) main_cset_slider_pane_t12

0x628a,	// (0x000726f5) main_cset_slider_pane_t13_ParamLimits

0x628a,	// (0x000726f5) main_cset_slider_pane_t13

0xf984,	// (0x0007bdef) main_cset_slider_pane_t_ParamLimits

0x948b,	// (0x000758f6) bg_popup_sub_pane_cp011

0xd95c,	// (0x00079dc7) main_cset_text_pane_g1

0xd964,	// (0x00079dcf) main_cset_text_pane_t1

0xd972,	// (0x00079ddd) main_cset_text_pane_t2

0xd980,	// (0x00079deb) main_cset_text_pane_t3

0xd98e,	// (0x00079df9) main_cset_text_pane_t4

0xd99c,	// (0x00079e07) main_cset_text_pane_t5

0xd9aa,	// (0x00079e15) main_cset_text_pane_t6

0xd9b8,	// (0x00079e23) main_cset_text_pane_t7

0x0006,

0xfa1b,	// (0x0007be86) main_cset_text_pane_t

0x9501,	// (0x0007596c) main_cam4_burst_pane

0x9501,	// (0x0007596c) main_cam5_pane

0x5f4e,	// (0x000723b9) bg_button_pane_cp019

0x5f57,	// (0x000723c2) bg_button_pane_cp020

0xd820,	// (0x00079c8b) main_cset_slider_pane_g7_ParamLimits

0xd820,	// (0x00079c8b) main_cset_slider_pane_g7

0xd82c,	// (0x00079c97) main_cset_slider_pane_g8_ParamLimits

0xd82c,	// (0x00079c97) main_cset_slider_pane_g8

0x60ae,	// (0x00072519) main_cset_slider_pane_g9_ParamLimits

0x60ae,	// (0x00072519) main_cset_slider_pane_g9

0x60ba,	// (0x00072525) main_cset_slider_pane_g10_ParamLimits

0x60ba,	// (0x00072525) main_cset_slider_pane_g10

0x60c6,	// (0x00072531) main_cset_slider_pane_g11_ParamLimits

0x60c6,	// (0x00072531) main_cset_slider_pane_g11

0x60d2,	// (0x0007253d) main_cset_slider_pane_g12_ParamLimits

0x60d2,	// (0x0007253d) main_cset_slider_pane_g12

0x60de,	// (0x00072549) main_cset_slider_pane_g13_ParamLimits

0x60de,	// (0x00072549) main_cset_slider_pane_g13

0x60ea,	// (0x00072555) main_cset_slider_pane_g14_ParamLimits

0x60ea,	// (0x00072555) main_cset_slider_pane_g14

0x60f6,	// (0x00072561) main_cset_slider_pane_g15_ParamLimits

0x60f6,	// (0x00072561) main_cset_slider_pane_g15

0xd872,	// (0x00079cdd) main_cset_slider_pane_t14_ParamLimits

0xd872,	// (0x00079cdd) main_cset_slider_pane_t14

0xd8ab,	// (0x00079d16) main_cset_slider_pane_t15_ParamLimits

0xd8ab,	// (0x00079d16) main_cset_slider_pane_t15

0x678a,	// (0x00072bf5) aid_cam4_burst_size_cell_ParamLimits

0x678a,	// (0x00072bf5) aid_cam4_burst_size_cell

0x67aa,	// (0x00072c15) grid_cam4_burst_pane_ParamLimits

0x67aa,	// (0x00072c15) grid_cam4_burst_pane

0x67e2,	// (0x00072c4d) linegrid_cam4_burst_pane_ParamLimits

0x67e2,	// (0x00072c4d) linegrid_cam4_burst_pane

0xd9c6,	// (0x00079e31) scroll_pane_cp30_ParamLimits

0xd9c6,	// (0x00079e31) scroll_pane_cp30

0x6806,	// (0x00072c71) cell_cam4_burst_pane_ParamLimits

0x6806,	// (0x00072c71) cell_cam4_burst_pane

0xd9d2,	// (0x00079e3d) linegrid_cam4_burst_pane_g1_ParamLimits

0xd9d2,	// (0x00079e3d) linegrid_cam4_burst_pane_g1

0x6853,	// (0x00072cbe) linegrid_cam4_burst_pane_g2_ParamLimits

0x6853,	// (0x00072cbe) linegrid_cam4_burst_pane_g2

0xd9df,	// (0x00079e4a) linegrid_cam4_burst_pane_g3_ParamLimits

0xd9df,	// (0x00079e4a) linegrid_cam4_burst_pane_g3

0x0002,

0xfa2a,	// (0x0007be95) linegrid_cam4_burst_pane_g_ParamLimits

0xfa2a,	// (0x0007be95) linegrid_cam4_burst_pane_g

0x6864,	// (0x00072ccf) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x6864,	// (0x00072ccf) linegrid_cam4_burst_pane_g3_copy1

0xd9ec,	// (0x00079e57) linegrid_cam4_burst_pane_g4_ParamLimits

0xd9ec,	// (0x00079e57) linegrid_cam4_burst_pane_g4

0x687e,	// (0x00072ce9) linegrid_cam4_burst_pane_g5_ParamLimits

0x687e,	// (0x00072ce9) linegrid_cam4_burst_pane_g5

0x688f,	// (0x00072cfa) linegrid_cam4_burst_pane_g6_ParamLimits

0x688f,	// (0x00072cfa) linegrid_cam4_burst_pane_g6

0xd9f9,	// (0x00079e64) linegrid_cam4_burst_pane_g7_ParamLimits

0xd9f9,	// (0x00079e64) linegrid_cam4_burst_pane_g7

0x68a6,	// (0x00072d11) cell_cam4_burst_pane_g1

0xda12,	// (0x00079e7d) main_cam5_pane_t1_ParamLimits

0xda12,	// (0x00079e7d) main_cam5_pane_t1

0xda24,	// (0x00079e8f) main_cam5_pane_t2_ParamLimits

0xda24,	// (0x00079e8f) main_cam5_pane_t2

0xda36,	// (0x00079ea1) main_cam5_pane_t3_ParamLimits

0xda36,	// (0x00079ea1) main_cam5_pane_t3

0xda48,	// (0x00079eb3) main_cam5_pane_t4_ParamLimits

0xda48,	// (0x00079eb3) main_cam5_pane_t4

0xda60,	// (0x00079ecb) main_cam5_pane_t5_ParamLimits

0xda60,	// (0x00079ecb) main_cam5_pane_t5

0xda74,	// (0x00079edf) main_cam5_pane_t6_ParamLimits

0xda74,	// (0x00079edf) main_cam5_pane_t6

0xda88,	// (0x00079ef3) main_cam5_pane_t7_ParamLimits

0xda88,	// (0x00079ef3) main_cam5_pane_t7

0xda9a,	// (0x00079f05) main_cam5_pane_t8_ParamLimits

0xda9a,	// (0x00079f05) main_cam5_pane_t8

0xdab6,	// (0x00079f21) main_cam5_pane_t9_ParamLimits

0xdab6,	// (0x00079f21) main_cam5_pane_t9

0xdac8,	// (0x00079f33) main_cam5_pane_t10_ParamLimits

0xdac8,	// (0x00079f33) main_cam5_pane_t10

0xdada,	// (0x00079f45) main_cam5_pane_t11_ParamLimits

0xdada,	// (0x00079f45) main_cam5_pane_t11

0xdaec,	// (0x00079f57) main_cam5_pane_t12_ParamLimits

0xdaec,	// (0x00079f57) main_cam5_pane_t12

0xdb01,	// (0x00079f6c) main_cam5_pane_t13_ParamLimits

0xdb01,	// (0x00079f6c) main_cam5_pane_t13

0x000c,

0xfa36,	// (0x0007bea1) main_cam5_pane_t_ParamLimits

0xfa36,	// (0x0007bea1) main_cam5_pane_t

0x02c5,	// (0x0006c730) popup_scut_keymap_window_ParamLimits

0x02c5,	// (0x0006c730) popup_scut_keymap_window

0x68b9,	// (0x00072d24) aid_size_cell_brow_shortcut

0xa5a9,	// (0x00076a14) bg_popup_window_pane_cp010

0x68c5,	// (0x00072d30) grid_scut_pane

0x68d1,	// (0x00072d3c) cell_scut_pane_ParamLimits

0x68d1,	// (0x00072d3c) cell_scut_pane

0x68e8,	// (0x00072d53) cell_scut_pane_g1

0xdb1e,	// (0x00079f89) cell_scut_pane_t1

0xdb2d,	// (0x00079f98) cell_scut_pane_t2

0x68f1,	// (0x00072d5c) cell_scut_pane_t3

0x0002,

0xfa51,	// (0x0007bebc) cell_scut_pane_t

0x4588,	// (0x000709f3) main_mup3_pane_g8_ParamLimits

0x4588,	// (0x000709f3) main_mup3_pane_g8

0x5a9a,	// (0x00071f05) area_vitu2_query_pane_ParamLimits

0x5a9a,	// (0x00071f05) area_vitu2_query_pane

0x6632,	// (0x00072a9d) input_focus_pane_cp08

0xdb3c,	// (0x00079fa7) area_vitu2_query_pane_g1

0x68ff,	// (0x00072d6a) area_vitu2_query_pane_g2

0x0001,

0xfa58,	// (0x0007bec3) area_vitu2_query_pane_g

0x6910,	// (0x00072d7b) area_vitu2_query_pane_t1_ParamLimits

0x6910,	// (0x00072d7b) area_vitu2_query_pane_t1

0x6924,	// (0x00072d8f) area_vitu2_query_pane_t2_ParamLimits

0x6924,	// (0x00072d8f) area_vitu2_query_pane_t2

0x6938,	// (0x00072da3) area_vitu2_query_pane_t3_ParamLimits

0x6938,	// (0x00072da3) area_vitu2_query_pane_t3

0xa8db,	// (0x00076d46) area_vitu2_query_pane_t4_ParamLimits

0xa8db,	// (0x00076d46) area_vitu2_query_pane_t4

0xa903,	// (0x00076d6e) area_vitu2_query_pane_t5_ParamLimits

0xa903,	// (0x00076d6e) area_vitu2_query_pane_t5

0xa92b,	// (0x00076d96) area_vitu2_query_pane_t6_ParamLimits

0xa92b,	// (0x00076d96) area_vitu2_query_pane_t6

0x0006,

0xfa5d,	// (0x0007bec8) area_vitu2_query_pane_t_ParamLimits

0xfa5d,	// (0x0007bec8) area_vitu2_query_pane_t

0x6960,	// (0x00072dcb) bg_button_pane_cp018

0x696e,	// (0x00072dd9) bg_button_pane_cp021

0x697a,	// (0x00072de5) bg_button_pane_cp022

0x6989,	// (0x00072df4) input_focus_pane_cp09

0xb33f,	// (0x000777aa) aid_size_touch_mv_arrow_left

0xb368,	// (0x000777d3) aid_size_touch_mv_arrow_right

0x610e,	// (0x00072579) main_cset_slider_pane_g16_ParamLimits

0x610e,	// (0x00072579) main_cset_slider_pane_g16

0x611a,	// (0x00072585) main_cset_slider_pane_g17_ParamLimits

0x611a,	// (0x00072585) main_cset_slider_pane_g17

0x68a6,	// (0x00072d11) cell_cam4_burst_pane_g1_ParamLimits

0x948b,	// (0x000758f6) compa_mode_pane

0x62f4,	// (0x0007275f) popup_vtel_slider_window_g3_ParamLimits

0x62f4,	// (0x0007275f) popup_vtel_slider_window_g3

0x630b,	// (0x00072776) popup_vtel_slider_window_g4_ParamLimits

0x630b,	// (0x00072776) popup_vtel_slider_window_g4

0x6322,	// (0x0007278d) popup_vtel_slider_window_t1_ParamLimits

0x6322,	// (0x0007278d) popup_vtel_slider_window_t1

0x9501,	// (0x0007596c) main_cl_pane

0x9ab9,	// (0x00075f24) popup_imed_adjust2_window_ParamLimits

0xc900,	// (0x00078d6b) bg_tb_trans_pane_cp05_ParamLimits

0xd256,	// (0x000796c1) popup_imed_adjust2_window_g1_ParamLimits

0xd265,	// (0x000796d0) popup_imed_adjust2_window_g2_ParamLimits

0xd265,	// (0x000796d0) popup_imed_adjust2_window_g2

0xd271,	// (0x000796dc) popup_imed_adjust2_window_g3_ParamLimits

0xd271,	// (0x000796dc) popup_imed_adjust2_window_g3

0x0002,

0xf7c4,	// (0x0007bc2f) popup_imed_adjust2_window_g_ParamLimits

0xf7c4,	// (0x0007bc2f) popup_imed_adjust2_window_g

0xd27d,	// (0x000796e8) popup_imed_adjust2_window_t1_ParamLimits

0xd295,	// (0x00079700) slider_imed_adjust_pane_ParamLimits

0xd2a9,	// (0x00079714) slider_imed_adjust_pane_g1_ParamLimits

0xd2b9,	// (0x00079724) slider_imed_adjust_pane_g2_ParamLimits

0xd2c9,	// (0x00079734) slider_imed_adjust_pane_g3_ParamLimits

0xd2da,	// (0x00079745) slider_imed_adjust_pane_g4_ParamLimits

0xf7cb,	// (0x0007bc36) slider_imed_adjust_pane_g_ParamLimits

0x5823,	// (0x00071c8e) aid_touch_area_cam4_ParamLimits

0x5823,	// (0x00071c8e) aid_touch_area_cam4

0x9e9f,	// (0x0007630a) battery_pane_cp01

0x58f2,	// (0x00071d5d) main_camera4_pane_g6_ParamLimits

0x58f2,	// (0x00071d5d) main_camera4_pane_g6

0x591c,	// (0x00071d87) main_camera4_pane_t2_ParamLimits

0x591c,	// (0x00071d87) main_camera4_pane_t2

0x0001,

0xf8d2,	// (0x0007bd3d) main_camera4_pane_t_ParamLimits

0xf8d2,	// (0x0007bd3d) main_camera4_pane_t

0x5951,	// (0x00071dbc) aid_touch_area_vid4_ParamLimits

0x5951,	// (0x00071dbc) aid_touch_area_vid4

0x59a5,	// (0x00071e10) main_video4_pane_g5_ParamLimits

0x59a5,	// (0x00071e10) main_video4_pane_g5

0x59ca,	// (0x00071e35) vid4_progress_pane_ParamLimits

0x59ca,	// (0x00071e35) vid4_progress_pane

0xd838,	// (0x00079ca3) main_cset_slider_pane_g18_ParamLimits

0xd838,	// (0x00079ca3) main_cset_slider_pane_g18

0xda06,	// (0x00079e71) cell_cam4_burst_pane_g2_ParamLimits

0xda06,	// (0x00079e71) cell_cam4_burst_pane_g2

0x0001,

0xfa31,	// (0x0007be9c) cell_cam4_burst_pane_g_ParamLimits

0xfa31,	// (0x0007be9c) cell_cam4_burst_pane_g

0xa3db,	// (0x00076846) bg_cl_pane_ParamLimits

0xa3db,	// (0x00076846) bg_cl_pane

0x6998,	// (0x00072e03) cl_header_pane_ParamLimits

0x6998,	// (0x00072e03) cl_header_pane

0x69ac,	// (0x00072e17) cl_listscroll_pane_ParamLimits

0x69ac,	// (0x00072e17) cl_listscroll_pane

0xdb48,	// (0x00079fb3) bg_cl_pane_g1

0xdb50,	// (0x00079fbb) bg_cl_pane_g2

0xdb58,	// (0x00079fc3) bg_cl_pane_g3

0xdb60,	// (0x00079fcb) bg_cl_pane_g4

0xdb68,	// (0x00079fd3) bg_cl_pane_g5

0xdb70,	// (0x00079fdb) bg_cl_pane_g6

0xdb78,	// (0x00079fe3) bg_cl_pane_g7

0xdb80,	// (0x00079feb) bg_cl_pane_g8

0xdb88,	// (0x00079ff3) bg_cl_pane_g9

0x0008,

0xfa6c,	// (0x0007bed7) bg_cl_pane_g

0x69bc,	// (0x00072e27) aid_height_cl_leading_ParamLimits

0x69bc,	// (0x00072e27) aid_height_cl_leading

0x69c8,	// (0x00072e33) aid_height_cl_text_ParamLimits

0x69c8,	// (0x00072e33) aid_height_cl_text

0xa838,	// (0x00076ca3) bg_cl_header_pane_ParamLimits

0xa838,	// (0x00076ca3) bg_cl_header_pane

0x69e7,	// (0x00072e52) cl_header_pane_g1_ParamLimits

0x69e7,	// (0x00072e52) cl_header_pane_g1

0x69fd,	// (0x00072e68) cl_header_pane_t1_ParamLimits

0x69fd,	// (0x00072e68) cl_header_pane_t1

0xdb90,	// (0x00079ffb) cl_list_pane

0xd80b,	// (0x00079c76) hc_scroll_pane_cp01

0xa7e2,	// (0x00076c4d) bg_cl_header_pane_g1

0xd6f1,	// (0x00079b5c) bg_cl_header_pane_g2

0xace9,	// (0x00077154) bg_cl_header_pane_g3

0xd701,	// (0x00079b6c) bg_cl_header_pane_g4

0xd6f9,	// (0x00079b64) bg_cl_header_pane_g5

0xd915,	// (0x00079d80) bg_cl_header_pane_g6

0xd719,	// (0x00079b84) bg_cl_header_pane_g7

0xd721,	// (0x00079b8c) bg_cl_header_pane_g8

0xd711,	// (0x00079b7c) bg_cl_header_pane_g9

0x0008,

0xfa7f,	// (0x0007beea) bg_cl_header_pane_g

0x6a16,	// (0x00072e81) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x6a16,	// (0x00072e81) hc_cl_list_double_graphic_heading_pane

0x6a27,	// (0x00072e92) hc_cl_list_single_graphic_pane_ParamLimits

0x6a27,	// (0x00072e92) hc_cl_list_single_graphic_pane

0x6a3d,	// (0x00072ea8) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x6a3d,	// (0x00072ea8) hc_cl_list_single_graphic_pane_g1

0x6a49,	// (0x00072eb4) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x6a49,	// (0x00072eb4) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfa92,	// (0x0007befd) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfa92,	// (0x0007befd) hc_cl_list_single_graphic_pane_g

0x6a5d,	// (0x00072ec8) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x6a5d,	// (0x00072ec8) hc_cl_list_single_graphic_pane_t1

0x6a3d,	// (0x00072ea8) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x6a3d,	// (0x00072ea8) hc_cl_list_double_graphic_heading_pane_g1

0x6a72,	// (0x00072edd) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x6a72,	// (0x00072edd) hc_cl_list_double_graphic_heading_pane_g2

0x6a86,	// (0x00072ef1) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x6a86,	// (0x00072ef1) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfa97,	// (0x0007bf02) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfa97,	// (0x0007bf02) hc_cl_list_double_graphic_heading_pane_g

0x6a9a,	// (0x00072f05) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x6a9a,	// (0x00072f05) hc_cl_list_double_graphic_heading_pane_t1

0x6aaf,	// (0x00072f1a) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x6aaf,	// (0x00072f1a) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfa9e,	// (0x0007bf09) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfa9e,	// (0x0007bf09) hc_cl_list_double_graphic_heading_pane_t

0xa033,	// (0x0007649e) vid4_progress_pane_g1

0xa043,	// (0x000764ae) vid4_progress_pane_g2

0x6ac4,	// (0x00072f2f) vid4_progress_pane_g3

0xa053,	// (0x000764be) vid4_progress_pane_g4

0x0004,

0xfaa3,	// (0x0007bf0e) vid4_progress_pane_g

0x6ad6,	// (0x00072f41) vid4_progress_pane_t1

0xa06b,	// (0x000764d6) vid4_progress_pane_t2

0x0002,

0xfaae,	// (0x0007bf19) vid4_progress_pane_t

0x6aee,	// (0x00072f59) wait_bar_pane_cp07

0xcafb,	// (0x00078f66) blid_firmament_pane_ParamLimits

0xcb3e,	// (0x00078fa9) popup_blid_sat_info2_window_g1

0xcb62,	// (0x00078fcd) popup_blid_sat_info2_window_t3

0xcb70,	// (0x00078fdb) popup_blid_sat_info2_window_t4

0xcb7e,	// (0x00078fe9) popup_blid_sat_info2_window_t5

0xcb8c,	// (0x00078ff7) popup_blid_sat_info2_window_t6

0xcb9c,	// (0x00079007) popup_blid_sat_info2_window_t7

0xcbaa,	// (0x00079015) popup_blid_sat_info2_window_t8

0xcbb8,	// (0x00079023) popup_blid_sat_info2_window_t9

0xcbc6,	// (0x00079031) popup_blid_sat_info2_window_t10

0xcc88,	// (0x000790f3) aid_firma_cardinal_ParamLimits

0xcc9c,	// (0x00079107) blid_firmament_pane_t1_ParamLimits

0xccb3,	// (0x0007911e) blid_firmament_pane_t2_ParamLimits

0xccca,	// (0x00079135) blid_firmament_pane_t3_ParamLimits

0xcce1,	// (0x0007914c) blid_firmament_pane_t4_ParamLimits

0xf6b8,	// (0x0007bb23) blid_firmament_pane_t_ParamLimits

0xccf8,	// (0x00079163) blid_sat_info_pane_ParamLimits

0x94f3,	// (0x0007595e) main_cam_set_pane_ParamLimits

0x4e4c,	// (0x000712b7) aid_size_cell_colour_35_ParamLimits

0x4e6c,	// (0x000712d7) aid_size_cell_colour_112_ParamLimits

0x4e8c,	// (0x000712f7) aid_size_cell_effect_ParamLimits

0xc900,	// (0x00078d6b) bg_tb_trans_pane_cp02_ParamLimits

0xaf31,	// (0x0007739c) heading_imed_pane_ParamLimits

0x4eac,	// (0x00071317) listscroll_imed_pane_ParamLimits

0xbf1a,	// (0x00078385) popup_call2_audio_first_window_g5_ParamLimits

0xbf1a,	// (0x00078385) popup_call2_audio_first_window_g5

0x543f,	// (0x000718aa) aid_size_touch_image3_arrow_left_ParamLimits

0x543f,	// (0x000718aa) aid_size_touch_image3_arrow_left

0x546b,	// (0x000718d6) aid_size_touch_image3_arrow_right_ParamLimits

0x546b,	// (0x000718d6) aid_size_touch_image3_arrow_right

0xa080,	// (0x000764eb) vid4_progress_pane_t3

0x51bf,	// (0x0007162a) main_hwr_training_symbol_option_pane_ParamLimits

0x51bf,	// (0x0007162a) main_hwr_training_symbol_option_pane

0xd543,	// (0x000799ae) popup_hwr_training_preview_window_ParamLimits

0xd543,	// (0x000799ae) popup_hwr_training_preview_window

0x51df,	// (0x0007164a) hwr_training_navi_pane_g5_ParamLimits

0x51df,	// (0x0007164a) hwr_training_navi_pane_g5

0xd6df,	// (0x00079b4a) popup_char_count_window

0x94f3,	// (0x0007595e) bg_popup_sub_pane_cp20_ParamLimits

0x643e,	// (0x000728a9) list_vitu2_match_list_pane_ParamLimits

0x644d,	// (0x000728b8) vitu2_page_scroll_pane_ParamLimits

0x644d,	// (0x000728b8) vitu2_page_scroll_pane

0xdb99,	// (0x0007a004) list_single_hwr_training_symbol_option_pane_ParamLimits

0xdb99,	// (0x0007a004) list_single_hwr_training_symbol_option_pane

0xdbac,	// (0x0007a017) list_single_hwr_training_symbol_option_pane_g1

0xdbb4,	// (0x0007a01f) list_single_hwr_training_symbol_option_pane_t1

0xdbc2,	// (0x0007a02d) bg_button_pane_cp023

0xdbcb,	// (0x0007a036) bg_button_pane_cp024

0x6b39,	// (0x00072fa4) vitu2_page_scroll_pane_g1

0x6b41,	// (0x00072fac) vitu2_page_scroll_pane_g2

0x0001,

0xfab5,	// (0x0007bf20) vitu2_page_scroll_pane_g

0x6b49,	// (0x00072fb4) vitu2_page_scroll_pane_t1

0xca5b,	// (0x00078ec6) popup_char_count_window_g1

0xdbfe,	// (0x0007a069) popup_char_count_window_g2

0xdc07,	// (0x0007a072) popup_char_count_window_g3

0x0002,

0xfaba,	// (0x0007bf25) popup_char_count_window_g

0xdc10,	// (0x0007a07b) popup_char_count_window_t1

0x9501,	// (0x0007596c) main_vded2_pane

0xd242,	// (0x000796ad) aid_size_cell_imed_line

0xd24c,	// (0x000796b7) grid_imed_line_width_pane

0x9f65,	// (0x000763d0) vid4_indicators_pane_g4

0xdc1e,	// (0x0007a089) cell_imed_line_width_pane_ParamLimits

0xdc1e,	// (0x0007a089) cell_imed_line_width_pane

0xdc32,	// (0x0007a09d) cell_imed_line_width_pane_g1

0xd17e,	// (0x000795e9) cell_imed_line_width_pane_g2

0x0001,

0xfac1,	// (0x0007bf2c) cell_imed_line_width_pane_g

0x6b58,	// (0x00072fc3) main_vded2_pane_g1_ParamLimits

0x6b58,	// (0x00072fc3) main_vded2_pane_g1

0x6b6e,	// (0x00072fd9) main_vded2_pane_g2_ParamLimits

0x6b6e,	// (0x00072fd9) main_vded2_pane_g2

0x0001,

0xfac6,	// (0x0007bf31) main_vded2_pane_g_ParamLimits

0xfac6,	// (0x0007bf31) main_vded2_pane_g

0x6b80,	// (0x00072feb) vded2_slider_pane_ParamLimits

0x6b80,	// (0x00072feb) vded2_slider_pane

0x6b90,	// (0x00072ffb) aid_size_touch_vded2_end

0x6b9a,	// (0x00073005) aid_size_touch_vded2_playhead

0xdc3b,	// (0x0007a0a6) aid_size_touch_vded2_start

0xdc43,	// (0x0007a0ae) vded2_slider_bg_pane

0xdc4c,	// (0x0007a0b7) vded2_slider_pane_g1

0xdc55,	// (0x0007a0c0) vded2_slider_pane_g2

0x6ba4,	// (0x0007300f) vded2_slider_pane_g3

0x0002,

0xfacb,	// (0x0007bf36) vded2_slider_pane_g

0xdc5d,	// (0x0007a0c8) vded2_slider_bg_pane_g1

0xdc66,	// (0x0007a0d1) vded2_slider_bg_pane_g2

0xdc6f,	// (0x0007a0da) vded2_slider_bg_pane_g3

0x0002,

0xfad2,	// (0x0007bf3d) vded2_slider_bg_pane_g

0x2ba5,	// (0x0006f010) aid_postcard_touch_down_pane_ParamLimits

0x2ba5,	// (0x0006f010) aid_postcard_touch_down_pane

0x2bbb,	// (0x0006f026) aid_postcard_touch_up_pane_ParamLimits

0x2bbb,	// (0x0006f026) aid_postcard_touch_up_pane

0x9501,	// (0x0007596c) main_blid2_pane

0x9a9f,	// (0x00075f0a) popup_blid2_search_window

0x948b,	// (0x000758f6) blid2_gps_pane

0x948b,	// (0x000758f6) blid2_navig_pane

0x948b,	// (0x000758f6) blid2_search_pane

0x948b,	// (0x000758f6) blid2_tripm_pane

0x6baf,	// (0x0007301a) blid2_search_pane_g1_ParamLimits

0x6baf,	// (0x0007301a) blid2_search_pane_g1

0x6bc9,	// (0x00073034) blid2_search_pane_t1_ParamLimits

0x6bc9,	// (0x00073034) blid2_search_pane_t1

0x6bdb,	// (0x00073046) aid_size_cell_blid2_gps_ParamLimits

0x6bdb,	// (0x00073046) aid_size_cell_blid2_gps

0x6bf3,	// (0x0007305e) blid2_gps_pane_g1_ParamLimits

0x6bf3,	// (0x0007305e) blid2_gps_pane_g1

0x6c07,	// (0x00073072) grid_blid2_satellite_pane_ParamLimits

0x6c07,	// (0x00073072) grid_blid2_satellite_pane

0x6c21,	// (0x0007308c) blid2_navig_pane_g1_ParamLimits

0x6c21,	// (0x0007308c) blid2_navig_pane_g1

0x6c2d,	// (0x00073098) blid2_navig_pane_t1_ParamLimits

0x6c2d,	// (0x00073098) blid2_navig_pane_t1

0x6c48,	// (0x000730b3) blid2_navig_pane_t2_ParamLimits

0x6c48,	// (0x000730b3) blid2_navig_pane_t2

0x0001,

0xfad9,	// (0x0007bf44) blid2_navig_pane_t_ParamLimits

0xfad9,	// (0x0007bf44) blid2_navig_pane_t

0x6c63,	// (0x000730ce) blid2_navig_ring_pane_ParamLimits

0x6c63,	// (0x000730ce) blid2_navig_ring_pane

0x6c7c,	// (0x000730e7) blid2_speed_pane_ParamLimits

0x6c7c,	// (0x000730e7) blid2_speed_pane

0x6c88,	// (0x000730f3) blid2_tripm_pane_g1_ParamLimits

0x6c88,	// (0x000730f3) blid2_tripm_pane_g1

0x6ca1,	// (0x0007310c) blid2_tripm_pane_g2_ParamLimits

0x6ca1,	// (0x0007310c) blid2_tripm_pane_g2

0x6cb5,	// (0x00073120) blid2_tripm_pane_g3_ParamLimits

0x6cb5,	// (0x00073120) blid2_tripm_pane_g3

0x6cc9,	// (0x00073134) blid2_tripm_pane_g4_ParamLimits

0x6cc9,	// (0x00073134) blid2_tripm_pane_g4

0x6cdd,	// (0x00073148) blid2_tripm_pane_g5_ParamLimits

0x6cdd,	// (0x00073148) blid2_tripm_pane_g5

0x0005,

0xfade,	// (0x0007bf49) blid2_tripm_pane_g_ParamLimits

0xfade,	// (0x0007bf49) blid2_tripm_pane_g

0x6d03,	// (0x0007316e) blid2_tripm_pane_t1_ParamLimits

0x6d03,	// (0x0007316e) blid2_tripm_pane_t1

0x6d1e,	// (0x00073189) blid2_tripm_pane_t2_ParamLimits

0x6d1e,	// (0x00073189) blid2_tripm_pane_t2

0x6d37,	// (0x000731a2) blid2_tripm_pane_t3_ParamLimits

0x6d37,	// (0x000731a2) blid2_tripm_pane_t3

0x0003,

0xfaeb,	// (0x0007bf56) blid2_tripm_pane_t_ParamLimits

0xfaeb,	// (0x0007bf56) blid2_tripm_pane_t

0x6d7e,	// (0x000731e9) cell_blid2_satellite_pane_ParamLimits

0x6d7e,	// (0x000731e9) cell_blid2_satellite_pane

0x6d9c,	// (0x00073207) cell_blid2_satellite_pane_g1

0xdc78,	// (0x0007a0e3) cell_blid2_satellite_pane_t1

0xcd08,	// (0x00079173) blid2_speed_pane_g1

0xdc86,	// (0x0007a0f1) blid2_speed_pane_t1

0xdc94,	// (0x0007a0ff) blid2_speed_pane_t2

0x0001,

0xfaf4,	// (0x0007bf5f) blid2_speed_pane_t

0xcd08,	// (0x00079173) blid2_navig_ring_pane_g1

0x6da5,	// (0x00073210) blid2_navig_ring_pane_g2

0x6dad,	// (0x00073218) blid2_navig_ring_pane_g3

0x6db5,	// (0x00073220) blid2_navig_ring_pane_g4

0x6dbd,	// (0x00073228) blid2_navig_ring_pane_g5

0x0004,

0xfaf9,	// (0x0007bf64) blid2_navig_ring_pane_g

0x948b,	// (0x000758f6) bg_popup_window_pane_cp011

0xdca2,	// (0x0007a10d) popup_blid2_search_window_g1

0xdcaa,	// (0x0007a115) popup_blid2_search_window_t1

0xdcb8,	// (0x0007a123) popup_blid2_search_window_t2

0x0001,

0xfb04,	// (0x0007bf6f) popup_blid2_search_window_t

0xa6f1,	// (0x00076b5c) main_browser_pane_g1

0xa3db,	// (0x00076846) main_browser_pane_ParamLimits

0x94f3,	// (0x0007595e) bg_button_pane_cp011_ParamLimits

0x5ce4,	// (0x0007214f) cell_vitu2_function_pane_g1_ParamLimits

0xc900,	// (0x00078d6b) bg_popup_sub_pane_cp22_ParamLimits

0x6632,	// (0x00072a9d) input_focus_pane_cp08_ParamLimits

0x6649,	// (0x00072ab4) popup_vitu2_query_button_pane_ParamLimits

0x6649,	// (0x00072ab4) popup_vitu2_query_button_pane

0x665a,	// (0x00072ac5) popup_vitu2_query_input_button_pane

0xd950,	// (0x00079dbb) popup_vitu2_query_window_g1_ParamLimits

0x6664,	// (0x00072acf) popup_vitu2_query_window_g2_ParamLimits

0xfa05,	// (0x0007be70) popup_vitu2_query_window_g_ParamLimits

0x948b,	// (0x000758f6) bg_button_pane_cp026

0x6dc5,	// (0x00073230) popup_vitu2_query_input_button_pane_g1

0x948b,	// (0x000758f6) bg_button_pane_cp025

0xdcc6,	// (0x0007a131) popup_vitu2_query_button_pane_t1

0x424d,	// (0x000706b8) main_mp3_pane_t6

0x425b,	// (0x000706c6) popup_slider_window_cp01

0x9ec9,	// (0x00076334) cam4_battery_pane

0x9f22,	// (0x0007638d) cam4_battery_pane_cp02

0xa02b,	// (0x00076496) cam4_battery_pane_cp01

0xa02b,	// (0x00076496) cam4_battery_pane_cp03

0xd64e,	// (0x00079ab9) cam4_battery_pane_g1

0xcd08,	// (0x00079173) cam4_battery_pane_g2

0x0001,

0xfb09,	// (0x0007bf74) cam4_battery_pane_g

0xcbd4,	// (0x0007903f) popup_blid_sat_info2_window_t11

0xb33f,	// (0x000777aa) aid_size_touch_mv_arrow_left_ParamLimits

0xb368,	// (0x000777d3) aid_size_touch_mv_arrow_right_ParamLimits

0xb3c6,	// (0x00077831) navi_pane_g1_ParamLimits

0xb3d2,	// (0x0007783d) navi_pane_g2_ParamLimits

0xb400,	// (0x0007786b) navi_pane_g3_ParamLimits

0xf3ca,	// (0x0007b835) navi_pane_g_ParamLimits

0x2605,	// (0x0006ea70) navi_pane_mv_t1_ParamLimits

0x4eb8,	// (0x00071323) grid_imed_effect_pane_ParamLimits

0x125d,	// (0x0006d6c8) aid_placing_vt_slider_lsc

0xa640,	// (0x00076aab) aid_placing_vt_slider_prt

0xa838,	// (0x00076ca3) bg_tb_trans_pane_cp01_ParamLimits

0xce8b,	// (0x000792f6) popup_image_details_window_g1_ParamLimits

0xce9e,	// (0x00079309) popup_image_details_window_g2_ParamLimits

0xceb3,	// (0x0007931e) popup_image_details_window_g3_ParamLimits

0xceb3,	// (0x0007931e) popup_image_details_window_g3

0xf6fd,	// (0x0007bb68) popup_image_details_window_g_ParamLimits

0xcec7,	// (0x00079332) popup_image_details_window_t1_ParamLimits

0xced9,	// (0x00079344) popup_image_details_window_t2_ParamLimits

0xcef2,	// (0x0007935d) popup_image_details_window_t3_ParamLimits

0xcf06,	// (0x00079371) popup_image_details_window_t4_ParamLimits

0xcf21,	// (0x0007938c) popup_image_details_window_t5_ParamLimits

0xf704,	// (0x0007bb6f) popup_image_details_window_t_ParamLimits

0x69d4,	// (0x00072e3f) cl_header_name_pane_ParamLimits

0x69d4,	// (0x00072e3f) cl_header_name_pane

0x6dcd,	// (0x00073238) cl_header_name_pane_t1_ParamLimits

0x6dcd,	// (0x00073238) cl_header_name_pane_t1

0x6dee,	// (0x00073259) cl_header_name_pane_t2_ParamLimits

0x6dee,	// (0x00073259) cl_header_name_pane_t2

0x6e30,	// (0x0007329b) cl_header_name_pane_t3_ParamLimits

0x6e30,	// (0x0007329b) cl_header_name_pane_t3

0x0002,

0xfb0e,	// (0x0007bf79) cl_header_name_pane_t_ParamLimits

0xfb0e,	// (0x0007bf79) cl_header_name_pane_t

0xb48f,	// (0x000778fa) navi_pane_mv_g2_ParamLimits

0xd6b9,	// (0x00079b24) field_vitu2_entry_pane_g1_ParamLimits

0xd6c5,	// (0x00079b30) field_vitu2_entry_pane_g2_ParamLimits

0xd6d1,	// (0x00079b3c) field_vitu2_entry_pane_g3_ParamLimits

0xd6d1,	// (0x00079b3c) field_vitu2_entry_pane_g3

0xf904,	// (0x0007bd6f) field_vitu2_entry_pane_g_ParamLimits

0x9f9a,	// (0x00076405) cell_vitu2_itu_pane_g1_ParamLimits

0x5c78,	// (0x000720e3) cell_vitu2_itu_pane_g2_ParamLimits

0x5c78,	// (0x000720e3) cell_vitu2_itu_pane_g2

0x0001,

0xf910,	// (0x0007bd7b) cell_vitu2_itu_pane_g_ParamLimits

0xf910,	// (0x0007bd7b) cell_vitu2_itu_pane_g

0x94f3,	// (0x0007595e) bg_vkb2_func_pane_cp05_ParamLimits

0x94f3,	// (0x0007595e) bg_vkb2_func_pane_cp05

0x94f3,	// (0x0007595e) bg_vkb2_func_pane_cp03

0x94f3,	// (0x0007595e) bg_vkb2_func_pane_cp04

0x94f3,	// (0x0007595e) bg_vkb2_func_pane_cp10_ParamLimits

0x94f3,	// (0x0007595e) bg_vkb2_func_pane_cp10

0x697a,	// (0x00072de5) bg_vkb2_func_pane_cp08

0x6960,	// (0x00072dcb) bg_vkb2_func_pane_cp06

0x696e,	// (0x00072dd9) bg_vkb2_func_pane_cp07

0xdbd4,	// (0x0007a03f) bg_vkb2_func_pane_cp11_ParamLimits

0xdbd4,	// (0x0007a03f) bg_vkb2_func_pane_cp11

0xdbe9,	// (0x0007a054) bg_vkb2_func_pane_cp12_ParamLimits

0xdbe9,	// (0x0007a054) bg_vkb2_func_pane_cp12

0x948b,	// (0x000758f6) bg_vkb2_func_pane_cp09

0xd6f1,	// (0x00079b5c) bg_vkb2_func_pane_g1

0xace9,	// (0x00077154) bg_vkb2_func_pane_g2

0xd6f9,	// (0x00079b64) bg_vkb2_func_pane_g3

0xd701,	// (0x00079b6c) bg_vkb2_func_pane_g4

0xd915,	// (0x00079d80) bg_vkb2_func_pane_g5

0xd719,	// (0x00079b84) bg_vkb2_func_pane_g6

0xd721,	// (0x00079b8c) bg_vkb2_func_pane_g7

0xd711,	// (0x00079b7c) bg_vkb2_func_pane_g8

0xa7e2,	// (0x00076c4d) bg_vkb2_func_pane_g9

0x0008,

0xfb15,	// (0x0007bf80) bg_vkb2_func_pane_g

0x6cf1,	// (0x0007315c) blid2_tripm_pane_g6_ParamLimits

0x6cf1,	// (0x0007315c) blid2_tripm_pane_g6

0xd601,	// (0x00079a6c) mp4_progress_pane_g1

0x6d6a,	// (0x000731d5) blid2_tripm_values_pane_ParamLimits

0x6d6a,	// (0x000731d5) blid2_tripm_values_pane

0x6e61,	// (0x000732cc) blid2_tripm_values_pane_t1

0x6e6f,	// (0x000732da) blid2_tripm_values_pane_t2

0x6e7d,	// (0x000732e8) blid2_tripm_values_pane_t3

0x6e8b,	// (0x000732f6) blid2_tripm_values_pane_t4

0x6e99,	// (0x00073304) blid2_tripm_values_pane_t5

0x6ea7,	// (0x00073312) blid2_tripm_values_pane_t6

0x6eb5,	// (0x00073320) blid2_tripm_values_pane_t7

0x6ec3,	// (0x0007332e) blid2_tripm_values_pane_t8

0x6ed1,	// (0x0007333c) blid2_tripm_values_pane_t9

0x0008,

0xfb28,	// (0x0007bf93) blid2_tripm_values_pane_t

0x129f,	// (0x0006d70a) call_video_pane_t1_ParamLimits

0x12bd,	// (0x0006d728) call_video_pane_t2_ParamLimits

0xf253,	// (0x0007b6be) call_video_pane_t_ParamLimits

0x2ae0,	// (0x0006ef4b) msg_header_pane_g1_ParamLimits

0xb677,	// (0x00077ae2) msg_header_pane_g2_ParamLimits

0xb677,	// (0x00077ae2) msg_header_pane_g2

0x0001,

0xf46d,	// (0x0007b8d8) msg_header_pane_g_ParamLimits

0xf46d,	// (0x0007b8d8) msg_header_pane_g

0xa3db,	// (0x00076846) main_clock2_pane_ParamLimits

0x4bb9,	// (0x00071024) grid_clock2_toolbar_pane_ParamLimits

0x4bb9,	// (0x00071024) grid_clock2_toolbar_pane

0x4bb9,	// (0x00071024) listscroll_clock2_pane_ParamLimits

0x4bb9,	// (0x00071024) listscroll_clock2_pane

0x4c9d,	// (0x00071108) main_clock2_pane_t3_ParamLimits

0x4c9d,	// (0x00071108) main_clock2_pane_t3

0x4cc1,	// (0x0007112c) main_clock2_pane_t4_ParamLimits

0x4cc1,	// (0x0007112c) main_clock2_pane_t4

0xdcd4,	// (0x0007a13f) cell_clock2_toolbar_pane

0xdcdc,	// (0x0007a147) cell_clock2_toolbar_pane_cp01

0xdcdc,	// (0x0007a147) cell_clock2_toolbar_pane_cp02

0xdce4,	// (0x0007a14f) cell_clock2_toolbar_pane_cp03

0xdcec,	// (0x0007a157) list_clock2_pane

0xb2b5,	// (0x00077720) scroll_pane_cp10

0xdcf4,	// (0x0007a15f) list_single_clock2_pane_ParamLimits

0xdcf4,	// (0x0007a15f) list_single_clock2_pane

0xa5a9,	// (0x00076a14) list_highlight_pane_cp08

0xdd01,	// (0x0007a16c) list_single_clock2_pane_t1

0xdd0f,	// (0x0007a17a) list_single_clock2_pane_t2

0x0001,

0xfb3b,	// (0x0007bfa6) list_single_clock2_pane_t

0x948b,	// (0x000758f6) bg_button_pane_cp10

0xdd1d,	// (0x0007a188) cell_clock2_toolbar_pane_g1

0x2b31,	// (0x0006ef9c) aid_main_viewer_pane_g1_ParamLimits

0x2b31,	// (0x0006ef9c) aid_main_viewer_pane_g1

0x2b3f,	// (0x0006efaa) aid_main_viewer_pane_g2_ParamLimits

0x2b3f,	// (0x0006efaa) aid_main_viewer_pane_g2

0x2b4d,	// (0x0006efb8) aid_main_viewer_pane_g3_ParamLimits

0x2b4d,	// (0x0006efb8) aid_main_viewer_pane_g3

0x2b5c,	// (0x0006efc7) aid_main_viewer_pane_g4_ParamLimits

0x2b5c,	// (0x0006efc7) aid_main_viewer_pane_g4

0x0003,

0xf47e,	// (0x0007b8e9) aid_main_viewer_pane_g_ParamLimits

0xf47e,	// (0x0007b8e9) aid_main_viewer_pane_g

0x3462,	// (0x0006f8cd) main_calc_pane_ParamLimits

0x3488,	// (0x0006f8f3) main_dialer2_pane_ParamLimits

0x9501,	// (0x0007596c) main_cam6_pane

0x9501,	// (0x0007596c) main_vid6_pane

0x4bc5,	// (0x00071030) listscroll_gen_pane_cp06_ParamLimits

0x4bc5,	// (0x00071030) listscroll_gen_pane_cp06

0x4ce4,	// (0x0007114f) main_clock2_pane_t5_ParamLimits

0x4ce4,	// (0x0007114f) main_clock2_pane_t5

0x4d42,	// (0x000711ad) aid_call2_pane_cp10_ParamLimits

0x4d54,	// (0x000711bf) aid_call_pane_cp10_ParamLimits

0xb333,	// (0x0007779e) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb333,	// (0x0007779e) popup_clock_analogue_window_cp10_g2_ParamLimits

0x4d66,	// (0x000711d1) popup_clock_analogue_window_cp10_g3_ParamLimits

0x4d66,	// (0x000711d1) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb333,	// (0x0007779e) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7b9,	// (0x0007bc24) popup_clock_analogue_window_cp10_g_ParamLimits

0x4d7c,	// (0x000711e7) popup_clock_analogue_window_cp10_t1_ParamLimits

0x53ec,	// (0x00071857) cell_dialer2_keypad_pane_g2_ParamLimits

0x53ec,	// (0x00071857) cell_dialer2_keypad_pane_g2

0x0001,

0xf8a3,	// (0x0007bd0e) cell_dialer2_keypad_pane_g_ParamLimits

0xf8a3,	// (0x0007bd0e) cell_dialer2_keypad_pane_g

0x5408,	// (0x00071873) cell_dialer2_keypad_pane_t1

0x6001,	// (0x0007246c) main_cset_text2_pane_ParamLimits

0x6001,	// (0x0007246c) main_cset_text2_pane

0xdb3c,	// (0x00079fa7) area_vitu2_query_pane_g1_ParamLimits

0x68ff,	// (0x00072d6a) area_vitu2_query_pane_g2_ParamLimits

0xfa58,	// (0x0007bec3) area_vitu2_query_pane_g_ParamLimits

0xa953,	// (0x00076dbe) area_vitu2_query_pane_t7_ParamLimits

0xa953,	// (0x00076dbe) area_vitu2_query_pane_t7

0x6960,	// (0x00072dcb) bg_button_pane_cp018_ParamLimits

0x696e,	// (0x00072dd9) bg_button_pane_cp021_ParamLimits

0x697a,	// (0x00072de5) bg_button_pane_cp022_ParamLimits

0x697a,	// (0x00072de5) bg_vkb2_func_pane_cp08_ParamLimits

0x6960,	// (0x00072dcb) bg_vkb2_func_pane_cp06_ParamLimits

0x696e,	// (0x00072dd9) bg_vkb2_func_pane_cp07_ParamLimits

0x6989,	// (0x00072df4) input_focus_pane_cp09_ParamLimits

0xa095,	// (0x00076500) cam6_autofocus_pane_ParamLimits

0xa095,	// (0x00076500) cam6_autofocus_pane

0x6edf,	// (0x0007334a) cam6_image_uncrop_pane_ParamLimits

0x6edf,	// (0x0007334a) cam6_image_uncrop_pane

0x6eee,	// (0x00073359) cam6_indi_pane_ParamLimits

0x6eee,	// (0x00073359) cam6_indi_pane

0x6f04,	// (0x0007336f) cam6_mode_pane_ParamLimits

0x6f04,	// (0x0007336f) cam6_mode_pane

0x6f16,	// (0x00073381) cam6_timer_pane_ParamLimits

0x6f16,	// (0x00073381) cam6_timer_pane

0x6f22,	// (0x0007338d) cam6_zoom_pane_ParamLimits

0x6f22,	// (0x0007338d) cam6_zoom_pane

0x6f2e,	// (0x00073399) cam6_mode_pane_g1_ParamLimits

0x6f2e,	// (0x00073399) cam6_mode_pane_g1

0x6f3e,	// (0x000733a9) cam6_mode_pane_g2_ParamLimits

0x6f3e,	// (0x000733a9) cam6_mode_pane_g2

0x6f4e,	// (0x000733b9) cam6_mode_pane_g3_ParamLimits

0x6f4e,	// (0x000733b9) cam6_mode_pane_g3

0x6f5e,	// (0x000733c9) cam6_mode_pane_g4_ParamLimits

0x6f5e,	// (0x000733c9) cam6_mode_pane_g4

0x0003,

0xfb40,	// (0x0007bfab) cam6_mode_pane_g_ParamLimits

0xfb40,	// (0x0007bfab) cam6_mode_pane_g

0xdd25,	// (0x0007a190) bg_tb_trans_pane_cp08_ParamLimits

0xdd25,	// (0x0007a190) bg_tb_trans_pane_cp08

0xdd33,	// (0x0007a19e) cam6_battery_pane_ParamLimits

0xdd33,	// (0x0007a19e) cam6_battery_pane

0xdd49,	// (0x0007a1b4) cam6_indi_pane_g1_ParamLimits

0xdd49,	// (0x0007a1b4) cam6_indi_pane_g1

0xdd5b,	// (0x0007a1c6) cam6_indi_pane_g2_ParamLimits

0xdd5b,	// (0x0007a1c6) cam6_indi_pane_g2

0xdd6d,	// (0x0007a1d8) cam6_indi_pane_g3_ParamLimits

0xdd6d,	// (0x0007a1d8) cam6_indi_pane_g3

0x0002,

0xfb49,	// (0x0007bfb4) cam6_indi_pane_g_ParamLimits

0xfb49,	// (0x0007bfb4) cam6_indi_pane_g

0xdd7f,	// (0x0007a1ea) cam6_indi_pane_t1_ParamLimits

0xdd7f,	// (0x0007a1ea) cam6_indi_pane_t1

0x6f6e,	// (0x000733d9) cam6_autofocus_pane_g1

0x6f76,	// (0x000733e1) cam6_autofocus_pane_g2

0x6f7e,	// (0x000733e9) cam6_autofocus_pane_g3

0x6f86,	// (0x000733f1) cam6_autofocus_pane_g4

0x0003,

0xfb50,	// (0x0007bfbb) cam6_autofocus_pane_g

0xdddb,	// (0x0007a246) cam6_timer_pane_g1

0xdde3,	// (0x0007a24e) cam6_timer_pane_t1

0xddf1,	// (0x0007a25c) cam6_zoom_cont_pane

0xddf9,	// (0x0007a264) cam6_zoom_pane_g1

0xde01,	// (0x0007a26c) cam6_zoom_pane_g2

0x6f8e,	// (0x000733f9) cam6_zoom_pane_g3

0x0002,

0xfb59,	// (0x0007bfc4) cam6_zoom_pane_g

0xcd08,	// (0x00079173) cam6_battery_pane_g1

0xcd08,	// (0x00079173) cam6_battery_pane_g2

0x0001,

0xf6c1,	// (0x0007bb2c) cam6_battery_pane_g

0xde09,	// (0x0007a274) cam6_zoom_cont_pane_g1

0xde12,	// (0x0007a27d) cam6_zoom_cont_pane_g2

0xde1b,	// (0x0007a286) cam6_zoom_cont_pane_g3

0x0002,

0xfb60,	// (0x0007bfcb) cam6_zoom_cont_pane_g

0x6fab,	// (0x00073416) cam6_mode_pane_cp_ParamLimits

0x6fab,	// (0x00073416) cam6_mode_pane_cp

0x6fbd,	// (0x00073428) cam6_zoom_pane_cp_ParamLimits

0x6fbd,	// (0x00073428) cam6_zoom_pane_cp

0x6fc9,	// (0x00073434) vid6_image_uncrop_cif_pane_ParamLimits

0x6fc9,	// (0x00073434) vid6_image_uncrop_cif_pane

0x6fd9,	// (0x00073444) vid6_image_uncrop_nhd_pane_ParamLimits

0x6fd9,	// (0x00073444) vid6_image_uncrop_nhd_pane

0x6fe8,	// (0x00073453) vid6_image_uncrop_vga_pane_ParamLimits

0x6fe8,	// (0x00073453) vid6_image_uncrop_vga_pane

0x6ff7,	// (0x00073462) vid6_image_uncrop_wvga_pane_ParamLimits

0x6ff7,	// (0x00073462) vid6_image_uncrop_wvga_pane

0x7006,	// (0x00073471) vid6_indi_pane_ParamLimits

0x7006,	// (0x00073471) vid6_indi_pane

0xdd25,	// (0x0007a190) bg_tb_trans_pane_cp09_ParamLimits

0xdd25,	// (0x0007a190) bg_tb_trans_pane_cp09

0xde33,	// (0x0007a29e) cam6_battery_pane_cp_ParamLimits

0xde33,	// (0x0007a29e) cam6_battery_pane_cp

0xde3f,	// (0x0007a2aa) vid6_indi_pane_g1_ParamLimits

0xde3f,	// (0x0007a2aa) vid6_indi_pane_g1

0xde51,	// (0x0007a2bc) vid6_indi_pane_g2_ParamLimits

0xde51,	// (0x0007a2bc) vid6_indi_pane_g2

0xde63,	// (0x0007a2ce) vid6_indi_pane_g3_ParamLimits

0xde63,	// (0x0007a2ce) vid6_indi_pane_g3

0xde78,	// (0x0007a2e3) vid6_indi_pane_g4_ParamLimits

0xde78,	// (0x0007a2e3) vid6_indi_pane_g4

0xde8d,	// (0x0007a2f8) vid6_indi_pane_g5_ParamLimits

0xde8d,	// (0x0007a2f8) vid6_indi_pane_g5

0x0004,

0xfb67,	// (0x0007bfd2) vid6_indi_pane_g_ParamLimits

0xfb67,	// (0x0007bfd2) vid6_indi_pane_g

0xdea7,	// (0x0007a312) vid6_indi_pane_t1_ParamLimits

0xdea7,	// (0x0007a312) vid6_indi_pane_t1

0xdebd,	// (0x0007a328) vid6_indi_pane_t2_ParamLimits

0xdebd,	// (0x0007a328) vid6_indi_pane_t2

0xdee5,	// (0x0007a350) vid6_indi_pane_t3_ParamLimits

0xdee5,	// (0x0007a350) vid6_indi_pane_t3

0xdf0d,	// (0x0007a378) vid6_indi_pane_t4_ParamLimits

0xdf0d,	// (0x0007a378) vid6_indi_pane_t4

0x0003,

0xfb72,	// (0x0007bfdd) vid6_indi_pane_t_ParamLimits

0xfb72,	// (0x0007bfdd) vid6_indi_pane_t

0xdf31,	// (0x0007a39c) wait_bar_pane_cp08

0x701e,	// (0x00073489) main_cset_text2_pane_t1_ParamLimits

0x701e,	// (0x00073489) main_cset_text2_pane_t1

0x6f96,	// (0x00073401) listscroll_gen_pane_cp06_t1_ParamLimits

0x6f96,	// (0x00073401) listscroll_gen_pane_cp06_t1

0x9501,	// (0x0007596c) main_cam6_set_pane

0x9ebb,	// (0x00076326) bg_tb_trans_pane_cp06_ParamLimits

0x9ed1,	// (0x0007633c) cam4_indicators_pane_g1_ParamLimits

0x9ee2,	// (0x0007634d) cam4_indicators_pane_g2_ParamLimits

0xf8e0,	// (0x0007bd4b) cam4_indicators_pane_g_ParamLimits

0x9f00,	// (0x0007636b) cam4_indicators_pane_t1_ParamLimits

0x94f3,	// (0x0007595e) bg_tb_trans_pane_cp07_ParamLimits

0x9f2c,	// (0x00076397) vid4_indicators_pane_g1_ParamLimits

0x9f40,	// (0x000763ab) vid4_indicators_pane_g2_ParamLimits

0x9f54,	// (0x000763bf) vid4_indicators_pane_g3_ParamLimits

0x9f65,	// (0x000763d0) vid4_indicators_pane_g4_ParamLimits

0xf8f2,	// (0x0007bd5d) vid4_indicators_pane_g_ParamLimits

0x9f83,	// (0x000763ee) vid4_indicators_pane_t1_ParamLimits

0xa033,	// (0x0007649e) vid4_progress_pane_g1_ParamLimits

0xa043,	// (0x000764ae) vid4_progress_pane_g2_ParamLimits

0x6ac4,	// (0x00072f2f) vid4_progress_pane_g3_ParamLimits

0xa053,	// (0x000764be) vid4_progress_pane_g4_ParamLimits

0xfaa3,	// (0x0007bf0e) vid4_progress_pane_g_ParamLimits

0x6ad6,	// (0x00072f41) vid4_progress_pane_t1_ParamLimits

0xa06b,	// (0x000764d6) vid4_progress_pane_t2_ParamLimits

0xa080,	// (0x000764eb) vid4_progress_pane_t3_ParamLimits

0xfaae,	// (0x0007bf19) vid4_progress_pane_t_ParamLimits

0x6aee,	// (0x00072f59) wait_bar_pane_cp07_ParamLimits

0x703b,	// (0x000734a6) main_cam6_set_pane_g2_ParamLimits

0x703b,	// (0x000734a6) main_cam6_set_pane_g2

0x705f,	// (0x000734ca) main_cset6_listscroll_pane_ParamLimits

0x705f,	// (0x000734ca) main_cset6_listscroll_pane

0x707f,	// (0x000734ea) main_cset6_slider_pane_ParamLimits

0x707f,	// (0x000734ea) main_cset6_slider_pane

0x7095,	// (0x00073500) main_cset6_text2_pane_ParamLimits

0x7095,	// (0x00073500) main_cset6_text2_pane

0xdf40,	// (0x0007a3ab) main_cset6_text_pane

0xdf48,	// (0x0007a3b3) main_cset_list_pane_copy1_ParamLimits

0xdf48,	// (0x0007a3b3) main_cset_list_pane_copy1

0xdf58,	// (0x0007a3c3) scroll_pane_cp028_copy1

0x70a3,	// (0x0007350e) cset_list_set_pane_copy1

0x70b4,	// (0x0007351f) aid_position_infowindow_above_copy1

0x70bc,	// (0x00073527) aid_position_infowindow_below_copy1

0x70c4,	// (0x0007352f) cset_list_set_pane_g1_copy1

0x70cc,	// (0x00073537) cset_list_set_pane_g3_copy1_ParamLimits

0x70cc,	// (0x00073537) cset_list_set_pane_g3_copy1

0x70db,	// (0x00073546) cset_list_set_pane_t1_copy1_ParamLimits

0x70db,	// (0x00073546) cset_list_set_pane_t1_copy1

0xa838,	// (0x00076ca3) list_highlight_pane_cp021_copy1_ParamLimits

0xa838,	// (0x00076ca3) list_highlight_pane_cp021_copy1

0xdf61,	// (0x0007a3cc) cset6_slider_pane_ParamLimits

0xdf61,	// (0x0007a3cc) cset6_slider_pane

0xdf8d,	// (0x0007a3f8) main_cset6_slider_pane_g1_ParamLimits

0xdf8d,	// (0x0007a3f8) main_cset6_slider_pane_g1

0x70f0,	// (0x0007355b) main_cset6_slider_pane_g2_ParamLimits

0x70f0,	// (0x0007355b) main_cset6_slider_pane_g2

0xdfb5,	// (0x0007a420) main_cset6_slider_pane_g3_ParamLimits

0xdfb5,	// (0x0007a420) main_cset6_slider_pane_g3

0x7118,	// (0x00073583) main_cset6_slider_pane_g4_ParamLimits

0x7118,	// (0x00073583) main_cset6_slider_pane_g4

0x7124,	// (0x0007358f) main_cset6_slider_pane_g5_ParamLimits

0x7124,	// (0x0007358f) main_cset6_slider_pane_g5

0xd820,	// (0x00079c8b) main_cset6_slider_pane_g7_ParamLimits

0xd820,	// (0x00079c8b) main_cset6_slider_pane_g7

0xd82c,	// (0x00079c97) main_cset6_slider_pane_g8_ParamLimits

0xd82c,	// (0x00079c97) main_cset6_slider_pane_g8

0x60ae,	// (0x00072519) main_cset6_slider_pane_g9_ParamLimits

0x60ae,	// (0x00072519) main_cset6_slider_pane_g9

0x60ba,	// (0x00072525) main_cset6_slider_pane_g10_ParamLimits

0x60ba,	// (0x00072525) main_cset6_slider_pane_g10

0x60c6,	// (0x00072531) main_cset6_slider_pane_g11_ParamLimits

0x60c6,	// (0x00072531) main_cset6_slider_pane_g11

0x60d2,	// (0x0007253d) main_cset6_slider_pane_g12_ParamLimits

0x60d2,	// (0x0007253d) main_cset6_slider_pane_g12

0x60de,	// (0x00072549) main_cset6_slider_pane_g13_ParamLimits

0x60de,	// (0x00072549) main_cset6_slider_pane_g13

0x60ea,	// (0x00072555) main_cset6_slider_pane_g14_ParamLimits

0x60ea,	// (0x00072555) main_cset6_slider_pane_g14

0x7130,	// (0x0007359b) main_cset6_slider_pane_g15_ParamLimits

0x7130,	// (0x0007359b) main_cset6_slider_pane_g15

0x610e,	// (0x00072579) main_cset6_slider_pane_g16_ParamLimits

0x610e,	// (0x00072579) main_cset6_slider_pane_g16

0x611a,	// (0x00072585) main_cset6_slider_pane_g17_ParamLimits

0x611a,	// (0x00072585) main_cset6_slider_pane_g17

0x0011,

0xfb7b,	// (0x0007bfe6) main_cset6_slider_pane_g_ParamLimits

0xfb7b,	// (0x0007bfe6) main_cset6_slider_pane_g

0xdfc1,	// (0x0007a42c) main_cset6_slider_pane_t1_ParamLimits

0xdfc1,	// (0x0007a42c) main_cset6_slider_pane_t1

0x7160,	// (0x000735cb) main_cset6_slider_pane_t2_ParamLimits

0x7160,	// (0x000735cb) main_cset6_slider_pane_t2

0x718b,	// (0x000735f6) main_cset6_slider_pane_t3_ParamLimits

0x718b,	// (0x000735f6) main_cset6_slider_pane_t3

0x71b6,	// (0x00073621) main_cset6_slider_pane_t4_ParamLimits

0x71b6,	// (0x00073621) main_cset6_slider_pane_t4

0x71e1,	// (0x0007364c) main_cset6_slider_pane_t5_ParamLimits

0x71e1,	// (0x0007364c) main_cset6_slider_pane_t5

0xe002,	// (0x0007a46d) main_cset6_slider_pane_t7_ParamLimits

0xe002,	// (0x0007a46d) main_cset6_slider_pane_t7

0x720c,	// (0x00073677) main_cset6_slider_pane_t8_ParamLimits

0x720c,	// (0x00073677) main_cset6_slider_pane_t8

0x7230,	// (0x0007369b) main_cset6_slider_pane_t9_ParamLimits

0x7230,	// (0x0007369b) main_cset6_slider_pane_t9

0x7254,	// (0x000736bf) main_cset6_slider_pane_t10_ParamLimits

0x7254,	// (0x000736bf) main_cset6_slider_pane_t10

0x7278,	// (0x000736e3) main_cset6_slider_pane_t11_ParamLimits

0x7278,	// (0x000736e3) main_cset6_slider_pane_t11

0xe038,	// (0x0007a4a3) main_cset6_slider_pane_t14_ParamLimits

0xe038,	// (0x0007a4a3) main_cset6_slider_pane_t14

0xe071,	// (0x0007a4dc) main_cset6_slider_pane_t15_ParamLimits

0xe071,	// (0x0007a4dc) main_cset6_slider_pane_t15

0x000b,

0xfba0,	// (0x0007c00b) main_cset6_slider_pane_t_ParamLimits

0xfba0,	// (0x0007c00b) main_cset6_slider_pane_t

0xdda5,	// (0x0007a210) cset_slider_pane_g1_copy1

0xddae,	// (0x0007a219) cset_slider_pane_g2_copy1

0xddb7,	// (0x0007a222) cset_slider_pane_g3_copy1

0x948b,	// (0x000758f6) bg_popup_sub_pane_cp011_copy1

0xe0aa,	// (0x0007a515) main_cset_text_pane_g1_copy1

0xd964,	// (0x00079dcf) main_cset_text_pane_t1_copy1

0xd972,	// (0x00079ddd) main_cset_text_pane_t2_copy1

0xd980,	// (0x00079deb) main_cset_text_pane_t3_copy1

0xd98e,	// (0x00079df9) main_cset_text_pane_t4_copy1

0xd99c,	// (0x00079e07) main_cset_text_pane_t5_copy1

0xe0b2,	// (0x0007a51d) main_cset_text_pane_t6_copy1

0xe0c0,	// (0x0007a52b) main_cset_text_pane_t7_copy1

0x701e,	// (0x00073489) main_cset_text2_pane_t1_copy1

0x94f3,	// (0x0007595e) main_ncimui_pane

0x36d2,	// (0x0006fb3d) popup_query_ncimui_window_ParamLimits

0x36d2,	// (0x0006fb3d) popup_query_ncimui_window

0xa882,	// (0x00076ced) field_cale_ev2_pane_g4_ParamLimits

0xa882,	// (0x00076ced) field_cale_ev2_pane_g4

0x52cc,	// (0x00071737) cell_video_dialer_keypad_pane_g2_ParamLimits

0x52cc,	// (0x00071737) cell_video_dialer_keypad_pane_g2

0x0001,

0xf87a,	// (0x0007bce5) cell_video_dialer_keypad_pane_g_ParamLimits

0xf87a,	// (0x0007bce5) cell_video_dialer_keypad_pane_g

0x52e4,	// (0x0007174f) cell_video_dialer_keypad_pane_t1

0x948b,	// (0x000758f6) bg_popup_window_pane_cp012

0xb182,	// (0x000775ed) heading_pane_cp06

0xe0ec,	// (0x0007a557) ncim_query_content_pane

0x948b,	// (0x000758f6) bg_popup_heading_pane_cp01

0xe0f4,	// (0x0007a55f) ncim_heading_pane_t1

0xe102,	// (0x0007a56d) ncim_indicator_popup_pane

0xe114,	// (0x0007a57f) ncim_query_button_pane

0xe128,	// (0x0007a593) ncim_query_content_pane_t1

0xe13a,	// (0x0007a5a5) ncim_query_content_pane_t2

0x0005,

0xfbe4,	// (0x0007c04f) ncim_query_content_pane_t

0xe174,	// (0x0007a5df) ncim_query_list_pane

0xe186,	// (0x0007a5f1) ncim_query_popup_pane

0xe102,	// (0x0007a56d) ncim_indicator_popup_pane_ParamLimits

0x749d,	// (0x00073908) ncim_query_content_pane_g1_ParamLimits

0x749d,	// (0x00073908) ncim_query_content_pane_g1

0xe128,	// (0x0007a593) ncim_query_content_pane_t1_ParamLimits

0xe13a,	// (0x0007a5a5) ncim_query_content_pane_t2_ParamLimits

0x74a9,	// (0x00073914) ncim_query_content_pane_t3_ParamLimits

0x74a9,	// (0x00073914) ncim_query_content_pane_t3

0x74d1,	// (0x0007393c) ncim_query_content_pane_t4_ParamLimits

0x74d1,	// (0x0007393c) ncim_query_content_pane_t4

0x74f9,	// (0x00073964) ncim_query_content_pane_t5_ParamLimits

0x74f9,	// (0x00073964) ncim_query_content_pane_t5

0xe14c,	// (0x0007a5b7) ncim_query_content_pane_t6_ParamLimits

0xe14c,	// (0x0007a5b7) ncim_query_content_pane_t6

0xfbe4,	// (0x0007c04f) ncim_query_content_pane_t_ParamLimits

0xe174,	// (0x0007a5df) ncim_query_list_pane_ParamLimits

0xe186,	// (0x0007a5f1) ncim_query_popup_pane_ParamLimits

0xe19a,	// (0x0007a605) wait_bar_pane_cp04

0x948b,	// (0x000758f6) input_focus_pane_cp011

0xe1a2,	// (0x0007a60d) ncim_query_popup_pane_t1

0xe1b0,	// (0x0007a61b) ncim_list_query_list_pane_ParamLimits

0xe1b0,	// (0x0007a61b) ncim_list_query_list_pane

0x948b,	// (0x000758f6) bg_button_pane_cp027

0xe1bd,	// (0x0007a628) ncim_query_button_pane_g1

0x948b,	// (0x000758f6) list_highlight_pane_cp012

0xe1c7,	// (0x0007a632) ncim_list_query_list_pane_g1

0xe1cf,	// (0x0007a63a) ncim_list_query_list_pane_t1

0x9ef1,	// (0x0007635c) cam4_indicators_pane_g3_ParamLimits

0x9ef1,	// (0x0007635c) cam4_indicators_pane_g3

0x9f71,	// (0x000763dc) vid4_indicators_pane_g5_ParamLimits

0x9f71,	// (0x000763dc) vid4_indicators_pane_g5

0xa05f,	// (0x000764ca) vid4_progress_pane_g5_ParamLimits

0xa05f,	// (0x000764ca) vid4_progress_pane_g5

0x7388,	// (0x000737f3) main_ncimui_pane_g1

0x73f1,	// (0x0007385c) ncimui_group_query_pane_ParamLimits

0x73f1,	// (0x0007385c) ncimui_group_query_pane

0x7439,	// (0x000738a4) ncimui_list_pane_ParamLimits

0x7439,	// (0x000738a4) ncimui_list_pane

0x7460,	// (0x000738cb) ncimui_text_pane_ParamLimits

0x7460,	// (0x000738cb) ncimui_text_pane

0x7521,	// (0x0007398c) ncimui_text_pane_t1_ParamLimits

0x7521,	// (0x0007398c) ncimui_text_pane_t1

0xe1dd,	// (0x0007a648) ncimui_list_single_graphic_pane_ParamLimits

0xe1dd,	// (0x0007a648) ncimui_list_single_graphic_pane

0x753f,	// (0x000739aa) ncimui_query_pane_ParamLimits

0x753f,	// (0x000739aa) ncimui_query_pane

0x948b,	// (0x000758f6) list_highlight_pane_cp013

0xe1ed,	// (0x0007a658) ncim_list_query_list_pane_t1_copy1

0xe1c7,	// (0x0007a632) ncim_list_single_graphic_pane_g1

0x7552,	// (0x000739bd) ncim_query_button_pane_cp01

0x755e,	// (0x000739c9) ncim_query_entry_pane_ParamLimits

0x755e,	// (0x000739c9) ncim_query_entry_pane

0x7571,	// (0x000739dc) ncimui_query_pane_g1

0x757d,	// (0x000739e8) ncimui_query_pane_t1_ParamLimits

0x757d,	// (0x000739e8) ncimui_query_pane_t1

0xa838,	// (0x00076ca3) input_focus_pane_cp012

0xe1fb,	// (0x0007a666) ncim_query_entry_pane_t1

0xa3db,	// (0x00076846) main_im_pane_ParamLimits

0x94f3,	// (0x0007595e) main_mobtv_pane_ParamLimits

0x94f3,	// (0x0007595e) main_mobtv_pane

0x7148,	// (0x000735b3) main_cset6_slider_pane_g18_ParamLimits

0x7148,	// (0x000735b3) main_cset6_slider_pane_g18

0x7154,	// (0x000735bf) main_cset6_slider_pane_g19_ParamLimits

0x7154,	// (0x000735bf) main_cset6_slider_pane_g19

0x7596,	// (0x00073a01) bg_main_mobtv_pane_ParamLimits

0x7596,	// (0x00073a01) bg_main_mobtv_pane

0x75a4,	// (0x00073a0f) main_mobtv_info_pane

0x75ad,	// (0x00073a18) main_mobtv_loading_pane_ParamLimits

0x75ad,	// (0x00073a18) main_mobtv_loading_pane

0xe20d,	// (0x0007a678) main_mobtv_pg_channel_list_pane

0xe217,	// (0x0007a682) main_mobtv_pg_hdr_pane

0x75ba,	// (0x00073a25) main_mobtv_programe_curr_pane_ParamLimits

0x75ba,	// (0x00073a25) main_mobtv_programe_curr_pane

0x75c7,	// (0x00073a32) main_mobtv_programe_next_pane_ParamLimits

0x75c7,	// (0x00073a32) main_mobtv_programe_next_pane

0xe220,	// (0x0007a68b) popup_mobtv_noti_window

0xcd08,	// (0x00079173) main_tv_pg_hdr_pane_g1

0xe228,	// (0x0007a693) main_tv_pg_hdr_pane_g2

0xe230,	// (0x0007a69b) main_tv_pg_hdr_pane_g3

0xe238,	// (0x0007a6a3) main_tv_pg_hdr_pane_g4

0xe240,	// (0x0007a6ab) main_tv_pg_hdr_pane_g5

0xe24a,	// (0x0007a6b5) main_tv_pg_hdr_pane_g6

0xe254,	// (0x0007a6bf) main_tv_pg_hdr_pane_g7

0xe25e,	// (0x0007a6c9) main_tv_pg_hdr_pane_g8

0xe268,	// (0x0007a6d3) main_tv_pg_hdr_pane_g9

0xe272,	// (0x0007a6dd) main_tv_pg_hdr_pane_g10

0xe27c,	// (0x0007a6e7) main_tv_pg_hdr_pane_g11

0x000a,

0xfbf1,	// (0x0007c05c) main_tv_pg_hdr_pane_g

0xe286,	// (0x0007a6f1) main_tv_pg_hdr_pane_t1

0xe294,	// (0x0007a6ff) main_tv_pg_hdr_pane_t2

0xe2a2,	// (0x0007a70d) main_tv_pg_hdr_pane_t3

0xe2b2,	// (0x0007a71d) main_tv_pg_hdr_pane_t4

0xe2c2,	// (0x0007a72d) main_tv_pg_hdr_pane_t5

0x0004,

0xfc08,	// (0x0007c073) main_tv_pg_hdr_pane_t

0xe2d2,	// (0x0007a73d) single_mobtv_pg_channel_pane_ParamLimits

0xe2d2,	// (0x0007a73d) single_mobtv_pg_channel_pane

0xe2e4,	// (0x0007a74f) single_mobtv_pg_channel_table_pane

0xe2ed,	// (0x0007a758) single_mobtv_pg_channel_thumb_pane

0xe2f6,	// (0x0007a761) single_tv_pg_channel_pane_g1

0xe2ff,	// (0x0007a76a) single_tv_pg_channel_pane_g2

0x0001,

0xfc13,	// (0x0007c07e) single_tv_pg_channel_pane_g

0xcf6b,	// (0x000793d6) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xcf6b,	// (0x000793d6) bg_single_mobtv_pg_channel_thumb_pane

0xe308,	// (0x0007a773) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe308,	// (0x0007a773) single_mobtv_pg_channel_thumb_pane_g1

0xe316,	// (0x0007a781) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe316,	// (0x0007a781) single_mobtv_pg_channel_thumb_pane_g2

0xe322,	// (0x0007a78d) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe322,	// (0x0007a78d) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc18,	// (0x0007c083) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc18,	// (0x0007c083) single_mobtv_pg_channel_thumb_pane_g

0xe32e,	// (0x0007a799) single_mobtv_pg_channel_thumb_pane_t1

0xe33c,	// (0x0007a7a7) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc1f,	// (0x0007c08a) single_mobtv_pg_channel_thumb_pane_t

0xcd08,	// (0x00079173) bg_single_mobtv_pg_channel_table_pane_g1

0xcd08,	// (0x00079173) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6c1,	// (0x0007bb2c) bg_single_mobtv_pg_channel_table_pane_g

0xe34a,	// (0x0007a7b5) single_mobtv_pg_channel_table_pane_t1

0xe358,	// (0x0007a7c3) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc24,	// (0x0007c08f) single_mobtv_pg_channel_table_pane_t

0x75dc,	// (0x00073a47) main_mobtv_info_pane_g1_ParamLimits

0x75dc,	// (0x00073a47) main_mobtv_info_pane_g1

0x75fa,	// (0x00073a65) main_mobtv_info_pane_t1_ParamLimits

0x75fa,	// (0x00073a65) main_mobtv_info_pane_t1

0x7672,	// (0x00073add) main_mobtv_info_pane_t2_ParamLimits

0x7672,	// (0x00073add) main_mobtv_info_pane_t2

0x0002,

0xfc2e,	// (0x0007c099) main_mobtv_info_pane_t_ParamLimits

0xfc2e,	// (0x0007c099) main_mobtv_info_pane_t

0x7701,	// (0x00073b6c) wait_bar_pane_cp05

0x7713,	// (0x00073b7e) main_mobtv_loading_pane_g1_ParamLimits

0x7713,	// (0x00073b7e) main_mobtv_loading_pane_g1

0x7726,	// (0x00073b91) main_mobtv_loading_pane_g2_ParamLimits

0x7726,	// (0x00073b91) main_mobtv_loading_pane_g2

0x7732,	// (0x00073b9d) main_mobtv_loading_pane_g3_ParamLimits

0x7732,	// (0x00073b9d) main_mobtv_loading_pane_g3

0x0002,

0xfc35,	// (0x0007c0a0) main_mobtv_loading_pane_g_ParamLimits

0xfc35,	// (0x0007c0a0) main_mobtv_loading_pane_g

0xe366,	// (0x0007a7d1) main_mobtv_loading_pane_t1_ParamLimits

0xe366,	// (0x0007a7d1) main_mobtv_loading_pane_t1

0xe37e,	// (0x0007a7e9) main_mobtv_loading_pane_t2_ParamLimits

0xe37e,	// (0x0007a7e9) main_mobtv_loading_pane_t2

0x0001,

0xfc3c,	// (0x0007c0a7) main_mobtv_loading_pane_t_ParamLimits

0xfc3c,	// (0x0007c0a7) main_mobtv_loading_pane_t

0x7745,	// (0x00073bb0) wait_bar_pane_cp06_ParamLimits

0x7745,	// (0x00073bb0) wait_bar_pane_cp06

0xe3a2,	// (0x0007a80d) main_mobtv_programe_curr_pane_t1

0xe3b0,	// (0x0007a81b) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc41,	// (0x0007c0ac) main_mobtv_programe_curr_pane_t

0xe3be,	// (0x0007a829) main_mobtv_programe_next_pane_t1

0xe3cc,	// (0x0007a837) main_mobtv_programe_next_pane_t2

0xe3da,	// (0x0007a845) main_mobtv_programe_next_pane_t3

0x0002,

0xfc46,	// (0x0007c0b1) main_mobtv_programe_next_pane_t

0x948b,	// (0x000758f6) bg_popup_mobtv_noti_window_pane

0xe3e8,	// (0x0007a853) popup_mobtv_noti_window_g1

0xe3f0,	// (0x0007a85b) popup_mobtv_noti_window_t1

0xe3fe,	// (0x0007a869) popup_mobtv_noti_window_t2

0x0001,

0xfc4d,	// (0x0007c0b8) popup_mobtv_noti_window_t

0xcd08,	// (0x00079173) bg_popup_mobtv_noti_window_pane_g1

0x9501,	// (0x0007596c) sc_clock_pane

0x9501,	// (0x0007596c) main_fs_bigclock_pane

0x6d54,	// (0x000731bf) blid2_tripm_pane_t4_ParamLimits

0x6d54,	// (0x000731bf) blid2_tripm_pane_t4

0x7754,	// (0x00073bbf) sc_clock_pane_g1_ParamLimits

0x7754,	// (0x00073bbf) sc_clock_pane_g1

0x7766,	// (0x00073bd1) sc_clock_pane_t1_ParamLimits

0x7766,	// (0x00073bd1) sc_clock_pane_t1

0x7788,	// (0x00073bf3) sc_clock_pane_t2_ParamLimits

0x7788,	// (0x00073bf3) sc_clock_pane_t2

0x77a0,	// (0x00073c0b) sc_clock_pane_t3_ParamLimits

0x77a0,	// (0x00073c0b) sc_clock_pane_t3

0x0004,

0xfc52,	// (0x0007c0bd) sc_clock_pane_t_ParamLimits

0xfc52,	// (0x0007c0bd) sc_clock_pane_t

0x8888,	// (0x00074cf3) main_fs_bigclock_indicator_pane_ParamLimits

0x8888,	// (0x00074cf3) main_fs_bigclock_indicator_pane

0x7846,	// (0x00073cb1) main_fs_bigclock_pane_g1_ParamLimits

0x7846,	// (0x00073cb1) main_fs_bigclock_pane_g1

0x8894,	// (0x00074cff) main_fs_bigclock_pane_t1_ParamLimits

0x8894,	// (0x00074cff) main_fs_bigclock_pane_t1

0x88a6,	// (0x00074d11) main_fs_bigclock_pane_t2_ParamLimits

0x88a6,	// (0x00074d11) main_fs_bigclock_pane_t2

0x88ba,	// (0x00074d25) main_fs_bigclock_pane_t3_ParamLimits

0x88ba,	// (0x00074d25) main_fs_bigclock_pane_t3

0x0002,

0xfe60,	// (0x0007c2cb) main_fs_bigclock_pane_t_ParamLimits

0xfe60,	// (0x0007c2cb) main_fs_bigclock_pane_t

0xec46,	// (0x0007b0b1) main_fs_bigclock_indicator_pane_g1

0xe11c,	// (0x0007a587) ncim_query_content_pane_g2_ParamLimits

0xe11c,	// (0x0007a587) ncim_query_content_pane_g2

0x0001,

0xfbdf,	// (0x0007c04a) ncim_query_content_pane_g_ParamLimits

0xfbdf,	// (0x0007c04a) ncim_query_content_pane_g

0x77b9,	// (0x00073c24) sc_clock_pane_t4_ParamLimits

0x77b9,	// (0x00073c24) sc_clock_pane_t4

0x94f3,	// (0x0007595e) main_radioblah_pane

0x9e55,	// (0x000762c0) cell_call4_button_pane_t1_copy1_ParamLimits

0x9e55,	// (0x000762c0) cell_call4_button_pane_t1_copy1

0x73a0,	// (0x0007380b) main_ncimui_pane_t1_ParamLimits

0x73a0,	// (0x0007380b) main_ncimui_pane_t1

0x73ba,	// (0x00073825) main_ncimui_pane_t2_ParamLimits

0x73ba,	// (0x00073825) main_ncimui_pane_t2

0x0002,

0xfbd8,	// (0x0007c043) main_ncimui_pane_t_ParamLimits

0xfbd8,	// (0x0007c043) main_ncimui_pane_t

0xe543,	// (0x0007a9ae) main_radioblah_anim_pane_ParamLimits

0xe543,	// (0x0007a9ae) main_radioblah_anim_pane

0xe554,	// (0x0007a9bf) main_radioblah_info_pane_ParamLimits

0xe554,	// (0x0007a9bf) main_radioblah_info_pane

0xe568,	// (0x0007a9d3) main_radioblah_pane_t1_ParamLimits

0xe568,	// (0x0007a9d3) main_radioblah_pane_t1

0xe584,	// (0x0007a9ef) main_radioblah_pane_t2_ParamLimits

0xe584,	// (0x0007a9ef) main_radioblah_pane_t2

0x0003,

0xfc73,	// (0x0007c0de) main_radioblah_pane_t_ParamLimits

0xfc73,	// (0x0007c0de) main_radioblah_pane_t

0x78a5,	// (0x00073d10) main_radioblah_rocker_ctrl_pane_ParamLimits

0x78a5,	// (0x00073d10) main_radioblah_rocker_ctrl_pane

0xe5cc,	// (0x0007aa37) main_radioblah_info_pane_t1_ParamLimits

0xe5cc,	// (0x0007aa37) main_radioblah_info_pane_t1

0x78fd,	// (0x00073d68) main_radioblah_info_pane_t2_ParamLimits

0x78fd,	// (0x00073d68) main_radioblah_info_pane_t2

0x0003,

0xfc7c,	// (0x0007c0e7) main_radioblah_info_pane_t_ParamLimits

0xfc7c,	// (0x0007c0e7) main_radioblah_info_pane_t

0xcd08,	// (0x00079173) main_radioblah_rocker_ctrl_pane_g1

0x79ad,	// (0x00073e18) main_radioblah_rocker_ctrl_pane_g2

0x79b5,	// (0x00073e20) main_radioblah_rocker_ctrl_pane_g3

0x79bd,	// (0x00073e28) main_radioblah_rocker_ctrl_pane_g4

0x79c5,	// (0x00073e30) main_radioblah_rocker_ctrl_pane_g5

0x79cd,	// (0x00073e38) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc85,	// (0x0007c0f0) main_radioblah_rocker_ctrl_pane_g

0x701e,	// (0x00073489) main_cset_text2_pane_t1_copy1_ParamLimits

0x9eb3,	// (0x0007631e) cam4_image_uncrop_qvga_pane

0x9f1a,	// (0x00076385) vid4_image_uncrop_qcif_pane

0xa095,	// (0x00076500) cam6_image_uncrop_qvga_pane_ParamLimits

0xa095,	// (0x00076500) cam6_image_uncrop_qvga_pane

0xde23,	// (0x0007a28e) vid6_image_uncrop_qcif_pane_ParamLimits

0xde23,	// (0x0007a28e) vid6_image_uncrop_qcif_pane

0x948b,	// (0x000758f6) bg_popup_preview_window_pane_cp03

0xe0ce,	// (0x0007a539) list_cset_text2_pane

0xe0d6,	// (0x0007a541) main_cset6_text2_pane_g1

0xe0de,	// (0x0007a549) main_cset6_text2_pane_t1

0x79d5,	// (0x00073e40) list_cset_text2_pane_t1_ParamLimits

0x79d5,	// (0x00073e40) list_cset_text2_pane_t1

0x94f3,	// (0x0007595e) main_radioblah_pane_ParamLimits

0x76ed,	// (0x00073b58) main_mobtv_info_pane_t3_ParamLimits

0x76ed,	// (0x00073b58) main_mobtv_info_pane_t3

0x7893,	// (0x00073cfe) main_radioblah_pane_g1

0x78cd,	// (0x00073d38) main_radioblah_info_pane_g1

0x7952,	// (0x00073dbd) main_radioblah_info_pane_t3_ParamLimits

0x7952,	// (0x00073dbd) main_radioblah_info_pane_t3

0x2110,	// (0x0006e57b) highlight_cell_cale_month_pane_ParamLimits

0x2110,	// (0x0006e57b) highlight_cell_cale_month_pane

0x9501,	// (0x0007596c) main_phob_fisheye_pane

0xd067,	// (0x000794d2) scroll_pane_cp0031_ParamLimits

0xd067,	// (0x000794d2) scroll_pane_cp0031

0xdf31,	// (0x0007a39c) wait_bar_pane_cp08_ParamLimits

0x70a3,	// (0x0007350e) cset_list_set_pane_copy1_ParamLimits

0xe606,	// (0x0007aa71) highlight_cell_cale_month_pane_g1

0x79ee,	// (0x00073e59) highlight_cell_cale_month_pane_t1

0xdb90,	// (0x00079ffb) list_gen_pane_cp01

0xd80b,	// (0x00079c76) scroll_pane_01

0x79fc,	// (0x00073e67) list_single_double_fisheye_pane

0x7a05,	// (0x00073e70) list_double_fisheye_pane_g1_ParamLimits

0x7a05,	// (0x00073e70) list_double_fisheye_pane_g1

0x7a11,	// (0x00073e7c) list_double_fisheye_pane_g2_ParamLimits

0x7a11,	// (0x00073e7c) list_double_fisheye_pane_g2

0x7a25,	// (0x00073e90) list_double_fisheye_pane_g3_ParamLimits

0x7a25,	// (0x00073e90) list_double_fisheye_pane_g3

0x0004,

0xfc92,	// (0x0007c0fd) list_double_fisheye_pane_g_ParamLimits

0xfc92,	// (0x0007c0fd) list_double_fisheye_pane_g

0x7a4e,	// (0x00073eb9) list_double_fisheye_pane_t1_ParamLimits

0x7a4e,	// (0x00073eb9) list_double_fisheye_pane_t1

0x7a69,	// (0x00073ed4) list_double_fisheye_pane_t2_ParamLimits

0x7a69,	// (0x00073ed4) list_double_fisheye_pane_t2

0x0001,

0xfc9d,	// (0x0007c108) list_double_fisheye_pane_t_ParamLimits

0xfc9d,	// (0x0007c108) list_double_fisheye_pane_t

0x9501,	// (0x0007596c) main_call5_pane

0x77e4,	// (0x00073c4f) sc_swipe_pane_ParamLimits

0x77e4,	// (0x00073c4f) sc_swipe_pane

0x7a9e,	// (0x00073f09) call5_image_pane_ParamLimits

0x7a9e,	// (0x00073f09) call5_image_pane

0x7abb,	// (0x00073f26) call5_swipe_1_pane_ParamLimits

0x7abb,	// (0x00073f26) call5_swipe_1_pane

0x7ace,	// (0x00073f39) call5_swipe_2_pane_ParamLimits

0x7ace,	// (0x00073f39) call5_swipe_2_pane

0x7af9,	// (0x00073f64) popup_call5_audio_first_window_ParamLimits

0x7af9,	// (0x00073f64) popup_call5_audio_first_window

0xcf6b,	// (0x000793d6) call5_swipe_1_pane_g1_ParamLimits

0xcf6b,	// (0x000793d6) call5_swipe_1_pane_g1

0xe60e,	// (0x0007aa79) call5_swipe_1_pane_g2_ParamLimits

0xe60e,	// (0x0007aa79) call5_swipe_1_pane_g2

0x0001,

0xfca2,	// (0x0007c10d) call5_swipe_1_pane_g_ParamLimits

0xfca2,	// (0x0007c10d) call5_swipe_1_pane_g

0xe61a,	// (0x0007aa85) call5_swipe_1_pane_t1_ParamLimits

0xe61a,	// (0x0007aa85) call5_swipe_1_pane_t1

0xcf6b,	// (0x000793d6) call5_swipe_2_pane_g1_ParamLimits

0xcf6b,	// (0x000793d6) call5_swipe_2_pane_g1

0xe62f,	// (0x0007aa9a) call5_swipe_2_pane_g2_ParamLimits

0xe62f,	// (0x0007aa9a) call5_swipe_2_pane_g2

0x0001,

0xfca7,	// (0x0007c112) call5_swipe_2_pane_g_ParamLimits

0xfca7,	// (0x0007c112) call5_swipe_2_pane_g

0xe63b,	// (0x0007aaa6) call5_swipe_2_pane_t1_ParamLimits

0xe63b,	// (0x0007aaa6) call5_swipe_2_pane_t1

0xe650,	// (0x0007aabb) sc_swipe_pane_g1_ParamLimits

0xe650,	// (0x0007aabb) sc_swipe_pane_g1

0xe65d,	// (0x0007aac8) sc_swipe_pane_g2_ParamLimits

0xe65d,	// (0x0007aac8) sc_swipe_pane_g2

0x0001,

0xfcac,	// (0x0007c117) sc_swipe_pane_g_ParamLimits

0xfcac,	// (0x0007c117) sc_swipe_pane_g

0xe669,	// (0x0007aad4) sc_swipe_pane_t1_ParamLimits

0xe669,	// (0x0007aad4) sc_swipe_pane_t1

0x9501,	// (0x0007596c) main_cmail_launcher_pane

0x7b0a,	// (0x00073f75) aid_size_cell_cmail_l_ParamLimits

0x7b0a,	// (0x00073f75) aid_size_cell_cmail_l

0x7b18,	// (0x00073f83) grid_cmail_l_pane_ParamLimits

0x7b18,	// (0x00073f83) grid_cmail_l_pane

0x7b32,	// (0x00073f9d) cell_cmail_l_pane_ParamLimits

0x7b32,	// (0x00073f9d) cell_cmail_l_pane

0xe67e,	// (0x0007aae9) cell_cmail_l_pane_g1_ParamLimits

0xe67e,	// (0x0007aae9) cell_cmail_l_pane_g1

0xe68a,	// (0x0007aaf5) cell_cmail_l_pane_t1_ParamLimits

0xe68a,	// (0x0007aaf5) cell_cmail_l_pane_t1

0xe6a0,	// (0x0007ab0b) cell_cmail_l_pane_t2_ParamLimits

0xe6a0,	// (0x0007ab0b) cell_cmail_l_pane_t2

0x0001,

0xfcb1,	// (0x0007c11c) cell_cmail_l_pane_t_ParamLimits

0xfcb1,	// (0x0007c11c) cell_cmail_l_pane_t

0xa838,	// (0x00076ca3) grid_highlight_pane_cp018_ParamLimits

0xa838,	// (0x00076ca3) grid_highlight_pane_cp018

0x01aa,	// (0x0006c615) main2_pane_ParamLimits

0x01aa,	// (0x0006c615) main2_pane

0xa47d,	// (0x000768e8) popup_sp_fs_action_menu_bg_pane_g1

0xa485,	// (0x000768f0) popup_sp_fs_action_menu_bg_pane_g2

0xa48d,	// (0x000768f8) popup_sp_fs_action_menu_bg_pane_g3

0xa495,	// (0x00076900) popup_sp_fs_action_menu_bg_pane_g4

0xa49d,	// (0x00076908) popup_sp_fs_action_menu_bg_pane_g5

0xa4a5,	// (0x00076910) popup_sp_fs_action_menu_bg_pane_g6

0xa4ad,	// (0x00076918) popup_sp_fs_action_menu_bg_pane_g7

0xa4b5,	// (0x00076920) popup_sp_fs_action_menu_bg_pane_g8

0xa4bd,	// (0x00076928) popup_sp_fs_action_menu_bg_pane_g9

0xa4c5,	// (0x00076930) popup_sp_fs_action_menu_bg_pane_g10

0xa4c5,	// (0x00076930) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf16f,	// (0x0007b5da) popup_sp_fs_action_menu_bg_pane_g

0x10d6,	// (0x0006d541) list_medium_line_x2_t3_g3_g1_ParamLimits

0x10d6,	// (0x0006d541) list_medium_line_x2_t3_g3_g1

0x10e2,	// (0x0006d54d) list_medium_line_x2_t3_g3_g2_ParamLimits

0x10e2,	// (0x0006d54d) list_medium_line_x2_t3_g3_g2

0x10ee,	// (0x0006d559) list_medium_line_x2_t3_g3_g3_ParamLimits

0x10ee,	// (0x0006d559) list_medium_line_x2_t3_g3_g3

0x0002,

0xf21d,	// (0x0007b688) list_medium_line_x2_t3_g3_g_ParamLimits

0xf21d,	// (0x0007b688) list_medium_line_x2_t3_g3_g

0x10fa,	// (0x0006d565) list_medium_line_x2_t3_g3_t1_ParamLimits

0x10fa,	// (0x0006d565) list_medium_line_x2_t3_g3_t1

0x110f,	// (0x0006d57a) list_medium_line_x2_t3_g3_t2_ParamLimits

0x110f,	// (0x0006d57a) list_medium_line_x2_t3_g3_t2

0x1123,	// (0x0006d58e) list_medium_line_x2_t3_g3_t3_ParamLimits

0x1123,	// (0x0006d58e) list_medium_line_x2_t3_g3_t3

0x0002,

0xf224,	// (0x0007b68f) list_medium_line_x2_t3_g3_t_ParamLimits

0xf224,	// (0x0007b68f) list_medium_line_x2_t3_g3_t

0x10d6,	// (0x0006d541) list_medium_line_x2_t3_g2_g1_ParamLimits

0x10d6,	// (0x0006d541) list_medium_line_x2_t3_g2_g1

0x10ee,	// (0x0006d559) list_medium_line_x2_t3_g2_g2_ParamLimits

0x10ee,	// (0x0006d559) list_medium_line_x2_t3_g2_g2

0x0001,

0xf22b,	// (0x0007b696) list_medium_line_x2_t3_g2_g_ParamLimits

0xf22b,	// (0x0007b696) list_medium_line_x2_t3_g2_g

0x1138,	// (0x0006d5a3) list_medium_line_x2_t3_g2_t1_ParamLimits

0x1138,	// (0x0006d5a3) list_medium_line_x2_t3_g2_t1

0x114e,	// (0x0006d5b9) list_medium_line_x2_t3_g2_t2_ParamLimits

0x114e,	// (0x0006d5b9) list_medium_line_x2_t3_g2_t2

0x1160,	// (0x0006d5cb) list_medium_line_x2_t3_g2_t3_ParamLimits

0x1160,	// (0x0006d5cb) list_medium_line_x2_t3_g2_t3

0x0002,

0xf230,	// (0x0007b69b) list_medium_line_x2_t3_g2_t_ParamLimits

0xf230,	// (0x0007b69b) list_medium_line_x2_t3_g2_t

0x10d6,	// (0x0006d541) list_medium_line_x2_t4_g4_g1_ParamLimits

0x10d6,	// (0x0006d541) list_medium_line_x2_t4_g4_g1

0x117d,	// (0x0006d5e8) list_medium_line_x2_t4_g4_g2_ParamLimits

0x117d,	// (0x0006d5e8) list_medium_line_x2_t4_g4_g2

0x10e2,	// (0x0006d54d) list_medium_line_x2_t4_g4_g3_ParamLimits

0x10e2,	// (0x0006d54d) list_medium_line_x2_t4_g4_g3

0x1189,	// (0x0006d5f4) list_medium_line_x2_t4_g4_g4_ParamLimits

0x1189,	// (0x0006d5f4) list_medium_line_x2_t4_g4_g4

0x0003,

0xf237,	// (0x0007b6a2) list_medium_line_x2_t4_g4_g_ParamLimits

0xf237,	// (0x0007b6a2) list_medium_line_x2_t4_g4_g

0x1195,	// (0x0006d600) list_medium_line_x2_t4_g4_t1_ParamLimits

0x1195,	// (0x0006d600) list_medium_line_x2_t4_g4_t1

0x11af,	// (0x0006d61a) list_medium_line_x2_t4_g4_t2_ParamLimits

0x11af,	// (0x0006d61a) list_medium_line_x2_t4_g4_t2

0x11c5,	// (0x0006d630) list_medium_line_x2_t4_g4_t3_ParamLimits

0x11c5,	// (0x0006d630) list_medium_line_x2_t4_g4_t3

0x11da,	// (0x0006d645) list_medium_line_x2_t4_g4_t4_ParamLimits

0x11da,	// (0x0006d645) list_medium_line_x2_t4_g4_t4

0x0003,

0xf240,	// (0x0007b6ab) list_medium_line_x2_t4_g4_t_ParamLimits

0xf240,	// (0x0007b6ab) list_medium_line_x2_t4_g4_t

0x10d6,	// (0x0006d541) list_medium_line_x2_t2_g4_g1_ParamLimits

0x10d6,	// (0x0006d541) list_medium_line_x2_t2_g4_g1

0x117d,	// (0x0006d5e8) list_medium_line_x2_t2_g4_g2_ParamLimits

0x117d,	// (0x0006d5e8) list_medium_line_x2_t2_g4_g2

0x10e2,	// (0x0006d54d) list_medium_line_x2_t2_g4_g3_ParamLimits

0x10e2,	// (0x0006d54d) list_medium_line_x2_t2_g4_g3

0x10ee,	// (0x0006d559) list_medium_line_x2_t2_g4_g4_ParamLimits

0x10ee,	// (0x0006d559) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2a7,	// (0x0007b712) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2a7,	// (0x0007b712) list_medium_line_x2_t2_g4_g

0x2136,	// (0x0006e5a1) list_medium_line_x2_t2_g4_t1_ParamLimits

0x2136,	// (0x0006e5a1) list_medium_line_x2_t2_g4_t1

0x1123,	// (0x0006d58e) list_medium_line_x2_t2_g4_t2_ParamLimits

0x1123,	// (0x0006d58e) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2b0,	// (0x0007b71b) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2b0,	// (0x0007b71b) list_medium_line_x2_t2_g4_t

0x10d6,	// (0x0006d541) list_medium_line_x2_t2_g3_g1_ParamLimits

0x10d6,	// (0x0006d541) list_medium_line_x2_t2_g3_g1

0x10e2,	// (0x0006d54d) list_medium_line_x2_t2_g3_g2_ParamLimits

0x10e2,	// (0x0006d54d) list_medium_line_x2_t2_g3_g2

0x10ee,	// (0x0006d559) list_medium_line_x2_t2_g3_g3_ParamLimits

0x10ee,	// (0x0006d559) list_medium_line_x2_t2_g3_g3

0x0002,

0xf21d,	// (0x0007b688) list_medium_line_x2_t2_g3_g_ParamLimits

0xf21d,	// (0x0007b688) list_medium_line_x2_t2_g3_g

0x214b,	// (0x0006e5b6) list_medium_line_x2_t2_g3_t1_ParamLimits

0x214b,	// (0x0006e5b6) list_medium_line_x2_t2_g3_t1

0x1123,	// (0x0006d58e) list_medium_line_x2_t2_g3_t2_ParamLimits

0x1123,	// (0x0006d58e) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2b5,	// (0x0007b720) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2b5,	// (0x0007b720) list_medium_line_x2_t2_g3_t

0x2294,	// (0x0006e6ff) main_sp_fs_list_pane_ParamLimits

0x2294,	// (0x0006e6ff) main_sp_fs_list_pane

0xc54f,	// (0x000789ba) sp_fs_scroll_pane_ParamLimits

0xc54f,	// (0x000789ba) sp_fs_scroll_pane

0x22a0,	// (0x0006e70b) list_medium_line_x2_t3_t1

0x22b0,	// (0x0006e71b) list_medium_line_x2_t3_t2

0x22be,	// (0x0006e729) list_medium_line_x2_t3_t3

0x0002,

0xf300,	// (0x0007b76b) list_medium_line_x2_t3_t

0x22cc,	// (0x0006e737) list_medium_line_x3_t4_t1

0x22dc,	// (0x0006e747) list_medium_line_x3_t4_t2

0x22ea,	// (0x0006e755) list_medium_line_x3_t4_t3

0x22be,	// (0x0006e729) list_medium_line_x3_t4_t4

0x0003,

0xf307,	// (0x0007b772) list_medium_line_x3_t4_t

0x22f8,	// (0x0006e763) list_medium_line_x4_t5_t1

0x2308,	// (0x0006e773) list_medium_line_x4_t5_t2

0x22ea,	// (0x0006e755) list_medium_line_x4_t5_t3

0x2316,	// (0x0006e781) list_medium_line_x4_t5_t4

0x22be,	// (0x0006e729) list_medium_line_x4_t5_t5

0x0004,

0xf310,	// (0x0007b77b) list_medium_line_x4_t5_t

0x10d6,	// (0x0006d541) list_medium_line_t4_g4_g1_ParamLimits

0x10d6,	// (0x0006d541) list_medium_line_t4_g4_g1

0x2324,	// (0x0006e78f) list_medium_line_t4_g4_g2_ParamLimits

0x2324,	// (0x0006e78f) list_medium_line_t4_g4_g2

0x2330,	// (0x0006e79b) list_medium_line_t4_g4_g3_ParamLimits

0x2330,	// (0x0006e79b) list_medium_line_t4_g4_g3

0x10ee,	// (0x0006d559) list_medium_line_t4_g4_g4_ParamLimits

0x10ee,	// (0x0006d559) list_medium_line_t4_g4_g4

0x0003,

0xf31b,	// (0x0007b786) list_medium_line_t4_g4_g_ParamLimits

0xf31b,	// (0x0007b786) list_medium_line_t4_g4_g

0x233c,	// (0x0006e7a7) list_medium_line_t4_g4_t1_ParamLimits

0x233c,	// (0x0006e7a7) list_medium_line_t4_g4_t1

0x2351,	// (0x0006e7bc) list_medium_line_t4_g4_t2_ParamLimits

0x2351,	// (0x0006e7bc) list_medium_line_t4_g4_t2

0x2366,	// (0x0006e7d1) list_medium_line_t4_g4_t3_ParamLimits

0x2366,	// (0x0006e7d1) list_medium_line_t4_g4_t3

0x1123,	// (0x0006d58e) list_medium_line_t4_g4_t4_ParamLimits

0x1123,	// (0x0006d58e) list_medium_line_t4_g4_t4

0x0003,

0xf324,	// (0x0007b78f) list_medium_line_t4_g4_t_ParamLimits

0xf324,	// (0x0007b78f) list_medium_line_t4_g4_t

0x242e,	// (0x0006e899) chi_dic_find_pane_g1

0x349c,	// (0x0006f907) main_tport_pane

0x63b4,	// (0x0007281f) list_medium_line_plain_t1

0x645c,	// (0x000728c7) list_medium_line_t2_g2_g1_ParamLimits

0x645c,	// (0x000728c7) list_medium_line_t2_g2_g1

0x6468,	// (0x000728d3) list_medium_line_t2_g2_g2_ParamLimits

0x6468,	// (0x000728d3) list_medium_line_t2_g2_g2

0x0001,

0xf9e9,	// (0x0007be54) list_medium_line_t2_g2_g_ParamLimits

0xf9e9,	// (0x0007be54) list_medium_line_t2_g2_g

0x6474,	// (0x000728df) list_medium_line_t2_g2_t1_ParamLimits

0x6474,	// (0x000728df) list_medium_line_t2_g2_t1

0x648e,	// (0x000728f9) list_medium_line_t2_g2_t2_ParamLimits

0x648e,	// (0x000728f9) list_medium_line_t2_g2_t2

0x0001,

0xf9ee,	// (0x0007be59) list_medium_line_t2_g2_t_ParamLimits

0xf9ee,	// (0x0007be59) list_medium_line_t2_g2_t

0xa977,	// (0x00076de2) aid_sp_fs_list_icon_a_sm

0xa97f,	// (0x00076dea) aid_sp_fs_list_icon_d

0xa987,	// (0x00076df2) aid_sp_fs_text_primary

0xddd2,	// (0x0007a23d) aid_sp_fs_text_secondary

0x6b01,	// (0x00072f6c) list_medium_line

0x6b01,	// (0x00072f6c) list_medium_line_g2

0x6b01,	// (0x00072f6c) list_medium_line_g3

0x6b01,	// (0x00072f6c) list_medium_line_plain

0x6b01,	// (0x00072f6c) list_medium_line_plain_t2

0x6b01,	// (0x00072f6c) list_medium_line_plain_t3

0x6b01,	// (0x00072f6c) list_medium_line_right_icon

0x6b01,	// (0x00072f6c) list_medium_line_right_iconx2

0x6b01,	// (0x00072f6c) list_medium_line_t2

0x6b01,	// (0x00072f6c) list_medium_line_t2_g2

0x6b01,	// (0x00072f6c) list_medium_line_t2_g3

0x6b01,	// (0x00072f6c) list_medium_line_t2_right_icon

0x6b01,	// (0x00072f6c) list_medium_line_t2_right_iconx2

0x6b01,	// (0x00072f6c) list_medium_line_t3

0x6b01,	// (0x00072f6c) list_medium_line_t3_g2

0x6b01,	// (0x00072f6c) list_medium_line_t3_g3

0x6b01,	// (0x00072f6c) list_medium_line_t3_right_iconx2

0x6b0a,	// (0x00072f75) list_medium_line_t4_g4

0x6b13,	// (0x00072f7e) list_medium_line_x2

0x6b13,	// (0x00072f7e) list_medium_line_x2_t2_g2

0x6b13,	// (0x00072f7e) list_medium_line_x2_t2_g3

0x6b13,	// (0x00072f7e) list_medium_line_x2_t2_g4

0x6b13,	// (0x00072f7e) list_medium_line_x2_t3

0x6b13,	// (0x00072f7e) list_medium_line_x2_t3_g2

0x6b13,	// (0x00072f7e) list_medium_line_x2_t3_g3

0x6b13,	// (0x00072f7e) list_medium_line_x2_t3_g4

0x6b13,	// (0x00072f7e) list_medium_line_x2_t4_g2

0x6b13,	// (0x00072f7e) list_medium_line_x2_t4_g4

0x6b1c,	// (0x00072f87) list_medium_line_x3

0x6b1c,	// (0x00072f87) list_medium_line_x3_t4

0x6b1c,	// (0x00072f87) list_medium_line_x3_t4_g4

0x6b0a,	// (0x00072f75) list_medium_line_x4_t4

0x6b0a,	// (0x00072f75) list_medium_line_x4_t4_g7

0x6b0a,	// (0x00072f75) list_medium_line_x4_t5

0x6b25,	// (0x00072f90) list_single_fs_dyc_pane_ParamLimits

0x6b25,	// (0x00072f90) list_single_fs_dyc_pane

0x10d6,	// (0x0006d541) list_medium_line_x4_t4_g7_g1_ParamLimits

0x10d6,	// (0x0006d541) list_medium_line_x4_t4_g7_g1

0x729c,	// (0x00073707) list_medium_line_x4_t4_g7_g2_ParamLimits

0x729c,	// (0x00073707) list_medium_line_x4_t4_g7_g2

0x72a8,	// (0x00073713) list_medium_line_x4_t4_g7_g3_ParamLimits

0x72a8,	// (0x00073713) list_medium_line_x4_t4_g7_g3

0x72b7,	// (0x00073722) list_medium_line_x4_t4_g7_g4_ParamLimits

0x72b7,	// (0x00073722) list_medium_line_x4_t4_g7_g4

0x72c3,	// (0x0007372e) list_medium_line_x4_t4_g7_g5_ParamLimits

0x72c3,	// (0x0007372e) list_medium_line_x4_t4_g7_g5

0x72d2,	// (0x0007373d) list_medium_line_x4_t4_g7_g6_ParamLimits

0x72d2,	// (0x0007373d) list_medium_line_x4_t4_g7_g6

0x72e1,	// (0x0007374c) list_medium_line_x4_t4_g7_g7_ParamLimits

0x72e1,	// (0x0007374c) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbb9,	// (0x0007c024) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbb9,	// (0x0007c024) list_medium_line_x4_t4_g7_g

0x72ed,	// (0x00073758) list_medium_line_x4_t4_g7_t1_ParamLimits

0x72ed,	// (0x00073758) list_medium_line_x4_t4_g7_t1

0x7302,	// (0x0007376d) list_medium_line_x4_t4_g7_t2_ParamLimits

0x7302,	// (0x0007376d) list_medium_line_x4_t4_g7_t2

0x7317,	// (0x00073782) list_medium_line_x4_t4_g7_t3_ParamLimits

0x7317,	// (0x00073782) list_medium_line_x4_t4_g7_t3

0x732c,	// (0x00073797) list_medium_line_x4_t4_g7_t4_ParamLimits

0x732c,	// (0x00073797) list_medium_line_x4_t4_g7_t4

0x733e,	// (0x000737a9) list_medium_line_x4_t4_g7_t5_ParamLimits

0x733e,	// (0x000737a9) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbc8,	// (0x0007c033) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbc8,	// (0x0007c033) list_medium_line_x4_t4_g7_t

0x7350,	// (0x000737bb) list_single_dyc_row_pane_ParamLimits

0x7350,	// (0x000737bb) list_single_dyc_row_pane

0x7a8b,	// (0x00073ef6) call5_gesture_pane_ParamLimits

0x7a8b,	// (0x00073ef6) call5_gesture_pane

0x7ae1,	// (0x00073f4c) call5_windows_pane_ParamLimits

0x7ae1,	// (0x00073f4c) call5_windows_pane

0x7b4c,	// (0x00073fb7) call5_swipe_1_pane_cp_ParamLimits

0x7b4c,	// (0x00073fb7) call5_swipe_1_pane_cp

0x7b58,	// (0x00073fc3) call5_swipe_2_pane_cp_ParamLimits

0x7b58,	// (0x00073fc3) call5_swipe_2_pane_cp

0xa5a9,	// (0x00076a14) call5_image_pane_cp

0x7b64,	// (0x00073fcf) popup_call5_audio_first_window_cp_ParamLimits

0x7b64,	// (0x00073fcf) popup_call5_audio_first_window_cp

0xe650,	// (0x0007aabb) call5_swipe_1_pane_g1_cp_ParamLimits

0xe650,	// (0x0007aabb) call5_swipe_1_pane_g1_cp

0xe6bd,	// (0x0007ab28) call5_swipe_1_pane_g2_cp

0xe669,	// (0x0007aad4) call5_swipe_1_pane_t1_cp_ParamLimits

0xe669,	// (0x0007aad4) call5_swipe_1_pane_t1_cp

0xe650,	// (0x0007aabb) call5_swipe_2_pane_g1_cp_ParamLimits

0xe650,	// (0x0007aabb) call5_swipe_2_pane_g1_cp

0xe6c5,	// (0x0007ab30) call5_swipe_2_pane_g2_cp

0xe6cd,	// (0x0007ab38) call5_swipe_2_pane_t1_cp_ParamLimits

0xe6cd,	// (0x0007ab38) call5_swipe_2_pane_t1_cp

0xa838,	// (0x00076ca3) main_sp_fs_email_pane

0xe6e2,	// (0x0007ab4d) main_sp_fs_listscroll_pane_te

0x7b72,	// (0x00073fdd) popup_sp_fs_action_menu_pane_ParamLimits

0x7b72,	// (0x00073fdd) popup_sp_fs_action_menu_pane

0xcd08,	// (0x00079173) bg_sp_fs_ctrlbar_pane_g1

0xe6eb,	// (0x0007ab56) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe6f4,	// (0x0007ab5f) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe6fd,	// (0x0007ab68) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xcd08,	// (0x00079173) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcb6,	// (0x0007c121) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xcaed,	// (0x00078f58) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xcaed,	// (0x00078f58) bg_sp_fs_ctrlbar_ddmenu_pane

0xe706,	// (0x0007ab71) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe706,	// (0x0007ab71) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe712,	// (0x0007ab7d) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe712,	// (0x0007ab7d) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcbf,	// (0x0007c12a) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcbf,	// (0x0007c12a) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe71e,	// (0x0007ab89) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe71e,	// (0x0007ab89) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x7bb6,	// (0x00074021) list_medium_line_t2_right_icon_g1

0x7bbe,	// (0x00074029) list_medium_line_t2_right_icon_t1

0x7bce,	// (0x00074039) list_medium_line_t2_right_icon_t2

0x0001,

0xfcc4,	// (0x0007c12f) list_medium_line_t2_right_icon_t

0xc900,	// (0x00078d6b) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc900,	// (0x00078d6b) bg_sp_fs_ctrlbar_pane

0x7c28,	// (0x00074093) main_sp_fs_ctrlbar_button_pane_cp01

0x7c32,	// (0x0007409d) main_sp_fs_ctrlbar_ddmenu_pane

0xe770,	// (0x0007abdb) main_sp_fs_ctrlbar_pane_g1

0xe77c,	// (0x0007abe7) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfcc9,	// (0x0007c134) main_sp_fs_ctrlbar_pane_g

0x7c70,	// (0x000740db) main_sp_fs_ctrlbar_pane_t1

0x7caf,	// (0x0007411a) main_sp_fs_ctrlbar_pane

0x7cd3,	// (0x0007413e) main_sp_fs_listscroll_pane_te_cp01

0x7cf3,	// (0x0007415e) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x7cf3,	// (0x0007415e) popup_sp_fs_action_menu_pane_cp01

0xa838,	// (0x00076ca3) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xa838,	// (0x00076ca3) bg_sp_fs_highlight_list_pane_cp01

0xa990,	// (0x00076dfb) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xa990,	// (0x00076dfb) sp_fs_action_menu_list_gene_pane_g1

0xe7a3,	// (0x0007ac0e) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe7a3,	// (0x0007ac0e) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcd7,	// (0x0007c142) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcd7,	// (0x0007c142) sp_fs_action_menu_list_gene_pane_g

0xa99f,	// (0x00076e0a) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xa99f,	// (0x00076e0a) sp_fs_action_menu_list_gene_pane_t1

0xa9b7,	// (0x00076e22) sp_fs_action_menu_list_gene_pane_ParamLimits

0xa9b7,	// (0x00076e22) sp_fs_action_menu_list_gene_pane

0xe7b0,	// (0x0007ac1b) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe7b0,	// (0x0007ac1b) popup_sp_fs_action_menu_bg_pane

0xa9d6,	// (0x00076e41) sp_fs_action_menu_list_pane_ParamLimits

0xa9d6,	// (0x00076e41) sp_fs_action_menu_list_pane

0x7d23,	// (0x0007418e) sp_fs_scroll_pane_cp01_ParamLimits

0x7d23,	// (0x0007418e) sp_fs_scroll_pane_cp01

0x7d49,	// (0x000741b4) list_medium_line_plain_t2_t1

0x7d59,	// (0x000741c4) list_medium_line_plain_t2_t2

0x0001,

0xfcdc,	// (0x0007c147) list_medium_line_plain_t2_t

0x7d69,	// (0x000741d4) list_medium_line_plain_t3_t1

0x7d79,	// (0x000741e4) list_medium_line_plain_t3_t2

0x7d87,	// (0x000741f2) list_medium_line_plain_t3_t3

0x0002,

0xfce1,	// (0x0007c14c) list_medium_line_plain_t3_t

0x10d6,	// (0x0006d541) list_medium_line_x2_t2_g2_g1_ParamLimits

0x10d6,	// (0x0006d541) list_medium_line_x2_t2_g2_g1

0x10ee,	// (0x0006d559) list_medium_line_x2_t2_g2_g2_ParamLimits

0x10ee,	// (0x0006d559) list_medium_line_x2_t2_g2_g2

0x0001,

0xf22b,	// (0x0007b696) list_medium_line_x2_t2_g2_g_ParamLimits

0xf22b,	// (0x0007b696) list_medium_line_x2_t2_g2_g

0x233c,	// (0x0006e7a7) list_medium_line_x2_t2_g2_t1_ParamLimits

0x233c,	// (0x0006e7a7) list_medium_line_x2_t2_g2_t1

0x1123,	// (0x0006d58e) list_medium_line_x2_t2_g2_t2_ParamLimits

0x1123,	// (0x0006d58e) list_medium_line_x2_t2_g2_t2

0x0001,

0xfce8,	// (0x0007c153) list_medium_line_x2_t2_g2_t_ParamLimits

0xfce8,	// (0x0007c153) list_medium_line_x2_t2_g2_t

0x10d6,	// (0x0006d541) list_medium_line_x2_t4_g2_g1_ParamLimits

0x10d6,	// (0x0006d541) list_medium_line_x2_t4_g2_g1

0x7d95,	// (0x00074200) list_medium_line_x2_t4_g2_g2_ParamLimits

0x7d95,	// (0x00074200) list_medium_line_x2_t4_g2_g2

0x0001,

0xfced,	// (0x0007c158) list_medium_line_x2_t4_g2_g_ParamLimits

0xfced,	// (0x0007c158) list_medium_line_x2_t4_g2_g

0x7da7,	// (0x00074212) list_medium_line_x2_t4_g2_t1_ParamLimits

0x7da7,	// (0x00074212) list_medium_line_x2_t4_g2_t1

0x7dc1,	// (0x0007422c) list_medium_line_x2_t4_g2_t2_ParamLimits

0x7dc1,	// (0x0007422c) list_medium_line_x2_t4_g2_t2

0x7dd7,	// (0x00074242) list_medium_line_x2_t4_g2_t3_ParamLimits

0x7dd7,	// (0x00074242) list_medium_line_x2_t4_g2_t3

0x1123,	// (0x0006d58e) list_medium_line_x2_t4_g2_t4_ParamLimits

0x1123,	// (0x0006d58e) list_medium_line_x2_t4_g2_t4

0x0003,

0xfcf2,	// (0x0007c15d) list_medium_line_x2_t4_g2_t_ParamLimits

0xfcf2,	// (0x0007c15d) list_medium_line_x2_t4_g2_t

0x7dec,	// (0x00074257) list_medium_line_t3_right_iconx2_g1

0x7bb6,	// (0x00074021) list_medium_line_t3_right_iconx2_g2

0x7df4,	// (0x0007425f) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfcfb,	// (0x0007c166) list_medium_line_t3_right_iconx2_g

0x7dfe,	// (0x00074269) list_medium_line_t3_right_iconx2_t1

0x7e0e,	// (0x00074279) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd02,	// (0x0007c16d) list_medium_line_t3_right_iconx2_t

0x10d6,	// (0x0006d541) list_medium_line_x3_t4_g4_g1_ParamLimits

0x10d6,	// (0x0006d541) list_medium_line_x3_t4_g4_g1

0x10e2,	// (0x0006d54d) list_medium_line_x3_t4_g4_g2_ParamLimits

0x10e2,	// (0x0006d54d) list_medium_line_x3_t4_g4_g2

0x2324,	// (0x0006e78f) list_medium_line_x3_t4_g4_g3_ParamLimits

0x2324,	// (0x0006e78f) list_medium_line_x3_t4_g4_g3

0x7e1c,	// (0x00074287) list_medium_line_x3_t4_g4_g4_ParamLimits

0x7e1c,	// (0x00074287) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd07,	// (0x0007c172) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd07,	// (0x0007c172) list_medium_line_x3_t4_g4_g

0x7e28,	// (0x00074293) list_medium_line_x3_t4_g4_t1_ParamLimits

0x7e28,	// (0x00074293) list_medium_line_x3_t4_g4_t1

0x7e3f,	// (0x000742aa) list_medium_line_x3_t4_g4_t2_ParamLimits

0x7e3f,	// (0x000742aa) list_medium_line_x3_t4_g4_t2

0x2351,	// (0x0006e7bc) list_medium_line_x3_t4_g4_t3_ParamLimits

0x2351,	// (0x0006e7bc) list_medium_line_x3_t4_g4_t3

0x7e5a,	// (0x000742c5) list_medium_line_x3_t4_g4_t4_ParamLimits

0x7e5a,	// (0x000742c5) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd10,	// (0x0007c17b) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd10,	// (0x0007c17b) list_medium_line_x3_t4_g4_t

0x7e77,	// (0x000742e2) list_single_dyc_row_text_pane_t1_ParamLimits

0x7e77,	// (0x000742e2) list_single_dyc_row_text_pane_t1

0x7ec0,	// (0x0007432b) list_single_dyc_row_text_pane_t2_ParamLimits

0x7ec0,	// (0x0007432b) list_single_dyc_row_text_pane_t2

0xa9f6,	// (0x00076e61) list_single_dyc_row_text_pane_t3_ParamLimits

0xa9f6,	// (0x00076e61) list_single_dyc_row_text_pane_t3

0x0005,

0xfd19,	// (0x0007c184) list_single_dyc_row_text_pane_t_ParamLimits

0xfd19,	// (0x0007c184) list_single_dyc_row_text_pane_t

0xaa1a,	// (0x00076e85) list_single_dyc_row_pane_g1_ParamLimits

0xaa1a,	// (0x00076e85) list_single_dyc_row_pane_g1

0xaa26,	// (0x00076e91) list_single_dyc_row_pane_g2_ParamLimits

0xaa26,	// (0x00076e91) list_single_dyc_row_pane_g2

0xaa32,	// (0x00076e9d) list_single_dyc_row_pane_g3_ParamLimits

0xaa32,	// (0x00076e9d) list_single_dyc_row_pane_g3

0xaa3e,	// (0x00076ea9) list_single_dyc_row_pane_g4_ParamLimits

0xaa3e,	// (0x00076ea9) list_single_dyc_row_pane_g4

0x0003,

0xfd26,	// (0x0007c191) list_single_dyc_row_pane_g_ParamLimits

0xfd26,	// (0x0007c191) list_single_dyc_row_pane_g

0xaa4a,	// (0x00076eb5) list_single_dyc_row_text_pane_ParamLimits

0xaa4a,	// (0x00076eb5) list_single_dyc_row_text_pane

0x948b,	// (0x000758f6) bg_sp_fs_scroll_pane

0xe7be,	// (0x0007ac29) thumb_sp_fs_scroll_pane

0x645c,	// (0x000728c7) list_medium_line_g1_ParamLimits

0x645c,	// (0x000728c7) list_medium_line_g1

0x7ff5,	// (0x00074460) list_medium_line_t1_ParamLimits

0x7ff5,	// (0x00074460) list_medium_line_t1

0x10d6,	// (0x0006d541) list_medium_line_x2_g1_ParamLimits

0x10d6,	// (0x0006d541) list_medium_line_x2_g1

0x10e2,	// (0x0006d54d) list_medium_line_x2_g2_ParamLimits

0x10e2,	// (0x0006d54d) list_medium_line_x2_g2

0x0001,

0xfd2f,	// (0x0007c19a) list_medium_line_x2_g_ParamLimits

0xfd2f,	// (0x0007c19a) list_medium_line_x2_g

0xaa69,	// (0x00076ed4) list_medium_line_x2_t1_ParamLimits

0xaa69,	// (0x00076ed4) list_medium_line_x2_t1

0x10d6,	// (0x0006d541) list_medium_line_x3_g1_ParamLimits

0x10d6,	// (0x0006d541) list_medium_line_x3_g1

0x10e2,	// (0x0006d54d) list_medium_line_x3_g2_ParamLimits

0x10e2,	// (0x0006d54d) list_medium_line_x3_g2

0x0001,

0xfd2f,	// (0x0007c19a) list_medium_line_x3_g_ParamLimits

0xfd2f,	// (0x0007c19a) list_medium_line_x3_g

0xaa69,	// (0x00076ed4) list_medium_line_x3_t1_ParamLimits

0xaa69,	// (0x00076ed4) list_medium_line_x3_t1

0xe7c7,	// (0x0007ac32) thumb_sp_fs_scroll_pane_g1

0xe7d0,	// (0x0007ac3b) thumb_sp_fs_scroll_pane_g2

0xe7d9,	// (0x0007ac44) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd34,	// (0x0007c19f) thumb_sp_fs_scroll_pane_g

0xe7c7,	// (0x0007ac32) bg_sp_fs_scroll_pane_g1

0xe7d0,	// (0x0007ac3b) bg_sp_fs_scroll_pane_g2

0xe7d9,	// (0x0007ac44) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd34,	// (0x0007c19f) bg_sp_fs_scroll_pane_g

0x10d6,	// (0x0006d541) list_medium_line_x2_t3_g4_g1_ParamLimits

0x10d6,	// (0x0006d541) list_medium_line_x2_t3_g4_g1

0x117d,	// (0x0006d5e8) list_medium_line_x2_t3_g4_g2_ParamLimits

0x117d,	// (0x0006d5e8) list_medium_line_x2_t3_g4_g2

0x10e2,	// (0x0006d54d) list_medium_line_x2_t3_g4_g3_ParamLimits

0x10e2,	// (0x0006d54d) list_medium_line_x2_t3_g4_g3

0x10ee,	// (0x0006d559) list_medium_line_x2_t3_g4_g4_ParamLimits

0x10ee,	// (0x0006d559) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2a7,	// (0x0007b712) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2a7,	// (0x0007b712) list_medium_line_x2_t3_g4_g

0x800a,	// (0x00074475) list_medium_line_x2_t3_g4_t1_ParamLimits

0x800a,	// (0x00074475) list_medium_line_x2_t3_g4_t1

0x8024,	// (0x0007448f) list_medium_line_x2_t3_g4_t2_ParamLimits

0x8024,	// (0x0007448f) list_medium_line_x2_t3_g4_t2

0x1123,	// (0x0006d58e) list_medium_line_x2_t3_g4_t3_ParamLimits

0x1123,	// (0x0006d58e) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd3b,	// (0x0007c1a6) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd3b,	// (0x0007c1a6) list_medium_line_x2_t3_g4_t

0x645c,	// (0x000728c7) list_medium_line_g2_g1_ParamLimits

0x645c,	// (0x000728c7) list_medium_line_g2_g1

0x6468,	// (0x000728d3) list_medium_line_g2_g2_ParamLimits

0x6468,	// (0x000728d3) list_medium_line_g2_g2

0x0001,

0xf9e9,	// (0x0007be54) list_medium_line_g2_g_ParamLimits

0xf9e9,	// (0x0007be54) list_medium_line_g2_g

0x803e,	// (0x000744a9) list_medium_line_g2_t1_ParamLimits

0x803e,	// (0x000744a9) list_medium_line_g2_t1

0x645c,	// (0x000728c7) list_medium_line_t3_g2_g1_ParamLimits

0x645c,	// (0x000728c7) list_medium_line_t3_g2_g1

0x6468,	// (0x000728d3) list_medium_line_t3_g2_g2_ParamLimits

0x6468,	// (0x000728d3) list_medium_line_t3_g2_g2

0x0001,

0xf9e9,	// (0x0007be54) list_medium_line_t3_g2_g_ParamLimits

0xf9e9,	// (0x0007be54) list_medium_line_t3_g2_g

0x8053,	// (0x000744be) list_medium_line_t3_g2_t1_ParamLimits

0x8053,	// (0x000744be) list_medium_line_t3_g2_t1

0x806d,	// (0x000744d8) list_medium_line_t3_g2_t2_ParamLimits

0x806d,	// (0x000744d8) list_medium_line_t3_g2_t2

0x8083,	// (0x000744ee) list_medium_line_t3_g2_t3_ParamLimits

0x8083,	// (0x000744ee) list_medium_line_t3_g2_t3

0x0002,

0xfd42,	// (0x0007c1ad) list_medium_line_t3_g2_t_ParamLimits

0xfd42,	// (0x0007c1ad) list_medium_line_t3_g2_t

0x7bb6,	// (0x00074021) list_medium_line_right_icon_g1

0x809d,	// (0x00074508) list_medium_line_right_icon_t1

0x645c,	// (0x000728c7) list_medium_line_t2_g1_ParamLimits

0x645c,	// (0x000728c7) list_medium_line_t2_g1

0x80ab,	// (0x00074516) list_medium_line_t2_t1_ParamLimits

0x80ab,	// (0x00074516) list_medium_line_t2_t1

0x80c5,	// (0x00074530) list_medium_line_t2_t2_ParamLimits

0x80c5,	// (0x00074530) list_medium_line_t2_t2

0x0001,

0xfd49,	// (0x0007c1b4) list_medium_line_t2_t_ParamLimits

0xfd49,	// (0x0007c1b4) list_medium_line_t2_t

0x645c,	// (0x000728c7) list_medium_line_t3_g1_ParamLimits

0x645c,	// (0x000728c7) list_medium_line_t3_g1

0x80de,	// (0x00074549) list_medium_line_t3_t1_ParamLimits

0x80de,	// (0x00074549) list_medium_line_t3_t1

0x80f8,	// (0x00074563) list_medium_line_t3_t2_ParamLimits

0x80f8,	// (0x00074563) list_medium_line_t3_t2

0x810e,	// (0x00074579) list_medium_line_t3_t3_ParamLimits

0x810e,	// (0x00074579) list_medium_line_t3_t3

0x0002,

0xfd4e,	// (0x0007c1b9) list_medium_line_t3_t_ParamLimits

0xfd4e,	// (0x0007c1b9) list_medium_line_t3_t

0x645c,	// (0x000728c7) list_medium_line_g3_g1_ParamLimits

0x645c,	// (0x000728c7) list_medium_line_g3_g1

0x8123,	// (0x0007458e) list_medium_line_g3_g2_ParamLimits

0x8123,	// (0x0007458e) list_medium_line_g3_g2

0x6468,	// (0x000728d3) list_medium_line_g3_g3_ParamLimits

0x6468,	// (0x000728d3) list_medium_line_g3_g3

0x0002,

0xfd55,	// (0x0007c1c0) list_medium_line_g3_g_ParamLimits

0xfd55,	// (0x0007c1c0) list_medium_line_g3_g

0x812f,	// (0x0007459a) list_medium_line_g3_t1_ParamLimits

0x812f,	// (0x0007459a) list_medium_line_g3_t1

0x645c,	// (0x000728c7) list_medium_line_t2_g3_g1_ParamLimits

0x645c,	// (0x000728c7) list_medium_line_t2_g3_g1

0x8123,	// (0x0007458e) list_medium_line_t2_g3_g2_ParamLimits

0x8123,	// (0x0007458e) list_medium_line_t2_g3_g2

0x6468,	// (0x000728d3) list_medium_line_t2_g3_g3_ParamLimits

0x6468,	// (0x000728d3) list_medium_line_t2_g3_g3

0x0002,

0xfd55,	// (0x0007c1c0) list_medium_line_t2_g3_g_ParamLimits

0xfd55,	// (0x0007c1c0) list_medium_line_t2_g3_g

0x8144,	// (0x000745af) list_medium_line_t2_g3_t1_ParamLimits

0x8144,	// (0x000745af) list_medium_line_t2_g3_t1

0x815e,	// (0x000745c9) list_medium_line_t2_g3_t2_ParamLimits

0x815e,	// (0x000745c9) list_medium_line_t2_g3_t2

0x0001,

0xfd5c,	// (0x0007c1c7) list_medium_line_t2_g3_t_ParamLimits

0xfd5c,	// (0x0007c1c7) list_medium_line_t2_g3_t

0x645c,	// (0x000728c7) list_medium_line_t3_g3_g1_ParamLimits

0x645c,	// (0x000728c7) list_medium_line_t3_g3_g1

0x8123,	// (0x0007458e) list_medium_line_t3_g3_g2_ParamLimits

0x8123,	// (0x0007458e) list_medium_line_t3_g3_g2

0x6468,	// (0x000728d3) list_medium_line_t3_g3_g3_ParamLimits

0x6468,	// (0x000728d3) list_medium_line_t3_g3_g3

0x0002,

0xfd55,	// (0x0007c1c0) list_medium_line_t3_g3_g_ParamLimits

0xfd55,	// (0x0007c1c0) list_medium_line_t3_g3_g

0x817c,	// (0x000745e7) list_medium_line_t3_g3_t1_ParamLimits

0x817c,	// (0x000745e7) list_medium_line_t3_g3_t1

0x8195,	// (0x00074600) list_medium_line_t3_g3_t2_ParamLimits

0x8195,	// (0x00074600) list_medium_line_t3_g3_t2

0x81ab,	// (0x00074616) list_medium_line_t3_g3_t3_ParamLimits

0x81ab,	// (0x00074616) list_medium_line_t3_g3_t3

0x0002,

0xfd61,	// (0x0007c1cc) list_medium_line_t3_g3_t_ParamLimits

0xfd61,	// (0x0007c1cc) list_medium_line_t3_g3_t

0x7dec,	// (0x00074257) list_medium_line_right_iconx2_g1

0x7bb6,	// (0x00074021) list_medium_line_right_iconx2_g2

0x0001,

0xfd68,	// (0x0007c1d3) list_medium_line_right_iconx2_g

0x81c5,	// (0x00074630) list_medium_line_right_iconx2_t1

0x7dec,	// (0x00074257) list_medium_line_t2_right_iconx2_g1

0x7bb6,	// (0x00074021) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd68,	// (0x0007c1d3) list_medium_line_t2_right_iconx2_g

0x81d3,	// (0x0007463e) list_medium_line_t2_right_iconx2_t1

0x81e3,	// (0x0007464e) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd6d,	// (0x0007c1d8) list_medium_line_t2_right_iconx2_t

0x81f5,	// (0x00074660) list_medium_line_x4_t4_t1

0x8203,	// (0x0007466e) list_medium_line_x4_t4_t2

0x8213,	// (0x0007467e) list_medium_line_x4_t4_t3

0x8223,	// (0x0007468e) list_medium_line_x4_t4_t4

0x0003,

0xfd72,	// (0x0007c1dd) list_medium_line_x4_t4_t

0x8276,	// (0x000746e1) tport_appsw_pane_ParamLimits

0x8276,	// (0x000746e1) tport_appsw_pane

0x828e,	// (0x000746f9) tport_contact_pane_ParamLimits

0x828e,	// (0x000746f9) tport_contact_pane

0x82a6,	// (0x00074711) tport_listscroll_pane_ParamLimits

0x82a6,	// (0x00074711) tport_listscroll_pane

0x82c0,	// (0x0007472b) cell_tport_appsw_pane_ParamLimits

0x82c0,	// (0x0007472b) cell_tport_appsw_pane

0xd6d1,	// (0x00079b3c) tport_appsw_pane_g1_ParamLimits

0xd6d1,	// (0x00079b3c) tport_appsw_pane_g1

0xe7e2,	// (0x0007ac4d) tport_contact_pane_g1

0xe1a2,	// (0x0007a60d) tport_contact_pane_t1

0xe7eb,	// (0x0007ac56) tport_contact_pane_t2

0x0001,

0xfd7b,	// (0x0007c1e6) tport_contact_pane_t

0xe7f9,	// (0x0007ac64) list_tport_pane

0xe802,	// (0x0007ac6d) scroll_pane_cp_030

0x8308,	// (0x00074773) cell_tport_appsw_pane_g1

0x8318,	// (0x00074783) cell_tport_appsw_pane_t1

0x8326,	// (0x00074791) grid_highlight_pane_cp019

0x832e,	// (0x00074799) list_tport_double_graphic_pane_ParamLimits

0x832e,	// (0x00074799) list_tport_double_graphic_pane

0xa838,	// (0x00076ca3) list_highlight_pane_cp023_ParamLimits

0xa838,	// (0x00076ca3) list_highlight_pane_cp023

0x833b,	// (0x000747a6) list_tport_double_graphic_pane_g1_ParamLimits

0x833b,	// (0x000747a6) list_tport_double_graphic_pane_g1

0x8348,	// (0x000747b3) list_tport_double_graphic_pane_t1_ParamLimits

0x8348,	// (0x000747b3) list_tport_double_graphic_pane_t1

0x835d,	// (0x000747c8) list_tport_double_graphic_pane_t2_ParamLimits

0x835d,	// (0x000747c8) list_tport_double_graphic_pane_t2

0x0001,

0xfd87,	// (0x0007c1f2) list_tport_double_graphic_pane_t_ParamLimits

0xfd87,	// (0x0007c1f2) list_tport_double_graphic_pane_t

0x948b,	// (0x000758f6) main_cale_note_pane

0x5c20,	// (0x0007208b) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x5c20,	// (0x0007208b) cell_vitu2_function_top_wide_pane_cp01

0x7701,	// (0x00073b6c) wait_bar_pane_cp05_ParamLimits

0xa838,	// (0x00076ca3) listscroll_cmail_pane

0xe80b,	// (0x0007ac76) list_cmail_pane

0x836f,	// (0x000747da) list_cmail_body_pane

0x8384,	// (0x000747ef) list_single_cmail_header_caption_pane

0x839a,	// (0x00074805) list_single_cmail_header_detail_pane_ParamLimits

0x839a,	// (0x00074805) list_single_cmail_header_detail_pane

0xe81b,	// (0x0007ac86) list_single_cmail_header_caption_pane_t1

0x83c3,	// (0x0007482e) list_single_cmail_header_detail_pane_g1_ParamLimits

0x83c3,	// (0x0007482e) list_single_cmail_header_detail_pane_g1

0xaa7f,	// (0x00076eea) list_single_cmail_header_detail_pane_g2_ParamLimits

0xaa7f,	// (0x00076eea) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd8c,	// (0x0007c1f7) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd8c,	// (0x0007c1f7) list_single_cmail_header_detail_pane_g

0xaa8b,	// (0x00076ef6) list_single_cmail_header_detail_pane_t1_ParamLimits

0xaa8b,	// (0x00076ef6) list_single_cmail_header_detail_pane_t1

0xaaeb,	// (0x00076f56) list_single_cmail_header_editor_pane_bg_ParamLimits

0xaaeb,	// (0x00076f56) list_single_cmail_header_editor_pane_bg

0xe2ff,	// (0x0007a76a) list_cmail_body_pane_g1

0xe83f,	// (0x0007acaa) list_cmail_body_pane_t1

0xd6f1,	// (0x00079b5c) list_single_cmail_header_editor_pane_bg_g1

0xace9,	// (0x00077154) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd701,	// (0x00079b6c) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd6f9,	// (0x00079b64) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd915,	// (0x00079d80) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd721,	// (0x00079b8c) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd711,	// (0x00079b7c) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd719,	// (0x00079b84) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xa7e2,	// (0x00076c4d) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x83db,	// (0x00074846) calenote_gesture_pane_ParamLimits

0x83db,	// (0x00074846) calenote_gesture_pane

0x83fb,	// (0x00074866) calenote_window_pane_ParamLimits

0x83fb,	// (0x00074866) calenote_window_pane

0xe84d,	// (0x0007acb8) popup_note_window_cp01

0x8417,	// (0x00074882) calenote_swipe_1_pane_ParamLimits

0x8417,	// (0x00074882) calenote_swipe_1_pane

0x7b58,	// (0x00073fc3) calenote_swipe_2_pane_ParamLimits

0x7b58,	// (0x00073fc3) calenote_swipe_2_pane

0xe650,	// (0x0007aabb) calenote_swipe_1_pane_g1_ParamLimits

0xe650,	// (0x0007aabb) calenote_swipe_1_pane_g1

0xe65d,	// (0x0007aac8) calenote_swipe_1_pane_g2_ParamLimits

0xe65d,	// (0x0007aac8) calenote_swipe_1_pane_g2

0x0001,

0xfcac,	// (0x0007c117) calenote_swipe_1_pane_g_ParamLimits

0xfcac,	// (0x0007c117) calenote_swipe_1_pane_g

0xe85f,	// (0x0007acca) calenote_swipe_1_pane_t1_ParamLimits

0xe85f,	// (0x0007acca) calenote_swipe_1_pane_t1

0xe650,	// (0x0007aabb) calenote_swipe_2_pane_g1_ParamLimits

0xe650,	// (0x0007aabb) calenote_swipe_2_pane_g1

0xe87e,	// (0x0007ace9) calenote_swipe_2_pane_g2_ParamLimits

0xe87e,	// (0x0007ace9) calenote_swipe_2_pane_g2

0x0001,

0xfd98,	// (0x0007c203) calenote_swipe_2_pane_g_ParamLimits

0xfd98,	// (0x0007c203) calenote_swipe_2_pane_g

0xe88a,	// (0x0007acf5) calenote_swipe_2_pane_t1_ParamLimits

0xe88a,	// (0x0007acf5) calenote_swipe_2_pane_t1

0x948b,	// (0x000758f6) main_mup_navstr_pane

0x4861,	// (0x00070ccc) main_mup3_pane_t7_ParamLimits

0x4861,	// (0x00070ccc) main_mup3_pane_t7

0x9c81,	// (0x000760ec) main_mp4_pane_g6_ParamLimits

0x9c81,	// (0x000760ec) main_mp4_pane_g6

0x9e43,	// (0x000762ae) main_image3_pane_t4_ParamLimits

0x9e43,	// (0x000762ae) main_image3_pane_t4

0x842c,	// (0x00074897) popup_navstr_preview_pane_ParamLimits

0x842c,	// (0x00074897) popup_navstr_preview_pane

0x8440,	// (0x000748ab) scroll_navstr_pane_ParamLimits

0x8440,	// (0x000748ab) scroll_navstr_pane

0x948b,	// (0x000758f6) bg_popup_preview_window_pane_cp04

0xe8b1,	// (0x0007ad1c) popup_navstr_preview_pane_t1

0x8454,	// (0x000748bf) scroll_navstr_pane_g1_ParamLimits

0x8454,	// (0x000748bf) scroll_navstr_pane_g1

0x8468,	// (0x000748d3) scroll_navstr_pane_t1_ParamLimits

0x8468,	// (0x000748d3) scroll_navstr_pane_t1

0xe856,	// (0x0007acc1) bg_button_pane_cp014

0xe856,	// (0x0007acc1) bg_button_pane_cp030

0x7a31,	// (0x00073e9c) list_double_fisheye_pane_g4_ParamLimits

0x7a31,	// (0x00073e9c) list_double_fisheye_pane_g4

0x7a3d,	// (0x00073ea8) list_double_fisheye_pane_g5_ParamLimits

0x7a3d,	// (0x00073ea8) list_double_fisheye_pane_g5

0xc54f,	// (0x000789ba) sp_fs_scroll_pane_cp03

0xe770,	// (0x0007abdb) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe77c,	// (0x0007abe7) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcc9,	// (0x0007c134) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x7c70,	// (0x000740db) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe813,	// (0x0007ac7e) sp_fs_scroll_pane_cp02

0xa4e8,	// (0x00076953) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa4e8,	// (0x00076953) popup_sp_fs_calendar_preview_list_single_pane

0x948b,	// (0x000758f6) main_cam6_pano_pane

0x94f3,	// (0x0007595e) main_mup3_pane_ParamLimits

0x948b,	// (0x000758f6) main_phacti_pane

0x75d4,	// (0x00073a3f) bg_button_pane_cp11

0x75ee,	// (0x00073a59) main_mobtv_info_pane_g2_ParamLimits

0x75ee,	// (0x00073a59) main_mobtv_info_pane_g2

0x0001,

0xfc29,	// (0x0007c094) main_mobtv_info_pane_g_ParamLimits

0xfc29,	// (0x0007c094) main_mobtv_info_pane_g

0x77cb,	// (0x00073c36) sc_clock_pane_t5_ParamLimits

0x77cb,	// (0x00073c36) sc_clock_pane_t5

0x7893,	// (0x00073cfe) main_radioblah_pane_g1_ParamLimits

0xe59c,	// (0x0007aa07) main_radioblah_pane_t3_ParamLimits

0xe59c,	// (0x0007aa07) main_radioblah_pane_t3

0xe5b4,	// (0x0007aa1f) main_radioblah_pane_t4_ParamLimits

0xe5b4,	// (0x0007aa1f) main_radioblah_pane_t4

0x78bb,	// (0x00073d26) main_radioblah_text_pane_ParamLimits

0x78bb,	// (0x00073d26) main_radioblah_text_pane

0x78cd,	// (0x00073d38) main_radioblah_info_pane_g1_ParamLimits

0x7966,	// (0x00073dd1) main_radioblah_info_pane_t4_ParamLimits

0x7966,	// (0x00073dd1) main_radioblah_info_pane_t4

0xa838,	// (0x00076ca3) main_sp_fs_calendar_pane

0x847f,	// (0x000748ea) main_phacti_pane_g1

0x8487,	// (0x000748f2) phacti_note_pane_ParamLimits

0x8487,	// (0x000748f2) phacti_note_pane

0xe8c8,	// (0x0007ad33) phacti_term_pane_ParamLimits

0xe8c8,	// (0x0007ad33) phacti_term_pane

0xe8dd,	// (0x0007ad48) phacti_note_pane_t1_ParamLimits

0xe8dd,	// (0x0007ad48) phacti_note_pane_t1

0xab02,	// (0x00076f6d) phacti_term_pane_g1

0xab0a,	// (0x00076f75) phacti_term_pane_t1_ParamLimits

0xab0a,	// (0x00076f75) phacti_term_pane_t1

0xe8f4,	// (0x0007ad5f) popup_sp_fs_calendar_preview_list_single_pane_g1

0xa587,	// (0x000769f2) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfda2,	// (0x0007c20d) popup_sp_fs_calendar_preview_list_single_pane_g

0xe8fc,	// (0x0007ad67) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe8fc,	// (0x0007ad67) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe912,	// (0x0007ad7d) aid_popup_sp_fs_bg_corner_pane

0xcd08,	// (0x00079173) popup_sp_fs_calendar_preview_bg_pane_g1

0x948b,	// (0x000758f6) popup_sp_fs_calendar_preview_bg_pane

0xe91a,	// (0x0007ad85) popup_sp_fs_calendar_preview_list_pane

0xc900,	// (0x00078d6b) bg_main_sp_fs_cale_pane_ParamLimits

0xc900,	// (0x00078d6b) bg_main_sp_fs_cale_pane

0xab3d,	// (0x00076fa8) listscroll_cale_mrui_pane_ParamLimits

0xab3d,	// (0x00076fa8) listscroll_cale_mrui_pane

0xab52,	// (0x00076fbd) listscroll_sp_fs_schedule_track_pane

0xab5b,	// (0x00076fc6) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xab5b,	// (0x00076fc6) main_sp_fs_ctrlbar_pane_cp01

0xe922,	// (0x0007ad8d) main_sp_fs_ribbon_pane

0xab6e,	// (0x00076fd9) popup_sp_fs_cale_preview_window

0x84fc,	// (0x00074967) list_single_sp_fs_schedule_track_pane_ParamLimits

0x84fc,	// (0x00074967) list_single_sp_fs_schedule_track_pane

0xa838,	// (0x00076ca3) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xa838,	// (0x00076ca3) bg_sp_fs_highlight_list_pane_cp03

0x850f,	// (0x0007497a) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x850f,	// (0x0007497a) list_single_sp_fs_schedule_track_pane_g1

0x851b,	// (0x00074986) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x851b,	// (0x00074986) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfda7,	// (0x0007c212) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfda7,	// (0x0007c212) list_single_sp_fs_schedule_track_pane_g

0x8527,	// (0x00074992) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8527,	// (0x00074992) list_single_sp_fs_schedule_track_pane_t1

0x8541,	// (0x000749ac) sp_fs_schedule_track_pane_ParamLimits

0x8541,	// (0x000749ac) sp_fs_schedule_track_pane

0xe92a,	// (0x0007ad95) sp_fs_schedule_track_pane_g1

0xe932,	// (0x0007ad9d) sp_fs_schedule_track_pane_g2

0xe93a,	// (0x0007ada5) sp_fs_schedule_track_pane_g3

0xe942,	// (0x0007adad) sp_fs_schedule_track_pane_g4

0xe94a,	// (0x0007adb5) sp_fs_schedule_track_pane_g5

0x0004,

0xfdac,	// (0x0007c217) sp_fs_schedule_track_pane_g

0xd6f1,	// (0x00079b5c) bg_sp_fs_schedule_viewer_highlight_g1

0xace9,	// (0x00077154) bg_sp_fs_schedule_viewer_highlight_g2

0xd6f9,	// (0x00079b64) bg_sp_fs_schedule_viewer_highlight_g3

0xd701,	// (0x00079b6c) bg_sp_fs_schedule_viewer_highlight_g4

0xd915,	// (0x00079d80) bg_sp_fs_schedule_viewer_highlight_g5

0xd711,	// (0x00079b7c) bg_sp_fs_schedule_viewer_highlight_g6

0xd719,	// (0x00079b84) bg_sp_fs_schedule_viewer_highlight_g7

0xd721,	// (0x00079b8c) bg_sp_fs_schedule_viewer_highlight_g8

0xa7e2,	// (0x00076c4d) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdb7,	// (0x0007c222) bg_sp_fs_schedule_viewer_highlight_g

0x948b,	// (0x000758f6) bg_main_sp_fs_ribbon_pane

0x8552,	// (0x000749bd) main_sp_fs_ribbon_pane_g1

0xe952,	// (0x0007adbd) main_sp_fs_ribbon_pane_t1

0x855b,	// (0x000749c6) main_sp_fs_ribbon_pane_t2

0xe961,	// (0x0007adcc) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdca,	// (0x0007c235) main_sp_fs_ribbon_pane_t

0xe970,	// (0x0007addb) main_sp_fs_ribbon_scheduler_pane

0xe978,	// (0x0007ade3) bg_main_sp_fs_ribbon_pane_g1

0xe981,	// (0x0007adec) bg_main_sp_fs_ribbon_pane_g2

0xe98a,	// (0x0007adf5) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdd1,	// (0x0007c23c) bg_main_sp_fs_ribbon_pane_g

0xe992,	// (0x0007adfd) main_sp_fs_ribbon_scheduler_pane_g1

0xe99b,	// (0x0007ae06) main_sp_fs_ribbon_scheduler_pane_g2

0xe9a4,	// (0x0007ae0f) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdd8,	// (0x0007c243) main_sp_fs_ribbon_scheduler_pane_g

0xe9ad,	// (0x0007ae18) list_cale_mrui_pane

0x856a,	// (0x000749d5) sp_fs_scroll_pane_cp07_ParamLimits

0x856a,	// (0x000749d5) sp_fs_scroll_pane_cp07

0x8586,	// (0x000749f1) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8586,	// (0x000749f1) bg_sp_fs_schedule_viewer_highlight

0xe9ba,	// (0x0007ae25) list_single_sp_fs_schedule_track_pane_cp01

0xe9c2,	// (0x0007ae2d) list_sp_fs_schedule_track_pane

0xe9ca,	// (0x0007ae35) sp_fs_scroll_pane_cp06_ParamLimits

0xe9ca,	// (0x0007ae35) sp_fs_scroll_pane_cp06

0xcd08,	// (0x00079173) bgmain_sp_fs_calendar_pane_g1

0x8596,	// (0x00074a01) list_single_cale_mrui_pane_ParamLimits

0x8596,	// (0x00074a01) list_single_cale_mrui_pane

0xab80,	// (0x00076feb) list_single_cale_mrui_row_pane_ParamLimits

0xab80,	// (0x00076feb) list_single_cale_mrui_row_pane

0xab8d,	// (0x00076ff8) list_single_cale_mrui_row_pane_g1_ParamLimits

0xab8d,	// (0x00076ff8) list_single_cale_mrui_row_pane_g1

0xabc5,	// (0x00077030) list_single_cale_mrui_row_pane_t1_ParamLimits

0xabc5,	// (0x00077030) list_single_cale_mrui_row_pane_t1

0x85b7,	// (0x00074a22) list_single_cale_mrui_row_pane_t2_ParamLimits

0x85b7,	// (0x00074a22) list_single_cale_mrui_row_pane_t2

0xabd7,	// (0x00077042) list_single_cale_mrui_row_pane_t3_ParamLimits

0xabd7,	// (0x00077042) list_single_cale_mrui_row_pane_t3

0xac06,	// (0x00077071) list_single_cale_mrui_row_pane_t4_ParamLimits

0xac06,	// (0x00077071) list_single_cale_mrui_row_pane_t4

0x0003,

0xfde6,	// (0x0007c251) list_single_cale_mrui_row_pane_t_ParamLimits

0xfde6,	// (0x0007c251) list_single_cale_mrui_row_pane_t

0x861f,	// (0x00074a8a) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x861f,	// (0x00074a8a) list_single_cmail_header_editor_pane_bg_cp01

0x8645,	// (0x00074ab0) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x8645,	// (0x00074ab0) list_single_cmail_header_editor_pane_bg_cp02

0x8665,	// (0x00074ad0) main_radioblah_text_pane_t1_ParamLimits

0x8665,	// (0x00074ad0) main_radioblah_text_pane_t1

0xe9ff,	// (0x0007ae6a) cam6_indi_pane_cp01

0xea07,	// (0x0007ae72) cam6_mode_pane_cp01

0xea0f,	// (0x0007ae7a) cam6_pano_pane

0xea18,	// (0x0007ae83) cam6_zoom_pane_cp01

0xea20,	// (0x0007ae8b) cam6_pano_image_pane

0xea2b,	// (0x0007ae96) cam6_pano_pane_g1

0xe2ff,	// (0x0007a76a) cam6_pano_pane_g2

0xea34,	// (0x0007ae9f) cam6_pano_pane_g3

0xea3d,	// (0x0007aea8) cam6_pano_pane_g4

0xd2f3,	// (0x0007975e) cam6_pano_pane_g5

0xea46,	// (0x0007aeb1) cam6_pano_pane_g6

0xe9dc,	// (0x0007ae47) cam6_pano_pane_g7

0xea50,	// (0x0007aebb) cam6_pano_pane_g8

0xea59,	// (0x0007aec4) cam6_pano_pane_g9

0x0008,

0xfdef,	// (0x0007c25a) cam6_pano_pane_g

0x948b,	// (0x000758f6) main_browser_tag_pane

0xe8a9,	// (0x0007ad14) grid_navstr_albumart_pane

0xea64,	// (0x0007aecf) cell_navstr_albumart_pane_ParamLimits

0xea64,	// (0x0007aecf) cell_navstr_albumart_pane

0xea84,	// (0x0007aeef) cell_navstr_albumart_pane_g1

0xc711,	// (0x00078b7c) cell_navstr_albumart_pane_g2

0xc721,	// (0x00078b8c) cell_navstr_albumart_pane_g3

0xc719,	// (0x00078b84) cell_navstr_albumart_pane_g4

0x0003,

0xfe02,	// (0x0007c26d) cell_navstr_albumart_pane_g

0x867f,	// (0x00074aea) bt_list_pane_ParamLimits

0x867f,	// (0x00074aea) bt_list_pane

0x8693,	// (0x00074afe) bt_list_pane_t1

0x86a2,	// (0x00074b0d) bt_list_pane_t2

0x0001,

0xfe0b,	// (0x0007c276) bt_list_pane_t

0x948b,	// (0x000758f6) main_cale_prevew_pane

0x86b1,	// (0x00074b1c) popup_cale_preview_window_ParamLimits

0x86b1,	// (0x00074b1c) popup_cale_preview_window

0xa838,	// (0x00076ca3) bg_popup_preview_window_pane_cp05_ParamLimits

0xa838,	// (0x00076ca3) bg_popup_preview_window_pane_cp05

0xea8c,	// (0x0007aef7) list_cale_preview_pane_ParamLimits

0xea8c,	// (0x0007aef7) list_cale_preview_pane

0x86cc,	// (0x00074b37) list_double_cale_preview_pane_ParamLimits

0x86cc,	// (0x00074b37) list_double_cale_preview_pane

0x86de,	// (0x00074b49) list_single_cale_preview_pane_ParamLimits

0x86de,	// (0x00074b49) list_single_cale_preview_pane

0x86f4,	// (0x00074b5f) list_single_cale_preview_pane_g1

0x86fc,	// (0x00074b67) list_single_cale_preview_pane_t1_ParamLimits

0x86fc,	// (0x00074b67) list_single_cale_preview_pane_t1

0x8711,	// (0x00074b7c) list_double_cale_preview_pane_g1

0x8719,	// (0x00074b84) list_double_cale_preview_pane_t1_ParamLimits

0x8719,	// (0x00074b84) list_double_cale_preview_pane_t1

0x872e,	// (0x00074b99) list_double_cale_preview_pane_t2_ParamLimits

0x872e,	// (0x00074b99) list_double_cale_preview_pane_t2

0x0001,

0xfe10,	// (0x0007c27b) list_double_cale_preview_pane_t_ParamLimits

0xfe10,	// (0x0007c27b) list_double_cale_preview_pane_t

0x948b,	// (0x000758f6) main_ezdial_pane

0xa838,	// (0x00076ca3) main_sp_fs_email_pane_ParamLimits

0x7be0,	// (0x0007404b) cmail_ddmenu_btn01_pane_ParamLimits

0x7be0,	// (0x0007404b) cmail_ddmenu_btn01_pane

0x7bf3,	// (0x0007405e) cmail_ddmenu_btn02_pane_ParamLimits

0x7bf3,	// (0x0007405e) cmail_ddmenu_btn02_pane

0x7c16,	// (0x00074081) cmail_ddmenu_btn03_pane_ParamLimits

0x7c16,	// (0x00074081) cmail_ddmenu_btn03_pane

0x7caf,	// (0x0007411a) main_sp_fs_ctrlbar_pane_ParamLimits

0x7cd3,	// (0x0007413e) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x836f,	// (0x000747da) list_cmail_body_pane_ParamLimits

0xe829,	// (0x0007ac94) bg_button_pane_cp12

0xe832,	// (0x0007ac9d) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe832,	// (0x0007ac9d) list_single_cmail_header_detail_pane_g3

0xaac7,	// (0x00076f32) list_single_cmail_header_detail_pane_t2_ParamLimits

0xaac7,	// (0x00076f32) list_single_cmail_header_detail_pane_t2

0x0001,

0xfd93,	// (0x0007c1fe) list_single_cmail_header_detail_pane_t_ParamLimits

0xfd93,	// (0x0007c1fe) list_single_cmail_header_detail_pane_t

0xab1f,	// (0x00076f8a) phacti_term_pane_t2_ParamLimits

0xab1f,	// (0x00076f8a) phacti_term_pane_t2

0x0001,

0xfd9d,	// (0x0007c208) phacti_term_pane_t_ParamLimits

0xfd9d,	// (0x0007c208) phacti_term_pane_t

0xea98,	// (0x0007af03) aid_size_list_single_double

0x8746,	// (0x00074bb1) popup_ezdial_listscroll_window

0x8762,	// (0x00074bcd) popup_number_entry_window_cp01

0xa5a9,	// (0x00076a14) bg_popup_call_pane_cp09

0xeaa4,	// (0x0007af0f) ezdial_list_pane

0xeaac,	// (0x0007af17) scroll_pane_cp23

0xc900,	// (0x00078d6b) bg_button_pane_cp028_ParamLimits

0xc900,	// (0x00078d6b) bg_button_pane_cp028

0x8770,	// (0x00074bdb) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x8770,	// (0x00074bdb) cmail_ddmenu_btn01_pane_g1

0x877c,	// (0x00074be7) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x877c,	// (0x00074be7) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe15,	// (0x0007c280) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe15,	// (0x0007c280) cmail_ddmenu_btn01_pane_g

0xeab4,	// (0x0007af1f) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xeab4,	// (0x0007af1f) cmail_ddmenu_btn01_pane_t1

0xc900,	// (0x00078d6b) bg_button_pane_cp029_ParamLimits

0xc900,	// (0x00078d6b) bg_button_pane_cp029

0x8788,	// (0x00074bf3) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x8788,	// (0x00074bf3) cmail_ddmenu_btn02_pane_g1

0x87a0,	// (0x00074c0b) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x87a0,	// (0x00074c0b) cmail_ddmenu_btn02_pane_t1

0xa838,	// (0x00076ca3) bg_button_pane_cp031_ParamLimits

0xa838,	// (0x00076ca3) bg_button_pane_cp031

0x8788,	// (0x00074bf3) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x8788,	// (0x00074bf3) cmail_ddmenu_btn03_pane_g1

0x87a0,	// (0x00074c0b) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x87a0,	// (0x00074c0b) cmail_ddmenu_btn03_pane_t1

0x5408,	// (0x00071873) cell_dialer2_keypad_pane_t1_ParamLimits

0x5422,	// (0x0007188d) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x5422,	// (0x0007188d) cell_dialer2_keypad_pane_t1_copy1

0x73e9,	// (0x00073854) ncimui_group_button_pane

0xa838,	// (0x00076ca3) main_sp_fs_calendar_pane_ParamLimits

0x8384,	// (0x000747ef) list_single_cmail_header_caption_pane_ParamLimits

0xab34,	// (0x00076f9f) aid_recal_txt_sm_pane

0x948b,	// (0x000758f6) mian_recal_day_pane

0xab6e,	// (0x00076fd9) popup_sp_fs_cale_preview_window_ParamLimits

0xeac9,	// (0x0007af34) list_recal_day_pane

0xac50,	// (0x000770bb) list_single_recal_day_pane_ParamLimits

0xac50,	// (0x000770bb) list_single_recal_day_pane

0xeaf0,	// (0x0007af5b) list_single_recal_day_pane_g1_ParamLimits

0xeaf0,	// (0x0007af5b) list_single_recal_day_pane_g1

0xac62,	// (0x000770cd) list_single_recal_day_pane_g2_ParamLimits

0xac62,	// (0x000770cd) list_single_recal_day_pane_g2

0xac6e,	// (0x000770d9) list_single_recal_day_pane_g3_ParamLimits

0xac6e,	// (0x000770d9) list_single_recal_day_pane_g3

0x87c4,	// (0x00074c2f) list_single_recal_day_pane_g4_ParamLimits

0x87c4,	// (0x00074c2f) list_single_recal_day_pane_g4

0xac7a,	// (0x000770e5) list_single_recal_day_pane_g5_ParamLimits

0xac7a,	// (0x000770e5) list_single_recal_day_pane_g5

0xac86,	// (0x000770f1) list_single_recal_day_pane_g6_ParamLimits

0xac86,	// (0x000770f1) list_single_recal_day_pane_g6

0x0004,

0xfe24,	// (0x0007c28f) list_single_recal_day_pane_g_ParamLimits

0xfe24,	// (0x0007c28f) list_single_recal_day_pane_g

0xac9a,	// (0x00077105) list_single_recal_day_pane_t1

0xacac,	// (0x00077117) list_single_recal_day_pane_t2

0x0001,

0xfe2f,	// (0x0007c29a) list_single_recal_day_pane_t

0x87dc,	// (0x00074c47) ncimui_query_button_pane_ParamLimits

0x87dc,	// (0x00074c47) ncimui_query_button_pane

0x87ec,	// (0x00074c57) ncimui_query_button_pane_t1_ParamLimits

0x87ec,	// (0x00074c57) ncimui_query_button_pane_t1

0xeafc,	// (0x0007af67) ncimui_query_button_pane_t2_ParamLimits

0xeafc,	// (0x0007af67) ncimui_query_button_pane_t2

0x0001,

0xfe34,	// (0x0007c29f) ncimui_query_button_pane_t_ParamLimits

0xfe34,	// (0x0007c29f) ncimui_query_button_pane_t

0x87ff,	// (0x00074c6a) query_button_pane_ParamLimits

0x87ff,	// (0x00074c6a) query_button_pane

0x948b,	// (0x000758f6) bg_button_pane_cp0028

0xeb0f,	// (0x0007af7a) query_button_pane_t1

0x349c,	// (0x0006f907) main_tport_pane_ParamLimits

0x8233,	// (0x0007469e) bg_popup_window_pane_cp01_ParamLimits

0x8233,	// (0x0007469e) bg_popup_window_pane_cp01

0x824e,	// (0x000746b9) heading_pane_cp08_ParamLimits

0x824e,	// (0x000746b9) heading_pane_cp08

0x8261,	// (0x000746cc) heading_pane_cp07_ParamLimits

0x8261,	// (0x000746cc) heading_pane_cp07

0x8308,	// (0x00074773) cell_tport_appsw_pane_g2

0x0002,

0xfd80,	// (0x0007c1eb) cell_tport_appsw_pane_g

0xa7fa,	// (0x00076c65) input_candi_list_open_g1

0xaeac,	// (0x00077317) list_cale_time_pane_g6_ParamLimits

0xaeac,	// (0x00077317) list_cale_time_pane_g6

0x4265,	// (0x000706d0) aid_size_touch_calib_1_ParamLimits

0x4265,	// (0x000706d0) aid_size_touch_calib_1

0x4277,	// (0x000706e2) aid_size_touch_calib_2_ParamLimits

0x4277,	// (0x000706e2) aid_size_touch_calib_2

0x428f,	// (0x000706fa) aid_size_touch_calib_3_ParamLimits

0x428f,	// (0x000706fa) aid_size_touch_calib_3

0x42ad,	// (0x00070718) aid_size_touch_calib_4_ParamLimits

0x42ad,	// (0x00070718) aid_size_touch_calib_4

0x42c5,	// (0x00070730) main_touch_calib_button_group_pane_ParamLimits

0x42c5,	// (0x00070730) main_touch_calib_button_group_pane

0x42dd,	// (0x00070748) main_touch_calib_pane_g1_ParamLimits

0x42ef,	// (0x0007075a) main_touch_calib_pane_g2_ParamLimits

0x4301,	// (0x0007076c) main_touch_calib_pane_g3_ParamLimits

0x4313,	// (0x0007077e) main_touch_calib_pane_g4_ParamLimits

0xf736,	// (0x0007bba1) main_touch_calib_pane_g_ParamLimits

0x4325,	// (0x00070790) main_touch_calib_pane_t1_ParamLimits

0x433f,	// (0x000707aa) main_touch_calib_pane_t2_ParamLimits

0x4359,	// (0x000707c4) main_touch_calib_pane_t3_ParamLimits

0x436d,	// (0x000707d8) main_touch_calib_pane_t4_ParamLimits

0x4381,	// (0x000707ec) main_touch_calib_pane_t5_ParamLimits

0xf73f,	// (0x0007bbaa) main_touch_calib_pane_t_ParamLimits

0xd08b,	// (0x000794f6) list_single_fp_cale_pane_g3_ParamLimits

0xd08b,	// (0x000794f6) list_single_fp_cale_pane_g3

0x94f3,	// (0x0007595e) bg_button_pane_cp012_ParamLimits

0x94f3,	// (0x0007595e) bg_vkb2_func_pane_cp03_ParamLimits

0x6412,	// (0x0007287d) cell_vitu2_function_top_pane_g1_ParamLimits

0x94f3,	// (0x0007595e) bg_vkb2_func_pane_cp04_ParamLimits

0x7374,	// (0x000737df) main_ncimui_button_group_pane_ParamLimits

0x7374,	// (0x000737df) main_ncimui_button_group_pane

0x73d4,	// (0x0007383f) main_ncimui_pane_t3_ParamLimits

0x73d4,	// (0x0007383f) main_ncimui_pane_t3

0xe8bf,	// (0x0007ad2a) phacti_button_group_pane

0xea98,	// (0x0007af03) aid_size_list_single_double_ParamLimits

0x8746,	// (0x00074bb1) popup_ezdial_listscroll_window_ParamLimits

0x8762,	// (0x00074bcd) popup_number_entry_window_cp01_ParamLimits

0x8812,	// (0x00074c7d) phacti_button_pane_ParamLimits

0x8812,	// (0x00074c7d) phacti_button_pane

0x948b,	// (0x000758f6) bg_button_pane_cp14

0xeb1d,	// (0x0007af88) phacti_button_pane_t1

0x8823,	// (0x00074c8e) main_touch_calib_button_pane_ParamLimits

0x8823,	// (0x00074c8e) main_touch_calib_button_pane

0xa3db,	// (0x00076846) bg_button_pane_cp18_ParamLimits

0xa3db,	// (0x00076846) bg_button_pane_cp18

0xeb2b,	// (0x0007af96) main_touch_calib_button_pane_t1_ParamLimits

0xeb2b,	// (0x0007af96) main_touch_calib_button_pane_t1

0xeb41,	// (0x0007afac) main_touch_calib_button_pane_t2_ParamLimits

0xeb41,	// (0x0007afac) main_touch_calib_button_pane_t2

0x0001,

0xfe39,	// (0x0007c2a4) main_touch_calib_button_pane_t_ParamLimits

0xfe39,	// (0x0007c2a4) main_touch_calib_button_pane_t

0x948b,	// (0x000758f6) cell_ncimui_button_pane

0x948b,	// (0x000758f6) bg_button_pane_cp032

0xeb5f,	// (0x0007afca) cell_ncimui_button_pane_t1

0x9e23,	// (0x0007628e) image3_infobar_pane_ParamLimits

0x9e23,	// (0x0007628e) image3_infobar_pane

0x77f7,	// (0x00073c62) fs_bigclock_status_pane_ParamLimits

0x77f7,	// (0x00073c62) fs_bigclock_status_pane

0x7804,	// (0x00073c6f) main_fs_bigclock_clock_pane_ParamLimits

0x7804,	// (0x00073c6f) main_fs_bigclock_clock_pane

0x7822,	// (0x00073c8d) main_fs_bigclock_indi_pane_ParamLimits

0x7822,	// (0x00073c8d) main_fs_bigclock_indi_pane

0x7854,	// (0x00073cbf) main_fs_bigclock_swipe_pane_ParamLimits

0x7854,	// (0x00073cbf) main_fs_bigclock_swipe_pane

0x948b,	// (0x000758f6) main_fs_clock_dumped_data

0xe40c,	// (0x0007a877) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe40c,	// (0x0007a877) list_single_fs_bigclock_indicator_pane_g1

0xe427,	// (0x0007a892) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe427,	// (0x0007a892) list_single_fs_bigclock_indicator_pane_g2

0xe441,	// (0x0007a8ac) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe441,	// (0x0007a8ac) list_single_fs_bigclock_indicator_pane_g3

0xe45b,	// (0x0007a8c6) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe45b,	// (0x0007a8c6) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc5d,	// (0x0007c0c8) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc5d,	// (0x0007c0c8) list_single_fs_bigclock_indicator_pane_g

0xe486,	// (0x0007a8f1) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe486,	// (0x0007a8f1) list_single_fs_bigclock_indicator_pane_t1

0xe4ae,	// (0x0007a919) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe4ae,	// (0x0007a919) list_single_fs_bigclock_indicator_pane_t2

0xe4d6,	// (0x0007a941) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe4d6,	// (0x0007a941) list_single_fs_bigclock_indicator_pane_t3

0xe4fe,	// (0x0007a969) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe4fe,	// (0x0007a969) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc68,	// (0x0007c0d3) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc68,	// (0x0007c0d3) list_single_fs_bigclock_indicator_pane_t

0xeb6d,	// (0x0007afd8) image3_infobar_fav_pane_ParamLimits

0xeb6d,	// (0x0007afd8) image3_infobar_fav_pane

0xeb7d,	// (0x0007afe8) image3_infobar_loc_pane_ParamLimits

0xeb7d,	// (0x0007afe8) image3_infobar_loc_pane

0xeb91,	// (0x0007affc) image3_infobar_time_pane_ParamLimits

0xeb91,	// (0x0007affc) image3_infobar_time_pane

0xcd08,	// (0x00079173) image3_infobar_time_pane_g1

0xeba1,	// (0x0007b00c) image3_infobar_time_pane_t1

0xcd08,	// (0x00079173) image3_infobar_loc_pane_g1

0xebaf,	// (0x0007b01a) image3_infobar_loc_pane_g2

0x0001,

0xfe3e,	// (0x0007c2a9) image3_infobar_loc_pane_g

0xebb7,	// (0x0007b022) image3_infobar_loc_pane_t1

0xcd08,	// (0x00079173) image3_infobar_fav_pane_g1

0xebc5,	// (0x0007b030) image3_infobar_fav_pane_g2

0x0001,

0xfe43,	// (0x0007c2ae) image3_infobar_fav_pane_g

0xebcd,	// (0x0007b038) fs_bigclock_status_battery_pane

0xebd6,	// (0x0007b041) fs_bigclock_status_signal_pane

0xebdf,	// (0x0007b04a) fs_bigclock_status_title_pane

0xebe8,	// (0x0007b053) fs_bigclock_status_signal_pane_g1

0xebf1,	// (0x0007b05c) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe48,	// (0x0007c2b3) fs_bigclock_status_signal_pane_g

0xebf9,	// (0x0007b064) fs_bigclock_status_battery_pane_g1

0xec02,	// (0x0007b06d) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe4d,	// (0x0007c2b8) fs_bigclock_status_battery_pane_g

0xec0a,	// (0x0007b075) fs_bigclock_status_title_pane_t1

0x8838,	// (0x00074ca3) main_fs_bigclock_clock_pane_g1

0x8838,	// (0x00074ca3) main_fs_bigclock_clock_pane_g2

0x8849,	// (0x00074cb4) main_fs_bigclock_clock_pane_g3

0x8849,	// (0x00074cb4) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe52,	// (0x0007c2bd) main_fs_bigclock_clock_pane_g

0x885c,	// (0x00074cc7) main_fs_bigclock_clock_pane_t1

0x8872,	// (0x00074cdd) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe5b,	// (0x0007c2c6) main_fs_bigclock_clock_pane_t

0xec18,	// (0x0007b083) list_single_fs_bigclock_indicator_pane_ParamLimits

0xec18,	// (0x0007b083) list_single_fs_bigclock_indicator_pane

0xec29,	// (0x0007b094) list_single_fs_bigclock_pane_ParamLimits

0xec29,	// (0x0007b094) list_single_fs_bigclock_pane

0xec4f,	// (0x0007b0ba) main_fs_bigclock_indicator_pane_t1

0xec5e,	// (0x0007b0c9) list_single_fs_bigclock_pane_g1

0xec66,	// (0x0007b0d1) list_single_fs_bigclock_pane_t1

0xcd08,	// (0x00079173) main_fs_bigclock_swipe_pane_g1

0xeca9,	// (0x0007b114) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe6c,	// (0x0007c2d7) main_fs_bigclock_swipe_pane_g

0xecb1,	// (0x0007b11c) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xecb1,	// (0x0007b11c) main_fs_bigclock_swipe_pane_t1

0x237b,	// (0x0006e7e6) call_type_pane_ParamLimits

0x948b,	// (0x000758f6) main_btmg_pane

0xabb9,	// (0x00077024) list_single_cale_mrui_row_pane_g2_ParamLimits

0xabb9,	// (0x00077024) list_single_cale_mrui_row_pane_g2

0x0002,

0xfddf,	// (0x0007c24a) list_single_cale_mrui_row_pane_g_ParamLimits

0xfddf,	// (0x0007c24a) list_single_cale_mrui_row_pane_g

0xac3f,	// (0x000770aa) list_recal_vselct_arw_lo_pane

0xeae8,	// (0x0007af53) list_recal_vselct_arw_up_pane

0xac47,	// (0x000770b2) list_recal_vselct_pane

0x88cc,	// (0x00074d37) btmg_button_pane

0x88d6,	// (0x00074d41) main_btmg_pane_g1

0x948b,	// (0x000758f6) bg_button_pane_cp044

0xecce,	// (0x0007b139) btmg_button_pane_t1

0xc8ec,	// (0x00078d57) aid_listscroll_gen

0xa838,	// (0x00076ca3) main_cntbar_detail_pane

0xe80b,	// (0x0007ac76) list_cmail_folder_pane

0xc54f,	// (0x000789ba) sp_fs_scroll_pane_cp03_ParamLimits

0x88e0,	// (0x00074d4b) list_single_fs_dyc_pane_cp01_ParamLimits

0x88e0,	// (0x00074d4b) list_single_fs_dyc_pane_cp01

0xecdc,	// (0x0007b147) aid_size_cmail_indent

0xacbe,	// (0x00077129) list_single_dyc_row_pane_cp01

0x8928,	// (0x00074d93) cntbar_detail_list_pane_ParamLimits

0x8928,	// (0x00074d93) cntbar_detail_list_pane

0x8974,	// (0x00074ddf) main_cntbar_detail_cont_pane_ParamLimits

0x8974,	// (0x00074ddf) main_cntbar_detail_cont_pane

0xc54f,	// (0x000789ba) scroll_pane_cp032_ParamLimits

0xc54f,	// (0x000789ba) scroll_pane_cp032

0x8988,	// (0x00074df3) cntbar_detail_list_event_pane_ParamLimits

0x8988,	// (0x00074df3) cntbar_detail_list_event_pane

0x8938,	// (0x00074da3) cntbar_detail_list_shct_pane

0xad37,	// (0x000771a2) aid_list_gen

0xece5,	// (0x0007b150) aid_scroll

0xecee,	// (0x0007b159) aid_size_touch_scroll_bar

0x6b13,	// (0x00072f7e) aid_list_double

0x6b01,	// (0x00072f6c) aid_list_single

0x6b01,	// (0x00072f6c) aid_list_single_lg

0x8998,	// (0x00074e03) aid_list_z_g_a_sm

0x89a0,	// (0x00074e0b) aid_list_z_g_d

0x89a8,	// (0x00074e13) aid_txt_z_prm

0x89b6,	// (0x00074e21) aid_txt_z_prm_cp01

0x89c4,	// (0x00074e2f) aid_txt_z_sec

0x89d2,	// (0x00074e3d) main_cntbar_detail_cont_pane_g1_ParamLimits

0x89d2,	// (0x00074e3d) main_cntbar_detail_cont_pane_g1

0x89e6,	// (0x00074e51) main_cntbar_detail_cont_pane_g2_ParamLimits

0x89e6,	// (0x00074e51) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe71,	// (0x0007c2dc) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe71,	// (0x0007c2dc) main_cntbar_detail_cont_pane_g

0xecf7,	// (0x0007b162) main_cntbar_detail_cont_pane_t1

0xed05,	// (0x0007b170) main_cntbar_detail_cont_pane_t2

0xed13,	// (0x0007b17e) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe76,	// (0x0007c2e1) main_cntbar_detail_cont_pane_t

0x89f6,	// (0x00074e61) cell_cntbar_detail_list_shct_pane_ParamLimits

0x89f6,	// (0x00074e61) cell_cntbar_detail_list_shct_pane

0xed21,	// (0x0007b18c) cntbar_detail_list_shct_pane_g1

0xed2a,	// (0x0007b195) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe7d,	// (0x0007c2e8) cntbar_detail_list_shct_pane_g

0x8a0a,	// (0x00074e75) cntbar_detail_list_event_pane_g1_ParamLimits

0x8a0a,	// (0x00074e75) cntbar_detail_list_event_pane_g1

0x8a16,	// (0x00074e81) cntbar_detail_list_event_pane_g2_ParamLimits

0x8a16,	// (0x00074e81) cntbar_detail_list_event_pane_g2

0x0005,

0xfe82,	// (0x0007c2ed) cntbar_detail_list_event_pane_g_ParamLimits

0xfe82,	// (0x0007c2ed) cntbar_detail_list_event_pane_g

0x8a82,	// (0x00074eed) cntbar_detail_list_event_pane_t1_ParamLimits

0x8a82,	// (0x00074eed) cntbar_detail_list_event_pane_t1

0x8a97,	// (0x00074f02) cntbar_detail_list_event_pane_t2_ParamLimits

0x8a97,	// (0x00074f02) cntbar_detail_list_event_pane_t2

0x0002,

0xfe8f,	// (0x0007c2fa) cntbar_detail_list_event_pane_t_ParamLimits

0xfe8f,	// (0x0007c2fa) cntbar_detail_list_event_pane_t

0xcd08,	// (0x00079173) cell_cntbar_detail_list_shct_pane_g1

0xb4ae,	// (0x00077919) navi_pane_mv_g3

0xa838,	// (0x00076ca3) main_cntbar_detail_pane_ParamLimits

0x948b,	// (0x000758f6) main_notif_wgt_pane

0x9c0f,	// (0x0007607a) aid_tch_main_mp4_pane_g4

0x9e1b,	// (0x00076286) popup_slider_window_cp02

0xac35,	// (0x000770a0) list_recal_day_event_pane

0x88f6,	// (0x00074d61) cntbar_detail_btn_pane_ParamLimits

0x88f6,	// (0x00074d61) cntbar_detail_btn_pane

0x890f,	// (0x00074d7a) cntbar_detail_btn_pane_cp01_ParamLimits

0x890f,	// (0x00074d7a) cntbar_detail_btn_pane_cp01

0x8938,	// (0x00074da3) cntbar_detail_list_shct_pane_ParamLimits

0x8948,	// (0x00074db3) cntbar_detail_pane_g1_ParamLimits

0x8948,	// (0x00074db3) cntbar_detail_pane_g1

0x8958,	// (0x00074dc3) cntbar_detail_pane_t1_ParamLimits

0x8958,	// (0x00074dc3) cntbar_detail_pane_t1

0x8a22,	// (0x00074e8d) cntbar_detail_list_event_pane_g3_ParamLimits

0x8a22,	// (0x00074e8d) cntbar_detail_list_event_pane_g3

0x8a3a,	// (0x00074ea5) cntbar_detail_list_event_pane_g4_ParamLimits

0x8a3a,	// (0x00074ea5) cntbar_detail_list_event_pane_g4

0x8a52,	// (0x00074ebd) cntbar_detail_list_event_pane_g5_ParamLimits

0x8a52,	// (0x00074ebd) cntbar_detail_list_event_pane_g5

0x8a6a,	// (0x00074ed5) cntbar_detail_list_event_pane_g6_ParamLimits

0x8a6a,	// (0x00074ed5) cntbar_detail_list_event_pane_g6

0x8aac,	// (0x00074f17) cntbar_detail_list_event_pane_t3_ParamLimits

0x8aac,	// (0x00074f17) cntbar_detail_list_event_pane_t3

0x8abe,	// (0x00074f29) popup_notif_wgt_window_ParamLimits

0x8abe,	// (0x00074f29) popup_notif_wgt_window

0x8ad7,	// (0x00074f42) popup_submenu_window_cp01_ParamLimits

0x8ad7,	// (0x00074f42) popup_submenu_window_cp01

0xa5a9,	// (0x00076a14) bg_popup_window_pane_cp10

0xed33,	// (0x0007b19e) listscroll_notif_wgt_pane

0xed45,	// (0x0007b1b0) list_notif_wgt_window

0xed4e,	// (0x0007b1b9) scroll_pane_cp033

0x8aed,	// (0x00074f58) list_notif_wgt_row_pane_ParamLimits

0x8aed,	// (0x00074f58) list_notif_wgt_row_pane

0xed57,	// (0x0007b1c2) aid_size_list_notif_wgt_del

0xed64,	// (0x0007b1cf) list_notif_wgt_row_pane_g1

0xed70,	// (0x0007b1db) list_notif_wgt_row_pane_g2

0xed7f,	// (0x0007b1ea) list_notif_wgt_row_pane_g3

0x0002,

0xfe96,	// (0x0007c301) list_notif_wgt_row_pane_g

0xed8c,	// (0x0007b1f7) list_notif_wgt_row_pane_t1

0xeda2,	// (0x0007b20d) list_notif_wgt_row_pane_t2

0xedb4,	// (0x0007b21f) list_notif_wgt_row_pane_t3

0x0002,

0xfe9d,	// (0x0007c308) list_notif_wgt_row_pane_t

0xd92f,	// (0x00079d9a) list_recal_day_event_pane_g1

0xedc6,	// (0x0007b231) list_recal_day_event_pane_t1

0x948b,	// (0x000758f6) bg_button_pane_cp045

0x8afd,	// (0x00074f68) cntbar_detail_btn_pane_t1

0xc900,	// (0x00078d6b) main_callh_pane_ParamLimits

0xc900,	// (0x00078d6b) main_callh_pane

0x948b,	// (0x000758f6) main_coverflow0_pane

0x948b,	// (0x000758f6) main_wgtman_pane

0x786c,	// (0x00073cd7) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x786c,	// (0x00073cd7) main_fs_bigclock_unlock_btn_pane

0x8300,	// (0x0007476b) bg_button_pane_cp16

0x8310,	// (0x0007477b) cell_tport_appsw_pane_g3

0x8b0b,	// (0x00074f76) cf0_flow_pane_ParamLimits

0x8b0b,	// (0x00074f76) cf0_flow_pane

0xedd5,	// (0x0007b240) listscroll_cf0_pane

0xede0,	// (0x0007b24b) main_cf0_pane_g1

0x8b20,	// (0x00074f8b) main_cf0_pane_t1_ParamLimits

0x8b20,	// (0x00074f8b) main_cf0_pane_t1

0x8b37,	// (0x00074fa2) main_cf0_pane_t2_ParamLimits

0x8b37,	// (0x00074fa2) main_cf0_pane_t2

0x0001,

0xfea9,	// (0x0007c314) main_cf0_pane_t_ParamLimits

0xfea9,	// (0x0007c314) main_cf0_pane_t

0xedf2,	// (0x0007b25d) scroll_pane_cp11

0x8b4e,	// (0x00074fb9) cf0_flow_pane_g1

0x8b56,	// (0x00074fc1) cf0_flow_pane_g2

0x0001,

0xfeae,	// (0x0007c319) cf0_flow_pane_g

0x8b5e,	// (0x00074fc9) cf0_flow_pane_t1

0x948b,	// (0x000758f6) main_call6_pane

0x948b,	// (0x000758f6) main_calllock_pane

0x8b6c,	// (0x00074fd7) call6_btn_grp_pane_ParamLimits

0x8b6c,	// (0x00074fd7) call6_btn_grp_pane

0x8b86,	// (0x00074ff1) call6_pane_g1_ParamLimits

0x8b86,	// (0x00074ff1) call6_pane_g1

0x8b9c,	// (0x00075007) popup_call6_1st_window_ParamLimits

0x8b9c,	// (0x00075007) popup_call6_1st_window

0x8bad,	// (0x00075018) popup_call6_2nd_window_ParamLimits

0x8bad,	// (0x00075018) popup_call6_2nd_window

0x8bbe,	// (0x00075029) cell_call6_btn_pane_ParamLimits

0x8bbe,	// (0x00075029) cell_call6_btn_pane

0xa5a9,	// (0x00076a14) bg_popup_call2_in_pane_cp03

0xedfd,	// (0x0007b268) popup_call6_1st_window_g1

0xee05,	// (0x0007b270) popup_call6_1st_window_g2

0xee0d,	// (0x0007b278) popup_call6_1st_window_g3

0x0002,

0xfeb3,	// (0x0007c31e) popup_call6_1st_window_g

0xee15,	// (0x0007b280) popup_call6_1st_window_t1

0xee24,	// (0x0007b28f) popup_call6_1st_window_t2

0xee32,	// (0x0007b29d) popup_call6_1st_window_t3

0x0002,

0xfeba,	// (0x0007c325) popup_call6_1st_window_t

0xa5a9,	// (0x00076a14) bg_popup_call2_in_pane_cp04

0xedfd,	// (0x0007b268) popup_call6_2nd_window_g1

0xee05,	// (0x0007b270) popup_call6_2nd_window_g2

0xee0d,	// (0x0007b278) popup_call6_2nd_window_g3

0x0002,

0xfeb3,	// (0x0007c31e) popup_call6_2nd_window_g

0xee15,	// (0x0007b280) popup_call6_2nd_window_t1

0x9501,	// (0x0007596c) bg_button_pane_cp15

0xa0a3,	// (0x0007650e) cell_call6_btn_pane_g1

0xa0ac,	// (0x00076517) cell_call6_btn_pane_t1

0x8bd1,	// (0x0007503c) listscroll_wgtman_pane_ParamLimits

0x8bd1,	// (0x0007503c) listscroll_wgtman_pane

0x8bf2,	// (0x0007505d) wgtman_btn_pane_ParamLimits

0x8bf2,	// (0x0007505d) wgtman_btn_pane

0xb2b5,	// (0x00077720) aid_scroll_copy1

0xee40,	// (0x0007b2ab) list_wgtman_pane

0x8c35,	// (0x000750a0) wgtman_btn_pane_g1_ParamLimits

0x8c35,	// (0x000750a0) wgtman_btn_pane_g1

0x8c61,	// (0x000750cc) wgtman_btn_pane_t1_ParamLimits

0x8c61,	// (0x000750cc) wgtman_btn_pane_t1

0xee4a,	// (0x0007b2b5) wgtman_btn_pane_t2_ParamLimits

0xee4a,	// (0x0007b2b5) wgtman_btn_pane_t2

0x0001,

0xfec1,	// (0x0007c32c) wgtman_btn_pane_t_ParamLimits

0xfec1,	// (0x0007c32c) wgtman_btn_pane_t

0x8c9e,	// (0x00075109) listrow_wgtman_pane_ParamLimits

0x8c9e,	// (0x00075109) listrow_wgtman_pane

0x8cb0,	// (0x0007511b) listrow_wgtman_pane_g1

0x8cbd,	// (0x00075128) listrow_wgtman_pane_g2

0x0001,

0xfec6,	// (0x0007c331) listrow_wgtman_pane_g

0x8cdb,	// (0x00075146) listrow_wgtman_pane_t1

0x8cf3,	// (0x0007515e) listrow_wgtman_pane_t2

0x0001,

0xfecb,	// (0x0007c336) listrow_wgtman_pane_t

0x8d19,	// (0x00075184) wait_bar_pane_cp09

0xee61,	// (0x0007b2cc) main_calllock_btn_pane

0xee6b,	// (0x0007b2d6) main_calllock_pane_g1

0x948b,	// (0x000758f6) bg_button_pane_cp17

0xee77,	// (0x0007b2e2) main_calllock_btn_pane_g1

0xee80,	// (0x0007b2eb) main_calllock_btn_pane_t1

0x948b,	// (0x000758f6) main_dialer3_pane

0x948b,	// (0x000758f6) main_fmrd2_pane

0xcd08,	// (0x00079173) main_fs_bigclock_unlock_btn_pane_g1

0x8d33,	// (0x0007519e) main_fs_bigclock_unlock_btn_pane_t1

0x8d41,	// (0x000751ac) area_fmrd2_info_pane_ParamLimits

0x8d41,	// (0x000751ac) area_fmrd2_info_pane

0x8d52,	// (0x000751bd) area_fmrd2_visual_pane_ParamLimits

0x8d52,	// (0x000751bd) area_fmrd2_visual_pane

0x8d60,	// (0x000751cb) fmrd2_indi_pane_ParamLimits

0x8d60,	// (0x000751cb) fmrd2_indi_pane

0x8d6d,	// (0x000751d8) area_fmrd2_visual_pane_g1

0x8d75,	// (0x000751e0) area_fmrd2_visual_pane_t1

0x8d85,	// (0x000751f0) area_fmrd2_visual_pane_t2

0x8d95,	// (0x00075200) area_fmrd2_visual_pane_t3

0x0002,

0xfed5,	// (0x0007c340) area_fmrd2_visual_pane_t

0x8da5,	// (0x00075210) area_fmrd2_info_pane_g1

0x8dad,	// (0x00075218) area_fmrd2_info_pane_t1

0x8dbd,	// (0x00075228) area_fmrd2_info_pane_t2

0x8dcd,	// (0x00075238) area_fmrd2_info_pane_t3

0x8ddd,	// (0x00075248) area_fmrd2_info_pane_t4

0x0003,

0xfedc,	// (0x0007c347) area_fmrd2_info_pane_t

0x8deb,	// (0x00075256) fmrd2_indi_pane_t1

0x8dfb,	// (0x00075266) fmrd2_indi_pane_t2

0x8e0b,	// (0x00075276) fmrd2_indi_pane_t3

0x0002,

0xfee5,	// (0x0007c350) fmrd2_indi_pane_t

0xe46a,	// (0x0007a8d5) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe46a,	// (0x0007a8d5) list_single_fs_bigclock_indicator_pane_g5

0xe51b,	// (0x0007a986) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe51b,	// (0x0007a986) list_single_fs_bigclock_indicator_pane_t5

0x849b,	// (0x00074906) aid_cell_bcale_month_pane_ParamLimits

0x849b,	// (0x00074906) aid_cell_bcale_month_pane

0x84b9,	// (0x00074924) bcale_month_pane_ParamLimits

0x84b9,	// (0x00074924) bcale_month_pane

0x84dd,	// (0x00074948) bcale_preview_pane_ParamLimits

0x84dd,	// (0x00074948) bcale_preview_pane

0xec66,	// (0x0007b0d1) list_single_fs_bigclock_pane_t1_ParamLimits

0xec85,	// (0x0007b0f0) list_single_fs_bigclock_pane_t2_ParamLimits

0xec85,	// (0x0007b0f0) list_single_fs_bigclock_pane_t2

0x0001,

0xfe67,	// (0x0007c2d2) list_single_fs_bigclock_pane_t_ParamLimits

0xfe67,	// (0x0007c2d2) list_single_fs_bigclock_pane_t

0x8d2b,	// (0x00075196) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfed0,	// (0x0007c33b) main_fs_bigclock_unlock_btn_pane_g

0x8e1b,	// (0x00075286) aid_dia3_key_size_ParamLimits

0x8e1b,	// (0x00075286) aid_dia3_key_size

0x8e2a,	// (0x00075295) aid_dia3_listrow_size_ParamLimits

0x8e2a,	// (0x00075295) aid_dia3_listrow_size

0x8e3f,	// (0x000752aa) dia3_keypad_fun_pane_ParamLimits

0x8e3f,	// (0x000752aa) dia3_keypad_fun_pane

0x8e5b,	// (0x000752c6) dia3_keypad_num_pane_ParamLimits

0x8e5b,	// (0x000752c6) dia3_keypad_num_pane

0x8e76,	// (0x000752e1) dia3_listscroll_pane_ParamLimits

0x8e76,	// (0x000752e1) dia3_listscroll_pane

0x8e89,	// (0x000752f4) dia3_numentry_pane_ParamLimits

0x8e89,	// (0x000752f4) dia3_numentry_pane

0xee8f,	// (0x0007b2fa) dia3_list_pane

0xee9a,	// (0x0007b305) scroll_pane_cp12

0x948b,	// (0x000758f6) bg_dia3_numentry_pane

0x8e9d,	// (0x00075308) dia3_numentry_pane_t1

0x8eac,	// (0x00075317) cell_dia3_key_num_pane

0x8eb4,	// (0x0007531f) cell_dia3_key0_fun_pane_ParamLimits

0x8eb4,	// (0x0007531f) cell_dia3_key0_fun_pane

0x8ec8,	// (0x00075333) cell_dia3_key1_fun_pane_ParamLimits

0x8ec8,	// (0x00075333) cell_dia3_key1_fun_pane

0x8ee0,	// (0x0007534b) dia3_listrow_pane

0xe1bd,	// (0x0007a628) bg_dia3_numentry_pane_g1

0x948b,	// (0x000758f6) bg_button_pane_cp21

0xeea5,	// (0x0007b310) cell_dia3_key_num_pane_t1

0xeeb3,	// (0x0007b31e) cell_dia3_key_num_pane_t2

0xeec2,	// (0x0007b32d) cell_dia3_key_num_pane_t3

0xeed1,	// (0x0007b33c) cell_dia3_key_num_pane_t4

0x0003,

0xfeec,	// (0x0007c357) cell_dia3_key_num_pane_t

0x948b,	// (0x000758f6) bg_button_pane_cp19

0x8ef2,	// (0x0007535d) cell_dia3_key0_fun_pane_g1

0x948b,	// (0x000758f6) bg_button_pane_cp20

0x8efa,	// (0x00075365) cell_dia3_key1_fun_pane_g1

0x8f02,	// (0x0007536d) area_left_week_number_pane

0x8f0e,	// (0x00075379) area_top_day_name_pane

0x8f21,	// (0x0007538c) frame_month_view_pane

0xeee0,	// (0x0007b34b) grid_month_view_pane

0x8f34,	// (0x0007539f) cell_top_day_name_pane_ParamLimits

0x8f34,	// (0x0007539f) cell_top_day_name_pane

0x8f61,	// (0x000753cc) cell_area_left_week_number_pane_ParamLimits

0x8f61,	// (0x000753cc) cell_area_left_week_number_pane

0x8f75,	// (0x000753e0) cell_month_view_pane_ParamLimits

0x8f75,	// (0x000753e0) cell_month_view_pane

0xeeee,	// (0x0007b359) frm_month_g1

0x8fa2,	// (0x0007540d) frm_month_g2

0x8fb5,	// (0x00075420) frm_month_g3

0x8fc8,	// (0x00075433) frm_month_g4

0x8fdb,	// (0x00075446) frm_month_g5

0x8fee,	// (0x00075459) frm_month_g6

0x9001,	// (0x0007546c) frm_month_g7

0xeefb,	// (0x0007b366) frm_month_g8

0x9014,	// (0x0007547f) frm_month_g9

0x9024,	// (0x0007548f) frm_month_g10

0x9034,	// (0x0007549f) frm_month_g11

0x9044,	// (0x000754af) frm_month_g12

0x9056,	// (0x000754c1) frm_month_g13

0x9068,	// (0x000754d3) frm_month_g14

0x907c,	// (0x000754e7) frm_month_g15

0x9090,	// (0x000754fb) frm_month_g16

0x000f,

0xfef5,	// (0x0007c360) frm_month_g

0xef08,	// (0x0007b373) cell_top_day_name_pane_t1

0x90a4,	// (0x0007550f) cell_area_left_week_number_pane_g1

0x90b0,	// (0x0007551b) cell_area_left_week_number_pane_t1

0xcf6b,	// (0x000793d6) cell_month_view_pane_g1

0x90c3,	// (0x0007552e) cell_month_view_pane_t1

0x948b,	// (0x000758f6) main_fps_pane

0xe738,	// (0x0007aba3) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe738,	// (0x0007aba3) cmail_ddmenu_btn02_pane_cp1

0xe754,	// (0x0007abbf) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe754,	// (0x0007abbf) cmail_ddmenu_btn02_pane_cp2

0x8794,	// (0x00074bff) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x8794,	// (0x00074bff) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe1a,	// (0x0007c285) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe1a,	// (0x0007c285) cmail_ddmenu_btn02_pane_g

0x87b2,	// (0x00074c1d) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x87b2,	// (0x00074c1d) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe1f,	// (0x0007c28a) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe1f,	// (0x0007c28a) cmail_ddmenu_btn02_pane_t

0x90d6,	// (0x00075541) fps_text_pane_ParamLimits

0x90d6,	// (0x00075541) fps_text_pane

0x90ed,	// (0x00075558) main_fps_pane_g1_ParamLimits

0x90ed,	// (0x00075558) main_fps_pane_g1

0x9107,	// (0x00075572) wait_bar_pane_cp010_ParamLimits

0x9107,	// (0x00075572) wait_bar_pane_cp010

0x9118,	// (0x00075583) fps_text_pane_t1_ParamLimits

0x9118,	// (0x00075583) fps_text_pane_t1

0xddc0,	// (0x0007a22b) cam4_image_uncrop_pane_g1

0xddc9,	// (0x0007a234) cam4_image_uncrop_pane_g2

0x593d,	// (0x00071da8) cam4_image_uncrop_pane_g3

0x5946,	// (0x00071db1) cam4_image_uncrop_pane_g4

0x0003,

0xf8d7,	// (0x0007bd42) cam4_image_uncrop_pane_g

0x8ee0,	// (0x0007534b) dia3_listrow_pane_ParamLimits

0x948b,	// (0x000758f6) main_phob2_pane

0x82d1,	// (0x0007473c) cell_tport_appsw_pane_cp02_ParamLimits

0x82d1,	// (0x0007473c) cell_tport_appsw_pane_cp02

0x82e5,	// (0x00074750) cell_tport_appsw_pane_cp03_ParamLimits

0x82e5,	// (0x00074750) cell_tport_appsw_pane_cp03

0x948b,	// (0x000758f6) phob2_contact_card_pane

0x948b,	// (0x000758f6) phob2_listscroll_pane

0xef1b,	// (0x0007b386) phob2_list_pane

0xef23,	// (0x0007b38e) scroll_pane_cp034

0x9130,	// (0x0007559b) phob2_cc_data_pane_ParamLimits

0x9130,	// (0x0007559b) phob2_cc_data_pane

0x914f,	// (0x000755ba) phob2_cc_listscroll_pane_ParamLimits

0x914f,	// (0x000755ba) phob2_cc_listscroll_pane

0x8c9e,	// (0x00075109) list_double_large_graphic_phob2_pane_ParamLimits

0x8c9e,	// (0x00075109) list_double_large_graphic_phob2_pane

0x916d,	// (0x000755d8) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x916d,	// (0x000755d8) list_double_large_graphic_phob2_pane_g1

0x9183,	// (0x000755ee) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x9183,	// (0x000755ee) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff16,	// (0x0007c381) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff16,	// (0x0007c381) list_double_large_graphic_phob2_pane_g

0x918f,	// (0x000755fa) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x918f,	// (0x000755fa) list_double_large_graphic_phob2_pane_t1

0x91a4,	// (0x0007560f) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x91a4,	// (0x0007560f) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff1b,	// (0x0007c386) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff1b,	// (0x0007c386) list_double_large_graphic_phob2_pane_t

0x948b,	// (0x000758f6) list_highlight_pane_cp024

0x91b6,	// (0x00075621) phob2_cc_button_pane

0x91be,	// (0x00075629) phob2_cc_data_pane_g1_ParamLimits

0x91be,	// (0x00075629) phob2_cc_data_pane_g1

0x91d3,	// (0x0007563e) phob2_cc_data_pane_g2_ParamLimits

0x91d3,	// (0x0007563e) phob2_cc_data_pane_g2

0x0001,

0xff20,	// (0x0007c38b) phob2_cc_data_pane_g_ParamLimits

0xff20,	// (0x0007c38b) phob2_cc_data_pane_g

0x91e3,	// (0x0007564e) phob2_cc_data_pane_t1_ParamLimits

0x91e3,	// (0x0007564e) phob2_cc_data_pane_t1

0x91fb,	// (0x00075666) phob2_cc_data_pane_t2_ParamLimits

0x91fb,	// (0x00075666) phob2_cc_data_pane_t2

0x9213,	// (0x0007567e) phob2_cc_data_pane_t3_ParamLimits

0x9213,	// (0x0007567e) phob2_cc_data_pane_t3

0x0002,

0xff25,	// (0x0007c390) phob2_cc_data_pane_t_ParamLimits

0xff25,	// (0x0007c390) phob2_cc_data_pane_t

0xef2b,	// (0x0007b396) phob2_cc_list_pane_ParamLimits

0xef2b,	// (0x0007b396) phob2_cc_list_pane

0xd9c6,	// (0x00079e31) scroll_pane_cp035_ParamLimits

0xd9c6,	// (0x00079e31) scroll_pane_cp035

0xa838,	// (0x00076ca3) bg_button_pane_cp033

0xef37,	// (0x0007b3a2) phob2_cc_button_pane_g1

0xef43,	// (0x0007b3ae) phob2_cc_button_pane_t1

0xef58,	// (0x0007b3c3) phob2_cc_button_pane_t2

0x0001,

0xff2c,	// (0x0007c397) phob2_cc_button_pane_t

0x922b,	// (0x00075696) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x922b,	// (0x00075696) list_double_large_graphic_phob2_cc_pane

0x925b,	// (0x000756c6) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x925b,	// (0x000756c6) list_double_large_graphic_phob2_cc_pane_g1

0x9267,	// (0x000756d2) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x9267,	// (0x000756d2) list_double_large_graphic_phob2_cc_pane_g2

0x9273,	// (0x000756de) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x9273,	// (0x000756de) list_double_large_graphic_phob2_cc_pane_g3

0x927f,	// (0x000756ea) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x927f,	// (0x000756ea) list_double_large_graphic_phob2_cc_pane_g4

0xacc7,	// (0x00077132) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xacc7,	// (0x00077132) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff31,	// (0x0007c39c) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff31,	// (0x0007c39c) list_double_large_graphic_phob2_cc_pane_g

0x928b,	// (0x000756f6) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x928b,	// (0x000756f6) list_double_large_graphic_phob2_cc_pane_t1

0x92b4,	// (0x0007571f) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x92b4,	// (0x0007571f) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff3c,	// (0x0007c3a7) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff3c,	// (0x0007c3a7) list_double_large_graphic_phob2_cc_pane_t

0xef6a,	// (0x0007b3d5) list_highlight_pane_cp025_ParamLimits

0xef6a,	// (0x0007b3d5) list_highlight_pane_cp025

0xa838,	// (0x00076ca3) bg_button_pane_cp033_ParamLimits

0xef37,	// (0x0007b3a2) phob2_cc_button_pane_g1_ParamLimits

0xef43,	// (0x0007b3ae) phob2_cc_button_pane_t1_ParamLimits

0xef58,	// (0x0007b3c3) phob2_cc_button_pane_t2_ParamLimits

0xff2c,	// (0x0007c397) phob2_cc_button_pane_t_ParamLimits

0x0305,	// (0x0006c770) popup_wgtman_window

0xd80b,	// (0x00079c76) scroll_pane_cp038

0x8c17,	// (0x00075082) wgtman_btn_pane_cp_01_ParamLimits

0x8c17,	// (0x00075082) wgtman_btn_pane_cp_01

0xef78,	// (0x0007b3e3) wgtman_content_pane

0xef81,	// (0x0007b3ec) wgtman_heading_pane

0x948b,	// (0x000758f6) bg_heading_pane_cp02

0xef8a,	// (0x0007b3f5) wgtman_heading_pane_g1

0xef92,	// (0x0007b3fd) wgtman_heading_pane_t1

0xefa0,	// (0x0007b40b) scroll_pane_cp036

0xefa8,	// (0x0007b413) wgtman_list_pane

0xefb0,	// (0x0007b41b) wgtman_list_pane_t1_ParamLimits

0xefb0,	// (0x0007b41b) wgtman_list_pane_t1

0x9ea7,	// (0x00076312) cam4_grid_pane

0x65fa,	// (0x00072a65) bg_button_pane_cp015_ParamLimits

0x660c,	// (0x00072a77) bg_button_pane_cp016_ParamLimits

0x661f,	// (0x00072a8a) bg_button_pane_cp017_ParamLimits

0x6677,	// (0x00072ae2) popup_vitu2_query_window_g3_ParamLimits

0x6677,	// (0x00072ae2) popup_vitu2_query_window_g3

0x6734,	// (0x00072b9f) popup_vitu2_query_window_t6_ParamLimits

0x6734,	// (0x00072b9f) popup_vitu2_query_window_t6

0x675f,	// (0x00072bca) popup_vitu2_query_window_t7_ParamLimits

0x675f,	// (0x00072bca) popup_vitu2_query_window_t7

0xddc0,	// (0x0007a22b) cam4_grid_pane_g1

0xddc9,	// (0x0007a234) cam4_grid_pane_g2

0xefca,	// (0x0007b435) cam4_grid_pane_g3

0xefd3,	// (0x0007b43e) cam4_grid_pane_g4

0x0003,

0xff41,	// (0x0007c3ac) cam4_grid_pane_g

0x125d,	// (0x0006d6c8) aid_placing_vt_slider_lsc_ParamLimits

0x1568,	// (0x0006d9d3) vidtel_button_pane_ParamLimits

0x1568,	// (0x0006d9d3) vidtel_button_pane

0x948b,	// (0x000758f6) bg_button_pane_cp034

0xefde,	// (0x0007b449) vidtel_button_pane_g1

0xefe6,	// (0x0007b451) vidtel_button_pane_t1

0xd90d,	// (0x00079d78) aid_size_vtel_slider_touch

0xd9c6,	// (0x00079e31) scroll_pane_cp039

0x7552,	// (0x000739bd) ncim_query_button_pane_cp01_ParamLimits

0x7571,	// (0x000739dc) ncimui_query_pane_g1_ParamLimits

0xa838,	// (0x00076ca3) input_focus_pane_cp012_ParamLimits

0xe1fb,	// (0x0007a666) ncim_query_entry_pane_t1_ParamLimits

0xd9c6,	// (0x00079e31) scroll_pane_cp039_ParamLimits

0xb399,	// (0x00077804) navi_pane_bcale_mc_g1

0xb3a1,	// (0x0007780c) navi_pane_bcale_mc_t1

0xe788,	// (0x0007abf3) main_sp_fs_email_pane_g1

0xe794,	// (0x0007abff) main_sp_fs_email_pane_g2

0x0001,

0xfcd2,	// (0x0007c13d) main_sp_fs_email_pane_g

0xe9f2,	// (0x0007ae5d) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe9f2,	// (0x0007ae5d) list_single_cale_mrui_row_pane_g3

0x87d2,	// (0x00074c3d) list_single_recal_day_pane_g5_event_pane

0xac92,	// (0x000770fd) list_single_recal_day_pane_g7

0xeffc,	// (0x0007b467) list_recal_day_event_pane_cp01

0xf005,	// (0x0007b470) list_recal_vselct_arw_lo_pane_cp01

0xf00d,	// (0x0007b478) list_recal_vselct_arw_up_pane_cp01

0xf015,	// (0x0007b480) list_recal_vselct_pane_cp01

0xd92f,	// (0x00079d9a) list_recal_day_event_pane_cp01_g1

0xacd3,	// (0x0007713e) list_recal_day_event_pane_cp01_t1

0xac9a,	// (0x00077105) list_single_recal_day_pane_t1_ParamLimits

0xacac,	// (0x00077117) list_single_recal_day_pane_t2_ParamLimits

0xfe2f,	// (0x0007c29a) list_single_recal_day_pane_t_ParamLimits

0xa316,	// (0x00076781) bg_notes_pane_ParamLimits

0xa3b9,	// (0x00076824) list_notes_pane_ParamLimits

0x064b,	// (0x0006cab6) scroll_pane_cp06_ParamLimits

0xa3db,	// (0x00076846) main_notes_pane_ParamLimits

0xa838,	// (0x00076ca3) main_welc_pane

0x92f4,	// (0x0007575f) main_welc_body_pane_ParamLimits

0x92f4,	// (0x0007575f) main_welc_body_pane

0x9312,	// (0x0007577d) main_welc_opti_pane_ParamLimits

0x9312,	// (0x0007577d) main_welc_opti_pane

0x9366,	// (0x000757d1) main_welc_pane_t1_ParamLimits

0x9366,	// (0x000757d1) main_welc_pane_t1

0x93e1,	// (0x0007584c) main_welc_body_row_pane_ParamLimits

0x93e1,	// (0x0007584c) main_welc_body_row_pane

0xe9e4,	// (0x0007ae4f) main_welc_opti_row_pane_ParamLimits

0xe9e4,	// (0x0007ae4f) main_welc_opti_row_pane

0xf01f,	// (0x0007b48a) main_welc_opti_row_pane_g1

0x93f5,	// (0x00075860) main_welc_opti_row_pane_t1

0xf027,	// (0x0007b492) main_welc_body_row_pane_t1

0xed3d,	// (0x0007b1a8) popup_notif_wgt_heading_pane

0xed57,	// (0x0007b1c2) aid_size_list_notif_wgt_del_ParamLimits

0xed64,	// (0x0007b1cf) list_notif_wgt_row_pane_g1_ParamLimits

0xed70,	// (0x0007b1db) list_notif_wgt_row_pane_g2_ParamLimits

0xed7f,	// (0x0007b1ea) list_notif_wgt_row_pane_g3_ParamLimits

0xfe96,	// (0x0007c301) list_notif_wgt_row_pane_g_ParamLimits

0xed8c,	// (0x0007b1f7) list_notif_wgt_row_pane_t1_ParamLimits

0xeda2,	// (0x0007b20d) list_notif_wgt_row_pane_t2_ParamLimits

0xedb4,	// (0x0007b21f) list_notif_wgt_row_pane_t3_ParamLimits

0xfe9d,	// (0x0007c308) list_notif_wgt_row_pane_t_ParamLimits

0x8cb0,	// (0x0007511b) listrow_wgtman_pane_g1_ParamLimits

0x8cbd,	// (0x00075128) listrow_wgtman_pane_g2_ParamLimits

0xfec6,	// (0x0007c331) listrow_wgtman_pane_g_ParamLimits

0x8cdb,	// (0x00075146) listrow_wgtman_pane_t1_ParamLimits

0x8cf3,	// (0x0007515e) listrow_wgtman_pane_t2_ParamLimits

0xfecb,	// (0x0007c336) listrow_wgtman_pane_t_ParamLimits

0x8d19,	// (0x00075184) wait_bar_pane_cp09_ParamLimits

0x948b,	// (0x000758f6) bg_popup_heading_pane_cp02

0xf036,	// (0x0007b4a1) popup_notif_wgt_heading_pane_g1

0xf03e,	// (0x0007b4a9) popup_notif_wgt_heading_pane_t1

0x948b,	// (0x000758f6) main_vids_pane

0x948b,	// (0x000758f6) vids_listscroll_pane

0x9404,	// (0x0007586f) scroll_pane_cp040

0x948b,	// (0x000758f6) vids_list_pane

0x940f,	// (0x0007587a) vids_list_double_pane_ParamLimits

0x940f,	// (0x0007587a) vids_list_double_pane

0x9420,	// (0x0007588b) vids_list_double_pane_g1

0x9429,	// (0x00075894) vids_list_double_pane_t1

0x9439,	// (0x000758a4) vids_list_double_pane_t2

0x0001,

0xff58,	// (0x0007c3c3) vids_list_double_pane_t

0x94f3,	// (0x0007595e) main_ncimui_pane_ParamLimits

0x7388,	// (0x000737f3) main_ncimui_pane_g1_ParamLimits

0x7394,	// (0x000737ff) main_ncimui_pane_g2_ParamLimits

0x7394,	// (0x000737ff) main_ncimui_pane_g2

0x0001,

0xfbd3,	// (0x0007c03e) main_ncimui_pane_g_ParamLimits

0xfbd3,	// (0x0007c03e) main_ncimui_pane_g

0x932d,	// (0x00075798) main_welc_pane_g1_ParamLimits

0x932d,	// (0x00075798) main_welc_pane_g1

0x9342,	// (0x000757ad) main_welc_pane_g2_ParamLimits

0x9342,	// (0x000757ad) main_welc_pane_g2

0x0002,

0xff4a,	// (0x0007c3b5) main_welc_pane_g_ParamLimits

0xff4a,	// (0x0007c3b5) main_welc_pane_g

0xa316,	// (0x00076781) listscroll_mce_pane_ParamLimits

0xb4ee,	// (0x00077959) wait_bar_pane_cp10

0xc8f4,	// (0x00078d5f) main_cale_day_pane_ParamLimits

0xc8f4,	// (0x00078d5f) main_cale_week_pane_ParamLimits

0xa316,	// (0x00076781) main_messa_pane_ParamLimits

0x4bea,	// (0x00071055) main_clock2_btn_pane_ParamLimits

0x4bea,	// (0x00071055) main_clock2_btn_pane

0xd113,	// (0x0007957e) main_clock2_btn_pane_cp01_ParamLimits

0xd113,	// (0x0007957e) main_clock2_btn_pane_cp01

0xe9ad,	// (0x0007ae18) list_cale_mrui_pane_ParamLimits

0xedea,	// (0x0007b255) main_cf0_pane_g2

0x0001,

0xfea4,	// (0x0007c30f) main_cf0_pane_g

0x8f02,	// (0x0007536d) area_left_week_number_pane_ParamLimits

0x8f0e,	// (0x00075379) area_top_day_name_pane_ParamLimits

0x8f21,	// (0x0007538c) frame_month_view_pane_ParamLimits

0xeee0,	// (0x0007b34b) grid_month_view_pane_ParamLimits

0xeeee,	// (0x0007b359) frm_month_g1_ParamLimits

0x8fa2,	// (0x0007540d) frm_month_g2_ParamLimits

0x8fb5,	// (0x00075420) frm_month_g3_ParamLimits

0x8fc8,	// (0x00075433) frm_month_g4_ParamLimits

0x8fdb,	// (0x00075446) frm_month_g5_ParamLimits

0x8fee,	// (0x00075459) frm_month_g6_ParamLimits

0x9001,	// (0x0007546c) frm_month_g7_ParamLimits

0xeefb,	// (0x0007b366) frm_month_g8_ParamLimits

0x9014,	// (0x0007547f) frm_month_g9_ParamLimits

0x9024,	// (0x0007548f) frm_month_g10_ParamLimits

0x9034,	// (0x0007549f) frm_month_g11_ParamLimits

0x9044,	// (0x000754af) frm_month_g12_ParamLimits

0x9056,	// (0x000754c1) frm_month_g13_ParamLimits

0x9068,	// (0x000754d3) frm_month_g14_ParamLimits

0x907c,	// (0x000754e7) frm_month_g15_ParamLimits

0x9090,	// (0x000754fb) frm_month_g16_ParamLimits

0xfef5,	// (0x0007c360) frm_month_g_ParamLimits

0xef08,	// (0x0007b373) cell_top_day_name_pane_t1_ParamLimits

0x90a4,	// (0x0007550f) cell_area_left_week_number_pane_g1_ParamLimits

0x90b0,	// (0x0007551b) cell_area_left_week_number_pane_t1_ParamLimits

0xcf6b,	// (0x000793d6) cell_month_view_pane_g1_ParamLimits

0x90c3,	// (0x0007552e) cell_month_view_pane_t1_ParamLimits

0xa30e,	// (0x00076779) main_clock2_btn_pane_g1

0xf04c,	// (0x0007b4b7) main_clock2_btn_pane_t1

0xa838,	// (0x00076ca3) listscroll_cmail_pane_ParamLimits

0xe788,	// (0x0007abf3) main_sp_fs_email_pane_g1_ParamLimits

0xe794,	// (0x0007abff) main_sp_fs_email_pane_g2_ParamLimits

0xfcd2,	// (0x0007c13d) main_sp_fs_email_pane_g_ParamLimits

0xeac9,	// (0x0007af34) list_recal_day_pane_ParamLimits

0xeada,	// (0x0007af45) mian_recal_day_pane_t1

0x7f36,	// (0x000743a1) list_single_dyc_row_text_pane_t4_ParamLimits

0x7f36,	// (0x000743a1) list_single_dyc_row_text_pane_t4

0x7f7f,	// (0x000743ea) list_single_dyc_row_text_pane_t5_ParamLimits

0x7f7f,	// (0x000743ea) list_single_dyc_row_text_pane_t5

0xaa08,	// (0x00076e73) list_single_dyc_row_text_pane_t6_ParamLimits

0xaa08,	// (0x00076e73) list_single_dyc_row_text_pane_t6

0x21e6,	// (0x0006e651) aid_mgn_list_cale_time_pane

0x94f3,	// (0x0007595e) main_gallery2_pane_ParamLimits

0xd129,	// (0x00079594) main_clock2_pane_cp01_t1

0xd139,	// (0x000795a4) main_clock2_pane_cp01_t3

0x0001,

0xf7a9,	// (0x0007bc14) main_clock2_pane_cp01_t

0x0a05,	// (0x0006ce70) cale_week_scroll_pane_g16_ParamLimits

0x0a05,	// (0x0006ce70) cale_week_scroll_pane_g16

0xa5a9,	// (0x00076a14) vorec_slider_pane

0xefe6,	// (0x0007b451) vidtel_button_pane_t1_ParamLimits

0x8838,	// (0x00074ca3) main_fs_bigclock_clock_pane_g1_ParamLimits

0x8838,	// (0x00074ca3) main_fs_bigclock_clock_pane_g2_ParamLimits

0x8849,	// (0x00074cb4) main_fs_bigclock_clock_pane_g3_ParamLimits

0x8849,	// (0x00074cb4) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfe52,	// (0x0007c2bd) main_fs_bigclock_clock_pane_g_ParamLimits

0x885c,	// (0x00074cc7) main_fs_bigclock_clock_pane_t1_ParamLimits

0x8872,	// (0x00074cdd) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfe5b,	// (0x0007c2c6) main_fs_bigclock_clock_pane_t_ParamLimits

0x43e1,	// (0x0007084c) main_mup3_lyrics_pane_ParamLimits

0x43e1,	// (0x0007084c) main_mup3_lyrics_pane

0x946f,	// (0x000758da) main_mup3_lyrics_pane_t1_ParamLimits

0x946f,	// (0x000758da) main_mup3_lyrics_pane_t1

0x9bf9,	// (0x00076064) aid_main_mp4_pane_t1_area

0x9c03,	// (0x0007606e) aid_main_mp4_pane_t2_area

0x9caf,	// (0x0007611a) main_mp4_pane_g7_ParamLimits

0x9caf,	// (0x0007611a) main_mp4_pane_g7

0x9cbb,	// (0x00076126) main_mp4_pane_g8_ParamLimits

0x9cbb,	// (0x00076126) main_mp4_pane_g8

0x5710,	// (0x00071b7b) aid_call6_pane_g1_size

0x9245,	// (0x000756b0) list_double_large_graphic_phob2_other_pane_ParamLimits

0x9245,	// (0x000756b0) list_double_large_graphic_phob2_other_pane

0xae4b,	// (0x000772b6) list_double_large_graphic_phob2_other_pane_g1

0x948b,	// (0x000758f6) list_highlight_pane_cp026

0xa838,	// (0x00076ca3) main_welc_pane_ParamLimits

0x7c3c,	// (0x000740a7) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0x7c3c,	// (0x000740a7) main_sp_fs_ctrlbar_pane_g3

0x7c56,	// (0x000740c1) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0x7c56,	// (0x000740c1) main_sp_fs_ctrlbar_pane_g4

0x7c8a,	// (0x000740f5) toolbar2_fixed_button_pane_cp01

0x7c95,	// (0x00074100) toolbar2_fixed_button_pane_cp02

0x7ca2,	// (0x0007410d) toolbar2_fixed_button_pane_cp03

0x92dd,	// (0x00075748) list_welc_entry_pane_ParamLimits

0x92dd,	// (0x00075748) list_welc_entry_pane

0x9357,	// (0x000757c2) main_welc_pane_g3_ParamLimits

0x9357,	// (0x000757c2) main_welc_pane_g3

0x9384,	// (0x000757ef) main_welc_pane_t2_ParamLimits

0x9384,	// (0x000757ef) main_welc_pane_t2

0x939e,	// (0x00075809) main_welc_pane_t3_ParamLimits

0x939e,	// (0x00075809) main_welc_pane_t3

0x0002,

0xff51,	// (0x0007c3bc) main_welc_pane_t_ParamLimits

0xff51,	// (0x0007c3bc) main_welc_pane_t

0x93b5,	// (0x00075820) welc_button_pane_ParamLimits

0x93b5,	// (0x00075820) welc_button_pane

0x93cc,	// (0x00075837) welc_service_logo_pane_ParamLimits

0x93cc,	// (0x00075837) welc_service_logo_pane

0xf05a,	// (0x0007b4c5) list_single_welc_entry_pane_ParamLimits

0xf05a,	// (0x0007b4c5) list_single_welc_entry_pane

0xf06b,	// (0x0007b4d6) list_single_welc_entry_pane_g1

0xf073,	// (0x0007b4de) list_single_welc_entry_pane_t1

0xf081,	// (0x0007b4ec) list_single_welc_entry_pane_t2

0x0001,

0xff5d,	// (0x0007c3c8) list_single_welc_entry_pane_t

0x948b,	// (0x000758f6) bg_button_pane_cp035

0xf08f,	// (0x0007b4fa) welc_button_pane_t1

0xf09d,	// (0x0007b508) welc_service_logo_pane_g1

0xf0a6,	// (0x0007b511) welc_service_logo_pane_g2

0x0001,

0xff62,	// (0x0007c3cd) welc_service_logo_pane_g
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
	};

} // end of namespace AknLayoutScalable_Abrw_phl_apps_qhd_lsc_tch_Small
