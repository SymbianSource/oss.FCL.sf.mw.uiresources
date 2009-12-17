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

#include "aknlayoutscalable_elaf_pql_apps_qvga_lsc_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pqp_apps_qvga_prt[]; }

namespace AknLayoutScalable_Elaf_pql_apps_qvga_lsc_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pqp_apps_qvga_prt + 0x00037626 };

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
0x374c,	// (0x0003ad72) Screen

0x3756,	// (0x0003ad7c) application_window

0x3785,	// (0x0003adab) area_bottom_pane_ParamLimits

0x3785,	// (0x0003adab) area_bottom_pane

0x37b8,	// (0x0003adde) area_top_pane_ParamLimits

0x37b8,	// (0x0003adde) area_top_pane

0x188c,	// (0x00038eb2) call_video_uplink_pane_ParamLimits

0x188c,	// (0x00038eb2) call_video_uplink_pane

0x3829,	// (0x0003ae4f) main_pane_ParamLimits

0x3829,	// (0x0003ae4f) main_pane

0xc994,	// (0x00043fba) context_pane

0x651a,	// (0x0003db40) navi_pane

0x6543,	// (0x0003db69) popup_cale_events_window_ParamLimits

0x6543,	// (0x0003db69) popup_cale_events_window

0xc9a7,	// (0x00043fcd) popup_mup_playback_window

0x655b,	// (0x0003db81) signal_pane

0x1fe3,	// (0x00039609) main_browser_pane

0xb4dc,	// (0x00042b02) main_burst_pane

0x20d6,	// (0x000396fc) main_calc_pane

0xb4dc,	// (0x00042b02) main_cale_day_pane

0x3dd8,	// (0x0003b3fe) main_cale_month_pane

0xb4dc,	// (0x00042b02) main_cale_week_pane

0xb4dc,	// (0x00042b02) main_call_pane

0x1cb9,	// (0x000392df) main_call_poc_pane

0xb4dc,	// (0x00042b02) main_camera_pane

0xb4dc,	// (0x00042b02) main_chi_dic_pane

0xb2db,	// (0x00042901) main_clock_pane

0x1cb9,	// (0x000392df) main_fmradio_pane

0xb4dc,	// (0x00042b02) main_graph_messa_pane

0x1cb9,	// (0x000392df) main_help_pane

0x1fe3,	// (0x00039609) main_im_pane

0x1f14,	// (0x0003953a) main_image_pane_ParamLimits

0x1f14,	// (0x0003953a) main_image_pane

0x1cb9,	// (0x000392df) main_location2_pane

0xb4dc,	// (0x00042b02) main_location_pane

0x1cb9,	// (0x000392df) main_messa_pane

0x1cb9,	// (0x000392df) main_mp2_pane

0xb4dc,	// (0x00042b02) main_mp_pane

0x1cb9,	// (0x000392df) main_msg_pane

0x1cb9,	// (0x000392df) main_mup_eq_pane

0x1cb9,	// (0x000392df) main_mup_pane

0xb4dc,	// (0x00042b02) main_notes_pane

0x1cb9,	// (0x000392df) main_pec_pane

0x1cb9,	// (0x000392df) main_phob_pane

0x1cb9,	// (0x000392df) main_pinb_pane

0x1cb9,	// (0x000392df) main_postcard_pane

0x1cb9,	// (0x000392df) main_qdial_pane

0xb4dc,	// (0x00042b02) main_skin_pane

0x1cb9,	// (0x000392df) main_smil2_pane

0xb4dc,	// (0x00042b02) main_smil_pane

0xb4dc,	// (0x00042b02) main_video_pane

0xb4dc,	// (0x00042b02) main_video_tele_pane

0x1f14,	// (0x0003953a) main_viewer_pane_ParamLimits

0x1f14,	// (0x0003953a) main_viewer_pane

0xb4dc,	// (0x00042b02) main_vorec_pane

0x62fa,	// (0x0003d920) popup_blid_sat_info_window_ParamLimits

0x62fa,	// (0x0003d920) popup_blid_sat_info_window

0x6350,	// (0x0003d976) popup_dyc_status_message_window_ParamLimits

0x6350,	// (0x0003d976) popup_dyc_status_message_window

0x6366,	// (0x0003d98c) popup_grid_large_graphic_window_ParamLimits

0x6366,	// (0x0003d98c) popup_grid_large_graphic_window

0x63fc,	// (0x0003da22) popup_loc_request_window_ParamLimits

0x63fc,	// (0x0003da22) popup_loc_request_window

0x64f4,	// (0x0003db1a) popup_wml_address_window_ParamLimits

0x64f4,	// (0x0003db1a) popup_wml_address_window

0x6150,	// (0x0003d776) call_muted_g1

0x5e75,	// (0x0003d49b) popup_call_audio_conf_window_ParamLimits

0x5e75,	// (0x0003d49b) popup_call_audio_conf_window

0x6160,	// (0x0003d786) popup_call_audio_first_window_ParamLimits

0x6160,	// (0x0003d786) popup_call_audio_first_window

0x61be,	// (0x0003d7e4) popup_call_audio_in_window_ParamLimits

0x61be,	// (0x0003d7e4) popup_call_audio_in_window

0x61ea,	// (0x0003d810) popup_call_audio_out_window_ParamLimits

0x61ea,	// (0x0003d810) popup_call_audio_out_window

0x6218,	// (0x0003d83e) popup_call_audio_second_window_ParamLimits

0x6218,	// (0x0003d83e) popup_call_audio_second_window

0x625e,	// (0x0003d884) popup_call_audio_wait_window_ParamLimits

0x625e,	// (0x0003d884) popup_call_audio_wait_window

0x6291,	// (0x0003d8b7) popup_number_entry_window_ParamLimits

0x6291,	// (0x0003d8b7) popup_number_entry_window

0x18a8,	// (0x00038ece) bg_popup_call_pane_cp05_ParamLimits

0x18a8,	// (0x00038ece) bg_popup_call_pane_cp05

0x18c8,	// (0x00038eee) popup_number_entry_window_t1

0x18db,	// (0x00038f01) popup_number_entry_window_t2

0x18ed,	// (0x00038f13) popup_number_entry_window_t3

0x0003,

0xf12f,	// (0x00046755) popup_number_entry_window_t

0x18ff,	// (0x00038f25) text_title_cp2

0x1912,	// (0x00038f38) bg_popup_call_pane_cp_ParamLimits

0x1912,	// (0x00038f38) bg_popup_call_pane_cp

0x1920,	// (0x00038f46) call_thumbnail_pane

0x1928,	// (0x00038f4e) popup_call_audio_in_window_g1_ParamLimits

0x1928,	// (0x00038f4e) popup_call_audio_in_window_g1

0x1934,	// (0x00038f5a) popup_call_audio_in_window_g2_ParamLimits

0x1934,	// (0x00038f5a) popup_call_audio_in_window_g2

0x1940,	// (0x00038f66) popup_call_audio_in_window_g3_ParamLimits

0x1940,	// (0x00038f66) popup_call_audio_in_window_g3

0x0002,

0xf138,	// (0x0004675e) popup_call_audio_in_window_g_ParamLimits

0xf138,	// (0x0004675e) popup_call_audio_in_window_g

0x194c,	// (0x00038f72) popup_call_audio_in_window_t1_ParamLimits

0x194c,	// (0x00038f72) popup_call_audio_in_window_t1

0x1967,	// (0x00038f8d) popup_call_audio_in_window_t2_ParamLimits

0x1967,	// (0x00038f8d) popup_call_audio_in_window_t2

0x1982,	// (0x00038fa8) popup_call_audio_in_window_t3_ParamLimits

0x1982,	// (0x00038fa8) popup_call_audio_in_window_t3

0x0002,

0xf13f,	// (0x00046765) popup_call_audio_in_window_t_ParamLimits

0xf13f,	// (0x00046765) popup_call_audio_in_window_t

0x1912,	// (0x00038f38) bg_popup_call_pane_cp01_ParamLimits

0x1912,	// (0x00038f38) bg_popup_call_pane_cp01

0x1920,	// (0x00038f46) call_thumbnail_pane_cp02

0x1995,	// (0x00038fbb) call_type_pane_cp022

0x199d,	// (0x00038fc3) popup_call_audio_out_window_g1_ParamLimits

0x199d,	// (0x00038fc3) popup_call_audio_out_window_g1

0x19af,	// (0x00038fd5) popup_call_audio_out_window_g2_ParamLimits

0x19af,	// (0x00038fd5) popup_call_audio_out_window_g2

0x19bb,	// (0x00038fe1) popup_call_audio_out_window_g3_ParamLimits

0x19bb,	// (0x00038fe1) popup_call_audio_out_window_g3

0x0002,

0xf146,	// (0x0004676c) popup_call_audio_out_window_g_ParamLimits

0xf146,	// (0x0004676c) popup_call_audio_out_window_g

0x19cd,	// (0x00038ff3) popup_call_audio_out_window_t1_ParamLimits

0x19cd,	// (0x00038ff3) popup_call_audio_out_window_t1

0x19e5,	// (0x0003900b) popup_call_audio_out_window_t2_ParamLimits

0x19e5,	// (0x0003900b) popup_call_audio_out_window_t2

0x0001,

0xf14d,	// (0x00046773) popup_call_audio_out_window_t_ParamLimits

0xf14d,	// (0x00046773) popup_call_audio_out_window_t

0x19fa,	// (0x00039020) bg_popup_call_pane_ParamLimits

0x19fa,	// (0x00039020) bg_popup_call_pane

0x39b3,	// (0x0003afd9) call_thumbnail_pane_cp_ParamLimits

0x39b3,	// (0x0003afd9) call_thumbnail_pane_cp

0x1a7e,	// (0x000390a4) call_type_pane_cp01_ParamLimits

0x1a7e,	// (0x000390a4) call_type_pane_cp01

0x1ac2,	// (0x000390e8) popup_call_audio_first_window_g1_ParamLimits

0x1ac2,	// (0x000390e8) popup_call_audio_first_window_g1

0x1b0e,	// (0x00039134) popup_call_audio_first_window_g2_ParamLimits

0x1b0e,	// (0x00039134) popup_call_audio_first_window_g2

0x0001,

0xf152,	// (0x00046778) popup_call_audio_first_window_g_ParamLimits

0xf152,	// (0x00046778) popup_call_audio_first_window_g

0x1b52,	// (0x00039178) popup_call_audio_first_window_t1_ParamLimits

0x1b52,	// (0x00039178) popup_call_audio_first_window_t1

0x1bfe,	// (0x00039224) popup_call_audio_first_window_t4_ParamLimits

0x1bfe,	// (0x00039224) popup_call_audio_first_window_t4

0x1c8a,	// (0x000392b0) popup_call_audio_first_window_t5_ParamLimits

0x1c8a,	// (0x000392b0) popup_call_audio_first_window_t5

0x0002,

0xf157,	// (0x0004677d) popup_call_audio_first_window_t_ParamLimits

0xf157,	// (0x0004677d) popup_call_audio_first_window_t

0x1cb9,	// (0x000392df) bg_popup_call_pane_cp02

0x1cc3,	// (0x000392e9) call_type_pane_cp023

0x1ccb,	// (0x000392f1) popup_call_audio_wait_window_g1

0x1cd3,	// (0x000392f9) popup_call_audio_wait_window_g2

0x0001,

0xf15e,	// (0x00046784) popup_call_audio_wait_window_g

0x1cdb,	// (0x00039301) popup_call_audio_wait_window_t3

0x1ce9,	// (0x0003930f) bg_popup_call_pane_cp03_ParamLimits

0x1ce9,	// (0x0003930f) bg_popup_call_pane_cp03

0x1d49,	// (0x0003936f) call_thumbnail_pane_cp011_ParamLimits

0x1d49,	// (0x0003936f) call_thumbnail_pane_cp011

0x1d55,	// (0x0003937b) call_type_pane_cp034_ParamLimits

0x1d55,	// (0x0003937b) call_type_pane_cp034

0x1d91,	// (0x000393b7) popup_call_audio_second_window_g1_ParamLimits

0x1d91,	// (0x000393b7) popup_call_audio_second_window_g1

0x1dcd,	// (0x000393f3) popup_call_audio_second_window_g2_ParamLimits

0x1dcd,	// (0x000393f3) popup_call_audio_second_window_g2

0x0001,

0xf163,	// (0x00046789) popup_call_audio_second_window_g_ParamLimits

0xf163,	// (0x00046789) popup_call_audio_second_window_g

0x1e09,	// (0x0003942f) popup_call_audio_second_window_t1_ParamLimits

0x1e09,	// (0x0003942f) popup_call_audio_second_window_t1

0x1e8a,	// (0x000394b0) popup_call_audio_second_window_t2_ParamLimits

0x1e8a,	// (0x000394b0) popup_call_audio_second_window_t2

0x1ec0,	// (0x000394e6) popup_call_audio_second_window_t3_ParamLimits

0x1ec0,	// (0x000394e6) popup_call_audio_second_window_t3

0x0002,

0xf168,	// (0x0004678e) popup_call_audio_second_window_t_ParamLimits

0xf168,	// (0x0004678e) popup_call_audio_second_window_t

0x1cb9,	// (0x000392df) bg_popup_call_pane_cp04

0x1ef6,	// (0x0003951c) list_conf_pane

0x1efe,	// (0x00039524) popup_call_audio_conf_window_t1

0x1f0c,	// (0x00039532) call_thumbnail_pane_g1

0x1f14,	// (0x0003953a) bg_pinb_pane_ParamLimits

0x1f14,	// (0x0003953a) bg_pinb_pane

0x1f22,	// (0x00039548) find_pinb_pane

0x1f2b,	// (0x00039551) listscroll_pinb_pane_ParamLimits

0x1f2b,	// (0x00039551) listscroll_pinb_pane

0x1f3a,	// (0x00039560) pinb_bg_pane_g1

0x39d7,	// (0x0003affd) pinb_bg_pane_g2

0x39e1,	// (0x0003b007) pinb_bg_pane_g3

0x39eb,	// (0x0003b011) pinb_bg_pane_g4

0x39f5,	// (0x0003b01b) pinb_bg_pane_g5

0x39ff,	// (0x0003b025) pinb_bg_pane_g6

0x3a08,	// (0x0003b02e) pinb_bg_pane_g7

0x3a11,	// (0x0003b037) pinb_bg_pane_g8

0x3a1c,	// (0x0003b042) pinb_bg_pane_g9

0x3a26,	// (0x0003b04c) pinb_bg_pane_g10

0x0009,

0xf16f,	// (0x00046795) pinb_bg_pane_g

0x3a41,	// (0x0003b067) grid_pinb_pane

0x3a4a,	// (0x0003b070) list_pinb_pane

0x3a53,	// (0x0003b079) scroll_pane_cp01_ParamLimits

0x3a53,	// (0x0003b079) scroll_pane_cp01

0x1f44,	// (0x0003956a) find_pinb_pane_g1_ParamLimits

0x1f44,	// (0x0003956a) find_pinb_pane_g1

0x1f5c,	// (0x00039582) find_pinb_pane_t1

0x1f6e,	// (0x00039594) find_pinb_pane_t2

0x0001,

0xf189,	// (0x000467af) find_pinb_pane_t

0x1f83,	// (0x000395a9) input_focus_pane_cp01_ParamLimits

0x1f83,	// (0x000395a9) input_focus_pane_cp01

0x3a65,	// (0x0003b08b) cell_pinb_pane_ParamLimits

0x3a65,	// (0x0003b08b) cell_pinb_pane

0x3a80,	// (0x0003b0a6) cell_pinb_pane_g1_ParamLimits

0x3a80,	// (0x0003b0a6) cell_pinb_pane_g1

0x3a90,	// (0x0003b0b6) cell_pinb_pane_g2_ParamLimits

0x3a90,	// (0x0003b0b6) cell_pinb_pane_g2

0x1f8f,	// (0x000395b5) cell_pinb_pane_g3_ParamLimits

0x1f8f,	// (0x000395b5) cell_pinb_pane_g3

0x0002,

0xf18e,	// (0x000467b4) cell_pinb_pane_g_ParamLimits

0xf18e,	// (0x000467b4) cell_pinb_pane_g

0x1cb9,	// (0x000392df) grid_highlight_pane_cp01

0x3a9c,	// (0x0003b0c2) list_pinb_item_pane_ParamLimits

0x3a9c,	// (0x0003b0c2) list_pinb_item_pane

0x1cb9,	// (0x000392df) list_highlight_pane_cp02

0x3aae,	// (0x0003b0d4) list_pinb_item_pane_g1_ParamLimits

0x3aae,	// (0x0003b0d4) list_pinb_item_pane_g1

0x3abb,	// (0x0003b0e1) list_pinb_item_pane_g2_ParamLimits

0x3abb,	// (0x0003b0e1) list_pinb_item_pane_g2

0x3ac7,	// (0x0003b0ed) list_pinb_item_pane_g3_ParamLimits

0x3ac7,	// (0x0003b0ed) list_pinb_item_pane_g3

0x3ad8,	// (0x0003b0fe) list_pinb_item_pane_g4_ParamLimits

0x3ad8,	// (0x0003b0fe) list_pinb_item_pane_g4

0x0003,

0xf195,	// (0x000467bb) list_pinb_item_pane_g_ParamLimits

0xf195,	// (0x000467bb) list_pinb_item_pane_g

0x3ae4,	// (0x0003b10a) list_pinb_item_pane_t1_ParamLimits

0x3ae4,	// (0x0003b10a) list_pinb_item_pane_t1

0x3b19,	// (0x0003b13f) calc_display_pane

0x3b35,	// (0x0003b15b) calc_paper_pane

0x3b56,	// (0x0003b17c) grid_calc_pane

0x1cb9,	// (0x000392df) bg_list_pane_cp01

0x3b72,	// (0x0003b198) clock_g1

0x3b7a,	// (0x0003b1a0) clock_g2

0x0001,

0xf19e,	// (0x000467c4) clock_g

0x3b82,	// (0x0003b1a8) clock_t1_ParamLimits

0x3b82,	// (0x0003b1a8) clock_t1

0x3b97,	// (0x0003b1bd) clock_t2_ParamLimits

0x3b97,	// (0x0003b1bd) clock_t2

0x3ba9,	// (0x0003b1cf) clock_t3_ParamLimits

0x3ba9,	// (0x0003b1cf) clock_t3

0x3bbb,	// (0x0003b1e1) clock_t4_ParamLimits

0x3bbb,	// (0x0003b1e1) clock_t4

0x3bcd,	// (0x0003b1f3) clock_t5_ParamLimits

0x3bcd,	// (0x0003b1f3) clock_t5

0x3be2,	// (0x0003b208) clock_t6_ParamLimits

0x3be2,	// (0x0003b208) clock_t6

0x3bf4,	// (0x0003b21a) clock_t7_ParamLimits

0x3bf4,	// (0x0003b21a) clock_t7

0x3c06,	// (0x0003b22c) clock_t8_ParamLimits

0x3c06,	// (0x0003b22c) clock_t8

0x3c18,	// (0x0003b23e) clock_t9_ParamLimits

0x3c18,	// (0x0003b23e) clock_t9

0x0008,

0xf1a3,	// (0x000467c9) clock_t_ParamLimits

0xf1a3,	// (0x000467c9) clock_t

0x1f9b,	// (0x000395c1) popup_clock_analogue_window_cp02

0x1f9b,	// (0x000395c1) popup_clock_digital_window_cp01

0x1fa3,	// (0x000395c9) listscroll_help_pane

0x1cb9,	// (0x000392df) phob_pre_status_pane

0x1fad,	// (0x000395d3) grid_qdial_pane

0x1cb9,	// (0x000392df) listscroll_mce_pane

0x1fb7,	// (0x000395dd) bg_notes_pane

0x1fc1,	// (0x000395e7) list_notes_pane

0x3c2a,	// (0x0003b250) scroll_pane_cp06

0x1fcb,	// (0x000395f1) bg_calc_paper_pane

0xaa3f,	// (0x00042065) list_calc_pane

0x1fe3,	// (0x00039609) bg_calc_display_pane

0xaa59,	// (0x0004207f) calc_display_pane_t1

0xaa6e,	// (0x00042094) calc_display_pane_t2

0xaa83,	// (0x000420a9) calc_display_pane_t3

0x0002,

0xf1b6,	// (0x000467dc) calc_display_pane_t

0x3c35,	// (0x0003b25b) cell_calc_pane_ParamLimits

0x3c35,	// (0x0003b25b) cell_calc_pane

0x1fef,	// (0x00039615) bg_calc_paper_pane_g1

0x1ffb,	// (0x00039621) bg_calc_paper_pane_g2

0x2007,	// (0x0003962d) bg_calc_paper_pane_g3

0x2013,	// (0x00039639) bg_calc_paper_pane_g4

0x201f,	// (0x00039645) bg_calc_paper_pane_g5

0x3c68,	// (0x0003b28e) bg_calc_paper_pane_g6

0x3c77,	// (0x0003b29d) bg_calc_paper_pane_g7

0x3c86,	// (0x0003b2ac) bg_calc_paper_pane_g8

0x0007,

0xf1bd,	// (0x000467e3) bg_calc_paper_pane_g

0x3c95,	// (0x0003b2bb) calc_bg_paper_pane_g9

0x3ca4,	// (0x0003b2ca) list_calc_item_pane_ParamLimits

0x3ca4,	// (0x0003b2ca) list_calc_item_pane

0x202b,	// (0x00039651) list_calc_item_pane_g1

0xaa95,	// (0x000420bb) list_calc_item_pane_t1_ParamLimits

0xaa95,	// (0x000420bb) list_calc_item_pane_t1

0x3cb8,	// (0x0003b2de) list_calc_item_pane_t2_ParamLimits

0x3cb8,	// (0x0003b2de) list_calc_item_pane_t2

0x0001,

0xf1ce,	// (0x000467f4) list_calc_item_pane_t_ParamLimits

0xf1ce,	// (0x000467f4) list_calc_item_pane_t

0x2038,	// (0x0003965e) cell_calc_pane_g1

0x2042,	// (0x00039668) grid_highlight_pane_cp02

0x2064,	// (0x0003968a) bg_calc_display_pane_g1

0xaaa7,	// (0x000420cd) bg_calc_display_pane_g2

0x206d,	// (0x00039693) bg_calc_display_pane_g3

0x0002,

0xf1d8,	// (0x000467fe) bg_calc_display_pane_g

0x3ce6,	// (0x0003b30c) cell_qdial_pane_ParamLimits

0x3ce6,	// (0x0003b30c) cell_qdial_pane

0x3cf8,	// (0x0003b31e) cell_qdial_pane_g1_ParamLimits

0x3cf8,	// (0x0003b31e) cell_qdial_pane_g1

0x3d0e,	// (0x0003b334) cell_qdial_pane_g2_ParamLimits

0x3d0e,	// (0x0003b334) cell_qdial_pane_g2

0x2076,	// (0x0003969c) cell_qdial_pane_g3_ParamLimits

0x2076,	// (0x0003969c) cell_qdial_pane_g3

0x0003,

0xf1df,	// (0x00046805) cell_qdial_pane_g_ParamLimits

0xf1df,	// (0x00046805) cell_qdial_pane_g

0x3d35,	// (0x0003b35b) cell_qdial_pane_t1_ParamLimits

0x3d35,	// (0x0003b35b) cell_qdial_pane_t1

0x3d4d,	// (0x0003b373) cell_qdial_pane_t2_ParamLimits

0x3d4d,	// (0x0003b373) cell_qdial_pane_t2

0x3d60,	// (0x0003b386) cell_qdial_pane_t3_ParamLimits

0x3d60,	// (0x0003b386) cell_qdial_pane_t3

0x0002,

0xf1e8,	// (0x0004680e) cell_qdial_pane_t_ParamLimits

0xf1e8,	// (0x0004680e) cell_qdial_pane_t

0x1cb9,	// (0x000392df) grid_highlight_pane_cp04

0x2082,	// (0x000396a8) thumbnail_qdial_pane_ParamLimits

0x2082,	// (0x000396a8) thumbnail_qdial_pane

0x3d7b,	// (0x0003b3a1) list_help_pane

0x3d85,	// (0x0003b3ab) scroll_pane_cp02

0x3d8e,	// (0x0003b3b4) help_list_pane_t1_ParamLimits

0x3d8e,	// (0x0003b3b4) help_list_pane_t1

0xaab1,	// (0x000420d7) bg_notes_pane_g2

0xaab9,	// (0x000420df) bg_notes_pane_g3

0xaac1,	// (0x000420e7) notes_bg_pane_g1

0xaac9,	// (0x000420ef) notes_bg_pane_g4

0xaad1,	// (0x000420f7) notes_bg_pane_g5

0xaad9,	// (0x000420ff) notes_bg_pane_g6

0xaae1,	// (0x00042107) notes_bg_pane_g7

0xaae9,	// (0x0004210f) notes_bg_pane_g8

0xaaf1,	// (0x00042117) notes_bg_pane_g9

0x0006,

0xf206,	// (0x0004682c) notes_bg_pane_g

0x3daa,	// (0x0003b3d0) list_notes_text_pane_ParamLimits

0x3daa,	// (0x0003b3d0) list_notes_text_pane

0x3dbe,	// (0x0003b3e4) list_notes_text_pane_g1

0x2f2a,	// (0x0003a550) list_notes_text_pane_t1

0x3dd8,	// (0x0003b3fe) listscroll_cale_week_pane

0x3e02,	// (0x0003b428) bg_cale_heading_pane

0x3e16,	// (0x0003b43c) bg_cale_pane_cp01

0x3e2f,	// (0x0003b455) cale_week_corner_pane

0x3e45,	// (0x0003b46b) cale_week_day_heading_pane

0x3e59,	// (0x0003b47f) cale_week_scroll_pane_g1

0x3e6a,	// (0x0003b490) cale_week_scroll_pane_g2

0x3e7b,	// (0x0003b4a1) cale_week_scroll_pane_g3

0x3e8c,	// (0x0003b4b2) cale_week_scroll_pane_g4

0x3e9d,	// (0x0003b4c3) cale_week_scroll_pane_g5

0x3eae,	// (0x0003b4d4) cale_week_scroll_pane_g6

0x3ebf,	// (0x0003b4e5) cale_week_scroll_pane_g7

0x3ed0,	// (0x0003b4f6) cale_week_scroll_pane_g8

0x3ee3,	// (0x0003b509) cale_week_scroll_pane_g9

0x3ef4,	// (0x0003b51a) cale_week_scroll_pane_g10

0x3f05,	// (0x0003b52b) cale_week_scroll_pane_g11

0x3f16,	// (0x0003b53c) cale_week_scroll_pane_g12

0x3f27,	// (0x0003b54d) cale_week_scroll_pane_g13

0x3f38,	// (0x0003b55e) cale_week_scroll_pane_g14

0x3f49,	// (0x0003b56f) cale_week_scroll_pane_g15

0x000e,

0xf215,	// (0x0004683b) cale_week_scroll_pane_g

0x3f5a,	// (0x0003b580) cale_week_time_pane

0x3f6d,	// (0x0003b593) grid_cale_week_pane

0x3f92,	// (0x0003b5b8) scroll_pane_cp08

0x3fac,	// (0x0003b5d2) cell_cale_week_pane_ParamLimits

0x3fac,	// (0x0003b5d2) cell_cale_week_pane

0x3fe8,	// (0x0003b60e) cale_week_day_heading_pane_t1

0x4012,	// (0x0003b638) cale_week_day_heading_pane_t2

0x403c,	// (0x0003b662) cale_week_day_heading_pane_t3

0x4066,	// (0x0003b68c) cale_week_day_heading_pane_t4

0x4090,	// (0x0003b6b6) cale_week_day_heading_pane_t5

0x40ba,	// (0x0003b6e0) cale_week_day_heading_pane_t6

0x40e4,	// (0x0003b70a) cale_week_day_heading_pane_t7

0x0006,

0xf234,	// (0x0004685a) cale_week_day_heading_pane_t

0x410e,	// (0x0003b734) bg_cale_side_pane

0x411c,	// (0x0003b742) cale_week_time_pane_t1

0x4148,	// (0x0003b76e) cale_week_time_pane_t2

0x4174,	// (0x0003b79a) cale_week_time_pane_t3

0x41a0,	// (0x0003b7c6) cale_week_time_pane_t4

0x41cc,	// (0x0003b7f2) cale_week_time_pane_t5

0x41f8,	// (0x0003b81e) cale_week_time_pane_t6

0x4224,	// (0x0003b84a) cale_week_time_pane_t7

0x4250,	// (0x0003b876) cale_week_time_pane_t8

0x0007,

0xf243,	// (0x00046869) cale_week_time_pane_t

0x427c,	// (0x0003b8a2) cell_cale_week_pane_g2

0x4295,	// (0x0003b8bb) cell_cale_week_pane_g3_ParamLimits

0x4295,	// (0x0003b8bb) cell_cale_week_pane_g3

0x42ad,	// (0x0003b8d3) grid_highlight_pane_cp07

0x42b5,	// (0x0003b8db) listscroll_gms_pane

0x42bf,	// (0x0003b8e5) grid_gms_pane

0x42c8,	// (0x0003b8ee) listscroll_gms_pane_g1

0x42d0,	// (0x0003b8f6) listscroll_gms_pane_g2

0x0001,

0xf254,	// (0x0004687a) listscroll_gms_pane_g

0x42d8,	// (0x0003b8fe) scroll_pane_cp010

0x42e3,	// (0x0003b909) cell_gms_pane_ParamLimits

0x42e3,	// (0x0003b909) cell_gms_pane

0x42f3,	// (0x0003b919) cell_gms_pane_g1

0x42fb,	// (0x0003b921) cell_gms_pane_g2

0x3dbe,	// (0x0003b3e4) cell_gms_pane_g3

0x4303,	// (0x0003b929) cell_gms_pane_g4

0x0003,

0xf259,	// (0x0004687f) cell_gms_pane_g

0x430c,	// (0x0003b932) grid_highlight_pane_cp09

0x60fe,	// (0x0003d724) phob_pre_status_pane_g1

0x6106,	// (0x0003d72c) phob_pre_status_pane_g2

0x610e,	// (0x0003d734) phob_pre_status_pane_g3

0x6116,	// (0x0003d73c) phob_pre_status_pane_g4

0x0004,

0xf65b,	// (0x00046c81) phob_pre_status_pane_g

0x6126,	// (0x0003d74c) phob_pre_status_pane_t1

0x6134,	// (0x0003d75a) phob_pre_status_pane_t2

0x6142,	// (0x0003d768) phob_pre_status_pane_t3

0x0002,

0xf666,	// (0x00046c8c) phob_pre_status_pane_t

0x1cb9,	// (0x000392df) bg_list_pane_cp05

0x431c,	// (0x0003b942) grid_vorec_pane

0xaaf9,	// (0x0004211f) vorec_t1

0xab07,	// (0x0004212d) vorec_t2

0xab15,	// (0x0004213b) vorec_t3

0xab23,	// (0x00042149) vorec_t4

0xab31,	// (0x00042157) vorec_t5

0xab3f,	// (0x00042165) vorec_t6

0x0006,

0xf262,	// (0x00046888) vorec_t

0xab5b,	// (0x00042181) wait_bar_pane_cp01

0x4324,	// (0x0003b94a) cell_vorec_pane_ParamLimits

0x4324,	// (0x0003b94a) cell_vorec_pane

0x4337,	// (0x0003b95d) cell_vorec_pane_g1

0x1cb9,	// (0x000392df) grid_highlight_pane_cp05

0x4353,	// (0x0003b979) cams_zoom_pane

0x4362,	// (0x0003b988) image_vga_pane

0x437a,	// (0x0003b9a0) main_camera_pane_g1

0x438a,	// (0x0003b9b0) main_camera_pane_g2

0x439a,	// (0x0003b9c0) main_camera_pane_g3

0x43aa,	// (0x0003b9d0) main_camera_pane_g4

0x43ba,	// (0x0003b9e0) main_camera_pane_g5

0x43ca,	// (0x0003b9f0) main_camera_pane_g6

0x43da,	// (0x0003ba00) main_camera_pane_g7

0x0007,

0xf271,	// (0x00046897) main_camera_pane_g

0x43f6,	// (0x0003ba1c) main_camera_pane_t1

0x440c,	// (0x0003ba32) main_camera_pane_t2

0x0001,

0xf282,	// (0x000468a8) main_camera_pane_t

0x443e,	// (0x0003ba64) cams_zoom_pane_cp_ParamLimits

0x443e,	// (0x0003ba64) cams_zoom_pane_cp

0x4466,	// (0x0003ba8c) image_cif_pane_ParamLimits

0x4466,	// (0x0003ba8c) image_cif_pane

0x4497,	// (0x0003babd) image_subqcif_pane

0x449f,	// (0x0003bac5) main_video_pane_g1_ParamLimits

0x449f,	// (0x0003bac5) main_video_pane_g1

0x44c3,	// (0x0003bae9) main_video_pane_g2_ParamLimits

0x44c3,	// (0x0003bae9) main_video_pane_g2

0x44f7,	// (0x0003bb1d) main_video_pane_g3_ParamLimits

0x44f7,	// (0x0003bb1d) main_video_pane_g3

0x4525,	// (0x0003bb4b) main_video_pane_g4_ParamLimits

0x4525,	// (0x0003bb4b) main_video_pane_g4

0x4553,	// (0x0003bb79) main_video_pane_g5_ParamLimits

0x4553,	// (0x0003bb79) main_video_pane_g5

0x456b,	// (0x0003bb91) main_video_pane_g6_ParamLimits

0x456b,	// (0x0003bb91) main_video_pane_g6

0x0006,

0xf287,	// (0x000468ad) main_video_pane_g_ParamLimits

0xf287,	// (0x000468ad) main_video_pane_g

0x4594,	// (0x0003bbba) main_video_pane_t1_ParamLimits

0x4594,	// (0x0003bbba) main_video_pane_t1

0x45dd,	// (0x0003bc03) cams_zoom_pane_g1

0x45e6,	// (0x0003bc0c) cams_zoom_pane_g2

0x45ef,	// (0x0003bc15) cams_zoom_pane_g3

0x45f8,	// (0x0003bc1e) cams_zoom_pane_g4

0x0003,

0xf296,	// (0x000468bc) cams_zoom_pane_g

0x4615,	// (0x0003bc3b) grid_cams_pane

0x462a,	// (0x0003bc50) linegrid_cams_pane

0x463b,	// (0x0003bc61) cell_cams_pane_ParamLimits

0x463b,	// (0x0003bc61) cell_cams_pane

0x4659,	// (0x0003bc7f) cams_burst_image_pane

0x4661,	// (0x0003bc87) cell_cams_pane_g1

0x1cb9,	// (0x000392df) grid_highlight_pane_cp03

0x2038,	// (0x0003965e) mp_bg_pane_g1

0x1cb9,	// (0x000392df) bg_list_pane_cp03

0xc870,	// (0x00043e96) bg_mp_pane

0xc878,	// (0x00043e9e) grid_mp_pane

0xc880,	// (0x00043ea6) media_player_g1

0xc888,	// (0x00043eae) media_player_t1

0xc896,	// (0x00043ebc) media_player_t2

0xc8a4,	// (0x00043eca) media_player_t3

0xc8b2,	// (0x00043ed8) media_player_t4

0xc8c0,	// (0x00043ee6) media_player_t5

0xc8ce,	// (0x00043ef4) media_player_t6

0xc8dc,	// (0x00043f02) media_player_t7

0x0006,

0xf645,	// (0x00046c6b) media_player_t

0xc8ea,	// (0x00043f10) wait_bar_pane_cp02

0xf62a,	// (0x00046c50) main_usb_pane_t

0x60f5,	// (0x0003d71b) cell_mp_pane

0x2038,	// (0x0003965e) cell_mp_pane_g1

0x1cb9,	// (0x000392df) grid_highlight_pane_cp06

0x4669,	// (0x0003bc8f) grid_skin_colour_pane

0x4671,	// (0x0003bc97) list_highlight_pane_cp03

0x4679,	// (0x0003bc9f) skin_g1

0x4681,	// (0x0003bca7) skin_t1

0x4690,	// (0x0003bcb6) skin_t2

0x0001,

0xf2cb,	// (0x000468f1) skin_t

0x469e,	// (0x0003bcc4) cell_skin_colour_pane_ParamLimits

0x469e,	// (0x0003bcc4) cell_skin_colour_pane

0x46b8,	// (0x0003bcde) cell_skin_colour_pane_g1

0x470a,	// (0x0003bd30) call_video_g1_ParamLimits

0x470a,	// (0x0003bd30) call_video_g1

0x4720,	// (0x0003bd46) call_video_g2_ParamLimits

0x4720,	// (0x0003bd46) call_video_g2

0x0001,

0xf2d0,	// (0x000468f6) call_video_g_ParamLimits

0xf2d0,	// (0x000468f6) call_video_g

0x4756,	// (0x0003bd7c) call_video_uplink_pane_cp1_ParamLimits

0x4756,	// (0x0003bd7c) call_video_uplink_pane_cp1

0x478d,	// (0x0003bdb3) call_video_uplink_pane_cp2

0x47c5,	// (0x0003bdeb) video_down_crop_pane_ParamLimits

0x47c5,	// (0x0003bdeb) video_down_crop_pane

0x486d,	// (0x0003be93) video_down_pane_ParamLimits

0x486d,	// (0x0003be93) video_down_pane

0x48fd,	// (0x0003bf23) video_down_subqcif_pane_ParamLimits

0x48fd,	// (0x0003bf23) video_down_subqcif_pane

0x4915,	// (0x0003bf3b) video_down_subqcif_pane_cp_ParamLimits

0x4915,	// (0x0003bf3b) video_down_subqcif_pane_cp

0x4939,	// (0x0003bf5f) im_reading_pane_ParamLimits

0x4939,	// (0x0003bf5f) im_reading_pane

0x494b,	// (0x0003bf71) im_writing_pane_ParamLimits

0x494b,	// (0x0003bf71) im_writing_pane

0x4969,	// (0x0003bf8f) im_reading_pane_t1

0x499f,	// (0x0003bfc5) list_im_pane

0x49b0,	// (0x0003bfd6) scroll_pane_cp07

0x49c9,	// (0x0003bfef) im_writing_pane_t1_ParamLimits

0x49c9,	// (0x0003bfef) im_writing_pane_t1

0x49de,	// (0x0003c004) im_writing_pane_t2_ParamLimits

0x49de,	// (0x0003c004) im_writing_pane_t2

0x0001,

0xf2da,	// (0x00046900) im_writing_pane_t_ParamLimits

0xf2da,	// (0x00046900) im_writing_pane_t

0x1cb9,	// (0x000392df) input_focus_pane_cp04

0x1cb9,	// (0x000392df) input_focus_pane_cp05

0x49fb,	// (0x0003c021) list_im_single_pane_ParamLimits

0x49fb,	// (0x0003c021) list_im_single_pane

0x4a11,	// (0x0003c037) list_single_im_pane_t1

0x60bb,	// (0x0003d6e1) blid_accuracy_pane

0x60c3,	// (0x0003d6e9) blid_compass_pane

0x60cb,	// (0x0003d6f1) main_location_t1

0x60d9,	// (0x0003d6ff) main_location_t2

0x60e7,	// (0x0003d70d) main_location_t3

0x0002,

0xf654,	// (0x00046c7a) main_location_t

0x1cb9,	// (0x000392df) aid_levels_location

0x2038,	// (0x0003965e) blid_accuracy_pane_g1

0x2038,	// (0x0003965e) blid_accuracy_pane_g2

0x0001,

0xf33c,	// (0x00046962) blid_accuracy_pane_g

0x4a4b,	// (0x0003c071) wml_content_pane

0xac24,	// (0x0004224a) wml_button_pane_ParamLimits

0xac24,	// (0x0004224a) wml_button_pane

0x4a68,	// (0x0003c08e) wml_list_single_large_pane_ParamLimits

0x4a68,	// (0x0003c08e) wml_list_single_large_pane

0x4a7c,	// (0x0003c0a2) wml_list_single_medium_pane_ParamLimits

0x4a7c,	// (0x0003c0a2) wml_list_single_medium_pane

0x4a91,	// (0x0003c0b7) wml_list_single_small_pane_ParamLimits

0x4a91,	// (0x0003c0b7) wml_list_single_small_pane

0xac38,	// (0x0004225e) wml_selection_box_pane_ParamLimits

0xac38,	// (0x0004225e) wml_selection_box_pane

0xac4b,	// (0x00042271) wml_list_single_pane_t1

0xac5a,	// (0x00042280) wml_list_single_medium_pane_t1

0xac69,	// (0x0004228f) wml_list_single_large_pane_t1

0xac78,	// (0x0004229e) input_focus_pane_cp02_ParamLimits

0xac78,	// (0x0004229e) input_focus_pane_cp02

0xac8b,	// (0x000422b1) wml_selection_box_pane_g1

0xac94,	// (0x000422ba) wml_selection_box_pane_t1_ParamLimits

0xac94,	// (0x000422ba) wml_selection_box_pane_t1

0x1f14,	// (0x0003953a) bg_wml_button_pane_ParamLimits

0x1f14,	// (0x0003953a) bg_wml_button_pane

0xacac,	// (0x000422d2) wml_button_pane_g1

0xacb4,	// (0x000422da) wml_button_pane_t1

0xacac,	// (0x000422d2) wml_button_bg_pane_g1

0xacc4,	// (0x000422ea) wml_button_bg_pane_g2

0xaccc,	// (0x000422f2) wml_button_bg_pane_g3

0xacd4,	// (0x000422fa) wml_button_bg_pane_g4

0xacdc,	// (0x00042302) wml_button_bg_pane_g5

0xace4,	// (0x0004230a) wml_button_bg_pane_g6

0xacec,	// (0x00042312) wml_button_bg_pane_g7

0xacf4,	// (0x0004231a) wml_button_bg_pane_g8

0xacfc,	// (0x00042322) wml_button_bg_pane_g9

0x0008,

0xf2df,	// (0x00046905) wml_button_bg_pane_g

0x4aa8,	// (0x0003c0ce) bg_list_pane_cp02

0xad04,	// (0x0004232a) mce_header_pane_ParamLimits

0xad04,	// (0x0004232a) mce_header_pane

0xad18,	// (0x0004233e) mce_icon_pane

0xad18,	// (0x0004233e) mce_image_pane

0xad21,	// (0x00042347) mce_text_pane_ParamLimits

0xad21,	// (0x00042347) mce_text_pane

0x4ab1,	// (0x0003c0d7) scroll_pane_cp03

0x4ab1,	// (0x0003c0d7) scroll_pane_cp04

0xad35,	// (0x0004235b) scroll_pane_cp05_ParamLimits

0xad35,	// (0x0004235b) scroll_pane_cp05

0x4abb,	// (0x0003c0e1) mce_header_field_pane_ParamLimits

0x4abb,	// (0x0003c0e1) mce_header_field_pane

0x4ad2,	// (0x0003c0f8) mce_header_field_pane_2_ParamLimits

0x4ad2,	// (0x0003c0f8) mce_header_field_pane_2

0x4ae8,	// (0x0003c10e) mce_header_field_pane_3

0x4af0,	// (0x0003c116) list_single_mce_message_pane_ParamLimits

0x4af0,	// (0x0003c116) list_single_mce_message_pane

0x4b05,	// (0x0003c12b) list_single_mce_smart_pane_ParamLimits

0x4b05,	// (0x0003c12b) list_single_mce_smart_pane

0xad41,	// (0x00042367) input_focus_pane_cp03

0xad4a,	// (0x00042370) list_header_data_pane

0x4b25,	// (0x0003c14b) mce_header_field_pane_t1

0x4b33,	// (0x0003c159) list_single_mce_header_pane_ParamLimits

0x4b33,	// (0x0003c159) list_single_mce_header_pane

0xad52,	// (0x00042378) list_single_mce_header_pane_t1

0xad61,	// (0x00042387) list_single_mce_message_pane_g1

0xad6a,	// (0x00042390) list_single_mce_message_pane_t1

0x4b65,	// (0x0003c18b) bg_cale_heading_pane_cp01_ParamLimits

0x4b65,	// (0x0003c18b) bg_cale_heading_pane_cp01

0xad79,	// (0x0004239f) bg_cale_pane_cp02_ParamLimits

0xad79,	// (0x0004239f) bg_cale_pane_cp02

0x4b88,	// (0x0003c1ae) cale_month_corner_pane

0x4b9e,	// (0x0003c1c4) cale_month_day_heading_pane_ParamLimits

0x4b9e,	// (0x0003c1c4) cale_month_day_heading_pane

0x4bd1,	// (0x0003c1f7) cale_month_pane_g1_ParamLimits

0x4bd1,	// (0x0003c1f7) cale_month_pane_g1

0x4bed,	// (0x0003c213) cale_month_pane_g2_ParamLimits

0x4bed,	// (0x0003c213) cale_month_pane_g2

0x4c08,	// (0x0003c22e) cale_month_pane_g3_ParamLimits

0x4c08,	// (0x0003c22e) cale_month_pane_g3

0x4c34,	// (0x0003c25a) cale_month_pane_g4_ParamLimits

0x4c34,	// (0x0003c25a) cale_month_pane_g4

0x4c60,	// (0x0003c286) cale_month_pane_g5_ParamLimits

0x4c60,	// (0x0003c286) cale_month_pane_g5

0x4c8c,	// (0x0003c2b2) cale_month_pane_g6_ParamLimits

0x4c8c,	// (0x0003c2b2) cale_month_pane_g6

0x4cb8,	// (0x0003c2de) cale_month_pane_g7_ParamLimits

0x4cb8,	// (0x0003c2de) cale_month_pane_g7

0x4ce4,	// (0x0003c30a) cale_month_pane_g8_ParamLimits

0x4ce4,	// (0x0003c30a) cale_month_pane_g8

0x4d20,	// (0x0003c346) cale_month_pane_g9_ParamLimits

0x4d20,	// (0x0003c346) cale_month_pane_g9

0x4d5a,	// (0x0003c380) cale_month_pane_g10_ParamLimits

0x4d5a,	// (0x0003c380) cale_month_pane_g10

0x4d94,	// (0x0003c3ba) cale_month_pane_g11_ParamLimits

0x4d94,	// (0x0003c3ba) cale_month_pane_g11

0x4dce,	// (0x0003c3f4) cale_month_pane_g12_ParamLimits

0x4dce,	// (0x0003c3f4) cale_month_pane_g12

0x4e08,	// (0x0003c42e) cale_month_pane_g13_ParamLimits

0x4e08,	// (0x0003c42e) cale_month_pane_g13

0x000c,

0xf2f2,	// (0x00046918) cale_month_pane_g_ParamLimits

0xf2f2,	// (0x00046918) cale_month_pane_g

0x4e42,	// (0x0003c468) cale_month_week_pane

0x4e55,	// (0x0003c47b) grid_cale_month_pane_ParamLimits

0x4e55,	// (0x0003c47b) grid_cale_month_pane

0x4e83,	// (0x0003c4a9) cale_month_day_heading_pane_t1

0x4ee1,	// (0x0003c507) cale_month_day_heading_pane_t2

0x4f46,	// (0x0003c56c) cale_month_day_heading_pane_t3

0x4fab,	// (0x0003c5d1) cale_month_day_heading_pane_t4

0x5010,	// (0x0003c636) cale_month_day_heading_pane_t5

0x5075,	// (0x0003c69b) cale_month_day_heading_pane_t6

0x50da,	// (0x0003c700) cale_month_day_heading_pane_t7

0x0006,

0xf30d,	// (0x00046933) cale_month_day_heading_pane_t

0x410e,	// (0x0003b734) bg_cale_side_pane_cp01

0x5147,	// (0x0003c76d) cale_month_week_pane_t1

0x515e,	// (0x0003c784) cale_month_week_pane_t2

0x5175,	// (0x0003c79b) cale_month_week_pane_t3

0x518c,	// (0x0003c7b2) cale_month_week_pane_t4

0x51a3,	// (0x0003c7c9) cale_month_week_pane_t5

0x51ba,	// (0x0003c7e0) cale_month_week_pane_t6

0x0005,

0xf31c,	// (0x00046942) cale_month_week_pane_t

0x51d1,	// (0x0003c7f7) cell_cale_month_pane_ParamLimits

0x51d1,	// (0x0003c7f7) cell_cale_month_pane

0xebee,	// (0x00046214) cell_cale_month_pane_g1

0x527f,	// (0x0003c8a5) cell_cale_month_pane_t1_ParamLimits

0x527f,	// (0x0003c8a5) cell_cale_month_pane_t1

0x42ad,	// (0x0003b8d3) grid_highlight_pane_cp08

0x2038,	// (0x0003965e) main_smil_g1

0x529b,	// (0x0003c8c1) smil_status_pane

0xadd8,	// (0x000423fe) smil_text_pane

0xc750,	// (0x00043d76) bg_popup_call3_rect_pane_g8

0xc758,	// (0x00043d7e) bg_popup_call3_rect_pane_g9

0x0008,

0xf5d5,	// (0x00046bfb) bg_popup_call3_rect_pane_g

0xca0e,	// (0x00044034) smil_status_volume_pane_g1

0xade2,	// (0x00042408) smil_status_pane_t1

0xecec,	// (0x00046312) volume_smil_pane

0xadf9,	// (0x0004241f) list_smil_text_pane

0x52ac,	// (0x0003c8d2) scroll_pane_cp011

0x52b7,	// (0x0003c8dd) smil_text_list_pane_t1_ParamLimits

0x52b7,	// (0x0003c8dd) smil_text_list_pane_t1

0xebfa,	// (0x00046220) aid_volume_smil_ParamLimits

0xebfa,	// (0x00046220) aid_volume_smil

0x2038,	// (0x0003965e) smil_volume_pane_g1

0x2038,	// (0x0003965e) smil_volume_pane_g2

0x0001,

0xf33c,	// (0x00046962) smil_volume_pane_g

0x1fe3,	// (0x00039609) listscroll_cale_day_pane

0xae03,	// (0x00042429) bg_cale_pane

0xae1b,	// (0x00042441) list_cale_pane

0xae2c,	// (0x00042452) scroll_pane_cp09

0xae3d,	// (0x00042463) cale_bg_pane_g1

0xae45,	// (0x0004246b) cale_bg_pane_g2

0xae4d,	// (0x00042473) cale_bg_pane_g3

0xae55,	// (0x0004247b) cale_bg_pane_g4

0xae5d,	// (0x00042483) cale_bg_pane_g5

0xae65,	// (0x0004248b) cale_bg_pane_g6

0xae6d,	// (0x00042493) cale_bg_pane_g7

0xae75,	// (0x0004249b) cale_bg_pane_g8

0xae7d,	// (0x000424a3) cale_bg_pane_g9

0x0008,

0xf341,	// (0x00046967) cale_bg_pane_g

0x52f5,	// (0x0003c91b) list_cale_time_pane_ParamLimits

0x52f5,	// (0x0003c91b) list_cale_time_pane

0xae85,	// (0x000424ab) list_cale_time_pane_g1_ParamLimits

0xae85,	// (0x000424ab) list_cale_time_pane_g1

0xae91,	// (0x000424b7) list_cale_time_pane_g2_ParamLimits

0xae91,	// (0x000424b7) list_cale_time_pane_g2

0x530a,	// (0x0003c930) list_cale_time_pane_g3_ParamLimits

0x530a,	// (0x0003c930) list_cale_time_pane_g3

0x5318,	// (0x0003c93e) list_cale_time_pane_g4_ParamLimits

0x5318,	// (0x0003c93e) list_cale_time_pane_g4

0x5326,	// (0x0003c94c) list_cale_time_pane_g5_ParamLimits

0x5326,	// (0x0003c94c) list_cale_time_pane_g5

0x0005,

0xf354,	// (0x0004697a) list_cale_time_pane_g_ParamLimits

0xf354,	// (0x0004697a) list_cale_time_pane_g

0xaeab,	// (0x000424d1) list_cale_time_pane_t1_ParamLimits

0xaeab,	// (0x000424d1) list_cale_time_pane_t1

0xaed3,	// (0x000424f9) list_cale_time_pane_t2_ParamLimits

0xaed3,	// (0x000424f9) list_cale_time_pane_t2

0x55d0,	// (0x0003cbf6) aid_blid_cardinal_pane

0x560e,	// (0x0003cc34) compass_pane_t4

0xaefb,	// (0x00042521) list_cale_time_pane_t4_ParamLimits

0xaefb,	// (0x00042521) list_cale_time_pane_t4

0x561c,	// (0x0003cc42) compass_pane_t5

0x562a,	// (0x0003cc50) compass_pane_t6

0x5638,	// (0x0003cc5e) compass_pane_t7

0xb3df,	// (0x00042a05) navi_pane_cc_t1

0xb583,	// (0x00042ba9) aid_phob_thumbnail_center_pane

0x5b6d,	// (0x0003d193) main_postcard_pane_g4_ParamLimits

0x0002,

0xf361,	// (0x00046987) list_cale_time_pane_t_ParamLimits

0xf361,	// (0x00046987) list_cale_time_pane_t

0x1912,	// (0x00038f38) bg_popup_window_pane_cp02_ParamLimits

0x1912,	// (0x00038f38) bg_popup_window_pane_cp02

0xaf23,	// (0x00042549) heading_pane_cp01_ParamLimits

0xaf23,	// (0x00042549) heading_pane_cp01

0xaf2f,	// (0x00042555) loc_req_pane_ParamLimits

0xaf2f,	// (0x00042555) loc_req_pane

0xaf3f,	// (0x00042565) loc_type_pane_ParamLimits

0xaf3f,	// (0x00042565) loc_type_pane

0xaf51,	// (0x00042577) loc_type_pane_t1_ParamLimits

0xaf51,	// (0x00042577) loc_type_pane_t1

0xaf63,	// (0x00042589) loc_type_pane_t2_ParamLimits

0xaf63,	// (0x00042589) loc_type_pane_t2

0xaf75,	// (0x0004259b) loc_type_pane_t3_ParamLimits

0xaf75,	// (0x0004259b) loc_type_pane_t3

0x0002,

0xf368,	// (0x0004698e) loc_type_pane_t_ParamLimits

0xf368,	// (0x0004698e) loc_type_pane_t

0xaf87,	// (0x000425ad) list_loc_req_pane

0xaf91,	// (0x000425b7) scroll_pane_cp012

0x5332,	// (0x0003c958) list_single_loc_request_popup_menu_pane_ParamLimits

0x5332,	// (0x0003c958) list_single_loc_request_popup_menu_pane

0xaf9a,	// (0x000425c0) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xaf9a,	// (0x000425c0) list_single_loc_request_popup_menu_pane_g1

0xafa6,	// (0x000425cc) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xafa6,	// (0x000425cc) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf36f,	// (0x00046995) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf36f,	// (0x00046995) list_single_loc_request_popup_menu_pane_g

0xafb2,	// (0x000425d8) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xafb2,	// (0x000425d8) list_single_loc_request_popup_menu_pane_t1

0x1f14,	// (0x0003953a) bg_popup_window_pane_cp03_ParamLimits

0x1f14,	// (0x0003953a) bg_popup_window_pane_cp03

0xafc8,	// (0x000425ee) heading_loc_req_pane_ParamLimits

0xafc8,	// (0x000425ee) heading_loc_req_pane

0x533f,	// (0x0003c965) popup_dyc_status_message_window_g1_ParamLimits

0x533f,	// (0x0003c965) popup_dyc_status_message_window_g1

0x5353,	// (0x0003c979) popup_dyc_status_message_window_t1_ParamLimits

0x5353,	// (0x0003c979) popup_dyc_status_message_window_t1

0x5368,	// (0x0003c98e) popup_dyc_status_message_window_t2_ParamLimits

0x5368,	// (0x0003c98e) popup_dyc_status_message_window_t2

0x537d,	// (0x0003c9a3) popup_dyc_status_message_window_t3_ParamLimits

0x537d,	// (0x0003c9a3) popup_dyc_status_message_window_t3

0x0002,

0xf374,	// (0x0004699a) popup_dyc_status_message_window_t_ParamLimits

0xf374,	// (0x0004699a) popup_dyc_status_message_window_t

0x1cb9,	// (0x000392df) bg_heading_pane_cp01

0xafd4,	// (0x000425fa) heading_loc_req_pane_g1

0xafdc,	// (0x00042602) heading_loc_req_pane_g2

0xafe4,	// (0x0004260a) heading_loc_req_pane_g3

0x0002,

0xf37b,	// (0x000469a1) heading_loc_req_pane_g

0xafec,	// (0x00042612) heading_loc_req_pane_t1

0xb095,	// (0x000426bb) bg_popup_sub_pane_cp01_ParamLimits

0xb095,	// (0x000426bb) bg_popup_sub_pane_cp01

0xb0a3,	// (0x000426c9) popup_cale_events_window_g1_ParamLimits

0xb0a3,	// (0x000426c9) popup_cale_events_window_g1

0xb0c3,	// (0x000426e9) popup_cale_events_window_g2_ParamLimits

0xb0c3,	// (0x000426e9) popup_cale_events_window_g2

0x0001,

0xf3af,	// (0x000469d5) popup_cale_events_window_g_ParamLimits

0xf3af,	// (0x000469d5) popup_cale_events_window_g

0xb0e3,	// (0x00042709) popup_cale_events_window_t1_ParamLimits

0xb0e3,	// (0x00042709) popup_cale_events_window_t1

0xb0f5,	// (0x0004271b) popup_cale_events_window_t2_ParamLimits

0xb0f5,	// (0x0004271b) popup_cale_events_window_t2

0xb133,	// (0x00042759) popup_cale_events_window_t3_ParamLimits

0xb133,	// (0x00042759) popup_cale_events_window_t3

0xb16d,	// (0x00042793) popup_cale_events_window_t4_ParamLimits

0xb16d,	// (0x00042793) popup_cale_events_window_t4

0x0003,

0xf3b4,	// (0x000469da) popup_cale_events_window_t_ParamLimits

0xf3b4,	// (0x000469da) popup_cale_events_window_t

0x53b3,	// (0x0003c9d9) call_type_pane

0x53c3,	// (0x0003c9e9) popup_call_status_window_g1

0x53d7,	// (0x0003c9fd) popup_call_status_window_g2

0x53eb,	// (0x0003ca11) popup_call_status_window_g3

0x0002,

0xf3bd,	// (0x000469e3) popup_call_status_window_g

0xb1a3,	// (0x000427c9) call_type_pane_g1

0xb1ac,	// (0x000427d2) call_type_pane_g2

0x0001,

0xf3c4,	// (0x000469ea) call_type_pane_g

0x1cb9,	// (0x000392df) bg_popup_sub_pane_cp02

0xb1b5,	// (0x000427db) listscroll_popup_wml_pane

0xb1bd,	// (0x000427e3) list_wml_pane

0xb1c7,	// (0x000427ed) scroll_pane_cp013

0x53fb,	// (0x0003ca21) list_single_graphic_popup_wml_pane_ParamLimits

0x53fb,	// (0x0003ca21) list_single_graphic_popup_wml_pane

0x2038,	// (0x0003965e) list_single_graphic_popup_wml_pane_g1

0xb1d0,	// (0x000427f6) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf3c9,	// (0x000469ef) list_single_graphic_popup_wml_pane_g

0xb1d8,	// (0x000427fe) list_single_graphic_popup_wml_pane_t1

0xb1ee,	// (0x00042814) aid_call_pane

0x1f0c,	// (0x00039532) popup_clock_analogue_window_g1

0x1f0c,	// (0x00039532) popup_clock_analogue_window_g2

0xec1c,	// (0x00046242) popup_clock_analogue_window_g3

0xec1c,	// (0x00046242) popup_clock_analogue_window_g4

0x2038,	// (0x0003965e) popup_clock_analogue_window_g5

0x0004,

0xf3ce,	// (0x000469f4) popup_clock_analogue_window_g

0xec24,	// (0x0004624a) popup_clock_analogue_window_t1

0xec32,	// (0x00046258) clock_digital_number_pane_ParamLimits

0xec32,	// (0x00046258) clock_digital_number_pane

0xec3e,	// (0x00046264) clock_digital_number_pane_cp02_ParamLimits

0xec3e,	// (0x00046264) clock_digital_number_pane_cp02

0xec4a,	// (0x00046270) clock_digital_number_pane_cp03_ParamLimits

0xec4a,	// (0x00046270) clock_digital_number_pane_cp03

0xec56,	// (0x0004627c) clock_digital_number_pane_cp04_ParamLimits

0xec56,	// (0x0004627c) clock_digital_number_pane_cp04

0xec62,	// (0x00046288) clock_digital_separator_pane_ParamLimits

0xec62,	// (0x00046288) clock_digital_separator_pane

0xec6e,	// (0x00046294) popup_clock_digital_window_t1

0x2038,	// (0x0003965e) clock_digital_number_pane_g1

0x2038,	// (0x0003965e) clock_digital_number_pane_g2

0x0001,

0xf33c,	// (0x00046962) clock_digital_number_pane_g

0x2038,	// (0x0003965e) clock_digital_separator_pane_g1

0x2038,	// (0x0003965e) clock_digital_separator_pane_g2

0x0001,

0xf33c,	// (0x00046962) clock_digital_separator_pane_g

0x1cb9,	// (0x000392df) bg_popup_window_pane_cp04

0xb1f6,	// (0x0004281c) heading_pane_cp03

0xb1fe,	// (0x00042824) listscroll_popup_gms_pane

0xb206,	// (0x0004282c) grid_large_graphic_popup_pane

0xb210,	// (0x00042836) listscroll_popup_gms_pane_g1

0xb218,	// (0x0004283e) listscroll_popup_gms_pane_g2

0x0001,

0xf3d9,	// (0x000469ff) listscroll_popup_gms_pane_g

0xac1c,	// (0x00042242) scroll_pane_cp014

0x540e,	// (0x0003ca34) cell_large_graphic_popup_pane_ParamLimits

0x540e,	// (0x0003ca34) cell_large_graphic_popup_pane

0x5424,	// (0x0003ca4a) cell_large_graphic_popup_pane_g1_ParamLimits

0x5424,	// (0x0003ca4a) cell_large_graphic_popup_pane_g1

0xb220,	// (0x00042846) cell_large_graphic_popup_pane_g2_ParamLimits

0xb220,	// (0x00042846) cell_large_graphic_popup_pane_g2

0xb22c,	// (0x00042852) cell_large_graphic_popup_pane_g3_ParamLimits

0xb22c,	// (0x00042852) cell_large_graphic_popup_pane_g3

0xb239,	// (0x0004285f) cell_large_graphic_popup_pane_g4_ParamLimits

0xb239,	// (0x0004285f) cell_large_graphic_popup_pane_g4

0x0003,

0xf3de,	// (0x00046a04) cell_large_graphic_popup_pane_g_ParamLimits

0xf3de,	// (0x00046a04) cell_large_graphic_popup_pane_g

0xb249,	// (0x0004286f) grid_highlight_pane_cp010

0x2038,	// (0x0003965e) bg_popup_call_pane_g1

0xb253,	// (0x00042879) list_single_graphic_popup_conf_pane_ParamLimits

0xb253,	// (0x00042879) list_single_graphic_popup_conf_pane

0xb266,	// (0x0004288c) list_highlight_pane_cp01

0xb26f,	// (0x00042895) list_single_graphic_popup_conf_pane_g1

0xb277,	// (0x0004289d) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf3e7,	// (0x00046a0d) list_single_graphic_popup_conf_pane_g

0xb27f,	// (0x000428a5) list_single_graphic_popup_conf_pane_t1

0xb28d,	// (0x000428b3) linegrid_cams_pane_g1

0x5430,	// (0x0003ca56) linegrid_cams_pane_g2

0x3dbe,	// (0x0003b3e4) linegrid_cams_pane_g3

0xb296,	// (0x000428bc) linegrid_cams_pane_g4

0x5439,	// (0x0003ca5f) linegrid_cams_pane_g5

0x5442,	// (0x0003ca68) linegrid_cams_pane_g6

0x4303,	// (0x0003b929) linegrid_cams_pane_g7

0x0006,

0xf3ec,	// (0x00046a12) linegrid_cams_pane_g

0xb29f,	// (0x000428c5) popup_clock_analogue_window

0xb29f,	// (0x000428c5) popup_clock_digital_window

0x1cb9,	// (0x000392df) popup_phob_thumbnail_window

0x2038,	// (0x0003965e) call_video_uplink_pane_g1

0xb2a8,	// (0x000428ce) call_video_uplink_pane_g2

0x0001,

0xf3fb,	// (0x00046a21) call_video_uplink_pane_g

0x42ad,	// (0x0003b8d3) video_uplink_pane

0xb2b0,	// (0x000428d6) mce_image_pane_g1

0x544b,	// (0x0003ca71) mce_image_pane_g2

0x5453,	// (0x0003ca79) mce_image_pane_g3

0x545b,	// (0x0003ca81) mce_image_pane_g4

0x5463,	// (0x0003ca89) mce_image_pane_g5

0x0004,

0xf400,	// (0x00046a26) mce_image_pane_g

0xb2ba,	// (0x000428e0) control_top_pane_stacon_cp01_ParamLimits

0xb2ba,	// (0x000428e0) control_top_pane_stacon_cp01

0xb2ca,	// (0x000428f0) uni_indicator_pane_stacon_cp01_ParamLimits

0xb2ca,	// (0x000428f0) uni_indicator_pane_stacon_cp01

0xb2db,	// (0x00042901) bg_popup_sub_pane_cp03

0xb2e5,	// (0x0004290b) chi_dic_find_pane

0x546b,	// (0x0003ca91) listscroll_chi_dic_pane

0xb2ed,	// (0x00042913) main_pane_chidic_g1

0xb2f5,	// (0x0004291b) chi_dic_find_pane_t1

0xb303,	// (0x00042929) find_chidic_pane

0xb30c,	// (0x00042932) chi_dic_list_pane_ParamLimits

0xb30c,	// (0x00042932) chi_dic_list_pane

0xb31d,	// (0x00042943) scroll_pane_cp020

0xb325,	// (0x0004294b) find_chidic_pane_t1

0x1cb9,	// (0x000392df) input_focus_pane_cp06

0x547f,	// (0x0003caa5) list_chi_dic_pane_ParamLimits

0x547f,	// (0x0003caa5) list_chi_dic_pane

0x5491,	// (0x0003cab7) list_chi_dic_pane_t1_ParamLimits

0x5491,	// (0x0003cab7) list_chi_dic_pane_t1

0x1cb9,	// (0x000392df) list_highlight_pane_cp020

0xb334,	// (0x0004295a) bg_cale_heading_pane_g1

0x54a4,	// (0x0003caca) bg_cale_heading_pane_g2

0x54ac,	// (0x0003cad2) bg_cale_heading_pane_g3

0x54b4,	// (0x0003cada) bg_cale_heading_pane_g4

0x54be,	// (0x0003cae4) bg_cale_heading_pane_g5

0x54c8,	// (0x0003caee) bg_cale_heading_pane_g6

0x54d0,	// (0x0003caf6) bg_cale_heading_pane_g7

0x54d8,	// (0x0003cafe) bg_cale_heading_pane_g8

0x54e2,	// (0x0003cb08) bg_cale_heading_pane_g9

0x0008,

0xf40b,	// (0x00046a31) bg_cale_heading_pane_g

0xb334,	// (0x0004295a) bg_cale_side_pane_g1

0x54ec,	// (0x0003cb12) bg_cale_side_pane_g2

0x54f4,	// (0x0003cb1a) bg_cale_side_pane_g3

0x54fc,	// (0x0003cb22) bg_cale_side_pane_g4

0x5504,	// (0x0003cb2a) bg_cale_side_pane_g5

0x550c,	// (0x0003cb32) bg_cale_side_pane_g6

0x5514,	// (0x0003cb3a) bg_cale_side_pane_g7

0x551c,	// (0x0003cb42) bg_cale_side_pane_g8

0x5524,	// (0x0003cb4a) bg_cale_side_pane_g9

0x0008,

0xf41e,	// (0x00046a44) bg_cale_side_pane_g

0x552c,	// (0x0003cb52) popup_call_status_window_ParamLimits

0x552c,	// (0x0003cb52) popup_call_status_window

0xb33c,	// (0x00042962) stacon_top_pane

0xb344,	// (0x0004296a) status_pane_ParamLimits

0xb344,	// (0x0004296a) status_pane

0xb35e,	// (0x00042984) status_small_pane

0xb366,	// (0x0004298c) control_pane

0x1cb9,	// (0x000392df) stacon_bottom_pane

0xb36e,	// (0x00042994) list_single_mce_smart_pane_t1_ParamLimits

0xb36e,	// (0x00042994) list_single_mce_smart_pane_t1

0xb381,	// (0x000429a7) list_single_mce_smart_pane_t2_ParamLimits

0xb381,	// (0x000429a7) list_single_mce_smart_pane_t2

0x0001,

0xf431,	// (0x00046a57) list_single_mce_smart_pane_t_ParamLimits

0xf431,	// (0x00046a57) list_single_mce_smart_pane_t

0x5573,	// (0x0003cb99) compass_pane

0x557c,	// (0x0003cba2) main_location2_pane_t1

0x5592,	// (0x0003cbb8) main_location2_pane_t2

0x55a8,	// (0x0003cbce) main_location2_pane_t3

0x0003,

0xf436,	// (0x00046a5c) main_location2_pane_t

0xb3a9,	// (0x000429cf) compass_pane_g1_ParamLimits

0xb3a9,	// (0x000429cf) compass_pane_g1

0x55f0,	// (0x0003cc16) compass_pane_t1

0x55ff,	// (0x0003cc25) compass_pane_t2

0x0005,

0xf43f,	// (0x00046a65) compass_pane_t

0x5646,	// (0x0003cc6c) text_secondary_cp61

0xb3d6,	// (0x000429fc) navi_pane_cams_g5

0xb417,	// (0x00042a3d) navi_pane_im_t1

0xb425,	// (0x00042a4b) navi_pane_mp_g1_ParamLimits

0xb425,	// (0x00042a4b) navi_pane_mp_g1

0xb439,	// (0x00042a5f) navi_pane_mp_g2_ParamLimits

0xb439,	// (0x00042a5f) navi_pane_mp_g2

0xb445,	// (0x00042a6b) navi_pane_mp_g3_ParamLimits

0xb445,	// (0x00042a6b) navi_pane_mp_g3

0x0002,

0xf453,	// (0x00046a79) navi_pane_mp_g_ParamLimits

0xf453,	// (0x00046a79) navi_pane_mp_g

0xb451,	// (0x00042a77) navi_pane_mp_t1

0xb45f,	// (0x00042a85) navi_pane_mp_t2

0x0002,

0xf45a,	// (0x00046a80) navi_pane_mp_t

0xb4cc,	// (0x00042af2) navi_pane_vt_g1

0xb451,	// (0x00042a77) navi_pane_vt_t1

0xb4d4,	// (0x00042afa) navi_slider_pane

0xb4dc,	// (0x00042b02) zooming_pane

0xb4e4,	// (0x00042b0a) navi_slider_pane_g1

0xec8b,	// (0x000462b1) navi_slider_pane_g2

0x0006,

0xf461,	// (0x00046a87) navi_slider_pane_g

0xb508,	// (0x00042b2e) aid_levels_zoom

0xb510,	// (0x00042b36) zooming_pane_g1

0xb518,	// (0x00042b3e) zooming_pane_g2

0xb518,	// (0x00042b3e) zooming_pane_g3

0x0002,

0xf470,	// (0x00046a96) zooming_pane_g

0xb520,	// (0x00042b46) level_10_zoom

0xb529,	// (0x00042b4f) level_11_zoom

0xb532,	// (0x00042b58) level_1_zoom

0xb53b,	// (0x00042b61) level_2_zoom

0xb544,	// (0x00042b6a) level_3_zoom

0xb54d,	// (0x00042b73) level_4_zoom

0xb556,	// (0x00042b7c) level_5_zoom

0xb55f,	// (0x00042b85) level_6_zoom

0xb568,	// (0x00042b8e) level_7_zoom

0xb571,	// (0x00042b97) level_8_zoom

0xb57a,	// (0x00042ba0) level_9_zoom

0xb58b,	// (0x00042bb1) popup_phob_thumbnail_window_g1

0xb593,	// (0x00042bb9) popup_phob_thumbnail_window_g2

0x0001,

0xf477,	// (0x00046a9d) popup_phob_thumbnail_window_g

0xc8f2,	// (0x00043f18) level_1_location

0xc8fa,	// (0x00043f20) level_2_location

0xc902,	// (0x00043f28) level_3_location

0xc90a,	// (0x00043f30) level_4_location

0xb4dc,	// (0x00042b02) level_5_location

0x56d1,	// (0x0003ccf7) mce_icon_pane_g1

0x56d9,	// (0x0003ccff) mce_icon_pane_g2

0x0001,

0xf47c,	// (0x00046aa2) mce_icon_pane_g

0x56e1,	// (0x0003cd07) main_mup_pane_g1_ParamLimits

0x56e1,	// (0x0003cd07) main_mup_pane_g1

0x56f7,	// (0x0003cd1d) main_mup_pane_g2_ParamLimits

0x56f7,	// (0x0003cd1d) main_mup_pane_g2

0x570f,	// (0x0003cd35) main_mup_pane_g3_ParamLimits

0x570f,	// (0x0003cd35) main_mup_pane_g3

0x5727,	// (0x0003cd4d) main_mup_pane_g4_ParamLimits

0x5727,	// (0x0003cd4d) main_mup_pane_g4

0x573f,	// (0x0003cd65) main_mup_pane_g5_ParamLimits

0x573f,	// (0x0003cd65) main_mup_pane_g5

0x5759,	// (0x0003cd7f) main_mup_pane_g6_ParamLimits

0x5759,	// (0x0003cd7f) main_mup_pane_g6

0x5771,	// (0x0003cd97) main_mup_pane_g7_ParamLimits

0x5771,	// (0x0003cd97) main_mup_pane_g7

0x5789,	// (0x0003cdaf) main_mup_pane_g8_ParamLimits

0x5789,	// (0x0003cdaf) main_mup_pane_g8

0x57a1,	// (0x0003cdc7) main_mup_pane_g9_ParamLimits

0x57a1,	// (0x0003cdc7) main_mup_pane_g9

0x57b5,	// (0x0003cddb) main_mup_pane_g10_ParamLimits

0x57b5,	// (0x0003cddb) main_mup_pane_g10

0x57c9,	// (0x0003cdef) main_mup_pane_g11_ParamLimits

0x57c9,	// (0x0003cdef) main_mup_pane_g11

0x57db,	// (0x0003ce01) main_mup_pane_g12_ParamLimits

0x57db,	// (0x0003ce01) main_mup_pane_g12

0x57ef,	// (0x0003ce15) main_mup_pane_g13_ParamLimits

0x57ef,	// (0x0003ce15) main_mup_pane_g13

0x000c,

0xf481,	// (0x00046aa7) main_mup_pane_g_ParamLimits

0xf481,	// (0x00046aa7) main_mup_pane_g

0x5801,	// (0x0003ce27) main_mup_pane_t1_ParamLimits

0x5801,	// (0x0003ce27) main_mup_pane_t1

0x581b,	// (0x0003ce41) main_mup_pane_t2_ParamLimits

0x581b,	// (0x0003ce41) main_mup_pane_t2

0x5833,	// (0x0003ce59) main_mup_pane_t3_ParamLimits

0x5833,	// (0x0003ce59) main_mup_pane_t3

0x584b,	// (0x0003ce71) main_mup_pane_t4_ParamLimits

0x584b,	// (0x0003ce71) main_mup_pane_t4

0x5869,	// (0x0003ce8f) main_mup_pane_t5_ParamLimits

0x5869,	// (0x0003ce8f) main_mup_pane_t5

0x587e,	// (0x0003cea4) main_mup_pane_t6_ParamLimits

0x587e,	// (0x0003cea4) main_mup_pane_t6

0x0005,

0xf49c,	// (0x00046ac2) main_mup_pane_t_ParamLimits

0xf49c,	// (0x00046ac2) main_mup_pane_t

0x5890,	// (0x0003ceb6) mup_progress_pane_ParamLimits

0x5890,	// (0x0003ceb6) mup_progress_pane

0x589c,	// (0x0003cec2) mup_visualizer_pane_ParamLimits

0x589c,	// (0x0003cec2) mup_visualizer_pane

0x58c4,	// (0x0003ceea) mup_volume_pane_ParamLimits

0x58c4,	// (0x0003ceea) mup_volume_pane

0xb59b,	// (0x00042bc1) mup_visualizer_pane_g1_ParamLimits

0xb59b,	// (0x00042bc1) mup_visualizer_pane_g1

0xb59b,	// (0x00042bc1) mup_visualizer_pane_g2_ParamLimits

0xb59b,	// (0x00042bc1) mup_visualizer_pane_g2

0xb3a9,	// (0x000429cf) mup_visualizer_pane_g3_ParamLimits

0xb3a9,	// (0x000429cf) mup_visualizer_pane_g3

0x0002,

0xf4a9,	// (0x00046acf) mup_visualizer_pane_g_ParamLimits

0xf4a9,	// (0x00046acf) mup_visualizer_pane_g

0x2038,	// (0x0003965e) mup_volume_pane_g1

0xb5b1,	// (0x00042bd7) mup_volume_pane_g2

0x0001,

0xf4b0,	// (0x00046ad6) mup_volume_pane_g

0x2038,	// (0x0003965e) mup_progress_pane_g1

0xb5ba,	// (0x00042be0) mup_progress_pane_g2

0xb5c3,	// (0x00042be9) mup_progress_pane_g3

0x0002,

0xf4b5,	// (0x00046adb) mup_progress_pane_g

0x1cb9,	// (0x000392df) bg_popup_window_pane_cp05

0xb5cc,	// (0x00042bf2) heading_pane_cp02_ParamLimits

0xb5cc,	// (0x00042bf2) heading_pane_cp02

0xb5e6,	// (0x00042c0c) list_popup_blid_pane

0xb5ee,	// (0x00042c14) list_blid_sat_info_pane_ParamLimits

0xb5ee,	// (0x00042c14) list_blid_sat_info_pane

0xb601,	// (0x00042c27) list_blid_sat_info_pane_g1

0xb609,	// (0x00042c2f) list_blid_sat_info_pane_t1

0x59b4,	// (0x0003cfda) mup_equalizer_pane_ParamLimits

0x59b4,	// (0x0003cfda) mup_equalizer_pane

0x59cd,	// (0x0003cff3) mup_equalizer_pane_cp1_ParamLimits

0x59cd,	// (0x0003cff3) mup_equalizer_pane_cp1

0x59e6,	// (0x0003d00c) mup_equalizer_pane_cp2_ParamLimits

0x59e6,	// (0x0003d00c) mup_equalizer_pane_cp2

0x59ff,	// (0x0003d025) mup_equalizer_pane_cp3_ParamLimits

0x59ff,	// (0x0003d025) mup_equalizer_pane_cp3

0x5a18,	// (0x0003d03e) mup_equalizer_pane_cp4_ParamLimits

0x5a18,	// (0x0003d03e) mup_equalizer_pane_cp4

0x5a31,	// (0x0003d057) mup_equalizer_pane_cp5

0x5a43,	// (0x0003d069) mup_equalizer_pane_cp6

0x5a55,	// (0x0003d07b) mup_equalizer_pane_cp7

0xc7d0,	// (0x00043df6) bg_popup_call_poc_act_pane_g9

0xc7d8,	// (0x00043dfe) bg_popup_call_poc_act_pane_g10

0xc7e0,	// (0x00043e06) bg_popup_call_poc_act_pane_g11

0x000a,

0x1f14,	// (0x0003953a) mup_scale_pane

0x2038,	// (0x0003965e) mup_scale_pane_g1

0xb617,	// (0x00042c3d) mup_scale_pane_g2

0x0006,

0xf4d1,	// (0x00046af7) mup_scale_pane_g

0xb63b,	// (0x00042c61) msg_data_pane

0xb643,	// (0x00042c69) scroll_pane_cp017

0x2fe2,	// (0x0003a608) bg_list_pane_cp04_ParamLimits

0x2fe2,	// (0x0003a608) bg_list_pane_cp04

0xb64b,	// (0x00042c71) msg_data_pane_g1

0x544b,	// (0x0003ca71) msg_data_pane_g2

0x5453,	// (0x0003ca79) msg_data_pane_g3

0x5a7b,	// (0x0003d0a1) msg_data_pane_g4

0x5463,	// (0x0003ca89) msg_data_pane_g5

0x56d1,	// (0x0003ccf7) msg_data_pane_g6

0x5a83,	// (0x0003d0a9) msg_data_pane_g7

0x0006,

0xf4e0,	// (0x00046b06) msg_data_pane_g

0x3002,	// (0x0003a628) msg_text_pane_ParamLimits

0x3002,	// (0x0003a628) msg_text_pane

0x5a8b,	// (0x0003d0b1) qrid_highlight_pane_cp011_ParamLimits

0x5a8b,	// (0x0003d0b1) qrid_highlight_pane_cp011

0x1cb9,	// (0x000392df) msg_body_pane

0x1cb9,	// (0x000392df) msg_header_pane

0xb65c,	// (0x00042c82) input_focus_pane_cp07

0x3033,	// (0x0003a659) msg_header_pane_t1_ParamLimits

0x3033,	// (0x0003a659) msg_header_pane_t1

0xb671,	// (0x00042c97) msg_header_pane_t2_ParamLimits

0xb671,	// (0x00042c97) msg_header_pane_t2

0x0001,

0xf4f4,	// (0x00046b1a) msg_header_pane_t_ParamLimits

0xf4f4,	// (0x00046b1a) msg_header_pane_t

0xb683,	// (0x00042ca9) msg_body_pane_g1

0x3045,	// (0x0003a66b) msg_body_pane_t1_ParamLimits

0x3045,	// (0x0003a66b) msg_body_pane_t1

0xb68b,	// (0x00042cb1) msg_body_pane_t2_ParamLimits

0xb68b,	// (0x00042cb1) msg_body_pane_t2

0xb69d,	// (0x00042cc3) msg_body_pane_t3_ParamLimits

0xb69d,	// (0x00042cc3) msg_body_pane_t3

0x0002,

0xf4f9,	// (0x00046b1f) msg_body_pane_t_ParamLimits

0xf4f9,	// (0x00046b1f) msg_body_pane_t

0x5ad7,	// (0x0003d0fd) main_viewer_pane_g1_ParamLimits

0x5ad7,	// (0x0003d0fd) main_viewer_pane_g1

0x5ae3,	// (0x0003d109) main_viewer_pane_g2_ParamLimits

0x5ae3,	// (0x0003d109) main_viewer_pane_g2

0x5aef,	// (0x0003d115) main_viewer_pane_g3_ParamLimits

0x5aef,	// (0x0003d115) main_viewer_pane_g3

0x5afe,	// (0x0003d124) main_viewer_pane_g4_ParamLimits

0x5afe,	// (0x0003d124) main_viewer_pane_g4

0xecb5,	// (0x000462db) main_viewer_pane_g5_ParamLimits

0xecb5,	// (0x000462db) main_viewer_pane_g5

0xecb5,	// (0x000462db) main_viewer_pane_g7_ParamLimits

0xecb5,	// (0x000462db) main_viewer_pane_g7

0xecc7,	// (0x000462ed) main_viewer_pane_g8_ParamLimits

0xecc7,	// (0x000462ed) main_viewer_pane_g8

0x0007,

0xf509,	// (0x00046b2f) main_viewer_pane_g_ParamLimits

0xf509,	// (0x00046b2f) main_viewer_pane_g

0xb6af,	// (0x00042cd5) viewer_content_pane_ParamLimits

0xb6af,	// (0x00042cd5) viewer_content_pane

0x5b32,	// (0x0003d158) main_postcard_pane_g1_ParamLimits

0x5b32,	// (0x0003d158) main_postcard_pane_g1

0x5b46,	// (0x0003d16c) main_postcard_pane_g2_ParamLimits

0x5b46,	// (0x0003d16c) main_postcard_pane_g2

0x5b5a,	// (0x0003d180) main_postcard_pane_g3_ParamLimits

0x5b5a,	// (0x0003d180) main_postcard_pane_g3

0x0005,

0xf51a,	// (0x00046b40) main_postcard_pane_g_ParamLimits

0xf51a,	// (0x00046b40) main_postcard_pane_g

0x5b6d,	// (0x0003d193) main_postcard_pane_g4

0xca21,	// (0x00044047) smil_status_volume_pane_g2

0x5ba8,	// (0x0003d1ce) postcard_pane_ParamLimits

0x5ba8,	// (0x0003d1ce) postcard_pane

0xb6bd,	// (0x00042ce3) postcard_pane_g1_ParamLimits

0xb6bd,	// (0x00042ce3) postcard_pane_g1

0x5be8,	// (0x0003d20e) postcard_pane_g2_ParamLimits

0x5be8,	// (0x0003d20e) postcard_pane_g2

0x5bf4,	// (0x0003d21a) postcard_pane_g3_ParamLimits

0x5bf4,	// (0x0003d21a) postcard_pane_g3

0xb6cb,	// (0x00042cf1) postcard_pane_g4_ParamLimits

0xb6cb,	// (0x00042cf1) postcard_pane_g4

0x5c00,	// (0x0003d226) postcard_pane_g5_ParamLimits

0x5c00,	// (0x0003d226) postcard_pane_g5

0x5c15,	// (0x0003d23b) postcard_pane_g6_ParamLimits

0x5c15,	// (0x0003d23b) postcard_pane_g6

0xb6bd,	// (0x00042ce3) postcard_pane_g7_ParamLimits

0xb6bd,	// (0x00042ce3) postcard_pane_g7

0x0006,

0xf527,	// (0x00046b4d) postcard_pane_g_ParamLimits

0xf527,	// (0x00046b4d) postcard_pane_g

0x5c29,	// (0x0003d24f) main_mp2_pane_g1_ParamLimits

0x5c29,	// (0x0003d24f) main_mp2_pane_g1

0x5c35,	// (0x0003d25b) main_mp2_pane_g2_ParamLimits

0x5c35,	// (0x0003d25b) main_mp2_pane_g2

0x5c41,	// (0x0003d267) main_mp2_pane_g3_ParamLimits

0x5c41,	// (0x0003d267) main_mp2_pane_g3

0x0002,

0xf536,	// (0x00046b5c) main_mp2_pane_g_ParamLimits

0xf536,	// (0x00046b5c) main_mp2_pane_g

0x5c4d,	// (0x0003d273) main_mp2_pane_t1_ParamLimits

0x5c4d,	// (0x0003d273) main_mp2_pane_t1

0x5c62,	// (0x0003d288) main_mp2_pane_t2_ParamLimits

0x5c62,	// (0x0003d288) main_mp2_pane_t2

0x5c74,	// (0x0003d29a) main_mp2_pane_t3_ParamLimits

0x5c74,	// (0x0003d29a) main_mp2_pane_t3

0x0002,

0xf53d,	// (0x00046b63) main_mp2_pane_t_ParamLimits

0xf53d,	// (0x00046b63) main_mp2_pane_t

0xb6d9,	// (0x00042cff) pec_content_pane_ParamLimits

0xb6d9,	// (0x00042cff) pec_content_pane

0xac1c,	// (0x00042242) scroll_pane_cp015

0xb6eb,	// (0x00042d11) pec_attribute_pane_ParamLimits

0xb6eb,	// (0x00042d11) pec_attribute_pane

0x5c86,	// (0x0003d2ac) pec_content_pane_g1_ParamLimits

0x5c86,	// (0x0003d2ac) pec_content_pane_g1

0xb6fb,	// (0x00042d21) pec_content_pane_t1_ParamLimits

0xb6fb,	// (0x00042d21) pec_content_pane_t1

0xb70d,	// (0x00042d33) pec_content_pane_t2_ParamLimits

0xb70d,	// (0x00042d33) pec_content_pane_t2

0x0001,

0xf544,	// (0x00046b6a) pec_content_pane_t_ParamLimits

0xf544,	// (0x00046b6a) pec_content_pane_t

0x5c92,	// (0x0003d2b8) list_single_graphic_pane_cp01_ParamLimits

0x5c92,	// (0x0003d2b8) list_single_graphic_pane_cp01

0x1f14,	// (0x0003953a) bg_popup_sub_pane_cp04

0xb71f,	// (0x00042d45) popup_mup_playback_window_g1

0xb72b,	// (0x00042d51) popup_mup_playback_window_t1

0xb740,	// (0x00042d66) popup_mup_playback_window_t2

0x0001,

0xf549,	// (0x00046b6f) popup_mup_playback_window_t

0xb777,	// (0x00042d9d) main_image_pane_g1_ParamLimits

0xb777,	// (0x00042d9d) main_image_pane_g1

0xb7ba,	// (0x00042de0) scroll_pane_cp018_ParamLimits

0xb7ba,	// (0x00042de0) scroll_pane_cp018

0xb7d2,	// (0x00042df8) scroll_pane_cp016_ParamLimits

0xb7d2,	// (0x00042df8) scroll_pane_cp016

0x5d5d,	// (0x0003d383) smil2_image_pane_ParamLimits

0x5d5d,	// (0x0003d383) smil2_image_pane

0x5d85,	// (0x0003d3ab) smil2_root_pane_ParamLimits

0x5d85,	// (0x0003d3ab) smil2_root_pane

0x5dbd,	// (0x0003d3e3) smil2_text_pane_ParamLimits

0x5dbd,	// (0x0003d3e3) smil2_text_pane

0x1cb9,	// (0x000392df) bg_list_pane_cp06

0xb80e,	// (0x00042e34) grid_radio_pane

0x1cb9,	// (0x000392df) bg_popup_window_pane_cp06

0xb816,	// (0x00042e3c) main_fmradio_pane_t1

0xb1f6,	// (0x0004281c) heading_pane_cp04

0xb824,	// (0x00042e4a) main_fmradio_pane_t2

0xc828,	// (0x00043e4e) popup_cale_lunar_info_window_g1

0xb832,	// (0x00042e58) main_fmradio_pane_t3

0xc830,	// (0x00043e56) popup_cale_lunar_info_window_g2

0xb840,	// (0x00042e66) main_fmradio_pane_t4

0x0001,

0xb84e,	// (0x00042e74) main_fmradio_pane_t5

0x0004,

0xf637,	// (0x00046c5d) popup_cale_lunar_info_window_g

0xf55e,	// (0x00046b84) main_fmradio_pane_t

0xb85c,	// (0x00042e82) wait_bar_pane_cp03

0xb864,	// (0x00042e8a) cell_fmradio_pane_ParamLimits

0xb864,	// (0x00042e8a) cell_fmradio_pane

0xb6bd,	// (0x00042ce3) cell_fmradio_pane_g1_ParamLimits

0xb6bd,	// (0x00042ce3) cell_fmradio_pane_g1

0x1cb9,	// (0x000392df) grid_highlight_pane_cp011

0xb877,	// (0x00042e9d) poc_content_pane_ParamLimits

0xb877,	// (0x00042e9d) poc_content_pane

0xb88a,	// (0x00042eb0) scroll_pane_cp019

0x5e29,	// (0x0003d44f) popup_call_poc_act_window_ParamLimits

0x5e29,	// (0x0003d44f) popup_call_poc_act_window

0x5e49,	// (0x0003d46f) popup_call_poc_inact_window_ParamLimits

0x5e49,	// (0x0003d46f) popup_call_poc_inact_window

0xf5fb,	// (0x00046c21) bg_popup_call_poc_act_pane_g

0xc7e8,	// (0x00043e0e) bg_popup_call_poc_inact_pane_g1

0xc7f0,	// (0x00043e16) bg_popup_call_poc_inact_pane_g2

0xb892,	// (0x00042eb8) popup_call_poc_act_window_g2

0xc7f8,	// (0x00043e1e) bg_popup_call_poc_inact_pane_g3

0xc778,	// (0x00043d9e) bg_popup_call_poc_inact_pane_g4

0xc800,	// (0x00043e26) bg_popup_call_poc_inact_pane_g5

0xb89a,	// (0x00042ec0) popup_call_poc_act_window_t1_ParamLimits

0xb89a,	// (0x00042ec0) popup_call_poc_act_window_t1

0xb8c2,	// (0x00042ee8) popup_call_poc_act_window_t2_ParamLimits

0xb8c2,	// (0x00042ee8) popup_call_poc_act_window_t2

0xb8ea,	// (0x00042f10) popup_call_poc_act_window_t3_ParamLimits

0xb8ea,	// (0x00042f10) popup_call_poc_act_window_t3

0xb912,	// (0x00042f38) popup_call_poc_act_window_t4_ParamLimits

0xb912,	// (0x00042f38) popup_call_poc_act_window_t4

0x0003,

0xf569,	// (0x00046b8f) popup_call_poc_act_window_t_ParamLimits

0xf569,	// (0x00046b8f) popup_call_poc_act_window_t

0xc808,	// (0x00043e2e) bg_popup_call_poc_inact_pane_g6

0xc810,	// (0x00043e36) bg_popup_call_poc_inact_pane_g7

0xc818,	// (0x00043e3e) bg_popup_call_poc_inact_pane_g8

0xb924,	// (0x00042f4a) popup_call_poc_inact_window_g2

0xc820,	// (0x00043e46) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf612,	// (0x00046c38) bg_popup_call_poc_inact_pane_g

0xb92c,	// (0x00042f52) popup_call_poc_inact_window_t1_ParamLimits

0xb92c,	// (0x00042f52) popup_call_poc_inact_window_t1

0xb941,	// (0x00042f67) popup_call_poc_inact_window_t2_ParamLimits

0xb941,	// (0x00042f67) popup_call_poc_inact_window_t2

0xb956,	// (0x00042f7c) popup_call_poc_inact_window_t3_ParamLimits

0xb956,	// (0x00042f7c) popup_call_poc_inact_window_t3

0x0002,

0xf572,	// (0x00046b98) popup_call_poc_inact_window_t_ParamLimits

0xf572,	// (0x00046b98) popup_call_poc_inact_window_t

0xc994,	// (0x00043fba) context_pane_ParamLimits

0x655b,	// (0x0003db81) signal_pane_ParamLimits

0xb4dc,	// (0x00042b02) main_call2_pane

0xc982,	// (0x00043fa8) popup_phob_thumbnail2_window_ParamLimits

0xc982,	// (0x00043fa8) popup_phob_thumbnail2_window

0xec9d,	// (0x000462c3) aid_hotspot_pointer_arrow_pane

0xeca5,	// (0x000462cb) aid_hotspot_pointer_hand_pane

0x611e,	// (0x0003d744) phob_pre_status_pane_g5

0x4353,	// (0x0003b979) cams_zoom_pane_ParamLimits

0x4362,	// (0x0003b988) image_vga_pane_ParamLimits

0x437a,	// (0x0003b9a0) main_camera_pane_g1_ParamLimits

0x438a,	// (0x0003b9b0) main_camera_pane_g2_ParamLimits

0x439a,	// (0x0003b9c0) main_camera_pane_g3_ParamLimits

0x43aa,	// (0x0003b9d0) main_camera_pane_g4_ParamLimits

0x43ba,	// (0x0003b9e0) main_camera_pane_g5_ParamLimits

0x43ca,	// (0x0003b9f0) main_camera_pane_g6_ParamLimits

0x43da,	// (0x0003ba00) main_camera_pane_g7_ParamLimits

0xf271,	// (0x00046897) main_camera_pane_g_ParamLimits

0x43f6,	// (0x0003ba1c) main_camera_pane_t1_ParamLimits

0x440c,	// (0x0003ba32) main_camera_pane_t2_ParamLimits

0xf282,	// (0x000468a8) main_camera_pane_t_ParamLimits

0x1f14,	// (0x0003953a) bg_popup_preview_window_pane_cp01_ParamLimits

0x1f14,	// (0x0003953a) bg_popup_preview_window_pane_cp01

0xb96b,	// (0x00042f91) popup_phob_thumbnail2_window_g1_ParamLimits

0xb96b,	// (0x00042f91) popup_phob_thumbnail2_window_g1

0x1cb9,	// (0x000392df) call2_cli_visual_pane

0x5e75,	// (0x0003d49b) popup_call2_audio_conf_window_ParamLimits

0x5e75,	// (0x0003d49b) popup_call2_audio_conf_window

0x5e93,	// (0x0003d4b9) popup_call2_audio_first_window_ParamLimits

0x5e93,	// (0x0003d4b9) popup_call2_audio_first_window

0x5f09,	// (0x0003d52f) popup_call2_audio_in_window_ParamLimits

0x5f09,	// (0x0003d52f) popup_call2_audio_in_window

0x5f3d,	// (0x0003d563) popup_call2_audio_out_window_ParamLimits

0x5f3d,	// (0x0003d563) popup_call2_audio_out_window

0x5f8f,	// (0x0003d5b5) popup_call2_audio_second_window_ParamLimits

0x5f8f,	// (0x0003d5b5) popup_call2_audio_second_window

0x5fe1,	// (0x0003d607) popup_call2_audio_wait_window_ParamLimits

0x5fe1,	// (0x0003d607) popup_call2_audio_wait_window

0x1cb9,	// (0x000392df) bg_popup_call2_act_pane_cp03

0x1ef6,	// (0x0003951c) list_conf_pane_cp

0xb977,	// (0x00042f9d) popup_call2_audio_conf_window_t1

0xb253,	// (0x00042879) list_single_graphic_popup_conf2_pane_ParamLimits

0xb253,	// (0x00042879) list_single_graphic_popup_conf2_pane

0xb266,	// (0x0004288c) list_highlight_pane_cp04

0xb985,	// (0x00042fab) list_single_graphic_popup_conf2_pane_g1

0xb277,	// (0x0004289d) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf579,	// (0x00046b9f) list_single_graphic_popup_conf2_pane_g

0xb98d,	// (0x00042fb3) list_single_graphic_popup_conf2_pane_t1

0xb99b,	// (0x00042fc1) bg_popup_call2_act_pane_cp01_ParamLimits

0xb99b,	// (0x00042fc1) bg_popup_call2_act_pane_cp01

0xba25,	// (0x0004304b) call_type_pane_cp05_ParamLimits

0xba25,	// (0x0004304b) call_type_pane_cp05

0xba79,	// (0x0004309f) popup_call2_audio_second_window_g1_ParamLimits

0xba79,	// (0x0004309f) popup_call2_audio_second_window_g1

0xbacd,	// (0x000430f3) popup_call2_audio_second_window_g2_ParamLimits

0xbacd,	// (0x000430f3) popup_call2_audio_second_window_g2

0x0002,

0xf57e,	// (0x00046ba4) popup_call2_audio_second_window_g_ParamLimits

0xf57e,	// (0x00046ba4) popup_call2_audio_second_window_g

0xbb32,	// (0x00043158) popup_call2_audio_second_window_t1_ParamLimits

0xbb32,	// (0x00043158) popup_call2_audio_second_window_t1

0xbbed,	// (0x00043213) popup_call2_audio_second_window_t2_ParamLimits

0xbbed,	// (0x00043213) popup_call2_audio_second_window_t2

0xbc40,	// (0x00043266) popup_call2_audio_second_window_t3_ParamLimits

0xbc40,	// (0x00043266) popup_call2_audio_second_window_t3

0x0003,

0xf585,	// (0x00046bab) popup_call2_audio_second_window_t_ParamLimits

0xf585,	// (0x00046bab) popup_call2_audio_second_window_t

0x1cb9,	// (0x000392df) bg_popup_call2_in_pane_cp02

0x1cc3,	// (0x000392e9) call_type_pane_cp04

0x1ccb,	// (0x000392f1) popup_call2_audio_wait_window_g1

0x1cd3,	// (0x000392f9) popup_call2_audio_wait_window_g2

0x0001,

0xf15e,	// (0x00046784) popup_call2_audio_wait_window_g

0x1cdb,	// (0x00039301) popup_call2_audio_wait_window_t3

0xbd33,	// (0x00043359) bg_popup_call2_act_pane_ParamLimits

0xbd33,	// (0x00043359) bg_popup_call2_act_pane

0xbdf3,	// (0x00043419) call_type_pane_cp03_ParamLimits

0xbdf3,	// (0x00043419) call_type_pane_cp03

0xbe57,	// (0x0004347d) popup_call2_audio_first_window_g1_ParamLimits

0xbe57,	// (0x0004347d) popup_call2_audio_first_window_g1

0xbec7,	// (0x000434ed) popup_call2_audio_first_window_g2_ParamLimits

0xbec7,	// (0x000434ed) popup_call2_audio_first_window_g2

0xb59b,	// (0x00042bc1) popup_call2_audio_first_window_g3_ParamLimits

0xb59b,	// (0x00042bc1) popup_call2_audio_first_window_g3

0x0004,

0xf58e,	// (0x00046bb4) popup_call2_audio_first_window_g_ParamLimits

0xf58e,	// (0x00046bb4) popup_call2_audio_first_window_g

0xbfa5,	// (0x000435cb) popup_call2_audio_first_window_t1_ParamLimits

0xbfa5,	// (0x000435cb) popup_call2_audio_first_window_t1

0xc0a8,	// (0x000436ce) popup_call2_audio_first_window_t4_ParamLimits

0xc0a8,	// (0x000436ce) popup_call2_audio_first_window_t4

0xc18b,	// (0x000437b1) popup_call2_audio_first_window_t5_ParamLimits

0xc18b,	// (0x000437b1) popup_call2_audio_first_window_t5

0x0003,

0xf599,	// (0x00046bbf) popup_call2_audio_first_window_t_ParamLimits

0xf599,	// (0x00046bbf) popup_call2_audio_first_window_t

0x1f0c,	// (0x00039532) bg_popup_call2_act_pane_g1

0xc838,	// (0x00043e5e) popup_cale_lunar_info_window_t1

0xc846,	// (0x00043e6c) popup_cale_lunar_info_window_t2

0xc854,	// (0x00043e7a) popup_cale_lunar_info_window_t3

0x1cb9,	// (0x000392df) bg_popup_call2_bubble_pane

0xc28c,	// (0x000438b2) bg_popup_call2_in_pane_cp01_ParamLimits

0xc28c,	// (0x000438b2) bg_popup_call2_in_pane_cp01

0x1995,	// (0x00038fbb) call_type_pane_cp02

0xc2d4,	// (0x000438fa) popup_call2_audio_out_window_g1_ParamLimits

0xc2d4,	// (0x000438fa) popup_call2_audio_out_window_g1

0xc300,	// (0x00043926) popup_call2_audio_out_window_g2_ParamLimits

0xc300,	// (0x00043926) popup_call2_audio_out_window_g2

0xc328,	// (0x0004394e) popup_call2_audio_out_window_g3_ParamLimits

0xc328,	// (0x0004394e) popup_call2_audio_out_window_g3

0x0003,

0xf5a2,	// (0x00046bc8) popup_call2_audio_out_window_g_ParamLimits

0xf5a2,	// (0x00046bc8) popup_call2_audio_out_window_g

0xc363,	// (0x00043989) popup_call2_audio_out_window_t1_ParamLimits

0xc363,	// (0x00043989) popup_call2_audio_out_window_t1

0xc3c2,	// (0x000439e8) popup_call2_audio_out_window_t2_ParamLimits

0xc3c2,	// (0x000439e8) popup_call2_audio_out_window_t2

0xc416,	// (0x00043a3c) popup_call2_audio_out_window_t3_ParamLimits

0xc416,	// (0x00043a3c) popup_call2_audio_out_window_t3

0xc42c,	// (0x00043a52) popup_call2_audio_out_window_t4_ParamLimits

0xc42c,	// (0x00043a52) popup_call2_audio_out_window_t4

0xc442,	// (0x00043a68) popup_call2_audio_out_window_t5_ParamLimits

0xc442,	// (0x00043a68) popup_call2_audio_out_window_t5

0x0005,

0xf5ab,	// (0x00046bd1) popup_call2_audio_out_window_t_ParamLimits

0xf5ab,	// (0x00046bd1) popup_call2_audio_out_window_t

0xc4a6,	// (0x00043acc) bg_popup_call2_in_pane_ParamLimits

0xc4a6,	// (0x00043acc) bg_popup_call2_in_pane

0xc502,	// (0x00043b28) popup_call2_audio_in_window_g1_ParamLimits

0xc502,	// (0x00043b28) popup_call2_audio_in_window_g1

0xc53a,	// (0x00043b60) popup_call2_audio_in_window_g2_ParamLimits

0xc53a,	// (0x00043b60) popup_call2_audio_in_window_g2

0xc572,	// (0x00043b98) popup_call2_audio_in_window_g3_ParamLimits

0xc572,	// (0x00043b98) popup_call2_audio_in_window_g3

0x0003,

0xf5b8,	// (0x00046bde) popup_call2_audio_in_window_g_ParamLimits

0xf5b8,	// (0x00046bde) popup_call2_audio_in_window_g

0xc5ca,	// (0x00043bf0) popup_call2_audio_in_window_t1_ParamLimits

0xc5ca,	// (0x00043bf0) popup_call2_audio_in_window_t1

0xc64a,	// (0x00043c70) popup_call2_audio_in_window_t2_ParamLimits

0xc64a,	// (0x00043c70) popup_call2_audio_in_window_t2

0xc6ca,	// (0x00043cf0) popup_call2_audio_in_window_t3_ParamLimits

0xc6ca,	// (0x00043cf0) popup_call2_audio_in_window_t3

0xc6e4,	// (0x00043d0a) popup_call2_audio_in_window_t4_ParamLimits

0xc6e4,	// (0x00043d0a) popup_call2_audio_in_window_t4

0xc6f6,	// (0x00043d1c) popup_call2_audio_in_window_t5_ParamLimits

0xc6f6,	// (0x00043d1c) popup_call2_audio_in_window_t5

0xc70b,	// (0x00043d31) popup_call2_audio_in_window_t6_ParamLimits

0xc70b,	// (0x00043d31) popup_call2_audio_in_window_t6

0x0005,

0xf5c1,	// (0x00046be7) popup_call2_audio_in_window_t_ParamLimits

0xf5c1,	// (0x00046be7) popup_call2_audio_in_window_t

0x1f0c,	// (0x00039532) bg_popup_call2_in_pane_g1

0xc862,	// (0x00043e88) popup_cale_lunar_info_window_t4

0x0003,

0xf63c,	// (0x00046c62) popup_cale_lunar_info_window_t

0x1f14,	// (0x0003953a) bg_popup_call2_rect_pane_ParamLimits

0x1f14,	// (0x0003953a) bg_popup_call2_rect_pane

0x1cb9,	// (0x000392df) call2_cli_visual_graphic_pane

0x1cb9,	// (0x000392df) call2_cli_visual_text_pane

0xecdf,	// (0x00046305) smil_status_volume_pane_g3

0x0002,

0x2038,	// (0x0003965e) call2_cli_visual_graphic_pane_g1

0x2038,	// (0x0003965e) call2_cli_visual_graphic_pane_g2

0x2038,	// (0x0003965e) call2_cli_visual_graphic_pane_g3

0x0002,

0xf5ce,	// (0x00046bf4) call2_cli_visual_graphic_pane_g

0xc720,	// (0x00043d46) bg_popup_call2_rect_pane_g1

0x3d73,	// (0x0003b399) bg_popup_call2_rect_pane_g2

0xc728,	// (0x00043d4e) bg_popup_call2_rect_pane_g3

0xc730,	// (0x00043d56) bg_popup_call2_rect_pane_g4

0xc738,	// (0x00043d5e) bg_popup_call2_rect_pane_g5

0xc740,	// (0x00043d66) bg_popup_call2_rect_pane_g6

0xc748,	// (0x00043d6e) bg_popup_call2_rect_pane_g7

0xc750,	// (0x00043d76) bg_popup_call2_rect_pane_g8

0xc758,	// (0x00043d7e) bg_popup_call2_rect_pane_g9

0x0008,

0xf5d5,	// (0x00046bfb) bg_popup_call2_rect_pane_g

0xc760,	// (0x00043d86) bg_popup_call2_bubble_pane_g1

0xc768,	// (0x00043d8e) bg_popup_call2_bubble_pane_g2

0xc770,	// (0x00043d96) bg_popup_call2_bubble_pane_g3

0xc778,	// (0x00043d9e) bg_popup_call2_bubble_pane_g4

0xc780,	// (0x00043da6) bg_popup_call2_bubble_pane_g5

0xc788,	// (0x00043dae) bg_popup_call2_bubble_pane_g6

0xc790,	// (0x00043db6) bg_popup_call2_bubble_pane_g7

0xc798,	// (0x00043dbe) bg_popup_call2_bubble_pane_g8

0xc7a0,	// (0x00043dc6) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5e8,	// (0x00046c0e) bg_popup_call2_bubble_pane_g

0x3def,	// (0x0003b415) aid_cale_week_size_cell_pane

0x4422,	// (0x0003ba48) aid_cams_cif_uncrop_pane_ParamLimits

0x4422,	// (0x0003ba48) aid_cams_cif_uncrop_pane

0x4601,	// (0x0003bc27) aid_cams_size_cell_ParamLimits

0x4601,	// (0x0003bc27) aid_cams_size_cell

0x4615,	// (0x0003bc3b) grid_cams_pane_ParamLimits

0x462a,	// (0x0003bc50) linegrid_cams_pane_ParamLimits

0x4732,	// (0x0003bd58) call_video_pane_t1

0x4744,	// (0x0003bd6a) call_video_pane_t2

0x0001,

0xf2d5,	// (0x000468fb) call_video_pane_t

0x4b47,	// (0x0003c16d) aid_cale_month_size_cell_pane_ParamLimits

0x4b47,	// (0x0003c16d) aid_cale_month_size_cell_pane

0xf685,	// (0x00046cab) smil_status_volume_pane_g

0xecec,	// (0x00046312) volume_smil_pane_ParamLimits

0x186f,	// (0x00038e95) aid_popup2_width_pane

0x3d1f,	// (0x0003b345) cell_qdial_pane_g4_ParamLimits

0x3d1f,	// (0x0003b345) cell_qdial_pane_g4

0x55d0,	// (0x0003cbf6) aid_blid_cardinal_pane_ParamLimits

0x55dc,	// (0x0003cc02) aid_blid_destination_pane_ParamLimits

0x55dc,	// (0x0003cc02) aid_blid_destination_pane

0x1f14,	// (0x0003953a) bg_popup_call_poc_act_pane_ParamLimits

0x1f14,	// (0x0003953a) bg_popup_call_poc_act_pane

0x1f14,	// (0x0003953a) bg_popup_call_poc_inact_pane_ParamLimits

0x1f14,	// (0x0003953a) bg_popup_call_poc_inact_pane

0xc7a8,	// (0x00043dce) bg_popup_call_poc_act_pane_g1

0xc7b0,	// (0x00043dd6) bg_popup_call_poc_act_pane_g2

0xc7b8,	// (0x00043dde) bg_popup_call_poc_act_pane_g3

0xc778,	// (0x00043d9e) bg_popup_call_poc_act_pane_g4

0xc780,	// (0x00043da6) bg_popup_call_poc_act_pane_g5

0xc7c0,	// (0x00043de6) bg_popup_call_poc_act_pane_g6

0xc790,	// (0x00043db6) bg_popup_call_poc_act_pane_g7

0xc7c8,	// (0x00043dee) bg_popup_call_poc_act_pane_g8

0x1cb9,	// (0x000392df) main_usb_pane

0xc961,	// (0x00043f87) popup_cale_lunar_info_window

0x4969,	// (0x0003bf8f) im_reading_pane_t1_ParamLimits

0x499f,	// (0x0003bfc5) list_im_pane_ParamLimits

0x49b0,	// (0x0003bfd6) scroll_pane_cp07_ParamLimits

0x1cb9,	// (0x000392df) grid_highlight_pane_cp012

0x1f14,	// (0x0003953a) mup_scale_pane_ParamLimits

0xb6bd,	// (0x00042ce3) main_usb_pane_g1_ParamLimits

0xb6bd,	// (0x00042ce3) main_usb_pane_g1

0x603b,	// (0x0003d661) main_usb_pane_g2_ParamLimits

0x603b,	// (0x0003d661) main_usb_pane_g2

0x0001,

0xf625,	// (0x00046c4b) main_usb_pane_g_ParamLimits

0xf625,	// (0x00046c4b) main_usb_pane_g

0x604f,	// (0x0003d675) main_usb_pane_t1_ParamLimits

0x604f,	// (0x0003d675) main_usb_pane_t1

0x6061,	// (0x0003d687) main_usb_pane_t2_ParamLimits

0x6061,	// (0x0003d687) main_usb_pane_t2

0x6073,	// (0x0003d699) main_usb_pane_t3_ParamLimits

0x6073,	// (0x0003d699) main_usb_pane_t3

0x6085,	// (0x0003d6ab) main_usb_pane_t4_ParamLimits

0x6085,	// (0x0003d6ab) main_usb_pane_t4

0x6097,	// (0x0003d6bd) main_usb_pane_t5_ParamLimits

0x6097,	// (0x0003d6bd) main_usb_pane_t5

0x60a9,	// (0x0003d6cf) main_usb_pane_t6_ParamLimits

0x60a9,	// (0x0003d6cf) main_usb_pane_t6

0x0005,

0xf62a,	// (0x00046c50) main_usb_pane_t_ParamLimits

0xb3a0,	// (0x000429c6) aid_text_placing

0x557c,	// (0x0003cba2) main_location2_pane_t1_ParamLimits

0x5592,	// (0x0003cbb8) main_location2_pane_t2_ParamLimits

0x55a8,	// (0x0003cbce) main_location2_pane_t3_ParamLimits

0x55be,	// (0x0003cbe4) main_location2_pane_t4_ParamLimits

0x55be,	// (0x0003cbe4) main_location2_pane_t4

0xf436,	// (0x00046a5c) main_location2_pane_t_ParamLimits

0x1f50,	// (0x00039576) find_pinb_pane_g2_ParamLimits

0x1f50,	// (0x00039576) find_pinb_pane_g2

0x0001,

0xf184,	// (0x000467aa) find_pinb_pane_g_ParamLimits

0xf184,	// (0x000467aa) find_pinb_pane_g

0x1f5c,	// (0x00039582) find_pinb_pane_t1_ParamLimits

0x1f6e,	// (0x00039594) find_pinb_pane_t2_ParamLimits

0xf189,	// (0x000467af) find_pinb_pane_t_ParamLimits

0x1cb9,	// (0x000392df) main_call3_pane

0x4e83,	// (0x0003c4a9) cale_month_day_heading_pane_t1_ParamLimits

0x4ee1,	// (0x0003c507) cale_month_day_heading_pane_t2_ParamLimits

0x4f46,	// (0x0003c56c) cale_month_day_heading_pane_t3_ParamLimits

0x4fab,	// (0x0003c5d1) cale_month_day_heading_pane_t4_ParamLimits

0x5010,	// (0x0003c636) cale_month_day_heading_pane_t5_ParamLimits

0x5075,	// (0x0003c69b) cale_month_day_heading_pane_t6_ParamLimits

0x50da,	// (0x0003c700) cale_month_day_heading_pane_t7_ParamLimits

0xf30d,	// (0x00046933) cale_month_day_heading_pane_t_ParamLimits

0xadf0,	// (0x00042416) smil_status_volume_pane

0x5bc4,	// (0x0003d1ea) postcard_address_pane_ParamLimits

0x5bc4,	// (0x0003d1ea) postcard_address_pane

0x5bd6,	// (0x0003d1fc) postcard_message_pane_ParamLimits

0x5bd6,	// (0x0003d1fc) postcard_message_pane

0x6019,	// (0x0003d63f) call2_cli_visual_pane_t1_ParamLimits

0x6019,	// (0x0003d63f) call2_cli_visual_pane_t1

0x6777,	// (0x0003dd9d) postcard_message_pane_t1_ParamLimits

0x6777,	// (0x0003dd9d) postcard_message_pane_t1

0x6760,	// (0x0003dd86) postcard_address_pane_t1_ParamLimits

0x6760,	// (0x0003dd86) postcard_address_pane_t1

0x674e,	// (0x0003dd74) popup_call3_audio_in_window_ParamLimits

0x674e,	// (0x0003dd74) popup_call3_audio_in_window

0x65dd,	// (0x0003dc03) bg_popup_call3_in_pane_ParamLimits

0x65dd,	// (0x0003dc03) bg_popup_call3_in_pane

0x664f,	// (0x0003dc75) popup_call3_audio_in_window_g1_ParamLimits

0x664f,	// (0x0003dc75) popup_call3_audio_in_window_g1

0x666f,	// (0x0003dc95) popup_call3_audio_in_window_g2_ParamLimits

0x666f,	// (0x0003dc95) popup_call3_audio_in_window_g2

0x668f,	// (0x0003dcb5) popup_call3_audio_in_window_g3_ParamLimits

0x668f,	// (0x0003dcb5) popup_call3_audio_in_window_g3

0x0003,

0xf68c,	// (0x00046cb2) popup_call3_audio_in_window_g_ParamLimits

0xf68c,	// (0x00046cb2) popup_call3_audio_in_window_g

0x66c0,	// (0x0003dce6) popup_call3_audio_in_window_t1_ParamLimits

0x66c0,	// (0x0003dce6) popup_call3_audio_in_window_t1

0x66fe,	// (0x0003dd24) popup_call3_audio_in_window_t2_ParamLimits

0x66fe,	// (0x0003dd24) popup_call3_audio_in_window_t2

0x673c,	// (0x0003dd62) popup_call3_audio_in_window_t3_ParamLimits

0x673c,	// (0x0003dd62) popup_call3_audio_in_window_t3

0x0002,

0xf695,	// (0x00046cbb) popup_call3_audio_in_window_t_ParamLimits

0xf695,	// (0x00046cbb) popup_call3_audio_in_window_t

0xb4dc,	// (0x00042b02) bg_popup_call3_rect_pane

0xc720,	// (0x00043d46) bg_popup_call3_rect_pane_g1

0x3d73,	// (0x0003b399) bg_popup_call3_rect_pane_g2

0xc728,	// (0x00043d4e) bg_popup_call3_rect_pane_g3

0xc730,	// (0x00043d56) bg_popup_call3_rect_pane_g4

0xc738,	// (0x00043d5e) bg_popup_call3_rect_pane_g5

0xc740,	// (0x00043d66) bg_popup_call3_rect_pane_g6

0xc748,	// (0x00043d6e) bg_popup_call3_rect_pane_g7

0x58da,	// (0x0003cf00) mup_visualizer_osc_pane

0xb5a9,	// (0x00042bcf) mup_visualizer_spec_pane

0x660d,	// (0x0003dc33) call3_video_qcif_pane_ParamLimits

0x660d,	// (0x0003dc33) call3_video_qcif_pane

0x661e,	// (0x0003dc44) call3_video_qcif_uncrop_pane_ParamLimits

0x661e,	// (0x0003dc44) call3_video_qcif_uncrop_pane

0x662a,	// (0x0003dc50) call3_video_subqcif_pane_ParamLimits

0x662a,	// (0x0003dc50) call3_video_subqcif_pane

0x663e,	// (0x0003dc64) call3_video_subqcif_uncrop_pane_ParamLimits

0x663e,	// (0x0003dc64) call3_video_subqcif_uncrop_pane

0x66af,	// (0x0003dcd5) popup_call3_audio_in_window_g4_ParamLimits

0x66af,	// (0x0003dcd5) popup_call3_audio_in_window_g4

0x65cc,	// (0x0003dbf2) mup_spec_half_pane

0x65d5,	// (0x0003dbfb) mup_spec_half_pane_cp

0xc9f4,	// (0x0004401a) mup_osc_middle_pane

0xc9fd,	// (0x00044023) mup_visualizer_osc_pane_g1

0x65ad,	// (0x0003dbd3) mup_spec_bar_pane_ParamLimits

0x65ad,	// (0x0003dbd3) mup_spec_bar_pane

0xc9e1,	// (0x00044007) mup_spec_bar_pane_g1

0xc9eb,	// (0x00044011) mup_spec_bar_pane_g2

0x0001,

0xf680,	// (0x00046ca6) mup_spec_bar_pane_g

0x3def,	// (0x0003b415) aid_cale_week_size_cell_pane_ParamLimits

0x3e02,	// (0x0003b428) bg_cale_heading_pane_ParamLimits

0x3e16,	// (0x0003b43c) bg_cale_pane_cp01_ParamLimits

0x3e2f,	// (0x0003b455) cale_week_corner_pane_ParamLimits

0x3e45,	// (0x0003b46b) cale_week_day_heading_pane_ParamLimits

0x3e59,	// (0x0003b47f) cale_week_scroll_pane_g1_ParamLimits

0x3e6a,	// (0x0003b490) cale_week_scroll_pane_g2_ParamLimits

0x3e7b,	// (0x0003b4a1) cale_week_scroll_pane_g3_ParamLimits

0x3e8c,	// (0x0003b4b2) cale_week_scroll_pane_g4_ParamLimits

0x3e9d,	// (0x0003b4c3) cale_week_scroll_pane_g5_ParamLimits

0x3eae,	// (0x0003b4d4) cale_week_scroll_pane_g6_ParamLimits

0x3ebf,	// (0x0003b4e5) cale_week_scroll_pane_g7_ParamLimits

0x3ed0,	// (0x0003b4f6) cale_week_scroll_pane_g8_ParamLimits

0x3ee3,	// (0x0003b509) cale_week_scroll_pane_g9_ParamLimits

0x3ef4,	// (0x0003b51a) cale_week_scroll_pane_g10_ParamLimits

0x3f05,	// (0x0003b52b) cale_week_scroll_pane_g11_ParamLimits

0x3f16,	// (0x0003b53c) cale_week_scroll_pane_g12_ParamLimits

0x3f27,	// (0x0003b54d) cale_week_scroll_pane_g13_ParamLimits

0x3f38,	// (0x0003b55e) cale_week_scroll_pane_g14_ParamLimits

0x3f49,	// (0x0003b56f) cale_week_scroll_pane_g15_ParamLimits

0xf215,	// (0x0004683b) cale_week_scroll_pane_g_ParamLimits

0x3f5a,	// (0x0003b580) cale_week_time_pane_ParamLimits

0x3f6d,	// (0x0003b593) grid_cale_week_pane_ParamLimits

0x3f80,	// (0x0003b5a6) listscroll_cale_week_pane_t1

0x3f92,	// (0x0003b5b8) scroll_pane_cp08_ParamLimits

0x4b88,	// (0x0003c1ae) cale_month_corner_pane_ParamLimits

0xad9c,	// (0x000423c2) cale_month_pane_t1

0x4e42,	// (0x0003c468) cale_month_week_pane_ParamLimits

0x53c3,	// (0x0003c9e9) popup_call_status_window_g1_ParamLimits

0x53d7,	// (0x0003c9fd) popup_call_status_window_g2_ParamLimits

0x53eb,	// (0x0003ca11) popup_call_status_window_g3_ParamLimits

0xf3bd,	// (0x000469e3) popup_call_status_window_g_ParamLimits

0xb1e6,	// (0x0004280c) aid_call2_pane

0x3027,	// (0x0003a64d) msg_header_pane_g1

0x5bc4,	// (0x0003d1ea) postcard_address2_pane_ParamLimits

0x5bc4,	// (0x0003d1ea) postcard_address2_pane

0x5bd6,	// (0x0003d1fc) postcard_message2_pane_ParamLimits

0x5bd6,	// (0x0003d1fc) postcard_message2_pane

0x6569,	// (0x0003db8f) message2_row_pane_ParamLimits

0x6569,	// (0x0003db8f) message2_row_pane

0x6583,	// (0x0003dba9) address2_row_pane_ParamLimits

0x6583,	// (0x0003dba9) address2_row_pane

0xc9af,	// (0x00043fd5) postcard_message2_row_pane_g1

0xc9b7,	// (0x00043fdd) postcard_message2_row_pane_t1

0xc9af,	// (0x00043fd5) address2_row_pane_g1

0xc9b7,	// (0x00043fdd) address2_row_pane_t1

0x4314,	// (0x0003b93a) aid_size_cell_vorec

0x1cb9,	// (0x000392df) main_rss_pane

0x6596,	// (0x0003dbbc) rss_list_single_pane_ParamLimits

0x6596,	// (0x0003dbbc) rss_list_single_pane

0xc9c5,	// (0x00043feb) rss_list_single_pane_t1

0xc9d3,	// (0x00043ff9) rss_list_single_pane_t2

0x0001,

0xf67b,	// (0x00046ca1) rss_list_single_pane_t

0x1cb9,	// (0x000392df) main_camera2_pane

0x1cb9,	// (0x000392df) main_video2_pane

0x67d0,	// (0x0003ddf6) cams_zoom_pane_cp2_ParamLimits

0x67d0,	// (0x0003ddf6) cams_zoom_pane_cp2

0x67e7,	// (0x0003de0d) image2_vga_pane_ParamLimits

0x67e7,	// (0x0003de0d) image2_vga_pane

0x681d,	// (0x0003de43) main_camera2_pane_g1_ParamLimits

0x681d,	// (0x0003de43) main_camera2_pane_g1

0x683d,	// (0x0003de63) main_camera2_pane_g2_ParamLimits

0x683d,	// (0x0003de63) main_camera2_pane_g2

0x6854,	// (0x0003de7a) main_camera2_pane_g3_ParamLimits

0x6854,	// (0x0003de7a) main_camera2_pane_g3

0x686b,	// (0x0003de91) main_camera2_pane_g4_ParamLimits

0x686b,	// (0x0003de91) main_camera2_pane_g4

0x6882,	// (0x0003dea8) main_camera2_pane_g5_ParamLimits

0x6882,	// (0x0003dea8) main_camera2_pane_g5

0x6899,	// (0x0003debf) main_camera2_pane_g6_ParamLimits

0x6899,	// (0x0003debf) main_camera2_pane_g6

0x68b0,	// (0x0003ded6) main_camera2_pane_g7_ParamLimits

0x68b0,	// (0x0003ded6) main_camera2_pane_g7

0x68c7,	// (0x0003deed) main_camera2_pane_g8_ParamLimits

0x68c7,	// (0x0003deed) main_camera2_pane_g8

0x0008,

0xf69c,	// (0x00046cc2) main_camera2_pane_g_ParamLimits

0xf69c,	// (0x00046cc2) main_camera2_pane_g

0x68f5,	// (0x0003df1b) main_camera2_pane_t1_ParamLimits

0x68f5,	// (0x0003df1b) main_camera2_pane_t1

0x6924,	// (0x0003df4a) main_camera2_pane_t2_ParamLimits

0x6924,	// (0x0003df4a) main_camera2_pane_t2

0x6941,	// (0x0003df67) main_camera2_pane_t3_ParamLimits

0x6941,	// (0x0003df67) main_camera2_pane_t3

0x698d,	// (0x0003dfb3) main_camera2_pane_t4_ParamLimits

0x698d,	// (0x0003dfb3) main_camera2_pane_t4

0x0006,

0xf6af,	// (0x00046cd5) main_camera2_pane_t_ParamLimits

0xf6af,	// (0x00046cd5) main_camera2_pane_t

0x6a02,	// (0x0003e028) cams_zoom_pane_cp4_ParamLimits

0x6a02,	// (0x0003e028) cams_zoom_pane_cp4

0x6a18,	// (0x0003e03e) image2_cif_pane_ParamLimits

0x6a18,	// (0x0003e03e) image2_cif_pane

0x6a3b,	// (0x0003e061) image2_subqcif_pane_ParamLimits

0x6a3b,	// (0x0003e061) image2_subqcif_pane

0x6a51,	// (0x0003e077) main_video2_pane_g1_ParamLimits

0x6a51,	// (0x0003e077) main_video2_pane_g1

0x6a6b,	// (0x0003e091) main_video2_pane_g2_ParamLimits

0x6a6b,	// (0x0003e091) main_video2_pane_g2

0x6a81,	// (0x0003e0a7) main_video2_pane_g3_ParamLimits

0x6a81,	// (0x0003e0a7) main_video2_pane_g3

0x6a97,	// (0x0003e0bd) main_video2_pane_g4_ParamLimits

0x6a97,	// (0x0003e0bd) main_video2_pane_g4

0x6aad,	// (0x0003e0d3) main_video2_pane_g5_ParamLimits

0x6aad,	// (0x0003e0d3) main_video2_pane_g5

0x6ac3,	// (0x0003e0e9) main_video2_pane_g6_ParamLimits

0x6ac3,	// (0x0003e0e9) main_video2_pane_g6

0x0005,

0xf6be,	// (0x00046ce4) main_video2_pane_g_ParamLimits

0xf6be,	// (0x00046ce4) main_video2_pane_g

0x6add,	// (0x0003e103) main_video2_pane_t1_ParamLimits

0x6add,	// (0x0003e103) main_video2_pane_t1

0x6b01,	// (0x0003e127) main_video2_pane_t2_ParamLimits

0x6b01,	// (0x0003e127) main_video2_pane_t2

0x6b4b,	// (0x0003e171) main_video2_pane_t3_ParamLimits

0x6b4b,	// (0x0003e171) main_video2_pane_t3

0x0002,

0xf6cb,	// (0x00046cf1) main_video2_pane_t_ParamLimits

0xf6cb,	// (0x00046cf1) main_video2_pane_t

0x6158,	// (0x0003d77e) call_muted_g2

0x0001,

0xf66d,	// (0x00046c93) call_muted_g

0x1cb9,	// (0x000392df) main_mup2_pane

0x6b8d,	// (0x0003e1b3) main_mup2_pane_g1_ParamLimits

0x6b8d,	// (0x0003e1b3) main_mup2_pane_g1

0x6b99,	// (0x0003e1bf) main_mup2_pane_g2_ParamLimits

0x6b99,	// (0x0003e1bf) main_mup2_pane_g2

0xed55,	// (0x0004637b) main_mup_pane_g13_cp1

0xed5d,	// (0x00046383) mup_volume_pane_cp1

0x6bb5,	// (0x0003e1db) main_mup2_pane_g4_ParamLimits

0x6bb5,	// (0x0003e1db) main_mup2_pane_g4

0x6bc5,	// (0x0003e1eb) main_mup2_pane_g5_ParamLimits

0x6bc5,	// (0x0003e1eb) main_mup2_pane_g5

0x6bd5,	// (0x0003e1fb) main_mup2_pane_g6_ParamLimits

0x6bd5,	// (0x0003e1fb) main_mup2_pane_g6

0x6be5,	// (0x0003e20b) main_mup2_pane_g7_ParamLimits

0x6be5,	// (0x0003e20b) main_mup2_pane_g7

0x0006,

0xf6d2,	// (0x00046cf8) main_mup2_pane_g_ParamLimits

0xf6d2,	// (0x00046cf8) main_mup2_pane_g

0x6bfd,	// (0x0003e223) main_mup2_pane_t1_ParamLimits

0x6bfd,	// (0x0003e223) main_mup2_pane_t1

0x6c13,	// (0x0003e239) main_mup2_pane_t2_ParamLimits

0x6c13,	// (0x0003e239) main_mup2_pane_t2

0x6c29,	// (0x0003e24f) main_mup2_pane_t3_ParamLimits

0x6c29,	// (0x0003e24f) main_mup2_pane_t3

0x6c3f,	// (0x0003e265) main_mup2_pane_t4_ParamLimits

0x6c3f,	// (0x0003e265) main_mup2_pane_t4

0x6c57,	// (0x0003e27d) main_mup2_pane_t5_ParamLimits

0x6c57,	// (0x0003e27d) main_mup2_pane_t5

0x6c6f,	// (0x0003e295) main_mup2_pane_t6_ParamLimits

0x6c6f,	// (0x0003e295) main_mup2_pane_t6

0x0005,

0xf6e1,	// (0x00046d07) main_mup2_pane_t_ParamLimits

0xf6e1,	// (0x00046d07) main_mup2_pane_t

0x6c9f,	// (0x0003e2c5) mup2_visualizer_pane_ParamLimits

0x6c9f,	// (0x0003e2c5) mup2_visualizer_pane

0x6cca,	// (0x0003e2f0) mup_progress_pane_cp_ParamLimits

0x6cca,	// (0x0003e2f0) mup_progress_pane_cp

0xed40,	// (0x00046366) mup_volume_pane_cp_ParamLimits

0xed40,	// (0x00046366) mup_volume_pane_cp

0x6cde,	// (0x0003e304) mup2_visualizer_pane_g1_ParamLimits

0x6cde,	// (0x0003e304) mup2_visualizer_pane_g1

0xca34,	// (0x0004405a) mup2_visualizer_pane_g2_ParamLimits

0xca34,	// (0x0004405a) mup2_visualizer_pane_g2

0x6cf3,	// (0x0003e319) mup2_visualizer_pane_g3_ParamLimits

0x6cf3,	// (0x0003e319) mup2_visualizer_pane_g3

0x0002,

0xf6ee,	// (0x00046d14) mup2_visualizer_pane_g_ParamLimits

0xf6ee,	// (0x00046d14) mup2_visualizer_pane_g

0xb806,	// (0x00042e2c) aid_size_cell_fmradio

0x62b4,	// (0x0003d8da) aid_height_parent_landcape

0xac03,	// (0x00042229) wml_content_pane_cp

0xac0b,	// (0x00042231) wml_tabs_pane

0xac14,	// (0x0004223a) popup_wml_miniature_window

0xac1c,	// (0x00042242) scroll_pane_cp021

0xac30,	// (0x00042256) wml_content_pane_comp8

0x1cb9,	// (0x000392df) bg_popup_sub_pane_cp05

0xca52,	// (0x00044078) popup_wml_miniature_window_g1

0xca5a,	// (0x00044080) wml_miniature_view_pane

0x6cff,	// (0x0003e325) aid_size_wml_view

0x6d07,	// (0x0003e32d) wml_miniature_view_pane_g1

0x6d10,	// (0x0003e336) wml_miniature_view_pane_g2

0x6d19,	// (0x0003e33f) wml_miniature_view_pane_g3

0x6d21,	// (0x0003e347) wml_miniature_view_pane_g4

0x6d29,	// (0x0003e34f) wml_miniature_view_pane_g5

0x6d31,	// (0x0003e357) wml_miniature_view_pane_g6

0x6d39,	// (0x0003e35f) wml_miniature_view_pane_g7

0x6d41,	// (0x0003e367) wml_miniature_view_pane_g8

0x0007,

0xf6f5,	// (0x00046d1b) wml_miniature_view_pane_g

0xca62,	// (0x00044088) background_graphic_ParamLimits

0xca62,	// (0x00044088) background_graphic

0xca6e,	// (0x00044094) wml_tabs_2_pane

0xca77,	// (0x0004409d) wml_tabs_3_pane_ParamLimits

0xca77,	// (0x0004409d) wml_tabs_3_pane

0xca89,	// (0x000440af) wml_tabs_4_pane_ParamLimits

0xca89,	// (0x000440af) wml_tabs_4_pane

0xca9f,	// (0x000440c5) wml_tabs_5_pane_ParamLimits

0xca9f,	// (0x000440c5) wml_tabs_5_pane

0xcab9,	// (0x000440df) wml_tabs_pane_g2_ParamLimits

0xcab9,	// (0x000440df) wml_tabs_pane_g2

0xcacd,	// (0x000440f3) wml_tabs_pane_g3_ParamLimits

0xcacd,	// (0x000440f3) wml_tabs_pane_g3

0x6d49,	// (0x0003e36f) wml_tabs_2_active_pane_ParamLimits

0x6d49,	// (0x0003e36f) wml_tabs_2_active_pane

0x6d59,	// (0x0003e37f) wml_tabs_2_passive_pane_ParamLimits

0x6d59,	// (0x0003e37f) wml_tabs_2_passive_pane

0x6d69,	// (0x0003e38f) wml_tabs_3_active_pane_cp_ParamLimits

0x6d69,	// (0x0003e38f) wml_tabs_3_active_pane_cp

0x6d7a,	// (0x0003e3a0) wml_tabs_3_passive_pane_ParamLimits

0x6d7a,	// (0x0003e3a0) wml_tabs_3_passive_pane

0x6d8b,	// (0x0003e3b1) wml_tabs_3_passive_pane_cp_ParamLimits

0x6d8b,	// (0x0003e3b1) wml_tabs_3_passive_pane_cp

0x6d9c,	// (0x0003e3c2) tabs_4_active_pane

0x6da4,	// (0x0003e3ca) tabs_4_passive_pane

0x6dac,	// (0x0003e3d2) tabs_4_passive_pane_cp

0x6db4,	// (0x0003e3da) tabs_4_passive_pane_cp2

0x6033,	// (0x0003d659) aid_height_text

0x58b0,	// (0x0003ced6) mup_volume_cont_pane_ParamLimits

0x58b0,	// (0x0003ced6) mup_volume_cont_pane

0x3a2f,	// (0x0003b055) aid_size_cell_pinb

0x3a39,	// (0x0003b05f) aid_size_list_pinb

0x6cb6,	// (0x0003e2dc) mup2_volume_cont_pane_ParamLimits

0x6cb6,	// (0x0003e2dc) mup2_volume_cont_pane

0xed2c,	// (0x00046352) mup2_volume_cont_pane_g1_ParamLimits

0xed2c,	// (0x00046352) mup2_volume_cont_pane_g1

0x3760,	// (0x0003ad86) aid_size_cell_touch_ParamLimits

0x3760,	// (0x0003ad86) aid_size_cell_touch

0x3937,	// (0x0003af5d) touch_pane_ParamLimits

0x3937,	// (0x0003af5d) touch_pane

0x185d,	// (0x00038e83) main_rss2_pane

0xcaea,	// (0x00044110) listscroll_rss2_pane

0xcaf3,	// (0x00044119) rss2_navigation_pane

0xcafb,	// (0x00044121) list_rss2_pane

0xb31d,	// (0x00042943) scroll_pane_cp22

0xcb03,	// (0x00044129) rss2_navigation_pane_g1

0xcb0c,	// (0x00044132) rss2_navigation_pane_g2

0xcb14,	// (0x0004413a) rss2_navigation_pane_g3

0x0002,

0xf706,	// (0x00046d2c) rss2_navigation_pane_g

0xcb1c,	// (0x00044142) rss2_navigation_pane_t1

0x6dbc,	// (0x0003e3e2) rss2_list_single_pane_ParamLimits

0x6dbc,	// (0x0003e3e2) rss2_list_single_pane

0xcb2a,	// (0x00044150) rss2_list_single_pane_t2

0xcb38,	// (0x0004415e) rss2_list_single_pane_t3_ParamLimits

0xcb38,	// (0x0004415e) rss2_list_single_pane_t3

0xcb55,	// (0x0004417b) rss2_list_single_pane_t4

0x52a4,	// (0x0003c8ca) smil_status_pane_g1

0x20d6,	// (0x000396fc) main_image2_pane_ParamLimits

0x20d6,	// (0x000396fc) main_image2_pane

0x68de,	// (0x0003df04) main_camera2_pane_g9_ParamLimits

0x68de,	// (0x0003df04) main_camera2_pane_g9

0x69d0,	// (0x0003dff6) main_camera2_pane_t5_ParamLimits

0x69d0,	// (0x0003dff6) main_camera2_pane_t5

0xed01,	// (0x00046327) main_camera2_pane_t6_ParamLimits

0xed01,	// (0x00046327) main_camera2_pane_t6

0x6dd0,	// (0x0003e3f6) main_image2_pane_g1_ParamLimits

0x6dd0,	// (0x0003e3f6) main_image2_pane_g1

0x5deb,	// (0x0003d411) smil2_video_pane_ParamLimits

0x5deb,	// (0x0003d411) smil2_video_pane

0xaa2f,	// (0x00042055) aid_zoom_text_primary_cp

0x18a0,	// (0x00038ec6) popup_preview_fixed_window

0x4961,	// (0x0003bf87) im_reading_pane_g1

0x67c4,	// (0x0003ddea) cams2_bc_adjust_pane_cp_ParamLimits

0x67c4,	// (0x0003ddea) cams2_bc_adjust_pane_cp

0x69f6,	// (0x0003e01c) cams2_bc_adjust_pane_ParamLimits

0x69f6,	// (0x0003e01c) cams2_bc_adjust_pane

0xed65,	// (0x0004638b) cams2_bc_adjust_pane_g1

0xed6d,	// (0x00046393) cams2_slider_pane

0xed76,	// (0x0004639c) cams2_slider_pane_g1

0xed7f,	// (0x000463a5) cams2_slider_pane_g2

0x0006,

0xf70d,	// (0x00046d33) cams2_slider_pane_g

0x3b19,	// (0x0003b13f) calc_display_pane_ParamLimits

0x3b35,	// (0x0003b15b) calc_paper_pane_ParamLimits

0x3b56,	// (0x0003b17c) grid_calc_pane_ParamLimits

0xec6e,	// (0x00046294) popup_clock_digital_window_t1_ParamLimits

0xb7a3,	// (0x00042dc9) main_image_pane_t1

0x3afb,	// (0x0003b121) aid_size_cell_calc_ParamLimits

0x3afb,	// (0x0003b121) aid_size_cell_calc

0x62e4,	// (0x0003d90a) popup_blid_sat_info2_window_ParamLimits

0x62e4,	// (0x0003d90a) popup_blid_sat_info2_window

0xcb6b,	// (0x00044191) aid_size_cell_blid

0xcb73,	// (0x00044199) bg_popup_window_pane_cp07

0xcb96,	// (0x000441bc) grid_popup_blid_pane

0xcb9e,	// (0x000441c4) heading_pane_cp05_ParamLimits

0xcb9e,	// (0x000441c4) heading_pane_cp05

0xcc66,	// (0x0004428c) cell_popup_blid_pane_ParamLimits

0xcc66,	// (0x0004428c) cell_popup_blid_pane

0xcc86,	// (0x000442ac) cell_popup_blid_pane_g1

0xcc8e,	// (0x000442b4) cell_popup_blid_pane_t1

0x6c89,	// (0x0003e2af) mup2_indicator_pane_ParamLimits

0x6c89,	// (0x0003e2af) mup2_indicator_pane

0xb4dc,	// (0x00042b02) mup2_visualizer_osc_pane

0xca40,	// (0x00044066) mup2_visualizer_spec_pane_ParamLimits

0xca40,	// (0x00044066) mup2_visualizer_spec_pane

0x6de4,	// (0x0003e40a) mup2_spec_half_pane

0x6ded,	// (0x0003e413) mup2_spec_half_pane_cp

0x6df5,	// (0x0003e41b) mup2_spec_bar_pane_ParamLimits

0x6df5,	// (0x0003e41b) mup2_spec_bar_pane

0xc9e1,	// (0x00044007) mup2_spec_bar_pane_g1

0xc9eb,	// (0x00044011) mup2_spec_bar_pane_g2

0x0001,

0xf680,	// (0x00046ca6) mup2_spec_bar_pane_g

0x6e14,	// (0x0003e43a) mup2_osc_middle_pane

0xc9fd,	// (0x00044023) mup2_visualizer_osc_pane_g1

0x18c8,	// (0x00038eee) popup_number_entry_window_t1_ParamLimits

0x18db,	// (0x00038f01) popup_number_entry_window_t2_ParamLimits

0x18ed,	// (0x00038f13) popup_number_entry_window_t3_ParamLimits

0x397f,	// (0x0003afa5) popup_number_entry_window_t5_ParamLimits

0x397f,	// (0x0003afa5) popup_number_entry_window_t5

0xf12f,	// (0x00046755) popup_number_entry_window_t_ParamLimits

0x18ff,	// (0x00038f25) text_title_cp2_ParamLimits

0xecad,	// (0x000462d3) aid_hotspot_pointer_text2_pane

0xecd3,	// (0x000462f9) main_viewer_pane_g9_ParamLimits

0xecd3,	// (0x000462f9) main_viewer_pane_g9

0xad9c,	// (0x000423c2) cale_month_pane_t1_ParamLimits

0xae03,	// (0x00042429) bg_cale_pane_ParamLimits

0xae1b,	// (0x00042441) list_cale_pane_ParamLimits

0x3f80,	// (0x0003b5a6) listscroll_cale_day_pane_t1

0xae2c,	// (0x00042452) scroll_pane_cp09_ParamLimits

0x58e2,	// (0x0003cf08) main_mup_eq_pane_t1_ParamLimits

0x58e2,	// (0x0003cf08) main_mup_eq_pane_t1

0x58fa,	// (0x0003cf20) main_mup_eq_pane_t2_ParamLimits

0x58fa,	// (0x0003cf20) main_mup_eq_pane_t2

0x5910,	// (0x0003cf36) main_mup_eq_pane_t3_ParamLimits

0x5910,	// (0x0003cf36) main_mup_eq_pane_t3

0x5926,	// (0x0003cf4c) main_mup_eq_pane_t4_ParamLimits

0x5926,	// (0x0003cf4c) main_mup_eq_pane_t4

0x593c,	// (0x0003cf62) main_mup_eq_pane_t5_ParamLimits

0x593c,	// (0x0003cf62) main_mup_eq_pane_t5

0x5952,	// (0x0003cf78) main_mup_eq_pane_t6_ParamLimits

0x5952,	// (0x0003cf78) main_mup_eq_pane_t6

0x5964,	// (0x0003cf8a) main_mup_eq_pane_t7_ParamLimits

0x5964,	// (0x0003cf8a) main_mup_eq_pane_t7

0x5976,	// (0x0003cf9c) main_mup_eq_pane_t8_ParamLimits

0x5976,	// (0x0003cf9c) main_mup_eq_pane_t8

0x5988,	// (0x0003cfae) main_mup_eq_pane_t9_ParamLimits

0x5988,	// (0x0003cfae) main_mup_eq_pane_t9

0x599e,	// (0x0003cfc4) main_mup_eq_pane_t10_ParamLimits

0x599e,	// (0x0003cfc4) main_mup_eq_pane_t10

0x0009,

0xf4bc,	// (0x00046ae2) main_mup_eq_pane_t_ParamLimits

0xf4bc,	// (0x00046ae2) main_mup_eq_pane_t

0x5a31,	// (0x0003d057) mup_equalizer_pane_cp5_ParamLimits

0x5a43,	// (0x0003d069) mup_equalizer_pane_cp6_ParamLimits

0x5a55,	// (0x0003d07b) mup_equalizer_pane_cp7_ParamLimits

0x185d,	// (0x00038e83) main_gallery_pane

0xca06,	// (0x0004402c) smil2_volume_pane

0xca0e,	// (0x00044034) smil_status_volume_pane_g1_ParamLimits

0xca21,	// (0x00044047) smil_status_volume_pane_g2_ParamLimits

0xecdf,	// (0x00046305) smil_status_volume_pane_g3_ParamLimits

0xf685,	// (0x00046cab) smil_status_volume_pane_g_ParamLimits

0xcb73,	// (0x00044199) bg_popup_window_pane_cp07_ParamLimits

0xcb81,	// (0x000441a7) blid_firmament_pane

0x6e1d,	// (0x0003e443) aid_size_cell_gallery_ParamLimits

0x6e1d,	// (0x0003e443) aid_size_cell_gallery

0x6e33,	// (0x0003e459) grid_gallery_pane_ParamLimits

0x6e33,	// (0x0003e459) grid_gallery_pane

0x6e47,	// (0x0003e46d) cell_gallery_pane_ParamLimits

0x6e47,	// (0x0003e46d) cell_gallery_pane

0xcc9c,	// (0x000442c2) bg_cell_gallery_focus_pane_ParamLimits

0xcc9c,	// (0x000442c2) bg_cell_gallery_focus_pane

0xccae,	// (0x000442d4) cell_gallery_pane_g1_ParamLimits

0xccae,	// (0x000442d4) cell_gallery_pane_g1

0x6e8e,	// (0x0003e4b4) cell_gallery_pane_g2_ParamLimits

0x6e8e,	// (0x0003e4b4) cell_gallery_pane_g2

0x6e9b,	// (0x0003e4c1) cell_gallery_pane_g3_ParamLimits

0x6e9b,	// (0x0003e4c1) cell_gallery_pane_g3

0xccba,	// (0x000442e0) cell_gallery_pane_g4_ParamLimits

0xccba,	// (0x000442e0) cell_gallery_pane_g4

0x0003,

0xf733,	// (0x00046d59) cell_gallery_pane_g_ParamLimits

0xf733,	// (0x00046d59) cell_gallery_pane_g

0xccc6,	// (0x000442ec) bg_cell_gallery_focus_pane_g1

0xccce,	// (0x000442f4) bg_cell_gallery_focus_pane_g2

0xccd6,	// (0x000442fc) bg_cell_gallery_focus_pane_g3

0xccde,	// (0x00044304) bg_cell_gallery_focus_pane_g4

0xcce6,	// (0x0004430c) bg_cell_gallery_focus_pane_g5

0xccee,	// (0x00044314) bg_cell_gallery_focus_pane_g6

0xccf6,	// (0x0004431c) bg_cell_gallery_focus_pane_g7

0xccfe,	// (0x00044324) bg_cell_gallery_focus_pane_g8

0x0007,

0xf73c,	// (0x00046d62) bg_cell_gallery_focus_pane_g

0xcd06,	// (0x0004432c) aid_firma_cardinal

0xcd1a,	// (0x00044340) blid_firmament_pane_t1

0xcd31,	// (0x00044357) blid_firmament_pane_t2

0xcd48,	// (0x0004436e) blid_firmament_pane_t3

0xcd5f,	// (0x00044385) blid_firmament_pane_t4

0x0003,

0xf74d,	// (0x00046d73) blid_firmament_pane_t

0xcd76,	// (0x0004439c) blid_sat_info_pane

0xcd86,	// (0x000443ac) blid_sat_info_pane_g1

0xcd86,	// (0x000443ac) blid_sat_info_pane_g2

0x0001,

0xf756,	// (0x00046d7c) blid_sat_info_pane_g

0xcd90,	// (0x000443b6) blid_sat_info_pane_t1

0xcd9e,	// (0x000443c4) smil2_volume_content_pane

0xcda7,	// (0x000443cd) smil2_volume_pane_g1

0xcdaf,	// (0x000443d5) smil2_volume_content_pane_g1

0xcdb8,	// (0x000443de) smil2_volume_content_pane_g2

0xcdc1,	// (0x000443e7) smil2_volume_content_pane_g3

0xcdca,	// (0x000443f0) smil2_volume_content_pane_g4

0xcdd3,	// (0x000443f9) smil2_volume_content_pane_g5

0xcddc,	// (0x00044402) smil2_volume_content_pane_g6

0xcde5,	// (0x0004440b) smil2_volume_content_pane_g7

0xcdee,	// (0x00044414) smil2_volume_content_pane_g8

0xcdf7,	// (0x0004441d) smil2_volume_content_pane_g9

0xce00,	// (0x00044426) smil2_volume_content_pane_g10

0x0009,

0xf75b,	// (0x00046d81) smil2_volume_content_pane_g

0x3fe8,	// (0x0003b60e) cale_week_day_heading_pane_t1_ParamLimits

0x4012,	// (0x0003b638) cale_week_day_heading_pane_t2_ParamLimits

0x403c,	// (0x0003b662) cale_week_day_heading_pane_t3_ParamLimits

0x4066,	// (0x0003b68c) cale_week_day_heading_pane_t4_ParamLimits

0x4090,	// (0x0003b6b6) cale_week_day_heading_pane_t5_ParamLimits

0x40ba,	// (0x0003b6e0) cale_week_day_heading_pane_t6_ParamLimits

0x40e4,	// (0x0003b70a) cale_week_day_heading_pane_t7_ParamLimits

0xf234,	// (0x0004685a) cale_week_day_heading_pane_t_ParamLimits

0x410e,	// (0x0003b734) bg_cale_side_pane_ParamLimits

0x411c,	// (0x0003b742) cale_week_time_pane_t1_ParamLimits

0x4148,	// (0x0003b76e) cale_week_time_pane_t2_ParamLimits

0x4174,	// (0x0003b79a) cale_week_time_pane_t3_ParamLimits

0x41a0,	// (0x0003b7c6) cale_week_time_pane_t4_ParamLimits

0x41cc,	// (0x0003b7f2) cale_week_time_pane_t5_ParamLimits

0x41f8,	// (0x0003b81e) cale_week_time_pane_t6_ParamLimits

0x4224,	// (0x0003b84a) cale_week_time_pane_t7_ParamLimits

0x4250,	// (0x0003b876) cale_week_time_pane_t8_ParamLimits

0xf243,	// (0x00046869) cale_week_time_pane_t_ParamLimits

0x427c,	// (0x0003b8a2) cell_cale_week_pane_g2_ParamLimits

0x410e,	// (0x0003b734) bg_cale_side_pane_cp01_ParamLimits

0x5147,	// (0x0003c76d) cale_month_week_pane_t1_ParamLimits

0x515e,	// (0x0003c784) cale_month_week_pane_t2_ParamLimits

0x5175,	// (0x0003c79b) cale_month_week_pane_t3_ParamLimits

0x518c,	// (0x0003c7b2) cale_month_week_pane_t4_ParamLimits

0x51a3,	// (0x0003c7c9) cale_month_week_pane_t5_ParamLimits

0x51ba,	// (0x0003c7e0) cale_month_week_pane_t6_ParamLimits

0xf31c,	// (0x00046942) cale_month_week_pane_t_ParamLimits

0xebee,	// (0x00046214) cell_cale_month_pane_g1_ParamLimits

0x185d,	// (0x00038e83) main_cale_event_viewer_pane

0x185d,	// (0x00038e83) listscroll_cale_event_viewer_pane

0xce09,	// (0x0004442f) list_cale_ev_pane

0xce11,	// (0x00044437) scroll_pane_cp023

0x6ea8,	// (0x0003e4ce) field_cale_ev_pane_ParamLimits

0x6ea8,	// (0x0003e4ce) field_cale_ev_pane

0xce1d,	// (0x00044443) field_cale_ev_content_pane_ParamLimits

0xce1d,	// (0x00044443) field_cale_ev_content_pane

0xce29,	// (0x0004444f) field_cale_ev_pane_g1_ParamLimits

0xce29,	// (0x0004444f) field_cale_ev_pane_g1

0xce35,	// (0x0004445b) field_cale_ev_pane_g2_ParamLimits

0xce35,	// (0x0004445b) field_cale_ev_pane_g2

0xce4d,	// (0x00044473) field_cale_ev_pane_g3_ParamLimits

0xce4d,	// (0x00044473) field_cale_ev_pane_g3

0x0002,

0xf770,	// (0x00046d96) field_cale_ev_pane_g_ParamLimits

0xf770,	// (0x00046d96) field_cale_ev_pane_g

0xce65,	// (0x0004448b) field_cale_ev_pane_t1_ParamLimits

0xce65,	// (0x0004448b) field_cale_ev_pane_t1

0x6ec2,	// (0x0003e4e8) field_cale_ev_content_pane_t1_ParamLimits

0x6ec2,	// (0x0003e4e8) field_cale_ev_content_pane_t1

0xb653,	// (0x00042c79) bg_button_pane_cp01

0x3dd8,	// (0x0003b3fe) listscroll_cale_week_pane_ParamLimits

0x3de7,	// (0x0003b40d) popup_toolbar_window_cp01

0x3f80,	// (0x0003b5a6) listscroll_cale_week_pane_t1_ParamLimits

0x1fe3,	// (0x00039609) listscroll_cale_day_pane_ParamLimits

0x3de7,	// (0x0003b40d) popup_toolbar_window_cp02

0x3f80,	// (0x0003b5a6) listscroll_cale_day_pane_t1_ParamLimits

0x3dd8,	// (0x0003b3fe) main_cale_month_pane_ParamLimits

0x64e0,	// (0x0003db06) popup_toolbar_window_cp03_ParamLimits

0x64e0,	// (0x0003db06) popup_toolbar_window_cp03

0x5cc5,	// (0x0003d2eb) main_image_pane_g2_ParamLimits

0x5cc5,	// (0x0003d2eb) main_image_pane_g2

0x5cd6,	// (0x0003d2fc) main_image_pane_g3_ParamLimits

0x5cd6,	// (0x0003d2fc) main_image_pane_g3

0x0002,

0xf54e,	// (0x00046b74) main_image_pane_g_ParamLimits

0xf54e,	// (0x00046b74) main_image_pane_g

0xb7a3,	// (0x00042dc9) main_image_pane_t1_ParamLimits

0x5ce7,	// (0x0003d30d) main_image_pane_t2_ParamLimits

0x5ce7,	// (0x0003d30d) main_image_pane_t2

0x5cf9,	// (0x0003d31f) main_image_pane_t3_ParamLimits

0x5cf9,	// (0x0003d31f) main_image_pane_t3

0x5d21,	// (0x0003d347) main_image_pane_t4_ParamLimits

0x5d21,	// (0x0003d347) main_image_pane_t4

0x0003,

0xf555,	// (0x00046b7b) main_image_pane_t_ParamLimits

0xf555,	// (0x00046b7b) main_image_pane_t

0x5d41,	// (0x0003d367) popup_image_details_window_cp01

0x5d49,	// (0x0003d36f) popup_toobar_trans_pane_cp01_ParamLimits

0x5d49,	// (0x0003d36f) popup_toobar_trans_pane_cp01

0x63ad,	// (0x0003d9d3) popup_image_details_window_ParamLimits

0x63ad,	// (0x0003d9d3) popup_image_details_window

0xc969,	// (0x00043f8f) popup_image_focus_window

0x6792,	// (0x0003ddb8) camera2_autofocus_pane_ParamLimits

0x6792,	// (0x0003ddb8) camera2_autofocus_pane

0x185d,	// (0x00038e83) bg_popup_sub_pane_cp06

0xce7c,	// (0x000444a2) popup_image_focus_window_g1

0xce84,	// (0x000444aa) popup_image_focus_window_g2

0xce8c,	// (0x000444b2) popup_image_focus_window_g3

0xce94,	// (0x000444ba) popup_image_focus_window_g4

0x0003,

0xf777,	// (0x00046d9d) popup_image_focus_window_g

0xce9c,	// (0x000444c2) popup_image_focus_window_t1

0xceaa,	// (0x000444d0) popup_image_focus_window_t2

0xceb9,	// (0x000444df) popup_image_focus_window_t3

0x0002,

0xf780,	// (0x00046da6) popup_image_focus_window_t

0xcec7,	// (0x000444ed) camera2_autofocus_pane_g1

0x20d6,	// (0x000396fc) bg_tb_trans_pane_cp01

0xced5,	// (0x000444fb) popup_image_details_window_g1

0xcee8,	// (0x0004450e) popup_image_details_window_g2

0x0002,

0xf792,	// (0x00046db8) popup_image_details_window_g

0xcf11,	// (0x00044537) popup_image_details_window_t1

0xcf23,	// (0x00044549) popup_image_details_window_t2

0xcf3c,	// (0x00044562) popup_image_details_window_t3

0xcf50,	// (0x00044576) popup_image_details_window_t4

0xcf6b,	// (0x00044591) popup_image_details_window_t5

0x0004,

0xf799,	// (0x00046dbf) popup_image_details_window_t

0x1fcb,	// (0x000395f1) bg_calc_paper_pane_ParamLimits

0x185d,	// (0x00038e83) grid_highlight_pane_cp013

0xaa3f,	// (0x00042065) list_calc_pane_ParamLimits

0xaa51,	// (0x00042077) scroll_pane_cp024

0x1fe3,	// (0x00039609) bg_calc_display_pane_ParamLimits

0xaa59,	// (0x0004207f) calc_display_pane_t1_ParamLimits

0xaa6e,	// (0x00042094) calc_display_pane_t2_ParamLimits

0xaa83,	// (0x000420a9) calc_display_pane_t3_ParamLimits

0xf1b6,	// (0x000467dc) calc_display_pane_t_ParamLimits

0x3cce,	// (0x0003b2f4) cell_calc_pane_g2

0x0001,

0xf1d3,	// (0x000467f9) cell_calc_pane_g

0x3cd7,	// (0x0003b2fd) cell_calc_pane_t1

0x2042,	// (0x00039668) grid_highlight_pane_cp02_ParamLimits

0x2058,	// (0x0003967e) toolbar_button_pane_cp01_ParamLimits

0x2058,	// (0x0003967e) toolbar_button_pane_cp01

0xb7e8,	// (0x00042e0e) temp_image_control_pane_ParamLimits

0xb7e8,	// (0x00042e0e) temp_image_control_pane

0x20d6,	// (0x000396fc) main_mp3_pane

0xcf85,	// (0x000445ab) temp_image_control_pane_g1_ParamLimits

0xcf85,	// (0x000445ab) temp_image_control_pane_g1

0xcf93,	// (0x000445b9) temp_image_control_pane_g2_ParamLimits

0xcf93,	// (0x000445b9) temp_image_control_pane_g2

0xcfa5,	// (0x000445cb) temp_image_control_pane_g3_ParamLimits

0xcfa5,	// (0x000445cb) temp_image_control_pane_g3

0x6f0f,	// (0x0003e535) temp_image_control_pane_g4_ParamLimits

0x6f0f,	// (0x0003e535) temp_image_control_pane_g4

0x0003,

0xf7a4,	// (0x00046dca) temp_image_control_pane_g_ParamLimits

0xf7a4,	// (0x00046dca) temp_image_control_pane_g

0xcf85,	// (0x000445ab) main_mp3_pane_g1

0x6f20,	// (0x0003e546) main_mp3_pane_g2

0x0007,

0xf7ad,	// (0x00046dd3) main_mp3_pane_g

0xcfe8,	// (0x0004460e) main_mp3_pane_t1

0x43ea,	// (0x0003ba10) main_camera_pane_g8_ParamLimits

0x43ea,	// (0x0003ba10) main_camera_pane_g8

0x4585,	// (0x0003bbab) main_video_pane_g7_ParamLimits

0x4585,	// (0x0003bbab) main_video_pane_g7

0xed1a,	// (0x00046340) main_camera2_pane_t7_ParamLimits

0xed1a,	// (0x00046340) main_camera2_pane_t7

0x4a28,	// (0x0003c04e) scroll_pane_cp025_ParamLimits

0x4a28,	// (0x0003c04e) scroll_pane_cp025

0x4a3c,	// (0x0003c062) scroll_pane_cp026_ParamLimits

0x4a3c,	// (0x0003c062) scroll_pane_cp026

0x4a4b,	// (0x0003c071) wml_content_pane_ParamLimits

0x185d,	// (0x00038e83) main_touch_calib_pane

0x6fd6,	// (0x0003e5fc) main_touch_calib_pane_g1

0x6fe2,	// (0x0003e608) main_touch_calib_pane_g2

0x6fee,	// (0x0003e614) main_touch_calib_pane_g3

0x6ffa,	// (0x0003e620) main_touch_calib_pane_g4

0x0003,

0xf7cb,	// (0x00046df1) main_touch_calib_pane_g

0x7006,	// (0x0003e62c) main_touch_calib_pane_t1

0x701e,	// (0x0003e644) main_touch_calib_pane_t2

0x0004,

0xf7d4,	// (0x00046dfa) main_touch_calib_pane_t

0xb3ce,	// (0x000429f4) mup_progress_pane_cp02

0xb3ed,	// (0x00042a13) navi_pane_g1

0xb46d,	// (0x00042a93) navi_pane_mp_t3

0x20d6,	// (0x000396fc) main_mp3_pane_ParamLimits

0x651a,	// (0x0003db40) navi_pane_ParamLimits

0xcf85,	// (0x000445ab) main_mp3_pane_g1_ParamLimits

0x6f20,	// (0x0003e546) main_mp3_pane_g2_ParamLimits

0x6f2c,	// (0x0003e552) main_mp3_pane_g3_ParamLimits

0x6f2c,	// (0x0003e552) main_mp3_pane_g3

0x6f38,	// (0x0003e55e) main_mp3_pane_g4_ParamLimits

0x6f38,	// (0x0003e55e) main_mp3_pane_g4

0xcfb5,	// (0x000445db) main_mp3_pane_g5_ParamLimits

0xcfb5,	// (0x000445db) main_mp3_pane_g5

0xcfc3,	// (0x000445e9) main_mp3_pane_g6_ParamLimits

0xcfc3,	// (0x000445e9) main_mp3_pane_g6

0xcfd0,	// (0x000445f6) main_mp3_pane_g7_ParamLimits

0xcfd0,	// (0x000445f6) main_mp3_pane_g7

0xcfdc,	// (0x00044602) main_mp3_pane_g8_ParamLimits

0xcfdc,	// (0x00044602) main_mp3_pane_g8

0xf7ad,	// (0x00046dd3) main_mp3_pane_g_ParamLimits

0x6f44,	// (0x0003e56a) main_mp3_pane_t2

0x6f52,	// (0x0003e578) main_mp3_pane_t3

0xcff6,	// (0x0004461c) main_mp3_pane_t4

0xd004,	// (0x0004462a) main_mp3_pane_t5

0x0005,

0xf7be,	// (0x00046de4) main_mp3_pane_t

0xd012,	// (0x00044638) mup_progress_pane_cp01

0xaa2f,	// (0x00042055) aid_zoom_text_secondary2

0xce09,	// (0x0004442f) list_cale_ev2_pane

0xce11,	// (0x00044437) scroll_pane_cp023_ParamLimits

0x706c,	// (0x0003e692) field_cale_ev2_pane_ParamLimits

0x706c,	// (0x0003e692) field_cale_ev2_pane

0xd01a,	// (0x00044640) field_cale_ev2_pane_g1_ParamLimits

0xd01a,	// (0x00044640) field_cale_ev2_pane_g1

0xd026,	// (0x0004464c) field_cale_ev2_pane_g2_ParamLimits

0xd026,	// (0x0004464c) field_cale_ev2_pane_g2

0xd03e,	// (0x00044664) field_cale_ev2_pane_g3_ParamLimits

0xd03e,	// (0x00044664) field_cale_ev2_pane_g3

0x0003,

0xf7df,	// (0x00046e05) field_cale_ev2_pane_g_ParamLimits

0xf7df,	// (0x00046e05) field_cale_ev2_pane_g

0xd062,	// (0x00044688) field_cale_ev2_pane_t1_ParamLimits

0xd062,	// (0x00044688) field_cale_ev2_pane_t1

0xd079,	// (0x0004469f) field_cale_ev2_pane_t2_ParamLimits

0xd079,	// (0x0004469f) field_cale_ev2_pane_t2

0x0001,

0xf7e8,	// (0x00046e0e) field_cale_ev2_pane_t_ParamLimits

0xf7e8,	// (0x00046e0e) field_cale_ev2_pane_t

0x5b80,	// (0x0003d1a6) main_postcard_pane_g5_ParamLimits

0x5b80,	// (0x0003d1a6) main_postcard_pane_g5

0x5b94,	// (0x0003d1ba) main_postcard_pane_g6_ParamLimits

0x5b94,	// (0x0003d1ba) main_postcard_pane_g6

0x4341,	// (0x0003b967) camera2_autofocus_pane_cp_ParamLimits

0x4341,	// (0x0003b967) camera2_autofocus_pane_cp

0x20d6,	// (0x000396fc) main_mup3_pane

0x70a4,	// (0x0003e6ca) main_mup3_pane_g1_ParamLimits

0x70a4,	// (0x0003e6ca) main_mup3_pane_g1

0x70c6,	// (0x0003e6ec) main_mup3_pane_g2_ParamLimits

0x70c6,	// (0x0003e6ec) main_mup3_pane_g2

0x712e,	// (0x0003e754) main_mup3_pane_g3_ParamLimits

0x712e,	// (0x0003e754) main_mup3_pane_g3

0x716c,	// (0x0003e792) main_mup3_pane_g4_ParamLimits

0x716c,	// (0x0003e792) main_mup3_pane_g4

0x71aa,	// (0x0003e7d0) main_mup3_pane_g5_ParamLimits

0x71aa,	// (0x0003e7d0) main_mup3_pane_g5

0x71e8,	// (0x0003e80e) main_mup3_pane_g6_ParamLimits

0x71e8,	// (0x0003e80e) main_mup3_pane_g6

0xd08e,	// (0x000446b4) main_mup3_pane_g7_ParamLimits

0xd08e,	// (0x000446b4) main_mup3_pane_g7

0x0007,

0xf7f8,	// (0x00046e1e) main_mup3_pane_g_ParamLimits

0xf7f8,	// (0x00046e1e) main_mup3_pane_g

0x725e,	// (0x0003e884) main_mup3_pane_t1_ParamLimits

0x725e,	// (0x0003e884) main_mup3_pane_t1

0x72c6,	// (0x0003e8ec) main_mup3_pane_t2_ParamLimits

0x72c6,	// (0x0003e8ec) main_mup3_pane_t2

0x738e,	// (0x0003e9b4) main_mup3_pane_t4_ParamLimits

0x738e,	// (0x0003e9b4) main_mup3_pane_t4

0x73dc,	// (0x0003ea02) main_mup3_pane_t5_ParamLimits

0x73dc,	// (0x0003ea02) main_mup3_pane_t5

0x748a,	// (0x0003eab0) main_mup3_pane_t6_ParamLimits

0x748a,	// (0x0003eab0) main_mup3_pane_t6

0x0005,

0xf809,	// (0x00046e2f) main_mup3_pane_t_ParamLimits

0xf809,	// (0x00046e2f) main_mup3_pane_t

0x753e,	// (0x0003eb64) mup3_progress_pane_ParamLimits

0x753e,	// (0x0003eb64) mup3_progress_pane

0x759a,	// (0x0003ebc0) popup_mup3_control_window_ParamLimits

0x759a,	// (0x0003ebc0) popup_mup3_control_window

0xd09c,	// (0x000446c2) popup_mup3_text_window

0x75c8,	// (0x0003ebee) mup3_progress_pane_t1

0x75de,	// (0x0003ec04) mup3_progress_pane_t2

0xd0a4,	// (0x000446ca) mup3_progress_pane_t3

0x0002,

0xf816,	// (0x00046e3c) mup3_progress_pane_t

0xd0bb,	// (0x000446e1) mup_progress_pane_cp03

0x185d,	// (0x00038e83) bg_tb_trans_pane_cp04

0x75f4,	// (0x0003ec1a) mup3_volume_pane

0x75fc,	// (0x0003ec22) popup_mup3_control_window_g1

0x7605,	// (0x0003ec2b) mup3_volume_pane_g1

0x760e,	// (0x0003ec34) mup3_volume_pane_g2

0x7617,	// (0x0003ec3d) mup3_volume_pane_g3

0x0002,

0xf81d,	// (0x00046e43) mup3_volume_pane_g

0x185d,	// (0x00038e83) bg_tb_trans_pane_cp03

0xd0cb,	// (0x000446f1) popup_mup3_text_window_g1

0xd0d3,	// (0x000446f9) popup_mup3_text_window_t1

0x202b,	// (0x00039651) list_calc_item_pane_g1_ParamLimits

0xcae1,	// (0x00044107) mup_volume_pane_cp_g1

0x7036,	// (0x0003e65c) main_touch_calib_pane_t3

0x7048,	// (0x0003e66e) main_touch_calib_pane_t4

0x705a,	// (0x0003e680) main_touch_calib_pane_t5

0x1867,	// (0x00038e8d) aid_cell_size_toolbar2

0x186f,	// (0x00038e95) aid_popup3_width_pane

0xaa27,	// (0x0004204d) aid_zoom_text_msg_primary

0xab4d,	// (0x00042173) vorec_t7

0x1fef,	// (0x00039615) bg_calc_paper_pane_g1_ParamLimits

0x1ffb,	// (0x00039621) bg_calc_paper_pane_g2_ParamLimits

0x2007,	// (0x0003962d) bg_calc_paper_pane_g3_ParamLimits

0x2013,	// (0x00039639) bg_calc_paper_pane_g4_ParamLimits

0x201f,	// (0x00039645) bg_calc_paper_pane_g5_ParamLimits

0x3c68,	// (0x0003b28e) bg_calc_paper_pane_g6_ParamLimits

0x3c77,	// (0x0003b29d) bg_calc_paper_pane_g7_ParamLimits

0x3c86,	// (0x0003b2ac) bg_calc_paper_pane_g8_ParamLimits

0xf1bd,	// (0x000467e3) bg_calc_paper_pane_g_ParamLimits

0x3c95,	// (0x0003b2bb) calc_bg_paper_pane_g9_ParamLimits

0x4481,	// (0x0003baa7) image_qvga_pane_ParamLimits

0x4481,	// (0x0003baa7) image_qvga_pane

0x1f14,	// (0x0003953a) bg_popup_sub_pane_cp04_ParamLimits

0xb71f,	// (0x00042d45) popup_mup_playback_window_g1_ParamLimits

0xb72b,	// (0x00042d51) popup_mup_playback_window_t1_ParamLimits

0xb740,	// (0x00042d66) popup_mup_playback_window_t2_ParamLimits

0xf549,	// (0x00046b6f) popup_mup_playback_window_t_ParamLimits

0x6ba9,	// (0x0003e1cf) main_mup2_pane_g3_ParamLimits

0x6ba9,	// (0x0003e1cf) main_mup2_pane_g3

0x4795,	// (0x0003bdbb) popup_toolbar_window_cp04

0xbb21,	// (0x00043147) popup_call2_audio_second_window_g3_ParamLimits

0xbb21,	// (0x00043147) popup_call2_audio_second_window_g3

0xbf2b,	// (0x00043551) popup_call2_audio_first_window_g4_ParamLimits

0xbf2b,	// (0x00043551) popup_call2_audio_first_window_g4

0xc5aa,	// (0x00043bd0) popup_call2_audio_in_window_g4_ParamLimits

0xc5aa,	// (0x00043bd0) popup_call2_audio_in_window_g4

0x5ca7,	// (0x0003d2cd) aid_area_sk_bg_cut_ParamLimits

0x5ca7,	// (0x0003d2cd) aid_area_sk_bg_cut

0xb755,	// (0x00042d7b) aid_area_sk_bg_cut_2_ParamLimits

0xb755,	// (0x00042d7b) aid_area_sk_bg_cut_2

0x6e7e,	// (0x0003e4a4) aid_placing_details_win

0x6e86,	// (0x0003e4ac) aid_placing_details_win_2

0xcec7,	// (0x000444ed) camera2_autofocus_pane_g1_ParamLimits

0x38e6,	// (0x0003af0c) popup_fixed_preview_cale_window_ParamLimits

0x38e6,	// (0x0003af0c) popup_fixed_preview_cale_window

0xb4ed,	// (0x00042b13) navi_slider_pane_g3

0xb4f6,	// (0x00042b1c) navi_slider_pane_g4

0xb4ff,	// (0x00042b25) navi_slider_pane_g5

0xb4ed,	// (0x00042b13) navi_slider_pane_g6

0xec94,	// (0x000462ba) navi_slider_pane_g7

0xb620,	// (0x00042c46) mup_scale_pane_g3

0xb629,	// (0x00042c4f) mup_scale_pane_g4

0xb632,	// (0x00042c58) mup_scale_pane_g5

0x5a69,	// (0x0003d08f) mup_scale_pane_g6

0x5a72,	// (0x0003d098) mup_scale_pane_g7

0xb4ed,	// (0x00042b13) cams2_slider_pane_g3

0xcb63,	// (0x00044189) cams2_slider_pane_g4

0xed88,	// (0x000463ae) cams2_slider_pane_g5

0xb4ed,	// (0x00042b13) cams2_slider_pane_g6

0xed90,	// (0x000463b6) cams2_slider_pane_g7

0xcd86,	// (0x000443ac) camera2_autofocus_pane_cp_g1

0xd0e1,	// (0x00044707) bg_popup_preview_window_pane_cp02_ParamLimits

0xd0e1,	// (0x00044707) bg_popup_preview_window_pane_cp02

0x7620,	// (0x0003ec46) list_fp_cale_pane_ParamLimits

0x7620,	// (0x0003ec46) list_fp_cale_pane

0xd0ed,	// (0x00044713) popup_fixed_preview_cale_window_t1_ParamLimits

0xd0ed,	// (0x00044713) popup_fixed_preview_cale_window_t1

0x762c,	// (0x0003ec52) popup_fixed_preview_cale_window_t2_ParamLimits

0x762c,	// (0x0003ec52) popup_fixed_preview_cale_window_t2

0x7641,	// (0x0003ec67) popup_fixed_preview_cale_window_t3_ParamLimits

0x7641,	// (0x0003ec67) popup_fixed_preview_cale_window_t3

0x0002,

0xf824,	// (0x00046e4a) popup_fixed_preview_cale_window_t_ParamLimits

0xf824,	// (0x00046e4a) popup_fixed_preview_cale_window_t

0x7656,	// (0x0003ec7c) list_single_fp_cale_pane_ParamLimits

0x7656,	// (0x0003ec7c) list_single_fp_cale_pane

0x766a,	// (0x0003ec90) list_single_fp_cale_pane_g1_ParamLimits

0x766a,	// (0x0003ec90) list_single_fp_cale_pane_g1

0xd10b,	// (0x00044731) list_single_fp_cale_pane_g2_ParamLimits

0xd10b,	// (0x00044731) list_single_fp_cale_pane_g2

0x0002,

0xf82b,	// (0x00046e51) list_single_fp_cale_pane_g_ParamLimits

0xf82b,	// (0x00046e51) list_single_fp_cale_pane_g

0x7676,	// (0x0003ec9c) list_single_fp_cale_pane_t1_ParamLimits

0x7676,	// (0x0003ec9c) list_single_fp_cale_pane_t1

0x7688,	// (0x0003ecae) list_single_fp_cale_pane_t2_ParamLimits

0x7688,	// (0x0003ecae) list_single_fp_cale_pane_t2

0x0001,

0xf832,	// (0x00046e58) list_single_fp_cale_pane_t_ParamLimits

0xf832,	// (0x00046e58) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x185d,	// (0x00038e83) main_dialer_pane

0x76bb,	// (0x0003ece1) aid_cell_size_keypad

0x76c5,	// (0x0003eceb) dialer_ne_pane

0x76cd,	// (0x0003ecf3) grid_dialer_command_1_pane

0x76d5,	// (0x0003ecfb) grid_dialer_command_2_pane

0x76dd,	// (0x0003ed03) grid_dialer_keypad_pane

0x76ed,	// (0x0003ed13) bg_popup_call_pane_cp06_ParamLimits

0x76ed,	// (0x0003ed13) bg_popup_call_pane_cp06

0x76f9,	// (0x0003ed1f) dialer_ne_clear_pane_ParamLimits

0x76f9,	// (0x0003ed1f) dialer_ne_clear_pane

0xd124,	// (0x0004474a) dialer_ne_pane_g1

0xd12c,	// (0x00044752) dialer_ne_pane_t1_ParamLimits

0xd12c,	// (0x00044752) dialer_ne_pane_t1

0x7705,	// (0x0003ed2b) dialer_ne_pane_t2_ParamLimits

0x7705,	// (0x0003ed2b) dialer_ne_pane_t2

0x772f,	// (0x0003ed55) dialer_ne_pane_t3_ParamLimits

0x772f,	// (0x0003ed55) dialer_ne_pane_t3

0x0002,

0xf837,	// (0x00046e5d) dialer_ne_pane_t_ParamLimits

0xf837,	// (0x00046e5d) dialer_ne_pane_t

0x775f,	// (0x0003ed85) dialer_ne_pane_t3_copy1_ParamLimits

0x775f,	// (0x0003ed85) dialer_ne_pane_t3_copy1

0x778e,	// (0x0003edb4) cell_dialer_keypad_pane_ParamLimits

0x778e,	// (0x0003edb4) cell_dialer_keypad_pane

0x77a3,	// (0x0003edc9) cell_dialer_command_1_pane_ParamLimits

0x77a3,	// (0x0003edc9) cell_dialer_command_1_pane

0x77b9,	// (0x0003eddf) cell_dialer_command_2_pane_ParamLimits

0x77b9,	// (0x0003eddf) cell_dialer_command_2_pane

0xd13e,	// (0x00044764) bg_button_pane_cp02_ParamLimits

0xd13e,	// (0x00044764) bg_button_pane_cp02

0x77c8,	// (0x0003edee) cell_dialer_keypad_pane_g1_ParamLimits

0x77c8,	// (0x0003edee) cell_dialer_keypad_pane_g1

0xd13e,	// (0x00044764) bg_button_pane_cp03_ParamLimits

0xd13e,	// (0x00044764) bg_button_pane_cp03

0x77dd,	// (0x0003ee03) cell_dialer_command_1_pane_g1_ParamLimits

0x77dd,	// (0x0003ee03) cell_dialer_command_1_pane_g1

0xd14a,	// (0x00044770) bg_button_pane_cp04

0x77f1,	// (0x0003ee17) cell_dialer_command_2_pane_g1

0xb4dc,	// (0x00042b02) bg_button_pane_cp06

0xd152,	// (0x00044778) dialer_ne_clear_pane_g1

0xb3f9,	// (0x00042a1f) navi_pane_g2

0x566e,	// (0x0003cc94) navi_pane_g3

0x0002,

0xf44c,	// (0x00046a72) navi_pane_g

0xb47b,	// (0x00042aa1) navi_pane_mv_g2

0xb4a3,	// (0x00042ac9) navi_pane_mv_g5

0x5693,	// (0x0003ccb9) navi_pane_mv_t1

0x1fe3,	// (0x00039609) main_clock2_pane

0x7825,	// (0x0003ee4b) main_clock2_list_pane_ParamLimits

0x7825,	// (0x0003ee4b) main_clock2_list_pane

0x7857,	// (0x0003ee7d) main_clock2_pane_t1_ParamLimits

0x7857,	// (0x0003ee7d) main_clock2_pane_t1

0x788e,	// (0x0003eeb4) main_clock2_pane_t2_ParamLimits

0x788e,	// (0x0003eeb4) main_clock2_pane_t2

0x0004,

0xf83e,	// (0x00046e64) main_clock2_pane_t_ParamLimits

0xf83e,	// (0x00046e64) main_clock2_pane_t

0x7910,	// (0x0003ef36) popup_clock_analogue_window_cp03_ParamLimits

0x7910,	// (0x0003ef36) popup_clock_analogue_window_cp03

0x7933,	// (0x0003ef59) popup_clock_digital_window_cp02_ParamLimits

0x7933,	// (0x0003ef59) popup_clock_digital_window_cp02

0x79a4,	// (0x0003efca) main_clock2_list_single_pane_ParamLimits

0x79a4,	// (0x0003efca) main_clock2_list_single_pane

0xb4dc,	// (0x00042b02) list_highlight_pane_cp05

0xd15a,	// (0x00044780) main_clock2_list_single_pane_t1

0x4795,	// (0x0003bdbb) popup_toolbar_window_cp04_ParamLimits

0x6edf,	// (0x0003e505) camera2_autofocus_pane_g2_ParamLimits

0x6edf,	// (0x0003e505) camera2_autofocus_pane_g2

0x6eeb,	// (0x0003e511) camera2_autofocus_pane_g3_ParamLimits

0x6eeb,	// (0x0003e511) camera2_autofocus_pane_g3

0x6ef7,	// (0x0003e51d) camera2_autofocus_pane_g4_ParamLimits

0x6ef7,	// (0x0003e51d) camera2_autofocus_pane_g4

0x6f03,	// (0x0003e529) camera2_autofocus_pane_g5_ParamLimits

0x6f03,	// (0x0003e529) camera2_autofocus_pane_g5

0x0004,

0xf787,	// (0x00046dad) camera2_autofocus_pane_g_ParamLimits

0xf787,	// (0x00046dad) camera2_autofocus_pane_g

0x7084,	// (0x0003e6aa) camera2_autofocus_pane_cp_g2

0x708c,	// (0x0003e6b2) camera2_autofocus_pane_cp_g3

0x7094,	// (0x0003e6ba) camera2_autofocus_pane_cp_g4

0x709c,	// (0x0003e6c2) camera2_autofocus_pane_cp_g5

0x0004,

0xf7ed,	// (0x00046e13) camera2_autofocus_pane_cp_g

0x76e5,	// (0x0003ed0b) popup_dialer_spcha_window

0x185d,	// (0x00038e83) bg_popup_sub_pane_cp07

0xd168,	// (0x0004478e) list_spcha_pane

0xd170,	// (0x00044796) list_single_spcha_pane_ParamLimits

0xd170,	// (0x00044796) list_single_spcha_pane

0x185d,	// (0x00038e83) list_highlight_pane_cp06

0xd181,	// (0x000447a7) list_single_spcha_pane_t1

0xc354,	// (0x0004397a) popup_call2_audio_out_window_g4_ParamLimits

0xc354,	// (0x0004397a) popup_call2_audio_out_window_g4

0x185d,	// (0x00038e83) main_imed2_pane

0xc971,	// (0x00043f97) popup_imed_adjust2_window

0x63c3,	// (0x0003d9e9) popup_imed_trans_window_ParamLimits

0x63c3,	// (0x0003d9e9) popup_imed_trans_window

0xcbca,	// (0x000441f0) popup_blid_sat_info2_window_t1

0xcbd8,	// (0x000441fe) popup_blid_sat_info2_window_t2

0x000a,

0xf71c,	// (0x00046d42) popup_blid_sat_info2_window_t

0x7a4e,	// (0x0003f074) aid_size_cell_colour_35

0x7a6e,	// (0x0003f094) aid_size_cell_colour_112

0x7a8e,	// (0x0003f0b4) aid_size_cell_effect

0xc94b,	// (0x00043f71) bg_tb_trans_pane_cp02

0xaf23,	// (0x00042549) heading_imed_pane

0x7aae,	// (0x0003f0d4) listscroll_imed_pane

0xd18f,	// (0x000447b5) heading_imed_pane_g1

0xd197,	// (0x000447bd) heading_imed_pane_t1

0xd1a5,	// (0x000447cb) grid_imed_colour_35_pane_ParamLimits

0xd1a5,	// (0x000447cb) grid_imed_colour_35_pane

0x7aba,	// (0x0003f0e0) grid_imed_effect_pane

0xd1b8,	// (0x000447de) list_imed_aspect_pane

0x7acd,	// (0x0003f0f3) scroll_pane_cp027_ParamLimits

0x7acd,	// (0x0003f0f3) scroll_pane_cp027

0x7ad9,	// (0x0003f0ff) cell_imed_effect_pane_ParamLimits

0x7ad9,	// (0x0003f0ff) cell_imed_effect_pane

0xd1c0,	// (0x000447e6) cell_imed_colour_pane_ParamLimits

0xd1c0,	// (0x000447e6) cell_imed_colour_pane

0xd1fa,	// (0x00044820) cell_imed_colour_pane_g1_ParamLimits

0xd1fa,	// (0x00044820) cell_imed_colour_pane_g1

0xd20b,	// (0x00044831) hgihlgiht_grid_pane_cp016_ParamLimits

0xd20b,	// (0x00044831) hgihlgiht_grid_pane_cp016

0x7afe,	// (0x0003f124) cell_imed_effect_pane_g1

0x7b06,	// (0x0003f12c) grid_highlight_pane_cp017

0xd21c,	// (0x00044842) list_imed_single_pane_ParamLimits

0xd21c,	// (0x00044842) list_imed_single_pane

0x185d,	// (0x00038e83) list_highlight_pane_cp07

0xd22f,	// (0x00044855) list_imed_aspect_pane_comp1_t1

0xc94b,	// (0x00043f71) bg_tb_trans_pane_cp05

0xd24f,	// (0x00044875) popup_imed_adjust2_window_g1

0xd276,	// (0x0004489c) popup_imed_adjust2_window_t1

0xd28e,	// (0x000448b4) slider_imed_adjust_pane

0xd2a2,	// (0x000448c8) slider_imed_adjust_pane_g1

0xd2b2,	// (0x000448d8) slider_imed_adjust_pane_g2

0xd2c2,	// (0x000448e8) slider_imed_adjust_pane_g3

0xd2d3,	// (0x000448f9) slider_imed_adjust_pane_g4

0x0003,

0xf85b,	// (0x00046e81) slider_imed_adjust_pane_g

0x7b0f,	// (0x0003f135) aid_size_cell_clipart2

0x7b1b,	// (0x0003f141) grid_imed_clipart_pane

0xd2e4,	// (0x0004490a) scroll_pane_cp031

0x7b25,	// (0x0003f14b) cell_imed_clipart_pane_ParamLimits

0x7b25,	// (0x0003f14b) cell_imed_clipart_pane

0x7b3d,	// (0x0003f163) cell_imed_clipart_pane_g1

0x185d,	// (0x00038e83) grid_highlight_pane_cp014

0x7838,	// (0x0003ee5e) main_clock2_pane_g1_ParamLimits

0x7838,	// (0x0003ee5e) main_clock2_pane_g1

0x794f,	// (0x0003ef75) aid_call2_pane_cp10

0x7961,	// (0x0003ef87) aid_call_pane_cp10

0xb3a9,	// (0x000429cf) popup_clock_analogue_window_cp10_g1

0xb3a9,	// (0x000429cf) popup_clock_analogue_window_cp10_g2

0x7973,	// (0x0003ef99) popup_clock_analogue_window_cp10_g3

0x7973,	// (0x0003ef99) popup_clock_analogue_window_cp10_g4

0xb3a9,	// (0x000429cf) popup_clock_analogue_window_cp10_g5

0x0004,

0xf849,	// (0x00046e6f) popup_clock_analogue_window_cp10_g

0x7985,	// (0x0003efab) popup_clock_analogue_window_cp10_t1

0x79b6,	// (0x0003efdc) clock_digital_number_pane_cp10_ParamLimits

0x79b6,	// (0x0003efdc) clock_digital_number_pane_cp10

0x79ce,	// (0x0003eff4) clock_digital_number_pane_cp11_ParamLimits

0x79ce,	// (0x0003eff4) clock_digital_number_pane_cp11

0x79e6,	// (0x0003f00c) clock_digital_number_pane_cp12_ParamLimits

0x79e6,	// (0x0003f00c) clock_digital_number_pane_cp12

0x79fe,	// (0x0003f024) clock_digital_number_pane_cp13_ParamLimits

0x79fe,	// (0x0003f024) clock_digital_number_pane_cp13

0x7a16,	// (0x0003f03c) clock_digital_separator_pane_cp10_ParamLimits

0x7a16,	// (0x0003f03c) clock_digital_separator_pane_cp10

0x7a2e,	// (0x0003f054) popup_clock_digital_window_cp02_t1_ParamLimits

0x7a2e,	// (0x0003f054) popup_clock_digital_window_cp02_t1

0x1f0c,	// (0x00039532) clock_digital_number_pane_cp10_g1

0x1f0c,	// (0x00039532) clock_digital_number_pane_cp10_g2

0x0001,

0xf864,	// (0x00046e8a) clock_digital_number_pane_cp10_g

0x1f0c,	// (0x00039532) clock_digital_separator_pane_cp10_g1

0x1f0c,	// (0x00039532) clock_digital_separator_pane_g2_cp10

0xb4ac,	// (0x00042ad2) navi_pane_vded_g4

0xb4b5,	// (0x00042adb) navi_pane_vded_g5

0xb4be,	// (0x00042ae4) navi_pane_vded_t1

0x185d,	// (0x00038e83) main_vded_pane

0x7b46,	// (0x0003f16c) main_vded_pane_g1

0x7b50,	// (0x0003f176) main_vded_pane_g2

0x7b58,	// (0x0003f17e) main_vded_pane_g3

0x0002,

0xf869,	// (0x00046e8f) main_vded_pane_g

0x7b60,	// (0x0003f186) main_vded_pane_t1

0x7b6e,	// (0x0003f194) main_vded_pane_t2

0x0001,

0xf870,	// (0x00046e96) main_vded_pane_t

0x7b7c,	// (0x0003f1a2) vded_slider_pane

0x7b84,	// (0x0003f1aa) vded_video_pane

0xd2ec,	// (0x00044912) vded_video_pane_g1

0x7b8c,	// (0x0003f1b2) vded_video_pane_g2

0xcd86,	// (0x000443ac) vded_video_pane_g3

0x0002,

0xf875,	// (0x00046e9b) vded_video_pane_g

0xd2f6,	// (0x0004491c) vded_slider_pane_g1

0xcae1,	// (0x00044107) vded_slider_pane_g2

0xd2ff,	// (0x00044925) vded_slider_pane_g3

0xd308,	// (0x0004492e) vded_slider_pane_g4

0xd311,	// (0x00044937) vded_slider_pane_g5

0x0004,

0xf87c,	// (0x00046ea2) vded_slider_pane_g

0x7584,	// (0x0003ebaa) mup3_rocker_pane_ParamLimits

0x7584,	// (0x0003ebaa) mup3_rocker_pane

0x7b95,	// (0x0003f1bb) mup3_control_keys_pane_g1

0x7b9d,	// (0x0003f1c3) mup3_control_keys_pane_g2

0x7ba5,	// (0x0003f1cb) mup3_control_keys_pane_g3

0x7bad,	// (0x0003f1d3) mup3_control_keys_pane_g4

0x0003,

0xf887,	// (0x00046ead) mup3_control_keys_pane_g

0x3919,	// (0x0003af3f) popup_toolbar2_fixed_window_cp01_ParamLimits

0x3919,	// (0x0003af3f) popup_toolbar2_fixed_window_cp01

0x75b2,	// (0x0003ebd8) popup_toolbar2_fixed_window_cp02_ParamLimits

0x75b2,	// (0x0003ebd8) popup_toolbar2_fixed_window_cp02

0xbc93,	// (0x000432b9) popup_call2_audio_second_window_t4_ParamLimits

0xbc93,	// (0x000432b9) popup_call2_audio_second_window_t4

0xc1c1,	// (0x000437e7) popup_call2_audio_first_window_t6_ParamLimits

0xc1c1,	// (0x000437e7) popup_call2_audio_first_window_t6

0xc457,	// (0x00043a7d) popup_call2_audio_out_window_t6_ParamLimits

0xc457,	// (0x00043a7d) popup_call2_audio_out_window_t6

0x185d,	// (0x00038e83) main_vitu_pane

0x7bbd,	// (0x0003f1e3) aid_size_cell_itu_ParamLimits

0x7bbd,	// (0x0003f1e3) aid_size_cell_itu

0x20d6,	// (0x000396fc) bg_popup_window_pane_cp08_ParamLimits

0x20d6,	// (0x000396fc) bg_popup_window_pane_cp08

0x7bd3,	// (0x0003f1f9) field_vitu_entry_pane_ParamLimits

0x7bd3,	// (0x0003f1f9) field_vitu_entry_pane

0x7be6,	// (0x0003f20c) grid_vitu_function_pane_ParamLimits

0x7be6,	// (0x0003f20c) grid_vitu_function_pane

0x7bfb,	// (0x0003f221) grid_vitu_itu_pane_ParamLimits

0x7bfb,	// (0x0003f221) grid_vitu_itu_pane

0x7c11,	// (0x0003f237) cell_vitu_itu_pane_ParamLimits

0x7c11,	// (0x0003f237) cell_vitu_itu_pane

0x7c33,	// (0x0003f259) cell_vitu_function_pane_ParamLimits

0x7c33,	// (0x0003f259) cell_vitu_function_pane

0x20d6,	// (0x000396fc) bg_popup_sub_pane_cp08_ParamLimits

0x20d6,	// (0x000396fc) bg_popup_sub_pane_cp08

0x7c4c,	// (0x0003f272) field_vitu_entry_pane_t1_ParamLimits

0x7c4c,	// (0x0003f272) field_vitu_entry_pane_t1

0xd332,	// (0x00044958) field_vitu_entry_pane_t2_ParamLimits

0xd332,	// (0x00044958) field_vitu_entry_pane_t2

0x0001,

0xf895,	// (0x00046ebb) field_vitu_entry_pane_t_ParamLimits

0xf895,	// (0x00046ebb) field_vitu_entry_pane_t

0xd34f,	// (0x00044975) bg_button_pane_cp05_ParamLimits

0xd34f,	// (0x00044975) bg_button_pane_cp05

0x7c68,	// (0x0003f28e) cell_vitu_itu_pane_g1

0x7c80,	// (0x0003f2a6) cell_vitu_itu_pane_t1_ParamLimits

0x7c80,	// (0x0003f2a6) cell_vitu_itu_pane_t1

0x7c92,	// (0x0003f2b8) cell_vitu_itu_pane_t2_ParamLimits

0x7c92,	// (0x0003f2b8) cell_vitu_itu_pane_t2

0x0002,

0xf89a,	// (0x00046ec0) cell_vitu_itu_pane_t_ParamLimits

0xf89a,	// (0x00046ec0) cell_vitu_itu_pane_t

0xd35d,	// (0x00044983) bg_button_pane_cp07

0x7cc7,	// (0x0003f2ed) cell_vitu_function_pane_g1

0xaa37,	// (0x0004205d) main_calc_pane_g1

0x377d,	// (0x0003ada3) aid_visual_content_pane

0x185d,	// (0x00038e83) main_vradio_pane

0x7cd0,	// (0x0003f2f6) main_vradio_pane_g1_ParamLimits

0x7cd0,	// (0x0003f2f6) main_vradio_pane_g1

0xd367,	// (0x0004498d) main_vradio_pane_g2_ParamLimits

0xd367,	// (0x0004498d) main_vradio_pane_g2

0x0001,

0xf8a1,	// (0x00046ec7) main_vradio_pane_g_ParamLimits

0xf8a1,	// (0x00046ec7) main_vradio_pane_g

0x7ce6,	// (0x0003f30c) main_vradio_pane_t1_ParamLimits

0x7ce6,	// (0x0003f30c) main_vradio_pane_t1

0x7cfb,	// (0x0003f321) main_vradio_pane_t2_ParamLimits

0x7cfb,	// (0x0003f321) main_vradio_pane_t2

0xd374,	// (0x0004499a) main_vradio_pane_t3_ParamLimits

0xd374,	// (0x0004499a) main_vradio_pane_t3

0x0002,

0xf8a6,	// (0x00046ecc) main_vradio_pane_t_ParamLimits

0xf8a6,	// (0x00046ecc) main_vradio_pane_t

0x7d10,	// (0x0003f336) vradio_rocker_control_pane_ParamLimits

0x7d10,	// (0x0003f336) vradio_rocker_control_pane

0x7d22,	// (0x0003f348) vradio_station_info_pane_ParamLimits

0x7d22,	// (0x0003f348) vradio_station_info_pane

0xd386,	// (0x000449ac) vradio_frequency_info_pane_ParamLimits

0xd386,	// (0x000449ac) vradio_frequency_info_pane

0xcd86,	// (0x000443ac) vradio_station_info_pane_g1

0xd395,	// (0x000449bb) vradio_station_info_pane_t1_ParamLimits

0xd395,	// (0x000449bb) vradio_station_info_pane_t1

0xd3b7,	// (0x000449dd) vradio_station_info_pane_t2_ParamLimits

0xd3b7,	// (0x000449dd) vradio_station_info_pane_t2

0x0001,

0xf8ad,	// (0x00046ed3) vradio_station_info_pane_t_ParamLimits

0xf8ad,	// (0x00046ed3) vradio_station_info_pane_t

0xd3c9,	// (0x000449ef) vradio_tuning_pane

0xd3d1,	// (0x000449f7) vradio_rocker_control_pane_g1

0xd3d9,	// (0x000449ff) vradio_rocker_control_pane_g2

0xd3e1,	// (0x00044a07) vradio_rocker_control_pane_g3

0xd3e9,	// (0x00044a0f) vradio_rocker_control_pane_g4

0xd3f1,	// (0x00044a17) vradio_rocker_control_pane_g5

0x0004,

0xf8b2,	// (0x00046ed8) vradio_rocker_control_pane_g

0x7d32,	// (0x0003f358) vradio_frequency_info_pane_g1

0xd3f9,	// (0x00044a1f) vradio_frequency_info_pane_t1_ParamLimits

0xd3f9,	// (0x00044a1f) vradio_frequency_info_pane_t1

0x7d3c,	// (0x0003f362) vradio_tuning_pane_g1

0x7d45,	// (0x0003f36b) vradio_tuning_pane_t1

0x187f,	// (0x00038ea5) area_side_right_pane_ParamLimits

0x187f,	// (0x00038ea5) area_side_right_pane

0xc912,	// (0x00043f38) status_small_pane_g1

0xc91a,	// (0x00043f40) status_small_pane_g2

0xc923,	// (0x00043f49) status_small_pane_g3

0xc92c,	// (0x00043f52) status_small_pane_g4

0x0003,

0xf672,	// (0x00046c98) status_small_pane_g

0xc935,	// (0x00043f5b) status_small_pane_t1

0x185d,	// (0x00038e83) main_video3_pane

0xd40d,	// (0x00044a33) cams_zoom_vslider_pane

0xd415,	// (0x00044a3b) image3_wide_pane_ParamLimits

0xd415,	// (0x00044a3b) image3_wide_pane

0xd42f,	// (0x00044a55) image3_wide_small_pane

0xd439,	// (0x00044a5f) main_video3_pane_g1_ParamLimits

0xd439,	// (0x00044a5f) main_video3_pane_g1

0xd455,	// (0x00044a7b) main_video3_pane_g2_ParamLimits

0xd455,	// (0x00044a7b) main_video3_pane_g2

0x0001,

0xf8bd,	// (0x00046ee3) main_video3_pane_g_ParamLimits

0xf8bd,	// (0x00046ee3) main_video3_pane_g

0xd471,	// (0x00044a97) main_video3_pane_t1_ParamLimits

0xd471,	// (0x00044a97) main_video3_pane_t1

0xd49c,	// (0x00044ac2) main_video3_pane_t2_ParamLimits

0xd49c,	// (0x00044ac2) main_video3_pane_t2

0xd4c7,	// (0x00044aed) main_video3_pane_t3_ParamLimits

0xd4c7,	// (0x00044aed) main_video3_pane_t3

0x0002,

0xf8c2,	// (0x00046ee8) main_video3_pane_t_ParamLimits

0xf8c2,	// (0x00046ee8) main_video3_pane_t

0xd4f2,	// (0x00044b18) cams_zoom_vslider_pane_g1

0xd4fb,	// (0x00044b21) cams_zoom_vslider_pane_g2

0x0001,

0xf8c9,	// (0x00046eef) cams_zoom_vslider_pane_g

0xd503,	// (0x00044b29) small_slider_vertical_pane

0xcd86,	// (0x000443ac) small_slider_vertical_pane_g1

0xcd86,	// (0x000443ac) small_slider_vertical_pane_g2

0xd50b,	// (0x00044b31) small_slider_vertical_pane_g3

0x0002,

0xf8ce,	// (0x00046ef4) small_slider_vertical_pane_g

0x185d,	// (0x00038e83) main_hwr_training_pane

0xd514,	// (0x00044b3a) hwr_training_instruct_pane_ParamLimits

0xd514,	// (0x00044b3a) hwr_training_instruct_pane

0x7d54,	// (0x0003f37a) hwr_training_navi_pane_ParamLimits

0x7d54,	// (0x0003f37a) hwr_training_navi_pane

0x7d6b,	// (0x0003f391) hwr_training_write_pane_ParamLimits

0x7d6b,	// (0x0003f391) hwr_training_write_pane

0x185d,	// (0x00038e83) bg_frame_shadow_pane

0xd543,	// (0x00044b69) hwr_training_write_pane_g1

0xd54b,	// (0x00044b71) hwr_training_write_pane_g2

0xd553,	// (0x00044b79) hwr_training_write_pane_g3

0xd55b,	// (0x00044b81) hwr_training_write_pane_g4

0xd563,	// (0x00044b89) hwr_training_write_pane_g5

0xd56b,	// (0x00044b91) hwr_training_write_pane_g6

0xd573,	// (0x00044b99) hwr_training_write_pane_g7

0x0006,

0xf8d5,	// (0x00046efb) hwr_training_write_pane_g

0xed99,	// (0x000463bf) hwr_training_navi_pane_g1_ParamLimits

0xed99,	// (0x000463bf) hwr_training_navi_pane_g1

0xedab,	// (0x000463d1) hwr_training_navi_pane_g2_ParamLimits

0xedab,	// (0x000463d1) hwr_training_navi_pane_g2

0xedbd,	// (0x000463e3) hwr_training_navi_pane_g3_ParamLimits

0xedbd,	// (0x000463e3) hwr_training_navi_pane_g3

0xedcd,	// (0x000463f3) hwr_training_navi_pane_g4_ParamLimits

0xedcd,	// (0x000463f3) hwr_training_navi_pane_g4

0x0004,

0xf8e4,	// (0x00046f0a) hwr_training_navi_pane_g_ParamLimits

0xf8e4,	// (0x00046f0a) hwr_training_navi_pane_g

0xedda,	// (0x00046400) hwr_training_navi_pane_t1

0x7dab,	// (0x0003f3d1) list_single_hwr_training_instruct_pane_ParamLimits

0x7dab,	// (0x0003f3d1) list_single_hwr_training_instruct_pane

0xd57b,	// (0x00044ba1) list_single_hwr_training_instruct_pane_t1

0xccc6,	// (0x000442ec) bg_frame_shadow_pane_g1

0xd58a,	// (0x00044bb0) bg_frame_shadow_pane_g2

0xd592,	// (0x00044bb8) bg_frame_shadow_pane_g3

0xd59a,	// (0x00044bc0) bg_frame_shadow_pane_g4

0xd5a2,	// (0x00044bc8) bg_frame_shadow_pane_g5

0xd5aa,	// (0x00044bd0) bg_frame_shadow_pane_g6

0xd5b2,	// (0x00044bd8) bg_frame_shadow_pane_g7

0x20ae,	// (0x000396d4) bg_frame_shadow_pane_g8

0x0007,

0xf8ef,	// (0x00046f15) bg_frame_shadow_pane_g

0x185d,	// (0x00038e83) main_video_tele_dialer_pane

0x7dc3,	// (0x0003f3e9) aid_size_cell_video_keypad_ParamLimits

0x7dc3,	// (0x0003f3e9) aid_size_cell_video_keypad

0x7ddd,	// (0x0003f403) grid_video_dialer_keypad_pane_ParamLimits

0x7ddd,	// (0x0003f403) grid_video_dialer_keypad_pane

0x7e1f,	// (0x0003f445) video_down_pane_cp_ParamLimits

0x7e1f,	// (0x0003f445) video_down_pane_cp

0x7e4f,	// (0x0003f475) cell_video_dialer_keypad_pane_ParamLimits

0x7e4f,	// (0x0003f475) cell_video_dialer_keypad_pane

0xd5ba,	// (0x00044be0) bg_button_pane_cp08_ParamLimits

0xd5ba,	// (0x00044be0) bg_button_pane_cp08

0x7e71,	// (0x0003f497) cell_video_dialer_keypad_pane_g1_ParamLimits

0x7e71,	// (0x0003f497) cell_video_dialer_keypad_pane_g1

0x756e,	// (0x0003eb94) mup3_rocker2_pane_ParamLimits

0x756e,	// (0x0003eb94) mup3_rocker2_pane

0xcd86,	// (0x000443ac) mup3_rocker2_pane_g1

0x62bc,	// (0x0003d8e2) main_dialer2_pane

0x185d,	// (0x00038e83) main_mp4_pane

0xedf0,	// (0x00046416) main_mp4_pane_g1_ParamLimits

0xedf0,	// (0x00046416) main_mp4_pane_g1

0xedf0,	// (0x00046416) main_mp4_pane_g2_ParamLimits

0xedf0,	// (0x00046416) main_mp4_pane_g2

0x7eac,	// (0x0003f4d2) main_mp4_pane_g3_ParamLimits

0x7eac,	// (0x0003f4d2) main_mp4_pane_g3

0xedfe,	// (0x00046424) main_mp4_pane_g4_ParamLimits

0xedfe,	// (0x00046424) main_mp4_pane_g4

0xee2c,	// (0x00046452) main_mp4_pane_g5_ParamLimits

0xee2c,	// (0x00046452) main_mp4_pane_g5

0x0005,

0xf90f,	// (0x00046f35) main_mp4_pane_g_ParamLimits

0xf90f,	// (0x00046f35) main_mp4_pane_g

0xee88,	// (0x000464ae) main_mp4_pane_t1_ParamLimits

0xee88,	// (0x000464ae) main_mp4_pane_t1

0xeee0,	// (0x00046506) main_mp4_pane_t2_ParamLimits

0xeee0,	// (0x00046506) main_mp4_pane_t2

0xd5c6,	// (0x00044bec) main_mp4_pane_t3_ParamLimits

0xd5c6,	// (0x00044bec) main_mp4_pane_t3

0xef32,	// (0x00046558) main_mp4_pane_t4_ParamLimits

0xef32,	// (0x00046558) main_mp4_pane_t4

0x0003,

0xf91c,	// (0x00046f42) main_mp4_pane_t_ParamLimits

0xf91c,	// (0x00046f42) main_mp4_pane_t

0xef72,	// (0x00046598) mp4_progress_pane_ParamLimits

0xef72,	// (0x00046598) mp4_progress_pane

0xefb6,	// (0x000465dc) mp4_rocker_pane_ParamLimits

0xefb6,	// (0x000465dc) mp4_rocker_pane

0xd5f4,	// (0x00044c1a) mp4_progress_pane_t1

0xd60b,	// (0x00044c31) mp4_progress_pane_t2

0x0001,

0xf925,	// (0x00046f4b) mp4_progress_pane_t

0xd622,	// (0x00044c48) mup_progress_pane_cp04

0xcd86,	// (0x000443ac) mp4_rocker_pane_g1

0x7edc,	// (0x0003f502) aid_cell_size_keypad2_ParamLimits

0x7edc,	// (0x0003f502) aid_cell_size_keypad2

0x7ef6,	// (0x0003f51c) dialer2_ne_pane_ParamLimits

0x7ef6,	// (0x0003f51c) dialer2_ne_pane

0x7f0b,	// (0x0003f531) grid_dialer2_keypad_pane_ParamLimits

0x7f0b,	// (0x0003f531) grid_dialer2_keypad_pane

0xcb73,	// (0x00044199) bg_popup_call_pane_cp07_ParamLimits

0xcb73,	// (0x00044199) bg_popup_call_pane_cp07

0x7f21,	// (0x0003f547) dialer2_ne_pane_t1_ParamLimits

0x7f21,	// (0x0003f547) dialer2_ne_pane_t1

0x7f5e,	// (0x0003f584) cell_dialer2_keypad_pane_ParamLimits

0x7f5e,	// (0x0003f584) cell_dialer2_keypad_pane

0xd640,	// (0x00044c66) bg_button_pane_pane_cp04_ParamLimits

0xd640,	// (0x00044c66) bg_button_pane_pane_cp04

0x7f80,	// (0x0003f5a6) cell_dialer2_keypad_pane_g1_ParamLimits

0x7f80,	// (0x0003f5a6) cell_dialer2_keypad_pane_g1

0x46c0,	// (0x0003bce6) aid_placing_vt_set_content_ParamLimits

0x46c0,	// (0x0003bce6) aid_placing_vt_set_content

0x46de,	// (0x0003bd04) aid_placing_vt_set_title_ParamLimits

0x46de,	// (0x0003bd04) aid_placing_vt_set_title

0x185d,	// (0x00038e83) main_image3_pane

0x800f,	// (0x0003f635) area_side_right_pane_cp01_ParamLimits

0x800f,	// (0x0003f635) area_side_right_pane_cp01

0xedf0,	// (0x00046416) main_image3_pane_g1_ParamLimits

0xedf0,	// (0x00046416) main_image3_pane_g1

0x8026,	// (0x0003f64c) main_image3_pane_g2_ParamLimits

0x8026,	// (0x0003f64c) main_image3_pane_g2

0x804c,	// (0x0003f672) main_image3_pane_g3_ParamLimits

0x804c,	// (0x0003f672) main_image3_pane_g3

0x8072,	// (0x0003f698) main_image3_pane_g4_ParamLimits

0x8072,	// (0x0003f698) main_image3_pane_g4

0x0003,

0xf934,	// (0x00046f5a) main_image3_pane_g_ParamLimits

0xf934,	// (0x00046f5a) main_image3_pane_g

0x8098,	// (0x0003f6be) main_image3_pane_t1_ParamLimits

0x8098,	// (0x0003f6be) main_image3_pane_t1

0x80f0,	// (0x0003f716) main_image3_pane_t2_ParamLimits

0x80f0,	// (0x0003f716) main_image3_pane_t2

0x8142,	// (0x0003f768) main_image3_pane_t3_ParamLimits

0x8142,	// (0x0003f768) main_image3_pane_t3

0x0003,

0xf93d,	// (0x00046f63) main_image3_pane_t_ParamLimits

0xf93d,	// (0x00046f63) main_image3_pane_t

0x20d6,	// (0x000396fc) grid_sctrl_middle_pane_cp01_ParamLimits

0x20d6,	// (0x000396fc) grid_sctrl_middle_pane_cp01

0x81c2,	// (0x0003f7e8) cell_sctrl_middle_pane_cp01_ParamLimits

0x81c2,	// (0x0003f7e8) cell_sctrl_middle_pane_cp01

0x81df,	// (0x0003f805) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x81df,	// (0x0003f805) cell_sctrl_middle_pane_cp01_g1

0x185d,	// (0x00038e83) main_call4_pane

0x81f5,	// (0x0003f81b) aid_size_button_call4_ParamLimits

0x81f5,	// (0x0003f81b) aid_size_button_call4

0x8222,	// (0x0003f848) call4_windows_pane_ParamLimits

0x8222,	// (0x0003f848) call4_windows_pane

0x8238,	// (0x0003f85e) grid_call4_button_pane_ParamLimits

0x8238,	// (0x0003f85e) grid_call4_button_pane

0xd664,	// (0x00044c8a) call4_windows_conf_pane

0x8257,	// (0x0003f87d) popup_call4_audio_first_window_ParamLimits

0x8257,	// (0x0003f87d) popup_call4_audio_first_window

0x8277,	// (0x0003f89d) popup_call4_audio_second_window_ParamLimits

0x8277,	// (0x0003f89d) popup_call4_audio_second_window

0xd697,	// (0x00044cbd) popup_call4_audio_wait_window_ParamLimits

0xd697,	// (0x00044cbd) popup_call4_audio_wait_window

0x8289,	// (0x0003f8af) cell_call4_button_pane_ParamLimits

0x8289,	// (0x0003f8af) cell_call4_button_pane

0x82ae,	// (0x0003f8d4) bg_button_pane_cp09_ParamLimits

0x82ae,	// (0x0003f8d4) bg_button_pane_cp09

0x82ba,	// (0x0003f8e0) cell_call4_button_pane_g1_ParamLimits

0x82ba,	// (0x0003f8e0) cell_call4_button_pane_g1

0x82e0,	// (0x0003f906) cell_call4_button_pane_t1_ParamLimits

0x82e0,	// (0x0003f906) cell_call4_button_pane_t1

0xd6dd,	// (0x00044d03) popup_call4_audio_conf_window_ParamLimits

0xd6dd,	// (0x00044d03) popup_call4_audio_conf_window

0x75c8,	// (0x0003ebee) mup3_progress_pane_t1_ParamLimits

0x75de,	// (0x0003ec04) mup3_progress_pane_t2_ParamLimits

0xd0a4,	// (0x000446ca) mup3_progress_pane_t3_ParamLimits

0xf816,	// (0x00046e3c) mup3_progress_pane_t_ParamLimits

0xd0bb,	// (0x000446e1) mup_progress_pane_cp03_ParamLimits

0x7bb5,	// (0x0003f1db) mup3_control_keys_pane_g4_copy1

0xefa0,	// (0x000465c6) mp4_rocker2_pane_ParamLimits

0xefa0,	// (0x000465c6) mp4_rocker2_pane

0xd6f1,	// (0x00044d17) mp4_rocker2_pane_g1

0xd6f9,	// (0x00044d1f) mp4_rocker2_pane_g2

0xf006,	// (0x0004662c) mp4_rocker2_pane_g3

0xf00e,	// (0x00046634) mp4_rocker2_pane_g4

0xf016,	// (0x0004663c) mp4_rocker2_pane_g5

0x0004,

0xf946,	// (0x00046f6c) mp4_rocker2_pane_g

0x185d,	// (0x00038e83) main_camera4_pane

0x185d,	// (0x00038e83) main_video4_pane

0x7df1,	// (0x0003f417) main_video_tele_dialer_pane_t1_ParamLimits

0x7df1,	// (0x0003f417) main_video_tele_dialer_pane_t1

0x7e08,	// (0x0003f42e) main_video_tele_dialer_pane_t2_ParamLimits

0x7e08,	// (0x0003f42e) main_video_tele_dialer_pane_t2

0x0001,

0xf900,	// (0x00046f26) main_video_tele_dialer_pane_t_ParamLimits

0xf900,	// (0x00046f26) main_video_tele_dialer_pane_t

0x831c,	// (0x0003f942) cam4_autofocus_pane_ParamLimits

0x831c,	// (0x0003f942) cam4_autofocus_pane

0x8330,	// (0x0003f956) cam4_image_uncrop_pane_ParamLimits

0x8330,	// (0x0003f956) cam4_image_uncrop_pane

0x8347,	// (0x0003f96d) cam4_indicators_pane_ParamLimits

0x8347,	// (0x0003f96d) cam4_indicators_pane

0x836b,	// (0x0003f991) main_camera4_pane_g1_ParamLimits

0x836b,	// (0x0003f991) main_camera4_pane_g1

0x8377,	// (0x0003f99d) main_camera4_pane_g2_ParamLimits

0x8377,	// (0x0003f99d) main_camera4_pane_g2

0x8383,	// (0x0003f9a9) main_camera4_pane_g3_ParamLimits

0x8383,	// (0x0003f9a9) main_camera4_pane_g3

0x838f,	// (0x0003f9b5) main_camera4_pane_g4_ParamLimits

0x838f,	// (0x0003f9b5) main_camera4_pane_g4

0x839b,	// (0x0003f9c1) main_camera4_pane_g5_ParamLimits

0x839b,	// (0x0003f9c1) main_camera4_pane_g5

0x0005,

0xf951,	// (0x00046f77) main_camera4_pane_g_ParamLimits

0xf951,	// (0x00046f77) main_camera4_pane_g

0x83b8,	// (0x0003f9de) main_camera4_pane_t1_ParamLimits

0x83b8,	// (0x0003f9de) main_camera4_pane_t1

0xd08e,	// (0x000446b4) bg_tb_trans_pane_cp06

0x83e9,	// (0x0003fa0f) cam4_indicators_pane_g1

0x83f6,	// (0x0003fa1c) cam4_indicators_pane_g2

0x0002,

0xf963,	// (0x00046f89) cam4_indicators_pane_g

0x840e,	// (0x0003fa34) cam4_indicators_pane_t1

0x8432,	// (0x0003fa58) main_video4_pane_g1_ParamLimits

0x8432,	// (0x0003fa58) main_video4_pane_g1

0x8444,	// (0x0003fa6a) main_video4_pane_g2_ParamLimits

0x8444,	// (0x0003fa6a) main_video4_pane_g2

0x8444,	// (0x0003fa6a) main_video4_pane_g3_ParamLimits

0x8444,	// (0x0003fa6a) main_video4_pane_g3

0x8453,	// (0x0003fa79) main_video4_pane_g4_ParamLimits

0x8453,	// (0x0003fa79) main_video4_pane_g4

0x0004,

0xf96a,	// (0x00046f90) main_video4_pane_g_ParamLimits

0xf96a,	// (0x00046f90) main_video4_pane_g

0x8471,	// (0x0003fa97) vid4_indicators_pane_ParamLimits

0x8471,	// (0x0003fa97) vid4_indicators_pane

0x8499,	// (0x0003fabf) video4_image_uncrop_cif_pane_ParamLimits

0x8499,	// (0x0003fabf) video4_image_uncrop_cif_pane

0x84b1,	// (0x0003fad7) video4_image_uncrop_nhd_pane_ParamLimits

0x84b1,	// (0x0003fad7) video4_image_uncrop_nhd_pane

0x84c5,	// (0x0003faeb) video4_image_uncrop_vga_pane_ParamLimits

0x84c5,	// (0x0003faeb) video4_image_uncrop_vga_pane

0xd701,	// (0x00044d27) bg_tb_trans_pane_cp07

0x83e9,	// (0x0003fa0f) vid4_indicators_pane_g1

0x84dd,	// (0x0003fb03) vid4_indicators_pane_g2

0x84ea,	// (0x0003fb10) vid4_indicators_pane_g3

0x0004,

0xf975,	// (0x00046f9b) vid4_indicators_pane_g

0x8503,	// (0x0003fb29) vid4_indicators_pane_t1

0x8515,	// (0x0003fb3b) cam4_autofocus_pane_g1

0x851d,	// (0x0003fb43) cam4_autofocus_pane_g2

0x8525,	// (0x0003fb4b) cam4_autofocus_pane_g3

0x0002,

0xf980,	// (0x00046fa6) cam4_autofocus_pane_g

0x852d,	// (0x0003fb53) cam4_autofocus_pane_g3_copy1

0x7e33,	// (0x0003f459) video_down_pane_cp_t1

0x7e41,	// (0x0003f467) video_down_pane_cp_t2

0x0001,

0xf905,	// (0x00046f2b) video_down_pane_cp_t

0x20d6,	// (0x000396fc) popup_vitu2_window_ParamLimits

0x20d6,	// (0x000396fc) popup_vitu2_window

0x8535,	// (0x0003fb5b) aid_size_cell2_itu2_ParamLimits

0x8535,	// (0x0003fb5b) aid_size_cell2_itu2

0x855b,	// (0x0003fb81) aid_size_cell_itu2_ParamLimits

0x855b,	// (0x0003fb81) aid_size_cell_itu2

0x85ad,	// (0x0003fbd3) bg_popup_window_pane_cp09_ParamLimits

0x85ad,	// (0x0003fbd3) bg_popup_window_pane_cp09

0x85bb,	// (0x0003fbe1) field_vitu2_entry_pane_ParamLimits

0x85bb,	// (0x0003fbe1) field_vitu2_entry_pane

0x85d5,	// (0x0003fbfb) grid_vitu2_function_pane_ParamLimits

0x85d5,	// (0x0003fbfb) grid_vitu2_function_pane

0x8610,	// (0x0003fc36) grid_vitu2_itu_pane_ParamLimits

0x8610,	// (0x0003fc36) grid_vitu2_itu_pane

0x8675,	// (0x0003fc9b) cell_vitu2_itu_pane_ParamLimits

0x8675,	// (0x0003fc9b) cell_vitu2_itu_pane

0x8697,	// (0x0003fcbd) cell_vitu2_function_pane_ParamLimits

0x8697,	// (0x0003fcbd) cell_vitu2_function_pane

0xd70f,	// (0x00044d35) bg_popup_call_pane_cp08_ParamLimits

0xd70f,	// (0x00044d35) bg_popup_call_pane_cp08

0xd728,	// (0x00044d4e) field_vitu2_entry_pane_g1

0xd734,	// (0x00044d5a) field_vitu2_entry_pane_g2

0x0002,

0xf987,	// (0x00046fad) field_vitu2_entry_pane_g

0xd74e,	// (0x00044d74) field_vitu2_entry_pane_t1_ParamLimits

0xd74e,	// (0x00044d74) field_vitu2_entry_pane_t1

0xd76a,	// (0x00044d90) field_vitu2_entry_pane_t2_ParamLimits

0xd76a,	// (0x00044d90) field_vitu2_entry_pane_t2

0x0001,

0xf98e,	// (0x00046fb4) field_vitu2_entry_pane_t_ParamLimits

0xf98e,	// (0x00046fb4) field_vitu2_entry_pane_t

0x86d6,	// (0x0003fcfc) bg_button_pane_cp010_ParamLimits

0x86d6,	// (0x0003fcfc) bg_button_pane_cp010

0x86e4,	// (0x0003fd0a) cell_vitu2_itu_pane_g1

0x8702,	// (0x0003fd28) cell_vitu2_itu_pane_t1_ParamLimits

0x8702,	// (0x0003fd28) cell_vitu2_itu_pane_t1

0x3070,	// (0x0003a696) cell_vitu2_itu_pane_t2_ParamLimits

0x3070,	// (0x0003a696) cell_vitu2_itu_pane_t2

0x0002,

0xf998,	// (0x00046fbe) cell_vitu2_itu_pane_t_ParamLimits

0xf998,	// (0x00046fbe) cell_vitu2_itu_pane_t

0x20d6,	// (0x000396fc) bg_button_pane_cp011

0x8768,	// (0x0003fd8e) cell_vitu2_function_pane_g1

0x185d,	// (0x00038e83) main_myfav_hc_pane

0x818e,	// (0x0003f7b4) popup_image3_note_pane_ParamLimits

0x818e,	// (0x0003f7b4) popup_image3_note_pane

0x81a8,	// (0x0003f7ce) popup_image3_tool_bar_pane_ParamLimits

0x81a8,	// (0x0003f7ce) popup_image3_tool_bar_pane

0x30f4,	// (0x0003a71a) cell_vitu2_itu_pane_t3_ParamLimits

0x30f4,	// (0x0003a71a) cell_vitu2_itu_pane_t3

0x185d,	// (0x00038e83) bg_popup_trans_pane

0xd78f,	// (0x00044db5) grid_image3_tool_bar_pane

0xd799,	// (0x00044dbf) bg_popup_trans_pane_g1

0xaccc,	// (0x000422f2) bg_popup_trans_pane_g2

0xd7a1,	// (0x00044dc7) bg_popup_trans_pane_g3

0xd7a9,	// (0x00044dcf) bg_popup_trans_pane_g4

0xd7b1,	// (0x00044dd7) bg_popup_trans_pane_g5

0xd7b9,	// (0x00044ddf) bg_popup_trans_pane_g6

0xd7c1,	// (0x00044de7) bg_popup_trans_pane_g7

0xd7c9,	// (0x00044def) bg_popup_trans_pane_g8

0xacac,	// (0x000422d2) bg_popup_trans_pane_g9

0x0008,

0xf99f,	// (0x00046fc5) bg_popup_trans_pane_g

0x3daa,	// (0x0003b3d0) cell_image3_tool_bar_pane_ParamLimits

0x3daa,	// (0x0003b3d0) cell_image3_tool_bar_pane

0xcd86,	// (0x000443ac) cell_image3_tool_bar_pane_g1

0x185d,	// (0x00038e83) bg_popup_trans_pane_cp1

0xd7d1,	// (0x00044df7) popup_image3_note_pane_t1

0xd7df,	// (0x00044e05) popup_image3_note_pane_t2

0xd7ed,	// (0x00044e13) popup_image3_note_pane_t3

0x0002,

0xf9b2,	// (0x00046fd8) popup_image3_note_pane_t

0xd7fb,	// (0x00044e21) popup_image3_note_pane_t3_copy1

0x877c,	// (0x0003fda2) bg_myfav_hc_instruction_pane_ParamLimits

0x877c,	// (0x0003fda2) bg_myfav_hc_instruction_pane

0x878e,	// (0x0003fdb4) cell_myfav_contact_pane_ParamLimits

0x878e,	// (0x0003fdb4) cell_myfav_contact_pane

0x87a8,	// (0x0003fdce) cell_myfav_contact_pane_cp1_ParamLimits

0x87a8,	// (0x0003fdce) cell_myfav_contact_pane_cp1

0x87be,	// (0x0003fde4) cell_myfav_contact_pane_cp2_ParamLimits

0x87be,	// (0x0003fde4) cell_myfav_contact_pane_cp2

0x87d4,	// (0x0003fdfa) cell_myfav_contact_pane_cp3_ParamLimits

0x87d4,	// (0x0003fdfa) cell_myfav_contact_pane_cp3

0x87e9,	// (0x0003fe0f) cell_myfav_contact_pane_cp4_ParamLimits

0x87e9,	// (0x0003fe0f) cell_myfav_contact_pane_cp4

0x87fd,	// (0x0003fe23) cell_myfav_contact_pane_cp5_ParamLimits

0x87fd,	// (0x0003fe23) cell_myfav_contact_pane_cp5

0x8811,	// (0x0003fe37) cell_myfav_contact_pane_cp6_ParamLimits

0x8811,	// (0x0003fe37) cell_myfav_contact_pane_cp6

0x8825,	// (0x0003fe4b) cell_myfav_contact_pane_cp7_ParamLimits

0x8825,	// (0x0003fe4b) cell_myfav_contact_pane_cp7

0xd809,	// (0x00044e2f) listscroll_gen_pane_cp05

0x883d,	// (0x0003fe63) main_myfav_hc_pane_g1_ParamLimits

0x883d,	// (0x0003fe63) main_myfav_hc_pane_g1

0x8853,	// (0x0003fe79) main_myfav_hc_pane_g2_ParamLimits

0x8853,	// (0x0003fe79) main_myfav_hc_pane_g2

0x0002,

0xf9b9,	// (0x00046fdf) main_myfav_hc_pane_g_ParamLimits

0xf9b9,	// (0x00046fdf) main_myfav_hc_pane_g

0x887d,	// (0x0003fea3) main_myfav_hc_pane_t1_ParamLimits

0x887d,	// (0x0003fea3) main_myfav_hc_pane_t1

0xd812,	// (0x00044e38) main_myfav_hc_pane_t2_ParamLimits

0xd812,	// (0x00044e38) main_myfav_hc_pane_t2

0xd824,	// (0x00044e4a) main_myfav_hc_pane_t3_ParamLimits

0xd824,	// (0x00044e4a) main_myfav_hc_pane_t3

0x8892,	// (0x0003feb8) main_myfav_hc_pane_t4_ParamLimits

0x8892,	// (0x0003feb8) main_myfav_hc_pane_t4

0x0004,

0xf9c0,	// (0x00046fe6) main_myfav_hc_pane_t_ParamLimits

0xf9c0,	// (0x00046fe6) main_myfav_hc_pane_t

0xcd86,	// (0x000443ac) bg_myfav_hc_instruction_pane_g1

0xd836,	// (0x00044e5c) cell_myfav_contact_pane_g1_ParamLimits

0xd836,	// (0x00044e5c) cell_myfav_contact_pane_g1

0xd836,	// (0x00044e5c) cell_myfav_contact_pane_g2_ParamLimits

0xd836,	// (0x00044e5c) cell_myfav_contact_pane_g2

0xd842,	// (0x00044e68) cell_myfav_contact_pane_g3_ParamLimits

0xd842,	// (0x00044e68) cell_myfav_contact_pane_g3

0xd08e,	// (0x000446b4) cell_myfav_contact_pane_g4_ParamLimits

0xd08e,	// (0x000446b4) cell_myfav_contact_pane_g4

0xd84f,	// (0x00044e75) cell_myfav_contact_pane_g5_ParamLimits

0xd84f,	// (0x00044e75) cell_myfav_contact_pane_g5

0x0004,

0xf9cb,	// (0x00046ff1) cell_myfav_contact_pane_g_ParamLimits

0xf9cb,	// (0x00046ff1) cell_myfav_contact_pane_g

0x8869,	// (0x0003fe8f) main_myfav_hc_pane_g3_ParamLimits

0x8869,	// (0x0003fe8f) main_myfav_hc_pane_g3

0x389f,	// (0x0003aec5) popup_adpt_find_window

0x88b6,	// (0x0003fedc) afind_page_pane_ParamLimits

0x88b6,	// (0x0003fedc) afind_page_pane

0x88cb,	// (0x0003fef1) aid_size_cell_afind_ParamLimits

0x88cb,	// (0x0003fef1) aid_size_cell_afind

0x88e9,	// (0x0003ff0f) bg_popup_sub_pane_cp09_ParamLimits

0x88e9,	// (0x0003ff0f) bg_popup_sub_pane_cp09

0x88f6,	// (0x0003ff1c) find_pane_cp01_ParamLimits

0x88f6,	// (0x0003ff1c) find_pane_cp01

0xd85b,	// (0x00044e81) grid_afind_control_pane_ParamLimits

0xd85b,	// (0x00044e81) grid_afind_control_pane

0x8903,	// (0x0003ff29) grid_afind_pane_ParamLimits

0x8903,	// (0x0003ff29) grid_afind_pane

0x8921,	// (0x0003ff47) cell_afind_pane_ParamLimits

0x8921,	// (0x0003ff47) cell_afind_pane

0xcd86,	// (0x000443ac) afind_page_pane_g1

0x896e,	// (0x0003ff94) afind_page_pane_g2

0x8977,	// (0x0003ff9d) afind_page_pane_g3

0x0002,

0xf9d6,	// (0x00046ffc) afind_page_pane_g

0x8980,	// (0x0003ffa6) afind_page_pane_t1

0xd86f,	// (0x00044e95) cell_afind_grid_control_pane_ParamLimits

0xd86f,	// (0x00044e95) cell_afind_grid_control_pane

0xd640,	// (0x00044c66) bg_button_pane_cp69_ParamLimits

0xd640,	// (0x00044c66) bg_button_pane_cp69

0x89a0,	// (0x0003ffc6) cell_afind_pane_g1_ParamLimits

0x89a0,	// (0x0003ffc6) cell_afind_pane_g1

0x89ad,	// (0x0003ffd3) cell_afind_pane_t1_ParamLimits

0x89ad,	// (0x0003ffd3) cell_afind_pane_t1

0x4659,	// (0x0003bc7f) bg_button_pane_cp72

0xd87e,	// (0x00044ea4) cell_afind_grid_control_pane_g1

0x5e5e,	// (0x0003d484) aid_image_placing_area_ParamLimits

0x5e5e,	// (0x0003d484) aid_image_placing_area

0xd31a,	// (0x00044940) field_vitu_entry_pane_g1_ParamLimits

0xd31a,	// (0x00044940) field_vitu_entry_pane_g1

0xd326,	// (0x0004494c) field_vitu_entry_pane_g2_ParamLimits

0xd326,	// (0x0004494c) field_vitu_entry_pane_g2

0x0001,

0xf890,	// (0x00046eb6) field_vitu_entry_pane_g_ParamLimits

0xf890,	// (0x00046eb6) field_vitu_entry_pane_g

0x7c68,	// (0x0003f28e) cell_vitu_itu_pane_g1_ParamLimits

0x7caa,	// (0x0003f2d0) cell_vitu_itu_pane_t3_ParamLimits

0x7caa,	// (0x0003f2d0) cell_vitu_itu_pane_t3

0xd5f4,	// (0x00044c1a) mp4_progress_pane_t1_ParamLimits

0xd60b,	// (0x00044c31) mp4_progress_pane_t2_ParamLimits

0xf925,	// (0x00046f4b) mp4_progress_pane_t_ParamLimits

0xd622,	// (0x00044c48) mup_progress_pane_cp04_ParamLimits

0x88a4,	// (0x0003feca) main_myfav_hc_pane_t5_ParamLimits

0x88a4,	// (0x0003feca) main_myfav_hc_pane_t5

0x1877,	// (0x00038e9d) aid_zoom_text_primary

0x389f,	// (0x0003aec5) popup_adpt_find_window_ParamLimits

0x20d6,	// (0x000396fc) main_cam_set_pane

0x8359,	// (0x0003f97f) cam4_zoom_pane_ParamLimits

0x8359,	// (0x0003f97f) cam4_zoom_pane

0x89bf,	// (0x0003ffe5) main_cam_set_pane_g1_ParamLimits

0x89bf,	// (0x0003ffe5) main_cam_set_pane_g1

0x89cd,	// (0x0003fff3) main_cam_set_pane_g2_ParamLimits

0x89cd,	// (0x0003fff3) main_cam_set_pane_g2

0x0001,

0xf9dd,	// (0x00047003) main_cam_set_pane_g_ParamLimits

0xf9dd,	// (0x00047003) main_cam_set_pane_g

0x89ec,	// (0x00040012) main_cam_set_pane_t1_ParamLimits

0x89ec,	// (0x00040012) main_cam_set_pane_t1

0x89fe,	// (0x00040024) main_cset_listscroll_pane_ParamLimits

0x89fe,	// (0x00040024) main_cset_listscroll_pane

0x8a1c,	// (0x00040042) main_cset_slider_pane_ParamLimits

0x8a1c,	// (0x00040042) main_cset_slider_pane

0xd88f,	// (0x00044eb5) main_cset_list_pane_ParamLimits

0xd88f,	// (0x00044eb5) main_cset_list_pane

0xd89f,	// (0x00044ec5) scroll_pane_cp028

0x8a40,	// (0x00040066) aid_area_touch_slider

0x8a5c,	// (0x00040082) cset_slider_pane

0x8a86,	// (0x000400ac) main_cset_slider_pane_g1

0x8a9b,	// (0x000400c1) main_cset_slider_pane_g2

0x0011,

0xf9e2,	// (0x00047008) main_cset_slider_pane_g

0xd8d8,	// (0x00044efe) main_cset_slider_pane_t1

0x8b57,	// (0x0004017d) main_cset_slider_pane_t2

0x8b71,	// (0x00040197) main_cset_slider_pane_t3

0x8b8b,	// (0x000401b1) main_cset_slider_pane_t4

0x8ba5,	// (0x000401cb) main_cset_slider_pane_t5

0x8bbf,	// (0x000401e5) main_cset_slider_pane_t6

0x8bd4,	// (0x000401fa) main_cset_slider_pane_t7

0x000e,

0xfa07,	// (0x0004702d) main_cset_slider_pane_t

0x8cd8,	// (0x000402fe) cset_list_set_pane_ParamLimits

0x8cd8,	// (0x000402fe) cset_list_set_pane

0x8ce9,	// (0x0004030f) aid_position_infowindow_above

0x8cf1,	// (0x00040317) aid_position_infowindow_below

0xd978,	// (0x00044f9e) cset_list_set_pane_g1_ParamLimits

0xd978,	// (0x00044f9e) cset_list_set_pane_g1

0x314c,	// (0x0003a772) cset_list_set_pane_g3_ParamLimits

0x314c,	// (0x0003a772) cset_list_set_pane_g3

0x0001,

0xfa26,	// (0x0004704c) cset_list_set_pane_g_ParamLimits

0xfa26,	// (0x0004704c) cset_list_set_pane_g

0xd984,	// (0x00044faa) cset_list_set_pane_t1_ParamLimits

0xd984,	// (0x00044faa) cset_list_set_pane_t1

0x20d6,	// (0x000396fc) list_highlight_pane_cp021_ParamLimits

0x20d6,	// (0x000396fc) list_highlight_pane_cp021

0xb620,	// (0x00042c46) cset_slider_pane_g1

0xb632,	// (0x00042c58) cset_slider_pane_g2

0xb629,	// (0x00042c4f) cset_slider_pane_g3

0x0002,

0xfa2b,	// (0x00047051) cset_slider_pane_g

0xf03e,	// (0x00046664) aid_area_touch_cam4_zoom

0xf046,	// (0x0004666c) cam4_zoom_cont_pane

0xf04e,	// (0x00046674) cam4_zoom_pane_g1

0xf056,	// (0x0004667c) cam4_zoom_pane_g2

0x8cf9,	// (0x0004031f) cam4_zoom_pane_g3

0x0002,

0xfa32,	// (0x00047058) cam4_zoom_pane_g

0xd999,	// (0x00044fbf) cam4_zoom_cont_pane_g1

0xd9a2,	// (0x00044fc8) cam4_zoom_cont_pane_g2

0xd9ab,	// (0x00044fd1) cam4_zoom_cont_pane_g3

0x0002,

0xfa39,	// (0x0004705f) cam4_zoom_cont_pane_g

0x8213,	// (0x0003f839) call4_image_pane_ParamLimits

0x8213,	// (0x0003f839) call4_image_pane

0xd664,	// (0x00044c8a) call4_windows_conf_pane_ParamLimits

0xd677,	// (0x00044c9d) popup_call4_audio_in_window_ParamLimits

0xd677,	// (0x00044c9d) popup_call4_audio_in_window

0x185d,	// (0x00038e83) bg_popup_call2_act_pane_cp02

0xd6d5,	// (0x00044cfb) call4_list_conf_pane

0xcd86,	// (0x000443ac) call4_image_pane_g1

0xcd86,	// (0x000443ac) call4_image_pane_g2

0x0001,

0xf756,	// (0x00046d7c) call4_image_pane_g

0xd9b4,	// (0x00044fda) list_single_graphic_popup_conf4_pane_ParamLimits

0xd9b4,	// (0x00044fda) list_single_graphic_popup_conf4_pane

0x185d,	// (0x00038e83) list_highlight_pane_cp022

0xd9c7,	// (0x00044fed) list_single_graphic_popup_conf4_pane_g1

0xb277,	// (0x0004289d) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xfa40,	// (0x00047066) list_single_graphic_popup_conf4_pane_g

0xd9cf,	// (0x00044ff5) list_single_graphic_popup_conf4_pane_t1

0x47af,	// (0x0003bdd5) popup_vtel_slider_window_ParamLimits

0x47af,	// (0x0003bdd5) popup_vtel_slider_window

0xd62e,	// (0x00044c54) dialer2_ne_pane_t2_ParamLimits

0xd62e,	// (0x00044c54) dialer2_ne_pane_t2

0x0001,

0xf92a,	// (0x00046f50) dialer2_ne_pane_t_ParamLimits

0xf92a,	// (0x00046f50) dialer2_ne_pane_t

0xcb73,	// (0x00044199) bg_popup_sub_pane_cp010_ParamLimits

0xcb73,	// (0x00044199) bg_popup_sub_pane_cp010

0x8d01,	// (0x00040327) popup_vtel_slider_window_g1_ParamLimits

0x8d01,	// (0x00040327) popup_vtel_slider_window_g1

0x8d14,	// (0x0004033a) popup_vtel_slider_window_g2_ParamLimits

0x8d14,	// (0x0004033a) popup_vtel_slider_window_g2

0x0003,

0xfa45,	// (0x0004706b) popup_vtel_slider_window_g_ParamLimits

0xfa45,	// (0x0004706b) popup_vtel_slider_window_g

0x8d68,	// (0x0004038e) vtel_slider_pane_ParamLimits

0x8d68,	// (0x0004038e) vtel_slider_pane

0x8d8a,	// (0x000403b0) vtel_slider_pane_g1_ParamLimits

0x8d8a,	// (0x000403b0) vtel_slider_pane_g1

0x8d9e,	// (0x000403c4) vtel_slider_pane_g2_ParamLimits

0x8d9e,	// (0x000403c4) vtel_slider_pane_g2

0x8db6,	// (0x000403dc) vtel_slider_pane_g3_ParamLimits

0x8db6,	// (0x000403dc) vtel_slider_pane_g3

0x8d8a,	// (0x000403b0) vtel_slider_pane_g4_ParamLimits

0x8d8a,	// (0x000403b0) vtel_slider_pane_g4

0x8dcc,	// (0x000403f2) vtel_slider_pane_g5_ParamLimits

0x8dcc,	// (0x000403f2) vtel_slider_pane_g5

0x0004,

0xfa4e,	// (0x00047074) vtel_slider_pane_g_ParamLimits

0xfa4e,	// (0x00047074) vtel_slider_pane_g

0x185d,	// (0x00038e83) main_gallery2_pane

0x8587,	// (0x0003fbad) aid_size_row_itut2_dropdow_list_ParamLimits

0x8587,	// (0x0003fbad) aid_size_row_itut2_dropdow_list

0x85f1,	// (0x0003fc17) grid_vitu2_function_top_pane_ParamLimits

0x85f1,	// (0x0003fc17) grid_vitu2_function_top_pane

0x8634,	// (0x0003fc5a) popup_vitu2_dropdown_list_window_ParamLimits

0x8634,	// (0x0003fc5a) popup_vitu2_dropdown_list_window

0x8653,	// (0x0003fc79) popup_vitu2_match_list_window

0x8de2,	// (0x00040408) cell_vitu2_function_top_pane_ParamLimits

0x8de2,	// (0x00040408) cell_vitu2_function_top_pane

0x8e02,	// (0x00040428) cell_vitu2_function_top_pane_cp01_ParamLimits

0x8e02,	// (0x00040428) cell_vitu2_function_top_pane_cp01

0x8e22,	// (0x00040448) cell_vitu2_function_top_wide_pane_ParamLimits

0x8e22,	// (0x00040448) cell_vitu2_function_top_wide_pane

0x20d6,	// (0x000396fc) bg_button_pane_cp012

0x8e40,	// (0x00040466) cell_vitu2_function_top_pane_g1

0xf05e,	// (0x00046684) bg_button_pane_cp013_ParamLimits

0xf05e,	// (0x00046684) bg_button_pane_cp013

0x8e54,	// (0x0004047a) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x8e54,	// (0x0004047a) cell_vitu2_function_top_wide_pane_g1

0x20d6,	// (0x000396fc) bg_popup_sub_pane_cp20

0x8e6c,	// (0x00040492) list_vitu2_match_list_pane

0xd799,	// (0x00044dbf) bg_popup_sub_pane_cp20_g1

0xd7a1,	// (0x00044dc7) bg_popup_sub_pane_cp20_g2

0xaccc,	// (0x000422f2) bg_popup_sub_pane_cp20_g3

0xd7a9,	// (0x00044dcf) bg_popup_sub_pane_cp20_g4

0xacac,	// (0x000422d2) bg_popup_sub_pane_cp20_g5

0xd9eb,	// (0x00045011) bg_popup_sub_pane_cp20_g6

0xd7b9,	// (0x00044ddf) bg_popup_sub_pane_cp20_g7

0xd7c1,	// (0x00044de7) bg_popup_sub_pane_cp20_g8

0xd7c9,	// (0x00044def) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa59,	// (0x0004707f) bg_popup_sub_pane_cp20_g

0xf07a,	// (0x000466a0) list_vitu2_match_list_item_pane_ParamLimits

0xf07a,	// (0x000466a0) list_vitu2_match_list_item_pane

0xf08c,	// (0x000466b2) list_vitu2_match_list_item_pane_t1

0x185d,	// (0x00038e83) bg_popup_sub_pane_cp21

0xb1b5,	// (0x000427db) grid_vitu2_dropdown_list_pane

0x8e8a,	// (0x000404b0) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x8e8a,	// (0x000404b0) cell_vitu2_dropdown_list_char_pane

0x8eab,	// (0x000404d1) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x8eab,	// (0x000404d1) cell_vitu2_dropdown_list_ctrl_pane

0xd9f3,	// (0x00045019) cell_vitu2_dropdown_list_char_pane_g1

0xd9fc,	// (0x00045022) cell_vitu2_dropdown_list_char_pane_g2

0xda05,	// (0x0004502b) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa76,	// (0x0004709c) cell_vitu2_dropdown_list_char_pane_g

0x8ed7,	// (0x000404fd) cell_vitu2_dropdown_list_char_pane_t1

0x8ee5,	// (0x0004050b) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x8ee5,	// (0x0004050b) cell_vitu2_dropdown_list_ctrl_pane_g1

0x8ef2,	// (0x00040518) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x8ef2,	// (0x00040518) cell_vitu2_dropdown_list_ctrl_pane_g2

0x8eff,	// (0x00040525) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x8eff,	// (0x00040525) cell_vitu2_dropdown_list_ctrl_pane_g3

0x8f0c,	// (0x00040532) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x8f0c,	// (0x00040532) cell_vitu2_dropdown_list_ctrl_pane_g4

0xcfb5,	// (0x000445db) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xcfb5,	// (0x000445db) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa7d,	// (0x000470a3) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa7d,	// (0x000470a3) cell_vitu2_dropdown_list_ctrl_pane_g

0x8f28,	// (0x0004054e) aid_size_cell_gallery2_ParamLimits

0x8f28,	// (0x0004054e) aid_size_cell_gallery2

0x8f3e,	// (0x00040564) grid_gallery2_pane_ParamLimits

0x8f3e,	// (0x00040564) grid_gallery2_pane

0x8f50,	// (0x00040576) scroll_pane_cp029_ParamLimits

0x8f50,	// (0x00040576) scroll_pane_cp029

0x8f5c,	// (0x00040582) cell_gallery2_pane_ParamLimits

0x8f5c,	// (0x00040582) cell_gallery2_pane

0xda0e,	// (0x00045034) cell_gallery2_pane_g2

0x8f8e,	// (0x000405b4) cell_gallery2_pane_g3

0xda18,	// (0x0004503e) cell_gallery2_pane_g4

0xda20,	// (0x00045046) cell_gallery2_pane_g5

0xb4dc,	// (0x00042b02) grid_highlight_pane_cp10

0x8653,	// (0x0003fc79) popup_vitu2_match_list_window_ParamLimits

0x8664,	// (0x0003fc8a) popup_vitu2_query_window_ParamLimits

0x8664,	// (0x0003fc8a) popup_vitu2_query_window

0x185d,	// (0x00038e83) bg_vitu2_candi_button_pane

0xd9f3,	// (0x00045019) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd9fc,	// (0x00045022) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xda05,	// (0x0004502b) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x3187,	// (0x0003a7ad) bg_button_pane_cp015

0x8f96,	// (0x000405bc) bg_button_pane_cp016

0x8f9f,	// (0x000405c5) bg_button_pane_cp017

0x20d6,	// (0x000396fc) bg_popup_sub_pane_cp22

0xda28,	// (0x0004504e) popup_vitu2_query_window_g1

0x319c,	// (0x0003a7c2) popup_vitu2_query_window_g2

0x0001,

0xfa88,	// (0x000470ae) popup_vitu2_query_window_g

0x31a8,	// (0x0003a7ce) popup_vitu2_query_window_t1_ParamLimits

0x31a8,	// (0x0003a7ce) popup_vitu2_query_window_t1

0x31d0,	// (0x0003a7f6) popup_vitu2_query_window_t2_ParamLimits

0x31d0,	// (0x0003a7f6) popup_vitu2_query_window_t2

0x31e2,	// (0x0003a808) popup_vitu2_query_window_t3_ParamLimits

0x31e2,	// (0x0003a808) popup_vitu2_query_window_t3

0x8fb8,	// (0x000405de) popup_vitu2_query_window_t4_ParamLimits

0x8fb8,	// (0x000405de) popup_vitu2_query_window_t4

0x8fca,	// (0x000405f0) popup_vitu2_query_window_t5_ParamLimits

0x8fca,	// (0x000405f0) popup_vitu2_query_window_t5

0x0004,

0xfa8d,	// (0x000470b3) popup_vitu2_query_window_t_ParamLimits

0xfa8d,	// (0x000470b3) popup_vitu2_query_window_t

0xd887,	// (0x00044ead) main_cset_text_pane

0x8a40,	// (0x00040066) aid_area_touch_slider_ParamLimits

0x8a5c,	// (0x00040082) cset_slider_pane_ParamLimits

0x8a86,	// (0x000400ac) main_cset_slider_pane_g1_ParamLimits

0x8a9b,	// (0x000400c1) main_cset_slider_pane_g2_ParamLimits

0xd8a8,	// (0x00044ece) main_cset_slider_pane_g3_ParamLimits

0xd8a8,	// (0x00044ece) main_cset_slider_pane_g3

0x8ab0,	// (0x000400d6) main_cset_slider_pane_g4_ParamLimits

0x8ab0,	// (0x000400d6) main_cset_slider_pane_g4

0x8abf,	// (0x000400e5) main_cset_slider_pane_g5_ParamLimits

0x8abf,	// (0x000400e5) main_cset_slider_pane_g5

0x8acb,	// (0x000400f1) main_cset_slider_pane_g6_ParamLimits

0x8acb,	// (0x000400f1) main_cset_slider_pane_g6

0xf9e2,	// (0x00047008) main_cset_slider_pane_g_ParamLimits

0xd8d8,	// (0x00044efe) main_cset_slider_pane_t1_ParamLimits

0x8b57,	// (0x0004017d) main_cset_slider_pane_t2_ParamLimits

0x8b71,	// (0x00040197) main_cset_slider_pane_t3_ParamLimits

0x8b8b,	// (0x000401b1) main_cset_slider_pane_t4_ParamLimits

0x8ba5,	// (0x000401cb) main_cset_slider_pane_t5_ParamLimits

0x8bbf,	// (0x000401e5) main_cset_slider_pane_t6_ParamLimits

0x8bd4,	// (0x000401fa) main_cset_slider_pane_t7_ParamLimits

0x8bfe,	// (0x00040224) main_cset_slider_pane_t8_ParamLimits

0x8bfe,	// (0x00040224) main_cset_slider_pane_t8

0x8c26,	// (0x0004024c) main_cset_slider_pane_t9_ParamLimits

0x8c26,	// (0x0004024c) main_cset_slider_pane_t9

0x8c4e,	// (0x00040274) main_cset_slider_pane_t10_ParamLimits

0x8c4e,	// (0x00040274) main_cset_slider_pane_t10

0x8c76,	// (0x0004029c) main_cset_slider_pane_t11_ParamLimits

0x8c76,	// (0x0004029c) main_cset_slider_pane_t11

0x8c9e,	// (0x000402c4) main_cset_slider_pane_t12_ParamLimits

0x8c9e,	// (0x000402c4) main_cset_slider_pane_t12

0x8cbb,	// (0x000402e1) main_cset_slider_pane_t13_ParamLimits

0x8cbb,	// (0x000402e1) main_cset_slider_pane_t13

0xfa07,	// (0x0004702d) main_cset_slider_pane_t_ParamLimits

0x185d,	// (0x00038e83) bg_popup_sub_pane_cp011

0xda34,	// (0x0004505a) main_cset_text_pane_g1

0xda3c,	// (0x00045062) main_cset_text_pane_t1

0xda4a,	// (0x00045070) main_cset_text_pane_t2

0xda58,	// (0x0004507e) main_cset_text_pane_t3

0xda66,	// (0x0004508c) main_cset_text_pane_t4

0xda74,	// (0x0004509a) main_cset_text_pane_t5

0xda82,	// (0x000450a8) main_cset_text_pane_t6

0xda90,	// (0x000450b6) main_cset_text_pane_t7

0x0006,

0xfa98,	// (0x000470be) main_cset_text_pane_t

0x185d,	// (0x00038e83) main_cam4_burst_pane

0x185d,	// (0x00038e83) main_cam5_pane

0x898e,	// (0x0003ffb4) bg_button_pane_cp019

0x8997,	// (0x0003ffbd) bg_button_pane_cp020

0xd8b4,	// (0x00044eda) main_cset_slider_pane_g7_ParamLimits

0xd8b4,	// (0x00044eda) main_cset_slider_pane_g7

0xd8c0,	// (0x00044ee6) main_cset_slider_pane_g8_ParamLimits

0xd8c0,	// (0x00044ee6) main_cset_slider_pane_g8

0x8adf,	// (0x00040105) main_cset_slider_pane_g9_ParamLimits

0x8adf,	// (0x00040105) main_cset_slider_pane_g9

0x8aeb,	// (0x00040111) main_cset_slider_pane_g10_ParamLimits

0x8aeb,	// (0x00040111) main_cset_slider_pane_g10

0x8af7,	// (0x0004011d) main_cset_slider_pane_g11_ParamLimits

0x8af7,	// (0x0004011d) main_cset_slider_pane_g11

0x8b03,	// (0x00040129) main_cset_slider_pane_g12_ParamLimits

0x8b03,	// (0x00040129) main_cset_slider_pane_g12

0x8b0f,	// (0x00040135) main_cset_slider_pane_g13_ParamLimits

0x8b0f,	// (0x00040135) main_cset_slider_pane_g13

0x8b1b,	// (0x00040141) main_cset_slider_pane_g14_ParamLimits

0x8b1b,	// (0x00040141) main_cset_slider_pane_g14

0x8b27,	// (0x0004014d) main_cset_slider_pane_g15_ParamLimits

0x8b27,	// (0x0004014d) main_cset_slider_pane_g15

0xd906,	// (0x00044f2c) main_cset_slider_pane_t14_ParamLimits

0xd906,	// (0x00044f2c) main_cset_slider_pane_t14

0xd93f,	// (0x00044f65) main_cset_slider_pane_t15_ParamLimits

0xd93f,	// (0x00044f65) main_cset_slider_pane_t15

0x8fdc,	// (0x00040602) aid_cam4_burst_size_cell_ParamLimits

0x8fdc,	// (0x00040602) aid_cam4_burst_size_cell

0x8ffc,	// (0x00040622) grid_cam4_burst_pane_ParamLimits

0x8ffc,	// (0x00040622) grid_cam4_burst_pane

0x9022,	// (0x00040648) linegrid_cam4_burst_pane_ParamLimits

0x9022,	// (0x00040648) linegrid_cam4_burst_pane

0x9044,	// (0x0004066a) scroll_pane_cp30_ParamLimits

0x9044,	// (0x0004066a) scroll_pane_cp30

0x9050,	// (0x00040676) cell_cam4_burst_pane_ParamLimits

0x9050,	// (0x00040676) cell_cam4_burst_pane

0xda9e,	// (0x000450c4) linegrid_cam4_burst_pane_g1_ParamLimits

0xda9e,	// (0x000450c4) linegrid_cam4_burst_pane_g1

0x9097,	// (0x000406bd) linegrid_cam4_burst_pane_g2_ParamLimits

0x9097,	// (0x000406bd) linegrid_cam4_burst_pane_g2

0xdaab,	// (0x000450d1) linegrid_cam4_burst_pane_g3_ParamLimits

0xdaab,	// (0x000450d1) linegrid_cam4_burst_pane_g3

0x0002,

0xfaa7,	// (0x000470cd) linegrid_cam4_burst_pane_g_ParamLimits

0xfaa7,	// (0x000470cd) linegrid_cam4_burst_pane_g

0x90a8,	// (0x000406ce) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x90a8,	// (0x000406ce) linegrid_cam4_burst_pane_g3_copy1

0xdab8,	// (0x000450de) linegrid_cam4_burst_pane_g4_ParamLimits

0xdab8,	// (0x000450de) linegrid_cam4_burst_pane_g4

0x90c2,	// (0x000406e8) linegrid_cam4_burst_pane_g5_ParamLimits

0x90c2,	// (0x000406e8) linegrid_cam4_burst_pane_g5

0x90d3,	// (0x000406f9) linegrid_cam4_burst_pane_g6_ParamLimits

0x90d3,	// (0x000406f9) linegrid_cam4_burst_pane_g6

0xdac5,	// (0x000450eb) linegrid_cam4_burst_pane_g7_ParamLimits

0xdac5,	// (0x000450eb) linegrid_cam4_burst_pane_g7

0x90e4,	// (0x0004070a) cell_cam4_burst_pane_g1

0xdade,	// (0x00045104) main_cam5_pane_t1_ParamLimits

0xdade,	// (0x00045104) main_cam5_pane_t1

0xdaf0,	// (0x00045116) main_cam5_pane_t2_ParamLimits

0xdaf0,	// (0x00045116) main_cam5_pane_t2

0xdb02,	// (0x00045128) main_cam5_pane_t3_ParamLimits

0xdb02,	// (0x00045128) main_cam5_pane_t3

0xdb14,	// (0x0004513a) main_cam5_pane_t4_ParamLimits

0xdb14,	// (0x0004513a) main_cam5_pane_t4

0xdb2a,	// (0x00045150) main_cam5_pane_t5_ParamLimits

0xdb2a,	// (0x00045150) main_cam5_pane_t5

0xdb3c,	// (0x00045162) main_cam5_pane_t6_ParamLimits

0xdb3c,	// (0x00045162) main_cam5_pane_t6

0xdb4e,	// (0x00045174) main_cam5_pane_t7_ParamLimits

0xdb4e,	// (0x00045174) main_cam5_pane_t7

0xdb60,	// (0x00045186) main_cam5_pane_t8_ParamLimits

0xdb60,	// (0x00045186) main_cam5_pane_t8

0xdb7c,	// (0x000451a2) main_cam5_pane_t9_ParamLimits

0xdb7c,	// (0x000451a2) main_cam5_pane_t9

0xdb8e,	// (0x000451b4) main_cam5_pane_t10_ParamLimits

0xdb8e,	// (0x000451b4) main_cam5_pane_t10

0xdba0,	// (0x000451c6) main_cam5_pane_t11_ParamLimits

0xdba0,	// (0x000451c6) main_cam5_pane_t11

0xdbb2,	// (0x000451d8) main_cam5_pane_t12_ParamLimits

0xdbb2,	// (0x000451d8) main_cam5_pane_t12

0xdbc7,	// (0x000451ed) main_cam5_pane_t13_ParamLimits

0xdbc7,	// (0x000451ed) main_cam5_pane_t13

0x000c,

0xfab3,	// (0x000470d9) main_cam5_pane_t_ParamLimits

0xfab3,	// (0x000470d9) main_cam5_pane_t

0x38fd,	// (0x0003af23) popup_scut_keymap_window_ParamLimits

0x38fd,	// (0x0003af23) popup_scut_keymap_window

0x90f9,	// (0x0004071f) aid_size_cell_brow_shortcut

0xb4dc,	// (0x00042b02) bg_popup_window_pane_cp010

0x9105,	// (0x0004072b) grid_scut_pane

0x910f,	// (0x00040735) cell_scut_pane_ParamLimits

0x910f,	// (0x00040735) cell_scut_pane

0x9124,	// (0x0004074a) cell_scut_pane_g1

0xdbe4,	// (0x0004520a) cell_scut_pane_t1

0xdbf3,	// (0x00045219) cell_scut_pane_t2

0x912d,	// (0x00040753) cell_scut_pane_t3

0x0002,

0xface,	// (0x000470f4) cell_scut_pane_t

0x71f7,	// (0x0003e81d) main_mup3_pane_g8_ParamLimits

0x71f7,	// (0x0003e81d) main_mup3_pane_g8

0x859b,	// (0x0003fbc1) area_vitu2_query_pane_ParamLimits

0x859b,	// (0x0003fbc1) area_vitu2_query_pane

0x318f,	// (0x0003a7b5) input_focus_pane_cp08

0xdc02,	// (0x00045228) area_vitu2_query_pane_g1

0x320a,	// (0x0003a830) area_vitu2_query_pane_g2

0x0001,

0xfad5,	// (0x000470fb) area_vitu2_query_pane_g

0x913b,	// (0x00040761) area_vitu2_query_pane_t1_ParamLimits

0x913b,	// (0x00040761) area_vitu2_query_pane_t1

0x914d,	// (0x00040773) area_vitu2_query_pane_t2_ParamLimits

0x914d,	// (0x00040773) area_vitu2_query_pane_t2

0x3219,	// (0x0003a83f) area_vitu2_query_pane_t3_ParamLimits

0x3219,	// (0x0003a83f) area_vitu2_query_pane_t3

0xdc0e,	// (0x00045234) area_vitu2_query_pane_t4_ParamLimits

0xdc0e,	// (0x00045234) area_vitu2_query_pane_t4

0xdc36,	// (0x0004525c) area_vitu2_query_pane_t5_ParamLimits

0xdc36,	// (0x0004525c) area_vitu2_query_pane_t5

0xdc5e,	// (0x00045284) area_vitu2_query_pane_t6_ParamLimits

0xdc5e,	// (0x00045284) area_vitu2_query_pane_t6

0x0006,

0xfada,	// (0x00047100) area_vitu2_query_pane_t_ParamLimits

0xfada,	// (0x00047100) area_vitu2_query_pane_t

0x915f,	// (0x00040785) bg_button_pane_cp018

0x916c,	// (0x00040792) bg_button_pane_cp021

0x3241,	// (0x0003a867) bg_button_pane_cp022

0x3250,	// (0x0003a876) input_focus_pane_cp09

0x5655,	// (0x0003cc7b) aid_size_touch_mv_arrow_left

0xb3b5,	// (0x000429db) aid_size_touch_mv_arrow_right

0x8b3f,	// (0x00040165) main_cset_slider_pane_g16_ParamLimits

0x8b3f,	// (0x00040165) main_cset_slider_pane_g16

0x8b4b,	// (0x00040171) main_cset_slider_pane_g17_ParamLimits

0x8b4b,	// (0x00040171) main_cset_slider_pane_g17

0x90e4,	// (0x0004070a) cell_cam4_burst_pane_g1_ParamLimits

0x185d,	// (0x00038e83) compa_mode_pane

0x8d24,	// (0x0004034a) popup_vtel_slider_window_g3_ParamLimits

0x8d24,	// (0x0004034a) popup_vtel_slider_window_g3

0x8d3b,	// (0x00040361) popup_vtel_slider_window_g4_ParamLimits

0x8d3b,	// (0x00040361) popup_vtel_slider_window_g4

0x8d52,	// (0x00040378) popup_vtel_slider_window_t1_ParamLimits

0x8d52,	// (0x00040378) popup_vtel_slider_window_t1

0x185d,	// (0x00038e83) main_cl_pane

0xc971,	// (0x00043f97) popup_imed_adjust2_window_ParamLimits

0xc94b,	// (0x00043f71) bg_tb_trans_pane_cp05_ParamLimits

0xd24f,	// (0x00044875) popup_imed_adjust2_window_g1_ParamLimits

0xd25e,	// (0x00044884) popup_imed_adjust2_window_g2_ParamLimits

0xd25e,	// (0x00044884) popup_imed_adjust2_window_g2

0xd26a,	// (0x00044890) popup_imed_adjust2_window_g3_ParamLimits

0xd26a,	// (0x00044890) popup_imed_adjust2_window_g3

0x0002,

0xf854,	// (0x00046e7a) popup_imed_adjust2_window_g_ParamLimits

0xf854,	// (0x00046e7a) popup_imed_adjust2_window_g

0xd276,	// (0x0004489c) popup_imed_adjust2_window_t1_ParamLimits

0xd28e,	// (0x000448b4) slider_imed_adjust_pane_ParamLimits

0xd2a2,	// (0x000448c8) slider_imed_adjust_pane_g1_ParamLimits

0xd2b2,	// (0x000448d8) slider_imed_adjust_pane_g2_ParamLimits

0xd2c2,	// (0x000448e8) slider_imed_adjust_pane_g3_ParamLimits

0xd2d3,	// (0x000448f9) slider_imed_adjust_pane_g4_ParamLimits

0xf85b,	// (0x00046e81) slider_imed_adjust_pane_g_ParamLimits

0x830a,	// (0x0003f930) aid_touch_area_cam4_ParamLimits

0x830a,	// (0x0003f930) aid_touch_area_cam4

0xf01e,	// (0x00046644) battery_pane_cp01

0x83ac,	// (0x0003f9d2) main_camera4_pane_g6_ParamLimits

0x83ac,	// (0x0003f9d2) main_camera4_pane_g6

0x83cd,	// (0x0003f9f3) main_camera4_pane_t2_ParamLimits

0x83cd,	// (0x0003f9f3) main_camera4_pane_t2

0x0001,

0xf95e,	// (0x00046f84) main_camera4_pane_t_ParamLimits

0xf95e,	// (0x00046f84) main_camera4_pane_t

0x8420,	// (0x0003fa46) aid_touch_area_vid4_ParamLimits

0x8420,	// (0x0003fa46) aid_touch_area_vid4

0x8462,	// (0x0003fa88) main_video4_pane_g5_ParamLimits

0x8462,	// (0x0003fa88) main_video4_pane_g5

0x8483,	// (0x0003faa9) vid4_progress_pane_ParamLimits

0x8483,	// (0x0003faa9) vid4_progress_pane

0xd8cc,	// (0x00044ef2) main_cset_slider_pane_g18_ParamLimits

0xd8cc,	// (0x00044ef2) main_cset_slider_pane_g18

0xdad2,	// (0x000450f8) cell_cam4_burst_pane_g2_ParamLimits

0xdad2,	// (0x000450f8) cell_cam4_burst_pane_g2

0x0001,

0xfaae,	// (0x000470d4) cell_cam4_burst_pane_g_ParamLimits

0xfaae,	// (0x000470d4) cell_cam4_burst_pane_g

0x1fe3,	// (0x00039609) bg_cl_pane_ParamLimits

0x1fe3,	// (0x00039609) bg_cl_pane

0x9178,	// (0x0004079e) cl_header_pane_ParamLimits

0x9178,	// (0x0004079e) cl_header_pane

0x918c,	// (0x000407b2) cl_listscroll_pane_ParamLimits

0x918c,	// (0x000407b2) cl_listscroll_pane

0xdcaa,	// (0x000452d0) bg_cl_pane_g1

0xdcb2,	// (0x000452d8) bg_cl_pane_g2

0xdcba,	// (0x000452e0) bg_cl_pane_g3

0xdcc2,	// (0x000452e8) bg_cl_pane_g4

0xdcca,	// (0x000452f0) bg_cl_pane_g5

0xdcd2,	// (0x000452f8) bg_cl_pane_g6

0xdcda,	// (0x00045300) bg_cl_pane_g7

0xdce2,	// (0x00045308) bg_cl_pane_g8

0xdcea,	// (0x00045310) bg_cl_pane_g9

0x0008,

0xfae9,	// (0x0004710f) bg_cl_pane_g

0x919c,	// (0x000407c2) aid_height_cl_leading_ParamLimits

0x919c,	// (0x000407c2) aid_height_cl_leading

0x91a8,	// (0x000407ce) aid_height_cl_text_ParamLimits

0x91a8,	// (0x000407ce) aid_height_cl_text

0x20d6,	// (0x000396fc) bg_cl_header_pane_ParamLimits

0x20d6,	// (0x000396fc) bg_cl_header_pane

0x91c7,	// (0x000407ed) cl_header_pane_g1_ParamLimits

0x91c7,	// (0x000407ed) cl_header_pane_g1

0x91dd,	// (0x00040803) cl_header_pane_t1_ParamLimits

0x91dd,	// (0x00040803) cl_header_pane_t1

0xdcf2,	// (0x00045318) cl_list_pane

0xdcfb,	// (0x00045321) hc_scroll_pane_cp01

0xacac,	// (0x000422d2) bg_cl_header_pane_g1

0xd799,	// (0x00044dbf) bg_cl_header_pane_g2

0xaccc,	// (0x000422f2) bg_cl_header_pane_g3

0xd7a9,	// (0x00044dcf) bg_cl_header_pane_g4

0xd7a1,	// (0x00044dc7) bg_cl_header_pane_g5

0xd9eb,	// (0x00045011) bg_cl_header_pane_g6

0xd7c1,	// (0x00044de7) bg_cl_header_pane_g7

0xd7c9,	// (0x00044def) bg_cl_header_pane_g8

0xd7b9,	// (0x00044ddf) bg_cl_header_pane_g9

0x0008,

0xfafc,	// (0x00047122) bg_cl_header_pane_g

0x91f6,	// (0x0004081c) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x91f6,	// (0x0004081c) hc_cl_list_double_graphic_heading_pane

0x9206,	// (0x0004082c) hc_cl_list_single_graphic_pane_ParamLimits

0x9206,	// (0x0004082c) hc_cl_list_single_graphic_pane

0x9219,	// (0x0004083f) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x9219,	// (0x0004083f) hc_cl_list_single_graphic_pane_g1

0x9225,	// (0x0004084b) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x9225,	// (0x0004084b) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfb0f,	// (0x00047135) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfb0f,	// (0x00047135) hc_cl_list_single_graphic_pane_g

0x9239,	// (0x0004085f) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x9239,	// (0x0004085f) hc_cl_list_single_graphic_pane_t1

0x9219,	// (0x0004083f) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x9219,	// (0x0004083f) hc_cl_list_double_graphic_heading_pane_g1

0x924e,	// (0x00040874) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x924e,	// (0x00040874) hc_cl_list_double_graphic_heading_pane_g2

0x9262,	// (0x00040888) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x9262,	// (0x00040888) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfb14,	// (0x0004713a) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfb14,	// (0x0004713a) hc_cl_list_double_graphic_heading_pane_g

0x9276,	// (0x0004089c) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x9276,	// (0x0004089c) hc_cl_list_double_graphic_heading_pane_t1

0x928b,	// (0x000408b1) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x928b,	// (0x000408b1) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfb1b,	// (0x00047141) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfb1b,	// (0x00047141) hc_cl_list_double_graphic_heading_pane_t

0xf09a,	// (0x000466c0) vid4_progress_pane_g1

0xf0a9,	// (0x000466cf) vid4_progress_pane_g2

0xf0b8,	// (0x000466de) vid4_progress_pane_g3

0xf0c7,	// (0x000466ed) vid4_progress_pane_g4

0x0004,

0xfb20,	// (0x00047146) vid4_progress_pane_g

0xf0d3,	// (0x000466f9) vid4_progress_pane_t1

0xf0e9,	// (0x0004670f) vid4_progress_pane_t2

0x0002,

0xfb2b,	// (0x00047151) vid4_progress_pane_t

0xf113,	// (0x00046739) wait_bar_pane_cp07

0xcb81,	// (0x000441a7) blid_firmament_pane_ParamLimits

0xcbc2,	// (0x000441e8) popup_blid_sat_info2_window_g1

0xcbe6,	// (0x0004420c) popup_blid_sat_info2_window_t3

0xcbf4,	// (0x0004421a) popup_blid_sat_info2_window_t4

0xcc02,	// (0x00044228) popup_blid_sat_info2_window_t5

0xcc10,	// (0x00044236) popup_blid_sat_info2_window_t6

0xcc20,	// (0x00044246) popup_blid_sat_info2_window_t7

0xcc2e,	// (0x00044254) popup_blid_sat_info2_window_t8

0xcc3c,	// (0x00044262) popup_blid_sat_info2_window_t9

0xcc4a,	// (0x00044270) popup_blid_sat_info2_window_t10

0xcd06,	// (0x0004432c) aid_firma_cardinal_ParamLimits

0xcd1a,	// (0x00044340) blid_firmament_pane_t1_ParamLimits

0xcd31,	// (0x00044357) blid_firmament_pane_t2_ParamLimits

0xcd48,	// (0x0004436e) blid_firmament_pane_t3_ParamLimits

0xcd5f,	// (0x00044385) blid_firmament_pane_t4_ParamLimits

0xf74d,	// (0x00046d73) blid_firmament_pane_t_ParamLimits

0xcd76,	// (0x0004439c) blid_sat_info_pane_ParamLimits

0x20d6,	// (0x000396fc) main_cam_set_pane_ParamLimits

0x7a4e,	// (0x0003f074) aid_size_cell_colour_35_ParamLimits

0x7a6e,	// (0x0003f094) aid_size_cell_colour_112_ParamLimits

0x7a8e,	// (0x0003f0b4) aid_size_cell_effect_ParamLimits

0xc94b,	// (0x00043f71) bg_tb_trans_pane_cp02_ParamLimits

0xaf23,	// (0x00042549) heading_imed_pane_ParamLimits

0x7aae,	// (0x0003f0d4) listscroll_imed_pane_ParamLimits

0xbf3d,	// (0x00043563) popup_call2_audio_first_window_g5_ParamLimits

0xbf3d,	// (0x00043563) popup_call2_audio_first_window_g5

0x7fcb,	// (0x0003f5f1) aid_size_touch_image3_arrow_left_ParamLimits

0x7fcb,	// (0x0003f5f1) aid_size_touch_image3_arrow_left

0x7feb,	// (0x0003f611) aid_size_touch_image3_arrow_right_ParamLimits

0x7feb,	// (0x0003f611) aid_size_touch_image3_arrow_right

0xf0fe,	// (0x00046724) vid4_progress_pane_t3

0x7d82,	// (0x0003f3a8) main_hwr_training_symbol_option_pane_ParamLimits

0x7d82,	// (0x0003f3a8) main_hwr_training_symbol_option_pane

0xd52e,	// (0x00044b54) popup_hwr_training_preview_window_ParamLimits

0xd52e,	// (0x00044b54) popup_hwr_training_preview_window

0x7d9e,	// (0x0003f3c4) hwr_training_navi_pane_g5_ParamLimits

0x7d9e,	// (0x0003f3c4) hwr_training_navi_pane_g5

0xd787,	// (0x00044dad) popup_char_count_window

0x20d6,	// (0x000396fc) bg_popup_sub_pane_cp20_ParamLimits

0x8e6c,	// (0x00040492) list_vitu2_match_list_pane_ParamLimits

0x8e7b,	// (0x000404a1) vitu2_page_scroll_pane_ParamLimits

0x8e7b,	// (0x000404a1) vitu2_page_scroll_pane

0xdd5e,	// (0x00045384) list_single_hwr_training_symbol_option_pane_ParamLimits

0xdd5e,	// (0x00045384) list_single_hwr_training_symbol_option_pane

0xdd71,	// (0x00045397) list_single_hwr_training_symbol_option_pane_g1

0xdd79,	// (0x0004539f) list_single_hwr_training_symbol_option_pane_t1

0xdd87,	// (0x000453ad) bg_button_pane_cp023

0xdd90,	// (0x000453b6) bg_button_pane_cp024

0x92a0,	// (0x000408c6) vitu2_page_scroll_pane_g1

0x92a8,	// (0x000408ce) vitu2_page_scroll_pane_g2

0x0001,

0xfb32,	// (0x00047158) vitu2_page_scroll_pane_g

0x92b0,	// (0x000408d6) vitu2_page_scroll_pane_t1

0xcae1,	// (0x00044107) popup_char_count_window_g1

0xddc3,	// (0x000453e9) popup_char_count_window_g2

0xddcc,	// (0x000453f2) popup_char_count_window_g3

0x0002,

0xfb37,	// (0x0004715d) popup_char_count_window_g

0xddd5,	// (0x000453fb) popup_char_count_window_t1

0x185d,	// (0x00038e83) main_vded2_pane

0xd23d,	// (0x00044863) aid_size_cell_imed_line

0xd247,	// (0x0004486d) grid_imed_line_width_pane

0x84f7,	// (0x0003fb1d) vid4_indicators_pane_g4

0xdde3,	// (0x00045409) cell_imed_line_width_pane_ParamLimits

0xdde3,	// (0x00045409) cell_imed_line_width_pane

0xddf5,	// (0x0004541b) cell_imed_line_width_pane_g1

0xddfe,	// (0x00045424) cell_imed_line_width_pane_g2

0x0001,

0xfb3e,	// (0x00047164) cell_imed_line_width_pane_g

0x92bf,	// (0x000408e5) main_vded2_pane_g1_ParamLimits

0x92bf,	// (0x000408e5) main_vded2_pane_g1

0x92d5,	// (0x000408fb) main_vded2_pane_g2_ParamLimits

0x92d5,	// (0x000408fb) main_vded2_pane_g2

0x0001,

0xfb43,	// (0x00047169) main_vded2_pane_g_ParamLimits

0xfb43,	// (0x00047169) main_vded2_pane_g

0x92e5,	// (0x0004090b) vded2_slider_pane_ParamLimits

0x92e5,	// (0x0004090b) vded2_slider_pane

0x92f8,	// (0x0004091e) aid_size_touch_vded2_end

0x9300,	// (0x00040926) aid_size_touch_vded2_playhead

0x9308,	// (0x0004092e) aid_size_touch_vded2_start

0x9310,	// (0x00040936) vded2_slider_bg_pane

0x9319,	// (0x0004093f) vded2_slider_pane_g1

0x9322,	// (0x00040948) vded2_slider_pane_g2

0x932a,	// (0x00040950) vded2_slider_pane_g3

0x0002,

0xfb48,	// (0x0004716e) vded2_slider_pane_g

0x9333,	// (0x00040959) vded2_slider_bg_pane_g1

0x933c,	// (0x00040962) vded2_slider_bg_pane_g2

0x9345,	// (0x0004096b) vded2_slider_bg_pane_g3

0x0002,

0xfb4f,	// (0x00047175) vded2_slider_bg_pane_g

0x5b0d,	// (0x0003d133) aid_postcard_touch_down_pane_ParamLimits

0x5b0d,	// (0x0003d133) aid_postcard_touch_down_pane

0x5b1f,	// (0x0003d145) aid_postcard_touch_up_pane_ParamLimits

0x5b1f,	// (0x0003d145) aid_postcard_touch_up_pane

0x185d,	// (0x00038e83) main_blid2_pane

0xc959,	// (0x00043f7f) popup_blid2_search_window

0x185d,	// (0x00038e83) blid2_gps_pane

0x185d,	// (0x00038e83) blid2_navig_pane

0x185d,	// (0x00038e83) blid2_search_pane

0x185d,	// (0x00038e83) blid2_tripm_pane

0x934e,	// (0x00040974) blid2_search_pane_g1_ParamLimits

0x934e,	// (0x00040974) blid2_search_pane_g1

0x9362,	// (0x00040988) blid2_search_pane_t1_ParamLimits

0x9362,	// (0x00040988) blid2_search_pane_t1

0x9374,	// (0x0004099a) aid_size_cell_blid2_gps_ParamLimits

0x9374,	// (0x0004099a) aid_size_cell_blid2_gps

0x938c,	// (0x000409b2) blid2_gps_pane_g1_ParamLimits

0x938c,	// (0x000409b2) blid2_gps_pane_g1

0x93a0,	// (0x000409c6) grid_blid2_satellite_pane_ParamLimits

0x93a0,	// (0x000409c6) grid_blid2_satellite_pane

0x93b4,	// (0x000409da) blid2_navig_pane_g1_ParamLimits

0x93b4,	// (0x000409da) blid2_navig_pane_g1

0x93c0,	// (0x000409e6) blid2_navig_pane_t1_ParamLimits

0x93c0,	// (0x000409e6) blid2_navig_pane_t1

0x93d9,	// (0x000409ff) blid2_navig_pane_t2_ParamLimits

0x93d9,	// (0x000409ff) blid2_navig_pane_t2

0x0001,

0xfb56,	// (0x0004717c) blid2_navig_pane_t_ParamLimits

0xfb56,	// (0x0004717c) blid2_navig_pane_t

0x93f2,	// (0x00040a18) blid2_navig_ring_pane_ParamLimits

0x93f2,	// (0x00040a18) blid2_navig_ring_pane

0x9407,	// (0x00040a2d) blid2_speed_pane_ParamLimits

0x9407,	// (0x00040a2d) blid2_speed_pane

0x9413,	// (0x00040a39) blid2_tripm_pane_g1_ParamLimits

0x9413,	// (0x00040a39) blid2_tripm_pane_g1

0x9428,	// (0x00040a4e) blid2_tripm_pane_g2_ParamLimits

0x9428,	// (0x00040a4e) blid2_tripm_pane_g2

0x943c,	// (0x00040a62) blid2_tripm_pane_g3_ParamLimits

0x943c,	// (0x00040a62) blid2_tripm_pane_g3

0x9450,	// (0x00040a76) blid2_tripm_pane_g4_ParamLimits

0x9450,	// (0x00040a76) blid2_tripm_pane_g4

0x9464,	// (0x00040a8a) blid2_tripm_pane_g5_ParamLimits

0x9464,	// (0x00040a8a) blid2_tripm_pane_g5

0x0005,

0xfb5b,	// (0x00047181) blid2_tripm_pane_g_ParamLimits

0xfb5b,	// (0x00047181) blid2_tripm_pane_g

0x9486,	// (0x00040aac) blid2_tripm_pane_t1_ParamLimits

0x9486,	// (0x00040aac) blid2_tripm_pane_t1

0x949d,	// (0x00040ac3) blid2_tripm_pane_t2_ParamLimits

0x949d,	// (0x00040ac3) blid2_tripm_pane_t2

0x94b4,	// (0x00040ada) blid2_tripm_pane_t3_ParamLimits

0x94b4,	// (0x00040ada) blid2_tripm_pane_t3

0x0003,

0xfb68,	// (0x0004718e) blid2_tripm_pane_t_ParamLimits

0xfb68,	// (0x0004718e) blid2_tripm_pane_t

0x94f7,	// (0x00040b1d) cell_blid2_satellite_pane_ParamLimits

0x94f7,	// (0x00040b1d) cell_blid2_satellite_pane

0x950f,	// (0x00040b35) cell_blid2_satellite_pane_g1

0xde06,	// (0x0004542c) cell_blid2_satellite_pane_t1

0xcd86,	// (0x000443ac) blid2_speed_pane_g1

0xde14,	// (0x0004543a) blid2_speed_pane_t1

0xde22,	// (0x00045448) blid2_speed_pane_t2

0x0001,

0xfb71,	// (0x00047197) blid2_speed_pane_t

0xcd86,	// (0x000443ac) blid2_navig_ring_pane_g1

0x9518,	// (0x00040b3e) blid2_navig_ring_pane_g2

0x9520,	// (0x00040b46) blid2_navig_ring_pane_g3

0x9528,	// (0x00040b4e) blid2_navig_ring_pane_g4

0x9530,	// (0x00040b56) blid2_navig_ring_pane_g5

0x0004,

0xfb76,	// (0x0004719c) blid2_navig_ring_pane_g

0x185d,	// (0x00038e83) bg_popup_window_pane_cp011

0xde30,	// (0x00045456) popup_blid2_search_window_g1

0xde38,	// (0x0004545e) popup_blid2_search_window_t1

0xde46,	// (0x0004546c) popup_blid2_search_window_t2

0x0001,

0xfb81,	// (0x000471a7) popup_blid2_search_window_t

0x4a20,	// (0x0003c046) main_browser_pane_g1

0x1fe3,	// (0x00039609) main_browser_pane_ParamLimits

0x20d6,	// (0x000396fc) bg_button_pane_cp011_ParamLimits

0x8768,	// (0x0003fd8e) cell_vitu2_function_pane_g1_ParamLimits

0x20d6,	// (0x000396fc) bg_popup_sub_pane_cp22_ParamLimits

0x318f,	// (0x0003a7b5) input_focus_pane_cp08_ParamLimits

0x8fa8,	// (0x000405ce) popup_vitu2_query_button_pane_ParamLimits

0x8fa8,	// (0x000405ce) popup_vitu2_query_button_pane

0x3187,	// (0x0003a7ad) popup_vitu2_query_input_button_pane

0xda28,	// (0x0004504e) popup_vitu2_query_window_g1_ParamLimits

0x319c,	// (0x0003a7c2) popup_vitu2_query_window_g2_ParamLimits

0xfa88,	// (0x000470ae) popup_vitu2_query_window_g_ParamLimits

0x185d,	// (0x00038e83) bg_button_pane_cp026

0x9538,	// (0x00040b5e) popup_vitu2_query_input_button_pane_g1

0x185d,	// (0x00038e83) bg_button_pane_cp025

0xde54,	// (0x0004547a) popup_vitu2_query_button_pane_t1

0x6f60,	// (0x0003e586) main_mp3_pane_t6

0x6f6e,	// (0x0003e594) popup_slider_window_cp01

0xf02e,	// (0x00046654) cam4_battery_pane

0xf02e,	// (0x00046654) cam4_battery_pane_cp02

0xf02e,	// (0x00046654) cam4_battery_pane_cp01

0xf02e,	// (0x00046654) cam4_battery_pane_cp03

0xcd86,	// (0x000443ac) cam4_battery_pane_g1

0xde62,	// (0x00045488) cam4_battery_pane_g2

0x0001,

0xfb86,	// (0x000471ac) cam4_battery_pane_g

0xcc58,	// (0x0004427e) popup_blid_sat_info2_window_t11

0x5655,	// (0x0003cc7b) aid_size_touch_mv_arrow_left_ParamLimits

0xb3b5,	// (0x000429db) aid_size_touch_mv_arrow_right_ParamLimits

0xb3ed,	// (0x00042a13) navi_pane_g1_ParamLimits

0xb3f9,	// (0x00042a1f) navi_pane_g2_ParamLimits

0x566e,	// (0x0003cc94) navi_pane_g3_ParamLimits

0xf44c,	// (0x00046a72) navi_pane_g_ParamLimits

0x5693,	// (0x0003ccb9) navi_pane_mv_t1_ParamLimits

0x7aba,	// (0x0003f0e0) grid_imed_effect_pane_ParamLimits

0x46f8,	// (0x0003bd1e) aid_placing_vt_slider_lsc

0x4700,	// (0x0003bd26) aid_placing_vt_slider_prt

0x20d6,	// (0x000396fc) bg_tb_trans_pane_cp01_ParamLimits

0xced5,	// (0x000444fb) popup_image_details_window_g1_ParamLimits

0xcee8,	// (0x0004450e) popup_image_details_window_g2_ParamLimits

0xcefd,	// (0x00044523) popup_image_details_window_g3_ParamLimits

0xcefd,	// (0x00044523) popup_image_details_window_g3

0xf792,	// (0x00046db8) popup_image_details_window_g_ParamLimits

0xcf11,	// (0x00044537) popup_image_details_window_t1_ParamLimits

0xcf23,	// (0x00044549) popup_image_details_window_t2_ParamLimits

0xcf3c,	// (0x00044562) popup_image_details_window_t3_ParamLimits

0xcf50,	// (0x00044576) popup_image_details_window_t4_ParamLimits

0xcf6b,	// (0x00044591) popup_image_details_window_t5_ParamLimits

0xf799,	// (0x00046dbf) popup_image_details_window_t_ParamLimits

0x91b4,	// (0x000407da) cl_header_name_pane_ParamLimits

0x91b4,	// (0x000407da) cl_header_name_pane

0x9540,	// (0x00040b66) cl_header_name_pane_t1_ParamLimits

0x9540,	// (0x00040b66) cl_header_name_pane_t1

0x9561,	// (0x00040b87) cl_header_name_pane_t2_ParamLimits

0x9561,	// (0x00040b87) cl_header_name_pane_t2

0x95a3,	// (0x00040bc9) cl_header_name_pane_t3_ParamLimits

0x95a3,	// (0x00040bc9) cl_header_name_pane_t3

0x0002,

0xfb8b,	// (0x000471b1) cl_header_name_pane_t_ParamLimits

0xfb8b,	// (0x000471b1) cl_header_name_pane_t

0xb47b,	// (0x00042aa1) navi_pane_mv_g2_ParamLimits

0xd728,	// (0x00044d4e) field_vitu2_entry_pane_g1_ParamLimits

0xd734,	// (0x00044d5a) field_vitu2_entry_pane_g2_ParamLimits

0xd740,	// (0x00044d66) field_vitu2_entry_pane_g3_ParamLimits

0xd740,	// (0x00044d66) field_vitu2_entry_pane_g3

0xf987,	// (0x00046fad) field_vitu2_entry_pane_g_ParamLimits

0x86e4,	// (0x0003fd0a) cell_vitu2_itu_pane_g1_ParamLimits

0x86f4,	// (0x0003fd1a) cell_vitu2_itu_pane_g2_ParamLimits

0x86f4,	// (0x0003fd1a) cell_vitu2_itu_pane_g2

0x0001,

0xf993,	// (0x00046fb9) cell_vitu2_itu_pane_g_ParamLimits

0xf993,	// (0x00046fb9) cell_vitu2_itu_pane_g

0x20d6,	// (0x000396fc) bg_vkb2_func_pane_cp05_ParamLimits

0x20d6,	// (0x000396fc) bg_vkb2_func_pane_cp05

0x20d6,	// (0x000396fc) bg_vkb2_func_pane_cp03

0x20d6,	// (0x000396fc) bg_vkb2_func_pane_cp04

0x20d6,	// (0x000396fc) bg_vkb2_func_pane_cp10_ParamLimits

0x20d6,	// (0x000396fc) bg_vkb2_func_pane_cp10

0x3241,	// (0x0003a867) bg_vkb2_func_pane_cp08

0x915f,	// (0x00040785) bg_vkb2_func_pane_cp06

0x916c,	// (0x00040792) bg_vkb2_func_pane_cp07

0xdd99,	// (0x000453bf) bg_vkb2_func_pane_cp11_ParamLimits

0xdd99,	// (0x000453bf) bg_vkb2_func_pane_cp11

0xddae,	// (0x000453d4) bg_vkb2_func_pane_cp12_ParamLimits

0xddae,	// (0x000453d4) bg_vkb2_func_pane_cp12

0x185d,	// (0x00038e83) bg_vkb2_func_pane_cp09

0xd799,	// (0x00044dbf) bg_vkb2_func_pane_g1

0xaccc,	// (0x000422f2) bg_vkb2_func_pane_g2

0xd7a1,	// (0x00044dc7) bg_vkb2_func_pane_g3

0xd7a9,	// (0x00044dcf) bg_vkb2_func_pane_g4

0xd9eb,	// (0x00045011) bg_vkb2_func_pane_g5

0xd7c1,	// (0x00044de7) bg_vkb2_func_pane_g6

0xd7c9,	// (0x00044def) bg_vkb2_func_pane_g7

0xd7b9,	// (0x00044ddf) bg_vkb2_func_pane_g8

0xacac,	// (0x000422d2) bg_vkb2_func_pane_g9

0x0008,

0xfb92,	// (0x000471b8) bg_vkb2_func_pane_g

0x9476,	// (0x00040a9c) blid2_tripm_pane_g6_ParamLimits

0x9476,	// (0x00040a9c) blid2_tripm_pane_g6

0xd5ec,	// (0x00044c12) mp4_progress_pane_g1

0x94e5,	// (0x00040b0b) blid2_tripm_values_pane_ParamLimits

0x94e5,	// (0x00040b0b) blid2_tripm_values_pane

0x95d4,	// (0x00040bfa) blid2_tripm_values_pane_t1

0x95e2,	// (0x00040c08) blid2_tripm_values_pane_t2

0x95f0,	// (0x00040c16) blid2_tripm_values_pane_t3

0x95fe,	// (0x00040c24) blid2_tripm_values_pane_t4

0x960c,	// (0x00040c32) blid2_tripm_values_pane_t5

0x961a,	// (0x00040c40) blid2_tripm_values_pane_t6

0x9628,	// (0x00040c4e) blid2_tripm_values_pane_t7

0x9636,	// (0x00040c5c) blid2_tripm_values_pane_t8

0x9644,	// (0x00040c6a) blid2_tripm_values_pane_t9

0x0008,

0xfba5,	// (0x000471cb) blid2_tripm_values_pane_t

0x4732,	// (0x0003bd58) call_video_pane_t1_ParamLimits

0x4744,	// (0x0003bd6a) call_video_pane_t2_ParamLimits

0xf2d5,	// (0x000468fb) call_video_pane_t_ParamLimits

0x3027,	// (0x0003a64d) msg_header_pane_g1_ParamLimits

0xb665,	// (0x00042c8b) msg_header_pane_g2_ParamLimits

0xb665,	// (0x00042c8b) msg_header_pane_g2

0x0001,

0xf4ef,	// (0x00046b15) msg_header_pane_g_ParamLimits

0xf4ef,	// (0x00046b15) msg_header_pane_g

0x1fe3,	// (0x00039609) main_clock2_pane_ParamLimits

0x77f9,	// (0x0003ee1f) grid_clock2_toolbar_pane_ParamLimits

0x77f9,	// (0x0003ee1f) grid_clock2_toolbar_pane

0x77f9,	// (0x0003ee1f) listscroll_clock2_pane_ParamLimits

0x77f9,	// (0x0003ee1f) listscroll_clock2_pane

0x78c8,	// (0x0003eeee) main_clock2_pane_t3_ParamLimits

0x78c8,	// (0x0003eeee) main_clock2_pane_t3

0x78e1,	// (0x0003ef07) main_clock2_pane_t4_ParamLimits

0x78e1,	// (0x0003ef07) main_clock2_pane_t4

0xde6c,	// (0x00045492) cell_clock2_toolbar_pane

0xde74,	// (0x0004549a) cell_clock2_toolbar_pane_cp01

0xde74,	// (0x0004549a) cell_clock2_toolbar_pane_cp02

0xde7c,	// (0x000454a2) cell_clock2_toolbar_pane_cp03

0xde84,	// (0x000454aa) list_clock2_pane

0xb31d,	// (0x00042943) scroll_pane_cp10

0xde8c,	// (0x000454b2) list_single_clock2_pane_ParamLimits

0xde8c,	// (0x000454b2) list_single_clock2_pane

0xb4dc,	// (0x00042b02) list_highlight_pane_cp08

0xde99,	// (0x000454bf) list_single_clock2_pane_t1

0xdea7,	// (0x000454cd) list_single_clock2_pane_t2

0x0001,

0xfbb8,	// (0x000471de) list_single_clock2_pane_t

0x185d,	// (0x00038e83) bg_button_pane_cp10

0xdeb5,	// (0x000454db) cell_clock2_toolbar_pane_g1

0x5aa1,	// (0x0003d0c7) aid_main_viewer_pane_g1_ParamLimits

0x5aa1,	// (0x0003d0c7) aid_main_viewer_pane_g1

0x5aad,	// (0x0003d0d3) aid_main_viewer_pane_g2_ParamLimits

0x5aad,	// (0x0003d0d3) aid_main_viewer_pane_g2

0x5ab9,	// (0x0003d0df) aid_main_viewer_pane_g3_ParamLimits

0x5ab9,	// (0x0003d0df) aid_main_viewer_pane_g3

0x5ac8,	// (0x0003d0ee) aid_main_viewer_pane_g4_ParamLimits

0x5ac8,	// (0x0003d0ee) aid_main_viewer_pane_g4

0x0003,

0xf500,	// (0x00046b26) aid_main_viewer_pane_g_ParamLimits

0xf500,	// (0x00046b26) aid_main_viewer_pane_g

0x20d6,	// (0x000396fc) main_calc_pane_ParamLimits

0x62bc,	// (0x0003d8e2) main_dialer2_pane_ParamLimits

0x185d,	// (0x00038e83) main_cam6_pane

0x185d,	// (0x00038e83) main_vid6_pane

0x7805,	// (0x0003ee2b) listscroll_gen_pane_cp06_ParamLimits

0x7805,	// (0x0003ee2b) listscroll_gen_pane_cp06

0x78fa,	// (0x0003ef20) main_clock2_pane_t5_ParamLimits

0x78fa,	// (0x0003ef20) main_clock2_pane_t5

0x794f,	// (0x0003ef75) aid_call2_pane_cp10_ParamLimits

0x7961,	// (0x0003ef87) aid_call_pane_cp10_ParamLimits

0xb3a9,	// (0x000429cf) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb3a9,	// (0x000429cf) popup_clock_analogue_window_cp10_g2_ParamLimits

0x7973,	// (0x0003ef99) popup_clock_analogue_window_cp10_g3_ParamLimits

0x7973,	// (0x0003ef99) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb3a9,	// (0x000429cf) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf849,	// (0x00046e6f) popup_clock_analogue_window_cp10_g_ParamLimits

0x7985,	// (0x0003efab) popup_clock_analogue_window_cp10_t1_ParamLimits

0xd64c,	// (0x00044c72) cell_dialer2_keypad_pane_g2_ParamLimits

0xd64c,	// (0x00044c72) cell_dialer2_keypad_pane_g2

0x0001,

0xf92f,	// (0x00046f55) cell_dialer2_keypad_pane_g_ParamLimits

0xf92f,	// (0x00046f55) cell_dialer2_keypad_pane_g

0x7f94,	// (0x0003f5ba) cell_dialer2_keypad_pane_t1

0x8a32,	// (0x00040058) main_cset_text2_pane_ParamLimits

0x8a32,	// (0x00040058) main_cset_text2_pane

0xdc02,	// (0x00045228) area_vitu2_query_pane_g1_ParamLimits

0x320a,	// (0x0003a830) area_vitu2_query_pane_g2_ParamLimits

0xfad5,	// (0x000470fb) area_vitu2_query_pane_g_ParamLimits

0xdc86,	// (0x000452ac) area_vitu2_query_pane_t7_ParamLimits

0xdc86,	// (0x000452ac) area_vitu2_query_pane_t7

0x915f,	// (0x00040785) bg_button_pane_cp018_ParamLimits

0x916c,	// (0x00040792) bg_button_pane_cp021_ParamLimits

0x3241,	// (0x0003a867) bg_button_pane_cp022_ParamLimits

0x3241,	// (0x0003a867) bg_vkb2_func_pane_cp08_ParamLimits

0x915f,	// (0x00040785) bg_vkb2_func_pane_cp06_ParamLimits

0x916c,	// (0x00040792) bg_vkb2_func_pane_cp07_ParamLimits

0x3250,	// (0x0003a876) input_focus_pane_cp09_ParamLimits

0xf123,	// (0x00046749) cam6_autofocus_pane_ParamLimits

0xf123,	// (0x00046749) cam6_autofocus_pane

0x9652,	// (0x00040c78) cam6_image_uncrop_pane_ParamLimits

0x9652,	// (0x00040c78) cam6_image_uncrop_pane

0x965f,	// (0x00040c85) cam6_indi_pane_ParamLimits

0x965f,	// (0x00040c85) cam6_indi_pane

0x9675,	// (0x00040c9b) cam6_mode_pane_ParamLimits

0x9675,	// (0x00040c9b) cam6_mode_pane

0x9687,	// (0x00040cad) cam6_timer_pane_ParamLimits

0x9687,	// (0x00040cad) cam6_timer_pane

0x9693,	// (0x00040cb9) cam6_zoom_pane_ParamLimits

0x9693,	// (0x00040cb9) cam6_zoom_pane

0x969f,	// (0x00040cc5) cam6_mode_pane_g1_ParamLimits

0x969f,	// (0x00040cc5) cam6_mode_pane_g1

0x96af,	// (0x00040cd5) cam6_mode_pane_g2_ParamLimits

0x96af,	// (0x00040cd5) cam6_mode_pane_g2

0x96bf,	// (0x00040ce5) cam6_mode_pane_g3_ParamLimits

0x96bf,	// (0x00040ce5) cam6_mode_pane_g3

0x96cf,	// (0x00040cf5) cam6_mode_pane_g4_ParamLimits

0x96cf,	// (0x00040cf5) cam6_mode_pane_g4

0x0003,

0xfbbd,	// (0x000471e3) cam6_mode_pane_g_ParamLimits

0xfbbd,	// (0x000471e3) cam6_mode_pane_g

0xdebd,	// (0x000454e3) bg_tb_trans_pane_cp08_ParamLimits

0xdebd,	// (0x000454e3) bg_tb_trans_pane_cp08

0xdecb,	// (0x000454f1) cam6_battery_pane_ParamLimits

0xdecb,	// (0x000454f1) cam6_battery_pane

0xdee1,	// (0x00045507) cam6_indi_pane_g1_ParamLimits

0xdee1,	// (0x00045507) cam6_indi_pane_g1

0xdef3,	// (0x00045519) cam6_indi_pane_g2_ParamLimits

0xdef3,	// (0x00045519) cam6_indi_pane_g2

0xdf05,	// (0x0004552b) cam6_indi_pane_g3_ParamLimits

0xdf05,	// (0x0004552b) cam6_indi_pane_g3

0x0002,

0xfbc6,	// (0x000471ec) cam6_indi_pane_g_ParamLimits

0xfbc6,	// (0x000471ec) cam6_indi_pane_g

0xdf17,	// (0x0004553d) cam6_indi_pane_t1_ParamLimits

0xdf17,	// (0x0004553d) cam6_indi_pane_t1

0x8515,	// (0x0003fb3b) cam6_autofocus_pane_g1

0x851d,	// (0x0003fb43) cam6_autofocus_pane_g2

0x8525,	// (0x0003fb4b) cam6_autofocus_pane_g3

0x852d,	// (0x0003fb53) cam6_autofocus_pane_g4

0x0003,

0xfbcd,	// (0x000471f3) cam6_autofocus_pane_g

0xdf3d,	// (0x00045563) cam6_timer_pane_g1

0xdf45,	// (0x0004556b) cam6_timer_pane_t1

0xdf53,	// (0x00045579) cam6_zoom_cont_pane

0xdf5b,	// (0x00045581) cam6_zoom_pane_g1

0xdf63,	// (0x00045589) cam6_zoom_pane_g2

0x96df,	// (0x00040d05) cam6_zoom_pane_g3

0x0002,

0xfbd6,	// (0x000471fc) cam6_zoom_pane_g

0xcd86,	// (0x000443ac) cam6_battery_pane_g1

0xcd86,	// (0x000443ac) cam6_battery_pane_g2

0x0001,

0xf756,	// (0x00046d7c) cam6_battery_pane_g

0xdf6b,	// (0x00045591) cam6_zoom_cont_pane_g1

0xdf74,	// (0x0004559a) cam6_zoom_cont_pane_g2

0xdf7d,	// (0x000455a3) cam6_zoom_cont_pane_g3

0x0002,

0xfbdd,	// (0x00047203) cam6_zoom_cont_pane_g

0x96fc,	// (0x00040d22) cam6_mode_pane_cp_ParamLimits

0x96fc,	// (0x00040d22) cam6_mode_pane_cp

0x9693,	// (0x00040cb9) cam6_zoom_pane_cp_ParamLimits

0x9693,	// (0x00040cb9) cam6_zoom_pane_cp

0x970e,	// (0x00040d34) vid6_image_uncrop_cif_pane_ParamLimits

0x970e,	// (0x00040d34) vid6_image_uncrop_cif_pane

0x971c,	// (0x00040d42) vid6_image_uncrop_nhd_pane_ParamLimits

0x971c,	// (0x00040d42) vid6_image_uncrop_nhd_pane

0x9652,	// (0x00040c78) vid6_image_uncrop_vga_pane_ParamLimits

0x9652,	// (0x00040c78) vid6_image_uncrop_vga_pane

0x9729,	// (0x00040d4f) vid6_image_uncrop_wvga_pane_ParamLimits

0x9729,	// (0x00040d4f) vid6_image_uncrop_wvga_pane

0x9736,	// (0x00040d5c) vid6_indi_pane_ParamLimits

0x9736,	// (0x00040d5c) vid6_indi_pane

0xdebd,	// (0x000454e3) bg_tb_trans_pane_cp09_ParamLimits

0xdebd,	// (0x000454e3) bg_tb_trans_pane_cp09

0xdf91,	// (0x000455b7) cam6_battery_pane_cp_ParamLimits

0xdf91,	// (0x000455b7) cam6_battery_pane_cp

0xdf9d,	// (0x000455c3) vid6_indi_pane_g1_ParamLimits

0xdf9d,	// (0x000455c3) vid6_indi_pane_g1

0xdfaf,	// (0x000455d5) vid6_indi_pane_g2_ParamLimits

0xdfaf,	// (0x000455d5) vid6_indi_pane_g2

0xdfc1,	// (0x000455e7) vid6_indi_pane_g3_ParamLimits

0xdfc1,	// (0x000455e7) vid6_indi_pane_g3

0xdfd6,	// (0x000455fc) vid6_indi_pane_g4_ParamLimits

0xdfd6,	// (0x000455fc) vid6_indi_pane_g4

0xdfeb,	// (0x00045611) vid6_indi_pane_g5_ParamLimits

0xdfeb,	// (0x00045611) vid6_indi_pane_g5

0x0004,

0xfbe4,	// (0x0004720a) vid6_indi_pane_g_ParamLimits

0xfbe4,	// (0x0004720a) vid6_indi_pane_g

0xe005,	// (0x0004562b) vid6_indi_pane_t1_ParamLimits

0xe005,	// (0x0004562b) vid6_indi_pane_t1

0xe01b,	// (0x00045641) vid6_indi_pane_t2_ParamLimits

0xe01b,	// (0x00045641) vid6_indi_pane_t2

0xe043,	// (0x00045669) vid6_indi_pane_t3_ParamLimits

0xe043,	// (0x00045669) vid6_indi_pane_t3

0xe06b,	// (0x00045691) vid6_indi_pane_t4_ParamLimits

0xe06b,	// (0x00045691) vid6_indi_pane_t4

0x0003,

0xfbef,	// (0x00047215) vid6_indi_pane_t_ParamLimits

0xfbef,	// (0x00047215) vid6_indi_pane_t

0xe08f,	// (0x000456b5) wait_bar_pane_cp08

0x974d,	// (0x00040d73) main_cset_text2_pane_t1_ParamLimits

0x974d,	// (0x00040d73) main_cset_text2_pane_t1

0x96e7,	// (0x00040d0d) listscroll_gen_pane_cp06_t1_ParamLimits

0x96e7,	// (0x00040d0d) listscroll_gen_pane_cp06_t1

0x185d,	// (0x00038e83) main_cam6_set_pane

0xd08e,	// (0x000446b4) bg_tb_trans_pane_cp06_ParamLimits

0x83e9,	// (0x0003fa0f) cam4_indicators_pane_g1_ParamLimits

0x83f6,	// (0x0003fa1c) cam4_indicators_pane_g2_ParamLimits

0xf963,	// (0x00046f89) cam4_indicators_pane_g_ParamLimits

0x840e,	// (0x0003fa34) cam4_indicators_pane_t1_ParamLimits

0xd701,	// (0x00044d27) bg_tb_trans_pane_cp07_ParamLimits

0x83e9,	// (0x0003fa0f) vid4_indicators_pane_g1_ParamLimits

0x84dd,	// (0x0003fb03) vid4_indicators_pane_g2_ParamLimits

0x84ea,	// (0x0003fb10) vid4_indicators_pane_g3_ParamLimits

0x84f7,	// (0x0003fb1d) vid4_indicators_pane_g4_ParamLimits

0xf975,	// (0x00046f9b) vid4_indicators_pane_g_ParamLimits

0x8503,	// (0x0003fb29) vid4_indicators_pane_t1_ParamLimits

0xf09a,	// (0x000466c0) vid4_progress_pane_g1_ParamLimits

0xf0a9,	// (0x000466cf) vid4_progress_pane_g2_ParamLimits

0xf0b8,	// (0x000466de) vid4_progress_pane_g3_ParamLimits

0xf0c7,	// (0x000466ed) vid4_progress_pane_g4_ParamLimits

0xfb20,	// (0x00047146) vid4_progress_pane_g_ParamLimits

0xf0d3,	// (0x000466f9) vid4_progress_pane_t1_ParamLimits

0xf0e9,	// (0x0004670f) vid4_progress_pane_t2_ParamLimits

0xf0fe,	// (0x00046724) vid4_progress_pane_t3_ParamLimits

0xfb2b,	// (0x00047151) vid4_progress_pane_t_ParamLimits

0xf113,	// (0x00046739) wait_bar_pane_cp07_ParamLimits

0x9767,	// (0x00040d8d) main_cam6_set_pane_g2_ParamLimits

0x9767,	// (0x00040d8d) main_cam6_set_pane_g2

0x9789,	// (0x00040daf) main_cset6_listscroll_pane_ParamLimits

0x9789,	// (0x00040daf) main_cset6_listscroll_pane

0x97a3,	// (0x00040dc9) main_cset6_slider_pane_ParamLimits

0x97a3,	// (0x00040dc9) main_cset6_slider_pane

0x97b9,	// (0x00040ddf) main_cset6_text2_pane_ParamLimits

0x97b9,	// (0x00040ddf) main_cset6_text2_pane

0xe09f,	// (0x000456c5) main_cset6_text_pane

0xd88f,	// (0x00044eb5) main_cset_list_pane_copy1_ParamLimits

0xd88f,	// (0x00044eb5) main_cset_list_pane_copy1

0xd89f,	// (0x00044ec5) scroll_pane_cp028_copy1

0x97c7,	// (0x00040ded) cset_list_set_pane_copy1

0x97d9,	// (0x00040dff) aid_position_infowindow_above_copy1

0x97e1,	// (0x00040e07) aid_position_infowindow_below_copy1

0x325f,	// (0x0003a885) cset_list_set_pane_g1_copy1

0x314c,	// (0x0003a772) cset_list_set_pane_g3_copy1_ParamLimits

0x314c,	// (0x0003a772) cset_list_set_pane_g3_copy1

0x3267,	// (0x0003a88d) cset_list_set_pane_t1_copy1_ParamLimits

0x3267,	// (0x0003a88d) cset_list_set_pane_t1_copy1

0x20d6,	// (0x000396fc) list_highlight_pane_cp021_copy1_ParamLimits

0x20d6,	// (0x000396fc) list_highlight_pane_cp021_copy1

0xe0a7,	// (0x000456cd) cset6_slider_pane_ParamLimits

0xe0a7,	// (0x000456cd) cset6_slider_pane

0xe0d3,	// (0x000456f9) main_cset6_slider_pane_g1_ParamLimits

0xe0d3,	// (0x000456f9) main_cset6_slider_pane_g1

0x97e9,	// (0x00040e0f) main_cset6_slider_pane_g2_ParamLimits

0x97e9,	// (0x00040e0f) main_cset6_slider_pane_g2

0xd8b4,	// (0x00044eda) main_cset6_slider_pane_g3_ParamLimits

0xd8b4,	// (0x00044eda) main_cset6_slider_pane_g3

0x8af7,	// (0x0004011d) main_cset6_slider_pane_g4_ParamLimits

0x8af7,	// (0x0004011d) main_cset6_slider_pane_g4

0x8b3f,	// (0x00040165) main_cset6_slider_pane_g5_ParamLimits

0x8b3f,	// (0x00040165) main_cset6_slider_pane_g5

0xd8b4,	// (0x00044eda) main_cset6_slider_pane_g7_ParamLimits

0xd8b4,	// (0x00044eda) main_cset6_slider_pane_g7

0xd8c0,	// (0x00044ee6) main_cset6_slider_pane_g8_ParamLimits

0xd8c0,	// (0x00044ee6) main_cset6_slider_pane_g8

0x8adf,	// (0x00040105) main_cset6_slider_pane_g9_ParamLimits

0x8adf,	// (0x00040105) main_cset6_slider_pane_g9

0x8aeb,	// (0x00040111) main_cset6_slider_pane_g10_ParamLimits

0x8aeb,	// (0x00040111) main_cset6_slider_pane_g10

0x8af7,	// (0x0004011d) main_cset6_slider_pane_g11_ParamLimits

0x8af7,	// (0x0004011d) main_cset6_slider_pane_g11

0x8b03,	// (0x00040129) main_cset6_slider_pane_g12_ParamLimits

0x8b03,	// (0x00040129) main_cset6_slider_pane_g12

0x8b0f,	// (0x00040135) main_cset6_slider_pane_g13_ParamLimits

0x8b0f,	// (0x00040135) main_cset6_slider_pane_g13

0x8b1b,	// (0x00040141) main_cset6_slider_pane_g14_ParamLimits

0x8b1b,	// (0x00040141) main_cset6_slider_pane_g14

0x9811,	// (0x00040e37) main_cset6_slider_pane_g15_ParamLimits

0x9811,	// (0x00040e37) main_cset6_slider_pane_g15

0x8b3f,	// (0x00040165) main_cset6_slider_pane_g16_ParamLimits

0x8b3f,	// (0x00040165) main_cset6_slider_pane_g16

0x8b4b,	// (0x00040171) main_cset6_slider_pane_g17_ParamLimits

0x8b4b,	// (0x00040171) main_cset6_slider_pane_g17

0x0011,

0xfbf8,	// (0x0004721e) main_cset6_slider_pane_g_ParamLimits

0xfbf8,	// (0x0004721e) main_cset6_slider_pane_g

0xe0fb,	// (0x00045721) main_cset6_slider_pane_t1_ParamLimits

0xe0fb,	// (0x00045721) main_cset6_slider_pane_t1

0xe13c,	// (0x00045762) main_cset6_slider_pane_t2_ParamLimits

0xe13c,	// (0x00045762) main_cset6_slider_pane_t2

0xe167,	// (0x0004578d) main_cset6_slider_pane_t3_ParamLimits

0xe167,	// (0x0004578d) main_cset6_slider_pane_t3

0x9829,	// (0x00040e4f) main_cset6_slider_pane_t4_ParamLimits

0x9829,	// (0x00040e4f) main_cset6_slider_pane_t4

0x9854,	// (0x00040e7a) main_cset6_slider_pane_t5_ParamLimits

0x9854,	// (0x00040e7a) main_cset6_slider_pane_t5

0xe192,	// (0x000457b8) main_cset6_slider_pane_t7_ParamLimits

0xe192,	// (0x000457b8) main_cset6_slider_pane_t7

0x987f,	// (0x00040ea5) main_cset6_slider_pane_t8_ParamLimits

0x987f,	// (0x00040ea5) main_cset6_slider_pane_t8

0x98a3,	// (0x00040ec9) main_cset6_slider_pane_t9_ParamLimits

0x98a3,	// (0x00040ec9) main_cset6_slider_pane_t9

0x98c7,	// (0x00040eed) main_cset6_slider_pane_t10_ParamLimits

0x98c7,	// (0x00040eed) main_cset6_slider_pane_t10

0x98eb,	// (0x00040f11) main_cset6_slider_pane_t11_ParamLimits

0x98eb,	// (0x00040f11) main_cset6_slider_pane_t11

0xe1c8,	// (0x000457ee) main_cset6_slider_pane_t14_ParamLimits

0xe1c8,	// (0x000457ee) main_cset6_slider_pane_t14

0xe201,	// (0x00045827) main_cset6_slider_pane_t15_ParamLimits

0xe201,	// (0x00045827) main_cset6_slider_pane_t15

0x000b,

0xfc1d,	// (0x00047243) main_cset6_slider_pane_t_ParamLimits

0xfc1d,	// (0x00047243) main_cset6_slider_pane_t

0xd999,	// (0x00044fbf) cset_slider_pane_g1_copy1

0xd9a2,	// (0x00044fc8) cset_slider_pane_g2_copy1

0xd9ab,	// (0x00044fd1) cset_slider_pane_g3_copy1

0x185d,	// (0x00038e83) bg_popup_sub_pane_cp011_copy1

0xda34,	// (0x0004505a) main_cset_text_pane_g1_copy1

0xda3c,	// (0x00045062) main_cset_text_pane_t1_copy1

0xda4a,	// (0x00045070) main_cset_text_pane_t2_copy1

0xda58,	// (0x0004507e) main_cset_text_pane_t3_copy1

0xda66,	// (0x0004508c) main_cset_text_pane_t4_copy1

0xda74,	// (0x0004509a) main_cset_text_pane_t5_copy1

0xda82,	// (0x000450a8) main_cset_text_pane_t6_copy1

0xda90,	// (0x000450b6) main_cset_text_pane_t7_copy1

0x990f,	// (0x00040f35) main_cset_text2_pane_t1_copy1

0x185d,	// (0x00038e83) main_ncimui_pane

0x64ca,	// (0x0003daf0) popup_query_ncimui_window_ParamLimits

0x64ca,	// (0x0003daf0) popup_query_ncimui_window

0xd056,	// (0x0004467c) field_cale_ev2_pane_g4_ParamLimits

0xd056,	// (0x0004467c) field_cale_ev2_pane_g4

0x7e86,	// (0x0003f4ac) cell_video_dialer_keypad_pane_g2_ParamLimits

0x7e86,	// (0x0003f4ac) cell_video_dialer_keypad_pane_g2

0x0001,

0xf90a,	// (0x00046f30) cell_video_dialer_keypad_pane_g_ParamLimits

0xf90a,	// (0x00046f30) cell_video_dialer_keypad_pane_g

0x7e9e,	// (0x0003f4c4) cell_video_dialer_keypad_pane_t1

0x185d,	// (0x00038e83) bg_popup_window_pane_cp012

0xb1f6,	// (0x0004281c) heading_pane_cp06

0xe323,	// (0x00045949) ncim_query_content_pane

0x185d,	// (0x00038e83) bg_popup_heading_pane_cp01

0xe32b,	// (0x00045951) ncim_heading_pane_t1

0xe339,	// (0x0004595f) ncim_indicator_popup_pane

0xe34b,	// (0x00045971) ncim_query_button_pane

0xe35f,	// (0x00045985) ncim_query_content_pane_t1

0xe371,	// (0x00045997) ncim_query_content_pane_t2

0x0005,

0xfc5c,	// (0x00047282) ncim_query_content_pane_t

0xe3ab,	// (0x000459d1) ncim_query_list_pane

0xe3bd,	// (0x000459e3) ncim_query_popup_pane

0xe339,	// (0x0004595f) ncim_indicator_popup_pane_ParamLimits

0x99ef,	// (0x00041015) ncim_query_content_pane_g1_ParamLimits

0x99ef,	// (0x00041015) ncim_query_content_pane_g1

0xe35f,	// (0x00045985) ncim_query_content_pane_t1_ParamLimits

0xe371,	// (0x00045997) ncim_query_content_pane_t2_ParamLimits

0x99fb,	// (0x00041021) ncim_query_content_pane_t3_ParamLimits

0x99fb,	// (0x00041021) ncim_query_content_pane_t3

0x9a23,	// (0x00041049) ncim_query_content_pane_t4_ParamLimits

0x9a23,	// (0x00041049) ncim_query_content_pane_t4

0x9a4b,	// (0x00041071) ncim_query_content_pane_t5_ParamLimits

0x9a4b,	// (0x00041071) ncim_query_content_pane_t5

0xe383,	// (0x000459a9) ncim_query_content_pane_t6_ParamLimits

0xe383,	// (0x000459a9) ncim_query_content_pane_t6

0xfc5c,	// (0x00047282) ncim_query_content_pane_t_ParamLimits

0xe3ab,	// (0x000459d1) ncim_query_list_pane_ParamLimits

0xe3bd,	// (0x000459e3) ncim_query_popup_pane_ParamLimits

0xe3d1,	// (0x000459f7) wait_bar_pane_cp04

0x185d,	// (0x00038e83) input_focus_pane_cp011

0xe3d9,	// (0x000459ff) ncim_query_popup_pane_t1

0xe3e7,	// (0x00045a0d) ncim_list_query_list_pane_ParamLimits

0xe3e7,	// (0x00045a0d) ncim_list_query_list_pane

0x185d,	// (0x00038e83) bg_button_pane_cp027

0xe3fa,	// (0x00045a20) ncim_query_button_pane_g1

0x185d,	// (0x00038e83) list_highlight_pane_cp012

0xe404,	// (0x00045a2a) ncim_list_query_list_pane_g1

0xe40c,	// (0x00045a32) ncim_list_query_list_pane_t1

0x8402,	// (0x0003fa28) cam4_indicators_pane_g3_ParamLimits

0x8402,	// (0x0003fa28) cam4_indicators_pane_g3

0x8402,	// (0x0003fa28) vid4_indicators_pane_g5_ParamLimits

0x8402,	// (0x0003fa28) vid4_indicators_pane_g5

0xaf9a,	// (0x000425c0) vid4_progress_pane_g5_ParamLimits

0xaf9a,	// (0x000425c0) vid4_progress_pane_g5

0x9939,	// (0x00040f5f) main_ncimui_pane_g1

0x997f,	// (0x00040fa5) ncimui_group_query_pane_ParamLimits

0x997f,	// (0x00040fa5) ncimui_group_query_pane

0x99b3,	// (0x00040fd9) ncimui_list_pane_ParamLimits

0x99b3,	// (0x00040fd9) ncimui_list_pane

0x99cb,	// (0x00040ff1) ncimui_text_pane_ParamLimits

0x99cb,	// (0x00040ff1) ncimui_text_pane

0x9a73,	// (0x00041099) ncimui_text_pane_t1_ParamLimits

0x9a73,	// (0x00041099) ncimui_text_pane_t1

0xe41a,	// (0x00045a40) ncimui_list_single_graphic_pane_ParamLimits

0xe41a,	// (0x00045a40) ncimui_list_single_graphic_pane

0x9a90,	// (0x000410b6) ncimui_query_pane_ParamLimits

0x9a90,	// (0x000410b6) ncimui_query_pane

0x185d,	// (0x00038e83) list_highlight_pane_cp013

0xe427,	// (0x00045a4d) ncim_list_query_list_pane_t1_copy1

0xe435,	// (0x00045a5b) ncim_list_single_graphic_pane_g1

0xe43d,	// (0x00045a63) ncim_query_button_pane_cp01

0xe445,	// (0x00045a6b) ncim_query_entry_pane_ParamLimits

0xe445,	// (0x00045a6b) ncim_query_entry_pane

0xe455,	// (0x00045a7b) ncimui_query_pane_g1

0xe45d,	// (0x00045a83) ncimui_query_pane_t1_ParamLimits

0xe45d,	// (0x00045a83) ncimui_query_pane_t1

0x185d,	// (0x00038e83) input_focus_pane_cp012

0xe3d9,	// (0x000459ff) ncim_query_entry_pane_t1

0x1fe3,	// (0x00039609) main_im_pane_ParamLimits

0x20d6,	// (0x000396fc) main_mobtv_pane_ParamLimits

0x20d6,	// (0x000396fc) main_mobtv_pane

0x8adf,	// (0x00040105) main_cset6_slider_pane_g18_ParamLimits

0x8adf,	// (0x00040105) main_cset6_slider_pane_g18

0x8b0f,	// (0x00040135) main_cset6_slider_pane_g19_ParamLimits

0x8b0f,	// (0x00040135) main_cset6_slider_pane_g19

0xe473,	// (0x00045a99) bg_main_mobtv_pane_ParamLimits

0xe473,	// (0x00045a99) bg_main_mobtv_pane

0x9aa0,	// (0x000410c6) main_mobtv_info_pane

0x9aa9,	// (0x000410cf) main_mobtv_loading_pane_ParamLimits

0x9aa9,	// (0x000410cf) main_mobtv_loading_pane

0xe481,	// (0x00045aa7) main_mobtv_pg_channel_list_pane

0xe48b,	// (0x00045ab1) main_mobtv_pg_hdr_pane

0x9ab6,	// (0x000410dc) main_mobtv_programe_curr_pane_ParamLimits

0x9ab6,	// (0x000410dc) main_mobtv_programe_curr_pane

0x9ac3,	// (0x000410e9) main_mobtv_programe_next_pane_ParamLimits

0x9ac3,	// (0x000410e9) main_mobtv_programe_next_pane

0xe494,	// (0x00045aba) popup_mobtv_noti_window

0xcd86,	// (0x000443ac) main_tv_pg_hdr_pane_g1

0xe49c,	// (0x00045ac2) main_tv_pg_hdr_pane_g2

0xe4a4,	// (0x00045aca) main_tv_pg_hdr_pane_g3

0xe4ac,	// (0x00045ad2) main_tv_pg_hdr_pane_g4

0xe4b4,	// (0x00045ada) main_tv_pg_hdr_pane_g5

0xe4bc,	// (0x00045ae2) main_tv_pg_hdr_pane_g6

0xe4c4,	// (0x00045aea) main_tv_pg_hdr_pane_g7

0xe4cc,	// (0x00045af2) main_tv_pg_hdr_pane_g8

0xe4d4,	// (0x00045afa) main_tv_pg_hdr_pane_g9

0xe4dc,	// (0x00045b02) main_tv_pg_hdr_pane_g10

0xe4e6,	// (0x00045b0c) main_tv_pg_hdr_pane_g11

0x000a,

0xfc69,	// (0x0004728f) main_tv_pg_hdr_pane_g

0xe4f0,	// (0x00045b16) main_tv_pg_hdr_pane_t1

0xe4fe,	// (0x00045b24) main_tv_pg_hdr_pane_t2

0xe50c,	// (0x00045b32) main_tv_pg_hdr_pane_t3

0xe51a,	// (0x00045b40) main_tv_pg_hdr_pane_t4

0xe528,	// (0x00045b4e) main_tv_pg_hdr_pane_t5

0x0004,

0xfc80,	// (0x000472a6) main_tv_pg_hdr_pane_t

0xe536,	// (0x00045b5c) single_mobtv_pg_channel_pane_ParamLimits

0xe536,	// (0x00045b5c) single_mobtv_pg_channel_pane

0xe548,	// (0x00045b6e) single_mobtv_pg_channel_table_pane

0xe551,	// (0x00045b77) single_mobtv_pg_channel_thumb_pane

0xe55a,	// (0x00045b80) single_tv_pg_channel_pane_g1

0xe563,	// (0x00045b89) single_tv_pg_channel_pane_g2

0x0001,

0xfc8b,	// (0x000472b1) single_tv_pg_channel_pane_g

0xcfb5,	// (0x000445db) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xcfb5,	// (0x000445db) bg_single_mobtv_pg_channel_thumb_pane

0xe56c,	// (0x00045b92) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe56c,	// (0x00045b92) single_mobtv_pg_channel_thumb_pane_g1

0xe57a,	// (0x00045ba0) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe57a,	// (0x00045ba0) single_mobtv_pg_channel_thumb_pane_g2

0xe586,	// (0x00045bac) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe586,	// (0x00045bac) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc90,	// (0x000472b6) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc90,	// (0x000472b6) single_mobtv_pg_channel_thumb_pane_g

0xe592,	// (0x00045bb8) single_mobtv_pg_channel_thumb_pane_t1

0xe5a0,	// (0x00045bc6) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc97,	// (0x000472bd) single_mobtv_pg_channel_thumb_pane_t

0xcd86,	// (0x000443ac) bg_single_mobtv_pg_channel_table_pane_g1

0xcd86,	// (0x000443ac) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf756,	// (0x00046d7c) bg_single_mobtv_pg_channel_table_pane_g

0xe5ae,	// (0x00045bd4) single_mobtv_pg_channel_table_pane_t1

0xe5bc,	// (0x00045be2) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc9c,	// (0x000472c2) single_mobtv_pg_channel_table_pane_t

0x9ad8,	// (0x000410fe) main_mobtv_info_pane_g1_ParamLimits

0x9ad8,	// (0x000410fe) main_mobtv_info_pane_g1

0x9af4,	// (0x0004111a) main_mobtv_info_pane_t1_ParamLimits

0x9af4,	// (0x0004111a) main_mobtv_info_pane_t1

0x9b5a,	// (0x00041180) main_mobtv_info_pane_t2_ParamLimits

0x9b5a,	// (0x00041180) main_mobtv_info_pane_t2

0x0002,

0xfca6,	// (0x000472cc) main_mobtv_info_pane_t_ParamLimits

0xfca6,	// (0x000472cc) main_mobtv_info_pane_t

0x9bdd,	// (0x00041203) wait_bar_pane_cp05

0x9bed,	// (0x00041213) main_mobtv_loading_pane_g1_ParamLimits

0x9bed,	// (0x00041213) main_mobtv_loading_pane_g1

0x9bfe,	// (0x00041224) main_mobtv_loading_pane_g2_ParamLimits

0x9bfe,	// (0x00041224) main_mobtv_loading_pane_g2

0x9c0a,	// (0x00041230) main_mobtv_loading_pane_g3_ParamLimits

0x9c0a,	// (0x00041230) main_mobtv_loading_pane_g3

0x0002,

0xfcad,	// (0x000472d3) main_mobtv_loading_pane_g_ParamLimits

0xfcad,	// (0x000472d3) main_mobtv_loading_pane_g

0xe5ca,	// (0x00045bf0) main_mobtv_loading_pane_t1_ParamLimits

0xe5ca,	// (0x00045bf0) main_mobtv_loading_pane_t1

0xe5e2,	// (0x00045c08) main_mobtv_loading_pane_t2_ParamLimits

0xe5e2,	// (0x00045c08) main_mobtv_loading_pane_t2

0x0001,

0xfcb4,	// (0x000472da) main_mobtv_loading_pane_t_ParamLimits

0xfcb4,	// (0x000472da) main_mobtv_loading_pane_t

0x9c1b,	// (0x00041241) wait_bar_pane_cp06_ParamLimits

0x9c1b,	// (0x00041241) wait_bar_pane_cp06

0xe606,	// (0x00045c2c) main_mobtv_programe_curr_pane_t1

0xe614,	// (0x00045c3a) main_mobtv_programe_curr_pane_t2

0x0001,

0xfcb9,	// (0x000472df) main_mobtv_programe_curr_pane_t

0xe622,	// (0x00045c48) main_mobtv_programe_next_pane_t1

0xe630,	// (0x00045c56) main_mobtv_programe_next_pane_t2

0xe63e,	// (0x00045c64) main_mobtv_programe_next_pane_t3

0x0002,

0xfcbe,	// (0x000472e4) main_mobtv_programe_next_pane_t

0x185d,	// (0x00038e83) bg_popup_mobtv_noti_window_pane

0xe64c,	// (0x00045c72) popup_mobtv_noti_window_g1

0xe654,	// (0x00045c7a) popup_mobtv_noti_window_t1

0xe662,	// (0x00045c88) popup_mobtv_noti_window_t2

0x0001,

0xfcc5,	// (0x000472eb) popup_mobtv_noti_window_t

0xcd86,	// (0x000443ac) bg_popup_mobtv_noti_window_pane_g1

0x185d,	// (0x00038e83) sc_clock_pane

0x185d,	// (0x00038e83) main_fs_bigclock_pane

0x94cf,	// (0x00040af5) blid2_tripm_pane_t4_ParamLimits

0x94cf,	// (0x00040af5) blid2_tripm_pane_t4

0x9c2a,	// (0x00041250) sc_clock_pane_g1_ParamLimits

0x9c2a,	// (0x00041250) sc_clock_pane_g1

0x9c3c,	// (0x00041262) sc_clock_pane_t1_ParamLimits

0x9c3c,	// (0x00041262) sc_clock_pane_t1

0x9c5e,	// (0x00041284) sc_clock_pane_t2_ParamLimits

0x9c5e,	// (0x00041284) sc_clock_pane_t2

0x9c74,	// (0x0004129a) sc_clock_pane_t3_ParamLimits

0x9c74,	// (0x0004129a) sc_clock_pane_t3

0x0004,

0xfcca,	// (0x000472f0) sc_clock_pane_t_ParamLimits

0xfcca,	// (0x000472f0) sc_clock_pane_t

0xa422,	// (0x00041a48) main_fs_bigclock_indicator_pane_ParamLimits

0xa422,	// (0x00041a48) main_fs_bigclock_indicator_pane

0xcf85,	// (0x000445ab) main_fs_bigclock_pane_g1_ParamLimits

0xcf85,	// (0x000445ab) main_fs_bigclock_pane_g1

0xa42e,	// (0x00041a54) main_fs_bigclock_pane_t1_ParamLimits

0xa42e,	// (0x00041a54) main_fs_bigclock_pane_t1

0xa440,	// (0x00041a66) main_fs_bigclock_pane_t2_ParamLimits

0xa440,	// (0x00041a66) main_fs_bigclock_pane_t2

0xa452,	// (0x00041a78) main_fs_bigclock_pane_t3_ParamLimits

0xa452,	// (0x00041a78) main_fs_bigclock_pane_t3

0x0002,

0xfec4,	// (0x000474ea) main_fs_bigclock_pane_t_ParamLimits

0xfec4,	// (0x000474ea) main_fs_bigclock_pane_t

0x10b1,	// (0x000386d7) main_fs_bigclock_indicator_pane_g1

0xe353,	// (0x00045979) ncim_query_content_pane_g2_ParamLimits

0xe353,	// (0x00045979) ncim_query_content_pane_g2

0x0001,

0xfc57,	// (0x0004727d) ncim_query_content_pane_g_ParamLimits

0xfc57,	// (0x0004727d) ncim_query_content_pane_g

0x9c89,	// (0x000412af) sc_clock_pane_t4_ParamLimits

0x9c89,	// (0x000412af) sc_clock_pane_t4

0x20d6,	// (0x000396fc) main_radioblah_pane

0xd6a3,	// (0x00044cc9) cell_call4_button_pane_t1_copy1_ParamLimits

0xd6a3,	// (0x00044cc9) cell_call4_button_pane_t1_copy1

0x9941,	// (0x00040f67) main_ncimui_pane_t1_ParamLimits

0x9941,	// (0x00040f67) main_ncimui_pane_t1

0x9953,	// (0x00040f79) main_ncimui_pane_t2_ParamLimits

0x9953,	// (0x00040f79) main_ncimui_pane_t2

0x0002,

0xfc50,	// (0x00047276) main_ncimui_pane_t_ParamLimits

0xfc50,	// (0x00047276) main_ncimui_pane_t

0xe78c,	// (0x00045db2) main_radioblah_anim_pane_ParamLimits

0xe78c,	// (0x00045db2) main_radioblah_anim_pane

0xe79d,	// (0x00045dc3) main_radioblah_info_pane_ParamLimits

0xe79d,	// (0x00045dc3) main_radioblah_info_pane

0xe7b1,	// (0x00045dd7) main_radioblah_pane_t1_ParamLimits

0xe7b1,	// (0x00045dd7) main_radioblah_pane_t1

0xe7cd,	// (0x00045df3) main_radioblah_pane_t2_ParamLimits

0xe7cd,	// (0x00045df3) main_radioblah_pane_t2

0x0003,

0xfceb,	// (0x00047311) main_radioblah_pane_t_ParamLimits

0xfceb,	// (0x00047311) main_radioblah_pane_t

0x9d20,	// (0x00041346) main_radioblah_rocker_ctrl_pane_ParamLimits

0x9d20,	// (0x00041346) main_radioblah_rocker_ctrl_pane

0xe815,	// (0x00045e3b) main_radioblah_info_pane_t1_ParamLimits

0xe815,	// (0x00045e3b) main_radioblah_info_pane_t1

0x9d74,	// (0x0004139a) main_radioblah_info_pane_t2_ParamLimits

0x9d74,	// (0x0004139a) main_radioblah_info_pane_t2

0x0003,

0xfcf4,	// (0x0004731a) main_radioblah_info_pane_t_ParamLimits

0xfcf4,	// (0x0004731a) main_radioblah_info_pane_t

0xcd86,	// (0x000443ac) main_radioblah_rocker_ctrl_pane_g1

0x9e22,	// (0x00041448) main_radioblah_rocker_ctrl_pane_g2

0x9e2a,	// (0x00041450) main_radioblah_rocker_ctrl_pane_g3

0x9e32,	// (0x00041458) main_radioblah_rocker_ctrl_pane_g4

0x9e3a,	// (0x00041460) main_radioblah_rocker_ctrl_pane_g5

0x9e42,	// (0x00041468) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcfd,	// (0x00047323) main_radioblah_rocker_ctrl_pane_g

0x990f,	// (0x00040f35) main_cset_text2_pane_t1_copy1_ParamLimits

0xf026,	// (0x0004664c) cam4_image_uncrop_qvga_pane

0xf036,	// (0x0004665c) vid4_image_uncrop_qcif_pane

0xf123,	// (0x00046749) cam6_image_uncrop_qvga_pane_ParamLimits

0xf123,	// (0x00046749) cam6_image_uncrop_qvga_pane

0xdf85,	// (0x000455ab) vid6_image_uncrop_qcif_pane_ParamLimits

0xdf85,	// (0x000455ab) vid6_image_uncrop_qcif_pane

0x185d,	// (0x00038e83) bg_popup_preview_window_pane_cp03

0xe305,	// (0x0004592b) list_cset_text2_pane

0xe30d,	// (0x00045933) main_cset6_text2_pane_g1

0xe315,	// (0x0004593b) main_cset6_text2_pane_t1

0x9e4a,	// (0x00041470) list_cset_text2_pane_t1_ParamLimits

0x9e4a,	// (0x00041470) list_cset_text2_pane_t1

0x20d6,	// (0x000396fc) main_radioblah_pane_ParamLimits

0x9bcb,	// (0x000411f1) main_mobtv_info_pane_t3_ParamLimits

0x9bcb,	// (0x000411f1) main_mobtv_info_pane_t3

0x9d0e,	// (0x00041334) main_radioblah_pane_g1

0x9d48,	// (0x0004136e) main_radioblah_info_pane_g1

0x9dc7,	// (0x000413ed) main_radioblah_info_pane_t3_ParamLimits

0x9dc7,	// (0x000413ed) main_radioblah_info_pane_t3

0x5261,	// (0x0003c887) highlight_cell_cale_month_pane_ParamLimits

0x5261,	// (0x0003c887) highlight_cell_cale_month_pane

0x185d,	// (0x00038e83) main_phob_fisheye_pane

0xd0ff,	// (0x00044725) scroll_pane_cp0031_ParamLimits

0xd0ff,	// (0x00044725) scroll_pane_cp0031

0xe08f,	// (0x000456b5) wait_bar_pane_cp08_ParamLimits

0x97c7,	// (0x00040ded) cset_list_set_pane_copy1_ParamLimits

0xe84f,	// (0x00045e75) highlight_cell_cale_month_pane_g1

0x9e63,	// (0x00041489) highlight_cell_cale_month_pane_t1

0xe857,	// (0x00045e7d) list_gen_pane_cp01

0xd89f,	// (0x00044ec5) scroll_pane_01

0x9e71,	// (0x00041497) list_single_double_fisheye_pane

0xe860,	// (0x00045e86) list_double_fisheye_pane_g1_ParamLimits

0xe860,	// (0x00045e86) list_double_fisheye_pane_g1

0xe86c,	// (0x00045e92) list_double_fisheye_pane_g2_ParamLimits

0xe86c,	// (0x00045e92) list_double_fisheye_pane_g2

0x9e7a,	// (0x000414a0) list_double_fisheye_pane_g3_ParamLimits

0x9e7a,	// (0x000414a0) list_double_fisheye_pane_g3

0x0004,

0xfd0a,	// (0x00047330) list_double_fisheye_pane_g_ParamLimits

0xfd0a,	// (0x00047330) list_double_fisheye_pane_g

0xe89d,	// (0x00045ec3) list_double_fisheye_pane_t1_ParamLimits

0xe89d,	// (0x00045ec3) list_double_fisheye_pane_t1

0xe8b8,	// (0x00045ede) list_double_fisheye_pane_t2_ParamLimits

0xe8b8,	// (0x00045ede) list_double_fisheye_pane_t2

0x0001,

0xfd15,	// (0x0004733b) list_double_fisheye_pane_t_ParamLimits

0xfd15,	// (0x0004733b) list_double_fisheye_pane_t

0x185d,	// (0x00038e83) main_call5_pane

0x9cb2,	// (0x000412d8) sc_swipe_pane_ParamLimits

0x9cb2,	// (0x000412d8) sc_swipe_pane

0x9e97,	// (0x000414bd) call5_image_pane_ParamLimits

0x9e97,	// (0x000414bd) call5_image_pane

0x9eac,	// (0x000414d2) call5_swipe_1_pane_ParamLimits

0x9eac,	// (0x000414d2) call5_swipe_1_pane

0x9ebd,	// (0x000414e3) call5_swipe_2_pane_ParamLimits

0x9ebd,	// (0x000414e3) call5_swipe_2_pane

0x9ee2,	// (0x00041508) popup_call5_audio_first_window_ParamLimits

0x9ee2,	// (0x00041508) popup_call5_audio_first_window

0xcfb5,	// (0x000445db) call5_swipe_1_pane_g1_ParamLimits

0xcfb5,	// (0x000445db) call5_swipe_1_pane_g1

0x0598,	// (0x00037bbe) call5_swipe_1_pane_g2_ParamLimits

0x0598,	// (0x00037bbe) call5_swipe_1_pane_g2

0x0001,

0xfd1a,	// (0x00047340) call5_swipe_1_pane_g_ParamLimits

0xfd1a,	// (0x00047340) call5_swipe_1_pane_g

0x05a4,	// (0x00037bca) call5_swipe_1_pane_t1_ParamLimits

0x05a4,	// (0x00037bca) call5_swipe_1_pane_t1

0xcfb5,	// (0x000445db) call5_swipe_2_pane_g1_ParamLimits

0xcfb5,	// (0x000445db) call5_swipe_2_pane_g1

0x05b9,	// (0x00037bdf) call5_swipe_2_pane_g2_ParamLimits

0x05b9,	// (0x00037bdf) call5_swipe_2_pane_g2

0x0001,

0xfd1f,	// (0x00047345) call5_swipe_2_pane_g_ParamLimits

0xfd1f,	// (0x00047345) call5_swipe_2_pane_g

0x05c5,	// (0x00037beb) call5_swipe_2_pane_t1_ParamLimits

0x05c5,	// (0x00037beb) call5_swipe_2_pane_t1

0x05da,	// (0x00037c00) sc_swipe_pane_g1_ParamLimits

0x05da,	// (0x00037c00) sc_swipe_pane_g1

0x05e7,	// (0x00037c0d) sc_swipe_pane_g2_ParamLimits

0x05e7,	// (0x00037c0d) sc_swipe_pane_g2

0x0001,

0xfd24,	// (0x0004734a) sc_swipe_pane_g_ParamLimits

0xfd24,	// (0x0004734a) sc_swipe_pane_g

0x05f3,	// (0x00037c19) sc_swipe_pane_t1_ParamLimits

0x05f3,	// (0x00037c19) sc_swipe_pane_t1

0x185d,	// (0x00038e83) main_cmail_launcher_pane

0x9ef1,	// (0x00041517) aid_size_cell_cmail_l_ParamLimits

0x9ef1,	// (0x00041517) aid_size_cell_cmail_l

0x9f0a,	// (0x00041530) grid_cmail_l_pane_ParamLimits

0x9f0a,	// (0x00041530) grid_cmail_l_pane

0x9f1f,	// (0x00041545) cell_cmail_l_pane_ParamLimits

0x9f1f,	// (0x00041545) cell_cmail_l_pane

0x9f41,	// (0x00041567) cell_cmail_l_pane_g1_ParamLimits

0x9f41,	// (0x00041567) cell_cmail_l_pane_g1

0x9f51,	// (0x00041577) cell_cmail_l_pane_t1_ParamLimits

0x9f51,	// (0x00041577) cell_cmail_l_pane_t1

0x065c,	// (0x00037c82) cell_cmail_l_pane_t2_ParamLimits

0x065c,	// (0x00037c82) cell_cmail_l_pane_t2

0x0001,

0xfd29,	// (0x0004734f) cell_cmail_l_pane_t_ParamLimits

0xfd29,	// (0x0004734f) cell_cmail_l_pane_t

0x20d6,	// (0x000396fc) grid_highlight_pane_cp018_ParamLimits

0x20d6,	// (0x000396fc) grid_highlight_pane_cp018

0x380d,	// (0x0003ae33) main2_pane_ParamLimits

0x380d,	// (0x0003ae33) main2_pane

0x208e,	// (0x000396b4) popup_sp_fs_action_menu_bg_pane_g1

0x2096,	// (0x000396bc) popup_sp_fs_action_menu_bg_pane_g2

0x209e,	// (0x000396c4) popup_sp_fs_action_menu_bg_pane_g3

0x20a6,	// (0x000396cc) popup_sp_fs_action_menu_bg_pane_g4

0x20ae,	// (0x000396d4) popup_sp_fs_action_menu_bg_pane_g5

0x20b6,	// (0x000396dc) popup_sp_fs_action_menu_bg_pane_g6

0x20be,	// (0x000396e4) popup_sp_fs_action_menu_bg_pane_g7

0x20c6,	// (0x000396ec) popup_sp_fs_action_menu_bg_pane_g8

0x20ce,	// (0x000396f4) popup_sp_fs_action_menu_bg_pane_g9

0x3d73,	// (0x0003b399) popup_sp_fs_action_menu_bg_pane_g10

0x3d73,	// (0x0003b399) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1ef,	// (0x00046815) popup_sp_fs_action_menu_bg_pane_g

0xab63,	// (0x00042189) list_medium_line_x2_t3_g3_g1_ParamLimits

0xab63,	// (0x00042189) list_medium_line_x2_t3_g3_g1

0xab6f,	// (0x00042195) list_medium_line_x2_t3_g3_g2_ParamLimits

0xab6f,	// (0x00042195) list_medium_line_x2_t3_g3_g2

0xab7b,	// (0x000421a1) list_medium_line_x2_t3_g3_g3_ParamLimits

0xab7b,	// (0x000421a1) list_medium_line_x2_t3_g3_g3

0x0002,

0xf29f,	// (0x000468c5) list_medium_line_x2_t3_g3_g_ParamLimits

0xf29f,	// (0x000468c5) list_medium_line_x2_t3_g3_g

0xab87,	// (0x000421ad) list_medium_line_x2_t3_g3_t1_ParamLimits

0xab87,	// (0x000421ad) list_medium_line_x2_t3_g3_t1

0x2f38,	// (0x0003a55e) list_medium_line_x2_t3_g3_t2_ParamLimits

0x2f38,	// (0x0003a55e) list_medium_line_x2_t3_g3_t2

0xab9c,	// (0x000421c2) list_medium_line_x2_t3_g3_t3_ParamLimits

0xab9c,	// (0x000421c2) list_medium_line_x2_t3_g3_t3

0x0002,

0xf2a6,	// (0x000468cc) list_medium_line_x2_t3_g3_t_ParamLimits

0xf2a6,	// (0x000468cc) list_medium_line_x2_t3_g3_t

0xab63,	// (0x00042189) list_medium_line_x2_t3_g2_g1_ParamLimits

0xab63,	// (0x00042189) list_medium_line_x2_t3_g2_g1

0xab7b,	// (0x000421a1) list_medium_line_x2_t3_g2_g2_ParamLimits

0xab7b,	// (0x000421a1) list_medium_line_x2_t3_g2_g2

0x0001,

0xf2ad,	// (0x000468d3) list_medium_line_x2_t3_g2_g_ParamLimits

0xf2ad,	// (0x000468d3) list_medium_line_x2_t3_g2_g

0xabb1,	// (0x000421d7) list_medium_line_x2_t3_g2_t1_ParamLimits

0xabb1,	// (0x000421d7) list_medium_line_x2_t3_g2_t1

0xabc7,	// (0x000421ed) list_medium_line_x2_t3_g2_t2_ParamLimits

0xabc7,	// (0x000421ed) list_medium_line_x2_t3_g2_t2

0xab9c,	// (0x000421c2) list_medium_line_x2_t3_g2_t3_ParamLimits

0xab9c,	// (0x000421c2) list_medium_line_x2_t3_g2_t3

0x0002,

0xf2b2,	// (0x000468d8) list_medium_line_x2_t3_g2_t_ParamLimits

0xf2b2,	// (0x000468d8) list_medium_line_x2_t3_g2_t

0xab63,	// (0x00042189) list_medium_line_x2_t4_g4_g1_ParamLimits

0xab63,	// (0x00042189) list_medium_line_x2_t4_g4_g1

0xabd9,	// (0x000421ff) list_medium_line_x2_t4_g4_g2_ParamLimits

0xabd9,	// (0x000421ff) list_medium_line_x2_t4_g4_g2

0xab6f,	// (0x00042195) list_medium_line_x2_t4_g4_g3_ParamLimits

0xab6f,	// (0x00042195) list_medium_line_x2_t4_g4_g3

0xabe5,	// (0x0004220b) list_medium_line_x2_t4_g4_g4_ParamLimits

0xabe5,	// (0x0004220b) list_medium_line_x2_t4_g4_g4

0x0003,

0xf2b9,	// (0x000468df) list_medium_line_x2_t4_g4_g_ParamLimits

0xf2b9,	// (0x000468df) list_medium_line_x2_t4_g4_g

0x2f4a,	// (0x0003a570) list_medium_line_x2_t4_g4_t1_ParamLimits

0x2f4a,	// (0x0003a570) list_medium_line_x2_t4_g4_t1

0x2f61,	// (0x0003a587) list_medium_line_x2_t4_g4_t2_ParamLimits

0x2f61,	// (0x0003a587) list_medium_line_x2_t4_g4_t2

0x2f76,	// (0x0003a59c) list_medium_line_x2_t4_g4_t3_ParamLimits

0x2f76,	// (0x0003a59c) list_medium_line_x2_t4_g4_t3

0xabf1,	// (0x00042217) list_medium_line_x2_t4_g4_t4_ParamLimits

0xabf1,	// (0x00042217) list_medium_line_x2_t4_g4_t4

0x0003,

0xf2c2,	// (0x000468e8) list_medium_line_x2_t4_g4_t_ParamLimits

0xf2c2,	// (0x000468e8) list_medium_line_x2_t4_g4_t

0xab63,	// (0x00042189) list_medium_line_x2_t2_g4_g1_ParamLimits

0xab63,	// (0x00042189) list_medium_line_x2_t2_g4_g1

0xabd9,	// (0x000421ff) list_medium_line_x2_t2_g4_g2_ParamLimits

0xabd9,	// (0x000421ff) list_medium_line_x2_t2_g4_g2

0xab6f,	// (0x00042195) list_medium_line_x2_t2_g4_g3_ParamLimits

0xab6f,	// (0x00042195) list_medium_line_x2_t2_g4_g3

0xab7b,	// (0x000421a1) list_medium_line_x2_t2_g4_g4_ParamLimits

0xab7b,	// (0x000421a1) list_medium_line_x2_t2_g4_g4

0x0003,

0xf329,	// (0x0004694f) list_medium_line_x2_t2_g4_g_ParamLimits

0xf329,	// (0x0004694f) list_medium_line_x2_t2_g4_g

0xadae,	// (0x000423d4) list_medium_line_x2_t2_g4_t1_ParamLimits

0xadae,	// (0x000423d4) list_medium_line_x2_t2_g4_t1

0xab9c,	// (0x000421c2) list_medium_line_x2_t2_g4_t2_ParamLimits

0xab9c,	// (0x000421c2) list_medium_line_x2_t2_g4_t2

0x0001,

0xf332,	// (0x00046958) list_medium_line_x2_t2_g4_t_ParamLimits

0xf332,	// (0x00046958) list_medium_line_x2_t2_g4_t

0xab63,	// (0x00042189) list_medium_line_x2_t2_g3_g1_ParamLimits

0xab63,	// (0x00042189) list_medium_line_x2_t2_g3_g1

0xab6f,	// (0x00042195) list_medium_line_x2_t2_g3_g2_ParamLimits

0xab6f,	// (0x00042195) list_medium_line_x2_t2_g3_g2

0xab7b,	// (0x000421a1) list_medium_line_x2_t2_g3_g3_ParamLimits

0xab7b,	// (0x000421a1) list_medium_line_x2_t2_g3_g3

0x0002,

0xf29f,	// (0x000468c5) list_medium_line_x2_t2_g3_g_ParamLimits

0xf29f,	// (0x000468c5) list_medium_line_x2_t2_g3_g

0xadc3,	// (0x000423e9) list_medium_line_x2_t2_g3_t1_ParamLimits

0xadc3,	// (0x000423e9) list_medium_line_x2_t2_g3_t1

0xab9c,	// (0x000421c2) list_medium_line_x2_t2_g3_t2_ParamLimits

0xab9c,	// (0x000421c2) list_medium_line_x2_t2_g3_t2

0x0001,

0xf337,	// (0x0004695d) list_medium_line_x2_t2_g3_t_ParamLimits

0xf337,	// (0x0004695d) list_medium_line_x2_t2_g3_t

0x5399,	// (0x0003c9bf) main_sp_fs_list_pane_ParamLimits

0x5399,	// (0x0003c9bf) main_sp_fs_list_pane

0x53a6,	// (0x0003c9cc) sp_fs_scroll_pane_ParamLimits

0x53a6,	// (0x0003c9cc) sp_fs_scroll_pane

0x2f88,	// (0x0003a5ae) list_medium_line_x2_t3_t1

0x2f98,	// (0x0003a5be) list_medium_line_x2_t3_t2

0xaffb,	// (0x00042621) list_medium_line_x2_t3_t3

0x0002,

0xf382,	// (0x000469a8) list_medium_line_x2_t3_t

0x2fa6,	// (0x0003a5cc) list_medium_line_x3_t4_t1

0x2fb6,	// (0x0003a5dc) list_medium_line_x3_t4_t2

0xb009,	// (0x0004262f) list_medium_line_x3_t4_t3

0xb017,	// (0x0004263d) list_medium_line_x3_t4_t4

0x0003,

0xf389,	// (0x000469af) list_medium_line_x3_t4_t

0x2fc4,	// (0x0003a5ea) list_medium_line_x4_t5_t1

0x2fd4,	// (0x0003a5fa) list_medium_line_x4_t5_t2

0xb009,	// (0x0004262f) list_medium_line_x4_t5_t3

0xb025,	// (0x0004264b) list_medium_line_x4_t5_t4

0xb017,	// (0x0004263d) list_medium_line_x4_t5_t5

0x0004,

0xf392,	// (0x000469b8) list_medium_line_x4_t5_t

0xab63,	// (0x00042189) list_medium_line_t4_g4_g1_ParamLimits

0xab63,	// (0x00042189) list_medium_line_t4_g4_g1

0xabe5,	// (0x0004220b) list_medium_line_t4_g4_g2_ParamLimits

0xabe5,	// (0x0004220b) list_medium_line_t4_g4_g2

0xb033,	// (0x00042659) list_medium_line_t4_g4_g3_ParamLimits

0xb033,	// (0x00042659) list_medium_line_t4_g4_g3

0xab7b,	// (0x000421a1) list_medium_line_t4_g4_g4_ParamLimits

0xab7b,	// (0x000421a1) list_medium_line_t4_g4_g4

0x0003,

0xf39d,	// (0x000469c3) list_medium_line_t4_g4_g_ParamLimits

0xf39d,	// (0x000469c3) list_medium_line_t4_g4_g

0xb03f,	// (0x00042665) list_medium_line_t4_g4_t1_ParamLimits

0xb03f,	// (0x00042665) list_medium_line_t4_g4_t1

0xb054,	// (0x0004267a) list_medium_line_t4_g4_t2_ParamLimits

0xb054,	// (0x0004267a) list_medium_line_t4_g4_t2

0xb06a,	// (0x00042690) list_medium_line_t4_g4_t3_ParamLimits

0xb06a,	// (0x00042690) list_medium_line_t4_g4_t3

0xb080,	// (0x000426a6) list_medium_line_t4_g4_t4_ParamLimits

0xb080,	// (0x000426a6) list_medium_line_t4_g4_t4

0x0003,

0xf3a6,	// (0x000469cc) list_medium_line_t4_g4_t_ParamLimits

0xf3a6,	// (0x000469cc) list_medium_line_t4_g4_t

0x5474,	// (0x0003ca9a) chi_dic_find_pane_g1

0x62d0,	// (0x0003d8f6) main_tport_pane

0xd9dd,	// (0x00045003) list_medium_line_plain_t1

0xab63,	// (0x00042189) list_medium_line_t2_g2_g1_ParamLimits

0xab63,	// (0x00042189) list_medium_line_t2_g2_g1

0xab6f,	// (0x00042195) list_medium_line_t2_g2_g2_ParamLimits

0xab6f,	// (0x00042195) list_medium_line_t2_g2_g2

0x0001,

0xfa6c,	// (0x00047092) list_medium_line_t2_g2_g_ParamLimits

0xfa6c,	// (0x00047092) list_medium_line_t2_g2_g

0x315b,	// (0x0003a781) list_medium_line_t2_g2_t1_ParamLimits

0x315b,	// (0x0003a781) list_medium_line_t2_g2_t1

0x3172,	// (0x0003a798) list_medium_line_t2_g2_t2_ParamLimits

0x3172,	// (0x0003a798) list_medium_line_t2_g2_t2

0x0001,

0xfa71,	// (0x00047097) list_medium_line_t2_g2_t_ParamLimits

0xfa71,	// (0x00047097) list_medium_line_t2_g2_t

0xdd04,	// (0x0004532a) aid_sp_fs_list_icon_a_sm

0xdd0c,	// (0x00045332) aid_sp_fs_list_icon_d

0xdd14,	// (0x0004533a) aid_sp_fs_text_primary

0xdd1d,	// (0x00045343) aid_sp_fs_text_secondary

0xdd26,	// (0x0004534c) list_medium_line

0xdd26,	// (0x0004534c) list_medium_line_g2

0xdd26,	// (0x0004534c) list_medium_line_g3

0xdd26,	// (0x0004534c) list_medium_line_plain

0xdd26,	// (0x0004534c) list_medium_line_plain_t2

0xdd26,	// (0x0004534c) list_medium_line_plain_t3

0xdd26,	// (0x0004534c) list_medium_line_right_icon

0xdd26,	// (0x0004534c) list_medium_line_right_iconx2

0xdd26,	// (0x0004534c) list_medium_line_t2

0xdd26,	// (0x0004534c) list_medium_line_t2_g2

0xdd26,	// (0x0004534c) list_medium_line_t2_g3

0xdd26,	// (0x0004534c) list_medium_line_t2_right_icon

0xdd26,	// (0x0004534c) list_medium_line_t2_right_iconx2

0xdd26,	// (0x0004534c) list_medium_line_t3

0xdd26,	// (0x0004534c) list_medium_line_t3_g2

0xdd26,	// (0x0004534c) list_medium_line_t3_g3

0xdd26,	// (0x0004534c) list_medium_line_t3_right_iconx2

0xdd2f,	// (0x00045355) list_medium_line_t4_g4

0xdd38,	// (0x0004535e) list_medium_line_x2

0xdd38,	// (0x0004535e) list_medium_line_x2_t2_g2

0xdd38,	// (0x0004535e) list_medium_line_x2_t2_g3

0xdd38,	// (0x0004535e) list_medium_line_x2_t2_g4

0xdd38,	// (0x0004535e) list_medium_line_x2_t3

0xdd38,	// (0x0004535e) list_medium_line_x2_t3_g2

0xdd38,	// (0x0004535e) list_medium_line_x2_t3_g3

0xdd38,	// (0x0004535e) list_medium_line_x2_t3_g4

0xdd38,	// (0x0004535e) list_medium_line_x2_t4_g2

0xdd38,	// (0x0004535e) list_medium_line_x2_t4_g4

0xdd41,	// (0x00045367) list_medium_line_x3

0xdd41,	// (0x00045367) list_medium_line_x3_t4

0xdd41,	// (0x00045367) list_medium_line_x3_t4_g4

0xdd2f,	// (0x00045355) list_medium_line_x4_t4

0xdd2f,	// (0x00045355) list_medium_line_x4_t4_g7

0xdd2f,	// (0x00045355) list_medium_line_x4_t5

0xdd4a,	// (0x00045370) list_single_fs_dyc_pane_ParamLimits

0xdd4a,	// (0x00045370) list_single_fs_dyc_pane

0xab63,	// (0x00042189) list_medium_line_x4_t4_g7_g1_ParamLimits

0xab63,	// (0x00042189) list_medium_line_x4_t4_g7_g1

0xe23a,	// (0x00045860) list_medium_line_x4_t4_g7_g2_ParamLimits

0xe23a,	// (0x00045860) list_medium_line_x4_t4_g7_g2

0xe246,	// (0x0004586c) list_medium_line_x4_t4_g7_g3_ParamLimits

0xe246,	// (0x0004586c) list_medium_line_x4_t4_g7_g3

0xe255,	// (0x0004587b) list_medium_line_x4_t4_g7_g4_ParamLimits

0xe255,	// (0x0004587b) list_medium_line_x4_t4_g7_g4

0xe261,	// (0x00045887) list_medium_line_x4_t4_g7_g5_ParamLimits

0xe261,	// (0x00045887) list_medium_line_x4_t4_g7_g5

0xe270,	// (0x00045896) list_medium_line_x4_t4_g7_g6_ParamLimits

0xe270,	// (0x00045896) list_medium_line_x4_t4_g7_g6

0xe27f,	// (0x000458a5) list_medium_line_x4_t4_g7_g7_ParamLimits

0xe27f,	// (0x000458a5) list_medium_line_x4_t4_g7_g7

0x0006,

0xfc36,	// (0x0004725c) list_medium_line_x4_t4_g7_g_ParamLimits

0xfc36,	// (0x0004725c) list_medium_line_x4_t4_g7_g

0xe28b,	// (0x000458b1) list_medium_line_x4_t4_g7_t1_ParamLimits

0xe28b,	// (0x000458b1) list_medium_line_x4_t4_g7_t1

0xe2a0,	// (0x000458c6) list_medium_line_x4_t4_g7_t2_ParamLimits

0xe2a0,	// (0x000458c6) list_medium_line_x4_t4_g7_t2

0xe2b5,	// (0x000458db) list_medium_line_x4_t4_g7_t3_ParamLimits

0xe2b5,	// (0x000458db) list_medium_line_x4_t4_g7_t3

0xe2ca,	// (0x000458f0) list_medium_line_x4_t4_g7_t4_ParamLimits

0xe2ca,	// (0x000458f0) list_medium_line_x4_t4_g7_t4

0xe2dc,	// (0x00045902) list_medium_line_x4_t4_g7_t5_ParamLimits

0xe2dc,	// (0x00045902) list_medium_line_x4_t4_g7_t5

0x0004,

0xfc45,	// (0x0004726b) list_medium_line_x4_t4_g7_t_ParamLimits

0xfc45,	// (0x0004726b) list_medium_line_x4_t4_g7_t

0xe2ee,	// (0x00045914) list_single_dyc_row_pane_ParamLimits

0xe2ee,	// (0x00045914) list_single_dyc_row_pane

0x9e86,	// (0x000414ac) call5_gesture_pane_ParamLimits

0x9e86,	// (0x000414ac) call5_gesture_pane

0x9ece,	// (0x000414f4) call5_windows_pane_ParamLimits

0x9ece,	// (0x000414f4) call5_windows_pane

0x9f67,	// (0x0004158d) call5_swipe_1_pane_cp_ParamLimits

0x9f67,	// (0x0004158d) call5_swipe_1_pane_cp

0x9f73,	// (0x00041599) call5_swipe_2_pane_cp_ParamLimits

0x9f73,	// (0x00041599) call5_swipe_2_pane_cp

0xb4dc,	// (0x00042b02) call5_image_pane_cp

0x9f7f,	// (0x000415a5) popup_call5_audio_first_window_cp_ParamLimits

0x9f7f,	// (0x000415a5) popup_call5_audio_first_window_cp

0x05da,	// (0x00037c00) call5_swipe_1_pane_g1_cp_ParamLimits

0x05da,	// (0x00037c00) call5_swipe_1_pane_g1_cp

0x0692,	// (0x00037cb8) call5_swipe_1_pane_g2_cp

0x05f3,	// (0x00037c19) call5_swipe_1_pane_t1_cp_ParamLimits

0x05f3,	// (0x00037c19) call5_swipe_1_pane_t1_cp

0x05da,	// (0x00037c00) call5_swipe_2_pane_g1_cp_ParamLimits

0x05da,	// (0x00037c00) call5_swipe_2_pane_g1_cp

0x069a,	// (0x00037cc0) call5_swipe_2_pane_g2_cp

0x06a2,	// (0x00037cc8) call5_swipe_2_pane_t1_cp_ParamLimits

0x06a2,	// (0x00037cc8) call5_swipe_2_pane_t1_cp

0x20d6,	// (0x000396fc) main_sp_fs_email_pane

0x06b7,	// (0x00037cdd) main_sp_fs_listscroll_pane_te

0x327c,	// (0x0003a8a2) popup_sp_fs_action_menu_pane_ParamLimits

0x327c,	// (0x0003a8a2) popup_sp_fs_action_menu_pane

0xcd86,	// (0x000443ac) bg_sp_fs_ctrlbar_pane_g1

0x06c0,	// (0x00037ce6) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x06c9,	// (0x00037cef) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x06d2,	// (0x00037cf8) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xcd86,	// (0x000443ac) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfd2e,	// (0x00047354) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xcb73,	// (0x00044199) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xcb73,	// (0x00044199) bg_sp_fs_ctrlbar_ddmenu_pane

0x06db,	// (0x00037d01) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x06db,	// (0x00037d01) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x9f8b,	// (0x000415b1) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x9f8b,	// (0x000415b1) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfd37,	// (0x0004735d) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfd37,	// (0x0004735d) main_sp_fs_ctrlbar_ddmenu_pane_g

0x06e7,	// (0x00037d0d) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x06e7,	// (0x00037d0d) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xe8da,	// (0x00045f00) list_medium_line_t2_right_icon_g1

0xe8e2,	// (0x00045f08) list_medium_line_t2_right_icon_t1

0x32ac,	// (0x0003a8d2) list_medium_line_t2_right_icon_t2

0x0001,

0xfd3c,	// (0x00047362) list_medium_line_t2_right_icon_t

0xc94b,	// (0x00043f71) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc94b,	// (0x00043f71) bg_sp_fs_ctrlbar_pane

0x9fe0,	// (0x00041606) main_sp_fs_ctrlbar_button_pane_cp01

0x9fe8,	// (0x0004160e) main_sp_fs_ctrlbar_ddmenu_pane

0x07a0,	// (0x00037dc6) main_sp_fs_ctrlbar_pane_g1

0x07ac,	// (0x00037dd2) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfd41,	// (0x00047367) main_sp_fs_ctrlbar_pane_g

0x07b8,	// (0x00037dde) main_sp_fs_ctrlbar_pane_t1

0x32ba,	// (0x0003a8e0) main_sp_fs_ctrlbar_pane

0x32db,	// (0x0003a901) main_sp_fs_listscroll_pane_te_cp01

0x32fb,	// (0x0003a921) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x32fb,	// (0x0003a921) popup_sp_fs_action_menu_pane_cp01

0x20d6,	// (0x000396fc) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x20d6,	// (0x000396fc) bg_sp_fs_highlight_list_pane_cp01

0x331a,	// (0x0003a940) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x331a,	// (0x0003a940) sp_fs_action_menu_list_gene_pane_g1

0x07cd,	// (0x00037df3) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x07cd,	// (0x00037df3) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfd46,	// (0x0004736c) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfd46,	// (0x0004736c) sp_fs_action_menu_list_gene_pane_g

0xe8f2,	// (0x00045f18) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xe8f2,	// (0x00045f18) sp_fs_action_menu_list_gene_pane_t1

0x3329,	// (0x0003a94f) sp_fs_action_menu_list_gene_pane_ParamLimits

0x3329,	// (0x0003a94f) sp_fs_action_menu_list_gene_pane

0x07da,	// (0x00037e00) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x07da,	// (0x00037e00) popup_sp_fs_action_menu_bg_pane

0x3346,	// (0x0003a96c) sp_fs_action_menu_list_pane_ParamLimits

0x3346,	// (0x0003a96c) sp_fs_action_menu_list_pane

0x07e8,	// (0x00037e0e) sp_fs_scroll_pane_cp01_ParamLimits

0x07e8,	// (0x00037e0e) sp_fs_scroll_pane_cp01

0x3362,	// (0x0003a988) list_medium_line_plain_t2_t1

0x3372,	// (0x0003a998) list_medium_line_plain_t2_t2

0x0001,

0xfd4b,	// (0x00047371) list_medium_line_plain_t2_t

0x3380,	// (0x0003a9a6) list_medium_line_plain_t3_t1

0x3390,	// (0x0003a9b6) list_medium_line_plain_t3_t2

0x339e,	// (0x0003a9c4) list_medium_line_plain_t3_t3

0x0002,

0xfd50,	// (0x00047376) list_medium_line_plain_t3_t

0xab63,	// (0x00042189) list_medium_line_x2_t2_g2_g1_ParamLimits

0xab63,	// (0x00042189) list_medium_line_x2_t2_g2_g1

0xab7b,	// (0x000421a1) list_medium_line_x2_t2_g2_g2_ParamLimits

0xab7b,	// (0x000421a1) list_medium_line_x2_t2_g2_g2

0x0001,

0xf2ad,	// (0x000468d3) list_medium_line_x2_t2_g2_g_ParamLimits

0xf2ad,	// (0x000468d3) list_medium_line_x2_t2_g2_g

0xb03f,	// (0x00042665) list_medium_line_x2_t2_g2_t1_ParamLimits

0xb03f,	// (0x00042665) list_medium_line_x2_t2_g2_t1

0xab9c,	// (0x000421c2) list_medium_line_x2_t2_g2_t2_ParamLimits

0xab9c,	// (0x000421c2) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd57,	// (0x0004737d) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd57,	// (0x0004737d) list_medium_line_x2_t2_g2_t

0xab63,	// (0x00042189) list_medium_line_x2_t4_g2_g1_ParamLimits

0xab63,	// (0x00042189) list_medium_line_x2_t4_g2_g1

0xe90a,	// (0x00045f30) list_medium_line_x2_t4_g2_g2_ParamLimits

0xe90a,	// (0x00045f30) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd5c,	// (0x00047382) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd5c,	// (0x00047382) list_medium_line_x2_t4_g2_g

0x33ac,	// (0x0003a9d2) list_medium_line_x2_t4_g2_t1_ParamLimits

0x33ac,	// (0x0003a9d2) list_medium_line_x2_t4_g2_t1

0x33c6,	// (0x0003a9ec) list_medium_line_x2_t4_g2_t2_ParamLimits

0x33c6,	// (0x0003a9ec) list_medium_line_x2_t4_g2_t2

0x33db,	// (0x0003aa01) list_medium_line_x2_t4_g2_t3_ParamLimits

0x33db,	// (0x0003aa01) list_medium_line_x2_t4_g2_t3

0xab9c,	// (0x000421c2) list_medium_line_x2_t4_g2_t4_ParamLimits

0xab9c,	// (0x000421c2) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd61,	// (0x00047387) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd61,	// (0x00047387) list_medium_line_x2_t4_g2_t

0xe91b,	// (0x00045f41) list_medium_line_t3_right_iconx2_g1

0xe8da,	// (0x00045f00) list_medium_line_t3_right_iconx2_g2

0x33f0,	// (0x0003aa16) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd6a,	// (0x00047390) list_medium_line_t3_right_iconx2_g

0x33f8,	// (0x0003aa1e) list_medium_line_t3_right_iconx2_t1

0x3408,	// (0x0003aa2e) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd71,	// (0x00047397) list_medium_line_t3_right_iconx2_t

0xab63,	// (0x00042189) list_medium_line_x3_t4_g4_g1_ParamLimits

0xab63,	// (0x00042189) list_medium_line_x3_t4_g4_g1

0xab6f,	// (0x00042195) list_medium_line_x3_t4_g4_g2_ParamLimits

0xab6f,	// (0x00042195) list_medium_line_x3_t4_g4_g2

0xabe5,	// (0x0004220b) list_medium_line_x3_t4_g4_g3_ParamLimits

0xabe5,	// (0x0004220b) list_medium_line_x3_t4_g4_g3

0xe923,	// (0x00045f49) list_medium_line_x3_t4_g4_g4_ParamLimits

0xe923,	// (0x00045f49) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd76,	// (0x0004739c) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd76,	// (0x0004739c) list_medium_line_x3_t4_g4_g

0x315b,	// (0x0003a781) list_medium_line_x3_t4_g4_t1_ParamLimits

0x315b,	// (0x0003a781) list_medium_line_x3_t4_g4_t1

0x3172,	// (0x0003a798) list_medium_line_x3_t4_g4_t2_ParamLimits

0x3172,	// (0x0003a798) list_medium_line_x3_t4_g4_t2

0xe92f,	// (0x00045f55) list_medium_line_x3_t4_g4_t3_ParamLimits

0xe92f,	// (0x00045f55) list_medium_line_x3_t4_g4_t3

0xe944,	// (0x00045f6a) list_medium_line_x3_t4_g4_t4_ParamLimits

0xe944,	// (0x00045f6a) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd7f,	// (0x000473a5) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd7f,	// (0x000473a5) list_medium_line_x3_t4_g4_t

0x3416,	// (0x0003aa3c) list_single_dyc_row_text_pane_t1_ParamLimits

0x3416,	// (0x0003aa3c) list_single_dyc_row_text_pane_t1

0x344d,	// (0x0003aa73) list_single_dyc_row_text_pane_t2_ParamLimits

0x344d,	// (0x0003aa73) list_single_dyc_row_text_pane_t2

0xe961,	// (0x00045f87) list_single_dyc_row_text_pane_t3_ParamLimits

0xe961,	// (0x00045f87) list_single_dyc_row_text_pane_t3

0x0002,

0xfd88,	// (0x000473ae) list_single_dyc_row_text_pane_t_ParamLimits

0xfd88,	// (0x000473ae) list_single_dyc_row_text_pane_t

0xe973,	// (0x00045f99) list_single_dyc_row_pane_g1_ParamLimits

0xe973,	// (0x00045f99) list_single_dyc_row_pane_g1

0xe97f,	// (0x00045fa5) list_single_dyc_row_pane_g2_ParamLimits

0xe97f,	// (0x00045fa5) list_single_dyc_row_pane_g2

0xe98b,	// (0x00045fb1) list_single_dyc_row_pane_g3_ParamLimits

0xe98b,	// (0x00045fb1) list_single_dyc_row_pane_g3

0xe997,	// (0x00045fbd) list_single_dyc_row_pane_g4_ParamLimits

0xe997,	// (0x00045fbd) list_single_dyc_row_pane_g4

0x0003,

0xfd8f,	// (0x000473b5) list_single_dyc_row_pane_g_ParamLimits

0xfd8f,	// (0x000473b5) list_single_dyc_row_pane_g

0xe9a3,	// (0x00045fc9) list_single_dyc_row_text_pane_ParamLimits

0xe9a3,	// (0x00045fc9) list_single_dyc_row_text_pane

0x185d,	// (0x00038e83) bg_sp_fs_scroll_pane

0x080e,	// (0x00037e34) thumb_sp_fs_scroll_pane

0xab63,	// (0x00042189) list_medium_line_g1_ParamLimits

0xab63,	// (0x00042189) list_medium_line_g1

0xb03f,	// (0x00042665) list_medium_line_t1_ParamLimits

0xb03f,	// (0x00042665) list_medium_line_t1

0xab63,	// (0x00042189) list_medium_line_x2_g1_ParamLimits

0xab63,	// (0x00042189) list_medium_line_x2_g1

0xab6f,	// (0x00042195) list_medium_line_x2_g2_ParamLimits

0xab6f,	// (0x00042195) list_medium_line_x2_g2

0x0001,

0xfa6c,	// (0x00047092) list_medium_line_x2_g_ParamLimits

0xfa6c,	// (0x00047092) list_medium_line_x2_g

0xe9c2,	// (0x00045fe8) list_medium_line_x2_t1_ParamLimits

0xe9c2,	// (0x00045fe8) list_medium_line_x2_t1

0xab63,	// (0x00042189) list_medium_line_x3_g1_ParamLimits

0xab63,	// (0x00042189) list_medium_line_x3_g1

0xab6f,	// (0x00042195) list_medium_line_x3_g2_ParamLimits

0xab6f,	// (0x00042195) list_medium_line_x3_g2

0x0001,

0xfa6c,	// (0x00047092) list_medium_line_x3_g_ParamLimits

0xfa6c,	// (0x00047092) list_medium_line_x3_g

0xe9c2,	// (0x00045fe8) list_medium_line_x3_t1_ParamLimits

0xe9c2,	// (0x00045fe8) list_medium_line_x3_t1

0x0817,	// (0x00037e3d) thumb_sp_fs_scroll_pane_g1

0x0820,	// (0x00037e46) thumb_sp_fs_scroll_pane_g2

0x0829,	// (0x00037e4f) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd98,	// (0x000473be) thumb_sp_fs_scroll_pane_g

0x0817,	// (0x00037e3d) bg_sp_fs_scroll_pane_g1

0x0820,	// (0x00037e46) bg_sp_fs_scroll_pane_g2

0x0829,	// (0x00037e4f) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd98,	// (0x000473be) bg_sp_fs_scroll_pane_g

0xab63,	// (0x00042189) list_medium_line_x2_t3_g4_g1_ParamLimits

0xab63,	// (0x00042189) list_medium_line_x2_t3_g4_g1

0xabd9,	// (0x000421ff) list_medium_line_x2_t3_g4_g2_ParamLimits

0xabd9,	// (0x000421ff) list_medium_line_x2_t3_g4_g2

0xab6f,	// (0x00042195) list_medium_line_x2_t3_g4_g3_ParamLimits

0xab6f,	// (0x00042195) list_medium_line_x2_t3_g4_g3

0xab7b,	// (0x000421a1) list_medium_line_x2_t3_g4_g4_ParamLimits

0xab7b,	// (0x000421a1) list_medium_line_x2_t3_g4_g4

0x0003,

0xf329,	// (0x0004694f) list_medium_line_x2_t3_g4_g_ParamLimits

0xf329,	// (0x0004694f) list_medium_line_x2_t3_g4_g

0x34a7,	// (0x0003aacd) list_medium_line_x2_t3_g4_t1_ParamLimits

0x34a7,	// (0x0003aacd) list_medium_line_x2_t3_g4_t1

0x34bd,	// (0x0003aae3) list_medium_line_x2_t3_g4_t2_ParamLimits

0x34bd,	// (0x0003aae3) list_medium_line_x2_t3_g4_t2

0xab9c,	// (0x000421c2) list_medium_line_x2_t3_g4_t3_ParamLimits

0xab9c,	// (0x000421c2) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd9f,	// (0x000473c5) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd9f,	// (0x000473c5) list_medium_line_x2_t3_g4_t

0xab63,	// (0x00042189) list_medium_line_g2_g1_ParamLimits

0xab63,	// (0x00042189) list_medium_line_g2_g1

0xab6f,	// (0x00042195) list_medium_line_g2_g2_ParamLimits

0xab6f,	// (0x00042195) list_medium_line_g2_g2

0x0001,

0xfa6c,	// (0x00047092) list_medium_line_g2_g_ParamLimits

0xfa6c,	// (0x00047092) list_medium_line_g2_g

0xadc3,	// (0x000423e9) list_medium_line_g2_t1_ParamLimits

0xadc3,	// (0x000423e9) list_medium_line_g2_t1

0xab63,	// (0x00042189) list_medium_line_t3_g2_g1_ParamLimits

0xab63,	// (0x00042189) list_medium_line_t3_g2_g1

0xab6f,	// (0x00042195) list_medium_line_t3_g2_g2_ParamLimits

0xab6f,	// (0x00042195) list_medium_line_t3_g2_g2

0x0001,

0xfa6c,	// (0x00047092) list_medium_line_t3_g2_g_ParamLimits

0xfa6c,	// (0x00047092) list_medium_line_t3_g2_g

0x34d6,	// (0x0003aafc) list_medium_line_t3_g2_t1_ParamLimits

0x34d6,	// (0x0003aafc) list_medium_line_t3_g2_t1

0x34ed,	// (0x0003ab13) list_medium_line_t3_g2_t2_ParamLimits

0x34ed,	// (0x0003ab13) list_medium_line_t3_g2_t2

0x3502,	// (0x0003ab28) list_medium_line_t3_g2_t3_ParamLimits

0x3502,	// (0x0003ab28) list_medium_line_t3_g2_t3

0x0002,

0xfda6,	// (0x000473cc) list_medium_line_t3_g2_t_ParamLimits

0xfda6,	// (0x000473cc) list_medium_line_t3_g2_t

0xe8da,	// (0x00045f00) list_medium_line_right_icon_g1

0xe9d8,	// (0x00045ffe) list_medium_line_right_icon_t1

0xab63,	// (0x00042189) list_medium_line_t2_g1_ParamLimits

0xab63,	// (0x00042189) list_medium_line_t2_g1

0x3517,	// (0x0003ab3d) list_medium_line_t2_t1_ParamLimits

0x3517,	// (0x0003ab3d) list_medium_line_t2_t1

0x352e,	// (0x0003ab54) list_medium_line_t2_t2_ParamLimits

0x352e,	// (0x0003ab54) list_medium_line_t2_t2

0x0001,

0xfdad,	// (0x000473d3) list_medium_line_t2_t_ParamLimits

0xfdad,	// (0x000473d3) list_medium_line_t2_t

0xab63,	// (0x00042189) list_medium_line_t3_g1_ParamLimits

0xab63,	// (0x00042189) list_medium_line_t3_g1

0x33ac,	// (0x0003a9d2) list_medium_line_t3_t1_ParamLimits

0x33ac,	// (0x0003a9d2) list_medium_line_t3_t1

0x33c6,	// (0x0003a9ec) list_medium_line_t3_t2_ParamLimits

0x33c6,	// (0x0003a9ec) list_medium_line_t3_t2

0x33db,	// (0x0003aa01) list_medium_line_t3_t3_ParamLimits

0x33db,	// (0x0003aa01) list_medium_line_t3_t3

0x0002,

0xfdb2,	// (0x000473d8) list_medium_line_t3_t_ParamLimits

0xfdb2,	// (0x000473d8) list_medium_line_t3_t

0xab63,	// (0x00042189) list_medium_line_g3_g1_ParamLimits

0xab63,	// (0x00042189) list_medium_line_g3_g1

0xabd9,	// (0x000421ff) list_medium_line_g3_g2_ParamLimits

0xabd9,	// (0x000421ff) list_medium_line_g3_g2

0xab6f,	// (0x00042195) list_medium_line_g3_g3_ParamLimits

0xab6f,	// (0x00042195) list_medium_line_g3_g3

0x0002,

0xfdb9,	// (0x000473df) list_medium_line_g3_g_ParamLimits

0xfdb9,	// (0x000473df) list_medium_line_g3_g

0xadae,	// (0x000423d4) list_medium_line_g3_t1_ParamLimits

0xadae,	// (0x000423d4) list_medium_line_g3_t1

0xab63,	// (0x00042189) list_medium_line_t2_g3_g1_ParamLimits

0xab63,	// (0x00042189) list_medium_line_t2_g3_g1

0xabd9,	// (0x000421ff) list_medium_line_t2_g3_g2_ParamLimits

0xabd9,	// (0x000421ff) list_medium_line_t2_g3_g2

0xab6f,	// (0x00042195) list_medium_line_t2_g3_g3_ParamLimits

0xab6f,	// (0x00042195) list_medium_line_t2_g3_g3

0x0002,

0xfdb9,	// (0x000473df) list_medium_line_t2_g3_g_ParamLimits

0xfdb9,	// (0x000473df) list_medium_line_t2_g3_g

0x3540,	// (0x0003ab66) list_medium_line_t2_g3_t1_ParamLimits

0x3540,	// (0x0003ab66) list_medium_line_t2_g3_t1

0x355a,	// (0x0003ab80) list_medium_line_t2_g3_t2_ParamLimits

0x355a,	// (0x0003ab80) list_medium_line_t2_g3_t2

0x0001,

0xfdc0,	// (0x000473e6) list_medium_line_t2_g3_t_ParamLimits

0xfdc0,	// (0x000473e6) list_medium_line_t2_g3_t

0xab63,	// (0x00042189) list_medium_line_t3_g3_g1_ParamLimits

0xab63,	// (0x00042189) list_medium_line_t3_g3_g1

0xabd9,	// (0x000421ff) list_medium_line_t3_g3_g2_ParamLimits

0xabd9,	// (0x000421ff) list_medium_line_t3_g3_g2

0xab6f,	// (0x00042195) list_medium_line_t3_g3_g3_ParamLimits

0xab6f,	// (0x00042195) list_medium_line_t3_g3_g3

0x0002,

0xfdb9,	// (0x000473df) list_medium_line_t3_g3_g_ParamLimits

0xfdb9,	// (0x000473df) list_medium_line_t3_g3_g

0x356f,	// (0x0003ab95) list_medium_line_t3_g3_t1_ParamLimits

0x356f,	// (0x0003ab95) list_medium_line_t3_g3_t1

0x3583,	// (0x0003aba9) list_medium_line_t3_g3_t2_ParamLimits

0x3583,	// (0x0003aba9) list_medium_line_t3_g3_t2

0x3595,	// (0x0003abbb) list_medium_line_t3_g3_t3_ParamLimits

0x3595,	// (0x0003abbb) list_medium_line_t3_g3_t3

0x0002,

0xfdc5,	// (0x000473eb) list_medium_line_t3_g3_t_ParamLimits

0xfdc5,	// (0x000473eb) list_medium_line_t3_g3_t

0xe91b,	// (0x00045f41) list_medium_line_right_iconx2_g1

0xe8da,	// (0x00045f00) list_medium_line_right_iconx2_g2

0x0001,

0xfdcc,	// (0x000473f2) list_medium_line_right_iconx2_g

0xe9e6,	// (0x0004600c) list_medium_line_right_iconx2_t1

0xe91b,	// (0x00045f41) list_medium_line_t2_right_iconx2_g1

0xe8da,	// (0x00045f00) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfdcc,	// (0x000473f2) list_medium_line_t2_right_iconx2_g

0x35a7,	// (0x0003abcd) list_medium_line_t2_right_iconx2_t1

0x35b7,	// (0x0003abdd) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfdd1,	// (0x000473f7) list_medium_line_t2_right_iconx2_t

0xd9dd,	// (0x00045003) list_medium_line_x4_t4_t1

0x35c5,	// (0x0003abeb) list_medium_line_x4_t4_t2

0x35d5,	// (0x0003abfb) list_medium_line_x4_t4_t3

0x35e5,	// (0x0003ac0b) list_medium_line_x4_t4_t4

0x0003,

0xfdd6,	// (0x000473fc) list_medium_line_x4_t4_t

0xa02d,	// (0x00041653) tport_appsw_pane_ParamLimits

0xa02d,	// (0x00041653) tport_appsw_pane

0xa03e,	// (0x00041664) tport_contact_pane_ParamLimits

0xa03e,	// (0x00041664) tport_contact_pane

0xa053,	// (0x00041679) tport_listscroll_pane_ParamLimits

0xa053,	// (0x00041679) tport_listscroll_pane

0xa06c,	// (0x00041692) cell_tport_appsw_pane_ParamLimits

0xa06c,	// (0x00041692) cell_tport_appsw_pane

0xd740,	// (0x00044d66) tport_appsw_pane_g1_ParamLimits

0xd740,	// (0x00044d66) tport_appsw_pane_g1

0x088c,	// (0x00037eb2) tport_contact_pane_g1

0x0895,	// (0x00037ebb) tport_contact_pane_t1

0x08a3,	// (0x00037ec9) tport_contact_pane_t2

0x0001,

0xfddf,	// (0x00047405) tport_contact_pane_t

0x08b1,	// (0x00037ed7) list_tport_pane

0x3d85,	// (0x0003b3ab) scroll_pane_cp_030

0x08c2,	// (0x00037ee8) cell_tport_appsw_pane_g1

0x08db,	// (0x00037f01) cell_tport_appsw_pane_t1

0x185d,	// (0x00038e83) grid_highlight_pane_cp019

0xa082,	// (0x000416a8) list_tport_double_graphic_pane_ParamLimits

0xa082,	// (0x000416a8) list_tport_double_graphic_pane

0x20d6,	// (0x000396fc) list_highlight_pane_cp023_ParamLimits

0x20d6,	// (0x000396fc) list_highlight_pane_cp023

0xa08f,	// (0x000416b5) list_tport_double_graphic_pane_g1_ParamLimits

0xa08f,	// (0x000416b5) list_tport_double_graphic_pane_g1

0xa09c,	// (0x000416c2) list_tport_double_graphic_pane_t1_ParamLimits

0xa09c,	// (0x000416c2) list_tport_double_graphic_pane_t1

0xa0b1,	// (0x000416d7) list_tport_double_graphic_pane_t2_ParamLimits

0xa0b1,	// (0x000416d7) list_tport_double_graphic_pane_t2

0x0001,

0xfdeb,	// (0x00047411) list_tport_double_graphic_pane_t_ParamLimits

0xfdeb,	// (0x00047411) list_tport_double_graphic_pane_t

0x185d,	// (0x00038e83) main_cale_note_pane

0x86bc,	// (0x0003fce2) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x86bc,	// (0x0003fce2) cell_vitu2_function_top_wide_pane_cp01

0x9bdd,	// (0x00041203) wait_bar_pane_cp05_ParamLimits

0x185d,	// (0x00038e83) listscroll_cmail_pane

0x092a,	// (0x00037f50) list_cmail_pane

0xa0c3,	// (0x000416e9) list_cmail_body_pane

0xa0c3,	// (0x000416e9) list_single_cmail_header_caption_pane

0xa0d9,	// (0x000416ff) list_single_cmail_header_detail_pane_ParamLimits

0xa0d9,	// (0x000416ff) list_single_cmail_header_detail_pane

0x0988,	// (0x00037fae) list_single_cmail_header_caption_pane_t1

0x35f5,	// (0x0003ac1b) list_single_cmail_header_detail_pane_g1_ParamLimits

0x35f5,	// (0x0003ac1b) list_single_cmail_header_detail_pane_g1

0xab6f,	// (0x00042195) list_single_cmail_header_detail_pane_g2_ParamLimits

0xab6f,	// (0x00042195) list_single_cmail_header_detail_pane_g2

0x0002,

0xfdf0,	// (0x00047416) list_single_cmail_header_detail_pane_g_ParamLimits

0xfdf0,	// (0x00047416) list_single_cmail_header_detail_pane_g

0xe9fc,	// (0x00046022) list_single_cmail_header_detail_pane_t1_ParamLimits

0xe9fc,	// (0x00046022) list_single_cmail_header_detail_pane_t1

0xea24,	// (0x0004604a) list_single_cmail_header_editor_pane_bg_ParamLimits

0xea24,	// (0x0004604a) list_single_cmail_header_editor_pane_bg

0x09a3,	// (0x00037fc9) list_cmail_body_pane_g1

0x09ac,	// (0x00037fd2) list_cmail_body_pane_t1

0xd799,	// (0x00044dbf) list_single_cmail_header_editor_pane_bg_g1

0xaccc,	// (0x000422f2) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd7a9,	// (0x00044dcf) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd7a1,	// (0x00044dc7) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd9eb,	// (0x00045011) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd7c9,	// (0x00044def) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd7b9,	// (0x00044ddf) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd7c1,	// (0x00044de7) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xacac,	// (0x000422d2) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xa101,	// (0x00041727) calenote_gesture_pane_ParamLimits

0xa101,	// (0x00041727) calenote_gesture_pane

0xa11d,	// (0x00041743) calenote_window_pane_ParamLimits

0xa11d,	// (0x00041743) calenote_window_pane

0x09ea,	// (0x00038010) popup_note_window_cp01

0xa139,	// (0x0004175f) calenote_swipe_1_pane_ParamLimits

0xa139,	// (0x0004175f) calenote_swipe_1_pane

0x9f73,	// (0x00041599) calenote_swipe_2_pane_ParamLimits

0x9f73,	// (0x00041599) calenote_swipe_2_pane

0x05da,	// (0x00037c00) calenote_swipe_1_pane_g1_ParamLimits

0x05da,	// (0x00037c00) calenote_swipe_1_pane_g1

0x05e7,	// (0x00037c0d) calenote_swipe_1_pane_g2_ParamLimits

0x05e7,	// (0x00037c0d) calenote_swipe_1_pane_g2

0x0001,

0xfd24,	// (0x0004734a) calenote_swipe_1_pane_g_ParamLimits

0xfd24,	// (0x0004734a) calenote_swipe_1_pane_g

0x0a0f,	// (0x00038035) calenote_swipe_1_pane_t1_ParamLimits

0x0a0f,	// (0x00038035) calenote_swipe_1_pane_t1

0x05da,	// (0x00037c00) calenote_swipe_2_pane_g1_ParamLimits

0x05da,	// (0x00037c00) calenote_swipe_2_pane_g1

0x0a2e,	// (0x00038054) calenote_swipe_2_pane_g2_ParamLimits

0x0a2e,	// (0x00038054) calenote_swipe_2_pane_g2

0x0001,

0xfdfc,	// (0x00047422) calenote_swipe_2_pane_g_ParamLimits

0xfdfc,	// (0x00047422) calenote_swipe_2_pane_g

0x0a3a,	// (0x00038060) calenote_swipe_2_pane_t1_ParamLimits

0x0a3a,	// (0x00038060) calenote_swipe_2_pane_t1

0x185d,	// (0x00038e83) main_mup_navstr_pane

0x749c,	// (0x0003eac2) main_mup3_pane_t7_ParamLimits

0x749c,	// (0x0003eac2) main_mup3_pane_t7

0xee5a,	// (0x00046480) main_mp4_pane_g6_ParamLimits

0xee5a,	// (0x00046480) main_mp4_pane_g6

0xeff4,	// (0x0004661a) main_image3_pane_t4_ParamLimits

0xeff4,	// (0x0004661a) main_image3_pane_t4

0xa14e,	// (0x00041774) popup_navstr_preview_pane_ParamLimits

0xa14e,	// (0x00041774) popup_navstr_preview_pane

0xa15e,	// (0x00041784) scroll_navstr_pane_ParamLimits

0xa15e,	// (0x00041784) scroll_navstr_pane

0x185d,	// (0x00038e83) bg_popup_preview_window_pane_cp04

0x0a79,	// (0x0003809f) popup_navstr_preview_pane_t1

0xa172,	// (0x00041798) scroll_navstr_pane_g1_ParamLimits

0xa172,	// (0x00041798) scroll_navstr_pane_g1

0xa186,	// (0x000417ac) scroll_navstr_pane_t1_ParamLimits

0xa186,	// (0x000417ac) scroll_navstr_pane_t1

0x0a06,	// (0x0003802c) bg_button_pane_cp014

0x0a06,	// (0x0003802c) bg_button_pane_cp030

0xe880,	// (0x00045ea6) list_double_fisheye_pane_g4_ParamLimits

0xe880,	// (0x00045ea6) list_double_fisheye_pane_g4

0xe88c,	// (0x00045eb2) list_double_fisheye_pane_g5_ParamLimits

0xe88c,	// (0x00045eb2) list_double_fisheye_pane_g5

0x093a,	// (0x00037f60) sp_fs_scroll_pane_cp03

0x07a0,	// (0x00037dc6) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x07ac,	// (0x00037dd2) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfd41,	// (0x00047367) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x07b8,	// (0x00037dde) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x0932,	// (0x00037f58) sp_fs_scroll_pane_cp02

0x3dc7,	// (0x0003b3ed) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x3dc7,	// (0x0003b3ed) popup_sp_fs_calendar_preview_list_single_pane

0x185d,	// (0x00038e83) main_cam6_pano_pane

0x20d6,	// (0x000396fc) main_mup3_pane_ParamLimits

0x185d,	// (0x00038e83) main_phacti_pane

0x9ad0,	// (0x000410f6) bg_button_pane_cp11

0x9ae8,	// (0x0004110e) main_mobtv_info_pane_g2_ParamLimits

0x9ae8,	// (0x0004110e) main_mobtv_info_pane_g2

0x0001,

0xfca1,	// (0x000472c7) main_mobtv_info_pane_g_ParamLimits

0xfca1,	// (0x000472c7) main_mobtv_info_pane_g

0x9c9b,	// (0x000412c1) sc_clock_pane_t5_ParamLimits

0x9c9b,	// (0x000412c1) sc_clock_pane_t5

0x9d0e,	// (0x00041334) main_radioblah_pane_g1_ParamLimits

0xe7e5,	// (0x00045e0b) main_radioblah_pane_t3_ParamLimits

0xe7e5,	// (0x00045e0b) main_radioblah_pane_t3

0xe7fd,	// (0x00045e23) main_radioblah_pane_t4_ParamLimits

0xe7fd,	// (0x00045e23) main_radioblah_pane_t4

0x9d36,	// (0x0004135c) main_radioblah_text_pane_ParamLimits

0x9d36,	// (0x0004135c) main_radioblah_text_pane

0x9d48,	// (0x0004136e) main_radioblah_info_pane_g1_ParamLimits

0x9ddb,	// (0x00041401) main_radioblah_info_pane_t4_ParamLimits

0x9ddb,	// (0x00041401) main_radioblah_info_pane_t4

0x20d6,	// (0x000396fc) main_sp_fs_calendar_pane

0xa19c,	// (0x000417c2) main_phacti_pane_g1

0xa1a4,	// (0x000417ca) phacti_note_pane_ParamLimits

0xa1a4,	// (0x000417ca) phacti_note_pane

0x0acb,	// (0x000380f1) phacti_term_pane_ParamLimits

0x0acb,	// (0x000380f1) phacti_term_pane

0x0ae0,	// (0x00038106) phacti_note_pane_t1_ParamLimits

0x0ae0,	// (0x00038106) phacti_note_pane_t1

0xea36,	// (0x0004605c) phacti_term_pane_g1

0xea3e,	// (0x00046064) phacti_term_pane_t1_ParamLimits

0xea3e,	// (0x00046064) phacti_term_pane_t1

0x0af7,	// (0x0003811d) popup_sp_fs_calendar_preview_list_single_pane_g1

0x0aff,	// (0x00038125) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfe06,	// (0x0004742c) popup_sp_fs_calendar_preview_list_single_pane_g

0x0b07,	// (0x0003812d) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x0b07,	// (0x0003812d) popup_sp_fs_calendar_preview_list_single_pane_t1

0x0b1d,	// (0x00038143) aid_popup_sp_fs_bg_corner_pane

0xcd86,	// (0x000443ac) popup_sp_fs_calendar_preview_bg_pane_g1

0x185d,	// (0x00038e83) popup_sp_fs_calendar_preview_bg_pane

0x0b25,	// (0x0003814b) popup_sp_fs_calendar_preview_list_pane

0x20d6,	// (0x000396fc) bg_main_sp_fs_cale_pane_ParamLimits

0x20d6,	// (0x000396fc) bg_main_sp_fs_cale_pane

0xea68,	// (0x0004608e) listscroll_cale_mrui_pane_ParamLimits

0xea68,	// (0x0004608e) listscroll_cale_mrui_pane

0xea7c,	// (0x000460a2) listscroll_sp_fs_schedule_track_pane

0xea85,	// (0x000460ab) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xea85,	// (0x000460ab) main_sp_fs_ctrlbar_pane_cp01

0x0b54,	// (0x0003817a) main_sp_fs_ribbon_pane

0xea96,	// (0x000460bc) popup_sp_fs_cale_preview_window

0xa1f3,	// (0x00041819) list_single_sp_fs_schedule_track_pane_ParamLimits

0xa1f3,	// (0x00041819) list_single_sp_fs_schedule_track_pane

0x20d6,	// (0x000396fc) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x20d6,	// (0x000396fc) bg_sp_fs_highlight_list_pane_cp03

0xa206,	// (0x0004182c) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xa206,	// (0x0004182c) list_single_sp_fs_schedule_track_pane_g1

0xa212,	// (0x00041838) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xa212,	// (0x00041838) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfe0b,	// (0x00047431) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfe0b,	// (0x00047431) list_single_sp_fs_schedule_track_pane_g

0xa21e,	// (0x00041844) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xa21e,	// (0x00041844) list_single_sp_fs_schedule_track_pane_t1

0xa238,	// (0x0004185e) sp_fs_schedule_track_pane_ParamLimits

0xa238,	// (0x0004185e) sp_fs_schedule_track_pane

0x0bb1,	// (0x000381d7) sp_fs_schedule_track_pane_g1

0x0bb9,	// (0x000381df) sp_fs_schedule_track_pane_g2

0x0bc1,	// (0x000381e7) sp_fs_schedule_track_pane_g3

0x0bc9,	// (0x000381ef) sp_fs_schedule_track_pane_g4

0x0bd1,	// (0x000381f7) sp_fs_schedule_track_pane_g5

0x0004,

0xfe10,	// (0x00047436) sp_fs_schedule_track_pane_g

0xd799,	// (0x00044dbf) bg_sp_fs_schedule_viewer_highlight_g1

0xaccc,	// (0x000422f2) bg_sp_fs_schedule_viewer_highlight_g2

0xd7a1,	// (0x00044dc7) bg_sp_fs_schedule_viewer_highlight_g3

0xd7a9,	// (0x00044dcf) bg_sp_fs_schedule_viewer_highlight_g4

0xd9eb,	// (0x00045011) bg_sp_fs_schedule_viewer_highlight_g5

0xd7b9,	// (0x00044ddf) bg_sp_fs_schedule_viewer_highlight_g6

0xd7c1,	// (0x00044de7) bg_sp_fs_schedule_viewer_highlight_g7

0xd7c9,	// (0x00044def) bg_sp_fs_schedule_viewer_highlight_g8

0xacac,	// (0x000422d2) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfe1b,	// (0x00047441) bg_sp_fs_schedule_viewer_highlight_g

0x185d,	// (0x00038e83) bg_main_sp_fs_ribbon_pane

0xa249,	// (0x0004186f) main_sp_fs_ribbon_pane_g1

0x0be2,	// (0x00038208) main_sp_fs_ribbon_pane_t1

0xa252,	// (0x00041878) main_sp_fs_ribbon_pane_t2

0x0c00,	// (0x00038226) main_sp_fs_ribbon_pane_t3

0x0002,

0xfe2e,	// (0x00047454) main_sp_fs_ribbon_pane_t

0x0c0f,	// (0x00038235) main_sp_fs_ribbon_scheduler_pane

0x0c17,	// (0x0003823d) bg_main_sp_fs_ribbon_pane_g1

0x0c20,	// (0x00038246) bg_main_sp_fs_ribbon_pane_g2

0x0c29,	// (0x0003824f) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfe35,	// (0x0004745b) bg_main_sp_fs_ribbon_pane_g

0x0c31,	// (0x00038257) main_sp_fs_ribbon_scheduler_pane_g1

0x0c3a,	// (0x00038260) main_sp_fs_ribbon_scheduler_pane_g2

0x0c43,	// (0x00038269) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfe3c,	// (0x00047462) main_sp_fs_ribbon_scheduler_pane_g

0xe857,	// (0x00045e7d) list_cale_mrui_pane

0x0c4c,	// (0x00038272) sp_fs_scroll_pane_cp07_ParamLimits

0x0c4c,	// (0x00038272) sp_fs_scroll_pane_cp07

0xa261,	// (0x00041887) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xa261,	// (0x00041887) bg_sp_fs_schedule_viewer_highlight

0x0c6e,	// (0x00038294) list_single_sp_fs_schedule_track_pane_cp01

0x0c76,	// (0x0003829c) list_sp_fs_schedule_track_pane

0x0c7e,	// (0x000382a4) sp_fs_scroll_pane_cp06_ParamLimits

0x0c7e,	// (0x000382a4) sp_fs_scroll_pane_cp06

0xcd86,	// (0x000443ac) bgmain_sp_fs_calendar_pane_g1

0x362f,	// (0x0003ac55) list_single_cale_mrui_pane_ParamLimits

0x362f,	// (0x0003ac55) list_single_cale_mrui_pane

0xeaa5,	// (0x000460cb) list_single_cale_mrui_row_pane_ParamLimits

0xeaa5,	// (0x000460cb) list_single_cale_mrui_row_pane

0xeab2,	// (0x000460d8) list_single_cale_mrui_row_pane_g1_ParamLimits

0xeab2,	// (0x000460d8) list_single_cale_mrui_row_pane_g1

0xeaea,	// (0x00046110) list_single_cale_mrui_row_pane_t1_ParamLimits

0xeaea,	// (0x00046110) list_single_cale_mrui_row_pane_t1

0x3653,	// (0x0003ac79) list_single_cale_mrui_row_pane_t2_ParamLimits

0x3653,	// (0x0003ac79) list_single_cale_mrui_row_pane_t2

0xeafc,	// (0x00046122) list_single_cale_mrui_row_pane_t3_ParamLimits

0xeafc,	// (0x00046122) list_single_cale_mrui_row_pane_t3

0xeb2b,	// (0x00046151) list_single_cale_mrui_row_pane_t4_ParamLimits

0xeb2b,	// (0x00046151) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe48,	// (0x0004746e) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe48,	// (0x0004746e) list_single_cale_mrui_row_pane_t

0x36b9,	// (0x0003acdf) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x36b9,	// (0x0003acdf) list_single_cmail_header_editor_pane_bg_cp01

0x36dd,	// (0x0003ad03) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x36dd,	// (0x0003ad03) list_single_cmail_header_editor_pane_bg_cp02

0xa271,	// (0x00041897) main_radioblah_text_pane_t1_ParamLimits

0xa271,	// (0x00041897) main_radioblah_text_pane_t1

0x0ca9,	// (0x000382cf) cam6_indi_pane_cp01

0x0cb1,	// (0x000382d7) cam6_mode_pane_cp01

0x0cb9,	// (0x000382df) cam6_pano_pane

0x0cc2,	// (0x000382e8) cam6_zoom_pane_cp01

0x0cca,	// (0x000382f0) cam6_pano_image_pane

0x0cd3,	// (0x000382f9) cam6_pano_pane_g1

0xe563,	// (0x00045b89) cam6_pano_pane_g2

0x0cdc,	// (0x00038302) cam6_pano_pane_g3

0x0ce5,	// (0x0003830b) cam6_pano_pane_g4

0xd2ec,	// (0x00044912) cam6_pano_pane_g5

0x0cee,	// (0x00038314) cam6_pano_pane_g6

0x0cf6,	// (0x0003831c) cam6_pano_pane_g7

0x0cfe,	// (0x00038324) cam6_pano_pane_g8

0x0d07,	// (0x0003832d) cam6_pano_pane_g9

0x0008,

0xfe51,	// (0x00047477) cam6_pano_pane_g

0x185d,	// (0x00038e83) main_browser_tag_pane

0x0a59,	// (0x0003807f) grid_navstr_albumart_pane

0x0d10,	// (0x00038336) cell_navstr_albumart_pane_ParamLimits

0x0d10,	// (0x00038336) cell_navstr_albumart_pane

0xb64b,	// (0x00042c71) cell_navstr_albumart_pane_g1

0xc728,	// (0x00043d4e) cell_navstr_albumart_pane_g2

0xc738,	// (0x00043d5e) cell_navstr_albumart_pane_g3

0xc730,	// (0x00043d56) cell_navstr_albumart_pane_g4

0x0003,

0xfe64,	// (0x0004748a) cell_navstr_albumart_pane_g

0xa28a,	// (0x000418b0) bt_list_pane_ParamLimits

0xa28a,	// (0x000418b0) bt_list_pane

0xa29d,	// (0x000418c3) bt_list_pane_t1

0xa2ac,	// (0x000418d2) bt_list_pane_t2

0x0001,

0xfe6d,	// (0x00047493) bt_list_pane_t

0x185d,	// (0x00038e83) main_cale_prevew_pane

0xa2bb,	// (0x000418e1) popup_cale_preview_window_ParamLimits

0xa2bb,	// (0x000418e1) popup_cale_preview_window

0x20d6,	// (0x000396fc) bg_popup_preview_window_pane_cp05_ParamLimits

0x20d6,	// (0x000396fc) bg_popup_preview_window_pane_cp05

0x0d6f,	// (0x00038395) list_cale_preview_pane_ParamLimits

0x0d6f,	// (0x00038395) list_cale_preview_pane

0xa2d0,	// (0x000418f6) list_double_cale_preview_pane_ParamLimits

0xa2d0,	// (0x000418f6) list_double_cale_preview_pane

0xa2e1,	// (0x00041907) list_single_cale_preview_pane_ParamLimits

0xa2e1,	// (0x00041907) list_single_cale_preview_pane

0x0dbd,	// (0x000383e3) list_single_cale_preview_pane_g1

0x0dc5,	// (0x000383eb) list_single_cale_preview_pane_t1_ParamLimits

0x0dc5,	// (0x000383eb) list_single_cale_preview_pane_t1

0xa2f5,	// (0x0004191b) list_double_cale_preview_pane_g1

0xa2fd,	// (0x00041923) list_double_cale_preview_pane_t1_ParamLimits

0xa2fd,	// (0x00041923) list_double_cale_preview_pane_t1

0xa312,	// (0x00041938) list_double_cale_preview_pane_t2_ParamLimits

0xa312,	// (0x00041938) list_double_cale_preview_pane_t2

0x0001,

0xfe72,	// (0x00047498) list_double_cale_preview_pane_t_ParamLimits

0xfe72,	// (0x00047498) list_double_cale_preview_pane_t

0x185d,	// (0x00038e83) main_ezdial_pane

0x20d6,	// (0x000396fc) main_sp_fs_email_pane_ParamLimits

0x9f97,	// (0x000415bd) cmail_ddmenu_btn01_pane_ParamLimits

0x9f97,	// (0x000415bd) cmail_ddmenu_btn01_pane

0x9faa,	// (0x000415d0) cmail_ddmenu_btn02_pane_ParamLimits

0x9faa,	// (0x000415d0) cmail_ddmenu_btn02_pane

0x9fcd,	// (0x000415f3) cmail_ddmenu_btn03_pane_ParamLimits

0x9fcd,	// (0x000415f3) cmail_ddmenu_btn03_pane

0x32ba,	// (0x0003a8e0) main_sp_fs_ctrlbar_pane_ParamLimits

0x32db,	// (0x0003a901) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xa0c3,	// (0x000416e9) list_cmail_body_pane_ParamLimits

0xe9f4,	// (0x0004601a) bg_button_pane_cp12

0x0996,	// (0x00037fbc) list_single_cmail_header_detail_pane_g3_ParamLimits

0x0996,	// (0x00037fbc) list_single_cmail_header_detail_pane_g3

0x360b,	// (0x0003ac31) list_single_cmail_header_detail_pane_t2_ParamLimits

0x360b,	// (0x0003ac31) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdf7,	// (0x0004741d) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdf7,	// (0x0004741d) list_single_cmail_header_detail_pane_t

0xea53,	// (0x00046079) phacti_term_pane_t2_ParamLimits

0xea53,	// (0x00046079) phacti_term_pane_t2

0x0001,

0xfe01,	// (0x00047427) phacti_term_pane_t_ParamLimits

0xfe01,	// (0x00047427) phacti_term_pane_t

0x0df2,	// (0x00038418) aid_size_list_single_double

0xa32a,	// (0x00041950) popup_ezdial_listscroll_window

0xa340,	// (0x00041966) popup_number_entry_window_cp01

0xb4dc,	// (0x00042b02) bg_popup_call_pane_cp09

0x0e23,	// (0x00038449) ezdial_list_pane

0x0e2b,	// (0x00038451) scroll_pane_cp23

0xc94b,	// (0x00043f71) bg_button_pane_cp028_ParamLimits

0xc94b,	// (0x00043f71) bg_button_pane_cp028

0xa34c,	// (0x00041972) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xa34c,	// (0x00041972) cmail_ddmenu_btn01_pane_g1

0xa35b,	// (0x00041981) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xa35b,	// (0x00041981) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe77,	// (0x0004749d) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe77,	// (0x0004749d) cmail_ddmenu_btn01_pane_g

0x0e51,	// (0x00038477) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x0e51,	// (0x00038477) cmail_ddmenu_btn01_pane_t1

0xc94b,	// (0x00043f71) bg_button_pane_cp029_ParamLimits

0xc94b,	// (0x00043f71) bg_button_pane_cp029

0xa36b,	// (0x00041991) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xa36b,	// (0x00041991) cmail_ddmenu_btn02_pane_g1

0xa386,	// (0x000419ac) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xa386,	// (0x000419ac) cmail_ddmenu_btn02_pane_t1

0x20d6,	// (0x000396fc) bg_button_pane_cp031_ParamLimits

0x20d6,	// (0x000396fc) bg_button_pane_cp031

0xa36b,	// (0x00041991) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xa36b,	// (0x00041991) cmail_ddmenu_btn03_pane_g1

0xa386,	// (0x000419ac) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xa386,	// (0x000419ac) cmail_ddmenu_btn03_pane_t1

0x7f94,	// (0x0003f5ba) cell_dialer2_keypad_pane_t1_ParamLimits

0x7fae,	// (0x0003f5d4) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x7fae,	// (0x0003f5d4) cell_dialer2_keypad_pane_t1_copy1

0x9977,	// (0x00040f9d) ncimui_group_button_pane

0x20d6,	// (0x000396fc) main_sp_fs_calendar_pane_ParamLimits

0xa0c3,	// (0x000416e9) list_single_cmail_header_caption_pane_ParamLimits

0xdd1d,	// (0x00045343) aid_recal_txt_sm_pane

0x185d,	// (0x00038e83) mian_recal_day_pane

0xea96,	// (0x000460bc) popup_sp_fs_cale_preview_window_ParamLimits

0x185d,	// (0x00038e83) list_recal_day_pane

0xeb63,	// (0x00046189) list_single_recal_day_pane_ParamLimits

0xeb63,	// (0x00046189) list_single_recal_day_pane

0x0ea6,	// (0x000384cc) list_single_recal_day_pane_g1_ParamLimits

0x0ea6,	// (0x000384cc) list_single_recal_day_pane_g1

0xeb75,	// (0x0004619b) list_single_recal_day_pane_g2_ParamLimits

0xeb75,	// (0x0004619b) list_single_recal_day_pane_g2

0xeb81,	// (0x000461a7) list_single_recal_day_pane_g3_ParamLimits

0xeb81,	// (0x000461a7) list_single_recal_day_pane_g3

0x36fb,	// (0x0003ad21) list_single_recal_day_pane_g4_ParamLimits

0x36fb,	// (0x0003ad21) list_single_recal_day_pane_g4

0xeb8d,	// (0x000461b3) list_single_recal_day_pane_g5_ParamLimits

0xeb8d,	// (0x000461b3) list_single_recal_day_pane_g5

0xeb99,	// (0x000461bf) list_single_recal_day_pane_g6_ParamLimits

0xeb99,	// (0x000461bf) list_single_recal_day_pane_g6

0x0005,

0xfe86,	// (0x000474ac) list_single_recal_day_pane_g_ParamLimits

0xfe86,	// (0x000474ac) list_single_recal_day_pane_g

0xeba5,	// (0x000461cb) list_single_recal_day_pane_t1

0xebb3,	// (0x000461d9) list_single_recal_day_pane_t2

0x0001,

0xfe93,	// (0x000474b9) list_single_recal_day_pane_t

0xa3ad,	// (0x000419d3) ncimui_query_button_pane_ParamLimits

0xa3ad,	// (0x000419d3) ncimui_query_button_pane

0xa3bd,	// (0x000419e3) ncimui_query_button_pane_t1_ParamLimits

0xa3bd,	// (0x000419e3) ncimui_query_button_pane_t1

0x0ed5,	// (0x000384fb) ncimui_query_button_pane_t2_ParamLimits

0x0ed5,	// (0x000384fb) ncimui_query_button_pane_t2

0x0001,

0xfe98,	// (0x000474be) ncimui_query_button_pane_t_ParamLimits

0xfe98,	// (0x000474be) ncimui_query_button_pane_t

0xa3d0,	// (0x000419f6) query_button_pane_ParamLimits

0xa3d0,	// (0x000419f6) query_button_pane

0x185d,	// (0x00038e83) bg_button_pane_cp0028

0x0ef5,	// (0x0003851b) query_button_pane_t1

0x62d0,	// (0x0003d8f6) main_tport_pane_ParamLimits

0x9ff2,	// (0x00041618) bg_popup_window_pane_cp01_ParamLimits

0x9ff2,	// (0x00041618) bg_popup_window_pane_cp01

0xa00a,	// (0x00041630) heading_pane_cp08_ParamLimits

0xa00a,	// (0x00041630) heading_pane_cp08

0xa01c,	// (0x00041642) heading_pane_cp07_ParamLimits

0xa01c,	// (0x00041642) heading_pane_cp07

0x08cb,	// (0x00037ef1) cell_tport_appsw_pane_g2

0x0002,

0xfde4,	// (0x0004740a) cell_tport_appsw_pane_g

0x2ffa,	// (0x0003a620) input_candi_list_open_g1

0xae9e,	// (0x000424c4) list_cale_time_pane_g6_ParamLimits

0xae9e,	// (0x000424c4) list_cale_time_pane_g6

0x6f76,	// (0x0003e59c) aid_size_touch_calib_1_ParamLimits

0x6f76,	// (0x0003e59c) aid_size_touch_calib_1

0x6f82,	// (0x0003e5a8) aid_size_touch_calib_2_ParamLimits

0x6f82,	// (0x0003e5a8) aid_size_touch_calib_2

0x6f96,	// (0x0003e5bc) aid_size_touch_calib_3_ParamLimits

0x6f96,	// (0x0003e5bc) aid_size_touch_calib_3

0x6fae,	// (0x0003e5d4) aid_size_touch_calib_4_ParamLimits

0x6fae,	// (0x0003e5d4) aid_size_touch_calib_4

0x6fc0,	// (0x0003e5e6) main_touch_calib_button_group_pane_ParamLimits

0x6fc0,	// (0x0003e5e6) main_touch_calib_button_group_pane

0x6fd6,	// (0x0003e5fc) main_touch_calib_pane_g1_ParamLimits

0x6fe2,	// (0x0003e608) main_touch_calib_pane_g2_ParamLimits

0x6fee,	// (0x0003e614) main_touch_calib_pane_g3_ParamLimits

0x6ffa,	// (0x0003e620) main_touch_calib_pane_g4_ParamLimits

0xf7cb,	// (0x00046df1) main_touch_calib_pane_g_ParamLimits

0x7006,	// (0x0003e62c) main_touch_calib_pane_t1_ParamLimits

0x701e,	// (0x0003e644) main_touch_calib_pane_t2_ParamLimits

0x7036,	// (0x0003e65c) main_touch_calib_pane_t3_ParamLimits

0x7048,	// (0x0003e66e) main_touch_calib_pane_t4_ParamLimits

0x705a,	// (0x0003e680) main_touch_calib_pane_t5_ParamLimits

0xf7d4,	// (0x00046dfa) main_touch_calib_pane_t_ParamLimits

0xd117,	// (0x0004473d) list_single_fp_cale_pane_g3_ParamLimits

0xd117,	// (0x0004473d) list_single_fp_cale_pane_g3

0x20d6,	// (0x000396fc) bg_button_pane_cp012_ParamLimits

0x20d6,	// (0x000396fc) bg_vkb2_func_pane_cp03_ParamLimits

0x8e40,	// (0x00040466) cell_vitu2_function_top_pane_g1_ParamLimits

0x20d6,	// (0x000396fc) bg_vkb2_func_pane_cp04_ParamLimits

0x992d,	// (0x00040f53) main_ncimui_button_group_pane_ParamLimits

0x992d,	// (0x00040f53) main_ncimui_button_group_pane

0x9965,	// (0x00040f8b) main_ncimui_pane_t3_ParamLimits

0x9965,	// (0x00040f8b) main_ncimui_pane_t3

0x0aae,	// (0x000380d4) phacti_button_group_pane

0x0df2,	// (0x00038418) aid_size_list_single_double_ParamLimits

0xa32a,	// (0x00041950) popup_ezdial_listscroll_window_ParamLimits

0xa340,	// (0x00041966) popup_number_entry_window_cp01_ParamLimits

0xa3e2,	// (0x00041a08) phacti_button_pane_ParamLimits

0xa3e2,	// (0x00041a08) phacti_button_pane

0x185d,	// (0x00038e83) bg_button_pane_cp14

0x0f12,	// (0x00038538) phacti_button_pane_t1

0xa3f1,	// (0x00041a17) main_touch_calib_button_pane_ParamLimits

0xa3f1,	// (0x00041a17) main_touch_calib_button_pane

0x1fe3,	// (0x00039609) bg_button_pane_cp18_ParamLimits

0x1fe3,	// (0x00039609) bg_button_pane_cp18

0x0f30,	// (0x00038556) main_touch_calib_button_pane_t1_ParamLimits

0x0f30,	// (0x00038556) main_touch_calib_button_pane_t1

0x0f46,	// (0x0003856c) main_touch_calib_button_pane_t2_ParamLimits

0x0f46,	// (0x0003856c) main_touch_calib_button_pane_t2

0x0001,

0xfe9d,	// (0x000474c3) main_touch_calib_button_pane_t_ParamLimits

0xfe9d,	// (0x000474c3) main_touch_calib_button_pane_t

0x185d,	// (0x00038e83) cell_ncimui_button_pane

0x185d,	// (0x00038e83) bg_button_pane_cp032

0x0f64,	// (0x0003858a) cell_ncimui_button_pane_t1

0xefd4,	// (0x000465fa) image3_infobar_pane_ParamLimits

0xefd4,	// (0x000465fa) image3_infobar_pane

0x9cc3,	// (0x000412e9) fs_bigclock_status_pane_ParamLimits

0x9cc3,	// (0x000412e9) fs_bigclock_status_pane

0x9cd0,	// (0x000412f6) main_fs_bigclock_clock_pane_ParamLimits

0x9cd0,	// (0x000412f6) main_fs_bigclock_clock_pane

0x9cdf,	// (0x00041305) main_fs_bigclock_indi_pane_ParamLimits

0x9cdf,	// (0x00041305) main_fs_bigclock_indi_pane

0x9cf3,	// (0x00041319) main_fs_bigclock_swipe_pane_ParamLimits

0x9cf3,	// (0x00041319) main_fs_bigclock_swipe_pane

0x185d,	// (0x00038e83) main_fs_clock_dumped_data

0xe670,	// (0x00045c96) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe670,	// (0x00045c96) list_single_fs_bigclock_indicator_pane_g1

0xe68a,	// (0x00045cb0) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe68a,	// (0x00045cb0) list_single_fs_bigclock_indicator_pane_g2

0xe6a4,	// (0x00045cca) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe6a4,	// (0x00045cca) list_single_fs_bigclock_indicator_pane_g3

0xe6be,	// (0x00045ce4) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe6be,	// (0x00045ce4) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfcd5,	// (0x000472fb) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfcd5,	// (0x000472fb) list_single_fs_bigclock_indicator_pane_g

0xe6e2,	// (0x00045d08) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe6e2,	// (0x00045d08) list_single_fs_bigclock_indicator_pane_t1

0xe70a,	// (0x00045d30) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe70a,	// (0x00045d30) list_single_fs_bigclock_indicator_pane_t2

0xe732,	// (0x00045d58) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe732,	// (0x00045d58) list_single_fs_bigclock_indicator_pane_t3

0xe75a,	// (0x00045d80) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe75a,	// (0x00045d80) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfce0,	// (0x00047306) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfce0,	// (0x00047306) list_single_fs_bigclock_indicator_pane_t

0x0f72,	// (0x00038598) image3_infobar_fav_pane_ParamLimits

0x0f72,	// (0x00038598) image3_infobar_fav_pane

0x0f82,	// (0x000385a8) image3_infobar_loc_pane_ParamLimits

0x0f82,	// (0x000385a8) image3_infobar_loc_pane

0x0f96,	// (0x000385bc) image3_infobar_time_pane_ParamLimits

0x0f96,	// (0x000385bc) image3_infobar_time_pane

0xcd86,	// (0x000443ac) image3_infobar_time_pane_g1

0x0fa6,	// (0x000385cc) image3_infobar_time_pane_t1

0xcd86,	// (0x000443ac) image3_infobar_loc_pane_g1

0x0fb4,	// (0x000385da) image3_infobar_loc_pane_g2

0x0001,

0xfea2,	// (0x000474c8) image3_infobar_loc_pane_g

0x0fbc,	// (0x000385e2) image3_infobar_loc_pane_t1

0xcd86,	// (0x000443ac) image3_infobar_fav_pane_g1

0x0fca,	// (0x000385f0) image3_infobar_fav_pane_g2

0x0001,

0xfea7,	// (0x000474cd) image3_infobar_fav_pane_g

0x0fd2,	// (0x000385f8) fs_bigclock_status_battery_pane

0x0fdb,	// (0x00038601) fs_bigclock_status_signal_pane

0x0fe4,	// (0x0003860a) fs_bigclock_status_title_pane

0x0fed,	// (0x00038613) fs_bigclock_status_signal_pane_g1

0x0ff6,	// (0x0003861c) fs_bigclock_status_signal_pane_g2

0x0001,

0xfeac,	// (0x000474d2) fs_bigclock_status_signal_pane_g

0x0ffe,	// (0x00038624) fs_bigclock_status_battery_pane_g1

0x1007,	// (0x0003862d) fs_bigclock_status_battery_pane_g2

0x0001,

0xfeb1,	// (0x000474d7) fs_bigclock_status_battery_pane_g

0x100f,	// (0x00038635) fs_bigclock_status_title_pane_t1

0xcd86,	// (0x000443ac) main_fs_bigclock_clock_pane_g1

0x101d,	// (0x00038643) main_fs_bigclock_clock_pane_g2

0x101d,	// (0x00038643) main_fs_bigclock_clock_pane_g3

0x101d,	// (0x00038643) main_fs_bigclock_clock_pane_g4

0x0003,

0xfeb6,	// (0x000474dc) main_fs_bigclock_clock_pane_g

0x1025,	// (0x0003864b) main_fs_bigclock_clock_pane_t1

0x1033,	// (0x00038659) main_fs_bigclock_clock_pane_t2

0x0001,

0xfebf,	// (0x000474e5) main_fs_bigclock_clock_pane_t

0x1042,	// (0x00038668) list_single_fs_bigclock_indicator_pane_ParamLimits

0x1042,	// (0x00038668) list_single_fs_bigclock_indicator_pane

0xa404,	// (0x00041a2a) list_single_fs_bigclock_pane_ParamLimits

0xa404,	// (0x00041a2a) list_single_fs_bigclock_pane

0x10ba,	// (0x000386e0) main_fs_bigclock_indicator_pane_t1

0x10c9,	// (0x000386ef) list_single_fs_bigclock_pane_g1

0x10d1,	// (0x000386f7) list_single_fs_bigclock_pane_t1

0xcd86,	// (0x000443ac) main_fs_bigclock_swipe_pane_g1

0x110f,	// (0x00038735) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfed0,	// (0x000474f6) main_fs_bigclock_swipe_pane_g

0x1117,	// (0x0003873d) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x1117,	// (0x0003873d) main_fs_bigclock_swipe_pane_t1

0x53b3,	// (0x0003c9d9) call_type_pane_ParamLimits

0x185d,	// (0x00038e83) main_btmg_pane

0xeade,	// (0x00046104) list_single_cale_mrui_row_pane_g2_ParamLimits

0xeade,	// (0x00046104) list_single_cale_mrui_row_pane_g2

0x0001,

0xfe43,	// (0x00047469) list_single_cale_mrui_row_pane_g_ParamLimits

0xfe43,	// (0x00047469) list_single_cale_mrui_row_pane_g

0x0e96,	// (0x000384bc) list_recal_vselct_arw_lo_pane

0x0e9e,	// (0x000384c4) list_recal_vselct_arw_up_pane

0xeb5a,	// (0x00046180) list_recal_vselct_pane

0x1134,	// (0x0003875a) btmg_button_pane

0xa464,	// (0x00041a8a) main_btmg_pane_g1

0x185d,	// (0x00038e83) bg_button_pane_cp044

0x1144,	// (0x0003876a) btmg_button_pane_t1

0xc943,	// (0x00043f69) aid_listscroll_gen

0x20d6,	// (0x000396fc) main_cntbar_detail_pane

0x092a,	// (0x00037f50) list_cmail_folder_pane

0x093a,	// (0x00037f60) sp_fs_scroll_pane_cp03_ParamLimits

0xa0c3,	// (0x000416e9) list_single_fs_dyc_pane_cp01_ParamLimits

0xa0c3,	// (0x000416e9) list_single_fs_dyc_pane_cp01

0x1152,	// (0x00038778) aid_size_cmail_indent

0xdd26,	// (0x0004534c) list_single_dyc_row_pane_cp01

0xa494,	// (0x00041aba) cntbar_detail_list_pane_ParamLimits

0xa494,	// (0x00041aba) cntbar_detail_list_pane

0xa4da,	// (0x00041b00) main_cntbar_detail_cont_pane_ParamLimits

0xa4da,	// (0x00041b00) main_cntbar_detail_cont_pane

0xa4ee,	// (0x00041b14) scroll_pane_cp032_ParamLimits

0xa4ee,	// (0x00041b14) scroll_pane_cp032

0xa4fa,	// (0x00041b20) cntbar_detail_list_event_pane_ParamLimits

0xa4fa,	// (0x00041b20) cntbar_detail_list_event_pane

0xa4a4,	// (0x00041aca) cntbar_detail_list_shct_pane

0x11d3,	// (0x000387f9) aid_list_gen

0x3d85,	// (0x0003b3ab) aid_scroll

0xdcfb,	// (0x00045321) aid_size_touch_scroll_bar

0xebc1,	// (0x000461e7) aid_list_double

0x3709,	// (0x0003ad2f) aid_list_single

0xebc1,	// (0x000461e7) aid_list_single_lg

0xebca,	// (0x000461f0) aid_list_z_g_a_sm

0x3712,	// (0x0003ad38) aid_list_z_g_d

0x371a,	// (0x0003ad40) aid_txt_z_prm

0xebd2,	// (0x000461f8) aid_txt_z_prm_cp01

0xebe0,	// (0x00046206) aid_txt_z_sec

0xa50b,	// (0x00041b31) main_cntbar_detail_cont_pane_g1_ParamLimits

0xa50b,	// (0x00041b31) main_cntbar_detail_cont_pane_g1

0xa51f,	// (0x00041b45) main_cntbar_detail_cont_pane_g2_ParamLimits

0xa51f,	// (0x00041b45) main_cntbar_detail_cont_pane_g2

0x0001,

0xfed5,	// (0x000474fb) main_cntbar_detail_cont_pane_g_ParamLimits

0xfed5,	// (0x000474fb) main_cntbar_detail_cont_pane_g

0x11f5,	// (0x0003881b) main_cntbar_detail_cont_pane_t1

0x1203,	// (0x00038829) main_cntbar_detail_cont_pane_t2

0x1211,	// (0x00038837) main_cntbar_detail_cont_pane_t3

0x0002,

0xfeda,	// (0x00047500) main_cntbar_detail_cont_pane_t

0xa52f,	// (0x00041b55) cell_cntbar_detail_list_shct_pane_ParamLimits

0xa52f,	// (0x00041b55) cell_cntbar_detail_list_shct_pane

0x1231,	// (0x00038857) cntbar_detail_list_shct_pane_g1

0x123a,	// (0x00038860) cntbar_detail_list_shct_pane_g2

0x0001,

0xfee1,	// (0x00047507) cntbar_detail_list_shct_pane_g

0xa541,	// (0x00041b67) cntbar_detail_list_event_pane_g1_ParamLimits

0xa541,	// (0x00041b67) cntbar_detail_list_event_pane_g1

0xa54d,	// (0x00041b73) cntbar_detail_list_event_pane_g2_ParamLimits

0xa54d,	// (0x00041b73) cntbar_detail_list_event_pane_g2

0x0005,

0xfee6,	// (0x0004750c) cntbar_detail_list_event_pane_g_ParamLimits

0xfee6,	// (0x0004750c) cntbar_detail_list_event_pane_g

0xa5b9,	// (0x00041bdf) cntbar_detail_list_event_pane_t1_ParamLimits

0xa5b9,	// (0x00041bdf) cntbar_detail_list_event_pane_t1

0xa5ce,	// (0x00041bf4) cntbar_detail_list_event_pane_t2_ParamLimits

0xa5ce,	// (0x00041bf4) cntbar_detail_list_event_pane_t2

0x0002,

0xfef3,	// (0x00047519) cntbar_detail_list_event_pane_t_ParamLimits

0xfef3,	// (0x00047519) cntbar_detail_list_event_pane_t

0xcd86,	// (0x000443ac) cell_cntbar_detail_list_shct_pane_g1

0xb49b,	// (0x00042ac1) navi_pane_mv_g3

0x20d6,	// (0x000396fc) main_cntbar_detail_pane_ParamLimits

0x185d,	// (0x00038e83) main_notif_wgt_pane

0xede8,	// (0x0004640e) aid_tch_main_mp4_pane_g4

0xefcc,	// (0x000465f2) popup_slider_window_cp02

0xeb5a,	// (0x00046180) list_recal_day_event_pane

0xa46c,	// (0x00041a92) cntbar_detail_btn_pane_ParamLimits

0xa46c,	// (0x00041a92) cntbar_detail_btn_pane

0xa47f,	// (0x00041aa5) cntbar_detail_btn_pane_cp01_ParamLimits

0xa47f,	// (0x00041aa5) cntbar_detail_btn_pane_cp01

0xa4a4,	// (0x00041aca) cntbar_detail_list_shct_pane_ParamLimits

0xa4b4,	// (0x00041ada) cntbar_detail_pane_g1_ParamLimits

0xa4b4,	// (0x00041ada) cntbar_detail_pane_g1

0xa4c4,	// (0x00041aea) cntbar_detail_pane_t1_ParamLimits

0xa4c4,	// (0x00041aea) cntbar_detail_pane_t1

0xa559,	// (0x00041b7f) cntbar_detail_list_event_pane_g3_ParamLimits

0xa559,	// (0x00041b7f) cntbar_detail_list_event_pane_g3

0xa571,	// (0x00041b97) cntbar_detail_list_event_pane_g4_ParamLimits

0xa571,	// (0x00041b97) cntbar_detail_list_event_pane_g4

0xa589,	// (0x00041baf) cntbar_detail_list_event_pane_g5_ParamLimits

0xa589,	// (0x00041baf) cntbar_detail_list_event_pane_g5

0xa5a1,	// (0x00041bc7) cntbar_detail_list_event_pane_g6_ParamLimits

0xa5a1,	// (0x00041bc7) cntbar_detail_list_event_pane_g6

0xa5e3,	// (0x00041c09) cntbar_detail_list_event_pane_t3_ParamLimits

0xa5e3,	// (0x00041c09) cntbar_detail_list_event_pane_t3

0xa5f5,	// (0x00041c1b) popup_notif_wgt_window_ParamLimits

0xa5f5,	// (0x00041c1b) popup_notif_wgt_window

0xa60a,	// (0x00041c30) popup_submenu_window_cp01_ParamLimits

0xa60a,	// (0x00041c30) popup_submenu_window_cp01

0xb4dc,	// (0x00042b02) bg_popup_window_pane_cp10

0x1311,	// (0x00038937) listscroll_notif_wgt_pane

0x1319,	// (0x0003893f) list_notif_wgt_window

0x1322,	// (0x00038948) scroll_pane_cp033

0x132b,	// (0x00038951) list_notif_wgt_row_pane_ParamLimits

0x132b,	// (0x00038951) list_notif_wgt_row_pane

0x133d,	// (0x00038963) aid_size_list_notif_wgt_del

0x1346,	// (0x0003896c) list_notif_wgt_row_pane_g1

0x134e,	// (0x00038974) list_notif_wgt_row_pane_g2

0x1356,	// (0x0003897c) list_notif_wgt_row_pane_g3

0x0002,

0xfefa,	// (0x00047520) list_notif_wgt_row_pane_g

0x135f,	// (0x00038985) list_notif_wgt_row_pane_t1

0x136d,	// (0x00038993) list_notif_wgt_row_pane_t2

0x137b,	// (0x000389a1) list_notif_wgt_row_pane_t3

0x0002,

0xff01,	// (0x00047527) list_notif_wgt_row_pane_t

0xd9f3,	// (0x00045019) list_recal_day_event_pane_g1

0x1389,	// (0x000389af) list_recal_day_event_pane_t1

0x185d,	// (0x00038e83) bg_button_pane_cp045

0xa61a,	// (0x00041c40) cntbar_detail_btn_pane_t1

0xc94b,	// (0x00043f71) main_callh_pane_ParamLimits

0xc94b,	// (0x00043f71) main_callh_pane

0x185d,	// (0x00038e83) main_coverflow0_pane

0x185d,	// (0x00038e83) main_wgtman_pane

0x9cff,	// (0x00041325) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x9cff,	// (0x00041325) main_fs_bigclock_unlock_btn_pane

0x08ba,	// (0x00037ee0) bg_button_pane_cp16

0x08d3,	// (0x00037ef9) cell_tport_appsw_pane_g3

0xa628,	// (0x00041c4e) cf0_flow_pane_ParamLimits

0xa628,	// (0x00041c4e) cf0_flow_pane

0x13b5,	// (0x000389db) listscroll_cf0_pane

0x13be,	// (0x000389e4) main_cf0_pane_g1

0xa63d,	// (0x00041c63) main_cf0_pane_t1_ParamLimits

0xa63d,	// (0x00041c63) main_cf0_pane_t1

0xa653,	// (0x00041c79) main_cf0_pane_t2_ParamLimits

0xa653,	// (0x00041c79) main_cf0_pane_t2

0x0001,

0xff08,	// (0x0004752e) main_cf0_pane_t_ParamLimits

0xff08,	// (0x0004752e) main_cf0_pane_t

0x13ec,	// (0x00038a12) scroll_pane_cp11

0xa669,	// (0x00041c8f) cf0_flow_pane_g1

0xa671,	// (0x00041c97) cf0_flow_pane_g2

0x0001,

0xff0d,	// (0x00047533) cf0_flow_pane_g

0xa679,	// (0x00041c9f) cf0_flow_pane_t1

0x185d,	// (0x00038e83) main_call6_pane

0x185d,	// (0x00038e83) main_calllock_pane

0xa687,	// (0x00041cad) call6_btn_grp_pane_ParamLimits

0xa687,	// (0x00041cad) call6_btn_grp_pane

0xa69d,	// (0x00041cc3) call6_pane_g1_ParamLimits

0xa69d,	// (0x00041cc3) call6_pane_g1

0xa6b0,	// (0x00041cd6) popup_call6_1st_window_ParamLimits

0xa6b0,	// (0x00041cd6) popup_call6_1st_window

0xa6bf,	// (0x00041ce5) popup_call6_2nd_window_ParamLimits

0xa6bf,	// (0x00041ce5) popup_call6_2nd_window

0xa6ce,	// (0x00041cf4) cell_call6_btn_pane_ParamLimits

0xa6ce,	// (0x00041cf4) cell_call6_btn_pane

0xb4dc,	// (0x00042b02) bg_popup_call2_in_pane_cp03

0x1454,	// (0x00038a7a) popup_call6_1st_window_g1

0x145c,	// (0x00038a82) popup_call6_1st_window_g2

0x1464,	// (0x00038a8a) popup_call6_1st_window_g3

0x0002,

0xff12,	// (0x00047538) popup_call6_1st_window_g

0x146c,	// (0x00038a92) popup_call6_1st_window_t1

0x147b,	// (0x00038aa1) popup_call6_1st_window_t2

0x1489,	// (0x00038aaf) popup_call6_1st_window_t3

0x0002,

0xff19,	// (0x0004753f) popup_call6_1st_window_t

0xb4dc,	// (0x00042b02) bg_popup_call2_in_pane_cp04

0x1454,	// (0x00038a7a) popup_call6_2nd_window_g1

0x145c,	// (0x00038a82) popup_call6_2nd_window_g2

0x1464,	// (0x00038a8a) popup_call6_2nd_window_g3

0x0002,

0xff12,	// (0x00047538) popup_call6_2nd_window_g

0x146c,	// (0x00038a92) popup_call6_2nd_window_t1

0x185d,	// (0x00038e83) bg_button_pane_cp15

0x1497,	// (0x00038abd) cell_call6_btn_pane_g1

0x14a0,	// (0x00038ac6) cell_call6_btn_pane_t1

0xa6e2,	// (0x00041d08) listscroll_wgtman_pane_ParamLimits

0xa6e2,	// (0x00041d08) listscroll_wgtman_pane

0xa6f8,	// (0x00041d1e) wgtman_btn_pane_ParamLimits

0xa6f8,	// (0x00041d1e) wgtman_btn_pane

0xb31d,	// (0x00042943) aid_scroll_copy1

0x14c8,	// (0x00038aee) list_wgtman_pane

0xa70f,	// (0x00041d35) wgtman_btn_pane_g1_ParamLimits

0xa70f,	// (0x00041d35) wgtman_btn_pane_g1

0xa723,	// (0x00041d49) wgtman_btn_pane_t1_ParamLimits

0xa723,	// (0x00041d49) wgtman_btn_pane_t1

0x14f0,	// (0x00038b16) wgtman_btn_pane_t2_ParamLimits

0x14f0,	// (0x00038b16) wgtman_btn_pane_t2

0x0001,

0xff20,	// (0x00047546) wgtman_btn_pane_t_ParamLimits

0xff20,	// (0x00047546) wgtman_btn_pane_t

0xa73e,	// (0x00041d64) listrow_wgtman_pane_ParamLimits

0xa73e,	// (0x00041d64) listrow_wgtman_pane

0xa74f,	// (0x00041d75) listrow_wgtman_pane_g1

0xa758,	// (0x00041d7e) listrow_wgtman_pane_g2

0x0001,

0xff25,	// (0x0004754b) listrow_wgtman_pane_g

0x3728,	// (0x0003ad4e) listrow_wgtman_pane_t1

0x3736,	// (0x0003ad5c) listrow_wgtman_pane_t2

0x0001,

0xff2a,	// (0x00047550) listrow_wgtman_pane_t

0x3744,	// (0x0003ad6a) wait_bar_pane_cp09

0x1524,	// (0x00038b4a) main_calllock_btn_pane

0x152c,	// (0x00038b52) main_calllock_pane_g1

0x185d,	// (0x00038e83) bg_button_pane_cp17

0x1535,	// (0x00038b5b) main_calllock_btn_pane_g1

0x153e,	// (0x00038b64) main_calllock_btn_pane_t1

0x185d,	// (0x00038e83) main_dialer3_pane

0x185d,	// (0x00038e83) main_fmrd2_pane

0xcd86,	// (0x000443ac) main_fs_bigclock_unlock_btn_pane_g1

0x1555,	// (0x00038b7b) main_fs_bigclock_unlock_btn_pane_t1

0xa760,	// (0x00041d86) area_fmrd2_info_pane_ParamLimits

0xa760,	// (0x00041d86) area_fmrd2_info_pane

0xa770,	// (0x00041d96) area_fmrd2_visual_pane_ParamLimits

0xa770,	// (0x00041d96) area_fmrd2_visual_pane

0xa77e,	// (0x00041da4) fmrd2_indi_pane_ParamLimits

0xa77e,	// (0x00041da4) fmrd2_indi_pane

0xa78b,	// (0x00041db1) area_fmrd2_visual_pane_g1

0xa793,	// (0x00041db9) area_fmrd2_visual_pane_t1

0xa7a1,	// (0x00041dc7) area_fmrd2_visual_pane_t2

0xa7af,	// (0x00041dd5) area_fmrd2_visual_pane_t3

0x0002,

0xff34,	// (0x0004755a) area_fmrd2_visual_pane_t

0xa7bd,	// (0x00041de3) area_fmrd2_info_pane_g1

0xa7c5,	// (0x00041deb) area_fmrd2_info_pane_t1

0xa7d3,	// (0x00041df9) area_fmrd2_info_pane_t2

0xa7e1,	// (0x00041e07) area_fmrd2_info_pane_t3

0xa7ef,	// (0x00041e15) area_fmrd2_info_pane_t4

0x0003,

0xff3b,	// (0x00047561) area_fmrd2_info_pane_t

0xa7fd,	// (0x00041e23) fmrd2_indi_pane_t1

0xa80b,	// (0x00041e31) fmrd2_indi_pane_t2

0xa819,	// (0x00041e3f) fmrd2_indi_pane_t3

0x0002,

0xff44,	// (0x0004756a) fmrd2_indi_pane_t

0xe6cd,	// (0x00045cf3) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe6cd,	// (0x00045cf3) list_single_fs_bigclock_indicator_pane_g5

0xe76f,	// (0x00045d95) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe76f,	// (0x00045d95) list_single_fs_bigclock_indicator_pane_t5

0xa1b8,	// (0x000417de) aid_cell_bcale_month_pane_ParamLimits

0xa1b8,	// (0x000417de) aid_cell_bcale_month_pane

0xa1ca,	// (0x000417f0) bcale_month_pane_ParamLimits

0xa1ca,	// (0x000417f0) bcale_month_pane

0xa1dc,	// (0x00041802) bcale_preview_pane_ParamLimits

0xa1dc,	// (0x00041802) bcale_preview_pane

0x10d1,	// (0x000386f7) list_single_fs_bigclock_pane_t1_ParamLimits

0x10eb,	// (0x00038711) list_single_fs_bigclock_pane_t2_ParamLimits

0x10eb,	// (0x00038711) list_single_fs_bigclock_pane_t2

0x0001,

0xfecb,	// (0x000474f1) list_single_fs_bigclock_pane_t_ParamLimits

0xfecb,	// (0x000474f1) list_single_fs_bigclock_pane_t

0x154d,	// (0x00038b73) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xff2f,	// (0x00047555) main_fs_bigclock_unlock_btn_pane_g

0xa827,	// (0x00041e4d) aid_dia3_key_size_ParamLimits

0xa827,	// (0x00041e4d) aid_dia3_key_size

0xa836,	// (0x00041e5c) aid_dia3_listrow_size_ParamLimits

0xa836,	// (0x00041e5c) aid_dia3_listrow_size

0xa842,	// (0x00041e68) dia3_keypad_fun_pane_ParamLimits

0xa842,	// (0x00041e68) dia3_keypad_fun_pane

0xa856,	// (0x00041e7c) dia3_keypad_num_pane_ParamLimits

0xa856,	// (0x00041e7c) dia3_keypad_num_pane

0xa867,	// (0x00041e8d) dia3_listscroll_pane_ParamLimits

0xa867,	// (0x00041e8d) dia3_listscroll_pane

0xa878,	// (0x00041e9e) dia3_numentry_pane_ParamLimits

0xa878,	// (0x00041e9e) dia3_numentry_pane

0x166f,	// (0x00038c95) dia3_list_pane

0x1678,	// (0x00038c9e) scroll_pane_cp12

0x185d,	// (0x00038e83) bg_dia3_numentry_pane

0x1681,	// (0x00038ca7) dia3_numentry_pane_t1

0xa887,	// (0x00041ead) cell_dia3_key_num_pane

0xa88f,	// (0x00041eb5) cell_dia3_key0_fun_pane_ParamLimits

0xa88f,	// (0x00041eb5) cell_dia3_key0_fun_pane

0xa8a3,	// (0x00041ec9) cell_dia3_key1_fun_pane_ParamLimits

0xa8a3,	// (0x00041ec9) cell_dia3_key1_fun_pane

0xa8ba,	// (0x00041ee0) dia3_listrow_pane

0xe3fa,	// (0x00045a20) bg_dia3_numentry_pane_g1

0x185d,	// (0x00038e83) bg_button_pane_cp21

0x16bb,	// (0x00038ce1) cell_dia3_key_num_pane_t1

0x16c9,	// (0x00038cef) cell_dia3_key_num_pane_t2

0x16d8,	// (0x00038cfe) cell_dia3_key_num_pane_t3

0x16e7,	// (0x00038d0d) cell_dia3_key_num_pane_t4

0x0003,

0xff4b,	// (0x00047571) cell_dia3_key_num_pane_t

0x185d,	// (0x00038e83) bg_button_pane_cp19

0x16f6,	// (0x00038d1c) cell_dia3_key0_fun_pane_g1

0x185d,	// (0x00038e83) bg_button_pane_cp20

0xa8c3,	// (0x00041ee9) cell_dia3_key1_fun_pane_g1

0xa8cb,	// (0x00041ef1) area_left_week_number_pane

0xa8d4,	// (0x00041efa) area_top_day_name_pane

0xa8dd,	// (0x00041f03) frame_month_view_pane

0xa8e5,	// (0x00041f0b) grid_month_view_pane

0xa8ef,	// (0x00041f15) cell_top_day_name_pane_ParamLimits

0xa8ef,	// (0x00041f15) cell_top_day_name_pane

0xa905,	// (0x00041f2b) cell_area_left_week_number_pane_ParamLimits

0xa905,	// (0x00041f2b) cell_area_left_week_number_pane

0xa919,	// (0x00041f3f) cell_month_view_pane_ParamLimits

0xa919,	// (0x00041f3f) cell_month_view_pane

0x176f,	// (0x00038d95) frm_month_g1

0xa934,	// (0x00041f5a) frm_month_g2

0xa93c,	// (0x00041f62) frm_month_g3

0xa944,	// (0x00041f6a) frm_month_g4

0xa94c,	// (0x00041f72) frm_month_g5

0xa954,	// (0x00041f7a) frm_month_g6

0xa95c,	// (0x00041f82) frm_month_g7

0x17a8,	// (0x00038dce) frm_month_g8

0xa964,	// (0x00041f8a) frm_month_g9

0xa96d,	// (0x00041f93) frm_month_g10

0xa976,	// (0x00041f9c) frm_month_g11

0xa97f,	// (0x00041fa5) frm_month_g12

0xa988,	// (0x00041fae) frm_month_g13

0xa991,	// (0x00041fb7) frm_month_g14

0xa99a,	// (0x00041fc0) frm_month_g15

0xa9a3,	// (0x00041fc9) frm_month_g16

0x000f,

0xff54,	// (0x0004757a) frm_month_g

0xa9ac,	// (0x00041fd2) cell_top_day_name_pane_t1

0xa9bb,	// (0x00041fe1) cell_area_left_week_number_pane_g1

0xa9ac,	// (0x00041fd2) cell_area_left_week_number_pane_t1

0xcd86,	// (0x000443ac) cell_month_view_pane_g1

0xa9c3,	// (0x00041fe9) cell_month_view_pane_t1

0x185d,	// (0x00038e83) main_fps_pane

0x073c,	// (0x00037d62) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x073c,	// (0x00037d62) cmail_ddmenu_btn02_pane_cp1

0x0758,	// (0x00037d7e) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x0758,	// (0x00037d7e) cmail_ddmenu_btn02_pane_cp2

0xa37a,	// (0x000419a0) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xa37a,	// (0x000419a0) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe7c,	// (0x000474a2) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe7c,	// (0x000474a2) cmail_ddmenu_btn02_pane_g

0xa39b,	// (0x000419c1) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xa39b,	// (0x000419c1) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe81,	// (0x000474a7) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe81,	// (0x000474a7) cmail_ddmenu_btn02_pane_t

0xa9d2,	// (0x00041ff8) fps_text_pane_ParamLimits

0xa9d2,	// (0x00041ff8) fps_text_pane

0xa9e8,	// (0x0004200e) main_fps_pane_g1_ParamLimits

0xa9e8,	// (0x0004200e) main_fps_pane_g1

0xa9fe,	// (0x00042024) wait_bar_pane_cp010_ParamLimits

0xa9fe,	// (0x00042024) wait_bar_pane_cp010

0xaa0f,	// (0x00042035) fps_text_pane_t1_ParamLimits

0xaa0f,	// (0x00042035) fps_text_pane_t1
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
	};

} // end of namespace AknLayoutScalable_Elaf_pql_apps_qvga_lsc_Small
