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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pqp_apps_qvga_prt + 0x00039900 };

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
0x3452,	// (0x0003cd52) Screen

0x345c,	// (0x0003cd5c) application_window

0x348b,	// (0x0003cd8b) area_bottom_pane_ParamLimits

0x348b,	// (0x0003cd8b) area_bottom_pane

0x34be,	// (0x0003cdbe) area_top_pane_ParamLimits

0x34be,	// (0x0003cdbe) area_top_pane

0x0fb9,	// (0x0003a8b9) call_video_uplink_pane_ParamLimits

0x0fb9,	// (0x0003a8b9) call_video_uplink_pane

0x352f,	// (0x0003ce2f) main_pane_ParamLimits

0x352f,	// (0x0003ce2f) main_pane

0xc573,	// (0x00045e73) context_pane

0x6a4e,	// (0x0004034e) navi_pane

0x6a77,	// (0x00040377) popup_cale_events_window_ParamLimits

0x6a77,	// (0x00040377) popup_cale_events_window

0xc586,	// (0x00045e86) popup_mup_playback_window

0x6a8f,	// (0x0004038f) signal_pane

0x1710,	// (0x0003b010) main_browser_pane

0x5855,	// (0x0003f155) main_burst_pane

0x1c39,	// (0x0003b539) main_calc_pane

0x5855,	// (0x0003f155) main_cale_day_pane

0x1838,	// (0x0003b138) main_cale_month_pane

0x5855,	// (0x0003f155) main_cale_week_pane

0x5855,	// (0x0003f155) main_call_pane

0x13e6,	// (0x0003ace6) main_call_poc_pane

0x5855,	// (0x0003f155) main_camera_pane

0x5855,	// (0x0003f155) main_chi_dic_pane

0x53ee,	// (0x0003ecee) main_clock_pane

0x13e6,	// (0x0003ace6) main_fmradio_pane

0x5855,	// (0x0003f155) main_graph_messa_pane

0x13e6,	// (0x0003ace6) main_help_pane

0x1710,	// (0x0003b010) main_im_pane

0x1641,	// (0x0003af41) main_image_pane_ParamLimits

0x1641,	// (0x0003af41) main_image_pane

0x13e6,	// (0x0003ace6) main_location2_pane

0x5855,	// (0x0003f155) main_location_pane

0x13e6,	// (0x0003ace6) main_messa_pane

0x13e6,	// (0x0003ace6) main_mp2_pane

0x5855,	// (0x0003f155) main_mp_pane

0x13e6,	// (0x0003ace6) main_msg_pane

0x13e6,	// (0x0003ace6) main_mup_eq_pane

0x13e6,	// (0x0003ace6) main_mup_pane

0x5855,	// (0x0003f155) main_notes_pane

0x13e6,	// (0x0003ace6) main_pec_pane

0x13e6,	// (0x0003ace6) main_phob_pane

0x13e6,	// (0x0003ace6) main_pinb_pane

0x13e6,	// (0x0003ace6) main_postcard_pane

0x13e6,	// (0x0003ace6) main_qdial_pane

0x5855,	// (0x0003f155) main_skin_pane

0x13e6,	// (0x0003ace6) main_smil2_pane

0x5855,	// (0x0003f155) main_smil_pane

0x5855,	// (0x0003f155) main_video_pane

0x5855,	// (0x0003f155) main_video_tele_pane

0x1641,	// (0x0003af41) main_viewer_pane_ParamLimits

0x1641,	// (0x0003af41) main_viewer_pane

0x5855,	// (0x0003f155) main_vorec_pane

0x682e,	// (0x0004012e) popup_blid_sat_info_window_ParamLimits

0x682e,	// (0x0004012e) popup_blid_sat_info_window

0x6884,	// (0x00040184) popup_dyc_status_message_window_ParamLimits

0x6884,	// (0x00040184) popup_dyc_status_message_window

0x689a,	// (0x0004019a) popup_grid_large_graphic_window_ParamLimits

0x689a,	// (0x0004019a) popup_grid_large_graphic_window

0x6930,	// (0x00040230) popup_loc_request_window_ParamLimits

0x6930,	// (0x00040230) popup_loc_request_window

0x6a28,	// (0x00040328) popup_wml_address_window_ParamLimits

0x6a28,	// (0x00040328) popup_wml_address_window

0x6684,	// (0x0003ff84) call_muted_g1

0x63a9,	// (0x0003fca9) popup_call_audio_conf_window_ParamLimits

0x63a9,	// (0x0003fca9) popup_call_audio_conf_window

0x6694,	// (0x0003ff94) popup_call_audio_first_window_ParamLimits

0x6694,	// (0x0003ff94) popup_call_audio_first_window

0x66f2,	// (0x0003fff2) popup_call_audio_in_window_ParamLimits

0x66f2,	// (0x0003fff2) popup_call_audio_in_window

0x671e,	// (0x0004001e) popup_call_audio_out_window_ParamLimits

0x671e,	// (0x0004001e) popup_call_audio_out_window

0x674c,	// (0x0004004c) popup_call_audio_second_window_ParamLimits

0x674c,	// (0x0004004c) popup_call_audio_second_window

0x6792,	// (0x00040092) popup_call_audio_wait_window_ParamLimits

0x6792,	// (0x00040092) popup_call_audio_wait_window

0x67c5,	// (0x000400c5) popup_number_entry_window_ParamLimits

0x67c5,	// (0x000400c5) popup_number_entry_window

0x0fd5,	// (0x0003a8d5) bg_popup_call_pane_cp05_ParamLimits

0x0fd5,	// (0x0003a8d5) bg_popup_call_pane_cp05

0x0ff5,	// (0x0003a8f5) popup_number_entry_window_t1

0x1008,	// (0x0003a908) popup_number_entry_window_t2

0x101a,	// (0x0003a91a) popup_number_entry_window_t3

0x0003,

0xf0ec,	// (0x000489ec) popup_number_entry_window_t

0x102c,	// (0x0003a92c) text_title_cp2

0x103f,	// (0x0003a93f) bg_popup_call_pane_cp_ParamLimits

0x103f,	// (0x0003a93f) bg_popup_call_pane_cp

0x104d,	// (0x0003a94d) call_thumbnail_pane

0x1055,	// (0x0003a955) popup_call_audio_in_window_g1_ParamLimits

0x1055,	// (0x0003a955) popup_call_audio_in_window_g1

0x1061,	// (0x0003a961) popup_call_audio_in_window_g2_ParamLimits

0x1061,	// (0x0003a961) popup_call_audio_in_window_g2

0x106d,	// (0x0003a96d) popup_call_audio_in_window_g3_ParamLimits

0x106d,	// (0x0003a96d) popup_call_audio_in_window_g3

0x0002,

0xf0f5,	// (0x000489f5) popup_call_audio_in_window_g_ParamLimits

0xf0f5,	// (0x000489f5) popup_call_audio_in_window_g

0x1079,	// (0x0003a979) popup_call_audio_in_window_t1_ParamLimits

0x1079,	// (0x0003a979) popup_call_audio_in_window_t1

0x1094,	// (0x0003a994) popup_call_audio_in_window_t2_ParamLimits

0x1094,	// (0x0003a994) popup_call_audio_in_window_t2

0x10af,	// (0x0003a9af) popup_call_audio_in_window_t3_ParamLimits

0x10af,	// (0x0003a9af) popup_call_audio_in_window_t3

0x0002,

0xf0fc,	// (0x000489fc) popup_call_audio_in_window_t_ParamLimits

0xf0fc,	// (0x000489fc) popup_call_audio_in_window_t

0x103f,	// (0x0003a93f) bg_popup_call_pane_cp01_ParamLimits

0x103f,	// (0x0003a93f) bg_popup_call_pane_cp01

0x104d,	// (0x0003a94d) call_thumbnail_pane_cp02

0x10c2,	// (0x0003a9c2) call_type_pane_cp022

0x10ca,	// (0x0003a9ca) popup_call_audio_out_window_g1_ParamLimits

0x10ca,	// (0x0003a9ca) popup_call_audio_out_window_g1

0x10dc,	// (0x0003a9dc) popup_call_audio_out_window_g2_ParamLimits

0x10dc,	// (0x0003a9dc) popup_call_audio_out_window_g2

0x10e8,	// (0x0003a9e8) popup_call_audio_out_window_g3_ParamLimits

0x10e8,	// (0x0003a9e8) popup_call_audio_out_window_g3

0x0002,

0xf103,	// (0x00048a03) popup_call_audio_out_window_g_ParamLimits

0xf103,	// (0x00048a03) popup_call_audio_out_window_g

0x10fa,	// (0x0003a9fa) popup_call_audio_out_window_t1_ParamLimits

0x10fa,	// (0x0003a9fa) popup_call_audio_out_window_t1

0x1112,	// (0x0003aa12) popup_call_audio_out_window_t2_ParamLimits

0x1112,	// (0x0003aa12) popup_call_audio_out_window_t2

0x0001,

0xf10a,	// (0x00048a0a) popup_call_audio_out_window_t_ParamLimits

0xf10a,	// (0x00048a0a) popup_call_audio_out_window_t

0x1127,	// (0x0003aa27) bg_popup_call_pane_ParamLimits

0x1127,	// (0x0003aa27) bg_popup_call_pane

0x36c1,	// (0x0003cfc1) call_thumbnail_pane_cp_ParamLimits

0x36c1,	// (0x0003cfc1) call_thumbnail_pane_cp

0x11ab,	// (0x0003aaab) call_type_pane_cp01_ParamLimits

0x11ab,	// (0x0003aaab) call_type_pane_cp01

0x11ef,	// (0x0003aaef) popup_call_audio_first_window_g1_ParamLimits

0x11ef,	// (0x0003aaef) popup_call_audio_first_window_g1

0x123b,	// (0x0003ab3b) popup_call_audio_first_window_g2_ParamLimits

0x123b,	// (0x0003ab3b) popup_call_audio_first_window_g2

0x0001,

0xf10f,	// (0x00048a0f) popup_call_audio_first_window_g_ParamLimits

0xf10f,	// (0x00048a0f) popup_call_audio_first_window_g

0x127f,	// (0x0003ab7f) popup_call_audio_first_window_t1_ParamLimits

0x127f,	// (0x0003ab7f) popup_call_audio_first_window_t1

0x132b,	// (0x0003ac2b) popup_call_audio_first_window_t4_ParamLimits

0x132b,	// (0x0003ac2b) popup_call_audio_first_window_t4

0x13b7,	// (0x0003acb7) popup_call_audio_first_window_t5_ParamLimits

0x13b7,	// (0x0003acb7) popup_call_audio_first_window_t5

0x0002,

0xf114,	// (0x00048a14) popup_call_audio_first_window_t_ParamLimits

0xf114,	// (0x00048a14) popup_call_audio_first_window_t

0x13e6,	// (0x0003ace6) bg_popup_call_pane_cp02

0x13f0,	// (0x0003acf0) call_type_pane_cp023

0x13f8,	// (0x0003acf8) popup_call_audio_wait_window_g1

0x1400,	// (0x0003ad00) popup_call_audio_wait_window_g2

0x0001,

0xf11b,	// (0x00048a1b) popup_call_audio_wait_window_g

0x1408,	// (0x0003ad08) popup_call_audio_wait_window_t3

0x1416,	// (0x0003ad16) bg_popup_call_pane_cp03_ParamLimits

0x1416,	// (0x0003ad16) bg_popup_call_pane_cp03

0x1476,	// (0x0003ad76) call_thumbnail_pane_cp011_ParamLimits

0x1476,	// (0x0003ad76) call_thumbnail_pane_cp011

0x1482,	// (0x0003ad82) call_type_pane_cp034_ParamLimits

0x1482,	// (0x0003ad82) call_type_pane_cp034

0x14be,	// (0x0003adbe) popup_call_audio_second_window_g1_ParamLimits

0x14be,	// (0x0003adbe) popup_call_audio_second_window_g1

0x14fa,	// (0x0003adfa) popup_call_audio_second_window_g2_ParamLimits

0x14fa,	// (0x0003adfa) popup_call_audio_second_window_g2

0x0001,

0xf120,	// (0x00048a20) popup_call_audio_second_window_g_ParamLimits

0xf120,	// (0x00048a20) popup_call_audio_second_window_g

0x1536,	// (0x0003ae36) popup_call_audio_second_window_t1_ParamLimits

0x1536,	// (0x0003ae36) popup_call_audio_second_window_t1

0x15b7,	// (0x0003aeb7) popup_call_audio_second_window_t2_ParamLimits

0x15b7,	// (0x0003aeb7) popup_call_audio_second_window_t2

0x15ed,	// (0x0003aeed) popup_call_audio_second_window_t3_ParamLimits

0x15ed,	// (0x0003aeed) popup_call_audio_second_window_t3

0x0002,

0xf125,	// (0x00048a25) popup_call_audio_second_window_t_ParamLimits

0xf125,	// (0x00048a25) popup_call_audio_second_window_t

0x13e6,	// (0x0003ace6) bg_popup_call_pane_cp04

0x1623,	// (0x0003af23) list_conf_pane

0x162b,	// (0x0003af2b) popup_call_audio_conf_window_t1

0x1639,	// (0x0003af39) call_thumbnail_pane_g1

0x1641,	// (0x0003af41) bg_pinb_pane_ParamLimits

0x1641,	// (0x0003af41) bg_pinb_pane

0x164f,	// (0x0003af4f) find_pinb_pane

0x1658,	// (0x0003af58) listscroll_pinb_pane_ParamLimits

0x1658,	// (0x0003af58) listscroll_pinb_pane

0x1667,	// (0x0003af67) pinb_bg_pane_g1

0x36e5,	// (0x0003cfe5) pinb_bg_pane_g2

0x36ef,	// (0x0003cfef) pinb_bg_pane_g3

0x36f9,	// (0x0003cff9) pinb_bg_pane_g4

0x3703,	// (0x0003d003) pinb_bg_pane_g5

0x370d,	// (0x0003d00d) pinb_bg_pane_g6

0x3716,	// (0x0003d016) pinb_bg_pane_g7

0x371f,	// (0x0003d01f) pinb_bg_pane_g8

0x372a,	// (0x0003d02a) pinb_bg_pane_g9

0x3734,	// (0x0003d034) pinb_bg_pane_g10

0x0009,

0xf12c,	// (0x00048a2c) pinb_bg_pane_g

0x374f,	// (0x0003d04f) grid_pinb_pane

0x3758,	// (0x0003d058) list_pinb_pane

0x3761,	// (0x0003d061) scroll_pane_cp01_ParamLimits

0x3761,	// (0x0003d061) scroll_pane_cp01

0x1671,	// (0x0003af71) find_pinb_pane_g1_ParamLimits

0x1671,	// (0x0003af71) find_pinb_pane_g1

0x1689,	// (0x0003af89) find_pinb_pane_t1

0x169b,	// (0x0003af9b) find_pinb_pane_t2

0x0001,

0xf146,	// (0x00048a46) find_pinb_pane_t

0x16b0,	// (0x0003afb0) input_focus_pane_cp01_ParamLimits

0x16b0,	// (0x0003afb0) input_focus_pane_cp01

0x3773,	// (0x0003d073) cell_pinb_pane_ParamLimits

0x3773,	// (0x0003d073) cell_pinb_pane

0x378e,	// (0x0003d08e) cell_pinb_pane_g1_ParamLimits

0x378e,	// (0x0003d08e) cell_pinb_pane_g1

0x379e,	// (0x0003d09e) cell_pinb_pane_g2_ParamLimits

0x379e,	// (0x0003d09e) cell_pinb_pane_g2

0x16bc,	// (0x0003afbc) cell_pinb_pane_g3_ParamLimits

0x16bc,	// (0x0003afbc) cell_pinb_pane_g3

0x0002,

0xf14b,	// (0x00048a4b) cell_pinb_pane_g_ParamLimits

0xf14b,	// (0x00048a4b) cell_pinb_pane_g

0x13e6,	// (0x0003ace6) grid_highlight_pane_cp01

0x37aa,	// (0x0003d0aa) list_pinb_item_pane_ParamLimits

0x37aa,	// (0x0003d0aa) list_pinb_item_pane

0x13e6,	// (0x0003ace6) list_highlight_pane_cp02

0x37bc,	// (0x0003d0bc) list_pinb_item_pane_g1_ParamLimits

0x37bc,	// (0x0003d0bc) list_pinb_item_pane_g1

0x37c9,	// (0x0003d0c9) list_pinb_item_pane_g2_ParamLimits

0x37c9,	// (0x0003d0c9) list_pinb_item_pane_g2

0x37d5,	// (0x0003d0d5) list_pinb_item_pane_g3_ParamLimits

0x37d5,	// (0x0003d0d5) list_pinb_item_pane_g3

0x37e6,	// (0x0003d0e6) list_pinb_item_pane_g4_ParamLimits

0x37e6,	// (0x0003d0e6) list_pinb_item_pane_g4

0x0003,

0xf152,	// (0x00048a52) list_pinb_item_pane_g_ParamLimits

0xf152,	// (0x00048a52) list_pinb_item_pane_g

0x37f2,	// (0x0003d0f2) list_pinb_item_pane_t1_ParamLimits

0x37f2,	// (0x0003d0f2) list_pinb_item_pane_t1

0x3827,	// (0x0003d127) calc_display_pane

0x3843,	// (0x0003d143) calc_paper_pane

0x3864,	// (0x0003d164) grid_calc_pane

0x13e6,	// (0x0003ace6) bg_list_pane_cp01

0x3880,	// (0x0003d180) clock_g1

0x3888,	// (0x0003d188) clock_g2

0x0001,

0xf15b,	// (0x00048a5b) clock_g

0x3890,	// (0x0003d190) clock_t1_ParamLimits

0x3890,	// (0x0003d190) clock_t1

0x38a5,	// (0x0003d1a5) clock_t2_ParamLimits

0x38a5,	// (0x0003d1a5) clock_t2

0x38b7,	// (0x0003d1b7) clock_t3_ParamLimits

0x38b7,	// (0x0003d1b7) clock_t3

0x38c9,	// (0x0003d1c9) clock_t4_ParamLimits

0x38c9,	// (0x0003d1c9) clock_t4

0x38db,	// (0x0003d1db) clock_t5_ParamLimits

0x38db,	// (0x0003d1db) clock_t5

0x38f0,	// (0x0003d1f0) clock_t6_ParamLimits

0x38f0,	// (0x0003d1f0) clock_t6

0x3902,	// (0x0003d202) clock_t7_ParamLimits

0x3902,	// (0x0003d202) clock_t7

0x3914,	// (0x0003d214) clock_t8_ParamLimits

0x3914,	// (0x0003d214) clock_t8

0x3926,	// (0x0003d226) clock_t9_ParamLimits

0x3926,	// (0x0003d226) clock_t9

0x0008,

0xf160,	// (0x00048a60) clock_t_ParamLimits

0xf160,	// (0x00048a60) clock_t

0x16c8,	// (0x0003afc8) popup_clock_analogue_window_cp02

0x16c8,	// (0x0003afc8) popup_clock_digital_window_cp01

0x16d0,	// (0x0003afd0) listscroll_help_pane

0x13e6,	// (0x0003ace6) phob_pre_status_pane

0x16da,	// (0x0003afda) grid_qdial_pane

0x13e6,	// (0x0003ace6) listscroll_mce_pane

0x16e4,	// (0x0003afe4) bg_notes_pane

0x16ee,	// (0x0003afee) list_notes_pane

0x3938,	// (0x0003d238) scroll_pane_cp06

0x16f8,	// (0x0003aff8) bg_calc_paper_pane

0xb134,	// (0x00044a34) list_calc_pane

0x1710,	// (0x0003b010) bg_calc_display_pane

0xb14e,	// (0x00044a4e) calc_display_pane_t1

0xb163,	// (0x00044a63) calc_display_pane_t2

0xb178,	// (0x00044a78) calc_display_pane_t3

0x0002,

0xf173,	// (0x00048a73) calc_display_pane_t

0x3943,	// (0x0003d243) cell_calc_pane_ParamLimits

0x3943,	// (0x0003d243) cell_calc_pane

0x171c,	// (0x0003b01c) bg_calc_paper_pane_g1

0x1728,	// (0x0003b028) bg_calc_paper_pane_g2

0x1734,	// (0x0003b034) bg_calc_paper_pane_g3

0x1740,	// (0x0003b040) bg_calc_paper_pane_g4

0x174c,	// (0x0003b04c) bg_calc_paper_pane_g5

0x3976,	// (0x0003d276) bg_calc_paper_pane_g6

0x3985,	// (0x0003d285) bg_calc_paper_pane_g7

0x3994,	// (0x0003d294) bg_calc_paper_pane_g8

0x0007,

0xf17a,	// (0x00048a7a) bg_calc_paper_pane_g

0x39a3,	// (0x0003d2a3) calc_bg_paper_pane_g9

0x39b2,	// (0x0003d2b2) list_calc_item_pane_ParamLimits

0x39b2,	// (0x0003d2b2) list_calc_item_pane

0x1758,	// (0x0003b058) list_calc_item_pane_g1

0xb18a,	// (0x00044a8a) list_calc_item_pane_t1_ParamLimits

0xb18a,	// (0x00044a8a) list_calc_item_pane_t1

0x39c6,	// (0x0003d2c6) list_calc_item_pane_t2_ParamLimits

0x39c6,	// (0x0003d2c6) list_calc_item_pane_t2

0x0001,

0xf18b,	// (0x00048a8b) list_calc_item_pane_t_ParamLimits

0xf18b,	// (0x00048a8b) list_calc_item_pane_t

0x1765,	// (0x0003b065) cell_calc_pane_g1

0x176f,	// (0x0003b06f) grid_highlight_pane_cp02

0x1791,	// (0x0003b091) bg_calc_display_pane_g1

0xb19c,	// (0x00044a9c) bg_calc_display_pane_g2

0x179a,	// (0x0003b09a) bg_calc_display_pane_g3

0x0002,

0xf195,	// (0x00048a95) bg_calc_display_pane_g

0x39f4,	// (0x0003d2f4) cell_qdial_pane_ParamLimits

0x39f4,	// (0x0003d2f4) cell_qdial_pane

0x3a06,	// (0x0003d306) cell_qdial_pane_g1_ParamLimits

0x3a06,	// (0x0003d306) cell_qdial_pane_g1

0x3a1c,	// (0x0003d31c) cell_qdial_pane_g2_ParamLimits

0x3a1c,	// (0x0003d31c) cell_qdial_pane_g2

0x17a3,	// (0x0003b0a3) cell_qdial_pane_g3_ParamLimits

0x17a3,	// (0x0003b0a3) cell_qdial_pane_g3

0x0003,

0xf19c,	// (0x00048a9c) cell_qdial_pane_g_ParamLimits

0xf19c,	// (0x00048a9c) cell_qdial_pane_g

0x3a43,	// (0x0003d343) cell_qdial_pane_t1_ParamLimits

0x3a43,	// (0x0003d343) cell_qdial_pane_t1

0x3a5b,	// (0x0003d35b) cell_qdial_pane_t2_ParamLimits

0x3a5b,	// (0x0003d35b) cell_qdial_pane_t2

0x3a6e,	// (0x0003d36e) cell_qdial_pane_t3_ParamLimits

0x3a6e,	// (0x0003d36e) cell_qdial_pane_t3

0x0002,

0xf1a5,	// (0x00048aa5) cell_qdial_pane_t_ParamLimits

0xf1a5,	// (0x00048aa5) cell_qdial_pane_t

0x13e6,	// (0x0003ace6) grid_highlight_pane_cp04

0x17af,	// (0x0003b0af) thumbnail_qdial_pane_ParamLimits

0x17af,	// (0x0003b0af) thumbnail_qdial_pane

0x180b,	// (0x0003b10b) list_help_pane

0x1815,	// (0x0003b115) scroll_pane_cp02

0x3a81,	// (0x0003d381) help_list_pane_t1_ParamLimits

0x3a81,	// (0x0003d381) help_list_pane_t1

0xb1a6,	// (0x00044aa6) bg_notes_pane_g2

0xb1ae,	// (0x00044aae) bg_notes_pane_g3

0xb1b6,	// (0x00044ab6) notes_bg_pane_g1

0xb1be,	// (0x00044abe) notes_bg_pane_g4

0xb1c6,	// (0x00044ac6) notes_bg_pane_g5

0xb1ce,	// (0x00044ace) notes_bg_pane_g6

0xb1d6,	// (0x00044ad6) notes_bg_pane_g7

0xb1de,	// (0x00044ade) notes_bg_pane_g8

0xb1e6,	// (0x00044ae6) notes_bg_pane_g9

0x0006,

0xf1c3,	// (0x00048ac3) notes_bg_pane_g

0x3a9d,	// (0x0003d39d) list_notes_text_pane_ParamLimits

0x3a9d,	// (0x0003d39d) list_notes_text_pane

0x181e,	// (0x0003b11e) list_notes_text_pane_g1

0x2af1,	// (0x0003c3f1) list_notes_text_pane_t1

0x1838,	// (0x0003b138) listscroll_cale_week_pane

0x3acc,	// (0x0003d3cc) bg_cale_heading_pane

0x1847,	// (0x0003b147) bg_cale_pane_cp01

0x3ae0,	// (0x0003d3e0) cale_week_corner_pane

0x3af6,	// (0x0003d3f6) cale_week_day_heading_pane

0x3b0a,	// (0x0003d40a) cale_week_scroll_pane_g1

0x3b1b,	// (0x0003d41b) cale_week_scroll_pane_g2

0x3b2c,	// (0x0003d42c) cale_week_scroll_pane_g3

0x3b3d,	// (0x0003d43d) cale_week_scroll_pane_g4

0x3b4e,	// (0x0003d44e) cale_week_scroll_pane_g5

0x3b5f,	// (0x0003d45f) cale_week_scroll_pane_g6

0x3b70,	// (0x0003d470) cale_week_scroll_pane_g7

0x3b81,	// (0x0003d481) cale_week_scroll_pane_g8

0x3b94,	// (0x0003d494) cale_week_scroll_pane_g9

0x3ba5,	// (0x0003d4a5) cale_week_scroll_pane_g10

0x3bb6,	// (0x0003d4b6) cale_week_scroll_pane_g11

0x3bc7,	// (0x0003d4c7) cale_week_scroll_pane_g12

0x3bd8,	// (0x0003d4d8) cale_week_scroll_pane_g13

0x3be9,	// (0x0003d4e9) cale_week_scroll_pane_g14

0x3bfa,	// (0x0003d4fa) cale_week_scroll_pane_g15

0x000e,

0xf1d2,	// (0x00048ad2) cale_week_scroll_pane_g

0x3c0b,	// (0x0003d50b) cale_week_time_pane

0x3c1e,	// (0x0003d51e) grid_cale_week_pane

0x3c31,	// (0x0003d531) scroll_pane_cp08

0x3c4b,	// (0x0003d54b) cell_cale_week_pane_ParamLimits

0x3c4b,	// (0x0003d54b) cell_cale_week_pane

0x3c87,	// (0x0003d587) cale_week_day_heading_pane_t1

0x3cb1,	// (0x0003d5b1) cale_week_day_heading_pane_t2

0x3cdb,	// (0x0003d5db) cale_week_day_heading_pane_t3

0x3d05,	// (0x0003d605) cale_week_day_heading_pane_t4

0x3d2f,	// (0x0003d62f) cale_week_day_heading_pane_t5

0x3d59,	// (0x0003d659) cale_week_day_heading_pane_t6

0x3d83,	// (0x0003d683) cale_week_day_heading_pane_t7

0x0006,

0xf1f1,	// (0x00048af1) cale_week_day_heading_pane_t

0x1872,	// (0x0003b172) bg_cale_side_pane

0x3dad,	// (0x0003d6ad) cale_week_time_pane_t1

0x3dd9,	// (0x0003d6d9) cale_week_time_pane_t2

0x3e05,	// (0x0003d705) cale_week_time_pane_t3

0x3e31,	// (0x0003d731) cale_week_time_pane_t4

0x3e5d,	// (0x0003d75d) cale_week_time_pane_t5

0x3e89,	// (0x0003d789) cale_week_time_pane_t6

0x3eb5,	// (0x0003d7b5) cale_week_time_pane_t7

0x3ee1,	// (0x0003d7e1) cale_week_time_pane_t8

0x0007,

0xf200,	// (0x00048b00) cale_week_time_pane_t

0x3f0d,	// (0x0003d80d) cell_cale_week_pane_g2

0x3f26,	// (0x0003d826) cell_cale_week_pane_g3_ParamLimits

0x3f26,	// (0x0003d826) cell_cale_week_pane_g3

0x1880,	// (0x0003b180) grid_highlight_pane_cp07

0x1888,	// (0x0003b188) listscroll_gms_pane

0x1892,	// (0x0003b192) grid_gms_pane

0x189b,	// (0x0003b19b) listscroll_gms_pane_g1

0x18a3,	// (0x0003b1a3) listscroll_gms_pane_g2

0x0001,

0xf211,	// (0x00048b11) listscroll_gms_pane_g

0x3f3e,	// (0x0003d83e) scroll_pane_cp010

0x3f49,	// (0x0003d849) cell_gms_pane_ParamLimits

0x3f49,	// (0x0003d849) cell_gms_pane

0x3f59,	// (0x0003d859) cell_gms_pane_g1

0x18ab,	// (0x0003b1ab) cell_gms_pane_g2

0x181e,	// (0x0003b11e) cell_gms_pane_g3

0x18b3,	// (0x0003b1b3) cell_gms_pane_g4

0x0003,

0xf216,	// (0x00048b16) cell_gms_pane_g

0x18bc,	// (0x0003b1bc) grid_highlight_pane_cp09

0x6632,	// (0x0003ff32) phob_pre_status_pane_g1

0x663a,	// (0x0003ff3a) phob_pre_status_pane_g2

0x6642,	// (0x0003ff42) phob_pre_status_pane_g3

0x664a,	// (0x0003ff4a) phob_pre_status_pane_g4

0x0004,

0xf618,	// (0x00048f18) phob_pre_status_pane_g

0x665a,	// (0x0003ff5a) phob_pre_status_pane_t1

0x6668,	// (0x0003ff68) phob_pre_status_pane_t2

0x6676,	// (0x0003ff76) phob_pre_status_pane_t3

0x0002,

0xf623,	// (0x00048f23) phob_pre_status_pane_t

0x13e6,	// (0x0003ace6) bg_list_pane_cp05

0x3f69,	// (0x0003d869) grid_vorec_pane

0xb1ee,	// (0x00044aee) vorec_t1

0xb1fc,	// (0x00044afc) vorec_t2

0xb20a,	// (0x00044b0a) vorec_t3

0xb218,	// (0x00044b18) vorec_t4

0xb226,	// (0x00044b26) vorec_t5

0xb234,	// (0x00044b34) vorec_t6

0x0006,

0xf21f,	// (0x00048b1f) vorec_t

0xb250,	// (0x00044b50) wait_bar_pane_cp01

0x3f71,	// (0x0003d871) cell_vorec_pane_ParamLimits

0x3f71,	// (0x0003d871) cell_vorec_pane

0x18c4,	// (0x0003b1c4) cell_vorec_pane_g1

0x13e6,	// (0x0003ace6) grid_highlight_pane_cp05

0x3f96,	// (0x0003d896) cams_zoom_pane

0x3fa5,	// (0x0003d8a5) image_vga_pane

0x3fbd,	// (0x0003d8bd) main_camera_pane_g1

0x3fcd,	// (0x0003d8cd) main_camera_pane_g2

0x3fdd,	// (0x0003d8dd) main_camera_pane_g3

0x3fed,	// (0x0003d8ed) main_camera_pane_g4

0x3ffd,	// (0x0003d8fd) main_camera_pane_g5

0x400d,	// (0x0003d90d) main_camera_pane_g6

0x401d,	// (0x0003d91d) main_camera_pane_g7

0x0007,

0xf22e,	// (0x00048b2e) main_camera_pane_g

0x402d,	// (0x0003d92d) main_camera_pane_t1

0x4043,	// (0x0003d943) main_camera_pane_t2

0x0001,

0xf23f,	// (0x00048b3f) main_camera_pane_t

0x4075,	// (0x0003d975) cams_zoom_pane_cp_ParamLimits

0x4075,	// (0x0003d975) cams_zoom_pane_cp

0x409d,	// (0x0003d99d) image_cif_pane_ParamLimits

0x409d,	// (0x0003d99d) image_cif_pane

0x40ce,	// (0x0003d9ce) image_subqcif_pane

0x40d6,	// (0x0003d9d6) main_video_pane_g1_ParamLimits

0x40d6,	// (0x0003d9d6) main_video_pane_g1

0x40fa,	// (0x0003d9fa) main_video_pane_g2_ParamLimits

0x40fa,	// (0x0003d9fa) main_video_pane_g2

0x412e,	// (0x0003da2e) main_video_pane_g3_ParamLimits

0x412e,	// (0x0003da2e) main_video_pane_g3

0x415c,	// (0x0003da5c) main_video_pane_g4_ParamLimits

0x415c,	// (0x0003da5c) main_video_pane_g4

0x418a,	// (0x0003da8a) main_video_pane_g5_ParamLimits

0x418a,	// (0x0003da8a) main_video_pane_g5

0x18da,	// (0x0003b1da) main_video_pane_g6_ParamLimits

0x18da,	// (0x0003b1da) main_video_pane_g6

0x0006,

0xf244,	// (0x00048b44) main_video_pane_g_ParamLimits

0xf244,	// (0x00048b44) main_video_pane_g

0x41b1,	// (0x0003dab1) main_video_pane_t1_ParamLimits

0x41b1,	// (0x0003dab1) main_video_pane_t1

0x18f4,	// (0x0003b1f4) cams_zoom_pane_g1

0x18fd,	// (0x0003b1fd) cams_zoom_pane_g2

0x1906,	// (0x0003b206) cams_zoom_pane_g3

0x190f,	// (0x0003b20f) cams_zoom_pane_g4

0x0003,

0xf253,	// (0x00048b53) cams_zoom_pane_g

0x420e,	// (0x0003db0e) grid_cams_pane

0x4223,	// (0x0003db23) linegrid_cams_pane

0x4234,	// (0x0003db34) cell_cams_pane_ParamLimits

0x4234,	// (0x0003db34) cell_cams_pane

0x1918,	// (0x0003b218) cams_burst_image_pane

0x1920,	// (0x0003b220) cell_cams_pane_g1

0x13e6,	// (0x0003ace6) grid_highlight_pane_cp03

0x1765,	// (0x0003b065) mp_bg_pane_g1

0x13e6,	// (0x0003ace6) bg_list_pane_cp03

0xc44f,	// (0x00045d4f) bg_mp_pane

0xc457,	// (0x00045d57) grid_mp_pane

0xc45f,	// (0x00045d5f) media_player_g1

0xc467,	// (0x00045d67) media_player_t1

0xc475,	// (0x00045d75) media_player_t2

0xc483,	// (0x00045d83) media_player_t3

0xc491,	// (0x00045d91) media_player_t4

0xc49f,	// (0x00045d9f) media_player_t5

0xc4ad,	// (0x00045dad) media_player_t6

0xc4bb,	// (0x00045dbb) media_player_t7

0x0006,

0xf602,	// (0x00048f02) media_player_t

0xc4c9,	// (0x00045dc9) wait_bar_pane_cp02

0xf5e7,	// (0x00048ee7) main_usb_pane_t

0x6629,	// (0x0003ff29) cell_mp_pane

0x1765,	// (0x0003b065) cell_mp_pane_g1

0x13e6,	// (0x0003ace6) grid_highlight_pane_cp06

0x1928,	// (0x0003b228) grid_skin_colour_pane

0x1930,	// (0x0003b230) list_highlight_pane_cp03

0x4252,	// (0x0003db52) skin_g1

0x1938,	// (0x0003b238) skin_t1

0x1947,	// (0x0003b247) skin_t2

0x0001,

0xf288,	// (0x00048b88) skin_t

0x425a,	// (0x0003db5a) cell_skin_colour_pane_ParamLimits

0x425a,	// (0x0003db5a) cell_skin_colour_pane

0x1955,	// (0x0003b255) cell_skin_colour_pane_g1

0x42c3,	// (0x0003dbc3) call_video_g1_ParamLimits

0x42c3,	// (0x0003dbc3) call_video_g1

0x42d9,	// (0x0003dbd9) call_video_g2_ParamLimits

0x42d9,	// (0x0003dbd9) call_video_g2

0x0001,

0xf28d,	// (0x00048b8d) call_video_g_ParamLimits

0xf28d,	// (0x00048b8d) call_video_g

0x4321,	// (0x0003dc21) call_video_uplink_pane_cp1_ParamLimits

0x4321,	// (0x0003dc21) call_video_uplink_pane_cp1

0x1967,	// (0x0003b267) call_video_uplink_pane_cp2

0x43b6,	// (0x0003dcb6) video_down_crop_pane_ParamLimits

0x43b6,	// (0x0003dcb6) video_down_crop_pane

0x4479,	// (0x0003dd79) video_down_pane_ParamLimits

0x4479,	// (0x0003dd79) video_down_pane

0x196f,	// (0x0003b26f) video_down_subqcif_pane_ParamLimits

0x196f,	// (0x0003b26f) video_down_subqcif_pane

0x1987,	// (0x0003b287) video_down_subqcif_pane_cp_ParamLimits

0x1987,	// (0x0003b287) video_down_subqcif_pane_cp

0x19ab,	// (0x0003b2ab) im_reading_pane_ParamLimits

0x19ab,	// (0x0003b2ab) im_reading_pane

0x4536,	// (0x0003de36) im_writing_pane_ParamLimits

0x4536,	// (0x0003de36) im_writing_pane

0x454c,	// (0x0003de4c) im_reading_pane_t1

0x19c5,	// (0x0003b2c5) list_im_pane

0x19d6,	// (0x0003b2d6) scroll_pane_cp07

0x4582,	// (0x0003de82) im_writing_pane_t1_ParamLimits

0x4582,	// (0x0003de82) im_writing_pane_t1

0x19ef,	// (0x0003b2ef) im_writing_pane_t2_ParamLimits

0x19ef,	// (0x0003b2ef) im_writing_pane_t2

0x0001,

0xf297,	// (0x00048b97) im_writing_pane_t_ParamLimits

0xf297,	// (0x00048b97) im_writing_pane_t

0x13e6,	// (0x0003ace6) input_focus_pane_cp04

0x13e6,	// (0x0003ace6) input_focus_pane_cp05

0x4597,	// (0x0003de97) list_im_single_pane_ParamLimits

0x4597,	// (0x0003de97) list_im_single_pane

0x1a0c,	// (0x0003b30c) list_single_im_pane_t1

0x65ef,	// (0x0003feef) blid_accuracy_pane

0x65f7,	// (0x0003fef7) blid_compass_pane

0x65ff,	// (0x0003feff) main_location_t1

0x660d,	// (0x0003ff0d) main_location_t2

0x661b,	// (0x0003ff1b) main_location_t3

0x0002,

0xf611,	// (0x00048f11) main_location_t

0x13e6,	// (0x0003ace6) aid_levels_location

0x1765,	// (0x0003b065) blid_accuracy_pane_g1

0x1765,	// (0x0003b065) blid_accuracy_pane_g2

0x0001,

0xf2f9,	// (0x00048bf9) blid_accuracy_pane_g

0x1a46,	// (0x0003b346) wml_content_pane

0x1a84,	// (0x0003b384) wml_button_pane_ParamLimits

0x1a84,	// (0x0003b384) wml_button_pane

0x45ad,	// (0x0003dead) wml_list_single_large_pane_ParamLimits

0x45ad,	// (0x0003dead) wml_list_single_large_pane

0x45c1,	// (0x0003dec1) wml_list_single_medium_pane_ParamLimits

0x45c1,	// (0x0003dec1) wml_list_single_medium_pane

0x45d6,	// (0x0003ded6) wml_list_single_small_pane_ParamLimits

0x45d6,	// (0x0003ded6) wml_list_single_small_pane

0x1a98,	// (0x0003b398) wml_selection_box_pane_ParamLimits

0x1a98,	// (0x0003b398) wml_selection_box_pane

0x1aab,	// (0x0003b3ab) wml_list_single_pane_t1

0x1aba,	// (0x0003b3ba) wml_list_single_medium_pane_t1

0x1ac9,	// (0x0003b3c9) wml_list_single_large_pane_t1

0x1ad8,	// (0x0003b3d8) input_focus_pane_cp02_ParamLimits

0x1ad8,	// (0x0003b3d8) input_focus_pane_cp02

0x1aeb,	// (0x0003b3eb) wml_selection_box_pane_g1

0x1af4,	// (0x0003b3f4) wml_selection_box_pane_t1_ParamLimits

0x1af4,	// (0x0003b3f4) wml_selection_box_pane_t1

0x1641,	// (0x0003af41) bg_wml_button_pane_ParamLimits

0x1641,	// (0x0003af41) bg_wml_button_pane

0x1b0c,	// (0x0003b40c) wml_button_pane_g1

0x1b14,	// (0x0003b414) wml_button_pane_t1

0x1b0c,	// (0x0003b40c) wml_button_bg_pane_g1

0x1b24,	// (0x0003b424) wml_button_bg_pane_g2

0x1b2c,	// (0x0003b42c) wml_button_bg_pane_g3

0x1b34,	// (0x0003b434) wml_button_bg_pane_g4

0x1b3c,	// (0x0003b43c) wml_button_bg_pane_g5

0x1b44,	// (0x0003b444) wml_button_bg_pane_g6

0x1b4c,	// (0x0003b44c) wml_button_bg_pane_g7

0x1b54,	// (0x0003b454) wml_button_bg_pane_g8

0x1b5c,	// (0x0003b45c) wml_button_bg_pane_g9

0x0008,

0xf29c,	// (0x00048b9c) wml_button_bg_pane_g

0x45ed,	// (0x0003deed) bg_list_pane_cp02

0x1b64,	// (0x0003b464) mce_header_pane_ParamLimits

0x1b64,	// (0x0003b464) mce_header_pane

0x1b78,	// (0x0003b478) mce_icon_pane

0x1b78,	// (0x0003b478) mce_image_pane

0x1b81,	// (0x0003b481) mce_text_pane_ParamLimits

0x1b81,	// (0x0003b481) mce_text_pane

0x45f6,	// (0x0003def6) scroll_pane_cp03

0x45f6,	// (0x0003def6) scroll_pane_cp04

0x1b95,	// (0x0003b495) scroll_pane_cp05_ParamLimits

0x1b95,	// (0x0003b495) scroll_pane_cp05

0x4600,	// (0x0003df00) mce_header_field_pane_ParamLimits

0x4600,	// (0x0003df00) mce_header_field_pane

0x4617,	// (0x0003df17) mce_header_field_pane_2_ParamLimits

0x4617,	// (0x0003df17) mce_header_field_pane_2

0x462d,	// (0x0003df2d) mce_header_field_pane_3

0x4635,	// (0x0003df35) list_single_mce_message_pane_ParamLimits

0x4635,	// (0x0003df35) list_single_mce_message_pane

0x464a,	// (0x0003df4a) list_single_mce_smart_pane_ParamLimits

0x464a,	// (0x0003df4a) list_single_mce_smart_pane

0x1ba1,	// (0x0003b4a1) input_focus_pane_cp03

0x1baa,	// (0x0003b4aa) list_header_data_pane

0x466a,	// (0x0003df6a) mce_header_field_pane_t1

0x4678,	// (0x0003df78) list_single_mce_header_pane_ParamLimits

0x4678,	// (0x0003df78) list_single_mce_header_pane

0x1bb2,	// (0x0003b4b2) list_single_mce_header_pane_t1

0x1bc1,	// (0x0003b4c1) list_single_mce_message_pane_g1

0x1bca,	// (0x0003b4ca) list_single_mce_message_pane_t1

0x46aa,	// (0x0003dfaa) bg_cale_heading_pane_cp01_ParamLimits

0x46aa,	// (0x0003dfaa) bg_cale_heading_pane_cp01

0x1bd9,	// (0x0003b4d9) bg_cale_pane_cp02_ParamLimits

0x1bd9,	// (0x0003b4d9) bg_cale_pane_cp02

0x46cd,	// (0x0003dfcd) cale_month_corner_pane

0x46e3,	// (0x0003dfe3) cale_month_day_heading_pane_ParamLimits

0x46e3,	// (0x0003dfe3) cale_month_day_heading_pane

0x4716,	// (0x0003e016) cale_month_pane_g1_ParamLimits

0x4716,	// (0x0003e016) cale_month_pane_g1

0x4732,	// (0x0003e032) cale_month_pane_g2_ParamLimits

0x4732,	// (0x0003e032) cale_month_pane_g2

0x474d,	// (0x0003e04d) cale_month_pane_g3_ParamLimits

0x474d,	// (0x0003e04d) cale_month_pane_g3

0x4779,	// (0x0003e079) cale_month_pane_g4_ParamLimits

0x4779,	// (0x0003e079) cale_month_pane_g4

0x47a5,	// (0x0003e0a5) cale_month_pane_g5_ParamLimits

0x47a5,	// (0x0003e0a5) cale_month_pane_g5

0x47d1,	// (0x0003e0d1) cale_month_pane_g6_ParamLimits

0x47d1,	// (0x0003e0d1) cale_month_pane_g6

0x47fd,	// (0x0003e0fd) cale_month_pane_g7_ParamLimits

0x47fd,	// (0x0003e0fd) cale_month_pane_g7

0x4829,	// (0x0003e129) cale_month_pane_g8_ParamLimits

0x4829,	// (0x0003e129) cale_month_pane_g8

0x4865,	// (0x0003e165) cale_month_pane_g9_ParamLimits

0x4865,	// (0x0003e165) cale_month_pane_g9

0x489f,	// (0x0003e19f) cale_month_pane_g10_ParamLimits

0x489f,	// (0x0003e19f) cale_month_pane_g10

0x48d9,	// (0x0003e1d9) cale_month_pane_g11_ParamLimits

0x48d9,	// (0x0003e1d9) cale_month_pane_g11

0x4913,	// (0x0003e213) cale_month_pane_g12_ParamLimits

0x4913,	// (0x0003e213) cale_month_pane_g12

0x494d,	// (0x0003e24d) cale_month_pane_g13_ParamLimits

0x494d,	// (0x0003e24d) cale_month_pane_g13

0x000c,

0xf2af,	// (0x00048baf) cale_month_pane_g_ParamLimits

0xf2af,	// (0x00048baf) cale_month_pane_g

0x4987,	// (0x0003e287) cale_month_week_pane

0x499a,	// (0x0003e29a) grid_cale_month_pane_ParamLimits

0x499a,	// (0x0003e29a) grid_cale_month_pane

0x49c8,	// (0x0003e2c8) cale_month_day_heading_pane_t1

0x4a26,	// (0x0003e326) cale_month_day_heading_pane_t2

0x4a8b,	// (0x0003e38b) cale_month_day_heading_pane_t3

0x4af0,	// (0x0003e3f0) cale_month_day_heading_pane_t4

0x4b55,	// (0x0003e455) cale_month_day_heading_pane_t5

0x4bba,	// (0x0003e4ba) cale_month_day_heading_pane_t6

0x4c1f,	// (0x0003e51f) cale_month_day_heading_pane_t7

0x0006,

0xf2ca,	// (0x00048bca) cale_month_day_heading_pane_t

0x1872,	// (0x0003b172) bg_cale_side_pane_cp01

0x4c8c,	// (0x0003e58c) cale_month_week_pane_t1

0x4ca3,	// (0x0003e5a3) cale_month_week_pane_t2

0x4cba,	// (0x0003e5ba) cale_month_week_pane_t3

0x4cd1,	// (0x0003e5d1) cale_month_week_pane_t4

0x4ce8,	// (0x0003e5e8) cale_month_week_pane_t5

0x4cff,	// (0x0003e5ff) cale_month_week_pane_t6

0x0005,

0xf2d9,	// (0x00048bd9) cale_month_week_pane_t

0x4d16,	// (0x0003e616) cell_cale_month_pane_ParamLimits

0x4d16,	// (0x0003e616) cell_cale_month_pane

0xb322,	// (0x00044c22) cell_cale_month_pane_g1

0x4dc4,	// (0x0003e6c4) cell_cale_month_pane_t1_ParamLimits

0x4dc4,	// (0x0003e6c4) cell_cale_month_pane_t1

0x1880,	// (0x0003b180) grid_highlight_pane_cp08

0x1765,	// (0x0003b065) main_smil_g1

0x4de0,	// (0x0003e6e0) smil_status_pane

0x1c0e,	// (0x0003b50e) smil_text_pane

0xc32f,	// (0x00045c2f) bg_popup_call3_rect_pane_g8

0xc337,	// (0x00045c37) bg_popup_call3_rect_pane_g9

0x0008,

0xf592,	// (0x00048e92) bg_popup_call3_rect_pane_g

0xc5ed,	// (0x00045eed) smil_status_volume_pane_g1

0x1c18,	// (0x0003b518) smil_status_pane_t1

0xec55,	// (0x00048555) volume_smil_pane

0x1c2f,	// (0x0003b52f) list_smil_text_pane

0x4df1,	// (0x0003e6f1) scroll_pane_cp011

0x4dfc,	// (0x0003e6fc) smil_text_list_pane_t1_ParamLimits

0x4dfc,	// (0x0003e6fc) smil_text_list_pane_t1

0xb32e,	// (0x00044c2e) aid_volume_smil_ParamLimits

0xb32e,	// (0x00044c2e) aid_volume_smil

0x1765,	// (0x0003b065) smil_volume_pane_g1

0x1765,	// (0x0003b065) smil_volume_pane_g2

0x0001,

0xf2f9,	// (0x00048bf9) smil_volume_pane_g

0x1710,	// (0x0003b010) listscroll_cale_day_pane

0x4e3a,	// (0x0003e73a) bg_cale_pane

0x4e52,	// (0x0003e752) list_cale_pane

0x4e63,	// (0x0003e763) scroll_pane_cp09

0x4e74,	// (0x0003e774) cale_bg_pane_g1

0x4e7c,	// (0x0003e77c) cale_bg_pane_g2

0x4e84,	// (0x0003e784) cale_bg_pane_g3

0x4e8c,	// (0x0003e78c) cale_bg_pane_g4

0x4e94,	// (0x0003e794) cale_bg_pane_g5

0x4e9c,	// (0x0003e79c) cale_bg_pane_g6

0x4ea4,	// (0x0003e7a4) cale_bg_pane_g7

0x4eac,	// (0x0003e7ac) cale_bg_pane_g8

0x4eb4,	// (0x0003e7b4) cale_bg_pane_g9

0x0008,

0xf2fe,	// (0x00048bfe) cale_bg_pane_g

0x4ebc,	// (0x0003e7bc) list_cale_time_pane_ParamLimits

0x4ebc,	// (0x0003e7bc) list_cale_time_pane

0x4ed1,	// (0x0003e7d1) list_cale_time_pane_g1_ParamLimits

0x4ed1,	// (0x0003e7d1) list_cale_time_pane_g1

0x4edd,	// (0x0003e7dd) list_cale_time_pane_g2_ParamLimits

0x4edd,	// (0x0003e7dd) list_cale_time_pane_g2

0x4eea,	// (0x0003e7ea) list_cale_time_pane_g3_ParamLimits

0x4eea,	// (0x0003e7ea) list_cale_time_pane_g3

0x4ef8,	// (0x0003e7f8) list_cale_time_pane_g4_ParamLimits

0x4ef8,	// (0x0003e7f8) list_cale_time_pane_g4

0x4f06,	// (0x0003e806) list_cale_time_pane_g5_ParamLimits

0x4f06,	// (0x0003e806) list_cale_time_pane_g5

0x0005,

0xf311,	// (0x00048c11) list_cale_time_pane_g_ParamLimits

0xf311,	// (0x00048c11) list_cale_time_pane_g

0x4f1f,	// (0x0003e81f) list_cale_time_pane_t1_ParamLimits

0x4f1f,	// (0x0003e81f) list_cale_time_pane_t1

0x4f47,	// (0x0003e847) list_cale_time_pane_t2_ParamLimits

0x4f47,	// (0x0003e847) list_cale_time_pane_t2

0x5621,	// (0x0003ef21) aid_blid_cardinal_pane

0x566b,	// (0x0003ef6b) compass_pane_t4

0x4f6f,	// (0x0003e86f) list_cale_time_pane_t4_ParamLimits

0x4f6f,	// (0x0003e86f) list_cale_time_pane_t4

0x5679,	// (0x0003ef79) compass_pane_t5

0x5687,	// (0x0003ef87) compass_pane_t6

0x5695,	// (0x0003ef95) compass_pane_t7

0x56f5,	// (0x0003eff5) navi_pane_cc_t1

0x58fc,	// (0x0003f1fc) aid_phob_thumbnail_center_pane

0x5e9c,	// (0x0003f79c) main_postcard_pane_g4_ParamLimits

0x0002,

0xf31e,	// (0x00048c1e) list_cale_time_pane_t_ParamLimits

0xf31e,	// (0x00048c1e) list_cale_time_pane_t

0x103f,	// (0x0003a93f) bg_popup_window_pane_cp02_ParamLimits

0x103f,	// (0x0003a93f) bg_popup_window_pane_cp02

0x4f97,	// (0x0003e897) heading_pane_cp01_ParamLimits

0x4f97,	// (0x0003e897) heading_pane_cp01

0x4fa3,	// (0x0003e8a3) loc_req_pane_ParamLimits

0x4fa3,	// (0x0003e8a3) loc_req_pane

0x4fb3,	// (0x0003e8b3) loc_type_pane_ParamLimits

0x4fb3,	// (0x0003e8b3) loc_type_pane

0x4fc5,	// (0x0003e8c5) loc_type_pane_t1_ParamLimits

0x4fc5,	// (0x0003e8c5) loc_type_pane_t1

0x4fd7,	// (0x0003e8d7) loc_type_pane_t2_ParamLimits

0x4fd7,	// (0x0003e8d7) loc_type_pane_t2

0x4fe9,	// (0x0003e8e9) loc_type_pane_t3_ParamLimits

0x4fe9,	// (0x0003e8e9) loc_type_pane_t3

0x0002,

0xf325,	// (0x00048c25) loc_type_pane_t_ParamLimits

0xf325,	// (0x00048c25) loc_type_pane_t

0x4ffb,	// (0x0003e8fb) list_loc_req_pane

0x5005,	// (0x0003e905) scroll_pane_cp012

0x500e,	// (0x0003e90e) list_single_loc_request_popup_menu_pane_ParamLimits

0x500e,	// (0x0003e90e) list_single_loc_request_popup_menu_pane

0x501b,	// (0x0003e91b) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x501b,	// (0x0003e91b) list_single_loc_request_popup_menu_pane_g1

0x5027,	// (0x0003e927) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x5027,	// (0x0003e927) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf32c,	// (0x00048c2c) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf32c,	// (0x00048c2c) list_single_loc_request_popup_menu_pane_g

0x5033,	// (0x0003e933) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x5033,	// (0x0003e933) list_single_loc_request_popup_menu_pane_t1

0x1641,	// (0x0003af41) bg_popup_window_pane_cp03_ParamLimits

0x1641,	// (0x0003af41) bg_popup_window_pane_cp03

0x5049,	// (0x0003e949) heading_loc_req_pane_ParamLimits

0x5049,	// (0x0003e949) heading_loc_req_pane

0x5055,	// (0x0003e955) popup_dyc_status_message_window_g1_ParamLimits

0x5055,	// (0x0003e955) popup_dyc_status_message_window_g1

0x5069,	// (0x0003e969) popup_dyc_status_message_window_t1_ParamLimits

0x5069,	// (0x0003e969) popup_dyc_status_message_window_t1

0x507e,	// (0x0003e97e) popup_dyc_status_message_window_t2_ParamLimits

0x507e,	// (0x0003e97e) popup_dyc_status_message_window_t2

0x5093,	// (0x0003e993) popup_dyc_status_message_window_t3_ParamLimits

0x5093,	// (0x0003e993) popup_dyc_status_message_window_t3

0x0002,

0xf331,	// (0x00048c31) popup_dyc_status_message_window_t_ParamLimits

0xf331,	// (0x00048c31) popup_dyc_status_message_window_t

0x13e6,	// (0x0003ace6) bg_heading_pane_cp01

0x50af,	// (0x0003e9af) heading_loc_req_pane_g1

0x50b7,	// (0x0003e9b7) heading_loc_req_pane_g2

0x50bf,	// (0x0003e9bf) heading_loc_req_pane_g3

0x0002,

0xf338,	// (0x00048c38) heading_loc_req_pane_g

0x50c7,	// (0x0003e9c7) heading_loc_req_pane_t1

0x50f0,	// (0x0003e9f0) bg_popup_sub_pane_cp01_ParamLimits

0x50f0,	// (0x0003e9f0) bg_popup_sub_pane_cp01

0x50fe,	// (0x0003e9fe) popup_cale_events_window_g1_ParamLimits

0x50fe,	// (0x0003e9fe) popup_cale_events_window_g1

0x511e,	// (0x0003ea1e) popup_cale_events_window_g2_ParamLimits

0x511e,	// (0x0003ea1e) popup_cale_events_window_g2

0x0001,

0xf36c,	// (0x00048c6c) popup_cale_events_window_g_ParamLimits

0xf36c,	// (0x00048c6c) popup_cale_events_window_g

0x513e,	// (0x0003ea3e) popup_cale_events_window_t1_ParamLimits

0x513e,	// (0x0003ea3e) popup_cale_events_window_t1

0x5150,	// (0x0003ea50) popup_cale_events_window_t2_ParamLimits

0x5150,	// (0x0003ea50) popup_cale_events_window_t2

0x518e,	// (0x0003ea8e) popup_cale_events_window_t3_ParamLimits

0x518e,	// (0x0003ea8e) popup_cale_events_window_t3

0x51c8,	// (0x0003eac8) popup_cale_events_window_t4_ParamLimits

0x51c8,	// (0x0003eac8) popup_cale_events_window_t4

0x0003,

0xf371,	// (0x00048c71) popup_cale_events_window_t_ParamLimits

0xf371,	// (0x00048c71) popup_cale_events_window_t

0x51fe,	// (0x0003eafe) call_type_pane

0x520e,	// (0x0003eb0e) popup_call_status_window_g1

0x5222,	// (0x0003eb22) popup_call_status_window_g2

0x5236,	// (0x0003eb36) popup_call_status_window_g3

0x0002,

0xf37a,	// (0x00048c7a) popup_call_status_window_g

0x5246,	// (0x0003eb46) call_type_pane_g1

0x524f,	// (0x0003eb4f) call_type_pane_g2

0x0001,

0xf381,	// (0x00048c81) call_type_pane_g

0x13e6,	// (0x0003ace6) bg_popup_sub_pane_cp02

0x5258,	// (0x0003eb58) listscroll_popup_wml_pane

0x5260,	// (0x0003eb60) list_wml_pane

0x526a,	// (0x0003eb6a) scroll_pane_cp013

0x5273,	// (0x0003eb73) list_single_graphic_popup_wml_pane_ParamLimits

0x5273,	// (0x0003eb73) list_single_graphic_popup_wml_pane

0x1765,	// (0x0003b065) list_single_graphic_popup_wml_pane_g1

0x5286,	// (0x0003eb86) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf386,	// (0x00048c86) list_single_graphic_popup_wml_pane_g

0x528e,	// (0x0003eb8e) list_single_graphic_popup_wml_pane_t1

0x52a4,	// (0x0003eba4) aid_call_pane

0x1639,	// (0x0003af39) popup_clock_analogue_window_g1

0x1639,	// (0x0003af39) popup_clock_analogue_window_g2

0xb3ea,	// (0x00044cea) popup_clock_analogue_window_g3

0xb3ea,	// (0x00044cea) popup_clock_analogue_window_g4

0x1765,	// (0x0003b065) popup_clock_analogue_window_g5

0x0004,

0xf38b,	// (0x00048c8b) popup_clock_analogue_window_g

0xb3f2,	// (0x00044cf2) popup_clock_analogue_window_t1

0xb400,	// (0x00044d00) clock_digital_number_pane_ParamLimits

0xb400,	// (0x00044d00) clock_digital_number_pane

0xb40c,	// (0x00044d0c) clock_digital_number_pane_cp02_ParamLimits

0xb40c,	// (0x00044d0c) clock_digital_number_pane_cp02

0xb418,	// (0x00044d18) clock_digital_number_pane_cp03_ParamLimits

0xb418,	// (0x00044d18) clock_digital_number_pane_cp03

0xb424,	// (0x00044d24) clock_digital_number_pane_cp04_ParamLimits

0xb424,	// (0x00044d24) clock_digital_number_pane_cp04

0xb430,	// (0x00044d30) clock_digital_separator_pane_ParamLimits

0xb430,	// (0x00044d30) clock_digital_separator_pane

0xb43c,	// (0x00044d3c) popup_clock_digital_window_t1

0x1765,	// (0x0003b065) clock_digital_number_pane_g1

0x1765,	// (0x0003b065) clock_digital_number_pane_g2

0x0001,

0xf2f9,	// (0x00048bf9) clock_digital_number_pane_g

0x1765,	// (0x0003b065) clock_digital_separator_pane_g1

0x1765,	// (0x0003b065) clock_digital_separator_pane_g2

0x0001,

0xf2f9,	// (0x00048bf9) clock_digital_separator_pane_g

0x13e6,	// (0x0003ace6) bg_popup_window_pane_cp04

0x52ac,	// (0x0003ebac) heading_pane_cp03

0x52b4,	// (0x0003ebb4) listscroll_popup_gms_pane

0x52bc,	// (0x0003ebbc) grid_large_graphic_popup_pane

0x52c6,	// (0x0003ebc6) listscroll_popup_gms_pane_g1

0x52ce,	// (0x0003ebce) listscroll_popup_gms_pane_g2

0x0001,

0xf396,	// (0x00048c96) listscroll_popup_gms_pane_g

0x1a7c,	// (0x0003b37c) scroll_pane_cp014

0x52d6,	// (0x0003ebd6) cell_large_graphic_popup_pane_ParamLimits

0x52d6,	// (0x0003ebd6) cell_large_graphic_popup_pane

0x52ec,	// (0x0003ebec) cell_large_graphic_popup_pane_g1_ParamLimits

0x52ec,	// (0x0003ebec) cell_large_graphic_popup_pane_g1

0x52f8,	// (0x0003ebf8) cell_large_graphic_popup_pane_g2_ParamLimits

0x52f8,	// (0x0003ebf8) cell_large_graphic_popup_pane_g2

0x5304,	// (0x0003ec04) cell_large_graphic_popup_pane_g3_ParamLimits

0x5304,	// (0x0003ec04) cell_large_graphic_popup_pane_g3

0x5311,	// (0x0003ec11) cell_large_graphic_popup_pane_g4_ParamLimits

0x5311,	// (0x0003ec11) cell_large_graphic_popup_pane_g4

0x0003,

0xf39b,	// (0x00048c9b) cell_large_graphic_popup_pane_g_ParamLimits

0xf39b,	// (0x00048c9b) cell_large_graphic_popup_pane_g

0x5321,	// (0x0003ec21) grid_highlight_pane_cp010

0x1765,	// (0x0003b065) bg_popup_call_pane_g1

0x532b,	// (0x0003ec2b) list_single_graphic_popup_conf_pane_ParamLimits

0x532b,	// (0x0003ec2b) list_single_graphic_popup_conf_pane

0x533e,	// (0x0003ec3e) list_highlight_pane_cp01

0x5347,	// (0x0003ec47) list_single_graphic_popup_conf_pane_g1

0x534f,	// (0x0003ec4f) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf3a4,	// (0x00048ca4) list_single_graphic_popup_conf_pane_g

0x5357,	// (0x0003ec57) list_single_graphic_popup_conf_pane_t1

0x5365,	// (0x0003ec65) linegrid_cams_pane_g1

0x536e,	// (0x0003ec6e) linegrid_cams_pane_g2

0x181e,	// (0x0003b11e) linegrid_cams_pane_g3

0x5377,	// (0x0003ec77) linegrid_cams_pane_g4

0x5380,	// (0x0003ec80) linegrid_cams_pane_g5

0x5389,	// (0x0003ec89) linegrid_cams_pane_g6

0x18b3,	// (0x0003b1b3) linegrid_cams_pane_g7

0x0006,

0xf3a9,	// (0x00048ca9) linegrid_cams_pane_g

0x5392,	// (0x0003ec92) popup_clock_analogue_window

0x5392,	// (0x0003ec92) popup_clock_digital_window

0x13e6,	// (0x0003ace6) popup_phob_thumbnail_window

0x1765,	// (0x0003b065) call_video_uplink_pane_g1

0x539b,	// (0x0003ec9b) call_video_uplink_pane_g2

0x0001,

0xf3b8,	// (0x00048cb8) call_video_uplink_pane_g

0x1880,	// (0x0003b180) video_uplink_pane

0x53a3,	// (0x0003eca3) mce_image_pane_g1

0x53ad,	// (0x0003ecad) mce_image_pane_g2

0x53b5,	// (0x0003ecb5) mce_image_pane_g3

0x53bd,	// (0x0003ecbd) mce_image_pane_g4

0x53c5,	// (0x0003ecc5) mce_image_pane_g5

0x0004,

0xf3bd,	// (0x00048cbd) mce_image_pane_g

0x53cd,	// (0x0003eccd) control_top_pane_stacon_cp01_ParamLimits

0x53cd,	// (0x0003eccd) control_top_pane_stacon_cp01

0x53dd,	// (0x0003ecdd) uni_indicator_pane_stacon_cp01_ParamLimits

0x53dd,	// (0x0003ecdd) uni_indicator_pane_stacon_cp01

0x53ee,	// (0x0003ecee) bg_popup_sub_pane_cp03

0x53f8,	// (0x0003ecf8) chi_dic_find_pane

0x5400,	// (0x0003ed00) listscroll_chi_dic_pane

0x5409,	// (0x0003ed09) main_pane_chidic_g1

0x541c,	// (0x0003ed1c) chi_dic_find_pane_t1

0x542a,	// (0x0003ed2a) find_chidic_pane

0x5433,	// (0x0003ed33) chi_dic_list_pane_ParamLimits

0x5433,	// (0x0003ed33) chi_dic_list_pane

0x5444,	// (0x0003ed44) scroll_pane_cp020

0x544c,	// (0x0003ed4c) find_chidic_pane_t1

0x13e6,	// (0x0003ace6) input_focus_pane_cp06

0x545b,	// (0x0003ed5b) list_chi_dic_pane_ParamLimits

0x545b,	// (0x0003ed5b) list_chi_dic_pane

0x546d,	// (0x0003ed6d) list_chi_dic_pane_t1_ParamLimits

0x546d,	// (0x0003ed6d) list_chi_dic_pane_t1

0x13e6,	// (0x0003ace6) list_highlight_pane_cp020

0x5480,	// (0x0003ed80) bg_cale_heading_pane_g1

0x5488,	// (0x0003ed88) bg_cale_heading_pane_g2

0x5490,	// (0x0003ed90) bg_cale_heading_pane_g3

0x5498,	// (0x0003ed98) bg_cale_heading_pane_g4

0x54a2,	// (0x0003eda2) bg_cale_heading_pane_g5

0x54ac,	// (0x0003edac) bg_cale_heading_pane_g6

0x54b4,	// (0x0003edb4) bg_cale_heading_pane_g7

0x54bc,	// (0x0003edbc) bg_cale_heading_pane_g8

0x54c6,	// (0x0003edc6) bg_cale_heading_pane_g9

0x0008,

0xf3c8,	// (0x00048cc8) bg_cale_heading_pane_g

0x5480,	// (0x0003ed80) bg_cale_side_pane_g1

0x54d0,	// (0x0003edd0) bg_cale_side_pane_g2

0x54d8,	// (0x0003edd8) bg_cale_side_pane_g3

0x54e0,	// (0x0003ede0) bg_cale_side_pane_g4

0x54e8,	// (0x0003ede8) bg_cale_side_pane_g5

0x54f0,	// (0x0003edf0) bg_cale_side_pane_g6

0x54f8,	// (0x0003edf8) bg_cale_side_pane_g7

0x5500,	// (0x0003ee00) bg_cale_side_pane_g8

0x5508,	// (0x0003ee08) bg_cale_side_pane_g9

0x0008,

0xf3db,	// (0x00048cdb) bg_cale_side_pane_g

0x5510,	// (0x0003ee10) popup_call_status_window_ParamLimits

0x5510,	// (0x0003ee10) popup_call_status_window

0x5557,	// (0x0003ee57) stacon_top_pane

0x555f,	// (0x0003ee5f) status_pane_ParamLimits

0x555f,	// (0x0003ee5f) status_pane

0x5579,	// (0x0003ee79) status_small_pane

0x5581,	// (0x0003ee81) control_pane

0x13e6,	// (0x0003ace6) stacon_bottom_pane

0x5589,	// (0x0003ee89) list_single_mce_smart_pane_t1_ParamLimits

0x5589,	// (0x0003ee89) list_single_mce_smart_pane_t1

0x559c,	// (0x0003ee9c) list_single_mce_smart_pane_t2_ParamLimits

0x559c,	// (0x0003ee9c) list_single_mce_smart_pane_t2

0x0001,

0xf3ee,	// (0x00048cee) list_single_mce_smart_pane_t_ParamLimits

0xf3ee,	// (0x00048cee) list_single_mce_smart_pane_t

0x55c4,	// (0x0003eec4) compass_pane

0x55cd,	// (0x0003eecd) main_location2_pane_t1

0x55e3,	// (0x0003eee3) main_location2_pane_t2

0x55f9,	// (0x0003eef9) main_location2_pane_t3

0x0003,

0xf3f3,	// (0x00048cf3) main_location2_pane_t

0x5641,	// (0x0003ef41) compass_pane_g1_ParamLimits

0x5641,	// (0x0003ef41) compass_pane_g1

0x564d,	// (0x0003ef4d) compass_pane_t1

0x565c,	// (0x0003ef5c) compass_pane_t2

0x0005,

0xf3fc,	// (0x00048cfc) compass_pane_t

0x56a3,	// (0x0003efa3) text_secondary_cp61

0x56ec,	// (0x0003efec) navi_pane_cams_g5

0x5752,	// (0x0003f052) navi_pane_im_t1

0x5760,	// (0x0003f060) navi_pane_mp_g1_ParamLimits

0x5760,	// (0x0003f060) navi_pane_mp_g1

0x5774,	// (0x0003f074) navi_pane_mp_g2_ParamLimits

0x5774,	// (0x0003f074) navi_pane_mp_g2

0x5780,	// (0x0003f080) navi_pane_mp_g3_ParamLimits

0x5780,	// (0x0003f080) navi_pane_mp_g3

0x0002,

0xf410,	// (0x00048d10) navi_pane_mp_g_ParamLimits

0xf410,	// (0x00048d10) navi_pane_mp_g

0x578c,	// (0x0003f08c) navi_pane_mp_t1

0x579a,	// (0x0003f09a) navi_pane_mp_t2

0x0002,

0xf417,	// (0x00048d17) navi_pane_mp_t

0x5845,	// (0x0003f145) navi_pane_vt_g1

0x578c,	// (0x0003f08c) navi_pane_vt_t1

0x584d,	// (0x0003f14d) navi_slider_pane

0x5855,	// (0x0003f155) zooming_pane

0x585d,	// (0x0003f15d) navi_slider_pane_g1

0xb459,	// (0x00044d59) navi_slider_pane_g2

0x0006,

0xf41e,	// (0x00048d1e) navi_slider_pane_g

0x5881,	// (0x0003f181) aid_levels_zoom

0x5889,	// (0x0003f189) zooming_pane_g1

0x5891,	// (0x0003f191) zooming_pane_g2

0x5891,	// (0x0003f191) zooming_pane_g3

0x0002,

0xf42d,	// (0x00048d2d) zooming_pane_g

0x5899,	// (0x0003f199) level_10_zoom

0x58a2,	// (0x0003f1a2) level_11_zoom

0x58ab,	// (0x0003f1ab) level_1_zoom

0x58b4,	// (0x0003f1b4) level_2_zoom

0x58bd,	// (0x0003f1bd) level_3_zoom

0x58c6,	// (0x0003f1c6) level_4_zoom

0x58cf,	// (0x0003f1cf) level_5_zoom

0x58d8,	// (0x0003f1d8) level_6_zoom

0x58e1,	// (0x0003f1e1) level_7_zoom

0x58ea,	// (0x0003f1ea) level_8_zoom

0x58f3,	// (0x0003f1f3) level_9_zoom

0x5904,	// (0x0003f204) popup_phob_thumbnail_window_g1

0x590c,	// (0x0003f20c) popup_phob_thumbnail_window_g2

0x0001,

0xf434,	// (0x00048d34) popup_phob_thumbnail_window_g

0xc4d1,	// (0x00045dd1) level_1_location

0xc4d9,	// (0x00045dd9) level_2_location

0xc4e1,	// (0x00045de1) level_3_location

0xc4e9,	// (0x00045de9) level_4_location

0x5855,	// (0x0003f155) level_5_location

0x5914,	// (0x0003f214) mce_icon_pane_g1

0x591c,	// (0x0003f21c) mce_icon_pane_g2

0x0001,

0xf439,	// (0x00048d39) mce_icon_pane_g

0x5924,	// (0x0003f224) main_mup_pane_g1_ParamLimits

0x5924,	// (0x0003f224) main_mup_pane_g1

0x593a,	// (0x0003f23a) main_mup_pane_g2_ParamLimits

0x593a,	// (0x0003f23a) main_mup_pane_g2

0x5952,	// (0x0003f252) main_mup_pane_g3_ParamLimits

0x5952,	// (0x0003f252) main_mup_pane_g3

0x596a,	// (0x0003f26a) main_mup_pane_g4_ParamLimits

0x596a,	// (0x0003f26a) main_mup_pane_g4

0x5982,	// (0x0003f282) main_mup_pane_g5_ParamLimits

0x5982,	// (0x0003f282) main_mup_pane_g5

0x599c,	// (0x0003f29c) main_mup_pane_g6_ParamLimits

0x599c,	// (0x0003f29c) main_mup_pane_g6

0x59b4,	// (0x0003f2b4) main_mup_pane_g7_ParamLimits

0x59b4,	// (0x0003f2b4) main_mup_pane_g7

0x59cc,	// (0x0003f2cc) main_mup_pane_g8_ParamLimits

0x59cc,	// (0x0003f2cc) main_mup_pane_g8

0x59e4,	// (0x0003f2e4) main_mup_pane_g9_ParamLimits

0x59e4,	// (0x0003f2e4) main_mup_pane_g9

0x59f8,	// (0x0003f2f8) main_mup_pane_g10_ParamLimits

0x59f8,	// (0x0003f2f8) main_mup_pane_g10

0x5a0c,	// (0x0003f30c) main_mup_pane_g11_ParamLimits

0x5a0c,	// (0x0003f30c) main_mup_pane_g11

0x5a1e,	// (0x0003f31e) main_mup_pane_g12_ParamLimits

0x5a1e,	// (0x0003f31e) main_mup_pane_g12

0x5a32,	// (0x0003f332) main_mup_pane_g13_ParamLimits

0x5a32,	// (0x0003f332) main_mup_pane_g13

0x000c,

0xf43e,	// (0x00048d3e) main_mup_pane_g_ParamLimits

0xf43e,	// (0x00048d3e) main_mup_pane_g

0x5a44,	// (0x0003f344) main_mup_pane_t1_ParamLimits

0x5a44,	// (0x0003f344) main_mup_pane_t1

0x5a5e,	// (0x0003f35e) main_mup_pane_t2_ParamLimits

0x5a5e,	// (0x0003f35e) main_mup_pane_t2

0x5a76,	// (0x0003f376) main_mup_pane_t3_ParamLimits

0x5a76,	// (0x0003f376) main_mup_pane_t3

0x5a8e,	// (0x0003f38e) main_mup_pane_t4_ParamLimits

0x5a8e,	// (0x0003f38e) main_mup_pane_t4

0x5aac,	// (0x0003f3ac) main_mup_pane_t5_ParamLimits

0x5aac,	// (0x0003f3ac) main_mup_pane_t5

0x5ac1,	// (0x0003f3c1) main_mup_pane_t6_ParamLimits

0x5ac1,	// (0x0003f3c1) main_mup_pane_t6

0x0005,

0xf459,	// (0x00048d59) main_mup_pane_t_ParamLimits

0xf459,	// (0x00048d59) main_mup_pane_t

0x5ad3,	// (0x0003f3d3) mup_progress_pane_ParamLimits

0x5ad3,	// (0x0003f3d3) mup_progress_pane

0x5adf,	// (0x0003f3df) mup_visualizer_pane_ParamLimits

0x5adf,	// (0x0003f3df) mup_visualizer_pane

0x5b07,	// (0x0003f407) mup_volume_pane_ParamLimits

0x5b07,	// (0x0003f407) mup_volume_pane

0x5b25,	// (0x0003f425) mup_visualizer_pane_g1_ParamLimits

0x5b25,	// (0x0003f425) mup_visualizer_pane_g1

0x5b25,	// (0x0003f425) mup_visualizer_pane_g2_ParamLimits

0x5b25,	// (0x0003f425) mup_visualizer_pane_g2

0x5641,	// (0x0003ef41) mup_visualizer_pane_g3_ParamLimits

0x5641,	// (0x0003ef41) mup_visualizer_pane_g3

0x0002,

0xf466,	// (0x00048d66) mup_visualizer_pane_g_ParamLimits

0xf466,	// (0x00048d66) mup_visualizer_pane_g

0x1765,	// (0x0003b065) mup_volume_pane_g1

0x5b3b,	// (0x0003f43b) mup_volume_pane_g2

0x0001,

0xf46d,	// (0x00048d6d) mup_volume_pane_g

0x1765,	// (0x0003b065) mup_progress_pane_g1

0x5b44,	// (0x0003f444) mup_progress_pane_g2

0x5b4d,	// (0x0003f44d) mup_progress_pane_g3

0x0002,

0xf472,	// (0x00048d72) mup_progress_pane_g

0x13e6,	// (0x0003ace6) bg_popup_window_pane_cp05

0x5b56,	// (0x0003f456) heading_pane_cp02_ParamLimits

0x5b56,	// (0x0003f456) heading_pane_cp02

0x5b70,	// (0x0003f470) list_popup_blid_pane

0x5b78,	// (0x0003f478) list_blid_sat_info_pane_ParamLimits

0x5b78,	// (0x0003f478) list_blid_sat_info_pane

0x5b8b,	// (0x0003f48b) list_blid_sat_info_pane_g1

0x5b93,	// (0x0003f493) list_blid_sat_info_pane_t1

0x5c73,	// (0x0003f573) mup_equalizer_pane_ParamLimits

0x5c73,	// (0x0003f573) mup_equalizer_pane

0x5c8c,	// (0x0003f58c) mup_equalizer_pane_cp1_ParamLimits

0x5c8c,	// (0x0003f58c) mup_equalizer_pane_cp1

0x5ca5,	// (0x0003f5a5) mup_equalizer_pane_cp2_ParamLimits

0x5ca5,	// (0x0003f5a5) mup_equalizer_pane_cp2

0x5cbe,	// (0x0003f5be) mup_equalizer_pane_cp3_ParamLimits

0x5cbe,	// (0x0003f5be) mup_equalizer_pane_cp3

0x5cd7,	// (0x0003f5d7) mup_equalizer_pane_cp4_ParamLimits

0x5cd7,	// (0x0003f5d7) mup_equalizer_pane_cp4

0x5cf0,	// (0x0003f5f0) mup_equalizer_pane_cp5

0x5d02,	// (0x0003f602) mup_equalizer_pane_cp6

0x5d14,	// (0x0003f614) mup_equalizer_pane_cp7

0xc3af,	// (0x00045caf) bg_popup_call_poc_act_pane_g9

0xc3b7,	// (0x00045cb7) bg_popup_call_poc_act_pane_g10

0xc3bf,	// (0x00045cbf) bg_popup_call_poc_act_pane_g11

0x000a,

0x1641,	// (0x0003af41) mup_scale_pane

0x1765,	// (0x0003b065) mup_scale_pane_g1

0x5d28,	// (0x0003f628) mup_scale_pane_g2

0x0006,

0xf48e,	// (0x00048d8e) mup_scale_pane_g

0x5d5e,	// (0x0003f65e) msg_data_pane

0x5d66,	// (0x0003f666) scroll_pane_cp017

0x2ba9,	// (0x0003c4a9) bg_list_pane_cp04_ParamLimits

0x2ba9,	// (0x0003c4a9) bg_list_pane_cp04

0x5d6e,	// (0x0003f66e) msg_data_pane_g1

0x53ad,	// (0x0003ecad) msg_data_pane_g2

0x53b5,	// (0x0003ecb5) msg_data_pane_g3

0x5d76,	// (0x0003f676) msg_data_pane_g4

0x53c5,	// (0x0003ecc5) msg_data_pane_g5

0x5914,	// (0x0003f214) msg_data_pane_g6

0x5d7e,	// (0x0003f67e) msg_data_pane_g7

0x0006,

0xf49d,	// (0x00048d9d) msg_data_pane_g

0x2bc9,	// (0x0003c4c9) msg_text_pane_ParamLimits

0x2bc9,	// (0x0003c4c9) msg_text_pane

0x5d86,	// (0x0003f686) qrid_highlight_pane_cp011_ParamLimits

0x5d86,	// (0x0003f686) qrid_highlight_pane_cp011

0x13e6,	// (0x0003ace6) msg_body_pane

0x13e6,	// (0x0003ace6) msg_header_pane

0x5da5,	// (0x0003f6a5) input_focus_pane_cp07

0x2bfa,	// (0x0003c4fa) msg_header_pane_t1_ParamLimits

0x2bfa,	// (0x0003c4fa) msg_header_pane_t1

0xb46b,	// (0x00044d6b) msg_header_pane_t2_ParamLimits

0xb46b,	// (0x00044d6b) msg_header_pane_t2

0x0001,

0xf4b1,	// (0x00048db1) msg_header_pane_t_ParamLimits

0xf4b1,	// (0x00048db1) msg_header_pane_t

0x5dba,	// (0x0003f6ba) msg_body_pane_g1

0x2c0c,	// (0x0003c50c) msg_body_pane_t1_ParamLimits

0x2c0c,	// (0x0003c50c) msg_body_pane_t1

0xb47d,	// (0x00044d7d) msg_body_pane_t2_ParamLimits

0xb47d,	// (0x00044d7d) msg_body_pane_t2

0xb48f,	// (0x00044d8f) msg_body_pane_t3_ParamLimits

0xb48f,	// (0x00044d8f) msg_body_pane_t3

0x0002,

0xf4b6,	// (0x00048db6) msg_body_pane_t_ParamLimits

0xf4b6,	// (0x00048db6) msg_body_pane_t

0x5df8,	// (0x0003f6f8) main_viewer_pane_g1_ParamLimits

0x5df8,	// (0x0003f6f8) main_viewer_pane_g1

0x5e04,	// (0x0003f704) main_viewer_pane_g2_ParamLimits

0x5e04,	// (0x0003f704) main_viewer_pane_g2

0x5e10,	// (0x0003f710) main_viewer_pane_g3_ParamLimits

0x5e10,	// (0x0003f710) main_viewer_pane_g3

0x5e1f,	// (0x0003f71f) main_viewer_pane_g4_ParamLimits

0x5e1f,	// (0x0003f71f) main_viewer_pane_g4

0xec1e,	// (0x0004851e) main_viewer_pane_g5_ParamLimits

0xec1e,	// (0x0004851e) main_viewer_pane_g5

0xec1e,	// (0x0004851e) main_viewer_pane_g7_ParamLimits

0xec1e,	// (0x0004851e) main_viewer_pane_g7

0xec30,	// (0x00048530) main_viewer_pane_g8_ParamLimits

0xec30,	// (0x00048530) main_viewer_pane_g8

0x0007,

0xf4c6,	// (0x00048dc6) main_viewer_pane_g_ParamLimits

0xf4c6,	// (0x00048dc6) main_viewer_pane_g

0x5e2e,	// (0x0003f72e) viewer_content_pane_ParamLimits

0x5e2e,	// (0x0003f72e) viewer_content_pane

0x5e61,	// (0x0003f761) main_postcard_pane_g1_ParamLimits

0x5e61,	// (0x0003f761) main_postcard_pane_g1

0x5e75,	// (0x0003f775) main_postcard_pane_g2_ParamLimits

0x5e75,	// (0x0003f775) main_postcard_pane_g2

0x5e89,	// (0x0003f789) main_postcard_pane_g3_ParamLimits

0x5e89,	// (0x0003f789) main_postcard_pane_g3

0x0005,

0xf4d7,	// (0x00048dd7) main_postcard_pane_g_ParamLimits

0xf4d7,	// (0x00048dd7) main_postcard_pane_g

0x5e9c,	// (0x0003f79c) main_postcard_pane_g4

0xc600,	// (0x00045f00) smil_status_volume_pane_g2

0x5ed7,	// (0x0003f7d7) postcard_pane_ParamLimits

0x5ed7,	// (0x0003f7d7) postcard_pane

0x5f17,	// (0x0003f817) postcard_pane_g1_ParamLimits

0x5f17,	// (0x0003f817) postcard_pane_g1

0x5f25,	// (0x0003f825) postcard_pane_g2_ParamLimits

0x5f25,	// (0x0003f825) postcard_pane_g2

0x5f31,	// (0x0003f831) postcard_pane_g3_ParamLimits

0x5f31,	// (0x0003f831) postcard_pane_g3

0x5f3d,	// (0x0003f83d) postcard_pane_g4_ParamLimits

0x5f3d,	// (0x0003f83d) postcard_pane_g4

0x5f4b,	// (0x0003f84b) postcard_pane_g5_ParamLimits

0x5f4b,	// (0x0003f84b) postcard_pane_g5

0x5f60,	// (0x0003f860) postcard_pane_g6_ParamLimits

0x5f60,	// (0x0003f860) postcard_pane_g6

0x5f17,	// (0x0003f817) postcard_pane_g7_ParamLimits

0x5f17,	// (0x0003f817) postcard_pane_g7

0x0006,

0xf4e4,	// (0x00048de4) postcard_pane_g_ParamLimits

0xf4e4,	// (0x00048de4) postcard_pane_g

0x5f74,	// (0x0003f874) main_mp2_pane_g1_ParamLimits

0x5f74,	// (0x0003f874) main_mp2_pane_g1

0x5f80,	// (0x0003f880) main_mp2_pane_g2_ParamLimits

0x5f80,	// (0x0003f880) main_mp2_pane_g2

0x5f8c,	// (0x0003f88c) main_mp2_pane_g3_ParamLimits

0x5f8c,	// (0x0003f88c) main_mp2_pane_g3

0x0002,

0xf4f3,	// (0x00048df3) main_mp2_pane_g_ParamLimits

0xf4f3,	// (0x00048df3) main_mp2_pane_g

0x5f98,	// (0x0003f898) main_mp2_pane_t1_ParamLimits

0x5f98,	// (0x0003f898) main_mp2_pane_t1

0x5fad,	// (0x0003f8ad) main_mp2_pane_t2_ParamLimits

0x5fad,	// (0x0003f8ad) main_mp2_pane_t2

0x5fbf,	// (0x0003f8bf) main_mp2_pane_t3_ParamLimits

0x5fbf,	// (0x0003f8bf) main_mp2_pane_t3

0x0002,

0xf4fa,	// (0x00048dfa) main_mp2_pane_t_ParamLimits

0xf4fa,	// (0x00048dfa) main_mp2_pane_t

0x5fd1,	// (0x0003f8d1) pec_content_pane_ParamLimits

0x5fd1,	// (0x0003f8d1) pec_content_pane

0x1a7c,	// (0x0003b37c) scroll_pane_cp015

0x5fe3,	// (0x0003f8e3) pec_attribute_pane_ParamLimits

0x5fe3,	// (0x0003f8e3) pec_attribute_pane

0x5ff3,	// (0x0003f8f3) pec_content_pane_g1_ParamLimits

0x5ff3,	// (0x0003f8f3) pec_content_pane_g1

0x5fff,	// (0x0003f8ff) pec_content_pane_t1_ParamLimits

0x5fff,	// (0x0003f8ff) pec_content_pane_t1

0x6011,	// (0x0003f911) pec_content_pane_t2_ParamLimits

0x6011,	// (0x0003f911) pec_content_pane_t2

0x0001,

0xf501,	// (0x00048e01) pec_content_pane_t_ParamLimits

0xf501,	// (0x00048e01) pec_content_pane_t

0x6023,	// (0x0003f923) list_single_graphic_pane_cp01_ParamLimits

0x6023,	// (0x0003f923) list_single_graphic_pane_cp01

0x1641,	// (0x0003af41) bg_popup_sub_pane_cp04

0x6038,	// (0x0003f938) popup_mup_playback_window_g1

0x6044,	// (0x0003f944) popup_mup_playback_window_t1

0x6059,	// (0x0003f959) popup_mup_playback_window_t2

0x0001,

0xf506,	// (0x00048e06) popup_mup_playback_window_t

0x60ae,	// (0x0003f9ae) main_image_pane_g1_ParamLimits

0x60ae,	// (0x0003f9ae) main_image_pane_g1

0x6189,	// (0x0003fa89) scroll_pane_cp018_ParamLimits

0x6189,	// (0x0003fa89) scroll_pane_cp018

0x61a1,	// (0x0003faa1) scroll_pane_cp016_ParamLimits

0x61a1,	// (0x0003faa1) scroll_pane_cp016

0x61d5,	// (0x0003fad5) smil2_image_pane_ParamLimits

0x61d5,	// (0x0003fad5) smil2_image_pane

0x61fd,	// (0x0003fafd) smil2_root_pane_ParamLimits

0x61fd,	// (0x0003fafd) smil2_root_pane

0x6235,	// (0x0003fb35) smil2_text_pane_ParamLimits

0x6235,	// (0x0003fb35) smil2_text_pane

0x13e6,	// (0x0003ace6) bg_list_pane_cp06

0x62a9,	// (0x0003fba9) grid_radio_pane

0x13e6,	// (0x0003ace6) bg_popup_window_pane_cp06

0x62b1,	// (0x0003fbb1) main_fmradio_pane_t1

0x52ac,	// (0x0003ebac) heading_pane_cp04

0x62bf,	// (0x0003fbbf) main_fmradio_pane_t2

0xc407,	// (0x00045d07) popup_cale_lunar_info_window_g1

0x62cd,	// (0x0003fbcd) main_fmradio_pane_t3

0xc40f,	// (0x00045d0f) popup_cale_lunar_info_window_g2

0x62db,	// (0x0003fbdb) main_fmradio_pane_t4

0x0001,

0x62e9,	// (0x0003fbe9) main_fmradio_pane_t5

0x0004,

0xf5f4,	// (0x00048ef4) popup_cale_lunar_info_window_g

0xf51b,	// (0x00048e1b) main_fmradio_pane_t

0x62f7,	// (0x0003fbf7) wait_bar_pane_cp03

0x62ff,	// (0x0003fbff) cell_fmradio_pane_ParamLimits

0x62ff,	// (0x0003fbff) cell_fmradio_pane

0x5f17,	// (0x0003f817) cell_fmradio_pane_g1_ParamLimits

0x5f17,	// (0x0003f817) cell_fmradio_pane_g1

0x13e6,	// (0x0003ace6) grid_highlight_pane_cp011

0x6312,	// (0x0003fc12) poc_content_pane_ParamLimits

0x6312,	// (0x0003fc12) poc_content_pane

0x6325,	// (0x0003fc25) scroll_pane_cp019

0x632d,	// (0x0003fc2d) popup_call_poc_act_window_ParamLimits

0x632d,	// (0x0003fc2d) popup_call_poc_act_window

0x634d,	// (0x0003fc4d) popup_call_poc_inact_window_ParamLimits

0x634d,	// (0x0003fc4d) popup_call_poc_inact_window

0xf5b8,	// (0x00048eb8) bg_popup_call_poc_act_pane_g

0xc3c7,	// (0x00045cc7) bg_popup_call_poc_inact_pane_g1

0xc3cf,	// (0x00045ccf) bg_popup_call_poc_inact_pane_g2

0x6362,	// (0x0003fc62) popup_call_poc_act_window_g2

0xc3d7,	// (0x00045cd7) bg_popup_call_poc_inact_pane_g3

0xc357,	// (0x00045c57) bg_popup_call_poc_inact_pane_g4

0xc3df,	// (0x00045cdf) bg_popup_call_poc_inact_pane_g5

0x636a,	// (0x0003fc6a) popup_call_poc_act_window_t1_ParamLimits

0x636a,	// (0x0003fc6a) popup_call_poc_act_window_t1

0xb4a1,	// (0x00044da1) popup_call_poc_act_window_t2_ParamLimits

0xb4a1,	// (0x00044da1) popup_call_poc_act_window_t2

0xb4c9,	// (0x00044dc9) popup_call_poc_act_window_t3_ParamLimits

0xb4c9,	// (0x00044dc9) popup_call_poc_act_window_t3

0xb4f1,	// (0x00044df1) popup_call_poc_act_window_t4_ParamLimits

0xb4f1,	// (0x00044df1) popup_call_poc_act_window_t4

0x0003,

0xf526,	// (0x00048e26) popup_call_poc_act_window_t_ParamLimits

0xf526,	// (0x00048e26) popup_call_poc_act_window_t

0xc3e7,	// (0x00045ce7) bg_popup_call_poc_inact_pane_g6

0xc3ef,	// (0x00045cef) bg_popup_call_poc_inact_pane_g7

0xc3f7,	// (0x00045cf7) bg_popup_call_poc_inact_pane_g8

0xb503,	// (0x00044e03) popup_call_poc_inact_window_g2

0xc3ff,	// (0x00045cff) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5cf,	// (0x00048ecf) bg_popup_call_poc_inact_pane_g

0xb50b,	// (0x00044e0b) popup_call_poc_inact_window_t1_ParamLimits

0xb50b,	// (0x00044e0b) popup_call_poc_inact_window_t1

0xb520,	// (0x00044e20) popup_call_poc_inact_window_t2_ParamLimits

0xb520,	// (0x00044e20) popup_call_poc_inact_window_t2

0xb535,	// (0x00044e35) popup_call_poc_inact_window_t3_ParamLimits

0xb535,	// (0x00044e35) popup_call_poc_inact_window_t3

0x0002,

0xf52f,	// (0x00048e2f) popup_call_poc_inact_window_t_ParamLimits

0xf52f,	// (0x00048e2f) popup_call_poc_inact_window_t

0xc573,	// (0x00045e73) context_pane_ParamLimits

0x6a8f,	// (0x0004038f) signal_pane_ParamLimits

0x5855,	// (0x0003f155) main_call2_pane

0xc561,	// (0x00045e61) popup_phob_thumbnail2_window_ParamLimits

0xc561,	// (0x00045e61) popup_phob_thumbnail2_window

0xec06,	// (0x00048506) aid_hotspot_pointer_arrow_pane

0xec0e,	// (0x0004850e) aid_hotspot_pointer_hand_pane

0x6652,	// (0x0003ff52) phob_pre_status_pane_g5

0x3f96,	// (0x0003d896) cams_zoom_pane_ParamLimits

0x3fa5,	// (0x0003d8a5) image_vga_pane_ParamLimits

0x3fbd,	// (0x0003d8bd) main_camera_pane_g1_ParamLimits

0x3fcd,	// (0x0003d8cd) main_camera_pane_g2_ParamLimits

0x3fdd,	// (0x0003d8dd) main_camera_pane_g3_ParamLimits

0x3fed,	// (0x0003d8ed) main_camera_pane_g4_ParamLimits

0x3ffd,	// (0x0003d8fd) main_camera_pane_g5_ParamLimits

0x400d,	// (0x0003d90d) main_camera_pane_g6_ParamLimits

0x401d,	// (0x0003d91d) main_camera_pane_g7_ParamLimits

0xf22e,	// (0x00048b2e) main_camera_pane_g_ParamLimits

0x402d,	// (0x0003d92d) main_camera_pane_t1_ParamLimits

0x4043,	// (0x0003d943) main_camera_pane_t2_ParamLimits

0xf23f,	// (0x00048b3f) main_camera_pane_t_ParamLimits

0x1641,	// (0x0003af41) bg_popup_preview_window_pane_cp01_ParamLimits

0x1641,	// (0x0003af41) bg_popup_preview_window_pane_cp01

0xb54a,	// (0x00044e4a) popup_phob_thumbnail2_window_g1_ParamLimits

0xb54a,	// (0x00044e4a) popup_phob_thumbnail2_window_g1

0x13e6,	// (0x0003ace6) call2_cli_visual_pane

0x63a9,	// (0x0003fca9) popup_call2_audio_conf_window_ParamLimits

0x63a9,	// (0x0003fca9) popup_call2_audio_conf_window

0x63c7,	// (0x0003fcc7) popup_call2_audio_first_window_ParamLimits

0x63c7,	// (0x0003fcc7) popup_call2_audio_first_window

0x643d,	// (0x0003fd3d) popup_call2_audio_in_window_ParamLimits

0x643d,	// (0x0003fd3d) popup_call2_audio_in_window

0x6471,	// (0x0003fd71) popup_call2_audio_out_window_ParamLimits

0x6471,	// (0x0003fd71) popup_call2_audio_out_window

0x64c3,	// (0x0003fdc3) popup_call2_audio_second_window_ParamLimits

0x64c3,	// (0x0003fdc3) popup_call2_audio_second_window

0x6515,	// (0x0003fe15) popup_call2_audio_wait_window_ParamLimits

0x6515,	// (0x0003fe15) popup_call2_audio_wait_window

0x13e6,	// (0x0003ace6) bg_popup_call2_act_pane_cp03

0x1623,	// (0x0003af23) list_conf_pane_cp

0xb556,	// (0x00044e56) popup_call2_audio_conf_window_t1

0x532b,	// (0x0003ec2b) list_single_graphic_popup_conf2_pane_ParamLimits

0x532b,	// (0x0003ec2b) list_single_graphic_popup_conf2_pane

0x533e,	// (0x0003ec3e) list_highlight_pane_cp04

0xb564,	// (0x00044e64) list_single_graphic_popup_conf2_pane_g1

0x534f,	// (0x0003ec4f) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf536,	// (0x00048e36) list_single_graphic_popup_conf2_pane_g

0xb56c,	// (0x00044e6c) list_single_graphic_popup_conf2_pane_t1

0xb57a,	// (0x00044e7a) bg_popup_call2_act_pane_cp01_ParamLimits

0xb57a,	// (0x00044e7a) bg_popup_call2_act_pane_cp01

0xb604,	// (0x00044f04) call_type_pane_cp05_ParamLimits

0xb604,	// (0x00044f04) call_type_pane_cp05

0xb658,	// (0x00044f58) popup_call2_audio_second_window_g1_ParamLimits

0xb658,	// (0x00044f58) popup_call2_audio_second_window_g1

0xb6ac,	// (0x00044fac) popup_call2_audio_second_window_g2_ParamLimits

0xb6ac,	// (0x00044fac) popup_call2_audio_second_window_g2

0x0002,

0xf53b,	// (0x00048e3b) popup_call2_audio_second_window_g_ParamLimits

0xf53b,	// (0x00048e3b) popup_call2_audio_second_window_g

0xb711,	// (0x00045011) popup_call2_audio_second_window_t1_ParamLimits

0xb711,	// (0x00045011) popup_call2_audio_second_window_t1

0xb7cc,	// (0x000450cc) popup_call2_audio_second_window_t2_ParamLimits

0xb7cc,	// (0x000450cc) popup_call2_audio_second_window_t2

0xb81f,	// (0x0004511f) popup_call2_audio_second_window_t3_ParamLimits

0xb81f,	// (0x0004511f) popup_call2_audio_second_window_t3

0x0003,

0xf542,	// (0x00048e42) popup_call2_audio_second_window_t_ParamLimits

0xf542,	// (0x00048e42) popup_call2_audio_second_window_t

0x13e6,	// (0x0003ace6) bg_popup_call2_in_pane_cp02

0x13f0,	// (0x0003acf0) call_type_pane_cp04

0x13f8,	// (0x0003acf8) popup_call2_audio_wait_window_g1

0x1400,	// (0x0003ad00) popup_call2_audio_wait_window_g2

0x0001,

0xf11b,	// (0x00048a1b) popup_call2_audio_wait_window_g

0x1408,	// (0x0003ad08) popup_call2_audio_wait_window_t3

0xb912,	// (0x00045212) bg_popup_call2_act_pane_ParamLimits

0xb912,	// (0x00045212) bg_popup_call2_act_pane

0xb9d2,	// (0x000452d2) call_type_pane_cp03_ParamLimits

0xb9d2,	// (0x000452d2) call_type_pane_cp03

0xba36,	// (0x00045336) popup_call2_audio_first_window_g1_ParamLimits

0xba36,	// (0x00045336) popup_call2_audio_first_window_g1

0xbaa6,	// (0x000453a6) popup_call2_audio_first_window_g2_ParamLimits

0xbaa6,	// (0x000453a6) popup_call2_audio_first_window_g2

0x5b25,	// (0x0003f425) popup_call2_audio_first_window_g3_ParamLimits

0x5b25,	// (0x0003f425) popup_call2_audio_first_window_g3

0x0004,

0xf54b,	// (0x00048e4b) popup_call2_audio_first_window_g_ParamLimits

0xf54b,	// (0x00048e4b) popup_call2_audio_first_window_g

0xbb84,	// (0x00045484) popup_call2_audio_first_window_t1_ParamLimits

0xbb84,	// (0x00045484) popup_call2_audio_first_window_t1

0xbc87,	// (0x00045587) popup_call2_audio_first_window_t4_ParamLimits

0xbc87,	// (0x00045587) popup_call2_audio_first_window_t4

0xbd6a,	// (0x0004566a) popup_call2_audio_first_window_t5_ParamLimits

0xbd6a,	// (0x0004566a) popup_call2_audio_first_window_t5

0x0003,

0xf556,	// (0x00048e56) popup_call2_audio_first_window_t_ParamLimits

0xf556,	// (0x00048e56) popup_call2_audio_first_window_t

0x1639,	// (0x0003af39) bg_popup_call2_act_pane_g1

0xc417,	// (0x00045d17) popup_cale_lunar_info_window_t1

0xc425,	// (0x00045d25) popup_cale_lunar_info_window_t2

0xc433,	// (0x00045d33) popup_cale_lunar_info_window_t3

0x13e6,	// (0x0003ace6) bg_popup_call2_bubble_pane

0xbe6b,	// (0x0004576b) bg_popup_call2_in_pane_cp01_ParamLimits

0xbe6b,	// (0x0004576b) bg_popup_call2_in_pane_cp01

0x10c2,	// (0x0003a9c2) call_type_pane_cp02

0xbeb3,	// (0x000457b3) popup_call2_audio_out_window_g1_ParamLimits

0xbeb3,	// (0x000457b3) popup_call2_audio_out_window_g1

0xbedf,	// (0x000457df) popup_call2_audio_out_window_g2_ParamLimits

0xbedf,	// (0x000457df) popup_call2_audio_out_window_g2

0xbf07,	// (0x00045807) popup_call2_audio_out_window_g3_ParamLimits

0xbf07,	// (0x00045807) popup_call2_audio_out_window_g3

0x0003,

0xf55f,	// (0x00048e5f) popup_call2_audio_out_window_g_ParamLimits

0xf55f,	// (0x00048e5f) popup_call2_audio_out_window_g

0xbf42,	// (0x00045842) popup_call2_audio_out_window_t1_ParamLimits

0xbf42,	// (0x00045842) popup_call2_audio_out_window_t1

0xbfa1,	// (0x000458a1) popup_call2_audio_out_window_t2_ParamLimits

0xbfa1,	// (0x000458a1) popup_call2_audio_out_window_t2

0xbff5,	// (0x000458f5) popup_call2_audio_out_window_t3_ParamLimits

0xbff5,	// (0x000458f5) popup_call2_audio_out_window_t3

0xc00b,	// (0x0004590b) popup_call2_audio_out_window_t4_ParamLimits

0xc00b,	// (0x0004590b) popup_call2_audio_out_window_t4

0xc021,	// (0x00045921) popup_call2_audio_out_window_t5_ParamLimits

0xc021,	// (0x00045921) popup_call2_audio_out_window_t5

0x0005,

0xf568,	// (0x00048e68) popup_call2_audio_out_window_t_ParamLimits

0xf568,	// (0x00048e68) popup_call2_audio_out_window_t

0xc085,	// (0x00045985) bg_popup_call2_in_pane_ParamLimits

0xc085,	// (0x00045985) bg_popup_call2_in_pane

0xc0e1,	// (0x000459e1) popup_call2_audio_in_window_g1_ParamLimits

0xc0e1,	// (0x000459e1) popup_call2_audio_in_window_g1

0xc119,	// (0x00045a19) popup_call2_audio_in_window_g2_ParamLimits

0xc119,	// (0x00045a19) popup_call2_audio_in_window_g2

0xc151,	// (0x00045a51) popup_call2_audio_in_window_g3_ParamLimits

0xc151,	// (0x00045a51) popup_call2_audio_in_window_g3

0x0003,

0xf575,	// (0x00048e75) popup_call2_audio_in_window_g_ParamLimits

0xf575,	// (0x00048e75) popup_call2_audio_in_window_g

0xc1a9,	// (0x00045aa9) popup_call2_audio_in_window_t1_ParamLimits

0xc1a9,	// (0x00045aa9) popup_call2_audio_in_window_t1

0xc229,	// (0x00045b29) popup_call2_audio_in_window_t2_ParamLimits

0xc229,	// (0x00045b29) popup_call2_audio_in_window_t2

0xc2a9,	// (0x00045ba9) popup_call2_audio_in_window_t3_ParamLimits

0xc2a9,	// (0x00045ba9) popup_call2_audio_in_window_t3

0xc2c3,	// (0x00045bc3) popup_call2_audio_in_window_t4_ParamLimits

0xc2c3,	// (0x00045bc3) popup_call2_audio_in_window_t4

0xc2d5,	// (0x00045bd5) popup_call2_audio_in_window_t5_ParamLimits

0xc2d5,	// (0x00045bd5) popup_call2_audio_in_window_t5

0xc2ea,	// (0x00045bea) popup_call2_audio_in_window_t6_ParamLimits

0xc2ea,	// (0x00045bea) popup_call2_audio_in_window_t6

0x0005,

0xf57e,	// (0x00048e7e) popup_call2_audio_in_window_t_ParamLimits

0xf57e,	// (0x00048e7e) popup_call2_audio_in_window_t

0x1639,	// (0x0003af39) bg_popup_call2_in_pane_g1

0xc441,	// (0x00045d41) popup_cale_lunar_info_window_t4

0x0003,

0xf5f9,	// (0x00048ef9) popup_cale_lunar_info_window_t

0x1641,	// (0x0003af41) bg_popup_call2_rect_pane_ParamLimits

0x1641,	// (0x0003af41) bg_popup_call2_rect_pane

0x13e6,	// (0x0003ace6) call2_cli_visual_graphic_pane

0x13e6,	// (0x0003ace6) call2_cli_visual_text_pane

0xec48,	// (0x00048548) smil_status_volume_pane_g3

0x0002,

0x1765,	// (0x0003b065) call2_cli_visual_graphic_pane_g1

0x1765,	// (0x0003b065) call2_cli_visual_graphic_pane_g2

0x1765,	// (0x0003b065) call2_cli_visual_graphic_pane_g3

0x0002,

0xf58b,	// (0x00048e8b) call2_cli_visual_graphic_pane_g

0xc2ff,	// (0x00045bff) bg_popup_call2_rect_pane_g1

0x1803,	// (0x0003b103) bg_popup_call2_rect_pane_g2

0xc307,	// (0x00045c07) bg_popup_call2_rect_pane_g3

0xc30f,	// (0x00045c0f) bg_popup_call2_rect_pane_g4

0xc317,	// (0x00045c17) bg_popup_call2_rect_pane_g5

0xc31f,	// (0x00045c1f) bg_popup_call2_rect_pane_g6

0xc327,	// (0x00045c27) bg_popup_call2_rect_pane_g7

0xc32f,	// (0x00045c2f) bg_popup_call2_rect_pane_g8

0xc337,	// (0x00045c37) bg_popup_call2_rect_pane_g9

0x0008,

0xf592,	// (0x00048e92) bg_popup_call2_rect_pane_g

0xc33f,	// (0x00045c3f) bg_popup_call2_bubble_pane_g1

0xc347,	// (0x00045c47) bg_popup_call2_bubble_pane_g2

0xc34f,	// (0x00045c4f) bg_popup_call2_bubble_pane_g3

0xc357,	// (0x00045c57) bg_popup_call2_bubble_pane_g4

0xc35f,	// (0x00045c5f) bg_popup_call2_bubble_pane_g5

0xc367,	// (0x00045c67) bg_popup_call2_bubble_pane_g6

0xc36f,	// (0x00045c6f) bg_popup_call2_bubble_pane_g7

0xc377,	// (0x00045c77) bg_popup_call2_bubble_pane_g8

0xc37f,	// (0x00045c7f) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5a5,	// (0x00048ea5) bg_popup_call2_bubble_pane_g

0x3ab9,	// (0x0003d3b9) aid_cale_week_size_cell_pane

0x4059,	// (0x0003d959) aid_cams_cif_uncrop_pane_ParamLimits

0x4059,	// (0x0003d959) aid_cams_cif_uncrop_pane

0x41fa,	// (0x0003dafa) aid_cams_size_cell_ParamLimits

0x41fa,	// (0x0003dafa) aid_cams_size_cell

0x420e,	// (0x0003db0e) grid_cams_pane_ParamLimits

0x4223,	// (0x0003db23) linegrid_cams_pane_ParamLimits

0x42ed,	// (0x0003dbed) call_video_pane_t1

0x4307,	// (0x0003dc07) call_video_pane_t2

0x0001,

0xf292,	// (0x00048b92) call_video_pane_t

0x468c,	// (0x0003df8c) aid_cale_month_size_cell_pane_ParamLimits

0x468c,	// (0x0003df8c) aid_cale_month_size_cell_pane

0xf642,	// (0x00048f42) smil_status_volume_pane_g

0xec55,	// (0x00048555) volume_smil_pane_ParamLimits

0x0f9c,	// (0x0003a89c) aid_popup2_width_pane

0x3a2d,	// (0x0003d32d) cell_qdial_pane_g4_ParamLimits

0x3a2d,	// (0x0003d32d) cell_qdial_pane_g4

0x5621,	// (0x0003ef21) aid_blid_cardinal_pane_ParamLimits

0x562d,	// (0x0003ef2d) aid_blid_destination_pane_ParamLimits

0x562d,	// (0x0003ef2d) aid_blid_destination_pane

0x1641,	// (0x0003af41) bg_popup_call_poc_act_pane_ParamLimits

0x1641,	// (0x0003af41) bg_popup_call_poc_act_pane

0x1641,	// (0x0003af41) bg_popup_call_poc_inact_pane_ParamLimits

0x1641,	// (0x0003af41) bg_popup_call_poc_inact_pane

0xc387,	// (0x00045c87) bg_popup_call_poc_act_pane_g1

0xc38f,	// (0x00045c8f) bg_popup_call_poc_act_pane_g2

0xc397,	// (0x00045c97) bg_popup_call_poc_act_pane_g3

0xc357,	// (0x00045c57) bg_popup_call_poc_act_pane_g4

0xc35f,	// (0x00045c5f) bg_popup_call_poc_act_pane_g5

0xc39f,	// (0x00045c9f) bg_popup_call_poc_act_pane_g6

0xc36f,	// (0x00045c6f) bg_popup_call_poc_act_pane_g7

0xc3a7,	// (0x00045ca7) bg_popup_call_poc_act_pane_g8

0x13e6,	// (0x0003ace6) main_usb_pane

0xc540,	// (0x00045e40) popup_cale_lunar_info_window

0x454c,	// (0x0003de4c) im_reading_pane_t1_ParamLimits

0x19c5,	// (0x0003b2c5) list_im_pane_ParamLimits

0x19d6,	// (0x0003b2d6) scroll_pane_cp07_ParamLimits

0x13e6,	// (0x0003ace6) grid_highlight_pane_cp012

0x1641,	// (0x0003af41) mup_scale_pane_ParamLimits

0x5f17,	// (0x0003f817) main_usb_pane_g1_ParamLimits

0x5f17,	// (0x0003f817) main_usb_pane_g1

0x656f,	// (0x0003fe6f) main_usb_pane_g2_ParamLimits

0x656f,	// (0x0003fe6f) main_usb_pane_g2

0x0001,

0xf5e2,	// (0x00048ee2) main_usb_pane_g_ParamLimits

0xf5e2,	// (0x00048ee2) main_usb_pane_g

0x6583,	// (0x0003fe83) main_usb_pane_t1_ParamLimits

0x6583,	// (0x0003fe83) main_usb_pane_t1

0x6595,	// (0x0003fe95) main_usb_pane_t2_ParamLimits

0x6595,	// (0x0003fe95) main_usb_pane_t2

0x65a7,	// (0x0003fea7) main_usb_pane_t3_ParamLimits

0x65a7,	// (0x0003fea7) main_usb_pane_t3

0x65b9,	// (0x0003feb9) main_usb_pane_t4_ParamLimits

0x65b9,	// (0x0003feb9) main_usb_pane_t4

0x65cb,	// (0x0003fecb) main_usb_pane_t5_ParamLimits

0x65cb,	// (0x0003fecb) main_usb_pane_t5

0x65dd,	// (0x0003fedd) main_usb_pane_t6_ParamLimits

0x65dd,	// (0x0003fedd) main_usb_pane_t6

0x0005,

0xf5e7,	// (0x00048ee7) main_usb_pane_t_ParamLimits

0x55bb,	// (0x0003eebb) aid_text_placing

0x55cd,	// (0x0003eecd) main_location2_pane_t1_ParamLimits

0x55e3,	// (0x0003eee3) main_location2_pane_t2_ParamLimits

0x55f9,	// (0x0003eef9) main_location2_pane_t3_ParamLimits

0x560f,	// (0x0003ef0f) main_location2_pane_t4_ParamLimits

0x560f,	// (0x0003ef0f) main_location2_pane_t4

0xf3f3,	// (0x00048cf3) main_location2_pane_t_ParamLimits

0x167d,	// (0x0003af7d) find_pinb_pane_g2_ParamLimits

0x167d,	// (0x0003af7d) find_pinb_pane_g2

0x0001,

0xf141,	// (0x00048a41) find_pinb_pane_g_ParamLimits

0xf141,	// (0x00048a41) find_pinb_pane_g

0x1689,	// (0x0003af89) find_pinb_pane_t1_ParamLimits

0x169b,	// (0x0003af9b) find_pinb_pane_t2_ParamLimits

0xf146,	// (0x00048a46) find_pinb_pane_t_ParamLimits

0x13e6,	// (0x0003ace6) main_call3_pane

0x49c8,	// (0x0003e2c8) cale_month_day_heading_pane_t1_ParamLimits

0x4a26,	// (0x0003e326) cale_month_day_heading_pane_t2_ParamLimits

0x4a8b,	// (0x0003e38b) cale_month_day_heading_pane_t3_ParamLimits

0x4af0,	// (0x0003e3f0) cale_month_day_heading_pane_t4_ParamLimits

0x4b55,	// (0x0003e455) cale_month_day_heading_pane_t5_ParamLimits

0x4bba,	// (0x0003e4ba) cale_month_day_heading_pane_t6_ParamLimits

0x4c1f,	// (0x0003e51f) cale_month_day_heading_pane_t7_ParamLimits

0xf2ca,	// (0x00048bca) cale_month_day_heading_pane_t_ParamLimits

0x1c26,	// (0x0003b526) smil_status_volume_pane

0x5ef3,	// (0x0003f7f3) postcard_address_pane_ParamLimits

0x5ef3,	// (0x0003f7f3) postcard_address_pane

0x5f05,	// (0x0003f805) postcard_message_pane_ParamLimits

0x5f05,	// (0x0003f805) postcard_message_pane

0x654d,	// (0x0003fe4d) call2_cli_visual_pane_t1_ParamLimits

0x654d,	// (0x0003fe4d) call2_cli_visual_pane_t1

0x6cab,	// (0x000405ab) postcard_message_pane_t1_ParamLimits

0x6cab,	// (0x000405ab) postcard_message_pane_t1

0x6c94,	// (0x00040594) postcard_address_pane_t1_ParamLimits

0x6c94,	// (0x00040594) postcard_address_pane_t1

0x6c82,	// (0x00040582) popup_call3_audio_in_window_ParamLimits

0x6c82,	// (0x00040582) popup_call3_audio_in_window

0x6b11,	// (0x00040411) bg_popup_call3_in_pane_ParamLimits

0x6b11,	// (0x00040411) bg_popup_call3_in_pane

0x6b83,	// (0x00040483) popup_call3_audio_in_window_g1_ParamLimits

0x6b83,	// (0x00040483) popup_call3_audio_in_window_g1

0x6ba3,	// (0x000404a3) popup_call3_audio_in_window_g2_ParamLimits

0x6ba3,	// (0x000404a3) popup_call3_audio_in_window_g2

0x6bc3,	// (0x000404c3) popup_call3_audio_in_window_g3_ParamLimits

0x6bc3,	// (0x000404c3) popup_call3_audio_in_window_g3

0x0003,

0xf649,	// (0x00048f49) popup_call3_audio_in_window_g_ParamLimits

0xf649,	// (0x00048f49) popup_call3_audio_in_window_g

0x6bf4,	// (0x000404f4) popup_call3_audio_in_window_t1_ParamLimits

0x6bf4,	// (0x000404f4) popup_call3_audio_in_window_t1

0x6c32,	// (0x00040532) popup_call3_audio_in_window_t2_ParamLimits

0x6c32,	// (0x00040532) popup_call3_audio_in_window_t2

0x6c70,	// (0x00040570) popup_call3_audio_in_window_t3_ParamLimits

0x6c70,	// (0x00040570) popup_call3_audio_in_window_t3

0x0002,

0xf652,	// (0x00048f52) popup_call3_audio_in_window_t_ParamLimits

0xf652,	// (0x00048f52) popup_call3_audio_in_window_t

0x5855,	// (0x0003f155) bg_popup_call3_rect_pane

0xc2ff,	// (0x00045bff) bg_popup_call3_rect_pane_g1

0x1803,	// (0x0003b103) bg_popup_call3_rect_pane_g2

0xc307,	// (0x00045c07) bg_popup_call3_rect_pane_g3

0xc30f,	// (0x00045c0f) bg_popup_call3_rect_pane_g4

0xc317,	// (0x00045c17) bg_popup_call3_rect_pane_g5

0xc31f,	// (0x00045c1f) bg_popup_call3_rect_pane_g6

0xc327,	// (0x00045c27) bg_popup_call3_rect_pane_g7

0x5b1d,	// (0x0003f41d) mup_visualizer_osc_pane

0x5b33,	// (0x0003f433) mup_visualizer_spec_pane

0x6b41,	// (0x00040441) call3_video_qcif_pane_ParamLimits

0x6b41,	// (0x00040441) call3_video_qcif_pane

0x6b52,	// (0x00040452) call3_video_qcif_uncrop_pane_ParamLimits

0x6b52,	// (0x00040452) call3_video_qcif_uncrop_pane

0x6b5e,	// (0x0004045e) call3_video_subqcif_pane_ParamLimits

0x6b5e,	// (0x0004045e) call3_video_subqcif_pane

0x6b72,	// (0x00040472) call3_video_subqcif_uncrop_pane_ParamLimits

0x6b72,	// (0x00040472) call3_video_subqcif_uncrop_pane

0x6be3,	// (0x000404e3) popup_call3_audio_in_window_g4_ParamLimits

0x6be3,	// (0x000404e3) popup_call3_audio_in_window_g4

0x6b00,	// (0x00040400) mup_spec_half_pane

0x6b09,	// (0x00040409) mup_spec_half_pane_cp

0xc5d3,	// (0x00045ed3) mup_osc_middle_pane

0xc5dc,	// (0x00045edc) mup_visualizer_osc_pane_g1

0x6ae1,	// (0x000403e1) mup_spec_bar_pane_ParamLimits

0x6ae1,	// (0x000403e1) mup_spec_bar_pane

0xc5c0,	// (0x00045ec0) mup_spec_bar_pane_g1

0xc5ca,	// (0x00045eca) mup_spec_bar_pane_g2

0x0001,

0xf63d,	// (0x00048f3d) mup_spec_bar_pane_g

0x3ab9,	// (0x0003d3b9) aid_cale_week_size_cell_pane_ParamLimits

0x3acc,	// (0x0003d3cc) bg_cale_heading_pane_ParamLimits

0x1847,	// (0x0003b147) bg_cale_pane_cp01_ParamLimits

0x3ae0,	// (0x0003d3e0) cale_week_corner_pane_ParamLimits

0x3af6,	// (0x0003d3f6) cale_week_day_heading_pane_ParamLimits

0x3b0a,	// (0x0003d40a) cale_week_scroll_pane_g1_ParamLimits

0x3b1b,	// (0x0003d41b) cale_week_scroll_pane_g2_ParamLimits

0x3b2c,	// (0x0003d42c) cale_week_scroll_pane_g3_ParamLimits

0x3b3d,	// (0x0003d43d) cale_week_scroll_pane_g4_ParamLimits

0x3b4e,	// (0x0003d44e) cale_week_scroll_pane_g5_ParamLimits

0x3b5f,	// (0x0003d45f) cale_week_scroll_pane_g6_ParamLimits

0x3b70,	// (0x0003d470) cale_week_scroll_pane_g7_ParamLimits

0x3b81,	// (0x0003d481) cale_week_scroll_pane_g8_ParamLimits

0x3b94,	// (0x0003d494) cale_week_scroll_pane_g9_ParamLimits

0x3ba5,	// (0x0003d4a5) cale_week_scroll_pane_g10_ParamLimits

0x3bb6,	// (0x0003d4b6) cale_week_scroll_pane_g11_ParamLimits

0x3bc7,	// (0x0003d4c7) cale_week_scroll_pane_g12_ParamLimits

0x3bd8,	// (0x0003d4d8) cale_week_scroll_pane_g13_ParamLimits

0x3be9,	// (0x0003d4e9) cale_week_scroll_pane_g14_ParamLimits

0x3bfa,	// (0x0003d4fa) cale_week_scroll_pane_g15_ParamLimits

0xf1d2,	// (0x00048ad2) cale_week_scroll_pane_g_ParamLimits

0x3c0b,	// (0x0003d50b) cale_week_time_pane_ParamLimits

0x3c1e,	// (0x0003d51e) grid_cale_week_pane_ParamLimits

0x1860,	// (0x0003b160) listscroll_cale_week_pane_t1

0x3c31,	// (0x0003d531) scroll_pane_cp08_ParamLimits

0x46cd,	// (0x0003dfcd) cale_month_corner_pane_ParamLimits

0x1bfc,	// (0x0003b4fc) cale_month_pane_t1

0x4987,	// (0x0003e287) cale_month_week_pane_ParamLimits

0x520e,	// (0x0003eb0e) popup_call_status_window_g1_ParamLimits

0x5222,	// (0x0003eb22) popup_call_status_window_g2_ParamLimits

0x5236,	// (0x0003eb36) popup_call_status_window_g3_ParamLimits

0xf37a,	// (0x00048c7a) popup_call_status_window_g_ParamLimits

0x529c,	// (0x0003eb9c) aid_call2_pane

0x2bee,	// (0x0003c4ee) msg_header_pane_g1

0x5ef3,	// (0x0003f7f3) postcard_address2_pane_ParamLimits

0x5ef3,	// (0x0003f7f3) postcard_address2_pane

0x5f05,	// (0x0003f805) postcard_message2_pane_ParamLimits

0x5f05,	// (0x0003f805) postcard_message2_pane

0x6a9d,	// (0x0004039d) message2_row_pane_ParamLimits

0x6a9d,	// (0x0004039d) message2_row_pane

0x6ab7,	// (0x000403b7) address2_row_pane_ParamLimits

0x6ab7,	// (0x000403b7) address2_row_pane

0xc58e,	// (0x00045e8e) postcard_message2_row_pane_g1

0xc596,	// (0x00045e96) postcard_message2_row_pane_t1

0xc58e,	// (0x00045e8e) address2_row_pane_g1

0xc596,	// (0x00045e96) address2_row_pane_t1

0x3f61,	// (0x0003d861) aid_size_cell_vorec

0x13e6,	// (0x0003ace6) main_rss_pane

0x6aca,	// (0x000403ca) rss_list_single_pane_ParamLimits

0x6aca,	// (0x000403ca) rss_list_single_pane

0xc5a4,	// (0x00045ea4) rss_list_single_pane_t1

0xc5b2,	// (0x00045eb2) rss_list_single_pane_t2

0x0001,

0xf638,	// (0x00048f38) rss_list_single_pane_t

0x13e6,	// (0x0003ace6) main_camera2_pane

0x13e6,	// (0x0003ace6) main_video2_pane

0x6d04,	// (0x00040604) cams_zoom_pane_cp2_ParamLimits

0x6d04,	// (0x00040604) cams_zoom_pane_cp2

0x6d1b,	// (0x0004061b) image2_vga_pane_ParamLimits

0x6d1b,	// (0x0004061b) image2_vga_pane

0x6d51,	// (0x00040651) main_camera2_pane_g1_ParamLimits

0x6d51,	// (0x00040651) main_camera2_pane_g1

0x6d71,	// (0x00040671) main_camera2_pane_g2_ParamLimits

0x6d71,	// (0x00040671) main_camera2_pane_g2

0x6d88,	// (0x00040688) main_camera2_pane_g3_ParamLimits

0x6d88,	// (0x00040688) main_camera2_pane_g3

0x6d9f,	// (0x0004069f) main_camera2_pane_g4_ParamLimits

0x6d9f,	// (0x0004069f) main_camera2_pane_g4

0x6db6,	// (0x000406b6) main_camera2_pane_g5_ParamLimits

0x6db6,	// (0x000406b6) main_camera2_pane_g5

0x6dcd,	// (0x000406cd) main_camera2_pane_g6_ParamLimits

0x6dcd,	// (0x000406cd) main_camera2_pane_g6

0x6de4,	// (0x000406e4) main_camera2_pane_g7_ParamLimits

0x6de4,	// (0x000406e4) main_camera2_pane_g7

0x6dfb,	// (0x000406fb) main_camera2_pane_g8_ParamLimits

0x6dfb,	// (0x000406fb) main_camera2_pane_g8

0x0008,

0xf659,	// (0x00048f59) main_camera2_pane_g_ParamLimits

0xf659,	// (0x00048f59) main_camera2_pane_g

0x6e29,	// (0x00040729) main_camera2_pane_t1_ParamLimits

0x6e29,	// (0x00040729) main_camera2_pane_t1

0x6e58,	// (0x00040758) main_camera2_pane_t2_ParamLimits

0x6e58,	// (0x00040758) main_camera2_pane_t2

0x6e75,	// (0x00040775) main_camera2_pane_t3_ParamLimits

0x6e75,	// (0x00040775) main_camera2_pane_t3

0x6ec1,	// (0x000407c1) main_camera2_pane_t4_ParamLimits

0x6ec1,	// (0x000407c1) main_camera2_pane_t4

0x0006,

0xf66c,	// (0x00048f6c) main_camera2_pane_t_ParamLimits

0xf66c,	// (0x00048f6c) main_camera2_pane_t

0x6f36,	// (0x00040836) cams_zoom_pane_cp4_ParamLimits

0x6f36,	// (0x00040836) cams_zoom_pane_cp4

0x6f4c,	// (0x0004084c) image2_cif_pane_ParamLimits

0x6f4c,	// (0x0004084c) image2_cif_pane

0x6f6f,	// (0x0004086f) image2_subqcif_pane_ParamLimits

0x6f6f,	// (0x0004086f) image2_subqcif_pane

0x6f85,	// (0x00040885) main_video2_pane_g1_ParamLimits

0x6f85,	// (0x00040885) main_video2_pane_g1

0x6f9f,	// (0x0004089f) main_video2_pane_g2_ParamLimits

0x6f9f,	// (0x0004089f) main_video2_pane_g2

0x6fb5,	// (0x000408b5) main_video2_pane_g3_ParamLimits

0x6fb5,	// (0x000408b5) main_video2_pane_g3

0x6fcb,	// (0x000408cb) main_video2_pane_g4_ParamLimits

0x6fcb,	// (0x000408cb) main_video2_pane_g4

0x6fe1,	// (0x000408e1) main_video2_pane_g5_ParamLimits

0x6fe1,	// (0x000408e1) main_video2_pane_g5

0x6ff7,	// (0x000408f7) main_video2_pane_g6_ParamLimits

0x6ff7,	// (0x000408f7) main_video2_pane_g6

0x0005,

0xf67b,	// (0x00048f7b) main_video2_pane_g_ParamLimits

0xf67b,	// (0x00048f7b) main_video2_pane_g

0x7011,	// (0x00040911) main_video2_pane_t1_ParamLimits

0x7011,	// (0x00040911) main_video2_pane_t1

0x7035,	// (0x00040935) main_video2_pane_t2_ParamLimits

0x7035,	// (0x00040935) main_video2_pane_t2

0x707f,	// (0x0004097f) main_video2_pane_t3_ParamLimits

0x707f,	// (0x0004097f) main_video2_pane_t3

0x0002,

0xf688,	// (0x00048f88) main_video2_pane_t_ParamLimits

0xf688,	// (0x00048f88) main_video2_pane_t

0x668c,	// (0x0003ff8c) call_muted_g2

0x0001,

0xf62a,	// (0x00048f2a) call_muted_g

0x13e6,	// (0x0003ace6) main_mup2_pane

0x70c1,	// (0x000409c1) main_mup2_pane_g1_ParamLimits

0x70c1,	// (0x000409c1) main_mup2_pane_g1

0x70cd,	// (0x000409cd) main_mup2_pane_g2_ParamLimits

0x70cd,	// (0x000409cd) main_mup2_pane_g2

0xecbe,	// (0x000485be) main_mup_pane_g13_cp1

0xecc6,	// (0x000485c6) mup_volume_pane_cp1

0x70e9,	// (0x000409e9) main_mup2_pane_g4_ParamLimits

0x70e9,	// (0x000409e9) main_mup2_pane_g4

0x70f9,	// (0x000409f9) main_mup2_pane_g5_ParamLimits

0x70f9,	// (0x000409f9) main_mup2_pane_g5

0x7109,	// (0x00040a09) main_mup2_pane_g6_ParamLimits

0x7109,	// (0x00040a09) main_mup2_pane_g6

0x7119,	// (0x00040a19) main_mup2_pane_g7_ParamLimits

0x7119,	// (0x00040a19) main_mup2_pane_g7

0x0006,

0xf68f,	// (0x00048f8f) main_mup2_pane_g_ParamLimits

0xf68f,	// (0x00048f8f) main_mup2_pane_g

0x7131,	// (0x00040a31) main_mup2_pane_t1_ParamLimits

0x7131,	// (0x00040a31) main_mup2_pane_t1

0x7147,	// (0x00040a47) main_mup2_pane_t2_ParamLimits

0x7147,	// (0x00040a47) main_mup2_pane_t2

0x715d,	// (0x00040a5d) main_mup2_pane_t3_ParamLimits

0x715d,	// (0x00040a5d) main_mup2_pane_t3

0x7173,	// (0x00040a73) main_mup2_pane_t4_ParamLimits

0x7173,	// (0x00040a73) main_mup2_pane_t4

0x718b,	// (0x00040a8b) main_mup2_pane_t5_ParamLimits

0x718b,	// (0x00040a8b) main_mup2_pane_t5

0x71a3,	// (0x00040aa3) main_mup2_pane_t6_ParamLimits

0x71a3,	// (0x00040aa3) main_mup2_pane_t6

0x0005,

0xf69e,	// (0x00048f9e) main_mup2_pane_t_ParamLimits

0xf69e,	// (0x00048f9e) main_mup2_pane_t

0x71d3,	// (0x00040ad3) mup2_visualizer_pane_ParamLimits

0x71d3,	// (0x00040ad3) mup2_visualizer_pane

0x71fe,	// (0x00040afe) mup_progress_pane_cp_ParamLimits

0x71fe,	// (0x00040afe) mup_progress_pane_cp

0xeca9,	// (0x000485a9) mup_volume_pane_cp_ParamLimits

0xeca9,	// (0x000485a9) mup_volume_pane_cp

0x7212,	// (0x00040b12) mup2_visualizer_pane_g1_ParamLimits

0x7212,	// (0x00040b12) mup2_visualizer_pane_g1

0xc613,	// (0x00045f13) mup2_visualizer_pane_g2_ParamLimits

0xc613,	// (0x00045f13) mup2_visualizer_pane_g2

0x7227,	// (0x00040b27) mup2_visualizer_pane_g3_ParamLimits

0x7227,	// (0x00040b27) mup2_visualizer_pane_g3

0x0002,

0xf6ab,	// (0x00048fab) mup2_visualizer_pane_g_ParamLimits

0xf6ab,	// (0x00048fab) mup2_visualizer_pane_g

0x62a1,	// (0x0003fba1) aid_size_cell_fmradio

0x67e8,	// (0x000400e8) aid_height_parent_landcape

0x1a63,	// (0x0003b363) wml_content_pane_cp

0x1a6b,	// (0x0003b36b) wml_tabs_pane

0x1a74,	// (0x0003b374) popup_wml_miniature_window

0x1a7c,	// (0x0003b37c) scroll_pane_cp021

0x1a90,	// (0x0003b390) wml_content_pane_comp8

0x13e6,	// (0x0003ace6) bg_popup_sub_pane_cp05

0xc631,	// (0x00045f31) popup_wml_miniature_window_g1

0xc639,	// (0x00045f39) wml_miniature_view_pane

0x7233,	// (0x00040b33) aid_size_wml_view

0x723b,	// (0x00040b3b) wml_miniature_view_pane_g1

0x7244,	// (0x00040b44) wml_miniature_view_pane_g2

0x724d,	// (0x00040b4d) wml_miniature_view_pane_g3

0x7255,	// (0x00040b55) wml_miniature_view_pane_g4

0x725d,	// (0x00040b5d) wml_miniature_view_pane_g5

0x7265,	// (0x00040b65) wml_miniature_view_pane_g6

0x726d,	// (0x00040b6d) wml_miniature_view_pane_g7

0x7275,	// (0x00040b75) wml_miniature_view_pane_g8

0x0007,

0xf6b2,	// (0x00048fb2) wml_miniature_view_pane_g

0xc641,	// (0x00045f41) background_graphic_ParamLimits

0xc641,	// (0x00045f41) background_graphic

0xc64d,	// (0x00045f4d) wml_tabs_2_pane

0xc656,	// (0x00045f56) wml_tabs_3_pane_ParamLimits

0xc656,	// (0x00045f56) wml_tabs_3_pane

0xc668,	// (0x00045f68) wml_tabs_4_pane_ParamLimits

0xc668,	// (0x00045f68) wml_tabs_4_pane

0xc67e,	// (0x00045f7e) wml_tabs_5_pane_ParamLimits

0xc67e,	// (0x00045f7e) wml_tabs_5_pane

0xc698,	// (0x00045f98) wml_tabs_pane_g2_ParamLimits

0xc698,	// (0x00045f98) wml_tabs_pane_g2

0xc6ac,	// (0x00045fac) wml_tabs_pane_g3_ParamLimits

0xc6ac,	// (0x00045fac) wml_tabs_pane_g3

0x727d,	// (0x00040b7d) wml_tabs_2_active_pane_ParamLimits

0x727d,	// (0x00040b7d) wml_tabs_2_active_pane

0x728d,	// (0x00040b8d) wml_tabs_2_passive_pane_ParamLimits

0x728d,	// (0x00040b8d) wml_tabs_2_passive_pane

0x729d,	// (0x00040b9d) wml_tabs_3_active_pane_cp_ParamLimits

0x729d,	// (0x00040b9d) wml_tabs_3_active_pane_cp

0x72ae,	// (0x00040bae) wml_tabs_3_passive_pane_ParamLimits

0x72ae,	// (0x00040bae) wml_tabs_3_passive_pane

0x72bf,	// (0x00040bbf) wml_tabs_3_passive_pane_cp_ParamLimits

0x72bf,	// (0x00040bbf) wml_tabs_3_passive_pane_cp

0x72d0,	// (0x00040bd0) tabs_4_active_pane

0x72d8,	// (0x00040bd8) tabs_4_passive_pane

0x72e0,	// (0x00040be0) tabs_4_passive_pane_cp

0x72e8,	// (0x00040be8) tabs_4_passive_pane_cp2

0x6567,	// (0x0003fe67) aid_height_text

0x5af3,	// (0x0003f3f3) mup_volume_cont_pane_ParamLimits

0x5af3,	// (0x0003f3f3) mup_volume_cont_pane

0x373d,	// (0x0003d03d) aid_size_cell_pinb

0x3747,	// (0x0003d047) aid_size_list_pinb

0x71ea,	// (0x00040aea) mup2_volume_cont_pane_ParamLimits

0x71ea,	// (0x00040aea) mup2_volume_cont_pane

0xec95,	// (0x00048595) mup2_volume_cont_pane_g1_ParamLimits

0xec95,	// (0x00048595) mup2_volume_cont_pane_g1

0x3466,	// (0x0003cd66) aid_size_cell_touch_ParamLimits

0x3466,	// (0x0003cd66) aid_size_cell_touch

0x3645,	// (0x0003cf45) touch_pane_ParamLimits

0x3645,	// (0x0003cf45) touch_pane

0x0f8a,	// (0x0003a88a) main_rss2_pane

0xc6c9,	// (0x00045fc9) listscroll_rss2_pane

0xc6d2,	// (0x00045fd2) rss2_navigation_pane

0xc6da,	// (0x00045fda) list_rss2_pane

0x5444,	// (0x0003ed44) scroll_pane_cp22

0xc6e2,	// (0x00045fe2) rss2_navigation_pane_g1

0xc6eb,	// (0x00045feb) rss2_navigation_pane_g2

0xc6f3,	// (0x00045ff3) rss2_navigation_pane_g3

0x0002,

0xf6c3,	// (0x00048fc3) rss2_navigation_pane_g

0xc6fb,	// (0x00045ffb) rss2_navigation_pane_t1

0x72f0,	// (0x00040bf0) rss2_list_single_pane_ParamLimits

0x72f0,	// (0x00040bf0) rss2_list_single_pane

0xc709,	// (0x00046009) rss2_list_single_pane_t2

0xc717,	// (0x00046017) rss2_list_single_pane_t3_ParamLimits

0xc717,	// (0x00046017) rss2_list_single_pane_t3

0xc734,	// (0x00046034) rss2_list_single_pane_t4

0x4de9,	// (0x0003e6e9) smil_status_pane_g1

0x1c39,	// (0x0003b539) main_image2_pane_ParamLimits

0x1c39,	// (0x0003b539) main_image2_pane

0x6e12,	// (0x00040712) main_camera2_pane_g9_ParamLimits

0x6e12,	// (0x00040712) main_camera2_pane_g9

0x6f04,	// (0x00040804) main_camera2_pane_t5_ParamLimits

0x6f04,	// (0x00040804) main_camera2_pane_t5

0xec6a,	// (0x0004856a) main_camera2_pane_t6_ParamLimits

0xec6a,	// (0x0004856a) main_camera2_pane_t6

0x7304,	// (0x00040c04) main_image2_pane_g1_ParamLimits

0x7304,	// (0x00040c04) main_image2_pane_g1

0x6263,	// (0x0003fb63) smil2_video_pane_ParamLimits

0x6263,	// (0x0003fb63) smil2_video_pane

0xb124,	// (0x00044a24) aid_zoom_text_primary_cp

0x0fcd,	// (0x0003a8cd) popup_preview_fixed_window

0x19bd,	// (0x0003b2bd) im_reading_pane_g1

0x6cf8,	// (0x000405f8) cams2_bc_adjust_pane_cp_ParamLimits

0x6cf8,	// (0x000405f8) cams2_bc_adjust_pane_cp

0x6f2a,	// (0x0004082a) cams2_bc_adjust_pane_ParamLimits

0x6f2a,	// (0x0004082a) cams2_bc_adjust_pane

0xecce,	// (0x000485ce) cams2_bc_adjust_pane_g1

0xecd6,	// (0x000485d6) cams2_slider_pane

0xecdf,	// (0x000485df) cams2_slider_pane_g1

0xece8,	// (0x000485e8) cams2_slider_pane_g2

0x0006,

0xf6ca,	// (0x00048fca) cams2_slider_pane_g

0x3827,	// (0x0003d127) calc_display_pane_ParamLimits

0x3843,	// (0x0003d143) calc_paper_pane_ParamLimits

0x3864,	// (0x0003d164) grid_calc_pane_ParamLimits

0xb43c,	// (0x00044d3c) popup_clock_digital_window_t1_ParamLimits

0x60fc,	// (0x0003f9fc) main_image_pane_t1

0x3809,	// (0x0003d109) aid_size_cell_calc_ParamLimits

0x3809,	// (0x0003d109) aid_size_cell_calc

0x6818,	// (0x00040118) popup_blid_sat_info2_window_ParamLimits

0x6818,	// (0x00040118) popup_blid_sat_info2_window

0xc74a,	// (0x0004604a) aid_size_cell_blid

0xc752,	// (0x00046052) bg_popup_window_pane_cp07

0xc775,	// (0x00046075) grid_popup_blid_pane

0xc77d,	// (0x0004607d) heading_pane_cp05_ParamLimits

0xc77d,	// (0x0004607d) heading_pane_cp05

0xc845,	// (0x00046145) cell_popup_blid_pane_ParamLimits

0xc845,	// (0x00046145) cell_popup_blid_pane

0xc865,	// (0x00046165) cell_popup_blid_pane_g1

0xc86d,	// (0x0004616d) cell_popup_blid_pane_t1

0x71bd,	// (0x00040abd) mup2_indicator_pane_ParamLimits

0x71bd,	// (0x00040abd) mup2_indicator_pane

0x5855,	// (0x0003f155) mup2_visualizer_osc_pane

0xc61f,	// (0x00045f1f) mup2_visualizer_spec_pane_ParamLimits

0xc61f,	// (0x00045f1f) mup2_visualizer_spec_pane

0x7318,	// (0x00040c18) mup2_spec_half_pane

0x7321,	// (0x00040c21) mup2_spec_half_pane_cp

0x7329,	// (0x00040c29) mup2_spec_bar_pane_ParamLimits

0x7329,	// (0x00040c29) mup2_spec_bar_pane

0xc5c0,	// (0x00045ec0) mup2_spec_bar_pane_g1

0xc5ca,	// (0x00045eca) mup2_spec_bar_pane_g2

0x0001,

0xf63d,	// (0x00048f3d) mup2_spec_bar_pane_g

0x7348,	// (0x00040c48) mup2_osc_middle_pane

0xc5dc,	// (0x00045edc) mup2_visualizer_osc_pane_g1

0x0ff5,	// (0x0003a8f5) popup_number_entry_window_t1_ParamLimits

0x1008,	// (0x0003a908) popup_number_entry_window_t2_ParamLimits

0x101a,	// (0x0003a91a) popup_number_entry_window_t3_ParamLimits

0x368d,	// (0x0003cf8d) popup_number_entry_window_t5_ParamLimits

0x368d,	// (0x0003cf8d) popup_number_entry_window_t5

0xf0ec,	// (0x000489ec) popup_number_entry_window_t_ParamLimits

0x102c,	// (0x0003a92c) text_title_cp2_ParamLimits

0xec16,	// (0x00048516) aid_hotspot_pointer_text2_pane

0xec3c,	// (0x0004853c) main_viewer_pane_g9_ParamLimits

0xec3c,	// (0x0004853c) main_viewer_pane_g9

0x1bfc,	// (0x0003b4fc) cale_month_pane_t1_ParamLimits

0x4e3a,	// (0x0003e73a) bg_cale_pane_ParamLimits

0x4e52,	// (0x0003e752) list_cale_pane_ParamLimits

0x1860,	// (0x0003b160) listscroll_cale_day_pane_t1

0x4e63,	// (0x0003e763) scroll_pane_cp09_ParamLimits

0x5ba1,	// (0x0003f4a1) main_mup_eq_pane_t1_ParamLimits

0x5ba1,	// (0x0003f4a1) main_mup_eq_pane_t1

0x5bb9,	// (0x0003f4b9) main_mup_eq_pane_t2_ParamLimits

0x5bb9,	// (0x0003f4b9) main_mup_eq_pane_t2

0x5bcf,	// (0x0003f4cf) main_mup_eq_pane_t3_ParamLimits

0x5bcf,	// (0x0003f4cf) main_mup_eq_pane_t3

0x5be5,	// (0x0003f4e5) main_mup_eq_pane_t4_ParamLimits

0x5be5,	// (0x0003f4e5) main_mup_eq_pane_t4

0x5bfb,	// (0x0003f4fb) main_mup_eq_pane_t5_ParamLimits

0x5bfb,	// (0x0003f4fb) main_mup_eq_pane_t5

0x5c11,	// (0x0003f511) main_mup_eq_pane_t6_ParamLimits

0x5c11,	// (0x0003f511) main_mup_eq_pane_t6

0x5c23,	// (0x0003f523) main_mup_eq_pane_t7_ParamLimits

0x5c23,	// (0x0003f523) main_mup_eq_pane_t7

0x5c35,	// (0x0003f535) main_mup_eq_pane_t8_ParamLimits

0x5c35,	// (0x0003f535) main_mup_eq_pane_t8

0x5c47,	// (0x0003f547) main_mup_eq_pane_t9_ParamLimits

0x5c47,	// (0x0003f547) main_mup_eq_pane_t9

0x5c5d,	// (0x0003f55d) main_mup_eq_pane_t10_ParamLimits

0x5c5d,	// (0x0003f55d) main_mup_eq_pane_t10

0x0009,

0xf479,	// (0x00048d79) main_mup_eq_pane_t_ParamLimits

0xf479,	// (0x00048d79) main_mup_eq_pane_t

0x5cf0,	// (0x0003f5f0) mup_equalizer_pane_cp5_ParamLimits

0x5d02,	// (0x0003f602) mup_equalizer_pane_cp6_ParamLimits

0x5d14,	// (0x0003f614) mup_equalizer_pane_cp7_ParamLimits

0x0f8a,	// (0x0003a88a) main_gallery_pane

0xc5e5,	// (0x00045ee5) smil2_volume_pane

0xc5ed,	// (0x00045eed) smil_status_volume_pane_g1_ParamLimits

0xc600,	// (0x00045f00) smil_status_volume_pane_g2_ParamLimits

0xec48,	// (0x00048548) smil_status_volume_pane_g3_ParamLimits

0xf642,	// (0x00048f42) smil_status_volume_pane_g_ParamLimits

0xc752,	// (0x00046052) bg_popup_window_pane_cp07_ParamLimits

0xc760,	// (0x00046060) blid_firmament_pane

0x7351,	// (0x00040c51) aid_size_cell_gallery_ParamLimits

0x7351,	// (0x00040c51) aid_size_cell_gallery

0x7367,	// (0x00040c67) grid_gallery_pane_ParamLimits

0x7367,	// (0x00040c67) grid_gallery_pane

0x737b,	// (0x00040c7b) cell_gallery_pane_ParamLimits

0x737b,	// (0x00040c7b) cell_gallery_pane

0xc87b,	// (0x0004617b) bg_cell_gallery_focus_pane_ParamLimits

0xc87b,	// (0x0004617b) bg_cell_gallery_focus_pane

0xc88d,	// (0x0004618d) cell_gallery_pane_g1_ParamLimits

0xc88d,	// (0x0004618d) cell_gallery_pane_g1

0x73c2,	// (0x00040cc2) cell_gallery_pane_g2_ParamLimits

0x73c2,	// (0x00040cc2) cell_gallery_pane_g2

0x73cf,	// (0x00040ccf) cell_gallery_pane_g3_ParamLimits

0x73cf,	// (0x00040ccf) cell_gallery_pane_g3

0xc899,	// (0x00046199) cell_gallery_pane_g4_ParamLimits

0xc899,	// (0x00046199) cell_gallery_pane_g4

0x0003,

0xf6f0,	// (0x00048ff0) cell_gallery_pane_g_ParamLimits

0xf6f0,	// (0x00048ff0) cell_gallery_pane_g

0xc8a5,	// (0x000461a5) bg_cell_gallery_focus_pane_g1

0xc8ad,	// (0x000461ad) bg_cell_gallery_focus_pane_g2

0xc8b5,	// (0x000461b5) bg_cell_gallery_focus_pane_g3

0xc8bd,	// (0x000461bd) bg_cell_gallery_focus_pane_g4

0xc8c5,	// (0x000461c5) bg_cell_gallery_focus_pane_g5

0xc8cd,	// (0x000461cd) bg_cell_gallery_focus_pane_g6

0xc8d5,	// (0x000461d5) bg_cell_gallery_focus_pane_g7

0xc8dd,	// (0x000461dd) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6f9,	// (0x00048ff9) bg_cell_gallery_focus_pane_g

0xc8e5,	// (0x000461e5) aid_firma_cardinal

0xc8f9,	// (0x000461f9) blid_firmament_pane_t1

0xc910,	// (0x00046210) blid_firmament_pane_t2

0xc927,	// (0x00046227) blid_firmament_pane_t3

0xc93e,	// (0x0004623e) blid_firmament_pane_t4

0x0003,

0xf70a,	// (0x0004900a) blid_firmament_pane_t

0xc955,	// (0x00046255) blid_sat_info_pane

0xc965,	// (0x00046265) blid_sat_info_pane_g1

0xc965,	// (0x00046265) blid_sat_info_pane_g2

0x0001,

0xf713,	// (0x00049013) blid_sat_info_pane_g

0xc96f,	// (0x0004626f) blid_sat_info_pane_t1

0xc97d,	// (0x0004627d) smil2_volume_content_pane

0xc986,	// (0x00046286) smil2_volume_pane_g1

0xc98e,	// (0x0004628e) smil2_volume_content_pane_g1

0xc997,	// (0x00046297) smil2_volume_content_pane_g2

0xc9a0,	// (0x000462a0) smil2_volume_content_pane_g3

0xc9a9,	// (0x000462a9) smil2_volume_content_pane_g4

0xc9b2,	// (0x000462b2) smil2_volume_content_pane_g5

0xc9bb,	// (0x000462bb) smil2_volume_content_pane_g6

0xc9c4,	// (0x000462c4) smil2_volume_content_pane_g7

0xc9cd,	// (0x000462cd) smil2_volume_content_pane_g8

0xc9d6,	// (0x000462d6) smil2_volume_content_pane_g9

0xc9df,	// (0x000462df) smil2_volume_content_pane_g10

0x0009,

0xf718,	// (0x00049018) smil2_volume_content_pane_g

0x3c87,	// (0x0003d587) cale_week_day_heading_pane_t1_ParamLimits

0x3cb1,	// (0x0003d5b1) cale_week_day_heading_pane_t2_ParamLimits

0x3cdb,	// (0x0003d5db) cale_week_day_heading_pane_t3_ParamLimits

0x3d05,	// (0x0003d605) cale_week_day_heading_pane_t4_ParamLimits

0x3d2f,	// (0x0003d62f) cale_week_day_heading_pane_t5_ParamLimits

0x3d59,	// (0x0003d659) cale_week_day_heading_pane_t6_ParamLimits

0x3d83,	// (0x0003d683) cale_week_day_heading_pane_t7_ParamLimits

0xf1f1,	// (0x00048af1) cale_week_day_heading_pane_t_ParamLimits

0x1872,	// (0x0003b172) bg_cale_side_pane_ParamLimits

0x3dad,	// (0x0003d6ad) cale_week_time_pane_t1_ParamLimits

0x3dd9,	// (0x0003d6d9) cale_week_time_pane_t2_ParamLimits

0x3e05,	// (0x0003d705) cale_week_time_pane_t3_ParamLimits

0x3e31,	// (0x0003d731) cale_week_time_pane_t4_ParamLimits

0x3e5d,	// (0x0003d75d) cale_week_time_pane_t5_ParamLimits

0x3e89,	// (0x0003d789) cale_week_time_pane_t6_ParamLimits

0x3eb5,	// (0x0003d7b5) cale_week_time_pane_t7_ParamLimits

0x3ee1,	// (0x0003d7e1) cale_week_time_pane_t8_ParamLimits

0xf200,	// (0x00048b00) cale_week_time_pane_t_ParamLimits

0x3f0d,	// (0x0003d80d) cell_cale_week_pane_g2_ParamLimits

0x1872,	// (0x0003b172) bg_cale_side_pane_cp01_ParamLimits

0x4c8c,	// (0x0003e58c) cale_month_week_pane_t1_ParamLimits

0x4ca3,	// (0x0003e5a3) cale_month_week_pane_t2_ParamLimits

0x4cba,	// (0x0003e5ba) cale_month_week_pane_t3_ParamLimits

0x4cd1,	// (0x0003e5d1) cale_month_week_pane_t4_ParamLimits

0x4ce8,	// (0x0003e5e8) cale_month_week_pane_t5_ParamLimits

0x4cff,	// (0x0003e5ff) cale_month_week_pane_t6_ParamLimits

0xf2d9,	// (0x00048bd9) cale_month_week_pane_t_ParamLimits

0xb322,	// (0x00044c22) cell_cale_month_pane_g1_ParamLimits

0x0f8a,	// (0x0003a88a) main_cale_event_viewer_pane

0x0f8a,	// (0x0003a88a) listscroll_cale_event_viewer_pane

0xc9e8,	// (0x000462e8) list_cale_ev_pane

0xc9f0,	// (0x000462f0) scroll_pane_cp023

0x73dc,	// (0x00040cdc) field_cale_ev_pane_ParamLimits

0x73dc,	// (0x00040cdc) field_cale_ev_pane

0xc9fc,	// (0x000462fc) field_cale_ev_content_pane_ParamLimits

0xc9fc,	// (0x000462fc) field_cale_ev_content_pane

0xca08,	// (0x00046308) field_cale_ev_pane_g1_ParamLimits

0xca08,	// (0x00046308) field_cale_ev_pane_g1

0xca14,	// (0x00046314) field_cale_ev_pane_g2_ParamLimits

0xca14,	// (0x00046314) field_cale_ev_pane_g2

0xca2c,	// (0x0004632c) field_cale_ev_pane_g3_ParamLimits

0xca2c,	// (0x0004632c) field_cale_ev_pane_g3

0x0002,

0xf72d,	// (0x0004902d) field_cale_ev_pane_g_ParamLimits

0xf72d,	// (0x0004902d) field_cale_ev_pane_g

0xca44,	// (0x00046344) field_cale_ev_pane_t1_ParamLimits

0xca44,	// (0x00046344) field_cale_ev_pane_t1

0x73f6,	// (0x00040cf6) field_cale_ev_content_pane_t1_ParamLimits

0x73f6,	// (0x00040cf6) field_cale_ev_content_pane_t1

0x5d9c,	// (0x0003f69c) bg_button_pane_cp01

0x1838,	// (0x0003b138) listscroll_cale_week_pane_ParamLimits

0x3ab1,	// (0x0003d3b1) popup_toolbar_window_cp01

0x1860,	// (0x0003b160) listscroll_cale_week_pane_t1_ParamLimits

0x1710,	// (0x0003b010) listscroll_cale_day_pane_ParamLimits

0x3ab1,	// (0x0003d3b1) popup_toolbar_window_cp02

0x1860,	// (0x0003b160) listscroll_cale_day_pane_t1_ParamLimits

0x1838,	// (0x0003b138) main_cale_month_pane_ParamLimits

0x6a14,	// (0x00040314) popup_toolbar_window_cp03_ParamLimits

0x6a14,	// (0x00040314) popup_toolbar_window_cp03

0x60da,	// (0x0003f9da) main_image_pane_g2_ParamLimits

0x60da,	// (0x0003f9da) main_image_pane_g2

0x60eb,	// (0x0003f9eb) main_image_pane_g3_ParamLimits

0x60eb,	// (0x0003f9eb) main_image_pane_g3

0x0002,

0xf50b,	// (0x00048e0b) main_image_pane_g_ParamLimits

0xf50b,	// (0x00048e0b) main_image_pane_g

0x60fc,	// (0x0003f9fc) main_image_pane_t1_ParamLimits

0x6113,	// (0x0003fa13) main_image_pane_t2_ParamLimits

0x6113,	// (0x0003fa13) main_image_pane_t2

0x6125,	// (0x0003fa25) main_image_pane_t3_ParamLimits

0x6125,	// (0x0003fa25) main_image_pane_t3

0x614d,	// (0x0003fa4d) main_image_pane_t4_ParamLimits

0x614d,	// (0x0003fa4d) main_image_pane_t4

0x0003,

0xf512,	// (0x00048e12) main_image_pane_t_ParamLimits

0xf512,	// (0x00048e12) main_image_pane_t

0x616d,	// (0x0003fa6d) popup_image_details_window_cp01

0x6175,	// (0x0003fa75) popup_toobar_trans_pane_cp01_ParamLimits

0x6175,	// (0x0003fa75) popup_toobar_trans_pane_cp01

0x68e1,	// (0x000401e1) popup_image_details_window_ParamLimits

0x68e1,	// (0x000401e1) popup_image_details_window

0xc548,	// (0x00045e48) popup_image_focus_window

0x6cc6,	// (0x000405c6) camera2_autofocus_pane_ParamLimits

0x6cc6,	// (0x000405c6) camera2_autofocus_pane

0x0f8a,	// (0x0003a88a) bg_popup_sub_pane_cp06

0xca5b,	// (0x0004635b) popup_image_focus_window_g1

0xca63,	// (0x00046363) popup_image_focus_window_g2

0xca6b,	// (0x0004636b) popup_image_focus_window_g3

0xca73,	// (0x00046373) popup_image_focus_window_g4

0x0003,

0xf734,	// (0x00049034) popup_image_focus_window_g

0xca7b,	// (0x0004637b) popup_image_focus_window_t1

0xca89,	// (0x00046389) popup_image_focus_window_t2

0xca98,	// (0x00046398) popup_image_focus_window_t3

0x0002,

0xf73d,	// (0x0004903d) popup_image_focus_window_t

0xcaa6,	// (0x000463a6) camera2_autofocus_pane_g1

0x1c39,	// (0x0003b539) bg_tb_trans_pane_cp01

0xcab4,	// (0x000463b4) popup_image_details_window_g1

0xcac7,	// (0x000463c7) popup_image_details_window_g2

0x0002,

0xf74f,	// (0x0004904f) popup_image_details_window_g

0xcaf0,	// (0x000463f0) popup_image_details_window_t1

0xcb02,	// (0x00046402) popup_image_details_window_t2

0xcb1b,	// (0x0004641b) popup_image_details_window_t3

0xcb2f,	// (0x0004642f) popup_image_details_window_t4

0xcb4a,	// (0x0004644a) popup_image_details_window_t5

0x0004,

0xf756,	// (0x00049056) popup_image_details_window_t

0x16f8,	// (0x0003aff8) bg_calc_paper_pane_ParamLimits

0x0f8a,	// (0x0003a88a) grid_highlight_pane_cp013

0xb134,	// (0x00044a34) list_calc_pane_ParamLimits

0xb146,	// (0x00044a46) scroll_pane_cp024

0x1710,	// (0x0003b010) bg_calc_display_pane_ParamLimits

0xb14e,	// (0x00044a4e) calc_display_pane_t1_ParamLimits

0xb163,	// (0x00044a63) calc_display_pane_t2_ParamLimits

0xb178,	// (0x00044a78) calc_display_pane_t3_ParamLimits

0xf173,	// (0x00048a73) calc_display_pane_t_ParamLimits

0x39dc,	// (0x0003d2dc) cell_calc_pane_g2

0x0001,

0xf190,	// (0x00048a90) cell_calc_pane_g

0x39e5,	// (0x0003d2e5) cell_calc_pane_t1

0x176f,	// (0x0003b06f) grid_highlight_pane_cp02_ParamLimits

0x1785,	// (0x0003b085) toolbar_button_pane_cp01_ParamLimits

0x1785,	// (0x0003b085) toolbar_button_pane_cp01

0x61b7,	// (0x0003fab7) temp_image_control_pane_ParamLimits

0x61b7,	// (0x0003fab7) temp_image_control_pane

0x1c39,	// (0x0003b539) main_mp3_pane

0xcb64,	// (0x00046464) temp_image_control_pane_g1_ParamLimits

0xcb64,	// (0x00046464) temp_image_control_pane_g1

0xcb72,	// (0x00046472) temp_image_control_pane_g2_ParamLimits

0xcb72,	// (0x00046472) temp_image_control_pane_g2

0xcb84,	// (0x00046484) temp_image_control_pane_g3_ParamLimits

0xcb84,	// (0x00046484) temp_image_control_pane_g3

0x7443,	// (0x00040d43) temp_image_control_pane_g4_ParamLimits

0x7443,	// (0x00040d43) temp_image_control_pane_g4

0x0003,

0xf761,	// (0x00049061) temp_image_control_pane_g_ParamLimits

0xf761,	// (0x00049061) temp_image_control_pane_g

0xcb64,	// (0x00046464) main_mp3_pane_g1

0x7454,	// (0x00040d54) main_mp3_pane_g2

0x0007,

0xf76a,	// (0x0004906a) main_mp3_pane_g

0xcbc7,	// (0x000464c7) main_mp3_pane_t1

0x18ce,	// (0x0003b1ce) main_camera_pane_g8_ParamLimits

0x18ce,	// (0x0003b1ce) main_camera_pane_g8

0x41a2,	// (0x0003daa2) main_video_pane_g7_ParamLimits

0x41a2,	// (0x0003daa2) main_video_pane_g7

0xec83,	// (0x00048583) main_camera2_pane_t7_ParamLimits

0xec83,	// (0x00048583) main_camera2_pane_t7

0x1a23,	// (0x0003b323) scroll_pane_cp025_ParamLimits

0x1a23,	// (0x0003b323) scroll_pane_cp025

0x1a37,	// (0x0003b337) scroll_pane_cp026_ParamLimits

0x1a37,	// (0x0003b337) scroll_pane_cp026

0x1a46,	// (0x0003b346) wml_content_pane_ParamLimits

0x0f8a,	// (0x0003a88a) main_touch_calib_pane

0x750b,	// (0x00040e0b) main_touch_calib_pane_g1

0x7517,	// (0x00040e17) main_touch_calib_pane_g2

0x7523,	// (0x00040e23) main_touch_calib_pane_g3

0x752f,	// (0x00040e2f) main_touch_calib_pane_g4

0x0003,

0xf788,	// (0x00049088) main_touch_calib_pane_g

0x753b,	// (0x00040e3b) main_touch_calib_pane_t1

0x7553,	// (0x00040e53) main_touch_calib_pane_t2

0x0004,

0xf791,	// (0x00049091) main_touch_calib_pane_t

0x56e4,	// (0x0003efe4) mup_progress_pane_cp02

0x5703,	// (0x0003f003) navi_pane_g1

0x57a8,	// (0x0003f0a8) navi_pane_mp_t3

0x1c39,	// (0x0003b539) main_mp3_pane_ParamLimits

0x6a4e,	// (0x0004034e) navi_pane_ParamLimits

0xcb64,	// (0x00046464) main_mp3_pane_g1_ParamLimits

0x7454,	// (0x00040d54) main_mp3_pane_g2_ParamLimits

0x7460,	// (0x00040d60) main_mp3_pane_g3_ParamLimits

0x7460,	// (0x00040d60) main_mp3_pane_g3

0x746c,	// (0x00040d6c) main_mp3_pane_g4_ParamLimits

0x746c,	// (0x00040d6c) main_mp3_pane_g4

0xcb94,	// (0x00046494) main_mp3_pane_g5_ParamLimits

0xcb94,	// (0x00046494) main_mp3_pane_g5

0xcba2,	// (0x000464a2) main_mp3_pane_g6_ParamLimits

0xcba2,	// (0x000464a2) main_mp3_pane_g6

0xcbaf,	// (0x000464af) main_mp3_pane_g7_ParamLimits

0xcbaf,	// (0x000464af) main_mp3_pane_g7

0xcbbb,	// (0x000464bb) main_mp3_pane_g8_ParamLimits

0xcbbb,	// (0x000464bb) main_mp3_pane_g8

0xf76a,	// (0x0004906a) main_mp3_pane_g_ParamLimits

0x7478,	// (0x00040d78) main_mp3_pane_t2

0x7486,	// (0x00040d86) main_mp3_pane_t3

0xcbd5,	// (0x000464d5) main_mp3_pane_t4

0xcbe3,	// (0x000464e3) main_mp3_pane_t5

0x0005,

0xf77b,	// (0x0004907b) main_mp3_pane_t

0xcbf1,	// (0x000464f1) mup_progress_pane_cp01

0xb124,	// (0x00044a24) aid_zoom_text_secondary2

0xc9e8,	// (0x000462e8) list_cale_ev2_pane

0xc9f0,	// (0x000462f0) scroll_pane_cp023_ParamLimits

0x75a1,	// (0x00040ea1) field_cale_ev2_pane_ParamLimits

0x75a1,	// (0x00040ea1) field_cale_ev2_pane

0xcbf9,	// (0x000464f9) field_cale_ev2_pane_g1_ParamLimits

0xcbf9,	// (0x000464f9) field_cale_ev2_pane_g1

0xcc05,	// (0x00046505) field_cale_ev2_pane_g2_ParamLimits

0xcc05,	// (0x00046505) field_cale_ev2_pane_g2

0xcc1d,	// (0x0004651d) field_cale_ev2_pane_g3_ParamLimits

0xcc1d,	// (0x0004651d) field_cale_ev2_pane_g3

0x0003,

0xf79c,	// (0x0004909c) field_cale_ev2_pane_g_ParamLimits

0xf79c,	// (0x0004909c) field_cale_ev2_pane_g

0xcc41,	// (0x00046541) field_cale_ev2_pane_t1_ParamLimits

0xcc41,	// (0x00046541) field_cale_ev2_pane_t1

0xcc58,	// (0x00046558) field_cale_ev2_pane_t2_ParamLimits

0xcc58,	// (0x00046558) field_cale_ev2_pane_t2

0x0001,

0xf7a5,	// (0x000490a5) field_cale_ev2_pane_t_ParamLimits

0xf7a5,	// (0x000490a5) field_cale_ev2_pane_t

0x5eaf,	// (0x0003f7af) main_postcard_pane_g5_ParamLimits

0x5eaf,	// (0x0003f7af) main_postcard_pane_g5

0x5ec3,	// (0x0003f7c3) main_postcard_pane_g6_ParamLimits

0x5ec3,	// (0x0003f7c3) main_postcard_pane_g6

0x3f84,	// (0x0003d884) camera2_autofocus_pane_cp_ParamLimits

0x3f84,	// (0x0003d884) camera2_autofocus_pane_cp

0x1c39,	// (0x0003b539) main_mup3_pane

0x75d9,	// (0x00040ed9) main_mup3_pane_g1_ParamLimits

0x75d9,	// (0x00040ed9) main_mup3_pane_g1

0x75fb,	// (0x00040efb) main_mup3_pane_g2_ParamLimits

0x75fb,	// (0x00040efb) main_mup3_pane_g2

0x7663,	// (0x00040f63) main_mup3_pane_g3_ParamLimits

0x7663,	// (0x00040f63) main_mup3_pane_g3

0x76a1,	// (0x00040fa1) main_mup3_pane_g4_ParamLimits

0x76a1,	// (0x00040fa1) main_mup3_pane_g4

0x76df,	// (0x00040fdf) main_mup3_pane_g5_ParamLimits

0x76df,	// (0x00040fdf) main_mup3_pane_g5

0x771d,	// (0x0004101d) main_mup3_pane_g6_ParamLimits

0x771d,	// (0x0004101d) main_mup3_pane_g6

0xcc6d,	// (0x0004656d) main_mup3_pane_g7_ParamLimits

0xcc6d,	// (0x0004656d) main_mup3_pane_g7

0x0007,

0xf7b5,	// (0x000490b5) main_mup3_pane_g_ParamLimits

0xf7b5,	// (0x000490b5) main_mup3_pane_g

0x7793,	// (0x00041093) main_mup3_pane_t1_ParamLimits

0x7793,	// (0x00041093) main_mup3_pane_t1

0x77fb,	// (0x000410fb) main_mup3_pane_t2_ParamLimits

0x77fb,	// (0x000410fb) main_mup3_pane_t2

0x78c3,	// (0x000411c3) main_mup3_pane_t4_ParamLimits

0x78c3,	// (0x000411c3) main_mup3_pane_t4

0x7911,	// (0x00041211) main_mup3_pane_t5_ParamLimits

0x7911,	// (0x00041211) main_mup3_pane_t5

0x79bf,	// (0x000412bf) main_mup3_pane_t6_ParamLimits

0x79bf,	// (0x000412bf) main_mup3_pane_t6

0x0005,

0xf7c6,	// (0x000490c6) main_mup3_pane_t_ParamLimits

0xf7c6,	// (0x000490c6) main_mup3_pane_t

0x7a73,	// (0x00041373) mup3_progress_pane_ParamLimits

0x7a73,	// (0x00041373) mup3_progress_pane

0x7acf,	// (0x000413cf) popup_mup3_control_window_ParamLimits

0x7acf,	// (0x000413cf) popup_mup3_control_window

0xcc7b,	// (0x0004657b) popup_mup3_text_window

0x7afd,	// (0x000413fd) mup3_progress_pane_t1

0x7b13,	// (0x00041413) mup3_progress_pane_t2

0xcc83,	// (0x00046583) mup3_progress_pane_t3

0x0002,

0xf7d3,	// (0x000490d3) mup3_progress_pane_t

0xcc9a,	// (0x0004659a) mup_progress_pane_cp03

0x0f8a,	// (0x0003a88a) bg_tb_trans_pane_cp04

0x7b29,	// (0x00041429) mup3_volume_pane

0x7b31,	// (0x00041431) popup_mup3_control_window_g1

0x7b3a,	// (0x0004143a) mup3_volume_pane_g1

0x7b43,	// (0x00041443) mup3_volume_pane_g2

0x7b4c,	// (0x0004144c) mup3_volume_pane_g3

0x0002,

0xf7da,	// (0x000490da) mup3_volume_pane_g

0x0f8a,	// (0x0003a88a) bg_tb_trans_pane_cp03

0xccaa,	// (0x000465aa) popup_mup3_text_window_g1

0xccb2,	// (0x000465b2) popup_mup3_text_window_t1

0x1758,	// (0x0003b058) list_calc_item_pane_g1_ParamLimits

0xc6c0,	// (0x00045fc0) mup_volume_pane_cp_g1

0x756b,	// (0x00040e6b) main_touch_calib_pane_t3

0x757d,	// (0x00040e7d) main_touch_calib_pane_t4

0x758f,	// (0x00040e8f) main_touch_calib_pane_t5

0x0f94,	// (0x0003a894) aid_cell_size_toolbar2

0x0f9c,	// (0x0003a89c) aid_popup3_width_pane

0xb11c,	// (0x00044a1c) aid_zoom_text_msg_primary

0xb242,	// (0x00044b42) vorec_t7

0x171c,	// (0x0003b01c) bg_calc_paper_pane_g1_ParamLimits

0x1728,	// (0x0003b028) bg_calc_paper_pane_g2_ParamLimits

0x1734,	// (0x0003b034) bg_calc_paper_pane_g3_ParamLimits

0x1740,	// (0x0003b040) bg_calc_paper_pane_g4_ParamLimits

0x174c,	// (0x0003b04c) bg_calc_paper_pane_g5_ParamLimits

0x3976,	// (0x0003d276) bg_calc_paper_pane_g6_ParamLimits

0x3985,	// (0x0003d285) bg_calc_paper_pane_g7_ParamLimits

0x3994,	// (0x0003d294) bg_calc_paper_pane_g8_ParamLimits

0xf17a,	// (0x00048a7a) bg_calc_paper_pane_g_ParamLimits

0x39a3,	// (0x0003d2a3) calc_bg_paper_pane_g9_ParamLimits

0x40b8,	// (0x0003d9b8) image_qvga_pane_ParamLimits

0x40b8,	// (0x0003d9b8) image_qvga_pane

0x1641,	// (0x0003af41) bg_popup_sub_pane_cp04_ParamLimits

0x6038,	// (0x0003f938) popup_mup_playback_window_g1_ParamLimits

0x6044,	// (0x0003f944) popup_mup_playback_window_t1_ParamLimits

0x6059,	// (0x0003f959) popup_mup_playback_window_t2_ParamLimits

0xf506,	// (0x00048e06) popup_mup_playback_window_t_ParamLimits

0x70dd,	// (0x000409dd) main_mup2_pane_g3_ParamLimits

0x70dd,	// (0x000409dd) main_mup2_pane_g3

0x4386,	// (0x0003dc86) popup_toolbar_window_cp04

0xb700,	// (0x00045000) popup_call2_audio_second_window_g3_ParamLimits

0xb700,	// (0x00045000) popup_call2_audio_second_window_g3

0xbb0a,	// (0x0004540a) popup_call2_audio_first_window_g4_ParamLimits

0xbb0a,	// (0x0004540a) popup_call2_audio_first_window_g4

0xc189,	// (0x00045a89) popup_call2_audio_in_window_g4_ParamLimits

0xc189,	// (0x00045a89) popup_call2_audio_in_window_g4

0x606e,	// (0x0003f96e) aid_area_sk_bg_cut_ParamLimits

0x606e,	// (0x0003f96e) aid_area_sk_bg_cut

0x608c,	// (0x0003f98c) aid_area_sk_bg_cut_2_ParamLimits

0x608c,	// (0x0003f98c) aid_area_sk_bg_cut_2

0x73b2,	// (0x00040cb2) aid_placing_details_win

0x73ba,	// (0x00040cba) aid_placing_details_win_2

0xcaa6,	// (0x000463a6) camera2_autofocus_pane_g1_ParamLimits

0x35ec,	// (0x0003ceec) popup_fixed_preview_cale_window_ParamLimits

0x35ec,	// (0x0003ceec) popup_fixed_preview_cale_window

0x5866,	// (0x0003f166) navi_slider_pane_g3

0x586f,	// (0x0003f16f) navi_slider_pane_g4

0x5878,	// (0x0003f178) navi_slider_pane_g5

0x5866,	// (0x0003f166) navi_slider_pane_g6

0xb462,	// (0x00044d62) navi_slider_pane_g7

0x5d31,	// (0x0003f631) mup_scale_pane_g3

0x5d3a,	// (0x0003f63a) mup_scale_pane_g4

0x5d43,	// (0x0003f643) mup_scale_pane_g5

0x5d4c,	// (0x0003f64c) mup_scale_pane_g6

0x5d55,	// (0x0003f655) mup_scale_pane_g7

0x5866,	// (0x0003f166) cams2_slider_pane_g3

0xc742,	// (0x00046042) cams2_slider_pane_g4

0xecf1,	// (0x000485f1) cams2_slider_pane_g5

0x5866,	// (0x0003f166) cams2_slider_pane_g6

0xecf9,	// (0x000485f9) cams2_slider_pane_g7

0xc965,	// (0x00046265) camera2_autofocus_pane_cp_g1

0xccc0,	// (0x000465c0) bg_popup_preview_window_pane_cp02_ParamLimits

0xccc0,	// (0x000465c0) bg_popup_preview_window_pane_cp02

0x7b55,	// (0x00041455) list_fp_cale_pane_ParamLimits

0x7b55,	// (0x00041455) list_fp_cale_pane

0xcccc,	// (0x000465cc) popup_fixed_preview_cale_window_t1_ParamLimits

0xcccc,	// (0x000465cc) popup_fixed_preview_cale_window_t1

0x7b61,	// (0x00041461) popup_fixed_preview_cale_window_t2_ParamLimits

0x7b61,	// (0x00041461) popup_fixed_preview_cale_window_t2

0x7b76,	// (0x00041476) popup_fixed_preview_cale_window_t3_ParamLimits

0x7b76,	// (0x00041476) popup_fixed_preview_cale_window_t3

0x0002,

0xf7e1,	// (0x000490e1) popup_fixed_preview_cale_window_t_ParamLimits

0xf7e1,	// (0x000490e1) popup_fixed_preview_cale_window_t

0x7b8b,	// (0x0004148b) list_single_fp_cale_pane_ParamLimits

0x7b8b,	// (0x0004148b) list_single_fp_cale_pane

0x7b9f,	// (0x0004149f) list_single_fp_cale_pane_g1_ParamLimits

0x7b9f,	// (0x0004149f) list_single_fp_cale_pane_g1

0xccea,	// (0x000465ea) list_single_fp_cale_pane_g2_ParamLimits

0xccea,	// (0x000465ea) list_single_fp_cale_pane_g2

0x0002,

0xf7e8,	// (0x000490e8) list_single_fp_cale_pane_g_ParamLimits

0xf7e8,	// (0x000490e8) list_single_fp_cale_pane_g

0x7bab,	// (0x000414ab) list_single_fp_cale_pane_t1_ParamLimits

0x7bab,	// (0x000414ab) list_single_fp_cale_pane_t1

0x7bbd,	// (0x000414bd) list_single_fp_cale_pane_t2_ParamLimits

0x7bbd,	// (0x000414bd) list_single_fp_cale_pane_t2

0x0001,

0xf7ef,	// (0x000490ef) list_single_fp_cale_pane_t_ParamLimits

0xf7ef,	// (0x000490ef) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x0f8a,	// (0x0003a88a) main_dialer_pane

0x7bf0,	// (0x000414f0) aid_cell_size_keypad

0x7bfa,	// (0x000414fa) dialer_ne_pane

0x7c02,	// (0x00041502) grid_dialer_command_1_pane

0x7c0a,	// (0x0004150a) grid_dialer_command_2_pane

0x7c12,	// (0x00041512) grid_dialer_keypad_pane

0x7c22,	// (0x00041522) bg_popup_call_pane_cp06_ParamLimits

0x7c22,	// (0x00041522) bg_popup_call_pane_cp06

0x7c2e,	// (0x0004152e) dialer_ne_clear_pane_ParamLimits

0x7c2e,	// (0x0004152e) dialer_ne_clear_pane

0xcd03,	// (0x00046603) dialer_ne_pane_g1

0xcd0b,	// (0x0004660b) dialer_ne_pane_t1_ParamLimits

0xcd0b,	// (0x0004660b) dialer_ne_pane_t1

0x7c3a,	// (0x0004153a) dialer_ne_pane_t2_ParamLimits

0x7c3a,	// (0x0004153a) dialer_ne_pane_t2

0x7c64,	// (0x00041564) dialer_ne_pane_t3_ParamLimits

0x7c64,	// (0x00041564) dialer_ne_pane_t3

0x0002,

0xf7f4,	// (0x000490f4) dialer_ne_pane_t_ParamLimits

0xf7f4,	// (0x000490f4) dialer_ne_pane_t

0x7c94,	// (0x00041594) dialer_ne_pane_t3_copy1_ParamLimits

0x7c94,	// (0x00041594) dialer_ne_pane_t3_copy1

0x7cc3,	// (0x000415c3) cell_dialer_keypad_pane_ParamLimits

0x7cc3,	// (0x000415c3) cell_dialer_keypad_pane

0x7cd8,	// (0x000415d8) cell_dialer_command_1_pane_ParamLimits

0x7cd8,	// (0x000415d8) cell_dialer_command_1_pane

0x7cee,	// (0x000415ee) cell_dialer_command_2_pane_ParamLimits

0x7cee,	// (0x000415ee) cell_dialer_command_2_pane

0xcd1d,	// (0x0004661d) bg_button_pane_cp02_ParamLimits

0xcd1d,	// (0x0004661d) bg_button_pane_cp02

0x7cfd,	// (0x000415fd) cell_dialer_keypad_pane_g1_ParamLimits

0x7cfd,	// (0x000415fd) cell_dialer_keypad_pane_g1

0xcd1d,	// (0x0004661d) bg_button_pane_cp03_ParamLimits

0xcd1d,	// (0x0004661d) bg_button_pane_cp03

0x7d12,	// (0x00041612) cell_dialer_command_1_pane_g1_ParamLimits

0x7d12,	// (0x00041612) cell_dialer_command_1_pane_g1

0xcd29,	// (0x00046629) bg_button_pane_cp04

0x7d26,	// (0x00041626) cell_dialer_command_2_pane_g1

0x5855,	// (0x0003f155) bg_button_pane_cp06

0xcd31,	// (0x00046631) dialer_ne_clear_pane_g1

0x570f,	// (0x0003f00f) navi_pane_g2

0x572d,	// (0x0003f02d) navi_pane_g3

0x0002,

0xf409,	// (0x00048d09) navi_pane_g

0x57b6,	// (0x0003f0b6) navi_pane_mv_g2

0x57de,	// (0x0003f0de) navi_pane_mv_g5

0x57e7,	// (0x0003f0e7) navi_pane_mv_t1

0x1710,	// (0x0003b010) main_clock2_pane

0x7d5d,	// (0x0004165d) main_clock2_list_pane_ParamLimits

0x7d5d,	// (0x0004165d) main_clock2_list_pane

0x7d8f,	// (0x0004168f) main_clock2_pane_t1_ParamLimits

0x7d8f,	// (0x0004168f) main_clock2_pane_t1

0x7dc6,	// (0x000416c6) main_clock2_pane_t2_ParamLimits

0x7dc6,	// (0x000416c6) main_clock2_pane_t2

0x0004,

0xf7fb,	// (0x000490fb) main_clock2_pane_t_ParamLimits

0xf7fb,	// (0x000490fb) main_clock2_pane_t

0x7e48,	// (0x00041748) popup_clock_analogue_window_cp03_ParamLimits

0x7e48,	// (0x00041748) popup_clock_analogue_window_cp03

0x7e6b,	// (0x0004176b) popup_clock_digital_window_cp02_ParamLimits

0x7e6b,	// (0x0004176b) popup_clock_digital_window_cp02

0x7edc,	// (0x000417dc) main_clock2_list_single_pane_ParamLimits

0x7edc,	// (0x000417dc) main_clock2_list_single_pane

0x5855,	// (0x0003f155) list_highlight_pane_cp05

0xcd39,	// (0x00046639) main_clock2_list_single_pane_t1

0x4386,	// (0x0003dc86) popup_toolbar_window_cp04_ParamLimits

0x7413,	// (0x00040d13) camera2_autofocus_pane_g2_ParamLimits

0x7413,	// (0x00040d13) camera2_autofocus_pane_g2

0x741f,	// (0x00040d1f) camera2_autofocus_pane_g3_ParamLimits

0x741f,	// (0x00040d1f) camera2_autofocus_pane_g3

0x742b,	// (0x00040d2b) camera2_autofocus_pane_g4_ParamLimits

0x742b,	// (0x00040d2b) camera2_autofocus_pane_g4

0x7437,	// (0x00040d37) camera2_autofocus_pane_g5_ParamLimits

0x7437,	// (0x00040d37) camera2_autofocus_pane_g5

0x0004,

0xf744,	// (0x00049044) camera2_autofocus_pane_g_ParamLimits

0xf744,	// (0x00049044) camera2_autofocus_pane_g

0x75b9,	// (0x00040eb9) camera2_autofocus_pane_cp_g2

0x75c1,	// (0x00040ec1) camera2_autofocus_pane_cp_g3

0x75c9,	// (0x00040ec9) camera2_autofocus_pane_cp_g4

0x75d1,	// (0x00040ed1) camera2_autofocus_pane_cp_g5

0x0004,

0xf7aa,	// (0x000490aa) camera2_autofocus_pane_cp_g

0x7c1a,	// (0x0004151a) popup_dialer_spcha_window

0x0f8a,	// (0x0003a88a) bg_popup_sub_pane_cp07

0xcd47,	// (0x00046647) list_spcha_pane

0xcd4f,	// (0x0004664f) list_single_spcha_pane_ParamLimits

0xcd4f,	// (0x0004664f) list_single_spcha_pane

0x0f8a,	// (0x0003a88a) list_highlight_pane_cp06

0xcd60,	// (0x00046660) list_single_spcha_pane_t1

0xbf33,	// (0x00045833) popup_call2_audio_out_window_g4_ParamLimits

0xbf33,	// (0x00045833) popup_call2_audio_out_window_g4

0x0f8a,	// (0x0003a88a) main_imed2_pane

0xc550,	// (0x00045e50) popup_imed_adjust2_window

0x68f7,	// (0x000401f7) popup_imed_trans_window_ParamLimits

0x68f7,	// (0x000401f7) popup_imed_trans_window

0xc7a9,	// (0x000460a9) popup_blid_sat_info2_window_t1

0xc7b7,	// (0x000460b7) popup_blid_sat_info2_window_t2

0x000a,

0xf6d9,	// (0x00048fd9) popup_blid_sat_info2_window_t

0x7f86,	// (0x00041886) aid_size_cell_colour_35

0x7fa6,	// (0x000418a6) aid_size_cell_colour_112

0x7fc6,	// (0x000418c6) aid_size_cell_effect

0xc52a,	// (0x00045e2a) bg_tb_trans_pane_cp02

0x4f97,	// (0x0003e897) heading_imed_pane

0x7fe6,	// (0x000418e6) listscroll_imed_pane

0xcd6e,	// (0x0004666e) heading_imed_pane_g1

0xcd76,	// (0x00046676) heading_imed_pane_t1

0xcd84,	// (0x00046684) grid_imed_colour_35_pane_ParamLimits

0xcd84,	// (0x00046684) grid_imed_colour_35_pane

0x7ff2,	// (0x000418f2) grid_imed_effect_pane

0xcd97,	// (0x00046697) list_imed_aspect_pane

0x8005,	// (0x00041905) scroll_pane_cp027_ParamLimits

0x8005,	// (0x00041905) scroll_pane_cp027

0x8011,	// (0x00041911) cell_imed_effect_pane_ParamLimits

0x8011,	// (0x00041911) cell_imed_effect_pane

0xcd9f,	// (0x0004669f) cell_imed_colour_pane_ParamLimits

0xcd9f,	// (0x0004669f) cell_imed_colour_pane

0xcdd9,	// (0x000466d9) cell_imed_colour_pane_g1_ParamLimits

0xcdd9,	// (0x000466d9) cell_imed_colour_pane_g1

0xcdea,	// (0x000466ea) hgihlgiht_grid_pane_cp016_ParamLimits

0xcdea,	// (0x000466ea) hgihlgiht_grid_pane_cp016

0x8036,	// (0x00041936) cell_imed_effect_pane_g1

0x803e,	// (0x0004193e) grid_highlight_pane_cp017

0xcdfb,	// (0x000466fb) list_imed_single_pane_ParamLimits

0xcdfb,	// (0x000466fb) list_imed_single_pane

0x0f8a,	// (0x0003a88a) list_highlight_pane_cp07

0xce0e,	// (0x0004670e) list_imed_aspect_pane_comp1_t1

0xc52a,	// (0x00045e2a) bg_tb_trans_pane_cp05

0xce2e,	// (0x0004672e) popup_imed_adjust2_window_g1

0xce55,	// (0x00046755) popup_imed_adjust2_window_t1

0xce6d,	// (0x0004676d) slider_imed_adjust_pane

0xce81,	// (0x00046781) slider_imed_adjust_pane_g1

0xce91,	// (0x00046791) slider_imed_adjust_pane_g2

0xcea1,	// (0x000467a1) slider_imed_adjust_pane_g3

0xceb2,	// (0x000467b2) slider_imed_adjust_pane_g4

0x0003,

0xf818,	// (0x00049118) slider_imed_adjust_pane_g

0x8047,	// (0x00041947) aid_size_cell_clipart2

0x8053,	// (0x00041953) grid_imed_clipart_pane

0xcec3,	// (0x000467c3) scroll_pane_cp031

0x805d,	// (0x0004195d) cell_imed_clipart_pane_ParamLimits

0x805d,	// (0x0004195d) cell_imed_clipart_pane

0x8075,	// (0x00041975) cell_imed_clipart_pane_g1

0x0f8a,	// (0x0003a88a) grid_highlight_pane_cp014

0x7d70,	// (0x00041670) main_clock2_pane_g1_ParamLimits

0x7d70,	// (0x00041670) main_clock2_pane_g1

0x7e87,	// (0x00041787) aid_call2_pane_cp10

0x7e99,	// (0x00041799) aid_call_pane_cp10

0x5641,	// (0x0003ef41) popup_clock_analogue_window_cp10_g1

0x5641,	// (0x0003ef41) popup_clock_analogue_window_cp10_g2

0x7eab,	// (0x000417ab) popup_clock_analogue_window_cp10_g3

0x7eab,	// (0x000417ab) popup_clock_analogue_window_cp10_g4

0x5641,	// (0x0003ef41) popup_clock_analogue_window_cp10_g5

0x0004,

0xf806,	// (0x00049106) popup_clock_analogue_window_cp10_g

0x7ebd,	// (0x000417bd) popup_clock_analogue_window_cp10_t1

0x7eee,	// (0x000417ee) clock_digital_number_pane_cp10_ParamLimits

0x7eee,	// (0x000417ee) clock_digital_number_pane_cp10

0x7f06,	// (0x00041806) clock_digital_number_pane_cp11_ParamLimits

0x7f06,	// (0x00041806) clock_digital_number_pane_cp11

0x7f1e,	// (0x0004181e) clock_digital_number_pane_cp12_ParamLimits

0x7f1e,	// (0x0004181e) clock_digital_number_pane_cp12

0x7f36,	// (0x00041836) clock_digital_number_pane_cp13_ParamLimits

0x7f36,	// (0x00041836) clock_digital_number_pane_cp13

0x7f4e,	// (0x0004184e) clock_digital_separator_pane_cp10_ParamLimits

0x7f4e,	// (0x0004184e) clock_digital_separator_pane_cp10

0x7f66,	// (0x00041866) popup_clock_digital_window_cp02_t1_ParamLimits

0x7f66,	// (0x00041866) popup_clock_digital_window_cp02_t1

0x1639,	// (0x0003af39) clock_digital_number_pane_cp10_g1

0x1639,	// (0x0003af39) clock_digital_number_pane_cp10_g2

0x0001,

0xf821,	// (0x00049121) clock_digital_number_pane_cp10_g

0x1639,	// (0x0003af39) clock_digital_separator_pane_cp10_g1

0x1639,	// (0x0003af39) clock_digital_separator_pane_g2_cp10

0x5825,	// (0x0003f125) navi_pane_vded_g4

0x582e,	// (0x0003f12e) navi_pane_vded_g5

0x5837,	// (0x0003f137) navi_pane_vded_t1

0x0f8a,	// (0x0003a88a) main_vded_pane

0x807e,	// (0x0004197e) main_vded_pane_g1

0x8088,	// (0x00041988) main_vded_pane_g2

0x8090,	// (0x00041990) main_vded_pane_g3

0x0002,

0xf826,	// (0x00049126) main_vded_pane_g

0x8098,	// (0x00041998) main_vded_pane_t1

0x80a6,	// (0x000419a6) main_vded_pane_t2

0x0001,

0xf82d,	// (0x0004912d) main_vded_pane_t

0x80b4,	// (0x000419b4) vded_slider_pane

0x80bc,	// (0x000419bc) vded_video_pane

0xcecb,	// (0x000467cb) vded_video_pane_g1

0x80c4,	// (0x000419c4) vded_video_pane_g2

0xc965,	// (0x00046265) vded_video_pane_g3

0x0002,

0xf832,	// (0x00049132) vded_video_pane_g

0xced5,	// (0x000467d5) vded_slider_pane_g1

0xc6c0,	// (0x00045fc0) vded_slider_pane_g2

0xcede,	// (0x000467de) vded_slider_pane_g3

0xcee7,	// (0x000467e7) vded_slider_pane_g4

0xcef0,	// (0x000467f0) vded_slider_pane_g5

0x0004,

0xf839,	// (0x00049139) vded_slider_pane_g

0x7ab9,	// (0x000413b9) mup3_rocker_pane_ParamLimits

0x7ab9,	// (0x000413b9) mup3_rocker_pane

0x80cd,	// (0x000419cd) mup3_control_keys_pane_g1

0x80d5,	// (0x000419d5) mup3_control_keys_pane_g2

0x80dd,	// (0x000419dd) mup3_control_keys_pane_g3

0x80e5,	// (0x000419e5) mup3_control_keys_pane_g4

0x0003,

0xf844,	// (0x00049144) mup3_control_keys_pane_g

0x361f,	// (0x0003cf1f) popup_toolbar2_fixed_window_cp01_ParamLimits

0x361f,	// (0x0003cf1f) popup_toolbar2_fixed_window_cp01

0x7ae7,	// (0x000413e7) popup_toolbar2_fixed_window_cp02_ParamLimits

0x7ae7,	// (0x000413e7) popup_toolbar2_fixed_window_cp02

0xb872,	// (0x00045172) popup_call2_audio_second_window_t4_ParamLimits

0xb872,	// (0x00045172) popup_call2_audio_second_window_t4

0xbda0,	// (0x000456a0) popup_call2_audio_first_window_t6_ParamLimits

0xbda0,	// (0x000456a0) popup_call2_audio_first_window_t6

0xc036,	// (0x00045936) popup_call2_audio_out_window_t6_ParamLimits

0xc036,	// (0x00045936) popup_call2_audio_out_window_t6

0x0f8a,	// (0x0003a88a) main_vitu_pane

0x80f5,	// (0x000419f5) aid_size_cell_itu_ParamLimits

0x80f5,	// (0x000419f5) aid_size_cell_itu

0x1c39,	// (0x0003b539) bg_popup_window_pane_cp08_ParamLimits

0x1c39,	// (0x0003b539) bg_popup_window_pane_cp08

0x810b,	// (0x00041a0b) field_vitu_entry_pane_ParamLimits

0x810b,	// (0x00041a0b) field_vitu_entry_pane

0x811e,	// (0x00041a1e) grid_vitu_function_pane_ParamLimits

0x811e,	// (0x00041a1e) grid_vitu_function_pane

0x8133,	// (0x00041a33) grid_vitu_itu_pane_ParamLimits

0x8133,	// (0x00041a33) grid_vitu_itu_pane

0x8149,	// (0x00041a49) cell_vitu_itu_pane_ParamLimits

0x8149,	// (0x00041a49) cell_vitu_itu_pane

0x816b,	// (0x00041a6b) cell_vitu_function_pane_ParamLimits

0x816b,	// (0x00041a6b) cell_vitu_function_pane

0x1c39,	// (0x0003b539) bg_popup_sub_pane_cp08_ParamLimits

0x1c39,	// (0x0003b539) bg_popup_sub_pane_cp08

0x8184,	// (0x00041a84) field_vitu_entry_pane_t1_ParamLimits

0x8184,	// (0x00041a84) field_vitu_entry_pane_t1

0xcf11,	// (0x00046811) field_vitu_entry_pane_t2_ParamLimits

0xcf11,	// (0x00046811) field_vitu_entry_pane_t2

0x0001,

0xf852,	// (0x00049152) field_vitu_entry_pane_t_ParamLimits

0xf852,	// (0x00049152) field_vitu_entry_pane_t

0xcf2e,	// (0x0004682e) bg_button_pane_cp05_ParamLimits

0xcf2e,	// (0x0004682e) bg_button_pane_cp05

0x81a0,	// (0x00041aa0) cell_vitu_itu_pane_g1

0x81b8,	// (0x00041ab8) cell_vitu_itu_pane_t1_ParamLimits

0x81b8,	// (0x00041ab8) cell_vitu_itu_pane_t1

0x81ca,	// (0x00041aca) cell_vitu_itu_pane_t2_ParamLimits

0x81ca,	// (0x00041aca) cell_vitu_itu_pane_t2

0x0002,

0xf857,	// (0x00049157) cell_vitu_itu_pane_t_ParamLimits

0xf857,	// (0x00049157) cell_vitu_itu_pane_t

0xcf3c,	// (0x0004683c) bg_button_pane_cp07

0x81ff,	// (0x00041aff) cell_vitu_function_pane_g1

0xb12c,	// (0x00044a2c) main_calc_pane_g1

0x3483,	// (0x0003cd83) aid_visual_content_pane

0x0f8a,	// (0x0003a88a) main_vradio_pane

0x8208,	// (0x00041b08) main_vradio_pane_g1_ParamLimits

0x8208,	// (0x00041b08) main_vradio_pane_g1

0xcf46,	// (0x00046846) main_vradio_pane_g2_ParamLimits

0xcf46,	// (0x00046846) main_vradio_pane_g2

0x0001,

0xf85e,	// (0x0004915e) main_vradio_pane_g_ParamLimits

0xf85e,	// (0x0004915e) main_vradio_pane_g

0x821e,	// (0x00041b1e) main_vradio_pane_t1_ParamLimits

0x821e,	// (0x00041b1e) main_vradio_pane_t1

0x8233,	// (0x00041b33) main_vradio_pane_t2_ParamLimits

0x8233,	// (0x00041b33) main_vradio_pane_t2

0xcf53,	// (0x00046853) main_vradio_pane_t3_ParamLimits

0xcf53,	// (0x00046853) main_vradio_pane_t3

0x0002,

0xf863,	// (0x00049163) main_vradio_pane_t_ParamLimits

0xf863,	// (0x00049163) main_vradio_pane_t

0x8248,	// (0x00041b48) vradio_rocker_control_pane_ParamLimits

0x8248,	// (0x00041b48) vradio_rocker_control_pane

0x825a,	// (0x00041b5a) vradio_station_info_pane_ParamLimits

0x825a,	// (0x00041b5a) vradio_station_info_pane

0xcf65,	// (0x00046865) vradio_frequency_info_pane_ParamLimits

0xcf65,	// (0x00046865) vradio_frequency_info_pane

0xc965,	// (0x00046265) vradio_station_info_pane_g1

0xcf74,	// (0x00046874) vradio_station_info_pane_t1_ParamLimits

0xcf74,	// (0x00046874) vradio_station_info_pane_t1

0xcf96,	// (0x00046896) vradio_station_info_pane_t2_ParamLimits

0xcf96,	// (0x00046896) vradio_station_info_pane_t2

0x0001,

0xf86a,	// (0x0004916a) vradio_station_info_pane_t_ParamLimits

0xf86a,	// (0x0004916a) vradio_station_info_pane_t

0xcfa8,	// (0x000468a8) vradio_tuning_pane

0xcfb0,	// (0x000468b0) vradio_rocker_control_pane_g1

0xcfb8,	// (0x000468b8) vradio_rocker_control_pane_g2

0xcfc0,	// (0x000468c0) vradio_rocker_control_pane_g3

0xcfc8,	// (0x000468c8) vradio_rocker_control_pane_g4

0xcfd0,	// (0x000468d0) vradio_rocker_control_pane_g5

0x0004,

0xf86f,	// (0x0004916f) vradio_rocker_control_pane_g

0x826a,	// (0x00041b6a) vradio_frequency_info_pane_g1

0xcfd8,	// (0x000468d8) vradio_frequency_info_pane_t1_ParamLimits

0xcfd8,	// (0x000468d8) vradio_frequency_info_pane_t1

0x8274,	// (0x00041b74) vradio_tuning_pane_g1

0x827d,	// (0x00041b7d) vradio_tuning_pane_t1

0x0fac,	// (0x0003a8ac) area_side_right_pane_ParamLimits

0x0fac,	// (0x0003a8ac) area_side_right_pane

0xc4f1,	// (0x00045df1) status_small_pane_g1

0xc4f9,	// (0x00045df9) status_small_pane_g2

0xc502,	// (0x00045e02) status_small_pane_g3

0xc50b,	// (0x00045e0b) status_small_pane_g4

0x0003,

0xf62f,	// (0x00048f2f) status_small_pane_g

0xc514,	// (0x00045e14) status_small_pane_t1

0x0f8a,	// (0x0003a88a) main_video3_pane

0xcfec,	// (0x000468ec) cams_zoom_vslider_pane

0xcff4,	// (0x000468f4) image3_wide_pane_ParamLimits

0xcff4,	// (0x000468f4) image3_wide_pane

0xd00e,	// (0x0004690e) image3_wide_small_pane

0xd018,	// (0x00046918) main_video3_pane_g1_ParamLimits

0xd018,	// (0x00046918) main_video3_pane_g1

0xd034,	// (0x00046934) main_video3_pane_g2_ParamLimits

0xd034,	// (0x00046934) main_video3_pane_g2

0x0001,

0xf87a,	// (0x0004917a) main_video3_pane_g_ParamLimits

0xf87a,	// (0x0004917a) main_video3_pane_g

0xd050,	// (0x00046950) main_video3_pane_t1_ParamLimits

0xd050,	// (0x00046950) main_video3_pane_t1

0xd07b,	// (0x0004697b) main_video3_pane_t2_ParamLimits

0xd07b,	// (0x0004697b) main_video3_pane_t2

0xd0a6,	// (0x000469a6) main_video3_pane_t3_ParamLimits

0xd0a6,	// (0x000469a6) main_video3_pane_t3

0x0002,

0xf87f,	// (0x0004917f) main_video3_pane_t_ParamLimits

0xf87f,	// (0x0004917f) main_video3_pane_t

0xd0d1,	// (0x000469d1) cams_zoom_vslider_pane_g1

0xd0da,	// (0x000469da) cams_zoom_vslider_pane_g2

0x0001,

0xf886,	// (0x00049186) cams_zoom_vslider_pane_g

0xd0e2,	// (0x000469e2) small_slider_vertical_pane

0xc965,	// (0x00046265) small_slider_vertical_pane_g1

0xc965,	// (0x00046265) small_slider_vertical_pane_g2

0xd0ea,	// (0x000469ea) small_slider_vertical_pane_g3

0x0002,

0xf88b,	// (0x0004918b) small_slider_vertical_pane_g

0x0f8a,	// (0x0003a88a) main_hwr_training_pane

0xd0f3,	// (0x000469f3) hwr_training_instruct_pane_ParamLimits

0xd0f3,	// (0x000469f3) hwr_training_instruct_pane

0x828c,	// (0x00041b8c) hwr_training_navi_pane_ParamLimits

0x828c,	// (0x00041b8c) hwr_training_navi_pane

0x82a3,	// (0x00041ba3) hwr_training_write_pane_ParamLimits

0x82a3,	// (0x00041ba3) hwr_training_write_pane

0x0f8a,	// (0x0003a88a) bg_frame_shadow_pane

0xd122,	// (0x00046a22) hwr_training_write_pane_g1

0xd12a,	// (0x00046a2a) hwr_training_write_pane_g2

0xd132,	// (0x00046a32) hwr_training_write_pane_g3

0xd13a,	// (0x00046a3a) hwr_training_write_pane_g4

0xd142,	// (0x00046a42) hwr_training_write_pane_g5

0xd14a,	// (0x00046a4a) hwr_training_write_pane_g6

0xd152,	// (0x00046a52) hwr_training_write_pane_g7

0x0006,

0xf892,	// (0x00049192) hwr_training_write_pane_g

0xed02,	// (0x00048602) hwr_training_navi_pane_g1_ParamLimits

0xed02,	// (0x00048602) hwr_training_navi_pane_g1

0xed14,	// (0x00048614) hwr_training_navi_pane_g2_ParamLimits

0xed14,	// (0x00048614) hwr_training_navi_pane_g2

0xed26,	// (0x00048626) hwr_training_navi_pane_g3_ParamLimits

0xed26,	// (0x00048626) hwr_training_navi_pane_g3

0xed36,	// (0x00048636) hwr_training_navi_pane_g4_ParamLimits

0xed36,	// (0x00048636) hwr_training_navi_pane_g4

0x0004,

0xf8a1,	// (0x000491a1) hwr_training_navi_pane_g_ParamLimits

0xf8a1,	// (0x000491a1) hwr_training_navi_pane_g

0xed43,	// (0x00048643) hwr_training_navi_pane_t1

0x82e3,	// (0x00041be3) list_single_hwr_training_instruct_pane_ParamLimits

0x82e3,	// (0x00041be3) list_single_hwr_training_instruct_pane

0xd15a,	// (0x00046a5a) list_single_hwr_training_instruct_pane_t1

0xc8a5,	// (0x000461a5) bg_frame_shadow_pane_g1

0xd169,	// (0x00046a69) bg_frame_shadow_pane_g2

0xd171,	// (0x00046a71) bg_frame_shadow_pane_g3

0xd179,	// (0x00046a79) bg_frame_shadow_pane_g4

0xd181,	// (0x00046a81) bg_frame_shadow_pane_g5

0xd189,	// (0x00046a89) bg_frame_shadow_pane_g6

0xd191,	// (0x00046a91) bg_frame_shadow_pane_g7

0x17db,	// (0x0003b0db) bg_frame_shadow_pane_g8

0x0007,

0xf8ac,	// (0x000491ac) bg_frame_shadow_pane_g

0x0f8a,	// (0x0003a88a) main_video_tele_dialer_pane

0x82fb,	// (0x00041bfb) aid_size_cell_video_keypad_ParamLimits

0x82fb,	// (0x00041bfb) aid_size_cell_video_keypad

0x8315,	// (0x00041c15) grid_video_dialer_keypad_pane_ParamLimits

0x8315,	// (0x00041c15) grid_video_dialer_keypad_pane

0x8357,	// (0x00041c57) video_down_pane_cp_ParamLimits

0x8357,	// (0x00041c57) video_down_pane_cp

0x8387,	// (0x00041c87) cell_video_dialer_keypad_pane_ParamLimits

0x8387,	// (0x00041c87) cell_video_dialer_keypad_pane

0xd199,	// (0x00046a99) bg_button_pane_cp08_ParamLimits

0xd199,	// (0x00046a99) bg_button_pane_cp08

0x83a9,	// (0x00041ca9) cell_video_dialer_keypad_pane_g1_ParamLimits

0x83a9,	// (0x00041ca9) cell_video_dialer_keypad_pane_g1

0x7aa3,	// (0x000413a3) mup3_rocker2_pane_ParamLimits

0x7aa3,	// (0x000413a3) mup3_rocker2_pane

0xc965,	// (0x00046265) mup3_rocker2_pane_g1

0x67f0,	// (0x000400f0) main_dialer2_pane

0x0f8a,	// (0x0003a88a) main_mp4_pane

0xed59,	// (0x00048659) main_mp4_pane_g1_ParamLimits

0xed59,	// (0x00048659) main_mp4_pane_g1

0xed59,	// (0x00048659) main_mp4_pane_g2_ParamLimits

0xed59,	// (0x00048659) main_mp4_pane_g2

0x83e4,	// (0x00041ce4) main_mp4_pane_g3_ParamLimits

0x83e4,	// (0x00041ce4) main_mp4_pane_g3

0xed67,	// (0x00048667) main_mp4_pane_g4_ParamLimits

0xed67,	// (0x00048667) main_mp4_pane_g4

0xed95,	// (0x00048695) main_mp4_pane_g5_ParamLimits

0xed95,	// (0x00048695) main_mp4_pane_g5

0x0005,

0xf8cc,	// (0x000491cc) main_mp4_pane_g_ParamLimits

0xf8cc,	// (0x000491cc) main_mp4_pane_g

0xedf1,	// (0x000486f1) main_mp4_pane_t1_ParamLimits

0xedf1,	// (0x000486f1) main_mp4_pane_t1

0xee49,	// (0x00048749) main_mp4_pane_t2_ParamLimits

0xee49,	// (0x00048749) main_mp4_pane_t2

0xd1a5,	// (0x00046aa5) main_mp4_pane_t3_ParamLimits

0xd1a5,	// (0x00046aa5) main_mp4_pane_t3

0xee9b,	// (0x0004879b) main_mp4_pane_t4_ParamLimits

0xee9b,	// (0x0004879b) main_mp4_pane_t4

0x0003,

0xf8d9,	// (0x000491d9) main_mp4_pane_t_ParamLimits

0xf8d9,	// (0x000491d9) main_mp4_pane_t

0xeedb,	// (0x000487db) mp4_progress_pane_ParamLimits

0xeedb,	// (0x000487db) mp4_progress_pane

0xef1f,	// (0x0004881f) mp4_rocker_pane_ParamLimits

0xef1f,	// (0x0004881f) mp4_rocker_pane

0xd1d3,	// (0x00046ad3) mp4_progress_pane_t1

0xd1ea,	// (0x00046aea) mp4_progress_pane_t2

0x0001,

0xf8e2,	// (0x000491e2) mp4_progress_pane_t

0xd201,	// (0x00046b01) mup_progress_pane_cp04

0xc965,	// (0x00046265) mp4_rocker_pane_g1

0x8414,	// (0x00041d14) aid_cell_size_keypad2_ParamLimits

0x8414,	// (0x00041d14) aid_cell_size_keypad2

0x842e,	// (0x00041d2e) dialer2_ne_pane_ParamLimits

0x842e,	// (0x00041d2e) dialer2_ne_pane

0x8443,	// (0x00041d43) grid_dialer2_keypad_pane_ParamLimits

0x8443,	// (0x00041d43) grid_dialer2_keypad_pane

0xc752,	// (0x00046052) bg_popup_call_pane_cp07_ParamLimits

0xc752,	// (0x00046052) bg_popup_call_pane_cp07

0x8459,	// (0x00041d59) dialer2_ne_pane_t1_ParamLimits

0x8459,	// (0x00041d59) dialer2_ne_pane_t1

0x8496,	// (0x00041d96) cell_dialer2_keypad_pane_ParamLimits

0x8496,	// (0x00041d96) cell_dialer2_keypad_pane

0xd21f,	// (0x00046b1f) bg_button_pane_pane_cp04_ParamLimits

0xd21f,	// (0x00046b1f) bg_button_pane_pane_cp04

0x84b8,	// (0x00041db8) cell_dialer2_keypad_pane_g1_ParamLimits

0x84b8,	// (0x00041db8) cell_dialer2_keypad_pane_g1

0x4274,	// (0x0003db74) aid_placing_vt_set_content_ParamLimits

0x4274,	// (0x0003db74) aid_placing_vt_set_content

0x4296,	// (0x0003db96) aid_placing_vt_set_title_ParamLimits

0x4296,	// (0x0003db96) aid_placing_vt_set_title

0x0f8a,	// (0x0003a88a) main_image3_pane

0x8547,	// (0x00041e47) area_side_right_pane_cp01_ParamLimits

0x8547,	// (0x00041e47) area_side_right_pane_cp01

0xed59,	// (0x00048659) main_image3_pane_g1_ParamLimits

0xed59,	// (0x00048659) main_image3_pane_g1

0x855e,	// (0x00041e5e) main_image3_pane_g2_ParamLimits

0x855e,	// (0x00041e5e) main_image3_pane_g2

0x8584,	// (0x00041e84) main_image3_pane_g3_ParamLimits

0x8584,	// (0x00041e84) main_image3_pane_g3

0x85aa,	// (0x00041eaa) main_image3_pane_g4_ParamLimits

0x85aa,	// (0x00041eaa) main_image3_pane_g4

0x0003,

0xf8f1,	// (0x000491f1) main_image3_pane_g_ParamLimits

0xf8f1,	// (0x000491f1) main_image3_pane_g

0x85d0,	// (0x00041ed0) main_image3_pane_t1_ParamLimits

0x85d0,	// (0x00041ed0) main_image3_pane_t1

0x8628,	// (0x00041f28) main_image3_pane_t2_ParamLimits

0x8628,	// (0x00041f28) main_image3_pane_t2

0x867a,	// (0x00041f7a) main_image3_pane_t3_ParamLimits

0x867a,	// (0x00041f7a) main_image3_pane_t3

0x0003,

0xf8fa,	// (0x000491fa) main_image3_pane_t_ParamLimits

0xf8fa,	// (0x000491fa) main_image3_pane_t

0x1c39,	// (0x0003b539) grid_sctrl_middle_pane_cp01_ParamLimits

0x1c39,	// (0x0003b539) grid_sctrl_middle_pane_cp01

0x86fa,	// (0x00041ffa) cell_sctrl_middle_pane_cp01_ParamLimits

0x86fa,	// (0x00041ffa) cell_sctrl_middle_pane_cp01

0x8717,	// (0x00042017) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x8717,	// (0x00042017) cell_sctrl_middle_pane_cp01_g1

0x0f8a,	// (0x0003a88a) main_call4_pane

0x872d,	// (0x0004202d) aid_size_button_call4_ParamLimits

0x872d,	// (0x0004202d) aid_size_button_call4

0x875a,	// (0x0004205a) call4_windows_pane_ParamLimits

0x875a,	// (0x0004205a) call4_windows_pane

0x8770,	// (0x00042070) grid_call4_button_pane_ParamLimits

0x8770,	// (0x00042070) grid_call4_button_pane

0xd243,	// (0x00046b43) call4_windows_conf_pane

0x878f,	// (0x0004208f) popup_call4_audio_first_window_ParamLimits

0x878f,	// (0x0004208f) popup_call4_audio_first_window

0x87af,	// (0x000420af) popup_call4_audio_second_window_ParamLimits

0x87af,	// (0x000420af) popup_call4_audio_second_window

0xd276,	// (0x00046b76) popup_call4_audio_wait_window_ParamLimits

0xd276,	// (0x00046b76) popup_call4_audio_wait_window

0x87c1,	// (0x000420c1) cell_call4_button_pane_ParamLimits

0x87c1,	// (0x000420c1) cell_call4_button_pane

0x87e6,	// (0x000420e6) bg_button_pane_cp09_ParamLimits

0x87e6,	// (0x000420e6) bg_button_pane_cp09

0x87f2,	// (0x000420f2) cell_call4_button_pane_g1_ParamLimits

0x87f2,	// (0x000420f2) cell_call4_button_pane_g1

0x8818,	// (0x00042118) cell_call4_button_pane_t1_ParamLimits

0x8818,	// (0x00042118) cell_call4_button_pane_t1

0xd2bc,	// (0x00046bbc) popup_call4_audio_conf_window_ParamLimits

0xd2bc,	// (0x00046bbc) popup_call4_audio_conf_window

0x7afd,	// (0x000413fd) mup3_progress_pane_t1_ParamLimits

0x7b13,	// (0x00041413) mup3_progress_pane_t2_ParamLimits

0xcc83,	// (0x00046583) mup3_progress_pane_t3_ParamLimits

0xf7d3,	// (0x000490d3) mup3_progress_pane_t_ParamLimits

0xcc9a,	// (0x0004659a) mup_progress_pane_cp03_ParamLimits

0x80ed,	// (0x000419ed) mup3_control_keys_pane_g4_copy1

0xef09,	// (0x00048809) mp4_rocker2_pane_ParamLimits

0xef09,	// (0x00048809) mp4_rocker2_pane

0xd2d0,	// (0x00046bd0) mp4_rocker2_pane_g1

0xd2d8,	// (0x00046bd8) mp4_rocker2_pane_g2

0xef6f,	// (0x0004886f) mp4_rocker2_pane_g3

0xef77,	// (0x00048877) mp4_rocker2_pane_g4

0xef7f,	// (0x0004887f) mp4_rocker2_pane_g5

0x0004,

0xf903,	// (0x00049203) mp4_rocker2_pane_g

0x0f8a,	// (0x0003a88a) main_camera4_pane

0x0f8a,	// (0x0003a88a) main_video4_pane

0x8329,	// (0x00041c29) main_video_tele_dialer_pane_t1_ParamLimits

0x8329,	// (0x00041c29) main_video_tele_dialer_pane_t1

0x8340,	// (0x00041c40) main_video_tele_dialer_pane_t2_ParamLimits

0x8340,	// (0x00041c40) main_video_tele_dialer_pane_t2

0x0001,

0xf8bd,	// (0x000491bd) main_video_tele_dialer_pane_t_ParamLimits

0xf8bd,	// (0x000491bd) main_video_tele_dialer_pane_t

0x8856,	// (0x00042156) cam4_autofocus_pane_ParamLimits

0x8856,	// (0x00042156) cam4_autofocus_pane

0x886a,	// (0x0004216a) cam4_image_uncrop_pane_ParamLimits

0x886a,	// (0x0004216a) cam4_image_uncrop_pane

0x8881,	// (0x00042181) cam4_indicators_pane_ParamLimits

0x8881,	// (0x00042181) cam4_indicators_pane

0x88a5,	// (0x000421a5) main_camera4_pane_g1_ParamLimits

0x88a5,	// (0x000421a5) main_camera4_pane_g1

0x88b1,	// (0x000421b1) main_camera4_pane_g2_ParamLimits

0x88b1,	// (0x000421b1) main_camera4_pane_g2

0x88b1,	// (0x000421b1) main_camera4_pane_g3_ParamLimits

0x88b1,	// (0x000421b1) main_camera4_pane_g3

0x88bd,	// (0x000421bd) main_camera4_pane_g4_ParamLimits

0x88bd,	// (0x000421bd) main_camera4_pane_g4

0x88c9,	// (0x000421c9) main_camera4_pane_g5_ParamLimits

0x88c9,	// (0x000421c9) main_camera4_pane_g5

0x0005,

0xf90e,	// (0x0004920e) main_camera4_pane_g_ParamLimits

0xf90e,	// (0x0004920e) main_camera4_pane_g

0x88e6,	// (0x000421e6) main_camera4_pane_t1_ParamLimits

0x88e6,	// (0x000421e6) main_camera4_pane_t1

0xcb94,	// (0x00046494) bg_tb_trans_pane_cp06

0xefa9,	// (0x000488a9) cam4_indicators_pane_g1

0xefb9,	// (0x000488b9) cam4_indicators_pane_g2

0x0002,

0xf929,	// (0x00049229) cam4_indicators_pane_g

0xefd9,	// (0x000488d9) cam4_indicators_pane_t1

0x893b,	// (0x0004223b) main_video4_pane_g1_ParamLimits

0x893b,	// (0x0004223b) main_video4_pane_g1

0x894d,	// (0x0004224d) main_video4_pane_g2_ParamLimits

0x894d,	// (0x0004224d) main_video4_pane_g2

0x894d,	// (0x0004224d) main_video4_pane_g3_ParamLimits

0x894d,	// (0x0004224d) main_video4_pane_g3

0x895c,	// (0x0004225c) main_video4_pane_g4_ParamLimits

0x895c,	// (0x0004225c) main_video4_pane_g4

0x0004,

0xf930,	// (0x00049230) main_video4_pane_g_ParamLimits

0xf930,	// (0x00049230) main_video4_pane_g

0x897a,	// (0x0004227a) vid4_indicators_pane_ParamLimits

0x897a,	// (0x0004227a) vid4_indicators_pane

0x89a2,	// (0x000422a2) video4_image_uncrop_cif_pane_ParamLimits

0x89a2,	// (0x000422a2) video4_image_uncrop_cif_pane

0x89ba,	// (0x000422ba) video4_image_uncrop_nhd_pane_ParamLimits

0x89ba,	// (0x000422ba) video4_image_uncrop_nhd_pane

0x89ce,	// (0x000422ce) video4_image_uncrop_vga_pane_ParamLimits

0x89ce,	// (0x000422ce) video4_image_uncrop_vga_pane

0xd2e0,	// (0x00046be0) bg_tb_trans_pane_cp07

0x89e6,	// (0x000422e6) vid4_indicators_pane_g1

0x89f3,	// (0x000422f3) vid4_indicators_pane_g2

0x8a00,	// (0x00042300) vid4_indicators_pane_g3

0x0004,

0xf93b,	// (0x0004923b) vid4_indicators_pane_g

0x8a25,	// (0x00042325) vid4_indicators_pane_t1

0x8a37,	// (0x00042337) cam4_autofocus_pane_g1

0x8a3f,	// (0x0004233f) cam4_autofocus_pane_g2

0x8a47,	// (0x00042347) cam4_autofocus_pane_g3

0x0002,

0xf946,	// (0x00049246) cam4_autofocus_pane_g

0x8a4f,	// (0x0004234f) cam4_autofocus_pane_g3_copy1

0x836b,	// (0x00041c6b) video_down_pane_cp_t1

0x8379,	// (0x00041c79) video_down_pane_cp_t2

0x0001,

0xf8c2,	// (0x000491c2) video_down_pane_cp_t

0x1c39,	// (0x0003b539) popup_vitu2_window_ParamLimits

0x1c39,	// (0x0003b539) popup_vitu2_window

0x8a57,	// (0x00042357) aid_size_cell2_itu2_ParamLimits

0x8a57,	// (0x00042357) aid_size_cell2_itu2

0x8a7d,	// (0x0004237d) aid_size_cell_itu2_ParamLimits

0x8a7d,	// (0x0004237d) aid_size_cell_itu2

0x8acf,	// (0x000423cf) bg_popup_window_pane_cp09_ParamLimits

0x8acf,	// (0x000423cf) bg_popup_window_pane_cp09

0x8add,	// (0x000423dd) field_vitu2_entry_pane_ParamLimits

0x8add,	// (0x000423dd) field_vitu2_entry_pane

0x8af7,	// (0x000423f7) grid_vitu2_function_pane_ParamLimits

0x8af7,	// (0x000423f7) grid_vitu2_function_pane

0x8b32,	// (0x00042432) grid_vitu2_itu_pane_ParamLimits

0x8b32,	// (0x00042432) grid_vitu2_itu_pane

0x8b97,	// (0x00042497) cell_vitu2_itu_pane_ParamLimits

0x8b97,	// (0x00042497) cell_vitu2_itu_pane

0x8bb9,	// (0x000424b9) cell_vitu2_function_pane_ParamLimits

0x8bb9,	// (0x000424b9) cell_vitu2_function_pane

0xd2ee,	// (0x00046bee) bg_popup_call_pane_cp08_ParamLimits

0xd2ee,	// (0x00046bee) bg_popup_call_pane_cp08

0xd307,	// (0x00046c07) field_vitu2_entry_pane_g1

0xd313,	// (0x00046c13) field_vitu2_entry_pane_g2

0x0002,

0xf94d,	// (0x0004924d) field_vitu2_entry_pane_g

0xd32d,	// (0x00046c2d) field_vitu2_entry_pane_t1_ParamLimits

0xd32d,	// (0x00046c2d) field_vitu2_entry_pane_t1

0xd349,	// (0x00046c49) field_vitu2_entry_pane_t2_ParamLimits

0xd349,	// (0x00046c49) field_vitu2_entry_pane_t2

0x0001,

0xf954,	// (0x00049254) field_vitu2_entry_pane_t_ParamLimits

0xf954,	// (0x00049254) field_vitu2_entry_pane_t

0x8bf8,	// (0x000424f8) bg_button_pane_cp010_ParamLimits

0x8bf8,	// (0x000424f8) bg_button_pane_cp010

0x8c06,	// (0x00042506) cell_vitu2_itu_pane_g1

0x8c24,	// (0x00042524) cell_vitu2_itu_pane_t1_ParamLimits

0x8c24,	// (0x00042524) cell_vitu2_itu_pane_t1

0x2c37,	// (0x0003c537) cell_vitu2_itu_pane_t2_ParamLimits

0x2c37,	// (0x0003c537) cell_vitu2_itu_pane_t2

0x0002,

0xf95e,	// (0x0004925e) cell_vitu2_itu_pane_t_ParamLimits

0xf95e,	// (0x0004925e) cell_vitu2_itu_pane_t

0x1c39,	// (0x0003b539) bg_button_pane_cp011

0x8c8a,	// (0x0004258a) cell_vitu2_function_pane_g1

0x0f8a,	// (0x0003a88a) main_myfav_hc_pane

0x86c6,	// (0x00041fc6) popup_image3_note_pane_ParamLimits

0x86c6,	// (0x00041fc6) popup_image3_note_pane

0x86e0,	// (0x00041fe0) popup_image3_tool_bar_pane_ParamLimits

0x86e0,	// (0x00041fe0) popup_image3_tool_bar_pane

0x2cbb,	// (0x0003c5bb) cell_vitu2_itu_pane_t3_ParamLimits

0x2cbb,	// (0x0003c5bb) cell_vitu2_itu_pane_t3

0x0f8a,	// (0x0003a88a) bg_popup_trans_pane

0xd36e,	// (0x00046c6e) grid_image3_tool_bar_pane

0xd378,	// (0x00046c78) bg_popup_trans_pane_g1

0x1b2c,	// (0x0003b42c) bg_popup_trans_pane_g2

0xd380,	// (0x00046c80) bg_popup_trans_pane_g3

0xd388,	// (0x00046c88) bg_popup_trans_pane_g4

0xd390,	// (0x00046c90) bg_popup_trans_pane_g5

0xd398,	// (0x00046c98) bg_popup_trans_pane_g6

0xd3a0,	// (0x00046ca0) bg_popup_trans_pane_g7

0xd3a8,	// (0x00046ca8) bg_popup_trans_pane_g8

0x1b0c,	// (0x0003b40c) bg_popup_trans_pane_g9

0x0008,

0xf965,	// (0x00049265) bg_popup_trans_pane_g

0x3a9d,	// (0x0003d39d) cell_image3_tool_bar_pane_ParamLimits

0x3a9d,	// (0x0003d39d) cell_image3_tool_bar_pane

0xc965,	// (0x00046265) cell_image3_tool_bar_pane_g1

0x0f8a,	// (0x0003a88a) bg_popup_trans_pane_cp1

0xd3b0,	// (0x00046cb0) popup_image3_note_pane_t1

0xd3be,	// (0x00046cbe) popup_image3_note_pane_t2

0xd3cc,	// (0x00046ccc) popup_image3_note_pane_t3

0x0002,

0xf978,	// (0x00049278) popup_image3_note_pane_t

0xd3da,	// (0x00046cda) popup_image3_note_pane_t3_copy1

0x8c9e,	// (0x0004259e) bg_myfav_hc_instruction_pane_ParamLimits

0x8c9e,	// (0x0004259e) bg_myfav_hc_instruction_pane

0x8cb0,	// (0x000425b0) cell_myfav_contact_pane_ParamLimits

0x8cb0,	// (0x000425b0) cell_myfav_contact_pane

0x8cca,	// (0x000425ca) cell_myfav_contact_pane_cp1_ParamLimits

0x8cca,	// (0x000425ca) cell_myfav_contact_pane_cp1

0x8ce0,	// (0x000425e0) cell_myfav_contact_pane_cp2_ParamLimits

0x8ce0,	// (0x000425e0) cell_myfav_contact_pane_cp2

0x8cf6,	// (0x000425f6) cell_myfav_contact_pane_cp3_ParamLimits

0x8cf6,	// (0x000425f6) cell_myfav_contact_pane_cp3

0x8d0b,	// (0x0004260b) cell_myfav_contact_pane_cp4_ParamLimits

0x8d0b,	// (0x0004260b) cell_myfav_contact_pane_cp4

0x8d1f,	// (0x0004261f) cell_myfav_contact_pane_cp5_ParamLimits

0x8d1f,	// (0x0004261f) cell_myfav_contact_pane_cp5

0x8d33,	// (0x00042633) cell_myfav_contact_pane_cp6_ParamLimits

0x8d33,	// (0x00042633) cell_myfav_contact_pane_cp6

0x8d47,	// (0x00042647) cell_myfav_contact_pane_cp7_ParamLimits

0x8d47,	// (0x00042647) cell_myfav_contact_pane_cp7

0xd3e8,	// (0x00046ce8) listscroll_gen_pane_cp05

0x8d5f,	// (0x0004265f) main_myfav_hc_pane_g1_ParamLimits

0x8d5f,	// (0x0004265f) main_myfav_hc_pane_g1

0x8d75,	// (0x00042675) main_myfav_hc_pane_g2_ParamLimits

0x8d75,	// (0x00042675) main_myfav_hc_pane_g2

0x0002,

0xf97f,	// (0x0004927f) main_myfav_hc_pane_g_ParamLimits

0xf97f,	// (0x0004927f) main_myfav_hc_pane_g

0x8d9f,	// (0x0004269f) main_myfav_hc_pane_t1_ParamLimits

0x8d9f,	// (0x0004269f) main_myfav_hc_pane_t1

0xd3f1,	// (0x00046cf1) main_myfav_hc_pane_t2_ParamLimits

0xd3f1,	// (0x00046cf1) main_myfav_hc_pane_t2

0xd403,	// (0x00046d03) main_myfav_hc_pane_t3_ParamLimits

0xd403,	// (0x00046d03) main_myfav_hc_pane_t3

0x8db4,	// (0x000426b4) main_myfav_hc_pane_t4_ParamLimits

0x8db4,	// (0x000426b4) main_myfav_hc_pane_t4

0x0004,

0xf986,	// (0x00049286) main_myfav_hc_pane_t_ParamLimits

0xf986,	// (0x00049286) main_myfav_hc_pane_t

0xc965,	// (0x00046265) bg_myfav_hc_instruction_pane_g1

0xd415,	// (0x00046d15) cell_myfav_contact_pane_g1_ParamLimits

0xd415,	// (0x00046d15) cell_myfav_contact_pane_g1

0xd415,	// (0x00046d15) cell_myfav_contact_pane_g2_ParamLimits

0xd415,	// (0x00046d15) cell_myfav_contact_pane_g2

0xd421,	// (0x00046d21) cell_myfav_contact_pane_g3_ParamLimits

0xd421,	// (0x00046d21) cell_myfav_contact_pane_g3

0xcc6d,	// (0x0004656d) cell_myfav_contact_pane_g4_ParamLimits

0xcc6d,	// (0x0004656d) cell_myfav_contact_pane_g4

0xd42e,	// (0x00046d2e) cell_myfav_contact_pane_g5_ParamLimits

0xd42e,	// (0x00046d2e) cell_myfav_contact_pane_g5

0x0004,

0xf991,	// (0x00049291) cell_myfav_contact_pane_g_ParamLimits

0xf991,	// (0x00049291) cell_myfav_contact_pane_g

0x8d8b,	// (0x0004268b) main_myfav_hc_pane_g3_ParamLimits

0x8d8b,	// (0x0004268b) main_myfav_hc_pane_g3

0x35a5,	// (0x0003cea5) popup_adpt_find_window

0x8dd8,	// (0x000426d8) afind_page_pane_ParamLimits

0x8dd8,	// (0x000426d8) afind_page_pane

0x8ded,	// (0x000426ed) aid_size_cell_afind_ParamLimits

0x8ded,	// (0x000426ed) aid_size_cell_afind

0x8e0b,	// (0x0004270b) bg_popup_sub_pane_cp09_ParamLimits

0x8e0b,	// (0x0004270b) bg_popup_sub_pane_cp09

0x8e18,	// (0x00042718) find_pane_cp01_ParamLimits

0x8e18,	// (0x00042718) find_pane_cp01

0xd43a,	// (0x00046d3a) grid_afind_control_pane_ParamLimits

0xd43a,	// (0x00046d3a) grid_afind_control_pane

0x8e25,	// (0x00042725) grid_afind_pane_ParamLimits

0x8e25,	// (0x00042725) grid_afind_pane

0x8e43,	// (0x00042743) cell_afind_pane_ParamLimits

0x8e43,	// (0x00042743) cell_afind_pane

0xc965,	// (0x00046265) afind_page_pane_g1

0x8e90,	// (0x00042790) afind_page_pane_g2

0x8e99,	// (0x00042799) afind_page_pane_g3

0x0002,

0xf99c,	// (0x0004929c) afind_page_pane_g

0x8ea2,	// (0x000427a2) afind_page_pane_t1

0xd44e,	// (0x00046d4e) cell_afind_grid_control_pane_ParamLimits

0xd44e,	// (0x00046d4e) cell_afind_grid_control_pane

0xd21f,	// (0x00046b1f) bg_button_pane_cp69_ParamLimits

0xd21f,	// (0x00046b1f) bg_button_pane_cp69

0x8ec2,	// (0x000427c2) cell_afind_pane_g1_ParamLimits

0x8ec2,	// (0x000427c2) cell_afind_pane_g1

0x8ecf,	// (0x000427cf) cell_afind_pane_t1_ParamLimits

0x8ecf,	// (0x000427cf) cell_afind_pane_t1

0x1918,	// (0x0003b218) bg_button_pane_cp72

0xd45d,	// (0x00046d5d) cell_afind_grid_control_pane_g1

0x6392,	// (0x0003fc92) aid_image_placing_area_ParamLimits

0x6392,	// (0x0003fc92) aid_image_placing_area

0xcef9,	// (0x000467f9) field_vitu_entry_pane_g1_ParamLimits

0xcef9,	// (0x000467f9) field_vitu_entry_pane_g1

0xcf05,	// (0x00046805) field_vitu_entry_pane_g2_ParamLimits

0xcf05,	// (0x00046805) field_vitu_entry_pane_g2

0x0001,

0xf84d,	// (0x0004914d) field_vitu_entry_pane_g_ParamLimits

0xf84d,	// (0x0004914d) field_vitu_entry_pane_g

0x81a0,	// (0x00041aa0) cell_vitu_itu_pane_g1_ParamLimits

0x81e2,	// (0x00041ae2) cell_vitu_itu_pane_t3_ParamLimits

0x81e2,	// (0x00041ae2) cell_vitu_itu_pane_t3

0xd1d3,	// (0x00046ad3) mp4_progress_pane_t1_ParamLimits

0xd1ea,	// (0x00046aea) mp4_progress_pane_t2_ParamLimits

0xf8e2,	// (0x000491e2) mp4_progress_pane_t_ParamLimits

0xd201,	// (0x00046b01) mup_progress_pane_cp04_ParamLimits

0x8dc6,	// (0x000426c6) main_myfav_hc_pane_t5_ParamLimits

0x8dc6,	// (0x000426c6) main_myfav_hc_pane_t5

0x0fa4,	// (0x0003a8a4) aid_zoom_text_primary

0x35a5,	// (0x0003cea5) popup_adpt_find_window_ParamLimits

0x1c39,	// (0x0003b539) main_cam_set_pane

0x8893,	// (0x00042193) cam4_zoom_pane_ParamLimits

0x8893,	// (0x00042193) cam4_zoom_pane

0x8ee1,	// (0x000427e1) main_cam_set_pane_g1_ParamLimits

0x8ee1,	// (0x000427e1) main_cam_set_pane_g1

0x8eef,	// (0x000427ef) main_cam_set_pane_g2_ParamLimits

0x8eef,	// (0x000427ef) main_cam_set_pane_g2

0x0001,

0xf9a3,	// (0x000492a3) main_cam_set_pane_g_ParamLimits

0xf9a3,	// (0x000492a3) main_cam_set_pane_g

0x8f0e,	// (0x0004280e) main_cam_set_pane_t1_ParamLimits

0x8f0e,	// (0x0004280e) main_cam_set_pane_t1

0x8f20,	// (0x00042820) main_cset_listscroll_pane_ParamLimits

0x8f20,	// (0x00042820) main_cset_listscroll_pane

0x8f3e,	// (0x0004283e) main_cset_slider_pane_ParamLimits

0x8f3e,	// (0x0004283e) main_cset_slider_pane

0xd46e,	// (0x00046d6e) main_cset_list_pane_ParamLimits

0xd46e,	// (0x00046d6e) main_cset_list_pane

0xd47e,	// (0x00046d7e) scroll_pane_cp028

0x8f62,	// (0x00042862) aid_area_touch_slider

0x8f7e,	// (0x0004287e) cset_slider_pane

0x8fa8,	// (0x000428a8) main_cset_slider_pane_g1

0x8fbd,	// (0x000428bd) main_cset_slider_pane_g2

0x0011,

0xf9a8,	// (0x000492a8) main_cset_slider_pane_g

0xd4b7,	// (0x00046db7) main_cset_slider_pane_t1

0x9079,	// (0x00042979) main_cset_slider_pane_t2

0x9093,	// (0x00042993) main_cset_slider_pane_t3

0x90ad,	// (0x000429ad) main_cset_slider_pane_t4

0x90c7,	// (0x000429c7) main_cset_slider_pane_t5

0x90e1,	// (0x000429e1) main_cset_slider_pane_t6

0x90f6,	// (0x000429f6) main_cset_slider_pane_t7

0x000e,

0xf9cd,	// (0x000492cd) main_cset_slider_pane_t

0x91fa,	// (0x00042afa) cset_list_set_pane_ParamLimits

0x91fa,	// (0x00042afa) cset_list_set_pane

0x920b,	// (0x00042b0b) aid_position_infowindow_above

0x9213,	// (0x00042b13) aid_position_infowindow_below

0xd557,	// (0x00046e57) cset_list_set_pane_g1_ParamLimits

0xd557,	// (0x00046e57) cset_list_set_pane_g1

0x2d13,	// (0x0003c613) cset_list_set_pane_g3_ParamLimits

0x2d13,	// (0x0003c613) cset_list_set_pane_g3

0x0001,

0xf9ec,	// (0x000492ec) cset_list_set_pane_g_ParamLimits

0xf9ec,	// (0x000492ec) cset_list_set_pane_g

0xd563,	// (0x00046e63) cset_list_set_pane_t1_ParamLimits

0xd563,	// (0x00046e63) cset_list_set_pane_t1

0x1c39,	// (0x0003b539) list_highlight_pane_cp021_ParamLimits

0x1c39,	// (0x0003b539) list_highlight_pane_cp021

0x5d31,	// (0x0003f631) cset_slider_pane_g1

0x5d43,	// (0x0003f643) cset_slider_pane_g2

0x5d3a,	// (0x0003f63a) cset_slider_pane_g3

0x0002,

0xf9f1,	// (0x000492f1) cset_slider_pane_g

0xeffb,	// (0x000488fb) aid_area_touch_cam4_zoom

0xf003,	// (0x00048903) cam4_zoom_cont_pane

0xf00b,	// (0x0004890b) cam4_zoom_pane_g1

0xf013,	// (0x00048913) cam4_zoom_pane_g2

0x921b,	// (0x00042b1b) cam4_zoom_pane_g3

0x0002,

0xf9f8,	// (0x000492f8) cam4_zoom_pane_g

0xd578,	// (0x00046e78) cam4_zoom_cont_pane_g1

0xd581,	// (0x00046e81) cam4_zoom_cont_pane_g2

0xd58a,	// (0x00046e8a) cam4_zoom_cont_pane_g3

0x0002,

0xf9ff,	// (0x000492ff) cam4_zoom_cont_pane_g

0x874b,	// (0x0004204b) call4_image_pane_ParamLimits

0x874b,	// (0x0004204b) call4_image_pane

0xd243,	// (0x00046b43) call4_windows_conf_pane_ParamLimits

0xd256,	// (0x00046b56) popup_call4_audio_in_window_ParamLimits

0xd256,	// (0x00046b56) popup_call4_audio_in_window

0x0f8a,	// (0x0003a88a) bg_popup_call2_act_pane_cp02

0xd2b4,	// (0x00046bb4) call4_list_conf_pane

0xc965,	// (0x00046265) call4_image_pane_g1

0xc965,	// (0x00046265) call4_image_pane_g2

0x0001,

0xf713,	// (0x00049013) call4_image_pane_g

0xd593,	// (0x00046e93) list_single_graphic_popup_conf4_pane_ParamLimits

0xd593,	// (0x00046e93) list_single_graphic_popup_conf4_pane

0x0f8a,	// (0x0003a88a) list_highlight_pane_cp022

0xd5a6,	// (0x00046ea6) list_single_graphic_popup_conf4_pane_g1

0x534f,	// (0x0003ec4f) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xfa06,	// (0x00049306) list_single_graphic_popup_conf4_pane_g

0xd5ae,	// (0x00046eae) list_single_graphic_popup_conf4_pane_t1

0x43a0,	// (0x0003dca0) popup_vtel_slider_window_ParamLimits

0x43a0,	// (0x0003dca0) popup_vtel_slider_window

0xd20d,	// (0x00046b0d) dialer2_ne_pane_t2_ParamLimits

0xd20d,	// (0x00046b0d) dialer2_ne_pane_t2

0x0001,

0xf8e7,	// (0x000491e7) dialer2_ne_pane_t_ParamLimits

0xf8e7,	// (0x000491e7) dialer2_ne_pane_t

0xc752,	// (0x00046052) bg_popup_sub_pane_cp010_ParamLimits

0xc752,	// (0x00046052) bg_popup_sub_pane_cp010

0x9223,	// (0x00042b23) popup_vtel_slider_window_g1_ParamLimits

0x9223,	// (0x00042b23) popup_vtel_slider_window_g1

0x9236,	// (0x00042b36) popup_vtel_slider_window_g2_ParamLimits

0x9236,	// (0x00042b36) popup_vtel_slider_window_g2

0x0003,

0xfa0b,	// (0x0004930b) popup_vtel_slider_window_g_ParamLimits

0xfa0b,	// (0x0004930b) popup_vtel_slider_window_g

0x928a,	// (0x00042b8a) vtel_slider_pane_ParamLimits

0x928a,	// (0x00042b8a) vtel_slider_pane

0x92ac,	// (0x00042bac) vtel_slider_pane_g1_ParamLimits

0x92ac,	// (0x00042bac) vtel_slider_pane_g1

0x92c0,	// (0x00042bc0) vtel_slider_pane_g2_ParamLimits

0x92c0,	// (0x00042bc0) vtel_slider_pane_g2

0x92d8,	// (0x00042bd8) vtel_slider_pane_g3_ParamLimits

0x92d8,	// (0x00042bd8) vtel_slider_pane_g3

0x92ac,	// (0x00042bac) vtel_slider_pane_g4_ParamLimits

0x92ac,	// (0x00042bac) vtel_slider_pane_g4

0x92ee,	// (0x00042bee) vtel_slider_pane_g5_ParamLimits

0x92ee,	// (0x00042bee) vtel_slider_pane_g5

0x0004,

0xfa14,	// (0x00049314) vtel_slider_pane_g_ParamLimits

0xfa14,	// (0x00049314) vtel_slider_pane_g

0x0f8a,	// (0x0003a88a) main_gallery2_pane

0x8aa9,	// (0x000423a9) aid_size_row_itut2_dropdow_list_ParamLimits

0x8aa9,	// (0x000423a9) aid_size_row_itut2_dropdow_list

0x8b13,	// (0x00042413) grid_vitu2_function_top_pane_ParamLimits

0x8b13,	// (0x00042413) grid_vitu2_function_top_pane

0x8b56,	// (0x00042456) popup_vitu2_dropdown_list_window_ParamLimits

0x8b56,	// (0x00042456) popup_vitu2_dropdown_list_window

0x8b75,	// (0x00042475) popup_vitu2_match_list_window

0x9304,	// (0x00042c04) cell_vitu2_function_top_pane_ParamLimits

0x9304,	// (0x00042c04) cell_vitu2_function_top_pane

0x9324,	// (0x00042c24) cell_vitu2_function_top_pane_cp01_ParamLimits

0x9324,	// (0x00042c24) cell_vitu2_function_top_pane_cp01

0x9344,	// (0x00042c44) cell_vitu2_function_top_wide_pane_ParamLimits

0x9344,	// (0x00042c44) cell_vitu2_function_top_wide_pane

0x1c39,	// (0x0003b539) bg_button_pane_cp012

0x9362,	// (0x00042c62) cell_vitu2_function_top_pane_g1

0xf01b,	// (0x0004891b) bg_button_pane_cp013_ParamLimits

0xf01b,	// (0x0004891b) bg_button_pane_cp013

0x9376,	// (0x00042c76) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x9376,	// (0x00042c76) cell_vitu2_function_top_wide_pane_g1

0x1c39,	// (0x0003b539) bg_popup_sub_pane_cp20

0x938e,	// (0x00042c8e) list_vitu2_match_list_pane

0xd378,	// (0x00046c78) bg_popup_sub_pane_cp20_g1

0xd380,	// (0x00046c80) bg_popup_sub_pane_cp20_g2

0x1b2c,	// (0x0003b42c) bg_popup_sub_pane_cp20_g3

0xd388,	// (0x00046c88) bg_popup_sub_pane_cp20_g4

0x1b0c,	// (0x0003b40c) bg_popup_sub_pane_cp20_g5

0xd5d2,	// (0x00046ed2) bg_popup_sub_pane_cp20_g6

0xd398,	// (0x00046c98) bg_popup_sub_pane_cp20_g7

0xd3a0,	// (0x00046ca0) bg_popup_sub_pane_cp20_g8

0xd3a8,	// (0x00046ca8) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa1f,	// (0x0004931f) bg_popup_sub_pane_cp20_g

0xf037,	// (0x00048937) list_vitu2_match_list_item_pane_ParamLimits

0xf037,	// (0x00048937) list_vitu2_match_list_item_pane

0xf049,	// (0x00048949) list_vitu2_match_list_item_pane_t1

0x0f8a,	// (0x0003a88a) bg_popup_sub_pane_cp21

0x5258,	// (0x0003eb58) grid_vitu2_dropdown_list_pane

0x93ac,	// (0x00042cac) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x93ac,	// (0x00042cac) cell_vitu2_dropdown_list_char_pane

0x93cd,	// (0x00042ccd) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x93cd,	// (0x00042ccd) cell_vitu2_dropdown_list_ctrl_pane

0xd5da,	// (0x00046eda) cell_vitu2_dropdown_list_char_pane_g1

0xd5e3,	// (0x00046ee3) cell_vitu2_dropdown_list_char_pane_g2

0xd5ec,	// (0x00046eec) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa3c,	// (0x0004933c) cell_vitu2_dropdown_list_char_pane_g

0x93f9,	// (0x00042cf9) cell_vitu2_dropdown_list_char_pane_t1

0x9407,	// (0x00042d07) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x9407,	// (0x00042d07) cell_vitu2_dropdown_list_ctrl_pane_g1

0x9414,	// (0x00042d14) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x9414,	// (0x00042d14) cell_vitu2_dropdown_list_ctrl_pane_g2

0x9421,	// (0x00042d21) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x9421,	// (0x00042d21) cell_vitu2_dropdown_list_ctrl_pane_g3

0x942e,	// (0x00042d2e) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x942e,	// (0x00042d2e) cell_vitu2_dropdown_list_ctrl_pane_g4

0xcb94,	// (0x00046494) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xcb94,	// (0x00046494) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa43,	// (0x00049343) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa43,	// (0x00049343) cell_vitu2_dropdown_list_ctrl_pane_g

0x944a,	// (0x00042d4a) aid_size_cell_gallery2_ParamLimits

0x944a,	// (0x00042d4a) aid_size_cell_gallery2

0x9460,	// (0x00042d60) grid_gallery2_pane_ParamLimits

0x9460,	// (0x00042d60) grid_gallery2_pane

0x9472,	// (0x00042d72) scroll_pane_cp029_ParamLimits

0x9472,	// (0x00042d72) scroll_pane_cp029

0x947e,	// (0x00042d7e) cell_gallery2_pane_ParamLimits

0x947e,	// (0x00042d7e) cell_gallery2_pane

0xd5f5,	// (0x00046ef5) cell_gallery2_pane_g2

0x94b0,	// (0x00042db0) cell_gallery2_pane_g3

0xd5ff,	// (0x00046eff) cell_gallery2_pane_g4

0xd607,	// (0x00046f07) cell_gallery2_pane_g5

0x5855,	// (0x0003f155) grid_highlight_pane_cp10

0x8b75,	// (0x00042475) popup_vitu2_match_list_window_ParamLimits

0x8b86,	// (0x00042486) popup_vitu2_query_window_ParamLimits

0x8b86,	// (0x00042486) popup_vitu2_query_window

0x0f8a,	// (0x0003a88a) bg_vitu2_candi_button_pane

0xd5da,	// (0x00046eda) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd5e3,	// (0x00046ee3) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd5ec,	// (0x00046eec) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x2d4e,	// (0x0003c64e) bg_button_pane_cp015

0x94b8,	// (0x00042db8) bg_button_pane_cp016

0x94ca,	// (0x00042dca) bg_button_pane_cp017

0xc52a,	// (0x00045e2a) bg_popup_sub_pane_cp22

0xd60f,	// (0x00046f0f) popup_vitu2_query_window_g1

0x2d7d,	// (0x0003c67d) popup_vitu2_query_window_g2

0x0002,

0xfa4e,	// (0x0004934e) popup_vitu2_query_window_g

0x2d98,	// (0x0003c698) popup_vitu2_query_window_t1_ParamLimits

0x2d98,	// (0x0003c698) popup_vitu2_query_window_t1

0x2dcb,	// (0x0003c6cb) popup_vitu2_query_window_t2_ParamLimits

0x2dcb,	// (0x0003c6cb) popup_vitu2_query_window_t2

0x2ddd,	// (0x0003c6dd) popup_vitu2_query_window_t3_ParamLimits

0x2ddd,	// (0x0003c6dd) popup_vitu2_query_window_t3

0x94ec,	// (0x00042dec) popup_vitu2_query_window_t4_ParamLimits

0x94ec,	// (0x00042dec) popup_vitu2_query_window_t4

0x9509,	// (0x00042e09) popup_vitu2_query_window_t5_ParamLimits

0x9509,	// (0x00042e09) popup_vitu2_query_window_t5

0x0006,

0xfa55,	// (0x00049355) popup_vitu2_query_window_t_ParamLimits

0xfa55,	// (0x00049355) popup_vitu2_query_window_t

0xd466,	// (0x00046d66) main_cset_text_pane

0x8f62,	// (0x00042862) aid_area_touch_slider_ParamLimits

0x8f7e,	// (0x0004287e) cset_slider_pane_ParamLimits

0x8fa8,	// (0x000428a8) main_cset_slider_pane_g1_ParamLimits

0x8fbd,	// (0x000428bd) main_cset_slider_pane_g2_ParamLimits

0xd487,	// (0x00046d87) main_cset_slider_pane_g3_ParamLimits

0xd487,	// (0x00046d87) main_cset_slider_pane_g3

0x8fd2,	// (0x000428d2) main_cset_slider_pane_g4_ParamLimits

0x8fd2,	// (0x000428d2) main_cset_slider_pane_g4

0x8fe1,	// (0x000428e1) main_cset_slider_pane_g5_ParamLimits

0x8fe1,	// (0x000428e1) main_cset_slider_pane_g5

0x8fed,	// (0x000428ed) main_cset_slider_pane_g6_ParamLimits

0x8fed,	// (0x000428ed) main_cset_slider_pane_g6

0xf9a8,	// (0x000492a8) main_cset_slider_pane_g_ParamLimits

0xd4b7,	// (0x00046db7) main_cset_slider_pane_t1_ParamLimits

0x9079,	// (0x00042979) main_cset_slider_pane_t2_ParamLimits

0x9093,	// (0x00042993) main_cset_slider_pane_t3_ParamLimits

0x90ad,	// (0x000429ad) main_cset_slider_pane_t4_ParamLimits

0x90c7,	// (0x000429c7) main_cset_slider_pane_t5_ParamLimits

0x90e1,	// (0x000429e1) main_cset_slider_pane_t6_ParamLimits

0x90f6,	// (0x000429f6) main_cset_slider_pane_t7_ParamLimits

0x9120,	// (0x00042a20) main_cset_slider_pane_t8_ParamLimits

0x9120,	// (0x00042a20) main_cset_slider_pane_t8

0x9148,	// (0x00042a48) main_cset_slider_pane_t9_ParamLimits

0x9148,	// (0x00042a48) main_cset_slider_pane_t9

0x9170,	// (0x00042a70) main_cset_slider_pane_t10_ParamLimits

0x9170,	// (0x00042a70) main_cset_slider_pane_t10

0x9198,	// (0x00042a98) main_cset_slider_pane_t11_ParamLimits

0x9198,	// (0x00042a98) main_cset_slider_pane_t11

0x91c0,	// (0x00042ac0) main_cset_slider_pane_t12_ParamLimits

0x91c0,	// (0x00042ac0) main_cset_slider_pane_t12

0x91dd,	// (0x00042add) main_cset_slider_pane_t13_ParamLimits

0x91dd,	// (0x00042add) main_cset_slider_pane_t13

0xf9cd,	// (0x000492cd) main_cset_slider_pane_t_ParamLimits

0x0f8a,	// (0x0003a88a) bg_popup_sub_pane_cp011

0xd61b,	// (0x00046f1b) main_cset_text_pane_g1

0xd623,	// (0x00046f23) main_cset_text_pane_t1

0xd631,	// (0x00046f31) main_cset_text_pane_t2

0xd63f,	// (0x00046f3f) main_cset_text_pane_t3

0xd64d,	// (0x00046f4d) main_cset_text_pane_t4

0xd65b,	// (0x00046f5b) main_cset_text_pane_t5

0xd669,	// (0x00046f69) main_cset_text_pane_t6

0xd677,	// (0x00046f77) main_cset_text_pane_t7

0x0006,

0xfa64,	// (0x00049364) main_cset_text_pane_t

0x0f8a,	// (0x0003a88a) main_cam4_burst_pane

0x0f8a,	// (0x0003a88a) main_cam5_pane

0x8eb0,	// (0x000427b0) bg_button_pane_cp019

0x8eb9,	// (0x000427b9) bg_button_pane_cp020

0xd493,	// (0x00046d93) main_cset_slider_pane_g7_ParamLimits

0xd493,	// (0x00046d93) main_cset_slider_pane_g7

0xd49f,	// (0x00046d9f) main_cset_slider_pane_g8_ParamLimits

0xd49f,	// (0x00046d9f) main_cset_slider_pane_g8

0x9001,	// (0x00042901) main_cset_slider_pane_g9_ParamLimits

0x9001,	// (0x00042901) main_cset_slider_pane_g9

0x900d,	// (0x0004290d) main_cset_slider_pane_g10_ParamLimits

0x900d,	// (0x0004290d) main_cset_slider_pane_g10

0x9019,	// (0x00042919) main_cset_slider_pane_g11_ParamLimits

0x9019,	// (0x00042919) main_cset_slider_pane_g11

0x9025,	// (0x00042925) main_cset_slider_pane_g12_ParamLimits

0x9025,	// (0x00042925) main_cset_slider_pane_g12

0x9031,	// (0x00042931) main_cset_slider_pane_g13_ParamLimits

0x9031,	// (0x00042931) main_cset_slider_pane_g13

0x903d,	// (0x0004293d) main_cset_slider_pane_g14_ParamLimits

0x903d,	// (0x0004293d) main_cset_slider_pane_g14

0x9049,	// (0x00042949) main_cset_slider_pane_g15_ParamLimits

0x9049,	// (0x00042949) main_cset_slider_pane_g15

0xd4e5,	// (0x00046de5) main_cset_slider_pane_t14_ParamLimits

0xd4e5,	// (0x00046de5) main_cset_slider_pane_t14

0xd51e,	// (0x00046e1e) main_cset_slider_pane_t15_ParamLimits

0xd51e,	// (0x00046e1e) main_cset_slider_pane_t15

0x9526,	// (0x00042e26) aid_cam4_burst_size_cell_ParamLimits

0x9526,	// (0x00042e26) aid_cam4_burst_size_cell

0x9546,	// (0x00042e46) grid_cam4_burst_pane_ParamLimits

0x9546,	// (0x00042e46) grid_cam4_burst_pane

0x956c,	// (0x00042e6c) linegrid_cam4_burst_pane_ParamLimits

0x956c,	// (0x00042e6c) linegrid_cam4_burst_pane

0x958e,	// (0x00042e8e) scroll_pane_cp30_ParamLimits

0x958e,	// (0x00042e8e) scroll_pane_cp30

0x959a,	// (0x00042e9a) cell_cam4_burst_pane_ParamLimits

0x959a,	// (0x00042e9a) cell_cam4_burst_pane

0xd685,	// (0x00046f85) linegrid_cam4_burst_pane_g1_ParamLimits

0xd685,	// (0x00046f85) linegrid_cam4_burst_pane_g1

0x95e1,	// (0x00042ee1) linegrid_cam4_burst_pane_g2_ParamLimits

0x95e1,	// (0x00042ee1) linegrid_cam4_burst_pane_g2

0xd692,	// (0x00046f92) linegrid_cam4_burst_pane_g3_ParamLimits

0xd692,	// (0x00046f92) linegrid_cam4_burst_pane_g3

0x0002,

0xfa73,	// (0x00049373) linegrid_cam4_burst_pane_g_ParamLimits

0xfa73,	// (0x00049373) linegrid_cam4_burst_pane_g

0x95f2,	// (0x00042ef2) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x95f2,	// (0x00042ef2) linegrid_cam4_burst_pane_g3_copy1

0xd69f,	// (0x00046f9f) linegrid_cam4_burst_pane_g4_ParamLimits

0xd69f,	// (0x00046f9f) linegrid_cam4_burst_pane_g4

0x960c,	// (0x00042f0c) linegrid_cam4_burst_pane_g5_ParamLimits

0x960c,	// (0x00042f0c) linegrid_cam4_burst_pane_g5

0x961d,	// (0x00042f1d) linegrid_cam4_burst_pane_g6_ParamLimits

0x961d,	// (0x00042f1d) linegrid_cam4_burst_pane_g6

0xd6ac,	// (0x00046fac) linegrid_cam4_burst_pane_g7_ParamLimits

0xd6ac,	// (0x00046fac) linegrid_cam4_burst_pane_g7

0x962e,	// (0x00042f2e) cell_cam4_burst_pane_g1

0xd6c5,	// (0x00046fc5) main_cam5_pane_t1_ParamLimits

0xd6c5,	// (0x00046fc5) main_cam5_pane_t1

0xd6d7,	// (0x00046fd7) main_cam5_pane_t2_ParamLimits

0xd6d7,	// (0x00046fd7) main_cam5_pane_t2

0xd6e9,	// (0x00046fe9) main_cam5_pane_t3_ParamLimits

0xd6e9,	// (0x00046fe9) main_cam5_pane_t3

0xd6fb,	// (0x00046ffb) main_cam5_pane_t4_ParamLimits

0xd6fb,	// (0x00046ffb) main_cam5_pane_t4

0xd711,	// (0x00047011) main_cam5_pane_t5_ParamLimits

0xd711,	// (0x00047011) main_cam5_pane_t5

0xd723,	// (0x00047023) main_cam5_pane_t6_ParamLimits

0xd723,	// (0x00047023) main_cam5_pane_t6

0xd735,	// (0x00047035) main_cam5_pane_t7_ParamLimits

0xd735,	// (0x00047035) main_cam5_pane_t7

0xd747,	// (0x00047047) main_cam5_pane_t8_ParamLimits

0xd747,	// (0x00047047) main_cam5_pane_t8

0xd763,	// (0x00047063) main_cam5_pane_t9_ParamLimits

0xd763,	// (0x00047063) main_cam5_pane_t9

0xd775,	// (0x00047075) main_cam5_pane_t10_ParamLimits

0xd775,	// (0x00047075) main_cam5_pane_t10

0xd787,	// (0x00047087) main_cam5_pane_t11_ParamLimits

0xd787,	// (0x00047087) main_cam5_pane_t11

0xd799,	// (0x00047099) main_cam5_pane_t12_ParamLimits

0xd799,	// (0x00047099) main_cam5_pane_t12

0xd7ae,	// (0x000470ae) main_cam5_pane_t13_ParamLimits

0xd7ae,	// (0x000470ae) main_cam5_pane_t13

0x000c,

0xfa7f,	// (0x0004937f) main_cam5_pane_t_ParamLimits

0xfa7f,	// (0x0004937f) main_cam5_pane_t

0x3603,	// (0x0003cf03) popup_scut_keymap_window_ParamLimits

0x3603,	// (0x0003cf03) popup_scut_keymap_window

0x9643,	// (0x00042f43) aid_size_cell_brow_shortcut

0x5855,	// (0x0003f155) bg_popup_window_pane_cp010

0x964f,	// (0x00042f4f) grid_scut_pane

0x9659,	// (0x00042f59) cell_scut_pane_ParamLimits

0x9659,	// (0x00042f59) cell_scut_pane

0x966e,	// (0x00042f6e) cell_scut_pane_g1

0xd7cb,	// (0x000470cb) cell_scut_pane_t1

0xd7da,	// (0x000470da) cell_scut_pane_t2

0x9677,	// (0x00042f77) cell_scut_pane_t3

0x0002,

0xfa9a,	// (0x0004939a) cell_scut_pane_t

0x772c,	// (0x0004102c) main_mup3_pane_g8_ParamLimits

0x772c,	// (0x0004102c) main_mup3_pane_g8

0x8abd,	// (0x000423bd) area_vitu2_query_pane_ParamLimits

0x8abd,	// (0x000423bd) area_vitu2_query_pane

0x2d5e,	// (0x0003c65e) input_focus_pane_cp08

0xd7e9,	// (0x000470e9) area_vitu2_query_pane_g1

0x2e5b,	// (0x0003c75b) area_vitu2_query_pane_g2

0x0001,

0xfaa1,	// (0x000493a1) area_vitu2_query_pane_g

0x9685,	// (0x00042f85) area_vitu2_query_pane_t1_ParamLimits

0x9685,	// (0x00042f85) area_vitu2_query_pane_t1

0x9697,	// (0x00042f97) area_vitu2_query_pane_t2_ParamLimits

0x9697,	// (0x00042f97) area_vitu2_query_pane_t2

0x2e6a,	// (0x0003c76a) area_vitu2_query_pane_t3_ParamLimits

0x2e6a,	// (0x0003c76a) area_vitu2_query_pane_t3

0xd7f5,	// (0x000470f5) area_vitu2_query_pane_t4_ParamLimits

0xd7f5,	// (0x000470f5) area_vitu2_query_pane_t4

0xd81d,	// (0x0004711d) area_vitu2_query_pane_t5_ParamLimits

0xd81d,	// (0x0004711d) area_vitu2_query_pane_t5

0xd845,	// (0x00047145) area_vitu2_query_pane_t6_ParamLimits

0xd845,	// (0x00047145) area_vitu2_query_pane_t6

0x0006,

0xfaa6,	// (0x000493a6) area_vitu2_query_pane_t_ParamLimits

0xfaa6,	// (0x000493a6) area_vitu2_query_pane_t

0x96a9,	// (0x00042fa9) bg_button_pane_cp018

0x96b6,	// (0x00042fb6) bg_button_pane_cp021

0x2e92,	// (0x0003c792) bg_button_pane_cp022

0x2ea1,	// (0x0003c7a1) input_focus_pane_cp09

0x56b2,	// (0x0003efb2) aid_size_touch_mv_arrow_left

0x56cb,	// (0x0003efcb) aid_size_touch_mv_arrow_right

0x9061,	// (0x00042961) main_cset_slider_pane_g16_ParamLimits

0x9061,	// (0x00042961) main_cset_slider_pane_g16

0x906d,	// (0x0004296d) main_cset_slider_pane_g17_ParamLimits

0x906d,	// (0x0004296d) main_cset_slider_pane_g17

0x962e,	// (0x00042f2e) cell_cam4_burst_pane_g1_ParamLimits

0x0f8a,	// (0x0003a88a) compa_mode_pane

0x9246,	// (0x00042b46) popup_vtel_slider_window_g3_ParamLimits

0x9246,	// (0x00042b46) popup_vtel_slider_window_g3

0x925d,	// (0x00042b5d) popup_vtel_slider_window_g4_ParamLimits

0x925d,	// (0x00042b5d) popup_vtel_slider_window_g4

0x9274,	// (0x00042b74) popup_vtel_slider_window_t1_ParamLimits

0x9274,	// (0x00042b74) popup_vtel_slider_window_t1

0x0f8a,	// (0x0003a88a) main_cl_pane

0xc550,	// (0x00045e50) popup_imed_adjust2_window_ParamLimits

0xc52a,	// (0x00045e2a) bg_tb_trans_pane_cp05_ParamLimits

0xce2e,	// (0x0004672e) popup_imed_adjust2_window_g1_ParamLimits

0xce3d,	// (0x0004673d) popup_imed_adjust2_window_g2_ParamLimits

0xce3d,	// (0x0004673d) popup_imed_adjust2_window_g2

0xce49,	// (0x00046749) popup_imed_adjust2_window_g3_ParamLimits

0xce49,	// (0x00046749) popup_imed_adjust2_window_g3

0x0002,

0xf811,	// (0x00049111) popup_imed_adjust2_window_g_ParamLimits

0xf811,	// (0x00049111) popup_imed_adjust2_window_g

0xce55,	// (0x00046755) popup_imed_adjust2_window_t1_ParamLimits

0xce6d,	// (0x0004676d) slider_imed_adjust_pane_ParamLimits

0xce81,	// (0x00046781) slider_imed_adjust_pane_g1_ParamLimits

0xce91,	// (0x00046791) slider_imed_adjust_pane_g2_ParamLimits

0xcea1,	// (0x000467a1) slider_imed_adjust_pane_g3_ParamLimits

0xceb2,	// (0x000467b2) slider_imed_adjust_pane_g4_ParamLimits

0xf818,	// (0x00049118) slider_imed_adjust_pane_g_ParamLimits

0x8842,	// (0x00042142) aid_touch_area_cam4_ParamLimits

0x8842,	// (0x00042142) aid_touch_area_cam4

0xef87,	// (0x00048887) battery_pane_cp01

0x88da,	// (0x000421da) main_camera4_pane_g6_ParamLimits

0x88da,	// (0x000421da) main_camera4_pane_g6

0x88fb,	// (0x000421fb) main_camera4_pane_t2_ParamLimits

0x88fb,	// (0x000421fb) main_camera4_pane_t2

0x0001,

0xf91b,	// (0x0004921b) main_camera4_pane_t_ParamLimits

0xf91b,	// (0x0004921b) main_camera4_pane_t

0x8929,	// (0x00042229) aid_touch_area_vid4_ParamLimits

0x8929,	// (0x00042229) aid_touch_area_vid4

0x896b,	// (0x0004226b) main_video4_pane_g5_ParamLimits

0x896b,	// (0x0004226b) main_video4_pane_g5

0x898c,	// (0x0004228c) vid4_progress_pane_ParamLimits

0x898c,	// (0x0004228c) vid4_progress_pane

0xd4ab,	// (0x00046dab) main_cset_slider_pane_g18_ParamLimits

0xd4ab,	// (0x00046dab) main_cset_slider_pane_g18

0xd6b9,	// (0x00046fb9) cell_cam4_burst_pane_g2_ParamLimits

0xd6b9,	// (0x00046fb9) cell_cam4_burst_pane_g2

0x0001,

0xfa7a,	// (0x0004937a) cell_cam4_burst_pane_g_ParamLimits

0xfa7a,	// (0x0004937a) cell_cam4_burst_pane_g

0x1710,	// (0x0003b010) bg_cl_pane_ParamLimits

0x1710,	// (0x0003b010) bg_cl_pane

0x96c2,	// (0x00042fc2) cl_header_pane_ParamLimits

0x96c2,	// (0x00042fc2) cl_header_pane

0x96d6,	// (0x00042fd6) cl_listscroll_pane_ParamLimits

0x96d6,	// (0x00042fd6) cl_listscroll_pane

0xd891,	// (0x00047191) bg_cl_pane_g1

0xd899,	// (0x00047199) bg_cl_pane_g2

0xd8a1,	// (0x000471a1) bg_cl_pane_g3

0xd8a9,	// (0x000471a9) bg_cl_pane_g4

0xd8b1,	// (0x000471b1) bg_cl_pane_g5

0xd8b9,	// (0x000471b9) bg_cl_pane_g6

0xd8c1,	// (0x000471c1) bg_cl_pane_g7

0xd8c9,	// (0x000471c9) bg_cl_pane_g8

0xd8d1,	// (0x000471d1) bg_cl_pane_g9

0x0008,

0xfab5,	// (0x000493b5) bg_cl_pane_g

0x96e6,	// (0x00042fe6) aid_height_cl_leading_ParamLimits

0x96e6,	// (0x00042fe6) aid_height_cl_leading

0x96f2,	// (0x00042ff2) aid_height_cl_text_ParamLimits

0x96f2,	// (0x00042ff2) aid_height_cl_text

0x1c39,	// (0x0003b539) bg_cl_header_pane_ParamLimits

0x1c39,	// (0x0003b539) bg_cl_header_pane

0x9711,	// (0x00043011) cl_header_pane_g1_ParamLimits

0x9711,	// (0x00043011) cl_header_pane_g1

0x9727,	// (0x00043027) cl_header_pane_t1_ParamLimits

0x9727,	// (0x00043027) cl_header_pane_t1

0xd8d9,	// (0x000471d9) cl_list_pane

0xd8e2,	// (0x000471e2) hc_scroll_pane_cp01

0x1b0c,	// (0x0003b40c) bg_cl_header_pane_g1

0xd378,	// (0x00046c78) bg_cl_header_pane_g2

0x1b2c,	// (0x0003b42c) bg_cl_header_pane_g3

0xd388,	// (0x00046c88) bg_cl_header_pane_g4

0xd380,	// (0x00046c80) bg_cl_header_pane_g5

0xd5d2,	// (0x00046ed2) bg_cl_header_pane_g6

0xd3a0,	// (0x00046ca0) bg_cl_header_pane_g7

0xd3a8,	// (0x00046ca8) bg_cl_header_pane_g8

0xd398,	// (0x00046c98) bg_cl_header_pane_g9

0x0008,

0xfac8,	// (0x000493c8) bg_cl_header_pane_g

0x9740,	// (0x00043040) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x9740,	// (0x00043040) hc_cl_list_double_graphic_heading_pane

0x9750,	// (0x00043050) hc_cl_list_single_graphic_pane_ParamLimits

0x9750,	// (0x00043050) hc_cl_list_single_graphic_pane

0x9763,	// (0x00043063) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x9763,	// (0x00043063) hc_cl_list_single_graphic_pane_g1

0x976f,	// (0x0004306f) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x976f,	// (0x0004306f) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfadb,	// (0x000493db) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfadb,	// (0x000493db) hc_cl_list_single_graphic_pane_g

0x9783,	// (0x00043083) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x9783,	// (0x00043083) hc_cl_list_single_graphic_pane_t1

0x9763,	// (0x00043063) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x9763,	// (0x00043063) hc_cl_list_double_graphic_heading_pane_g1

0x9798,	// (0x00043098) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x9798,	// (0x00043098) hc_cl_list_double_graphic_heading_pane_g2

0x97ac,	// (0x000430ac) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x97ac,	// (0x000430ac) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfae0,	// (0x000493e0) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfae0,	// (0x000493e0) hc_cl_list_double_graphic_heading_pane_g

0x97c0,	// (0x000430c0) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x97c0,	// (0x000430c0) hc_cl_list_double_graphic_heading_pane_t1

0x97d5,	// (0x000430d5) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x97d5,	// (0x000430d5) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfae7,	// (0x000493e7) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfae7,	// (0x000493e7) hc_cl_list_double_graphic_heading_pane_t

0xf057,	// (0x00048957) vid4_progress_pane_g1

0xf066,	// (0x00048966) vid4_progress_pane_g2

0xf075,	// (0x00048975) vid4_progress_pane_g3

0xf084,	// (0x00048984) vid4_progress_pane_g4

0x0004,

0xfaec,	// (0x000493ec) vid4_progress_pane_g

0xf090,	// (0x00048990) vid4_progress_pane_t1

0xf0a6,	// (0x000489a6) vid4_progress_pane_t2

0x0002,

0xfaf7,	// (0x000493f7) vid4_progress_pane_t

0xf0d0,	// (0x000489d0) wait_bar_pane_cp07

0xc760,	// (0x00046060) blid_firmament_pane_ParamLimits

0xc7a1,	// (0x000460a1) popup_blid_sat_info2_window_g1

0xc7c5,	// (0x000460c5) popup_blid_sat_info2_window_t3

0xc7d3,	// (0x000460d3) popup_blid_sat_info2_window_t4

0xc7e1,	// (0x000460e1) popup_blid_sat_info2_window_t5

0xc7ef,	// (0x000460ef) popup_blid_sat_info2_window_t6

0xc7ff,	// (0x000460ff) popup_blid_sat_info2_window_t7

0xc80d,	// (0x0004610d) popup_blid_sat_info2_window_t8

0xc81b,	// (0x0004611b) popup_blid_sat_info2_window_t9

0xc829,	// (0x00046129) popup_blid_sat_info2_window_t10

0xc8e5,	// (0x000461e5) aid_firma_cardinal_ParamLimits

0xc8f9,	// (0x000461f9) blid_firmament_pane_t1_ParamLimits

0xc910,	// (0x00046210) blid_firmament_pane_t2_ParamLimits

0xc927,	// (0x00046227) blid_firmament_pane_t3_ParamLimits

0xc93e,	// (0x0004623e) blid_firmament_pane_t4_ParamLimits

0xf70a,	// (0x0004900a) blid_firmament_pane_t_ParamLimits

0xc955,	// (0x00046255) blid_sat_info_pane_ParamLimits

0x1c39,	// (0x0003b539) main_cam_set_pane_ParamLimits

0x7f86,	// (0x00041886) aid_size_cell_colour_35_ParamLimits

0x7fa6,	// (0x000418a6) aid_size_cell_colour_112_ParamLimits

0x7fc6,	// (0x000418c6) aid_size_cell_effect_ParamLimits

0xc52a,	// (0x00045e2a) bg_tb_trans_pane_cp02_ParamLimits

0x4f97,	// (0x0003e897) heading_imed_pane_ParamLimits

0x7fe6,	// (0x000418e6) listscroll_imed_pane_ParamLimits

0xbb1c,	// (0x0004541c) popup_call2_audio_first_window_g5_ParamLimits

0xbb1c,	// (0x0004541c) popup_call2_audio_first_window_g5

0x8503,	// (0x00041e03) aid_size_touch_image3_arrow_left_ParamLimits

0x8503,	// (0x00041e03) aid_size_touch_image3_arrow_left

0x8523,	// (0x00041e23) aid_size_touch_image3_arrow_right_ParamLimits

0x8523,	// (0x00041e23) aid_size_touch_image3_arrow_right

0xf0bb,	// (0x000489bb) vid4_progress_pane_t3

0x82ba,	// (0x00041bba) main_hwr_training_symbol_option_pane_ParamLimits

0x82ba,	// (0x00041bba) main_hwr_training_symbol_option_pane

0xd10d,	// (0x00046a0d) popup_hwr_training_preview_window_ParamLimits

0xd10d,	// (0x00046a0d) popup_hwr_training_preview_window

0x82d6,	// (0x00041bd6) hwr_training_navi_pane_g5_ParamLimits

0x82d6,	// (0x00041bd6) hwr_training_navi_pane_g5

0xd366,	// (0x00046c66) popup_char_count_window

0x1c39,	// (0x0003b539) bg_popup_sub_pane_cp20_ParamLimits

0x938e,	// (0x00042c8e) list_vitu2_match_list_pane_ParamLimits

0x939d,	// (0x00042c9d) vitu2_page_scroll_pane_ParamLimits

0x939d,	// (0x00042c9d) vitu2_page_scroll_pane

0xd945,	// (0x00047245) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd945,	// (0x00047245) list_single_hwr_training_symbol_option_pane

0xd958,	// (0x00047258) list_single_hwr_training_symbol_option_pane_g1

0xd960,	// (0x00047260) list_single_hwr_training_symbol_option_pane_t1

0xd96e,	// (0x0004726e) bg_button_pane_cp023

0xd977,	// (0x00047277) bg_button_pane_cp024

0x97ea,	// (0x000430ea) vitu2_page_scroll_pane_g1

0x97f2,	// (0x000430f2) vitu2_page_scroll_pane_g2

0x0001,

0xfafe,	// (0x000493fe) vitu2_page_scroll_pane_g

0x97fa,	// (0x000430fa) vitu2_page_scroll_pane_t1

0xc6c0,	// (0x00045fc0) popup_char_count_window_g1

0xd9aa,	// (0x000472aa) popup_char_count_window_g2

0xd9b3,	// (0x000472b3) popup_char_count_window_g3

0x0002,

0xfb03,	// (0x00049403) popup_char_count_window_g

0xd9bc,	// (0x000472bc) popup_char_count_window_t1

0x0f8a,	// (0x0003a88a) main_vded2_pane

0xce1c,	// (0x0004671c) aid_size_cell_imed_line

0xce26,	// (0x00046726) grid_imed_line_width_pane

0x8a0d,	// (0x0004230d) vid4_indicators_pane_g4

0xd9ca,	// (0x000472ca) cell_imed_line_width_pane_ParamLimits

0xd9ca,	// (0x000472ca) cell_imed_line_width_pane

0xd9dc,	// (0x000472dc) cell_imed_line_width_pane_g1

0xd9e5,	// (0x000472e5) cell_imed_line_width_pane_g2

0x0001,

0xfb0a,	// (0x0004940a) cell_imed_line_width_pane_g

0x9809,	// (0x00043109) main_vded2_pane_g1_ParamLimits

0x9809,	// (0x00043109) main_vded2_pane_g1

0x981f,	// (0x0004311f) main_vded2_pane_g2_ParamLimits

0x981f,	// (0x0004311f) main_vded2_pane_g2

0x0001,

0xfb0f,	// (0x0004940f) main_vded2_pane_g_ParamLimits

0xfb0f,	// (0x0004940f) main_vded2_pane_g

0x982f,	// (0x0004312f) vded2_slider_pane_ParamLimits

0x982f,	// (0x0004312f) vded2_slider_pane

0x9842,	// (0x00043142) aid_size_touch_vded2_end

0x984a,	// (0x0004314a) aid_size_touch_vded2_playhead

0x9852,	// (0x00043152) aid_size_touch_vded2_start

0x985a,	// (0x0004315a) vded2_slider_bg_pane

0x9863,	// (0x00043163) vded2_slider_pane_g1

0x986c,	// (0x0004316c) vded2_slider_pane_g2

0x9874,	// (0x00043174) vded2_slider_pane_g3

0x0002,

0xfb14,	// (0x00049414) vded2_slider_pane_g

0x987d,	// (0x0004317d) vded2_slider_bg_pane_g1

0x9886,	// (0x00043186) vded2_slider_bg_pane_g2

0x988f,	// (0x0004318f) vded2_slider_bg_pane_g3

0x0002,

0xfb1b,	// (0x0004941b) vded2_slider_bg_pane_g

0x5e3c,	// (0x0003f73c) aid_postcard_touch_down_pane_ParamLimits

0x5e3c,	// (0x0003f73c) aid_postcard_touch_down_pane

0x5e4e,	// (0x0003f74e) aid_postcard_touch_up_pane_ParamLimits

0x5e4e,	// (0x0003f74e) aid_postcard_touch_up_pane

0x0f8a,	// (0x0003a88a) main_blid2_pane

0xc538,	// (0x00045e38) popup_blid2_search_window

0x0f8a,	// (0x0003a88a) blid2_gps_pane

0x0f8a,	// (0x0003a88a) blid2_navig_pane

0x0f8a,	// (0x0003a88a) blid2_search_pane

0x0f8a,	// (0x0003a88a) blid2_tripm_pane

0x9898,	// (0x00043198) blid2_search_pane_g1_ParamLimits

0x9898,	// (0x00043198) blid2_search_pane_g1

0x98ac,	// (0x000431ac) blid2_search_pane_t1_ParamLimits

0x98ac,	// (0x000431ac) blid2_search_pane_t1

0x98be,	// (0x000431be) aid_size_cell_blid2_gps_ParamLimits

0x98be,	// (0x000431be) aid_size_cell_blid2_gps

0x98d6,	// (0x000431d6) blid2_gps_pane_g1_ParamLimits

0x98d6,	// (0x000431d6) blid2_gps_pane_g1

0x98ea,	// (0x000431ea) grid_blid2_satellite_pane_ParamLimits

0x98ea,	// (0x000431ea) grid_blid2_satellite_pane

0x98fe,	// (0x000431fe) blid2_navig_pane_g1_ParamLimits

0x98fe,	// (0x000431fe) blid2_navig_pane_g1

0x990a,	// (0x0004320a) blid2_navig_pane_t1_ParamLimits

0x990a,	// (0x0004320a) blid2_navig_pane_t1

0x9923,	// (0x00043223) blid2_navig_pane_t2_ParamLimits

0x9923,	// (0x00043223) blid2_navig_pane_t2

0x0001,

0xfb22,	// (0x00049422) blid2_navig_pane_t_ParamLimits

0xfb22,	// (0x00049422) blid2_navig_pane_t

0x993c,	// (0x0004323c) blid2_navig_ring_pane_ParamLimits

0x993c,	// (0x0004323c) blid2_navig_ring_pane

0x9951,	// (0x00043251) blid2_speed_pane_ParamLimits

0x9951,	// (0x00043251) blid2_speed_pane

0x995d,	// (0x0004325d) blid2_tripm_pane_g1_ParamLimits

0x995d,	// (0x0004325d) blid2_tripm_pane_g1

0x9972,	// (0x00043272) blid2_tripm_pane_g2_ParamLimits

0x9972,	// (0x00043272) blid2_tripm_pane_g2

0x9986,	// (0x00043286) blid2_tripm_pane_g3_ParamLimits

0x9986,	// (0x00043286) blid2_tripm_pane_g3

0x999a,	// (0x0004329a) blid2_tripm_pane_g4_ParamLimits

0x999a,	// (0x0004329a) blid2_tripm_pane_g4

0x99ae,	// (0x000432ae) blid2_tripm_pane_g5_ParamLimits

0x99ae,	// (0x000432ae) blid2_tripm_pane_g5

0x0005,

0xfb27,	// (0x00049427) blid2_tripm_pane_g_ParamLimits

0xfb27,	// (0x00049427) blid2_tripm_pane_g

0x99d0,	// (0x000432d0) blid2_tripm_pane_t1_ParamLimits

0x99d0,	// (0x000432d0) blid2_tripm_pane_t1

0x99e7,	// (0x000432e7) blid2_tripm_pane_t2_ParamLimits

0x99e7,	// (0x000432e7) blid2_tripm_pane_t2

0x99fe,	// (0x000432fe) blid2_tripm_pane_t3_ParamLimits

0x99fe,	// (0x000432fe) blid2_tripm_pane_t3

0x0003,

0xfb34,	// (0x00049434) blid2_tripm_pane_t_ParamLimits

0xfb34,	// (0x00049434) blid2_tripm_pane_t

0x9a41,	// (0x00043341) cell_blid2_satellite_pane_ParamLimits

0x9a41,	// (0x00043341) cell_blid2_satellite_pane

0x9a59,	// (0x00043359) cell_blid2_satellite_pane_g1

0xd9ed,	// (0x000472ed) cell_blid2_satellite_pane_t1

0xc965,	// (0x00046265) blid2_speed_pane_g1

0xd9fb,	// (0x000472fb) blid2_speed_pane_t1

0xda09,	// (0x00047309) blid2_speed_pane_t2

0x0001,

0xfb3d,	// (0x0004943d) blid2_speed_pane_t

0xc965,	// (0x00046265) blid2_navig_ring_pane_g1

0x9a62,	// (0x00043362) blid2_navig_ring_pane_g2

0x9a6a,	// (0x0004336a) blid2_navig_ring_pane_g3

0x9a72,	// (0x00043372) blid2_navig_ring_pane_g4

0x9a7a,	// (0x0004337a) blid2_navig_ring_pane_g5

0x0004,

0xfb42,	// (0x00049442) blid2_navig_ring_pane_g

0x0f8a,	// (0x0003a88a) bg_popup_window_pane_cp011

0xda17,	// (0x00047317) popup_blid2_search_window_g1

0xda1f,	// (0x0004731f) popup_blid2_search_window_t1

0xda2d,	// (0x0004732d) popup_blid2_search_window_t2

0x0001,

0xfb4d,	// (0x0004944d) popup_blid2_search_window_t

0x1a1b,	// (0x0003b31b) main_browser_pane_g1

0x1710,	// (0x0003b010) main_browser_pane_ParamLimits

0x1c39,	// (0x0003b539) bg_button_pane_cp011_ParamLimits

0x8c8a,	// (0x0004258a) cell_vitu2_function_pane_g1_ParamLimits

0xc52a,	// (0x00045e2a) bg_popup_sub_pane_cp22_ParamLimits

0x2d5e,	// (0x0003c65e) input_focus_pane_cp08_ParamLimits

0x94dc,	// (0x00042ddc) popup_vitu2_query_button_pane_ParamLimits

0x94dc,	// (0x00042ddc) popup_vitu2_query_button_pane

0x2d75,	// (0x0003c675) popup_vitu2_query_input_button_pane

0xd60f,	// (0x00046f0f) popup_vitu2_query_window_g1_ParamLimits

0x2d7d,	// (0x0003c67d) popup_vitu2_query_window_g2_ParamLimits

0xfa4e,	// (0x0004934e) popup_vitu2_query_window_g_ParamLimits

0x0f8a,	// (0x0003a88a) bg_button_pane_cp026

0x9a82,	// (0x00043382) popup_vitu2_query_input_button_pane_g1

0x0f8a,	// (0x0003a88a) bg_button_pane_cp025

0xda3b,	// (0x0004733b) popup_vitu2_query_button_pane_t1

0x7494,	// (0x00040d94) main_mp3_pane_t6

0x74a2,	// (0x00040da2) popup_slider_window_cp01

0xefa1,	// (0x000488a1) cam4_battery_pane

0xefa1,	// (0x000488a1) cam4_battery_pane_cp02

0xefa1,	// (0x000488a1) cam4_battery_pane_cp01

0xefa1,	// (0x000488a1) cam4_battery_pane_cp03

0xc965,	// (0x00046265) cam4_battery_pane_g1

0xda49,	// (0x00047349) cam4_battery_pane_g2

0x0001,

0xfb52,	// (0x00049452) cam4_battery_pane_g

0xc837,	// (0x00046137) popup_blid_sat_info2_window_t11

0x56b2,	// (0x0003efb2) aid_size_touch_mv_arrow_left_ParamLimits

0x56cb,	// (0x0003efcb) aid_size_touch_mv_arrow_right_ParamLimits

0x5703,	// (0x0003f003) navi_pane_g1_ParamLimits

0x570f,	// (0x0003f00f) navi_pane_g2_ParamLimits

0x572d,	// (0x0003f02d) navi_pane_g3_ParamLimits

0xf409,	// (0x00048d09) navi_pane_g_ParamLimits

0x57e7,	// (0x0003f0e7) navi_pane_mv_t1_ParamLimits

0x7ff2,	// (0x000418f2) grid_imed_effect_pane_ParamLimits

0x42b3,	// (0x0003dbb3) aid_placing_vt_slider_lsc

0x195d,	// (0x0003b25d) aid_placing_vt_slider_prt

0x1c39,	// (0x0003b539) bg_tb_trans_pane_cp01_ParamLimits

0xcab4,	// (0x000463b4) popup_image_details_window_g1_ParamLimits

0xcac7,	// (0x000463c7) popup_image_details_window_g2_ParamLimits

0xcadc,	// (0x000463dc) popup_image_details_window_g3_ParamLimits

0xcadc,	// (0x000463dc) popup_image_details_window_g3

0xf74f,	// (0x0004904f) popup_image_details_window_g_ParamLimits

0xcaf0,	// (0x000463f0) popup_image_details_window_t1_ParamLimits

0xcb02,	// (0x00046402) popup_image_details_window_t2_ParamLimits

0xcb1b,	// (0x0004641b) popup_image_details_window_t3_ParamLimits

0xcb2f,	// (0x0004642f) popup_image_details_window_t4_ParamLimits

0xcb4a,	// (0x0004644a) popup_image_details_window_t5_ParamLimits

0xf756,	// (0x00049056) popup_image_details_window_t_ParamLimits

0x96fe,	// (0x00042ffe) cl_header_name_pane_ParamLimits

0x96fe,	// (0x00042ffe) cl_header_name_pane

0x9a8a,	// (0x0004338a) cl_header_name_pane_t1_ParamLimits

0x9a8a,	// (0x0004338a) cl_header_name_pane_t1

0x9aab,	// (0x000433ab) cl_header_name_pane_t2_ParamLimits

0x9aab,	// (0x000433ab) cl_header_name_pane_t2

0x9aed,	// (0x000433ed) cl_header_name_pane_t3_ParamLimits

0x9aed,	// (0x000433ed) cl_header_name_pane_t3

0x0002,

0xfb57,	// (0x00049457) cl_header_name_pane_t_ParamLimits

0xfb57,	// (0x00049457) cl_header_name_pane_t

0x57b6,	// (0x0003f0b6) navi_pane_mv_g2_ParamLimits

0xd307,	// (0x00046c07) field_vitu2_entry_pane_g1_ParamLimits

0xd313,	// (0x00046c13) field_vitu2_entry_pane_g2_ParamLimits

0xd31f,	// (0x00046c1f) field_vitu2_entry_pane_g3_ParamLimits

0xd31f,	// (0x00046c1f) field_vitu2_entry_pane_g3

0xf94d,	// (0x0004924d) field_vitu2_entry_pane_g_ParamLimits

0x8c06,	// (0x00042506) cell_vitu2_itu_pane_g1_ParamLimits

0x8c16,	// (0x00042516) cell_vitu2_itu_pane_g2_ParamLimits

0x8c16,	// (0x00042516) cell_vitu2_itu_pane_g2

0x0001,

0xf959,	// (0x00049259) cell_vitu2_itu_pane_g_ParamLimits

0xf959,	// (0x00049259) cell_vitu2_itu_pane_g

0x1c39,	// (0x0003b539) bg_vkb2_func_pane_cp05_ParamLimits

0x1c39,	// (0x0003b539) bg_vkb2_func_pane_cp05

0x1c39,	// (0x0003b539) bg_vkb2_func_pane_cp03

0x1c39,	// (0x0003b539) bg_vkb2_func_pane_cp04

0x1c39,	// (0x0003b539) bg_vkb2_func_pane_cp10_ParamLimits

0x1c39,	// (0x0003b539) bg_vkb2_func_pane_cp10

0x2e92,	// (0x0003c792) bg_vkb2_func_pane_cp08

0x96a9,	// (0x00042fa9) bg_vkb2_func_pane_cp06

0x96b6,	// (0x00042fb6) bg_vkb2_func_pane_cp07

0xd980,	// (0x00047280) bg_vkb2_func_pane_cp11_ParamLimits

0xd980,	// (0x00047280) bg_vkb2_func_pane_cp11

0xd995,	// (0x00047295) bg_vkb2_func_pane_cp12_ParamLimits

0xd995,	// (0x00047295) bg_vkb2_func_pane_cp12

0x0f8a,	// (0x0003a88a) bg_vkb2_func_pane_cp09

0xd378,	// (0x00046c78) bg_vkb2_func_pane_g1

0x1b2c,	// (0x0003b42c) bg_vkb2_func_pane_g2

0xd380,	// (0x00046c80) bg_vkb2_func_pane_g3

0xd388,	// (0x00046c88) bg_vkb2_func_pane_g4

0xd5d2,	// (0x00046ed2) bg_vkb2_func_pane_g5

0xd3a0,	// (0x00046ca0) bg_vkb2_func_pane_g6

0xd3a8,	// (0x00046ca8) bg_vkb2_func_pane_g7

0xd398,	// (0x00046c98) bg_vkb2_func_pane_g8

0x1b0c,	// (0x0003b40c) bg_vkb2_func_pane_g9

0x0008,

0xfb5e,	// (0x0004945e) bg_vkb2_func_pane_g

0x99c0,	// (0x000432c0) blid2_tripm_pane_g6_ParamLimits

0x99c0,	// (0x000432c0) blid2_tripm_pane_g6

0xd1cb,	// (0x00046acb) mp4_progress_pane_g1

0x9a2f,	// (0x0004332f) blid2_tripm_values_pane_ParamLimits

0x9a2f,	// (0x0004332f) blid2_tripm_values_pane

0x9b1e,	// (0x0004341e) blid2_tripm_values_pane_t1

0x9b2c,	// (0x0004342c) blid2_tripm_values_pane_t2

0x9b3a,	// (0x0004343a) blid2_tripm_values_pane_t3

0x9b48,	// (0x00043448) blid2_tripm_values_pane_t4

0x9b56,	// (0x00043456) blid2_tripm_values_pane_t5

0x9b64,	// (0x00043464) blid2_tripm_values_pane_t6

0x9b72,	// (0x00043472) blid2_tripm_values_pane_t7

0x9b80,	// (0x00043480) blid2_tripm_values_pane_t8

0x9b8e,	// (0x0004348e) blid2_tripm_values_pane_t9

0x0008,

0xfb71,	// (0x00049471) blid2_tripm_values_pane_t

0x42ed,	// (0x0003dbed) call_video_pane_t1_ParamLimits

0x4307,	// (0x0003dc07) call_video_pane_t2_ParamLimits

0xf292,	// (0x00048b92) call_video_pane_t_ParamLimits

0x2bee,	// (0x0003c4ee) msg_header_pane_g1_ParamLimits

0x5dae,	// (0x0003f6ae) msg_header_pane_g2_ParamLimits

0x5dae,	// (0x0003f6ae) msg_header_pane_g2

0x0001,

0xf4ac,	// (0x00048dac) msg_header_pane_g_ParamLimits

0xf4ac,	// (0x00048dac) msg_header_pane_g

0x1710,	// (0x0003b010) main_clock2_pane_ParamLimits

0x7d2e,	// (0x0004162e) grid_clock2_toolbar_pane_ParamLimits

0x7d2e,	// (0x0004162e) grid_clock2_toolbar_pane

0x7d2e,	// (0x0004162e) listscroll_clock2_pane_ParamLimits

0x7d2e,	// (0x0004162e) listscroll_clock2_pane

0x7e00,	// (0x00041700) main_clock2_pane_t3_ParamLimits

0x7e00,	// (0x00041700) main_clock2_pane_t3

0x7e19,	// (0x00041719) main_clock2_pane_t4_ParamLimits

0x7e19,	// (0x00041719) main_clock2_pane_t4

0xda53,	// (0x00047353) cell_clock2_toolbar_pane

0xda5b,	// (0x0004735b) cell_clock2_toolbar_pane_cp01

0xda5b,	// (0x0004735b) cell_clock2_toolbar_pane_cp02

0xda63,	// (0x00047363) cell_clock2_toolbar_pane_cp03

0xda6b,	// (0x0004736b) list_clock2_pane

0x5444,	// (0x0003ed44) scroll_pane_cp10

0xda73,	// (0x00047373) list_single_clock2_pane_ParamLimits

0xda73,	// (0x00047373) list_single_clock2_pane

0x5855,	// (0x0003f155) list_highlight_pane_cp08

0xda80,	// (0x00047380) list_single_clock2_pane_t1

0xda8e,	// (0x0004738e) list_single_clock2_pane_t2

0x0001,

0xfb84,	// (0x00049484) list_single_clock2_pane_t

0x0f8a,	// (0x0003a88a) bg_button_pane_cp10

0xda9c,	// (0x0004739c) cell_clock2_toolbar_pane_g1

0x5dc2,	// (0x0003f6c2) aid_main_viewer_pane_g1_ParamLimits

0x5dc2,	// (0x0003f6c2) aid_main_viewer_pane_g1

0x5dce,	// (0x0003f6ce) aid_main_viewer_pane_g2_ParamLimits

0x5dce,	// (0x0003f6ce) aid_main_viewer_pane_g2

0x5dda,	// (0x0003f6da) aid_main_viewer_pane_g3_ParamLimits

0x5dda,	// (0x0003f6da) aid_main_viewer_pane_g3

0x5de9,	// (0x0003f6e9) aid_main_viewer_pane_g4_ParamLimits

0x5de9,	// (0x0003f6e9) aid_main_viewer_pane_g4

0x0003,

0xf4bd,	// (0x00048dbd) aid_main_viewer_pane_g_ParamLimits

0xf4bd,	// (0x00048dbd) aid_main_viewer_pane_g

0x1c39,	// (0x0003b539) main_calc_pane_ParamLimits

0x67f0,	// (0x000400f0) main_dialer2_pane_ParamLimits

0x0f8a,	// (0x0003a88a) main_cam6_pane

0x0f8a,	// (0x0003a88a) main_vid6_pane

0x7d3a,	// (0x0004163a) listscroll_gen_pane_cp06_ParamLimits

0x7d3a,	// (0x0004163a) listscroll_gen_pane_cp06

0x7e32,	// (0x00041732) main_clock2_pane_t5_ParamLimits

0x7e32,	// (0x00041732) main_clock2_pane_t5

0x7e87,	// (0x00041787) aid_call2_pane_cp10_ParamLimits

0x7e99,	// (0x00041799) aid_call_pane_cp10_ParamLimits

0x5641,	// (0x0003ef41) popup_clock_analogue_window_cp10_g1_ParamLimits

0x5641,	// (0x0003ef41) popup_clock_analogue_window_cp10_g2_ParamLimits

0x7eab,	// (0x000417ab) popup_clock_analogue_window_cp10_g3_ParamLimits

0x7eab,	// (0x000417ab) popup_clock_analogue_window_cp10_g4_ParamLimits

0x5641,	// (0x0003ef41) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf806,	// (0x00049106) popup_clock_analogue_window_cp10_g_ParamLimits

0x7ebd,	// (0x000417bd) popup_clock_analogue_window_cp10_t1_ParamLimits

0xd22b,	// (0x00046b2b) cell_dialer2_keypad_pane_g2_ParamLimits

0xd22b,	// (0x00046b2b) cell_dialer2_keypad_pane_g2

0x0001,

0xf8ec,	// (0x000491ec) cell_dialer2_keypad_pane_g_ParamLimits

0xf8ec,	// (0x000491ec) cell_dialer2_keypad_pane_g

0x84cc,	// (0x00041dcc) cell_dialer2_keypad_pane_t1

0x8f54,	// (0x00042854) main_cset_text2_pane_ParamLimits

0x8f54,	// (0x00042854) main_cset_text2_pane

0xd7e9,	// (0x000470e9) area_vitu2_query_pane_g1_ParamLimits

0x2e5b,	// (0x0003c75b) area_vitu2_query_pane_g2_ParamLimits

0xfaa1,	// (0x000493a1) area_vitu2_query_pane_g_ParamLimits

0xd86d,	// (0x0004716d) area_vitu2_query_pane_t7_ParamLimits

0xd86d,	// (0x0004716d) area_vitu2_query_pane_t7

0x96a9,	// (0x00042fa9) bg_button_pane_cp018_ParamLimits

0x96b6,	// (0x00042fb6) bg_button_pane_cp021_ParamLimits

0x2e92,	// (0x0003c792) bg_button_pane_cp022_ParamLimits

0x2e92,	// (0x0003c792) bg_vkb2_func_pane_cp08_ParamLimits

0x96a9,	// (0x00042fa9) bg_vkb2_func_pane_cp06_ParamLimits

0x96b6,	// (0x00042fb6) bg_vkb2_func_pane_cp07_ParamLimits

0x2ea1,	// (0x0003c7a1) input_focus_pane_cp09_ParamLimits

0xf0e0,	// (0x000489e0) cam6_autofocus_pane_ParamLimits

0xf0e0,	// (0x000489e0) cam6_autofocus_pane

0x9b9c,	// (0x0004349c) cam6_image_uncrop_pane_ParamLimits

0x9b9c,	// (0x0004349c) cam6_image_uncrop_pane

0x9ba9,	// (0x000434a9) cam6_indi_pane_ParamLimits

0x9ba9,	// (0x000434a9) cam6_indi_pane

0x9bbf,	// (0x000434bf) cam6_mode_pane_ParamLimits

0x9bbf,	// (0x000434bf) cam6_mode_pane

0x9bd1,	// (0x000434d1) cam6_timer_pane_ParamLimits

0x9bd1,	// (0x000434d1) cam6_timer_pane

0x9bdd,	// (0x000434dd) cam6_zoom_pane_ParamLimits

0x9bdd,	// (0x000434dd) cam6_zoom_pane

0x9be9,	// (0x000434e9) cam6_mode_pane_g1_ParamLimits

0x9be9,	// (0x000434e9) cam6_mode_pane_g1

0x9bf9,	// (0x000434f9) cam6_mode_pane_g2_ParamLimits

0x9bf9,	// (0x000434f9) cam6_mode_pane_g2

0x9c09,	// (0x00043509) cam6_mode_pane_g3_ParamLimits

0x9c09,	// (0x00043509) cam6_mode_pane_g3

0x9c19,	// (0x00043519) cam6_mode_pane_g4_ParamLimits

0x9c19,	// (0x00043519) cam6_mode_pane_g4

0x0003,

0xfb89,	// (0x00049489) cam6_mode_pane_g_ParamLimits

0xfb89,	// (0x00049489) cam6_mode_pane_g

0xdaa4,	// (0x000473a4) bg_tb_trans_pane_cp08_ParamLimits

0xdaa4,	// (0x000473a4) bg_tb_trans_pane_cp08

0xdab2,	// (0x000473b2) cam6_battery_pane_ParamLimits

0xdab2,	// (0x000473b2) cam6_battery_pane

0xdac8,	// (0x000473c8) cam6_indi_pane_g1_ParamLimits

0xdac8,	// (0x000473c8) cam6_indi_pane_g1

0xdada,	// (0x000473da) cam6_indi_pane_g2_ParamLimits

0xdada,	// (0x000473da) cam6_indi_pane_g2

0xdaec,	// (0x000473ec) cam6_indi_pane_g3_ParamLimits

0xdaec,	// (0x000473ec) cam6_indi_pane_g3

0x0002,

0xfb92,	// (0x00049492) cam6_indi_pane_g_ParamLimits

0xfb92,	// (0x00049492) cam6_indi_pane_g

0xdafe,	// (0x000473fe) cam6_indi_pane_t1_ParamLimits

0xdafe,	// (0x000473fe) cam6_indi_pane_t1

0x8a37,	// (0x00042337) cam6_autofocus_pane_g1

0x8a3f,	// (0x0004233f) cam6_autofocus_pane_g2

0x8a47,	// (0x00042347) cam6_autofocus_pane_g3

0x8a4f,	// (0x0004234f) cam6_autofocus_pane_g4

0x0003,

0xfb99,	// (0x00049499) cam6_autofocus_pane_g

0xdb24,	// (0x00047424) cam6_timer_pane_g1

0xdb2c,	// (0x0004742c) cam6_timer_pane_t1

0xdb3a,	// (0x0004743a) cam6_zoom_cont_pane

0xdb42,	// (0x00047442) cam6_zoom_pane_g1

0xdb4a,	// (0x0004744a) cam6_zoom_pane_g2

0x9c29,	// (0x00043529) cam6_zoom_pane_g3

0x0002,

0xfba2,	// (0x000494a2) cam6_zoom_pane_g

0xc965,	// (0x00046265) cam6_battery_pane_g1

0xc965,	// (0x00046265) cam6_battery_pane_g2

0x0001,

0xf713,	// (0x00049013) cam6_battery_pane_g

0xdb52,	// (0x00047452) cam6_zoom_cont_pane_g1

0xdb5b,	// (0x0004745b) cam6_zoom_cont_pane_g2

0xdb64,	// (0x00047464) cam6_zoom_cont_pane_g3

0x0002,

0xfba9,	// (0x000494a9) cam6_zoom_cont_pane_g

0x9c46,	// (0x00043546) cam6_mode_pane_cp_ParamLimits

0x9c46,	// (0x00043546) cam6_mode_pane_cp

0x9bdd,	// (0x000434dd) cam6_zoom_pane_cp_ParamLimits

0x9bdd,	// (0x000434dd) cam6_zoom_pane_cp

0x9c58,	// (0x00043558) vid6_image_uncrop_cif_pane_ParamLimits

0x9c58,	// (0x00043558) vid6_image_uncrop_cif_pane

0x9c66,	// (0x00043566) vid6_image_uncrop_nhd_pane_ParamLimits

0x9c66,	// (0x00043566) vid6_image_uncrop_nhd_pane

0x9b9c,	// (0x0004349c) vid6_image_uncrop_vga_pane_ParamLimits

0x9b9c,	// (0x0004349c) vid6_image_uncrop_vga_pane

0x9c73,	// (0x00043573) vid6_image_uncrop_wvga_pane_ParamLimits

0x9c73,	// (0x00043573) vid6_image_uncrop_wvga_pane

0x9c80,	// (0x00043580) vid6_indi_pane_ParamLimits

0x9c80,	// (0x00043580) vid6_indi_pane

0xdaa4,	// (0x000473a4) bg_tb_trans_pane_cp09_ParamLimits

0xdaa4,	// (0x000473a4) bg_tb_trans_pane_cp09

0xdb78,	// (0x00047478) cam6_battery_pane_cp_ParamLimits

0xdb78,	// (0x00047478) cam6_battery_pane_cp

0xdb84,	// (0x00047484) vid6_indi_pane_g1_ParamLimits

0xdb84,	// (0x00047484) vid6_indi_pane_g1

0xdb96,	// (0x00047496) vid6_indi_pane_g2_ParamLimits

0xdb96,	// (0x00047496) vid6_indi_pane_g2

0xdba8,	// (0x000474a8) vid6_indi_pane_g3_ParamLimits

0xdba8,	// (0x000474a8) vid6_indi_pane_g3

0xdbbd,	// (0x000474bd) vid6_indi_pane_g4_ParamLimits

0xdbbd,	// (0x000474bd) vid6_indi_pane_g4

0xdbd2,	// (0x000474d2) vid6_indi_pane_g5_ParamLimits

0xdbd2,	// (0x000474d2) vid6_indi_pane_g5

0x0004,

0xfbb0,	// (0x000494b0) vid6_indi_pane_g_ParamLimits

0xfbb0,	// (0x000494b0) vid6_indi_pane_g

0xdbec,	// (0x000474ec) vid6_indi_pane_t1_ParamLimits

0xdbec,	// (0x000474ec) vid6_indi_pane_t1

0xdc02,	// (0x00047502) vid6_indi_pane_t2_ParamLimits

0xdc02,	// (0x00047502) vid6_indi_pane_t2

0xdc2a,	// (0x0004752a) vid6_indi_pane_t3_ParamLimits

0xdc2a,	// (0x0004752a) vid6_indi_pane_t3

0xdc52,	// (0x00047552) vid6_indi_pane_t4_ParamLimits

0xdc52,	// (0x00047552) vid6_indi_pane_t4

0x0003,

0xfbbb,	// (0x000494bb) vid6_indi_pane_t_ParamLimits

0xfbbb,	// (0x000494bb) vid6_indi_pane_t

0xdc76,	// (0x00047576) wait_bar_pane_cp08

0x9c97,	// (0x00043597) main_cset_text2_pane_t1_ParamLimits

0x9c97,	// (0x00043597) main_cset_text2_pane_t1

0x9c31,	// (0x00043531) listscroll_gen_pane_cp06_t1_ParamLimits

0x9c31,	// (0x00043531) listscroll_gen_pane_cp06_t1

0x0f8a,	// (0x0003a88a) main_cam6_set_pane

0xcb94,	// (0x00046494) bg_tb_trans_pane_cp06_ParamLimits

0xefa9,	// (0x000488a9) cam4_indicators_pane_g1_ParamLimits

0xefb9,	// (0x000488b9) cam4_indicators_pane_g2_ParamLimits

0xf929,	// (0x00049229) cam4_indicators_pane_g_ParamLimits

0xefd9,	// (0x000488d9) cam4_indicators_pane_t1_ParamLimits

0xd2e0,	// (0x00046be0) bg_tb_trans_pane_cp07_ParamLimits

0x89e6,	// (0x000422e6) vid4_indicators_pane_g1_ParamLimits

0x89f3,	// (0x000422f3) vid4_indicators_pane_g2_ParamLimits

0x8a00,	// (0x00042300) vid4_indicators_pane_g3_ParamLimits

0x8a0d,	// (0x0004230d) vid4_indicators_pane_g4_ParamLimits

0xf93b,	// (0x0004923b) vid4_indicators_pane_g_ParamLimits

0x8a25,	// (0x00042325) vid4_indicators_pane_t1_ParamLimits

0xf057,	// (0x00048957) vid4_progress_pane_g1_ParamLimits

0xf066,	// (0x00048966) vid4_progress_pane_g2_ParamLimits

0xf075,	// (0x00048975) vid4_progress_pane_g3_ParamLimits

0xf084,	// (0x00048984) vid4_progress_pane_g4_ParamLimits

0xfaec,	// (0x000493ec) vid4_progress_pane_g_ParamLimits

0xf090,	// (0x00048990) vid4_progress_pane_t1_ParamLimits

0xf0a6,	// (0x000489a6) vid4_progress_pane_t2_ParamLimits

0xf0bb,	// (0x000489bb) vid4_progress_pane_t3_ParamLimits

0xfaf7,	// (0x000493f7) vid4_progress_pane_t_ParamLimits

0xf0d0,	// (0x000489d0) wait_bar_pane_cp07_ParamLimits

0x9cb1,	// (0x000435b1) main_cam6_set_pane_g2_ParamLimits

0x9cb1,	// (0x000435b1) main_cam6_set_pane_g2

0x9cd3,	// (0x000435d3) main_cset6_listscroll_pane_ParamLimits

0x9cd3,	// (0x000435d3) main_cset6_listscroll_pane

0x9ced,	// (0x000435ed) main_cset6_slider_pane_ParamLimits

0x9ced,	// (0x000435ed) main_cset6_slider_pane

0x9d03,	// (0x00043603) main_cset6_text2_pane_ParamLimits

0x9d03,	// (0x00043603) main_cset6_text2_pane

0xdc86,	// (0x00047586) main_cset6_text_pane

0xd46e,	// (0x00046d6e) main_cset_list_pane_copy1_ParamLimits

0xd46e,	// (0x00046d6e) main_cset_list_pane_copy1

0xd47e,	// (0x00046d7e) scroll_pane_cp028_copy1

0x9d11,	// (0x00043611) cset_list_set_pane_copy1

0x9d23,	// (0x00043623) aid_position_infowindow_above_copy1

0x9d2b,	// (0x0004362b) aid_position_infowindow_below_copy1

0x2eb0,	// (0x0003c7b0) cset_list_set_pane_g1_copy1

0x2d13,	// (0x0003c613) cset_list_set_pane_g3_copy1_ParamLimits

0x2d13,	// (0x0003c613) cset_list_set_pane_g3_copy1

0x2eb8,	// (0x0003c7b8) cset_list_set_pane_t1_copy1_ParamLimits

0x2eb8,	// (0x0003c7b8) cset_list_set_pane_t1_copy1

0x1c39,	// (0x0003b539) list_highlight_pane_cp021_copy1_ParamLimits

0x1c39,	// (0x0003b539) list_highlight_pane_cp021_copy1

0xdc8e,	// (0x0004758e) cset6_slider_pane_ParamLimits

0xdc8e,	// (0x0004758e) cset6_slider_pane

0xdcba,	// (0x000475ba) main_cset6_slider_pane_g1_ParamLimits

0xdcba,	// (0x000475ba) main_cset6_slider_pane_g1

0x9d33,	// (0x00043633) main_cset6_slider_pane_g2_ParamLimits

0x9d33,	// (0x00043633) main_cset6_slider_pane_g2

0xd493,	// (0x00046d93) main_cset6_slider_pane_g3_ParamLimits

0xd493,	// (0x00046d93) main_cset6_slider_pane_g3

0x9019,	// (0x00042919) main_cset6_slider_pane_g4_ParamLimits

0x9019,	// (0x00042919) main_cset6_slider_pane_g4

0x9061,	// (0x00042961) main_cset6_slider_pane_g5_ParamLimits

0x9061,	// (0x00042961) main_cset6_slider_pane_g5

0xd493,	// (0x00046d93) main_cset6_slider_pane_g7_ParamLimits

0xd493,	// (0x00046d93) main_cset6_slider_pane_g7

0xd49f,	// (0x00046d9f) main_cset6_slider_pane_g8_ParamLimits

0xd49f,	// (0x00046d9f) main_cset6_slider_pane_g8

0x9001,	// (0x00042901) main_cset6_slider_pane_g9_ParamLimits

0x9001,	// (0x00042901) main_cset6_slider_pane_g9

0x900d,	// (0x0004290d) main_cset6_slider_pane_g10_ParamLimits

0x900d,	// (0x0004290d) main_cset6_slider_pane_g10

0x9019,	// (0x00042919) main_cset6_slider_pane_g11_ParamLimits

0x9019,	// (0x00042919) main_cset6_slider_pane_g11

0x9025,	// (0x00042925) main_cset6_slider_pane_g12_ParamLimits

0x9025,	// (0x00042925) main_cset6_slider_pane_g12

0x9031,	// (0x00042931) main_cset6_slider_pane_g13_ParamLimits

0x9031,	// (0x00042931) main_cset6_slider_pane_g13

0x903d,	// (0x0004293d) main_cset6_slider_pane_g14_ParamLimits

0x903d,	// (0x0004293d) main_cset6_slider_pane_g14

0x9d5b,	// (0x0004365b) main_cset6_slider_pane_g15_ParamLimits

0x9d5b,	// (0x0004365b) main_cset6_slider_pane_g15

0x9061,	// (0x00042961) main_cset6_slider_pane_g16_ParamLimits

0x9061,	// (0x00042961) main_cset6_slider_pane_g16

0x906d,	// (0x0004296d) main_cset6_slider_pane_g17_ParamLimits

0x906d,	// (0x0004296d) main_cset6_slider_pane_g17

0x0011,

0xfbc4,	// (0x000494c4) main_cset6_slider_pane_g_ParamLimits

0xfbc4,	// (0x000494c4) main_cset6_slider_pane_g

0xdce2,	// (0x000475e2) main_cset6_slider_pane_t1_ParamLimits

0xdce2,	// (0x000475e2) main_cset6_slider_pane_t1

0xdd23,	// (0x00047623) main_cset6_slider_pane_t2_ParamLimits

0xdd23,	// (0x00047623) main_cset6_slider_pane_t2

0xdd4e,	// (0x0004764e) main_cset6_slider_pane_t3_ParamLimits

0xdd4e,	// (0x0004764e) main_cset6_slider_pane_t3

0x9d73,	// (0x00043673) main_cset6_slider_pane_t4_ParamLimits

0x9d73,	// (0x00043673) main_cset6_slider_pane_t4

0x9d9e,	// (0x0004369e) main_cset6_slider_pane_t5_ParamLimits

0x9d9e,	// (0x0004369e) main_cset6_slider_pane_t5

0xdd79,	// (0x00047679) main_cset6_slider_pane_t7_ParamLimits

0xdd79,	// (0x00047679) main_cset6_slider_pane_t7

0x9dc9,	// (0x000436c9) main_cset6_slider_pane_t8_ParamLimits

0x9dc9,	// (0x000436c9) main_cset6_slider_pane_t8

0x9ded,	// (0x000436ed) main_cset6_slider_pane_t9_ParamLimits

0x9ded,	// (0x000436ed) main_cset6_slider_pane_t9

0x9e11,	// (0x00043711) main_cset6_slider_pane_t10_ParamLimits

0x9e11,	// (0x00043711) main_cset6_slider_pane_t10

0x9e35,	// (0x00043735) main_cset6_slider_pane_t11_ParamLimits

0x9e35,	// (0x00043735) main_cset6_slider_pane_t11

0xddaf,	// (0x000476af) main_cset6_slider_pane_t14_ParamLimits

0xddaf,	// (0x000476af) main_cset6_slider_pane_t14

0xdde8,	// (0x000476e8) main_cset6_slider_pane_t15_ParamLimits

0xdde8,	// (0x000476e8) main_cset6_slider_pane_t15

0x000b,

0xfbe9,	// (0x000494e9) main_cset6_slider_pane_t_ParamLimits

0xfbe9,	// (0x000494e9) main_cset6_slider_pane_t

0xd578,	// (0x00046e78) cset_slider_pane_g1_copy1

0xd581,	// (0x00046e81) cset_slider_pane_g2_copy1

0xd58a,	// (0x00046e8a) cset_slider_pane_g3_copy1

0x0f8a,	// (0x0003a88a) bg_popup_sub_pane_cp011_copy1

0xd61b,	// (0x00046f1b) main_cset_text_pane_g1_copy1

0xd623,	// (0x00046f23) main_cset_text_pane_t1_copy1

0xd631,	// (0x00046f31) main_cset_text_pane_t2_copy1

0xd63f,	// (0x00046f3f) main_cset_text_pane_t3_copy1

0xd64d,	// (0x00046f4d) main_cset_text_pane_t4_copy1

0xd65b,	// (0x00046f5b) main_cset_text_pane_t5_copy1

0xd669,	// (0x00046f69) main_cset_text_pane_t6_copy1

0xd677,	// (0x00046f77) main_cset_text_pane_t7_copy1

0x9e59,	// (0x00043759) main_cset_text2_pane_t1_copy1

0x0f8a,	// (0x0003a88a) main_ncimui_pane

0x69fe,	// (0x000402fe) popup_query_ncimui_window_ParamLimits

0x69fe,	// (0x000402fe) popup_query_ncimui_window

0xcc35,	// (0x00046535) field_cale_ev2_pane_g4_ParamLimits

0xcc35,	// (0x00046535) field_cale_ev2_pane_g4

0x83be,	// (0x00041cbe) cell_video_dialer_keypad_pane_g2_ParamLimits

0x83be,	// (0x00041cbe) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8c7,	// (0x000491c7) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8c7,	// (0x000491c7) cell_video_dialer_keypad_pane_g

0x83d6,	// (0x00041cd6) cell_video_dialer_keypad_pane_t1

0x0f8a,	// (0x0003a88a) bg_popup_window_pane_cp012

0x52ac,	// (0x0003ebac) heading_pane_cp06

0xdf16,	// (0x00047816) ncim_query_content_pane

0x0f8a,	// (0x0003a88a) bg_popup_heading_pane_cp01

0xdf1e,	// (0x0004781e) ncim_heading_pane_t1

0xdf2c,	// (0x0004782c) ncim_indicator_popup_pane

0xdf3e,	// (0x0004783e) ncim_query_button_pane

0xdf52,	// (0x00047852) ncim_query_content_pane_t1

0xdf64,	// (0x00047864) ncim_query_content_pane_t2

0x0005,

0xfc28,	// (0x00049528) ncim_query_content_pane_t

0xdf9e,	// (0x0004789e) ncim_query_list_pane

0xdfb0,	// (0x000478b0) ncim_query_popup_pane

0xdf2c,	// (0x0004782c) ncim_indicator_popup_pane_ParamLimits

0x9f6c,	// (0x0004386c) ncim_query_content_pane_g1_ParamLimits

0x9f6c,	// (0x0004386c) ncim_query_content_pane_g1

0xdf52,	// (0x00047852) ncim_query_content_pane_t1_ParamLimits

0xdf64,	// (0x00047864) ncim_query_content_pane_t2_ParamLimits

0x9f78,	// (0x00043878) ncim_query_content_pane_t3_ParamLimits

0x9f78,	// (0x00043878) ncim_query_content_pane_t3

0x9fa0,	// (0x000438a0) ncim_query_content_pane_t4_ParamLimits

0x9fa0,	// (0x000438a0) ncim_query_content_pane_t4

0x9fc8,	// (0x000438c8) ncim_query_content_pane_t5_ParamLimits

0x9fc8,	// (0x000438c8) ncim_query_content_pane_t5

0xdf76,	// (0x00047876) ncim_query_content_pane_t6_ParamLimits

0xdf76,	// (0x00047876) ncim_query_content_pane_t6

0xfc28,	// (0x00049528) ncim_query_content_pane_t_ParamLimits

0xdf9e,	// (0x0004789e) ncim_query_list_pane_ParamLimits

0xdfb0,	// (0x000478b0) ncim_query_popup_pane_ParamLimits

0xdfc4,	// (0x000478c4) wait_bar_pane_cp04

0x0f8a,	// (0x0003a88a) input_focus_pane_cp011

0xdfcc,	// (0x000478cc) ncim_query_popup_pane_t1

0xdfda,	// (0x000478da) ncim_list_query_list_pane_ParamLimits

0xdfda,	// (0x000478da) ncim_list_query_list_pane

0x0f8a,	// (0x0003a88a) bg_button_pane_cp027

0xdfed,	// (0x000478ed) ncim_query_button_pane_g1

0x0f8a,	// (0x0003a88a) list_highlight_pane_cp012

0xdff7,	// (0x000478f7) ncim_list_query_list_pane_g1

0xdfff,	// (0x000478ff) ncim_list_query_list_pane_t1

0xefc9,	// (0x000488c9) cam4_indicators_pane_g3_ParamLimits

0xefc9,	// (0x000488c9) cam4_indicators_pane_g3

0x8a19,	// (0x00042319) vid4_indicators_pane_g5_ParamLimits

0x8a19,	// (0x00042319) vid4_indicators_pane_g5

0x501b,	// (0x0003e91b) vid4_progress_pane_g5_ParamLimits

0x501b,	// (0x0003e91b) vid4_progress_pane_g5

0x9e87,	// (0x00043787) main_ncimui_pane_g1

0x9edd,	// (0x000437dd) ncimui_group_query_pane_ParamLimits

0x9edd,	// (0x000437dd) ncimui_group_query_pane

0x9f19,	// (0x00043819) ncimui_list_pane_ParamLimits

0x9f19,	// (0x00043819) ncimui_list_pane

0x9f38,	// (0x00043838) ncimui_text_pane_ParamLimits

0x9f38,	// (0x00043838) ncimui_text_pane

0x9ff0,	// (0x000438f0) ncimui_text_pane_t1_ParamLimits

0x9ff0,	// (0x000438f0) ncimui_text_pane_t1

0xe016,	// (0x00047916) ncimui_list_single_graphic_pane_ParamLimits

0xe016,	// (0x00047916) ncimui_list_single_graphic_pane

0xa00e,	// (0x0004390e) ncimui_query_pane_ParamLimits

0xa00e,	// (0x0004390e) ncimui_query_pane

0x0f8a,	// (0x0003a88a) list_highlight_pane_cp013

0xe023,	// (0x00047923) ncim_list_query_list_pane_t1_copy1

0xe031,	// (0x00047931) ncim_list_single_graphic_pane_g1

0xe039,	// (0x00047939) ncim_query_button_pane_cp01

0xe045,	// (0x00047945) ncim_query_entry_pane_ParamLimits

0xe045,	// (0x00047945) ncim_query_entry_pane

0xe058,	// (0x00047958) ncimui_query_pane_g1

0xe064,	// (0x00047964) ncimui_query_pane_t1_ParamLimits

0xe064,	// (0x00047964) ncimui_query_pane_t1

0x1c39,	// (0x0003b539) input_focus_pane_cp012

0xe07d,	// (0x0004797d) ncim_query_entry_pane_t1

0x1710,	// (0x0003b010) main_im_pane_ParamLimits

0x1c39,	// (0x0003b539) main_mobtv_pane_ParamLimits

0x1c39,	// (0x0003b539) main_mobtv_pane

0x9001,	// (0x00042901) main_cset6_slider_pane_g18_ParamLimits

0x9001,	// (0x00042901) main_cset6_slider_pane_g18

0x9031,	// (0x00042931) main_cset6_slider_pane_g19_ParamLimits

0x9031,	// (0x00042931) main_cset6_slider_pane_g19

0xe08f,	// (0x0004798f) bg_main_mobtv_pane_ParamLimits

0xe08f,	// (0x0004798f) bg_main_mobtv_pane

0xa01e,	// (0x0004391e) main_mobtv_info_pane

0xa027,	// (0x00043927) main_mobtv_loading_pane_ParamLimits

0xa027,	// (0x00043927) main_mobtv_loading_pane

0xe09d,	// (0x0004799d) main_mobtv_pg_channel_list_pane

0xe0a7,	// (0x000479a7) main_mobtv_pg_hdr_pane

0xa034,	// (0x00043934) main_mobtv_programe_curr_pane_ParamLimits

0xa034,	// (0x00043934) main_mobtv_programe_curr_pane

0xa041,	// (0x00043941) main_mobtv_programe_next_pane_ParamLimits

0xa041,	// (0x00043941) main_mobtv_programe_next_pane

0xe0b0,	// (0x000479b0) popup_mobtv_noti_window

0xc965,	// (0x00046265) main_tv_pg_hdr_pane_g1

0xe0b8,	// (0x000479b8) main_tv_pg_hdr_pane_g2

0xe0c0,	// (0x000479c0) main_tv_pg_hdr_pane_g3

0xe0c8,	// (0x000479c8) main_tv_pg_hdr_pane_g4

0xe0d0,	// (0x000479d0) main_tv_pg_hdr_pane_g5

0xe0d8,	// (0x000479d8) main_tv_pg_hdr_pane_g6

0xe0e0,	// (0x000479e0) main_tv_pg_hdr_pane_g7

0xe0e8,	// (0x000479e8) main_tv_pg_hdr_pane_g8

0xe0f0,	// (0x000479f0) main_tv_pg_hdr_pane_g9

0xe0f8,	// (0x000479f8) main_tv_pg_hdr_pane_g10

0xe102,	// (0x00047a02) main_tv_pg_hdr_pane_g11

0x000a,

0xfc35,	// (0x00049535) main_tv_pg_hdr_pane_g

0xe10c,	// (0x00047a0c) main_tv_pg_hdr_pane_t1

0xe11a,	// (0x00047a1a) main_tv_pg_hdr_pane_t2

0xe128,	// (0x00047a28) main_tv_pg_hdr_pane_t3

0xe136,	// (0x00047a36) main_tv_pg_hdr_pane_t4

0xe144,	// (0x00047a44) main_tv_pg_hdr_pane_t5

0x0004,

0xfc4c,	// (0x0004954c) main_tv_pg_hdr_pane_t

0xe152,	// (0x00047a52) single_mobtv_pg_channel_pane_ParamLimits

0xe152,	// (0x00047a52) single_mobtv_pg_channel_pane

0xe164,	// (0x00047a64) single_mobtv_pg_channel_table_pane

0xe16d,	// (0x00047a6d) single_mobtv_pg_channel_thumb_pane

0xe176,	// (0x00047a76) single_tv_pg_channel_pane_g1

0xe17f,	// (0x00047a7f) single_tv_pg_channel_pane_g2

0x0001,

0xfc57,	// (0x00049557) single_tv_pg_channel_pane_g

0xcb94,	// (0x00046494) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xcb94,	// (0x00046494) bg_single_mobtv_pg_channel_thumb_pane

0xe188,	// (0x00047a88) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe188,	// (0x00047a88) single_mobtv_pg_channel_thumb_pane_g1

0xe196,	// (0x00047a96) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe196,	// (0x00047a96) single_mobtv_pg_channel_thumb_pane_g2

0xe1a2,	// (0x00047aa2) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe1a2,	// (0x00047aa2) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc5c,	// (0x0004955c) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc5c,	// (0x0004955c) single_mobtv_pg_channel_thumb_pane_g

0xe1ae,	// (0x00047aae) single_mobtv_pg_channel_thumb_pane_t1

0xe1bc,	// (0x00047abc) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc63,	// (0x00049563) single_mobtv_pg_channel_thumb_pane_t

0xc965,	// (0x00046265) bg_single_mobtv_pg_channel_table_pane_g1

0xc965,	// (0x00046265) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf713,	// (0x00049013) bg_single_mobtv_pg_channel_table_pane_g

0xe1ca,	// (0x00047aca) single_mobtv_pg_channel_table_pane_t1

0xe1d8,	// (0x00047ad8) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc68,	// (0x00049568) single_mobtv_pg_channel_table_pane_t

0xa056,	// (0x00043956) main_mobtv_info_pane_g1_ParamLimits

0xa056,	// (0x00043956) main_mobtv_info_pane_g1

0xa072,	// (0x00043972) main_mobtv_info_pane_t1_ParamLimits

0xa072,	// (0x00043972) main_mobtv_info_pane_t1

0xa0d8,	// (0x000439d8) main_mobtv_info_pane_t2_ParamLimits

0xa0d8,	// (0x000439d8) main_mobtv_info_pane_t2

0x0002,

0xfc72,	// (0x00049572) main_mobtv_info_pane_t_ParamLimits

0xfc72,	// (0x00049572) main_mobtv_info_pane_t

0xa15b,	// (0x00043a5b) wait_bar_pane_cp05

0xa16b,	// (0x00043a6b) main_mobtv_loading_pane_g1_ParamLimits

0xa16b,	// (0x00043a6b) main_mobtv_loading_pane_g1

0xa17c,	// (0x00043a7c) main_mobtv_loading_pane_g2_ParamLimits

0xa17c,	// (0x00043a7c) main_mobtv_loading_pane_g2

0xa188,	// (0x00043a88) main_mobtv_loading_pane_g3_ParamLimits

0xa188,	// (0x00043a88) main_mobtv_loading_pane_g3

0x0002,

0xfc79,	// (0x00049579) main_mobtv_loading_pane_g_ParamLimits

0xfc79,	// (0x00049579) main_mobtv_loading_pane_g

0xe1e6,	// (0x00047ae6) main_mobtv_loading_pane_t1_ParamLimits

0xe1e6,	// (0x00047ae6) main_mobtv_loading_pane_t1

0xe1fe,	// (0x00047afe) main_mobtv_loading_pane_t2_ParamLimits

0xe1fe,	// (0x00047afe) main_mobtv_loading_pane_t2

0x0001,

0xfc80,	// (0x00049580) main_mobtv_loading_pane_t_ParamLimits

0xfc80,	// (0x00049580) main_mobtv_loading_pane_t

0xa199,	// (0x00043a99) wait_bar_pane_cp06_ParamLimits

0xa199,	// (0x00043a99) wait_bar_pane_cp06

0xe222,	// (0x00047b22) main_mobtv_programe_curr_pane_t1

0xe230,	// (0x00047b30) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc85,	// (0x00049585) main_mobtv_programe_curr_pane_t

0xe23e,	// (0x00047b3e) main_mobtv_programe_next_pane_t1

0xe24c,	// (0x00047b4c) main_mobtv_programe_next_pane_t2

0xe25a,	// (0x00047b5a) main_mobtv_programe_next_pane_t3

0x0002,

0xfc8a,	// (0x0004958a) main_mobtv_programe_next_pane_t

0x0f8a,	// (0x0003a88a) bg_popup_mobtv_noti_window_pane

0xe268,	// (0x00047b68) popup_mobtv_noti_window_g1

0xe270,	// (0x00047b70) popup_mobtv_noti_window_t1

0xe27e,	// (0x00047b7e) popup_mobtv_noti_window_t2

0x0001,

0xfc91,	// (0x00049591) popup_mobtv_noti_window_t

0xc965,	// (0x00046265) bg_popup_mobtv_noti_window_pane_g1

0x0f8a,	// (0x0003a88a) sc_clock_pane

0x0f8a,	// (0x0003a88a) main_fs_bigclock_pane

0x9a19,	// (0x00043319) blid2_tripm_pane_t4_ParamLimits

0x9a19,	// (0x00043319) blid2_tripm_pane_t4

0xa1a8,	// (0x00043aa8) sc_clock_pane_g1_ParamLimits

0xa1a8,	// (0x00043aa8) sc_clock_pane_g1

0xa1ba,	// (0x00043aba) sc_clock_pane_t1_ParamLimits

0xa1ba,	// (0x00043aba) sc_clock_pane_t1

0xa1dc,	// (0x00043adc) sc_clock_pane_t2_ParamLimits

0xa1dc,	// (0x00043adc) sc_clock_pane_t2

0xa1f2,	// (0x00043af2) sc_clock_pane_t3_ParamLimits

0xa1f2,	// (0x00043af2) sc_clock_pane_t3

0x0004,

0xfc96,	// (0x00049596) sc_clock_pane_t_ParamLimits

0xfc96,	// (0x00049596) sc_clock_pane_t

0xa99f,	// (0x0004429f) main_fs_bigclock_indicator_pane_ParamLimits

0xa99f,	// (0x0004429f) main_fs_bigclock_indicator_pane

0xcb64,	// (0x00046464) main_fs_bigclock_pane_g1_ParamLimits

0xcb64,	// (0x00046464) main_fs_bigclock_pane_g1

0xa9ab,	// (0x000442ab) main_fs_bigclock_pane_t1_ParamLimits

0xa9ab,	// (0x000442ab) main_fs_bigclock_pane_t1

0xa9bd,	// (0x000442bd) main_fs_bigclock_pane_t2_ParamLimits

0xa9bd,	// (0x000442bd) main_fs_bigclock_pane_t2

0xa9cf,	// (0x000442cf) main_fs_bigclock_pane_t3_ParamLimits

0xa9cf,	// (0x000442cf) main_fs_bigclock_pane_t3

0x0002,

0xfe90,	// (0x00049790) main_fs_bigclock_pane_t_ParamLimits

0xfe90,	// (0x00049790) main_fs_bigclock_pane_t

0x05af,	// (0x00039eaf) main_fs_bigclock_indicator_pane_g1

0xdf46,	// (0x00047846) ncim_query_content_pane_g2_ParamLimits

0xdf46,	// (0x00047846) ncim_query_content_pane_g2

0x0001,

0xfc23,	// (0x00049523) ncim_query_content_pane_g_ParamLimits

0xfc23,	// (0x00049523) ncim_query_content_pane_g

0xa207,	// (0x00043b07) sc_clock_pane_t4_ParamLimits

0xa207,	// (0x00043b07) sc_clock_pane_t4

0x1c39,	// (0x0003b539) main_radioblah_pane

0xd282,	// (0x00046b82) cell_call4_button_pane_t1_copy1_ParamLimits

0xd282,	// (0x00046b82) cell_call4_button_pane_t1_copy1

0x9e8f,	// (0x0004378f) main_ncimui_pane_t1_ParamLimits

0x9e8f,	// (0x0004378f) main_ncimui_pane_t1

0x9ea9,	// (0x000437a9) main_ncimui_pane_t2_ParamLimits

0x9ea9,	// (0x000437a9) main_ncimui_pane_t2

0x0002,

0xfc1c,	// (0x0004951c) main_ncimui_pane_t_ParamLimits

0xfc1c,	// (0x0004951c) main_ncimui_pane_t

0xe3a8,	// (0x00047ca8) main_radioblah_anim_pane_ParamLimits

0xe3a8,	// (0x00047ca8) main_radioblah_anim_pane

0xe3b9,	// (0x00047cb9) main_radioblah_info_pane_ParamLimits

0xe3b9,	// (0x00047cb9) main_radioblah_info_pane

0xe3cd,	// (0x00047ccd) main_radioblah_pane_t1_ParamLimits

0xe3cd,	// (0x00047ccd) main_radioblah_pane_t1

0xe3e9,	// (0x00047ce9) main_radioblah_pane_t2_ParamLimits

0xe3e9,	// (0x00047ce9) main_radioblah_pane_t2

0x0003,

0xfcb7,	// (0x000495b7) main_radioblah_pane_t_ParamLimits

0xfcb7,	// (0x000495b7) main_radioblah_pane_t

0xa29e,	// (0x00043b9e) main_radioblah_rocker_ctrl_pane_ParamLimits

0xa29e,	// (0x00043b9e) main_radioblah_rocker_ctrl_pane

0xe431,	// (0x00047d31) main_radioblah_info_pane_t1_ParamLimits

0xe431,	// (0x00047d31) main_radioblah_info_pane_t1

0xa2f2,	// (0x00043bf2) main_radioblah_info_pane_t2_ParamLimits

0xa2f2,	// (0x00043bf2) main_radioblah_info_pane_t2

0x0003,

0xfcc0,	// (0x000495c0) main_radioblah_info_pane_t_ParamLimits

0xfcc0,	// (0x000495c0) main_radioblah_info_pane_t

0xc965,	// (0x00046265) main_radioblah_rocker_ctrl_pane_g1

0xa3a0,	// (0x00043ca0) main_radioblah_rocker_ctrl_pane_g2

0xa3a8,	// (0x00043ca8) main_radioblah_rocker_ctrl_pane_g3

0xa3b0,	// (0x00043cb0) main_radioblah_rocker_ctrl_pane_g4

0xa3b8,	// (0x00043cb8) main_radioblah_rocker_ctrl_pane_g5

0xa3c0,	// (0x00043cc0) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcc9,	// (0x000495c9) main_radioblah_rocker_ctrl_pane_g

0x9e59,	// (0x00043759) main_cset_text2_pane_t1_copy1_ParamLimits

0xef99,	// (0x00048899) cam4_image_uncrop_qvga_pane

0xeff3,	// (0x000488f3) vid4_image_uncrop_qcif_pane

0xf0e0,	// (0x000489e0) cam6_image_uncrop_qvga_pane_ParamLimits

0xf0e0,	// (0x000489e0) cam6_image_uncrop_qvga_pane

0xdb6c,	// (0x0004746c) vid6_image_uncrop_qcif_pane_ParamLimits

0xdb6c,	// (0x0004746c) vid6_image_uncrop_qcif_pane

0x0f8a,	// (0x0003a88a) bg_popup_preview_window_pane_cp03

0xdeec,	// (0x000477ec) list_cset_text2_pane

0xdef4,	// (0x000477f4) main_cset6_text2_pane_g1

0xdefc,	// (0x000477fc) main_cset6_text2_pane_t1

0xa3c8,	// (0x00043cc8) list_cset_text2_pane_t1_ParamLimits

0xa3c8,	// (0x00043cc8) list_cset_text2_pane_t1

0x1c39,	// (0x0003b539) main_radioblah_pane_ParamLimits

0xa149,	// (0x00043a49) main_mobtv_info_pane_t3_ParamLimits

0xa149,	// (0x00043a49) main_mobtv_info_pane_t3

0xa28c,	// (0x00043b8c) main_radioblah_pane_g1

0xa2c6,	// (0x00043bc6) main_radioblah_info_pane_g1

0xa345,	// (0x00043c45) main_radioblah_info_pane_t3_ParamLimits

0xa345,	// (0x00043c45) main_radioblah_info_pane_t3

0x4da6,	// (0x0003e6a6) highlight_cell_cale_month_pane_ParamLimits

0x4da6,	// (0x0003e6a6) highlight_cell_cale_month_pane

0x0f8a,	// (0x0003a88a) main_phob_fisheye_pane

0xccde,	// (0x000465de) scroll_pane_cp0031_ParamLimits

0xccde,	// (0x000465de) scroll_pane_cp0031

0xdc76,	// (0x00047576) wait_bar_pane_cp08_ParamLimits

0x9d11,	// (0x00043611) cset_list_set_pane_copy1_ParamLimits

0xe46b,	// (0x00047d6b) highlight_cell_cale_month_pane_g1

0xa3e1,	// (0x00043ce1) highlight_cell_cale_month_pane_t1

0xe473,	// (0x00047d73) list_gen_pane_cp01

0xd47e,	// (0x00046d7e) scroll_pane_01

0x1c53,	// (0x0003b553) list_single_double_fisheye_pane

0xe47c,	// (0x00047d7c) list_double_fisheye_pane_g1_ParamLimits

0xe47c,	// (0x00047d7c) list_double_fisheye_pane_g1

0xe488,	// (0x00047d88) list_double_fisheye_pane_g2_ParamLimits

0xe488,	// (0x00047d88) list_double_fisheye_pane_g2

0x1c5c,	// (0x0003b55c) list_double_fisheye_pane_g3_ParamLimits

0x1c5c,	// (0x0003b55c) list_double_fisheye_pane_g3

0x0004,

0xfcd6,	// (0x000495d6) list_double_fisheye_pane_g_ParamLimits

0xfcd6,	// (0x000495d6) list_double_fisheye_pane_g

0xe4b9,	// (0x00047db9) list_double_fisheye_pane_t1_ParamLimits

0xe4b9,	// (0x00047db9) list_double_fisheye_pane_t1

0xe4d4,	// (0x00047dd4) list_double_fisheye_pane_t2_ParamLimits

0xe4d4,	// (0x00047dd4) list_double_fisheye_pane_t2

0x0001,

0xfce1,	// (0x000495e1) list_double_fisheye_pane_t_ParamLimits

0xfce1,	// (0x000495e1) list_double_fisheye_pane_t

0x0f8a,	// (0x0003a88a) main_call5_pane

0xa230,	// (0x00043b30) sc_swipe_pane_ParamLimits

0xa230,	// (0x00043b30) sc_swipe_pane

0xa400,	// (0x00043d00) call5_image_pane_ParamLimits

0xa400,	// (0x00043d00) call5_image_pane

0xa415,	// (0x00043d15) call5_swipe_1_pane_ParamLimits

0xa415,	// (0x00043d15) call5_swipe_1_pane

0xa426,	// (0x00043d26) call5_swipe_2_pane_ParamLimits

0xa426,	// (0x00043d26) call5_swipe_2_pane

0xa44b,	// (0x00043d4b) popup_call5_audio_first_window_ParamLimits

0xa44b,	// (0x00043d4b) popup_call5_audio_first_window

0xcb94,	// (0x00046494) call5_swipe_1_pane_g1_ParamLimits

0xcb94,	// (0x00046494) call5_swipe_1_pane_g1

0xe4f6,	// (0x00047df6) call5_swipe_1_pane_g2_ParamLimits

0xe4f6,	// (0x00047df6) call5_swipe_1_pane_g2

0x0001,

0xfce6,	// (0x000495e6) call5_swipe_1_pane_g_ParamLimits

0xfce6,	// (0x000495e6) call5_swipe_1_pane_g

0xe502,	// (0x00047e02) call5_swipe_1_pane_t1_ParamLimits

0xe502,	// (0x00047e02) call5_swipe_1_pane_t1

0xcb94,	// (0x00046494) call5_swipe_2_pane_g1_ParamLimits

0xcb94,	// (0x00046494) call5_swipe_2_pane_g1

0xe517,	// (0x00047e17) call5_swipe_2_pane_g2_ParamLimits

0xe517,	// (0x00047e17) call5_swipe_2_pane_g2

0x0001,

0xfceb,	// (0x000495eb) call5_swipe_2_pane_g_ParamLimits

0xfceb,	// (0x000495eb) call5_swipe_2_pane_g

0xe523,	// (0x00047e23) call5_swipe_2_pane_t1_ParamLimits

0xe523,	// (0x00047e23) call5_swipe_2_pane_t1

0xe538,	// (0x00047e38) sc_swipe_pane_g1_ParamLimits

0xe538,	// (0x00047e38) sc_swipe_pane_g1

0xe545,	// (0x00047e45) sc_swipe_pane_g2_ParamLimits

0xe545,	// (0x00047e45) sc_swipe_pane_g2

0x0001,

0xfcf0,	// (0x000495f0) sc_swipe_pane_g_ParamLimits

0xfcf0,	// (0x000495f0) sc_swipe_pane_g

0xe551,	// (0x00047e51) sc_swipe_pane_t1_ParamLimits

0xe551,	// (0x00047e51) sc_swipe_pane_t1

0x0f8a,	// (0x0003a88a) main_cmail_launcher_pane

0xa45a,	// (0x00043d5a) aid_size_cell_cmail_l_ParamLimits

0xa45a,	// (0x00043d5a) aid_size_cell_cmail_l

0xa473,	// (0x00043d73) grid_cmail_l_pane_ParamLimits

0xa473,	// (0x00043d73) grid_cmail_l_pane

0xa488,	// (0x00043d88) cell_cmail_l_pane_ParamLimits

0xa488,	// (0x00043d88) cell_cmail_l_pane

0xa4aa,	// (0x00043daa) cell_cmail_l_pane_g1_ParamLimits

0xa4aa,	// (0x00043daa) cell_cmail_l_pane_g1

0xa4ba,	// (0x00043dba) cell_cmail_l_pane_t1_ParamLimits

0xa4ba,	// (0x00043dba) cell_cmail_l_pane_t1

0xe566,	// (0x00047e66) cell_cmail_l_pane_t2_ParamLimits

0xe566,	// (0x00047e66) cell_cmail_l_pane_t2

0x0001,

0xfcf5,	// (0x000495f5) cell_cmail_l_pane_t_ParamLimits

0xfcf5,	// (0x000495f5) cell_cmail_l_pane_t

0x1c39,	// (0x0003b539) grid_highlight_pane_cp018_ParamLimits

0x1c39,	// (0x0003b539) grid_highlight_pane_cp018

0x3513,	// (0x0003ce13) main2_pane_ParamLimits

0x3513,	// (0x0003ce13) main2_pane

0x17bb,	// (0x0003b0bb) popup_sp_fs_action_menu_bg_pane_g1

0x17c3,	// (0x0003b0c3) popup_sp_fs_action_menu_bg_pane_g2

0x17cb,	// (0x0003b0cb) popup_sp_fs_action_menu_bg_pane_g3

0x17d3,	// (0x0003b0d3) popup_sp_fs_action_menu_bg_pane_g4

0x17db,	// (0x0003b0db) popup_sp_fs_action_menu_bg_pane_g5

0x17e3,	// (0x0003b0e3) popup_sp_fs_action_menu_bg_pane_g6

0x17eb,	// (0x0003b0eb) popup_sp_fs_action_menu_bg_pane_g7

0x17f3,	// (0x0003b0f3) popup_sp_fs_action_menu_bg_pane_g8

0x17fb,	// (0x0003b0fb) popup_sp_fs_action_menu_bg_pane_g9

0x1803,	// (0x0003b103) popup_sp_fs_action_menu_bg_pane_g10

0x1803,	// (0x0003b103) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1ac,	// (0x00048aac) popup_sp_fs_action_menu_bg_pane_g

0xb258,	// (0x00044b58) list_medium_line_x2_t3_g3_g1_ParamLimits

0xb258,	// (0x00044b58) list_medium_line_x2_t3_g3_g1

0xb264,	// (0x00044b64) list_medium_line_x2_t3_g3_g2_ParamLimits

0xb264,	// (0x00044b64) list_medium_line_x2_t3_g3_g2

0xb270,	// (0x00044b70) list_medium_line_x2_t3_g3_g3_ParamLimits

0xb270,	// (0x00044b70) list_medium_line_x2_t3_g3_g3

0x0002,

0xf25c,	// (0x00048b5c) list_medium_line_x2_t3_g3_g_ParamLimits

0xf25c,	// (0x00048b5c) list_medium_line_x2_t3_g3_g

0xb27c,	// (0x00044b7c) list_medium_line_x2_t3_g3_t1_ParamLimits

0xb27c,	// (0x00044b7c) list_medium_line_x2_t3_g3_t1

0x2aff,	// (0x0003c3ff) list_medium_line_x2_t3_g3_t2_ParamLimits

0x2aff,	// (0x0003c3ff) list_medium_line_x2_t3_g3_t2

0xb291,	// (0x00044b91) list_medium_line_x2_t3_g3_t3_ParamLimits

0xb291,	// (0x00044b91) list_medium_line_x2_t3_g3_t3

0x0002,

0xf263,	// (0x00048b63) list_medium_line_x2_t3_g3_t_ParamLimits

0xf263,	// (0x00048b63) list_medium_line_x2_t3_g3_t

0xb258,	// (0x00044b58) list_medium_line_x2_t3_g2_g1_ParamLimits

0xb258,	// (0x00044b58) list_medium_line_x2_t3_g2_g1

0xb270,	// (0x00044b70) list_medium_line_x2_t3_g2_g2_ParamLimits

0xb270,	// (0x00044b70) list_medium_line_x2_t3_g2_g2

0x0001,

0xf26a,	// (0x00048b6a) list_medium_line_x2_t3_g2_g_ParamLimits

0xf26a,	// (0x00048b6a) list_medium_line_x2_t3_g2_g

0xb2a6,	// (0x00044ba6) list_medium_line_x2_t3_g2_t1_ParamLimits

0xb2a6,	// (0x00044ba6) list_medium_line_x2_t3_g2_t1

0xb2bc,	// (0x00044bbc) list_medium_line_x2_t3_g2_t2_ParamLimits

0xb2bc,	// (0x00044bbc) list_medium_line_x2_t3_g2_t2

0xb291,	// (0x00044b91) list_medium_line_x2_t3_g2_t3_ParamLimits

0xb291,	// (0x00044b91) list_medium_line_x2_t3_g2_t3

0x0002,

0xf26f,	// (0x00048b6f) list_medium_line_x2_t3_g2_t_ParamLimits

0xf26f,	// (0x00048b6f) list_medium_line_x2_t3_g2_t

0xb258,	// (0x00044b58) list_medium_line_x2_t4_g4_g1_ParamLimits

0xb258,	// (0x00044b58) list_medium_line_x2_t4_g4_g1

0xb2ce,	// (0x00044bce) list_medium_line_x2_t4_g4_g2_ParamLimits

0xb2ce,	// (0x00044bce) list_medium_line_x2_t4_g4_g2

0xb264,	// (0x00044b64) list_medium_line_x2_t4_g4_g3_ParamLimits

0xb264,	// (0x00044b64) list_medium_line_x2_t4_g4_g3

0xb2da,	// (0x00044bda) list_medium_line_x2_t4_g4_g4_ParamLimits

0xb2da,	// (0x00044bda) list_medium_line_x2_t4_g4_g4

0x0003,

0xf276,	// (0x00048b76) list_medium_line_x2_t4_g4_g_ParamLimits

0xf276,	// (0x00048b76) list_medium_line_x2_t4_g4_g

0x2b11,	// (0x0003c411) list_medium_line_x2_t4_g4_t1_ParamLimits

0x2b11,	// (0x0003c411) list_medium_line_x2_t4_g4_t1

0x2b28,	// (0x0003c428) list_medium_line_x2_t4_g4_t2_ParamLimits

0x2b28,	// (0x0003c428) list_medium_line_x2_t4_g4_t2

0x2b3d,	// (0x0003c43d) list_medium_line_x2_t4_g4_t3_ParamLimits

0x2b3d,	// (0x0003c43d) list_medium_line_x2_t4_g4_t3

0xb2e6,	// (0x00044be6) list_medium_line_x2_t4_g4_t4_ParamLimits

0xb2e6,	// (0x00044be6) list_medium_line_x2_t4_g4_t4

0x0003,

0xf27f,	// (0x00048b7f) list_medium_line_x2_t4_g4_t_ParamLimits

0xf27f,	// (0x00048b7f) list_medium_line_x2_t4_g4_t

0xb258,	// (0x00044b58) list_medium_line_x2_t2_g4_g1_ParamLimits

0xb258,	// (0x00044b58) list_medium_line_x2_t2_g4_g1

0xb2ce,	// (0x00044bce) list_medium_line_x2_t2_g4_g2_ParamLimits

0xb2ce,	// (0x00044bce) list_medium_line_x2_t2_g4_g2

0xb264,	// (0x00044b64) list_medium_line_x2_t2_g4_g3_ParamLimits

0xb264,	// (0x00044b64) list_medium_line_x2_t2_g4_g3

0xb270,	// (0x00044b70) list_medium_line_x2_t2_g4_g4_ParamLimits

0xb270,	// (0x00044b70) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2e6,	// (0x00048be6) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2e6,	// (0x00048be6) list_medium_line_x2_t2_g4_g

0xb2f8,	// (0x00044bf8) list_medium_line_x2_t2_g4_t1_ParamLimits

0xb2f8,	// (0x00044bf8) list_medium_line_x2_t2_g4_t1

0xb291,	// (0x00044b91) list_medium_line_x2_t2_g4_t2_ParamLimits

0xb291,	// (0x00044b91) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2ef,	// (0x00048bef) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2ef,	// (0x00048bef) list_medium_line_x2_t2_g4_t

0xb258,	// (0x00044b58) list_medium_line_x2_t2_g3_g1_ParamLimits

0xb258,	// (0x00044b58) list_medium_line_x2_t2_g3_g1

0xb264,	// (0x00044b64) list_medium_line_x2_t2_g3_g2_ParamLimits

0xb264,	// (0x00044b64) list_medium_line_x2_t2_g3_g2

0xb270,	// (0x00044b70) list_medium_line_x2_t2_g3_g3_ParamLimits

0xb270,	// (0x00044b70) list_medium_line_x2_t2_g3_g3

0x0002,

0xf25c,	// (0x00048b5c) list_medium_line_x2_t2_g3_g_ParamLimits

0xf25c,	// (0x00048b5c) list_medium_line_x2_t2_g3_g

0xb30d,	// (0x00044c0d) list_medium_line_x2_t2_g3_t1_ParamLimits

0xb30d,	// (0x00044c0d) list_medium_line_x2_t2_g3_t1

0xb291,	// (0x00044b91) list_medium_line_x2_t2_g3_t2_ParamLimits

0xb291,	// (0x00044b91) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2f4,	// (0x00048bf4) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2f4,	// (0x00048bf4) list_medium_line_x2_t2_g3_t

0x50d6,	// (0x0003e9d6) main_sp_fs_list_pane_ParamLimits

0x50d6,	// (0x0003e9d6) main_sp_fs_list_pane

0x50e3,	// (0x0003e9e3) sp_fs_scroll_pane_ParamLimits

0x50e3,	// (0x0003e9e3) sp_fs_scroll_pane

0x2b4f,	// (0x0003c44f) list_medium_line_x2_t3_t1

0x2b5f,	// (0x0003c45f) list_medium_line_x2_t3_t2

0xb350,	// (0x00044c50) list_medium_line_x2_t3_t3

0x0002,

0xf33f,	// (0x00048c3f) list_medium_line_x2_t3_t

0x2b6d,	// (0x0003c46d) list_medium_line_x3_t4_t1

0x2b7d,	// (0x0003c47d) list_medium_line_x3_t4_t2

0xb35e,	// (0x00044c5e) list_medium_line_x3_t4_t3

0xb36c,	// (0x00044c6c) list_medium_line_x3_t4_t4

0x0003,

0xf346,	// (0x00048c46) list_medium_line_x3_t4_t

0x2b8b,	// (0x0003c48b) list_medium_line_x4_t5_t1

0x2b9b,	// (0x0003c49b) list_medium_line_x4_t5_t2

0xb35e,	// (0x00044c5e) list_medium_line_x4_t5_t3

0xb37a,	// (0x00044c7a) list_medium_line_x4_t5_t4

0xb36c,	// (0x00044c6c) list_medium_line_x4_t5_t5

0x0004,

0xf34f,	// (0x00048c4f) list_medium_line_x4_t5_t

0xb258,	// (0x00044b58) list_medium_line_t4_g4_g1_ParamLimits

0xb258,	// (0x00044b58) list_medium_line_t4_g4_g1

0xb2da,	// (0x00044bda) list_medium_line_t4_g4_g2_ParamLimits

0xb2da,	// (0x00044bda) list_medium_line_t4_g4_g2

0xb388,	// (0x00044c88) list_medium_line_t4_g4_g3_ParamLimits

0xb388,	// (0x00044c88) list_medium_line_t4_g4_g3

0xb270,	// (0x00044b70) list_medium_line_t4_g4_g4_ParamLimits

0xb270,	// (0x00044b70) list_medium_line_t4_g4_g4

0x0003,

0xf35a,	// (0x00048c5a) list_medium_line_t4_g4_g_ParamLimits

0xf35a,	// (0x00048c5a) list_medium_line_t4_g4_g

0xb394,	// (0x00044c94) list_medium_line_t4_g4_t1_ParamLimits

0xb394,	// (0x00044c94) list_medium_line_t4_g4_t1

0xb3a9,	// (0x00044ca9) list_medium_line_t4_g4_t2_ParamLimits

0xb3a9,	// (0x00044ca9) list_medium_line_t4_g4_t2

0xb3bf,	// (0x00044cbf) list_medium_line_t4_g4_t3_ParamLimits

0xb3bf,	// (0x00044cbf) list_medium_line_t4_g4_t3

0xb3d5,	// (0x00044cd5) list_medium_line_t4_g4_t4_ParamLimits

0xb3d5,	// (0x00044cd5) list_medium_line_t4_g4_t4

0x0003,

0xf363,	// (0x00048c63) list_medium_line_t4_g4_t_ParamLimits

0xf363,	// (0x00048c63) list_medium_line_t4_g4_t

0x5411,	// (0x0003ed11) chi_dic_find_pane_g1

0x6804,	// (0x00040104) main_tport_pane

0xd5c4,	// (0x00046ec4) list_medium_line_plain_t1

0xb258,	// (0x00044b58) list_medium_line_t2_g2_g1_ParamLimits

0xb258,	// (0x00044b58) list_medium_line_t2_g2_g1

0xb264,	// (0x00044b64) list_medium_line_t2_g2_g2_ParamLimits

0xb264,	// (0x00044b64) list_medium_line_t2_g2_g2

0x0001,

0xfa32,	// (0x00049332) list_medium_line_t2_g2_g_ParamLimits

0xfa32,	// (0x00049332) list_medium_line_t2_g2_g

0x2d22,	// (0x0003c622) list_medium_line_t2_g2_t1_ParamLimits

0x2d22,	// (0x0003c622) list_medium_line_t2_g2_t1

0x2d39,	// (0x0003c639) list_medium_line_t2_g2_t2_ParamLimits

0x2d39,	// (0x0003c639) list_medium_line_t2_g2_t2

0x0001,

0xfa37,	// (0x00049337) list_medium_line_t2_g2_t_ParamLimits

0xfa37,	// (0x00049337) list_medium_line_t2_g2_t

0xd8eb,	// (0x000471eb) aid_sp_fs_list_icon_a_sm

0xd8f3,	// (0x000471f3) aid_sp_fs_list_icon_d

0xd8fb,	// (0x000471fb) aid_sp_fs_text_primary

0xd904,	// (0x00047204) aid_sp_fs_text_secondary

0xd90d,	// (0x0004720d) list_medium_line

0xd90d,	// (0x0004720d) list_medium_line_g2

0xd90d,	// (0x0004720d) list_medium_line_g3

0xd90d,	// (0x0004720d) list_medium_line_plain

0xd90d,	// (0x0004720d) list_medium_line_plain_t2

0xd90d,	// (0x0004720d) list_medium_line_plain_t3

0xd90d,	// (0x0004720d) list_medium_line_right_icon

0xd90d,	// (0x0004720d) list_medium_line_right_iconx2

0xd90d,	// (0x0004720d) list_medium_line_t2

0xd90d,	// (0x0004720d) list_medium_line_t2_g2

0xd90d,	// (0x0004720d) list_medium_line_t2_g3

0xd90d,	// (0x0004720d) list_medium_line_t2_right_icon

0xd90d,	// (0x0004720d) list_medium_line_t2_right_iconx2

0xd90d,	// (0x0004720d) list_medium_line_t3

0xd90d,	// (0x0004720d) list_medium_line_t3_g2

0xd90d,	// (0x0004720d) list_medium_line_t3_g3

0xd90d,	// (0x0004720d) list_medium_line_t3_right_iconx2

0xd916,	// (0x00047216) list_medium_line_t4_g4

0xd91f,	// (0x0004721f) list_medium_line_x2

0xd91f,	// (0x0004721f) list_medium_line_x2_t2_g2

0xd91f,	// (0x0004721f) list_medium_line_x2_t2_g3

0xd91f,	// (0x0004721f) list_medium_line_x2_t2_g4

0xd91f,	// (0x0004721f) list_medium_line_x2_t3

0xd91f,	// (0x0004721f) list_medium_line_x2_t3_g2

0xd91f,	// (0x0004721f) list_medium_line_x2_t3_g3

0xd91f,	// (0x0004721f) list_medium_line_x2_t3_g4

0xd91f,	// (0x0004721f) list_medium_line_x2_t4_g2

0xd91f,	// (0x0004721f) list_medium_line_x2_t4_g4

0xd928,	// (0x00047228) list_medium_line_x3

0xd928,	// (0x00047228) list_medium_line_x3_t4

0xd928,	// (0x00047228) list_medium_line_x3_t4_g4

0xd916,	// (0x00047216) list_medium_line_x4_t4

0xd916,	// (0x00047216) list_medium_line_x4_t4_g7

0xd916,	// (0x00047216) list_medium_line_x4_t5

0xd931,	// (0x00047231) list_single_fs_dyc_pane_ParamLimits

0xd931,	// (0x00047231) list_single_fs_dyc_pane

0xb258,	// (0x00044b58) list_medium_line_x4_t4_g7_g1_ParamLimits

0xb258,	// (0x00044b58) list_medium_line_x4_t4_g7_g1

0xde21,	// (0x00047721) list_medium_line_x4_t4_g7_g2_ParamLimits

0xde21,	// (0x00047721) list_medium_line_x4_t4_g7_g2

0xde2d,	// (0x0004772d) list_medium_line_x4_t4_g7_g3_ParamLimits

0xde2d,	// (0x0004772d) list_medium_line_x4_t4_g7_g3

0xde3c,	// (0x0004773c) list_medium_line_x4_t4_g7_g4_ParamLimits

0xde3c,	// (0x0004773c) list_medium_line_x4_t4_g7_g4

0xde48,	// (0x00047748) list_medium_line_x4_t4_g7_g5_ParamLimits

0xde48,	// (0x00047748) list_medium_line_x4_t4_g7_g5

0xde57,	// (0x00047757) list_medium_line_x4_t4_g7_g6_ParamLimits

0xde57,	// (0x00047757) list_medium_line_x4_t4_g7_g6

0xde66,	// (0x00047766) list_medium_line_x4_t4_g7_g7_ParamLimits

0xde66,	// (0x00047766) list_medium_line_x4_t4_g7_g7

0x0006,

0xfc02,	// (0x00049502) list_medium_line_x4_t4_g7_g_ParamLimits

0xfc02,	// (0x00049502) list_medium_line_x4_t4_g7_g

0xde72,	// (0x00047772) list_medium_line_x4_t4_g7_t1_ParamLimits

0xde72,	// (0x00047772) list_medium_line_x4_t4_g7_t1

0xde87,	// (0x00047787) list_medium_line_x4_t4_g7_t2_ParamLimits

0xde87,	// (0x00047787) list_medium_line_x4_t4_g7_t2

0xde9c,	// (0x0004779c) list_medium_line_x4_t4_g7_t3_ParamLimits

0xde9c,	// (0x0004779c) list_medium_line_x4_t4_g7_t3

0xdeb1,	// (0x000477b1) list_medium_line_x4_t4_g7_t4_ParamLimits

0xdeb1,	// (0x000477b1) list_medium_line_x4_t4_g7_t4

0xdec3,	// (0x000477c3) list_medium_line_x4_t4_g7_t5_ParamLimits

0xdec3,	// (0x000477c3) list_medium_line_x4_t4_g7_t5

0x0004,

0xfc11,	// (0x00049511) list_medium_line_x4_t4_g7_t_ParamLimits

0xfc11,	// (0x00049511) list_medium_line_x4_t4_g7_t

0xded5,	// (0x000477d5) list_single_dyc_row_pane_ParamLimits

0xded5,	// (0x000477d5) list_single_dyc_row_pane

0xa3ef,	// (0x00043cef) call5_gesture_pane_ParamLimits

0xa3ef,	// (0x00043cef) call5_gesture_pane

0xa437,	// (0x00043d37) call5_windows_pane_ParamLimits

0xa437,	// (0x00043d37) call5_windows_pane

0xa4d0,	// (0x00043dd0) call5_swipe_1_pane_cp_ParamLimits

0xa4d0,	// (0x00043dd0) call5_swipe_1_pane_cp

0xa4dc,	// (0x00043ddc) call5_swipe_2_pane_cp_ParamLimits

0xa4dc,	// (0x00043ddc) call5_swipe_2_pane_cp

0x5855,	// (0x0003f155) call5_image_pane_cp

0xa4e8,	// (0x00043de8) popup_call5_audio_first_window_cp_ParamLimits

0xa4e8,	// (0x00043de8) popup_call5_audio_first_window_cp

0xe538,	// (0x00047e38) call5_swipe_1_pane_g1_cp_ParamLimits

0xe538,	// (0x00047e38) call5_swipe_1_pane_g1_cp

0xe578,	// (0x00047e78) call5_swipe_1_pane_g2_cp

0xe551,	// (0x00047e51) call5_swipe_1_pane_t1_cp_ParamLimits

0xe551,	// (0x00047e51) call5_swipe_1_pane_t1_cp

0xe538,	// (0x00047e38) call5_swipe_2_pane_g1_cp_ParamLimits

0xe538,	// (0x00047e38) call5_swipe_2_pane_g1_cp

0xe580,	// (0x00047e80) call5_swipe_2_pane_g2_cp

0xe588,	// (0x00047e88) call5_swipe_2_pane_t1_cp_ParamLimits

0xe588,	// (0x00047e88) call5_swipe_2_pane_t1_cp

0x1c39,	// (0x0003b539) main_sp_fs_email_pane

0xe59d,	// (0x00047e9d) main_sp_fs_listscroll_pane_te

0x2ecd,	// (0x0003c7cd) popup_sp_fs_action_menu_pane_ParamLimits

0x2ecd,	// (0x0003c7cd) popup_sp_fs_action_menu_pane

0xc965,	// (0x00046265) bg_sp_fs_ctrlbar_pane_g1

0xe5a6,	// (0x00047ea6) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe5af,	// (0x00047eaf) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe5b8,	// (0x00047eb8) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc965,	// (0x00046265) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcfa,	// (0x000495fa) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc752,	// (0x00046052) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc752,	// (0x00046052) bg_sp_fs_ctrlbar_ddmenu_pane

0xe5c1,	// (0x00047ec1) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe5c1,	// (0x00047ec1) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x1c47,	// (0x0003b547) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x1c47,	// (0x0003b547) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfd03,	// (0x00049603) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfd03,	// (0x00049603) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe5cd,	// (0x00047ecd) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe5cd,	// (0x00047ecd) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xe5e7,	// (0x00047ee7) list_medium_line_t2_right_icon_g1

0xe5ef,	// (0x00047eef) list_medium_line_t2_right_icon_t1

0x2efd,	// (0x0003c7fd) list_medium_line_t2_right_icon_t2

0x0001,

0xfd08,	// (0x00049608) list_medium_line_t2_right_icon_t

0xc52a,	// (0x00045e2a) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc52a,	// (0x00045e2a) bg_sp_fs_ctrlbar_pane

0xa53d,	// (0x00043e3d) main_sp_fs_ctrlbar_button_pane_cp01

0xa545,	// (0x00043e45) main_sp_fs_ctrlbar_ddmenu_pane

0xe637,	// (0x00047f37) main_sp_fs_ctrlbar_pane_g1

0xe643,	// (0x00047f43) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfd0d,	// (0x0004960d) main_sp_fs_ctrlbar_pane_g

0xe64f,	// (0x00047f4f) main_sp_fs_ctrlbar_pane_t1

0x2f0b,	// (0x0003c80b) main_sp_fs_ctrlbar_pane

0x2f2c,	// (0x0003c82c) main_sp_fs_listscroll_pane_te_cp01

0x2f4c,	// (0x0003c84c) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x2f4c,	// (0x0003c84c) popup_sp_fs_action_menu_pane_cp01

0x1c39,	// (0x0003b539) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x1c39,	// (0x0003b539) bg_sp_fs_highlight_list_pane_cp01

0x2f6b,	// (0x0003c86b) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x2f6b,	// (0x0003c86b) sp_fs_action_menu_list_gene_pane_g1

0xe664,	// (0x00047f64) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe664,	// (0x00047f64) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfd12,	// (0x00049612) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfd12,	// (0x00049612) sp_fs_action_menu_list_gene_pane_g

0xe671,	// (0x00047f71) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xe671,	// (0x00047f71) sp_fs_action_menu_list_gene_pane_t1

0x2f7a,	// (0x0003c87a) sp_fs_action_menu_list_gene_pane_ParamLimits

0x2f7a,	// (0x0003c87a) sp_fs_action_menu_list_gene_pane

0xe689,	// (0x00047f89) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe689,	// (0x00047f89) popup_sp_fs_action_menu_bg_pane

0x2f97,	// (0x0003c897) sp_fs_action_menu_list_pane_ParamLimits

0x2f97,	// (0x0003c897) sp_fs_action_menu_list_pane

0xe697,	// (0x00047f97) sp_fs_scroll_pane_cp01_ParamLimits

0xe697,	// (0x00047f97) sp_fs_scroll_pane_cp01

0x2fb3,	// (0x0003c8b3) list_medium_line_plain_t2_t1

0x2fc3,	// (0x0003c8c3) list_medium_line_plain_t2_t2

0x0001,

0xfd17,	// (0x00049617) list_medium_line_plain_t2_t

0x2fd1,	// (0x0003c8d1) list_medium_line_plain_t3_t1

0x2fe1,	// (0x0003c8e1) list_medium_line_plain_t3_t2

0x2fef,	// (0x0003c8ef) list_medium_line_plain_t3_t3

0x0002,

0xfd1c,	// (0x0004961c) list_medium_line_plain_t3_t

0xb258,	// (0x00044b58) list_medium_line_x2_t2_g2_g1_ParamLimits

0xb258,	// (0x00044b58) list_medium_line_x2_t2_g2_g1

0xb270,	// (0x00044b70) list_medium_line_x2_t2_g2_g2_ParamLimits

0xb270,	// (0x00044b70) list_medium_line_x2_t2_g2_g2

0x0001,

0xf26a,	// (0x00048b6a) list_medium_line_x2_t2_g2_g_ParamLimits

0xf26a,	// (0x00048b6a) list_medium_line_x2_t2_g2_g

0xb394,	// (0x00044c94) list_medium_line_x2_t2_g2_t1_ParamLimits

0xb394,	// (0x00044c94) list_medium_line_x2_t2_g2_t1

0xb291,	// (0x00044b91) list_medium_line_x2_t2_g2_t2_ParamLimits

0xb291,	// (0x00044b91) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd23,	// (0x00049623) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd23,	// (0x00049623) list_medium_line_x2_t2_g2_t

0xb258,	// (0x00044b58) list_medium_line_x2_t4_g2_g1_ParamLimits

0xb258,	// (0x00044b58) list_medium_line_x2_t4_g2_g1

0xe6bd,	// (0x00047fbd) list_medium_line_x2_t4_g2_g2_ParamLimits

0xe6bd,	// (0x00047fbd) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd28,	// (0x00049628) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd28,	// (0x00049628) list_medium_line_x2_t4_g2_g

0x2ffd,	// (0x0003c8fd) list_medium_line_x2_t4_g2_t1_ParamLimits

0x2ffd,	// (0x0003c8fd) list_medium_line_x2_t4_g2_t1

0x3017,	// (0x0003c917) list_medium_line_x2_t4_g2_t2_ParamLimits

0x3017,	// (0x0003c917) list_medium_line_x2_t4_g2_t2

0x302c,	// (0x0003c92c) list_medium_line_x2_t4_g2_t3_ParamLimits

0x302c,	// (0x0003c92c) list_medium_line_x2_t4_g2_t3

0xb291,	// (0x00044b91) list_medium_line_x2_t4_g2_t4_ParamLimits

0xb291,	// (0x00044b91) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd2d,	// (0x0004962d) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd2d,	// (0x0004962d) list_medium_line_x2_t4_g2_t

0xe6ce,	// (0x00047fce) list_medium_line_t3_right_iconx2_g1

0xe5e7,	// (0x00047ee7) list_medium_line_t3_right_iconx2_g2

0x3041,	// (0x0003c941) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd36,	// (0x00049636) list_medium_line_t3_right_iconx2_g

0x3049,	// (0x0003c949) list_medium_line_t3_right_iconx2_t1

0x3059,	// (0x0003c959) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd3d,	// (0x0004963d) list_medium_line_t3_right_iconx2_t

0xb258,	// (0x00044b58) list_medium_line_x3_t4_g4_g1_ParamLimits

0xb258,	// (0x00044b58) list_medium_line_x3_t4_g4_g1

0xb264,	// (0x00044b64) list_medium_line_x3_t4_g4_g2_ParamLimits

0xb264,	// (0x00044b64) list_medium_line_x3_t4_g4_g2

0xb2da,	// (0x00044bda) list_medium_line_x3_t4_g4_g3_ParamLimits

0xb2da,	// (0x00044bda) list_medium_line_x3_t4_g4_g3

0xe6d6,	// (0x00047fd6) list_medium_line_x3_t4_g4_g4_ParamLimits

0xe6d6,	// (0x00047fd6) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd42,	// (0x00049642) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd42,	// (0x00049642) list_medium_line_x3_t4_g4_g

0x2d22,	// (0x0003c622) list_medium_line_x3_t4_g4_t1_ParamLimits

0x2d22,	// (0x0003c622) list_medium_line_x3_t4_g4_t1

0x2d39,	// (0x0003c639) list_medium_line_x3_t4_g4_t2_ParamLimits

0x2d39,	// (0x0003c639) list_medium_line_x3_t4_g4_t2

0xe6e2,	// (0x00047fe2) list_medium_line_x3_t4_g4_t3_ParamLimits

0xe6e2,	// (0x00047fe2) list_medium_line_x3_t4_g4_t3

0xe6f7,	// (0x00047ff7) list_medium_line_x3_t4_g4_t4_ParamLimits

0xe6f7,	// (0x00047ff7) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd4b,	// (0x0004964b) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd4b,	// (0x0004964b) list_medium_line_x3_t4_g4_t

0x3067,	// (0x0003c967) list_single_dyc_row_text_pane_t1_ParamLimits

0x3067,	// (0x0003c967) list_single_dyc_row_text_pane_t1

0x309e,	// (0x0003c99e) list_single_dyc_row_text_pane_t2_ParamLimits

0x309e,	// (0x0003c99e) list_single_dyc_row_text_pane_t2

0xe714,	// (0x00048014) list_single_dyc_row_text_pane_t3_ParamLimits

0xe714,	// (0x00048014) list_single_dyc_row_text_pane_t3

0x0002,

0xfd54,	// (0x00049654) list_single_dyc_row_text_pane_t_ParamLimits

0xfd54,	// (0x00049654) list_single_dyc_row_text_pane_t

0xe726,	// (0x00048026) list_single_dyc_row_pane_g1_ParamLimits

0xe726,	// (0x00048026) list_single_dyc_row_pane_g1

0xe732,	// (0x00048032) list_single_dyc_row_pane_g2_ParamLimits

0xe732,	// (0x00048032) list_single_dyc_row_pane_g2

0xe73e,	// (0x0004803e) list_single_dyc_row_pane_g3_ParamLimits

0xe73e,	// (0x0004803e) list_single_dyc_row_pane_g3

0xe74a,	// (0x0004804a) list_single_dyc_row_pane_g4_ParamLimits

0xe74a,	// (0x0004804a) list_single_dyc_row_pane_g4

0x0003,

0xfd5b,	// (0x0004965b) list_single_dyc_row_pane_g_ParamLimits

0xfd5b,	// (0x0004965b) list_single_dyc_row_pane_g

0xe756,	// (0x00048056) list_single_dyc_row_text_pane_ParamLimits

0xe756,	// (0x00048056) list_single_dyc_row_text_pane

0x0f8a,	// (0x0003a88a) bg_sp_fs_scroll_pane

0xe775,	// (0x00048075) thumb_sp_fs_scroll_pane

0xb258,	// (0x00044b58) list_medium_line_g1_ParamLimits

0xb258,	// (0x00044b58) list_medium_line_g1

0xb394,	// (0x00044c94) list_medium_line_t1_ParamLimits

0xb394,	// (0x00044c94) list_medium_line_t1

0xb258,	// (0x00044b58) list_medium_line_x2_g1_ParamLimits

0xb258,	// (0x00044b58) list_medium_line_x2_g1

0xb264,	// (0x00044b64) list_medium_line_x2_g2_ParamLimits

0xb264,	// (0x00044b64) list_medium_line_x2_g2

0x0001,

0xfa32,	// (0x00049332) list_medium_line_x2_g_ParamLimits

0xfa32,	// (0x00049332) list_medium_line_x2_g

0xe77e,	// (0x0004807e) list_medium_line_x2_t1_ParamLimits

0xe77e,	// (0x0004807e) list_medium_line_x2_t1

0xb258,	// (0x00044b58) list_medium_line_x3_g1_ParamLimits

0xb258,	// (0x00044b58) list_medium_line_x3_g1

0xb264,	// (0x00044b64) list_medium_line_x3_g2_ParamLimits

0xb264,	// (0x00044b64) list_medium_line_x3_g2

0x0001,

0xfa32,	// (0x00049332) list_medium_line_x3_g_ParamLimits

0xfa32,	// (0x00049332) list_medium_line_x3_g

0xe77e,	// (0x0004807e) list_medium_line_x3_t1_ParamLimits

0xe77e,	// (0x0004807e) list_medium_line_x3_t1

0xe794,	// (0x00048094) thumb_sp_fs_scroll_pane_g1

0xe79d,	// (0x0004809d) thumb_sp_fs_scroll_pane_g2

0xe7a6,	// (0x000480a6) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd64,	// (0x00049664) thumb_sp_fs_scroll_pane_g

0xe794,	// (0x00048094) bg_sp_fs_scroll_pane_g1

0xe79d,	// (0x0004809d) bg_sp_fs_scroll_pane_g2

0xe7a6,	// (0x000480a6) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd64,	// (0x00049664) bg_sp_fs_scroll_pane_g

0xb258,	// (0x00044b58) list_medium_line_x2_t3_g4_g1_ParamLimits

0xb258,	// (0x00044b58) list_medium_line_x2_t3_g4_g1

0xb2ce,	// (0x00044bce) list_medium_line_x2_t3_g4_g2_ParamLimits

0xb2ce,	// (0x00044bce) list_medium_line_x2_t3_g4_g2

0xb264,	// (0x00044b64) list_medium_line_x2_t3_g4_g3_ParamLimits

0xb264,	// (0x00044b64) list_medium_line_x2_t3_g4_g3

0xb270,	// (0x00044b70) list_medium_line_x2_t3_g4_g4_ParamLimits

0xb270,	// (0x00044b70) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2e6,	// (0x00048be6) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2e6,	// (0x00048be6) list_medium_line_x2_t3_g4_g

0x30f8,	// (0x0003c9f8) list_medium_line_x2_t3_g4_t1_ParamLimits

0x30f8,	// (0x0003c9f8) list_medium_line_x2_t3_g4_t1

0x310e,	// (0x0003ca0e) list_medium_line_x2_t3_g4_t2_ParamLimits

0x310e,	// (0x0003ca0e) list_medium_line_x2_t3_g4_t2

0xb291,	// (0x00044b91) list_medium_line_x2_t3_g4_t3_ParamLimits

0xb291,	// (0x00044b91) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd6b,	// (0x0004966b) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd6b,	// (0x0004966b) list_medium_line_x2_t3_g4_t

0xb258,	// (0x00044b58) list_medium_line_g2_g1_ParamLimits

0xb258,	// (0x00044b58) list_medium_line_g2_g1

0xb264,	// (0x00044b64) list_medium_line_g2_g2_ParamLimits

0xb264,	// (0x00044b64) list_medium_line_g2_g2

0x0001,

0xfa32,	// (0x00049332) list_medium_line_g2_g_ParamLimits

0xfa32,	// (0x00049332) list_medium_line_g2_g

0xb30d,	// (0x00044c0d) list_medium_line_g2_t1_ParamLimits

0xb30d,	// (0x00044c0d) list_medium_line_g2_t1

0xb258,	// (0x00044b58) list_medium_line_t3_g2_g1_ParamLimits

0xb258,	// (0x00044b58) list_medium_line_t3_g2_g1

0xb264,	// (0x00044b64) list_medium_line_t3_g2_g2_ParamLimits

0xb264,	// (0x00044b64) list_medium_line_t3_g2_g2

0x0001,

0xfa32,	// (0x00049332) list_medium_line_t3_g2_g_ParamLimits

0xfa32,	// (0x00049332) list_medium_line_t3_g2_g

0x3127,	// (0x0003ca27) list_medium_line_t3_g2_t1_ParamLimits

0x3127,	// (0x0003ca27) list_medium_line_t3_g2_t1

0x313e,	// (0x0003ca3e) list_medium_line_t3_g2_t2_ParamLimits

0x313e,	// (0x0003ca3e) list_medium_line_t3_g2_t2

0x3153,	// (0x0003ca53) list_medium_line_t3_g2_t3_ParamLimits

0x3153,	// (0x0003ca53) list_medium_line_t3_g2_t3

0x0002,

0xfd72,	// (0x00049672) list_medium_line_t3_g2_t_ParamLimits

0xfd72,	// (0x00049672) list_medium_line_t3_g2_t

0xe5e7,	// (0x00047ee7) list_medium_line_right_icon_g1

0xe7af,	// (0x000480af) list_medium_line_right_icon_t1

0xb258,	// (0x00044b58) list_medium_line_t2_g1_ParamLimits

0xb258,	// (0x00044b58) list_medium_line_t2_g1

0x3168,	// (0x0003ca68) list_medium_line_t2_t1_ParamLimits

0x3168,	// (0x0003ca68) list_medium_line_t2_t1

0x317f,	// (0x0003ca7f) list_medium_line_t2_t2_ParamLimits

0x317f,	// (0x0003ca7f) list_medium_line_t2_t2

0x0001,

0xfd79,	// (0x00049679) list_medium_line_t2_t_ParamLimits

0xfd79,	// (0x00049679) list_medium_line_t2_t

0xb258,	// (0x00044b58) list_medium_line_t3_g1_ParamLimits

0xb258,	// (0x00044b58) list_medium_line_t3_g1

0x2ffd,	// (0x0003c8fd) list_medium_line_t3_t1_ParamLimits

0x2ffd,	// (0x0003c8fd) list_medium_line_t3_t1

0x3017,	// (0x0003c917) list_medium_line_t3_t2_ParamLimits

0x3017,	// (0x0003c917) list_medium_line_t3_t2

0x302c,	// (0x0003c92c) list_medium_line_t3_t3_ParamLimits

0x302c,	// (0x0003c92c) list_medium_line_t3_t3

0x0002,

0xfd7e,	// (0x0004967e) list_medium_line_t3_t_ParamLimits

0xfd7e,	// (0x0004967e) list_medium_line_t3_t

0xb258,	// (0x00044b58) list_medium_line_g3_g1_ParamLimits

0xb258,	// (0x00044b58) list_medium_line_g3_g1

0xb2ce,	// (0x00044bce) list_medium_line_g3_g2_ParamLimits

0xb2ce,	// (0x00044bce) list_medium_line_g3_g2

0xb264,	// (0x00044b64) list_medium_line_g3_g3_ParamLimits

0xb264,	// (0x00044b64) list_medium_line_g3_g3

0x0002,

0xfd85,	// (0x00049685) list_medium_line_g3_g_ParamLimits

0xfd85,	// (0x00049685) list_medium_line_g3_g

0xb2f8,	// (0x00044bf8) list_medium_line_g3_t1_ParamLimits

0xb2f8,	// (0x00044bf8) list_medium_line_g3_t1

0xb258,	// (0x00044b58) list_medium_line_t2_g3_g1_ParamLimits

0xb258,	// (0x00044b58) list_medium_line_t2_g3_g1

0xb2ce,	// (0x00044bce) list_medium_line_t2_g3_g2_ParamLimits

0xb2ce,	// (0x00044bce) list_medium_line_t2_g3_g2

0xb264,	// (0x00044b64) list_medium_line_t2_g3_g3_ParamLimits

0xb264,	// (0x00044b64) list_medium_line_t2_g3_g3

0x0002,

0xfd85,	// (0x00049685) list_medium_line_t2_g3_g_ParamLimits

0xfd85,	// (0x00049685) list_medium_line_t2_g3_g

0x3191,	// (0x0003ca91) list_medium_line_t2_g3_t1_ParamLimits

0x3191,	// (0x0003ca91) list_medium_line_t2_g3_t1

0x31ab,	// (0x0003caab) list_medium_line_t2_g3_t2_ParamLimits

0x31ab,	// (0x0003caab) list_medium_line_t2_g3_t2

0x0001,

0xfd8c,	// (0x0004968c) list_medium_line_t2_g3_t_ParamLimits

0xfd8c,	// (0x0004968c) list_medium_line_t2_g3_t

0xb258,	// (0x00044b58) list_medium_line_t3_g3_g1_ParamLimits

0xb258,	// (0x00044b58) list_medium_line_t3_g3_g1

0xb2ce,	// (0x00044bce) list_medium_line_t3_g3_g2_ParamLimits

0xb2ce,	// (0x00044bce) list_medium_line_t3_g3_g2

0xb264,	// (0x00044b64) list_medium_line_t3_g3_g3_ParamLimits

0xb264,	// (0x00044b64) list_medium_line_t3_g3_g3

0x0002,

0xfd85,	// (0x00049685) list_medium_line_t3_g3_g_ParamLimits

0xfd85,	// (0x00049685) list_medium_line_t3_g3_g

0x31c0,	// (0x0003cac0) list_medium_line_t3_g3_t1_ParamLimits

0x31c0,	// (0x0003cac0) list_medium_line_t3_g3_t1

0x31d4,	// (0x0003cad4) list_medium_line_t3_g3_t2_ParamLimits

0x31d4,	// (0x0003cad4) list_medium_line_t3_g3_t2

0x31e6,	// (0x0003cae6) list_medium_line_t3_g3_t3_ParamLimits

0x31e6,	// (0x0003cae6) list_medium_line_t3_g3_t3

0x0002,

0xfd91,	// (0x00049691) list_medium_line_t3_g3_t_ParamLimits

0xfd91,	// (0x00049691) list_medium_line_t3_g3_t

0xe6ce,	// (0x00047fce) list_medium_line_right_iconx2_g1

0xe5e7,	// (0x00047ee7) list_medium_line_right_iconx2_g2

0x0001,

0xfd98,	// (0x00049698) list_medium_line_right_iconx2_g

0xe7bd,	// (0x000480bd) list_medium_line_right_iconx2_t1

0xe6ce,	// (0x00047fce) list_medium_line_t2_right_iconx2_g1

0xe5e7,	// (0x00047ee7) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd98,	// (0x00049698) list_medium_line_t2_right_iconx2_g

0x31f8,	// (0x0003caf8) list_medium_line_t2_right_iconx2_t1

0x3208,	// (0x0003cb08) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd9d,	// (0x0004969d) list_medium_line_t2_right_iconx2_t

0xd5c4,	// (0x00046ec4) list_medium_line_x4_t4_t1

0x3216,	// (0x0003cb16) list_medium_line_x4_t4_t2

0x3226,	// (0x0003cb26) list_medium_line_x4_t4_t3

0x3236,	// (0x0003cb36) list_medium_line_x4_t4_t4

0x0003,

0xfda2,	// (0x000496a2) list_medium_line_x4_t4_t

0xa58a,	// (0x00043e8a) tport_appsw_pane_ParamLimits

0xa58a,	// (0x00043e8a) tport_appsw_pane

0xa59b,	// (0x00043e9b) tport_contact_pane_ParamLimits

0xa59b,	// (0x00043e9b) tport_contact_pane

0xa5b0,	// (0x00043eb0) tport_listscroll_pane_ParamLimits

0xa5b0,	// (0x00043eb0) tport_listscroll_pane

0xa5c9,	// (0x00043ec9) cell_tport_appsw_pane_ParamLimits

0xa5c9,	// (0x00043ec9) cell_tport_appsw_pane

0xd31f,	// (0x00046c1f) tport_appsw_pane_g1_ParamLimits

0xd31f,	// (0x00046c1f) tport_appsw_pane_g1

0xe7cb,	// (0x000480cb) tport_contact_pane_g1

0xe7d4,	// (0x000480d4) tport_contact_pane_t1

0xe7e2,	// (0x000480e2) tport_contact_pane_t2

0x0001,

0xfdab,	// (0x000496ab) tport_contact_pane_t

0xe7f0,	// (0x000480f0) list_tport_pane

0x1815,	// (0x0003b115) scroll_pane_cp_030

0xe801,	// (0x00048101) cell_tport_appsw_pane_g1

0xe811,	// (0x00048111) cell_tport_appsw_pane_t1

0x0f8a,	// (0x0003a88a) grid_highlight_pane_cp019

0xa5ff,	// (0x00043eff) list_tport_double_graphic_pane_ParamLimits

0xa5ff,	// (0x00043eff) list_tport_double_graphic_pane

0x1c39,	// (0x0003b539) list_highlight_pane_cp023_ParamLimits

0x1c39,	// (0x0003b539) list_highlight_pane_cp023

0xa60c,	// (0x00043f0c) list_tport_double_graphic_pane_g1_ParamLimits

0xa60c,	// (0x00043f0c) list_tport_double_graphic_pane_g1

0xa619,	// (0x00043f19) list_tport_double_graphic_pane_t1_ParamLimits

0xa619,	// (0x00043f19) list_tport_double_graphic_pane_t1

0xa62e,	// (0x00043f2e) list_tport_double_graphic_pane_t2_ParamLimits

0xa62e,	// (0x00043f2e) list_tport_double_graphic_pane_t2

0x0001,

0xfdb7,	// (0x000496b7) list_tport_double_graphic_pane_t_ParamLimits

0xfdb7,	// (0x000496b7) list_tport_double_graphic_pane_t

0x0f8a,	// (0x0003a88a) main_cale_note_pane

0x8bde,	// (0x000424de) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x8bde,	// (0x000424de) cell_vitu2_function_top_wide_pane_cp01

0xa15b,	// (0x00043a5b) wait_bar_pane_cp05_ParamLimits

0x0f8a,	// (0x0003a88a) listscroll_cmail_pane

0xe81f,	// (0x0004811f) list_cmail_pane

0xa640,	// (0x00043f40) list_cmail_body_pane

0xa640,	// (0x00043f40) list_single_cmail_header_caption_pane

0xa656,	// (0x00043f56) list_single_cmail_header_detail_pane_ParamLimits

0xa656,	// (0x00043f56) list_single_cmail_header_detail_pane

0xe83b,	// (0x0004813b) list_single_cmail_header_caption_pane_t1

0x3246,	// (0x0003cb46) list_single_cmail_header_detail_pane_g1_ParamLimits

0x3246,	// (0x0003cb46) list_single_cmail_header_detail_pane_g1

0xb264,	// (0x00044b64) list_single_cmail_header_detail_pane_g2_ParamLimits

0xb264,	// (0x00044b64) list_single_cmail_header_detail_pane_g2

0x0002,

0xfdbc,	// (0x000496bc) list_single_cmail_header_detail_pane_g_ParamLimits

0xfdbc,	// (0x000496bc) list_single_cmail_header_detail_pane_g

0xe85e,	// (0x0004815e) list_single_cmail_header_detail_pane_t1_ParamLimits

0xe85e,	// (0x0004815e) list_single_cmail_header_detail_pane_t1

0xe886,	// (0x00048186) list_single_cmail_header_editor_pane_bg_ParamLimits

0xe886,	// (0x00048186) list_single_cmail_header_editor_pane_bg

0xe898,	// (0x00048198) list_cmail_body_pane_g1

0xe8a1,	// (0x000481a1) list_cmail_body_pane_t1

0xd378,	// (0x00046c78) list_single_cmail_header_editor_pane_bg_g1

0x1b2c,	// (0x0003b42c) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd388,	// (0x00046c88) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd380,	// (0x00046c80) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd5d2,	// (0x00046ed2) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd3a8,	// (0x00046ca8) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd398,	// (0x00046c98) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd3a0,	// (0x00046ca0) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x1b0c,	// (0x0003b40c) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xa67e,	// (0x00043f7e) calenote_gesture_pane_ParamLimits

0xa67e,	// (0x00043f7e) calenote_gesture_pane

0xa69a,	// (0x00043f9a) calenote_window_pane_ParamLimits

0xa69a,	// (0x00043f9a) calenote_window_pane

0xe8af,	// (0x000481af) popup_note_window_cp01

0xa6b6,	// (0x00043fb6) calenote_swipe_1_pane_ParamLimits

0xa6b6,	// (0x00043fb6) calenote_swipe_1_pane

0xa4dc,	// (0x00043ddc) calenote_swipe_2_pane_ParamLimits

0xa4dc,	// (0x00043ddc) calenote_swipe_2_pane

0xe538,	// (0x00047e38) calenote_swipe_1_pane_g1_ParamLimits

0xe538,	// (0x00047e38) calenote_swipe_1_pane_g1

0xe545,	// (0x00047e45) calenote_swipe_1_pane_g2_ParamLimits

0xe545,	// (0x00047e45) calenote_swipe_1_pane_g2

0x0001,

0xfcf0,	// (0x000495f0) calenote_swipe_1_pane_g_ParamLimits

0xfcf0,	// (0x000495f0) calenote_swipe_1_pane_g

0xe8c1,	// (0x000481c1) calenote_swipe_1_pane_t1_ParamLimits

0xe8c1,	// (0x000481c1) calenote_swipe_1_pane_t1

0xe538,	// (0x00047e38) calenote_swipe_2_pane_g1_ParamLimits

0xe538,	// (0x00047e38) calenote_swipe_2_pane_g1

0xe8e0,	// (0x000481e0) calenote_swipe_2_pane_g2_ParamLimits

0xe8e0,	// (0x000481e0) calenote_swipe_2_pane_g2

0x0001,

0xfdc8,	// (0x000496c8) calenote_swipe_2_pane_g_ParamLimits

0xfdc8,	// (0x000496c8) calenote_swipe_2_pane_g

0xe8ec,	// (0x000481ec) calenote_swipe_2_pane_t1_ParamLimits

0xe8ec,	// (0x000481ec) calenote_swipe_2_pane_t1

0x0f8a,	// (0x0003a88a) main_mup_navstr_pane

0x79d1,	// (0x000412d1) main_mup3_pane_t7_ParamLimits

0x79d1,	// (0x000412d1) main_mup3_pane_t7

0xedc3,	// (0x000486c3) main_mp4_pane_g6_ParamLimits

0xedc3,	// (0x000486c3) main_mp4_pane_g6

0xef5d,	// (0x0004885d) main_image3_pane_t4_ParamLimits

0xef5d,	// (0x0004885d) main_image3_pane_t4

0xa6cb,	// (0x00043fcb) popup_navstr_preview_pane_ParamLimits

0xa6cb,	// (0x00043fcb) popup_navstr_preview_pane

0xa6db,	// (0x00043fdb) scroll_navstr_pane_ParamLimits

0xa6db,	// (0x00043fdb) scroll_navstr_pane

0x0f8a,	// (0x0003a88a) bg_popup_preview_window_pane_cp04

0xe913,	// (0x00048213) popup_navstr_preview_pane_t1

0xa6ef,	// (0x00043fef) scroll_navstr_pane_g1_ParamLimits

0xa6ef,	// (0x00043fef) scroll_navstr_pane_g1

0xa703,	// (0x00044003) scroll_navstr_pane_t1_ParamLimits

0xa703,	// (0x00044003) scroll_navstr_pane_t1

0xe8b8,	// (0x000481b8) bg_button_pane_cp014

0xe8b8,	// (0x000481b8) bg_button_pane_cp030

0xe49c,	// (0x00047d9c) list_double_fisheye_pane_g4_ParamLimits

0xe49c,	// (0x00047d9c) list_double_fisheye_pane_g4

0xe4a8,	// (0x00047da8) list_double_fisheye_pane_g5_ParamLimits

0xe4a8,	// (0x00047da8) list_double_fisheye_pane_g5

0xe82f,	// (0x0004812f) sp_fs_scroll_pane_cp03

0xe637,	// (0x00047f37) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe643,	// (0x00047f43) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfd0d,	// (0x0004960d) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe64f,	// (0x00047f4f) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe827,	// (0x00048127) sp_fs_scroll_pane_cp02

0x1827,	// (0x0003b127) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x1827,	// (0x0003b127) popup_sp_fs_calendar_preview_list_single_pane

0x0f8a,	// (0x0003a88a) main_cam6_pano_pane

0x1c39,	// (0x0003b539) main_mup3_pane_ParamLimits

0x0f8a,	// (0x0003a88a) main_phacti_pane

0xa04e,	// (0x0004394e) bg_button_pane_cp11

0xa066,	// (0x00043966) main_mobtv_info_pane_g2_ParamLimits

0xa066,	// (0x00043966) main_mobtv_info_pane_g2

0x0001,

0xfc6d,	// (0x0004956d) main_mobtv_info_pane_g_ParamLimits

0xfc6d,	// (0x0004956d) main_mobtv_info_pane_g

0xa219,	// (0x00043b19) sc_clock_pane_t5_ParamLimits

0xa219,	// (0x00043b19) sc_clock_pane_t5

0xa28c,	// (0x00043b8c) main_radioblah_pane_g1_ParamLimits

0xe401,	// (0x00047d01) main_radioblah_pane_t3_ParamLimits

0xe401,	// (0x00047d01) main_radioblah_pane_t3

0xe419,	// (0x00047d19) main_radioblah_pane_t4_ParamLimits

0xe419,	// (0x00047d19) main_radioblah_pane_t4

0xa2b4,	// (0x00043bb4) main_radioblah_text_pane_ParamLimits

0xa2b4,	// (0x00043bb4) main_radioblah_text_pane

0xa2c6,	// (0x00043bc6) main_radioblah_info_pane_g1_ParamLimits

0xa359,	// (0x00043c59) main_radioblah_info_pane_t4_ParamLimits

0xa359,	// (0x00043c59) main_radioblah_info_pane_t4

0x1c39,	// (0x0003b539) main_sp_fs_calendar_pane

0xa719,	// (0x00044019) main_phacti_pane_g1

0xa721,	// (0x00044021) phacti_note_pane_ParamLimits

0xa721,	// (0x00044021) phacti_note_pane

0xe92a,	// (0x0004822a) phacti_term_pane_ParamLimits

0xe92a,	// (0x0004822a) phacti_term_pane

0xe93f,	// (0x0004823f) phacti_note_pane_t1_ParamLimits

0xe93f,	// (0x0004823f) phacti_note_pane_t1

0xe956,	// (0x00048256) phacti_term_pane_g1

0xe95e,	// (0x0004825e) phacti_term_pane_t1_ParamLimits

0xe95e,	// (0x0004825e) phacti_term_pane_t1

0xe988,	// (0x00048288) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe990,	// (0x00048290) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdd2,	// (0x000496d2) popup_sp_fs_calendar_preview_list_single_pane_g

0xe998,	// (0x00048298) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe998,	// (0x00048298) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe9ae,	// (0x000482ae) aid_popup_sp_fs_bg_corner_pane

0xc965,	// (0x00046265) popup_sp_fs_calendar_preview_bg_pane_g1

0x0f8a,	// (0x0003a88a) popup_sp_fs_calendar_preview_bg_pane

0xe9b6,	// (0x000482b6) popup_sp_fs_calendar_preview_list_pane

0x1c39,	// (0x0003b539) bg_main_sp_fs_cale_pane_ParamLimits

0x1c39,	// (0x0003b539) bg_main_sp_fs_cale_pane

0xe9be,	// (0x000482be) listscroll_cale_mrui_pane_ParamLimits

0xe9be,	// (0x000482be) listscroll_cale_mrui_pane

0xe9d2,	// (0x000482d2) listscroll_sp_fs_schedule_track_pane

0xe9db,	// (0x000482db) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe9db,	// (0x000482db) main_sp_fs_ctrlbar_pane_cp01

0xe9ec,	// (0x000482ec) main_sp_fs_ribbon_pane

0xe9f4,	// (0x000482f4) popup_sp_fs_cale_preview_window

0xa770,	// (0x00044070) list_single_sp_fs_schedule_track_pane_ParamLimits

0xa770,	// (0x00044070) list_single_sp_fs_schedule_track_pane

0x1c39,	// (0x0003b539) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x1c39,	// (0x0003b539) bg_sp_fs_highlight_list_pane_cp03

0xa783,	// (0x00044083) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xa783,	// (0x00044083) list_single_sp_fs_schedule_track_pane_g1

0xa78f,	// (0x0004408f) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xa78f,	// (0x0004408f) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdd7,	// (0x000496d7) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdd7,	// (0x000496d7) list_single_sp_fs_schedule_track_pane_g

0xa79b,	// (0x0004409b) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xa79b,	// (0x0004409b) list_single_sp_fs_schedule_track_pane_t1

0xa7b5,	// (0x000440b5) sp_fs_schedule_track_pane_ParamLimits

0xa7b5,	// (0x000440b5) sp_fs_schedule_track_pane

0xea03,	// (0x00048303) sp_fs_schedule_track_pane_g1

0xea0b,	// (0x0004830b) sp_fs_schedule_track_pane_g2

0xea13,	// (0x00048313) sp_fs_schedule_track_pane_g3

0xea1b,	// (0x0004831b) sp_fs_schedule_track_pane_g4

0xea23,	// (0x00048323) sp_fs_schedule_track_pane_g5

0x0004,

0xfddc,	// (0x000496dc) sp_fs_schedule_track_pane_g

0xd378,	// (0x00046c78) bg_sp_fs_schedule_viewer_highlight_g1

0x1b2c,	// (0x0003b42c) bg_sp_fs_schedule_viewer_highlight_g2

0xd380,	// (0x00046c80) bg_sp_fs_schedule_viewer_highlight_g3

0xd388,	// (0x00046c88) bg_sp_fs_schedule_viewer_highlight_g4

0xd5d2,	// (0x00046ed2) bg_sp_fs_schedule_viewer_highlight_g5

0xd398,	// (0x00046c98) bg_sp_fs_schedule_viewer_highlight_g6

0xd3a0,	// (0x00046ca0) bg_sp_fs_schedule_viewer_highlight_g7

0xd3a8,	// (0x00046ca8) bg_sp_fs_schedule_viewer_highlight_g8

0x1b0c,	// (0x0003b40c) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfde7,	// (0x000496e7) bg_sp_fs_schedule_viewer_highlight_g

0x0f8a,	// (0x0003a88a) bg_main_sp_fs_ribbon_pane

0xa7c6,	// (0x000440c6) main_sp_fs_ribbon_pane_g1

0xea2b,	// (0x0004832b) main_sp_fs_ribbon_pane_t1

0xa7cf,	// (0x000440cf) main_sp_fs_ribbon_pane_t2

0xea3a,	// (0x0004833a) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdfa,	// (0x000496fa) main_sp_fs_ribbon_pane_t

0xea49,	// (0x00048349) main_sp_fs_ribbon_scheduler_pane

0xea51,	// (0x00048351) bg_main_sp_fs_ribbon_pane_g1

0xea5a,	// (0x0004835a) bg_main_sp_fs_ribbon_pane_g2

0xea63,	// (0x00048363) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfe01,	// (0x00049701) bg_main_sp_fs_ribbon_pane_g

0xea6b,	// (0x0004836b) main_sp_fs_ribbon_scheduler_pane_g1

0xea74,	// (0x00048374) main_sp_fs_ribbon_scheduler_pane_g2

0xea7d,	// (0x0004837d) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfe08,	// (0x00049708) main_sp_fs_ribbon_scheduler_pane_g

0xe473,	// (0x00047d73) list_cale_mrui_pane

0xea86,	// (0x00048386) sp_fs_scroll_pane_cp07_ParamLimits

0xea86,	// (0x00048386) sp_fs_scroll_pane_cp07

0xa7de,	// (0x000440de) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xa7de,	// (0x000440de) bg_sp_fs_schedule_viewer_highlight

0xea9b,	// (0x0004839b) list_single_sp_fs_schedule_track_pane_cp01

0xeaa3,	// (0x000483a3) list_sp_fs_schedule_track_pane

0xeaab,	// (0x000483ab) sp_fs_scroll_pane_cp06_ParamLimits

0xeaab,	// (0x000483ab) sp_fs_scroll_pane_cp06

0xc965,	// (0x00046265) bgmain_sp_fs_calendar_pane_g1

0x3280,	// (0x0003cb80) list_single_cale_mrui_pane_ParamLimits

0x3280,	// (0x0003cb80) list_single_cale_mrui_pane

0xeabd,	// (0x000483bd) list_single_cale_mrui_row_pane_ParamLimits

0xeabd,	// (0x000483bd) list_single_cale_mrui_row_pane

0xeaca,	// (0x000483ca) list_single_cale_mrui_row_pane_g1_ParamLimits

0xeaca,	// (0x000483ca) list_single_cale_mrui_row_pane_g1

0xeb02,	// (0x00048402) list_single_cale_mrui_row_pane_t1_ParamLimits

0xeb02,	// (0x00048402) list_single_cale_mrui_row_pane_t1

0x32a4,	// (0x0003cba4) list_single_cale_mrui_row_pane_t2_ParamLimits

0x32a4,	// (0x0003cba4) list_single_cale_mrui_row_pane_t2

0xeb14,	// (0x00048414) list_single_cale_mrui_row_pane_t3_ParamLimits

0xeb14,	// (0x00048414) list_single_cale_mrui_row_pane_t3

0xeb43,	// (0x00048443) list_single_cale_mrui_row_pane_t4_ParamLimits

0xeb43,	// (0x00048443) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe14,	// (0x00049714) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe14,	// (0x00049714) list_single_cale_mrui_row_pane_t

0x330a,	// (0x0003cc0a) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x330a,	// (0x0003cc0a) list_single_cmail_header_editor_pane_bg_cp01

0x332e,	// (0x0003cc2e) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x332e,	// (0x0003cc2e) list_single_cmail_header_editor_pane_bg_cp02

0xa7ee,	// (0x000440ee) main_radioblah_text_pane_t1_ParamLimits

0xa7ee,	// (0x000440ee) main_radioblah_text_pane_t1

0x01a7,	// (0x00039aa7) cam6_indi_pane_cp01

0x01af,	// (0x00039aaf) cam6_mode_pane_cp01

0x01b7,	// (0x00039ab7) cam6_pano_pane

0x01c0,	// (0x00039ac0) cam6_zoom_pane_cp01

0x01c8,	// (0x00039ac8) cam6_pano_image_pane

0x01d1,	// (0x00039ad1) cam6_pano_pane_g1

0xe17f,	// (0x00047a7f) cam6_pano_pane_g2

0x01da,	// (0x00039ada) cam6_pano_pane_g3

0x01e3,	// (0x00039ae3) cam6_pano_pane_g4

0xcecb,	// (0x000467cb) cam6_pano_pane_g5

0x01ec,	// (0x00039aec) cam6_pano_pane_g6

0x01f4,	// (0x00039af4) cam6_pano_pane_g7

0x01fc,	// (0x00039afc) cam6_pano_pane_g8

0x0205,	// (0x00039b05) cam6_pano_pane_g9

0x0008,

0xfe1d,	// (0x0004971d) cam6_pano_pane_g

0x0f8a,	// (0x0003a88a) main_browser_tag_pane

0xe90b,	// (0x0004820b) grid_navstr_albumart_pane

0x020e,	// (0x00039b0e) cell_navstr_albumart_pane_ParamLimits

0x020e,	// (0x00039b0e) cell_navstr_albumart_pane

0x5d6e,	// (0x0003f66e) cell_navstr_albumart_pane_g1

0xc307,	// (0x00045c07) cell_navstr_albumart_pane_g2

0xc317,	// (0x00045c17) cell_navstr_albumart_pane_g3

0xc30f,	// (0x00045c0f) cell_navstr_albumart_pane_g4

0x0003,

0xfe30,	// (0x00049730) cell_navstr_albumart_pane_g

0xa807,	// (0x00044107) bt_list_pane_ParamLimits

0xa807,	// (0x00044107) bt_list_pane

0xa81a,	// (0x0004411a) bt_list_pane_t1

0xa829,	// (0x00044129) bt_list_pane_t2

0x0001,

0xfe39,	// (0x00049739) bt_list_pane_t

0x0f8a,	// (0x0003a88a) main_cale_prevew_pane

0xa838,	// (0x00044138) popup_cale_preview_window_ParamLimits

0xa838,	// (0x00044138) popup_cale_preview_window

0x1c39,	// (0x0003b539) bg_popup_preview_window_pane_cp05_ParamLimits

0x1c39,	// (0x0003b539) bg_popup_preview_window_pane_cp05

0x026d,	// (0x00039b6d) list_cale_preview_pane_ParamLimits

0x026d,	// (0x00039b6d) list_cale_preview_pane

0xa84d,	// (0x0004414d) list_double_cale_preview_pane_ParamLimits

0xa84d,	// (0x0004414d) list_double_cale_preview_pane

0xa85e,	// (0x0004415e) list_single_cale_preview_pane_ParamLimits

0xa85e,	// (0x0004415e) list_single_cale_preview_pane

0x02bb,	// (0x00039bbb) list_single_cale_preview_pane_g1

0x02c3,	// (0x00039bc3) list_single_cale_preview_pane_t1_ParamLimits

0x02c3,	// (0x00039bc3) list_single_cale_preview_pane_t1

0xa872,	// (0x00044172) list_double_cale_preview_pane_g1

0xa87a,	// (0x0004417a) list_double_cale_preview_pane_t1_ParamLimits

0xa87a,	// (0x0004417a) list_double_cale_preview_pane_t1

0xa88f,	// (0x0004418f) list_double_cale_preview_pane_t2_ParamLimits

0xa88f,	// (0x0004418f) list_double_cale_preview_pane_t2

0x0001,

0xfe3e,	// (0x0004973e) list_double_cale_preview_pane_t_ParamLimits

0xfe3e,	// (0x0004973e) list_double_cale_preview_pane_t

0x0f8a,	// (0x0003a88a) main_ezdial_pane

0x1c39,	// (0x0003b539) main_sp_fs_email_pane_ParamLimits

0xa4f4,	// (0x00043df4) cmail_ddmenu_btn01_pane_ParamLimits

0xa4f4,	// (0x00043df4) cmail_ddmenu_btn01_pane

0xa507,	// (0x00043e07) cmail_ddmenu_btn02_pane_ParamLimits

0xa507,	// (0x00043e07) cmail_ddmenu_btn02_pane

0xa52a,	// (0x00043e2a) cmail_ddmenu_btn03_pane_ParamLimits

0xa52a,	// (0x00043e2a) cmail_ddmenu_btn03_pane

0x2f0b,	// (0x0003c80b) main_sp_fs_ctrlbar_pane_ParamLimits

0x2f2c,	// (0x0003c82c) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xa640,	// (0x00043f40) list_cmail_body_pane_ParamLimits

0xe849,	// (0x00048149) bg_button_pane_cp12

0xe851,	// (0x00048151) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe851,	// (0x00048151) list_single_cmail_header_detail_pane_g3

0x325c,	// (0x0003cb5c) list_single_cmail_header_detail_pane_t2_ParamLimits

0x325c,	// (0x0003cb5c) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdc3,	// (0x000496c3) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdc3,	// (0x000496c3) list_single_cmail_header_detail_pane_t

0xe973,	// (0x00048273) phacti_term_pane_t2_ParamLimits

0xe973,	// (0x00048273) phacti_term_pane_t2

0x0001,

0xfdcd,	// (0x000496cd) phacti_term_pane_t_ParamLimits

0xfdcd,	// (0x000496cd) phacti_term_pane_t

0x02f0,	// (0x00039bf0) aid_size_list_single_double

0xa8a7,	// (0x000441a7) popup_ezdial_listscroll_window

0xa8bd,	// (0x000441bd) popup_number_entry_window_cp01

0x5855,	// (0x0003f155) bg_popup_call_pane_cp09

0x0321,	// (0x00039c21) ezdial_list_pane

0x0329,	// (0x00039c29) scroll_pane_cp23

0xc52a,	// (0x00045e2a) bg_button_pane_cp028_ParamLimits

0xc52a,	// (0x00045e2a) bg_button_pane_cp028

0xa8c9,	// (0x000441c9) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xa8c9,	// (0x000441c9) cmail_ddmenu_btn01_pane_g1

0xa8d8,	// (0x000441d8) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xa8d8,	// (0x000441d8) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe43,	// (0x00049743) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe43,	// (0x00049743) cmail_ddmenu_btn01_pane_g

0x034f,	// (0x00039c4f) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x034f,	// (0x00039c4f) cmail_ddmenu_btn01_pane_t1

0xc52a,	// (0x00045e2a) bg_button_pane_cp029_ParamLimits

0xc52a,	// (0x00045e2a) bg_button_pane_cp029

0xa8e8,	// (0x000441e8) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xa8e8,	// (0x000441e8) cmail_ddmenu_btn02_pane_g1

0xa903,	// (0x00044203) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xa903,	// (0x00044203) cmail_ddmenu_btn02_pane_t1

0x1c39,	// (0x0003b539) bg_button_pane_cp031_ParamLimits

0x1c39,	// (0x0003b539) bg_button_pane_cp031

0xa8e8,	// (0x000441e8) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xa8e8,	// (0x000441e8) cmail_ddmenu_btn03_pane_g1

0xa903,	// (0x00044203) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xa903,	// (0x00044203) cmail_ddmenu_btn03_pane_t1

0x84cc,	// (0x00041dcc) cell_dialer2_keypad_pane_t1_ParamLimits

0x84e6,	// (0x00041de6) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x84e6,	// (0x00041de6) cell_dialer2_keypad_pane_t1_copy1

0x9ed5,	// (0x000437d5) ncimui_group_button_pane

0x1c39,	// (0x0003b539) main_sp_fs_calendar_pane_ParamLimits

0xa640,	// (0x00043f40) list_single_cmail_header_caption_pane_ParamLimits

0xd904,	// (0x00047204) aid_recal_txt_sm_pane

0x0f8a,	// (0x0003a88a) mian_recal_day_pane

0xe9f4,	// (0x000482f4) popup_sp_fs_cale_preview_window_ParamLimits

0x0f8a,	// (0x0003a88a) list_recal_day_pane

0xeb7b,	// (0x0004847b) list_single_recal_day_pane_ParamLimits

0xeb7b,	// (0x0004847b) list_single_recal_day_pane

0x03a4,	// (0x00039ca4) list_single_recal_day_pane_g1_ParamLimits

0x03a4,	// (0x00039ca4) list_single_recal_day_pane_g1

0xeb8d,	// (0x0004848d) list_single_recal_day_pane_g2_ParamLimits

0xeb8d,	// (0x0004848d) list_single_recal_day_pane_g2

0xeb99,	// (0x00048499) list_single_recal_day_pane_g3_ParamLimits

0xeb99,	// (0x00048499) list_single_recal_day_pane_g3

0x334c,	// (0x0003cc4c) list_single_recal_day_pane_g4_ParamLimits

0x334c,	// (0x0003cc4c) list_single_recal_day_pane_g4

0xeba5,	// (0x000484a5) list_single_recal_day_pane_g5_ParamLimits

0xeba5,	// (0x000484a5) list_single_recal_day_pane_g5

0xebb1,	// (0x000484b1) list_single_recal_day_pane_g6_ParamLimits

0xebb1,	// (0x000484b1) list_single_recal_day_pane_g6

0x0005,

0xfe52,	// (0x00049752) list_single_recal_day_pane_g_ParamLimits

0xfe52,	// (0x00049752) list_single_recal_day_pane_g

0xebbd,	// (0x000484bd) list_single_recal_day_pane_t1

0xebcb,	// (0x000484cb) list_single_recal_day_pane_t2

0x0001,

0xfe5f,	// (0x0004975f) list_single_recal_day_pane_t

0xa92a,	// (0x0004422a) ncimui_query_button_pane_ParamLimits

0xa92a,	// (0x0004422a) ncimui_query_button_pane

0xa93a,	// (0x0004423a) ncimui_query_button_pane_t1_ParamLimits

0xa93a,	// (0x0004423a) ncimui_query_button_pane_t1

0x03d3,	// (0x00039cd3) ncimui_query_button_pane_t2_ParamLimits

0x03d3,	// (0x00039cd3) ncimui_query_button_pane_t2

0x0001,

0xfe64,	// (0x00049764) ncimui_query_button_pane_t_ParamLimits

0xfe64,	// (0x00049764) ncimui_query_button_pane_t

0xa94d,	// (0x0004424d) query_button_pane_ParamLimits

0xa94d,	// (0x0004424d) query_button_pane

0x0f8a,	// (0x0003a88a) bg_button_pane_cp0028

0x03f3,	// (0x00039cf3) query_button_pane_t1

0x6804,	// (0x00040104) main_tport_pane_ParamLimits

0xa54f,	// (0x00043e4f) bg_popup_window_pane_cp01_ParamLimits

0xa54f,	// (0x00043e4f) bg_popup_window_pane_cp01

0xa567,	// (0x00043e67) heading_pane_cp08_ParamLimits

0xa567,	// (0x00043e67) heading_pane_cp08

0xa579,	// (0x00043e79) heading_pane_cp07_ParamLimits

0xa579,	// (0x00043e79) heading_pane_cp07

0xe801,	// (0x00048101) cell_tport_appsw_pane_g2

0x0002,

0xfdb0,	// (0x000496b0) cell_tport_appsw_pane_g

0x2bc1,	// (0x0003c4c1) input_candi_list_open_g1

0x4f12,	// (0x0003e812) list_cale_time_pane_g6_ParamLimits

0x4f12,	// (0x0003e812) list_cale_time_pane_g6

0x74aa,	// (0x00040daa) aid_size_touch_calib_1_ParamLimits

0x74aa,	// (0x00040daa) aid_size_touch_calib_1

0x74b6,	// (0x00040db6) aid_size_touch_calib_2_ParamLimits

0x74b6,	// (0x00040db6) aid_size_touch_calib_2

0x74ca,	// (0x00040dca) aid_size_touch_calib_3_ParamLimits

0x74ca,	// (0x00040dca) aid_size_touch_calib_3

0x74e2,	// (0x00040de2) aid_size_touch_calib_4_ParamLimits

0x74e2,	// (0x00040de2) aid_size_touch_calib_4

0x74f4,	// (0x00040df4) main_touch_calib_button_group_pane_ParamLimits

0x74f4,	// (0x00040df4) main_touch_calib_button_group_pane

0x750b,	// (0x00040e0b) main_touch_calib_pane_g1_ParamLimits

0x7517,	// (0x00040e17) main_touch_calib_pane_g2_ParamLimits

0x7523,	// (0x00040e23) main_touch_calib_pane_g3_ParamLimits

0x752f,	// (0x00040e2f) main_touch_calib_pane_g4_ParamLimits

0xf788,	// (0x00049088) main_touch_calib_pane_g_ParamLimits

0x753b,	// (0x00040e3b) main_touch_calib_pane_t1_ParamLimits

0x7553,	// (0x00040e53) main_touch_calib_pane_t2_ParamLimits

0x756b,	// (0x00040e6b) main_touch_calib_pane_t3_ParamLimits

0x757d,	// (0x00040e7d) main_touch_calib_pane_t4_ParamLimits

0x758f,	// (0x00040e8f) main_touch_calib_pane_t5_ParamLimits

0xf791,	// (0x00049091) main_touch_calib_pane_t_ParamLimits

0xccf6,	// (0x000465f6) list_single_fp_cale_pane_g3_ParamLimits

0xccf6,	// (0x000465f6) list_single_fp_cale_pane_g3

0x1c39,	// (0x0003b539) bg_button_pane_cp012_ParamLimits

0x1c39,	// (0x0003b539) bg_vkb2_func_pane_cp03_ParamLimits

0x9362,	// (0x00042c62) cell_vitu2_function_top_pane_g1_ParamLimits

0x1c39,	// (0x0003b539) bg_vkb2_func_pane_cp04_ParamLimits

0x9e77,	// (0x00043777) main_ncimui_button_group_pane_ParamLimits

0x9e77,	// (0x00043777) main_ncimui_button_group_pane

0x9ec3,	// (0x000437c3) main_ncimui_pane_t3_ParamLimits

0x9ec3,	// (0x000437c3) main_ncimui_pane_t3

0xe921,	// (0x00048221) phacti_button_group_pane

0x02f0,	// (0x00039bf0) aid_size_list_single_double_ParamLimits

0xa8a7,	// (0x000441a7) popup_ezdial_listscroll_window_ParamLimits

0xa8bd,	// (0x000441bd) popup_number_entry_window_cp01_ParamLimits

0xa95f,	// (0x0004425f) phacti_button_pane_ParamLimits

0xa95f,	// (0x0004425f) phacti_button_pane

0x0f8a,	// (0x0003a88a) bg_button_pane_cp14

0x0410,	// (0x00039d10) phacti_button_pane_t1

0xa96e,	// (0x0004426e) main_touch_calib_button_pane_ParamLimits

0xa96e,	// (0x0004426e) main_touch_calib_button_pane

0x1710,	// (0x0003b010) bg_button_pane_cp18_ParamLimits

0x1710,	// (0x0003b010) bg_button_pane_cp18

0x042e,	// (0x00039d2e) main_touch_calib_button_pane_t1_ParamLimits

0x042e,	// (0x00039d2e) main_touch_calib_button_pane_t1

0x0444,	// (0x00039d44) main_touch_calib_button_pane_t2_ParamLimits

0x0444,	// (0x00039d44) main_touch_calib_button_pane_t2

0x0001,

0xfe69,	// (0x00049769) main_touch_calib_button_pane_t_ParamLimits

0xfe69,	// (0x00049769) main_touch_calib_button_pane_t

0x0f8a,	// (0x0003a88a) cell_ncimui_button_pane

0x0f8a,	// (0x0003a88a) bg_button_pane_cp032

0x0462,	// (0x00039d62) cell_ncimui_button_pane_t1

0xef3d,	// (0x0004883d) image3_infobar_pane_ParamLimits

0xef3d,	// (0x0004883d) image3_infobar_pane

0xa241,	// (0x00043b41) fs_bigclock_status_pane_ParamLimits

0xa241,	// (0x00043b41) fs_bigclock_status_pane

0xa24e,	// (0x00043b4e) main_fs_bigclock_clock_pane_ParamLimits

0xa24e,	// (0x00043b4e) main_fs_bigclock_clock_pane

0xa25d,	// (0x00043b5d) main_fs_bigclock_indi_pane_ParamLimits

0xa25d,	// (0x00043b5d) main_fs_bigclock_indi_pane

0xa271,	// (0x00043b71) main_fs_bigclock_swipe_pane_ParamLimits

0xa271,	// (0x00043b71) main_fs_bigclock_swipe_pane

0x0f8a,	// (0x0003a88a) main_fs_clock_dumped_data

0xe28c,	// (0x00047b8c) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe28c,	// (0x00047b8c) list_single_fs_bigclock_indicator_pane_g1

0xe2a6,	// (0x00047ba6) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe2a6,	// (0x00047ba6) list_single_fs_bigclock_indicator_pane_g2

0xe2c0,	// (0x00047bc0) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe2c0,	// (0x00047bc0) list_single_fs_bigclock_indicator_pane_g3

0xe2da,	// (0x00047bda) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe2da,	// (0x00047bda) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfca1,	// (0x000495a1) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfca1,	// (0x000495a1) list_single_fs_bigclock_indicator_pane_g

0xe2fe,	// (0x00047bfe) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe2fe,	// (0x00047bfe) list_single_fs_bigclock_indicator_pane_t1

0xe326,	// (0x00047c26) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe326,	// (0x00047c26) list_single_fs_bigclock_indicator_pane_t2

0xe34e,	// (0x00047c4e) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe34e,	// (0x00047c4e) list_single_fs_bigclock_indicator_pane_t3

0xe376,	// (0x00047c76) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe376,	// (0x00047c76) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfcac,	// (0x000495ac) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfcac,	// (0x000495ac) list_single_fs_bigclock_indicator_pane_t

0x0470,	// (0x00039d70) image3_infobar_fav_pane_ParamLimits

0x0470,	// (0x00039d70) image3_infobar_fav_pane

0x0480,	// (0x00039d80) image3_infobar_loc_pane_ParamLimits

0x0480,	// (0x00039d80) image3_infobar_loc_pane

0x0494,	// (0x00039d94) image3_infobar_time_pane_ParamLimits

0x0494,	// (0x00039d94) image3_infobar_time_pane

0xc965,	// (0x00046265) image3_infobar_time_pane_g1

0x04a4,	// (0x00039da4) image3_infobar_time_pane_t1

0xc965,	// (0x00046265) image3_infobar_loc_pane_g1

0x04b2,	// (0x00039db2) image3_infobar_loc_pane_g2

0x0001,

0xfe6e,	// (0x0004976e) image3_infobar_loc_pane_g

0x04ba,	// (0x00039dba) image3_infobar_loc_pane_t1

0xc965,	// (0x00046265) image3_infobar_fav_pane_g1

0x04c8,	// (0x00039dc8) image3_infobar_fav_pane_g2

0x0001,

0xfe73,	// (0x00049773) image3_infobar_fav_pane_g

0x04d0,	// (0x00039dd0) fs_bigclock_status_battery_pane

0x04d9,	// (0x00039dd9) fs_bigclock_status_signal_pane

0x04e2,	// (0x00039de2) fs_bigclock_status_title_pane

0x04eb,	// (0x00039deb) fs_bigclock_status_signal_pane_g1

0x04f4,	// (0x00039df4) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe78,	// (0x00049778) fs_bigclock_status_signal_pane_g

0x04fc,	// (0x00039dfc) fs_bigclock_status_battery_pane_g1

0x0505,	// (0x00039e05) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe7d,	// (0x0004977d) fs_bigclock_status_battery_pane_g

0x050d,	// (0x00039e0d) fs_bigclock_status_title_pane_t1

0xc965,	// (0x00046265) main_fs_bigclock_clock_pane_g1

0x051b,	// (0x00039e1b) main_fs_bigclock_clock_pane_g2

0x051b,	// (0x00039e1b) main_fs_bigclock_clock_pane_g3

0x051b,	// (0x00039e1b) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe82,	// (0x00049782) main_fs_bigclock_clock_pane_g

0x0523,	// (0x00039e23) main_fs_bigclock_clock_pane_t1

0x0531,	// (0x00039e31) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe8b,	// (0x0004978b) main_fs_bigclock_clock_pane_t

0x0540,	// (0x00039e40) list_single_fs_bigclock_indicator_pane_ParamLimits

0x0540,	// (0x00039e40) list_single_fs_bigclock_indicator_pane

0xa981,	// (0x00044281) list_single_fs_bigclock_pane_ParamLimits

0xa981,	// (0x00044281) list_single_fs_bigclock_pane

0x05b8,	// (0x00039eb8) main_fs_bigclock_indicator_pane_t1

0x05c7,	// (0x00039ec7) list_single_fs_bigclock_pane_g1

0x05cf,	// (0x00039ecf) list_single_fs_bigclock_pane_t1

0xc965,	// (0x00046265) main_fs_bigclock_swipe_pane_g1

0x060d,	// (0x00039f0d) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe9c,	// (0x0004979c) main_fs_bigclock_swipe_pane_g

0x0615,	// (0x00039f15) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x0615,	// (0x00039f15) main_fs_bigclock_swipe_pane_t1

0x51fe,	// (0x0003eafe) call_type_pane_ParamLimits

0x0f8a,	// (0x0003a88a) main_btmg_pane

0xeaf6,	// (0x000483f6) list_single_cale_mrui_row_pane_g2_ParamLimits

0xeaf6,	// (0x000483f6) list_single_cale_mrui_row_pane_g2

0x0001,

0xfe0f,	// (0x0004970f) list_single_cale_mrui_row_pane_g_ParamLimits

0xfe0f,	// (0x0004970f) list_single_cale_mrui_row_pane_g

0x0394,	// (0x00039c94) list_recal_vselct_arw_lo_pane

0x039c,	// (0x00039c9c) list_recal_vselct_arw_up_pane

0xeb72,	// (0x00048472) list_recal_vselct_pane

0x0632,	// (0x00039f32) btmg_button_pane

0xa9e1,	// (0x000442e1) main_btmg_pane_g1

0x0f8a,	// (0x0003a88a) bg_button_pane_cp044

0x0642,	// (0x00039f42) btmg_button_pane_t1

0xc522,	// (0x00045e22) aid_listscroll_gen

0x1c39,	// (0x0003b539) main_cntbar_detail_pane

0xe81f,	// (0x0004811f) list_cmail_folder_pane

0xe82f,	// (0x0004812f) sp_fs_scroll_pane_cp03_ParamLimits

0xa640,	// (0x00043f40) list_single_fs_dyc_pane_cp01_ParamLimits

0xa640,	// (0x00043f40) list_single_fs_dyc_pane_cp01

0x0650,	// (0x00039f50) aid_size_cmail_indent

0xd90d,	// (0x0004720d) list_single_dyc_row_pane_cp01

0xaa11,	// (0x00044311) cntbar_detail_list_pane_ParamLimits

0xaa11,	// (0x00044311) cntbar_detail_list_pane

0xaa57,	// (0x00044357) main_cntbar_detail_cont_pane_ParamLimits

0xaa57,	// (0x00044357) main_cntbar_detail_cont_pane

0xaa6b,	// (0x0004436b) scroll_pane_cp032_ParamLimits

0xaa6b,	// (0x0004436b) scroll_pane_cp032

0xaa77,	// (0x00044377) cntbar_detail_list_event_pane_ParamLimits

0xaa77,	// (0x00044377) cntbar_detail_list_event_pane

0xaa21,	// (0x00044321) cntbar_detail_list_shct_pane

0x06d1,	// (0x00039fd1) aid_list_gen

0x1815,	// (0x0003b115) aid_scroll

0xd8e2,	// (0x000471e2) aid_size_touch_scroll_bar

0xebd9,	// (0x000484d9) aid_list_double

0x335a,	// (0x0003cc5a) aid_list_single

0xebd9,	// (0x000484d9) aid_list_single_lg

0xebe2,	// (0x000484e2) aid_list_z_g_a_sm

0x3363,	// (0x0003cc63) aid_list_z_g_d

0x336b,	// (0x0003cc6b) aid_txt_z_prm

0xebea,	// (0x000484ea) aid_txt_z_prm_cp01

0xebf8,	// (0x000484f8) aid_txt_z_sec

0xaa88,	// (0x00044388) main_cntbar_detail_cont_pane_g1_ParamLimits

0xaa88,	// (0x00044388) main_cntbar_detail_cont_pane_g1

0xaa9c,	// (0x0004439c) main_cntbar_detail_cont_pane_g2_ParamLimits

0xaa9c,	// (0x0004439c) main_cntbar_detail_cont_pane_g2

0x0001,

0xfea1,	// (0x000497a1) main_cntbar_detail_cont_pane_g_ParamLimits

0xfea1,	// (0x000497a1) main_cntbar_detail_cont_pane_g

0x06f3,	// (0x00039ff3) main_cntbar_detail_cont_pane_t1

0x0701,	// (0x0003a001) main_cntbar_detail_cont_pane_t2

0x070f,	// (0x0003a00f) main_cntbar_detail_cont_pane_t3

0x0002,

0xfea6,	// (0x000497a6) main_cntbar_detail_cont_pane_t

0xaaac,	// (0x000443ac) cell_cntbar_detail_list_shct_pane_ParamLimits

0xaaac,	// (0x000443ac) cell_cntbar_detail_list_shct_pane

0x072f,	// (0x0003a02f) cntbar_detail_list_shct_pane_g1

0x0738,	// (0x0003a038) cntbar_detail_list_shct_pane_g2

0x0001,

0xfead,	// (0x000497ad) cntbar_detail_list_shct_pane_g

0xaabe,	// (0x000443be) cntbar_detail_list_event_pane_g1_ParamLimits

0xaabe,	// (0x000443be) cntbar_detail_list_event_pane_g1

0xaaca,	// (0x000443ca) cntbar_detail_list_event_pane_g2_ParamLimits

0xaaca,	// (0x000443ca) cntbar_detail_list_event_pane_g2

0x0005,

0xfeb2,	// (0x000497b2) cntbar_detail_list_event_pane_g_ParamLimits

0xfeb2,	// (0x000497b2) cntbar_detail_list_event_pane_g

0xab36,	// (0x00044436) cntbar_detail_list_event_pane_t1_ParamLimits

0xab36,	// (0x00044436) cntbar_detail_list_event_pane_t1

0xab4b,	// (0x0004444b) cntbar_detail_list_event_pane_t2_ParamLimits

0xab4b,	// (0x0004444b) cntbar_detail_list_event_pane_t2

0x0002,

0xfebf,	// (0x000497bf) cntbar_detail_list_event_pane_t_ParamLimits

0xfebf,	// (0x000497bf) cntbar_detail_list_event_pane_t

0xc965,	// (0x00046265) cell_cntbar_detail_list_shct_pane_g1

0x57d6,	// (0x0003f0d6) navi_pane_mv_g3

0x1c39,	// (0x0003b539) main_cntbar_detail_pane_ParamLimits

0x0f8a,	// (0x0003a88a) main_notif_wgt_pane

0xed51,	// (0x00048651) aid_tch_main_mp4_pane_g4

0xef35,	// (0x00048835) popup_slider_window_cp02

0xeb72,	// (0x00048472) list_recal_day_event_pane

0xa9e9,	// (0x000442e9) cntbar_detail_btn_pane_ParamLimits

0xa9e9,	// (0x000442e9) cntbar_detail_btn_pane

0xa9fc,	// (0x000442fc) cntbar_detail_btn_pane_cp01_ParamLimits

0xa9fc,	// (0x000442fc) cntbar_detail_btn_pane_cp01

0xaa21,	// (0x00044321) cntbar_detail_list_shct_pane_ParamLimits

0xaa31,	// (0x00044331) cntbar_detail_pane_g1_ParamLimits

0xaa31,	// (0x00044331) cntbar_detail_pane_g1

0xaa41,	// (0x00044341) cntbar_detail_pane_t1_ParamLimits

0xaa41,	// (0x00044341) cntbar_detail_pane_t1

0xaad6,	// (0x000443d6) cntbar_detail_list_event_pane_g3_ParamLimits

0xaad6,	// (0x000443d6) cntbar_detail_list_event_pane_g3

0xaaee,	// (0x000443ee) cntbar_detail_list_event_pane_g4_ParamLimits

0xaaee,	// (0x000443ee) cntbar_detail_list_event_pane_g4

0xab06,	// (0x00044406) cntbar_detail_list_event_pane_g5_ParamLimits

0xab06,	// (0x00044406) cntbar_detail_list_event_pane_g5

0xab1e,	// (0x0004441e) cntbar_detail_list_event_pane_g6_ParamLimits

0xab1e,	// (0x0004441e) cntbar_detail_list_event_pane_g6

0xab60,	// (0x00044460) cntbar_detail_list_event_pane_t3_ParamLimits

0xab60,	// (0x00044460) cntbar_detail_list_event_pane_t3

0xab72,	// (0x00044472) popup_notif_wgt_window_ParamLimits

0xab72,	// (0x00044472) popup_notif_wgt_window

0xab87,	// (0x00044487) popup_submenu_window_cp01_ParamLimits

0xab87,	// (0x00044487) popup_submenu_window_cp01

0x5855,	// (0x0003f155) bg_popup_window_pane_cp10

0x080f,	// (0x0003a10f) listscroll_notif_wgt_pane

0x0817,	// (0x0003a117) list_notif_wgt_window

0x0820,	// (0x0003a120) scroll_pane_cp033

0x0829,	// (0x0003a129) list_notif_wgt_row_pane_ParamLimits

0x0829,	// (0x0003a129) list_notif_wgt_row_pane

0x083b,	// (0x0003a13b) aid_size_list_notif_wgt_del

0x0844,	// (0x0003a144) list_notif_wgt_row_pane_g1

0x084c,	// (0x0003a14c) list_notif_wgt_row_pane_g2

0x0854,	// (0x0003a154) list_notif_wgt_row_pane_g3

0x0002,

0xfec6,	// (0x000497c6) list_notif_wgt_row_pane_g

0x085d,	// (0x0003a15d) list_notif_wgt_row_pane_t1

0x086b,	// (0x0003a16b) list_notif_wgt_row_pane_t2

0x0879,	// (0x0003a179) list_notif_wgt_row_pane_t3

0x0002,

0xfecd,	// (0x000497cd) list_notif_wgt_row_pane_t

0xd5da,	// (0x00046eda) list_recal_day_event_pane_g1

0x0887,	// (0x0003a187) list_recal_day_event_pane_t1

0x0f8a,	// (0x0003a88a) bg_button_pane_cp045

0xab97,	// (0x00044497) cntbar_detail_btn_pane_t1

0xc52a,	// (0x00045e2a) main_callh_pane_ParamLimits

0xc52a,	// (0x00045e2a) main_callh_pane

0x0f8a,	// (0x0003a88a) main_coverflow0_pane

0x0f8a,	// (0x0003a88a) main_wgtman_pane

0xa27d,	// (0x00043b7d) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xa27d,	// (0x00043b7d) main_fs_bigclock_unlock_btn_pane

0xe7f9,	// (0x000480f9) bg_button_pane_cp16

0xe809,	// (0x00048109) cell_tport_appsw_pane_g3

0xaba5,	// (0x000444a5) cf0_flow_pane_ParamLimits

0xaba5,	// (0x000444a5) cf0_flow_pane

0x08b3,	// (0x0003a1b3) listscroll_cf0_pane

0x08bc,	// (0x0003a1bc) main_cf0_pane_g1

0xabba,	// (0x000444ba) main_cf0_pane_t1_ParamLimits

0xabba,	// (0x000444ba) main_cf0_pane_t1

0xabcf,	// (0x000444cf) main_cf0_pane_t2_ParamLimits

0xabcf,	// (0x000444cf) main_cf0_pane_t2

0x0001,

0xfed4,	// (0x000497d4) main_cf0_pane_t_ParamLimits

0xfed4,	// (0x000497d4) main_cf0_pane_t

0x08ea,	// (0x0003a1ea) scroll_pane_cp11

0xabe4,	// (0x000444e4) cf0_flow_pane_g1

0xabec,	// (0x000444ec) cf0_flow_pane_g2

0x0001,

0xfed9,	// (0x000497d9) cf0_flow_pane_g

0xabf4,	// (0x000444f4) cf0_flow_pane_t1

0x0f8a,	// (0x0003a88a) main_call6_pane

0x0f8a,	// (0x0003a88a) main_calllock_pane

0xac02,	// (0x00044502) call6_btn_grp_pane_ParamLimits

0xac02,	// (0x00044502) call6_btn_grp_pane

0xac18,	// (0x00044518) call6_pane_g1_ParamLimits

0xac18,	// (0x00044518) call6_pane_g1

0xac2b,	// (0x0004452b) popup_call6_1st_window_ParamLimits

0xac2b,	// (0x0004452b) popup_call6_1st_window

0xac3a,	// (0x0004453a) popup_call6_2nd_window_ParamLimits

0xac3a,	// (0x0004453a) popup_call6_2nd_window

0xac49,	// (0x00044549) cell_call6_btn_pane_ParamLimits

0xac49,	// (0x00044549) cell_call6_btn_pane

0x5855,	// (0x0003f155) bg_popup_call2_in_pane_cp03

0x0952,	// (0x0003a252) popup_call6_1st_window_g1

0x095a,	// (0x0003a25a) popup_call6_1st_window_g2

0x0962,	// (0x0003a262) popup_call6_1st_window_g3

0x0002,

0xfede,	// (0x000497de) popup_call6_1st_window_g

0x096a,	// (0x0003a26a) popup_call6_1st_window_t1

0x0979,	// (0x0003a279) popup_call6_1st_window_t2

0x0987,	// (0x0003a287) popup_call6_1st_window_t3

0x0002,

0xfee5,	// (0x000497e5) popup_call6_1st_window_t

0x5855,	// (0x0003f155) bg_popup_call2_in_pane_cp04

0x0952,	// (0x0003a252) popup_call6_2nd_window_g1

0x095a,	// (0x0003a25a) popup_call6_2nd_window_g2

0x0962,	// (0x0003a262) popup_call6_2nd_window_g3

0x0002,

0xfede,	// (0x000497de) popup_call6_2nd_window_g

0x096a,	// (0x0003a26a) popup_call6_2nd_window_t1

0x0f8a,	// (0x0003a88a) bg_button_pane_cp15

0x0995,	// (0x0003a295) cell_call6_btn_pane_g1

0x099e,	// (0x0003a29e) cell_call6_btn_pane_t1

0xac5d,	// (0x0004455d) listscroll_wgtman_pane_ParamLimits

0xac5d,	// (0x0004455d) listscroll_wgtman_pane

0xac7c,	// (0x0004457c) wgtman_btn_pane_ParamLimits

0xac7c,	// (0x0004457c) wgtman_btn_pane

0x5444,	// (0x0003ed44) aid_scroll_copy1

0x09fa,	// (0x0003a2fa) list_wgtman_pane

0xacbc,	// (0x000445bc) wgtman_btn_pane_g1_ParamLimits

0xacbc,	// (0x000445bc) wgtman_btn_pane_g1

0xace8,	// (0x000445e8) wgtman_btn_pane_t1_ParamLimits

0xace8,	// (0x000445e8) wgtman_btn_pane_t1

0x0a63,	// (0x0003a363) wgtman_btn_pane_t2_ParamLimits

0x0a63,	// (0x0003a363) wgtman_btn_pane_t2

0x0001,

0xfeec,	// (0x000497ec) wgtman_btn_pane_t_ParamLimits

0xfeec,	// (0x000497ec) wgtman_btn_pane_t

0xad25,	// (0x00044625) listrow_wgtman_pane_ParamLimits

0xad25,	// (0x00044625) listrow_wgtman_pane

0xad36,	// (0x00044636) listrow_wgtman_pane_g1

0xad3f,	// (0x0004463f) listrow_wgtman_pane_g2

0x0001,

0xfef1,	// (0x000497f1) listrow_wgtman_pane_g

0x3379,	// (0x0003cc79) listrow_wgtman_pane_t1

0x3387,	// (0x0003cc87) listrow_wgtman_pane_t2

0x0001,

0xfef6,	// (0x000497f6) listrow_wgtman_pane_t

0x3395,	// (0x0003cc95) wait_bar_pane_cp09

0x0a9c,	// (0x0003a39c) main_calllock_btn_pane

0x0aa4,	// (0x0003a3a4) main_calllock_pane_g1

0x0f8a,	// (0x0003a88a) bg_button_pane_cp17

0x0aad,	// (0x0003a3ad) main_calllock_btn_pane_g1

0x0ab6,	// (0x0003a3b6) main_calllock_btn_pane_t1

0x0f8a,	// (0x0003a88a) main_dialer3_pane

0x0f8a,	// (0x0003a88a) main_fmrd2_pane

0xc965,	// (0x00046265) main_fs_bigclock_unlock_btn_pane_g1

0x0acd,	// (0x0003a3cd) main_fs_bigclock_unlock_btn_pane_t1

0xad47,	// (0x00044647) area_fmrd2_info_pane_ParamLimits

0xad47,	// (0x00044647) area_fmrd2_info_pane

0xad56,	// (0x00044656) area_fmrd2_visual_pane_ParamLimits

0xad56,	// (0x00044656) area_fmrd2_visual_pane

0xad64,	// (0x00044664) fmrd2_indi_pane_ParamLimits

0xad64,	// (0x00044664) fmrd2_indi_pane

0xad71,	// (0x00044671) area_fmrd2_visual_pane_g1

0xad79,	// (0x00044679) area_fmrd2_visual_pane_t1

0xad87,	// (0x00044687) area_fmrd2_visual_pane_t2

0xad95,	// (0x00044695) area_fmrd2_visual_pane_t3

0x0002,

0xff00,	// (0x00049800) area_fmrd2_visual_pane_t

0xada3,	// (0x000446a3) area_fmrd2_info_pane_g1

0xadab,	// (0x000446ab) area_fmrd2_info_pane_t1

0xadb9,	// (0x000446b9) area_fmrd2_info_pane_t2

0xadc7,	// (0x000446c7) area_fmrd2_info_pane_t3

0xadd5,	// (0x000446d5) area_fmrd2_info_pane_t4

0x0003,

0xff07,	// (0x00049807) area_fmrd2_info_pane_t

0xade3,	// (0x000446e3) fmrd2_indi_pane_t1

0xadf1,	// (0x000446f1) fmrd2_indi_pane_t2

0xadff,	// (0x000446ff) fmrd2_indi_pane_t3

0x0002,

0xff10,	// (0x00049810) fmrd2_indi_pane_t

0xe2e9,	// (0x00047be9) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe2e9,	// (0x00047be9) list_single_fs_bigclock_indicator_pane_g5

0xe38b,	// (0x00047c8b) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe38b,	// (0x00047c8b) list_single_fs_bigclock_indicator_pane_t5

0xa735,	// (0x00044035) aid_cell_bcale_month_pane_ParamLimits

0xa735,	// (0x00044035) aid_cell_bcale_month_pane

0xa747,	// (0x00044047) bcale_month_pane_ParamLimits

0xa747,	// (0x00044047) bcale_month_pane

0xa759,	// (0x00044059) bcale_preview_pane_ParamLimits

0xa759,	// (0x00044059) bcale_preview_pane

0x05cf,	// (0x00039ecf) list_single_fs_bigclock_pane_t1_ParamLimits

0x05e9,	// (0x00039ee9) list_single_fs_bigclock_pane_t2_ParamLimits

0x05e9,	// (0x00039ee9) list_single_fs_bigclock_pane_t2

0x0001,

0xfe97,	// (0x00049797) list_single_fs_bigclock_pane_t_ParamLimits

0xfe97,	// (0x00049797) list_single_fs_bigclock_pane_t

0x0ac5,	// (0x0003a3c5) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfefb,	// (0x000497fb) main_fs_bigclock_unlock_btn_pane_g

0xae0d,	// (0x0004470d) aid_dia3_key_size_ParamLimits

0xae0d,	// (0x0004470d) aid_dia3_key_size

0xae1c,	// (0x0004471c) aid_dia3_listrow_size_ParamLimits

0xae1c,	// (0x0004471c) aid_dia3_listrow_size

0xae2f,	// (0x0004472f) dia3_keypad_fun_pane_ParamLimits

0xae2f,	// (0x0004472f) dia3_keypad_fun_pane

0xae43,	// (0x00044743) dia3_keypad_num_pane_ParamLimits

0xae43,	// (0x00044743) dia3_keypad_num_pane

0xae54,	// (0x00044754) dia3_listscroll_pane_ParamLimits

0xae54,	// (0x00044754) dia3_listscroll_pane

0xae65,	// (0x00044765) dia3_numentry_pane_ParamLimits

0xae65,	// (0x00044765) dia3_numentry_pane

0x0be8,	// (0x0003a4e8) dia3_list_pane

0x0bf1,	// (0x0003a4f1) scroll_pane_cp12

0x0f8a,	// (0x0003a88a) bg_dia3_numentry_pane

0xae77,	// (0x00044777) dia3_numentry_pane_t1

0xae86,	// (0x00044786) cell_dia3_key_num_pane

0xae8e,	// (0x0004478e) cell_dia3_key0_fun_pane_ParamLimits

0xae8e,	// (0x0004478e) cell_dia3_key0_fun_pane

0xaea2,	// (0x000447a2) cell_dia3_key1_fun_pane_ParamLimits

0xaea2,	// (0x000447a2) cell_dia3_key1_fun_pane

0xaeb9,	// (0x000447b9) dia3_listrow_pane

0xdfed,	// (0x000478ed) bg_dia3_numentry_pane_g1

0x0f8a,	// (0x0003a88a) bg_button_pane_cp21

0x0c38,	// (0x0003a538) cell_dia3_key_num_pane_t1

0x0c46,	// (0x0003a546) cell_dia3_key_num_pane_t2

0x0c55,	// (0x0003a555) cell_dia3_key_num_pane_t3

0x0c64,	// (0x0003a564) cell_dia3_key_num_pane_t4

0x0003,

0xff17,	// (0x00049817) cell_dia3_key_num_pane_t

0x0f8a,	// (0x0003a88a) bg_button_pane_cp19

0x0c73,	// (0x0003a573) cell_dia3_key0_fun_pane_g1

0x0f8a,	// (0x0003a88a) bg_button_pane_cp20

0xaecb,	// (0x000447cb) cell_dia3_key1_fun_pane_g1

0xaed3,	// (0x000447d3) area_left_week_number_pane

0xaedc,	// (0x000447dc) area_top_day_name_pane

0xaee5,	// (0x000447e5) frame_month_view_pane

0xaeed,	// (0x000447ed) grid_month_view_pane

0xaef7,	// (0x000447f7) cell_top_day_name_pane_ParamLimits

0xaef7,	// (0x000447f7) cell_top_day_name_pane

0xaf0d,	// (0x0004480d) cell_area_left_week_number_pane_ParamLimits

0xaf0d,	// (0x0004480d) cell_area_left_week_number_pane

0xaf21,	// (0x00044821) cell_month_view_pane_ParamLimits

0xaf21,	// (0x00044821) cell_month_view_pane

0x0cec,	// (0x0003a5ec) frm_month_g1

0xaf3c,	// (0x0004483c) frm_month_g2

0xaf44,	// (0x00044844) frm_month_g3

0xaf4c,	// (0x0004484c) frm_month_g4

0xaf54,	// (0x00044854) frm_month_g5

0xaf5c,	// (0x0004485c) frm_month_g6

0xaf64,	// (0x00044864) frm_month_g7

0x0d25,	// (0x0003a625) frm_month_g8

0xaf6c,	// (0x0004486c) frm_month_g9

0xaf75,	// (0x00044875) frm_month_g10

0xaf7e,	// (0x0004487e) frm_month_g11

0xaf87,	// (0x00044887) frm_month_g12

0xaf90,	// (0x00044890) frm_month_g13

0xaf99,	// (0x00044899) frm_month_g14

0xafa2,	// (0x000448a2) frm_month_g15

0xafab,	// (0x000448ab) frm_month_g16

0x000f,

0xff20,	// (0x00049820) frm_month_g

0xafb4,	// (0x000448b4) cell_top_day_name_pane_t1

0xafc3,	// (0x000448c3) cell_area_left_week_number_pane_g1

0xafb4,	// (0x000448b4) cell_area_left_week_number_pane_t1

0xc965,	// (0x00046265) cell_month_view_pane_g1

0xafcb,	// (0x000448cb) cell_month_view_pane_t1

0x0f8a,	// (0x0003a88a) main_fps_pane

0xe5ff,	// (0x00047eff) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe5ff,	// (0x00047eff) cmail_ddmenu_btn02_pane_cp1

0xe61b,	// (0x00047f1b) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe61b,	// (0x00047f1b) cmail_ddmenu_btn02_pane_cp2

0xa8f7,	// (0x000441f7) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xa8f7,	// (0x000441f7) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe48,	// (0x00049748) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe48,	// (0x00049748) cmail_ddmenu_btn02_pane_g

0xa918,	// (0x00044218) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xa918,	// (0x00044218) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe4d,	// (0x0004974d) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe4d,	// (0x0004974d) cmail_ddmenu_btn02_pane_t

0xafda,	// (0x000448da) fps_text_pane_ParamLimits

0xafda,	// (0x000448da) fps_text_pane

0xaff0,	// (0x000448f0) main_fps_pane_g1_ParamLimits

0xaff0,	// (0x000448f0) main_fps_pane_g1

0xb006,	// (0x00044906) wait_bar_pane_cp010_ParamLimits

0xb006,	// (0x00044906) wait_bar_pane_cp010

0xb017,	// (0x00044917) fps_text_pane_t1_ParamLimits

0xb017,	// (0x00044917) fps_text_pane_t1

0x0f50,	// (0x0003a850) cam4_image_uncrop_pane_g1

0x0f59,	// (0x0003a859) cam4_image_uncrop_pane_g2

0x8917,	// (0x00042217) cam4_image_uncrop_pane_g3

0x8920,	// (0x00042220) cam4_image_uncrop_pane_g4

0x0003,

0xf920,	// (0x00049220) cam4_image_uncrop_pane_g

0xaeb9,	// (0x000447b9) dia3_listrow_pane_ParamLimits

0x0f8a,	// (0x0003a88a) main_phob2_pane

0xa5da,	// (0x00043eda) cell_tport_appsw_pane_cp02_ParamLimits

0xa5da,	// (0x00043eda) cell_tport_appsw_pane_cp02

0xa5ea,	// (0x00043eea) cell_tport_appsw_pane_cp03_ParamLimits

0xa5ea,	// (0x00043eea) cell_tport_appsw_pane_cp03

0x0f8a,	// (0x0003a88a) phob2_contact_card_pane

0x0f8a,	// (0x0003a88a) phob2_listscroll_pane

0x0dd1,	// (0x0003a6d1) phob2_list_pane

0x0dd9,	// (0x0003a6d9) scroll_pane_cp034

0xb02f,	// (0x0004492f) phob2_cc_data_pane_ParamLimits

0xb02f,	// (0x0004492f) phob2_cc_data_pane

0xb04c,	// (0x0004494c) phob2_cc_listscroll_pane_ParamLimits

0xb04c,	// (0x0004494c) phob2_cc_listscroll_pane

0xb068,	// (0x00044968) list_double_large_graphic_phob2_pane_ParamLimits

0xb068,	// (0x00044968) list_double_large_graphic_phob2_pane

0xb07a,	// (0x0004497a) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xb07a,	// (0x0004497a) list_double_large_graphic_phob2_pane_g1

0x339d,	// (0x0003cc9d) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x339d,	// (0x0003cc9d) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff41,	// (0x00049841) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff41,	// (0x00049841) list_double_large_graphic_phob2_pane_g

0x33a9,	// (0x0003cca9) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x33a9,	// (0x0003cca9) list_double_large_graphic_phob2_pane_t1

0x33be,	// (0x0003ccbe) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x33be,	// (0x0003ccbe) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff46,	// (0x00049846) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff46,	// (0x00049846) list_double_large_graphic_phob2_pane_t

0x0f8a,	// (0x0003a88a) list_highlight_pane_cp024

0x0e31,	// (0x0003a731) phob2_cc_button_pane

0xb087,	// (0x00044987) phob2_cc_data_pane_g1_ParamLimits

0xb087,	// (0x00044987) phob2_cc_data_pane_g1

0xb09c,	// (0x0004499c) phob2_cc_data_pane_g2_ParamLimits

0xb09c,	// (0x0004499c) phob2_cc_data_pane_g2

0x0001,

0xff4b,	// (0x0004984b) phob2_cc_data_pane_g_ParamLimits

0xff4b,	// (0x0004984b) phob2_cc_data_pane_g

0xb0ae,	// (0x000449ae) phob2_cc_data_pane_t1_ParamLimits

0xb0ae,	// (0x000449ae) phob2_cc_data_pane_t1

0xb0c6,	// (0x000449c6) phob2_cc_data_pane_t2_ParamLimits

0xb0c6,	// (0x000449c6) phob2_cc_data_pane_t2

0xb0de,	// (0x000449de) phob2_cc_data_pane_t3_ParamLimits

0xb0de,	// (0x000449de) phob2_cc_data_pane_t3

0x0002,

0xff50,	// (0x00049850) phob2_cc_data_pane_t_ParamLimits

0xff50,	// (0x00049850) phob2_cc_data_pane_t

0x0e87,	// (0x0003a787) phob2_cc_list_pane_ParamLimits

0x0e87,	// (0x0003a787) phob2_cc_list_pane

0xdf0a,	// (0x0004780a) scroll_pane_cp035_ParamLimits

0xdf0a,	// (0x0004780a) scroll_pane_cp035

0x1c39,	// (0x0003b539) bg_button_pane_cp033

0x0e93,	// (0x0003a793) phob2_cc_button_pane_g1

0x0e9f,	// (0x0003a79f) phob2_cc_button_pane_t1

0x0eb4,	// (0x0003a7b4) phob2_cc_button_pane_t2

0x0001,

0xff57,	// (0x00049857) phob2_cc_button_pane_t

0xb0f6,	// (0x000449f6) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xb0f6,	// (0x000449f6) list_double_large_graphic_phob2_cc_pane

0xb108,	// (0x00044a08) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xb108,	// (0x00044a08) list_double_large_graphic_phob2_cc_pane_g1

0x33d0,	// (0x0003ccd0) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x33d0,	// (0x0003ccd0) list_double_large_graphic_phob2_cc_pane_g2

0x33dc,	// (0x0003ccdc) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x33dc,	// (0x0003ccdc) list_double_large_graphic_phob2_cc_pane_g3

0x33e8,	// (0x0003cce8) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x33e8,	// (0x0003cce8) list_double_large_graphic_phob2_cc_pane_g4

0x33f4,	// (0x0003ccf4) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x33f4,	// (0x0003ccf4) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff5c,	// (0x0004985c) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff5c,	// (0x0004985c) list_double_large_graphic_phob2_cc_pane_g

0x3400,	// (0x0003cd00) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x3400,	// (0x0003cd00) list_double_large_graphic_phob2_cc_pane_t1

0x3429,	// (0x0003cd29) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x3429,	// (0x0003cd29) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff67,	// (0x00049867) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff67,	// (0x00049867) list_double_large_graphic_phob2_cc_pane_t

0x0ef2,	// (0x0003a7f2) list_highlight_pane_cp025_ParamLimits

0x0ef2,	// (0x0003a7f2) list_highlight_pane_cp025

0x1c39,	// (0x0003b539) bg_button_pane_cp033_ParamLimits

0x0e93,	// (0x0003a793) phob2_cc_button_pane_g1_ParamLimits

0x0e9f,	// (0x0003a79f) phob2_cc_button_pane_t1_ParamLimits

0x0eb4,	// (0x0003a7b4) phob2_cc_button_pane_t2_ParamLimits

0xff57,	// (0x00049857) phob2_cc_button_pane_t_ParamLimits

0x363d,	// (0x0003cf3d) popup_wgtman_window

0xe00d,	// (0x0004790d) scroll_pane_cp038

0xac9e,	// (0x0004459e) wgtman_btn_pane_cp_01_ParamLimits

0xac9e,	// (0x0004459e) wgtman_btn_pane_cp_01

0x0f00,	// (0x0003a800) wgtman_content_pane

0x0f09,	// (0x0003a809) wgtman_heading_pane

0x0f8a,	// (0x0003a88a) bg_heading_pane_cp02

0x0f12,	// (0x0003a812) wgtman_heading_pane_g1

0x0f1a,	// (0x0003a81a) wgtman_heading_pane_t1

0x0f28,	// (0x0003a828) scroll_pane_cp036

0x0f30,	// (0x0003a830) wgtman_list_pane

0x0f38,	// (0x0003a838) wgtman_list_pane_t1_ParamLimits

0x0f38,	// (0x0003a838) wgtman_list_pane_t1

0xef8f,	// (0x0004888f) cam4_grid_pane

0x2d4e,	// (0x0003c64e) bg_button_pane_cp015_ParamLimits

0x94b8,	// (0x00042db8) bg_button_pane_cp016_ParamLimits

0x94ca,	// (0x00042dca) bg_button_pane_cp017_ParamLimits

0x2d8c,	// (0x0003c68c) popup_vitu2_query_window_g3_ParamLimits

0x2d8c,	// (0x0003c68c) popup_vitu2_query_window_g3

0x2e05,	// (0x0003c705) popup_vitu2_query_window_t6_ParamLimits

0x2e05,	// (0x0003c705) popup_vitu2_query_window_t6

0x2e30,	// (0x0003c730) popup_vitu2_query_window_t7_ParamLimits

0x2e30,	// (0x0003c730) popup_vitu2_query_window_t7

0x0f50,	// (0x0003a850) cam4_grid_pane_g1

0x0f59,	// (0x0003a859) cam4_grid_pane_g2

0x0f62,	// (0x0003a862) cam4_grid_pane_g3

0x0f6b,	// (0x0003a86b) cam4_grid_pane_g4

0x0003,

0xff6c,	// (0x0004986c) cam4_grid_pane_g

0x42b3,	// (0x0003dbb3) aid_placing_vt_slider_lsc_ParamLimits

0x4523,	// (0x0003de23) vidtel_button_pane_ParamLimits

0x4523,	// (0x0003de23) vidtel_button_pane

0x0f8a,	// (0x0003a88a) bg_button_pane_cp034

0xb114,	// (0x00044a14) vidtel_button_pane_g1

0x0f7c,	// (0x0003a87c) vidtel_button_pane_t1

0xd5bc,	// (0x00046ebc) aid_size_vtel_slider_touch

0xdf0a,	// (0x0004780a) scroll_pane_cp039

0xe039,	// (0x00047939) ncim_query_button_pane_cp01_ParamLimits

0xe058,	// (0x00047958) ncimui_query_pane_g1_ParamLimits

0x1c39,	// (0x0003b539) input_focus_pane_cp012_ParamLimits

0xe07d,	// (0x0004797d) ncim_query_entry_pane_t1_ParamLimits

0xdf0a,	// (0x0004780a) scroll_pane_cp039_ParamLimits
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
	};

} // end of namespace AknLayoutScalable_Elaf_pql_apps_qvga_lsc_Small
