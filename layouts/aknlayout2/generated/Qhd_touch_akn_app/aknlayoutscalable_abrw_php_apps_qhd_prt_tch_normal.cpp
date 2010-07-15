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

#include "aknlayoutscalable_abrw_php_apps_qhd_prt_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch[]; }

namespace AknLayoutScalable_Abrw_php_apps_qhd_prt_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x0001e42a };

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
0x26fc,	// (0x00020b26) Screen

0x2708,	// (0x00020b32) application_window

0x2714,	// (0x00020b3e) area_bottom_pane_ParamLimits

0x2714,	// (0x00020b3e) area_bottom_pane

0x0d47,	// (0x0001f171) area_top_pane_ParamLimits

0x0d47,	// (0x0001f171) area_top_pane

0x0dab,	// (0x0001f1d5) call_video_uplink_pane_ParamLimits

0x0dab,	// (0x0001f1d5) call_video_uplink_pane

0x0dea,	// (0x0001f214) main_pane_ParamLimits

0x0dea,	// (0x0001f214) main_pane

0xc4ab,	// (0x0002a8d5) context_pane

0x54b6,	// (0x000238e0) navi_pane

0x54dc,	// (0x00023906) popup_cale_events_window_ParamLimits

0x54dc,	// (0x00023906) popup_cale_events_window

0xc4be,	// (0x0002a8e8) popup_mup_playback_window

0x54f4,	// (0x0002391e) signal_pane

0xa3dc,	// (0x00028806) main_browser_pane

0xa5b8,	// (0x000289e2) main_burst_pane

0x13a8,	// (0x0001f7d2) main_calc_pane

0xc491,	// (0x0002a8bb) main_cale_day_pane

0x2b33,	// (0x00020f5d) main_cale_month_pane

0xc491,	// (0x0002a8bb) main_cale_week_pane

0xa5b8,	// (0x000289e2) main_call_pane

0xa0bc,	// (0x000284e6) main_call_poc_pane

0xa5b8,	// (0x000289e2) main_camera_pane

0xa5b8,	// (0x000289e2) main_chi_dic_pane

0xad8f,	// (0x000291b9) main_clock_pane

0xa0bc,	// (0x000284e6) main_fmradio_pane

0xa5b8,	// (0x000289e2) main_graph_messa_pane

0xa0bc,	// (0x000284e6) main_help_pane

0xa3dc,	// (0x00028806) main_im_pane

0xa317,	// (0x00028741) main_image_pane_ParamLimits

0xa317,	// (0x00028741) main_image_pane

0xa0bc,	// (0x000284e6) main_location2_pane

0xa5b8,	// (0x000289e2) main_location_pane

0xa317,	// (0x00028741) main_messa_pane

0xa0bc,	// (0x000284e6) main_mp2_pane

0xa5b8,	// (0x000289e2) main_mp_pane

0xa0bc,	// (0x000284e6) main_msg_pane

0xa0bc,	// (0x000284e6) main_mup_eq_pane

0xa0bc,	// (0x000284e6) main_mup_pane

0xa3dc,	// (0x00028806) main_notes_pane

0xa0bc,	// (0x000284e6) main_pec_pane

0xa0bc,	// (0x000284e6) main_phob_pane

0xa0bc,	// (0x000284e6) main_pinb_pane

0xa0bc,	// (0x000284e6) main_postcard_pane

0xa0bc,	// (0x000284e6) main_qdial_pane

0xa5b8,	// (0x000289e2) main_skin_pane

0xa0bc,	// (0x000284e6) main_smil2_pane

0xa5b8,	// (0x000289e2) main_smil_pane

0xa5b8,	// (0x000289e2) main_video_pane

0xa5b8,	// (0x000289e2) main_video_tele_pane

0xa317,	// (0x00028741) main_viewer_pane_ParamLimits

0xa317,	// (0x00028741) main_viewer_pane

0xa5b8,	// (0x000289e2) main_vorec_pane

0x13f4,	// (0x0001f81e) popup_blid_sat_info_window_ParamLimits

0x13f4,	// (0x0001f81e) popup_blid_sat_info_window

0x1414,	// (0x0001f83e) popup_dyc_status_message_window_ParamLimits

0x1414,	// (0x0001f83e) popup_dyc_status_message_window

0x1424,	// (0x0001f84e) popup_grid_large_graphic_window_ParamLimits

0x1424,	// (0x0001f84e) popup_grid_large_graphic_window

0x14b5,	// (0x0001f8df) popup_loc_request_window_ParamLimits

0x14b5,	// (0x0001f8df) popup_loc_request_window

0x1502,	// (0x0001f92c) popup_wml_address_window_ParamLimits

0x1502,	// (0x0001f92c) popup_wml_address_window

0x5398,	// (0x000237c2) call_muted_g1

0x505a,	// (0x00023484) popup_call_audio_conf_window_ParamLimits

0x505a,	// (0x00023484) popup_call_audio_conf_window

0x53a8,	// (0x000237d2) popup_call_audio_first_window_ParamLimits

0x53a8,	// (0x000237d2) popup_call_audio_first_window

0x53e8,	// (0x00023812) popup_call_audio_in_window_ParamLimits

0x53e8,	// (0x00023812) popup_call_audio_in_window

0x540c,	// (0x00023836) popup_call_audio_out_window_ParamLimits

0x540c,	// (0x00023836) popup_call_audio_out_window

0x542e,	// (0x00023858) popup_call_audio_second_window_ParamLimits

0x542e,	// (0x00023858) popup_call_audio_second_window

0x545e,	// (0x00023888) popup_call_audio_wait_window_ParamLimits

0x545e,	// (0x00023888) popup_call_audio_wait_window

0x547f,	// (0x000238a9) popup_number_entry_window_ParamLimits

0x547f,	// (0x000238a9) popup_number_entry_window

0x9ca9,	// (0x000280d3) bg_popup_call_pane_cp05_ParamLimits

0x9ca9,	// (0x000280d3) bg_popup_call_pane_cp05

0x9cc9,	// (0x000280f3) popup_number_entry_window_t1

0x9cdc,	// (0x00028106) popup_number_entry_window_t2

0x9cee,	// (0x00028118) popup_number_entry_window_t3

0x0003,

0xf0af,	// (0x0002d4d9) popup_number_entry_window_t

0x9d00,	// (0x0002812a) text_title_cp2

0x9d13,	// (0x0002813d) bg_popup_call_pane_cp_ParamLimits

0x9d13,	// (0x0002813d) bg_popup_call_pane_cp

0x9d21,	// (0x0002814b) call_thumbnail_pane

0x9d29,	// (0x00028153) popup_call_audio_in_window_g1_ParamLimits

0x9d29,	// (0x00028153) popup_call_audio_in_window_g1

0x9d35,	// (0x0002815f) popup_call_audio_in_window_g2_ParamLimits

0x9d35,	// (0x0002815f) popup_call_audio_in_window_g2

0x9d41,	// (0x0002816b) popup_call_audio_in_window_g3_ParamLimits

0x9d41,	// (0x0002816b) popup_call_audio_in_window_g3

0x0002,

0xf0b8,	// (0x0002d4e2) popup_call_audio_in_window_g_ParamLimits

0xf0b8,	// (0x0002d4e2) popup_call_audio_in_window_g

0x9d4d,	// (0x00028177) popup_call_audio_in_window_t1_ParamLimits

0x9d4d,	// (0x00028177) popup_call_audio_in_window_t1

0x9d69,	// (0x00028193) popup_call_audio_in_window_t2_ParamLimits

0x9d69,	// (0x00028193) popup_call_audio_in_window_t2

0x9d85,	// (0x000281af) popup_call_audio_in_window_t3_ParamLimits

0x9d85,	// (0x000281af) popup_call_audio_in_window_t3

0x0002,

0xf0bf,	// (0x0002d4e9) popup_call_audio_in_window_t_ParamLimits

0xf0bf,	// (0x0002d4e9) popup_call_audio_in_window_t

0x9d13,	// (0x0002813d) bg_popup_call_pane_cp01_ParamLimits

0x9d13,	// (0x0002813d) bg_popup_call_pane_cp01

0x9d21,	// (0x0002814b) call_thumbnail_pane_cp02

0x9d98,	// (0x000281c2) call_type_pane_cp022

0x9da0,	// (0x000281ca) popup_call_audio_out_window_g1_ParamLimits

0x9da0,	// (0x000281ca) popup_call_audio_out_window_g1

0x9db2,	// (0x000281dc) popup_call_audio_out_window_g2_ParamLimits

0x9db2,	// (0x000281dc) popup_call_audio_out_window_g2

0x9dbe,	// (0x000281e8) popup_call_audio_out_window_g3_ParamLimits

0x9dbe,	// (0x000281e8) popup_call_audio_out_window_g3

0x0002,

0xf0c6,	// (0x0002d4f0) popup_call_audio_out_window_g_ParamLimits

0xf0c6,	// (0x0002d4f0) popup_call_audio_out_window_g

0x9dd0,	// (0x000281fa) popup_call_audio_out_window_t1_ParamLimits

0x9dd0,	// (0x000281fa) popup_call_audio_out_window_t1

0x9de8,	// (0x00028212) popup_call_audio_out_window_t2_ParamLimits

0x9de8,	// (0x00028212) popup_call_audio_out_window_t2

0x0001,

0xf0cd,	// (0x0002d4f7) popup_call_audio_out_window_t_ParamLimits

0xf0cd,	// (0x0002d4f7) popup_call_audio_out_window_t

0x9dfd,	// (0x00028227) bg_popup_call_pane_ParamLimits

0x9dfd,	// (0x00028227) bg_popup_call_pane

0x278e,	// (0x00020bb8) call_thumbnail_pane_cp_ParamLimits

0x278e,	// (0x00020bb8) call_thumbnail_pane_cp

0x9e81,	// (0x000282ab) call_type_pane_cp01_ParamLimits

0x9e81,	// (0x000282ab) call_type_pane_cp01

0x9ec5,	// (0x000282ef) popup_call_audio_first_window_g1_ParamLimits

0x9ec5,	// (0x000282ef) popup_call_audio_first_window_g1

0x9f11,	// (0x0002833b) popup_call_audio_first_window_g2_ParamLimits

0x9f11,	// (0x0002833b) popup_call_audio_first_window_g2

0x0001,

0xf0d2,	// (0x0002d4fc) popup_call_audio_first_window_g_ParamLimits

0xf0d2,	// (0x0002d4fc) popup_call_audio_first_window_g

0x9f55,	// (0x0002837f) popup_call_audio_first_window_t1_ParamLimits

0x9f55,	// (0x0002837f) popup_call_audio_first_window_t1

0xa001,	// (0x0002842b) popup_call_audio_first_window_t4_ParamLimits

0xa001,	// (0x0002842b) popup_call_audio_first_window_t4

0xa08d,	// (0x000284b7) popup_call_audio_first_window_t5_ParamLimits

0xa08d,	// (0x000284b7) popup_call_audio_first_window_t5

0x0002,

0xf0d7,	// (0x0002d501) popup_call_audio_first_window_t_ParamLimits

0xf0d7,	// (0x0002d501) popup_call_audio_first_window_t

0xa0bc,	// (0x000284e6) bg_popup_call_pane_cp02

0xa0c6,	// (0x000284f0) call_type_pane_cp023

0xa0ce,	// (0x000284f8) popup_call_audio_wait_window_g1

0xa0d6,	// (0x00028500) popup_call_audio_wait_window_g2

0x0001,

0xf0de,	// (0x0002d508) popup_call_audio_wait_window_g

0xa0de,	// (0x00028508) popup_call_audio_wait_window_t3

0xa0ec,	// (0x00028516) bg_popup_call_pane_cp03_ParamLimits

0xa0ec,	// (0x00028516) bg_popup_call_pane_cp03

0xa14c,	// (0x00028576) call_thumbnail_pane_cp011_ParamLimits

0xa14c,	// (0x00028576) call_thumbnail_pane_cp011

0xa158,	// (0x00028582) call_type_pane_cp034_ParamLimits

0xa158,	// (0x00028582) call_type_pane_cp034

0xa194,	// (0x000285be) popup_call_audio_second_window_g1_ParamLimits

0xa194,	// (0x000285be) popup_call_audio_second_window_g1

0xa1d0,	// (0x000285fa) popup_call_audio_second_window_g2_ParamLimits

0xa1d0,	// (0x000285fa) popup_call_audio_second_window_g2

0x0001,

0xf0e3,	// (0x0002d50d) popup_call_audio_second_window_g_ParamLimits

0xf0e3,	// (0x0002d50d) popup_call_audio_second_window_g

0xa20c,	// (0x00028636) popup_call_audio_second_window_t1_ParamLimits

0xa20c,	// (0x00028636) popup_call_audio_second_window_t1

0xa28d,	// (0x000286b7) popup_call_audio_second_window_t2_ParamLimits

0xa28d,	// (0x000286b7) popup_call_audio_second_window_t2

0xa2c3,	// (0x000286ed) popup_call_audio_second_window_t3_ParamLimits

0xa2c3,	// (0x000286ed) popup_call_audio_second_window_t3

0x0002,

0xf0e8,	// (0x0002d512) popup_call_audio_second_window_t_ParamLimits

0xf0e8,	// (0x0002d512) popup_call_audio_second_window_t

0xa0bc,	// (0x000284e6) bg_popup_call_pane_cp04

0xa2f9,	// (0x00028723) list_conf_pane

0xa301,	// (0x0002872b) popup_call_audio_conf_window_t1

0xa30f,	// (0x00028739) call_thumbnail_pane_g1

0xa317,	// (0x00028741) bg_pinb_pane_ParamLimits

0xa317,	// (0x00028741) bg_pinb_pane

0xa325,	// (0x0002874f) find_pinb_pane

0xa32e,	// (0x00028758) listscroll_pinb_pane_ParamLimits

0xa32e,	// (0x00028758) listscroll_pinb_pane

0xa33d,	// (0x00028767) pinb_bg_pane_g1

0x27b2,	// (0x00020bdc) pinb_bg_pane_g2

0x27be,	// (0x00020be8) pinb_bg_pane_g3

0x27ca,	// (0x00020bf4) pinb_bg_pane_g4

0x27d6,	// (0x00020c00) pinb_bg_pane_g5

0x27e2,	// (0x00020c0c) pinb_bg_pane_g6

0x27ed,	// (0x00020c17) pinb_bg_pane_g7

0x27f8,	// (0x00020c22) pinb_bg_pane_g8

0x2803,	// (0x00020c2d) pinb_bg_pane_g9

0x280d,	// (0x00020c37) pinb_bg_pane_g10

0x0009,

0xf0ef,	// (0x0002d519) pinb_bg_pane_g

0x282a,	// (0x00020c54) grid_pinb_pane

0x2835,	// (0x00020c5f) list_pinb_pane

0x2840,	// (0x00020c6a) scroll_pane_cp01_ParamLimits

0x2840,	// (0x00020c6a) scroll_pane_cp01

0xa347,	// (0x00028771) find_pinb_pane_g1_ParamLimits

0xa347,	// (0x00028771) find_pinb_pane_g1

0xa35f,	// (0x00028789) find_pinb_pane_t1

0xa371,	// (0x0002879b) find_pinb_pane_t2

0x0001,

0xf109,	// (0x0002d533) find_pinb_pane_t

0xa386,	// (0x000287b0) input_focus_pane_cp01_ParamLimits

0xa386,	// (0x000287b0) input_focus_pane_cp01

0x2852,	// (0x00020c7c) cell_pinb_pane_ParamLimits

0x2852,	// (0x00020c7c) cell_pinb_pane

0x287a,	// (0x00020ca4) cell_pinb_pane_g1_ParamLimits

0x287a,	// (0x00020ca4) cell_pinb_pane_g1

0x288f,	// (0x00020cb9) cell_pinb_pane_g2_ParamLimits

0x288f,	// (0x00020cb9) cell_pinb_pane_g2

0xa392,	// (0x000287bc) cell_pinb_pane_g3_ParamLimits

0xa392,	// (0x000287bc) cell_pinb_pane_g3

0x0002,

0xf10e,	// (0x0002d538) cell_pinb_pane_g_ParamLimits

0xf10e,	// (0x0002d538) cell_pinb_pane_g

0xa0bc,	// (0x000284e6) grid_highlight_pane_cp01

0x289b,	// (0x00020cc5) list_pinb_item_pane_ParamLimits

0x289b,	// (0x00020cc5) list_pinb_item_pane

0xa0bc,	// (0x000284e6) list_highlight_pane_cp02

0x28c1,	// (0x00020ceb) list_pinb_item_pane_g1_ParamLimits

0x28c1,	// (0x00020ceb) list_pinb_item_pane_g1

0x28ce,	// (0x00020cf8) list_pinb_item_pane_g2_ParamLimits

0x28ce,	// (0x00020cf8) list_pinb_item_pane_g2

0x28da,	// (0x00020d04) list_pinb_item_pane_g3_ParamLimits

0x28da,	// (0x00020d04) list_pinb_item_pane_g3

0x28eb,	// (0x00020d15) list_pinb_item_pane_g4_ParamLimits

0x28eb,	// (0x00020d15) list_pinb_item_pane_g4

0x0003,

0xf115,	// (0x0002d53f) list_pinb_item_pane_g_ParamLimits

0xf115,	// (0x0002d53f) list_pinb_item_pane_g

0x28f7,	// (0x00020d21) list_pinb_item_pane_t1_ParamLimits

0x28f7,	// (0x00020d21) list_pinb_item_pane_t1

0x0fd8,	// (0x0001f402) calc_display_pane

0x0ff6,	// (0x0001f420) calc_paper_pane

0x1012,	// (0x0001f43c) grid_calc_pane

0xa0bc,	// (0x000284e6) bg_list_pane_cp01

0x290e,	// (0x00020d38) clock_g1

0x2916,	// (0x00020d40) clock_g2

0x0001,

0xf11e,	// (0x0002d548) clock_g

0x2920,	// (0x00020d4a) clock_t1_ParamLimits

0x2920,	// (0x00020d4a) clock_t1

0x2935,	// (0x00020d5f) clock_t2_ParamLimits

0x2935,	// (0x00020d5f) clock_t2

0x2947,	// (0x00020d71) clock_t3_ParamLimits

0x2947,	// (0x00020d71) clock_t3

0x2959,	// (0x00020d83) clock_t4_ParamLimits

0x2959,	// (0x00020d83) clock_t4

0x296b,	// (0x00020d95) clock_t5_ParamLimits

0x296b,	// (0x00020d95) clock_t5

0x2980,	// (0x00020daa) clock_t6_ParamLimits

0x2980,	// (0x00020daa) clock_t6

0x2992,	// (0x00020dbc) clock_t7_ParamLimits

0x2992,	// (0x00020dbc) clock_t7

0x29a4,	// (0x00020dce) clock_t8_ParamLimits

0x29a4,	// (0x00020dce) clock_t8

0x29ba,	// (0x00020de4) clock_t9_ParamLimits

0x29ba,	// (0x00020de4) clock_t9

0x0008,

0xf123,	// (0x0002d54d) clock_t_ParamLimits

0xf123,	// (0x0002d54d) clock_t

0xa39e,	// (0x000287c8) popup_clock_analogue_window_cp02

0xa39e,	// (0x000287c8) popup_clock_digital_window_cp01

0xa3a6,	// (0x000287d0) listscroll_help_pane

0xa0bc,	// (0x000284e6) phob_pre_status_pane

0xa3b0,	// (0x000287da) grid_qdial_pane

0xa317,	// (0x00028741) listscroll_mce_pane

0xa317,	// (0x00028741) bg_notes_pane

0xa3ba,	// (0x000287e4) list_notes_pane

0x29d0,	// (0x00020dfa) scroll_pane_cp06

0xa3c8,	// (0x000287f2) bg_calc_paper_pane

0x103e,	// (0x0001f468) list_calc_pane

0xa3dc,	// (0x00028806) bg_calc_display_pane

0x1058,	// (0x0001f482) calc_display_pane_t1

0x106d,	// (0x0001f497) calc_display_pane_t2

0x1082,	// (0x0001f4ac) calc_display_pane_t3

0x0002,

0xf136,	// (0x0002d560) calc_display_pane_t

0x1094,	// (0x0001f4be) cell_calc_pane_ParamLimits

0x1094,	// (0x0001f4be) cell_calc_pane

0xa3e8,	// (0x00028812) bg_calc_paper_pane_g1

0xa3f4,	// (0x0002881e) bg_calc_paper_pane_g2

0xa400,	// (0x0002882a) bg_calc_paper_pane_g3

0xa40c,	// (0x00028836) bg_calc_paper_pane_g4

0xa418,	// (0x00028842) bg_calc_paper_pane_g5

0x29df,	// (0x00020e09) bg_calc_paper_pane_g6

0x29f0,	// (0x00020e1a) bg_calc_paper_pane_g7

0x2a01,	// (0x00020e2b) bg_calc_paper_pane_g8

0x0007,

0xf13d,	// (0x0002d567) bg_calc_paper_pane_g

0x2a12,	// (0x00020e3c) calc_bg_paper_pane_g9

0x2a23,	// (0x00020e4d) list_calc_item_pane_ParamLimits

0x2a23,	// (0x00020e4d) list_calc_item_pane

0xa424,	// (0x0002884e) list_calc_item_pane_g1

0x10c1,	// (0x0001f4eb) list_calc_item_pane_t1_ParamLimits

0x10c1,	// (0x0001f4eb) list_calc_item_pane_t1

0x10d3,	// (0x0001f4fd) list_calc_item_pane_t2_ParamLimits

0x10d3,	// (0x0001f4fd) list_calc_item_pane_t2

0x0001,

0xf14e,	// (0x0002d578) list_calc_item_pane_t_ParamLimits

0xf14e,	// (0x0002d578) list_calc_item_pane_t

0xa431,	// (0x0002885b) cell_calc_pane_g1

0xa43b,	// (0x00028865) grid_highlight_pane_cp02

0x2a4f,	// (0x00020e79) bg_calc_display_pane_g1

0x1103,	// (0x0001f52d) bg_calc_display_pane_g2

0x2a58,	// (0x00020e82) bg_calc_display_pane_g3

0x0002,

0xf158,	// (0x0002d582) bg_calc_display_pane_g

0x110d,	// (0x0001f537) cell_qdial_pane_ParamLimits

0x110d,	// (0x0001f537) cell_qdial_pane

0x2a61,	// (0x00020e8b) cell_qdial_pane_g1_ParamLimits

0x2a61,	// (0x00020e8b) cell_qdial_pane_g1

0x2a6e,	// (0x00020e98) cell_qdial_pane_g2_ParamLimits

0x2a6e,	// (0x00020e98) cell_qdial_pane_g2

0xa45d,	// (0x00028887) cell_qdial_pane_g3_ParamLimits

0xa45d,	// (0x00028887) cell_qdial_pane_g3

0x0003,

0xf15f,	// (0x0002d589) cell_qdial_pane_g_ParamLimits

0xf15f,	// (0x0002d589) cell_qdial_pane_g

0x2a8c,	// (0x00020eb6) cell_qdial_pane_t1_ParamLimits

0x2a8c,	// (0x00020eb6) cell_qdial_pane_t1

0x2aa4,	// (0x00020ece) cell_qdial_pane_t2_ParamLimits

0x2aa4,	// (0x00020ece) cell_qdial_pane_t2

0x2ab7,	// (0x00020ee1) cell_qdial_pane_t3_ParamLimits

0x2ab7,	// (0x00020ee1) cell_qdial_pane_t3

0x0002,

0xf168,	// (0x0002d592) cell_qdial_pane_t_ParamLimits

0xf168,	// (0x0002d592) cell_qdial_pane_t

0xa0bc,	// (0x000284e6) grid_highlight_pane_cp04

0xa469,	// (0x00028893) thumbnail_qdial_pane_ParamLimits

0xa469,	// (0x00028893) thumbnail_qdial_pane

0xa4c5,	// (0x000288ef) list_help_pane

0xa4ce,	// (0x000288f8) scroll_pane_cp02

0x2aca,	// (0x00020ef4) help_list_pane_t1_ParamLimits

0x2aca,	// (0x00020ef4) help_list_pane_t1

0x1121,	// (0x0001f54b) bg_notes_pane_g2

0x1129,	// (0x0001f553) bg_notes_pane_g3

0x1131,	// (0x0001f55b) notes_bg_pane_g1

0x1139,	// (0x0001f563) notes_bg_pane_g4

0x1141,	// (0x0001f56b) notes_bg_pane_g5

0x1149,	// (0x0001f573) notes_bg_pane_g6

0x1151,	// (0x0001f57b) notes_bg_pane_g7

0x1159,	// (0x0001f583) notes_bg_pane_g8

0x1161,	// (0x0001f58b) notes_bg_pane_g9

0x0006,

0xf186,	// (0x0002d5b0) notes_bg_pane_g

0x2afd,	// (0x00020f27) list_notes_text_pane_ParamLimits

0x2afd,	// (0x00020f27) list_notes_text_pane

0xa4d7,	// (0x00028901) list_notes_text_pane_g1

0x2b25,	// (0x00020f4f) list_notes_text_pane_t1

0x2b33,	// (0x00020f5d) listscroll_cale_week_pane

0x2b58,	// (0x00020f82) bg_cale_heading_pane

0xa4fa,	// (0x00028924) bg_cale_pane_cp01

0x2b78,	// (0x00020fa2) cale_week_corner_pane

0x2b92,	// (0x00020fbc) cale_week_day_heading_pane

0x2bb2,	// (0x00020fdc) cale_week_scroll_pane_g1

0x2bcd,	// (0x00020ff7) cale_week_scroll_pane_g2

0x2be0,	// (0x0002100a) cale_week_scroll_pane_g3

0x2bf3,	// (0x0002101d) cale_week_scroll_pane_g4

0x2c06,	// (0x00021030) cale_week_scroll_pane_g5

0x2c19,	// (0x00021043) cale_week_scroll_pane_g6

0x2c2c,	// (0x00021056) cale_week_scroll_pane_g7

0x2c41,	// (0x0002106b) cale_week_scroll_pane_g8

0x2c56,	// (0x00021080) cale_week_scroll_pane_g9

0x2c69,	// (0x00021093) cale_week_scroll_pane_g10

0x2c7c,	// (0x000210a6) cale_week_scroll_pane_g11

0x2c8f,	// (0x000210b9) cale_week_scroll_pane_g12

0x2ca6,	// (0x000210d0) cale_week_scroll_pane_g13

0x2cc1,	// (0x000210eb) cale_week_scroll_pane_g14

0x2cdc,	// (0x00021106) cale_week_scroll_pane_g15

0x000f,

0xf195,	// (0x0002d5bf) cale_week_scroll_pane_g

0x2d0c,	// (0x00021136) cale_week_time_pane

0x2d21,	// (0x0002114b) grid_cale_week_pane

0xa529,	// (0x00028953) scroll_pane_cp08

0x2d40,	// (0x0002116a) cell_cale_week_pane_ParamLimits

0x2d40,	// (0x0002116a) cell_cale_week_pane

0x2da2,	// (0x000211cc) cale_week_day_heading_pane_t1

0x2dbd,	// (0x000211e7) cale_week_day_heading_pane_t2

0x2dd8,	// (0x00021202) cale_week_day_heading_pane_t3

0x2df3,	// (0x0002121d) cale_week_day_heading_pane_t4

0x2e0e,	// (0x00021238) cale_week_day_heading_pane_t5

0x2e29,	// (0x00021253) cale_week_day_heading_pane_t6

0x2e44,	// (0x0002126e) cale_week_day_heading_pane_t7

0x0006,

0xf1b6,	// (0x0002d5e0) cale_week_day_heading_pane_t

0xa546,	// (0x00028970) bg_cale_side_pane

0x1169,	// (0x0001f593) cale_week_time_pane_t1

0x1183,	// (0x0001f5ad) cale_week_time_pane_t2

0x119d,	// (0x0001f5c7) cale_week_time_pane_t3

0x11b7,	// (0x0001f5e1) cale_week_time_pane_t4

0x11d1,	// (0x0001f5fb) cale_week_time_pane_t5

0x11eb,	// (0x0001f615) cale_week_time_pane_t6

0x1209,	// (0x0001f633) cale_week_time_pane_t7

0x122b,	// (0x0001f655) cale_week_time_pane_t8

0x0007,

0xf1c5,	// (0x0002d5ef) cale_week_time_pane_t

0x2e5f,	// (0x00021289) cell_cale_week_pane_g2

0x2e83,	// (0x000212ad) cell_cale_week_pane_g3_ParamLimits

0x2e83,	// (0x000212ad) cell_cale_week_pane_g3

0xa554,	// (0x0002897e) grid_highlight_pane_cp07

0xa55c,	// (0x00028986) listscroll_gms_pane

0xa566,	// (0x00028990) grid_gms_pane

0xa586,	// (0x000289b0) listscroll_gms_pane_g1

0xa58e,	// (0x000289b8) listscroll_gms_pane_g2

0x0001,

0xf1d6,	// (0x0002d600) listscroll_gms_pane_g

0x2e9b,	// (0x000212c5) scroll_pane_cp010

0x2ea6,	// (0x000212d0) cell_gms_pane_ParamLimits

0x2ea6,	// (0x000212d0) cell_gms_pane

0x2eb9,	// (0x000212e3) cell_gms_pane_g1

0xa596,	// (0x000289c0) cell_gms_pane_g2

0xa59e,	// (0x000289c8) cell_gms_pane_g3

0xa5a7,	// (0x000289d1) cell_gms_pane_g4

0x0003,

0xf1db,	// (0x0002d605) cell_gms_pane_g

0xa5b0,	// (0x000289da) grid_highlight_pane_cp09

0x5340,	// (0x0002376a) phob_pre_status_pane_g1

0x5348,	// (0x00023772) phob_pre_status_pane_g2

0x5350,	// (0x0002377a) phob_pre_status_pane_g3

0x5358,	// (0x00023782) phob_pre_status_pane_g4

0x0004,

0xf5c6,	// (0x0002d9f0) phob_pre_status_pane_g

0x5368,	// (0x00023792) phob_pre_status_pane_t1

0x5378,	// (0x000237a2) phob_pre_status_pane_t2

0x5388,	// (0x000237b2) phob_pre_status_pane_t3

0x0002,

0xf5d1,	// (0x0002d9fb) phob_pre_status_pane_t

0xa5b8,	// (0x000289e2) bg_list_pane_cp05

0x2ec9,	// (0x000212f3) grid_vorec_pane

0x2ed3,	// (0x000212fd) vorec_t1

0x2ee1,	// (0x0002130b) vorec_t2

0x2eef,	// (0x00021319) vorec_t3

0x2efd,	// (0x00021327) vorec_t4

0x26d6,	// (0x00020b00) vorec_t5

0x26e4,	// (0x00020b0e) vorec_t6

0x0004,

0xf1e4,	// (0x0002d60e) vorec_t

0x26f2,	// (0x00020b1c) wait_bar_pane_cp01

0x2f19,	// (0x00021343) cell_vorec_pane_ParamLimits

0x2f19,	// (0x00021343) cell_vorec_pane

0x124f,	// (0x0001f679) cell_vorec_pane_g1

0xa0bc,	// (0x000284e6) grid_highlight_pane_cp05

0x2f3c,	// (0x00021366) cams_zoom_pane

0x2f48,	// (0x00021372) image_vga_pane

0x2f57,	// (0x00021381) main_camera_pane_g1

0x2f65,	// (0x0002138f) main_camera_pane_g2

0x2f71,	// (0x0002139b) main_camera_pane_g3

0x2f7d,	// (0x000213a7) main_camera_pane_g4

0x2f89,	// (0x000213b3) main_camera_pane_g5

0x2f95,	// (0x000213bf) main_camera_pane_g6

0x2fa1,	// (0x000213cb) main_camera_pane_g7

0x0007,

0xf1ef,	// (0x0002d619) main_camera_pane_g

0x2fad,	// (0x000213d7) main_camera_pane_t1

0x2fbf,	// (0x000213e9) main_camera_pane_t2

0x0001,

0xf200,	// (0x0002d62a) main_camera_pane_t

0x2fe0,	// (0x0002140a) cams_zoom_pane_cp_ParamLimits

0x2fe0,	// (0x0002140a) cams_zoom_pane_cp

0x3004,	// (0x0002142e) image_cif_pane_ParamLimits

0x3004,	// (0x0002142e) image_cif_pane

0x3022,	// (0x0002144c) image_subqcif_pane

0x302a,	// (0x00021454) main_video_pane_g1_ParamLimits

0x302a,	// (0x00021454) main_video_pane_g1

0x304a,	// (0x00021474) main_video_pane_g2_ParamLimits

0x304a,	// (0x00021474) main_video_pane_g2

0x307a,	// (0x000214a4) main_video_pane_g3_ParamLimits

0x307a,	// (0x000214a4) main_video_pane_g3

0x30a3,	// (0x000214cd) main_video_pane_g4_ParamLimits

0x30a3,	// (0x000214cd) main_video_pane_g4

0x30cc,	// (0x000214f6) main_video_pane_g5_ParamLimits

0x30cc,	// (0x000214f6) main_video_pane_g5

0xa5cc,	// (0x000289f6) main_video_pane_g6_ParamLimits

0xa5cc,	// (0x000289f6) main_video_pane_g6

0x0006,

0xf205,	// (0x0002d62f) main_video_pane_g_ParamLimits

0xf205,	// (0x0002d62f) main_video_pane_g

0x30ee,	// (0x00021518) main_video_pane_t1_ParamLimits

0x30ee,	// (0x00021518) main_video_pane_t1

0xa5e6,	// (0x00028a10) cams_zoom_pane_g1

0xa5ef,	// (0x00028a19) cams_zoom_pane_g2

0xa5f8,	// (0x00028a22) cams_zoom_pane_g3

0xa601,	// (0x00028a2b) cams_zoom_pane_g4

0x0003,

0xf214,	// (0x0002d63e) cams_zoom_pane_g

0x3138,	// (0x00021562) grid_cams_pane

0x3146,	// (0x00021570) linegrid_cams_pane

0x3154,	// (0x0002157e) cell_cams_pane_ParamLimits

0x3154,	// (0x0002157e) cell_cams_pane

0xa60a,	// (0x00028a34) cams_burst_image_pane

0xa612,	// (0x00028a3c) cell_cams_pane_g1

0xa0bc,	// (0x000284e6) grid_highlight_pane_cp03

0xa431,	// (0x0002885b) mp_bg_pane_g1

0xa0bc,	// (0x000284e6) bg_list_pane_cp03

0xc3b6,	// (0x0002a7e0) bg_mp_pane

0xc3be,	// (0x0002a7e8) grid_mp_pane

0xc3c6,	// (0x0002a7f0) media_player_g1

0xc3ce,	// (0x0002a7f8) media_player_t1

0xc3dc,	// (0x0002a806) media_player_t2

0xc3ea,	// (0x0002a814) media_player_t3

0xc3f8,	// (0x0002a822) media_player_t4

0xc406,	// (0x0002a830) media_player_t5

0xc414,	// (0x0002a83e) media_player_t6

0xc422,	// (0x0002a84c) media_player_t7

0x0006,

0xf5b0,	// (0x0002d9da) media_player_t

0xc430,	// (0x0002a85a) wait_bar_pane_cp02

0xf595,	// (0x0002d9bf) main_usb_pane_t

0x5337,	// (0x00023761) cell_mp_pane

0xa431,	// (0x0002885b) cell_mp_pane_g1

0xa0bc,	// (0x000284e6) grid_highlight_pane_cp06

0xa61a,	// (0x00028a44) grid_skin_colour_pane

0xa622,	// (0x00028a4c) list_highlight_pane_cp03

0x327b,	// (0x000216a5) skin_g1

0xa62a,	// (0x00028a54) skin_t1

0xa639,	// (0x00028a63) skin_t2

0x0001,

0xf249,	// (0x0002d673) skin_t

0x3285,	// (0x000216af) cell_skin_colour_pane_ParamLimits

0x3285,	// (0x000216af) cell_skin_colour_pane

0xa647,	// (0x00028a71) cell_skin_colour_pane_g1

0x3309,	// (0x00021733) call_video_g1_ParamLimits

0x3309,	// (0x00021733) call_video_g1

0x3319,	// (0x00021743) call_video_g2_ParamLimits

0x3319,	// (0x00021743) call_video_g2

0x0001,

0xf24e,	// (0x0002d678) call_video_g_ParamLimits

0xf24e,	// (0x0002d678) call_video_g

0x3373,	// (0x0002179d) call_video_uplink_pane_cp1_ParamLimits

0x3373,	// (0x0002179d) call_video_uplink_pane_cp1

0xa659,	// (0x00028a83) call_video_uplink_pane_cp2

0x343f,	// (0x00021869) video_down_crop_pane_ParamLimits

0x343f,	// (0x00021869) video_down_crop_pane

0x353d,	// (0x00021967) video_down_pane_ParamLimits

0x353d,	// (0x00021967) video_down_pane

0xa661,	// (0x00028a8b) video_down_subqcif_pane_ParamLimits

0xa661,	// (0x00028a8b) video_down_subqcif_pane

0xa679,	// (0x00028aa3) video_down_subqcif_pane_cp_ParamLimits

0xa679,	// (0x00028aa3) video_down_subqcif_pane_cp

0xa69f,	// (0x00028ac9) im_reading_pane_ParamLimits

0xa69f,	// (0x00028ac9) im_reading_pane

0x365d,	// (0x00021a87) im_writing_pane_ParamLimits

0x365d,	// (0x00021a87) im_writing_pane

0x367b,	// (0x00021aa5) im_reading_pane_t1

0xa6b9,	// (0x00028ae3) list_im_pane

0xa6ca,	// (0x00028af4) scroll_pane_cp07

0x36cf,	// (0x00021af9) im_writing_pane_t1_ParamLimits

0x36cf,	// (0x00021af9) im_writing_pane_t1

0xa6e3,	// (0x00028b0d) im_writing_pane_t2_ParamLimits

0xa6e3,	// (0x00028b0d) im_writing_pane_t2

0x0001,

0xf258,	// (0x0002d682) im_writing_pane_t_ParamLimits

0xf258,	// (0x0002d682) im_writing_pane_t

0xa0bc,	// (0x000284e6) input_focus_pane_cp04

0xa0bc,	// (0x000284e6) input_focus_pane_cp05

0x36e4,	// (0x00021b0e) list_im_single_pane_ParamLimits

0x36e4,	// (0x00021b0e) list_im_single_pane

0x3708,	// (0x00021b32) list_single_im_pane_t1

0x52fb,	// (0x00023725) blid_accuracy_pane

0x5303,	// (0x0002372d) blid_compass_pane

0x530d,	// (0x00023737) main_location_t1

0x531b,	// (0x00023745) main_location_t2

0x5329,	// (0x00023753) main_location_t3

0x0002,

0xf5bf,	// (0x0002d9e9) main_location_t

0xa0bc,	// (0x000284e6) aid_levels_location

0xa431,	// (0x0002885b) blid_accuracy_pane_g1

0xa431,	// (0x0002885b) blid_accuracy_pane_g2

0x0001,

0xf2ba,	// (0x0002d6e4) blid_accuracy_pane_g

0xa72b,	// (0x00028b55) wml_content_pane

0xa769,	// (0x00028b93) wml_button_pane_ParamLimits

0xa769,	// (0x00028b93) wml_button_pane

0x3717,	// (0x00021b41) wml_list_single_large_pane_ParamLimits

0x3717,	// (0x00021b41) wml_list_single_large_pane

0x3741,	// (0x00021b6b) wml_list_single_medium_pane_ParamLimits

0x3741,	// (0x00021b6b) wml_list_single_medium_pane

0x3772,	// (0x00021b9c) wml_list_single_small_pane_ParamLimits

0x3772,	// (0x00021b9c) wml_list_single_small_pane

0xa77d,	// (0x00028ba7) wml_selection_box_pane_ParamLimits

0xa77d,	// (0x00028ba7) wml_selection_box_pane

0xa790,	// (0x00028bba) wml_list_single_pane_t1

0xa79f,	// (0x00028bc9) wml_list_single_medium_pane_t1

0xa7ae,	// (0x00028bd8) wml_list_single_large_pane_t1

0xa7bd,	// (0x00028be7) input_focus_pane_cp02_ParamLimits

0xa7bd,	// (0x00028be7) input_focus_pane_cp02

0xa7d0,	// (0x00028bfa) wml_selection_box_pane_g1

0xa7d9,	// (0x00028c03) wml_selection_box_pane_t1_ParamLimits

0xa7d9,	// (0x00028c03) wml_selection_box_pane_t1

0xa317,	// (0x00028741) bg_wml_button_pane_ParamLimits

0xa317,	// (0x00028741) bg_wml_button_pane

0xa7f1,	// (0x00028c1b) wml_button_pane_g1

0xa7f9,	// (0x00028c23) wml_button_pane_t1

0xa7f1,	// (0x00028c1b) wml_button_bg_pane_g1

0xa809,	// (0x00028c33) wml_button_bg_pane_g2

0xa811,	// (0x00028c3b) wml_button_bg_pane_g3

0xa819,	// (0x00028c43) wml_button_bg_pane_g4

0xa821,	// (0x00028c4b) wml_button_bg_pane_g5

0xa829,	// (0x00028c53) wml_button_bg_pane_g6

0xa831,	// (0x00028c5b) wml_button_bg_pane_g7

0xa839,	// (0x00028c63) wml_button_bg_pane_g8

0xa841,	// (0x00028c6b) wml_button_bg_pane_g9

0x0008,

0xf25d,	// (0x0002d687) wml_button_bg_pane_g

0x37ac,	// (0x00021bd6) bg_list_pane_cp02

0xa849,	// (0x00028c73) mce_header_pane_ParamLimits

0xa849,	// (0x00028c73) mce_header_pane

0xa85f,	// (0x00028c89) mce_icon_pane

0xa85f,	// (0x00028c89) mce_image_pane

0xa868,	// (0x00028c92) mce_text_pane_ParamLimits

0xa868,	// (0x00028c92) mce_text_pane

0x37b6,	// (0x00021be0) scroll_pane_cp03

0xa761,	// (0x00028b8b) scroll_pane_cp04

0xa87b,	// (0x00028ca5) scroll_pane_cp05_ParamLimits

0xa87b,	// (0x00028ca5) scroll_pane_cp05

0x37c0,	// (0x00021bea) mce_header_field_pane_ParamLimits

0x37c0,	// (0x00021bea) mce_header_field_pane

0x37e0,	// (0x00021c0a) mce_header_field_pane_2_ParamLimits

0x37e0,	// (0x00021c0a) mce_header_field_pane_2

0x37f6,	// (0x00021c20) mce_header_field_pane_3

0x37fe,	// (0x00021c28) list_single_mce_message_pane_ParamLimits

0x37fe,	// (0x00021c28) list_single_mce_message_pane

0x3829,	// (0x00021c53) list_single_mce_smart_pane_ParamLimits

0x3829,	// (0x00021c53) list_single_mce_smart_pane

0xa887,	// (0x00028cb1) input_focus_pane_cp03

0xa890,	// (0x00028cba) list_header_data_pane

0x385f,	// (0x00021c89) mce_header_field_pane_t1

0x386d,	// (0x00021c97) list_single_mce_header_pane_ParamLimits

0x386d,	// (0x00021c97) list_single_mce_header_pane

0xa898,	// (0x00028cc2) list_single_mce_header_pane_t1

0xa8a7,	// (0x00028cd1) list_single_mce_message_pane_g1

0xa8af,	// (0x00028cd9) list_single_mce_message_pane_t1

0x38bf,	// (0x00021ce9) bg_cale_heading_pane_cp01_ParamLimits

0x38bf,	// (0x00021ce9) bg_cale_heading_pane_cp01

0xa8bd,	// (0x00028ce7) bg_cale_pane_cp02_ParamLimits

0xa8bd,	// (0x00028ce7) bg_cale_pane_cp02

0x390d,	// (0x00021d37) cale_month_corner_pane

0x392c,	// (0x00021d56) cale_month_day_heading_pane_ParamLimits

0x392c,	// (0x00021d56) cale_month_day_heading_pane

0x3992,	// (0x00021dbc) cale_month_pane_g1_ParamLimits

0x3992,	// (0x00021dbc) cale_month_pane_g1

0x39d5,	// (0x00021dff) cale_month_pane_g2_ParamLimits

0x39d5,	// (0x00021dff) cale_month_pane_g2

0x3a0d,	// (0x00021e37) cale_month_pane_g3_ParamLimits

0x3a0d,	// (0x00021e37) cale_month_pane_g3

0x3a59,	// (0x00021e83) cale_month_pane_g4_ParamLimits

0x3a59,	// (0x00021e83) cale_month_pane_g4

0x3aa5,	// (0x00021ecf) cale_month_pane_g5_ParamLimits

0x3aa5,	// (0x00021ecf) cale_month_pane_g5

0x3af1,	// (0x00021f1b) cale_month_pane_g6_ParamLimits

0x3af1,	// (0x00021f1b) cale_month_pane_g6

0x3b3d,	// (0x00021f67) cale_month_pane_g7_ParamLimits

0x3b3d,	// (0x00021f67) cale_month_pane_g7

0x3ba1,	// (0x00021fcb) cale_month_pane_g8_ParamLimits

0x3ba1,	// (0x00021fcb) cale_month_pane_g8

0x3c05,	// (0x0002202f) cale_month_pane_g9_ParamLimits

0x3c05,	// (0x0002202f) cale_month_pane_g9

0x3c63,	// (0x0002208d) cale_month_pane_g10_ParamLimits

0x3c63,	// (0x0002208d) cale_month_pane_g10

0x3cbf,	// (0x000220e9) cale_month_pane_g11_ParamLimits

0x3cbf,	// (0x000220e9) cale_month_pane_g11

0x3d13,	// (0x0002213d) cale_month_pane_g12_ParamLimits

0x3d13,	// (0x0002213d) cale_month_pane_g12

0x3d69,	// (0x00022193) cale_month_pane_g13_ParamLimits

0x3d69,	// (0x00022193) cale_month_pane_g13

0x000c,

0xf270,	// (0x0002d69a) cale_month_pane_g_ParamLimits

0xf270,	// (0x0002d69a) cale_month_pane_g

0x3dbf,	// (0x000221e9) cale_month_week_pane

0x3de3,	// (0x0002220d) grid_cale_month_pane_ParamLimits

0x3de3,	// (0x0002220d) grid_cale_month_pane

0x3e3c,	// (0x00022266) cale_month_day_heading_pane_t1

0x3ec2,	// (0x000222ec) cale_month_day_heading_pane_t2

0x3f3b,	// (0x00022365) cale_month_day_heading_pane_t3

0x3fb4,	// (0x000223de) cale_month_day_heading_pane_t4

0x402d,	// (0x00022457) cale_month_day_heading_pane_t5

0x40a6,	// (0x000224d0) cale_month_day_heading_pane_t6

0x411f,	// (0x00022549) cale_month_day_heading_pane_t7

0x0006,

0xf28b,	// (0x0002d6b5) cale_month_day_heading_pane_t

0xa546,	// (0x00028970) bg_cale_side_pane_cp01

0x41b0,	// (0x000225da) cale_month_week_pane_t1

0x41c9,	// (0x000225f3) cale_month_week_pane_t2

0x41e2,	// (0x0002260c) cale_month_week_pane_t3

0x41fb,	// (0x00022625) cale_month_week_pane_t4

0x4214,	// (0x0002263e) cale_month_week_pane_t5

0x4235,	// (0x0002265f) cale_month_week_pane_t6

0x0005,

0xf29a,	// (0x0002d6c4) cale_month_week_pane_t

0x4256,	// (0x00022680) cell_cale_month_pane_ParamLimits

0x4256,	// (0x00022680) cell_cale_month_pane

0x1259,	// (0x0001f683) cell_cale_month_pane_g1

0x1265,	// (0x0001f68f) cell_cale_month_pane_t1_ParamLimits

0x1265,	// (0x0001f68f) cell_cale_month_pane_t1

0xa554,	// (0x0002897e) grid_highlight_pane_cp08

0xa431,	// (0x0002885b) main_smil_g1

0x43a2,	// (0x000227cc) smil_status_pane

0xa8fc,	// (0x00028d26) smil_text_pane

0xc2d6,	// (0x0002a700) bg_popup_call3_rect_pane_g8

0xc2de,	// (0x0002a708) bg_popup_call3_rect_pane_g9

0x0008,

0xf553,	// (0x0002d97d) bg_popup_call3_rect_pane_g

0xc525,	// (0x0002a94f) smil_status_volume_pane_g1

0xa906,	// (0x00028d30) smil_status_pane_t1

0x1537,	// (0x0001f961) volume_smil_pane

0xa91d,	// (0x00028d47) list_smil_text_pane

0x43b5,	// (0x000227df) scroll_pane_cp011

0x43c0,	// (0x000227ea) smil_text_list_pane_t1_ParamLimits

0x43c0,	// (0x000227ea) smil_text_list_pane_t1

0x1291,	// (0x0001f6bb) aid_volume_smil_ParamLimits

0x1291,	// (0x0001f6bb) aid_volume_smil

0xa431,	// (0x0002885b) smil_volume_pane_g1

0xa431,	// (0x0002885b) smil_volume_pane_g2

0x0001,

0xf2ba,	// (0x0002d6e4) smil_volume_pane_g

0x2b33,	// (0x00020f5d) listscroll_cale_day_pane

0xa927,	// (0x00028d51) bg_cale_pane

0xa93f,	// (0x00028d69) list_cale_pane

0xa962,	// (0x00028d8c) scroll_pane_cp09

0xa973,	// (0x00028d9d) cale_bg_pane_g1

0xa97b,	// (0x00028da5) cale_bg_pane_g2

0xa983,	// (0x00028dad) cale_bg_pane_g3

0xa98b,	// (0x00028db5) cale_bg_pane_g4

0xa993,	// (0x00028dbd) cale_bg_pane_g5

0xa99b,	// (0x00028dc5) cale_bg_pane_g6

0xa9a3,	// (0x00028dcd) cale_bg_pane_g7

0xa9ab,	// (0x00028dd5) cale_bg_pane_g8

0xa9b3,	// (0x00028ddd) cale_bg_pane_g9

0x0008,

0xf2bf,	// (0x0002d6e9) cale_bg_pane_g

0x4440,	// (0x0002286a) list_cale_time_pane_ParamLimits

0x4440,	// (0x0002286a) list_cale_time_pane

0xa9bb,	// (0x00028de5) list_cale_time_pane_g1_ParamLimits

0xa9bb,	// (0x00028de5) list_cale_time_pane_g1

0xa9c7,	// (0x00028df1) list_cale_time_pane_g2_ParamLimits

0xa9c7,	// (0x00028df1) list_cale_time_pane_g2

0x4462,	// (0x0002288c) list_cale_time_pane_g3_ParamLimits

0x4462,	// (0x0002288c) list_cale_time_pane_g3

0x4470,	// (0x0002289a) list_cale_time_pane_g4_ParamLimits

0x4470,	// (0x0002289a) list_cale_time_pane_g4

0x447e,	// (0x000228a8) list_cale_time_pane_g5_ParamLimits

0x447e,	// (0x000228a8) list_cale_time_pane_g5

0x0005,

0xf2d2,	// (0x0002d6fc) list_cale_time_pane_g_ParamLimits

0xf2d2,	// (0x0002d6fc) list_cale_time_pane_g

0xa9e1,	// (0x00028e0b) list_cale_time_pane_t1_ParamLimits

0xa9e1,	// (0x00028e0b) list_cale_time_pane_t1

0xaa09,	// (0x00028e33) list_cale_time_pane_t2_ParamLimits

0xaa09,	// (0x00028e33) list_cale_time_pane_t2

0x47ad,	// (0x00022bd7) aid_blid_cardinal_pane

0x47ef,	// (0x00022c19) compass_pane_t4

0xaa31,	// (0x00028e5b) list_cale_time_pane_t4_ParamLimits

0xaa31,	// (0x00028e5b) list_cale_time_pane_t4

0x47fd,	// (0x00022c27) compass_pane_t5

0x480d,	// (0x00022c37) compass_pane_t6

0x481b,	// (0x00022c45) compass_pane_t7

0xaeee,	// (0x00029318) navi_pane_cc_t1

0xb0cb,	// (0x000294f5) aid_phob_thumbnail_center_pane

0x4e01,	// (0x0002322b) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2df,	// (0x0002d709) list_cale_time_pane_t_ParamLimits

0xf2df,	// (0x0002d709) list_cale_time_pane_t

0x9d13,	// (0x0002813d) bg_popup_window_pane_cp02_ParamLimits

0x9d13,	// (0x0002813d) bg_popup_window_pane_cp02

0xaa59,	// (0x00028e83) heading_pane_cp01_ParamLimits

0xaa59,	// (0x00028e83) heading_pane_cp01

0xaa65,	// (0x00028e8f) loc_req_pane_ParamLimits

0xaa65,	// (0x00028e8f) loc_req_pane

0xaa75,	// (0x00028e9f) loc_type_pane_ParamLimits

0xaa75,	// (0x00028e9f) loc_type_pane

0xaa87,	// (0x00028eb1) loc_type_pane_t1_ParamLimits

0xaa87,	// (0x00028eb1) loc_type_pane_t1

0xaa99,	// (0x00028ec3) loc_type_pane_t2_ParamLimits

0xaa99,	// (0x00028ec3) loc_type_pane_t2

0xaaab,	// (0x00028ed5) loc_type_pane_t3_ParamLimits

0xaaab,	// (0x00028ed5) loc_type_pane_t3

0x0002,

0xf2e6,	// (0x0002d710) loc_type_pane_t_ParamLimits

0xf2e6,	// (0x0002d710) loc_type_pane_t

0xaabd,	// (0x00028ee7) list_loc_req_pane

0xaac7,	// (0x00028ef1) scroll_pane_cp012

0x448c,	// (0x000228b6) list_single_loc_request_popup_menu_pane_ParamLimits

0x448c,	// (0x000228b6) list_single_loc_request_popup_menu_pane

0xaad2,	// (0x00028efc) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xaad2,	// (0x00028efc) list_single_loc_request_popup_menu_pane_g1

0xaade,	// (0x00028f08) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xaade,	// (0x00028f08) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf2ed,	// (0x0002d717) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf2ed,	// (0x0002d717) list_single_loc_request_popup_menu_pane_g

0xaaea,	// (0x00028f14) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xaaea,	// (0x00028f14) list_single_loc_request_popup_menu_pane_t1

0x449e,	// (0x000228c8) bg_popup_window_pane_cp03_ParamLimits

0x449e,	// (0x000228c8) bg_popup_window_pane_cp03

0x44ac,	// (0x000228d6) heading_loc_req_pane_ParamLimits

0x44ac,	// (0x000228d6) heading_loc_req_pane

0x44b8,	// (0x000228e2) popup_dyc_status_message_window_g1_ParamLimits

0x44b8,	// (0x000228e2) popup_dyc_status_message_window_g1

0x44c4,	// (0x000228ee) popup_dyc_status_message_window_t1_ParamLimits

0x44c4,	// (0x000228ee) popup_dyc_status_message_window_t1

0x44d6,	// (0x00022900) popup_dyc_status_message_window_t2_ParamLimits

0x44d6,	// (0x00022900) popup_dyc_status_message_window_t2

0x44e8,	// (0x00022912) popup_dyc_status_message_window_t3_ParamLimits

0x44e8,	// (0x00022912) popup_dyc_status_message_window_t3

0x0002,

0xf2f2,	// (0x0002d71c) popup_dyc_status_message_window_t_ParamLimits

0xf2f2,	// (0x0002d71c) popup_dyc_status_message_window_t

0xa0bc,	// (0x000284e6) bg_heading_pane_cp01

0xab00,	// (0x00028f2a) heading_loc_req_pane_g1

0xab08,	// (0x00028f32) heading_loc_req_pane_g2

0xab10,	// (0x00028f3a) heading_loc_req_pane_g3

0x0002,

0xf2f9,	// (0x0002d723) heading_loc_req_pane_g

0xab18,	// (0x00028f42) heading_loc_req_pane_t1

0xab27,	// (0x00028f51) bg_popup_sub_pane_cp01_ParamLimits

0xab27,	// (0x00028f51) bg_popup_sub_pane_cp01

0xab35,	// (0x00028f5f) popup_cale_events_window_g1_ParamLimits

0xab35,	// (0x00028f5f) popup_cale_events_window_g1

0xab55,	// (0x00028f7f) popup_cale_events_window_g2_ParamLimits

0xab55,	// (0x00028f7f) popup_cale_events_window_g2

0x0001,

0xf32d,	// (0x0002d757) popup_cale_events_window_g_ParamLimits

0xf32d,	// (0x0002d757) popup_cale_events_window_g

0xab75,	// (0x00028f9f) popup_cale_events_window_t1_ParamLimits

0xab75,	// (0x00028f9f) popup_cale_events_window_t1

0xab87,	// (0x00028fb1) popup_cale_events_window_t2_ParamLimits

0xab87,	// (0x00028fb1) popup_cale_events_window_t2

0xabc5,	// (0x00028fef) popup_cale_events_window_t3_ParamLimits

0xabc5,	// (0x00028fef) popup_cale_events_window_t3

0xabff,	// (0x00029029) popup_cale_events_window_t4_ParamLimits

0xabff,	// (0x00029029) popup_cale_events_window_t4

0x0003,

0xf332,	// (0x0002d75c) popup_cale_events_window_t_ParamLimits

0xf332,	// (0x0002d75c) popup_cale_events_window_t

0x45ed,	// (0x00022a17) call_type_pane

0xadc3,	// (0x000291ed) popup_call_status_window_g1

0x45f9,	// (0x00022a23) popup_call_status_window_g2

0x4605,	// (0x00022a2f) popup_call_status_window_g3

0x0002,

0xf33b,	// (0x0002d765) popup_call_status_window_g

0xac35,	// (0x0002905f) call_type_pane_g1

0xac3e,	// (0x00029068) call_type_pane_g2

0x0001,

0xf342,	// (0x0002d76c) call_type_pane_g

0xa0bc,	// (0x000284e6) bg_popup_sub_pane_cp02

0xac47,	// (0x00029071) listscroll_popup_wml_pane

0xac4f,	// (0x00029079) list_wml_pane

0xac59,	// (0x00029083) scroll_pane_cp013

0xac64,	// (0x0002908e) list_single_graphic_popup_wml_pane_ParamLimits

0xac64,	// (0x0002908e) list_single_graphic_popup_wml_pane

0xa431,	// (0x0002885b) list_single_graphic_popup_wml_pane_g1

0xac78,	// (0x000290a2) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf347,	// (0x0002d771) list_single_graphic_popup_wml_pane_g

0xac80,	// (0x000290aa) list_single_graphic_popup_wml_pane_t1

0xac96,	// (0x000290c0) aid_call_pane

0xa30f,	// (0x00028739) popup_clock_analogue_window_g1

0xa30f,	// (0x00028739) popup_clock_analogue_window_g2

0x12b3,	// (0x0001f6dd) popup_clock_analogue_window_g3

0x12b3,	// (0x0001f6dd) popup_clock_analogue_window_g4

0xa431,	// (0x0002885b) popup_clock_analogue_window_g5

0x0004,

0xf34c,	// (0x0002d776) popup_clock_analogue_window_g

0x12bb,	// (0x0001f6e5) popup_clock_analogue_window_t1

0x12c9,	// (0x0001f6f3) clock_digital_number_pane_ParamLimits

0x12c9,	// (0x0001f6f3) clock_digital_number_pane

0x12d5,	// (0x0001f6ff) clock_digital_number_pane_cp02_ParamLimits

0x12d5,	// (0x0001f6ff) clock_digital_number_pane_cp02

0x12e1,	// (0x0001f70b) clock_digital_number_pane_cp03_ParamLimits

0x12e1,	// (0x0001f70b) clock_digital_number_pane_cp03

0x12ed,	// (0x0001f717) clock_digital_number_pane_cp04_ParamLimits

0x12ed,	// (0x0001f717) clock_digital_number_pane_cp04

0x12fd,	// (0x0001f727) clock_digital_separator_pane_ParamLimits

0x12fd,	// (0x0001f727) clock_digital_separator_pane

0x1309,	// (0x0001f733) popup_clock_digital_window_t1

0xa431,	// (0x0002885b) clock_digital_number_pane_g1

0xa431,	// (0x0002885b) clock_digital_number_pane_g2

0x0001,

0xf2ba,	// (0x0002d6e4) clock_digital_number_pane_g

0xa431,	// (0x0002885b) clock_digital_separator_pane_g1

0xa431,	// (0x0002885b) clock_digital_separator_pane_g2

0x0001,

0xf2ba,	// (0x0002d6e4) clock_digital_separator_pane_g

0xa0bc,	// (0x000284e6) bg_popup_window_pane_cp04

0xac9e,	// (0x000290c8) heading_pane_cp03

0xaca6,	// (0x000290d0) listscroll_popup_gms_pane

0xacae,	// (0x000290d8) grid_large_graphic_popup_pane

0xacb8,	// (0x000290e2) listscroll_popup_gms_pane_g1

0xacc0,	// (0x000290ea) listscroll_popup_gms_pane_g2

0x0001,

0xf357,	// (0x0002d781) listscroll_popup_gms_pane_g

0xa761,	// (0x00028b8b) scroll_pane_cp014

0x4611,	// (0x00022a3b) cell_large_graphic_popup_pane_ParamLimits

0x4611,	// (0x00022a3b) cell_large_graphic_popup_pane

0x4629,	// (0x00022a53) cell_large_graphic_popup_pane_g1_ParamLimits

0x4629,	// (0x00022a53) cell_large_graphic_popup_pane_g1

0xacc8,	// (0x000290f2) cell_large_graphic_popup_pane_g2_ParamLimits

0xacc8,	// (0x000290f2) cell_large_graphic_popup_pane_g2

0xacd4,	// (0x000290fe) cell_large_graphic_popup_pane_g3_ParamLimits

0xacd4,	// (0x000290fe) cell_large_graphic_popup_pane_g3

0xace1,	// (0x0002910b) cell_large_graphic_popup_pane_g4_ParamLimits

0xace1,	// (0x0002910b) cell_large_graphic_popup_pane_g4

0x0003,

0xf35c,	// (0x0002d786) cell_large_graphic_popup_pane_g_ParamLimits

0xf35c,	// (0x0002d786) cell_large_graphic_popup_pane_g

0xacf1,	// (0x0002911b) grid_highlight_pane_cp010

0xa431,	// (0x0002885b) bg_popup_call_pane_g1

0xacfb,	// (0x00029125) list_single_graphic_popup_conf_pane_ParamLimits

0xacfb,	// (0x00029125) list_single_graphic_popup_conf_pane

0xad0e,	// (0x00029138) list_highlight_pane_cp01

0xad17,	// (0x00029141) list_single_graphic_popup_conf_pane_g1

0xad1f,	// (0x00029149) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf365,	// (0x0002d78f) list_single_graphic_popup_conf_pane_g

0xad27,	// (0x00029151) list_single_graphic_popup_conf_pane_t1

0xad35,	// (0x0002915f) linegrid_cams_pane_g1

0x4635,	// (0x00022a5f) linegrid_cams_pane_g2

0xa59e,	// (0x000289c8) linegrid_cams_pane_g3

0xad3e,	// (0x00029168) linegrid_cams_pane_g4

0x463e,	// (0x00022a68) linegrid_cams_pane_g5

0x4647,	// (0x00022a71) linegrid_cams_pane_g6

0xa5a7,	// (0x000289d1) linegrid_cams_pane_g7

0x0006,

0xf36a,	// (0x0002d794) linegrid_cams_pane_g

0xad47,	// (0x00029171) popup_clock_analogue_window

0xad47,	// (0x00029171) popup_clock_digital_window

0xa0bc,	// (0x000284e6) popup_phob_thumbnail_window

0xa431,	// (0x0002885b) call_video_uplink_pane_g1

0xad50,	// (0x0002917a) call_video_uplink_pane_g2

0x0001,

0xf379,	// (0x0002d7a3) call_video_uplink_pane_g

0xad58,	// (0x00029182) video_uplink_pane

0xad60,	// (0x0002918a) mce_image_pane_g1

0x4650,	// (0x00022a7a) mce_image_pane_g2

0x465a,	// (0x00022a84) mce_image_pane_g3

0x4662,	// (0x00022a8c) mce_image_pane_g4

0x466a,	// (0x00022a94) mce_image_pane_g5

0x0004,

0xf37e,	// (0x0002d7a8) mce_image_pane_g

0xad6a,	// (0x00029194) control_top_pane_stacon_cp01_ParamLimits

0xad6a,	// (0x00029194) control_top_pane_stacon_cp01

0xad7e,	// (0x000291a8) uni_indicator_pane_stacon_cp01_ParamLimits

0xad7e,	// (0x000291a8) uni_indicator_pane_stacon_cp01

0xad8f,	// (0x000291b9) bg_popup_sub_pane_cp03

0xad99,	// (0x000291c3) chi_dic_find_pane

0x4672,	// (0x00022a9c) listscroll_chi_dic_pane

0xada1,	// (0x000291cb) main_pane_chidic_g1

0xada9,	// (0x000291d3) chi_dic_find_pane_t1

0xadd1,	// (0x000291fb) find_chidic_pane

0xadda,	// (0x00029204) chi_dic_list_pane_ParamLimits

0xadda,	// (0x00029204) chi_dic_list_pane

0xadeb,	// (0x00029215) scroll_pane_cp020

0xadf3,	// (0x0002921d) find_chidic_pane_t1

0xa0bc,	// (0x000284e6) input_focus_pane_cp06

0x4686,	// (0x00022ab0) list_chi_dic_pane_ParamLimits

0x4686,	// (0x00022ab0) list_chi_dic_pane

0x46a0,	// (0x00022aca) list_chi_dic_pane_t1_ParamLimits

0x46a0,	// (0x00022aca) list_chi_dic_pane_t1

0xa0bc,	// (0x000284e6) list_highlight_pane_cp020

0xae02,	// (0x0002922c) bg_cale_heading_pane_g1

0x46b3,	// (0x00022add) bg_cale_heading_pane_g2

0x46bb,	// (0x00022ae5) bg_cale_heading_pane_g3

0x46c3,	// (0x00022aed) bg_cale_heading_pane_g4

0x46cd,	// (0x00022af7) bg_cale_heading_pane_g5

0x46d7,	// (0x00022b01) bg_cale_heading_pane_g6

0x46df,	// (0x00022b09) bg_cale_heading_pane_g7

0x46e7,	// (0x00022b11) bg_cale_heading_pane_g8

0x46f1,	// (0x00022b1b) bg_cale_heading_pane_g9

0x0008,

0xf389,	// (0x0002d7b3) bg_cale_heading_pane_g

0xae02,	// (0x0002922c) bg_cale_side_pane_g1

0x46fb,	// (0x00022b25) bg_cale_side_pane_g2

0x4705,	// (0x00022b2f) bg_cale_side_pane_g3

0x470f,	// (0x00022b39) bg_cale_side_pane_g4

0x4719,	// (0x00022b43) bg_cale_side_pane_g5

0x4723,	// (0x00022b4d) bg_cale_side_pane_g6

0x472d,	// (0x00022b57) bg_cale_side_pane_g7

0x4737,	// (0x00022b61) bg_cale_side_pane_g8

0x473f,	// (0x00022b69) bg_cale_side_pane_g9

0x0008,

0xf39c,	// (0x0002d7c6) bg_cale_side_pane_g

0x4747,	// (0x00022b71) popup_call_status_window_ParamLimits

0x4747,	// (0x00022b71) popup_call_status_window

0xae0a,	// (0x00029234) stacon_top_pane

0xae12,	// (0x0002923c) status_pane_ParamLimits

0xae12,	// (0x0002923c) status_pane

0xae27,	// (0x00029251) status_small_pane

0xae2f,	// (0x00029259) control_pane

0xa0bc,	// (0x000284e6) stacon_bottom_pane

0xae37,	// (0x00029261) list_single_mce_smart_pane_t1_ParamLimits

0xae37,	// (0x00029261) list_single_mce_smart_pane_t1

0xae4a,	// (0x00029274) list_single_mce_smart_pane_t2_ParamLimits

0xae4a,	// (0x00029274) list_single_mce_smart_pane_t2

0x0001,

0xf3af,	// (0x0002d7d9) list_single_mce_smart_pane_t_ParamLimits

0xf3af,	// (0x0002d7d9) list_single_mce_smart_pane_t

0x4753,	// (0x00022b7d) compass_pane

0x475f,	// (0x00022b89) main_location2_pane_t1

0x4773,	// (0x00022b9d) main_location2_pane_t2

0x4787,	// (0x00022bb1) main_location2_pane_t3

0x0003,

0xf3b4,	// (0x0002d7de) main_location2_pane_t

0xae69,	// (0x00029293) compass_pane_g1_ParamLimits

0xae69,	// (0x00029293) compass_pane_g1

0x47d1,	// (0x00022bfb) compass_pane_t1

0x47e0,	// (0x00022c0a) compass_pane_t2

0x0005,

0xf3bd,	// (0x0002d7e7) compass_pane_t

0x482b,	// (0x00022c55) text_secondary_cp61

0xaee5,	// (0x0002930f) navi_pane_cams_g5

0xaf61,	// (0x0002938b) navi_pane_im_t1

0xaf6f,	// (0x00029399) navi_pane_mp_g1_ParamLimits

0xaf6f,	// (0x00029399) navi_pane_mp_g1

0xaf83,	// (0x000293ad) navi_pane_mp_g2_ParamLimits

0xaf83,	// (0x000293ad) navi_pane_mp_g2

0xaf8f,	// (0x000293b9) navi_pane_mp_g3_ParamLimits

0xaf8f,	// (0x000293b9) navi_pane_mp_g3

0x0002,

0xf3d1,	// (0x0002d7fb) navi_pane_mp_g_ParamLimits

0xf3d1,	// (0x0002d7fb) navi_pane_mp_g

0xaf9b,	// (0x000293c5) navi_pane_mp_t1

0xafa9,	// (0x000293d3) navi_pane_mp_t2

0x0002,

0xf3d8,	// (0x0002d802) navi_pane_mp_t

0xb014,	// (0x0002943e) navi_pane_vt_g1

0xaf9b,	// (0x000293c5) navi_pane_vt_t1

0xb01c,	// (0x00029446) navi_slider_pane

0xa5b8,	// (0x000289e2) zooming_pane

0xb02c,	// (0x00029456) navi_slider_pane_g1

0x1326,	// (0x0001f750) navi_slider_pane_g2

0x0006,

0xf3df,	// (0x0002d809) navi_slider_pane_g

0xb050,	// (0x0002947a) aid_levels_zoom

0xb058,	// (0x00029482) zooming_pane_g1

0xb060,	// (0x0002948a) zooming_pane_g2

0xb060,	// (0x0002948a) zooming_pane_g3

0x0002,

0xf3ee,	// (0x0002d818) zooming_pane_g

0xb068,	// (0x00029492) level_10_zoom

0xb071,	// (0x0002949b) level_11_zoom

0xb07a,	// (0x000294a4) level_1_zoom

0xb083,	// (0x000294ad) level_2_zoom

0xb08c,	// (0x000294b6) level_3_zoom

0xb095,	// (0x000294bf) level_4_zoom

0xb09e,	// (0x000294c8) level_5_zoom

0xb0a7,	// (0x000294d1) level_6_zoom

0xb0b0,	// (0x000294da) level_7_zoom

0xb0b9,	// (0x000294e3) level_8_zoom

0xb0c2,	// (0x000294ec) level_9_zoom

0xb0d3,	// (0x000294fd) popup_phob_thumbnail_window_g1

0xb0db,	// (0x00029505) popup_phob_thumbnail_window_g2

0x0001,

0xf3f5,	// (0x0002d81f) popup_phob_thumbnail_window_g

0xc438,	// (0x0002a862) level_1_location

0xc440,	// (0x0002a86a) level_2_location

0xc448,	// (0x0002a872) level_3_location

0xc450,	// (0x0002a87a) level_4_location

0xa5b8,	// (0x000289e2) level_5_location

0x4866,	// (0x00022c90) mce_icon_pane_g1

0x486e,	// (0x00022c98) mce_icon_pane_g2

0x0001,

0xf3fa,	// (0x0002d824) mce_icon_pane_g

0x4876,	// (0x00022ca0) main_mup_pane_g1_ParamLimits

0x4876,	// (0x00022ca0) main_mup_pane_g1

0x488e,	// (0x00022cb8) main_mup_pane_g2_ParamLimits

0x488e,	// (0x00022cb8) main_mup_pane_g2

0x48aa,	// (0x00022cd4) main_mup_pane_g3_ParamLimits

0x48aa,	// (0x00022cd4) main_mup_pane_g3

0x48c6,	// (0x00022cf0) main_mup_pane_g4_ParamLimits

0x48c6,	// (0x00022cf0) main_mup_pane_g4

0x48e2,	// (0x00022d0c) main_mup_pane_g5_ParamLimits

0x48e2,	// (0x00022d0c) main_mup_pane_g5

0x4903,	// (0x00022d2d) main_mup_pane_g6_ParamLimits

0x4903,	// (0x00022d2d) main_mup_pane_g6

0x491f,	// (0x00022d49) main_mup_pane_g7_ParamLimits

0x491f,	// (0x00022d49) main_mup_pane_g7

0x493b,	// (0x00022d65) main_mup_pane_g8_ParamLimits

0x493b,	// (0x00022d65) main_mup_pane_g8

0x495b,	// (0x00022d85) main_mup_pane_g9_ParamLimits

0x495b,	// (0x00022d85) main_mup_pane_g9

0x497a,	// (0x00022da4) main_mup_pane_g10_ParamLimits

0x497a,	// (0x00022da4) main_mup_pane_g10

0x4999,	// (0x00022dc3) main_mup_pane_g11_ParamLimits

0x4999,	// (0x00022dc3) main_mup_pane_g11

0x49b1,	// (0x00022ddb) main_mup_pane_g12_ParamLimits

0x49b1,	// (0x00022ddb) main_mup_pane_g12

0x49bf,	// (0x00022de9) main_mup_pane_g13_ParamLimits

0x49bf,	// (0x00022de9) main_mup_pane_g13

0x000c,

0xf3ff,	// (0x0002d829) main_mup_pane_g_ParamLimits

0xf3ff,	// (0x0002d829) main_mup_pane_g

0x49d5,	// (0x00022dff) main_mup_pane_t1_ParamLimits

0x49d5,	// (0x00022dff) main_mup_pane_t1

0x49f2,	// (0x00022e1c) main_mup_pane_t2_ParamLimits

0x49f2,	// (0x00022e1c) main_mup_pane_t2

0x4a0c,	// (0x00022e36) main_mup_pane_t3_ParamLimits

0x4a0c,	// (0x00022e36) main_mup_pane_t3

0x4a26,	// (0x00022e50) main_mup_pane_t4_ParamLimits

0x4a26,	// (0x00022e50) main_mup_pane_t4

0x4a38,	// (0x00022e62) main_mup_pane_t5_ParamLimits

0x4a38,	// (0x00022e62) main_mup_pane_t5

0x4a4a,	// (0x00022e74) main_mup_pane_t6_ParamLimits

0x4a4a,	// (0x00022e74) main_mup_pane_t6

0x0005,

0xf41a,	// (0x0002d844) main_mup_pane_t_ParamLimits

0xf41a,	// (0x0002d844) main_mup_pane_t

0x4a60,	// (0x00022e8a) mup_progress_pane_ParamLimits

0x4a60,	// (0x00022e8a) mup_progress_pane

0x4a6c,	// (0x00022e96) mup_visualizer_pane_ParamLimits

0x4a6c,	// (0x00022e96) mup_visualizer_pane

0x4aa6,	// (0x00022ed0) mup_volume_pane_ParamLimits

0x4aa6,	// (0x00022ed0) mup_volume_pane

0xadc3,	// (0x000291ed) mup_visualizer_pane_g1_ParamLimits

0xadc3,	// (0x000291ed) mup_visualizer_pane_g1

0xadc3,	// (0x000291ed) mup_visualizer_pane_g2_ParamLimits

0xadc3,	// (0x000291ed) mup_visualizer_pane_g2

0xae69,	// (0x00029293) mup_visualizer_pane_g3_ParamLimits

0xae69,	// (0x00029293) mup_visualizer_pane_g3

0x0002,

0xf427,	// (0x0002d851) mup_visualizer_pane_g_ParamLimits

0xf427,	// (0x0002d851) mup_visualizer_pane_g

0xa431,	// (0x0002885b) mup_volume_pane_g1

0xb0eb,	// (0x00029515) mup_volume_pane_g2

0x0001,

0xf42e,	// (0x0002d858) mup_volume_pane_g

0xa431,	// (0x0002885b) mup_progress_pane_g1

0xb0f4,	// (0x0002951e) mup_progress_pane_g2

0xb0fd,	// (0x00029527) mup_progress_pane_g3

0x0002,

0xf433,	// (0x0002d85d) mup_progress_pane_g

0xa0bc,	// (0x000284e6) bg_popup_window_pane_cp05

0xb106,	// (0x00029530) heading_pane_cp02_ParamLimits

0xb106,	// (0x00029530) heading_pane_cp02

0xb120,	// (0x0002954a) list_popup_blid_pane

0xb128,	// (0x00029552) list_blid_sat_info_pane_ParamLimits

0xb128,	// (0x00029552) list_blid_sat_info_pane

0xb13b,	// (0x00029565) list_blid_sat_info_pane_g1

0xb143,	// (0x0002956d) list_blid_sat_info_pane_t1

0x4bb3,	// (0x00022fdd) mup_equalizer_pane_ParamLimits

0x4bb3,	// (0x00022fdd) mup_equalizer_pane

0x4bd4,	// (0x00022ffe) mup_equalizer_pane_cp1_ParamLimits

0x4bd4,	// (0x00022ffe) mup_equalizer_pane_cp1

0x4bf5,	// (0x0002301f) mup_equalizer_pane_cp2_ParamLimits

0x4bf5,	// (0x0002301f) mup_equalizer_pane_cp2

0x4c16,	// (0x00023040) mup_equalizer_pane_cp3_ParamLimits

0x4c16,	// (0x00023040) mup_equalizer_pane_cp3

0x4c37,	// (0x00023061) mup_equalizer_pane_cp4_ParamLimits

0x4c37,	// (0x00023061) mup_equalizer_pane_cp4

0x4c58,	// (0x00023082) mup_equalizer_pane_cp5

0x4c6e,	// (0x00023098) mup_equalizer_pane_cp6

0x4c86,	// (0x000230b0) mup_equalizer_pane_cp7

0xc356,	// (0x0002a780) bg_popup_call_poc_act_pane_g9

0xc35e,	// (0x0002a788) bg_popup_call_poc_act_pane_g10

0xc366,	// (0x0002a790) bg_popup_call_poc_act_pane_g11

0x000a,

0xa317,	// (0x00028741) mup_scale_pane

0xa431,	// (0x0002885b) mup_scale_pane_g1

0xb151,	// (0x0002957b) mup_scale_pane_g2

0x0006,

0xf44f,	// (0x0002d879) mup_scale_pane_g

0xb175,	// (0x0002959f) msg_data_pane

0xb17d,	// (0x000295a7) scroll_pane_cp017

0x4cb0,	// (0x000230da) bg_list_pane_cp04_ParamLimits

0x4cb0,	// (0x000230da) bg_list_pane_cp04

0xb18d,	// (0x000295b7) msg_data_pane_g1

0x4ccc,	// (0x000230f6) msg_data_pane_g2

0x4cd6,	// (0x00023100) msg_data_pane_g3

0x4cde,	// (0x00023108) msg_data_pane_g4

0x4ce6,	// (0x00023110) msg_data_pane_g5

0x4cee,	// (0x00023118) msg_data_pane_g6

0x4cf6,	// (0x00023120) msg_data_pane_g7

0x0006,

0xf45e,	// (0x0002d888) msg_data_pane_g

0x4cfe,	// (0x00023128) msg_text_pane_ParamLimits

0x4cfe,	// (0x00023128) msg_text_pane

0x4d4b,	// (0x00023175) qrid_highlight_pane_cp011_ParamLimits

0x4d4b,	// (0x00023175) qrid_highlight_pane_cp011

0xa0bc,	// (0x000284e6) msg_body_pane

0xa0bc,	// (0x000284e6) msg_header_pane

0xb19e,	// (0x000295c8) input_focus_pane_cp07

0xb1b3,	// (0x000295dd) msg_header_pane_t1_ParamLimits

0xb1b3,	// (0x000295dd) msg_header_pane_t1

0xb1c5,	// (0x000295ef) msg_header_pane_t2_ParamLimits

0xb1c5,	// (0x000295ef) msg_header_pane_t2

0x0001,

0xf472,	// (0x0002d89c) msg_header_pane_t_ParamLimits

0xf472,	// (0x0002d89c) msg_header_pane_t

0xb1d7,	// (0x00029601) msg_body_pane_g1

0xb1df,	// (0x00029609) msg_body_pane_t1_ParamLimits

0xb1df,	// (0x00029609) msg_body_pane_t1

0xb210,	// (0x0002963a) msg_body_pane_t2_ParamLimits

0xb210,	// (0x0002963a) msg_body_pane_t2

0xb222,	// (0x0002964c) msg_body_pane_t3_ParamLimits

0xb222,	// (0x0002964c) msg_body_pane_t3

0x0002,

0xf477,	// (0x0002d8a1) msg_body_pane_t_ParamLimits

0xf477,	// (0x0002d8a1) msg_body_pane_t

0x1368,	// (0x0001f792) main_viewer_pane_g1_ParamLimits

0x1368,	// (0x0001f792) main_viewer_pane_g1

0x1374,	// (0x0001f79e) main_viewer_pane_g2_ParamLimits

0x1374,	// (0x0001f79e) main_viewer_pane_g2

0x4d93,	// (0x000231bd) main_viewer_pane_g3_ParamLimits

0x4d93,	// (0x000231bd) main_viewer_pane_g3

0x4da4,	// (0x000231ce) main_viewer_pane_g4_ParamLimits

0x4da4,	// (0x000231ce) main_viewer_pane_g4

0x1380,	// (0x0001f7aa) main_viewer_pane_g5_ParamLimits

0x1380,	// (0x0001f7aa) main_viewer_pane_g5

0x1380,	// (0x0001f7aa) main_viewer_pane_g7_ParamLimits

0x1380,	// (0x0001f7aa) main_viewer_pane_g7

0xaad2,	// (0x00028efc) main_viewer_pane_g8_ParamLimits

0xaad2,	// (0x00028efc) main_viewer_pane_g8

0x0007,

0xf487,	// (0x0002d8b1) main_viewer_pane_g_ParamLimits

0xf487,	// (0x0002d8b1) main_viewer_pane_g

0xb234,	// (0x0002965e) viewer_content_pane_ParamLimits

0xb234,	// (0x0002965e) viewer_content_pane

0x4dd5,	// (0x000231ff) main_postcard_pane_g1_ParamLimits

0x4dd5,	// (0x000231ff) main_postcard_pane_g1

0x4de3,	// (0x0002320d) main_postcard_pane_g2_ParamLimits

0x4de3,	// (0x0002320d) main_postcard_pane_g2

0x4df1,	// (0x0002321b) main_postcard_pane_g3_ParamLimits

0x4df1,	// (0x0002321b) main_postcard_pane_g3

0x0005,

0xf498,	// (0x0002d8c2) main_postcard_pane_g_ParamLimits

0xf498,	// (0x0002d8c2) main_postcard_pane_g

0x4e01,	// (0x0002322b) main_postcard_pane_g4

0xc538,	// (0x0002a962) smil_status_volume_pane_g2

0x4e2d,	// (0x00023257) postcard_pane_ParamLimits

0x4e2d,	// (0x00023257) postcard_pane

0xadc3,	// (0x000291ed) postcard_pane_g1_ParamLimits

0xadc3,	// (0x000291ed) postcard_pane_g1

0x4e5f,	// (0x00023289) postcard_pane_g2_ParamLimits

0x4e5f,	// (0x00023289) postcard_pane_g2

0x4e6b,	// (0x00023295) postcard_pane_g3_ParamLimits

0x4e6b,	// (0x00023295) postcard_pane_g3

0xb242,	// (0x0002966c) postcard_pane_g4_ParamLimits

0xb242,	// (0x0002966c) postcard_pane_g4

0x4e77,	// (0x000232a1) postcard_pane_g5_ParamLimits

0x4e77,	// (0x000232a1) postcard_pane_g5

0x4e83,	// (0x000232ad) postcard_pane_g6_ParamLimits

0x4e83,	// (0x000232ad) postcard_pane_g6

0xb250,	// (0x0002967a) postcard_pane_g7_ParamLimits

0xb250,	// (0x0002967a) postcard_pane_g7

0x0006,

0xf4a5,	// (0x0002d8cf) postcard_pane_g_ParamLimits

0xf4a5,	// (0x0002d8cf) postcard_pane_g

0x4e8f,	// (0x000232b9) main_mp2_pane_g1_ParamLimits

0x4e8f,	// (0x000232b9) main_mp2_pane_g1

0x4e9b,	// (0x000232c5) main_mp2_pane_g2_ParamLimits

0x4e9b,	// (0x000232c5) main_mp2_pane_g2

0x4ea7,	// (0x000232d1) main_mp2_pane_g3_ParamLimits

0x4ea7,	// (0x000232d1) main_mp2_pane_g3

0x0002,

0xf4b4,	// (0x0002d8de) main_mp2_pane_g_ParamLimits

0xf4b4,	// (0x0002d8de) main_mp2_pane_g

0x4eb3,	// (0x000232dd) main_mp2_pane_t1_ParamLimits

0x4eb3,	// (0x000232dd) main_mp2_pane_t1

0x4eca,	// (0x000232f4) main_mp2_pane_t2_ParamLimits

0x4eca,	// (0x000232f4) main_mp2_pane_t2

0x4ede,	// (0x00023308) main_mp2_pane_t3_ParamLimits

0x4ede,	// (0x00023308) main_mp2_pane_t3

0x0002,

0xf4bb,	// (0x0002d8e5) main_mp2_pane_t_ParamLimits

0xf4bb,	// (0x0002d8e5) main_mp2_pane_t

0xb25e,	// (0x00029688) pec_content_pane_ParamLimits

0xb25e,	// (0x00029688) pec_content_pane

0xa761,	// (0x00028b8b) scroll_pane_cp015

0xb270,	// (0x0002969a) pec_attribute_pane_ParamLimits

0xb270,	// (0x0002969a) pec_attribute_pane

0x4ef0,	// (0x0002331a) pec_content_pane_g1_ParamLimits

0x4ef0,	// (0x0002331a) pec_content_pane_g1

0xb280,	// (0x000296aa) pec_content_pane_t1_ParamLimits

0xb280,	// (0x000296aa) pec_content_pane_t1

0xb292,	// (0x000296bc) pec_content_pane_t2_ParamLimits

0xb292,	// (0x000296bc) pec_content_pane_t2

0x0001,

0xf4c2,	// (0x0002d8ec) pec_content_pane_t_ParamLimits

0xf4c2,	// (0x0002d8ec) pec_content_pane_t

0x4efc,	// (0x00023326) list_single_graphic_pane_cp01_ParamLimits

0x4efc,	// (0x00023326) list_single_graphic_pane_cp01

0xa317,	// (0x00028741) bg_popup_sub_pane_cp04

0xb2a4,	// (0x000296ce) popup_mup_playback_window_g1

0xb2b0,	// (0x000296da) popup_mup_playback_window_t1

0xb2c5,	// (0x000296ef) popup_mup_playback_window_t2

0x0001,

0xf4c7,	// (0x0002d8f1) popup_mup_playback_window_t

0xb2fc,	// (0x00029726) main_image_pane_g1_ParamLimits

0xb2fc,	// (0x00029726) main_image_pane_g1

0xb33f,	// (0x00029769) scroll_pane_cp018_ParamLimits

0xb33f,	// (0x00029769) scroll_pane_cp018

0xb357,	// (0x00029781) scroll_pane_cp016_ParamLimits

0xb357,	// (0x00029781) scroll_pane_cp016

0x4f95,	// (0x000233bf) smil2_image_pane_ParamLimits

0x4f95,	// (0x000233bf) smil2_image_pane

0x4fc5,	// (0x000233ef) smil2_root_pane_ParamLimits

0x4fc5,	// (0x000233ef) smil2_root_pane

0x4ff1,	// (0x0002341b) smil2_text_pane_ParamLimits

0x4ff1,	// (0x0002341b) smil2_text_pane

0xa0bc,	// (0x000284e6) bg_list_pane_cp06

0xb393,	// (0x000297bd) grid_radio_pane

0xa0bc,	// (0x000284e6) bg_popup_window_pane_cp06

0xb39b,	// (0x000297c5) main_fmradio_pane_t1

0xac9e,	// (0x000290c8) heading_pane_cp04

0xb3a9,	// (0x000297d3) main_fmradio_pane_t2

0xc36e,	// (0x0002a798) popup_cale_lunar_info_window_g1

0xb3b7,	// (0x000297e1) main_fmradio_pane_t3

0xc376,	// (0x0002a7a0) popup_cale_lunar_info_window_g2

0xb3c5,	// (0x000297ef) main_fmradio_pane_t4

0x0001,

0xb3d3,	// (0x000297fd) main_fmradio_pane_t5

0x0004,

0xf5a2,	// (0x0002d9cc) popup_cale_lunar_info_window_g

0xf4dc,	// (0x0002d906) main_fmradio_pane_t

0xb3e1,	// (0x0002980b) wait_bar_pane_cp03

0xb3e9,	// (0x00029813) cell_fmradio_pane_ParamLimits

0xb3e9,	// (0x00029813) cell_fmradio_pane

0xb250,	// (0x0002967a) cell_fmradio_pane_g1_ParamLimits

0xb250,	// (0x0002967a) cell_fmradio_pane_g1

0xa0bc,	// (0x000284e6) grid_highlight_pane_cp011

0xb3fc,	// (0x00029826) poc_content_pane_ParamLimits

0xb3fc,	// (0x00029826) poc_content_pane

0xb40e,	// (0x00029838) scroll_pane_cp019

0x5031,	// (0x0002345b) popup_call_poc_act_window_ParamLimits

0x5031,	// (0x0002345b) popup_call_poc_act_window

0x503e,	// (0x00023468) popup_call_poc_inact_window_ParamLimits

0x503e,	// (0x00023468) popup_call_poc_inact_window

0xf579,	// (0x0002d9a3) bg_popup_call_poc_act_pane_g

0xc2e6,	// (0x0002a710) bg_popup_call_poc_inact_pane_g1

0xc2ee,	// (0x0002a718) bg_popup_call_poc_inact_pane_g2

0xb416,	// (0x00029840) popup_call_poc_act_window_g2

0xc2f6,	// (0x0002a720) bg_popup_call_poc_inact_pane_g3

0xc2fe,	// (0x0002a728) bg_popup_call_poc_inact_pane_g4

0xc306,	// (0x0002a730) bg_popup_call_poc_inact_pane_g5

0xb41e,	// (0x00029848) popup_call_poc_act_window_t1_ParamLimits

0xb41e,	// (0x00029848) popup_call_poc_act_window_t1

0xb446,	// (0x00029870) popup_call_poc_act_window_t2_ParamLimits

0xb446,	// (0x00029870) popup_call_poc_act_window_t2

0xb46e,	// (0x00029898) popup_call_poc_act_window_t3_ParamLimits

0xb46e,	// (0x00029898) popup_call_poc_act_window_t3

0xb496,	// (0x000298c0) popup_call_poc_act_window_t4_ParamLimits

0xb496,	// (0x000298c0) popup_call_poc_act_window_t4

0x0003,

0xf4e7,	// (0x0002d911) popup_call_poc_act_window_t_ParamLimits

0xf4e7,	// (0x0002d911) popup_call_poc_act_window_t

0xc30e,	// (0x0002a738) bg_popup_call_poc_inact_pane_g6

0xc316,	// (0x0002a740) bg_popup_call_poc_inact_pane_g7

0xc31e,	// (0x0002a748) bg_popup_call_poc_inact_pane_g8

0xb4a8,	// (0x000298d2) popup_call_poc_inact_window_g2

0xc326,	// (0x0002a750) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf566,	// (0x0002d990) bg_popup_call_poc_inact_pane_g

0xb4b0,	// (0x000298da) popup_call_poc_inact_window_t1_ParamLimits

0xb4b0,	// (0x000298da) popup_call_poc_inact_window_t1

0xb4c5,	// (0x000298ef) popup_call_poc_inact_window_t2_ParamLimits

0xb4c5,	// (0x000298ef) popup_call_poc_inact_window_t2

0xb4da,	// (0x00029904) popup_call_poc_inact_window_t3_ParamLimits

0xb4da,	// (0x00029904) popup_call_poc_inact_window_t3

0x0002,

0xf4f0,	// (0x0002d91a) popup_call_poc_inact_window_t_ParamLimits

0xf4f0,	// (0x0002d91a) popup_call_poc_inact_window_t

0xc4ab,	// (0x0002a8d5) context_pane_ParamLimits

0x54f4,	// (0x0002391e) signal_pane_ParamLimits

0xa5b8,	// (0x000289e2) main_call2_pane

0x14db,	// (0x0001f905) popup_phob_thumbnail2_window_ParamLimits

0x14db,	// (0x0001f905) popup_phob_thumbnail2_window

0x1338,	// (0x0001f762) aid_hotspot_pointer_arrow_pane

0x1340,	// (0x0001f76a) aid_hotspot_pointer_hand_pane

0x5360,	// (0x0002378a) phob_pre_status_pane_g5

0x2f3c,	// (0x00021366) cams_zoom_pane_ParamLimits

0x2f48,	// (0x00021372) image_vga_pane_ParamLimits

0x2f57,	// (0x00021381) main_camera_pane_g1_ParamLimits

0x2f65,	// (0x0002138f) main_camera_pane_g2_ParamLimits

0x2f71,	// (0x0002139b) main_camera_pane_g3_ParamLimits

0x2f7d,	// (0x000213a7) main_camera_pane_g4_ParamLimits

0x2f89,	// (0x000213b3) main_camera_pane_g5_ParamLimits

0x2f95,	// (0x000213bf) main_camera_pane_g6_ParamLimits

0x2fa1,	// (0x000213cb) main_camera_pane_g7_ParamLimits

0xf1ef,	// (0x0002d619) main_camera_pane_g_ParamLimits

0x2fad,	// (0x000213d7) main_camera_pane_t1_ParamLimits

0x2fbf,	// (0x000213e9) main_camera_pane_t2_ParamLimits

0xf200,	// (0x0002d62a) main_camera_pane_t_ParamLimits

0xa317,	// (0x00028741) bg_popup_preview_window_pane_cp01_ParamLimits

0xa317,	// (0x00028741) bg_popup_preview_window_pane_cp01

0xb4ef,	// (0x00029919) popup_phob_thumbnail2_window_g1_ParamLimits

0xb4ef,	// (0x00029919) popup_phob_thumbnail2_window_g1

0xa0bc,	// (0x000284e6) call2_cli_visual_pane

0x505a,	// (0x00023484) popup_call2_audio_conf_window_ParamLimits

0x505a,	// (0x00023484) popup_call2_audio_conf_window

0x506f,	// (0x00023499) popup_call2_audio_first_window_ParamLimits

0x506f,	// (0x00023499) popup_call2_audio_first_window

0x510d,	// (0x00023537) popup_call2_audio_in_window_ParamLimits

0x510d,	// (0x00023537) popup_call2_audio_in_window

0x514f,	// (0x00023579) popup_call2_audio_out_window_ParamLimits

0x514f,	// (0x00023579) popup_call2_audio_out_window

0x51b1,	// (0x000235db) popup_call2_audio_second_window_ParamLimits

0x51b1,	// (0x000235db) popup_call2_audio_second_window

0x520f,	// (0x00023639) popup_call2_audio_wait_window_ParamLimits

0x520f,	// (0x00023639) popup_call2_audio_wait_window

0xa0bc,	// (0x000284e6) bg_popup_call2_act_pane_cp03

0xa2f9,	// (0x00028723) list_conf_pane_cp

0xb4fb,	// (0x00029925) popup_call2_audio_conf_window_t1

0xacfb,	// (0x00029125) list_single_graphic_popup_conf2_pane_ParamLimits

0xacfb,	// (0x00029125) list_single_graphic_popup_conf2_pane

0xad0e,	// (0x00029138) list_highlight_pane_cp04

0xb509,	// (0x00029933) list_single_graphic_popup_conf2_pane_g1

0xad1f,	// (0x00029149) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf4f7,	// (0x0002d921) list_single_graphic_popup_conf2_pane_g

0xb513,	// (0x0002993d) list_single_graphic_popup_conf2_pane_t1

0xb521,	// (0x0002994b) bg_popup_call2_act_pane_cp01_ParamLimits

0xb521,	// (0x0002994b) bg_popup_call2_act_pane_cp01

0xb5ab,	// (0x000299d5) call_type_pane_cp05_ParamLimits

0xb5ab,	// (0x000299d5) call_type_pane_cp05

0xb5ff,	// (0x00029a29) popup_call2_audio_second_window_g1_ParamLimits

0xb5ff,	// (0x00029a29) popup_call2_audio_second_window_g1

0xb653,	// (0x00029a7d) popup_call2_audio_second_window_g2_ParamLimits

0xb653,	// (0x00029a7d) popup_call2_audio_second_window_g2

0x0002,

0xf4fc,	// (0x0002d926) popup_call2_audio_second_window_g_ParamLimits

0xf4fc,	// (0x0002d926) popup_call2_audio_second_window_g

0xb6b8,	// (0x00029ae2) popup_call2_audio_second_window_t1_ParamLimits

0xb6b8,	// (0x00029ae2) popup_call2_audio_second_window_t1

0xb773,	// (0x00029b9d) popup_call2_audio_second_window_t2_ParamLimits

0xb773,	// (0x00029b9d) popup_call2_audio_second_window_t2

0xb7c6,	// (0x00029bf0) popup_call2_audio_second_window_t3_ParamLimits

0xb7c6,	// (0x00029bf0) popup_call2_audio_second_window_t3

0x0003,

0xf503,	// (0x0002d92d) popup_call2_audio_second_window_t_ParamLimits

0xf503,	// (0x0002d92d) popup_call2_audio_second_window_t

0xa0bc,	// (0x000284e6) bg_popup_call2_in_pane_cp02

0xa0c6,	// (0x000284f0) call_type_pane_cp04

0xa0ce,	// (0x000284f8) popup_call2_audio_wait_window_g1

0xa0d6,	// (0x00028500) popup_call2_audio_wait_window_g2

0x0001,

0xf0de,	// (0x0002d508) popup_call2_audio_wait_window_g

0xa0de,	// (0x00028508) popup_call2_audio_wait_window_t3

0xb8b9,	// (0x00029ce3) bg_popup_call2_act_pane_ParamLimits

0xb8b9,	// (0x00029ce3) bg_popup_call2_act_pane

0xb979,	// (0x00029da3) call_type_pane_cp03_ParamLimits

0xb979,	// (0x00029da3) call_type_pane_cp03

0xb9dd,	// (0x00029e07) popup_call2_audio_first_window_g1_ParamLimits

0xb9dd,	// (0x00029e07) popup_call2_audio_first_window_g1

0xba4d,	// (0x00029e77) popup_call2_audio_first_window_g2_ParamLimits

0xba4d,	// (0x00029e77) popup_call2_audio_first_window_g2

0xadc3,	// (0x000291ed) popup_call2_audio_first_window_g3_ParamLimits

0xadc3,	// (0x000291ed) popup_call2_audio_first_window_g3

0x0004,

0xf50c,	// (0x0002d936) popup_call2_audio_first_window_g_ParamLimits

0xf50c,	// (0x0002d936) popup_call2_audio_first_window_g

0xbb2b,	// (0x00029f55) popup_call2_audio_first_window_t1_ParamLimits

0xbb2b,	// (0x00029f55) popup_call2_audio_first_window_t1

0xbc2e,	// (0x0002a058) popup_call2_audio_first_window_t4_ParamLimits

0xbc2e,	// (0x0002a058) popup_call2_audio_first_window_t4

0xbd11,	// (0x0002a13b) popup_call2_audio_first_window_t5_ParamLimits

0xbd11,	// (0x0002a13b) popup_call2_audio_first_window_t5

0x0003,

0xf517,	// (0x0002d941) popup_call2_audio_first_window_t_ParamLimits

0xf517,	// (0x0002d941) popup_call2_audio_first_window_t

0xa30f,	// (0x00028739) bg_popup_call2_act_pane_g1

0xc37e,	// (0x0002a7a8) popup_cale_lunar_info_window_t1

0xc38c,	// (0x0002a7b6) popup_cale_lunar_info_window_t2

0xc39a,	// (0x0002a7c4) popup_cale_lunar_info_window_t3

0xa0bc,	// (0x000284e6) bg_popup_call2_bubble_pane

0xbe12,	// (0x0002a23c) bg_popup_call2_in_pane_cp01_ParamLimits

0xbe12,	// (0x0002a23c) bg_popup_call2_in_pane_cp01

0x9d98,	// (0x000281c2) call_type_pane_cp02

0xbe5a,	// (0x0002a284) popup_call2_audio_out_window_g1_ParamLimits

0xbe5a,	// (0x0002a284) popup_call2_audio_out_window_g1

0xbe86,	// (0x0002a2b0) popup_call2_audio_out_window_g2_ParamLimits

0xbe86,	// (0x0002a2b0) popup_call2_audio_out_window_g2

0xbeae,	// (0x0002a2d8) popup_call2_audio_out_window_g3_ParamLimits

0xbeae,	// (0x0002a2d8) popup_call2_audio_out_window_g3

0x0003,

0xf520,	// (0x0002d94a) popup_call2_audio_out_window_g_ParamLimits

0xf520,	// (0x0002d94a) popup_call2_audio_out_window_g

0xbee9,	// (0x0002a313) popup_call2_audio_out_window_t1_ParamLimits

0xbee9,	// (0x0002a313) popup_call2_audio_out_window_t1

0xbf48,	// (0x0002a372) popup_call2_audio_out_window_t2_ParamLimits

0xbf48,	// (0x0002a372) popup_call2_audio_out_window_t2

0xbf9c,	// (0x0002a3c6) popup_call2_audio_out_window_t3_ParamLimits

0xbf9c,	// (0x0002a3c6) popup_call2_audio_out_window_t3

0xbfb2,	// (0x0002a3dc) popup_call2_audio_out_window_t4_ParamLimits

0xbfb2,	// (0x0002a3dc) popup_call2_audio_out_window_t4

0xbfc8,	// (0x0002a3f2) popup_call2_audio_out_window_t5_ParamLimits

0xbfc8,	// (0x0002a3f2) popup_call2_audio_out_window_t5

0x0005,

0xf529,	// (0x0002d953) popup_call2_audio_out_window_t_ParamLimits

0xf529,	// (0x0002d953) popup_call2_audio_out_window_t

0xc02c,	// (0x0002a456) bg_popup_call2_in_pane_ParamLimits

0xc02c,	// (0x0002a456) bg_popup_call2_in_pane

0xc088,	// (0x0002a4b2) popup_call2_audio_in_window_g1_ParamLimits

0xc088,	// (0x0002a4b2) popup_call2_audio_in_window_g1

0xc0c0,	// (0x0002a4ea) popup_call2_audio_in_window_g2_ParamLimits

0xc0c0,	// (0x0002a4ea) popup_call2_audio_in_window_g2

0xc0f8,	// (0x0002a522) popup_call2_audio_in_window_g3_ParamLimits

0xc0f8,	// (0x0002a522) popup_call2_audio_in_window_g3

0x0003,

0xf536,	// (0x0002d960) popup_call2_audio_in_window_g_ParamLimits

0xf536,	// (0x0002d960) popup_call2_audio_in_window_g

0xc150,	// (0x0002a57a) popup_call2_audio_in_window_t1_ParamLimits

0xc150,	// (0x0002a57a) popup_call2_audio_in_window_t1

0xc1d0,	// (0x0002a5fa) popup_call2_audio_in_window_t2_ParamLimits

0xc1d0,	// (0x0002a5fa) popup_call2_audio_in_window_t2

0xc250,	// (0x0002a67a) popup_call2_audio_in_window_t3_ParamLimits

0xc250,	// (0x0002a67a) popup_call2_audio_in_window_t3

0xc26a,	// (0x0002a694) popup_call2_audio_in_window_t4_ParamLimits

0xc26a,	// (0x0002a694) popup_call2_audio_in_window_t4

0xc27c,	// (0x0002a6a6) popup_call2_audio_in_window_t5_ParamLimits

0xc27c,	// (0x0002a6a6) popup_call2_audio_in_window_t5

0xc291,	// (0x0002a6bb) popup_call2_audio_in_window_t6_ParamLimits

0xc291,	// (0x0002a6bb) popup_call2_audio_in_window_t6

0x0005,

0xf53f,	// (0x0002d969) popup_call2_audio_in_window_t_ParamLimits

0xf53f,	// (0x0002d969) popup_call2_audio_in_window_t

0xa30f,	// (0x00028739) bg_popup_call2_in_pane_g1

0xc3a8,	// (0x0002a7d2) popup_cale_lunar_info_window_t4

0x0003,

0xf5a7,	// (0x0002d9d1) popup_cale_lunar_info_window_t

0xa317,	// (0x00028741) bg_popup_call2_rect_pane_ParamLimits

0xa317,	// (0x00028741) bg_popup_call2_rect_pane

0xa0bc,	// (0x000284e6) call2_cli_visual_graphic_pane

0xa0bc,	// (0x000284e6) call2_cli_visual_text_pane

0x152a,	// (0x0001f954) smil_status_volume_pane_g3

0x0002,

0xa431,	// (0x0002885b) call2_cli_visual_graphic_pane_g1

0xa431,	// (0x0002885b) call2_cli_visual_graphic_pane_g2

0xa431,	// (0x0002885b) call2_cli_visual_graphic_pane_g3

0x0002,

0xf54c,	// (0x0002d976) call2_cli_visual_graphic_pane_g

0xc2a6,	// (0x0002a6d0) bg_popup_call2_rect_pane_g1

0xa4bd,	// (0x000288e7) bg_popup_call2_rect_pane_g2

0xc2ae,	// (0x0002a6d8) bg_popup_call2_rect_pane_g3

0xc2b6,	// (0x0002a6e0) bg_popup_call2_rect_pane_g4

0xc2be,	// (0x0002a6e8) bg_popup_call2_rect_pane_g5

0xc2c6,	// (0x0002a6f0) bg_popup_call2_rect_pane_g6

0xc2ce,	// (0x0002a6f8) bg_popup_call2_rect_pane_g7

0xc2d6,	// (0x0002a700) bg_popup_call2_rect_pane_g8

0xc2de,	// (0x0002a708) bg_popup_call2_rect_pane_g9

0x0008,

0xf553,	// (0x0002d97d) bg_popup_call2_rect_pane_g

0xc2e6,	// (0x0002a710) bg_popup_call2_bubble_pane_g1

0xc2ee,	// (0x0002a718) bg_popup_call2_bubble_pane_g2

0xc2f6,	// (0x0002a720) bg_popup_call2_bubble_pane_g3

0xc2fe,	// (0x0002a728) bg_popup_call2_bubble_pane_g4

0xc306,	// (0x0002a730) bg_popup_call2_bubble_pane_g5

0xc30e,	// (0x0002a738) bg_popup_call2_bubble_pane_g6

0xc316,	// (0x0002a740) bg_popup_call2_bubble_pane_g7

0xc31e,	// (0x0002a748) bg_popup_call2_bubble_pane_g8

0xc326,	// (0x0002a750) bg_popup_call2_bubble_pane_g9

0x0008,

0xf566,	// (0x0002d990) bg_popup_call2_bubble_pane_g

0x2b43,	// (0x00020f6d) aid_cale_week_size_cell_pane

0x2fd1,	// (0x000213fb) aid_cams_cif_uncrop_pane_ParamLimits

0x2fd1,	// (0x000213fb) aid_cams_cif_uncrop_pane

0x312c,	// (0x00021556) aid_cams_size_cell_ParamLimits

0x312c,	// (0x00021556) aid_cams_size_cell

0x3138,	// (0x00021562) grid_cams_pane_ParamLimits

0x3146,	// (0x00021570) linegrid_cams_pane_ParamLimits

0x3331,	// (0x0002175b) call_video_pane_t1

0x3352,	// (0x0002177c) call_video_pane_t2

0x0001,

0xf253,	// (0x0002d67d) call_video_pane_t

0x3899,	// (0x00021cc3) aid_cale_month_size_cell_pane_ParamLimits

0x3899,	// (0x00021cc3) aid_cale_month_size_cell_pane

0xf5f0,	// (0x0002da1a) smil_status_volume_pane_g

0x1537,	// (0x0001f961) volume_smil_pane_ParamLimits

0x0cd3,	// (0x0001f0fd) aid_popup2_width_pane

0x2a7f,	// (0x00020ea9) cell_qdial_pane_g4_ParamLimits

0x2a7f,	// (0x00020ea9) cell_qdial_pane_g4

0x47ad,	// (0x00022bd7) aid_blid_cardinal_pane_ParamLimits

0x47bd,	// (0x00022be7) aid_blid_destination_pane_ParamLimits

0x47bd,	// (0x00022be7) aid_blid_destination_pane

0xa317,	// (0x00028741) bg_popup_call_poc_act_pane_ParamLimits

0xa317,	// (0x00028741) bg_popup_call_poc_act_pane

0xa317,	// (0x00028741) bg_popup_call_poc_inact_pane_ParamLimits

0xa317,	// (0x00028741) bg_popup_call_poc_inact_pane

0xc32e,	// (0x0002a758) bg_popup_call_poc_act_pane_g1

0xc336,	// (0x0002a760) bg_popup_call_poc_act_pane_g2

0xc33e,	// (0x0002a768) bg_popup_call_poc_act_pane_g3

0xc2fe,	// (0x0002a728) bg_popup_call_poc_act_pane_g4

0xc306,	// (0x0002a730) bg_popup_call_poc_act_pane_g5

0xc346,	// (0x0002a770) bg_popup_call_poc_act_pane_g6

0xc316,	// (0x0002a740) bg_popup_call_poc_act_pane_g7

0xc34e,	// (0x0002a778) bg_popup_call_poc_act_pane_g8

0xa0bc,	// (0x000284e6) main_usb_pane

0x140a,	// (0x0001f834) popup_cale_lunar_info_window

0x367b,	// (0x00021aa5) im_reading_pane_t1_ParamLimits

0xa6b9,	// (0x00028ae3) list_im_pane_ParamLimits

0xa6ca,	// (0x00028af4) scroll_pane_cp07_ParamLimits

0xa0bc,	// (0x000284e6) grid_highlight_pane_cp012

0xa317,	// (0x00028741) mup_scale_pane_ParamLimits

0xadc3,	// (0x000291ed) main_usb_pane_g1_ParamLimits

0xadc3,	// (0x000291ed) main_usb_pane_g1

0x5283,	// (0x000236ad) main_usb_pane_g2_ParamLimits

0x5283,	// (0x000236ad) main_usb_pane_g2

0x0001,

0xf590,	// (0x0002d9ba) main_usb_pane_g_ParamLimits

0xf590,	// (0x0002d9ba) main_usb_pane_g

0x528f,	// (0x000236b9) main_usb_pane_t1_ParamLimits

0x528f,	// (0x000236b9) main_usb_pane_t1

0x52a1,	// (0x000236cb) main_usb_pane_t2_ParamLimits

0x52a1,	// (0x000236cb) main_usb_pane_t2

0x52b3,	// (0x000236dd) main_usb_pane_t3_ParamLimits

0x52b3,	// (0x000236dd) main_usb_pane_t3

0x52c5,	// (0x000236ef) main_usb_pane_t4_ParamLimits

0x52c5,	// (0x000236ef) main_usb_pane_t4

0x52d7,	// (0x00023701) main_usb_pane_t5_ParamLimits

0x52d7,	// (0x00023701) main_usb_pane_t5

0x52e9,	// (0x00023713) main_usb_pane_t6_ParamLimits

0x52e9,	// (0x00023713) main_usb_pane_t6

0x0005,

0xf595,	// (0x0002d9bf) main_usb_pane_t_ParamLimits

0x4753,	// (0x00022b7d) aid_text_placing

0x475f,	// (0x00022b89) main_location2_pane_t1_ParamLimits

0x4773,	// (0x00022b9d) main_location2_pane_t2_ParamLimits

0x4787,	// (0x00022bb1) main_location2_pane_t3_ParamLimits

0x479b,	// (0x00022bc5) main_location2_pane_t4_ParamLimits

0x479b,	// (0x00022bc5) main_location2_pane_t4

0xf3b4,	// (0x0002d7de) main_location2_pane_t_ParamLimits

0xa353,	// (0x0002877d) find_pinb_pane_g2_ParamLimits

0xa353,	// (0x0002877d) find_pinb_pane_g2

0x0001,

0xf104,	// (0x0002d52e) find_pinb_pane_g_ParamLimits

0xf104,	// (0x0002d52e) find_pinb_pane_g

0xa35f,	// (0x00028789) find_pinb_pane_t1_ParamLimits

0xa371,	// (0x0002879b) find_pinb_pane_t2_ParamLimits

0xf109,	// (0x0002d533) find_pinb_pane_t_ParamLimits

0xa0bc,	// (0x000284e6) main_call3_pane

0x3e3c,	// (0x00022266) cale_month_day_heading_pane_t1_ParamLimits

0x3ec2,	// (0x000222ec) cale_month_day_heading_pane_t2_ParamLimits

0x3f3b,	// (0x00022365) cale_month_day_heading_pane_t3_ParamLimits

0x3fb4,	// (0x000223de) cale_month_day_heading_pane_t4_ParamLimits

0x402d,	// (0x00022457) cale_month_day_heading_pane_t5_ParamLimits

0x40a6,	// (0x000224d0) cale_month_day_heading_pane_t6_ParamLimits

0x411f,	// (0x00022549) cale_month_day_heading_pane_t7_ParamLimits

0xf28b,	// (0x0002d6b5) cale_month_day_heading_pane_t_ParamLimits

0xa914,	// (0x00028d3e) smil_status_volume_pane

0x4e47,	// (0x00023271) postcard_address_pane_ParamLimits

0x4e47,	// (0x00023271) postcard_address_pane

0x4e53,	// (0x0002327d) postcard_message_pane_ParamLimits

0x4e53,	// (0x0002327d) postcard_message_pane

0x524e,	// (0x00023678) call2_cli_visual_pane_t1_ParamLimits

0x524e,	// (0x00023678) call2_cli_visual_pane_t1

0x56dc,	// (0x00023b06) postcard_message_pane_t1_ParamLimits

0x56dc,	// (0x00023b06) postcard_message_pane_t1

0x56c5,	// (0x00023aef) postcard_address_pane_t1_ParamLimits

0x56c5,	// (0x00023aef) postcard_address_pane_t1

0x56b6,	// (0x00023ae0) popup_call3_audio_in_window_ParamLimits

0x56b6,	// (0x00023ae0) popup_call3_audio_in_window

0x559a,	// (0x000239c4) bg_popup_call3_in_pane_ParamLimits

0x559a,	// (0x000239c4) bg_popup_call3_in_pane

0x55fc,	// (0x00023a26) popup_call3_audio_in_window_g1_ParamLimits

0x55fc,	// (0x00023a26) popup_call3_audio_in_window_g1

0x5614,	// (0x00023a3e) popup_call3_audio_in_window_g2_ParamLimits

0x5614,	// (0x00023a3e) popup_call3_audio_in_window_g2

0x562c,	// (0x00023a56) popup_call3_audio_in_window_g3_ParamLimits

0x562c,	// (0x00023a56) popup_call3_audio_in_window_g3

0x0003,

0xf5f7,	// (0x0002da21) popup_call3_audio_in_window_g_ParamLimits

0xf5f7,	// (0x0002da21) popup_call3_audio_in_window_g

0x5654,	// (0x00023a7e) popup_call3_audio_in_window_t1_ParamLimits

0x5654,	// (0x00023a7e) popup_call3_audio_in_window_t1

0x567c,	// (0x00023aa6) popup_call3_audio_in_window_t2_ParamLimits

0x567c,	// (0x00023aa6) popup_call3_audio_in_window_t2

0x56a4,	// (0x00023ace) popup_call3_audio_in_window_t3_ParamLimits

0x56a4,	// (0x00023ace) popup_call3_audio_in_window_t3

0x0002,

0xf600,	// (0x0002da2a) popup_call3_audio_in_window_t_ParamLimits

0xf600,	// (0x0002da2a) popup_call3_audio_in_window_t

0xa5b8,	// (0x000289e2) bg_popup_call3_rect_pane

0xc2a6,	// (0x0002a6d0) bg_popup_call3_rect_pane_g1

0xa4bd,	// (0x000288e7) bg_popup_call3_rect_pane_g2

0xc2ae,	// (0x0002a6d8) bg_popup_call3_rect_pane_g3

0xc2b6,	// (0x0002a6e0) bg_popup_call3_rect_pane_g4

0xc2be,	// (0x0002a6e8) bg_popup_call3_rect_pane_g5

0xc2c6,	// (0x0002a6f0) bg_popup_call3_rect_pane_g6

0xc2ce,	// (0x0002a6f8) bg_popup_call3_rect_pane_g7

0x4ac1,	// (0x00022eeb) mup_visualizer_osc_pane

0xb0e3,	// (0x0002950d) mup_visualizer_spec_pane

0x55ba,	// (0x000239e4) call3_video_qcif_pane_ParamLimits

0x55ba,	// (0x000239e4) call3_video_qcif_pane

0x55cc,	// (0x000239f6) call3_video_qcif_uncrop_pane_ParamLimits

0x55cc,	// (0x000239f6) call3_video_qcif_uncrop_pane

0x55da,	// (0x00023a04) call3_video_subqcif_pane_ParamLimits

0x55da,	// (0x00023a04) call3_video_subqcif_pane

0x55ec,	// (0x00023a16) call3_video_subqcif_uncrop_pane_ParamLimits

0x55ec,	// (0x00023a16) call3_video_subqcif_uncrop_pane

0x5644,	// (0x00023a6e) popup_call3_audio_in_window_g4_ParamLimits

0x5644,	// (0x00023a6e) popup_call3_audio_in_window_g4

0x5589,	// (0x000239b3) mup_spec_half_pane

0x5592,	// (0x000239bc) mup_spec_half_pane_cp

0xc50b,	// (0x0002a935) mup_osc_middle_pane

0xc514,	// (0x0002a93e) mup_visualizer_osc_pane_g1

0x556a,	// (0x00023994) mup_spec_bar_pane_ParamLimits

0x556a,	// (0x00023994) mup_spec_bar_pane

0xc4f8,	// (0x0002a922) mup_spec_bar_pane_g1

0xc502,	// (0x0002a92c) mup_spec_bar_pane_g2

0x0001,

0xf5eb,	// (0x0002da15) mup_spec_bar_pane_g

0x2b43,	// (0x00020f6d) aid_cale_week_size_cell_pane_ParamLimits

0x2b58,	// (0x00020f82) bg_cale_heading_pane_ParamLimits

0xa4fa,	// (0x00028924) bg_cale_pane_cp01_ParamLimits

0x2b78,	// (0x00020fa2) cale_week_corner_pane_ParamLimits

0x2b92,	// (0x00020fbc) cale_week_day_heading_pane_ParamLimits

0x2bb2,	// (0x00020fdc) cale_week_scroll_pane_g1_ParamLimits

0x2bcd,	// (0x00020ff7) cale_week_scroll_pane_g2_ParamLimits

0x2be0,	// (0x0002100a) cale_week_scroll_pane_g3_ParamLimits

0x2bf3,	// (0x0002101d) cale_week_scroll_pane_g4_ParamLimits

0x2c06,	// (0x00021030) cale_week_scroll_pane_g5_ParamLimits

0x2c19,	// (0x00021043) cale_week_scroll_pane_g6_ParamLimits

0x2c2c,	// (0x00021056) cale_week_scroll_pane_g7_ParamLimits

0x2c41,	// (0x0002106b) cale_week_scroll_pane_g8_ParamLimits

0x2c56,	// (0x00021080) cale_week_scroll_pane_g9_ParamLimits

0x2c69,	// (0x00021093) cale_week_scroll_pane_g10_ParamLimits

0x2c7c,	// (0x000210a6) cale_week_scroll_pane_g11_ParamLimits

0x2c8f,	// (0x000210b9) cale_week_scroll_pane_g12_ParamLimits

0x2ca6,	// (0x000210d0) cale_week_scroll_pane_g13_ParamLimits

0x2cc1,	// (0x000210eb) cale_week_scroll_pane_g14_ParamLimits

0x2cdc,	// (0x00021106) cale_week_scroll_pane_g15_ParamLimits

0xf195,	// (0x0002d5bf) cale_week_scroll_pane_g_ParamLimits

0x2d0c,	// (0x00021136) cale_week_time_pane_ParamLimits

0x2d21,	// (0x0002114b) grid_cale_week_pane_ParamLimits

0xa517,	// (0x00028941) listscroll_cale_week_pane_t1

0xa529,	// (0x00028953) scroll_pane_cp08_ParamLimits

0x390d,	// (0x00021d37) cale_month_corner_pane_ParamLimits

0xa8ea,	// (0x00028d14) cale_month_pane_t1

0x3dbf,	// (0x000221e9) cale_month_week_pane_ParamLimits

0xadc3,	// (0x000291ed) popup_call_status_window_g1_ParamLimits

0x45f9,	// (0x00022a23) popup_call_status_window_g2_ParamLimits

0x4605,	// (0x00022a2f) popup_call_status_window_g3_ParamLimits

0xf33b,	// (0x0002d765) popup_call_status_window_g_ParamLimits

0xac8e,	// (0x000290b8) aid_call2_pane

0x4d65,	// (0x0002318f) msg_header_pane_g1

0x4e47,	// (0x00023271) postcard_address2_pane_ParamLimits

0x4e47,	// (0x00023271) postcard_address2_pane

0x4e53,	// (0x0002327d) postcard_message2_pane_ParamLimits

0x4e53,	// (0x0002327d) postcard_message2_pane

0x5502,	// (0x0002392c) message2_row_pane_ParamLimits

0x5502,	// (0x0002392c) message2_row_pane

0x551d,	// (0x00023947) address2_row_pane_ParamLimits

0x551d,	// (0x00023947) address2_row_pane

0xc4c6,	// (0x0002a8f0) postcard_message2_row_pane_g1

0xc4ce,	// (0x0002a8f8) postcard_message2_row_pane_t1

0xc4c6,	// (0x0002a8f0) address2_row_pane_g1

0xc4ce,	// (0x0002a8f8) address2_row_pane_t1

0x2ec1,	// (0x000212eb) aid_size_cell_vorec

0xa0bc,	// (0x000284e6) main_rss_pane

0x5530,	// (0x0002395a) rss_list_single_pane_ParamLimits

0x5530,	// (0x0002395a) rss_list_single_pane

0xc4dc,	// (0x0002a906) rss_list_single_pane_t1

0xc4ea,	// (0x0002a914) rss_list_single_pane_t2

0x0001,

0xf5e6,	// (0x0002da10) rss_list_single_pane_t

0xa0bc,	// (0x000284e6) main_camera2_pane

0xa0bc,	// (0x000284e6) main_video2_pane

0x1595,	// (0x0001f9bf) cams_zoom_pane_cp2_ParamLimits

0x1595,	// (0x0001f9bf) cams_zoom_pane_cp2

0x15a1,	// (0x0001f9cb) image2_vga_pane_ParamLimits

0x15a1,	// (0x0001f9cb) image2_vga_pane

0x15b0,	// (0x0001f9da) main_camera2_pane_g1_ParamLimits

0x15b0,	// (0x0001f9da) main_camera2_pane_g1

0x15bc,	// (0x0001f9e6) main_camera2_pane_g2_ParamLimits

0x15bc,	// (0x0001f9e6) main_camera2_pane_g2

0x15c8,	// (0x0001f9f2) main_camera2_pane_g3_ParamLimits

0x15c8,	// (0x0001f9f2) main_camera2_pane_g3

0x15d4,	// (0x0001f9fe) main_camera2_pane_g4_ParamLimits

0x15d4,	// (0x0001f9fe) main_camera2_pane_g4

0x15e0,	// (0x0001fa0a) main_camera2_pane_g5_ParamLimits

0x15e0,	// (0x0001fa0a) main_camera2_pane_g5

0x15ec,	// (0x0001fa16) main_camera2_pane_g6_ParamLimits

0x15ec,	// (0x0001fa16) main_camera2_pane_g6

0x15f8,	// (0x0001fa22) main_camera2_pane_g7_ParamLimits

0x15f8,	// (0x0001fa22) main_camera2_pane_g7

0x1604,	// (0x0001fa2e) main_camera2_pane_g8_ParamLimits

0x1604,	// (0x0001fa2e) main_camera2_pane_g8

0x0008,

0xf607,	// (0x0002da31) main_camera2_pane_g_ParamLimits

0xf607,	// (0x0002da31) main_camera2_pane_g

0x161c,	// (0x0001fa46) main_camera2_pane_t1_ParamLimits

0x161c,	// (0x0001fa46) main_camera2_pane_t1

0x162e,	// (0x0001fa58) main_camera2_pane_t2_ParamLimits

0x162e,	// (0x0001fa58) main_camera2_pane_t2

0x1640,	// (0x0001fa6a) main_camera2_pane_t3_ParamLimits

0x1640,	// (0x0001fa6a) main_camera2_pane_t3

0x1652,	// (0x0001fa7c) main_camera2_pane_t4_ParamLimits

0x1652,	// (0x0001fa7c) main_camera2_pane_t4

0x0006,

0xf61a,	// (0x0002da44) main_camera2_pane_t_ParamLimits

0xf61a,	// (0x0002da44) main_camera2_pane_t

0x16b4,	// (0x0001fade) cams_zoom_pane_cp4_ParamLimits

0x16b4,	// (0x0001fade) cams_zoom_pane_cp4

0x16c4,	// (0x0001faee) image2_cif_pane_ParamLimits

0x16c4,	// (0x0001faee) image2_cif_pane

0x16d9,	// (0x0001fb03) image2_subqcif_pane_ParamLimits

0x16d9,	// (0x0001fb03) image2_subqcif_pane

0x16e8,	// (0x0001fb12) main_video2_pane_g1_ParamLimits

0x16e8,	// (0x0001fb12) main_video2_pane_g1

0x16fa,	// (0x0001fb24) main_video2_pane_g2_ParamLimits

0x16fa,	// (0x0001fb24) main_video2_pane_g2

0x170a,	// (0x0001fb34) main_video2_pane_g3_ParamLimits

0x170a,	// (0x0001fb34) main_video2_pane_g3

0x171a,	// (0x0001fb44) main_video2_pane_g4_ParamLimits

0x171a,	// (0x0001fb44) main_video2_pane_g4

0x172a,	// (0x0001fb54) main_video2_pane_g5_ParamLimits

0x172a,	// (0x0001fb54) main_video2_pane_g5

0x173a,	// (0x0001fb64) main_video2_pane_g6_ParamLimits

0x173a,	// (0x0001fb64) main_video2_pane_g6

0x0005,

0xf629,	// (0x0002da53) main_video2_pane_g_ParamLimits

0xf629,	// (0x0002da53) main_video2_pane_g

0x174c,	// (0x0001fb76) main_video2_pane_t1_ParamLimits

0x174c,	// (0x0001fb76) main_video2_pane_t1

0x1766,	// (0x0001fb90) main_video2_pane_t2_ParamLimits

0x1766,	// (0x0001fb90) main_video2_pane_t2

0x178c,	// (0x0001fbb6) main_video2_pane_t3_ParamLimits

0x178c,	// (0x0001fbb6) main_video2_pane_t3

0x0002,

0xf636,	// (0x0002da60) main_video2_pane_t_ParamLimits

0xf636,	// (0x0002da60) main_video2_pane_t

0x53a0,	// (0x000237ca) call_muted_g2

0x0001,

0xf5d8,	// (0x0002da02) call_muted_g

0xa0bc,	// (0x000284e6) main_mup2_pane

0xc557,	// (0x0002a981) main_mup2_pane_g1_ParamLimits

0xc557,	// (0x0002a981) main_mup2_pane_g1

0x56f7,	// (0x00023b21) main_mup2_pane_g2_ParamLimits

0x56f7,	// (0x00023b21) main_mup2_pane_g2

0x17db,	// (0x0001fc05) main_mup_pane_g13_cp1

0x17e3,	// (0x0001fc0d) mup_volume_pane_cp1

0x5717,	// (0x00023b41) main_mup2_pane_g4_ParamLimits

0x5717,	// (0x00023b41) main_mup2_pane_g4

0x572c,	// (0x00023b56) main_mup2_pane_g5_ParamLimits

0x572c,	// (0x00023b56) main_mup2_pane_g5

0x5741,	// (0x00023b6b) main_mup2_pane_g6_ParamLimits

0x5741,	// (0x00023b6b) main_mup2_pane_g6

0x5756,	// (0x00023b80) main_mup2_pane_g7_ParamLimits

0x5756,	// (0x00023b80) main_mup2_pane_g7

0x0006,

0xf63d,	// (0x0002da67) main_mup2_pane_g_ParamLimits

0xf63d,	// (0x0002da67) main_mup2_pane_g

0x5772,	// (0x00023b9c) main_mup2_pane_t1_ParamLimits

0x5772,	// (0x00023b9c) main_mup2_pane_t1

0x5789,	// (0x00023bb3) main_mup2_pane_t2_ParamLimits

0x5789,	// (0x00023bb3) main_mup2_pane_t2

0x57a0,	// (0x00023bca) main_mup2_pane_t3_ParamLimits

0x57a0,	// (0x00023bca) main_mup2_pane_t3

0x57b7,	// (0x00023be1) main_mup2_pane_t4_ParamLimits

0x57b7,	// (0x00023be1) main_mup2_pane_t4

0x57d1,	// (0x00023bfb) main_mup2_pane_t5_ParamLimits

0x57d1,	// (0x00023bfb) main_mup2_pane_t5

0x57eb,	// (0x00023c15) main_mup2_pane_t6_ParamLimits

0x57eb,	// (0x00023c15) main_mup2_pane_t6

0x0005,

0xf64c,	// (0x0002da76) main_mup2_pane_t_ParamLimits

0xf64c,	// (0x0002da76) main_mup2_pane_t

0x5823,	// (0x00023c4d) mup2_visualizer_pane_ParamLimits

0x5823,	// (0x00023c4d) mup2_visualizer_pane

0x5859,	// (0x00023c83) mup_progress_pane_cp_ParamLimits

0x5859,	// (0x00023c83) mup_progress_pane_cp

0x17c6,	// (0x0001fbf0) mup_volume_pane_cp_ParamLimits

0x17c6,	// (0x0001fbf0) mup_volume_pane_cp

0x5870,	// (0x00023c9a) mup2_visualizer_pane_g1_ParamLimits

0x5870,	// (0x00023c9a) mup2_visualizer_pane_g1

0xc54b,	// (0x0002a975) mup2_visualizer_pane_g2_ParamLimits

0xc54b,	// (0x0002a975) mup2_visualizer_pane_g2

0x5885,	// (0x00023caf) mup2_visualizer_pane_g3_ParamLimits

0x5885,	// (0x00023caf) mup2_visualizer_pane_g3

0x0002,

0xf659,	// (0x0002da83) mup2_visualizer_pane_g_ParamLimits

0xf659,	// (0x0002da83) mup2_visualizer_pane_g

0xb38b,	// (0x000297b5) aid_size_cell_fmradio

0x139e,	// (0x0001f7c8) aid_height_parent_landcape

0xa748,	// (0x00028b72) wml_content_pane_cp

0xa750,	// (0x00028b7a) wml_tabs_pane

0xa759,	// (0x00028b83) popup_wml_miniature_window

0xa761,	// (0x00028b8b) scroll_pane_cp021

0xa775,	// (0x00028b9f) wml_content_pane_comp8

0xa0bc,	// (0x000284e6) bg_popup_sub_pane_cp05

0xc575,	// (0x0002a99f) popup_wml_miniature_window_g1

0xc57d,	// (0x0002a9a7) wml_miniature_view_pane

0x5893,	// (0x00023cbd) aid_size_wml_view

0x589b,	// (0x00023cc5) wml_miniature_view_pane_g1

0x58a4,	// (0x00023cce) wml_miniature_view_pane_g2

0x58ad,	// (0x00023cd7) wml_miniature_view_pane_g3

0x58b5,	// (0x00023cdf) wml_miniature_view_pane_g4

0x58bd,	// (0x00023ce7) wml_miniature_view_pane_g5

0x58c5,	// (0x00023cef) wml_miniature_view_pane_g6

0x58cd,	// (0x00023cf7) wml_miniature_view_pane_g7

0x58d5,	// (0x00023cff) wml_miniature_view_pane_g8

0x0007,

0xf660,	// (0x0002da8a) wml_miniature_view_pane_g

0xc557,	// (0x0002a981) background_graphic_ParamLimits

0xc557,	// (0x0002a981) background_graphic

0xc585,	// (0x0002a9af) wml_tabs_2_pane

0xc58e,	// (0x0002a9b8) wml_tabs_3_pane_ParamLimits

0xc58e,	// (0x0002a9b8) wml_tabs_3_pane

0xc5a0,	// (0x0002a9ca) wml_tabs_4_pane_ParamLimits

0xc5a0,	// (0x0002a9ca) wml_tabs_4_pane

0xc5b6,	// (0x0002a9e0) wml_tabs_5_pane_ParamLimits

0xc5b6,	// (0x0002a9e0) wml_tabs_5_pane

0xc5d0,	// (0x0002a9fa) wml_tabs_pane_g2_ParamLimits

0xc5d0,	// (0x0002a9fa) wml_tabs_pane_g2

0xc5e4,	// (0x0002aa0e) wml_tabs_pane_g3_ParamLimits

0xc5e4,	// (0x0002aa0e) wml_tabs_pane_g3

0x58dd,	// (0x00023d07) wml_tabs_2_active_pane_ParamLimits

0x58dd,	// (0x00023d07) wml_tabs_2_active_pane

0x58ed,	// (0x00023d17) wml_tabs_2_passive_pane_ParamLimits

0x58ed,	// (0x00023d17) wml_tabs_2_passive_pane

0x58fd,	// (0x00023d27) wml_tabs_3_active_pane_cp_ParamLimits

0x58fd,	// (0x00023d27) wml_tabs_3_active_pane_cp

0x590e,	// (0x00023d38) wml_tabs_3_passive_pane_ParamLimits

0x590e,	// (0x00023d38) wml_tabs_3_passive_pane

0x591f,	// (0x00023d49) wml_tabs_3_passive_pane_cp_ParamLimits

0x591f,	// (0x00023d49) wml_tabs_3_passive_pane_cp

0x5930,	// (0x00023d5a) tabs_4_active_pane

0x5938,	// (0x00023d62) tabs_4_passive_pane

0x5940,	// (0x00023d6a) tabs_4_passive_pane_cp

0x5948,	// (0x00023d72) tabs_4_passive_pane_cp2

0x527b,	// (0x000236a5) aid_height_text

0x4a8e,	// (0x00022eb8) mup_volume_cont_pane_ParamLimits

0x4a8e,	// (0x00022eb8) mup_volume_cont_pane

0x2818,	// (0x00020c42) aid_size_cell_pinb

0x2822,	// (0x00020c4c) aid_size_list_pinb

0x5842,	// (0x00023c6c) mup2_volume_cont_pane_ParamLimits

0x5842,	// (0x00023c6c) mup2_volume_cont_pane

0x17b2,	// (0x0001fbdc) mup2_volume_cont_pane_g1_ParamLimits

0x17b2,	// (0x0001fbdc) mup2_volume_cont_pane_g1

0x0cdf,	// (0x0001f109) aid_size_cell_touch_ParamLimits

0x0cdf,	// (0x0001f109) aid_size_cell_touch

0x0f67,	// (0x0001f391) touch_pane_ParamLimits

0x0f67,	// (0x0001f391) touch_pane

0x0f5d,	// (0x0001f387) main_rss2_pane

0xc601,	// (0x0002aa2b) listscroll_rss2_pane

0xc60a,	// (0x0002aa34) rss2_navigation_pane

0xc612,	// (0x0002aa3c) list_rss2_pane

0xadeb,	// (0x00029215) scroll_pane_cp22

0xc61a,	// (0x0002aa44) rss2_navigation_pane_g1

0xc623,	// (0x0002aa4d) rss2_navigation_pane_g2

0xc62b,	// (0x0002aa55) rss2_navigation_pane_g3

0x0002,

0xf671,	// (0x0002da9b) rss2_navigation_pane_g

0xc633,	// (0x0002aa5d) rss2_navigation_pane_t1

0x5950,	// (0x00023d7a) rss2_list_single_pane_ParamLimits

0x5950,	// (0x00023d7a) rss2_list_single_pane

0xc641,	// (0x0002aa6b) rss2_list_single_pane_t2

0xc64f,	// (0x0002aa79) rss2_list_single_pane_t3_ParamLimits

0xc64f,	// (0x0002aa79) rss2_list_single_pane_t3

0xc66c,	// (0x0002aa96) rss2_list_single_pane_t4

0x43ad,	// (0x000227d7) smil_status_pane_g1

0x13b5,	// (0x0001f7df) main_image2_pane_ParamLimits

0x13b5,	// (0x0001f7df) main_image2_pane

0x1610,	// (0x0001fa3a) main_camera2_pane_g9_ParamLimits

0x1610,	// (0x0001fa3a) main_camera2_pane_g9

0x1664,	// (0x0001fa8e) main_camera2_pane_t5_ParamLimits

0x1664,	// (0x0001fa8e) main_camera2_pane_t5

0x1676,	// (0x0001faa0) main_camera2_pane_t6_ParamLimits

0x1676,	// (0x0001faa0) main_camera2_pane_t6

0x5981,	// (0x00023dab) main_image2_pane_g1_ParamLimits

0x5981,	// (0x00023dab) main_image2_pane_g1

0x501b,	// (0x00023445) smil2_video_pane_ParamLimits

0x501b,	// (0x00023445) smil2_video_pane

0x0d13,	// (0x0001f13d) aid_zoom_text_primary_cp

0x0f04,	// (0x0001f32e) popup_preview_fixed_window

0xa6b1,	// (0x00028adb) im_reading_pane_g1

0x155a,	// (0x0001f984) cams2_bc_adjust_pane_cp_ParamLimits

0x155a,	// (0x0001f984) cams2_bc_adjust_pane_cp

0x16a6,	// (0x0001fad0) cams2_bc_adjust_pane_ParamLimits

0x16a6,	// (0x0001fad0) cams2_bc_adjust_pane

0xd8ce,	// (0x0002bcf8) cams2_bc_adjust_pane_g1

0x17eb,	// (0x0001fc15) cams2_slider_pane

0x17f4,	// (0x0001fc1e) cams2_slider_pane_g1

0x17fd,	// (0x0001fc27) cams2_slider_pane_g2

0x0006,

0xf678,	// (0x0002daa2) cams2_slider_pane_g

0x0fd8,	// (0x0001f402) calc_display_pane_ParamLimits

0x0ff6,	// (0x0001f420) calc_paper_pane_ParamLimits

0x1012,	// (0x0001f43c) grid_calc_pane_ParamLimits

0x1309,	// (0x0001f733) popup_clock_digital_window_t1_ParamLimits

0xb328,	// (0x00029752) main_image_pane_t1

0x0fbe,	// (0x0001f3e8) aid_size_cell_calc_ParamLimits

0x0fbe,	// (0x0001f3e8) aid_size_cell_calc

0x13e6,	// (0x0001f810) popup_blid_sat_info2_window_ParamLimits

0x13e6,	// (0x0001f810) popup_blid_sat_info2_window

0xc682,	// (0x0002aaac) aid_size_cell_blid

0xc68a,	// (0x0002aab4) bg_popup_window_pane_cp07

0xc6ad,	// (0x0002aad7) grid_popup_blid_pane

0xc6b7,	// (0x0002aae1) heading_pane_cp05_ParamLimits

0xc6b7,	// (0x0002aae1) heading_pane_cp05

0xc781,	// (0x0002abab) cell_popup_blid_pane_ParamLimits

0xc781,	// (0x0002abab) cell_popup_blid_pane

0xc7a5,	// (0x0002abcf) cell_popup_blid_pane_g1

0xc7ad,	// (0x0002abd7) cell_popup_blid_pane_t1

0x5808,	// (0x00023c32) mup2_indicator_pane_ParamLimits

0x5808,	// (0x00023c32) mup2_indicator_pane

0xa5b8,	// (0x000289e2) mup2_visualizer_osc_pane

0xc563,	// (0x0002a98d) mup2_visualizer_spec_pane_ParamLimits

0xc563,	// (0x0002a98d) mup2_visualizer_spec_pane

0x598d,	// (0x00023db7) mup2_spec_half_pane

0x5996,	// (0x00023dc0) mup2_spec_half_pane_cp

0x59a0,	// (0x00023dca) mup2_spec_bar_pane_ParamLimits

0x59a0,	// (0x00023dca) mup2_spec_bar_pane

0xc4f8,	// (0x0002a922) mup2_spec_bar_pane_g1

0xc502,	// (0x0002a92c) mup2_spec_bar_pane_g2

0x0001,

0xf5eb,	// (0x0002da15) mup2_spec_bar_pane_g

0x59bf,	// (0x00023de9) mup2_osc_middle_pane

0xc514,	// (0x0002a93e) mup2_visualizer_osc_pane_g1

0x9cc9,	// (0x000280f3) popup_number_entry_window_t1_ParamLimits

0x9cdc,	// (0x00028106) popup_number_entry_window_t2_ParamLimits

0x9cee,	// (0x00028118) popup_number_entry_window_t3_ParamLimits

0x2755,	// (0x00020b7f) popup_number_entry_window_t5_ParamLimits

0x2755,	// (0x00020b7f) popup_number_entry_window_t5

0xf0af,	// (0x0002d4d9) popup_number_entry_window_t_ParamLimits

0x9d00,	// (0x0002812a) text_title_cp2_ParamLimits

0x1348,	// (0x0001f772) aid_hotspot_pointer_text2_pane

0x1392,	// (0x0001f7bc) main_viewer_pane_g9_ParamLimits

0x1392,	// (0x0001f7bc) main_viewer_pane_g9

0xa8ea,	// (0x00028d14) cale_month_pane_t1_ParamLimits

0xa927,	// (0x00028d51) bg_cale_pane_ParamLimits

0xa93f,	// (0x00028d69) list_cale_pane_ParamLimits

0xa950,	// (0x00028d7a) listscroll_cale_day_pane_t1

0xa962,	// (0x00028d8c) scroll_pane_cp09_ParamLimits

0x4ac9,	// (0x00022ef3) main_mup_eq_pane_t1_ParamLimits

0x4ac9,	// (0x00022ef3) main_mup_eq_pane_t1

0x4ae3,	// (0x00022f0d) main_mup_eq_pane_t2_ParamLimits

0x4ae3,	// (0x00022f0d) main_mup_eq_pane_t2

0x4afd,	// (0x00022f27) main_mup_eq_pane_t3_ParamLimits

0x4afd,	// (0x00022f27) main_mup_eq_pane_t3

0x4b15,	// (0x00022f3f) main_mup_eq_pane_t4_ParamLimits

0x4b15,	// (0x00022f3f) main_mup_eq_pane_t4

0x4b2d,	// (0x00022f57) main_mup_eq_pane_t5_ParamLimits

0x4b2d,	// (0x00022f57) main_mup_eq_pane_t5

0x4b45,	// (0x00022f6f) main_mup_eq_pane_t6_ParamLimits

0x4b45,	// (0x00022f6f) main_mup_eq_pane_t6

0x4b59,	// (0x00022f83) main_mup_eq_pane_t7_ParamLimits

0x4b59,	// (0x00022f83) main_mup_eq_pane_t7

0x4b6d,	// (0x00022f97) main_mup_eq_pane_t8_ParamLimits

0x4b6d,	// (0x00022f97) main_mup_eq_pane_t8

0x4b83,	// (0x00022fad) main_mup_eq_pane_t9_ParamLimits

0x4b83,	// (0x00022fad) main_mup_eq_pane_t9

0x4b9b,	// (0x00022fc5) main_mup_eq_pane_t10_ParamLimits

0x4b9b,	// (0x00022fc5) main_mup_eq_pane_t10

0x0009,

0xf43a,	// (0x0002d864) main_mup_eq_pane_t_ParamLimits

0xf43a,	// (0x0002d864) main_mup_eq_pane_t

0x4c58,	// (0x00023082) mup_equalizer_pane_cp5_ParamLimits

0x4c6e,	// (0x00023098) mup_equalizer_pane_cp6_ParamLimits

0x4c86,	// (0x000230b0) mup_equalizer_pane_cp7_ParamLimits

0x0f5d,	// (0x0001f387) main_gallery_pane

0xc51d,	// (0x0002a947) smil2_volume_pane

0xc525,	// (0x0002a94f) smil_status_volume_pane_g1_ParamLimits

0xc538,	// (0x0002a962) smil_status_volume_pane_g2_ParamLimits

0x152a,	// (0x0001f954) smil_status_volume_pane_g3_ParamLimits

0xf5f0,	// (0x0002da1a) smil_status_volume_pane_g_ParamLimits

0xc68a,	// (0x0002aab4) bg_popup_window_pane_cp07_ParamLimits

0xc698,	// (0x0002aac2) blid_firmament_pane

0x59c8,	// (0x00023df2) aid_size_cell_gallery_ParamLimits

0x59c8,	// (0x00023df2) aid_size_cell_gallery

0x59d6,	// (0x00023e00) grid_gallery_pane_ParamLimits

0x59d6,	// (0x00023e00) grid_gallery_pane

0x59e6,	// (0x00023e10) cell_gallery_pane_ParamLimits

0x59e6,	// (0x00023e10) cell_gallery_pane

0xc7bb,	// (0x0002abe5) bg_cell_gallery_focus_pane_ParamLimits

0xc7bb,	// (0x0002abe5) bg_cell_gallery_focus_pane

0xc7cd,	// (0x0002abf7) cell_gallery_pane_g1_ParamLimits

0xc7cd,	// (0x0002abf7) cell_gallery_pane_g1

0x5a34,	// (0x00023e5e) cell_gallery_pane_g2_ParamLimits

0x5a34,	// (0x00023e5e) cell_gallery_pane_g2

0x5a41,	// (0x00023e6b) cell_gallery_pane_g3_ParamLimits

0x5a41,	// (0x00023e6b) cell_gallery_pane_g3

0xc7d9,	// (0x0002ac03) cell_gallery_pane_g4_ParamLimits

0xc7d9,	// (0x0002ac03) cell_gallery_pane_g4

0x0003,

0xf69e,	// (0x0002dac8) cell_gallery_pane_g_ParamLimits

0xf69e,	// (0x0002dac8) cell_gallery_pane_g

0xc7e5,	// (0x0002ac0f) bg_cell_gallery_focus_pane_g1

0xc7ed,	// (0x0002ac17) bg_cell_gallery_focus_pane_g2

0xc7f5,	// (0x0002ac1f) bg_cell_gallery_focus_pane_g3

0xc7fd,	// (0x0002ac27) bg_cell_gallery_focus_pane_g4

0xc805,	// (0x0002ac2f) bg_cell_gallery_focus_pane_g5

0xc80d,	// (0x0002ac37) bg_cell_gallery_focus_pane_g6

0xc815,	// (0x0002ac3f) bg_cell_gallery_focus_pane_g7

0xc81d,	// (0x0002ac47) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6a7,	// (0x0002dad1) bg_cell_gallery_focus_pane_g

0xc825,	// (0x0002ac4f) aid_firma_cardinal

0xc839,	// (0x0002ac63) blid_firmament_pane_t1

0xc850,	// (0x0002ac7a) blid_firmament_pane_t2

0xc867,	// (0x0002ac91) blid_firmament_pane_t3

0xc87e,	// (0x0002aca8) blid_firmament_pane_t4

0x0003,

0xf6b8,	// (0x0002dae2) blid_firmament_pane_t

0xc895,	// (0x0002acbf) blid_sat_info_pane

0xc8a5,	// (0x0002accf) blid_sat_info_pane_g1

0xc8a5,	// (0x0002accf) blid_sat_info_pane_g2

0x0001,

0xf6c1,	// (0x0002daeb) blid_sat_info_pane_g

0xc8af,	// (0x0002acd9) blid_sat_info_pane_t1

0xc8bd,	// (0x0002ace7) smil2_volume_content_pane

0xc8c6,	// (0x0002acf0) smil2_volume_pane_g1

0xa57d,	// (0x000289a7) smil2_volume_content_pane_g1

0xc8ce,	// (0x0002acf8) smil2_volume_content_pane_g2

0xc8d7,	// (0x0002ad01) smil2_volume_content_pane_g3

0xc8e0,	// (0x0002ad0a) smil2_volume_content_pane_g4

0xc8e9,	// (0x0002ad13) smil2_volume_content_pane_g5

0xc8f2,	// (0x0002ad1c) smil2_volume_content_pane_g6

0xc8fb,	// (0x0002ad25) smil2_volume_content_pane_g7

0xc904,	// (0x0002ad2e) smil2_volume_content_pane_g8

0xc90d,	// (0x0002ad37) smil2_volume_content_pane_g9

0xc916,	// (0x0002ad40) smil2_volume_content_pane_g10

0x0009,

0xf6c6,	// (0x0002daf0) smil2_volume_content_pane_g

0x2da2,	// (0x000211cc) cale_week_day_heading_pane_t1_ParamLimits

0x2dbd,	// (0x000211e7) cale_week_day_heading_pane_t2_ParamLimits

0x2dd8,	// (0x00021202) cale_week_day_heading_pane_t3_ParamLimits

0x2df3,	// (0x0002121d) cale_week_day_heading_pane_t4_ParamLimits

0x2e0e,	// (0x00021238) cale_week_day_heading_pane_t5_ParamLimits

0x2e29,	// (0x00021253) cale_week_day_heading_pane_t6_ParamLimits

0x2e44,	// (0x0002126e) cale_week_day_heading_pane_t7_ParamLimits

0xf1b6,	// (0x0002d5e0) cale_week_day_heading_pane_t_ParamLimits

0xa546,	// (0x00028970) bg_cale_side_pane_ParamLimits

0x1169,	// (0x0001f593) cale_week_time_pane_t1_ParamLimits

0x1183,	// (0x0001f5ad) cale_week_time_pane_t2_ParamLimits

0x119d,	// (0x0001f5c7) cale_week_time_pane_t3_ParamLimits

0x11b7,	// (0x0001f5e1) cale_week_time_pane_t4_ParamLimits

0x11d1,	// (0x0001f5fb) cale_week_time_pane_t5_ParamLimits

0x11eb,	// (0x0001f615) cale_week_time_pane_t6_ParamLimits

0x1209,	// (0x0001f633) cale_week_time_pane_t7_ParamLimits

0x122b,	// (0x0001f655) cale_week_time_pane_t8_ParamLimits

0xf1c5,	// (0x0002d5ef) cale_week_time_pane_t_ParamLimits

0x2e5f,	// (0x00021289) cell_cale_week_pane_g2_ParamLimits

0xa546,	// (0x00028970) bg_cale_side_pane_cp01_ParamLimits

0x41b0,	// (0x000225da) cale_month_week_pane_t1_ParamLimits

0x41c9,	// (0x000225f3) cale_month_week_pane_t2_ParamLimits

0x41e2,	// (0x0002260c) cale_month_week_pane_t3_ParamLimits

0x41fb,	// (0x00022625) cale_month_week_pane_t4_ParamLimits

0x4214,	// (0x0002263e) cale_month_week_pane_t5_ParamLimits

0x4235,	// (0x0002265f) cale_month_week_pane_t6_ParamLimits

0xf29a,	// (0x0002d6c4) cale_month_week_pane_t_ParamLimits

0x1259,	// (0x0001f683) cell_cale_month_pane_g1_ParamLimits

0x0f5d,	// (0x0001f387) main_cale_event_viewer_pane

0x9c9f,	// (0x000280c9) listscroll_cale_event_viewer_pane

0xc91f,	// (0x0002ad49) list_cale_ev_pane

0xc927,	// (0x0002ad51) scroll_pane_cp023

0xc933,	// (0x0002ad5d) field_cale_ev_pane_ParamLimits

0xc933,	// (0x0002ad5d) field_cale_ev_pane

0xc951,	// (0x0002ad7b) field_cale_ev_content_pane_ParamLimits

0xc951,	// (0x0002ad7b) field_cale_ev_content_pane

0xc95d,	// (0x0002ad87) field_cale_ev_pane_g1_ParamLimits

0xc95d,	// (0x0002ad87) field_cale_ev_pane_g1

0xc969,	// (0x0002ad93) field_cale_ev_pane_g2_ParamLimits

0xc969,	// (0x0002ad93) field_cale_ev_pane_g2

0xc981,	// (0x0002adab) field_cale_ev_pane_g3_ParamLimits

0xc981,	// (0x0002adab) field_cale_ev_pane_g3

0x0002,

0xf6db,	// (0x0002db05) field_cale_ev_pane_g_ParamLimits

0xf6db,	// (0x0002db05) field_cale_ev_pane_g

0xc999,	// (0x0002adc3) field_cale_ev_pane_t1_ParamLimits

0xc999,	// (0x0002adc3) field_cale_ev_pane_t1

0xc9b0,	// (0x0002adda) field_cale_ev_content_pane_t1_ParamLimits

0xc9b0,	// (0x0002adda) field_cale_ev_content_pane_t1

0xb195,	// (0x000295bf) bg_button_pane_cp01

0x2b33,	// (0x00020f5d) listscroll_cale_week_pane_ParamLimits

0xa4f1,	// (0x0002891b) popup_toolbar_window_cp01

0xa517,	// (0x00028941) listscroll_cale_week_pane_t1_ParamLimits

0x2b33,	// (0x00020f5d) listscroll_cale_day_pane_ParamLimits

0xa4f1,	// (0x0002891b) popup_toolbar_window_cp02

0xa950,	// (0x00028d7a) listscroll_cale_day_pane_t1_ParamLimits

0x2b33,	// (0x00020f5d) main_cale_month_pane_ParamLimits

0x14ed,	// (0x0001f917) popup_toolbar_window_cp03_ParamLimits

0x14ed,	// (0x0001f917) popup_toolbar_window_cp03

0x4f31,	// (0x0002335b) main_image_pane_g2_ParamLimits

0x4f31,	// (0x0002335b) main_image_pane_g2

0x4f3d,	// (0x00023367) main_image_pane_g3_ParamLimits

0x4f3d,	// (0x00023367) main_image_pane_g3

0x0002,

0xf4cc,	// (0x0002d8f6) main_image_pane_g_ParamLimits

0xf4cc,	// (0x0002d8f6) main_image_pane_g

0xb328,	// (0x00029752) main_image_pane_t1_ParamLimits

0x4f49,	// (0x00023373) main_image_pane_t2_ParamLimits

0x4f49,	// (0x00023373) main_image_pane_t2

0x4f5b,	// (0x00023385) main_image_pane_t3_ParamLimits

0x4f5b,	// (0x00023385) main_image_pane_t3

0x4f6d,	// (0x00023397) main_image_pane_t4_ParamLimits

0x4f6d,	// (0x00023397) main_image_pane_t4

0x0003,

0xf4d3,	// (0x0002d8fd) main_image_pane_t_ParamLimits

0xf4d3,	// (0x0002d8fd) main_image_pane_t

0x4f7f,	// (0x000233a9) popup_image_details_window_cp01

0x4f89,	// (0x000233b3) popup_toobar_trans_pane_cp01_ParamLimits

0x4f89,	// (0x000233b3) popup_toobar_trans_pane_cp01

0x143d,	// (0x0001f867) popup_image_details_window_ParamLimits

0x143d,	// (0x0001f867) popup_image_details_window

0x144b,	// (0x0001f875) popup_image_focus_window

0x154c,	// (0x0001f976) camera2_autofocus_pane_ParamLimits

0x154c,	// (0x0001f976) camera2_autofocus_pane

0x9c9f,	// (0x000280c9) bg_popup_sub_pane_cp06

0xc9ce,	// (0x0002adf8) popup_image_focus_window_g1

0xc9d6,	// (0x0002ae00) popup_image_focus_window_g2

0xc9de,	// (0x0002ae08) popup_image_focus_window_g3

0xc9e6,	// (0x0002ae10) popup_image_focus_window_g4

0x0003,

0xf6e2,	// (0x0002db0c) popup_image_focus_window_g

0xc9ee,	// (0x0002ae18) popup_image_focus_window_t1

0xc9fc,	// (0x0002ae26) popup_image_focus_window_t2

0xca0c,	// (0x0002ae36) popup_image_focus_window_t3

0x0002,

0xf6eb,	// (0x0002db15) popup_image_focus_window_t

0xca1a,	// (0x0002ae44) camera2_autofocus_pane_g1

0xa56f,	// (0x00028999) bg_tb_trans_pane_cp01

0xca28,	// (0x0002ae52) popup_image_details_window_g1

0xca3b,	// (0x0002ae65) popup_image_details_window_g2

0x0002,

0xf6fd,	// (0x0002db27) popup_image_details_window_g

0xca64,	// (0x0002ae8e) popup_image_details_window_t1

0xca76,	// (0x0002aea0) popup_image_details_window_t2

0xca8f,	// (0x0002aeb9) popup_image_details_window_t3

0xcaa3,	// (0x0002aecd) popup_image_details_window_t4

0xcabe,	// (0x0002aee8) popup_image_details_window_t5

0x0004,

0xf704,	// (0x0002db2e) popup_image_details_window_t

0xa3c8,	// (0x000287f2) bg_calc_paper_pane_ParamLimits

0x0f5d,	// (0x0001f387) grid_highlight_pane_cp013

0x103e,	// (0x0001f468) list_calc_pane_ParamLimits

0x1050,	// (0x0001f47a) scroll_pane_cp024

0xa3dc,	// (0x00028806) bg_calc_display_pane_ParamLimits

0x1058,	// (0x0001f482) calc_display_pane_t1_ParamLimits

0x106d,	// (0x0001f497) calc_display_pane_t2_ParamLimits

0x1082,	// (0x0001f4ac) calc_display_pane_t3_ParamLimits

0xf136,	// (0x0002d560) calc_display_pane_t_ParamLimits

0x10eb,	// (0x0001f515) cell_calc_pane_g2

0x0001,

0xf153,	// (0x0002d57d) cell_calc_pane_g

0x10f4,	// (0x0001f51e) cell_calc_pane_t1

0xa43b,	// (0x00028865) grid_highlight_pane_cp02_ParamLimits

0xa451,	// (0x0002887b) toolbar_button_pane_cp01_ParamLimits

0xa451,	// (0x0002887b) toolbar_button_pane_cp01

0xb36d,	// (0x00029797) temp_image_control_pane_ParamLimits

0xb36d,	// (0x00029797) temp_image_control_pane

0x13b5,	// (0x0001f7df) main_mp3_pane

0xcad8,	// (0x0002af02) temp_image_control_pane_g1_ParamLimits

0xcad8,	// (0x0002af02) temp_image_control_pane_g1

0xcae6,	// (0x0002af10) temp_image_control_pane_g2_ParamLimits

0xcae6,	// (0x0002af10) temp_image_control_pane_g2

0xcaf8,	// (0x0002af22) temp_image_control_pane_g3_ParamLimits

0xcaf8,	// (0x0002af22) temp_image_control_pane_g3

0x5a7e,	// (0x00023ea8) temp_image_control_pane_g4_ParamLimits

0x5a7e,	// (0x00023ea8) temp_image_control_pane_g4

0x0003,

0xf70f,	// (0x0002db39) temp_image_control_pane_g_ParamLimits

0xf70f,	// (0x0002db39) temp_image_control_pane_g

0xcad8,	// (0x0002af02) main_mp3_pane_g1

0x5a8f,	// (0x00023eb9) main_mp3_pane_g2

0x0007,

0xf718,	// (0x0002db42) main_mp3_pane_g

0xcb3b,	// (0x0002af65) main_mp3_pane_t1

0xa5c0,	// (0x000289ea) main_camera_pane_g8_ParamLimits

0xa5c0,	// (0x000289ea) main_camera_pane_g8

0x30e2,	// (0x0002150c) main_video_pane_g7_ParamLimits

0x30e2,	// (0x0002150c) main_video_pane_g7

0x1694,	// (0x0001fabe) main_camera2_pane_t7_ParamLimits

0x1694,	// (0x0001fabe) main_camera2_pane_t7

0xa708,	// (0x00028b32) scroll_pane_cp025_ParamLimits

0xa708,	// (0x00028b32) scroll_pane_cp025

0xa71c,	// (0x00028b46) scroll_pane_cp026_ParamLimits

0xa71c,	// (0x00028b46) scroll_pane_cp026

0xa72b,	// (0x00028b55) wml_content_pane_ParamLimits

0x0f5d,	// (0x0001f387) main_touch_calib_pane

0x5b33,	// (0x00023f5d) main_touch_calib_pane_g1

0x5b3f,	// (0x00023f69) main_touch_calib_pane_g2

0x5b4b,	// (0x00023f75) main_touch_calib_pane_g3

0x5b57,	// (0x00023f81) main_touch_calib_pane_g4

0x0003,

0xf736,	// (0x0002db60) main_touch_calib_pane_g

0x5b63,	// (0x00023f8d) main_touch_calib_pane_t1

0x5b7c,	// (0x00023fa6) main_touch_calib_pane_t2

0x0004,

0xf73f,	// (0x0002db69) main_touch_calib_pane_t

0xaec7,	// (0x000292f1) mup_progress_pane_cp02

0xaefc,	// (0x00029326) navi_pane_g1

0xafb7,	// (0x000293e1) navi_pane_mp_t3

0x13b5,	// (0x0001f7df) main_mp3_pane_ParamLimits

0x54b6,	// (0x000238e0) navi_pane_ParamLimits

0xcad8,	// (0x0002af02) main_mp3_pane_g1_ParamLimits

0x5a8f,	// (0x00023eb9) main_mp3_pane_g2_ParamLimits

0x5a9b,	// (0x00023ec5) main_mp3_pane_g3_ParamLimits

0x5a9b,	// (0x00023ec5) main_mp3_pane_g3

0x5aa7,	// (0x00023ed1) main_mp3_pane_g4_ParamLimits

0x5aa7,	// (0x00023ed1) main_mp3_pane_g4

0xcb08,	// (0x0002af32) main_mp3_pane_g5_ParamLimits

0xcb08,	// (0x0002af32) main_mp3_pane_g5

0xcb16,	// (0x0002af40) main_mp3_pane_g6_ParamLimits

0xcb16,	// (0x0002af40) main_mp3_pane_g6

0xcb23,	// (0x0002af4d) main_mp3_pane_g7_ParamLimits

0xcb23,	// (0x0002af4d) main_mp3_pane_g7

0xcb2f,	// (0x0002af59) main_mp3_pane_g8_ParamLimits

0xcb2f,	// (0x0002af59) main_mp3_pane_g8

0xf718,	// (0x0002db42) main_mp3_pane_g_ParamLimits

0x5ab3,	// (0x00023edd) main_mp3_pane_t2

0x5ac3,	// (0x00023eed) main_mp3_pane_t3

0xcb49,	// (0x0002af73) main_mp3_pane_t4

0xcb57,	// (0x0002af81) main_mp3_pane_t5

0x0005,

0xf729,	// (0x0002db53) main_mp3_pane_t

0xcb65,	// (0x0002af8f) mup_progress_pane_cp01

0x0d13,	// (0x0001f13d) aid_zoom_text_secondary2

0xc91f,	// (0x0002ad49) list_cale_ev2_pane

0xc927,	// (0x0002ad51) scroll_pane_cp023_ParamLimits

0x5bd7,	// (0x00024001) field_cale_ev2_pane_ParamLimits

0x5bd7,	// (0x00024001) field_cale_ev2_pane

0x5c00,	// (0x0002402a) field_cale_ev2_pane_g1_ParamLimits

0x5c00,	// (0x0002402a) field_cale_ev2_pane_g1

0x5c0c,	// (0x00024036) field_cale_ev2_pane_g2_ParamLimits

0x5c0c,	// (0x00024036) field_cale_ev2_pane_g2

0x5c24,	// (0x0002404e) field_cale_ev2_pane_g3_ParamLimits

0x5c24,	// (0x0002404e) field_cale_ev2_pane_g3

0x0003,

0xf74a,	// (0x0002db74) field_cale_ev2_pane_g_ParamLimits

0xf74a,	// (0x0002db74) field_cale_ev2_pane_g

0x5c3c,	// (0x00024066) field_cale_ev2_pane_t1_ParamLimits

0x5c3c,	// (0x00024066) field_cale_ev2_pane_t1

0x5c53,	// (0x0002407d) field_cale_ev2_pane_t2_ParamLimits

0x5c53,	// (0x0002407d) field_cale_ev2_pane_t2

0x0001,

0xf753,	// (0x0002db7d) field_cale_ev2_pane_t_ParamLimits

0xf753,	// (0x0002db7d) field_cale_ev2_pane_t

0x4e11,	// (0x0002323b) main_postcard_pane_g5_ParamLimits

0x4e11,	// (0x0002323b) main_postcard_pane_g5

0x4e1f,	// (0x00023249) main_postcard_pane_g6_ParamLimits

0x4e1f,	// (0x00023249) main_postcard_pane_g6

0x2f2c,	// (0x00021356) camera2_autofocus_pane_cp_ParamLimits

0x2f2c,	// (0x00021356) camera2_autofocus_pane_cp

0x13b5,	// (0x0001f7df) main_mup3_pane

0x5c87,	// (0x000240b1) main_mup3_pane_g1_ParamLimits

0x5c87,	// (0x000240b1) main_mup3_pane_g1

0x5ca8,	// (0x000240d2) main_mup3_pane_g2_ParamLimits

0x5ca8,	// (0x000240d2) main_mup3_pane_g2

0x5d20,	// (0x0002414a) main_mup3_pane_g3_ParamLimits

0x5d20,	// (0x0002414a) main_mup3_pane_g3

0x5d63,	// (0x0002418d) main_mup3_pane_g4_ParamLimits

0x5d63,	// (0x0002418d) main_mup3_pane_g4

0x5da6,	// (0x000241d0) main_mup3_pane_g5_ParamLimits

0x5da6,	// (0x000241d0) main_mup3_pane_g5

0x5de9,	// (0x00024213) main_mup3_pane_g6_ParamLimits

0x5de9,	// (0x00024213) main_mup3_pane_g6

0xcb99,	// (0x0002afc3) main_mup3_pane_g7_ParamLimits

0xcb99,	// (0x0002afc3) main_mup3_pane_g7

0x0007,

0xf763,	// (0x0002db8d) main_mup3_pane_g_ParamLimits

0xf763,	// (0x0002db8d) main_mup3_pane_g

0x5e5f,	// (0x00024289) main_mup3_pane_t1_ParamLimits

0x5e5f,	// (0x00024289) main_mup3_pane_t1

0x5ece,	// (0x000242f8) main_mup3_pane_t2_ParamLimits

0x5ece,	// (0x000242f8) main_mup3_pane_t2

0x5f97,	// (0x000243c1) main_mup3_pane_t4_ParamLimits

0x5f97,	// (0x000243c1) main_mup3_pane_t4

0x5fe5,	// (0x0002440f) main_mup3_pane_t5_ParamLimits

0x5fe5,	// (0x0002440f) main_mup3_pane_t5

0x6095,	// (0x000244bf) main_mup3_pane_t6_ParamLimits

0x6095,	// (0x000244bf) main_mup3_pane_t6

0x0005,

0xf774,	// (0x0002db9e) main_mup3_pane_t_ParamLimits

0xf774,	// (0x0002db9e) main_mup3_pane_t

0x6141,	// (0x0002456b) mup3_progress_pane_ParamLimits

0x6141,	// (0x0002456b) mup3_progress_pane

0x61bf,	// (0x000245e9) popup_mup3_control_window_ParamLimits

0x61bf,	// (0x000245e9) popup_mup3_control_window

0xcba7,	// (0x0002afd1) popup_mup3_text_window

0x61d8,	// (0x00024602) mup3_progress_pane_t1

0x61f7,	// (0x00024621) mup3_progress_pane_t2

0xcbaf,	// (0x0002afd9) mup3_progress_pane_t3

0x0002,

0xf781,	// (0x0002dbab) mup3_progress_pane_t

0xcbcc,	// (0x0002aff6) mup_progress_pane_cp03

0x9c9f,	// (0x000280c9) bg_tb_trans_pane_cp04

0x6216,	// (0x00024640) mup3_volume_pane

0x621e,	// (0x00024648) popup_mup3_control_window_g1

0x6227,	// (0x00024651) mup3_volume_pane_g1

0x6230,	// (0x0002465a) mup3_volume_pane_g2

0x6239,	// (0x00024663) mup3_volume_pane_g3

0x0002,

0xf788,	// (0x0002dbb2) mup3_volume_pane_g

0x9c9f,	// (0x000280c9) bg_tb_trans_pane_cp03

0xcbdc,	// (0x0002b006) popup_mup3_text_window_g1

0xcbe4,	// (0x0002b00e) popup_mup3_text_window_t1

0xa424,	// (0x0002884e) list_calc_item_pane_g1_ParamLimits

0xc5f8,	// (0x0002aa22) mup_volume_pane_cp_g1

0x5b95,	// (0x00023fbf) main_touch_calib_pane_t3

0x5bab,	// (0x00023fd5) main_touch_calib_pane_t4

0x5bc1,	// (0x00023feb) main_touch_calib_pane_t5

0x0ccb,	// (0x0001f0f5) aid_cell_size_toolbar2

0x0cd3,	// (0x0001f0fd) aid_popup3_width_pane

0x0d13,	// (0x0001f13d) aid_zoom_text_msg_primary

0x2f0b,	// (0x00021335) vorec_t7

0xa3e8,	// (0x00028812) bg_calc_paper_pane_g1_ParamLimits

0xa3f4,	// (0x0002881e) bg_calc_paper_pane_g2_ParamLimits

0xa400,	// (0x0002882a) bg_calc_paper_pane_g3_ParamLimits

0xa40c,	// (0x00028836) bg_calc_paper_pane_g4_ParamLimits

0xa418,	// (0x00028842) bg_calc_paper_pane_g5_ParamLimits

0x29df,	// (0x00020e09) bg_calc_paper_pane_g6_ParamLimits

0x29f0,	// (0x00020e1a) bg_calc_paper_pane_g7_ParamLimits

0x2a01,	// (0x00020e2b) bg_calc_paper_pane_g8_ParamLimits

0xf13d,	// (0x0002d567) bg_calc_paper_pane_g_ParamLimits

0x2a12,	// (0x00020e3c) calc_bg_paper_pane_g9_ParamLimits

0x3013,	// (0x0002143d) image_qvga_pane_ParamLimits

0x3013,	// (0x0002143d) image_qvga_pane

0xa317,	// (0x00028741) bg_popup_sub_pane_cp04_ParamLimits

0xb2a4,	// (0x000296ce) popup_mup_playback_window_g1_ParamLimits

0xb2b0,	// (0x000296da) popup_mup_playback_window_t1_ParamLimits

0xb2c5,	// (0x000296ef) popup_mup_playback_window_t2_ParamLimits

0xf4c7,	// (0x0002d8f1) popup_mup_playback_window_t_ParamLimits

0x5708,	// (0x00023b32) main_mup2_pane_g3_ParamLimits

0x5708,	// (0x00023b32) main_mup2_pane_g3

0x33df,	// (0x00021809) popup_toolbar_window_cp04

0xb6a7,	// (0x00029ad1) popup_call2_audio_second_window_g3_ParamLimits

0xb6a7,	// (0x00029ad1) popup_call2_audio_second_window_g3

0xbab1,	// (0x00029edb) popup_call2_audio_first_window_g4_ParamLimits

0xbab1,	// (0x00029edb) popup_call2_audio_first_window_g4

0xc130,	// (0x0002a55a) popup_call2_audio_in_window_g4_ParamLimits

0xc130,	// (0x0002a55a) popup_call2_audio_in_window_g4

0x4f24,	// (0x0002334e) aid_area_sk_bg_cut_ParamLimits

0x4f24,	// (0x0002334e) aid_area_sk_bg_cut

0xb2da,	// (0x00029704) aid_area_sk_bg_cut_2_ParamLimits

0xb2da,	// (0x00029704) aid_area_sk_bg_cut_2

0x5a24,	// (0x00023e4e) aid_placing_details_win

0x5a2c,	// (0x00023e56) aid_placing_details_win_2

0xca1a,	// (0x0002ae44) camera2_autofocus_pane_g1_ParamLimits

0x0ef5,	// (0x0001f31f) popup_fixed_preview_cale_window_ParamLimits

0x0ef5,	// (0x0001f31f) popup_fixed_preview_cale_window

0xb035,	// (0x0002945f) navi_slider_pane_g3

0xb03e,	// (0x00029468) navi_slider_pane_g4

0xb047,	// (0x00029471) navi_slider_pane_g5

0xb035,	// (0x0002945f) navi_slider_pane_g6

0x132f,	// (0x0001f759) navi_slider_pane_g7

0xb15a,	// (0x00029584) mup_scale_pane_g3

0xb163,	// (0x0002958d) mup_scale_pane_g4

0xb16c,	// (0x00029596) mup_scale_pane_g5

0x4c9e,	// (0x000230c8) mup_scale_pane_g6

0x4ca7,	// (0x000230d1) mup_scale_pane_g7

0xb035,	// (0x0002945f) cams2_slider_pane_g3

0xc67a,	// (0x0002aaa4) cams2_slider_pane_g4

0x1806,	// (0x0001fc30) cams2_slider_pane_g5

0xb035,	// (0x0002945f) cams2_slider_pane_g6

0x180e,	// (0x0001fc38) cams2_slider_pane_g7

0xc8a5,	// (0x0002accf) camera2_autofocus_pane_cp_g1

0xc491,	// (0x0002a8bb) bg_popup_preview_window_pane_cp02_ParamLimits

0xc491,	// (0x0002a8bb) bg_popup_preview_window_pane_cp02

0xcbf2,	// (0x0002b01c) list_fp_cale_pane_ParamLimits

0xcbf2,	// (0x0002b01c) list_fp_cale_pane

0xcbfe,	// (0x0002b028) popup_fixed_preview_cale_window_t1_ParamLimits

0xcbfe,	// (0x0002b028) popup_fixed_preview_cale_window_t1

0x6242,	// (0x0002466c) popup_fixed_preview_cale_window_t2_ParamLimits

0x6242,	// (0x0002466c) popup_fixed_preview_cale_window_t2

0x6257,	// (0x00024681) popup_fixed_preview_cale_window_t3_ParamLimits

0x6257,	// (0x00024681) popup_fixed_preview_cale_window_t3

0x0002,

0xf78f,	// (0x0002dbb9) popup_fixed_preview_cale_window_t_ParamLimits

0xf78f,	// (0x0002dbb9) popup_fixed_preview_cale_window_t

0x626c,	// (0x00024696) list_single_fp_cale_pane_ParamLimits

0x626c,	// (0x00024696) list_single_fp_cale_pane

0xcc1c,	// (0x0002b046) list_single_fp_cale_pane_g1_ParamLimits

0xcc1c,	// (0x0002b046) list_single_fp_cale_pane_g1

0xcc28,	// (0x0002b052) list_single_fp_cale_pane_g2_ParamLimits

0xcc28,	// (0x0002b052) list_single_fp_cale_pane_g2

0x0002,

0xf796,	// (0x0002dbc0) list_single_fp_cale_pane_g_ParamLimits

0xf796,	// (0x0002dbc0) list_single_fp_cale_pane_g

0xcc41,	// (0x0002b06b) list_single_fp_cale_pane_t1_ParamLimits

0xcc41,	// (0x0002b06b) list_single_fp_cale_pane_t1

0xcc53,	// (0x0002b07d) list_single_fp_cale_pane_t2_ParamLimits

0xcc53,	// (0x0002b07d) list_single_fp_cale_pane_t2

0x0001,

0xf79d,	// (0x0002dbc7) list_single_fp_cale_pane_t_ParamLimits

0xf79d,	// (0x0002dbc7) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x0f5d,	// (0x0001f387) main_dialer_pane

0x627f,	// (0x000246a9) aid_cell_size_keypad

0x6289,	// (0x000246b3) dialer_ne_pane

0x6293,	// (0x000246bd) grid_dialer_command_1_pane

0x629b,	// (0x000246c5) grid_dialer_command_2_pane

0x62a3,	// (0x000246cd) grid_dialer_keypad_pane

0x62b5,	// (0x000246df) bg_popup_call_pane_cp06_ParamLimits

0x62b5,	// (0x000246df) bg_popup_call_pane_cp06

0x62c1,	// (0x000246eb) dialer_ne_clear_pane_ParamLimits

0x62c1,	// (0x000246eb) dialer_ne_clear_pane

0xcc86,	// (0x0002b0b0) dialer_ne_pane_g1

0xcc8e,	// (0x0002b0b8) dialer_ne_pane_t1_ParamLimits

0xcc8e,	// (0x0002b0b8) dialer_ne_pane_t1

0x62cd,	// (0x000246f7) dialer_ne_pane_t2_ParamLimits

0x62cd,	// (0x000246f7) dialer_ne_pane_t2

0x62ea,	// (0x00024714) dialer_ne_pane_t3_ParamLimits

0x62ea,	// (0x00024714) dialer_ne_pane_t3

0x0002,

0xf7a2,	// (0x0002dbcc) dialer_ne_pane_t_ParamLimits

0xf7a2,	// (0x0002dbcc) dialer_ne_pane_t

0x630e,	// (0x00024738) dialer_ne_pane_t3_copy1_ParamLimits

0x630e,	// (0x00024738) dialer_ne_pane_t3_copy1

0x6332,	// (0x0002475c) cell_dialer_keypad_pane_ParamLimits

0x6332,	// (0x0002475c) cell_dialer_keypad_pane

0x6349,	// (0x00024773) cell_dialer_command_1_pane_ParamLimits

0x6349,	// (0x00024773) cell_dialer_command_1_pane

0x635f,	// (0x00024789) cell_dialer_command_2_pane_ParamLimits

0x635f,	// (0x00024789) cell_dialer_command_2_pane

0xcca0,	// (0x0002b0ca) bg_button_pane_cp02_ParamLimits

0xcca0,	// (0x0002b0ca) bg_button_pane_cp02

0x636e,	// (0x00024798) cell_dialer_keypad_pane_g1_ParamLimits

0x636e,	// (0x00024798) cell_dialer_keypad_pane_g1

0xcca0,	// (0x0002b0ca) bg_button_pane_cp03_ParamLimits

0xcca0,	// (0x0002b0ca) bg_button_pane_cp03

0x6383,	// (0x000247ad) cell_dialer_command_1_pane_g1_ParamLimits

0x6383,	// (0x000247ad) cell_dialer_command_1_pane_g1

0xccac,	// (0x0002b0d6) bg_button_pane_cp04

0x6397,	// (0x000247c1) cell_dialer_command_2_pane_g1

0xa5b8,	// (0x000289e2) bg_button_pane_cp06

0xccb4,	// (0x0002b0de) dialer_ne_clear_pane_g1

0xaf08,	// (0x00029332) navi_pane_g2

0xaf36,	// (0x00029360) navi_pane_g3

0x0002,

0xf3ca,	// (0x0002d7f4) navi_pane_g

0xafc5,	// (0x000293ef) navi_pane_mv_g2

0xafec,	// (0x00029416) navi_pane_mv_g5

0x483a,	// (0x00022c64) navi_pane_mv_t1

0xa3dc,	// (0x00028806) main_clock2_pane

0xd17c,	// (0x0002b5a6) main_clock2_list_pane_ParamLimits

0xd17c,	// (0x0002b5a6) main_clock2_list_pane

0x63f3,	// (0x0002481d) main_clock2_pane_t1_ParamLimits

0x63f3,	// (0x0002481d) main_clock2_pane_t1

0x6421,	// (0x0002484b) main_clock2_pane_t2_ParamLimits

0x6421,	// (0x0002484b) main_clock2_pane_t2

0x0004,

0xf7ae,	// (0x0002dbd8) main_clock2_pane_t_ParamLimits

0xf7ae,	// (0x0002dbd8) main_clock2_pane_t

0x6486,	// (0x000248b0) popup_clock_analogue_window_cp03_ParamLimits

0x6486,	// (0x000248b0) popup_clock_analogue_window_cp03

0x64a4,	// (0x000248ce) popup_clock_digital_window_cp02_ParamLimits

0x64a4,	// (0x000248ce) popup_clock_digital_window_cp02

0x6519,	// (0x00024943) main_clock2_list_single_pane_ParamLimits

0x6519,	// (0x00024943) main_clock2_list_single_pane

0xa5b8,	// (0x000289e2) list_highlight_pane_cp05

0xccf2,	// (0x0002b11c) main_clock2_list_single_pane_t1

0x33df,	// (0x00021809) popup_toolbar_window_cp04_ParamLimits

0x5a4e,	// (0x00023e78) camera2_autofocus_pane_g2_ParamLimits

0x5a4e,	// (0x00023e78) camera2_autofocus_pane_g2

0x5a5a,	// (0x00023e84) camera2_autofocus_pane_g3_ParamLimits

0x5a5a,	// (0x00023e84) camera2_autofocus_pane_g3

0x5a66,	// (0x00023e90) camera2_autofocus_pane_g4_ParamLimits

0x5a66,	// (0x00023e90) camera2_autofocus_pane_g4

0x5a72,	// (0x00023e9c) camera2_autofocus_pane_g5_ParamLimits

0x5a72,	// (0x00023e9c) camera2_autofocus_pane_g5

0x0004,

0xf6f2,	// (0x0002db1c) camera2_autofocus_pane_g_ParamLimits

0xf6f2,	// (0x0002db1c) camera2_autofocus_pane_g

0xcb79,	// (0x0002afa3) camera2_autofocus_pane_cp_g2

0xcb81,	// (0x0002afab) camera2_autofocus_pane_cp_g3

0xcb89,	// (0x0002afb3) camera2_autofocus_pane_cp_g4

0xcb91,	// (0x0002afbb) camera2_autofocus_pane_cp_g5

0x0004,

0xf758,	// (0x0002db82) camera2_autofocus_pane_cp_g

0x62ad,	// (0x000246d7) popup_dialer_spcha_window

0x9c9f,	// (0x000280c9) bg_popup_sub_pane_cp07

0xcd00,	// (0x0002b12a) list_spcha_pane

0xcd08,	// (0x0002b132) list_single_spcha_pane_ParamLimits

0xcd08,	// (0x0002b132) list_single_spcha_pane

0x9c9f,	// (0x000280c9) list_highlight_pane_cp06

0xcd19,	// (0x0002b143) list_single_spcha_pane_t1

0xbeda,	// (0x0002a304) popup_call2_audio_out_window_g4_ParamLimits

0xbeda,	// (0x0002a304) popup_call2_audio_out_window_g4

0x0f5d,	// (0x0001f387) main_imed2_pane

0x1453,	// (0x0001f87d) popup_imed_adjust2_window

0x1466,	// (0x0001f890) popup_imed_trans_window_ParamLimits

0x1466,	// (0x0001f890) popup_imed_trans_window

0xc6e3,	// (0x0002ab0d) popup_blid_sat_info2_window_t1

0xc6f1,	// (0x0002ab1b) popup_blid_sat_info2_window_t2

0x000a,

0xf687,	// (0x0002dab1) popup_blid_sat_info2_window_t

0x652b,	// (0x00024955) aid_size_cell_colour_35

0x6545,	// (0x0002496f) aid_size_cell_colour_112

0x655c,	// (0x00024986) aid_size_cell_effect

0xa56f,	// (0x00028999) bg_tb_trans_pane_cp02

0xadb7,	// (0x000291e1) heading_imed_pane

0x6576,	// (0x000249a0) listscroll_imed_pane

0xcd27,	// (0x0002b151) heading_imed_pane_g1

0xcd2f,	// (0x0002b159) heading_imed_pane_t1

0xcd3d,	// (0x0002b167) grid_imed_colour_35_pane_ParamLimits

0xcd3d,	// (0x0002b167) grid_imed_colour_35_pane

0x6582,	// (0x000249ac) grid_imed_effect_pane

0xcd54,	// (0x0002b17e) list_imed_aspect_pane

0x6592,	// (0x000249bc) scroll_pane_cp027_ParamLimits

0x6592,	// (0x000249bc) scroll_pane_cp027

0x659e,	// (0x000249c8) cell_imed_effect_pane_ParamLimits

0x659e,	// (0x000249c8) cell_imed_effect_pane

0xcd5c,	// (0x0002b186) cell_imed_colour_pane_ParamLimits

0xcd5c,	// (0x0002b186) cell_imed_colour_pane

0xcd9e,	// (0x0002b1c8) cell_imed_colour_pane_g1_ParamLimits

0xcd9e,	// (0x0002b1c8) cell_imed_colour_pane_g1

0xcdaf,	// (0x0002b1d9) hgihlgiht_grid_pane_cp016_ParamLimits

0xcdaf,	// (0x0002b1d9) hgihlgiht_grid_pane_cp016

0x65b6,	// (0x000249e0) cell_imed_effect_pane_g1

0x65be,	// (0x000249e8) grid_highlight_pane_cp017

0xcdc0,	// (0x0002b1ea) list_imed_single_pane_ParamLimits

0xcdc0,	// (0x0002b1ea) list_imed_single_pane

0x9c9f,	// (0x000280c9) list_highlight_pane_cp07

0xcdd5,	// (0x0002b1ff) list_imed_aspect_pane_comp1_t1

0xc49d,	// (0x0002a8c7) bg_tb_trans_pane_cp05

0xcdf7,	// (0x0002b221) popup_imed_adjust2_window_g1

0xce1e,	// (0x0002b248) popup_imed_adjust2_window_t1

0xce36,	// (0x0002b260) slider_imed_adjust_pane

0xce4a,	// (0x0002b274) slider_imed_adjust_pane_g1

0xce5a,	// (0x0002b284) slider_imed_adjust_pane_g2

0xce6a,	// (0x0002b294) slider_imed_adjust_pane_g3

0xce7b,	// (0x0002b2a5) slider_imed_adjust_pane_g4

0x0003,

0xf7cb,	// (0x0002dbf5) slider_imed_adjust_pane_g

0x65c7,	// (0x000249f1) aid_size_cell_clipart2

0x65d3,	// (0x000249fd) grid_imed_clipart_pane

0xce8c,	// (0x0002b2b6) scroll_pane_cp031

0x65dd,	// (0x00024a07) cell_imed_clipart_pane_ParamLimits

0x65dd,	// (0x00024a07) cell_imed_clipart_pane

0x65ff,	// (0x00024a29) cell_imed_clipart_pane_g1

0x9c9f,	// (0x000280c9) grid_highlight_pane_cp014

0x63d5,	// (0x000247ff) main_clock2_pane_g1_ParamLimits

0x63d5,	// (0x000247ff) main_clock2_pane_g1

0x64c0,	// (0x000248ea) aid_call2_pane_cp10

0x64d2,	// (0x000248fc) aid_call_pane_cp10

0xae69,	// (0x00029293) popup_clock_analogue_window_cp10_g1

0xae69,	// (0x00029293) popup_clock_analogue_window_cp10_g2

0x64e4,	// (0x0002490e) popup_clock_analogue_window_cp10_g3

0x64e4,	// (0x0002490e) popup_clock_analogue_window_cp10_g4

0xae69,	// (0x00029293) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7b9,	// (0x0002dbe3) popup_clock_analogue_window_cp10_g

0x64fa,	// (0x00024924) popup_clock_analogue_window_cp10_t1

0x1817,	// (0x0001fc41) clock_digital_number_pane_cp10_ParamLimits

0x1817,	// (0x0001fc41) clock_digital_number_pane_cp10

0x1831,	// (0x0001fc5b) clock_digital_number_pane_cp11_ParamLimits

0x1831,	// (0x0001fc5b) clock_digital_number_pane_cp11

0x184b,	// (0x0001fc75) clock_digital_number_pane_cp12_ParamLimits

0x184b,	// (0x0001fc75) clock_digital_number_pane_cp12

0x1865,	// (0x0001fc8f) clock_digital_number_pane_cp13_ParamLimits

0x1865,	// (0x0001fc8f) clock_digital_number_pane_cp13

0x187f,	// (0x0001fca9) clock_digital_separator_pane_cp10_ParamLimits

0x187f,	// (0x0001fca9) clock_digital_separator_pane_cp10

0x1899,	// (0x0001fcc3) popup_clock_digital_window_cp02_t1_ParamLimits

0x1899,	// (0x0001fcc3) popup_clock_digital_window_cp02_t1

0xa30f,	// (0x00028739) clock_digital_number_pane_cp10_g1

0xa30f,	// (0x00028739) clock_digital_number_pane_cp10_g2

0x0001,

0xf7d4,	// (0x0002dbfe) clock_digital_number_pane_cp10_g

0xa30f,	// (0x00028739) clock_digital_separator_pane_cp10_g1

0xa30f,	// (0x00028739) clock_digital_separator_pane_g2_cp10

0xaff4,	// (0x0002941e) navi_pane_vded_g4

0xaffd,	// (0x00029427) navi_pane_vded_g5

0xb006,	// (0x00029430) navi_pane_vded_t1

0x0f5d,	// (0x0001f387) main_vded_pane

0x6608,	// (0x00024a32) main_vded_pane_g1

0x6614,	// (0x00024a3e) main_vded_pane_g2

0x661e,	// (0x00024a48) main_vded_pane_g3

0x0002,

0xf7d9,	// (0x0002dc03) main_vded_pane_g

0x6628,	// (0x00024a52) main_vded_pane_t1

0x6636,	// (0x00024a60) main_vded_pane_t2

0x0001,

0xf7e0,	// (0x0002dc0a) main_vded_pane_t

0x6644,	// (0x00024a6e) vded_slider_pane

0x664e,	// (0x00024a78) vded_video_pane

0xce94,	// (0x0002b2be) vded_video_pane_g1

0x6658,	// (0x00024a82) vded_video_pane_g2

0xc8a5,	// (0x0002accf) vded_video_pane_g3

0x0002,

0xf7e5,	// (0x0002dc0f) vded_video_pane_g

0xce9e,	// (0x0002b2c8) vded_slider_pane_g1

0xc5f8,	// (0x0002aa22) vded_slider_pane_g2

0xcea7,	// (0x0002b2d1) vded_slider_pane_g3

0xceb0,	// (0x0002b2da) vded_slider_pane_g4

0xceb9,	// (0x0002b2e3) vded_slider_pane_g5

0x0004,

0xf7ec,	// (0x0002dc16) vded_slider_pane_g

0x61b1,	// (0x000245db) mup3_rocker_pane_ParamLimits

0x61b1,	// (0x000245db) mup3_rocker_pane

0x6661,	// (0x00024a8b) mup3_control_keys_pane_g1

0x6669,	// (0x00024a93) mup3_control_keys_pane_g2

0x6671,	// (0x00024a9b) mup3_control_keys_pane_g3

0x6679,	// (0x00024aa3) mup3_control_keys_pane_g4

0x0003,

0xf7f7,	// (0x0002dc21) mup3_control_keys_pane_g

0x0f1d,	// (0x0001f347) popup_toolbar2_fixed_window_cp01_ParamLimits

0x0f1d,	// (0x0001f347) popup_toolbar2_fixed_window_cp01

0x61cb,	// (0x000245f5) popup_toolbar2_fixed_window_cp02_ParamLimits

0x61cb,	// (0x000245f5) popup_toolbar2_fixed_window_cp02

0xb819,	// (0x00029c43) popup_call2_audio_second_window_t4_ParamLimits

0xb819,	// (0x00029c43) popup_call2_audio_second_window_t4

0xbd47,	// (0x0002a171) popup_call2_audio_first_window_t6_ParamLimits

0xbd47,	// (0x0002a171) popup_call2_audio_first_window_t6

0xbfdd,	// (0x0002a407) popup_call2_audio_out_window_t6_ParamLimits

0xbfdd,	// (0x0002a407) popup_call2_audio_out_window_t6

0x0f5d,	// (0x0001f387) main_vitu_pane

0x6689,	// (0x00024ab3) aid_size_cell_itu_ParamLimits

0x6689,	// (0x00024ab3) aid_size_cell_itu

0xd17c,	// (0x0002b5a6) bg_popup_window_pane_cp08_ParamLimits

0xd17c,	// (0x0002b5a6) bg_popup_window_pane_cp08

0x6697,	// (0x00024ac1) field_vitu_entry_pane_ParamLimits

0x6697,	// (0x00024ac1) field_vitu_entry_pane

0x66a6,	// (0x00024ad0) grid_vitu_function_pane_ParamLimits

0x66a6,	// (0x00024ad0) grid_vitu_function_pane

0x66b6,	// (0x00024ae0) grid_vitu_itu_pane_ParamLimits

0x66b6,	// (0x00024ae0) grid_vitu_itu_pane

0x66c6,	// (0x00024af0) cell_vitu_itu_pane_ParamLimits

0x66c6,	// (0x00024af0) cell_vitu_itu_pane

0x66db,	// (0x00024b05) cell_vitu_function_pane_ParamLimits

0x66db,	// (0x00024b05) cell_vitu_function_pane

0xa56f,	// (0x00028999) bg_popup_sub_pane_cp08_ParamLimits

0xa56f,	// (0x00028999) bg_popup_sub_pane_cp08

0x66ed,	// (0x00024b17) field_vitu_entry_pane_t1_ParamLimits

0x66ed,	// (0x00024b17) field_vitu_entry_pane_t1

0xceda,	// (0x0002b304) field_vitu_entry_pane_t2_ParamLimits

0xceda,	// (0x0002b304) field_vitu_entry_pane_t2

0x0001,

0xf805,	// (0x0002dc2f) field_vitu_entry_pane_t_ParamLimits

0xf805,	// (0x0002dc2f) field_vitu_entry_pane_t

0xcef7,	// (0x0002b321) bg_button_pane_cp05_ParamLimits

0xcef7,	// (0x0002b321) bg_button_pane_cp05

0x6709,	// (0x00024b33) cell_vitu_itu_pane_g1

0x6721,	// (0x00024b4b) cell_vitu_itu_pane_t1_ParamLimits

0x6721,	// (0x00024b4b) cell_vitu_itu_pane_t1

0x6733,	// (0x00024b5d) cell_vitu_itu_pane_t2_ParamLimits

0x6733,	// (0x00024b5d) cell_vitu_itu_pane_t2

0x0002,

0xf80a,	// (0x0002dc34) cell_vitu_itu_pane_t_ParamLimits

0xf80a,	// (0x0002dc34) cell_vitu_itu_pane_t

0xcf05,	// (0x0002b32f) bg_button_pane_cp07

0x6768,	// (0x00024b92) cell_vitu_function_pane_g1

0x1036,	// (0x0001f460) main_calc_pane_g1

0x0d07,	// (0x0001f131) aid_visual_content_pane

0x0f5d,	// (0x0001f387) main_vradio_pane

0x6771,	// (0x00024b9b) main_vradio_pane_g1_ParamLimits

0x6771,	// (0x00024b9b) main_vradio_pane_g1

0xcf0f,	// (0x0002b339) main_vradio_pane_g2_ParamLimits

0xcf0f,	// (0x0002b339) main_vradio_pane_g2

0x0001,

0xf811,	// (0x0002dc3b) main_vradio_pane_g_ParamLimits

0xf811,	// (0x0002dc3b) main_vradio_pane_g

0x6781,	// (0x00024bab) main_vradio_pane_t1_ParamLimits

0x6781,	// (0x00024bab) main_vradio_pane_t1

0x6793,	// (0x00024bbd) main_vradio_pane_t2_ParamLimits

0x6793,	// (0x00024bbd) main_vradio_pane_t2

0xcf1c,	// (0x0002b346) main_vradio_pane_t3_ParamLimits

0xcf1c,	// (0x0002b346) main_vradio_pane_t3

0x0002,

0xf816,	// (0x0002dc40) main_vradio_pane_t_ParamLimits

0xf816,	// (0x0002dc40) main_vradio_pane_t

0x67a5,	// (0x00024bcf) vradio_rocker_control_pane_ParamLimits

0x67a5,	// (0x00024bcf) vradio_rocker_control_pane

0x67b1,	// (0x00024bdb) vradio_station_info_pane_ParamLimits

0x67b1,	// (0x00024bdb) vradio_station_info_pane

0xcf30,	// (0x0002b35a) vradio_frequency_info_pane_ParamLimits

0xcf30,	// (0x0002b35a) vradio_frequency_info_pane

0xc8a5,	// (0x0002accf) vradio_station_info_pane_g1

0xcf3f,	// (0x0002b369) vradio_station_info_pane_t1_ParamLimits

0xcf3f,	// (0x0002b369) vradio_station_info_pane_t1

0xcf61,	// (0x0002b38b) vradio_station_info_pane_t2_ParamLimits

0xcf61,	// (0x0002b38b) vradio_station_info_pane_t2

0x0001,

0xf81d,	// (0x0002dc47) vradio_station_info_pane_t_ParamLimits

0xf81d,	// (0x0002dc47) vradio_station_info_pane_t

0xcf73,	// (0x0002b39d) vradio_tuning_pane

0xcf7b,	// (0x0002b3a5) vradio_rocker_control_pane_g1

0xcf83,	// (0x0002b3ad) vradio_rocker_control_pane_g2

0xcf8b,	// (0x0002b3b5) vradio_rocker_control_pane_g3

0xcf93,	// (0x0002b3bd) vradio_rocker_control_pane_g4

0xcf9b,	// (0x0002b3c5) vradio_rocker_control_pane_g5

0x0004,

0xf822,	// (0x0002dc4c) vradio_rocker_control_pane_g

0x67c0,	// (0x00024bea) vradio_frequency_info_pane_g1

0xcfa3,	// (0x0002b3cd) vradio_frequency_info_pane_t1_ParamLimits

0xcfa3,	// (0x0002b3cd) vradio_frequency_info_pane_t1

0x67ca,	// (0x00024bf4) vradio_tuning_pane_g1

0x67d3,	// (0x00024bfd) vradio_tuning_pane_t1

0x0d23,	// (0x0001f14d) area_side_right_pane_ParamLimits

0x0d23,	// (0x0001f14d) area_side_right_pane

0xc458,	// (0x0002a882) status_small_pane_g1

0xc460,	// (0x0002a88a) status_small_pane_g2

0xc469,	// (0x0002a893) status_small_pane_g3

0xc472,	// (0x0002a89c) status_small_pane_g4

0x0003,

0xf5dd,	// (0x0002da07) status_small_pane_g

0xc47b,	// (0x0002a8a5) status_small_pane_t1

0x0f5d,	// (0x0001f387) main_video3_pane

0xcfb7,	// (0x0002b3e1) cams_zoom_vslider_pane

0xcfbf,	// (0x0002b3e9) image3_wide_pane_ParamLimits

0xcfbf,	// (0x0002b3e9) image3_wide_pane

0xcfd9,	// (0x0002b403) image3_wide_small_pane

0xcfe5,	// (0x0002b40f) main_video3_pane_g1_ParamLimits

0xcfe5,	// (0x0002b40f) main_video3_pane_g1

0xd001,	// (0x0002b42b) main_video3_pane_g2_ParamLimits

0xd001,	// (0x0002b42b) main_video3_pane_g2

0x0001,

0xf82d,	// (0x0002dc57) main_video3_pane_g_ParamLimits

0xf82d,	// (0x0002dc57) main_video3_pane_g

0xd01d,	// (0x0002b447) main_video3_pane_t1_ParamLimits

0xd01d,	// (0x0002b447) main_video3_pane_t1

0xd048,	// (0x0002b472) main_video3_pane_t2_ParamLimits

0xd048,	// (0x0002b472) main_video3_pane_t2

0xd073,	// (0x0002b49d) main_video3_pane_t3_ParamLimits

0xd073,	// (0x0002b49d) main_video3_pane_t3

0x0002,

0xf832,	// (0x0002dc5c) main_video3_pane_t_ParamLimits

0xf832,	// (0x0002dc5c) main_video3_pane_t

0xd0a0,	// (0x0002b4ca) cams_zoom_vslider_pane_g1

0xd0a9,	// (0x0002b4d3) cams_zoom_vslider_pane_g2

0x0001,

0xf839,	// (0x0002dc63) cams_zoom_vslider_pane_g

0xd0b1,	// (0x0002b4db) small_slider_vertical_pane

0xc8a5,	// (0x0002accf) small_slider_vertical_pane_g1

0xc8a5,	// (0x0002accf) small_slider_vertical_pane_g2

0xd0b9,	// (0x0002b4e3) small_slider_vertical_pane_g3

0x0002,

0xf83e,	// (0x0002dc68) small_slider_vertical_pane_g

0x0f5d,	// (0x0001f387) main_hwr_training_pane

0xd0c2,	// (0x0002b4ec) hwr_training_instruct_pane_ParamLimits

0xd0c2,	// (0x0002b4ec) hwr_training_instruct_pane

0x67e2,	// (0x00024c0c) hwr_training_navi_pane_ParamLimits

0x67e2,	// (0x00024c0c) hwr_training_navi_pane

0x67fc,	// (0x00024c26) hwr_training_write_pane_ParamLimits

0x67fc,	// (0x00024c26) hwr_training_write_pane

0x9c9f,	// (0x000280c9) bg_frame_shadow_pane

0xd0f9,	// (0x0002b523) hwr_training_write_pane_g1

0xd101,	// (0x0002b52b) hwr_training_write_pane_g2

0xd109,	// (0x0002b533) hwr_training_write_pane_g3

0xd111,	// (0x0002b53b) hwr_training_write_pane_g4

0xd119,	// (0x0002b543) hwr_training_write_pane_g5

0xd121,	// (0x0002b54b) hwr_training_write_pane_g6

0xd129,	// (0x0002b553) hwr_training_write_pane_g7

0x0006,

0xf845,	// (0x0002dc6f) hwr_training_write_pane_g

0x18ba,	// (0x0001fce4) hwr_training_navi_pane_g1_ParamLimits

0x18ba,	// (0x0001fce4) hwr_training_navi_pane_g1

0x18cc,	// (0x0001fcf6) hwr_training_navi_pane_g2_ParamLimits

0x18cc,	// (0x0001fcf6) hwr_training_navi_pane_g2

0x18de,	// (0x0001fd08) hwr_training_navi_pane_g3_ParamLimits

0x18de,	// (0x0001fd08) hwr_training_navi_pane_g3

0x18ee,	// (0x0001fd18) hwr_training_navi_pane_g4_ParamLimits

0x18ee,	// (0x0001fd18) hwr_training_navi_pane_g4

0x0004,

0xf854,	// (0x0002dc7e) hwr_training_navi_pane_g_ParamLimits

0xf854,	// (0x0002dc7e) hwr_training_navi_pane_g

0x1908,	// (0x0001fd32) hwr_training_navi_pane_t1

0x6834,	// (0x00024c5e) list_single_hwr_training_instruct_pane_ParamLimits

0x6834,	// (0x00024c5e) list_single_hwr_training_instruct_pane

0xd131,	// (0x0002b55b) list_single_hwr_training_instruct_pane_t1

0xc7e5,	// (0x0002ac0f) bg_frame_shadow_pane_g1

0xd140,	// (0x0002b56a) bg_frame_shadow_pane_g2

0xd148,	// (0x0002b572) bg_frame_shadow_pane_g3

0xd150,	// (0x0002b57a) bg_frame_shadow_pane_g4

0xd158,	// (0x0002b582) bg_frame_shadow_pane_g5

0xd160,	// (0x0002b58a) bg_frame_shadow_pane_g6

0xd168,	// (0x0002b592) bg_frame_shadow_pane_g7

0xa495,	// (0x000288bf) bg_frame_shadow_pane_g8

0x0007,

0xf85f,	// (0x0002dc89) bg_frame_shadow_pane_g

0x0f5d,	// (0x0001f387) main_video_tele_dialer_pane

0x1916,	// (0x0001fd40) aid_size_cell_video_keypad_ParamLimits

0x1916,	// (0x0001fd40) aid_size_cell_video_keypad

0x1926,	// (0x0001fd50) grid_video_dialer_keypad_pane_ParamLimits

0x1926,	// (0x0001fd50) grid_video_dialer_keypad_pane

0x195a,	// (0x0001fd84) video_down_pane_cp_ParamLimits

0x195a,	// (0x0001fd84) video_down_pane_cp

0x1968,	// (0x0001fd92) cell_video_dialer_keypad_pane_ParamLimits

0x1968,	// (0x0001fd92) cell_video_dialer_keypad_pane

0xd170,	// (0x0002b59a) bg_button_pane_cp08_ParamLimits

0xd170,	// (0x0002b59a) bg_button_pane_cp08

0x6875,	// (0x00024c9f) cell_video_dialer_keypad_pane_g1_ParamLimits

0x6875,	// (0x00024c9f) cell_video_dialer_keypad_pane_g1

0x61a5,	// (0x000245cf) mup3_rocker2_pane_ParamLimits

0x61a5,	// (0x000245cf) mup3_rocker2_pane

0xc8a5,	// (0x0002accf) mup3_rocker2_pane_g1

0x13c3,	// (0x0001f7ed) main_dialer2_pane

0x0f5d,	// (0x0001f387) main_mp4_pane

0x199b,	// (0x0001fdc5) main_mp4_pane_g1_ParamLimits

0x199b,	// (0x0001fdc5) main_mp4_pane_g1

0x19a9,	// (0x0001fdd3) main_mp4_pane_g2_ParamLimits

0x19a9,	// (0x0001fdd3) main_mp4_pane_g2

0x19b7,	// (0x0001fde1) main_mp4_pane_g3_ParamLimits

0x19b7,	// (0x0001fde1) main_mp4_pane_g3

0x19fc,	// (0x0001fe26) main_mp4_pane_g4_ParamLimits

0x19fc,	// (0x0001fe26) main_mp4_pane_g4

0x1a2a,	// (0x0001fe54) main_mp4_pane_g5_ParamLimits

0x1a2a,	// (0x0001fe54) main_mp4_pane_g5

0x0007,

0xf87f,	// (0x0002dca9) main_mp4_pane_g_ParamLimits

0xf87f,	// (0x0002dca9) main_mp4_pane_g

0x1a9e,	// (0x0001fec8) main_mp4_pane_t1_ParamLimits

0x1a9e,	// (0x0001fec8) main_mp4_pane_t1

0x1afa,	// (0x0001ff24) main_mp4_pane_t2_ParamLimits

0x1afa,	// (0x0001ff24) main_mp4_pane_t2

0xd18a,	// (0x0002b5b4) main_mp4_pane_t3_ParamLimits

0xd18a,	// (0x0002b5b4) main_mp4_pane_t3

0x1b4c,	// (0x0001ff76) main_mp4_pane_t4_ParamLimits

0x1b4c,	// (0x0001ff76) main_mp4_pane_t4

0x0003,

0xf890,	// (0x0002dcba) main_mp4_pane_t_ParamLimits

0xf890,	// (0x0002dcba) main_mp4_pane_t

0x1b90,	// (0x0001ffba) mp4_progress_pane_ParamLimits

0x1b90,	// (0x0001ffba) mp4_progress_pane

0x1bda,	// (0x00020004) mp4_rocker_pane_ParamLimits

0x1bda,	// (0x00020004) mp4_rocker_pane

0xd1b8,	// (0x0002b5e2) mp4_progress_pane_t1

0xd1d1,	// (0x0002b5fb) mp4_progress_pane_t2

0x0001,

0xf899,	// (0x0002dcc3) mp4_progress_pane_t

0xd1ea,	// (0x0002b614) mup_progress_pane_cp04

0xd8d6,	// (0x0002bd00) mp4_rocker_pane_g1

0x1bfa,	// (0x00020024) aid_cell_size_keypad2_ParamLimits

0x1bfa,	// (0x00020024) aid_cell_size_keypad2

0x1c0a,	// (0x00020034) dialer2_ne_pane_ParamLimits

0x1c0a,	// (0x00020034) dialer2_ne_pane

0x1c18,	// (0x00020042) grid_dialer2_keypad_pane_ParamLimits

0x1c18,	// (0x00020042) grid_dialer2_keypad_pane

0xd1fd,	// (0x0002b627) bg_popup_call_pane_cp07_ParamLimits

0xd1fd,	// (0x0002b627) bg_popup_call_pane_cp07

0x68ac,	// (0x00024cd6) dialer2_ne_pane_t1_ParamLimits

0x68ac,	// (0x00024cd6) dialer2_ne_pane_t1

0x1c28,	// (0x00020052) cell_dialer2_keypad_pane_ParamLimits

0x1c28,	// (0x00020052) cell_dialer2_keypad_pane

0xd21d,	// (0x0002b647) bg_button_pane_pane_cp04_ParamLimits

0xd21d,	// (0x0002b647) bg_button_pane_pane_cp04

0x68d1,	// (0x00024cfb) cell_dialer2_keypad_pane_g1_ParamLimits

0x68d1,	// (0x00024cfb) cell_dialer2_keypad_pane_g1

0x32a1,	// (0x000216cb) aid_placing_vt_set_content_ParamLimits

0x32a1,	// (0x000216cb) aid_placing_vt_set_content

0x32cd,	// (0x000216f7) aid_placing_vt_set_title_ParamLimits

0x32cd,	// (0x000216f7) aid_placing_vt_set_title

0x0f5d,	// (0x0001f387) main_image3_pane

0x1c6f,	// (0x00020099) area_side_right_pane_cp01_ParamLimits

0x1c6f,	// (0x00020099) area_side_right_pane_cp01

0x1c9c,	// (0x000200c6) main_image3_pane_g1_ParamLimits

0x1c9c,	// (0x000200c6) main_image3_pane_g1

0x1caa,	// (0x000200d4) main_image3_pane_g2_ParamLimits

0x1caa,	// (0x000200d4) main_image3_pane_g2

0x1cc3,	// (0x000200ed) main_image3_pane_g3_ParamLimits

0x1cc3,	// (0x000200ed) main_image3_pane_g3

0x1cdc,	// (0x00020106) main_image3_pane_g4_ParamLimits

0x1cdc,	// (0x00020106) main_image3_pane_g4

0x0003,

0xf8a8,	// (0x0002dcd2) main_image3_pane_g_ParamLimits

0xf8a8,	// (0x0002dcd2) main_image3_pane_g

0x1cf5,	// (0x0002011f) main_image3_pane_t1_ParamLimits

0x1cf5,	// (0x0002011f) main_image3_pane_t1

0x1d1a,	// (0x00020144) main_image3_pane_t2_ParamLimits

0x1d1a,	// (0x00020144) main_image3_pane_t2

0x1d39,	// (0x00020163) main_image3_pane_t3_ParamLimits

0x1d39,	// (0x00020163) main_image3_pane_t3

0x0003,

0xf8b1,	// (0x0002dcdb) main_image3_pane_t_ParamLimits

0xf8b1,	// (0x0002dcdb) main_image3_pane_t

0xd17c,	// (0x0002b5a6) grid_sctrl_middle_pane_cp01_ParamLimits

0xd17c,	// (0x0002b5a6) grid_sctrl_middle_pane_cp01

0x6939,	// (0x00024d63) cell_sctrl_middle_pane_cp01_ParamLimits

0x6939,	// (0x00024d63) cell_sctrl_middle_pane_cp01

0x694a,	// (0x00024d74) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x694a,	// (0x00024d74) cell_sctrl_middle_pane_cp01_g1

0x0f5d,	// (0x0001f387) main_call4_pane

0x1d9a,	// (0x000201c4) aid_size_button_call4_ParamLimits

0x1d9a,	// (0x000201c4) aid_size_button_call4

0x1dd0,	// (0x000201fa) call4_windows_pane_ParamLimits

0x1dd0,	// (0x000201fa) call4_windows_pane

0x1de5,	// (0x0002020f) grid_call4_button_pane_ParamLimits

0x1de5,	// (0x0002020f) grid_call4_button_pane

0x6963,	// (0x00024d8d) call4_windows_conf_pane

0x697a,	// (0x00024da4) popup_call4_audio_first_window_ParamLimits

0x697a,	// (0x00024da4) popup_call4_audio_first_window

0x69ca,	// (0x00024df4) popup_call4_audio_second_window_ParamLimits

0x69ca,	// (0x00024df4) popup_call4_audio_second_window

0x69e3,	// (0x00024e0d) popup_call4_audio_wait_window_ParamLimits

0x69e3,	// (0x00024e0d) popup_call4_audio_wait_window

0x1e07,	// (0x00020231) cell_call4_button_pane_ParamLimits

0x1e07,	// (0x00020231) cell_call4_button_pane

0x69f1,	// (0x00024e1b) bg_button_pane_cp09_ParamLimits

0x69f1,	// (0x00024e1b) bg_button_pane_cp09

0x1e2a,	// (0x00020254) cell_call4_button_pane_g1_ParamLimits

0x1e2a,	// (0x00020254) cell_call4_button_pane_g1

0x69fd,	// (0x00024e27) cell_call4_button_pane_t1_ParamLimits

0x69fd,	// (0x00024e27) cell_call4_button_pane_t1

0xd231,	// (0x0002b65b) popup_call4_audio_conf_window_ParamLimits

0xd231,	// (0x0002b65b) popup_call4_audio_conf_window

0x61d8,	// (0x00024602) mup3_progress_pane_t1_ParamLimits

0x61f7,	// (0x00024621) mup3_progress_pane_t2_ParamLimits

0xcbaf,	// (0x0002afd9) mup3_progress_pane_t3_ParamLimits

0xf781,	// (0x0002dbab) mup3_progress_pane_t_ParamLimits

0xcbcc,	// (0x0002aff6) mup_progress_pane_cp03_ParamLimits

0x6681,	// (0x00024aab) mup3_control_keys_pane_g4_copy1

0x1bbe,	// (0x0001ffe8) mp4_rocker2_pane_ParamLimits

0x1bbe,	// (0x0001ffe8) mp4_rocker2_pane

0xd245,	// (0x0002b66f) mp4_rocker2_pane_g1

0xd24d,	// (0x0002b677) mp4_rocker2_pane_g2

0x1e69,	// (0x00020293) mp4_rocker2_pane_g3

0x1e71,	// (0x0002029b) mp4_rocker2_pane_g4

0x1e79,	// (0x000202a3) mp4_rocker2_pane_g5

0x0004,

0xf8ba,	// (0x0002dce4) mp4_rocker2_pane_g

0x0f5d,	// (0x0001f387) main_camera4_pane

0x0f5d,	// (0x0001f387) main_video4_pane

0x1936,	// (0x0001fd60) main_video_tele_dialer_pane_t1_ParamLimits

0x1936,	// (0x0001fd60) main_video_tele_dialer_pane_t1

0x1948,	// (0x0001fd72) main_video_tele_dialer_pane_t2_ParamLimits

0x1948,	// (0x0001fd72) main_video_tele_dialer_pane_t2

0x0001,

0xf870,	// (0x0002dc9a) main_video_tele_dialer_pane_t_ParamLimits

0xf870,	// (0x0002dc9a) main_video_tele_dialer_pane_t

0x1e99,	// (0x000202c3) cam4_autofocus_pane_ParamLimits

0x1e99,	// (0x000202c3) cam4_autofocus_pane

0x1eb3,	// (0x000202dd) cam4_image_uncrop_pane_ParamLimits

0x1eb3,	// (0x000202dd) cam4_image_uncrop_pane

0x1eca,	// (0x000202f4) cam4_indicators_pane_ParamLimits

0x1eca,	// (0x000202f4) cam4_indicators_pane

0x1ee6,	// (0x00020310) main_camera4_pane_g1_ParamLimits

0x1ee6,	// (0x00020310) main_camera4_pane_g1

0x1ef2,	// (0x0002031c) main_camera4_pane_g2_ParamLimits

0x1ef2,	// (0x0002031c) main_camera4_pane_g2

0x1ef2,	// (0x0002031c) main_camera4_pane_g3_ParamLimits

0x1ef2,	// (0x0002031c) main_camera4_pane_g3

0x1efe,	// (0x00020328) main_camera4_pane_g4_ParamLimits

0x1efe,	// (0x00020328) main_camera4_pane_g4

0x1f0a,	// (0x00020334) main_camera4_pane_g5_ParamLimits

0x1f0a,	// (0x00020334) main_camera4_pane_g5

0x0005,

0xf8c5,	// (0x0002dcef) main_camera4_pane_g_ParamLimits

0xf8c5,	// (0x0002dcef) main_camera4_pane_g

0x1f24,	// (0x0002034e) main_camera4_pane_t1_ParamLimits

0x1f24,	// (0x0002034e) main_camera4_pane_t1

0x1f48,	// (0x00020372) bg_tb_trans_pane_cp06

0x1f5e,	// (0x00020388) cam4_indicators_pane_g1

0x1f6f,	// (0x00020399) cam4_indicators_pane_g2

0x0002,

0xf8e0,	// (0x0002dd0a) cam4_indicators_pane_g

0x1f8d,	// (0x000203b7) cam4_indicators_pane_t1

0x1fb7,	// (0x000203e1) main_video4_pane_g1_ParamLimits

0x1fb7,	// (0x000203e1) main_video4_pane_g1

0x1fc3,	// (0x000203ed) main_video4_pane_g2_ParamLimits

0x1fc3,	// (0x000203ed) main_video4_pane_g2

0x1fcf,	// (0x000203f9) main_video4_pane_g3_ParamLimits

0x1fcf,	// (0x000203f9) main_video4_pane_g3

0x1fdb,	// (0x00020405) main_video4_pane_g4_ParamLimits

0x1fdb,	// (0x00020405) main_video4_pane_g4

0x0004,

0xf8e7,	// (0x0002dd11) main_video4_pane_g_ParamLimits

0xf8e7,	// (0x0002dd11) main_video4_pane_g

0x1ffb,	// (0x00020425) vid4_indicators_pane_ParamLimits

0x1ffb,	// (0x00020425) vid4_indicators_pane

0x201a,	// (0x00020444) video4_image_uncrop_cif_pane_ParamLimits

0x201a,	// (0x00020444) video4_image_uncrop_cif_pane

0x2029,	// (0x00020453) video4_image_uncrop_nhd_pane_ParamLimits

0x2029,	// (0x00020453) video4_image_uncrop_nhd_pane

0x1eb3,	// (0x000202dd) video4_image_uncrop_vga_pane_ParamLimits

0x1eb3,	// (0x000202dd) video4_image_uncrop_vga_pane

0x13b5,	// (0x0001f7df) bg_tb_trans_pane_cp07

0x2040,	// (0x0002046a) vid4_indicators_pane_g1

0x2054,	// (0x0002047e) vid4_indicators_pane_g2

0x2068,	// (0x00020492) vid4_indicators_pane_g3

0x0004,

0xf8f2,	// (0x0002dd1c) vid4_indicators_pane_g

0x2097,	// (0x000204c1) vid4_indicators_pane_t1

0x6a33,	// (0x00024e5d) cam4_autofocus_pane_g1

0x6a3b,	// (0x00024e65) cam4_autofocus_pane_g2

0x6a43,	// (0x00024e6d) cam4_autofocus_pane_g3

0x0002,

0xf8fd,	// (0x0002dd27) cam4_autofocus_pane_g

0x6a4b,	// (0x00024e75) cam4_autofocus_pane_g3_copy1

0x6859,	// (0x00024c83) video_down_pane_cp_t1

0x6867,	// (0x00024c91) video_down_pane_cp_t2

0x0001,

0xf875,	// (0x0002dc9f) video_down_pane_cp_t

0x0f4f,	// (0x0001f379) popup_vitu2_window_ParamLimits

0x0f4f,	// (0x0001f379) popup_vitu2_window

0x20ae,	// (0x000204d8) aid_size_cell2_itu2_ParamLimits

0x20ae,	// (0x000204d8) aid_size_cell2_itu2

0x20d0,	// (0x000204fa) aid_size_cell_itu2_ParamLimits

0x20d0,	// (0x000204fa) aid_size_cell_itu2

0x2114,	// (0x0002053e) bg_popup_window_pane_cp09_ParamLimits

0x2114,	// (0x0002053e) bg_popup_window_pane_cp09

0x2122,	// (0x0002054c) field_vitu2_entry_pane_ParamLimits

0x2122,	// (0x0002054c) field_vitu2_entry_pane

0x2142,	// (0x0002056c) grid_vitu2_function_pane_ParamLimits

0x2142,	// (0x0002056c) grid_vitu2_function_pane

0x2186,	// (0x000205b0) grid_vitu2_itu_pane_ParamLimits

0x2186,	// (0x000205b0) grid_vitu2_itu_pane

0x2202,	// (0x0002062c) cell_vitu2_itu_pane_ParamLimits

0x2202,	// (0x0002062c) cell_vitu2_itu_pane

0x221b,	// (0x00020645) cell_vitu2_function_pane_ParamLimits

0x221b,	// (0x00020645) cell_vitu2_function_pane

0xd255,	// (0x0002b67f) bg_popup_call_pane_cp08_ParamLimits

0xd255,	// (0x0002b67f) bg_popup_call_pane_cp08

0xd26c,	// (0x0002b696) field_vitu2_entry_pane_g1

0xd278,	// (0x0002b6a2) field_vitu2_entry_pane_g2

0x0002,

0xf904,	// (0x0002dd2e) field_vitu2_entry_pane_g

0x6a53,	// (0x00024e7d) field_vitu2_entry_pane_t1_ParamLimits

0x6a53,	// (0x00024e7d) field_vitu2_entry_pane_t1

0xd292,	// (0x0002b6bc) field_vitu2_entry_pane_t2_ParamLimits

0xd292,	// (0x0002b6bc) field_vitu2_entry_pane_t2

0x0001,

0xf90b,	// (0x0002dd35) field_vitu2_entry_pane_t_ParamLimits

0xf90b,	// (0x0002dd35) field_vitu2_entry_pane_t

0x225c,	// (0x00020686) bg_button_pane_cp010_ParamLimits

0x225c,	// (0x00020686) bg_button_pane_cp010

0x226a,	// (0x00020694) cell_vitu2_itu_pane_g1

0x228a,	// (0x000206b4) cell_vitu2_itu_pane_t1_ParamLimits

0x228a,	// (0x000206b4) cell_vitu2_itu_pane_t1

0x22d6,	// (0x00020700) cell_vitu2_itu_pane_t2_ParamLimits

0x22d6,	// (0x00020700) cell_vitu2_itu_pane_t2

0x0002,

0xf915,	// (0x0002dd3f) cell_vitu2_itu_pane_t_ParamLimits

0xf915,	// (0x0002dd3f) cell_vitu2_itu_pane_t

0x13b5,	// (0x0001f7df) bg_button_pane_cp011

0x239e,	// (0x000207c8) cell_vitu2_function_pane_g1

0x0f5d,	// (0x0001f387) main_myfav_hc_pane

0x1d7b,	// (0x000201a5) popup_image3_note_pane_ParamLimits

0x1d7b,	// (0x000201a5) popup_image3_note_pane

0x1d89,	// (0x000201b3) popup_image3_tool_bar_pane_ParamLimits

0x1d89,	// (0x000201b3) popup_image3_tool_bar_pane

0x234c,	// (0x00020776) cell_vitu2_itu_pane_t3_ParamLimits

0x234c,	// (0x00020776) cell_vitu2_itu_pane_t3

0x9c9f,	// (0x000280c9) bg_popup_trans_pane

0xd2b7,	// (0x0002b6e1) grid_image3_tool_bar_pane

0xd2c1,	// (0x0002b6eb) bg_popup_trans_pane_g1

0xa811,	// (0x00028c3b) bg_popup_trans_pane_g2

0xd2c9,	// (0x0002b6f3) bg_popup_trans_pane_g3

0xd2d1,	// (0x0002b6fb) bg_popup_trans_pane_g4

0xd2d9,	// (0x0002b703) bg_popup_trans_pane_g5

0xd2e1,	// (0x0002b70b) bg_popup_trans_pane_g6

0xd2e9,	// (0x0002b713) bg_popup_trans_pane_g7

0xd2f1,	// (0x0002b71b) bg_popup_trans_pane_g8

0xa7f1,	// (0x00028c1b) bg_popup_trans_pane_g9

0x0008,

0xf91c,	// (0x0002dd46) bg_popup_trans_pane_g

0xd2f9,	// (0x0002b723) cell_image3_tool_bar_pane_ParamLimits

0xd2f9,	// (0x0002b723) cell_image3_tool_bar_pane

0xc8a5,	// (0x0002accf) cell_image3_tool_bar_pane_g1

0x9c9f,	// (0x000280c9) bg_popup_trans_pane_cp1

0xd30d,	// (0x0002b737) popup_image3_note_pane_t1

0xd31b,	// (0x0002b745) popup_image3_note_pane_t2

0xd329,	// (0x0002b753) popup_image3_note_pane_t3

0x0002,

0xf92f,	// (0x0002dd59) popup_image3_note_pane_t

0xd337,	// (0x0002b761) popup_image3_note_pane_t3_copy1

0x6a83,	// (0x00024ead) bg_myfav_hc_instruction_pane_ParamLimits

0x6a83,	// (0x00024ead) bg_myfav_hc_instruction_pane

0x6a9b,	// (0x00024ec5) cell_myfav_contact_pane_ParamLimits

0x6a9b,	// (0x00024ec5) cell_myfav_contact_pane

0x6ab5,	// (0x00024edf) cell_myfav_contact_pane_cp1_ParamLimits

0x6ab5,	// (0x00024edf) cell_myfav_contact_pane_cp1

0x6acd,	// (0x00024ef7) cell_myfav_contact_pane_cp2_ParamLimits

0x6acd,	// (0x00024ef7) cell_myfav_contact_pane_cp2

0x6ae5,	// (0x00024f0f) cell_myfav_contact_pane_cp3_ParamLimits

0x6ae5,	// (0x00024f0f) cell_myfav_contact_pane_cp3

0x6afc,	// (0x00024f26) cell_myfav_contact_pane_cp4_ParamLimits

0x6afc,	// (0x00024f26) cell_myfav_contact_pane_cp4

0x6b12,	// (0x00024f3c) cell_myfav_contact_pane_cp5_ParamLimits

0x6b12,	// (0x00024f3c) cell_myfav_contact_pane_cp5

0x6b26,	// (0x00024f50) cell_myfav_contact_pane_cp6_ParamLimits

0x6b26,	// (0x00024f50) cell_myfav_contact_pane_cp6

0x6b3a,	// (0x00024f64) cell_myfav_contact_pane_cp7_ParamLimits

0x6b3a,	// (0x00024f64) cell_myfav_contact_pane_cp7

0xd345,	// (0x0002b76f) listscroll_gen_pane_cp05

0x6b52,	// (0x00024f7c) main_myfav_hc_pane_g1_ParamLimits

0x6b52,	// (0x00024f7c) main_myfav_hc_pane_g1

0x6b68,	// (0x00024f92) main_myfav_hc_pane_g2_ParamLimits

0x6b68,	// (0x00024f92) main_myfav_hc_pane_g2

0x0002,

0xf936,	// (0x0002dd60) main_myfav_hc_pane_g_ParamLimits

0xf936,	// (0x0002dd60) main_myfav_hc_pane_g

0x6b96,	// (0x00024fc0) main_myfav_hc_pane_t1_ParamLimits

0x6b96,	// (0x00024fc0) main_myfav_hc_pane_t1

0xd34e,	// (0x0002b778) main_myfav_hc_pane_t2_ParamLimits

0xd34e,	// (0x0002b778) main_myfav_hc_pane_t2

0xd360,	// (0x0002b78a) main_myfav_hc_pane_t3_ParamLimits

0xd360,	// (0x0002b78a) main_myfav_hc_pane_t3

0x6bad,	// (0x00024fd7) main_myfav_hc_pane_t4_ParamLimits

0x6bad,	// (0x00024fd7) main_myfav_hc_pane_t4

0x0004,

0xf93d,	// (0x0002dd67) main_myfav_hc_pane_t_ParamLimits

0xf93d,	// (0x0002dd67) main_myfav_hc_pane_t

0xc8a5,	// (0x0002accf) bg_myfav_hc_instruction_pane_g1

0xd372,	// (0x0002b79c) cell_myfav_contact_pane_g1_ParamLimits

0xd372,	// (0x0002b79c) cell_myfav_contact_pane_g1

0xd372,	// (0x0002b79c) cell_myfav_contact_pane_g2_ParamLimits

0xd372,	// (0x0002b79c) cell_myfav_contact_pane_g2

0xd37e,	// (0x0002b7a8) cell_myfav_contact_pane_g3_ParamLimits

0xd37e,	// (0x0002b7a8) cell_myfav_contact_pane_g3

0xcb99,	// (0x0002afc3) cell_myfav_contact_pane_g4_ParamLimits

0xcb99,	// (0x0002afc3) cell_myfav_contact_pane_g4

0xd38b,	// (0x0002b7b5) cell_myfav_contact_pane_g5_ParamLimits

0xd38b,	// (0x0002b7b5) cell_myfav_contact_pane_g5

0x0004,

0xf948,	// (0x0002dd72) cell_myfav_contact_pane_g_ParamLimits

0xf948,	// (0x0002dd72) cell_myfav_contact_pane_g

0x6b7e,	// (0x00024fa8) main_myfav_hc_pane_g3_ParamLimits

0x6b7e,	// (0x00024fa8) main_myfav_hc_pane_g3

0x0e58,	// (0x0001f282) popup_adpt_find_window

0x6bd7,	// (0x00025001) afind_page_pane_ParamLimits

0x6bd7,	// (0x00025001) afind_page_pane

0x6be4,	// (0x0002500e) aid_size_cell_afind_ParamLimits

0x6be4,	// (0x0002500e) aid_size_cell_afind

0x6bfe,	// (0x00025028) bg_popup_sub_pane_cp09_ParamLimits

0x6bfe,	// (0x00025028) bg_popup_sub_pane_cp09

0x6c0b,	// (0x00025035) find_pane_cp01_ParamLimits

0x6c0b,	// (0x00025035) find_pane_cp01

0xd397,	// (0x0002b7c1) grid_afind_control_pane_ParamLimits

0xd397,	// (0x0002b7c1) grid_afind_control_pane

0x6c18,	// (0x00025042) grid_afind_pane_ParamLimits

0x6c18,	// (0x00025042) grid_afind_pane

0x6c34,	// (0x0002505e) cell_afind_pane_ParamLimits

0x6c34,	// (0x0002505e) cell_afind_pane

0xc8a5,	// (0x0002accf) afind_page_pane_g1

0x6c7c,	// (0x000250a6) afind_page_pane_g2

0x6c85,	// (0x000250af) afind_page_pane_g3

0x0002,

0xf953,	// (0x0002dd7d) afind_page_pane_g

0x6c8e,	// (0x000250b8) afind_page_pane_t1

0xd3ab,	// (0x0002b7d5) cell_afind_grid_control_pane_ParamLimits

0xd3ab,	// (0x0002b7d5) cell_afind_grid_control_pane

0xd21d,	// (0x0002b647) bg_button_pane_cp69_ParamLimits

0xd21d,	// (0x0002b647) bg_button_pane_cp69

0x6cae,	// (0x000250d8) cell_afind_pane_g1_ParamLimits

0x6cae,	// (0x000250d8) cell_afind_pane_g1

0x6cbb,	// (0x000250e5) cell_afind_pane_t1_ParamLimits

0x6cbb,	// (0x000250e5) cell_afind_pane_t1

0xa60a,	// (0x00028a34) bg_button_pane_cp72

0xd3ba,	// (0x0002b7e4) cell_afind_grid_control_pane_g1

0x504b,	// (0x00023475) aid_image_placing_area_ParamLimits

0x504b,	// (0x00023475) aid_image_placing_area

0xcec2,	// (0x0002b2ec) field_vitu_entry_pane_g1_ParamLimits

0xcec2,	// (0x0002b2ec) field_vitu_entry_pane_g1

0xcece,	// (0x0002b2f8) field_vitu_entry_pane_g2_ParamLimits

0xcece,	// (0x0002b2f8) field_vitu_entry_pane_g2

0x0001,

0xf800,	// (0x0002dc2a) field_vitu_entry_pane_g_ParamLimits

0xf800,	// (0x0002dc2a) field_vitu_entry_pane_g

0x6709,	// (0x00024b33) cell_vitu_itu_pane_g1_ParamLimits

0x674b,	// (0x00024b75) cell_vitu_itu_pane_t3_ParamLimits

0x674b,	// (0x00024b75) cell_vitu_itu_pane_t3

0xd1b8,	// (0x0002b5e2) mp4_progress_pane_t1_ParamLimits

0xd1d1,	// (0x0002b5fb) mp4_progress_pane_t2_ParamLimits

0xf899,	// (0x0002dcc3) mp4_progress_pane_t_ParamLimits

0xd1ea,	// (0x0002b614) mup_progress_pane_cp04_ParamLimits

0x6bc1,	// (0x00024feb) main_myfav_hc_pane_t5_ParamLimits

0x6bc1,	// (0x00024feb) main_myfav_hc_pane_t5

0x0d1b,	// (0x0001f145) aid_zoom_text_primary

0x0e58,	// (0x0001f282) popup_adpt_find_window_ParamLimits

0x13b5,	// (0x0001f7df) main_cam_set_pane

0x1ed8,	// (0x00020302) cam4_zoom_pane_ParamLimits

0x1ed8,	// (0x00020302) cam4_zoom_pane

0x6ccd,	// (0x000250f7) main_cam_set_pane_g1_ParamLimits

0x6ccd,	// (0x000250f7) main_cam_set_pane_g1

0x6cdb,	// (0x00025105) main_cam_set_pane_g2_ParamLimits

0x6cdb,	// (0x00025105) main_cam_set_pane_g2

0x0001,

0xf95a,	// (0x0002dd84) main_cam_set_pane_g_ParamLimits

0xf95a,	// (0x0002dd84) main_cam_set_pane_g

0x6ce7,	// (0x00025111) main_cam_set_pane_t1_ParamLimits

0x6ce7,	// (0x00025111) main_cam_set_pane_t1

0x6d03,	// (0x0002512d) main_cset_listscroll_pane_ParamLimits

0x6d03,	// (0x0002512d) main_cset_listscroll_pane

0x6d2e,	// (0x00025158) main_cset_slider_pane_ParamLimits

0x6d2e,	// (0x00025158) main_cset_slider_pane

0xd3cb,	// (0x0002b7f5) main_cset_list_pane_ParamLimits

0xd3cb,	// (0x0002b7f5) main_cset_list_pane

0xd3db,	// (0x0002b805) scroll_pane_cp028

0x6d4d,	// (0x00025177) aid_area_touch_slider

0x6d69,	// (0x00025193) cset_slider_pane

0x6d93,	// (0x000251bd) main_cset_slider_pane_g1

0x6da8,	// (0x000251d2) main_cset_slider_pane_g2

0x0011,

0xf95f,	// (0x0002dd89) main_cset_slider_pane_g

0xd414,	// (0x0002b83e) main_cset_slider_pane_t1

0x6e6a,	// (0x00025294) main_cset_slider_pane_t2

0x6e84,	// (0x000252ae) main_cset_slider_pane_t3

0x6e9e,	// (0x000252c8) main_cset_slider_pane_t4

0x6eb8,	// (0x000252e2) main_cset_slider_pane_t5

0x6ed6,	// (0x00025300) main_cset_slider_pane_t6

0x6eed,	// (0x00025317) main_cset_slider_pane_t7

0x000e,

0xf984,	// (0x0002ddae) main_cset_slider_pane_t

0x6ff9,	// (0x00025423) cset_list_set_pane_ParamLimits

0x6ff9,	// (0x00025423) cset_list_set_pane

0x700f,	// (0x00025439) aid_position_infowindow_above

0x7017,	// (0x00025441) aid_position_infowindow_below

0xd4c0,	// (0x0002b8ea) cset_list_set_pane_g1_ParamLimits

0xd4c0,	// (0x0002b8ea) cset_list_set_pane_g1

0xd4cc,	// (0x0002b8f6) cset_list_set_pane_g3_ParamLimits

0xd4cc,	// (0x0002b8f6) cset_list_set_pane_g3

0x0001,

0xf9a3,	// (0x0002ddcd) cset_list_set_pane_g_ParamLimits

0xf9a3,	// (0x0002ddcd) cset_list_set_pane_g

0xd4db,	// (0x0002b905) cset_list_set_pane_t1_ParamLimits

0xd4db,	// (0x0002b905) cset_list_set_pane_t1

0xa56f,	// (0x00028999) list_highlight_pane_cp021_ParamLimits

0xa56f,	// (0x00028999) list_highlight_pane_cp021

0xb15a,	// (0x00029584) cset_slider_pane_g1

0xb16c,	// (0x00029596) cset_slider_pane_g2

0xb163,	// (0x0002958d) cset_slider_pane_g3

0x0002,

0xf9a8,	// (0x0002ddd2) cset_slider_pane_g

0x23b2,	// (0x000207dc) aid_area_touch_cam4_zoom

0x23ba,	// (0x000207e4) cam4_zoom_cont_pane

0x23c2,	// (0x000207ec) cam4_zoom_pane_g1

0x23ca,	// (0x000207f4) cam4_zoom_pane_g2

0x23d2,	// (0x000207fc) cam4_zoom_pane_g3

0x0002,

0xf9af,	// (0x0002ddd9) cam4_zoom_pane_g

0x23da,	// (0x00020804) cam4_zoom_cont_pane_g1

0x23e3,	// (0x0002080d) cam4_zoom_cont_pane_g2

0x23ec,	// (0x00020816) cam4_zoom_cont_pane_g3

0x0002,

0xf9b6,	// (0x0002dde0) cam4_zoom_cont_pane_g

0x1db4,	// (0x000201de) call4_image_pane_ParamLimits

0x1db4,	// (0x000201de) call4_image_pane

0x6963,	// (0x00024d8d) call4_windows_conf_pane_ParamLimits

0x69a8,	// (0x00024dd2) popup_call4_audio_in_window_ParamLimits

0x69a8,	// (0x00024dd2) popup_call4_audio_in_window

0x9c9f,	// (0x000280c9) bg_popup_call2_act_pane_cp02

0xd229,	// (0x0002b653) call4_list_conf_pane

0xc8a5,	// (0x0002accf) call4_image_pane_g1

0xc8a5,	// (0x0002accf) call4_image_pane_g2

0x0001,

0xf6c1,	// (0x0002daeb) call4_image_pane_g

0xd4f0,	// (0x0002b91a) list_single_graphic_popup_conf4_pane_ParamLimits

0xd4f0,	// (0x0002b91a) list_single_graphic_popup_conf4_pane

0x9c9f,	// (0x000280c9) list_highlight_pane_cp022

0xd503,	// (0x0002b92d) list_single_graphic_popup_conf4_pane_g1

0xad1f,	// (0x00029149) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9bd,	// (0x0002dde7) list_single_graphic_popup_conf4_pane_g

0xd50b,	// (0x0002b935) list_single_graphic_popup_conf4_pane_t1

0x3431,	// (0x0002185b) popup_vtel_slider_window_ParamLimits

0x3431,	// (0x0002185b) popup_vtel_slider_window

0xd20b,	// (0x0002b635) dialer2_ne_pane_t2_ParamLimits

0xd20b,	// (0x0002b635) dialer2_ne_pane_t2

0x0001,

0xf89e,	// (0x0002dcc8) dialer2_ne_pane_t_ParamLimits

0xf89e,	// (0x0002dcc8) dialer2_ne_pane_t

0xa56f,	// (0x00028999) bg_popup_sub_pane_cp010_ParamLimits

0xa56f,	// (0x00028999) bg_popup_sub_pane_cp010

0x701f,	// (0x00025449) popup_vtel_slider_window_g1_ParamLimits

0x701f,	// (0x00025449) popup_vtel_slider_window_g1

0x702b,	// (0x00025455) popup_vtel_slider_window_g2_ParamLimits

0x702b,	// (0x00025455) popup_vtel_slider_window_g2

0x0003,

0xf9c2,	// (0x0002ddec) popup_vtel_slider_window_g_ParamLimits

0xf9c2,	// (0x0002ddec) popup_vtel_slider_window_g

0x7073,	// (0x0002549d) vtel_slider_pane_ParamLimits

0x7073,	// (0x0002549d) vtel_slider_pane

0x7082,	// (0x000254ac) vtel_slider_pane_g1_ParamLimits

0x7082,	// (0x000254ac) vtel_slider_pane_g1

0x708f,	// (0x000254b9) vtel_slider_pane_g2_ParamLimits

0x708f,	// (0x000254b9) vtel_slider_pane_g2

0x709c,	// (0x000254c6) vtel_slider_pane_g3_ParamLimits

0x709c,	// (0x000254c6) vtel_slider_pane_g3

0x7082,	// (0x000254ac) vtel_slider_pane_g4_ParamLimits

0x7082,	// (0x000254ac) vtel_slider_pane_g4

0x70a9,	// (0x000254d3) vtel_slider_pane_g5_ParamLimits

0x70a9,	// (0x000254d3) vtel_slider_pane_g5

0x0004,

0xf9cb,	// (0x0002ddf5) vtel_slider_pane_g_ParamLimits

0xf9cb,	// (0x0002ddf5) vtel_slider_pane_g

0x13b5,	// (0x0001f7df) main_gallery2_pane

0x20f6,	// (0x00020520) aid_size_row_itut2_dropdow_list_ParamLimits

0x20f6,	// (0x00020520) aid_size_row_itut2_dropdow_list

0x2164,	// (0x0002058e) grid_vitu2_function_top_pane_ParamLimits

0x2164,	// (0x0002058e) grid_vitu2_function_top_pane

0x21be,	// (0x000205e8) popup_vitu2_dropdown_list_window_ParamLimits

0x21be,	// (0x000205e8) popup_vitu2_dropdown_list_window

0x21de,	// (0x00020608) popup_vitu2_match_list_window

0x23f5,	// (0x0002081f) cell_vitu2_function_top_pane_ParamLimits

0x23f5,	// (0x0002081f) cell_vitu2_function_top_pane

0x240f,	// (0x00020839) cell_vitu2_function_top_pane_cp01_ParamLimits

0x240f,	// (0x00020839) cell_vitu2_function_top_pane_cp01

0x242b,	// (0x00020855) cell_vitu2_function_top_wide_pane_ParamLimits

0x242b,	// (0x00020855) cell_vitu2_function_top_wide_pane

0x13b5,	// (0x0001f7df) bg_button_pane_cp012

0x2447,	// (0x00020871) cell_vitu2_function_top_pane_g1

0x245b,	// (0x00020885) bg_button_pane_cp013_ParamLimits

0x245b,	// (0x00020885) bg_button_pane_cp013

0x70c4,	// (0x000254ee) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x70c4,	// (0x000254ee) cell_vitu2_function_top_wide_pane_g1

0x0f4f,	// (0x0001f379) bg_popup_sub_pane_cp20

0x2477,	// (0x000208a1) list_vitu2_match_list_pane

0xd2c1,	// (0x0002b6eb) bg_popup_sub_pane_cp20_g1

0xd2c9,	// (0x0002b6f3) bg_popup_sub_pane_cp20_g2

0xa811,	// (0x00028c3b) bg_popup_sub_pane_cp20_g3

0xd2d1,	// (0x0002b6fb) bg_popup_sub_pane_cp20_g4

0xa7f1,	// (0x00028c1b) bg_popup_sub_pane_cp20_g5

0xd521,	// (0x0002b94b) bg_popup_sub_pane_cp20_g6

0xd2e1,	// (0x0002b70b) bg_popup_sub_pane_cp20_g7

0xd2e9,	// (0x0002b713) bg_popup_sub_pane_cp20_g8

0xd2f1,	// (0x0002b71b) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9d6,	// (0x0002de00) bg_popup_sub_pane_cp20_g

0x248f,	// (0x000208b9) list_vitu2_match_list_item_pane_ParamLimits

0x248f,	// (0x000208b9) list_vitu2_match_list_item_pane

0x24a1,	// (0x000208cb) list_vitu2_match_list_item_pane_t1

0x0f5d,	// (0x0001f387) bg_popup_sub_pane_cp21

0x24af,	// (0x000208d9) grid_vitu2_dropdown_list_pane

0x24b7,	// (0x000208e1) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x24b7,	// (0x000208e1) cell_vitu2_dropdown_list_char_pane

0x24d8,	// (0x00020902) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x24d8,	// (0x00020902) cell_vitu2_dropdown_list_ctrl_pane

0xd529,	// (0x0002b953) cell_vitu2_dropdown_list_char_pane_g1

0xd532,	// (0x0002b95c) cell_vitu2_dropdown_list_char_pane_g2

0xd53b,	// (0x0002b965) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf9f3,	// (0x0002de1d) cell_vitu2_dropdown_list_char_pane_g

0x2504,	// (0x0002092e) cell_vitu2_dropdown_list_char_pane_t1

0x7124,	// (0x0002554e) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x7124,	// (0x0002554e) cell_vitu2_dropdown_list_ctrl_pane_g1

0x7134,	// (0x0002555e) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x7134,	// (0x0002555e) cell_vitu2_dropdown_list_ctrl_pane_g2

0x7145,	// (0x0002556f) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x7145,	// (0x0002556f) cell_vitu2_dropdown_list_ctrl_pane_g3

0x2512,	// (0x0002093c) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x2512,	// (0x0002093c) cell_vitu2_dropdown_list_ctrl_pane_g4

0x1f48,	// (0x00020372) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x1f48,	// (0x00020372) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf9fa,	// (0x0002de24) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf9fa,	// (0x0002de24) cell_vitu2_dropdown_list_ctrl_pane_g

0x7155,	// (0x0002557f) aid_size_cell_gallery2_ParamLimits

0x7155,	// (0x0002557f) aid_size_cell_gallery2

0x716f,	// (0x00025599) grid_gallery2_pane_ParamLimits

0x716f,	// (0x00025599) grid_gallery2_pane

0x7186,	// (0x000255b0) scroll_pane_cp029_ParamLimits

0x7186,	// (0x000255b0) scroll_pane_cp029

0x7196,	// (0x000255c0) cell_gallery2_pane_ParamLimits

0x7196,	// (0x000255c0) cell_gallery2_pane

0xd544,	// (0x0002b96e) cell_gallery2_pane_g2

0xe8d5,	// (0x0002ccff) cell_gallery2_pane_g3

0xd54c,	// (0x0002b976) cell_gallery2_pane_g4

0xd554,	// (0x0002b97e) cell_gallery2_pane_g5

0xa5b8,	// (0x000289e2) grid_highlight_pane_cp10

0x21de,	// (0x00020608) popup_vitu2_match_list_window_ParamLimits

0x21f2,	// (0x0002061c) popup_vitu2_query_window_ParamLimits

0x21f2,	// (0x0002061c) popup_vitu2_query_window

0x0f5d,	// (0x0001f387) bg_vitu2_candi_button_pane

0xd529,	// (0x0002b953) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd532,	// (0x0002b95c) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd53b,	// (0x0002b965) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x71eb,	// (0x00025615) bg_button_pane_cp015

0x71fd,	// (0x00025627) bg_button_pane_cp016

0x7210,	// (0x0002563a) bg_button_pane_cp017

0xc49d,	// (0x0002a8c7) bg_popup_sub_pane_cp22

0xd55c,	// (0x0002b986) popup_vitu2_query_window_g1

0x7255,	// (0x0002567f) popup_vitu2_query_window_g2

0x0002,

0xfa05,	// (0x0002de2f) popup_vitu2_query_window_g

0x7272,	// (0x0002569c) popup_vitu2_query_window_t1_ParamLimits

0x7272,	// (0x0002569c) popup_vitu2_query_window_t1

0x72a5,	// (0x000256cf) popup_vitu2_query_window_t2_ParamLimits

0x72a5,	// (0x000256cf) popup_vitu2_query_window_t2

0x72b7,	// (0x000256e1) popup_vitu2_query_window_t3_ParamLimits

0x72b7,	// (0x000256e1) popup_vitu2_query_window_t3

0x72df,	// (0x00025709) popup_vitu2_query_window_t4_ParamLimits

0x72df,	// (0x00025709) popup_vitu2_query_window_t4

0x7300,	// (0x0002572a) popup_vitu2_query_window_t5_ParamLimits

0x7300,	// (0x0002572a) popup_vitu2_query_window_t5

0x0006,

0xfa0c,	// (0x0002de36) popup_vitu2_query_window_t_ParamLimits

0xfa0c,	// (0x0002de36) popup_vitu2_query_window_t

0xd3c3,	// (0x0002b7ed) main_cset_text_pane

0x6d4d,	// (0x00025177) aid_area_touch_slider_ParamLimits

0x6d69,	// (0x00025193) cset_slider_pane_ParamLimits

0x6d93,	// (0x000251bd) main_cset_slider_pane_g1_ParamLimits

0x6da8,	// (0x000251d2) main_cset_slider_pane_g2_ParamLimits

0xd3e4,	// (0x0002b80e) main_cset_slider_pane_g3_ParamLimits

0xd3e4,	// (0x0002b80e) main_cset_slider_pane_g3

0x6dbd,	// (0x000251e7) main_cset_slider_pane_g4_ParamLimits

0x6dbd,	// (0x000251e7) main_cset_slider_pane_g4

0x6dcc,	// (0x000251f6) main_cset_slider_pane_g5_ParamLimits

0x6dcc,	// (0x000251f6) main_cset_slider_pane_g5

0x6dda,	// (0x00025204) main_cset_slider_pane_g6_ParamLimits

0x6dda,	// (0x00025204) main_cset_slider_pane_g6

0xf95f,	// (0x0002dd89) main_cset_slider_pane_g_ParamLimits

0xd414,	// (0x0002b83e) main_cset_slider_pane_t1_ParamLimits

0x6e6a,	// (0x00025294) main_cset_slider_pane_t2_ParamLimits

0x6e84,	// (0x000252ae) main_cset_slider_pane_t3_ParamLimits

0x6e9e,	// (0x000252c8) main_cset_slider_pane_t4_ParamLimits

0x6eb8,	// (0x000252e2) main_cset_slider_pane_t5_ParamLimits

0x6ed6,	// (0x00025300) main_cset_slider_pane_t6_ParamLimits

0x6eed,	// (0x00025317) main_cset_slider_pane_t7_ParamLimits

0x6f1b,	// (0x00025345) main_cset_slider_pane_t8_ParamLimits

0x6f1b,	// (0x00025345) main_cset_slider_pane_t8

0x6f43,	// (0x0002536d) main_cset_slider_pane_t9_ParamLimits

0x6f43,	// (0x0002536d) main_cset_slider_pane_t9

0x6f6b,	// (0x00025395) main_cset_slider_pane_t10_ParamLimits

0x6f6b,	// (0x00025395) main_cset_slider_pane_t10

0x6f93,	// (0x000253bd) main_cset_slider_pane_t11_ParamLimits

0x6f93,	// (0x000253bd) main_cset_slider_pane_t11

0x6fbd,	// (0x000253e7) main_cset_slider_pane_t12_ParamLimits

0x6fbd,	// (0x000253e7) main_cset_slider_pane_t12

0x6fda,	// (0x00025404) main_cset_slider_pane_t13_ParamLimits

0x6fda,	// (0x00025404) main_cset_slider_pane_t13

0xf984,	// (0x0002ddae) main_cset_slider_pane_t_ParamLimits

0x9c9f,	// (0x000280c9) bg_popup_sub_pane_cp011

0xd568,	// (0x0002b992) main_cset_text_pane_g1

0xd570,	// (0x0002b99a) main_cset_text_pane_t1

0xd57e,	// (0x0002b9a8) main_cset_text_pane_t2

0xd58c,	// (0x0002b9b6) main_cset_text_pane_t3

0xd59a,	// (0x0002b9c4) main_cset_text_pane_t4

0xd5a8,	// (0x0002b9d2) main_cset_text_pane_t5

0xd5b6,	// (0x0002b9e0) main_cset_text_pane_t6

0xd5c4,	// (0x0002b9ee) main_cset_text_pane_t7

0x0006,

0xfa1b,	// (0x0002de45) main_cset_text_pane_t

0x0f5d,	// (0x0001f387) main_cam4_burst_pane

0x0f5d,	// (0x0001f387) main_cam5_pane

0x6c9c,	// (0x000250c6) bg_button_pane_cp019

0x6ca5,	// (0x000250cf) bg_button_pane_cp020

0xd3f0,	// (0x0002b81a) main_cset_slider_pane_g7_ParamLimits

0xd3f0,	// (0x0002b81a) main_cset_slider_pane_g7

0xd3fc,	// (0x0002b826) main_cset_slider_pane_g8_ParamLimits

0xd3fc,	// (0x0002b826) main_cset_slider_pane_g8

0x6dee,	// (0x00025218) main_cset_slider_pane_g9_ParamLimits

0x6dee,	// (0x00025218) main_cset_slider_pane_g9

0x6dfa,	// (0x00025224) main_cset_slider_pane_g10_ParamLimits

0x6dfa,	// (0x00025224) main_cset_slider_pane_g10

0x6e06,	// (0x00025230) main_cset_slider_pane_g11_ParamLimits

0x6e06,	// (0x00025230) main_cset_slider_pane_g11

0x6e12,	// (0x0002523c) main_cset_slider_pane_g12_ParamLimits

0x6e12,	// (0x0002523c) main_cset_slider_pane_g12

0x6e1e,	// (0x00025248) main_cset_slider_pane_g13_ParamLimits

0x6e1e,	// (0x00025248) main_cset_slider_pane_g13

0x6e2a,	// (0x00025254) main_cset_slider_pane_g14_ParamLimits

0x6e2a,	// (0x00025254) main_cset_slider_pane_g14

0x6e36,	// (0x00025260) main_cset_slider_pane_g15_ParamLimits

0x6e36,	// (0x00025260) main_cset_slider_pane_g15

0xd44e,	// (0x0002b878) main_cset_slider_pane_t14_ParamLimits

0xd44e,	// (0x0002b878) main_cset_slider_pane_t14

0xd487,	// (0x0002b8b1) main_cset_slider_pane_t15_ParamLimits

0xd487,	// (0x0002b8b1) main_cset_slider_pane_t15

0x7377,	// (0x000257a1) aid_cam4_burst_size_cell_ParamLimits

0x7377,	// (0x000257a1) aid_cam4_burst_size_cell

0x7393,	// (0x000257bd) grid_cam4_burst_pane_ParamLimits

0x7393,	// (0x000257bd) grid_cam4_burst_pane

0x73c3,	// (0x000257ed) linegrid_cam4_burst_pane_ParamLimits

0x73c3,	// (0x000257ed) linegrid_cam4_burst_pane

0x73e3,	// (0x0002580d) scroll_pane_cp30_ParamLimits

0x73e3,	// (0x0002580d) scroll_pane_cp30

0x73ef,	// (0x00025819) cell_cam4_burst_pane_ParamLimits

0x73ef,	// (0x00025819) cell_cam4_burst_pane

0xd5d2,	// (0x0002b9fc) linegrid_cam4_burst_pane_g1_ParamLimits

0xd5d2,	// (0x0002b9fc) linegrid_cam4_burst_pane_g1

0x742b,	// (0x00025855) linegrid_cam4_burst_pane_g2_ParamLimits

0x742b,	// (0x00025855) linegrid_cam4_burst_pane_g2

0xd5df,	// (0x0002ba09) linegrid_cam4_burst_pane_g3_ParamLimits

0xd5df,	// (0x0002ba09) linegrid_cam4_burst_pane_g3

0x0002,

0xfa2a,	// (0x0002de54) linegrid_cam4_burst_pane_g_ParamLimits

0xfa2a,	// (0x0002de54) linegrid_cam4_burst_pane_g

0x743c,	// (0x00025866) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x743c,	// (0x00025866) linegrid_cam4_burst_pane_g3_copy1

0xd5ec,	// (0x0002ba16) linegrid_cam4_burst_pane_g4_ParamLimits

0xd5ec,	// (0x0002ba16) linegrid_cam4_burst_pane_g4

0x7456,	// (0x00025880) linegrid_cam4_burst_pane_g5_ParamLimits

0x7456,	// (0x00025880) linegrid_cam4_burst_pane_g5

0x7467,	// (0x00025891) linegrid_cam4_burst_pane_g6_ParamLimits

0x7467,	// (0x00025891) linegrid_cam4_burst_pane_g6

0xd5f9,	// (0x0002ba23) linegrid_cam4_burst_pane_g7_ParamLimits

0xd5f9,	// (0x0002ba23) linegrid_cam4_burst_pane_g7

0x7478,	// (0x000258a2) cell_cam4_burst_pane_g1

0xd612,	// (0x0002ba3c) main_cam5_pane_t1_ParamLimits

0xd612,	// (0x0002ba3c) main_cam5_pane_t1

0xd624,	// (0x0002ba4e) main_cam5_pane_t2_ParamLimits

0xd624,	// (0x0002ba4e) main_cam5_pane_t2

0xd636,	// (0x0002ba60) main_cam5_pane_t3_ParamLimits

0xd636,	// (0x0002ba60) main_cam5_pane_t3

0xd648,	// (0x0002ba72) main_cam5_pane_t4_ParamLimits

0xd648,	// (0x0002ba72) main_cam5_pane_t4

0xd660,	// (0x0002ba8a) main_cam5_pane_t5_ParamLimits

0xd660,	// (0x0002ba8a) main_cam5_pane_t5

0xd674,	// (0x0002ba9e) main_cam5_pane_t6_ParamLimits

0xd674,	// (0x0002ba9e) main_cam5_pane_t6

0xd688,	// (0x0002bab2) main_cam5_pane_t7_ParamLimits

0xd688,	// (0x0002bab2) main_cam5_pane_t7

0xd6c1,	// (0x0002baeb) main_cam5_pane_t8_ParamLimits

0xd6c1,	// (0x0002baeb) main_cam5_pane_t8

0xd6dd,	// (0x0002bb07) main_cam5_pane_t9_ParamLimits

0xd6dd,	// (0x0002bb07) main_cam5_pane_t9

0xd6ef,	// (0x0002bb19) main_cam5_pane_t10_ParamLimits

0xd6ef,	// (0x0002bb19) main_cam5_pane_t10

0xd701,	// (0x0002bb2b) main_cam5_pane_t11_ParamLimits

0xd701,	// (0x0002bb2b) main_cam5_pane_t11

0xd713,	// (0x0002bb3d) main_cam5_pane_t12_ParamLimits

0xd713,	// (0x0002bb3d) main_cam5_pane_t12

0xd728,	// (0x0002bb52) main_cam5_pane_t13_ParamLimits

0xd728,	// (0x0002bb52) main_cam5_pane_t13

0x000c,

0xfa36,	// (0x0002de60) main_cam5_pane_t_ParamLimits

0xfa36,	// (0x0002de60) main_cam5_pane_t

0x0f0e,	// (0x0001f338) popup_scut_keymap_window_ParamLimits

0x0f0e,	// (0x0001f338) popup_scut_keymap_window

0x748b,	// (0x000258b5) aid_size_cell_brow_shortcut

0xa5b8,	// (0x000289e2) bg_popup_window_pane_cp010

0x7497,	// (0x000258c1) grid_scut_pane

0x74a3,	// (0x000258cd) cell_scut_pane_ParamLimits

0x74a3,	// (0x000258cd) cell_scut_pane

0x74ba,	// (0x000258e4) cell_scut_pane_g1

0xd745,	// (0x0002bb6f) cell_scut_pane_t1

0xd754,	// (0x0002bb7e) cell_scut_pane_t2

0x74c3,	// (0x000258ed) cell_scut_pane_t3

0x0002,

0xfa51,	// (0x0002de7b) cell_scut_pane_t

0x5df7,	// (0x00024221) main_mup3_pane_g8_ParamLimits

0x5df7,	// (0x00024221) main_mup3_pane_g8

0x2104,	// (0x0002052e) area_vitu2_query_pane_ParamLimits

0x2104,	// (0x0002052e) area_vitu2_query_pane

0x7223,	// (0x0002564d) input_focus_pane_cp08

0xd763,	// (0x0002bb8d) area_vitu2_query_pane_g1

0x74d1,	// (0x000258fb) area_vitu2_query_pane_g2

0x0001,

0xfa58,	// (0x0002de82) area_vitu2_query_pane_g

0x74e2,	// (0x0002590c) area_vitu2_query_pane_t1_ParamLimits

0x74e2,	// (0x0002590c) area_vitu2_query_pane_t1

0x74f6,	// (0x00025920) area_vitu2_query_pane_t2_ParamLimits

0x74f6,	// (0x00025920) area_vitu2_query_pane_t2

0x750a,	// (0x00025934) area_vitu2_query_pane_t3_ParamLimits

0x750a,	// (0x00025934) area_vitu2_query_pane_t3

0xd76f,	// (0x0002bb99) area_vitu2_query_pane_t4_ParamLimits

0xd76f,	// (0x0002bb99) area_vitu2_query_pane_t4

0xd797,	// (0x0002bbc1) area_vitu2_query_pane_t5_ParamLimits

0xd797,	// (0x0002bbc1) area_vitu2_query_pane_t5

0xd7bf,	// (0x0002bbe9) area_vitu2_query_pane_t6_ParamLimits

0xd7bf,	// (0x0002bbe9) area_vitu2_query_pane_t6

0x0006,

0xfa5d,	// (0x0002de87) area_vitu2_query_pane_t_ParamLimits

0xfa5d,	// (0x0002de87) area_vitu2_query_pane_t

0x7532,	// (0x0002595c) bg_button_pane_cp018

0x7540,	// (0x0002596a) bg_button_pane_cp021

0x754c,	// (0x00025976) bg_button_pane_cp022

0x755d,	// (0x00025987) input_focus_pane_cp09

0xae75,	// (0x0002929f) aid_size_touch_mv_arrow_left

0xae9e,	// (0x000292c8) aid_size_touch_mv_arrow_right

0x6e4e,	// (0x00025278) main_cset_slider_pane_g16_ParamLimits

0x6e4e,	// (0x00025278) main_cset_slider_pane_g16

0x6e5c,	// (0x00025286) main_cset_slider_pane_g17_ParamLimits

0x6e5c,	// (0x00025286) main_cset_slider_pane_g17

0x7478,	// (0x000258a2) cell_cam4_burst_pane_g1_ParamLimits

0x9c9f,	// (0x000280c9) compa_mode_pane

0x7037,	// (0x00025461) popup_vtel_slider_window_g3_ParamLimits

0x7037,	// (0x00025461) popup_vtel_slider_window_g3

0x704b,	// (0x00025475) popup_vtel_slider_window_g4_ParamLimits

0x704b,	// (0x00025475) popup_vtel_slider_window_g4

0x705f,	// (0x00025489) popup_vtel_slider_window_t1_ParamLimits

0x705f,	// (0x00025489) popup_vtel_slider_window_t1

0x0f5d,	// (0x0001f387) main_cl_pane

0x1453,	// (0x0001f87d) popup_imed_adjust2_window_ParamLimits

0xc49d,	// (0x0002a8c7) bg_tb_trans_pane_cp05_ParamLimits

0xcdf7,	// (0x0002b221) popup_imed_adjust2_window_g1_ParamLimits

0xce06,	// (0x0002b230) popup_imed_adjust2_window_g2_ParamLimits

0xce06,	// (0x0002b230) popup_imed_adjust2_window_g2

0xce12,	// (0x0002b23c) popup_imed_adjust2_window_g3_ParamLimits

0xce12,	// (0x0002b23c) popup_imed_adjust2_window_g3

0x0002,

0xf7c4,	// (0x0002dbee) popup_imed_adjust2_window_g_ParamLimits

0xf7c4,	// (0x0002dbee) popup_imed_adjust2_window_g

0xce1e,	// (0x0002b248) popup_imed_adjust2_window_t1_ParamLimits

0xce36,	// (0x0002b260) slider_imed_adjust_pane_ParamLimits

0xce4a,	// (0x0002b274) slider_imed_adjust_pane_g1_ParamLimits

0xce5a,	// (0x0002b284) slider_imed_adjust_pane_g2_ParamLimits

0xce6a,	// (0x0002b294) slider_imed_adjust_pane_g3_ParamLimits

0xce7b,	// (0x0002b2a5) slider_imed_adjust_pane_g4_ParamLimits

0xf7cb,	// (0x0002dbf5) slider_imed_adjust_pane_g_ParamLimits

0x1e81,	// (0x000202ab) aid_touch_area_cam4_ParamLimits

0x1e81,	// (0x000202ab) aid_touch_area_cam4

0x1e91,	// (0x000202bb) battery_pane_cp01

0x1f18,	// (0x00020342) main_camera4_pane_g6_ParamLimits

0x1f18,	// (0x00020342) main_camera4_pane_g6

0x1f36,	// (0x00020360) main_camera4_pane_t2_ParamLimits

0x1f36,	// (0x00020360) main_camera4_pane_t2

0x0001,

0xf8d2,	// (0x0002dcfc) main_camera4_pane_t_ParamLimits

0xf8d2,	// (0x0002dcfc) main_camera4_pane_t

0x1fa7,	// (0x000203d1) aid_touch_area_vid4_ParamLimits

0x1fa7,	// (0x000203d1) aid_touch_area_vid4

0x1fe7,	// (0x00020411) main_video4_pane_g5_ParamLimits

0x1fe7,	// (0x00020411) main_video4_pane_g5

0x200b,	// (0x00020435) vid4_progress_pane_ParamLimits

0x200b,	// (0x00020435) vid4_progress_pane

0xd408,	// (0x0002b832) main_cset_slider_pane_g18_ParamLimits

0xd408,	// (0x0002b832) main_cset_slider_pane_g18

0xd606,	// (0x0002ba30) cell_cam4_burst_pane_g2_ParamLimits

0xd606,	// (0x0002ba30) cell_cam4_burst_pane_g2

0x0001,

0xfa31,	// (0x0002de5b) cell_cam4_burst_pane_g_ParamLimits

0xfa31,	// (0x0002de5b) cell_cam4_burst_pane_g

0x756e,	// (0x00025998) bg_cl_pane_ParamLimits

0x756e,	// (0x00025998) bg_cl_pane

0x757a,	// (0x000259a4) cl_header_pane_ParamLimits

0x757a,	// (0x000259a4) cl_header_pane

0x7586,	// (0x000259b0) cl_listscroll_pane_ParamLimits

0x7586,	// (0x000259b0) cl_listscroll_pane

0xd80b,	// (0x0002bc35) bg_cl_pane_g1

0xd813,	// (0x0002bc3d) bg_cl_pane_g2

0xd81b,	// (0x0002bc45) bg_cl_pane_g3

0xd823,	// (0x0002bc4d) bg_cl_pane_g4

0xd82b,	// (0x0002bc55) bg_cl_pane_g5

0xd833,	// (0x0002bc5d) bg_cl_pane_g6

0xd83b,	// (0x0002bc65) bg_cl_pane_g7

0xd843,	// (0x0002bc6d) bg_cl_pane_g8

0xd84b,	// (0x0002bc75) bg_cl_pane_g9

0x0008,

0xfa6c,	// (0x0002de96) bg_cl_pane_g

0x7592,	// (0x000259bc) aid_height_cl_leading_ParamLimits

0x7592,	// (0x000259bc) aid_height_cl_leading

0x759e,	// (0x000259c8) aid_height_cl_text_ParamLimits

0x759e,	// (0x000259c8) aid_height_cl_text

0xd17c,	// (0x0002b5a6) bg_cl_header_pane_ParamLimits

0xd17c,	// (0x0002b5a6) bg_cl_header_pane

0x75b6,	// (0x000259e0) cl_header_pane_g1_ParamLimits

0x75b6,	// (0x000259e0) cl_header_pane_g1

0x75c3,	// (0x000259ed) cl_header_pane_t1_ParamLimits

0x75c3,	// (0x000259ed) cl_header_pane_t1

0xd853,	// (0x0002bc7d) cl_list_pane

0xd3db,	// (0x0002b805) hc_scroll_pane_cp01

0xa7f1,	// (0x00028c1b) bg_cl_header_pane_g1

0xd2c1,	// (0x0002b6eb) bg_cl_header_pane_g2

0xa811,	// (0x00028c3b) bg_cl_header_pane_g3

0xd2d1,	// (0x0002b6fb) bg_cl_header_pane_g4

0xd2c9,	// (0x0002b6f3) bg_cl_header_pane_g5

0xd521,	// (0x0002b94b) bg_cl_header_pane_g6

0xd2e9,	// (0x0002b713) bg_cl_header_pane_g7

0xd2f1,	// (0x0002b71b) bg_cl_header_pane_g8

0xd2e1,	// (0x0002b70b) bg_cl_header_pane_g9

0x0008,

0xfa7f,	// (0x0002dea9) bg_cl_header_pane_g

0x75d5,	// (0x000259ff) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x75d5,	// (0x000259ff) hc_cl_list_double_graphic_heading_pane

0x75e6,	// (0x00025a10) hc_cl_list_single_graphic_pane_ParamLimits

0x75e6,	// (0x00025a10) hc_cl_list_single_graphic_pane

0x75ff,	// (0x00025a29) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x75ff,	// (0x00025a29) hc_cl_list_single_graphic_pane_g1

0x760b,	// (0x00025a35) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x760b,	// (0x00025a35) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfa92,	// (0x0002debc) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfa92,	// (0x0002debc) hc_cl_list_single_graphic_pane_g

0x761f,	// (0x00025a49) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x761f,	// (0x00025a49) hc_cl_list_single_graphic_pane_t1

0x75ff,	// (0x00025a29) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x75ff,	// (0x00025a29) hc_cl_list_double_graphic_heading_pane_g1

0x7634,	// (0x00025a5e) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x7634,	// (0x00025a5e) hc_cl_list_double_graphic_heading_pane_g2

0x7648,	// (0x00025a72) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x7648,	// (0x00025a72) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfa97,	// (0x0002dec1) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfa97,	// (0x0002dec1) hc_cl_list_double_graphic_heading_pane_g

0x765c,	// (0x00025a86) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x765c,	// (0x00025a86) hc_cl_list_double_graphic_heading_pane_t1

0x7671,	// (0x00025a9b) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x7671,	// (0x00025a9b) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfa9e,	// (0x0002dec8) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfa9e,	// (0x0002dec8) hc_cl_list_double_graphic_heading_pane_t

0x2536,	// (0x00020960) vid4_progress_pane_g1

0x2546,	// (0x00020970) vid4_progress_pane_g2

0x2556,	// (0x00020980) vid4_progress_pane_g3

0x2568,	// (0x00020992) vid4_progress_pane_g4

0x0004,

0xfaa3,	// (0x0002decd) vid4_progress_pane_g

0x2580,	// (0x000209aa) vid4_progress_pane_t1

0x2596,	// (0x000209c0) vid4_progress_pane_t2

0x0002,

0xfaae,	// (0x0002ded8) vid4_progress_pane_t

0x25c0,	// (0x000209ea) wait_bar_pane_cp07

0xc698,	// (0x0002aac2) blid_firmament_pane_ParamLimits

0xc6db,	// (0x0002ab05) popup_blid_sat_info2_window_g1

0xc6ff,	// (0x0002ab29) popup_blid_sat_info2_window_t3

0xc70d,	// (0x0002ab37) popup_blid_sat_info2_window_t4

0xc71b,	// (0x0002ab45) popup_blid_sat_info2_window_t5

0xc729,	// (0x0002ab53) popup_blid_sat_info2_window_t6

0xc739,	// (0x0002ab63) popup_blid_sat_info2_window_t7

0xc747,	// (0x0002ab71) popup_blid_sat_info2_window_t8

0xc755,	// (0x0002ab7f) popup_blid_sat_info2_window_t9

0xc763,	// (0x0002ab8d) popup_blid_sat_info2_window_t10

0xc825,	// (0x0002ac4f) aid_firma_cardinal_ParamLimits

0xc839,	// (0x0002ac63) blid_firmament_pane_t1_ParamLimits

0xc850,	// (0x0002ac7a) blid_firmament_pane_t2_ParamLimits

0xc867,	// (0x0002ac91) blid_firmament_pane_t3_ParamLimits

0xc87e,	// (0x0002aca8) blid_firmament_pane_t4_ParamLimits

0xf6b8,	// (0x0002dae2) blid_firmament_pane_t_ParamLimits

0xc895,	// (0x0002acbf) blid_sat_info_pane_ParamLimits

0x13b5,	// (0x0001f7df) main_cam_set_pane_ParamLimits

0x652b,	// (0x00024955) aid_size_cell_colour_35_ParamLimits

0x6545,	// (0x0002496f) aid_size_cell_colour_112_ParamLimits

0x655c,	// (0x00024986) aid_size_cell_effect_ParamLimits

0xa56f,	// (0x00028999) bg_tb_trans_pane_cp02_ParamLimits

0xadb7,	// (0x000291e1) heading_imed_pane_ParamLimits

0x6576,	// (0x000249a0) listscroll_imed_pane_ParamLimits

0xbac3,	// (0x00029eed) popup_call2_audio_first_window_g5_ParamLimits

0xbac3,	// (0x00029eed) popup_call2_audio_first_window_g5

0x1c3d,	// (0x00020067) aid_size_touch_image3_arrow_left_ParamLimits

0x1c3d,	// (0x00020067) aid_size_touch_image3_arrow_left

0x1c53,	// (0x0002007d) aid_size_touch_image3_arrow_right_ParamLimits

0x1c53,	// (0x0002007d) aid_size_touch_image3_arrow_right

0x25ab,	// (0x000209d5) vid4_progress_pane_t3

0x6814,	// (0x00024c3e) main_hwr_training_symbol_option_pane_ParamLimits

0x6814,	// (0x00024c3e) main_hwr_training_symbol_option_pane

0xd0e4,	// (0x0002b50e) popup_hwr_training_preview_window_ParamLimits

0xd0e4,	// (0x0002b50e) popup_hwr_training_preview_window

0x18fb,	// (0x0001fd25) hwr_training_navi_pane_g5_ParamLimits

0x18fb,	// (0x0001fd25) hwr_training_navi_pane_g5

0xd2af,	// (0x0002b6d9) popup_char_count_window

0x0f4f,	// (0x0001f379) bg_popup_sub_pane_cp20_ParamLimits

0x2477,	// (0x000208a1) list_vitu2_match_list_pane_ParamLimits

0x2483,	// (0x000208ad) vitu2_page_scroll_pane_ParamLimits

0x2483,	// (0x000208ad) vitu2_page_scroll_pane

0xd87e,	// (0x0002bca8) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd87e,	// (0x0002bca8) list_single_hwr_training_symbol_option_pane

0xd891,	// (0x0002bcbb) list_single_hwr_training_symbol_option_pane_g1

0xd899,	// (0x0002bcc3) list_single_hwr_training_symbol_option_pane_t1

0xd8a7,	// (0x0002bcd1) bg_button_pane_cp023

0xd8b0,	// (0x0002bcda) bg_button_pane_cp024

0x76b5,	// (0x00025adf) vitu2_page_scroll_pane_g1

0x76bd,	// (0x00025ae7) vitu2_page_scroll_pane_g2

0x0001,

0xfab5,	// (0x0002dedf) vitu2_page_scroll_pane_g

0x76c5,	// (0x00025aef) vitu2_page_scroll_pane_t1

0xc5f8,	// (0x0002aa22) popup_char_count_window_g1

0xd8f5,	// (0x0002bd1f) popup_char_count_window_g2

0xd8fe,	// (0x0002bd28) popup_char_count_window_g3

0x0002,

0xfaba,	// (0x0002dee4) popup_char_count_window_g

0xd907,	// (0x0002bd31) popup_char_count_window_t1

0x0f5d,	// (0x0001f387) main_vded2_pane

0xcde3,	// (0x0002b20d) aid_size_cell_imed_line

0xcded,	// (0x0002b217) grid_imed_line_width_pane

0x2079,	// (0x000204a3) vid4_indicators_pane_g4

0xd915,	// (0x0002bd3f) cell_imed_line_width_pane_ParamLimits

0xd915,	// (0x0002bd3f) cell_imed_line_width_pane

0xd929,	// (0x0002bd53) cell_imed_line_width_pane_g1

0xd8ce,	// (0x0002bcf8) cell_imed_line_width_pane_g2

0x0001,

0xfac1,	// (0x0002deeb) cell_imed_line_width_pane_g

0x76d4,	// (0x00025afe) main_vded2_pane_g1_ParamLimits

0x76d4,	// (0x00025afe) main_vded2_pane_g1

0x76e1,	// (0x00025b0b) main_vded2_pane_g2_ParamLimits

0x76e1,	// (0x00025b0b) main_vded2_pane_g2

0x0001,

0xfac6,	// (0x0002def0) main_vded2_pane_g_ParamLimits

0xfac6,	// (0x0002def0) main_vded2_pane_g

0x76ef,	// (0x00025b19) vded2_slider_pane_ParamLimits

0x76ef,	// (0x00025b19) vded2_slider_pane

0x76fc,	// (0x00025b26) aid_size_touch_vded2_end

0x7706,	// (0x00025b30) aid_size_touch_vded2_playhead

0xd932,	// (0x0002bd5c) aid_size_touch_vded2_start

0xd93a,	// (0x0002bd64) vded2_slider_bg_pane

0xd943,	// (0x0002bd6d) vded2_slider_pane_g1

0xd94c,	// (0x0002bd76) vded2_slider_pane_g2

0x770e,	// (0x00025b38) vded2_slider_pane_g3

0x0002,

0xfacb,	// (0x0002def5) vded2_slider_pane_g

0xd954,	// (0x0002bd7e) vded2_slider_bg_pane_g1

0xd95d,	// (0x0002bd87) vded2_slider_bg_pane_g2

0xd966,	// (0x0002bd90) vded2_slider_bg_pane_g3

0x0002,

0xfad2,	// (0x0002defc) vded2_slider_bg_pane_g

0x4db5,	// (0x000231df) aid_postcard_touch_down_pane_ParamLimits

0x4db5,	// (0x000231df) aid_postcard_touch_down_pane

0x4dc5,	// (0x000231ef) aid_postcard_touch_up_pane_ParamLimits

0x4dc5,	// (0x000231ef) aid_postcard_touch_up_pane

0x0f5d,	// (0x0001f387) main_blid2_pane

0x13de,	// (0x0001f808) popup_blid2_search_window

0x9c9f,	// (0x000280c9) blid2_gps_pane

0x9c9f,	// (0x000280c9) blid2_navig_pane

0x9c9f,	// (0x000280c9) blid2_search_pane

0x9c9f,	// (0x000280c9) blid2_tripm_pane

0x7717,	// (0x00025b41) blid2_search_pane_g1_ParamLimits

0x7717,	// (0x00025b41) blid2_search_pane_g1

0x7727,	// (0x00025b51) blid2_search_pane_t1_ParamLimits

0x7727,	// (0x00025b51) blid2_search_pane_t1

0x7739,	// (0x00025b63) aid_size_cell_blid2_gps_ParamLimits

0x7739,	// (0x00025b63) aid_size_cell_blid2_gps

0x7749,	// (0x00025b73) blid2_gps_pane_g1_ParamLimits

0x7749,	// (0x00025b73) blid2_gps_pane_g1

0x7755,	// (0x00025b7f) grid_blid2_satellite_pane_ParamLimits

0x7755,	// (0x00025b7f) grid_blid2_satellite_pane

0x7765,	// (0x00025b8f) blid2_navig_pane_g1_ParamLimits

0x7765,	// (0x00025b8f) blid2_navig_pane_g1

0x7771,	// (0x00025b9b) blid2_navig_pane_t1_ParamLimits

0x7771,	// (0x00025b9b) blid2_navig_pane_t1

0x7783,	// (0x00025bad) blid2_navig_pane_t2_ParamLimits

0x7783,	// (0x00025bad) blid2_navig_pane_t2

0x0001,

0xfad9,	// (0x0002df03) blid2_navig_pane_t_ParamLimits

0xfad9,	// (0x0002df03) blid2_navig_pane_t

0x7795,	// (0x00025bbf) blid2_navig_ring_pane_ParamLimits

0x7795,	// (0x00025bbf) blid2_navig_ring_pane

0x77a5,	// (0x00025bcf) blid2_speed_pane_ParamLimits

0x77a5,	// (0x00025bcf) blid2_speed_pane

0x77b1,	// (0x00025bdb) blid2_tripm_pane_g1_ParamLimits

0x77b1,	// (0x00025bdb) blid2_tripm_pane_g1

0x77c1,	// (0x00025beb) blid2_tripm_pane_g2_ParamLimits

0x77c1,	// (0x00025beb) blid2_tripm_pane_g2

0x77cd,	// (0x00025bf7) blid2_tripm_pane_g3_ParamLimits

0x77cd,	// (0x00025bf7) blid2_tripm_pane_g3

0x77d9,	// (0x00025c03) blid2_tripm_pane_g4_ParamLimits

0x77d9,	// (0x00025c03) blid2_tripm_pane_g4

0x77e5,	// (0x00025c0f) blid2_tripm_pane_g5_ParamLimits

0x77e5,	// (0x00025c0f) blid2_tripm_pane_g5

0x0005,

0xfade,	// (0x0002df08) blid2_tripm_pane_g_ParamLimits

0xfade,	// (0x0002df08) blid2_tripm_pane_g

0x7801,	// (0x00025c2b) blid2_tripm_pane_t1_ParamLimits

0x7801,	// (0x00025c2b) blid2_tripm_pane_t1

0x7815,	// (0x00025c3f) blid2_tripm_pane_t2_ParamLimits

0x7815,	// (0x00025c3f) blid2_tripm_pane_t2

0x7827,	// (0x00025c51) blid2_tripm_pane_t3_ParamLimits

0x7827,	// (0x00025c51) blid2_tripm_pane_t3

0x0003,

0xfaeb,	// (0x0002df15) blid2_tripm_pane_t_ParamLimits

0xfaeb,	// (0x0002df15) blid2_tripm_pane_t

0x7859,	// (0x00025c83) cell_blid2_satellite_pane_ParamLimits

0x7859,	// (0x00025c83) cell_blid2_satellite_pane

0x7873,	// (0x00025c9d) cell_blid2_satellite_pane_g1

0xd96f,	// (0x0002bd99) cell_blid2_satellite_pane_t1

0xc8a5,	// (0x0002accf) blid2_speed_pane_g1

0xd97d,	// (0x0002bda7) blid2_speed_pane_t1

0xd98b,	// (0x0002bdb5) blid2_speed_pane_t2

0x0001,

0xfaf4,	// (0x0002df1e) blid2_speed_pane_t

0xc8a5,	// (0x0002accf) blid2_navig_ring_pane_g1

0x787c,	// (0x00025ca6) blid2_navig_ring_pane_g2

0x7884,	// (0x00025cae) blid2_navig_ring_pane_g3

0x788c,	// (0x00025cb6) blid2_navig_ring_pane_g4

0x7894,	// (0x00025cbe) blid2_navig_ring_pane_g5

0x0004,

0xfaf9,	// (0x0002df23) blid2_navig_ring_pane_g

0x9c9f,	// (0x000280c9) bg_popup_window_pane_cp011

0xd999,	// (0x0002bdc3) popup_blid2_search_window_g1

0xd9a1,	// (0x0002bdcb) popup_blid2_search_window_t1

0xd9af,	// (0x0002bdd9) popup_blid2_search_window_t2

0x0001,

0xfb04,	// (0x0002df2e) popup_blid2_search_window_t

0xa700,	// (0x00028b2a) main_browser_pane_g1

0xa3dc,	// (0x00028806) main_browser_pane_ParamLimits

0x13b5,	// (0x0001f7df) bg_button_pane_cp011_ParamLimits

0x239e,	// (0x000207c8) cell_vitu2_function_pane_g1_ParamLimits

0xc49d,	// (0x0002a8c7) bg_popup_sub_pane_cp22_ParamLimits

0x7223,	// (0x0002564d) input_focus_pane_cp08_ParamLimits

0x723a,	// (0x00025664) popup_vitu2_query_button_pane_ParamLimits

0x723a,	// (0x00025664) popup_vitu2_query_button_pane

0x724b,	// (0x00025675) popup_vitu2_query_input_button_pane

0xd55c,	// (0x0002b986) popup_vitu2_query_window_g1_ParamLimits

0x7255,	// (0x0002567f) popup_vitu2_query_window_g2_ParamLimits

0xfa05,	// (0x0002de2f) popup_vitu2_query_window_g_ParamLimits

0x9c9f,	// (0x000280c9) bg_button_pane_cp026

0x789c,	// (0x00025cc6) popup_vitu2_query_input_button_pane_g1

0x9c9f,	// (0x000280c9) bg_button_pane_cp025

0xd9bd,	// (0x0002bde7) popup_vitu2_query_button_pane_t1

0x5ad3,	// (0x00023efd) main_mp3_pane_t6

0x5ae3,	// (0x00023f0d) popup_slider_window_cp01

0x1f56,	// (0x00020380) cam4_battery_pane

0x2036,	// (0x00020460) cam4_battery_pane_cp02

0x252e,	// (0x00020958) cam4_battery_pane_cp01

0x252e,	// (0x00020958) cam4_battery_pane_cp03

0xd8d6,	// (0x0002bd00) cam4_battery_pane_g1

0xc8a5,	// (0x0002accf) cam4_battery_pane_g2

0x0001,

0xfb09,	// (0x0002df33) cam4_battery_pane_g

0xc771,	// (0x0002ab9b) popup_blid_sat_info2_window_t11

0xae75,	// (0x0002929f) aid_size_touch_mv_arrow_left_ParamLimits

0xae9e,	// (0x000292c8) aid_size_touch_mv_arrow_right_ParamLimits

0xaefc,	// (0x00029326) navi_pane_g1_ParamLimits

0xaf08,	// (0x00029332) navi_pane_g2_ParamLimits

0xaf36,	// (0x00029360) navi_pane_g3_ParamLimits

0xf3ca,	// (0x0002d7f4) navi_pane_g_ParamLimits

0x483a,	// (0x00022c64) navi_pane_mv_t1_ParamLimits

0x6582,	// (0x000249ac) grid_imed_effect_pane_ParamLimits

0x32f1,	// (0x0002171b) aid_placing_vt_slider_lsc

0xa64f,	// (0x00028a79) aid_placing_vt_slider_prt

0xa56f,	// (0x00028999) bg_tb_trans_pane_cp01_ParamLimits

0xca28,	// (0x0002ae52) popup_image_details_window_g1_ParamLimits

0xca3b,	// (0x0002ae65) popup_image_details_window_g2_ParamLimits

0xca50,	// (0x0002ae7a) popup_image_details_window_g3_ParamLimits

0xca50,	// (0x0002ae7a) popup_image_details_window_g3

0xf6fd,	// (0x0002db27) popup_image_details_window_g_ParamLimits

0xca64,	// (0x0002ae8e) popup_image_details_window_t1_ParamLimits

0xca76,	// (0x0002aea0) popup_image_details_window_t2_ParamLimits

0xca8f,	// (0x0002aeb9) popup_image_details_window_t3_ParamLimits

0xcaa3,	// (0x0002aecd) popup_image_details_window_t4_ParamLimits

0xcabe,	// (0x0002aee8) popup_image_details_window_t5_ParamLimits

0xf704,	// (0x0002db2e) popup_image_details_window_t_ParamLimits

0x75aa,	// (0x000259d4) cl_header_name_pane_ParamLimits

0x75aa,	// (0x000259d4) cl_header_name_pane

0x78a4,	// (0x00025cce) cl_header_name_pane_t1_ParamLimits

0x78a4,	// (0x00025cce) cl_header_name_pane_t1

0x78bb,	// (0x00025ce5) cl_header_name_pane_t2_ParamLimits

0x78bb,	// (0x00025ce5) cl_header_name_pane_t2

0x78e5,	// (0x00025d0f) cl_header_name_pane_t3_ParamLimits

0x78e5,	// (0x00025d0f) cl_header_name_pane_t3

0x0002,

0xfb0e,	// (0x0002df38) cl_header_name_pane_t_ParamLimits

0xfb0e,	// (0x0002df38) cl_header_name_pane_t

0xafc5,	// (0x000293ef) navi_pane_mv_g2_ParamLimits

0xd26c,	// (0x0002b696) field_vitu2_entry_pane_g1_ParamLimits

0xd278,	// (0x0002b6a2) field_vitu2_entry_pane_g2_ParamLimits

0xd284,	// (0x0002b6ae) field_vitu2_entry_pane_g3_ParamLimits

0xd284,	// (0x0002b6ae) field_vitu2_entry_pane_g3

0xf904,	// (0x0002dd2e) field_vitu2_entry_pane_g_ParamLimits

0x226a,	// (0x00020694) cell_vitu2_itu_pane_g1_ParamLimits

0x227c,	// (0x000206a6) cell_vitu2_itu_pane_g2_ParamLimits

0x227c,	// (0x000206a6) cell_vitu2_itu_pane_g2

0x0001,

0xf910,	// (0x0002dd3a) cell_vitu2_itu_pane_g_ParamLimits

0xf910,	// (0x0002dd3a) cell_vitu2_itu_pane_g

0x13b5,	// (0x0001f7df) bg_vkb2_func_pane_cp05_ParamLimits

0x13b5,	// (0x0001f7df) bg_vkb2_func_pane_cp05

0x13b5,	// (0x0001f7df) bg_vkb2_func_pane_cp03

0x13b5,	// (0x0001f7df) bg_vkb2_func_pane_cp04

0x13b5,	// (0x0001f7df) bg_vkb2_func_pane_cp10_ParamLimits

0x13b5,	// (0x0001f7df) bg_vkb2_func_pane_cp10

0x754c,	// (0x00025976) bg_vkb2_func_pane_cp08

0x7532,	// (0x0002595c) bg_vkb2_func_pane_cp06

0x7540,	// (0x0002596a) bg_vkb2_func_pane_cp07

0xd8b9,	// (0x0002bce3) bg_vkb2_func_pane_cp11_ParamLimits

0xd8b9,	// (0x0002bce3) bg_vkb2_func_pane_cp11

0xd8e0,	// (0x0002bd0a) bg_vkb2_func_pane_cp12_ParamLimits

0xd8e0,	// (0x0002bd0a) bg_vkb2_func_pane_cp12

0x9c9f,	// (0x000280c9) bg_vkb2_func_pane_cp09

0xd2c1,	// (0x0002b6eb) bg_vkb2_func_pane_g1

0xa811,	// (0x00028c3b) bg_vkb2_func_pane_g2

0xd2c9,	// (0x0002b6f3) bg_vkb2_func_pane_g3

0xd2d1,	// (0x0002b6fb) bg_vkb2_func_pane_g4

0xd521,	// (0x0002b94b) bg_vkb2_func_pane_g5

0xd2e9,	// (0x0002b713) bg_vkb2_func_pane_g6

0xd2f1,	// (0x0002b71b) bg_vkb2_func_pane_g7

0xd2e1,	// (0x0002b70b) bg_vkb2_func_pane_g8

0xa7f1,	// (0x00028c1b) bg_vkb2_func_pane_g9

0x0008,

0xfb15,	// (0x0002df3f) bg_vkb2_func_pane_g

0x77f3,	// (0x00025c1d) blid2_tripm_pane_g6_ParamLimits

0x77f3,	// (0x00025c1d) blid2_tripm_pane_g6

0xd1b0,	// (0x0002b5da) mp4_progress_pane_g1

0x784d,	// (0x00025c77) blid2_tripm_values_pane_ParamLimits

0x784d,	// (0x00025c77) blid2_tripm_values_pane

0x790a,	// (0x00025d34) blid2_tripm_values_pane_t1

0x7918,	// (0x00025d42) blid2_tripm_values_pane_t2

0x7926,	// (0x00025d50) blid2_tripm_values_pane_t3

0x7934,	// (0x00025d5e) blid2_tripm_values_pane_t4

0x7942,	// (0x00025d6c) blid2_tripm_values_pane_t5

0x7950,	// (0x00025d7a) blid2_tripm_values_pane_t6

0x795e,	// (0x00025d88) blid2_tripm_values_pane_t7

0x796c,	// (0x00025d96) blid2_tripm_values_pane_t8

0x797a,	// (0x00025da4) blid2_tripm_values_pane_t9

0x0008,

0xfb28,	// (0x0002df52) blid2_tripm_values_pane_t

0x3331,	// (0x0002175b) call_video_pane_t1_ParamLimits

0x3352,	// (0x0002177c) call_video_pane_t2_ParamLimits

0xf253,	// (0x0002d67d) call_video_pane_t_ParamLimits

0x4d65,	// (0x0002318f) msg_header_pane_g1_ParamLimits

0xb1a7,	// (0x000295d1) msg_header_pane_g2_ParamLimits

0xb1a7,	// (0x000295d1) msg_header_pane_g2

0x0001,

0xf46d,	// (0x0002d897) msg_header_pane_g_ParamLimits

0xf46d,	// (0x0002d897) msg_header_pane_g

0xa3dc,	// (0x00028806) main_clock2_pane_ParamLimits

0x639f,	// (0x000247c9) grid_clock2_toolbar_pane_ParamLimits

0x639f,	// (0x000247c9) grid_clock2_toolbar_pane

0x639f,	// (0x000247c9) listscroll_clock2_pane_ParamLimits

0x639f,	// (0x000247c9) listscroll_clock2_pane

0x644f,	// (0x00024879) main_clock2_pane_t3_ParamLimits

0x644f,	// (0x00024879) main_clock2_pane_t3

0x6461,	// (0x0002488b) main_clock2_pane_t4_ParamLimits

0x6461,	// (0x0002488b) main_clock2_pane_t4

0xd9cb,	// (0x0002bdf5) cell_clock2_toolbar_pane

0xd9d3,	// (0x0002bdfd) cell_clock2_toolbar_pane_cp01

0xd9d3,	// (0x0002bdfd) cell_clock2_toolbar_pane_cp02

0xd9db,	// (0x0002be05) cell_clock2_toolbar_pane_cp03

0xd9e3,	// (0x0002be0d) list_clock2_pane

0xadeb,	// (0x00029215) scroll_pane_cp10

0xd9eb,	// (0x0002be15) list_single_clock2_pane_ParamLimits

0xd9eb,	// (0x0002be15) list_single_clock2_pane

0xa5b8,	// (0x000289e2) list_highlight_pane_cp08

0xd9f8,	// (0x0002be22) list_single_clock2_pane_t1

0xda06,	// (0x0002be30) list_single_clock2_pane_t2

0x0001,

0xfb3b,	// (0x0002df65) list_single_clock2_pane_t

0x9c9f,	// (0x000280c9) bg_button_pane_cp10

0xda14,	// (0x0002be3e) cell_clock2_toolbar_pane_g1

0x1350,	// (0x0001f77a) aid_main_viewer_pane_g1_ParamLimits

0x1350,	// (0x0001f77a) aid_main_viewer_pane_g1

0x135c,	// (0x0001f786) aid_main_viewer_pane_g2_ParamLimits

0x135c,	// (0x0001f786) aid_main_viewer_pane_g2

0x4d71,	// (0x0002319b) aid_main_viewer_pane_g3_ParamLimits

0x4d71,	// (0x0002319b) aid_main_viewer_pane_g3

0x4d82,	// (0x000231ac) aid_main_viewer_pane_g4_ParamLimits

0x4d82,	// (0x000231ac) aid_main_viewer_pane_g4

0x0003,

0xf47e,	// (0x0002d8a8) aid_main_viewer_pane_g_ParamLimits

0xf47e,	// (0x0002d8a8) aid_main_viewer_pane_g

0x13a8,	// (0x0001f7d2) main_calc_pane_ParamLimits

0x13c3,	// (0x0001f7ed) main_dialer2_pane_ParamLimits

0x0f5d,	// (0x0001f387) main_cam6_pane

0x0f5d,	// (0x0001f387) main_vid6_pane

0x63ab,	// (0x000247d5) listscroll_gen_pane_cp06_ParamLimits

0x63ab,	// (0x000247d5) listscroll_gen_pane_cp06

0x6473,	// (0x0002489d) main_clock2_pane_t5_ParamLimits

0x6473,	// (0x0002489d) main_clock2_pane_t5

0x64c0,	// (0x000248ea) aid_call2_pane_cp10_ParamLimits

0x64d2,	// (0x000248fc) aid_call_pane_cp10_ParamLimits

0xae69,	// (0x00029293) popup_clock_analogue_window_cp10_g1_ParamLimits

0xae69,	// (0x00029293) popup_clock_analogue_window_cp10_g2_ParamLimits

0x64e4,	// (0x0002490e) popup_clock_analogue_window_cp10_g3_ParamLimits

0x64e4,	// (0x0002490e) popup_clock_analogue_window_cp10_g4_ParamLimits

0xae69,	// (0x00029293) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7b9,	// (0x0002dbe3) popup_clock_analogue_window_cp10_g_ParamLimits

0x64fa,	// (0x00024924) popup_clock_analogue_window_cp10_t1_ParamLimits

0x68e6,	// (0x00024d10) cell_dialer2_keypad_pane_g2_ParamLimits

0x68e6,	// (0x00024d10) cell_dialer2_keypad_pane_g2

0x0001,

0xf8a3,	// (0x0002dccd) cell_dialer2_keypad_pane_g_ParamLimits

0xf8a3,	// (0x0002dccd) cell_dialer2_keypad_pane_g

0x6902,	// (0x00024d2c) cell_dialer2_keypad_pane_t1

0x6d3a,	// (0x00025164) main_cset_text2_pane_ParamLimits

0x6d3a,	// (0x00025164) main_cset_text2_pane

0xd763,	// (0x0002bb8d) area_vitu2_query_pane_g1_ParamLimits

0x74d1,	// (0x000258fb) area_vitu2_query_pane_g2_ParamLimits

0xfa58,	// (0x0002de82) area_vitu2_query_pane_g_ParamLimits

0xd7e7,	// (0x0002bc11) area_vitu2_query_pane_t7_ParamLimits

0xd7e7,	// (0x0002bc11) area_vitu2_query_pane_t7

0x7532,	// (0x0002595c) bg_button_pane_cp018_ParamLimits

0x7540,	// (0x0002596a) bg_button_pane_cp021_ParamLimits

0x754c,	// (0x00025976) bg_button_pane_cp022_ParamLimits

0x754c,	// (0x00025976) bg_vkb2_func_pane_cp08_ParamLimits

0x7532,	// (0x0002595c) bg_vkb2_func_pane_cp06_ParamLimits

0x7540,	// (0x0002596a) bg_vkb2_func_pane_cp07_ParamLimits

0x755d,	// (0x00025987) input_focus_pane_cp09_ParamLimits

0x25d3,	// (0x000209fd) cam6_autofocus_pane_ParamLimits

0x25d3,	// (0x000209fd) cam6_autofocus_pane

0x25f5,	// (0x00020a1f) cam6_image_uncrop_pane_ParamLimits

0x25f5,	// (0x00020a1f) cam6_image_uncrop_pane

0x2622,	// (0x00020a4c) cam6_indi_pane_ParamLimits

0x2622,	// (0x00020a4c) cam6_indi_pane

0x263c,	// (0x00020a66) cam6_mode_pane_ParamLimits

0x263c,	// (0x00020a66) cam6_mode_pane

0x2650,	// (0x00020a7a) cam6_timer_pane_ParamLimits

0x2650,	// (0x00020a7a) cam6_timer_pane

0x265c,	// (0x00020a86) cam6_zoom_pane_ParamLimits

0x265c,	// (0x00020a86) cam6_zoom_pane

0x7988,	// (0x00025db2) cam6_mode_pane_g1_ParamLimits

0x7988,	// (0x00025db2) cam6_mode_pane_g1

0x7994,	// (0x00025dbe) cam6_mode_pane_g2_ParamLimits

0x7994,	// (0x00025dbe) cam6_mode_pane_g2

0x79a0,	// (0x00025dca) cam6_mode_pane_g3_ParamLimits

0x79a0,	// (0x00025dca) cam6_mode_pane_g3

0x79ac,	// (0x00025dd6) cam6_mode_pane_g4_ParamLimits

0x79ac,	// (0x00025dd6) cam6_mode_pane_g4

0x0003,

0xfb40,	// (0x0002df6a) cam6_mode_pane_g_ParamLimits

0xfb40,	// (0x0002df6a) cam6_mode_pane_g

0xd1fd,	// (0x0002b627) bg_tb_trans_pane_cp08_ParamLimits

0xd1fd,	// (0x0002b627) bg_tb_trans_pane_cp08

0xda1c,	// (0x0002be46) cam6_battery_pane_ParamLimits

0xda1c,	// (0x0002be46) cam6_battery_pane

0xda32,	// (0x0002be5c) cam6_indi_pane_g1_ParamLimits

0xda32,	// (0x0002be5c) cam6_indi_pane_g1

0xda44,	// (0x0002be6e) cam6_indi_pane_g2_ParamLimits

0xda44,	// (0x0002be6e) cam6_indi_pane_g2

0xda56,	// (0x0002be80) cam6_indi_pane_g3_ParamLimits

0xda56,	// (0x0002be80) cam6_indi_pane_g3

0x0002,

0xfb49,	// (0x0002df73) cam6_indi_pane_g_ParamLimits

0xfb49,	// (0x0002df73) cam6_indi_pane_g

0xda68,	// (0x0002be92) cam6_indi_pane_t1_ParamLimits

0xda68,	// (0x0002be92) cam6_indi_pane_t1

0x6a3b,	// (0x00024e65) cam6_autofocus_pane_g1

0x6a33,	// (0x00024e5d) cam6_autofocus_pane_g2

0x6a4b,	// (0x00024e75) cam6_autofocus_pane_g3

0x6a43,	// (0x00024e6d) cam6_autofocus_pane_g4

0x0003,

0xfb50,	// (0x0002df7a) cam6_autofocus_pane_g

0xda8e,	// (0x0002beb8) cam6_timer_pane_g1

0xda96,	// (0x0002bec0) cam6_timer_pane_t1

0xdaa4,	// (0x0002bece) cam6_zoom_cont_pane

0xdaac,	// (0x0002bed6) cam6_zoom_pane_g1

0xdab4,	// (0x0002bede) cam6_zoom_pane_g2

0x79b8,	// (0x00025de2) cam6_zoom_pane_g3

0x0002,

0xfb59,	// (0x0002df83) cam6_zoom_pane_g

0xc8a5,	// (0x0002accf) cam6_battery_pane_g1

0xc8a5,	// (0x0002accf) cam6_battery_pane_g2

0x0001,

0xf6c1,	// (0x0002daeb) cam6_battery_pane_g

0xdabc,	// (0x0002bee6) cam6_zoom_cont_pane_g1

0xdac5,	// (0x0002beef) cam6_zoom_cont_pane_g2

0xdace,	// (0x0002bef8) cam6_zoom_cont_pane_g3

0x0002,

0xfb60,	// (0x0002df8a) cam6_zoom_cont_pane_g

0x79d5,	// (0x00025dff) cam6_mode_pane_cp_ParamLimits

0x79d5,	// (0x00025dff) cam6_mode_pane_cp

0x79e9,	// (0x00025e13) cam6_zoom_pane_cp_ParamLimits

0x79e9,	// (0x00025e13) cam6_zoom_pane_cp

0x7a01,	// (0x00025e2b) vid6_image_uncrop_cif_pane_ParamLimits

0x7a01,	// (0x00025e2b) vid6_image_uncrop_cif_pane

0x7a2d,	// (0x00025e57) vid6_image_uncrop_nhd_pane_ParamLimits

0x7a2d,	// (0x00025e57) vid6_image_uncrop_nhd_pane

0x7a4a,	// (0x00025e74) vid6_image_uncrop_vga_pane_ParamLimits

0x7a4a,	// (0x00025e74) vid6_image_uncrop_vga_pane

0x7a69,	// (0x00025e93) vid6_image_uncrop_wvga_pane_ParamLimits

0x7a69,	// (0x00025e93) vid6_image_uncrop_wvga_pane

0x7a86,	// (0x00025eb0) vid6_indi_pane_ParamLimits

0x7a86,	// (0x00025eb0) vid6_indi_pane

0xd1fd,	// (0x0002b627) bg_tb_trans_pane_cp09_ParamLimits

0xd1fd,	// (0x0002b627) bg_tb_trans_pane_cp09

0xdae6,	// (0x0002bf10) cam6_battery_pane_cp_ParamLimits

0xdae6,	// (0x0002bf10) cam6_battery_pane_cp

0xdaf2,	// (0x0002bf1c) vid6_indi_pane_g1_ParamLimits

0xdaf2,	// (0x0002bf1c) vid6_indi_pane_g1

0xdb04,	// (0x0002bf2e) vid6_indi_pane_g2_ParamLimits

0xdb04,	// (0x0002bf2e) vid6_indi_pane_g2

0xdb16,	// (0x0002bf40) vid6_indi_pane_g3_ParamLimits

0xdb16,	// (0x0002bf40) vid6_indi_pane_g3

0xdb2b,	// (0x0002bf55) vid6_indi_pane_g4_ParamLimits

0xdb2b,	// (0x0002bf55) vid6_indi_pane_g4

0xdb40,	// (0x0002bf6a) vid6_indi_pane_g5_ParamLimits

0xdb40,	// (0x0002bf6a) vid6_indi_pane_g5

0x0004,

0xfb67,	// (0x0002df91) vid6_indi_pane_g_ParamLimits

0xfb67,	// (0x0002df91) vid6_indi_pane_g

0xdb5a,	// (0x0002bf84) vid6_indi_pane_t1_ParamLimits

0xdb5a,	// (0x0002bf84) vid6_indi_pane_t1

0xdb70,	// (0x0002bf9a) vid6_indi_pane_t2_ParamLimits

0xdb70,	// (0x0002bf9a) vid6_indi_pane_t2

0xdb98,	// (0x0002bfc2) vid6_indi_pane_t3_ParamLimits

0xdb98,	// (0x0002bfc2) vid6_indi_pane_t3

0xdbc0,	// (0x0002bfea) vid6_indi_pane_t4_ParamLimits

0xdbc0,	// (0x0002bfea) vid6_indi_pane_t4

0x0003,

0xfb72,	// (0x0002df9c) vid6_indi_pane_t_ParamLimits

0xfb72,	// (0x0002df9c) vid6_indi_pane_t

0xdbe4,	// (0x0002c00e) wait_bar_pane_cp08

0x7aab,	// (0x00025ed5) main_cset_text2_pane_t1_ParamLimits

0x7aab,	// (0x00025ed5) main_cset_text2_pane_t1

0x79c0,	// (0x00025dea) listscroll_gen_pane_cp06_t1_ParamLimits

0x79c0,	// (0x00025dea) listscroll_gen_pane_cp06_t1

0x0f5d,	// (0x0001f387) main_cam6_set_pane

0x1f48,	// (0x00020372) bg_tb_trans_pane_cp06_ParamLimits

0x1f5e,	// (0x00020388) cam4_indicators_pane_g1_ParamLimits

0x1f6f,	// (0x00020399) cam4_indicators_pane_g2_ParamLimits

0xf8e0,	// (0x0002dd0a) cam4_indicators_pane_g_ParamLimits

0x1f8d,	// (0x000203b7) cam4_indicators_pane_t1_ParamLimits

0x13b5,	// (0x0001f7df) bg_tb_trans_pane_cp07_ParamLimits

0x2040,	// (0x0002046a) vid4_indicators_pane_g1_ParamLimits

0x2054,	// (0x0002047e) vid4_indicators_pane_g2_ParamLimits

0x2068,	// (0x00020492) vid4_indicators_pane_g3_ParamLimits

0x2079,	// (0x000204a3) vid4_indicators_pane_g4_ParamLimits

0xf8f2,	// (0x0002dd1c) vid4_indicators_pane_g_ParamLimits

0x2097,	// (0x000204c1) vid4_indicators_pane_t1_ParamLimits

0x2536,	// (0x00020960) vid4_progress_pane_g1_ParamLimits

0x2546,	// (0x00020970) vid4_progress_pane_g2_ParamLimits

0x2556,	// (0x00020980) vid4_progress_pane_g3_ParamLimits

0x2568,	// (0x00020992) vid4_progress_pane_g4_ParamLimits

0xfaa3,	// (0x0002decd) vid4_progress_pane_g_ParamLimits

0x2580,	// (0x000209aa) vid4_progress_pane_t1_ParamLimits

0x2596,	// (0x000209c0) vid4_progress_pane_t2_ParamLimits

0x25ab,	// (0x000209d5) vid4_progress_pane_t3_ParamLimits

0xfaae,	// (0x0002ded8) vid4_progress_pane_t_ParamLimits

0x25c0,	// (0x000209ea) wait_bar_pane_cp07_ParamLimits

0x7ade,	// (0x00025f08) main_cam6_set_pane_g2_ParamLimits

0x7ade,	// (0x00025f08) main_cam6_set_pane_g2

0x7aea,	// (0x00025f14) main_cset6_listscroll_pane_ParamLimits

0x7aea,	// (0x00025f14) main_cset6_listscroll_pane

0x7b15,	// (0x00025f3f) main_cset6_slider_pane_ParamLimits

0x7b15,	// (0x00025f3f) main_cset6_slider_pane

0x7b21,	// (0x00025f4b) main_cset6_text2_pane_ParamLimits

0x7b21,	// (0x00025f4b) main_cset6_text2_pane

0xdbf3,	// (0x0002c01d) main_cset6_text_pane

0xdbfb,	// (0x0002c025) main_cset_list_pane_copy1_ParamLimits

0xdbfb,	// (0x0002c025) main_cset_list_pane_copy1

0xdc0b,	// (0x0002c035) scroll_pane_cp028_copy1

0x7b34,	// (0x00025f5e) cset_list_set_pane_copy1

0x7b47,	// (0x00025f71) aid_position_infowindow_above_copy1

0x7b4f,	// (0x00025f79) aid_position_infowindow_below_copy1

0x7b57,	// (0x00025f81) cset_list_set_pane_g1_copy1

0xd4cc,	// (0x0002b8f6) cset_list_set_pane_g3_copy1_ParamLimits

0xd4cc,	// (0x0002b8f6) cset_list_set_pane_g3_copy1

0xd4db,	// (0x0002b905) cset_list_set_pane_t1_copy1_ParamLimits

0xd4db,	// (0x0002b905) cset_list_set_pane_t1_copy1

0xa56f,	// (0x00028999) list_highlight_pane_cp021_copy1_ParamLimits

0xa56f,	// (0x00028999) list_highlight_pane_cp021_copy1

0xdc14,	// (0x0002c03e) cset6_slider_pane_ParamLimits

0xdc14,	// (0x0002c03e) cset6_slider_pane

0xdc40,	// (0x0002c06a) main_cset6_slider_pane_g1_ParamLimits

0xdc40,	// (0x0002c06a) main_cset6_slider_pane_g1

0x7b5f,	// (0x00025f89) main_cset6_slider_pane_g2_ParamLimits

0x7b5f,	// (0x00025f89) main_cset6_slider_pane_g2

0xdc68,	// (0x0002c092) main_cset6_slider_pane_g3_ParamLimits

0xdc68,	// (0x0002c092) main_cset6_slider_pane_g3

0x7b87,	// (0x00025fb1) main_cset6_slider_pane_g4_ParamLimits

0x7b87,	// (0x00025fb1) main_cset6_slider_pane_g4

0x7b93,	// (0x00025fbd) main_cset6_slider_pane_g5_ParamLimits

0x7b93,	// (0x00025fbd) main_cset6_slider_pane_g5

0xd3f0,	// (0x0002b81a) main_cset6_slider_pane_g7_ParamLimits

0xd3f0,	// (0x0002b81a) main_cset6_slider_pane_g7

0xd3fc,	// (0x0002b826) main_cset6_slider_pane_g8_ParamLimits

0xd3fc,	// (0x0002b826) main_cset6_slider_pane_g8

0x7ba1,	// (0x00025fcb) main_cset6_slider_pane_g9_ParamLimits

0x7ba1,	// (0x00025fcb) main_cset6_slider_pane_g9

0x7bad,	// (0x00025fd7) main_cset6_slider_pane_g10_ParamLimits

0x7bad,	// (0x00025fd7) main_cset6_slider_pane_g10

0x7bb9,	// (0x00025fe3) main_cset6_slider_pane_g11_ParamLimits

0x7bb9,	// (0x00025fe3) main_cset6_slider_pane_g11

0x7bc5,	// (0x00025fef) main_cset6_slider_pane_g12_ParamLimits

0x7bc5,	// (0x00025fef) main_cset6_slider_pane_g12

0x7bd1,	// (0x00025ffb) main_cset6_slider_pane_g13_ParamLimits

0x7bd1,	// (0x00025ffb) main_cset6_slider_pane_g13

0x7bdd,	// (0x00026007) main_cset6_slider_pane_g14_ParamLimits

0x7bdd,	// (0x00026007) main_cset6_slider_pane_g14

0x7be9,	// (0x00026013) main_cset6_slider_pane_g15_ParamLimits

0x7be9,	// (0x00026013) main_cset6_slider_pane_g15

0x7c01,	// (0x0002602b) main_cset6_slider_pane_g16_ParamLimits

0x7c01,	// (0x0002602b) main_cset6_slider_pane_g16

0x7c0f,	// (0x00026039) main_cset6_slider_pane_g17_ParamLimits

0x7c0f,	// (0x00026039) main_cset6_slider_pane_g17

0x0011,

0xfb7b,	// (0x0002dfa5) main_cset6_slider_pane_g_ParamLimits

0xfb7b,	// (0x0002dfa5) main_cset6_slider_pane_g

0xdc74,	// (0x0002c09e) main_cset6_slider_pane_t1_ParamLimits

0xdc74,	// (0x0002c09e) main_cset6_slider_pane_t1

0x7c35,	// (0x0002605f) main_cset6_slider_pane_t2_ParamLimits

0x7c35,	// (0x0002605f) main_cset6_slider_pane_t2

0x7c60,	// (0x0002608a) main_cset6_slider_pane_t3_ParamLimits

0x7c60,	// (0x0002608a) main_cset6_slider_pane_t3

0x7c8b,	// (0x000260b5) main_cset6_slider_pane_t4_ParamLimits

0x7c8b,	// (0x000260b5) main_cset6_slider_pane_t4

0x7cb6,	// (0x000260e0) main_cset6_slider_pane_t5_ParamLimits

0x7cb6,	// (0x000260e0) main_cset6_slider_pane_t5

0xdcb5,	// (0x0002c0df) main_cset6_slider_pane_t7_ParamLimits

0xdcb5,	// (0x0002c0df) main_cset6_slider_pane_t7

0x7ce3,	// (0x0002610d) main_cset6_slider_pane_t8_ParamLimits

0x7ce3,	// (0x0002610d) main_cset6_slider_pane_t8

0x7d07,	// (0x00026131) main_cset6_slider_pane_t9_ParamLimits

0x7d07,	// (0x00026131) main_cset6_slider_pane_t9

0x7d2b,	// (0x00026155) main_cset6_slider_pane_t10_ParamLimits

0x7d2b,	// (0x00026155) main_cset6_slider_pane_t10

0x7d4f,	// (0x00026179) main_cset6_slider_pane_t11_ParamLimits

0x7d4f,	// (0x00026179) main_cset6_slider_pane_t11

0xdceb,	// (0x0002c115) main_cset6_slider_pane_t14_ParamLimits

0xdceb,	// (0x0002c115) main_cset6_slider_pane_t14

0xdd24,	// (0x0002c14e) main_cset6_slider_pane_t15_ParamLimits

0xdd24,	// (0x0002c14e) main_cset6_slider_pane_t15

0x000b,

0xfba0,	// (0x0002dfca) main_cset6_slider_pane_t_ParamLimits

0xfba0,	// (0x0002dfca) main_cset6_slider_pane_t

0xd69a,	// (0x0002bac4) cset_slider_pane_g1_copy1

0xd6a3,	// (0x0002bacd) cset_slider_pane_g2_copy1

0xd6ac,	// (0x0002bad6) cset_slider_pane_g3_copy1

0x9c9f,	// (0x000280c9) bg_popup_sub_pane_cp011_copy1

0xdd5d,	// (0x0002c187) main_cset_text_pane_g1_copy1

0xd570,	// (0x0002b99a) main_cset_text_pane_t1_copy1

0xd57e,	// (0x0002b9a8) main_cset_text_pane_t2_copy1

0xd58c,	// (0x0002b9b6) main_cset_text_pane_t3_copy1

0xd59a,	// (0x0002b9c4) main_cset_text_pane_t4_copy1

0xd5a8,	// (0x0002b9d2) main_cset_text_pane_t5_copy1

0xdd65,	// (0x0002c18f) main_cset_text_pane_t6_copy1

0xdd73,	// (0x0002c19d) main_cset_text_pane_t7_copy1

0x7e4b,	// (0x00026275) main_cset_text2_pane_t1_copy1

0x13b5,	// (0x0001f7df) main_ncimui_pane

0x1414,	// (0x0001f83e) popup_query_ncimui_window_ParamLimits

0x1414,	// (0x0001f83e) popup_query_ncimui_window

0xcb6d,	// (0x0002af97) field_cale_ev2_pane_g4_ParamLimits

0xcb6d,	// (0x0002af97) field_cale_ev2_pane_g4

0x6886,	// (0x00024cb0) cell_video_dialer_keypad_pane_g2_ParamLimits

0x6886,	// (0x00024cb0) cell_video_dialer_keypad_pane_g2

0x0001,

0xf87a,	// (0x0002dca4) cell_video_dialer_keypad_pane_g_ParamLimits

0xf87a,	// (0x0002dca4) cell_video_dialer_keypad_pane_g

0x689e,	// (0x00024cc8) cell_video_dialer_keypad_pane_t1

0x9c9f,	// (0x000280c9) bg_popup_window_pane_cp012

0xac9e,	// (0x000290c8) heading_pane_cp06

0xdd9f,	// (0x0002c1c9) ncim_query_content_pane

0x9c9f,	// (0x000280c9) bg_popup_heading_pane_cp01

0xdda7,	// (0x0002c1d1) ncim_heading_pane_t1

0xddb5,	// (0x0002c1df) ncim_indicator_popup_pane

0xddc7,	// (0x0002c1f1) ncim_query_button_pane

0xdddb,	// (0x0002c205) ncim_query_content_pane_t1

0xdded,	// (0x0002c217) ncim_query_content_pane_t2

0x0005,

0xfbe4,	// (0x0002e00e) ncim_query_content_pane_t

0xde27,	// (0x0002c251) ncim_query_list_pane

0xde39,	// (0x0002c263) ncim_query_popup_pane

0xddb5,	// (0x0002c1df) ncim_indicator_popup_pane_ParamLimits

0x7f9e,	// (0x000263c8) ncim_query_content_pane_g1_ParamLimits

0x7f9e,	// (0x000263c8) ncim_query_content_pane_g1

0xdddb,	// (0x0002c205) ncim_query_content_pane_t1_ParamLimits

0xdded,	// (0x0002c217) ncim_query_content_pane_t2_ParamLimits

0x7faa,	// (0x000263d4) ncim_query_content_pane_t3_ParamLimits

0x7faa,	// (0x000263d4) ncim_query_content_pane_t3

0x7fc7,	// (0x000263f1) ncim_query_content_pane_t4_ParamLimits

0x7fc7,	// (0x000263f1) ncim_query_content_pane_t4

0x7fe4,	// (0x0002640e) ncim_query_content_pane_t5_ParamLimits

0x7fe4,	// (0x0002640e) ncim_query_content_pane_t5

0xddff,	// (0x0002c229) ncim_query_content_pane_t6_ParamLimits

0xddff,	// (0x0002c229) ncim_query_content_pane_t6

0xfbe4,	// (0x0002e00e) ncim_query_content_pane_t_ParamLimits

0xde27,	// (0x0002c251) ncim_query_list_pane_ParamLimits

0xde39,	// (0x0002c263) ncim_query_popup_pane_ParamLimits

0xde4d,	// (0x0002c277) wait_bar_pane_cp04

0x9c9f,	// (0x000280c9) input_focus_pane_cp011

0xde55,	// (0x0002c27f) ncim_query_popup_pane_t1

0xde63,	// (0x0002c28d) ncim_list_query_list_pane_ParamLimits

0xde63,	// (0x0002c28d) ncim_list_query_list_pane

0x9c9f,	// (0x000280c9) bg_button_pane_cp027

0xde70,	// (0x0002c29a) ncim_query_button_pane_g1

0x9c9f,	// (0x000280c9) list_highlight_pane_cp012

0xde7a,	// (0x0002c2a4) ncim_list_query_list_pane_g1

0xde82,	// (0x0002c2ac) ncim_list_query_list_pane_t1

0x1f7e,	// (0x000203a8) cam4_indicators_pane_g3_ParamLimits

0x1f7e,	// (0x000203a8) cam4_indicators_pane_g3

0x2085,	// (0x000204af) vid4_indicators_pane_g5_ParamLimits

0x2085,	// (0x000204af) vid4_indicators_pane_g5

0x2574,	// (0x0002099e) vid4_progress_pane_g5_ParamLimits

0x2574,	// (0x0002099e) vid4_progress_pane_g5

0x7e8a,	// (0x000262b4) main_ncimui_pane_g1

0x7ef2,	// (0x0002631c) ncimui_group_query_pane_ParamLimits

0x7ef2,	// (0x0002631c) ncimui_group_query_pane

0x7f3a,	// (0x00026364) ncimui_list_pane_ParamLimits

0x7f3a,	// (0x00026364) ncimui_list_pane

0x7f61,	// (0x0002638b) ncimui_text_pane_ParamLimits

0x7f61,	// (0x0002638b) ncimui_text_pane

0x8001,	// (0x0002642b) ncimui_text_pane_t1_ParamLimits

0x8001,	// (0x0002642b) ncimui_text_pane_t1

0xde90,	// (0x0002c2ba) ncimui_list_single_graphic_pane_ParamLimits

0xde90,	// (0x0002c2ba) ncimui_list_single_graphic_pane

0x8020,	// (0x0002644a) ncimui_query_pane_ParamLimits

0x8020,	// (0x0002644a) ncimui_query_pane

0x9c9f,	// (0x000280c9) list_highlight_pane_cp013

0xdea0,	// (0x0002c2ca) ncim_list_query_list_pane_t1_copy1

0xde7a,	// (0x0002c2a4) ncim_list_single_graphic_pane_g1

0x8033,	// (0x0002645d) ncim_query_button_pane_cp01

0x803f,	// (0x00026469) ncim_query_entry_pane_ParamLimits

0x803f,	// (0x00026469) ncim_query_entry_pane

0x8052,	// (0x0002647c) ncimui_query_pane_g1

0x805e,	// (0x00026488) ncimui_query_pane_t1_ParamLimits

0x805e,	// (0x00026488) ncimui_query_pane_t1

0xa56f,	// (0x00028999) input_focus_pane_cp012

0xdeae,	// (0x0002c2d8) ncim_query_entry_pane_t1

0xa3dc,	// (0x00028806) main_im_pane_ParamLimits

0x13b5,	// (0x0001f7df) main_mobtv_pane_ParamLimits

0x13b5,	// (0x0001f7df) main_mobtv_pane

0x7c1d,	// (0x00026047) main_cset6_slider_pane_g18_ParamLimits

0x7c1d,	// (0x00026047) main_cset6_slider_pane_g18

0x7c29,	// (0x00026053) main_cset6_slider_pane_g19_ParamLimits

0x7c29,	// (0x00026053) main_cset6_slider_pane_g19

0xd284,	// (0x0002b6ae) bg_main_mobtv_pane_ParamLimits

0xd284,	// (0x0002b6ae) bg_main_mobtv_pane

0x8077,	// (0x000264a1) main_mobtv_info_pane

0x8082,	// (0x000264ac) main_mobtv_loading_pane_ParamLimits

0x8082,	// (0x000264ac) main_mobtv_loading_pane

0xdec0,	// (0x0002c2ea) main_mobtv_pg_channel_list_pane

0xdeca,	// (0x0002c2f4) main_mobtv_pg_hdr_pane

0x808f,	// (0x000264b9) main_mobtv_programe_curr_pane_ParamLimits

0x808f,	// (0x000264b9) main_mobtv_programe_curr_pane

0x809c,	// (0x000264c6) main_mobtv_programe_next_pane_ParamLimits

0x809c,	// (0x000264c6) main_mobtv_programe_next_pane

0xded3,	// (0x0002c2fd) popup_mobtv_noti_window

0xc8a5,	// (0x0002accf) main_tv_pg_hdr_pane_g1

0xdedb,	// (0x0002c305) main_tv_pg_hdr_pane_g2

0xdee3,	// (0x0002c30d) main_tv_pg_hdr_pane_g3

0xdeeb,	// (0x0002c315) main_tv_pg_hdr_pane_g4

0xdef3,	// (0x0002c31d) main_tv_pg_hdr_pane_g5

0xdefd,	// (0x0002c327) main_tv_pg_hdr_pane_g6

0xdf07,	// (0x0002c331) main_tv_pg_hdr_pane_g7

0xdf11,	// (0x0002c33b) main_tv_pg_hdr_pane_g8

0xdf1b,	// (0x0002c345) main_tv_pg_hdr_pane_g9

0xdf25,	// (0x0002c34f) main_tv_pg_hdr_pane_g10

0xdf2f,	// (0x0002c359) main_tv_pg_hdr_pane_g11

0x000a,

0xfbf1,	// (0x0002e01b) main_tv_pg_hdr_pane_g

0xdf39,	// (0x0002c363) main_tv_pg_hdr_pane_t1

0xdf47,	// (0x0002c371) main_tv_pg_hdr_pane_t2

0xdf55,	// (0x0002c37f) main_tv_pg_hdr_pane_t3

0xdf65,	// (0x0002c38f) main_tv_pg_hdr_pane_t4

0xdf75,	// (0x0002c39f) main_tv_pg_hdr_pane_t5

0x0004,

0xfc08,	// (0x0002e032) main_tv_pg_hdr_pane_t

0xdf85,	// (0x0002c3af) single_mobtv_pg_channel_pane_ParamLimits

0xdf85,	// (0x0002c3af) single_mobtv_pg_channel_pane

0xdf97,	// (0x0002c3c1) single_mobtv_pg_channel_table_pane

0xdfa0,	// (0x0002c3ca) single_mobtv_pg_channel_thumb_pane

0xdfa9,	// (0x0002c3d3) single_tv_pg_channel_pane_g1

0xdfb2,	// (0x0002c3dc) single_tv_pg_channel_pane_g2

0x0001,

0xfc13,	// (0x0002e03d) single_tv_pg_channel_pane_g

0xcb08,	// (0x0002af32) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xcb08,	// (0x0002af32) bg_single_mobtv_pg_channel_thumb_pane

0xdfbb,	// (0x0002c3e5) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xdfbb,	// (0x0002c3e5) single_mobtv_pg_channel_thumb_pane_g1

0xdfc9,	// (0x0002c3f3) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xdfc9,	// (0x0002c3f3) single_mobtv_pg_channel_thumb_pane_g2

0xdfd5,	// (0x0002c3ff) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xdfd5,	// (0x0002c3ff) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc18,	// (0x0002e042) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc18,	// (0x0002e042) single_mobtv_pg_channel_thumb_pane_g

0xdfe1,	// (0x0002c40b) single_mobtv_pg_channel_thumb_pane_t1

0xdfef,	// (0x0002c419) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc1f,	// (0x0002e049) single_mobtv_pg_channel_thumb_pane_t

0xc8a5,	// (0x0002accf) bg_single_mobtv_pg_channel_table_pane_g1

0xc8a5,	// (0x0002accf) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6c1,	// (0x0002daeb) bg_single_mobtv_pg_channel_table_pane_g

0xdffd,	// (0x0002c427) single_mobtv_pg_channel_table_pane_t1

0xe00b,	// (0x0002c435) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc24,	// (0x0002e04e) single_mobtv_pg_channel_table_pane_t

0x80b1,	// (0x000264db) main_mobtv_info_pane_g1_ParamLimits

0x80b1,	// (0x000264db) main_mobtv_info_pane_g1

0x80cd,	// (0x000264f7) main_mobtv_info_pane_t1_ParamLimits

0x80cd,	// (0x000264f7) main_mobtv_info_pane_t1

0x8145,	// (0x0002656f) main_mobtv_info_pane_t2_ParamLimits

0x8145,	// (0x0002656f) main_mobtv_info_pane_t2

0x0002,

0xfc2e,	// (0x0002e058) main_mobtv_info_pane_t_ParamLimits

0xfc2e,	// (0x0002e058) main_mobtv_info_pane_t

0x81d4,	// (0x000265fe) wait_bar_pane_cp05

0x81e6,	// (0x00026610) main_mobtv_loading_pane_g1_ParamLimits

0x81e6,	// (0x00026610) main_mobtv_loading_pane_g1

0x81f4,	// (0x0002661e) main_mobtv_loading_pane_g2_ParamLimits

0x81f4,	// (0x0002661e) main_mobtv_loading_pane_g2

0x8200,	// (0x0002662a) main_mobtv_loading_pane_g3_ParamLimits

0x8200,	// (0x0002662a) main_mobtv_loading_pane_g3

0x0002,

0xfc35,	// (0x0002e05f) main_mobtv_loading_pane_g_ParamLimits

0xfc35,	// (0x0002e05f) main_mobtv_loading_pane_g

0xe019,	// (0x0002c443) main_mobtv_loading_pane_t1_ParamLimits

0xe019,	// (0x0002c443) main_mobtv_loading_pane_t1

0xe031,	// (0x0002c45b) main_mobtv_loading_pane_t2_ParamLimits

0xe031,	// (0x0002c45b) main_mobtv_loading_pane_t2

0x0001,

0xfc3c,	// (0x0002e066) main_mobtv_loading_pane_t_ParamLimits

0xfc3c,	// (0x0002e066) main_mobtv_loading_pane_t

0x820e,	// (0x00026638) wait_bar_pane_cp06_ParamLimits

0x820e,	// (0x00026638) wait_bar_pane_cp06

0xe055,	// (0x0002c47f) main_mobtv_programe_curr_pane_t1

0xe063,	// (0x0002c48d) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc41,	// (0x0002e06b) main_mobtv_programe_curr_pane_t

0xe071,	// (0x0002c49b) main_mobtv_programe_next_pane_t1

0xe07f,	// (0x0002c4a9) main_mobtv_programe_next_pane_t2

0xe08d,	// (0x0002c4b7) main_mobtv_programe_next_pane_t3

0x0002,

0xfc46,	// (0x0002e070) main_mobtv_programe_next_pane_t

0x9c9f,	// (0x000280c9) bg_popup_mobtv_noti_window_pane

0xe09b,	// (0x0002c4c5) popup_mobtv_noti_window_g1

0xe0a3,	// (0x0002c4cd) popup_mobtv_noti_window_t1

0xe0b1,	// (0x0002c4db) popup_mobtv_noti_window_t2

0x0001,

0xfc4d,	// (0x0002e077) popup_mobtv_noti_window_t

0xc8a5,	// (0x0002accf) bg_popup_mobtv_noti_window_pane_g1

0x0f5d,	// (0x0001f387) sc_clock_pane

0x0f5d,	// (0x0001f387) main_fs_bigclock_pane

0x783b,	// (0x00025c65) blid2_tripm_pane_t4_ParamLimits

0x783b,	// (0x00025c65) blid2_tripm_pane_t4

0x821a,	// (0x00026644) sc_clock_pane_g1_ParamLimits

0x821a,	// (0x00026644) sc_clock_pane_g1

0x8228,	// (0x00026652) sc_clock_pane_t1_ParamLimits

0x8228,	// (0x00026652) sc_clock_pane_t1

0x823b,	// (0x00026665) sc_clock_pane_t2_ParamLimits

0x823b,	// (0x00026665) sc_clock_pane_t2

0x824d,	// (0x00026677) sc_clock_pane_t3_ParamLimits

0x824d,	// (0x00026677) sc_clock_pane_t3

0x0004,

0xfc52,	// (0x0002e07c) sc_clock_pane_t_ParamLimits

0xfc52,	// (0x0002e07c) sc_clock_pane_t

0x91eb,	// (0x00027615) main_fs_bigclock_indicator_pane_ParamLimits

0x91eb,	// (0x00027615) main_fs_bigclock_indicator_pane

0x82d0,	// (0x000266fa) main_fs_bigclock_pane_g1_ParamLimits

0x82d0,	// (0x000266fa) main_fs_bigclock_pane_g1

0x91f7,	// (0x00027621) main_fs_bigclock_pane_t1_ParamLimits

0x91f7,	// (0x00027621) main_fs_bigclock_pane_t1

0x9209,	// (0x00027633) main_fs_bigclock_pane_t2_ParamLimits

0x9209,	// (0x00027633) main_fs_bigclock_pane_t2

0x921d,	// (0x00027647) main_fs_bigclock_pane_t3_ParamLimits

0x921d,	// (0x00027647) main_fs_bigclock_pane_t3

0x0002,

0xfe5b,	// (0x0002e285) main_fs_bigclock_pane_t_ParamLimits

0xfe5b,	// (0x0002e285) main_fs_bigclock_pane_t

0xec1d,	// (0x0002d047) main_fs_bigclock_indicator_pane_g1

0xddcf,	// (0x0002c1f9) ncim_query_content_pane_g2_ParamLimits

0xddcf,	// (0x0002c1f9) ncim_query_content_pane_g2

0x0001,

0xfbdf,	// (0x0002e009) ncim_query_content_pane_g_ParamLimits

0xfbdf,	// (0x0002e009) ncim_query_content_pane_g

0x8261,	// (0x0002668b) sc_clock_pane_t4_ParamLimits

0x8261,	// (0x0002668b) sc_clock_pane_t4

0x13b5,	// (0x0001f7df) main_radioblah_pane

0x1e37,	// (0x00020261) cell_call4_button_pane_t1_copy1_ParamLimits

0x1e37,	// (0x00020261) cell_call4_button_pane_t1_copy1

0x7ea4,	// (0x000262ce) main_ncimui_pane_t1_ParamLimits

0x7ea4,	// (0x000262ce) main_ncimui_pane_t1

0x7ebe,	// (0x000262e8) main_ncimui_pane_t2_ParamLimits

0x7ebe,	// (0x000262e8) main_ncimui_pane_t2

0x0002,

0xfbd8,	// (0x0002e002) main_ncimui_pane_t_ParamLimits

0xfbd8,	// (0x0002e002) main_ncimui_pane_t

0xe1ff,	// (0x0002c629) main_radioblah_anim_pane_ParamLimits

0xe1ff,	// (0x0002c629) main_radioblah_anim_pane

0xe210,	// (0x0002c63a) main_radioblah_info_pane_ParamLimits

0xe210,	// (0x0002c63a) main_radioblah_info_pane

0xe224,	// (0x0002c64e) main_radioblah_pane_t1_ParamLimits

0xe224,	// (0x0002c64e) main_radioblah_pane_t1

0xe240,	// (0x0002c66a) main_radioblah_pane_t2_ParamLimits

0xe240,	// (0x0002c66a) main_radioblah_pane_t2

0x0003,

0xfc73,	// (0x0002e09d) main_radioblah_pane_t_ParamLimits

0xfc73,	// (0x0002e09d) main_radioblah_pane_t

0x8326,	// (0x00026750) main_radioblah_rocker_ctrl_pane_ParamLimits

0x8326,	// (0x00026750) main_radioblah_rocker_ctrl_pane

0xe288,	// (0x0002c6b2) main_radioblah_info_pane_t1_ParamLimits

0xe288,	// (0x0002c6b2) main_radioblah_info_pane_t1

0x836b,	// (0x00026795) main_radioblah_info_pane_t2_ParamLimits

0x836b,	// (0x00026795) main_radioblah_info_pane_t2

0x0003,

0xfc7c,	// (0x0002e0a6) main_radioblah_info_pane_t_ParamLimits

0xfc7c,	// (0x0002e0a6) main_radioblah_info_pane_t

0xc8a5,	// (0x0002accf) main_radioblah_rocker_ctrl_pane_g1

0x841b,	// (0x00026845) main_radioblah_rocker_ctrl_pane_g2

0x8423,	// (0x0002684d) main_radioblah_rocker_ctrl_pane_g3

0x842b,	// (0x00026855) main_radioblah_rocker_ctrl_pane_g4

0x8433,	// (0x0002685d) main_radioblah_rocker_ctrl_pane_g5

0x843b,	// (0x00026865) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc85,	// (0x0002e0af) main_radioblah_rocker_ctrl_pane_g

0x7e4b,	// (0x00026275) main_cset_text2_pane_t1_copy1_ParamLimits

0x1ec2,	// (0x000202ec) cam4_image_uncrop_qvga_pane

0x1ff3,	// (0x0002041d) vid4_image_uncrop_qcif_pane

0x2614,	// (0x00020a3e) cam6_image_uncrop_qvga_pane_ParamLimits

0x2614,	// (0x00020a3e) cam6_image_uncrop_qvga_pane

0xdad6,	// (0x0002bf00) vid6_image_uncrop_qcif_pane_ParamLimits

0xdad6,	// (0x0002bf00) vid6_image_uncrop_qcif_pane

0x9c9f,	// (0x000280c9) bg_popup_preview_window_pane_cp03

0xdd81,	// (0x0002c1ab) list_cset_text2_pane

0xdd89,	// (0x0002c1b3) main_cset6_text2_pane_g1

0xdd91,	// (0x0002c1bb) main_cset6_text2_pane_t1

0x8443,	// (0x0002686d) list_cset_text2_pane_t1_ParamLimits

0x8443,	// (0x0002686d) list_cset_text2_pane_t1

0x13b5,	// (0x0001f7df) main_radioblah_pane_ParamLimits

0x81c0,	// (0x000265ea) main_mobtv_info_pane_t3_ParamLimits

0x81c0,	// (0x000265ea) main_mobtv_info_pane_t3

0x8314,	// (0x0002673e) main_radioblah_pane_g1

0x833f,	// (0x00026769) main_radioblah_info_pane_g1

0x83c0,	// (0x000267ea) main_radioblah_info_pane_t3_ParamLimits

0x83c0,	// (0x000267ea) main_radioblah_info_pane_t3

0x4352,	// (0x0002277c) highlight_cell_cale_month_pane_ParamLimits

0x4352,	// (0x0002277c) highlight_cell_cale_month_pane

0x0f5d,	// (0x0001f387) main_phob_fisheye_pane

0xcc10,	// (0x0002b03a) scroll_pane_cp0031_ParamLimits

0xcc10,	// (0x0002b03a) scroll_pane_cp0031

0xdbe4,	// (0x0002c00e) wait_bar_pane_cp08_ParamLimits

0x7b34,	// (0x00025f5e) cset_list_set_pane_copy1_ParamLimits

0xe2c2,	// (0x0002c6ec) highlight_cell_cale_month_pane_g1

0x8460,	// (0x0002688a) highlight_cell_cale_month_pane_t1

0xd853,	// (0x0002bc7d) list_gen_pane_cp01

0xd3db,	// (0x0002b805) scroll_pane_01

0x846e,	// (0x00026898) list_single_double_fisheye_pane

0x8477,	// (0x000268a1) list_double_fisheye_pane_g1_ParamLimits

0x8477,	// (0x000268a1) list_double_fisheye_pane_g1

0x8483,	// (0x000268ad) list_double_fisheye_pane_g2_ParamLimits

0x8483,	// (0x000268ad) list_double_fisheye_pane_g2

0x8497,	// (0x000268c1) list_double_fisheye_pane_g3_ParamLimits

0x8497,	// (0x000268c1) list_double_fisheye_pane_g3

0x0004,

0xfc92,	// (0x0002e0bc) list_double_fisheye_pane_g_ParamLimits

0xfc92,	// (0x0002e0bc) list_double_fisheye_pane_g

0x84c0,	// (0x000268ea) list_double_fisheye_pane_t1_ParamLimits

0x84c0,	// (0x000268ea) list_double_fisheye_pane_t1

0x84db,	// (0x00026905) list_double_fisheye_pane_t2_ParamLimits

0x84db,	// (0x00026905) list_double_fisheye_pane_t2

0x0001,

0xfc9d,	// (0x0002e0c7) list_double_fisheye_pane_t_ParamLimits

0xfc9d,	// (0x0002e0c7) list_double_fisheye_pane_t

0x0f5d,	// (0x0001f387) main_call5_pane

0x8287,	// (0x000266b1) sc_swipe_pane_ParamLimits

0x8287,	// (0x000266b1) sc_swipe_pane

0x8509,	// (0x00026933) call5_image_pane_ParamLimits

0x8509,	// (0x00026933) call5_image_pane

0x8519,	// (0x00026943) call5_swipe_1_pane_ParamLimits

0x8519,	// (0x00026943) call5_swipe_1_pane

0x8525,	// (0x0002694f) call5_swipe_2_pane_ParamLimits

0x8525,	// (0x0002694f) call5_swipe_2_pane

0x853f,	// (0x00026969) popup_call5_audio_first_window_ParamLimits

0x853f,	// (0x00026969) popup_call5_audio_first_window

0xcb08,	// (0x0002af32) call5_swipe_1_pane_g1_ParamLimits

0xcb08,	// (0x0002af32) call5_swipe_1_pane_g1

0xe2ca,	// (0x0002c6f4) call5_swipe_1_pane_g2_ParamLimits

0xe2ca,	// (0x0002c6f4) call5_swipe_1_pane_g2

0x0001,

0xfca2,	// (0x0002e0cc) call5_swipe_1_pane_g_ParamLimits

0xfca2,	// (0x0002e0cc) call5_swipe_1_pane_g

0xe2d6,	// (0x0002c700) call5_swipe_1_pane_t1_ParamLimits

0xe2d6,	// (0x0002c700) call5_swipe_1_pane_t1

0xcb08,	// (0x0002af32) call5_swipe_2_pane_g1_ParamLimits

0xcb08,	// (0x0002af32) call5_swipe_2_pane_g1

0xe2eb,	// (0x0002c715) call5_swipe_2_pane_g2_ParamLimits

0xe2eb,	// (0x0002c715) call5_swipe_2_pane_g2

0x0001,

0xfca7,	// (0x0002e0d1) call5_swipe_2_pane_g_ParamLimits

0xfca7,	// (0x0002e0d1) call5_swipe_2_pane_g

0xe2f7,	// (0x0002c721) call5_swipe_2_pane_t1_ParamLimits

0xe2f7,	// (0x0002c721) call5_swipe_2_pane_t1

0xe30c,	// (0x0002c736) sc_swipe_pane_g1_ParamLimits

0xe30c,	// (0x0002c736) sc_swipe_pane_g1

0xe319,	// (0x0002c743) sc_swipe_pane_g2_ParamLimits

0xe319,	// (0x0002c743) sc_swipe_pane_g2

0x0001,

0xfcac,	// (0x0002e0d6) sc_swipe_pane_g_ParamLimits

0xfcac,	// (0x0002e0d6) sc_swipe_pane_g

0xe325,	// (0x0002c74f) sc_swipe_pane_t1_ParamLimits

0xe325,	// (0x0002c74f) sc_swipe_pane_t1

0x0f5d,	// (0x0001f387) main_cmail_launcher_pane

0x854d,	// (0x00026977) aid_size_cell_cmail_l_ParamLimits

0x854d,	// (0x00026977) aid_size_cell_cmail_l

0x855b,	// (0x00026985) grid_cmail_l_pane_ParamLimits

0x855b,	// (0x00026985) grid_cmail_l_pane

0x856b,	// (0x00026995) cell_cmail_l_pane_ParamLimits

0x856b,	// (0x00026995) cell_cmail_l_pane

0xe33a,	// (0x0002c764) cell_cmail_l_pane_g1_ParamLimits

0xe33a,	// (0x0002c764) cell_cmail_l_pane_g1

0xe346,	// (0x0002c770) cell_cmail_l_pane_t1_ParamLimits

0xe346,	// (0x0002c770) cell_cmail_l_pane_t1

0xe35c,	// (0x0002c786) cell_cmail_l_pane_t2_ParamLimits

0xe35c,	// (0x0002c786) cell_cmail_l_pane_t2

0x0001,

0xfcb1,	// (0x0002e0db) cell_cmail_l_pane_t_ParamLimits

0xfcb1,	// (0x0002e0db) cell_cmail_l_pane_t

0xa56f,	// (0x00028999) grid_highlight_pane_cp018_ParamLimits

0xa56f,	// (0x00028999) grid_highlight_pane_cp018

0x0dbf,	// (0x0001f1e9) main2_pane_ParamLimits

0x0dbf,	// (0x0001f1e9) main2_pane

0xa475,	// (0x0002889f) popup_sp_fs_action_menu_bg_pane_g1

0xa47d,	// (0x000288a7) popup_sp_fs_action_menu_bg_pane_g2

0xa485,	// (0x000288af) popup_sp_fs_action_menu_bg_pane_g3

0xa48d,	// (0x000288b7) popup_sp_fs_action_menu_bg_pane_g4

0xa495,	// (0x000288bf) popup_sp_fs_action_menu_bg_pane_g5

0xa49d,	// (0x000288c7) popup_sp_fs_action_menu_bg_pane_g6

0xa4a5,	// (0x000288cf) popup_sp_fs_action_menu_bg_pane_g7

0xa4ad,	// (0x000288d7) popup_sp_fs_action_menu_bg_pane_g8

0xa4b5,	// (0x000288df) popup_sp_fs_action_menu_bg_pane_g9

0xa4bd,	// (0x000288e7) popup_sp_fs_action_menu_bg_pane_g10

0xa4bd,	// (0x000288e7) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf16f,	// (0x0002d599) popup_sp_fs_action_menu_bg_pane_g

0x3167,	// (0x00021591) list_medium_line_x2_t3_g3_g1_ParamLimits

0x3167,	// (0x00021591) list_medium_line_x2_t3_g3_g1

0x3173,	// (0x0002159d) list_medium_line_x2_t3_g3_g2_ParamLimits

0x3173,	// (0x0002159d) list_medium_line_x2_t3_g3_g2

0x317f,	// (0x000215a9) list_medium_line_x2_t3_g3_g3_ParamLimits

0x317f,	// (0x000215a9) list_medium_line_x2_t3_g3_g3

0x0002,

0xf21d,	// (0x0002d647) list_medium_line_x2_t3_g3_g_ParamLimits

0xf21d,	// (0x0002d647) list_medium_line_x2_t3_g3_g

0x318b,	// (0x000215b5) list_medium_line_x2_t3_g3_t1_ParamLimits

0x318b,	// (0x000215b5) list_medium_line_x2_t3_g3_t1

0x31a0,	// (0x000215ca) list_medium_line_x2_t3_g3_t2_ParamLimits

0x31a0,	// (0x000215ca) list_medium_line_x2_t3_g3_t2

0x31b2,	// (0x000215dc) list_medium_line_x2_t3_g3_t3_ParamLimits

0x31b2,	// (0x000215dc) list_medium_line_x2_t3_g3_t3

0x0002,

0xf224,	// (0x0002d64e) list_medium_line_x2_t3_g3_t_ParamLimits

0xf224,	// (0x0002d64e) list_medium_line_x2_t3_g3_t

0x3167,	// (0x00021591) list_medium_line_x2_t3_g2_g1_ParamLimits

0x3167,	// (0x00021591) list_medium_line_x2_t3_g2_g1

0x317f,	// (0x000215a9) list_medium_line_x2_t3_g2_g2_ParamLimits

0x317f,	// (0x000215a9) list_medium_line_x2_t3_g2_g2

0x0001,

0xf22b,	// (0x0002d655) list_medium_line_x2_t3_g2_g_ParamLimits

0xf22b,	// (0x0002d655) list_medium_line_x2_t3_g2_g

0x31c7,	// (0x000215f1) list_medium_line_x2_t3_g2_t1_ParamLimits

0x31c7,	// (0x000215f1) list_medium_line_x2_t3_g2_t1

0x31dd,	// (0x00021607) list_medium_line_x2_t3_g2_t2_ParamLimits

0x31dd,	// (0x00021607) list_medium_line_x2_t3_g2_t2

0x31ef,	// (0x00021619) list_medium_line_x2_t3_g2_t3_ParamLimits

0x31ef,	// (0x00021619) list_medium_line_x2_t3_g2_t3

0x0002,

0xf230,	// (0x0002d65a) list_medium_line_x2_t3_g2_t_ParamLimits

0xf230,	// (0x0002d65a) list_medium_line_x2_t3_g2_t

0x3167,	// (0x00021591) list_medium_line_x2_t4_g4_g1_ParamLimits

0x3167,	// (0x00021591) list_medium_line_x2_t4_g4_g1

0x320c,	// (0x00021636) list_medium_line_x2_t4_g4_g2_ParamLimits

0x320c,	// (0x00021636) list_medium_line_x2_t4_g4_g2

0x3173,	// (0x0002159d) list_medium_line_x2_t4_g4_g3_ParamLimits

0x3173,	// (0x0002159d) list_medium_line_x2_t4_g4_g3

0x3218,	// (0x00021642) list_medium_line_x2_t4_g4_g4_ParamLimits

0x3218,	// (0x00021642) list_medium_line_x2_t4_g4_g4

0x0003,

0xf237,	// (0x0002d661) list_medium_line_x2_t4_g4_g_ParamLimits

0xf237,	// (0x0002d661) list_medium_line_x2_t4_g4_g

0x3224,	// (0x0002164e) list_medium_line_x2_t4_g4_t1_ParamLimits

0x3224,	// (0x0002164e) list_medium_line_x2_t4_g4_t1

0x323e,	// (0x00021668) list_medium_line_x2_t4_g4_t2_ParamLimits

0x323e,	// (0x00021668) list_medium_line_x2_t4_g4_t2

0x3254,	// (0x0002167e) list_medium_line_x2_t4_g4_t3_ParamLimits

0x3254,	// (0x0002167e) list_medium_line_x2_t4_g4_t3

0x3269,	// (0x00021693) list_medium_line_x2_t4_g4_t4_ParamLimits

0x3269,	// (0x00021693) list_medium_line_x2_t4_g4_t4

0x0003,

0xf240,	// (0x0002d66a) list_medium_line_x2_t4_g4_t_ParamLimits

0xf240,	// (0x0002d66a) list_medium_line_x2_t4_g4_t

0x3167,	// (0x00021591) list_medium_line_x2_t2_g4_g1_ParamLimits

0x3167,	// (0x00021591) list_medium_line_x2_t2_g4_g1

0x320c,	// (0x00021636) list_medium_line_x2_t2_g4_g2_ParamLimits

0x320c,	// (0x00021636) list_medium_line_x2_t2_g4_g2

0x3173,	// (0x0002159d) list_medium_line_x2_t2_g4_g3_ParamLimits

0x3173,	// (0x0002159d) list_medium_line_x2_t2_g4_g3

0x317f,	// (0x000215a9) list_medium_line_x2_t2_g4_g4_ParamLimits

0x317f,	// (0x000215a9) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2a7,	// (0x0002d6d1) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2a7,	// (0x0002d6d1) list_medium_line_x2_t2_g4_g

0x4378,	// (0x000227a2) list_medium_line_x2_t2_g4_t1_ParamLimits

0x4378,	// (0x000227a2) list_medium_line_x2_t2_g4_t1

0x31b2,	// (0x000215dc) list_medium_line_x2_t2_g4_t2_ParamLimits

0x31b2,	// (0x000215dc) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2b0,	// (0x0002d6da) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2b0,	// (0x0002d6da) list_medium_line_x2_t2_g4_t

0x3167,	// (0x00021591) list_medium_line_x2_t2_g3_g1_ParamLimits

0x3167,	// (0x00021591) list_medium_line_x2_t2_g3_g1

0x3173,	// (0x0002159d) list_medium_line_x2_t2_g3_g2_ParamLimits

0x3173,	// (0x0002159d) list_medium_line_x2_t2_g3_g2

0x317f,	// (0x000215a9) list_medium_line_x2_t2_g3_g3_ParamLimits

0x317f,	// (0x000215a9) list_medium_line_x2_t2_g3_g3

0x0002,

0xf21d,	// (0x0002d647) list_medium_line_x2_t2_g3_g_ParamLimits

0xf21d,	// (0x0002d647) list_medium_line_x2_t2_g3_g

0x438d,	// (0x000227b7) list_medium_line_x2_t2_g3_t1_ParamLimits

0x438d,	// (0x000227b7) list_medium_line_x2_t2_g3_t1

0x31b2,	// (0x000215dc) list_medium_line_x2_t2_g3_t2_ParamLimits

0x31b2,	// (0x000215dc) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2b5,	// (0x0002d6df) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2b5,	// (0x0002d6df) list_medium_line_x2_t2_g3_t

0x44fa,	// (0x00022924) main_sp_fs_list_pane_ParamLimits

0x44fa,	// (0x00022924) main_sp_fs_list_pane

0x4506,	// (0x00022930) sp_fs_scroll_pane_ParamLimits

0x4506,	// (0x00022930) sp_fs_scroll_pane

0x4512,	// (0x0002293c) list_medium_line_x2_t3_t1

0x4522,	// (0x0002294c) list_medium_line_x2_t3_t2

0x4530,	// (0x0002295a) list_medium_line_x2_t3_t3

0x0002,

0xf300,	// (0x0002d72a) list_medium_line_x2_t3_t

0x453e,	// (0x00022968) list_medium_line_x3_t4_t1

0x454e,	// (0x00022978) list_medium_line_x3_t4_t2

0x455c,	// (0x00022986) list_medium_line_x3_t4_t3

0x4530,	// (0x0002295a) list_medium_line_x3_t4_t4

0x0003,

0xf307,	// (0x0002d731) list_medium_line_x3_t4_t

0x456a,	// (0x00022994) list_medium_line_x4_t5_t1

0x457a,	// (0x000229a4) list_medium_line_x4_t5_t2

0x455c,	// (0x00022986) list_medium_line_x4_t5_t3

0x4588,	// (0x000229b2) list_medium_line_x4_t5_t4

0x4530,	// (0x0002295a) list_medium_line_x4_t5_t5

0x0004,

0xf310,	// (0x0002d73a) list_medium_line_x4_t5_t

0x3167,	// (0x00021591) list_medium_line_t4_g4_g1_ParamLimits

0x3167,	// (0x00021591) list_medium_line_t4_g4_g1

0x4596,	// (0x000229c0) list_medium_line_t4_g4_g2_ParamLimits

0x4596,	// (0x000229c0) list_medium_line_t4_g4_g2

0x45a2,	// (0x000229cc) list_medium_line_t4_g4_g3_ParamLimits

0x45a2,	// (0x000229cc) list_medium_line_t4_g4_g3

0x317f,	// (0x000215a9) list_medium_line_t4_g4_g4_ParamLimits

0x317f,	// (0x000215a9) list_medium_line_t4_g4_g4

0x0003,

0xf31b,	// (0x0002d745) list_medium_line_t4_g4_g_ParamLimits

0xf31b,	// (0x0002d745) list_medium_line_t4_g4_g

0x45ae,	// (0x000229d8) list_medium_line_t4_g4_t1_ParamLimits

0x45ae,	// (0x000229d8) list_medium_line_t4_g4_t1

0x45c3,	// (0x000229ed) list_medium_line_t4_g4_t2_ParamLimits

0x45c3,	// (0x000229ed) list_medium_line_t4_g4_t2

0x45d8,	// (0x00022a02) list_medium_line_t4_g4_t3_ParamLimits

0x45d8,	// (0x00022a02) list_medium_line_t4_g4_t3

0x31b2,	// (0x000215dc) list_medium_line_t4_g4_t4_ParamLimits

0x31b2,	// (0x000215dc) list_medium_line_t4_g4_t4

0x0003,

0xf324,	// (0x0002d74e) list_medium_line_t4_g4_t_ParamLimits

0xf324,	// (0x0002d74e) list_medium_line_t4_g4_t

0x467b,	// (0x00022aa5) chi_dic_find_pane_g1

0x13d1,	// (0x0001f7fb) main_tport_pane

0x70b6,	// (0x000254e0) list_medium_line_plain_t1

0x70dc,	// (0x00025506) list_medium_line_t2_g2_g1_ParamLimits

0x70dc,	// (0x00025506) list_medium_line_t2_g2_g1

0x70e8,	// (0x00025512) list_medium_line_t2_g2_g2_ParamLimits

0x70e8,	// (0x00025512) list_medium_line_t2_g2_g2

0x0001,

0xf9e9,	// (0x0002de13) list_medium_line_t2_g2_g_ParamLimits

0xf9e9,	// (0x0002de13) list_medium_line_t2_g2_g

0x70f4,	// (0x0002551e) list_medium_line_t2_g2_t1_ParamLimits

0x70f4,	// (0x0002551e) list_medium_line_t2_g2_t1

0x710e,	// (0x00025538) list_medium_line_t2_g2_t2_ParamLimits

0x710e,	// (0x00025538) list_medium_line_t2_g2_t2

0x0001,

0xf9ee,	// (0x0002de18) list_medium_line_t2_g2_t_ParamLimits

0xf9ee,	// (0x0002de18) list_medium_line_t2_g2_t

0xd85c,	// (0x0002bc86) aid_sp_fs_list_icon_a_sm

0xd864,	// (0x0002bc8e) aid_sp_fs_list_icon_d

0xd86c,	// (0x0002bc96) aid_sp_fs_text_primary

0xd875,	// (0x0002bc9f) aid_sp_fs_text_secondary

0x7686,	// (0x00025ab0) list_medium_line

0x7686,	// (0x00025ab0) list_medium_line_g2

0x7686,	// (0x00025ab0) list_medium_line_g3

0x7686,	// (0x00025ab0) list_medium_line_plain

0x7686,	// (0x00025ab0) list_medium_line_plain_t2

0x7686,	// (0x00025ab0) list_medium_line_plain_t3

0x7686,	// (0x00025ab0) list_medium_line_right_icon

0x7686,	// (0x00025ab0) list_medium_line_right_iconx2

0x7686,	// (0x00025ab0) list_medium_line_t2

0x7686,	// (0x00025ab0) list_medium_line_t2_g2

0x7686,	// (0x00025ab0) list_medium_line_t2_g3

0x7686,	// (0x00025ab0) list_medium_line_t2_right_icon

0x7686,	// (0x00025ab0) list_medium_line_t2_right_iconx2

0x7686,	// (0x00025ab0) list_medium_line_t3

0x7686,	// (0x00025ab0) list_medium_line_t3_g2

0x7686,	// (0x00025ab0) list_medium_line_t3_g3

0x7686,	// (0x00025ab0) list_medium_line_t3_right_iconx2

0x768f,	// (0x00025ab9) list_medium_line_t4_g4

0xe0da,	// (0x0002c504) list_medium_line_x2

0xe0da,	// (0x0002c504) list_medium_line_x2_t2_g2

0xe0da,	// (0x0002c504) list_medium_line_x2_t2_g3

0xe0da,	// (0x0002c504) list_medium_line_x2_t2_g4

0xe0da,	// (0x0002c504) list_medium_line_x2_t3

0xe0da,	// (0x0002c504) list_medium_line_x2_t3_g2

0xe0da,	// (0x0002c504) list_medium_line_x2_t3_g3

0xe0da,	// (0x0002c504) list_medium_line_x2_t3_g4

0xe0da,	// (0x0002c504) list_medium_line_x2_t4_g2

0xe0da,	// (0x0002c504) list_medium_line_x2_t4_g4

0x7698,	// (0x00025ac2) list_medium_line_x3

0x7698,	// (0x00025ac2) list_medium_line_x3_t4

0x7698,	// (0x00025ac2) list_medium_line_x3_t4_g4

0x768f,	// (0x00025ab9) list_medium_line_x4_t4

0x768f,	// (0x00025ab9) list_medium_line_x4_t4_g7

0x768f,	// (0x00025ab9) list_medium_line_x4_t5

0x76a1,	// (0x00025acb) list_single_fs_dyc_pane_ParamLimits

0x76a1,	// (0x00025acb) list_single_fs_dyc_pane

0x3167,	// (0x00021591) list_medium_line_x4_t4_g7_g1_ParamLimits

0x3167,	// (0x00021591) list_medium_line_x4_t4_g7_g1

0x7d73,	// (0x0002619d) list_medium_line_x4_t4_g7_g2_ParamLimits

0x7d73,	// (0x0002619d) list_medium_line_x4_t4_g7_g2

0x7d7f,	// (0x000261a9) list_medium_line_x4_t4_g7_g3_ParamLimits

0x7d7f,	// (0x000261a9) list_medium_line_x4_t4_g7_g3

0x7d8e,	// (0x000261b8) list_medium_line_x4_t4_g7_g4_ParamLimits

0x7d8e,	// (0x000261b8) list_medium_line_x4_t4_g7_g4

0x7d9a,	// (0x000261c4) list_medium_line_x4_t4_g7_g5_ParamLimits

0x7d9a,	// (0x000261c4) list_medium_line_x4_t4_g7_g5

0x7da9,	// (0x000261d3) list_medium_line_x4_t4_g7_g6_ParamLimits

0x7da9,	// (0x000261d3) list_medium_line_x4_t4_g7_g6

0x7db8,	// (0x000261e2) list_medium_line_x4_t4_g7_g7_ParamLimits

0x7db8,	// (0x000261e2) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbb9,	// (0x0002dfe3) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbb9,	// (0x0002dfe3) list_medium_line_x4_t4_g7_g

0x7dc4,	// (0x000261ee) list_medium_line_x4_t4_g7_t1_ParamLimits

0x7dc4,	// (0x000261ee) list_medium_line_x4_t4_g7_t1

0x7dd9,	// (0x00026203) list_medium_line_x4_t4_g7_t2_ParamLimits

0x7dd9,	// (0x00026203) list_medium_line_x4_t4_g7_t2

0x7dee,	// (0x00026218) list_medium_line_x4_t4_g7_t3_ParamLimits

0x7dee,	// (0x00026218) list_medium_line_x4_t4_g7_t3

0x7e03,	// (0x0002622d) list_medium_line_x4_t4_g7_t4_ParamLimits

0x7e03,	// (0x0002622d) list_medium_line_x4_t4_g7_t4

0x7e15,	// (0x0002623f) list_medium_line_x4_t4_g7_t5_ParamLimits

0x7e15,	// (0x0002623f) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbc8,	// (0x0002dff2) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbc8,	// (0x0002dff2) list_medium_line_x4_t4_g7_t

0x7e27,	// (0x00026251) list_single_dyc_row_pane_ParamLimits

0x7e27,	// (0x00026251) list_single_dyc_row_pane

0x84fd,	// (0x00026927) call5_gesture_pane_ParamLimits

0x84fd,	// (0x00026927) call5_gesture_pane

0x8531,	// (0x0002695b) call5_windows_pane_ParamLimits

0x8531,	// (0x0002695b) call5_windows_pane

0x8584,	// (0x000269ae) call5_swipe_1_pane_cp_ParamLimits

0x8584,	// (0x000269ae) call5_swipe_1_pane_cp

0x8590,	// (0x000269ba) call5_swipe_2_pane_cp_ParamLimits

0x8590,	// (0x000269ba) call5_swipe_2_pane_cp

0xa5b8,	// (0x000289e2) call5_image_pane_cp

0x859c,	// (0x000269c6) popup_call5_audio_first_window_cp_ParamLimits

0x859c,	// (0x000269c6) popup_call5_audio_first_window_cp

0xe30c,	// (0x0002c736) call5_swipe_1_pane_g1_cp_ParamLimits

0xe30c,	// (0x0002c736) call5_swipe_1_pane_g1_cp

0xe379,	// (0x0002c7a3) call5_swipe_1_pane_g2_cp

0xe325,	// (0x0002c74f) call5_swipe_1_pane_t1_cp_ParamLimits

0xe325,	// (0x0002c74f) call5_swipe_1_pane_t1_cp

0xe30c,	// (0x0002c736) call5_swipe_2_pane_g1_cp_ParamLimits

0xe30c,	// (0x0002c736) call5_swipe_2_pane_g1_cp

0xe381,	// (0x0002c7ab) call5_swipe_2_pane_g2_cp

0xe389,	// (0x0002c7b3) call5_swipe_2_pane_t1_cp_ParamLimits

0xe389,	// (0x0002c7b3) call5_swipe_2_pane_t1_cp

0xa56f,	// (0x00028999) main_sp_fs_email_pane

0xe39e,	// (0x0002c7c8) main_sp_fs_listscroll_pane_te

0x85aa,	// (0x000269d4) popup_sp_fs_action_menu_pane_ParamLimits

0x85aa,	// (0x000269d4) popup_sp_fs_action_menu_pane

0xc8a5,	// (0x0002accf) bg_sp_fs_ctrlbar_pane_g1

0xe3a7,	// (0x0002c7d1) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe3b0,	// (0x0002c7da) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe3b9,	// (0x0002c7e3) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc8a5,	// (0x0002accf) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcb6,	// (0x0002e0e0) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc68a,	// (0x0002aab4) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc68a,	// (0x0002aab4) bg_sp_fs_ctrlbar_ddmenu_pane

0xe3c2,	// (0x0002c7ec) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe3c2,	// (0x0002c7ec) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe3ce,	// (0x0002c7f8) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe3ce,	// (0x0002c7f8) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcbf,	// (0x0002e0e9) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcbf,	// (0x0002e0e9) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe3da,	// (0x0002c804) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe3da,	// (0x0002c804) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x85ee,	// (0x00026a18) list_medium_line_t2_right_icon_g1

0x85f6,	// (0x00026a20) list_medium_line_t2_right_icon_t1

0x8606,	// (0x00026a30) list_medium_line_t2_right_icon_t2

0x0001,

0xfcc4,	// (0x0002e0ee) list_medium_line_t2_right_icon_t

0xc49d,	// (0x0002a8c7) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc49d,	// (0x0002a8c7) bg_sp_fs_ctrlbar_pane

0x866b,	// (0x00026a95) main_sp_fs_ctrlbar_button_pane_cp01

0x8673,	// (0x00026a9d) main_sp_fs_ctrlbar_ddmenu_pane

0xe42c,	// (0x0002c856) main_sp_fs_ctrlbar_pane_g1

0xe438,	// (0x0002c862) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfcc9,	// (0x0002e0f3) main_sp_fs_ctrlbar_pane_g

0x86af,	// (0x00026ad9) main_sp_fs_ctrlbar_pane_t1

0x86ea,	// (0x00026b14) main_sp_fs_ctrlbar_pane

0x8700,	// (0x00026b2a) main_sp_fs_listscroll_pane_te_cp01

0x8711,	// (0x00026b3b) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x8711,	// (0x00026b3b) popup_sp_fs_action_menu_pane_cp01

0xa56f,	// (0x00028999) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xa56f,	// (0x00028999) bg_sp_fs_highlight_list_pane_cp01

0xe45f,	// (0x0002c889) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xe45f,	// (0x0002c889) sp_fs_action_menu_list_gene_pane_g1

0xe46e,	// (0x0002c898) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe46e,	// (0x0002c898) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcd7,	// (0x0002e101) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcd7,	// (0x0002e101) sp_fs_action_menu_list_gene_pane_g

0xe47b,	// (0x0002c8a5) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xe47b,	// (0x0002c8a5) sp_fs_action_menu_list_gene_pane_t1

0xe493,	// (0x0002c8bd) sp_fs_action_menu_list_gene_pane_ParamLimits

0xe493,	// (0x0002c8bd) sp_fs_action_menu_list_gene_pane

0xe4b4,	// (0x0002c8de) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe4b4,	// (0x0002c8de) popup_sp_fs_action_menu_bg_pane

0xe4c2,	// (0x0002c8ec) sp_fs_action_menu_list_pane_ParamLimits

0xe4c2,	// (0x0002c8ec) sp_fs_action_menu_list_pane

0x873b,	// (0x00026b65) sp_fs_scroll_pane_cp01_ParamLimits

0x873b,	// (0x00026b65) sp_fs_scroll_pane_cp01

0x8761,	// (0x00026b8b) list_medium_line_plain_t2_t1

0x8771,	// (0x00026b9b) list_medium_line_plain_t2_t2

0x0001,

0xfcdc,	// (0x0002e106) list_medium_line_plain_t2_t

0x877f,	// (0x00026ba9) list_medium_line_plain_t3_t1

0x878f,	// (0x00026bb9) list_medium_line_plain_t3_t2

0x879d,	// (0x00026bc7) list_medium_line_plain_t3_t3

0x0002,

0xfce1,	// (0x0002e10b) list_medium_line_plain_t3_t

0x3167,	// (0x00021591) list_medium_line_x2_t2_g2_g1_ParamLimits

0x3167,	// (0x00021591) list_medium_line_x2_t2_g2_g1

0x317f,	// (0x000215a9) list_medium_line_x2_t2_g2_g2_ParamLimits

0x317f,	// (0x000215a9) list_medium_line_x2_t2_g2_g2

0x0001,

0xf22b,	// (0x0002d655) list_medium_line_x2_t2_g2_g_ParamLimits

0xf22b,	// (0x0002d655) list_medium_line_x2_t2_g2_g

0x45ae,	// (0x000229d8) list_medium_line_x2_t2_g2_t1_ParamLimits

0x45ae,	// (0x000229d8) list_medium_line_x2_t2_g2_t1

0x31b2,	// (0x000215dc) list_medium_line_x2_t2_g2_t2_ParamLimits

0x31b2,	// (0x000215dc) list_medium_line_x2_t2_g2_t2

0x0001,

0xfce8,	// (0x0002e112) list_medium_line_x2_t2_g2_t_ParamLimits

0xfce8,	// (0x0002e112) list_medium_line_x2_t2_g2_t

0x3167,	// (0x00021591) list_medium_line_x2_t4_g2_g1_ParamLimits

0x3167,	// (0x00021591) list_medium_line_x2_t4_g2_g1

0x317f,	// (0x000215a9) list_medium_line_x2_t4_g2_g2_ParamLimits

0x317f,	// (0x000215a9) list_medium_line_x2_t4_g2_g2

0x0001,

0xf22b,	// (0x0002d655) list_medium_line_x2_t4_g2_g_ParamLimits

0xf22b,	// (0x0002d655) list_medium_line_x2_t4_g2_g

0x87ab,	// (0x00026bd5) list_medium_line_x2_t4_g2_t1_ParamLimits

0x87ab,	// (0x00026bd5) list_medium_line_x2_t4_g2_t1

0x87c5,	// (0x00026bef) list_medium_line_x2_t4_g2_t2_ParamLimits

0x87c5,	// (0x00026bef) list_medium_line_x2_t4_g2_t2

0x87db,	// (0x00026c05) list_medium_line_x2_t4_g2_t3_ParamLimits

0x87db,	// (0x00026c05) list_medium_line_x2_t4_g2_t3

0x31b2,	// (0x000215dc) list_medium_line_x2_t4_g2_t4_ParamLimits

0x31b2,	// (0x000215dc) list_medium_line_x2_t4_g2_t4

0x0003,

0xfced,	// (0x0002e117) list_medium_line_x2_t4_g2_t_ParamLimits

0xfced,	// (0x0002e117) list_medium_line_x2_t4_g2_t

0x87f0,	// (0x00026c1a) list_medium_line_t3_right_iconx2_g1

0x85ee,	// (0x00026a18) list_medium_line_t3_right_iconx2_g2

0x87f8,	// (0x00026c22) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfcf6,	// (0x0002e120) list_medium_line_t3_right_iconx2_g

0x8800,	// (0x00026c2a) list_medium_line_t3_right_iconx2_t1

0x8810,	// (0x00026c3a) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfcfd,	// (0x0002e127) list_medium_line_t3_right_iconx2_t

0x3167,	// (0x00021591) list_medium_line_x3_t4_g4_g1_ParamLimits

0x3167,	// (0x00021591) list_medium_line_x3_t4_g4_g1

0x3173,	// (0x0002159d) list_medium_line_x3_t4_g4_g2_ParamLimits

0x3173,	// (0x0002159d) list_medium_line_x3_t4_g4_g2

0x4596,	// (0x000229c0) list_medium_line_x3_t4_g4_g3_ParamLimits

0x4596,	// (0x000229c0) list_medium_line_x3_t4_g4_g3

0x881e,	// (0x00026c48) list_medium_line_x3_t4_g4_g4_ParamLimits

0x881e,	// (0x00026c48) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd02,	// (0x0002e12c) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd02,	// (0x0002e12c) list_medium_line_x3_t4_g4_g

0x882a,	// (0x00026c54) list_medium_line_x3_t4_g4_t1_ParamLimits

0x882a,	// (0x00026c54) list_medium_line_x3_t4_g4_t1

0x8841,	// (0x00026c6b) list_medium_line_x3_t4_g4_t2_ParamLimits

0x8841,	// (0x00026c6b) list_medium_line_x3_t4_g4_t2

0x45c3,	// (0x000229ed) list_medium_line_x3_t4_g4_t3_ParamLimits

0x45c3,	// (0x000229ed) list_medium_line_x3_t4_g4_t3

0x8856,	// (0x00026c80) list_medium_line_x3_t4_g4_t4_ParamLimits

0x8856,	// (0x00026c80) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd0b,	// (0x0002e135) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd0b,	// (0x0002e135) list_medium_line_x3_t4_g4_t

0x8873,	// (0x00026c9d) list_single_dyc_row_text_pane_t1_ParamLimits

0x8873,	// (0x00026c9d) list_single_dyc_row_text_pane_t1

0x88aa,	// (0x00026cd4) list_single_dyc_row_text_pane_t2_ParamLimits

0x88aa,	// (0x00026cd4) list_single_dyc_row_text_pane_t2

0xe4e4,	// (0x0002c90e) list_single_dyc_row_text_pane_t3_ParamLimits

0xe4e4,	// (0x0002c90e) list_single_dyc_row_text_pane_t3

0x0005,

0xfd14,	// (0x0002e13e) list_single_dyc_row_text_pane_t_ParamLimits

0xfd14,	// (0x0002e13e) list_single_dyc_row_text_pane_t

0xe508,	// (0x0002c932) list_single_dyc_row_pane_g1_ParamLimits

0xe508,	// (0x0002c932) list_single_dyc_row_pane_g1

0xe514,	// (0x0002c93e) list_single_dyc_row_pane_g2_ParamLimits

0xe514,	// (0x0002c93e) list_single_dyc_row_pane_g2

0xe520,	// (0x0002c94a) list_single_dyc_row_pane_g3_ParamLimits

0xe520,	// (0x0002c94a) list_single_dyc_row_pane_g3

0xe52c,	// (0x0002c956) list_single_dyc_row_pane_g4_ParamLimits

0xe52c,	// (0x0002c956) list_single_dyc_row_pane_g4

0x0003,

0xfd21,	// (0x0002e14b) list_single_dyc_row_pane_g_ParamLimits

0xfd21,	// (0x0002e14b) list_single_dyc_row_pane_g

0xe538,	// (0x0002c962) list_single_dyc_row_text_pane_ParamLimits

0xe538,	// (0x0002c962) list_single_dyc_row_text_pane

0x9c9f,	// (0x000280c9) bg_sp_fs_scroll_pane

0xe557,	// (0x0002c981) thumb_sp_fs_scroll_pane

0x70dc,	// (0x00025506) list_medium_line_g1_ParamLimits

0x70dc,	// (0x00025506) list_medium_line_g1

0x89cd,	// (0x00026df7) list_medium_line_t1_ParamLimits

0x89cd,	// (0x00026df7) list_medium_line_t1

0x3167,	// (0x00021591) list_medium_line_x2_g1_ParamLimits

0x3167,	// (0x00021591) list_medium_line_x2_g1

0x3173,	// (0x0002159d) list_medium_line_x2_g2_ParamLimits

0x3173,	// (0x0002159d) list_medium_line_x2_g2

0x0001,

0xfd2a,	// (0x0002e154) list_medium_line_x2_g_ParamLimits

0xfd2a,	// (0x0002e154) list_medium_line_x2_g

0xe560,	// (0x0002c98a) list_medium_line_x2_t1_ParamLimits

0xe560,	// (0x0002c98a) list_medium_line_x2_t1

0x3167,	// (0x00021591) list_medium_line_x3_g1_ParamLimits

0x3167,	// (0x00021591) list_medium_line_x3_g1

0x3173,	// (0x0002159d) list_medium_line_x3_g2_ParamLimits

0x3173,	// (0x0002159d) list_medium_line_x3_g2

0x0001,

0xfd2a,	// (0x0002e154) list_medium_line_x3_g_ParamLimits

0xfd2a,	// (0x0002e154) list_medium_line_x3_g

0xe560,	// (0x0002c98a) list_medium_line_x3_t1_ParamLimits

0xe560,	// (0x0002c98a) list_medium_line_x3_t1

0xe576,	// (0x0002c9a0) thumb_sp_fs_scroll_pane_g1

0xe57f,	// (0x0002c9a9) thumb_sp_fs_scroll_pane_g2

0xe588,	// (0x0002c9b2) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd2f,	// (0x0002e159) thumb_sp_fs_scroll_pane_g

0xe576,	// (0x0002c9a0) bg_sp_fs_scroll_pane_g1

0xe57f,	// (0x0002c9a9) bg_sp_fs_scroll_pane_g2

0xe588,	// (0x0002c9b2) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd2f,	// (0x0002e159) bg_sp_fs_scroll_pane_g

0x3167,	// (0x00021591) list_medium_line_x2_t3_g4_g1_ParamLimits

0x3167,	// (0x00021591) list_medium_line_x2_t3_g4_g1

0x320c,	// (0x00021636) list_medium_line_x2_t3_g4_g2_ParamLimits

0x320c,	// (0x00021636) list_medium_line_x2_t3_g4_g2

0x3173,	// (0x0002159d) list_medium_line_x2_t3_g4_g3_ParamLimits

0x3173,	// (0x0002159d) list_medium_line_x2_t3_g4_g3

0x317f,	// (0x000215a9) list_medium_line_x2_t3_g4_g4_ParamLimits

0x317f,	// (0x000215a9) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2a7,	// (0x0002d6d1) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2a7,	// (0x0002d6d1) list_medium_line_x2_t3_g4_g

0x89e2,	// (0x00026e0c) list_medium_line_x2_t3_g4_t1_ParamLimits

0x89e2,	// (0x00026e0c) list_medium_line_x2_t3_g4_t1

0x89f8,	// (0x00026e22) list_medium_line_x2_t3_g4_t2_ParamLimits

0x89f8,	// (0x00026e22) list_medium_line_x2_t3_g4_t2

0x31b2,	// (0x000215dc) list_medium_line_x2_t3_g4_t3_ParamLimits

0x31b2,	// (0x000215dc) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd36,	// (0x0002e160) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd36,	// (0x0002e160) list_medium_line_x2_t3_g4_t

0x70dc,	// (0x00025506) list_medium_line_g2_g1_ParamLimits

0x70dc,	// (0x00025506) list_medium_line_g2_g1

0x70e8,	// (0x00025512) list_medium_line_g2_g2_ParamLimits

0x70e8,	// (0x00025512) list_medium_line_g2_g2

0x0001,

0xf9e9,	// (0x0002de13) list_medium_line_g2_g_ParamLimits

0xf9e9,	// (0x0002de13) list_medium_line_g2_g

0x8a12,	// (0x00026e3c) list_medium_line_g2_t1_ParamLimits

0x8a12,	// (0x00026e3c) list_medium_line_g2_t1

0x70dc,	// (0x00025506) list_medium_line_t3_g2_g1_ParamLimits

0x70dc,	// (0x00025506) list_medium_line_t3_g2_g1

0x70e8,	// (0x00025512) list_medium_line_t3_g2_g2_ParamLimits

0x70e8,	// (0x00025512) list_medium_line_t3_g2_g2

0x0001,

0xf9e9,	// (0x0002de13) list_medium_line_t3_g2_g_ParamLimits

0xf9e9,	// (0x0002de13) list_medium_line_t3_g2_g

0x8a27,	// (0x00026e51) list_medium_line_t3_g2_t1_ParamLimits

0x8a27,	// (0x00026e51) list_medium_line_t3_g2_t1

0x8a41,	// (0x00026e6b) list_medium_line_t3_g2_t2_ParamLimits

0x8a41,	// (0x00026e6b) list_medium_line_t3_g2_t2

0x8a57,	// (0x00026e81) list_medium_line_t3_g2_t3_ParamLimits

0x8a57,	// (0x00026e81) list_medium_line_t3_g2_t3

0x0002,

0xfd3d,	// (0x0002e167) list_medium_line_t3_g2_t_ParamLimits

0xfd3d,	// (0x0002e167) list_medium_line_t3_g2_t

0x85ee,	// (0x00026a18) list_medium_line_right_icon_g1

0x8a6d,	// (0x00026e97) list_medium_line_right_icon_t1

0x70dc,	// (0x00025506) list_medium_line_t2_g1_ParamLimits

0x70dc,	// (0x00025506) list_medium_line_t2_g1

0x8a7b,	// (0x00026ea5) list_medium_line_t2_t1_ParamLimits

0x8a7b,	// (0x00026ea5) list_medium_line_t2_t1

0x8a95,	// (0x00026ebf) list_medium_line_t2_t2_ParamLimits

0x8a95,	// (0x00026ebf) list_medium_line_t2_t2

0x0001,

0xfd44,	// (0x0002e16e) list_medium_line_t2_t_ParamLimits

0xfd44,	// (0x0002e16e) list_medium_line_t2_t

0x70dc,	// (0x00025506) list_medium_line_t3_g1_ParamLimits

0x70dc,	// (0x00025506) list_medium_line_t3_g1

0x8aaa,	// (0x00026ed4) list_medium_line_t3_t1_ParamLimits

0x8aaa,	// (0x00026ed4) list_medium_line_t3_t1

0x8ac4,	// (0x00026eee) list_medium_line_t3_t2_ParamLimits

0x8ac4,	// (0x00026eee) list_medium_line_t3_t2

0x8ada,	// (0x00026f04) list_medium_line_t3_t3_ParamLimits

0x8ada,	// (0x00026f04) list_medium_line_t3_t3

0x0002,

0xfd49,	// (0x0002e173) list_medium_line_t3_t_ParamLimits

0xfd49,	// (0x0002e173) list_medium_line_t3_t

0x70dc,	// (0x00025506) list_medium_line_g3_g1_ParamLimits

0x70dc,	// (0x00025506) list_medium_line_g3_g1

0x8aef,	// (0x00026f19) list_medium_line_g3_g2_ParamLimits

0x8aef,	// (0x00026f19) list_medium_line_g3_g2

0x70e8,	// (0x00025512) list_medium_line_g3_g3_ParamLimits

0x70e8,	// (0x00025512) list_medium_line_g3_g3

0x0002,

0xfd50,	// (0x0002e17a) list_medium_line_g3_g_ParamLimits

0xfd50,	// (0x0002e17a) list_medium_line_g3_g

0x8afb,	// (0x00026f25) list_medium_line_g3_t1_ParamLimits

0x8afb,	// (0x00026f25) list_medium_line_g3_t1

0x70dc,	// (0x00025506) list_medium_line_t2_g3_g1_ParamLimits

0x70dc,	// (0x00025506) list_medium_line_t2_g3_g1

0x8aef,	// (0x00026f19) list_medium_line_t2_g3_g2_ParamLimits

0x8aef,	// (0x00026f19) list_medium_line_t2_g3_g2

0x70e8,	// (0x00025512) list_medium_line_t2_g3_g3_ParamLimits

0x70e8,	// (0x00025512) list_medium_line_t2_g3_g3

0x0002,

0xfd50,	// (0x0002e17a) list_medium_line_t2_g3_g_ParamLimits

0xfd50,	// (0x0002e17a) list_medium_line_t2_g3_g

0x8b10,	// (0x00026f3a) list_medium_line_t2_g3_t1_ParamLimits

0x8b10,	// (0x00026f3a) list_medium_line_t2_g3_t1

0x8b2a,	// (0x00026f54) list_medium_line_t2_g3_t2_ParamLimits

0x8b2a,	// (0x00026f54) list_medium_line_t2_g3_t2

0x0001,

0xfd57,	// (0x0002e181) list_medium_line_t2_g3_t_ParamLimits

0xfd57,	// (0x0002e181) list_medium_line_t2_g3_t

0x70dc,	// (0x00025506) list_medium_line_t3_g3_g1_ParamLimits

0x70dc,	// (0x00025506) list_medium_line_t3_g3_g1

0x8aef,	// (0x00026f19) list_medium_line_t3_g3_g2_ParamLimits

0x8aef,	// (0x00026f19) list_medium_line_t3_g3_g2

0x70e8,	// (0x00025512) list_medium_line_t3_g3_g3_ParamLimits

0x70e8,	// (0x00025512) list_medium_line_t3_g3_g3

0x0002,

0xfd50,	// (0x0002e17a) list_medium_line_t3_g3_g_ParamLimits

0xfd50,	// (0x0002e17a) list_medium_line_t3_g3_g

0x8b40,	// (0x00026f6a) list_medium_line_t3_g3_t1_ParamLimits

0x8b40,	// (0x00026f6a) list_medium_line_t3_g3_t1

0x8b59,	// (0x00026f83) list_medium_line_t3_g3_t2_ParamLimits

0x8b59,	// (0x00026f83) list_medium_line_t3_g3_t2

0x8b6f,	// (0x00026f99) list_medium_line_t3_g3_t3_ParamLimits

0x8b6f,	// (0x00026f99) list_medium_line_t3_g3_t3

0x0002,

0xfd5c,	// (0x0002e186) list_medium_line_t3_g3_t_ParamLimits

0xfd5c,	// (0x0002e186) list_medium_line_t3_g3_t

0x87f0,	// (0x00026c1a) list_medium_line_right_iconx2_g1

0x85ee,	// (0x00026a18) list_medium_line_right_iconx2_g2

0x0001,

0xfd63,	// (0x0002e18d) list_medium_line_right_iconx2_g

0x8b85,	// (0x00026faf) list_medium_line_right_iconx2_t1

0x87f0,	// (0x00026c1a) list_medium_line_t2_right_iconx2_g1

0x85ee,	// (0x00026a18) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd63,	// (0x0002e18d) list_medium_line_t2_right_iconx2_g

0x8b93,	// (0x00026fbd) list_medium_line_t2_right_iconx2_t1

0x8ba3,	// (0x00026fcd) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd68,	// (0x0002e192) list_medium_line_t2_right_iconx2_t

0x8bb1,	// (0x00026fdb) list_medium_line_x4_t4_t1

0x8bbf,	// (0x00026fe9) list_medium_line_x4_t4_t2

0x8bcf,	// (0x00026ff9) list_medium_line_x4_t4_t3

0x8bdf,	// (0x00027009) list_medium_line_x4_t4_t4

0x0003,

0xfd6d,	// (0x0002e197) list_medium_line_x4_t4_t

0x8c19,	// (0x00027043) tport_appsw_pane_ParamLimits

0x8c19,	// (0x00027043) tport_appsw_pane

0x8c27,	// (0x00027051) tport_contact_pane_ParamLimits

0x8c27,	// (0x00027051) tport_contact_pane

0x8c37,	// (0x00027061) tport_listscroll_pane_ParamLimits

0x8c37,	// (0x00027061) tport_listscroll_pane

0x8c47,	// (0x00027071) cell_tport_appsw_pane_ParamLimits

0x8c47,	// (0x00027071) cell_tport_appsw_pane

0xcb99,	// (0x0002afc3) tport_appsw_pane_g1_ParamLimits

0xcb99,	// (0x0002afc3) tport_appsw_pane_g1

0xe591,	// (0x0002c9bb) tport_contact_pane_g1

0xde55,	// (0x0002c27f) tport_contact_pane_t1

0xe59a,	// (0x0002c9c4) tport_contact_pane_t2

0x0001,

0xfd76,	// (0x0002e1a0) tport_contact_pane_t

0xe5a8,	// (0x0002c9d2) list_tport_pane

0xe5b1,	// (0x0002c9db) scroll_pane_cp_030

0x8c7a,	// (0x000270a4) cell_tport_appsw_pane_g1

0x8c8a,	// (0x000270b4) cell_tport_appsw_pane_t1

0x8c98,	// (0x000270c2) grid_highlight_pane_cp019

0x8ca0,	// (0x000270ca) list_tport_double_graphic_pane_ParamLimits

0x8ca0,	// (0x000270ca) list_tport_double_graphic_pane

0xa56f,	// (0x00028999) list_highlight_pane_cp023_ParamLimits

0xa56f,	// (0x00028999) list_highlight_pane_cp023

0x8cb1,	// (0x000270db) list_tport_double_graphic_pane_g1_ParamLimits

0x8cb1,	// (0x000270db) list_tport_double_graphic_pane_g1

0x8cbe,	// (0x000270e8) list_tport_double_graphic_pane_t1_ParamLimits

0x8cbe,	// (0x000270e8) list_tport_double_graphic_pane_t1

0x8cd3,	// (0x000270fd) list_tport_double_graphic_pane_t2_ParamLimits

0x8cd3,	// (0x000270fd) list_tport_double_graphic_pane_t2

0x0001,

0xfd82,	// (0x0002e1ac) list_tport_double_graphic_pane_t_ParamLimits

0xfd82,	// (0x0002e1ac) list_tport_double_graphic_pane_t

0x9c9f,	// (0x000280c9) main_cale_note_pane

0x2242,	// (0x0002066c) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x2242,	// (0x0002066c) cell_vitu2_function_top_wide_pane_cp01

0x81d4,	// (0x000265fe) wait_bar_pane_cp05_ParamLimits

0xa56f,	// (0x00028999) listscroll_cmail_pane

0xe5ba,	// (0x0002c9e4) list_cmail_pane

0x8ce5,	// (0x0002710f) list_cmail_body_pane

0x8d0c,	// (0x00027136) list_single_cmail_header_caption_pane

0x8d37,	// (0x00027161) list_single_cmail_header_detail_pane_ParamLimits

0x8d37,	// (0x00027161) list_single_cmail_header_detail_pane

0xe5ca,	// (0x0002c9f4) list_single_cmail_header_caption_pane_t1

0x8d6d,	// (0x00027197) list_single_cmail_header_detail_pane_g1_ParamLimits

0x8d6d,	// (0x00027197) list_single_cmail_header_detail_pane_g1

0xe5e1,	// (0x0002ca0b) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe5e1,	// (0x0002ca0b) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd87,	// (0x0002e1b1) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd87,	// (0x0002e1b1) list_single_cmail_header_detail_pane_g

0xe5fa,	// (0x0002ca24) list_single_cmail_header_detail_pane_t1_ParamLimits

0xe5fa,	// (0x0002ca24) list_single_cmail_header_detail_pane_t1

0xe65a,	// (0x0002ca84) list_single_cmail_header_editor_pane_bg_ParamLimits

0xe65a,	// (0x0002ca84) list_single_cmail_header_editor_pane_bg

0xdfb2,	// (0x0002c3dc) list_cmail_body_pane_g1

0xe671,	// (0x0002ca9b) list_cmail_body_pane_t1

0xd2c1,	// (0x0002b6eb) list_single_cmail_header_editor_pane_bg_g1

0xa811,	// (0x00028c3b) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd2d1,	// (0x0002b6fb) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd2c9,	// (0x0002b6f3) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd521,	// (0x0002b94b) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd2f1,	// (0x0002b71b) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd2e1,	// (0x0002b70b) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd2e9,	// (0x0002b713) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xa7f1,	// (0x00028c1b) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8d83,	// (0x000271ad) calenote_gesture_pane_ParamLimits

0x8d83,	// (0x000271ad) calenote_gesture_pane

0x8d9d,	// (0x000271c7) calenote_window_pane_ParamLimits

0x8d9d,	// (0x000271c7) calenote_window_pane

0xe67f,	// (0x0002caa9) popup_note_window_cp01

0x8db5,	// (0x000271df) calenote_swipe_1_pane_ParamLimits

0x8db5,	// (0x000271df) calenote_swipe_1_pane

0x8590,	// (0x000269ba) calenote_swipe_2_pane_ParamLimits

0x8590,	// (0x000269ba) calenote_swipe_2_pane

0xe30c,	// (0x0002c736) calenote_swipe_1_pane_g1_ParamLimits

0xe30c,	// (0x0002c736) calenote_swipe_1_pane_g1

0xe319,	// (0x0002c743) calenote_swipe_1_pane_g2_ParamLimits

0xe319,	// (0x0002c743) calenote_swipe_1_pane_g2

0x0001,

0xfcac,	// (0x0002e0d6) calenote_swipe_1_pane_g_ParamLimits

0xfcac,	// (0x0002e0d6) calenote_swipe_1_pane_g

0xe691,	// (0x0002cabb) calenote_swipe_1_pane_t1_ParamLimits

0xe691,	// (0x0002cabb) calenote_swipe_1_pane_t1

0xe30c,	// (0x0002c736) calenote_swipe_2_pane_g1_ParamLimits

0xe30c,	// (0x0002c736) calenote_swipe_2_pane_g1

0xe6b0,	// (0x0002cada) calenote_swipe_2_pane_g2_ParamLimits

0xe6b0,	// (0x0002cada) calenote_swipe_2_pane_g2

0x0001,

0xfd93,	// (0x0002e1bd) calenote_swipe_2_pane_g_ParamLimits

0xfd93,	// (0x0002e1bd) calenote_swipe_2_pane_g

0xe6bc,	// (0x0002cae6) calenote_swipe_2_pane_t1_ParamLimits

0xe6bc,	// (0x0002cae6) calenote_swipe_2_pane_t1

0x9c9f,	// (0x000280c9) main_mup_navstr_pane

0x60a7,	// (0x000244d1) main_mup3_pane_t7_ParamLimits

0x60a7,	// (0x000244d1) main_mup3_pane_t7

0x1a58,	// (0x0001fe82) main_mp4_pane_g6_ParamLimits

0x1a58,	// (0x0001fe82) main_mp4_pane_g6

0x1d69,	// (0x00020193) main_image3_pane_t4_ParamLimits

0x1d69,	// (0x00020193) main_image3_pane_t4

0x8dc8,	// (0x000271f2) popup_navstr_preview_pane_ParamLimits

0x8dc8,	// (0x000271f2) popup_navstr_preview_pane

0x8dd4,	// (0x000271fe) scroll_navstr_pane_ParamLimits

0x8dd4,	// (0x000271fe) scroll_navstr_pane

0x9c9f,	// (0x000280c9) bg_popup_preview_window_pane_cp04

0xe6e3,	// (0x0002cb0d) popup_navstr_preview_pane_t1

0x8de0,	// (0x0002720a) scroll_navstr_pane_g1_ParamLimits

0x8de0,	// (0x0002720a) scroll_navstr_pane_g1

0x8ded,	// (0x00027217) scroll_navstr_pane_t1_ParamLimits

0x8ded,	// (0x00027217) scroll_navstr_pane_t1

0xe688,	// (0x0002cab2) bg_button_pane_cp014

0xe688,	// (0x0002cab2) bg_button_pane_cp030

0x84a3,	// (0x000268cd) list_double_fisheye_pane_g4_ParamLimits

0x84a3,	// (0x000268cd) list_double_fisheye_pane_g4

0x84af,	// (0x000268d9) list_double_fisheye_pane_g5_ParamLimits

0x84af,	// (0x000268d9) list_double_fisheye_pane_g5

0xd442,	// (0x0002b86c) sp_fs_scroll_pane_cp03

0xe42c,	// (0x0002c856) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe438,	// (0x0002c862) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcc9,	// (0x0002e0f3) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x86af,	// (0x00026ad9) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe5c2,	// (0x0002c9ec) sp_fs_scroll_pane_cp02

0xa4e0,	// (0x0002890a) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa4e0,	// (0x0002890a) popup_sp_fs_calendar_preview_list_single_pane

0x9c9f,	// (0x000280c9) main_cam6_pano_pane

0x13b5,	// (0x0001f7df) main_mup3_pane_ParamLimits

0x9c9f,	// (0x000280c9) main_phacti_pane

0x80a9,	// (0x000264d3) bg_button_pane_cp11

0x80c1,	// (0x000264eb) main_mobtv_info_pane_g2_ParamLimits

0x80c1,	// (0x000264eb) main_mobtv_info_pane_g2

0x0001,

0xfc29,	// (0x0002e053) main_mobtv_info_pane_g_ParamLimits

0xfc29,	// (0x0002e053) main_mobtv_info_pane_g

0x8273,	// (0x0002669d) sc_clock_pane_t5_ParamLimits

0x8273,	// (0x0002669d) sc_clock_pane_t5

0x8314,	// (0x0002673e) main_radioblah_pane_g1_ParamLimits

0xe258,	// (0x0002c682) main_radioblah_pane_t3_ParamLimits

0xe258,	// (0x0002c682) main_radioblah_pane_t3

0xe270,	// (0x0002c69a) main_radioblah_pane_t4_ParamLimits

0xe270,	// (0x0002c69a) main_radioblah_pane_t4

0x8332,	// (0x0002675c) main_radioblah_text_pane_ParamLimits

0x8332,	// (0x0002675c) main_radioblah_text_pane

0x833f,	// (0x00026769) main_radioblah_info_pane_g1_ParamLimits

0x83d4,	// (0x000267fe) main_radioblah_info_pane_t4_ParamLimits

0x83d4,	// (0x000267fe) main_radioblah_info_pane_t4

0xa56f,	// (0x00028999) main_sp_fs_calendar_pane

0x8dff,	// (0x00027229) main_phacti_pane_g1

0x8e07,	// (0x00027231) phacti_note_pane_ParamLimits

0x8e07,	// (0x00027231) phacti_note_pane

0xe6fa,	// (0x0002cb24) phacti_term_pane_ParamLimits

0xe6fa,	// (0x0002cb24) phacti_term_pane

0xe70f,	// (0x0002cb39) phacti_note_pane_t1_ParamLimits

0xe70f,	// (0x0002cb39) phacti_note_pane_t1

0xe726,	// (0x0002cb50) phacti_term_pane_g1

0xe72e,	// (0x0002cb58) phacti_term_pane_t1_ParamLimits

0xe72e,	// (0x0002cb58) phacti_term_pane_t1

0xe758,	// (0x0002cb82) popup_sp_fs_calendar_preview_list_single_pane_g1

0xa596,	// (0x000289c0) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfd9d,	// (0x0002e1c7) popup_sp_fs_calendar_preview_list_single_pane_g

0xe760,	// (0x0002cb8a) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe760,	// (0x0002cb8a) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe776,	// (0x0002cba0) aid_popup_sp_fs_bg_corner_pane

0xc8a5,	// (0x0002accf) popup_sp_fs_calendar_preview_bg_pane_g1

0x9c9f,	// (0x000280c9) popup_sp_fs_calendar_preview_bg_pane

0xe77e,	// (0x0002cba8) popup_sp_fs_calendar_preview_list_pane

0xc49d,	// (0x0002a8c7) bg_main_sp_fs_cale_pane_ParamLimits

0xc49d,	// (0x0002a8c7) bg_main_sp_fs_cale_pane

0xe78f,	// (0x0002cbb9) listscroll_cale_mrui_pane_ParamLimits

0xe78f,	// (0x0002cbb9) listscroll_cale_mrui_pane

0xd345,	// (0x0002b76f) listscroll_sp_fs_schedule_track_pane

0xe7a4,	// (0x0002cbce) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe7a4,	// (0x0002cbce) main_sp_fs_ctrlbar_pane_cp01

0xe7b7,	// (0x0002cbe1) main_sp_fs_ribbon_pane

0xe7bf,	// (0x0002cbe9) popup_sp_fs_cale_preview_window

0x8e6a,	// (0x00027294) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8e6a,	// (0x00027294) list_single_sp_fs_schedule_track_pane

0xd17c,	// (0x0002b5a6) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xd17c,	// (0x0002b5a6) bg_sp_fs_highlight_list_pane_cp03

0x8e8c,	// (0x000272b6) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8e8c,	// (0x000272b6) list_single_sp_fs_schedule_track_pane_g1

0x8e98,	// (0x000272c2) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8e98,	// (0x000272c2) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfda2,	// (0x0002e1cc) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfda2,	// (0x0002e1cc) list_single_sp_fs_schedule_track_pane_g

0x8ea4,	// (0x000272ce) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8ea4,	// (0x000272ce) list_single_sp_fs_schedule_track_pane_t1

0x8ebc,	// (0x000272e6) sp_fs_schedule_track_pane_ParamLimits

0x8ebc,	// (0x000272e6) sp_fs_schedule_track_pane

0xe7d1,	// (0x0002cbfb) sp_fs_schedule_track_pane_g1

0xe7d9,	// (0x0002cc03) sp_fs_schedule_track_pane_g2

0xe7e1,	// (0x0002cc0b) sp_fs_schedule_track_pane_g3

0xe7e9,	// (0x0002cc13) sp_fs_schedule_track_pane_g4

0xe7f1,	// (0x0002cc1b) sp_fs_schedule_track_pane_g5

0x0004,

0xfda7,	// (0x0002e1d1) sp_fs_schedule_track_pane_g

0xd2c1,	// (0x0002b6eb) bg_sp_fs_schedule_viewer_highlight_g1

0xa811,	// (0x00028c3b) bg_sp_fs_schedule_viewer_highlight_g2

0xd2c9,	// (0x0002b6f3) bg_sp_fs_schedule_viewer_highlight_g3

0xd2d1,	// (0x0002b6fb) bg_sp_fs_schedule_viewer_highlight_g4

0xd521,	// (0x0002b94b) bg_sp_fs_schedule_viewer_highlight_g5

0xd2e1,	// (0x0002b70b) bg_sp_fs_schedule_viewer_highlight_g6

0xd2e9,	// (0x0002b713) bg_sp_fs_schedule_viewer_highlight_g7

0xd2f1,	// (0x0002b71b) bg_sp_fs_schedule_viewer_highlight_g8

0xa7f1,	// (0x00028c1b) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdb2,	// (0x0002e1dc) bg_sp_fs_schedule_viewer_highlight_g

0x9c9f,	// (0x000280c9) bg_main_sp_fs_ribbon_pane

0x8ecc,	// (0x000272f6) main_sp_fs_ribbon_pane_g1

0xe7f9,	// (0x0002cc23) main_sp_fs_ribbon_pane_t1

0x8ed5,	// (0x000272ff) main_sp_fs_ribbon_pane_t2

0xe808,	// (0x0002cc32) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdc5,	// (0x0002e1ef) main_sp_fs_ribbon_pane_t

0xe817,	// (0x0002cc41) main_sp_fs_ribbon_scheduler_pane

0xe81f,	// (0x0002cc49) bg_main_sp_fs_ribbon_pane_g1

0xe828,	// (0x0002cc52) bg_main_sp_fs_ribbon_pane_g2

0xe831,	// (0x0002cc5b) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdcc,	// (0x0002e1f6) bg_main_sp_fs_ribbon_pane_g

0xe839,	// (0x0002cc63) main_sp_fs_ribbon_scheduler_pane_g1

0xe842,	// (0x0002cc6c) main_sp_fs_ribbon_scheduler_pane_g2

0xe84b,	// (0x0002cc75) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdd3,	// (0x0002e1fd) main_sp_fs_ribbon_scheduler_pane_g

0xe854,	// (0x0002cc7e) list_cale_mrui_pane

0x8ee4,	// (0x0002730e) sp_fs_scroll_pane_cp07_ParamLimits

0x8ee4,	// (0x0002730e) sp_fs_scroll_pane_cp07

0x8f00,	// (0x0002732a) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8f00,	// (0x0002732a) bg_sp_fs_schedule_viewer_highlight

0xe861,	// (0x0002cc8b) list_single_sp_fs_schedule_track_pane_cp01

0xe869,	// (0x0002cc93) list_sp_fs_schedule_track_pane

0xe871,	// (0x0002cc9b) sp_fs_scroll_pane_cp06_ParamLimits

0xe871,	// (0x0002cc9b) sp_fs_scroll_pane_cp06

0xc8a5,	// (0x0002accf) bgmain_sp_fs_calendar_pane_g1

0x8f0d,	// (0x00027337) list_single_cale_mrui_pane_ParamLimits

0x8f0d,	// (0x00027337) list_single_cale_mrui_pane

0xe883,	// (0x0002ccad) list_single_cale_mrui_row_pane_ParamLimits

0xe883,	// (0x0002ccad) list_single_cale_mrui_row_pane

0xe890,	// (0x0002ccba) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe890,	// (0x0002ccba) list_single_cale_mrui_row_pane_g1

0xe8dd,	// (0x0002cd07) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe8dd,	// (0x0002cd07) list_single_cale_mrui_row_pane_t1

0x8f3a,	// (0x00027364) list_single_cale_mrui_row_pane_t2_ParamLimits

0x8f3a,	// (0x00027364) list_single_cale_mrui_row_pane_t2

0xe8ef,	// (0x0002cd19) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe8ef,	// (0x0002cd19) list_single_cale_mrui_row_pane_t3

0xe91e,	// (0x0002cd48) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe91e,	// (0x0002cd48) list_single_cale_mrui_row_pane_t4

0x0003,

0xfde1,	// (0x0002e20b) list_single_cale_mrui_row_pane_t_ParamLimits

0xfde1,	// (0x0002e20b) list_single_cale_mrui_row_pane_t

0x8fa0,	// (0x000273ca) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x8fa0,	// (0x000273ca) list_single_cmail_header_editor_pane_bg_cp01

0x8fc0,	// (0x000273ea) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x8fc0,	// (0x000273ea) list_single_cmail_header_editor_pane_bg_cp02

0x8fdc,	// (0x00027406) main_radioblah_text_pane_t1_ParamLimits

0x8fdc,	// (0x00027406) main_radioblah_text_pane_t1

0xe94d,	// (0x0002cd77) cam6_indi_pane_cp01

0xe955,	// (0x0002cd7f) cam6_mode_pane_cp01

0xe95d,	// (0x0002cd87) cam6_pano_pane

0xe966,	// (0x0002cd90) cam6_zoom_pane_cp01

0xe96e,	// (0x0002cd98) cam6_pano_image_pane

0xe979,	// (0x0002cda3) cam6_pano_pane_g1

0xdfb2,	// (0x0002c3dc) cam6_pano_pane_g2

0xe982,	// (0x0002cdac) cam6_pano_pane_g3

0xe98b,	// (0x0002cdb5) cam6_pano_pane_g4

0xce94,	// (0x0002b2be) cam6_pano_pane_g5

0xe994,	// (0x0002cdbe) cam6_pano_pane_g6

0xe8d5,	// (0x0002ccff) cam6_pano_pane_g7

0xe99e,	// (0x0002cdc8) cam6_pano_pane_g8

0xe9a7,	// (0x0002cdd1) cam6_pano_pane_g9

0x0008,

0xfdea,	// (0x0002e214) cam6_pano_pane_g

0x9c9f,	// (0x000280c9) main_browser_tag_pane

0xe6db,	// (0x0002cb05) grid_navstr_albumart_pane

0xe9b2,	// (0x0002cddc) cell_navstr_albumart_pane_ParamLimits

0xe9b2,	// (0x0002cddc) cell_navstr_albumart_pane

0xe9d2,	// (0x0002cdfc) cell_navstr_albumart_pane_g1

0xc2ae,	// (0x0002a6d8) cell_navstr_albumart_pane_g2

0xc2be,	// (0x0002a6e8) cell_navstr_albumart_pane_g3

0xc2b6,	// (0x0002a6e0) cell_navstr_albumart_pane_g4

0x0003,

0xfdfd,	// (0x0002e227) cell_navstr_albumart_pane_g

0x8ff7,	// (0x00027421) bt_list_pane_ParamLimits

0x8ff7,	// (0x00027421) bt_list_pane

0x9017,	// (0x00027441) bt_list_pane_t1

0x9026,	// (0x00027450) bt_list_pane_t2

0x0001,

0xfe06,	// (0x0002e230) bt_list_pane_t

0x9c9f,	// (0x000280c9) main_cale_prevew_pane

0x9035,	// (0x0002745f) popup_cale_preview_window_ParamLimits

0x9035,	// (0x0002745f) popup_cale_preview_window

0xa56f,	// (0x00028999) bg_popup_preview_window_pane_cp05_ParamLimits

0xa56f,	// (0x00028999) bg_popup_preview_window_pane_cp05

0xe9da,	// (0x0002ce04) list_cale_preview_pane_ParamLimits

0xe9da,	// (0x0002ce04) list_cale_preview_pane

0x904e,	// (0x00027478) list_double_cale_preview_pane_ParamLimits

0x904e,	// (0x00027478) list_double_cale_preview_pane

0x9060,	// (0x0002748a) list_single_cale_preview_pane_ParamLimits

0x9060,	// (0x0002748a) list_single_cale_preview_pane

0x9076,	// (0x000274a0) list_single_cale_preview_pane_g1

0x907e,	// (0x000274a8) list_single_cale_preview_pane_t1_ParamLimits

0x907e,	// (0x000274a8) list_single_cale_preview_pane_t1

0x9093,	// (0x000274bd) list_double_cale_preview_pane_g1

0x909b,	// (0x000274c5) list_double_cale_preview_pane_t1_ParamLimits

0x909b,	// (0x000274c5) list_double_cale_preview_pane_t1

0x90b0,	// (0x000274da) list_double_cale_preview_pane_t2_ParamLimits

0x90b0,	// (0x000274da) list_double_cale_preview_pane_t2

0x0001,

0xfe0b,	// (0x0002e235) list_double_cale_preview_pane_t_ParamLimits

0xfe0b,	// (0x0002e235) list_double_cale_preview_pane_t

0x9c9f,	// (0x000280c9) main_ezdial_pane

0xa56f,	// (0x00028999) main_sp_fs_email_pane_ParamLimits

0x8614,	// (0x00026a3e) cmail_ddmenu_btn01_pane_ParamLimits

0x8614,	// (0x00026a3e) cmail_ddmenu_btn01_pane

0x8631,	// (0x00026a5b) cmail_ddmenu_btn02_pane_ParamLimits

0x8631,	// (0x00026a5b) cmail_ddmenu_btn02_pane

0x864f,	// (0x00026a79) cmail_ddmenu_btn03_pane_ParamLimits

0x864f,	// (0x00026a79) cmail_ddmenu_btn03_pane

0x86ea,	// (0x00026b14) main_sp_fs_ctrlbar_pane_ParamLimits

0x8700,	// (0x00026b2a) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x8ce5,	// (0x0002710f) list_cmail_body_pane_ParamLimits

0xe5d8,	// (0x0002ca02) bg_button_pane_cp12

0xe5ed,	// (0x0002ca17) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe5ed,	// (0x0002ca17) list_single_cmail_header_detail_pane_g3

0xe636,	// (0x0002ca60) list_single_cmail_header_detail_pane_t2_ParamLimits

0xe636,	// (0x0002ca60) list_single_cmail_header_detail_pane_t2

0x0001,

0xfd8e,	// (0x0002e1b8) list_single_cmail_header_detail_pane_t_ParamLimits

0xfd8e,	// (0x0002e1b8) list_single_cmail_header_detail_pane_t

0xe743,	// (0x0002cb6d) phacti_term_pane_t2_ParamLimits

0xe743,	// (0x0002cb6d) phacti_term_pane_t2

0x0001,

0xfd98,	// (0x0002e1c2) phacti_term_pane_t_ParamLimits

0xfd98,	// (0x0002e1c2) phacti_term_pane_t

0xe9e6,	// (0x0002ce10) aid_size_list_single_double

0x90c8,	// (0x000274f2) popup_ezdial_listscroll_window

0x90e9,	// (0x00027513) popup_number_entry_window_cp01

0xa5b8,	// (0x000289e2) bg_popup_call_pane_cp09

0xe9f2,	// (0x0002ce1c) ezdial_list_pane

0xe9fa,	// (0x0002ce24) scroll_pane_cp23

0xc68a,	// (0x0002aab4) bg_button_pane_cp028_ParamLimits

0xc68a,	// (0x0002aab4) bg_button_pane_cp028

0x90f7,	// (0x00027521) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x90f7,	// (0x00027521) cmail_ddmenu_btn01_pane_g1

0x9107,	// (0x00027531) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x9107,	// (0x00027531) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe10,	// (0x0002e23a) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe10,	// (0x0002e23a) cmail_ddmenu_btn01_pane_g

0xea02,	// (0x0002ce2c) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xea02,	// (0x0002ce2c) cmail_ddmenu_btn01_pane_t1

0xc49d,	// (0x0002a8c7) bg_button_pane_cp029_ParamLimits

0xc49d,	// (0x0002a8c7) bg_button_pane_cp029

0x9107,	// (0x00027531) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x9107,	// (0x00027531) cmail_ddmenu_btn02_pane_g1

0x911f,	// (0x00027549) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x911f,	// (0x00027549) cmail_ddmenu_btn02_pane_t1

0xd17c,	// (0x0002b5a6) bg_button_pane_cp031_ParamLimits

0xd17c,	// (0x0002b5a6) bg_button_pane_cp031

0x9107,	// (0x00027531) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x9107,	// (0x00027531) cmail_ddmenu_btn03_pane_g1

0x911f,	// (0x00027549) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x911f,	// (0x00027549) cmail_ddmenu_btn03_pane_t1

0x6902,	// (0x00024d2c) cell_dialer2_keypad_pane_t1_ParamLimits

0x691c,	// (0x00024d46) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x691c,	// (0x00024d46) cell_dialer2_keypad_pane_t1_copy1

0x7eea,	// (0x00026314) ncimui_group_button_pane

0xa56f,	// (0x00028999) main_sp_fs_calendar_pane_ParamLimits

0x8d0c,	// (0x00027136) list_single_cmail_header_caption_pane_ParamLimits

0xe786,	// (0x0002cbb0) aid_recal_txt_sm_pane

0x9c9f,	// (0x000280c9) mian_recal_day_pane

0xe7bf,	// (0x0002cbe9) popup_sp_fs_cale_preview_window_ParamLimits

0xea17,	// (0x0002ce41) list_recal_day_pane

0xea59,	// (0x0002ce83) list_single_recal_day_pane_ParamLimits

0xea59,	// (0x0002ce83) list_single_recal_day_pane

0xea6b,	// (0x0002ce95) list_single_recal_day_pane_g1_ParamLimits

0xea6b,	// (0x0002ce95) list_single_recal_day_pane_g1

0xea77,	// (0x0002cea1) list_single_recal_day_pane_g2_ParamLimits

0xea77,	// (0x0002cea1) list_single_recal_day_pane_g2

0xea83,	// (0x0002cead) list_single_recal_day_pane_g3_ParamLimits

0xea83,	// (0x0002cead) list_single_recal_day_pane_g3

0x9143,	// (0x0002756d) list_single_recal_day_pane_g4_ParamLimits

0x9143,	// (0x0002756d) list_single_recal_day_pane_g4

0xea8f,	// (0x0002ceb9) list_single_recal_day_pane_g5_ParamLimits

0xea8f,	// (0x0002ceb9) list_single_recal_day_pane_g5

0xea9b,	// (0x0002cec5) list_single_recal_day_pane_g6_ParamLimits

0xea9b,	// (0x0002cec5) list_single_recal_day_pane_g6

0x0004,

0xfe1f,	// (0x0002e249) list_single_recal_day_pane_g_ParamLimits

0xfe1f,	// (0x0002e249) list_single_recal_day_pane_g

0xeaaf,	// (0x0002ced9) list_single_recal_day_pane_t1

0xeac1,	// (0x0002ceeb) list_single_recal_day_pane_t2

0x0001,

0xfe2a,	// (0x0002e254) list_single_recal_day_pane_t

0x915b,	// (0x00027585) ncimui_query_button_pane_ParamLimits

0x915b,	// (0x00027585) ncimui_query_button_pane

0x916b,	// (0x00027595) ncimui_query_button_pane_t1_ParamLimits

0x916b,	// (0x00027595) ncimui_query_button_pane_t1

0xead3,	// (0x0002cefd) ncimui_query_button_pane_t2_ParamLimits

0xead3,	// (0x0002cefd) ncimui_query_button_pane_t2

0x0001,

0xfe2f,	// (0x0002e259) ncimui_query_button_pane_t_ParamLimits

0xfe2f,	// (0x0002e259) ncimui_query_button_pane_t

0x917e,	// (0x000275a8) query_button_pane_ParamLimits

0x917e,	// (0x000275a8) query_button_pane

0x9c9f,	// (0x000280c9) bg_button_pane_cp0028

0xeae6,	// (0x0002cf10) query_button_pane_t1

0x13d1,	// (0x0001f7fb) main_tport_pane_ParamLimits

0x8bef,	// (0x00027019) bg_popup_window_pane_cp01_ParamLimits

0x8bef,	// (0x00027019) bg_popup_window_pane_cp01

0x8bfd,	// (0x00027027) heading_pane_cp08_ParamLimits

0x8bfd,	// (0x00027027) heading_pane_cp08

0x8c0b,	// (0x00027035) heading_pane_cp07_ParamLimits

0x8c0b,	// (0x00027035) heading_pane_cp07

0x8c7a,	// (0x000270a4) cell_tport_appsw_pane_g2

0x0002,

0xfd7b,	// (0x0002e1a5) cell_tport_appsw_pane_g

0xb185,	// (0x000295af) input_candi_list_open_g1

0xa9d4,	// (0x00028dfe) list_cale_time_pane_g6_ParamLimits

0xa9d4,	// (0x00028dfe) list_cale_time_pane_g6

0x5aed,	// (0x00023f17) aid_size_touch_calib_1_ParamLimits

0x5aed,	// (0x00023f17) aid_size_touch_calib_1

0x5af9,	// (0x00023f23) aid_size_touch_calib_2_ParamLimits

0x5af9,	// (0x00023f23) aid_size_touch_calib_2

0x5b07,	// (0x00023f31) aid_size_touch_calib_3_ParamLimits

0x5b07,	// (0x00023f31) aid_size_touch_calib_3

0x5b17,	// (0x00023f41) aid_size_touch_calib_4_ParamLimits

0x5b17,	// (0x00023f41) aid_size_touch_calib_4

0x5b25,	// (0x00023f4f) main_touch_calib_button_group_pane_ParamLimits

0x5b25,	// (0x00023f4f) main_touch_calib_button_group_pane

0x5b33,	// (0x00023f5d) main_touch_calib_pane_g1_ParamLimits

0x5b3f,	// (0x00023f69) main_touch_calib_pane_g2_ParamLimits

0x5b4b,	// (0x00023f75) main_touch_calib_pane_g3_ParamLimits

0x5b57,	// (0x00023f81) main_touch_calib_pane_g4_ParamLimits

0xf736,	// (0x0002db60) main_touch_calib_pane_g_ParamLimits

0x5b63,	// (0x00023f8d) main_touch_calib_pane_t1_ParamLimits

0x5b7c,	// (0x00023fa6) main_touch_calib_pane_t2_ParamLimits

0x5b95,	// (0x00023fbf) main_touch_calib_pane_t3_ParamLimits

0x5bab,	// (0x00023fd5) main_touch_calib_pane_t4_ParamLimits

0x5bc1,	// (0x00023feb) main_touch_calib_pane_t5_ParamLimits

0xf73f,	// (0x0002db69) main_touch_calib_pane_t_ParamLimits

0xcc34,	// (0x0002b05e) list_single_fp_cale_pane_g3_ParamLimits

0xcc34,	// (0x0002b05e) list_single_fp_cale_pane_g3

0x13b5,	// (0x0001f7df) bg_button_pane_cp012_ParamLimits

0x13b5,	// (0x0001f7df) bg_vkb2_func_pane_cp03_ParamLimits

0x2447,	// (0x00020871) cell_vitu2_function_top_pane_g1_ParamLimits

0x13b5,	// (0x0001f7df) bg_vkb2_func_pane_cp04_ParamLimits

0x7e72,	// (0x0002629c) main_ncimui_button_group_pane_ParamLimits

0x7e72,	// (0x0002629c) main_ncimui_button_group_pane

0x7ed8,	// (0x00026302) main_ncimui_pane_t3_ParamLimits

0x7ed8,	// (0x00026302) main_ncimui_pane_t3

0xe6f1,	// (0x0002cb1b) phacti_button_group_pane

0xe9e6,	// (0x0002ce10) aid_size_list_single_double_ParamLimits

0x90c8,	// (0x000274f2) popup_ezdial_listscroll_window_ParamLimits

0x90e9,	// (0x00027513) popup_number_entry_window_cp01_ParamLimits

0x918b,	// (0x000275b5) phacti_button_pane_ParamLimits

0x918b,	// (0x000275b5) phacti_button_pane

0x9c9f,	// (0x000280c9) bg_button_pane_cp14

0xeaf4,	// (0x0002cf1e) phacti_button_pane_t1

0x919c,	// (0x000275c6) main_touch_calib_button_pane_ParamLimits

0x919c,	// (0x000275c6) main_touch_calib_button_pane

0xa3dc,	// (0x00028806) bg_button_pane_cp18_ParamLimits

0xa3dc,	// (0x00028806) bg_button_pane_cp18

0xeb02,	// (0x0002cf2c) main_touch_calib_button_pane_t1_ParamLimits

0xeb02,	// (0x0002cf2c) main_touch_calib_button_pane_t1

0xeb18,	// (0x0002cf42) main_touch_calib_button_pane_t2_ParamLimits

0xeb18,	// (0x0002cf42) main_touch_calib_button_pane_t2

0x0001,

0xfe34,	// (0x0002e25e) main_touch_calib_button_pane_t_ParamLimits

0xfe34,	// (0x0002e25e) main_touch_calib_button_pane_t

0x9c9f,	// (0x000280c9) cell_ncimui_button_pane

0x9c9f,	// (0x000280c9) bg_button_pane_cp032

0xeb36,	// (0x0002cf60) cell_ncimui_button_pane_t1

0x1c7c,	// (0x000200a6) image3_infobar_pane_ParamLimits

0x1c7c,	// (0x000200a6) image3_infobar_pane

0x8295,	// (0x000266bf) fs_bigclock_status_pane_ParamLimits

0x8295,	// (0x000266bf) fs_bigclock_status_pane

0x82a2,	// (0x000266cc) main_fs_bigclock_clock_pane_ParamLimits

0x82a2,	// (0x000266cc) main_fs_bigclock_clock_pane

0x82b6,	// (0x000266e0) main_fs_bigclock_indi_pane_ParamLimits

0x82b6,	// (0x000266e0) main_fs_bigclock_indi_pane

0x82de,	// (0x00026708) main_fs_bigclock_swipe_pane_ParamLimits

0x82de,	// (0x00026708) main_fs_bigclock_swipe_pane

0x9c9f,	// (0x000280c9) main_fs_clock_dumped_data

0xe0bf,	// (0x0002c4e9) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe0bf,	// (0x0002c4e9) list_single_fs_bigclock_indicator_pane_g1

0xe0e3,	// (0x0002c50d) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe0e3,	// (0x0002c50d) list_single_fs_bigclock_indicator_pane_g2

0xe0fd,	// (0x0002c527) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe0fd,	// (0x0002c527) list_single_fs_bigclock_indicator_pane_g3

0xe117,	// (0x0002c541) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe117,	// (0x0002c541) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc5d,	// (0x0002e087) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc5d,	// (0x0002e087) list_single_fs_bigclock_indicator_pane_g

0xe142,	// (0x0002c56c) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe142,	// (0x0002c56c) list_single_fs_bigclock_indicator_pane_t1

0xe16a,	// (0x0002c594) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe16a,	// (0x0002c594) list_single_fs_bigclock_indicator_pane_t2

0xe192,	// (0x0002c5bc) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe192,	// (0x0002c5bc) list_single_fs_bigclock_indicator_pane_t3

0xe1ba,	// (0x0002c5e4) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe1ba,	// (0x0002c5e4) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc68,	// (0x0002e092) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc68,	// (0x0002e092) list_single_fs_bigclock_indicator_pane_t

0xeb44,	// (0x0002cf6e) image3_infobar_fav_pane_ParamLimits

0xeb44,	// (0x0002cf6e) image3_infobar_fav_pane

0xeb54,	// (0x0002cf7e) image3_infobar_loc_pane_ParamLimits

0xeb54,	// (0x0002cf7e) image3_infobar_loc_pane

0xeb68,	// (0x0002cf92) image3_infobar_time_pane_ParamLimits

0xeb68,	// (0x0002cf92) image3_infobar_time_pane

0xc8a5,	// (0x0002accf) image3_infobar_time_pane_g1

0xeb78,	// (0x0002cfa2) image3_infobar_time_pane_t1

0xc8a5,	// (0x0002accf) image3_infobar_loc_pane_g1

0xeb86,	// (0x0002cfb0) image3_infobar_loc_pane_g2

0x0001,

0xfe39,	// (0x0002e263) image3_infobar_loc_pane_g

0xeb8e,	// (0x0002cfb8) image3_infobar_loc_pane_t1

0xc8a5,	// (0x0002accf) image3_infobar_fav_pane_g1

0xeb9c,	// (0x0002cfc6) image3_infobar_fav_pane_g2

0x0001,

0xfe3e,	// (0x0002e268) image3_infobar_fav_pane_g

0xeba4,	// (0x0002cfce) fs_bigclock_status_battery_pane

0xebad,	// (0x0002cfd7) fs_bigclock_status_signal_pane

0xebb6,	// (0x0002cfe0) fs_bigclock_status_title_pane

0xebbf,	// (0x0002cfe9) fs_bigclock_status_signal_pane_g1

0xebc8,	// (0x0002cff2) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe43,	// (0x0002e26d) fs_bigclock_status_signal_pane_g

0xebd0,	// (0x0002cffa) fs_bigclock_status_battery_pane_g1

0xebd9,	// (0x0002d003) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe48,	// (0x0002e272) fs_bigclock_status_battery_pane_g

0xebe1,	// (0x0002d00b) fs_bigclock_status_title_pane_t1

0x91ac,	// (0x000275d6) main_fs_bigclock_clock_pane_g1

0x91ac,	// (0x000275d6) main_fs_bigclock_clock_pane_g2

0x91b9,	// (0x000275e3) main_fs_bigclock_clock_pane_g3

0x91b9,	// (0x000275e3) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe4d,	// (0x0002e277) main_fs_bigclock_clock_pane_g

0x91c5,	// (0x000275ef) main_fs_bigclock_clock_pane_t1

0x91d8,	// (0x00027602) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe56,	// (0x0002e280) main_fs_bigclock_clock_pane_t

0xebef,	// (0x0002d019) list_single_fs_bigclock_indicator_pane_ParamLimits

0xebef,	// (0x0002d019) list_single_fs_bigclock_indicator_pane

0xec00,	// (0x0002d02a) list_single_fs_bigclock_pane_ParamLimits

0xec00,	// (0x0002d02a) list_single_fs_bigclock_pane

0xec26,	// (0x0002d050) main_fs_bigclock_indicator_pane_t1

0xec35,	// (0x0002d05f) list_single_fs_bigclock_pane_g1

0xec3d,	// (0x0002d067) list_single_fs_bigclock_pane_t1

0xc8a5,	// (0x0002accf) main_fs_bigclock_swipe_pane_g1

0xec80,	// (0x0002d0aa) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe67,	// (0x0002e291) main_fs_bigclock_swipe_pane_g

0xec88,	// (0x0002d0b2) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xec88,	// (0x0002d0b2) main_fs_bigclock_swipe_pane_t1

0x45ed,	// (0x00022a17) call_type_pane_ParamLimits

0x9c9f,	// (0x000280c9) main_btmg_pane

0xe8bc,	// (0x0002cce6) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe8bc,	// (0x0002cce6) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdda,	// (0x0002e204) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdda,	// (0x0002e204) list_single_cale_mrui_row_pane_g

0xea40,	// (0x0002ce6a) list_recal_vselct_arw_lo_pane

0xea48,	// (0x0002ce72) list_recal_vselct_arw_up_pane

0xea50,	// (0x0002ce7a) list_recal_vselct_pane

0x922f,	// (0x00027659) btmg_button_pane

0x923b,	// (0x00027665) main_btmg_pane_g1

0x9c9f,	// (0x000280c9) bg_button_pane_cp044

0xeca5,	// (0x0002d0cf) btmg_button_pane_t1

0xc489,	// (0x0002a8b3) aid_listscroll_gen

0xa56f,	// (0x00028999) main_cntbar_detail_pane

0xe5ba,	// (0x0002c9e4) list_cmail_folder_pane

0xd442,	// (0x0002b86c) sp_fs_scroll_pane_cp03_ParamLimits

0x8d0c,	// (0x00027136) list_single_fs_dyc_pane_cp01_ParamLimits

0x8d0c,	// (0x00027136) list_single_fs_dyc_pane_cp01

0xecb3,	// (0x0002d0dd) aid_size_cmail_indent

0xecce,	// (0x0002d0f8) list_single_dyc_row_pane_cp01

0x9263,	// (0x0002768d) cntbar_detail_list_pane_ParamLimits

0x9263,	// (0x0002768d) cntbar_detail_list_pane

0x929d,	// (0x000276c7) main_cntbar_detail_cont_pane_ParamLimits

0x929d,	// (0x000276c7) main_cntbar_detail_cont_pane

0x4506,	// (0x00022930) scroll_pane_cp032_ParamLimits

0x4506,	// (0x00022930) scroll_pane_cp032

0x92a9,	// (0x000276d3) cntbar_detail_list_event_pane_ParamLimits

0x92a9,	// (0x000276d3) cntbar_detail_list_event_pane

0x926f,	// (0x00027699) cntbar_detail_list_shct_pane

0xa85f,	// (0x00028c89) aid_list_gen

0xecd7,	// (0x0002d101) aid_scroll

0xece0,	// (0x0002d10a) aid_size_touch_scroll_bar

0xe0da,	// (0x0002c504) aid_list_double

0x92bd,	// (0x000276e7) aid_list_single

0x7686,	// (0x00025ab0) aid_list_single_lg

0x92c6,	// (0x000276f0) aid_list_z_g_a_sm

0x92ce,	// (0x000276f8) aid_list_z_g_d

0x92d6,	// (0x00027700) aid_txt_z_prm

0x92e4,	// (0x0002770e) aid_txt_z_prm_cp01

0x92f2,	// (0x0002771c) aid_txt_z_sec

0x9300,	// (0x0002772a) main_cntbar_detail_cont_pane_g1_ParamLimits

0x9300,	// (0x0002772a) main_cntbar_detail_cont_pane_g1

0x930d,	// (0x00027737) main_cntbar_detail_cont_pane_g2_ParamLimits

0x930d,	// (0x00027737) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe6c,	// (0x0002e296) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe6c,	// (0x0002e296) main_cntbar_detail_cont_pane_g

0xece9,	// (0x0002d113) main_cntbar_detail_cont_pane_t1

0xecf7,	// (0x0002d121) main_cntbar_detail_cont_pane_t2

0xed05,	// (0x0002d12f) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe71,	// (0x0002e29b) main_cntbar_detail_cont_pane_t

0x9319,	// (0x00027743) cell_cntbar_detail_list_shct_pane_ParamLimits

0x9319,	// (0x00027743) cell_cntbar_detail_list_shct_pane

0xed13,	// (0x0002d13d) cntbar_detail_list_shct_pane_g1

0xed1c,	// (0x0002d146) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe78,	// (0x0002e2a2) cntbar_detail_list_shct_pane_g

0x932d,	// (0x00027757) cntbar_detail_list_event_pane_g1_ParamLimits

0x932d,	// (0x00027757) cntbar_detail_list_event_pane_g1

0x9339,	// (0x00027763) cntbar_detail_list_event_pane_g2_ParamLimits

0x9339,	// (0x00027763) cntbar_detail_list_event_pane_g2

0x0005,

0xfe7d,	// (0x0002e2a7) cntbar_detail_list_event_pane_g_ParamLimits

0xfe7d,	// (0x0002e2a7) cntbar_detail_list_event_pane_g

0x93a5,	// (0x000277cf) cntbar_detail_list_event_pane_t1_ParamLimits

0x93a5,	// (0x000277cf) cntbar_detail_list_event_pane_t1

0x93ba,	// (0x000277e4) cntbar_detail_list_event_pane_t2_ParamLimits

0x93ba,	// (0x000277e4) cntbar_detail_list_event_pane_t2

0x0002,

0xfe8a,	// (0x0002e2b4) cntbar_detail_list_event_pane_t_ParamLimits

0xfe8a,	// (0x0002e2b4) cntbar_detail_list_event_pane_t

0xc8a5,	// (0x0002accf) cell_cntbar_detail_list_shct_pane_g1

0xafe4,	// (0x0002940e) navi_pane_mv_g3

0xa56f,	// (0x00028999) main_cntbar_detail_pane_ParamLimits

0x9c9f,	// (0x000280c9) main_notif_wgt_pane

0x1993,	// (0x0001fdbd) aid_tch_main_mp4_pane_g4

0x1bf2,	// (0x0002001c) popup_slider_window_cp02

0xea36,	// (0x0002ce60) list_recal_day_event_pane

0x9243,	// (0x0002766d) cntbar_detail_btn_pane_ParamLimits

0x9243,	// (0x0002766d) cntbar_detail_btn_pane

0x9253,	// (0x0002767d) cntbar_detail_btn_pane_cp01_ParamLimits

0x9253,	// (0x0002767d) cntbar_detail_btn_pane_cp01

0x926f,	// (0x00027699) cntbar_detail_list_shct_pane_ParamLimits

0x927b,	// (0x000276a5) cntbar_detail_pane_g1_ParamLimits

0x927b,	// (0x000276a5) cntbar_detail_pane_g1

0x9287,	// (0x000276b1) cntbar_detail_pane_t1_ParamLimits

0x9287,	// (0x000276b1) cntbar_detail_pane_t1

0x9345,	// (0x0002776f) cntbar_detail_list_event_pane_g3_ParamLimits

0x9345,	// (0x0002776f) cntbar_detail_list_event_pane_g3

0x935d,	// (0x00027787) cntbar_detail_list_event_pane_g4_ParamLimits

0x935d,	// (0x00027787) cntbar_detail_list_event_pane_g4

0x9375,	// (0x0002779f) cntbar_detail_list_event_pane_g5_ParamLimits

0x9375,	// (0x0002779f) cntbar_detail_list_event_pane_g5

0x938d,	// (0x000277b7) cntbar_detail_list_event_pane_g6_ParamLimits

0x938d,	// (0x000277b7) cntbar_detail_list_event_pane_g6

0x93cf,	// (0x000277f9) cntbar_detail_list_event_pane_t3_ParamLimits

0x93cf,	// (0x000277f9) cntbar_detail_list_event_pane_t3

0x93e1,	// (0x0002780b) popup_notif_wgt_window_ParamLimits

0x93e1,	// (0x0002780b) popup_notif_wgt_window

0x93f1,	// (0x0002781b) popup_submenu_window_cp01_ParamLimits

0x93f1,	// (0x0002781b) popup_submenu_window_cp01

0xa5b8,	// (0x000289e2) bg_popup_window_pane_cp10

0xed25,	// (0x0002d14f) listscroll_notif_wgt_pane

0xed37,	// (0x0002d161) list_notif_wgt_window

0xed40,	// (0x0002d16a) scroll_pane_cp033

0x9403,	// (0x0002782d) list_notif_wgt_row_pane_ParamLimits

0x9403,	// (0x0002782d) list_notif_wgt_row_pane

0xed49,	// (0x0002d173) aid_size_list_notif_wgt_del

0xed56,	// (0x0002d180) list_notif_wgt_row_pane_g1

0xed62,	// (0x0002d18c) list_notif_wgt_row_pane_g2

0xed71,	// (0x0002d19b) list_notif_wgt_row_pane_g3

0x0002,

0xfe91,	// (0x0002e2bb) list_notif_wgt_row_pane_g

0xed7e,	// (0x0002d1a8) list_notif_wgt_row_pane_t1

0xed94,	// (0x0002d1be) list_notif_wgt_row_pane_t2

0xeda6,	// (0x0002d1d0) list_notif_wgt_row_pane_t3

0x0002,

0xfe98,	// (0x0002e2c2) list_notif_wgt_row_pane_t

0xd53b,	// (0x0002b965) list_recal_day_event_pane_g1

0xedb8,	// (0x0002d1e2) list_recal_day_event_pane_t1

0x9c9f,	// (0x000280c9) bg_button_pane_cp045

0x9415,	// (0x0002783f) cntbar_detail_btn_pane_t1

0xc49d,	// (0x0002a8c7) main_callh_pane_ParamLimits

0xc49d,	// (0x0002a8c7) main_callh_pane

0x9c9f,	// (0x000280c9) main_coverflow0_pane

0x9c9f,	// (0x000280c9) main_wgtman_pane

0x82f6,	// (0x00026720) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x82f6,	// (0x00026720) main_fs_bigclock_unlock_btn_pane

0x8c72,	// (0x0002709c) bg_button_pane_cp16

0x8c82,	// (0x000270ac) cell_tport_appsw_pane_g3

0x9423,	// (0x0002784d) cf0_flow_pane_ParamLimits

0x9423,	// (0x0002784d) cf0_flow_pane

0xedc7,	// (0x0002d1f1) listscroll_cf0_pane

0xedd2,	// (0x0002d1fc) main_cf0_pane_g1

0x9432,	// (0x0002785c) main_cf0_pane_t1_ParamLimits

0x9432,	// (0x0002785c) main_cf0_pane_t1

0x9446,	// (0x00027870) main_cf0_pane_t2_ParamLimits

0x9446,	// (0x00027870) main_cf0_pane_t2

0x0001,

0xfea4,	// (0x0002e2ce) main_cf0_pane_t_ParamLimits

0xfea4,	// (0x0002e2ce) main_cf0_pane_t

0xede4,	// (0x0002d20e) scroll_pane_cp11

0x945a,	// (0x00027884) cf0_flow_pane_g1

0x9462,	// (0x0002788c) cf0_flow_pane_g2

0x0001,

0xfea9,	// (0x0002e2d3) cf0_flow_pane_g

0x946a,	// (0x00027894) cf0_flow_pane_t1

0x9c9f,	// (0x000280c9) main_call6_pane

0x9c9f,	// (0x000280c9) main_calllock_pane

0x2674,	// (0x00020a9e) call6_btn_grp_pane_ParamLimits

0x2674,	// (0x00020a9e) call6_btn_grp_pane

0x2683,	// (0x00020aad) call6_pane_g1_ParamLimits

0x2683,	// (0x00020aad) call6_pane_g1

0x2693,	// (0x00020abd) popup_call6_1st_window_ParamLimits

0x2693,	// (0x00020abd) popup_call6_1st_window

0x26a1,	// (0x00020acb) popup_call6_2nd_window_ParamLimits

0x26a1,	// (0x00020acb) popup_call6_2nd_window

0x26af,	// (0x00020ad9) cell_call6_btn_pane_ParamLimits

0x26af,	// (0x00020ad9) cell_call6_btn_pane

0xa5b8,	// (0x000289e2) bg_popup_call2_in_pane_cp03

0xedef,	// (0x0002d219) popup_call6_1st_window_g1

0xedf7,	// (0x0002d221) popup_call6_1st_window_g2

0xedff,	// (0x0002d229) popup_call6_1st_window_g3

0x0002,

0xfeae,	// (0x0002e2d8) popup_call6_1st_window_g

0xee07,	// (0x0002d231) popup_call6_1st_window_t1

0xee16,	// (0x0002d240) popup_call6_1st_window_t2

0xee24,	// (0x0002d24e) popup_call6_1st_window_t3

0x0002,

0xfeb5,	// (0x0002e2df) popup_call6_1st_window_t

0xa5b8,	// (0x000289e2) bg_popup_call2_in_pane_cp04

0xedef,	// (0x0002d219) popup_call6_2nd_window_g1

0xedf7,	// (0x0002d221) popup_call6_2nd_window_g2

0xedff,	// (0x0002d229) popup_call6_2nd_window_g3

0x0002,

0xfeae,	// (0x0002e2d8) popup_call6_2nd_window_g

0xee07,	// (0x0002d231) popup_call6_2nd_window_t1

0x0f5d,	// (0x0001f387) bg_button_pane_cp15

0x26be,	// (0x00020ae8) cell_call6_btn_pane_g1

0x26c7,	// (0x00020af1) cell_call6_btn_pane_t1

0x9478,	// (0x000278a2) listscroll_wgtman_pane_ParamLimits

0x9478,	// (0x000278a2) listscroll_wgtman_pane

0x9494,	// (0x000278be) wgtman_btn_pane_ParamLimits

0x9494,	// (0x000278be) wgtman_btn_pane

0xadeb,	// (0x00029215) aid_scroll_copy1

0xee32,	// (0x0002d25c) list_wgtman_pane

0x94c9,	// (0x000278f3) wgtman_btn_pane_g1_ParamLimits

0x94c9,	// (0x000278f3) wgtman_btn_pane_g1

0x94f1,	// (0x0002791b) wgtman_btn_pane_t1_ParamLimits

0x94f1,	// (0x0002791b) wgtman_btn_pane_t1

0xee3c,	// (0x0002d266) wgtman_btn_pane_t2_ParamLimits

0xee3c,	// (0x0002d266) wgtman_btn_pane_t2

0x0001,

0xfebc,	// (0x0002e2e6) wgtman_btn_pane_t_ParamLimits

0xfebc,	// (0x0002e2e6) wgtman_btn_pane_t

0x9528,	// (0x00027952) listrow_wgtman_pane_ParamLimits

0x9528,	// (0x00027952) listrow_wgtman_pane

0x9543,	// (0x0002796d) listrow_wgtman_pane_g1

0x9550,	// (0x0002797a) listrow_wgtman_pane_g2

0x0001,

0xfec1,	// (0x0002e2eb) listrow_wgtman_pane_g

0x956e,	// (0x00027998) listrow_wgtman_pane_t1

0x9586,	// (0x000279b0) listrow_wgtman_pane_t2

0x0001,

0xfec6,	// (0x0002e2f0) listrow_wgtman_pane_t

0x95ac,	// (0x000279d6) wait_bar_pane_cp09

0xee53,	// (0x0002d27d) main_calllock_btn_pane

0xee5d,	// (0x0002d287) main_calllock_pane_g1

0x9c9f,	// (0x000280c9) bg_button_pane_cp17

0xee69,	// (0x0002d293) main_calllock_btn_pane_g1

0xee72,	// (0x0002d29c) main_calllock_btn_pane_t1

0x9c9f,	// (0x000280c9) main_dialer3_pane

0x9c9f,	// (0x000280c9) main_fmrd2_pane

0xc8a5,	// (0x0002accf) main_fs_bigclock_unlock_btn_pane_g1

0x95c6,	// (0x000279f0) main_fs_bigclock_unlock_btn_pane_t1

0x95d4,	// (0x000279fe) area_fmrd2_info_pane_ParamLimits

0x95d4,	// (0x000279fe) area_fmrd2_info_pane

0x95e2,	// (0x00027a0c) area_fmrd2_visual_pane_ParamLimits

0x95e2,	// (0x00027a0c) area_fmrd2_visual_pane

0x95f0,	// (0x00027a1a) fmrd2_indi_pane_ParamLimits

0x95f0,	// (0x00027a1a) fmrd2_indi_pane

0x95fd,	// (0x00027a27) area_fmrd2_visual_pane_g1

0x9605,	// (0x00027a2f) area_fmrd2_visual_pane_t1

0x9615,	// (0x00027a3f) area_fmrd2_visual_pane_t2

0x9625,	// (0x00027a4f) area_fmrd2_visual_pane_t3

0x0002,

0xfed0,	// (0x0002e2fa) area_fmrd2_visual_pane_t

0x9635,	// (0x00027a5f) area_fmrd2_info_pane_g1

0x963d,	// (0x00027a67) area_fmrd2_info_pane_t1

0x964d,	// (0x00027a77) area_fmrd2_info_pane_t2

0x965d,	// (0x00027a87) area_fmrd2_info_pane_t3

0x966d,	// (0x00027a97) area_fmrd2_info_pane_t4

0x0003,

0xfed7,	// (0x0002e301) area_fmrd2_info_pane_t

0x967b,	// (0x00027aa5) fmrd2_indi_pane_t1

0x968b,	// (0x00027ab5) fmrd2_indi_pane_t2

0x969b,	// (0x00027ac5) fmrd2_indi_pane_t3

0x0002,

0xfee0,	// (0x0002e30a) fmrd2_indi_pane_t

0xe126,	// (0x0002c550) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe126,	// (0x0002c550) list_single_fs_bigclock_indicator_pane_g5

0xe1d7,	// (0x0002c601) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe1d7,	// (0x0002c601) list_single_fs_bigclock_indicator_pane_t5

0x8e1d,	// (0x00027247) aid_cell_bcale_month_pane_ParamLimits

0x8e1d,	// (0x00027247) aid_cell_bcale_month_pane

0x8e3b,	// (0x00027265) bcale_month_pane_ParamLimits

0x8e3b,	// (0x00027265) bcale_month_pane

0x8e59,	// (0x00027283) bcale_preview_pane_ParamLimits

0x8e59,	// (0x00027283) bcale_preview_pane

0xec3d,	// (0x0002d067) list_single_fs_bigclock_pane_t1_ParamLimits

0xec5c,	// (0x0002d086) list_single_fs_bigclock_pane_t2_ParamLimits

0xec5c,	// (0x0002d086) list_single_fs_bigclock_pane_t2

0x0001,

0xfe62,	// (0x0002e28c) list_single_fs_bigclock_pane_t_ParamLimits

0xfe62,	// (0x0002e28c) list_single_fs_bigclock_pane_t

0x95be,	// (0x000279e8) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfecb,	// (0x0002e2f5) main_fs_bigclock_unlock_btn_pane_g

0x96a9,	// (0x00027ad3) aid_dia3_key_size_ParamLimits

0x96a9,	// (0x00027ad3) aid_dia3_key_size

0x96b5,	// (0x00027adf) aid_dia3_listrow_size_ParamLimits

0x96b5,	// (0x00027adf) aid_dia3_listrow_size

0x96c5,	// (0x00027aef) dia3_keypad_fun_pane_ParamLimits

0x96c5,	// (0x00027aef) dia3_keypad_fun_pane

0x96d7,	// (0x00027b01) dia3_keypad_num_pane_ParamLimits

0x96d7,	// (0x00027b01) dia3_keypad_num_pane

0x96e9,	// (0x00027b13) dia3_listscroll_pane_ParamLimits

0x96e9,	// (0x00027b13) dia3_listscroll_pane

0x96f7,	// (0x00027b21) dia3_numentry_pane_ParamLimits

0x96f7,	// (0x00027b21) dia3_numentry_pane

0xee81,	// (0x0002d2ab) dia3_list_pane

0xee8c,	// (0x0002d2b6) scroll_pane_cp12

0x9c9f,	// (0x000280c9) bg_dia3_numentry_pane

0x9705,	// (0x00027b2f) dia3_numentry_pane_t1

0x9714,	// (0x00027b3e) cell_dia3_key_num_pane

0x971c,	// (0x00027b46) cell_dia3_key0_fun_pane_ParamLimits

0x971c,	// (0x00027b46) cell_dia3_key0_fun_pane

0x9729,	// (0x00027b53) cell_dia3_key1_fun_pane_ParamLimits

0x9729,	// (0x00027b53) cell_dia3_key1_fun_pane

0x9736,	// (0x00027b60) dia3_listrow_pane

0xde70,	// (0x0002c29a) bg_dia3_numentry_pane_g1

0x9c9f,	// (0x000280c9) bg_button_pane_cp21

0xee97,	// (0x0002d2c1) cell_dia3_key_num_pane_t1

0xeea5,	// (0x0002d2cf) cell_dia3_key_num_pane_t2

0xeeb4,	// (0x0002d2de) cell_dia3_key_num_pane_t3

0xeec3,	// (0x0002d2ed) cell_dia3_key_num_pane_t4

0x0003,

0x0c50,	// (0x0001f07a) cell_dia3_key_num_pane_t

0x9c9f,	// (0x000280c9) bg_button_pane_cp19

0x9743,	// (0x00027b6d) cell_dia3_key0_fun_pane_g1

0x9c9f,	// (0x000280c9) bg_button_pane_cp20

0x974b,	// (0x00027b75) cell_dia3_key1_fun_pane_g1

0x9753,	// (0x00027b7d) area_left_week_number_pane

0x9766,	// (0x00027b90) area_top_day_name_pane

0x9774,	// (0x00027b9e) frame_month_view_pane

0xeed2,	// (0x0002d2fc) grid_month_view_pane

0x9789,	// (0x00027bb3) cell_top_day_name_pane_ParamLimits

0x9789,	// (0x00027bb3) cell_top_day_name_pane

0x97a3,	// (0x00027bcd) cell_area_left_week_number_pane_ParamLimits

0x97a3,	// (0x00027bcd) cell_area_left_week_number_pane

0x97c6,	// (0x00027bf0) cell_month_view_pane_ParamLimits

0x97c6,	// (0x00027bf0) cell_month_view_pane

0xeee0,	// (0x0002d30a) frm_month_g1

0x97f2,	// (0x00027c1c) frm_month_g2

0x9803,	// (0x00027c2d) frm_month_g3

0x9814,	// (0x00027c3e) frm_month_g4

0x9825,	// (0x00027c4f) frm_month_g5

0x9838,	// (0x00027c62) frm_month_g6

0x984b,	// (0x00027c75) frm_month_g7

0xeeed,	// (0x0002d317) frm_month_g8

0x985e,	// (0x00027c88) frm_month_g9

0x986b,	// (0x00027c95) frm_month_g10

0x9878,	// (0x00027ca2) frm_month_g11

0x9885,	// (0x00027caf) frm_month_g12

0x9892,	// (0x00027cbc) frm_month_g13

0x989f,	// (0x00027cc9) frm_month_g14

0x98ae,	// (0x00027cd8) frm_month_g15

0x98bd,	// (0x00027ce7) frm_month_g16

0x000f,

0xfee7,	// (0x0002e311) frm_month_g

0xeefa,	// (0x0002d324) cell_top_day_name_pane_t1

0x98cc,	// (0x00027cf6) cell_area_left_week_number_pane_g1

0x98db,	// (0x00027d05) cell_area_left_week_number_pane_t1

0xcb08,	// (0x0002af32) cell_month_view_pane_g1

0x98f1,	// (0x00027d1b) cell_month_view_pane_t1

0x9c9f,	// (0x000280c9) main_fps_pane

0xe3f4,	// (0x0002c81e) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe3f4,	// (0x0002c81e) cmail_ddmenu_btn02_pane_cp1

0xe410,	// (0x0002c83a) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe410,	// (0x0002c83a) cmail_ddmenu_btn02_pane_cp2

0x9113,	// (0x0002753d) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x9113,	// (0x0002753d) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe15,	// (0x0002e23f) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe15,	// (0x0002e23f) cmail_ddmenu_btn02_pane_g

0x9131,	// (0x0002755b) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x9131,	// (0x0002755b) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe1a,	// (0x0002e244) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe1a,	// (0x0002e244) cmail_ddmenu_btn02_pane_t

0x9907,	// (0x00027d31) fps_text_pane_ParamLimits

0x9907,	// (0x00027d31) fps_text_pane

0x9914,	// (0x00027d3e) main_fps_pane_g1_ParamLimits

0x9914,	// (0x00027d3e) main_fps_pane_g1

0x9922,	// (0x00027d4c) wait_bar_pane_cp010_ParamLimits

0x9922,	// (0x00027d4c) wait_bar_pane_cp010

0x992e,	// (0x00027d58) fps_text_pane_t1_ParamLimits

0x992e,	// (0x00027d58) fps_text_pane_t1

0x6a0f,	// (0x00024e39) cam4_image_uncrop_pane_g1

0x6a18,	// (0x00024e42) cam4_image_uncrop_pane_g2

0x6a21,	// (0x00024e4b) cam4_image_uncrop_pane_g3

0x6a2a,	// (0x00024e54) cam4_image_uncrop_pane_g4

0x0003,

0xf8d7,	// (0x0002dd01) cam4_image_uncrop_pane_g

0x9736,	// (0x00027b60) dia3_listrow_pane_ParamLimits

0x9c9f,	// (0x000280c9) main_phob2_pane

0x8c54,	// (0x0002707e) cell_tport_appsw_pane_cp02_ParamLimits

0x8c54,	// (0x0002707e) cell_tport_appsw_pane_cp02

0x8c63,	// (0x0002708d) cell_tport_appsw_pane_cp03_ParamLimits

0x8c63,	// (0x0002708d) cell_tport_appsw_pane_cp03

0x9c9f,	// (0x000280c9) phob2_contact_card_pane

0x9c9f,	// (0x000280c9) phob2_listscroll_pane

0xef0d,	// (0x0002d337) phob2_list_pane

0xef15,	// (0x0002d33f) scroll_pane_cp034

0x9947,	// (0x00027d71) phob2_cc_data_pane_ParamLimits

0x9947,	// (0x00027d71) phob2_cc_data_pane

0x9961,	// (0x00027d8b) phob2_cc_listscroll_pane_ParamLimits

0x9961,	// (0x00027d8b) phob2_cc_listscroll_pane

0x9528,	// (0x00027952) list_double_large_graphic_phob2_pane_ParamLimits

0x9528,	// (0x00027952) list_double_large_graphic_phob2_pane

0x997b,	// (0x00027da5) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x997b,	// (0x00027da5) list_double_large_graphic_phob2_pane_g1

0x9991,	// (0x00027dbb) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x9991,	// (0x00027dbb) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff08,	// (0x0002e332) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff08,	// (0x0002e332) list_double_large_graphic_phob2_pane_g

0x999d,	// (0x00027dc7) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x999d,	// (0x00027dc7) list_double_large_graphic_phob2_pane_t1

0x99b2,	// (0x00027ddc) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x99b2,	// (0x00027ddc) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff0d,	// (0x0002e337) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff0d,	// (0x0002e337) list_double_large_graphic_phob2_pane_t

0x9c9f,	// (0x000280c9) list_highlight_pane_cp024

0x99c4,	// (0x00027dee) phob2_cc_button_pane

0x99cc,	// (0x00027df6) phob2_cc_data_pane_g1_ParamLimits

0x99cc,	// (0x00027df6) phob2_cc_data_pane_g1

0x99d8,	// (0x00027e02) phob2_cc_data_pane_g2_ParamLimits

0x99d8,	// (0x00027e02) phob2_cc_data_pane_g2

0x0001,

0xff12,	// (0x0002e33c) phob2_cc_data_pane_g_ParamLimits

0xff12,	// (0x0002e33c) phob2_cc_data_pane_g

0x99e4,	// (0x00027e0e) phob2_cc_data_pane_t1_ParamLimits

0x99e4,	// (0x00027e0e) phob2_cc_data_pane_t1

0x99f6,	// (0x00027e20) phob2_cc_data_pane_t2_ParamLimits

0x99f6,	// (0x00027e20) phob2_cc_data_pane_t2

0x9a08,	// (0x00027e32) phob2_cc_data_pane_t3_ParamLimits

0x9a08,	// (0x00027e32) phob2_cc_data_pane_t3

0x0002,

0xff17,	// (0x0002e341) phob2_cc_data_pane_t_ParamLimits

0xff17,	// (0x0002e341) phob2_cc_data_pane_t

0xef1d,	// (0x0002d347) phob2_cc_list_pane_ParamLimits

0xef1d,	// (0x0002d347) phob2_cc_list_pane

0xd6b5,	// (0x0002badf) scroll_pane_cp035_ParamLimits

0xd6b5,	// (0x0002badf) scroll_pane_cp035

0xa56f,	// (0x00028999) bg_button_pane_cp033

0xef29,	// (0x0002d353) phob2_cc_button_pane_g1

0xef35,	// (0x0002d35f) phob2_cc_button_pane_t1

0xef4a,	// (0x0002d374) phob2_cc_button_pane_t2

0x0001,

0x0c90,	// (0x0001f0ba) phob2_cc_button_pane_t

0x9a1a,	// (0x00027e44) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9a1a,	// (0x00027e44) list_double_large_graphic_phob2_cc_pane

0x9a88,	// (0x00027eb2) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9a88,	// (0x00027eb2) list_double_large_graphic_phob2_cc_pane_g1

0x9a99,	// (0x00027ec3) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x9a99,	// (0x00027ec3) list_double_large_graphic_phob2_cc_pane_g2

0x9aa8,	// (0x00027ed2) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x9aa8,	// (0x00027ed2) list_double_large_graphic_phob2_cc_pane_g3

0x9ab7,	// (0x00027ee1) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x9ab7,	// (0x00027ee1) list_double_large_graphic_phob2_cc_pane_g4

0x9ac8,	// (0x00027ef2) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x9ac8,	// (0x00027ef2) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff1e,	// (0x0002e348) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff1e,	// (0x0002e348) list_double_large_graphic_phob2_cc_pane_g

0x9ad7,	// (0x00027f01) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x9ad7,	// (0x00027f01) list_double_large_graphic_phob2_cc_pane_t1

0x9b00,	// (0x00027f2a) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x9b00,	// (0x00027f2a) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff29,	// (0x0002e353) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff29,	// (0x0002e353) list_double_large_graphic_phob2_cc_pane_t

0xef5c,	// (0x0002d386) list_highlight_pane_cp025_ParamLimits

0xef5c,	// (0x0002d386) list_highlight_pane_cp025

0xa56f,	// (0x00028999) bg_button_pane_cp033_ParamLimits

0xef29,	// (0x0002d353) phob2_cc_button_pane_g1_ParamLimits

0xef35,	// (0x0002d35f) phob2_cc_button_pane_t1_ParamLimits

0xef4a,	// (0x0002d374) phob2_cc_button_pane_t2_ParamLimits

0x0c90,	// (0x0001f0ba) phob2_cc_button_pane_t_ParamLimits

0x2749,	// (0x00020b73) popup_wgtman_window

0xd3db,	// (0x0002b805) scroll_pane_cp038

0x94b1,	// (0x000278db) wgtman_btn_pane_cp_01_ParamLimits

0x94b1,	// (0x000278db) wgtman_btn_pane_cp_01

0xef6a,	// (0x0002d394) wgtman_content_pane

0xef73,	// (0x0002d39d) wgtman_heading_pane

0x9c9f,	// (0x000280c9) bg_heading_pane_cp02

0xef7c,	// (0x0002d3a6) wgtman_heading_pane_g1

0xef84,	// (0x0002d3ae) wgtman_heading_pane_t1

0xef92,	// (0x0002d3bc) scroll_pane_cp036

0xef9a,	// (0x0002d3c4) wgtman_list_pane

0xefa2,	// (0x0002d3cc) wgtman_list_pane_t1_ParamLimits

0xefa2,	// (0x0002d3cc) wgtman_list_pane_t1

0x1ea7,	// (0x000202d1) cam4_grid_pane

0x71eb,	// (0x00025615) bg_button_pane_cp015_ParamLimits

0x71fd,	// (0x00025627) bg_button_pane_cp016_ParamLimits

0x7210,	// (0x0002563a) bg_button_pane_cp017_ParamLimits

0x7266,	// (0x00025690) popup_vitu2_query_window_g3_ParamLimits

0x7266,	// (0x00025690) popup_vitu2_query_window_g3

0x7321,	// (0x0002574b) popup_vitu2_query_window_t6_ParamLimits

0x7321,	// (0x0002574b) popup_vitu2_query_window_t6

0x734c,	// (0x00025776) popup_vitu2_query_window_t7_ParamLimits

0x734c,	// (0x00025776) popup_vitu2_query_window_t7

0xecbc,	// (0x0002d0e6) cam4_grid_pane_g1

0xecc5,	// (0x0002d0ef) cam4_grid_pane_g2

0xefbc,	// (0x0002d3e6) cam4_grid_pane_g3

0xefc5,	// (0x0002d3ef) cam4_grid_pane_g4

0x0003,

0xff2e,	// (0x0002e358) cam4_grid_pane_g

0x32f1,	// (0x0002171b) aid_placing_vt_slider_lsc_ParamLimits

0x363d,	// (0x00021a67) vidtel_button_pane_ParamLimits

0x363d,	// (0x00021a67) vidtel_button_pane

0x9c9f,	// (0x000280c9) bg_button_pane_cp034

0xefd0,	// (0x0002d3fa) vidtel_button_pane_g1

0xefd8,	// (0x0002d402) vidtel_button_pane_t1

0xd519,	// (0x0002b943) aid_size_vtel_slider_touch

0xd6b5,	// (0x0002badf) scroll_pane_cp039

0x8033,	// (0x0002645d) ncim_query_button_pane_cp01_ParamLimits

0x8052,	// (0x0002647c) ncimui_query_pane_g1_ParamLimits

0xa56f,	// (0x00028999) input_focus_pane_cp012_ParamLimits

0xdeae,	// (0x0002c2d8) ncim_query_entry_pane_t1_ParamLimits

0xd6b5,	// (0x0002badf) scroll_pane_cp039_ParamLimits

0xaecf,	// (0x000292f9) navi_pane_bcale_mc_g1

0xaed7,	// (0x00029301) navi_pane_bcale_mc_t1

0xe444,	// (0x0002c86e) main_sp_fs_email_pane_g1

0xe450,	// (0x0002c87a) main_sp_fs_email_pane_g2

0x0001,

0xfcd2,	// (0x0002e0fc) main_sp_fs_email_pane_g

0xe8c8,	// (0x0002ccf2) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe8c8,	// (0x0002ccf2) list_single_cale_mrui_row_pane_g3

0x9151,	// (0x0002757b) list_single_recal_day_pane_g5_event_pane

0xeaa7,	// (0x0002ced1) list_single_recal_day_pane_g7

0xefee,	// (0x0002d418) list_recal_day_event_pane_cp01

0xeff7,	// (0x0002d421) list_recal_vselct_arw_lo_pane_cp01

0xefff,	// (0x0002d429) list_recal_vselct_arw_up_pane_cp01

0xf007,	// (0x0002d431) list_recal_vselct_pane_cp01

0xd53b,	// (0x0002b965) list_recal_day_event_pane_cp01_g1

0xf011,	// (0x0002d43b) list_recal_day_event_pane_cp01_t1

0xeaaf,	// (0x0002ced9) list_single_recal_day_pane_t1_ParamLimits

0xeac1,	// (0x0002ceeb) list_single_recal_day_pane_t2_ParamLimits

0xfe2a,	// (0x0002e254) list_single_recal_day_pane_t_ParamLimits

0xa317,	// (0x00028741) bg_notes_pane_ParamLimits

0xa3ba,	// (0x000287e4) list_notes_pane_ParamLimits

0x29d0,	// (0x00020dfa) scroll_pane_cp06_ParamLimits

0xa3dc,	// (0x00028806) main_notes_pane_ParamLimits

0xa56f,	// (0x00028999) main_welc_pane

0x9b38,	// (0x00027f62) main_welc_body_pane_ParamLimits

0x9b38,	// (0x00027f62) main_welc_body_pane

0x9b52,	// (0x00027f7c) main_welc_opti_pane_ParamLimits

0x9b52,	// (0x00027f7c) main_welc_opti_pane

0x9b91,	// (0x00027fbb) main_welc_pane_t1_ParamLimits

0x9b91,	// (0x00027fbb) main_welc_pane_t1

0x9bed,	// (0x00028017) main_welc_body_row_pane_ParamLimits

0x9bed,	// (0x00028017) main_welc_body_row_pane

0xd17c,	// (0x0002b5a6) main_welc_opti_row_pane_ParamLimits

0xd17c,	// (0x0002b5a6) main_welc_opti_row_pane

0xf01f,	// (0x0002d449) main_welc_opti_row_pane_g1

0x9c12,	// (0x0002803c) main_welc_opti_row_pane_t1

0xf027,	// (0x0002d451) main_welc_body_row_pane_t1

0xed2f,	// (0x0002d159) popup_notif_wgt_heading_pane

0xed49,	// (0x0002d173) aid_size_list_notif_wgt_del_ParamLimits

0xed56,	// (0x0002d180) list_notif_wgt_row_pane_g1_ParamLimits

0xed62,	// (0x0002d18c) list_notif_wgt_row_pane_g2_ParamLimits

0xed71,	// (0x0002d19b) list_notif_wgt_row_pane_g3_ParamLimits

0xfe91,	// (0x0002e2bb) list_notif_wgt_row_pane_g_ParamLimits

0xed7e,	// (0x0002d1a8) list_notif_wgt_row_pane_t1_ParamLimits

0xed94,	// (0x0002d1be) list_notif_wgt_row_pane_t2_ParamLimits

0xeda6,	// (0x0002d1d0) list_notif_wgt_row_pane_t3_ParamLimits

0xfe98,	// (0x0002e2c2) list_notif_wgt_row_pane_t_ParamLimits

0x9543,	// (0x0002796d) listrow_wgtman_pane_g1_ParamLimits

0x9550,	// (0x0002797a) listrow_wgtman_pane_g2_ParamLimits

0xfec1,	// (0x0002e2eb) listrow_wgtman_pane_g_ParamLimits

0x956e,	// (0x00027998) listrow_wgtman_pane_t1_ParamLimits

0x9586,	// (0x000279b0) listrow_wgtman_pane_t2_ParamLimits

0xfec6,	// (0x0002e2f0) listrow_wgtman_pane_t_ParamLimits

0x95ac,	// (0x000279d6) wait_bar_pane_cp09_ParamLimits

0x9c9f,	// (0x000280c9) bg_popup_heading_pane_cp02

0xf036,	// (0x0002d460) popup_notif_wgt_heading_pane_g1

0xf03e,	// (0x0002d468) popup_notif_wgt_heading_pane_t1

0x9c9f,	// (0x000280c9) main_vids_pane

0x9c9f,	// (0x000280c9) vids_listscroll_pane

0x9c21,	// (0x0002804b) scroll_pane_cp040

0x9c9f,	// (0x000280c9) vids_list_pane

0x9c2c,	// (0x00028056) vids_list_double_pane_ParamLimits

0x9c2c,	// (0x00028056) vids_list_double_pane

0x9c46,	// (0x00028070) vids_list_double_pane_g1

0x9c4f,	// (0x00028079) vids_list_double_pane_t1

0x9c5f,	// (0x00028089) vids_list_double_pane_t2

0x0001,

0xff45,	// (0x0002e36f) vids_list_double_pane_t

0x13b5,	// (0x0001f7df) main_ncimui_pane_ParamLimits

0x7e8a,	// (0x000262b4) main_ncimui_pane_g1_ParamLimits

0x7e96,	// (0x000262c0) main_ncimui_pane_g2_ParamLimits

0x7e96,	// (0x000262c0) main_ncimui_pane_g2

0x0001,

0xfbd3,	// (0x0002dffd) main_ncimui_pane_g_ParamLimits

0xfbd3,	// (0x0002dffd) main_ncimui_pane_g

0x9b6b,	// (0x00027f95) main_welc_pane_g1_ParamLimits

0x9b6b,	// (0x00027f95) main_welc_pane_g1

0x9b77,	// (0x00027fa1) main_welc_pane_g2_ParamLimits

0x9b77,	// (0x00027fa1) main_welc_pane_g2

0x0002,

0xff37,	// (0x0002e361) main_welc_pane_g_ParamLimits

0xff37,	// (0x0002e361) main_welc_pane_g

0xa317,	// (0x00028741) listscroll_mce_pane_ParamLimits

0xb024,	// (0x0002944e) wait_bar_pane_cp10

0xc491,	// (0x0002a8bb) main_cale_day_pane_ParamLimits

0xc491,	// (0x0002a8bb) main_cale_week_pane_ParamLimits

0xa317,	// (0x00028741) main_messa_pane_ParamLimits

0x63c9,	// (0x000247f3) main_clock2_btn_pane_ParamLimits

0x63c9,	// (0x000247f3) main_clock2_btn_pane

0xccbc,	// (0x0002b0e6) main_clock2_btn_pane_cp01_ParamLimits

0xccbc,	// (0x0002b0e6) main_clock2_btn_pane_cp01

0xe854,	// (0x0002cc7e) list_cale_mrui_pane_ParamLimits

0xeddc,	// (0x0002d206) main_cf0_pane_g2

0x0001,

0xfe9f,	// (0x0002e2c9) main_cf0_pane_g

0x9753,	// (0x00027b7d) area_left_week_number_pane_ParamLimits

0x9766,	// (0x00027b90) area_top_day_name_pane_ParamLimits

0x9774,	// (0x00027b9e) frame_month_view_pane_ParamLimits

0xeed2,	// (0x0002d2fc) grid_month_view_pane_ParamLimits

0xeee0,	// (0x0002d30a) frm_month_g1_ParamLimits

0x97f2,	// (0x00027c1c) frm_month_g2_ParamLimits

0x9803,	// (0x00027c2d) frm_month_g3_ParamLimits

0x9814,	// (0x00027c3e) frm_month_g4_ParamLimits

0x9825,	// (0x00027c4f) frm_month_g5_ParamLimits

0x9838,	// (0x00027c62) frm_month_g6_ParamLimits

0x984b,	// (0x00027c75) frm_month_g7_ParamLimits

0xeeed,	// (0x0002d317) frm_month_g8_ParamLimits

0x985e,	// (0x00027c88) frm_month_g9_ParamLimits

0x986b,	// (0x00027c95) frm_month_g10_ParamLimits

0x9878,	// (0x00027ca2) frm_month_g11_ParamLimits

0x9885,	// (0x00027caf) frm_month_g12_ParamLimits

0x9892,	// (0x00027cbc) frm_month_g13_ParamLimits

0x989f,	// (0x00027cc9) frm_month_g14_ParamLimits

0x98ae,	// (0x00027cd8) frm_month_g15_ParamLimits

0x98bd,	// (0x00027ce7) frm_month_g16_ParamLimits

0xfee7,	// (0x0002e311) frm_month_g_ParamLimits

0xeefa,	// (0x0002d324) cell_top_day_name_pane_t1_ParamLimits

0x98cc,	// (0x00027cf6) cell_area_left_week_number_pane_g1_ParamLimits

0x98db,	// (0x00027d05) cell_area_left_week_number_pane_t1_ParamLimits

0xcb08,	// (0x0002af32) cell_month_view_pane_g1_ParamLimits

0x98f1,	// (0x00027d1b) cell_month_view_pane_t1_ParamLimits

0xa30f,	// (0x00028739) main_clock2_btn_pane_g1

0xf04c,	// (0x0002d476) main_clock2_btn_pane_t1

0xa56f,	// (0x00028999) listscroll_cmail_pane_ParamLimits

0xe444,	// (0x0002c86e) main_sp_fs_email_pane_g1_ParamLimits

0xe450,	// (0x0002c87a) main_sp_fs_email_pane_g2_ParamLimits

0xfcd2,	// (0x0002e0fc) main_sp_fs_email_pane_g_ParamLimits

0xea17,	// (0x0002ce41) list_recal_day_pane_ParamLimits

0xea28,	// (0x0002ce52) mian_recal_day_pane_t1

0x8920,	// (0x00026d4a) list_single_dyc_row_text_pane_t4_ParamLimits

0x8920,	// (0x00026d4a) list_single_dyc_row_text_pane_t4

0x8957,	// (0x00026d81) list_single_dyc_row_text_pane_t5_ParamLimits

0x8957,	// (0x00026d81) list_single_dyc_row_text_pane_t5

0xe4f6,	// (0x0002c920) list_single_dyc_row_text_pane_t6_ParamLimits

0xe4f6,	// (0x0002c920) list_single_dyc_row_text_pane_t6

0x4438,	// (0x00022862) aid_mgn_list_cale_time_pane

0x13b5,	// (0x0001f7df) main_gallery2_pane_ParamLimits

0xccd2,	// (0x0002b0fc) main_clock2_pane_cp01_t1

0xcce2,	// (0x0002b10c) main_clock2_pane_cp01_t3

0x0001,

0xf7a9,	// (0x0002dbd3) main_clock2_pane_cp01_t

0x2cf7,	// (0x00021121) cale_week_scroll_pane_g16_ParamLimits

0x2cf7,	// (0x00021121) cale_week_scroll_pane_g16

0xa5b8,	// (0x000289e2) vorec_slider_pane

0xefd8,	// (0x0002d402) vidtel_button_pane_t1_ParamLimits

0x91ac,	// (0x000275d6) main_fs_bigclock_clock_pane_g1_ParamLimits

0x91ac,	// (0x000275d6) main_fs_bigclock_clock_pane_g2_ParamLimits

0x91b9,	// (0x000275e3) main_fs_bigclock_clock_pane_g3_ParamLimits

0x91b9,	// (0x000275e3) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfe4d,	// (0x0002e277) main_fs_bigclock_clock_pane_g_ParamLimits

0x91c5,	// (0x000275ef) main_fs_bigclock_clock_pane_t1_ParamLimits

0x91d8,	// (0x00027602) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfe56,	// (0x0002e280) main_fs_bigclock_clock_pane_t_ParamLimits

0x5c68,	// (0x00024092) main_mup3_lyrics_pane_ParamLimits

0x5c68,	// (0x00024092) main_mup3_lyrics_pane

0x9c6d,	// (0x00028097) main_mup3_lyrics_pane_t1_ParamLimits

0x9c6d,	// (0x00028097) main_mup3_lyrics_pane_t1

0x197d,	// (0x0001fda7) aid_main_mp4_pane_t1_area

0x1987,	// (0x0001fdb1) aid_main_mp4_pane_t2_area

0x1a86,	// (0x0001feb0) main_mp4_pane_g7_ParamLimits

0x1a86,	// (0x0001feb0) main_mp4_pane_g7

0x1a92,	// (0x0001febc) main_mp4_pane_g8_ParamLimits

0x1a92,	// (0x0001febc) main_mp4_pane_g8

0x6957,	// (0x00024d81) aid_call6_pane_g1_size

0x9a5c,	// (0x00027e86) list_double_large_graphic_phob2_other_pane_ParamLimits

0x9a5c,	// (0x00027e86) list_double_large_graphic_phob2_other_pane

0xa973,	// (0x00028d9d) list_double_large_graphic_phob2_other_pane_g1

0x9c9f,	// (0x000280c9) list_highlight_pane_cp026

0xa56f,	// (0x00028999) main_welc_pane_ParamLimits

0x867d,	// (0x00026aa7) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0x867d,	// (0x00026aa7) main_sp_fs_ctrlbar_pane_g3

0x8695,	// (0x00026abf) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0x8695,	// (0x00026abf) main_sp_fs_ctrlbar_pane_g4

0x86c7,	// (0x00026af1) toolbar2_fixed_button_pane_cp01

0x86d2,	// (0x00026afc) toolbar2_fixed_button_pane_cp02

0x86dd,	// (0x00026b07) toolbar2_fixed_button_pane_cp03

0x9b29,	// (0x00027f53) list_welc_entry_pane_ParamLimits

0x9b29,	// (0x00027f53) list_welc_entry_pane

0x9b85,	// (0x00027faf) main_welc_pane_g3_ParamLimits

0x9b85,	// (0x00027faf) main_welc_pane_g3

0x9bab,	// (0x00027fd5) main_welc_pane_t2_ParamLimits

0x9bab,	// (0x00027fd5) main_welc_pane_t2

0x9bbf,	// (0x00027fe9) main_welc_pane_t3_ParamLimits

0x9bbf,	// (0x00027fe9) main_welc_pane_t3

0x0002,

0xff3e,	// (0x0002e368) main_welc_pane_t_ParamLimits

0xff3e,	// (0x0002e368) main_welc_pane_t

0x9bd1,	// (0x00027ffb) welc_button_pane_ParamLimits

0x9bd1,	// (0x00027ffb) welc_button_pane

0x9bdf,	// (0x00028009) welc_service_logo_pane_ParamLimits

0x9bdf,	// (0x00028009) welc_service_logo_pane

0xf05a,	// (0x0002d484) list_single_welc_entry_pane_ParamLimits

0xf05a,	// (0x0002d484) list_single_welc_entry_pane

0xf06b,	// (0x0002d495) list_single_welc_entry_pane_g1

0xf073,	// (0x0002d49d) list_single_welc_entry_pane_t1

0xf081,	// (0x0002d4ab) list_single_welc_entry_pane_t2

0x0001,

0x0cc1,	// (0x0001f0eb) list_single_welc_entry_pane_t

0x9c9f,	// (0x000280c9) bg_button_pane_cp035

0xf08f,	// (0x0002d4b9) welc_button_pane_t1

0xf09d,	// (0x0002d4c7) welc_service_logo_pane_g1

0xf0a6,	// (0x0002d4d0) welc_service_logo_pane_g2

0x0001,

0x0cc6,	// (0x0001f0f0) welc_service_logo_pane_g
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

} // end of namespace AknLayoutScalable_Abrw_php_apps_qhd_prt_tch_Normal
