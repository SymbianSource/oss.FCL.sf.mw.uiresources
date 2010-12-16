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

#include "aknlayoutscalable_abrw_pvp4_apps_vga4_prt_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pvp4_apps_vga4_prt_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x0008a705 };

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
0x26a4,	// (0x0008cda9) Screen

0x26b0,	// (0x0008cdb5) application_window

0x2704,	// (0x0008ce09) area_bottom_pane_ParamLimits

0x2704,	// (0x0008ce09) area_bottom_pane

0x2762,	// (0x0008ce67) area_top_pane_ParamLimits

0x2762,	// (0x0008ce67) area_top_pane

0x27c6,	// (0x0008cecb) call_video_uplink_pane_ParamLimits

0x27c6,	// (0x0008cecb) call_video_uplink_pane

0x2805,	// (0x0008cf0a) main_pane_ParamLimits

0x2805,	// (0x0008cf0a) main_pane

0xe4eb,	// (0x00098bf0) context_pane

0x5759,	// (0x0008fe5e) navi_pane

0x5782,	// (0x0008fe87) popup_cale_events_window_ParamLimits

0x5782,	// (0x0008fe87) popup_cale_events_window

0xe4fe,	// (0x00098c03) popup_mup_playback_window

0x579a,	// (0x0008fe9f) signal_pane

0xc749,	// (0x00096e4e) main_browser_pane

0xc958,	// (0x0009705d) main_burst_pane

0x55bb,	// (0x0008fcc0) main_calc_pane

0xe4d1,	// (0x00098bd6) main_cale_day_pane

0x2ca1,	// (0x0008d3a6) main_cale_month_pane

0xe4d1,	// (0x00098bd6) main_cale_week_pane

0xc958,	// (0x0009705d) main_call_pane

0xc3d7,	// (0x00096adc) main_call_poc_pane

0xc958,	// (0x0009705d) main_camera_pane

0xc958,	// (0x0009705d) main_chi_dic_pane

0xd0f2,	// (0x000977f7) main_clock_pane

0xc3d7,	// (0x00096adc) main_fmradio_pane

0xc958,	// (0x0009705d) main_graph_messa_pane

0xc3d7,	// (0x00096adc) main_help_pane

0xc749,	// (0x00096e4e) main_im_pane

0xc632,	// (0x00096d37) main_image_pane_ParamLimits

0xc632,	// (0x00096d37) main_image_pane

0xc3d7,	// (0x00096adc) main_location2_pane

0xc958,	// (0x0009705d) main_location_pane

0xc632,	// (0x00096d37) main_messa_pane

0xc3d7,	// (0x00096adc) main_mp2_pane

0xc958,	// (0x0009705d) main_mp_pane

0xc3d7,	// (0x00096adc) main_msg_pane

0xc3d7,	// (0x00096adc) main_mup_eq_pane

0xc3d7,	// (0x00096adc) main_mup_pane

0xc749,	// (0x00096e4e) main_notes_pane

0xc3d7,	// (0x00096adc) main_pec_pane

0xc3d7,	// (0x00096adc) main_phob_pane

0xc3d7,	// (0x00096adc) main_pinb_pane

0xc3d7,	// (0x00096adc) main_postcard_pane

0xc3d7,	// (0x00096adc) main_qdial_pane

0xc958,	// (0x0009705d) main_skin_pane

0xc3d7,	// (0x00096adc) main_smil2_pane

0xc958,	// (0x0009705d) main_smil_pane

0xc958,	// (0x0009705d) main_video_pane

0xc958,	// (0x0009705d) main_video_tele_pane

0xc632,	// (0x00096d37) main_viewer_pane_ParamLimits

0xc632,	// (0x00096d37) main_viewer_pane

0xc958,	// (0x0009705d) main_vorec_pane

0x5609,	// (0x0008fd0e) popup_blid_sat_info_window_ParamLimits

0x5609,	// (0x0008fd0e) popup_blid_sat_info_window

0x562f,	// (0x0008fd34) popup_dyc_status_message_window_ParamLimits

0x562f,	// (0x0008fd34) popup_dyc_status_message_window

0x563f,	// (0x0008fd44) popup_grid_large_graphic_window_ParamLimits

0x563f,	// (0x0008fd44) popup_grid_large_graphic_window

0x56d4,	// (0x0008fdd9) popup_loc_request_window_ParamLimits

0x56d4,	// (0x0008fdd9) popup_loc_request_window

0x572d,	// (0x0008fe32) popup_wml_address_window_ParamLimits

0x572d,	// (0x0008fe32) popup_wml_address_window

0x548b,	// (0x0008fb90) call_muted_g1

0x517b,	// (0x0008f880) popup_call_audio_conf_window_ParamLimits

0x517b,	// (0x0008f880) popup_call_audio_conf_window

0x549b,	// (0x0008fba0) popup_call_audio_first_window_ParamLimits

0x549b,	// (0x0008fba0) popup_call_audio_first_window

0x54db,	// (0x0008fbe0) popup_call_audio_in_window_ParamLimits

0x54db,	// (0x0008fbe0) popup_call_audio_in_window

0x54ff,	// (0x0008fc04) popup_call_audio_out_window_ParamLimits

0x54ff,	// (0x0008fc04) popup_call_audio_out_window

0x5521,	// (0x0008fc26) popup_call_audio_second_window_ParamLimits

0x5521,	// (0x0008fc26) popup_call_audio_second_window

0x5551,	// (0x0008fc56) popup_call_audio_wait_window_ParamLimits

0x5551,	// (0x0008fc56) popup_call_audio_wait_window

0x5572,	// (0x0008fc77) popup_number_entry_window_ParamLimits

0x5572,	// (0x0008fc77) popup_number_entry_window

0x0aa2,	// (0x0008b1a7) bg_popup_call_pane_cp05_ParamLimits

0x0aa2,	// (0x0008b1a7) bg_popup_call_pane_cp05

0x0ac2,	// (0x0008b1c7) popup_number_entry_window_t1

0x0ad5,	// (0x0008b1da) popup_number_entry_window_t2

0x0ae7,	// (0x0008b1ec) popup_number_entry_window_t3

0x0003,

0xf01d,	// (0x00099722) popup_number_entry_window_t

0x0b2e,	// (0x0008b233) text_title_cp2

0x0b41,	// (0x0008b246) bg_popup_call_pane_cp_ParamLimits

0x0b41,	// (0x0008b246) bg_popup_call_pane_cp

0x0b4f,	// (0x0008b254) call_thumbnail_pane

0x0b57,	// (0x0008b25c) popup_call_audio_in_window_g1_ParamLimits

0x0b57,	// (0x0008b25c) popup_call_audio_in_window_g1

0x0b63,	// (0x0008b268) popup_call_audio_in_window_g2_ParamLimits

0x0b63,	// (0x0008b268) popup_call_audio_in_window_g2

0x0b6f,	// (0x0008b274) popup_call_audio_in_window_g3_ParamLimits

0x0b6f,	// (0x0008b274) popup_call_audio_in_window_g3

0x0002,

0xf026,	// (0x0009972b) popup_call_audio_in_window_g_ParamLimits

0xf026,	// (0x0009972b) popup_call_audio_in_window_g

0x0b7b,	// (0x0008b280) popup_call_audio_in_window_t1_ParamLimits

0x0b7b,	// (0x0008b280) popup_call_audio_in_window_t1

0x0b97,	// (0x0008b29c) popup_call_audio_in_window_t2_ParamLimits

0x0b97,	// (0x0008b29c) popup_call_audio_in_window_t2

0x0bb3,	// (0x0008b2b8) popup_call_audio_in_window_t3_ParamLimits

0x0bb3,	// (0x0008b2b8) popup_call_audio_in_window_t3

0x0002,

0xf02d,	// (0x00099732) popup_call_audio_in_window_t_ParamLimits

0xf02d,	// (0x00099732) popup_call_audio_in_window_t

0x0b41,	// (0x0008b246) bg_popup_call_pane_cp01_ParamLimits

0x0b41,	// (0x0008b246) bg_popup_call_pane_cp01

0x0b4f,	// (0x0008b254) call_thumbnail_pane_cp02

0x0bc6,	// (0x0008b2cb) call_type_pane_cp022

0x0bce,	// (0x0008b2d3) popup_call_audio_out_window_g1_ParamLimits

0x0bce,	// (0x0008b2d3) popup_call_audio_out_window_g1

0x1548,	// (0x0008bc4d) popup_call_audio_out_window_g2_ParamLimits

0x1548,	// (0x0008bc4d) popup_call_audio_out_window_g2

0x1554,	// (0x0008bc59) popup_call_audio_out_window_g3_ParamLimits

0x1554,	// (0x0008bc59) popup_call_audio_out_window_g3

0x0002,

0xf034,	// (0x00099739) popup_call_audio_out_window_g_ParamLimits

0xf034,	// (0x00099739) popup_call_audio_out_window_g

0x1566,	// (0x0008bc6b) popup_call_audio_out_window_t1_ParamLimits

0x1566,	// (0x0008bc6b) popup_call_audio_out_window_t1

0x157e,	// (0x0008bc83) popup_call_audio_out_window_t2_ParamLimits

0x157e,	// (0x0008bc83) popup_call_audio_out_window_t2

0x0001,

0xf03b,	// (0x00099740) popup_call_audio_out_window_t_ParamLimits

0xf03b,	// (0x00099740) popup_call_audio_out_window_t

0x1593,	// (0x0008bc98) bg_popup_call_pane_ParamLimits

0x1593,	// (0x0008bc98) bg_popup_call_pane

0x29e4,	// (0x0008d0e9) call_thumbnail_pane_cp_ParamLimits

0x29e4,	// (0x0008d0e9) call_thumbnail_pane_cp

0x1617,	// (0x0008bd1c) call_type_pane_cp01_ParamLimits

0x1617,	// (0x0008bd1c) call_type_pane_cp01

0x165b,	// (0x0008bd60) popup_call_audio_first_window_g1_ParamLimits

0x165b,	// (0x0008bd60) popup_call_audio_first_window_g1

0x16a7,	// (0x0008bdac) popup_call_audio_first_window_g2_ParamLimits

0x16a7,	// (0x0008bdac) popup_call_audio_first_window_g2

0x0001,

0xf040,	// (0x00099745) popup_call_audio_first_window_g_ParamLimits

0xf040,	// (0x00099745) popup_call_audio_first_window_g

0x16eb,	// (0x0008bdf0) popup_call_audio_first_window_t1_ParamLimits

0x16eb,	// (0x0008bdf0) popup_call_audio_first_window_t1

0x1797,	// (0x0008be9c) popup_call_audio_first_window_t4_ParamLimits

0x1797,	// (0x0008be9c) popup_call_audio_first_window_t4

0xc3a8,	// (0x00096aad) popup_call_audio_first_window_t5_ParamLimits

0xc3a8,	// (0x00096aad) popup_call_audio_first_window_t5

0x0002,

0xf045,	// (0x0009974a) popup_call_audio_first_window_t_ParamLimits

0xf045,	// (0x0009974a) popup_call_audio_first_window_t

0xc3d7,	// (0x00096adc) bg_popup_call_pane_cp02

0xc3e1,	// (0x00096ae6) call_type_pane_cp023

0xc3e9,	// (0x00096aee) popup_call_audio_wait_window_g1

0xc3f1,	// (0x00096af6) popup_call_audio_wait_window_g2

0x0001,

0xf04c,	// (0x00099751) popup_call_audio_wait_window_g

0xc3f9,	// (0x00096afe) popup_call_audio_wait_window_t3

0xc407,	// (0x00096b0c) bg_popup_call_pane_cp03_ParamLimits

0xc407,	// (0x00096b0c) bg_popup_call_pane_cp03

0xc467,	// (0x00096b6c) call_thumbnail_pane_cp011_ParamLimits

0xc467,	// (0x00096b6c) call_thumbnail_pane_cp011

0xc473,	// (0x00096b78) call_type_pane_cp034_ParamLimits

0xc473,	// (0x00096b78) call_type_pane_cp034

0xc4af,	// (0x00096bb4) popup_call_audio_second_window_g1_ParamLimits

0xc4af,	// (0x00096bb4) popup_call_audio_second_window_g1

0xc4eb,	// (0x00096bf0) popup_call_audio_second_window_g2_ParamLimits

0xc4eb,	// (0x00096bf0) popup_call_audio_second_window_g2

0x0001,

0xf051,	// (0x00099756) popup_call_audio_second_window_g_ParamLimits

0xf051,	// (0x00099756) popup_call_audio_second_window_g

0xc527,	// (0x00096c2c) popup_call_audio_second_window_t1_ParamLimits

0xc527,	// (0x00096c2c) popup_call_audio_second_window_t1

0xc5a8,	// (0x00096cad) popup_call_audio_second_window_t2_ParamLimits

0xc5a8,	// (0x00096cad) popup_call_audio_second_window_t2

0xc5de,	// (0x00096ce3) popup_call_audio_second_window_t3_ParamLimits

0xc5de,	// (0x00096ce3) popup_call_audio_second_window_t3

0x0002,

0xf056,	// (0x0009975b) popup_call_audio_second_window_t_ParamLimits

0xf056,	// (0x0009975b) popup_call_audio_second_window_t

0xc3d7,	// (0x00096adc) bg_popup_call_pane_cp04

0xc614,	// (0x00096d19) list_conf_pane

0xc61c,	// (0x00096d21) popup_call_audio_conf_window_t1

0xc62a,	// (0x00096d2f) call_thumbnail_pane_g1

0xc632,	// (0x00096d37) bg_pinb_pane_ParamLimits

0xc632,	// (0x00096d37) bg_pinb_pane

0xc640,	// (0x00096d45) find_pinb_pane

0xc632,	// (0x00096d37) listscroll_pinb_pane_ParamLimits

0xc632,	// (0x00096d37) listscroll_pinb_pane

0xc64a,	// (0x00096d4f) pinb_bg_pane_g1

0xc64a,	// (0x00096d4f) pinb_bg_pane_g2

0xc64a,	// (0x00096d4f) pinb_bg_pane_g3

0xc64a,	// (0x00096d4f) pinb_bg_pane_g4

0xc64a,	// (0x00096d4f) pinb_bg_pane_g5

0xc64a,	// (0x00096d4f) pinb_bg_pane_g6

0xc64a,	// (0x00096d4f) pinb_bg_pane_g7

0xc64a,	// (0x00096d4f) pinb_bg_pane_g8

0xc64a,	// (0x00096d4f) pinb_bg_pane_g9

0xc64a,	// (0x00096d4f) pinb_bg_pane_g10

0x0009,

0xf05d,	// (0x00099762) pinb_bg_pane_g

0x0a98,	// (0x0008b19d) grid_pinb_pane

0x0a98,	// (0x0008b19d) list_pinb_pane

0x153a,	// (0x0008bc3f) scroll_pane_cp01_ParamLimits

0x153a,	// (0x0008bc3f) scroll_pane_cp01

0xc654,	// (0x00096d59) find_pinb_pane_g1_ParamLimits

0xc654,	// (0x00096d59) find_pinb_pane_g1

0xc66c,	// (0x00096d71) find_pinb_pane_t1

0xc67e,	// (0x00096d83) find_pinb_pane_t2

0x0001,

0xf077,	// (0x0009977c) find_pinb_pane_t

0xc693,	// (0x00096d98) input_focus_pane_cp01_ParamLimits

0xc693,	// (0x00096d98) input_focus_pane_cp01

0xc69f,	// (0x00096da4) cell_pinb_pane_ParamLimits

0xc69f,	// (0x00096da4) cell_pinb_pane

0xc6ad,	// (0x00096db2) cell_pinb_pane_g1_ParamLimits

0xc6ad,	// (0x00096db2) cell_pinb_pane_g1

0xc6bb,	// (0x00096dc0) cell_pinb_pane_g2_ParamLimits

0xc6bb,	// (0x00096dc0) cell_pinb_pane_g2

0xc6bb,	// (0x00096dc0) cell_pinb_pane_g3_ParamLimits

0xc6bb,	// (0x00096dc0) cell_pinb_pane_g3

0x0002,

0xf07c,	// (0x00099781) cell_pinb_pane_g_ParamLimits

0xf07c,	// (0x00099781) cell_pinb_pane_g

0xc3d7,	// (0x00096adc) grid_highlight_pane_cp01

0xc69f,	// (0x00096da4) list_pinb_item_pane_ParamLimits

0xc69f,	// (0x00096da4) list_pinb_item_pane

0x0a98,	// (0x0008b19d) list_highlight_pane_cp02

0xc6c9,	// (0x00096dce) list_pinb_item_pane_g1_ParamLimits

0xc6c9,	// (0x00096dce) list_pinb_item_pane_g1

0xc6bb,	// (0x00096dc0) list_pinb_item_pane_g2_ParamLimits

0xc6bb,	// (0x00096dc0) list_pinb_item_pane_g2

0xc6ad,	// (0x00096db2) list_pinb_item_pane_g3_ParamLimits

0xc6ad,	// (0x00096db2) list_pinb_item_pane_g3

0xc6bb,	// (0x00096dc0) list_pinb_item_pane_g4_ParamLimits

0xc6bb,	// (0x00096dc0) list_pinb_item_pane_g4

0x0003,

0xf083,	// (0x00099788) list_pinb_item_pane_g_ParamLimits

0xf083,	// (0x00099788) list_pinb_item_pane_g

0xc6d7,	// (0x00096ddc) list_pinb_item_pane_t1_ParamLimits

0xc6d7,	// (0x00096ddc) list_pinb_item_pane_t1

0x2a22,	// (0x0008d127) calc_display_pane

0x2a40,	// (0x0008d145) calc_paper_pane

0x2a5c,	// (0x0008d161) grid_calc_pane

0x0a98,	// (0x0008b19d) bg_list_pane_cp01

0xc6eb,	// (0x00096df0) clock_g1

0xc6eb,	// (0x00096df0) clock_g2

0x0001,

0xf08c,	// (0x00099791) clock_g

0xc6f5,	// (0x00096dfa) clock_t1_ParamLimits

0xc6f5,	// (0x00096dfa) clock_t1

0xc709,	// (0x00096e0e) clock_t2_ParamLimits

0xc709,	// (0x00096e0e) clock_t2

0xc709,	// (0x00096e0e) clock_t3_ParamLimits

0xc709,	// (0x00096e0e) clock_t3

0xc709,	// (0x00096e0e) clock_t4_ParamLimits

0xc709,	// (0x00096e0e) clock_t4

0xc6f5,	// (0x00096dfa) clock_t5_ParamLimits

0xc6f5,	// (0x00096dfa) clock_t5

0xc709,	// (0x00096e0e) clock_t6_ParamLimits

0xc709,	// (0x00096e0e) clock_t6

0xc709,	// (0x00096e0e) clock_t7_ParamLimits

0xc709,	// (0x00096e0e) clock_t7

0xc709,	// (0x00096e0e) clock_t8_ParamLimits

0xc709,	// (0x00096e0e) clock_t8

0xc709,	// (0x00096e0e) clock_t9_ParamLimits

0xc709,	// (0x00096e0e) clock_t9

0x0008,

0xf091,	// (0x00099796) clock_t_ParamLimits

0xf091,	// (0x00099796) clock_t

0x0a98,	// (0x0008b19d) popup_clock_analogue_window_cp02

0x0a98,	// (0x0008b19d) popup_clock_digital_window_cp01

0xc3d7,	// (0x00096adc) listscroll_help_pane

0xc3d7,	// (0x00096adc) phob_pre_status_pane

0xc71d,	// (0x00096e22) grid_qdial_pane

0xc632,	// (0x00096d37) listscroll_mce_pane

0xc632,	// (0x00096d37) bg_notes_pane

0xc727,	// (0x00096e2c) list_notes_pane

0x2a88,	// (0x0008d18d) scroll_pane_cp06

0xc735,	// (0x00096e3a) bg_calc_paper_pane

0x2a97,	// (0x0008d19c) list_calc_pane

0xc749,	// (0x00096e4e) bg_calc_display_pane

0x2ab1,	// (0x0008d1b6) calc_display_pane_t1

0x2ac6,	// (0x0008d1cb) calc_display_pane_t2

0x2adb,	// (0x0008d1e0) calc_display_pane_t3

0x0002,

0xf0a4,	// (0x000997a9) calc_display_pane_t

0x2aed,	// (0x0008d1f2) cell_calc_pane_ParamLimits

0x2aed,	// (0x0008d1f2) cell_calc_pane

0xc755,	// (0x00096e5a) bg_calc_paper_pane_g1

0xc761,	// (0x00096e66) bg_calc_paper_pane_g2

0xc76d,	// (0x00096e72) bg_calc_paper_pane_g3

0xc779,	// (0x00096e7e) bg_calc_paper_pane_g4

0xc785,	// (0x00096e8a) bg_calc_paper_pane_g5

0x2b1c,	// (0x0008d221) bg_calc_paper_pane_g6

0x2b2d,	// (0x0008d232) bg_calc_paper_pane_g7

0x2b3e,	// (0x0008d243) bg_calc_paper_pane_g8

0x0007,

0xf0ab,	// (0x000997b0) bg_calc_paper_pane_g

0x2b4f,	// (0x0008d254) calc_bg_paper_pane_g9

0x2b60,	// (0x0008d265) list_calc_item_pane_ParamLimits

0x2b60,	// (0x0008d265) list_calc_item_pane

0xc791,	// (0x00096e96) list_calc_item_pane_g1

0x2b81,	// (0x0008d286) list_calc_item_pane_t1_ParamLimits

0x2b81,	// (0x0008d286) list_calc_item_pane_t1

0x2b93,	// (0x0008d298) list_calc_item_pane_t2_ParamLimits

0x2b93,	// (0x0008d298) list_calc_item_pane_t2

0x0001,

0xf0bc,	// (0x000997c1) list_calc_item_pane_t_ParamLimits

0xf0bc,	// (0x000997c1) list_calc_item_pane_t

0xc64a,	// (0x00096d4f) cell_calc_pane_g1

0xc79e,	// (0x00096ea3) grid_highlight_pane_cp02

0x13da,	// (0x0008badf) bg_calc_display_pane_g1

0x2bc3,	// (0x0008d2c8) bg_calc_display_pane_g2

0x13c8,	// (0x0008bacd) bg_calc_display_pane_g3

0x0002,

0xf0c6,	// (0x000997cb) bg_calc_display_pane_g

0x2bcd,	// (0x0008d2d2) cell_qdial_pane_ParamLimits

0x2bcd,	// (0x0008d2d2) cell_qdial_pane

0x2be3,	// (0x0008d2e8) cell_qdial_pane_g1_ParamLimits

0x2be3,	// (0x0008d2e8) cell_qdial_pane_g1

0x2bf0,	// (0x0008d2f5) cell_qdial_pane_g2_ParamLimits

0x2bf0,	// (0x0008d2f5) cell_qdial_pane_g2

0xc7e4,	// (0x00096ee9) cell_qdial_pane_g3_ParamLimits

0xc7e4,	// (0x00096ee9) cell_qdial_pane_g3

0x0003,

0xf0cd,	// (0x000997d2) cell_qdial_pane_g_ParamLimits

0xf0cd,	// (0x000997d2) cell_qdial_pane_g

0x2c0e,	// (0x0008d313) cell_qdial_pane_t1_ParamLimits

0x2c0e,	// (0x0008d313) cell_qdial_pane_t1

0x2c26,	// (0x0008d32b) cell_qdial_pane_t2_ParamLimits

0x2c26,	// (0x0008d32b) cell_qdial_pane_t2

0x2c39,	// (0x0008d33e) cell_qdial_pane_t3_ParamLimits

0x2c39,	// (0x0008d33e) cell_qdial_pane_t3

0x0002,

0xf0d6,	// (0x000997db) cell_qdial_pane_t_ParamLimits

0xf0d6,	// (0x000997db) cell_qdial_pane_t

0xc3d7,	// (0x00096adc) grid_highlight_pane_cp04

0xc7f0,	// (0x00096ef5) thumbnail_qdial_pane_ParamLimits

0xc7f0,	// (0x00096ef5) thumbnail_qdial_pane

0xc84c,	// (0x00096f51) list_help_pane

0xc855,	// (0x00096f5a) scroll_pane_cp02

0x2c4c,	// (0x0008d351) help_list_pane_t1_ParamLimits

0x2c4c,	// (0x0008d351) help_list_pane_t1

0xc85e,	// (0x00096f63) bg_notes_pane_g2

0xc866,	// (0x00096f6b) bg_notes_pane_g3

0xc86e,	// (0x00096f73) notes_bg_pane_g1

0xc876,	// (0x00096f7b) notes_bg_pane_g4

0xc87e,	// (0x00096f83) notes_bg_pane_g5

0xc886,	// (0x00096f8b) notes_bg_pane_g6

0xc88e,	// (0x00096f93) notes_bg_pane_g7

0xc896,	// (0x00096f9b) notes_bg_pane_g8

0xc89e,	// (0x00096fa3) notes_bg_pane_g9

0x0006,

0xf0f4,	// (0x000997f9) notes_bg_pane_g

0x2c73,	// (0x0008d378) list_notes_text_pane_ParamLimits

0x2c73,	// (0x0008d378) list_notes_text_pane

0xc8a6,	// (0x00096fab) list_notes_text_pane_g1

0xc8af,	// (0x00096fb4) list_notes_text_pane_t1

0x2ca1,	// (0x0008d3a6) listscroll_cale_week_pane

0x2cd6,	// (0x0008d3db) bg_cale_heading_pane

0x2cff,	// (0x0008d404) bg_cale_pane_cp01

0x2d21,	// (0x0008d426) cale_week_corner_pane

0x2d40,	// (0x0008d445) cale_week_day_heading_pane

0x2d6e,	// (0x0008d473) cale_week_scroll_pane_g1

0x2d92,	// (0x0008d497) cale_week_scroll_pane_g2

0x2daa,	// (0x0008d4af) cale_week_scroll_pane_g3

0x2dc2,	// (0x0008d4c7) cale_week_scroll_pane_g4

0x2dda,	// (0x0008d4df) cale_week_scroll_pane_g5

0x2df2,	// (0x0008d4f7) cale_week_scroll_pane_g6

0x2e12,	// (0x0008d517) cale_week_scroll_pane_g7

0x2e32,	// (0x0008d537) cale_week_scroll_pane_g8

0x2e52,	// (0x0008d557) cale_week_scroll_pane_g9

0x2e6f,	// (0x0008d574) cale_week_scroll_pane_g10

0x2e8c,	// (0x0008d591) cale_week_scroll_pane_g11

0x2eab,	// (0x0008d5b0) cale_week_scroll_pane_g12

0x2ed0,	// (0x0008d5d5) cale_week_scroll_pane_g13

0x2ef9,	// (0x0008d5fe) cale_week_scroll_pane_g14

0x2f22,	// (0x0008d627) cale_week_scroll_pane_g15

0x000f,

0xf103,	// (0x00099808) cale_week_scroll_pane_g

0x2f6b,	// (0x0008d670) cale_week_time_pane

0x2f8b,	// (0x0008d690) grid_cale_week_pane

0xc8e0,	// (0x00096fe5) scroll_pane_cp08

0x2fbc,	// (0x0008d6c1) cell_cale_week_pane_ParamLimits

0x2fbc,	// (0x0008d6c1) cell_cale_week_pane

0x304c,	// (0x0008d751) cale_week_day_heading_pane_t1

0x3074,	// (0x0008d779) cale_week_day_heading_pane_t2

0x30a1,	// (0x0008d7a6) cale_week_day_heading_pane_t3

0x30ce,	// (0x0008d7d3) cale_week_day_heading_pane_t4

0x30fb,	// (0x0008d800) cale_week_day_heading_pane_t5

0x3128,	// (0x0008d82d) cale_week_day_heading_pane_t6

0x3155,	// (0x0008d85a) cale_week_day_heading_pane_t7

0x0006,

0xf124,	// (0x00099829) cale_week_day_heading_pane_t

0xc8fd,	// (0x00097002) bg_cale_side_pane

0x317d,	// (0x0008d882) cale_week_time_pane_t1

0x31a1,	// (0x0008d8a6) cale_week_time_pane_t2

0x31c5,	// (0x0008d8ca) cale_week_time_pane_t3

0x31e9,	// (0x0008d8ee) cale_week_time_pane_t4

0x320d,	// (0x0008d912) cale_week_time_pane_t5

0x3233,	// (0x0008d938) cale_week_time_pane_t6

0x325b,	// (0x0008d960) cale_week_time_pane_t7

0x3287,	// (0x0008d98c) cale_week_time_pane_t8

0x0007,

0xf133,	// (0x00099838) cale_week_time_pane_t

0x32b7,	// (0x0008d9bc) cell_cale_week_pane_g2

0x32db,	// (0x0008d9e0) cell_cale_week_pane_g3_ParamLimits

0x32db,	// (0x0008d9e0) cell_cale_week_pane_g3

0xc90b,	// (0x00097010) grid_highlight_pane_cp07

0xc913,	// (0x00097018) listscroll_gms_pane

0xc91d,	// (0x00097022) grid_gms_pane

0xc926,	// (0x0009702b) listscroll_gms_pane_g1

0xc92e,	// (0x00097033) listscroll_gms_pane_g2

0x0001,

0xf144,	// (0x00099849) listscroll_gms_pane_g

0x32f3,	// (0x0008d9f8) scroll_pane_cp010

0x32fe,	// (0x0008da03) cell_gms_pane_ParamLimits

0x32fe,	// (0x0008da03) cell_gms_pane

0x3311,	// (0x0008da16) cell_gms_pane_g1

0xc936,	// (0x0009703b) cell_gms_pane_g2

0xc93e,	// (0x00097043) cell_gms_pane_g3

0xc947,	// (0x0009704c) cell_gms_pane_g4

0x0003,

0xf149,	// (0x0009984e) cell_gms_pane_g

0xc950,	// (0x00097055) grid_highlight_pane_cp09

0x540f,	// (0x0008fb14) phob_pre_status_pane_g1

0x5417,	// (0x0008fb1c) phob_pre_status_pane_g2

0x541f,	// (0x0008fb24) phob_pre_status_pane_g3

0x5427,	// (0x0008fb2c) phob_pre_status_pane_g4

0x0004,

0xf4ef,	// (0x00099bf4) phob_pre_status_pane_g

0x5437,	// (0x0008fb3c) phob_pre_status_pane_t1

0x5447,	// (0x0008fb4c) phob_pre_status_pane_t2

0x5457,	// (0x0008fb5c) phob_pre_status_pane_t3

0x0002,

0xf4fa,	// (0x00099bff) phob_pre_status_pane_t

0xc958,	// (0x0009705d) bg_list_pane_cp05

0x3321,	// (0x0008da26) grid_vorec_pane

0x332b,	// (0x0008da30) vorec_t1

0x3339,	// (0x0008da3e) vorec_t2

0x3347,	// (0x0008da4c) vorec_t3

0x3355,	// (0x0008da5a) vorec_t4

0xa4c1,	// (0x00094bc6) vorec_t5

0xa4cf,	// (0x00094bd4) vorec_t6

0x0004,

0xf152,	// (0x00099857) vorec_t

0xa4dd,	// (0x00094be2) wait_bar_pane_cp01

0x3371,	// (0x0008da76) cell_vorec_pane_ParamLimits

0x3371,	// (0x0008da76) cell_vorec_pane

0x3386,	// (0x0008da8b) cell_vorec_pane_g1

0xc3d7,	// (0x00096adc) grid_highlight_pane_cp05

0xc69f,	// (0x00096da4) cams_zoom_pane

0xc69f,	// (0x00096da4) image_vga_pane

0xc6bb,	// (0x00096dc0) main_camera_pane_g1

0xc6bb,	// (0x00096dc0) main_camera_pane_g2

0xc6bb,	// (0x00096dc0) main_camera_pane_g3

0xc6bb,	// (0x00096dc0) main_camera_pane_g4

0xc6bb,	// (0x00096dc0) main_camera_pane_g5

0xc6bb,	// (0x00096dc0) main_camera_pane_g6

0xc6bb,	// (0x00096dc0) main_camera_pane_g7

0x0007,

0xf15d,	// (0x00099862) main_camera_pane_g

0xc709,	// (0x00096e0e) main_camera_pane_t1

0xc709,	// (0x00096e0e) main_camera_pane_t2

0x0001,

0xf16e,	// (0x00099873) main_camera_pane_t

0x3390,	// (0x0008da95) cams_zoom_pane_cp_ParamLimits

0x3390,	// (0x0008da95) cams_zoom_pane_cp

0x33be,	// (0x0008dac3) image_cif_pane_ParamLimits

0x33be,	// (0x0008dac3) image_cif_pane

0x0a98,	// (0x0008b19d) image_subqcif_pane

0x33cc,	// (0x0008dad1) main_video_pane_g1_ParamLimits

0x33cc,	// (0x0008dad1) main_video_pane_g1

0x33f4,	// (0x0008daf9) main_video_pane_g2_ParamLimits

0x33f4,	// (0x0008daf9) main_video_pane_g2

0x3427,	// (0x0008db2c) main_video_pane_g3_ParamLimits

0x3427,	// (0x0008db2c) main_video_pane_g3

0x3427,	// (0x0008db2c) main_video_pane_g4_ParamLimits

0x3427,	// (0x0008db2c) main_video_pane_g4

0x3455,	// (0x0008db5a) main_video_pane_g5_ParamLimits

0x3455,	// (0x0008db5a) main_video_pane_g5

0xc960,	// (0x00097065) main_video_pane_g6_ParamLimits

0xc960,	// (0x00097065) main_video_pane_g6

0x0006,

0xf173,	// (0x00099878) main_video_pane_g_ParamLimits

0xf173,	// (0x00099878) main_video_pane_g

0x3471,	// (0x0008db76) main_video_pane_t1_ParamLimits

0x3471,	// (0x0008db76) main_video_pane_t1

0xc6eb,	// (0x00096df0) cams_zoom_pane_g1

0xc6eb,	// (0x00096df0) cams_zoom_pane_g2

0xc6eb,	// (0x00096df0) cams_zoom_pane_g3

0xc6eb,	// (0x00096df0) cams_zoom_pane_g4

0x0003,

0xf182,	// (0x00099887) cams_zoom_pane_g

0xc69f,	// (0x00096da4) grid_cams_pane

0xc69f,	// (0x00096da4) linegrid_cams_pane

0x34ab,	// (0x0008dbb0) cell_cams_pane_ParamLimits

0x34ab,	// (0x0008dbb0) cell_cams_pane

0x0a98,	// (0x0008b19d) cams_burst_image_pane

0xc6eb,	// (0x00096df0) cell_cams_pane_g1

0x0a98,	// (0x0008b19d) grid_highlight_pane_cp03

0xc64a,	// (0x00096d4f) mp_bg_pane_g1

0x0a98,	// (0x0008b19d) bg_list_pane_cp03

0x0a98,	// (0x0008b19d) bg_mp_pane

0x0a98,	// (0x0008b19d) grid_mp_pane

0xc6eb,	// (0x00096df0) media_player_g1

0xce7c,	// (0x00097581) media_player_t1

0xce7c,	// (0x00097581) media_player_t2

0xce7c,	// (0x00097581) media_player_t3

0xce7c,	// (0x00097581) media_player_t4

0xce7c,	// (0x00097581) media_player_t5

0xce7c,	// (0x00097581) media_player_t6

0xce7c,	// (0x00097581) media_player_t7

0x0006,

0xf4d9,	// (0x00099bde) media_player_t

0x0a98,	// (0x0008b19d) wait_bar_pane_cp02

0xf4be,	// (0x00099bc3) main_usb_pane_t

0xd0f2,	// (0x000977f7) cell_mp_pane

0xc64a,	// (0x00096d4f) cell_mp_pane_g1

0xc3d7,	// (0x00096adc) grid_highlight_pane_cp06

0xc97a,	// (0x0009707f) grid_skin_colour_pane

0xc982,	// (0x00097087) list_highlight_pane_cp03

0x34c0,	// (0x0008dbc5) skin_g1

0xc98a,	// (0x0009708f) skin_t1

0xc999,	// (0x0009709e) skin_t2

0x0001,

0xf1b0,	// (0x000998b5) skin_t

0x34ca,	// (0x0008dbcf) cell_skin_colour_pane_ParamLimits

0x34ca,	// (0x0008dbcf) cell_skin_colour_pane

0xc9a7,	// (0x000970ac) cell_skin_colour_pane_g1

0x354a,	// (0x0008dc4f) call_video_g1_ParamLimits

0x354a,	// (0x0008dc4f) call_video_g1

0x355a,	// (0x0008dc5f) call_video_g2_ParamLimits

0x355a,	// (0x0008dc5f) call_video_g2

0x0001,

0xf1b5,	// (0x000998ba) call_video_g_ParamLimits

0xf1b5,	// (0x000998ba) call_video_g

0x35aa,	// (0x0008dcaf) call_video_uplink_pane_cp1_ParamLimits

0x35aa,	// (0x0008dcaf) call_video_uplink_pane_cp1

0xc9b9,	// (0x000970be) call_video_uplink_pane_cp2

0x3666,	// (0x0008dd6b) video_down_crop_pane_ParamLimits

0x3666,	// (0x0008dd6b) video_down_crop_pane

0x3757,	// (0x0008de5c) video_down_pane_ParamLimits

0x3757,	// (0x0008de5c) video_down_pane

0xc9c1,	// (0x000970c6) video_down_subqcif_pane_ParamLimits

0xc9c1,	// (0x000970c6) video_down_subqcif_pane

0xc9db,	// (0x000970e0) video_down_subqcif_pane_cp_ParamLimits

0xc9db,	// (0x000970e0) video_down_subqcif_pane_cp

0xca01,	// (0x00097106) im_reading_pane_ParamLimits

0xca01,	// (0x00097106) im_reading_pane

0x3874,	// (0x0008df79) im_writing_pane_ParamLimits

0x3874,	// (0x0008df79) im_writing_pane

0x3892,	// (0x0008df97) im_reading_pane_t1

0xca1b,	// (0x00097120) list_im_pane

0xca2c,	// (0x00097131) scroll_pane_cp07

0x38d4,	// (0x0008dfd9) im_writing_pane_t1_ParamLimits

0x38d4,	// (0x0008dfd9) im_writing_pane_t1

0xca45,	// (0x0009714a) im_writing_pane_t2_ParamLimits

0xca45,	// (0x0009714a) im_writing_pane_t2

0x0001,

0xf1bf,	// (0x000998c4) im_writing_pane_t_ParamLimits

0xf1bf,	// (0x000998c4) im_writing_pane_t

0xc3d7,	// (0x00096adc) input_focus_pane_cp04

0xc3d7,	// (0x00096adc) input_focus_pane_cp05

0x38e6,	// (0x0008dfeb) list_im_single_pane_ParamLimits

0x38e6,	// (0x0008dfeb) list_im_single_pane

0xca62,	// (0x00097167) list_single_im_pane_t1

0xc958,	// (0x0009705d) blid_accuracy_pane

0xc958,	// (0x0009705d) blid_compass_pane

0xe489,	// (0x00098b8e) main_location_t1

0xe489,	// (0x00098b8e) main_location_t2

0xe489,	// (0x00098b8e) main_location_t3

0x0002,

0xf4e8,	// (0x00099bed) main_location_t

0xc3d7,	// (0x00096adc) aid_levels_location

0xc64a,	// (0x00096d4f) blid_accuracy_pane_g1

0xc64a,	// (0x00096d4f) blid_accuracy_pane_g2

0x0001,

0xf213,	// (0x00099918) blid_accuracy_pane_g

0xca9c,	// (0x000971a1) wml_content_pane

0xcada,	// (0x000971df) wml_button_pane_ParamLimits

0xcada,	// (0x000971df) wml_button_pane

0x38ff,	// (0x0008e004) wml_list_single_large_pane_ParamLimits

0x38ff,	// (0x0008e004) wml_list_single_large_pane

0x3921,	// (0x0008e026) wml_list_single_medium_pane_ParamLimits

0x3921,	// (0x0008e026) wml_list_single_medium_pane

0x3944,	// (0x0008e049) wml_list_single_small_pane_ParamLimits

0x3944,	// (0x0008e049) wml_list_single_small_pane

0xcaee,	// (0x000971f3) wml_selection_box_pane_ParamLimits

0xcaee,	// (0x000971f3) wml_selection_box_pane

0xcb01,	// (0x00097206) wml_list_single_pane_t1

0xcb10,	// (0x00097215) wml_list_single_medium_pane_t1

0xcb1f,	// (0x00097224) wml_list_single_large_pane_t1

0xcb2e,	// (0x00097233) input_focus_pane_cp02_ParamLimits

0xcb2e,	// (0x00097233) input_focus_pane_cp02

0xcb41,	// (0x00097246) wml_selection_box_pane_g1

0xcb4a,	// (0x0009724f) wml_selection_box_pane_t1_ParamLimits

0xcb4a,	// (0x0009724f) wml_selection_box_pane_t1

0xc632,	// (0x00096d37) bg_wml_button_pane_ParamLimits

0xc632,	// (0x00096d37) bg_wml_button_pane

0xcb62,	// (0x00097267) wml_button_pane_g1

0xcb6a,	// (0x0009726f) wml_button_pane_t1

0xcb62,	// (0x00097267) wml_button_bg_pane_g1

0xcb7a,	// (0x0009727f) wml_button_bg_pane_g2

0xcb82,	// (0x00097287) wml_button_bg_pane_g3

0xcb8a,	// (0x0009728f) wml_button_bg_pane_g4

0xcb92,	// (0x00097297) wml_button_bg_pane_g5

0xcb9a,	// (0x0009729f) wml_button_bg_pane_g6

0xcba2,	// (0x000972a7) wml_button_bg_pane_g7

0xcbaa,	// (0x000972af) wml_button_bg_pane_g8

0xcbb2,	// (0x000972b7) wml_button_bg_pane_g9

0x0008,

0xf1c4,	// (0x000998c9) wml_button_bg_pane_g

0x396c,	// (0x0008e071) bg_list_pane_cp02

0xcbba,	// (0x000972bf) mce_header_pane_ParamLimits

0xcbba,	// (0x000972bf) mce_header_pane

0xcbd0,	// (0x000972d5) mce_icon_pane

0xcbd0,	// (0x000972d5) mce_image_pane

0xcbd9,	// (0x000972de) mce_text_pane_ParamLimits

0xcbd9,	// (0x000972de) mce_text_pane

0x3976,	// (0x0008e07b) scroll_pane_cp03

0xcad2,	// (0x000971d7) scroll_pane_cp04

0xcbfe,	// (0x00097303) scroll_pane_cp05_ParamLimits

0xcbfe,	// (0x00097303) scroll_pane_cp05

0x3980,	// (0x0008e085) mce_header_field_pane_ParamLimits

0x3980,	// (0x0008e085) mce_header_field_pane

0x39a2,	// (0x0008e0a7) mce_header_field_pane_2_ParamLimits

0x39a2,	// (0x0008e0a7) mce_header_field_pane_2

0x39b8,	// (0x0008e0bd) mce_header_field_pane_3

0x39c0,	// (0x0008e0c5) list_single_mce_message_pane_ParamLimits

0x39c0,	// (0x0008e0c5) list_single_mce_message_pane

0x39df,	// (0x0008e0e4) list_single_mce_smart_pane_ParamLimits

0x39df,	// (0x0008e0e4) list_single_mce_smart_pane

0xcc0a,	// (0x0009730f) input_focus_pane_cp03

0xcc13,	// (0x00097318) list_header_data_pane

0x3a09,	// (0x0008e10e) mce_header_field_pane_t1

0x3a19,	// (0x0008e11e) list_single_mce_header_pane_ParamLimits

0x3a19,	// (0x0008e11e) list_single_mce_header_pane

0xcc1b,	// (0x00097320) list_single_mce_header_pane_t1

0xcc2a,	// (0x0009732f) list_single_mce_message_pane_g1

0xcc32,	// (0x00097337) list_single_mce_message_pane_t1

0x3a5d,	// (0x0008e162) bg_cale_heading_pane_cp01_ParamLimits

0x3a5d,	// (0x0008e162) bg_cale_heading_pane_cp01

0xcc40,	// (0x00097345) bg_cale_pane_cp02_ParamLimits

0xcc40,	// (0x00097345) bg_cale_pane_cp02

0x3aaf,	// (0x0008e1b4) cale_month_corner_pane

0x3ace,	// (0x0008e1d3) cale_month_day_heading_pane_ParamLimits

0x3ace,	// (0x0008e1d3) cale_month_day_heading_pane

0x3b30,	// (0x0008e235) cale_month_pane_g1_ParamLimits

0x3b30,	// (0x0008e235) cale_month_pane_g1

0x3b77,	// (0x0008e27c) cale_month_pane_g2_ParamLimits

0x3b77,	// (0x0008e27c) cale_month_pane_g2

0x3baf,	// (0x0008e2b4) cale_month_pane_g3_ParamLimits

0x3baf,	// (0x0008e2b4) cale_month_pane_g3

0x3c03,	// (0x0008e308) cale_month_pane_g4_ParamLimits

0x3c03,	// (0x0008e308) cale_month_pane_g4

0x3c57,	// (0x0008e35c) cale_month_pane_g5_ParamLimits

0x3c57,	// (0x0008e35c) cale_month_pane_g5

0x3cab,	// (0x0008e3b0) cale_month_pane_g6_ParamLimits

0x3cab,	// (0x0008e3b0) cale_month_pane_g6

0x3d0f,	// (0x0008e414) cale_month_pane_g7_ParamLimits

0x3d0f,	// (0x0008e414) cale_month_pane_g7

0x3d73,	// (0x0008e478) cale_month_pane_g8_ParamLimits

0x3d73,	// (0x0008e478) cale_month_pane_g8

0x3dd7,	// (0x0008e4dc) cale_month_pane_g9_ParamLimits

0x3dd7,	// (0x0008e4dc) cale_month_pane_g9

0x3e31,	// (0x0008e536) cale_month_pane_g10_ParamLimits

0x3e31,	// (0x0008e536) cale_month_pane_g10

0x3e83,	// (0x0008e588) cale_month_pane_g11_ParamLimits

0x3e83,	// (0x0008e588) cale_month_pane_g11

0x3ed1,	// (0x0008e5d6) cale_month_pane_g12_ParamLimits

0x3ed1,	// (0x0008e5d6) cale_month_pane_g12

0x3f21,	// (0x0008e626) cale_month_pane_g13_ParamLimits

0x3f21,	// (0x0008e626) cale_month_pane_g13

0x000c,

0xf1d7,	// (0x000998dc) cale_month_pane_g_ParamLimits

0xf1d7,	// (0x000998dc) cale_month_pane_g

0x3f71,	// (0x0008e676) cale_month_week_pane

0x3f91,	// (0x0008e696) grid_cale_month_pane_ParamLimits

0x3f91,	// (0x0008e696) grid_cale_month_pane

0x3fea,	// (0x0008e6ef) cale_month_day_heading_pane_t1

0x406c,	// (0x0008e771) cale_month_day_heading_pane_t2

0x40e5,	// (0x0008e7ea) cale_month_day_heading_pane_t3

0x415e,	// (0x0008e863) cale_month_day_heading_pane_t4

0x41d7,	// (0x0008e8dc) cale_month_day_heading_pane_t5

0x4258,	// (0x0008e95d) cale_month_day_heading_pane_t6

0x42e1,	// (0x0008e9e6) cale_month_day_heading_pane_t7

0x0006,

0xf1f2,	// (0x000998f7) cale_month_day_heading_pane_t

0xc8fd,	// (0x00097002) bg_cale_side_pane_cp01

0x436a,	// (0x0008ea6f) cale_month_week_pane_t1

0x4383,	// (0x0008ea88) cale_month_week_pane_t2

0x439c,	// (0x0008eaa1) cale_month_week_pane_t3

0x43b5,	// (0x0008eaba) cale_month_week_pane_t4

0x43ce,	// (0x0008ead3) cale_month_week_pane_t5

0x43eb,	// (0x0008eaf0) cale_month_week_pane_t6

0x0005,

0xf201,	// (0x00099906) cale_month_week_pane_t

0x440e,	// (0x0008eb13) cell_cale_month_pane_ParamLimits

0x440e,	// (0x0008eb13) cell_cale_month_pane

0x453c,	// (0x0008ec41) cell_cale_month_pane_g1

0x4548,	// (0x0008ec4d) cell_cale_month_pane_t1_ParamLimits

0x4548,	// (0x0008ec4d) cell_cale_month_pane_t1

0xc90b,	// (0x00097010) grid_highlight_pane_cp08

0xc64a,	// (0x00096d4f) main_smil_g1

0x4574,	// (0x0008ec79) smil_status_pane

0xcc7f,	// (0x00097384) smil_text_pane

0xc89e,	// (0x00096fa3) bg_popup_call3_rect_pane_g8

0xc896,	// (0x00096f9b) bg_popup_call3_rect_pane_g9

0x0008,

0xf218,	// (0x0009991d) bg_popup_call3_rect_pane_g

0xe560,	// (0x00098c65) smil_status_volume_pane_g1

0xcc89,	// (0x0009738e) smil_status_pane_t1

0x57e2,	// (0x0008fee7) volume_smil_pane

0xcca0,	// (0x000973a5) list_smil_text_pane

0x4587,	// (0x0008ec8c) scroll_pane_cp011

0x4592,	// (0x0008ec97) smil_text_list_pane_t1_ParamLimits

0x4592,	// (0x0008ec97) smil_text_list_pane_t1

0x45e6,	// (0x0008eceb) aid_volume_smil_ParamLimits

0x45e6,	// (0x0008eceb) aid_volume_smil

0xc64a,	// (0x00096d4f) smil_volume_pane_g1

0xc64a,	// (0x00096d4f) smil_volume_pane_g2

0x0001,

0xf213,	// (0x00099918) smil_volume_pane_g

0x4608,	// (0x0008ed0d) listscroll_cale_day_pane

0xccaa,	// (0x000973af) bg_cale_pane

0xccc2,	// (0x000973c7) list_cale_pane

0xcce5,	// (0x000973ea) scroll_pane_cp09

0xc86e,	// (0x00096f73) cale_bg_pane_g1

0xc866,	// (0x00096f6b) cale_bg_pane_g2

0xc85e,	// (0x00096f63) cale_bg_pane_g3

0xc87e,	// (0x00096f83) cale_bg_pane_g4

0xc876,	// (0x00096f7b) cale_bg_pane_g5

0xc886,	// (0x00096f8b) cale_bg_pane_g6

0xc88e,	// (0x00096f93) cale_bg_pane_g7

0xc89e,	// (0x00096fa3) cale_bg_pane_g8

0xc896,	// (0x00096f9b) cale_bg_pane_g9

0x0008,

0xf218,	// (0x0009991d) cale_bg_pane_g

0xccf6,	// (0x000973fb) list_cale_time_pane_ParamLimits

0xccf6,	// (0x000973fb) list_cale_time_pane

0xcd0d,	// (0x00097412) list_cale_time_pane_g1_ParamLimits

0xcd0d,	// (0x00097412) list_cale_time_pane_g1

0xcd19,	// (0x0009741e) list_cale_time_pane_g2_ParamLimits

0xcd19,	// (0x0009741e) list_cale_time_pane_g2

0x4622,	// (0x0008ed27) list_cale_time_pane_g3_ParamLimits

0x4622,	// (0x0008ed27) list_cale_time_pane_g3

0x4630,	// (0x0008ed35) list_cale_time_pane_g4_ParamLimits

0x4630,	// (0x0008ed35) list_cale_time_pane_g4

0x463e,	// (0x0008ed43) list_cale_time_pane_g5_ParamLimits

0x463e,	// (0x0008ed43) list_cale_time_pane_g5

0x0005,

0xf22b,	// (0x00099930) list_cale_time_pane_g_ParamLimits

0xf22b,	// (0x00099930) list_cale_time_pane_g

0xcd33,	// (0x00097438) list_cale_time_pane_t1_ParamLimits

0xcd33,	// (0x00097438) list_cale_time_pane_t1

0xcd5b,	// (0x00097460) list_cale_time_pane_t2_ParamLimits

0xcd5b,	// (0x00097460) list_cale_time_pane_t2

0x4910,	// (0x0008f015) aid_blid_cardinal_pane

0x4952,	// (0x0008f057) compass_pane_t4

0xcd83,	// (0x00097488) list_cale_time_pane_t4_ParamLimits

0xcd83,	// (0x00097488) list_cale_time_pane_t4

0x4960,	// (0x0008f065) compass_pane_t5

0x4970,	// (0x0008f075) compass_pane_t6

0x497e,	// (0x0008f083) compass_pane_t7

0xd1a2,	// (0x000978a7) navi_pane_cc_t1

0xd2ef,	// (0x000979f4) aid_phob_thumbnail_center_pane

0x4f44,	// (0x0008f649) main_postcard_pane_g4_ParamLimits

0x0002,

0xf238,	// (0x0009993d) list_cale_time_pane_t_ParamLimits

0xf238,	// (0x0009993d) list_cale_time_pane_t

0x0b41,	// (0x0008b246) bg_popup_window_pane_cp02_ParamLimits

0x0b41,	// (0x0008b246) bg_popup_window_pane_cp02

0xcdab,	// (0x000974b0) heading_pane_cp01_ParamLimits

0xcdab,	// (0x000974b0) heading_pane_cp01

0xcdb7,	// (0x000974bc) loc_req_pane_ParamLimits

0xcdb7,	// (0x000974bc) loc_req_pane

0xcdc9,	// (0x000974ce) loc_type_pane_ParamLimits

0xcdc9,	// (0x000974ce) loc_type_pane

0xcddb,	// (0x000974e0) loc_type_pane_t1_ParamLimits

0xcddb,	// (0x000974e0) loc_type_pane_t1

0xcded,	// (0x000974f2) loc_type_pane_t2_ParamLimits

0xcded,	// (0x000974f2) loc_type_pane_t2

0xcdff,	// (0x00097504) loc_type_pane_t3_ParamLimits

0xcdff,	// (0x00097504) loc_type_pane_t3

0x0002,

0xf23f,	// (0x00099944) loc_type_pane_t_ParamLimits

0xf23f,	// (0x00099944) loc_type_pane_t

0xce11,	// (0x00097516) list_loc_req_pane

0xce1b,	// (0x00097520) scroll_pane_cp012

0x464c,	// (0x0008ed51) list_single_loc_request_popup_menu_pane_ParamLimits

0x464c,	// (0x0008ed51) list_single_loc_request_popup_menu_pane

0xce26,	// (0x0009752b) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xce26,	// (0x0009752b) list_single_loc_request_popup_menu_pane_g1

0xce32,	// (0x00097537) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xce32,	// (0x00097537) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf246,	// (0x0009994b) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf246,	// (0x0009994b) list_single_loc_request_popup_menu_pane_g

0xce3e,	// (0x00097543) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xce3e,	// (0x00097543) list_single_loc_request_popup_menu_pane_t1

0x465e,	// (0x0008ed63) bg_popup_window_pane_cp03_ParamLimits

0x465e,	// (0x0008ed63) bg_popup_window_pane_cp03

0x466c,	// (0x0008ed71) heading_loc_req_pane_ParamLimits

0x466c,	// (0x0008ed71) heading_loc_req_pane

0x4678,	// (0x0008ed7d) popup_dyc_status_message_window_g1_ParamLimits

0x4678,	// (0x0008ed7d) popup_dyc_status_message_window_g1

0x4684,	// (0x0008ed89) popup_dyc_status_message_window_t1_ParamLimits

0x4684,	// (0x0008ed89) popup_dyc_status_message_window_t1

0x4696,	// (0x0008ed9b) popup_dyc_status_message_window_t2_ParamLimits

0x4696,	// (0x0008ed9b) popup_dyc_status_message_window_t2

0x46a8,	// (0x0008edad) popup_dyc_status_message_window_t3_ParamLimits

0x46a8,	// (0x0008edad) popup_dyc_status_message_window_t3

0x0002,

0xf24b,	// (0x00099950) popup_dyc_status_message_window_t_ParamLimits

0xf24b,	// (0x00099950) popup_dyc_status_message_window_t

0xc3d7,	// (0x00096adc) bg_heading_pane_cp01

0xce54,	// (0x00097559) heading_loc_req_pane_g1

0xce5c,	// (0x00097561) heading_loc_req_pane_g2

0xce64,	// (0x00097569) heading_loc_req_pane_g3

0x0002,

0xf252,	// (0x00099957) heading_loc_req_pane_g

0xce6c,	// (0x00097571) heading_loc_req_pane_t1

0xce8c,	// (0x00097591) bg_popup_sub_pane_cp01_ParamLimits

0xce8c,	// (0x00097591) bg_popup_sub_pane_cp01

0xce9a,	// (0x0009759f) popup_cale_events_window_g1_ParamLimits

0xce9a,	// (0x0009759f) popup_cale_events_window_g1

0xceba,	// (0x000975bf) popup_cale_events_window_g2_ParamLimits

0xceba,	// (0x000975bf) popup_cale_events_window_g2

0x0001,

0xf274,	// (0x00099979) popup_cale_events_window_g_ParamLimits

0xf274,	// (0x00099979) popup_cale_events_window_g

0xceda,	// (0x000975df) popup_cale_events_window_t1_ParamLimits

0xceda,	// (0x000975df) popup_cale_events_window_t1

0xceec,	// (0x000975f1) popup_cale_events_window_t2_ParamLimits

0xceec,	// (0x000975f1) popup_cale_events_window_t2

0xcf2a,	// (0x0009762f) popup_cale_events_window_t3_ParamLimits

0xcf2a,	// (0x0009762f) popup_cale_events_window_t3

0xcf64,	// (0x00097669) popup_cale_events_window_t4_ParamLimits

0xcf64,	// (0x00097669) popup_cale_events_window_t4

0x0003,

0xf279,	// (0x0009997e) popup_cale_events_window_t_ParamLimits

0xf279,	// (0x0009997e) popup_cale_events_window_t

0x46d2,	// (0x0008edd7) call_type_pane

0xdad4,	// (0x000981d9) popup_call_status_window_g1

0x46de,	// (0x0008ede3) popup_call_status_window_g2

0x46ea,	// (0x0008edef) popup_call_status_window_g3

0x0002,

0xf282,	// (0x00099987) popup_call_status_window_g

0xcf9a,	// (0x0009769f) call_type_pane_g1

0xcfa3,	// (0x000976a8) call_type_pane_g2

0x0001,

0xf289,	// (0x0009998e) call_type_pane_g

0xc3d7,	// (0x00096adc) bg_popup_sub_pane_cp02

0xcfac,	// (0x000976b1) listscroll_popup_wml_pane

0xcfb4,	// (0x000976b9) list_wml_pane

0xcfbe,	// (0x000976c3) scroll_pane_cp013

0xcfc9,	// (0x000976ce) list_single_graphic_popup_wml_pane_ParamLimits

0xcfc9,	// (0x000976ce) list_single_graphic_popup_wml_pane

0xc64a,	// (0x00096d4f) list_single_graphic_popup_wml_pane_g1

0xcfe9,	// (0x000976ee) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf28e,	// (0x00099993) list_single_graphic_popup_wml_pane_g

0xcff1,	// (0x000976f6) list_single_graphic_popup_wml_pane_t1

0xd007,	// (0x0009770c) aid_call_pane

0xc62a,	// (0x00096d2f) popup_clock_analogue_window_g1

0xc62a,	// (0x00096d2f) popup_clock_analogue_window_g2

0x46f6,	// (0x0008edfb) popup_clock_analogue_window_g3

0x46f6,	// (0x0008edfb) popup_clock_analogue_window_g4

0xc64a,	// (0x00096d4f) popup_clock_analogue_window_g5

0x0004,

0xf293,	// (0x00099998) popup_clock_analogue_window_g

0x46fe,	// (0x0008ee03) popup_clock_analogue_window_t1

0x470c,	// (0x0008ee11) clock_digital_number_pane_ParamLimits

0x470c,	// (0x0008ee11) clock_digital_number_pane

0x4718,	// (0x0008ee1d) clock_digital_number_pane_cp02_ParamLimits

0x4718,	// (0x0008ee1d) clock_digital_number_pane_cp02

0x4724,	// (0x0008ee29) clock_digital_number_pane_cp03_ParamLimits

0x4724,	// (0x0008ee29) clock_digital_number_pane_cp03

0x4730,	// (0x0008ee35) clock_digital_number_pane_cp04_ParamLimits

0x4730,	// (0x0008ee35) clock_digital_number_pane_cp04

0x473c,	// (0x0008ee41) clock_digital_separator_pane_ParamLimits

0x473c,	// (0x0008ee41) clock_digital_separator_pane

0x4748,	// (0x0008ee4d) popup_clock_digital_window_t1

0xc64a,	// (0x00096d4f) clock_digital_number_pane_g1

0xc64a,	// (0x00096d4f) clock_digital_number_pane_g2

0x0001,

0xf213,	// (0x00099918) clock_digital_number_pane_g

0xc64a,	// (0x00096d4f) clock_digital_separator_pane_g1

0xc64a,	// (0x00096d4f) clock_digital_separator_pane_g2

0x0001,

0xf213,	// (0x00099918) clock_digital_separator_pane_g

0xc3d7,	// (0x00096adc) bg_popup_window_pane_cp04

0xd00f,	// (0x00097714) heading_pane_cp03

0xc958,	// (0x0009705d) listscroll_popup_gms_pane

0xc3d7,	// (0x00096adc) grid_large_graphic_popup_pane

0xd017,	// (0x0009771c) listscroll_popup_gms_pane_g1

0xd020,	// (0x00097725) listscroll_popup_gms_pane_g2

0x0001,

0xf29e,	// (0x000999a3) listscroll_popup_gms_pane_g

0xd029,	// (0x0009772e) scroll_pane_cp014

0xc69f,	// (0x00096da4) cell_large_graphic_popup_pane_ParamLimits

0xc69f,	// (0x00096da4) cell_large_graphic_popup_pane

0xc6ad,	// (0x00096db2) cell_large_graphic_popup_pane_g1_ParamLimits

0xc6ad,	// (0x00096db2) cell_large_graphic_popup_pane_g1

0xd032,	// (0x00097737) cell_large_graphic_popup_pane_g2_ParamLimits

0xd032,	// (0x00097737) cell_large_graphic_popup_pane_g2

0xd040,	// (0x00097745) cell_large_graphic_popup_pane_g3_ParamLimits

0xd040,	// (0x00097745) cell_large_graphic_popup_pane_g3

0xd04e,	// (0x00097753) cell_large_graphic_popup_pane_g4_ParamLimits

0xd04e,	// (0x00097753) cell_large_graphic_popup_pane_g4

0x0003,

0xf2a3,	// (0x000999a8) cell_large_graphic_popup_pane_g_ParamLimits

0xf2a3,	// (0x000999a8) cell_large_graphic_popup_pane_g

0xc3d7,	// (0x00096adc) grid_highlight_pane_cp010

0xc64a,	// (0x00096d4f) bg_popup_call_pane_g1

0xd05f,	// (0x00097764) list_single_graphic_popup_conf_pane_ParamLimits

0xd05f,	// (0x00097764) list_single_graphic_popup_conf_pane

0xd071,	// (0x00097776) list_highlight_pane_cp01

0xd07a,	// (0x0009777f) list_single_graphic_popup_conf_pane_g1

0xd082,	// (0x00097787) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf2ac,	// (0x000999b1) list_single_graphic_popup_conf_pane_g

0xd08a,	// (0x0009778f) list_single_graphic_popup_conf_pane_t1

0xd098,	// (0x0009779d) linegrid_cams_pane_g1

0x4765,	// (0x0008ee6a) linegrid_cams_pane_g2

0xc93e,	// (0x00097043) linegrid_cams_pane_g3

0xd0a1,	// (0x000977a6) linegrid_cams_pane_g4

0x476e,	// (0x0008ee73) linegrid_cams_pane_g5

0x4777,	// (0x0008ee7c) linegrid_cams_pane_g6

0xc947,	// (0x0009704c) linegrid_cams_pane_g7

0x0006,

0xf2b1,	// (0x000999b6) linegrid_cams_pane_g

0xd0aa,	// (0x000977af) popup_clock_analogue_window

0xd0aa,	// (0x000977af) popup_clock_digital_window

0xc3d7,	// (0x00096adc) popup_phob_thumbnail_window

0xc64a,	// (0x00096d4f) call_video_uplink_pane_g1

0xd0b3,	// (0x000977b8) call_video_uplink_pane_g2

0x0001,

0xf2c0,	// (0x000999c5) call_video_uplink_pane_g

0xd0bb,	// (0x000977c0) video_uplink_pane

0xd0c3,	// (0x000977c8) mce_image_pane_g1

0x4782,	// (0x0008ee87) mce_image_pane_g2

0x478c,	// (0x0008ee91) mce_image_pane_g3

0x4796,	// (0x0008ee9b) mce_image_pane_g4

0x479e,	// (0x0008eea3) mce_image_pane_g5

0x0004,

0xf2c5,	// (0x000999ca) mce_image_pane_g

0xd0cd,	// (0x000977d2) control_top_pane_stacon_cp01_ParamLimits

0xd0cd,	// (0x000977d2) control_top_pane_stacon_cp01

0xd0e1,	// (0x000977e6) uni_indicator_pane_stacon_cp01_ParamLimits

0xd0e1,	// (0x000977e6) uni_indicator_pane_stacon_cp01

0xd0f2,	// (0x000977f7) bg_popup_sub_pane_cp03

0x47a6,	// (0x0008eeab) chi_dic_find_pane

0x47ae,	// (0x0008eeb3) listscroll_chi_dic_pane

0x47b7,	// (0x0008eebc) main_pane_chidic_g1

0x47ca,	// (0x0008eecf) chi_dic_find_pane_t1

0xd0fc,	// (0x00097801) find_chidic_pane

0xd105,	// (0x0009780a) chi_dic_list_pane_ParamLimits

0xd105,	// (0x0009780a) chi_dic_list_pane

0xd116,	// (0x0009781b) scroll_pane_cp020

0x47d8,	// (0x0008eedd) find_chidic_pane_t1

0xc3d7,	// (0x00096adc) input_focus_pane_cp06

0x47e7,	// (0x0008eeec) list_chi_dic_pane_ParamLimits

0x47e7,	// (0x0008eeec) list_chi_dic_pane

0x47fc,	// (0x0008ef01) list_chi_dic_pane_t1_ParamLimits

0x47fc,	// (0x0008ef01) list_chi_dic_pane_t1

0xc3d7,	// (0x00096adc) list_highlight_pane_cp020

0xd11e,	// (0x00097823) bg_cale_heading_pane_g1

0x480f,	// (0x0008ef14) bg_cale_heading_pane_g2

0x4817,	// (0x0008ef1c) bg_cale_heading_pane_g3

0x481f,	// (0x0008ef24) bg_cale_heading_pane_g4

0x4829,	// (0x0008ef2e) bg_cale_heading_pane_g5

0x4833,	// (0x0008ef38) bg_cale_heading_pane_g6

0x483b,	// (0x0008ef40) bg_cale_heading_pane_g7

0x4843,	// (0x0008ef48) bg_cale_heading_pane_g8

0x484d,	// (0x0008ef52) bg_cale_heading_pane_g9

0x0008,

0xf2d0,	// (0x000999d5) bg_cale_heading_pane_g

0xd11e,	// (0x00097823) bg_cale_side_pane_g1

0x4857,	// (0x0008ef5c) bg_cale_side_pane_g2

0x4861,	// (0x0008ef66) bg_cale_side_pane_g3

0x486b,	// (0x0008ef70) bg_cale_side_pane_g4

0x4875,	// (0x0008ef7a) bg_cale_side_pane_g5

0x487f,	// (0x0008ef84) bg_cale_side_pane_g6

0x4889,	// (0x0008ef8e) bg_cale_side_pane_g7

0x4893,	// (0x0008ef98) bg_cale_side_pane_g8

0x489b,	// (0x0008efa0) bg_cale_side_pane_g9

0x0008,

0xf2e3,	// (0x000999e8) bg_cale_side_pane_g

0x48a3,	// (0x0008efa8) popup_call_status_window_ParamLimits

0x48a3,	// (0x0008efa8) popup_call_status_window

0xd126,	// (0x0009782b) stacon_top_pane

0xd12e,	// (0x00097833) status_pane_ParamLimits

0xd12e,	// (0x00097833) status_pane

0xd143,	// (0x00097848) status_small_pane

0xd14b,	// (0x00097850) control_pane

0xc3d7,	// (0x00096adc) stacon_bottom_pane

0xd153,	// (0x00097858) list_single_mce_smart_pane_t1_ParamLimits

0xd153,	// (0x00097858) list_single_mce_smart_pane_t1

0xd166,	// (0x0009786b) list_single_mce_smart_pane_t2_ParamLimits

0xd166,	// (0x0009786b) list_single_mce_smart_pane_t2

0x0001,

0xf2f6,	// (0x000999fb) list_single_mce_smart_pane_t_ParamLimits

0xf2f6,	// (0x000999fb) list_single_mce_smart_pane_t

0x48af,	// (0x0008efb4) compass_pane

0x48ba,	// (0x0008efbf) main_location2_pane_t1

0x48d0,	// (0x0008efd5) main_location2_pane_t2

0x48e6,	// (0x0008efeb) main_location2_pane_t3

0x0003,

0xf2fb,	// (0x00099a00) main_location2_pane_t

0xd185,	// (0x0009788a) compass_pane_g1_ParamLimits

0xd185,	// (0x0009788a) compass_pane_g1

0x4934,	// (0x0008f039) compass_pane_t1

0x4943,	// (0x0008f048) compass_pane_t2

0x0005,

0xf304,	// (0x00099a09) compass_pane_t

0x498e,	// (0x0008f093) text_secondary_cp61

0xd199,	// (0x0009789e) navi_pane_cams_g5

0xd1bc,	// (0x000978c1) navi_pane_im_t1

0xd1ca,	// (0x000978cf) navi_pane_mp_g1_ParamLimits

0xd1ca,	// (0x000978cf) navi_pane_mp_g1

0xd1de,	// (0x000978e3) navi_pane_mp_g2_ParamLimits

0xd1de,	// (0x000978e3) navi_pane_mp_g2

0xd1ea,	// (0x000978ef) navi_pane_mp_g3_ParamLimits

0xd1ea,	// (0x000978ef) navi_pane_mp_g3

0x0002,

0xf318,	// (0x00099a1d) navi_pane_mp_g_ParamLimits

0xf318,	// (0x00099a1d) navi_pane_mp_g

0xd1f6,	// (0x000978fb) navi_pane_mp_t1

0xd204,	// (0x00097909) navi_pane_mp_t2

0x0002,

0xf31f,	// (0x00099a24) navi_pane_mp_t

0xd240,	// (0x00097945) navi_pane_vt_g1

0xd1f6,	// (0x000978fb) navi_pane_vt_t1

0xd248,	// (0x0009794d) navi_slider_pane

0xc958,	// (0x0009705d) zooming_pane

0xd250,	// (0x00097955) navi_slider_pane_g1

0x4ac3,	// (0x0008f1c8) navi_slider_pane_g2

0x0006,

0xf326,	// (0x00099a2b) navi_slider_pane_g

0xd274,	// (0x00097979) aid_levels_zoom

0xd27c,	// (0x00097981) zooming_pane_g1

0xd284,	// (0x00097989) zooming_pane_g2

0xd284,	// (0x00097989) zooming_pane_g3

0x0002,

0xf335,	// (0x00099a3a) zooming_pane_g

0xd28c,	// (0x00097991) level_10_zoom

0xd295,	// (0x0009799a) level_11_zoom

0xd29e,	// (0x000979a3) level_1_zoom

0xd2a7,	// (0x000979ac) level_2_zoom

0xd2b0,	// (0x000979b5) level_3_zoom

0xd2b9,	// (0x000979be) level_4_zoom

0xd2c2,	// (0x000979c7) level_5_zoom

0xd2cb,	// (0x000979d0) level_6_zoom

0xd2d4,	// (0x000979d9) level_7_zoom

0xd2dd,	// (0x000979e2) level_8_zoom

0xd2e6,	// (0x000979eb) level_9_zoom

0xd2f7,	// (0x000979fc) popup_phob_thumbnail_window_g1

0xd2ff,	// (0x00097a04) popup_phob_thumbnail_window_g2

0x0001,

0xf33c,	// (0x00099a41) popup_phob_thumbnail_window_g

0x5467,	// (0x0008fb6c) level_1_location

0x546f,	// (0x0008fb74) level_2_location

0x5477,	// (0x0008fb7c) level_3_location

0x5481,	// (0x0008fb86) level_4_location

0xc958,	// (0x0009705d) level_5_location

0x4ad5,	// (0x0008f1da) mce_icon_pane_g1

0x4add,	// (0x0008f1e2) mce_icon_pane_g2

0x0001,

0xf341,	// (0x00099a46) mce_icon_pane_g

0x4ae5,	// (0x0008f1ea) main_mup_pane_g1_ParamLimits

0x4ae5,	// (0x0008f1ea) main_mup_pane_g1

0xc6c9,	// (0x00096dce) main_mup_pane_g2_ParamLimits

0xc6c9,	// (0x00096dce) main_mup_pane_g2

0xc6c9,	// (0x00096dce) main_mup_pane_g3_ParamLimits

0xc6c9,	// (0x00096dce) main_mup_pane_g3

0xc6c9,	// (0x00096dce) main_mup_pane_g4_ParamLimits

0xc6c9,	// (0x00096dce) main_mup_pane_g4

0xc6c9,	// (0x00096dce) main_mup_pane_g5_ParamLimits

0xc6c9,	// (0x00096dce) main_mup_pane_g5

0xc6c9,	// (0x00096dce) main_mup_pane_g6_ParamLimits

0xc6c9,	// (0x00096dce) main_mup_pane_g6

0xc6c9,	// (0x00096dce) main_mup_pane_g7_ParamLimits

0xc6c9,	// (0x00096dce) main_mup_pane_g7

0xc6c9,	// (0x00096dce) main_mup_pane_g8_ParamLimits

0xc6c9,	// (0x00096dce) main_mup_pane_g8

0xc6c9,	// (0x00096dce) main_mup_pane_g9_ParamLimits

0xc6c9,	// (0x00096dce) main_mup_pane_g9

0xc6c9,	// (0x00096dce) main_mup_pane_g10_ParamLimits

0xc6c9,	// (0x00096dce) main_mup_pane_g10

0xc6c9,	// (0x00096dce) main_mup_pane_g11_ParamLimits

0xc6c9,	// (0x00096dce) main_mup_pane_g11

0xc6bb,	// (0x00096dc0) main_mup_pane_g12_ParamLimits

0xc6bb,	// (0x00096dc0) main_mup_pane_g12

0xc6c9,	// (0x00096dce) main_mup_pane_g13_ParamLimits

0xc6c9,	// (0x00096dce) main_mup_pane_g13

0x000c,

0xf346,	// (0x00099a4b) main_mup_pane_g_ParamLimits

0xf346,	// (0x00099a4b) main_mup_pane_g

0xc6d7,	// (0x00096ddc) main_mup_pane_t1_ParamLimits

0xc6d7,	// (0x00096ddc) main_mup_pane_t1

0xc6d7,	// (0x00096ddc) main_mup_pane_t2_ParamLimits

0xc6d7,	// (0x00096ddc) main_mup_pane_t2

0xc6d7,	// (0x00096ddc) main_mup_pane_t3_ParamLimits

0xc6d7,	// (0x00096ddc) main_mup_pane_t3

0xc709,	// (0x00096e0e) main_mup_pane_t4_ParamLimits

0xc709,	// (0x00096e0e) main_mup_pane_t4

0xc709,	// (0x00096e0e) main_mup_pane_t5_ParamLimits

0xc709,	// (0x00096e0e) main_mup_pane_t5

0xc6f5,	// (0x00096dfa) main_mup_pane_t6_ParamLimits

0xc6f5,	// (0x00096dfa) main_mup_pane_t6

0x0005,

0xf361,	// (0x00099a66) main_mup_pane_t_ParamLimits

0xf361,	// (0x00099a66) main_mup_pane_t

0x153a,	// (0x0008bc3f) mup_progress_pane_ParamLimits

0x153a,	// (0x0008bc3f) mup_progress_pane

0xe4dd,	// (0x00098be2) mup_visualizer_pane_ParamLimits

0xe4dd,	// (0x00098be2) mup_visualizer_pane

0xe4dd,	// (0x00098be2) mup_volume_pane_ParamLimits

0xe4dd,	// (0x00098be2) mup_volume_pane

0xc6bb,	// (0x00096dc0) mup_visualizer_pane_g1_ParamLimits

0xc6bb,	// (0x00096dc0) mup_visualizer_pane_g1

0xd307,	// (0x00097a0c) mup_visualizer_pane_g2_ParamLimits

0xd307,	// (0x00097a0c) mup_visualizer_pane_g2

0xc6ad,	// (0x00096db2) mup_visualizer_pane_g3_ParamLimits

0xc6ad,	// (0x00096db2) mup_visualizer_pane_g3

0x0002,

0xf36e,	// (0x00099a73) mup_visualizer_pane_g_ParamLimits

0xf36e,	// (0x00099a73) mup_visualizer_pane_g

0xc6eb,	// (0x00096df0) mup_volume_pane_g1

0xc6eb,	// (0x00096df0) mup_volume_pane_g2

0x0001,

0xf08c,	// (0x00099791) mup_volume_pane_g

0xc6eb,	// (0x00096df0) mup_progress_pane_g1

0xc6eb,	// (0x00096df0) mup_progress_pane_g2

0xc6eb,	// (0x00096df0) mup_progress_pane_g3

0x0002,

0xf375,	// (0x00099a7a) mup_progress_pane_g

0xc3d7,	// (0x00096adc) bg_popup_window_pane_cp05

0xd315,	// (0x00097a1a) heading_pane_cp02_ParamLimits

0xd315,	// (0x00097a1a) heading_pane_cp02

0xd361,	// (0x00097a66) list_popup_blid_pane

0xd369,	// (0x00097a6e) list_blid_sat_info_pane_ParamLimits

0xd369,	// (0x00097a6e) list_blid_sat_info_pane

0xd37c,	// (0x00097a81) list_blid_sat_info_pane_g1

0xd384,	// (0x00097a89) list_blid_sat_info_pane_t1

0x4bf4,	// (0x0008f2f9) mup_equalizer_pane_ParamLimits

0x4bf4,	// (0x0008f2f9) mup_equalizer_pane

0x4c15,	// (0x0008f31a) mup_equalizer_pane_cp1_ParamLimits

0x4c15,	// (0x0008f31a) mup_equalizer_pane_cp1

0x4c36,	// (0x0008f33b) mup_equalizer_pane_cp2_ParamLimits

0x4c36,	// (0x0008f33b) mup_equalizer_pane_cp2

0x4c57,	// (0x0008f35c) mup_equalizer_pane_cp3_ParamLimits

0x4c57,	// (0x0008f35c) mup_equalizer_pane_cp3

0x4c7c,	// (0x0008f381) mup_equalizer_pane_cp4_ParamLimits

0x4c7c,	// (0x0008f381) mup_equalizer_pane_cp4

0x4ca1,	// (0x0008f3a6) mup_equalizer_pane_cp5

0x4cb9,	// (0x0008f3be) mup_equalizer_pane_cp6

0x4cd1,	// (0x0008f3d6) mup_equalizer_pane_cp7

0xe427,	// (0x00098b2c) bg_popup_call_poc_act_pane_g9

0xe42f,	// (0x00098b34) bg_popup_call_poc_act_pane_g10

0xe437,	// (0x00098b3c) bg_popup_call_poc_act_pane_g11

0x000a,

0xc632,	// (0x00096d37) mup_scale_pane

0xc64a,	// (0x00096d4f) mup_scale_pane_g1

0xd392,	// (0x00097a97) mup_scale_pane_g2

0x0006,

0xf391,	// (0x00099a96) mup_scale_pane_g

0xd3b6,	// (0x00097abb) msg_data_pane

0xd3be,	// (0x00097ac3) scroll_pane_cp017

0x4cfb,	// (0x0008f400) bg_list_pane_cp04_ParamLimits

0x4cfb,	// (0x0008f400) bg_list_pane_cp04

0xd3c6,	// (0x00097acb) msg_data_pane_g1

0x4d23,	// (0x0008f428) msg_data_pane_g2

0x4d2d,	// (0x0008f432) msg_data_pane_g3

0x4d37,	// (0x0008f43c) msg_data_pane_g4

0x4d3f,	// (0x0008f444) msg_data_pane_g5

0x4d47,	// (0x0008f44c) msg_data_pane_g6

0x4d4f,	// (0x0008f454) msg_data_pane_g7

0x0006,

0xf3a0,	// (0x00099aa5) msg_data_pane_g

0x4d57,	// (0x0008f45c) msg_text_pane_ParamLimits

0x4d57,	// (0x0008f45c) msg_text_pane

0x4d8d,	// (0x0008f492) qrid_highlight_pane_cp011_ParamLimits

0x4d8d,	// (0x0008f492) qrid_highlight_pane_cp011

0xc3d7,	// (0x00096adc) msg_body_pane

0xc632,	// (0x00096d37) msg_header_pane

0xd3e2,	// (0x00097ae7) input_focus_pane_cp07

0x4db1,	// (0x0008f4b6) msg_header_pane_t1_ParamLimits

0x4db1,	// (0x0008f4b6) msg_header_pane_t1

0x4dcd,	// (0x0008f4d2) msg_header_pane_t2_ParamLimits

0x4dcd,	// (0x0008f4d2) msg_header_pane_t2

0x0001,

0xf3b4,	// (0x00099ab9) msg_header_pane_t_ParamLimits

0xf3b4,	// (0x00099ab9) msg_header_pane_t

0xd403,	// (0x00097b08) msg_body_pane_g1

0x4ded,	// (0x0008f4f2) msg_body_pane_t1_ParamLimits

0x4ded,	// (0x0008f4f2) msg_body_pane_t1

0x4e1e,	// (0x0008f523) msg_body_pane_t2_ParamLimits

0x4e1e,	// (0x0008f523) msg_body_pane_t2

0x4e30,	// (0x0008f535) msg_body_pane_t3_ParamLimits

0x4e30,	// (0x0008f535) msg_body_pane_t3

0x0002,

0xf3b9,	// (0x00099abe) msg_body_pane_t_ParamLimits

0xf3b9,	// (0x00099abe) msg_body_pane_t

0x4e94,	// (0x0008f599) main_viewer_pane_g1_ParamLimits

0x4e94,	// (0x0008f599) main_viewer_pane_g1

0x4ea0,	// (0x0008f5a5) main_viewer_pane_g2_ParamLimits

0x4ea0,	// (0x0008f5a5) main_viewer_pane_g2

0x4eac,	// (0x0008f5b1) main_viewer_pane_g3_ParamLimits

0x4eac,	// (0x0008f5b1) main_viewer_pane_g3

0x4ebd,	// (0x0008f5c2) main_viewer_pane_g4_ParamLimits

0x4ebd,	// (0x0008f5c2) main_viewer_pane_g4

0x4ece,	// (0x0008f5d3) main_viewer_pane_g5_ParamLimits

0x4ece,	// (0x0008f5d3) main_viewer_pane_g5

0x4ece,	// (0x0008f5d3) main_viewer_pane_g7_ParamLimits

0x4ece,	// (0x0008f5d3) main_viewer_pane_g7

0x4ee0,	// (0x0008f5e5) main_viewer_pane_g8_ParamLimits

0x4ee0,	// (0x0008f5e5) main_viewer_pane_g8

0x0007,

0xf3c9,	// (0x00099ace) main_viewer_pane_g_ParamLimits

0xf3c9,	// (0x00099ace) main_viewer_pane_g

0xd40b,	// (0x00097b10) viewer_content_pane_ParamLimits

0xd40b,	// (0x00097b10) viewer_content_pane

0x4f18,	// (0x0008f61d) main_postcard_pane_g1_ParamLimits

0x4f18,	// (0x0008f61d) main_postcard_pane_g1

0x4f26,	// (0x0008f62b) main_postcard_pane_g2_ParamLimits

0x4f26,	// (0x0008f62b) main_postcard_pane_g2

0x4f34,	// (0x0008f639) main_postcard_pane_g3_ParamLimits

0x4f34,	// (0x0008f639) main_postcard_pane_g3

0x0005,

0xf3da,	// (0x00099adf) main_postcard_pane_g_ParamLimits

0xf3da,	// (0x00099adf) main_postcard_pane_g

0x4f44,	// (0x0008f649) main_postcard_pane_g4

0xe573,	// (0x00098c78) smil_status_volume_pane_g2

0x4f70,	// (0x0008f675) postcard_pane_ParamLimits

0x4f70,	// (0x0008f675) postcard_pane

0xdad4,	// (0x000981d9) postcard_pane_g1_ParamLimits

0xdad4,	// (0x000981d9) postcard_pane_g1

0x4faa,	// (0x0008f6af) postcard_pane_g2_ParamLimits

0x4faa,	// (0x0008f6af) postcard_pane_g2

0x4fb6,	// (0x0008f6bb) postcard_pane_g3_ParamLimits

0x4fb6,	// (0x0008f6bb) postcard_pane_g3

0xd419,	// (0x00097b1e) postcard_pane_g4_ParamLimits

0xd419,	// (0x00097b1e) postcard_pane_g4

0x4fc2,	// (0x0008f6c7) postcard_pane_g5_ParamLimits

0x4fc2,	// (0x0008f6c7) postcard_pane_g5

0x4fce,	// (0x0008f6d3) postcard_pane_g6_ParamLimits

0x4fce,	// (0x0008f6d3) postcard_pane_g6

0xd427,	// (0x00097b2c) postcard_pane_g7_ParamLimits

0xd427,	// (0x00097b2c) postcard_pane_g7

0x0006,

0xf3e7,	// (0x00099aec) postcard_pane_g_ParamLimits

0xf3e7,	// (0x00099aec) postcard_pane_g

0x4fdc,	// (0x0008f6e1) main_mp2_pane_g1_ParamLimits

0x4fdc,	// (0x0008f6e1) main_mp2_pane_g1

0x4fea,	// (0x0008f6ef) main_mp2_pane_g2_ParamLimits

0x4fea,	// (0x0008f6ef) main_mp2_pane_g2

0x4ff6,	// (0x0008f6fb) main_mp2_pane_g3_ParamLimits

0x4ff6,	// (0x0008f6fb) main_mp2_pane_g3

0x0002,

0xf3f6,	// (0x00099afb) main_mp2_pane_g_ParamLimits

0xf3f6,	// (0x00099afb) main_mp2_pane_g

0x5002,	// (0x0008f707) main_mp2_pane_t1_ParamLimits

0x5002,	// (0x0008f707) main_mp2_pane_t1

0x5019,	// (0x0008f71e) main_mp2_pane_t2_ParamLimits

0x5019,	// (0x0008f71e) main_mp2_pane_t2

0x502d,	// (0x0008f732) main_mp2_pane_t3_ParamLimits

0x502d,	// (0x0008f732) main_mp2_pane_t3

0x0002,

0xf3fd,	// (0x00099b02) main_mp2_pane_t_ParamLimits

0xf3fd,	// (0x00099b02) main_mp2_pane_t

0x153a,	// (0x0008bc3f) pec_content_pane_ParamLimits

0x153a,	// (0x0008bc3f) pec_content_pane

0x0a98,	// (0x0008b19d) scroll_pane_cp015

0xd331,	// (0x00097a36) pec_attribute_pane_ParamLimits

0xd331,	// (0x00097a36) pec_attribute_pane

0xc6ad,	// (0x00096db2) pec_content_pane_g1_ParamLimits

0xc6ad,	// (0x00096db2) pec_content_pane_g1

0xd435,	// (0x00097b3a) pec_content_pane_t1_ParamLimits

0xd435,	// (0x00097b3a) pec_content_pane_t1

0xd449,	// (0x00097b4e) pec_content_pane_t2_ParamLimits

0xd449,	// (0x00097b4e) pec_content_pane_t2

0x0001,

0xf404,	// (0x00099b09) pec_content_pane_t_ParamLimits

0xf404,	// (0x00099b09) pec_content_pane_t

0xc69f,	// (0x00096da4) list_single_graphic_pane_cp01_ParamLimits

0xc69f,	// (0x00096da4) list_single_graphic_pane_cp01

0xc632,	// (0x00096d37) bg_popup_sub_pane_cp04

0xd45d,	// (0x00097b62) popup_mup_playback_window_g1

0xd469,	// (0x00097b6e) popup_mup_playback_window_t1

0xd47e,	// (0x00097b83) popup_mup_playback_window_t2

0x0001,

0xf409,	// (0x00099b0e) popup_mup_playback_window_t

0xd4b5,	// (0x00097bba) main_image_pane_g1_ParamLimits

0xd4b5,	// (0x00097bba) main_image_pane_g1

0xd4f8,	// (0x00097bfd) scroll_pane_cp018_ParamLimits

0xd4f8,	// (0x00097bfd) scroll_pane_cp018

0xd510,	// (0x00097c15) scroll_pane_cp016_ParamLimits

0xd510,	// (0x00097c15) scroll_pane_cp016

0x50b0,	// (0x0008f7b5) smil2_image_pane_ParamLimits

0x50b0,	// (0x0008f7b5) smil2_image_pane

0x50e6,	// (0x0008f7eb) smil2_root_pane_ParamLimits

0x50e6,	// (0x0008f7eb) smil2_root_pane

0x5112,	// (0x0008f817) smil2_text_pane_ParamLimits

0x5112,	// (0x0008f817) smil2_text_pane

0x0a98,	// (0x0008b19d) bg_list_pane_cp06

0x0a98,	// (0x0008b19d) grid_radio_pane

0xc3d7,	// (0x00096adc) bg_popup_window_pane_cp06

0xce7c,	// (0x00097581) main_fmradio_pane_t1

0xd00f,	// (0x00097714) heading_pane_cp04

0xce7c,	// (0x00097581) main_fmradio_pane_t2

0xe43f,	// (0x00098b44) popup_cale_lunar_info_window_g1

0xce7c,	// (0x00097581) main_fmradio_pane_t3

0xe447,	// (0x00098b4c) popup_cale_lunar_info_window_g2

0xce7c,	// (0x00097581) main_fmradio_pane_t4

0x0001,

0xce7c,	// (0x00097581) main_fmradio_pane_t5

0x0004,

0xf4cb,	// (0x00099bd0) popup_cale_lunar_info_window_g

0xf269,	// (0x0009996e) main_fmradio_pane_t

0x0a98,	// (0x0008b19d) wait_bar_pane_cp03

0xc69f,	// (0x00096da4) cell_fmradio_pane_ParamLimits

0xc69f,	// (0x00096da4) cell_fmradio_pane

0xc6ad,	// (0x00096db2) cell_fmradio_pane_g1_ParamLimits

0xc6ad,	// (0x00096db2) cell_fmradio_pane_g1

0x0a98,	// (0x0008b19d) grid_highlight_pane_cp011

0xd544,	// (0x00097c49) poc_content_pane_ParamLimits

0xd544,	// (0x00097c49) poc_content_pane

0xd556,	// (0x00097c5b) scroll_pane_cp019

0x5152,	// (0x0008f857) popup_call_poc_act_window_ParamLimits

0x5152,	// (0x0008f857) popup_call_poc_act_window

0x515f,	// (0x0008f864) popup_call_poc_inact_window_ParamLimits

0x515f,	// (0x0008f864) popup_call_poc_inact_window

0xf4a2,	// (0x00099ba7) bg_popup_call_poc_act_pane_g

0xe3b7,	// (0x00098abc) bg_popup_call_poc_inact_pane_g1

0xe3bf,	// (0x00098ac4) bg_popup_call_poc_inact_pane_g2

0xd55e,	// (0x00097c63) popup_call_poc_act_window_g2

0xe3c7,	// (0x00098acc) bg_popup_call_poc_inact_pane_g3

0xe3cf,	// (0x00098ad4) bg_popup_call_poc_inact_pane_g4

0xe3d7,	// (0x00098adc) bg_popup_call_poc_inact_pane_g5

0xd566,	// (0x00097c6b) popup_call_poc_act_window_t1_ParamLimits

0xd566,	// (0x00097c6b) popup_call_poc_act_window_t1

0xd58e,	// (0x00097c93) popup_call_poc_act_window_t2_ParamLimits

0xd58e,	// (0x00097c93) popup_call_poc_act_window_t2

0xd5b6,	// (0x00097cbb) popup_call_poc_act_window_t3_ParamLimits

0xd5b6,	// (0x00097cbb) popup_call_poc_act_window_t3

0xd5de,	// (0x00097ce3) popup_call_poc_act_window_t4_ParamLimits

0xd5de,	// (0x00097ce3) popup_call_poc_act_window_t4

0x0003,

0xf41e,	// (0x00099b23) popup_call_poc_act_window_t_ParamLimits

0xf41e,	// (0x00099b23) popup_call_poc_act_window_t

0xe3df,	// (0x00098ae4) bg_popup_call_poc_inact_pane_g6

0xe3e7,	// (0x00098aec) bg_popup_call_poc_inact_pane_g7

0xe3ef,	// (0x00098af4) bg_popup_call_poc_inact_pane_g8

0xd5f0,	// (0x00097cf5) popup_call_poc_inact_window_g2

0xe3f7,	// (0x00098afc) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf48f,	// (0x00099b94) bg_popup_call_poc_inact_pane_g

0xd5f8,	// (0x00097cfd) popup_call_poc_inact_window_t1_ParamLimits

0xd5f8,	// (0x00097cfd) popup_call_poc_inact_window_t1

0xd60d,	// (0x00097d12) popup_call_poc_inact_window_t2_ParamLimits

0xd60d,	// (0x00097d12) popup_call_poc_inact_window_t2

0xd622,	// (0x00097d27) popup_call_poc_inact_window_t3_ParamLimits

0xd622,	// (0x00097d27) popup_call_poc_inact_window_t3

0x0002,

0xf427,	// (0x00099b2c) popup_call_poc_inact_window_t_ParamLimits

0xf427,	// (0x00099b2c) popup_call_poc_inact_window_t

0xe4eb,	// (0x00098bf0) context_pane_ParamLimits

0x579a,	// (0x0008fe9f) signal_pane_ParamLimits

0xc958,	// (0x0009705d) main_call2_pane

0x5706,	// (0x0008fe0b) popup_phob_thumbnail2_window_ParamLimits

0x5706,	// (0x0008fe0b) popup_phob_thumbnail2_window

0x4e42,	// (0x0008f547) aid_hotspot_pointer_arrow_pane

0x4e4a,	// (0x0008f54f) aid_hotspot_pointer_hand_pane

0x542f,	// (0x0008fb34) phob_pre_status_pane_g5

0xc69f,	// (0x00096da4) cams_zoom_pane_ParamLimits

0xc69f,	// (0x00096da4) image_vga_pane_ParamLimits

0xc6bb,	// (0x00096dc0) main_camera_pane_g1_ParamLimits

0xc6bb,	// (0x00096dc0) main_camera_pane_g2_ParamLimits

0xc6bb,	// (0x00096dc0) main_camera_pane_g3_ParamLimits

0xc6bb,	// (0x00096dc0) main_camera_pane_g4_ParamLimits

0xc6bb,	// (0x00096dc0) main_camera_pane_g5_ParamLimits

0xc6bb,	// (0x00096dc0) main_camera_pane_g6_ParamLimits

0xc6bb,	// (0x00096dc0) main_camera_pane_g7_ParamLimits

0xf15d,	// (0x00099862) main_camera_pane_g_ParamLimits

0xc709,	// (0x00096e0e) main_camera_pane_t1_ParamLimits

0xc709,	// (0x00096e0e) main_camera_pane_t2_ParamLimits

0xf16e,	// (0x00099873) main_camera_pane_t_ParamLimits

0xc632,	// (0x00096d37) bg_popup_preview_window_pane_cp01_ParamLimits

0xc632,	// (0x00096d37) bg_popup_preview_window_pane_cp01

0xd637,	// (0x00097d3c) popup_phob_thumbnail2_window_g1_ParamLimits

0xd637,	// (0x00097d3c) popup_phob_thumbnail2_window_g1

0xc3d7,	// (0x00096adc) call2_cli_visual_pane

0x517b,	// (0x0008f880) popup_call2_audio_conf_window_ParamLimits

0x517b,	// (0x0008f880) popup_call2_audio_conf_window

0x5194,	// (0x0008f899) popup_call2_audio_first_window_ParamLimits

0x5194,	// (0x0008f899) popup_call2_audio_first_window

0x5232,	// (0x0008f937) popup_call2_audio_in_window_ParamLimits

0x5232,	// (0x0008f937) popup_call2_audio_in_window

0x5276,	// (0x0008f97b) popup_call2_audio_out_window_ParamLimits

0x5276,	// (0x0008f97b) popup_call2_audio_out_window

0x52e0,	// (0x0008f9e5) popup_call2_audio_second_window_ParamLimits

0x52e0,	// (0x0008f9e5) popup_call2_audio_second_window

0x533e,	// (0x0008fa43) popup_call2_audio_wait_window_ParamLimits

0x533e,	// (0x0008fa43) popup_call2_audio_wait_window

0xc3d7,	// (0x00096adc) bg_popup_call2_act_pane_cp03

0xc614,	// (0x00096d19) list_conf_pane_cp

0xd643,	// (0x00097d48) popup_call2_audio_conf_window_t1

0xd651,	// (0x00097d56) list_single_graphic_popup_conf2_pane_ParamLimits

0xd651,	// (0x00097d56) list_single_graphic_popup_conf2_pane

0xd071,	// (0x00097776) list_highlight_pane_cp04

0xd664,	// (0x00097d69) list_single_graphic_popup_conf2_pane_g1

0xd082,	// (0x00097787) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf42e,	// (0x00099b33) list_single_graphic_popup_conf2_pane_g

0xd66e,	// (0x00097d73) list_single_graphic_popup_conf2_pane_t1

0xd67c,	// (0x00097d81) bg_popup_call2_act_pane_cp01_ParamLimits

0xd67c,	// (0x00097d81) bg_popup_call2_act_pane_cp01

0xd706,	// (0x00097e0b) call_type_pane_cp05_ParamLimits

0xd706,	// (0x00097e0b) call_type_pane_cp05

0xd75a,	// (0x00097e5f) popup_call2_audio_second_window_g1_ParamLimits

0xd75a,	// (0x00097e5f) popup_call2_audio_second_window_g1

0xd7ae,	// (0x00097eb3) popup_call2_audio_second_window_g2_ParamLimits

0xd7ae,	// (0x00097eb3) popup_call2_audio_second_window_g2

0x0002,

0xf433,	// (0x00099b38) popup_call2_audio_second_window_g_ParamLimits

0xf433,	// (0x00099b38) popup_call2_audio_second_window_g

0xd813,	// (0x00097f18) popup_call2_audio_second_window_t1_ParamLimits

0xd813,	// (0x00097f18) popup_call2_audio_second_window_t1

0xd8ce,	// (0x00097fd3) popup_call2_audio_second_window_t2_ParamLimits

0xd8ce,	// (0x00097fd3) popup_call2_audio_second_window_t2

0xd921,	// (0x00098026) popup_call2_audio_second_window_t3_ParamLimits

0xd921,	// (0x00098026) popup_call2_audio_second_window_t3

0x0003,

0xf43a,	// (0x00099b3f) popup_call2_audio_second_window_t_ParamLimits

0xf43a,	// (0x00099b3f) popup_call2_audio_second_window_t

0xc3d7,	// (0x00096adc) bg_popup_call2_in_pane_cp02

0xc3e1,	// (0x00096ae6) call_type_pane_cp04

0x537d,	// (0x0008fa82) popup_call2_audio_wait_window_g1

0x5385,	// (0x0008fa8a) popup_call2_audio_wait_window_g2

0x0001,

0xf443,	// (0x00099b48) popup_call2_audio_wait_window_g

0xc3f9,	// (0x00096afe) popup_call2_audio_wait_window_t3

0xda14,	// (0x00098119) bg_popup_call2_act_pane_ParamLimits

0xda14,	// (0x00098119) bg_popup_call2_act_pane

0xdae2,	// (0x000981e7) call_type_pane_cp03_ParamLimits

0xdae2,	// (0x000981e7) call_type_pane_cp03

0xdb46,	// (0x0009824b) popup_call2_audio_first_window_g1_ParamLimits

0xdb46,	// (0x0009824b) popup_call2_audio_first_window_g1

0xdbb6,	// (0x000982bb) popup_call2_audio_first_window_g2_ParamLimits

0xdbb6,	// (0x000982bb) popup_call2_audio_first_window_g2

0xdad4,	// (0x000981d9) popup_call2_audio_first_window_g3_ParamLimits

0xdad4,	// (0x000981d9) popup_call2_audio_first_window_g3

0x0004,

0xf448,	// (0x00099b4d) popup_call2_audio_first_window_g_ParamLimits

0xf448,	// (0x00099b4d) popup_call2_audio_first_window_g

0xdc94,	// (0x00098399) popup_call2_audio_first_window_t1_ParamLimits

0xdc94,	// (0x00098399) popup_call2_audio_first_window_t1

0xdd97,	// (0x0009849c) popup_call2_audio_first_window_t4_ParamLimits

0xdd97,	// (0x0009849c) popup_call2_audio_first_window_t4

0xde7a,	// (0x0009857f) popup_call2_audio_first_window_t5_ParamLimits

0xde7a,	// (0x0009857f) popup_call2_audio_first_window_t5

0x0003,

0xf453,	// (0x00099b58) popup_call2_audio_first_window_t_ParamLimits

0xf453,	// (0x00099b58) popup_call2_audio_first_window_t

0xc62a,	// (0x00096d2f) bg_popup_call2_act_pane_g1

0xe451,	// (0x00098b56) popup_cale_lunar_info_window_t1

0xe45f,	// (0x00098b64) popup_cale_lunar_info_window_t2

0xe46d,	// (0x00098b72) popup_cale_lunar_info_window_t3

0xc3d7,	// (0x00096adc) bg_popup_call2_bubble_pane

0xdf7b,	// (0x00098680) bg_popup_call2_in_pane_cp01_ParamLimits

0xdf7b,	// (0x00098680) bg_popup_call2_in_pane_cp01

0x0bc6,	// (0x0008b2cb) call_type_pane_cp02

0x538d,	// (0x0008fa92) popup_call2_audio_out_window_g1_ParamLimits

0x538d,	// (0x0008fa92) popup_call2_audio_out_window_g1

0xdfc3,	// (0x000986c8) popup_call2_audio_out_window_g2_ParamLimits

0xdfc3,	// (0x000986c8) popup_call2_audio_out_window_g2

0x53b9,	// (0x0008fabe) popup_call2_audio_out_window_g3_ParamLimits

0x53b9,	// (0x0008fabe) popup_call2_audio_out_window_g3

0x0003,

0xf45c,	// (0x00099b61) popup_call2_audio_out_window_g_ParamLimits

0xf45c,	// (0x00099b61) popup_call2_audio_out_window_g

0xdffa,	// (0x000986ff) popup_call2_audio_out_window_t1_ParamLimits

0xdffa,	// (0x000986ff) popup_call2_audio_out_window_t1

0xe059,	// (0x0009875e) popup_call2_audio_out_window_t2_ParamLimits

0xe059,	// (0x0009875e) popup_call2_audio_out_window_t2

0xe0ad,	// (0x000987b2) popup_call2_audio_out_window_t3_ParamLimits

0xe0ad,	// (0x000987b2) popup_call2_audio_out_window_t3

0xe0c3,	// (0x000987c8) popup_call2_audio_out_window_t4_ParamLimits

0xe0c3,	// (0x000987c8) popup_call2_audio_out_window_t4

0xe0d9,	// (0x000987de) popup_call2_audio_out_window_t5_ParamLimits

0xe0d9,	// (0x000987de) popup_call2_audio_out_window_t5

0x0005,

0xf465,	// (0x00099b6a) popup_call2_audio_out_window_t_ParamLimits

0xf465,	// (0x00099b6a) popup_call2_audio_out_window_t

0xe13d,	// (0x00098842) bg_popup_call2_in_pane_ParamLimits

0xe13d,	// (0x00098842) bg_popup_call2_in_pane

0xe199,	// (0x0009889e) popup_call2_audio_in_window_g1_ParamLimits

0xe199,	// (0x0009889e) popup_call2_audio_in_window_g1

0xe1d1,	// (0x000988d6) popup_call2_audio_in_window_g2_ParamLimits

0xe1d1,	// (0x000988d6) popup_call2_audio_in_window_g2

0xe209,	// (0x0009890e) popup_call2_audio_in_window_g3_ParamLimits

0xe209,	// (0x0009890e) popup_call2_audio_in_window_g3

0x0003,

0xf472,	// (0x00099b77) popup_call2_audio_in_window_g_ParamLimits

0xf472,	// (0x00099b77) popup_call2_audio_in_window_g

0xe261,	// (0x00098966) popup_call2_audio_in_window_t1_ParamLimits

0xe261,	// (0x00098966) popup_call2_audio_in_window_t1

0xe2e1,	// (0x000989e6) popup_call2_audio_in_window_t2_ParamLimits

0xe2e1,	// (0x000989e6) popup_call2_audio_in_window_t2

0xe361,	// (0x00098a66) popup_call2_audio_in_window_t3_ParamLimits

0xe361,	// (0x00098a66) popup_call2_audio_in_window_t3

0xe37b,	// (0x00098a80) popup_call2_audio_in_window_t4_ParamLimits

0xe37b,	// (0x00098a80) popup_call2_audio_in_window_t4

0xe38d,	// (0x00098a92) popup_call2_audio_in_window_t5_ParamLimits

0xe38d,	// (0x00098a92) popup_call2_audio_in_window_t5

0xe3a2,	// (0x00098aa7) popup_call2_audio_in_window_t6_ParamLimits

0xe3a2,	// (0x00098aa7) popup_call2_audio_in_window_t6

0x0005,

0xf47b,	// (0x00099b80) popup_call2_audio_in_window_t_ParamLimits

0xf47b,	// (0x00099b80) popup_call2_audio_in_window_t

0xc62a,	// (0x00096d2f) bg_popup_call2_in_pane_g1

0xe47b,	// (0x00098b80) popup_cale_lunar_info_window_t4

0x0003,

0xf4d0,	// (0x00099bd5) popup_cale_lunar_info_window_t

0xc632,	// (0x00096d37) bg_popup_call2_rect_pane_ParamLimits

0xc632,	// (0x00096d37) bg_popup_call2_rect_pane

0xc3d7,	// (0x00096adc) call2_cli_visual_graphic_pane

0xc3d7,	// (0x00096adc) call2_cli_visual_text_pane

0x57d5,	// (0x0008feda) smil_status_volume_pane_g3

0x0002,

0xc64a,	// (0x00096d4f) call2_cli_visual_graphic_pane_g1

0xc64a,	// (0x00096d4f) call2_cli_visual_graphic_pane_g2

0xc64a,	// (0x00096d4f) call2_cli_visual_graphic_pane_g3

0x0002,

0xf488,	// (0x00099b8d) call2_cli_visual_graphic_pane_g

0xc86e,	// (0x00096f73) bg_popup_call2_rect_pane_g1

0xc866,	// (0x00096f6b) bg_popup_call2_rect_pane_g2

0xc85e,	// (0x00096f63) bg_popup_call2_rect_pane_g3

0xc87e,	// (0x00096f83) bg_popup_call2_rect_pane_g4

0xc876,	// (0x00096f7b) bg_popup_call2_rect_pane_g5

0xc886,	// (0x00096f8b) bg_popup_call2_rect_pane_g6

0xc88e,	// (0x00096f93) bg_popup_call2_rect_pane_g7

0xc89e,	// (0x00096fa3) bg_popup_call2_rect_pane_g8

0xc896,	// (0x00096f9b) bg_popup_call2_rect_pane_g9

0x0008,

0xf218,	// (0x0009991d) bg_popup_call2_rect_pane_g

0xe3b7,	// (0x00098abc) bg_popup_call2_bubble_pane_g1

0xe3bf,	// (0x00098ac4) bg_popup_call2_bubble_pane_g2

0xe3c7,	// (0x00098acc) bg_popup_call2_bubble_pane_g3

0xe3cf,	// (0x00098ad4) bg_popup_call2_bubble_pane_g4

0xe3d7,	// (0x00098adc) bg_popup_call2_bubble_pane_g5

0xe3df,	// (0x00098ae4) bg_popup_call2_bubble_pane_g6

0xe3e7,	// (0x00098aec) bg_popup_call2_bubble_pane_g7

0xe3ef,	// (0x00098af4) bg_popup_call2_bubble_pane_g8

0xe3f7,	// (0x00098afc) bg_popup_call2_bubble_pane_g9

0x0008,

0xf48f,	// (0x00099b94) bg_popup_call2_bubble_pane_g

0x2cbc,	// (0x0008d3c1) aid_cale_week_size_cell_pane

0xc632,	// (0x00096d37) aid_cams_cif_uncrop_pane_ParamLimits

0xc632,	// (0x00096d37) aid_cams_cif_uncrop_pane

0xc69f,	// (0x00096da4) aid_cams_size_cell_ParamLimits

0xc69f,	// (0x00096da4) aid_cams_size_cell

0xc69f,	// (0x00096da4) grid_cams_pane_ParamLimits

0xc69f,	// (0x00096da4) linegrid_cams_pane_ParamLimits

0x3570,	// (0x0008dc75) call_video_pane_t1

0x358d,	// (0x0008dc92) call_video_pane_t2

0x0001,

0xf1ba,	// (0x000998bf) call_video_pane_t

0x3a37,	// (0x0008e13c) aid_cale_month_size_cell_pane_ParamLimits

0x3a37,	// (0x0008e13c) aid_cale_month_size_cell_pane

0xf514,	// (0x00099c19) smil_status_volume_pane_g

0x57e2,	// (0x0008fee7) volume_smil_pane_ParamLimits

0x26c4,	// (0x0008cdc9) aid_popup2_width_pane

0x2c01,	// (0x0008d306) cell_qdial_pane_g4_ParamLimits

0x2c01,	// (0x0008d306) cell_qdial_pane_g4

0x4910,	// (0x0008f015) aid_blid_cardinal_pane_ParamLimits

0x4920,	// (0x0008f025) aid_blid_destination_pane_ParamLimits

0x4920,	// (0x0008f025) aid_blid_destination_pane

0xc632,	// (0x00096d37) bg_popup_call_poc_act_pane_ParamLimits

0xc632,	// (0x00096d37) bg_popup_call_poc_act_pane

0xc632,	// (0x00096d37) bg_popup_call_poc_inact_pane_ParamLimits

0xc632,	// (0x00096d37) bg_popup_call_poc_inact_pane

0xe3ff,	// (0x00098b04) bg_popup_call_poc_act_pane_g1

0xe407,	// (0x00098b0c) bg_popup_call_poc_act_pane_g2

0xe40f,	// (0x00098b14) bg_popup_call_poc_act_pane_g3

0xe3cf,	// (0x00098ad4) bg_popup_call_poc_act_pane_g4

0xe3d7,	// (0x00098adc) bg_popup_call_poc_act_pane_g5

0xe417,	// (0x00098b1c) bg_popup_call_poc_act_pane_g6

0xe3e7,	// (0x00098aec) bg_popup_call_poc_act_pane_g7

0xe41f,	// (0x00098b24) bg_popup_call_poc_act_pane_g8

0xc3d7,	// (0x00096adc) main_usb_pane

0x5623,	// (0x0008fd28) popup_cale_lunar_info_window

0x3892,	// (0x0008df97) im_reading_pane_t1_ParamLimits

0xca1b,	// (0x00097120) list_im_pane_ParamLimits

0xca2c,	// (0x00097131) scroll_pane_cp07_ParamLimits

0xc3d7,	// (0x00096adc) grid_highlight_pane_cp012

0xc632,	// (0x00096d37) mup_scale_pane_ParamLimits

0xc6bb,	// (0x00096dc0) main_usb_pane_g1_ParamLimits

0xc6bb,	// (0x00096dc0) main_usb_pane_g1

0xc6bb,	// (0x00096dc0) main_usb_pane_g2_ParamLimits

0xc6bb,	// (0x00096dc0) main_usb_pane_g2

0x0001,

0xf4b9,	// (0x00099bbe) main_usb_pane_g_ParamLimits

0xf4b9,	// (0x00099bbe) main_usb_pane_g

0xc709,	// (0x00096e0e) main_usb_pane_t1_ParamLimits

0xc709,	// (0x00096e0e) main_usb_pane_t1

0xc709,	// (0x00096e0e) main_usb_pane_t2_ParamLimits

0xc709,	// (0x00096e0e) main_usb_pane_t2

0xc709,	// (0x00096e0e) main_usb_pane_t3_ParamLimits

0xc709,	// (0x00096e0e) main_usb_pane_t3

0xc709,	// (0x00096e0e) main_usb_pane_t4_ParamLimits

0xc709,	// (0x00096e0e) main_usb_pane_t4

0xc709,	// (0x00096e0e) main_usb_pane_t5_ParamLimits

0xc709,	// (0x00096e0e) main_usb_pane_t5

0xc709,	// (0x00096e0e) main_usb_pane_t6_ParamLimits

0xc709,	// (0x00096e0e) main_usb_pane_t6

0x0005,

0xf4be,	// (0x00099bc3) main_usb_pane_t_ParamLimits

0x48af,	// (0x0008efb4) aid_text_placing

0x48ba,	// (0x0008efbf) main_location2_pane_t1_ParamLimits

0x48d0,	// (0x0008efd5) main_location2_pane_t2_ParamLimits

0x48e6,	// (0x0008efeb) main_location2_pane_t3_ParamLimits

0x48fc,	// (0x0008f001) main_location2_pane_t4_ParamLimits

0x48fc,	// (0x0008f001) main_location2_pane_t4

0xf2fb,	// (0x00099a00) main_location2_pane_t_ParamLimits

0xc660,	// (0x00096d65) find_pinb_pane_g2_ParamLimits

0xc660,	// (0x00096d65) find_pinb_pane_g2

0x0001,

0xf072,	// (0x00099777) find_pinb_pane_g_ParamLimits

0xf072,	// (0x00099777) find_pinb_pane_g

0xc66c,	// (0x00096d71) find_pinb_pane_t1_ParamLimits

0xc67e,	// (0x00096d83) find_pinb_pane_t2_ParamLimits

0xf077,	// (0x0009977c) find_pinb_pane_t_ParamLimits

0xc3d7,	// (0x00096adc) main_call3_pane

0x3fea,	// (0x0008e6ef) cale_month_day_heading_pane_t1_ParamLimits

0x406c,	// (0x0008e771) cale_month_day_heading_pane_t2_ParamLimits

0x40e5,	// (0x0008e7ea) cale_month_day_heading_pane_t3_ParamLimits

0x415e,	// (0x0008e863) cale_month_day_heading_pane_t4_ParamLimits

0x41d7,	// (0x0008e8dc) cale_month_day_heading_pane_t5_ParamLimits

0x4258,	// (0x0008e95d) cale_month_day_heading_pane_t6_ParamLimits

0x42e1,	// (0x0008e9e6) cale_month_day_heading_pane_t7_ParamLimits

0xf1f2,	// (0x000998f7) cale_month_day_heading_pane_t_ParamLimits

0xcc97,	// (0x0009739c) smil_status_volume_pane

0x4f8e,	// (0x0008f693) postcard_address_pane_ParamLimits

0x4f8e,	// (0x0008f693) postcard_address_pane

0x4f9c,	// (0x0008f6a1) postcard_message_pane_ParamLimits

0x4f9c,	// (0x0008f6a1) postcard_message_pane

0x53e5,	// (0x0008faea) call2_cli_visual_pane_t1_ParamLimits

0x53e5,	// (0x0008faea) call2_cli_visual_pane_t1

0xe59e,	// (0x00098ca3) postcard_message_pane_t1_ParamLimits

0xe59e,	// (0x00098ca3) postcard_message_pane_t1

0xe586,	// (0x00098c8b) postcard_address_pane_t1_ParamLimits

0xe586,	// (0x00098c8b) postcard_address_pane_t1

0x5919,	// (0x0009001e) popup_call3_audio_in_window_ParamLimits

0x5919,	// (0x0009001e) popup_call3_audio_in_window

0x57f7,	// (0x0008fefc) bg_popup_call3_in_pane_ParamLimits

0x57f7,	// (0x0008fefc) bg_popup_call3_in_pane

0x585f,	// (0x0008ff64) popup_call3_audio_in_window_g1_ParamLimits

0x585f,	// (0x0008ff64) popup_call3_audio_in_window_g1

0x5877,	// (0x0008ff7c) popup_call3_audio_in_window_g2_ParamLimits

0x5877,	// (0x0008ff7c) popup_call3_audio_in_window_g2

0x588f,	// (0x0008ff94) popup_call3_audio_in_window_g3_ParamLimits

0x588f,	// (0x0008ff94) popup_call3_audio_in_window_g3

0x0003,

0xf51b,	// (0x00099c20) popup_call3_audio_in_window_g_ParamLimits

0xf51b,	// (0x00099c20) popup_call3_audio_in_window_g

0x58b7,	// (0x0008ffbc) popup_call3_audio_in_window_t1_ParamLimits

0x58b7,	// (0x0008ffbc) popup_call3_audio_in_window_t1

0x58df,	// (0x0008ffe4) popup_call3_audio_in_window_t2_ParamLimits

0x58df,	// (0x0008ffe4) popup_call3_audio_in_window_t2

0x5907,	// (0x0009000c) popup_call3_audio_in_window_t3_ParamLimits

0x5907,	// (0x0009000c) popup_call3_audio_in_window_t3

0x0002,

0xf524,	// (0x00099c29) popup_call3_audio_in_window_t_ParamLimits

0xf524,	// (0x00099c29) popup_call3_audio_in_window_t

0xc958,	// (0x0009705d) bg_popup_call3_rect_pane

0xc86e,	// (0x00096f73) bg_popup_call3_rect_pane_g1

0xc866,	// (0x00096f6b) bg_popup_call3_rect_pane_g2

0xc85e,	// (0x00096f63) bg_popup_call3_rect_pane_g3

0xc87e,	// (0x00096f83) bg_popup_call3_rect_pane_g4

0xc876,	// (0x00096f7b) bg_popup_call3_rect_pane_g5

0xc886,	// (0x00096f8b) bg_popup_call3_rect_pane_g6

0xc88e,	// (0x00096f93) bg_popup_call3_rect_pane_g7

0x0a98,	// (0x0008b19d) mup_visualizer_osc_pane

0x0a98,	// (0x0008b19d) mup_visualizer_spec_pane

0x5817,	// (0x0008ff1c) call3_video_qcif_pane_ParamLimits

0x5817,	// (0x0008ff1c) call3_video_qcif_pane

0x5829,	// (0x0008ff2e) call3_video_qcif_uncrop_pane_ParamLimits

0x5829,	// (0x0008ff2e) call3_video_qcif_uncrop_pane

0x5839,	// (0x0008ff3e) call3_video_subqcif_pane_ParamLimits

0x5839,	// (0x0008ff3e) call3_video_subqcif_pane

0x584d,	// (0x0008ff52) call3_video_subqcif_uncrop_pane_ParamLimits

0x584d,	// (0x0008ff52) call3_video_subqcif_uncrop_pane

0x58a7,	// (0x0008ffac) popup_call3_audio_in_window_g4_ParamLimits

0x58a7,	// (0x0008ffac) popup_call3_audio_in_window_g4

0x0a98,	// (0x0008b19d) mup_spec_half_pane

0x0a98,	// (0x0008b19d) mup_spec_half_pane_cp

0x0a98,	// (0x0008b19d) mup_osc_middle_pane

0xc6eb,	// (0x00096df0) mup_visualizer_osc_pane_g1

0xe539,	// (0x00098c3e) mup_spec_bar_pane_ParamLimits

0xe539,	// (0x00098c3e) mup_spec_bar_pane

0xc6eb,	// (0x00096df0) mup_spec_bar_pane_g1

0xc6eb,	// (0x00096df0) mup_spec_bar_pane_g2

0x0001,

0xf08c,	// (0x00099791) mup_spec_bar_pane_g

0x2cbc,	// (0x0008d3c1) aid_cale_week_size_cell_pane_ParamLimits

0x2cd6,	// (0x0008d3db) bg_cale_heading_pane_ParamLimits

0x2cff,	// (0x0008d404) bg_cale_pane_cp01_ParamLimits

0x2d21,	// (0x0008d426) cale_week_corner_pane_ParamLimits

0x2d40,	// (0x0008d445) cale_week_day_heading_pane_ParamLimits

0x2d6e,	// (0x0008d473) cale_week_scroll_pane_g1_ParamLimits

0x2d92,	// (0x0008d497) cale_week_scroll_pane_g2_ParamLimits

0x2daa,	// (0x0008d4af) cale_week_scroll_pane_g3_ParamLimits

0x2dc2,	// (0x0008d4c7) cale_week_scroll_pane_g4_ParamLimits

0x2dda,	// (0x0008d4df) cale_week_scroll_pane_g5_ParamLimits

0x2df2,	// (0x0008d4f7) cale_week_scroll_pane_g6_ParamLimits

0x2e12,	// (0x0008d517) cale_week_scroll_pane_g7_ParamLimits

0x2e32,	// (0x0008d537) cale_week_scroll_pane_g8_ParamLimits

0x2e52,	// (0x0008d557) cale_week_scroll_pane_g9_ParamLimits

0x2e6f,	// (0x0008d574) cale_week_scroll_pane_g10_ParamLimits

0x2e8c,	// (0x0008d591) cale_week_scroll_pane_g11_ParamLimits

0x2eab,	// (0x0008d5b0) cale_week_scroll_pane_g12_ParamLimits

0x2ed0,	// (0x0008d5d5) cale_week_scroll_pane_g13_ParamLimits

0x2ef9,	// (0x0008d5fe) cale_week_scroll_pane_g14_ParamLimits

0x2f22,	// (0x0008d627) cale_week_scroll_pane_g15_ParamLimits

0xf103,	// (0x00099808) cale_week_scroll_pane_g_ParamLimits

0x2f6b,	// (0x0008d670) cale_week_time_pane_ParamLimits

0x2f8b,	// (0x0008d690) grid_cale_week_pane_ParamLimits

0xc8ce,	// (0x00096fd3) listscroll_cale_week_pane_t1

0xc8e0,	// (0x00096fe5) scroll_pane_cp08_ParamLimits

0x3aaf,	// (0x0008e1b4) cale_month_corner_pane_ParamLimits

0xcc6d,	// (0x00097372) cale_month_pane_t1

0x3f71,	// (0x0008e676) cale_month_week_pane_ParamLimits

0xdad4,	// (0x000981d9) popup_call_status_window_g1_ParamLimits

0x46de,	// (0x0008ede3) popup_call_status_window_g2_ParamLimits

0x46ea,	// (0x0008edef) popup_call_status_window_g3_ParamLimits

0xf282,	// (0x00099987) popup_call_status_window_g_ParamLimits

0xcfff,	// (0x00097704) aid_call2_pane

0x4da3,	// (0x0008f4a8) msg_header_pane_g1

0x4f8e,	// (0x0008f693) postcard_address2_pane_ParamLimits

0x4f8e,	// (0x0008f693) postcard_address2_pane

0x4f9c,	// (0x0008f6a1) postcard_message2_pane_ParamLimits

0x4f9c,	// (0x0008f6a1) postcard_message2_pane

0x57a8,	// (0x0008fead) message2_row_pane_ParamLimits

0x57a8,	// (0x0008fead) message2_row_pane

0x57c2,	// (0x0008fec7) address2_row_pane_ParamLimits

0x57c2,	// (0x0008fec7) address2_row_pane

0xe506,	// (0x00098c0b) postcard_message2_row_pane_g1

0xe50e,	// (0x00098c13) postcard_message2_row_pane_t1

0xe506,	// (0x00098c0b) address2_row_pane_g1

0xe50e,	// (0x00098c13) address2_row_pane_t1

0x3319,	// (0x0008da1e) aid_size_cell_vorec

0xc3d7,	// (0x00096adc) main_rss_pane

0xe51c,	// (0x00098c21) rss_list_single_pane_ParamLimits

0xe51c,	// (0x00098c21) rss_list_single_pane

0xe52a,	// (0x00098c2f) rss_list_single_pane_t1

0xe52a,	// (0x00098c2f) rss_list_single_pane_t2

0x0001,

0xf50f,	// (0x00099c14) rss_list_single_pane_t

0xc3d7,	// (0x00096adc) main_camera2_pane

0xc3d7,	// (0x00096adc) main_video2_pane

0x2969,	// (0x0008d06e) cams_zoom_pane_cp2_ParamLimits

0x2969,	// (0x0008d06e) cams_zoom_pane_cp2

0x2969,	// (0x0008d06e) image2_vga_pane_ParamLimits

0x2969,	// (0x0008d06e) image2_vga_pane

0xd032,	// (0x00097737) main_camera2_pane_g1_ParamLimits

0xd032,	// (0x00097737) main_camera2_pane_g1

0xd032,	// (0x00097737) main_camera2_pane_g2_ParamLimits

0xd032,	// (0x00097737) main_camera2_pane_g2

0xd032,	// (0x00097737) main_camera2_pane_g3_ParamLimits

0xd032,	// (0x00097737) main_camera2_pane_g3

0xd032,	// (0x00097737) main_camera2_pane_g4_ParamLimits

0xd032,	// (0x00097737) main_camera2_pane_g4

0xd032,	// (0x00097737) main_camera2_pane_g5_ParamLimits

0xd032,	// (0x00097737) main_camera2_pane_g5

0xd032,	// (0x00097737) main_camera2_pane_g6_ParamLimits

0xd032,	// (0x00097737) main_camera2_pane_g6

0xd032,	// (0x00097737) main_camera2_pane_g7_ParamLimits

0xd032,	// (0x00097737) main_camera2_pane_g7

0xd032,	// (0x00097737) main_camera2_pane_g8_ParamLimits

0xd032,	// (0x00097737) main_camera2_pane_g8

0x0008,

0xf52b,	// (0x00099c30) main_camera2_pane_g_ParamLimits

0xf52b,	// (0x00099c30) main_camera2_pane_g

0x5936,	// (0x0009003b) main_camera2_pane_t1_ParamLimits

0x5936,	// (0x0009003b) main_camera2_pane_t1

0x5936,	// (0x0009003b) main_camera2_pane_t2_ParamLimits

0x5936,	// (0x0009003b) main_camera2_pane_t2

0x5936,	// (0x0009003b) main_camera2_pane_t3_ParamLimits

0x5936,	// (0x0009003b) main_camera2_pane_t3

0x5936,	// (0x0009003b) main_camera2_pane_t4_ParamLimits

0x5936,	// (0x0009003b) main_camera2_pane_t4

0x0006,

0xf53e,	// (0x00099c43) main_camera2_pane_t_ParamLimits

0xf53e,	// (0x00099c43) main_camera2_pane_t

0x595e,	// (0x00090063) cams_zoom_pane_cp4_ParamLimits

0x595e,	// (0x00090063) cams_zoom_pane_cp4

0x55c8,	// (0x0008fccd) image2_cif_pane_ParamLimits

0x55c8,	// (0x0008fccd) image2_cif_pane

0x2969,	// (0x0008d06e) image2_subqcif_pane_ParamLimits

0x2969,	// (0x0008d06e) image2_subqcif_pane

0x596c,	// (0x00090071) main_video2_pane_g1_ParamLimits

0x596c,	// (0x00090071) main_video2_pane_g1

0x596c,	// (0x00090071) main_video2_pane_g2_ParamLimits

0x596c,	// (0x00090071) main_video2_pane_g2

0x596c,	// (0x00090071) main_video2_pane_g3_ParamLimits

0x596c,	// (0x00090071) main_video2_pane_g3

0x596c,	// (0x00090071) main_video2_pane_g4_ParamLimits

0x596c,	// (0x00090071) main_video2_pane_g4

0x596c,	// (0x00090071) main_video2_pane_g5_ParamLimits

0x596c,	// (0x00090071) main_video2_pane_g5

0x596c,	// (0x00090071) main_video2_pane_g6_ParamLimits

0x596c,	// (0x00090071) main_video2_pane_g6

0x0005,

0xf54d,	// (0x00099c52) main_video2_pane_g_ParamLimits

0xf54d,	// (0x00099c52) main_video2_pane_g

0x597a,	// (0x0009007f) main_video2_pane_t1_ParamLimits

0x597a,	// (0x0009007f) main_video2_pane_t1

0x597a,	// (0x0009007f) main_video2_pane_t2_ParamLimits

0x597a,	// (0x0009007f) main_video2_pane_t2

0x597a,	// (0x0009007f) main_video2_pane_t3_ParamLimits

0x597a,	// (0x0009007f) main_video2_pane_t3

0x0002,

0xf55a,	// (0x00099c5f) main_video2_pane_t_ParamLimits

0xf55a,	// (0x00099c5f) main_video2_pane_t

0x5493,	// (0x0008fb98) call_muted_g2

0x0001,

0xf501,	// (0x00099c06) call_muted_g

0xc3d7,	// (0x00096adc) main_mup2_pane

0xc6c9,	// (0x00096dce) main_mup2_pane_g1_ParamLimits

0xc6c9,	// (0x00096dce) main_mup2_pane_g1

0xc6c9,	// (0x00096dce) main_mup2_pane_g2_ParamLimits

0xc6c9,	// (0x00096dce) main_mup2_pane_g2

0x14b1,	// (0x0008bbb6) main_mup_pane_g13_cp1

0x2983,	// (0x0008d088) mup_volume_pane_cp1

0xc6c9,	// (0x00096dce) main_mup2_pane_g4_ParamLimits

0xc6c9,	// (0x00096dce) main_mup2_pane_g4

0xc6c9,	// (0x00096dce) main_mup2_pane_g5_ParamLimits

0xc6c9,	// (0x00096dce) main_mup2_pane_g5

0xc6c9,	// (0x00096dce) main_mup2_pane_g6_ParamLimits

0xc6c9,	// (0x00096dce) main_mup2_pane_g6

0xc6c9,	// (0x00096dce) main_mup2_pane_g7_ParamLimits

0xc6c9,	// (0x00096dce) main_mup2_pane_g7

0x0006,

0xf561,	// (0x00099c66) main_mup2_pane_g_ParamLimits

0xf561,	// (0x00099c66) main_mup2_pane_g

0xc6d7,	// (0x00096ddc) main_mup2_pane_t1_ParamLimits

0xc6d7,	// (0x00096ddc) main_mup2_pane_t1

0xc6d7,	// (0x00096ddc) main_mup2_pane_t2_ParamLimits

0xc6d7,	// (0x00096ddc) main_mup2_pane_t2

0xc6d7,	// (0x00096ddc) main_mup2_pane_t3_ParamLimits

0xc6d7,	// (0x00096ddc) main_mup2_pane_t3

0xc6d7,	// (0x00096ddc) main_mup2_pane_t4_ParamLimits

0xc6d7,	// (0x00096ddc) main_mup2_pane_t4

0xc6d7,	// (0x00096ddc) main_mup2_pane_t5_ParamLimits

0xc6d7,	// (0x00096ddc) main_mup2_pane_t5

0xc6d7,	// (0x00096ddc) main_mup2_pane_t6_ParamLimits

0xc6d7,	// (0x00096ddc) main_mup2_pane_t6

0x0005,

0xf570,	// (0x00099c75) main_mup2_pane_t_ParamLimits

0xf570,	// (0x00099c75) main_mup2_pane_t

0xe4dd,	// (0x00098be2) mup2_visualizer_pane_ParamLimits

0xe4dd,	// (0x00098be2) mup2_visualizer_pane

0xe4dd,	// (0x00098be2) mup_progress_pane_cp_ParamLimits

0xe4dd,	// (0x00098be2) mup_progress_pane_cp

0x5a49,	// (0x0009014e) mup_volume_pane_cp_ParamLimits

0x5a49,	// (0x0009014e) mup_volume_pane_cp

0xc6ad,	// (0x00096db2) mup2_visualizer_pane_g1_ParamLimits

0xc6ad,	// (0x00096db2) mup2_visualizer_pane_g1

0xc6bb,	// (0x00096dc0) mup2_visualizer_pane_g2_ParamLimits

0xc6bb,	// (0x00096dc0) mup2_visualizer_pane_g2

0xc6bb,	// (0x00096dc0) mup2_visualizer_pane_g3_ParamLimits

0xc6bb,	// (0x00096dc0) mup2_visualizer_pane_g3

0x0002,

0xf07c,	// (0x00099781) mup2_visualizer_pane_g_ParamLimits

0xf07c,	// (0x00099781) mup2_visualizer_pane_g

0x0a98,	// (0x0008b19d) aid_size_cell_fmradio

0x55a9,	// (0x0008fcae) aid_height_parent_landcape

0xcab9,	// (0x000971be) wml_content_pane_cp

0xcac1,	// (0x000971c6) wml_tabs_pane

0xcaca,	// (0x000971cf) popup_wml_miniature_window

0xcad2,	// (0x000971d7) scroll_pane_cp021

0xcae6,	// (0x000971eb) wml_content_pane_comp8

0xc3d7,	// (0x00096adc) bg_popup_sub_pane_cp05

0xe5d0,	// (0x00098cd5) popup_wml_miniature_window_g1

0xe5d8,	// (0x00098cdd) wml_miniature_view_pane

0x598e,	// (0x00090093) aid_size_wml_view

0x5996,	// (0x0009009b) wml_miniature_view_pane_g1

0x599f,	// (0x000900a4) wml_miniature_view_pane_g2

0x59a8,	// (0x000900ad) wml_miniature_view_pane_g3

0x59b0,	// (0x000900b5) wml_miniature_view_pane_g4

0x59b8,	// (0x000900bd) wml_miniature_view_pane_g5

0x59c0,	// (0x000900c5) wml_miniature_view_pane_g6

0x59c8,	// (0x000900cd) wml_miniature_view_pane_g7

0x59d0,	// (0x000900d5) wml_miniature_view_pane_g8

0x0007,

0xf57d,	// (0x00099c82) wml_miniature_view_pane_g

0xe5e0,	// (0x00098ce5) background_graphic_ParamLimits

0xe5e0,	// (0x00098ce5) background_graphic

0xe5ec,	// (0x00098cf1) wml_tabs_2_pane

0xe5f5,	// (0x00098cfa) wml_tabs_3_pane_ParamLimits

0xe5f5,	// (0x00098cfa) wml_tabs_3_pane

0xe607,	// (0x00098d0c) wml_tabs_4_pane_ParamLimits

0xe607,	// (0x00098d0c) wml_tabs_4_pane

0xe61d,	// (0x00098d22) wml_tabs_5_pane_ParamLimits

0xe61d,	// (0x00098d22) wml_tabs_5_pane

0xe637,	// (0x00098d3c) wml_tabs_pane_g2_ParamLimits

0xe637,	// (0x00098d3c) wml_tabs_pane_g2

0xe64c,	// (0x00098d51) wml_tabs_pane_g3_ParamLimits

0xe64c,	// (0x00098d51) wml_tabs_pane_g3

0xe661,	// (0x00098d66) wml_tabs_2_active_pane_ParamLimits

0xe661,	// (0x00098d66) wml_tabs_2_active_pane

0xe661,	// (0x00098d66) wml_tabs_2_passive_pane_ParamLimits

0xe661,	// (0x00098d66) wml_tabs_2_passive_pane

0x59d8,	// (0x000900dd) wml_tabs_3_active_pane_cp_ParamLimits

0x59d8,	// (0x000900dd) wml_tabs_3_active_pane_cp

0x59eb,	// (0x000900f0) wml_tabs_3_passive_pane_ParamLimits

0x59eb,	// (0x000900f0) wml_tabs_3_passive_pane

0x59fc,	// (0x00090101) wml_tabs_3_passive_pane_cp_ParamLimits

0x59fc,	// (0x00090101) wml_tabs_3_passive_pane_cp

0x5a11,	// (0x00090116) tabs_4_active_pane

0x5a19,	// (0x0009011e) tabs_4_passive_pane

0x5a21,	// (0x00090126) tabs_4_passive_pane_cp

0x5a29,	// (0x0009012e) tabs_4_passive_pane_cp2

0x5407,	// (0x0008fb0c) aid_height_text

0xe4dd,	// (0x00098be2) mup_volume_cont_pane_ParamLimits

0xe4dd,	// (0x00098be2) mup_volume_cont_pane

0x0a98,	// (0x0008b19d) aid_size_cell_pinb

0x0a98,	// (0x0008b19d) aid_size_list_pinb

0xe4dd,	// (0x00098be2) mup2_volume_cont_pane_ParamLimits

0xe4dd,	// (0x00098be2) mup2_volume_cont_pane

0x5a33,	// (0x00090138) mup2_volume_cont_pane_g1_ParamLimits

0x5a33,	// (0x00090138) mup2_volume_cont_pane_g1

0x26d0,	// (0x0008cdd5) aid_size_cell_touch_ParamLimits

0x26d0,	// (0x0008cdd5) aid_size_cell_touch

0x298d,	// (0x0008d092) touch_pane_ParamLimits

0x298d,	// (0x0008d092) touch_pane

0x2983,	// (0x0008d088) main_rss2_pane

0xe678,	// (0x00098d7d) listscroll_rss2_pane

0xe681,	// (0x00098d86) rss2_navigation_pane

0xe689,	// (0x00098d8e) list_rss2_pane

0xd116,	// (0x0009781b) scroll_pane_cp22

0xe691,	// (0x00098d96) rss2_navigation_pane_g1

0xe69a,	// (0x00098d9f) rss2_navigation_pane_g2

0xe6a2,	// (0x00098da7) rss2_navigation_pane_g3

0x0002,

0xf58e,	// (0x00099c93) rss2_navigation_pane_g

0xe6aa,	// (0x00098daf) rss2_navigation_pane_t1

0x5a5f,	// (0x00090164) rss2_list_single_pane_ParamLimits

0x5a5f,	// (0x00090164) rss2_list_single_pane

0xe6b8,	// (0x00098dbd) rss2_list_single_pane_t2

0xe6c6,	// (0x00098dcb) rss2_list_single_pane_t3_ParamLimits

0xe6c6,	// (0x00098dcb) rss2_list_single_pane_t3

0xe6e3,	// (0x00098de8) rss2_list_single_pane_t4

0x457f,	// (0x0008ec84) smil_status_pane_g1

0x55c8,	// (0x0008fccd) main_image2_pane_ParamLimits

0x55c8,	// (0x0008fccd) main_image2_pane

0xd032,	// (0x00097737) main_camera2_pane_g9_ParamLimits

0xd032,	// (0x00097737) main_camera2_pane_g9

0x5936,	// (0x0009003b) main_camera2_pane_t5_ParamLimits

0x5936,	// (0x0009003b) main_camera2_pane_t5

0x594a,	// (0x0009004f) main_camera2_pane_t6_ParamLimits

0x594a,	// (0x0009004f) main_camera2_pane_t6

0x5a82,	// (0x00090187) main_image2_pane_g1_ParamLimits

0x5a82,	// (0x00090187) main_image2_pane_g1

0x513c,	// (0x0008f841) smil2_video_pane_ParamLimits

0x513c,	// (0x0008f841) smil2_video_pane

0x269c,	// (0x0008cda1) aid_zoom_text_primary_cp

0x291e,	// (0x0008d023) popup_preview_fixed_window

0xca13,	// (0x00097118) im_reading_pane_g1

0x5928,	// (0x0009002d) cams2_bc_adjust_pane_cp_ParamLimits

0x5928,	// (0x0009002d) cams2_bc_adjust_pane_cp

0x2969,	// (0x0008d06e) cams2_bc_adjust_pane_ParamLimits

0x2969,	// (0x0008d06e) cams2_bc_adjust_pane

0x14b1,	// (0x0008bbb6) cams2_bc_adjust_pane_g1

0x2983,	// (0x0008d088) cams2_slider_pane

0x14b1,	// (0x0008bbb6) cams2_slider_pane_g1

0x14b1,	// (0x0008bbb6) cams2_slider_pane_g2

0x0006,

0xf595,	// (0x00099c9a) cams2_slider_pane_g

0x2a22,	// (0x0008d127) calc_display_pane_ParamLimits

0x2a40,	// (0x0008d145) calc_paper_pane_ParamLimits

0x2a5c,	// (0x0008d161) grid_calc_pane_ParamLimits

0x4748,	// (0x0008ee4d) popup_clock_digital_window_t1_ParamLimits

0xd4e1,	// (0x00097be6) main_image_pane_t1

0x2a08,	// (0x0008d10d) aid_size_cell_calc_ParamLimits

0x2a08,	// (0x0008d10d) aid_size_cell_calc

0x55f9,	// (0x0008fcfe) popup_blid_sat_info2_window_ParamLimits

0x55f9,	// (0x0008fcfe) popup_blid_sat_info2_window

0xe6f1,	// (0x00098df6) aid_size_cell_blid

0xe4dd,	// (0x00098be2) bg_popup_window_pane_cp07

0xe70e,	// (0x00098e13) grid_popup_blid_pane

0xe718,	// (0x00098e1d) heading_pane_cp05_ParamLimits

0xe718,	// (0x00098e1d) heading_pane_cp05

0xe804,	// (0x00098f09) cell_popup_blid_pane_ParamLimits

0xe804,	// (0x00098f09) cell_popup_blid_pane

0xe82e,	// (0x00098f33) cell_popup_blid_pane_g1

0xe836,	// (0x00098f3b) cell_popup_blid_pane_t1

0xe4dd,	// (0x00098be2) mup2_indicator_pane_ParamLimits

0xe4dd,	// (0x00098be2) mup2_indicator_pane

0x0a98,	// (0x0008b19d) mup2_visualizer_osc_pane

0xe5ba,	// (0x00098cbf) mup2_visualizer_spec_pane_ParamLimits

0xe5ba,	// (0x00098cbf) mup2_visualizer_spec_pane

0x0a98,	// (0x0008b19d) mup2_spec_half_pane

0x0a98,	// (0x0008b19d) mup2_spec_half_pane_cp

0xe844,	// (0x00098f49) mup2_spec_bar_pane_ParamLimits

0xe844,	// (0x00098f49) mup2_spec_bar_pane

0xc6eb,	// (0x00096df0) mup2_spec_bar_pane_g1

0xe863,	// (0x00098f68) mup2_spec_bar_pane_g2

0x0001,

0xf5bb,	// (0x00099cc0) mup2_spec_bar_pane_g

0x0a98,	// (0x0008b19d) mup2_osc_middle_pane

0xc6eb,	// (0x00096df0) mup2_visualizer_osc_pane_g1

0x0ac2,	// (0x0008b1c7) popup_number_entry_window_t1_ParamLimits

0x0ad5,	// (0x0008b1da) popup_number_entry_window_t2_ParamLimits

0x0ae7,	// (0x0008b1ec) popup_number_entry_window_t3_ParamLimits

0x0af9,	// (0x0008b1fe) popup_number_entry_window_t5_ParamLimits

0x0af9,	// (0x0008b1fe) popup_number_entry_window_t5

0xf01d,	// (0x00099722) popup_number_entry_window_t_ParamLimits

0x0b2e,	// (0x0008b233) text_title_cp2_ParamLimits

0x4e52,	// (0x0008f557) aid_hotspot_pointer_text2_pane

0x4eec,	// (0x0008f5f1) main_viewer_pane_g9_ParamLimits

0x4eec,	// (0x0008f5f1) main_viewer_pane_g9

0xcc6d,	// (0x00097372) cale_month_pane_t1_ParamLimits

0xccaa,	// (0x000973af) bg_cale_pane_ParamLimits

0xccc2,	// (0x000973c7) list_cale_pane_ParamLimits

0xccd3,	// (0x000973d8) listscroll_cale_day_pane_t1

0xcce5,	// (0x000973ea) scroll_pane_cp09_ParamLimits

0x4af8,	// (0x0008f1fd) main_mup_eq_pane_t1_ParamLimits

0x4af8,	// (0x0008f1fd) main_mup_eq_pane_t1

0x4b14,	// (0x0008f219) main_mup_eq_pane_t2_ParamLimits

0x4b14,	// (0x0008f219) main_mup_eq_pane_t2

0x4b30,	// (0x0008f235) main_mup_eq_pane_t3_ParamLimits

0x4b30,	// (0x0008f235) main_mup_eq_pane_t3

0x4b4a,	// (0x0008f24f) main_mup_eq_pane_t4_ParamLimits

0x4b4a,	// (0x0008f24f) main_mup_eq_pane_t4

0x4b64,	// (0x0008f269) main_mup_eq_pane_t5_ParamLimits

0x4b64,	// (0x0008f269) main_mup_eq_pane_t5

0x4b7e,	// (0x0008f283) main_mup_eq_pane_t6_ParamLimits

0x4b7e,	// (0x0008f283) main_mup_eq_pane_t6

0x4b94,	// (0x0008f299) main_mup_eq_pane_t7_ParamLimits

0x4b94,	// (0x0008f299) main_mup_eq_pane_t7

0x4baa,	// (0x0008f2af) main_mup_eq_pane_t8_ParamLimits

0x4baa,	// (0x0008f2af) main_mup_eq_pane_t8

0x4bc0,	// (0x0008f2c5) main_mup_eq_pane_t9_ParamLimits

0x4bc0,	// (0x0008f2c5) main_mup_eq_pane_t9

0x4bdc,	// (0x0008f2e1) main_mup_eq_pane_t10_ParamLimits

0x4bdc,	// (0x0008f2e1) main_mup_eq_pane_t10

0x0009,

0xf37c,	// (0x00099a81) main_mup_eq_pane_t_ParamLimits

0xf37c,	// (0x00099a81) main_mup_eq_pane_t

0x4ca1,	// (0x0008f3a6) mup_equalizer_pane_cp5_ParamLimits

0x4cb9,	// (0x0008f3be) mup_equalizer_pane_cp6_ParamLimits

0x4cd1,	// (0x0008f3d6) mup_equalizer_pane_cp7_ParamLimits

0x2983,	// (0x0008d088) main_gallery_pane

0xe558,	// (0x00098c5d) smil2_volume_pane

0xe560,	// (0x00098c65) smil_status_volume_pane_g1_ParamLimits

0xe573,	// (0x00098c78) smil_status_volume_pane_g2_ParamLimits

0x57d5,	// (0x0008feda) smil_status_volume_pane_g3_ParamLimits

0xf514,	// (0x00099c19) smil_status_volume_pane_g_ParamLimits

0xe4dd,	// (0x00098be2) bg_popup_window_pane_cp07_ParamLimits

0xe6f9,	// (0x00098dfe) blid_firmament_pane

0xc69f,	// (0x00096da4) aid_size_cell_gallery_ParamLimits

0xc69f,	// (0x00096da4) aid_size_cell_gallery

0xc69f,	// (0x00096da4) grid_gallery_pane_ParamLimits

0xc69f,	// (0x00096da4) grid_gallery_pane

0xd331,	// (0x00097a36) cell_gallery_pane_ParamLimits

0xd331,	// (0x00097a36) cell_gallery_pane

0x153a,	// (0x0008bc3f) bg_cell_gallery_focus_pane_ParamLimits

0x153a,	// (0x0008bc3f) bg_cell_gallery_focus_pane

0xc6ad,	// (0x00096db2) cell_gallery_pane_g1_ParamLimits

0xc6ad,	// (0x00096db2) cell_gallery_pane_g1

0xc6ad,	// (0x00096db2) cell_gallery_pane_g2_ParamLimits

0xc6ad,	// (0x00096db2) cell_gallery_pane_g2

0xc6ad,	// (0x00096db2) cell_gallery_pane_g3_ParamLimits

0xc6ad,	// (0x00096db2) cell_gallery_pane_g3

0xc6bb,	// (0x00096dc0) cell_gallery_pane_g4_ParamLimits

0xc6bb,	// (0x00096dc0) cell_gallery_pane_g4

0x0003,

0xf5c0,	// (0x00099cc5) cell_gallery_pane_g_ParamLimits

0xf5c0,	// (0x00099cc5) cell_gallery_pane_g

0xe86d,	// (0x00098f72) bg_cell_gallery_focus_pane_g1

0xe875,	// (0x00098f7a) bg_cell_gallery_focus_pane_g2

0xe87d,	// (0x00098f82) bg_cell_gallery_focus_pane_g3

0xe885,	// (0x00098f8a) bg_cell_gallery_focus_pane_g4

0xe88d,	// (0x00098f92) bg_cell_gallery_focus_pane_g5

0xe895,	// (0x00098f9a) bg_cell_gallery_focus_pane_g6

0xe89d,	// (0x00098fa2) bg_cell_gallery_focus_pane_g7

0xe8a5,	// (0x00098faa) bg_cell_gallery_focus_pane_g8

0x0007,

0xf5c9,	// (0x00099cce) bg_cell_gallery_focus_pane_g

0xe8ad,	// (0x00098fb2) aid_firma_cardinal

0xe8c1,	// (0x00098fc6) blid_firmament_pane_t1

0xe8d8,	// (0x00098fdd) blid_firmament_pane_t2

0xe8ef,	// (0x00098ff4) blid_firmament_pane_t3

0xe906,	// (0x0009900b) blid_firmament_pane_t4

0x0003,

0xf5da,	// (0x00099cdf) blid_firmament_pane_t

0xe91d,	// (0x00099022) blid_sat_info_pane

0xc6eb,	// (0x00096df0) blid_sat_info_pane_g1

0xc6eb,	// (0x00096df0) blid_sat_info_pane_g2

0x0001,

0xf08c,	// (0x00099791) blid_sat_info_pane_g

0xe92d,	// (0x00099032) blid_sat_info_pane_t1

0xe93b,	// (0x00099040) smil2_volume_content_pane

0xe944,	// (0x00099049) smil2_volume_pane_g1

0xcbf5,	// (0x000972fa) smil2_volume_content_pane_g1

0xe94c,	// (0x00099051) smil2_volume_content_pane_g2

0xe955,	// (0x0009905a) smil2_volume_content_pane_g3

0xe95e,	// (0x00099063) smil2_volume_content_pane_g4

0xe967,	// (0x0009906c) smil2_volume_content_pane_g5

0xe970,	// (0x00099075) smil2_volume_content_pane_g6

0xe979,	// (0x0009907e) smil2_volume_content_pane_g7

0xe982,	// (0x00099087) smil2_volume_content_pane_g8

0xe98b,	// (0x00099090) smil2_volume_content_pane_g9

0xe994,	// (0x00099099) smil2_volume_content_pane_g10

0x0009,

0xf5e3,	// (0x00099ce8) smil2_volume_content_pane_g

0x304c,	// (0x0008d751) cale_week_day_heading_pane_t1_ParamLimits

0x3074,	// (0x0008d779) cale_week_day_heading_pane_t2_ParamLimits

0x30a1,	// (0x0008d7a6) cale_week_day_heading_pane_t3_ParamLimits

0x30ce,	// (0x0008d7d3) cale_week_day_heading_pane_t4_ParamLimits

0x30fb,	// (0x0008d800) cale_week_day_heading_pane_t5_ParamLimits

0x3128,	// (0x0008d82d) cale_week_day_heading_pane_t6_ParamLimits

0x3155,	// (0x0008d85a) cale_week_day_heading_pane_t7_ParamLimits

0xf124,	// (0x00099829) cale_week_day_heading_pane_t_ParamLimits

0xc8fd,	// (0x00097002) bg_cale_side_pane_ParamLimits

0x317d,	// (0x0008d882) cale_week_time_pane_t1_ParamLimits

0x31a1,	// (0x0008d8a6) cale_week_time_pane_t2_ParamLimits

0x31c5,	// (0x0008d8ca) cale_week_time_pane_t3_ParamLimits

0x31e9,	// (0x0008d8ee) cale_week_time_pane_t4_ParamLimits

0x320d,	// (0x0008d912) cale_week_time_pane_t5_ParamLimits

0x3233,	// (0x0008d938) cale_week_time_pane_t6_ParamLimits

0x325b,	// (0x0008d960) cale_week_time_pane_t7_ParamLimits

0x3287,	// (0x0008d98c) cale_week_time_pane_t8_ParamLimits

0xf133,	// (0x00099838) cale_week_time_pane_t_ParamLimits

0x32b7,	// (0x0008d9bc) cell_cale_week_pane_g2_ParamLimits

0xc8fd,	// (0x00097002) bg_cale_side_pane_cp01_ParamLimits

0x436a,	// (0x0008ea6f) cale_month_week_pane_t1_ParamLimits

0x4383,	// (0x0008ea88) cale_month_week_pane_t2_ParamLimits

0x439c,	// (0x0008eaa1) cale_month_week_pane_t3_ParamLimits

0x43b5,	// (0x0008eaba) cale_month_week_pane_t4_ParamLimits

0x43ce,	// (0x0008ead3) cale_month_week_pane_t5_ParamLimits

0x43eb,	// (0x0008eaf0) cale_month_week_pane_t6_ParamLimits

0xf201,	// (0x00099906) cale_month_week_pane_t_ParamLimits

0x453c,	// (0x0008ec41) cell_cale_month_pane_g1_ParamLimits

0x2983,	// (0x0008d088) main_cale_event_viewer_pane

0x0a98,	// (0x0008b19d) listscroll_cale_event_viewer_pane

0xe99d,	// (0x000990a2) list_cale_ev_pane

0xe9a5,	// (0x000990aa) scroll_pane_cp023

0x5a8e,	// (0x00090193) field_cale_ev_pane_ParamLimits

0x5a8e,	// (0x00090193) field_cale_ev_pane

0xe9b1,	// (0x000990b6) field_cale_ev_content_pane_ParamLimits

0xe9b1,	// (0x000990b6) field_cale_ev_content_pane

0xe9bd,	// (0x000990c2) field_cale_ev_pane_g1_ParamLimits

0xe9bd,	// (0x000990c2) field_cale_ev_pane_g1

0xe9c9,	// (0x000990ce) field_cale_ev_pane_g2_ParamLimits

0xe9c9,	// (0x000990ce) field_cale_ev_pane_g2

0xe9e1,	// (0x000990e6) field_cale_ev_pane_g3_ParamLimits

0xe9e1,	// (0x000990e6) field_cale_ev_pane_g3

0x0002,

0xf5f8,	// (0x00099cfd) field_cale_ev_pane_g_ParamLimits

0xf5f8,	// (0x00099cfd) field_cale_ev_pane_g

0xe9f9,	// (0x000990fe) field_cale_ev_pane_t1_ParamLimits

0xe9f9,	// (0x000990fe) field_cale_ev_pane_t1

0x5ab2,	// (0x000901b7) field_cale_ev_content_pane_t1_ParamLimits

0x5ab2,	// (0x000901b7) field_cale_ev_content_pane_t1

0xd3ce,	// (0x00097ad3) bg_button_pane_cp01

0x2ca1,	// (0x0008d3a6) listscroll_cale_week_pane_ParamLimits

0x2cb3,	// (0x0008d3b8) popup_toolbar_window_cp01

0xc8ce,	// (0x00096fd3) listscroll_cale_week_pane_t1_ParamLimits

0x4608,	// (0x0008ed0d) listscroll_cale_day_pane_ParamLimits

0xcbec,	// (0x000972f1) popup_toolbar_window_cp02

0xccd3,	// (0x000973d8) listscroll_cale_day_pane_t1_ParamLimits

0x2ca1,	// (0x0008d3a6) main_cale_month_pane_ParamLimits

0x5718,	// (0x0008fe1d) popup_toolbar_window_cp03_ParamLimits

0x5718,	// (0x0008fe1d) popup_toolbar_window_cp03

0x504c,	// (0x0008f751) main_image_pane_g2_ParamLimits

0x504c,	// (0x0008f751) main_image_pane_g2

0x5058,	// (0x0008f75d) main_image_pane_g3_ParamLimits

0x5058,	// (0x0008f75d) main_image_pane_g3

0x0002,

0xf40e,	// (0x00099b13) main_image_pane_g_ParamLimits

0xf40e,	// (0x00099b13) main_image_pane_g

0xd4e1,	// (0x00097be6) main_image_pane_t1_ParamLimits

0x5064,	// (0x0008f769) main_image_pane_t2_ParamLimits

0x5064,	// (0x0008f769) main_image_pane_t2

0x5076,	// (0x0008f77b) main_image_pane_t3_ParamLimits

0x5076,	// (0x0008f77b) main_image_pane_t3

0x5088,	// (0x0008f78d) main_image_pane_t4_ParamLimits

0x5088,	// (0x0008f78d) main_image_pane_t4

0x0003,

0xf415,	// (0x00099b1a) main_image_pane_t_ParamLimits

0xf415,	// (0x00099b1a) main_image_pane_t

0x509a,	// (0x0008f79f) popup_image_details_window_cp01

0x50a4,	// (0x0008f7a9) popup_toobar_trans_pane_cp01_ParamLimits

0x50a4,	// (0x0008f7a9) popup_toobar_trans_pane_cp01

0x565a,	// (0x0008fd5f) popup_image_details_window_ParamLimits

0x565a,	// (0x0008fd5f) popup_image_details_window

0x5668,	// (0x0008fd6d) popup_image_focus_window

0x2969,	// (0x0008d06e) camera2_autofocus_pane_ParamLimits

0x2969,	// (0x0008d06e) camera2_autofocus_pane

0x0a98,	// (0x0008b19d) bg_popup_sub_pane_cp06

0xea10,	// (0x00099115) popup_image_focus_window_g1

0xea18,	// (0x0009911d) popup_image_focus_window_g2

0xea20,	// (0x00099125) popup_image_focus_window_g3

0xea28,	// (0x0009912d) popup_image_focus_window_g4

0x0003,

0xf5ff,	// (0x00099d04) popup_image_focus_window_g

0xea30,	// (0x00099135) popup_image_focus_window_t1

0xea3e,	// (0x00099143) popup_image_focus_window_t2

0xea4e,	// (0x00099153) popup_image_focus_window_t3

0x0002,

0xf608,	// (0x00099d0d) popup_image_focus_window_t

0xc6ad,	// (0x00096db2) camera2_autofocus_pane_g1

0x153a,	// (0x0008bc3f) bg_tb_trans_pane_cp01

0xea5c,	// (0x00099161) popup_image_details_window_g1

0xea6f,	// (0x00099174) popup_image_details_window_g2

0x0002,

0xf61a,	// (0x00099d1f) popup_image_details_window_g

0xea98,	// (0x0009919d) popup_image_details_window_t1

0xeaaa,	// (0x000991af) popup_image_details_window_t2

0xeac3,	// (0x000991c8) popup_image_details_window_t3

0xead7,	// (0x000991dc) popup_image_details_window_t4

0xeaf2,	// (0x000991f7) popup_image_details_window_t5

0x0004,

0xf621,	// (0x00099d26) popup_image_details_window_t

0xc735,	// (0x00096e3a) bg_calc_paper_pane_ParamLimits

0x2983,	// (0x0008d088) grid_highlight_pane_cp013

0x2a97,	// (0x0008d19c) list_calc_pane_ParamLimits

0x2aa9,	// (0x0008d1ae) scroll_pane_cp024

0xc749,	// (0x00096e4e) bg_calc_display_pane_ParamLimits

0x2ab1,	// (0x0008d1b6) calc_display_pane_t1_ParamLimits

0x2ac6,	// (0x0008d1cb) calc_display_pane_t2_ParamLimits

0x2adb,	// (0x0008d1e0) calc_display_pane_t3_ParamLimits

0xf0a4,	// (0x000997a9) calc_display_pane_t_ParamLimits

0x2bab,	// (0x0008d2b0) cell_calc_pane_g2

0x0001,

0xf0c1,	// (0x000997c6) cell_calc_pane_g

0x2bb4,	// (0x0008d2b9) cell_calc_pane_t1

0xc79e,	// (0x00096ea3) grid_highlight_pane_cp02_ParamLimits

0xc7d8,	// (0x00096edd) toolbar_button_pane_cp01_ParamLimits

0xc7d8,	// (0x00096edd) toolbar_button_pane_cp01

0xd526,	// (0x00097c2b) temp_image_control_pane_ParamLimits

0xd526,	// (0x00097c2b) temp_image_control_pane

0x55c8,	// (0x0008fccd) main_mp3_pane

0xeb0c,	// (0x00099211) temp_image_control_pane_g1_ParamLimits

0xeb0c,	// (0x00099211) temp_image_control_pane_g1

0xeb1a,	// (0x0009921f) temp_image_control_pane_g2_ParamLimits

0xeb1a,	// (0x0009921f) temp_image_control_pane_g2

0xeb2c,	// (0x00099231) temp_image_control_pane_g3_ParamLimits

0xeb2c,	// (0x00099231) temp_image_control_pane_g3

0x5acd,	// (0x000901d2) temp_image_control_pane_g4_ParamLimits

0x5acd,	// (0x000901d2) temp_image_control_pane_g4

0x0003,

0xf62c,	// (0x00099d31) temp_image_control_pane_g_ParamLimits

0xf62c,	// (0x00099d31) temp_image_control_pane_g

0xeb0c,	// (0x00099211) main_mp3_pane_g1

0x5ade,	// (0x000901e3) main_mp3_pane_g2

0x0007,

0xf635,	// (0x00099d3a) main_mp3_pane_g

0xeb61,	// (0x00099266) main_mp3_pane_t1

0xc6bb,	// (0x00096dc0) main_camera_pane_g8_ParamLimits

0xc6bb,	// (0x00096dc0) main_camera_pane_g8

0x3463,	// (0x0008db68) main_video_pane_g7_ParamLimits

0x3463,	// (0x0008db68) main_video_pane_g7

0x5936,	// (0x0009003b) main_camera2_pane_t7_ParamLimits

0x5936,	// (0x0009003b) main_camera2_pane_t7

0xca79,	// (0x0009717e) scroll_pane_cp025_ParamLimits

0xca79,	// (0x0009717e) scroll_pane_cp025

0xca8d,	// (0x00097192) scroll_pane_cp026_ParamLimits

0xca8d,	// (0x00097192) scroll_pane_cp026

0xca9c,	// (0x000971a1) wml_content_pane_ParamLimits

0x2983,	// (0x0008d088) main_touch_calib_pane

0x5b82,	// (0x00090287) main_touch_calib_pane_g1

0x5b8e,	// (0x00090293) main_touch_calib_pane_g2

0x5b9a,	// (0x0009029f) main_touch_calib_pane_g3

0x5ba6,	// (0x000902ab) main_touch_calib_pane_g4

0x0003,

0xf653,	// (0x00099d58) main_touch_calib_pane_g

0x5bb2,	// (0x000902b7) main_touch_calib_pane_t1

0x5bc9,	// (0x000902ce) main_touch_calib_pane_t2

0x0004,

0xf65c,	// (0x00099d61) main_touch_calib_pane_t

0xd191,	// (0x00097896) mup_progress_pane_cp02

0xd1b0,	// (0x000978b5) navi_pane_g1

0xd212,	// (0x00097917) navi_pane_mp_t3

0x55c8,	// (0x0008fccd) main_mp3_pane_ParamLimits

0x5759,	// (0x0008fe5e) navi_pane_ParamLimits

0xeb0c,	// (0x00099211) main_mp3_pane_g1_ParamLimits

0x5ade,	// (0x000901e3) main_mp3_pane_g2_ParamLimits

0x5aea,	// (0x000901ef) main_mp3_pane_g3_ParamLimits

0x5aea,	// (0x000901ef) main_mp3_pane_g3

0x5af6,	// (0x000901fb) main_mp3_pane_g4_ParamLimits

0x5af6,	// (0x000901fb) main_mp3_pane_g4

0xc6ad,	// (0x00096db2) main_mp3_pane_g5_ParamLimits

0xc6ad,	// (0x00096db2) main_mp3_pane_g5

0xeb3c,	// (0x00099241) main_mp3_pane_g6_ParamLimits

0xeb3c,	// (0x00099241) main_mp3_pane_g6

0xeb49,	// (0x0009924e) main_mp3_pane_g7_ParamLimits

0xeb49,	// (0x0009924e) main_mp3_pane_g7

0xeb55,	// (0x0009925a) main_mp3_pane_g8_ParamLimits

0xeb55,	// (0x0009925a) main_mp3_pane_g8

0xf635,	// (0x00099d3a) main_mp3_pane_g_ParamLimits

0x5b02,	// (0x00090207) main_mp3_pane_t2

0x5b12,	// (0x00090217) main_mp3_pane_t3

0xeb6f,	// (0x00099274) main_mp3_pane_t4

0xeb7d,	// (0x00099282) main_mp3_pane_t5

0x0005,

0xf646,	// (0x00099d4b) main_mp3_pane_t

0xeb8b,	// (0x00099290) mup_progress_pane_cp01

0x55b3,	// (0x0008fcb8) aid_zoom_text_secondary2

0xe99d,	// (0x000990a2) list_cale_ev2_pane

0xe9a5,	// (0x000990aa) scroll_pane_cp023_ParamLimits

0x5c24,	// (0x00090329) field_cale_ev2_pane_ParamLimits

0x5c24,	// (0x00090329) field_cale_ev2_pane

0x5c3f,	// (0x00090344) field_cale_ev2_pane_g1_ParamLimits

0x5c3f,	// (0x00090344) field_cale_ev2_pane_g1

0x5c4b,	// (0x00090350) field_cale_ev2_pane_g2_ParamLimits

0x5c4b,	// (0x00090350) field_cale_ev2_pane_g2

0x5c63,	// (0x00090368) field_cale_ev2_pane_g3_ParamLimits

0x5c63,	// (0x00090368) field_cale_ev2_pane_g3

0x0003,

0xf667,	// (0x00099d6c) field_cale_ev2_pane_g_ParamLimits

0xf667,	// (0x00099d6c) field_cale_ev2_pane_g

0x5c7b,	// (0x00090380) field_cale_ev2_pane_t1_ParamLimits

0x5c7b,	// (0x00090380) field_cale_ev2_pane_t1

0x5c92,	// (0x00090397) field_cale_ev2_pane_t2_ParamLimits

0x5c92,	// (0x00090397) field_cale_ev2_pane_t2

0x0001,

0xf670,	// (0x00099d75) field_cale_ev2_pane_t_ParamLimits

0xf670,	// (0x00099d75) field_cale_ev2_pane_t

0x4f54,	// (0x0008f659) main_postcard_pane_g5_ParamLimits

0x4f54,	// (0x0008f659) main_postcard_pane_g5

0x4f62,	// (0x0008f667) main_postcard_pane_g6_ParamLimits

0x4f62,	// (0x0008f667) main_postcard_pane_g6

0xc69f,	// (0x00096da4) camera2_autofocus_pane_cp_ParamLimits

0xc69f,	// (0x00096da4) camera2_autofocus_pane_cp

0x55c8,	// (0x0008fccd) main_mup3_pane

0x5cea,	// (0x000903ef) main_mup3_pane_g1_ParamLimits

0x5cea,	// (0x000903ef) main_mup3_pane_g1

0x5d39,	// (0x0009043e) main_mup3_pane_g2_ParamLimits

0x5d39,	// (0x0009043e) main_mup3_pane_g2

0x5d94,	// (0x00090499) main_mup3_pane_g3_ParamLimits

0x5d94,	// (0x00090499) main_mup3_pane_g3

0x5df7,	// (0x000904fc) main_mup3_pane_g4_ParamLimits

0x5df7,	// (0x000904fc) main_mup3_pane_g4

0x5e5a,	// (0x0009055f) main_mup3_pane_g5_ParamLimits

0x5e5a,	// (0x0009055f) main_mup3_pane_g5

0x5ebd,	// (0x000905c2) main_mup3_pane_g6_ParamLimits

0x5ebd,	// (0x000905c2) main_mup3_pane_g6

0xc6bb,	// (0x00096dc0) main_mup3_pane_g7_ParamLimits

0xc6bb,	// (0x00096dc0) main_mup3_pane_g7

0x0007,

0xf680,	// (0x00099d85) main_mup3_pane_g_ParamLimits

0xf680,	// (0x00099d85) main_mup3_pane_g

0x5f35,	// (0x0009063a) main_mup3_pane_t1_ParamLimits

0x5f35,	// (0x0009063a) main_mup3_pane_t1

0x600e,	// (0x00090713) main_mup3_pane_t2_ParamLimits

0x600e,	// (0x00090713) main_mup3_pane_t2

0x60eb,	// (0x000907f0) main_mup3_pane_t4_ParamLimits

0x60eb,	// (0x000907f0) main_mup3_pane_t4

0x60fd,	// (0x00090802) main_mup3_pane_t5_ParamLimits

0x60fd,	// (0x00090802) main_mup3_pane_t5

0x61cb,	// (0x000908d0) main_mup3_pane_t6_ParamLimits

0x61cb,	// (0x000908d0) main_mup3_pane_t6

0x0005,

0xf691,	// (0x00099d96) main_mup3_pane_t_ParamLimits

0xf691,	// (0x00099d96) main_mup3_pane_t

0x6268,	// (0x0009096d) mup3_progress_pane_ParamLimits

0x6268,	// (0x0009096d) mup3_progress_pane

0xb242,	// (0x00095947) popup_mup3_control_window_ParamLimits

0xb242,	// (0x00095947) popup_mup3_control_window

0xeb9f,	// (0x000992a4) popup_mup3_text_window

0x62cb,	// (0x000909d0) mup3_progress_pane_t1

0x62e1,	// (0x000909e6) mup3_progress_pane_t2

0xeba7,	// (0x000992ac) mup3_progress_pane_t3

0x0002,

0xf69e,	// (0x00099da3) mup3_progress_pane_t

0xebbe,	// (0x000992c3) mup_progress_pane_cp03

0xebcf,	// (0x000992d4) bg_tb_trans_pane_cp04

0xebcf,	// (0x000992d4) mup3_volume_pane

0xebd7,	// (0x000992dc) popup_mup3_control_window_g1

0xebd7,	// (0x000992dc) mup3_volume_pane_g1

0xebd7,	// (0x000992dc) mup3_volume_pane_g2

0xebd7,	// (0x000992dc) mup3_volume_pane_g3

0x0002,

0xf6a5,	// (0x00099daa) mup3_volume_pane_g

0x0a98,	// (0x0008b19d) bg_tb_trans_pane_cp03

0xebdf,	// (0x000992e4) popup_mup3_text_window_g1

0xebe7,	// (0x000992ec) popup_mup3_text_window_t1

0xc791,	// (0x00096e96) list_calc_item_pane_g1_ParamLimits

0xe66f,	// (0x00098d74) mup_volume_pane_cp_g1

0x5be2,	// (0x000902e7) main_touch_calib_pane_t3

0x5bf8,	// (0x000902fd) main_touch_calib_pane_t4

0x5c0e,	// (0x00090313) main_touch_calib_pane_t5

0x26bc,	// (0x0008cdc1) aid_cell_size_toolbar2

0x26c4,	// (0x0008cdc9) aid_popup3_width_pane

0x268c,	// (0x0008cd91) aid_zoom_text_msg_primary

0x3363,	// (0x0008da68) vorec_t7

0xc755,	// (0x00096e5a) bg_calc_paper_pane_g1_ParamLimits

0xc761,	// (0x00096e66) bg_calc_paper_pane_g2_ParamLimits

0xc76d,	// (0x00096e72) bg_calc_paper_pane_g3_ParamLimits

0xc779,	// (0x00096e7e) bg_calc_paper_pane_g4_ParamLimits

0xc785,	// (0x00096e8a) bg_calc_paper_pane_g5_ParamLimits

0x2b1c,	// (0x0008d221) bg_calc_paper_pane_g6_ParamLimits

0x2b2d,	// (0x0008d232) bg_calc_paper_pane_g7_ParamLimits

0x2b3e,	// (0x0008d243) bg_calc_paper_pane_g8_ParamLimits

0xf0ab,	// (0x000997b0) bg_calc_paper_pane_g_ParamLimits

0x2b4f,	// (0x0008d254) calc_bg_paper_pane_g9_ParamLimits

0xc69f,	// (0x00096da4) image_qvga_pane_ParamLimits

0xc69f,	// (0x00096da4) image_qvga_pane

0xc632,	// (0x00096d37) bg_popup_sub_pane_cp04_ParamLimits

0xd45d,	// (0x00097b62) popup_mup_playback_window_g1_ParamLimits

0xd469,	// (0x00097b6e) popup_mup_playback_window_t1_ParamLimits

0xd47e,	// (0x00097b83) popup_mup_playback_window_t2_ParamLimits

0xf409,	// (0x00099b0e) popup_mup_playback_window_t_ParamLimits

0xc6ad,	// (0x00096db2) main_mup2_pane_g3_ParamLimits

0xc6ad,	// (0x00096db2) main_mup2_pane_g3

0x3604,	// (0x0008dd09) popup_toolbar_window_cp04

0xd802,	// (0x00097f07) popup_call2_audio_second_window_g3_ParamLimits

0xd802,	// (0x00097f07) popup_call2_audio_second_window_g3

0xdc1a,	// (0x0009831f) popup_call2_audio_first_window_g4_ParamLimits

0xdc1a,	// (0x0009831f) popup_call2_audio_first_window_g4

0xe241,	// (0x00098946) popup_call2_audio_in_window_g4_ParamLimits

0xe241,	// (0x00098946) popup_call2_audio_in_window_g4

0x503f,	// (0x0008f744) aid_area_sk_bg_cut_ParamLimits

0x503f,	// (0x0008f744) aid_area_sk_bg_cut

0xd493,	// (0x00097b98) aid_area_sk_bg_cut_2_ParamLimits

0xd493,	// (0x00097b98) aid_area_sk_bg_cut_2

0x0a98,	// (0x0008b19d) aid_placing_details_win

0x0a98,	// (0x0008b19d) aid_placing_details_win_2

0xc6ad,	// (0x00096db2) camera2_autofocus_pane_g1_ParamLimits

0x290f,	// (0x0008d014) popup_fixed_preview_cale_window_ParamLimits

0x290f,	// (0x0008d014) popup_fixed_preview_cale_window

0xd259,	// (0x0009795e) navi_slider_pane_g3

0xd262,	// (0x00097967) navi_slider_pane_g4

0xd26b,	// (0x00097970) navi_slider_pane_g5

0xd259,	// (0x0009795e) navi_slider_pane_g6

0x4acc,	// (0x0008f1d1) navi_slider_pane_g7

0xd39b,	// (0x00097aa0) mup_scale_pane_g3

0xd3a4,	// (0x00097aa9) mup_scale_pane_g4

0xd3ad,	// (0x00097ab2) mup_scale_pane_g5

0x4ce9,	// (0x0008f3ee) mup_scale_pane_g6

0x4cf2,	// (0x0008f3f7) mup_scale_pane_g7

0x14b1,	// (0x0008bbb6) cams2_slider_pane_g3

0x14b1,	// (0x0008bbb6) cams2_slider_pane_g4

0x14b1,	// (0x0008bbb6) cams2_slider_pane_g5

0x14b1,	// (0x0008bbb6) cams2_slider_pane_g6

0x14b1,	// (0x0008bbb6) cams2_slider_pane_g7

0xc6eb,	// (0x00096df0) camera2_autofocus_pane_cp_g1

0xe4d1,	// (0x00098bd6) bg_popup_preview_window_pane_cp02_ParamLimits

0xe4d1,	// (0x00098bd6) bg_popup_preview_window_pane_cp02

0xebf5,	// (0x000992fa) list_fp_cale_pane_ParamLimits

0xebf5,	// (0x000992fa) list_fp_cale_pane

0xec01,	// (0x00099306) popup_fixed_preview_cale_window_t1_ParamLimits

0xec01,	// (0x00099306) popup_fixed_preview_cale_window_t1

0x62f7,	// (0x000909fc) popup_fixed_preview_cale_window_t2_ParamLimits

0x62f7,	// (0x000909fc) popup_fixed_preview_cale_window_t2

0x630c,	// (0x00090a11) popup_fixed_preview_cale_window_t3_ParamLimits

0x630c,	// (0x00090a11) popup_fixed_preview_cale_window_t3

0x0002,

0xf6ac,	// (0x00099db1) popup_fixed_preview_cale_window_t_ParamLimits

0xf6ac,	// (0x00099db1) popup_fixed_preview_cale_window_t

0x6321,	// (0x00090a26) list_single_fp_cale_pane_ParamLimits

0x6321,	// (0x00090a26) list_single_fp_cale_pane

0xec1f,	// (0x00099324) list_single_fp_cale_pane_g1_ParamLimits

0xec1f,	// (0x00099324) list_single_fp_cale_pane_g1

0xec2b,	// (0x00099330) list_single_fp_cale_pane_g2_ParamLimits

0xec2b,	// (0x00099330) list_single_fp_cale_pane_g2

0x0002,

0xf6b3,	// (0x00099db8) list_single_fp_cale_pane_g_ParamLimits

0xf6b3,	// (0x00099db8) list_single_fp_cale_pane_g

0xec44,	// (0x00099349) list_single_fp_cale_pane_t1_ParamLimits

0xec44,	// (0x00099349) list_single_fp_cale_pane_t1

0xec56,	// (0x0009935b) list_single_fp_cale_pane_t2_ParamLimits

0xec56,	// (0x0009935b) list_single_fp_cale_pane_t2

0x0001,

0xf6ba,	// (0x00099dbf) list_single_fp_cale_pane_t_ParamLimits

0xf6ba,	// (0x00099dbf) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x2983,	// (0x0008d088) main_dialer_pane

0x0a98,	// (0x0008b19d) aid_cell_size_keypad

0x0a98,	// (0x0008b19d) dialer_ne_pane

0x0a98,	// (0x0008b19d) grid_dialer_command_1_pane

0x0a98,	// (0x0008b19d) grid_dialer_command_2_pane

0x0a98,	// (0x0008b19d) grid_dialer_keypad_pane

0xe4dd,	// (0x00098be2) bg_popup_call_pane_cp06_ParamLimits

0xe4dd,	// (0x00098be2) bg_popup_call_pane_cp06

0xe4dd,	// (0x00098be2) dialer_ne_clear_pane_ParamLimits

0xe4dd,	// (0x00098be2) dialer_ne_clear_pane

0xc6eb,	// (0x00096df0) dialer_ne_pane_g1

0xc709,	// (0x00096e0e) dialer_ne_pane_t1_ParamLimits

0xc709,	// (0x00096e0e) dialer_ne_pane_t1

0xec89,	// (0x0009938e) dialer_ne_pane_t2_ParamLimits

0xec89,	// (0x0009938e) dialer_ne_pane_t2

0x6331,	// (0x00090a36) dialer_ne_pane_t3_ParamLimits

0x6331,	// (0x00090a36) dialer_ne_pane_t3

0x0002,

0xf6bf,	// (0x00099dc4) dialer_ne_pane_t_ParamLimits

0xf6bf,	// (0x00099dc4) dialer_ne_pane_t

0x6331,	// (0x00090a36) dialer_ne_pane_t3_copy1_ParamLimits

0x6331,	// (0x00090a36) dialer_ne_pane_t3_copy1

0xeca6,	// (0x000993ab) cell_dialer_keypad_pane_ParamLimits

0xeca6,	// (0x000993ab) cell_dialer_keypad_pane

0x153a,	// (0x0008bc3f) cell_dialer_command_1_pane_ParamLimits

0x153a,	// (0x0008bc3f) cell_dialer_command_1_pane

0xecbd,	// (0x000993c2) cell_dialer_command_2_pane_ParamLimits

0xecbd,	// (0x000993c2) cell_dialer_command_2_pane

0x153a,	// (0x0008bc3f) bg_button_pane_cp02_ParamLimits

0x153a,	// (0x0008bc3f) bg_button_pane_cp02

0xc6ad,	// (0x00096db2) cell_dialer_keypad_pane_g1_ParamLimits

0xc6ad,	// (0x00096db2) cell_dialer_keypad_pane_g1

0x153a,	// (0x0008bc3f) bg_button_pane_cp03_ParamLimits

0x153a,	// (0x0008bc3f) bg_button_pane_cp03

0xc6ad,	// (0x00096db2) cell_dialer_command_1_pane_g1_ParamLimits

0xc6ad,	// (0x00096db2) cell_dialer_command_1_pane_g1

0x0a98,	// (0x0008b19d) bg_button_pane_cp04

0xc6eb,	// (0x00096df0) cell_dialer_command_2_pane_g1

0x0a98,	// (0x0008b19d) bg_button_pane_cp06

0xc6eb,	// (0x00096df0) dialer_ne_clear_pane_g1

0x4a07,	// (0x0008f10c) navi_pane_g2

0x4a35,	// (0x0008f13a) navi_pane_g3

0x0002,

0xf311,	// (0x00099a16) navi_pane_g

0x4a60,	// (0x0008f165) navi_pane_mv_g2

0x4a87,	// (0x0008f18c) navi_pane_mv_g5

0x4a8f,	// (0x0008f194) navi_pane_mv_t1

0xc749,	// (0x00096e4e) main_clock2_pane

0xc69f,	// (0x00096da4) main_clock2_list_pane_ParamLimits

0xc69f,	// (0x00096da4) main_clock2_list_pane

0x63a6,	// (0x00090aab) main_clock2_pane_t1_ParamLimits

0x63a6,	// (0x00090aab) main_clock2_pane_t1

0x63d4,	// (0x00090ad9) main_clock2_pane_t2_ParamLimits

0x63d4,	// (0x00090ad9) main_clock2_pane_t2

0x0004,

0xf6cb,	// (0x00099dd0) main_clock2_pane_t_ParamLimits

0xf6cb,	// (0x00099dd0) main_clock2_pane_t

0x6439,	// (0x00090b3e) popup_clock_analogue_window_cp03_ParamLimits

0x6439,	// (0x00090b3e) popup_clock_analogue_window_cp03

0x6457,	// (0x00090b5c) popup_clock_digital_window_cp02_ParamLimits

0x6457,	// (0x00090b5c) popup_clock_digital_window_cp02

0x64cc,	// (0x00090bd1) main_clock2_list_single_pane_ParamLimits

0x64cc,	// (0x00090bd1) main_clock2_list_single_pane

0xc958,	// (0x0009705d) list_highlight_pane_cp05

0xecfe,	// (0x00099403) main_clock2_list_single_pane_t1

0x3604,	// (0x0008dd09) popup_toolbar_window_cp04_ParamLimits

0xc6bb,	// (0x00096dc0) camera2_autofocus_pane_g2_ParamLimits

0xc6bb,	// (0x00096dc0) camera2_autofocus_pane_g2

0xc6bb,	// (0x00096dc0) camera2_autofocus_pane_g3_ParamLimits

0xc6bb,	// (0x00096dc0) camera2_autofocus_pane_g3

0xc6bb,	// (0x00096dc0) camera2_autofocus_pane_g4_ParamLimits

0xc6bb,	// (0x00096dc0) camera2_autofocus_pane_g4

0xc6bb,	// (0x00096dc0) camera2_autofocus_pane_g5_ParamLimits

0xc6bb,	// (0x00096dc0) camera2_autofocus_pane_g5

0x0004,

0xf60f,	// (0x00099d14) camera2_autofocus_pane_g_ParamLimits

0xf60f,	// (0x00099d14) camera2_autofocus_pane_g

0x5ca7,	// (0x000903ac) camera2_autofocus_pane_cp_g2

0x5caf,	// (0x000903b4) camera2_autofocus_pane_cp_g3

0x5cb7,	// (0x000903bc) camera2_autofocus_pane_cp_g4

0x5cbf,	// (0x000903c4) camera2_autofocus_pane_cp_g5

0x0004,

0xf675,	// (0x00099d7a) camera2_autofocus_pane_cp_g

0x0a98,	// (0x0008b19d) popup_dialer_spcha_window

0x0a98,	// (0x0008b19d) bg_popup_sub_pane_cp07

0x0a98,	// (0x0008b19d) list_spcha_pane

0xed0c,	// (0x00099411) list_single_spcha_pane_ParamLimits

0xed0c,	// (0x00099411) list_single_spcha_pane

0x0a98,	// (0x0008b19d) list_highlight_pane_cp06

0xce7c,	// (0x00097581) list_single_spcha_pane_t1

0xdfeb,	// (0x000986f0) popup_call2_audio_out_window_g4_ParamLimits

0xdfeb,	// (0x000986f0) popup_call2_audio_out_window_g4

0x2983,	// (0x0008d088) main_imed2_pane

0x5672,	// (0x0008fd77) popup_imed_adjust2_window

0x5685,	// (0x0008fd8a) popup_imed_trans_window_ParamLimits

0x5685,	// (0x0008fd8a) popup_imed_trans_window

0xe766,	// (0x00098e6b) popup_blid_sat_info2_window_t1

0xe774,	// (0x00098e79) popup_blid_sat_info2_window_t2

0x000a,

0xf5a4,	// (0x00099ca9) popup_blid_sat_info2_window_t

0x6583,	// (0x00090c88) aid_size_cell_colour_35

0x659d,	// (0x00090ca2) aid_size_cell_colour_112

0x65b4,	// (0x00090cb9) aid_size_cell_effect

0x153a,	// (0x0008bc3f) bg_tb_trans_pane_cp02

0xcfdd,	// (0x000976e2) heading_imed_pane

0x65ce,	// (0x00090cd3) listscroll_imed_pane

0xed1e,	// (0x00099423) heading_imed_pane_g1

0xed26,	// (0x0009942b) heading_imed_pane_t1

0xed34,	// (0x00099439) grid_imed_colour_35_pane_ParamLimits

0xed34,	// (0x00099439) grid_imed_colour_35_pane

0x65da,	// (0x00090cdf) grid_imed_effect_pane

0xed50,	// (0x00099455) list_imed_aspect_pane

0x65ea,	// (0x00090cef) scroll_pane_cp027_ParamLimits

0x65ea,	// (0x00090cef) scroll_pane_cp027

0x65f6,	// (0x00090cfb) cell_imed_effect_pane_ParamLimits

0x65f6,	// (0x00090cfb) cell_imed_effect_pane

0xed58,	// (0x0009945d) cell_imed_colour_pane_ParamLimits

0xed58,	// (0x0009945d) cell_imed_colour_pane

0xeda2,	// (0x000994a7) cell_imed_colour_pane_g1_ParamLimits

0xeda2,	// (0x000994a7) cell_imed_colour_pane_g1

0xedb3,	// (0x000994b8) hgihlgiht_grid_pane_cp016_ParamLimits

0xedb3,	// (0x000994b8) hgihlgiht_grid_pane_cp016

0x6612,	// (0x00090d17) cell_imed_effect_pane_g1

0x661a,	// (0x00090d1f) grid_highlight_pane_cp017

0xedc4,	// (0x000994c9) list_imed_single_pane_ParamLimits

0xedc4,	// (0x000994c9) list_imed_single_pane

0x0a98,	// (0x0008b19d) list_highlight_pane_cp07

0xedd8,	// (0x000994dd) list_imed_aspect_pane_comp1_t1

0xd331,	// (0x00097a36) bg_tb_trans_pane_cp05

0xedfa,	// (0x000994ff) popup_imed_adjust2_window_g1

0xee21,	// (0x00099526) popup_imed_adjust2_window_t1

0xee39,	// (0x0009953e) slider_imed_adjust_pane

0xee4d,	// (0x00099552) slider_imed_adjust_pane_g1

0xee5d,	// (0x00099562) slider_imed_adjust_pane_g2

0xee6d,	// (0x00099572) slider_imed_adjust_pane_g3

0xee7e,	// (0x00099583) slider_imed_adjust_pane_g4

0x0003,

0xf6e8,	// (0x00099ded) slider_imed_adjust_pane_g

0x6623,	// (0x00090d28) aid_size_cell_clipart2

0xee8f,	// (0x00099594) grid_imed_clipart_pane

0xd3be,	// (0x00097ac3) scroll_pane_cp031

0x662f,	// (0x00090d34) cell_imed_clipart_pane_ParamLimits

0x662f,	// (0x00090d34) cell_imed_clipart_pane

0x664d,	// (0x00090d52) cell_imed_clipart_pane_g1

0x0a98,	// (0x0008b19d) grid_highlight_pane_cp014

0x6388,	// (0x00090a8d) main_clock2_pane_g1_ParamLimits

0x6388,	// (0x00090a8d) main_clock2_pane_g1

0x6473,	// (0x00090b78) aid_call2_pane_cp10

0x6485,	// (0x00090b8a) aid_call_pane_cp10

0xd185,	// (0x0009788a) popup_clock_analogue_window_cp10_g1

0xd185,	// (0x0009788a) popup_clock_analogue_window_cp10_g2

0x6497,	// (0x00090b9c) popup_clock_analogue_window_cp10_g3

0x6497,	// (0x00090b9c) popup_clock_analogue_window_cp10_g4

0xd185,	// (0x0009788a) popup_clock_analogue_window_cp10_g5

0x0004,

0xf6d6,	// (0x00099ddb) popup_clock_analogue_window_cp10_g

0x64ad,	// (0x00090bb2) popup_clock_analogue_window_cp10_t1

0x64de,	// (0x00090be3) clock_digital_number_pane_cp10_ParamLimits

0x64de,	// (0x00090be3) clock_digital_number_pane_cp10

0x64f8,	// (0x00090bfd) clock_digital_number_pane_cp11_ParamLimits

0x64f8,	// (0x00090bfd) clock_digital_number_pane_cp11

0x6512,	// (0x00090c17) clock_digital_number_pane_cp12_ParamLimits

0x6512,	// (0x00090c17) clock_digital_number_pane_cp12

0x652c,	// (0x00090c31) clock_digital_number_pane_cp13_ParamLimits

0x652c,	// (0x00090c31) clock_digital_number_pane_cp13

0x6548,	// (0x00090c4d) clock_digital_separator_pane_cp10_ParamLimits

0x6548,	// (0x00090c4d) clock_digital_separator_pane_cp10

0x6562,	// (0x00090c67) popup_clock_digital_window_cp02_t1_ParamLimits

0x6562,	// (0x00090c67) popup_clock_digital_window_cp02_t1

0xc62a,	// (0x00096d2f) clock_digital_number_pane_cp10_g1

0xc62a,	// (0x00096d2f) clock_digital_number_pane_cp10_g2

0x0001,

0xf6f1,	// (0x00099df6) clock_digital_number_pane_cp10_g

0xc62a,	// (0x00096d2f) clock_digital_separator_pane_cp10_g1

0xc62a,	// (0x00096d2f) clock_digital_separator_pane_g2_cp10

0xd220,	// (0x00097925) navi_pane_vded_g4

0xd229,	// (0x0009792e) navi_pane_vded_g5

0xd232,	// (0x00097937) navi_pane_vded_t1

0x2983,	// (0x0008d088) main_vded_pane

0x6656,	// (0x00090d5b) main_vded_pane_g1

0x6662,	// (0x00090d67) main_vded_pane_g2

0x666c,	// (0x00090d71) main_vded_pane_g3

0x0002,

0xf6f6,	// (0x00099dfb) main_vded_pane_g

0x6676,	// (0x00090d7b) main_vded_pane_t1

0x6684,	// (0x00090d89) main_vded_pane_t2

0x0001,

0xf6fd,	// (0x00099e02) main_vded_pane_t

0x6692,	// (0x00090d97) vded_slider_pane

0x669c,	// (0x00090da1) vded_video_pane

0xee99,	// (0x0009959e) vded_video_pane_g1

0x66a8,	// (0x00090dad) vded_video_pane_g2

0xc6eb,	// (0x00096df0) vded_video_pane_g3

0x0002,

0xf702,	// (0x00099e07) vded_video_pane_g

0xeea3,	// (0x000995a8) vded_slider_pane_g1

0xe66f,	// (0x00098d74) vded_slider_pane_g2

0xeeac,	// (0x000995b1) vded_slider_pane_g3

0xeeb5,	// (0x000995ba) vded_slider_pane_g4

0xeebe,	// (0x000995c3) vded_slider_pane_g5

0x0004,

0xf709,	// (0x00099e0e) vded_slider_pane_g

0xb242,	// (0x00095947) mup3_rocker_pane_ParamLimits

0xb242,	// (0x00095947) mup3_rocker_pane

0xebd7,	// (0x000992dc) mup3_control_keys_pane_g1

0xeec7,	// (0x000995cc) mup3_control_keys_pane_g2

0xebd7,	// (0x000992dc) mup3_control_keys_pane_g3

0xeecf,	// (0x000995d4) mup3_control_keys_pane_g4

0x0003,

0xf714,	// (0x00099e19) mup3_control_keys_pane_g

0x2937,	// (0x0008d03c) popup_toolbar2_fixed_window_cp01_ParamLimits

0x2937,	// (0x0008d03c) popup_toolbar2_fixed_window_cp01

0xb242,	// (0x00095947) popup_toolbar2_fixed_window_cp02_ParamLimits

0xb242,	// (0x00095947) popup_toolbar2_fixed_window_cp02

0xd974,	// (0x00098079) popup_call2_audio_second_window_t4_ParamLimits

0xd974,	// (0x00098079) popup_call2_audio_second_window_t4

0xdeb0,	// (0x000985b5) popup_call2_audio_first_window_t6_ParamLimits

0xdeb0,	// (0x000985b5) popup_call2_audio_first_window_t6

0xe0ee,	// (0x000987f3) popup_call2_audio_out_window_t6_ParamLimits

0xe0ee,	// (0x000987f3) popup_call2_audio_out_window_t6

0x2983,	// (0x0008d088) main_vitu_pane

0xc69f,	// (0x00096da4) aid_size_cell_itu_ParamLimits

0xc69f,	// (0x00096da4) aid_size_cell_itu

0xc69f,	// (0x00096da4) bg_popup_window_pane_cp08_ParamLimits

0xc69f,	// (0x00096da4) bg_popup_window_pane_cp08

0xc69f,	// (0x00096da4) field_vitu_entry_pane_ParamLimits

0xc69f,	// (0x00096da4) field_vitu_entry_pane

0xc69f,	// (0x00096da4) grid_vitu_function_pane_ParamLimits

0xc69f,	// (0x00096da4) grid_vitu_function_pane

0xc69f,	// (0x00096da4) grid_vitu_itu_pane_ParamLimits

0xc69f,	// (0x00096da4) grid_vitu_itu_pane

0xc69f,	// (0x00096da4) cell_vitu_itu_pane_ParamLimits

0xc69f,	// (0x00096da4) cell_vitu_itu_pane

0xc69f,	// (0x00096da4) cell_vitu_function_pane_ParamLimits

0xc69f,	// (0x00096da4) cell_vitu_function_pane

0x153a,	// (0x0008bc3f) bg_popup_sub_pane_cp08_ParamLimits

0x153a,	// (0x0008bc3f) bg_popup_sub_pane_cp08

0xc6f5,	// (0x00096dfa) field_vitu_entry_pane_t1_ParamLimits

0xc6f5,	// (0x00096dfa) field_vitu_entry_pane_t1

0xec89,	// (0x0009938e) field_vitu_entry_pane_t2_ParamLimits

0xec89,	// (0x0009938e) field_vitu_entry_pane_t2

0x0001,

0xf71d,	// (0x00099e22) field_vitu_entry_pane_t_ParamLimits

0xf71d,	// (0x00099e22) field_vitu_entry_pane_t

0xe4dd,	// (0x00098be2) bg_button_pane_cp05_ParamLimits

0xe4dd,	// (0x00098be2) bg_button_pane_cp05

0xeed7,	// (0x000995dc) cell_vitu_itu_pane_g1

0xd33f,	// (0x00097a44) cell_vitu_itu_pane_t1_ParamLimits

0xd33f,	// (0x00097a44) cell_vitu_itu_pane_t1

0xd33f,	// (0x00097a44) cell_vitu_itu_pane_t2_ParamLimits

0xd33f,	// (0x00097a44) cell_vitu_itu_pane_t2

0x0002,

0xf722,	// (0x00099e27) cell_vitu_itu_pane_t_ParamLimits

0xf722,	// (0x00099e27) cell_vitu_itu_pane_t

0x0a98,	// (0x0008b19d) bg_button_pane_cp07

0xc6eb,	// (0x00096df0) cell_vitu_function_pane_g1

0x2a80,	// (0x0008d185) main_calc_pane_g1

0x26f8,	// (0x0008cdfd) aid_visual_content_pane

0x2983,	// (0x0008d088) main_vradio_pane

0xc6bb,	// (0x00096dc0) main_vradio_pane_g1_ParamLimits

0xc6bb,	// (0x00096dc0) main_vradio_pane_g1

0xc6bb,	// (0x00096dc0) main_vradio_pane_g2_ParamLimits

0xc6bb,	// (0x00096dc0) main_vradio_pane_g2

0x0001,

0xf4b9,	// (0x00099bbe) main_vradio_pane_g_ParamLimits

0xf4b9,	// (0x00099bbe) main_vradio_pane_g

0xc709,	// (0x00096e0e) main_vradio_pane_t1_ParamLimits

0xc709,	// (0x00096e0e) main_vradio_pane_t1

0xc709,	// (0x00096e0e) main_vradio_pane_t2_ParamLimits

0xc709,	// (0x00096e0e) main_vradio_pane_t2

0xc709,	// (0x00096e0e) main_vradio_pane_t3_ParamLimits

0xc709,	// (0x00096e0e) main_vradio_pane_t3

0x0002,

0xf729,	// (0x00099e2e) main_vradio_pane_t_ParamLimits

0xf729,	// (0x00099e2e) main_vradio_pane_t

0xc69f,	// (0x00096da4) vradio_rocker_control_pane_ParamLimits

0xc69f,	// (0x00096da4) vradio_rocker_control_pane

0xc69f,	// (0x00096da4) vradio_station_info_pane_ParamLimits

0xc69f,	// (0x00096da4) vradio_station_info_pane

0x153a,	// (0x0008bc3f) vradio_frequency_info_pane_ParamLimits

0x153a,	// (0x0008bc3f) vradio_frequency_info_pane

0xc6eb,	// (0x00096df0) vradio_station_info_pane_g1

0xd33f,	// (0x00097a44) vradio_station_info_pane_t1_ParamLimits

0xd33f,	// (0x00097a44) vradio_station_info_pane_t1

0xc709,	// (0x00096e0e) vradio_station_info_pane_t2_ParamLimits

0xc709,	// (0x00096e0e) vradio_station_info_pane_t2

0x0001,

0xf730,	// (0x00099e35) vradio_station_info_pane_t_ParamLimits

0xf730,	// (0x00099e35) vradio_station_info_pane_t

0x0a98,	// (0x0008b19d) vradio_tuning_pane

0x66b1,	// (0x00090db6) vradio_rocker_control_pane_g1

0xeef3,	// (0x000995f8) vradio_rocker_control_pane_g2

0x66b9,	// (0x00090dbe) vradio_rocker_control_pane_g3

0x66c1,	// (0x00090dc6) vradio_rocker_control_pane_g4

0x66cb,	// (0x00090dd0) vradio_rocker_control_pane_g5

0x0004,

0xf735,	// (0x00099e3a) vradio_rocker_control_pane_g

0xc6eb,	// (0x00096df0) vradio_frequency_info_pane_g1

0xc6f5,	// (0x00096dfa) vradio_frequency_info_pane_t1_ParamLimits

0xc6f5,	// (0x00096dfa) vradio_frequency_info_pane_t1

0x66d3,	// (0x00090dd8) vradio_tuning_pane_g1

0x66e0,	// (0x00090de5) vradio_tuning_pane_t1

0x2739,	// (0x0008ce3e) area_side_right_pane_ParamLimits

0x2739,	// (0x0008ce3e) area_side_right_pane

0xe498,	// (0x00098b9d) status_small_pane_g1

0xe4a0,	// (0x00098ba5) status_small_pane_g2

0xe4a9,	// (0x00098bae) status_small_pane_g3

0xe4b2,	// (0x00098bb7) status_small_pane_g4

0x0003,

0xf506,	// (0x00099c0b) status_small_pane_g

0xe4bb,	// (0x00098bc0) status_small_pane_t1

0x2983,	// (0x0008d088) main_video3_pane

0x0a98,	// (0x0008b19d) cams_zoom_vslider_pane

0xeefb,	// (0x00099600) image3_wide_pane_ParamLimits

0xeefb,	// (0x00099600) image3_wide_pane

0x0a98,	// (0x0008b19d) image3_wide_small_pane

0xef15,	// (0x0009961a) main_video3_pane_g1_ParamLimits

0xef15,	// (0x0009961a) main_video3_pane_g1

0xef15,	// (0x0009961a) main_video3_pane_g2_ParamLimits

0xef15,	// (0x0009961a) main_video3_pane_g2

0x0001,

0xf740,	// (0x00099e45) main_video3_pane_g_ParamLimits

0xf740,	// (0x00099e45) main_video3_pane_g

0xef33,	// (0x00099638) main_video3_pane_t1_ParamLimits

0xef33,	// (0x00099638) main_video3_pane_t1

0xef33,	// (0x00099638) main_video3_pane_t2_ParamLimits

0xef33,	// (0x00099638) main_video3_pane_t2

0xef33,	// (0x00099638) main_video3_pane_t3_ParamLimits

0xef33,	// (0x00099638) main_video3_pane_t3

0x0002,

0xf745,	// (0x00099e4a) main_video3_pane_t_ParamLimits

0xf745,	// (0x00099e4a) main_video3_pane_t

0xc6eb,	// (0x00096df0) cams_zoom_vslider_pane_g1

0xc6eb,	// (0x00096df0) cams_zoom_vslider_pane_g2

0x0001,

0xf08c,	// (0x00099791) cams_zoom_vslider_pane_g

0x0a98,	// (0x0008b19d) small_slider_vertical_pane

0xc6eb,	// (0x00096df0) small_slider_vertical_pane_g1

0xc6eb,	// (0x00096df0) small_slider_vertical_pane_g2

0xef5a,	// (0x0009965f) small_slider_vertical_pane_g3

0x0002,

0xf74c,	// (0x00099e51) small_slider_vertical_pane_g

0x2983,	// (0x0008d088) main_hwr_training_pane

0xef63,	// (0x00099668) hwr_training_instruct_pane_ParamLimits

0xef63,	// (0x00099668) hwr_training_instruct_pane

0x66ef,	// (0x00090df4) hwr_training_navi_pane_ParamLimits

0x66ef,	// (0x00090df4) hwr_training_navi_pane

0x6709,	// (0x00090e0e) hwr_training_write_pane_ParamLimits

0x6709,	// (0x00090e0e) hwr_training_write_pane

0x0a98,	// (0x0008b19d) bg_frame_shadow_pane

0xef9a,	// (0x0009969f) hwr_training_write_pane_g1

0xefa2,	// (0x000996a7) hwr_training_write_pane_g2

0xefaa,	// (0x000996af) hwr_training_write_pane_g3

0xefb2,	// (0x000996b7) hwr_training_write_pane_g4

0xefba,	// (0x000996bf) hwr_training_write_pane_g5

0xefc2,	// (0x000996c7) hwr_training_write_pane_g6

0xefca,	// (0x000996cf) hwr_training_write_pane_g7

0x0006,

0xf753,	// (0x00099e58) hwr_training_write_pane_g

0x6741,	// (0x00090e46) hwr_training_navi_pane_g1_ParamLimits

0x6741,	// (0x00090e46) hwr_training_navi_pane_g1

0x6753,	// (0x00090e58) hwr_training_navi_pane_g2_ParamLimits

0x6753,	// (0x00090e58) hwr_training_navi_pane_g2

0x6765,	// (0x00090e6a) hwr_training_navi_pane_g3_ParamLimits

0x6765,	// (0x00090e6a) hwr_training_navi_pane_g3

0x6775,	// (0x00090e7a) hwr_training_navi_pane_g4_ParamLimits

0x6775,	// (0x00090e7a) hwr_training_navi_pane_g4

0x0004,

0xf762,	// (0x00099e67) hwr_training_navi_pane_g_ParamLimits

0xf762,	// (0x00099e67) hwr_training_navi_pane_g

0x678f,	// (0x00090e94) hwr_training_navi_pane_t1

0x679d,	// (0x00090ea2) list_single_hwr_training_instruct_pane_ParamLimits

0x679d,	// (0x00090ea2) list_single_hwr_training_instruct_pane

0xefd2,	// (0x000996d7) list_single_hwr_training_instruct_pane_t1

0xe86d,	// (0x00098f72) bg_frame_shadow_pane_g1

0xefe1,	// (0x000996e6) bg_frame_shadow_pane_g2

0xefe9,	// (0x000996ee) bg_frame_shadow_pane_g3

0xeff1,	// (0x000996f6) bg_frame_shadow_pane_g4

0xeff9,	// (0x000996fe) bg_frame_shadow_pane_g5

0xf001,	// (0x00099706) bg_frame_shadow_pane_g6

0xf009,	// (0x0009970e) bg_frame_shadow_pane_g7

0xc81c,	// (0x00096f21) bg_frame_shadow_pane_g8

0x0007,

0xf76d,	// (0x00099e72) bg_frame_shadow_pane_g

0x2983,	// (0x0008d088) main_video_tele_dialer_pane

0x67b6,	// (0x00090ebb) aid_size_cell_video_keypad_ParamLimits

0x67b6,	// (0x00090ebb) aid_size_cell_video_keypad

0x67c6,	// (0x00090ecb) grid_video_dialer_keypad_pane_ParamLimits

0x67c6,	// (0x00090ecb) grid_video_dialer_keypad_pane

0x67f8,	// (0x00090efd) video_down_pane_cp_ParamLimits

0x67f8,	// (0x00090efd) video_down_pane_cp

0x6822,	// (0x00090f27) cell_video_dialer_keypad_pane_ParamLimits

0x6822,	// (0x00090f27) cell_video_dialer_keypad_pane

0xf011,	// (0x00099716) bg_button_pane_cp08_ParamLimits

0xf011,	// (0x00099716) bg_button_pane_cp08

0x6839,	// (0x00090f3e) cell_video_dialer_keypad_pane_g1_ParamLimits

0x6839,	// (0x00090f3e) cell_video_dialer_keypad_pane_g1

0xb242,	// (0x00095947) mup3_rocker2_pane_ParamLimits

0xb242,	// (0x00095947) mup3_rocker2_pane

0xc6eb,	// (0x00096df0) mup3_rocker2_pane_g1

0x55d6,	// (0x0008fcdb) main_dialer2_pane

0x2983,	// (0x0008d088) main_mp4_pane

0x6892,	// (0x00090f97) main_mp4_pane_g1_ParamLimits

0x6892,	// (0x00090f97) main_mp4_pane_g1

0x68b4,	// (0x00090fb9) main_mp4_pane_g2_ParamLimits

0x68b4,	// (0x00090fb9) main_mp4_pane_g2

0x68d2,	// (0x00090fd7) main_mp4_pane_g3_ParamLimits

0x68d2,	// (0x00090fd7) main_mp4_pane_g3

0x690d,	// (0x00091012) main_mp4_pane_g4_ParamLimits

0x690d,	// (0x00091012) main_mp4_pane_g4

0x6935,	// (0x0009103a) main_mp4_pane_g5_ParamLimits

0x6935,	// (0x0009103a) main_mp4_pane_g5

0x0007,

0xf78d,	// (0x00099e92) main_mp4_pane_g_ParamLimits

0xf78d,	// (0x00099e92) main_mp4_pane_g

0x699d,	// (0x000910a2) main_mp4_pane_t1_ParamLimits

0x699d,	// (0x000910a2) main_mp4_pane_t1

0x69ff,	// (0x00091104) main_mp4_pane_t2_ParamLimits

0x69ff,	// (0x00091104) main_mp4_pane_t2

0x6a63,	// (0x00091168) main_mp4_pane_t3_ParamLimits

0x6a63,	// (0x00091168) main_mp4_pane_t3

0x6ac1,	// (0x000911c6) main_mp4_pane_t4_ParamLimits

0x6ac1,	// (0x000911c6) main_mp4_pane_t4

0x0003,

0xf79e,	// (0x00099ea3) main_mp4_pane_t_ParamLimits

0xf79e,	// (0x00099ea3) main_mp4_pane_t

0x6b1f,	// (0x00091224) mp4_progress_pane_ParamLimits

0x6b1f,	// (0x00091224) mp4_progress_pane

0x6b53,	// (0x00091258) mp4_rocker_pane_ParamLimits

0x6b53,	// (0x00091258) mp4_rocker_pane

0x0bf4,	// (0x0008b2f9) mp4_progress_pane_t1

0x0c12,	// (0x0008b317) mp4_progress_pane_t2

0x0001,

0xf7a7,	// (0x00099eac) mp4_progress_pane_t

0x0c31,	// (0x0008b336) mup_progress_pane_cp04

0x14b1,	// (0x0008bbb6) mp4_rocker_pane_g1

0x2969,	// (0x0008d06e) aid_cell_size_keypad2_ParamLimits

0x2969,	// (0x0008d06e) aid_cell_size_keypad2

0x2969,	// (0x0008d06e) dialer2_ne_pane_ParamLimits

0x2969,	// (0x0008d06e) dialer2_ne_pane

0x2969,	// (0x0008d06e) grid_dialer2_keypad_pane_ParamLimits

0x2969,	// (0x0008d06e) grid_dialer2_keypad_pane

0xe73c,	// (0x00098e41) bg_popup_call_pane_cp07_ParamLimits

0xe73c,	// (0x00098e41) bg_popup_call_pane_cp07

0x6b69,	// (0x0009126e) dialer2_ne_pane_t1_ParamLimits

0x6b69,	// (0x0009126e) dialer2_ne_pane_t1

0x6b8e,	// (0x00091293) cell_dialer2_keypad_pane_ParamLimits

0x6b8e,	// (0x00091293) cell_dialer2_keypad_pane

0xe4dd,	// (0x00098be2) bg_button_pane_pane_cp04_ParamLimits

0xe4dd,	// (0x00098be2) bg_button_pane_pane_cp04

0xc6ad,	// (0x00096db2) cell_dialer2_keypad_pane_g1_ParamLimits

0xc6ad,	// (0x00096db2) cell_dialer2_keypad_pane_g1

0x34e8,	// (0x0008dbed) aid_placing_vt_set_content_ParamLimits

0x34e8,	// (0x0008dbed) aid_placing_vt_set_content

0x3510,	// (0x0008dc15) aid_placing_vt_set_title_ParamLimits

0x3510,	// (0x0008dc15) aid_placing_vt_set_title

0x2983,	// (0x0008d088) main_image3_pane

0x6bd7,	// (0x000912dc) area_side_right_pane_cp01_ParamLimits

0x6bd7,	// (0x000912dc) area_side_right_pane_cp01

0x6c06,	// (0x0009130b) main_image3_pane_g1_ParamLimits

0x6c06,	// (0x0009130b) main_image3_pane_g1

0x6c14,	// (0x00091319) main_image3_pane_g2_ParamLimits

0x6c14,	// (0x00091319) main_image3_pane_g2

0x6c2d,	// (0x00091332) main_image3_pane_g3_ParamLimits

0x6c2d,	// (0x00091332) main_image3_pane_g3

0x6c46,	// (0x0009134b) main_image3_pane_g4_ParamLimits

0x6c46,	// (0x0009134b) main_image3_pane_g4

0x0003,

0xf7b6,	// (0x00099ebb) main_image3_pane_g_ParamLimits

0xf7b6,	// (0x00099ebb) main_image3_pane_g

0x6c5f,	// (0x00091364) main_image3_pane_t1_ParamLimits

0x6c5f,	// (0x00091364) main_image3_pane_t1

0x6c84,	// (0x00091389) main_image3_pane_t2_ParamLimits

0x6c84,	// (0x00091389) main_image3_pane_t2

0x6ca3,	// (0x000913a8) main_image3_pane_t3_ParamLimits

0x6ca3,	// (0x000913a8) main_image3_pane_t3

0x0003,

0xf7bf,	// (0x00099ec4) main_image3_pane_t_ParamLimits

0xf7bf,	// (0x00099ec4) main_image3_pane_t

0xc69f,	// (0x00096da4) grid_sctrl_middle_pane_cp01_ParamLimits

0xc69f,	// (0x00096da4) grid_sctrl_middle_pane_cp01

0x6d04,	// (0x00091409) cell_sctrl_middle_pane_cp01_ParamLimits

0x6d04,	// (0x00091409) cell_sctrl_middle_pane_cp01

0x6d15,	// (0x0009141a) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x6d15,	// (0x0009141a) cell_sctrl_middle_pane_cp01_g1

0x2983,	// (0x0008d088) main_call4_pane

0x6d22,	// (0x00091427) aid_size_button_call4_ParamLimits

0x6d22,	// (0x00091427) aid_size_button_call4

0x6d58,	// (0x0009145d) call4_windows_pane_ParamLimits

0x6d58,	// (0x0009145d) call4_windows_pane

0x6d6d,	// (0x00091472) grid_call4_button_pane_ParamLimits

0x6d6d,	// (0x00091472) grid_call4_button_pane

0x6d9d,	// (0x000914a2) call4_windows_conf_pane

0x6db6,	// (0x000914bb) popup_call4_audio_first_window_ParamLimits

0x6db6,	// (0x000914bb) popup_call4_audio_first_window

0x6e06,	// (0x0009150b) popup_call4_audio_second_window_ParamLimits

0x6e06,	// (0x0009150b) popup_call4_audio_second_window

0x6e1f,	// (0x00091524) popup_call4_audio_wait_window_ParamLimits

0x6e1f,	// (0x00091524) popup_call4_audio_wait_window

0x6e2d,	// (0x00091532) cell_call4_button_pane_ParamLimits

0x6e2d,	// (0x00091532) cell_call4_button_pane

0x6e50,	// (0x00091555) bg_button_pane_cp09_ParamLimits

0x6e50,	// (0x00091555) bg_button_pane_cp09

0x6e5c,	// (0x00091561) cell_call4_button_pane_g1_ParamLimits

0x6e5c,	// (0x00091561) cell_call4_button_pane_g1

0x6e69,	// (0x0009156e) cell_call4_button_pane_t1_ParamLimits

0x6e69,	// (0x0009156e) cell_call4_button_pane_t1

0x0c7a,	// (0x0008b37f) popup_call4_audio_conf_window_ParamLimits

0x0c7a,	// (0x0008b37f) popup_call4_audio_conf_window

0x62cb,	// (0x000909d0) mup3_progress_pane_t1_ParamLimits

0x62e1,	// (0x000909e6) mup3_progress_pane_t2_ParamLimits

0xeba7,	// (0x000992ac) mup3_progress_pane_t3_ParamLimits

0xf69e,	// (0x00099da3) mup3_progress_pane_t_ParamLimits

0xebbe,	// (0x000992c3) mup_progress_pane_cp03_ParamLimits

0xebd7,	// (0x000992dc) mup3_control_keys_pane_g4_copy1

0x6b53,	// (0x00091258) mp4_rocker2_pane_ParamLimits

0x6b53,	// (0x00091258) mp4_rocker2_pane

0xeec7,	// (0x000995cc) mp4_rocker2_pane_g1

0xeec7,	// (0x000995cc) mp4_rocker2_pane_g2

0xeec7,	// (0x000995cc) mp4_rocker2_pane_g3

0xeec7,	// (0x000995cc) mp4_rocker2_pane_g4

0xeec7,	// (0x000995cc) mp4_rocker2_pane_g5

0x0004,

0xf7c8,	// (0x00099ecd) mp4_rocker2_pane_g

0x2983,	// (0x0008d088) main_camera4_pane

0x2983,	// (0x0008d088) main_video4_pane

0x67d4,	// (0x00090ed9) main_video_tele_dialer_pane_t1_ParamLimits

0x67d4,	// (0x00090ed9) main_video_tele_dialer_pane_t1

0x67e6,	// (0x00090eeb) main_video_tele_dialer_pane_t2_ParamLimits

0x67e6,	// (0x00090eeb) main_video_tele_dialer_pane_t2

0x0001,

0xf77e,	// (0x00099e83) main_video_tele_dialer_pane_t_ParamLimits

0xf77e,	// (0x00099e83) main_video_tele_dialer_pane_t

0x6ec5,	// (0x000915ca) cam4_autofocus_pane_ParamLimits

0x6ec5,	// (0x000915ca) cam4_autofocus_pane

0x6edd,	// (0x000915e2) cam4_image_uncrop_pane_ParamLimits

0x6edd,	// (0x000915e2) cam4_image_uncrop_pane

0x6ef6,	// (0x000915fb) cam4_indicators_pane_ParamLimits

0x6ef6,	// (0x000915fb) cam4_indicators_pane

0x6f12,	// (0x00091617) main_camera4_pane_g1_ParamLimits

0x6f12,	// (0x00091617) main_camera4_pane_g1

0x6f1e,	// (0x00091623) main_camera4_pane_g2_ParamLimits

0x6f1e,	// (0x00091623) main_camera4_pane_g2

0x6f1e,	// (0x00091623) main_camera4_pane_g3_ParamLimits

0x6f1e,	// (0x00091623) main_camera4_pane_g3

0x6f2a,	// (0x0009162f) main_camera4_pane_g4_ParamLimits

0x6f2a,	// (0x0009162f) main_camera4_pane_g4

0x6f36,	// (0x0009163b) main_camera4_pane_g5_ParamLimits

0x6f36,	// (0x0009163b) main_camera4_pane_g5

0x0005,

0xf7d3,	// (0x00099ed8) main_camera4_pane_g_ParamLimits

0xf7d3,	// (0x00099ed8) main_camera4_pane_g

0x6f50,	// (0x00091655) main_camera4_pane_t1_ParamLimits

0x6f50,	// (0x00091655) main_camera4_pane_t1

0xb24e,	// (0x00095953) bg_tb_trans_pane_cp06

0x6fa2,	// (0x000916a7) cam4_indicators_pane_g1

0x6fb3,	// (0x000916b8) cam4_indicators_pane_g2

0x0002,

0xf7ee,	// (0x00099ef3) cam4_indicators_pane_g

0x6fcb,	// (0x000916d0) cam4_indicators_pane_t1

0x6ff5,	// (0x000916fa) main_video4_pane_g1_ParamLimits

0x6ff5,	// (0x000916fa) main_video4_pane_g1

0x7001,	// (0x00091706) main_video4_pane_g2_ParamLimits

0x7001,	// (0x00091706) main_video4_pane_g2

0x700d,	// (0x00091712) main_video4_pane_g3_ParamLimits

0x700d,	// (0x00091712) main_video4_pane_g3

0x7019,	// (0x0009171e) main_video4_pane_g4_ParamLimits

0x7019,	// (0x0009171e) main_video4_pane_g4

0x0004,

0xf7f5,	// (0x00099efa) main_video4_pane_g_ParamLimits

0xf7f5,	// (0x00099efa) main_video4_pane_g

0x703b,	// (0x00091740) vid4_indicators_pane_ParamLimits

0x703b,	// (0x00091740) vid4_indicators_pane

0x705a,	// (0x0009175f) video4_image_uncrop_cif_pane_ParamLimits

0x705a,	// (0x0009175f) video4_image_uncrop_cif_pane

0x7069,	// (0x0009176e) video4_image_uncrop_nhd_pane_ParamLimits

0x7069,	// (0x0009176e) video4_image_uncrop_nhd_pane

0x6edd,	// (0x000915e2) video4_image_uncrop_vga_pane_ParamLimits

0x6edd,	// (0x000915e2) video4_image_uncrop_vga_pane

0x55c8,	// (0x0008fccd) bg_tb_trans_pane_cp07

0x7082,	// (0x00091787) vid4_indicators_pane_g1

0x7098,	// (0x0009179d) vid4_indicators_pane_g2

0x70ac,	// (0x000917b1) vid4_indicators_pane_g3

0x0004,

0xf800,	// (0x00099f05) vid4_indicators_pane_g

0x70dd,	// (0x000917e2) vid4_indicators_pane_t1

0x70f4,	// (0x000917f9) cam4_autofocus_pane_g1

0x70fc,	// (0x00091801) cam4_autofocus_pane_g2

0x7104,	// (0x00091809) cam4_autofocus_pane_g3

0x0002,

0xf80b,	// (0x00099f10) cam4_autofocus_pane_g

0x710c,	// (0x00091811) cam4_autofocus_pane_g3_copy1

0x6806,	// (0x00090f0b) video_down_pane_cp_t1

0x6814,	// (0x00090f19) video_down_pane_cp_t2

0x0001,

0xf783,	// (0x00099e88) video_down_pane_cp_t

0x2969,	// (0x0008d06e) popup_vitu2_window_ParamLimits

0x2969,	// (0x0008d06e) popup_vitu2_window

0x7114,	// (0x00091819) aid_size_cell2_itu2_ParamLimits

0x7114,	// (0x00091819) aid_size_cell2_itu2

0x7136,	// (0x0009183b) aid_size_cell_itu2_ParamLimits

0x7136,	// (0x0009183b) aid_size_cell_itu2

0x717a,	// (0x0009187f) bg_popup_window_pane_cp09_ParamLimits

0x717a,	// (0x0009187f) bg_popup_window_pane_cp09

0x7188,	// (0x0009188d) field_vitu2_entry_pane_ParamLimits

0x7188,	// (0x0009188d) field_vitu2_entry_pane

0x71a8,	// (0x000918ad) grid_vitu2_function_pane_ParamLimits

0x71a8,	// (0x000918ad) grid_vitu2_function_pane

0x71ec,	// (0x000918f1) grid_vitu2_itu_pane_ParamLimits

0x71ec,	// (0x000918f1) grid_vitu2_itu_pane

0x7262,	// (0x00091967) cell_vitu2_itu_pane_ParamLimits

0x7262,	// (0x00091967) cell_vitu2_itu_pane

0x727d,	// (0x00091982) cell_vitu2_function_pane_ParamLimits

0x727d,	// (0x00091982) cell_vitu2_function_pane

0x0c94,	// (0x0008b399) bg_popup_call_pane_cp08_ParamLimits

0x0c94,	// (0x0008b399) bg_popup_call_pane_cp08

0x0cab,	// (0x0008b3b0) field_vitu2_entry_pane_g1

0x0cb7,	// (0x0008b3bc) field_vitu2_entry_pane_g2

0x0002,

0xf812,	// (0x00099f17) field_vitu2_entry_pane_g

0x0cc3,	// (0x0008b3c8) field_vitu2_entry_pane_t1_ParamLimits

0x0cc3,	// (0x0008b3c8) field_vitu2_entry_pane_t1

0x0cf2,	// (0x0008b3f7) field_vitu2_entry_pane_t2_ParamLimits

0x0cf2,	// (0x0008b3f7) field_vitu2_entry_pane_t2

0x0001,

0xf819,	// (0x00099f1e) field_vitu2_entry_pane_t_ParamLimits

0xf819,	// (0x00099f1e) field_vitu2_entry_pane_t

0x5928,	// (0x0009002d) bg_button_pane_cp010_ParamLimits

0x5928,	// (0x0009002d) bg_button_pane_cp010

0x72c1,	// (0x000919c6) cell_vitu2_itu_pane_g1

0x72e7,	// (0x000919ec) cell_vitu2_itu_pane_t1_ParamLimits

0x72e7,	// (0x000919ec) cell_vitu2_itu_pane_t1

0x7333,	// (0x00091a38) cell_vitu2_itu_pane_t2_ParamLimits

0x7333,	// (0x00091a38) cell_vitu2_itu_pane_t2

0x0002,

0xf823,	// (0x00099f28) cell_vitu2_itu_pane_t_ParamLimits

0xf823,	// (0x00099f28) cell_vitu2_itu_pane_t

0x55c8,	// (0x0008fccd) bg_button_pane_cp011

0x73fb,	// (0x00091b00) cell_vitu2_function_pane_g1

0x2983,	// (0x0008d088) main_myfav_hc_pane

0x6ce5,	// (0x000913ea) popup_image3_note_pane_ParamLimits

0x6ce5,	// (0x000913ea) popup_image3_note_pane

0x6cf3,	// (0x000913f8) popup_image3_tool_bar_pane_ParamLimits

0x6cf3,	// (0x000913f8) popup_image3_tool_bar_pane

0x73a9,	// (0x00091aae) cell_vitu2_itu_pane_t3_ParamLimits

0x73a9,	// (0x00091aae) cell_vitu2_itu_pane_t3

0x0a98,	// (0x0008b19d) bg_popup_trans_pane

0x0d17,	// (0x0008b41c) grid_image3_tool_bar_pane

0x0d21,	// (0x0008b426) bg_popup_trans_pane_g1

0xcb82,	// (0x00097287) bg_popup_trans_pane_g2

0x0d29,	// (0x0008b42e) bg_popup_trans_pane_g3

0x0d31,	// (0x0008b436) bg_popup_trans_pane_g4

0x0d39,	// (0x0008b43e) bg_popup_trans_pane_g5

0x0d41,	// (0x0008b446) bg_popup_trans_pane_g6

0x0d49,	// (0x0008b44e) bg_popup_trans_pane_g7

0x0d51,	// (0x0008b456) bg_popup_trans_pane_g8

0xcb62,	// (0x00097267) bg_popup_trans_pane_g9

0x0008,

0xf82a,	// (0x00099f2f) bg_popup_trans_pane_g

0x0d59,	// (0x0008b45e) cell_image3_tool_bar_pane_ParamLimits

0x0d59,	// (0x0008b45e) cell_image3_tool_bar_pane

0xc6eb,	// (0x00096df0) cell_image3_tool_bar_pane_g1

0x0a98,	// (0x0008b19d) bg_popup_trans_pane_cp1

0x0d6f,	// (0x0008b474) popup_image3_note_pane_t1

0x0d7d,	// (0x0008b482) popup_image3_note_pane_t2

0x0d8b,	// (0x0008b490) popup_image3_note_pane_t3

0x0002,

0xf83d,	// (0x00099f42) popup_image3_note_pane_t

0x0d9b,	// (0x0008b4a0) popup_image3_note_pane_t3_copy1

0x740f,	// (0x00091b14) bg_myfav_hc_instruction_pane_ParamLimits

0x740f,	// (0x00091b14) bg_myfav_hc_instruction_pane

0x7427,	// (0x00091b2c) cell_myfav_contact_pane_ParamLimits

0x7427,	// (0x00091b2c) cell_myfav_contact_pane

0x7441,	// (0x00091b46) cell_myfav_contact_pane_cp1_ParamLimits

0x7441,	// (0x00091b46) cell_myfav_contact_pane_cp1

0x7459,	// (0x00091b5e) cell_myfav_contact_pane_cp2_ParamLimits

0x7459,	// (0x00091b5e) cell_myfav_contact_pane_cp2

0x7471,	// (0x00091b76) cell_myfav_contact_pane_cp3_ParamLimits

0x7471,	// (0x00091b76) cell_myfav_contact_pane_cp3

0x7488,	// (0x00091b8d) cell_myfav_contact_pane_cp4_ParamLimits

0x7488,	// (0x00091b8d) cell_myfav_contact_pane_cp4

0x749e,	// (0x00091ba3) cell_myfav_contact_pane_cp5_ParamLimits

0x749e,	// (0x00091ba3) cell_myfav_contact_pane_cp5

0x74b2,	// (0x00091bb7) cell_myfav_contact_pane_cp6_ParamLimits

0x74b2,	// (0x00091bb7) cell_myfav_contact_pane_cp6

0x74c6,	// (0x00091bcb) cell_myfav_contact_pane_cp7_ParamLimits

0x74c6,	// (0x00091bcb) cell_myfav_contact_pane_cp7

0x0da9,	// (0x0008b4ae) listscroll_gen_pane_cp05

0x74de,	// (0x00091be3) main_myfav_hc_pane_g1_ParamLimits

0x74de,	// (0x00091be3) main_myfav_hc_pane_g1

0x74f8,	// (0x00091bfd) main_myfav_hc_pane_g2_ParamLimits

0x74f8,	// (0x00091bfd) main_myfav_hc_pane_g2

0x0002,

0xf844,	// (0x00099f49) main_myfav_hc_pane_g_ParamLimits

0xf844,	// (0x00099f49) main_myfav_hc_pane_g

0x752a,	// (0x00091c2f) main_myfav_hc_pane_t1_ParamLimits

0x752a,	// (0x00091c2f) main_myfav_hc_pane_t1

0x0db2,	// (0x0008b4b7) main_myfav_hc_pane_t2_ParamLimits

0x0db2,	// (0x0008b4b7) main_myfav_hc_pane_t2

0x0dc4,	// (0x0008b4c9) main_myfav_hc_pane_t3_ParamLimits

0x0dc4,	// (0x0008b4c9) main_myfav_hc_pane_t3

0x7541,	// (0x00091c46) main_myfav_hc_pane_t4_ParamLimits

0x7541,	// (0x00091c46) main_myfav_hc_pane_t4

0x0004,

0xf84b,	// (0x00099f50) main_myfav_hc_pane_t_ParamLimits

0xf84b,	// (0x00099f50) main_myfav_hc_pane_t

0xc6eb,	// (0x00096df0) bg_myfav_hc_instruction_pane_g1

0x0dd6,	// (0x0008b4db) cell_myfav_contact_pane_g1_ParamLimits

0x0dd6,	// (0x0008b4db) cell_myfav_contact_pane_g1

0x0dd6,	// (0x0008b4db) cell_myfav_contact_pane_g2_ParamLimits

0x0dd6,	// (0x0008b4db) cell_myfav_contact_pane_g2

0x0de2,	// (0x0008b4e7) cell_myfav_contact_pane_g3_ParamLimits

0x0de2,	// (0x0008b4e7) cell_myfav_contact_pane_g3

0xc6bb,	// (0x00096dc0) cell_myfav_contact_pane_g4_ParamLimits

0xc6bb,	// (0x00096dc0) cell_myfav_contact_pane_g4

0x0def,	// (0x0008b4f4) cell_myfav_contact_pane_g5_ParamLimits

0x0def,	// (0x0008b4f4) cell_myfav_contact_pane_g5

0x0004,

0xf856,	// (0x00099f5b) cell_myfav_contact_pane_g_ParamLimits

0xf856,	// (0x00099f5b) cell_myfav_contact_pane_g

0x7512,	// (0x00091c17) main_myfav_hc_pane_g3_ParamLimits

0x7512,	// (0x00091c17) main_myfav_hc_pane_g3

0x2873,	// (0x0008cf78) popup_adpt_find_window

0x756b,	// (0x00091c70) afind_page_pane_ParamLimits

0x756b,	// (0x00091c70) afind_page_pane

0x7578,	// (0x00091c7d) aid_size_cell_afind_ParamLimits

0x7578,	// (0x00091c7d) aid_size_cell_afind

0x7592,	// (0x00091c97) bg_popup_sub_pane_cp09_ParamLimits

0x7592,	// (0x00091c97) bg_popup_sub_pane_cp09

0x75a3,	// (0x00091ca8) find_pane_cp01_ParamLimits

0x75a3,	// (0x00091ca8) find_pane_cp01

0x0dfb,	// (0x0008b500) grid_afind_control_pane_ParamLimits

0x0dfb,	// (0x0008b500) grid_afind_control_pane

0x75b6,	// (0x00091cbb) grid_afind_pane_ParamLimits

0x75b6,	// (0x00091cbb) grid_afind_pane

0x75d2,	// (0x00091cd7) cell_afind_pane_ParamLimits

0x75d2,	// (0x00091cd7) cell_afind_pane

0xc6eb,	// (0x00096df0) afind_page_pane_g1

0x761a,	// (0x00091d1f) afind_page_pane_g2

0x7622,	// (0x00091d27) afind_page_pane_g3

0x0002,

0xf861,	// (0x00099f66) afind_page_pane_g

0x762a,	// (0x00091d2f) afind_page_pane_t1

0x0e21,	// (0x0008b526) cell_afind_grid_control_pane_ParamLimits

0x0e21,	// (0x0008b526) cell_afind_grid_control_pane

0x0e30,	// (0x0008b535) bg_button_pane_cp69_ParamLimits

0x0e30,	// (0x0008b535) bg_button_pane_cp69

0x7638,	// (0x00091d3d) cell_afind_pane_g1_ParamLimits

0x7638,	// (0x00091d3d) cell_afind_pane_g1

0x7645,	// (0x00091d4a) cell_afind_pane_t1_ParamLimits

0x7645,	// (0x00091d4a) cell_afind_pane_t1

0x0e3c,	// (0x0008b541) bg_button_pane_cp72

0x0e44,	// (0x0008b549) cell_afind_grid_control_pane_g1

0x516c,	// (0x0008f871) aid_image_placing_area_ParamLimits

0x516c,	// (0x0008f871) aid_image_placing_area

0xc6ad,	// (0x00096db2) field_vitu_entry_pane_g1_ParamLimits

0xc6ad,	// (0x00096db2) field_vitu_entry_pane_g1

0xc6ad,	// (0x00096db2) field_vitu_entry_pane_g2_ParamLimits

0xc6ad,	// (0x00096db2) field_vitu_entry_pane_g2

0x0001,

0xf199,	// (0x0009989e) field_vitu_entry_pane_g_ParamLimits

0xf199,	// (0x0009989e) field_vitu_entry_pane_g

0xeed7,	// (0x000995dc) cell_vitu_itu_pane_g1_ParamLimits

0xec89,	// (0x0009938e) cell_vitu_itu_pane_t3_ParamLimits

0xec89,	// (0x0009938e) cell_vitu_itu_pane_t3

0x0bf4,	// (0x0008b2f9) mp4_progress_pane_t1_ParamLimits

0x0c12,	// (0x0008b317) mp4_progress_pane_t2_ParamLimits

0xf7a7,	// (0x00099eac) mp4_progress_pane_t_ParamLimits

0x0c31,	// (0x0008b336) mup_progress_pane_cp04_ParamLimits

0x7555,	// (0x00091c5a) main_myfav_hc_pane_t5_ParamLimits

0x7555,	// (0x00091c5a) main_myfav_hc_pane_t5

0x2694,	// (0x0008cd99) aid_zoom_text_primary

0x2873,	// (0x0008cf78) popup_adpt_find_window_ParamLimits

0x55c8,	// (0x0008fccd) main_cam_set_pane

0x6f04,	// (0x00091609) cam4_zoom_pane_ParamLimits

0x6f04,	// (0x00091609) cam4_zoom_pane

0x7657,	// (0x00091d5c) main_cam_set_pane_g1_ParamLimits

0x7657,	// (0x00091d5c) main_cam_set_pane_g1

0x7665,	// (0x00091d6a) main_cam_set_pane_g2_ParamLimits

0x7665,	// (0x00091d6a) main_cam_set_pane_g2

0x0001,

0xf868,	// (0x00099f6d) main_cam_set_pane_g_ParamLimits

0xf868,	// (0x00099f6d) main_cam_set_pane_g

0x7671,	// (0x00091d76) main_cam_set_pane_t1_ParamLimits

0x7671,	// (0x00091d76) main_cam_set_pane_t1

0x768d,	// (0x00091d92) main_cset_listscroll_pane_ParamLimits

0x768d,	// (0x00091d92) main_cset_listscroll_pane

0x76c1,	// (0x00091dc6) main_cset_slider_pane_ParamLimits

0x76c1,	// (0x00091dc6) main_cset_slider_pane

0x0e55,	// (0x0008b55a) main_cset_list_pane_ParamLimits

0x0e55,	// (0x0008b55a) main_cset_list_pane

0x0e65,	// (0x0008b56a) scroll_pane_cp028

0x76e2,	// (0x00091de7) aid_area_touch_slider

0x76fe,	// (0x00091e03) cset_slider_pane

0x7721,	// (0x00091e26) main_cset_slider_pane_g1

0x7736,	// (0x00091e3b) main_cset_slider_pane_g2

0x0011,

0xf86d,	// (0x00099f72) main_cset_slider_pane_g

0x0e9e,	// (0x0008b5a3) main_cset_slider_pane_t1

0x77f2,	// (0x00091ef7) main_cset_slider_pane_t2

0x780c,	// (0x00091f11) main_cset_slider_pane_t3

0x7826,	// (0x00091f2b) main_cset_slider_pane_t4

0x7840,	// (0x00091f45) main_cset_slider_pane_t5

0x785a,	// (0x00091f5f) main_cset_slider_pane_t6

0x786f,	// (0x00091f74) main_cset_slider_pane_t7

0x000e,

0xf892,	// (0x00099f97) main_cset_slider_pane_t

0x7973,	// (0x00092078) cset_list_set_pane_ParamLimits

0x7973,	// (0x00092078) cset_list_set_pane

0x0f38,	// (0x0008b63d) aid_position_infowindow_above

0x0f40,	// (0x0008b645) aid_position_infowindow_below

0x7984,	// (0x00092089) cset_list_set_pane_g1_ParamLimits

0x7984,	// (0x00092089) cset_list_set_pane_g1

0x7990,	// (0x00092095) cset_list_set_pane_g3_ParamLimits

0x7990,	// (0x00092095) cset_list_set_pane_g3

0x0001,

0xf8b1,	// (0x00099fb6) cset_list_set_pane_g_ParamLimits

0xf8b1,	// (0x00099fb6) cset_list_set_pane_g

0x799f,	// (0x000920a4) cset_list_set_pane_t1_ParamLimits

0x799f,	// (0x000920a4) cset_list_set_pane_t1

0x153a,	// (0x0008bc3f) list_highlight_pane_cp021_ParamLimits

0x153a,	// (0x0008bc3f) list_highlight_pane_cp021

0xd39b,	// (0x00097aa0) cset_slider_pane_g1

0xd3ad,	// (0x00097ab2) cset_slider_pane_g2

0xd3a4,	// (0x00097aa9) cset_slider_pane_g3

0x0002,

0xf8b6,	// (0x00099fbb) cset_slider_pane_g

0xd029,	// (0x0009772e) aid_area_touch_cam4_zoom

0x79b4,	// (0x000920b9) cam4_zoom_cont_pane

0x79bc,	// (0x000920c1) cam4_zoom_pane_g1

0x79c4,	// (0x000920c9) cam4_zoom_pane_g2

0x79cc,	// (0x000920d1) cam4_zoom_pane_g3

0x0002,

0xf8bd,	// (0x00099fc2) cam4_zoom_pane_g

0x79d4,	// (0x000920d9) cam4_zoom_cont_pane_g1

0x79dd,	// (0x000920e2) cam4_zoom_cont_pane_g2

0x79e6,	// (0x000920eb) cam4_zoom_cont_pane_g3

0x0002,

0xf8c4,	// (0x00099fc9) cam4_zoom_cont_pane_g

0x6d3c,	// (0x00091441) call4_image_pane_ParamLimits

0x6d3c,	// (0x00091441) call4_image_pane

0x6d9d,	// (0x000914a2) call4_windows_conf_pane_ParamLimits

0x6de4,	// (0x000914e9) popup_call4_audio_in_window_ParamLimits

0x6de4,	// (0x000914e9) popup_call4_audio_in_window

0x0a98,	// (0x0008b19d) bg_popup_call2_act_pane_cp02

0x0c72,	// (0x0008b377) call4_list_conf_pane

0xc6eb,	// (0x00096df0) call4_image_pane_g1

0xc6eb,	// (0x00096df0) call4_image_pane_g2

0x0001,

0xf08c,	// (0x00099791) call4_image_pane_g

0x0f6c,	// (0x0008b671) list_single_graphic_popup_conf4_pane_ParamLimits

0x0f6c,	// (0x0008b671) list_single_graphic_popup_conf4_pane

0x0a98,	// (0x0008b19d) list_highlight_pane_cp022

0x0f81,	// (0x0008b686) list_single_graphic_popup_conf4_pane_g1

0xd082,	// (0x00097787) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf8cb,	// (0x00099fd0) list_single_graphic_popup_conf4_pane_g

0x0f89,	// (0x0008b68e) list_single_graphic_popup_conf4_pane_t1

0x3658,	// (0x0008dd5d) popup_vtel_slider_window_ParamLimits

0x3658,	// (0x0008dd5d) popup_vtel_slider_window

0x0c44,	// (0x0008b349) dialer2_ne_pane_t2_ParamLimits

0x0c44,	// (0x0008b349) dialer2_ne_pane_t2

0x0001,

0xf7ac,	// (0x00099eb1) dialer2_ne_pane_t_ParamLimits

0xf7ac,	// (0x00099eb1) dialer2_ne_pane_t

0x153a,	// (0x0008bc3f) bg_popup_sub_pane_cp010_ParamLimits

0x153a,	// (0x0008bc3f) bg_popup_sub_pane_cp010

0x79ef,	// (0x000920f4) popup_vtel_slider_window_g1_ParamLimits

0x79ef,	// (0x000920f4) popup_vtel_slider_window_g1

0x79fb,	// (0x00092100) popup_vtel_slider_window_g2_ParamLimits

0x79fb,	// (0x00092100) popup_vtel_slider_window_g2

0x0003,

0xf8d0,	// (0x00099fd5) popup_vtel_slider_window_g_ParamLimits

0xf8d0,	// (0x00099fd5) popup_vtel_slider_window_g

0x7a43,	// (0x00092148) vtel_slider_pane_ParamLimits

0x7a43,	// (0x00092148) vtel_slider_pane

0x7a52,	// (0x00092157) vtel_slider_pane_g1_ParamLimits

0x7a52,	// (0x00092157) vtel_slider_pane_g1

0x7a5f,	// (0x00092164) vtel_slider_pane_g2_ParamLimits

0x7a5f,	// (0x00092164) vtel_slider_pane_g2

0x7a6c,	// (0x00092171) vtel_slider_pane_g3_ParamLimits

0x7a6c,	// (0x00092171) vtel_slider_pane_g3

0x7a52,	// (0x00092157) vtel_slider_pane_g4_ParamLimits

0x7a52,	// (0x00092157) vtel_slider_pane_g4

0x7a79,	// (0x0009217e) vtel_slider_pane_g5_ParamLimits

0x7a79,	// (0x0009217e) vtel_slider_pane_g5

0x0004,

0xf8d9,	// (0x00099fde) vtel_slider_pane_g_ParamLimits

0xf8d9,	// (0x00099fde) vtel_slider_pane_g

0x55c8,	// (0x0008fccd) main_gallery2_pane

0x715c,	// (0x00091861) aid_size_row_itut2_dropdow_list_ParamLimits

0x715c,	// (0x00091861) aid_size_row_itut2_dropdow_list

0x71ca,	// (0x000918cf) grid_vitu2_function_top_pane_ParamLimits

0x71ca,	// (0x000918cf) grid_vitu2_function_top_pane

0x7220,	// (0x00091925) popup_vitu2_dropdown_list_window_ParamLimits

0x7220,	// (0x00091925) popup_vitu2_dropdown_list_window

0x723e,	// (0x00091943) popup_vitu2_match_list_window

0x7a86,	// (0x0009218b) cell_vitu2_function_top_pane_ParamLimits

0x7a86,	// (0x0009218b) cell_vitu2_function_top_pane

0x7aa0,	// (0x000921a5) cell_vitu2_function_top_pane_cp01_ParamLimits

0x7aa0,	// (0x000921a5) cell_vitu2_function_top_pane_cp01

0x7abc,	// (0x000921c1) cell_vitu2_function_top_wide_pane_ParamLimits

0x7abc,	// (0x000921c1) cell_vitu2_function_top_wide_pane

0x55c8,	// (0x0008fccd) bg_button_pane_cp012

0x7ada,	// (0x000921df) cell_vitu2_function_top_pane_g1

0x7aee,	// (0x000921f3) bg_button_pane_cp013_ParamLimits

0x7aee,	// (0x000921f3) bg_button_pane_cp013

0x7b0a,	// (0x0009220f) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x7b0a,	// (0x0009220f) cell_vitu2_function_top_wide_pane_g1

0x2969,	// (0x0008d06e) bg_popup_sub_pane_cp20

0x7b22,	// (0x00092227) list_vitu2_match_list_pane

0x0d21,	// (0x0008b426) bg_popup_sub_pane_cp20_g1

0x0d29,	// (0x0008b42e) bg_popup_sub_pane_cp20_g2

0xcb82,	// (0x00097287) bg_popup_sub_pane_cp20_g3

0x0d31,	// (0x0008b436) bg_popup_sub_pane_cp20_g4

0xcb62,	// (0x00097267) bg_popup_sub_pane_cp20_g5

0x0f9f,	// (0x0008b6a4) bg_popup_sub_pane_cp20_g6

0x0d41,	// (0x0008b446) bg_popup_sub_pane_cp20_g7

0x0d49,	// (0x0008b44e) bg_popup_sub_pane_cp20_g8

0x0d51,	// (0x0008b456) bg_popup_sub_pane_cp20_g9

0x0008,

0xf8e4,	// (0x00099fe9) bg_popup_sub_pane_cp20_g

0x7b3a,	// (0x0009223f) list_vitu2_match_list_item_pane_ParamLimits

0x7b3a,	// (0x0009223f) list_vitu2_match_list_item_pane

0x7b4c,	// (0x00092251) list_vitu2_match_list_item_pane_t1

0x2983,	// (0x0008d088) bg_popup_sub_pane_cp21

0xc958,	// (0x0009705d) grid_vitu2_dropdown_list_pane

0x7b5a,	// (0x0009225f) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x7b5a,	// (0x0009225f) cell_vitu2_dropdown_list_char_pane

0x7b7e,	// (0x00092283) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x7b7e,	// (0x00092283) cell_vitu2_dropdown_list_ctrl_pane

0x0fb9,	// (0x0008b6be) cell_vitu2_dropdown_list_char_pane_g1

0x0fb0,	// (0x0008b6b5) cell_vitu2_dropdown_list_char_pane_g2

0x0fa7,	// (0x0008b6ac) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf8f7,	// (0x00099ffc) cell_vitu2_dropdown_list_char_pane_g

0x7ba8,	// (0x000922ad) cell_vitu2_dropdown_list_char_pane_t1

0x7bb6,	// (0x000922bb) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x7bb6,	// (0x000922bb) cell_vitu2_dropdown_list_ctrl_pane_g1

0x7bc6,	// (0x000922cb) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x7bc6,	// (0x000922cb) cell_vitu2_dropdown_list_ctrl_pane_g2

0x7bd7,	// (0x000922dc) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x7bd7,	// (0x000922dc) cell_vitu2_dropdown_list_ctrl_pane_g3

0x7be7,	// (0x000922ec) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x7be7,	// (0x000922ec) cell_vitu2_dropdown_list_ctrl_pane_g4

0xb24e,	// (0x00095953) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xb24e,	// (0x00095953) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf8fe,	// (0x0009a003) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf8fe,	// (0x0009a003) cell_vitu2_dropdown_list_ctrl_pane_g

0x7c00,	// (0x00092305) aid_size_cell_gallery2_ParamLimits

0x7c00,	// (0x00092305) aid_size_cell_gallery2

0x7c1a,	// (0x0009231f) grid_gallery2_pane_ParamLimits

0x7c1a,	// (0x0009231f) grid_gallery2_pane

0x7c31,	// (0x00092336) scroll_pane_cp029_ParamLimits

0x7c31,	// (0x00092336) scroll_pane_cp029

0x7c41,	// (0x00092346) cell_gallery2_pane_ParamLimits

0x7c41,	// (0x00092346) cell_gallery2_pane

0x0fc2,	// (0x0008b6c7) cell_gallery2_pane_g2

0x7c98,	// (0x0009239d) cell_gallery2_pane_g3

0x0fca,	// (0x0008b6cf) cell_gallery2_pane_g4

0x0fd2,	// (0x0008b6d7) cell_gallery2_pane_g5

0xc958,	// (0x0009705d) grid_highlight_pane_cp10

0x723e,	// (0x00091943) popup_vitu2_match_list_window_ParamLimits

0x7252,	// (0x00091957) popup_vitu2_query_window_ParamLimits

0x7252,	// (0x00091957) popup_vitu2_query_window

0x2983,	// (0x0008d088) bg_vitu2_candi_button_pane

0x0fb9,	// (0x0008b6be) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x0fb0,	// (0x0008b6b5) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x0fa7,	// (0x0008b6ac) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x7ca0,	// (0x000923a5) bg_button_pane_cp015

0x7cb5,	// (0x000923ba) bg_button_pane_cp016

0x7cc1,	// (0x000923c6) bg_button_pane_cp017

0xd331,	// (0x00097a36) bg_popup_sub_pane_cp22

0x0fda,	// (0x0008b6df) popup_vitu2_query_window_g1

0x7d02,	// (0x00092407) popup_vitu2_query_window_g2

0x0002,

0xf909,	// (0x0009a00e) popup_vitu2_query_window_g

0x7d26,	// (0x0009242b) popup_vitu2_query_window_t1_ParamLimits

0x7d26,	// (0x0009242b) popup_vitu2_query_window_t1

0x7d59,	// (0x0009245e) popup_vitu2_query_window_t2_ParamLimits

0x7d59,	// (0x0009245e) popup_vitu2_query_window_t2

0x7d6b,	// (0x00092470) popup_vitu2_query_window_t3_ParamLimits

0x7d6b,	// (0x00092470) popup_vitu2_query_window_t3

0x7d93,	// (0x00092498) popup_vitu2_query_window_t4_ParamLimits

0x7d93,	// (0x00092498) popup_vitu2_query_window_t4

0x7da7,	// (0x000924ac) popup_vitu2_query_window_t5_ParamLimits

0x7da7,	// (0x000924ac) popup_vitu2_query_window_t5

0x0006,

0xf910,	// (0x0009a015) popup_vitu2_query_window_t_ParamLimits

0xf910,	// (0x0009a015) popup_vitu2_query_window_t

0x0e4d,	// (0x0008b552) main_cset_text_pane

0x76e2,	// (0x00091de7) aid_area_touch_slider_ParamLimits

0x76fe,	// (0x00091e03) cset_slider_pane_ParamLimits

0x7721,	// (0x00091e26) main_cset_slider_pane_g1_ParamLimits

0x7736,	// (0x00091e3b) main_cset_slider_pane_g2_ParamLimits

0x0e6e,	// (0x0008b573) main_cset_slider_pane_g3_ParamLimits

0x0e6e,	// (0x0008b573) main_cset_slider_pane_g3

0x774b,	// (0x00091e50) main_cset_slider_pane_g4_ParamLimits

0x774b,	// (0x00091e50) main_cset_slider_pane_g4

0x775a,	// (0x00091e5f) main_cset_slider_pane_g5_ParamLimits

0x775a,	// (0x00091e5f) main_cset_slider_pane_g5

0x7766,	// (0x00091e6b) main_cset_slider_pane_g6_ParamLimits

0x7766,	// (0x00091e6b) main_cset_slider_pane_g6

0xf86d,	// (0x00099f72) main_cset_slider_pane_g_ParamLimits

0x0e9e,	// (0x0008b5a3) main_cset_slider_pane_t1_ParamLimits

0x77f2,	// (0x00091ef7) main_cset_slider_pane_t2_ParamLimits

0x780c,	// (0x00091f11) main_cset_slider_pane_t3_ParamLimits

0x7826,	// (0x00091f2b) main_cset_slider_pane_t4_ParamLimits

0x7840,	// (0x00091f45) main_cset_slider_pane_t5_ParamLimits

0x785a,	// (0x00091f5f) main_cset_slider_pane_t6_ParamLimits

0x786f,	// (0x00091f74) main_cset_slider_pane_t7_ParamLimits

0x7899,	// (0x00091f9e) main_cset_slider_pane_t8_ParamLimits

0x7899,	// (0x00091f9e) main_cset_slider_pane_t8

0x78c1,	// (0x00091fc6) main_cset_slider_pane_t9_ParamLimits

0x78c1,	// (0x00091fc6) main_cset_slider_pane_t9

0x78e9,	// (0x00091fee) main_cset_slider_pane_t10_ParamLimits

0x78e9,	// (0x00091fee) main_cset_slider_pane_t10

0x7911,	// (0x00092016) main_cset_slider_pane_t11_ParamLimits

0x7911,	// (0x00092016) main_cset_slider_pane_t11

0x7939,	// (0x0009203e) main_cset_slider_pane_t12_ParamLimits

0x7939,	// (0x0009203e) main_cset_slider_pane_t12

0x7956,	// (0x0009205b) main_cset_slider_pane_t13_ParamLimits

0x7956,	// (0x0009205b) main_cset_slider_pane_t13

0xf892,	// (0x00099f97) main_cset_slider_pane_t_ParamLimits

0x0a98,	// (0x0008b19d) bg_popup_sub_pane_cp011

0x0fe6,	// (0x0008b6eb) main_cset_text_pane_g1

0x0fee,	// (0x0008b6f3) main_cset_text_pane_t1

0x0ffc,	// (0x0008b701) main_cset_text_pane_t2

0x100a,	// (0x0008b70f) main_cset_text_pane_t3

0x1018,	// (0x0008b71d) main_cset_text_pane_t4

0x1026,	// (0x0008b72b) main_cset_text_pane_t5

0x1034,	// (0x0008b739) main_cset_text_pane_t6

0x1042,	// (0x0008b747) main_cset_text_pane_t7

0x0006,

0xf91f,	// (0x0009a024) main_cset_text_pane_t

0x2983,	// (0x0008d088) main_cam4_burst_pane

0x2983,	// (0x0008d088) main_cam5_pane

0x0e0f,	// (0x0008b514) bg_button_pane_cp019

0x0e18,	// (0x0008b51d) bg_button_pane_cp020

0x0e7a,	// (0x0008b57f) main_cset_slider_pane_g7_ParamLimits

0x0e7a,	// (0x0008b57f) main_cset_slider_pane_g7

0x0e86,	// (0x0008b58b) main_cset_slider_pane_g8_ParamLimits

0x0e86,	// (0x0008b58b) main_cset_slider_pane_g8

0x777a,	// (0x00091e7f) main_cset_slider_pane_g9_ParamLimits

0x777a,	// (0x00091e7f) main_cset_slider_pane_g9

0x7786,	// (0x00091e8b) main_cset_slider_pane_g10_ParamLimits

0x7786,	// (0x00091e8b) main_cset_slider_pane_g10

0x7792,	// (0x00091e97) main_cset_slider_pane_g11_ParamLimits

0x7792,	// (0x00091e97) main_cset_slider_pane_g11

0x779e,	// (0x00091ea3) main_cset_slider_pane_g12_ParamLimits

0x779e,	// (0x00091ea3) main_cset_slider_pane_g12

0x77aa,	// (0x00091eaf) main_cset_slider_pane_g13_ParamLimits

0x77aa,	// (0x00091eaf) main_cset_slider_pane_g13

0x77b6,	// (0x00091ebb) main_cset_slider_pane_g14_ParamLimits

0x77b6,	// (0x00091ebb) main_cset_slider_pane_g14

0x77c2,	// (0x00091ec7) main_cset_slider_pane_g15_ParamLimits

0x77c2,	// (0x00091ec7) main_cset_slider_pane_g15

0x0ec6,	// (0x0008b5cb) main_cset_slider_pane_t14_ParamLimits

0x0ec6,	// (0x0008b5cb) main_cset_slider_pane_t14

0x0eff,	// (0x0008b604) main_cset_slider_pane_t15_ParamLimits

0x0eff,	// (0x0008b604) main_cset_slider_pane_t15

0x7e11,	// (0x00092516) aid_cam4_burst_size_cell_ParamLimits

0x7e11,	// (0x00092516) aid_cam4_burst_size_cell

0x7e2d,	// (0x00092532) grid_cam4_burst_pane_ParamLimits

0x7e2d,	// (0x00092532) grid_cam4_burst_pane

0x7e5f,	// (0x00092564) linegrid_cam4_burst_pane_ParamLimits

0x7e5f,	// (0x00092564) linegrid_cam4_burst_pane

0x7e7d,	// (0x00092582) scroll_pane_cp30_ParamLimits

0x7e7d,	// (0x00092582) scroll_pane_cp30

0x7e89,	// (0x0009258e) cell_cam4_burst_pane_ParamLimits

0x7e89,	// (0x0009258e) cell_cam4_burst_pane

0x1050,	// (0x0008b755) linegrid_cam4_burst_pane_g1_ParamLimits

0x1050,	// (0x0008b755) linegrid_cam4_burst_pane_g1

0x7ec9,	// (0x000925ce) linegrid_cam4_burst_pane_g2_ParamLimits

0x7ec9,	// (0x000925ce) linegrid_cam4_burst_pane_g2

0x105d,	// (0x0008b762) linegrid_cam4_burst_pane_g3_ParamLimits

0x105d,	// (0x0008b762) linegrid_cam4_burst_pane_g3

0x0002,

0xf92e,	// (0x0009a033) linegrid_cam4_burst_pane_g_ParamLimits

0xf92e,	// (0x0009a033) linegrid_cam4_burst_pane_g

0x7eda,	// (0x000925df) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x7eda,	// (0x000925df) linegrid_cam4_burst_pane_g3_copy1

0x106a,	// (0x0008b76f) linegrid_cam4_burst_pane_g4_ParamLimits

0x106a,	// (0x0008b76f) linegrid_cam4_burst_pane_g4

0x7ef4,	// (0x000925f9) linegrid_cam4_burst_pane_g5_ParamLimits

0x7ef4,	// (0x000925f9) linegrid_cam4_burst_pane_g5

0x7f05,	// (0x0009260a) linegrid_cam4_burst_pane_g6_ParamLimits

0x7f05,	// (0x0009260a) linegrid_cam4_burst_pane_g6

0x1077,	// (0x0008b77c) linegrid_cam4_burst_pane_g7_ParamLimits

0x1077,	// (0x0008b77c) linegrid_cam4_burst_pane_g7

0x7f1c,	// (0x00092621) cell_cam4_burst_pane_g1

0x1090,	// (0x0008b795) main_cam5_pane_t1_ParamLimits

0x1090,	// (0x0008b795) main_cam5_pane_t1

0x10a2,	// (0x0008b7a7) main_cam5_pane_t2_ParamLimits

0x10a2,	// (0x0008b7a7) main_cam5_pane_t2

0x10b4,	// (0x0008b7b9) main_cam5_pane_t3_ParamLimits

0x10b4,	// (0x0008b7b9) main_cam5_pane_t3

0x10c6,	// (0x0008b7cb) main_cam5_pane_t4_ParamLimits

0x10c6,	// (0x0008b7cb) main_cam5_pane_t4

0x10de,	// (0x0008b7e3) main_cam5_pane_t5_ParamLimits

0x10de,	// (0x0008b7e3) main_cam5_pane_t5

0x10f2,	// (0x0008b7f7) main_cam5_pane_t6_ParamLimits

0x10f2,	// (0x0008b7f7) main_cam5_pane_t6

0x1106,	// (0x0008b80b) main_cam5_pane_t7_ParamLimits

0x1106,	// (0x0008b80b) main_cam5_pane_t7

0x1118,	// (0x0008b81d) main_cam5_pane_t8_ParamLimits

0x1118,	// (0x0008b81d) main_cam5_pane_t8

0x1136,	// (0x0008b83b) main_cam5_pane_t9_ParamLimits

0x1136,	// (0x0008b83b) main_cam5_pane_t9

0x1148,	// (0x0008b84d) main_cam5_pane_t10_ParamLimits

0x1148,	// (0x0008b84d) main_cam5_pane_t10

0x115a,	// (0x0008b85f) main_cam5_pane_t11_ParamLimits

0x115a,	// (0x0008b85f) main_cam5_pane_t11

0x116e,	// (0x0008b873) main_cam5_pane_t12_ParamLimits

0x116e,	// (0x0008b873) main_cam5_pane_t12

0x1185,	// (0x0008b88a) main_cam5_pane_t13_ParamLimits

0x1185,	// (0x0008b88a) main_cam5_pane_t13

0x000c,

0xf93a,	// (0x0009a03f) main_cam5_pane_t_ParamLimits

0xf93a,	// (0x0009a03f) main_cam5_pane_t

0x2928,	// (0x0008d02d) popup_scut_keymap_window_ParamLimits

0x2928,	// (0x0008d02d) popup_scut_keymap_window

0x7f2f,	// (0x00092634) aid_size_cell_brow_shortcut

0xc958,	// (0x0009705d) bg_popup_window_pane_cp010

0x7f3b,	// (0x00092640) grid_scut_pane

0x7f47,	// (0x0009264c) cell_scut_pane_ParamLimits

0x7f47,	// (0x0009264c) cell_scut_pane

0x7f62,	// (0x00092667) cell_scut_pane_g1

0x11a8,	// (0x0008b8ad) cell_scut_pane_t1

0x11b7,	// (0x0008b8bc) cell_scut_pane_t2

0x7f6b,	// (0x00092670) cell_scut_pane_t3

0x0002,

0xf955,	// (0x0009a05a) cell_scut_pane_t

0x5ec9,	// (0x000905ce) main_mup3_pane_g8_ParamLimits

0x5ec9,	// (0x000905ce) main_mup3_pane_g8

0x716a,	// (0x0009186f) area_vitu2_query_pane_ParamLimits

0x716a,	// (0x0009186f) area_vitu2_query_pane

0x7ccd,	// (0x000923d2) input_focus_pane_cp08

0x11c6,	// (0x0008b8cb) area_vitu2_query_pane_g1

0x7f79,	// (0x0009267e) area_vitu2_query_pane_g2

0x0001,

0xf95c,	// (0x0009a061) area_vitu2_query_pane_g

0x7f8a,	// (0x0009268f) area_vitu2_query_pane_t1_ParamLimits

0x7f8a,	// (0x0009268f) area_vitu2_query_pane_t1

0x7f9e,	// (0x000926a3) area_vitu2_query_pane_t2_ParamLimits

0x7f9e,	// (0x000926a3) area_vitu2_query_pane_t2

0x7fb2,	// (0x000926b7) area_vitu2_query_pane_t3_ParamLimits

0x7fb2,	// (0x000926b7) area_vitu2_query_pane_t3

0x11d2,	// (0x0008b8d7) area_vitu2_query_pane_t4_ParamLimits

0x11d2,	// (0x0008b8d7) area_vitu2_query_pane_t4

0x11fa,	// (0x0008b8ff) area_vitu2_query_pane_t5_ParamLimits

0x11fa,	// (0x0008b8ff) area_vitu2_query_pane_t5

0x1222,	// (0x0008b927) area_vitu2_query_pane_t6_ParamLimits

0x1222,	// (0x0008b927) area_vitu2_query_pane_t6

0x0006,

0xf961,	// (0x0009a066) area_vitu2_query_pane_t_ParamLimits

0xf961,	// (0x0009a066) area_vitu2_query_pane_t

0x7cb5,	// (0x000923ba) bg_button_pane_cp018

0x7fda,	// (0x000926df) bg_button_pane_cp021

0x7fe6,	// (0x000926eb) bg_button_pane_cp022

0x8009,	// (0x0009270e) input_focus_pane_cp09

0x499d,	// (0x0008f0a2) aid_size_touch_mv_arrow_left

0x49c8,	// (0x0008f0cd) aid_size_touch_mv_arrow_right

0x77da,	// (0x00091edf) main_cset_slider_pane_g16_ParamLimits

0x77da,	// (0x00091edf) main_cset_slider_pane_g16

0x77e6,	// (0x00091eeb) main_cset_slider_pane_g17_ParamLimits

0x77e6,	// (0x00091eeb) main_cset_slider_pane_g17

0x7f1c,	// (0x00092621) cell_cam4_burst_pane_g1_ParamLimits

0x0a98,	// (0x0008b19d) compa_mode_pane

0x7a07,	// (0x0009210c) popup_vtel_slider_window_g3_ParamLimits

0x7a07,	// (0x0009210c) popup_vtel_slider_window_g3

0x7a1b,	// (0x00092120) popup_vtel_slider_window_g4_ParamLimits

0x7a1b,	// (0x00092120) popup_vtel_slider_window_g4

0x7a2f,	// (0x00092134) popup_vtel_slider_window_t1_ParamLimits

0x7a2f,	// (0x00092134) popup_vtel_slider_window_t1

0x2983,	// (0x0008d088) main_cl_pane

0x5672,	// (0x0008fd77) popup_imed_adjust2_window_ParamLimits

0xd331,	// (0x00097a36) bg_tb_trans_pane_cp05_ParamLimits

0xedfa,	// (0x000994ff) popup_imed_adjust2_window_g1_ParamLimits

0xee09,	// (0x0009950e) popup_imed_adjust2_window_g2_ParamLimits

0xee09,	// (0x0009950e) popup_imed_adjust2_window_g2

0xee15,	// (0x0009951a) popup_imed_adjust2_window_g3_ParamLimits

0xee15,	// (0x0009951a) popup_imed_adjust2_window_g3

0x0002,

0xf6e1,	// (0x00099de6) popup_imed_adjust2_window_g_ParamLimits

0xf6e1,	// (0x00099de6) popup_imed_adjust2_window_g

0xee21,	// (0x00099526) popup_imed_adjust2_window_t1_ParamLimits

0xee39,	// (0x0009953e) slider_imed_adjust_pane_ParamLimits

0xee4d,	// (0x00099552) slider_imed_adjust_pane_g1_ParamLimits

0xee5d,	// (0x00099562) slider_imed_adjust_pane_g2_ParamLimits

0xee6d,	// (0x00099572) slider_imed_adjust_pane_g3_ParamLimits

0xee7e,	// (0x00099583) slider_imed_adjust_pane_g4_ParamLimits

0xf6e8,	// (0x00099ded) slider_imed_adjust_pane_g_ParamLimits

0x6ead,	// (0x000915b2) aid_touch_area_cam4_ParamLimits

0x6ead,	// (0x000915b2) aid_touch_area_cam4

0x6ebd,	// (0x000915c2) battery_pane_cp01

0x6f44,	// (0x00091649) main_camera4_pane_g6_ParamLimits

0x6f44,	// (0x00091649) main_camera4_pane_g6

0x6f62,	// (0x00091667) main_camera4_pane_t2_ParamLimits

0x6f62,	// (0x00091667) main_camera4_pane_t2

0x0001,

0xf7e0,	// (0x00099ee5) main_camera4_pane_t_ParamLimits

0xf7e0,	// (0x00099ee5) main_camera4_pane_t

0x6fe5,	// (0x000916ea) aid_touch_area_vid4_ParamLimits

0x6fe5,	// (0x000916ea) aid_touch_area_vid4

0x7025,	// (0x0009172a) main_video4_pane_g5_ParamLimits

0x7025,	// (0x0009172a) main_video4_pane_g5

0x704b,	// (0x00091750) vid4_progress_pane_ParamLimits

0x704b,	// (0x00091750) vid4_progress_pane

0x0e92,	// (0x0008b597) main_cset_slider_pane_g18_ParamLimits

0x0e92,	// (0x0008b597) main_cset_slider_pane_g18

0x1084,	// (0x0008b789) cell_cam4_burst_pane_g2_ParamLimits

0x1084,	// (0x0008b789) cell_cam4_burst_pane_g2

0x0001,

0xf935,	// (0x0009a03a) cell_cam4_burst_pane_g_ParamLimits

0xf935,	// (0x0009a03a) cell_cam4_burst_pane_g

0x801a,	// (0x0009271f) bg_cl_pane_ParamLimits

0x801a,	// (0x0009271f) bg_cl_pane

0x8026,	// (0x0009272b) cl_header_pane_ParamLimits

0x8026,	// (0x0009272b) cl_header_pane

0x8032,	// (0x00092737) cl_listscroll_pane_ParamLimits

0x8032,	// (0x00092737) cl_listscroll_pane

0x126e,	// (0x0008b973) bg_cl_pane_g1

0x1276,	// (0x0008b97b) bg_cl_pane_g2

0x127e,	// (0x0008b983) bg_cl_pane_g3

0x1286,	// (0x0008b98b) bg_cl_pane_g4

0x128e,	// (0x0008b993) bg_cl_pane_g5

0x1296,	// (0x0008b99b) bg_cl_pane_g6

0x129e,	// (0x0008b9a3) bg_cl_pane_g7

0x12a6,	// (0x0008b9ab) bg_cl_pane_g8

0x12ae,	// (0x0008b9b3) bg_cl_pane_g9

0x0008,

0xf970,	// (0x0009a075) bg_cl_pane_g

0x803e,	// (0x00092743) aid_height_cl_leading_ParamLimits

0x803e,	// (0x00092743) aid_height_cl_leading

0x804a,	// (0x0009274f) aid_height_cl_text_ParamLimits

0x804a,	// (0x0009274f) aid_height_cl_text

0xc69f,	// (0x00096da4) bg_cl_header_pane_ParamLimits

0xc69f,	// (0x00096da4) bg_cl_header_pane

0x8062,	// (0x00092767) cl_header_pane_g1_ParamLimits

0x8062,	// (0x00092767) cl_header_pane_g1

0x806f,	// (0x00092774) cl_header_pane_t1_ParamLimits

0x806f,	// (0x00092774) cl_header_pane_t1

0x12b6,	// (0x0008b9bb) cl_list_pane

0x0e65,	// (0x0008b56a) hc_scroll_pane_cp01

0xcb62,	// (0x00097267) bg_cl_header_pane_g1

0x0d21,	// (0x0008b426) bg_cl_header_pane_g2

0xcb82,	// (0x00097287) bg_cl_header_pane_g3

0x0d31,	// (0x0008b436) bg_cl_header_pane_g4

0x0d29,	// (0x0008b42e) bg_cl_header_pane_g5

0x0f9f,	// (0x0008b6a4) bg_cl_header_pane_g6

0x0d49,	// (0x0008b44e) bg_cl_header_pane_g7

0x0d51,	// (0x0008b456) bg_cl_header_pane_g8

0x0d41,	// (0x0008b446) bg_cl_header_pane_g9

0x0008,

0xf983,	// (0x0009a088) bg_cl_header_pane_g

0x8081,	// (0x00092786) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x8081,	// (0x00092786) hc_cl_list_double_graphic_heading_pane

0x8091,	// (0x00092796) hc_cl_list_single_graphic_pane_ParamLimits

0x8091,	// (0x00092796) hc_cl_list_single_graphic_pane

0x80a3,	// (0x000927a8) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x80a3,	// (0x000927a8) hc_cl_list_single_graphic_pane_g1

0x80af,	// (0x000927b4) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x80af,	// (0x000927b4) hc_cl_list_single_graphic_pane_g2

0x0001,

0xf996,	// (0x0009a09b) hc_cl_list_single_graphic_pane_g_ParamLimits

0xf996,	// (0x0009a09b) hc_cl_list_single_graphic_pane_g

0x80c3,	// (0x000927c8) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x80c3,	// (0x000927c8) hc_cl_list_single_graphic_pane_t1

0x80a3,	// (0x000927a8) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x80a3,	// (0x000927a8) hc_cl_list_double_graphic_heading_pane_g1

0x80d8,	// (0x000927dd) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x80d8,	// (0x000927dd) hc_cl_list_double_graphic_heading_pane_g2

0x80ec,	// (0x000927f1) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x80ec,	// (0x000927f1) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xf99b,	// (0x0009a0a0) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xf99b,	// (0x0009a0a0) hc_cl_list_double_graphic_heading_pane_g

0x8100,	// (0x00092805) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x8100,	// (0x00092805) hc_cl_list_double_graphic_heading_pane_t1

0x8115,	// (0x0009281a) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x8115,	// (0x0009281a) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xf9a2,	// (0x0009a0a7) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xf9a2,	// (0x0009a0a7) hc_cl_list_double_graphic_heading_pane_t

0x8132,	// (0x00092837) vid4_progress_pane_g1

0x8142,	// (0x00092847) vid4_progress_pane_g2

0x8152,	// (0x00092857) vid4_progress_pane_g3

0x8164,	// (0x00092869) vid4_progress_pane_g4

0x0004,

0xf9a7,	// (0x0009a0ac) vid4_progress_pane_g

0x8182,	// (0x00092887) vid4_progress_pane_t1

0x819c,	// (0x000928a1) vid4_progress_pane_t2

0x0002,

0xf9b2,	// (0x0009a0b7) vid4_progress_pane_t

0x81ca,	// (0x000928cf) wait_bar_pane_cp07

0xe6f9,	// (0x00098dfe) blid_firmament_pane_ParamLimits

0xe75e,	// (0x00098e63) popup_blid_sat_info2_window_g1

0xe782,	// (0x00098e87) popup_blid_sat_info2_window_t3

0xe790,	// (0x00098e95) popup_blid_sat_info2_window_t4

0xe79e,	// (0x00098ea3) popup_blid_sat_info2_window_t5

0xe7ac,	// (0x00098eb1) popup_blid_sat_info2_window_t6

0xe7bc,	// (0x00098ec1) popup_blid_sat_info2_window_t7

0xe7ca,	// (0x00098ecf) popup_blid_sat_info2_window_t8

0xe7d8,	// (0x00098edd) popup_blid_sat_info2_window_t9

0xe7e6,	// (0x00098eeb) popup_blid_sat_info2_window_t10

0xe8ad,	// (0x00098fb2) aid_firma_cardinal_ParamLimits

0xe8c1,	// (0x00098fc6) blid_firmament_pane_t1_ParamLimits

0xe8d8,	// (0x00098fdd) blid_firmament_pane_t2_ParamLimits

0xe8ef,	// (0x00098ff4) blid_firmament_pane_t3_ParamLimits

0xe906,	// (0x0009900b) blid_firmament_pane_t4_ParamLimits

0xf5da,	// (0x00099cdf) blid_firmament_pane_t_ParamLimits

0xe91d,	// (0x00099022) blid_sat_info_pane_ParamLimits

0x55c8,	// (0x0008fccd) main_cam_set_pane_ParamLimits

0x6583,	// (0x00090c88) aid_size_cell_colour_35_ParamLimits

0x659d,	// (0x00090ca2) aid_size_cell_colour_112_ParamLimits

0x65b4,	// (0x00090cb9) aid_size_cell_effect_ParamLimits

0x153a,	// (0x0008bc3f) bg_tb_trans_pane_cp02_ParamLimits

0xcfdd,	// (0x000976e2) heading_imed_pane_ParamLimits

0x65ce,	// (0x00090cd3) listscroll_imed_pane_ParamLimits

0xdc2c,	// (0x00098331) popup_call2_audio_first_window_g5_ParamLimits

0xdc2c,	// (0x00098331) popup_call2_audio_first_window_g5

0x6ba5,	// (0x000912aa) aid_size_touch_image3_arrow_left_ParamLimits

0x6ba5,	// (0x000912aa) aid_size_touch_image3_arrow_left

0x6bbb,	// (0x000912c0) aid_size_touch_image3_arrow_right_ParamLimits

0x6bbb,	// (0x000912c0) aid_size_touch_image3_arrow_right

0x81b5,	// (0x000928ba) vid4_progress_pane_t3

0x6721,	// (0x00090e26) main_hwr_training_symbol_option_pane_ParamLimits

0x6721,	// (0x00090e26) main_hwr_training_symbol_option_pane

0xef85,	// (0x0009968a) popup_hwr_training_preview_window_ParamLimits

0xef85,	// (0x0009968a) popup_hwr_training_preview_window

0x6782,	// (0x00090e87) hwr_training_navi_pane_g5_ParamLimits

0x6782,	// (0x00090e87) hwr_training_navi_pane_g5

0x0d0f,	// (0x0008b414) popup_char_count_window

0x2969,	// (0x0008d06e) bg_popup_sub_pane_cp20_ParamLimits

0x7b22,	// (0x00092227) list_vitu2_match_list_pane_ParamLimits

0x7b2e,	// (0x00092233) vitu2_page_scroll_pane_ParamLimits

0x7b2e,	// (0x00092233) vitu2_page_scroll_pane

0x1344,	// (0x0008ba49) list_single_hwr_training_symbol_option_pane_ParamLimits

0x1344,	// (0x0008ba49) list_single_hwr_training_symbol_option_pane

0x1357,	// (0x0008ba5c) list_single_hwr_training_symbol_option_pane_g1

0x135f,	// (0x0008ba64) list_single_hwr_training_symbol_option_pane_t1

0x136d,	// (0x0008ba72) bg_button_pane_cp023

0x1376,	// (0x0008ba7b) bg_button_pane_cp024

0x13a9,	// (0x0008baae) vitu2_page_scroll_pane_g1

0x13b1,	// (0x0008bab6) vitu2_page_scroll_pane_g2

0x0001,

0xf9b9,	// (0x0009a0be) vitu2_page_scroll_pane_g

0x13b9,	// (0x0008babe) vitu2_page_scroll_pane_t1

0x13c8,	// (0x0008bacd) popup_char_count_window_g1

0x13d1,	// (0x0008bad6) popup_char_count_window_g2

0x13da,	// (0x0008badf) popup_char_count_window_g3

0x0002,

0xf9be,	// (0x0009a0c3) popup_char_count_window_g

0x13e3,	// (0x0008bae8) popup_char_count_window_t1

0x2983,	// (0x0008d088) main_vded2_pane

0xede6,	// (0x000994eb) aid_size_cell_imed_line

0xedf0,	// (0x000994f5) grid_imed_line_width_pane

0x70bf,	// (0x000917c4) vid4_indicators_pane_g4

0x13f1,	// (0x0008baf6) cell_imed_line_width_pane_ParamLimits

0x13f1,	// (0x0008baf6) cell_imed_line_width_pane

0x1407,	// (0x0008bb0c) cell_imed_line_width_pane_g1

0x1410,	// (0x0008bb15) cell_imed_line_width_pane_g2

0x0001,

0xf9c5,	// (0x0009a0ca) cell_imed_line_width_pane_g

0x81f1,	// (0x000928f6) main_vded2_pane_g1_ParamLimits

0x81f1,	// (0x000928f6) main_vded2_pane_g1

0x8200,	// (0x00092905) main_vded2_pane_g2_ParamLimits

0x8200,	// (0x00092905) main_vded2_pane_g2

0x0001,

0xf9ca,	// (0x0009a0cf) main_vded2_pane_g_ParamLimits

0xf9ca,	// (0x0009a0cf) main_vded2_pane_g

0x820e,	// (0x00092913) vded2_slider_pane_ParamLimits

0x820e,	// (0x00092913) vded2_slider_pane

0x821b,	// (0x00092920) aid_size_touch_vded2_end

0x8225,	// (0x0009292a) aid_size_touch_vded2_playhead

0x1418,	// (0x0008bb1d) aid_size_touch_vded2_start

0x1420,	// (0x0008bb25) vded2_slider_bg_pane

0x1429,	// (0x0008bb2e) vded2_slider_pane_g1

0x1432,	// (0x0008bb37) vded2_slider_pane_g2

0x822d,	// (0x00092932) vded2_slider_pane_g3

0x0002,

0xf9cf,	// (0x0009a0d4) vded2_slider_pane_g

0x143a,	// (0x0008bb3f) vded2_slider_bg_pane_g1

0x1443,	// (0x0008bb48) vded2_slider_bg_pane_g2

0x144c,	// (0x0008bb51) vded2_slider_bg_pane_g3

0x0002,

0xf9d6,	// (0x0009a0db) vded2_slider_bg_pane_g

0x4ef8,	// (0x0008f5fd) aid_postcard_touch_down_pane_ParamLimits

0x4ef8,	// (0x0008f5fd) aid_postcard_touch_down_pane

0x4f08,	// (0x0008f60d) aid_postcard_touch_up_pane_ParamLimits

0x4f08,	// (0x0008f60d) aid_postcard_touch_up_pane

0x2983,	// (0x0008d088) main_blid2_pane

0x55f1,	// (0x0008fcf6) popup_blid2_search_window

0x0a98,	// (0x0008b19d) blid2_gps_pane

0x0a98,	// (0x0008b19d) blid2_navig_pane

0x0a98,	// (0x0008b19d) blid2_search_pane

0x0a98,	// (0x0008b19d) blid2_tripm_pane

0x8236,	// (0x0009293b) blid2_search_pane_g1_ParamLimits

0x8236,	// (0x0009293b) blid2_search_pane_g1

0x8242,	// (0x00092947) blid2_search_pane_t1_ParamLimits

0x8242,	// (0x00092947) blid2_search_pane_t1

0x8254,	// (0x00092959) aid_size_cell_blid2_gps_ParamLimits

0x8254,	// (0x00092959) aid_size_cell_blid2_gps

0x8264,	// (0x00092969) blid2_gps_pane_g1_ParamLimits

0x8264,	// (0x00092969) blid2_gps_pane_g1

0x8270,	// (0x00092975) grid_blid2_satellite_pane_ParamLimits

0x8270,	// (0x00092975) grid_blid2_satellite_pane

0x827e,	// (0x00092983) blid2_navig_pane_g1_ParamLimits

0x827e,	// (0x00092983) blid2_navig_pane_g1

0x828a,	// (0x0009298f) blid2_navig_pane_t1_ParamLimits

0x828a,	// (0x0009298f) blid2_navig_pane_t1

0x829c,	// (0x000929a1) blid2_navig_pane_t2_ParamLimits

0x829c,	// (0x000929a1) blid2_navig_pane_t2

0x0001,

0xf9dd,	// (0x0009a0e2) blid2_navig_pane_t_ParamLimits

0xf9dd,	// (0x0009a0e2) blid2_navig_pane_t

0x82ae,	// (0x000929b3) blid2_navig_ring_pane_ParamLimits

0x82ae,	// (0x000929b3) blid2_navig_ring_pane

0x82be,	// (0x000929c3) blid2_speed_pane_ParamLimits

0x82be,	// (0x000929c3) blid2_speed_pane

0x82ca,	// (0x000929cf) blid2_tripm_pane_g1_ParamLimits

0x82ca,	// (0x000929cf) blid2_tripm_pane_g1

0x82da,	// (0x000929df) blid2_tripm_pane_g2_ParamLimits

0x82da,	// (0x000929df) blid2_tripm_pane_g2

0x82e6,	// (0x000929eb) blid2_tripm_pane_g3_ParamLimits

0x82e6,	// (0x000929eb) blid2_tripm_pane_g3

0x82f2,	// (0x000929f7) blid2_tripm_pane_g4_ParamLimits

0x82f2,	// (0x000929f7) blid2_tripm_pane_g4

0x82fe,	// (0x00092a03) blid2_tripm_pane_g5_ParamLimits

0x82fe,	// (0x00092a03) blid2_tripm_pane_g5

0x0005,

0xf9e2,	// (0x0009a0e7) blid2_tripm_pane_g_ParamLimits

0xf9e2,	// (0x0009a0e7) blid2_tripm_pane_g

0x831a,	// (0x00092a1f) blid2_tripm_pane_t1_ParamLimits

0x831a,	// (0x00092a1f) blid2_tripm_pane_t1

0x832c,	// (0x00092a31) blid2_tripm_pane_t2_ParamLimits

0x832c,	// (0x00092a31) blid2_tripm_pane_t2

0x833e,	// (0x00092a43) blid2_tripm_pane_t3_ParamLimits

0x833e,	// (0x00092a43) blid2_tripm_pane_t3

0x0003,

0xf9ef,	// (0x0009a0f4) blid2_tripm_pane_t_ParamLimits

0xf9ef,	// (0x0009a0f4) blid2_tripm_pane_t

0x8370,	// (0x00092a75) cell_blid2_satellite_pane_ParamLimits

0x8370,	// (0x00092a75) cell_blid2_satellite_pane

0x838e,	// (0x00092a93) cell_blid2_satellite_pane_g1

0x1455,	// (0x0008bb5a) cell_blid2_satellite_pane_t1

0xc6eb,	// (0x00096df0) blid2_speed_pane_g1

0x1463,	// (0x0008bb68) blid2_speed_pane_t1

0x1471,	// (0x0008bb76) blid2_speed_pane_t2

0x0001,

0xf9f8,	// (0x0009a0fd) blid2_speed_pane_t

0xc6eb,	// (0x00096df0) blid2_navig_ring_pane_g1

0x8397,	// (0x00092a9c) blid2_navig_ring_pane_g2

0x839f,	// (0x00092aa4) blid2_navig_ring_pane_g3

0x83a7,	// (0x00092aac) blid2_navig_ring_pane_g4

0x83af,	// (0x00092ab4) blid2_navig_ring_pane_g5

0x0004,

0xf9fd,	// (0x0009a102) blid2_navig_ring_pane_g

0x0a98,	// (0x0008b19d) bg_popup_window_pane_cp011

0x147f,	// (0x0008bb84) popup_blid2_search_window_g1

0x1487,	// (0x0008bb8c) popup_blid2_search_window_t1

0x1495,	// (0x0008bb9a) popup_blid2_search_window_t2

0x0001,

0xfa08,	// (0x0009a10d) popup_blid2_search_window_t

0xca71,	// (0x00097176) main_browser_pane_g1

0xc749,	// (0x00096e4e) main_browser_pane_ParamLimits

0x55c8,	// (0x0008fccd) bg_button_pane_cp011_ParamLimits

0x73fb,	// (0x00091b00) cell_vitu2_function_pane_g1_ParamLimits

0xd331,	// (0x00097a36) bg_popup_sub_pane_cp22_ParamLimits

0x7ccd,	// (0x000923d2) input_focus_pane_cp08_ParamLimits

0x7ce9,	// (0x000923ee) popup_vitu2_query_button_pane_ParamLimits

0x7ce9,	// (0x000923ee) popup_vitu2_query_button_pane

0x7cf8,	// (0x000923fd) popup_vitu2_query_input_button_pane

0x0fda,	// (0x0008b6df) popup_vitu2_query_window_g1_ParamLimits

0x7d02,	// (0x00092407) popup_vitu2_query_window_g2_ParamLimits

0xf909,	// (0x0009a00e) popup_vitu2_query_window_g_ParamLimits

0x0a98,	// (0x0008b19d) bg_button_pane_cp026

0x83b7,	// (0x00092abc) popup_vitu2_query_input_button_pane_g1

0x0a98,	// (0x0008b19d) bg_button_pane_cp025

0x14a3,	// (0x0008bba8) popup_vitu2_query_button_pane_t1

0x5b22,	// (0x00090227) main_mp3_pane_t6

0x5b32,	// (0x00090237) popup_slider_window_cp01

0x6f9a,	// (0x0009169f) cam4_battery_pane

0x7078,	// (0x0009177d) cam4_battery_pane_cp02

0x812a,	// (0x0009282f) cam4_battery_pane_cp01

0x812a,	// (0x0009282f) cam4_battery_pane_cp03

0x14b1,	// (0x0008bbb6) cam4_battery_pane_g1

0xc6eb,	// (0x00096df0) cam4_battery_pane_g2

0x0001,

0xfa0d,	// (0x0009a112) cam4_battery_pane_g

0xe7f4,	// (0x00098ef9) popup_blid_sat_info2_window_t11

0x499d,	// (0x0008f0a2) aid_size_touch_mv_arrow_left_ParamLimits

0x49c8,	// (0x0008f0cd) aid_size_touch_mv_arrow_right_ParamLimits

0xd1b0,	// (0x000978b5) navi_pane_g1_ParamLimits

0x4a07,	// (0x0008f10c) navi_pane_g2_ParamLimits

0x4a35,	// (0x0008f13a) navi_pane_g3_ParamLimits

0xf311,	// (0x00099a16) navi_pane_g_ParamLimits

0x4a8f,	// (0x0008f194) navi_pane_mv_t1_ParamLimits

0x65da,	// (0x00090cdf) grid_imed_effect_pane_ParamLimits

0x3532,	// (0x0008dc37) aid_placing_vt_slider_lsc

0xc9af,	// (0x000970b4) aid_placing_vt_slider_prt

0x153a,	// (0x0008bc3f) bg_tb_trans_pane_cp01_ParamLimits

0xea5c,	// (0x00099161) popup_image_details_window_g1_ParamLimits

0xea6f,	// (0x00099174) popup_image_details_window_g2_ParamLimits

0xea84,	// (0x00099189) popup_image_details_window_g3_ParamLimits

0xea84,	// (0x00099189) popup_image_details_window_g3

0xf61a,	// (0x00099d1f) popup_image_details_window_g_ParamLimits

0xea98,	// (0x0009919d) popup_image_details_window_t1_ParamLimits

0xeaaa,	// (0x000991af) popup_image_details_window_t2_ParamLimits

0xeac3,	// (0x000991c8) popup_image_details_window_t3_ParamLimits

0xead7,	// (0x000991dc) popup_image_details_window_t4_ParamLimits

0xeaf2,	// (0x000991f7) popup_image_details_window_t5_ParamLimits

0xf621,	// (0x00099d26) popup_image_details_window_t_ParamLimits

0x8056,	// (0x0009275b) cl_header_name_pane_ParamLimits

0x8056,	// (0x0009275b) cl_header_name_pane

0x83bf,	// (0x00092ac4) cl_header_name_pane_t1_ParamLimits

0x83bf,	// (0x00092ac4) cl_header_name_pane_t1

0x83d6,	// (0x00092adb) cl_header_name_pane_t2_ParamLimits

0x83d6,	// (0x00092adb) cl_header_name_pane_t2

0x8400,	// (0x00092b05) cl_header_name_pane_t3_ParamLimits

0x8400,	// (0x00092b05) cl_header_name_pane_t3

0x0002,

0xfa12,	// (0x0009a117) cl_header_name_pane_t_ParamLimits

0xfa12,	// (0x0009a117) cl_header_name_pane_t

0x4a60,	// (0x0008f165) navi_pane_mv_g2_ParamLimits

0x0cab,	// (0x0008b3b0) field_vitu2_entry_pane_g1_ParamLimits

0x0cb7,	// (0x0008b3bc) field_vitu2_entry_pane_g2_ParamLimits

0xd353,	// (0x00097a58) field_vitu2_entry_pane_g3_ParamLimits

0xd353,	// (0x00097a58) field_vitu2_entry_pane_g3

0xf812,	// (0x00099f17) field_vitu2_entry_pane_g_ParamLimits

0x72c1,	// (0x000919c6) cell_vitu2_itu_pane_g1_ParamLimits

0x72d9,	// (0x000919de) cell_vitu2_itu_pane_g2_ParamLimits

0x72d9,	// (0x000919de) cell_vitu2_itu_pane_g2

0x0001,

0xf81e,	// (0x00099f23) cell_vitu2_itu_pane_g_ParamLimits

0xf81e,	// (0x00099f23) cell_vitu2_itu_pane_g

0x55c8,	// (0x0008fccd) bg_vkb2_func_pane_cp05_ParamLimits

0x55c8,	// (0x0008fccd) bg_vkb2_func_pane_cp05

0x55c8,	// (0x0008fccd) bg_vkb2_func_pane_cp03

0x55c8,	// (0x0008fccd) bg_vkb2_func_pane_cp04

0x55c8,	// (0x0008fccd) bg_vkb2_func_pane_cp10_ParamLimits

0x55c8,	// (0x0008fccd) bg_vkb2_func_pane_cp10

0x7ff7,	// (0x000926fc) bg_vkb2_func_pane_cp08

0x7cb5,	// (0x000923ba) bg_vkb2_func_pane_cp06

0x7fda,	// (0x000926df) bg_vkb2_func_pane_cp07

0x137f,	// (0x0008ba84) bg_vkb2_func_pane_cp11_ParamLimits

0x137f,	// (0x0008ba84) bg_vkb2_func_pane_cp11

0x1394,	// (0x0008ba99) bg_vkb2_func_pane_cp12_ParamLimits

0x1394,	// (0x0008ba99) bg_vkb2_func_pane_cp12

0x0a98,	// (0x0008b19d) bg_vkb2_func_pane_cp09

0x0d21,	// (0x0008b426) bg_vkb2_func_pane_g1

0xcb82,	// (0x00097287) bg_vkb2_func_pane_g2

0x0d29,	// (0x0008b42e) bg_vkb2_func_pane_g3

0x0d31,	// (0x0008b436) bg_vkb2_func_pane_g4

0x0f9f,	// (0x0008b6a4) bg_vkb2_func_pane_g5

0x0d49,	// (0x0008b44e) bg_vkb2_func_pane_g6

0x0d51,	// (0x0008b456) bg_vkb2_func_pane_g7

0x0d41,	// (0x0008b446) bg_vkb2_func_pane_g8

0xcb62,	// (0x00097267) bg_vkb2_func_pane_g9

0x0008,

0xfa19,	// (0x0009a11e) bg_vkb2_func_pane_g

0x830c,	// (0x00092a11) blid2_tripm_pane_g6_ParamLimits

0x830c,	// (0x00092a11) blid2_tripm_pane_g6

0x0bec,	// (0x0008b2f1) mp4_progress_pane_g1

0x8364,	// (0x00092a69) blid2_tripm_values_pane_ParamLimits

0x8364,	// (0x00092a69) blid2_tripm_values_pane

0x8425,	// (0x00092b2a) blid2_tripm_values_pane_t1

0x8433,	// (0x00092b38) blid2_tripm_values_pane_t2

0x14bb,	// (0x0008bbc0) blid2_tripm_values_pane_t3

0x8441,	// (0x00092b46) blid2_tripm_values_pane_t4

0x844f,	// (0x00092b54) blid2_tripm_values_pane_t5

0x845d,	// (0x00092b62) blid2_tripm_values_pane_t6

0x14c9,	// (0x0008bbce) blid2_tripm_values_pane_t7

0x846b,	// (0x00092b70) blid2_tripm_values_pane_t8

0x8479,	// (0x00092b7e) blid2_tripm_values_pane_t9

0x0008,

0xfa2c,	// (0x0009a131) blid2_tripm_values_pane_t

0x3570,	// (0x0008dc75) call_video_pane_t1_ParamLimits

0x358d,	// (0x0008dc92) call_video_pane_t2_ParamLimits

0xf1ba,	// (0x000998bf) call_video_pane_t_ParamLimits

0x4da3,	// (0x0008f4a8) msg_header_pane_g1_ParamLimits

0xd3f7,	// (0x00097afc) msg_header_pane_g2_ParamLimits

0xd3f7,	// (0x00097afc) msg_header_pane_g2

0x0001,

0xf3af,	// (0x00099ab4) msg_header_pane_g_ParamLimits

0xf3af,	// (0x00099ab4) msg_header_pane_g

0xc749,	// (0x00096e4e) main_clock2_pane_ParamLimits

0x6353,	// (0x00090a58) grid_clock2_toolbar_pane_ParamLimits

0x6353,	// (0x00090a58) grid_clock2_toolbar_pane

0x6353,	// (0x00090a58) listscroll_clock2_pane_ParamLimits

0x6353,	// (0x00090a58) listscroll_clock2_pane

0x6402,	// (0x00090b07) main_clock2_pane_t3_ParamLimits

0x6402,	// (0x00090b07) main_clock2_pane_t3

0x6414,	// (0x00090b19) main_clock2_pane_t4_ParamLimits

0x6414,	// (0x00090b19) main_clock2_pane_t4

0x14d7,	// (0x0008bbdc) cell_clock2_toolbar_pane

0x14df,	// (0x0008bbe4) cell_clock2_toolbar_pane_cp01

0x14df,	// (0x0008bbe4) cell_clock2_toolbar_pane_cp02

0x14e7,	// (0x0008bbec) cell_clock2_toolbar_pane_cp03

0x14ef,	// (0x0008bbf4) list_clock2_pane

0xd116,	// (0x0009781b) scroll_pane_cp10

0x14f7,	// (0x0008bbfc) list_single_clock2_pane_ParamLimits

0x14f7,	// (0x0008bbfc) list_single_clock2_pane

0xc958,	// (0x0009705d) list_highlight_pane_cp08

0x1504,	// (0x0008bc09) list_single_clock2_pane_t1

0xb25c,	// (0x00095961) list_single_clock2_pane_t2

0x0001,

0xfa3f,	// (0x0009a144) list_single_clock2_pane_t

0x0a98,	// (0x0008b19d) bg_button_pane_cp10

0xb26a,	// (0x0009596f) cell_clock2_toolbar_pane_g1

0x4e5a,	// (0x0008f55f) aid_main_viewer_pane_g1_ParamLimits

0x4e5a,	// (0x0008f55f) aid_main_viewer_pane_g1

0x4e66,	// (0x0008f56b) aid_main_viewer_pane_g2_ParamLimits

0x4e66,	// (0x0008f56b) aid_main_viewer_pane_g2

0x4e72,	// (0x0008f577) aid_main_viewer_pane_g3_ParamLimits

0x4e72,	// (0x0008f577) aid_main_viewer_pane_g3

0x4e83,	// (0x0008f588) aid_main_viewer_pane_g4_ParamLimits

0x4e83,	// (0x0008f588) aid_main_viewer_pane_g4

0x0003,

0xf3c0,	// (0x00099ac5) aid_main_viewer_pane_g_ParamLimits

0xf3c0,	// (0x00099ac5) aid_main_viewer_pane_g

0x55bb,	// (0x0008fcc0) main_calc_pane_ParamLimits

0x55d6,	// (0x0008fcdb) main_dialer2_pane_ParamLimits

0x2983,	// (0x0008d088) main_cam6_pane

0x2983,	// (0x0008d088) main_vid6_pane

0x635f,	// (0x00090a64) listscroll_gen_pane_cp06_ParamLimits

0x635f,	// (0x00090a64) listscroll_gen_pane_cp06

0x6426,	// (0x00090b2b) main_clock2_pane_t5_ParamLimits

0x6426,	// (0x00090b2b) main_clock2_pane_t5

0x6473,	// (0x00090b78) aid_call2_pane_cp10_ParamLimits

0x6485,	// (0x00090b8a) aid_call_pane_cp10_ParamLimits

0xd185,	// (0x0009788a) popup_clock_analogue_window_cp10_g1_ParamLimits

0xd185,	// (0x0009788a) popup_clock_analogue_window_cp10_g2_ParamLimits

0x6497,	// (0x00090b9c) popup_clock_analogue_window_cp10_g3_ParamLimits

0x6497,	// (0x00090b9c) popup_clock_analogue_window_cp10_g4_ParamLimits

0xd185,	// (0x0009788a) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf6d6,	// (0x00099ddb) popup_clock_analogue_window_cp10_g_ParamLimits

0x64ad,	// (0x00090bb2) popup_clock_analogue_window_cp10_t1_ParamLimits

0x0c56,	// (0x0008b35b) cell_dialer2_keypad_pane_g2_ParamLimits

0x0c56,	// (0x0008b35b) cell_dialer2_keypad_pane_g2

0x0001,

0xf7b1,	// (0x00099eb6) cell_dialer2_keypad_pane_g_ParamLimits

0xf7b1,	// (0x00099eb6) cell_dialer2_keypad_pane_g

0xc6f5,	// (0x00096dfa) cell_dialer2_keypad_pane_t1

0x76cf,	// (0x00091dd4) main_cset_text2_pane_ParamLimits

0x76cf,	// (0x00091dd4) main_cset_text2_pane

0x11c6,	// (0x0008b8cb) area_vitu2_query_pane_g1_ParamLimits

0x7f79,	// (0x0009267e) area_vitu2_query_pane_g2_ParamLimits

0xf95c,	// (0x0009a061) area_vitu2_query_pane_g_ParamLimits

0x124a,	// (0x0008b94f) area_vitu2_query_pane_t7_ParamLimits

0x124a,	// (0x0008b94f) area_vitu2_query_pane_t7

0x7cb5,	// (0x000923ba) bg_button_pane_cp018_ParamLimits

0x7fda,	// (0x000926df) bg_button_pane_cp021_ParamLimits

0x7fe6,	// (0x000926eb) bg_button_pane_cp022_ParamLimits

0x7ff7,	// (0x000926fc) bg_vkb2_func_pane_cp08_ParamLimits

0x7cb5,	// (0x000923ba) bg_vkb2_func_pane_cp06_ParamLimits

0x7fda,	// (0x000926df) bg_vkb2_func_pane_cp07_ParamLimits

0x8009,	// (0x0009270e) input_focus_pane_cp09_ParamLimits

0x8487,	// (0x00092b8c) cam6_autofocus_pane_ParamLimits

0x8487,	// (0x00092b8c) cam6_autofocus_pane

0x84a9,	// (0x00092bae) cam6_image_uncrop_pane_ParamLimits

0x84a9,	// (0x00092bae) cam6_image_uncrop_pane

0x84df,	// (0x00092be4) cam6_indi_pane_ParamLimits

0x84df,	// (0x00092be4) cam6_indi_pane

0x84f9,	// (0x00092bfe) cam6_mode_pane_ParamLimits

0x84f9,	// (0x00092bfe) cam6_mode_pane

0x850d,	// (0x00092c12) cam6_timer_pane_ParamLimits

0x850d,	// (0x00092c12) cam6_timer_pane

0x8521,	// (0x00092c26) cam6_zoom_pane_ParamLimits

0x8521,	// (0x00092c26) cam6_zoom_pane

0x853d,	// (0x00092c42) cam6_mode_pane_g1_ParamLimits

0x853d,	// (0x00092c42) cam6_mode_pane_g1

0x8549,	// (0x00092c4e) cam6_mode_pane_g2_ParamLimits

0x8549,	// (0x00092c4e) cam6_mode_pane_g2

0x8555,	// (0x00092c5a) cam6_mode_pane_g3_ParamLimits

0x8555,	// (0x00092c5a) cam6_mode_pane_g3

0x8561,	// (0x00092c66) cam6_mode_pane_g4_ParamLimits

0x8561,	// (0x00092c66) cam6_mode_pane_g4

0x0003,

0xfa44,	// (0x0009a149) cam6_mode_pane_g_ParamLimits

0xfa44,	// (0x0009a149) cam6_mode_pane_g

0xe73c,	// (0x00098e41) bg_tb_trans_pane_cp08_ParamLimits

0xe73c,	// (0x00098e41) bg_tb_trans_pane_cp08

0xb272,	// (0x00095977) cam6_battery_pane_ParamLimits

0xb272,	// (0x00095977) cam6_battery_pane

0xb288,	// (0x0009598d) cam6_indi_pane_g1_ParamLimits

0xb288,	// (0x0009598d) cam6_indi_pane_g1

0xb29a,	// (0x0009599f) cam6_indi_pane_g2_ParamLimits

0xb29a,	// (0x0009599f) cam6_indi_pane_g2

0xb2ac,	// (0x000959b1) cam6_indi_pane_g3_ParamLimits

0xb2ac,	// (0x000959b1) cam6_indi_pane_g3

0x0002,

0xfa4d,	// (0x0009a152) cam6_indi_pane_g_ParamLimits

0xfa4d,	// (0x0009a152) cam6_indi_pane_g

0xb2be,	// (0x000959c3) cam6_indi_pane_t1_ParamLimits

0xb2be,	// (0x000959c3) cam6_indi_pane_t1

0x70fc,	// (0x00091801) cam6_autofocus_pane_g1

0x70f4,	// (0x000917f9) cam6_autofocus_pane_g2

0x710c,	// (0x00091811) cam6_autofocus_pane_g3

0x7104,	// (0x00091809) cam6_autofocus_pane_g4

0x0003,

0xfa54,	// (0x0009a159) cam6_autofocus_pane_g

0xb2e4,	// (0x000959e9) cam6_timer_pane_g1

0xb2ec,	// (0x000959f1) cam6_timer_pane_t1

0xb2fa,	// (0x000959ff) cam6_zoom_cont_pane

0xb302,	// (0x00095a07) cam6_zoom_pane_g1

0xb30b,	// (0x00095a10) cam6_zoom_pane_g2

0x856d,	// (0x00092c72) cam6_zoom_pane_g3

0x0002,

0xfa5d,	// (0x0009a162) cam6_zoom_pane_g

0xc6eb,	// (0x00096df0) cam6_battery_pane_g1

0xc6eb,	// (0x00096df0) cam6_battery_pane_g2

0x0001,

0xf08c,	// (0x00099791) cam6_battery_pane_g

0xb302,	// (0x00095a07) cam6_zoom_cont_pane_g1

0xb30b,	// (0x00095a10) cam6_zoom_cont_pane_g2

0xb314,	// (0x00095a19) cam6_zoom_cont_pane_g3

0x0002,

0xfa64,	// (0x0009a169) cam6_zoom_cont_pane_g

0x858b,	// (0x00092c90) cam6_mode_pane_cp_ParamLimits

0x858b,	// (0x00092c90) cam6_mode_pane_cp

0x859f,	// (0x00092ca4) cam6_zoom_pane_cp_ParamLimits

0x859f,	// (0x00092ca4) cam6_zoom_pane_cp

0x85bb,	// (0x00092cc0) vid6_image_uncrop_cif_pane_ParamLimits

0x85bb,	// (0x00092cc0) vid6_image_uncrop_cif_pane

0x85e7,	// (0x00092cec) vid6_image_uncrop_nhd_pane_ParamLimits

0x85e7,	// (0x00092cec) vid6_image_uncrop_nhd_pane

0x8606,	// (0x00092d0b) vid6_image_uncrop_vga_pane_ParamLimits

0x8606,	// (0x00092d0b) vid6_image_uncrop_vga_pane

0x8625,	// (0x00092d2a) vid6_image_uncrop_wvga_pane_ParamLimits

0x8625,	// (0x00092d2a) vid6_image_uncrop_wvga_pane

0x8644,	// (0x00092d49) vid6_indi_pane_ParamLimits

0x8644,	// (0x00092d49) vid6_indi_pane

0xe73c,	// (0x00098e41) bg_tb_trans_pane_cp09_ParamLimits

0xe73c,	// (0x00098e41) bg_tb_trans_pane_cp09

0xb32c,	// (0x00095a31) cam6_battery_pane_cp_ParamLimits

0xb32c,	// (0x00095a31) cam6_battery_pane_cp

0xb338,	// (0x00095a3d) vid6_indi_pane_g1_ParamLimits

0xb338,	// (0x00095a3d) vid6_indi_pane_g1

0xb34a,	// (0x00095a4f) vid6_indi_pane_g2_ParamLimits

0xb34a,	// (0x00095a4f) vid6_indi_pane_g2

0xb35c,	// (0x00095a61) vid6_indi_pane_g3_ParamLimits

0xb35c,	// (0x00095a61) vid6_indi_pane_g3

0xb373,	// (0x00095a78) vid6_indi_pane_g4_ParamLimits

0xb373,	// (0x00095a78) vid6_indi_pane_g4

0xb38a,	// (0x00095a8f) vid6_indi_pane_g5_ParamLimits

0xb38a,	// (0x00095a8f) vid6_indi_pane_g5

0x0004,

0xfa6b,	// (0x0009a170) vid6_indi_pane_g_ParamLimits

0xfa6b,	// (0x0009a170) vid6_indi_pane_g

0xb3a4,	// (0x00095aa9) vid6_indi_pane_t1_ParamLimits

0xb3a4,	// (0x00095aa9) vid6_indi_pane_t1

0xb3ba,	// (0x00095abf) vid6_indi_pane_t2_ParamLimits

0xb3ba,	// (0x00095abf) vid6_indi_pane_t2

0xb3e2,	// (0x00095ae7) vid6_indi_pane_t3_ParamLimits

0xb3e2,	// (0x00095ae7) vid6_indi_pane_t3

0xb40a,	// (0x00095b0f) vid6_indi_pane_t4_ParamLimits

0xb40a,	// (0x00095b0f) vid6_indi_pane_t4

0x0003,

0xfa76,	// (0x0009a17b) vid6_indi_pane_t_ParamLimits

0xfa76,	// (0x0009a17b) vid6_indi_pane_t

0xb42e,	// (0x00095b33) wait_bar_pane_cp08

0x8669,	// (0x00092d6e) main_cset_text2_pane_t1_ParamLimits

0x8669,	// (0x00092d6e) main_cset_text2_pane_t1

0x8576,	// (0x00092c7b) listscroll_gen_pane_cp06_t1_ParamLimits

0x8576,	// (0x00092c7b) listscroll_gen_pane_cp06_t1

0x2983,	// (0x0008d088) main_cam6_set_pane

0xb24e,	// (0x00095953) bg_tb_trans_pane_cp06_ParamLimits

0x6fa2,	// (0x000916a7) cam4_indicators_pane_g1_ParamLimits

0x6fb3,	// (0x000916b8) cam4_indicators_pane_g2_ParamLimits

0xf7ee,	// (0x00099ef3) cam4_indicators_pane_g_ParamLimits

0x6fcb,	// (0x000916d0) cam4_indicators_pane_t1_ParamLimits

0x55c8,	// (0x0008fccd) bg_tb_trans_pane_cp07_ParamLimits

0x7082,	// (0x00091787) vid4_indicators_pane_g1_ParamLimits

0x7098,	// (0x0009179d) vid4_indicators_pane_g2_ParamLimits

0x70ac,	// (0x000917b1) vid4_indicators_pane_g3_ParamLimits

0x70bf,	// (0x000917c4) vid4_indicators_pane_g4_ParamLimits

0xf800,	// (0x00099f05) vid4_indicators_pane_g_ParamLimits

0x70dd,	// (0x000917e2) vid4_indicators_pane_t1_ParamLimits

0x8132,	// (0x00092837) vid4_progress_pane_g1_ParamLimits

0x8142,	// (0x00092847) vid4_progress_pane_g2_ParamLimits

0x8152,	// (0x00092857) vid4_progress_pane_g3_ParamLimits

0x8164,	// (0x00092869) vid4_progress_pane_g4_ParamLimits

0xf9a7,	// (0x0009a0ac) vid4_progress_pane_g_ParamLimits

0x8182,	// (0x00092887) vid4_progress_pane_t1_ParamLimits

0x819c,	// (0x000928a1) vid4_progress_pane_t2_ParamLimits

0x81b5,	// (0x000928ba) vid4_progress_pane_t3_ParamLimits

0xf9b2,	// (0x0009a0b7) vid4_progress_pane_t_ParamLimits

0x81ca,	// (0x000928cf) wait_bar_pane_cp07_ParamLimits

0x8690,	// (0x00092d95) main_cam6_set_pane_g2_ParamLimits

0x8690,	// (0x00092d95) main_cam6_set_pane_g2

0x869c,	// (0x00092da1) main_cset6_listscroll_pane_ParamLimits

0x869c,	// (0x00092da1) main_cset6_listscroll_pane

0x86c9,	// (0x00092dce) main_cset6_slider_pane_ParamLimits

0x86c9,	// (0x00092dce) main_cset6_slider_pane

0x86d5,	// (0x00092dda) main_cset6_text2_pane_ParamLimits

0x86d5,	// (0x00092dda) main_cset6_text2_pane

0xb43d,	// (0x00095b42) main_cset6_text_pane

0xb445,	// (0x00095b4a) main_cset_list_pane_copy1_ParamLimits

0xb445,	// (0x00095b4a) main_cset_list_pane_copy1

0xb455,	// (0x00095b5a) scroll_pane_cp028_copy1

0x86e8,	// (0x00092ded) cset_list_set_pane_copy1

0x86f8,	// (0x00092dfd) aid_position_infowindow_above_copy1

0x8700,	// (0x00092e05) aid_position_infowindow_below_copy1

0x8708,	// (0x00092e0d) cset_list_set_pane_g1_copy1

0x8710,	// (0x00092e15) cset_list_set_pane_g3_copy1_ParamLimits

0x8710,	// (0x00092e15) cset_list_set_pane_g3_copy1

0x871f,	// (0x00092e24) cset_list_set_pane_t1_copy1_ParamLimits

0x871f,	// (0x00092e24) cset_list_set_pane_t1_copy1

0x153a,	// (0x0008bc3f) list_highlight_pane_cp021_copy1_ParamLimits

0x153a,	// (0x0008bc3f) list_highlight_pane_cp021_copy1

0xb45e,	// (0x00095b63) cset6_slider_pane_ParamLimits

0xb45e,	// (0x00095b63) cset6_slider_pane

0xb48a,	// (0x00095b8f) main_cset6_slider_pane_g1_ParamLimits

0xb48a,	// (0x00095b8f) main_cset6_slider_pane_g1

0x8734,	// (0x00092e39) main_cset6_slider_pane_g2_ParamLimits

0x8734,	// (0x00092e39) main_cset6_slider_pane_g2

0xb4b2,	// (0x00095bb7) main_cset6_slider_pane_g3_ParamLimits

0xb4b2,	// (0x00095bb7) main_cset6_slider_pane_g3

0x875c,	// (0x00092e61) main_cset6_slider_pane_g4_ParamLimits

0x875c,	// (0x00092e61) main_cset6_slider_pane_g4

0x8768,	// (0x00092e6d) main_cset6_slider_pane_g5_ParamLimits

0x8768,	// (0x00092e6d) main_cset6_slider_pane_g5

0x0e7a,	// (0x0008b57f) main_cset6_slider_pane_g7_ParamLimits

0x0e7a,	// (0x0008b57f) main_cset6_slider_pane_g7

0x0e86,	// (0x0008b58b) main_cset6_slider_pane_g8_ParamLimits

0x0e86,	// (0x0008b58b) main_cset6_slider_pane_g8

0x8774,	// (0x00092e79) main_cset6_slider_pane_g9_ParamLimits

0x8774,	// (0x00092e79) main_cset6_slider_pane_g9

0x8780,	// (0x00092e85) main_cset6_slider_pane_g10_ParamLimits

0x8780,	// (0x00092e85) main_cset6_slider_pane_g10

0x878c,	// (0x00092e91) main_cset6_slider_pane_g11_ParamLimits

0x878c,	// (0x00092e91) main_cset6_slider_pane_g11

0x8798,	// (0x00092e9d) main_cset6_slider_pane_g12_ParamLimits

0x8798,	// (0x00092e9d) main_cset6_slider_pane_g12

0x87a4,	// (0x00092ea9) main_cset6_slider_pane_g13_ParamLimits

0x87a4,	// (0x00092ea9) main_cset6_slider_pane_g13

0x87b0,	// (0x00092eb5) main_cset6_slider_pane_g14_ParamLimits

0x87b0,	// (0x00092eb5) main_cset6_slider_pane_g14

0x87bc,	// (0x00092ec1) main_cset6_slider_pane_g15_ParamLimits

0x87bc,	// (0x00092ec1) main_cset6_slider_pane_g15

0x87d4,	// (0x00092ed9) main_cset6_slider_pane_g16_ParamLimits

0x87d4,	// (0x00092ed9) main_cset6_slider_pane_g16

0x87e0,	// (0x00092ee5) main_cset6_slider_pane_g17_ParamLimits

0x87e0,	// (0x00092ee5) main_cset6_slider_pane_g17

0x0011,

0xfa7f,	// (0x0009a184) main_cset6_slider_pane_g_ParamLimits

0xfa7f,	// (0x0009a184) main_cset6_slider_pane_g

0xb4be,	// (0x00095bc3) main_cset6_slider_pane_t1_ParamLimits

0xb4be,	// (0x00095bc3) main_cset6_slider_pane_t1

0x8804,	// (0x00092f09) main_cset6_slider_pane_t2_ParamLimits

0x8804,	// (0x00092f09) main_cset6_slider_pane_t2

0x882f,	// (0x00092f34) main_cset6_slider_pane_t3_ParamLimits

0x882f,	// (0x00092f34) main_cset6_slider_pane_t3

0x885a,	// (0x00092f5f) main_cset6_slider_pane_t4_ParamLimits

0x885a,	// (0x00092f5f) main_cset6_slider_pane_t4

0x8885,	// (0x00092f8a) main_cset6_slider_pane_t5_ParamLimits

0x8885,	// (0x00092f8a) main_cset6_slider_pane_t5

0xb4ff,	// (0x00095c04) main_cset6_slider_pane_t7_ParamLimits

0xb4ff,	// (0x00095c04) main_cset6_slider_pane_t7

0x88b0,	// (0x00092fb5) main_cset6_slider_pane_t8_ParamLimits

0x88b0,	// (0x00092fb5) main_cset6_slider_pane_t8

0x88d4,	// (0x00092fd9) main_cset6_slider_pane_t9_ParamLimits

0x88d4,	// (0x00092fd9) main_cset6_slider_pane_t9

0x88f8,	// (0x00092ffd) main_cset6_slider_pane_t10_ParamLimits

0x88f8,	// (0x00092ffd) main_cset6_slider_pane_t10

0x891c,	// (0x00093021) main_cset6_slider_pane_t11_ParamLimits

0x891c,	// (0x00093021) main_cset6_slider_pane_t11

0xb535,	// (0x00095c3a) main_cset6_slider_pane_t14_ParamLimits

0xb535,	// (0x00095c3a) main_cset6_slider_pane_t14

0xb56e,	// (0x00095c73) main_cset6_slider_pane_t15_ParamLimits

0xb56e,	// (0x00095c73) main_cset6_slider_pane_t15

0x000b,

0xfaa4,	// (0x0009a1a9) main_cset6_slider_pane_t_ParamLimits

0xfaa4,	// (0x0009a1a9) main_cset6_slider_pane_t

0x0f51,	// (0x0008b656) cset_slider_pane_g1_copy1

0x0f5a,	// (0x0008b65f) cset_slider_pane_g2_copy1

0x0f63,	// (0x0008b668) cset_slider_pane_g3_copy1

0x0a98,	// (0x0008b19d) bg_popup_sub_pane_cp011_copy1

0xb5b0,	// (0x00095cb5) main_cset_text_pane_g1_copy1

0x0fee,	// (0x0008b6f3) main_cset_text_pane_t1_copy1

0x0ffc,	// (0x0008b701) main_cset_text_pane_t2_copy1

0x100a,	// (0x0008b70f) main_cset_text_pane_t3_copy1

0x1018,	// (0x0008b71d) main_cset_text_pane_t4_copy1

0x1026,	// (0x0008b72b) main_cset_text_pane_t5_copy1

0xb5b8,	// (0x00095cbd) main_cset_text_pane_t6_copy1

0xb5c6,	// (0x00095ccb) main_cset_text_pane_t7_copy1

0x895d,	// (0x00093062) main_cset_text2_pane_t1_copy1

0x55c8,	// (0x0008fccd) main_ncimui_pane

0x562f,	// (0x0008fd34) popup_query_ncimui_window_ParamLimits

0x562f,	// (0x0008fd34) popup_query_ncimui_window

0xeb93,	// (0x00099298) field_cale_ev2_pane_g4_ParamLimits

0xeb93,	// (0x00099298) field_cale_ev2_pane_g4

0x684e,	// (0x00090f53) cell_video_dialer_keypad_pane_g2_ParamLimits

0x684e,	// (0x00090f53) cell_video_dialer_keypad_pane_g2

0x0001,

0xf788,	// (0x00099e8d) cell_video_dialer_keypad_pane_g_ParamLimits

0xf788,	// (0x00099e8d) cell_video_dialer_keypad_pane_g

0x6866,	// (0x00090f6b) cell_video_dialer_keypad_pane_t1

0x0a98,	// (0x0008b19d) bg_popup_window_pane_cp012

0xd00f,	// (0x00097714) heading_pane_cp06

0xb5fe,	// (0x00095d03) ncim_query_content_pane

0x0a98,	// (0x0008b19d) bg_popup_heading_pane_cp01

0xb606,	// (0x00095d0b) ncim_heading_pane_t1

0xb614,	// (0x00095d19) ncim_indicator_popup_pane

0xb626,	// (0x00095d2b) ncim_query_button_pane

0xb63c,	// (0x00095d41) ncim_query_content_pane_t1

0xb64e,	// (0x00095d53) ncim_query_content_pane_t2

0x0005,

0xfae8,	// (0x0009a1ed) ncim_query_content_pane_t

0xb688,	// (0x00095d8d) ncim_query_list_pane

0xb69a,	// (0x00095d9f) ncim_query_popup_pane

0xb614,	// (0x00095d19) ncim_indicator_popup_pane_ParamLimits

0x8ab9,	// (0x000931be) ncim_query_content_pane_g1_ParamLimits

0x8ab9,	// (0x000931be) ncim_query_content_pane_g1

0xb63c,	// (0x00095d41) ncim_query_content_pane_t1_ParamLimits

0xb64e,	// (0x00095d53) ncim_query_content_pane_t2_ParamLimits

0x8ac5,	// (0x000931ca) ncim_query_content_pane_t3_ParamLimits

0x8ac5,	// (0x000931ca) ncim_query_content_pane_t3

0x8ae2,	// (0x000931e7) ncim_query_content_pane_t4_ParamLimits

0x8ae2,	// (0x000931e7) ncim_query_content_pane_t4

0x8aff,	// (0x00093204) ncim_query_content_pane_t5_ParamLimits

0x8aff,	// (0x00093204) ncim_query_content_pane_t5

0xb660,	// (0x00095d65) ncim_query_content_pane_t6_ParamLimits

0xb660,	// (0x00095d65) ncim_query_content_pane_t6

0xfae8,	// (0x0009a1ed) ncim_query_content_pane_t_ParamLimits

0xb688,	// (0x00095d8d) ncim_query_list_pane_ParamLimits

0xb69a,	// (0x00095d9f) ncim_query_popup_pane_ParamLimits

0xb6ae,	// (0x00095db3) wait_bar_pane_cp04

0x0a98,	// (0x0008b19d) input_focus_pane_cp011

0xb6b6,	// (0x00095dbb) ncim_query_popup_pane_t1

0xb6c4,	// (0x00095dc9) ncim_list_query_list_pane_ParamLimits

0xb6c4,	// (0x00095dc9) ncim_list_query_list_pane

0x0a98,	// (0x0008b19d) bg_button_pane_cp027

0xb6d7,	// (0x00095ddc) ncim_query_button_pane_g1

0x0a98,	// (0x0008b19d) list_highlight_pane_cp012

0xb6e1,	// (0x00095de6) ncim_list_query_list_pane_g1

0xb6e9,	// (0x00095dee) ncim_list_query_list_pane_t1

0x6fbf,	// (0x000916c4) cam4_indicators_pane_g3_ParamLimits

0x6fbf,	// (0x000916c4) cam4_indicators_pane_g3

0x70cb,	// (0x000917d0) vid4_indicators_pane_g5_ParamLimits

0x70cb,	// (0x000917d0) vid4_indicators_pane_g5

0x8173,	// (0x00092878) vid4_progress_pane_g5_ParamLimits

0x8173,	// (0x00092878) vid4_progress_pane_g5

0x898f,	// (0x00093094) main_ncimui_pane_g1

0x89fb,	// (0x00093100) ncimui_group_query_pane_ParamLimits

0x89fb,	// (0x00093100) ncimui_group_query_pane

0x8a55,	// (0x0009315a) ncimui_list_pane_ParamLimits

0x8a55,	// (0x0009315a) ncimui_list_pane

0x8a7c,	// (0x00093181) ncimui_text_pane_ParamLimits

0x8a7c,	// (0x00093181) ncimui_text_pane

0x8b1c,	// (0x00093221) ncimui_text_pane_t1_ParamLimits

0x8b1c,	// (0x00093221) ncimui_text_pane_t1

0xb6f7,	// (0x00095dfc) ncimui_list_single_graphic_pane_ParamLimits

0xb6f7,	// (0x00095dfc) ncimui_list_single_graphic_pane

0x8b3b,	// (0x00093240) ncimui_query_pane_ParamLimits

0x8b3b,	// (0x00093240) ncimui_query_pane

0x0a98,	// (0x0008b19d) list_highlight_pane_cp013

0xb707,	// (0x00095e0c) ncim_list_query_list_pane_t1_copy1

0xb6e1,	// (0x00095de6) ncim_list_single_graphic_pane_g1

0x8b4e,	// (0x00093253) ncim_query_button_pane_cp01

0x8b5a,	// (0x0009325f) ncim_query_entry_pane_ParamLimits

0x8b5a,	// (0x0009325f) ncim_query_entry_pane

0x8b6d,	// (0x00093272) ncimui_query_pane_g1

0x8b79,	// (0x0009327e) ncimui_query_pane_t1_ParamLimits

0x8b79,	// (0x0009327e) ncimui_query_pane_t1

0x153a,	// (0x0008bc3f) input_focus_pane_cp012

0xb715,	// (0x00095e1a) ncim_query_entry_pane_t1

0xc749,	// (0x00096e4e) main_im_pane_ParamLimits

0x55c8,	// (0x0008fccd) main_mobtv_pane_ParamLimits

0x55c8,	// (0x0008fccd) main_mobtv_pane

0x87ec,	// (0x00092ef1) main_cset6_slider_pane_g18_ParamLimits

0x87ec,	// (0x00092ef1) main_cset6_slider_pane_g18

0x87f8,	// (0x00092efd) main_cset6_slider_pane_g19_ParamLimits

0x87f8,	// (0x00092efd) main_cset6_slider_pane_g19

0xd353,	// (0x00097a58) bg_main_mobtv_pane_ParamLimits

0xd353,	// (0x00097a58) bg_main_mobtv_pane

0x8b92,	// (0x00093297) main_mobtv_info_pane

0x8b9d,	// (0x000932a2) main_mobtv_loading_pane_ParamLimits

0x8b9d,	// (0x000932a2) main_mobtv_loading_pane

0xb727,	// (0x00095e2c) main_mobtv_pg_channel_list_pane

0xb731,	// (0x00095e36) main_mobtv_pg_hdr_pane

0x8baa,	// (0x000932af) main_mobtv_programe_curr_pane_ParamLimits

0x8baa,	// (0x000932af) main_mobtv_programe_curr_pane

0x8bb7,	// (0x000932bc) main_mobtv_programe_next_pane_ParamLimits

0x8bb7,	// (0x000932bc) main_mobtv_programe_next_pane

0xb73a,	// (0x00095e3f) popup_mobtv_noti_window

0xc6eb,	// (0x00096df0) main_tv_pg_hdr_pane_g1

0xb744,	// (0x00095e49) main_tv_pg_hdr_pane_g2

0xb74c,	// (0x00095e51) main_tv_pg_hdr_pane_g3

0xb754,	// (0x00095e59) main_tv_pg_hdr_pane_g4

0xb75c,	// (0x00095e61) main_tv_pg_hdr_pane_g5

0xb766,	// (0x00095e6b) main_tv_pg_hdr_pane_g6

0xb770,	// (0x00095e75) main_tv_pg_hdr_pane_g7

0xb77a,	// (0x00095e7f) main_tv_pg_hdr_pane_g8

0xb784,	// (0x00095e89) main_tv_pg_hdr_pane_g9

0xb78e,	// (0x00095e93) main_tv_pg_hdr_pane_g10

0xb798,	// (0x00095e9d) main_tv_pg_hdr_pane_g11

0x000a,

0xfaf5,	// (0x0009a1fa) main_tv_pg_hdr_pane_g

0xb7a2,	// (0x00095ea7) main_tv_pg_hdr_pane_t1

0xb7b0,	// (0x00095eb5) main_tv_pg_hdr_pane_t2

0xb7be,	// (0x00095ec3) main_tv_pg_hdr_pane_t3

0xb7ce,	// (0x00095ed3) main_tv_pg_hdr_pane_t4

0xb7de,	// (0x00095ee3) main_tv_pg_hdr_pane_t5

0x0004,

0xfb0c,	// (0x0009a211) main_tv_pg_hdr_pane_t

0xb7ee,	// (0x00095ef3) single_mobtv_pg_channel_pane_ParamLimits

0xb7ee,	// (0x00095ef3) single_mobtv_pg_channel_pane

0xb800,	// (0x00095f05) single_mobtv_pg_channel_table_pane

0xb809,	// (0x00095f0e) single_mobtv_pg_channel_thumb_pane

0xb812,	// (0x00095f17) single_tv_pg_channel_pane_g1

0xb81b,	// (0x00095f20) single_tv_pg_channel_pane_g2

0x0001,

0xfb17,	// (0x0009a21c) single_tv_pg_channel_pane_g

0xc6ad,	// (0x00096db2) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xc6ad,	// (0x00096db2) bg_single_mobtv_pg_channel_thumb_pane

0xb824,	// (0x00095f29) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xb824,	// (0x00095f29) single_mobtv_pg_channel_thumb_pane_g1

0xb832,	// (0x00095f37) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xb832,	// (0x00095f37) single_mobtv_pg_channel_thumb_pane_g2

0xb83e,	// (0x00095f43) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xb83e,	// (0x00095f43) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfb1c,	// (0x0009a221) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfb1c,	// (0x0009a221) single_mobtv_pg_channel_thumb_pane_g

0xb84a,	// (0x00095f4f) single_mobtv_pg_channel_thumb_pane_t1

0xb858,	// (0x00095f5d) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfb23,	// (0x0009a228) single_mobtv_pg_channel_thumb_pane_t

0xc6eb,	// (0x00096df0) bg_single_mobtv_pg_channel_table_pane_g1

0xc6eb,	// (0x00096df0) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf08c,	// (0x00099791) bg_single_mobtv_pg_channel_table_pane_g

0xb866,	// (0x00095f6b) single_mobtv_pg_channel_table_pane_t1

0xb874,	// (0x00095f79) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfb28,	// (0x0009a22d) single_mobtv_pg_channel_table_pane_t

0x8bcc,	// (0x000932d1) main_mobtv_info_pane_g1_ParamLimits

0x8bcc,	// (0x000932d1) main_mobtv_info_pane_g1

0x8be8,	// (0x000932ed) main_mobtv_info_pane_t1_ParamLimits

0x8be8,	// (0x000932ed) main_mobtv_info_pane_t1

0x8c60,	// (0x00093365) main_mobtv_info_pane_t2_ParamLimits

0x8c60,	// (0x00093365) main_mobtv_info_pane_t2

0x0002,

0xfb32,	// (0x0009a237) main_mobtv_info_pane_t_ParamLimits

0xfb32,	// (0x0009a237) main_mobtv_info_pane_t

0x8cf1,	// (0x000933f6) wait_bar_pane_cp05

0x8d03,	// (0x00093408) main_mobtv_loading_pane_g1_ParamLimits

0x8d03,	// (0x00093408) main_mobtv_loading_pane_g1

0x8d0f,	// (0x00093414) main_mobtv_loading_pane_g2_ParamLimits

0x8d0f,	// (0x00093414) main_mobtv_loading_pane_g2

0x8d1b,	// (0x00093420) main_mobtv_loading_pane_g3_ParamLimits

0x8d1b,	// (0x00093420) main_mobtv_loading_pane_g3

0x0002,

0xfb39,	// (0x0009a23e) main_mobtv_loading_pane_g_ParamLimits

0xfb39,	// (0x0009a23e) main_mobtv_loading_pane_g

0xb882,	// (0x00095f87) main_mobtv_loading_pane_t1_ParamLimits

0xb882,	// (0x00095f87) main_mobtv_loading_pane_t1

0xb89a,	// (0x00095f9f) main_mobtv_loading_pane_t2_ParamLimits

0xb89a,	// (0x00095f9f) main_mobtv_loading_pane_t2

0x0001,

0xfb40,	// (0x0009a245) main_mobtv_loading_pane_t_ParamLimits

0xfb40,	// (0x0009a245) main_mobtv_loading_pane_t

0x8d29,	// (0x0009342e) wait_bar_pane_cp06_ParamLimits

0x8d29,	// (0x0009342e) wait_bar_pane_cp06

0xb8be,	// (0x00095fc3) main_mobtv_programe_curr_pane_t1

0xb8cc,	// (0x00095fd1) main_mobtv_programe_curr_pane_t2

0x0001,

0xfb45,	// (0x0009a24a) main_mobtv_programe_curr_pane_t

0xb8da,	// (0x00095fdf) main_mobtv_programe_next_pane_t1

0xb8e8,	// (0x00095fed) main_mobtv_programe_next_pane_t2

0xb8f6,	// (0x00095ffb) main_mobtv_programe_next_pane_t3

0x0002,

0xfb4a,	// (0x0009a24f) main_mobtv_programe_next_pane_t

0x0a98,	// (0x0008b19d) bg_popup_mobtv_noti_window_pane

0xb904,	// (0x00096009) popup_mobtv_noti_window_g1

0xb90c,	// (0x00096011) popup_mobtv_noti_window_t1

0xb91a,	// (0x0009601f) popup_mobtv_noti_window_t2

0x0001,

0xfb51,	// (0x0009a256) popup_mobtv_noti_window_t

0xc6eb,	// (0x00096df0) bg_popup_mobtv_noti_window_pane_g1

0x2983,	// (0x0008d088) sc_clock_pane

0x2983,	// (0x0008d088) main_fs_bigclock_pane

0x8352,	// (0x00092a57) blid2_tripm_pane_t4_ParamLimits

0x8352,	// (0x00092a57) blid2_tripm_pane_t4

0xc6bb,	// (0x00096dc0) sc_clock_pane_g1_ParamLimits

0xc6bb,	// (0x00096dc0) sc_clock_pane_g1

0xc709,	// (0x00096e0e) sc_clock_pane_t1_ParamLimits

0xc709,	// (0x00096e0e) sc_clock_pane_t1

0xc709,	// (0x00096e0e) sc_clock_pane_t2_ParamLimits

0xc709,	// (0x00096e0e) sc_clock_pane_t2

0xc709,	// (0x00096e0e) sc_clock_pane_t3_ParamLimits

0xc709,	// (0x00096e0e) sc_clock_pane_t3

0x0004,

0xfb56,	// (0x0009a25b) sc_clock_pane_t_ParamLimits

0xfb56,	// (0x0009a25b) sc_clock_pane_t

0x9937,	// (0x0009403c) main_fs_bigclock_indicator_pane_ParamLimits

0x9937,	// (0x0009403c) main_fs_bigclock_indicator_pane

0x8d7e,	// (0x00093483) main_fs_bigclock_pane_g1_ParamLimits

0x8d7e,	// (0x00093483) main_fs_bigclock_pane_g1

0x9943,	// (0x00094048) main_fs_bigclock_pane_t1_ParamLimits

0x9943,	// (0x00094048) main_fs_bigclock_pane_t1

0x9955,	// (0x0009405a) main_fs_bigclock_pane_t2_ParamLimits

0x9955,	// (0x0009405a) main_fs_bigclock_pane_t2

0x9969,	// (0x0009406e) main_fs_bigclock_pane_t3_ParamLimits

0x9969,	// (0x0009406e) main_fs_bigclock_pane_t3

0x0002,

0xfce4,	// (0x0009a3e9) main_fs_bigclock_pane_t_ParamLimits

0xfce4,	// (0x0009a3e9) main_fs_bigclock_pane_t

0xbf88,	// (0x0009668d) main_fs_bigclock_indicator_pane_g1

0xb62e,	// (0x00095d33) ncim_query_content_pane_g2_ParamLimits

0xb62e,	// (0x00095d33) ncim_query_content_pane_g2

0x0001,

0xfae3,	// (0x0009a1e8) ncim_query_content_pane_g_ParamLimits

0xfae3,	// (0x0009a1e8) ncim_query_content_pane_g

0xc709,	// (0x00096e0e) sc_clock_pane_t4_ParamLimits

0xc709,	// (0x00096e0e) sc_clock_pane_t4

0x55c8,	// (0x0008fccd) main_radioblah_pane

0x6e7b,	// (0x00091580) cell_call4_button_pane_t1_copy1_ParamLimits

0x6e7b,	// (0x00091580) cell_call4_button_pane_t1_copy1

0x89ab,	// (0x000930b0) main_ncimui_pane_t1_ParamLimits

0x89ab,	// (0x000930b0) main_ncimui_pane_t1

0x89c5,	// (0x000930ca) main_ncimui_pane_t2_ParamLimits

0x89c5,	// (0x000930ca) main_ncimui_pane_t2

0x0002,

0xfadc,	// (0x0009a1e1) main_ncimui_pane_t_ParamLimits

0xfadc,	// (0x0009a1e1) main_ncimui_pane_t

0xd331,	// (0x00097a36) main_radioblah_anim_pane_ParamLimits

0xd331,	// (0x00097a36) main_radioblah_anim_pane

0xd331,	// (0x00097a36) main_radioblah_info_pane_ParamLimits

0xd331,	// (0x00097a36) main_radioblah_info_pane

0xd33f,	// (0x00097a44) main_radioblah_pane_t1_ParamLimits

0xd33f,	// (0x00097a44) main_radioblah_pane_t1

0xd33f,	// (0x00097a44) main_radioblah_pane_t2_ParamLimits

0xd33f,	// (0x00097a44) main_radioblah_pane_t2

0x0003,

0xfb77,	// (0x0009a27c) main_radioblah_pane_t_ParamLimits

0xfb77,	// (0x0009a27c) main_radioblah_pane_t

0xc69f,	// (0x00096da4) main_radioblah_rocker_ctrl_pane_ParamLimits

0xc69f,	// (0x00096da4) main_radioblah_rocker_ctrl_pane

0xe74a,	// (0x00098e4f) main_radioblah_info_pane_t1_ParamLimits

0xe74a,	// (0x00098e4f) main_radioblah_info_pane_t1

0xb958,	// (0x0009605d) main_radioblah_info_pane_t2_ParamLimits

0xb958,	// (0x0009605d) main_radioblah_info_pane_t2

0x0003,

0xfb80,	// (0x0009a285) main_radioblah_info_pane_t_ParamLimits

0xfb80,	// (0x0009a285) main_radioblah_info_pane_t

0xc6eb,	// (0x00096df0) main_radioblah_rocker_ctrl_pane_g1

0xc6eb,	// (0x00096df0) main_radioblah_rocker_ctrl_pane_g2

0xc6eb,	// (0x00096df0) main_radioblah_rocker_ctrl_pane_g3

0xc6eb,	// (0x00096df0) main_radioblah_rocker_ctrl_pane_g4

0xc6eb,	// (0x00096df0) main_radioblah_rocker_ctrl_pane_g5

0xc6eb,	// (0x00096df0) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfb89,	// (0x0009a28e) main_radioblah_rocker_ctrl_pane_g

0x895d,	// (0x00093062) main_cset_text2_pane_t1_copy1_ParamLimits

0x6eec,	// (0x000915f1) cam4_image_uncrop_qvga_pane

0x7031,	// (0x00091736) vid4_image_uncrop_qcif_pane

0x84d1,	// (0x00092bd6) cam6_image_uncrop_qvga_pane_ParamLimits

0x84d1,	// (0x00092bd6) cam6_image_uncrop_qvga_pane

0xb31c,	// (0x00095a21) vid6_image_uncrop_qcif_pane_ParamLimits

0xb31c,	// (0x00095a21) vid6_image_uncrop_qcif_pane

0x0a98,	// (0x0008b19d) bg_popup_preview_window_pane_cp03

0xb5d4,	// (0x00095cd9) list_cset_text2_pane

0xb5dc,	// (0x00095ce1) main_cset6_text2_pane_g1

0xb5e4,	// (0x00095ce9) main_cset6_text2_pane_t1

0x8f0b,	// (0x00093610) list_cset_text2_pane_t1_ParamLimits

0x8f0b,	// (0x00093610) list_cset_text2_pane_t1

0x55c8,	// (0x0008fccd) main_radioblah_pane_ParamLimits

0x8cdd,	// (0x000933e2) main_mobtv_info_pane_t3_ParamLimits

0x8cdd,	// (0x000933e2) main_mobtv_info_pane_t3

0xd353,	// (0x00097a58) main_radioblah_pane_g1

0xb928,	// (0x0009602d) main_radioblah_info_pane_g1

0xc709,	// (0x00096e0e) main_radioblah_info_pane_t3_ParamLimits

0xc709,	// (0x00096e0e) main_radioblah_info_pane_t3

0x4516,	// (0x0008ec1b) highlight_cell_cale_month_pane_ParamLimits

0x4516,	// (0x0008ec1b) highlight_cell_cale_month_pane

0x2983,	// (0x0008d088) main_phob_fisheye_pane

0xec13,	// (0x00099318) scroll_pane_cp0031_ParamLimits

0xec13,	// (0x00099318) scroll_pane_cp0031

0xb42e,	// (0x00095b33) wait_bar_pane_cp08_ParamLimits

0x86e8,	// (0x00092ded) cset_list_set_pane_copy1_ParamLimits

0xb9a7,	// (0x000960ac) highlight_cell_cale_month_pane_g1

0x8f22,	// (0x00093627) highlight_cell_cale_month_pane_t1

0x12b6,	// (0x0008b9bb) list_gen_pane_cp01

0x0e65,	// (0x0008b56a) scroll_pane_01

0x8f30,	// (0x00093635) list_single_double_fisheye_pane

0x8f39,	// (0x0009363e) list_double_fisheye_pane_g1_ParamLimits

0x8f39,	// (0x0009363e) list_double_fisheye_pane_g1

0x8f45,	// (0x0009364a) list_double_fisheye_pane_g2_ParamLimits

0x8f45,	// (0x0009364a) list_double_fisheye_pane_g2

0x8f59,	// (0x0009365e) list_double_fisheye_pane_g3_ParamLimits

0x8f59,	// (0x0009365e) list_double_fisheye_pane_g3

0x0004,

0xfb96,	// (0x0009a29b) list_double_fisheye_pane_g_ParamLimits

0xfb96,	// (0x0009a29b) list_double_fisheye_pane_g

0x8f82,	// (0x00093687) list_double_fisheye_pane_t1_ParamLimits

0x8f82,	// (0x00093687) list_double_fisheye_pane_t1

0x8f9d,	// (0x000936a2) list_double_fisheye_pane_t2_ParamLimits

0x8f9d,	// (0x000936a2) list_double_fisheye_pane_t2

0x0001,

0xfba1,	// (0x0009a2a6) list_double_fisheye_pane_t_ParamLimits

0xfba1,	// (0x0009a2a6) list_double_fisheye_pane_t

0x2983,	// (0x0008d088) main_call5_pane

0xc69f,	// (0x00096da4) sc_swipe_pane_ParamLimits

0xc69f,	// (0x00096da4) sc_swipe_pane

0x8fcb,	// (0x000936d0) call5_image_pane_ParamLimits

0x8fcb,	// (0x000936d0) call5_image_pane

0x8fdd,	// (0x000936e2) call5_swipe_1_pane_ParamLimits

0x8fdd,	// (0x000936e2) call5_swipe_1_pane

0x8fe9,	// (0x000936ee) call5_swipe_2_pane_ParamLimits

0x8fe9,	// (0x000936ee) call5_swipe_2_pane

0x9003,	// (0x00093708) popup_call5_audio_first_window_ParamLimits

0x9003,	// (0x00093708) popup_call5_audio_first_window

0xc6ad,	// (0x00096db2) call5_swipe_1_pane_g1_ParamLimits

0xc6ad,	// (0x00096db2) call5_swipe_1_pane_g1

0xb9af,	// (0x000960b4) call5_swipe_1_pane_g2_ParamLimits

0xb9af,	// (0x000960b4) call5_swipe_1_pane_g2

0x0001,

0xfba6,	// (0x0009a2ab) call5_swipe_1_pane_g_ParamLimits

0xfba6,	// (0x0009a2ab) call5_swipe_1_pane_g

0xb9bb,	// (0x000960c0) call5_swipe_1_pane_t1_ParamLimits

0xb9bb,	// (0x000960c0) call5_swipe_1_pane_t1

0xc6ad,	// (0x00096db2) call5_swipe_2_pane_g1_ParamLimits

0xc6ad,	// (0x00096db2) call5_swipe_2_pane_g1

0xb9d0,	// (0x000960d5) call5_swipe_2_pane_g2_ParamLimits

0xb9d0,	// (0x000960d5) call5_swipe_2_pane_g2

0x0001,

0xfbab,	// (0x0009a2b0) call5_swipe_2_pane_g_ParamLimits

0xfbab,	// (0x0009a2b0) call5_swipe_2_pane_g

0xb9dc,	// (0x000960e1) call5_swipe_2_pane_t1_ParamLimits

0xb9dc,	// (0x000960e1) call5_swipe_2_pane_t1

0xc6ad,	// (0x00096db2) sc_swipe_pane_g1_ParamLimits

0xc6ad,	// (0x00096db2) sc_swipe_pane_g1

0xc6bb,	// (0x00096dc0) sc_swipe_pane_g2_ParamLimits

0xc6bb,	// (0x00096dc0) sc_swipe_pane_g2

0x0001,

0xfbb0,	// (0x0009a2b5) sc_swipe_pane_g_ParamLimits

0xfbb0,	// (0x0009a2b5) sc_swipe_pane_g

0xc6f5,	// (0x00096dfa) sc_swipe_pane_t1_ParamLimits

0xc6f5,	// (0x00096dfa) sc_swipe_pane_t1

0x2983,	// (0x0008d088) main_cmail_launcher_pane

0x9013,	// (0x00093718) aid_size_cell_cmail_l_ParamLimits

0x9013,	// (0x00093718) aid_size_cell_cmail_l

0x9021,	// (0x00093726) grid_cmail_l_pane_ParamLimits

0x9021,	// (0x00093726) grid_cmail_l_pane

0x902f,	// (0x00093734) cell_cmail_l_pane_ParamLimits

0x902f,	// (0x00093734) cell_cmail_l_pane

0x904a,	// (0x0009374f) cell_cmail_l_pane_g1_ParamLimits

0x904a,	// (0x0009374f) cell_cmail_l_pane_g1

0x9056,	// (0x0009375b) cell_cmail_l_pane_t1_ParamLimits

0x9056,	// (0x0009375b) cell_cmail_l_pane_t1

0x906c,	// (0x00093771) cell_cmail_l_pane_t2_ParamLimits

0x906c,	// (0x00093771) cell_cmail_l_pane_t2

0x0001,

0xfbb5,	// (0x0009a2ba) cell_cmail_l_pane_t_ParamLimits

0xfbb5,	// (0x0009a2ba) cell_cmail_l_pane_t

0x153a,	// (0x0008bc3f) grid_highlight_pane_cp018_ParamLimits

0x153a,	// (0x0008bc3f) grid_highlight_pane_cp018

0x27da,	// (0x0008cedf) main2_pane_ParamLimits

0x27da,	// (0x0008cedf) main2_pane

0xc7fc,	// (0x00096f01) popup_sp_fs_action_menu_bg_pane_g1

0xc804,	// (0x00096f09) popup_sp_fs_action_menu_bg_pane_g2

0xc80c,	// (0x00096f11) popup_sp_fs_action_menu_bg_pane_g3

0xc814,	// (0x00096f19) popup_sp_fs_action_menu_bg_pane_g4

0xc81c,	// (0x00096f21) popup_sp_fs_action_menu_bg_pane_g5

0xc824,	// (0x00096f29) popup_sp_fs_action_menu_bg_pane_g6

0xc82c,	// (0x00096f31) popup_sp_fs_action_menu_bg_pane_g7

0xc834,	// (0x00096f39) popup_sp_fs_action_menu_bg_pane_g8

0xc83c,	// (0x00096f41) popup_sp_fs_action_menu_bg_pane_g9

0xc844,	// (0x00096f49) popup_sp_fs_action_menu_bg_pane_g10

0xc844,	// (0x00096f49) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf0dd,	// (0x000997e2) popup_sp_fs_action_menu_bg_pane_g

0xc6ad,	// (0x00096db2) list_medium_line_x2_t3_g3_g1_ParamLimits

0xc6ad,	// (0x00096db2) list_medium_line_x2_t3_g3_g1

0xc6ad,	// (0x00096db2) list_medium_line_x2_t3_g3_g2_ParamLimits

0xc6ad,	// (0x00096db2) list_medium_line_x2_t3_g3_g2

0xc6ad,	// (0x00096db2) list_medium_line_x2_t3_g3_g3_ParamLimits

0xc6ad,	// (0x00096db2) list_medium_line_x2_t3_g3_g3

0x0002,

0xf18b,	// (0x00099890) list_medium_line_x2_t3_g3_g_ParamLimits

0xf18b,	// (0x00099890) list_medium_line_x2_t3_g3_g

0xc6f5,	// (0x00096dfa) list_medium_line_x2_t3_g3_t1_ParamLimits

0xc6f5,	// (0x00096dfa) list_medium_line_x2_t3_g3_t1

0xc6f5,	// (0x00096dfa) list_medium_line_x2_t3_g3_t2_ParamLimits

0xc6f5,	// (0x00096dfa) list_medium_line_x2_t3_g3_t2

0xc6f5,	// (0x00096dfa) list_medium_line_x2_t3_g3_t3_ParamLimits

0xc6f5,	// (0x00096dfa) list_medium_line_x2_t3_g3_t3

0x0002,

0xf192,	// (0x00099897) list_medium_line_x2_t3_g3_t_ParamLimits

0xf192,	// (0x00099897) list_medium_line_x2_t3_g3_t

0xc6ad,	// (0x00096db2) list_medium_line_x2_t3_g2_g1_ParamLimits

0xc6ad,	// (0x00096db2) list_medium_line_x2_t3_g2_g1

0xc6ad,	// (0x00096db2) list_medium_line_x2_t3_g2_g2_ParamLimits

0xc6ad,	// (0x00096db2) list_medium_line_x2_t3_g2_g2

0x0001,

0xf199,	// (0x0009989e) list_medium_line_x2_t3_g2_g_ParamLimits

0xf199,	// (0x0009989e) list_medium_line_x2_t3_g2_g

0xc6f5,	// (0x00096dfa) list_medium_line_x2_t3_g2_t1_ParamLimits

0xc6f5,	// (0x00096dfa) list_medium_line_x2_t3_g2_t1

0xc6f5,	// (0x00096dfa) list_medium_line_x2_t3_g2_t2_ParamLimits

0xc6f5,	// (0x00096dfa) list_medium_line_x2_t3_g2_t2

0xc6f5,	// (0x00096dfa) list_medium_line_x2_t3_g2_t3_ParamLimits

0xc6f5,	// (0x00096dfa) list_medium_line_x2_t3_g2_t3

0x0002,

0xf192,	// (0x00099897) list_medium_line_x2_t3_g2_t_ParamLimits

0xf192,	// (0x00099897) list_medium_line_x2_t3_g2_t

0xc6ad,	// (0x00096db2) list_medium_line_x2_t4_g4_g1_ParamLimits

0xc6ad,	// (0x00096db2) list_medium_line_x2_t4_g4_g1

0xc6ad,	// (0x00096db2) list_medium_line_x2_t4_g4_g2_ParamLimits

0xc6ad,	// (0x00096db2) list_medium_line_x2_t4_g4_g2

0xc6ad,	// (0x00096db2) list_medium_line_x2_t4_g4_g3_ParamLimits

0xc6ad,	// (0x00096db2) list_medium_line_x2_t4_g4_g3

0xc6ad,	// (0x00096db2) list_medium_line_x2_t4_g4_g4_ParamLimits

0xc6ad,	// (0x00096db2) list_medium_line_x2_t4_g4_g4

0x0003,

0xf19e,	// (0x000998a3) list_medium_line_x2_t4_g4_g_ParamLimits

0xf19e,	// (0x000998a3) list_medium_line_x2_t4_g4_g

0xc6f5,	// (0x00096dfa) list_medium_line_x2_t4_g4_t1_ParamLimits

0xc6f5,	// (0x00096dfa) list_medium_line_x2_t4_g4_t1

0xc6f5,	// (0x00096dfa) list_medium_line_x2_t4_g4_t2_ParamLimits

0xc6f5,	// (0x00096dfa) list_medium_line_x2_t4_g4_t2

0xc6f5,	// (0x00096dfa) list_medium_line_x2_t4_g4_t3_ParamLimits

0xc6f5,	// (0x00096dfa) list_medium_line_x2_t4_g4_t3

0xc6f5,	// (0x00096dfa) list_medium_line_x2_t4_g4_t4_ParamLimits

0xc6f5,	// (0x00096dfa) list_medium_line_x2_t4_g4_t4

0x0003,

0xf1a7,	// (0x000998ac) list_medium_line_x2_t4_g4_t_ParamLimits

0xf1a7,	// (0x000998ac) list_medium_line_x2_t4_g4_t

0xc6ad,	// (0x00096db2) list_medium_line_x2_t2_g4_g1_ParamLimits

0xc6ad,	// (0x00096db2) list_medium_line_x2_t2_g4_g1

0xc6ad,	// (0x00096db2) list_medium_line_x2_t2_g4_g2_ParamLimits

0xc6ad,	// (0x00096db2) list_medium_line_x2_t2_g4_g2

0xc6ad,	// (0x00096db2) list_medium_line_x2_t2_g4_g3_ParamLimits

0xc6ad,	// (0x00096db2) list_medium_line_x2_t2_g4_g3

0xc6ad,	// (0x00096db2) list_medium_line_x2_t2_g4_g4_ParamLimits

0xc6ad,	// (0x00096db2) list_medium_line_x2_t2_g4_g4

0x0003,

0xf19e,	// (0x000998a3) list_medium_line_x2_t2_g4_g_ParamLimits

0xf19e,	// (0x000998a3) list_medium_line_x2_t2_g4_g

0xc6f5,	// (0x00096dfa) list_medium_line_x2_t2_g4_t1_ParamLimits

0xc6f5,	// (0x00096dfa) list_medium_line_x2_t2_g4_t1

0xc6f5,	// (0x00096dfa) list_medium_line_x2_t2_g4_t2_ParamLimits

0xc6f5,	// (0x00096dfa) list_medium_line_x2_t2_g4_t2

0x0001,

0xf20e,	// (0x00099913) list_medium_line_x2_t2_g4_t_ParamLimits

0xf20e,	// (0x00099913) list_medium_line_x2_t2_g4_t

0xc6ad,	// (0x00096db2) list_medium_line_x2_t2_g3_g1_ParamLimits

0xc6ad,	// (0x00096db2) list_medium_line_x2_t2_g3_g1

0xc6ad,	// (0x00096db2) list_medium_line_x2_t2_g3_g2_ParamLimits

0xc6ad,	// (0x00096db2) list_medium_line_x2_t2_g3_g2

0xc6ad,	// (0x00096db2) list_medium_line_x2_t2_g3_g3_ParamLimits

0xc6ad,	// (0x00096db2) list_medium_line_x2_t2_g3_g3

0x0002,

0xf18b,	// (0x00099890) list_medium_line_x2_t2_g3_g_ParamLimits

0xf18b,	// (0x00099890) list_medium_line_x2_t2_g3_g

0xc6f5,	// (0x00096dfa) list_medium_line_x2_t2_g3_t1_ParamLimits

0xc6f5,	// (0x00096dfa) list_medium_line_x2_t2_g3_t1

0xc6f5,	// (0x00096dfa) list_medium_line_x2_t2_g3_t2_ParamLimits

0xc6f5,	// (0x00096dfa) list_medium_line_x2_t2_g3_t2

0x0001,

0xf20e,	// (0x00099913) list_medium_line_x2_t2_g3_t_ParamLimits

0xf20e,	// (0x00099913) list_medium_line_x2_t2_g3_t

0x46ba,	// (0x0008edbf) main_sp_fs_list_pane_ParamLimits

0x46ba,	// (0x0008edbf) main_sp_fs_list_pane

0x46c6,	// (0x0008edcb) sp_fs_scroll_pane_ParamLimits

0x46c6,	// (0x0008edcb) sp_fs_scroll_pane

0xce7c,	// (0x00097581) list_medium_line_x2_t3_t1

0xce7c,	// (0x00097581) list_medium_line_x2_t3_t2

0xce7c,	// (0x00097581) list_medium_line_x2_t3_t3

0x0002,

0xf259,	// (0x0009995e) list_medium_line_x2_t3_t

0xce7c,	// (0x00097581) list_medium_line_x3_t4_t1

0xce7c,	// (0x00097581) list_medium_line_x3_t4_t2

0xce7c,	// (0x00097581) list_medium_line_x3_t4_t3

0xce7c,	// (0x00097581) list_medium_line_x3_t4_t4

0x0003,

0xf260,	// (0x00099965) list_medium_line_x3_t4_t

0xce7c,	// (0x00097581) list_medium_line_x4_t5_t1

0xce7c,	// (0x00097581) list_medium_line_x4_t5_t2

0xce7c,	// (0x00097581) list_medium_line_x4_t5_t3

0xce7c,	// (0x00097581) list_medium_line_x4_t5_t4

0xce7c,	// (0x00097581) list_medium_line_x4_t5_t5

0x0004,

0xf269,	// (0x0009996e) list_medium_line_x4_t5_t

0xc6ad,	// (0x00096db2) list_medium_line_t4_g4_g1_ParamLimits

0xc6ad,	// (0x00096db2) list_medium_line_t4_g4_g1

0xc6ad,	// (0x00096db2) list_medium_line_t4_g4_g2_ParamLimits

0xc6ad,	// (0x00096db2) list_medium_line_t4_g4_g2

0xc6ad,	// (0x00096db2) list_medium_line_t4_g4_g3_ParamLimits

0xc6ad,	// (0x00096db2) list_medium_line_t4_g4_g3

0xc6ad,	// (0x00096db2) list_medium_line_t4_g4_g4_ParamLimits

0xc6ad,	// (0x00096db2) list_medium_line_t4_g4_g4

0x0003,

0xf19e,	// (0x000998a3) list_medium_line_t4_g4_g_ParamLimits

0xf19e,	// (0x000998a3) list_medium_line_t4_g4_g

0xc6f5,	// (0x00096dfa) list_medium_line_t4_g4_t1_ParamLimits

0xc6f5,	// (0x00096dfa) list_medium_line_t4_g4_t1

0xc6f5,	// (0x00096dfa) list_medium_line_t4_g4_t2_ParamLimits

0xc6f5,	// (0x00096dfa) list_medium_line_t4_g4_t2

0xc6f5,	// (0x00096dfa) list_medium_line_t4_g4_t3_ParamLimits

0xc6f5,	// (0x00096dfa) list_medium_line_t4_g4_t3

0xc6f5,	// (0x00096dfa) list_medium_line_t4_g4_t4_ParamLimits

0xc6f5,	// (0x00096dfa) list_medium_line_t4_g4_t4

0x0003,

0xf1a7,	// (0x000998ac) list_medium_line_t4_g4_t_ParamLimits

0xf1a7,	// (0x000998ac) list_medium_line_t4_g4_t

0x47bf,	// (0x0008eec4) chi_dic_find_pane_g1

0x55e4,	// (0x0008fce9) main_tport_pane

0xce7c,	// (0x00097581) list_medium_line_plain_t1

0xc6ad,	// (0x00096db2) list_medium_line_t2_g2_g1_ParamLimits

0xc6ad,	// (0x00096db2) list_medium_line_t2_g2_g1

0xc6ad,	// (0x00096db2) list_medium_line_t2_g2_g2_ParamLimits

0xc6ad,	// (0x00096db2) list_medium_line_t2_g2_g2

0x0001,

0xf199,	// (0x0009989e) list_medium_line_t2_g2_g_ParamLimits

0xf199,	// (0x0009989e) list_medium_line_t2_g2_g

0xc6f5,	// (0x00096dfa) list_medium_line_t2_g2_t1_ParamLimits

0xc6f5,	// (0x00096dfa) list_medium_line_t2_g2_t1

0xc6f5,	// (0x00096dfa) list_medium_line_t2_g2_t2_ParamLimits

0xc6f5,	// (0x00096dfa) list_medium_line_t2_g2_t2

0x0001,

0xf20e,	// (0x00099913) list_medium_line_t2_g2_t_ParamLimits

0xf20e,	// (0x00099913) list_medium_line_t2_g2_t

0x01f9,	// (0x0008a8fe) aid_sp_fs_list_icon_a_sm

0x1333,	// (0x0008ba38) aid_sp_fs_list_icon_d

0x133b,	// (0x0008ba40) aid_sp_fs_text_primary

0x0201,	// (0x0008a906) aid_sp_fs_text_secondary

0x0a98,	// (0x0008b19d) list_medium_line

0x0a98,	// (0x0008b19d) list_medium_line_g2

0x0a98,	// (0x0008b19d) list_medium_line_g3

0x0a98,	// (0x0008b19d) list_medium_line_plain

0x0a98,	// (0x0008b19d) list_medium_line_plain_t2

0x0a98,	// (0x0008b19d) list_medium_line_plain_t3

0x0a98,	// (0x0008b19d) list_medium_line_right_icon

0x0a98,	// (0x0008b19d) list_medium_line_right_iconx2

0x0a98,	// (0x0008b19d) list_medium_line_t2

0x0a98,	// (0x0008b19d) list_medium_line_t2_g2

0x0a98,	// (0x0008b19d) list_medium_line_t2_g3

0x0a98,	// (0x0008b19d) list_medium_line_t2_right_icon

0x0a98,	// (0x0008b19d) list_medium_line_t2_right_iconx2

0x0a98,	// (0x0008b19d) list_medium_line_t3

0x0a98,	// (0x0008b19d) list_medium_line_t3_g2

0x0a98,	// (0x0008b19d) list_medium_line_t3_g3

0x0a98,	// (0x0008b19d) list_medium_line_t3_right_iconx2

0x0a98,	// (0x0008b19d) list_medium_line_t4_g4

0x0a98,	// (0x0008b19d) list_medium_line_x2

0x0a98,	// (0x0008b19d) list_medium_line_x2_t2_g2

0x0a98,	// (0x0008b19d) list_medium_line_x2_t2_g3

0x0a98,	// (0x0008b19d) list_medium_line_x2_t2_g4

0x0a98,	// (0x0008b19d) list_medium_line_x2_t3

0x0a98,	// (0x0008b19d) list_medium_line_x2_t3_g2

0x0a98,	// (0x0008b19d) list_medium_line_x2_t3_g3

0x0a98,	// (0x0008b19d) list_medium_line_x2_t3_g4

0x0a98,	// (0x0008b19d) list_medium_line_x2_t4_g2

0x0a98,	// (0x0008b19d) list_medium_line_x2_t4_g4

0x0a98,	// (0x0008b19d) list_medium_line_x3

0x0a98,	// (0x0008b19d) list_medium_line_x3_t4

0x0a98,	// (0x0008b19d) list_medium_line_x3_t4_g4

0x0a98,	// (0x0008b19d) list_medium_line_x4_t4

0x0a98,	// (0x0008b19d) list_medium_line_x4_t4_g7

0x0a98,	// (0x0008b19d) list_medium_line_x4_t5

0x81dd,	// (0x000928e2) list_single_fs_dyc_pane_ParamLimits

0x81dd,	// (0x000928e2) list_single_fs_dyc_pane

0xc6ad,	// (0x00096db2) list_medium_line_x4_t4_g7_g1_ParamLimits

0xc6ad,	// (0x00096db2) list_medium_line_x4_t4_g7_g1

0xc6ad,	// (0x00096db2) list_medium_line_x4_t4_g7_g2_ParamLimits

0xc6ad,	// (0x00096db2) list_medium_line_x4_t4_g7_g2

0xc6ad,	// (0x00096db2) list_medium_line_x4_t4_g7_g3_ParamLimits

0xc6ad,	// (0x00096db2) list_medium_line_x4_t4_g7_g3

0xc6ad,	// (0x00096db2) list_medium_line_x4_t4_g7_g4_ParamLimits

0xc6ad,	// (0x00096db2) list_medium_line_x4_t4_g7_g4

0xc6ad,	// (0x00096db2) list_medium_line_x4_t4_g7_g5_ParamLimits

0xc6ad,	// (0x00096db2) list_medium_line_x4_t4_g7_g5

0xc6ad,	// (0x00096db2) list_medium_line_x4_t4_g7_g6_ParamLimits

0xc6ad,	// (0x00096db2) list_medium_line_x4_t4_g7_g6

0xc6bb,	// (0x00096dc0) list_medium_line_x4_t4_g7_g7_ParamLimits

0xc6bb,	// (0x00096dc0) list_medium_line_x4_t4_g7_g7

0x0006,

0xfabd,	// (0x0009a1c2) list_medium_line_x4_t4_g7_g_ParamLimits

0xfabd,	// (0x0009a1c2) list_medium_line_x4_t4_g7_g

0xc6f5,	// (0x00096dfa) list_medium_line_x4_t4_g7_t1_ParamLimits

0xc6f5,	// (0x00096dfa) list_medium_line_x4_t4_g7_t1

0xc6f5,	// (0x00096dfa) list_medium_line_x4_t4_g7_t2_ParamLimits

0xc6f5,	// (0x00096dfa) list_medium_line_x4_t4_g7_t2

0xc6f5,	// (0x00096dfa) list_medium_line_x4_t4_g7_t3_ParamLimits

0xc6f5,	// (0x00096dfa) list_medium_line_x4_t4_g7_t3

0xc709,	// (0x00096e0e) list_medium_line_x4_t4_g7_t4_ParamLimits

0xc709,	// (0x00096e0e) list_medium_line_x4_t4_g7_t4

0xc709,	// (0x00096e0e) list_medium_line_x4_t4_g7_t5_ParamLimits

0xc709,	// (0x00096e0e) list_medium_line_x4_t4_g7_t5

0x0004,

0xfacc,	// (0x0009a1d1) list_medium_line_x4_t4_g7_t_ParamLimits

0xfacc,	// (0x0009a1d1) list_medium_line_x4_t4_g7_t

0x8940,	// (0x00093045) list_single_dyc_row_pane_ParamLimits

0x8940,	// (0x00093045) list_single_dyc_row_pane

0x8fbf,	// (0x000936c4) call5_gesture_pane_ParamLimits

0x8fbf,	// (0x000936c4) call5_gesture_pane

0x8ff5,	// (0x000936fa) call5_windows_pane_ParamLimits

0x8ff5,	// (0x000936fa) call5_windows_pane

0x9089,	// (0x0009378e) call5_swipe_1_pane_cp_ParamLimits

0x9089,	// (0x0009378e) call5_swipe_1_pane_cp

0x9095,	// (0x0009379a) call5_swipe_2_pane_cp_ParamLimits

0x9095,	// (0x0009379a) call5_swipe_2_pane_cp

0xc958,	// (0x0009705d) call5_image_pane_cp

0x90a1,	// (0x000937a6) popup_call5_audio_first_window_cp_ParamLimits

0x90a1,	// (0x000937a6) popup_call5_audio_first_window_cp

0xb9f1,	// (0x000960f6) call5_swipe_1_pane_g1_cp_ParamLimits

0xb9f1,	// (0x000960f6) call5_swipe_1_pane_g1_cp

0xb9fe,	// (0x00096103) call5_swipe_1_pane_g2_cp

0xba06,	// (0x0009610b) call5_swipe_1_pane_t1_cp_ParamLimits

0xba06,	// (0x0009610b) call5_swipe_1_pane_t1_cp

0xb9f1,	// (0x000960f6) call5_swipe_2_pane_g1_cp_ParamLimits

0xb9f1,	// (0x000960f6) call5_swipe_2_pane_g1_cp

0xba1b,	// (0x00096120) call5_swipe_2_pane_g2_cp

0xba23,	// (0x00096128) call5_swipe_2_pane_t1_cp_ParamLimits

0xba23,	// (0x00096128) call5_swipe_2_pane_t1_cp

0x153a,	// (0x0008bc3f) main_sp_fs_email_pane

0x0f48,	// (0x0008b64d) main_sp_fs_listscroll_pane_te

0x90af,	// (0x000937b4) popup_sp_fs_action_menu_pane_ParamLimits

0x90af,	// (0x000937b4) popup_sp_fs_action_menu_pane

0xc6eb,	// (0x00096df0) bg_sp_fs_ctrlbar_pane_g1

0xba38,	// (0x0009613d) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xba41,	// (0x00096146) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xba4a,	// (0x0009614f) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc6eb,	// (0x00096df0) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfbba,	// (0x0009a2bf) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xe4dd,	// (0x00098be2) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xe4dd,	// (0x00098be2) bg_sp_fs_ctrlbar_ddmenu_pane

0xba53,	// (0x00096158) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xba53,	// (0x00096158) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xba5f,	// (0x00096164) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xba5f,	// (0x00096164) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfbc3,	// (0x0009a2c8) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfbc3,	// (0x0009a2c8) main_sp_fs_ctrlbar_ddmenu_pane_g

0xba6b,	// (0x00096170) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xba6b,	// (0x00096170) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xc6eb,	// (0x00096df0) list_medium_line_t2_right_icon_g1

0xce7c,	// (0x00097581) list_medium_line_t2_right_icon_t1

0xce7c,	// (0x00097581) list_medium_line_t2_right_icon_t2

0x0001,

0xfbc8,	// (0x0009a2cd) list_medium_line_t2_right_icon_t

0xd331,	// (0x00097a36) bg_sp_fs_ctrlbar_pane_ParamLimits

0xd331,	// (0x00097a36) bg_sp_fs_ctrlbar_pane

0x914e,	// (0x00093853) main_sp_fs_ctrlbar_button_pane_cp01

0x9156,	// (0x0009385b) main_sp_fs_ctrlbar_ddmenu_pane

0xbabf,	// (0x000961c4) main_sp_fs_ctrlbar_pane_g1

0xbacb,	// (0x000961d0) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfbcd,	// (0x0009a2d2) main_sp_fs_ctrlbar_pane_g

0x9194,	// (0x00093899) main_sp_fs_ctrlbar_pane_t1

0x91d1,	// (0x000938d6) main_sp_fs_ctrlbar_pane

0x91eb,	// (0x000938f0) main_sp_fs_listscroll_pane_te_cp01

0x9206,	// (0x0009390b) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x9206,	// (0x0009390b) popup_sp_fs_action_menu_pane_cp01

0x153a,	// (0x0008bc3f) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x153a,	// (0x0008bc3f) bg_sp_fs_highlight_list_pane_cp01

0x020a,	// (0x0008a90f) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x020a,	// (0x0008a90f) sp_fs_action_menu_list_gene_pane_g1

0xbaf2,	// (0x000961f7) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xbaf2,	// (0x000961f7) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfbdb,	// (0x0009a2e0) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfbdb,	// (0x0009a2e0) sp_fs_action_menu_list_gene_pane_g

0x0219,	// (0x0008a91e) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x0219,	// (0x0008a91e) sp_fs_action_menu_list_gene_pane_t1

0x0231,	// (0x0008a936) sp_fs_action_menu_list_gene_pane_ParamLimits

0x0231,	// (0x0008a936) sp_fs_action_menu_list_gene_pane

0xbaff,	// (0x00096204) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xbaff,	// (0x00096204) popup_sp_fs_action_menu_bg_pane

0x0254,	// (0x0008a959) sp_fs_action_menu_list_pane_ParamLimits

0x0254,	// (0x0008a959) sp_fs_action_menu_list_pane

0x9226,	// (0x0009392b) sp_fs_scroll_pane_cp01_ParamLimits

0x9226,	// (0x0009392b) sp_fs_scroll_pane_cp01

0xce7c,	// (0x00097581) list_medium_line_plain_t2_t1

0xce7c,	// (0x00097581) list_medium_line_plain_t2_t2

0x0001,

0xfbc8,	// (0x0009a2cd) list_medium_line_plain_t2_t

0xce7c,	// (0x00097581) list_medium_line_plain_t3_t1

0xce7c,	// (0x00097581) list_medium_line_plain_t3_t2

0xce7c,	// (0x00097581) list_medium_line_plain_t3_t3

0x0002,

0xf259,	// (0x0009995e) list_medium_line_plain_t3_t

0xc6ad,	// (0x00096db2) list_medium_line_x2_t2_g2_g1_ParamLimits

0xc6ad,	// (0x00096db2) list_medium_line_x2_t2_g2_g1

0xc6ad,	// (0x00096db2) list_medium_line_x2_t2_g2_g2_ParamLimits

0xc6ad,	// (0x00096db2) list_medium_line_x2_t2_g2_g2

0x0001,

0xf199,	// (0x0009989e) list_medium_line_x2_t2_g2_g_ParamLimits

0xf199,	// (0x0009989e) list_medium_line_x2_t2_g2_g

0xc6f5,	// (0x00096dfa) list_medium_line_x2_t2_g2_t1_ParamLimits

0xc6f5,	// (0x00096dfa) list_medium_line_x2_t2_g2_t1

0xc6f5,	// (0x00096dfa) list_medium_line_x2_t2_g2_t2_ParamLimits

0xc6f5,	// (0x00096dfa) list_medium_line_x2_t2_g2_t2

0x0001,

0xf20e,	// (0x00099913) list_medium_line_x2_t2_g2_t_ParamLimits

0xf20e,	// (0x00099913) list_medium_line_x2_t2_g2_t

0xc6ad,	// (0x00096db2) list_medium_line_x2_t4_g2_g1_ParamLimits

0xc6ad,	// (0x00096db2) list_medium_line_x2_t4_g2_g1

0xc6ad,	// (0x00096db2) list_medium_line_x2_t4_g2_g2_ParamLimits

0xc6ad,	// (0x00096db2) list_medium_line_x2_t4_g2_g2

0x0001,

0xf199,	// (0x0009989e) list_medium_line_x2_t4_g2_g_ParamLimits

0xf199,	// (0x0009989e) list_medium_line_x2_t4_g2_g

0xc6f5,	// (0x00096dfa) list_medium_line_x2_t4_g2_t1_ParamLimits

0xc6f5,	// (0x00096dfa) list_medium_line_x2_t4_g2_t1

0xc6f5,	// (0x00096dfa) list_medium_line_x2_t4_g2_t2_ParamLimits

0xc6f5,	// (0x00096dfa) list_medium_line_x2_t4_g2_t2

0xc6f5,	// (0x00096dfa) list_medium_line_x2_t4_g2_t3_ParamLimits

0xc6f5,	// (0x00096dfa) list_medium_line_x2_t4_g2_t3

0xc6f5,	// (0x00096dfa) list_medium_line_x2_t4_g2_t4_ParamLimits

0xc6f5,	// (0x00096dfa) list_medium_line_x2_t4_g2_t4

0x0003,

0xf1a7,	// (0x000998ac) list_medium_line_x2_t4_g2_t_ParamLimits

0xf1a7,	// (0x000998ac) list_medium_line_x2_t4_g2_t

0xc6eb,	// (0x00096df0) list_medium_line_t3_right_iconx2_g1

0xc6eb,	// (0x00096df0) list_medium_line_t3_right_iconx2_g2

0xc6eb,	// (0x00096df0) list_medium_line_t3_right_iconx2_g3

0x0002,

0xf375,	// (0x00099a7a) list_medium_line_t3_right_iconx2_g

0xce7c,	// (0x00097581) list_medium_line_t3_right_iconx2_t1

0xce7c,	// (0x00097581) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfbc8,	// (0x0009a2cd) list_medium_line_t3_right_iconx2_t

0xc6ad,	// (0x00096db2) list_medium_line_x3_t4_g4_g1_ParamLimits

0xc6ad,	// (0x00096db2) list_medium_line_x3_t4_g4_g1

0xc6ad,	// (0x00096db2) list_medium_line_x3_t4_g4_g2_ParamLimits

0xc6ad,	// (0x00096db2) list_medium_line_x3_t4_g4_g2

0xc6ad,	// (0x00096db2) list_medium_line_x3_t4_g4_g3_ParamLimits

0xc6ad,	// (0x00096db2) list_medium_line_x3_t4_g4_g3

0xc6ad,	// (0x00096db2) list_medium_line_x3_t4_g4_g4_ParamLimits

0xc6ad,	// (0x00096db2) list_medium_line_x3_t4_g4_g4

0x0003,

0xf19e,	// (0x000998a3) list_medium_line_x3_t4_g4_g_ParamLimits

0xf19e,	// (0x000998a3) list_medium_line_x3_t4_g4_g

0xc6f5,	// (0x00096dfa) list_medium_line_x3_t4_g4_t1_ParamLimits

0xc6f5,	// (0x00096dfa) list_medium_line_x3_t4_g4_t1

0xc6f5,	// (0x00096dfa) list_medium_line_x3_t4_g4_t2_ParamLimits

0xc6f5,	// (0x00096dfa) list_medium_line_x3_t4_g4_t2

0xc6f5,	// (0x00096dfa) list_medium_line_x3_t4_g4_t3_ParamLimits

0xc6f5,	// (0x00096dfa) list_medium_line_x3_t4_g4_t3

0xc6f5,	// (0x00096dfa) list_medium_line_x3_t4_g4_t4_ParamLimits

0xc6f5,	// (0x00096dfa) list_medium_line_x3_t4_g4_t4

0x0003,

0xf1a7,	// (0x000998ac) list_medium_line_x3_t4_g4_t_ParamLimits

0xf1a7,	// (0x000998ac) list_medium_line_x3_t4_g4_t

0x924c,	// (0x00093951) list_single_dyc_row_text_pane_t1_ParamLimits

0x924c,	// (0x00093951) list_single_dyc_row_text_pane_t1

0x928f,	// (0x00093994) list_single_dyc_row_text_pane_t2_ParamLimits

0x928f,	// (0x00093994) list_single_dyc_row_text_pane_t2

0x0278,	// (0x0008a97d) list_single_dyc_row_text_pane_t3_ParamLimits

0x0278,	// (0x0008a97d) list_single_dyc_row_text_pane_t3

0x0005,

0xfbe0,	// (0x0009a2e5) list_single_dyc_row_text_pane_t_ParamLimits

0xfbe0,	// (0x0009a2e5) list_single_dyc_row_text_pane_t

0x029c,	// (0x0008a9a1) list_single_dyc_row_pane_g1_ParamLimits

0x029c,	// (0x0008a9a1) list_single_dyc_row_pane_g1

0x02a8,	// (0x0008a9ad) list_single_dyc_row_pane_g2_ParamLimits

0x02a8,	// (0x0008a9ad) list_single_dyc_row_pane_g2

0x02b4,	// (0x0008a9b9) list_single_dyc_row_pane_g3_ParamLimits

0x02b4,	// (0x0008a9b9) list_single_dyc_row_pane_g3

0x02c7,	// (0x0008a9cc) list_single_dyc_row_pane_g4_ParamLimits

0x02c7,	// (0x0008a9cc) list_single_dyc_row_pane_g4

0x0006,

0xfbed,	// (0x0009a2f2) list_single_dyc_row_pane_g_ParamLimits

0xfbed,	// (0x0009a2f2) list_single_dyc_row_pane_g

0x0319,	// (0x0008aa1e) list_single_dyc_row_text_pane_ParamLimits

0x0319,	// (0x0008aa1e) list_single_dyc_row_text_pane

0x0a98,	// (0x0008b19d) bg_sp_fs_scroll_pane

0xbb0d,	// (0x00096212) thumb_sp_fs_scroll_pane

0xc6ad,	// (0x00096db2) list_medium_line_g1_ParamLimits

0xc6ad,	// (0x00096db2) list_medium_line_g1

0xc6f5,	// (0x00096dfa) list_medium_line_t1_ParamLimits

0xc6f5,	// (0x00096dfa) list_medium_line_t1

0xc6ad,	// (0x00096db2) list_medium_line_x2_g1_ParamLimits

0xc6ad,	// (0x00096db2) list_medium_line_x2_g1

0xc6ad,	// (0x00096db2) list_medium_line_x2_g2_ParamLimits

0xc6ad,	// (0x00096db2) list_medium_line_x2_g2

0x0001,

0xf199,	// (0x0009989e) list_medium_line_x2_g_ParamLimits

0xf199,	// (0x0009989e) list_medium_line_x2_g

0xc6f5,	// (0x00096dfa) list_medium_line_x2_t1_ParamLimits

0xc6f5,	// (0x00096dfa) list_medium_line_x2_t1

0xc6ad,	// (0x00096db2) list_medium_line_x3_g1_ParamLimits

0xc6ad,	// (0x00096db2) list_medium_line_x3_g1

0xb24e,	// (0x00095953) list_medium_line_x3_g2_ParamLimits

0xb24e,	// (0x00095953) list_medium_line_x3_g2

0x0001,

0xfbfc,	// (0x0009a301) list_medium_line_x3_g_ParamLimits

0xfbfc,	// (0x0009a301) list_medium_line_x3_g

0xbb16,	// (0x0009621b) list_medium_line_x3_t1_ParamLimits

0xbb16,	// (0x0009621b) list_medium_line_x3_t1

0xbb2a,	// (0x0009622f) thumb_sp_fs_scroll_pane_g1

0xbb33,	// (0x00096238) thumb_sp_fs_scroll_pane_g2

0xbb3c,	// (0x00096241) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfc01,	// (0x0009a306) thumb_sp_fs_scroll_pane_g

0xbb2a,	// (0x0009622f) bg_sp_fs_scroll_pane_g1

0xbb33,	// (0x00096238) bg_sp_fs_scroll_pane_g2

0xbb3c,	// (0x00096241) bg_sp_fs_scroll_pane_g3

0x0002,

0xfc01,	// (0x0009a306) bg_sp_fs_scroll_pane_g

0xc6ad,	// (0x00096db2) list_medium_line_x2_t3_g4_g1_ParamLimits

0xc6ad,	// (0x00096db2) list_medium_line_x2_t3_g4_g1

0xc6ad,	// (0x00096db2) list_medium_line_x2_t3_g4_g2_ParamLimits

0xc6ad,	// (0x00096db2) list_medium_line_x2_t3_g4_g2

0xc6ad,	// (0x00096db2) list_medium_line_x2_t3_g4_g3_ParamLimits

0xc6ad,	// (0x00096db2) list_medium_line_x2_t3_g4_g3

0xc6ad,	// (0x00096db2) list_medium_line_x2_t3_g4_g4_ParamLimits

0xc6ad,	// (0x00096db2) list_medium_line_x2_t3_g4_g4

0x0003,

0xf19e,	// (0x000998a3) list_medium_line_x2_t3_g4_g_ParamLimits

0xf19e,	// (0x000998a3) list_medium_line_x2_t3_g4_g

0xc6f5,	// (0x00096dfa) list_medium_line_x2_t3_g4_t1_ParamLimits

0xc6f5,	// (0x00096dfa) list_medium_line_x2_t3_g4_t1

0xc6f5,	// (0x00096dfa) list_medium_line_x2_t3_g4_t2_ParamLimits

0xc6f5,	// (0x00096dfa) list_medium_line_x2_t3_g4_t2

0xc6f5,	// (0x00096dfa) list_medium_line_x2_t3_g4_t3_ParamLimits

0xc6f5,	// (0x00096dfa) list_medium_line_x2_t3_g4_t3

0x0002,

0xf192,	// (0x00099897) list_medium_line_x2_t3_g4_t_ParamLimits

0xf192,	// (0x00099897) list_medium_line_x2_t3_g4_t

0xc6ad,	// (0x00096db2) list_medium_line_g2_g1_ParamLimits

0xc6ad,	// (0x00096db2) list_medium_line_g2_g1

0xc6ad,	// (0x00096db2) list_medium_line_g2_g2_ParamLimits

0xc6ad,	// (0x00096db2) list_medium_line_g2_g2

0x0001,

0xf199,	// (0x0009989e) list_medium_line_g2_g_ParamLimits

0xf199,	// (0x0009989e) list_medium_line_g2_g

0xc6f5,	// (0x00096dfa) list_medium_line_g2_t1_ParamLimits

0xc6f5,	// (0x00096dfa) list_medium_line_g2_t1

0xc6ad,	// (0x00096db2) list_medium_line_t3_g2_g1_ParamLimits

0xc6ad,	// (0x00096db2) list_medium_line_t3_g2_g1

0xc6ad,	// (0x00096db2) list_medium_line_t3_g2_g2_ParamLimits

0xc6ad,	// (0x00096db2) list_medium_line_t3_g2_g2

0x0001,

0xf199,	// (0x0009989e) list_medium_line_t3_g2_g_ParamLimits

0xf199,	// (0x0009989e) list_medium_line_t3_g2_g

0xc6f5,	// (0x00096dfa) list_medium_line_t3_g2_t1_ParamLimits

0xc6f5,	// (0x00096dfa) list_medium_line_t3_g2_t1

0xc6f5,	// (0x00096dfa) list_medium_line_t3_g2_t2_ParamLimits

0xc6f5,	// (0x00096dfa) list_medium_line_t3_g2_t2

0xc6f5,	// (0x00096dfa) list_medium_line_t3_g2_t3_ParamLimits

0xc6f5,	// (0x00096dfa) list_medium_line_t3_g2_t3

0x0002,

0xf192,	// (0x00099897) list_medium_line_t3_g2_t_ParamLimits

0xf192,	// (0x00099897) list_medium_line_t3_g2_t

0xc6eb,	// (0x00096df0) list_medium_line_right_icon_g1

0xce7c,	// (0x00097581) list_medium_line_right_icon_t1

0xc6ad,	// (0x00096db2) list_medium_line_t2_g1_ParamLimits

0xc6ad,	// (0x00096db2) list_medium_line_t2_g1

0xc6f5,	// (0x00096dfa) list_medium_line_t2_t1_ParamLimits

0xc6f5,	// (0x00096dfa) list_medium_line_t2_t1

0xc6f5,	// (0x00096dfa) list_medium_line_t2_t2_ParamLimits

0xc6f5,	// (0x00096dfa) list_medium_line_t2_t2

0x0001,

0xf20e,	// (0x00099913) list_medium_line_t2_t_ParamLimits

0xf20e,	// (0x00099913) list_medium_line_t2_t

0xc6ad,	// (0x00096db2) list_medium_line_t3_g1_ParamLimits

0xc6ad,	// (0x00096db2) list_medium_line_t3_g1

0xc6f5,	// (0x00096dfa) list_medium_line_t3_t1_ParamLimits

0xc6f5,	// (0x00096dfa) list_medium_line_t3_t1

0xc6f5,	// (0x00096dfa) list_medium_line_t3_t2_ParamLimits

0xc6f5,	// (0x00096dfa) list_medium_line_t3_t2

0xc6f5,	// (0x00096dfa) list_medium_line_t3_t3_ParamLimits

0xc6f5,	// (0x00096dfa) list_medium_line_t3_t3

0x0002,

0xf192,	// (0x00099897) list_medium_line_t3_t_ParamLimits

0xf192,	// (0x00099897) list_medium_line_t3_t

0xc6ad,	// (0x00096db2) list_medium_line_g3_g1_ParamLimits

0xc6ad,	// (0x00096db2) list_medium_line_g3_g1

0xc6ad,	// (0x00096db2) list_medium_line_g3_g2_ParamLimits

0xc6ad,	// (0x00096db2) list_medium_line_g3_g2

0xc6ad,	// (0x00096db2) list_medium_line_g3_g3_ParamLimits

0xc6ad,	// (0x00096db2) list_medium_line_g3_g3

0x0002,

0xf18b,	// (0x00099890) list_medium_line_g3_g_ParamLimits

0xf18b,	// (0x00099890) list_medium_line_g3_g

0xc6f5,	// (0x00096dfa) list_medium_line_g3_t1_ParamLimits

0xc6f5,	// (0x00096dfa) list_medium_line_g3_t1

0xc6ad,	// (0x00096db2) list_medium_line_t2_g3_g1_ParamLimits

0xc6ad,	// (0x00096db2) list_medium_line_t2_g3_g1

0xc6ad,	// (0x00096db2) list_medium_line_t2_g3_g2_ParamLimits

0xc6ad,	// (0x00096db2) list_medium_line_t2_g3_g2

0xc6ad,	// (0x00096db2) list_medium_line_t2_g3_g3_ParamLimits

0xc6ad,	// (0x00096db2) list_medium_line_t2_g3_g3

0x0002,

0xf18b,	// (0x00099890) list_medium_line_t2_g3_g_ParamLimits

0xf18b,	// (0x00099890) list_medium_line_t2_g3_g

0xc6f5,	// (0x00096dfa) list_medium_line_t2_g3_t1_ParamLimits

0xc6f5,	// (0x00096dfa) list_medium_line_t2_g3_t1

0xc6f5,	// (0x00096dfa) list_medium_line_t2_g3_t2_ParamLimits

0xc6f5,	// (0x00096dfa) list_medium_line_t2_g3_t2

0x0001,

0xf20e,	// (0x00099913) list_medium_line_t2_g3_t_ParamLimits

0xf20e,	// (0x00099913) list_medium_line_t2_g3_t

0xc6ad,	// (0x00096db2) list_medium_line_t3_g3_g1_ParamLimits

0xc6ad,	// (0x00096db2) list_medium_line_t3_g3_g1

0xc6ad,	// (0x00096db2) list_medium_line_t3_g3_g2_ParamLimits

0xc6ad,	// (0x00096db2) list_medium_line_t3_g3_g2

0xc6ad,	// (0x00096db2) list_medium_line_t3_g3_g3_ParamLimits

0xc6ad,	// (0x00096db2) list_medium_line_t3_g3_g3

0x0002,

0xf18b,	// (0x00099890) list_medium_line_t3_g3_g_ParamLimits

0xf18b,	// (0x00099890) list_medium_line_t3_g3_g

0xc6f5,	// (0x00096dfa) list_medium_line_t3_g3_t1_ParamLimits

0xc6f5,	// (0x00096dfa) list_medium_line_t3_g3_t1

0xc6f5,	// (0x00096dfa) list_medium_line_t3_g3_t2_ParamLimits

0xc6f5,	// (0x00096dfa) list_medium_line_t3_g3_t2

0xc6f5,	// (0x00096dfa) list_medium_line_t3_g3_t3_ParamLimits

0xc6f5,	// (0x00096dfa) list_medium_line_t3_g3_t3

0x0002,

0xf192,	// (0x00099897) list_medium_line_t3_g3_t_ParamLimits

0xf192,	// (0x00099897) list_medium_line_t3_g3_t

0xc6eb,	// (0x00096df0) list_medium_line_right_iconx2_g1

0xc6eb,	// (0x00096df0) list_medium_line_right_iconx2_g2

0x0001,

0xf08c,	// (0x00099791) list_medium_line_right_iconx2_g

0xce7c,	// (0x00097581) list_medium_line_right_iconx2_t1

0xc6eb,	// (0x00096df0) list_medium_line_t2_right_iconx2_g1

0xc6eb,	// (0x00096df0) list_medium_line_t2_right_iconx2_g2

0x0001,

0xf08c,	// (0x00099791) list_medium_line_t2_right_iconx2_g

0xce7c,	// (0x00097581) list_medium_line_t2_right_iconx2_t1

0xce7c,	// (0x00097581) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfbc8,	// (0x0009a2cd) list_medium_line_t2_right_iconx2_t

0xce7c,	// (0x00097581) list_medium_line_x4_t4_t1

0xce7c,	// (0x00097581) list_medium_line_x4_t4_t2

0xce7c,	// (0x00097581) list_medium_line_x4_t4_t3

0xce7c,	// (0x00097581) list_medium_line_x4_t4_t4

0x0003,

0xf260,	// (0x00099965) list_medium_line_x4_t4_t

0x93ea,	// (0x00093aef) tport_appsw_pane_ParamLimits

0x93ea,	// (0x00093aef) tport_appsw_pane

0x93f8,	// (0x00093afd) tport_contact_pane_ParamLimits

0x93f8,	// (0x00093afd) tport_contact_pane

0x9408,	// (0x00093b0d) tport_listscroll_pane_ParamLimits

0x9408,	// (0x00093b0d) tport_listscroll_pane

0x9418,	// (0x00093b1d) cell_tport_appsw_pane_ParamLimits

0x9418,	// (0x00093b1d) cell_tport_appsw_pane

0xc6bb,	// (0x00096dc0) tport_appsw_pane_g1_ParamLimits

0xc6bb,	// (0x00096dc0) tport_appsw_pane_g1

0x9445,	// (0x00093b4a) tport_contact_pane_g1

0x944e,	// (0x00093b53) tport_contact_pane_t1

0x945c,	// (0x00093b61) tport_contact_pane_t2

0x0001,

0xfc08,	// (0x0009a30d) tport_contact_pane_t

0xbb45,	// (0x0009624a) list_tport_pane

0xbb4e,	// (0x00096253) scroll_pane_cp_030

0x9472,	// (0x00093b77) cell_tport_appsw_pane_g1

0x9482,	// (0x00093b87) cell_tport_appsw_pane_t1

0x9490,	// (0x00093b95) grid_highlight_pane_cp019

0x9498,	// (0x00093b9d) list_tport_double_graphic_pane_ParamLimits

0x9498,	// (0x00093b9d) list_tport_double_graphic_pane

0x153a,	// (0x0008bc3f) list_highlight_pane_cp023_ParamLimits

0x153a,	// (0x0008bc3f) list_highlight_pane_cp023

0x94a5,	// (0x00093baa) list_tport_double_graphic_pane_g1_ParamLimits

0x94a5,	// (0x00093baa) list_tport_double_graphic_pane_g1

0x94b2,	// (0x00093bb7) list_tport_double_graphic_pane_t1_ParamLimits

0x94b2,	// (0x00093bb7) list_tport_double_graphic_pane_t1

0x94c7,	// (0x00093bcc) list_tport_double_graphic_pane_t2_ParamLimits

0x94c7,	// (0x00093bcc) list_tport_double_graphic_pane_t2

0x0001,

0xfc14,	// (0x0009a319) list_tport_double_graphic_pane_t_ParamLimits

0xfc14,	// (0x0009a319) list_tport_double_graphic_pane_t

0x0a98,	// (0x0008b19d) main_cale_note_pane

0x72a6,	// (0x000919ab) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x72a6,	// (0x000919ab) cell_vitu2_function_top_wide_pane_cp01

0x8cf1,	// (0x000933f6) wait_bar_pane_cp05_ParamLimits

0x153a,	// (0x0008bc3f) listscroll_cmail_pane

0xbb5f,	// (0x00096264) list_cmail_pane

0x94d9,	// (0x00093bde) list_cmail_body_pane

0x94f3,	// (0x00093bf8) list_single_cmail_header_caption_pane

0x9513,	// (0x00093c18) list_single_cmail_header_detail_pane_ParamLimits

0x9513,	// (0x00093c18) list_single_cmail_header_detail_pane

0xbb76,	// (0x0009627b) list_single_cmail_header_caption_pane_t1

0x9549,	// (0x00093c4e) list_single_cmail_header_detail_pane_g1_ParamLimits

0x9549,	// (0x00093c4e) list_single_cmail_header_detail_pane_g1

0x1520,	// (0x0008bc25) list_single_cmail_header_detail_pane_g2_ParamLimits

0x1520,	// (0x0008bc25) list_single_cmail_header_detail_pane_g2

0x0002,

0xfc19,	// (0x0009a31e) list_single_cmail_header_detail_pane_g_ParamLimits

0xfc19,	// (0x0009a31e) list_single_cmail_header_detail_pane_g

0x9561,	// (0x00093c66) list_single_cmail_header_detail_pane_t1_ParamLimits

0x9561,	// (0x00093c66) list_single_cmail_header_detail_pane_t1

0x959d,	// (0x00093ca2) list_single_cmail_header_editor_pane_bg_ParamLimits

0x959d,	// (0x00093ca2) list_single_cmail_header_editor_pane_bg

0xb81b,	// (0x00095f20) list_cmail_body_pane_g1

0xbb9a,	// (0x0009629f) list_cmail_body_pane_t1

0x0d21,	// (0x0008b426) list_single_cmail_header_editor_pane_bg_g1

0xcb82,	// (0x00097287) list_single_cmail_header_editor_pane_bg_g1_copy1

0x0d31,	// (0x0008b436) list_single_cmail_header_editor_pane_bg_g1_copy2

0x0d29,	// (0x0008b42e) list_single_cmail_header_editor_pane_bg_g1_copy3

0x0f9f,	// (0x0008b6a4) list_single_cmail_header_editor_pane_bg_g1_copy4

0x0d51,	// (0x0008b456) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x0d41,	// (0x0008b446) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x0d49,	// (0x0008b44e) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xcb62,	// (0x00097267) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x95b4,	// (0x00093cb9) calenote_gesture_pane_ParamLimits

0x95b4,	// (0x00093cb9) calenote_gesture_pane

0x95ce,	// (0x00093cd3) calenote_window_pane_ParamLimits

0x95ce,	// (0x00093cd3) calenote_window_pane

0xbba8,	// (0x000962ad) popup_note_window_cp01

0x95e6,	// (0x00093ceb) calenote_swipe_1_pane_ParamLimits

0x95e6,	// (0x00093ceb) calenote_swipe_1_pane

0x9095,	// (0x0009379a) calenote_swipe_2_pane_ParamLimits

0x9095,	// (0x0009379a) calenote_swipe_2_pane

0xb9f1,	// (0x000960f6) calenote_swipe_1_pane_g1_ParamLimits

0xb9f1,	// (0x000960f6) calenote_swipe_1_pane_g1

0xbbba,	// (0x000962bf) calenote_swipe_1_pane_g2_ParamLimits

0xbbba,	// (0x000962bf) calenote_swipe_1_pane_g2

0x0001,

0xfc25,	// (0x0009a32a) calenote_swipe_1_pane_g_ParamLimits

0xfc25,	// (0x0009a32a) calenote_swipe_1_pane_g

0xbbc6,	// (0x000962cb) calenote_swipe_1_pane_t1_ParamLimits

0xbbc6,	// (0x000962cb) calenote_swipe_1_pane_t1

0xb9f1,	// (0x000960f6) calenote_swipe_2_pane_g1_ParamLimits

0xb9f1,	// (0x000960f6) calenote_swipe_2_pane_g1

0xbbe5,	// (0x000962ea) calenote_swipe_2_pane_g2_ParamLimits

0xbbe5,	// (0x000962ea) calenote_swipe_2_pane_g2

0x0001,

0xfc2a,	// (0x0009a32f) calenote_swipe_2_pane_g_ParamLimits

0xfc2a,	// (0x0009a32f) calenote_swipe_2_pane_g

0xbbf1,	// (0x000962f6) calenote_swipe_2_pane_t1_ParamLimits

0xbbf1,	// (0x000962f6) calenote_swipe_2_pane_t1

0x0a98,	// (0x0008b19d) main_mup_navstr_pane

0x61dd,	// (0x000908e2) main_mup3_pane_t7_ParamLimits

0x61dd,	// (0x000908e2) main_mup3_pane_t7

0x695d,	// (0x00091062) main_mp4_pane_g6_ParamLimits

0x695d,	// (0x00091062) main_mp4_pane_g6

0x6cd3,	// (0x000913d8) main_image3_pane_t4_ParamLimits

0x6cd3,	// (0x000913d8) main_image3_pane_t4

0x95f9,	// (0x00093cfe) popup_navstr_preview_pane_ParamLimits

0x95f9,	// (0x00093cfe) popup_navstr_preview_pane

0x9605,	// (0x00093d0a) scroll_navstr_pane_ParamLimits

0x9605,	// (0x00093d0a) scroll_navstr_pane

0x0a98,	// (0x0008b19d) bg_popup_preview_window_pane_cp04

0xbc18,	// (0x0009631d) popup_navstr_preview_pane_t1

0x9611,	// (0x00093d16) scroll_navstr_pane_g1_ParamLimits

0x9611,	// (0x00093d16) scroll_navstr_pane_g1

0x961e,	// (0x00093d23) scroll_navstr_pane_t1_ParamLimits

0x961e,	// (0x00093d23) scroll_navstr_pane_t1

0xbbb1,	// (0x000962b6) bg_button_pane_cp014

0xbbb1,	// (0x000962b6) bg_button_pane_cp030

0x8f65,	// (0x0009366a) list_double_fisheye_pane_g4_ParamLimits

0x8f65,	// (0x0009366a) list_double_fisheye_pane_g4

0x8f71,	// (0x00093676) list_double_fisheye_pane_g5_ParamLimits

0x8f71,	// (0x00093676) list_double_fisheye_pane_g5

0x1823,	// (0x0008bf28) sp_fs_scroll_pane_cp03

0xbabf,	// (0x000961c4) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xbacb,	// (0x000961d0) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfbcd,	// (0x0009a2d2) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x9194,	// (0x00093899) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xbb6e,	// (0x00096273) sp_fs_scroll_pane_cp02

0xc8bd,	// (0x00096fc2) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xc8bd,	// (0x00096fc2) popup_sp_fs_calendar_preview_list_single_pane

0x0a98,	// (0x0008b19d) main_cam6_pano_pane

0x55c8,	// (0x0008fccd) main_mup3_pane_ParamLimits

0x0a98,	// (0x0008b19d) main_phacti_pane

0x8bc4,	// (0x000932c9) bg_button_pane_cp11

0x8bdc,	// (0x000932e1) main_mobtv_info_pane_g2_ParamLimits

0x8bdc,	// (0x000932e1) main_mobtv_info_pane_g2

0x0001,

0xfb2d,	// (0x0009a232) main_mobtv_info_pane_g_ParamLimits

0xfb2d,	// (0x0009a232) main_mobtv_info_pane_g

0xc709,	// (0x00096e0e) sc_clock_pane_t5_ParamLimits

0xc709,	// (0x00096e0e) sc_clock_pane_t5

0xd353,	// (0x00097a58) main_radioblah_pane_g1_ParamLimits

0xd33f,	// (0x00097a44) main_radioblah_pane_t3_ParamLimits

0xd33f,	// (0x00097a44) main_radioblah_pane_t3

0xd33f,	// (0x00097a44) main_radioblah_pane_t4_ParamLimits

0xd33f,	// (0x00097a44) main_radioblah_pane_t4

0xc69f,	// (0x00096da4) main_radioblah_text_pane_ParamLimits

0xc69f,	// (0x00096da4) main_radioblah_text_pane

0xb928,	// (0x0009602d) main_radioblah_info_pane_g1_ParamLimits

0xb96c,	// (0x00096071) main_radioblah_info_pane_t4_ParamLimits

0xb96c,	// (0x00096071) main_radioblah_info_pane_t4

0x153a,	// (0x0008bc3f) main_sp_fs_calendar_pane

0x9630,	// (0x00093d35) main_phacti_pane_g1

0x9638,	// (0x00093d3d) phacti_note_pane_ParamLimits

0x9638,	// (0x00093d3d) phacti_note_pane

0xbc2f,	// (0x00096334) phacti_term_pane_ParamLimits

0xbc2f,	// (0x00096334) phacti_term_pane

0xbc44,	// (0x00096349) phacti_note_pane_t1_ParamLimits

0xbc44,	// (0x00096349) phacti_note_pane_t1

0x0362,	// (0x0008aa67) phacti_term_pane_g1

0x036a,	// (0x0008aa6f) phacti_term_pane_t1_ParamLimits

0x036a,	// (0x0008aa6f) phacti_term_pane_t1

0xbc5b,	// (0x00096360) popup_sp_fs_calendar_preview_list_single_pane_g1

0xbc63,	// (0x00096368) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfc34,	// (0x0009a339) popup_sp_fs_calendar_preview_list_single_pane_g

0xbc6b,	// (0x00096370) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xbc6b,	// (0x00096370) popup_sp_fs_calendar_preview_list_single_pane_t1

0xbc81,	// (0x00096386) aid_popup_sp_fs_bg_corner_pane

0xc6eb,	// (0x00096df0) popup_sp_fs_calendar_preview_bg_pane_g1

0x0a98,	// (0x0008b19d) popup_sp_fs_calendar_preview_bg_pane

0xbc89,	// (0x0009638e) popup_sp_fs_calendar_preview_list_pane

0xbc91,	// (0x00096396) bg_main_sp_fs_cale_pane_ParamLimits

0xbc91,	// (0x00096396) bg_main_sp_fs_cale_pane

0xbca9,	// (0x000963ae) listscroll_cale_mrui_pane_ParamLimits

0xbca9,	// (0x000963ae) listscroll_cale_mrui_pane

0xebcf,	// (0x000992d4) listscroll_sp_fs_schedule_track_pane

0x039d,	// (0x0008aaa2) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x039d,	// (0x0008aaa2) main_sp_fs_ctrlbar_pane_cp01

0xebcf,	// (0x000992d4) main_sp_fs_ribbon_pane

0x03b3,	// (0x0008aab8) popup_sp_fs_cale_preview_window

0xb242,	// (0x00095947) list_single_sp_fs_schedule_track_pane_ParamLimits

0xb242,	// (0x00095947) list_single_sp_fs_schedule_track_pane

0xb242,	// (0x00095947) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xb242,	// (0x00095947) bg_sp_fs_highlight_list_pane_cp03

0x5ebd,	// (0x000905c2) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x5ebd,	// (0x000905c2) list_single_sp_fs_schedule_track_pane_g1

0x5ebd,	// (0x000905c2) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x5ebd,	// (0x000905c2) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfc39,	// (0x0009a33e) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfc39,	// (0x0009a33e) list_single_sp_fs_schedule_track_pane_g

0x964e,	// (0x00093d53) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x964e,	// (0x00093d53) list_single_sp_fs_schedule_track_pane_t1

0x0be0,	// (0x0008b2e5) sp_fs_schedule_track_pane_ParamLimits

0x0be0,	// (0x0008b2e5) sp_fs_schedule_track_pane

0xebd7,	// (0x000992dc) sp_fs_schedule_track_pane_g1

0xebd7,	// (0x000992dc) sp_fs_schedule_track_pane_g2

0xebd7,	// (0x000992dc) sp_fs_schedule_track_pane_g3

0xebd7,	// (0x000992dc) sp_fs_schedule_track_pane_g4

0xebd7,	// (0x000992dc) sp_fs_schedule_track_pane_g5

0x0004,

0xfc3e,	// (0x0009a343) sp_fs_schedule_track_pane_g

0xebd7,	// (0x000992dc) bg_sp_fs_schedule_viewer_highlight_g1

0xebd7,	// (0x000992dc) bg_sp_fs_schedule_viewer_highlight_g2

0xebd7,	// (0x000992dc) bg_sp_fs_schedule_viewer_highlight_g3

0xebd7,	// (0x000992dc) bg_sp_fs_schedule_viewer_highlight_g4

0xebd7,	// (0x000992dc) bg_sp_fs_schedule_viewer_highlight_g5

0xebd7,	// (0x000992dc) bg_sp_fs_schedule_viewer_highlight_g6

0xebd7,	// (0x000992dc) bg_sp_fs_schedule_viewer_highlight_g7

0xebd7,	// (0x000992dc) bg_sp_fs_schedule_viewer_highlight_g8

0xebd7,	// (0x000992dc) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfc49,	// (0x0009a34e) bg_sp_fs_schedule_viewer_highlight_g

0xebcf,	// (0x000992d4) bg_main_sp_fs_ribbon_pane

0xebd7,	// (0x000992dc) main_sp_fs_ribbon_pane_g1

0xbcc1,	// (0x000963c6) main_sp_fs_ribbon_pane_t1

0xbcc1,	// (0x000963c6) main_sp_fs_ribbon_pane_t2

0xbcc1,	// (0x000963c6) main_sp_fs_ribbon_pane_t3

0x0002,

0xfc5c,	// (0x0009a361) main_sp_fs_ribbon_pane_t

0xebcf,	// (0x000992d4) main_sp_fs_ribbon_scheduler_pane

0xebd7,	// (0x000992dc) bg_main_sp_fs_ribbon_pane_g1

0xebd7,	// (0x000992dc) bg_main_sp_fs_ribbon_pane_g2

0xebd7,	// (0x000992dc) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xf6a5,	// (0x00099daa) bg_main_sp_fs_ribbon_pane_g

0xebd7,	// (0x000992dc) main_sp_fs_ribbon_scheduler_pane_g1

0xebd7,	// (0x000992dc) main_sp_fs_ribbon_scheduler_pane_g2

0xebd7,	// (0x000992dc) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xf6a5,	// (0x00099daa) main_sp_fs_ribbon_scheduler_pane_g

0xbccf,	// (0x000963d4) list_cale_mrui_pane

0x9660,	// (0x00093d65) sp_fs_scroll_pane_cp07_ParamLimits

0x9660,	// (0x00093d65) sp_fs_scroll_pane_cp07

0xb242,	// (0x00095947) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xb242,	// (0x00095947) bg_sp_fs_schedule_viewer_highlight

0xebcf,	// (0x000992d4) list_single_sp_fs_schedule_track_pane_cp01

0xebcf,	// (0x000992d4) list_sp_fs_schedule_track_pane

0xbcdc,	// (0x000963e1) sp_fs_scroll_pane_cp06_ParamLimits

0xbcdc,	// (0x000963e1) sp_fs_scroll_pane_cp06

0xc6eb,	// (0x00096df0) bgmain_sp_fs_calendar_pane_g1

0x967c,	// (0x00093d81) list_single_cale_mrui_pane_ParamLimits

0x967c,	// (0x00093d81) list_single_cale_mrui_pane

0x03c5,	// (0x0008aaca) list_single_cale_mrui_row_pane_ParamLimits

0x03c5,	// (0x0008aaca) list_single_cale_mrui_row_pane

0x03d2,	// (0x0008aad7) list_single_cale_mrui_row_pane_g1_ParamLimits

0x03d2,	// (0x0008aad7) list_single_cale_mrui_row_pane_g1

0x040a,	// (0x0008ab0f) list_single_cale_mrui_row_pane_t1_ParamLimits

0x040a,	// (0x0008ab0f) list_single_cale_mrui_row_pane_t1

0x969f,	// (0x00093da4) list_single_cale_mrui_row_pane_t2_ParamLimits

0x969f,	// (0x00093da4) list_single_cale_mrui_row_pane_t2

0x041c,	// (0x0008ab21) list_single_cale_mrui_row_pane_t3_ParamLimits

0x041c,	// (0x0008ab21) list_single_cale_mrui_row_pane_t3

0x044b,	// (0x0008ab50) list_single_cale_mrui_row_pane_t4_ParamLimits

0x044b,	// (0x0008ab50) list_single_cale_mrui_row_pane_t4

0x0003,

0xfc6a,	// (0x0009a36f) list_single_cale_mrui_row_pane_t_ParamLimits

0xfc6a,	// (0x0009a36f) list_single_cale_mrui_row_pane_t

0x9705,	// (0x00093e0a) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x9705,	// (0x00093e0a) list_single_cmail_header_editor_pane_bg_cp01

0x972f,	// (0x00093e34) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x972f,	// (0x00093e34) list_single_cmail_header_editor_pane_bg_cp02

0xbcfd,	// (0x00096402) main_radioblah_text_pane_t1_ParamLimits

0xbcfd,	// (0x00096402) main_radioblah_text_pane_t1

0xbd17,	// (0x0009641c) cam6_indi_pane_cp01

0xbd1f,	// (0x00096424) cam6_mode_pane_cp01

0xbd27,	// (0x0009642c) cam6_pano_pane

0xbd30,	// (0x00096435) cam6_zoom_pane_cp01

0xbd3a,	// (0x0009643f) cam6_pano_image_pane

0xbd43,	// (0x00096448) cam6_pano_pane_g1

0xb81b,	// (0x00095f20) cam6_pano_pane_g2

0xbd4c,	// (0x00096451) cam6_pano_pane_g3

0xbd55,	// (0x0009645a) cam6_pano_pane_g4

0xee99,	// (0x0009959e) cam6_pano_pane_g5

0xbd5e,	// (0x00096463) cam6_pano_pane_g6

0xbd66,	// (0x0009646b) cam6_pano_pane_g7

0xbd6e,	// (0x00096473) cam6_pano_pane_g8

0xbd77,	// (0x0009647c) cam6_pano_pane_g9

0x0008,

0xfc73,	// (0x0009a378) cam6_pano_pane_g

0x0a98,	// (0x0008b19d) main_browser_tag_pane

0xbc10,	// (0x00096315) grid_navstr_albumart_pane

0xbd82,	// (0x00096487) cell_navstr_albumart_pane_ParamLimits

0xbd82,	// (0x00096487) cell_navstr_albumart_pane

0xbd9e,	// (0x000964a3) cell_navstr_albumart_pane_g1

0xbda6,	// (0x000964ab) cell_navstr_albumart_pane_g2

0xbdae,	// (0x000964b3) cell_navstr_albumart_pane_g3

0xbdb6,	// (0x000964bb) cell_navstr_albumart_pane_g4

0x0003,

0xfc86,	// (0x0009a38b) cell_navstr_albumart_pane_g

0x974d,	// (0x00093e52) bt_list_pane_ParamLimits

0x974d,	// (0x00093e52) bt_list_pane

0x9766,	// (0x00093e6b) bt_list_pane_t1

0x9775,	// (0x00093e7a) bt_list_pane_t2

0x0001,

0xfc8f,	// (0x0009a394) bt_list_pane_t

0x0a98,	// (0x0008b19d) main_cale_prevew_pane

0x9784,	// (0x00093e89) popup_cale_preview_window_ParamLimits

0x9784,	// (0x00093e89) popup_cale_preview_window

0x153a,	// (0x0008bc3f) bg_popup_preview_window_pane_cp05_ParamLimits

0x153a,	// (0x0008bc3f) bg_popup_preview_window_pane_cp05

0xbdbe,	// (0x000964c3) list_cale_preview_pane_ParamLimits

0xbdbe,	// (0x000964c3) list_cale_preview_pane

0x97a1,	// (0x00093ea6) list_double_cale_preview_pane_ParamLimits

0x97a1,	// (0x00093ea6) list_double_cale_preview_pane

0x97b5,	// (0x00093eba) list_single_cale_preview_pane_ParamLimits

0x97b5,	// (0x00093eba) list_single_cale_preview_pane

0x97cd,	// (0x00093ed2) list_single_cale_preview_pane_g1

0x97d5,	// (0x00093eda) list_single_cale_preview_pane_t1_ParamLimits

0x97d5,	// (0x00093eda) list_single_cale_preview_pane_t1

0x97ea,	// (0x00093eef) list_double_cale_preview_pane_g1

0x97f2,	// (0x00093ef7) list_double_cale_preview_pane_t1_ParamLimits

0x97f2,	// (0x00093ef7) list_double_cale_preview_pane_t1

0x9807,	// (0x00093f0c) list_double_cale_preview_pane_t2_ParamLimits

0x9807,	// (0x00093f0c) list_double_cale_preview_pane_t2

0x0001,

0xfc94,	// (0x0009a399) list_double_cale_preview_pane_t_ParamLimits

0xfc94,	// (0x0009a399) list_double_cale_preview_pane_t

0x0a98,	// (0x0008b19d) main_ezdial_pane

0x153a,	// (0x0008bc3f) main_sp_fs_email_pane_ParamLimits

0x90f5,	// (0x000937fa) cmail_ddmenu_btn01_pane_ParamLimits

0x90f5,	// (0x000937fa) cmail_ddmenu_btn01_pane

0x9112,	// (0x00093817) cmail_ddmenu_btn02_pane_ParamLimits

0x9112,	// (0x00093817) cmail_ddmenu_btn02_pane

0x9130,	// (0x00093835) cmail_ddmenu_btn03_pane_ParamLimits

0x9130,	// (0x00093835) cmail_ddmenu_btn03_pane

0x91d1,	// (0x000938d6) main_sp_fs_ctrlbar_pane_ParamLimits

0x91eb,	// (0x000938f0) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x94d9,	// (0x00093bde) list_cmail_body_pane_ParamLimits

0xbb84,	// (0x00096289) bg_button_pane_cp12

0xbb8d,	// (0x00096292) list_single_cmail_header_detail_pane_g3_ParamLimits

0xbb8d,	// (0x00096292) list_single_cmail_header_detail_pane_g3

0x033e,	// (0x0008aa43) list_single_cmail_header_detail_pane_t2_ParamLimits

0x033e,	// (0x0008aa43) list_single_cmail_header_detail_pane_t2

0x0001,

0xfc20,	// (0x0009a325) list_single_cmail_header_detail_pane_t_ParamLimits

0xfc20,	// (0x0009a325) list_single_cmail_header_detail_pane_t

0x037f,	// (0x0008aa84) phacti_term_pane_t2_ParamLimits

0x037f,	// (0x0008aa84) phacti_term_pane_t2

0x0001,

0xfc2f,	// (0x0009a334) phacti_term_pane_t_ParamLimits

0xfc2f,	// (0x0009a334) phacti_term_pane_t

0xbdca,	// (0x000964cf) aid_size_list_single_double

0x981f,	// (0x00093f24) popup_ezdial_listscroll_window

0xbdd6,	// (0x000964db) popup_number_entry_window_cp01

0xc958,	// (0x0009705d) bg_popup_call_pane_cp09

0xbde3,	// (0x000964e8) ezdial_list_pane

0xbdeb,	// (0x000964f0) scroll_pane_cp23

0xe4dd,	// (0x00098be2) bg_button_pane_cp028_ParamLimits

0xe4dd,	// (0x00098be2) bg_button_pane_cp028

0x983b,	// (0x00093f40) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x983b,	// (0x00093f40) cmail_ddmenu_btn01_pane_g1

0x984d,	// (0x00093f52) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x984d,	// (0x00093f52) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfc99,	// (0x0009a39e) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfc99,	// (0x0009a39e) cmail_ddmenu_btn01_pane_g

0xbdf3,	// (0x000964f8) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xbdf3,	// (0x000964f8) cmail_ddmenu_btn01_pane_t1

0xd331,	// (0x00097a36) bg_button_pane_cp029_ParamLimits

0xd331,	// (0x00097a36) bg_button_pane_cp029

0x9859,	// (0x00093f5e) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x9859,	// (0x00093f5e) cmail_ddmenu_btn02_pane_g1

0x9871,	// (0x00093f76) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x9871,	// (0x00093f76) cmail_ddmenu_btn02_pane_t1

0xc69f,	// (0x00096da4) bg_button_pane_cp031_ParamLimits

0xc69f,	// (0x00096da4) bg_button_pane_cp031

0x9859,	// (0x00093f5e) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x9859,	// (0x00093f5e) cmail_ddmenu_btn03_pane_g1

0x9871,	// (0x00093f76) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x9871,	// (0x00093f76) cmail_ddmenu_btn03_pane_t1

0xc6f5,	// (0x00096dfa) cell_dialer2_keypad_pane_t1_ParamLimits

0xec89,	// (0x0009938e) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xec89,	// (0x0009938e) cell_dialer2_keypad_pane_t1_copy1

0x89f1,	// (0x000930f6) ncimui_group_button_pane

0x153a,	// (0x0008bc3f) main_sp_fs_calendar_pane_ParamLimits

0x94f3,	// (0x00093bf8) list_single_cmail_header_caption_pane_ParamLimits

0x0394,	// (0x0008aa99) aid_recal_txt_sm_pane

0x0a98,	// (0x0008b19d) mian_recal_day_pane

0x03b3,	// (0x0008aab8) popup_sp_fs_cale_preview_window_ParamLimits

0xbe09,	// (0x0009650e) list_recal_day_pane

0x0498,	// (0x0008ab9d) list_single_recal_day_pane_ParamLimits

0x0498,	// (0x0008ab9d) list_single_recal_day_pane

0xbe30,	// (0x00096535) list_single_recal_day_pane_g1_ParamLimits

0xbe30,	// (0x00096535) list_single_recal_day_pane_g1

0x04aa,	// (0x0008abaf) list_single_recal_day_pane_g2_ParamLimits

0x04aa,	// (0x0008abaf) list_single_recal_day_pane_g2

0x04b6,	// (0x0008abbb) list_single_recal_day_pane_g3_ParamLimits

0x04b6,	// (0x0008abbb) list_single_recal_day_pane_g3

0x9895,	// (0x00093f9a) list_single_recal_day_pane_g4_ParamLimits

0x9895,	// (0x00093f9a) list_single_recal_day_pane_g4

0x04c2,	// (0x0008abc7) list_single_recal_day_pane_g5_ParamLimits

0x04c2,	// (0x0008abc7) list_single_recal_day_pane_g5

0x04ce,	// (0x0008abd3) list_single_recal_day_pane_g6_ParamLimits

0x04ce,	// (0x0008abd3) list_single_recal_day_pane_g6

0x0004,

0xfca8,	// (0x0009a3ad) list_single_recal_day_pane_g_ParamLimits

0xfca8,	// (0x0009a3ad) list_single_recal_day_pane_g

0x04e2,	// (0x0008abe7) list_single_recal_day_pane_t1

0x04f4,	// (0x0008abf9) list_single_recal_day_pane_t2

0x0001,

0xfcb3,	// (0x0009a3b8) list_single_recal_day_pane_t

0x98ad,	// (0x00093fb2) ncimui_query_button_pane_ParamLimits

0x98ad,	// (0x00093fb2) ncimui_query_button_pane

0x98bd,	// (0x00093fc2) ncimui_query_button_pane_t1_ParamLimits

0x98bd,	// (0x00093fc2) ncimui_query_button_pane_t1

0xbe3c,	// (0x00096541) ncimui_query_button_pane_t2_ParamLimits

0xbe3c,	// (0x00096541) ncimui_query_button_pane_t2

0x0001,

0xfcb8,	// (0x0009a3bd) ncimui_query_button_pane_t_ParamLimits

0xfcb8,	// (0x0009a3bd) ncimui_query_button_pane_t

0x98d0,	// (0x00093fd5) query_button_pane_ParamLimits

0x98d0,	// (0x00093fd5) query_button_pane

0x0a98,	// (0x0008b19d) bg_button_pane_cp0028

0xbe4f,	// (0x00096554) query_button_pane_t1

0x55e4,	// (0x0008fce9) main_tport_pane_ParamLimits

0x93c0,	// (0x00093ac5) bg_popup_window_pane_cp01_ParamLimits

0x93c0,	// (0x00093ac5) bg_popup_window_pane_cp01

0x93ce,	// (0x00093ad3) heading_pane_cp08_ParamLimits

0x93ce,	// (0x00093ad3) heading_pane_cp08

0x93dc,	// (0x00093ae1) heading_pane_cp07_ParamLimits

0x93dc,	// (0x00093ae1) heading_pane_cp07

0x9472,	// (0x00093b77) cell_tport_appsw_pane_g2

0x0002,

0xfc0d,	// (0x0009a312) cell_tport_appsw_pane_g

0x4d1b,	// (0x0008f420) input_candi_list_open_g1

0xcd26,	// (0x0009742b) list_cale_time_pane_g6_ParamLimits

0xcd26,	// (0x0009742b) list_cale_time_pane_g6

0x5b3c,	// (0x00090241) aid_size_touch_calib_1_ParamLimits

0x5b3c,	// (0x00090241) aid_size_touch_calib_1

0x5b48,	// (0x0009024d) aid_size_touch_calib_2_ParamLimits

0x5b48,	// (0x0009024d) aid_size_touch_calib_2

0x5b56,	// (0x0009025b) aid_size_touch_calib_3_ParamLimits

0x5b56,	// (0x0009025b) aid_size_touch_calib_3

0x5b66,	// (0x0009026b) aid_size_touch_calib_4_ParamLimits

0x5b66,	// (0x0009026b) aid_size_touch_calib_4

0x5b74,	// (0x00090279) main_touch_calib_button_group_pane_ParamLimits

0x5b74,	// (0x00090279) main_touch_calib_button_group_pane

0x5b82,	// (0x00090287) main_touch_calib_pane_g1_ParamLimits

0x5b8e,	// (0x00090293) main_touch_calib_pane_g2_ParamLimits

0x5b9a,	// (0x0009029f) main_touch_calib_pane_g3_ParamLimits

0x5ba6,	// (0x000902ab) main_touch_calib_pane_g4_ParamLimits

0xf653,	// (0x00099d58) main_touch_calib_pane_g_ParamLimits

0x5bb2,	// (0x000902b7) main_touch_calib_pane_t1_ParamLimits

0x5bc9,	// (0x000902ce) main_touch_calib_pane_t2_ParamLimits

0x5be2,	// (0x000902e7) main_touch_calib_pane_t3_ParamLimits

0x5bf8,	// (0x000902fd) main_touch_calib_pane_t4_ParamLimits

0x5c0e,	// (0x00090313) main_touch_calib_pane_t5_ParamLimits

0xf65c,	// (0x00099d61) main_touch_calib_pane_t_ParamLimits

0xec37,	// (0x0009933c) list_single_fp_cale_pane_g3_ParamLimits

0xec37,	// (0x0009933c) list_single_fp_cale_pane_g3

0x55c8,	// (0x0008fccd) bg_button_pane_cp012_ParamLimits

0x55c8,	// (0x0008fccd) bg_vkb2_func_pane_cp03_ParamLimits

0x7ada,	// (0x000921df) cell_vitu2_function_top_pane_g1_ParamLimits

0x55c8,	// (0x0008fccd) bg_vkb2_func_pane_cp04_ParamLimits

0x8977,	// (0x0009307c) main_ncimui_button_group_pane_ParamLimits

0x8977,	// (0x0009307c) main_ncimui_button_group_pane

0x89df,	// (0x000930e4) main_ncimui_pane_t3_ParamLimits

0x89df,	// (0x000930e4) main_ncimui_pane_t3

0xbc26,	// (0x0009632b) phacti_button_group_pane

0xbdca,	// (0x000964cf) aid_size_list_single_double_ParamLimits

0x981f,	// (0x00093f24) popup_ezdial_listscroll_window_ParamLimits

0xbdd6,	// (0x000964db) popup_number_entry_window_cp01_ParamLimits

0x98dd,	// (0x00093fe2) phacti_button_pane_ParamLimits

0x98dd,	// (0x00093fe2) phacti_button_pane

0x0a98,	// (0x0008b19d) bg_button_pane_cp14

0xbe5d,	// (0x00096562) phacti_button_pane_t1

0x98ee,	// (0x00093ff3) main_touch_calib_button_pane_ParamLimits

0x98ee,	// (0x00093ff3) main_touch_calib_button_pane

0xc749,	// (0x00096e4e) bg_button_pane_cp18_ParamLimits

0xc749,	// (0x00096e4e) bg_button_pane_cp18

0xbe6b,	// (0x00096570) main_touch_calib_button_pane_t1_ParamLimits

0xbe6b,	// (0x00096570) main_touch_calib_button_pane_t1

0xbe81,	// (0x00096586) main_touch_calib_button_pane_t2_ParamLimits

0xbe81,	// (0x00096586) main_touch_calib_button_pane_t2

0x0001,

0xfcbd,	// (0x0009a3c2) main_touch_calib_button_pane_t_ParamLimits

0xfcbd,	// (0x0009a3c2) main_touch_calib_button_pane_t

0x0a98,	// (0x0008b19d) cell_ncimui_button_pane

0x0a98,	// (0x0008b19d) bg_button_pane_cp032

0xbe9f,	// (0x000965a4) cell_ncimui_button_pane_t1

0x6be4,	// (0x000912e9) image3_infobar_pane_ParamLimits

0x6be4,	// (0x000912e9) image3_infobar_pane

0x8d35,	// (0x0009343a) fs_bigclock_status_pane_ParamLimits

0x8d35,	// (0x0009343a) fs_bigclock_status_pane

0x8d42,	// (0x00093447) main_fs_bigclock_clock_pane_ParamLimits

0x8d42,	// (0x00093447) main_fs_bigclock_clock_pane

0x8d5e,	// (0x00093463) main_fs_bigclock_indi_pane_ParamLimits

0x8d5e,	// (0x00093463) main_fs_bigclock_indi_pane

0x8d8c,	// (0x00093491) main_fs_bigclock_swipe_pane_ParamLimits

0x8d8c,	// (0x00093491) main_fs_bigclock_swipe_pane

0x0a98,	// (0x0008b19d) main_fs_clock_dumped_data

0x8dc6,	// (0x000934cb) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x8dc6,	// (0x000934cb) list_single_fs_bigclock_indicator_pane_g1

0x8de5,	// (0x000934ea) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x8de5,	// (0x000934ea) list_single_fs_bigclock_indicator_pane_g2

0x8dff,	// (0x00093504) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x8dff,	// (0x00093504) list_single_fs_bigclock_indicator_pane_g3

0x8e1b,	// (0x00093520) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x8e1b,	// (0x00093520) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfb61,	// (0x0009a266) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfb61,	// (0x0009a266) list_single_fs_bigclock_indicator_pane_g

0x8e4a,	// (0x0009354f) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x8e4a,	// (0x0009354f) list_single_fs_bigclock_indicator_pane_t1

0x8e72,	// (0x00093577) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x8e72,	// (0x00093577) list_single_fs_bigclock_indicator_pane_t2

0x8e9a,	// (0x0009359f) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x8e9a,	// (0x0009359f) list_single_fs_bigclock_indicator_pane_t3

0x8ec2,	// (0x000935c7) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x8ec2,	// (0x000935c7) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfb6c,	// (0x0009a271) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfb6c,	// (0x0009a271) list_single_fs_bigclock_indicator_pane_t

0xbead,	// (0x000965b2) image3_infobar_fav_pane_ParamLimits

0xbead,	// (0x000965b2) image3_infobar_fav_pane

0xbebd,	// (0x000965c2) image3_infobar_loc_pane_ParamLimits

0xbebd,	// (0x000965c2) image3_infobar_loc_pane

0xbed3,	// (0x000965d8) image3_infobar_time_pane_ParamLimits

0xbed3,	// (0x000965d8) image3_infobar_time_pane

0xc6eb,	// (0x00096df0) image3_infobar_time_pane_g1

0xbee3,	// (0x000965e8) image3_infobar_time_pane_t1

0xc6eb,	// (0x00096df0) image3_infobar_loc_pane_g1

0xbef1,	// (0x000965f6) image3_infobar_loc_pane_g2

0x0001,

0xfcc2,	// (0x0009a3c7) image3_infobar_loc_pane_g

0xbef9,	// (0x000965fe) image3_infobar_loc_pane_t1

0xc6eb,	// (0x00096df0) image3_infobar_fav_pane_g1

0xbf07,	// (0x0009660c) image3_infobar_fav_pane_g2

0x0001,

0xfcc7,	// (0x0009a3cc) image3_infobar_fav_pane_g

0xbf0f,	// (0x00096614) fs_bigclock_status_battery_pane

0xbf18,	// (0x0009661d) fs_bigclock_status_signal_pane

0xbf21,	// (0x00096626) fs_bigclock_status_title_pane

0xbf2a,	// (0x0009662f) fs_bigclock_status_signal_pane_g1

0xbf33,	// (0x00096638) fs_bigclock_status_signal_pane_g2

0x0001,

0xfccc,	// (0x0009a3d1) fs_bigclock_status_signal_pane_g

0xbf3b,	// (0x00096640) fs_bigclock_status_battery_pane_g1

0xbf44,	// (0x00096649) fs_bigclock_status_battery_pane_g2

0x0001,

0xfcd1,	// (0x0009a3d6) fs_bigclock_status_battery_pane_g

0xbf4c,	// (0x00096651) fs_bigclock_status_title_pane_t1

0x98fe,	// (0x00094003) main_fs_bigclock_clock_pane_g1

0x98fe,	// (0x00094003) main_fs_bigclock_clock_pane_g2

0x98fe,	// (0x00094003) main_fs_bigclock_clock_pane_g3

0x98fe,	// (0x00094003) main_fs_bigclock_clock_pane_g4

0x0003,

0xfcd6,	// (0x0009a3db) main_fs_bigclock_clock_pane_g

0x990e,	// (0x00094013) main_fs_bigclock_clock_pane_t1

0x9924,	// (0x00094029) main_fs_bigclock_clock_pane_t2

0x0001,

0xfcdf,	// (0x0009a3e4) main_fs_bigclock_clock_pane_t

0xbf5a,	// (0x0009665f) list_single_fs_bigclock_indicator_pane_ParamLimits

0xbf5a,	// (0x0009665f) list_single_fs_bigclock_indicator_pane

0xbf6b,	// (0x00096670) list_single_fs_bigclock_pane_ParamLimits

0xbf6b,	// (0x00096670) list_single_fs_bigclock_pane

0xbf91,	// (0x00096696) main_fs_bigclock_indicator_pane_t1

0xbfa0,	// (0x000966a5) list_single_fs_bigclock_pane_g1

0xbfa8,	// (0x000966ad) list_single_fs_bigclock_pane_t1

0xc6eb,	// (0x00096df0) main_fs_bigclock_swipe_pane_g1

0xbfeb,	// (0x000966f0) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfcf0,	// (0x0009a3f5) main_fs_bigclock_swipe_pane_g

0xbff3,	// (0x000966f8) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xbff3,	// (0x000966f8) main_fs_bigclock_swipe_pane_t1

0x46d2,	// (0x0008edd7) call_type_pane_ParamLimits

0x0a98,	// (0x0008b19d) main_btmg_pane

0x03fe,	// (0x0008ab03) list_single_cale_mrui_row_pane_g2_ParamLimits

0x03fe,	// (0x0008ab03) list_single_cale_mrui_row_pane_g2

0x0002,

0xfc63,	// (0x0009a368) list_single_cale_mrui_row_pane_g_ParamLimits

0xfc63,	// (0x0009a368) list_single_cale_mrui_row_pane_g

0x0486,	// (0x0008ab8b) list_recal_vselct_arw_lo_pane

0xbe28,	// (0x0009652d) list_recal_vselct_arw_up_pane

0x048e,	// (0x0008ab93) list_recal_vselct_pane

0x997b,	// (0x00094080) btmg_button_pane

0x9987,	// (0x0009408c) main_btmg_pane_g1

0x0a98,	// (0x0008b19d) bg_button_pane_cp044

0xc010,	// (0x00096715) btmg_button_pane_t1

0xe4c9,	// (0x00098bce) aid_listscroll_gen

0x153a,	// (0x0008bc3f) main_cntbar_detail_pane

0xbb57,	// (0x0009625c) list_cmail_folder_pane

0x1823,	// (0x0008bf28) sp_fs_scroll_pane_cp03_ParamLimits

0x998f,	// (0x00094094) list_single_fs_dyc_pane_cp01_ParamLimits

0x998f,	// (0x00094094) list_single_fs_dyc_pane_cp01

0xc01e,	// (0x00096723) aid_size_cmail_indent

0x0506,	// (0x0008ac0b) list_single_dyc_row_pane_cp01

0x99cc,	// (0x000940d1) cntbar_detail_list_pane_ParamLimits

0x99cc,	// (0x000940d1) cntbar_detail_list_pane

0x9a0c,	// (0x00094111) main_cntbar_detail_cont_pane_ParamLimits

0x9a0c,	// (0x00094111) main_cntbar_detail_cont_pane

0x46c6,	// (0x0008edcb) scroll_pane_cp032_ParamLimits

0x46c6,	// (0x0008edcb) scroll_pane_cp032

0x9a18,	// (0x0009411d) cntbar_detail_list_event_pane_ParamLimits

0x9a18,	// (0x0009411d) cntbar_detail_list_event_pane

0x99da,	// (0x000940df) cntbar_detail_list_shct_pane

0xcbd0,	// (0x000972d5) aid_list_gen

0xc027,	// (0x0009672c) aid_scroll

0xc030,	// (0x00096735) aid_size_touch_scroll_bar

0x9a28,	// (0x0009412d) aid_list_double

0x068b,	// (0x0008ad90) aid_list_single

0x068b,	// (0x0008ad90) aid_list_single_lg

0x9a31,	// (0x00094136) aid_list_z_g_a_sm

0x9a39,	// (0x0009413e) aid_list_z_g_d

0x9a41,	// (0x00094146) aid_txt_z_prm

0x9a4f,	// (0x00094154) aid_txt_z_prm_cp01

0x9a5d,	// (0x00094162) aid_txt_z_sec

0x9a6b,	// (0x00094170) main_cntbar_detail_cont_pane_g1_ParamLimits

0x9a6b,	// (0x00094170) main_cntbar_detail_cont_pane_g1

0x9a78,	// (0x0009417d) main_cntbar_detail_cont_pane_g2_ParamLimits

0x9a78,	// (0x0009417d) main_cntbar_detail_cont_pane_g2

0x0001,

0xfcf5,	// (0x0009a3fa) main_cntbar_detail_cont_pane_g_ParamLimits

0xfcf5,	// (0x0009a3fa) main_cntbar_detail_cont_pane_g

0xc039,	// (0x0009673e) main_cntbar_detail_cont_pane_t1

0xc047,	// (0x0009674c) main_cntbar_detail_cont_pane_t2

0xc055,	// (0x0009675a) main_cntbar_detail_cont_pane_t3

0x0002,

0xfcfa,	// (0x0009a3ff) main_cntbar_detail_cont_pane_t

0x9a84,	// (0x00094189) cell_cntbar_detail_list_shct_pane_ParamLimits

0x9a84,	// (0x00094189) cell_cntbar_detail_list_shct_pane

0xc063,	// (0x00096768) cntbar_detail_list_shct_pane_g1

0xc06c,	// (0x00096771) cntbar_detail_list_shct_pane_g2

0x0001,

0xfd01,	// (0x0009a406) cntbar_detail_list_shct_pane_g

0x9a98,	// (0x0009419d) cntbar_detail_list_event_pane_g1_ParamLimits

0x9a98,	// (0x0009419d) cntbar_detail_list_event_pane_g1

0x9aa4,	// (0x000941a9) cntbar_detail_list_event_pane_g2_ParamLimits

0x9aa4,	// (0x000941a9) cntbar_detail_list_event_pane_g2

0x0005,

0xfd06,	// (0x0009a40b) cntbar_detail_list_event_pane_g_ParamLimits

0xfd06,	// (0x0009a40b) cntbar_detail_list_event_pane_g

0x9b12,	// (0x00094217) cntbar_detail_list_event_pane_t1_ParamLimits

0x9b12,	// (0x00094217) cntbar_detail_list_event_pane_t1

0x9b27,	// (0x0009422c) cntbar_detail_list_event_pane_t2_ParamLimits

0x9b27,	// (0x0009422c) cntbar_detail_list_event_pane_t2

0x0002,

0xfd13,	// (0x0009a418) cntbar_detail_list_event_pane_t_ParamLimits

0xfd13,	// (0x0009a418) cntbar_detail_list_event_pane_t

0xc6eb,	// (0x00096df0) cell_cntbar_detail_list_shct_pane_g1

0x4a7f,	// (0x0008f184) navi_pane_mv_g3

0x153a,	// (0x0008bc3f) main_cntbar_detail_pane_ParamLimits

0x0a98,	// (0x0008b19d) main_notif_wgt_pane

0x688a,	// (0x00090f8f) aid_tch_main_mp4_pane_g4

0x6b5f,	// (0x00091264) popup_slider_window_cp02

0x047c,	// (0x0008ab81) list_recal_day_event_pane

0x99ac,	// (0x000940b1) cntbar_detail_btn_pane_ParamLimits

0x99ac,	// (0x000940b1) cntbar_detail_btn_pane

0x99bc,	// (0x000940c1) cntbar_detail_btn_pane_cp01_ParamLimits

0x99bc,	// (0x000940c1) cntbar_detail_btn_pane_cp01

0x99da,	// (0x000940df) cntbar_detail_list_shct_pane_ParamLimits

0x99e6,	// (0x000940eb) cntbar_detail_pane_g1_ParamLimits

0x99e6,	// (0x000940eb) cntbar_detail_pane_g1

0x99f6,	// (0x000940fb) cntbar_detail_pane_t1_ParamLimits

0x99f6,	// (0x000940fb) cntbar_detail_pane_t1

0x9ab0,	// (0x000941b5) cntbar_detail_list_event_pane_g3_ParamLimits

0x9ab0,	// (0x000941b5) cntbar_detail_list_event_pane_g3

0x9ac8,	// (0x000941cd) cntbar_detail_list_event_pane_g4_ParamLimits

0x9ac8,	// (0x000941cd) cntbar_detail_list_event_pane_g4

0x9ae0,	// (0x000941e5) cntbar_detail_list_event_pane_g5_ParamLimits

0x9ae0,	// (0x000941e5) cntbar_detail_list_event_pane_g5

0x9af8,	// (0x000941fd) cntbar_detail_list_event_pane_g6_ParamLimits

0x9af8,	// (0x000941fd) cntbar_detail_list_event_pane_g6

0x9b3c,	// (0x00094241) cntbar_detail_list_event_pane_t3_ParamLimits

0x9b3c,	// (0x00094241) cntbar_detail_list_event_pane_t3

0x9b4e,	// (0x00094253) popup_notif_wgt_window_ParamLimits

0x9b4e,	// (0x00094253) popup_notif_wgt_window

0x9b5e,	// (0x00094263) popup_submenu_window_cp01_ParamLimits

0x9b5e,	// (0x00094263) popup_submenu_window_cp01

0xc958,	// (0x0009705d) bg_popup_window_pane_cp10

0xc075,	// (0x0009677a) listscroll_notif_wgt_pane

0xc087,	// (0x0009678c) list_notif_wgt_window

0xc090,	// (0x00096795) scroll_pane_cp033

0x9b6e,	// (0x00094273) list_notif_wgt_row_pane_ParamLimits

0x9b6e,	// (0x00094273) list_notif_wgt_row_pane

0xc099,	// (0x0009679e) aid_size_list_notif_wgt_del

0xc0a6,	// (0x000967ab) list_notif_wgt_row_pane_g1

0xc0b2,	// (0x000967b7) list_notif_wgt_row_pane_g2

0xc0c1,	// (0x000967c6) list_notif_wgt_row_pane_g3

0x0002,

0xfd1a,	// (0x0009a41f) list_notif_wgt_row_pane_g

0xc0ce,	// (0x000967d3) list_notif_wgt_row_pane_t1

0xc0e4,	// (0x000967e9) list_notif_wgt_row_pane_t2

0xc0f6,	// (0x000967fb) list_notif_wgt_row_pane_t3

0x0002,

0xfd21,	// (0x0009a426) list_notif_wgt_row_pane_t

0x0fa7,	// (0x0008b6ac) list_recal_day_event_pane_g1

0xc108,	// (0x0009680d) list_recal_day_event_pane_t1

0x0a98,	// (0x0008b19d) bg_button_pane_cp045

0x9b82,	// (0x00094287) cntbar_detail_btn_pane_t1

0xd331,	// (0x00097a36) main_callh_pane_ParamLimits

0xd331,	// (0x00097a36) main_callh_pane

0x0a98,	// (0x0008b19d) main_coverflow0_pane

0x0a98,	// (0x0008b19d) main_wgtman_pane

0x8da4,	// (0x000934a9) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x8da4,	// (0x000934a9) main_fs_bigclock_unlock_btn_pane

0x946a,	// (0x00093b6f) bg_button_pane_cp16

0x947a,	// (0x00093b7f) cell_tport_appsw_pane_g3

0x9b90,	// (0x00094295) cf0_flow_pane_ParamLimits

0x9b90,	// (0x00094295) cf0_flow_pane

0xc117,	// (0x0009681c) listscroll_cf0_pane

0xc122,	// (0x00096827) main_cf0_pane_g1

0x9b9f,	// (0x000942a4) main_cf0_pane_t1_ParamLimits

0x9b9f,	// (0x000942a4) main_cf0_pane_t1

0x9bb3,	// (0x000942b8) main_cf0_pane_t2_ParamLimits

0x9bb3,	// (0x000942b8) main_cf0_pane_t2

0x0001,

0xfd2d,	// (0x0009a432) main_cf0_pane_t_ParamLimits

0xfd2d,	// (0x0009a432) main_cf0_pane_t

0xc134,	// (0x00096839) scroll_pane_cp11

0x9bc7,	// (0x000942cc) cf0_flow_pane_g1

0x9bcf,	// (0x000942d4) cf0_flow_pane_g2

0x0001,

0xfd32,	// (0x0009a437) cf0_flow_pane_g

0x9bd7,	// (0x000942dc) cf0_flow_pane_t1

0x0a98,	// (0x0008b19d) main_call6_pane

0x0a98,	// (0x0008b19d) main_calllock_pane

0x9be5,	// (0x000942ea) call6_btn_grp_pane_ParamLimits

0x9be5,	// (0x000942ea) call6_btn_grp_pane

0x9bf2,	// (0x000942f7) call6_pane_g1_ParamLimits

0x9bf2,	// (0x000942f7) call6_pane_g1

0x9c02,	// (0x00094307) popup_call6_1st_window_ParamLimits

0x9c02,	// (0x00094307) popup_call6_1st_window

0x9c12,	// (0x00094317) popup_call6_2nd_window_ParamLimits

0x9c12,	// (0x00094317) popup_call6_2nd_window

0x9c22,	// (0x00094327) cell_call6_btn_pane_ParamLimits

0x9c22,	// (0x00094327) cell_call6_btn_pane

0xc958,	// (0x0009705d) bg_popup_call2_in_pane_cp03

0xc13f,	// (0x00096844) popup_call6_1st_window_g1

0xc147,	// (0x0009684c) popup_call6_1st_window_g2

0xc14f,	// (0x00096854) popup_call6_1st_window_g3

0x0002,

0xfd37,	// (0x0009a43c) popup_call6_1st_window_g

0xc157,	// (0x0009685c) popup_call6_1st_window_t1

0xc166,	// (0x0009686b) popup_call6_1st_window_t2

0xc176,	// (0x0009687b) popup_call6_1st_window_t3

0x0002,

0xfd3e,	// (0x0009a443) popup_call6_1st_window_t

0xc958,	// (0x0009705d) bg_popup_call2_in_pane_cp04

0xc186,	// (0x0009688b) popup_call6_2nd_window_g1

0xc18e,	// (0x00096893) popup_call6_2nd_window_g2

0xc196,	// (0x0009689b) popup_call6_2nd_window_g3

0x0002,

0xfd45,	// (0x0009a44a) popup_call6_2nd_window_g

0xc19e,	// (0x000968a3) popup_call6_2nd_window_t1

0x2983,	// (0x0008d088) bg_button_pane_cp15

0x9c33,	// (0x00094338) cell_call6_btn_pane_g1

0x9c3c,	// (0x00094341) cell_call6_btn_pane_t1

0x9c4b,	// (0x00094350) listscroll_wgtman_pane_ParamLimits

0x9c4b,	// (0x00094350) listscroll_wgtman_pane

0x9c67,	// (0x0009436c) wgtman_btn_pane_ParamLimits

0x9c67,	// (0x0009436c) wgtman_btn_pane

0xd116,	// (0x0009781b) aid_scroll_copy1

0xc1ad,	// (0x000968b2) list_wgtman_pane

0x9c9c,	// (0x000943a1) wgtman_btn_pane_g1_ParamLimits

0x9c9c,	// (0x000943a1) wgtman_btn_pane_g1

0x9cc4,	// (0x000943c9) wgtman_btn_pane_t1_ParamLimits

0x9cc4,	// (0x000943c9) wgtman_btn_pane_t1

0xc1b7,	// (0x000968bc) wgtman_btn_pane_t2_ParamLimits

0xc1b7,	// (0x000968bc) wgtman_btn_pane_t2

0x0001,

0xfd4c,	// (0x0009a451) wgtman_btn_pane_t_ParamLimits

0xfd4c,	// (0x0009a451) wgtman_btn_pane_t

0x9cfb,	// (0x00094400) listrow_wgtman_pane_ParamLimits

0x9cfb,	// (0x00094400) listrow_wgtman_pane

0x9d12,	// (0x00094417) listrow_wgtman_pane_g1

0x9d1f,	// (0x00094424) listrow_wgtman_pane_g2

0x0001,

0xfd51,	// (0x0009a456) listrow_wgtman_pane_g

0x9d3d,	// (0x00094442) listrow_wgtman_pane_t1

0x9d55,	// (0x0009445a) listrow_wgtman_pane_t2

0x0001,

0xfd56,	// (0x0009a45b) listrow_wgtman_pane_t

0x9d7b,	// (0x00094480) wait_bar_pane_cp09

0xc1ce,	// (0x000968d3) main_calllock_btn_pane

0xc1d8,	// (0x000968dd) main_calllock_pane_g1

0x0a98,	// (0x0008b19d) bg_button_pane_cp17

0xc1e4,	// (0x000968e9) main_calllock_btn_pane_g1

0xc1ed,	// (0x000968f2) main_calllock_btn_pane_t1

0x0a98,	// (0x0008b19d) main_dialer3_pane

0x0a98,	// (0x0008b19d) main_fmrd2_pane

0xc6eb,	// (0x00096df0) main_fs_bigclock_unlock_btn_pane_g1

0x9d95,	// (0x0009449a) main_fs_bigclock_unlock_btn_pane_t1

0x9da3,	// (0x000944a8) area_fmrd2_info_pane_ParamLimits

0x9da3,	// (0x000944a8) area_fmrd2_info_pane

0x9daf,	// (0x000944b4) area_fmrd2_visual_pane_ParamLimits

0x9daf,	// (0x000944b4) area_fmrd2_visual_pane

0x9dbd,	// (0x000944c2) fmrd2_indi_pane_ParamLimits

0x9dbd,	// (0x000944c2) fmrd2_indi_pane

0x9dca,	// (0x000944cf) area_fmrd2_visual_pane_g1

0x9dd2,	// (0x000944d7) area_fmrd2_visual_pane_t1

0x9de2,	// (0x000944e7) area_fmrd2_visual_pane_t2

0x9df2,	// (0x000944f7) area_fmrd2_visual_pane_t3

0x0002,

0xfd60,	// (0x0009a465) area_fmrd2_visual_pane_t

0x9e02,	// (0x00094507) area_fmrd2_info_pane_g1

0x9e0a,	// (0x0009450f) area_fmrd2_info_pane_t1

0x9e1a,	// (0x0009451f) area_fmrd2_info_pane_t2

0x9e2a,	// (0x0009452f) area_fmrd2_info_pane_t3

0x9e3a,	// (0x0009453f) area_fmrd2_info_pane_t4

0x0003,

0xfd67,	// (0x0009a46c) area_fmrd2_info_pane_t

0x9e4a,	// (0x0009454f) fmrd2_indi_pane_t1

0x9e5a,	// (0x0009455f) fmrd2_indi_pane_t2

0x9e6a,	// (0x0009456f) fmrd2_indi_pane_t3

0x0002,

0xfd70,	// (0x0009a475) fmrd2_indi_pane_t

0x8e2c,	// (0x00093531) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x8e2c,	// (0x00093531) list_single_fs_bigclock_indicator_pane_g5

0x8ee1,	// (0x000935e6) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x8ee1,	// (0x000935e6) list_single_fs_bigclock_indicator_pane_t5

0x0be0,	// (0x0008b2e5) aid_cell_bcale_month_pane_ParamLimits

0x0be0,	// (0x0008b2e5) aid_cell_bcale_month_pane

0x0be0,	// (0x0008b2e5) bcale_month_pane_ParamLimits

0x0be0,	// (0x0008b2e5) bcale_month_pane

0xb242,	// (0x00095947) bcale_preview_pane_ParamLimits

0xb242,	// (0x00095947) bcale_preview_pane

0xbfa8,	// (0x000966ad) list_single_fs_bigclock_pane_t1_ParamLimits

0xbfc7,	// (0x000966cc) list_single_fs_bigclock_pane_t2_ParamLimits

0xbfc7,	// (0x000966cc) list_single_fs_bigclock_pane_t2

0x0001,

0xfceb,	// (0x0009a3f0) list_single_fs_bigclock_pane_t_ParamLimits

0xfceb,	// (0x0009a3f0) list_single_fs_bigclock_pane_t

0x9d8d,	// (0x00094492) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfd5b,	// (0x0009a460) main_fs_bigclock_unlock_btn_pane_g

0x9e7a,	// (0x0009457f) aid_dia3_key_size_ParamLimits

0x9e7a,	// (0x0009457f) aid_dia3_key_size

0x9e86,	// (0x0009458b) aid_dia3_listrow_size_ParamLimits

0x9e86,	// (0x0009458b) aid_dia3_listrow_size

0x9e96,	// (0x0009459b) dia3_keypad_fun_pane_ParamLimits

0x9e96,	// (0x0009459b) dia3_keypad_fun_pane

0x9ea6,	// (0x000945ab) dia3_keypad_num_pane_ParamLimits

0x9ea6,	// (0x000945ab) dia3_keypad_num_pane

0x9eb6,	// (0x000945bb) dia3_listscroll_pane_ParamLimits

0x9eb6,	// (0x000945bb) dia3_listscroll_pane

0x9ec4,	// (0x000945c9) dia3_numentry_pane_ParamLimits

0x9ec4,	// (0x000945c9) dia3_numentry_pane

0xc1fc,	// (0x00096901) dia3_list_pane

0x9ed2,	// (0x000945d7) scroll_pane_cp12

0x0a98,	// (0x0008b19d) bg_dia3_numentry_pane

0x9edd,	// (0x000945e2) dia3_numentry_pane_t1

0x9eec,	// (0x000945f1) cell_dia3_key_num_pane

0x9ef4,	// (0x000945f9) cell_dia3_key0_fun_pane_ParamLimits

0x9ef4,	// (0x000945f9) cell_dia3_key0_fun_pane

0x9f01,	// (0x00094606) cell_dia3_key1_fun_pane_ParamLimits

0x9f01,	// (0x00094606) cell_dia3_key1_fun_pane

0x9f0e,	// (0x00094613) dia3_listrow_pane

0xb6d7,	// (0x00095ddc) bg_dia3_numentry_pane_g1

0x0a98,	// (0x0008b19d) bg_button_pane_cp21

0x9f1b,	// (0x00094620) cell_dia3_key_num_pane_t1

0x9f29,	// (0x0009462e) cell_dia3_key_num_pane_t2

0x9f38,	// (0x0009463d) cell_dia3_key_num_pane_t3

0x9f47,	// (0x0009464c) cell_dia3_key_num_pane_t4

0x0003,

0xfd77,	// (0x0009a47c) cell_dia3_key_num_pane_t

0x0a98,	// (0x0008b19d) bg_button_pane_cp19

0x9f56,	// (0x0009465b) cell_dia3_key0_fun_pane_g1

0x0a98,	// (0x0008b19d) bg_button_pane_cp20

0x9f5e,	// (0x00094663) cell_dia3_key1_fun_pane_g1

0x183b,	// (0x0008bf40) area_left_week_number_pane

0x183b,	// (0x0008bf40) area_top_day_name_pane

0x183b,	// (0x0008bf40) frame_month_view_pane

0x183b,	// (0x0008bf40) grid_month_view_pane

0x183b,	// (0x0008bf40) cell_top_day_name_pane_ParamLimits

0x183b,	// (0x0008bf40) cell_top_day_name_pane

0x183b,	// (0x0008bf40) cell_area_left_week_number_pane_ParamLimits

0x183b,	// (0x0008bf40) cell_area_left_week_number_pane

0x183b,	// (0x0008bf40) cell_month_view_pane_ParamLimits

0x183b,	// (0x0008bf40) cell_month_view_pane

0x182f,	// (0x0008bf34) frm_month_g1

0x182f,	// (0x0008bf34) frm_month_g2

0x182f,	// (0x0008bf34) frm_month_g3

0x182f,	// (0x0008bf34) frm_month_g4

0x182f,	// (0x0008bf34) frm_month_g5

0x182f,	// (0x0008bf34) frm_month_g6

0x182f,	// (0x0008bf34) frm_month_g7

0x182f,	// (0x0008bf34) frm_month_g8

0x182f,	// (0x0008bf34) frm_month_g9

0x182f,	// (0x0008bf34) frm_month_g10

0x182f,	// (0x0008bf34) frm_month_g11

0x182f,	// (0x0008bf34) frm_month_g12

0x182f,	// (0x0008bf34) frm_month_g13

0x182f,	// (0x0008bf34) frm_month_g14

0x182f,	// (0x0008bf34) frm_month_g15

0x182f,	// (0x0008bf34) frm_month_g16

0x000f,

0xfd80,	// (0x0009a485) frm_month_g

0xc206,	// (0x0009690b) cell_top_day_name_pane_t1

0x182f,	// (0x0008bf34) cell_area_left_week_number_pane_g1

0xc206,	// (0x0009690b) cell_area_left_week_number_pane_t1

0x182f,	// (0x0008bf34) cell_month_view_pane_g1

0xc206,	// (0x0009690b) cell_month_view_pane_t1

0x0a98,	// (0x0008b19d) main_fps_pane

0xba85,	// (0x0009618a) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xba85,	// (0x0009618a) cmail_ddmenu_btn02_pane_cp1

0xbaa1,	// (0x000961a6) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xbaa1,	// (0x000961a6) cmail_ddmenu_btn02_pane_cp2

0x9865,	// (0x00093f6a) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x9865,	// (0x00093f6a) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfc9e,	// (0x0009a3a3) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfc9e,	// (0x0009a3a3) cmail_ddmenu_btn02_pane_g

0x9883,	// (0x00093f88) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x9883,	// (0x00093f88) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfca3,	// (0x0009a3a8) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfca3,	// (0x0009a3a8) cmail_ddmenu_btn02_pane_t

0x9f66,	// (0x0009466b) fps_text_pane_ParamLimits

0x9f66,	// (0x0009466b) fps_text_pane

0x9f73,	// (0x00094678) main_fps_pane_g1_ParamLimits

0x9f73,	// (0x00094678) main_fps_pane_g1

0x9f7f,	// (0x00094684) wait_bar_pane_cp010_ParamLimits

0x9f7f,	// (0x00094684) wait_bar_pane_cp010

0x9f8b,	// (0x00094690) fps_text_pane_t1_ParamLimits

0x9f8b,	// (0x00094690) fps_text_pane_t1

0x6f74,	// (0x00091679) cam4_image_uncrop_pane_g1

0x6f7d,	// (0x00091682) cam4_image_uncrop_pane_g2

0x6f86,	// (0x0009168b) cam4_image_uncrop_pane_g3

0x6f8f,	// (0x00091694) cam4_image_uncrop_pane_g4

0x0003,

0xf7e5,	// (0x00099eea) cam4_image_uncrop_pane_g

0x9f0e,	// (0x00094613) dia3_listrow_pane_ParamLimits

0x0a98,	// (0x0008b19d) main_phob2_pane

0x9427,	// (0x00093b2c) cell_tport_appsw_pane_cp02_ParamLimits

0x9427,	// (0x00093b2c) cell_tport_appsw_pane_cp02

0x9436,	// (0x00093b3b) cell_tport_appsw_pane_cp03_ParamLimits

0x9436,	// (0x00093b3b) cell_tport_appsw_pane_cp03

0x0a98,	// (0x0008b19d) phob2_contact_card_pane

0x0a98,	// (0x0008b19d) phob2_listscroll_pane

0xc218,	// (0x0009691d) phob2_list_pane

0xc220,	// (0x00096925) scroll_pane_cp034

0x9fa4,	// (0x000946a9) phob2_cc_data_pane_ParamLimits

0x9fa4,	// (0x000946a9) phob2_cc_data_pane

0x9fbb,	// (0x000946c0) phob2_cc_listscroll_pane_ParamLimits

0x9fbb,	// (0x000946c0) phob2_cc_listscroll_pane

0x97a1,	// (0x00093ea6) list_double_large_graphic_phob2_pane_ParamLimits

0x97a1,	// (0x00093ea6) list_double_large_graphic_phob2_pane

0x9fd7,	// (0x000946dc) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9fd7,	// (0x000946dc) list_double_large_graphic_phob2_pane_g1

0x9fe4,	// (0x000946e9) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x9fe4,	// (0x000946e9) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfda1,	// (0x0009a4a6) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfda1,	// (0x0009a4a6) list_double_large_graphic_phob2_pane_g

0xa00a,	// (0x0009470f) list_double_large_graphic_phob2_pane_t1_ParamLimits

0xa00a,	// (0x0009470f) list_double_large_graphic_phob2_pane_t1

0xa01f,	// (0x00094724) list_double_large_graphic_phob2_pane_t2_ParamLimits

0xa01f,	// (0x00094724) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfdaa,	// (0x0009a4af) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfdaa,	// (0x0009a4af) list_double_large_graphic_phob2_pane_t

0xc69f,	// (0x00096da4) list_highlight_pane_cp024

0xa034,	// (0x00094739) phob2_cc_button_pane

0xa03e,	// (0x00094743) phob2_cc_data_pane_g1_ParamLimits

0xa03e,	// (0x00094743) phob2_cc_data_pane_g1

0xa052,	// (0x00094757) phob2_cc_data_pane_g2_ParamLimits

0xa052,	// (0x00094757) phob2_cc_data_pane_g2

0x0001,

0xfdaf,	// (0x0009a4b4) phob2_cc_data_pane_g_ParamLimits

0xfdaf,	// (0x0009a4b4) phob2_cc_data_pane_g

0xa066,	// (0x0009476b) phob2_cc_data_pane_t1_ParamLimits

0xa066,	// (0x0009476b) phob2_cc_data_pane_t1

0xa088,	// (0x0009478d) phob2_cc_data_pane_t2_ParamLimits

0xa088,	// (0x0009478d) phob2_cc_data_pane_t2

0xa0aa,	// (0x000947af) phob2_cc_data_pane_t3_ParamLimits

0xa0aa,	// (0x000947af) phob2_cc_data_pane_t3

0x0002,

0xfdb4,	// (0x0009a4b9) phob2_cc_data_pane_t_ParamLimits

0xfdb4,	// (0x0009a4b9) phob2_cc_data_pane_t

0xc228,	// (0x0009692d) phob2_cc_list_pane_ParamLimits

0xc228,	// (0x0009692d) phob2_cc_list_pane

0xb5f2,	// (0x00095cf7) scroll_pane_cp035_ParamLimits

0xb5f2,	// (0x00095cf7) scroll_pane_cp035

0x153a,	// (0x0008bc3f) bg_button_pane_cp033

0xa0cb,	// (0x000947d0) phob2_cc_button_pane_g1

0xa0d7,	// (0x000947dc) phob2_cc_button_pane_t1

0xa0ec,	// (0x000947f1) phob2_cc_button_pane_t2

0x0001,

0xfdbb,	// (0x0009a4c0) phob2_cc_button_pane_t

0xa0fe,	// (0x00094803) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xa0fe,	// (0x00094803) list_double_large_graphic_phob2_cc_pane

0xa14b,	// (0x00094850) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xa14b,	// (0x00094850) list_double_large_graphic_phob2_cc_pane_g1

0xa15c,	// (0x00094861) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xa15c,	// (0x00094861) list_double_large_graphic_phob2_cc_pane_g2

0xa16b,	// (0x00094870) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xa16b,	// (0x00094870) list_double_large_graphic_phob2_cc_pane_g3

0xa17a,	// (0x0009487f) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0xa17a,	// (0x0009487f) list_double_large_graphic_phob2_cc_pane_g4

0xa18b,	// (0x00094890) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xa18b,	// (0x00094890) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfdc0,	// (0x0009a4c5) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfdc0,	// (0x0009a4c5) list_double_large_graphic_phob2_cc_pane_g

0xa19a,	// (0x0009489f) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0xa19a,	// (0x0009489f) list_double_large_graphic_phob2_cc_pane_t1

0xa1c3,	// (0x000948c8) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0xa1c3,	// (0x000948c8) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfdcb,	// (0x0009a4d0) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfdcb,	// (0x0009a4d0) list_double_large_graphic_phob2_cc_pane_t

0xc234,	// (0x00096939) list_highlight_pane_cp025_ParamLimits

0xc234,	// (0x00096939) list_highlight_pane_cp025

0x153a,	// (0x0008bc3f) bg_button_pane_cp033_ParamLimits

0xa0cb,	// (0x000947d0) phob2_cc_button_pane_g1_ParamLimits

0xa0d7,	// (0x000947dc) phob2_cc_button_pane_t1_ParamLimits

0xa0ec,	// (0x000947f1) phob2_cc_button_pane_t2_ParamLimits

0xfdbb,	// (0x0009a4c0) phob2_cc_button_pane_t_ParamLimits

0x2977,	// (0x0008d07c) popup_wgtman_window

0x0e65,	// (0x0008b56a) scroll_pane_cp038

0x9c84,	// (0x00094389) wgtman_btn_pane_cp_01_ParamLimits

0x9c84,	// (0x00094389) wgtman_btn_pane_cp_01

0xc242,	// (0x00096947) wgtman_content_pane

0xc24b,	// (0x00096950) wgtman_heading_pane

0x0a98,	// (0x0008b19d) bg_heading_pane_cp02

0xc254,	// (0x00096959) wgtman_heading_pane_g1

0xc25c,	// (0x00096961) wgtman_heading_pane_t1

0xc26a,	// (0x0009696f) scroll_pane_cp036

0xc272,	// (0x00096977) wgtman_list_pane

0xc27a,	// (0x0009697f) wgtman_list_pane_t1_ParamLimits

0xc27a,	// (0x0009697f) wgtman_list_pane_t1

0x6ed1,	// (0x000915d6) cam4_grid_pane

0x7ca0,	// (0x000923a5) bg_button_pane_cp015_ParamLimits

0x7cb5,	// (0x000923ba) bg_button_pane_cp016_ParamLimits

0x7cc1,	// (0x000923c6) bg_button_pane_cp017_ParamLimits

0x7d1a,	// (0x0009241f) popup_vitu2_query_window_g3_ParamLimits

0x7d1a,	// (0x0009241f) popup_vitu2_query_window_g3

0x7dbb,	// (0x000924c0) popup_vitu2_query_window_t6_ParamLimits

0x7dbb,	// (0x000924c0) popup_vitu2_query_window_t6

0x7de6,	// (0x000924eb) popup_vitu2_query_window_t7_ParamLimits

0x7de6,	// (0x000924eb) popup_vitu2_query_window_t7

0xc294,	// (0x00096999) cam4_grid_pane_g1

0xc29d,	// (0x000969a2) cam4_grid_pane_g2

0xc2a8,	// (0x000969ad) cam4_grid_pane_g3

0xc2b1,	// (0x000969b6) cam4_grid_pane_g4

0x0003,

0xfdd0,	// (0x0009a4d5) cam4_grid_pane_g

0x3532,	// (0x0008dc37) aid_placing_vt_slider_lsc_ParamLimits

0x3852,	// (0x0008df57) vidtel_button_pane_ParamLimits

0x3852,	// (0x0008df57) vidtel_button_pane

0x0a98,	// (0x0008b19d) bg_button_pane_cp034

0xc2bc,	// (0x000969c1) vidtel_button_pane_g1

0xc2c4,	// (0x000969c9) vidtel_button_pane_t1

0x0f97,	// (0x0008b69c) aid_size_vtel_slider_touch

0xb5f2,	// (0x00095cf7) scroll_pane_cp039

0x8b4e,	// (0x00093253) ncim_query_button_pane_cp01_ParamLimits

0x8b6d,	// (0x00093272) ncimui_query_pane_g1_ParamLimits

0x153a,	// (0x0008bc3f) input_focus_pane_cp012_ParamLimits

0xb715,	// (0x00095e1a) ncim_query_entry_pane_t1_ParamLimits

0xb5f2,	// (0x00095cf7) scroll_pane_cp039_ParamLimits

0x49f1,	// (0x0008f0f6) navi_pane_bcale_mc_g1

0x49f9,	// (0x0008f0fe) navi_pane_bcale_mc_t1

0xbad7,	// (0x000961dc) main_sp_fs_email_pane_g1

0xbae3,	// (0x000961e8) main_sp_fs_email_pane_g2

0x0001,

0xfbd6,	// (0x0009a2db) main_sp_fs_email_pane_g

0xbcf0,	// (0x000963f5) list_single_cale_mrui_row_pane_g3_ParamLimits

0xbcf0,	// (0x000963f5) list_single_cale_mrui_row_pane_g3

0x98a3,	// (0x00093fa8) list_single_recal_day_pane_g5_event_pane

0x04da,	// (0x0008abdf) list_single_recal_day_pane_g7

0xc2da,	// (0x000969df) list_recal_day_event_pane_cp01

0xc2e3,	// (0x000969e8) list_recal_vselct_arw_lo_pane_cp01

0xc2eb,	// (0x000969f0) list_recal_vselct_arw_up_pane_cp01

0xc2f3,	// (0x000969f8) list_recal_vselct_pane_cp01

0x0fa7,	// (0x0008b6ac) list_recal_day_event_pane_cp01_g1

0x051e,	// (0x0008ac23) list_recal_day_event_pane_cp01_t1

0x04e2,	// (0x0008abe7) list_single_recal_day_pane_t1_ParamLimits

0x04f4,	// (0x0008abf9) list_single_recal_day_pane_t2_ParamLimits

0xfcb3,	// (0x0009a3b8) list_single_recal_day_pane_t_ParamLimits

0xc632,	// (0x00096d37) bg_notes_pane_ParamLimits

0xc727,	// (0x00096e2c) list_notes_pane_ParamLimits

0x2a88,	// (0x0008d18d) scroll_pane_cp06_ParamLimits

0xc749,	// (0x00096e4e) main_notes_pane_ParamLimits

0x153a,	// (0x0008bc3f) main_welc_pane

0xa226,	// (0x0009492b) main_welc_body_pane_ParamLimits

0xa226,	// (0x0009492b) main_welc_body_pane

0xa241,	// (0x00094946) main_welc_opti_pane_ParamLimits

0xa241,	// (0x00094946) main_welc_opti_pane

0xa298,	// (0x0009499d) main_welc_pane_t1_ParamLimits

0xa298,	// (0x0009499d) main_welc_pane_t1

0xa450,	// (0x00094b55) main_welc_body_row_pane_ParamLimits

0xa450,	// (0x00094b55) main_welc_body_row_pane

0xc69f,	// (0x00096da4) main_welc_opti_row_pane_ParamLimits

0xc69f,	// (0x00096da4) main_welc_opti_row_pane

0xc305,	// (0x00096a0a) main_welc_opti_row_pane_g1

0xa46a,	// (0x00094b6f) main_welc_opti_row_pane_t1

0xc30d,	// (0x00096a12) main_welc_body_row_pane_t1

0xc07f,	// (0x00096784) popup_notif_wgt_heading_pane

0xc099,	// (0x0009679e) aid_size_list_notif_wgt_del_ParamLimits

0xc0a6,	// (0x000967ab) list_notif_wgt_row_pane_g1_ParamLimits

0xc0b2,	// (0x000967b7) list_notif_wgt_row_pane_g2_ParamLimits

0xc0c1,	// (0x000967c6) list_notif_wgt_row_pane_g3_ParamLimits

0xfd1a,	// (0x0009a41f) list_notif_wgt_row_pane_g_ParamLimits

0xc0ce,	// (0x000967d3) list_notif_wgt_row_pane_t1_ParamLimits

0xc0e4,	// (0x000967e9) list_notif_wgt_row_pane_t2_ParamLimits

0xc0f6,	// (0x000967fb) list_notif_wgt_row_pane_t3_ParamLimits

0xfd21,	// (0x0009a426) list_notif_wgt_row_pane_t_ParamLimits

0x9d12,	// (0x00094417) listrow_wgtman_pane_g1_ParamLimits

0x9d1f,	// (0x00094424) listrow_wgtman_pane_g2_ParamLimits

0xfd51,	// (0x0009a456) listrow_wgtman_pane_g_ParamLimits

0x9d3d,	// (0x00094442) listrow_wgtman_pane_t1_ParamLimits

0x9d55,	// (0x0009445a) listrow_wgtman_pane_t2_ParamLimits

0xfd56,	// (0x0009a45b) listrow_wgtman_pane_t_ParamLimits

0x9d7b,	// (0x00094480) wait_bar_pane_cp09_ParamLimits

0x0a98,	// (0x0008b19d) bg_popup_heading_pane_cp02

0xc31c,	// (0x00096a21) popup_notif_wgt_heading_pane_g1

0xc324,	// (0x00096a29) popup_notif_wgt_heading_pane_t1

0x0a98,	// (0x0008b19d) main_vids_pane

0x0a98,	// (0x0008b19d) vids_listscroll_pane

0xa479,	// (0x00094b7e) scroll_pane_cp040

0x0a98,	// (0x0008b19d) vids_list_pane

0xa484,	// (0x00094b89) vids_list_double_pane_ParamLimits

0xa484,	// (0x00094b89) vids_list_double_pane

0xa498,	// (0x00094b9d) vids_list_double_pane_g1

0xa4a1,	// (0x00094ba6) vids_list_double_pane_t1

0xa4b1,	// (0x00094bb6) vids_list_double_pane_t2

0x0001,

0xfdef,	// (0x0009a4f4) vids_list_double_pane_t

0x55c8,	// (0x0008fccd) main_ncimui_pane_ParamLimits

0x898f,	// (0x00093094) main_ncimui_pane_g1_ParamLimits

0x899d,	// (0x000930a2) main_ncimui_pane_g2_ParamLimits

0x899d,	// (0x000930a2) main_ncimui_pane_g2

0x0001,

0xfad7,	// (0x0009a1dc) main_ncimui_pane_g_ParamLimits

0xfad7,	// (0x0009a1dc) main_ncimui_pane_g

0xa25c,	// (0x00094961) main_welc_pane_g1_ParamLimits

0xa25c,	// (0x00094961) main_welc_pane_g1

0xa268,	// (0x0009496d) main_welc_pane_g2_ParamLimits

0xa268,	// (0x0009496d) main_welc_pane_g2

0x0003,

0xfdd9,	// (0x0009a4de) main_welc_pane_g_ParamLimits

0xfdd9,	// (0x0009a4de) main_welc_pane_g

0xc632,	// (0x00096d37) listscroll_mce_pane_ParamLimits

0x4abb,	// (0x0008f1c0) wait_bar_pane_cp10

0xe4d1,	// (0x00098bd6) main_cale_day_pane_ParamLimits

0xe4d1,	// (0x00098bd6) main_cale_week_pane_ParamLimits

0xc632,	// (0x00096d37) main_messa_pane_ParamLimits

0x637c,	// (0x00090a81) main_clock2_btn_pane_ParamLimits

0x637c,	// (0x00090a81) main_clock2_btn_pane

0xecce,	// (0x000993d3) main_clock2_btn_pane_cp01_ParamLimits

0xecce,	// (0x000993d3) main_clock2_btn_pane_cp01

0xbccf,	// (0x000963d4) list_cale_mrui_pane_ParamLimits

0xc12c,	// (0x00096831) main_cf0_pane_g2

0x0001,

0xfd28,	// (0x0009a42d) main_cf0_pane_g

0x183b,	// (0x0008bf40) area_left_week_number_pane_ParamLimits

0x183b,	// (0x0008bf40) area_top_day_name_pane_ParamLimits

0x183b,	// (0x0008bf40) frame_month_view_pane_ParamLimits

0x183b,	// (0x0008bf40) grid_month_view_pane_ParamLimits

0x182f,	// (0x0008bf34) frm_month_g1_ParamLimits

0x182f,	// (0x0008bf34) frm_month_g2_ParamLimits

0x182f,	// (0x0008bf34) frm_month_g3_ParamLimits

0x182f,	// (0x0008bf34) frm_month_g4_ParamLimits

0x182f,	// (0x0008bf34) frm_month_g5_ParamLimits

0x182f,	// (0x0008bf34) frm_month_g6_ParamLimits

0x182f,	// (0x0008bf34) frm_month_g7_ParamLimits

0x182f,	// (0x0008bf34) frm_month_g8_ParamLimits

0x182f,	// (0x0008bf34) frm_month_g9_ParamLimits

0x182f,	// (0x0008bf34) frm_month_g10_ParamLimits

0x182f,	// (0x0008bf34) frm_month_g11_ParamLimits

0x182f,	// (0x0008bf34) frm_month_g12_ParamLimits

0x182f,	// (0x0008bf34) frm_month_g13_ParamLimits

0x182f,	// (0x0008bf34) frm_month_g14_ParamLimits

0x182f,	// (0x0008bf34) frm_month_g15_ParamLimits

0x182f,	// (0x0008bf34) frm_month_g16_ParamLimits

0xfd80,	// (0x0009a485) frm_month_g_ParamLimits

0xc206,	// (0x0009690b) cell_top_day_name_pane_t1_ParamLimits

0x182f,	// (0x0008bf34) cell_area_left_week_number_pane_g1_ParamLimits

0xc206,	// (0x0009690b) cell_area_left_week_number_pane_t1_ParamLimits

0x182f,	// (0x0008bf34) cell_month_view_pane_g1_ParamLimits

0xc206,	// (0x0009690b) cell_month_view_pane_t1_ParamLimits

0xc62a,	// (0x00096d2f) main_clock2_btn_pane_g1

0xc332,	// (0x00096a37) main_clock2_btn_pane_t1

0x153a,	// (0x0008bc3f) listscroll_cmail_pane_ParamLimits

0xbad7,	// (0x000961dc) main_sp_fs_email_pane_g1_ParamLimits

0xbae3,	// (0x000961e8) main_sp_fs_email_pane_g2_ParamLimits

0xfbd6,	// (0x0009a2db) main_sp_fs_email_pane_g_ParamLimits

0xbe09,	// (0x0009650e) list_recal_day_pane_ParamLimits

0xbe1a,	// (0x0009651f) mian_recal_day_pane_t1

0x9305,	// (0x00093a0a) list_single_dyc_row_text_pane_t4_ParamLimits

0x9305,	// (0x00093a0a) list_single_dyc_row_text_pane_t4

0x934a,	// (0x00093a4f) list_single_dyc_row_text_pane_t5_ParamLimits

0x934a,	// (0x00093a4f) list_single_dyc_row_text_pane_t5

0x028a,	// (0x0008a98f) list_single_dyc_row_text_pane_t6_ParamLimits

0x028a,	// (0x0008a98f) list_single_dyc_row_text_pane_t6

0x461a,	// (0x0008ed1f) aid_mgn_list_cale_time_pane

0x55c8,	// (0x0008fccd) main_gallery2_pane_ParamLimits

0xece2,	// (0x000993e7) main_clock2_pane_cp01_t1

0xecf0,	// (0x000993f5) main_clock2_pane_cp01_t3

0x0001,

0xf6c6,	// (0x00099dcb) main_clock2_pane_cp01_t

0x2f4b,	// (0x0008d650) cale_week_scroll_pane_g16_ParamLimits

0x2f4b,	// (0x0008d650) cale_week_scroll_pane_g16

0xc958,	// (0x0009705d) vorec_slider_pane

0xc2c4,	// (0x000969c9) vidtel_button_pane_t1_ParamLimits

0x98fe,	// (0x00094003) main_fs_bigclock_clock_pane_g1_ParamLimits

0x98fe,	// (0x00094003) main_fs_bigclock_clock_pane_g2_ParamLimits

0x98fe,	// (0x00094003) main_fs_bigclock_clock_pane_g3_ParamLimits

0x98fe,	// (0x00094003) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfcd6,	// (0x0009a3db) main_fs_bigclock_clock_pane_g_ParamLimits

0x990e,	// (0x00094013) main_fs_bigclock_clock_pane_t1_ParamLimits

0x9924,	// (0x00094029) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfcdf,	// (0x0009a3e4) main_fs_bigclock_clock_pane_t_ParamLimits

0x5cc7,	// (0x000903cc) main_mup3_lyrics_pane_ParamLimits

0x5cc7,	// (0x000903cc) main_mup3_lyrics_pane

0xa4e6,	// (0x00094beb) main_mup3_lyrics_pane_t1_ParamLimits

0xa4e6,	// (0x00094beb) main_mup3_lyrics_pane_t1

0x6874,	// (0x00090f79) aid_main_mp4_pane_t1_area

0x687e,	// (0x00090f83) aid_main_mp4_pane_t2_area

0x6985,	// (0x0009108a) main_mp4_pane_g7_ParamLimits

0x6985,	// (0x0009108a) main_mp4_pane_g7

0x6991,	// (0x00091096) main_mp4_pane_g8_ParamLimits

0x6991,	// (0x00091096) main_mp4_pane_g8

0x6d91,	// (0x00091496) aid_call6_pane_g1_size

0xa12a,	// (0x0009482f) list_double_large_graphic_phob2_other_pane_ParamLimits

0xa12a,	// (0x0009482f) list_double_large_graphic_phob2_other_pane

0xa50d,	// (0x00094c12) list_double_large_graphic_phob2_other_pane_g1

0x0a98,	// (0x0008b19d) list_highlight_pane_cp026

0x153a,	// (0x0008bc3f) main_welc_pane_ParamLimits

0x9160,	// (0x00093865) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0x9160,	// (0x00093865) main_sp_fs_ctrlbar_pane_g3

0x917a,	// (0x0009387f) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0x917a,	// (0x0009387f) main_sp_fs_ctrlbar_pane_g4

0x91ac,	// (0x000938b1) toolbar2_fixed_button_pane_cp01

0x91b7,	// (0x000938bc) toolbar2_fixed_button_pane_cp02

0x91c4,	// (0x000938c9) toolbar2_fixed_button_pane_cp03

0xa20a,	// (0x0009490f) list_welc_entry_pane_ParamLimits

0xa20a,	// (0x0009490f) list_welc_entry_pane

0xa276,	// (0x0009497b) main_welc_pane_g3_ParamLimits

0xa276,	// (0x0009497b) main_welc_pane_g3

0xa2b6,	// (0x000949bb) main_welc_pane_t2_ParamLimits

0xa2b6,	// (0x000949bb) main_welc_pane_t2

0xa2ca,	// (0x000949cf) main_welc_pane_t3_ParamLimits

0xa2ca,	// (0x000949cf) main_welc_pane_t3

0x0005,

0xfde2,	// (0x0009a4e7) main_welc_pane_t_ParamLimits

0xfde2,	// (0x0009a4e7) main_welc_pane_t

0xa3d4,	// (0x00094ad9) welc_button_pane_ParamLimits

0xa3d4,	// (0x00094ad9) welc_button_pane

0xa442,	// (0x00094b47) welc_service_logo_pane_ParamLimits

0xa442,	// (0x00094b47) welc_service_logo_pane

0xa515,	// (0x00094c1a) list_single_welc_entry_pane_ParamLimits

0xa515,	// (0x00094c1a) list_single_welc_entry_pane

0xa526,	// (0x00094c2b) list_single_welc_entry_pane_g1

0xa52e,	// (0x00094c33) list_single_welc_entry_pane_t1

0xa53c,	// (0x00094c41) list_single_welc_entry_pane_t2

0x0001,

0xfdf4,	// (0x0009a4f9) list_single_welc_entry_pane_t

0x0a98,	// (0x0008b19d) bg_button_pane_cp035

0xc340,	// (0x00096a45) welc_button_pane_t1

0xa54a,	// (0x00094c4f) welc_service_logo_pane_g1

0xa553,	// (0x00094c58) welc_service_logo_pane_g2

0x0001,

0xfdf9,	// (0x0009a4fe) welc_service_logo_pane_g

0x2983,	// (0x0008d088) main_int_radio_pane

0xb5a7,	// (0x00095cac) list_single_fs_dyc_pane_g1

0x9ff0,	// (0x000946f5) list_double_large_graphic_phob2_pane_g3_ParamLimits

0x9ff0,	// (0x000946f5) list_double_large_graphic_phob2_pane_g3

0x9ffc,	// (0x00094701) list_double_large_graphic_phob2_pane_g4_ParamLimits

0x9ffc,	// (0x00094701) list_double_large_graphic_phob2_pane_g4

0xa55c,	// (0x00094c61) main_int_radio1_pane_ParamLimits

0xa55c,	// (0x00094c61) main_int_radio1_pane

0xc34e,	// (0x00096a53) find_pane_cp02

0xa572,	// (0x00094c77) input_focus_pane_cp12_ParamLimits

0xa572,	// (0x00094c77) input_focus_pane_cp12

0xa57e,	// (0x00094c83) input_focus_pane_cp13_ParamLimits

0xa57e,	// (0x00094c83) input_focus_pane_cp13

0xa596,	// (0x00094c9b) input_focus_pane_cp14_ParamLimits

0xa596,	// (0x00094c9b) input_focus_pane_cp14

0xc357,	// (0x00096a5c) int_radio1_listscroll_pane

0xa5ae,	// (0x00094cb3) main_int_radio1_pane_g1_ParamLimits

0xa5ae,	// (0x00094cb3) main_int_radio1_pane_g1

0xa5ba,	// (0x00094cbf) main_int_radio1_pane_t1_ParamLimits

0xa5ba,	// (0x00094cbf) main_int_radio1_pane_t1

0xa5cc,	// (0x00094cd1) main_int_radio1_pane_t2_ParamLimits

0xa5cc,	// (0x00094cd1) main_int_radio1_pane_t2

0xa5e0,	// (0x00094ce5) main_int_radio1_pane_t3_ParamLimits

0xa5e0,	// (0x00094ce5) main_int_radio1_pane_t3

0xa5f4,	// (0x00094cf9) main_int_radio1_pane_t4_ParamLimits

0xa5f4,	// (0x00094cf9) main_int_radio1_pane_t4

0xc361,	// (0x00096a66) main_int_radio1_pane_t5_ParamLimits

0xc361,	// (0x00096a66) main_int_radio1_pane_t5

0xa60b,	// (0x00094d10) main_int_radio1_pane_t6_ParamLimits

0xa60b,	// (0x00094d10) main_int_radio1_pane_t6

0xa61d,	// (0x00094d22) main_int_radio1_pane_t7_ParamLimits

0xa61d,	// (0x00094d22) main_int_radio1_pane_t7

0xa62f,	// (0x00094d34) main_int_radio1_pane_t8_ParamLimits

0xa62f,	// (0x00094d34) main_int_radio1_pane_t8

0xa641,	// (0x00094d46) main_int_radio1_pane_t9_ParamLimits

0xa641,	// (0x00094d46) main_int_radio1_pane_t9

0xa653,	// (0x00094d58) main_int_radio1_pane_t10_ParamLimits

0xa653,	// (0x00094d58) main_int_radio1_pane_t10

0xa684,	// (0x00094d89) main_int_radio1_pane_t11_ParamLimits

0xa684,	// (0x00094d89) main_int_radio1_pane_t11

0xa6b5,	// (0x00094dba) main_int_radio1_pane_t12_ParamLimits

0xa6b5,	// (0x00094dba) main_int_radio1_pane_t12

0x000b,

0xfdfe,	// (0x0009a503) main_int_radio1_pane_t_ParamLimits

0xfdfe,	// (0x0009a503) main_int_radio1_pane_t

0xc218,	// (0x0009691d) int_radio_list_pane

0xc220,	// (0x00096925) scroll_pane_cp037

0xc373,	// (0x00096a78) list_double_large_graphic_int_radio_pane_ParamLimits

0xc373,	// (0x00096a78) list_double_large_graphic_int_radio_pane

0xc387,	// (0x00096a8c) list_double_large_graphic_int_radio_pane_g1

0x052c,	// (0x0008ac31) list_double_large_graphic_int_radio_pane_t1

0x053a,	// (0x0008ac3f) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfe17,	// (0x0009a51c) list_double_large_graphic_int_radio_pane_t

0x0a98,	// (0x0008b19d) list_highlight_pane_cp027

0xc2fd,	// (0x00096a02) main_button_pane_4

0xa282,	// (0x00094987) main_welc_pane_g4_ParamLimits

0xa282,	// (0x00094987) main_welc_pane_g4

0xa2dc,	// (0x000949e1) main_welc_pane_t4_ParamLimits

0xa2dc,	// (0x000949e1) main_welc_pane_t4

0xa2f0,	// (0x000949f5) main_welc_pane_t5_ParamLimits

0xa2f0,	// (0x000949f5) main_welc_pane_t5

0xa328,	// (0x00094a2d) main_welc_pane_t6_ParamLimits

0xa328,	// (0x00094a2d) main_welc_pane_t6

0xa3e2,	// (0x00094ae7) welc_button_pane_2_ParamLimits

0xa3e2,	// (0x00094ae7) welc_button_pane_2

0xa402,	// (0x00094b07) welc_button_pane_3_ParamLimits

0xa402,	// (0x00094b07) welc_button_pane_3

0xc2fd,	// (0x00096a02) welc_button_pane_4

0xa424,	// (0x00094b29) welc_button_pane_5_ParamLimits

0xa424,	// (0x00094b29) welc_button_pane_5

0x26f8,	// (0x0008cdfd) main_popup_welc_pane

0xc7b4,	// (0x00096eb9) main_welc_sk_g3

0xc7be,	// (0x00096ec3) main_welc_sk_g4

0xc7c8,	// (0x00096ecd) main_welc_sk_t3

0x0548,	// (0x0008ac4d) main_welc_sk_t4

0x0558,	// (0x0008ac5d) popup_welc_pane_t4

0x0566,	// (0x0008ac6b) popup_welc_pane_t5

0x0574,	// (0x0008ac79) popup_welc_pane_t6

0x2983,	// (0x0008d088) main_acti_pane

0x0a98,	// (0x0008b19d) main_sso_pane

0xa6cc,	// (0x00094dd1) sso_body_pane_ParamLimits

0xa6cc,	// (0x00094dd1) sso_body_pane

0xa6e7,	// (0x00094dec) sso_logo_pane_ParamLimits

0xa6e7,	// (0x00094dec) sso_logo_pane

0xa716,	// (0x00094e1b) sso_sk_pane_ParamLimits

0xa716,	// (0x00094e1b) sso_sk_pane

0xa723,	// (0x00094e28) main_sso_logo_pane_g1

0xa72c,	// (0x00094e31) sso_sk_pane_t1_ParamLimits

0xa72c,	// (0x00094e31) sso_sk_pane_t1

0xa740,	// (0x00094e45) sso_sk_pane_t2_ParamLimits

0xa740,	// (0x00094e45) sso_sk_pane_t2

0x0001,

0xfe1c,	// (0x0009a521) sso_sk_pane_t_ParamLimits

0xfe1c,	// (0x0009a521) sso_sk_pane_t

0x05b6,	// (0x0008acbb) aid_sso_gap

0x05bf,	// (0x0008acc4) aid_sso_txt1

0x05c9,	// (0x0008acce) aid_sso_txt2

0x05d3,	// (0x0008acd8) aid_sso_txt3

0x0002,

0xfe21,	// (0x0009a526) aid_sso_txt

0x05dd,	// (0x0008ace2) aid_sso_widget

0xa79d,	// (0x00094ea2) sso_btn_pane_ParamLimits

0xa79d,	// (0x00094ea2) sso_btn_pane

0xa823,	// (0x00094f28) sso_option_pane_ParamLimits

0xa823,	// (0x00094f28) sso_option_pane

0xa8cb,	// (0x00094fd0) sso_query_pane_ParamLimits

0xa8cb,	// (0x00094fd0) sso_query_pane

0xa91b,	// (0x00095020) sso_query_pane_cp01_ParamLimits

0xa91b,	// (0x00095020) sso_query_pane_cp01

0xa971,	// (0x00095076) sso_t_hdr_pane_ParamLimits

0xa971,	// (0x00095076) sso_t_hdr_pane

0xa995,	// (0x0009509a) sso_t_nml_pane_ParamLimits

0xa995,	// (0x0009509a) sso_t_nml_pane

0x05e7,	// (0x0008acec) sso_t_sub_pane

0xa6f4,	// (0x00094df9) sso_popup_window_ParamLimits

0xa6f4,	// (0x00094df9) sso_popup_window

0xa752,	// (0x00094e57) sso_apps_pane_ParamLimits

0xa752,	// (0x00094e57) sso_apps_pane

0xa775,	// (0x00094e7a) sso_body_pane_g1

0xa77d,	// (0x00094e82) sso_body_pane_t1

0xa78d,	// (0x00094e92) sso_body_pane_t2

0x0001,

0xfe28,	// (0x0009a52d) sso_body_pane_t

0xa7e3,	// (0x00094ee8) sso_btn_pane_cp01_ParamLimits

0xa7e3,	// (0x00094ee8) sso_btn_pane_cp01

0xa89f,	// (0x00094fa4) sso_prog_pane_ParamLimits

0xa89f,	// (0x00094fa4) sso_prog_pane

0xa9f5,	// (0x000950fa) sso_t_hdr_pane_t1_ParamLimits

0xa9f5,	// (0x000950fa) sso_t_hdr_pane_t1

0x05fc,	// (0x0008ad01) input_focus_pane_cp10_ParamLimits

0x05fc,	// (0x0008ad01) input_focus_pane_cp10

0x0610,	// (0x0008ad15) sso_query_pane_t1_ParamLimits

0x0610,	// (0x0008ad15) sso_query_pane_t1

0x0623,	// (0x0008ad28) sso_query_pane_t2_ParamLimits

0x0623,	// (0x0008ad28) sso_query_pane_t2

0x063d,	// (0x0008ad42) sso_query_pane_t3_ParamLimits

0x063d,	// (0x0008ad42) sso_query_pane_t3

0x0667,	// (0x0008ad6c) sso_query_pane_t4_ParamLimits

0x0667,	// (0x0008ad6c) sso_query_pane_t4

0x0003,

0xfe2d,	// (0x0009a532) sso_query_pane_t_ParamLimits

0xfe2d,	// (0x0009a532) sso_query_pane_t

0x068b,	// (0x0008ad90) bg_button_pane_cp22

0x0694,	// (0x0008ad99) sso_btn_pane_t1

0xaa0e,	// (0x00095113) sso_t_nml_pane_t1_ParamLimits

0xaa0e,	// (0x00095113) sso_t_nml_pane_t1

0x06a3,	// (0x0008ada8) sso_option_row_pane_ParamLimits

0x06a3,	// (0x0008ada8) sso_option_row_pane

0x06b0,	// (0x0008adb5) sso_t_sub_pane_t1_ParamLimits

0x06b0,	// (0x0008adb5) sso_t_sub_pane_t1

0x153a,	// (0x0008bc3f) bg_popup_window_pane_cp11_ParamLimits

0x153a,	// (0x0008bc3f) bg_popup_window_pane_cp11

0x06cd,	// (0x0008add2) popup_sk_window_cp01_ParamLimits

0x06cd,	// (0x0008add2) popup_sk_window_cp01

0x06da,	// (0x0008addf) sso_popup_body_pane_ParamLimits

0x06da,	// (0x0008addf) sso_popup_body_pane

0x06e7,	// (0x0008adec) scroll_pane_cp21_ParamLimits

0x06e7,	// (0x0008adec) scroll_pane_cp21

0x06f4,	// (0x0008adf9) sso_popup_body_t_pane_ParamLimits

0x06f4,	// (0x0008adf9) sso_popup_body_t_pane

0x0701,	// (0x0008ae06) sso_popup_body_t_hdr_pane_ParamLimits

0x0701,	// (0x0008ae06) sso_popup_body_t_hdr_pane

0xaa2b,	// (0x00095130) sso_popup_body_t_nml_pane_ParamLimits

0xaa2b,	// (0x00095130) sso_popup_body_t_nml_pane

0xaa49,	// (0x0009514e) sso_popup_body_t_sub_pane_ParamLimits

0xaa49,	// (0x0009514e) sso_popup_body_t_sub_pane

0x0713,	// (0x0008ae18) sso_popup_body_t_hdr_pane_t1

0xaa6c,	// (0x00095171) sso_popup_body_t_nml_pane_t1_ParamLimits

0xaa6c,	// (0x00095171) sso_popup_body_t_nml_pane_t1

0x0723,	// (0x0008ae28) sso_popup_body_t_sub_pane_t1_ParamLimits

0x0723,	// (0x0008ae28) sso_popup_body_t_sub_pane_t1

0xc6eb,	// (0x00096df0) sso_prog_pane_g1

0xaab6,	// (0x000951bb) sso_apps_pane_comp1_ParamLimits

0xaab6,	// (0x000951bb) sso_apps_pane_comp1

0x0748,	// (0x0008ae4d) sso_apps_pane_comp1_g1

0x0750,	// (0x0008ae55) sso_apps_pane_comp1_t1

0x076c,	// (0x0008ae71) sso_option_row_pane_g1

0x0784,	// (0x0008ae89) sso_option_row_pane_t1

0xbb5f,	// (0x00096264) list_cmail_pane_ParamLimits

0x0a98,	// (0x0008b19d) main_call7_pane

0xa1ec,	// (0x000948f1) bg_welc_area_ParamLimits

0xa1ec,	// (0x000948f1) bg_welc_area

0xa362,	// (0x00094a67) sso_t_hdr_pane_a_t1_ParamLimits

0xa362,	// (0x00094a67) sso_t_hdr_pane_a_t1

0xa376,	// (0x00094a7b) sso_t_nml_pane_a_t1_ParamLimits

0xa376,	// (0x00094a7b) sso_t_nml_pane_a_t1

0xa3a0,	// (0x00094aa5) sso_t_sub_pane_a_t1_ParamLimits

0xa3a0,	// (0x00094aa5) sso_t_sub_pane_a_t1

0xa434,	// (0x00094b39) welc_button_pane_cp01_ParamLimits

0xa434,	// (0x00094b39) welc_button_pane_cp01

0xc390,	// (0x00096a95) sso_btn_pane_t1_copy1

0xc39f,	// (0x00096aa4) welc_button_pane_2_comp1

0x0584,	// (0x0008ac89) sso_t_hdr_pane_p_t1

0x0594,	// (0x0008ac99) sso_t_nml_pane_p_t1

0x05a4,	// (0x0008aca9) sso_t_sub_pane_p_t1

0x0a98,	// (0x0008b19d) main_att_pane

0x0a98,	// (0x0008b19d) main_vod_pane

0x05e7,	// (0x0008acec) sso_t_sub_pane_ParamLimits

0x075e,	// (0x0008ae63) input_focus_pane_cp10_t1

0x0784,	// (0x0008ae89) sso_option_row_pane_t1_ParamLimits

0xaacb,	// (0x000951d0) main_att_body_pane_ParamLimits

0xaacb,	// (0x000951d0) main_att_body_pane

0xaadf,	// (0x000951e4) att_btn_emg_pane_ParamLimits

0xaadf,	// (0x000951e4) att_btn_emg_pane

0xaaf7,	// (0x000951fc) att_btn_pane_ParamLimits

0xaaf7,	// (0x000951fc) att_btn_pane

0xab61,	// (0x00095266) att_btn_pane_cp01_ParamLimits

0xab61,	// (0x00095266) att_btn_pane_cp01

0xab93,	// (0x00095298) att_li_srv_pane_ParamLimits

0xab93,	// (0x00095298) att_li_srv_pane

0xaba5,	// (0x000952aa) att_opt_pane_ParamLimits

0xaba5,	// (0x000952aa) att_opt_pane

0xabe9,	// (0x000952ee) att_query_pane_ParamLimits

0xabe9,	// (0x000952ee) att_query_pane

0xac59,	// (0x0009535e) att_query_pane_cp01_ParamLimits

0xac59,	// (0x0009535e) att_query_pane_cp01

0xac9d,	// (0x000953a2) att_t_hdr_pane_ParamLimits

0xac9d,	// (0x000953a2) att_t_hdr_pane

0xad05,	// (0x0009540a) att_t_nml_pane_ParamLimits

0xad05,	// (0x0009540a) att_t_nml_pane

0xad7b,	// (0x00095480) att_t_nml_pane_cp01_ParamLimits

0xad7b,	// (0x00095480) att_t_nml_pane_cp01

0xad9f,	// (0x000954a4) att_t_nmlb_pane_ParamLimits

0xad9f,	// (0x000954a4) att_t_nmlb_pane

0xae05,	// (0x0009550a) att_term_pane_ParamLimits

0xae05,	// (0x0009550a) att_term_pane

0xae4b,	// (0x00095550) main_att_body_pane_g1_ParamLimits

0xae4b,	// (0x00095550) main_att_body_pane_g1

0x07a0,	// (0x0008aea5) att_t_hdr_pane_t1_ParamLimits

0x07a0,	// (0x0008aea5) att_t_hdr_pane_t1

0x07b3,	// (0x0008aeb8) att_t_nml_pane_t1_ParamLimits

0x07b3,	// (0x0008aeb8) att_t_nml_pane_t1

0x0694,	// (0x0008ad99) att_btn_pane_t1

0x068b,	// (0x0008ad90) bg_button_pane_cp23

0xae75,	// (0x0009557a) att_li_srv_row_pane_ParamLimits

0xae75,	// (0x0009557a) att_li_srv_row_pane

0x07d8,	// (0x0008aedd) att_t_nmlb_pane_t1_ParamLimits

0x07d8,	// (0x0008aedd) att_t_nmlb_pane_t1

0x07f4,	// (0x0008aef9) att_query_pane_t1

0x0803,	// (0x0008af08) att_query_pane_t2

0x0812,	// (0x0008af17) att_query_pane_t3

0x0002,

0xfe3b,	// (0x0009a540) att_query_pane_t

0x0821,	// (0x0008af26) input_focus_pane_cp11

0x082a,	// (0x0008af2f) att_term_pane_t1_ParamLimits

0x082a,	// (0x0008af2f) att_term_pane_t1

0x0a98,	// (0x0008b19d) att_opt_row_pane

0x0847,	// (0x0008af4c) att_opt_row_pane_g1

0x084f,	// (0x0008af54) att_opt_row_pane_t1_ParamLimits

0x084f,	// (0x0008af54) att_opt_row_pane_t1

0xae85,	// (0x0009558a) att_li_srv_row_pane_g1

0xae8d,	// (0x00095592) att_li_srv_row_pane_t1_ParamLimits

0xae8d,	// (0x00095592) att_li_srv_row_pane_t1

0xae8d,	// (0x00095592) att_li_srv_row_pane_t2_ParamLimits

0xae8d,	// (0x00095592) att_li_srv_row_pane_t2

0x0001,

0xfe42,	// (0x0009a547) att_li_srv_row_pane_t_ParamLimits

0xfe42,	// (0x0009a547) att_li_srv_row_pane_t

0x0868,	// (0x0008af6d) att_btn_close_pane_g1

0x0a98,	// (0x0008b19d) bg_button_pane_cp24

0xaea2,	// (0x000955a7) main_vod_body_pane_ParamLimits

0xaea2,	// (0x000955a7) main_vod_body_pane

0xaeb0,	// (0x000955b5) main_vod_body_pane_g1_ParamLimits

0xaeb0,	// (0x000955b5) main_vod_body_pane_g1

0xaee0,	// (0x000955e5) scroll_pane_cp24_ParamLimits

0xaee0,	// (0x000955e5) scroll_pane_cp24

0xaf28,	// (0x0009562d) vod_btn_pane_ParamLimits

0xaf28,	// (0x0009562d) vod_btn_pane

0xaf66,	// (0x0009566b) vod_det_pane_ParamLimits

0xaf66,	// (0x0009566b) vod_det_pane

0xaf92,	// (0x00095697) vod_logo_g1_ParamLimits

0xaf92,	// (0x00095697) vod_logo_g1

0xafcc,	// (0x000956d1) vod_opt_pane_ParamLimits

0xafcc,	// (0x000956d1) vod_opt_pane

0xaffc,	// (0x00095701) vod_opt_pane_cp01_ParamLimits

0xaffc,	// (0x00095701) vod_opt_pane_cp01

0xb024,	// (0x00095729) vod_query_pane_ParamLimits

0xb024,	// (0x00095729) vod_query_pane

0xb04c,	// (0x00095751) vod_query_pane_cp01_ParamLimits

0xb04c,	// (0x00095751) vod_query_pane_cp01

0xb058,	// (0x0009575d) vod_t_nml_pane_ParamLimits

0xb058,	// (0x0009575d) vod_t_nml_pane

0xb102,	// (0x00095807) vod_t_nml_pane_cp01_ParamLimits

0xb102,	// (0x00095807) vod_t_nml_pane_cp01

0xb13a,	// (0x0009583f) vod_t_sub_pane_ParamLimits

0xb13a,	// (0x0009583f) vod_t_sub_pane

0xb166,	// (0x0009586b) vod_t_sub_pane_cp01_ParamLimits

0xb166,	// (0x0009586b) vod_t_sub_pane_cp01

0x0821,	// (0x0008af26) vod_query_field_pane

0x0870,	// (0x0008af75) vod_query_pane_t1

0x087f,	// (0x0008af84) bg_button_pane_cp25

0x0694,	// (0x0008ad99) sso_btn_pane_t1_copy2

0xb18e,	// (0x00095893) vod_t_nml_pane_t1_ParamLimits

0xb18e,	// (0x00095893) vod_t_nml_pane_t1

0x0888,	// (0x0008af8d) vod_opt_row_pane_ParamLimits

0x0888,	// (0x0008af8d) vod_opt_row_pane

0x089a,	// (0x0008af9f) vod_t_sub_pane_t1_ParamLimits

0x089a,	// (0x0008af9f) vod_t_sub_pane_t1

0x08b3,	// (0x0008afb8) vod_det_cell_pane_ParamLimits

0x08b3,	// (0x0008afb8) vod_det_cell_pane

0x0a98,	// (0x0008b19d) input_focus_pane_cp15

0x08c4,	// (0x0008afc9) vod_query_field_pane_t1

0x08d2,	// (0x0008afd7) vod_opt_row_pane_g1_ParamLimits

0x08d2,	// (0x0008afd7) vod_opt_row_pane_g1

0x08de,	// (0x0008afe3) vod_opt_row_pane_t1_ParamLimits

0x08de,	// (0x0008afe3) vod_opt_row_pane_t1

0x0900,	// (0x0008b005) vod_det_cell_field_pane

0x0909,	// (0x0008b00e) vod_det_cell_pane_g1

0x0911,	// (0x0008b016) vod_det_cell_pane_t1

0x0a98,	// (0x0008b19d) input_focus_pane_cp16

0x0920,	// (0x0008b025) vod_det_cell_field_pane_t1

0xb1c9,	// (0x000958ce) call7_btn_grp_pane_ParamLimits

0xb1c9,	// (0x000958ce) call7_btn_grp_pane

0xc69f,	// (0x00096da4) call7_bubble_pane_ParamLimits

0xc69f,	// (0x00096da4) call7_bubble_pane

0xb1d6,	// (0x000958db) cell_call7_btn_pane_ParamLimits

0xb1d6,	// (0x000958db) cell_call7_btn_pane

0xb1e7,	// (0x000958ec) call7_pane_g1_ParamLimits

0xb1e7,	// (0x000958ec) call7_pane_g1

0xb1f6,	// (0x000958fb) call7_windows_conf_pane_ParamLimits

0xb1f6,	// (0x000958fb) call7_windows_conf_pane

0xb218,	// (0x0009591d) popup_call7_1st_window_ParamLimits

0xb218,	// (0x0009591d) popup_call7_1st_window

0xb226,	// (0x0009592b) popup_call7_2nd_window_ParamLimits

0xb226,	// (0x0009592b) popup_call7_2nd_window

0xb234,	// (0x00095939) popup_call7_3rd_window_ParamLimits

0xb234,	// (0x00095939) popup_call7_3rd_window

0x0a98,	// (0x0008b19d) bg_button_pane_cp26

0xc1e4,	// (0x000968e9) cell_call7_btn_pane_g1

0x050f,	// (0x0008ac14) cell_call7_btn_pane_t1

0x0a98,	// (0x0008b19d) bg_popup_window_pane_cp12

0x092e,	// (0x0008b033) popup_call7_1st_window_g1

0x0936,	// (0x0008b03b) popup_call7_1st_window_g2

0x093e,	// (0x0008b043) popup_call7_1st_window_g3

0x0002,

0xfe47,	// (0x0009a54c) popup_call7_1st_window_g

0x0946,	// (0x0008b04b) popup_call7_1st_window_t1

0x0955,	// (0x0008b05a) popup_call7_1st_window_t2

0x0965,	// (0x0008b06a) popup_call7_1st_window_t3

0x0002,

0xfe4e,	// (0x0009a553) popup_call7_1st_window_t

0x0a98,	// (0x0008b19d) bg_popup_window_pane_cp13

0x0975,	// (0x0008b07a) popup_call7_2nd_window_g1

0x097d,	// (0x0008b082) popup_call7_2nd_window_g2

0x0985,	// (0x0008b08a) popup_call7_2nd_window_g3

0x0002,

0xfe55,	// (0x0009a55a) popup_call7_2nd_window_g

0x098d,	// (0x0008b092) popup_call7_2nd_window_t1

0x0a98,	// (0x0008b19d) bg_popup_window_pane_cp14

0x099c,	// (0x0008b0a1) call7_list_conf_pane

0x09a4,	// (0x0008b0a9) call7_list_conf_row_pane_ParamLimits

0x09a4,	// (0x0008b0a9) call7_list_conf_row_pane

0x09b7,	// (0x0008b0bc) call7_list_conf_row_pane_g1

0x09bf,	// (0x0008b0c4) call7_list_conf_row_pane_g2

0x0001,

0xfe5c,	// (0x0009a561) call7_list_conf_row_pane_g

0x09c7,	// (0x0008b0cc) call7_list_conf_row_pane_t1

0x0a98,	// (0x0008b19d) list_highlight_pane_cp22

0xa871,	// (0x00094f76) sso_option_pane_cp01_ParamLimits

0xa871,	// (0x00094f76) sso_option_pane_cp01

0xc632,	// (0x00096d37) msg_header_pane_ParamLimits

0xd3ce,	// (0x00097ad3) bg_button_pane_cp01_ParamLimits

0xd3e2,	// (0x00097ae7) input_focus_pane_cp07_ParamLimits

0x91fc,	// (0x00093901) popup_email_progress_window

0xc6eb,	// (0x00096df0) popup_email_progress_window_g1

0x09d5,	// (0x0008b0da) popup_email_progress_window_g2

0x0001,

0xfe61,	// (0x0009a566) popup_email_progress_window_g

0x09dd,	// (0x0008b0e2) popup_email_progress_window_t1

0x0a98,	// (0x0008b19d) cmail_conv_pane

0x02dd,	// (0x0008a9e2) list_single_dyc_row_pane_g5_ParamLimits

0x02dd,	// (0x0008a9e2) list_single_dyc_row_pane_g5

0x02e9,	// (0x0008a9ee) list_single_dyc_row_pane_g6_ParamLimits

0x02e9,	// (0x0008a9ee) list_single_dyc_row_pane_g6

0x0301,	// (0x0008aa06) list_single_dyc_row_pane_g7_ParamLimits

0x0301,	// (0x0008aa06) list_single_dyc_row_pane_g7

0xa21a,	// (0x0009491f) main_button_pane_5_ParamLimits

0xa21a,	// (0x0009491f) main_button_pane_5

0xa6db,	// (0x00094de0) sso_emg_call_btn_pane_ParamLimits

0xa6db,	// (0x00094de0) sso_emg_call_btn_pane

0xa9e5,	// (0x000950ea) sso_t_sub_pane_cp01_ParamLimits

0xa9e5,	// (0x000950ea) sso_t_sub_pane_cp01

0x076c,	// (0x0008ae71) sso_option_row_pane_g1_ParamLimits

0x0778,	// (0x0008ae7d) sso_option_row_pane_g2_ParamLimits

0x0778,	// (0x0008ae7d) sso_option_row_pane_g2

0x0001,

0xfe36,	// (0x0009a53b) sso_option_row_pane_g_ParamLimits

0xfe36,	// (0x0009a53b) sso_option_row_pane_g

0xab79,	// (0x0009527e) att_btn_pane_cp02_ParamLimits

0xab79,	// (0x0009527e) att_btn_pane_cp02

0x09eb,	// (0x0008b0f0) cmail_conv_hdr_pane

0x09f4,	// (0x0008b0f9) list_cmail_conv_pane

0x09fe,	// (0x0008b103) scroll_pane_cp31

0x0a06,	// (0x0008b10b) cmail_conv_hdr_pane_t1

0x0a14,	// (0x0008b119) cmail_conv_hdr_pane_t2

0x0001,

0xfe66,	// (0x0009a56b) cmail_conv_hdr_pane_t

0x0a22,	// (0x0008b127) bubble_cmail_conv_pane_ParamLimits

0x0a22,	// (0x0008b127) bubble_cmail_conv_pane

0xbc81,	// (0x00096386) aid_size_colorization_pane

0xc958,	// (0x0009705d) bg_bubble_cmail_conv_pane

0x0a3e,	// (0x0008b143) body_bubble_cmail_conv_pane

0xce54,	// (0x00097559) bubble_cmail_conv_pane_g1

0xce5c,	// (0x00097561) bubble_cmail_conv_pane_g2

0xce64,	// (0x00097569) bubble_cmail_conv_pane_g3

0x0002,

0xf252,	// (0x00099957) bubble_cmail_conv_pane_g

0x0a46,	// (0x0008b14b) bubble_cmail_conv_pane_t1

0x0a54,	// (0x0008b159) bg_bubble_cmail_conv_pane_g1

0x0a5d,	// (0x0008b162) bg_bubble_cmail_conv_pane_g2

0x0a66,	// (0x0008b16b) bg_bubble_cmail_conv_pane_g3

0x0002,

0xfe6b,	// (0x0009a570) bg_bubble_cmail_conv_pane_g

0x0a6f,	// (0x0008b174) body_bubble_cmail_conv_pane_t1_ParamLimits

0x0a6f,	// (0x0008b174) body_bubble_cmail_conv_pane_t1

0x0a86,	// (0x0008b18b) body_bubble_cmail_conv_pane_t2_ParamLimits

0x0a86,	// (0x0008b18b) body_bubble_cmail_conv_pane_t2

0x0001,

0xfe72,	// (0x0009a577) body_bubble_cmail_conv_pane_t_ParamLimits

0xfe72,	// (0x0009a577) body_bubble_cmail_conv_pane_t

0xc69f,	// (0x00096da4) list_highlight_pane_cp024_ParamLimits
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

} // end of namespace AknLayoutScalable_Abrw_pvp4_apps_vga4_prt_tch_Large
