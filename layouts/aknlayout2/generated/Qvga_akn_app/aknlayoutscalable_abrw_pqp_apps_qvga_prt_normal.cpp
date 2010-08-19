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

#include "aknlayoutscalable_abrw_pqp_apps_qvga_prt_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pqp_apps_qvga_prt[]; }

namespace AknLayoutScalable_Abrw_pqp_apps_qvga_prt_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pqp_apps_qvga_prt + 0x00014109 };

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
0x8ad1,	// (0x0001cbda) Screen

0x8adb,	// (0x0001cbe4) application_window

0x8ae5,	// (0x0001cbee) area_bottom_pane_ParamLimits

0x8ae5,	// (0x0001cbee) area_bottom_pane

0x7467,	// (0x0001b570) area_top_pane_ParamLimits

0x7467,	// (0x0001b570) area_top_pane

0x74c3,	// (0x0001b5cc) call_video_uplink_pane_ParamLimits

0x74c3,	// (0x0001b5cc) call_video_uplink_pane

0x74fe,	// (0x0001b607) main_pane_ParamLimits

0x74fe,	// (0x0001b607) main_pane

0x3bc2,	// (0x00017ccb) context_pane

0xae03,	// (0x0001ef0c) navi_pane

0xae1d,	// (0x0001ef26) popup_cale_events_window_ParamLimits

0xae1d,	// (0x0001ef26) popup_cale_events_window

0x3bd5,	// (0x00017cde) popup_mup_playback_window

0xae34,	// (0x0001ef3d) signal_pane

0x186d,	// (0x00015976) main_browser_pane

0x1ad2,	// (0x00015bdb) main_burst_pane

0x7627,	// (0x0001b730) main_calc_pane

0x3b5c,	// (0x00017c65) main_cale_day_pane

0x8d68,	// (0x0001ce71) main_cale_month_pane

0x3b5c,	// (0x00017c65) main_cale_week_pane

0x1ad2,	// (0x00015bdb) main_call_pane

0x1500,	// (0x00015609) main_call_poc_pane

0x1ad2,	// (0x00015bdb) main_camera_pane

0x1ad2,	// (0x00015bdb) main_chi_dic_pane

0x23a5,	// (0x000164ae) main_clock_pane

0x1500,	// (0x00015609) main_fmradio_pane

0x1ad2,	// (0x00015bdb) main_graph_messa_pane

0x1500,	// (0x00015609) main_help_pane

0x186d,	// (0x00015976) main_im_pane

0x175b,	// (0x00015864) main_image_pane_ParamLimits

0x175b,	// (0x00015864) main_image_pane

0x1500,	// (0x00015609) main_location2_pane

0x1ad2,	// (0x00015bdb) main_location_pane

0x175b,	// (0x00015864) main_messa_pane

0x1500,	// (0x00015609) main_mp2_pane

0x1ad2,	// (0x00015bdb) main_mp_pane

0x1500,	// (0x00015609) main_msg_pane

0x1500,	// (0x00015609) main_mup_eq_pane

0x1500,	// (0x00015609) main_mup_pane

0x186d,	// (0x00015976) main_notes_pane

0x1500,	// (0x00015609) main_pec_pane

0x1500,	// (0x00015609) main_phob_pane

0x1500,	// (0x00015609) main_pinb_pane

0x1500,	// (0x00015609) main_postcard_pane

0x1500,	// (0x00015609) main_qdial_pane

0x1ad2,	// (0x00015bdb) main_skin_pane

0x1500,	// (0x00015609) main_smil2_pane

0x1ad2,	// (0x00015bdb) main_smil_pane

0x1ad2,	// (0x00015bdb) main_video_pane

0x1ad2,	// (0x00015bdb) main_video_tele_pane

0x175b,	// (0x00015864) main_viewer_pane_ParamLimits

0x175b,	// (0x00015864) main_viewer_pane

0x1ad2,	// (0x00015bdb) main_vorec_pane

0x7b7d,	// (0x0001bc86) popup_blid_sat_info_window_ParamLimits

0x7b7d,	// (0x0001bc86) popup_blid_sat_info_window

0x7b99,	// (0x0001bca2) popup_dyc_status_message_window_ParamLimits

0x7b99,	// (0x0001bca2) popup_dyc_status_message_window

0x7ba5,	// (0x0001bcae) popup_grid_large_graphic_window_ParamLimits

0x7ba5,	// (0x0001bcae) popup_grid_large_graphic_window

0x7c16,	// (0x0001bd1f) popup_loc_request_window_ParamLimits

0x7c16,	// (0x0001bd1f) popup_loc_request_window

0x7c59,	// (0x0001bd62) popup_wml_address_window_ParamLimits

0x7c59,	// (0x0001bd62) popup_wml_address_window

0xad06,	// (0x0001ee0f) call_muted_g1

0xad16,	// (0x0001ee1f) popup_call_audio_conf_window_ParamLimits

0xad16,	// (0x0001ee1f) popup_call_audio_conf_window

0xad29,	// (0x0001ee32) popup_call_audio_first_window_ParamLimits

0xad29,	// (0x0001ee32) popup_call_audio_first_window

0xad5d,	// (0x0001ee66) popup_call_audio_in_window_ParamLimits

0xad5d,	// (0x0001ee66) popup_call_audio_in_window

0xad79,	// (0x0001ee82) popup_call_audio_out_window_ParamLimits

0xad79,	// (0x0001ee82) popup_call_audio_out_window

0xad95,	// (0x0001ee9e) popup_call_audio_second_window_ParamLimits

0xad95,	// (0x0001ee9e) popup_call_audio_second_window

0xadbd,	// (0x0001eec6) popup_call_audio_wait_window_ParamLimits

0xadbd,	// (0x0001eec6) popup_call_audio_wait_window

0xaddc,	// (0x0001eee5) popup_number_entry_window_ParamLimits

0xaddc,	// (0x0001eee5) popup_number_entry_window

0x10ef,	// (0x000151f8) bg_popup_call_pane_cp05_ParamLimits

0x10ef,	// (0x000151f8) bg_popup_call_pane_cp05

0x110f,	// (0x00015218) popup_number_entry_window_t1

0x1122,	// (0x0001522b) popup_number_entry_window_t2

0x1134,	// (0x0001523d) popup_number_entry_window_t3

0x0003,

0xf085,	// (0x0002318e) popup_number_entry_window_t

0x1146,	// (0x0001524f) text_title_cp2

0x1159,	// (0x00015262) bg_popup_call_pane_cp_ParamLimits

0x1159,	// (0x00015262) bg_popup_call_pane_cp

0x1167,	// (0x00015270) call_thumbnail_pane

0x116f,	// (0x00015278) popup_call_audio_in_window_g1_ParamLimits

0x116f,	// (0x00015278) popup_call_audio_in_window_g1

0x117b,	// (0x00015284) popup_call_audio_in_window_g2_ParamLimits

0x117b,	// (0x00015284) popup_call_audio_in_window_g2

0x1187,	// (0x00015290) popup_call_audio_in_window_g3_ParamLimits

0x1187,	// (0x00015290) popup_call_audio_in_window_g3

0x0002,

0xf08e,	// (0x00023197) popup_call_audio_in_window_g_ParamLimits

0xf08e,	// (0x00023197) popup_call_audio_in_window_g

0x1193,	// (0x0001529c) popup_call_audio_in_window_t1_ParamLimits

0x1193,	// (0x0001529c) popup_call_audio_in_window_t1

0x11ae,	// (0x000152b7) popup_call_audio_in_window_t2_ParamLimits

0x11ae,	// (0x000152b7) popup_call_audio_in_window_t2

0x11c9,	// (0x000152d2) popup_call_audio_in_window_t3_ParamLimits

0x11c9,	// (0x000152d2) popup_call_audio_in_window_t3

0x0002,

0xf095,	// (0x0002319e) popup_call_audio_in_window_t_ParamLimits

0xf095,	// (0x0002319e) popup_call_audio_in_window_t

0x1159,	// (0x00015262) bg_popup_call_pane_cp01_ParamLimits

0x1159,	// (0x00015262) bg_popup_call_pane_cp01

0x1167,	// (0x00015270) call_thumbnail_pane_cp02

0x11dc,	// (0x000152e5) call_type_pane_cp022

0x11e4,	// (0x000152ed) popup_call_audio_out_window_g1_ParamLimits

0x11e4,	// (0x000152ed) popup_call_audio_out_window_g1

0x11f6,	// (0x000152ff) popup_call_audio_out_window_g2_ParamLimits

0x11f6,	// (0x000152ff) popup_call_audio_out_window_g2

0x1202,	// (0x0001530b) popup_call_audio_out_window_g3_ParamLimits

0x1202,	// (0x0001530b) popup_call_audio_out_window_g3

0x0002,

0xf09c,	// (0x000231a5) popup_call_audio_out_window_g_ParamLimits

0xf09c,	// (0x000231a5) popup_call_audio_out_window_g

0x1214,	// (0x0001531d) popup_call_audio_out_window_t1_ParamLimits

0x1214,	// (0x0001531d) popup_call_audio_out_window_t1

0x122c,	// (0x00015335) popup_call_audio_out_window_t2_ParamLimits

0x122c,	// (0x00015335) popup_call_audio_out_window_t2

0x0001,

0xf0a3,	// (0x000231ac) popup_call_audio_out_window_t_ParamLimits

0xf0a3,	// (0x000231ac) popup_call_audio_out_window_t

0x1241,	// (0x0001534a) bg_popup_call_pane_ParamLimits

0x1241,	// (0x0001534a) bg_popup_call_pane

0x8b51,	// (0x0001cc5a) call_thumbnail_pane_cp_ParamLimits

0x8b51,	// (0x0001cc5a) call_thumbnail_pane_cp

0x12c5,	// (0x000153ce) call_type_pane_cp01_ParamLimits

0x12c5,	// (0x000153ce) call_type_pane_cp01

0x1309,	// (0x00015412) popup_call_audio_first_window_g1_ParamLimits

0x1309,	// (0x00015412) popup_call_audio_first_window_g1

0x1355,	// (0x0001545e) popup_call_audio_first_window_g2_ParamLimits

0x1355,	// (0x0001545e) popup_call_audio_first_window_g2

0x0001,

0xf0a8,	// (0x000231b1) popup_call_audio_first_window_g_ParamLimits

0xf0a8,	// (0x000231b1) popup_call_audio_first_window_g

0x1399,	// (0x000154a2) popup_call_audio_first_window_t1_ParamLimits

0x1399,	// (0x000154a2) popup_call_audio_first_window_t1

0x1445,	// (0x0001554e) popup_call_audio_first_window_t4_ParamLimits

0x1445,	// (0x0001554e) popup_call_audio_first_window_t4

0x14d1,	// (0x000155da) popup_call_audio_first_window_t5_ParamLimits

0x14d1,	// (0x000155da) popup_call_audio_first_window_t5

0x0002,

0xf0ad,	// (0x000231b6) popup_call_audio_first_window_t_ParamLimits

0xf0ad,	// (0x000231b6) popup_call_audio_first_window_t

0x1500,	// (0x00015609) bg_popup_call_pane_cp02

0x150a,	// (0x00015613) call_type_pane_cp023

0x1512,	// (0x0001561b) popup_call_audio_wait_window_g1

0x151a,	// (0x00015623) popup_call_audio_wait_window_g2

0x0001,

0xf0b4,	// (0x000231bd) popup_call_audio_wait_window_g

0x1522,	// (0x0001562b) popup_call_audio_wait_window_t3

0x1530,	// (0x00015639) bg_popup_call_pane_cp03_ParamLimits

0x1530,	// (0x00015639) bg_popup_call_pane_cp03

0x1590,	// (0x00015699) call_thumbnail_pane_cp011_ParamLimits

0x1590,	// (0x00015699) call_thumbnail_pane_cp011

0x159c,	// (0x000156a5) call_type_pane_cp034_ParamLimits

0x159c,	// (0x000156a5) call_type_pane_cp034

0x15d8,	// (0x000156e1) popup_call_audio_second_window_g1_ParamLimits

0x15d8,	// (0x000156e1) popup_call_audio_second_window_g1

0x1614,	// (0x0001571d) popup_call_audio_second_window_g2_ParamLimits

0x1614,	// (0x0001571d) popup_call_audio_second_window_g2

0x0001,

0xf0b9,	// (0x000231c2) popup_call_audio_second_window_g_ParamLimits

0xf0b9,	// (0x000231c2) popup_call_audio_second_window_g

0x1650,	// (0x00015759) popup_call_audio_second_window_t1_ParamLimits

0x1650,	// (0x00015759) popup_call_audio_second_window_t1

0x16d1,	// (0x000157da) popup_call_audio_second_window_t2_ParamLimits

0x16d1,	// (0x000157da) popup_call_audio_second_window_t2

0x1707,	// (0x00015810) popup_call_audio_second_window_t3_ParamLimits

0x1707,	// (0x00015810) popup_call_audio_second_window_t3

0x0002,

0xf0be,	// (0x000231c7) popup_call_audio_second_window_t_ParamLimits

0xf0be,	// (0x000231c7) popup_call_audio_second_window_t

0x1500,	// (0x00015609) bg_popup_call_pane_cp04

0x173d,	// (0x00015846) list_conf_pane

0x1745,	// (0x0001584e) popup_call_audio_conf_window_t1

0x1753,	// (0x0001585c) call_thumbnail_pane_g1

0x175b,	// (0x00015864) bg_pinb_pane_ParamLimits

0x175b,	// (0x00015864) bg_pinb_pane

0x1769,	// (0x00015872) find_pinb_pane

0x175b,	// (0x00015864) listscroll_pinb_pane_ParamLimits

0x175b,	// (0x00015864) listscroll_pinb_pane

0x1773,	// (0x0001587c) pinb_bg_pane_g1

0x1773,	// (0x0001587c) pinb_bg_pane_g2

0x1773,	// (0x0001587c) pinb_bg_pane_g3

0x1773,	// (0x0001587c) pinb_bg_pane_g4

0x1773,	// (0x0001587c) pinb_bg_pane_g5

0x1773,	// (0x0001587c) pinb_bg_pane_g6

0x1773,	// (0x0001587c) pinb_bg_pane_g7

0x1773,	// (0x0001587c) pinb_bg_pane_g8

0x1773,	// (0x0001587c) pinb_bg_pane_g9

0x1773,	// (0x0001587c) pinb_bg_pane_g10

0x0009,

0xf0c5,	// (0x000231ce) pinb_bg_pane_g

0x8b80,	// (0x0001cc89) grid_pinb_pane

0x108e,	// (0x00015197) list_pinb_pane

0x177d,	// (0x00015886) scroll_pane_cp01_ParamLimits

0x177d,	// (0x00015886) scroll_pane_cp01

0x178a,	// (0x00015893) find_pinb_pane_g1_ParamLimits

0x178a,	// (0x00015893) find_pinb_pane_g1

0x17a2,	// (0x000158ab) find_pinb_pane_t1

0x17b4,	// (0x000158bd) find_pinb_pane_t2

0x0001,

0xf0df,	// (0x000231e8) find_pinb_pane_t

0x17c9,	// (0x000158d2) input_focus_pane_cp01_ParamLimits

0x17c9,	// (0x000158d2) input_focus_pane_cp01

0x8b8a,	// (0x0001cc93) cell_pinb_pane_ParamLimits

0x8b8a,	// (0x0001cc93) cell_pinb_pane

0x17d5,	// (0x000158de) cell_pinb_pane_g1_ParamLimits

0x17d5,	// (0x000158de) cell_pinb_pane_g1

0x17e3,	// (0x000158ec) cell_pinb_pane_g2_ParamLimits

0x17e3,	// (0x000158ec) cell_pinb_pane_g2

0x17e3,	// (0x000158ec) cell_pinb_pane_g3_ParamLimits

0x17e3,	// (0x000158ec) cell_pinb_pane_g3

0x0002,

0xf0e4,	// (0x000231ed) cell_pinb_pane_g_ParamLimits

0xf0e4,	// (0x000231ed) cell_pinb_pane_g

0x1500,	// (0x00015609) grid_highlight_pane_cp01

0x108e,	// (0x00015197) list_pinb_item_pane_ParamLimits

0x108e,	// (0x00015197) list_pinb_item_pane

0x108e,	// (0x00015197) list_highlight_pane_cp02

0x17f1,	// (0x000158fa) list_pinb_item_pane_g1_ParamLimits

0x17f1,	// (0x000158fa) list_pinb_item_pane_g1

0x17e3,	// (0x000158ec) list_pinb_item_pane_g2_ParamLimits

0x17e3,	// (0x000158ec) list_pinb_item_pane_g2

0x17d5,	// (0x000158de) list_pinb_item_pane_g3_ParamLimits

0x17d5,	// (0x000158de) list_pinb_item_pane_g3

0x17e3,	// (0x000158ec) list_pinb_item_pane_g4_ParamLimits

0x17e3,	// (0x000158ec) list_pinb_item_pane_g4

0x0003,

0xf0eb,	// (0x000231f4) list_pinb_item_pane_g_ParamLimits

0xf0eb,	// (0x000231f4) list_pinb_item_pane_g

0x17ff,	// (0x00015908) list_pinb_item_pane_t1_ParamLimits

0x17ff,	// (0x00015908) list_pinb_item_pane_t1

0x76a6,	// (0x0001b7af) calc_display_pane

0x76be,	// (0x0001b7c7) calc_paper_pane

0x76da,	// (0x0001b7e3) grid_calc_pane

0x1500,	// (0x00015609) bg_list_pane_cp01

0x8b94,	// (0x0001cc9d) clock_g1

0x8b9c,	// (0x0001cca5) clock_g2

0x0001,

0xf0f4,	// (0x000231fd) clock_g

0x8ba4,	// (0x0001ccad) clock_t1_ParamLimits

0x8ba4,	// (0x0001ccad) clock_t1

0x8bb9,	// (0x0001ccc2) clock_t2_ParamLimits

0x8bb9,	// (0x0001ccc2) clock_t2

0x8bcb,	// (0x0001ccd4) clock_t3_ParamLimits

0x8bcb,	// (0x0001ccd4) clock_t3

0x8bdd,	// (0x0001cce6) clock_t4_ParamLimits

0x8bdd,	// (0x0001cce6) clock_t4

0x8bef,	// (0x0001ccf8) clock_t5_ParamLimits

0x8bef,	// (0x0001ccf8) clock_t5

0x8c04,	// (0x0001cd0d) clock_t6_ParamLimits

0x8c04,	// (0x0001cd0d) clock_t6

0x8c16,	// (0x0001cd1f) clock_t7_ParamLimits

0x8c16,	// (0x0001cd1f) clock_t7

0x8c28,	// (0x0001cd31) clock_t8_ParamLimits

0x8c28,	// (0x0001cd31) clock_t8

0x8c3a,	// (0x0001cd43) clock_t9_ParamLimits

0x8c3a,	// (0x0001cd43) clock_t9

0x0008,

0xf0f9,	// (0x00023202) clock_t_ParamLimits

0xf0f9,	// (0x00023202) clock_t

0x181b,	// (0x00015924) popup_clock_analogue_window_cp02

0x181b,	// (0x00015924) popup_clock_digital_window_cp01

0x1500,	// (0x00015609) listscroll_help_pane

0x1500,	// (0x00015609) phob_pre_status_pane

0x1823,	// (0x0001592c) grid_qdial_pane

0x175b,	// (0x00015864) listscroll_mce_pane

0x175b,	// (0x00015864) bg_notes_pane

0x182d,	// (0x00015936) list_notes_pane

0x8c4c,	// (0x0001cd55) scroll_pane_cp06

0x183b,	// (0x00015944) bg_calc_paper_pane

0x76fa,	// (0x0001b803) list_calc_pane

0x186d,	// (0x00015976) bg_calc_display_pane

0x7714,	// (0x0001b81d) calc_display_pane_t1

0x7729,	// (0x0001b832) calc_display_pane_t2

0x773e,	// (0x0001b847) calc_display_pane_t3

0x0002,

0xf10c,	// (0x00023215) calc_display_pane_t

0x7750,	// (0x0001b859) cell_calc_pane_ParamLimits

0x7750,	// (0x0001b859) cell_calc_pane

0x18b5,	// (0x000159be) bg_calc_paper_pane_g1

0x18cd,	// (0x000159d6) bg_calc_paper_pane_g2

0x18c1,	// (0x000159ca) bg_calc_paper_pane_g3

0x18e5,	// (0x000159ee) bg_calc_paper_pane_g4

0x18d9,	// (0x000159e2) bg_calc_paper_pane_g5

0x8c59,	// (0x0001cd62) bg_calc_paper_pane_g6

0x8c68,	// (0x0001cd71) bg_calc_paper_pane_g7

0x8c77,	// (0x0001cd80) bg_calc_paper_pane_g8

0x0007,

0xf113,	// (0x0002321c) bg_calc_paper_pane_g

0x8c86,	// (0x0001cd8f) calc_bg_paper_pane_g9

0x8c95,	// (0x0001cd9e) list_calc_item_pane_ParamLimits

0x8c95,	// (0x0001cd9e) list_calc_item_pane

0x18f1,	// (0x000159fa) list_calc_item_pane_g1

0x7777,	// (0x0001b880) list_calc_item_pane_t1_ParamLimits

0x7777,	// (0x0001b880) list_calc_item_pane_t1

0x7789,	// (0x0001b892) list_calc_item_pane_t2_ParamLimits

0x7789,	// (0x0001b892) list_calc_item_pane_t2

0x0001,

0xf124,	// (0x0002322d) list_calc_item_pane_t_ParamLimits

0xf124,	// (0x0002322d) list_calc_item_pane_t

0x1773,	// (0x0001587c) cell_calc_pane_g1

0x1910,	// (0x00015a19) grid_highlight_pane_cp02

0x1945,	// (0x00015a4e) bg_calc_display_pane_g1

0x77b7,	// (0x0001b8c0) bg_calc_display_pane_g2

0x1932,	// (0x00015a3b) bg_calc_display_pane_g3

0x0002,

0xf12e,	// (0x00023237) bg_calc_display_pane_g

0x77c1,	// (0x0001b8ca) cell_qdial_pane_ParamLimits

0x77c1,	// (0x0001b8ca) cell_qdial_pane

0x8cae,	// (0x0001cdb7) cell_qdial_pane_g1_ParamLimits

0x8cae,	// (0x0001cdb7) cell_qdial_pane_g1

0x8cbb,	// (0x0001cdc4) cell_qdial_pane_g2_ParamLimits

0x8cbb,	// (0x0001cdc4) cell_qdial_pane_g2

0x194e,	// (0x00015a57) cell_qdial_pane_g3_ParamLimits

0x194e,	// (0x00015a57) cell_qdial_pane_g3

0x0003,

0xf135,	// (0x0002323e) cell_qdial_pane_g_ParamLimits

0xf135,	// (0x0002323e) cell_qdial_pane_g

0x8cd9,	// (0x0001cde2) cell_qdial_pane_t1_ParamLimits

0x8cd9,	// (0x0001cde2) cell_qdial_pane_t1

0x8cf1,	// (0x0001cdfa) cell_qdial_pane_t2_ParamLimits

0x8cf1,	// (0x0001cdfa) cell_qdial_pane_t2

0x8d04,	// (0x0001ce0d) cell_qdial_pane_t3_ParamLimits

0x8d04,	// (0x0001ce0d) cell_qdial_pane_t3

0x0002,

0xf13e,	// (0x00023247) cell_qdial_pane_t_ParamLimits

0xf13e,	// (0x00023247) cell_qdial_pane_t

0x1500,	// (0x00015609) grid_highlight_pane_cp04

0x195a,	// (0x00015a63) thumbnail_qdial_pane_ParamLimits

0x195a,	// (0x00015a63) thumbnail_qdial_pane

0x19b6,	// (0x00015abf) list_help_pane

0x19c0,	// (0x00015ac9) scroll_pane_cp02

0x8d17,	// (0x0001ce20) help_list_pane_t1_ParamLimits

0x8d17,	// (0x0001ce20) help_list_pane_t1

0x77d3,	// (0x0001b8dc) bg_notes_pane_g2

0x77db,	// (0x0001b8e4) bg_notes_pane_g3

0x77e3,	// (0x0001b8ec) notes_bg_pane_g1

0x77eb,	// (0x0001b8f4) notes_bg_pane_g4

0x77f3,	// (0x0001b8fc) notes_bg_pane_g5

0x77fb,	// (0x0001b904) notes_bg_pane_g6

0x7803,	// (0x0001b90c) notes_bg_pane_g7

0x780b,	// (0x0001b914) notes_bg_pane_g8

0x7813,	// (0x0001b91c) notes_bg_pane_g9

0x0006,

0xf15c,	// (0x00023265) notes_bg_pane_g

0x8d36,	// (0x0001ce3f) list_notes_text_pane_ParamLimits

0x8d36,	// (0x0001ce3f) list_notes_text_pane

0x1a11,	// (0x00015b1a) list_notes_text_pane_g1

0x8d5a,	// (0x0001ce63) list_notes_text_pane_t1

0x8d68,	// (0x0001ce71) listscroll_cale_week_pane

0x8d8d,	// (0x0001ce96) bg_cale_heading_pane

0x1a34,	// (0x00015b3d) bg_cale_pane_cp01

0x8da5,	// (0x0001ceae) cale_week_corner_pane

0x8dbf,	// (0x0001cec8) cale_week_day_heading_pane

0x8dd7,	// (0x0001cee0) cale_week_scroll_pane_g1

0x8dea,	// (0x0001cef3) cale_week_scroll_pane_g2

0x8dfd,	// (0x0001cf06) cale_week_scroll_pane_g3

0x8e10,	// (0x0001cf19) cale_week_scroll_pane_g4

0x8e23,	// (0x0001cf2c) cale_week_scroll_pane_g5

0x8e36,	// (0x0001cf3f) cale_week_scroll_pane_g6

0x8e49,	// (0x0001cf52) cale_week_scroll_pane_g7

0x8e5c,	// (0x0001cf65) cale_week_scroll_pane_g8

0x8e6f,	// (0x0001cf78) cale_week_scroll_pane_g9

0x8e82,	// (0x0001cf8b) cale_week_scroll_pane_g10

0x8e95,	// (0x0001cf9e) cale_week_scroll_pane_g11

0x8ea8,	// (0x0001cfb1) cale_week_scroll_pane_g12

0x8ebb,	// (0x0001cfc4) cale_week_scroll_pane_g13

0x8ece,	// (0x0001cfd7) cale_week_scroll_pane_g14

0x8ee1,	// (0x0001cfea) cale_week_scroll_pane_g15

0x000f,

0xf16b,	// (0x00023274) cale_week_scroll_pane_g

0x8f07,	// (0x0001d010) cale_week_time_pane

0x8f1a,	// (0x0001d023) grid_cale_week_pane

0x1a63,	// (0x00015b6c) scroll_pane_cp08

0x8f2f,	// (0x0001d038) cell_cale_week_pane_ParamLimits

0x8f2f,	// (0x0001d038) cell_cale_week_pane

0x8f7d,	// (0x0001d086) cale_week_day_heading_pane_t1

0x8fb8,	// (0x0001d0c1) cale_week_day_heading_pane_t2

0x8ff3,	// (0x0001d0fc) cale_week_day_heading_pane_t3

0x902e,	// (0x0001d137) cale_week_day_heading_pane_t4

0x9069,	// (0x0001d172) cale_week_day_heading_pane_t5

0x90a4,	// (0x0001d1ad) cale_week_day_heading_pane_t6

0x90df,	// (0x0001d1e8) cale_week_day_heading_pane_t7

0x0006,

0xf18c,	// (0x00023295) cale_week_day_heading_pane_t

0x1a80,	// (0x00015b89) bg_cale_side_pane

0x781b,	// (0x0001b924) cale_week_time_pane_t1

0x7855,	// (0x0001b95e) cale_week_time_pane_t2

0x788f,	// (0x0001b998) cale_week_time_pane_t3

0x78c9,	// (0x0001b9d2) cale_week_time_pane_t4

0x7903,	// (0x0001ba0c) cale_week_time_pane_t5

0x793d,	// (0x0001ba46) cale_week_time_pane_t6

0x7977,	// (0x0001ba80) cale_week_time_pane_t7

0x79b1,	// (0x0001baba) cale_week_time_pane_t8

0x0007,

0xf19b,	// (0x000232a4) cale_week_time_pane_t

0x911a,	// (0x0001d223) cell_cale_week_pane_g2

0x913e,	// (0x0001d247) cell_cale_week_pane_g3_ParamLimits

0x913e,	// (0x0001d247) cell_cale_week_pane_g3

0x1a8e,	// (0x00015b97) grid_highlight_pane_cp07

0x1a96,	// (0x00015b9f) listscroll_gms_pane

0x1aa0,	// (0x00015ba9) grid_gms_pane

0x1aa9,	// (0x00015bb2) listscroll_gms_pane_g1

0x1ab1,	// (0x00015bba) listscroll_gms_pane_g2

0x0001,

0xf1ac,	// (0x000232b5) listscroll_gms_pane_g

0x9156,	// (0x0001d25f) scroll_pane_cp010

0x915f,	// (0x0001d268) cell_gms_pane_ParamLimits

0x915f,	// (0x0001d268) cell_gms_pane

0x9170,	// (0x0001d279) cell_gms_pane_g1

0x1ab9,	// (0x00015bc2) cell_gms_pane_g2

0x1a11,	// (0x00015b1a) cell_gms_pane_g3

0x1ac1,	// (0x00015bca) cell_gms_pane_g4

0x0003,

0xf1b1,	// (0x000232ba) cell_gms_pane_g

0x1aca,	// (0x00015bd3) grid_highlight_pane_cp09

0xacb4,	// (0x0001edbd) phob_pre_status_pane_g1

0xacbc,	// (0x0001edc5) phob_pre_status_pane_g2

0xacc4,	// (0x0001edcd) phob_pre_status_pane_g3

0xaccc,	// (0x0001edd5) phob_pre_status_pane_g4

0x0004,

0xf59f,	// (0x000236a8) phob_pre_status_pane_g

0xacdc,	// (0x0001ede5) phob_pre_status_pane_t1

0xacea,	// (0x0001edf3) phob_pre_status_pane_t2

0xacf8,	// (0x0001ee01) phob_pre_status_pane_t3

0x0002,

0xf5aa,	// (0x000236b3) phob_pre_status_pane_t

0x1ad2,	// (0x00015bdb) bg_list_pane_cp05

0x9178,	// (0x0001d281) grid_vorec_pane

0x1ada,	// (0x00015be3) vorec_t1

0x1ae8,	// (0x00015bf1) vorec_t2

0x1af6,	// (0x00015bff) vorec_t3

0x9180,	// (0x0001d289) vorec_t4

0x8aad,	// (0x0001cbb6) vorec_t5

0x8abb,	// (0x0001cbc4) vorec_t6

0x0004,

0xf1ba,	// (0x000232c3) vorec_t

0x8ac9,	// (0x0001cbd2) wait_bar_pane_cp01

0x2a21,	// (0x00016b2a) cell_vorec_pane_ParamLimits

0x2a21,	// (0x00016b2a) cell_vorec_pane

0x79eb,	// (0x0001baf4) cell_vorec_pane_g1

0x1500,	// (0x00015609) grid_highlight_pane_cp05

0x26cf,	// (0x000167d8) cams_zoom_pane

0x918e,	// (0x0001d297) image_vga_pane

0x17e3,	// (0x000158ec) main_camera_pane_g1

0x17e3,	// (0x000158ec) main_camera_pane_g2

0x17e3,	// (0x000158ec) main_camera_pane_g3

0x17e3,	// (0x000158ec) main_camera_pane_g4

0x17e3,	// (0x000158ec) main_camera_pane_g5

0x17e3,	// (0x000158ec) main_camera_pane_g6

0x17e3,	// (0x000158ec) main_camera_pane_g7

0x0007,

0xf1c5,	// (0x000232ce) main_camera_pane_g

0x26bb,	// (0x000167c4) main_camera_pane_t1

0x26bb,	// (0x000167c4) main_camera_pane_t2

0x0001,

0xf1d6,	// (0x000232df) main_camera_pane_t

0x91ad,	// (0x0001d2b6) cams_zoom_pane_cp_ParamLimits

0x91ad,	// (0x0001d2b6) cams_zoom_pane_cp

0x91d1,	// (0x0001d2da) image_cif_pane_ParamLimits

0x91d1,	// (0x0001d2da) image_cif_pane

0x91de,	// (0x0001d2e7) image_subqcif_pane

0x91e6,	// (0x0001d2ef) main_video_pane_g1_ParamLimits

0x91e6,	// (0x0001d2ef) main_video_pane_g1

0x9206,	// (0x0001d30f) main_video_pane_g2_ParamLimits

0x9206,	// (0x0001d30f) main_video_pane_g2

0x9234,	// (0x0001d33d) main_video_pane_g3_ParamLimits

0x9234,	// (0x0001d33d) main_video_pane_g3

0x925d,	// (0x0001d366) main_video_pane_g4_ParamLimits

0x925d,	// (0x0001d366) main_video_pane_g4

0x9286,	// (0x0001d38f) main_video_pane_g5_ParamLimits

0x9286,	// (0x0001d38f) main_video_pane_g5

0x1b30,	// (0x00015c39) main_video_pane_g6_ParamLimits

0x1b30,	// (0x00015c39) main_video_pane_g6

0x0006,

0xf1db,	// (0x000232e4) main_video_pane_g_ParamLimits

0xf1db,	// (0x000232e4) main_video_pane_g

0x92a8,	// (0x0001d3b1) main_video_pane_t1_ParamLimits

0x92a8,	// (0x0001d3b1) main_video_pane_t1

0x1b4a,	// (0x00015c53) cams_zoom_pane_g1

0x1b4a,	// (0x00015c53) cams_zoom_pane_g2

0x1b4a,	// (0x00015c53) cams_zoom_pane_g3

0x1b4a,	// (0x00015c53) cams_zoom_pane_g4

0x0003,

0xf1ea,	// (0x000232f3) cams_zoom_pane_g

0x92f2,	// (0x0001d3fb) grid_cams_pane

0x92fe,	// (0x0001d407) linegrid_cams_pane

0x930a,	// (0x0001d413) cell_cams_pane_ParamLimits

0x930a,	// (0x0001d413) cell_cams_pane

0x1b54,	// (0x00015c5d) cams_burst_image_pane

0x1b5c,	// (0x00015c65) cell_cams_pane_g1

0x1500,	// (0x00015609) grid_highlight_pane_cp03

0x1773,	// (0x0001587c) mp_bg_pane_g1

0x1500,	// (0x00015609) bg_list_pane_cp03

0x3a81,	// (0x00017b8a) bg_mp_pane

0x3a89,	// (0x00017b92) grid_mp_pane

0x3a91,	// (0x00017b9a) media_player_g1

0x3a99,	// (0x00017ba2) media_player_t1

0x3aa7,	// (0x00017bb0) media_player_t2

0x3ab5,	// (0x00017bbe) media_player_t3

0x3ac3,	// (0x00017bcc) media_player_t4

0x3ad1,	// (0x00017bda) media_player_t5

0x3adf,	// (0x00017be8) media_player_t6

0x3aed,	// (0x00017bf6) media_player_t7

0x0006,

0xf589,	// (0x00023692) media_player_t

0x3afb,	// (0x00017c04) wait_bar_pane_cp02

0xf56e,	// (0x00023677) main_usb_pane_t

0xacab,	// (0x0001edb4) cell_mp_pane

0x1773,	// (0x0001587c) cell_mp_pane_g1

0x1500,	// (0x00015609) grid_highlight_pane_cp06

0x1ba2,	// (0x00015cab) grid_skin_colour_pane

0x1baa,	// (0x00015cb3) list_highlight_pane_cp03

0x931d,	// (0x0001d426) skin_g1

0x1bb2,	// (0x00015cbb) skin_t1

0x1bc1,	// (0x00015cca) skin_t2

0x0001,

0xf218,	// (0x00023321) skin_t

0x9325,	// (0x0001d42e) cell_skin_colour_pane_ParamLimits

0x9325,	// (0x0001d42e) cell_skin_colour_pane

0x1bcf,	// (0x00015cd8) cell_skin_colour_pane_g1

0x939b,	// (0x0001d4a4) call_video_g1_ParamLimits

0x939b,	// (0x0001d4a4) call_video_g1

0x93a7,	// (0x0001d4b0) call_video_g2_ParamLimits

0x93a7,	// (0x0001d4b0) call_video_g2

0x0001,

0xf21d,	// (0x00023326) call_video_g_ParamLimits

0xf21d,	// (0x00023326) call_video_g

0x93f7,	// (0x0001d500) call_video_uplink_pane_cp1_ParamLimits

0x93f7,	// (0x0001d500) call_video_uplink_pane_cp1

0x1be1,	// (0x00015cea) call_video_uplink_pane_cp2

0x94b3,	// (0x0001d5bc) video_down_crop_pane_ParamLimits

0x94b3,	// (0x0001d5bc) video_down_crop_pane

0x957d,	// (0x0001d686) video_down_pane_ParamLimits

0x957d,	// (0x0001d686) video_down_pane

0x1be9,	// (0x00015cf2) video_down_subqcif_pane_ParamLimits

0x1be9,	// (0x00015cf2) video_down_subqcif_pane

0x1c01,	// (0x00015d0a) video_down_subqcif_pane_cp_ParamLimits

0x1c01,	// (0x00015d0a) video_down_subqcif_pane_cp

0x1c25,	// (0x00015d2e) im_reading_pane_ParamLimits

0x1c25,	// (0x00015d2e) im_reading_pane

0x9649,	// (0x0001d752) im_writing_pane_ParamLimits

0x9649,	// (0x0001d752) im_writing_pane

0x965f,	// (0x0001d768) im_reading_pane_t1

0x1c3f,	// (0x00015d48) list_im_pane

0x1c50,	// (0x00015d59) scroll_pane_cp07

0x9697,	// (0x0001d7a0) im_writing_pane_t1_ParamLimits

0x9697,	// (0x0001d7a0) im_writing_pane_t1

0x1c69,	// (0x00015d72) im_writing_pane_t2_ParamLimits

0x1c69,	// (0x00015d72) im_writing_pane_t2

0x0001,

0xf227,	// (0x00023330) im_writing_pane_t_ParamLimits

0xf227,	// (0x00023330) im_writing_pane_t

0x1500,	// (0x00015609) input_focus_pane_cp04

0x1500,	// (0x00015609) input_focus_pane_cp05

0x96ac,	// (0x0001d7b5) list_im_single_pane_ParamLimits

0x96ac,	// (0x0001d7b5) list_im_single_pane

0x1c86,	// (0x00015d8f) list_single_im_pane_t1

0xac71,	// (0x0001ed7a) blid_accuracy_pane

0xac79,	// (0x0001ed82) blid_compass_pane

0xac81,	// (0x0001ed8a) main_location_t1

0xac8f,	// (0x0001ed98) main_location_t2

0xac9d,	// (0x0001eda6) main_location_t3

0x0002,

0xf598,	// (0x000236a1) main_location_t

0x1500,	// (0x00015609) aid_levels_location

0x1773,	// (0x0001587c) blid_accuracy_pane_g1

0x1773,	// (0x0001587c) blid_accuracy_pane_g2

0x0001,

0xf27b,	// (0x00023384) blid_accuracy_pane_g

0x1cc0,	// (0x00015dc9) wml_content_pane

0x1cfe,	// (0x00015e07) wml_button_pane_ParamLimits

0x1cfe,	// (0x00015e07) wml_button_pane

0x96c4,	// (0x0001d7cd) wml_list_single_large_pane_ParamLimits

0x96c4,	// (0x0001d7cd) wml_list_single_large_pane

0x96db,	// (0x0001d7e4) wml_list_single_medium_pane_ParamLimits

0x96db,	// (0x0001d7e4) wml_list_single_medium_pane

0x96f3,	// (0x0001d7fc) wml_list_single_small_pane_ParamLimits

0x96f3,	// (0x0001d7fc) wml_list_single_small_pane

0x1d12,	// (0x00015e1b) wml_selection_box_pane_ParamLimits

0x1d12,	// (0x00015e1b) wml_selection_box_pane

0x1d25,	// (0x00015e2e) wml_list_single_pane_t1

0x1d34,	// (0x00015e3d) wml_list_single_medium_pane_t1

0x1d43,	// (0x00015e4c) wml_list_single_large_pane_t1

0x1d52,	// (0x00015e5b) input_focus_pane_cp02_ParamLimits

0x1d52,	// (0x00015e5b) input_focus_pane_cp02

0x1d65,	// (0x00015e6e) wml_selection_box_pane_g1

0x1d6e,	// (0x00015e77) wml_selection_box_pane_t1_ParamLimits

0x1d6e,	// (0x00015e77) wml_selection_box_pane_t1

0x175b,	// (0x00015864) bg_wml_button_pane_ParamLimits

0x175b,	// (0x00015864) bg_wml_button_pane

0x1d86,	// (0x00015e8f) wml_button_pane_g1

0x1d8e,	// (0x00015e97) wml_button_pane_t1

0x1d86,	// (0x00015e8f) wml_button_bg_pane_g1

0x1d9e,	// (0x00015ea7) wml_button_bg_pane_g2

0x1da6,	// (0x00015eaf) wml_button_bg_pane_g3

0x1dae,	// (0x00015eb7) wml_button_bg_pane_g4

0x1db6,	// (0x00015ebf) wml_button_bg_pane_g5

0x1dbe,	// (0x00015ec7) wml_button_bg_pane_g6

0x1dc6,	// (0x00015ecf) wml_button_bg_pane_g7

0x1dce,	// (0x00015ed7) wml_button_bg_pane_g8

0x1dd6,	// (0x00015edf) wml_button_bg_pane_g9

0x0008,

0xf22c,	// (0x00023335) wml_button_bg_pane_g

0x970e,	// (0x0001d817) bg_list_pane_cp02

0x1dde,	// (0x00015ee7) mce_header_pane_ParamLimits

0x1dde,	// (0x00015ee7) mce_header_pane

0x1df2,	// (0x00015efb) mce_icon_pane

0x1df2,	// (0x00015efb) mce_image_pane

0x1dfb,	// (0x00015f04) mce_text_pane_ParamLimits

0x1dfb,	// (0x00015f04) mce_text_pane

0x9717,	// (0x0001d820) scroll_pane_cp03

0x9717,	// (0x0001d820) scroll_pane_cp04

0x1e0f,	// (0x00015f18) scroll_pane_cp05_ParamLimits

0x1e0f,	// (0x00015f18) scroll_pane_cp05

0x971f,	// (0x0001d828) mce_header_field_pane_ParamLimits

0x971f,	// (0x0001d828) mce_header_field_pane

0x973f,	// (0x0001d848) mce_header_field_pane_2_ParamLimits

0x973f,	// (0x0001d848) mce_header_field_pane_2

0x9755,	// (0x0001d85e) mce_header_field_pane_3

0x975d,	// (0x0001d866) list_single_mce_message_pane_ParamLimits

0x975d,	// (0x0001d866) list_single_mce_message_pane

0x9774,	// (0x0001d87d) list_single_mce_smart_pane_ParamLimits

0x9774,	// (0x0001d87d) list_single_mce_smart_pane

0x1e1b,	// (0x00015f24) input_focus_pane_cp03

0x1e24,	// (0x00015f2d) list_header_data_pane

0x9796,	// (0x0001d89f) mce_header_field_pane_t1

0x97a4,	// (0x0001d8ad) list_single_mce_header_pane_ParamLimits

0x97a4,	// (0x0001d8ad) list_single_mce_header_pane

0x1e2c,	// (0x00015f35) list_single_mce_header_pane_t1

0x1e3b,	// (0x00015f44) list_single_mce_message_pane_g1

0x1e44,	// (0x00015f4d) list_single_mce_message_pane_t1

0x97e2,	// (0x0001d8eb) bg_cale_heading_pane_cp01_ParamLimits

0x97e2,	// (0x0001d8eb) bg_cale_heading_pane_cp01

0x1e53,	// (0x00015f5c) bg_cale_pane_cp02_ParamLimits

0x1e53,	// (0x00015f5c) bg_cale_pane_cp02

0x9811,	// (0x0001d91a) cale_month_corner_pane

0x982b,	// (0x0001d934) cale_month_day_heading_pane_ParamLimits

0x982b,	// (0x0001d934) cale_month_day_heading_pane

0x985a,	// (0x0001d963) cale_month_pane_g1_ParamLimits

0x985a,	// (0x0001d963) cale_month_pane_g1

0x987e,	// (0x0001d987) cale_month_pane_g2_ParamLimits

0x987e,	// (0x0001d987) cale_month_pane_g2

0x989d,	// (0x0001d9a6) cale_month_pane_g3_ParamLimits

0x989d,	// (0x0001d9a6) cale_month_pane_g3

0x98d9,	// (0x0001d9e2) cale_month_pane_g4_ParamLimits

0x98d9,	// (0x0001d9e2) cale_month_pane_g4

0x9915,	// (0x0001da1e) cale_month_pane_g5_ParamLimits

0x9915,	// (0x0001da1e) cale_month_pane_g5

0x9951,	// (0x0001da5a) cale_month_pane_g6_ParamLimits

0x9951,	// (0x0001da5a) cale_month_pane_g6

0x998d,	// (0x0001da96) cale_month_pane_g7_ParamLimits

0x998d,	// (0x0001da96) cale_month_pane_g7

0x99c9,	// (0x0001dad2) cale_month_pane_g8_ParamLimits

0x99c9,	// (0x0001dad2) cale_month_pane_g8

0x9a05,	// (0x0001db0e) cale_month_pane_g9_ParamLimits

0x9a05,	// (0x0001db0e) cale_month_pane_g9

0x9a3f,	// (0x0001db48) cale_month_pane_g10_ParamLimits

0x9a3f,	// (0x0001db48) cale_month_pane_g10

0x9a79,	// (0x0001db82) cale_month_pane_g11_ParamLimits

0x9a79,	// (0x0001db82) cale_month_pane_g11

0x9ab3,	// (0x0001dbbc) cale_month_pane_g12_ParamLimits

0x9ab3,	// (0x0001dbbc) cale_month_pane_g12

0x9aed,	// (0x0001dbf6) cale_month_pane_g13_ParamLimits

0x9aed,	// (0x0001dbf6) cale_month_pane_g13

0x000c,

0xf23f,	// (0x00023348) cale_month_pane_g_ParamLimits

0xf23f,	// (0x00023348) cale_month_pane_g

0x9b27,	// (0x0001dc30) cale_month_week_pane

0x9b3a,	// (0x0001dc43) grid_cale_month_pane_ParamLimits

0x9b3a,	// (0x0001dc43) grid_cale_month_pane

0x9b60,	// (0x0001dc69) cale_month_day_heading_pane_t1

0x9be6,	// (0x0001dcef) cale_month_day_heading_pane_t2

0x9c77,	// (0x0001dd80) cale_month_day_heading_pane_t3

0x9d08,	// (0x0001de11) cale_month_day_heading_pane_t4

0x9d99,	// (0x0001dea2) cale_month_day_heading_pane_t5

0x9e2a,	// (0x0001df33) cale_month_day_heading_pane_t6

0x9ebb,	// (0x0001dfc4) cale_month_day_heading_pane_t7

0x0006,

0xf25a,	// (0x00023363) cale_month_day_heading_pane_t

0x1a80,	// (0x00015b89) bg_cale_side_pane_cp01

0x9f4c,	// (0x0001e055) cale_month_week_pane_t1

0x9f85,	// (0x0001e08e) cale_month_week_pane_t2

0x9fbe,	// (0x0001e0c7) cale_month_week_pane_t3

0x9ff7,	// (0x0001e100) cale_month_week_pane_t4

0xa030,	// (0x0001e139) cale_month_week_pane_t5

0xa069,	// (0x0001e172) cale_month_week_pane_t6

0x0005,

0xf269,	// (0x00023372) cale_month_week_pane_t

0xa0a2,	// (0x0001e1ab) cell_cale_month_pane_ParamLimits

0xa0a2,	// (0x0001e1ab) cell_cale_month_pane

0x79f5,	// (0x0001bafe) cell_cale_month_pane_g1

0x7a01,	// (0x0001bb0a) cell_cale_month_pane_t1_ParamLimits

0x7a01,	// (0x0001bb0a) cell_cale_month_pane_t1

0x1a8e,	// (0x00015b97) grid_highlight_pane_cp08

0x1773,	// (0x0001587c) main_smil_g1

0xa190,	// (0x0001e299) smil_status_pane

0x1e9e,	// (0x00015fa7) smil_text_pane

0x3949,	// (0x00017a52) bg_popup_call3_rect_pane_g8

0x3951,	// (0x00017a5a) bg_popup_call3_rect_pane_g9

0x0008,

0xf519,	// (0x00023622) bg_popup_call3_rect_pane_g

0x3c34,	// (0x00017d3d) smil_status_volume_pane_g1

0xa1a1,	// (0x0001e2aa) smil_status_pane_t1

0x7c8c,	// (0x0001bd95) volume_smil_pane

0x1ea8,	// (0x00015fb1) list_smil_text_pane

0xa1b8,	// (0x0001e2c1) scroll_pane_cp011

0xa1c1,	// (0x0001e2ca) smil_text_list_pane_t1_ParamLimits

0xa1c1,	// (0x0001e2ca) smil_text_list_pane_t1

0x7a21,	// (0x0001bb2a) aid_volume_smil_ParamLimits

0x7a21,	// (0x0001bb2a) aid_volume_smil

0x1773,	// (0x0001587c) smil_volume_pane_g1

0x1773,	// (0x0001587c) smil_volume_pane_g2

0x0001,

0xf27b,	// (0x00023384) smil_volume_pane_g

0x8d68,	// (0x0001ce71) listscroll_cale_day_pane

0x1ed4,	// (0x00015fdd) bg_cale_pane

0x1eec,	// (0x00015ff5) list_cale_pane

0x1f0f,	// (0x00016018) scroll_pane_cp09

0x1f20,	// (0x00016029) cale_bg_pane_g1

0x1f28,	// (0x00016031) cale_bg_pane_g2

0x1f30,	// (0x00016039) cale_bg_pane_g3

0x1f38,	// (0x00016041) cale_bg_pane_g4

0x1f40,	// (0x00016049) cale_bg_pane_g5

0x1f48,	// (0x00016051) cale_bg_pane_g6

0x1f50,	// (0x00016059) cale_bg_pane_g7

0x1f58,	// (0x00016061) cale_bg_pane_g8

0x1f60,	// (0x00016069) cale_bg_pane_g9

0x0008,

0xf280,	// (0x00023389) cale_bg_pane_g

0xa208,	// (0x0001e311) list_cale_time_pane_ParamLimits

0xa208,	// (0x0001e311) list_cale_time_pane

0x1f68,	// (0x00016071) list_cale_time_pane_g1_ParamLimits

0x1f68,	// (0x00016071) list_cale_time_pane_g1

0x1f74,	// (0x0001607d) list_cale_time_pane_g2_ParamLimits

0x1f74,	// (0x0001607d) list_cale_time_pane_g2

0xa21c,	// (0x0001e325) list_cale_time_pane_g3_ParamLimits

0xa21c,	// (0x0001e325) list_cale_time_pane_g3

0xa228,	// (0x0001e331) list_cale_time_pane_g4_ParamLimits

0xa228,	// (0x0001e331) list_cale_time_pane_g4

0xa234,	// (0x0001e33d) list_cale_time_pane_g5_ParamLimits

0xa234,	// (0x0001e33d) list_cale_time_pane_g5

0x0005,

0xf293,	// (0x0002339c) list_cale_time_pane_g_ParamLimits

0xf293,	// (0x0002339c) list_cale_time_pane_g

0x1f8e,	// (0x00016097) list_cale_time_pane_t1_ParamLimits

0x1f8e,	// (0x00016097) list_cale_time_pane_t1

0x1fb6,	// (0x000160bf) list_cale_time_pane_t2_ParamLimits

0x1fb6,	// (0x000160bf) list_cale_time_pane_t2

0xa482,	// (0x0001e58b) aid_blid_cardinal_pane

0xa4c0,	// (0x0001e5c9) compass_pane_t4

0x1fde,	// (0x000160e7) list_cale_time_pane_t4_ParamLimits

0x1fde,	// (0x000160e7) list_cale_time_pane_t4

0xa4ce,	// (0x0001e5d7) compass_pane_t5

0xa4dc,	// (0x0001e5e5) compass_pane_t6

0xa4ea,	// (0x0001e5f3) compass_pane_t7

0x24ca,	// (0x000165d3) navi_pane_cc_t1

0x2681,	// (0x0001678a) aid_phob_thumbnail_center_pane

0xa81e,	// (0x0001e927) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2a0,	// (0x000233a9) list_cale_time_pane_t_ParamLimits

0xf2a0,	// (0x000233a9) list_cale_time_pane_t

0x1159,	// (0x00015262) bg_popup_window_pane_cp02_ParamLimits

0x1159,	// (0x00015262) bg_popup_window_pane_cp02

0x2006,	// (0x0001610f) heading_pane_cp01_ParamLimits

0x2006,	// (0x0001610f) heading_pane_cp01

0x2012,	// (0x0001611b) loc_req_pane_ParamLimits

0x2012,	// (0x0001611b) loc_req_pane

0x2022,	// (0x0001612b) loc_type_pane_ParamLimits

0x2022,	// (0x0001612b) loc_type_pane

0x2034,	// (0x0001613d) loc_type_pane_t1_ParamLimits

0x2034,	// (0x0001613d) loc_type_pane_t1

0x2046,	// (0x0001614f) loc_type_pane_t2_ParamLimits

0x2046,	// (0x0001614f) loc_type_pane_t2

0x2058,	// (0x00016161) loc_type_pane_t3_ParamLimits

0x2058,	// (0x00016161) loc_type_pane_t3

0x0002,

0xf2a7,	// (0x000233b0) loc_type_pane_t_ParamLimits

0xf2a7,	// (0x000233b0) loc_type_pane_t

0x206a,	// (0x00016173) list_loc_req_pane

0x2074,	// (0x0001617d) scroll_pane_cp012

0xa240,	// (0x0001e349) list_single_loc_request_popup_menu_pane_ParamLimits

0xa240,	// (0x0001e349) list_single_loc_request_popup_menu_pane

0x207d,	// (0x00016186) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x207d,	// (0x00016186) list_single_loc_request_popup_menu_pane_g1

0x2089,	// (0x00016192) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x2089,	// (0x00016192) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf2ae,	// (0x000233b7) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf2ae,	// (0x000233b7) list_single_loc_request_popup_menu_pane_g

0x2095,	// (0x0001619e) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x2095,	// (0x0001619e) list_single_loc_request_popup_menu_pane_t1

0xa252,	// (0x0001e35b) bg_popup_window_pane_cp03_ParamLimits

0xa252,	// (0x0001e35b) bg_popup_window_pane_cp03

0xa260,	// (0x0001e369) heading_loc_req_pane_ParamLimits

0xa260,	// (0x0001e369) heading_loc_req_pane

0xa26c,	// (0x0001e375) popup_dyc_status_message_window_g1_ParamLimits

0xa26c,	// (0x0001e375) popup_dyc_status_message_window_g1

0xa278,	// (0x0001e381) popup_dyc_status_message_window_t1_ParamLimits

0xa278,	// (0x0001e381) popup_dyc_status_message_window_t1

0xa28a,	// (0x0001e393) popup_dyc_status_message_window_t2_ParamLimits

0xa28a,	// (0x0001e393) popup_dyc_status_message_window_t2

0xa29c,	// (0x0001e3a5) popup_dyc_status_message_window_t3_ParamLimits

0xa29c,	// (0x0001e3a5) popup_dyc_status_message_window_t3

0x0002,

0xf2b3,	// (0x000233bc) popup_dyc_status_message_window_t_ParamLimits

0xf2b3,	// (0x000233bc) popup_dyc_status_message_window_t

0x1500,	// (0x00015609) bg_heading_pane_cp01

0x20ab,	// (0x000161b4) heading_loc_req_pane_g1

0x20b3,	// (0x000161bc) heading_loc_req_pane_g2

0x20bb,	// (0x000161c4) heading_loc_req_pane_g3

0x0002,

0xf2ba,	// (0x000233c3) heading_loc_req_pane_g

0x20c3,	// (0x000161cc) heading_loc_req_pane_t1

0x20f0,	// (0x000161f9) bg_popup_sub_pane_cp01_ParamLimits

0x20f0,	// (0x000161f9) bg_popup_sub_pane_cp01

0x20fe,	// (0x00016207) popup_cale_events_window_g1_ParamLimits

0x20fe,	// (0x00016207) popup_cale_events_window_g1

0x211e,	// (0x00016227) popup_cale_events_window_g2_ParamLimits

0x211e,	// (0x00016227) popup_cale_events_window_g2

0x0001,

0xf2ee,	// (0x000233f7) popup_cale_events_window_g_ParamLimits

0xf2ee,	// (0x000233f7) popup_cale_events_window_g

0x213e,	// (0x00016247) popup_cale_events_window_t1_ParamLimits

0x213e,	// (0x00016247) popup_cale_events_window_t1

0x2150,	// (0x00016259) popup_cale_events_window_t2_ParamLimits

0x2150,	// (0x00016259) popup_cale_events_window_t2

0x218e,	// (0x00016297) popup_cale_events_window_t3_ParamLimits

0x218e,	// (0x00016297) popup_cale_events_window_t3

0x21c8,	// (0x000162d1) popup_cale_events_window_t4_ParamLimits

0x21c8,	// (0x000162d1) popup_cale_events_window_t4

0x0003,

0xf2f3,	// (0x000233fc) popup_cale_events_window_t_ParamLimits

0xf2f3,	// (0x000233fc) popup_cale_events_window_t

0xa2c8,	// (0x0001e3d1) call_type_pane

0x3116,	// (0x0001721f) popup_call_status_window_g1

0xa2d4,	// (0x0001e3dd) popup_call_status_window_g2

0xa2e0,	// (0x0001e3e9) popup_call_status_window_g3

0x0002,

0xf2fc,	// (0x00023405) popup_call_status_window_g

0x21fe,	// (0x00016307) call_type_pane_g1

0x2207,	// (0x00016310) call_type_pane_g2

0x0001,

0xf303,	// (0x0002340c) call_type_pane_g

0x1500,	// (0x00015609) bg_popup_sub_pane_cp02

0x2210,	// (0x00016319) listscroll_popup_wml_pane

0x2218,	// (0x00016321) list_wml_pane

0x2222,	// (0x0001632b) scroll_pane_cp013

0xa2ec,	// (0x0001e3f5) list_single_graphic_popup_wml_pane_ParamLimits

0xa2ec,	// (0x0001e3f5) list_single_graphic_popup_wml_pane

0x1773,	// (0x0001587c) list_single_graphic_popup_wml_pane_g1

0x222b,	// (0x00016334) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf308,	// (0x00023411) list_single_graphic_popup_wml_pane_g

0x2233,	// (0x0001633c) list_single_graphic_popup_wml_pane_t1

0x2241,	// (0x0001634a) aid_call_pane

0x1753,	// (0x0001585c) popup_clock_analogue_window_g1

0x1753,	// (0x0001585c) popup_clock_analogue_window_g2

0x7a43,	// (0x0001bb4c) popup_clock_analogue_window_g3

0x7a43,	// (0x0001bb4c) popup_clock_analogue_window_g4

0x1773,	// (0x0001587c) popup_clock_analogue_window_g5

0x0004,

0xf30d,	// (0x00023416) popup_clock_analogue_window_g

0x7a4b,	// (0x0001bb54) popup_clock_analogue_window_t1

0x7a59,	// (0x0001bb62) clock_digital_number_pane_ParamLimits

0x7a59,	// (0x0001bb62) clock_digital_number_pane

0x7a65,	// (0x0001bb6e) clock_digital_number_pane_cp02_ParamLimits

0x7a65,	// (0x0001bb6e) clock_digital_number_pane_cp02

0x7a71,	// (0x0001bb7a) clock_digital_number_pane_cp03_ParamLimits

0x7a71,	// (0x0001bb7a) clock_digital_number_pane_cp03

0x7a7d,	// (0x0001bb86) clock_digital_number_pane_cp04_ParamLimits

0x7a7d,	// (0x0001bb86) clock_digital_number_pane_cp04

0x7a89,	// (0x0001bb92) clock_digital_separator_pane_ParamLimits

0x7a89,	// (0x0001bb92) clock_digital_separator_pane

0x7a95,	// (0x0001bb9e) popup_clock_digital_window_t1

0x1773,	// (0x0001587c) clock_digital_number_pane_g1

0x1773,	// (0x0001587c) clock_digital_number_pane_g2

0x0001,

0xf27b,	// (0x00023384) clock_digital_number_pane_g

0x1773,	// (0x0001587c) clock_digital_separator_pane_g1

0x1773,	// (0x0001587c) clock_digital_separator_pane_g2

0x0001,

0xf27b,	// (0x00023384) clock_digital_separator_pane_g

0x1500,	// (0x00015609) bg_popup_window_pane_cp04

0x22c0,	// (0x000163c9) heading_pane_cp03

0x22c8,	// (0x000163d1) listscroll_popup_gms_pane

0x22d0,	// (0x000163d9) grid_large_graphic_popup_pane

0x22da,	// (0x000163e3) listscroll_popup_gms_pane_g1

0x22e2,	// (0x000163eb) listscroll_popup_gms_pane_g2

0x0001,

0xf318,	// (0x00023421) listscroll_popup_gms_pane_g

0x1cf6,	// (0x00015dff) scroll_pane_cp014

0xa300,	// (0x0001e409) cell_large_graphic_popup_pane_ParamLimits

0xa300,	// (0x0001e409) cell_large_graphic_popup_pane

0xa317,	// (0x0001e420) cell_large_graphic_popup_pane_g1_ParamLimits

0xa317,	// (0x0001e420) cell_large_graphic_popup_pane_g1

0x22ea,	// (0x000163f3) cell_large_graphic_popup_pane_g2_ParamLimits

0x22ea,	// (0x000163f3) cell_large_graphic_popup_pane_g2

0x22f6,	// (0x000163ff) cell_large_graphic_popup_pane_g3_ParamLimits

0x22f6,	// (0x000163ff) cell_large_graphic_popup_pane_g3

0x2303,	// (0x0001640c) cell_large_graphic_popup_pane_g4_ParamLimits

0x2303,	// (0x0001640c) cell_large_graphic_popup_pane_g4

0x0003,

0xf31d,	// (0x00023426) cell_large_graphic_popup_pane_g_ParamLimits

0xf31d,	// (0x00023426) cell_large_graphic_popup_pane_g

0x2313,	// (0x0001641c) grid_highlight_pane_cp010

0x1773,	// (0x0001587c) bg_popup_call_pane_g1

0x231d,	// (0x00016426) list_single_graphic_popup_conf_pane_ParamLimits

0x231d,	// (0x00016426) list_single_graphic_popup_conf_pane

0x2330,	// (0x00016439) list_highlight_pane_cp01

0x2339,	// (0x00016442) list_single_graphic_popup_conf_pane_g1

0x2341,	// (0x0001644a) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf326,	// (0x0002342f) list_single_graphic_popup_conf_pane_g

0x2349,	// (0x00016452) list_single_graphic_popup_conf_pane_t1

0x2357,	// (0x00016460) linegrid_cams_pane_g1

0xa323,	// (0x0001e42c) linegrid_cams_pane_g2

0x1a11,	// (0x00015b1a) linegrid_cams_pane_g3

0x2360,	// (0x00016469) linegrid_cams_pane_g4

0xa32c,	// (0x0001e435) linegrid_cams_pane_g5

0xa335,	// (0x0001e43e) linegrid_cams_pane_g6

0x1ac1,	// (0x00015bca) linegrid_cams_pane_g7

0x0006,

0xf32b,	// (0x00023434) linegrid_cams_pane_g

0x2369,	// (0x00016472) popup_clock_analogue_window

0x2369,	// (0x00016472) popup_clock_digital_window

0x1500,	// (0x00015609) popup_phob_thumbnail_window

0x1773,	// (0x0001587c) call_video_uplink_pane_g1

0x2372,	// (0x0001647b) call_video_uplink_pane_g2

0x0001,

0xf33a,	// (0x00023443) call_video_uplink_pane_g

0x1a8e,	// (0x00015b97) video_uplink_pane

0x237a,	// (0x00016483) mce_image_pane_g1

0xa33e,	// (0x0001e447) mce_image_pane_g2

0xa346,	// (0x0001e44f) mce_image_pane_g3

0xa34e,	// (0x0001e457) mce_image_pane_g4

0xa356,	// (0x0001e45f) mce_image_pane_g5

0x0004,

0xf33f,	// (0x00023448) mce_image_pane_g

0x2384,	// (0x0001648d) control_top_pane_stacon_cp01_ParamLimits

0x2384,	// (0x0001648d) control_top_pane_stacon_cp01

0x2394,	// (0x0001649d) uni_indicator_pane_stacon_cp01_ParamLimits

0x2394,	// (0x0001649d) uni_indicator_pane_stacon_cp01

0x23a5,	// (0x000164ae) bg_popup_sub_pane_cp03

0x23af,	// (0x000164b8) chi_dic_find_pane

0xa35e,	// (0x0001e467) listscroll_chi_dic_pane

0x23b7,	// (0x000164c0) main_pane_chidic_g1

0x23bf,	// (0x000164c8) chi_dic_find_pane_t1

0x23cd,	// (0x000164d6) find_chidic_pane

0x23d6,	// (0x000164df) chi_dic_list_pane_ParamLimits

0x23d6,	// (0x000164df) chi_dic_list_pane

0x23e7,	// (0x000164f0) scroll_pane_cp020

0x23ef,	// (0x000164f8) find_chidic_pane_t1

0x1500,	// (0x00015609) input_focus_pane_cp06

0xa370,	// (0x0001e479) list_chi_dic_pane_ParamLimits

0xa370,	// (0x0001e479) list_chi_dic_pane

0xa383,	// (0x0001e48c) list_chi_dic_pane_t1_ParamLimits

0xa383,	// (0x0001e48c) list_chi_dic_pane_t1

0x1500,	// (0x00015609) list_highlight_pane_cp020

0x23fe,	// (0x00016507) bg_cale_heading_pane_g1

0xa396,	// (0x0001e49f) bg_cale_heading_pane_g2

0xa39e,	// (0x0001e4a7) bg_cale_heading_pane_g3

0xa3a6,	// (0x0001e4af) bg_cale_heading_pane_g4

0xa3ae,	// (0x0001e4b7) bg_cale_heading_pane_g5

0xa3b6,	// (0x0001e4bf) bg_cale_heading_pane_g6

0xa3be,	// (0x0001e4c7) bg_cale_heading_pane_g7

0xa3c6,	// (0x0001e4cf) bg_cale_heading_pane_g8

0xa3ce,	// (0x0001e4d7) bg_cale_heading_pane_g9

0x0008,

0xf34a,	// (0x00023453) bg_cale_heading_pane_g

0x23fe,	// (0x00016507) bg_cale_side_pane_g1

0xa3d6,	// (0x0001e4df) bg_cale_side_pane_g2

0xa3de,	// (0x0001e4e7) bg_cale_side_pane_g3

0xa3e6,	// (0x0001e4ef) bg_cale_side_pane_g4

0xa3ee,	// (0x0001e4f7) bg_cale_side_pane_g5

0xa3f6,	// (0x0001e4ff) bg_cale_side_pane_g6

0xa3fe,	// (0x0001e507) bg_cale_side_pane_g7

0xa406,	// (0x0001e50f) bg_cale_side_pane_g8

0xa40e,	// (0x0001e517) bg_cale_side_pane_g9

0x0008,

0xf35d,	// (0x00023466) bg_cale_side_pane_g

0xa416,	// (0x0001e51f) popup_call_status_window_ParamLimits

0xa416,	// (0x0001e51f) popup_call_status_window

0x2406,	// (0x0001650f) stacon_top_pane

0x240e,	// (0x00016517) status_pane_ParamLimits

0x240e,	// (0x00016517) status_pane

0x2428,	// (0x00016531) status_small_pane

0x2430,	// (0x00016539) control_pane

0x1500,	// (0x00015609) stacon_bottom_pane

0x2438,	// (0x00016541) list_single_mce_smart_pane_t1_ParamLimits

0x2438,	// (0x00016541) list_single_mce_smart_pane_t1

0x244b,	// (0x00016554) list_single_mce_smart_pane_t2_ParamLimits

0x244b,	// (0x00016554) list_single_mce_smart_pane_t2

0x0001,

0xf370,	// (0x00023479) list_single_mce_smart_pane_t_ParamLimits

0xf370,	// (0x00023479) list_single_mce_smart_pane_t

0xa425,	// (0x0001e52e) compass_pane

0xa42e,	// (0x0001e537) main_location2_pane_t1

0xa444,	// (0x0001e54d) main_location2_pane_t2

0xa45a,	// (0x0001e563) main_location2_pane_t3

0x0003,

0xf375,	// (0x0002347e) main_location2_pane_t

0x2473,	// (0x0001657c) compass_pane_g1_ParamLimits

0x2473,	// (0x0001657c) compass_pane_g1

0xa4a2,	// (0x0001e5ab) compass_pane_t1

0xa4b1,	// (0x0001e5ba) compass_pane_t2

0x0005,

0xf37e,	// (0x00023487) compass_pane_t

0xa4f8,	// (0x0001e601) text_secondary_cp61

0x24c1,	// (0x000165ca) navi_pane_cams_g5

0x250d,	// (0x00016616) navi_pane_im_t1

0x251b,	// (0x00016624) navi_pane_mp_g1_ParamLimits

0x251b,	// (0x00016624) navi_pane_mp_g1

0x252f,	// (0x00016638) navi_pane_mp_g2_ParamLimits

0x252f,	// (0x00016638) navi_pane_mp_g2

0x253b,	// (0x00016644) navi_pane_mp_g3_ParamLimits

0x253b,	// (0x00016644) navi_pane_mp_g3

0x0002,

0xf392,	// (0x0002349b) navi_pane_mp_g_ParamLimits

0xf392,	// (0x0002349b) navi_pane_mp_g

0x2547,	// (0x00016650) navi_pane_mp_t1

0x2555,	// (0x0001665e) navi_pane_mp_t2

0x0002,

0xf399,	// (0x000234a2) navi_pane_mp_t

0x25c0,	// (0x000166c9) navi_pane_vt_g1

0x2547,	// (0x00016650) navi_pane_vt_t1

0x25c8,	// (0x000166d1) navi_slider_pane

0x1ad2,	// (0x00015bdb) zooming_pane

0x25d0,	// (0x000166d9) navi_slider_pane_g1

0x7ab2,	// (0x0001bbbb) navi_slider_pane_g2

0x0006,

0xf3a0,	// (0x000234a9) navi_slider_pane_g

0x2606,	// (0x0001670f) aid_levels_zoom

0x260e,	// (0x00016717) zooming_pane_g1

0x2616,	// (0x0001671f) zooming_pane_g2

0x2616,	// (0x0001671f) zooming_pane_g3

0x0002,

0xf3af,	// (0x000234b8) zooming_pane_g

0x261e,	// (0x00016727) level_10_zoom

0x2627,	// (0x00016730) level_11_zoom

0x2630,	// (0x00016739) level_1_zoom

0x2639,	// (0x00016742) level_2_zoom

0x2642,	// (0x0001674b) level_3_zoom

0x264b,	// (0x00016754) level_4_zoom

0x2654,	// (0x0001675d) level_5_zoom

0x265d,	// (0x00016766) level_6_zoom

0x2666,	// (0x0001676f) level_7_zoom

0x266f,	// (0x00016778) level_8_zoom

0x2678,	// (0x00016781) level_9_zoom

0x2689,	// (0x00016792) popup_phob_thumbnail_window_g1

0x2691,	// (0x0001679a) popup_phob_thumbnail_window_g2

0x0001,

0xf3b6,	// (0x000234bf) popup_phob_thumbnail_window_g

0x3b03,	// (0x00017c0c) level_1_location

0x3b0b,	// (0x00017c14) level_2_location

0x3b13,	// (0x00017c1c) level_3_location

0x3b1b,	// (0x00017c24) level_4_location

0x1ad2,	// (0x00015bdb) level_5_location

0xa57a,	// (0x0001e683) mce_icon_pane_g1

0xa582,	// (0x0001e68b) mce_icon_pane_g2

0x0001,

0xf3bb,	// (0x000234c4) mce_icon_pane_g

0xa58a,	// (0x0001e693) main_mup_pane_g1_ParamLimits

0xa58a,	// (0x0001e693) main_mup_pane_g1

0x17f1,	// (0x000158fa) main_mup_pane_g2_ParamLimits

0x17f1,	// (0x000158fa) main_mup_pane_g2

0x17f1,	// (0x000158fa) main_mup_pane_g3_ParamLimits

0x17f1,	// (0x000158fa) main_mup_pane_g3

0x17f1,	// (0x000158fa) main_mup_pane_g4_ParamLimits

0x17f1,	// (0x000158fa) main_mup_pane_g4

0x17f1,	// (0x000158fa) main_mup_pane_g5_ParamLimits

0x17f1,	// (0x000158fa) main_mup_pane_g5

0x17f1,	// (0x000158fa) main_mup_pane_g6_ParamLimits

0x17f1,	// (0x000158fa) main_mup_pane_g6

0x17f1,	// (0x000158fa) main_mup_pane_g7_ParamLimits

0x17f1,	// (0x000158fa) main_mup_pane_g7

0x17f1,	// (0x000158fa) main_mup_pane_g8_ParamLimits

0x17f1,	// (0x000158fa) main_mup_pane_g8

0x17f1,	// (0x000158fa) main_mup_pane_g9_ParamLimits

0x17f1,	// (0x000158fa) main_mup_pane_g9

0x17f1,	// (0x000158fa) main_mup_pane_g10_ParamLimits

0x17f1,	// (0x000158fa) main_mup_pane_g10

0x17f1,	// (0x000158fa) main_mup_pane_g11_ParamLimits

0x17f1,	// (0x000158fa) main_mup_pane_g11

0x17e3,	// (0x000158ec) main_mup_pane_g12_ParamLimits

0x17e3,	// (0x000158ec) main_mup_pane_g12

0x17f1,	// (0x000158fa) main_mup_pane_g13_ParamLimits

0x17f1,	// (0x000158fa) main_mup_pane_g13

0x000c,

0xf3c0,	// (0x000234c9) main_mup_pane_g_ParamLimits

0xf3c0,	// (0x000234c9) main_mup_pane_g

0x17ff,	// (0x00015908) main_mup_pane_t1_ParamLimits

0x17ff,	// (0x00015908) main_mup_pane_t1

0x17ff,	// (0x00015908) main_mup_pane_t2_ParamLimits

0x17ff,	// (0x00015908) main_mup_pane_t2

0x17ff,	// (0x00015908) main_mup_pane_t3_ParamLimits

0x17ff,	// (0x00015908) main_mup_pane_t3

0x26bb,	// (0x000167c4) main_mup_pane_t4_ParamLimits

0x26bb,	// (0x000167c4) main_mup_pane_t4

0x26bb,	// (0x000167c4) main_mup_pane_t5_ParamLimits

0x26bb,	// (0x000167c4) main_mup_pane_t5

0x1b1c,	// (0x00015c25) main_mup_pane_t6_ParamLimits

0x1b1c,	// (0x00015c25) main_mup_pane_t6

0x0005,

0xf3db,	// (0x000234e4) main_mup_pane_t_ParamLimits

0xf3db,	// (0x000234e4) main_mup_pane_t

0x10e1,	// (0x000151ea) mup_progress_pane_ParamLimits

0x10e1,	// (0x000151ea) mup_progress_pane

0x3c7d,	// (0x00017d86) mup_visualizer_pane_ParamLimits

0x3c7d,	// (0x00017d86) mup_visualizer_pane

0x3c7d,	// (0x00017d86) mup_volume_pane_ParamLimits

0x3c7d,	// (0x00017d86) mup_volume_pane

0x17e3,	// (0x000158ec) mup_visualizer_pane_g1_ParamLimits

0x17e3,	// (0x000158ec) mup_visualizer_pane_g1

0x26eb,	// (0x000167f4) mup_visualizer_pane_g2_ParamLimits

0x26eb,	// (0x000167f4) mup_visualizer_pane_g2

0x17d5,	// (0x000158de) mup_visualizer_pane_g3_ParamLimits

0x17d5,	// (0x000158de) mup_visualizer_pane_g3

0x0002,

0xf3e8,	// (0x000234f1) mup_visualizer_pane_g_ParamLimits

0xf3e8,	// (0x000234f1) mup_visualizer_pane_g

0x1b4a,	// (0x00015c53) mup_volume_pane_g1

0x1b4a,	// (0x00015c53) mup_volume_pane_g2

0x0001,

0xf3ef,	// (0x000234f8) mup_volume_pane_g

0x1b4a,	// (0x00015c53) mup_progress_pane_g1

0x1b4a,	// (0x00015c53) mup_progress_pane_g2

0x1b4a,	// (0x00015c53) mup_progress_pane_g3

0x0002,

0xf3f4,	// (0x000234fd) mup_progress_pane_g

0x1500,	// (0x00015609) bg_popup_window_pane_cp05

0x26f9,	// (0x00016802) heading_pane_cp02_ParamLimits

0x26f9,	// (0x00016802) heading_pane_cp02

0x2713,	// (0x0001681c) list_popup_blid_pane

0x271b,	// (0x00016824) list_blid_sat_info_pane_ParamLimits

0x271b,	// (0x00016824) list_blid_sat_info_pane

0x272e,	// (0x00016837) list_blid_sat_info_pane_g1

0x2736,	// (0x0001683f) list_blid_sat_info_pane_t1

0xa66d,	// (0x0001e776) mup_equalizer_pane_ParamLimits

0xa66d,	// (0x0001e776) mup_equalizer_pane

0xa686,	// (0x0001e78f) mup_equalizer_pane_cp1_ParamLimits

0xa686,	// (0x0001e78f) mup_equalizer_pane_cp1

0xa69f,	// (0x0001e7a8) mup_equalizer_pane_cp2_ParamLimits

0xa69f,	// (0x0001e7a8) mup_equalizer_pane_cp2

0xa6b8,	// (0x0001e7c1) mup_equalizer_pane_cp3_ParamLimits

0xa6b8,	// (0x0001e7c1) mup_equalizer_pane_cp3

0xa6d1,	// (0x0001e7da) mup_equalizer_pane_cp4_ParamLimits

0xa6d1,	// (0x0001e7da) mup_equalizer_pane_cp4

0xa6ea,	// (0x0001e7f3) mup_equalizer_pane_cp5

0xa6fc,	// (0x0001e805) mup_equalizer_pane_cp6

0xa70e,	// (0x0001e817) mup_equalizer_pane_cp7

0x39e1,	// (0x00017aea) bg_popup_call_poc_act_pane_g9

0x39e9,	// (0x00017af2) bg_popup_call_poc_act_pane_g10

0x39f1,	// (0x00017afa) bg_popup_call_poc_act_pane_g11

0x000a,

0x175b,	// (0x00015864) mup_scale_pane

0x1773,	// (0x0001587c) mup_scale_pane_g1

0x2744,	// (0x0001684d) mup_scale_pane_g2

0x0006,

0xf410,	// (0x00023519) mup_scale_pane_g

0x2768,	// (0x00016871) msg_data_pane

0x2770,	// (0x00016879) scroll_pane_cp017

0xa732,	// (0x0001e83b) bg_list_pane_cp04_ParamLimits

0xa732,	// (0x0001e83b) bg_list_pane_cp04

0x2780,	// (0x00016889) msg_data_pane_g1

0xa33e,	// (0x0001e447) msg_data_pane_g2

0xa346,	// (0x0001e44f) msg_data_pane_g3

0xa74a,	// (0x0001e853) msg_data_pane_g4

0xa356,	// (0x0001e45f) msg_data_pane_g5

0xa57a,	// (0x0001e683) msg_data_pane_g6

0xa752,	// (0x0001e85b) msg_data_pane_g7

0x0006,

0xf41f,	// (0x00023528) msg_data_pane_g

0xa75a,	// (0x0001e863) msg_text_pane_ParamLimits

0xa75a,	// (0x0001e863) msg_text_pane

0xa784,	// (0x0001e88d) qrid_highlight_pane_cp011_ParamLimits

0xa784,	// (0x0001e88d) qrid_highlight_pane_cp011

0x1500,	// (0x00015609) msg_body_pane

0x1500,	// (0x00015609) msg_header_pane

0x2791,	// (0x0001689a) input_focus_pane_cp07

0x27a6,	// (0x000168af) msg_header_pane_t1_ParamLimits

0x27a6,	// (0x000168af) msg_header_pane_t1

0x27bc,	// (0x000168c5) msg_header_pane_t2_ParamLimits

0x27bc,	// (0x000168c5) msg_header_pane_t2

0x0001,

0xf433,	// (0x0002353c) msg_header_pane_t_ParamLimits

0xf433,	// (0x0002353c) msg_header_pane_t

0x27d3,	// (0x000168dc) msg_body_pane_g1

0x27db,	// (0x000168e4) msg_body_pane_t1_ParamLimits

0x27db,	// (0x000168e4) msg_body_pane_t1

0x2806,	// (0x0001690f) msg_body_pane_t2_ParamLimits

0x2806,	// (0x0001690f) msg_body_pane_t2

0x2818,	// (0x00016921) msg_body_pane_t3_ParamLimits

0x2818,	// (0x00016921) msg_body_pane_t3

0x0002,

0xf438,	// (0x00023541) msg_body_pane_t_ParamLimits

0xf438,	// (0x00023541) msg_body_pane_t

0x7af4,	// (0x0001bbfd) main_viewer_pane_g1_ParamLimits

0x7af4,	// (0x0001bbfd) main_viewer_pane_g1

0x7b00,	// (0x0001bc09) main_viewer_pane_g2_ParamLimits

0x7b00,	// (0x0001bc09) main_viewer_pane_g2

0xa7c4,	// (0x0001e8cd) main_viewer_pane_g3_ParamLimits

0xa7c4,	// (0x0001e8cd) main_viewer_pane_g3

0xa7d3,	// (0x0001e8dc) main_viewer_pane_g4_ParamLimits

0xa7d3,	// (0x0001e8dc) main_viewer_pane_g4

0x7b0c,	// (0x0001bc15) main_viewer_pane_g5_ParamLimits

0x7b0c,	// (0x0001bc15) main_viewer_pane_g5

0x7b0c,	// (0x0001bc15) main_viewer_pane_g7_ParamLimits

0x7b0c,	// (0x0001bc15) main_viewer_pane_g7

0x7b1e,	// (0x0001bc27) main_viewer_pane_g8_ParamLimits

0x7b1e,	// (0x0001bc27) main_viewer_pane_g8

0x0007,

0xf448,	// (0x00023551) main_viewer_pane_g_ParamLimits

0xf448,	// (0x00023551) main_viewer_pane_g

0x286c,	// (0x00016975) viewer_content_pane_ParamLimits

0x286c,	// (0x00016975) viewer_content_pane

0xa7fa,	// (0x0001e903) main_postcard_pane_g1_ParamLimits

0xa7fa,	// (0x0001e903) main_postcard_pane_g1

0xa806,	// (0x0001e90f) main_postcard_pane_g2_ParamLimits

0xa806,	// (0x0001e90f) main_postcard_pane_g2

0xa812,	// (0x0001e91b) main_postcard_pane_g3_ParamLimits

0xa812,	// (0x0001e91b) main_postcard_pane_g3

0x0005,

0xf459,	// (0x00023562) main_postcard_pane_g_ParamLimits

0xf459,	// (0x00023562) main_postcard_pane_g

0xa81e,	// (0x0001e927) main_postcard_pane_g4

0x3c21,	// (0x00017d2a) smil_status_volume_pane_g2

0xa842,	// (0x0001e94b) postcard_pane_ParamLimits

0xa842,	// (0x0001e94b) postcard_pane

0x3116,	// (0x0001721f) postcard_pane_g1_ParamLimits

0x3116,	// (0x0001721f) postcard_pane_g1

0xa872,	// (0x0001e97b) postcard_pane_g2_ParamLimits

0xa872,	// (0x0001e97b) postcard_pane_g2

0xa87e,	// (0x0001e987) postcard_pane_g3_ParamLimits

0xa87e,	// (0x0001e987) postcard_pane_g3

0x2888,	// (0x00016991) postcard_pane_g4_ParamLimits

0x2888,	// (0x00016991) postcard_pane_g4

0xa88a,	// (0x0001e993) postcard_pane_g5_ParamLimits

0xa88a,	// (0x0001e993) postcard_pane_g5

0xa896,	// (0x0001e99f) postcard_pane_g6_ParamLimits

0xa896,	// (0x0001e99f) postcard_pane_g6

0x287a,	// (0x00016983) postcard_pane_g7_ParamLimits

0x287a,	// (0x00016983) postcard_pane_g7

0x0006,

0xf466,	// (0x0002356f) postcard_pane_g_ParamLimits

0xf466,	// (0x0002356f) postcard_pane_g

0xa8a2,	// (0x0001e9ab) main_mp2_pane_g1_ParamLimits

0xa8a2,	// (0x0001e9ab) main_mp2_pane_g1

0xa8ae,	// (0x0001e9b7) main_mp2_pane_g2_ParamLimits

0xa8ae,	// (0x0001e9b7) main_mp2_pane_g2

0xa8ba,	// (0x0001e9c3) main_mp2_pane_g3_ParamLimits

0xa8ba,	// (0x0001e9c3) main_mp2_pane_g3

0x0002,

0xf475,	// (0x0002357e) main_mp2_pane_g_ParamLimits

0xf475,	// (0x0002357e) main_mp2_pane_g

0xa8c6,	// (0x0001e9cf) main_mp2_pane_t1_ParamLimits

0xa8c6,	// (0x0001e9cf) main_mp2_pane_t1

0xa8db,	// (0x0001e9e4) main_mp2_pane_t2_ParamLimits

0xa8db,	// (0x0001e9e4) main_mp2_pane_t2

0xa8ed,	// (0x0001e9f6) main_mp2_pane_t3_ParamLimits

0xa8ed,	// (0x0001e9f6) main_mp2_pane_t3

0x0002,

0xf47c,	// (0x00023585) main_mp2_pane_t_ParamLimits

0xf47c,	// (0x00023585) main_mp2_pane_t

0x2896,	// (0x0001699f) pec_content_pane_ParamLimits

0x2896,	// (0x0001699f) pec_content_pane

0x1cf6,	// (0x00015dff) scroll_pane_cp015

0x28a8,	// (0x000169b1) pec_attribute_pane_ParamLimits

0x28a8,	// (0x000169b1) pec_attribute_pane

0xa8ff,	// (0x0001ea08) pec_content_pane_g1_ParamLimits

0xa8ff,	// (0x0001ea08) pec_content_pane_g1

0x28b8,	// (0x000169c1) pec_content_pane_t1_ParamLimits

0x28b8,	// (0x000169c1) pec_content_pane_t1

0x28ca,	// (0x000169d3) pec_content_pane_t2_ParamLimits

0x28ca,	// (0x000169d3) pec_content_pane_t2

0x0001,

0xf483,	// (0x0002358c) pec_content_pane_t_ParamLimits

0xf483,	// (0x0002358c) pec_content_pane_t

0xa90b,	// (0x0001ea14) list_single_graphic_pane_cp01_ParamLimits

0xa90b,	// (0x0001ea14) list_single_graphic_pane_cp01

0x175b,	// (0x00015864) bg_popup_sub_pane_cp04

0x28dc,	// (0x000169e5) popup_mup_playback_window_g1

0x28e8,	// (0x000169f1) popup_mup_playback_window_t1

0x28fd,	// (0x00016a06) popup_mup_playback_window_t2

0x0001,

0xf488,	// (0x00023591) popup_mup_playback_window_t

0x2934,	// (0x00016a3d) main_image_pane_g1_ParamLimits

0x2934,	// (0x00016a3d) main_image_pane_g1

0x2977,	// (0x00016a80) scroll_pane_cp018_ParamLimits

0x2977,	// (0x00016a80) scroll_pane_cp018

0x298f,	// (0x00016a98) scroll_pane_cp016_ParamLimits

0x298f,	// (0x00016a98) scroll_pane_cp016

0xa990,	// (0x0001ea99) smil2_image_pane_ParamLimits

0xa990,	// (0x0001ea99) smil2_image_pane

0xa9b8,	// (0x0001eac1) smil2_root_pane_ParamLimits

0xa9b8,	// (0x0001eac1) smil2_root_pane

0xa9e4,	// (0x0001eaed) smil2_text_pane_ParamLimits

0xa9e4,	// (0x0001eaed) smil2_text_pane

0x1500,	// (0x00015609) bg_list_pane_cp06

0x29cb,	// (0x00016ad4) grid_radio_pane

0x1500,	// (0x00015609) bg_popup_window_pane_cp06

0x29d3,	// (0x00016adc) main_fmradio_pane_t1

0x22c0,	// (0x000163c9) heading_pane_cp04

0x29e1,	// (0x00016aea) main_fmradio_pane_t2

0x3a39,	// (0x00017b42) popup_cale_lunar_info_window_g1

0x29ef,	// (0x00016af8) main_fmradio_pane_t3

0x3a41,	// (0x00017b4a) popup_cale_lunar_info_window_g2

0x29fd,	// (0x00016b06) main_fmradio_pane_t4

0x0001,

0x2a0b,	// (0x00016b14) main_fmradio_pane_t5

0x0004,

0xf57b,	// (0x00023684) popup_cale_lunar_info_window_g

0xf49d,	// (0x000235a6) main_fmradio_pane_t

0x2a19,	// (0x00016b22) wait_bar_pane_cp03

0x2a21,	// (0x00016b2a) cell_fmradio_pane_ParamLimits

0x2a21,	// (0x00016b2a) cell_fmradio_pane

0x287a,	// (0x00016983) cell_fmradio_pane_g1_ParamLimits

0x287a,	// (0x00016983) cell_fmradio_pane_g1

0x1500,	// (0x00015609) grid_highlight_pane_cp011

0x2a34,	// (0x00016b3d) poc_content_pane_ParamLimits

0x2a34,	// (0x00016b3d) poc_content_pane

0x2a47,	// (0x00016b50) scroll_pane_cp019

0xaa18,	// (0x0001eb21) popup_call_poc_act_window_ParamLimits

0xaa18,	// (0x0001eb21) popup_call_poc_act_window

0xaa25,	// (0x0001eb2e) popup_call_poc_inact_window_ParamLimits

0xaa25,	// (0x0001eb2e) popup_call_poc_inact_window

0xf53f,	// (0x00023648) bg_popup_call_poc_act_pane_g

0x39f9,	// (0x00017b02) bg_popup_call_poc_inact_pane_g1

0x3a01,	// (0x00017b0a) bg_popup_call_poc_inact_pane_g2

0x2a4f,	// (0x00016b58) popup_call_poc_act_window_g2

0x3a09,	// (0x00017b12) bg_popup_call_poc_inact_pane_g3

0x39b9,	// (0x00017ac2) bg_popup_call_poc_inact_pane_g4

0x3a11,	// (0x00017b1a) bg_popup_call_poc_inact_pane_g5

0x2a57,	// (0x00016b60) popup_call_poc_act_window_t1_ParamLimits

0x2a57,	// (0x00016b60) popup_call_poc_act_window_t1

0x2a7f,	// (0x00016b88) popup_call_poc_act_window_t2_ParamLimits

0x2a7f,	// (0x00016b88) popup_call_poc_act_window_t2

0x2aa7,	// (0x00016bb0) popup_call_poc_act_window_t3_ParamLimits

0x2aa7,	// (0x00016bb0) popup_call_poc_act_window_t3

0x2acf,	// (0x00016bd8) popup_call_poc_act_window_t4_ParamLimits

0x2acf,	// (0x00016bd8) popup_call_poc_act_window_t4

0x0003,

0xf4a8,	// (0x000235b1) popup_call_poc_act_window_t_ParamLimits

0xf4a8,	// (0x000235b1) popup_call_poc_act_window_t

0x3a19,	// (0x00017b22) bg_popup_call_poc_inact_pane_g6

0x3a21,	// (0x00017b2a) bg_popup_call_poc_inact_pane_g7

0x3a29,	// (0x00017b32) bg_popup_call_poc_inact_pane_g8

0x2ae1,	// (0x00016bea) popup_call_poc_inact_window_g2

0x3a31,	// (0x00017b3a) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf556,	// (0x0002365f) bg_popup_call_poc_inact_pane_g

0x2ae9,	// (0x00016bf2) popup_call_poc_inact_window_t1_ParamLimits

0x2ae9,	// (0x00016bf2) popup_call_poc_inact_window_t1

0x2afe,	// (0x00016c07) popup_call_poc_inact_window_t2_ParamLimits

0x2afe,	// (0x00016c07) popup_call_poc_inact_window_t2

0x2b13,	// (0x00016c1c) popup_call_poc_inact_window_t3_ParamLimits

0x2b13,	// (0x00016c1c) popup_call_poc_inact_window_t3

0x0002,

0xf4b1,	// (0x000235ba) popup_call_poc_inact_window_t_ParamLimits

0xf4b1,	// (0x000235ba) popup_call_poc_inact_window_t

0x3bc2,	// (0x00017ccb) context_pane_ParamLimits

0xae34,	// (0x0001ef3d) signal_pane_ParamLimits

0x1ad2,	// (0x00015bdb) main_call2_pane

0x7c32,	// (0x0001bd3b) popup_phob_thumbnail2_window_ParamLimits

0x7c32,	// (0x0001bd3b) popup_phob_thumbnail2_window

0x7ac4,	// (0x0001bbcd) aid_hotspot_pointer_arrow_pane

0x7acc,	// (0x0001bbd5) aid_hotspot_pointer_hand_pane

0xacd4,	// (0x0001eddd) phob_pre_status_pane_g5

0x26cf,	// (0x000167d8) cams_zoom_pane_ParamLimits

0x918e,	// (0x0001d297) image_vga_pane_ParamLimits

0x17e3,	// (0x000158ec) main_camera_pane_g1_ParamLimits

0x17e3,	// (0x000158ec) main_camera_pane_g2_ParamLimits

0x17e3,	// (0x000158ec) main_camera_pane_g3_ParamLimits

0x17e3,	// (0x000158ec) main_camera_pane_g4_ParamLimits

0x17e3,	// (0x000158ec) main_camera_pane_g5_ParamLimits

0x17e3,	// (0x000158ec) main_camera_pane_g6_ParamLimits

0x17e3,	// (0x000158ec) main_camera_pane_g7_ParamLimits

0xf1c5,	// (0x000232ce) main_camera_pane_g_ParamLimits

0x26bb,	// (0x000167c4) main_camera_pane_t1_ParamLimits

0x26bb,	// (0x000167c4) main_camera_pane_t2_ParamLimits

0xf1d6,	// (0x000232df) main_camera_pane_t_ParamLimits

0x175b,	// (0x00015864) bg_popup_preview_window_pane_cp01_ParamLimits

0x175b,	// (0x00015864) bg_popup_preview_window_pane_cp01

0x2b28,	// (0x00016c31) popup_phob_thumbnail2_window_g1_ParamLimits

0x2b28,	// (0x00016c31) popup_phob_thumbnail2_window_g1

0x1500,	// (0x00015609) call2_cli_visual_pane

0xaa41,	// (0x0001eb4a) popup_call2_audio_conf_window_ParamLimits

0xaa41,	// (0x0001eb4a) popup_call2_audio_conf_window

0xaa54,	// (0x0001eb5d) popup_call2_audio_first_window_ParamLimits

0xaa54,	// (0x0001eb5d) popup_call2_audio_first_window

0xaad0,	// (0x0001ebd9) popup_call2_audio_in_window_ParamLimits

0xaad0,	// (0x0001ebd9) popup_call2_audio_in_window

0xab00,	// (0x0001ec09) popup_call2_audio_out_window_ParamLimits

0xab00,	// (0x0001ec09) popup_call2_audio_out_window

0xab4c,	// (0x0001ec55) popup_call2_audio_second_window_ParamLimits

0xab4c,	// (0x0001ec55) popup_call2_audio_second_window

0xab98,	// (0x0001eca1) popup_call2_audio_wait_window_ParamLimits

0xab98,	// (0x0001eca1) popup_call2_audio_wait_window

0x1500,	// (0x00015609) bg_popup_call2_act_pane_cp03

0x2b34,	// (0x00016c3d) list_conf_pane_cp

0x2b3c,	// (0x00016c45) popup_call2_audio_conf_window_t1

0x231d,	// (0x00016426) list_single_graphic_popup_conf2_pane_ParamLimits

0x231d,	// (0x00016426) list_single_graphic_popup_conf2_pane

0x2330,	// (0x00016439) list_highlight_pane_cp04

0x2b4a,	// (0x00016c53) list_single_graphic_popup_conf2_pane_g1

0x2341,	// (0x0001644a) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf4b8,	// (0x000235c1) list_single_graphic_popup_conf2_pane_g

0x2b52,	// (0x00016c5b) list_single_graphic_popup_conf2_pane_t1

0x2b60,	// (0x00016c69) bg_popup_call2_act_pane_cp01_ParamLimits

0x2b60,	// (0x00016c69) bg_popup_call2_act_pane_cp01

0x2bea,	// (0x00016cf3) call_type_pane_cp05_ParamLimits

0x2bea,	// (0x00016cf3) call_type_pane_cp05

0x2c3e,	// (0x00016d47) popup_call2_audio_second_window_g1_ParamLimits

0x2c3e,	// (0x00016d47) popup_call2_audio_second_window_g1

0x2c92,	// (0x00016d9b) popup_call2_audio_second_window_g2_ParamLimits

0x2c92,	// (0x00016d9b) popup_call2_audio_second_window_g2

0x0002,

0xf4bd,	// (0x000235c6) popup_call2_audio_second_window_g_ParamLimits

0xf4bd,	// (0x000235c6) popup_call2_audio_second_window_g

0x2cf7,	// (0x00016e00) popup_call2_audio_second_window_t1_ParamLimits

0x2cf7,	// (0x00016e00) popup_call2_audio_second_window_t1

0x2db2,	// (0x00016ebb) popup_call2_audio_second_window_t2_ParamLimits

0x2db2,	// (0x00016ebb) popup_call2_audio_second_window_t2

0x2e05,	// (0x00016f0e) popup_call2_audio_second_window_t3_ParamLimits

0x2e05,	// (0x00016f0e) popup_call2_audio_second_window_t3

0x0003,

0xf4c4,	// (0x000235cd) popup_call2_audio_second_window_t_ParamLimits

0xf4c4,	// (0x000235cd) popup_call2_audio_second_window_t

0x1500,	// (0x00015609) bg_popup_call2_in_pane_cp02

0x2ef8,	// (0x00017001) call_type_pane_cp04

0x2f00,	// (0x00017009) popup_call2_audio_wait_window_g1

0x2f08,	// (0x00017011) popup_call2_audio_wait_window_g2

0x0001,

0xf4cd,	// (0x000235d6) popup_call2_audio_wait_window_g

0x2f10,	// (0x00017019) popup_call2_audio_wait_window_t3

0x2f1e,	// (0x00017027) bg_popup_call2_act_pane_ParamLimits

0x2f1e,	// (0x00017027) bg_popup_call2_act_pane

0x2fde,	// (0x000170e7) call_type_pane_cp03_ParamLimits

0x2fde,	// (0x000170e7) call_type_pane_cp03

0x3042,	// (0x0001714b) popup_call2_audio_first_window_g1_ParamLimits

0x3042,	// (0x0001714b) popup_call2_audio_first_window_g1

0x30b2,	// (0x000171bb) popup_call2_audio_first_window_g2_ParamLimits

0x30b2,	// (0x000171bb) popup_call2_audio_first_window_g2

0x3116,	// (0x0001721f) popup_call2_audio_first_window_g3_ParamLimits

0x3116,	// (0x0001721f) popup_call2_audio_first_window_g3

0x0004,

0xf4d2,	// (0x000235db) popup_call2_audio_first_window_g_ParamLimits

0xf4d2,	// (0x000235db) popup_call2_audio_first_window_g

0x319e,	// (0x000172a7) popup_call2_audio_first_window_t1_ParamLimits

0x319e,	// (0x000172a7) popup_call2_audio_first_window_t1

0x32a1,	// (0x000173aa) popup_call2_audio_first_window_t4_ParamLimits

0x32a1,	// (0x000173aa) popup_call2_audio_first_window_t4

0x3384,	// (0x0001748d) popup_call2_audio_first_window_t5_ParamLimits

0x3384,	// (0x0001748d) popup_call2_audio_first_window_t5

0x0003,

0xf4dd,	// (0x000235e6) popup_call2_audio_first_window_t_ParamLimits

0xf4dd,	// (0x000235e6) popup_call2_audio_first_window_t

0x1753,	// (0x0001585c) bg_popup_call2_act_pane_g1

0x3a49,	// (0x00017b52) popup_cale_lunar_info_window_t1

0x3a57,	// (0x00017b60) popup_cale_lunar_info_window_t2

0x3a65,	// (0x00017b6e) popup_cale_lunar_info_window_t3

0x1500,	// (0x00015609) bg_popup_call2_bubble_pane

0x3485,	// (0x0001758e) bg_popup_call2_in_pane_cp01_ParamLimits

0x3485,	// (0x0001758e) bg_popup_call2_in_pane_cp01

0x2ef8,	// (0x00017001) call_type_pane_cp02

0x34cd,	// (0x000175d6) popup_call2_audio_out_window_g1_ParamLimits

0x34cd,	// (0x000175d6) popup_call2_audio_out_window_g1

0x34f9,	// (0x00017602) popup_call2_audio_out_window_g2_ParamLimits

0x34f9,	// (0x00017602) popup_call2_audio_out_window_g2

0x3521,	// (0x0001762a) popup_call2_audio_out_window_g3_ParamLimits

0x3521,	// (0x0001762a) popup_call2_audio_out_window_g3

0x0003,

0xf4e6,	// (0x000235ef) popup_call2_audio_out_window_g_ParamLimits

0xf4e6,	// (0x000235ef) popup_call2_audio_out_window_g

0x355c,	// (0x00017665) popup_call2_audio_out_window_t1_ParamLimits

0x355c,	// (0x00017665) popup_call2_audio_out_window_t1

0x35bb,	// (0x000176c4) popup_call2_audio_out_window_t2_ParamLimits

0x35bb,	// (0x000176c4) popup_call2_audio_out_window_t2

0x360f,	// (0x00017718) popup_call2_audio_out_window_t3_ParamLimits

0x360f,	// (0x00017718) popup_call2_audio_out_window_t3

0x3625,	// (0x0001772e) popup_call2_audio_out_window_t4_ParamLimits

0x3625,	// (0x0001772e) popup_call2_audio_out_window_t4

0x363b,	// (0x00017744) popup_call2_audio_out_window_t5_ParamLimits

0x363b,	// (0x00017744) popup_call2_audio_out_window_t5

0x0005,

0xf4ef,	// (0x000235f8) popup_call2_audio_out_window_t_ParamLimits

0xf4ef,	// (0x000235f8) popup_call2_audio_out_window_t

0x369f,	// (0x000177a8) bg_popup_call2_in_pane_ParamLimits

0x369f,	// (0x000177a8) bg_popup_call2_in_pane

0x36fb,	// (0x00017804) popup_call2_audio_in_window_g1_ParamLimits

0x36fb,	// (0x00017804) popup_call2_audio_in_window_g1

0x3733,	// (0x0001783c) popup_call2_audio_in_window_g2_ParamLimits

0x3733,	// (0x0001783c) popup_call2_audio_in_window_g2

0x376b,	// (0x00017874) popup_call2_audio_in_window_g3_ParamLimits

0x376b,	// (0x00017874) popup_call2_audio_in_window_g3

0x0003,

0xf4fc,	// (0x00023605) popup_call2_audio_in_window_g_ParamLimits

0xf4fc,	// (0x00023605) popup_call2_audio_in_window_g

0x37c3,	// (0x000178cc) popup_call2_audio_in_window_t1_ParamLimits

0x37c3,	// (0x000178cc) popup_call2_audio_in_window_t1

0x3843,	// (0x0001794c) popup_call2_audio_in_window_t2_ParamLimits

0x3843,	// (0x0001794c) popup_call2_audio_in_window_t2

0x38c3,	// (0x000179cc) popup_call2_audio_in_window_t3_ParamLimits

0x38c3,	// (0x000179cc) popup_call2_audio_in_window_t3

0x38dd,	// (0x000179e6) popup_call2_audio_in_window_t4_ParamLimits

0x38dd,	// (0x000179e6) popup_call2_audio_in_window_t4

0x38ef,	// (0x000179f8) popup_call2_audio_in_window_t5_ParamLimits

0x38ef,	// (0x000179f8) popup_call2_audio_in_window_t5

0x3904,	// (0x00017a0d) popup_call2_audio_in_window_t6_ParamLimits

0x3904,	// (0x00017a0d) popup_call2_audio_in_window_t6

0x0005,

0xf505,	// (0x0002360e) popup_call2_audio_in_window_t_ParamLimits

0xf505,	// (0x0002360e) popup_call2_audio_in_window_t

0x1753,	// (0x0001585c) bg_popup_call2_in_pane_g1

0x3a73,	// (0x00017b7c) popup_cale_lunar_info_window_t4

0x0003,

0xf580,	// (0x00023689) popup_cale_lunar_info_window_t

0x175b,	// (0x00015864) bg_popup_call2_rect_pane_ParamLimits

0x175b,	// (0x00015864) bg_popup_call2_rect_pane

0x1500,	// (0x00015609) call2_cli_visual_graphic_pane

0x1500,	// (0x00015609) call2_cli_visual_text_pane

0x7c7f,	// (0x0001bd88) smil_status_volume_pane_g3

0x0002,

0x1773,	// (0x0001587c) call2_cli_visual_graphic_pane_g1

0x1773,	// (0x0001587c) call2_cli_visual_graphic_pane_g2

0x1773,	// (0x0001587c) call2_cli_visual_graphic_pane_g3

0x0002,

0xf512,	// (0x0002361b) call2_cli_visual_graphic_pane_g

0x3919,	// (0x00017a22) bg_popup_call2_rect_pane_g1

0x19ae,	// (0x00015ab7) bg_popup_call2_rect_pane_g2

0x3921,	// (0x00017a2a) bg_popup_call2_rect_pane_g3

0x3929,	// (0x00017a32) bg_popup_call2_rect_pane_g4

0x3931,	// (0x00017a3a) bg_popup_call2_rect_pane_g5

0x3939,	// (0x00017a42) bg_popup_call2_rect_pane_g6

0x3941,	// (0x00017a4a) bg_popup_call2_rect_pane_g7

0x3949,	// (0x00017a52) bg_popup_call2_rect_pane_g8

0x3951,	// (0x00017a5a) bg_popup_call2_rect_pane_g9

0x0008,

0xf519,	// (0x00023622) bg_popup_call2_rect_pane_g

0x3959,	// (0x00017a62) bg_popup_call2_bubble_pane_g1

0x3961,	// (0x00017a6a) bg_popup_call2_bubble_pane_g2

0x3969,	// (0x00017a72) bg_popup_call2_bubble_pane_g3

0x3971,	// (0x00017a7a) bg_popup_call2_bubble_pane_g4

0x3979,	// (0x00017a82) bg_popup_call2_bubble_pane_g5

0x3981,	// (0x00017a8a) bg_popup_call2_bubble_pane_g6

0x3989,	// (0x00017a92) bg_popup_call2_bubble_pane_g7

0x3991,	// (0x00017a9a) bg_popup_call2_bubble_pane_g8

0x3999,	// (0x00017aa2) bg_popup_call2_bubble_pane_g9

0x0008,

0xf52c,	// (0x00023635) bg_popup_call2_bubble_pane_g

0x8d78,	// (0x0001ce81) aid_cale_week_size_cell_pane

0x919b,	// (0x0001d2a4) aid_cams_cif_uncrop_pane_ParamLimits

0x919b,	// (0x0001d2a4) aid_cams_cif_uncrop_pane

0x92e6,	// (0x0001d3ef) aid_cams_size_cell_ParamLimits

0x92e6,	// (0x0001d3ef) aid_cams_size_cell

0x92f2,	// (0x0001d3fb) grid_cams_pane_ParamLimits

0x92fe,	// (0x0001d407) linegrid_cams_pane_ParamLimits

0x93bd,	// (0x0001d4c6) call_video_pane_t1

0x93da,	// (0x0001d4e3) call_video_pane_t2

0x0001,

0xf222,	// (0x0002332b) call_video_pane_t

0x97bc,	// (0x0001d8c5) aid_cale_month_size_cell_pane_ParamLimits

0x97bc,	// (0x0001d8c5) aid_cale_month_size_cell_pane

0xf5c4,	// (0x000236cd) smil_status_volume_pane_g

0x7c8c,	// (0x0001bd95) volume_smil_pane_ParamLimits

0x7412,	// (0x0001b51b) aid_popup2_width_pane

0x8ccc,	// (0x0001cdd5) cell_qdial_pane_g4_ParamLimits

0x8ccc,	// (0x0001cdd5) cell_qdial_pane_g4

0xa482,	// (0x0001e58b) aid_blid_cardinal_pane_ParamLimits

0xa48e,	// (0x0001e597) aid_blid_destination_pane_ParamLimits

0xa48e,	// (0x0001e597) aid_blid_destination_pane

0x175b,	// (0x00015864) bg_popup_call_poc_act_pane_ParamLimits

0x175b,	// (0x00015864) bg_popup_call_poc_act_pane

0x175b,	// (0x00015864) bg_popup_call_poc_inact_pane_ParamLimits

0x175b,	// (0x00015864) bg_popup_call_poc_inact_pane

0x39a1,	// (0x00017aaa) bg_popup_call_poc_act_pane_g1

0x39a9,	// (0x00017ab2) bg_popup_call_poc_act_pane_g2

0x39b1,	// (0x00017aba) bg_popup_call_poc_act_pane_g3

0x39b9,	// (0x00017ac2) bg_popup_call_poc_act_pane_g4

0x39c1,	// (0x00017aca) bg_popup_call_poc_act_pane_g5

0x39c9,	// (0x00017ad2) bg_popup_call_poc_act_pane_g6

0x39d1,	// (0x00017ada) bg_popup_call_poc_act_pane_g7

0x39d9,	// (0x00017ae2) bg_popup_call_poc_act_pane_g8

0x1500,	// (0x00015609) main_usb_pane

0x7b91,	// (0x0001bc9a) popup_cale_lunar_info_window

0x965f,	// (0x0001d768) im_reading_pane_t1_ParamLimits

0x1c3f,	// (0x00015d48) list_im_pane_ParamLimits

0x1c50,	// (0x00015d59) scroll_pane_cp07_ParamLimits

0x1500,	// (0x00015609) grid_highlight_pane_cp012

0x175b,	// (0x00015864) mup_scale_pane_ParamLimits

0x3116,	// (0x0001721f) main_usb_pane_g1_ParamLimits

0x3116,	// (0x0001721f) main_usb_pane_g1

0xabf9,	// (0x0001ed02) main_usb_pane_g2_ParamLimits

0xabf9,	// (0x0001ed02) main_usb_pane_g2

0x0001,

0xf569,	// (0x00023672) main_usb_pane_g_ParamLimits

0xf569,	// (0x00023672) main_usb_pane_g

0xac05,	// (0x0001ed0e) main_usb_pane_t1_ParamLimits

0xac05,	// (0x0001ed0e) main_usb_pane_t1

0xac17,	// (0x0001ed20) main_usb_pane_t2_ParamLimits

0xac17,	// (0x0001ed20) main_usb_pane_t2

0xac29,	// (0x0001ed32) main_usb_pane_t3_ParamLimits

0xac29,	// (0x0001ed32) main_usb_pane_t3

0xac3b,	// (0x0001ed44) main_usb_pane_t4_ParamLimits

0xac3b,	// (0x0001ed44) main_usb_pane_t4

0xac4d,	// (0x0001ed56) main_usb_pane_t5_ParamLimits

0xac4d,	// (0x0001ed56) main_usb_pane_t5

0xac5f,	// (0x0001ed68) main_usb_pane_t6_ParamLimits

0xac5f,	// (0x0001ed68) main_usb_pane_t6

0x0005,

0xf56e,	// (0x00023677) main_usb_pane_t_ParamLimits

0x246a,	// (0x00016573) aid_text_placing

0xa42e,	// (0x0001e537) main_location2_pane_t1_ParamLimits

0xa444,	// (0x0001e54d) main_location2_pane_t2_ParamLimits

0xa45a,	// (0x0001e563) main_location2_pane_t3_ParamLimits

0xa470,	// (0x0001e579) main_location2_pane_t4_ParamLimits

0xa470,	// (0x0001e579) main_location2_pane_t4

0xf375,	// (0x0002347e) main_location2_pane_t_ParamLimits

0x1796,	// (0x0001589f) find_pinb_pane_g2_ParamLimits

0x1796,	// (0x0001589f) find_pinb_pane_g2

0x0001,

0xf0da,	// (0x000231e3) find_pinb_pane_g_ParamLimits

0xf0da,	// (0x000231e3) find_pinb_pane_g

0x17a2,	// (0x000158ab) find_pinb_pane_t1_ParamLimits

0x17b4,	// (0x000158bd) find_pinb_pane_t2_ParamLimits

0xf0df,	// (0x000231e8) find_pinb_pane_t_ParamLimits

0x1500,	// (0x00015609) main_call3_pane

0x9b60,	// (0x0001dc69) cale_month_day_heading_pane_t1_ParamLimits

0x9be6,	// (0x0001dcef) cale_month_day_heading_pane_t2_ParamLimits

0x9c77,	// (0x0001dd80) cale_month_day_heading_pane_t3_ParamLimits

0x9d08,	// (0x0001de11) cale_month_day_heading_pane_t4_ParamLimits

0x9d99,	// (0x0001dea2) cale_month_day_heading_pane_t5_ParamLimits

0x9e2a,	// (0x0001df33) cale_month_day_heading_pane_t6_ParamLimits

0x9ebb,	// (0x0001dfc4) cale_month_day_heading_pane_t7_ParamLimits

0xf25a,	// (0x00023363) cale_month_day_heading_pane_t_ParamLimits

0xa1af,	// (0x0001e2b8) smil_status_volume_pane

0xa85a,	// (0x0001e963) postcard_address_pane_ParamLimits

0xa85a,	// (0x0001e963) postcard_address_pane

0xa866,	// (0x0001e96f) postcard_message_pane_ParamLimits

0xa866,	// (0x0001e96f) postcard_message_pane

0xabd5,	// (0x0001ecde) call2_cli_visual_pane_t1_ParamLimits

0xabd5,	// (0x0001ecde) call2_cli_visual_pane_t1

0xafc5,	// (0x0001f0ce) postcard_message_pane_t1_ParamLimits

0xafc5,	// (0x0001f0ce) postcard_message_pane_t1

0xafae,	// (0x0001f0b7) postcard_address_pane_t1_ParamLimits

0xafae,	// (0x0001f0b7) postcard_address_pane_t1

0xafa1,	// (0x0001f0aa) popup_call3_audio_in_window_ParamLimits

0xafa1,	// (0x0001f0aa) popup_call3_audio_in_window

0xae89,	// (0x0001ef92) bg_popup_call3_in_pane_ParamLimits

0xae89,	// (0x0001ef92) bg_popup_call3_in_pane

0xaee7,	// (0x0001eff0) popup_call3_audio_in_window_g1_ParamLimits

0xaee7,	// (0x0001eff0) popup_call3_audio_in_window_g1

0xaeff,	// (0x0001f008) popup_call3_audio_in_window_g2_ParamLimits

0xaeff,	// (0x0001f008) popup_call3_audio_in_window_g2

0xaf17,	// (0x0001f020) popup_call3_audio_in_window_g3_ParamLimits

0xaf17,	// (0x0001f020) popup_call3_audio_in_window_g3

0x0003,

0xf5cb,	// (0x000236d4) popup_call3_audio_in_window_g_ParamLimits

0xf5cb,	// (0x000236d4) popup_call3_audio_in_window_g

0xaf3f,	// (0x0001f048) popup_call3_audio_in_window_t1_ParamLimits

0xaf3f,	// (0x0001f048) popup_call3_audio_in_window_t1

0xaf67,	// (0x0001f070) popup_call3_audio_in_window_t2_ParamLimits

0xaf67,	// (0x0001f070) popup_call3_audio_in_window_t2

0xaf8f,	// (0x0001f098) popup_call3_audio_in_window_t3_ParamLimits

0xaf8f,	// (0x0001f098) popup_call3_audio_in_window_t3

0x0002,

0xf5d4,	// (0x000236dd) popup_call3_audio_in_window_t_ParamLimits

0xf5d4,	// (0x000236dd) popup_call3_audio_in_window_t

0x1ad2,	// (0x00015bdb) bg_popup_call3_rect_pane

0x3919,	// (0x00017a22) bg_popup_call3_rect_pane_g1

0x19ae,	// (0x00015ab7) bg_popup_call3_rect_pane_g2

0x3921,	// (0x00017a2a) bg_popup_call3_rect_pane_g3

0x3929,	// (0x00017a32) bg_popup_call3_rect_pane_g4

0x3931,	// (0x00017a3a) bg_popup_call3_rect_pane_g5

0x3939,	// (0x00017a42) bg_popup_call3_rect_pane_g6

0x3941,	// (0x00017a4a) bg_popup_call3_rect_pane_g7

0x108e,	// (0x00015197) mup_visualizer_osc_pane

0x108e,	// (0x00015197) mup_visualizer_spec_pane

0xaea9,	// (0x0001efb2) call3_video_qcif_pane_ParamLimits

0xaea9,	// (0x0001efb2) call3_video_qcif_pane

0xaeb9,	// (0x0001efc2) call3_video_qcif_uncrop_pane_ParamLimits

0xaeb9,	// (0x0001efc2) call3_video_qcif_uncrop_pane

0xaec5,	// (0x0001efce) call3_video_subqcif_pane_ParamLimits

0xaec5,	// (0x0001efce) call3_video_subqcif_pane

0xaed7,	// (0x0001efe0) call3_video_subqcif_uncrop_pane_ParamLimits

0xaed7,	// (0x0001efe0) call3_video_subqcif_uncrop_pane

0xaf2f,	// (0x0001f038) popup_call3_audio_in_window_g4_ParamLimits

0xaf2f,	// (0x0001f038) popup_call3_audio_in_window_g4

0x108e,	// (0x00015197) mup_spec_half_pane

0x108e,	// (0x00015197) mup_spec_half_pane_cp

0x108e,	// (0x00015197) mup_osc_middle_pane

0x1b4a,	// (0x00015c53) mup_visualizer_osc_pane_g1

0x3c0f,	// (0x00017d18) mup_spec_bar_pane_ParamLimits

0x3c0f,	// (0x00017d18) mup_spec_bar_pane

0x1b4a,	// (0x00015c53) mup_spec_bar_pane_g1

0x1b4a,	// (0x00015c53) mup_spec_bar_pane_g2

0x0001,

0xf3ef,	// (0x000234f8) mup_spec_bar_pane_g

0x8d78,	// (0x0001ce81) aid_cale_week_size_cell_pane_ParamLimits

0x8d8d,	// (0x0001ce96) bg_cale_heading_pane_ParamLimits

0x1a34,	// (0x00015b3d) bg_cale_pane_cp01_ParamLimits

0x8da5,	// (0x0001ceae) cale_week_corner_pane_ParamLimits

0x8dbf,	// (0x0001cec8) cale_week_day_heading_pane_ParamLimits

0x8dd7,	// (0x0001cee0) cale_week_scroll_pane_g1_ParamLimits

0x8dea,	// (0x0001cef3) cale_week_scroll_pane_g2_ParamLimits

0x8dfd,	// (0x0001cf06) cale_week_scroll_pane_g3_ParamLimits

0x8e10,	// (0x0001cf19) cale_week_scroll_pane_g4_ParamLimits

0x8e23,	// (0x0001cf2c) cale_week_scroll_pane_g5_ParamLimits

0x8e36,	// (0x0001cf3f) cale_week_scroll_pane_g6_ParamLimits

0x8e49,	// (0x0001cf52) cale_week_scroll_pane_g7_ParamLimits

0x8e5c,	// (0x0001cf65) cale_week_scroll_pane_g8_ParamLimits

0x8e6f,	// (0x0001cf78) cale_week_scroll_pane_g9_ParamLimits

0x8e82,	// (0x0001cf8b) cale_week_scroll_pane_g10_ParamLimits

0x8e95,	// (0x0001cf9e) cale_week_scroll_pane_g11_ParamLimits

0x8ea8,	// (0x0001cfb1) cale_week_scroll_pane_g12_ParamLimits

0x8ebb,	// (0x0001cfc4) cale_week_scroll_pane_g13_ParamLimits

0x8ece,	// (0x0001cfd7) cale_week_scroll_pane_g14_ParamLimits

0x8ee1,	// (0x0001cfea) cale_week_scroll_pane_g15_ParamLimits

0xf16b,	// (0x00023274) cale_week_scroll_pane_g_ParamLimits

0x8f07,	// (0x0001d010) cale_week_time_pane_ParamLimits

0x8f1a,	// (0x0001d023) grid_cale_week_pane_ParamLimits

0x1a51,	// (0x00015b5a) listscroll_cale_week_pane_t1

0x1a63,	// (0x00015b6c) scroll_pane_cp08_ParamLimits

0x9811,	// (0x0001d91a) cale_month_corner_pane_ParamLimits

0x1e80,	// (0x00015f89) cale_month_pane_t1

0x9b27,	// (0x0001dc30) cale_month_week_pane_ParamLimits

0x3116,	// (0x0001721f) popup_call_status_window_g1_ParamLimits

0xa2d4,	// (0x0001e3dd) popup_call_status_window_g2_ParamLimits

0xa2e0,	// (0x0001e3e9) popup_call_status_window_g3_ParamLimits

0xf2fc,	// (0x00023405) popup_call_status_window_g_ParamLimits

0x2249,	// (0x00016352) aid_call2_pane

0xa79a,	// (0x0001e8a3) msg_header_pane_g1

0xa85a,	// (0x0001e963) postcard_address2_pane_ParamLimits

0xa85a,	// (0x0001e963) postcard_address2_pane

0xa866,	// (0x0001e96f) postcard_message2_pane_ParamLimits

0xa866,	// (0x0001e96f) postcard_message2_pane

0xae40,	// (0x0001ef49) message2_row_pane_ParamLimits

0xae40,	// (0x0001ef49) message2_row_pane

0xae58,	// (0x0001ef61) address2_row_pane_ParamLimits

0xae58,	// (0x0001ef61) address2_row_pane

0x3bdd,	// (0x00017ce6) postcard_message2_row_pane_g1

0x3be5,	// (0x00017cee) postcard_message2_row_pane_t1

0x3bdd,	// (0x00017ce6) address2_row_pane_g1

0x3be5,	// (0x00017cee) address2_row_pane_t1

0x29c3,	// (0x00016acc) aid_size_cell_vorec

0x1500,	// (0x00015609) main_rss_pane

0xae6b,	// (0x0001ef74) rss_list_single_pane_ParamLimits

0xae6b,	// (0x0001ef74) rss_list_single_pane

0x3bf3,	// (0x00017cfc) rss_list_single_pane_t1

0x3c01,	// (0x00017d0a) rss_list_single_pane_t2

0x0001,

0xf5bf,	// (0x000236c8) rss_list_single_pane_t

0x1500,	// (0x00015609) main_camera2_pane

0x1500,	// (0x00015609) main_video2_pane

0x7627,	// (0x0001b730) cams_zoom_pane_cp2_ParamLimits

0x7627,	// (0x0001b730) cams_zoom_pane_cp2

0x7627,	// (0x0001b730) image2_vga_pane_ParamLimits

0x7627,	// (0x0001b730) image2_vga_pane

0x7cd7,	// (0x0001bde0) main_camera2_pane_g1_ParamLimits

0x7cd7,	// (0x0001bde0) main_camera2_pane_g1

0x7cd7,	// (0x0001bde0) main_camera2_pane_g2_ParamLimits

0x7cd7,	// (0x0001bde0) main_camera2_pane_g2

0x7cd7,	// (0x0001bde0) main_camera2_pane_g3_ParamLimits

0x7cd7,	// (0x0001bde0) main_camera2_pane_g3

0x7cd7,	// (0x0001bde0) main_camera2_pane_g4_ParamLimits

0x7cd7,	// (0x0001bde0) main_camera2_pane_g4

0x7cd7,	// (0x0001bde0) main_camera2_pane_g5_ParamLimits

0x7cd7,	// (0x0001bde0) main_camera2_pane_g5

0x7cd7,	// (0x0001bde0) main_camera2_pane_g6_ParamLimits

0x7cd7,	// (0x0001bde0) main_camera2_pane_g6

0x7cd7,	// (0x0001bde0) main_camera2_pane_g7_ParamLimits

0x7cd7,	// (0x0001bde0) main_camera2_pane_g7

0x7cd7,	// (0x0001bde0) main_camera2_pane_g8_ParamLimits

0x7cd7,	// (0x0001bde0) main_camera2_pane_g8

0x0008,

0xf5db,	// (0x000236e4) main_camera2_pane_g_ParamLimits

0xf5db,	// (0x000236e4) main_camera2_pane_g

0x7ce5,	// (0x0001bdee) main_camera2_pane_t1_ParamLimits

0x7ce5,	// (0x0001bdee) main_camera2_pane_t1

0x7ce5,	// (0x0001bdee) main_camera2_pane_t2_ParamLimits

0x7ce5,	// (0x0001bdee) main_camera2_pane_t2

0x7ce5,	// (0x0001bdee) main_camera2_pane_t3_ParamLimits

0x7ce5,	// (0x0001bdee) main_camera2_pane_t3

0x7ce5,	// (0x0001bdee) main_camera2_pane_t4_ParamLimits

0x7ce5,	// (0x0001bdee) main_camera2_pane_t4

0x0006,

0xf5ee,	// (0x000236f7) main_camera2_pane_t_ParamLimits

0xf5ee,	// (0x000236f7) main_camera2_pane_t

0x7d0d,	// (0x0001be16) cams_zoom_pane_cp4_ParamLimits

0x7d0d,	// (0x0001be16) cams_zoom_pane_cp4

0x7b40,	// (0x0001bc49) image2_cif_pane_ParamLimits

0x7b40,	// (0x0001bc49) image2_cif_pane

0x7627,	// (0x0001b730) image2_subqcif_pane_ParamLimits

0x7627,	// (0x0001b730) image2_subqcif_pane

0x7d1b,	// (0x0001be24) main_video2_pane_g1_ParamLimits

0x7d1b,	// (0x0001be24) main_video2_pane_g1

0x7d1b,	// (0x0001be24) main_video2_pane_g2_ParamLimits

0x7d1b,	// (0x0001be24) main_video2_pane_g2

0x7d1b,	// (0x0001be24) main_video2_pane_g3_ParamLimits

0x7d1b,	// (0x0001be24) main_video2_pane_g3

0x7d1b,	// (0x0001be24) main_video2_pane_g4_ParamLimits

0x7d1b,	// (0x0001be24) main_video2_pane_g4

0x7d1b,	// (0x0001be24) main_video2_pane_g5_ParamLimits

0x7d1b,	// (0x0001be24) main_video2_pane_g5

0x7d1b,	// (0x0001be24) main_video2_pane_g6_ParamLimits

0x7d1b,	// (0x0001be24) main_video2_pane_g6

0x0005,

0xf5fd,	// (0x00023706) main_video2_pane_g_ParamLimits

0xf5fd,	// (0x00023706) main_video2_pane_g

0x7d29,	// (0x0001be32) main_video2_pane_t1_ParamLimits

0x7d29,	// (0x0001be32) main_video2_pane_t1

0x7d29,	// (0x0001be32) main_video2_pane_t2_ParamLimits

0x7d29,	// (0x0001be32) main_video2_pane_t2

0x7d29,	// (0x0001be32) main_video2_pane_t3_ParamLimits

0x7d29,	// (0x0001be32) main_video2_pane_t3

0x0002,

0xf60a,	// (0x00023713) main_video2_pane_t_ParamLimits

0xf60a,	// (0x00023713) main_video2_pane_t

0xad0e,	// (0x0001ee17) call_muted_g2

0x0001,

0xf5b1,	// (0x000236ba) call_muted_g

0x1500,	// (0x00015609) main_mup2_pane

0x17f1,	// (0x000158fa) main_mup2_pane_g1_ParamLimits

0x17f1,	// (0x000158fa) main_mup2_pane_g1

0x17f1,	// (0x000158fa) main_mup2_pane_g2_ParamLimits

0x17f1,	// (0x000158fa) main_mup2_pane_g2

0x545f,	// (0x00019568) main_mup_pane_g13_cp1

0x7635,	// (0x0001b73e) mup_volume_pane_cp1

0x17f1,	// (0x000158fa) main_mup2_pane_g4_ParamLimits

0x17f1,	// (0x000158fa) main_mup2_pane_g4

0x17f1,	// (0x000158fa) main_mup2_pane_g5_ParamLimits

0x17f1,	// (0x000158fa) main_mup2_pane_g5

0x17f1,	// (0x000158fa) main_mup2_pane_g6_ParamLimits

0x17f1,	// (0x000158fa) main_mup2_pane_g6

0x17f1,	// (0x000158fa) main_mup2_pane_g7_ParamLimits

0x17f1,	// (0x000158fa) main_mup2_pane_g7

0x0006,

0xf611,	// (0x0002371a) main_mup2_pane_g_ParamLimits

0xf611,	// (0x0002371a) main_mup2_pane_g

0x17ff,	// (0x00015908) main_mup2_pane_t1_ParamLimits

0x17ff,	// (0x00015908) main_mup2_pane_t1

0x17ff,	// (0x00015908) main_mup2_pane_t2_ParamLimits

0x17ff,	// (0x00015908) main_mup2_pane_t2

0x17ff,	// (0x00015908) main_mup2_pane_t3_ParamLimits

0x17ff,	// (0x00015908) main_mup2_pane_t3

0x17ff,	// (0x00015908) main_mup2_pane_t4_ParamLimits

0x17ff,	// (0x00015908) main_mup2_pane_t4

0x17ff,	// (0x00015908) main_mup2_pane_t5_ParamLimits

0x17ff,	// (0x00015908) main_mup2_pane_t5

0x17ff,	// (0x00015908) main_mup2_pane_t6_ParamLimits

0x17ff,	// (0x00015908) main_mup2_pane_t6

0x0005,

0xf620,	// (0x00023729) main_mup2_pane_t_ParamLimits

0xf620,	// (0x00023729) main_mup2_pane_t

0x3c7d,	// (0x00017d86) mup2_visualizer_pane_ParamLimits

0x3c7d,	// (0x00017d86) mup2_visualizer_pane

0x3c7d,	// (0x00017d86) mup_progress_pane_cp_ParamLimits

0x3c7d,	// (0x00017d86) mup_progress_pane_cp

0x7d53,	// (0x0001be5c) mup_volume_pane_cp_ParamLimits

0x7d53,	// (0x0001be5c) mup_volume_pane_cp

0x17d5,	// (0x000158de) mup2_visualizer_pane_g1_ParamLimits

0x17d5,	// (0x000158de) mup2_visualizer_pane_g1

0x17e3,	// (0x000158ec) mup2_visualizer_pane_g2_ParamLimits

0x17e3,	// (0x000158ec) mup2_visualizer_pane_g2

0x17e3,	// (0x000158ec) mup2_visualizer_pane_g3_ParamLimits

0x17e3,	// (0x000158ec) mup2_visualizer_pane_g3

0x0002,

0xf0e4,	// (0x000231ed) mup2_visualizer_pane_g_ParamLimits

0xf0e4,	// (0x000231ed) mup2_visualizer_pane_g

0x29c3,	// (0x00016acc) aid_size_cell_fmradio

0x7b36,	// (0x0001bc3f) aid_height_parent_landcape

0x1cdd,	// (0x00015de6) wml_content_pane_cp

0x1ce5,	// (0x00015dee) wml_tabs_pane

0x1cee,	// (0x00015df7) popup_wml_miniature_window

0x1cf6,	// (0x00015dff) scroll_pane_cp021

0x1d0a,	// (0x00015e13) wml_content_pane_comp8

0x1500,	// (0x00015609) bg_popup_sub_pane_cp05

0x3ca1,	// (0x00017daa) popup_wml_miniature_window_g1

0x3ca9,	// (0x00017db2) wml_miniature_view_pane

0xafe0,	// (0x0001f0e9) aid_size_wml_view

0xafe8,	// (0x0001f0f1) wml_miniature_view_pane_g1

0xaff1,	// (0x0001f0fa) wml_miniature_view_pane_g2

0xaffa,	// (0x0001f103) wml_miniature_view_pane_g3

0xb002,	// (0x0001f10b) wml_miniature_view_pane_g4

0xb00a,	// (0x0001f113) wml_miniature_view_pane_g5

0xb012,	// (0x0001f11b) wml_miniature_view_pane_g6

0xb01a,	// (0x0001f123) wml_miniature_view_pane_g7

0xb022,	// (0x0001f12b) wml_miniature_view_pane_g8

0x0007,

0xf62d,	// (0x00023736) wml_miniature_view_pane_g

0x3cb1,	// (0x00017dba) background_graphic_ParamLimits

0x3cb1,	// (0x00017dba) background_graphic

0x3cbd,	// (0x00017dc6) wml_tabs_2_pane

0x3cc6,	// (0x00017dcf) wml_tabs_3_pane_ParamLimits

0x3cc6,	// (0x00017dcf) wml_tabs_3_pane

0x3cd8,	// (0x00017de1) wml_tabs_4_pane_ParamLimits

0x3cd8,	// (0x00017de1) wml_tabs_4_pane

0x3cee,	// (0x00017df7) wml_tabs_5_pane_ParamLimits

0x3cee,	// (0x00017df7) wml_tabs_5_pane

0x3d08,	// (0x00017e11) wml_tabs_pane_g2_ParamLimits

0x3d08,	// (0x00017e11) wml_tabs_pane_g2

0x3d1c,	// (0x00017e25) wml_tabs_pane_g3_ParamLimits

0x3d1c,	// (0x00017e25) wml_tabs_pane_g3

0xb02a,	// (0x0001f133) wml_tabs_2_active_pane_ParamLimits

0xb02a,	// (0x0001f133) wml_tabs_2_active_pane

0xb03a,	// (0x0001f143) wml_tabs_2_passive_pane_ParamLimits

0xb03a,	// (0x0001f143) wml_tabs_2_passive_pane

0xb04a,	// (0x0001f153) wml_tabs_3_active_pane_cp_ParamLimits

0xb04a,	// (0x0001f153) wml_tabs_3_active_pane_cp

0xb05b,	// (0x0001f164) wml_tabs_3_passive_pane_ParamLimits

0xb05b,	// (0x0001f164) wml_tabs_3_passive_pane

0xb06c,	// (0x0001f175) wml_tabs_3_passive_pane_cp_ParamLimits

0xb06c,	// (0x0001f175) wml_tabs_3_passive_pane_cp

0xb07d,	// (0x0001f186) tabs_4_active_pane

0xb085,	// (0x0001f18e) tabs_4_passive_pane

0xb08d,	// (0x0001f196) tabs_4_passive_pane_cp

0xb095,	// (0x0001f19e) tabs_4_passive_pane_cp2

0xabf1,	// (0x0001ecfa) aid_height_text

0x3c7d,	// (0x00017d86) mup_volume_cont_pane_ParamLimits

0x3c7d,	// (0x00017d86) mup_volume_cont_pane

0x8b75,	// (0x0001cc7e) aid_size_cell_pinb

0x108e,	// (0x00015197) aid_size_list_pinb

0x3c7d,	// (0x00017d86) mup2_volume_cont_pane_ParamLimits

0x3c7d,	// (0x00017d86) mup2_volume_cont_pane

0x7d3d,	// (0x0001be46) mup2_volume_cont_pane_g1_ParamLimits

0x7d3d,	// (0x0001be46) mup2_volume_cont_pane_g1

0x741a,	// (0x0001b523) aid_size_cell_touch_ParamLimits

0x741a,	// (0x0001b523) aid_size_cell_touch

0x763f,	// (0x0001b748) touch_pane_ParamLimits

0x763f,	// (0x0001b748) touch_pane

0x7635,	// (0x0001b73e) main_rss2_pane

0x3d4f,	// (0x00017e58) listscroll_rss2_pane

0x3d58,	// (0x00017e61) rss2_navigation_pane

0x3d60,	// (0x00017e69) list_rss2_pane

0x23e7,	// (0x000164f0) scroll_pane_cp22

0x3d68,	// (0x00017e71) rss2_navigation_pane_g1

0x3d71,	// (0x00017e7a) rss2_navigation_pane_g2

0x3d79,	// (0x00017e82) rss2_navigation_pane_g3

0x0002,

0xf63e,	// (0x00023747) rss2_navigation_pane_g

0x3d81,	// (0x00017e8a) rss2_navigation_pane_t1

0xb09d,	// (0x0001f1a6) rss2_list_single_pane_ParamLimits

0xb09d,	// (0x0001f1a6) rss2_list_single_pane

0x3d8f,	// (0x00017e98) rss2_list_single_pane_t2

0x3d9d,	// (0x00017ea6) rss2_list_single_pane_t3_ParamLimits

0x3d9d,	// (0x00017ea6) rss2_list_single_pane_t3

0x3dba,	// (0x00017ec3) rss2_list_single_pane_t4

0xa199,	// (0x0001e2a2) smil_status_pane_g1

0x7b40,	// (0x0001bc49) main_image2_pane_ParamLimits

0x7b40,	// (0x0001bc49) main_image2_pane

0x7cd7,	// (0x0001bde0) main_camera2_pane_g9_ParamLimits

0x7cd7,	// (0x0001bde0) main_camera2_pane_g9

0x7ce5,	// (0x0001bdee) main_camera2_pane_t5_ParamLimits

0x7ce5,	// (0x0001bdee) main_camera2_pane_t5

0x7cf9,	// (0x0001be02) main_camera2_pane_t6_ParamLimits

0x7cf9,	// (0x0001be02) main_camera2_pane_t6

0xb0b4,	// (0x0001f1bd) main_image2_pane_g1_ParamLimits

0xb0b4,	// (0x0001f1bd) main_image2_pane_g1

0xaa06,	// (0x0001eb0f) smil2_video_pane_ParamLimits

0xaa06,	// (0x0001eb0f) smil2_video_pane

0x744a,	// (0x0001b553) aid_zoom_text_primary_cp

0x75de,	// (0x0001b6e7) popup_preview_fixed_window

0x1c37,	// (0x00015d40) im_reading_pane_g1

0x7ca1,	// (0x0001bdaa) cams2_bc_adjust_pane_cp_ParamLimits

0x7ca1,	// (0x0001bdaa) cams2_bc_adjust_pane_cp

0x7627,	// (0x0001b730) cams2_bc_adjust_pane_ParamLimits

0x7627,	// (0x0001b730) cams2_bc_adjust_pane

0x545f,	// (0x00019568) cams2_bc_adjust_pane_g1

0x7635,	// (0x0001b73e) cams2_slider_pane

0x545f,	// (0x00019568) cams2_slider_pane_g1

0x545f,	// (0x00019568) cams2_slider_pane_g2

0x0006,

0xf645,	// (0x0002374e) cams2_slider_pane_g

0x76a6,	// (0x0001b7af) calc_display_pane_ParamLimits

0x76be,	// (0x0001b7c7) calc_paper_pane_ParamLimits

0x76da,	// (0x0001b7e3) grid_calc_pane_ParamLimits

0x7a95,	// (0x0001bb9e) popup_clock_digital_window_t1_ParamLimits

0x2960,	// (0x00016a69) main_image_pane_t1

0x768c,	// (0x0001b795) aid_size_cell_calc_ParamLimits

0x768c,	// (0x0001b795) aid_size_cell_calc

0x7b71,	// (0x0001bc7a) popup_blid_sat_info2_window_ParamLimits

0x7b71,	// (0x0001bc7a) popup_blid_sat_info2_window

0x3dc8,	// (0x00017ed1) aid_size_cell_blid

0x3c7d,	// (0x00017d86) bg_popup_window_pane_cp07

0x3de5,	// (0x00017eee) grid_popup_blid_pane

0x3ded,	// (0x00017ef6) heading_pane_cp05_ParamLimits

0x3ded,	// (0x00017ef6) heading_pane_cp05

0x3eb5,	// (0x00017fbe) cell_popup_blid_pane_ParamLimits

0x3eb5,	// (0x00017fbe) cell_popup_blid_pane

0x3ed5,	// (0x00017fde) cell_popup_blid_pane_g1

0x3edd,	// (0x00017fe6) cell_popup_blid_pane_t1

0x3c7d,	// (0x00017d86) mup2_indicator_pane_ParamLimits

0x3c7d,	// (0x00017d86) mup2_indicator_pane

0x108e,	// (0x00015197) mup2_visualizer_osc_pane

0x3c8b,	// (0x00017d94) mup2_visualizer_spec_pane_ParamLimits

0x3c8b,	// (0x00017d94) mup2_visualizer_spec_pane

0x108e,	// (0x00015197) mup2_spec_half_pane

0x108e,	// (0x00015197) mup2_spec_half_pane_cp

0x108e,	// (0x00015197) mup2_spec_bar_pane_ParamLimits

0x108e,	// (0x00015197) mup2_spec_bar_pane

0x1b4a,	// (0x00015c53) mup2_spec_bar_pane_g1

0x3eeb,	// (0x00017ff4) mup2_spec_bar_pane_g2

0x0001,

0xf66b,	// (0x00023774) mup2_spec_bar_pane_g

0x108e,	// (0x00015197) mup2_osc_middle_pane

0x1b4a,	// (0x00015c53) mup2_visualizer_osc_pane_g1

0x110f,	// (0x00015218) popup_number_entry_window_t1_ParamLimits

0x1122,	// (0x0001522b) popup_number_entry_window_t2_ParamLimits

0x1134,	// (0x0001523d) popup_number_entry_window_t3_ParamLimits

0x8b1c,	// (0x0001cc25) popup_number_entry_window_t5_ParamLimits

0x8b1c,	// (0x0001cc25) popup_number_entry_window_t5

0xf085,	// (0x0002318e) popup_number_entry_window_t_ParamLimits

0x1146,	// (0x0001524f) text_title_cp2_ParamLimits

0x7ad4,	// (0x0001bbdd) aid_hotspot_pointer_text2_pane

0x7b2a,	// (0x0001bc33) main_viewer_pane_g9_ParamLimits

0x7b2a,	// (0x0001bc33) main_viewer_pane_g9

0x1e80,	// (0x00015f89) cale_month_pane_t1_ParamLimits

0x1ed4,	// (0x00015fdd) bg_cale_pane_ParamLimits

0x1eec,	// (0x00015ff5) list_cale_pane_ParamLimits

0x1efd,	// (0x00016006) listscroll_cale_day_pane_t1

0x1f0f,	// (0x00016018) scroll_pane_cp09_ParamLimits

0xa59d,	// (0x0001e6a6) main_mup_eq_pane_t1_ParamLimits

0xa59d,	// (0x0001e6a6) main_mup_eq_pane_t1

0xa5b3,	// (0x0001e6bc) main_mup_eq_pane_t2_ParamLimits

0xa5b3,	// (0x0001e6bc) main_mup_eq_pane_t2

0xa5c9,	// (0x0001e6d2) main_mup_eq_pane_t3_ParamLimits

0xa5c9,	// (0x0001e6d2) main_mup_eq_pane_t3

0xa5df,	// (0x0001e6e8) main_mup_eq_pane_t4_ParamLimits

0xa5df,	// (0x0001e6e8) main_mup_eq_pane_t4

0xa5f5,	// (0x0001e6fe) main_mup_eq_pane_t5_ParamLimits

0xa5f5,	// (0x0001e6fe) main_mup_eq_pane_t5

0xa60b,	// (0x0001e714) main_mup_eq_pane_t6_ParamLimits

0xa60b,	// (0x0001e714) main_mup_eq_pane_t6

0xa61d,	// (0x0001e726) main_mup_eq_pane_t7_ParamLimits

0xa61d,	// (0x0001e726) main_mup_eq_pane_t7

0xa62f,	// (0x0001e738) main_mup_eq_pane_t8_ParamLimits

0xa62f,	// (0x0001e738) main_mup_eq_pane_t8

0xa641,	// (0x0001e74a) main_mup_eq_pane_t9_ParamLimits

0xa641,	// (0x0001e74a) main_mup_eq_pane_t9

0xa657,	// (0x0001e760) main_mup_eq_pane_t10_ParamLimits

0xa657,	// (0x0001e760) main_mup_eq_pane_t10

0x0009,

0xf3fb,	// (0x00023504) main_mup_eq_pane_t_ParamLimits

0xf3fb,	// (0x00023504) main_mup_eq_pane_t

0xa6ea,	// (0x0001e7f3) mup_equalizer_pane_cp5_ParamLimits

0xa6fc,	// (0x0001e805) mup_equalizer_pane_cp6_ParamLimits

0xa70e,	// (0x0001e817) mup_equalizer_pane_cp7_ParamLimits

0x7635,	// (0x0001b73e) main_gallery_pane

0x3c19,	// (0x00017d22) smil2_volume_pane

0x3c34,	// (0x00017d3d) smil_status_volume_pane_g1_ParamLimits

0x3c21,	// (0x00017d2a) smil_status_volume_pane_g2_ParamLimits

0x7c7f,	// (0x0001bd88) smil_status_volume_pane_g3_ParamLimits

0xf5c4,	// (0x000236cd) smil_status_volume_pane_g_ParamLimits

0x3c7d,	// (0x00017d86) bg_popup_window_pane_cp07_ParamLimits

0x3dd0,	// (0x00017ed9) blid_firmament_pane

0x26cf,	// (0x000167d8) aid_size_cell_gallery_ParamLimits

0x26cf,	// (0x000167d8) aid_size_cell_gallery

0xb0c0,	// (0x0001f1c9) grid_gallery_pane_ParamLimits

0xb0c0,	// (0x0001f1c9) grid_gallery_pane

0xb0cf,	// (0x0001f1d8) cell_gallery_pane_ParamLimits

0xb0cf,	// (0x0001f1d8) cell_gallery_pane

0x10e1,	// (0x000151ea) bg_cell_gallery_focus_pane_ParamLimits

0x10e1,	// (0x000151ea) bg_cell_gallery_focus_pane

0x17d5,	// (0x000158de) cell_gallery_pane_g1_ParamLimits

0x17d5,	// (0x000158de) cell_gallery_pane_g1

0x17d5,	// (0x000158de) cell_gallery_pane_g2_ParamLimits

0x17d5,	// (0x000158de) cell_gallery_pane_g2

0x17d5,	// (0x000158de) cell_gallery_pane_g3_ParamLimits

0x17d5,	// (0x000158de) cell_gallery_pane_g3

0x17e3,	// (0x000158ec) cell_gallery_pane_g4_ParamLimits

0x17e3,	// (0x000158ec) cell_gallery_pane_g4

0x0003,

0xf670,	// (0x00023779) cell_gallery_pane_g_ParamLimits

0xf670,	// (0x00023779) cell_gallery_pane_g

0x3ef5,	// (0x00017ffe) bg_cell_gallery_focus_pane_g1

0x3efd,	// (0x00018006) bg_cell_gallery_focus_pane_g2

0x3f05,	// (0x0001800e) bg_cell_gallery_focus_pane_g3

0x3f0d,	// (0x00018016) bg_cell_gallery_focus_pane_g4

0x3f15,	// (0x0001801e) bg_cell_gallery_focus_pane_g5

0x3f1d,	// (0x00018026) bg_cell_gallery_focus_pane_g6

0x3f25,	// (0x0001802e) bg_cell_gallery_focus_pane_g7

0x3f2d,	// (0x00018036) bg_cell_gallery_focus_pane_g8

0x0007,

0xf679,	// (0x00023782) bg_cell_gallery_focus_pane_g

0x3f35,	// (0x0001803e) aid_firma_cardinal

0x3f49,	// (0x00018052) blid_firmament_pane_t1

0x3f60,	// (0x00018069) blid_firmament_pane_t2

0x3f77,	// (0x00018080) blid_firmament_pane_t3

0x3f8e,	// (0x00018097) blid_firmament_pane_t4

0x0003,

0xf68a,	// (0x00023793) blid_firmament_pane_t

0x3fa5,	// (0x000180ae) blid_sat_info_pane

0x1b4a,	// (0x00015c53) blid_sat_info_pane_g1

0x1b4a,	// (0x00015c53) blid_sat_info_pane_g2

0x0001,

0xf3ef,	// (0x000234f8) blid_sat_info_pane_g

0x3fb5,	// (0x000180be) blid_sat_info_pane_t1

0x3fc3,	// (0x000180cc) smil2_volume_content_pane

0x3fcc,	// (0x000180d5) smil2_volume_pane_g1

0x3fd4,	// (0x000180dd) smil2_volume_content_pane_g1

0x3fdd,	// (0x000180e6) smil2_volume_content_pane_g2

0x3fe6,	// (0x000180ef) smil2_volume_content_pane_g3

0x3fef,	// (0x000180f8) smil2_volume_content_pane_g4

0x3ff8,	// (0x00018101) smil2_volume_content_pane_g5

0x4001,	// (0x0001810a) smil2_volume_content_pane_g6

0x400a,	// (0x00018113) smil2_volume_content_pane_g7

0x4013,	// (0x0001811c) smil2_volume_content_pane_g8

0x401c,	// (0x00018125) smil2_volume_content_pane_g9

0x4025,	// (0x0001812e) smil2_volume_content_pane_g10

0x0009,

0xf693,	// (0x0002379c) smil2_volume_content_pane_g

0x8f7d,	// (0x0001d086) cale_week_day_heading_pane_t1_ParamLimits

0x8fb8,	// (0x0001d0c1) cale_week_day_heading_pane_t2_ParamLimits

0x8ff3,	// (0x0001d0fc) cale_week_day_heading_pane_t3_ParamLimits

0x902e,	// (0x0001d137) cale_week_day_heading_pane_t4_ParamLimits

0x9069,	// (0x0001d172) cale_week_day_heading_pane_t5_ParamLimits

0x90a4,	// (0x0001d1ad) cale_week_day_heading_pane_t6_ParamLimits

0x90df,	// (0x0001d1e8) cale_week_day_heading_pane_t7_ParamLimits

0xf18c,	// (0x00023295) cale_week_day_heading_pane_t_ParamLimits

0x1a80,	// (0x00015b89) bg_cale_side_pane_ParamLimits

0x781b,	// (0x0001b924) cale_week_time_pane_t1_ParamLimits

0x7855,	// (0x0001b95e) cale_week_time_pane_t2_ParamLimits

0x788f,	// (0x0001b998) cale_week_time_pane_t3_ParamLimits

0x78c9,	// (0x0001b9d2) cale_week_time_pane_t4_ParamLimits

0x7903,	// (0x0001ba0c) cale_week_time_pane_t5_ParamLimits

0x793d,	// (0x0001ba46) cale_week_time_pane_t6_ParamLimits

0x7977,	// (0x0001ba80) cale_week_time_pane_t7_ParamLimits

0x79b1,	// (0x0001baba) cale_week_time_pane_t8_ParamLimits

0xf19b,	// (0x000232a4) cale_week_time_pane_t_ParamLimits

0x911a,	// (0x0001d223) cell_cale_week_pane_g2_ParamLimits

0x1a80,	// (0x00015b89) bg_cale_side_pane_cp01_ParamLimits

0x9f4c,	// (0x0001e055) cale_month_week_pane_t1_ParamLimits

0x9f85,	// (0x0001e08e) cale_month_week_pane_t2_ParamLimits

0x9fbe,	// (0x0001e0c7) cale_month_week_pane_t3_ParamLimits

0x9ff7,	// (0x0001e100) cale_month_week_pane_t4_ParamLimits

0xa030,	// (0x0001e139) cale_month_week_pane_t5_ParamLimits

0xa069,	// (0x0001e172) cale_month_week_pane_t6_ParamLimits

0xf269,	// (0x00023372) cale_month_week_pane_t_ParamLimits

0x79f5,	// (0x0001bafe) cell_cale_month_pane_g1_ParamLimits

0x7635,	// (0x0001b73e) main_cale_event_viewer_pane

0x108e,	// (0x00015197) listscroll_cale_event_viewer_pane

0x402e,	// (0x00018137) list_cale_ev_pane

0x4036,	// (0x0001813f) scroll_pane_cp023

0xb0eb,	// (0x0001f1f4) field_cale_ev_pane_ParamLimits

0xb0eb,	// (0x0001f1f4) field_cale_ev_pane

0x4042,	// (0x0001814b) field_cale_ev_content_pane_ParamLimits

0x4042,	// (0x0001814b) field_cale_ev_content_pane

0x404e,	// (0x00018157) field_cale_ev_pane_g1_ParamLimits

0x404e,	// (0x00018157) field_cale_ev_pane_g1

0x405a,	// (0x00018163) field_cale_ev_pane_g2_ParamLimits

0x405a,	// (0x00018163) field_cale_ev_pane_g2

0x4072,	// (0x0001817b) field_cale_ev_pane_g3_ParamLimits

0x4072,	// (0x0001817b) field_cale_ev_pane_g3

0x0002,

0xf6a8,	// (0x000237b1) field_cale_ev_pane_g_ParamLimits

0xf6a8,	// (0x000237b1) field_cale_ev_pane_g

0x408a,	// (0x00018193) field_cale_ev_pane_t1_ParamLimits

0x408a,	// (0x00018193) field_cale_ev_pane_t1

0xb105,	// (0x0001f20e) field_cale_ev_content_pane_t1_ParamLimits

0xb105,	// (0x0001f20e) field_cale_ev_content_pane_t1

0x2788,	// (0x00016891) bg_button_pane_cp01

0x8d68,	// (0x0001ce71) listscroll_cale_week_pane_ParamLimits

0x1a2b,	// (0x00015b34) popup_toolbar_window_cp01

0x1a51,	// (0x00015b5a) listscroll_cale_week_pane_t1_ParamLimits

0x8d68,	// (0x0001ce71) listscroll_cale_day_pane_ParamLimits

0x1a2b,	// (0x00015b34) popup_toolbar_window_cp02

0x1efd,	// (0x00016006) listscroll_cale_day_pane_t1_ParamLimits

0x8d68,	// (0x0001ce71) main_cale_month_pane_ParamLimits

0x7c44,	// (0x0001bd4d) popup_toolbar_window_cp03_ParamLimits

0x7c44,	// (0x0001bd4d) popup_toolbar_window_cp03

0xa92e,	// (0x0001ea37) main_image_pane_g2_ParamLimits

0xa92e,	// (0x0001ea37) main_image_pane_g2

0xa93a,	// (0x0001ea43) main_image_pane_g3_ParamLimits

0xa93a,	// (0x0001ea43) main_image_pane_g3

0x0002,

0xf48d,	// (0x00023596) main_image_pane_g_ParamLimits

0xf48d,	// (0x00023596) main_image_pane_g

0x2960,	// (0x00016a69) main_image_pane_t1_ParamLimits

0xa946,	// (0x0001ea4f) main_image_pane_t2_ParamLimits

0xa946,	// (0x0001ea4f) main_image_pane_t2

0xa958,	// (0x0001ea61) main_image_pane_t3_ParamLimits

0xa958,	// (0x0001ea61) main_image_pane_t3

0xa96a,	// (0x0001ea73) main_image_pane_t4_ParamLimits

0xa96a,	// (0x0001ea73) main_image_pane_t4

0x0003,

0xf494,	// (0x0002359d) main_image_pane_t_ParamLimits

0xf494,	// (0x0002359d) main_image_pane_t

0xa97c,	// (0x0001ea85) popup_image_details_window_cp01

0xa984,	// (0x0001ea8d) popup_toobar_trans_pane_cp01_ParamLimits

0xa984,	// (0x0001ea8d) popup_toobar_trans_pane_cp01

0x7bb8,	// (0x0001bcc1) popup_image_details_window_ParamLimits

0x7bb8,	// (0x0001bcc1) popup_image_details_window

0x7bc4,	// (0x0001bccd) popup_image_focus_window

0x7627,	// (0x0001b730) camera2_autofocus_pane_ParamLimits

0x7627,	// (0x0001b730) camera2_autofocus_pane

0x108e,	// (0x00015197) bg_popup_sub_pane_cp06

0x40a1,	// (0x000181aa) popup_image_focus_window_g1

0x40a9,	// (0x000181b2) popup_image_focus_window_g2

0x40b1,	// (0x000181ba) popup_image_focus_window_g3

0x40b9,	// (0x000181c2) popup_image_focus_window_g4

0x0003,

0xf6af,	// (0x000237b8) popup_image_focus_window_g

0x40c1,	// (0x000181ca) popup_image_focus_window_t1

0x40cf,	// (0x000181d8) popup_image_focus_window_t2

0x40de,	// (0x000181e7) popup_image_focus_window_t3

0x0002,

0xf6b8,	// (0x000237c1) popup_image_focus_window_t

0x17d5,	// (0x000158de) camera2_autofocus_pane_g1

0x10e1,	// (0x000151ea) bg_tb_trans_pane_cp01

0x40ec,	// (0x000181f5) popup_image_details_window_g1

0x40ff,	// (0x00018208) popup_image_details_window_g2

0x0002,

0xf6ca,	// (0x000237d3) popup_image_details_window_g

0x4128,	// (0x00018231) popup_image_details_window_t1

0x413a,	// (0x00018243) popup_image_details_window_t2

0x4153,	// (0x0001825c) popup_image_details_window_t3

0x4167,	// (0x00018270) popup_image_details_window_t4

0x4182,	// (0x0001828b) popup_image_details_window_t5

0x0004,

0xf6d1,	// (0x000237da) popup_image_details_window_t

0x183b,	// (0x00015944) bg_calc_paper_pane_ParamLimits

0x7635,	// (0x0001b73e) grid_highlight_pane_cp013

0x76fa,	// (0x0001b803) list_calc_pane_ParamLimits

0x770c,	// (0x0001b815) scroll_pane_cp024

0x186d,	// (0x00015976) bg_calc_display_pane_ParamLimits

0x7714,	// (0x0001b81d) calc_display_pane_t1_ParamLimits

0x7729,	// (0x0001b832) calc_display_pane_t2_ParamLimits

0x773e,	// (0x0001b847) calc_display_pane_t3_ParamLimits

0xf10c,	// (0x00023215) calc_display_pane_t_ParamLimits

0x779f,	// (0x0001b8a8) cell_calc_pane_g2

0x0001,

0xf129,	// (0x00023232) cell_calc_pane_g

0x77a8,	// (0x0001b8b1) cell_calc_pane_t1

0x1910,	// (0x00015a19) grid_highlight_pane_cp02_ParamLimits

0x1926,	// (0x00015a2f) toolbar_button_pane_cp01_ParamLimits

0x1926,	// (0x00015a2f) toolbar_button_pane_cp01

0x29a5,	// (0x00016aae) temp_image_control_pane_ParamLimits

0x29a5,	// (0x00016aae) temp_image_control_pane

0x7b40,	// (0x0001bc49) main_mp3_pane

0x419c,	// (0x000182a5) temp_image_control_pane_g1_ParamLimits

0x419c,	// (0x000182a5) temp_image_control_pane_g1

0x41aa,	// (0x000182b3) temp_image_control_pane_g2_ParamLimits

0x41aa,	// (0x000182b3) temp_image_control_pane_g2

0x41bc,	// (0x000182c5) temp_image_control_pane_g3_ParamLimits

0x41bc,	// (0x000182c5) temp_image_control_pane_g3

0xb11f,	// (0x0001f228) temp_image_control_pane_g4_ParamLimits

0xb11f,	// (0x0001f228) temp_image_control_pane_g4

0x0003,

0xf6dc,	// (0x000237e5) temp_image_control_pane_g_ParamLimits

0xf6dc,	// (0x000237e5) temp_image_control_pane_g

0x419c,	// (0x000182a5) main_mp3_pane_g1

0xb130,	// (0x0001f239) main_mp3_pane_g2

0x0007,

0xf6e5,	// (0x000237ee) main_mp3_pane_g

0x41f1,	// (0x000182fa) main_mp3_pane_t1

0x17e3,	// (0x000158ec) main_camera_pane_g8_ParamLimits

0x17e3,	// (0x000158ec) main_camera_pane_g8

0x929c,	// (0x0001d3a5) main_video_pane_g7_ParamLimits

0x929c,	// (0x0001d3a5) main_video_pane_g7

0x7ce5,	// (0x0001bdee) main_camera2_pane_t7_ParamLimits

0x7ce5,	// (0x0001bdee) main_camera2_pane_t7

0x1c9d,	// (0x00015da6) scroll_pane_cp025_ParamLimits

0x1c9d,	// (0x00015da6) scroll_pane_cp025

0x1cb1,	// (0x00015dba) scroll_pane_cp026_ParamLimits

0x1cb1,	// (0x00015dba) scroll_pane_cp026

0x1cc0,	// (0x00015dc9) wml_content_pane_ParamLimits

0x7635,	// (0x0001b73e) main_touch_calib_pane

0xb1c8,	// (0x0001f2d1) main_touch_calib_pane_g1

0xb1d4,	// (0x0001f2dd) main_touch_calib_pane_g2

0xb1e0,	// (0x0001f2e9) main_touch_calib_pane_g3

0xb1ec,	// (0x0001f2f5) main_touch_calib_pane_g4

0x0003,

0xf703,	// (0x0002380c) main_touch_calib_pane_g

0xb1f8,	// (0x0001f301) main_touch_calib_pane_t1

0xb20d,	// (0x0001f316) main_touch_calib_pane_t2

0x0004,

0xf70c,	// (0x00023815) main_touch_calib_pane_t

0x24a3,	// (0x000165ac) mup_progress_pane_cp02

0x24d8,	// (0x000165e1) navi_pane_g1

0x2563,	// (0x0001666c) navi_pane_mp_t3

0x7b40,	// (0x0001bc49) main_mp3_pane_ParamLimits

0xae03,	// (0x0001ef0c) navi_pane_ParamLimits

0x419c,	// (0x000182a5) main_mp3_pane_g1_ParamLimits

0xb130,	// (0x0001f239) main_mp3_pane_g2_ParamLimits

0xb13c,	// (0x0001f245) main_mp3_pane_g3_ParamLimits

0xb13c,	// (0x0001f245) main_mp3_pane_g3

0xb148,	// (0x0001f251) main_mp3_pane_g4_ParamLimits

0xb148,	// (0x0001f251) main_mp3_pane_g4

0x17d5,	// (0x000158de) main_mp3_pane_g5_ParamLimits

0x17d5,	// (0x000158de) main_mp3_pane_g5

0x41cc,	// (0x000182d5) main_mp3_pane_g6_ParamLimits

0x41cc,	// (0x000182d5) main_mp3_pane_g6

0x41d9,	// (0x000182e2) main_mp3_pane_g7_ParamLimits

0x41d9,	// (0x000182e2) main_mp3_pane_g7

0x41e5,	// (0x000182ee) main_mp3_pane_g8_ParamLimits

0x41e5,	// (0x000182ee) main_mp3_pane_g8

0xf6e5,	// (0x000237ee) main_mp3_pane_g_ParamLimits

0xb154,	// (0x0001f25d) main_mp3_pane_t2

0xb162,	// (0x0001f26b) main_mp3_pane_t3

0x41ff,	// (0x00018308) main_mp3_pane_t4

0x420d,	// (0x00018316) main_mp3_pane_t5

0x0005,

0xf6f6,	// (0x000237ff) main_mp3_pane_t

0x421b,	// (0x00018324) mup_progress_pane_cp01

0x744a,	// (0x0001b553) aid_zoom_text_secondary2

0x402e,	// (0x00018137) list_cale_ev2_pane

0x4036,	// (0x0001813f) scroll_pane_cp023_ParamLimits

0xb258,	// (0x0001f361) field_cale_ev2_pane_ParamLimits

0xb258,	// (0x0001f361) field_cale_ev2_pane

0x4223,	// (0x0001832c) field_cale_ev2_pane_g1_ParamLimits

0x4223,	// (0x0001832c) field_cale_ev2_pane_g1

0x422f,	// (0x00018338) field_cale_ev2_pane_g2_ParamLimits

0x422f,	// (0x00018338) field_cale_ev2_pane_g2

0x4247,	// (0x00018350) field_cale_ev2_pane_g3_ParamLimits

0x4247,	// (0x00018350) field_cale_ev2_pane_g3

0x0003,

0xf717,	// (0x00023820) field_cale_ev2_pane_g_ParamLimits

0xf717,	// (0x00023820) field_cale_ev2_pane_g

0x426b,	// (0x00018374) field_cale_ev2_pane_t1_ParamLimits

0x426b,	// (0x00018374) field_cale_ev2_pane_t1

0x4282,	// (0x0001838b) field_cale_ev2_pane_t2_ParamLimits

0x4282,	// (0x0001838b) field_cale_ev2_pane_t2

0x0001,

0xf720,	// (0x00023829) field_cale_ev2_pane_t_ParamLimits

0xf720,	// (0x00023829) field_cale_ev2_pane_t

0xa82a,	// (0x0001e933) main_postcard_pane_g5_ParamLimits

0xa82a,	// (0x0001e933) main_postcard_pane_g5

0xa836,	// (0x0001e93f) main_postcard_pane_g6_ParamLimits

0xa836,	// (0x0001e93f) main_postcard_pane_g6

0x26cf,	// (0x000167d8) camera2_autofocus_pane_cp_ParamLimits

0x26cf,	// (0x000167d8) camera2_autofocus_pane_cp

0x7b40,	// (0x0001bc49) main_mup3_pane

0xb2a7,	// (0x0001f3b0) main_mup3_pane_g1_ParamLimits

0xb2a7,	// (0x0001f3b0) main_mup3_pane_g1

0xb2c8,	// (0x0001f3d1) main_mup3_pane_g2_ParamLimits

0xb2c8,	// (0x0001f3d1) main_mup3_pane_g2

0xb335,	// (0x0001f43e) main_mup3_pane_g3_ParamLimits

0xb335,	// (0x0001f43e) main_mup3_pane_g3

0xb370,	// (0x0001f479) main_mup3_pane_g4_ParamLimits

0xb370,	// (0x0001f479) main_mup3_pane_g4

0xb3ab,	// (0x0001f4b4) main_mup3_pane_g5_ParamLimits

0xb3ab,	// (0x0001f4b4) main_mup3_pane_g5

0xb3e6,	// (0x0001f4ef) main_mup3_pane_g6_ParamLimits

0xb3e6,	// (0x0001f4ef) main_mup3_pane_g6

0x17e3,	// (0x000158ec) main_mup3_pane_g7_ParamLimits

0x17e3,	// (0x000158ec) main_mup3_pane_g7

0x0007,

0xf730,	// (0x00023839) main_mup3_pane_g_ParamLimits

0xf730,	// (0x00023839) main_mup3_pane_g

0xb454,	// (0x0001f55d) main_mup3_pane_t1_ParamLimits

0xb454,	// (0x0001f55d) main_mup3_pane_t1

0xb4b5,	// (0x0001f5be) main_mup3_pane_t2_ParamLimits

0xb4b5,	// (0x0001f5be) main_mup3_pane_t2

0xb570,	// (0x0001f679) main_mup3_pane_t4_ParamLimits

0xb570,	// (0x0001f679) main_mup3_pane_t4

0xb5b6,	// (0x0001f6bf) main_mup3_pane_t5_ParamLimits

0xb5b6,	// (0x0001f6bf) main_mup3_pane_t5

0xb65a,	// (0x0001f763) main_mup3_pane_t6_ParamLimits

0xb65a,	// (0x0001f763) main_mup3_pane_t6

0x0005,

0xf741,	// (0x0002384a) main_mup3_pane_t_ParamLimits

0xf741,	// (0x0002384a) main_mup3_pane_t

0xb702,	// (0x0001f80b) mup3_progress_pane_ParamLimits

0xb702,	// (0x0001f80b) mup3_progress_pane

0xb766,	// (0x0001f86f) popup_mup3_control_window_ParamLimits

0xb766,	// (0x0001f86f) popup_mup3_control_window

0x42cd,	// (0x000183d6) popup_mup3_text_window

0xb77f,	// (0x0001f888) mup3_progress_pane_t1

0xb79d,	// (0x0001f8a6) mup3_progress_pane_t2

0x42d5,	// (0x000183de) mup3_progress_pane_t3

0x0002,

0xf74e,	// (0x00023857) mup3_progress_pane_t

0x42f2,	// (0x000183fb) mup_progress_pane_cp03

0x108e,	// (0x00015197) bg_tb_trans_pane_cp04

0xb7bb,	// (0x0001f8c4) mup3_volume_pane

0xb7c3,	// (0x0001f8cc) popup_mup3_control_window_g1

0xb7cc,	// (0x0001f8d5) mup3_volume_pane_g1

0xb7d5,	// (0x0001f8de) mup3_volume_pane_g2

0xb7de,	// (0x0001f8e7) mup3_volume_pane_g3

0x0002,

0xf755,	// (0x0002385e) mup3_volume_pane_g

0x108e,	// (0x00015197) bg_tb_trans_pane_cp03

0x4302,	// (0x0001840b) popup_mup3_text_window_g1

0x430a,	// (0x00018413) popup_mup3_text_window_t1

0x18f1,	// (0x000159fa) list_calc_item_pane_g1_ParamLimits

0x3d46,	// (0x00017e4f) mup_volume_pane_cp_g1

0xb222,	// (0x0001f32b) main_touch_calib_pane_t3

0xb234,	// (0x0001f33d) main_touch_calib_pane_t4

0xb246,	// (0x0001f34f) main_touch_calib_pane_t5

0x740a,	// (0x0001b513) aid_cell_size_toolbar2

0x7412,	// (0x0001b51b) aid_popup3_width_pane

0x744a,	// (0x0001b553) aid_zoom_text_msg_primary

0x1b04,	// (0x00015c0d) vorec_t7

0x18b5,	// (0x000159be) bg_calc_paper_pane_g1_ParamLimits

0x18cd,	// (0x000159d6) bg_calc_paper_pane_g2_ParamLimits

0x18c1,	// (0x000159ca) bg_calc_paper_pane_g3_ParamLimits

0x18e5,	// (0x000159ee) bg_calc_paper_pane_g4_ParamLimits

0x18d9,	// (0x000159e2) bg_calc_paper_pane_g5_ParamLimits

0x8c59,	// (0x0001cd62) bg_calc_paper_pane_g6_ParamLimits

0x8c68,	// (0x0001cd71) bg_calc_paper_pane_g7_ParamLimits

0x8c77,	// (0x0001cd80) bg_calc_paper_pane_g8_ParamLimits

0xf113,	// (0x0002321c) bg_calc_paper_pane_g_ParamLimits

0x8c86,	// (0x0001cd8f) calc_bg_paper_pane_g9_ParamLimits

0x918e,	// (0x0001d297) image_qvga_pane_ParamLimits

0x918e,	// (0x0001d297) image_qvga_pane

0x175b,	// (0x00015864) bg_popup_sub_pane_cp04_ParamLimits

0x28dc,	// (0x000169e5) popup_mup_playback_window_g1_ParamLimits

0x28e8,	// (0x000169f1) popup_mup_playback_window_t1_ParamLimits

0x28fd,	// (0x00016a06) popup_mup_playback_window_t2_ParamLimits

0xf488,	// (0x00023591) popup_mup_playback_window_t_ParamLimits

0x17d5,	// (0x000158de) main_mup2_pane_g3_ParamLimits

0x17d5,	// (0x000158de) main_mup2_pane_g3

0x9461,	// (0x0001d56a) popup_toolbar_window_cp04

0x2ce6,	// (0x00016def) popup_call2_audio_second_window_g3_ParamLimits

0x2ce6,	// (0x00016def) popup_call2_audio_second_window_g3

0x3124,	// (0x0001722d) popup_call2_audio_first_window_g4_ParamLimits

0x3124,	// (0x0001722d) popup_call2_audio_first_window_g4

0x37a3,	// (0x000178ac) popup_call2_audio_in_window_g4_ParamLimits

0x37a3,	// (0x000178ac) popup_call2_audio_in_window_g4

0xa921,	// (0x0001ea2a) aid_area_sk_bg_cut_ParamLimits

0xa921,	// (0x0001ea2a) aid_area_sk_bg_cut

0x2912,	// (0x00016a1b) aid_area_sk_bg_cut_2_ParamLimits

0x2912,	// (0x00016a1b) aid_area_sk_bg_cut_2

0x108e,	// (0x00015197) aid_placing_details_win

0x108e,	// (0x00015197) aid_placing_details_win_2

0x17d5,	// (0x000158de) camera2_autofocus_pane_g1_ParamLimits

0x75d1,	// (0x0001b6da) popup_fixed_preview_cale_window_ParamLimits

0x75d1,	// (0x0001b6da) popup_fixed_preview_cale_window

0x25f4,	// (0x000166fd) navi_slider_pane_g3

0x25eb,	// (0x000166f4) navi_slider_pane_g4

0x25e2,	// (0x000166eb) navi_slider_pane_g5

0x25f4,	// (0x000166fd) navi_slider_pane_g6

0x7abb,	// (0x0001bbc4) navi_slider_pane_g7

0x274d,	// (0x00016856) mup_scale_pane_g3

0x2756,	// (0x0001685f) mup_scale_pane_g4

0x275f,	// (0x00016868) mup_scale_pane_g5

0xa720,	// (0x0001e829) mup_scale_pane_g6

0xa729,	// (0x0001e832) mup_scale_pane_g7

0x545f,	// (0x00019568) cams2_slider_pane_g3

0x545f,	// (0x00019568) cams2_slider_pane_g4

0x545f,	// (0x00019568) cams2_slider_pane_g5

0x545f,	// (0x00019568) cams2_slider_pane_g6

0x545f,	// (0x00019568) cams2_slider_pane_g7

0x1b4a,	// (0x00015c53) camera2_autofocus_pane_cp_g1

0x3b5c,	// (0x00017c65) bg_popup_preview_window_pane_cp02_ParamLimits

0x3b5c,	// (0x00017c65) bg_popup_preview_window_pane_cp02

0x4318,	// (0x00018421) list_fp_cale_pane_ParamLimits

0x4318,	// (0x00018421) list_fp_cale_pane

0x4324,	// (0x0001842d) popup_fixed_preview_cale_window_t1_ParamLimits

0x4324,	// (0x0001842d) popup_fixed_preview_cale_window_t1

0xb7e7,	// (0x0001f8f0) popup_fixed_preview_cale_window_t2_ParamLimits

0xb7e7,	// (0x0001f8f0) popup_fixed_preview_cale_window_t2

0xb7fc,	// (0x0001f905) popup_fixed_preview_cale_window_t3_ParamLimits

0xb7fc,	// (0x0001f905) popup_fixed_preview_cale_window_t3

0x0002,

0xf75c,	// (0x00023865) popup_fixed_preview_cale_window_t_ParamLimits

0xf75c,	// (0x00023865) popup_fixed_preview_cale_window_t

0xb811,	// (0x0001f91a) list_single_fp_cale_pane_ParamLimits

0xb811,	// (0x0001f91a) list_single_fp_cale_pane

0x4342,	// (0x0001844b) list_single_fp_cale_pane_g1_ParamLimits

0x4342,	// (0x0001844b) list_single_fp_cale_pane_g1

0x434e,	// (0x00018457) list_single_fp_cale_pane_g2_ParamLimits

0x434e,	// (0x00018457) list_single_fp_cale_pane_g2

0x0002,

0xf763,	// (0x0002386c) list_single_fp_cale_pane_g_ParamLimits

0xf763,	// (0x0002386c) list_single_fp_cale_pane_g

0x4367,	// (0x00018470) list_single_fp_cale_pane_t1_ParamLimits

0x4367,	// (0x00018470) list_single_fp_cale_pane_t1

0x4379,	// (0x00018482) list_single_fp_cale_pane_t2_ParamLimits

0x4379,	// (0x00018482) list_single_fp_cale_pane_t2

0x0001,

0xf76a,	// (0x00023873) list_single_fp_cale_pane_t_ParamLimits

0xf76a,	// (0x00023873) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x7635,	// (0x0001b73e) main_dialer_pane

0xb821,	// (0x0001f92a) aid_cell_size_keypad

0x108e,	// (0x00015197) dialer_ne_pane

0x108e,	// (0x00015197) grid_dialer_command_1_pane

0x108e,	// (0x00015197) grid_dialer_command_2_pane

0x108e,	// (0x00015197) grid_dialer_keypad_pane

0x3c7d,	// (0x00017d86) bg_popup_call_pane_cp06_ParamLimits

0x3c7d,	// (0x00017d86) bg_popup_call_pane_cp06

0x3c7d,	// (0x00017d86) dialer_ne_clear_pane_ParamLimits

0x3c7d,	// (0x00017d86) dialer_ne_clear_pane

0x1b4a,	// (0x00015c53) dialer_ne_pane_g1

0x26bb,	// (0x000167c4) dialer_ne_pane_t1_ParamLimits

0x26bb,	// (0x000167c4) dialer_ne_pane_t1

0x4585,	// (0x0001868e) dialer_ne_pane_t2_ParamLimits

0x4585,	// (0x0001868e) dialer_ne_pane_t2

0xb82b,	// (0x0001f934) dialer_ne_pane_t3_ParamLimits

0xb82b,	// (0x0001f934) dialer_ne_pane_t3

0x0002,

0xf76f,	// (0x00023878) dialer_ne_pane_t_ParamLimits

0xf76f,	// (0x00023878) dialer_ne_pane_t

0xb82b,	// (0x0001f934) dialer_ne_pane_t3_copy1_ParamLimits

0xb82b,	// (0x0001f934) dialer_ne_pane_t3_copy1

0xb84d,	// (0x0001f956) cell_dialer_keypad_pane_ParamLimits

0xb84d,	// (0x0001f956) cell_dialer_keypad_pane

0xb855,	// (0x0001f95e) cell_dialer_command_1_pane_ParamLimits

0xb855,	// (0x0001f95e) cell_dialer_command_1_pane

0xb84d,	// (0x0001f956) cell_dialer_command_2_pane_ParamLimits

0xb84d,	// (0x0001f956) cell_dialer_command_2_pane

0x10e1,	// (0x000151ea) bg_button_pane_cp02_ParamLimits

0x10e1,	// (0x000151ea) bg_button_pane_cp02

0x17d5,	// (0x000158de) cell_dialer_keypad_pane_g1_ParamLimits

0x17d5,	// (0x000158de) cell_dialer_keypad_pane_g1

0x10e1,	// (0x000151ea) bg_button_pane_cp03_ParamLimits

0x10e1,	// (0x000151ea) bg_button_pane_cp03

0x17d5,	// (0x000158de) cell_dialer_command_1_pane_g1_ParamLimits

0x17d5,	// (0x000158de) cell_dialer_command_1_pane_g1

0x108e,	// (0x00015197) bg_button_pane_cp04

0x1b4a,	// (0x00015c53) cell_dialer_command_2_pane_g1

0x108e,	// (0x00015197) bg_button_pane_cp06

0x1b4a,	// (0x00015c53) dialer_ne_clear_pane_g1

0x24e4,	// (0x000165ed) navi_pane_g2

0xa52b,	// (0x0001e634) navi_pane_g3

0x0002,

0xf38b,	// (0x00023494) navi_pane_g

0x2571,	// (0x0001667a) navi_pane_mv_g2

0x2598,	// (0x000166a1) navi_pane_mv_g5

0xa548,	// (0x0001e651) navi_pane_mv_t1

0x186d,	// (0x00015976) main_clock2_pane

0xb89a,	// (0x0001f9a3) main_clock2_list_pane_ParamLimits

0xb89a,	// (0x0001f9a3) main_clock2_list_pane

0xb8c0,	// (0x0001f9c9) main_clock2_pane_t1_ParamLimits

0xb8c0,	// (0x0001f9c9) main_clock2_pane_t1

0xb8e0,	// (0x0001f9e9) main_clock2_pane_t2_ParamLimits

0xb8e0,	// (0x0001f9e9) main_clock2_pane_t2

0x0004,

0xf77b,	// (0x00023884) main_clock2_pane_t_ParamLimits

0xf77b,	// (0x00023884) main_clock2_pane_t

0xb939,	// (0x0001fa42) popup_clock_analogue_window_cp03_ParamLimits

0xb939,	// (0x0001fa42) popup_clock_analogue_window_cp03

0xb957,	// (0x0001fa60) popup_clock_digital_window_cp02_ParamLimits

0xb957,	// (0x0001fa60) popup_clock_digital_window_cp02

0xb9c4,	// (0x0001facd) main_clock2_list_single_pane_ParamLimits

0xb9c4,	// (0x0001facd) main_clock2_list_single_pane

0x1ad2,	// (0x00015bdb) list_highlight_pane_cp05

0x43dc,	// (0x000184e5) main_clock2_list_single_pane_t1

0x9461,	// (0x0001d56a) popup_toolbar_window_cp04_ParamLimits

0x17e3,	// (0x000158ec) camera2_autofocus_pane_g2_ParamLimits

0x17e3,	// (0x000158ec) camera2_autofocus_pane_g2

0x17e3,	// (0x000158ec) camera2_autofocus_pane_g3_ParamLimits

0x17e3,	// (0x000158ec) camera2_autofocus_pane_g3

0x17e3,	// (0x000158ec) camera2_autofocus_pane_g4_ParamLimits

0x17e3,	// (0x000158ec) camera2_autofocus_pane_g4

0x17e3,	// (0x000158ec) camera2_autofocus_pane_g5_ParamLimits

0x17e3,	// (0x000158ec) camera2_autofocus_pane_g5

0x0004,

0xf6bf,	// (0x000237c8) camera2_autofocus_pane_g_ParamLimits

0xf6bf,	// (0x000237c8) camera2_autofocus_pane_g

0xb26e,	// (0x0001f377) camera2_autofocus_pane_cp_g2

0xb276,	// (0x0001f37f) camera2_autofocus_pane_cp_g3

0xb27e,	// (0x0001f387) camera2_autofocus_pane_cp_g4

0xb286,	// (0x0001f38f) camera2_autofocus_pane_cp_g5

0x0004,

0xf725,	// (0x0002382e) camera2_autofocus_pane_cp_g

0x108e,	// (0x00015197) popup_dialer_spcha_window

0x108e,	// (0x00015197) bg_popup_sub_pane_cp07

0x108e,	// (0x00015197) list_spcha_pane

0x108e,	// (0x00015197) list_single_spcha_pane_ParamLimits

0x108e,	// (0x00015197) list_single_spcha_pane

0x108e,	// (0x00015197) list_highlight_pane_cp06

0x43ea,	// (0x000184f3) list_single_spcha_pane_t1

0x354d,	// (0x00017656) popup_call2_audio_out_window_g4_ParamLimits

0x354d,	// (0x00017656) popup_call2_audio_out_window_g4

0x7635,	// (0x0001b73e) main_imed2_pane

0x7bcc,	// (0x0001bcd5) popup_imed_adjust2_window

0x7bdd,	// (0x0001bce6) popup_imed_trans_window_ParamLimits

0x7bdd,	// (0x0001bce6) popup_imed_trans_window

0x3e19,	// (0x00017f22) popup_blid_sat_info2_window_t1

0x3e27,	// (0x00017f30) popup_blid_sat_info2_window_t2

0x000a,

0xf654,	// (0x0002375d) popup_blid_sat_info2_window_t

0xb9f6,	// (0x0001faff) aid_size_cell_colour_35

0xba0d,	// (0x0001fb16) aid_size_cell_colour_112

0xba24,	// (0x0001fb2d) aid_size_cell_effect

0x10e1,	// (0x000151ea) bg_tb_trans_pane_cp02

0x4297,	// (0x000183a0) heading_imed_pane

0xba3e,	// (0x0001fb47) listscroll_imed_pane

0x43fa,	// (0x00018503) heading_imed_pane_g1

0x4402,	// (0x0001850b) heading_imed_pane_t1

0x4410,	// (0x00018519) grid_imed_colour_35_pane_ParamLimits

0x4410,	// (0x00018519) grid_imed_colour_35_pane

0xba4a,	// (0x0001fb53) grid_imed_effect_pane

0x4423,	// (0x0001852c) list_imed_aspect_pane

0xba56,	// (0x0001fb5f) scroll_pane_cp027_ParamLimits

0xba56,	// (0x0001fb5f) scroll_pane_cp027

0xba62,	// (0x0001fb6b) cell_imed_effect_pane_ParamLimits

0xba62,	// (0x0001fb6b) cell_imed_effect_pane

0x442b,	// (0x00018534) cell_imed_colour_pane_ParamLimits

0x442b,	// (0x00018534) cell_imed_colour_pane

0x4465,	// (0x0001856e) cell_imed_colour_pane_g1_ParamLimits

0x4465,	// (0x0001856e) cell_imed_colour_pane_g1

0x4476,	// (0x0001857f) hgihlgiht_grid_pane_cp016_ParamLimits

0x4476,	// (0x0001857f) hgihlgiht_grid_pane_cp016

0xba78,	// (0x0001fb81) cell_imed_effect_pane_g1

0xba80,	// (0x0001fb89) grid_highlight_pane_cp017

0x4487,	// (0x00018590) list_imed_single_pane_ParamLimits

0x4487,	// (0x00018590) list_imed_single_pane

0x108e,	// (0x00015197) list_highlight_pane_cp07

0x449a,	// (0x000185a3) list_imed_aspect_pane_comp1_t1

0x26dd,	// (0x000167e6) bg_tb_trans_pane_cp05

0x44ba,	// (0x000185c3) popup_imed_adjust2_window_g1

0x44e1,	// (0x000185ea) popup_imed_adjust2_window_t1

0x44f9,	// (0x00018602) slider_imed_adjust_pane

0x450d,	// (0x00018616) slider_imed_adjust_pane_g1

0x451d,	// (0x00018626) slider_imed_adjust_pane_g2

0x452d,	// (0x00018636) slider_imed_adjust_pane_g3

0x453e,	// (0x00018647) slider_imed_adjust_pane_g4

0x0003,

0xf798,	// (0x000238a1) slider_imed_adjust_pane_g

0xba89,	// (0x0001fb92) aid_size_cell_clipart2

0xba95,	// (0x0001fb9e) grid_imed_clipart_pane

0x454f,	// (0x00018658) scroll_pane_cp031

0xba9f,	// (0x0001fba8) cell_imed_clipart_pane_ParamLimits

0xba9f,	// (0x0001fba8) cell_imed_clipart_pane

0xbab6,	// (0x0001fbbf) cell_imed_clipart_pane_g1

0x108e,	// (0x00015197) grid_highlight_pane_cp014

0xb8a6,	// (0x0001f9af) main_clock2_pane_g1_ParamLimits

0xb8a6,	// (0x0001f9af) main_clock2_pane_g1

0xb96f,	// (0x0001fa78) aid_call2_pane_cp10

0xb981,	// (0x0001fa8a) aid_call_pane_cp10

0x2473,	// (0x0001657c) popup_clock_analogue_window_cp10_g1

0x2473,	// (0x0001657c) popup_clock_analogue_window_cp10_g2

0xb993,	// (0x0001fa9c) popup_clock_analogue_window_cp10_g3

0xb993,	// (0x0001fa9c) popup_clock_analogue_window_cp10_g4

0x2473,	// (0x0001657c) popup_clock_analogue_window_cp10_g5

0x0004,

0xf786,	// (0x0002388f) popup_clock_analogue_window_cp10_g

0xb9a5,	// (0x0001faae) popup_clock_analogue_window_cp10_t1

0x7d69,	// (0x0001be72) clock_digital_number_pane_cp10_ParamLimits

0x7d69,	// (0x0001be72) clock_digital_number_pane_cp10

0x7d81,	// (0x0001be8a) clock_digital_number_pane_cp11_ParamLimits

0x7d81,	// (0x0001be8a) clock_digital_number_pane_cp11

0x7d99,	// (0x0001bea2) clock_digital_number_pane_cp12_ParamLimits

0x7d99,	// (0x0001bea2) clock_digital_number_pane_cp12

0x7db1,	// (0x0001beba) clock_digital_number_pane_cp13_ParamLimits

0x7db1,	// (0x0001beba) clock_digital_number_pane_cp13

0x7dc9,	// (0x0001bed2) clock_digital_separator_pane_cp10_ParamLimits

0x7dc9,	// (0x0001bed2) clock_digital_separator_pane_cp10

0xb9d6,	// (0x0001fadf) popup_clock_digital_window_cp02_t1_ParamLimits

0xb9d6,	// (0x0001fadf) popup_clock_digital_window_cp02_t1

0x1753,	// (0x0001585c) clock_digital_number_pane_cp10_g1

0x1753,	// (0x0001585c) clock_digital_number_pane_cp10_g2

0x0001,

0xf7a1,	// (0x000238aa) clock_digital_number_pane_cp10_g

0x1753,	// (0x0001585c) clock_digital_separator_pane_cp10_g1

0x1753,	// (0x0001585c) clock_digital_separator_pane_g2_cp10

0x25a0,	// (0x000166a9) navi_pane_vded_g4

0x25a9,	// (0x000166b2) navi_pane_vded_g5

0x25b2,	// (0x000166bb) navi_pane_vded_t1

0x7635,	// (0x0001b73e) main_vded_pane

0xbabf,	// (0x0001fbc8) main_vded_pane_g1

0xbac7,	// (0x0001fbd0) main_vded_pane_g2

0xbacf,	// (0x0001fbd8) main_vded_pane_g3

0x0002,

0xf7a6,	// (0x000238af) main_vded_pane_g

0xbad7,	// (0x0001fbe0) main_vded_pane_t1

0xbae5,	// (0x0001fbee) main_vded_pane_t2

0x0001,

0xf7ad,	// (0x000238b6) main_vded_pane_t

0xbaf3,	// (0x0001fbfc) vded_slider_pane

0xbafb,	// (0x0001fc04) vded_video_pane

0x4557,	// (0x00018660) vded_video_pane_g1

0xbb03,	// (0x0001fc0c) vded_video_pane_g2

0x1b4a,	// (0x00015c53) vded_video_pane_g3

0x0002,

0xf7b2,	// (0x000238bb) vded_video_pane_g

0x4561,	// (0x0001866a) vded_slider_pane_g1

0x3d46,	// (0x00017e4f) vded_slider_pane_g2

0x456a,	// (0x00018673) vded_slider_pane_g3

0x4573,	// (0x0001867c) vded_slider_pane_g4

0x457c,	// (0x00018685) vded_slider_pane_g5

0x0004,

0xf7b9,	// (0x000238c2) vded_slider_pane_g

0xb75a,	// (0x0001f863) mup3_rocker_pane_ParamLimits

0xb75a,	// (0x0001f863) mup3_rocker_pane

0xbb0c,	// (0x0001fc15) mup3_control_keys_pane_g1

0xbb14,	// (0x0001fc1d) mup3_control_keys_pane_g2

0xbb1c,	// (0x0001fc25) mup3_control_keys_pane_g3

0xbb24,	// (0x0001fc2d) mup3_control_keys_pane_g4

0x0003,

0xf7c4,	// (0x000238cd) mup3_control_keys_pane_g

0x75f5,	// (0x0001b6fe) popup_toolbar2_fixed_window_cp01_ParamLimits

0x75f5,	// (0x0001b6fe) popup_toolbar2_fixed_window_cp01

0xb772,	// (0x0001f87b) popup_toolbar2_fixed_window_cp02_ParamLimits

0xb772,	// (0x0001f87b) popup_toolbar2_fixed_window_cp02

0x2e58,	// (0x00016f61) popup_call2_audio_second_window_t4_ParamLimits

0x2e58,	// (0x00016f61) popup_call2_audio_second_window_t4

0x33ba,	// (0x000174c3) popup_call2_audio_first_window_t6_ParamLimits

0x33ba,	// (0x000174c3) popup_call2_audio_first_window_t6

0x3650,	// (0x00017759) popup_call2_audio_out_window_t6_ParamLimits

0x3650,	// (0x00017759) popup_call2_audio_out_window_t6

0x7635,	// (0x0001b73e) main_vitu_pane

0x26cf,	// (0x000167d8) aid_size_cell_itu_ParamLimits

0x26cf,	// (0x000167d8) aid_size_cell_itu

0x26cf,	// (0x000167d8) bg_popup_window_pane_cp08_ParamLimits

0x26cf,	// (0x000167d8) bg_popup_window_pane_cp08

0x26cf,	// (0x000167d8) field_vitu_entry_pane_ParamLimits

0x26cf,	// (0x000167d8) field_vitu_entry_pane

0x26cf,	// (0x000167d8) grid_vitu_function_pane_ParamLimits

0x26cf,	// (0x000167d8) grid_vitu_function_pane

0x26cf,	// (0x000167d8) grid_vitu_itu_pane_ParamLimits

0x26cf,	// (0x000167d8) grid_vitu_itu_pane

0xbb34,	// (0x0001fc3d) cell_vitu_itu_pane_ParamLimits

0xbb34,	// (0x0001fc3d) cell_vitu_itu_pane

0x26cf,	// (0x000167d8) cell_vitu_function_pane_ParamLimits

0x26cf,	// (0x000167d8) cell_vitu_function_pane

0x10e1,	// (0x000151ea) bg_popup_sub_pane_cp08_ParamLimits

0x10e1,	// (0x000151ea) bg_popup_sub_pane_cp08

0x1b1c,	// (0x00015c25) field_vitu_entry_pane_t1_ParamLimits

0x1b1c,	// (0x00015c25) field_vitu_entry_pane_t1

0x4585,	// (0x0001868e) field_vitu_entry_pane_t2_ParamLimits

0x4585,	// (0x0001868e) field_vitu_entry_pane_t2

0x0001,

0xf7d2,	// (0x000238db) field_vitu_entry_pane_t_ParamLimits

0xf7d2,	// (0x000238db) field_vitu_entry_pane_t

0x3c7d,	// (0x00017d86) bg_button_pane_cp05_ParamLimits

0x3c7d,	// (0x00017d86) bg_button_pane_cp05

0x45a2,	// (0x000186ab) cell_vitu_itu_pane_g1

0x26a7,	// (0x000167b0) cell_vitu_itu_pane_t1_ParamLimits

0x26a7,	// (0x000167b0) cell_vitu_itu_pane_t1

0x26a7,	// (0x000167b0) cell_vitu_itu_pane_t2_ParamLimits

0x26a7,	// (0x000167b0) cell_vitu_itu_pane_t2

0x0002,

0xf7d7,	// (0x000238e0) cell_vitu_itu_pane_t_ParamLimits

0xf7d7,	// (0x000238e0) cell_vitu_itu_pane_t

0x108e,	// (0x00015197) bg_button_pane_cp07

0x1b4a,	// (0x00015c53) cell_vitu_function_pane_g1

0x76f2,	// (0x0001b7fb) main_calc_pane_g1

0x7442,	// (0x0001b54b) aid_visual_content_pane

0x7635,	// (0x0001b73e) main_vradio_pane

0x17e3,	// (0x000158ec) main_vradio_pane_g1_ParamLimits

0x17e3,	// (0x000158ec) main_vradio_pane_g1

0x17e3,	// (0x000158ec) main_vradio_pane_g2_ParamLimits

0x17e3,	// (0x000158ec) main_vradio_pane_g2

0x0001,

0xf7de,	// (0x000238e7) main_vradio_pane_g_ParamLimits

0xf7de,	// (0x000238e7) main_vradio_pane_g

0x26bb,	// (0x000167c4) main_vradio_pane_t1_ParamLimits

0x26bb,	// (0x000167c4) main_vradio_pane_t1

0x26bb,	// (0x000167c4) main_vradio_pane_t2_ParamLimits

0x26bb,	// (0x000167c4) main_vradio_pane_t2

0x26bb,	// (0x000167c4) main_vradio_pane_t3_ParamLimits

0x26bb,	// (0x000167c4) main_vradio_pane_t3

0x0002,

0xf7e3,	// (0x000238ec) main_vradio_pane_t_ParamLimits

0xf7e3,	// (0x000238ec) main_vradio_pane_t

0x26cf,	// (0x000167d8) vradio_rocker_control_pane_ParamLimits

0x26cf,	// (0x000167d8) vradio_rocker_control_pane

0x26cf,	// (0x000167d8) vradio_station_info_pane_ParamLimits

0x26cf,	// (0x000167d8) vradio_station_info_pane

0x10e1,	// (0x000151ea) vradio_frequency_info_pane_ParamLimits

0x10e1,	// (0x000151ea) vradio_frequency_info_pane

0x1b4a,	// (0x00015c53) vradio_station_info_pane_g1

0x26a7,	// (0x000167b0) vradio_station_info_pane_t1_ParamLimits

0x26a7,	// (0x000167b0) vradio_station_info_pane_t1

0x26bb,	// (0x000167c4) vradio_station_info_pane_t2_ParamLimits

0x26bb,	// (0x000167c4) vradio_station_info_pane_t2

0x0001,

0xf7ea,	// (0x000238f3) vradio_station_info_pane_t_ParamLimits

0xf7ea,	// (0x000238f3) vradio_station_info_pane_t

0x108e,	// (0x00015197) vradio_tuning_pane

0xbb42,	// (0x0001fc4b) vradio_rocker_control_pane_g1

0x45be,	// (0x000186c7) vradio_rocker_control_pane_g2

0xbb4a,	// (0x0001fc53) vradio_rocker_control_pane_g3

0xbb52,	// (0x0001fc5b) vradio_rocker_control_pane_g4

0xbb5a,	// (0x0001fc63) vradio_rocker_control_pane_g5

0x0004,

0xf7ef,	// (0x000238f8) vradio_rocker_control_pane_g

0x1b4a,	// (0x00015c53) vradio_frequency_info_pane_g1

0x1b1c,	// (0x00015c25) vradio_frequency_info_pane_t1_ParamLimits

0x1b1c,	// (0x00015c25) vradio_frequency_info_pane_t1

0xbb62,	// (0x0001fc6b) vradio_tuning_pane_g1

0xbb6b,	// (0x0001fc74) vradio_tuning_pane_t1

0x745a,	// (0x0001b563) area_side_right_pane_ParamLimits

0x745a,	// (0x0001b563) area_side_right_pane

0x3b23,	// (0x00017c2c) status_small_pane_g1

0x3b2b,	// (0x00017c34) status_small_pane_g2

0x3b34,	// (0x00017c3d) status_small_pane_g3

0x3b3d,	// (0x00017c46) status_small_pane_g4

0x0003,

0xf5b6,	// (0x000236bf) status_small_pane_g

0x3b46,	// (0x00017c4f) status_small_pane_t1

0x7635,	// (0x0001b73e) main_video3_pane

0x45c6,	// (0x000186cf) cams_zoom_vslider_pane

0x45ce,	// (0x000186d7) image3_wide_pane_ParamLimits

0x45ce,	// (0x000186d7) image3_wide_pane

0x45e8,	// (0x000186f1) image3_wide_small_pane

0x45f2,	// (0x000186fb) main_video3_pane_g1_ParamLimits

0x45f2,	// (0x000186fb) main_video3_pane_g1

0x460e,	// (0x00018717) main_video3_pane_g2_ParamLimits

0x460e,	// (0x00018717) main_video3_pane_g2

0x0001,

0xf7fa,	// (0x00023903) main_video3_pane_g_ParamLimits

0xf7fa,	// (0x00023903) main_video3_pane_g

0x462a,	// (0x00018733) main_video3_pane_t1_ParamLimits

0x462a,	// (0x00018733) main_video3_pane_t1

0x4655,	// (0x0001875e) main_video3_pane_t2_ParamLimits

0x4655,	// (0x0001875e) main_video3_pane_t2

0x4680,	// (0x00018789) main_video3_pane_t3_ParamLimits

0x4680,	// (0x00018789) main_video3_pane_t3

0x0002,

0xf7ff,	// (0x00023908) main_video3_pane_t_ParamLimits

0xf7ff,	// (0x00023908) main_video3_pane_t

0x46ab,	// (0x000187b4) cams_zoom_vslider_pane_g1

0x46b4,	// (0x000187bd) cams_zoom_vslider_pane_g2

0x0001,

0xf806,	// (0x0002390f) cams_zoom_vslider_pane_g

0x46bc,	// (0x000187c5) small_slider_vertical_pane

0x1b4a,	// (0x00015c53) small_slider_vertical_pane_g1

0x1b4a,	// (0x00015c53) small_slider_vertical_pane_g2

0x46c4,	// (0x000187cd) small_slider_vertical_pane_g3

0x0002,

0xf80b,	// (0x00023914) small_slider_vertical_pane_g

0x7635,	// (0x0001b73e) main_hwr_training_pane

0x46cd,	// (0x000187d6) hwr_training_instruct_pane_ParamLimits

0x46cd,	// (0x000187d6) hwr_training_instruct_pane

0xbb7a,	// (0x0001fc83) hwr_training_navi_pane_ParamLimits

0xbb7a,	// (0x0001fc83) hwr_training_navi_pane

0xbb8e,	// (0x0001fc97) hwr_training_write_pane_ParamLimits

0xbb8e,	// (0x0001fc97) hwr_training_write_pane

0x108e,	// (0x00015197) bg_frame_shadow_pane

0x46fc,	// (0x00018805) hwr_training_write_pane_g1

0x4704,	// (0x0001880d) hwr_training_write_pane_g2

0x470c,	// (0x00018815) hwr_training_write_pane_g3

0x4714,	// (0x0001881d) hwr_training_write_pane_g4

0x471c,	// (0x00018825) hwr_training_write_pane_g5

0x4724,	// (0x0001882d) hwr_training_write_pane_g6

0x472c,	// (0x00018835) hwr_training_write_pane_g7

0x0006,

0xf812,	// (0x0002391b) hwr_training_write_pane_g

0x7de1,	// (0x0001beea) hwr_training_navi_pane_g1_ParamLimits

0x7de1,	// (0x0001beea) hwr_training_navi_pane_g1

0x7df3,	// (0x0001befc) hwr_training_navi_pane_g2_ParamLimits

0x7df3,	// (0x0001befc) hwr_training_navi_pane_g2

0x7e05,	// (0x0001bf0e) hwr_training_navi_pane_g3_ParamLimits

0x7e05,	// (0x0001bf0e) hwr_training_navi_pane_g3

0x7e15,	// (0x0001bf1e) hwr_training_navi_pane_g4_ParamLimits

0x7e15,	// (0x0001bf1e) hwr_training_navi_pane_g4

0x0004,

0xf821,	// (0x0002392a) hwr_training_navi_pane_g_ParamLimits

0xf821,	// (0x0002392a) hwr_training_navi_pane_g

0x7e2f,	// (0x0001bf38) hwr_training_navi_pane_t1

0xbbbc,	// (0x0001fcc5) list_single_hwr_training_instruct_pane_ParamLimits

0xbbbc,	// (0x0001fcc5) list_single_hwr_training_instruct_pane

0x4783,	// (0x0001888c) list_single_hwr_training_instruct_pane_t1

0x3ef5,	// (0x00017ffe) bg_frame_shadow_pane_g1

0x4792,	// (0x0001889b) bg_frame_shadow_pane_g2

0x479a,	// (0x000188a3) bg_frame_shadow_pane_g3

0x47a2,	// (0x000188ab) bg_frame_shadow_pane_g4

0x47aa,	// (0x000188b3) bg_frame_shadow_pane_g5

0x47b2,	// (0x000188bb) bg_frame_shadow_pane_g6

0x47ba,	// (0x000188c3) bg_frame_shadow_pane_g7

0x1986,	// (0x00015a8f) bg_frame_shadow_pane_g8

0x0007,

0xf82c,	// (0x00023935) bg_frame_shadow_pane_g

0x7635,	// (0x0001b73e) main_video_tele_dialer_pane

0x7e3d,	// (0x0001bf46) aid_size_cell_video_keypad_ParamLimits

0x7e3d,	// (0x0001bf46) aid_size_cell_video_keypad

0x7e4d,	// (0x0001bf56) grid_video_dialer_keypad_pane_ParamLimits

0x7e4d,	// (0x0001bf56) grid_video_dialer_keypad_pane

0x7e7d,	// (0x0001bf86) video_down_pane_cp_ParamLimits

0x7e7d,	// (0x0001bf86) video_down_pane_cp

0x7e89,	// (0x0001bf92) cell_video_dialer_keypad_pane_ParamLimits

0x7e89,	// (0x0001bf92) cell_video_dialer_keypad_pane

0x47c2,	// (0x000188cb) bg_button_pane_cp08_ParamLimits

0x47c2,	// (0x000188cb) bg_button_pane_cp08

0xbbf0,	// (0x0001fcf9) cell_video_dialer_keypad_pane_g1_ParamLimits

0xbbf0,	// (0x0001fcf9) cell_video_dialer_keypad_pane_g1

0xb74e,	// (0x0001f857) mup3_rocker2_pane_ParamLimits

0xb74e,	// (0x0001f857) mup3_rocker2_pane

0x1b4a,	// (0x00015c53) mup3_rocker2_pane_g1

0x7b4e,	// (0x0001bc57) main_dialer2_pane

0x7635,	// (0x0001b73e) main_mp4_pane

0x7ebc,	// (0x0001bfc5) main_mp4_pane_g1_ParamLimits

0x7ebc,	// (0x0001bfc5) main_mp4_pane_g1

0x7eca,	// (0x0001bfd3) main_mp4_pane_g2_ParamLimits

0x7eca,	// (0x0001bfd3) main_mp4_pane_g2

0x7ed8,	// (0x0001bfe1) main_mp4_pane_g3_ParamLimits

0x7ed8,	// (0x0001bfe1) main_mp4_pane_g3

0x7f0d,	// (0x0001c016) main_mp4_pane_g4_ParamLimits

0x7f0d,	// (0x0001c016) main_mp4_pane_g4

0x7f3b,	// (0x0001c044) main_mp4_pane_g5_ParamLimits

0x7f3b,	// (0x0001c044) main_mp4_pane_g5

0x0007,

0xf84c,	// (0x00023955) main_mp4_pane_g_ParamLimits

0xf84c,	// (0x00023955) main_mp4_pane_g

0x7faf,	// (0x0001c0b8) main_mp4_pane_t1_ParamLimits

0x7faf,	// (0x0001c0b8) main_mp4_pane_t1

0x8007,	// (0x0001c110) main_mp4_pane_t2_ParamLimits

0x8007,	// (0x0001c110) main_mp4_pane_t2

0x4946,	// (0x00018a4f) main_mp4_pane_t3_ParamLimits

0x4946,	// (0x00018a4f) main_mp4_pane_t3

0x8059,	// (0x0001c162) main_mp4_pane_t4_ParamLimits

0x8059,	// (0x0001c162) main_mp4_pane_t4

0x0003,

0xf85d,	// (0x00023966) main_mp4_pane_t_ParamLimits

0xf85d,	// (0x00023966) main_mp4_pane_t

0x8099,	// (0x0001c1a2) mp4_progress_pane_ParamLimits

0x8099,	// (0x0001c1a2) mp4_progress_pane

0x80dd,	// (0x0001c1e6) mp4_rocker_pane_ParamLimits

0x80dd,	// (0x0001c1e6) mp4_rocker_pane

0x4a16,	// (0x00018b1f) mp4_progress_pane_t1

0x4a2d,	// (0x00018b36) mp4_progress_pane_t2

0x0001,

0xf866,	// (0x0002396f) mp4_progress_pane_t

0x4a44,	// (0x00018b4d) mup_progress_pane_cp04

0x545f,	// (0x00019568) mp4_rocker_pane_g1

0x7627,	// (0x0001b730) aid_cell_size_keypad2_ParamLimits

0x7627,	// (0x0001b730) aid_cell_size_keypad2

0x80fb,	// (0x0001c204) dialer2_ne_pane_ParamLimits

0x80fb,	// (0x0001c204) dialer2_ne_pane

0x7627,	// (0x0001b730) grid_dialer2_keypad_pane_ParamLimits

0x7627,	// (0x0001b730) grid_dialer2_keypad_pane

0x42bf,	// (0x000183c8) bg_popup_call_pane_cp07_ParamLimits

0x42bf,	// (0x000183c8) bg_popup_call_pane_cp07

0x1b1c,	// (0x00015c25) dialer2_ne_pane_t1_ParamLimits

0x1b1c,	// (0x00015c25) dialer2_ne_pane_t1

0x810a,	// (0x0001c213) cell_dialer2_keypad_pane_ParamLimits

0x810a,	// (0x0001c213) cell_dialer2_keypad_pane

0x4a50,	// (0x00018b59) bg_button_pane_pane_cp04_ParamLimits

0x4a50,	// (0x00018b59) bg_button_pane_pane_cp04

0x17d5,	// (0x000158de) cell_dialer2_keypad_pane_g1_ParamLimits

0x17d5,	// (0x000158de) cell_dialer2_keypad_pane_g1

0x933d,	// (0x0001d446) aid_placing_vt_set_content_ParamLimits

0x933d,	// (0x0001d446) aid_placing_vt_set_content

0x9363,	// (0x0001d46c) aid_placing_vt_set_title_ParamLimits

0x9363,	// (0x0001d46c) aid_placing_vt_set_title

0x7635,	// (0x0001b73e) main_image3_pane

0x813e,	// (0x0001c247) area_side_right_pane_cp01_ParamLimits

0x813e,	// (0x0001c247) area_side_right_pane_cp01

0x816b,	// (0x0001c274) main_image3_pane_g1_ParamLimits

0x816b,	// (0x0001c274) main_image3_pane_g1

0x8179,	// (0x0001c282) main_image3_pane_g2_ParamLimits

0x8179,	// (0x0001c282) main_image3_pane_g2

0x8190,	// (0x0001c299) main_image3_pane_g3_ParamLimits

0x8190,	// (0x0001c299) main_image3_pane_g3

0x81a7,	// (0x0001c2b0) main_image3_pane_g4_ParamLimits

0x81a7,	// (0x0001c2b0) main_image3_pane_g4

0x0003,

0xf875,	// (0x0002397e) main_image3_pane_g_ParamLimits

0xf875,	// (0x0002397e) main_image3_pane_g

0x81be,	// (0x0001c2c7) main_image3_pane_t1_ParamLimits

0x81be,	// (0x0001c2c7) main_image3_pane_t1

0x81e3,	// (0x0001c2ec) main_image3_pane_t2_ParamLimits

0x81e3,	// (0x0001c2ec) main_image3_pane_t2

0x8202,	// (0x0001c30b) main_image3_pane_t3_ParamLimits

0x8202,	// (0x0001c30b) main_image3_pane_t3

0x0003,

0xf87e,	// (0x00023987) main_image3_pane_t_ParamLimits

0xf87e,	// (0x00023987) main_image3_pane_t

0x26cf,	// (0x000167d8) grid_sctrl_middle_pane_cp01_ParamLimits

0x26cf,	// (0x000167d8) grid_sctrl_middle_pane_cp01

0xbc27,	// (0x0001fd30) cell_sctrl_middle_pane_cp01_ParamLimits

0xbc27,	// (0x0001fd30) cell_sctrl_middle_pane_cp01

0xbc38,	// (0x0001fd41) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0xbc38,	// (0x0001fd41) cell_sctrl_middle_pane_cp01_g1

0x7635,	// (0x0001b73e) main_call4_pane

0x825d,	// (0x0001c366) aid_size_button_call4_ParamLimits

0x825d,	// (0x0001c366) aid_size_button_call4

0x8287,	// (0x0001c390) call4_windows_pane_ParamLimits

0x8287,	// (0x0001c390) call4_windows_pane

0x829b,	// (0x0001c3a4) grid_call4_button_pane_ParamLimits

0x829b,	// (0x0001c3a4) grid_call4_button_pane

0x4ab6,	// (0x00018bbf) call4_windows_conf_pane

0x4ac9,	// (0x00018bd2) popup_call4_audio_first_window_ParamLimits

0x4ac9,	// (0x00018bd2) popup_call4_audio_first_window

0x4b09,	// (0x00018c12) popup_call4_audio_second_window_ParamLimits

0x4b09,	// (0x00018c12) popup_call4_audio_second_window

0x4b1b,	// (0x00018c24) popup_call4_audio_wait_window_ParamLimits

0x4b1b,	// (0x00018c24) popup_call4_audio_wait_window

0x82b5,	// (0x0001c3be) cell_call4_button_pane_ParamLimits

0x82b5,	// (0x0001c3be) cell_call4_button_pane

0x1926,	// (0x00015a2f) bg_button_pane_cp09_ParamLimits

0x1926,	// (0x00015a2f) bg_button_pane_cp09

0x82d8,	// (0x0001c3e1) cell_call4_button_pane_g1_ParamLimits

0x82d8,	// (0x0001c3e1) cell_call4_button_pane_g1

0xbc4d,	// (0x0001fd56) cell_call4_button_pane_t1_ParamLimits

0xbc4d,	// (0x0001fd56) cell_call4_button_pane_t1

0x4b61,	// (0x00018c6a) popup_call4_audio_conf_window_ParamLimits

0x4b61,	// (0x00018c6a) popup_call4_audio_conf_window

0xb77f,	// (0x0001f888) mup3_progress_pane_t1_ParamLimits

0xb79d,	// (0x0001f8a6) mup3_progress_pane_t2_ParamLimits

0x42d5,	// (0x000183de) mup3_progress_pane_t3_ParamLimits

0xf74e,	// (0x00023857) mup3_progress_pane_t_ParamLimits

0x42f2,	// (0x000183fb) mup_progress_pane_cp03_ParamLimits

0xbb2c,	// (0x0001fc35) mup3_control_keys_pane_g4_copy1

0x80c7,	// (0x0001c1d0) mp4_rocker2_pane_ParamLimits

0x80c7,	// (0x0001c1d0) mp4_rocker2_pane

0x4b7d,	// (0x00018c86) mp4_rocker2_pane_g1

0x4b75,	// (0x00018c7e) mp4_rocker2_pane_g2

0x8317,	// (0x0001c420) mp4_rocker2_pane_g3

0x831f,	// (0x0001c428) mp4_rocker2_pane_g4

0x8327,	// (0x0001c430) mp4_rocker2_pane_g5

0x0004,

0xf887,	// (0x00023990) mp4_rocker2_pane_g

0x7635,	// (0x0001b73e) main_camera4_pane

0x7635,	// (0x0001b73e) main_video4_pane

0x7e59,	// (0x0001bf62) main_video_tele_dialer_pane_t1_ParamLimits

0x7e59,	// (0x0001bf62) main_video_tele_dialer_pane_t1

0x7e6b,	// (0x0001bf74) main_video_tele_dialer_pane_t2_ParamLimits

0x7e6b,	// (0x0001bf74) main_video_tele_dialer_pane_t2

0x0001,

0xf83d,	// (0x00023946) main_video_tele_dialer_pane_t_ParamLimits

0xf83d,	// (0x00023946) main_video_tele_dialer_pane_t

0x8345,	// (0x0001c44e) cam4_autofocus_pane_ParamLimits

0x8345,	// (0x0001c44e) cam4_autofocus_pane

0x835b,	// (0x0001c464) cam4_image_uncrop_pane_ParamLimits

0x835b,	// (0x0001c464) cam4_image_uncrop_pane

0x8370,	// (0x0001c479) cam4_indicators_pane_ParamLimits

0x8370,	// (0x0001c479) cam4_indicators_pane

0x838a,	// (0x0001c493) main_camera4_pane_g1_ParamLimits

0x838a,	// (0x0001c493) main_camera4_pane_g1

0x8396,	// (0x0001c49f) main_camera4_pane_g2_ParamLimits

0x8396,	// (0x0001c49f) main_camera4_pane_g2

0x8396,	// (0x0001c49f) main_camera4_pane_g3_ParamLimits

0x8396,	// (0x0001c49f) main_camera4_pane_g3

0x83a2,	// (0x0001c4ab) main_camera4_pane_g4_ParamLimits

0x83a2,	// (0x0001c4ab) main_camera4_pane_g4

0x83ae,	// (0x0001c4b7) main_camera4_pane_g5_ParamLimits

0x83ae,	// (0x0001c4b7) main_camera4_pane_g5

0x0005,

0xf892,	// (0x0002399b) main_camera4_pane_g_ParamLimits

0xf892,	// (0x0002399b) main_camera4_pane_g

0x83c8,	// (0x0001c4d1) main_camera4_pane_t1_ParamLimits

0x83c8,	// (0x0001c4d1) main_camera4_pane_t1

0x83ec,	// (0x0001c4f5) bg_tb_trans_pane_cp06

0x8402,	// (0x0001c50b) cam4_indicators_pane_g1

0x8412,	// (0x0001c51b) cam4_indicators_pane_g2

0x0002,

0xf8ad,	// (0x000239b6) cam4_indicators_pane_g

0x8432,	// (0x0001c53b) cam4_indicators_pane_t1

0x845a,	// (0x0001c563) main_video4_pane_g1_ParamLimits

0x845a,	// (0x0001c563) main_video4_pane_g1

0x8396,	// (0x0001c49f) main_video4_pane_g2_ParamLimits

0x8396,	// (0x0001c49f) main_video4_pane_g2

0x8396,	// (0x0001c49f) main_video4_pane_g3_ParamLimits

0x8396,	// (0x0001c49f) main_video4_pane_g3

0x83a2,	// (0x0001c4ab) main_video4_pane_g4_ParamLimits

0x83a2,	// (0x0001c4ab) main_video4_pane_g4

0x0004,

0xf8b4,	// (0x000239bd) main_video4_pane_g_ParamLimits

0xf8b4,	// (0x000239bd) main_video4_pane_g

0x846e,	// (0x0001c577) vid4_indicators_pane_ParamLimits

0x846e,	// (0x0001c577) vid4_indicators_pane

0x848c,	// (0x0001c595) video4_image_uncrop_cif_pane_ParamLimits

0x848c,	// (0x0001c595) video4_image_uncrop_cif_pane

0x8499,	// (0x0001c5a2) video4_image_uncrop_nhd_pane_ParamLimits

0x8499,	// (0x0001c5a2) video4_image_uncrop_nhd_pane

0x835b,	// (0x0001c464) video4_image_uncrop_vga_pane_ParamLimits

0x835b,	// (0x0001c464) video4_image_uncrop_vga_pane

0x7b40,	// (0x0001bc49) bg_tb_trans_pane_cp07

0x8402,	// (0x0001c50b) vid4_indicators_pane_g1

0x84a6,	// (0x0001c5af) vid4_indicators_pane_g2

0x84b6,	// (0x0001c5bf) vid4_indicators_pane_g3

0x0004,

0xf8bf,	// (0x000239c8) vid4_indicators_pane_g

0x84e3,	// (0x0001c5ec) vid4_indicators_pane_t1

0xbc83,	// (0x0001fd8c) cam4_autofocus_pane_g1

0xbc8b,	// (0x0001fd94) cam4_autofocus_pane_g2

0xbc93,	// (0x0001fd9c) cam4_autofocus_pane_g3

0x0002,

0xf8ca,	// (0x000239d3) cam4_autofocus_pane_g

0xbc9b,	// (0x0001fda4) cam4_autofocus_pane_g3_copy1

0xbbd4,	// (0x0001fcdd) video_down_pane_cp_t1

0xbbe2,	// (0x0001fceb) video_down_pane_cp_t2

0x0001,

0xf842,	// (0x0002394b) video_down_pane_cp_t

0x7627,	// (0x0001b730) popup_vitu2_window_ParamLimits

0x7627,	// (0x0001b730) popup_vitu2_window

0x84fd,	// (0x0001c606) aid_size_cell2_itu2_ParamLimits

0x84fd,	// (0x0001c606) aid_size_cell2_itu2

0x851f,	// (0x0001c628) aid_size_cell_itu2_ParamLimits

0x851f,	// (0x0001c628) aid_size_cell_itu2

0x855d,	// (0x0001c666) bg_popup_window_pane_cp09_ParamLimits

0x855d,	// (0x0001c666) bg_popup_window_pane_cp09

0x856b,	// (0x0001c674) field_vitu2_entry_pane_ParamLimits

0x856b,	// (0x0001c674) field_vitu2_entry_pane

0x8581,	// (0x0001c68a) grid_vitu2_function_pane_ParamLimits

0x8581,	// (0x0001c68a) grid_vitu2_function_pane

0x85b3,	// (0x0001c6bc) grid_vitu2_itu_pane_ParamLimits

0x85b3,	// (0x0001c6bc) grid_vitu2_itu_pane

0x860d,	// (0x0001c716) cell_vitu2_itu_pane_ParamLimits

0x860d,	// (0x0001c716) cell_vitu2_itu_pane

0x8625,	// (0x0001c72e) cell_vitu2_function_pane_ParamLimits

0x8625,	// (0x0001c72e) cell_vitu2_function_pane

0x4c68,	// (0x00018d71) bg_popup_call_pane_cp08_ParamLimits

0x4c68,	// (0x00018d71) bg_popup_call_pane_cp08

0x4c7f,	// (0x00018d88) field_vitu2_entry_pane_g1

0x4c8b,	// (0x00018d94) field_vitu2_entry_pane_g2

0x0002,

0xf8d1,	// (0x000239da) field_vitu2_entry_pane_g

0xbca3,	// (0x0001fdac) field_vitu2_entry_pane_t1_ParamLimits

0xbca3,	// (0x0001fdac) field_vitu2_entry_pane_t1

0x4c97,	// (0x00018da0) field_vitu2_entry_pane_t2_ParamLimits

0x4c97,	// (0x00018da0) field_vitu2_entry_pane_t2

0x0001,

0xf8d8,	// (0x000239e1) field_vitu2_entry_pane_t_ParamLimits

0xf8d8,	// (0x000239e1) field_vitu2_entry_pane_t

0x8664,	// (0x0001c76d) bg_button_pane_cp010_ParamLimits

0x8664,	// (0x0001c76d) bg_button_pane_cp010

0x8672,	// (0x0001c77b) cell_vitu2_itu_pane_g1

0x8692,	// (0x0001c79b) cell_vitu2_itu_pane_t1_ParamLimits

0x8692,	// (0x0001c79b) cell_vitu2_itu_pane_t1

0x86de,	// (0x0001c7e7) cell_vitu2_itu_pane_t2_ParamLimits

0x86de,	// (0x0001c7e7) cell_vitu2_itu_pane_t2

0x0002,

0xf8e2,	// (0x000239eb) cell_vitu2_itu_pane_t_ParamLimits

0xf8e2,	// (0x000239eb) cell_vitu2_itu_pane_t

0x7b40,	// (0x0001bc49) bg_button_pane_cp011

0x87a6,	// (0x0001c8af) cell_vitu2_function_pane_g1

0x7635,	// (0x0001b73e) main_myfav_hc_pane

0x8242,	// (0x0001c34b) popup_image3_note_pane_ParamLimits

0x8242,	// (0x0001c34b) popup_image3_note_pane

0x824e,	// (0x0001c357) popup_image3_tool_bar_pane_ParamLimits

0x824e,	// (0x0001c357) popup_image3_tool_bar_pane

0x8754,	// (0x0001c85d) cell_vitu2_itu_pane_t3_ParamLimits

0x8754,	// (0x0001c85d) cell_vitu2_itu_pane_t3

0x108e,	// (0x00015197) bg_popup_trans_pane

0x4cce,	// (0x00018dd7) grid_image3_tool_bar_pane

0x4cd8,	// (0x00018de1) bg_popup_trans_pane_g1

0x1da6,	// (0x00015eaf) bg_popup_trans_pane_g2

0x4ce0,	// (0x00018de9) bg_popup_trans_pane_g3

0x4ce8,	// (0x00018df1) bg_popup_trans_pane_g4

0x4cf0,	// (0x00018df9) bg_popup_trans_pane_g5

0x4cf8,	// (0x00018e01) bg_popup_trans_pane_g6

0x4d00,	// (0x00018e09) bg_popup_trans_pane_g7

0x4d08,	// (0x00018e11) bg_popup_trans_pane_g8

0x1d86,	// (0x00015e8f) bg_popup_trans_pane_g9

0x0008,

0xf8e9,	// (0x000239f2) bg_popup_trans_pane_g

0x4d10,	// (0x00018e19) cell_image3_tool_bar_pane_ParamLimits

0x4d10,	// (0x00018e19) cell_image3_tool_bar_pane

0x1b4a,	// (0x00015c53) cell_image3_tool_bar_pane_g1

0x108e,	// (0x00015197) bg_popup_trans_pane_cp1

0x4d24,	// (0x00018e2d) popup_image3_note_pane_t1

0x4d32,	// (0x00018e3b) popup_image3_note_pane_t2

0x4d40,	// (0x00018e49) popup_image3_note_pane_t3

0x0002,

0xf8fc,	// (0x00023a05) popup_image3_note_pane_t

0x4d4e,	// (0x00018e57) popup_image3_note_pane_t3_copy1

0xbcd2,	// (0x0001fddb) bg_myfav_hc_instruction_pane_ParamLimits

0xbcd2,	// (0x0001fddb) bg_myfav_hc_instruction_pane

0xbce4,	// (0x0001fded) cell_myfav_contact_pane_ParamLimits

0xbce4,	// (0x0001fded) cell_myfav_contact_pane

0xbcfe,	// (0x0001fe07) cell_myfav_contact_pane_cp1_ParamLimits

0xbcfe,	// (0x0001fe07) cell_myfav_contact_pane_cp1

0xbd14,	// (0x0001fe1d) cell_myfav_contact_pane_cp2_ParamLimits

0xbd14,	// (0x0001fe1d) cell_myfav_contact_pane_cp2

0xbd2a,	// (0x0001fe33) cell_myfav_contact_pane_cp3_ParamLimits

0xbd2a,	// (0x0001fe33) cell_myfav_contact_pane_cp3

0xbd3f,	// (0x0001fe48) cell_myfav_contact_pane_cp4_ParamLimits

0xbd3f,	// (0x0001fe48) cell_myfav_contact_pane_cp4

0xbd53,	// (0x0001fe5c) cell_myfav_contact_pane_cp5_ParamLimits

0xbd53,	// (0x0001fe5c) cell_myfav_contact_pane_cp5

0xbd67,	// (0x0001fe70) cell_myfav_contact_pane_cp6_ParamLimits

0xbd67,	// (0x0001fe70) cell_myfav_contact_pane_cp6

0xbd7b,	// (0x0001fe84) cell_myfav_contact_pane_cp7_ParamLimits

0xbd7b,	// (0x0001fe84) cell_myfav_contact_pane_cp7

0x4d5c,	// (0x00018e65) listscroll_gen_pane_cp05

0xbd93,	// (0x0001fe9c) main_myfav_hc_pane_g1_ParamLimits

0xbd93,	// (0x0001fe9c) main_myfav_hc_pane_g1

0xbda9,	// (0x0001feb2) main_myfav_hc_pane_g2_ParamLimits

0xbda9,	// (0x0001feb2) main_myfav_hc_pane_g2

0x0002,

0xf903,	// (0x00023a0c) main_myfav_hc_pane_g_ParamLimits

0xf903,	// (0x00023a0c) main_myfav_hc_pane_g

0xbdd3,	// (0x0001fedc) main_myfav_hc_pane_t1_ParamLimits

0xbdd3,	// (0x0001fedc) main_myfav_hc_pane_t1

0x4d65,	// (0x00018e6e) main_myfav_hc_pane_t2_ParamLimits

0x4d65,	// (0x00018e6e) main_myfav_hc_pane_t2

0x4d77,	// (0x00018e80) main_myfav_hc_pane_t3_ParamLimits

0x4d77,	// (0x00018e80) main_myfav_hc_pane_t3

0xbde8,	// (0x0001fef1) main_myfav_hc_pane_t4_ParamLimits

0xbde8,	// (0x0001fef1) main_myfav_hc_pane_t4

0x0004,

0xf90a,	// (0x00023a13) main_myfav_hc_pane_t_ParamLimits

0xf90a,	// (0x00023a13) main_myfav_hc_pane_t

0x1b4a,	// (0x00015c53) bg_myfav_hc_instruction_pane_g1

0x4d89,	// (0x00018e92) cell_myfav_contact_pane_g1_ParamLimits

0x4d89,	// (0x00018e92) cell_myfav_contact_pane_g1

0x4d89,	// (0x00018e92) cell_myfav_contact_pane_g2_ParamLimits

0x4d89,	// (0x00018e92) cell_myfav_contact_pane_g2

0x4d95,	// (0x00018e9e) cell_myfav_contact_pane_g3_ParamLimits

0x4d95,	// (0x00018e9e) cell_myfav_contact_pane_g3

0x17e3,	// (0x000158ec) cell_myfav_contact_pane_g4_ParamLimits

0x17e3,	// (0x000158ec) cell_myfav_contact_pane_g4

0x4da2,	// (0x00018eab) cell_myfav_contact_pane_g5_ParamLimits

0x4da2,	// (0x00018eab) cell_myfav_contact_pane_g5

0x0004,

0xf915,	// (0x00023a1e) cell_myfav_contact_pane_g_ParamLimits

0xf915,	// (0x00023a1e) cell_myfav_contact_pane_g

0xbdbf,	// (0x0001fec8) main_myfav_hc_pane_g3_ParamLimits

0xbdbf,	// (0x0001fec8) main_myfav_hc_pane_g3

0x756b,	// (0x0001b674) popup_adpt_find_window

0xbe0c,	// (0x0001ff15) afind_page_pane_ParamLimits

0xbe0c,	// (0x0001ff15) afind_page_pane

0xbe19,	// (0x0001ff22) aid_size_cell_afind_ParamLimits

0xbe19,	// (0x0001ff22) aid_size_cell_afind

0xbe33,	// (0x0001ff3c) bg_popup_sub_pane_cp09_ParamLimits

0xbe33,	// (0x0001ff3c) bg_popup_sub_pane_cp09

0xbe40,	// (0x0001ff49) find_pane_cp01_ParamLimits

0xbe40,	// (0x0001ff49) find_pane_cp01

0x4dae,	// (0x00018eb7) grid_afind_control_pane_ParamLimits

0x4dae,	// (0x00018eb7) grid_afind_control_pane

0xbe4d,	// (0x0001ff56) grid_afind_pane_ParamLimits

0xbe4d,	// (0x0001ff56) grid_afind_pane

0xbe63,	// (0x0001ff6c) cell_afind_pane_ParamLimits

0xbe63,	// (0x0001ff6c) cell_afind_pane

0x1b4a,	// (0x00015c53) afind_page_pane_g1

0xbe99,	// (0x0001ffa2) afind_page_pane_g2

0xbea2,	// (0x0001ffab) afind_page_pane_g3

0x0002,

0xf920,	// (0x00023a29) afind_page_pane_g

0xbeab,	// (0x0001ffb4) afind_page_pane_t1

0x4dc2,	// (0x00018ecb) cell_afind_grid_control_pane_ParamLimits

0x4dc2,	// (0x00018ecb) cell_afind_grid_control_pane

0x4dd1,	// (0x00018eda) bg_button_pane_cp69_ParamLimits

0x4dd1,	// (0x00018eda) bg_button_pane_cp69

0xbecb,	// (0x0001ffd4) cell_afind_pane_g1_ParamLimits

0xbecb,	// (0x0001ffd4) cell_afind_pane_g1

0xbed8,	// (0x0001ffe1) cell_afind_pane_t1_ParamLimits

0xbed8,	// (0x0001ffe1) cell_afind_pane_t1

0x1b54,	// (0x00015c5d) bg_button_pane_cp72

0x4ddd,	// (0x00018ee6) cell_afind_grid_control_pane_g1

0xaa32,	// (0x0001eb3b) aid_image_placing_area_ParamLimits

0xaa32,	// (0x0001eb3b) aid_image_placing_area

0x17d5,	// (0x000158de) field_vitu_entry_pane_g1_ParamLimits

0x17d5,	// (0x000158de) field_vitu_entry_pane_g1

0x17d5,	// (0x000158de) field_vitu_entry_pane_g2_ParamLimits

0x17d5,	// (0x000158de) field_vitu_entry_pane_g2

0x0001,

0xf7cd,	// (0x000238d6) field_vitu_entry_pane_g_ParamLimits

0xf7cd,	// (0x000238d6) field_vitu_entry_pane_g

0x45a2,	// (0x000186ab) cell_vitu_itu_pane_g1_ParamLimits

0x4585,	// (0x0001868e) cell_vitu_itu_pane_t3_ParamLimits

0x4585,	// (0x0001868e) cell_vitu_itu_pane_t3

0x4a16,	// (0x00018b1f) mp4_progress_pane_t1_ParamLimits

0x4a2d,	// (0x00018b36) mp4_progress_pane_t2_ParamLimits

0xf866,	// (0x0002396f) mp4_progress_pane_t_ParamLimits

0x4a44,	// (0x00018b4d) mup_progress_pane_cp04_ParamLimits

0xbdfa,	// (0x0001ff03) main_myfav_hc_pane_t5_ParamLimits

0xbdfa,	// (0x0001ff03) main_myfav_hc_pane_t5

0x7452,	// (0x0001b55b) aid_zoom_text_primary

0x756b,	// (0x0001b674) popup_adpt_find_window_ParamLimits

0x7b40,	// (0x0001bc49) main_cam_set_pane

0x837e,	// (0x0001c487) cam4_zoom_pane_ParamLimits

0x837e,	// (0x0001c487) cam4_zoom_pane

0xbeea,	// (0x0001fff3) main_cam_set_pane_g1_ParamLimits

0xbeea,	// (0x0001fff3) main_cam_set_pane_g1

0xbef8,	// (0x00020001) main_cam_set_pane_g2_ParamLimits

0xbef8,	// (0x00020001) main_cam_set_pane_g2

0x0001,

0xf927,	// (0x00023a30) main_cam_set_pane_g_ParamLimits

0xf927,	// (0x00023a30) main_cam_set_pane_g

0xbf04,	// (0x0002000d) main_cam_set_pane_t1_ParamLimits

0xbf04,	// (0x0002000d) main_cam_set_pane_t1

0xbf16,	// (0x0002001f) main_cset_listscroll_pane_ParamLimits

0xbf16,	// (0x0002001f) main_cset_listscroll_pane

0xbf44,	// (0x0002004d) main_cset_slider_pane_ParamLimits

0xbf44,	// (0x0002004d) main_cset_slider_pane

0x4dee,	// (0x00018ef7) main_cset_list_pane_ParamLimits

0x4dee,	// (0x00018ef7) main_cset_list_pane

0x4dfe,	// (0x00018f07) scroll_pane_cp028

0xbf63,	// (0x0002006c) aid_area_touch_slider

0xbf7f,	// (0x00020088) cset_slider_pane

0xbfa2,	// (0x000200ab) main_cset_slider_pane_g1

0xbfb7,	// (0x000200c0) main_cset_slider_pane_g2

0x0011,

0xf92c,	// (0x00023a35) main_cset_slider_pane_g

0x4e37,	// (0x00018f40) main_cset_slider_pane_t1

0xc073,	// (0x0002017c) main_cset_slider_pane_t2

0xc08d,	// (0x00020196) main_cset_slider_pane_t3

0xc0a7,	// (0x000201b0) main_cset_slider_pane_t4

0xc0c1,	// (0x000201ca) main_cset_slider_pane_t5

0xc0db,	// (0x000201e4) main_cset_slider_pane_t6

0xc0f0,	// (0x000201f9) main_cset_slider_pane_t7

0x000e,

0xf951,	// (0x00023a5a) main_cset_slider_pane_t

0xc1f4,	// (0x000202fd) cset_list_set_pane_ParamLimits

0xc1f4,	// (0x000202fd) cset_list_set_pane

0x4ed1,	// (0x00018fda) aid_position_infowindow_above

0x4ed9,	// (0x00018fe2) aid_position_infowindow_below

0xc204,	// (0x0002030d) cset_list_set_pane_g1_ParamLimits

0xc204,	// (0x0002030d) cset_list_set_pane_g1

0xc210,	// (0x00020319) cset_list_set_pane_g3_ParamLimits

0xc210,	// (0x00020319) cset_list_set_pane_g3

0x0001,

0xf970,	// (0x00023a79) cset_list_set_pane_g_ParamLimits

0xf970,	// (0x00023a79) cset_list_set_pane_g

0xc21f,	// (0x00020328) cset_list_set_pane_t1_ParamLimits

0xc21f,	// (0x00020328) cset_list_set_pane_t1

0x10e1,	// (0x000151ea) list_highlight_pane_cp021_ParamLimits

0x10e1,	// (0x000151ea) list_highlight_pane_cp021

0x274d,	// (0x00016856) cset_slider_pane_g1

0x275f,	// (0x00016868) cset_slider_pane_g2

0x2756,	// (0x0001685f) cset_slider_pane_g3

0x0002,

0xf975,	// (0x00023a7e) cset_slider_pane_g

0x87ba,	// (0x0001c8c3) aid_area_touch_cam4_zoom

0x87c2,	// (0x0001c8cb) cam4_zoom_cont_pane

0x87ca,	// (0x0001c8d3) cam4_zoom_pane_g1

0x87d2,	// (0x0001c8db) cam4_zoom_pane_g2

0x87da,	// (0x0001c8e3) cam4_zoom_pane_g3

0x0002,

0xf97c,	// (0x00023a85) cam4_zoom_pane_g

0x87e2,	// (0x0001c8eb) cam4_zoom_cont_pane_g1

0x87eb,	// (0x0001c8f4) cam4_zoom_cont_pane_g2

0x87f4,	// (0x0001c8fd) cam4_zoom_cont_pane_g3

0x0002,

0xf983,	// (0x00023a8c) cam4_zoom_cont_pane_g

0x8277,	// (0x0001c380) call4_image_pane_ParamLimits

0x8277,	// (0x0001c380) call4_image_pane

0x4ab6,	// (0x00018bbf) call4_windows_conf_pane_ParamLimits

0x4ae9,	// (0x00018bf2) popup_call4_audio_in_window_ParamLimits

0x4ae9,	// (0x00018bf2) popup_call4_audio_in_window

0x108e,	// (0x00015197) bg_popup_call2_act_pane_cp02

0x4b59,	// (0x00018c62) call4_list_conf_pane

0x1b4a,	// (0x00015c53) call4_image_pane_g1

0x1b4a,	// (0x00015c53) call4_image_pane_g2

0x0001,

0xf3ef,	// (0x000234f8) call4_image_pane_g

0x4f1c,	// (0x00019025) list_single_graphic_popup_conf4_pane_ParamLimits

0x4f1c,	// (0x00019025) list_single_graphic_popup_conf4_pane

0x108e,	// (0x00015197) list_highlight_pane_cp022

0x4f29,	// (0x00019032) list_single_graphic_popup_conf4_pane_g1

0x2341,	// (0x0001644a) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf98a,	// (0x00023a93) list_single_graphic_popup_conf4_pane_g

0x4f31,	// (0x0001903a) list_single_graphic_popup_conf4_pane_t1

0x94a7,	// (0x0001d5b0) popup_vtel_slider_window_ParamLimits

0x94a7,	// (0x0001d5b0) popup_vtel_slider_window

0x26bb,	// (0x000167c4) dialer2_ne_pane_t2_ParamLimits

0x26bb,	// (0x000167c4) dialer2_ne_pane_t2

0x0001,

0xf86b,	// (0x00023974) dialer2_ne_pane_t_ParamLimits

0xf86b,	// (0x00023974) dialer2_ne_pane_t

0x10e1,	// (0x000151ea) bg_popup_sub_pane_cp010_ParamLimits

0x10e1,	// (0x000151ea) bg_popup_sub_pane_cp010

0xc234,	// (0x0002033d) popup_vtel_slider_window_g1_ParamLimits

0xc234,	// (0x0002033d) popup_vtel_slider_window_g1

0xc240,	// (0x00020349) popup_vtel_slider_window_g2_ParamLimits

0xc240,	// (0x00020349) popup_vtel_slider_window_g2

0x0003,

0xf98f,	// (0x00023a98) popup_vtel_slider_window_g_ParamLimits

0xf98f,	// (0x00023a98) popup_vtel_slider_window_g

0xc286,	// (0x0002038f) vtel_slider_pane_ParamLimits

0xc286,	// (0x0002038f) vtel_slider_pane

0xc295,	// (0x0002039e) vtel_slider_pane_g1_ParamLimits

0xc295,	// (0x0002039e) vtel_slider_pane_g1

0xc2a2,	// (0x000203ab) vtel_slider_pane_g2_ParamLimits

0xc2a2,	// (0x000203ab) vtel_slider_pane_g2

0xc2af,	// (0x000203b8) vtel_slider_pane_g3_ParamLimits

0xc2af,	// (0x000203b8) vtel_slider_pane_g3

0xc295,	// (0x0002039e) vtel_slider_pane_g4_ParamLimits

0xc295,	// (0x0002039e) vtel_slider_pane_g4

0xc2bc,	// (0x000203c5) vtel_slider_pane_g5_ParamLimits

0xc2bc,	// (0x000203c5) vtel_slider_pane_g5

0x0004,

0xf998,	// (0x00023aa1) vtel_slider_pane_g_ParamLimits

0xf998,	// (0x00023aa1) vtel_slider_pane_g

0x7b40,	// (0x0001bc49) main_gallery2_pane

0x8545,	// (0x0001c64e) aid_size_row_itut2_dropdow_list_ParamLimits

0x8545,	// (0x0001c64e) aid_size_row_itut2_dropdow_list

0x8599,	// (0x0001c6a2) grid_vitu2_function_top_pane_ParamLimits

0x8599,	// (0x0001c6a2) grid_vitu2_function_top_pane

0x85d7,	// (0x0001c6e0) popup_vitu2_dropdown_list_window_ParamLimits

0x85d7,	// (0x0001c6e0) popup_vitu2_dropdown_list_window

0x85f1,	// (0x0001c6fa) popup_vitu2_match_list_window

0x87fd,	// (0x0001c906) cell_vitu2_function_top_pane_ParamLimits

0x87fd,	// (0x0001c906) cell_vitu2_function_top_pane

0x8815,	// (0x0001c91e) cell_vitu2_function_top_pane_cp01_ParamLimits

0x8815,	// (0x0001c91e) cell_vitu2_function_top_pane_cp01

0x8831,	// (0x0001c93a) cell_vitu2_function_top_wide_pane_ParamLimits

0x8831,	// (0x0001c93a) cell_vitu2_function_top_wide_pane

0x7b40,	// (0x0001bc49) bg_button_pane_cp012

0x884e,	// (0x0001c957) cell_vitu2_function_top_pane_g1

0x8862,	// (0x0001c96b) bg_button_pane_cp013_ParamLimits

0x8862,	// (0x0001c96b) bg_button_pane_cp013

0xc2c9,	// (0x000203d2) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xc2c9,	// (0x000203d2) cell_vitu2_function_top_wide_pane_g1

0x7627,	// (0x0001b730) bg_popup_sub_pane_cp20

0x887e,	// (0x0001c987) list_vitu2_match_list_pane

0x4cd8,	// (0x00018de1) bg_popup_sub_pane_cp20_g1

0x4ce0,	// (0x00018de9) bg_popup_sub_pane_cp20_g2

0x1da6,	// (0x00015eaf) bg_popup_sub_pane_cp20_g3

0x4ce8,	// (0x00018df1) bg_popup_sub_pane_cp20_g4

0x1d86,	// (0x00015e8f) bg_popup_sub_pane_cp20_g5

0x4f63,	// (0x0001906c) bg_popup_sub_pane_cp20_g6

0x4cf8,	// (0x00018e01) bg_popup_sub_pane_cp20_g7

0x4d00,	// (0x00018e09) bg_popup_sub_pane_cp20_g8

0x4d08,	// (0x00018e11) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9a3,	// (0x00023aac) bg_popup_sub_pane_cp20_g

0x8896,	// (0x0001c99f) list_vitu2_match_list_item_pane_ParamLimits

0x8896,	// (0x0001c99f) list_vitu2_match_list_item_pane

0x88a8,	// (0x0001c9b1) list_vitu2_match_list_item_pane_t1

0x7635,	// (0x0001b73e) bg_popup_sub_pane_cp21

0x88b6,	// (0x0001c9bf) grid_vitu2_dropdown_list_pane

0x88be,	// (0x0001c9c7) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x88be,	// (0x0001c9c7) cell_vitu2_dropdown_list_char_pane

0x88df,	// (0x0001c9e8) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x88df,	// (0x0001c9e8) cell_vitu2_dropdown_list_ctrl_pane

0x4faa,	// (0x000190b3) cell_vitu2_dropdown_list_char_pane_g1

0x4fa1,	// (0x000190aa) cell_vitu2_dropdown_list_char_pane_g2

0x4f98,	// (0x000190a1) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf9c0,	// (0x00023ac9) cell_vitu2_dropdown_list_char_pane_g

0x8909,	// (0x0001ca12) cell_vitu2_dropdown_list_char_pane_t1

0xc2e1,	// (0x000203ea) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xc2e1,	// (0x000203ea) cell_vitu2_dropdown_list_ctrl_pane_g1

0xc2f1,	// (0x000203fa) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xc2f1,	// (0x000203fa) cell_vitu2_dropdown_list_ctrl_pane_g2

0xc302,	// (0x0002040b) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xc302,	// (0x0002040b) cell_vitu2_dropdown_list_ctrl_pane_g3

0x8917,	// (0x0001ca20) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x8917,	// (0x0001ca20) cell_vitu2_dropdown_list_ctrl_pane_g4

0x83ec,	// (0x0001c4f5) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x83ec,	// (0x0001c4f5) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf9c7,	// (0x00023ad0) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf9c7,	// (0x00023ad0) cell_vitu2_dropdown_list_ctrl_pane_g

0xc312,	// (0x0002041b) aid_size_cell_gallery2_ParamLimits

0xc312,	// (0x0002041b) aid_size_cell_gallery2

0xc32c,	// (0x00020435) grid_gallery2_pane_ParamLimits

0xc32c,	// (0x00020435) grid_gallery2_pane

0xba56,	// (0x0001fb5f) scroll_pane_cp029_ParamLimits

0xba56,	// (0x0001fb5f) scroll_pane_cp029

0xc33d,	// (0x00020446) cell_gallery2_pane_ParamLimits

0xc33d,	// (0x00020446) cell_gallery2_pane

0x4fb3,	// (0x000190bc) cell_gallery2_pane_g2

0xc38a,	// (0x00020493) cell_gallery2_pane_g3

0x4fbb,	// (0x000190c4) cell_gallery2_pane_g4

0x4fc3,	// (0x000190cc) cell_gallery2_pane_g5

0x1ad2,	// (0x00015bdb) grid_highlight_pane_cp10

0x85f1,	// (0x0001c6fa) popup_vitu2_match_list_window_ParamLimits

0x8601,	// (0x0001c70a) popup_vitu2_query_window_ParamLimits

0x8601,	// (0x0001c70a) popup_vitu2_query_window

0x7635,	// (0x0001b73e) bg_vitu2_candi_button_pane

0x4faa,	// (0x000190b3) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x4fa1,	// (0x000190aa) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x4f98,	// (0x000190a1) cell_vitu2_dropdown_list_char_pane_g2_copy2

0xc392,	// (0x0002049b) bg_button_pane_cp015

0xc3a2,	// (0x000204ab) bg_button_pane_cp016

0xc3b5,	// (0x000204be) bg_button_pane_cp017

0x26dd,	// (0x000167e6) bg_popup_sub_pane_cp22

0x4fcb,	// (0x000190d4) popup_vitu2_query_window_g1

0xc3f8,	// (0x00020501) popup_vitu2_query_window_g2

0x0002,

0xf9d2,	// (0x00023adb) popup_vitu2_query_window_g

0xc413,	// (0x0002051c) popup_vitu2_query_window_t1_ParamLimits

0xc413,	// (0x0002051c) popup_vitu2_query_window_t1

0xc446,	// (0x0002054f) popup_vitu2_query_window_t2_ParamLimits

0xc446,	// (0x0002054f) popup_vitu2_query_window_t2

0xc458,	// (0x00020561) popup_vitu2_query_window_t3_ParamLimits

0xc458,	// (0x00020561) popup_vitu2_query_window_t3

0xc480,	// (0x00020589) popup_vitu2_query_window_t4_ParamLimits

0xc480,	// (0x00020589) popup_vitu2_query_window_t4

0xc49d,	// (0x000205a6) popup_vitu2_query_window_t5_ParamLimits

0xc49d,	// (0x000205a6) popup_vitu2_query_window_t5

0x0006,

0xf9d9,	// (0x00023ae2) popup_vitu2_query_window_t_ParamLimits

0xf9d9,	// (0x00023ae2) popup_vitu2_query_window_t

0x4de6,	// (0x00018eef) main_cset_text_pane

0xbf63,	// (0x0002006c) aid_area_touch_slider_ParamLimits

0xbf7f,	// (0x00020088) cset_slider_pane_ParamLimits

0xbfa2,	// (0x000200ab) main_cset_slider_pane_g1_ParamLimits

0xbfb7,	// (0x000200c0) main_cset_slider_pane_g2_ParamLimits

0x4e07,	// (0x00018f10) main_cset_slider_pane_g3_ParamLimits

0x4e07,	// (0x00018f10) main_cset_slider_pane_g3

0xbfcc,	// (0x000200d5) main_cset_slider_pane_g4_ParamLimits

0xbfcc,	// (0x000200d5) main_cset_slider_pane_g4

0xbfdb,	// (0x000200e4) main_cset_slider_pane_g5_ParamLimits

0xbfdb,	// (0x000200e4) main_cset_slider_pane_g5

0xbfe7,	// (0x000200f0) main_cset_slider_pane_g6_ParamLimits

0xbfe7,	// (0x000200f0) main_cset_slider_pane_g6

0xf92c,	// (0x00023a35) main_cset_slider_pane_g_ParamLimits

0x4e37,	// (0x00018f40) main_cset_slider_pane_t1_ParamLimits

0xc073,	// (0x0002017c) main_cset_slider_pane_t2_ParamLimits

0xc08d,	// (0x00020196) main_cset_slider_pane_t3_ParamLimits

0xc0a7,	// (0x000201b0) main_cset_slider_pane_t4_ParamLimits

0xc0c1,	// (0x000201ca) main_cset_slider_pane_t5_ParamLimits

0xc0db,	// (0x000201e4) main_cset_slider_pane_t6_ParamLimits

0xc0f0,	// (0x000201f9) main_cset_slider_pane_t7_ParamLimits

0xc11a,	// (0x00020223) main_cset_slider_pane_t8_ParamLimits

0xc11a,	// (0x00020223) main_cset_slider_pane_t8

0xc142,	// (0x0002024b) main_cset_slider_pane_t9_ParamLimits

0xc142,	// (0x0002024b) main_cset_slider_pane_t9

0xc16a,	// (0x00020273) main_cset_slider_pane_t10_ParamLimits

0xc16a,	// (0x00020273) main_cset_slider_pane_t10

0xc192,	// (0x0002029b) main_cset_slider_pane_t11_ParamLimits

0xc192,	// (0x0002029b) main_cset_slider_pane_t11

0xc1ba,	// (0x000202c3) main_cset_slider_pane_t12_ParamLimits

0xc1ba,	// (0x000202c3) main_cset_slider_pane_t12

0xc1d7,	// (0x000202e0) main_cset_slider_pane_t13_ParamLimits

0xc1d7,	// (0x000202e0) main_cset_slider_pane_t13

0xf951,	// (0x00023a5a) main_cset_slider_pane_t_ParamLimits

0x108e,	// (0x00015197) bg_popup_sub_pane_cp011

0x4fd7,	// (0x000190e0) main_cset_text_pane_g1

0x4fdf,	// (0x000190e8) main_cset_text_pane_t1

0x4fed,	// (0x000190f6) main_cset_text_pane_t2

0x4ffb,	// (0x00019104) main_cset_text_pane_t3

0x5009,	// (0x00019112) main_cset_text_pane_t4

0x5017,	// (0x00019120) main_cset_text_pane_t5

0x5025,	// (0x0001912e) main_cset_text_pane_t6

0x5033,	// (0x0001913c) main_cset_text_pane_t7

0x0006,

0xf9e8,	// (0x00023af1) main_cset_text_pane_t

0x7635,	// (0x0001b73e) main_cam4_burst_pane

0x7635,	// (0x0001b73e) main_cam5_pane

0xbeb9,	// (0x0001ffc2) bg_button_pane_cp019

0xbec2,	// (0x0001ffcb) bg_button_pane_cp020

0x4e13,	// (0x00018f1c) main_cset_slider_pane_g7_ParamLimits

0x4e13,	// (0x00018f1c) main_cset_slider_pane_g7

0x4e1f,	// (0x00018f28) main_cset_slider_pane_g8_ParamLimits

0x4e1f,	// (0x00018f28) main_cset_slider_pane_g8

0xbffb,	// (0x00020104) main_cset_slider_pane_g9_ParamLimits

0xbffb,	// (0x00020104) main_cset_slider_pane_g9

0xc007,	// (0x00020110) main_cset_slider_pane_g10_ParamLimits

0xc007,	// (0x00020110) main_cset_slider_pane_g10

0xc013,	// (0x0002011c) main_cset_slider_pane_g11_ParamLimits

0xc013,	// (0x0002011c) main_cset_slider_pane_g11

0xc01f,	// (0x00020128) main_cset_slider_pane_g12_ParamLimits

0xc01f,	// (0x00020128) main_cset_slider_pane_g12

0xc02b,	// (0x00020134) main_cset_slider_pane_g13_ParamLimits

0xc02b,	// (0x00020134) main_cset_slider_pane_g13

0xc037,	// (0x00020140) main_cset_slider_pane_g14_ParamLimits

0xc037,	// (0x00020140) main_cset_slider_pane_g14

0xc043,	// (0x0002014c) main_cset_slider_pane_g15_ParamLimits

0xc043,	// (0x0002014c) main_cset_slider_pane_g15

0x4e5f,	// (0x00018f68) main_cset_slider_pane_t14_ParamLimits

0x4e5f,	// (0x00018f68) main_cset_slider_pane_t14

0x4e98,	// (0x00018fa1) main_cset_slider_pane_t15_ParamLimits

0x4e98,	// (0x00018fa1) main_cset_slider_pane_t15

0xc510,	// (0x00020619) aid_cam4_burst_size_cell_ParamLimits

0xc510,	// (0x00020619) aid_cam4_burst_size_cell

0xc52c,	// (0x00020635) grid_cam4_burst_pane_ParamLimits

0xc52c,	// (0x00020635) grid_cam4_burst_pane

0xc54e,	// (0x00020657) linegrid_cam4_burst_pane_ParamLimits

0xc54e,	// (0x00020657) linegrid_cam4_burst_pane

0xc56c,	// (0x00020675) scroll_pane_cp30_ParamLimits

0xc56c,	// (0x00020675) scroll_pane_cp30

0xc578,	// (0x00020681) cell_cam4_burst_pane_ParamLimits

0xc578,	// (0x00020681) cell_cam4_burst_pane

0x5041,	// (0x0001914a) linegrid_cam4_burst_pane_g1_ParamLimits

0x5041,	// (0x0001914a) linegrid_cam4_burst_pane_g1

0xc5b0,	// (0x000206b9) linegrid_cam4_burst_pane_g2_ParamLimits

0xc5b0,	// (0x000206b9) linegrid_cam4_burst_pane_g2

0x504e,	// (0x00019157) linegrid_cam4_burst_pane_g3_ParamLimits

0x504e,	// (0x00019157) linegrid_cam4_burst_pane_g3

0x0002,

0xf9f7,	// (0x00023b00) linegrid_cam4_burst_pane_g_ParamLimits

0xf9f7,	// (0x00023b00) linegrid_cam4_burst_pane_g

0xc5c1,	// (0x000206ca) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xc5c1,	// (0x000206ca) linegrid_cam4_burst_pane_g3_copy1

0x505b,	// (0x00019164) linegrid_cam4_burst_pane_g4_ParamLimits

0x505b,	// (0x00019164) linegrid_cam4_burst_pane_g4

0xc5db,	// (0x000206e4) linegrid_cam4_burst_pane_g5_ParamLimits

0xc5db,	// (0x000206e4) linegrid_cam4_burst_pane_g5

0xc5ec,	// (0x000206f5) linegrid_cam4_burst_pane_g6_ParamLimits

0xc5ec,	// (0x000206f5) linegrid_cam4_burst_pane_g6

0x5068,	// (0x00019171) linegrid_cam4_burst_pane_g7_ParamLimits

0x5068,	// (0x00019171) linegrid_cam4_burst_pane_g7

0xc5fd,	// (0x00020706) cell_cam4_burst_pane_g1

0x5081,	// (0x0001918a) main_cam5_pane_t1_ParamLimits

0x5081,	// (0x0001918a) main_cam5_pane_t1

0x5093,	// (0x0001919c) main_cam5_pane_t2_ParamLimits

0x5093,	// (0x0001919c) main_cam5_pane_t2

0x50a5,	// (0x000191ae) main_cam5_pane_t3_ParamLimits

0x50a5,	// (0x000191ae) main_cam5_pane_t3

0x50b7,	// (0x000191c0) main_cam5_pane_t4_ParamLimits

0x50b7,	// (0x000191c0) main_cam5_pane_t4

0x50cd,	// (0x000191d6) main_cam5_pane_t5_ParamLimits

0x50cd,	// (0x000191d6) main_cam5_pane_t5

0x50df,	// (0x000191e8) main_cam5_pane_t6_ParamLimits

0x50df,	// (0x000191e8) main_cam5_pane_t6

0x50f1,	// (0x000191fa) main_cam5_pane_t7_ParamLimits

0x50f1,	// (0x000191fa) main_cam5_pane_t7

0x5103,	// (0x0001920c) main_cam5_pane_t8_ParamLimits

0x5103,	// (0x0001920c) main_cam5_pane_t8

0x511f,	// (0x00019228) main_cam5_pane_t9_ParamLimits

0x511f,	// (0x00019228) main_cam5_pane_t9

0x5131,	// (0x0001923a) main_cam5_pane_t10_ParamLimits

0x5131,	// (0x0001923a) main_cam5_pane_t10

0x5143,	// (0x0001924c) main_cam5_pane_t11_ParamLimits

0x5143,	// (0x0001924c) main_cam5_pane_t11

0x5155,	// (0x0001925e) main_cam5_pane_t12_ParamLimits

0x5155,	// (0x0001925e) main_cam5_pane_t12

0x516a,	// (0x00019273) main_cam5_pane_t13_ParamLimits

0x516a,	// (0x00019273) main_cam5_pane_t13

0x000c,

0xfa03,	// (0x00023b0c) main_cam5_pane_t_ParamLimits

0xfa03,	// (0x00023b0c) main_cam5_pane_t

0x75e6,	// (0x0001b6ef) popup_scut_keymap_window_ParamLimits

0x75e6,	// (0x0001b6ef) popup_scut_keymap_window

0xc610,	// (0x00020719) aid_size_cell_brow_shortcut

0x1ad2,	// (0x00015bdb) bg_popup_window_pane_cp010

0xc61c,	// (0x00020725) grid_scut_pane

0xc626,	// (0x0002072f) cell_scut_pane_ParamLimits

0xc626,	// (0x0002072f) cell_scut_pane

0xc63b,	// (0x00020744) cell_scut_pane_g1

0x5187,	// (0x00019290) cell_scut_pane_t1

0x5196,	// (0x0001929f) cell_scut_pane_t2

0xc644,	// (0x0002074d) cell_scut_pane_t3

0x0002,

0xfa1e,	// (0x00023b27) cell_scut_pane_t

0xb3f2,	// (0x0001f4fb) main_mup3_pane_g8_ParamLimits

0xb3f2,	// (0x0001f4fb) main_mup3_pane_g8

0x8551,	// (0x0001c65a) area_vitu2_query_pane_ParamLimits

0x8551,	// (0x0001c65a) area_vitu2_query_pane

0xc3c8,	// (0x000204d1) input_focus_pane_cp08

0x51a5,	// (0x000192ae) area_vitu2_query_pane_g1

0xc652,	// (0x0002075b) area_vitu2_query_pane_g2

0x0001,

0xfa25,	// (0x00023b2e) area_vitu2_query_pane_g

0xc661,	// (0x0002076a) area_vitu2_query_pane_t1_ParamLimits

0xc661,	// (0x0002076a) area_vitu2_query_pane_t1

0xc673,	// (0x0002077c) area_vitu2_query_pane_t2_ParamLimits

0xc673,	// (0x0002077c) area_vitu2_query_pane_t2

0xc685,	// (0x0002078e) area_vitu2_query_pane_t3_ParamLimits

0xc685,	// (0x0002078e) area_vitu2_query_pane_t3

0x51b1,	// (0x000192ba) area_vitu2_query_pane_t4_ParamLimits

0x51b1,	// (0x000192ba) area_vitu2_query_pane_t4

0x51d9,	// (0x000192e2) area_vitu2_query_pane_t5_ParamLimits

0x51d9,	// (0x000192e2) area_vitu2_query_pane_t5

0x5201,	// (0x0001930a) area_vitu2_query_pane_t6_ParamLimits

0x5201,	// (0x0001930a) area_vitu2_query_pane_t6

0x0006,

0xfa2a,	// (0x00023b33) area_vitu2_query_pane_t_ParamLimits

0xfa2a,	// (0x00023b33) area_vitu2_query_pane_t

0xc6ad,	// (0x000207b6) bg_button_pane_cp018

0xc6ba,	// (0x000207c3) bg_button_pane_cp021

0xc6c6,	// (0x000207cf) bg_button_pane_cp022

0xc6d5,	// (0x000207de) input_focus_pane_cp09

0xa507,	// (0x0001e610) aid_size_touch_mv_arrow_left

0x247f,	// (0x00016588) aid_size_touch_mv_arrow_right

0xc05b,	// (0x00020164) main_cset_slider_pane_g16_ParamLimits

0xc05b,	// (0x00020164) main_cset_slider_pane_g16

0xc067,	// (0x00020170) main_cset_slider_pane_g17_ParamLimits

0xc067,	// (0x00020170) main_cset_slider_pane_g17

0xc5fd,	// (0x00020706) cell_cam4_burst_pane_g1_ParamLimits

0x108e,	// (0x00015197) compa_mode_pane

0xc24c,	// (0x00020355) popup_vtel_slider_window_g3_ParamLimits

0xc24c,	// (0x00020355) popup_vtel_slider_window_g3

0xc260,	// (0x00020369) popup_vtel_slider_window_g4_ParamLimits

0xc260,	// (0x00020369) popup_vtel_slider_window_g4

0xc274,	// (0x0002037d) popup_vtel_slider_window_t1_ParamLimits

0xc274,	// (0x0002037d) popup_vtel_slider_window_t1

0x7635,	// (0x0001b73e) main_cl_pane

0x7bcc,	// (0x0001bcd5) popup_imed_adjust2_window_ParamLimits

0x26dd,	// (0x000167e6) bg_tb_trans_pane_cp05_ParamLimits

0x44ba,	// (0x000185c3) popup_imed_adjust2_window_g1_ParamLimits

0x44c9,	// (0x000185d2) popup_imed_adjust2_window_g2_ParamLimits

0x44c9,	// (0x000185d2) popup_imed_adjust2_window_g2

0x44d5,	// (0x000185de) popup_imed_adjust2_window_g3_ParamLimits

0x44d5,	// (0x000185de) popup_imed_adjust2_window_g3

0x0002,

0xf791,	// (0x0002389a) popup_imed_adjust2_window_g_ParamLimits

0xf791,	// (0x0002389a) popup_imed_adjust2_window_g

0x44e1,	// (0x000185ea) popup_imed_adjust2_window_t1_ParamLimits

0x44f9,	// (0x00018602) slider_imed_adjust_pane_ParamLimits

0x450d,	// (0x00018616) slider_imed_adjust_pane_g1_ParamLimits

0x451d,	// (0x00018626) slider_imed_adjust_pane_g2_ParamLimits

0x452d,	// (0x00018636) slider_imed_adjust_pane_g3_ParamLimits

0x453e,	// (0x00018647) slider_imed_adjust_pane_g4_ParamLimits

0xf798,	// (0x000238a1) slider_imed_adjust_pane_g_ParamLimits

0x832f,	// (0x0001c438) aid_touch_area_cam4_ParamLimits

0x832f,	// (0x0001c438) aid_touch_area_cam4

0x833d,	// (0x0001c446) battery_pane_cp01

0x83bc,	// (0x0001c4c5) main_camera4_pane_g6_ParamLimits

0x83bc,	// (0x0001c4c5) main_camera4_pane_g6

0x83da,	// (0x0001c4e3) main_camera4_pane_t2_ParamLimits

0x83da,	// (0x0001c4e3) main_camera4_pane_t2

0x0001,

0xf89f,	// (0x000239a8) main_camera4_pane_t_ParamLimits

0xf89f,	// (0x000239a8) main_camera4_pane_t

0x844c,	// (0x0001c555) aid_touch_area_vid4_ParamLimits

0x844c,	// (0x0001c555) aid_touch_area_vid4

0x83bc,	// (0x0001c4c5) main_video4_pane_g5_ParamLimits

0x83bc,	// (0x0001c4c5) main_video4_pane_g5

0x847c,	// (0x0001c585) vid4_progress_pane_ParamLimits

0x847c,	// (0x0001c585) vid4_progress_pane

0x4e2b,	// (0x00018f34) main_cset_slider_pane_g18_ParamLimits

0x4e2b,	// (0x00018f34) main_cset_slider_pane_g18

0x5075,	// (0x0001917e) cell_cam4_burst_pane_g2_ParamLimits

0x5075,	// (0x0001917e) cell_cam4_burst_pane_g2

0x0001,

0xf9fe,	// (0x00023b07) cell_cam4_burst_pane_g_ParamLimits

0xf9fe,	// (0x00023b07) cell_cam4_burst_pane_g

0xc6e4,	// (0x000207ed) bg_cl_pane_ParamLimits

0xc6e4,	// (0x000207ed) bg_cl_pane

0xc6f0,	// (0x000207f9) cl_header_pane_ParamLimits

0xc6f0,	// (0x000207f9) cl_header_pane

0xc6fc,	// (0x00020805) cl_listscroll_pane_ParamLimits

0xc6fc,	// (0x00020805) cl_listscroll_pane

0x524d,	// (0x00019356) bg_cl_pane_g1

0x5255,	// (0x0001935e) bg_cl_pane_g2

0x525d,	// (0x00019366) bg_cl_pane_g3

0x5265,	// (0x0001936e) bg_cl_pane_g4

0x526d,	// (0x00019376) bg_cl_pane_g5

0x5275,	// (0x0001937e) bg_cl_pane_g6

0x527d,	// (0x00019386) bg_cl_pane_g7

0x5285,	// (0x0001938e) bg_cl_pane_g8

0x528d,	// (0x00019396) bg_cl_pane_g9

0x0008,

0xfa39,	// (0x00023b42) bg_cl_pane_g

0xc708,	// (0x00020811) aid_height_cl_leading_ParamLimits

0xc708,	// (0x00020811) aid_height_cl_leading

0xc714,	// (0x0002081d) aid_height_cl_text_ParamLimits

0xc714,	// (0x0002081d) aid_height_cl_text

0x26cf,	// (0x000167d8) bg_cl_header_pane_ParamLimits

0x26cf,	// (0x000167d8) bg_cl_header_pane

0xc72c,	// (0x00020835) cl_header_pane_g1_ParamLimits

0xc72c,	// (0x00020835) cl_header_pane_g1

0xc739,	// (0x00020842) cl_header_pane_t1_ParamLimits

0xc739,	// (0x00020842) cl_header_pane_t1

0x5295,	// (0x0001939e) cl_list_pane

0x529e,	// (0x000193a7) hc_scroll_pane_cp01

0x1d86,	// (0x00015e8f) bg_cl_header_pane_g1

0x4cd8,	// (0x00018de1) bg_cl_header_pane_g2

0x1da6,	// (0x00015eaf) bg_cl_header_pane_g3

0x4ce8,	// (0x00018df1) bg_cl_header_pane_g4

0x4ce0,	// (0x00018de9) bg_cl_header_pane_g5

0x4f63,	// (0x0001906c) bg_cl_header_pane_g6

0x4d00,	// (0x00018e09) bg_cl_header_pane_g7

0x4d08,	// (0x00018e11) bg_cl_header_pane_g8

0x4cf8,	// (0x00018e01) bg_cl_header_pane_g9

0x0008,

0xfa4c,	// (0x00023b55) bg_cl_header_pane_g

0xc74b,	// (0x00020854) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xc74b,	// (0x00020854) hc_cl_list_double_graphic_heading_pane

0xc75b,	// (0x00020864) hc_cl_list_single_graphic_pane_ParamLimits

0xc75b,	// (0x00020864) hc_cl_list_single_graphic_pane

0xc76d,	// (0x00020876) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xc76d,	// (0x00020876) hc_cl_list_single_graphic_pane_g1

0xc779,	// (0x00020882) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xc779,	// (0x00020882) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfa5f,	// (0x00023b68) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfa5f,	// (0x00023b68) hc_cl_list_single_graphic_pane_g

0xc78d,	// (0x00020896) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xc78d,	// (0x00020896) hc_cl_list_single_graphic_pane_t1

0xc76d,	// (0x00020876) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xc76d,	// (0x00020876) hc_cl_list_double_graphic_heading_pane_g1

0xc7a2,	// (0x000208ab) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xc7a2,	// (0x000208ab) hc_cl_list_double_graphic_heading_pane_g2

0xc7b6,	// (0x000208bf) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xc7b6,	// (0x000208bf) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfa64,	// (0x00023b6d) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfa64,	// (0x00023b6d) hc_cl_list_double_graphic_heading_pane_g

0xc7ca,	// (0x000208d3) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xc7ca,	// (0x000208d3) hc_cl_list_double_graphic_heading_pane_t1

0xc7df,	// (0x000208e8) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xc7df,	// (0x000208e8) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfa6b,	// (0x00023b74) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfa6b,	// (0x00023b74) hc_cl_list_double_graphic_heading_pane_t

0x8930,	// (0x0001ca39) vid4_progress_pane_g1

0x893f,	// (0x0001ca48) vid4_progress_pane_g2

0x894e,	// (0x0001ca57) vid4_progress_pane_g3

0x895d,	// (0x0001ca66) vid4_progress_pane_g4

0x0004,

0xfa70,	// (0x00023b79) vid4_progress_pane_g

0x8975,	// (0x0001ca7e) vid4_progress_pane_t1

0x898b,	// (0x0001ca94) vid4_progress_pane_t2

0x0002,

0xfa7b,	// (0x00023b84) vid4_progress_pane_t

0x89b5,	// (0x0001cabe) wait_bar_pane_cp07

0x3dd0,	// (0x00017ed9) blid_firmament_pane_ParamLimits

0x3e11,	// (0x00017f1a) popup_blid_sat_info2_window_g1

0x3e35,	// (0x00017f3e) popup_blid_sat_info2_window_t3

0x3e43,	// (0x00017f4c) popup_blid_sat_info2_window_t4

0x3e51,	// (0x00017f5a) popup_blid_sat_info2_window_t5

0x3e5f,	// (0x00017f68) popup_blid_sat_info2_window_t6

0x3e6f,	// (0x00017f78) popup_blid_sat_info2_window_t7

0x3e7d,	// (0x00017f86) popup_blid_sat_info2_window_t8

0x3e8b,	// (0x00017f94) popup_blid_sat_info2_window_t9

0x3e99,	// (0x00017fa2) popup_blid_sat_info2_window_t10

0x3f35,	// (0x0001803e) aid_firma_cardinal_ParamLimits

0x3f49,	// (0x00018052) blid_firmament_pane_t1_ParamLimits

0x3f60,	// (0x00018069) blid_firmament_pane_t2_ParamLimits

0x3f77,	// (0x00018080) blid_firmament_pane_t3_ParamLimits

0x3f8e,	// (0x00018097) blid_firmament_pane_t4_ParamLimits

0xf68a,	// (0x00023793) blid_firmament_pane_t_ParamLimits

0x3fa5,	// (0x000180ae) blid_sat_info_pane_ParamLimits

0x7b40,	// (0x0001bc49) main_cam_set_pane_ParamLimits

0xb9f6,	// (0x0001faff) aid_size_cell_colour_35_ParamLimits

0xba0d,	// (0x0001fb16) aid_size_cell_colour_112_ParamLimits

0xba24,	// (0x0001fb2d) aid_size_cell_effect_ParamLimits

0x10e1,	// (0x000151ea) bg_tb_trans_pane_cp02_ParamLimits

0x4297,	// (0x000183a0) heading_imed_pane_ParamLimits

0xba3e,	// (0x0001fb47) listscroll_imed_pane_ParamLimits

0x3136,	// (0x0001723f) popup_call2_audio_first_window_g5_ParamLimits

0x3136,	// (0x0001723f) popup_call2_audio_first_window_g5

0x8116,	// (0x0001c21f) aid_size_touch_image3_arrow_left_ParamLimits

0x8116,	// (0x0001c21f) aid_size_touch_image3_arrow_left

0x812a,	// (0x0001c233) aid_size_touch_image3_arrow_right_ParamLimits

0x812a,	// (0x0001c233) aid_size_touch_image3_arrow_right

0x89a0,	// (0x0001caa9) vid4_progress_pane_t3

0xbba2,	// (0x0001fcab) main_hwr_training_symbol_option_pane_ParamLimits

0xbba2,	// (0x0001fcab) main_hwr_training_symbol_option_pane

0x46e7,	// (0x000187f0) popup_hwr_training_preview_window_ParamLimits

0x46e7,	// (0x000187f0) popup_hwr_training_preview_window

0x7e22,	// (0x0001bf2b) hwr_training_navi_pane_g5_ParamLimits

0x7e22,	// (0x0001bf2b) hwr_training_navi_pane_g5

0x4cb4,	// (0x00018dbd) popup_char_count_window

0x7627,	// (0x0001b730) bg_popup_sub_pane_cp20_ParamLimits

0x887e,	// (0x0001c987) list_vitu2_match_list_pane_ParamLimits

0x888a,	// (0x0001c993) vitu2_page_scroll_pane_ParamLimits

0x888a,	// (0x0001c993) vitu2_page_scroll_pane

0x535b,	// (0x00019464) list_single_hwr_training_symbol_option_pane_ParamLimits

0x535b,	// (0x00019464) list_single_hwr_training_symbol_option_pane

0x536e,	// (0x00019477) list_single_hwr_training_symbol_option_pane_g1

0x5376,	// (0x0001947f) list_single_hwr_training_symbol_option_pane_t1

0x5384,	// (0x0001948d) bg_button_pane_cp023

0x538d,	// (0x00019496) bg_button_pane_cp024

0xc823,	// (0x0002092c) vitu2_page_scroll_pane_g1

0xc82b,	// (0x00020934) vitu2_page_scroll_pane_g2

0x0001,

0xfa82,	// (0x00023b8b) vitu2_page_scroll_pane_g

0xc833,	// (0x0002093c) vitu2_page_scroll_pane_t1

0x3fd4,	// (0x000180dd) popup_char_count_window_g1

0x53c0,	// (0x000194c9) popup_char_count_window_g2

0x53c9,	// (0x000194d2) popup_char_count_window_g3

0x0002,

0xfa87,	// (0x00023b90) popup_char_count_window_g

0x53d2,	// (0x000194db) popup_char_count_window_t1

0x7635,	// (0x0001b73e) main_vded2_pane

0x44a8,	// (0x000185b1) aid_size_cell_imed_line

0x44b2,	// (0x000185bb) grid_imed_line_width_pane

0x84c7,	// (0x0001c5d0) vid4_indicators_pane_g4

0x53e0,	// (0x000194e9) cell_imed_line_width_pane_ParamLimits

0x53e0,	// (0x000194e9) cell_imed_line_width_pane

0x53f2,	// (0x000194fb) cell_imed_line_width_pane_g1

0x53fb,	// (0x00019504) cell_imed_line_width_pane_g2

0x0001,

0xfa8e,	// (0x00023b97) cell_imed_line_width_pane_g

0xc842,	// (0x0002094b) main_vded2_pane_g1_ParamLimits

0xc842,	// (0x0002094b) main_vded2_pane_g1

0xc84f,	// (0x00020958) main_vded2_pane_g2_ParamLimits

0xc84f,	// (0x00020958) main_vded2_pane_g2

0x0001,

0xfa93,	// (0x00023b9c) main_vded2_pane_g_ParamLimits

0xfa93,	// (0x00023b9c) main_vded2_pane_g

0xc85b,	// (0x00020964) vded2_slider_pane_ParamLimits

0xc85b,	// (0x00020964) vded2_slider_pane

0xc868,	// (0x00020971) aid_size_touch_vded2_end

0xc870,	// (0x00020979) aid_size_touch_vded2_playhead

0xc878,	// (0x00020981) aid_size_touch_vded2_start

0xc880,	// (0x00020989) vded2_slider_bg_pane

0xc889,	// (0x00020992) vded2_slider_pane_g1

0xc892,	// (0x0002099b) vded2_slider_pane_g2

0xc89a,	// (0x000209a3) vded2_slider_pane_g3

0x0002,

0xfa98,	// (0x00023ba1) vded2_slider_pane_g

0xc8a3,	// (0x000209ac) vded2_slider_bg_pane_g1

0xc8ac,	// (0x000209b5) vded2_slider_bg_pane_g2

0xc8b5,	// (0x000209be) vded2_slider_bg_pane_g3

0x0002,

0xfa9f,	// (0x00023ba8) vded2_slider_bg_pane_g

0xa7e2,	// (0x0001e8eb) aid_postcard_touch_down_pane_ParamLimits

0xa7e2,	// (0x0001e8eb) aid_postcard_touch_down_pane

0xa7ee,	// (0x0001e8f7) aid_postcard_touch_up_pane_ParamLimits

0xa7ee,	// (0x0001e8f7) aid_postcard_touch_up_pane

0x7635,	// (0x0001b73e) main_blid2_pane

0x7b69,	// (0x0001bc72) popup_blid2_search_window

0x108e,	// (0x00015197) blid2_gps_pane

0x108e,	// (0x00015197) blid2_navig_pane

0x108e,	// (0x00015197) blid2_search_pane

0x108e,	// (0x00015197) blid2_tripm_pane

0xc8be,	// (0x000209c7) blid2_search_pane_g1_ParamLimits

0xc8be,	// (0x000209c7) blid2_search_pane_g1

0xc8ca,	// (0x000209d3) blid2_search_pane_t1_ParamLimits

0xc8ca,	// (0x000209d3) blid2_search_pane_t1

0xc8dc,	// (0x000209e5) aid_size_cell_blid2_gps_ParamLimits

0xc8dc,	// (0x000209e5) aid_size_cell_blid2_gps

0xc8ec,	// (0x000209f5) blid2_gps_pane_g1_ParamLimits

0xc8ec,	// (0x000209f5) blid2_gps_pane_g1

0xc8f8,	// (0x00020a01) grid_blid2_satellite_pane_ParamLimits

0xc8f8,	// (0x00020a01) grid_blid2_satellite_pane

0xc904,	// (0x00020a0d) blid2_navig_pane_g1_ParamLimits

0xc904,	// (0x00020a0d) blid2_navig_pane_g1

0xc910,	// (0x00020a19) blid2_navig_pane_t1_ParamLimits

0xc910,	// (0x00020a19) blid2_navig_pane_t1

0xc922,	// (0x00020a2b) blid2_navig_pane_t2_ParamLimits

0xc922,	// (0x00020a2b) blid2_navig_pane_t2

0x0001,

0xfaa6,	// (0x00023baf) blid2_navig_pane_t_ParamLimits

0xfaa6,	// (0x00023baf) blid2_navig_pane_t

0xc934,	// (0x00020a3d) blid2_navig_ring_pane_ParamLimits

0xc934,	// (0x00020a3d) blid2_navig_ring_pane

0xc940,	// (0x00020a49) blid2_speed_pane_ParamLimits

0xc940,	// (0x00020a49) blid2_speed_pane

0xc94c,	// (0x00020a55) blid2_tripm_pane_g1_ParamLimits

0xc94c,	// (0x00020a55) blid2_tripm_pane_g1

0xc958,	// (0x00020a61) blid2_tripm_pane_g2_ParamLimits

0xc958,	// (0x00020a61) blid2_tripm_pane_g2

0xc964,	// (0x00020a6d) blid2_tripm_pane_g3_ParamLimits

0xc964,	// (0x00020a6d) blid2_tripm_pane_g3

0xc970,	// (0x00020a79) blid2_tripm_pane_g4_ParamLimits

0xc970,	// (0x00020a79) blid2_tripm_pane_g4

0xc97c,	// (0x00020a85) blid2_tripm_pane_g5_ParamLimits

0xc97c,	// (0x00020a85) blid2_tripm_pane_g5

0x0005,

0xfaab,	// (0x00023bb4) blid2_tripm_pane_g_ParamLimits

0xfaab,	// (0x00023bb4) blid2_tripm_pane_g

0xc994,	// (0x00020a9d) blid2_tripm_pane_t1_ParamLimits

0xc994,	// (0x00020a9d) blid2_tripm_pane_t1

0xc9a6,	// (0x00020aaf) blid2_tripm_pane_t2_ParamLimits

0xc9a6,	// (0x00020aaf) blid2_tripm_pane_t2

0xc9b8,	// (0x00020ac1) blid2_tripm_pane_t3_ParamLimits

0xc9b8,	// (0x00020ac1) blid2_tripm_pane_t3

0x0003,

0xfab8,	// (0x00023bc1) blid2_tripm_pane_t_ParamLimits

0xfab8,	// (0x00023bc1) blid2_tripm_pane_t

0xc9e8,	// (0x00020af1) cell_blid2_satellite_pane_ParamLimits

0xc9e8,	// (0x00020af1) cell_blid2_satellite_pane

0xca00,	// (0x00020b09) cell_blid2_satellite_pane_g1

0x5403,	// (0x0001950c) cell_blid2_satellite_pane_t1

0x1b4a,	// (0x00015c53) blid2_speed_pane_g1

0x5411,	// (0x0001951a) blid2_speed_pane_t1

0x541f,	// (0x00019528) blid2_speed_pane_t2

0x0001,

0xfac1,	// (0x00023bca) blid2_speed_pane_t

0x1b4a,	// (0x00015c53) blid2_navig_ring_pane_g1

0xca09,	// (0x00020b12) blid2_navig_ring_pane_g2

0xca11,	// (0x00020b1a) blid2_navig_ring_pane_g3

0xca19,	// (0x00020b22) blid2_navig_ring_pane_g4

0xca21,	// (0x00020b2a) blid2_navig_ring_pane_g5

0x0004,

0xfac6,	// (0x00023bcf) blid2_navig_ring_pane_g

0x108e,	// (0x00015197) bg_popup_window_pane_cp011

0x542d,	// (0x00019536) popup_blid2_search_window_g1

0x5435,	// (0x0001953e) popup_blid2_search_window_t1

0x5443,	// (0x0001954c) popup_blid2_search_window_t2

0x0001,

0xfad1,	// (0x00023bda) popup_blid2_search_window_t

0x1c95,	// (0x00015d9e) main_browser_pane_g1

0x186d,	// (0x00015976) main_browser_pane_ParamLimits

0x7b40,	// (0x0001bc49) bg_button_pane_cp011_ParamLimits

0x87a6,	// (0x0001c8af) cell_vitu2_function_pane_g1_ParamLimits

0x26dd,	// (0x000167e6) bg_popup_sub_pane_cp22_ParamLimits

0xc3c8,	// (0x000204d1) input_focus_pane_cp08_ParamLimits

0xc3df,	// (0x000204e8) popup_vitu2_query_button_pane_ParamLimits

0xc3df,	// (0x000204e8) popup_vitu2_query_button_pane

0xc3f0,	// (0x000204f9) popup_vitu2_query_input_button_pane

0x4fcb,	// (0x000190d4) popup_vitu2_query_window_g1_ParamLimits

0xc3f8,	// (0x00020501) popup_vitu2_query_window_g2_ParamLimits

0xf9d2,	// (0x00023adb) popup_vitu2_query_window_g_ParamLimits

0x108e,	// (0x00015197) bg_button_pane_cp026

0xca29,	// (0x00020b32) popup_vitu2_query_input_button_pane_g1

0x108e,	// (0x00015197) bg_button_pane_cp025

0x5451,	// (0x0001955a) popup_vitu2_query_button_pane_t1

0xb170,	// (0x0001f279) main_mp3_pane_t6

0xb17e,	// (0x0001f287) popup_slider_window_cp01

0x83fa,	// (0x0001c503) cam4_battery_pane

0x83fa,	// (0x0001c503) cam4_battery_pane_cp02

0x83fa,	// (0x0001c503) cam4_battery_pane_cp01

0x83fa,	// (0x0001c503) cam4_battery_pane_cp03

0x545f,	// (0x00019568) cam4_battery_pane_g1

0x1b4a,	// (0x00015c53) cam4_battery_pane_g2

0x0001,

0xfad6,	// (0x00023bdf) cam4_battery_pane_g

0x3ea7,	// (0x00017fb0) popup_blid_sat_info2_window_t11

0xa507,	// (0x0001e610) aid_size_touch_mv_arrow_left_ParamLimits

0x247f,	// (0x00016588) aid_size_touch_mv_arrow_right_ParamLimits

0x24d8,	// (0x000165e1) navi_pane_g1_ParamLimits

0x24e4,	// (0x000165ed) navi_pane_g2_ParamLimits

0xa52b,	// (0x0001e634) navi_pane_g3_ParamLimits

0xf38b,	// (0x00023494) navi_pane_g_ParamLimits

0xa548,	// (0x0001e651) navi_pane_mv_t1_ParamLimits

0xba4a,	// (0x0001fb53) grid_imed_effect_pane_ParamLimits

0x9383,	// (0x0001d48c) aid_placing_vt_slider_lsc

0x1bd7,	// (0x00015ce0) aid_placing_vt_slider_prt

0x10e1,	// (0x000151ea) bg_tb_trans_pane_cp01_ParamLimits

0x40ec,	// (0x000181f5) popup_image_details_window_g1_ParamLimits

0x40ff,	// (0x00018208) popup_image_details_window_g2_ParamLimits

0x4114,	// (0x0001821d) popup_image_details_window_g3_ParamLimits

0x4114,	// (0x0001821d) popup_image_details_window_g3

0xf6ca,	// (0x000237d3) popup_image_details_window_g_ParamLimits

0x4128,	// (0x00018231) popup_image_details_window_t1_ParamLimits

0x413a,	// (0x00018243) popup_image_details_window_t2_ParamLimits

0x4153,	// (0x0001825c) popup_image_details_window_t3_ParamLimits

0x4167,	// (0x00018270) popup_image_details_window_t4_ParamLimits

0x4182,	// (0x0001828b) popup_image_details_window_t5_ParamLimits

0xf6d1,	// (0x000237da) popup_image_details_window_t_ParamLimits

0xc720,	// (0x00020829) cl_header_name_pane_ParamLimits

0xc720,	// (0x00020829) cl_header_name_pane

0xca31,	// (0x00020b3a) cl_header_name_pane_t1_ParamLimits

0xca31,	// (0x00020b3a) cl_header_name_pane_t1

0xca48,	// (0x00020b51) cl_header_name_pane_t2_ParamLimits

0xca48,	// (0x00020b51) cl_header_name_pane_t2

0xca72,	// (0x00020b7b) cl_header_name_pane_t3_ParamLimits

0xca72,	// (0x00020b7b) cl_header_name_pane_t3

0x0002,

0xfadb,	// (0x00023be4) cl_header_name_pane_t_ParamLimits

0xfadb,	// (0x00023be4) cl_header_name_pane_t

0x2571,	// (0x0001667a) navi_pane_mv_g2_ParamLimits

0x4c7f,	// (0x00018d88) field_vitu2_entry_pane_g1_ParamLimits

0x4c8b,	// (0x00018d94) field_vitu2_entry_pane_g2_ParamLimits

0x2699,	// (0x000167a2) field_vitu2_entry_pane_g3_ParamLimits

0x2699,	// (0x000167a2) field_vitu2_entry_pane_g3

0xf8d1,	// (0x000239da) field_vitu2_entry_pane_g_ParamLimits

0x8672,	// (0x0001c77b) cell_vitu2_itu_pane_g1_ParamLimits

0x8684,	// (0x0001c78d) cell_vitu2_itu_pane_g2_ParamLimits

0x8684,	// (0x0001c78d) cell_vitu2_itu_pane_g2

0x0001,

0xf8dd,	// (0x000239e6) cell_vitu2_itu_pane_g_ParamLimits

0xf8dd,	// (0x000239e6) cell_vitu2_itu_pane_g

0x7b40,	// (0x0001bc49) bg_vkb2_func_pane_cp05_ParamLimits

0x7b40,	// (0x0001bc49) bg_vkb2_func_pane_cp05

0x7b40,	// (0x0001bc49) bg_vkb2_func_pane_cp03

0x7b40,	// (0x0001bc49) bg_vkb2_func_pane_cp04

0x7b40,	// (0x0001bc49) bg_vkb2_func_pane_cp10_ParamLimits

0x7b40,	// (0x0001bc49) bg_vkb2_func_pane_cp10

0xc6c6,	// (0x000207cf) bg_vkb2_func_pane_cp08

0xc6ad,	// (0x000207b6) bg_vkb2_func_pane_cp06

0xc6ba,	// (0x000207c3) bg_vkb2_func_pane_cp07

0x5396,	// (0x0001949f) bg_vkb2_func_pane_cp11_ParamLimits

0x5396,	// (0x0001949f) bg_vkb2_func_pane_cp11

0x53ab,	// (0x000194b4) bg_vkb2_func_pane_cp12_ParamLimits

0x53ab,	// (0x000194b4) bg_vkb2_func_pane_cp12

0x108e,	// (0x00015197) bg_vkb2_func_pane_cp09

0x4cd8,	// (0x00018de1) bg_vkb2_func_pane_g1

0x1da6,	// (0x00015eaf) bg_vkb2_func_pane_g2

0x4ce0,	// (0x00018de9) bg_vkb2_func_pane_g3

0x4ce8,	// (0x00018df1) bg_vkb2_func_pane_g4

0x4f63,	// (0x0001906c) bg_vkb2_func_pane_g5

0x4d00,	// (0x00018e09) bg_vkb2_func_pane_g6

0x4d08,	// (0x00018e11) bg_vkb2_func_pane_g7

0x4cf8,	// (0x00018e01) bg_vkb2_func_pane_g8

0x1d86,	// (0x00015e8f) bg_vkb2_func_pane_g9

0x0008,

0xfae2,	// (0x00023beb) bg_vkb2_func_pane_g

0xc988,	// (0x00020a91) blid2_tripm_pane_g6_ParamLimits

0xc988,	// (0x00020a91) blid2_tripm_pane_g6

0x4a0e,	// (0x00018b17) mp4_progress_pane_g1

0xc9dc,	// (0x00020ae5) blid2_tripm_values_pane_ParamLimits

0xc9dc,	// (0x00020ae5) blid2_tripm_values_pane

0xca97,	// (0x00020ba0) blid2_tripm_values_pane_t1

0xcaa5,	// (0x00020bae) blid2_tripm_values_pane_t2

0xcab3,	// (0x00020bbc) blid2_tripm_values_pane_t3

0xcac1,	// (0x00020bca) blid2_tripm_values_pane_t4

0xcacf,	// (0x00020bd8) blid2_tripm_values_pane_t5

0xcadd,	// (0x00020be6) blid2_tripm_values_pane_t6

0xcaeb,	// (0x00020bf4) blid2_tripm_values_pane_t7

0xcaf9,	// (0x00020c02) blid2_tripm_values_pane_t8

0xcb07,	// (0x00020c10) blid2_tripm_values_pane_t9

0x0008,

0xfaf5,	// (0x00023bfe) blid2_tripm_values_pane_t

0x93bd,	// (0x0001d4c6) call_video_pane_t1_ParamLimits

0x93da,	// (0x0001d4e3) call_video_pane_t2_ParamLimits

0xf222,	// (0x0002332b) call_video_pane_t_ParamLimits

0xa79a,	// (0x0001e8a3) msg_header_pane_g1_ParamLimits

0x279a,	// (0x000168a3) msg_header_pane_g2_ParamLimits

0x279a,	// (0x000168a3) msg_header_pane_g2

0x0001,

0xf42e,	// (0x00023537) msg_header_pane_g_ParamLimits

0xf42e,	// (0x00023537) msg_header_pane_g

0x186d,	// (0x00015976) main_clock2_pane_ParamLimits

0xb866,	// (0x0001f96f) grid_clock2_toolbar_pane_ParamLimits

0xb866,	// (0x0001f96f) grid_clock2_toolbar_pane

0xb866,	// (0x0001f96f) listscroll_clock2_pane_ParamLimits

0xb866,	// (0x0001f96f) listscroll_clock2_pane

0xb902,	// (0x0001fa0b) main_clock2_pane_t3_ParamLimits

0xb902,	// (0x0001fa0b) main_clock2_pane_t3

0xb914,	// (0x0001fa1d) main_clock2_pane_t4_ParamLimits

0xb914,	// (0x0001fa1d) main_clock2_pane_t4

0x5469,	// (0x00019572) cell_clock2_toolbar_pane

0x5471,	// (0x0001957a) cell_clock2_toolbar_pane_cp01

0x5471,	// (0x0001957a) cell_clock2_toolbar_pane_cp02

0x5479,	// (0x00019582) cell_clock2_toolbar_pane_cp03

0x5481,	// (0x0001958a) list_clock2_pane

0x5489,	// (0x00019592) scroll_pane_cp10

0x5491,	// (0x0001959a) list_single_clock2_pane_ParamLimits

0x5491,	// (0x0001959a) list_single_clock2_pane

0x1ad2,	// (0x00015bdb) list_highlight_pane_cp08

0x549e,	// (0x000195a7) list_single_clock2_pane_t1

0x54ac,	// (0x000195b5) list_single_clock2_pane_t2

0x0001,

0xfb08,	// (0x00023c11) list_single_clock2_pane_t

0x108e,	// (0x00015197) bg_button_pane_cp10

0x54ba,	// (0x000195c3) cell_clock2_toolbar_pane_g1

0x7adc,	// (0x0001bbe5) aid_main_viewer_pane_g1_ParamLimits

0x7adc,	// (0x0001bbe5) aid_main_viewer_pane_g1

0x7ae8,	// (0x0001bbf1) aid_main_viewer_pane_g2_ParamLimits

0x7ae8,	// (0x0001bbf1) aid_main_viewer_pane_g2

0xa7a6,	// (0x0001e8af) aid_main_viewer_pane_g3_ParamLimits

0xa7a6,	// (0x0001e8af) aid_main_viewer_pane_g3

0xa7b5,	// (0x0001e8be) aid_main_viewer_pane_g4_ParamLimits

0xa7b5,	// (0x0001e8be) aid_main_viewer_pane_g4

0x0003,

0xf43f,	// (0x00023548) aid_main_viewer_pane_g_ParamLimits

0xf43f,	// (0x00023548) aid_main_viewer_pane_g

0x7627,	// (0x0001b730) main_calc_pane_ParamLimits

0x7b4e,	// (0x0001bc57) main_dialer2_pane_ParamLimits

0x7635,	// (0x0001b73e) main_cam6_pane

0x7635,	// (0x0001b73e) main_vid6_pane

0xb872,	// (0x0001f97b) listscroll_gen_pane_cp06_ParamLimits

0xb872,	// (0x0001f97b) listscroll_gen_pane_cp06

0xb926,	// (0x0001fa2f) main_clock2_pane_t5_ParamLimits

0xb926,	// (0x0001fa2f) main_clock2_pane_t5

0xb96f,	// (0x0001fa78) aid_call2_pane_cp10_ParamLimits

0xb981,	// (0x0001fa8a) aid_call_pane_cp10_ParamLimits

0x2473,	// (0x0001657c) popup_clock_analogue_window_cp10_g1_ParamLimits

0x2473,	// (0x0001657c) popup_clock_analogue_window_cp10_g2_ParamLimits

0xb993,	// (0x0001fa9c) popup_clock_analogue_window_cp10_g3_ParamLimits

0xb993,	// (0x0001fa9c) popup_clock_analogue_window_cp10_g4_ParamLimits

0x2473,	// (0x0001657c) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf786,	// (0x0002388f) popup_clock_analogue_window_cp10_g_ParamLimits

0xb9a5,	// (0x0001faae) popup_clock_analogue_window_cp10_t1_ParamLimits

0x4a66,	// (0x00018b6f) cell_dialer2_keypad_pane_g2_ParamLimits

0x4a66,	// (0x00018b6f) cell_dialer2_keypad_pane_g2

0x0001,

0xf870,	// (0x00023979) cell_dialer2_keypad_pane_g_ParamLimits

0xf870,	// (0x00023979) cell_dialer2_keypad_pane_g

0x1b1c,	// (0x00015c25) cell_dialer2_keypad_pane_t1

0xbf50,	// (0x00020059) main_cset_text2_pane_ParamLimits

0xbf50,	// (0x00020059) main_cset_text2_pane

0x51a5,	// (0x000192ae) area_vitu2_query_pane_g1_ParamLimits

0xc652,	// (0x0002075b) area_vitu2_query_pane_g2_ParamLimits

0xfa25,	// (0x00023b2e) area_vitu2_query_pane_g_ParamLimits

0x5229,	// (0x00019332) area_vitu2_query_pane_t7_ParamLimits

0x5229,	// (0x00019332) area_vitu2_query_pane_t7

0xc6ad,	// (0x000207b6) bg_button_pane_cp018_ParamLimits

0xc6ba,	// (0x000207c3) bg_button_pane_cp021_ParamLimits

0xc6c6,	// (0x000207cf) bg_button_pane_cp022_ParamLimits

0xc6c6,	// (0x000207cf) bg_vkb2_func_pane_cp08_ParamLimits

0xc6ad,	// (0x000207b6) bg_vkb2_func_pane_cp06_ParamLimits

0xc6ba,	// (0x000207c3) bg_vkb2_func_pane_cp07_ParamLimits

0xc6d5,	// (0x000207de) input_focus_pane_cp09_ParamLimits

0x89c5,	// (0x0001cace) cam6_autofocus_pane_ParamLimits

0x89c5,	// (0x0001cace) cam6_autofocus_pane

0x89e1,	// (0x0001caea) cam6_image_uncrop_pane_ParamLimits

0x89e1,	// (0x0001caea) cam6_image_uncrop_pane

0x8a04,	// (0x0001cb0d) cam6_indi_pane_ParamLimits

0x8a04,	// (0x0001cb0d) cam6_indi_pane

0x8a1e,	// (0x0001cb27) cam6_mode_pane_ParamLimits

0x8a1e,	// (0x0001cb27) cam6_mode_pane

0x8a32,	// (0x0001cb3b) cam6_timer_pane_ParamLimits

0x8a32,	// (0x0001cb3b) cam6_timer_pane

0x8a3e,	// (0x0001cb47) cam6_zoom_pane_ParamLimits

0x8a3e,	// (0x0001cb47) cam6_zoom_pane

0xcb15,	// (0x00020c1e) cam6_mode_pane_g1_ParamLimits

0xcb15,	// (0x00020c1e) cam6_mode_pane_g1

0xcb21,	// (0x00020c2a) cam6_mode_pane_g2_ParamLimits

0xcb21,	// (0x00020c2a) cam6_mode_pane_g2

0xcb2d,	// (0x00020c36) cam6_mode_pane_g3_ParamLimits

0xcb2d,	// (0x00020c36) cam6_mode_pane_g3

0xcb39,	// (0x00020c42) cam6_mode_pane_g4_ParamLimits

0xcb39,	// (0x00020c42) cam6_mode_pane_g4

0x0003,

0xfb0d,	// (0x00023c16) cam6_mode_pane_g_ParamLimits

0xfb0d,	// (0x00023c16) cam6_mode_pane_g

0x42bf,	// (0x000183c8) bg_tb_trans_pane_cp08_ParamLimits

0x42bf,	// (0x000183c8) bg_tb_trans_pane_cp08

0x54ce,	// (0x000195d7) cam6_battery_pane_ParamLimits

0x54ce,	// (0x000195d7) cam6_battery_pane

0x54e4,	// (0x000195ed) cam6_indi_pane_g1_ParamLimits

0x54e4,	// (0x000195ed) cam6_indi_pane_g1

0x54f6,	// (0x000195ff) cam6_indi_pane_g2_ParamLimits

0x54f6,	// (0x000195ff) cam6_indi_pane_g2

0x5508,	// (0x00019611) cam6_indi_pane_g3_ParamLimits

0x5508,	// (0x00019611) cam6_indi_pane_g3

0x0002,

0xfb16,	// (0x00023c1f) cam6_indi_pane_g_ParamLimits

0xfb16,	// (0x00023c1f) cam6_indi_pane_g

0x551a,	// (0x00019623) cam6_indi_pane_t1_ParamLimits

0x551a,	// (0x00019623) cam6_indi_pane_t1

0xbc8b,	// (0x0001fd94) cam6_autofocus_pane_g1

0xbc83,	// (0x0001fd8c) cam6_autofocus_pane_g2

0xbc9b,	// (0x0001fda4) cam6_autofocus_pane_g3

0xbc93,	// (0x0001fd9c) cam6_autofocus_pane_g4

0x0003,

0xfb1d,	// (0x00023c26) cam6_autofocus_pane_g

0x5540,	// (0x00019649) cam6_timer_pane_g1

0x5548,	// (0x00019651) cam6_timer_pane_t1

0x5556,	// (0x0001965f) cam6_zoom_cont_pane

0x555e,	// (0x00019667) cam6_zoom_pane_g1

0x5566,	// (0x0001966f) cam6_zoom_pane_g2

0xcb45,	// (0x00020c4e) cam6_zoom_pane_g3

0x0002,

0xfb26,	// (0x00023c2f) cam6_zoom_pane_g

0x1b4a,	// (0x00015c53) cam6_battery_pane_g1

0x1b4a,	// (0x00015c53) cam6_battery_pane_g2

0x0001,

0xf3ef,	// (0x000234f8) cam6_battery_pane_g

0x556e,	// (0x00019677) cam6_zoom_cont_pane_g1

0x5577,	// (0x00019680) cam6_zoom_cont_pane_g2

0x5580,	// (0x00019689) cam6_zoom_cont_pane_g3

0x0002,

0xfb2d,	// (0x00023c36) cam6_zoom_cont_pane_g

0xcb62,	// (0x00020c6b) cam6_mode_pane_cp_ParamLimits

0xcb62,	// (0x00020c6b) cam6_mode_pane_cp

0xcb76,	// (0x00020c7f) cam6_zoom_pane_cp_ParamLimits

0xcb76,	// (0x00020c7f) cam6_zoom_pane_cp

0xcb8c,	// (0x00020c95) vid6_image_uncrop_cif_pane_ParamLimits

0xcb8c,	// (0x00020c95) vid6_image_uncrop_cif_pane

0xcbae,	// (0x00020cb7) vid6_image_uncrop_nhd_pane_ParamLimits

0xcbae,	// (0x00020cb7) vid6_image_uncrop_nhd_pane

0xcbc5,	// (0x00020cce) vid6_image_uncrop_vga_pane_ParamLimits

0xcbc5,	// (0x00020cce) vid6_image_uncrop_vga_pane

0xcbdc,	// (0x00020ce5) vid6_image_uncrop_wvga_pane_ParamLimits

0xcbdc,	// (0x00020ce5) vid6_image_uncrop_wvga_pane

0xcbf3,	// (0x00020cfc) vid6_indi_pane_ParamLimits

0xcbf3,	// (0x00020cfc) vid6_indi_pane

0x42bf,	// (0x000183c8) bg_tb_trans_pane_cp09_ParamLimits

0x42bf,	// (0x000183c8) bg_tb_trans_pane_cp09

0x5594,	// (0x0001969d) cam6_battery_pane_cp_ParamLimits

0x5594,	// (0x0001969d) cam6_battery_pane_cp

0x55a0,	// (0x000196a9) vid6_indi_pane_g1_ParamLimits

0x55a0,	// (0x000196a9) vid6_indi_pane_g1

0x55b2,	// (0x000196bb) vid6_indi_pane_g2_ParamLimits

0x55b2,	// (0x000196bb) vid6_indi_pane_g2

0x55c4,	// (0x000196cd) vid6_indi_pane_g3_ParamLimits

0x55c4,	// (0x000196cd) vid6_indi_pane_g3

0x55d9,	// (0x000196e2) vid6_indi_pane_g4_ParamLimits

0x55d9,	// (0x000196e2) vid6_indi_pane_g4

0x55ee,	// (0x000196f7) vid6_indi_pane_g5_ParamLimits

0x55ee,	// (0x000196f7) vid6_indi_pane_g5

0x0004,

0xfb34,	// (0x00023c3d) vid6_indi_pane_g_ParamLimits

0xfb34,	// (0x00023c3d) vid6_indi_pane_g

0x5608,	// (0x00019711) vid6_indi_pane_t1_ParamLimits

0x5608,	// (0x00019711) vid6_indi_pane_t1

0x561e,	// (0x00019727) vid6_indi_pane_t2_ParamLimits

0x561e,	// (0x00019727) vid6_indi_pane_t2

0x5646,	// (0x0001974f) vid6_indi_pane_t3_ParamLimits

0x5646,	// (0x0001974f) vid6_indi_pane_t3

0x566e,	// (0x00019777) vid6_indi_pane_t4_ParamLimits

0x566e,	// (0x00019777) vid6_indi_pane_t4

0x0003,

0xfb3f,	// (0x00023c48) vid6_indi_pane_t_ParamLimits

0xfb3f,	// (0x00023c48) vid6_indi_pane_t

0x5692,	// (0x0001979b) wait_bar_pane_cp08

0xcc13,	// (0x00020d1c) main_cset_text2_pane_t1_ParamLimits

0xcc13,	// (0x00020d1c) main_cset_text2_pane_t1

0xcb4d,	// (0x00020c56) listscroll_gen_pane_cp06_t1_ParamLimits

0xcb4d,	// (0x00020c56) listscroll_gen_pane_cp06_t1

0x7635,	// (0x0001b73e) main_cam6_set_pane

0x83ec,	// (0x0001c4f5) bg_tb_trans_pane_cp06_ParamLimits

0x8402,	// (0x0001c50b) cam4_indicators_pane_g1_ParamLimits

0x8412,	// (0x0001c51b) cam4_indicators_pane_g2_ParamLimits

0xf8ad,	// (0x000239b6) cam4_indicators_pane_g_ParamLimits

0x8432,	// (0x0001c53b) cam4_indicators_pane_t1_ParamLimits

0x7b40,	// (0x0001bc49) bg_tb_trans_pane_cp07_ParamLimits

0x8402,	// (0x0001c50b) vid4_indicators_pane_g1_ParamLimits

0x84a6,	// (0x0001c5af) vid4_indicators_pane_g2_ParamLimits

0x84b6,	// (0x0001c5bf) vid4_indicators_pane_g3_ParamLimits

0x84c7,	// (0x0001c5d0) vid4_indicators_pane_g4_ParamLimits

0xf8bf,	// (0x000239c8) vid4_indicators_pane_g_ParamLimits

0x84e3,	// (0x0001c5ec) vid4_indicators_pane_t1_ParamLimits

0x8930,	// (0x0001ca39) vid4_progress_pane_g1_ParamLimits

0x893f,	// (0x0001ca48) vid4_progress_pane_g2_ParamLimits

0x894e,	// (0x0001ca57) vid4_progress_pane_g3_ParamLimits

0x895d,	// (0x0001ca66) vid4_progress_pane_g4_ParamLimits

0xfa70,	// (0x00023b79) vid4_progress_pane_g_ParamLimits

0x8975,	// (0x0001ca7e) vid4_progress_pane_t1_ParamLimits

0x898b,	// (0x0001ca94) vid4_progress_pane_t2_ParamLimits

0x89a0,	// (0x0001caa9) vid4_progress_pane_t3_ParamLimits

0xfa7b,	// (0x00023b84) vid4_progress_pane_t_ParamLimits

0x89b5,	// (0x0001cabe) wait_bar_pane_cp07_ParamLimits

0xcc2f,	// (0x00020d38) main_cam6_set_pane_g2_ParamLimits

0xcc2f,	// (0x00020d38) main_cam6_set_pane_g2

0xcc3b,	// (0x00020d44) main_cset6_listscroll_pane_ParamLimits

0xcc3b,	// (0x00020d44) main_cset6_listscroll_pane

0xcc64,	// (0x00020d6d) main_cset6_slider_pane_ParamLimits

0xcc64,	// (0x00020d6d) main_cset6_slider_pane

0xcc70,	// (0x00020d79) main_cset6_text2_pane_ParamLimits

0xcc70,	// (0x00020d79) main_cset6_text2_pane

0x56a2,	// (0x000197ab) main_cset6_text_pane

0x4dee,	// (0x00018ef7) main_cset_list_pane_copy1_ParamLimits

0x4dee,	// (0x00018ef7) main_cset_list_pane_copy1

0x4dfe,	// (0x00018f07) scroll_pane_cp028_copy1

0xcc83,	// (0x00020d8c) cset_list_set_pane_copy1

0x4ed1,	// (0x00018fda) aid_position_infowindow_above_copy1

0x4ed9,	// (0x00018fe2) aid_position_infowindow_below_copy1

0xcc92,	// (0x00020d9b) cset_list_set_pane_g1_copy1

0xcc9a,	// (0x00020da3) cset_list_set_pane_g3_copy1_ParamLimits

0xcc9a,	// (0x00020da3) cset_list_set_pane_g3_copy1

0xcca9,	// (0x00020db2) cset_list_set_pane_t1_copy1_ParamLimits

0xcca9,	// (0x00020db2) cset_list_set_pane_t1_copy1

0x10e1,	// (0x000151ea) list_highlight_pane_cp021_copy1_ParamLimits

0x10e1,	// (0x000151ea) list_highlight_pane_cp021_copy1

0x56aa,	// (0x000197b3) cset6_slider_pane_ParamLimits

0x56aa,	// (0x000197b3) cset6_slider_pane

0x56d6,	// (0x000197df) main_cset6_slider_pane_g1_ParamLimits

0x56d6,	// (0x000197df) main_cset6_slider_pane_g1

0xccbe,	// (0x00020dc7) main_cset6_slider_pane_g2_ParamLimits

0xccbe,	// (0x00020dc7) main_cset6_slider_pane_g2

0x4e13,	// (0x00018f1c) main_cset6_slider_pane_g3_ParamLimits

0x4e13,	// (0x00018f1c) main_cset6_slider_pane_g3

0xcce6,	// (0x00020def) main_cset6_slider_pane_g4_ParamLimits

0xcce6,	// (0x00020def) main_cset6_slider_pane_g4

0xccf2,	// (0x00020dfb) main_cset6_slider_pane_g5_ParamLimits

0xccf2,	// (0x00020dfb) main_cset6_slider_pane_g5

0x4e13,	// (0x00018f1c) main_cset6_slider_pane_g7_ParamLimits

0x4e13,	// (0x00018f1c) main_cset6_slider_pane_g7

0x4e1f,	// (0x00018f28) main_cset6_slider_pane_g8_ParamLimits

0x4e1f,	// (0x00018f28) main_cset6_slider_pane_g8

0xccfe,	// (0x00020e07) main_cset6_slider_pane_g9_ParamLimits

0xccfe,	// (0x00020e07) main_cset6_slider_pane_g9

0xcd0a,	// (0x00020e13) main_cset6_slider_pane_g10_ParamLimits

0xcd0a,	// (0x00020e13) main_cset6_slider_pane_g10

0xcce6,	// (0x00020def) main_cset6_slider_pane_g11_ParamLimits

0xcce6,	// (0x00020def) main_cset6_slider_pane_g11

0xcd16,	// (0x00020e1f) main_cset6_slider_pane_g12_ParamLimits

0xcd16,	// (0x00020e1f) main_cset6_slider_pane_g12

0xcd22,	// (0x00020e2b) main_cset6_slider_pane_g13_ParamLimits

0xcd22,	// (0x00020e2b) main_cset6_slider_pane_g13

0xcd2e,	// (0x00020e37) main_cset6_slider_pane_g14_ParamLimits

0xcd2e,	// (0x00020e37) main_cset6_slider_pane_g14

0xcd3a,	// (0x00020e43) main_cset6_slider_pane_g15_ParamLimits

0xcd3a,	// (0x00020e43) main_cset6_slider_pane_g15

0xccf2,	// (0x00020dfb) main_cset6_slider_pane_g16_ParamLimits

0xccf2,	// (0x00020dfb) main_cset6_slider_pane_g16

0xcd52,	// (0x00020e5b) main_cset6_slider_pane_g17_ParamLimits

0xcd52,	// (0x00020e5b) main_cset6_slider_pane_g17

0x0011,

0xfb48,	// (0x00023c51) main_cset6_slider_pane_g_ParamLimits

0xfb48,	// (0x00023c51) main_cset6_slider_pane_g

0x56fe,	// (0x00019807) main_cset6_slider_pane_t1_ParamLimits

0x56fe,	// (0x00019807) main_cset6_slider_pane_t1

0xcd5e,	// (0x00020e67) main_cset6_slider_pane_t2_ParamLimits

0xcd5e,	// (0x00020e67) main_cset6_slider_pane_t2

0x573f,	// (0x00019848) main_cset6_slider_pane_t3_ParamLimits

0x573f,	// (0x00019848) main_cset6_slider_pane_t3

0xcd89,	// (0x00020e92) main_cset6_slider_pane_t4_ParamLimits

0xcd89,	// (0x00020e92) main_cset6_slider_pane_t4

0x576a,	// (0x00019873) main_cset6_slider_pane_t5_ParamLimits

0x576a,	// (0x00019873) main_cset6_slider_pane_t5

0x5795,	// (0x0001989e) main_cset6_slider_pane_t7_ParamLimits

0x5795,	// (0x0001989e) main_cset6_slider_pane_t7

0xcdb4,	// (0x00020ebd) main_cset6_slider_pane_t8_ParamLimits

0xcdb4,	// (0x00020ebd) main_cset6_slider_pane_t8

0xcdd8,	// (0x00020ee1) main_cset6_slider_pane_t9_ParamLimits

0xcdd8,	// (0x00020ee1) main_cset6_slider_pane_t9

0xcdfc,	// (0x00020f05) main_cset6_slider_pane_t10_ParamLimits

0xcdfc,	// (0x00020f05) main_cset6_slider_pane_t10

0xce20,	// (0x00020f29) main_cset6_slider_pane_t11_ParamLimits

0xce20,	// (0x00020f29) main_cset6_slider_pane_t11

0x57cb,	// (0x000198d4) main_cset6_slider_pane_t14_ParamLimits

0x57cb,	// (0x000198d4) main_cset6_slider_pane_t14

0x5804,	// (0x0001990d) main_cset6_slider_pane_t15_ParamLimits

0x5804,	// (0x0001990d) main_cset6_slider_pane_t15

0x000b,

0xfb6d,	// (0x00023c76) main_cset6_slider_pane_t_ParamLimits

0xfb6d,	// (0x00023c76) main_cset6_slider_pane_t

0x4f01,	// (0x0001900a) cset_slider_pane_g1_copy1

0x4f0a,	// (0x00019013) cset_slider_pane_g2_copy1

0x4f13,	// (0x0001901c) cset_slider_pane_g3_copy1

0x108e,	// (0x00015197) bg_popup_sub_pane_cp011_copy1

0x4fd7,	// (0x000190e0) main_cset_text_pane_g1_copy1

0x4fdf,	// (0x000190e8) main_cset_text_pane_t1_copy1

0x4fed,	// (0x000190f6) main_cset_text_pane_t2_copy1

0x4ffb,	// (0x00019104) main_cset_text_pane_t3_copy1

0x5009,	// (0x00019112) main_cset_text_pane_t4_copy1

0x5017,	// (0x00019120) main_cset_text_pane_t5_copy1

0x5025,	// (0x0001912e) main_cset_text_pane_t6_copy1

0x5033,	// (0x0001913c) main_cset_text_pane_t7_copy1

0xce61,	// (0x00020f6a) main_cset_text2_pane_t1_copy1

0x7b40,	// (0x0001bc49) main_ncimui_pane

0x7b99,	// (0x0001bca2) popup_query_ncimui_window_ParamLimits

0x7b99,	// (0x0001bca2) popup_query_ncimui_window

0x425f,	// (0x00018368) field_cale_ev2_pane_g4_ParamLimits

0x425f,	// (0x00018368) field_cale_ev2_pane_g4

0xbc01,	// (0x0001fd0a) cell_video_dialer_keypad_pane_g2_ParamLimits

0xbc01,	// (0x0001fd0a) cell_video_dialer_keypad_pane_g2

0x0001,

0xf847,	// (0x00023950) cell_video_dialer_keypad_pane_g_ParamLimits

0xf847,	// (0x00023950) cell_video_dialer_keypad_pane_g

0xbc19,	// (0x0001fd22) cell_video_dialer_keypad_pane_t1

0x108e,	// (0x00015197) bg_popup_window_pane_cp012

0x22c0,	// (0x000163c9) heading_pane_cp06

0x588d,	// (0x00019996) ncim_query_content_pane

0x108e,	// (0x00015197) bg_popup_heading_pane_cp01

0x5895,	// (0x0001999e) ncim_heading_pane_t1

0x58a3,	// (0x000199ac) ncim_indicator_popup_pane

0x58b5,	// (0x000199be) ncim_query_button_pane

0x58c9,	// (0x000199d2) ncim_query_content_pane_t1

0x58db,	// (0x000199e4) ncim_query_content_pane_t2

0x0005,

0xfbb1,	// (0x00023cba) ncim_query_content_pane_t

0x5915,	// (0x00019a1e) ncim_query_list_pane

0x5927,	// (0x00019a30) ncim_query_popup_pane

0x58a3,	// (0x000199ac) ncim_indicator_popup_pane_ParamLimits

0xcfa2,	// (0x000210ab) ncim_query_content_pane_g1_ParamLimits

0xcfa2,	// (0x000210ab) ncim_query_content_pane_g1

0x58c9,	// (0x000199d2) ncim_query_content_pane_t1_ParamLimits

0x58db,	// (0x000199e4) ncim_query_content_pane_t2_ParamLimits

0xcfae,	// (0x000210b7) ncim_query_content_pane_t3_ParamLimits

0xcfae,	// (0x000210b7) ncim_query_content_pane_t3

0xcfcb,	// (0x000210d4) ncim_query_content_pane_t4_ParamLimits

0xcfcb,	// (0x000210d4) ncim_query_content_pane_t4

0xcfe8,	// (0x000210f1) ncim_query_content_pane_t5_ParamLimits

0xcfe8,	// (0x000210f1) ncim_query_content_pane_t5

0x58ed,	// (0x000199f6) ncim_query_content_pane_t6_ParamLimits

0x58ed,	// (0x000199f6) ncim_query_content_pane_t6

0xfbb1,	// (0x00023cba) ncim_query_content_pane_t_ParamLimits

0x5915,	// (0x00019a1e) ncim_query_list_pane_ParamLimits

0x5927,	// (0x00019a30) ncim_query_popup_pane_ParamLimits

0x593b,	// (0x00019a44) wait_bar_pane_cp04

0x108e,	// (0x00015197) input_focus_pane_cp011

0x5943,	// (0x00019a4c) ncim_query_popup_pane_t1

0x5951,	// (0x00019a5a) ncim_list_query_list_pane_ParamLimits

0x5951,	// (0x00019a5a) ncim_list_query_list_pane

0x108e,	// (0x00015197) bg_button_pane_cp027

0x5964,	// (0x00019a6d) ncim_query_button_pane_g1

0x108e,	// (0x00015197) list_highlight_pane_cp012

0x596e,	// (0x00019a77) ncim_list_query_list_pane_g1

0x5976,	// (0x00019a7f) ncim_list_query_list_pane_t1

0x8422,	// (0x0001c52b) cam4_indicators_pane_g3_ParamLimits

0x8422,	// (0x0001c52b) cam4_indicators_pane_g3

0x84d3,	// (0x0001c5dc) vid4_indicators_pane_g5_ParamLimits

0x84d3,	// (0x0001c5dc) vid4_indicators_pane_g5

0x8969,	// (0x0001ca72) vid4_progress_pane_g5_ParamLimits

0x8969,	// (0x0001ca72) vid4_progress_pane_g5

0xce92,	// (0x00020f9b) main_ncimui_pane_g1

0xcef8,	// (0x00021001) ncimui_group_query_pane_ParamLimits

0xcef8,	// (0x00021001) ncimui_group_query_pane

0xcf40,	// (0x00021049) ncimui_list_pane_ParamLimits

0xcf40,	// (0x00021049) ncimui_list_pane

0xcf65,	// (0x0002106e) ncimui_text_pane_ParamLimits

0xcf65,	// (0x0002106e) ncimui_text_pane

0xd005,	// (0x0002110e) ncimui_text_pane_t1_ParamLimits

0xd005,	// (0x0002110e) ncimui_text_pane_t1

0x598d,	// (0x00019a96) ncimui_list_single_graphic_pane_ParamLimits

0x598d,	// (0x00019a96) ncimui_list_single_graphic_pane

0xd023,	// (0x0002112c) ncimui_query_pane_ParamLimits

0xd023,	// (0x0002112c) ncimui_query_pane

0x108e,	// (0x00015197) list_highlight_pane_cp013

0x599d,	// (0x00019aa6) ncim_list_query_list_pane_t1_copy1

0x59ab,	// (0x00019ab4) ncim_list_single_graphic_pane_g1

0x59b3,	// (0x00019abc) ncim_query_button_pane_cp01

0x59bf,	// (0x00019ac8) ncim_query_entry_pane_ParamLimits

0x59bf,	// (0x00019ac8) ncim_query_entry_pane

0x59d2,	// (0x00019adb) ncimui_query_pane_g1

0x59de,	// (0x00019ae7) ncimui_query_pane_t1_ParamLimits

0x59de,	// (0x00019ae7) ncimui_query_pane_t1

0x10e1,	// (0x000151ea) input_focus_pane_cp012

0x59f7,	// (0x00019b00) ncim_query_entry_pane_t1

0x186d,	// (0x00015976) main_im_pane_ParamLimits

0x7b40,	// (0x0001bc49) main_mobtv_pane_ParamLimits

0x7b40,	// (0x0001bc49) main_mobtv_pane

0xccfe,	// (0x00020e07) main_cset6_slider_pane_g18_ParamLimits

0xccfe,	// (0x00020e07) main_cset6_slider_pane_g18

0xcd22,	// (0x00020e2b) main_cset6_slider_pane_g19_ParamLimits

0xcd22,	// (0x00020e2b) main_cset6_slider_pane_g19

0x2699,	// (0x000167a2) bg_main_mobtv_pane_ParamLimits

0x2699,	// (0x000167a2) bg_main_mobtv_pane

0xd033,	// (0x0002113c) main_mobtv_info_pane

0xd03c,	// (0x00021145) main_mobtv_loading_pane_ParamLimits

0xd03c,	// (0x00021145) main_mobtv_loading_pane

0x5a09,	// (0x00019b12) main_mobtv_pg_channel_list_pane

0x5a13,	// (0x00019b1c) main_mobtv_pg_hdr_pane

0xd049,	// (0x00021152) main_mobtv_programe_curr_pane_ParamLimits

0xd049,	// (0x00021152) main_mobtv_programe_curr_pane

0xd056,	// (0x0002115f) main_mobtv_programe_next_pane_ParamLimits

0xd056,	// (0x0002115f) main_mobtv_programe_next_pane

0x5a1c,	// (0x00019b25) popup_mobtv_noti_window

0x1b4a,	// (0x00015c53) main_tv_pg_hdr_pane_g1

0x5a24,	// (0x00019b2d) main_tv_pg_hdr_pane_g2

0x5a2c,	// (0x00019b35) main_tv_pg_hdr_pane_g3

0x5a34,	// (0x00019b3d) main_tv_pg_hdr_pane_g4

0x5a3c,	// (0x00019b45) main_tv_pg_hdr_pane_g5

0x5a44,	// (0x00019b4d) main_tv_pg_hdr_pane_g6

0x5a4c,	// (0x00019b55) main_tv_pg_hdr_pane_g7

0x5a54,	// (0x00019b5d) main_tv_pg_hdr_pane_g8

0x5a5c,	// (0x00019b65) main_tv_pg_hdr_pane_g9

0x5a64,	// (0x00019b6d) main_tv_pg_hdr_pane_g10

0x5a6e,	// (0x00019b77) main_tv_pg_hdr_pane_g11

0x000a,

0xfbbe,	// (0x00023cc7) main_tv_pg_hdr_pane_g

0x5a78,	// (0x00019b81) main_tv_pg_hdr_pane_t1

0x5a86,	// (0x00019b8f) main_tv_pg_hdr_pane_t2

0x5a94,	// (0x00019b9d) main_tv_pg_hdr_pane_t3

0x5aa2,	// (0x00019bab) main_tv_pg_hdr_pane_t4

0x5ab0,	// (0x00019bb9) main_tv_pg_hdr_pane_t5

0x0004,

0xfbd5,	// (0x00023cde) main_tv_pg_hdr_pane_t

0x5abe,	// (0x00019bc7) single_mobtv_pg_channel_pane_ParamLimits

0x5abe,	// (0x00019bc7) single_mobtv_pg_channel_pane

0x5ad0,	// (0x00019bd9) single_mobtv_pg_channel_table_pane

0x5ad9,	// (0x00019be2) single_mobtv_pg_channel_thumb_pane

0x5ae2,	// (0x00019beb) single_tv_pg_channel_pane_g1

0x5aeb,	// (0x00019bf4) single_tv_pg_channel_pane_g2

0x0001,

0xfbe0,	// (0x00023ce9) single_tv_pg_channel_pane_g

0x17d5,	// (0x000158de) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x17d5,	// (0x000158de) bg_single_mobtv_pg_channel_thumb_pane

0x5af4,	// (0x00019bfd) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x5af4,	// (0x00019bfd) single_mobtv_pg_channel_thumb_pane_g1

0x5b02,	// (0x00019c0b) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x5b02,	// (0x00019c0b) single_mobtv_pg_channel_thumb_pane_g2

0x5b0e,	// (0x00019c17) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x5b0e,	// (0x00019c17) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfbe5,	// (0x00023cee) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfbe5,	// (0x00023cee) single_mobtv_pg_channel_thumb_pane_g

0x5b1a,	// (0x00019c23) single_mobtv_pg_channel_thumb_pane_t1

0x5b28,	// (0x00019c31) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfbec,	// (0x00023cf5) single_mobtv_pg_channel_thumb_pane_t

0x1b4a,	// (0x00015c53) bg_single_mobtv_pg_channel_table_pane_g1

0x1b4a,	// (0x00015c53) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf3ef,	// (0x000234f8) bg_single_mobtv_pg_channel_table_pane_g

0x5b36,	// (0x00019c3f) single_mobtv_pg_channel_table_pane_t1

0x5b44,	// (0x00019c4d) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfbf1,	// (0x00023cfa) single_mobtv_pg_channel_table_pane_t

0xd06b,	// (0x00021174) main_mobtv_info_pane_g1_ParamLimits

0xd06b,	// (0x00021174) main_mobtv_info_pane_g1

0xd087,	// (0x00021190) main_mobtv_info_pane_t1_ParamLimits

0xd087,	// (0x00021190) main_mobtv_info_pane_t1

0xd0ed,	// (0x000211f6) main_mobtv_info_pane_t2_ParamLimits

0xd0ed,	// (0x000211f6) main_mobtv_info_pane_t2

0x0002,

0xfbfb,	// (0x00023d04) main_mobtv_info_pane_t_ParamLimits

0xfbfb,	// (0x00023d04) main_mobtv_info_pane_t

0xd170,	// (0x00021279) wait_bar_pane_cp05

0xd180,	// (0x00021289) main_mobtv_loading_pane_g1_ParamLimits

0xd180,	// (0x00021289) main_mobtv_loading_pane_g1

0xd18c,	// (0x00021295) main_mobtv_loading_pane_g2_ParamLimits

0xd18c,	// (0x00021295) main_mobtv_loading_pane_g2

0xd198,	// (0x000212a1) main_mobtv_loading_pane_g3_ParamLimits

0xd198,	// (0x000212a1) main_mobtv_loading_pane_g3

0x0002,

0xfc02,	// (0x00023d0b) main_mobtv_loading_pane_g_ParamLimits

0xfc02,	// (0x00023d0b) main_mobtv_loading_pane_g

0x5b52,	// (0x00019c5b) main_mobtv_loading_pane_t1_ParamLimits

0x5b52,	// (0x00019c5b) main_mobtv_loading_pane_t1

0x5b6a,	// (0x00019c73) main_mobtv_loading_pane_t2_ParamLimits

0x5b6a,	// (0x00019c73) main_mobtv_loading_pane_t2

0x0001,

0xfc09,	// (0x00023d12) main_mobtv_loading_pane_t_ParamLimits

0xfc09,	// (0x00023d12) main_mobtv_loading_pane_t

0xd1a4,	// (0x000212ad) wait_bar_pane_cp06_ParamLimits

0xd1a4,	// (0x000212ad) wait_bar_pane_cp06

0x5b8e,	// (0x00019c97) main_mobtv_programe_curr_pane_t1

0x5b9c,	// (0x00019ca5) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc0e,	// (0x00023d17) main_mobtv_programe_curr_pane_t

0x5baa,	// (0x00019cb3) main_mobtv_programe_next_pane_t1

0x5bb8,	// (0x00019cc1) main_mobtv_programe_next_pane_t2

0x5bc6,	// (0x00019ccf) main_mobtv_programe_next_pane_t3

0x0002,

0xfc13,	// (0x00023d1c) main_mobtv_programe_next_pane_t

0x108e,	// (0x00015197) bg_popup_mobtv_noti_window_pane

0x5bd4,	// (0x00019cdd) popup_mobtv_noti_window_g1

0x5bdc,	// (0x00019ce5) popup_mobtv_noti_window_t1

0x5bea,	// (0x00019cf3) popup_mobtv_noti_window_t2

0x0001,

0xfc1a,	// (0x00023d23) popup_mobtv_noti_window_t

0x1b4a,	// (0x00015c53) bg_popup_mobtv_noti_window_pane_g1

0x7635,	// (0x0001b73e) sc_clock_pane

0x7635,	// (0x0001b73e) main_fs_bigclock_pane

0xc9ca,	// (0x00020ad3) blid2_tripm_pane_t4_ParamLimits

0xc9ca,	// (0x00020ad3) blid2_tripm_pane_t4

0xd1b0,	// (0x000212b9) sc_clock_pane_g1_ParamLimits

0xd1b0,	// (0x000212b9) sc_clock_pane_g1

0xd1be,	// (0x000212c7) sc_clock_pane_t1_ParamLimits

0xd1be,	// (0x000212c7) sc_clock_pane_t1

0xd1d1,	// (0x000212da) sc_clock_pane_t2_ParamLimits

0xd1d1,	// (0x000212da) sc_clock_pane_t2

0xd1e3,	// (0x000212ec) sc_clock_pane_t3_ParamLimits

0xd1e3,	// (0x000212ec) sc_clock_pane_t3

0x0004,

0xfc1f,	// (0x00023d28) sc_clock_pane_t_ParamLimits

0xfc1f,	// (0x00023d28) sc_clock_pane_t

0xdf58,	// (0x00022061) main_fs_bigclock_indicator_pane_ParamLimits

0xdf58,	// (0x00022061) main_fs_bigclock_indicator_pane

0xd25e,	// (0x00021367) main_fs_bigclock_pane_g1_ParamLimits

0xd25e,	// (0x00021367) main_fs_bigclock_pane_g1

0xdf64,	// (0x0002206d) main_fs_bigclock_pane_t1_ParamLimits

0xdf64,	// (0x0002206d) main_fs_bigclock_pane_t1

0xdf76,	// (0x0002207f) main_fs_bigclock_pane_t2_ParamLimits

0xdf76,	// (0x0002207f) main_fs_bigclock_pane_t2

0xdf88,	// (0x00022091) main_fs_bigclock_pane_t3_ParamLimits

0xdf88,	// (0x00022091) main_fs_bigclock_pane_t3

0x0002,

0xfde3,	// (0x00023eec) main_fs_bigclock_pane_t_ParamLimits

0xfde3,	// (0x00023eec) main_fs_bigclock_pane_t

0xdf9a,	// (0x000220a3) main_fs_bigclock_indicator_pane_g1

0x58bd,	// (0x000199c6) ncim_query_content_pane_g2_ParamLimits

0x58bd,	// (0x000199c6) ncim_query_content_pane_g2

0x0001,

0xfbac,	// (0x00023cb5) ncim_query_content_pane_g_ParamLimits

0xfbac,	// (0x00023cb5) ncim_query_content_pane_g

0xd1f5,	// (0x000212fe) sc_clock_pane_t4_ParamLimits

0xd1f5,	// (0x000212fe) sc_clock_pane_t4

0x7b40,	// (0x0001bc49) main_radioblah_pane

0x82e5,	// (0x0001c3ee) cell_call4_button_pane_t1_copy1_ParamLimits

0x82e5,	// (0x0001c3ee) cell_call4_button_pane_t1_copy1

0xceaa,	// (0x00020fb3) main_ncimui_pane_t1_ParamLimits

0xceaa,	// (0x00020fb3) main_ncimui_pane_t1

0xcec4,	// (0x00020fcd) main_ncimui_pane_t2_ParamLimits

0xcec4,	// (0x00020fcd) main_ncimui_pane_t2

0x0002,

0xfba5,	// (0x00023cae) main_ncimui_pane_t_ParamLimits

0xfba5,	// (0x00023cae) main_ncimui_pane_t

0x5d2b,	// (0x00019e34) main_radioblah_anim_pane_ParamLimits

0x5d2b,	// (0x00019e34) main_radioblah_anim_pane

0x5d3c,	// (0x00019e45) main_radioblah_info_pane_ParamLimits

0x5d3c,	// (0x00019e45) main_radioblah_info_pane

0x5d50,	// (0x00019e59) main_radioblah_pane_t1_ParamLimits

0x5d50,	// (0x00019e59) main_radioblah_pane_t1

0x5d6c,	// (0x00019e75) main_radioblah_pane_t2_ParamLimits

0x5d6c,	// (0x00019e75) main_radioblah_pane_t2

0x0003,

0xfc40,	// (0x00023d49) main_radioblah_pane_t_ParamLimits

0xfc40,	// (0x00023d49) main_radioblah_pane_t

0xd2a6,	// (0x000213af) main_radioblah_rocker_ctrl_pane_ParamLimits

0xd2a6,	// (0x000213af) main_radioblah_rocker_ctrl_pane

0x5db4,	// (0x00019ebd) main_radioblah_info_pane_t1_ParamLimits

0x5db4,	// (0x00019ebd) main_radioblah_info_pane_t1

0xd2eb,	// (0x000213f4) main_radioblah_info_pane_t2_ParamLimits

0xd2eb,	// (0x000213f4) main_radioblah_info_pane_t2

0x0003,

0xfc49,	// (0x00023d52) main_radioblah_info_pane_t_ParamLimits

0xfc49,	// (0x00023d52) main_radioblah_info_pane_t

0x1b4a,	// (0x00015c53) main_radioblah_rocker_ctrl_pane_g1

0xd393,	// (0x0002149c) main_radioblah_rocker_ctrl_pane_g2

0xd39b,	// (0x000214a4) main_radioblah_rocker_ctrl_pane_g3

0xd3a3,	// (0x000214ac) main_radioblah_rocker_ctrl_pane_g4

0xd3ab,	// (0x000214b4) main_radioblah_rocker_ctrl_pane_g5

0xd3b3,	// (0x000214bc) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc52,	// (0x00023d5b) main_radioblah_rocker_ctrl_pane_g

0xce61,	// (0x00020f6a) main_cset_text2_pane_t1_copy1_ParamLimits

0x8368,	// (0x0001c471) cam4_image_uncrop_qvga_pane

0x8466,	// (0x0001c56f) vid4_image_uncrop_qcif_pane

0x89f8,	// (0x0001cb01) cam6_image_uncrop_qvga_pane_ParamLimits

0x89f8,	// (0x0001cb01) cam6_image_uncrop_qvga_pane

0x5588,	// (0x00019691) vid6_image_uncrop_qcif_pane_ParamLimits

0x5588,	// (0x00019691) vid6_image_uncrop_qcif_pane

0x108e,	// (0x00015197) bg_popup_preview_window_pane_cp03

0x5863,	// (0x0001996c) list_cset_text2_pane

0x586b,	// (0x00019974) main_cset6_text2_pane_g1

0x5873,	// (0x0001997c) main_cset6_text2_pane_t1

0x5e6f,	// (0x00019f78) list_cset_text2_pane_t1_ParamLimits

0x5e6f,	// (0x00019f78) list_cset_text2_pane_t1

0x7b40,	// (0x0001bc49) main_radioblah_pane_ParamLimits

0xd15e,	// (0x00021267) main_mobtv_info_pane_t3_ParamLimits

0xd15e,	// (0x00021267) main_mobtv_info_pane_t3

0xd294,	// (0x0002139d) main_radioblah_pane_g1

0xd2bf,	// (0x000213c8) main_radioblah_info_pane_g1

0xd33a,	// (0x00021443) main_radioblah_info_pane_t3_ParamLimits

0xd33a,	// (0x00021443) main_radioblah_info_pane_t3

0xa16a,	// (0x0001e273) highlight_cell_cale_month_pane_ParamLimits

0xa16a,	// (0x0001e273) highlight_cell_cale_month_pane

0x7635,	// (0x0001b73e) main_phob_fisheye_pane

0x4336,	// (0x0001843f) scroll_pane_cp0031_ParamLimits

0x4336,	// (0x0001843f) scroll_pane_cp0031

0x5692,	// (0x0001979b) wait_bar_pane_cp08_ParamLimits

0xcc83,	// (0x00020d8c) cset_list_set_pane_copy1_ParamLimits

0x5dee,	// (0x00019ef7) highlight_cell_cale_month_pane_g1

0xd3bb,	// (0x000214c4) highlight_cell_cale_month_pane_t1

0x5df6,	// (0x00019eff) list_gen_pane_cp01

0x4dfe,	// (0x00018f07) scroll_pane_01

0xd3c9,	// (0x000214d2) list_single_double_fisheye_pane

0xd3d2,	// (0x000214db) list_double_fisheye_pane_g1_ParamLimits

0xd3d2,	// (0x000214db) list_double_fisheye_pane_g1

0xd3de,	// (0x000214e7) list_double_fisheye_pane_g2_ParamLimits

0xd3de,	// (0x000214e7) list_double_fisheye_pane_g2

0xd3f2,	// (0x000214fb) list_double_fisheye_pane_g3_ParamLimits

0xd3f2,	// (0x000214fb) list_double_fisheye_pane_g3

0x0004,

0xfc5f,	// (0x00023d68) list_double_fisheye_pane_g_ParamLimits

0xfc5f,	// (0x00023d68) list_double_fisheye_pane_g

0xd41b,	// (0x00021524) list_double_fisheye_pane_t1_ParamLimits

0xd41b,	// (0x00021524) list_double_fisheye_pane_t1

0xd436,	// (0x0002153f) list_double_fisheye_pane_t2_ParamLimits

0xd436,	// (0x0002153f) list_double_fisheye_pane_t2

0x0001,

0xfc6a,	// (0x00023d73) list_double_fisheye_pane_t_ParamLimits

0xfc6a,	// (0x00023d73) list_double_fisheye_pane_t

0x7635,	// (0x0001b73e) main_call5_pane

0xd21b,	// (0x00021324) sc_swipe_pane_ParamLimits

0xd21b,	// (0x00021324) sc_swipe_pane

0xd464,	// (0x0002156d) call5_image_pane_ParamLimits

0xd464,	// (0x0002156d) call5_image_pane

0xd470,	// (0x00021579) call5_swipe_1_pane_ParamLimits

0xd470,	// (0x00021579) call5_swipe_1_pane

0xd47c,	// (0x00021585) call5_swipe_2_pane_ParamLimits

0xd47c,	// (0x00021585) call5_swipe_2_pane

0xd494,	// (0x0002159d) popup_call5_audio_first_window_ParamLimits

0xd494,	// (0x0002159d) popup_call5_audio_first_window

0x17d5,	// (0x000158de) call5_swipe_1_pane_g1_ParamLimits

0x17d5,	// (0x000158de) call5_swipe_1_pane_g1

0x5dff,	// (0x00019f08) call5_swipe_1_pane_g2_ParamLimits

0x5dff,	// (0x00019f08) call5_swipe_1_pane_g2

0x0001,

0xfc6f,	// (0x00023d78) call5_swipe_1_pane_g_ParamLimits

0xfc6f,	// (0x00023d78) call5_swipe_1_pane_g

0x5e0b,	// (0x00019f14) call5_swipe_1_pane_t1_ParamLimits

0x5e0b,	// (0x00019f14) call5_swipe_1_pane_t1

0x17d5,	// (0x000158de) call5_swipe_2_pane_g1_ParamLimits

0x17d5,	// (0x000158de) call5_swipe_2_pane_g1

0x5e20,	// (0x00019f29) call5_swipe_2_pane_g2_ParamLimits

0x5e20,	// (0x00019f29) call5_swipe_2_pane_g2

0x0001,

0xfc74,	// (0x00023d7d) call5_swipe_2_pane_g_ParamLimits

0xfc74,	// (0x00023d7d) call5_swipe_2_pane_g

0x5e2c,	// (0x00019f35) call5_swipe_2_pane_t1_ParamLimits

0x5e2c,	// (0x00019f35) call5_swipe_2_pane_t1

0x5e41,	// (0x00019f4a) sc_swipe_pane_g1_ParamLimits

0x5e41,	// (0x00019f4a) sc_swipe_pane_g1

0x5e4e,	// (0x00019f57) sc_swipe_pane_g2_ParamLimits

0x5e4e,	// (0x00019f57) sc_swipe_pane_g2

0x0001,

0xfc79,	// (0x00023d82) sc_swipe_pane_g_ParamLimits

0xfc79,	// (0x00023d82) sc_swipe_pane_g

0x5e5a,	// (0x00019f63) sc_swipe_pane_t1_ParamLimits

0x5e5a,	// (0x00019f63) sc_swipe_pane_t1

0x7635,	// (0x0001b73e) main_cmail_launcher_pane

0xd4a0,	// (0x000215a9) aid_size_cell_cmail_l_ParamLimits

0xd4a0,	// (0x000215a9) aid_size_cell_cmail_l

0xd4b0,	// (0x000215b9) grid_cmail_l_pane_ParamLimits

0xd4b0,	// (0x000215b9) grid_cmail_l_pane

0xd4bc,	// (0x000215c5) cell_cmail_l_pane_ParamLimits

0xd4bc,	// (0x000215c5) cell_cmail_l_pane

0xd4ce,	// (0x000215d7) cell_cmail_l_pane_g1_ParamLimits

0xd4ce,	// (0x000215d7) cell_cmail_l_pane_g1

0xd4de,	// (0x000215e7) cell_cmail_l_pane_t1_ParamLimits

0xd4de,	// (0x000215e7) cell_cmail_l_pane_t1

0xd4f4,	// (0x000215fd) cell_cmail_l_pane_t2_ParamLimits

0xd4f4,	// (0x000215fd) cell_cmail_l_pane_t2

0x0001,

0xfc7e,	// (0x00023d87) cell_cmail_l_pane_t_ParamLimits

0xfc7e,	// (0x00023d87) cell_cmail_l_pane_t

0x10e1,	// (0x000151ea) grid_highlight_pane_cp018_ParamLimits

0x10e1,	// (0x000151ea) grid_highlight_pane_cp018

0x74d7,	// (0x0001b5e0) main2_pane_ParamLimits

0x74d7,	// (0x0001b5e0) main2_pane

0x1966,	// (0x00015a6f) popup_sp_fs_action_menu_bg_pane_g1

0x196e,	// (0x00015a77) popup_sp_fs_action_menu_bg_pane_g2

0x1976,	// (0x00015a7f) popup_sp_fs_action_menu_bg_pane_g3

0x197e,	// (0x00015a87) popup_sp_fs_action_menu_bg_pane_g4

0x1986,	// (0x00015a8f) popup_sp_fs_action_menu_bg_pane_g5

0x198e,	// (0x00015a97) popup_sp_fs_action_menu_bg_pane_g6

0x1996,	// (0x00015a9f) popup_sp_fs_action_menu_bg_pane_g7

0x199e,	// (0x00015aa7) popup_sp_fs_action_menu_bg_pane_g8

0x19a6,	// (0x00015aaf) popup_sp_fs_action_menu_bg_pane_g9

0x19ae,	// (0x00015ab7) popup_sp_fs_action_menu_bg_pane_g10

0x19ae,	// (0x00015ab7) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf145,	// (0x0002324e) popup_sp_fs_action_menu_bg_pane_g

0x1b64,	// (0x00015c6d) list_medium_line_x2_t3_g3_g1_ParamLimits

0x1b64,	// (0x00015c6d) list_medium_line_x2_t3_g3_g1

0x1b70,	// (0x00015c79) list_medium_line_x2_t3_g3_g2_ParamLimits

0x1b70,	// (0x00015c79) list_medium_line_x2_t3_g3_g2

0x1b64,	// (0x00015c6d) list_medium_line_x2_t3_g3_g3_ParamLimits

0x1b64,	// (0x00015c6d) list_medium_line_x2_t3_g3_g3

0x0002,

0xf1f3,	// (0x000232fc) list_medium_line_x2_t3_g3_g_ParamLimits

0xf1f3,	// (0x000232fc) list_medium_line_x2_t3_g3_g

0x1b7c,	// (0x00015c85) list_medium_line_x2_t3_g3_t1_ParamLimits

0x1b7c,	// (0x00015c85) list_medium_line_x2_t3_g3_t1

0x1b7c,	// (0x00015c85) list_medium_line_x2_t3_g3_t2_ParamLimits

0x1b7c,	// (0x00015c85) list_medium_line_x2_t3_g3_t2

0x1b8f,	// (0x00015c98) list_medium_line_x2_t3_g3_t3_ParamLimits

0x1b8f,	// (0x00015c98) list_medium_line_x2_t3_g3_t3

0x0002,

0xf1fa,	// (0x00023303) list_medium_line_x2_t3_g3_t_ParamLimits

0xf1fa,	// (0x00023303) list_medium_line_x2_t3_g3_t

0x1b64,	// (0x00015c6d) list_medium_line_x2_t3_g2_g1_ParamLimits

0x1b64,	// (0x00015c6d) list_medium_line_x2_t3_g2_g1

0x1b64,	// (0x00015c6d) list_medium_line_x2_t3_g2_g2_ParamLimits

0x1b64,	// (0x00015c6d) list_medium_line_x2_t3_g2_g2

0x0001,

0xf201,	// (0x0002330a) list_medium_line_x2_t3_g2_g_ParamLimits

0xf201,	// (0x0002330a) list_medium_line_x2_t3_g2_g

0x1b7c,	// (0x00015c85) list_medium_line_x2_t3_g2_t1_ParamLimits

0x1b7c,	// (0x00015c85) list_medium_line_x2_t3_g2_t1

0x1b7c,	// (0x00015c85) list_medium_line_x2_t3_g2_t2_ParamLimits

0x1b7c,	// (0x00015c85) list_medium_line_x2_t3_g2_t2

0x1b8f,	// (0x00015c98) list_medium_line_x2_t3_g2_t3_ParamLimits

0x1b8f,	// (0x00015c98) list_medium_line_x2_t3_g2_t3

0x0002,

0xf1fa,	// (0x00023303) list_medium_line_x2_t3_g2_t_ParamLimits

0xf1fa,	// (0x00023303) list_medium_line_x2_t3_g2_t

0x1b64,	// (0x00015c6d) list_medium_line_x2_t4_g4_g1_ParamLimits

0x1b64,	// (0x00015c6d) list_medium_line_x2_t4_g4_g1

0x1b70,	// (0x00015c79) list_medium_line_x2_t4_g4_g2_ParamLimits

0x1b70,	// (0x00015c79) list_medium_line_x2_t4_g4_g2

0x1b70,	// (0x00015c79) list_medium_line_x2_t4_g4_g3_ParamLimits

0x1b70,	// (0x00015c79) list_medium_line_x2_t4_g4_g3

0x1b64,	// (0x00015c6d) list_medium_line_x2_t4_g4_g4_ParamLimits

0x1b64,	// (0x00015c6d) list_medium_line_x2_t4_g4_g4

0x0003,

0xf206,	// (0x0002330f) list_medium_line_x2_t4_g4_g_ParamLimits

0xf206,	// (0x0002330f) list_medium_line_x2_t4_g4_g

0x1b7c,	// (0x00015c85) list_medium_line_x2_t4_g4_t1_ParamLimits

0x1b7c,	// (0x00015c85) list_medium_line_x2_t4_g4_t1

0x1b7c,	// (0x00015c85) list_medium_line_x2_t4_g4_t2_ParamLimits

0x1b7c,	// (0x00015c85) list_medium_line_x2_t4_g4_t2

0x1b7c,	// (0x00015c85) list_medium_line_x2_t4_g4_t3_ParamLimits

0x1b7c,	// (0x00015c85) list_medium_line_x2_t4_g4_t3

0x1b8f,	// (0x00015c98) list_medium_line_x2_t4_g4_t4_ParamLimits

0x1b8f,	// (0x00015c98) list_medium_line_x2_t4_g4_t4

0x0003,

0xf20f,	// (0x00023318) list_medium_line_x2_t4_g4_t_ParamLimits

0xf20f,	// (0x00023318) list_medium_line_x2_t4_g4_t

0x1b64,	// (0x00015c6d) list_medium_line_x2_t2_g4_g1_ParamLimits

0x1b64,	// (0x00015c6d) list_medium_line_x2_t2_g4_g1

0x1b70,	// (0x00015c79) list_medium_line_x2_t2_g4_g2_ParamLimits

0x1b70,	// (0x00015c79) list_medium_line_x2_t2_g4_g2

0x1b70,	// (0x00015c79) list_medium_line_x2_t2_g4_g3_ParamLimits

0x1b70,	// (0x00015c79) list_medium_line_x2_t2_g4_g3

0x1b64,	// (0x00015c6d) list_medium_line_x2_t2_g4_g4_ParamLimits

0x1b64,	// (0x00015c6d) list_medium_line_x2_t2_g4_g4

0x0003,

0xf206,	// (0x0002330f) list_medium_line_x2_t2_g4_g_ParamLimits

0xf206,	// (0x0002330f) list_medium_line_x2_t2_g4_g

0x1b7c,	// (0x00015c85) list_medium_line_x2_t2_g4_t1_ParamLimits

0x1b7c,	// (0x00015c85) list_medium_line_x2_t2_g4_t1

0x1b8f,	// (0x00015c98) list_medium_line_x2_t2_g4_t2_ParamLimits

0x1b8f,	// (0x00015c98) list_medium_line_x2_t2_g4_t2

0x0001,

0xf276,	// (0x0002337f) list_medium_line_x2_t2_g4_t_ParamLimits

0xf276,	// (0x0002337f) list_medium_line_x2_t2_g4_t

0x1b64,	// (0x00015c6d) list_medium_line_x2_t2_g3_g1_ParamLimits

0x1b64,	// (0x00015c6d) list_medium_line_x2_t2_g3_g1

0x1b70,	// (0x00015c79) list_medium_line_x2_t2_g3_g2_ParamLimits

0x1b70,	// (0x00015c79) list_medium_line_x2_t2_g3_g2

0x1b64,	// (0x00015c6d) list_medium_line_x2_t2_g3_g3_ParamLimits

0x1b64,	// (0x00015c6d) list_medium_line_x2_t2_g3_g3

0x0002,

0xf1f3,	// (0x000232fc) list_medium_line_x2_t2_g3_g_ParamLimits

0xf1f3,	// (0x000232fc) list_medium_line_x2_t2_g3_g

0x1b7c,	// (0x00015c85) list_medium_line_x2_t2_g3_t1_ParamLimits

0x1b7c,	// (0x00015c85) list_medium_line_x2_t2_g3_t1

0x1b8f,	// (0x00015c98) list_medium_line_x2_t2_g3_t2_ParamLimits

0x1b8f,	// (0x00015c98) list_medium_line_x2_t2_g3_t2

0x0001,

0xf276,	// (0x0002337f) list_medium_line_x2_t2_g3_t_ParamLimits

0xf276,	// (0x0002337f) list_medium_line_x2_t2_g3_t

0xa2ae,	// (0x0001e3b7) main_sp_fs_list_pane_ParamLimits

0xa2ae,	// (0x0001e3b7) main_sp_fs_list_pane

0xa2bb,	// (0x0001e3c4) sp_fs_scroll_pane_ParamLimits

0xa2bb,	// (0x0001e3c4) sp_fs_scroll_pane

0x20d2,	// (0x000161db) list_medium_line_x2_t3_t1

0x20d2,	// (0x000161db) list_medium_line_x2_t3_t2

0x20e1,	// (0x000161ea) list_medium_line_x2_t3_t3

0x0002,

0xf2c1,	// (0x000233ca) list_medium_line_x2_t3_t

0x20d2,	// (0x000161db) list_medium_line_x3_t4_t1

0x20d2,	// (0x000161db) list_medium_line_x3_t4_t2

0x20d2,	// (0x000161db) list_medium_line_x3_t4_t3

0x20d2,	// (0x000161db) list_medium_line_x3_t4_t4

0x0003,

0xf2c8,	// (0x000233d1) list_medium_line_x3_t4_t

0x20d2,	// (0x000161db) list_medium_line_x4_t5_t1

0x20d2,	// (0x000161db) list_medium_line_x4_t5_t2

0x20d2,	// (0x000161db) list_medium_line_x4_t5_t3

0x20d2,	// (0x000161db) list_medium_line_x4_t5_t4

0x20d2,	// (0x000161db) list_medium_line_x4_t5_t5

0x0004,

0xf2d1,	// (0x000233da) list_medium_line_x4_t5_t

0x1b64,	// (0x00015c6d) list_medium_line_t4_g4_g1_ParamLimits

0x1b64,	// (0x00015c6d) list_medium_line_t4_g4_g1

0x1b64,	// (0x00015c6d) list_medium_line_t4_g4_g2_ParamLimits

0x1b64,	// (0x00015c6d) list_medium_line_t4_g4_g2

0x1b64,	// (0x00015c6d) list_medium_line_t4_g4_g3_ParamLimits

0x1b64,	// (0x00015c6d) list_medium_line_t4_g4_g3

0x1b64,	// (0x00015c6d) list_medium_line_t4_g4_g4_ParamLimits

0x1b64,	// (0x00015c6d) list_medium_line_t4_g4_g4

0x0003,

0xf2dc,	// (0x000233e5) list_medium_line_t4_g4_g_ParamLimits

0xf2dc,	// (0x000233e5) list_medium_line_t4_g4_g

0x1b7c,	// (0x00015c85) list_medium_line_t4_g4_t1_ParamLimits

0x1b7c,	// (0x00015c85) list_medium_line_t4_g4_t1

0x1b7c,	// (0x00015c85) list_medium_line_t4_g4_t2_ParamLimits

0x1b7c,	// (0x00015c85) list_medium_line_t4_g4_t2

0x1b7c,	// (0x00015c85) list_medium_line_t4_g4_t3_ParamLimits

0x1b7c,	// (0x00015c85) list_medium_line_t4_g4_t3

0x1b7c,	// (0x00015c85) list_medium_line_t4_g4_t4_ParamLimits

0x1b7c,	// (0x00015c85) list_medium_line_t4_g4_t4

0x0003,

0xf2e5,	// (0x000233ee) list_medium_line_t4_g4_t_ParamLimits

0xf2e5,	// (0x000233ee) list_medium_line_t4_g4_t

0xa367,	// (0x0001e470) chi_dic_find_pane_g1

0x7b5c,	// (0x0001bc65) main_tport_pane

0x20d2,	// (0x000161db) list_medium_line_plain_t1

0x1b64,	// (0x00015c6d) list_medium_line_t2_g2_g1_ParamLimits

0x1b64,	// (0x00015c6d) list_medium_line_t2_g2_g1

0x4f8b,	// (0x00019094) list_medium_line_t2_g2_g2_ParamLimits

0x4f8b,	// (0x00019094) list_medium_line_t2_g2_g2

0x0001,

0xf9b6,	// (0x00023abf) list_medium_line_t2_g2_g_ParamLimits

0xf9b6,	// (0x00023abf) list_medium_line_t2_g2_g

0x1b7c,	// (0x00015c85) list_medium_line_t2_g2_t1_ParamLimits

0x1b7c,	// (0x00015c85) list_medium_line_t2_g2_t1

0x1b7c,	// (0x00015c85) list_medium_line_t2_g2_t2_ParamLimits

0x1b7c,	// (0x00015c85) list_medium_line_t2_g2_t2

0x0001,

0xf9bb,	// (0x00023ac4) list_medium_line_t2_g2_t_ParamLimits

0xf9bb,	// (0x00023ac4) list_medium_line_t2_g2_t

0x5330,	// (0x00019439) aid_sp_fs_list_icon_a_sm

0x5338,	// (0x00019441) aid_sp_fs_list_icon_d

0x5340,	// (0x00019449) aid_sp_fs_text_primary

0x5349,	// (0x00019452) aid_sp_fs_text_secondary

0x5352,	// (0x0001945b) list_medium_line

0x5352,	// (0x0001945b) list_medium_line_g2

0x5352,	// (0x0001945b) list_medium_line_g3

0x5352,	// (0x0001945b) list_medium_line_plain

0x5352,	// (0x0001945b) list_medium_line_plain_t2

0x5352,	// (0x0001945b) list_medium_line_plain_t3

0x5352,	// (0x0001945b) list_medium_line_right_icon

0x5352,	// (0x0001945b) list_medium_line_right_iconx2

0x5352,	// (0x0001945b) list_medium_line_t2

0x5352,	// (0x0001945b) list_medium_line_t2_g2

0x5352,	// (0x0001945b) list_medium_line_t2_g3

0x5352,	// (0x0001945b) list_medium_line_t2_right_icon

0x5352,	// (0x0001945b) list_medium_line_t2_right_iconx2

0x5352,	// (0x0001945b) list_medium_line_t3

0x5352,	// (0x0001945b) list_medium_line_t3_g2

0x5352,	// (0x0001945b) list_medium_line_t3_g3

0x5352,	// (0x0001945b) list_medium_line_t3_right_iconx2

0xc7f4,	// (0x000208fd) list_medium_line_t4_g4

0xc7fd,	// (0x00020906) list_medium_line_x2

0xc7fd,	// (0x00020906) list_medium_line_x2_t2_g2

0xc7fd,	// (0x00020906) list_medium_line_x2_t2_g3

0xc7fd,	// (0x00020906) list_medium_line_x2_t2_g4

0xc7fd,	// (0x00020906) list_medium_line_x2_t3

0xc7fd,	// (0x00020906) list_medium_line_x2_t3_g2

0xc7fd,	// (0x00020906) list_medium_line_x2_t3_g3

0xc7fd,	// (0x00020906) list_medium_line_x2_t3_g4

0xc7fd,	// (0x00020906) list_medium_line_x2_t4_g2

0xc7fd,	// (0x00020906) list_medium_line_x2_t4_g4

0xc806,	// (0x0002090f) list_medium_line_x3

0xc806,	// (0x0002090f) list_medium_line_x3_t4

0xc806,	// (0x0002090f) list_medium_line_x3_t4_g4

0xc7f4,	// (0x000208fd) list_medium_line_x4_t4

0xc7f4,	// (0x000208fd) list_medium_line_x4_t4_g7

0xc7f4,	// (0x000208fd) list_medium_line_x4_t5

0xc80f,	// (0x00020918) list_single_fs_dyc_pane_ParamLimits

0xc80f,	// (0x00020918) list_single_fs_dyc_pane

0x1b64,	// (0x00015c6d) list_medium_line_x4_t4_g7_g1_ParamLimits

0x1b64,	// (0x00015c6d) list_medium_line_x4_t4_g7_g1

0x17d5,	// (0x000158de) list_medium_line_x4_t4_g7_g2_ParamLimits

0x17d5,	// (0x000158de) list_medium_line_x4_t4_g7_g2

0x1b70,	// (0x00015c79) list_medium_line_x4_t4_g7_g3_ParamLimits

0x1b70,	// (0x00015c79) list_medium_line_x4_t4_g7_g3

0x17d5,	// (0x000158de) list_medium_line_x4_t4_g7_g4_ParamLimits

0x17d5,	// (0x000158de) list_medium_line_x4_t4_g7_g4

0x17d5,	// (0x000158de) list_medium_line_x4_t4_g7_g5_ParamLimits

0x17d5,	// (0x000158de) list_medium_line_x4_t4_g7_g5

0x17d5,	// (0x000158de) list_medium_line_x4_t4_g7_g6_ParamLimits

0x17d5,	// (0x000158de) list_medium_line_x4_t4_g7_g6

0x17e3,	// (0x000158ec) list_medium_line_x4_t4_g7_g7_ParamLimits

0x17e3,	// (0x000158ec) list_medium_line_x4_t4_g7_g7

0x0006,

0xfb86,	// (0x00023c8f) list_medium_line_x4_t4_g7_g_ParamLimits

0xfb86,	// (0x00023c8f) list_medium_line_x4_t4_g7_g

0x1b7c,	// (0x00015c85) list_medium_line_x4_t4_g7_t1_ParamLimits

0x1b7c,	// (0x00015c85) list_medium_line_x4_t4_g7_t1

0x1b7c,	// (0x00015c85) list_medium_line_x4_t4_g7_t2_ParamLimits

0x1b7c,	// (0x00015c85) list_medium_line_x4_t4_g7_t2

0x1b7c,	// (0x00015c85) list_medium_line_x4_t4_g7_t3_ParamLimits

0x1b7c,	// (0x00015c85) list_medium_line_x4_t4_g7_t3

0x583d,	// (0x00019946) list_medium_line_x4_t4_g7_t4_ParamLimits

0x583d,	// (0x00019946) list_medium_line_x4_t4_g7_t4

0x5850,	// (0x00019959) list_medium_line_x4_t4_g7_t5_ParamLimits

0x5850,	// (0x00019959) list_medium_line_x4_t4_g7_t5

0x0004,

0xfb95,	// (0x00023c9e) list_medium_line_x4_t4_g7_t_ParamLimits

0xfb95,	// (0x00023c9e) list_medium_line_x4_t4_g7_t

0xce44,	// (0x00020f4d) list_single_dyc_row_pane_ParamLimits

0xce44,	// (0x00020f4d) list_single_dyc_row_pane

0xd458,	// (0x00021561) call5_gesture_pane_ParamLimits

0xd458,	// (0x00021561) call5_gesture_pane

0xd488,	// (0x00021591) call5_windows_pane_ParamLimits

0xd488,	// (0x00021591) call5_windows_pane

0xd50c,	// (0x00021615) call5_swipe_1_pane_cp_ParamLimits

0xd50c,	// (0x00021615) call5_swipe_1_pane_cp

0xd518,	// (0x00021621) call5_swipe_2_pane_cp_ParamLimits

0xd518,	// (0x00021621) call5_swipe_2_pane_cp

0x1ad2,	// (0x00015bdb) call5_image_pane_cp

0xd524,	// (0x0002162d) popup_call5_audio_first_window_cp_ParamLimits

0xd524,	// (0x0002162d) popup_call5_audio_first_window_cp

0x5e41,	// (0x00019f4a) call5_swipe_1_pane_g1_cp_ParamLimits

0x5e41,	// (0x00019f4a) call5_swipe_1_pane_g1_cp

0x5e86,	// (0x00019f8f) call5_swipe_1_pane_g2_cp

0x5e5a,	// (0x00019f63) call5_swipe_1_pane_t1_cp_ParamLimits

0x5e5a,	// (0x00019f63) call5_swipe_1_pane_t1_cp

0x5e41,	// (0x00019f4a) call5_swipe_2_pane_g1_cp_ParamLimits

0x5e41,	// (0x00019f4a) call5_swipe_2_pane_g1_cp

0x5e8e,	// (0x00019f97) call5_swipe_2_pane_g2_cp

0x5e96,	// (0x00019f9f) call5_swipe_2_pane_t1_cp_ParamLimits

0x5e96,	// (0x00019f9f) call5_swipe_2_pane_t1_cp

0x10e1,	// (0x000151ea) main_sp_fs_email_pane

0x5eab,	// (0x00019fb4) main_sp_fs_listscroll_pane_te

0xd530,	// (0x00021639) popup_sp_fs_action_menu_pane_ParamLimits

0xd530,	// (0x00021639) popup_sp_fs_action_menu_pane

0x1b4a,	// (0x00015c53) bg_sp_fs_ctrlbar_pane_g1

0x456a,	// (0x00018673) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x457c,	// (0x00018685) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x4573,	// (0x0001867c) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x1b4a,	// (0x00015c53) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfc83,	// (0x00023d8c) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x3c7d,	// (0x00017d86) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x3c7d,	// (0x00017d86) bg_sp_fs_ctrlbar_ddmenu_pane

0x5eb4,	// (0x00019fbd) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x5eb4,	// (0x00019fbd) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x5ec0,	// (0x00019fc9) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x5ec0,	// (0x00019fc9) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfc8c,	// (0x00023d95) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfc8c,	// (0x00023d95) main_sp_fs_ctrlbar_ddmenu_pane_g

0x5ecc,	// (0x00019fd5) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x5ecc,	// (0x00019fd5) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x5ee6,	// (0x00019fef) list_medium_line_t2_right_icon_g1

0x20d2,	// (0x000161db) list_medium_line_t2_right_icon_t1

0x20d2,	// (0x000161db) list_medium_line_t2_right_icon_t2

0x0001,

0xfc91,	// (0x00023d9a) list_medium_line_t2_right_icon_t

0x26dd,	// (0x000167e6) bg_sp_fs_ctrlbar_pane_ParamLimits

0x26dd,	// (0x000167e6) bg_sp_fs_ctrlbar_pane

0xd5b7,	// (0x000216c0) main_sp_fs_ctrlbar_button_pane_cp01

0xd5bf,	// (0x000216c8) main_sp_fs_ctrlbar_ddmenu_pane

0x5f26,	// (0x0001a02f) main_sp_fs_ctrlbar_pane_g1

0x5f32,	// (0x0001a03b) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfc96,	// (0x00023d9f) main_sp_fs_ctrlbar_pane_g

0xd5f9,	// (0x00021702) main_sp_fs_ctrlbar_pane_t1

0xd641,	// (0x0002174a) main_sp_fs_ctrlbar_pane

0xd655,	// (0x0002175e) main_sp_fs_listscroll_pane_te_cp01

0xd666,	// (0x0002176f) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0xd666,	// (0x0002176f) popup_sp_fs_action_menu_pane_cp01

0x10e1,	// (0x000151ea) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x10e1,	// (0x000151ea) bg_sp_fs_highlight_list_pane_cp01

0xd68c,	// (0x00021795) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xd68c,	// (0x00021795) sp_fs_action_menu_list_gene_pane_g1

0x5f59,	// (0x0001a062) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x5f59,	// (0x0001a062) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfca4,	// (0x00023dad) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfca4,	// (0x00023dad) sp_fs_action_menu_list_gene_pane_g

0xd69b,	// (0x000217a4) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xd69b,	// (0x000217a4) sp_fs_action_menu_list_gene_pane_t1

0xd6b3,	// (0x000217bc) sp_fs_action_menu_list_gene_pane_ParamLimits

0xd6b3,	// (0x000217bc) sp_fs_action_menu_list_gene_pane

0x5f66,	// (0x0001a06f) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x5f66,	// (0x0001a06f) popup_sp_fs_action_menu_bg_pane

0xd6d0,	// (0x000217d9) sp_fs_action_menu_list_pane_ParamLimits

0xd6d0,	// (0x000217d9) sp_fs_action_menu_list_pane

0x5f74,	// (0x0001a07d) sp_fs_scroll_pane_cp01_ParamLimits

0x5f74,	// (0x0001a07d) sp_fs_scroll_pane_cp01

0x20d2,	// (0x000161db) list_medium_line_plain_t2_t1

0x20d2,	// (0x000161db) list_medium_line_plain_t2_t2

0x0001,

0xfc91,	// (0x00023d9a) list_medium_line_plain_t2_t

0x20d2,	// (0x000161db) list_medium_line_plain_t3_t1

0x20d2,	// (0x000161db) list_medium_line_plain_t3_t2

0x20d2,	// (0x000161db) list_medium_line_plain_t3_t3

0x0002,

0xfca9,	// (0x00023db2) list_medium_line_plain_t3_t

0x1b64,	// (0x00015c6d) list_medium_line_x2_t2_g2_g1_ParamLimits

0x1b64,	// (0x00015c6d) list_medium_line_x2_t2_g2_g1

0x1b64,	// (0x00015c6d) list_medium_line_x2_t2_g2_g2_ParamLimits

0x1b64,	// (0x00015c6d) list_medium_line_x2_t2_g2_g2

0x0001,

0xf201,	// (0x0002330a) list_medium_line_x2_t2_g2_g_ParamLimits

0xf201,	// (0x0002330a) list_medium_line_x2_t2_g2_g

0x1b7c,	// (0x00015c85) list_medium_line_x2_t2_g2_t1_ParamLimits

0x1b7c,	// (0x00015c85) list_medium_line_x2_t2_g2_t1

0x1b8f,	// (0x00015c98) list_medium_line_x2_t2_g2_t2_ParamLimits

0x1b8f,	// (0x00015c98) list_medium_line_x2_t2_g2_t2

0x0001,

0xf276,	// (0x0002337f) list_medium_line_x2_t2_g2_t_ParamLimits

0xf276,	// (0x0002337f) list_medium_line_x2_t2_g2_t

0x1b64,	// (0x00015c6d) list_medium_line_x2_t4_g2_g1_ParamLimits

0x1b64,	// (0x00015c6d) list_medium_line_x2_t4_g2_g1

0x1b64,	// (0x00015c6d) list_medium_line_x2_t4_g2_g2_ParamLimits

0x1b64,	// (0x00015c6d) list_medium_line_x2_t4_g2_g2

0x0001,

0xf201,	// (0x0002330a) list_medium_line_x2_t4_g2_g_ParamLimits

0xf201,	// (0x0002330a) list_medium_line_x2_t4_g2_g

0x1b7c,	// (0x00015c85) list_medium_line_x2_t4_g2_t1_ParamLimits

0x1b7c,	// (0x00015c85) list_medium_line_x2_t4_g2_t1

0x1b7c,	// (0x00015c85) list_medium_line_x2_t4_g2_t2_ParamLimits

0x1b7c,	// (0x00015c85) list_medium_line_x2_t4_g2_t2

0x1b7c,	// (0x00015c85) list_medium_line_x2_t4_g2_t3_ParamLimits

0x1b7c,	// (0x00015c85) list_medium_line_x2_t4_g2_t3

0x1b8f,	// (0x00015c98) list_medium_line_x2_t4_g2_t4_ParamLimits

0x1b8f,	// (0x00015c98) list_medium_line_x2_t4_g2_t4

0x0003,

0xf20f,	// (0x00023318) list_medium_line_x2_t4_g2_t_ParamLimits

0xf20f,	// (0x00023318) list_medium_line_x2_t4_g2_t

0x5ee6,	// (0x00019fef) list_medium_line_t3_right_iconx2_g1

0x1b4a,	// (0x00015c53) list_medium_line_t3_right_iconx2_g2

0x5f9a,	// (0x0001a0a3) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfcb0,	// (0x00023db9) list_medium_line_t3_right_iconx2_g

0x20d2,	// (0x000161db) list_medium_line_t3_right_iconx2_t1

0x20d2,	// (0x000161db) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfc91,	// (0x00023d9a) list_medium_line_t3_right_iconx2_t

0x1b64,	// (0x00015c6d) list_medium_line_x3_t4_g4_g1_ParamLimits

0x1b64,	// (0x00015c6d) list_medium_line_x3_t4_g4_g1

0x1b70,	// (0x00015c79) list_medium_line_x3_t4_g4_g2_ParamLimits

0x1b70,	// (0x00015c79) list_medium_line_x3_t4_g4_g2

0x1b64,	// (0x00015c6d) list_medium_line_x3_t4_g4_g3_ParamLimits

0x1b64,	// (0x00015c6d) list_medium_line_x3_t4_g4_g3

0x1b70,	// (0x00015c79) list_medium_line_x3_t4_g4_g4_ParamLimits

0x1b70,	// (0x00015c79) list_medium_line_x3_t4_g4_g4

0x0003,

0xfcb7,	// (0x00023dc0) list_medium_line_x3_t4_g4_g_ParamLimits

0xfcb7,	// (0x00023dc0) list_medium_line_x3_t4_g4_g

0x1b7c,	// (0x00015c85) list_medium_line_x3_t4_g4_t1_ParamLimits

0x1b7c,	// (0x00015c85) list_medium_line_x3_t4_g4_t1

0x1b7c,	// (0x00015c85) list_medium_line_x3_t4_g4_t2_ParamLimits

0x1b7c,	// (0x00015c85) list_medium_line_x3_t4_g4_t2

0x1b7c,	// (0x00015c85) list_medium_line_x3_t4_g4_t3_ParamLimits

0x1b7c,	// (0x00015c85) list_medium_line_x3_t4_g4_t3

0x5fa3,	// (0x0001a0ac) list_medium_line_x3_t4_g4_t4_ParamLimits

0x5fa3,	// (0x0001a0ac) list_medium_line_x3_t4_g4_t4

0x0003,

0xfcc0,	// (0x00023dc9) list_medium_line_x3_t4_g4_t_ParamLimits

0xfcc0,	// (0x00023dc9) list_medium_line_x3_t4_g4_t

0xd6ee,	// (0x000217f7) list_single_dyc_row_text_pane_t1_ParamLimits

0xd6ee,	// (0x000217f7) list_single_dyc_row_text_pane_t1

0xd725,	// (0x0002182e) list_single_dyc_row_text_pane_t2_ParamLimits

0xd725,	// (0x0002182e) list_single_dyc_row_text_pane_t2

0x5fc0,	// (0x0001a0c9) list_single_dyc_row_text_pane_t3_ParamLimits

0x5fc0,	// (0x0001a0c9) list_single_dyc_row_text_pane_t3

0x0005,

0xfcc9,	// (0x00023dd2) list_single_dyc_row_text_pane_t_ParamLimits

0xfcc9,	// (0x00023dd2) list_single_dyc_row_text_pane_t

0x5fe4,	// (0x0001a0ed) list_single_dyc_row_pane_g1_ParamLimits

0x5fe4,	// (0x0001a0ed) list_single_dyc_row_pane_g1

0x5ff0,	// (0x0001a0f9) list_single_dyc_row_pane_g2_ParamLimits

0x5ff0,	// (0x0001a0f9) list_single_dyc_row_pane_g2

0x5ffc,	// (0x0001a105) list_single_dyc_row_pane_g3_ParamLimits

0x5ffc,	// (0x0001a105) list_single_dyc_row_pane_g3

0x6008,	// (0x0001a111) list_single_dyc_row_pane_g4_ParamLimits

0x6008,	// (0x0001a111) list_single_dyc_row_pane_g4

0x0003,

0xfcd6,	// (0x00023ddf) list_single_dyc_row_pane_g_ParamLimits

0xfcd6,	// (0x00023ddf) list_single_dyc_row_pane_g

0x6014,	// (0x0001a11d) list_single_dyc_row_text_pane_ParamLimits

0x6014,	// (0x0001a11d) list_single_dyc_row_text_pane

0x108e,	// (0x00015197) bg_sp_fs_scroll_pane

0x6033,	// (0x0001a13c) thumb_sp_fs_scroll_pane

0x1b64,	// (0x00015c6d) list_medium_line_g1_ParamLimits

0x1b64,	// (0x00015c6d) list_medium_line_g1

0x1b7c,	// (0x00015c85) list_medium_line_t1_ParamLimits

0x1b7c,	// (0x00015c85) list_medium_line_t1

0x1b64,	// (0x00015c6d) list_medium_line_x2_g1_ParamLimits

0x1b64,	// (0x00015c6d) list_medium_line_x2_g1

0x4f8b,	// (0x00019094) list_medium_line_x2_g2_ParamLimits

0x4f8b,	// (0x00019094) list_medium_line_x2_g2

0x0001,

0xf9b6,	// (0x00023abf) list_medium_line_x2_g_ParamLimits

0xf9b6,	// (0x00023abf) list_medium_line_x2_g

0x1b1c,	// (0x00015c25) list_medium_line_x2_t1_ParamLimits

0x1b1c,	// (0x00015c25) list_medium_line_x2_t1

0x1b64,	// (0x00015c6d) list_medium_line_x3_g1_ParamLimits

0x1b64,	// (0x00015c6d) list_medium_line_x3_g1

0x603c,	// (0x0001a145) list_medium_line_x3_g2_ParamLimits

0x603c,	// (0x0001a145) list_medium_line_x3_g2

0x0001,

0xfcdf,	// (0x00023de8) list_medium_line_x3_g_ParamLimits

0xfcdf,	// (0x00023de8) list_medium_line_x3_g

0x6049,	// (0x0001a152) list_medium_line_x3_t1_ParamLimits

0x6049,	// (0x0001a152) list_medium_line_x3_t1

0x605d,	// (0x0001a166) thumb_sp_fs_scroll_pane_g1

0x6066,	// (0x0001a16f) thumb_sp_fs_scroll_pane_g2

0x606f,	// (0x0001a178) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfce4,	// (0x00023ded) thumb_sp_fs_scroll_pane_g

0x605d,	// (0x0001a166) bg_sp_fs_scroll_pane_g1

0x6066,	// (0x0001a16f) bg_sp_fs_scroll_pane_g2

0x606f,	// (0x0001a178) bg_sp_fs_scroll_pane_g3

0x0002,

0xfce4,	// (0x00023ded) bg_sp_fs_scroll_pane_g

0x1b64,	// (0x00015c6d) list_medium_line_x2_t3_g4_g1_ParamLimits

0x1b64,	// (0x00015c6d) list_medium_line_x2_t3_g4_g1

0x1b70,	// (0x00015c79) list_medium_line_x2_t3_g4_g2_ParamLimits

0x1b70,	// (0x00015c79) list_medium_line_x2_t3_g4_g2

0x1b70,	// (0x00015c79) list_medium_line_x2_t3_g4_g3_ParamLimits

0x1b70,	// (0x00015c79) list_medium_line_x2_t3_g4_g3

0x1b64,	// (0x00015c6d) list_medium_line_x2_t3_g4_g4_ParamLimits

0x1b64,	// (0x00015c6d) list_medium_line_x2_t3_g4_g4

0x0003,

0xf206,	// (0x0002330f) list_medium_line_x2_t3_g4_g_ParamLimits

0xf206,	// (0x0002330f) list_medium_line_x2_t3_g4_g

0x1b7c,	// (0x00015c85) list_medium_line_x2_t3_g4_t1_ParamLimits

0x1b7c,	// (0x00015c85) list_medium_line_x2_t3_g4_t1

0x1b7c,	// (0x00015c85) list_medium_line_x2_t3_g4_t2_ParamLimits

0x1b7c,	// (0x00015c85) list_medium_line_x2_t3_g4_t2

0x1b8f,	// (0x00015c98) list_medium_line_x2_t3_g4_t3_ParamLimits

0x1b8f,	// (0x00015c98) list_medium_line_x2_t3_g4_t3

0x0002,

0xf1fa,	// (0x00023303) list_medium_line_x2_t3_g4_t_ParamLimits

0xf1fa,	// (0x00023303) list_medium_line_x2_t3_g4_t

0x1b64,	// (0x00015c6d) list_medium_line_g2_g1_ParamLimits

0x1b64,	// (0x00015c6d) list_medium_line_g2_g1

0x4f8b,	// (0x00019094) list_medium_line_g2_g2_ParamLimits

0x4f8b,	// (0x00019094) list_medium_line_g2_g2

0x0001,

0xf9b6,	// (0x00023abf) list_medium_line_g2_g_ParamLimits

0xf9b6,	// (0x00023abf) list_medium_line_g2_g

0x1b7c,	// (0x00015c85) list_medium_line_g2_t1_ParamLimits

0x1b7c,	// (0x00015c85) list_medium_line_g2_t1

0x1b64,	// (0x00015c6d) list_medium_line_t3_g2_g1_ParamLimits

0x1b64,	// (0x00015c6d) list_medium_line_t3_g2_g1

0x4f8b,	// (0x00019094) list_medium_line_t3_g2_g2_ParamLimits

0x4f8b,	// (0x00019094) list_medium_line_t3_g2_g2

0x0001,

0xf9b6,	// (0x00023abf) list_medium_line_t3_g2_g_ParamLimits

0xf9b6,	// (0x00023abf) list_medium_line_t3_g2_g

0x1b7c,	// (0x00015c85) list_medium_line_t3_g2_t1_ParamLimits

0x1b7c,	// (0x00015c85) list_medium_line_t3_g2_t1

0x1b7c,	// (0x00015c85) list_medium_line_t3_g2_t2_ParamLimits

0x1b7c,	// (0x00015c85) list_medium_line_t3_g2_t2

0x1b7c,	// (0x00015c85) list_medium_line_t3_g2_t3_ParamLimits

0x1b7c,	// (0x00015c85) list_medium_line_t3_g2_t3

0x0002,

0xfceb,	// (0x00023df4) list_medium_line_t3_g2_t_ParamLimits

0xfceb,	// (0x00023df4) list_medium_line_t3_g2_t

0x6078,	// (0x0001a181) list_medium_line_right_icon_g1

0x20d2,	// (0x000161db) list_medium_line_right_icon_t1

0x1b64,	// (0x00015c6d) list_medium_line_t2_g1_ParamLimits

0x1b64,	// (0x00015c6d) list_medium_line_t2_g1

0x1b7c,	// (0x00015c85) list_medium_line_t2_t1_ParamLimits

0x1b7c,	// (0x00015c85) list_medium_line_t2_t1

0x1b7c,	// (0x00015c85) list_medium_line_t2_t2_ParamLimits

0x1b7c,	// (0x00015c85) list_medium_line_t2_t2

0x0001,

0xf9bb,	// (0x00023ac4) list_medium_line_t2_t_ParamLimits

0xf9bb,	// (0x00023ac4) list_medium_line_t2_t

0x1b64,	// (0x00015c6d) list_medium_line_t3_g1_ParamLimits

0x1b64,	// (0x00015c6d) list_medium_line_t3_g1

0x1b7c,	// (0x00015c85) list_medium_line_t3_t1_ParamLimits

0x1b7c,	// (0x00015c85) list_medium_line_t3_t1

0x1b7c,	// (0x00015c85) list_medium_line_t3_t2_ParamLimits

0x1b7c,	// (0x00015c85) list_medium_line_t3_t2

0x1b7c,	// (0x00015c85) list_medium_line_t3_t3_ParamLimits

0x1b7c,	// (0x00015c85) list_medium_line_t3_t3

0x0002,

0xfceb,	// (0x00023df4) list_medium_line_t3_t_ParamLimits

0xfceb,	// (0x00023df4) list_medium_line_t3_t

0x1b64,	// (0x00015c6d) list_medium_line_g3_g1_ParamLimits

0x1b64,	// (0x00015c6d) list_medium_line_g3_g1

0x1b70,	// (0x00015c79) list_medium_line_g3_g2_ParamLimits

0x1b70,	// (0x00015c79) list_medium_line_g3_g2

0x1b70,	// (0x00015c79) list_medium_line_g3_g3_ParamLimits

0x1b70,	// (0x00015c79) list_medium_line_g3_g3

0x0002,

0xfcf2,	// (0x00023dfb) list_medium_line_g3_g_ParamLimits

0xfcf2,	// (0x00023dfb) list_medium_line_g3_g

0x1b7c,	// (0x00015c85) list_medium_line_g3_t1_ParamLimits

0x1b7c,	// (0x00015c85) list_medium_line_g3_t1

0x1b64,	// (0x00015c6d) list_medium_line_t2_g3_g1_ParamLimits

0x1b64,	// (0x00015c6d) list_medium_line_t2_g3_g1

0x1b70,	// (0x00015c79) list_medium_line_t2_g3_g2_ParamLimits

0x1b70,	// (0x00015c79) list_medium_line_t2_g3_g2

0x1b70,	// (0x00015c79) list_medium_line_t2_g3_g3_ParamLimits

0x1b70,	// (0x00015c79) list_medium_line_t2_g3_g3

0x0002,

0xfcf2,	// (0x00023dfb) list_medium_line_t2_g3_g_ParamLimits

0xfcf2,	// (0x00023dfb) list_medium_line_t2_g3_g

0x1b7c,	// (0x00015c85) list_medium_line_t2_g3_t1_ParamLimits

0x1b7c,	// (0x00015c85) list_medium_line_t2_g3_t1

0x1b7c,	// (0x00015c85) list_medium_line_t2_g3_t2_ParamLimits

0x1b7c,	// (0x00015c85) list_medium_line_t2_g3_t2

0x0001,

0xf9bb,	// (0x00023ac4) list_medium_line_t2_g3_t_ParamLimits

0xf9bb,	// (0x00023ac4) list_medium_line_t2_g3_t

0x1b64,	// (0x00015c6d) list_medium_line_t3_g3_g1_ParamLimits

0x1b64,	// (0x00015c6d) list_medium_line_t3_g3_g1

0x1b70,	// (0x00015c79) list_medium_line_t3_g3_g2_ParamLimits

0x1b70,	// (0x00015c79) list_medium_line_t3_g3_g2

0x1b70,	// (0x00015c79) list_medium_line_t3_g3_g3_ParamLimits

0x1b70,	// (0x00015c79) list_medium_line_t3_g3_g3

0x0002,

0xfcf2,	// (0x00023dfb) list_medium_line_t3_g3_g_ParamLimits

0xfcf2,	// (0x00023dfb) list_medium_line_t3_g3_g

0x1b7c,	// (0x00015c85) list_medium_line_t3_g3_t1_ParamLimits

0x1b7c,	// (0x00015c85) list_medium_line_t3_g3_t1

0x1b7c,	// (0x00015c85) list_medium_line_t3_g3_t2_ParamLimits

0x1b7c,	// (0x00015c85) list_medium_line_t3_g3_t2

0x1b7c,	// (0x00015c85) list_medium_line_t3_g3_t3_ParamLimits

0x1b7c,	// (0x00015c85) list_medium_line_t3_g3_t3

0x0002,

0xfceb,	// (0x00023df4) list_medium_line_t3_g3_t_ParamLimits

0xfceb,	// (0x00023df4) list_medium_line_t3_g3_t

0x5ee6,	// (0x00019fef) list_medium_line_right_iconx2_g1

0x5ee6,	// (0x00019fef) list_medium_line_right_iconx2_g2

0x0001,

0xfcf9,	// (0x00023e02) list_medium_line_right_iconx2_g

0x6081,	// (0x0001a18a) list_medium_line_right_iconx2_t1

0x5ee6,	// (0x00019fef) list_medium_line_t2_right_iconx2_g1

0x5ee6,	// (0x00019fef) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfcf9,	// (0x00023e02) list_medium_line_t2_right_iconx2_g

0x20d2,	// (0x000161db) list_medium_line_t2_right_iconx2_t1

0x20d2,	// (0x000161db) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfc91,	// (0x00023d9a) list_medium_line_t2_right_iconx2_t

0x20d2,	// (0x000161db) list_medium_line_x4_t4_t1

0x20d2,	// (0x000161db) list_medium_line_x4_t4_t2

0x20d2,	// (0x000161db) list_medium_line_x4_t4_t3

0x20d2,	// (0x000161db) list_medium_line_x4_t4_t4

0x0003,

0xf2c8,	// (0x000233d1) list_medium_line_x4_t4_t

0xd866,	// (0x0002196f) tport_appsw_pane_ParamLimits

0xd866,	// (0x0002196f) tport_appsw_pane

0xd872,	// (0x0002197b) tport_contact_pane_ParamLimits

0xd872,	// (0x0002197b) tport_contact_pane

0xd880,	// (0x00021989) tport_listscroll_pane_ParamLimits

0xd880,	// (0x00021989) tport_listscroll_pane

0xd88e,	// (0x00021997) cell_tport_appsw_pane_ParamLimits

0xd88e,	// (0x00021997) cell_tport_appsw_pane

0x17e3,	// (0x000158ec) tport_appsw_pane_g1_ParamLimits

0x17e3,	// (0x000158ec) tport_appsw_pane_g1

0x6090,	// (0x0001a199) tport_contact_pane_g1

0x6099,	// (0x0001a1a2) tport_contact_pane_t1

0x60a7,	// (0x0001a1b0) tport_contact_pane_t2

0x0001,

0xfcfe,	// (0x00023e07) tport_contact_pane_t

0x60b5,	// (0x0001a1be) list_tport_pane

0x19c0,	// (0x00015ac9) scroll_pane_cp_030

0x60c6,	// (0x0001a1cf) cell_tport_appsw_pane_g1

0x60d6,	// (0x0001a1df) cell_tport_appsw_pane_t1

0x60e4,	// (0x0001a1ed) grid_highlight_pane_cp019

0xd8b5,	// (0x000219be) list_tport_double_graphic_pane_ParamLimits

0xd8b5,	// (0x000219be) list_tport_double_graphic_pane

0x10e1,	// (0x000151ea) list_highlight_pane_cp023_ParamLimits

0x10e1,	// (0x000151ea) list_highlight_pane_cp023

0xd8c2,	// (0x000219cb) list_tport_double_graphic_pane_g1_ParamLimits

0xd8c2,	// (0x000219cb) list_tport_double_graphic_pane_g1

0xd8cf,	// (0x000219d8) list_tport_double_graphic_pane_t1_ParamLimits

0xd8cf,	// (0x000219d8) list_tport_double_graphic_pane_t1

0xd8e4,	// (0x000219ed) list_tport_double_graphic_pane_t2_ParamLimits

0xd8e4,	// (0x000219ed) list_tport_double_graphic_pane_t2

0x0001,

0xfd0a,	// (0x00023e13) list_tport_double_graphic_pane_t_ParamLimits

0xfd0a,	// (0x00023e13) list_tport_double_graphic_pane_t

0x108e,	// (0x00015197) main_cale_note_pane

0x864a,	// (0x0001c753) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x864a,	// (0x0001c753) cell_vitu2_function_top_wide_pane_cp01

0xd170,	// (0x00021279) wait_bar_pane_cp05_ParamLimits

0x10e1,	// (0x000151ea) listscroll_cmail_pane

0x60ec,	// (0x0001a1f5) list_cmail_pane

0xd8f6,	// (0x000219ff) list_cmail_body_pane

0xd8f6,	// (0x000219ff) list_single_cmail_header_caption_pane

0xd90f,	// (0x00021a18) list_single_cmail_header_detail_pane_ParamLimits

0xd90f,	// (0x00021a18) list_single_cmail_header_detail_pane

0x6108,	// (0x0001a211) list_single_cmail_header_caption_pane_t1

0xd93a,	// (0x00021a43) list_single_cmail_header_detail_pane_g1_ParamLimits

0xd93a,	// (0x00021a43) list_single_cmail_header_detail_pane_g1

0x6116,	// (0x0001a21f) list_single_cmail_header_detail_pane_g2_ParamLimits

0x6116,	// (0x0001a21f) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd0f,	// (0x00023e18) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd0f,	// (0x00023e18) list_single_cmail_header_detail_pane_g

0xd950,	// (0x00021a59) list_single_cmail_header_detail_pane_t1_ParamLimits

0xd950,	// (0x00021a59) list_single_cmail_header_detail_pane_t1

0x6153,	// (0x0001a25c) list_single_cmail_header_editor_pane_bg_ParamLimits

0x6153,	// (0x0001a25c) list_single_cmail_header_editor_pane_bg

0x616a,	// (0x0001a273) list_cmail_body_pane_g1

0x6173,	// (0x0001a27c) list_cmail_body_pane_t1

0x4cd8,	// (0x00018de1) list_single_cmail_header_editor_pane_bg_g1

0x1da6,	// (0x00015eaf) list_single_cmail_header_editor_pane_bg_g1_copy1

0x4ce8,	// (0x00018df1) list_single_cmail_header_editor_pane_bg_g1_copy2

0x4ce0,	// (0x00018de9) list_single_cmail_header_editor_pane_bg_g1_copy3

0x4f63,	// (0x0001906c) list_single_cmail_header_editor_pane_bg_g1_copy4

0x4d08,	// (0x00018e11) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x4cf8,	// (0x00018e01) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x4d00,	// (0x00018e09) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x1d86,	// (0x00015e8f) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xd98c,	// (0x00021a95) calenote_gesture_pane_ParamLimits

0xd98c,	// (0x00021a95) calenote_gesture_pane

0xd9a4,	// (0x00021aad) calenote_window_pane_ParamLimits

0xd9a4,	// (0x00021aad) calenote_window_pane

0x6181,	// (0x0001a28a) popup_note_window_cp01

0xd9bc,	// (0x00021ac5) calenote_swipe_1_pane_ParamLimits

0xd9bc,	// (0x00021ac5) calenote_swipe_1_pane

0xd518,	// (0x00021621) calenote_swipe_2_pane_ParamLimits

0xd518,	// (0x00021621) calenote_swipe_2_pane

0x5e41,	// (0x00019f4a) calenote_swipe_1_pane_g1_ParamLimits

0x5e41,	// (0x00019f4a) calenote_swipe_1_pane_g1

0x5e4e,	// (0x00019f57) calenote_swipe_1_pane_g2_ParamLimits

0x5e4e,	// (0x00019f57) calenote_swipe_1_pane_g2

0x0001,

0xfc79,	// (0x00023d82) calenote_swipe_1_pane_g_ParamLimits

0xfc79,	// (0x00023d82) calenote_swipe_1_pane_g

0x6193,	// (0x0001a29c) calenote_swipe_1_pane_t1_ParamLimits

0x6193,	// (0x0001a29c) calenote_swipe_1_pane_t1

0x5e41,	// (0x00019f4a) calenote_swipe_2_pane_g1_ParamLimits

0x5e41,	// (0x00019f4a) calenote_swipe_2_pane_g1

0x61b2,	// (0x0001a2bb) calenote_swipe_2_pane_g2_ParamLimits

0x61b2,	// (0x0001a2bb) calenote_swipe_2_pane_g2

0x0001,

0xfd1b,	// (0x00023e24) calenote_swipe_2_pane_g_ParamLimits

0xfd1b,	// (0x00023e24) calenote_swipe_2_pane_g

0x61be,	// (0x0001a2c7) calenote_swipe_2_pane_t1_ParamLimits

0x61be,	// (0x0001a2c7) calenote_swipe_2_pane_t1

0x108e,	// (0x00015197) main_mup_navstr_pane

0xb66c,	// (0x0001f775) main_mup3_pane_t7_ParamLimits

0xb66c,	// (0x0001f775) main_mup3_pane_t7

0x7f69,	// (0x0001c072) main_mp4_pane_g6_ParamLimits

0x7f69,	// (0x0001c072) main_mp4_pane_g6

0x8230,	// (0x0001c339) main_image3_pane_t4_ParamLimits

0x8230,	// (0x0001c339) main_image3_pane_t4

0xd9cf,	// (0x00021ad8) popup_navstr_preview_pane_ParamLimits

0xd9cf,	// (0x00021ad8) popup_navstr_preview_pane

0xd9db,	// (0x00021ae4) scroll_navstr_pane_ParamLimits

0xd9db,	// (0x00021ae4) scroll_navstr_pane

0x108e,	// (0x00015197) bg_popup_preview_window_pane_cp04

0x61e5,	// (0x0001a2ee) popup_navstr_preview_pane_t1

0xd9e7,	// (0x00021af0) scroll_navstr_pane_g1_ParamLimits

0xd9e7,	// (0x00021af0) scroll_navstr_pane_g1

0xd9f4,	// (0x00021afd) scroll_navstr_pane_t1_ParamLimits

0xd9f4,	// (0x00021afd) scroll_navstr_pane_t1

0x618a,	// (0x0001a293) bg_button_pane_cp014

0x618a,	// (0x0001a293) bg_button_pane_cp030

0xd3fe,	// (0x00021507) list_double_fisheye_pane_g4_ParamLimits

0xd3fe,	// (0x00021507) list_double_fisheye_pane_g4

0xd40a,	// (0x00021513) list_double_fisheye_pane_g5_ParamLimits

0xd40a,	// (0x00021513) list_double_fisheye_pane_g5

0x60fc,	// (0x0001a205) sp_fs_scroll_pane_cp03

0x5f26,	// (0x0001a02f) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x5f32,	// (0x0001a03b) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfc96,	// (0x00023d9f) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xd5f9,	// (0x00021702) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x60f4,	// (0x0001a1fd) sp_fs_scroll_pane_cp02

0x1a1a,	// (0x00015b23) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x1a1a,	// (0x00015b23) popup_sp_fs_calendar_preview_list_single_pane

0x108e,	// (0x00015197) main_cam6_pano_pane

0x7b40,	// (0x0001bc49) main_mup3_pane_ParamLimits

0x108e,	// (0x00015197) main_phacti_pane

0xd063,	// (0x0002116c) bg_button_pane_cp11

0xd07b,	// (0x00021184) main_mobtv_info_pane_g2_ParamLimits

0xd07b,	// (0x00021184) main_mobtv_info_pane_g2

0x0001,

0xfbf6,	// (0x00023cff) main_mobtv_info_pane_g_ParamLimits

0xfbf6,	// (0x00023cff) main_mobtv_info_pane_g

0xd207,	// (0x00021310) sc_clock_pane_t5_ParamLimits

0xd207,	// (0x00021310) sc_clock_pane_t5

0xd294,	// (0x0002139d) main_radioblah_pane_g1_ParamLimits

0x5d84,	// (0x00019e8d) main_radioblah_pane_t3_ParamLimits

0x5d84,	// (0x00019e8d) main_radioblah_pane_t3

0x5d9c,	// (0x00019ea5) main_radioblah_pane_t4_ParamLimits

0x5d9c,	// (0x00019ea5) main_radioblah_pane_t4

0xd2b2,	// (0x000213bb) main_radioblah_text_pane_ParamLimits

0xd2b2,	// (0x000213bb) main_radioblah_text_pane

0xd2bf,	// (0x000213c8) main_radioblah_info_pane_g1_ParamLimits

0xd34c,	// (0x00021455) main_radioblah_info_pane_t4_ParamLimits

0xd34c,	// (0x00021455) main_radioblah_info_pane_t4

0x10e1,	// (0x000151ea) main_sp_fs_calendar_pane

0xda06,	// (0x00021b0f) main_phacti_pane_g1

0xda0e,	// (0x00021b17) phacti_note_pane_ParamLimits

0xda0e,	// (0x00021b17) phacti_note_pane

0x61fc,	// (0x0001a305) phacti_term_pane_ParamLimits

0x61fc,	// (0x0001a305) phacti_term_pane

0x6211,	// (0x0001a31a) phacti_note_pane_t1_ParamLimits

0x6211,	// (0x0001a31a) phacti_note_pane_t1

0x6228,	// (0x0001a331) phacti_term_pane_g1

0x6230,	// (0x0001a339) phacti_term_pane_t1_ParamLimits

0x6230,	// (0x0001a339) phacti_term_pane_t1

0x625a,	// (0x0001a363) popup_sp_fs_calendar_preview_list_single_pane_g1

0x6262,	// (0x0001a36b) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfd25,	// (0x00023e2e) popup_sp_fs_calendar_preview_list_single_pane_g

0x626a,	// (0x0001a373) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x626a,	// (0x0001a373) popup_sp_fs_calendar_preview_list_single_pane_t1

0x6280,	// (0x0001a389) aid_popup_sp_fs_bg_corner_pane

0x1b4a,	// (0x00015c53) popup_sp_fs_calendar_preview_bg_pane_g1

0x108e,	// (0x00015197) popup_sp_fs_calendar_preview_bg_pane

0x6288,	// (0x0001a391) popup_sp_fs_calendar_preview_list_pane

0x26dd,	// (0x000167e6) bg_main_sp_fs_cale_pane_ParamLimits

0x26dd,	// (0x000167e6) bg_main_sp_fs_cale_pane

0x6299,	// (0x0001a3a2) listscroll_cale_mrui_pane_ParamLimits

0x6299,	// (0x0001a3a2) listscroll_cale_mrui_pane

0x62ae,	// (0x0001a3b7) listscroll_sp_fs_schedule_track_pane

0x62b7,	// (0x0001a3c0) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x62b7,	// (0x0001a3c0) main_sp_fs_ctrlbar_pane_cp01

0x62ca,	// (0x0001a3d3) main_sp_fs_ribbon_pane

0x62d2,	// (0x0001a3db) popup_sp_fs_cale_preview_window

0x6437,	// (0x0001a540) list_single_sp_fs_schedule_track_pane_ParamLimits

0x6437,	// (0x0001a540) list_single_sp_fs_schedule_track_pane

0x26cf,	// (0x000167d8) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x26cf,	// (0x000167d8) bg_sp_fs_highlight_list_pane_cp03

0xda65,	// (0x00021b6e) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xda65,	// (0x00021b6e) list_single_sp_fs_schedule_track_pane_g1

0xda71,	// (0x00021b7a) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xda71,	// (0x00021b7a) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfd2a,	// (0x00023e33) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfd2a,	// (0x00023e33) list_single_sp_fs_schedule_track_pane_g

0xda7d,	// (0x00021b86) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xda7d,	// (0x00021b86) list_single_sp_fs_schedule_track_pane_t1

0xda95,	// (0x00021b9e) sp_fs_schedule_track_pane_ParamLimits

0xda95,	// (0x00021b9e) sp_fs_schedule_track_pane

0x62e4,	// (0x0001a3ed) sp_fs_schedule_track_pane_g1

0x62ec,	// (0x0001a3f5) sp_fs_schedule_track_pane_g2

0x62f4,	// (0x0001a3fd) sp_fs_schedule_track_pane_g3

0x62fc,	// (0x0001a405) sp_fs_schedule_track_pane_g4

0x6304,	// (0x0001a40d) sp_fs_schedule_track_pane_g5

0x0004,

0xfd2f,	// (0x00023e38) sp_fs_schedule_track_pane_g

0x4cd8,	// (0x00018de1) bg_sp_fs_schedule_viewer_highlight_g1

0x1da6,	// (0x00015eaf) bg_sp_fs_schedule_viewer_highlight_g2

0x4ce0,	// (0x00018de9) bg_sp_fs_schedule_viewer_highlight_g3

0x4ce8,	// (0x00018df1) bg_sp_fs_schedule_viewer_highlight_g4

0x4f63,	// (0x0001906c) bg_sp_fs_schedule_viewer_highlight_g5

0x4cf8,	// (0x00018e01) bg_sp_fs_schedule_viewer_highlight_g6

0x4d00,	// (0x00018e09) bg_sp_fs_schedule_viewer_highlight_g7

0x4d08,	// (0x00018e11) bg_sp_fs_schedule_viewer_highlight_g8

0x1d86,	// (0x00015e8f) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfd3a,	// (0x00023e43) bg_sp_fs_schedule_viewer_highlight_g

0x108e,	// (0x00015197) bg_main_sp_fs_ribbon_pane

0xbc68,	// (0x0001fd71) main_sp_fs_ribbon_pane_g1

0x630c,	// (0x0001a415) main_sp_fs_ribbon_pane_t1

0xdaa5,	// (0x00021bae) main_sp_fs_ribbon_pane_t2

0x631b,	// (0x0001a424) main_sp_fs_ribbon_pane_t3

0x0002,

0xfd4d,	// (0x00023e56) main_sp_fs_ribbon_pane_t

0x632a,	// (0x0001a433) main_sp_fs_ribbon_scheduler_pane

0x6332,	// (0x0001a43b) bg_main_sp_fs_ribbon_pane_g1

0x633b,	// (0x0001a444) bg_main_sp_fs_ribbon_pane_g2

0x6344,	// (0x0001a44d) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfd54,	// (0x00023e5d) bg_main_sp_fs_ribbon_pane_g

0x634c,	// (0x0001a455) main_sp_fs_ribbon_scheduler_pane_g1

0x6355,	// (0x0001a45e) main_sp_fs_ribbon_scheduler_pane_g2

0x635e,	// (0x0001a467) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfd5b,	// (0x00023e64) main_sp_fs_ribbon_scheduler_pane_g

0x6367,	// (0x0001a470) list_cale_mrui_pane

0xdab4,	// (0x00021bbd) sp_fs_scroll_pane_cp07_ParamLimits

0xdab4,	// (0x00021bbd) sp_fs_scroll_pane_cp07

0xdacc,	// (0x00021bd5) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xdacc,	// (0x00021bd5) bg_sp_fs_schedule_viewer_highlight

0x6374,	// (0x0001a47d) list_single_sp_fs_schedule_track_pane_cp01

0x637c,	// (0x0001a485) list_sp_fs_schedule_track_pane

0x6384,	// (0x0001a48d) sp_fs_scroll_pane_cp06_ParamLimits

0x6384,	// (0x0001a48d) sp_fs_scroll_pane_cp06

0x1b4a,	// (0x00015c53) bgmain_sp_fs_calendar_pane_g1

0xdad9,	// (0x00021be2) list_single_cale_mrui_pane_ParamLimits

0xdad9,	// (0x00021be2) list_single_cale_mrui_pane

0x6396,	// (0x0001a49f) list_single_cale_mrui_row_pane_ParamLimits

0x6396,	// (0x0001a49f) list_single_cale_mrui_row_pane

0xdafb,	// (0x00021c04) list_single_cale_mrui_row_pane_g1_ParamLimits

0xdafb,	// (0x00021c04) list_single_cale_mrui_row_pane_g1

0xdb33,	// (0x00021c3c) list_single_cale_mrui_row_pane_t1_ParamLimits

0xdb33,	// (0x00021c3c) list_single_cale_mrui_row_pane_t1

0xdb45,	// (0x00021c4e) list_single_cale_mrui_row_pane_t2_ParamLimits

0xdb45,	// (0x00021c4e) list_single_cale_mrui_row_pane_t2

0xdbab,	// (0x00021cb4) list_single_cale_mrui_row_pane_t3_ParamLimits

0xdbab,	// (0x00021cb4) list_single_cale_mrui_row_pane_t3

0xdbda,	// (0x00021ce3) list_single_cale_mrui_row_pane_t4_ParamLimits

0xdbda,	// (0x00021ce3) list_single_cale_mrui_row_pane_t4

0x0003,

0xfd69,	// (0x00023e72) list_single_cale_mrui_row_pane_t_ParamLimits

0xfd69,	// (0x00023e72) list_single_cale_mrui_row_pane_t

0xdc09,	// (0x00021d12) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0xdc09,	// (0x00021d12) list_single_cmail_header_editor_pane_bg_cp01

0xdc2d,	// (0x00021d36) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0xdc2d,	// (0x00021d36) list_single_cmail_header_editor_pane_bg_cp02

0xdc4b,	// (0x00021d54) main_radioblah_text_pane_t1_ParamLimits

0xdc4b,	// (0x00021d54) main_radioblah_text_pane_t1

0x63b9,	// (0x0001a4c2) cam6_indi_pane_cp01

0x63c1,	// (0x0001a4ca) cam6_mode_pane_cp01

0x63c9,	// (0x0001a4d2) cam6_pano_pane

0x63d2,	// (0x0001a4db) cam6_zoom_pane_cp01

0x63da,	// (0x0001a4e3) cam6_pano_image_pane

0x63e3,	// (0x0001a4ec) cam6_pano_pane_g1

0x5aeb,	// (0x00019bf4) cam6_pano_pane_g2

0x63ec,	// (0x0001a4f5) cam6_pano_pane_g3

0x63f5,	// (0x0001a4fe) cam6_pano_pane_g4

0x4557,	// (0x00018660) cam6_pano_pane_g5

0x63fe,	// (0x0001a507) cam6_pano_pane_g6

0x6406,	// (0x0001a50f) cam6_pano_pane_g7

0x640e,	// (0x0001a517) cam6_pano_pane_g8

0x6417,	// (0x0001a520) cam6_pano_pane_g9

0x0008,

0xfd72,	// (0x00023e7b) cam6_pano_pane_g

0x108e,	// (0x00015197) main_browser_tag_pane

0x61dd,	// (0x0001a2e6) grid_navstr_albumart_pane

0x6420,	// (0x0001a529) cell_navstr_albumart_pane_ParamLimits

0x6420,	// (0x0001a529) cell_navstr_albumart_pane

0x2780,	// (0x00016889) cell_navstr_albumart_pane_g1

0x3921,	// (0x00017a2a) cell_navstr_albumart_pane_g2

0x3931,	// (0x00017a3a) cell_navstr_albumart_pane_g3

0x3929,	// (0x00017a32) cell_navstr_albumart_pane_g4

0x0003,

0xfd85,	// (0x00023e8e) cell_navstr_albumart_pane_g

0xdc64,	// (0x00021d6d) bt_list_pane_ParamLimits

0xdc64,	// (0x00021d6d) bt_list_pane

0xdc79,	// (0x00021d82) bt_list_pane_t1

0xdc88,	// (0x00021d91) bt_list_pane_t2

0x0001,

0xfd8e,	// (0x00023e97) bt_list_pane_t

0x108e,	// (0x00015197) main_cale_prevew_pane

0xdc97,	// (0x00021da0) popup_cale_preview_window_ParamLimits

0xdc97,	// (0x00021da0) popup_cale_preview_window

0x10e1,	// (0x000151ea) bg_popup_preview_window_pane_cp05_ParamLimits

0x10e1,	// (0x000151ea) bg_popup_preview_window_pane_cp05

0x644d,	// (0x0001a556) list_cale_preview_pane_ParamLimits

0x644d,	// (0x0001a556) list_cale_preview_pane

0xdcac,	// (0x00021db5) list_double_cale_preview_pane_ParamLimits

0xdcac,	// (0x00021db5) list_double_cale_preview_pane

0xdcbd,	// (0x00021dc6) list_single_cale_preview_pane_ParamLimits

0xdcbd,	// (0x00021dc6) list_single_cale_preview_pane

0xdcd1,	// (0x00021dda) list_single_cale_preview_pane_g1

0xdcd9,	// (0x00021de2) list_single_cale_preview_pane_t1_ParamLimits

0xdcd9,	// (0x00021de2) list_single_cale_preview_pane_t1

0x6459,	// (0x0001a562) list_double_cale_preview_pane_g1

0x6461,	// (0x0001a56a) list_double_cale_preview_pane_t1_ParamLimits

0x6461,	// (0x0001a56a) list_double_cale_preview_pane_t1

0xdcee,	// (0x00021df7) list_double_cale_preview_pane_t2_ParamLimits

0xdcee,	// (0x00021df7) list_double_cale_preview_pane_t2

0x0001,

0xfd93,	// (0x00023e9c) list_double_cale_preview_pane_t_ParamLimits

0xfd93,	// (0x00023e9c) list_double_cale_preview_pane_t

0x108e,	// (0x00015197) main_ezdial_pane

0x10e1,	// (0x000151ea) main_sp_fs_email_pane_ParamLimits

0xd562,	// (0x0002166b) cmail_ddmenu_btn01_pane_ParamLimits

0xd562,	// (0x0002166b) cmail_ddmenu_btn01_pane

0xd57f,	// (0x00021688) cmail_ddmenu_btn02_pane_ParamLimits

0xd57f,	// (0x00021688) cmail_ddmenu_btn02_pane

0xd59d,	// (0x000216a6) cmail_ddmenu_btn03_pane_ParamLimits

0xd59d,	// (0x000216a6) cmail_ddmenu_btn03_pane

0xd641,	// (0x0002174a) main_sp_fs_ctrlbar_pane_ParamLimits

0xd655,	// (0x0002175e) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xd8f6,	// (0x000219ff) list_cmail_body_pane_ParamLimits

0x2788,	// (0x00016891) bg_button_pane_cp12

0x6122,	// (0x0001a22b) list_single_cmail_header_detail_pane_g3_ParamLimits

0x6122,	// (0x0001a22b) list_single_cmail_header_detail_pane_g3

0x612f,	// (0x0001a238) list_single_cmail_header_detail_pane_t2_ParamLimits

0x612f,	// (0x0001a238) list_single_cmail_header_detail_pane_t2

0x0001,

0xfd16,	// (0x00023e1f) list_single_cmail_header_detail_pane_t_ParamLimits

0xfd16,	// (0x00023e1f) list_single_cmail_header_detail_pane_t

0x6245,	// (0x0001a34e) phacti_term_pane_t2_ParamLimits

0x6245,	// (0x0001a34e) phacti_term_pane_t2

0x0001,

0xfd20,	// (0x00023e29) phacti_term_pane_t_ParamLimits

0xfd20,	// (0x00023e29) phacti_term_pane_t

0x6476,	// (0x0001a57f) aid_size_list_single_double

0xdd06,	// (0x00021e0f) popup_ezdial_listscroll_window

0xdd1f,	// (0x00021e28) popup_number_entry_window_cp01

0x1ad2,	// (0x00015bdb) bg_popup_call_pane_cp09

0x6482,	// (0x0001a58b) ezdial_list_pane

0x648a,	// (0x0001a593) scroll_pane_cp23

0x3c7d,	// (0x00017d86) bg_button_pane_cp028_ParamLimits

0x3c7d,	// (0x00017d86) bg_button_pane_cp028

0xdd2b,	// (0x00021e34) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xdd2b,	// (0x00021e34) cmail_ddmenu_btn01_pane_g1

0xdd3b,	// (0x00021e44) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xdd3b,	// (0x00021e44) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfd98,	// (0x00023ea1) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfd98,	// (0x00023ea1) cmail_ddmenu_btn01_pane_g

0x6492,	// (0x0001a59b) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x6492,	// (0x0001a59b) cmail_ddmenu_btn01_pane_t1

0x26dd,	// (0x000167e6) bg_button_pane_cp029_ParamLimits

0x26dd,	// (0x000167e6) bg_button_pane_cp029

0xdd3b,	// (0x00021e44) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xdd3b,	// (0x00021e44) cmail_ddmenu_btn02_pane_g1

0xdd53,	// (0x00021e5c) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xdd53,	// (0x00021e5c) cmail_ddmenu_btn02_pane_t1

0x26cf,	// (0x000167d8) bg_button_pane_cp031_ParamLimits

0x26cf,	// (0x000167d8) bg_button_pane_cp031

0xdd3b,	// (0x00021e44) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xdd3b,	// (0x00021e44) cmail_ddmenu_btn03_pane_g1

0xdd53,	// (0x00021e5c) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xdd53,	// (0x00021e5c) cmail_ddmenu_btn03_pane_t1

0x1b1c,	// (0x00015c25) cell_dialer2_keypad_pane_t1_ParamLimits

0x4585,	// (0x0001868e) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x4585,	// (0x0001868e) cell_dialer2_keypad_pane_t1_copy1

0xcef0,	// (0x00020ff9) ncimui_group_button_pane

0x10e1,	// (0x000151ea) main_sp_fs_calendar_pane_ParamLimits

0xd8f6,	// (0x000219ff) list_single_cmail_header_caption_pane_ParamLimits

0x6290,	// (0x0001a399) aid_recal_txt_sm_pane

0x108e,	// (0x00015197) mian_recal_day_pane

0x62d2,	// (0x0001a3db) popup_sp_fs_cale_preview_window_ParamLimits

0x64a7,	// (0x0001a5b0) list_recal_day_pane

0x64e9,	// (0x0001a5f2) list_single_recal_day_pane_ParamLimits

0x64e9,	// (0x0001a5f2) list_single_recal_day_pane

0x64fb,	// (0x0001a604) list_single_recal_day_pane_g1_ParamLimits

0x64fb,	// (0x0001a604) list_single_recal_day_pane_g1

0x6507,	// (0x0001a610) list_single_recal_day_pane_g2_ParamLimits

0x6507,	// (0x0001a610) list_single_recal_day_pane_g2

0x6513,	// (0x0001a61c) list_single_recal_day_pane_g3_ParamLimits

0x6513,	// (0x0001a61c) list_single_recal_day_pane_g3

0xdd77,	// (0x00021e80) list_single_recal_day_pane_g4_ParamLimits

0xdd77,	// (0x00021e80) list_single_recal_day_pane_g4

0x651f,	// (0x0001a628) list_single_recal_day_pane_g5_ParamLimits

0x651f,	// (0x0001a628) list_single_recal_day_pane_g5

0xdd8b,	// (0x00021e94) list_single_recal_day_pane_g6_ParamLimits

0xdd8b,	// (0x00021e94) list_single_recal_day_pane_g6

0x0004,

0xfda7,	// (0x00023eb0) list_single_recal_day_pane_g_ParamLimits

0xfda7,	// (0x00023eb0) list_single_recal_day_pane_g

0x6533,	// (0x0001a63c) list_single_recal_day_pane_t1

0xdd9a,	// (0x00021ea3) list_single_recal_day_pane_t2

0x0001,

0xfdb2,	// (0x00023ebb) list_single_recal_day_pane_t

0xddaf,	// (0x00021eb8) ncimui_query_button_pane_ParamLimits

0xddaf,	// (0x00021eb8) ncimui_query_button_pane

0xddbf,	// (0x00021ec8) ncimui_query_button_pane_t1_ParamLimits

0xddbf,	// (0x00021ec8) ncimui_query_button_pane_t1

0x6545,	// (0x0001a64e) ncimui_query_button_pane_t2_ParamLimits

0x6545,	// (0x0001a64e) ncimui_query_button_pane_t2

0x0001,

0xfdb7,	// (0x00023ec0) ncimui_query_button_pane_t_ParamLimits

0xfdb7,	// (0x00023ec0) ncimui_query_button_pane_t

0xddd2,	// (0x00021edb) query_button_pane_ParamLimits

0xddd2,	// (0x00021edb) query_button_pane

0x108e,	// (0x00015197) bg_button_pane_cp0028

0x6558,	// (0x0001a661) query_button_pane_t1

0x7b5c,	// (0x0001bc65) main_tport_pane_ParamLimits

0xd842,	// (0x0002194b) bg_popup_window_pane_cp01_ParamLimits

0xd842,	// (0x0002194b) bg_popup_window_pane_cp01

0xd84e,	// (0x00021957) heading_pane_cp08_ParamLimits

0xd84e,	// (0x00021957) heading_pane_cp08

0xd85a,	// (0x00021963) heading_pane_cp07_ParamLimits

0xd85a,	// (0x00021963) heading_pane_cp07

0x60c6,	// (0x0001a1cf) cell_tport_appsw_pane_g2

0x0002,

0xfd03,	// (0x00023e0c) cell_tport_appsw_pane_g

0x2778,	// (0x00016881) input_candi_list_open_g1

0x1f81,	// (0x0001608a) list_cale_time_pane_g6_ParamLimits

0x1f81,	// (0x0001608a) list_cale_time_pane_g6

0xb186,	// (0x0001f28f) aid_size_touch_calib_1_ParamLimits

0xb186,	// (0x0001f28f) aid_size_touch_calib_1

0xb192,	// (0x0001f29b) aid_size_touch_calib_2_ParamLimits

0xb192,	// (0x0001f29b) aid_size_touch_calib_2

0xb19e,	// (0x0001f2a7) aid_size_touch_calib_3_ParamLimits

0xb19e,	// (0x0001f2a7) aid_size_touch_calib_3

0xb1ac,	// (0x0001f2b5) aid_size_touch_calib_4_ParamLimits

0xb1ac,	// (0x0001f2b5) aid_size_touch_calib_4

0xb1ba,	// (0x0001f2c3) main_touch_calib_button_group_pane_ParamLimits

0xb1ba,	// (0x0001f2c3) main_touch_calib_button_group_pane

0xb1c8,	// (0x0001f2d1) main_touch_calib_pane_g1_ParamLimits

0xb1d4,	// (0x0001f2dd) main_touch_calib_pane_g2_ParamLimits

0xb1e0,	// (0x0001f2e9) main_touch_calib_pane_g3_ParamLimits

0xb1ec,	// (0x0001f2f5) main_touch_calib_pane_g4_ParamLimits

0xf703,	// (0x0002380c) main_touch_calib_pane_g_ParamLimits

0xb1f8,	// (0x0001f301) main_touch_calib_pane_t1_ParamLimits

0xb20d,	// (0x0001f316) main_touch_calib_pane_t2_ParamLimits

0xb222,	// (0x0001f32b) main_touch_calib_pane_t3_ParamLimits

0xb234,	// (0x0001f33d) main_touch_calib_pane_t4_ParamLimits

0xb246,	// (0x0001f34f) main_touch_calib_pane_t5_ParamLimits

0xf70c,	// (0x00023815) main_touch_calib_pane_t_ParamLimits

0x435a,	// (0x00018463) list_single_fp_cale_pane_g3_ParamLimits

0x435a,	// (0x00018463) list_single_fp_cale_pane_g3

0x7b40,	// (0x0001bc49) bg_button_pane_cp012_ParamLimits

0x7b40,	// (0x0001bc49) bg_vkb2_func_pane_cp03_ParamLimits

0x884e,	// (0x0001c957) cell_vitu2_function_top_pane_g1_ParamLimits

0x7b40,	// (0x0001bc49) bg_vkb2_func_pane_cp04_ParamLimits

0xce7c,	// (0x00020f85) main_ncimui_button_group_pane_ParamLimits

0xce7c,	// (0x00020f85) main_ncimui_button_group_pane

0xcede,	// (0x00020fe7) main_ncimui_pane_t3_ParamLimits

0xcede,	// (0x00020fe7) main_ncimui_pane_t3

0x61f3,	// (0x0001a2fc) phacti_button_group_pane

0x6476,	// (0x0001a57f) aid_size_list_single_double_ParamLimits

0xdd06,	// (0x00021e0f) popup_ezdial_listscroll_window_ParamLimits

0xdd1f,	// (0x00021e28) popup_number_entry_window_cp01_ParamLimits

0xdddf,	// (0x00021ee8) phacti_button_pane_ParamLimits

0xdddf,	// (0x00021ee8) phacti_button_pane

0x108e,	// (0x00015197) bg_button_pane_cp14

0x6566,	// (0x0001a66f) phacti_button_pane_t1

0xddee,	// (0x00021ef7) main_touch_calib_button_pane_ParamLimits

0xddee,	// (0x00021ef7) main_touch_calib_button_pane

0x186d,	// (0x00015976) bg_button_pane_cp18_ParamLimits

0x186d,	// (0x00015976) bg_button_pane_cp18

0xddff,	// (0x00021f08) main_touch_calib_button_pane_t1_ParamLimits

0xddff,	// (0x00021f08) main_touch_calib_button_pane_t1

0xde15,	// (0x00021f1e) main_touch_calib_button_pane_t2_ParamLimits

0xde15,	// (0x00021f1e) main_touch_calib_button_pane_t2

0x0001,

0xfdbc,	// (0x00023ec5) main_touch_calib_button_pane_t_ParamLimits

0xfdbc,	// (0x00023ec5) main_touch_calib_button_pane_t

0x108e,	// (0x00015197) cell_ncimui_button_pane

0x108e,	// (0x00015197) bg_button_pane_cp032

0xde33,	// (0x00021f3c) cell_ncimui_button_pane_t1

0x814b,	// (0x0001c254) image3_infobar_pane_ParamLimits

0x814b,	// (0x0001c254) image3_infobar_pane

0xd227,	// (0x00021330) fs_bigclock_status_pane_ParamLimits

0xd227,	// (0x00021330) fs_bigclock_status_pane

0xd234,	// (0x0002133d) main_fs_bigclock_clock_pane_ParamLimits

0xd234,	// (0x0002133d) main_fs_bigclock_clock_pane

0xd24c,	// (0x00021355) main_fs_bigclock_indi_pane_ParamLimits

0xd24c,	// (0x00021355) main_fs_bigclock_indi_pane

0xd26c,	// (0x00021375) main_fs_bigclock_swipe_pane_ParamLimits

0xd26c,	// (0x00021375) main_fs_bigclock_swipe_pane

0x108e,	// (0x00015197) main_fs_clock_dumped_data

0x5bf8,	// (0x00019d01) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x5bf8,	// (0x00019d01) list_single_fs_bigclock_indicator_pane_g1

0x5c12,	// (0x00019d1b) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x5c12,	// (0x00019d1b) list_single_fs_bigclock_indicator_pane_g2

0x5c2c,	// (0x00019d35) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x5c2c,	// (0x00019d35) list_single_fs_bigclock_indicator_pane_g3

0x5c46,	// (0x00019d4f) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x5c46,	// (0x00019d4f) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc2a,	// (0x00023d33) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc2a,	// (0x00023d33) list_single_fs_bigclock_indicator_pane_g

0x5c6f,	// (0x00019d78) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x5c6f,	// (0x00019d78) list_single_fs_bigclock_indicator_pane_t1

0x5c97,	// (0x00019da0) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x5c97,	// (0x00019da0) list_single_fs_bigclock_indicator_pane_t2

0x5cbf,	// (0x00019dc8) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x5cbf,	// (0x00019dc8) list_single_fs_bigclock_indicator_pane_t3

0x5ce7,	// (0x00019df0) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x5ce7,	// (0x00019df0) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc35,	// (0x00023d3e) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc35,	// (0x00023d3e) list_single_fs_bigclock_indicator_pane_t

0xde41,	// (0x00021f4a) image3_infobar_fav_pane_ParamLimits

0xde41,	// (0x00021f4a) image3_infobar_fav_pane

0xde51,	// (0x00021f5a) image3_infobar_loc_pane_ParamLimits

0xde51,	// (0x00021f5a) image3_infobar_loc_pane

0xde65,	// (0x00021f6e) image3_infobar_time_pane_ParamLimits

0xde65,	// (0x00021f6e) image3_infobar_time_pane

0x1b4a,	// (0x00015c53) image3_infobar_time_pane_g1

0xde75,	// (0x00021f7e) image3_infobar_time_pane_t1

0x1b4a,	// (0x00015c53) image3_infobar_loc_pane_g1

0xde83,	// (0x00021f8c) image3_infobar_loc_pane_g2

0x0001,

0xfdc1,	// (0x00023eca) image3_infobar_loc_pane_g

0xde8b,	// (0x00021f94) image3_infobar_loc_pane_t1

0x1b4a,	// (0x00015c53) image3_infobar_fav_pane_g1

0xde99,	// (0x00021fa2) image3_infobar_fav_pane_g2

0x0001,

0xfdc6,	// (0x00023ecf) image3_infobar_fav_pane_g

0xdea1,	// (0x00021faa) fs_bigclock_status_battery_pane

0xdeaa,	// (0x00021fb3) fs_bigclock_status_signal_pane

0xdeb3,	// (0x00021fbc) fs_bigclock_status_title_pane

0xdebc,	// (0x00021fc5) fs_bigclock_status_signal_pane_g1

0xdec5,	// (0x00021fce) fs_bigclock_status_signal_pane_g2

0x0001,

0xfdcb,	// (0x00023ed4) fs_bigclock_status_signal_pane_g

0xdecd,	// (0x00021fd6) fs_bigclock_status_battery_pane_g1

0xded6,	// (0x00021fdf) fs_bigclock_status_battery_pane_g2

0x0001,

0xfdd0,	// (0x00023ed9) fs_bigclock_status_battery_pane_g

0xdede,	// (0x00021fe7) fs_bigclock_status_title_pane_t1

0x17e3,	// (0x000158ec) main_fs_bigclock_clock_pane_g1

0xdeec,	// (0x00021ff5) main_fs_bigclock_clock_pane_g2

0xdef9,	// (0x00022002) main_fs_bigclock_clock_pane_g3

0xdef9,	// (0x00022002) main_fs_bigclock_clock_pane_g4

0x0003,

0xfdd5,	// (0x00023ede) main_fs_bigclock_clock_pane_g

0xdf05,	// (0x0002200e) main_fs_bigclock_clock_pane_t1

0xdf17,	// (0x00022020) main_fs_bigclock_clock_pane_t2

0x0001,

0xfdde,	// (0x00023ee7) main_fs_bigclock_clock_pane_t

0xdf2a,	// (0x00022033) list_single_fs_bigclock_indicator_pane_ParamLimits

0xdf2a,	// (0x00022033) list_single_fs_bigclock_indicator_pane

0xdf3b,	// (0x00022044) list_single_fs_bigclock_pane_ParamLimits

0xdf3b,	// (0x00022044) list_single_fs_bigclock_pane

0xdfa3,	// (0x000220ac) main_fs_bigclock_indicator_pane_t1

0xdfb2,	// (0x000220bb) list_single_fs_bigclock_pane_g1

0xdfba,	// (0x000220c3) list_single_fs_bigclock_pane_t1

0x1b4a,	// (0x00015c53) main_fs_bigclock_swipe_pane_g1

0xdffa,	// (0x00022103) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfdef,	// (0x00023ef8) main_fs_bigclock_swipe_pane_g

0xe002,	// (0x0002210b) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xe002,	// (0x0002210b) main_fs_bigclock_swipe_pane_t1

0xa2c8,	// (0x0001e3d1) call_type_pane_ParamLimits

0x108e,	// (0x00015197) main_btmg_pane

0xdb27,	// (0x00021c30) list_single_cale_mrui_row_pane_g2_ParamLimits

0xdb27,	// (0x00021c30) list_single_cale_mrui_row_pane_g2

0x0002,

0xfd62,	// (0x00023e6b) list_single_cale_mrui_row_pane_g_ParamLimits

0xfd62,	// (0x00023e6b) list_single_cale_mrui_row_pane_g

0x64d0,	// (0x0001a5d9) list_recal_vselct_arw_lo_pane

0x64d8,	// (0x0001a5e1) list_recal_vselct_arw_up_pane

0x64e0,	// (0x0001a5e9) list_recal_vselct_pane

0xe01f,	// (0x00022128) btmg_button_pane

0xe027,	// (0x00022130) main_btmg_pane_g1

0x108e,	// (0x00015197) bg_button_pane_cp044

0xe02f,	// (0x00022138) btmg_button_pane_t1

0x3b54,	// (0x00017c5d) aid_listscroll_gen

0x10e1,	// (0x000151ea) main_cntbar_detail_pane

0x60ec,	// (0x0001a1f5) list_cmail_folder_pane

0x60fc,	// (0x0001a205) sp_fs_scroll_pane_cp03_ParamLimits

0xe03d,	// (0x00022146) list_single_fs_dyc_pane_cp01_ParamLimits

0xe03d,	// (0x00022146) list_single_fs_dyc_pane_cp01

0xe055,	// (0x0002215e) aid_size_cmail_indent

0xe05e,	// (0x00022167) list_single_dyc_row_pane_cp01

0xe081,	// (0x0002218a) cntbar_detail_list_pane_ParamLimits

0xe081,	// (0x0002218a) cntbar_detail_list_pane

0xe0b7,	// (0x000221c0) main_cntbar_detail_cont_pane_ParamLimits

0xe0b7,	// (0x000221c0) main_cntbar_detail_cont_pane

0xe0c3,	// (0x000221cc) scroll_pane_cp032_ParamLimits

0xe0c3,	// (0x000221cc) scroll_pane_cp032

0xe0cf,	// (0x000221d8) cntbar_detail_list_event_pane_ParamLimits

0xe0cf,	// (0x000221d8) cntbar_detail_list_event_pane

0xe08d,	// (0x00022196) cntbar_detail_list_shct_pane

0xe0df,	// (0x000221e8) aid_list_gen

0x19c0,	// (0x00015ac9) aid_scroll

0x529e,	// (0x000193a7) aid_size_touch_scroll_bar

0xc7fd,	// (0x00020906) aid_list_double

0xe0e8,	// (0x000221f1) aid_list_single

0x5352,	// (0x0001945b) aid_list_single_lg

0xe0f1,	// (0x000221fa) aid_list_z_g_a_sm

0xe0f9,	// (0x00022202) aid_list_z_g_d

0xe101,	// (0x0002220a) aid_txt_z_prm

0xe10f,	// (0x00022218) aid_txt_z_prm_cp01

0xe11d,	// (0x00022226) aid_txt_z_sec

0xe12b,	// (0x00022234) main_cntbar_detail_cont_pane_g1_ParamLimits

0xe12b,	// (0x00022234) main_cntbar_detail_cont_pane_g1

0xe138,	// (0x00022241) main_cntbar_detail_cont_pane_g2_ParamLimits

0xe138,	// (0x00022241) main_cntbar_detail_cont_pane_g2

0x0001,

0xfdf4,	// (0x00023efd) main_cntbar_detail_cont_pane_g_ParamLimits

0xfdf4,	// (0x00023efd) main_cntbar_detail_cont_pane_g

0xe144,	// (0x0002224d) main_cntbar_detail_cont_pane_t1

0xe152,	// (0x0002225b) main_cntbar_detail_cont_pane_t2

0xe160,	// (0x00022269) main_cntbar_detail_cont_pane_t3

0x0002,

0xfdf9,	// (0x00023f02) main_cntbar_detail_cont_pane_t

0xe16e,	// (0x00022277) cell_cntbar_detail_list_shct_pane_ParamLimits

0xe16e,	// (0x00022277) cell_cntbar_detail_list_shct_pane

0xe180,	// (0x00022289) cntbar_detail_list_shct_pane_g1

0xe189,	// (0x00022292) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe00,	// (0x00023f09) cntbar_detail_list_shct_pane_g

0xe192,	// (0x0002229b) cntbar_detail_list_event_pane_g1_ParamLimits

0xe192,	// (0x0002229b) cntbar_detail_list_event_pane_g1

0xe19e,	// (0x000222a7) cntbar_detail_list_event_pane_g2_ParamLimits

0xe19e,	// (0x000222a7) cntbar_detail_list_event_pane_g2

0x0005,

0xfe05,	// (0x00023f0e) cntbar_detail_list_event_pane_g_ParamLimits

0xfe05,	// (0x00023f0e) cntbar_detail_list_event_pane_g

0xe20a,	// (0x00022313) cntbar_detail_list_event_pane_t1_ParamLimits

0xe20a,	// (0x00022313) cntbar_detail_list_event_pane_t1

0xe21f,	// (0x00022328) cntbar_detail_list_event_pane_t2_ParamLimits

0xe21f,	// (0x00022328) cntbar_detail_list_event_pane_t2

0x0002,

0xfe12,	// (0x00023f1b) cntbar_detail_list_event_pane_t_ParamLimits

0xfe12,	// (0x00023f1b) cntbar_detail_list_event_pane_t

0x1b4a,	// (0x00015c53) cell_cntbar_detail_list_shct_pane_g1

0x2590,	// (0x00016699) navi_pane_mv_g3

0x10e1,	// (0x000151ea) main_cntbar_detail_pane_ParamLimits

0x108e,	// (0x00015197) main_notif_wgt_pane

0x7eb4,	// (0x0001bfbd) aid_tch_main_mp4_pane_g4

0x80f3,	// (0x0001c1fc) popup_slider_window_cp02

0x64c6,	// (0x0001a5cf) list_recal_day_event_pane

0xe067,	// (0x00022170) cntbar_detail_btn_pane_ParamLimits

0xe067,	// (0x00022170) cntbar_detail_btn_pane

0xe073,	// (0x0002217c) cntbar_detail_btn_pane_cp01_ParamLimits

0xe073,	// (0x0002217c) cntbar_detail_btn_pane_cp01

0xe08d,	// (0x00022196) cntbar_detail_list_shct_pane_ParamLimits

0xe099,	// (0x000221a2) cntbar_detail_pane_g1_ParamLimits

0xe099,	// (0x000221a2) cntbar_detail_pane_g1

0xe0a5,	// (0x000221ae) cntbar_detail_pane_t1_ParamLimits

0xe0a5,	// (0x000221ae) cntbar_detail_pane_t1

0xe1aa,	// (0x000222b3) cntbar_detail_list_event_pane_g3_ParamLimits

0xe1aa,	// (0x000222b3) cntbar_detail_list_event_pane_g3

0xe1c2,	// (0x000222cb) cntbar_detail_list_event_pane_g4_ParamLimits

0xe1c2,	// (0x000222cb) cntbar_detail_list_event_pane_g4

0xe1da,	// (0x000222e3) cntbar_detail_list_event_pane_g5_ParamLimits

0xe1da,	// (0x000222e3) cntbar_detail_list_event_pane_g5

0xe1f2,	// (0x000222fb) cntbar_detail_list_event_pane_g6_ParamLimits

0xe1f2,	// (0x000222fb) cntbar_detail_list_event_pane_g6

0xe234,	// (0x0002233d) cntbar_detail_list_event_pane_t3_ParamLimits

0xe234,	// (0x0002233d) cntbar_detail_list_event_pane_t3

0xe246,	// (0x0002234f) popup_notif_wgt_window_ParamLimits

0xe246,	// (0x0002234f) popup_notif_wgt_window

0xe254,	// (0x0002235d) popup_submenu_window_cp01_ParamLimits

0xe254,	// (0x0002235d) popup_submenu_window_cp01

0x1ad2,	// (0x00015bdb) bg_popup_window_pane_cp10

0xe260,	// (0x00022369) listscroll_notif_wgt_pane

0xe271,	// (0x0002237a) list_notif_wgt_window

0xe27a,	// (0x00022383) scroll_pane_cp033

0xe283,	// (0x0002238c) list_notif_wgt_row_pane_ParamLimits

0xe283,	// (0x0002238c) list_notif_wgt_row_pane

0xe295,	// (0x0002239e) aid_size_list_notif_wgt_del

0xe2a2,	// (0x000223ab) list_notif_wgt_row_pane_g1

0xe2ae,	// (0x000223b7) list_notif_wgt_row_pane_g2

0xe2c2,	// (0x000223cb) list_notif_wgt_row_pane_g3

0x0002,

0xfe19,	// (0x00023f22) list_notif_wgt_row_pane_g

0xe2cf,	// (0x000223d8) list_notif_wgt_row_pane_t1

0xe2e5,	// (0x000223ee) list_notif_wgt_row_pane_t2

0xe2f7,	// (0x00022400) list_notif_wgt_row_pane_t3

0x0002,

0xfe20,	// (0x00023f29) list_notif_wgt_row_pane_t

0x4f98,	// (0x000190a1) list_recal_day_event_pane_g1

0xe309,	// (0x00022412) list_recal_day_event_pane_t1

0x108e,	// (0x00015197) bg_button_pane_cp045

0xe318,	// (0x00022421) cntbar_detail_btn_pane_t1

0x26dd,	// (0x000167e6) main_callh_pane_ParamLimits

0x26dd,	// (0x000167e6) main_callh_pane

0x108e,	// (0x00015197) main_coverflow0_pane

0x108e,	// (0x00015197) main_wgtman_pane

0xd27e,	// (0x00021387) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xd27e,	// (0x00021387) main_fs_bigclock_unlock_btn_pane

0x60be,	// (0x0001a1c7) bg_button_pane_cp16

0x60ce,	// (0x0001a1d7) cell_tport_appsw_pane_g3

0xe326,	// (0x0002242f) cf0_flow_pane_ParamLimits

0xe326,	// (0x0002242f) cf0_flow_pane

0xe335,	// (0x0002243e) listscroll_cf0_pane

0xe33e,	// (0x00022447) main_cf0_pane_g1

0xe350,	// (0x00022459) main_cf0_pane_t1_ParamLimits

0xe350,	// (0x00022459) main_cf0_pane_t1

0xe362,	// (0x0002246b) main_cf0_pane_t2_ParamLimits

0xe362,	// (0x0002246b) main_cf0_pane_t2

0x0001,

0xfe2c,	// (0x00023f35) main_cf0_pane_t_ParamLimits

0xfe2c,	// (0x00023f35) main_cf0_pane_t

0xe374,	// (0x0002247d) scroll_pane_cp11

0xe37d,	// (0x00022486) cf0_flow_pane_g1

0xe385,	// (0x0002248e) cf0_flow_pane_g2

0x0001,

0xfe31,	// (0x00023f3a) cf0_flow_pane_g

0xe38d,	// (0x00022496) cf0_flow_pane_t1

0x108e,	// (0x00015197) main_call6_pane

0x108e,	// (0x00015197) main_calllock_pane

0x8a54,	// (0x0001cb5d) call6_btn_grp_pane_ParamLimits

0x8a54,	// (0x0001cb5d) call6_btn_grp_pane

0x8a61,	// (0x0001cb6a) call6_pane_g1_ParamLimits

0x8a61,	// (0x0001cb6a) call6_pane_g1

0x8a6e,	// (0x0001cb77) popup_call6_1st_window_ParamLimits

0x8a6e,	// (0x0001cb77) popup_call6_1st_window

0x8a7a,	// (0x0001cb83) popup_call6_2nd_window_ParamLimits

0x8a7a,	// (0x0001cb83) popup_call6_2nd_window

0x8a86,	// (0x0001cb8f) cell_call6_btn_pane_ParamLimits

0x8a86,	// (0x0001cb8f) cell_call6_btn_pane

0x1ad2,	// (0x00015bdb) bg_popup_call2_in_pane_cp03

0xe39b,	// (0x000224a4) popup_call6_1st_window_g1

0xe3a3,	// (0x000224ac) popup_call6_1st_window_g2

0xe3ab,	// (0x000224b4) popup_call6_1st_window_g3

0x0002,

0xfe36,	// (0x00023f3f) popup_call6_1st_window_g

0xe3b3,	// (0x000224bc) popup_call6_1st_window_t1

0xe3c2,	// (0x000224cb) popup_call6_1st_window_t2

0xe3d0,	// (0x000224d9) popup_call6_1st_window_t3

0x0002,

0xfe3d,	// (0x00023f46) popup_call6_1st_window_t

0x1ad2,	// (0x00015bdb) bg_popup_call2_in_pane_cp04

0xe3de,	// (0x000224e7) popup_call6_2nd_window_g1

0xe3e6,	// (0x000224ef) popup_call6_2nd_window_g2

0xe3ee,	// (0x000224f7) popup_call6_2nd_window_g3

0x0002,

0xfe44,	// (0x00023f4d) popup_call6_2nd_window_g

0xe3f6,	// (0x000224ff) popup_call6_2nd_window_t1

0x7635,	// (0x0001b73e) bg_button_pane_cp15

0x8a95,	// (0x0001cb9e) cell_call6_btn_pane_g1

0x8a9e,	// (0x0001cba7) cell_call6_btn_pane_t1

0xe405,	// (0x0002250e) listscroll_wgtman_pane_ParamLimits

0xe405,	// (0x0002250e) listscroll_wgtman_pane

0xe421,	// (0x0002252a) wgtman_btn_pane_ParamLimits

0xe421,	// (0x0002252a) wgtman_btn_pane

0x23e7,	// (0x000164f0) aid_scroll_copy1

0xe454,	// (0x0002255d) list_wgtman_pane

0xe45e,	// (0x00022567) wgtman_btn_pane_g1_ParamLimits

0xe45e,	// (0x00022567) wgtman_btn_pane_g1

0xe486,	// (0x0002258f) wgtman_btn_pane_t1_ParamLimits

0xe486,	// (0x0002258f) wgtman_btn_pane_t1

0xe4bd,	// (0x000225c6) wgtman_btn_pane_t2_ParamLimits

0xe4bd,	// (0x000225c6) wgtman_btn_pane_t2

0x0001,

0xfe4b,	// (0x00023f54) wgtman_btn_pane_t_ParamLimits

0xfe4b,	// (0x00023f54) wgtman_btn_pane_t

0xe4d4,	// (0x000225dd) listrow_wgtman_pane_ParamLimits

0xe4d4,	// (0x000225dd) listrow_wgtman_pane

0xe4e5,	// (0x000225ee) listrow_wgtman_pane_g1

0xe4f2,	// (0x000225fb) listrow_wgtman_pane_g2

0x0001,

0xfe50,	// (0x00023f59) listrow_wgtman_pane_g

0xe50a,	// (0x00022613) listrow_wgtman_pane_t1

0xe522,	// (0x0002262b) listrow_wgtman_pane_t2

0x0001,

0xfe55,	// (0x00023f5e) listrow_wgtman_pane_t

0xe548,	// (0x00022651) wait_bar_pane_cp09

0xe55a,	// (0x00022663) main_calllock_btn_pane

0xe562,	// (0x0002266b) main_calllock_pane_g1

0x108e,	// (0x00015197) bg_button_pane_cp17

0xe56b,	// (0x00022674) main_calllock_btn_pane_g1

0xe574,	// (0x0002267d) main_calllock_btn_pane_t1

0x108e,	// (0x00015197) main_dialer3_pane

0x108e,	// (0x00015197) main_fmrd2_pane

0x1b4a,	// (0x00015c53) main_fs_bigclock_unlock_btn_pane_g1

0xe58b,	// (0x00022694) main_fs_bigclock_unlock_btn_pane_t1

0xe599,	// (0x000226a2) area_fmrd2_info_pane_ParamLimits

0xe599,	// (0x000226a2) area_fmrd2_info_pane

0xe5a5,	// (0x000226ae) area_fmrd2_visual_pane_ParamLimits

0xe5a5,	// (0x000226ae) area_fmrd2_visual_pane

0xe5b3,	// (0x000226bc) fmrd2_indi_pane_ParamLimits

0xe5b3,	// (0x000226bc) fmrd2_indi_pane

0xe5c0,	// (0x000226c9) area_fmrd2_visual_pane_g1

0xe5c8,	// (0x000226d1) area_fmrd2_visual_pane_t1

0xe5d6,	// (0x000226df) area_fmrd2_visual_pane_t2

0xe5e4,	// (0x000226ed) area_fmrd2_visual_pane_t3

0x0002,

0xfe5f,	// (0x00023f68) area_fmrd2_visual_pane_t

0xe5f2,	// (0x000226fb) area_fmrd2_info_pane_g1

0xe5fa,	// (0x00022703) area_fmrd2_info_pane_t1

0xe608,	// (0x00022711) area_fmrd2_info_pane_t2

0xe616,	// (0x0002271f) area_fmrd2_info_pane_t3

0xe624,	// (0x0002272d) area_fmrd2_info_pane_t4

0x0003,

0xfe66,	// (0x00023f6f) area_fmrd2_info_pane_t

0xe632,	// (0x0002273b) fmrd2_indi_pane_t1

0xe640,	// (0x00022749) fmrd2_indi_pane_t2

0xe64e,	// (0x00022757) fmrd2_indi_pane_t3

0x0002,

0xfe6f,	// (0x00023f78) fmrd2_indi_pane_t

0x5c55,	// (0x00019d5e) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x5c55,	// (0x00019d5e) list_single_fs_bigclock_indicator_pane_g5

0x5d03,	// (0x00019e0c) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x5d03,	// (0x00019e0c) list_single_fs_bigclock_indicator_pane_t5

0xda22,	// (0x00021b2b) aid_cell_bcale_month_pane_ParamLimits

0xda22,	// (0x00021b2b) aid_cell_bcale_month_pane

0xda40,	// (0x00021b49) bcale_month_pane_ParamLimits

0xda40,	// (0x00021b49) bcale_month_pane

0xda56,	// (0x00021b5f) bcale_preview_pane_ParamLimits

0xda56,	// (0x00021b5f) bcale_preview_pane

0xdfba,	// (0x000220c3) list_single_fs_bigclock_pane_t1_ParamLimits

0xdfd6,	// (0x000220df) list_single_fs_bigclock_pane_t2_ParamLimits

0xdfd6,	// (0x000220df) list_single_fs_bigclock_pane_t2

0x0001,

0xfdea,	// (0x00023ef3) list_single_fs_bigclock_pane_t_ParamLimits

0xfdea,	// (0x00023ef3) list_single_fs_bigclock_pane_t

0xe583,	// (0x0002268c) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfe5a,	// (0x00023f63) main_fs_bigclock_unlock_btn_pane_g

0xe65c,	// (0x00022765) aid_dia3_key_size_ParamLimits

0xe65c,	// (0x00022765) aid_dia3_key_size

0xe668,	// (0x00022771) aid_dia3_listrow_size_ParamLimits

0xe668,	// (0x00022771) aid_dia3_listrow_size

0xe676,	// (0x0002277f) dia3_keypad_fun_pane_ParamLimits

0xe676,	// (0x0002277f) dia3_keypad_fun_pane

0xe682,	// (0x0002278b) dia3_keypad_num_pane_ParamLimits

0xe682,	// (0x0002278b) dia3_keypad_num_pane

0xe68e,	// (0x00022797) dia3_listscroll_pane_ParamLimits

0xe68e,	// (0x00022797) dia3_listscroll_pane

0xe69a,	// (0x000227a3) dia3_numentry_pane_ParamLimits

0xe69a,	// (0x000227a3) dia3_numentry_pane

0xe6a6,	// (0x000227af) dia3_list_pane

0xe6af,	// (0x000227b8) scroll_pane_cp12

0x108e,	// (0x00015197) bg_dia3_numentry_pane

0xe6b8,	// (0x000227c1) dia3_numentry_pane_t1

0xe6c7,	// (0x000227d0) cell_dia3_key_num_pane

0xe6cf,	// (0x000227d8) cell_dia3_key0_fun_pane_ParamLimits

0xe6cf,	// (0x000227d8) cell_dia3_key0_fun_pane

0xe6dc,	// (0x000227e5) cell_dia3_key1_fun_pane_ParamLimits

0xe6dc,	// (0x000227e5) cell_dia3_key1_fun_pane

0xe6e9,	// (0x000227f2) dia3_listrow_pane

0x5964,	// (0x00019a6d) bg_dia3_numentry_pane_g1

0x108e,	// (0x00015197) bg_button_pane_cp21

0xe6f6,	// (0x000227ff) cell_dia3_key_num_pane_t1

0xe704,	// (0x0002280d) cell_dia3_key_num_pane_t2

0xe713,	// (0x0002281c) cell_dia3_key_num_pane_t3

0xe722,	// (0x0002282b) cell_dia3_key_num_pane_t4

0x0003,

0xfe76,	// (0x00023f7f) cell_dia3_key_num_pane_t

0x108e,	// (0x00015197) bg_button_pane_cp19

0xe731,	// (0x0002283a) cell_dia3_key0_fun_pane_g1

0x108e,	// (0x00015197) bg_button_pane_cp20

0xe739,	// (0x00022842) cell_dia3_key1_fun_pane_g1

0xe741,	// (0x0002284a) area_left_week_number_pane

0xe752,	// (0x0002285b) area_top_day_name_pane

0xe75e,	// (0x00022867) frame_month_view_pane

0xe76f,	// (0x00022878) grid_month_view_pane

0xe77d,	// (0x00022886) cell_top_day_name_pane_ParamLimits

0xe77d,	// (0x00022886) cell_top_day_name_pane

0xe793,	// (0x0002289c) cell_area_left_week_number_pane_ParamLimits

0xe793,	// (0x0002289c) cell_area_left_week_number_pane

0xe7b2,	// (0x000228bb) cell_month_view_pane_ParamLimits

0xe7b2,	// (0x000228bb) cell_month_view_pane

0xe7d8,	// (0x000228e1) frm_month_g1

0xe7e5,	// (0x000228ee) frm_month_g2

0xe7f4,	// (0x000228fd) frm_month_g3

0xe803,	// (0x0002290c) frm_month_g4

0xe812,	// (0x0002291b) frm_month_g5

0xe821,	// (0x0002292a) frm_month_g6

0xe830,	// (0x00022939) frm_month_g7

0xe83f,	// (0x00022948) frm_month_g8

0xe84c,	// (0x00022955) frm_month_g9

0xe859,	// (0x00022962) frm_month_g10

0xe866,	// (0x0002296f) frm_month_g11

0xe873,	// (0x0002297c) frm_month_g12

0xe880,	// (0x00022989) frm_month_g13

0xe88d,	// (0x00022996) frm_month_g14

0xe89a,	// (0x000229a3) frm_month_g15

0xe8a7,	// (0x000229b0) frm_month_g16

0x000f,

0xfe7f,	// (0x00023f88) frm_month_g

0xe8b4,	// (0x000229bd) cell_top_day_name_pane_t1

0xe8c7,	// (0x000229d0) cell_area_left_week_number_pane_g1

0xe8d6,	// (0x000229df) cell_area_left_week_number_pane_t1

0x17d5,	// (0x000158de) cell_month_view_pane_g1

0xe8ec,	// (0x000229f5) cell_month_view_pane_t1

0x108e,	// (0x00015197) main_fps_pane

0x5eee,	// (0x00019ff7) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x5eee,	// (0x00019ff7) cmail_ddmenu_btn02_pane_cp1

0x5f0a,	// (0x0001a013) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x5f0a,	// (0x0001a013) cmail_ddmenu_btn02_pane_cp2

0xdd47,	// (0x00021e50) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xdd47,	// (0x00021e50) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfd9d,	// (0x00023ea6) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfd9d,	// (0x00023ea6) cmail_ddmenu_btn02_pane_g

0xdd65,	// (0x00021e6e) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xdd65,	// (0x00021e6e) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfda2,	// (0x00023eab) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfda2,	// (0x00023eab) cmail_ddmenu_btn02_pane_t

0xe902,	// (0x00022a0b) fps_text_pane_ParamLimits

0xe902,	// (0x00022a0b) fps_text_pane

0xe90f,	// (0x00022a18) main_fps_pane_g1_ParamLimits

0xe90f,	// (0x00022a18) main_fps_pane_g1

0xe91b,	// (0x00022a24) wait_bar_pane_cp010_ParamLimits

0xe91b,	// (0x00022a24) wait_bar_pane_cp010

0xe927,	// (0x00022a30) fps_text_pane_t1_ParamLimits

0xe927,	// (0x00022a30) fps_text_pane_t1

0xbc5f,	// (0x0001fd68) cam4_image_uncrop_pane_g1

0xbc68,	// (0x0001fd71) cam4_image_uncrop_pane_g2

0xbc71,	// (0x0001fd7a) cam4_image_uncrop_pane_g3

0xbc7a,	// (0x0001fd83) cam4_image_uncrop_pane_g4

0x0003,

0xf8a4,	// (0x000239ad) cam4_image_uncrop_pane_g

0xe6e9,	// (0x000227f2) dia3_listrow_pane_ParamLimits

0x108e,	// (0x00015197) main_phob2_pane

0xd89b,	// (0x000219a4) cell_tport_appsw_pane_cp02_ParamLimits

0xd89b,	// (0x000219a4) cell_tport_appsw_pane_cp02

0xd8a8,	// (0x000219b1) cell_tport_appsw_pane_cp03_ParamLimits

0xd8a8,	// (0x000219b1) cell_tport_appsw_pane_cp03

0x108e,	// (0x00015197) phob2_contact_card_pane

0x108e,	// (0x00015197) phob2_listscroll_pane

0xe940,	// (0x00022a49) phob2_list_pane

0xe948,	// (0x00022a51) scroll_pane_cp034

0xe950,	// (0x00022a59) phob2_cc_data_pane_ParamLimits

0xe950,	// (0x00022a59) phob2_cc_data_pane

0xe968,	// (0x00022a71) phob2_cc_listscroll_pane_ParamLimits

0xe968,	// (0x00022a71) phob2_cc_listscroll_pane

0xe980,	// (0x00022a89) list_double_large_graphic_phob2_pane_ParamLimits

0xe980,	// (0x00022a89) list_double_large_graphic_phob2_pane

0xe992,	// (0x00022a9b) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xe992,	// (0x00022a9b) list_double_large_graphic_phob2_pane_g1

0xe99f,	// (0x00022aa8) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xe99f,	// (0x00022aa8) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfea0,	// (0x00023fa9) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfea0,	// (0x00023fa9) list_double_large_graphic_phob2_pane_g

0xe9c3,	// (0x00022acc) list_double_large_graphic_phob2_pane_t1_ParamLimits

0xe9c3,	// (0x00022acc) list_double_large_graphic_phob2_pane_t1

0xe9d8,	// (0x00022ae1) list_double_large_graphic_phob2_pane_t2_ParamLimits

0xe9d8,	// (0x00022ae1) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfea9,	// (0x00023fb2) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfea9,	// (0x00023fb2) list_double_large_graphic_phob2_pane_t

0x108e,	// (0x00015197) list_highlight_pane_cp024

0xe9ed,	// (0x00022af6) phob2_cc_button_pane

0xe9f5,	// (0x00022afe) phob2_cc_data_pane_g1_ParamLimits

0xe9f5,	// (0x00022afe) phob2_cc_data_pane_g1

0xea04,	// (0x00022b0d) phob2_cc_data_pane_g2_ParamLimits

0xea04,	// (0x00022b0d) phob2_cc_data_pane_g2

0x0001,

0xfeae,	// (0x00023fb7) phob2_cc_data_pane_g_ParamLimits

0xfeae,	// (0x00023fb7) phob2_cc_data_pane_g

0xea13,	// (0x00022b1c) phob2_cc_data_pane_t1_ParamLimits

0xea13,	// (0x00022b1c) phob2_cc_data_pane_t1

0xea28,	// (0x00022b31) phob2_cc_data_pane_t2_ParamLimits

0xea28,	// (0x00022b31) phob2_cc_data_pane_t2

0xea3d,	// (0x00022b46) phob2_cc_data_pane_t3_ParamLimits

0xea3d,	// (0x00022b46) phob2_cc_data_pane_t3

0x0002,

0xfeb3,	// (0x00023fbc) phob2_cc_data_pane_t_ParamLimits

0xfeb3,	// (0x00023fbc) phob2_cc_data_pane_t

0xea52,	// (0x00022b5b) phob2_cc_list_pane_ParamLimits

0xea52,	// (0x00022b5b) phob2_cc_list_pane

0x5881,	// (0x0001998a) scroll_pane_cp035_ParamLimits

0x5881,	// (0x0001998a) scroll_pane_cp035

0x10e1,	// (0x000151ea) bg_button_pane_cp033

0xea5e,	// (0x00022b67) phob2_cc_button_pane_g1

0xea6a,	// (0x00022b73) phob2_cc_button_pane_t1

0xea7f,	// (0x00022b88) phob2_cc_button_pane_t2

0x0001,

0xfeba,	// (0x00023fc3) phob2_cc_button_pane_t

0xea91,	// (0x00022b9a) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xea91,	// (0x00022b9a) list_double_large_graphic_phob2_cc_pane

0xead7,	// (0x00022be0) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xead7,	// (0x00022be0) list_double_large_graphic_phob2_cc_pane_g1

0xeae8,	// (0x00022bf1) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xeae8,	// (0x00022bf1) list_double_large_graphic_phob2_cc_pane_g2

0xeaf7,	// (0x00022c00) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xeaf7,	// (0x00022c00) list_double_large_graphic_phob2_cc_pane_g3

0xeb06,	// (0x00022c0f) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0xeb06,	// (0x00022c0f) list_double_large_graphic_phob2_cc_pane_g4

0xeb17,	// (0x00022c20) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xeb17,	// (0x00022c20) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfebf,	// (0x00023fc8) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfebf,	// (0x00023fc8) list_double_large_graphic_phob2_cc_pane_g

0xeb26,	// (0x00022c2f) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0xeb26,	// (0x00022c2f) list_double_large_graphic_phob2_cc_pane_t1

0xeb4f,	// (0x00022c58) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0xeb4f,	// (0x00022c58) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfeca,	// (0x00023fd3) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfeca,	// (0x00023fd3) list_double_large_graphic_phob2_cc_pane_t

0xeb78,	// (0x00022c81) list_highlight_pane_cp025_ParamLimits

0xeb78,	// (0x00022c81) list_highlight_pane_cp025

0x10e1,	// (0x000151ea) bg_button_pane_cp033_ParamLimits

0xea5e,	// (0x00022b67) phob2_cc_button_pane_g1_ParamLimits

0xea6a,	// (0x00022b73) phob2_cc_button_pane_t1_ParamLimits

0xea7f,	// (0x00022b88) phob2_cc_button_pane_t2_ParamLimits

0xfeba,	// (0x00023fc3) phob2_cc_button_pane_t_ParamLimits

0x8b14,	// (0x0001cc1d) popup_wgtman_window

0x5984,	// (0x00019a8d) scroll_pane_cp038

0xe43c,	// (0x00022545) wgtman_btn_pane_cp_01_ParamLimits

0xe43c,	// (0x00022545) wgtman_btn_pane_cp_01

0xeb86,	// (0x00022c8f) wgtman_content_pane

0xeb8f,	// (0x00022c98) wgtman_heading_pane

0x108e,	// (0x00015197) bg_heading_pane_cp02

0xeb98,	// (0x00022ca1) wgtman_heading_pane_g1

0xeba0,	// (0x00022ca9) wgtman_heading_pane_t1

0xebae,	// (0x00022cb7) scroll_pane_cp036

0xebb6,	// (0x00022cbf) wgtman_list_pane

0x5e6f,	// (0x00019f78) wgtman_list_pane_t1_ParamLimits

0x5e6f,	// (0x00019f78) wgtman_list_pane_t1

0x8351,	// (0x0001c45a) cam4_grid_pane

0xc392,	// (0x0002049b) bg_button_pane_cp015_ParamLimits

0xc3a2,	// (0x000204ab) bg_button_pane_cp016_ParamLimits

0xc3b5,	// (0x000204be) bg_button_pane_cp017_ParamLimits

0xc407,	// (0x00020510) popup_vitu2_query_window_g3_ParamLimits

0xc407,	// (0x00020510) popup_vitu2_query_window_g3

0xc4ba,	// (0x000205c3) popup_vitu2_query_window_t6_ParamLimits

0xc4ba,	// (0x000205c3) popup_vitu2_query_window_t6

0xc4e5,	// (0x000205ee) popup_vitu2_query_window_t7_ParamLimits

0xc4e5,	// (0x000205ee) popup_vitu2_query_window_t7

0xebbe,	// (0x00022cc7) cam4_grid_pane_g1

0xebc7,	// (0x00022cd0) cam4_grid_pane_g2

0xebd0,	// (0x00022cd9) cam4_grid_pane_g3

0xebd9,	// (0x00022ce2) cam4_grid_pane_g4

0x0003,

0xfecf,	// (0x00023fd8) cam4_grid_pane_g

0x9383,	// (0x0001d48c) aid_placing_vt_slider_lsc_ParamLimits

0x962d,	// (0x0001d736) vidtel_button_pane_ParamLimits

0x962d,	// (0x0001d736) vidtel_button_pane

0x108e,	// (0x00015197) bg_button_pane_cp034

0xebe2,	// (0x00022ceb) vidtel_button_pane_g1

0xebea,	// (0x00022cf3) vidtel_button_pane_t1

0x4f3f,	// (0x00019048) aid_size_vtel_slider_touch

0x5881,	// (0x0001998a) scroll_pane_cp039

0x59b3,	// (0x00019abc) ncim_query_button_pane_cp01_ParamLimits

0x59d2,	// (0x00019adb) ncimui_query_pane_g1_ParamLimits

0x10e1,	// (0x000151ea) input_focus_pane_cp012_ParamLimits

0x59f7,	// (0x00019b00) ncim_query_entry_pane_t1_ParamLimits

0x5881,	// (0x0001998a) scroll_pane_cp039_ParamLimits

0x24ab,	// (0x000165b4) navi_pane_bcale_mc_g1

0x24b3,	// (0x000165bc) navi_pane_bcale_mc_t1

0x5f3e,	// (0x0001a047) main_sp_fs_email_pane_g1

0x5f4a,	// (0x0001a053) main_sp_fs_email_pane_g2

0x0001,

0xfc9f,	// (0x00023da8) main_sp_fs_email_pane_g

0x63ac,	// (0x0001a4b5) list_single_cale_mrui_row_pane_g3_ParamLimits

0x63ac,	// (0x0001a4b5) list_single_cale_mrui_row_pane_g3

0xdd83,	// (0x00021e8c) list_single_recal_day_pane_g5_event_pane

0x652b,	// (0x0001a634) list_single_recal_day_pane_g7

0xec00,	// (0x00022d09) list_recal_day_event_pane_cp01

0xec09,	// (0x00022d12) list_recal_vselct_arw_lo_pane_cp01

0xec11,	// (0x00022d1a) list_recal_vselct_arw_up_pane_cp01

0xec19,	// (0x00022d22) list_recal_vselct_pane_cp01

0x4f98,	// (0x000190a1) list_recal_day_event_pane_cp01_g1

0xec23,	// (0x00022d2c) list_recal_day_event_pane_cp01_t1

0x6533,	// (0x0001a63c) list_single_recal_day_pane_t1_ParamLimits

0xdd9a,	// (0x00021ea3) list_single_recal_day_pane_t2_ParamLimits

0xfdb2,	// (0x00023ebb) list_single_recal_day_pane_t_ParamLimits

0x175b,	// (0x00015864) bg_notes_pane_ParamLimits

0x182d,	// (0x00015936) list_notes_pane_ParamLimits

0x8c4c,	// (0x0001cd55) scroll_pane_cp06_ParamLimits

0x186d,	// (0x00015976) main_notes_pane_ParamLimits

0x10e1,	// (0x000151ea) main_welc_pane

0xec46,	// (0x00022d4f) main_welc_body_pane_ParamLimits

0xec46,	// (0x00022d4f) main_welc_body_pane

0xec5f,	// (0x00022d68) main_welc_opti_pane_ParamLimits

0xec5f,	// (0x00022d68) main_welc_opti_pane

0xecb4,	// (0x00022dbd) main_welc_pane_t1_ParamLimits

0xecb4,	// (0x00022dbd) main_welc_pane_t1

0xedb8,	// (0x00022ec1) main_welc_body_row_pane_ParamLimits

0xedb8,	// (0x00022ec1) main_welc_body_row_pane

0x26cf,	// (0x000167d8) main_welc_opti_row_pane_ParamLimits

0x26cf,	// (0x000167d8) main_welc_opti_row_pane

0xedcd,	// (0x00022ed6) main_welc_opti_row_pane_g1

0xedd5,	// (0x00022ede) main_welc_opti_row_pane_t1

0xede4,	// (0x00022eed) main_welc_body_row_pane_t1

0xe269,	// (0x00022372) popup_notif_wgt_heading_pane

0xe295,	// (0x0002239e) aid_size_list_notif_wgt_del_ParamLimits

0xe2a2,	// (0x000223ab) list_notif_wgt_row_pane_g1_ParamLimits

0xe2ae,	// (0x000223b7) list_notif_wgt_row_pane_g2_ParamLimits

0xe2c2,	// (0x000223cb) list_notif_wgt_row_pane_g3_ParamLimits

0xfe19,	// (0x00023f22) list_notif_wgt_row_pane_g_ParamLimits

0xe2cf,	// (0x000223d8) list_notif_wgt_row_pane_t1_ParamLimits

0xe2e5,	// (0x000223ee) list_notif_wgt_row_pane_t2_ParamLimits

0xe2f7,	// (0x00022400) list_notif_wgt_row_pane_t3_ParamLimits

0xfe20,	// (0x00023f29) list_notif_wgt_row_pane_t_ParamLimits

0xe4e5,	// (0x000225ee) listrow_wgtman_pane_g1_ParamLimits

0xe4f2,	// (0x000225fb) listrow_wgtman_pane_g2_ParamLimits

0xfe50,	// (0x00023f59) listrow_wgtman_pane_g_ParamLimits

0xe50a,	// (0x00022613) listrow_wgtman_pane_t1_ParamLimits

0xe522,	// (0x0002262b) listrow_wgtman_pane_t2_ParamLimits

0xfe55,	// (0x00023f5e) listrow_wgtman_pane_t_ParamLimits

0xe548,	// (0x00022651) wait_bar_pane_cp09_ParamLimits

0x108e,	// (0x00015197) bg_popup_heading_pane_cp02

0xedf3,	// (0x00022efc) popup_notif_wgt_heading_pane_g1

0xedfb,	// (0x00022f04) popup_notif_wgt_heading_pane_t1

0x3b68,	// (0x00017c71) main_vids_pane

0x108e,	// (0x00015197) vids_listscroll_pane

0xee09,	// (0x00022f12) scroll_pane_cp040

0x108e,	// (0x00015197) vids_list_pane

0xee12,	// (0x00022f1b) vids_list_double_pane_ParamLimits

0xee12,	// (0x00022f1b) vids_list_double_pane

0xee23,	// (0x00022f2c) vids_list_double_pane_g1

0xee2c,	// (0x00022f35) vids_list_double_pane_t1

0xee3c,	// (0x00022f45) vids_list_double_pane_t2

0x0001,

0xfeee,	// (0x00023ff7) vids_list_double_pane_t

0x7b40,	// (0x0001bc49) main_ncimui_pane_ParamLimits

0xce92,	// (0x00020f9b) main_ncimui_pane_g1_ParamLimits

0xce9e,	// (0x00020fa7) main_ncimui_pane_g2_ParamLimits

0xce9e,	// (0x00020fa7) main_ncimui_pane_g2

0x0001,

0xfba0,	// (0x00023ca9) main_ncimui_pane_g_ParamLimits

0xfba0,	// (0x00023ca9) main_ncimui_pane_g

0xec74,	// (0x00022d7d) main_welc_pane_g1_ParamLimits

0xec74,	// (0x00022d7d) main_welc_pane_g1

0xec80,	// (0x00022d89) main_welc_pane_g2_ParamLimits

0xec80,	// (0x00022d89) main_welc_pane_g2

0x0003,

0xfed8,	// (0x00023fe1) main_welc_pane_g_ParamLimits

0xfed8,	// (0x00023fe1) main_welc_pane_g

0x175b,	// (0x00015864) listscroll_mce_pane_ParamLimits

0xa572,	// (0x0001e67b) wait_bar_pane_cp10

0x3b5c,	// (0x00017c65) main_cale_day_pane_ParamLimits

0x3b5c,	// (0x00017c65) main_cale_week_pane_ParamLimits

0x175b,	// (0x00015864) main_messa_pane_ParamLimits

0xb88e,	// (0x0001f997) main_clock2_btn_pane_ParamLimits

0xb88e,	// (0x0001f997) main_clock2_btn_pane

0x43ac,	// (0x000184b5) main_clock2_btn_pane_cp01_ParamLimits

0x43ac,	// (0x000184b5) main_clock2_btn_pane_cp01

0x6367,	// (0x0001a470) list_cale_mrui_pane_ParamLimits

0xe348,	// (0x00022451) main_cf0_pane_g2

0x0001,

0xfe27,	// (0x00023f30) main_cf0_pane_g

0xe741,	// (0x0002284a) area_left_week_number_pane_ParamLimits

0xe752,	// (0x0002285b) area_top_day_name_pane_ParamLimits

0xe75e,	// (0x00022867) frame_month_view_pane_ParamLimits

0xe76f,	// (0x00022878) grid_month_view_pane_ParamLimits

0xe7d8,	// (0x000228e1) frm_month_g1_ParamLimits

0xe7e5,	// (0x000228ee) frm_month_g2_ParamLimits

0xe7f4,	// (0x000228fd) frm_month_g3_ParamLimits

0xe803,	// (0x0002290c) frm_month_g4_ParamLimits

0xe812,	// (0x0002291b) frm_month_g5_ParamLimits

0xe821,	// (0x0002292a) frm_month_g6_ParamLimits

0xe830,	// (0x00022939) frm_month_g7_ParamLimits

0xe83f,	// (0x00022948) frm_month_g8_ParamLimits

0xe84c,	// (0x00022955) frm_month_g9_ParamLimits

0xe859,	// (0x00022962) frm_month_g10_ParamLimits

0xe866,	// (0x0002296f) frm_month_g11_ParamLimits

0xe873,	// (0x0002297c) frm_month_g12_ParamLimits

0xe880,	// (0x00022989) frm_month_g13_ParamLimits

0xe88d,	// (0x00022996) frm_month_g14_ParamLimits

0xe89a,	// (0x000229a3) frm_month_g15_ParamLimits

0xe8a7,	// (0x000229b0) frm_month_g16_ParamLimits

0xfe7f,	// (0x00023f88) frm_month_g_ParamLimits

0xe8b4,	// (0x000229bd) cell_top_day_name_pane_t1_ParamLimits

0xe8c7,	// (0x000229d0) cell_area_left_week_number_pane_g1_ParamLimits

0xe8d6,	// (0x000229df) cell_area_left_week_number_pane_t1_ParamLimits

0x17d5,	// (0x000158de) cell_month_view_pane_g1_ParamLimits

0xe8ec,	// (0x000229f5) cell_month_view_pane_t1_ParamLimits

0x1753,	// (0x0001585c) main_clock2_btn_pane_g1

0xee4a,	// (0x00022f53) main_clock2_btn_pane_t1

0x10e1,	// (0x000151ea) listscroll_cmail_pane_ParamLimits

0x5f3e,	// (0x0001a047) main_sp_fs_email_pane_g1_ParamLimits

0x5f4a,	// (0x0001a053) main_sp_fs_email_pane_g2_ParamLimits

0xfc9f,	// (0x00023da8) main_sp_fs_email_pane_g_ParamLimits

0x64a7,	// (0x0001a5b0) list_recal_day_pane_ParamLimits

0x64b8,	// (0x0001a5c1) mian_recal_day_pane_t1

0xd798,	// (0x000218a1) list_single_dyc_row_text_pane_t4_ParamLimits

0xd798,	// (0x000218a1) list_single_dyc_row_text_pane_t4

0xd7cf,	// (0x000218d8) list_single_dyc_row_text_pane_t5_ParamLimits

0xd7cf,	// (0x000218d8) list_single_dyc_row_text_pane_t5

0x5fd2,	// (0x0001a0db) list_single_dyc_row_text_pane_t6_ParamLimits

0x5fd2,	// (0x0001a0db) list_single_dyc_row_text_pane_t6

0xa200,	// (0x0001e309) aid_mgn_list_cale_time_pane

0x7b40,	// (0x0001bc49) main_gallery2_pane_ParamLimits

0x43c0,	// (0x000184c9) main_clock2_pane_cp01_t1

0x43ce,	// (0x000184d7) main_clock2_pane_cp01_t3

0x0001,

0xf776,	// (0x0002387f) main_clock2_pane_cp01_t

0x8ef4,	// (0x0001cffd) cale_week_scroll_pane_g16_ParamLimits

0x8ef4,	// (0x0001cffd) cale_week_scroll_pane_g16

0x1ad2,	// (0x00015bdb) vorec_slider_pane

0xebea,	// (0x00022cf3) vidtel_button_pane_t1_ParamLimits

0x17e3,	// (0x000158ec) main_fs_bigclock_clock_pane_g1_ParamLimits

0xdeec,	// (0x00021ff5) main_fs_bigclock_clock_pane_g2_ParamLimits

0xdef9,	// (0x00022002) main_fs_bigclock_clock_pane_g3_ParamLimits

0xdef9,	// (0x00022002) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfdd5,	// (0x00023ede) main_fs_bigclock_clock_pane_g_ParamLimits

0xdf05,	// (0x0002200e) main_fs_bigclock_clock_pane_t1_ParamLimits

0xdf17,	// (0x00022020) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfdde,	// (0x00023ee7) main_fs_bigclock_clock_pane_t_ParamLimits

0xb28e,	// (0x0001f397) main_mup3_lyrics_pane_ParamLimits

0xb28e,	// (0x0001f397) main_mup3_lyrics_pane

0xee58,	// (0x00022f61) main_mup3_lyrics_pane_t1_ParamLimits

0xee58,	// (0x00022f61) main_mup3_lyrics_pane_t1

0x7e9e,	// (0x0001bfa7) aid_main_mp4_pane_t1_area

0x7ea8,	// (0x0001bfb1) aid_main_mp4_pane_t2_area

0x7f97,	// (0x0001c0a0) main_mp4_pane_g7_ParamLimits

0x7f97,	// (0x0001c0a0) main_mp4_pane_g7

0x7fa3,	// (0x0001c0ac) main_mp4_pane_g8_ParamLimits

0x7fa3,	// (0x0001c0ac) main_mp4_pane_g8

0xbc45,	// (0x0001fd4e) aid_call6_pane_g1_size

0xeabb,	// (0x00022bc4) list_double_large_graphic_phob2_other_pane_ParamLimits

0xeabb,	// (0x00022bc4) list_double_large_graphic_phob2_other_pane

0x23fe,	// (0x00016507) list_double_large_graphic_phob2_other_pane_g1

0x108e,	// (0x00015197) list_highlight_pane_cp026

0x10e1,	// (0x000151ea) main_welc_pane_ParamLimits

0xd5c9,	// (0x000216d2) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0xd5c9,	// (0x000216d2) main_sp_fs_ctrlbar_pane_g3

0xd5e1,	// (0x000216ea) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0xd5e1,	// (0x000216ea) main_sp_fs_ctrlbar_pane_g4

0xd621,	// (0x0002172a) toolbar2_fixed_button_pane_cp01

0xd62b,	// (0x00021734) toolbar2_fixed_button_pane_cp02

0xd636,	// (0x0002173f) toolbar2_fixed_button_pane_cp03

0xec31,	// (0x00022d3a) list_welc_entry_pane_ParamLimits

0xec31,	// (0x00022d3a) list_welc_entry_pane

0xec8c,	// (0x00022d95) main_welc_pane_g3_ParamLimits

0xec8c,	// (0x00022d95) main_welc_pane_g3

0xeccc,	// (0x00022dd5) main_welc_pane_t2_ParamLimits

0xeccc,	// (0x00022dd5) main_welc_pane_t2

0xecde,	// (0x00022de7) main_welc_pane_t3_ParamLimits

0xecde,	// (0x00022de7) main_welc_pane_t3

0x0005,

0xfee1,	// (0x00023fea) main_welc_pane_t_ParamLimits

0xfee1,	// (0x00023fea) main_welc_pane_t

0xed66,	// (0x00022e6f) welc_button_pane_ParamLimits

0xed66,	// (0x00022e6f) welc_button_pane

0xedac,	// (0x00022eb5) welc_service_logo_pane_ParamLimits

0xedac,	// (0x00022eb5) welc_service_logo_pane

0xee76,	// (0x00022f7f) list_single_welc_entry_pane_ParamLimits

0xee76,	// (0x00022f7f) list_single_welc_entry_pane

0xee87,	// (0x00022f90) list_single_welc_entry_pane_g1

0xee8f,	// (0x00022f98) list_single_welc_entry_pane_t1

0xee9d,	// (0x00022fa6) list_single_welc_entry_pane_t2

0x0001,

0xfef3,	// (0x00023ffc) list_single_welc_entry_pane_t

0x108e,	// (0x00015197) bg_button_pane_cp035

0xeeab,	// (0x00022fb4) welc_button_pane_t1

0xeeb9,	// (0x00022fc2) welc_service_logo_pane_g1

0xeec2,	// (0x00022fcb) welc_service_logo_pane_g2

0x0001,

0xfef8,	// (0x00024001) welc_service_logo_pane_g

0x7635,	// (0x0001b73e) main_int_radio_pane

0x1932,	// (0x00015a3b) list_single_fs_dyc_pane_g1

0xe9ab,	// (0x00022ab4) list_double_large_graphic_phob2_pane_g3_ParamLimits

0xe9ab,	// (0x00022ab4) list_double_large_graphic_phob2_pane_g3

0xe9b7,	// (0x00022ac0) list_double_large_graphic_phob2_pane_g4_ParamLimits

0xe9b7,	// (0x00022ac0) list_double_large_graphic_phob2_pane_g4

0xeecb,	// (0x00022fd4) main_int_radio1_pane_ParamLimits

0xeecb,	// (0x00022fd4) main_int_radio1_pane

0xeee1,	// (0x00022fea) find_pane_cp02

0xeeea,	// (0x00022ff3) input_focus_pane_cp12_ParamLimits

0xeeea,	// (0x00022ff3) input_focus_pane_cp12

0xeef6,	// (0x00022fff) input_focus_pane_cp13_ParamLimits

0xeef6,	// (0x00022fff) input_focus_pane_cp13

0xef0e,	// (0x00023017) input_focus_pane_cp14_ParamLimits

0xef0e,	// (0x00023017) input_focus_pane_cp14

0xef26,	// (0x0002302f) int_radio1_listscroll_pane

0xef30,	// (0x00023039) main_int_radio1_pane_g1_ParamLimits

0xef30,	// (0x00023039) main_int_radio1_pane_g1

0xef3c,	// (0x00023045) main_int_radio1_pane_t1_ParamLimits

0xef3c,	// (0x00023045) main_int_radio1_pane_t1

0xef4e,	// (0x00023057) main_int_radio1_pane_t2_ParamLimits

0xef4e,	// (0x00023057) main_int_radio1_pane_t2

0xef60,	// (0x00023069) main_int_radio1_pane_t3_ParamLimits

0xef60,	// (0x00023069) main_int_radio1_pane_t3

0xef72,	// (0x0002307b) main_int_radio1_pane_t4_ParamLimits

0xef72,	// (0x0002307b) main_int_radio1_pane_t4

0xef89,	// (0x00023092) main_int_radio1_pane_t5_ParamLimits

0xef89,	// (0x00023092) main_int_radio1_pane_t5

0xef9b,	// (0x000230a4) main_int_radio1_pane_t6_ParamLimits

0xef9b,	// (0x000230a4) main_int_radio1_pane_t6

0xefad,	// (0x000230b6) main_int_radio1_pane_t7_ParamLimits

0xefad,	// (0x000230b6) main_int_radio1_pane_t7

0xefbf,	// (0x000230c8) main_int_radio1_pane_t8_ParamLimits

0xefbf,	// (0x000230c8) main_int_radio1_pane_t8

0xefd1,	// (0x000230da) main_int_radio1_pane_t9_ParamLimits

0xefd1,	// (0x000230da) main_int_radio1_pane_t9

0xefe3,	// (0x000230ec) main_int_radio1_pane_t10_ParamLimits

0xefe3,	// (0x000230ec) main_int_radio1_pane_t10

0xf012,	// (0x0002311b) main_int_radio1_pane_t11_ParamLimits

0xf012,	// (0x0002311b) main_int_radio1_pane_t11

0xf041,	// (0x0002314a) main_int_radio1_pane_t12_ParamLimits

0xf041,	// (0x0002314a) main_int_radio1_pane_t12

0x000b,

0xfefd,	// (0x00024006) main_int_radio1_pane_t_ParamLimits

0xfefd,	// (0x00024006) main_int_radio1_pane_t

0xf058,	// (0x00023161) int_radio_list_pane

0xe948,	// (0x00022a51) scroll_pane_cp037

0xe4d4,	// (0x000225dd) list_double_large_graphic_int_radio_pane_ParamLimits

0xe4d4,	// (0x000225dd) list_double_large_graphic_int_radio_pane

0xf060,	// (0x00023169) list_double_large_graphic_int_radio_pane_g1

0xf069,	// (0x00023172) list_double_large_graphic_int_radio_pane_t1

0xf077,	// (0x00023180) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xff16,	// (0x0002401f) list_double_large_graphic_int_radio_pane_t

0x108e,	// (0x00015197) list_highlight_pane_cp027

0xec3e,	// (0x00022d47) main_button_pane_4

0xec98,	// (0x00022da1) main_welc_pane_g4_ParamLimits

0xec98,	// (0x00022da1) main_welc_pane_g4

0xecf0,	// (0x00022df9) main_welc_pane_t4_ParamLimits

0xecf0,	// (0x00022df9) main_welc_pane_t4

0xed02,	// (0x00022e0b) main_welc_pane_t5_ParamLimits

0xed02,	// (0x00022e0b) main_welc_pane_t5

0xed34,	// (0x00022e3d) main_welc_pane_t6_ParamLimits

0xed34,	// (0x00022e3d) main_welc_pane_t6

0xed72,	// (0x00022e7b) welc_button_pane_2_ParamLimits

0xed72,	// (0x00022e7b) welc_button_pane_2

0xed86,	// (0x00022e8f) welc_button_pane_3_ParamLimits

0xed86,	// (0x00022e8f) welc_button_pane_3

0xec3e,	// (0x00022d47) welc_button_pane_4

0xed9e,	// (0x00022ea7) welc_button_pane_5_ParamLimits

0xed9e,	// (0x00022ea7) welc_button_pane_5

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance

0x0000,	// Layout not defined, this API must not be called for this instance
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
	0, // AknLayoutScalable_Apps::Tcell_pinb_pane_ParamLimits_sig*,
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
	0, // AknLayoutScalable_Apps::Tlist_pinb_item_pane_ParamLimits_sig*,
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
	0, // AknLayoutScalable_Apps::Tmup_spec_bar_pane_ParamLimits_sig*,
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
	0, // AknLayoutScalable_Apps::Tmup2_spec_bar_pane_ParamLimits_sig*,
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
	0, // AknLayoutScalable_Apps::Tcell_dialer_keypad_pane_ParamLimits_sig*,
	&WindowLineCRV,
	&ParameterLimitsV,
	&WindowLineVRC,
	0, // AknLayoutScalable_Apps::Tcell_dialer_command_2_pane_ParamLimits_sig*,
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
	0, // AknLayoutScalable_Apps::Tlist_single_spcha_pane_ParamLimits_sig*,
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
	0, // AknLayoutScalable_Apps::Tmain_popup_welc_pane_sig*,
	0, // AknLayoutScalable_Apps::Tmain_welc_sk_g3_sig*,
	0, // AknLayoutScalable_Apps::Tmain_welc_sk_g4_sig*,
	0, // AknLayoutScalable_Apps::Tmain_welc_sk_t3_sig*,
	0, // AknLayoutScalable_Apps::Tmain_welc_sk_t4_sig*,
	0, // AknLayoutScalable_Apps::Tpopup_welc_pane_t4_sig*,
	0, // AknLayoutScalable_Apps::Tpopup_welc_pane_t5_sig*,
	0, // AknLayoutScalable_Apps::Tpopup_welc_pane_t6_sig*,
	};

} // end of namespace AknLayoutScalable_Abrw_pqp_apps_qvga_prt_Normal
