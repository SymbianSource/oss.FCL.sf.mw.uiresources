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

#include "aknlayoutscalable_abrw_pqp_apps_qvga_prt_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pqp_apps_qvga_prt[]; }

namespace AknLayoutScalable_Abrw_pqp_apps_qvga_prt_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pqp_apps_qvga_prt + 0x000725ba };

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
0x622f,	// (0x000787e9) Screen

0x6239,	// (0x000787f3) application_window

0x626b,	// (0x00078825) area_bottom_pane_ParamLimits

0x626b,	// (0x00078825) area_bottom_pane

0x629a,	// (0x00078854) area_top_pane_ParamLimits

0x629a,	// (0x00078854) area_top_pane

0x0fca,	// (0x00073584) call_video_uplink_pane_ParamLimits

0x0fca,	// (0x00073584) call_video_uplink_pane

0x631d,	// (0x000788d7) main_pane_ParamLimits

0x631d,	// (0x000788d7) main_pane

0x2719,	// (0x00074cd3) context_pane

0x8dbb,	// (0x0007b375) navi_pane

0x8dd5,	// (0x0007b38f) popup_cale_events_window_ParamLimits

0x8dd5,	// (0x0007b38f) popup_cale_events_window

0x272c,	// (0x00074ce6) popup_mup_playback_window

0x8dec,	// (0x0007b3a6) signal_pane

0x1743,	// (0x00073cfd) main_browser_pane

0xe041,	// (0x000805fb) main_burst_pane

0x343e,	// (0x000759f8) main_calc_pane

0xe041,	// (0x000805fb) main_cale_day_pane

0x190b,	// (0x00073ec5) main_cale_month_pane

0xe041,	// (0x000805fb) main_cale_week_pane

0xe041,	// (0x000805fb) main_call_pane

0x13f7,	// (0x000739b1) main_call_poc_pane

0xe041,	// (0x000805fb) main_camera_pane

0xe041,	// (0x000805fb) main_chi_dic_pane

0xde40,	// (0x000803fa) main_clock_pane

0x13f7,	// (0x000739b1) main_fmradio_pane

0xe041,	// (0x000805fb) main_graph_messa_pane

0x13f7,	// (0x000739b1) main_help_pane

0x1743,	// (0x00073cfd) main_im_pane

0x1652,	// (0x00073c0c) main_image_pane_ParamLimits

0x1652,	// (0x00073c0c) main_image_pane

0x13f7,	// (0x000739b1) main_location2_pane

0xe041,	// (0x000805fb) main_location_pane

0x13f7,	// (0x000739b1) main_messa_pane

0x13f7,	// (0x000739b1) main_mp2_pane

0xe041,	// (0x000805fb) main_mp_pane

0x13f7,	// (0x000739b1) main_msg_pane

0x13f7,	// (0x000739b1) main_mup_eq_pane

0x13f7,	// (0x000739b1) main_mup_pane

0xe041,	// (0x000805fb) main_notes_pane

0x13f7,	// (0x000739b1) main_pec_pane

0x13f7,	// (0x000739b1) main_phob_pane

0x13f7,	// (0x000739b1) main_pinb_pane

0x13f7,	// (0x000739b1) main_postcard_pane

0x13f7,	// (0x000739b1) main_qdial_pane

0xe041,	// (0x000805fb) main_skin_pane

0x13f7,	// (0x000739b1) main_smil2_pane

0xe041,	// (0x000805fb) main_smil_pane

0xe041,	// (0x000805fb) main_video_pane

0xe041,	// (0x000805fb) main_video_tele_pane

0x1652,	// (0x00073c0c) main_viewer_pane_ParamLimits

0x1652,	// (0x00073c0c) main_viewer_pane

0xe041,	// (0x000805fb) main_vorec_pane

0x8ced,	// (0x0007b2a7) popup_blid_sat_info_window_ParamLimits

0x8ced,	// (0x0007b2a7) popup_blid_sat_info_window

0x8d01,	// (0x0007b2bb) popup_dyc_status_message_window_ParamLimits

0x8d01,	// (0x0007b2bb) popup_dyc_status_message_window

0x8d0d,	// (0x0007b2c7) popup_grid_large_graphic_window_ParamLimits

0x8d0d,	// (0x0007b2c7) popup_grid_large_graphic_window

0x8d65,	// (0x0007b31f) popup_loc_request_window_ParamLimits

0x8d65,	// (0x0007b31f) popup_loc_request_window

0x8d95,	// (0x0007b34f) popup_wml_address_window_ParamLimits

0x8d95,	// (0x0007b34f) popup_wml_address_window

0x8bd2,	// (0x0007b18c) call_muted_g1

0x890d,	// (0x0007aec7) popup_call_audio_conf_window_ParamLimits

0x890d,	// (0x0007aec7) popup_call_audio_conf_window

0x8be2,	// (0x0007b19c) popup_call_audio_first_window_ParamLimits

0x8be2,	// (0x0007b19c) popup_call_audio_first_window

0x8c16,	// (0x0007b1d0) popup_call_audio_in_window_ParamLimits

0x8c16,	// (0x0007b1d0) popup_call_audio_in_window

0x8c32,	// (0x0007b1ec) popup_call_audio_out_window_ParamLimits

0x8c32,	// (0x0007b1ec) popup_call_audio_out_window

0x8c4e,	// (0x0007b208) popup_call_audio_second_window_ParamLimits

0x8c4e,	// (0x0007b208) popup_call_audio_second_window

0x8c76,	// (0x0007b230) popup_call_audio_wait_window_ParamLimits

0x8c76,	// (0x0007b230) popup_call_audio_wait_window

0x8c95,	// (0x0007b24f) popup_number_entry_window_ParamLimits

0x8c95,	// (0x0007b24f) popup_number_entry_window

0x0fe6,	// (0x000735a0) bg_popup_call_pane_cp05_ParamLimits

0x0fe6,	// (0x000735a0) bg_popup_call_pane_cp05

0x1006,	// (0x000735c0) popup_number_entry_window_t1

0x1019,	// (0x000735d3) popup_number_entry_window_t2

0x102b,	// (0x000735e5) popup_number_entry_window_t3

0x0003,

0xf0ec,	// (0x000816a6) popup_number_entry_window_t

0x103d,	// (0x000735f7) text_title_cp2

0x1050,	// (0x0007360a) bg_popup_call_pane_cp_ParamLimits

0x1050,	// (0x0007360a) bg_popup_call_pane_cp

0x105e,	// (0x00073618) call_thumbnail_pane

0x1066,	// (0x00073620) popup_call_audio_in_window_g1_ParamLimits

0x1066,	// (0x00073620) popup_call_audio_in_window_g1

0x1072,	// (0x0007362c) popup_call_audio_in_window_g2_ParamLimits

0x1072,	// (0x0007362c) popup_call_audio_in_window_g2

0x107e,	// (0x00073638) popup_call_audio_in_window_g3_ParamLimits

0x107e,	// (0x00073638) popup_call_audio_in_window_g3

0x0002,

0xf0f5,	// (0x000816af) popup_call_audio_in_window_g_ParamLimits

0xf0f5,	// (0x000816af) popup_call_audio_in_window_g

0x108a,	// (0x00073644) popup_call_audio_in_window_t1_ParamLimits

0x108a,	// (0x00073644) popup_call_audio_in_window_t1

0x10a5,	// (0x0007365f) popup_call_audio_in_window_t2_ParamLimits

0x10a5,	// (0x0007365f) popup_call_audio_in_window_t2

0x10c0,	// (0x0007367a) popup_call_audio_in_window_t3_ParamLimits

0x10c0,	// (0x0007367a) popup_call_audio_in_window_t3

0x0002,

0xf0fc,	// (0x000816b6) popup_call_audio_in_window_t_ParamLimits

0xf0fc,	// (0x000816b6) popup_call_audio_in_window_t

0x1050,	// (0x0007360a) bg_popup_call_pane_cp01_ParamLimits

0x1050,	// (0x0007360a) bg_popup_call_pane_cp01

0x105e,	// (0x00073618) call_thumbnail_pane_cp02

0x10d3,	// (0x0007368d) call_type_pane_cp022

0x10db,	// (0x00073695) popup_call_audio_out_window_g1_ParamLimits

0x10db,	// (0x00073695) popup_call_audio_out_window_g1

0x10ed,	// (0x000736a7) popup_call_audio_out_window_g2_ParamLimits

0x10ed,	// (0x000736a7) popup_call_audio_out_window_g2

0x10f9,	// (0x000736b3) popup_call_audio_out_window_g3_ParamLimits

0x10f9,	// (0x000736b3) popup_call_audio_out_window_g3

0x0002,

0xf103,	// (0x000816bd) popup_call_audio_out_window_g_ParamLimits

0xf103,	// (0x000816bd) popup_call_audio_out_window_g

0x110b,	// (0x000736c5) popup_call_audio_out_window_t1_ParamLimits

0x110b,	// (0x000736c5) popup_call_audio_out_window_t1

0x1123,	// (0x000736dd) popup_call_audio_out_window_t2_ParamLimits

0x1123,	// (0x000736dd) popup_call_audio_out_window_t2

0x0001,

0xf10a,	// (0x000816c4) popup_call_audio_out_window_t_ParamLimits

0xf10a,	// (0x000816c4) popup_call_audio_out_window_t

0x1138,	// (0x000736f2) bg_popup_call_pane_ParamLimits

0x1138,	// (0x000736f2) bg_popup_call_pane

0x64ce,	// (0x00078a88) call_thumbnail_pane_cp_ParamLimits

0x64ce,	// (0x00078a88) call_thumbnail_pane_cp

0x11bc,	// (0x00073776) call_type_pane_cp01_ParamLimits

0x11bc,	// (0x00073776) call_type_pane_cp01

0x1200,	// (0x000737ba) popup_call_audio_first_window_g1_ParamLimits

0x1200,	// (0x000737ba) popup_call_audio_first_window_g1

0x124c,	// (0x00073806) popup_call_audio_first_window_g2_ParamLimits

0x124c,	// (0x00073806) popup_call_audio_first_window_g2

0x0001,

0xf10f,	// (0x000816c9) popup_call_audio_first_window_g_ParamLimits

0xf10f,	// (0x000816c9) popup_call_audio_first_window_g

0x1290,	// (0x0007384a) popup_call_audio_first_window_t1_ParamLimits

0x1290,	// (0x0007384a) popup_call_audio_first_window_t1

0x133c,	// (0x000738f6) popup_call_audio_first_window_t4_ParamLimits

0x133c,	// (0x000738f6) popup_call_audio_first_window_t4

0x13c8,	// (0x00073982) popup_call_audio_first_window_t5_ParamLimits

0x13c8,	// (0x00073982) popup_call_audio_first_window_t5

0x0002,

0xf114,	// (0x000816ce) popup_call_audio_first_window_t_ParamLimits

0xf114,	// (0x000816ce) popup_call_audio_first_window_t

0x13f7,	// (0x000739b1) bg_popup_call_pane_cp02

0x1401,	// (0x000739bb) call_type_pane_cp023

0x1409,	// (0x000739c3) popup_call_audio_wait_window_g1

0x1411,	// (0x000739cb) popup_call_audio_wait_window_g2

0x0001,

0xf11b,	// (0x000816d5) popup_call_audio_wait_window_g

0x1419,	// (0x000739d3) popup_call_audio_wait_window_t3

0x1427,	// (0x000739e1) bg_popup_call_pane_cp03_ParamLimits

0x1427,	// (0x000739e1) bg_popup_call_pane_cp03

0x1487,	// (0x00073a41) call_thumbnail_pane_cp011_ParamLimits

0x1487,	// (0x00073a41) call_thumbnail_pane_cp011

0x1493,	// (0x00073a4d) call_type_pane_cp034_ParamLimits

0x1493,	// (0x00073a4d) call_type_pane_cp034

0x14cf,	// (0x00073a89) popup_call_audio_second_window_g1_ParamLimits

0x14cf,	// (0x00073a89) popup_call_audio_second_window_g1

0x150b,	// (0x00073ac5) popup_call_audio_second_window_g2_ParamLimits

0x150b,	// (0x00073ac5) popup_call_audio_second_window_g2

0x0001,

0xf120,	// (0x000816da) popup_call_audio_second_window_g_ParamLimits

0xf120,	// (0x000816da) popup_call_audio_second_window_g

0x1547,	// (0x00073b01) popup_call_audio_second_window_t1_ParamLimits

0x1547,	// (0x00073b01) popup_call_audio_second_window_t1

0x15c8,	// (0x00073b82) popup_call_audio_second_window_t2_ParamLimits

0x15c8,	// (0x00073b82) popup_call_audio_second_window_t2

0x15fe,	// (0x00073bb8) popup_call_audio_second_window_t3_ParamLimits

0x15fe,	// (0x00073bb8) popup_call_audio_second_window_t3

0x0002,

0xf125,	// (0x000816df) popup_call_audio_second_window_t_ParamLimits

0xf125,	// (0x000816df) popup_call_audio_second_window_t

0x13f7,	// (0x000739b1) bg_popup_call_pane_cp04

0x1634,	// (0x00073bee) list_conf_pane

0x163c,	// (0x00073bf6) popup_call_audio_conf_window_t1

0x164a,	// (0x00073c04) call_thumbnail_pane_g1

0x1652,	// (0x00073c0c) bg_pinb_pane_ParamLimits

0x1652,	// (0x00073c0c) bg_pinb_pane

0x1660,	// (0x00073c1a) find_pinb_pane

0x1669,	// (0x00073c23) listscroll_pinb_pane_ParamLimits

0x1669,	// (0x00073c23) listscroll_pinb_pane

0x1678,	// (0x00073c32) pinb_bg_pane_g1

0x64f2,	// (0x00078aac) pinb_bg_pane_g2

0x64fc,	// (0x00078ab6) pinb_bg_pane_g3

0x6506,	// (0x00078ac0) pinb_bg_pane_g4

0x6510,	// (0x00078aca) pinb_bg_pane_g5

0x651a,	// (0x00078ad4) pinb_bg_pane_g6

0x6525,	// (0x00078adf) pinb_bg_pane_g7

0x6530,	// (0x00078aea) pinb_bg_pane_g8

0x6539,	// (0x00078af3) pinb_bg_pane_g9

0x6541,	// (0x00078afb) pinb_bg_pane_g10

0x0009,

0xf12c,	// (0x000816e6) pinb_bg_pane_g

0x655e,	// (0x00078b18) grid_pinb_pane

0x6567,	// (0x00078b21) list_pinb_pane

0x6572,	// (0x00078b2c) scroll_pane_cp01_ParamLimits

0x6572,	// (0x00078b2c) scroll_pane_cp01

0x1682,	// (0x00073c3c) find_pinb_pane_g1_ParamLimits

0x1682,	// (0x00073c3c) find_pinb_pane_g1

0x169a,	// (0x00073c54) find_pinb_pane_t1

0x16ac,	// (0x00073c66) find_pinb_pane_t2

0x0001,

0xf146,	// (0x00081700) find_pinb_pane_t

0x16c1,	// (0x00073c7b) input_focus_pane_cp01_ParamLimits

0x16c1,	// (0x00073c7b) input_focus_pane_cp01

0x6582,	// (0x00078b3c) cell_pinb_pane_ParamLimits

0x6582,	// (0x00078b3c) cell_pinb_pane

0x659b,	// (0x00078b55) cell_pinb_pane_g1_ParamLimits

0x659b,	// (0x00078b55) cell_pinb_pane_g1

0x65af,	// (0x00078b69) cell_pinb_pane_g2_ParamLimits

0x65af,	// (0x00078b69) cell_pinb_pane_g2

0x16cd,	// (0x00073c87) cell_pinb_pane_g3_ParamLimits

0x16cd,	// (0x00073c87) cell_pinb_pane_g3

0x0002,

0xf14b,	// (0x00081705) cell_pinb_pane_g_ParamLimits

0xf14b,	// (0x00081705) cell_pinb_pane_g

0x13f7,	// (0x000739b1) grid_highlight_pane_cp01

0x65bb,	// (0x00078b75) list_pinb_item_pane_ParamLimits

0x65bb,	// (0x00078b75) list_pinb_item_pane

0x13f7,	// (0x000739b1) list_highlight_pane_cp02

0x65d0,	// (0x00078b8a) list_pinb_item_pane_g1_ParamLimits

0x65d0,	// (0x00078b8a) list_pinb_item_pane_g1

0x65dd,	// (0x00078b97) list_pinb_item_pane_g2_ParamLimits

0x65dd,	// (0x00078b97) list_pinb_item_pane_g2

0x65e9,	// (0x00078ba3) list_pinb_item_pane_g3_ParamLimits

0x65e9,	// (0x00078ba3) list_pinb_item_pane_g3

0x65f8,	// (0x00078bb2) list_pinb_item_pane_g4_ParamLimits

0x65f8,	// (0x00078bb2) list_pinb_item_pane_g4

0x0003,

0xf152,	// (0x0008170c) list_pinb_item_pane_g_ParamLimits

0xf152,	// (0x0008170c) list_pinb_item_pane_g

0x6604,	// (0x00078bbe) list_pinb_item_pane_t1_ParamLimits

0x6604,	// (0x00078bbe) list_pinb_item_pane_t1

0x6635,	// (0x00078bef) calc_display_pane

0x664d,	// (0x00078c07) calc_paper_pane

0x6669,	// (0x00078c23) grid_calc_pane

0x13f7,	// (0x000739b1) bg_list_pane_cp01

0x6689,	// (0x00078c43) clock_g1

0x6691,	// (0x00078c4b) clock_g2

0x0001,

0xf15b,	// (0x00081715) clock_g

0x6699,	// (0x00078c53) clock_t1_ParamLimits

0x6699,	// (0x00078c53) clock_t1

0x66ae,	// (0x00078c68) clock_t2_ParamLimits

0x66ae,	// (0x00078c68) clock_t2

0x66c0,	// (0x00078c7a) clock_t3_ParamLimits

0x66c0,	// (0x00078c7a) clock_t3

0x66d2,	// (0x00078c8c) clock_t4_ParamLimits

0x66d2,	// (0x00078c8c) clock_t4

0x66e4,	// (0x00078c9e) clock_t5_ParamLimits

0x66e4,	// (0x00078c9e) clock_t5

0x66f9,	// (0x00078cb3) clock_t6_ParamLimits

0x66f9,	// (0x00078cb3) clock_t6

0x670b,	// (0x00078cc5) clock_t7_ParamLimits

0x670b,	// (0x00078cc5) clock_t7

0x671d,	// (0x00078cd7) clock_t8_ParamLimits

0x671d,	// (0x00078cd7) clock_t8

0x672f,	// (0x00078ce9) clock_t9_ParamLimits

0x672f,	// (0x00078ce9) clock_t9

0x0008,

0xf160,	// (0x0008171a) clock_t_ParamLimits

0xf160,	// (0x0008171a) clock_t

0x16e1,	// (0x00073c9b) popup_clock_analogue_window_cp02

0x16e1,	// (0x00073c9b) popup_clock_digital_window_cp01

0x16e9,	// (0x00073ca3) listscroll_help_pane

0x13f7,	// (0x000739b1) phob_pre_status_pane

0x16f3,	// (0x00073cad) grid_qdial_pane

0x13f7,	// (0x000739b1) listscroll_mce_pane

0x16fd,	// (0x00073cb7) bg_notes_pane

0x1707,	// (0x00073cc1) list_notes_pane

0x6741,	// (0x00078cfb) scroll_pane_cp06

0x1711,	// (0x00073ccb) bg_calc_paper_pane

0x6754,	// (0x00078d0e) list_calc_pane

0x1743,	// (0x00073cfd) bg_calc_display_pane

0x676e,	// (0x00078d28) calc_display_pane_t1

0x6783,	// (0x00078d3d) calc_display_pane_t2

0x6798,	// (0x00078d52) calc_display_pane_t3

0x0002,

0xf173,	// (0x0008172d) calc_display_pane_t

0x67aa,	// (0x00078d64) cell_calc_pane_ParamLimits

0x67aa,	// (0x00078d64) cell_calc_pane

0x178b,	// (0x00073d45) bg_calc_paper_pane_g1

0x17a3,	// (0x00073d5d) bg_calc_paper_pane_g2

0x1797,	// (0x00073d51) bg_calc_paper_pane_g3

0x17bb,	// (0x00073d75) bg_calc_paper_pane_g4

0x17af,	// (0x00073d69) bg_calc_paper_pane_g5

0x67d1,	// (0x00078d8b) bg_calc_paper_pane_g6

0x67e0,	// (0x00078d9a) bg_calc_paper_pane_g7

0x67ef,	// (0x00078da9) bg_calc_paper_pane_g8

0x0007,

0xf17a,	// (0x00081734) bg_calc_paper_pane_g

0x67fe,	// (0x00078db8) calc_bg_paper_pane_g9

0x680d,	// (0x00078dc7) list_calc_item_pane_ParamLimits

0x680d,	// (0x00078dc7) list_calc_item_pane

0x17c7,	// (0x00073d81) list_calc_item_pane_g1

0x6826,	// (0x00078de0) list_calc_item_pane_t1_ParamLimits

0x6826,	// (0x00078de0) list_calc_item_pane_t1

0x6838,	// (0x00078df2) list_calc_item_pane_t2_ParamLimits

0x6838,	// (0x00078df2) list_calc_item_pane_t2

0x0001,

0xf18b,	// (0x00081745) list_calc_item_pane_t_ParamLimits

0xf18b,	// (0x00081745) list_calc_item_pane_t

0x17e6,	// (0x00073da0) cell_calc_pane_g1

0x17f0,	// (0x00073daa) grid_highlight_pane_cp02

0x1825,	// (0x00073ddf) bg_calc_display_pane_g1

0x6866,	// (0x00078e20) bg_calc_display_pane_g2

0x1812,	// (0x00073dcc) bg_calc_display_pane_g3

0x0002,

0xf195,	// (0x0008174f) bg_calc_display_pane_g

0x6870,	// (0x00078e2a) cell_qdial_pane_ParamLimits

0x6870,	// (0x00078e2a) cell_qdial_pane

0x6882,	// (0x00078e3c) cell_qdial_pane_g1_ParamLimits

0x6882,	// (0x00078e3c) cell_qdial_pane_g1

0x688f,	// (0x00078e49) cell_qdial_pane_g2_ParamLimits

0x688f,	// (0x00078e49) cell_qdial_pane_g2

0x182e,	// (0x00073de8) cell_qdial_pane_g3_ParamLimits

0x182e,	// (0x00073de8) cell_qdial_pane_g3

0x0003,

0xf19c,	// (0x00081756) cell_qdial_pane_g_ParamLimits

0xf19c,	// (0x00081756) cell_qdial_pane_g

0x68ad,	// (0x00078e67) cell_qdial_pane_t1_ParamLimits

0x68ad,	// (0x00078e67) cell_qdial_pane_t1

0x68c5,	// (0x00078e7f) cell_qdial_pane_t2_ParamLimits

0x68c5,	// (0x00078e7f) cell_qdial_pane_t2

0x68d8,	// (0x00078e92) cell_qdial_pane_t3_ParamLimits

0x68d8,	// (0x00078e92) cell_qdial_pane_t3

0x0002,

0xf1a5,	// (0x0008175f) cell_qdial_pane_t_ParamLimits

0xf1a5,	// (0x0008175f) cell_qdial_pane_t

0x13f7,	// (0x000739b1) grid_highlight_pane_cp04

0x183a,	// (0x00073df4) thumbnail_qdial_pane_ParamLimits

0x183a,	// (0x00073df4) thumbnail_qdial_pane

0x1896,	// (0x00073e50) list_help_pane

0x18a0,	// (0x00073e5a) scroll_pane_cp02

0x68eb,	// (0x00078ea5) help_list_pane_t1_ParamLimits

0x68eb,	// (0x00078ea5) help_list_pane_t1

0x6909,	// (0x00078ec3) bg_notes_pane_g2

0x6911,	// (0x00078ecb) bg_notes_pane_g3

0x6919,	// (0x00078ed3) notes_bg_pane_g1

0x6921,	// (0x00078edb) notes_bg_pane_g4

0x6929,	// (0x00078ee3) notes_bg_pane_g5

0x6931,	// (0x00078eeb) notes_bg_pane_g6

0x6939,	// (0x00078ef3) notes_bg_pane_g7

0x6941,	// (0x00078efb) notes_bg_pane_g8

0x6949,	// (0x00078f03) notes_bg_pane_g9

0x0006,

0xf1c3,	// (0x0008177d) notes_bg_pane_g

0x6951,	// (0x00078f0b) list_notes_text_pane_ParamLimits

0x6951,	// (0x00078f0b) list_notes_text_pane

0x18f1,	// (0x00073eab) list_notes_text_pane_g1

0x6967,	// (0x00078f21) list_notes_text_pane_t1

0x190b,	// (0x00073ec5) listscroll_cale_week_pane

0x6990,	// (0x00078f4a) bg_cale_heading_pane

0x191a,	// (0x00073ed4) bg_cale_pane_cp01

0x69a4,	// (0x00078f5e) cale_week_corner_pane

0x69ba,	// (0x00078f74) cale_week_day_heading_pane

0x69ce,	// (0x00078f88) cale_week_scroll_pane_g1

0x69df,	// (0x00078f99) cale_week_scroll_pane_g2

0x69f0,	// (0x00078faa) cale_week_scroll_pane_g3

0x6a01,	// (0x00078fbb) cale_week_scroll_pane_g4

0x6a12,	// (0x00078fcc) cale_week_scroll_pane_g5

0x6a23,	// (0x00078fdd) cale_week_scroll_pane_g6

0x6a34,	// (0x00078fee) cale_week_scroll_pane_g7

0x6a45,	// (0x00078fff) cale_week_scroll_pane_g8

0x6a56,	// (0x00079010) cale_week_scroll_pane_g9

0x6a67,	// (0x00079021) cale_week_scroll_pane_g10

0x6a78,	// (0x00079032) cale_week_scroll_pane_g11

0x6a89,	// (0x00079043) cale_week_scroll_pane_g12

0x6a9a,	// (0x00079054) cale_week_scroll_pane_g13

0x6aab,	// (0x00079065) cale_week_scroll_pane_g14

0x6abc,	// (0x00079076) cale_week_scroll_pane_g15

0x000e,

0xf1d2,	// (0x0008178c) cale_week_scroll_pane_g

0x6acd,	// (0x00079087) cale_week_time_pane

0x6ade,	// (0x00079098) grid_cale_week_pane

0x6af1,	// (0x000790ab) scroll_pane_cp08

0x6b09,	// (0x000790c3) cell_cale_week_pane_ParamLimits

0x6b09,	// (0x000790c3) cell_cale_week_pane

0x6b45,	// (0x000790ff) cale_week_day_heading_pane_t1

0x6b5e,	// (0x00079118) cale_week_day_heading_pane_t2

0x6b77,	// (0x00079131) cale_week_day_heading_pane_t3

0x6b90,	// (0x0007914a) cale_week_day_heading_pane_t4

0x6ba9,	// (0x00079163) cale_week_day_heading_pane_t5

0x6bc2,	// (0x0007917c) cale_week_day_heading_pane_t6

0x6bdb,	// (0x00079195) cale_week_day_heading_pane_t7

0x0006,

0xf1f1,	// (0x000817ab) cale_week_day_heading_pane_t

0x1945,	// (0x00073eff) bg_cale_side_pane

0x6bf4,	// (0x000791ae) cale_week_time_pane_t1

0x6c20,	// (0x000791da) cale_week_time_pane_t2

0x6c4c,	// (0x00079206) cale_week_time_pane_t3

0x6c78,	// (0x00079232) cale_week_time_pane_t4

0x6ca4,	// (0x0007925e) cale_week_time_pane_t5

0x6cd0,	// (0x0007928a) cale_week_time_pane_t6

0x6cfc,	// (0x000792b6) cale_week_time_pane_t7

0x6d28,	// (0x000792e2) cale_week_time_pane_t8

0x0007,

0xf200,	// (0x000817ba) cale_week_time_pane_t

0x6d54,	// (0x0007930e) cell_cale_week_pane_g2

0x6d70,	// (0x0007932a) cell_cale_week_pane_g3_ParamLimits

0x6d70,	// (0x0007932a) cell_cale_week_pane_g3

0x1953,	// (0x00073f0d) grid_highlight_pane_cp07

0x195b,	// (0x00073f15) listscroll_gms_pane

0x1965,	// (0x00073f1f) grid_gms_pane

0x196e,	// (0x00073f28) listscroll_gms_pane_g1

0x1976,	// (0x00073f30) listscroll_gms_pane_g2

0x0001,

0xf211,	// (0x000817cb) listscroll_gms_pane_g

0x6d88,	// (0x00079342) scroll_pane_cp010

0x6d91,	// (0x0007934b) cell_gms_pane_ParamLimits

0x6d91,	// (0x0007934b) cell_gms_pane

0x6da2,	// (0x0007935c) cell_gms_pane_g1

0x197e,	// (0x00073f38) cell_gms_pane_g2

0x18f1,	// (0x00073eab) cell_gms_pane_g3

0x1986,	// (0x00073f40) cell_gms_pane_g4

0x0003,

0xf216,	// (0x000817d0) cell_gms_pane_g

0x198f,	// (0x00073f49) grid_highlight_pane_cp09

0x8b80,	// (0x0007b13a) phob_pre_status_pane_g1

0x8b88,	// (0x0007b142) phob_pre_status_pane_g2

0x8b90,	// (0x0007b14a) phob_pre_status_pane_g3

0x8b98,	// (0x0007b152) phob_pre_status_pane_g4

0x0004,

0xf618,	// (0x00081bd2) phob_pre_status_pane_g

0x8ba8,	// (0x0007b162) phob_pre_status_pane_t1

0x8bb6,	// (0x0007b170) phob_pre_status_pane_t2

0x8bc4,	// (0x0007b17e) phob_pre_status_pane_t3

0x0002,

0xf623,	// (0x00081bdd) phob_pre_status_pane_t

0x13f7,	// (0x000739b1) bg_list_pane_cp05

0x6db2,	// (0x0007936c) grid_vorec_pane

0x6dba,	// (0x00079374) vorec_t1

0x6dc8,	// (0x00079382) vorec_t2

0x6dd6,	// (0x00079390) vorec_t3

0x6de4,	// (0x0007939e) vorec_t4

0x6df2,	// (0x000793ac) vorec_t5

0x6e00,	// (0x000793ba) vorec_t6

0x0006,

0xf21f,	// (0x000817d9) vorec_t

0x6e1c,	// (0x000793d6) wait_bar_pane_cp01

0x22e4,	// (0x0007489e) cell_vorec_pane_ParamLimits

0x22e4,	// (0x0007489e) cell_vorec_pane

0x1a01,	// (0x00073fbb) cell_vorec_pane_g1

0x13f7,	// (0x000739b1) grid_highlight_pane_cp05

0x6e30,	// (0x000793ea) cams_zoom_pane

0x6e3c,	// (0x000793f6) image_vga_pane

0x6e49,	// (0x00079403) main_camera_pane_g1

0x6e55,	// (0x0007940f) main_camera_pane_g2

0x6e61,	// (0x0007941b) main_camera_pane_g3

0x6e6d,	// (0x00079427) main_camera_pane_g4

0x6e79,	// (0x00079433) main_camera_pane_g5

0x6e85,	// (0x0007943f) main_camera_pane_g6

0x6e91,	// (0x0007944b) main_camera_pane_g7

0x0007,

0xf22e,	// (0x000817e8) main_camera_pane_g

0x6e9d,	// (0x00079457) main_camera_pane_t1

0x6eaf,	// (0x00079469) main_camera_pane_t2

0x0001,

0xf23f,	// (0x000817f9) main_camera_pane_t

0x6ed3,	// (0x0007948d) cams_zoom_pane_cp_ParamLimits

0x6ed3,	// (0x0007948d) cams_zoom_pane_cp

0x6ef7,	// (0x000794b1) image_cif_pane_ParamLimits

0x6ef7,	// (0x000794b1) image_cif_pane

0x6f11,	// (0x000794cb) image_subqcif_pane

0x6f19,	// (0x000794d3) main_video_pane_g1_ParamLimits

0x6f19,	// (0x000794d3) main_video_pane_g1

0x6f39,	// (0x000794f3) main_video_pane_g2_ParamLimits

0x6f39,	// (0x000794f3) main_video_pane_g2

0x6f67,	// (0x00079521) main_video_pane_g3_ParamLimits

0x6f67,	// (0x00079521) main_video_pane_g3

0x6f90,	// (0x0007954a) main_video_pane_g4_ParamLimits

0x6f90,	// (0x0007954a) main_video_pane_g4

0x6fb9,	// (0x00079573) main_video_pane_g5_ParamLimits

0x6fb9,	// (0x00079573) main_video_pane_g5

0x1a17,	// (0x00073fd1) main_video_pane_g6_ParamLimits

0x1a17,	// (0x00073fd1) main_video_pane_g6

0x0006,

0xf244,	// (0x000817fe) main_video_pane_g_ParamLimits

0xf244,	// (0x000817fe) main_video_pane_g

0x6fdb,	// (0x00079595) main_video_pane_t1_ParamLimits

0x6fdb,	// (0x00079595) main_video_pane_t1

0x1a31,	// (0x00073feb) cams_zoom_pane_g1

0x1a3a,	// (0x00073ff4) cams_zoom_pane_g2

0x1a43,	// (0x00073ffd) cams_zoom_pane_g3

0x1a4c,	// (0x00074006) cams_zoom_pane_g4

0x0003,

0xf253,	// (0x0008180d) cams_zoom_pane_g

0x7025,	// (0x000795df) grid_cams_pane

0x7031,	// (0x000795eb) linegrid_cams_pane

0x703d,	// (0x000795f7) cell_cams_pane_ParamLimits

0x703d,	// (0x000795f7) cell_cams_pane

0x1a55,	// (0x0007400f) cams_burst_image_pane

0x1a5d,	// (0x00074017) cell_cams_pane_g1

0x13f7,	// (0x000739b1) grid_highlight_pane_cp03

0x17e6,	// (0x00073da0) mp_bg_pane_g1

0x13f7,	// (0x000739b1) bg_list_pane_cp03

0x25f5,	// (0x00074baf) bg_mp_pane

0x25fd,	// (0x00074bb7) grid_mp_pane

0x2605,	// (0x00074bbf) media_player_g1

0x260d,	// (0x00074bc7) media_player_t1

0x261b,	// (0x00074bd5) media_player_t2

0x2629,	// (0x00074be3) media_player_t3

0x2637,	// (0x00074bf1) media_player_t4

0x2645,	// (0x00074bff) media_player_t5

0x2653,	// (0x00074c0d) media_player_t6

0x2661,	// (0x00074c1b) media_player_t7

0x0006,

0xf602,	// (0x00081bbc) media_player_t

0x266f,	// (0x00074c29) wait_bar_pane_cp02

0xf5e7,	// (0x00081ba1) main_usb_pane_t

0x8b77,	// (0x0007b131) cell_mp_pane

0x17e6,	// (0x00073da0) cell_mp_pane_g1

0x13f7,	// (0x000739b1) grid_highlight_pane_cp06

0x1b05,	// (0x000740bf) grid_skin_colour_pane

0x1b0d,	// (0x000740c7) list_highlight_pane_cp03

0x70a0,	// (0x0007965a) skin_g1

0x1b15,	// (0x000740cf) skin_t1

0x1b24,	// (0x000740de) skin_t2

0x0001,

0xf288,	// (0x00081842) skin_t

0x70a8,	// (0x00079662) cell_skin_colour_pane_ParamLimits

0x70a8,	// (0x00079662) cell_skin_colour_pane

0x1b32,	// (0x000740ec) cell_skin_colour_pane_g1

0x711e,	// (0x000796d8) call_video_g1_ParamLimits

0x711e,	// (0x000796d8) call_video_g1

0x712a,	// (0x000796e4) call_video_g2_ParamLimits

0x712a,	// (0x000796e4) call_video_g2

0x0001,

0xf28d,	// (0x00081847) call_video_g_ParamLimits

0xf28d,	// (0x00081847) call_video_g

0x717a,	// (0x00079734) call_video_uplink_pane_cp1_ParamLimits

0x717a,	// (0x00079734) call_video_uplink_pane_cp1

0x1b44,	// (0x000740fe) call_video_uplink_pane_cp2

0x7236,	// (0x000797f0) video_down_crop_pane_ParamLimits

0x7236,	// (0x000797f0) video_down_crop_pane

0x7300,	// (0x000798ba) video_down_pane_ParamLimits

0x7300,	// (0x000798ba) video_down_pane

0x1b4c,	// (0x00074106) video_down_subqcif_pane_ParamLimits

0x1b4c,	// (0x00074106) video_down_subqcif_pane

0x1b64,	// (0x0007411e) video_down_subqcif_pane_cp_ParamLimits

0x1b64,	// (0x0007411e) video_down_subqcif_pane_cp

0x1b88,	// (0x00074142) im_reading_pane_ParamLimits

0x1b88,	// (0x00074142) im_reading_pane

0x73cc,	// (0x00079986) im_writing_pane_ParamLimits

0x73cc,	// (0x00079986) im_writing_pane

0x73e2,	// (0x0007999c) im_reading_pane_t1

0x1ba2,	// (0x0007415c) list_im_pane

0x1bb3,	// (0x0007416d) scroll_pane_cp07

0x741a,	// (0x000799d4) im_writing_pane_t1_ParamLimits

0x741a,	// (0x000799d4) im_writing_pane_t1

0x1bcc,	// (0x00074186) im_writing_pane_t2_ParamLimits

0x1bcc,	// (0x00074186) im_writing_pane_t2

0x0001,

0xf297,	// (0x00081851) im_writing_pane_t_ParamLimits

0xf297,	// (0x00081851) im_writing_pane_t

0x13f7,	// (0x000739b1) input_focus_pane_cp04

0x13f7,	// (0x000739b1) input_focus_pane_cp05

0x742f,	// (0x000799e9) list_im_single_pane_ParamLimits

0x742f,	// (0x000799e9) list_im_single_pane

0x1be9,	// (0x000741a3) list_single_im_pane_t1

0x8b3d,	// (0x0007b0f7) blid_accuracy_pane

0x8b45,	// (0x0007b0ff) blid_compass_pane

0x8b4d,	// (0x0007b107) main_location_t1

0x8b5b,	// (0x0007b115) main_location_t2

0x8b69,	// (0x0007b123) main_location_t3

0x0002,

0xf611,	// (0x00081bcb) main_location_t

0x13f7,	// (0x000739b1) aid_levels_location

0x17e6,	// (0x00073da0) blid_accuracy_pane_g1

0x17e6,	// (0x00073da0) blid_accuracy_pane_g2

0x0001,

0xf2f9,	// (0x000818b3) blid_accuracy_pane_g

0x1c23,	// (0x000741dd) wml_content_pane

0x1c61,	// (0x0007421b) wml_button_pane_ParamLimits

0x1c61,	// (0x0007421b) wml_button_pane

0x7447,	// (0x00079a01) wml_list_single_large_pane_ParamLimits

0x7447,	// (0x00079a01) wml_list_single_large_pane

0x745e,	// (0x00079a18) wml_list_single_medium_pane_ParamLimits

0x745e,	// (0x00079a18) wml_list_single_medium_pane

0x7476,	// (0x00079a30) wml_list_single_small_pane_ParamLimits

0x7476,	// (0x00079a30) wml_list_single_small_pane

0x1c75,	// (0x0007422f) wml_selection_box_pane_ParamLimits

0x1c75,	// (0x0007422f) wml_selection_box_pane

0x1c88,	// (0x00074242) wml_list_single_pane_t1

0x1c97,	// (0x00074251) wml_list_single_medium_pane_t1

0x1ca6,	// (0x00074260) wml_list_single_large_pane_t1

0x1cb5,	// (0x0007426f) input_focus_pane_cp02_ParamLimits

0x1cb5,	// (0x0007426f) input_focus_pane_cp02

0x1cc8,	// (0x00074282) wml_selection_box_pane_g1

0x1cd1,	// (0x0007428b) wml_selection_box_pane_t1_ParamLimits

0x1cd1,	// (0x0007428b) wml_selection_box_pane_t1

0x1652,	// (0x00073c0c) bg_wml_button_pane_ParamLimits

0x1652,	// (0x00073c0c) bg_wml_button_pane

0x1ce9,	// (0x000742a3) wml_button_pane_g1

0x1cf1,	// (0x000742ab) wml_button_pane_t1

0x1ce9,	// (0x000742a3) wml_button_bg_pane_g1

0x1d01,	// (0x000742bb) wml_button_bg_pane_g2

0x1d09,	// (0x000742c3) wml_button_bg_pane_g3

0x1d11,	// (0x000742cb) wml_button_bg_pane_g4

0x1d19,	// (0x000742d3) wml_button_bg_pane_g5

0x1d21,	// (0x000742db) wml_button_bg_pane_g6

0x1d29,	// (0x000742e3) wml_button_bg_pane_g7

0x1d31,	// (0x000742eb) wml_button_bg_pane_g8

0x1d39,	// (0x000742f3) wml_button_bg_pane_g9

0x0008,

0xf29c,	// (0x00081856) wml_button_bg_pane_g

0x7491,	// (0x00079a4b) bg_list_pane_cp02

0x1d41,	// (0x000742fb) mce_header_pane_ParamLimits

0x1d41,	// (0x000742fb) mce_header_pane

0x1d55,	// (0x0007430f) mce_icon_pane

0x1d55,	// (0x0007430f) mce_image_pane

0x1d5e,	// (0x00074318) mce_text_pane_ParamLimits

0x1d5e,	// (0x00074318) mce_text_pane

0x749a,	// (0x00079a54) scroll_pane_cp03

0x749a,	// (0x00079a54) scroll_pane_cp04

0x1d72,	// (0x0007432c) scroll_pane_cp05_ParamLimits

0x1d72,	// (0x0007432c) scroll_pane_cp05

0x74a2,	// (0x00079a5c) mce_header_field_pane_ParamLimits

0x74a2,	// (0x00079a5c) mce_header_field_pane

0x74c2,	// (0x00079a7c) mce_header_field_pane_2_ParamLimits

0x74c2,	// (0x00079a7c) mce_header_field_pane_2

0x74d8,	// (0x00079a92) mce_header_field_pane_3

0x74e0,	// (0x00079a9a) list_single_mce_message_pane_ParamLimits

0x74e0,	// (0x00079a9a) list_single_mce_message_pane

0x74f7,	// (0x00079ab1) list_single_mce_smart_pane_ParamLimits

0x74f7,	// (0x00079ab1) list_single_mce_smart_pane

0x1d7e,	// (0x00074338) input_focus_pane_cp03

0x1d87,	// (0x00074341) list_header_data_pane

0x7519,	// (0x00079ad3) mce_header_field_pane_t1

0x7527,	// (0x00079ae1) list_single_mce_header_pane_ParamLimits

0x7527,	// (0x00079ae1) list_single_mce_header_pane

0x1d8f,	// (0x00074349) list_single_mce_header_pane_t1

0x1d9e,	// (0x00074358) list_single_mce_message_pane_g1

0x1da7,	// (0x00074361) list_single_mce_message_pane_t1

0x755d,	// (0x00079b17) bg_cale_heading_pane_cp01_ParamLimits

0x755d,	// (0x00079b17) bg_cale_heading_pane_cp01

0x1db6,	// (0x00074370) bg_cale_pane_cp02_ParamLimits

0x1db6,	// (0x00074370) bg_cale_pane_cp02

0x7580,	// (0x00079b3a) cale_month_corner_pane

0x7596,	// (0x00079b50) cale_month_day_heading_pane_ParamLimits

0x7596,	// (0x00079b50) cale_month_day_heading_pane

0x75b9,	// (0x00079b73) cale_month_pane_g1_ParamLimits

0x75b9,	// (0x00079b73) cale_month_pane_g1

0x75d5,	// (0x00079b8f) cale_month_pane_g2_ParamLimits

0x75d5,	// (0x00079b8f) cale_month_pane_g2

0x75ee,	// (0x00079ba8) cale_month_pane_g3_ParamLimits

0x75ee,	// (0x00079ba8) cale_month_pane_g3

0x761a,	// (0x00079bd4) cale_month_pane_g4_ParamLimits

0x761a,	// (0x00079bd4) cale_month_pane_g4

0x7646,	// (0x00079c00) cale_month_pane_g5_ParamLimits

0x7646,	// (0x00079c00) cale_month_pane_g5

0x7672,	// (0x00079c2c) cale_month_pane_g6_ParamLimits

0x7672,	// (0x00079c2c) cale_month_pane_g6

0x769e,	// (0x00079c58) cale_month_pane_g7_ParamLimits

0x769e,	// (0x00079c58) cale_month_pane_g7

0x76ca,	// (0x00079c84) cale_month_pane_g8_ParamLimits

0x76ca,	// (0x00079c84) cale_month_pane_g8

0x76f6,	// (0x00079cb0) cale_month_pane_g9_ParamLimits

0x76f6,	// (0x00079cb0) cale_month_pane_g9

0x7720,	// (0x00079cda) cale_month_pane_g10_ParamLimits

0x7720,	// (0x00079cda) cale_month_pane_g10

0x774a,	// (0x00079d04) cale_month_pane_g11_ParamLimits

0x774a,	// (0x00079d04) cale_month_pane_g11

0x7774,	// (0x00079d2e) cale_month_pane_g12_ParamLimits

0x7774,	// (0x00079d2e) cale_month_pane_g12

0x779e,	// (0x00079d58) cale_month_pane_g13_ParamLimits

0x779e,	// (0x00079d58) cale_month_pane_g13

0x000c,

0xf2af,	// (0x00081869) cale_month_pane_g_ParamLimits

0xf2af,	// (0x00081869) cale_month_pane_g

0x77c8,	// (0x00079d82) cale_month_week_pane

0x77d9,	// (0x00079d93) grid_cale_month_pane_ParamLimits

0x77d9,	// (0x00079d93) grid_cale_month_pane

0x77f7,	// (0x00079db1) cale_month_day_heading_pane_t1

0x7855,	// (0x00079e0f) cale_month_day_heading_pane_t2

0x78ba,	// (0x00079e74) cale_month_day_heading_pane_t3

0x791f,	// (0x00079ed9) cale_month_day_heading_pane_t4

0x7984,	// (0x00079f3e) cale_month_day_heading_pane_t5

0x79e9,	// (0x00079fa3) cale_month_day_heading_pane_t6

0x7a4e,	// (0x0007a008) cale_month_day_heading_pane_t7

0x0006,

0xf2ca,	// (0x00081884) cale_month_day_heading_pane_t

0x1945,	// (0x00073eff) bg_cale_side_pane_cp01

0x7ab3,	// (0x0007a06d) cale_month_week_pane_t1

0x7aca,	// (0x0007a084) cale_month_week_pane_t2

0x7ae1,	// (0x0007a09b) cale_month_week_pane_t3

0x7af8,	// (0x0007a0b2) cale_month_week_pane_t4

0x7b0f,	// (0x0007a0c9) cale_month_week_pane_t5

0x7b26,	// (0x0007a0e0) cale_month_week_pane_t6

0x0005,

0xf2d9,	// (0x00081893) cale_month_week_pane_t

0x7b3d,	// (0x0007a0f7) cell_cale_month_pane_ParamLimits

0x7b3d,	// (0x0007a0f7) cell_cale_month_pane

0x7be3,	// (0x0007a19d) cell_cale_month_pane_g1

0x7bef,	// (0x0007a1a9) cell_cale_month_pane_t1_ParamLimits

0x7bef,	// (0x0007a1a9) cell_cale_month_pane_t1

0x1953,	// (0x00073f0d) grid_highlight_pane_cp08

0x17e6,	// (0x00073da0) main_smil_g1

0x7c0b,	// (0x0007a1c5) smil_status_pane

0x1e21,	// (0x000743db) smil_text_pane

0x24d5,	// (0x00074a8f) bg_popup_call3_rect_pane_g8

0x24dd,	// (0x00074a97) bg_popup_call3_rect_pane_g9

0x0008,

0xf592,	// (0x00081b4c) bg_popup_call3_rect_pane_g

0x27a6,	// (0x00074d60) smil_status_volume_pane_g1

0x1e2b,	// (0x000743e5) smil_status_pane_t1

0x8e7e,	// (0x0007b438) volume_smil_pane

0x1e42,	// (0x000743fc) list_smil_text_pane

0x7c1c,	// (0x0007a1d6) scroll_pane_cp011

0x7c25,	// (0x0007a1df) smil_text_list_pane_t1_ParamLimits

0x7c25,	// (0x0007a1df) smil_text_list_pane_t1

0x7c6a,	// (0x0007a224) aid_volume_smil_ParamLimits

0x7c6a,	// (0x0007a224) aid_volume_smil

0x17e6,	// (0x00073da0) smil_volume_pane_g1

0x17e6,	// (0x00073da0) smil_volume_pane_g2

0x0001,

0xf2f9,	// (0x000818b3) smil_volume_pane_g

0x1743,	// (0x00073cfd) listscroll_cale_day_pane

0x1e6e,	// (0x00074428) bg_cale_pane

0x1e86,	// (0x00074440) list_cale_pane

0x1e97,	// (0x00074451) scroll_pane_cp09

0x1ea8,	// (0x00074462) cale_bg_pane_g1

0x1eb0,	// (0x0007446a) cale_bg_pane_g2

0x1eb8,	// (0x00074472) cale_bg_pane_g3

0x1ec0,	// (0x0007447a) cale_bg_pane_g4

0x1ec8,	// (0x00074482) cale_bg_pane_g5

0x1ed0,	// (0x0007448a) cale_bg_pane_g6

0x1ed8,	// (0x00074492) cale_bg_pane_g7

0x1ee0,	// (0x0007449a) cale_bg_pane_g8

0x1ee8,	// (0x000744a2) cale_bg_pane_g9

0x0008,

0xf2fe,	// (0x000818b8) cale_bg_pane_g

0x7c8c,	// (0x0007a246) list_cale_time_pane_ParamLimits

0x7c8c,	// (0x0007a246) list_cale_time_pane

0x1ef0,	// (0x000744aa) list_cale_time_pane_g1_ParamLimits

0x1ef0,	// (0x000744aa) list_cale_time_pane_g1

0x1efc,	// (0x000744b6) list_cale_time_pane_g2_ParamLimits

0x1efc,	// (0x000744b6) list_cale_time_pane_g2

0x7ca3,	// (0x0007a25d) list_cale_time_pane_g3_ParamLimits

0x7ca3,	// (0x0007a25d) list_cale_time_pane_g3

0x7caf,	// (0x0007a269) list_cale_time_pane_g4_ParamLimits

0x7caf,	// (0x0007a269) list_cale_time_pane_g4

0x7cbb,	// (0x0007a275) list_cale_time_pane_g5_ParamLimits

0x7cbb,	// (0x0007a275) list_cale_time_pane_g5

0x0005,

0xf311,	// (0x000818cb) list_cale_time_pane_g_ParamLimits

0xf311,	// (0x000818cb) list_cale_time_pane_g

0x1f16,	// (0x000744d0) list_cale_time_pane_t1_ParamLimits

0x1f16,	// (0x000744d0) list_cale_time_pane_t1

0x1f3e,	// (0x000744f8) list_cale_time_pane_t2_ParamLimits

0x1f3e,	// (0x000744f8) list_cale_time_pane_t2

0x804a,	// (0x0007a604) aid_blid_cardinal_pane

0x8088,	// (0x0007a642) compass_pane_t4

0x1f66,	// (0x00074520) list_cale_time_pane_t4_ParamLimits

0x1f66,	// (0x00074520) list_cale_time_pane_t4

0x8096,	// (0x0007a650) compass_pane_t5

0x80a4,	// (0x0007a65e) compass_pane_t6

0x80b2,	// (0x0007a66c) compass_pane_t7

0xdf44,	// (0x000804fe) navi_pane_cc_t1

0xe0e8,	// (0x000806a2) aid_phob_thumbnail_center_pane

0x86e2,	// (0x0007ac9c) main_postcard_pane_g4_ParamLimits

0x0002,

0xf31e,	// (0x000818d8) list_cale_time_pane_t_ParamLimits

0xf31e,	// (0x000818d8) list_cale_time_pane_t

0x1050,	// (0x0007360a) bg_popup_window_pane_cp02_ParamLimits

0x1050,	// (0x0007360a) bg_popup_window_pane_cp02

0x1f8e,	// (0x00074548) heading_pane_cp01_ParamLimits

0x1f8e,	// (0x00074548) heading_pane_cp01

0x1f9a,	// (0x00074554) loc_req_pane_ParamLimits

0x1f9a,	// (0x00074554) loc_req_pane

0x1faa,	// (0x00074564) loc_type_pane_ParamLimits

0x1faa,	// (0x00074564) loc_type_pane

0x1fbc,	// (0x00074576) loc_type_pane_t1_ParamLimits

0x1fbc,	// (0x00074576) loc_type_pane_t1

0x1fce,	// (0x00074588) loc_type_pane_t2_ParamLimits

0x1fce,	// (0x00074588) loc_type_pane_t2

0x1fe0,	// (0x0007459a) loc_type_pane_t3_ParamLimits

0x1fe0,	// (0x0007459a) loc_type_pane_t3

0x0002,

0xf325,	// (0x000818df) loc_type_pane_t_ParamLimits

0xf325,	// (0x000818df) loc_type_pane_t

0x1ff2,	// (0x000745ac) list_loc_req_pane

0x1ffc,	// (0x000745b6) scroll_pane_cp012

0x7cc7,	// (0x0007a281) list_single_loc_request_popup_menu_pane_ParamLimits

0x7cc7,	// (0x0007a281) list_single_loc_request_popup_menu_pane

0x2005,	// (0x000745bf) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x2005,	// (0x000745bf) list_single_loc_request_popup_menu_pane_g1

0x2011,	// (0x000745cb) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x2011,	// (0x000745cb) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf32c,	// (0x000818e6) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf32c,	// (0x000818e6) list_single_loc_request_popup_menu_pane_g

0x201d,	// (0x000745d7) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x201d,	// (0x000745d7) list_single_loc_request_popup_menu_pane_t1

0x7cd9,	// (0x0007a293) bg_popup_window_pane_cp03_ParamLimits

0x7cd9,	// (0x0007a293) bg_popup_window_pane_cp03

0x7ce7,	// (0x0007a2a1) heading_loc_req_pane_ParamLimits

0x7ce7,	// (0x0007a2a1) heading_loc_req_pane

0x7cf3,	// (0x0007a2ad) popup_dyc_status_message_window_g1_ParamLimits

0x7cf3,	// (0x0007a2ad) popup_dyc_status_message_window_g1

0x7cff,	// (0x0007a2b9) popup_dyc_status_message_window_t1_ParamLimits

0x7cff,	// (0x0007a2b9) popup_dyc_status_message_window_t1

0x7d11,	// (0x0007a2cb) popup_dyc_status_message_window_t2_ParamLimits

0x7d11,	// (0x0007a2cb) popup_dyc_status_message_window_t2

0x7d23,	// (0x0007a2dd) popup_dyc_status_message_window_t3_ParamLimits

0x7d23,	// (0x0007a2dd) popup_dyc_status_message_window_t3

0x0002,

0xf331,	// (0x000818eb) popup_dyc_status_message_window_t_ParamLimits

0xf331,	// (0x000818eb) popup_dyc_status_message_window_t

0x13f7,	// (0x000739b1) bg_heading_pane_cp01

0x2033,	// (0x000745ed) heading_loc_req_pane_g1

0x203b,	// (0x000745f5) heading_loc_req_pane_g2

0x2043,	// (0x000745fd) heading_loc_req_pane_g3

0x0002,

0xf338,	// (0x000818f2) heading_loc_req_pane_g

0x204b,	// (0x00074605) heading_loc_req_pane_t1

0x20f4,	// (0x000746ae) bg_popup_sub_pane_cp01_ParamLimits

0x20f4,	// (0x000746ae) bg_popup_sub_pane_cp01

0x2102,	// (0x000746bc) popup_cale_events_window_g1_ParamLimits

0x2102,	// (0x000746bc) popup_cale_events_window_g1

0x2122,	// (0x000746dc) popup_cale_events_window_g2_ParamLimits

0x2122,	// (0x000746dc) popup_cale_events_window_g2

0x0001,

0xf36c,	// (0x00081926) popup_cale_events_window_g_ParamLimits

0xf36c,	// (0x00081926) popup_cale_events_window_g

0x2142,	// (0x000746fc) popup_cale_events_window_t1_ParamLimits

0x2142,	// (0x000746fc) popup_cale_events_window_t1

0x2154,	// (0x0007470e) popup_cale_events_window_t2_ParamLimits

0x2154,	// (0x0007470e) popup_cale_events_window_t2

0x2192,	// (0x0007474c) popup_cale_events_window_t3_ParamLimits

0x2192,	// (0x0007474c) popup_cale_events_window_t3

0x21cc,	// (0x00074786) popup_cale_events_window_t4_ParamLimits

0x21cc,	// (0x00074786) popup_cale_events_window_t4

0x0003,

0xf371,	// (0x0008192b) popup_cale_events_window_t_ParamLimits

0xf371,	// (0x0008192b) popup_cale_events_window_t

0x7da9,	// (0x0007a363) call_type_pane

0x22ce,	// (0x00074888) popup_call_status_window_g1

0x7db5,	// (0x0007a36f) popup_call_status_window_g2

0x7dc1,	// (0x0007a37b) popup_call_status_window_g3

0x0002,

0xf37a,	// (0x00081934) popup_call_status_window_g

0x2202,	// (0x000747bc) call_type_pane_g1

0x220b,	// (0x000747c5) call_type_pane_g2

0x0001,

0xf381,	// (0x0008193b) call_type_pane_g

0x13f7,	// (0x000739b1) bg_popup_sub_pane_cp02

0x2214,	// (0x000747ce) listscroll_popup_wml_pane

0x221c,	// (0x000747d6) list_wml_pane

0x2226,	// (0x000747e0) scroll_pane_cp013

0x7dcd,	// (0x0007a387) list_single_graphic_popup_wml_pane_ParamLimits

0x7dcd,	// (0x0007a387) list_single_graphic_popup_wml_pane

0x17e6,	// (0x00073da0) list_single_graphic_popup_wml_pane_g1

0x222f,	// (0x000747e9) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf386,	// (0x00081940) list_single_graphic_popup_wml_pane_g

0x2237,	// (0x000747f1) list_single_graphic_popup_wml_pane_t1

0x7de1,	// (0x0007a39b) aid_call_pane

0x164a,	// (0x00073c04) popup_clock_analogue_window_g1

0x164a,	// (0x00073c04) popup_clock_analogue_window_g2

0x7de9,	// (0x0007a3a3) popup_clock_analogue_window_g3

0x7de9,	// (0x0007a3a3) popup_clock_analogue_window_g4

0x17e6,	// (0x00073da0) popup_clock_analogue_window_g5

0x0004,

0xf38b,	// (0x00081945) popup_clock_analogue_window_g

0x7df1,	// (0x0007a3ab) popup_clock_analogue_window_t1

0x7dff,	// (0x0007a3b9) clock_digital_number_pane_ParamLimits

0x7dff,	// (0x0007a3b9) clock_digital_number_pane

0x7e0b,	// (0x0007a3c5) clock_digital_number_pane_cp02_ParamLimits

0x7e0b,	// (0x0007a3c5) clock_digital_number_pane_cp02

0x7e17,	// (0x0007a3d1) clock_digital_number_pane_cp03_ParamLimits

0x7e17,	// (0x0007a3d1) clock_digital_number_pane_cp03

0x7e23,	// (0x0007a3dd) clock_digital_number_pane_cp04_ParamLimits

0x7e23,	// (0x0007a3dd) clock_digital_number_pane_cp04

0x7e2f,	// (0x0007a3e9) clock_digital_separator_pane_ParamLimits

0x7e2f,	// (0x0007a3e9) clock_digital_separator_pane

0x7e3b,	// (0x0007a3f5) popup_clock_digital_window_t1

0x17e6,	// (0x00073da0) clock_digital_number_pane_g1

0x17e6,	// (0x00073da0) clock_digital_number_pane_g2

0x0001,

0xf2f9,	// (0x000818b3) clock_digital_number_pane_g

0x17e6,	// (0x00073da0) clock_digital_separator_pane_g1

0x17e6,	// (0x00073da0) clock_digital_separator_pane_g2

0x0001,

0xf2f9,	// (0x000818b3) clock_digital_separator_pane_g

0x13f7,	// (0x000739b1) bg_popup_window_pane_cp04

0x7e58,	// (0x0007a412) heading_pane_cp03

0x7e60,	// (0x0007a41a) listscroll_popup_gms_pane

0x7e68,	// (0x0007a422) grid_large_graphic_popup_pane

0x7e72,	// (0x0007a42c) listscroll_popup_gms_pane_g1

0x7e7a,	// (0x0007a434) listscroll_popup_gms_pane_g2

0x0001,

0xf396,	// (0x00081950) listscroll_popup_gms_pane_g

0x1c59,	// (0x00074213) scroll_pane_cp014

0x7e82,	// (0x0007a43c) cell_large_graphic_popup_pane_ParamLimits

0x7e82,	// (0x0007a43c) cell_large_graphic_popup_pane

0x7e99,	// (0x0007a453) cell_large_graphic_popup_pane_g1_ParamLimits

0x7e99,	// (0x0007a453) cell_large_graphic_popup_pane_g1

0x7ea5,	// (0x0007a45f) cell_large_graphic_popup_pane_g2_ParamLimits

0x7ea5,	// (0x0007a45f) cell_large_graphic_popup_pane_g2

0x7eb1,	// (0x0007a46b) cell_large_graphic_popup_pane_g3_ParamLimits

0x7eb1,	// (0x0007a46b) cell_large_graphic_popup_pane_g3

0x7ebe,	// (0x0007a478) cell_large_graphic_popup_pane_g4_ParamLimits

0x7ebe,	// (0x0007a478) cell_large_graphic_popup_pane_g4

0x0003,

0xf39b,	// (0x00081955) cell_large_graphic_popup_pane_g_ParamLimits

0xf39b,	// (0x00081955) cell_large_graphic_popup_pane_g

0x7ece,	// (0x0007a488) grid_highlight_pane_cp010

0x17e6,	// (0x00073da0) bg_popup_call_pane_g1

0x7ed8,	// (0x0007a492) list_single_graphic_popup_conf_pane_ParamLimits

0x7ed8,	// (0x0007a492) list_single_graphic_popup_conf_pane

0xddcb,	// (0x00080385) list_highlight_pane_cp01

0xddd4,	// (0x0008038e) list_single_graphic_popup_conf_pane_g1

0xdddc,	// (0x00080396) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf3a4,	// (0x0008195e) list_single_graphic_popup_conf_pane_g

0xdde4,	// (0x0008039e) list_single_graphic_popup_conf_pane_t1

0xddf2,	// (0x000803ac) linegrid_cams_pane_g1

0x7eeb,	// (0x0007a4a5) linegrid_cams_pane_g2

0x18f1,	// (0x00073eab) linegrid_cams_pane_g3

0xddfb,	// (0x000803b5) linegrid_cams_pane_g4

0x7ef4,	// (0x0007a4ae) linegrid_cams_pane_g5

0x7efd,	// (0x0007a4b7) linegrid_cams_pane_g6

0x1986,	// (0x00073f40) linegrid_cams_pane_g7

0x0006,

0xf3a9,	// (0x00081963) linegrid_cams_pane_g

0xde04,	// (0x000803be) popup_clock_analogue_window

0xde04,	// (0x000803be) popup_clock_digital_window

0x13f7,	// (0x000739b1) popup_phob_thumbnail_window

0x17e6,	// (0x00073da0) call_video_uplink_pane_g1

0xde0d,	// (0x000803c7) call_video_uplink_pane_g2

0x0001,

0xf3b8,	// (0x00081972) call_video_uplink_pane_g

0x1953,	// (0x00073f0d) video_uplink_pane

0xde15,	// (0x000803cf) mce_image_pane_g1

0x7f06,	// (0x0007a4c0) mce_image_pane_g2

0x7f0e,	// (0x0007a4c8) mce_image_pane_g3

0x7f16,	// (0x0007a4d0) mce_image_pane_g4

0x7f1e,	// (0x0007a4d8) mce_image_pane_g5

0x0004,

0xf3bd,	// (0x00081977) mce_image_pane_g

0xde1f,	// (0x000803d9) control_top_pane_stacon_cp01_ParamLimits

0xde1f,	// (0x000803d9) control_top_pane_stacon_cp01

0xde2f,	// (0x000803e9) uni_indicator_pane_stacon_cp01_ParamLimits

0xde2f,	// (0x000803e9) uni_indicator_pane_stacon_cp01

0xde40,	// (0x000803fa) bg_popup_sub_pane_cp03

0xde4a,	// (0x00080404) chi_dic_find_pane

0x7f26,	// (0x0007a4e0) listscroll_chi_dic_pane

0xde52,	// (0x0008040c) main_pane_chidic_g1

0xde5a,	// (0x00080414) chi_dic_find_pane_t1

0xde68,	// (0x00080422) find_chidic_pane

0xde71,	// (0x0008042b) chi_dic_list_pane_ParamLimits

0xde71,	// (0x0008042b) chi_dic_list_pane

0xde82,	// (0x0008043c) scroll_pane_cp020

0xde8a,	// (0x00080444) find_chidic_pane_t1

0x13f7,	// (0x000739b1) input_focus_pane_cp06

0x7f38,	// (0x0007a4f2) list_chi_dic_pane_ParamLimits

0x7f38,	// (0x0007a4f2) list_chi_dic_pane

0x7f4b,	// (0x0007a505) list_chi_dic_pane_t1_ParamLimits

0x7f4b,	// (0x0007a505) list_chi_dic_pane_t1

0x13f7,	// (0x000739b1) list_highlight_pane_cp020

0xde99,	// (0x00080453) bg_cale_heading_pane_g1

0x7f5e,	// (0x0007a518) bg_cale_heading_pane_g2

0x7f66,	// (0x0007a520) bg_cale_heading_pane_g3

0x7f6e,	// (0x0007a528) bg_cale_heading_pane_g4

0x7f76,	// (0x0007a530) bg_cale_heading_pane_g5

0x7f7e,	// (0x0007a538) bg_cale_heading_pane_g6

0x7f86,	// (0x0007a540) bg_cale_heading_pane_g7

0x7f8e,	// (0x0007a548) bg_cale_heading_pane_g8

0x7f96,	// (0x0007a550) bg_cale_heading_pane_g9

0x0008,

0xf3c8,	// (0x00081982) bg_cale_heading_pane_g

0xde99,	// (0x00080453) bg_cale_side_pane_g1

0x7f9e,	// (0x0007a558) bg_cale_side_pane_g2

0x7fa6,	// (0x0007a560) bg_cale_side_pane_g3

0x7fae,	// (0x0007a568) bg_cale_side_pane_g4

0x7fb6,	// (0x0007a570) bg_cale_side_pane_g5

0x7fbe,	// (0x0007a578) bg_cale_side_pane_g6

0x7fc6,	// (0x0007a580) bg_cale_side_pane_g7

0x7fce,	// (0x0007a588) bg_cale_side_pane_g8

0x7fd6,	// (0x0007a590) bg_cale_side_pane_g9

0x0008,

0xf3db,	// (0x00081995) bg_cale_side_pane_g

0x7fde,	// (0x0007a598) popup_call_status_window_ParamLimits

0x7fde,	// (0x0007a598) popup_call_status_window

0xdea1,	// (0x0008045b) stacon_top_pane

0xdea9,	// (0x00080463) status_pane_ParamLimits

0xdea9,	// (0x00080463) status_pane

0xdec3,	// (0x0008047d) status_small_pane

0xdecb,	// (0x00080485) control_pane

0x13f7,	// (0x000739b1) stacon_bottom_pane

0xded3,	// (0x0008048d) list_single_mce_smart_pane_t1_ParamLimits

0xded3,	// (0x0008048d) list_single_mce_smart_pane_t1

0xdee6,	// (0x000804a0) list_single_mce_smart_pane_t2_ParamLimits

0xdee6,	// (0x000804a0) list_single_mce_smart_pane_t2

0x0001,

0xf3ee,	// (0x000819a8) list_single_mce_smart_pane_t_ParamLimits

0xf3ee,	// (0x000819a8) list_single_mce_smart_pane_t

0x7fed,	// (0x0007a5a7) compass_pane

0x7ff6,	// (0x0007a5b0) main_location2_pane_t1

0x800c,	// (0x0007a5c6) main_location2_pane_t2

0x8022,	// (0x0007a5dc) main_location2_pane_t3

0x0003,

0xf3f3,	// (0x000819ad) main_location2_pane_t

0xdf0e,	// (0x000804c8) compass_pane_g1_ParamLimits

0xdf0e,	// (0x000804c8) compass_pane_g1

0x806a,	// (0x0007a624) compass_pane_t1

0x8079,	// (0x0007a633) compass_pane_t2

0x0005,

0xf3fc,	// (0x000819b6) compass_pane_t

0x80c0,	// (0x0007a67a) text_secondary_cp61

0xdf3b,	// (0x000804f5) navi_pane_cams_g5

0xdf7c,	// (0x00080536) navi_pane_im_t1

0xdf8a,	// (0x00080544) navi_pane_mp_g1_ParamLimits

0xdf8a,	// (0x00080544) navi_pane_mp_g1

0xdf9e,	// (0x00080558) navi_pane_mp_g2_ParamLimits

0xdf9e,	// (0x00080558) navi_pane_mp_g2

0xdfaa,	// (0x00080564) navi_pane_mp_g3_ParamLimits

0xdfaa,	// (0x00080564) navi_pane_mp_g3

0x0002,

0xf410,	// (0x000819ca) navi_pane_mp_g_ParamLimits

0xf410,	// (0x000819ca) navi_pane_mp_g

0xdfb6,	// (0x00080570) navi_pane_mp_t1

0xdfc4,	// (0x0008057e) navi_pane_mp_t2

0x0002,

0xf417,	// (0x000819d1) navi_pane_mp_t

0xe031,	// (0x000805eb) navi_pane_vt_g1

0xdfb6,	// (0x00080570) navi_pane_vt_t1

0xe039,	// (0x000805f3) navi_slider_pane

0xe041,	// (0x000805fb) zooming_pane

0xe049,	// (0x00080603) navi_slider_pane_g1

0x8137,	// (0x0007a6f1) navi_slider_pane_g2

0x0006,

0xf41e,	// (0x000819d8) navi_slider_pane_g

0xe06d,	// (0x00080627) aid_levels_zoom

0xe075,	// (0x0008062f) zooming_pane_g1

0xe07d,	// (0x00080637) zooming_pane_g2

0xe07d,	// (0x00080637) zooming_pane_g3

0x0002,

0xf42d,	// (0x000819e7) zooming_pane_g

0xe085,	// (0x0008063f) level_10_zoom

0xe08e,	// (0x00080648) level_11_zoom

0xe097,	// (0x00080651) level_1_zoom

0xe0a0,	// (0x0008065a) level_2_zoom

0xe0a9,	// (0x00080663) level_3_zoom

0xe0b2,	// (0x0008066c) level_4_zoom

0xe0bb,	// (0x00080675) level_5_zoom

0xe0c4,	// (0x0008067e) level_6_zoom

0xe0cd,	// (0x00080687) level_7_zoom

0xe0d6,	// (0x00080690) level_8_zoom

0xe0df,	// (0x00080699) level_9_zoom

0xe0f0,	// (0x000806aa) popup_phob_thumbnail_window_g1

0xe0f8,	// (0x000806b2) popup_phob_thumbnail_window_g2

0x0001,

0xf434,	// (0x000819ee) popup_phob_thumbnail_window_g

0x2677,	// (0x00074c31) level_1_location

0x267f,	// (0x00074c39) level_2_location

0x2687,	// (0x00074c41) level_3_location

0x268f,	// (0x00074c49) level_4_location

0xe041,	// (0x000805fb) level_5_location

0x8149,	// (0x0007a703) mce_icon_pane_g1

0x8151,	// (0x0007a70b) mce_icon_pane_g2

0x0001,

0xf439,	// (0x000819f3) mce_icon_pane_g

0x8159,	// (0x0007a713) main_mup_pane_g1_ParamLimits

0x8159,	// (0x0007a713) main_mup_pane_g1

0x8171,	// (0x0007a72b) main_mup_pane_g2_ParamLimits

0x8171,	// (0x0007a72b) main_mup_pane_g2

0x818d,	// (0x0007a747) main_mup_pane_g3_ParamLimits

0x818d,	// (0x0007a747) main_mup_pane_g3

0x81a9,	// (0x0007a763) main_mup_pane_g4_ParamLimits

0x81a9,	// (0x0007a763) main_mup_pane_g4

0x81c5,	// (0x0007a77f) main_mup_pane_g5_ParamLimits

0x81c5,	// (0x0007a77f) main_mup_pane_g5

0x81e2,	// (0x0007a79c) main_mup_pane_g6_ParamLimits

0x81e2,	// (0x0007a79c) main_mup_pane_g6

0x81fe,	// (0x0007a7b8) main_mup_pane_g7_ParamLimits

0x81fe,	// (0x0007a7b8) main_mup_pane_g7

0x821a,	// (0x0007a7d4) main_mup_pane_g8_ParamLimits

0x821a,	// (0x0007a7d4) main_mup_pane_g8

0x8236,	// (0x0007a7f0) main_mup_pane_g9_ParamLimits

0x8236,	// (0x0007a7f0) main_mup_pane_g9

0x824d,	// (0x0007a807) main_mup_pane_g10_ParamLimits

0x824d,	// (0x0007a807) main_mup_pane_g10

0x8264,	// (0x0007a81e) main_mup_pane_g11_ParamLimits

0x8264,	// (0x0007a81e) main_mup_pane_g11

0x8278,	// (0x0007a832) main_mup_pane_g12_ParamLimits

0x8278,	// (0x0007a832) main_mup_pane_g12

0x8284,	// (0x0007a83e) main_mup_pane_g13_ParamLimits

0x8284,	// (0x0007a83e) main_mup_pane_g13

0x000c,

0xf43e,	// (0x000819f8) main_mup_pane_g_ParamLimits

0xf43e,	// (0x000819f8) main_mup_pane_g

0x8298,	// (0x0007a852) main_mup_pane_t1_ParamLimits

0x8298,	// (0x0007a852) main_mup_pane_t1

0x82b5,	// (0x0007a86f) main_mup_pane_t2_ParamLimits

0x82b5,	// (0x0007a86f) main_mup_pane_t2

0x82cf,	// (0x0007a889) main_mup_pane_t3_ParamLimits

0x82cf,	// (0x0007a889) main_mup_pane_t3

0x82e9,	// (0x0007a8a3) main_mup_pane_t4_ParamLimits

0x82e9,	// (0x0007a8a3) main_mup_pane_t4

0x82fb,	// (0x0007a8b5) main_mup_pane_t5_ParamLimits

0x82fb,	// (0x0007a8b5) main_mup_pane_t5

0x830d,	// (0x0007a8c7) main_mup_pane_t6_ParamLimits

0x830d,	// (0x0007a8c7) main_mup_pane_t6

0x0005,

0xf459,	// (0x00081a13) main_mup_pane_t_ParamLimits

0xf459,	// (0x00081a13) main_mup_pane_t

0x8323,	// (0x0007a8dd) mup_progress_pane_ParamLimits

0x8323,	// (0x0007a8dd) mup_progress_pane

0x832f,	// (0x0007a8e9) mup_visualizer_pane_ParamLimits

0x832f,	// (0x0007a8e9) mup_visualizer_pane

0x835d,	// (0x0007a917) mup_volume_pane_ParamLimits

0x835d,	// (0x0007a917) mup_volume_pane

0x22ce,	// (0x00074888) mup_visualizer_pane_g1_ParamLimits

0x22ce,	// (0x00074888) mup_visualizer_pane_g1

0x22ce,	// (0x00074888) mup_visualizer_pane_g2_ParamLimits

0x22ce,	// (0x00074888) mup_visualizer_pane_g2

0xdf0e,	// (0x000804c8) mup_visualizer_pane_g3_ParamLimits

0xdf0e,	// (0x000804c8) mup_visualizer_pane_g3

0x0002,

0xf466,	// (0x00081a20) mup_visualizer_pane_g_ParamLimits

0xf466,	// (0x00081a20) mup_visualizer_pane_g

0x17e6,	// (0x00073da0) mup_volume_pane_g1

0xe108,	// (0x000806c2) mup_volume_pane_g2

0x0001,

0xf46d,	// (0x00081a27) mup_volume_pane_g

0x17e6,	// (0x00073da0) mup_progress_pane_g1

0xe111,	// (0x000806cb) mup_progress_pane_g2

0xe11a,	// (0x000806d4) mup_progress_pane_g3

0x0002,

0xf472,	// (0x00081a2c) mup_progress_pane_g

0x13f7,	// (0x000739b1) bg_popup_window_pane_cp05

0xe123,	// (0x000806dd) heading_pane_cp02_ParamLimits

0xe123,	// (0x000806dd) heading_pane_cp02

0xe13d,	// (0x000806f7) list_popup_blid_pane

0xe145,	// (0x000806ff) list_blid_sat_info_pane_ParamLimits

0xe145,	// (0x000806ff) list_blid_sat_info_pane

0xe158,	// (0x00080712) list_blid_sat_info_pane_g1

0xe160,	// (0x0008071a) list_blid_sat_info_pane_t1

0x8450,	// (0x0007aa0a) mup_equalizer_pane_ParamLimits

0x8450,	// (0x0007aa0a) mup_equalizer_pane

0x8469,	// (0x0007aa23) mup_equalizer_pane_cp1_ParamLimits

0x8469,	// (0x0007aa23) mup_equalizer_pane_cp1

0x8482,	// (0x0007aa3c) mup_equalizer_pane_cp2_ParamLimits

0x8482,	// (0x0007aa3c) mup_equalizer_pane_cp2

0x849b,	// (0x0007aa55) mup_equalizer_pane_cp3_ParamLimits

0x849b,	// (0x0007aa55) mup_equalizer_pane_cp3

0x84b4,	// (0x0007aa6e) mup_equalizer_pane_cp4_ParamLimits

0x84b4,	// (0x0007aa6e) mup_equalizer_pane_cp4

0x84cd,	// (0x0007aa87) mup_equalizer_pane_cp5

0x84df,	// (0x0007aa99) mup_equalizer_pane_cp6

0x84f1,	// (0x0007aaab) mup_equalizer_pane_cp7

0x2555,	// (0x00074b0f) bg_popup_call_poc_act_pane_g9

0x255d,	// (0x00074b17) bg_popup_call_poc_act_pane_g10

0x2565,	// (0x00074b1f) bg_popup_call_poc_act_pane_g11

0x000a,

0x1652,	// (0x00073c0c) mup_scale_pane

0x17e6,	// (0x00073da0) mup_scale_pane_g1

0xe16e,	// (0x00080728) mup_scale_pane_g2

0x0006,

0xf48e,	// (0x00081a48) mup_scale_pane_g

0xe192,	// (0x0008074c) msg_data_pane

0xe19a,	// (0x00080754) scroll_pane_cp017

0x8515,	// (0x0007aacf) bg_list_pane_cp04_ParamLimits

0x8515,	// (0x0007aacf) bg_list_pane_cp04

0xe1a2,	// (0x0008075c) msg_data_pane_g1

0x7f06,	// (0x0007a4c0) msg_data_pane_g2

0x7f0e,	// (0x0007a4c8) msg_data_pane_g3

0x852d,	// (0x0007aae7) msg_data_pane_g4

0x7f1e,	// (0x0007a4d8) msg_data_pane_g5

0x8149,	// (0x0007a703) msg_data_pane_g6

0x8535,	// (0x0007aaef) msg_data_pane_g7

0x0006,

0xf49d,	// (0x00081a57) msg_data_pane_g

0x853d,	// (0x0007aaf7) msg_text_pane_ParamLimits

0x853d,	// (0x0007aaf7) msg_text_pane

0x8563,	// (0x0007ab1d) qrid_highlight_pane_cp011_ParamLimits

0x8563,	// (0x0007ab1d) qrid_highlight_pane_cp011

0x13f7,	// (0x000739b1) msg_body_pane

0x13f7,	// (0x000739b1) msg_header_pane

0xe1b3,	// (0x0008076d) input_focus_pane_cp07

0x8585,	// (0x0007ab3f) msg_header_pane_t1_ParamLimits

0x8585,	// (0x0007ab3f) msg_header_pane_t1

0x8597,	// (0x0007ab51) msg_header_pane_t2_ParamLimits

0x8597,	// (0x0007ab51) msg_header_pane_t2

0x0001,

0xf4b1,	// (0x00081a6b) msg_header_pane_t_ParamLimits

0xf4b1,	// (0x00081a6b) msg_header_pane_t

0xe1c8,	// (0x00080782) msg_body_pane_g1

0x85a9,	// (0x0007ab63) msg_body_pane_t1_ParamLimits

0x85a9,	// (0x0007ab63) msg_body_pane_t1

0x85d4,	// (0x0007ab8e) msg_body_pane_t2_ParamLimits

0x85d4,	// (0x0007ab8e) msg_body_pane_t2

0x85e6,	// (0x0007aba0) msg_body_pane_t3_ParamLimits

0x85e6,	// (0x0007aba0) msg_body_pane_t3

0x0002,

0xf4b6,	// (0x00081a70) msg_body_pane_t_ParamLimits

0xf4b6,	// (0x00081a70) msg_body_pane_t

0x8646,	// (0x0007ac00) main_viewer_pane_g1_ParamLimits

0x8646,	// (0x0007ac00) main_viewer_pane_g1

0x8652,	// (0x0007ac0c) main_viewer_pane_g2_ParamLimits

0x8652,	// (0x0007ac0c) main_viewer_pane_g2

0x865e,	// (0x0007ac18) main_viewer_pane_g3_ParamLimits

0x865e,	// (0x0007ac18) main_viewer_pane_g3

0x866d,	// (0x0007ac27) main_viewer_pane_g4_ParamLimits

0x866d,	// (0x0007ac27) main_viewer_pane_g4

0x867c,	// (0x0007ac36) main_viewer_pane_g5_ParamLimits

0x867c,	// (0x0007ac36) main_viewer_pane_g5

0x867c,	// (0x0007ac36) main_viewer_pane_g7_ParamLimits

0x867c,	// (0x0007ac36) main_viewer_pane_g7

0x868e,	// (0x0007ac48) main_viewer_pane_g8_ParamLimits

0x868e,	// (0x0007ac48) main_viewer_pane_g8

0x0007,

0xf4c6,	// (0x00081a80) main_viewer_pane_g_ParamLimits

0xf4c6,	// (0x00081a80) main_viewer_pane_g

0xe1d0,	// (0x0008078a) viewer_content_pane_ParamLimits

0xe1d0,	// (0x0008078a) viewer_content_pane

0x86be,	// (0x0007ac78) main_postcard_pane_g1_ParamLimits

0x86be,	// (0x0007ac78) main_postcard_pane_g1

0x86ca,	// (0x0007ac84) main_postcard_pane_g2_ParamLimits

0x86ca,	// (0x0007ac84) main_postcard_pane_g2

0x86d6,	// (0x0007ac90) main_postcard_pane_g3_ParamLimits

0x86d6,	// (0x0007ac90) main_postcard_pane_g3

0x0005,

0xf4d7,	// (0x00081a91) main_postcard_pane_g_ParamLimits

0xf4d7,	// (0x00081a91) main_postcard_pane_g

0x86e2,	// (0x0007ac9c) main_postcard_pane_g4

0x2793,	// (0x00074d4d) smil_status_volume_pane_g2

0x8706,	// (0x0007acc0) postcard_pane_ParamLimits

0x8706,	// (0x0007acc0) postcard_pane

0x22ce,	// (0x00074888) postcard_pane_g1_ParamLimits

0x22ce,	// (0x00074888) postcard_pane_g1

0x8736,	// (0x0007acf0) postcard_pane_g2_ParamLimits

0x8736,	// (0x0007acf0) postcard_pane_g2

0x8742,	// (0x0007acfc) postcard_pane_g3_ParamLimits

0x8742,	// (0x0007acfc) postcard_pane_g3

0xe1de,	// (0x00080798) postcard_pane_g4_ParamLimits

0xe1de,	// (0x00080798) postcard_pane_g4

0x874e,	// (0x0007ad08) postcard_pane_g5_ParamLimits

0x874e,	// (0x0007ad08) postcard_pane_g5

0x875a,	// (0x0007ad14) postcard_pane_g6_ParamLimits

0x875a,	// (0x0007ad14) postcard_pane_g6

0xe1ec,	// (0x000807a6) postcard_pane_g7_ParamLimits

0xe1ec,	// (0x000807a6) postcard_pane_g7

0x0006,

0xf4e4,	// (0x00081a9e) postcard_pane_g_ParamLimits

0xf4e4,	// (0x00081a9e) postcard_pane_g

0x8766,	// (0x0007ad20) main_mp2_pane_g1_ParamLimits

0x8766,	// (0x0007ad20) main_mp2_pane_g1

0x8772,	// (0x0007ad2c) main_mp2_pane_g2_ParamLimits

0x8772,	// (0x0007ad2c) main_mp2_pane_g2

0x877e,	// (0x0007ad38) main_mp2_pane_g3_ParamLimits

0x877e,	// (0x0007ad38) main_mp2_pane_g3

0x0002,

0xf4f3,	// (0x00081aad) main_mp2_pane_g_ParamLimits

0xf4f3,	// (0x00081aad) main_mp2_pane_g

0x878a,	// (0x0007ad44) main_mp2_pane_t1_ParamLimits

0x878a,	// (0x0007ad44) main_mp2_pane_t1

0x879f,	// (0x0007ad59) main_mp2_pane_t2_ParamLimits

0x879f,	// (0x0007ad59) main_mp2_pane_t2

0x87b1,	// (0x0007ad6b) main_mp2_pane_t3_ParamLimits

0x87b1,	// (0x0007ad6b) main_mp2_pane_t3

0x0002,

0xf4fa,	// (0x00081ab4) main_mp2_pane_t_ParamLimits

0xf4fa,	// (0x00081ab4) main_mp2_pane_t

0xe1fa,	// (0x000807b4) pec_content_pane_ParamLimits

0xe1fa,	// (0x000807b4) pec_content_pane

0x1c59,	// (0x00074213) scroll_pane_cp015

0xe20c,	// (0x000807c6) pec_attribute_pane_ParamLimits

0xe20c,	// (0x000807c6) pec_attribute_pane

0x87c3,	// (0x0007ad7d) pec_content_pane_g1_ParamLimits

0x87c3,	// (0x0007ad7d) pec_content_pane_g1

0xe21c,	// (0x000807d6) pec_content_pane_t1_ParamLimits

0xe21c,	// (0x000807d6) pec_content_pane_t1

0xe22e,	// (0x000807e8) pec_content_pane_t2_ParamLimits

0xe22e,	// (0x000807e8) pec_content_pane_t2

0x0001,

0xf501,	// (0x00081abb) pec_content_pane_t_ParamLimits

0xf501,	// (0x00081abb) pec_content_pane_t

0x87cf,	// (0x0007ad89) list_single_graphic_pane_cp01_ParamLimits

0x87cf,	// (0x0007ad89) list_single_graphic_pane_cp01

0x1652,	// (0x00073c0c) bg_popup_sub_pane_cp04

0xe240,	// (0x000807fa) popup_mup_playback_window_g1

0xe24c,	// (0x00080806) popup_mup_playback_window_t1

0xe261,	// (0x0008081b) popup_mup_playback_window_t2

0x0001,

0xf506,	// (0x00081ac0) popup_mup_playback_window_t

0xe298,	// (0x00080852) main_image_pane_g1_ParamLimits

0xe298,	// (0x00080852) main_image_pane_g1

0xe2db,	// (0x00080895) scroll_pane_cp018_ParamLimits

0xe2db,	// (0x00080895) scroll_pane_cp018

0xe2f3,	// (0x000808ad) scroll_pane_cp016_ParamLimits

0xe2f3,	// (0x000808ad) scroll_pane_cp016

0x8854,	// (0x0007ae0e) smil2_image_pane_ParamLimits

0x8854,	// (0x0007ae0e) smil2_image_pane

0x887c,	// (0x0007ae36) smil2_root_pane_ParamLimits

0x887c,	// (0x0007ae36) smil2_root_pane

0x88a8,	// (0x0007ae62) smil2_text_pane_ParamLimits

0x88a8,	// (0x0007ae62) smil2_text_pane

0x13f7,	// (0x000739b1) bg_list_pane_cp06

0xe327,	// (0x000808e1) grid_radio_pane

0x13f7,	// (0x000739b1) bg_popup_window_pane_cp06

0xe32f,	// (0x000808e9) main_fmradio_pane_t1

0x7e58,	// (0x0007a412) heading_pane_cp04

0xe33d,	// (0x000808f7) main_fmradio_pane_t2

0x25ad,	// (0x00074b67) popup_cale_lunar_info_window_g1

0xe34b,	// (0x00080905) main_fmradio_pane_t3

0x25b5,	// (0x00074b6f) popup_cale_lunar_info_window_g2

0xe359,	// (0x00080913) main_fmradio_pane_t4

0x0001,

0xe367,	// (0x00080921) main_fmradio_pane_t5

0x0004,

0xf5f4,	// (0x00081bae) popup_cale_lunar_info_window_g

0xf51b,	// (0x00081ad5) main_fmradio_pane_t

0xe375,	// (0x0008092f) wait_bar_pane_cp03

0x22e4,	// (0x0007489e) cell_fmradio_pane_ParamLimits

0x22e4,	// (0x0007489e) cell_fmradio_pane

0xe1ec,	// (0x000807a6) cell_fmradio_pane_g1_ParamLimits

0xe1ec,	// (0x000807a6) cell_fmradio_pane_g1

0x13f7,	// (0x000739b1) grid_highlight_pane_cp011

0xe37d,	// (0x00080937) poc_content_pane_ParamLimits

0xe37d,	// (0x00080937) poc_content_pane

0xe390,	// (0x0008094a) scroll_pane_cp019

0x88e4,	// (0x0007ae9e) popup_call_poc_act_window_ParamLimits

0x88e4,	// (0x0007ae9e) popup_call_poc_act_window

0x88f1,	// (0x0007aeab) popup_call_poc_inact_window_ParamLimits

0x88f1,	// (0x0007aeab) popup_call_poc_inact_window

0xf5b8,	// (0x00081b72) bg_popup_call_poc_act_pane_g

0x256d,	// (0x00074b27) bg_popup_call_poc_inact_pane_g1

0x2575,	// (0x00074b2f) bg_popup_call_poc_inact_pane_g2

0xe398,	// (0x00080952) popup_call_poc_act_window_g2

0x257d,	// (0x00074b37) bg_popup_call_poc_inact_pane_g3

0x24fd,	// (0x00074ab7) bg_popup_call_poc_inact_pane_g4

0x2585,	// (0x00074b3f) bg_popup_call_poc_inact_pane_g5

0xe3a0,	// (0x0008095a) popup_call_poc_act_window_t1_ParamLimits

0xe3a0,	// (0x0008095a) popup_call_poc_act_window_t1

0xe3c8,	// (0x00080982) popup_call_poc_act_window_t2_ParamLimits

0xe3c8,	// (0x00080982) popup_call_poc_act_window_t2

0xe3f0,	// (0x000809aa) popup_call_poc_act_window_t3_ParamLimits

0xe3f0,	// (0x000809aa) popup_call_poc_act_window_t3

0xe418,	// (0x000809d2) popup_call_poc_act_window_t4_ParamLimits

0xe418,	// (0x000809d2) popup_call_poc_act_window_t4

0x0003,

0xf526,	// (0x00081ae0) popup_call_poc_act_window_t_ParamLimits

0xf526,	// (0x00081ae0) popup_call_poc_act_window_t

0x258d,	// (0x00074b47) bg_popup_call_poc_inact_pane_g6

0x2595,	// (0x00074b4f) bg_popup_call_poc_inact_pane_g7

0x259d,	// (0x00074b57) bg_popup_call_poc_inact_pane_g8

0xe42a,	// (0x000809e4) popup_call_poc_inact_window_g2

0x25a5,	// (0x00074b5f) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5cf,	// (0x00081b89) bg_popup_call_poc_inact_pane_g

0xe432,	// (0x000809ec) popup_call_poc_inact_window_t1_ParamLimits

0xe432,	// (0x000809ec) popup_call_poc_inact_window_t1

0xe447,	// (0x00080a01) popup_call_poc_inact_window_t2_ParamLimits

0xe447,	// (0x00080a01) popup_call_poc_inact_window_t2

0xe45c,	// (0x00080a16) popup_call_poc_inact_window_t3_ParamLimits

0xe45c,	// (0x00080a16) popup_call_poc_inact_window_t3

0x0002,

0xf52f,	// (0x00081ae9) popup_call_poc_inact_window_t_ParamLimits

0xf52f,	// (0x00081ae9) popup_call_poc_inact_window_t

0x2719,	// (0x00074cd3) context_pane_ParamLimits

0x8dec,	// (0x0007b3a6) signal_pane_ParamLimits

0xe041,	// (0x000805fb) main_call2_pane

0x2707,	// (0x00074cc1) popup_phob_thumbnail2_window_ParamLimits

0x2707,	// (0x00074cc1) popup_phob_thumbnail2_window

0x85f8,	// (0x0007abb2) aid_hotspot_pointer_arrow_pane

0x8600,	// (0x0007abba) aid_hotspot_pointer_hand_pane

0x8ba0,	// (0x0007b15a) phob_pre_status_pane_g5

0x6e30,	// (0x000793ea) cams_zoom_pane_ParamLimits

0x6e3c,	// (0x000793f6) image_vga_pane_ParamLimits

0x6e49,	// (0x00079403) main_camera_pane_g1_ParamLimits

0x6e55,	// (0x0007940f) main_camera_pane_g2_ParamLimits

0x6e61,	// (0x0007941b) main_camera_pane_g3_ParamLimits

0x6e6d,	// (0x00079427) main_camera_pane_g4_ParamLimits

0x6e79,	// (0x00079433) main_camera_pane_g5_ParamLimits

0x6e85,	// (0x0007943f) main_camera_pane_g6_ParamLimits

0x6e91,	// (0x0007944b) main_camera_pane_g7_ParamLimits

0xf22e,	// (0x000817e8) main_camera_pane_g_ParamLimits

0x6e9d,	// (0x00079457) main_camera_pane_t1_ParamLimits

0x6eaf,	// (0x00079469) main_camera_pane_t2_ParamLimits

0xf23f,	// (0x000817f9) main_camera_pane_t_ParamLimits

0x1652,	// (0x00073c0c) bg_popup_preview_window_pane_cp01_ParamLimits

0x1652,	// (0x00073c0c) bg_popup_preview_window_pane_cp01

0xe471,	// (0x00080a2b) popup_phob_thumbnail2_window_g1_ParamLimits

0xe471,	// (0x00080a2b) popup_phob_thumbnail2_window_g1

0x13f7,	// (0x000739b1) call2_cli_visual_pane

0x890d,	// (0x0007aec7) popup_call2_audio_conf_window_ParamLimits

0x890d,	// (0x0007aec7) popup_call2_audio_conf_window

0x8920,	// (0x0007aeda) popup_call2_audio_first_window_ParamLimits

0x8920,	// (0x0007aeda) popup_call2_audio_first_window

0x899c,	// (0x0007af56) popup_call2_audio_in_window_ParamLimits

0x899c,	// (0x0007af56) popup_call2_audio_in_window

0x89cc,	// (0x0007af86) popup_call2_audio_out_window_ParamLimits

0x89cc,	// (0x0007af86) popup_call2_audio_out_window

0x8a18,	// (0x0007afd2) popup_call2_audio_second_window_ParamLimits

0x8a18,	// (0x0007afd2) popup_call2_audio_second_window

0x8a64,	// (0x0007b01e) popup_call2_audio_wait_window_ParamLimits

0x8a64,	// (0x0007b01e) popup_call2_audio_wait_window

0x13f7,	// (0x000739b1) bg_popup_call2_act_pane_cp03

0x1634,	// (0x00073bee) list_conf_pane_cp

0xe47d,	// (0x00080a37) popup_call2_audio_conf_window_t1

0x7ed8,	// (0x0007a492) list_single_graphic_popup_conf2_pane_ParamLimits

0x7ed8,	// (0x0007a492) list_single_graphic_popup_conf2_pane

0xddcb,	// (0x00080385) list_highlight_pane_cp04

0xe48b,	// (0x00080a45) list_single_graphic_popup_conf2_pane_g1

0xdddc,	// (0x00080396) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf536,	// (0x00081af0) list_single_graphic_popup_conf2_pane_g

0xe493,	// (0x00080a4d) list_single_graphic_popup_conf2_pane_t1

0xe4a1,	// (0x00080a5b) bg_popup_call2_act_pane_cp01_ParamLimits

0xe4a1,	// (0x00080a5b) bg_popup_call2_act_pane_cp01

0xe52b,	// (0x00080ae5) call_type_pane_cp05_ParamLimits

0xe52b,	// (0x00080ae5) call_type_pane_cp05

0xe57f,	// (0x00080b39) popup_call2_audio_second_window_g1_ParamLimits

0xe57f,	// (0x00080b39) popup_call2_audio_second_window_g1

0xe5d3,	// (0x00080b8d) popup_call2_audio_second_window_g2_ParamLimits

0xe5d3,	// (0x00080b8d) popup_call2_audio_second_window_g2

0x0002,

0xf53b,	// (0x00081af5) popup_call2_audio_second_window_g_ParamLimits

0xf53b,	// (0x00081af5) popup_call2_audio_second_window_g

0xe638,	// (0x00080bf2) popup_call2_audio_second_window_t1_ParamLimits

0xe638,	// (0x00080bf2) popup_call2_audio_second_window_t1

0xe6f3,	// (0x00080cad) popup_call2_audio_second_window_t2_ParamLimits

0xe6f3,	// (0x00080cad) popup_call2_audio_second_window_t2

0xe746,	// (0x00080d00) popup_call2_audio_second_window_t3_ParamLimits

0xe746,	// (0x00080d00) popup_call2_audio_second_window_t3

0x0003,

0xf542,	// (0x00081afc) popup_call2_audio_second_window_t_ParamLimits

0xf542,	// (0x00081afc) popup_call2_audio_second_window_t

0x13f7,	// (0x000739b1) bg_popup_call2_in_pane_cp02

0x1401,	// (0x000739bb) call_type_pane_cp04

0x1409,	// (0x000739c3) popup_call2_audio_wait_window_g1

0x1411,	// (0x000739cb) popup_call2_audio_wait_window_g2

0x0001,

0xf11b,	// (0x000816d5) popup_call2_audio_wait_window_g

0x1419,	// (0x000739d3) popup_call2_audio_wait_window_t3

0xe839,	// (0x00080df3) bg_popup_call2_act_pane_ParamLimits

0xe839,	// (0x00080df3) bg_popup_call2_act_pane

0xe8f9,	// (0x00080eb3) call_type_pane_cp03_ParamLimits

0xe8f9,	// (0x00080eb3) call_type_pane_cp03

0xe95d,	// (0x00080f17) popup_call2_audio_first_window_g1_ParamLimits

0xe95d,	// (0x00080f17) popup_call2_audio_first_window_g1

0xe9cd,	// (0x00080f87) popup_call2_audio_first_window_g2_ParamLimits

0xe9cd,	// (0x00080f87) popup_call2_audio_first_window_g2

0x22ce,	// (0x00074888) popup_call2_audio_first_window_g3_ParamLimits

0x22ce,	// (0x00074888) popup_call2_audio_first_window_g3

0x0004,

0xf54b,	// (0x00081b05) popup_call2_audio_first_window_g_ParamLimits

0xf54b,	// (0x00081b05) popup_call2_audio_first_window_g

0xeaab,	// (0x00081065) popup_call2_audio_first_window_t1_ParamLimits

0xeaab,	// (0x00081065) popup_call2_audio_first_window_t1

0xebae,	// (0x00081168) popup_call2_audio_first_window_t4_ParamLimits

0xebae,	// (0x00081168) popup_call2_audio_first_window_t4

0xec91,	// (0x0008124b) popup_call2_audio_first_window_t5_ParamLimits

0xec91,	// (0x0008124b) popup_call2_audio_first_window_t5

0x0003,

0xf556,	// (0x00081b10) popup_call2_audio_first_window_t_ParamLimits

0xf556,	// (0x00081b10) popup_call2_audio_first_window_t

0x164a,	// (0x00073c04) bg_popup_call2_act_pane_g1

0x25bd,	// (0x00074b77) popup_cale_lunar_info_window_t1

0x25cb,	// (0x00074b85) popup_cale_lunar_info_window_t2

0x25d9,	// (0x00074b93) popup_cale_lunar_info_window_t3

0x13f7,	// (0x000739b1) bg_popup_call2_bubble_pane

0xed92,	// (0x0008134c) bg_popup_call2_in_pane_cp01_ParamLimits

0xed92,	// (0x0008134c) bg_popup_call2_in_pane_cp01

0x10d3,	// (0x0007368d) call_type_pane_cp02

0xedda,	// (0x00081394) popup_call2_audio_out_window_g1_ParamLimits

0xedda,	// (0x00081394) popup_call2_audio_out_window_g1

0xee06,	// (0x000813c0) popup_call2_audio_out_window_g2_ParamLimits

0xee06,	// (0x000813c0) popup_call2_audio_out_window_g2

0xee2e,	// (0x000813e8) popup_call2_audio_out_window_g3_ParamLimits

0xee2e,	// (0x000813e8) popup_call2_audio_out_window_g3

0x0003,

0xf55f,	// (0x00081b19) popup_call2_audio_out_window_g_ParamLimits

0xf55f,	// (0x00081b19) popup_call2_audio_out_window_g

0xee69,	// (0x00081423) popup_call2_audio_out_window_t1_ParamLimits

0xee69,	// (0x00081423) popup_call2_audio_out_window_t1

0xeec8,	// (0x00081482) popup_call2_audio_out_window_t2_ParamLimits

0xeec8,	// (0x00081482) popup_call2_audio_out_window_t2

0xef1c,	// (0x000814d6) popup_call2_audio_out_window_t3_ParamLimits

0xef1c,	// (0x000814d6) popup_call2_audio_out_window_t3

0xef32,	// (0x000814ec) popup_call2_audio_out_window_t4_ParamLimits

0xef32,	// (0x000814ec) popup_call2_audio_out_window_t4

0xef48,	// (0x00081502) popup_call2_audio_out_window_t5_ParamLimits

0xef48,	// (0x00081502) popup_call2_audio_out_window_t5

0x0005,

0xf568,	// (0x00081b22) popup_call2_audio_out_window_t_ParamLimits

0xf568,	// (0x00081b22) popup_call2_audio_out_window_t

0xefac,	// (0x00081566) bg_popup_call2_in_pane_ParamLimits

0xefac,	// (0x00081566) bg_popup_call2_in_pane

0xf008,	// (0x000815c2) popup_call2_audio_in_window_g1_ParamLimits

0xf008,	// (0x000815c2) popup_call2_audio_in_window_g1

0xf040,	// (0x000815fa) popup_call2_audio_in_window_g2_ParamLimits

0xf040,	// (0x000815fa) popup_call2_audio_in_window_g2

0x22f7,	// (0x000748b1) popup_call2_audio_in_window_g3_ParamLimits

0x22f7,	// (0x000748b1) popup_call2_audio_in_window_g3

0x0003,

0xf575,	// (0x00081b2f) popup_call2_audio_in_window_g_ParamLimits

0xf575,	// (0x00081b2f) popup_call2_audio_in_window_g

0x234f,	// (0x00074909) popup_call2_audio_in_window_t1_ParamLimits

0x234f,	// (0x00074909) popup_call2_audio_in_window_t1

0x23cf,	// (0x00074989) popup_call2_audio_in_window_t2_ParamLimits

0x23cf,	// (0x00074989) popup_call2_audio_in_window_t2

0x244f,	// (0x00074a09) popup_call2_audio_in_window_t3_ParamLimits

0x244f,	// (0x00074a09) popup_call2_audio_in_window_t3

0x2469,	// (0x00074a23) popup_call2_audio_in_window_t4_ParamLimits

0x2469,	// (0x00074a23) popup_call2_audio_in_window_t4

0x247b,	// (0x00074a35) popup_call2_audio_in_window_t5_ParamLimits

0x247b,	// (0x00074a35) popup_call2_audio_in_window_t5

0x2490,	// (0x00074a4a) popup_call2_audio_in_window_t6_ParamLimits

0x2490,	// (0x00074a4a) popup_call2_audio_in_window_t6

0x0005,

0xf57e,	// (0x00081b38) popup_call2_audio_in_window_t_ParamLimits

0xf57e,	// (0x00081b38) popup_call2_audio_in_window_t

0x164a,	// (0x00073c04) bg_popup_call2_in_pane_g1

0x25e7,	// (0x00074ba1) popup_cale_lunar_info_window_t4

0x0003,

0xf5f9,	// (0x00081bb3) popup_cale_lunar_info_window_t

0x1652,	// (0x00073c0c) bg_popup_call2_rect_pane_ParamLimits

0x1652,	// (0x00073c0c) bg_popup_call2_rect_pane

0x13f7,	// (0x000739b1) call2_cli_visual_graphic_pane

0x13f7,	// (0x000739b1) call2_cli_visual_text_pane

0x8e71,	// (0x0007b42b) smil_status_volume_pane_g3

0x0002,

0x17e6,	// (0x00073da0) call2_cli_visual_graphic_pane_g1

0x17e6,	// (0x00073da0) call2_cli_visual_graphic_pane_g2

0x17e6,	// (0x00073da0) call2_cli_visual_graphic_pane_g3

0x0002,

0xf58b,	// (0x00081b45) call2_cli_visual_graphic_pane_g

0x24a5,	// (0x00074a5f) bg_popup_call2_rect_pane_g1

0x188e,	// (0x00073e48) bg_popup_call2_rect_pane_g2

0x24ad,	// (0x00074a67) bg_popup_call2_rect_pane_g3

0x24b5,	// (0x00074a6f) bg_popup_call2_rect_pane_g4

0x24bd,	// (0x00074a77) bg_popup_call2_rect_pane_g5

0x24c5,	// (0x00074a7f) bg_popup_call2_rect_pane_g6

0x24cd,	// (0x00074a87) bg_popup_call2_rect_pane_g7

0x24d5,	// (0x00074a8f) bg_popup_call2_rect_pane_g8

0x24dd,	// (0x00074a97) bg_popup_call2_rect_pane_g9

0x0008,

0xf592,	// (0x00081b4c) bg_popup_call2_rect_pane_g

0x24e5,	// (0x00074a9f) bg_popup_call2_bubble_pane_g1

0x24ed,	// (0x00074aa7) bg_popup_call2_bubble_pane_g2

0x24f5,	// (0x00074aaf) bg_popup_call2_bubble_pane_g3

0x24fd,	// (0x00074ab7) bg_popup_call2_bubble_pane_g4

0x2505,	// (0x00074abf) bg_popup_call2_bubble_pane_g5

0x250d,	// (0x00074ac7) bg_popup_call2_bubble_pane_g6

0x2515,	// (0x00074acf) bg_popup_call2_bubble_pane_g7

0x251d,	// (0x00074ad7) bg_popup_call2_bubble_pane_g8

0x2525,	// (0x00074adf) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5a5,	// (0x00081b5f) bg_popup_call2_bubble_pane_g

0x697d,	// (0x00078f37) aid_cale_week_size_cell_pane

0x6ec1,	// (0x0007947b) aid_cams_cif_uncrop_pane_ParamLimits

0x6ec1,	// (0x0007947b) aid_cams_cif_uncrop_pane

0x7019,	// (0x000795d3) aid_cams_size_cell_ParamLimits

0x7019,	// (0x000795d3) aid_cams_size_cell

0x7025,	// (0x000795df) grid_cams_pane_ParamLimits

0x7031,	// (0x000795eb) linegrid_cams_pane_ParamLimits

0x7140,	// (0x000796fa) call_video_pane_t1

0x715d,	// (0x00079717) call_video_pane_t2

0x0001,

0xf292,	// (0x0008184c) call_video_pane_t

0x753f,	// (0x00079af9) aid_cale_month_size_cell_pane_ParamLimits

0x753f,	// (0x00079af9) aid_cale_month_size_cell_pane

0xf642,	// (0x00081bfc) smil_status_volume_pane_g

0x8e7e,	// (0x0007b438) volume_smil_pane_ParamLimits

0x0f9d,	// (0x00073557) aid_popup2_width_pane

0x68a0,	// (0x00078e5a) cell_qdial_pane_g4_ParamLimits

0x68a0,	// (0x00078e5a) cell_qdial_pane_g4

0x804a,	// (0x0007a604) aid_blid_cardinal_pane_ParamLimits

0x8056,	// (0x0007a610) aid_blid_destination_pane_ParamLimits

0x8056,	// (0x0007a610) aid_blid_destination_pane

0x1652,	// (0x00073c0c) bg_popup_call_poc_act_pane_ParamLimits

0x1652,	// (0x00073c0c) bg_popup_call_poc_act_pane

0x1652,	// (0x00073c0c) bg_popup_call_poc_inact_pane_ParamLimits

0x1652,	// (0x00073c0c) bg_popup_call_poc_inact_pane

0x252d,	// (0x00074ae7) bg_popup_call_poc_act_pane_g1

0x2535,	// (0x00074aef) bg_popup_call_poc_act_pane_g2

0x253d,	// (0x00074af7) bg_popup_call_poc_act_pane_g3

0x24fd,	// (0x00074ab7) bg_popup_call_poc_act_pane_g4

0x2505,	// (0x00074abf) bg_popup_call_poc_act_pane_g5

0x2545,	// (0x00074aff) bg_popup_call_poc_act_pane_g6

0x2515,	// (0x00074acf) bg_popup_call_poc_act_pane_g7

0x254d,	// (0x00074b07) bg_popup_call_poc_act_pane_g8

0x13f7,	// (0x000739b1) main_usb_pane

0x26e6,	// (0x00074ca0) popup_cale_lunar_info_window

0x73e2,	// (0x0007999c) im_reading_pane_t1_ParamLimits

0x1ba2,	// (0x0007415c) list_im_pane_ParamLimits

0x1bb3,	// (0x0007416d) scroll_pane_cp07_ParamLimits

0x13f7,	// (0x000739b1) grid_highlight_pane_cp012

0x1652,	// (0x00073c0c) mup_scale_pane_ParamLimits

0x22ce,	// (0x00074888) main_usb_pane_g1_ParamLimits

0x22ce,	// (0x00074888) main_usb_pane_g1

0x8ac5,	// (0x0007b07f) main_usb_pane_g2_ParamLimits

0x8ac5,	// (0x0007b07f) main_usb_pane_g2

0x0001,

0xf5e2,	// (0x00081b9c) main_usb_pane_g_ParamLimits

0xf5e2,	// (0x00081b9c) main_usb_pane_g

0x8ad1,	// (0x0007b08b) main_usb_pane_t1_ParamLimits

0x8ad1,	// (0x0007b08b) main_usb_pane_t1

0x8ae3,	// (0x0007b09d) main_usb_pane_t2_ParamLimits

0x8ae3,	// (0x0007b09d) main_usb_pane_t2

0x8af5,	// (0x0007b0af) main_usb_pane_t3_ParamLimits

0x8af5,	// (0x0007b0af) main_usb_pane_t3

0x8b07,	// (0x0007b0c1) main_usb_pane_t4_ParamLimits

0x8b07,	// (0x0007b0c1) main_usb_pane_t4

0x8b19,	// (0x0007b0d3) main_usb_pane_t5_ParamLimits

0x8b19,	// (0x0007b0d3) main_usb_pane_t5

0x8b2b,	// (0x0007b0e5) main_usb_pane_t6_ParamLimits

0x8b2b,	// (0x0007b0e5) main_usb_pane_t6

0x0005,

0xf5e7,	// (0x00081ba1) main_usb_pane_t_ParamLimits

0xdf05,	// (0x000804bf) aid_text_placing

0x7ff6,	// (0x0007a5b0) main_location2_pane_t1_ParamLimits

0x800c,	// (0x0007a5c6) main_location2_pane_t2_ParamLimits

0x8022,	// (0x0007a5dc) main_location2_pane_t3_ParamLimits

0x8038,	// (0x0007a5f2) main_location2_pane_t4_ParamLimits

0x8038,	// (0x0007a5f2) main_location2_pane_t4

0xf3f3,	// (0x000819ad) main_location2_pane_t_ParamLimits

0x168e,	// (0x00073c48) find_pinb_pane_g2_ParamLimits

0x168e,	// (0x00073c48) find_pinb_pane_g2

0x0001,

0xf141,	// (0x000816fb) find_pinb_pane_g_ParamLimits

0xf141,	// (0x000816fb) find_pinb_pane_g

0x169a,	// (0x00073c54) find_pinb_pane_t1_ParamLimits

0x16ac,	// (0x00073c66) find_pinb_pane_t2_ParamLimits

0xf146,	// (0x00081700) find_pinb_pane_t_ParamLimits

0x13f7,	// (0x000739b1) main_call3_pane

0x77f7,	// (0x00079db1) cale_month_day_heading_pane_t1_ParamLimits

0x7855,	// (0x00079e0f) cale_month_day_heading_pane_t2_ParamLimits

0x78ba,	// (0x00079e74) cale_month_day_heading_pane_t3_ParamLimits

0x791f,	// (0x00079ed9) cale_month_day_heading_pane_t4_ParamLimits

0x7984,	// (0x00079f3e) cale_month_day_heading_pane_t5_ParamLimits

0x79e9,	// (0x00079fa3) cale_month_day_heading_pane_t6_ParamLimits

0x7a4e,	// (0x0007a008) cale_month_day_heading_pane_t7_ParamLimits

0xf2ca,	// (0x00081884) cale_month_day_heading_pane_t_ParamLimits

0x1e39,	// (0x000743f3) smil_status_volume_pane

0x871e,	// (0x0007acd8) postcard_address_pane_ParamLimits

0x871e,	// (0x0007acd8) postcard_address_pane

0x872a,	// (0x0007ace4) postcard_message_pane_ParamLimits

0x872a,	// (0x0007ace4) postcard_message_pane

0x8aa1,	// (0x0007b05b) call2_cli_visual_pane_t1_ParamLimits

0x8aa1,	// (0x0007b05b) call2_cli_visual_pane_t1

0x8fcf,	// (0x0007b589) postcard_message_pane_t1_ParamLimits

0x8fcf,	// (0x0007b589) postcard_message_pane_t1

0x8fb8,	// (0x0007b572) postcard_address_pane_t1_ParamLimits

0x8fb8,	// (0x0007b572) postcard_address_pane_t1

0x8fab,	// (0x0007b565) popup_call3_audio_in_window_ParamLimits

0x8fab,	// (0x0007b565) popup_call3_audio_in_window

0x8e93,	// (0x0007b44d) bg_popup_call3_in_pane_ParamLimits

0x8e93,	// (0x0007b44d) bg_popup_call3_in_pane

0x8ef1,	// (0x0007b4ab) popup_call3_audio_in_window_g1_ParamLimits

0x8ef1,	// (0x0007b4ab) popup_call3_audio_in_window_g1

0x8f09,	// (0x0007b4c3) popup_call3_audio_in_window_g2_ParamLimits

0x8f09,	// (0x0007b4c3) popup_call3_audio_in_window_g2

0x8f21,	// (0x0007b4db) popup_call3_audio_in_window_g3_ParamLimits

0x8f21,	// (0x0007b4db) popup_call3_audio_in_window_g3

0x0003,

0xf649,	// (0x00081c03) popup_call3_audio_in_window_g_ParamLimits

0xf649,	// (0x00081c03) popup_call3_audio_in_window_g

0x8f49,	// (0x0007b503) popup_call3_audio_in_window_t1_ParamLimits

0x8f49,	// (0x0007b503) popup_call3_audio_in_window_t1

0x8f71,	// (0x0007b52b) popup_call3_audio_in_window_t2_ParamLimits

0x8f71,	// (0x0007b52b) popup_call3_audio_in_window_t2

0x8f99,	// (0x0007b553) popup_call3_audio_in_window_t3_ParamLimits

0x8f99,	// (0x0007b553) popup_call3_audio_in_window_t3

0x0002,

0xf652,	// (0x00081c0c) popup_call3_audio_in_window_t_ParamLimits

0xf652,	// (0x00081c0c) popup_call3_audio_in_window_t

0xe041,	// (0x000805fb) bg_popup_call3_rect_pane

0x24a5,	// (0x00074a5f) bg_popup_call3_rect_pane_g1

0x188e,	// (0x00073e48) bg_popup_call3_rect_pane_g2

0x24ad,	// (0x00074a67) bg_popup_call3_rect_pane_g3

0x24b5,	// (0x00074a6f) bg_popup_call3_rect_pane_g4

0x24bd,	// (0x00074a77) bg_popup_call3_rect_pane_g5

0x24c5,	// (0x00074a7f) bg_popup_call3_rect_pane_g6

0x24cd,	// (0x00074a87) bg_popup_call3_rect_pane_g7

0x8378,	// (0x0007a932) mup_visualizer_osc_pane

0xe100,	// (0x000806ba) mup_visualizer_spec_pane

0x8eb3,	// (0x0007b46d) call3_video_qcif_pane_ParamLimits

0x8eb3,	// (0x0007b46d) call3_video_qcif_pane

0x8ec3,	// (0x0007b47d) call3_video_qcif_uncrop_pane_ParamLimits

0x8ec3,	// (0x0007b47d) call3_video_qcif_uncrop_pane

0x8ecf,	// (0x0007b489) call3_video_subqcif_pane_ParamLimits

0x8ecf,	// (0x0007b489) call3_video_subqcif_pane

0x8ee1,	// (0x0007b49b) call3_video_subqcif_uncrop_pane_ParamLimits

0x8ee1,	// (0x0007b49b) call3_video_subqcif_uncrop_pane

0x8f39,	// (0x0007b4f3) popup_call3_audio_in_window_g4_ParamLimits

0x8f39,	// (0x0007b4f3) popup_call3_audio_in_window_g4

0x8e60,	// (0x0007b41a) mup_spec_half_pane

0x8e69,	// (0x0007b423) mup_spec_half_pane_cp

0x2779,	// (0x00074d33) mup_osc_middle_pane

0x2782,	// (0x00074d3c) mup_visualizer_osc_pane_g1

0x8e41,	// (0x0007b3fb) mup_spec_bar_pane_ParamLimits

0x8e41,	// (0x0007b3fb) mup_spec_bar_pane

0x2766,	// (0x00074d20) mup_spec_bar_pane_g1

0x2770,	// (0x00074d2a) mup_spec_bar_pane_g2

0x0001,

0xf63d,	// (0x00081bf7) mup_spec_bar_pane_g

0x697d,	// (0x00078f37) aid_cale_week_size_cell_pane_ParamLimits

0x6990,	// (0x00078f4a) bg_cale_heading_pane_ParamLimits

0x191a,	// (0x00073ed4) bg_cale_pane_cp01_ParamLimits

0x69a4,	// (0x00078f5e) cale_week_corner_pane_ParamLimits

0x69ba,	// (0x00078f74) cale_week_day_heading_pane_ParamLimits

0x69ce,	// (0x00078f88) cale_week_scroll_pane_g1_ParamLimits

0x69df,	// (0x00078f99) cale_week_scroll_pane_g2_ParamLimits

0x69f0,	// (0x00078faa) cale_week_scroll_pane_g3_ParamLimits

0x6a01,	// (0x00078fbb) cale_week_scroll_pane_g4_ParamLimits

0x6a12,	// (0x00078fcc) cale_week_scroll_pane_g5_ParamLimits

0x6a23,	// (0x00078fdd) cale_week_scroll_pane_g6_ParamLimits

0x6a34,	// (0x00078fee) cale_week_scroll_pane_g7_ParamLimits

0x6a45,	// (0x00078fff) cale_week_scroll_pane_g8_ParamLimits

0x6a56,	// (0x00079010) cale_week_scroll_pane_g9_ParamLimits

0x6a67,	// (0x00079021) cale_week_scroll_pane_g10_ParamLimits

0x6a78,	// (0x00079032) cale_week_scroll_pane_g11_ParamLimits

0x6a89,	// (0x00079043) cale_week_scroll_pane_g12_ParamLimits

0x6a9a,	// (0x00079054) cale_week_scroll_pane_g13_ParamLimits

0x6aab,	// (0x00079065) cale_week_scroll_pane_g14_ParamLimits

0x6abc,	// (0x00079076) cale_week_scroll_pane_g15_ParamLimits

0xf1d2,	// (0x0008178c) cale_week_scroll_pane_g_ParamLimits

0x6acd,	// (0x00079087) cale_week_time_pane_ParamLimits

0x6ade,	// (0x00079098) grid_cale_week_pane_ParamLimits

0x1933,	// (0x00073eed) listscroll_cale_week_pane_t1

0x6af1,	// (0x000790ab) scroll_pane_cp08_ParamLimits

0x7580,	// (0x00079b3a) cale_month_corner_pane_ParamLimits

0x1dd9,	// (0x00074393) cale_month_pane_t1

0x77c8,	// (0x00079d82) cale_month_week_pane_ParamLimits

0x22ce,	// (0x00074888) popup_call_status_window_g1_ParamLimits

0x7db5,	// (0x0007a36f) popup_call_status_window_g2_ParamLimits

0x7dc1,	// (0x0007a37b) popup_call_status_window_g3_ParamLimits

0xf37a,	// (0x00081934) popup_call_status_window_g_ParamLimits

0x2245,	// (0x000747ff) aid_call2_pane

0x8579,	// (0x0007ab33) msg_header_pane_g1

0x871e,	// (0x0007acd8) postcard_address2_pane_ParamLimits

0x871e,	// (0x0007acd8) postcard_address2_pane

0x872a,	// (0x0007ace4) postcard_message2_pane_ParamLimits

0x872a,	// (0x0007ace4) postcard_message2_pane

0x8df8,	// (0x0007b3b2) message2_row_pane_ParamLimits

0x8df8,	// (0x0007b3b2) message2_row_pane

0x8e10,	// (0x0007b3ca) address2_row_pane_ParamLimits

0x8e10,	// (0x0007b3ca) address2_row_pane

0x2734,	// (0x00074cee) postcard_message2_row_pane_g1

0x273c,	// (0x00074cf6) postcard_message2_row_pane_t1

0x2734,	// (0x00074cee) address2_row_pane_g1

0x273c,	// (0x00074cf6) address2_row_pane_t1

0x6daa,	// (0x00079364) aid_size_cell_vorec

0x13f7,	// (0x000739b1) main_rss_pane

0x8e23,	// (0x0007b3dd) rss_list_single_pane_ParamLimits

0x8e23,	// (0x0007b3dd) rss_list_single_pane

0x274a,	// (0x00074d04) rss_list_single_pane_t1

0x2758,	// (0x00074d12) rss_list_single_pane_t2

0x0001,

0xf638,	// (0x00081bf2) rss_list_single_pane_t

0x13f7,	// (0x000739b1) main_camera2_pane

0x13f7,	// (0x000739b1) main_video2_pane

0x901f,	// (0x0007b5d9) cams_zoom_pane_cp2_ParamLimits

0x901f,	// (0x0007b5d9) cams_zoom_pane_cp2

0x902b,	// (0x0007b5e5) image2_vga_pane_ParamLimits

0x902b,	// (0x0007b5e5) image2_vga_pane

0x903a,	// (0x0007b5f4) main_camera2_pane_g1_ParamLimits

0x903a,	// (0x0007b5f4) main_camera2_pane_g1

0x9046,	// (0x0007b600) main_camera2_pane_g2_ParamLimits

0x9046,	// (0x0007b600) main_camera2_pane_g2

0x9052,	// (0x0007b60c) main_camera2_pane_g3_ParamLimits

0x9052,	// (0x0007b60c) main_camera2_pane_g3

0x905e,	// (0x0007b618) main_camera2_pane_g4_ParamLimits

0x905e,	// (0x0007b618) main_camera2_pane_g4

0x906a,	// (0x0007b624) main_camera2_pane_g5_ParamLimits

0x906a,	// (0x0007b624) main_camera2_pane_g5

0x9076,	// (0x0007b630) main_camera2_pane_g6_ParamLimits

0x9076,	// (0x0007b630) main_camera2_pane_g6

0x9082,	// (0x0007b63c) main_camera2_pane_g7_ParamLimits

0x9082,	// (0x0007b63c) main_camera2_pane_g7

0x908e,	// (0x0007b648) main_camera2_pane_g8_ParamLimits

0x908e,	// (0x0007b648) main_camera2_pane_g8

0x0008,

0xf659,	// (0x00081c13) main_camera2_pane_g_ParamLimits

0xf659,	// (0x00081c13) main_camera2_pane_g

0x90a6,	// (0x0007b660) main_camera2_pane_t1_ParamLimits

0x90a6,	// (0x0007b660) main_camera2_pane_t1

0x90b8,	// (0x0007b672) main_camera2_pane_t2_ParamLimits

0x90b8,	// (0x0007b672) main_camera2_pane_t2

0x90ca,	// (0x0007b684) main_camera2_pane_t3_ParamLimits

0x90ca,	// (0x0007b684) main_camera2_pane_t3

0x90dc,	// (0x0007b696) main_camera2_pane_t4_ParamLimits

0x90dc,	// (0x0007b696) main_camera2_pane_t4

0x0006,

0xf66c,	// (0x00081c26) main_camera2_pane_t_ParamLimits

0xf66c,	// (0x00081c26) main_camera2_pane_t

0x9137,	// (0x0007b6f1) cams_zoom_pane_cp4_ParamLimits

0x9137,	// (0x0007b6f1) cams_zoom_pane_cp4

0x9147,	// (0x0007b701) image2_cif_pane_ParamLimits

0x9147,	// (0x0007b701) image2_cif_pane

0x9158,	// (0x0007b712) image2_subqcif_pane_ParamLimits

0x9158,	// (0x0007b712) image2_subqcif_pane

0x9165,	// (0x0007b71f) main_video2_pane_g1_ParamLimits

0x9165,	// (0x0007b71f) main_video2_pane_g1

0x9177,	// (0x0007b731) main_video2_pane_g2_ParamLimits

0x9177,	// (0x0007b731) main_video2_pane_g2

0x9187,	// (0x0007b741) main_video2_pane_g3_ParamLimits

0x9187,	// (0x0007b741) main_video2_pane_g3

0x9197,	// (0x0007b751) main_video2_pane_g4_ParamLimits

0x9197,	// (0x0007b751) main_video2_pane_g4

0x91a7,	// (0x0007b761) main_video2_pane_g5_ParamLimits

0x91a7,	// (0x0007b761) main_video2_pane_g5

0x91b7,	// (0x0007b771) main_video2_pane_g6_ParamLimits

0x91b7,	// (0x0007b771) main_video2_pane_g6

0x0005,

0xf67b,	// (0x00081c35) main_video2_pane_g_ParamLimits

0xf67b,	// (0x00081c35) main_video2_pane_g

0x91c9,	// (0x0007b783) main_video2_pane_t1_ParamLimits

0x91c9,	// (0x0007b783) main_video2_pane_t1

0x91e3,	// (0x0007b79d) main_video2_pane_t2_ParamLimits

0x91e3,	// (0x0007b79d) main_video2_pane_t2

0x9209,	// (0x0007b7c3) main_video2_pane_t3_ParamLimits

0x9209,	// (0x0007b7c3) main_video2_pane_t3

0x0002,

0xf688,	// (0x00081c42) main_video2_pane_t_ParamLimits

0xf688,	// (0x00081c42) main_video2_pane_t

0x8bda,	// (0x0007b194) call_muted_g2

0x0001,

0xf62a,	// (0x00081be4) call_muted_g

0x13f7,	// (0x000739b1) main_mup2_pane

0x27e7,	// (0x00074da1) main_mup2_pane_g1_ParamLimits

0x27e7,	// (0x00074da1) main_mup2_pane_g1

0x922f,	// (0x0007b7e9) main_mup2_pane_g2_ParamLimits

0x922f,	// (0x0007b7e9) main_mup2_pane_g2

0x949f,	// (0x0007ba59) main_mup_pane_g13_cp1

0x94a7,	// (0x0007ba61) mup_volume_pane_cp1

0x924f,	// (0x0007b809) main_mup2_pane_g4_ParamLimits

0x924f,	// (0x0007b809) main_mup2_pane_g4

0x9260,	// (0x0007b81a) main_mup2_pane_g5_ParamLimits

0x9260,	// (0x0007b81a) main_mup2_pane_g5

0x9271,	// (0x0007b82b) main_mup2_pane_g6_ParamLimits

0x9271,	// (0x0007b82b) main_mup2_pane_g6

0x9282,	// (0x0007b83c) main_mup2_pane_g7_ParamLimits

0x9282,	// (0x0007b83c) main_mup2_pane_g7

0x0006,

0xf68f,	// (0x00081c49) main_mup2_pane_g_ParamLimits

0xf68f,	// (0x00081c49) main_mup2_pane_g

0x929e,	// (0x0007b858) main_mup2_pane_t1_ParamLimits

0x929e,	// (0x0007b858) main_mup2_pane_t1

0x92b5,	// (0x0007b86f) main_mup2_pane_t2_ParamLimits

0x92b5,	// (0x0007b86f) main_mup2_pane_t2

0x92cc,	// (0x0007b886) main_mup2_pane_t3_ParamLimits

0x92cc,	// (0x0007b886) main_mup2_pane_t3

0x92e3,	// (0x0007b89d) main_mup2_pane_t4_ParamLimits

0x92e3,	// (0x0007b89d) main_mup2_pane_t4

0x92fd,	// (0x0007b8b7) main_mup2_pane_t5_ParamLimits

0x92fd,	// (0x0007b8b7) main_mup2_pane_t5

0x9317,	// (0x0007b8d1) main_mup2_pane_t6_ParamLimits

0x9317,	// (0x0007b8d1) main_mup2_pane_t6

0x0005,

0xf69e,	// (0x00081c58) main_mup2_pane_t_ParamLimits

0xf69e,	// (0x00081c58) main_mup2_pane_t

0x934f,	// (0x0007b909) mup2_visualizer_pane_ParamLimits

0x934f,	// (0x0007b909) mup2_visualizer_pane

0x9381,	// (0x0007b93b) mup_progress_pane_cp_ParamLimits

0x9381,	// (0x0007b93b) mup_progress_pane_cp

0x948a,	// (0x0007ba44) mup_volume_pane_cp_ParamLimits

0x948a,	// (0x0007ba44) mup_volume_pane_cp

0x9398,	// (0x0007b952) mup2_visualizer_pane_g1_ParamLimits

0x9398,	// (0x0007b952) mup2_visualizer_pane_g1

0x27b9,	// (0x00074d73) mup2_visualizer_pane_g2_ParamLimits

0x27b9,	// (0x00074d73) mup2_visualizer_pane_g2

0x93ad,	// (0x0007b967) mup2_visualizer_pane_g3_ParamLimits

0x93ad,	// (0x0007b967) mup2_visualizer_pane_g3

0x0002,

0xf6ab,	// (0x00081c65) mup2_visualizer_pane_g_ParamLimits

0xf6ab,	// (0x00081c65) mup2_visualizer_pane_g

0x88dc,	// (0x0007ae96) aid_size_cell_fmradio

0x8cbc,	// (0x0007b276) aid_height_parent_landcape

0x1c40,	// (0x000741fa) wml_content_pane_cp

0x1c48,	// (0x00074202) wml_tabs_pane

0x1c51,	// (0x0007420b) popup_wml_miniature_window

0x1c59,	// (0x00074213) scroll_pane_cp021

0x1c6d,	// (0x00074227) wml_content_pane_comp8

0x13f7,	// (0x000739b1) bg_popup_sub_pane_cp05

0x27d7,	// (0x00074d91) popup_wml_miniature_window_g1

0x27df,	// (0x00074d99) wml_miniature_view_pane

0x93b9,	// (0x0007b973) aid_size_wml_view

0x93c1,	// (0x0007b97b) wml_miniature_view_pane_g1

0x93ca,	// (0x0007b984) wml_miniature_view_pane_g2

0x93d3,	// (0x0007b98d) wml_miniature_view_pane_g3

0x93db,	// (0x0007b995) wml_miniature_view_pane_g4

0x93e3,	// (0x0007b99d) wml_miniature_view_pane_g5

0x93eb,	// (0x0007b9a5) wml_miniature_view_pane_g6

0x93f3,	// (0x0007b9ad) wml_miniature_view_pane_g7

0x93fb,	// (0x0007b9b5) wml_miniature_view_pane_g8

0x0007,

0xf6b2,	// (0x00081c6c) wml_miniature_view_pane_g

0x27e7,	// (0x00074da1) background_graphic_ParamLimits

0x27e7,	// (0x00074da1) background_graphic

0x27f3,	// (0x00074dad) wml_tabs_2_pane

0x27fc,	// (0x00074db6) wml_tabs_3_pane_ParamLimits

0x27fc,	// (0x00074db6) wml_tabs_3_pane

0x280e,	// (0x00074dc8) wml_tabs_4_pane_ParamLimits

0x280e,	// (0x00074dc8) wml_tabs_4_pane

0x2824,	// (0x00074dde) wml_tabs_5_pane_ParamLimits

0x2824,	// (0x00074dde) wml_tabs_5_pane

0x283e,	// (0x00074df8) wml_tabs_pane_g2_ParamLimits

0x283e,	// (0x00074df8) wml_tabs_pane_g2

0x2852,	// (0x00074e0c) wml_tabs_pane_g3_ParamLimits

0x2852,	// (0x00074e0c) wml_tabs_pane_g3

0x9403,	// (0x0007b9bd) wml_tabs_2_active_pane_ParamLimits

0x9403,	// (0x0007b9bd) wml_tabs_2_active_pane

0x9413,	// (0x0007b9cd) wml_tabs_2_passive_pane_ParamLimits

0x9413,	// (0x0007b9cd) wml_tabs_2_passive_pane

0x9423,	// (0x0007b9dd) wml_tabs_3_active_pane_cp_ParamLimits

0x9423,	// (0x0007b9dd) wml_tabs_3_active_pane_cp

0x9434,	// (0x0007b9ee) wml_tabs_3_passive_pane_ParamLimits

0x9434,	// (0x0007b9ee) wml_tabs_3_passive_pane

0x9445,	// (0x0007b9ff) wml_tabs_3_passive_pane_cp_ParamLimits

0x9445,	// (0x0007b9ff) wml_tabs_3_passive_pane_cp

0x9456,	// (0x0007ba10) tabs_4_active_pane

0x945e,	// (0x0007ba18) tabs_4_passive_pane

0x9466,	// (0x0007ba20) tabs_4_passive_pane_cp

0x946e,	// (0x0007ba28) tabs_4_passive_pane_cp2

0x8abd,	// (0x0007b077) aid_height_text

0x8345,	// (0x0007a8ff) mup_volume_cont_pane_ParamLimits

0x8345,	// (0x0007a8ff) mup_volume_cont_pane

0x654c,	// (0x00078b06) aid_size_cell_pinb

0x6556,	// (0x00078b10) aid_size_list_pinb

0x936a,	// (0x0007b924) mup2_volume_cont_pane_ParamLimits

0x936a,	// (0x0007b924) mup2_volume_cont_pane

0x9476,	// (0x0007ba30) mup2_volume_cont_pane_g1_ParamLimits

0x9476,	// (0x0007ba30) mup2_volume_cont_pane_g1

0x6243,	// (0x000787fd) aid_size_cell_touch_ParamLimits

0x6243,	// (0x000787fd) aid_size_cell_touch

0x644c,	// (0x00078a06) touch_pane_ParamLimits

0x644c,	// (0x00078a06) touch_pane

0x0f8b,	// (0x00073545) main_rss2_pane

0x286f,	// (0x00074e29) listscroll_rss2_pane

0x2878,	// (0x00074e32) rss2_navigation_pane

0x2880,	// (0x00074e3a) list_rss2_pane

0xde82,	// (0x0008043c) scroll_pane_cp22

0x2888,	// (0x00074e42) rss2_navigation_pane_g1

0x2891,	// (0x00074e4b) rss2_navigation_pane_g2

0x2899,	// (0x00074e53) rss2_navigation_pane_g3

0x0002,

0xf6c3,	// (0x00081c7d) rss2_navigation_pane_g

0x28a1,	// (0x00074e5b) rss2_navigation_pane_t1

0x94af,	// (0x0007ba69) rss2_list_single_pane_ParamLimits

0x94af,	// (0x0007ba69) rss2_list_single_pane

0x28af,	// (0x00074e69) rss2_list_single_pane_t2

0x28bd,	// (0x00074e77) rss2_list_single_pane_t3_ParamLimits

0x28bd,	// (0x00074e77) rss2_list_single_pane_t3

0x28da,	// (0x00074e94) rss2_list_single_pane_t4

0x7c14,	// (0x0007a1ce) smil_status_pane_g1

0xf078,	// (0x00081632) main_image2_pane_ParamLimits

0xf078,	// (0x00081632) main_image2_pane

0x909a,	// (0x0007b654) main_camera2_pane_g9_ParamLimits

0x909a,	// (0x0007b654) main_camera2_pane_g9

0x90ee,	// (0x0007b6a8) main_camera2_pane_t5_ParamLimits

0x90ee,	// (0x0007b6a8) main_camera2_pane_t5

0x9100,	// (0x0007b6ba) main_camera2_pane_t6_ParamLimits

0x9100,	// (0x0007b6ba) main_camera2_pane_t6

0x94c6,	// (0x0007ba80) main_image2_pane_g1_ParamLimits

0x94c6,	// (0x0007ba80) main_image2_pane_g1

0x88ca,	// (0x0007ae84) smil2_video_pane_ParamLimits

0x88ca,	// (0x0007ae84) smil2_video_pane

0x0fb5,	// (0x0007356f) aid_zoom_text_primary_cp

0x0fde,	// (0x00073598) popup_preview_fixed_window

0x1b9a,	// (0x00074154) im_reading_pane_g1

0x8ff6,	// (0x0007b5b0) cams2_bc_adjust_pane_cp_ParamLimits

0x8ff6,	// (0x0007b5b0) cams2_bc_adjust_pane_cp

0x912b,	// (0x0007b6e5) cams2_bc_adjust_pane_ParamLimits

0x912b,	// (0x0007b6e5) cams2_bc_adjust_pane

0x3b34,	// (0x000760ee) cams2_bc_adjust_pane_g1

0x94d2,	// (0x0007ba8c) cams2_slider_pane

0x94db,	// (0x0007ba95) cams2_slider_pane_g1

0x94e4,	// (0x0007ba9e) cams2_slider_pane_g2

0x0006,

0xf6ca,	// (0x00081c84) cams2_slider_pane_g

0x6635,	// (0x00078bef) calc_display_pane_ParamLimits

0x664d,	// (0x00078c07) calc_paper_pane_ParamLimits

0x6669,	// (0x00078c23) grid_calc_pane_ParamLimits

0x7e3b,	// (0x0007a3f5) popup_clock_digital_window_t1_ParamLimits

0xe2c4,	// (0x0008087e) main_image_pane_t1

0x661b,	// (0x00078bd5) aid_size_cell_calc_ParamLimits

0x661b,	// (0x00078bd5) aid_size_cell_calc

0x8ce1,	// (0x0007b29b) popup_blid_sat_info2_window_ParamLimits

0x8ce1,	// (0x0007b29b) popup_blid_sat_info2_window

0x28f0,	// (0x00074eaa) aid_size_cell_blid

0x28f8,	// (0x00074eb2) bg_popup_window_pane_cp07

0x291b,	// (0x00074ed5) grid_popup_blid_pane

0x2923,	// (0x00074edd) heading_pane_cp05_ParamLimits

0x2923,	// (0x00074edd) heading_pane_cp05

0x29eb,	// (0x00074fa5) cell_popup_blid_pane_ParamLimits

0x29eb,	// (0x00074fa5) cell_popup_blid_pane

0x2a0b,	// (0x00074fc5) cell_popup_blid_pane_g1

0x2a13,	// (0x00074fcd) cell_popup_blid_pane_t1

0x9334,	// (0x0007b8ee) mup2_indicator_pane_ParamLimits

0x9334,	// (0x0007b8ee) mup2_indicator_pane

0xe041,	// (0x000805fb) mup2_visualizer_osc_pane

0x27c5,	// (0x00074d7f) mup2_visualizer_spec_pane_ParamLimits

0x27c5,	// (0x00074d7f) mup2_visualizer_spec_pane

0x94fe,	// (0x0007bab8) mup2_spec_half_pane

0x9507,	// (0x0007bac1) mup2_spec_half_pane_cp

0x950f,	// (0x0007bac9) mup2_spec_bar_pane_ParamLimits

0x950f,	// (0x0007bac9) mup2_spec_bar_pane

0x2766,	// (0x00074d20) mup2_spec_bar_pane_g1

0x2770,	// (0x00074d2a) mup2_spec_bar_pane_g2

0x0001,

0xf63d,	// (0x00081bf7) mup2_spec_bar_pane_g

0x952e,	// (0x0007bae8) mup2_osc_middle_pane

0x2782,	// (0x00074d3c) mup2_visualizer_osc_pane_g1

0x1006,	// (0x000735c0) popup_number_entry_window_t1_ParamLimits

0x1019,	// (0x000735d3) popup_number_entry_window_t2_ParamLimits

0x102b,	// (0x000735e5) popup_number_entry_window_t3_ParamLimits

0x6499,	// (0x00078a53) popup_number_entry_window_t5_ParamLimits

0x6499,	// (0x00078a53) popup_number_entry_window_t5

0xf0ec,	// (0x000816a6) popup_number_entry_window_t_ParamLimits

0x103d,	// (0x000735f7) text_title_cp2_ParamLimits

0x8608,	// (0x0007abc2) aid_hotspot_pointer_text2_pane

0x869a,	// (0x0007ac54) main_viewer_pane_g9_ParamLimits

0x869a,	// (0x0007ac54) main_viewer_pane_g9

0x1dd9,	// (0x00074393) cale_month_pane_t1_ParamLimits

0x1e6e,	// (0x00074428) bg_cale_pane_ParamLimits

0x1e86,	// (0x00074440) list_cale_pane_ParamLimits

0x1933,	// (0x00073eed) listscroll_cale_day_pane_t1

0x1e97,	// (0x00074451) scroll_pane_cp09_ParamLimits

0x8380,	// (0x0007a93a) main_mup_eq_pane_t1_ParamLimits

0x8380,	// (0x0007a93a) main_mup_eq_pane_t1

0x8396,	// (0x0007a950) main_mup_eq_pane_t2_ParamLimits

0x8396,	// (0x0007a950) main_mup_eq_pane_t2

0x83ac,	// (0x0007a966) main_mup_eq_pane_t3_ParamLimits

0x83ac,	// (0x0007a966) main_mup_eq_pane_t3

0x83c2,	// (0x0007a97c) main_mup_eq_pane_t4_ParamLimits

0x83c2,	// (0x0007a97c) main_mup_eq_pane_t4

0x83d8,	// (0x0007a992) main_mup_eq_pane_t5_ParamLimits

0x83d8,	// (0x0007a992) main_mup_eq_pane_t5

0x83ee,	// (0x0007a9a8) main_mup_eq_pane_t6_ParamLimits

0x83ee,	// (0x0007a9a8) main_mup_eq_pane_t6

0x8400,	// (0x0007a9ba) main_mup_eq_pane_t7_ParamLimits

0x8400,	// (0x0007a9ba) main_mup_eq_pane_t7

0x8412,	// (0x0007a9cc) main_mup_eq_pane_t8_ParamLimits

0x8412,	// (0x0007a9cc) main_mup_eq_pane_t8

0x8424,	// (0x0007a9de) main_mup_eq_pane_t9_ParamLimits

0x8424,	// (0x0007a9de) main_mup_eq_pane_t9

0x843a,	// (0x0007a9f4) main_mup_eq_pane_t10_ParamLimits

0x843a,	// (0x0007a9f4) main_mup_eq_pane_t10

0x0009,

0xf479,	// (0x00081a33) main_mup_eq_pane_t_ParamLimits

0xf479,	// (0x00081a33) main_mup_eq_pane_t

0x84cd,	// (0x0007aa87) mup_equalizer_pane_cp5_ParamLimits

0x84df,	// (0x0007aa99) mup_equalizer_pane_cp6_ParamLimits

0x84f1,	// (0x0007aaab) mup_equalizer_pane_cp7_ParamLimits

0x0f8b,	// (0x00073545) main_gallery_pane

0x278b,	// (0x00074d45) smil2_volume_pane

0x27a6,	// (0x00074d60) smil_status_volume_pane_g1_ParamLimits

0x2793,	// (0x00074d4d) smil_status_volume_pane_g2_ParamLimits

0x8e71,	// (0x0007b42b) smil_status_volume_pane_g3_ParamLimits

0xf642,	// (0x00081bfc) smil_status_volume_pane_g_ParamLimits

0x28f8,	// (0x00074eb2) bg_popup_window_pane_cp07_ParamLimits

0x2906,	// (0x00074ec0) blid_firmament_pane

0x9537,	// (0x0007baf1) aid_size_cell_gallery_ParamLimits

0x9537,	// (0x0007baf1) aid_size_cell_gallery

0x9545,	// (0x0007baff) grid_gallery_pane_ParamLimits

0x9545,	// (0x0007baff) grid_gallery_pane

0x9551,	// (0x0007bb0b) cell_gallery_pane_ParamLimits

0x9551,	// (0x0007bb0b) cell_gallery_pane

0x2a21,	// (0x00074fdb) bg_cell_gallery_focus_pane_ParamLimits

0x2a21,	// (0x00074fdb) bg_cell_gallery_focus_pane

0x2a33,	// (0x00074fed) cell_gallery_pane_g1_ParamLimits

0x2a33,	// (0x00074fed) cell_gallery_pane_g1

0x9590,	// (0x0007bb4a) cell_gallery_pane_g2_ParamLimits

0x9590,	// (0x0007bb4a) cell_gallery_pane_g2

0x959d,	// (0x0007bb57) cell_gallery_pane_g3_ParamLimits

0x959d,	// (0x0007bb57) cell_gallery_pane_g3

0x2a3f,	// (0x00074ff9) cell_gallery_pane_g4_ParamLimits

0x2a3f,	// (0x00074ff9) cell_gallery_pane_g4

0x0003,

0xf6f0,	// (0x00081caa) cell_gallery_pane_g_ParamLimits

0xf6f0,	// (0x00081caa) cell_gallery_pane_g

0x2a4b,	// (0x00075005) bg_cell_gallery_focus_pane_g1

0x2a53,	// (0x0007500d) bg_cell_gallery_focus_pane_g2

0x2a5b,	// (0x00075015) bg_cell_gallery_focus_pane_g3

0x2a63,	// (0x0007501d) bg_cell_gallery_focus_pane_g4

0x2a6b,	// (0x00075025) bg_cell_gallery_focus_pane_g5

0x2a73,	// (0x0007502d) bg_cell_gallery_focus_pane_g6

0x2a7b,	// (0x00075035) bg_cell_gallery_focus_pane_g7

0x2a83,	// (0x0007503d) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6f9,	// (0x00081cb3) bg_cell_gallery_focus_pane_g

0x2a8b,	// (0x00075045) aid_firma_cardinal

0x2a9f,	// (0x00075059) blid_firmament_pane_t1

0x2ab6,	// (0x00075070) blid_firmament_pane_t2

0x2acd,	// (0x00075087) blid_firmament_pane_t3

0x2ae4,	// (0x0007509e) blid_firmament_pane_t4

0x0003,

0xf70a,	// (0x00081cc4) blid_firmament_pane_t

0x2afb,	// (0x000750b5) blid_sat_info_pane

0x2b0b,	// (0x000750c5) blid_sat_info_pane_g1

0x2b0b,	// (0x000750c5) blid_sat_info_pane_g2

0x0001,

0xf713,	// (0x00081ccd) blid_sat_info_pane_g

0x2b15,	// (0x000750cf) blid_sat_info_pane_t1

0x2b23,	// (0x000750dd) smil2_volume_content_pane

0x2b2c,	// (0x000750e6) smil2_volume_pane_g1

0x2b34,	// (0x000750ee) smil2_volume_content_pane_g1

0x2b3d,	// (0x000750f7) smil2_volume_content_pane_g2

0x2b46,	// (0x00075100) smil2_volume_content_pane_g3

0x2b4f,	// (0x00075109) smil2_volume_content_pane_g4

0x2b58,	// (0x00075112) smil2_volume_content_pane_g5

0x2b61,	// (0x0007511b) smil2_volume_content_pane_g6

0x2b6a,	// (0x00075124) smil2_volume_content_pane_g7

0x2b73,	// (0x0007512d) smil2_volume_content_pane_g8

0x2b7c,	// (0x00075136) smil2_volume_content_pane_g9

0x2b85,	// (0x0007513f) smil2_volume_content_pane_g10

0x0009,

0xf718,	// (0x00081cd2) smil2_volume_content_pane_g

0x6b45,	// (0x000790ff) cale_week_day_heading_pane_t1_ParamLimits

0x6b5e,	// (0x00079118) cale_week_day_heading_pane_t2_ParamLimits

0x6b77,	// (0x00079131) cale_week_day_heading_pane_t3_ParamLimits

0x6b90,	// (0x0007914a) cale_week_day_heading_pane_t4_ParamLimits

0x6ba9,	// (0x00079163) cale_week_day_heading_pane_t5_ParamLimits

0x6bc2,	// (0x0007917c) cale_week_day_heading_pane_t6_ParamLimits

0x6bdb,	// (0x00079195) cale_week_day_heading_pane_t7_ParamLimits

0xf1f1,	// (0x000817ab) cale_week_day_heading_pane_t_ParamLimits

0x1945,	// (0x00073eff) bg_cale_side_pane_ParamLimits

0x6bf4,	// (0x000791ae) cale_week_time_pane_t1_ParamLimits

0x6c20,	// (0x000791da) cale_week_time_pane_t2_ParamLimits

0x6c4c,	// (0x00079206) cale_week_time_pane_t3_ParamLimits

0x6c78,	// (0x00079232) cale_week_time_pane_t4_ParamLimits

0x6ca4,	// (0x0007925e) cale_week_time_pane_t5_ParamLimits

0x6cd0,	// (0x0007928a) cale_week_time_pane_t6_ParamLimits

0x6cfc,	// (0x000792b6) cale_week_time_pane_t7_ParamLimits

0x6d28,	// (0x000792e2) cale_week_time_pane_t8_ParamLimits

0xf200,	// (0x000817ba) cale_week_time_pane_t_ParamLimits

0x6d54,	// (0x0007930e) cell_cale_week_pane_g2_ParamLimits

0x1945,	// (0x00073eff) bg_cale_side_pane_cp01_ParamLimits

0x7ab3,	// (0x0007a06d) cale_month_week_pane_t1_ParamLimits

0x7aca,	// (0x0007a084) cale_month_week_pane_t2_ParamLimits

0x7ae1,	// (0x0007a09b) cale_month_week_pane_t3_ParamLimits

0x7af8,	// (0x0007a0b2) cale_month_week_pane_t4_ParamLimits

0x7b0f,	// (0x0007a0c9) cale_month_week_pane_t5_ParamLimits

0x7b26,	// (0x0007a0e0) cale_month_week_pane_t6_ParamLimits

0xf2d9,	// (0x00081893) cale_month_week_pane_t_ParamLimits

0x7be3,	// (0x0007a19d) cell_cale_month_pane_g1_ParamLimits

0x0f8b,	// (0x00073545) main_cale_event_viewer_pane

0x0f8b,	// (0x00073545) listscroll_cale_event_viewer_pane

0x2b8e,	// (0x00075148) list_cale_ev_pane

0x2b96,	// (0x00075150) scroll_pane_cp023

0x95aa,	// (0x0007bb64) field_cale_ev_pane_ParamLimits

0x95aa,	// (0x0007bb64) field_cale_ev_pane

0x2ba2,	// (0x0007515c) field_cale_ev_content_pane_ParamLimits

0x2ba2,	// (0x0007515c) field_cale_ev_content_pane

0x2bae,	// (0x00075168) field_cale_ev_pane_g1_ParamLimits

0x2bae,	// (0x00075168) field_cale_ev_pane_g1

0x2bba,	// (0x00075174) field_cale_ev_pane_g2_ParamLimits

0x2bba,	// (0x00075174) field_cale_ev_pane_g2

0x2bd2,	// (0x0007518c) field_cale_ev_pane_g3_ParamLimits

0x2bd2,	// (0x0007518c) field_cale_ev_pane_g3

0x0002,

0xf72d,	// (0x00081ce7) field_cale_ev_pane_g_ParamLimits

0xf72d,	// (0x00081ce7) field_cale_ev_pane_g

0x2bea,	// (0x000751a4) field_cale_ev_pane_t1_ParamLimits

0x2bea,	// (0x000751a4) field_cale_ev_pane_t1

0x95c4,	// (0x0007bb7e) field_cale_ev_content_pane_t1_ParamLimits

0x95c4,	// (0x0007bb7e) field_cale_ev_content_pane_t1

0xe1aa,	// (0x00080764) bg_button_pane_cp01

0x190b,	// (0x00073ec5) listscroll_cale_week_pane_ParamLimits

0x6975,	// (0x00078f2f) popup_toolbar_window_cp01

0x1933,	// (0x00073eed) listscroll_cale_week_pane_t1_ParamLimits

0x1743,	// (0x00073cfd) listscroll_cale_day_pane_ParamLimits

0x6975,	// (0x00078f2f) popup_toolbar_window_cp02

0x1933,	// (0x00073eed) listscroll_cale_day_pane_t1_ParamLimits

0x190b,	// (0x00073ec5) main_cale_month_pane_ParamLimits

0x8d81,	// (0x0007b33b) popup_toolbar_window_cp03_ParamLimits

0x8d81,	// (0x0007b33b) popup_toolbar_window_cp03

0x87f2,	// (0x0007adac) main_image_pane_g2_ParamLimits

0x87f2,	// (0x0007adac) main_image_pane_g2

0x87fe,	// (0x0007adb8) main_image_pane_g3_ParamLimits

0x87fe,	// (0x0007adb8) main_image_pane_g3

0x0002,

0xf50b,	// (0x00081ac5) main_image_pane_g_ParamLimits

0xf50b,	// (0x00081ac5) main_image_pane_g

0xe2c4,	// (0x0008087e) main_image_pane_t1_ParamLimits

0x880a,	// (0x0007adc4) main_image_pane_t2_ParamLimits

0x880a,	// (0x0007adc4) main_image_pane_t2

0x881c,	// (0x0007add6) main_image_pane_t3_ParamLimits

0x881c,	// (0x0007add6) main_image_pane_t3

0x882e,	// (0x0007ade8) main_image_pane_t4_ParamLimits

0x882e,	// (0x0007ade8) main_image_pane_t4

0x0003,

0xf512,	// (0x00081acc) main_image_pane_t_ParamLimits

0xf512,	// (0x00081acc) main_image_pane_t

0x8840,	// (0x0007adfa) popup_image_details_window_cp01

0x8848,	// (0x0007ae02) popup_toobar_trans_pane_cp01_ParamLimits

0x8848,	// (0x0007ae02) popup_toobar_trans_pane_cp01

0x8d20,	// (0x0007b2da) popup_image_details_window_ParamLimits

0x8d20,	// (0x0007b2da) popup_image_details_window

0x26ee,	// (0x00074ca8) popup_image_focus_window

0x8fea,	// (0x0007b5a4) camera2_autofocus_pane_ParamLimits

0x8fea,	// (0x0007b5a4) camera2_autofocus_pane

0x0f8b,	// (0x00073545) bg_popup_sub_pane_cp06

0x2c01,	// (0x000751bb) popup_image_focus_window_g1

0x2c09,	// (0x000751c3) popup_image_focus_window_g2

0x2c11,	// (0x000751cb) popup_image_focus_window_g3

0x2c19,	// (0x000751d3) popup_image_focus_window_g4

0x0003,

0xf734,	// (0x00081cee) popup_image_focus_window_g

0x2c21,	// (0x000751db) popup_image_focus_window_t1

0x2c2f,	// (0x000751e9) popup_image_focus_window_t2

0x2c3e,	// (0x000751f8) popup_image_focus_window_t3

0x0002,

0xf73d,	// (0x00081cf7) popup_image_focus_window_t

0x2c4c,	// (0x00075206) camera2_autofocus_pane_g1

0xf078,	// (0x00081632) bg_tb_trans_pane_cp01

0x2c5a,	// (0x00075214) popup_image_details_window_g1

0x2c6d,	// (0x00075227) popup_image_details_window_g2

0x0002,

0xf74f,	// (0x00081d09) popup_image_details_window_g

0x2c96,	// (0x00075250) popup_image_details_window_t1

0x2ca8,	// (0x00075262) popup_image_details_window_t2

0x2cc1,	// (0x0007527b) popup_image_details_window_t3

0x2cd5,	// (0x0007528f) popup_image_details_window_t4

0x2cf0,	// (0x000752aa) popup_image_details_window_t5

0x0004,

0xf756,	// (0x00081d10) popup_image_details_window_t

0x1711,	// (0x00073ccb) bg_calc_paper_pane_ParamLimits

0x674a,	// (0x00078d04) grid_highlight_pane_cp013

0x6754,	// (0x00078d0e) list_calc_pane_ParamLimits

0x6766,	// (0x00078d20) scroll_pane_cp024

0x1743,	// (0x00073cfd) bg_calc_display_pane_ParamLimits

0x676e,	// (0x00078d28) calc_display_pane_t1_ParamLimits

0x6783,	// (0x00078d3d) calc_display_pane_t2_ParamLimits

0x6798,	// (0x00078d52) calc_display_pane_t3_ParamLimits

0xf173,	// (0x0008172d) calc_display_pane_t_ParamLimits

0x684e,	// (0x00078e08) cell_calc_pane_g2

0x0001,

0xf190,	// (0x0008174a) cell_calc_pane_g

0x6857,	// (0x00078e11) cell_calc_pane_t1

0x17f0,	// (0x00073daa) grid_highlight_pane_cp02_ParamLimits

0x1806,	// (0x00073dc0) toolbar_button_pane_cp01_ParamLimits

0x1806,	// (0x00073dc0) toolbar_button_pane_cp01

0xe309,	// (0x000808c3) temp_image_control_pane_ParamLimits

0xe309,	// (0x000808c3) temp_image_control_pane

0xf078,	// (0x00081632) main_mp3_pane

0x2d0a,	// (0x000752c4) temp_image_control_pane_g1_ParamLimits

0x2d0a,	// (0x000752c4) temp_image_control_pane_g1

0x2d18,	// (0x000752d2) temp_image_control_pane_g2_ParamLimits

0x2d18,	// (0x000752d2) temp_image_control_pane_g2

0x2d2a,	// (0x000752e4) temp_image_control_pane_g3_ParamLimits

0x2d2a,	// (0x000752e4) temp_image_control_pane_g3

0x960e,	// (0x0007bbc8) temp_image_control_pane_g4_ParamLimits

0x960e,	// (0x0007bbc8) temp_image_control_pane_g4

0x0003,

0xf761,	// (0x00081d1b) temp_image_control_pane_g_ParamLimits

0xf761,	// (0x00081d1b) temp_image_control_pane_g

0x2d0a,	// (0x000752c4) main_mp3_pane_g1

0x961f,	// (0x0007bbd9) main_mp3_pane_g2

0x0007,

0xf76a,	// (0x00081d24) main_mp3_pane_g

0x2d6d,	// (0x00075327) main_mp3_pane_t1

0x1a0b,	// (0x00073fc5) main_camera_pane_g8_ParamLimits

0x1a0b,	// (0x00073fc5) main_camera_pane_g8

0x6fcf,	// (0x00079589) main_video_pane_g7_ParamLimits

0x6fcf,	// (0x00079589) main_video_pane_g7

0x9119,	// (0x0007b6d3) main_camera2_pane_t7_ParamLimits

0x9119,	// (0x0007b6d3) main_camera2_pane_t7

0x1c00,	// (0x000741ba) scroll_pane_cp025_ParamLimits

0x1c00,	// (0x000741ba) scroll_pane_cp025

0x1c14,	// (0x000741ce) scroll_pane_cp026_ParamLimits

0x1c14,	// (0x000741ce) scroll_pane_cp026

0x1c23,	// (0x000741dd) wml_content_pane_ParamLimits

0x0f8b,	// (0x00073545) main_touch_calib_pane

0x96b6,	// (0x0007bc70) main_touch_calib_pane_g1

0x96c2,	// (0x0007bc7c) main_touch_calib_pane_g2

0x96ce,	// (0x0007bc88) main_touch_calib_pane_g3

0x96da,	// (0x0007bc94) main_touch_calib_pane_g4

0x0003,

0xf788,	// (0x00081d42) main_touch_calib_pane_g

0x96e6,	// (0x0007bca0) main_touch_calib_pane_t1

0x96fb,	// (0x0007bcb5) main_touch_calib_pane_t2

0x0004,

0xf791,	// (0x00081d4b) main_touch_calib_pane_t

0xdf33,	// (0x000804ed) mup_progress_pane_cp02

0xdf52,	// (0x0008050c) navi_pane_g1

0xdfd2,	// (0x0008058c) navi_pane_mp_t3

0xf078,	// (0x00081632) main_mp3_pane_ParamLimits

0x8dbb,	// (0x0007b375) navi_pane_ParamLimits

0x2d0a,	// (0x000752c4) main_mp3_pane_g1_ParamLimits

0x961f,	// (0x0007bbd9) main_mp3_pane_g2_ParamLimits

0x962b,	// (0x0007bbe5) main_mp3_pane_g3_ParamLimits

0x962b,	// (0x0007bbe5) main_mp3_pane_g3

0x9637,	// (0x0007bbf1) main_mp3_pane_g4_ParamLimits

0x9637,	// (0x0007bbf1) main_mp3_pane_g4

0x2d3a,	// (0x000752f4) main_mp3_pane_g5_ParamLimits

0x2d3a,	// (0x000752f4) main_mp3_pane_g5

0x2d48,	// (0x00075302) main_mp3_pane_g6_ParamLimits

0x2d48,	// (0x00075302) main_mp3_pane_g6

0x2d55,	// (0x0007530f) main_mp3_pane_g7_ParamLimits

0x2d55,	// (0x0007530f) main_mp3_pane_g7

0x2d61,	// (0x0007531b) main_mp3_pane_g8_ParamLimits

0x2d61,	// (0x0007531b) main_mp3_pane_g8

0xf76a,	// (0x00081d24) main_mp3_pane_g_ParamLimits

0x9643,	// (0x0007bbfd) main_mp3_pane_t2

0x9651,	// (0x0007bc0b) main_mp3_pane_t3

0x2d7b,	// (0x00075335) main_mp3_pane_t4

0x2d89,	// (0x00075343) main_mp3_pane_t5

0x0005,

0xf77b,	// (0x00081d35) main_mp3_pane_t

0x2d97,	// (0x00075351) mup_progress_pane_cp01

0x0fb5,	// (0x0007356f) aid_zoom_text_secondary2

0x2b8e,	// (0x00075148) list_cale_ev2_pane

0x2b96,	// (0x00075150) scroll_pane_cp023_ParamLimits

0x9746,	// (0x0007bd00) field_cale_ev2_pane_ParamLimits

0x9746,	// (0x0007bd00) field_cale_ev2_pane

0x4e93,	// (0x0007744d) field_cale_ev2_pane_g1_ParamLimits

0x4e93,	// (0x0007744d) field_cale_ev2_pane_g1

0x4e9f,	// (0x00077459) field_cale_ev2_pane_g2_ParamLimits

0x4e9f,	// (0x00077459) field_cale_ev2_pane_g2

0x4eb7,	// (0x00077471) field_cale_ev2_pane_g3_ParamLimits

0x4eb7,	// (0x00077471) field_cale_ev2_pane_g3

0x0003,

0xf79c,	// (0x00081d56) field_cale_ev2_pane_g_ParamLimits

0xf79c,	// (0x00081d56) field_cale_ev2_pane_g

0x2d9f,	// (0x00075359) field_cale_ev2_pane_t1_ParamLimits

0x2d9f,	// (0x00075359) field_cale_ev2_pane_t1

0x2db6,	// (0x00075370) field_cale_ev2_pane_t2_ParamLimits

0x2db6,	// (0x00075370) field_cale_ev2_pane_t2

0x0001,

0xf7a5,	// (0x00081d5f) field_cale_ev2_pane_t_ParamLimits

0xf7a5,	// (0x00081d5f) field_cale_ev2_pane_t

0x86ee,	// (0x0007aca8) main_postcard_pane_g5_ParamLimits

0x86ee,	// (0x0007aca8) main_postcard_pane_g5

0x86fa,	// (0x0007acb4) main_postcard_pane_g6_ParamLimits

0x86fa,	// (0x0007acb4) main_postcard_pane_g6

0x6e24,	// (0x000793de) camera2_autofocus_pane_cp_ParamLimits

0x6e24,	// (0x000793de) camera2_autofocus_pane_cp

0xf078,	// (0x00081632) main_mup3_pane

0x977c,	// (0x0007bd36) main_mup3_pane_g1_ParamLimits

0x977c,	// (0x0007bd36) main_mup3_pane_g1

0x979d,	// (0x0007bd57) main_mup3_pane_g2_ParamLimits

0x979d,	// (0x0007bd57) main_mup3_pane_g2

0x9800,	// (0x0007bdba) main_mup3_pane_g3_ParamLimits

0x9800,	// (0x0007bdba) main_mup3_pane_g3

0x983b,	// (0x0007bdf5) main_mup3_pane_g4_ParamLimits

0x983b,	// (0x0007bdf5) main_mup3_pane_g4

0x9876,	// (0x0007be30) main_mup3_pane_g5_ParamLimits

0x9876,	// (0x0007be30) main_mup3_pane_g5

0x98b1,	// (0x0007be6b) main_mup3_pane_g6_ParamLimits

0x98b1,	// (0x0007be6b) main_mup3_pane_g6

0x2dcb,	// (0x00075385) main_mup3_pane_g7_ParamLimits

0x2dcb,	// (0x00075385) main_mup3_pane_g7

0x0007,

0xf7b5,	// (0x00081d6f) main_mup3_pane_g_ParamLimits

0xf7b5,	// (0x00081d6f) main_mup3_pane_g

0x991f,	// (0x0007bed9) main_mup3_pane_t1_ParamLimits

0x991f,	// (0x0007bed9) main_mup3_pane_t1

0x9982,	// (0x0007bf3c) main_mup3_pane_t2_ParamLimits

0x9982,	// (0x0007bf3c) main_mup3_pane_t2

0x9a3f,	// (0x0007bff9) main_mup3_pane_t4_ParamLimits

0x9a3f,	// (0x0007bff9) main_mup3_pane_t4

0x9a85,	// (0x0007c03f) main_mup3_pane_t5_ParamLimits

0x9a85,	// (0x0007c03f) main_mup3_pane_t5

0x9b29,	// (0x0007c0e3) main_mup3_pane_t6_ParamLimits

0x9b29,	// (0x0007c0e3) main_mup3_pane_t6

0x0005,

0xf7c6,	// (0x00081d80) main_mup3_pane_t_ParamLimits

0xf7c6,	// (0x00081d80) main_mup3_pane_t

0x9bd1,	// (0x0007c18b) mup3_progress_pane_ParamLimits

0x9bd1,	// (0x0007c18b) mup3_progress_pane

0x9c17,	// (0x0007c1d1) popup_mup3_control_window_ParamLimits

0x9c17,	// (0x0007c1d1) popup_mup3_control_window

0x2dd9,	// (0x00075393) popup_mup3_text_window

0x9c30,	// (0x0007c1ea) mup3_progress_pane_t1

0x9c46,	// (0x0007c200) mup3_progress_pane_t2

0x2de1,	// (0x0007539b) mup3_progress_pane_t3

0x0002,

0xf7d3,	// (0x00081d8d) mup3_progress_pane_t

0x2df8,	// (0x000753b2) mup_progress_pane_cp03

0x0f8b,	// (0x00073545) bg_tb_trans_pane_cp04

0x9c5c,	// (0x0007c216) mup3_volume_pane

0x9c64,	// (0x0007c21e) popup_mup3_control_window_g1

0x9c6d,	// (0x0007c227) mup3_volume_pane_g1

0x9c76,	// (0x0007c230) mup3_volume_pane_g2

0x9c7f,	// (0x0007c239) mup3_volume_pane_g3

0x0002,

0xf7da,	// (0x00081d94) mup3_volume_pane_g

0x0f8b,	// (0x00073545) bg_tb_trans_pane_cp03

0x2e08,	// (0x000753c2) popup_mup3_text_window_g1

0x2e10,	// (0x000753ca) popup_mup3_text_window_t1

0x17c7,	// (0x00073d81) list_calc_item_pane_g1_ParamLimits

0x2866,	// (0x00074e20) mup_volume_pane_cp_g1

0x9710,	// (0x0007bcca) main_touch_calib_pane_t3

0x9722,	// (0x0007bcdc) main_touch_calib_pane_t4

0x9734,	// (0x0007bcee) main_touch_calib_pane_t5

0x0f95,	// (0x0007354f) aid_cell_size_toolbar2

0x0f9d,	// (0x00073557) aid_popup3_width_pane

0x0fa5,	// (0x0007355f) aid_zoom_text_msg_primary

0x6e0e,	// (0x000793c8) vorec_t7

0x178b,	// (0x00073d45) bg_calc_paper_pane_g1_ParamLimits

0x17a3,	// (0x00073d5d) bg_calc_paper_pane_g2_ParamLimits

0x1797,	// (0x00073d51) bg_calc_paper_pane_g3_ParamLimits

0x17bb,	// (0x00073d75) bg_calc_paper_pane_g4_ParamLimits

0x17af,	// (0x00073d69) bg_calc_paper_pane_g5_ParamLimits

0x67d1,	// (0x00078d8b) bg_calc_paper_pane_g6_ParamLimits

0x67e0,	// (0x00078d9a) bg_calc_paper_pane_g7_ParamLimits

0x67ef,	// (0x00078da9) bg_calc_paper_pane_g8_ParamLimits

0xf17a,	// (0x00081734) bg_calc_paper_pane_g_ParamLimits

0x67fe,	// (0x00078db8) calc_bg_paper_pane_g9_ParamLimits

0x6f04,	// (0x000794be) image_qvga_pane_ParamLimits

0x6f04,	// (0x000794be) image_qvga_pane

0x1652,	// (0x00073c0c) bg_popup_sub_pane_cp04_ParamLimits

0xe240,	// (0x000807fa) popup_mup_playback_window_g1_ParamLimits

0xe24c,	// (0x00080806) popup_mup_playback_window_t1_ParamLimits

0xe261,	// (0x0008081b) popup_mup_playback_window_t2_ParamLimits

0xf506,	// (0x00081ac0) popup_mup_playback_window_t_ParamLimits

0x9240,	// (0x0007b7fa) main_mup2_pane_g3_ParamLimits

0x9240,	// (0x0007b7fa) main_mup2_pane_g3

0x71e4,	// (0x0007979e) popup_toolbar_window_cp04

0xe627,	// (0x00080be1) popup_call2_audio_second_window_g3_ParamLimits

0xe627,	// (0x00080be1) popup_call2_audio_second_window_g3

0xea31,	// (0x00080feb) popup_call2_audio_first_window_g4_ParamLimits

0xea31,	// (0x00080feb) popup_call2_audio_first_window_g4

0x232f,	// (0x000748e9) popup_call2_audio_in_window_g4_ParamLimits

0x232f,	// (0x000748e9) popup_call2_audio_in_window_g4

0x87e5,	// (0x0007ad9f) aid_area_sk_bg_cut_ParamLimits

0x87e5,	// (0x0007ad9f) aid_area_sk_bg_cut

0xe276,	// (0x00080830) aid_area_sk_bg_cut_2_ParamLimits

0xe276,	// (0x00080830) aid_area_sk_bg_cut_2

0x9580,	// (0x0007bb3a) aid_placing_details_win

0x9588,	// (0x0007bb42) aid_placing_details_win_2

0x2c4c,	// (0x00075206) camera2_autofocus_pane_g1_ParamLimits

0x6400,	// (0x000789ba) popup_fixed_preview_cale_window_ParamLimits

0x6400,	// (0x000789ba) popup_fixed_preview_cale_window

0xe052,	// (0x0008060c) navi_slider_pane_g3

0xe05b,	// (0x00080615) navi_slider_pane_g4

0xe064,	// (0x0008061e) navi_slider_pane_g5

0xe052,	// (0x0008060c) navi_slider_pane_g6

0x8140,	// (0x0007a6fa) navi_slider_pane_g7

0xe177,	// (0x00080731) mup_scale_pane_g3

0xe180,	// (0x0008073a) mup_scale_pane_g4

0xe189,	// (0x00080743) mup_scale_pane_g5

0x8503,	// (0x0007aabd) mup_scale_pane_g6

0x850c,	// (0x0007aac6) mup_scale_pane_g7

0xe052,	// (0x0008060c) cams2_slider_pane_g3

0x28e8,	// (0x00074ea2) cams2_slider_pane_g4

0x94ed,	// (0x0007baa7) cams2_slider_pane_g5

0xe052,	// (0x0008060c) cams2_slider_pane_g6

0x94f5,	// (0x0007baaf) cams2_slider_pane_g7

0x2b0b,	// (0x000750c5) camera2_autofocus_pane_cp_g1

0x2e1e,	// (0x000753d8) bg_popup_preview_window_pane_cp02_ParamLimits

0x2e1e,	// (0x000753d8) bg_popup_preview_window_pane_cp02

0x9c88,	// (0x0007c242) list_fp_cale_pane_ParamLimits

0x9c88,	// (0x0007c242) list_fp_cale_pane

0x2e2a,	// (0x000753e4) popup_fixed_preview_cale_window_t1_ParamLimits

0x2e2a,	// (0x000753e4) popup_fixed_preview_cale_window_t1

0x9c98,	// (0x0007c252) popup_fixed_preview_cale_window_t2_ParamLimits

0x9c98,	// (0x0007c252) popup_fixed_preview_cale_window_t2

0x9cad,	// (0x0007c267) popup_fixed_preview_cale_window_t3_ParamLimits

0x9cad,	// (0x0007c267) popup_fixed_preview_cale_window_t3

0x0002,

0xf7e1,	// (0x00081d9b) popup_fixed_preview_cale_window_t_ParamLimits

0xf7e1,	// (0x00081d9b) popup_fixed_preview_cale_window_t

0x9cbf,	// (0x0007c279) list_single_fp_cale_pane_ParamLimits

0x9cbf,	// (0x0007c279) list_single_fp_cale_pane

0x9ccc,	// (0x0007c286) list_single_fp_cale_pane_g1_ParamLimits

0x9ccc,	// (0x0007c286) list_single_fp_cale_pane_g1

0x2e48,	// (0x00075402) list_single_fp_cale_pane_g2_ParamLimits

0x2e48,	// (0x00075402) list_single_fp_cale_pane_g2

0x0002,

0xf7e8,	// (0x00081da2) list_single_fp_cale_pane_g_ParamLimits

0xf7e8,	// (0x00081da2) list_single_fp_cale_pane_g

0x9cd8,	// (0x0007c292) list_single_fp_cale_pane_t1_ParamLimits

0x9cd8,	// (0x0007c292) list_single_fp_cale_pane_t1

0x9cea,	// (0x0007c2a4) list_single_fp_cale_pane_t2_ParamLimits

0x9cea,	// (0x0007c2a4) list_single_fp_cale_pane_t2

0x0001,

0xf7ef,	// (0x00081da9) list_single_fp_cale_pane_t_ParamLimits

0xf7ef,	// (0x00081da9) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x0f8b,	// (0x00073545) main_dialer_pane

0x9d1d,	// (0x0007c2d7) aid_cell_size_keypad

0x9d27,	// (0x0007c2e1) dialer_ne_pane

0x9d2f,	// (0x0007c2e9) grid_dialer_command_1_pane

0x9d37,	// (0x0007c2f1) grid_dialer_command_2_pane

0x9d3f,	// (0x0007c2f9) grid_dialer_keypad_pane

0x9d4f,	// (0x0007c309) bg_popup_call_pane_cp06_ParamLimits

0x9d4f,	// (0x0007c309) bg_popup_call_pane_cp06

0x9d5b,	// (0x0007c315) dialer_ne_clear_pane_ParamLimits

0x9d5b,	// (0x0007c315) dialer_ne_clear_pane

0x2e61,	// (0x0007541b) dialer_ne_pane_g1

0x2e69,	// (0x00075423) dialer_ne_pane_t1_ParamLimits

0x2e69,	// (0x00075423) dialer_ne_pane_t1

0x9d67,	// (0x0007c321) dialer_ne_pane_t2_ParamLimits

0x9d67,	// (0x0007c321) dialer_ne_pane_t2

0x9d84,	// (0x0007c33e) dialer_ne_pane_t3_ParamLimits

0x9d84,	// (0x0007c33e) dialer_ne_pane_t3

0x0002,

0xf7f4,	// (0x00081dae) dialer_ne_pane_t_ParamLimits

0xf7f4,	// (0x00081dae) dialer_ne_pane_t

0x9da8,	// (0x0007c362) dialer_ne_pane_t3_copy1_ParamLimits

0x9da8,	// (0x0007c362) dialer_ne_pane_t3_copy1

0x9dcc,	// (0x0007c386) cell_dialer_keypad_pane_ParamLimits

0x9dcc,	// (0x0007c386) cell_dialer_keypad_pane

0x9de1,	// (0x0007c39b) cell_dialer_command_1_pane_ParamLimits

0x9de1,	// (0x0007c39b) cell_dialer_command_1_pane

0x9df7,	// (0x0007c3b1) cell_dialer_command_2_pane_ParamLimits

0x9df7,	// (0x0007c3b1) cell_dialer_command_2_pane

0x2e7b,	// (0x00075435) bg_button_pane_cp02_ParamLimits

0x2e7b,	// (0x00075435) bg_button_pane_cp02

0x9e06,	// (0x0007c3c0) cell_dialer_keypad_pane_g1_ParamLimits

0x9e06,	// (0x0007c3c0) cell_dialer_keypad_pane_g1

0x2e7b,	// (0x00075435) bg_button_pane_cp03_ParamLimits

0x2e7b,	// (0x00075435) bg_button_pane_cp03

0x9e1b,	// (0x0007c3d5) cell_dialer_command_1_pane_g1_ParamLimits

0x9e1b,	// (0x0007c3d5) cell_dialer_command_1_pane_g1

0x2e87,	// (0x00075441) bg_button_pane_cp04

0x9e2e,	// (0x0007c3e8) cell_dialer_command_2_pane_g1

0xe041,	// (0x000805fb) bg_button_pane_cp06

0x2e8f,	// (0x00075449) dialer_ne_clear_pane_g1

0xdf5e,	// (0x00080518) navi_pane_g2

0x80e8,	// (0x0007a6a2) navi_pane_g3

0x0002,

0xf409,	// (0x000819c3) navi_pane_g

0xdfe0,	// (0x0008059a) navi_pane_mv_g2

0xe008,	// (0x000805c2) navi_pane_mv_g5

0x810d,	// (0x0007a6c7) navi_pane_mv_t1

0x1743,	// (0x00073cfd) main_clock2_pane

0x9e5f,	// (0x0007c419) main_clock2_list_pane_ParamLimits

0x9e5f,	// (0x0007c419) main_clock2_list_pane

0x9e85,	// (0x0007c43f) main_clock2_pane_t1_ParamLimits

0x9e85,	// (0x0007c43f) main_clock2_pane_t1

0x9eaf,	// (0x0007c469) main_clock2_pane_t2_ParamLimits

0x9eaf,	// (0x0007c469) main_clock2_pane_t2

0x0004,

0xf7fb,	// (0x00081db5) main_clock2_pane_t_ParamLimits

0xf7fb,	// (0x00081db5) main_clock2_pane_t

0x9f12,	// (0x0007c4cc) popup_clock_analogue_window_cp03_ParamLimits

0x9f12,	// (0x0007c4cc) popup_clock_analogue_window_cp03

0x9f2e,	// (0x0007c4e8) popup_clock_digital_window_cp02_ParamLimits

0x9f2e,	// (0x0007c4e8) popup_clock_digital_window_cp02

0x9f7c,	// (0x0007c536) main_clock2_list_single_pane_ParamLimits

0x9f7c,	// (0x0007c536) main_clock2_list_single_pane

0xe041,	// (0x000805fb) list_highlight_pane_cp05

0x2e97,	// (0x00075451) main_clock2_list_single_pane_t1

0x71e4,	// (0x0007979e) popup_toolbar_window_cp04_ParamLimits

0x95de,	// (0x0007bb98) camera2_autofocus_pane_g2_ParamLimits

0x95de,	// (0x0007bb98) camera2_autofocus_pane_g2

0x95ea,	// (0x0007bba4) camera2_autofocus_pane_g3_ParamLimits

0x95ea,	// (0x0007bba4) camera2_autofocus_pane_g3

0x95f6,	// (0x0007bbb0) camera2_autofocus_pane_g4_ParamLimits

0x95f6,	// (0x0007bbb0) camera2_autofocus_pane_g4

0x9602,	// (0x0007bbbc) camera2_autofocus_pane_g5_ParamLimits

0x9602,	// (0x0007bbbc) camera2_autofocus_pane_g5

0x0004,

0xf744,	// (0x00081cfe) camera2_autofocus_pane_g_ParamLimits

0xf744,	// (0x00081cfe) camera2_autofocus_pane_g

0x975c,	// (0x0007bd16) camera2_autofocus_pane_cp_g2

0x9764,	// (0x0007bd1e) camera2_autofocus_pane_cp_g3

0x976c,	// (0x0007bd26) camera2_autofocus_pane_cp_g4

0x9774,	// (0x0007bd2e) camera2_autofocus_pane_cp_g5

0x0004,

0xf7aa,	// (0x00081d64) camera2_autofocus_pane_cp_g

0x9d47,	// (0x0007c301) popup_dialer_spcha_window

0x0f8b,	// (0x00073545) bg_popup_sub_pane_cp07

0x2ea5,	// (0x0007545f) list_spcha_pane

0x2ead,	// (0x00075467) list_single_spcha_pane_ParamLimits

0x2ead,	// (0x00075467) list_single_spcha_pane

0x0f8b,	// (0x00073545) list_highlight_pane_cp06

0x2ebe,	// (0x00075478) list_single_spcha_pane_t1

0xee5a,	// (0x00081414) popup_call2_audio_out_window_g4_ParamLimits

0xee5a,	// (0x00081414) popup_call2_audio_out_window_g4

0x0f8b,	// (0x00073545) main_imed2_pane

0x26f6,	// (0x00074cb0) popup_imed_adjust2_window

0x8d2c,	// (0x0007b2e6) popup_imed_trans_window_ParamLimits

0x8d2c,	// (0x0007b2e6) popup_imed_trans_window

0x294f,	// (0x00074f09) popup_blid_sat_info2_window_t1

0x295d,	// (0x00074f17) popup_blid_sat_info2_window_t2

0x000a,

0xf6d9,	// (0x00081c93) popup_blid_sat_info2_window_t

0xa024,	// (0x0007c5de) aid_size_cell_colour_35

0xa03b,	// (0x0007c5f5) aid_size_cell_colour_112

0xa052,	// (0x0007c60c) aid_size_cell_effect

0xf078,	// (0x00081632) bg_tb_trans_pane_cp02

0xf086,	// (0x00081640) heading_imed_pane

0xa06c,	// (0x0007c626) listscroll_imed_pane

0x2ecc,	// (0x00075486) heading_imed_pane_g1

0x2ed4,	// (0x0007548e) heading_imed_pane_t1

0x2ee2,	// (0x0007549c) grid_imed_colour_35_pane_ParamLimits

0x2ee2,	// (0x0007549c) grid_imed_colour_35_pane

0xa078,	// (0x0007c632) grid_imed_effect_pane

0x2ef5,	// (0x000754af) list_imed_aspect_pane

0xa084,	// (0x0007c63e) scroll_pane_cp027_ParamLimits

0xa084,	// (0x0007c63e) scroll_pane_cp027

0xa090,	// (0x0007c64a) cell_imed_effect_pane_ParamLimits

0xa090,	// (0x0007c64a) cell_imed_effect_pane

0x2efd,	// (0x000754b7) cell_imed_colour_pane_ParamLimits

0x2efd,	// (0x000754b7) cell_imed_colour_pane

0x2f37,	// (0x000754f1) cell_imed_colour_pane_g1_ParamLimits

0x2f37,	// (0x000754f1) cell_imed_colour_pane_g1

0x2f48,	// (0x00075502) hgihlgiht_grid_pane_cp016_ParamLimits

0x2f48,	// (0x00075502) hgihlgiht_grid_pane_cp016

0xa0a6,	// (0x0007c660) cell_imed_effect_pane_g1

0xa0ae,	// (0x0007c668) grid_highlight_pane_cp017

0x2f59,	// (0x00075513) list_imed_single_pane_ParamLimits

0x2f59,	// (0x00075513) list_imed_single_pane

0x0f8b,	// (0x00073545) list_highlight_pane_cp07

0x2f6c,	// (0x00075526) list_imed_aspect_pane_comp1_t1

0x26d0,	// (0x00074c8a) bg_tb_trans_pane_cp05

0x2f8c,	// (0x00075546) popup_imed_adjust2_window_g1

0x2fb3,	// (0x0007556d) popup_imed_adjust2_window_t1

0x2fcb,	// (0x00075585) slider_imed_adjust_pane

0x2fdf,	// (0x00075599) slider_imed_adjust_pane_g1

0x2fef,	// (0x000755a9) slider_imed_adjust_pane_g2

0x2fff,	// (0x000755b9) slider_imed_adjust_pane_g3

0x3010,	// (0x000755ca) slider_imed_adjust_pane_g4

0x0003,

0xf818,	// (0x00081dd2) slider_imed_adjust_pane_g

0xa0b7,	// (0x0007c671) aid_size_cell_clipart2

0xa0c3,	// (0x0007c67d) grid_imed_clipart_pane

0x3021,	// (0x000755db) scroll_pane_cp031

0xa0cd,	// (0x0007c687) cell_imed_clipart_pane_ParamLimits

0xa0cd,	// (0x0007c687) cell_imed_clipart_pane

0xa0e4,	// (0x0007c69e) cell_imed_clipart_pane_g1

0x0f8b,	// (0x00073545) grid_highlight_pane_cp014

0x9e6b,	// (0x0007c425) main_clock2_pane_g1_ParamLimits

0x9e6b,	// (0x0007c425) main_clock2_pane_g1

0x9f46,	// (0x0007c500) aid_call2_pane_cp10

0x9f52,	// (0x0007c50c) aid_call_pane_cp10

0xdf0e,	// (0x000804c8) popup_clock_analogue_window_cp10_g1

0xdf0e,	// (0x000804c8) popup_clock_analogue_window_cp10_g2

0x9f5e,	// (0x0007c518) popup_clock_analogue_window_cp10_g3

0x9f5e,	// (0x0007c518) popup_clock_analogue_window_cp10_g4

0xdf0e,	// (0x000804c8) popup_clock_analogue_window_cp10_g5

0x0004,

0xf806,	// (0x00081dc0) popup_clock_analogue_window_cp10_g

0x9f6a,	// (0x0007c524) popup_clock_analogue_window_cp10_t1

0x9f8e,	// (0x0007c548) clock_digital_number_pane_cp10_ParamLimits

0x9f8e,	// (0x0007c548) clock_digital_number_pane_cp10

0x9fa6,	// (0x0007c560) clock_digital_number_pane_cp11_ParamLimits

0x9fa6,	// (0x0007c560) clock_digital_number_pane_cp11

0x9fbe,	// (0x0007c578) clock_digital_number_pane_cp12_ParamLimits

0x9fbe,	// (0x0007c578) clock_digital_number_pane_cp12

0x9fd6,	// (0x0007c590) clock_digital_number_pane_cp13_ParamLimits

0x9fd6,	// (0x0007c590) clock_digital_number_pane_cp13

0x9fee,	// (0x0007c5a8) clock_digital_separator_pane_cp10_ParamLimits

0x9fee,	// (0x0007c5a8) clock_digital_separator_pane_cp10

0xa006,	// (0x0007c5c0) popup_clock_digital_window_cp02_t1_ParamLimits

0xa006,	// (0x0007c5c0) popup_clock_digital_window_cp02_t1

0x164a,	// (0x00073c04) clock_digital_number_pane_cp10_g1

0x164a,	// (0x00073c04) clock_digital_number_pane_cp10_g2

0x0001,

0xf821,	// (0x00081ddb) clock_digital_number_pane_cp10_g

0x164a,	// (0x00073c04) clock_digital_separator_pane_cp10_g1

0x164a,	// (0x00073c04) clock_digital_separator_pane_g2_cp10

0xe011,	// (0x000805cb) navi_pane_vded_g4

0xe01a,	// (0x000805d4) navi_pane_vded_g5

0xe023,	// (0x000805dd) navi_pane_vded_t1

0x0f8b,	// (0x00073545) main_vded_pane

0xa0ed,	// (0x0007c6a7) main_vded_pane_g1

0xa0f5,	// (0x0007c6af) main_vded_pane_g2

0xa0fd,	// (0x0007c6b7) main_vded_pane_g3

0x0002,

0xf826,	// (0x00081de0) main_vded_pane_g

0xa105,	// (0x0007c6bf) main_vded_pane_t1

0xa113,	// (0x0007c6cd) main_vded_pane_t2

0x0001,

0xf82d,	// (0x00081de7) main_vded_pane_t

0xa121,	// (0x0007c6db) vded_slider_pane

0xa129,	// (0x0007c6e3) vded_video_pane

0x3029,	// (0x000755e3) vded_video_pane_g1

0xa131,	// (0x0007c6eb) vded_video_pane_g2

0x2b0b,	// (0x000750c5) vded_video_pane_g3

0x0002,

0xf832,	// (0x00081dec) vded_video_pane_g

0x3033,	// (0x000755ed) vded_slider_pane_g1

0x2866,	// (0x00074e20) vded_slider_pane_g2

0x303c,	// (0x000755f6) vded_slider_pane_g3

0x3045,	// (0x000755ff) vded_slider_pane_g4

0x304e,	// (0x00075608) vded_slider_pane_g5

0x0004,

0xf839,	// (0x00081df3) vded_slider_pane_g

0x9c0b,	// (0x0007c1c5) mup3_rocker_pane_ParamLimits

0x9c0b,	// (0x0007c1c5) mup3_rocker_pane

0xa13a,	// (0x0007c6f4) mup3_control_keys_pane_g1

0xa142,	// (0x0007c6fc) mup3_control_keys_pane_g2

0xa14a,	// (0x0007c704) mup3_control_keys_pane_g3

0xa152,	// (0x0007c70c) mup3_control_keys_pane_g4

0x0003,

0xf844,	// (0x00081dfe) mup3_control_keys_pane_g

0x641c,	// (0x000789d6) popup_toolbar2_fixed_window_cp01_ParamLimits

0x641c,	// (0x000789d6) popup_toolbar2_fixed_window_cp01

0x9c23,	// (0x0007c1dd) popup_toolbar2_fixed_window_cp02_ParamLimits

0x9c23,	// (0x0007c1dd) popup_toolbar2_fixed_window_cp02

0xe799,	// (0x00080d53) popup_call2_audio_second_window_t4_ParamLimits

0xe799,	// (0x00080d53) popup_call2_audio_second_window_t4

0xecc7,	// (0x00081281) popup_call2_audio_first_window_t6_ParamLimits

0xecc7,	// (0x00081281) popup_call2_audio_first_window_t6

0xef5d,	// (0x00081517) popup_call2_audio_out_window_t6_ParamLimits

0xef5d,	// (0x00081517) popup_call2_audio_out_window_t6

0x0f8b,	// (0x00073545) main_vitu_pane

0xa162,	// (0x0007c71c) aid_size_cell_itu_ParamLimits

0xa162,	// (0x0007c71c) aid_size_cell_itu

0x343e,	// (0x000759f8) bg_popup_window_pane_cp08_ParamLimits

0x343e,	// (0x000759f8) bg_popup_window_pane_cp08

0xa170,	// (0x0007c72a) field_vitu_entry_pane_ParamLimits

0xa170,	// (0x0007c72a) field_vitu_entry_pane

0xa17d,	// (0x0007c737) grid_vitu_function_pane_ParamLimits

0xa17d,	// (0x0007c737) grid_vitu_function_pane

0xa189,	// (0x0007c743) grid_vitu_itu_pane_ParamLimits

0xa189,	// (0x0007c743) grid_vitu_itu_pane

0xa195,	// (0x0007c74f) cell_vitu_itu_pane_ParamLimits

0xa195,	// (0x0007c74f) cell_vitu_itu_pane

0xa1aa,	// (0x0007c764) cell_vitu_function_pane_ParamLimits

0xa1aa,	// (0x0007c764) cell_vitu_function_pane

0xf078,	// (0x00081632) bg_popup_sub_pane_cp08_ParamLimits

0xf078,	// (0x00081632) bg_popup_sub_pane_cp08

0xa1bc,	// (0x0007c776) field_vitu_entry_pane_t1_ParamLimits

0xa1bc,	// (0x0007c776) field_vitu_entry_pane_t1

0x306f,	// (0x00075629) field_vitu_entry_pane_t2_ParamLimits

0x306f,	// (0x00075629) field_vitu_entry_pane_t2

0x0001,

0xf852,	// (0x00081e0c) field_vitu_entry_pane_t_ParamLimits

0xf852,	// (0x00081e0c) field_vitu_entry_pane_t

0x308c,	// (0x00075646) bg_button_pane_cp05_ParamLimits

0x308c,	// (0x00075646) bg_button_pane_cp05

0xa1d5,	// (0x0007c78f) cell_vitu_itu_pane_g1

0xa1ed,	// (0x0007c7a7) cell_vitu_itu_pane_t1_ParamLimits

0xa1ed,	// (0x0007c7a7) cell_vitu_itu_pane_t1

0xa1ff,	// (0x0007c7b9) cell_vitu_itu_pane_t2_ParamLimits

0xa1ff,	// (0x0007c7b9) cell_vitu_itu_pane_t2

0x0002,

0xf857,	// (0x00081e11) cell_vitu_itu_pane_t_ParamLimits

0xf857,	// (0x00081e11) cell_vitu_itu_pane_t

0x309a,	// (0x00075654) bg_button_pane_cp07

0xa234,	// (0x0007c7ee) cell_vitu_function_pane_g1

0x6681,	// (0x00078c3b) main_calc_pane_g1

0x6263,	// (0x0007881d) aid_visual_content_pane

0x0f8b,	// (0x00073545) main_vradio_pane

0xa23d,	// (0x0007c7f7) main_vradio_pane_g1_ParamLimits

0xa23d,	// (0x0007c7f7) main_vradio_pane_g1

0x30a4,	// (0x0007565e) main_vradio_pane_g2_ParamLimits

0x30a4,	// (0x0007565e) main_vradio_pane_g2

0x0001,

0xf85e,	// (0x00081e18) main_vradio_pane_g_ParamLimits

0xf85e,	// (0x00081e18) main_vradio_pane_g

0xa24b,	// (0x0007c805) main_vradio_pane_t1_ParamLimits

0xa24b,	// (0x0007c805) main_vradio_pane_t1

0xa25d,	// (0x0007c817) main_vradio_pane_t2_ParamLimits

0xa25d,	// (0x0007c817) main_vradio_pane_t2

0x30b1,	// (0x0007566b) main_vradio_pane_t3_ParamLimits

0x30b1,	// (0x0007566b) main_vradio_pane_t3

0x0002,

0xf863,	// (0x00081e1d) main_vradio_pane_t_ParamLimits

0xf863,	// (0x00081e1d) main_vradio_pane_t

0xa26f,	// (0x0007c829) vradio_rocker_control_pane_ParamLimits

0xa26f,	// (0x0007c829) vradio_rocker_control_pane

0xa27b,	// (0x0007c835) vradio_station_info_pane_ParamLimits

0xa27b,	// (0x0007c835) vradio_station_info_pane

0x30c3,	// (0x0007567d) vradio_frequency_info_pane_ParamLimits

0x30c3,	// (0x0007567d) vradio_frequency_info_pane

0x2b0b,	// (0x000750c5) vradio_station_info_pane_g1

0x30d2,	// (0x0007568c) vradio_station_info_pane_t1_ParamLimits

0x30d2,	// (0x0007568c) vradio_station_info_pane_t1

0x30f4,	// (0x000756ae) vradio_station_info_pane_t2_ParamLimits

0x30f4,	// (0x000756ae) vradio_station_info_pane_t2

0x0001,

0xf86a,	// (0x00081e24) vradio_station_info_pane_t_ParamLimits

0xf86a,	// (0x00081e24) vradio_station_info_pane_t

0x3106,	// (0x000756c0) vradio_tuning_pane

0x310e,	// (0x000756c8) vradio_rocker_control_pane_g1

0x3116,	// (0x000756d0) vradio_rocker_control_pane_g2

0x311e,	// (0x000756d8) vradio_rocker_control_pane_g3

0x3126,	// (0x000756e0) vradio_rocker_control_pane_g4

0x312e,	// (0x000756e8) vradio_rocker_control_pane_g5

0x0004,

0xf86f,	// (0x00081e29) vradio_rocker_control_pane_g

0xa288,	// (0x0007c842) vradio_frequency_info_pane_g1

0x3136,	// (0x000756f0) vradio_frequency_info_pane_t1_ParamLimits

0x3136,	// (0x000756f0) vradio_frequency_info_pane_t1

0xa290,	// (0x0007c84a) vradio_tuning_pane_g1

0xa299,	// (0x0007c853) vradio_tuning_pane_t1

0x0fbd,	// (0x00073577) area_side_right_pane_ParamLimits

0x0fbd,	// (0x00073577) area_side_right_pane

0x2697,	// (0x00074c51) status_small_pane_g1

0x269f,	// (0x00074c59) status_small_pane_g2

0x26a8,	// (0x00074c62) status_small_pane_g3

0x26b1,	// (0x00074c6b) status_small_pane_g4

0x0003,

0xf62f,	// (0x00081be9) status_small_pane_g

0x26ba,	// (0x00074c74) status_small_pane_t1

0x0f8b,	// (0x00073545) main_video3_pane

0x314a,	// (0x00075704) cams_zoom_vslider_pane

0x3152,	// (0x0007570c) image3_wide_pane_ParamLimits

0x3152,	// (0x0007570c) image3_wide_pane

0x316c,	// (0x00075726) image3_wide_small_pane

0x3176,	// (0x00075730) main_video3_pane_g1_ParamLimits

0x3176,	// (0x00075730) main_video3_pane_g1

0x3192,	// (0x0007574c) main_video3_pane_g2_ParamLimits

0x3192,	// (0x0007574c) main_video3_pane_g2

0x0001,

0xf87a,	// (0x00081e34) main_video3_pane_g_ParamLimits

0xf87a,	// (0x00081e34) main_video3_pane_g

0x31ae,	// (0x00075768) main_video3_pane_t1_ParamLimits

0x31ae,	// (0x00075768) main_video3_pane_t1

0x31d9,	// (0x00075793) main_video3_pane_t2_ParamLimits

0x31d9,	// (0x00075793) main_video3_pane_t2

0x3204,	// (0x000757be) main_video3_pane_t3_ParamLimits

0x3204,	// (0x000757be) main_video3_pane_t3

0x0002,

0xf87f,	// (0x00081e39) main_video3_pane_t_ParamLimits

0xf87f,	// (0x00081e39) main_video3_pane_t

0x322f,	// (0x000757e9) cams_zoom_vslider_pane_g1

0x3238,	// (0x000757f2) cams_zoom_vslider_pane_g2

0x0001,

0xf886,	// (0x00081e40) cams_zoom_vslider_pane_g

0x3240,	// (0x000757fa) small_slider_vertical_pane

0x2b0b,	// (0x000750c5) small_slider_vertical_pane_g1

0x2b0b,	// (0x000750c5) small_slider_vertical_pane_g2

0x3248,	// (0x00075802) small_slider_vertical_pane_g3

0x0002,

0xf88b,	// (0x00081e45) small_slider_vertical_pane_g

0x0f8b,	// (0x00073545) main_hwr_training_pane

0x3251,	// (0x0007580b) hwr_training_instruct_pane_ParamLimits

0x3251,	// (0x0007580b) hwr_training_instruct_pane

0xa2a8,	// (0x0007c862) hwr_training_navi_pane_ParamLimits

0xa2a8,	// (0x0007c862) hwr_training_navi_pane

0xa2bc,	// (0x0007c876) hwr_training_write_pane_ParamLimits

0xa2bc,	// (0x0007c876) hwr_training_write_pane

0x0f8b,	// (0x00073545) bg_frame_shadow_pane

0x3280,	// (0x0007583a) hwr_training_write_pane_g1

0x3288,	// (0x00075842) hwr_training_write_pane_g2

0x3290,	// (0x0007584a) hwr_training_write_pane_g3

0x3298,	// (0x00075852) hwr_training_write_pane_g4

0x32a0,	// (0x0007585a) hwr_training_write_pane_g5

0x32a8,	// (0x00075862) hwr_training_write_pane_g6

0x32b0,	// (0x0007586a) hwr_training_write_pane_g7

0x0006,

0xf892,	// (0x00081e4c) hwr_training_write_pane_g

0xa2ea,	// (0x0007c8a4) hwr_training_navi_pane_g1_ParamLimits

0xa2ea,	// (0x0007c8a4) hwr_training_navi_pane_g1

0xa2fc,	// (0x0007c8b6) hwr_training_navi_pane_g2_ParamLimits

0xa2fc,	// (0x0007c8b6) hwr_training_navi_pane_g2

0xa30e,	// (0x0007c8c8) hwr_training_navi_pane_g3_ParamLimits

0xa30e,	// (0x0007c8c8) hwr_training_navi_pane_g3

0xa31e,	// (0x0007c8d8) hwr_training_navi_pane_g4_ParamLimits

0xa31e,	// (0x0007c8d8) hwr_training_navi_pane_g4

0x0004,

0xf8a1,	// (0x00081e5b) hwr_training_navi_pane_g_ParamLimits

0xf8a1,	// (0x00081e5b) hwr_training_navi_pane_g

0xa338,	// (0x0007c8f2) hwr_training_navi_pane_t1

0xa346,	// (0x0007c900) list_single_hwr_training_instruct_pane_ParamLimits

0xa346,	// (0x0007c900) list_single_hwr_training_instruct_pane

0x32b8,	// (0x00075872) list_single_hwr_training_instruct_pane_t1

0x2a4b,	// (0x00075005) bg_frame_shadow_pane_g1

0x32c7,	// (0x00075881) bg_frame_shadow_pane_g2

0x32cf,	// (0x00075889) bg_frame_shadow_pane_g3

0x32d7,	// (0x00075891) bg_frame_shadow_pane_g4

0x32df,	// (0x00075899) bg_frame_shadow_pane_g5

0x32e7,	// (0x000758a1) bg_frame_shadow_pane_g6

0x32ef,	// (0x000758a9) bg_frame_shadow_pane_g7

0x1866,	// (0x00073e20) bg_frame_shadow_pane_g8

0x0007,

0xf8ac,	// (0x00081e66) bg_frame_shadow_pane_g

0x0f8b,	// (0x00073545) main_video_tele_dialer_pane

0xa35e,	// (0x0007c918) aid_size_cell_video_keypad_ParamLimits

0xa35e,	// (0x0007c918) aid_size_cell_video_keypad

0xa36e,	// (0x0007c928) grid_video_dialer_keypad_pane_ParamLimits

0xa36e,	// (0x0007c928) grid_video_dialer_keypad_pane

0xa39e,	// (0x0007c958) video_down_pane_cp_ParamLimits

0xa39e,	// (0x0007c958) video_down_pane_cp

0xa3c6,	// (0x0007c980) cell_video_dialer_keypad_pane_ParamLimits

0xa3c6,	// (0x0007c980) cell_video_dialer_keypad_pane

0x32f7,	// (0x000758b1) bg_button_pane_cp08_ParamLimits

0x32f7,	// (0x000758b1) bg_button_pane_cp08

0xa3db,	// (0x0007c995) cell_video_dialer_keypad_pane_g1_ParamLimits

0xa3db,	// (0x0007c995) cell_video_dialer_keypad_pane_g1

0x9bff,	// (0x0007c1b9) mup3_rocker2_pane_ParamLimits

0x9bff,	// (0x0007c1b9) mup3_rocker2_pane

0x2b0b,	// (0x000750c5) mup3_rocker2_pane_g1

0x8cc6,	// (0x0007b280) main_dialer2_pane

0x0f8b,	// (0x00073545) main_mp4_pane

0xa41a,	// (0x0007c9d4) main_mp4_pane_g1_ParamLimits

0xa41a,	// (0x0007c9d4) main_mp4_pane_g1

0xa428,	// (0x0007c9e2) main_mp4_pane_g2_ParamLimits

0xa428,	// (0x0007c9e2) main_mp4_pane_g2

0xa436,	// (0x0007c9f0) main_mp4_pane_g3_ParamLimits

0xa436,	// (0x0007c9f0) main_mp4_pane_g3

0xa46b,	// (0x0007ca25) main_mp4_pane_g4_ParamLimits

0xa46b,	// (0x0007ca25) main_mp4_pane_g4

0xa499,	// (0x0007ca53) main_mp4_pane_g5_ParamLimits

0xa499,	// (0x0007ca53) main_mp4_pane_g5

0x0005,

0xf8cc,	// (0x00081e86) main_mp4_pane_g_ParamLimits

0xf8cc,	// (0x00081e86) main_mp4_pane_g

0xa4f5,	// (0x0007caaf) main_mp4_pane_t1_ParamLimits

0xa4f5,	// (0x0007caaf) main_mp4_pane_t1

0xa54d,	// (0x0007cb07) main_mp4_pane_t2_ParamLimits

0xa54d,	// (0x0007cb07) main_mp4_pane_t2

0x3303,	// (0x000758bd) main_mp4_pane_t3_ParamLimits

0x3303,	// (0x000758bd) main_mp4_pane_t3

0xa59f,	// (0x0007cb59) main_mp4_pane_t4_ParamLimits

0xa59f,	// (0x0007cb59) main_mp4_pane_t4

0x0003,

0xf8d9,	// (0x00081e93) main_mp4_pane_t_ParamLimits

0xf8d9,	// (0x00081e93) main_mp4_pane_t

0xa5df,	// (0x0007cb99) mp4_progress_pane_ParamLimits

0xa5df,	// (0x0007cb99) mp4_progress_pane

0xa623,	// (0x0007cbdd) mp4_rocker_pane_ParamLimits

0xa623,	// (0x0007cbdd) mp4_rocker_pane

0x3331,	// (0x000758eb) mp4_progress_pane_t1

0x3348,	// (0x00075902) mp4_progress_pane_t2

0x0001,

0xf8e2,	// (0x00081e9c) mp4_progress_pane_t

0x335f,	// (0x00075919) mup_progress_pane_cp04

0x3b98,	// (0x00076152) mp4_rocker_pane_g1

0xa641,	// (0x0007cbfb) aid_cell_size_keypad2_ParamLimits

0xa641,	// (0x0007cbfb) aid_cell_size_keypad2

0xa651,	// (0x0007cc0b) dialer2_ne_pane_ParamLimits

0xa651,	// (0x0007cc0b) dialer2_ne_pane

0xa65d,	// (0x0007cc17) grid_dialer2_keypad_pane_ParamLimits

0xa65d,	// (0x0007cc17) grid_dialer2_keypad_pane

0x3bf3,	// (0x000761ad) bg_popup_call_pane_cp07_ParamLimits

0x3bf3,	// (0x000761ad) bg_popup_call_pane_cp07

0xa669,	// (0x0007cc23) dialer2_ne_pane_t1_ParamLimits

0xa669,	// (0x0007cc23) dialer2_ne_pane_t1

0xa68e,	// (0x0007cc48) cell_dialer2_keypad_pane_ParamLimits

0xa68e,	// (0x0007cc48) cell_dialer2_keypad_pane

0x337d,	// (0x00075937) bg_button_pane_pane_cp04_ParamLimits

0x337d,	// (0x00075937) bg_button_pane_pane_cp04

0xa6a3,	// (0x0007cc5d) cell_dialer2_keypad_pane_g1_ParamLimits

0xa6a3,	// (0x0007cc5d) cell_dialer2_keypad_pane_g1

0x70c0,	// (0x0007967a) aid_placing_vt_set_content_ParamLimits

0x70c0,	// (0x0007967a) aid_placing_vt_set_content

0x70e6,	// (0x000796a0) aid_placing_vt_set_title_ParamLimits

0x70e6,	// (0x000796a0) aid_placing_vt_set_title

0x0f8b,	// (0x00073545) main_image3_pane

0xa717,	// (0x0007ccd1) area_side_right_pane_cp01_ParamLimits

0xa717,	// (0x0007ccd1) area_side_right_pane_cp01

0xa744,	// (0x0007ccfe) main_image3_pane_g1_ParamLimits

0xa744,	// (0x0007ccfe) main_image3_pane_g1

0xa752,	// (0x0007cd0c) main_image3_pane_g2_ParamLimits

0xa752,	// (0x0007cd0c) main_image3_pane_g2

0xa769,	// (0x0007cd23) main_image3_pane_g3_ParamLimits

0xa769,	// (0x0007cd23) main_image3_pane_g3

0xa780,	// (0x0007cd3a) main_image3_pane_g4_ParamLimits

0xa780,	// (0x0007cd3a) main_image3_pane_g4

0x0003,

0xf8f1,	// (0x00081eab) main_image3_pane_g_ParamLimits

0xf8f1,	// (0x00081eab) main_image3_pane_g

0xa797,	// (0x0007cd51) main_image3_pane_t1_ParamLimits

0xa797,	// (0x0007cd51) main_image3_pane_t1

0xa7bc,	// (0x0007cd76) main_image3_pane_t2_ParamLimits

0xa7bc,	// (0x0007cd76) main_image3_pane_t2

0xa7db,	// (0x0007cd95) main_image3_pane_t3_ParamLimits

0xa7db,	// (0x0007cd95) main_image3_pane_t3

0x0003,

0xf8fa,	// (0x00081eb4) main_image3_pane_t_ParamLimits

0xf8fa,	// (0x00081eb4) main_image3_pane_t

0x343e,	// (0x000759f8) grid_sctrl_middle_pane_cp01_ParamLimits

0x343e,	// (0x000759f8) grid_sctrl_middle_pane_cp01

0xa836,	// (0x0007cdf0) cell_sctrl_middle_pane_cp01_ParamLimits

0xa836,	// (0x0007cdf0) cell_sctrl_middle_pane_cp01

0xa847,	// (0x0007ce01) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0xa847,	// (0x0007ce01) cell_sctrl_middle_pane_cp01_g1

0x0f8b,	// (0x00073545) main_call4_pane

0xa854,	// (0x0007ce0e) aid_size_button_call4_ParamLimits

0xa854,	// (0x0007ce0e) aid_size_button_call4

0xa87e,	// (0x0007ce38) call4_windows_pane_ParamLimits

0xa87e,	// (0x0007ce38) call4_windows_pane

0xa892,	// (0x0007ce4c) grid_call4_button_pane_ParamLimits

0xa892,	// (0x0007ce4c) grid_call4_button_pane

0x33a1,	// (0x0007595b) call4_windows_conf_pane

0xa8ac,	// (0x0007ce66) popup_call4_audio_first_window_ParamLimits

0xa8ac,	// (0x0007ce66) popup_call4_audio_first_window

0xa8cc,	// (0x0007ce86) popup_call4_audio_second_window_ParamLimits

0xa8cc,	// (0x0007ce86) popup_call4_audio_second_window

0x33d4,	// (0x0007598e) popup_call4_audio_wait_window_ParamLimits

0x33d4,	// (0x0007598e) popup_call4_audio_wait_window

0xa8de,	// (0x0007ce98) cell_call4_button_pane_ParamLimits

0xa8de,	// (0x0007ce98) cell_call4_button_pane

0x1806,	// (0x00073dc0) bg_button_pane_cp09_ParamLimits

0x1806,	// (0x00073dc0) bg_button_pane_cp09

0xa901,	// (0x0007cebb) cell_call4_button_pane_g1_ParamLimits

0xa901,	// (0x0007cebb) cell_call4_button_pane_g1

0xa90e,	// (0x0007cec8) cell_call4_button_pane_t1_ParamLimits

0xa90e,	// (0x0007cec8) cell_call4_button_pane_t1

0x341a,	// (0x000759d4) popup_call4_audio_conf_window_ParamLimits

0x341a,	// (0x000759d4) popup_call4_audio_conf_window

0x9c30,	// (0x0007c1ea) mup3_progress_pane_t1_ParamLimits

0x9c46,	// (0x0007c200) mup3_progress_pane_t2_ParamLimits

0x2de1,	// (0x0007539b) mup3_progress_pane_t3_ParamLimits

0xf7d3,	// (0x00081d8d) mup3_progress_pane_t_ParamLimits

0x2df8,	// (0x000753b2) mup_progress_pane_cp03_ParamLimits

0xa15a,	// (0x0007c714) mup3_control_keys_pane_g4_copy1

0xa60d,	// (0x0007cbc7) mp4_rocker2_pane_ParamLimits

0xa60d,	// (0x0007cbc7) mp4_rocker2_pane

0x3436,	// (0x000759f0) mp4_rocker2_pane_g1

0x342e,	// (0x000759e8) mp4_rocker2_pane_g2

0xa920,	// (0x0007ceda) mp4_rocker2_pane_g3

0xa928,	// (0x0007cee2) mp4_rocker2_pane_g4

0xa930,	// (0x0007ceea) mp4_rocker2_pane_g5

0x0004,

0xf903,	// (0x00081ebd) mp4_rocker2_pane_g

0x0f8b,	// (0x00073545) main_camera4_pane

0x0f8b,	// (0x00073545) main_video4_pane

0xa37a,	// (0x0007c934) main_video_tele_dialer_pane_t1_ParamLimits

0xa37a,	// (0x0007c934) main_video_tele_dialer_pane_t1

0xa38c,	// (0x0007c946) main_video_tele_dialer_pane_t2_ParamLimits

0xa38c,	// (0x0007c946) main_video_tele_dialer_pane_t2

0x0001,

0xf8bd,	// (0x00081e77) main_video_tele_dialer_pane_t_ParamLimits

0xf8bd,	// (0x00081e77) main_video_tele_dialer_pane_t

0xa94e,	// (0x0007cf08) cam4_autofocus_pane_ParamLimits

0xa94e,	// (0x0007cf08) cam4_autofocus_pane

0xa964,	// (0x0007cf1e) cam4_image_uncrop_pane_ParamLimits

0xa964,	// (0x0007cf1e) cam4_image_uncrop_pane

0xa979,	// (0x0007cf33) cam4_indicators_pane_ParamLimits

0xa979,	// (0x0007cf33) cam4_indicators_pane

0xa993,	// (0x0007cf4d) main_camera4_pane_g1_ParamLimits

0xa993,	// (0x0007cf4d) main_camera4_pane_g1

0xa99f,	// (0x0007cf59) main_camera4_pane_g2_ParamLimits

0xa99f,	// (0x0007cf59) main_camera4_pane_g2

0xa99f,	// (0x0007cf59) main_camera4_pane_g3_ParamLimits

0xa99f,	// (0x0007cf59) main_camera4_pane_g3

0xa9ab,	// (0x0007cf65) main_camera4_pane_g4_ParamLimits

0xa9ab,	// (0x0007cf65) main_camera4_pane_g4

0xa9b7,	// (0x0007cf71) main_camera4_pane_g5_ParamLimits

0xa9b7,	// (0x0007cf71) main_camera4_pane_g5

0x0005,

0xf90e,	// (0x00081ec8) main_camera4_pane_g_ParamLimits

0xf90e,	// (0x00081ec8) main_camera4_pane_g

0xa9d1,	// (0x0007cf8b) main_camera4_pane_t1_ParamLimits

0xa9d1,	// (0x0007cf8b) main_camera4_pane_t1

0xaa19,	// (0x0007cfd3) bg_tb_trans_pane_cp06

0xaa2f,	// (0x0007cfe9) cam4_indicators_pane_g1

0xaa3f,	// (0x0007cff9) cam4_indicators_pane_g2

0x0002,

0xf929,	// (0x00081ee3) cam4_indicators_pane_g

0xaa5f,	// (0x0007d019) cam4_indicators_pane_t1

0xaa87,	// (0x0007d041) main_video4_pane_g1_ParamLimits

0xaa87,	// (0x0007d041) main_video4_pane_g1

0xa99f,	// (0x0007cf59) main_video4_pane_g2_ParamLimits

0xa99f,	// (0x0007cf59) main_video4_pane_g2

0xa99f,	// (0x0007cf59) main_video4_pane_g3_ParamLimits

0xa99f,	// (0x0007cf59) main_video4_pane_g3

0xa9ab,	// (0x0007cf65) main_video4_pane_g4_ParamLimits

0xa9ab,	// (0x0007cf65) main_video4_pane_g4

0x0004,

0xf930,	// (0x00081eea) main_video4_pane_g_ParamLimits

0xf930,	// (0x00081eea) main_video4_pane_g

0xaa9b,	// (0x0007d055) vid4_indicators_pane_ParamLimits

0xaa9b,	// (0x0007d055) vid4_indicators_pane

0xaab9,	// (0x0007d073) video4_image_uncrop_cif_pane_ParamLimits

0xaab9,	// (0x0007d073) video4_image_uncrop_cif_pane

0xaac6,	// (0x0007d080) video4_image_uncrop_nhd_pane_ParamLimits

0xaac6,	// (0x0007d080) video4_image_uncrop_nhd_pane

0xa964,	// (0x0007cf1e) video4_image_uncrop_vga_pane_ParamLimits

0xa964,	// (0x0007cf1e) video4_image_uncrop_vga_pane

0xaad3,	// (0x0007d08d) bg_tb_trans_pane_cp07

0xaa2f,	// (0x0007cfe9) vid4_indicators_pane_g1

0xaae1,	// (0x0007d09b) vid4_indicators_pane_g2

0xaaf1,	// (0x0007d0ab) vid4_indicators_pane_g3

0x0004,

0xf93b,	// (0x00081ef5) vid4_indicators_pane_g

0xab1e,	// (0x0007d0d8) vid4_indicators_pane_t1

0xab38,	// (0x0007d0f2) cam4_autofocus_pane_g1

0xab40,	// (0x0007d0fa) cam4_autofocus_pane_g2

0xab48,	// (0x0007d102) cam4_autofocus_pane_g3

0x0002,

0xf946,	// (0x00081f00) cam4_autofocus_pane_g

0xab50,	// (0x0007d10a) cam4_autofocus_pane_g3_copy1

0xa3aa,	// (0x0007c964) video_down_pane_cp_t1

0xa3b8,	// (0x0007c972) video_down_pane_cp_t2

0x0001,

0xf8c2,	// (0x00081e7c) video_down_pane_cp_t

0x343e,	// (0x000759f8) popup_vitu2_window_ParamLimits

0x343e,	// (0x000759f8) popup_vitu2_window

0xab58,	// (0x0007d112) aid_size_cell2_itu2_ParamLimits

0xab58,	// (0x0007d112) aid_size_cell2_itu2

0xab7a,	// (0x0007d134) aid_size_cell_itu2_ParamLimits

0xab7a,	// (0x0007d134) aid_size_cell_itu2

0xabb8,	// (0x0007d172) bg_popup_window_pane_cp09_ParamLimits

0xabb8,	// (0x0007d172) bg_popup_window_pane_cp09

0xabc6,	// (0x0007d180) field_vitu2_entry_pane_ParamLimits

0xabc6,	// (0x0007d180) field_vitu2_entry_pane

0xabdc,	// (0x0007d196) grid_vitu2_function_pane_ParamLimits

0xabdc,	// (0x0007d196) grid_vitu2_function_pane

0xac0e,	// (0x0007d1c8) grid_vitu2_itu_pane_ParamLimits

0xac0e,	// (0x0007d1c8) grid_vitu2_itu_pane

0xac64,	// (0x0007d21e) cell_vitu2_itu_pane_ParamLimits

0xac64,	// (0x0007d21e) cell_vitu2_itu_pane

0xac79,	// (0x0007d233) cell_vitu2_function_pane_ParamLimits

0xac79,	// (0x0007d233) cell_vitu2_function_pane

0x344c,	// (0x00075a06) bg_popup_call_pane_cp08_ParamLimits

0x344c,	// (0x00075a06) bg_popup_call_pane_cp08

0x3465,	// (0x00075a1f) field_vitu2_entry_pane_g1

0x3471,	// (0x00075a2b) field_vitu2_entry_pane_g2

0x0002,

0xf94d,	// (0x00081f07) field_vitu2_entry_pane_g

0x348b,	// (0x00075a45) field_vitu2_entry_pane_t1_ParamLimits

0x348b,	// (0x00075a45) field_vitu2_entry_pane_t1

0x34a6,	// (0x00075a60) field_vitu2_entry_pane_t2_ParamLimits

0x34a6,	// (0x00075a60) field_vitu2_entry_pane_t2

0x0001,

0xf954,	// (0x00081f0e) field_vitu2_entry_pane_t_ParamLimits

0xf954,	// (0x00081f0e) field_vitu2_entry_pane_t

0xacb8,	// (0x0007d272) bg_button_pane_cp010_ParamLimits

0xacb8,	// (0x0007d272) bg_button_pane_cp010

0xacc6,	// (0x0007d280) cell_vitu2_itu_pane_g1

0xace4,	// (0x0007d29e) cell_vitu2_itu_pane_t1_ParamLimits

0xace4,	// (0x0007d29e) cell_vitu2_itu_pane_t1

0x6174,	// (0x0007872e) cell_vitu2_itu_pane_t2_ParamLimits

0x6174,	// (0x0007872e) cell_vitu2_itu_pane_t2

0x0002,

0xf95e,	// (0x00081f18) cell_vitu2_itu_pane_t_ParamLimits

0xf95e,	// (0x00081f18) cell_vitu2_itu_pane_t

0xaad3,	// (0x0007d08d) bg_button_pane_cp011

0xad36,	// (0x0007d2f0) cell_vitu2_function_pane_g1

0x0f8b,	// (0x00073545) main_myfav_hc_pane

0xa81b,	// (0x0007cdd5) popup_image3_note_pane_ParamLimits

0xa81b,	// (0x0007cdd5) popup_image3_note_pane

0xa827,	// (0x0007cde1) popup_image3_tool_bar_pane_ParamLimits

0xa827,	// (0x0007cde1) popup_image3_tool_bar_pane

0x61e2,	// (0x0007879c) cell_vitu2_itu_pane_t3_ParamLimits

0x61e2,	// (0x0007879c) cell_vitu2_itu_pane_t3

0x0f8b,	// (0x00073545) bg_popup_trans_pane

0x34cb,	// (0x00075a85) grid_image3_tool_bar_pane

0x34d5,	// (0x00075a8f) bg_popup_trans_pane_g1

0x1d09,	// (0x000742c3) bg_popup_trans_pane_g2

0x34dd,	// (0x00075a97) bg_popup_trans_pane_g3

0x34e5,	// (0x00075a9f) bg_popup_trans_pane_g4

0x34ed,	// (0x00075aa7) bg_popup_trans_pane_g5

0x34f5,	// (0x00075aaf) bg_popup_trans_pane_g6

0x34fd,	// (0x00075ab7) bg_popup_trans_pane_g7

0x3505,	// (0x00075abf) bg_popup_trans_pane_g8

0x1ce9,	// (0x000742a3) bg_popup_trans_pane_g9

0x0008,

0xf965,	// (0x00081f1f) bg_popup_trans_pane_g

0xf092,	// (0x0008164c) cell_image3_tool_bar_pane_ParamLimits

0xf092,	// (0x0008164c) cell_image3_tool_bar_pane

0x2b0b,	// (0x000750c5) cell_image3_tool_bar_pane_g1

0x0f8b,	// (0x00073545) bg_popup_trans_pane_cp1

0x350d,	// (0x00075ac7) popup_image3_note_pane_t1

0x351b,	// (0x00075ad5) popup_image3_note_pane_t2

0x3529,	// (0x00075ae3) popup_image3_note_pane_t3

0x0002,

0xf978,	// (0x00081f32) popup_image3_note_pane_t

0x3537,	// (0x00075af1) popup_image3_note_pane_t3_copy1

0xad4a,	// (0x0007d304) bg_myfav_hc_instruction_pane_ParamLimits

0xad4a,	// (0x0007d304) bg_myfav_hc_instruction_pane

0xad5c,	// (0x0007d316) cell_myfav_contact_pane_ParamLimits

0xad5c,	// (0x0007d316) cell_myfav_contact_pane

0xad76,	// (0x0007d330) cell_myfav_contact_pane_cp1_ParamLimits

0xad76,	// (0x0007d330) cell_myfav_contact_pane_cp1

0xad8c,	// (0x0007d346) cell_myfav_contact_pane_cp2_ParamLimits

0xad8c,	// (0x0007d346) cell_myfav_contact_pane_cp2

0xada2,	// (0x0007d35c) cell_myfav_contact_pane_cp3_ParamLimits

0xada2,	// (0x0007d35c) cell_myfav_contact_pane_cp3

0xadb7,	// (0x0007d371) cell_myfav_contact_pane_cp4_ParamLimits

0xadb7,	// (0x0007d371) cell_myfav_contact_pane_cp4

0xadcb,	// (0x0007d385) cell_myfav_contact_pane_cp5_ParamLimits

0xadcb,	// (0x0007d385) cell_myfav_contact_pane_cp5

0xaddf,	// (0x0007d399) cell_myfav_contact_pane_cp6_ParamLimits

0xaddf,	// (0x0007d399) cell_myfav_contact_pane_cp6

0xadf3,	// (0x0007d3ad) cell_myfav_contact_pane_cp7_ParamLimits

0xadf3,	// (0x0007d3ad) cell_myfav_contact_pane_cp7

0x3545,	// (0x00075aff) listscroll_gen_pane_cp05

0xae0b,	// (0x0007d3c5) main_myfav_hc_pane_g1_ParamLimits

0xae0b,	// (0x0007d3c5) main_myfav_hc_pane_g1

0xae21,	// (0x0007d3db) main_myfav_hc_pane_g2_ParamLimits

0xae21,	// (0x0007d3db) main_myfav_hc_pane_g2

0x0002,

0xf97f,	// (0x00081f39) main_myfav_hc_pane_g_ParamLimits

0xf97f,	// (0x00081f39) main_myfav_hc_pane_g

0xae4b,	// (0x0007d405) main_myfav_hc_pane_t1_ParamLimits

0xae4b,	// (0x0007d405) main_myfav_hc_pane_t1

0x354e,	// (0x00075b08) main_myfav_hc_pane_t2_ParamLimits

0x354e,	// (0x00075b08) main_myfav_hc_pane_t2

0x3560,	// (0x00075b1a) main_myfav_hc_pane_t3_ParamLimits

0x3560,	// (0x00075b1a) main_myfav_hc_pane_t3

0xae60,	// (0x0007d41a) main_myfav_hc_pane_t4_ParamLimits

0xae60,	// (0x0007d41a) main_myfav_hc_pane_t4

0x0004,

0xf986,	// (0x00081f40) main_myfav_hc_pane_t_ParamLimits

0xf986,	// (0x00081f40) main_myfav_hc_pane_t

0x2b0b,	// (0x000750c5) bg_myfav_hc_instruction_pane_g1

0x3572,	// (0x00075b2c) cell_myfav_contact_pane_g1_ParamLimits

0x3572,	// (0x00075b2c) cell_myfav_contact_pane_g1

0x3572,	// (0x00075b2c) cell_myfav_contact_pane_g2_ParamLimits

0x3572,	// (0x00075b2c) cell_myfav_contact_pane_g2

0x357e,	// (0x00075b38) cell_myfav_contact_pane_g3_ParamLimits

0x357e,	// (0x00075b38) cell_myfav_contact_pane_g3

0x2dcb,	// (0x00075385) cell_myfav_contact_pane_g4_ParamLimits

0x2dcb,	// (0x00075385) cell_myfav_contact_pane_g4

0x358b,	// (0x00075b45) cell_myfav_contact_pane_g5_ParamLimits

0x358b,	// (0x00075b45) cell_myfav_contact_pane_g5

0x0004,

0xf991,	// (0x00081f4b) cell_myfav_contact_pane_g_ParamLimits

0xf991,	// (0x00081f4b) cell_myfav_contact_pane_g

0xae37,	// (0x0007d3f1) main_myfav_hc_pane_g3_ParamLimits

0xae37,	// (0x0007d3f1) main_myfav_hc_pane_g3

0x639a,	// (0x00078954) popup_adpt_find_window

0xae84,	// (0x0007d43e) afind_page_pane_ParamLimits

0xae84,	// (0x0007d43e) afind_page_pane

0xae91,	// (0x0007d44b) aid_size_cell_afind_ParamLimits

0xae91,	// (0x0007d44b) aid_size_cell_afind

0xaeab,	// (0x0007d465) bg_popup_sub_pane_cp09_ParamLimits

0xaeab,	// (0x0007d465) bg_popup_sub_pane_cp09

0xaeb8,	// (0x0007d472) find_pane_cp01_ParamLimits

0xaeb8,	// (0x0007d472) find_pane_cp01

0x3597,	// (0x00075b51) grid_afind_control_pane_ParamLimits

0x3597,	// (0x00075b51) grid_afind_control_pane

0xaec5,	// (0x0007d47f) grid_afind_pane_ParamLimits

0xaec5,	// (0x0007d47f) grid_afind_pane

0xaedb,	// (0x0007d495) cell_afind_pane_ParamLimits

0xaedb,	// (0x0007d495) cell_afind_pane

0x2b0b,	// (0x000750c5) afind_page_pane_g1

0xaf11,	// (0x0007d4cb) afind_page_pane_g2

0xaf1a,	// (0x0007d4d4) afind_page_pane_g3

0x0002,

0xf99c,	// (0x00081f56) afind_page_pane_g

0xaf23,	// (0x0007d4dd) afind_page_pane_t1

0x35ab,	// (0x00075b65) cell_afind_grid_control_pane_ParamLimits

0x35ab,	// (0x00075b65) cell_afind_grid_control_pane

0x337d,	// (0x00075937) bg_button_pane_cp69_ParamLimits

0x337d,	// (0x00075937) bg_button_pane_cp69

0xaf43,	// (0x0007d4fd) cell_afind_pane_g1_ParamLimits

0xaf43,	// (0x0007d4fd) cell_afind_pane_g1

0xaf50,	// (0x0007d50a) cell_afind_pane_t1_ParamLimits

0xaf50,	// (0x0007d50a) cell_afind_pane_t1

0x1a55,	// (0x0007400f) bg_button_pane_cp72

0x35ba,	// (0x00075b74) cell_afind_grid_control_pane_g1

0x88fe,	// (0x0007aeb8) aid_image_placing_area_ParamLimits

0x88fe,	// (0x0007aeb8) aid_image_placing_area

0x3057,	// (0x00075611) field_vitu_entry_pane_g1_ParamLimits

0x3057,	// (0x00075611) field_vitu_entry_pane_g1

0x3063,	// (0x0007561d) field_vitu_entry_pane_g2_ParamLimits

0x3063,	// (0x0007561d) field_vitu_entry_pane_g2

0x0001,

0xf84d,	// (0x00081e07) field_vitu_entry_pane_g_ParamLimits

0xf84d,	// (0x00081e07) field_vitu_entry_pane_g

0xa1d5,	// (0x0007c78f) cell_vitu_itu_pane_g1_ParamLimits

0xa217,	// (0x0007c7d1) cell_vitu_itu_pane_t3_ParamLimits

0xa217,	// (0x0007c7d1) cell_vitu_itu_pane_t3

0x3331,	// (0x000758eb) mp4_progress_pane_t1_ParamLimits

0x3348,	// (0x00075902) mp4_progress_pane_t2_ParamLimits

0xf8e2,	// (0x00081e9c) mp4_progress_pane_t_ParamLimits

0x335f,	// (0x00075919) mup_progress_pane_cp04_ParamLimits

0xae72,	// (0x0007d42c) main_myfav_hc_pane_t5_ParamLimits

0xae72,	// (0x0007d42c) main_myfav_hc_pane_t5

0x0fad,	// (0x00073567) aid_zoom_text_primary

0x639a,	// (0x00078954) popup_adpt_find_window_ParamLimits

0xf078,	// (0x00081632) main_cam_set_pane

0xa987,	// (0x0007cf41) cam4_zoom_pane_ParamLimits

0xa987,	// (0x0007cf41) cam4_zoom_pane

0xaf62,	// (0x0007d51c) main_cam_set_pane_g1_ParamLimits

0xaf62,	// (0x0007d51c) main_cam_set_pane_g1

0xaf70,	// (0x0007d52a) main_cam_set_pane_g2_ParamLimits

0xaf70,	// (0x0007d52a) main_cam_set_pane_g2

0x0001,

0xf9a3,	// (0x00081f5d) main_cam_set_pane_g_ParamLimits

0xf9a3,	// (0x00081f5d) main_cam_set_pane_g

0xaf7c,	// (0x0007d536) main_cam_set_pane_t1_ParamLimits

0xaf7c,	// (0x0007d536) main_cam_set_pane_t1

0xaf8e,	// (0x0007d548) main_cset_listscroll_pane_ParamLimits

0xaf8e,	// (0x0007d548) main_cset_listscroll_pane

0xafb7,	// (0x0007d571) main_cset_slider_pane_ParamLimits

0xafb7,	// (0x0007d571) main_cset_slider_pane

0x35cb,	// (0x00075b85) main_cset_list_pane_ParamLimits

0x35cb,	// (0x00075b85) main_cset_list_pane

0x35db,	// (0x00075b95) scroll_pane_cp028

0xafd6,	// (0x0007d590) aid_area_touch_slider

0xaff2,	// (0x0007d5ac) cset_slider_pane

0xb01c,	// (0x0007d5d6) main_cset_slider_pane_g1

0xb031,	// (0x0007d5eb) main_cset_slider_pane_g2

0x0011,

0xf9a8,	// (0x00081f62) main_cset_slider_pane_g

0x3614,	// (0x00075bce) main_cset_slider_pane_t1

0xb0ed,	// (0x0007d6a7) main_cset_slider_pane_t2

0xb107,	// (0x0007d6c1) main_cset_slider_pane_t3

0xb121,	// (0x0007d6db) main_cset_slider_pane_t4

0xb13b,	// (0x0007d6f5) main_cset_slider_pane_t5

0xb155,	// (0x0007d70f) main_cset_slider_pane_t6

0xb16a,	// (0x0007d724) main_cset_slider_pane_t7

0x000e,

0xf9cd,	// (0x00081f87) main_cset_slider_pane_t

0xb26e,	// (0x0007d828) cset_list_set_pane_ParamLimits

0xb26e,	// (0x0007d828) cset_list_set_pane

0xb27e,	// (0x0007d838) aid_position_infowindow_above

0xb286,	// (0x0007d840) aid_position_infowindow_below

0xb28e,	// (0x0007d848) cset_list_set_pane_g1_ParamLimits

0xb28e,	// (0x0007d848) cset_list_set_pane_g1

0x36b4,	// (0x00075c6e) cset_list_set_pane_g3_ParamLimits

0x36b4,	// (0x00075c6e) cset_list_set_pane_g3

0x0001,

0xf9ec,	// (0x00081fa6) cset_list_set_pane_g_ParamLimits

0xf9ec,	// (0x00081fa6) cset_list_set_pane_g

0x36c3,	// (0x00075c7d) cset_list_set_pane_t1_ParamLimits

0x36c3,	// (0x00075c7d) cset_list_set_pane_t1

0xf078,	// (0x00081632) list_highlight_pane_cp021_ParamLimits

0xf078,	// (0x00081632) list_highlight_pane_cp021

0xe177,	// (0x00080731) cset_slider_pane_g1

0xe189,	// (0x00080743) cset_slider_pane_g2

0xe180,	// (0x0008073a) cset_slider_pane_g3

0x0002,

0xf9f1,	// (0x00081fab) cset_slider_pane_g

0xb29a,	// (0x0007d854) aid_area_touch_cam4_zoom

0xb2a2,	// (0x0007d85c) cam4_zoom_cont_pane

0xb2aa,	// (0x0007d864) cam4_zoom_pane_g1

0xb2b2,	// (0x0007d86c) cam4_zoom_pane_g2

0xb2ba,	// (0x0007d874) cam4_zoom_pane_g3

0x0002,

0xf9f8,	// (0x00081fb2) cam4_zoom_pane_g

0xb2c2,	// (0x0007d87c) cam4_zoom_cont_pane_g1

0xb2cb,	// (0x0007d885) cam4_zoom_cont_pane_g2

0xb2d4,	// (0x0007d88e) cam4_zoom_cont_pane_g3

0x0002,

0xf9ff,	// (0x00081fb9) cam4_zoom_cont_pane_g

0xa86e,	// (0x0007ce28) call4_image_pane_ParamLimits

0xa86e,	// (0x0007ce28) call4_image_pane

0x33a1,	// (0x0007595b) call4_windows_conf_pane_ParamLimits

0x33b4,	// (0x0007596e) popup_call4_audio_in_window_ParamLimits

0x33b4,	// (0x0007596e) popup_call4_audio_in_window

0x0f8b,	// (0x00073545) bg_popup_call2_act_pane_cp02

0x3412,	// (0x000759cc) call4_list_conf_pane

0x2b0b,	// (0x000750c5) call4_image_pane_g1

0x2b0b,	// (0x000750c5) call4_image_pane_g2

0x0001,

0xf713,	// (0x00081ccd) call4_image_pane_g

0x36f3,	// (0x00075cad) list_single_graphic_popup_conf4_pane_ParamLimits

0x36f3,	// (0x00075cad) list_single_graphic_popup_conf4_pane

0x0f8b,	// (0x00073545) list_highlight_pane_cp022

0x3706,	// (0x00075cc0) list_single_graphic_popup_conf4_pane_g1

0xdddc,	// (0x00080396) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xfa06,	// (0x00081fc0) list_single_graphic_popup_conf4_pane_g

0x370e,	// (0x00075cc8) list_single_graphic_popup_conf4_pane_t1

0x722a,	// (0x000797e4) popup_vtel_slider_window_ParamLimits

0x722a,	// (0x000797e4) popup_vtel_slider_window

0x336b,	// (0x00075925) dialer2_ne_pane_t2_ParamLimits

0x336b,	// (0x00075925) dialer2_ne_pane_t2

0x0001,

0xf8e7,	// (0x00081ea1) dialer2_ne_pane_t_ParamLimits

0xf8e7,	// (0x00081ea1) dialer2_ne_pane_t

0xf078,	// (0x00081632) bg_popup_sub_pane_cp010_ParamLimits

0xf078,	// (0x00081632) bg_popup_sub_pane_cp010

0xb2dd,	// (0x0007d897) popup_vtel_slider_window_g1_ParamLimits

0xb2dd,	// (0x0007d897) popup_vtel_slider_window_g1

0xb2e9,	// (0x0007d8a3) popup_vtel_slider_window_g2_ParamLimits

0xb2e9,	// (0x0007d8a3) popup_vtel_slider_window_g2

0x0003,

0xfa0b,	// (0x00081fc5) popup_vtel_slider_window_g_ParamLimits

0xfa0b,	// (0x00081fc5) popup_vtel_slider_window_g

0xb32f,	// (0x0007d8e9) vtel_slider_pane_ParamLimits

0xb32f,	// (0x0007d8e9) vtel_slider_pane

0xb33e,	// (0x0007d8f8) vtel_slider_pane_g1_ParamLimits

0xb33e,	// (0x0007d8f8) vtel_slider_pane_g1

0xb34b,	// (0x0007d905) vtel_slider_pane_g2_ParamLimits

0xb34b,	// (0x0007d905) vtel_slider_pane_g2

0xb358,	// (0x0007d912) vtel_slider_pane_g3_ParamLimits

0xb358,	// (0x0007d912) vtel_slider_pane_g3

0xb33e,	// (0x0007d8f8) vtel_slider_pane_g4_ParamLimits

0xb33e,	// (0x0007d8f8) vtel_slider_pane_g4

0xb365,	// (0x0007d91f) vtel_slider_pane_g5_ParamLimits

0xb365,	// (0x0007d91f) vtel_slider_pane_g5

0x0004,

0xfa14,	// (0x00081fce) vtel_slider_pane_g_ParamLimits

0xfa14,	// (0x00081fce) vtel_slider_pane_g

0x0f8b,	// (0x00073545) main_gallery2_pane

0xaba0,	// (0x0007d15a) aid_size_row_itut2_dropdow_list_ParamLimits

0xaba0,	// (0x0007d15a) aid_size_row_itut2_dropdow_list

0xabf4,	// (0x0007d1ae) grid_vitu2_function_top_pane_ParamLimits

0xabf4,	// (0x0007d1ae) grid_vitu2_function_top_pane

0xac2e,	// (0x0007d1e8) popup_vitu2_dropdown_list_window_ParamLimits

0xac2e,	// (0x0007d1e8) popup_vitu2_dropdown_list_window

0xac48,	// (0x0007d202) popup_vitu2_match_list_window

0xb372,	// (0x0007d92c) cell_vitu2_function_top_pane_ParamLimits

0xb372,	// (0x0007d92c) cell_vitu2_function_top_pane

0xb392,	// (0x0007d94c) cell_vitu2_function_top_pane_cp01_ParamLimits

0xb392,	// (0x0007d94c) cell_vitu2_function_top_pane_cp01

0xb3b2,	// (0x0007d96c) cell_vitu2_function_top_wide_pane_ParamLimits

0xb3b2,	// (0x0007d96c) cell_vitu2_function_top_wide_pane

0xaad3,	// (0x0007d08d) bg_button_pane_cp012

0xb3d0,	// (0x0007d98a) cell_vitu2_function_top_pane_g1

0xb3df,	// (0x0007d999) bg_button_pane_cp013_ParamLimits

0xb3df,	// (0x0007d999) bg_button_pane_cp013

0xb3fb,	// (0x0007d9b5) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xb3fb,	// (0x0007d9b5) cell_vitu2_function_top_wide_pane_g1

0xb413,	// (0x0007d9cd) bg_popup_sub_pane_cp20

0xb421,	// (0x0007d9db) list_vitu2_match_list_pane

0x34d5,	// (0x00075a8f) bg_popup_sub_pane_cp20_g1

0x34dd,	// (0x00075a97) bg_popup_sub_pane_cp20_g2

0x1d09,	// (0x000742c3) bg_popup_sub_pane_cp20_g3

0x34e5,	// (0x00075a9f) bg_popup_sub_pane_cp20_g4

0x1ce9,	// (0x000742a3) bg_popup_sub_pane_cp20_g5

0x3732,	// (0x00075cec) bg_popup_sub_pane_cp20_g6

0x34f5,	// (0x00075aaf) bg_popup_sub_pane_cp20_g7

0x34fd,	// (0x00075ab7) bg_popup_sub_pane_cp20_g8

0x3505,	// (0x00075abf) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa1f,	// (0x00081fd9) bg_popup_sub_pane_cp20_g

0xb439,	// (0x0007d9f3) list_vitu2_match_list_item_pane_ParamLimits

0xb439,	// (0x0007d9f3) list_vitu2_match_list_item_pane

0xb44b,	// (0x0007da05) list_vitu2_match_list_item_pane_t1

0x674a,	// (0x00078d04) bg_popup_sub_pane_cp21

0xb485,	// (0x0007da3f) grid_vitu2_dropdown_list_pane

0xb48d,	// (0x0007da47) cell_vitu2_dropdown_list_char_pane_ParamLimits

0xb48d,	// (0x0007da47) cell_vitu2_dropdown_list_char_pane

0xb4ae,	// (0x0007da68) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0xb4ae,	// (0x0007da68) cell_vitu2_dropdown_list_ctrl_pane

0x374c,	// (0x00075d06) cell_vitu2_dropdown_list_char_pane_g1

0x3743,	// (0x00075cfd) cell_vitu2_dropdown_list_char_pane_g2

0x373a,	// (0x00075cf4) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa3c,	// (0x00081ff6) cell_vitu2_dropdown_list_char_pane_g

0xb4da,	// (0x0007da94) cell_vitu2_dropdown_list_char_pane_t1

0xb4e8,	// (0x0007daa2) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xb4e8,	// (0x0007daa2) cell_vitu2_dropdown_list_ctrl_pane_g1

0xb4f8,	// (0x0007dab2) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xb4f8,	// (0x0007dab2) cell_vitu2_dropdown_list_ctrl_pane_g2

0xb509,	// (0x0007dac3) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xb509,	// (0x0007dac3) cell_vitu2_dropdown_list_ctrl_pane_g3

0xb519,	// (0x0007dad3) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0xb519,	// (0x0007dad3) cell_vitu2_dropdown_list_ctrl_pane_g4

0xaa19,	// (0x0007cfd3) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xaa19,	// (0x0007cfd3) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa43,	// (0x00081ffd) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa43,	// (0x00081ffd) cell_vitu2_dropdown_list_ctrl_pane_g

0xb532,	// (0x0007daec) aid_size_cell_gallery2_ParamLimits

0xb532,	// (0x0007daec) aid_size_cell_gallery2

0xb540,	// (0x0007dafa) grid_gallery2_pane_ParamLimits

0xb540,	// (0x0007dafa) grid_gallery2_pane

0xb54d,	// (0x0007db07) scroll_pane_cp029_ParamLimits

0xb54d,	// (0x0007db07) scroll_pane_cp029

0xb559,	// (0x0007db13) cell_gallery2_pane_ParamLimits

0xb559,	// (0x0007db13) cell_gallery2_pane

0x3755,	// (0x00075d0f) cell_gallery2_pane_g2

0xb585,	// (0x0007db3f) cell_gallery2_pane_g3

0x375f,	// (0x00075d19) cell_gallery2_pane_g4

0x3767,	// (0x00075d21) cell_gallery2_pane_g5

0xe041,	// (0x000805fb) grid_highlight_pane_cp10

0xac48,	// (0x0007d202) popup_vitu2_match_list_window_ParamLimits

0xac58,	// (0x0007d212) popup_vitu2_query_window_ParamLimits

0xac58,	// (0x0007d212) popup_vitu2_query_window

0x674a,	// (0x00078d04) bg_vitu2_candi_button_pane

0x374c,	// (0x00075d06) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x3743,	// (0x00075cfd) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x373a,	// (0x00075cf4) cell_vitu2_dropdown_list_char_pane_g2_copy2

0xb58d,	// (0x0007db47) bg_button_pane_cp015

0xb59d,	// (0x0007db57) bg_button_pane_cp016

0xb5b0,	// (0x0007db6a) bg_button_pane_cp017

0x26d0,	// (0x00074c8a) bg_popup_sub_pane_cp22

0x376f,	// (0x00075d29) popup_vitu2_query_window_g1

0xb5f3,	// (0x0007dbad) popup_vitu2_query_window_g2

0x0002,

0xfa4e,	// (0x00082008) popup_vitu2_query_window_g

0xb60e,	// (0x0007dbc8) popup_vitu2_query_window_t1_ParamLimits

0xb60e,	// (0x0007dbc8) popup_vitu2_query_window_t1

0xb641,	// (0x0007dbfb) popup_vitu2_query_window_t2_ParamLimits

0xb641,	// (0x0007dbfb) popup_vitu2_query_window_t2

0xb653,	// (0x0007dc0d) popup_vitu2_query_window_t3_ParamLimits

0xb653,	// (0x0007dc0d) popup_vitu2_query_window_t3

0xb67b,	// (0x0007dc35) popup_vitu2_query_window_t4_ParamLimits

0xb67b,	// (0x0007dc35) popup_vitu2_query_window_t4

0xb698,	// (0x0007dc52) popup_vitu2_query_window_t5_ParamLimits

0xb698,	// (0x0007dc52) popup_vitu2_query_window_t5

0x0006,

0xfa55,	// (0x0008200f) popup_vitu2_query_window_t_ParamLimits

0xfa55,	// (0x0008200f) popup_vitu2_query_window_t

0x35c3,	// (0x00075b7d) main_cset_text_pane

0xafd6,	// (0x0007d590) aid_area_touch_slider_ParamLimits

0xaff2,	// (0x0007d5ac) cset_slider_pane_ParamLimits

0xb01c,	// (0x0007d5d6) main_cset_slider_pane_g1_ParamLimits

0xb031,	// (0x0007d5eb) main_cset_slider_pane_g2_ParamLimits

0x35e4,	// (0x00075b9e) main_cset_slider_pane_g3_ParamLimits

0x35e4,	// (0x00075b9e) main_cset_slider_pane_g3

0xb046,	// (0x0007d600) main_cset_slider_pane_g4_ParamLimits

0xb046,	// (0x0007d600) main_cset_slider_pane_g4

0xb055,	// (0x0007d60f) main_cset_slider_pane_g5_ParamLimits

0xb055,	// (0x0007d60f) main_cset_slider_pane_g5

0xb061,	// (0x0007d61b) main_cset_slider_pane_g6_ParamLimits

0xb061,	// (0x0007d61b) main_cset_slider_pane_g6

0xf9a8,	// (0x00081f62) main_cset_slider_pane_g_ParamLimits

0x3614,	// (0x00075bce) main_cset_slider_pane_t1_ParamLimits

0xb0ed,	// (0x0007d6a7) main_cset_slider_pane_t2_ParamLimits

0xb107,	// (0x0007d6c1) main_cset_slider_pane_t3_ParamLimits

0xb121,	// (0x0007d6db) main_cset_slider_pane_t4_ParamLimits

0xb13b,	// (0x0007d6f5) main_cset_slider_pane_t5_ParamLimits

0xb155,	// (0x0007d70f) main_cset_slider_pane_t6_ParamLimits

0xb16a,	// (0x0007d724) main_cset_slider_pane_t7_ParamLimits

0xb194,	// (0x0007d74e) main_cset_slider_pane_t8_ParamLimits

0xb194,	// (0x0007d74e) main_cset_slider_pane_t8

0xb1bc,	// (0x0007d776) main_cset_slider_pane_t9_ParamLimits

0xb1bc,	// (0x0007d776) main_cset_slider_pane_t9

0xb1e4,	// (0x0007d79e) main_cset_slider_pane_t10_ParamLimits

0xb1e4,	// (0x0007d79e) main_cset_slider_pane_t10

0xb20c,	// (0x0007d7c6) main_cset_slider_pane_t11_ParamLimits

0xb20c,	// (0x0007d7c6) main_cset_slider_pane_t11

0xb234,	// (0x0007d7ee) main_cset_slider_pane_t12_ParamLimits

0xb234,	// (0x0007d7ee) main_cset_slider_pane_t12

0xb251,	// (0x0007d80b) main_cset_slider_pane_t13_ParamLimits

0xb251,	// (0x0007d80b) main_cset_slider_pane_t13

0xf9cd,	// (0x00081f87) main_cset_slider_pane_t_ParamLimits

0x0f8b,	// (0x00073545) bg_popup_sub_pane_cp011

0x377b,	// (0x00075d35) main_cset_text_pane_g1

0x3783,	// (0x00075d3d) main_cset_text_pane_t1

0x3791,	// (0x00075d4b) main_cset_text_pane_t2

0x379f,	// (0x00075d59) main_cset_text_pane_t3

0x37ad,	// (0x00075d67) main_cset_text_pane_t4

0x37bb,	// (0x00075d75) main_cset_text_pane_t5

0x37c9,	// (0x00075d83) main_cset_text_pane_t6

0x37d7,	// (0x00075d91) main_cset_text_pane_t7

0x0006,

0xfa64,	// (0x0008201e) main_cset_text_pane_t

0x0f8b,	// (0x00073545) main_cam4_burst_pane

0x0f8b,	// (0x00073545) main_cam5_pane

0xaf31,	// (0x0007d4eb) bg_button_pane_cp019

0xaf3a,	// (0x0007d4f4) bg_button_pane_cp020

0x35f0,	// (0x00075baa) main_cset_slider_pane_g7_ParamLimits

0x35f0,	// (0x00075baa) main_cset_slider_pane_g7

0x35fc,	// (0x00075bb6) main_cset_slider_pane_g8_ParamLimits

0x35fc,	// (0x00075bb6) main_cset_slider_pane_g8

0xb075,	// (0x0007d62f) main_cset_slider_pane_g9_ParamLimits

0xb075,	// (0x0007d62f) main_cset_slider_pane_g9

0xb081,	// (0x0007d63b) main_cset_slider_pane_g10_ParamLimits

0xb081,	// (0x0007d63b) main_cset_slider_pane_g10

0xb08d,	// (0x0007d647) main_cset_slider_pane_g11_ParamLimits

0xb08d,	// (0x0007d647) main_cset_slider_pane_g11

0xb099,	// (0x0007d653) main_cset_slider_pane_g12_ParamLimits

0xb099,	// (0x0007d653) main_cset_slider_pane_g12

0xb0a5,	// (0x0007d65f) main_cset_slider_pane_g13_ParamLimits

0xb0a5,	// (0x0007d65f) main_cset_slider_pane_g13

0xb0b1,	// (0x0007d66b) main_cset_slider_pane_g14_ParamLimits

0xb0b1,	// (0x0007d66b) main_cset_slider_pane_g14

0xb0bd,	// (0x0007d677) main_cset_slider_pane_g15_ParamLimits

0xb0bd,	// (0x0007d677) main_cset_slider_pane_g15

0x3642,	// (0x00075bfc) main_cset_slider_pane_t14_ParamLimits

0x3642,	// (0x00075bfc) main_cset_slider_pane_t14

0x367b,	// (0x00075c35) main_cset_slider_pane_t15_ParamLimits

0x367b,	// (0x00075c35) main_cset_slider_pane_t15

0xb70b,	// (0x0007dcc5) aid_cam4_burst_size_cell_ParamLimits

0xb70b,	// (0x0007dcc5) aid_cam4_burst_size_cell

0xb727,	// (0x0007dce1) grid_cam4_burst_pane_ParamLimits

0xb727,	// (0x0007dce1) grid_cam4_burst_pane

0xb749,	// (0x0007dd03) linegrid_cam4_burst_pane_ParamLimits

0xb749,	// (0x0007dd03) linegrid_cam4_burst_pane

0xb767,	// (0x0007dd21) scroll_pane_cp30_ParamLimits

0xb767,	// (0x0007dd21) scroll_pane_cp30

0xb773,	// (0x0007dd2d) cell_cam4_burst_pane_ParamLimits

0xb773,	// (0x0007dd2d) cell_cam4_burst_pane

0x37e5,	// (0x00075d9f) linegrid_cam4_burst_pane_g1_ParamLimits

0x37e5,	// (0x00075d9f) linegrid_cam4_burst_pane_g1

0xb7ab,	// (0x0007dd65) linegrid_cam4_burst_pane_g2_ParamLimits

0xb7ab,	// (0x0007dd65) linegrid_cam4_burst_pane_g2

0x37f2,	// (0x00075dac) linegrid_cam4_burst_pane_g3_ParamLimits

0x37f2,	// (0x00075dac) linegrid_cam4_burst_pane_g3

0x0002,

0xfa73,	// (0x0008202d) linegrid_cam4_burst_pane_g_ParamLimits

0xfa73,	// (0x0008202d) linegrid_cam4_burst_pane_g

0xb7bc,	// (0x0007dd76) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xb7bc,	// (0x0007dd76) linegrid_cam4_burst_pane_g3_copy1

0x37ff,	// (0x00075db9) linegrid_cam4_burst_pane_g4_ParamLimits

0x37ff,	// (0x00075db9) linegrid_cam4_burst_pane_g4

0xb7d6,	// (0x0007dd90) linegrid_cam4_burst_pane_g5_ParamLimits

0xb7d6,	// (0x0007dd90) linegrid_cam4_burst_pane_g5

0xb7e7,	// (0x0007dda1) linegrid_cam4_burst_pane_g6_ParamLimits

0xb7e7,	// (0x0007dda1) linegrid_cam4_burst_pane_g6

0x380c,	// (0x00075dc6) linegrid_cam4_burst_pane_g7_ParamLimits

0x380c,	// (0x00075dc6) linegrid_cam4_burst_pane_g7

0xb7f8,	// (0x0007ddb2) cell_cam4_burst_pane_g1

0x3825,	// (0x00075ddf) main_cam5_pane_t1_ParamLimits

0x3825,	// (0x00075ddf) main_cam5_pane_t1

0x3837,	// (0x00075df1) main_cam5_pane_t2_ParamLimits

0x3837,	// (0x00075df1) main_cam5_pane_t2

0x3849,	// (0x00075e03) main_cam5_pane_t3_ParamLimits

0x3849,	// (0x00075e03) main_cam5_pane_t3

0x385b,	// (0x00075e15) main_cam5_pane_t4_ParamLimits

0x385b,	// (0x00075e15) main_cam5_pane_t4

0x3871,	// (0x00075e2b) main_cam5_pane_t5_ParamLimits

0x3871,	// (0x00075e2b) main_cam5_pane_t5

0x3883,	// (0x00075e3d) main_cam5_pane_t6_ParamLimits

0x3883,	// (0x00075e3d) main_cam5_pane_t6

0x3895,	// (0x00075e4f) main_cam5_pane_t7_ParamLimits

0x3895,	// (0x00075e4f) main_cam5_pane_t7

0x38a7,	// (0x00075e61) main_cam5_pane_t8_ParamLimits

0x38a7,	// (0x00075e61) main_cam5_pane_t8

0x38c3,	// (0x00075e7d) main_cam5_pane_t9_ParamLimits

0x38c3,	// (0x00075e7d) main_cam5_pane_t9

0x38d5,	// (0x00075e8f) main_cam5_pane_t10_ParamLimits

0x38d5,	// (0x00075e8f) main_cam5_pane_t10

0x38e7,	// (0x00075ea1) main_cam5_pane_t11_ParamLimits

0x38e7,	// (0x00075ea1) main_cam5_pane_t11

0x38f9,	// (0x00075eb3) main_cam5_pane_t12_ParamLimits

0x38f9,	// (0x00075eb3) main_cam5_pane_t12

0x390e,	// (0x00075ec8) main_cam5_pane_t13_ParamLimits

0x390e,	// (0x00075ec8) main_cam5_pane_t13

0x000c,

0xfa7f,	// (0x00082039) main_cam5_pane_t_ParamLimits

0xfa7f,	// (0x00082039) main_cam5_pane_t

0x640d,	// (0x000789c7) popup_scut_keymap_window_ParamLimits

0x640d,	// (0x000789c7) popup_scut_keymap_window

0xb80b,	// (0x0007ddc5) aid_size_cell_brow_shortcut

0xe041,	// (0x000805fb) bg_popup_window_pane_cp010

0xb817,	// (0x0007ddd1) grid_scut_pane

0xb821,	// (0x0007dddb) cell_scut_pane_ParamLimits

0xb821,	// (0x0007dddb) cell_scut_pane

0xb836,	// (0x0007ddf0) cell_scut_pane_g1

0x392b,	// (0x00075ee5) cell_scut_pane_t1

0x393a,	// (0x00075ef4) cell_scut_pane_t2

0xb83f,	// (0x0007ddf9) cell_scut_pane_t3

0x0002,

0xfa9a,	// (0x00082054) cell_scut_pane_t

0x98bd,	// (0x0007be77) main_mup3_pane_g8_ParamLimits

0x98bd,	// (0x0007be77) main_mup3_pane_g8

0xabac,	// (0x0007d166) area_vitu2_query_pane_ParamLimits

0xabac,	// (0x0007d166) area_vitu2_query_pane

0xb5c3,	// (0x0007db7d) input_focus_pane_cp08

0x3949,	// (0x00075f03) area_vitu2_query_pane_g1

0xb84d,	// (0x0007de07) area_vitu2_query_pane_g2

0x0001,

0xfaa1,	// (0x0008205b) area_vitu2_query_pane_g

0xb85c,	// (0x0007de16) area_vitu2_query_pane_t1_ParamLimits

0xb85c,	// (0x0007de16) area_vitu2_query_pane_t1

0xb86e,	// (0x0007de28) area_vitu2_query_pane_t2_ParamLimits

0xb86e,	// (0x0007de28) area_vitu2_query_pane_t2

0xb880,	// (0x0007de3a) area_vitu2_query_pane_t3_ParamLimits

0xb880,	// (0x0007de3a) area_vitu2_query_pane_t3

0x3955,	// (0x00075f0f) area_vitu2_query_pane_t4_ParamLimits

0x3955,	// (0x00075f0f) area_vitu2_query_pane_t4

0x397d,	// (0x00075f37) area_vitu2_query_pane_t5_ParamLimits

0x397d,	// (0x00075f37) area_vitu2_query_pane_t5

0x39a5,	// (0x00075f5f) area_vitu2_query_pane_t6_ParamLimits

0x39a5,	// (0x00075f5f) area_vitu2_query_pane_t6

0x0006,

0xfaa6,	// (0x00082060) area_vitu2_query_pane_t_ParamLimits

0xfaa6,	// (0x00082060) area_vitu2_query_pane_t

0xb8a8,	// (0x0007de62) bg_button_pane_cp018

0xb8b5,	// (0x0007de6f) bg_button_pane_cp021

0xb8c1,	// (0x0007de7b) bg_button_pane_cp022

0xb8d0,	// (0x0007de8a) input_focus_pane_cp09

0x80cf,	// (0x0007a689) aid_size_touch_mv_arrow_left

0xdf1a,	// (0x000804d4) aid_size_touch_mv_arrow_right

0xb0d5,	// (0x0007d68f) main_cset_slider_pane_g16_ParamLimits

0xb0d5,	// (0x0007d68f) main_cset_slider_pane_g16

0xb0e1,	// (0x0007d69b) main_cset_slider_pane_g17_ParamLimits

0xb0e1,	// (0x0007d69b) main_cset_slider_pane_g17

0xb7f8,	// (0x0007ddb2) cell_cam4_burst_pane_g1_ParamLimits

0x0f8b,	// (0x00073545) compa_mode_pane

0xb2f5,	// (0x0007d8af) popup_vtel_slider_window_g3_ParamLimits

0xb2f5,	// (0x0007d8af) popup_vtel_slider_window_g3

0xb309,	// (0x0007d8c3) popup_vtel_slider_window_g4_ParamLimits

0xb309,	// (0x0007d8c3) popup_vtel_slider_window_g4

0xb31d,	// (0x0007d8d7) popup_vtel_slider_window_t1_ParamLimits

0xb31d,	// (0x0007d8d7) popup_vtel_slider_window_t1

0x0f8b,	// (0x00073545) main_cl_pane

0x26f6,	// (0x00074cb0) popup_imed_adjust2_window_ParamLimits

0x26d0,	// (0x00074c8a) bg_tb_trans_pane_cp05_ParamLimits

0x2f8c,	// (0x00075546) popup_imed_adjust2_window_g1_ParamLimits

0x2f9b,	// (0x00075555) popup_imed_adjust2_window_g2_ParamLimits

0x2f9b,	// (0x00075555) popup_imed_adjust2_window_g2

0x2fa7,	// (0x00075561) popup_imed_adjust2_window_g3_ParamLimits

0x2fa7,	// (0x00075561) popup_imed_adjust2_window_g3

0x0002,

0xf811,	// (0x00081dcb) popup_imed_adjust2_window_g_ParamLimits

0xf811,	// (0x00081dcb) popup_imed_adjust2_window_g

0x2fb3,	// (0x0007556d) popup_imed_adjust2_window_t1_ParamLimits

0x2fcb,	// (0x00075585) slider_imed_adjust_pane_ParamLimits

0x2fdf,	// (0x00075599) slider_imed_adjust_pane_g1_ParamLimits

0x2fef,	// (0x000755a9) slider_imed_adjust_pane_g2_ParamLimits

0x2fff,	// (0x000755b9) slider_imed_adjust_pane_g3_ParamLimits

0x3010,	// (0x000755ca) slider_imed_adjust_pane_g4_ParamLimits

0xf818,	// (0x00081dd2) slider_imed_adjust_pane_g_ParamLimits

0xa938,	// (0x0007cef2) aid_touch_area_cam4_ParamLimits

0xa938,	// (0x0007cef2) aid_touch_area_cam4

0xa946,	// (0x0007cf00) battery_pane_cp01

0xa9c5,	// (0x0007cf7f) main_camera4_pane_g6_ParamLimits

0xa9c5,	// (0x0007cf7f) main_camera4_pane_g6

0xa9e3,	// (0x0007cf9d) main_camera4_pane_t2_ParamLimits

0xa9e3,	// (0x0007cf9d) main_camera4_pane_t2

0x0001,

0xf91b,	// (0x00081ed5) main_camera4_pane_t_ParamLimits

0xf91b,	// (0x00081ed5) main_camera4_pane_t

0xaa79,	// (0x0007d033) aid_touch_area_vid4_ParamLimits

0xaa79,	// (0x0007d033) aid_touch_area_vid4

0xa9c5,	// (0x0007cf7f) main_video4_pane_g5_ParamLimits

0xa9c5,	// (0x0007cf7f) main_video4_pane_g5

0xaaa9,	// (0x0007d063) vid4_progress_pane_ParamLimits

0xaaa9,	// (0x0007d063) vid4_progress_pane

0x3608,	// (0x00075bc2) main_cset_slider_pane_g18_ParamLimits

0x3608,	// (0x00075bc2) main_cset_slider_pane_g18

0x3819,	// (0x00075dd3) cell_cam4_burst_pane_g2_ParamLimits

0x3819,	// (0x00075dd3) cell_cam4_burst_pane_g2

0x0001,

0xfa7a,	// (0x00082034) cell_cam4_burst_pane_g_ParamLimits

0xfa7a,	// (0x00082034) cell_cam4_burst_pane_g

0xb8df,	// (0x0007de99) bg_cl_pane_ParamLimits

0xb8df,	// (0x0007de99) bg_cl_pane

0xb8eb,	// (0x0007dea5) cl_header_pane_ParamLimits

0xb8eb,	// (0x0007dea5) cl_header_pane

0xb8f7,	// (0x0007deb1) cl_listscroll_pane_ParamLimits

0xb8f7,	// (0x0007deb1) cl_listscroll_pane

0x39f1,	// (0x00075fab) bg_cl_pane_g1

0x39f9,	// (0x00075fb3) bg_cl_pane_g2

0x3a01,	// (0x00075fbb) bg_cl_pane_g3

0x3a09,	// (0x00075fc3) bg_cl_pane_g4

0x3a11,	// (0x00075fcb) bg_cl_pane_g5

0x3a19,	// (0x00075fd3) bg_cl_pane_g6

0x3a21,	// (0x00075fdb) bg_cl_pane_g7

0x3a29,	// (0x00075fe3) bg_cl_pane_g8

0x3a31,	// (0x00075feb) bg_cl_pane_g9

0x0008,

0xfab5,	// (0x0008206f) bg_cl_pane_g

0xb903,	// (0x0007debd) aid_height_cl_leading_ParamLimits

0xb903,	// (0x0007debd) aid_height_cl_leading

0xb90f,	// (0x0007dec9) aid_height_cl_text_ParamLimits

0xb90f,	// (0x0007dec9) aid_height_cl_text

0x343e,	// (0x000759f8) bg_cl_header_pane_ParamLimits

0x343e,	// (0x000759f8) bg_cl_header_pane

0xb927,	// (0x0007dee1) cl_header_pane_g1_ParamLimits

0xb927,	// (0x0007dee1) cl_header_pane_g1

0xb934,	// (0x0007deee) cl_header_pane_t1_ParamLimits

0xb934,	// (0x0007deee) cl_header_pane_t1

0x3a39,	// (0x00075ff3) cl_list_pane

0x3a42,	// (0x00075ffc) hc_scroll_pane_cp01

0x1ce9,	// (0x000742a3) bg_cl_header_pane_g1

0x34d5,	// (0x00075a8f) bg_cl_header_pane_g2

0x1d09,	// (0x000742c3) bg_cl_header_pane_g3

0x34e5,	// (0x00075a9f) bg_cl_header_pane_g4

0x34dd,	// (0x00075a97) bg_cl_header_pane_g5

0x3732,	// (0x00075cec) bg_cl_header_pane_g6

0x34fd,	// (0x00075ab7) bg_cl_header_pane_g7

0x3505,	// (0x00075abf) bg_cl_header_pane_g8

0x34f5,	// (0x00075aaf) bg_cl_header_pane_g9

0x0008,

0xfac8,	// (0x00082082) bg_cl_header_pane_g

0xb946,	// (0x0007df00) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xb946,	// (0x0007df00) hc_cl_list_double_graphic_heading_pane

0xb956,	// (0x0007df10) hc_cl_list_single_graphic_pane_ParamLimits

0xb956,	// (0x0007df10) hc_cl_list_single_graphic_pane

0xb968,	// (0x0007df22) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xb968,	// (0x0007df22) hc_cl_list_single_graphic_pane_g1

0xb974,	// (0x0007df2e) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xb974,	// (0x0007df2e) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfadb,	// (0x00082095) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfadb,	// (0x00082095) hc_cl_list_single_graphic_pane_g

0xb988,	// (0x0007df42) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xb988,	// (0x0007df42) hc_cl_list_single_graphic_pane_t1

0xb968,	// (0x0007df22) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xb968,	// (0x0007df22) hc_cl_list_double_graphic_heading_pane_g1

0xb99d,	// (0x0007df57) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xb99d,	// (0x0007df57) hc_cl_list_double_graphic_heading_pane_g2

0xb9b1,	// (0x0007df6b) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xb9b1,	// (0x0007df6b) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfae0,	// (0x0008209a) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfae0,	// (0x0008209a) hc_cl_list_double_graphic_heading_pane_g

0xb9c5,	// (0x0007df7f) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xb9c5,	// (0x0007df7f) hc_cl_list_double_graphic_heading_pane_t1

0xb9da,	// (0x0007df94) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xb9da,	// (0x0007df94) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfae7,	// (0x000820a1) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfae7,	// (0x000820a1) hc_cl_list_double_graphic_heading_pane_t

0xb9ef,	// (0x0007dfa9) vid4_progress_pane_g1

0xb9fe,	// (0x0007dfb8) vid4_progress_pane_g2

0xba0d,	// (0x0007dfc7) vid4_progress_pane_g3

0xba1c,	// (0x0007dfd6) vid4_progress_pane_g4

0x0004,

0xfaec,	// (0x000820a6) vid4_progress_pane_g

0xba34,	// (0x0007dfee) vid4_progress_pane_t1

0xba4a,	// (0x0007e004) vid4_progress_pane_t2

0x0002,

0xfaf7,	// (0x000820b1) vid4_progress_pane_t

0xba74,	// (0x0007e02e) wait_bar_pane_cp07

0x2906,	// (0x00074ec0) blid_firmament_pane_ParamLimits

0x2947,	// (0x00074f01) popup_blid_sat_info2_window_g1

0x296b,	// (0x00074f25) popup_blid_sat_info2_window_t3

0x2979,	// (0x00074f33) popup_blid_sat_info2_window_t4

0x2987,	// (0x00074f41) popup_blid_sat_info2_window_t5

0x2995,	// (0x00074f4f) popup_blid_sat_info2_window_t6

0x29a5,	// (0x00074f5f) popup_blid_sat_info2_window_t7

0x29b3,	// (0x00074f6d) popup_blid_sat_info2_window_t8

0x29c1,	// (0x00074f7b) popup_blid_sat_info2_window_t9

0x29cf,	// (0x00074f89) popup_blid_sat_info2_window_t10

0x2a8b,	// (0x00075045) aid_firma_cardinal_ParamLimits

0x2a9f,	// (0x00075059) blid_firmament_pane_t1_ParamLimits

0x2ab6,	// (0x00075070) blid_firmament_pane_t2_ParamLimits

0x2acd,	// (0x00075087) blid_firmament_pane_t3_ParamLimits

0x2ae4,	// (0x0007509e) blid_firmament_pane_t4_ParamLimits

0xf70a,	// (0x00081cc4) blid_firmament_pane_t_ParamLimits

0x2afb,	// (0x000750b5) blid_sat_info_pane_ParamLimits

0xf078,	// (0x00081632) main_cam_set_pane_ParamLimits

0xa024,	// (0x0007c5de) aid_size_cell_colour_35_ParamLimits

0xa03b,	// (0x0007c5f5) aid_size_cell_colour_112_ParamLimits

0xa052,	// (0x0007c60c) aid_size_cell_effect_ParamLimits

0xf078,	// (0x00081632) bg_tb_trans_pane_cp02_ParamLimits

0xf086,	// (0x00081640) heading_imed_pane_ParamLimits

0xa06c,	// (0x0007c626) listscroll_imed_pane_ParamLimits

0xea43,	// (0x00080ffd) popup_call2_audio_first_window_g5_ParamLimits

0xea43,	// (0x00080ffd) popup_call2_audio_first_window_g5

0xa6ef,	// (0x0007cca9) aid_size_touch_image3_arrow_left_ParamLimits

0xa6ef,	// (0x0007cca9) aid_size_touch_image3_arrow_left

0xa703,	// (0x0007ccbd) aid_size_touch_image3_arrow_right_ParamLimits

0xa703,	// (0x0007ccbd) aid_size_touch_image3_arrow_right

0xba5f,	// (0x0007e019) vid4_progress_pane_t3

0xa2d0,	// (0x0007c88a) main_hwr_training_symbol_option_pane_ParamLimits

0xa2d0,	// (0x0007c88a) main_hwr_training_symbol_option_pane

0x326b,	// (0x00075825) popup_hwr_training_preview_window_ParamLimits

0x326b,	// (0x00075825) popup_hwr_training_preview_window

0xa32b,	// (0x0007c8e5) hwr_training_navi_pane_g5_ParamLimits

0xa32b,	// (0x0007c8e5) hwr_training_navi_pane_g5

0x34c3,	// (0x00075a7d) popup_char_count_window

0xb413,	// (0x0007d9cd) bg_popup_sub_pane_cp20_ParamLimits

0xb421,	// (0x0007d9db) list_vitu2_match_list_pane_ParamLimits

0xb42d,	// (0x0007d9e7) vitu2_page_scroll_pane_ParamLimits

0xb42d,	// (0x0007d9e7) vitu2_page_scroll_pane

0x3a94,	// (0x0007604e) list_single_hwr_training_symbol_option_pane_ParamLimits

0x3a94,	// (0x0007604e) list_single_hwr_training_symbol_option_pane

0x3aa7,	// (0x00076061) list_single_hwr_training_symbol_option_pane_g1

0x3aaf,	// (0x00076069) list_single_hwr_training_symbol_option_pane_t1

0x3abd,	// (0x00076077) bg_button_pane_cp023

0x3ac6,	// (0x00076080) bg_button_pane_cp024

0xba84,	// (0x0007e03e) vitu2_page_scroll_pane_g1

0xba8c,	// (0x0007e046) vitu2_page_scroll_pane_g2

0x0001,

0xfafe,	// (0x000820b8) vitu2_page_scroll_pane_g

0xba94,	// (0x0007e04e) vitu2_page_scroll_pane_t1

0x2866,	// (0x00074e20) popup_char_count_window_g1

0x3af9,	// (0x000760b3) popup_char_count_window_g2

0x3b02,	// (0x000760bc) popup_char_count_window_g3

0x0002,

0xfb03,	// (0x000820bd) popup_char_count_window_g

0x3b0b,	// (0x000760c5) popup_char_count_window_t1

0x0f8b,	// (0x00073545) main_vded2_pane

0x2f7a,	// (0x00075534) aid_size_cell_imed_line

0x2f84,	// (0x0007553e) grid_imed_line_width_pane

0xab02,	// (0x0007d0bc) vid4_indicators_pane_g4

0x3b19,	// (0x000760d3) cell_imed_line_width_pane_ParamLimits

0x3b19,	// (0x000760d3) cell_imed_line_width_pane

0x3b2b,	// (0x000760e5) cell_imed_line_width_pane_g1

0x3b34,	// (0x000760ee) cell_imed_line_width_pane_g2

0x0001,

0xfb0a,	// (0x000820c4) cell_imed_line_width_pane_g

0xbaa3,	// (0x0007e05d) main_vded2_pane_g1_ParamLimits

0xbaa3,	// (0x0007e05d) main_vded2_pane_g1

0xbab0,	// (0x0007e06a) main_vded2_pane_g2_ParamLimits

0xbab0,	// (0x0007e06a) main_vded2_pane_g2

0x0001,

0xfb0f,	// (0x000820c9) main_vded2_pane_g_ParamLimits

0xfb0f,	// (0x000820c9) main_vded2_pane_g

0xbabc,	// (0x0007e076) vded2_slider_pane_ParamLimits

0xbabc,	// (0x0007e076) vded2_slider_pane

0xbac9,	// (0x0007e083) aid_size_touch_vded2_end

0xbad1,	// (0x0007e08b) aid_size_touch_vded2_playhead

0xbad9,	// (0x0007e093) aid_size_touch_vded2_start

0xbae1,	// (0x0007e09b) vded2_slider_bg_pane

0xbaea,	// (0x0007e0a4) vded2_slider_pane_g1

0xbaf3,	// (0x0007e0ad) vded2_slider_pane_g2

0xbafb,	// (0x0007e0b5) vded2_slider_pane_g3

0x0002,

0xfb14,	// (0x000820ce) vded2_slider_pane_g

0xbb04,	// (0x0007e0be) vded2_slider_bg_pane_g1

0xbb0d,	// (0x0007e0c7) vded2_slider_bg_pane_g2

0xbb16,	// (0x0007e0d0) vded2_slider_bg_pane_g3

0x0002,

0xfb1b,	// (0x000820d5) vded2_slider_bg_pane_g

0x86a6,	// (0x0007ac60) aid_postcard_touch_down_pane_ParamLimits

0x86a6,	// (0x0007ac60) aid_postcard_touch_down_pane

0x86b2,	// (0x0007ac6c) aid_postcard_touch_up_pane_ParamLimits

0x86b2,	// (0x0007ac6c) aid_postcard_touch_up_pane

0x0f8b,	// (0x00073545) main_blid2_pane

0x26de,	// (0x00074c98) popup_blid2_search_window

0x0f8b,	// (0x00073545) blid2_gps_pane

0x0f8b,	// (0x00073545) blid2_navig_pane

0x0f8b,	// (0x00073545) blid2_search_pane

0x0f8b,	// (0x00073545) blid2_tripm_pane

0xbb1f,	// (0x0007e0d9) blid2_search_pane_g1_ParamLimits

0xbb1f,	// (0x0007e0d9) blid2_search_pane_g1

0xbb2b,	// (0x0007e0e5) blid2_search_pane_t1_ParamLimits

0xbb2b,	// (0x0007e0e5) blid2_search_pane_t1

0xbb3d,	// (0x0007e0f7) aid_size_cell_blid2_gps_ParamLimits

0xbb3d,	// (0x0007e0f7) aid_size_cell_blid2_gps

0xbb4d,	// (0x0007e107) blid2_gps_pane_g1_ParamLimits

0xbb4d,	// (0x0007e107) blid2_gps_pane_g1

0xbb59,	// (0x0007e113) grid_blid2_satellite_pane_ParamLimits

0xbb59,	// (0x0007e113) grid_blid2_satellite_pane

0xbb65,	// (0x0007e11f) blid2_navig_pane_g1_ParamLimits

0xbb65,	// (0x0007e11f) blid2_navig_pane_g1

0xbb71,	// (0x0007e12b) blid2_navig_pane_t1_ParamLimits

0xbb71,	// (0x0007e12b) blid2_navig_pane_t1

0xbb83,	// (0x0007e13d) blid2_navig_pane_t2_ParamLimits

0xbb83,	// (0x0007e13d) blid2_navig_pane_t2

0x0001,

0xfb22,	// (0x000820dc) blid2_navig_pane_t_ParamLimits

0xfb22,	// (0x000820dc) blid2_navig_pane_t

0xbb95,	// (0x0007e14f) blid2_navig_ring_pane_ParamLimits

0xbb95,	// (0x0007e14f) blid2_navig_ring_pane

0xbba1,	// (0x0007e15b) blid2_speed_pane_ParamLimits

0xbba1,	// (0x0007e15b) blid2_speed_pane

0xbbad,	// (0x0007e167) blid2_tripm_pane_g1_ParamLimits

0xbbad,	// (0x0007e167) blid2_tripm_pane_g1

0xbbb9,	// (0x0007e173) blid2_tripm_pane_g2_ParamLimits

0xbbb9,	// (0x0007e173) blid2_tripm_pane_g2

0xbbc5,	// (0x0007e17f) blid2_tripm_pane_g3_ParamLimits

0xbbc5,	// (0x0007e17f) blid2_tripm_pane_g3

0xbbd1,	// (0x0007e18b) blid2_tripm_pane_g4_ParamLimits

0xbbd1,	// (0x0007e18b) blid2_tripm_pane_g4

0xbbdd,	// (0x0007e197) blid2_tripm_pane_g5_ParamLimits

0xbbdd,	// (0x0007e197) blid2_tripm_pane_g5

0x0005,

0xfb27,	// (0x000820e1) blid2_tripm_pane_g_ParamLimits

0xfb27,	// (0x000820e1) blid2_tripm_pane_g

0xbbf5,	// (0x0007e1af) blid2_tripm_pane_t1_ParamLimits

0xbbf5,	// (0x0007e1af) blid2_tripm_pane_t1

0xbc07,	// (0x0007e1c1) blid2_tripm_pane_t2_ParamLimits

0xbc07,	// (0x0007e1c1) blid2_tripm_pane_t2

0xbc19,	// (0x0007e1d3) blid2_tripm_pane_t3_ParamLimits

0xbc19,	// (0x0007e1d3) blid2_tripm_pane_t3

0x0003,

0xfb34,	// (0x000820ee) blid2_tripm_pane_t_ParamLimits

0xfb34,	// (0x000820ee) blid2_tripm_pane_t

0xbc49,	// (0x0007e203) cell_blid2_satellite_pane_ParamLimits

0xbc49,	// (0x0007e203) cell_blid2_satellite_pane

0xbc61,	// (0x0007e21b) cell_blid2_satellite_pane_g1

0x3b3c,	// (0x000760f6) cell_blid2_satellite_pane_t1

0x2b0b,	// (0x000750c5) blid2_speed_pane_g1

0x3b4a,	// (0x00076104) blid2_speed_pane_t1

0x3b58,	// (0x00076112) blid2_speed_pane_t2

0x0001,

0xfb3d,	// (0x000820f7) blid2_speed_pane_t

0x2b0b,	// (0x000750c5) blid2_navig_ring_pane_g1

0xbc6a,	// (0x0007e224) blid2_navig_ring_pane_g2

0xbc72,	// (0x0007e22c) blid2_navig_ring_pane_g3

0xbc7a,	// (0x0007e234) blid2_navig_ring_pane_g4

0xbc82,	// (0x0007e23c) blid2_navig_ring_pane_g5

0x0004,

0xfb42,	// (0x000820fc) blid2_navig_ring_pane_g

0x0f8b,	// (0x00073545) bg_popup_window_pane_cp011

0x3b66,	// (0x00076120) popup_blid2_search_window_g1

0x3b6e,	// (0x00076128) popup_blid2_search_window_t1

0x3b7c,	// (0x00076136) popup_blid2_search_window_t2

0x0001,

0xfb4d,	// (0x00082107) popup_blid2_search_window_t

0x1bf8,	// (0x000741b2) main_browser_pane_g1

0x1743,	// (0x00073cfd) main_browser_pane_ParamLimits

0xaad3,	// (0x0007d08d) bg_button_pane_cp011_ParamLimits

0xad36,	// (0x0007d2f0) cell_vitu2_function_pane_g1_ParamLimits

0x26d0,	// (0x00074c8a) bg_popup_sub_pane_cp22_ParamLimits

0xb5c3,	// (0x0007db7d) input_focus_pane_cp08_ParamLimits

0xb5da,	// (0x0007db94) popup_vitu2_query_button_pane_ParamLimits

0xb5da,	// (0x0007db94) popup_vitu2_query_button_pane

0xb5eb,	// (0x0007dba5) popup_vitu2_query_input_button_pane

0x376f,	// (0x00075d29) popup_vitu2_query_window_g1_ParamLimits

0xb5f3,	// (0x0007dbad) popup_vitu2_query_window_g2_ParamLimits

0xfa4e,	// (0x00082008) popup_vitu2_query_window_g_ParamLimits

0x0f8b,	// (0x00073545) bg_button_pane_cp026

0xbc8a,	// (0x0007e244) popup_vitu2_query_input_button_pane_g1

0x0f8b,	// (0x00073545) bg_button_pane_cp025

0x3b8a,	// (0x00076144) popup_vitu2_query_button_pane_t1

0x965f,	// (0x0007bc19) main_mp3_pane_t6

0x966d,	// (0x0007bc27) popup_slider_window_cp01

0xaa27,	// (0x0007cfe1) cam4_battery_pane

0xaa27,	// (0x0007cfe1) cam4_battery_pane_cp02

0xaa27,	// (0x0007cfe1) cam4_battery_pane_cp01

0xaa27,	// (0x0007cfe1) cam4_battery_pane_cp03

0x3b98,	// (0x00076152) cam4_battery_pane_g1

0x2b0b,	// (0x000750c5) cam4_battery_pane_g2

0x0001,

0xfb52,	// (0x0008210c) cam4_battery_pane_g

0x29dd,	// (0x00074f97) popup_blid_sat_info2_window_t11

0x80cf,	// (0x0007a689) aid_size_touch_mv_arrow_left_ParamLimits

0xdf1a,	// (0x000804d4) aid_size_touch_mv_arrow_right_ParamLimits

0xdf52,	// (0x0008050c) navi_pane_g1_ParamLimits

0xdf5e,	// (0x00080518) navi_pane_g2_ParamLimits

0x80e8,	// (0x0007a6a2) navi_pane_g3_ParamLimits

0xf409,	// (0x000819c3) navi_pane_g_ParamLimits

0x810d,	// (0x0007a6c7) navi_pane_mv_t1_ParamLimits

0xa078,	// (0x0007c632) grid_imed_effect_pane_ParamLimits

0x7106,	// (0x000796c0) aid_placing_vt_slider_lsc

0x1b3a,	// (0x000740f4) aid_placing_vt_slider_prt

0xf078,	// (0x00081632) bg_tb_trans_pane_cp01_ParamLimits

0x2c5a,	// (0x00075214) popup_image_details_window_g1_ParamLimits

0x2c6d,	// (0x00075227) popup_image_details_window_g2_ParamLimits

0x2c82,	// (0x0007523c) popup_image_details_window_g3_ParamLimits

0x2c82,	// (0x0007523c) popup_image_details_window_g3

0xf74f,	// (0x00081d09) popup_image_details_window_g_ParamLimits

0x2c96,	// (0x00075250) popup_image_details_window_t1_ParamLimits

0x2ca8,	// (0x00075262) popup_image_details_window_t2_ParamLimits

0x2cc1,	// (0x0007527b) popup_image_details_window_t3_ParamLimits

0x2cd5,	// (0x0007528f) popup_image_details_window_t4_ParamLimits

0x2cf0,	// (0x000752aa) popup_image_details_window_t5_ParamLimits

0xf756,	// (0x00081d10) popup_image_details_window_t_ParamLimits

0xb91b,	// (0x0007ded5) cl_header_name_pane_ParamLimits

0xb91b,	// (0x0007ded5) cl_header_name_pane

0xbc92,	// (0x0007e24c) cl_header_name_pane_t1_ParamLimits

0xbc92,	// (0x0007e24c) cl_header_name_pane_t1

0xbca9,	// (0x0007e263) cl_header_name_pane_t2_ParamLimits

0xbca9,	// (0x0007e263) cl_header_name_pane_t2

0xbcd3,	// (0x0007e28d) cl_header_name_pane_t3_ParamLimits

0xbcd3,	// (0x0007e28d) cl_header_name_pane_t3

0x0002,

0xfb57,	// (0x00082111) cl_header_name_pane_t_ParamLimits

0xfb57,	// (0x00082111) cl_header_name_pane_t

0xdfe0,	// (0x0008059a) navi_pane_mv_g2_ParamLimits

0x3465,	// (0x00075a1f) field_vitu2_entry_pane_g1_ParamLimits

0x3471,	// (0x00075a2b) field_vitu2_entry_pane_g2_ParamLimits

0x347d,	// (0x00075a37) field_vitu2_entry_pane_g3_ParamLimits

0x347d,	// (0x00075a37) field_vitu2_entry_pane_g3

0xf94d,	// (0x00081f07) field_vitu2_entry_pane_g_ParamLimits

0xacc6,	// (0x0007d280) cell_vitu2_itu_pane_g1_ParamLimits

0xacd6,	// (0x0007d290) cell_vitu2_itu_pane_g2_ParamLimits

0xacd6,	// (0x0007d290) cell_vitu2_itu_pane_g2

0x0001,

0xf959,	// (0x00081f13) cell_vitu2_itu_pane_g_ParamLimits

0xf959,	// (0x00081f13) cell_vitu2_itu_pane_g

0xaad3,	// (0x0007d08d) bg_vkb2_func_pane_cp05_ParamLimits

0xaad3,	// (0x0007d08d) bg_vkb2_func_pane_cp05

0xaad3,	// (0x0007d08d) bg_vkb2_func_pane_cp03

0xaad3,	// (0x0007d08d) bg_vkb2_func_pane_cp04

0xaad3,	// (0x0007d08d) bg_vkb2_func_pane_cp10_ParamLimits

0xaad3,	// (0x0007d08d) bg_vkb2_func_pane_cp10

0xb8c1,	// (0x0007de7b) bg_vkb2_func_pane_cp08

0xb8a8,	// (0x0007de62) bg_vkb2_func_pane_cp06

0xb8b5,	// (0x0007de6f) bg_vkb2_func_pane_cp07

0x3acf,	// (0x00076089) bg_vkb2_func_pane_cp11_ParamLimits

0x3acf,	// (0x00076089) bg_vkb2_func_pane_cp11

0x3ae4,	// (0x0007609e) bg_vkb2_func_pane_cp12_ParamLimits

0x3ae4,	// (0x0007609e) bg_vkb2_func_pane_cp12

0x0f8b,	// (0x00073545) bg_vkb2_func_pane_cp09

0x34d5,	// (0x00075a8f) bg_vkb2_func_pane_g1

0x1d09,	// (0x000742c3) bg_vkb2_func_pane_g2

0x34dd,	// (0x00075a97) bg_vkb2_func_pane_g3

0x34e5,	// (0x00075a9f) bg_vkb2_func_pane_g4

0x3732,	// (0x00075cec) bg_vkb2_func_pane_g5

0x34fd,	// (0x00075ab7) bg_vkb2_func_pane_g6

0x3505,	// (0x00075abf) bg_vkb2_func_pane_g7

0x34f5,	// (0x00075aaf) bg_vkb2_func_pane_g8

0x1ce9,	// (0x000742a3) bg_vkb2_func_pane_g9

0x0008,

0xfb5e,	// (0x00082118) bg_vkb2_func_pane_g

0xbbe9,	// (0x0007e1a3) blid2_tripm_pane_g6_ParamLimits

0xbbe9,	// (0x0007e1a3) blid2_tripm_pane_g6

0x3329,	// (0x000758e3) mp4_progress_pane_g1

0xbc3d,	// (0x0007e1f7) blid2_tripm_values_pane_ParamLimits

0xbc3d,	// (0x0007e1f7) blid2_tripm_values_pane

0xbcf8,	// (0x0007e2b2) blid2_tripm_values_pane_t1

0xbd06,	// (0x0007e2c0) blid2_tripm_values_pane_t2

0xbd14,	// (0x0007e2ce) blid2_tripm_values_pane_t3

0xbd22,	// (0x0007e2dc) blid2_tripm_values_pane_t4

0xbd30,	// (0x0007e2ea) blid2_tripm_values_pane_t5

0xbd3e,	// (0x0007e2f8) blid2_tripm_values_pane_t6

0xbd4c,	// (0x0007e306) blid2_tripm_values_pane_t7

0xbd5a,	// (0x0007e314) blid2_tripm_values_pane_t8

0xbd68,	// (0x0007e322) blid2_tripm_values_pane_t9

0x0008,

0xfb71,	// (0x0008212b) blid2_tripm_values_pane_t

0x7140,	// (0x000796fa) call_video_pane_t1_ParamLimits

0x715d,	// (0x00079717) call_video_pane_t2_ParamLimits

0xf292,	// (0x0008184c) call_video_pane_t_ParamLimits

0x8579,	// (0x0007ab33) msg_header_pane_g1_ParamLimits

0xe1bc,	// (0x00080776) msg_header_pane_g2_ParamLimits

0xe1bc,	// (0x00080776) msg_header_pane_g2

0x0001,

0xf4ac,	// (0x00081a66) msg_header_pane_g_ParamLimits

0xf4ac,	// (0x00081a66) msg_header_pane_g

0x1743,	// (0x00073cfd) main_clock2_pane_ParamLimits

0x9e36,	// (0x0007c3f0) grid_clock2_toolbar_pane_ParamLimits

0x9e36,	// (0x0007c3f0) grid_clock2_toolbar_pane

0x9e36,	// (0x0007c3f0) listscroll_clock2_pane_ParamLimits

0x9e36,	// (0x0007c3f0) listscroll_clock2_pane

0x9edb,	// (0x0007c495) main_clock2_pane_t3_ParamLimits

0x9edb,	// (0x0007c495) main_clock2_pane_t3

0x9eed,	// (0x0007c4a7) main_clock2_pane_t4_ParamLimits

0x9eed,	// (0x0007c4a7) main_clock2_pane_t4

0x3ba2,	// (0x0007615c) cell_clock2_toolbar_pane

0x3baa,	// (0x00076164) cell_clock2_toolbar_pane_cp01

0x3baa,	// (0x00076164) cell_clock2_toolbar_pane_cp02

0x3bb2,	// (0x0007616c) cell_clock2_toolbar_pane_cp03

0x3bba,	// (0x00076174) list_clock2_pane

0xde82,	// (0x0008043c) scroll_pane_cp10

0x3bc2,	// (0x0007617c) list_single_clock2_pane_ParamLimits

0x3bc2,	// (0x0007617c) list_single_clock2_pane

0xe041,	// (0x000805fb) list_highlight_pane_cp08

0x3bcf,	// (0x00076189) list_single_clock2_pane_t1

0x3bdd,	// (0x00076197) list_single_clock2_pane_t2

0x0001,

0xfb84,	// (0x0008213e) list_single_clock2_pane_t

0x0f8b,	// (0x00073545) bg_button_pane_cp10

0x3beb,	// (0x000761a5) cell_clock2_toolbar_pane_g1

0x8610,	// (0x0007abca) aid_main_viewer_pane_g1_ParamLimits

0x8610,	// (0x0007abca) aid_main_viewer_pane_g1

0x861c,	// (0x0007abd6) aid_main_viewer_pane_g2_ParamLimits

0x861c,	// (0x0007abd6) aid_main_viewer_pane_g2

0x8628,	// (0x0007abe2) aid_main_viewer_pane_g3_ParamLimits

0x8628,	// (0x0007abe2) aid_main_viewer_pane_g3

0x8637,	// (0x0007abf1) aid_main_viewer_pane_g4_ParamLimits

0x8637,	// (0x0007abf1) aid_main_viewer_pane_g4

0x0003,

0xf4bd,	// (0x00081a77) aid_main_viewer_pane_g_ParamLimits

0xf4bd,	// (0x00081a77) aid_main_viewer_pane_g

0x343e,	// (0x000759f8) main_calc_pane_ParamLimits

0x8cc6,	// (0x0007b280) main_dialer2_pane_ParamLimits

0x0f8b,	// (0x00073545) main_cam6_pane

0x0f8b,	// (0x00073545) main_vid6_pane

0x9e42,	// (0x0007c3fc) listscroll_gen_pane_cp06_ParamLimits

0x9e42,	// (0x0007c3fc) listscroll_gen_pane_cp06

0x9eff,	// (0x0007c4b9) main_clock2_pane_t5_ParamLimits

0x9eff,	// (0x0007c4b9) main_clock2_pane_t5

0x9f46,	// (0x0007c500) aid_call2_pane_cp10_ParamLimits

0x9f52,	// (0x0007c50c) aid_call_pane_cp10_ParamLimits

0xdf0e,	// (0x000804c8) popup_clock_analogue_window_cp10_g1_ParamLimits

0xdf0e,	// (0x000804c8) popup_clock_analogue_window_cp10_g2_ParamLimits

0x9f5e,	// (0x0007c518) popup_clock_analogue_window_cp10_g3_ParamLimits

0x9f5e,	// (0x0007c518) popup_clock_analogue_window_cp10_g4_ParamLimits

0xdf0e,	// (0x000804c8) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf806,	// (0x00081dc0) popup_clock_analogue_window_cp10_g_ParamLimits

0x9f6a,	// (0x0007c524) popup_clock_analogue_window_cp10_t1_ParamLimits

0x3389,	// (0x00075943) cell_dialer2_keypad_pane_g2_ParamLimits

0x3389,	// (0x00075943) cell_dialer2_keypad_pane_g2

0x0001,

0xf8ec,	// (0x00081ea6) cell_dialer2_keypad_pane_g_ParamLimits

0xf8ec,	// (0x00081ea6) cell_dialer2_keypad_pane_g

0xa6b8,	// (0x0007cc72) cell_dialer2_keypad_pane_t1

0xafc3,	// (0x0007d57d) main_cset_text2_pane_ParamLimits

0xafc3,	// (0x0007d57d) main_cset_text2_pane

0x3949,	// (0x00075f03) area_vitu2_query_pane_g1_ParamLimits

0xb84d,	// (0x0007de07) area_vitu2_query_pane_g2_ParamLimits

0xfaa1,	// (0x0008205b) area_vitu2_query_pane_g_ParamLimits

0x39cd,	// (0x00075f87) area_vitu2_query_pane_t7_ParamLimits

0x39cd,	// (0x00075f87) area_vitu2_query_pane_t7

0xb8a8,	// (0x0007de62) bg_button_pane_cp018_ParamLimits

0xb8b5,	// (0x0007de6f) bg_button_pane_cp021_ParamLimits

0xb8c1,	// (0x0007de7b) bg_button_pane_cp022_ParamLimits

0xb8c1,	// (0x0007de7b) bg_vkb2_func_pane_cp08_ParamLimits

0xb8a8,	// (0x0007de62) bg_vkb2_func_pane_cp06_ParamLimits

0xb8b5,	// (0x0007de6f) bg_vkb2_func_pane_cp07_ParamLimits

0xb8d0,	// (0x0007de8a) input_focus_pane_cp09_ParamLimits

0xbd76,	// (0x0007e330) cam6_autofocus_pane_ParamLimits

0xbd76,	// (0x0007e330) cam6_autofocus_pane

0xbd92,	// (0x0007e34c) cam6_image_uncrop_pane_ParamLimits

0xbd92,	// (0x0007e34c) cam6_image_uncrop_pane

0xbdb5,	// (0x0007e36f) cam6_indi_pane_ParamLimits

0xbdb5,	// (0x0007e36f) cam6_indi_pane

0xbdcf,	// (0x0007e389) cam6_mode_pane_ParamLimits

0xbdcf,	// (0x0007e389) cam6_mode_pane

0xbde3,	// (0x0007e39d) cam6_timer_pane_ParamLimits

0xbde3,	// (0x0007e39d) cam6_timer_pane

0xbdef,	// (0x0007e3a9) cam6_zoom_pane_ParamLimits

0xbdef,	// (0x0007e3a9) cam6_zoom_pane

0xbe05,	// (0x0007e3bf) cam6_mode_pane_g1_ParamLimits

0xbe05,	// (0x0007e3bf) cam6_mode_pane_g1

0xbe11,	// (0x0007e3cb) cam6_mode_pane_g2_ParamLimits

0xbe11,	// (0x0007e3cb) cam6_mode_pane_g2

0xbe1d,	// (0x0007e3d7) cam6_mode_pane_g3_ParamLimits

0xbe1d,	// (0x0007e3d7) cam6_mode_pane_g3

0xbe29,	// (0x0007e3e3) cam6_mode_pane_g4_ParamLimits

0xbe29,	// (0x0007e3e3) cam6_mode_pane_g4

0x0003,

0xfb89,	// (0x00082143) cam6_mode_pane_g_ParamLimits

0xfb89,	// (0x00082143) cam6_mode_pane_g

0x3bf3,	// (0x000761ad) bg_tb_trans_pane_cp08_ParamLimits

0x3bf3,	// (0x000761ad) bg_tb_trans_pane_cp08

0x3c01,	// (0x000761bb) cam6_battery_pane_ParamLimits

0x3c01,	// (0x000761bb) cam6_battery_pane

0x3c17,	// (0x000761d1) cam6_indi_pane_g1_ParamLimits

0x3c17,	// (0x000761d1) cam6_indi_pane_g1

0x3c29,	// (0x000761e3) cam6_indi_pane_g2_ParamLimits

0x3c29,	// (0x000761e3) cam6_indi_pane_g2

0x3c3b,	// (0x000761f5) cam6_indi_pane_g3_ParamLimits

0x3c3b,	// (0x000761f5) cam6_indi_pane_g3

0x0002,

0xfb92,	// (0x0008214c) cam6_indi_pane_g_ParamLimits

0xfb92,	// (0x0008214c) cam6_indi_pane_g

0x3c4d,	// (0x00076207) cam6_indi_pane_t1_ParamLimits

0x3c4d,	// (0x00076207) cam6_indi_pane_t1

0xab40,	// (0x0007d0fa) cam6_autofocus_pane_g1

0xab38,	// (0x0007d0f2) cam6_autofocus_pane_g2

0xab50,	// (0x0007d10a) cam6_autofocus_pane_g3

0xab48,	// (0x0007d102) cam6_autofocus_pane_g4

0x0003,

0xfb99,	// (0x00082153) cam6_autofocus_pane_g

0x3c73,	// (0x0007622d) cam6_timer_pane_g1

0x3c7b,	// (0x00076235) cam6_timer_pane_t1

0x3c89,	// (0x00076243) cam6_zoom_cont_pane

0x3c91,	// (0x0007624b) cam6_zoom_pane_g1

0x3c99,	// (0x00076253) cam6_zoom_pane_g2

0xbe35,	// (0x0007e3ef) cam6_zoom_pane_g3

0x0002,

0xfba2,	// (0x0008215c) cam6_zoom_pane_g

0x2b0b,	// (0x000750c5) cam6_battery_pane_g1

0x2b0b,	// (0x000750c5) cam6_battery_pane_g2

0x0001,

0xf713,	// (0x00081ccd) cam6_battery_pane_g

0x3ca1,	// (0x0007625b) cam6_zoom_cont_pane_g1

0x3caa,	// (0x00076264) cam6_zoom_cont_pane_g2

0x3cb3,	// (0x0007626d) cam6_zoom_cont_pane_g3

0x0002,

0xfba9,	// (0x00082163) cam6_zoom_cont_pane_g

0xbe52,	// (0x0007e40c) cam6_mode_pane_cp_ParamLimits

0xbe52,	// (0x0007e40c) cam6_mode_pane_cp

0xbe66,	// (0x0007e420) cam6_zoom_pane_cp_ParamLimits

0xbe66,	// (0x0007e420) cam6_zoom_pane_cp

0xbe7c,	// (0x0007e436) vid6_image_uncrop_cif_pane_ParamLimits

0xbe7c,	// (0x0007e436) vid6_image_uncrop_cif_pane

0xbe9e,	// (0x0007e458) vid6_image_uncrop_nhd_pane_ParamLimits

0xbe9e,	// (0x0007e458) vid6_image_uncrop_nhd_pane

0xbeb5,	// (0x0007e46f) vid6_image_uncrop_vga_pane_ParamLimits

0xbeb5,	// (0x0007e46f) vid6_image_uncrop_vga_pane

0xbecc,	// (0x0007e486) vid6_image_uncrop_wvga_pane_ParamLimits

0xbecc,	// (0x0007e486) vid6_image_uncrop_wvga_pane

0xbee3,	// (0x0007e49d) vid6_indi_pane_ParamLimits

0xbee3,	// (0x0007e49d) vid6_indi_pane

0x3bf3,	// (0x000761ad) bg_tb_trans_pane_cp09_ParamLimits

0x3bf3,	// (0x000761ad) bg_tb_trans_pane_cp09

0x3cc7,	// (0x00076281) cam6_battery_pane_cp_ParamLimits

0x3cc7,	// (0x00076281) cam6_battery_pane_cp

0x3cd3,	// (0x0007628d) vid6_indi_pane_g1_ParamLimits

0x3cd3,	// (0x0007628d) vid6_indi_pane_g1

0x3ce5,	// (0x0007629f) vid6_indi_pane_g2_ParamLimits

0x3ce5,	// (0x0007629f) vid6_indi_pane_g2

0x3cf7,	// (0x000762b1) vid6_indi_pane_g3_ParamLimits

0x3cf7,	// (0x000762b1) vid6_indi_pane_g3

0x3d0c,	// (0x000762c6) vid6_indi_pane_g4_ParamLimits

0x3d0c,	// (0x000762c6) vid6_indi_pane_g4

0x3d21,	// (0x000762db) vid6_indi_pane_g5_ParamLimits

0x3d21,	// (0x000762db) vid6_indi_pane_g5

0x0004,

0xfbb0,	// (0x0008216a) vid6_indi_pane_g_ParamLimits

0xfbb0,	// (0x0008216a) vid6_indi_pane_g

0x3d3b,	// (0x000762f5) vid6_indi_pane_t1_ParamLimits

0x3d3b,	// (0x000762f5) vid6_indi_pane_t1

0x3d51,	// (0x0007630b) vid6_indi_pane_t2_ParamLimits

0x3d51,	// (0x0007630b) vid6_indi_pane_t2

0x3d79,	// (0x00076333) vid6_indi_pane_t3_ParamLimits

0x3d79,	// (0x00076333) vid6_indi_pane_t3

0x3da1,	// (0x0007635b) vid6_indi_pane_t4_ParamLimits

0x3da1,	// (0x0007635b) vid6_indi_pane_t4

0x0003,

0xfbbb,	// (0x00082175) vid6_indi_pane_t_ParamLimits

0xfbbb,	// (0x00082175) vid6_indi_pane_t

0x3dc5,	// (0x0007637f) wait_bar_pane_cp08

0xbf03,	// (0x0007e4bd) main_cset_text2_pane_t1_ParamLimits

0xbf03,	// (0x0007e4bd) main_cset_text2_pane_t1

0xbe3d,	// (0x0007e3f7) listscroll_gen_pane_cp06_t1_ParamLimits

0xbe3d,	// (0x0007e3f7) listscroll_gen_pane_cp06_t1

0x0f8b,	// (0x00073545) main_cam6_set_pane

0xaa19,	// (0x0007cfd3) bg_tb_trans_pane_cp06_ParamLimits

0xaa2f,	// (0x0007cfe9) cam4_indicators_pane_g1_ParamLimits

0xaa3f,	// (0x0007cff9) cam4_indicators_pane_g2_ParamLimits

0xf929,	// (0x00081ee3) cam4_indicators_pane_g_ParamLimits

0xaa5f,	// (0x0007d019) cam4_indicators_pane_t1_ParamLimits

0xaad3,	// (0x0007d08d) bg_tb_trans_pane_cp07_ParamLimits

0xaa2f,	// (0x0007cfe9) vid4_indicators_pane_g1_ParamLimits

0xaae1,	// (0x0007d09b) vid4_indicators_pane_g2_ParamLimits

0xaaf1,	// (0x0007d0ab) vid4_indicators_pane_g3_ParamLimits

0xab02,	// (0x0007d0bc) vid4_indicators_pane_g4_ParamLimits

0xf93b,	// (0x00081ef5) vid4_indicators_pane_g_ParamLimits

0xab1e,	// (0x0007d0d8) vid4_indicators_pane_t1_ParamLimits

0xb9ef,	// (0x0007dfa9) vid4_progress_pane_g1_ParamLimits

0xb9fe,	// (0x0007dfb8) vid4_progress_pane_g2_ParamLimits

0xba0d,	// (0x0007dfc7) vid4_progress_pane_g3_ParamLimits

0xba1c,	// (0x0007dfd6) vid4_progress_pane_g4_ParamLimits

0xfaec,	// (0x000820a6) vid4_progress_pane_g_ParamLimits

0xba34,	// (0x0007dfee) vid4_progress_pane_t1_ParamLimits

0xba4a,	// (0x0007e004) vid4_progress_pane_t2_ParamLimits

0xba5f,	// (0x0007e019) vid4_progress_pane_t3_ParamLimits

0xfaf7,	// (0x000820b1) vid4_progress_pane_t_ParamLimits

0xba74,	// (0x0007e02e) wait_bar_pane_cp07_ParamLimits

0xbf1f,	// (0x0007e4d9) main_cam6_set_pane_g2_ParamLimits

0xbf1f,	// (0x0007e4d9) main_cam6_set_pane_g2

0xbf2b,	// (0x0007e4e5) main_cset6_listscroll_pane_ParamLimits

0xbf2b,	// (0x0007e4e5) main_cset6_listscroll_pane

0xbf54,	// (0x0007e50e) main_cset6_slider_pane_ParamLimits

0xbf54,	// (0x0007e50e) main_cset6_slider_pane

0xbf60,	// (0x0007e51a) main_cset6_text2_pane_ParamLimits

0xbf60,	// (0x0007e51a) main_cset6_text2_pane

0x3dd5,	// (0x0007638f) main_cset6_text_pane

0x35cb,	// (0x00075b85) main_cset_list_pane_copy1_ParamLimits

0x35cb,	// (0x00075b85) main_cset_list_pane_copy1

0x35db,	// (0x00075b95) scroll_pane_cp028_copy1

0xbf73,	// (0x0007e52d) cset_list_set_pane_copy1

0xb27e,	// (0x0007d838) aid_position_infowindow_above_copy1

0xb286,	// (0x0007d840) aid_position_infowindow_below_copy1

0xbf82,	// (0x0007e53c) cset_list_set_pane_g1_copy1

0xbf8a,	// (0x0007e544) cset_list_set_pane_g3_copy1_ParamLimits

0xbf8a,	// (0x0007e544) cset_list_set_pane_g3_copy1

0xbf99,	// (0x0007e553) cset_list_set_pane_t1_copy1_ParamLimits

0xbf99,	// (0x0007e553) cset_list_set_pane_t1_copy1

0xf078,	// (0x00081632) list_highlight_pane_cp021_copy1_ParamLimits

0xf078,	// (0x00081632) list_highlight_pane_cp021_copy1

0x3ddd,	// (0x00076397) cset6_slider_pane_ParamLimits

0x3ddd,	// (0x00076397) cset6_slider_pane

0x3e09,	// (0x000763c3) main_cset6_slider_pane_g1_ParamLimits

0x3e09,	// (0x000763c3) main_cset6_slider_pane_g1

0xbfae,	// (0x0007e568) main_cset6_slider_pane_g2_ParamLimits

0xbfae,	// (0x0007e568) main_cset6_slider_pane_g2

0x35f0,	// (0x00075baa) main_cset6_slider_pane_g3_ParamLimits

0x35f0,	// (0x00075baa) main_cset6_slider_pane_g3

0xbfd6,	// (0x0007e590) main_cset6_slider_pane_g4_ParamLimits

0xbfd6,	// (0x0007e590) main_cset6_slider_pane_g4

0xbfe2,	// (0x0007e59c) main_cset6_slider_pane_g5_ParamLimits

0xbfe2,	// (0x0007e59c) main_cset6_slider_pane_g5

0x35f0,	// (0x00075baa) main_cset6_slider_pane_g7_ParamLimits

0x35f0,	// (0x00075baa) main_cset6_slider_pane_g7

0x35fc,	// (0x00075bb6) main_cset6_slider_pane_g8_ParamLimits

0x35fc,	// (0x00075bb6) main_cset6_slider_pane_g8

0xbfee,	// (0x0007e5a8) main_cset6_slider_pane_g9_ParamLimits

0xbfee,	// (0x0007e5a8) main_cset6_slider_pane_g9

0xbffa,	// (0x0007e5b4) main_cset6_slider_pane_g10_ParamLimits

0xbffa,	// (0x0007e5b4) main_cset6_slider_pane_g10

0xbfd6,	// (0x0007e590) main_cset6_slider_pane_g11_ParamLimits

0xbfd6,	// (0x0007e590) main_cset6_slider_pane_g11

0xc006,	// (0x0007e5c0) main_cset6_slider_pane_g12_ParamLimits

0xc006,	// (0x0007e5c0) main_cset6_slider_pane_g12

0xc012,	// (0x0007e5cc) main_cset6_slider_pane_g13_ParamLimits

0xc012,	// (0x0007e5cc) main_cset6_slider_pane_g13

0xc01e,	// (0x0007e5d8) main_cset6_slider_pane_g14_ParamLimits

0xc01e,	// (0x0007e5d8) main_cset6_slider_pane_g14

0xc02a,	// (0x0007e5e4) main_cset6_slider_pane_g15_ParamLimits

0xc02a,	// (0x0007e5e4) main_cset6_slider_pane_g15

0xbfe2,	// (0x0007e59c) main_cset6_slider_pane_g16_ParamLimits

0xbfe2,	// (0x0007e59c) main_cset6_slider_pane_g16

0xc042,	// (0x0007e5fc) main_cset6_slider_pane_g17_ParamLimits

0xc042,	// (0x0007e5fc) main_cset6_slider_pane_g17

0x0011,

0xfbc4,	// (0x0008217e) main_cset6_slider_pane_g_ParamLimits

0xfbc4,	// (0x0008217e) main_cset6_slider_pane_g

0x3e31,	// (0x000763eb) main_cset6_slider_pane_t1_ParamLimits

0x3e31,	// (0x000763eb) main_cset6_slider_pane_t1

0xc04e,	// (0x0007e608) main_cset6_slider_pane_t2_ParamLimits

0xc04e,	// (0x0007e608) main_cset6_slider_pane_t2

0x3e72,	// (0x0007642c) main_cset6_slider_pane_t3_ParamLimits

0x3e72,	// (0x0007642c) main_cset6_slider_pane_t3

0xc079,	// (0x0007e633) main_cset6_slider_pane_t4_ParamLimits

0xc079,	// (0x0007e633) main_cset6_slider_pane_t4

0x3e9d,	// (0x00076457) main_cset6_slider_pane_t5_ParamLimits

0x3e9d,	// (0x00076457) main_cset6_slider_pane_t5

0x3ec8,	// (0x00076482) main_cset6_slider_pane_t7_ParamLimits

0x3ec8,	// (0x00076482) main_cset6_slider_pane_t7

0xc0a4,	// (0x0007e65e) main_cset6_slider_pane_t8_ParamLimits

0xc0a4,	// (0x0007e65e) main_cset6_slider_pane_t8

0xc0c8,	// (0x0007e682) main_cset6_slider_pane_t9_ParamLimits

0xc0c8,	// (0x0007e682) main_cset6_slider_pane_t9

0xc0ec,	// (0x0007e6a6) main_cset6_slider_pane_t10_ParamLimits

0xc0ec,	// (0x0007e6a6) main_cset6_slider_pane_t10

0xc110,	// (0x0007e6ca) main_cset6_slider_pane_t11_ParamLimits

0xc110,	// (0x0007e6ca) main_cset6_slider_pane_t11

0x3efe,	// (0x000764b8) main_cset6_slider_pane_t14_ParamLimits

0x3efe,	// (0x000764b8) main_cset6_slider_pane_t14

0x3f37,	// (0x000764f1) main_cset6_slider_pane_t15_ParamLimits

0x3f37,	// (0x000764f1) main_cset6_slider_pane_t15

0x000b,

0xfbe9,	// (0x000821a3) main_cset6_slider_pane_t_ParamLimits

0xfbe9,	// (0x000821a3) main_cset6_slider_pane_t

0x36d8,	// (0x00075c92) cset_slider_pane_g1_copy1

0x36e1,	// (0x00075c9b) cset_slider_pane_g2_copy1

0x36ea,	// (0x00075ca4) cset_slider_pane_g3_copy1

0x0f8b,	// (0x00073545) bg_popup_sub_pane_cp011_copy1

0x377b,	// (0x00075d35) main_cset_text_pane_g1_copy1

0x3783,	// (0x00075d3d) main_cset_text_pane_t1_copy1

0x3791,	// (0x00075d4b) main_cset_text_pane_t2_copy1

0x379f,	// (0x00075d59) main_cset_text_pane_t3_copy1

0x37ad,	// (0x00075d67) main_cset_text_pane_t4_copy1

0x37bb,	// (0x00075d75) main_cset_text_pane_t5_copy1

0x37c9,	// (0x00075d83) main_cset_text_pane_t6_copy1

0x37d7,	// (0x00075d91) main_cset_text_pane_t7_copy1

0xc134,	// (0x0007e6ee) main_cset_text2_pane_t1_copy1

0x0f8b,	// (0x00073545) main_ncimui_pane

0x8d01,	// (0x0007b2bb) popup_query_ncimui_window_ParamLimits

0x8d01,	// (0x0007b2bb) popup_query_ncimui_window

0x4ecf,	// (0x00077489) field_cale_ev2_pane_g4_ParamLimits

0x4ecf,	// (0x00077489) field_cale_ev2_pane_g4

0xa3ec,	// (0x0007c9a6) cell_video_dialer_keypad_pane_g2_ParamLimits

0xa3ec,	// (0x0007c9a6) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8c7,	// (0x00081e81) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8c7,	// (0x00081e81) cell_video_dialer_keypad_pane_g

0xa404,	// (0x0007c9be) cell_video_dialer_keypad_pane_t1

0x0f8b,	// (0x00073545) bg_popup_window_pane_cp012

0x7e58,	// (0x0007a412) heading_pane_cp06

0x4065,	// (0x0007661f) ncim_query_content_pane

0x0f8b,	// (0x00073545) bg_popup_heading_pane_cp01

0x406d,	// (0x00076627) ncim_heading_pane_t1

0x407b,	// (0x00076635) ncim_indicator_popup_pane

0x408d,	// (0x00076647) ncim_query_button_pane

0x40a1,	// (0x0007665b) ncim_query_content_pane_t1

0x40b3,	// (0x0007666d) ncim_query_content_pane_t2

0x0005,

0xfc28,	// (0x000821e2) ncim_query_content_pane_t

0x40ed,	// (0x000766a7) ncim_query_list_pane

0x40ff,	// (0x000766b9) ncim_query_popup_pane

0x407b,	// (0x00076635) ncim_indicator_popup_pane_ParamLimits

0xc247,	// (0x0007e801) ncim_query_content_pane_g1_ParamLimits

0xc247,	// (0x0007e801) ncim_query_content_pane_g1

0x40a1,	// (0x0007665b) ncim_query_content_pane_t1_ParamLimits

0x40b3,	// (0x0007666d) ncim_query_content_pane_t2_ParamLimits

0xc253,	// (0x0007e80d) ncim_query_content_pane_t3_ParamLimits

0xc253,	// (0x0007e80d) ncim_query_content_pane_t3

0xc270,	// (0x0007e82a) ncim_query_content_pane_t4_ParamLimits

0xc270,	// (0x0007e82a) ncim_query_content_pane_t4

0xc28d,	// (0x0007e847) ncim_query_content_pane_t5_ParamLimits

0xc28d,	// (0x0007e847) ncim_query_content_pane_t5

0x40c5,	// (0x0007667f) ncim_query_content_pane_t6_ParamLimits

0x40c5,	// (0x0007667f) ncim_query_content_pane_t6

0xfc28,	// (0x000821e2) ncim_query_content_pane_t_ParamLimits

0x40ed,	// (0x000766a7) ncim_query_list_pane_ParamLimits

0x40ff,	// (0x000766b9) ncim_query_popup_pane_ParamLimits

0x4113,	// (0x000766cd) wait_bar_pane_cp04

0x0f8b,	// (0x00073545) input_focus_pane_cp011

0x411b,	// (0x000766d5) ncim_query_popup_pane_t1

0x4129,	// (0x000766e3) ncim_list_query_list_pane_ParamLimits

0x4129,	// (0x000766e3) ncim_list_query_list_pane

0x0f8b,	// (0x00073545) bg_button_pane_cp027

0x413c,	// (0x000766f6) ncim_query_button_pane_g1

0x0f8b,	// (0x00073545) list_highlight_pane_cp012

0x4146,	// (0x00076700) ncim_list_query_list_pane_g1

0x414e,	// (0x00076708) ncim_list_query_list_pane_t1

0xaa4f,	// (0x0007d009) cam4_indicators_pane_g3_ParamLimits

0xaa4f,	// (0x0007d009) cam4_indicators_pane_g3

0xab0e,	// (0x0007d0c8) vid4_indicators_pane_g5_ParamLimits

0xab0e,	// (0x0007d0c8) vid4_indicators_pane_g5

0xba28,	// (0x0007dfe2) vid4_progress_pane_g5_ParamLimits

0xba28,	// (0x0007dfe2) vid4_progress_pane_g5

0xc162,	// (0x0007e71c) main_ncimui_pane_g1

0xc1b8,	// (0x0007e772) ncimui_group_query_pane_ParamLimits

0xc1b8,	// (0x0007e772) ncimui_group_query_pane

0xc1f4,	// (0x0007e7ae) ncimui_list_pane_ParamLimits

0xc1f4,	// (0x0007e7ae) ncimui_list_pane

0xc213,	// (0x0007e7cd) ncimui_text_pane_ParamLimits

0xc213,	// (0x0007e7cd) ncimui_text_pane

0xc2aa,	// (0x0007e864) ncimui_text_pane_t1_ParamLimits

0xc2aa,	// (0x0007e864) ncimui_text_pane_t1

0x4165,	// (0x0007671f) ncimui_list_single_graphic_pane_ParamLimits

0x4165,	// (0x0007671f) ncimui_list_single_graphic_pane

0xc2c8,	// (0x0007e882) ncimui_query_pane_ParamLimits

0xc2c8,	// (0x0007e882) ncimui_query_pane

0x0f8b,	// (0x00073545) list_highlight_pane_cp013

0x4172,	// (0x0007672c) ncim_list_query_list_pane_t1_copy1

0x4180,	// (0x0007673a) ncim_list_single_graphic_pane_g1

0x4188,	// (0x00076742) ncim_query_button_pane_cp01

0x4194,	// (0x0007674e) ncim_query_entry_pane_ParamLimits

0x4194,	// (0x0007674e) ncim_query_entry_pane

0x41a7,	// (0x00076761) ncimui_query_pane_g1

0x41b3,	// (0x0007676d) ncimui_query_pane_t1_ParamLimits

0x41b3,	// (0x0007676d) ncimui_query_pane_t1

0xf078,	// (0x00081632) input_focus_pane_cp012

0x41cc,	// (0x00076786) ncim_query_entry_pane_t1

0x1743,	// (0x00073cfd) main_im_pane_ParamLimits

0xf078,	// (0x00081632) main_mobtv_pane_ParamLimits

0xf078,	// (0x00081632) main_mobtv_pane

0xbfee,	// (0x0007e5a8) main_cset6_slider_pane_g18_ParamLimits

0xbfee,	// (0x0007e5a8) main_cset6_slider_pane_g18

0xc012,	// (0x0007e5cc) main_cset6_slider_pane_g19_ParamLimits

0xc012,	// (0x0007e5cc) main_cset6_slider_pane_g19

0x347d,	// (0x00075a37) bg_main_mobtv_pane_ParamLimits

0x347d,	// (0x00075a37) bg_main_mobtv_pane

0xc2d8,	// (0x0007e892) main_mobtv_info_pane

0xc2e1,	// (0x0007e89b) main_mobtv_loading_pane_ParamLimits

0xc2e1,	// (0x0007e89b) main_mobtv_loading_pane

0x41ec,	// (0x000767a6) main_mobtv_pg_channel_list_pane

0x41f6,	// (0x000767b0) main_mobtv_pg_hdr_pane

0xc2ee,	// (0x0007e8a8) main_mobtv_programe_curr_pane_ParamLimits

0xc2ee,	// (0x0007e8a8) main_mobtv_programe_curr_pane

0xc2fb,	// (0x0007e8b5) main_mobtv_programe_next_pane_ParamLimits

0xc2fb,	// (0x0007e8b5) main_mobtv_programe_next_pane

0x41ff,	// (0x000767b9) popup_mobtv_noti_window

0x2b0b,	// (0x000750c5) main_tv_pg_hdr_pane_g1

0x4207,	// (0x000767c1) main_tv_pg_hdr_pane_g2

0x420f,	// (0x000767c9) main_tv_pg_hdr_pane_g3

0x4217,	// (0x000767d1) main_tv_pg_hdr_pane_g4

0x421f,	// (0x000767d9) main_tv_pg_hdr_pane_g5

0x4227,	// (0x000767e1) main_tv_pg_hdr_pane_g6

0x422f,	// (0x000767e9) main_tv_pg_hdr_pane_g7

0x4237,	// (0x000767f1) main_tv_pg_hdr_pane_g8

0x423f,	// (0x000767f9) main_tv_pg_hdr_pane_g9

0x4247,	// (0x00076801) main_tv_pg_hdr_pane_g10

0x4251,	// (0x0007680b) main_tv_pg_hdr_pane_g11

0x000a,

0xfc35,	// (0x000821ef) main_tv_pg_hdr_pane_g

0x425b,	// (0x00076815) main_tv_pg_hdr_pane_t1

0x4269,	// (0x00076823) main_tv_pg_hdr_pane_t2

0x4277,	// (0x00076831) main_tv_pg_hdr_pane_t3

0x4285,	// (0x0007683f) main_tv_pg_hdr_pane_t4

0x4293,	// (0x0007684d) main_tv_pg_hdr_pane_t5

0x0004,

0xfc4c,	// (0x00082206) main_tv_pg_hdr_pane_t

0x42a1,	// (0x0007685b) single_mobtv_pg_channel_pane_ParamLimits

0x42a1,	// (0x0007685b) single_mobtv_pg_channel_pane

0x42b3,	// (0x0007686d) single_mobtv_pg_channel_table_pane

0x42bc,	// (0x00076876) single_mobtv_pg_channel_thumb_pane

0x42c5,	// (0x0007687f) single_tv_pg_channel_pane_g1

0x42ce,	// (0x00076888) single_tv_pg_channel_pane_g2

0x0001,

0xfc57,	// (0x00082211) single_tv_pg_channel_pane_g

0x2d3a,	// (0x000752f4) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x2d3a,	// (0x000752f4) bg_single_mobtv_pg_channel_thumb_pane

0x42d7,	// (0x00076891) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x42d7,	// (0x00076891) single_mobtv_pg_channel_thumb_pane_g1

0x42e5,	// (0x0007689f) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x42e5,	// (0x0007689f) single_mobtv_pg_channel_thumb_pane_g2

0x42f1,	// (0x000768ab) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x42f1,	// (0x000768ab) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc5c,	// (0x00082216) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc5c,	// (0x00082216) single_mobtv_pg_channel_thumb_pane_g

0x42fd,	// (0x000768b7) single_mobtv_pg_channel_thumb_pane_t1

0x430b,	// (0x000768c5) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc63,	// (0x0008221d) single_mobtv_pg_channel_thumb_pane_t

0x2b0b,	// (0x000750c5) bg_single_mobtv_pg_channel_table_pane_g1

0x2b0b,	// (0x000750c5) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf713,	// (0x00081ccd) bg_single_mobtv_pg_channel_table_pane_g

0x4319,	// (0x000768d3) single_mobtv_pg_channel_table_pane_t1

0x4327,	// (0x000768e1) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc68,	// (0x00082222) single_mobtv_pg_channel_table_pane_t

0xc310,	// (0x0007e8ca) main_mobtv_info_pane_g1_ParamLimits

0xc310,	// (0x0007e8ca) main_mobtv_info_pane_g1

0xc32c,	// (0x0007e8e6) main_mobtv_info_pane_t1_ParamLimits

0xc32c,	// (0x0007e8e6) main_mobtv_info_pane_t1

0xc392,	// (0x0007e94c) main_mobtv_info_pane_t2_ParamLimits

0xc392,	// (0x0007e94c) main_mobtv_info_pane_t2

0x0002,

0xfc72,	// (0x0008222c) main_mobtv_info_pane_t_ParamLimits

0xfc72,	// (0x0008222c) main_mobtv_info_pane_t

0xc415,	// (0x0007e9cf) wait_bar_pane_cp05

0xc425,	// (0x0007e9df) main_mobtv_loading_pane_g1_ParamLimits

0xc425,	// (0x0007e9df) main_mobtv_loading_pane_g1

0xc431,	// (0x0007e9eb) main_mobtv_loading_pane_g2_ParamLimits

0xc431,	// (0x0007e9eb) main_mobtv_loading_pane_g2

0xc43d,	// (0x0007e9f7) main_mobtv_loading_pane_g3_ParamLimits

0xc43d,	// (0x0007e9f7) main_mobtv_loading_pane_g3

0x0002,

0xfc79,	// (0x00082233) main_mobtv_loading_pane_g_ParamLimits

0xfc79,	// (0x00082233) main_mobtv_loading_pane_g

0x4335,	// (0x000768ef) main_mobtv_loading_pane_t1_ParamLimits

0x4335,	// (0x000768ef) main_mobtv_loading_pane_t1

0x434d,	// (0x00076907) main_mobtv_loading_pane_t2_ParamLimits

0x434d,	// (0x00076907) main_mobtv_loading_pane_t2

0x0001,

0xfc80,	// (0x0008223a) main_mobtv_loading_pane_t_ParamLimits

0xfc80,	// (0x0008223a) main_mobtv_loading_pane_t

0xc449,	// (0x0007ea03) wait_bar_pane_cp06_ParamLimits

0xc449,	// (0x0007ea03) wait_bar_pane_cp06

0x4371,	// (0x0007692b) main_mobtv_programe_curr_pane_t1

0x437f,	// (0x00076939) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc85,	// (0x0008223f) main_mobtv_programe_curr_pane_t

0x438d,	// (0x00076947) main_mobtv_programe_next_pane_t1

0x439b,	// (0x00076955) main_mobtv_programe_next_pane_t2

0x43a9,	// (0x00076963) main_mobtv_programe_next_pane_t3

0x0002,

0xfc8a,	// (0x00082244) main_mobtv_programe_next_pane_t

0x0f8b,	// (0x00073545) bg_popup_mobtv_noti_window_pane

0x43b7,	// (0x00076971) popup_mobtv_noti_window_g1

0x43bf,	// (0x00076979) popup_mobtv_noti_window_t1

0x43cd,	// (0x00076987) popup_mobtv_noti_window_t2

0x0001,

0xfc91,	// (0x0008224b) popup_mobtv_noti_window_t

0x2b0b,	// (0x000750c5) bg_popup_mobtv_noti_window_pane_g1

0x0f8b,	// (0x00073545) sc_clock_pane

0x0f8b,	// (0x00073545) main_fs_bigclock_pane

0xbc2b,	// (0x0007e1e5) blid2_tripm_pane_t4_ParamLimits

0xbc2b,	// (0x0007e1e5) blid2_tripm_pane_t4

0xc455,	// (0x0007ea0f) sc_clock_pane_g1_ParamLimits

0xc455,	// (0x0007ea0f) sc_clock_pane_g1

0xc463,	// (0x0007ea1d) sc_clock_pane_t1_ParamLimits

0xc463,	// (0x0007ea1d) sc_clock_pane_t1

0xc476,	// (0x0007ea30) sc_clock_pane_t2_ParamLimits

0xc476,	// (0x0007ea30) sc_clock_pane_t2

0xc488,	// (0x0007ea42) sc_clock_pane_t3_ParamLimits

0xc488,	// (0x0007ea42) sc_clock_pane_t3

0x0004,

0xfc96,	// (0x00082250) sc_clock_pane_t_ParamLimits

0xfc96,	// (0x00082250) sc_clock_pane_t

0xd29e,	// (0x0007f858) main_fs_bigclock_indicator_pane_ParamLimits

0xd29e,	// (0x0007f858) main_fs_bigclock_indicator_pane

0xc500,	// (0x0007eaba) main_fs_bigclock_pane_g1_ParamLimits

0xc500,	// (0x0007eaba) main_fs_bigclock_pane_g1

0xd2aa,	// (0x0007f864) main_fs_bigclock_pane_t1_ParamLimits

0xd2aa,	// (0x0007f864) main_fs_bigclock_pane_t1

0xd2bc,	// (0x0007f876) main_fs_bigclock_pane_t2_ParamLimits

0xd2bc,	// (0x0007f876) main_fs_bigclock_pane_t2

0xd2ce,	// (0x0007f888) main_fs_bigclock_pane_t3_ParamLimits

0xd2ce,	// (0x0007f888) main_fs_bigclock_pane_t3

0x0002,

0xfe90,	// (0x0008244a) main_fs_bigclock_pane_t_ParamLimits

0xfe90,	// (0x0008244a) main_fs_bigclock_pane_t

0xd2e0,	// (0x0007f89a) main_fs_bigclock_indicator_pane_g1

0x4095,	// (0x0007664f) ncim_query_content_pane_g2_ParamLimits

0x4095,	// (0x0007664f) ncim_query_content_pane_g2

0x0001,

0xfc23,	// (0x000821dd) ncim_query_content_pane_g_ParamLimits

0xfc23,	// (0x000821dd) ncim_query_content_pane_g

0xc49a,	// (0x0007ea54) sc_clock_pane_t4_ParamLimits

0xc49a,	// (0x0007ea54) sc_clock_pane_t4

0xf078,	// (0x00081632) main_radioblah_pane

0x33e0,	// (0x0007599a) cell_call4_button_pane_t1_copy1_ParamLimits

0x33e0,	// (0x0007599a) cell_call4_button_pane_t1_copy1

0xc16a,	// (0x0007e724) main_ncimui_pane_t1_ParamLimits

0xc16a,	// (0x0007e724) main_ncimui_pane_t1

0xc184,	// (0x0007e73e) main_ncimui_pane_t2_ParamLimits

0xc184,	// (0x0007e73e) main_ncimui_pane_t2

0x0002,

0xfc1c,	// (0x000821d6) main_ncimui_pane_t_ParamLimits

0xfc1c,	// (0x000821d6) main_ncimui_pane_t

0x44f7,	// (0x00076ab1) main_radioblah_anim_pane_ParamLimits

0x44f7,	// (0x00076ab1) main_radioblah_anim_pane

0x4508,	// (0x00076ac2) main_radioblah_info_pane_ParamLimits

0x4508,	// (0x00076ac2) main_radioblah_info_pane

0x451c,	// (0x00076ad6) main_radioblah_pane_t1_ParamLimits

0x451c,	// (0x00076ad6) main_radioblah_pane_t1

0x4538,	// (0x00076af2) main_radioblah_pane_t2_ParamLimits

0x4538,	// (0x00076af2) main_radioblah_pane_t2

0x0003,

0xfcb7,	// (0x00082271) main_radioblah_pane_t_ParamLimits

0xfcb7,	// (0x00082271) main_radioblah_pane_t

0xc548,	// (0x0007eb02) main_radioblah_rocker_ctrl_pane_ParamLimits

0xc548,	// (0x0007eb02) main_radioblah_rocker_ctrl_pane

0x4580,	// (0x00076b3a) main_radioblah_info_pane_t1_ParamLimits

0x4580,	// (0x00076b3a) main_radioblah_info_pane_t1

0xc58d,	// (0x0007eb47) main_radioblah_info_pane_t2_ParamLimits

0xc58d,	// (0x0007eb47) main_radioblah_info_pane_t2

0x0003,

0xfcc0,	// (0x0008227a) main_radioblah_info_pane_t_ParamLimits

0xfcc0,	// (0x0008227a) main_radioblah_info_pane_t

0x2b0b,	// (0x000750c5) main_radioblah_rocker_ctrl_pane_g1

0xc635,	// (0x0007ebef) main_radioblah_rocker_ctrl_pane_g2

0xc63d,	// (0x0007ebf7) main_radioblah_rocker_ctrl_pane_g3

0xc645,	// (0x0007ebff) main_radioblah_rocker_ctrl_pane_g4

0xc64d,	// (0x0007ec07) main_radioblah_rocker_ctrl_pane_g5

0xc655,	// (0x0007ec0f) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcc9,	// (0x00082283) main_radioblah_rocker_ctrl_pane_g

0xc134,	// (0x0007e6ee) main_cset_text2_pane_t1_copy1_ParamLimits

0xa971,	// (0x0007cf2b) cam4_image_uncrop_qvga_pane

0xaa93,	// (0x0007d04d) vid4_image_uncrop_qcif_pane

0xbda9,	// (0x0007e363) cam6_image_uncrop_qvga_pane_ParamLimits

0xbda9,	// (0x0007e363) cam6_image_uncrop_qvga_pane

0x3cbb,	// (0x00076275) vid6_image_uncrop_qcif_pane_ParamLimits

0x3cbb,	// (0x00076275) vid6_image_uncrop_qcif_pane

0x0f8b,	// (0x00073545) bg_popup_preview_window_pane_cp03

0x403b,	// (0x000765f5) list_cset_text2_pane

0x4043,	// (0x000765fd) main_cset6_text2_pane_g1

0x404b,	// (0x00076605) main_cset6_text2_pane_t1

0xc65d,	// (0x0007ec17) list_cset_text2_pane_t1_ParamLimits

0xc65d,	// (0x0007ec17) list_cset_text2_pane_t1

0xf078,	// (0x00081632) main_radioblah_pane_ParamLimits

0xc403,	// (0x0007e9bd) main_mobtv_info_pane_t3_ParamLimits

0xc403,	// (0x0007e9bd) main_mobtv_info_pane_t3

0xc536,	// (0x0007eaf0) main_radioblah_pane_g1

0xc561,	// (0x0007eb1b) main_radioblah_info_pane_g1

0xc5dc,	// (0x0007eb96) main_radioblah_info_pane_t3_ParamLimits

0xc5dc,	// (0x0007eb96) main_radioblah_info_pane_t3

0x7bc5,	// (0x0007a17f) highlight_cell_cale_month_pane_ParamLimits

0x7bc5,	// (0x0007a17f) highlight_cell_cale_month_pane

0x0f8b,	// (0x00073545) main_phob_fisheye_pane

0x2e3c,	// (0x000753f6) scroll_pane_cp0031_ParamLimits

0x2e3c,	// (0x000753f6) scroll_pane_cp0031

0x3dc5,	// (0x0007637f) wait_bar_pane_cp08_ParamLimits

0xbf73,	// (0x0007e52d) cset_list_set_pane_copy1_ParamLimits

0x45ba,	// (0x00076b74) highlight_cell_cale_month_pane_g1

0xc674,	// (0x0007ec2e) highlight_cell_cale_month_pane_t1

0x45c2,	// (0x00076b7c) list_gen_pane_cp01

0x35db,	// (0x00075b95) scroll_pane_01

0x52e2,	// (0x0007789c) list_single_double_fisheye_pane

0xc682,	// (0x0007ec3c) list_double_fisheye_pane_g1_ParamLimits

0xc682,	// (0x0007ec3c) list_double_fisheye_pane_g1

0xc68e,	// (0x0007ec48) list_double_fisheye_pane_g2_ParamLimits

0xc68e,	// (0x0007ec48) list_double_fisheye_pane_g2

0xc6a2,	// (0x0007ec5c) list_double_fisheye_pane_g3_ParamLimits

0xc6a2,	// (0x0007ec5c) list_double_fisheye_pane_g3

0x0004,

0xfcd6,	// (0x00082290) list_double_fisheye_pane_g_ParamLimits

0xfcd6,	// (0x00082290) list_double_fisheye_pane_g

0xc6cb,	// (0x0007ec85) list_double_fisheye_pane_t1_ParamLimits

0xc6cb,	// (0x0007ec85) list_double_fisheye_pane_t1

0xc6e6,	// (0x0007eca0) list_double_fisheye_pane_t2_ParamLimits

0xc6e6,	// (0x0007eca0) list_double_fisheye_pane_t2

0x0001,

0xfce1,	// (0x0008229b) list_double_fisheye_pane_t_ParamLimits

0xfce1,	// (0x0008229b) list_double_fisheye_pane_t

0x0f8b,	// (0x00073545) main_call5_pane

0xc4c0,	// (0x0007ea7a) sc_swipe_pane_ParamLimits

0xc4c0,	// (0x0007ea7a) sc_swipe_pane

0xc714,	// (0x0007ecce) call5_image_pane_ParamLimits

0xc714,	// (0x0007ecce) call5_image_pane

0xc720,	// (0x0007ecda) call5_swipe_1_pane_ParamLimits

0xc720,	// (0x0007ecda) call5_swipe_1_pane

0xc72c,	// (0x0007ece6) call5_swipe_2_pane_ParamLimits

0xc72c,	// (0x0007ece6) call5_swipe_2_pane

0xc744,	// (0x0007ecfe) popup_call5_audio_first_window_ParamLimits

0xc744,	// (0x0007ecfe) popup_call5_audio_first_window

0x2d3a,	// (0x000752f4) call5_swipe_1_pane_g1_ParamLimits

0x2d3a,	// (0x000752f4) call5_swipe_1_pane_g1

0x45d4,	// (0x00076b8e) call5_swipe_1_pane_g2_ParamLimits

0x45d4,	// (0x00076b8e) call5_swipe_1_pane_g2

0x0001,

0xfce6,	// (0x000822a0) call5_swipe_1_pane_g_ParamLimits

0xfce6,	// (0x000822a0) call5_swipe_1_pane_g

0x45e0,	// (0x00076b9a) call5_swipe_1_pane_t1_ParamLimits

0x45e0,	// (0x00076b9a) call5_swipe_1_pane_t1

0x2d3a,	// (0x000752f4) call5_swipe_2_pane_g1_ParamLimits

0x2d3a,	// (0x000752f4) call5_swipe_2_pane_g1

0x45f5,	// (0x00076baf) call5_swipe_2_pane_g2_ParamLimits

0x45f5,	// (0x00076baf) call5_swipe_2_pane_g2

0x0001,

0xfceb,	// (0x000822a5) call5_swipe_2_pane_g_ParamLimits

0xfceb,	// (0x000822a5) call5_swipe_2_pane_g

0x4601,	// (0x00076bbb) call5_swipe_2_pane_t1_ParamLimits

0x4601,	// (0x00076bbb) call5_swipe_2_pane_t1

0x4616,	// (0x00076bd0) sc_swipe_pane_g1_ParamLimits

0x4616,	// (0x00076bd0) sc_swipe_pane_g1

0x4623,	// (0x00076bdd) sc_swipe_pane_g2_ParamLimits

0x4623,	// (0x00076bdd) sc_swipe_pane_g2

0x0001,

0xfcf0,	// (0x000822aa) sc_swipe_pane_g_ParamLimits

0xfcf0,	// (0x000822aa) sc_swipe_pane_g

0x462f,	// (0x00076be9) sc_swipe_pane_t1_ParamLimits

0x462f,	// (0x00076be9) sc_swipe_pane_t1

0x0f8b,	// (0x00073545) main_cmail_launcher_pane

0xc750,	// (0x0007ed0a) aid_size_cell_cmail_l_ParamLimits

0xc750,	// (0x0007ed0a) aid_size_cell_cmail_l

0xc760,	// (0x0007ed1a) grid_cmail_l_pane_ParamLimits

0xc760,	// (0x0007ed1a) grid_cmail_l_pane

0xc76c,	// (0x0007ed26) cell_cmail_l_pane_ParamLimits

0xc76c,	// (0x0007ed26) cell_cmail_l_pane

0xc77e,	// (0x0007ed38) cell_cmail_l_pane_g1_ParamLimits

0xc77e,	// (0x0007ed38) cell_cmail_l_pane_g1

0xc78e,	// (0x0007ed48) cell_cmail_l_pane_t1_ParamLimits

0xc78e,	// (0x0007ed48) cell_cmail_l_pane_t1

0x4644,	// (0x00076bfe) cell_cmail_l_pane_t2_ParamLimits

0x4644,	// (0x00076bfe) cell_cmail_l_pane_t2

0x0001,

0xfcf5,	// (0x000822af) cell_cmail_l_pane_t_ParamLimits

0xfcf5,	// (0x000822af) cell_cmail_l_pane_t

0xf078,	// (0x00081632) grid_highlight_pane_cp018_ParamLimits

0xf078,	// (0x00081632) grid_highlight_pane_cp018

0x62f6,	// (0x000788b0) main2_pane_ParamLimits

0x62f6,	// (0x000788b0) main2_pane

0x1846,	// (0x00073e00) popup_sp_fs_action_menu_bg_pane_g1

0x184e,	// (0x00073e08) popup_sp_fs_action_menu_bg_pane_g2

0x1856,	// (0x00073e10) popup_sp_fs_action_menu_bg_pane_g3

0x185e,	// (0x00073e18) popup_sp_fs_action_menu_bg_pane_g4

0x1866,	// (0x00073e20) popup_sp_fs_action_menu_bg_pane_g5

0x186e,	// (0x00073e28) popup_sp_fs_action_menu_bg_pane_g6

0x1876,	// (0x00073e30) popup_sp_fs_action_menu_bg_pane_g7

0x187e,	// (0x00073e38) popup_sp_fs_action_menu_bg_pane_g8

0x1886,	// (0x00073e40) popup_sp_fs_action_menu_bg_pane_g9

0x188e,	// (0x00073e48) popup_sp_fs_action_menu_bg_pane_g10

0x188e,	// (0x00073e48) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1ac,	// (0x00081766) popup_sp_fs_action_menu_bg_pane_g

0x1a65,	// (0x0007401f) list_medium_line_x2_t3_g3_g1_ParamLimits

0x1a65,	// (0x0007401f) list_medium_line_x2_t3_g3_g1

0x1a71,	// (0x0007402b) list_medium_line_x2_t3_g3_g2_ParamLimits

0x1a71,	// (0x0007402b) list_medium_line_x2_t3_g3_g2

0x1a7d,	// (0x00074037) list_medium_line_x2_t3_g3_g3_ParamLimits

0x1a7d,	// (0x00074037) list_medium_line_x2_t3_g3_g3

0x0002,

0xf25c,	// (0x00081816) list_medium_line_x2_t3_g3_g_ParamLimits

0xf25c,	// (0x00081816) list_medium_line_x2_t3_g3_g

0x1a89,	// (0x00074043) list_medium_line_x2_t3_g3_t1_ParamLimits

0x1a89,	// (0x00074043) list_medium_line_x2_t3_g3_t1

0x7050,	// (0x0007960a) list_medium_line_x2_t3_g3_t2_ParamLimits

0x7050,	// (0x0007960a) list_medium_line_x2_t3_g3_t2

0x1a9e,	// (0x00074058) list_medium_line_x2_t3_g3_t3_ParamLimits

0x1a9e,	// (0x00074058) list_medium_line_x2_t3_g3_t3

0x0002,

0xf263,	// (0x0008181d) list_medium_line_x2_t3_g3_t_ParamLimits

0xf263,	// (0x0008181d) list_medium_line_x2_t3_g3_t

0x1a65,	// (0x0007401f) list_medium_line_x2_t3_g2_g1_ParamLimits

0x1a65,	// (0x0007401f) list_medium_line_x2_t3_g2_g1

0x1a7d,	// (0x00074037) list_medium_line_x2_t3_g2_g2_ParamLimits

0x1a7d,	// (0x00074037) list_medium_line_x2_t3_g2_g2

0x0001,

0xf26a,	// (0x00081824) list_medium_line_x2_t3_g2_g_ParamLimits

0xf26a,	// (0x00081824) list_medium_line_x2_t3_g2_g

0x1ab3,	// (0x0007406d) list_medium_line_x2_t3_g2_t1_ParamLimits

0x1ab3,	// (0x0007406d) list_medium_line_x2_t3_g2_t1

0x1ac9,	// (0x00074083) list_medium_line_x2_t3_g2_t2_ParamLimits

0x1ac9,	// (0x00074083) list_medium_line_x2_t3_g2_t2

0x1a9e,	// (0x00074058) list_medium_line_x2_t3_g2_t3_ParamLimits

0x1a9e,	// (0x00074058) list_medium_line_x2_t3_g2_t3

0x0002,

0xf26f,	// (0x00081829) list_medium_line_x2_t3_g2_t_ParamLimits

0xf26f,	// (0x00081829) list_medium_line_x2_t3_g2_t

0x1a65,	// (0x0007401f) list_medium_line_x2_t4_g4_g1_ParamLimits

0x1a65,	// (0x0007401f) list_medium_line_x2_t4_g4_g1

0x1adb,	// (0x00074095) list_medium_line_x2_t4_g4_g2_ParamLimits

0x1adb,	// (0x00074095) list_medium_line_x2_t4_g4_g2

0x1a71,	// (0x0007402b) list_medium_line_x2_t4_g4_g3_ParamLimits

0x1a71,	// (0x0007402b) list_medium_line_x2_t4_g4_g3

0x1ae7,	// (0x000740a1) list_medium_line_x2_t4_g4_g4_ParamLimits

0x1ae7,	// (0x000740a1) list_medium_line_x2_t4_g4_g4

0x0003,

0xf276,	// (0x00081830) list_medium_line_x2_t4_g4_g_ParamLimits

0xf276,	// (0x00081830) list_medium_line_x2_t4_g4_g

0x7062,	// (0x0007961c) list_medium_line_x2_t4_g4_t1_ParamLimits

0x7062,	// (0x0007961c) list_medium_line_x2_t4_g4_t1

0x7079,	// (0x00079633) list_medium_line_x2_t4_g4_t2_ParamLimits

0x7079,	// (0x00079633) list_medium_line_x2_t4_g4_t2

0x708e,	// (0x00079648) list_medium_line_x2_t4_g4_t3_ParamLimits

0x708e,	// (0x00079648) list_medium_line_x2_t4_g4_t3

0x1af3,	// (0x000740ad) list_medium_line_x2_t4_g4_t4_ParamLimits

0x1af3,	// (0x000740ad) list_medium_line_x2_t4_g4_t4

0x0003,

0xf27f,	// (0x00081839) list_medium_line_x2_t4_g4_t_ParamLimits

0xf27f,	// (0x00081839) list_medium_line_x2_t4_g4_t

0x1a65,	// (0x0007401f) list_medium_line_x2_t2_g4_g1_ParamLimits

0x1a65,	// (0x0007401f) list_medium_line_x2_t2_g4_g1

0x1adb,	// (0x00074095) list_medium_line_x2_t2_g4_g2_ParamLimits

0x1adb,	// (0x00074095) list_medium_line_x2_t2_g4_g2

0x1a71,	// (0x0007402b) list_medium_line_x2_t2_g4_g3_ParamLimits

0x1a71,	// (0x0007402b) list_medium_line_x2_t2_g4_g3

0x1a7d,	// (0x00074037) list_medium_line_x2_t2_g4_g4_ParamLimits

0x1a7d,	// (0x00074037) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2e6,	// (0x000818a0) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2e6,	// (0x000818a0) list_medium_line_x2_t2_g4_g

0x1deb,	// (0x000743a5) list_medium_line_x2_t2_g4_t1_ParamLimits

0x1deb,	// (0x000743a5) list_medium_line_x2_t2_g4_t1

0x1a9e,	// (0x00074058) list_medium_line_x2_t2_g4_t2_ParamLimits

0x1a9e,	// (0x00074058) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2ef,	// (0x000818a9) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2ef,	// (0x000818a9) list_medium_line_x2_t2_g4_t

0x1a65,	// (0x0007401f) list_medium_line_x2_t2_g3_g1_ParamLimits

0x1a65,	// (0x0007401f) list_medium_line_x2_t2_g3_g1

0x1a71,	// (0x0007402b) list_medium_line_x2_t2_g3_g2_ParamLimits

0x1a71,	// (0x0007402b) list_medium_line_x2_t2_g3_g2

0x1a7d,	// (0x00074037) list_medium_line_x2_t2_g3_g3_ParamLimits

0x1a7d,	// (0x00074037) list_medium_line_x2_t2_g3_g3

0x0002,

0xf25c,	// (0x00081816) list_medium_line_x2_t2_g3_g_ParamLimits

0xf25c,	// (0x00081816) list_medium_line_x2_t2_g3_g

0x1e00,	// (0x000743ba) list_medium_line_x2_t2_g3_t1_ParamLimits

0x1e00,	// (0x000743ba) list_medium_line_x2_t2_g3_t1

0x1a9e,	// (0x00074058) list_medium_line_x2_t2_g3_t2_ParamLimits

0x1a9e,	// (0x00074058) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2f4,	// (0x000818ae) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2f4,	// (0x000818ae) list_medium_line_x2_t2_g3_t

0x7d35,	// (0x0007a2ef) main_sp_fs_list_pane_ParamLimits

0x7d35,	// (0x0007a2ef) main_sp_fs_list_pane

0x7d42,	// (0x0007a2fc) sp_fs_scroll_pane_ParamLimits

0x7d42,	// (0x0007a2fc) sp_fs_scroll_pane

0x7d4f,	// (0x0007a309) list_medium_line_x2_t3_t1

0x7d5f,	// (0x0007a319) list_medium_line_x2_t3_t2

0x205a,	// (0x00074614) list_medium_line_x2_t3_t3

0x0002,

0xf33f,	// (0x000818f9) list_medium_line_x2_t3_t

0x7d6d,	// (0x0007a327) list_medium_line_x3_t4_t1

0x7d7d,	// (0x0007a337) list_medium_line_x3_t4_t2

0x2068,	// (0x00074622) list_medium_line_x3_t4_t3

0x2076,	// (0x00074630) list_medium_line_x3_t4_t4

0x0003,

0xf346,	// (0x00081900) list_medium_line_x3_t4_t

0x7d8b,	// (0x0007a345) list_medium_line_x4_t5_t1

0x7d9b,	// (0x0007a355) list_medium_line_x4_t5_t2

0x2068,	// (0x00074622) list_medium_line_x4_t5_t3

0x2084,	// (0x0007463e) list_medium_line_x4_t5_t4

0x2076,	// (0x00074630) list_medium_line_x4_t5_t5

0x0004,

0xf34f,	// (0x00081909) list_medium_line_x4_t5_t

0x1a65,	// (0x0007401f) list_medium_line_t4_g4_g1_ParamLimits

0x1a65,	// (0x0007401f) list_medium_line_t4_g4_g1

0x1ae7,	// (0x000740a1) list_medium_line_t4_g4_g2_ParamLimits

0x1ae7,	// (0x000740a1) list_medium_line_t4_g4_g2

0x2092,	// (0x0007464c) list_medium_line_t4_g4_g3_ParamLimits

0x2092,	// (0x0007464c) list_medium_line_t4_g4_g3

0x1a7d,	// (0x00074037) list_medium_line_t4_g4_g4_ParamLimits

0x1a7d,	// (0x00074037) list_medium_line_t4_g4_g4

0x0003,

0xf35a,	// (0x00081914) list_medium_line_t4_g4_g_ParamLimits

0xf35a,	// (0x00081914) list_medium_line_t4_g4_g

0x209e,	// (0x00074658) list_medium_line_t4_g4_t1_ParamLimits

0x209e,	// (0x00074658) list_medium_line_t4_g4_t1

0x20b3,	// (0x0007466d) list_medium_line_t4_g4_t2_ParamLimits

0x20b3,	// (0x0007466d) list_medium_line_t4_g4_t2

0x20c9,	// (0x00074683) list_medium_line_t4_g4_t3_ParamLimits

0x20c9,	// (0x00074683) list_medium_line_t4_g4_t3

0x20df,	// (0x00074699) list_medium_line_t4_g4_t4_ParamLimits

0x20df,	// (0x00074699) list_medium_line_t4_g4_t4

0x0003,

0xf363,	// (0x0008191d) list_medium_line_t4_g4_t_ParamLimits

0xf363,	// (0x0008191d) list_medium_line_t4_g4_t

0x7f2f,	// (0x0007a4e9) chi_dic_find_pane_g1

0x8cd4,	// (0x0007b28e) main_tport_pane

0x3724,	// (0x00075cde) list_medium_line_plain_t1

0x1a65,	// (0x0007401f) list_medium_line_t2_g2_g1_ParamLimits

0x1a65,	// (0x0007401f) list_medium_line_t2_g2_g1

0x1a71,	// (0x0007402b) list_medium_line_t2_g2_g2_ParamLimits

0x1a71,	// (0x0007402b) list_medium_line_t2_g2_g2

0x0001,

0xfa32,	// (0x00081fec) list_medium_line_t2_g2_g_ParamLimits

0xfa32,	// (0x00081fec) list_medium_line_t2_g2_g

0xb459,	// (0x0007da13) list_medium_line_t2_g2_t1_ParamLimits

0xb459,	// (0x0007da13) list_medium_line_t2_g2_t1

0xb470,	// (0x0007da2a) list_medium_line_t2_g2_t2_ParamLimits

0xb470,	// (0x0007da2a) list_medium_line_t2_g2_t2

0x0001,

0xfa37,	// (0x00081ff1) list_medium_line_t2_g2_t_ParamLimits

0xfa37,	// (0x00081ff1) list_medium_line_t2_g2_t

0x3a4b,	// (0x00076005) aid_sp_fs_list_icon_a_sm

0x52b9,	// (0x00077873) aid_sp_fs_list_icon_d

0x3a53,	// (0x0007600d) aid_sp_fs_text_primary

0x3a5c,	// (0x00076016) aid_sp_fs_text_secondary

0x52c1,	// (0x0007787b) list_medium_line

0x52c1,	// (0x0007787b) list_medium_line_g2

0x52c1,	// (0x0007787b) list_medium_line_g3

0x52c1,	// (0x0007787b) list_medium_line_plain

0x52c1,	// (0x0007787b) list_medium_line_plain_t2

0x52c1,	// (0x0007787b) list_medium_line_plain_t3

0x52c1,	// (0x0007787b) list_medium_line_right_icon

0x52c1,	// (0x0007787b) list_medium_line_right_iconx2

0x52c1,	// (0x0007787b) list_medium_line_t2

0x52c1,	// (0x0007787b) list_medium_line_t2_g2

0x52c1,	// (0x0007787b) list_medium_line_t2_g3

0x52c1,	// (0x0007787b) list_medium_line_t2_right_icon

0x52c1,	// (0x0007787b) list_medium_line_t2_right_iconx2

0x52c1,	// (0x0007787b) list_medium_line_t3

0x52c1,	// (0x0007787b) list_medium_line_t3_g2

0x52c1,	// (0x0007787b) list_medium_line_t3_g3

0x52c1,	// (0x0007787b) list_medium_line_t3_right_iconx2

0x3a65,	// (0x0007601f) list_medium_line_t4_g4

0x3a6e,	// (0x00076028) list_medium_line_x2

0x3a6e,	// (0x00076028) list_medium_line_x2_t2_g2

0x3a6e,	// (0x00076028) list_medium_line_x2_t2_g3

0x3a6e,	// (0x00076028) list_medium_line_x2_t2_g4

0x3a6e,	// (0x00076028) list_medium_line_x2_t3

0x3a6e,	// (0x00076028) list_medium_line_x2_t3_g2

0x3a6e,	// (0x00076028) list_medium_line_x2_t3_g3

0x3a6e,	// (0x00076028) list_medium_line_x2_t3_g4

0x3a6e,	// (0x00076028) list_medium_line_x2_t4_g2

0x3a6e,	// (0x00076028) list_medium_line_x2_t4_g4

0x3a77,	// (0x00076031) list_medium_line_x3

0x3a77,	// (0x00076031) list_medium_line_x3_t4

0x3a77,	// (0x00076031) list_medium_line_x3_t4_g4

0x3a65,	// (0x0007601f) list_medium_line_x4_t4

0x3a65,	// (0x0007601f) list_medium_line_x4_t4_g7

0x3a65,	// (0x0007601f) list_medium_line_x4_t5

0x3a80,	// (0x0007603a) list_single_fs_dyc_pane_ParamLimits

0x3a80,	// (0x0007603a) list_single_fs_dyc_pane

0x1a65,	// (0x0007401f) list_medium_line_x4_t4_g7_g1_ParamLimits

0x1a65,	// (0x0007401f) list_medium_line_x4_t4_g7_g1

0x3f70,	// (0x0007652a) list_medium_line_x4_t4_g7_g2_ParamLimits

0x3f70,	// (0x0007652a) list_medium_line_x4_t4_g7_g2

0x3f7c,	// (0x00076536) list_medium_line_x4_t4_g7_g3_ParamLimits

0x3f7c,	// (0x00076536) list_medium_line_x4_t4_g7_g3

0x3f8b,	// (0x00076545) list_medium_line_x4_t4_g7_g4_ParamLimits

0x3f8b,	// (0x00076545) list_medium_line_x4_t4_g7_g4

0x3f97,	// (0x00076551) list_medium_line_x4_t4_g7_g5_ParamLimits

0x3f97,	// (0x00076551) list_medium_line_x4_t4_g7_g5

0x3fa6,	// (0x00076560) list_medium_line_x4_t4_g7_g6_ParamLimits

0x3fa6,	// (0x00076560) list_medium_line_x4_t4_g7_g6

0x3fb5,	// (0x0007656f) list_medium_line_x4_t4_g7_g7_ParamLimits

0x3fb5,	// (0x0007656f) list_medium_line_x4_t4_g7_g7

0x0006,

0xfc02,	// (0x000821bc) list_medium_line_x4_t4_g7_g_ParamLimits

0xfc02,	// (0x000821bc) list_medium_line_x4_t4_g7_g

0x3fc1,	// (0x0007657b) list_medium_line_x4_t4_g7_t1_ParamLimits

0x3fc1,	// (0x0007657b) list_medium_line_x4_t4_g7_t1

0x3fd6,	// (0x00076590) list_medium_line_x4_t4_g7_t2_ParamLimits

0x3fd6,	// (0x00076590) list_medium_line_x4_t4_g7_t2

0x3feb,	// (0x000765a5) list_medium_line_x4_t4_g7_t3_ParamLimits

0x3feb,	// (0x000765a5) list_medium_line_x4_t4_g7_t3

0x4000,	// (0x000765ba) list_medium_line_x4_t4_g7_t4_ParamLimits

0x4000,	// (0x000765ba) list_medium_line_x4_t4_g7_t4

0x4012,	// (0x000765cc) list_medium_line_x4_t4_g7_t5_ParamLimits

0x4012,	// (0x000765cc) list_medium_line_x4_t4_g7_t5

0x0004,

0xfc11,	// (0x000821cb) list_medium_line_x4_t4_g7_t_ParamLimits

0xfc11,	// (0x000821cb) list_medium_line_x4_t4_g7_t

0x4024,	// (0x000765de) list_single_dyc_row_pane_ParamLimits

0x4024,	// (0x000765de) list_single_dyc_row_pane

0xc708,	// (0x0007ecc2) call5_gesture_pane_ParamLimits

0xc708,	// (0x0007ecc2) call5_gesture_pane

0xc738,	// (0x0007ecf2) call5_windows_pane_ParamLimits

0xc738,	// (0x0007ecf2) call5_windows_pane

0xc7a4,	// (0x0007ed5e) call5_swipe_1_pane_cp_ParamLimits

0xc7a4,	// (0x0007ed5e) call5_swipe_1_pane_cp

0xc7b0,	// (0x0007ed6a) call5_swipe_2_pane_cp_ParamLimits

0xc7b0,	// (0x0007ed6a) call5_swipe_2_pane_cp

0xe041,	// (0x000805fb) call5_image_pane_cp

0xc7bc,	// (0x0007ed76) popup_call5_audio_first_window_cp_ParamLimits

0xc7bc,	// (0x0007ed76) popup_call5_audio_first_window_cp

0x4616,	// (0x00076bd0) call5_swipe_1_pane_g1_cp_ParamLimits

0x4616,	// (0x00076bd0) call5_swipe_1_pane_g1_cp

0x4656,	// (0x00076c10) call5_swipe_1_pane_g2_cp

0x462f,	// (0x00076be9) call5_swipe_1_pane_t1_cp_ParamLimits

0x462f,	// (0x00076be9) call5_swipe_1_pane_t1_cp

0x4616,	// (0x00076bd0) call5_swipe_2_pane_g1_cp_ParamLimits

0x4616,	// (0x00076bd0) call5_swipe_2_pane_g1_cp

0x465e,	// (0x00076c18) call5_swipe_2_pane_g2_cp

0x4666,	// (0x00076c20) call5_swipe_2_pane_t1_cp_ParamLimits

0x4666,	// (0x00076c20) call5_swipe_2_pane_t1_cp

0xf078,	// (0x00081632) main_sp_fs_email_pane

0x467b,	// (0x00076c35) main_sp_fs_listscroll_pane_te

0xc7c8,	// (0x0007ed82) popup_sp_fs_action_menu_pane_ParamLimits

0xc7c8,	// (0x0007ed82) popup_sp_fs_action_menu_pane

0x2b0b,	// (0x000750c5) bg_sp_fs_ctrlbar_pane_g1

0x4684,	// (0x00076c3e) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x468d,	// (0x00076c47) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x4696,	// (0x00076c50) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x2b0b,	// (0x000750c5) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcfa,	// (0x000822b4) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x28f8,	// (0x00074eb2) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x28f8,	// (0x00074eb2) bg_sp_fs_ctrlbar_ddmenu_pane

0x469f,	// (0x00076c59) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x469f,	// (0x00076c59) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xf0a6,	// (0x00081660) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xf0a6,	// (0x00081660) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfd03,	// (0x000822bd) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfd03,	// (0x000822bd) main_sp_fs_ctrlbar_ddmenu_pane_g

0x46ab,	// (0x00076c65) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x46ab,	// (0x00076c65) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x46c5,	// (0x00076c7f) list_medium_line_t2_right_icon_g1

0xc7f8,	// (0x0007edb2) list_medium_line_t2_right_icon_t1

0xc807,	// (0x0007edc1) list_medium_line_t2_right_icon_t2

0x0001,

0xfd08,	// (0x000822c2) list_medium_line_t2_right_icon_t

0x26d0,	// (0x00074c8a) bg_sp_fs_ctrlbar_pane_ParamLimits

0x26d0,	// (0x00074c8a) bg_sp_fs_ctrlbar_pane

0xc86a,	// (0x0007ee24) main_sp_fs_ctrlbar_button_pane_cp01

0xc872,	// (0x0007ee2c) main_sp_fs_ctrlbar_ddmenu_pane

0x4715,	// (0x00076ccf) main_sp_fs_ctrlbar_pane_g1

0x4721,	// (0x00076cdb) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfd0d,	// (0x000822c7) main_sp_fs_ctrlbar_pane_g

0x472d,	// (0x00076ce7) main_sp_fs_ctrlbar_pane_t1

0xc87c,	// (0x0007ee36) main_sp_fs_ctrlbar_pane

0xc894,	// (0x0007ee4e) main_sp_fs_listscroll_pane_te_cp01

0xc8a5,	// (0x0007ee5f) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0xc8a5,	// (0x0007ee5f) popup_sp_fs_action_menu_pane_cp01

0xf078,	// (0x00081632) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xf078,	// (0x00081632) bg_sp_fs_highlight_list_pane_cp01

0xc8c7,	// (0x0007ee81) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xc8c7,	// (0x0007ee81) sp_fs_action_menu_list_gene_pane_g1

0x4742,	// (0x00076cfc) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x4742,	// (0x00076cfc) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfd12,	// (0x000822cc) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfd12,	// (0x000822cc) sp_fs_action_menu_list_gene_pane_g

0xc8d6,	// (0x0007ee90) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xc8d6,	// (0x0007ee90) sp_fs_action_menu_list_gene_pane_t1

0xc8ee,	// (0x0007eea8) sp_fs_action_menu_list_gene_pane_ParamLimits

0xc8ee,	// (0x0007eea8) sp_fs_action_menu_list_gene_pane

0x474f,	// (0x00076d09) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x474f,	// (0x00076d09) popup_sp_fs_action_menu_bg_pane

0xc90b,	// (0x0007eec5) sp_fs_action_menu_list_pane_ParamLimits

0xc90b,	// (0x0007eec5) sp_fs_action_menu_list_pane

0x475d,	// (0x00076d17) sp_fs_scroll_pane_cp01_ParamLimits

0x475d,	// (0x00076d17) sp_fs_scroll_pane_cp01

0xc927,	// (0x0007eee1) list_medium_line_plain_t2_t1

0xc936,	// (0x0007eef0) list_medium_line_plain_t2_t2

0x0001,

0xfd17,	// (0x000822d1) list_medium_line_plain_t2_t

0xc944,	// (0x0007eefe) list_medium_line_plain_t3_t1

0xc954,	// (0x0007ef0e) list_medium_line_plain_t3_t2

0xc962,	// (0x0007ef1c) list_medium_line_plain_t3_t3

0x0002,

0xfd1c,	// (0x000822d6) list_medium_line_plain_t3_t

0x1a65,	// (0x0007401f) list_medium_line_x2_t2_g2_g1_ParamLimits

0x1a65,	// (0x0007401f) list_medium_line_x2_t2_g2_g1

0x1a7d,	// (0x00074037) list_medium_line_x2_t2_g2_g2_ParamLimits

0x1a7d,	// (0x00074037) list_medium_line_x2_t2_g2_g2

0x0001,

0xf26a,	// (0x00081824) list_medium_line_x2_t2_g2_g_ParamLimits

0xf26a,	// (0x00081824) list_medium_line_x2_t2_g2_g

0x209e,	// (0x00074658) list_medium_line_x2_t2_g2_t1_ParamLimits

0x209e,	// (0x00074658) list_medium_line_x2_t2_g2_t1

0x1a9e,	// (0x00074058) list_medium_line_x2_t2_g2_t2_ParamLimits

0x1a9e,	// (0x00074058) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd23,	// (0x000822dd) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd23,	// (0x000822dd) list_medium_line_x2_t2_g2_t

0x1a65,	// (0x0007401f) list_medium_line_x2_t4_g2_g1_ParamLimits

0x1a65,	// (0x0007401f) list_medium_line_x2_t4_g2_g1

0x4783,	// (0x00076d3d) list_medium_line_x2_t4_g2_g2_ParamLimits

0x4783,	// (0x00076d3d) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd28,	// (0x000822e2) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd28,	// (0x000822e2) list_medium_line_x2_t4_g2_g

0xc970,	// (0x0007ef2a) list_medium_line_x2_t4_g2_t1_ParamLimits

0xc970,	// (0x0007ef2a) list_medium_line_x2_t4_g2_t1

0xc987,	// (0x0007ef41) list_medium_line_x2_t4_g2_t2_ParamLimits

0xc987,	// (0x0007ef41) list_medium_line_x2_t4_g2_t2

0xc99c,	// (0x0007ef56) list_medium_line_x2_t4_g2_t3_ParamLimits

0xc99c,	// (0x0007ef56) list_medium_line_x2_t4_g2_t3

0x1a9e,	// (0x00074058) list_medium_line_x2_t4_g2_t4_ParamLimits

0x1a9e,	// (0x00074058) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd2d,	// (0x000822e7) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd2d,	// (0x000822e7) list_medium_line_x2_t4_g2_t

0x4795,	// (0x00076d4f) list_medium_line_t3_right_iconx2_g1

0x46c5,	// (0x00076c7f) list_medium_line_t3_right_iconx2_g2

0xc9ae,	// (0x0007ef68) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd36,	// (0x000822f0) list_medium_line_t3_right_iconx2_g

0x46cd,	// (0x00076c87) list_medium_line_t3_right_iconx2_t1

0xc9b6,	// (0x0007ef70) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd3d,	// (0x000822f7) list_medium_line_t3_right_iconx2_t

0x1a65,	// (0x0007401f) list_medium_line_x3_t4_g4_g1_ParamLimits

0x1a65,	// (0x0007401f) list_medium_line_x3_t4_g4_g1

0x1a71,	// (0x0007402b) list_medium_line_x3_t4_g4_g2_ParamLimits

0x1a71,	// (0x0007402b) list_medium_line_x3_t4_g4_g2

0x1ae7,	// (0x000740a1) list_medium_line_x3_t4_g4_g3_ParamLimits

0x1ae7,	// (0x000740a1) list_medium_line_x3_t4_g4_g3

0x479d,	// (0x00076d57) list_medium_line_x3_t4_g4_g4_ParamLimits

0x479d,	// (0x00076d57) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd42,	// (0x000822fc) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd42,	// (0x000822fc) list_medium_line_x3_t4_g4_g

0xb459,	// (0x0007da13) list_medium_line_x3_t4_g4_t1_ParamLimits

0xb459,	// (0x0007da13) list_medium_line_x3_t4_g4_t1

0xb470,	// (0x0007da2a) list_medium_line_x3_t4_g4_t2_ParamLimits

0xb470,	// (0x0007da2a) list_medium_line_x3_t4_g4_t2

0x47a9,	// (0x00076d63) list_medium_line_x3_t4_g4_t3_ParamLimits

0x47a9,	// (0x00076d63) list_medium_line_x3_t4_g4_t3

0x47be,	// (0x00076d78) list_medium_line_x3_t4_g4_t4_ParamLimits

0x47be,	// (0x00076d78) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd4b,	// (0x00082305) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd4b,	// (0x00082305) list_medium_line_x3_t4_g4_t

0xc9c4,	// (0x0007ef7e) list_single_dyc_row_text_pane_t1_ParamLimits

0xc9c4,	// (0x0007ef7e) list_single_dyc_row_text_pane_t1

0xc9fb,	// (0x0007efb5) list_single_dyc_row_text_pane_t2_ParamLimits

0xc9fb,	// (0x0007efb5) list_single_dyc_row_text_pane_t2

0x47db,	// (0x00076d95) list_single_dyc_row_text_pane_t3_ParamLimits

0x47db,	// (0x00076d95) list_single_dyc_row_text_pane_t3

0x0002,

0xfd54,	// (0x0008230e) list_single_dyc_row_text_pane_t_ParamLimits

0xfd54,	// (0x0008230e) list_single_dyc_row_text_pane_t

0x47ed,	// (0x00076da7) list_single_dyc_row_pane_g1_ParamLimits

0x47ed,	// (0x00076da7) list_single_dyc_row_pane_g1

0x47f9,	// (0x00076db3) list_single_dyc_row_pane_g2_ParamLimits

0x47f9,	// (0x00076db3) list_single_dyc_row_pane_g2

0x4805,	// (0x00076dbf) list_single_dyc_row_pane_g3_ParamLimits

0x4805,	// (0x00076dbf) list_single_dyc_row_pane_g3

0x4811,	// (0x00076dcb) list_single_dyc_row_pane_g4_ParamLimits

0x4811,	// (0x00076dcb) list_single_dyc_row_pane_g4

0x0003,

0xfd5b,	// (0x00082315) list_single_dyc_row_pane_g_ParamLimits

0xfd5b,	// (0x00082315) list_single_dyc_row_pane_g

0x481d,	// (0x00076dd7) list_single_dyc_row_text_pane_ParamLimits

0x481d,	// (0x00076dd7) list_single_dyc_row_text_pane

0x0f8b,	// (0x00073545) bg_sp_fs_scroll_pane

0x483c,	// (0x00076df6) thumb_sp_fs_scroll_pane

0x1a65,	// (0x0007401f) list_medium_line_g1_ParamLimits

0x1a65,	// (0x0007401f) list_medium_line_g1

0x209e,	// (0x00074658) list_medium_line_t1_ParamLimits

0x209e,	// (0x00074658) list_medium_line_t1

0x1a65,	// (0x0007401f) list_medium_line_x2_g1_ParamLimits

0x1a65,	// (0x0007401f) list_medium_line_x2_g1

0x1a71,	// (0x0007402b) list_medium_line_x2_g2_ParamLimits

0x1a71,	// (0x0007402b) list_medium_line_x2_g2

0x0001,

0xfa32,	// (0x00081fec) list_medium_line_x2_g_ParamLimits

0xfa32,	// (0x00081fec) list_medium_line_x2_g

0x4845,	// (0x00076dff) list_medium_line_x2_t1_ParamLimits

0x4845,	// (0x00076dff) list_medium_line_x2_t1

0x1a65,	// (0x0007401f) list_medium_line_x3_g1_ParamLimits

0x1a65,	// (0x0007401f) list_medium_line_x3_g1

0x1a71,	// (0x0007402b) list_medium_line_x3_g2_ParamLimits

0x1a71,	// (0x0007402b) list_medium_line_x3_g2

0x0001,

0xfa32,	// (0x00081fec) list_medium_line_x3_g_ParamLimits

0xfa32,	// (0x00081fec) list_medium_line_x3_g

0x4845,	// (0x00076dff) list_medium_line_x3_t1_ParamLimits

0x4845,	// (0x00076dff) list_medium_line_x3_t1

0x485b,	// (0x00076e15) thumb_sp_fs_scroll_pane_g1

0x4864,	// (0x00076e1e) thumb_sp_fs_scroll_pane_g2

0x486d,	// (0x00076e27) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd64,	// (0x0008231e) thumb_sp_fs_scroll_pane_g

0x485b,	// (0x00076e15) bg_sp_fs_scroll_pane_g1

0x4864,	// (0x00076e1e) bg_sp_fs_scroll_pane_g2

0x486d,	// (0x00076e27) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd64,	// (0x0008231e) bg_sp_fs_scroll_pane_g

0x1a65,	// (0x0007401f) list_medium_line_x2_t3_g4_g1_ParamLimits

0x1a65,	// (0x0007401f) list_medium_line_x2_t3_g4_g1

0x1adb,	// (0x00074095) list_medium_line_x2_t3_g4_g2_ParamLimits

0x1adb,	// (0x00074095) list_medium_line_x2_t3_g4_g2

0x1a71,	// (0x0007402b) list_medium_line_x2_t3_g4_g3_ParamLimits

0x1a71,	// (0x0007402b) list_medium_line_x2_t3_g4_g3

0x1a7d,	// (0x00074037) list_medium_line_x2_t3_g4_g4_ParamLimits

0x1a7d,	// (0x00074037) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2e6,	// (0x000818a0) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2e6,	// (0x000818a0) list_medium_line_x2_t3_g4_g

0xca52,	// (0x0007f00c) list_medium_line_x2_t3_g4_t1_ParamLimits

0xca52,	// (0x0007f00c) list_medium_line_x2_t3_g4_t1

0xca68,	// (0x0007f022) list_medium_line_x2_t3_g4_t2_ParamLimits

0xca68,	// (0x0007f022) list_medium_line_x2_t3_g4_t2

0x1a9e,	// (0x00074058) list_medium_line_x2_t3_g4_t3_ParamLimits

0x1a9e,	// (0x00074058) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd6b,	// (0x00082325) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd6b,	// (0x00082325) list_medium_line_x2_t3_g4_t

0x1a65,	// (0x0007401f) list_medium_line_g2_g1_ParamLimits

0x1a65,	// (0x0007401f) list_medium_line_g2_g1

0x1a71,	// (0x0007402b) list_medium_line_g2_g2_ParamLimits

0x1a71,	// (0x0007402b) list_medium_line_g2_g2

0x0001,

0xfa32,	// (0x00081fec) list_medium_line_g2_g_ParamLimits

0xfa32,	// (0x00081fec) list_medium_line_g2_g

0x1e00,	// (0x000743ba) list_medium_line_g2_t1_ParamLimits

0x1e00,	// (0x000743ba) list_medium_line_g2_t1

0x1a65,	// (0x0007401f) list_medium_line_t3_g2_g1_ParamLimits

0x1a65,	// (0x0007401f) list_medium_line_t3_g2_g1

0x1a71,	// (0x0007402b) list_medium_line_t3_g2_g2_ParamLimits

0x1a71,	// (0x0007402b) list_medium_line_t3_g2_g2

0x0001,

0xfa32,	// (0x00081fec) list_medium_line_t3_g2_g_ParamLimits

0xfa32,	// (0x00081fec) list_medium_line_t3_g2_g

0x4884,	// (0x00076e3e) list_medium_line_t3_g2_t1_ParamLimits

0x4884,	// (0x00076e3e) list_medium_line_t3_g2_t1

0xca81,	// (0x0007f03b) list_medium_line_t3_g2_t2_ParamLimits

0xca81,	// (0x0007f03b) list_medium_line_t3_g2_t2

0xca96,	// (0x0007f050) list_medium_line_t3_g2_t3_ParamLimits

0xca96,	// (0x0007f050) list_medium_line_t3_g2_t3

0x0002,

0xfd72,	// (0x0008232c) list_medium_line_t3_g2_t_ParamLimits

0xfd72,	// (0x0008232c) list_medium_line_t3_g2_t

0x46c5,	// (0x00076c7f) list_medium_line_right_icon_g1

0x4876,	// (0x00076e30) list_medium_line_right_icon_t1

0x1a65,	// (0x0007401f) list_medium_line_t2_g1_ParamLimits

0x1a65,	// (0x0007401f) list_medium_line_t2_g1

0xcaac,	// (0x0007f066) list_medium_line_t2_t1_ParamLimits

0xcaac,	// (0x0007f066) list_medium_line_t2_t1

0xcac6,	// (0x0007f080) list_medium_line_t2_t2_ParamLimits

0xcac6,	// (0x0007f080) list_medium_line_t2_t2

0x0001,

0xfd79,	// (0x00082333) list_medium_line_t2_t_ParamLimits

0xfd79,	// (0x00082333) list_medium_line_t2_t

0x1a65,	// (0x0007401f) list_medium_line_t3_g1_ParamLimits

0x1a65,	// (0x0007401f) list_medium_line_t3_g1

0xc970,	// (0x0007ef2a) list_medium_line_t3_t1_ParamLimits

0xc970,	// (0x0007ef2a) list_medium_line_t3_t1

0xc987,	// (0x0007ef41) list_medium_line_t3_t2_ParamLimits

0xc987,	// (0x0007ef41) list_medium_line_t3_t2

0xc99c,	// (0x0007ef56) list_medium_line_t3_t3_ParamLimits

0xc99c,	// (0x0007ef56) list_medium_line_t3_t3

0x0002,

0xfd7e,	// (0x00082338) list_medium_line_t3_t_ParamLimits

0xfd7e,	// (0x00082338) list_medium_line_t3_t

0x1a65,	// (0x0007401f) list_medium_line_g3_g1_ParamLimits

0x1a65,	// (0x0007401f) list_medium_line_g3_g1

0x1adb,	// (0x00074095) list_medium_line_g3_g2_ParamLimits

0x1adb,	// (0x00074095) list_medium_line_g3_g2

0x1a71,	// (0x0007402b) list_medium_line_g3_g3_ParamLimits

0x1a71,	// (0x0007402b) list_medium_line_g3_g3

0x0002,

0xfd85,	// (0x0008233f) list_medium_line_g3_g_ParamLimits

0xfd85,	// (0x0008233f) list_medium_line_g3_g

0x1deb,	// (0x000743a5) list_medium_line_g3_t1_ParamLimits

0x1deb,	// (0x000743a5) list_medium_line_g3_t1

0x1a65,	// (0x0007401f) list_medium_line_t2_g3_g1_ParamLimits

0x1a65,	// (0x0007401f) list_medium_line_t2_g3_g1

0x1adb,	// (0x00074095) list_medium_line_t2_g3_g2_ParamLimits

0x1adb,	// (0x00074095) list_medium_line_t2_g3_g2

0x1a71,	// (0x0007402b) list_medium_line_t2_g3_g3_ParamLimits

0x1a71,	// (0x0007402b) list_medium_line_t2_g3_g3

0x0002,

0xfd85,	// (0x0008233f) list_medium_line_t2_g3_g_ParamLimits

0xfd85,	// (0x0008233f) list_medium_line_t2_g3_g

0xcadb,	// (0x0007f095) list_medium_line_t2_g3_t1_ParamLimits

0xcadb,	// (0x0007f095) list_medium_line_t2_g3_t1

0xcaf2,	// (0x0007f0ac) list_medium_line_t2_g3_t2_ParamLimits

0xcaf2,	// (0x0007f0ac) list_medium_line_t2_g3_t2

0x0001,

0xfd8c,	// (0x00082346) list_medium_line_t2_g3_t_ParamLimits

0xfd8c,	// (0x00082346) list_medium_line_t2_g3_t

0x1a65,	// (0x0007401f) list_medium_line_t3_g3_g1_ParamLimits

0x1a65,	// (0x0007401f) list_medium_line_t3_g3_g1

0x1adb,	// (0x00074095) list_medium_line_t3_g3_g2_ParamLimits

0x1adb,	// (0x00074095) list_medium_line_t3_g3_g2

0x1a71,	// (0x0007402b) list_medium_line_t3_g3_g3_ParamLimits

0x1a71,	// (0x0007402b) list_medium_line_t3_g3_g3

0x0002,

0xfd85,	// (0x0008233f) list_medium_line_t3_g3_g_ParamLimits

0xfd85,	// (0x0008233f) list_medium_line_t3_g3_g

0xcb07,	// (0x0007f0c1) list_medium_line_t3_g3_t1_ParamLimits

0xcb07,	// (0x0007f0c1) list_medium_line_t3_g3_t1

0xcb1b,	// (0x0007f0d5) list_medium_line_t3_g3_t2_ParamLimits

0xcb1b,	// (0x0007f0d5) list_medium_line_t3_g3_t2

0xcb2d,	// (0x0007f0e7) list_medium_line_t3_g3_t3_ParamLimits

0xcb2d,	// (0x0007f0e7) list_medium_line_t3_g3_t3

0x0002,

0xfd91,	// (0x0008234b) list_medium_line_t3_g3_t_ParamLimits

0xfd91,	// (0x0008234b) list_medium_line_t3_g3_t

0x4795,	// (0x00076d4f) list_medium_line_right_iconx2_g1

0x46c5,	// (0x00076c7f) list_medium_line_right_iconx2_g2

0x0001,

0xfd98,	// (0x00082352) list_medium_line_right_iconx2_g

0x489e,	// (0x00076e58) list_medium_line_right_iconx2_t1

0x4795,	// (0x00076d4f) list_medium_line_t2_right_iconx2_g1

0x46c5,	// (0x00076c7f) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd98,	// (0x00082352) list_medium_line_t2_right_iconx2_g

0xcb3f,	// (0x0007f0f9) list_medium_line_t2_right_iconx2_t1

0xcb4f,	// (0x0007f109) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd9d,	// (0x00082357) list_medium_line_t2_right_iconx2_t

0x3724,	// (0x00075cde) list_medium_line_x4_t4_t1

0xcb5d,	// (0x0007f117) list_medium_line_x4_t4_t2

0xcb6b,	// (0x0007f125) list_medium_line_x4_t4_t3

0xcb79,	// (0x0007f133) list_medium_line_x4_t4_t4

0x0003,

0xfda2,	// (0x0008235c) list_medium_line_x4_t4_t

0xcbac,	// (0x0007f166) tport_appsw_pane_ParamLimits

0xcbac,	// (0x0007f166) tport_appsw_pane

0xcbb8,	// (0x0007f172) tport_contact_pane_ParamLimits

0xcbb8,	// (0x0007f172) tport_contact_pane

0xcbc6,	// (0x0007f180) tport_listscroll_pane_ParamLimits

0xcbc6,	// (0x0007f180) tport_listscroll_pane

0xcbd4,	// (0x0007f18e) cell_tport_appsw_pane_ParamLimits

0xcbd4,	// (0x0007f18e) cell_tport_appsw_pane

0x2dcb,	// (0x00075385) tport_appsw_pane_g1_ParamLimits

0x2dcb,	// (0x00075385) tport_appsw_pane_g1

0x48ac,	// (0x00076e66) tport_contact_pane_g1

0x48b5,	// (0x00076e6f) tport_contact_pane_t1

0x48c3,	// (0x00076e7d) tport_contact_pane_t2

0x0001,

0xfdab,	// (0x00082365) tport_contact_pane_t

0x48d1,	// (0x00076e8b) list_tport_pane

0x18a0,	// (0x00073e5a) scroll_pane_cp_030

0x48e2,	// (0x00076e9c) cell_tport_appsw_pane_g1

0x48f2,	// (0x00076eac) cell_tport_appsw_pane_t1

0x0f8b,	// (0x00073545) grid_highlight_pane_cp019

0xcbfb,	// (0x0007f1b5) list_tport_double_graphic_pane_ParamLimits

0xcbfb,	// (0x0007f1b5) list_tport_double_graphic_pane

0xf078,	// (0x00081632) list_highlight_pane_cp023_ParamLimits

0xf078,	// (0x00081632) list_highlight_pane_cp023

0xcc08,	// (0x0007f1c2) list_tport_double_graphic_pane_g1_ParamLimits

0xcc08,	// (0x0007f1c2) list_tport_double_graphic_pane_g1

0xcc15,	// (0x0007f1cf) list_tport_double_graphic_pane_t1_ParamLimits

0xcc15,	// (0x0007f1cf) list_tport_double_graphic_pane_t1

0xcc2a,	// (0x0007f1e4) list_tport_double_graphic_pane_t2_ParamLimits

0xcc2a,	// (0x0007f1e4) list_tport_double_graphic_pane_t2

0x0001,

0xfdb7,	// (0x00082371) list_tport_double_graphic_pane_t_ParamLimits

0xfdb7,	// (0x00082371) list_tport_double_graphic_pane_t

0x0f8b,	// (0x00073545) main_cale_note_pane

0xac9e,	// (0x0007d258) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0xac9e,	// (0x0007d258) cell_vitu2_function_top_wide_pane_cp01

0xc415,	// (0x0007e9cf) wait_bar_pane_cp05_ParamLimits

0x0f8b,	// (0x00073545) listscroll_cmail_pane

0x4900,	// (0x00076eba) list_cmail_pane

0xcc3c,	// (0x0007f1f6) list_cmail_body_pane

0xcc3c,	// (0x0007f1f6) list_single_cmail_header_caption_pane

0xcc54,	// (0x0007f20e) list_single_cmail_header_detail_pane_ParamLimits

0xcc54,	// (0x0007f20e) list_single_cmail_header_detail_pane

0x491c,	// (0x00076ed6) list_single_cmail_header_caption_pane_t1

0xcc7e,	// (0x0007f238) list_single_cmail_header_detail_pane_g1_ParamLimits

0xcc7e,	// (0x0007f238) list_single_cmail_header_detail_pane_g1

0x52d6,	// (0x00077890) list_single_cmail_header_detail_pane_g2_ParamLimits

0x52d6,	// (0x00077890) list_single_cmail_header_detail_pane_g2

0x0002,

0xfdbc,	// (0x00082376) list_single_cmail_header_detail_pane_g_ParamLimits

0xfdbc,	// (0x00082376) list_single_cmail_header_detail_pane_g

0x493f,	// (0x00076ef9) list_single_cmail_header_detail_pane_t1_ParamLimits

0x493f,	// (0x00076ef9) list_single_cmail_header_detail_pane_t1

0x4971,	// (0x00076f2b) list_single_cmail_header_editor_pane_bg_ParamLimits

0x4971,	// (0x00076f2b) list_single_cmail_header_editor_pane_bg

0x4983,	// (0x00076f3d) list_cmail_body_pane_g1

0x498c,	// (0x00076f46) list_cmail_body_pane_t1

0x34d5,	// (0x00075a8f) list_single_cmail_header_editor_pane_bg_g1

0x1d09,	// (0x000742c3) list_single_cmail_header_editor_pane_bg_g1_copy1

0x34e5,	// (0x00075a9f) list_single_cmail_header_editor_pane_bg_g1_copy2

0x34dd,	// (0x00075a97) list_single_cmail_header_editor_pane_bg_g1_copy3

0x3732,	// (0x00075cec) list_single_cmail_header_editor_pane_bg_g1_copy4

0x3505,	// (0x00075abf) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x34f5,	// (0x00075aaf) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x34fd,	// (0x00075ab7) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x1ce9,	// (0x000742a3) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xccb8,	// (0x0007f272) calenote_gesture_pane_ParamLimits

0xccb8,	// (0x0007f272) calenote_gesture_pane

0xccd0,	// (0x0007f28a) calenote_window_pane_ParamLimits

0xccd0,	// (0x0007f28a) calenote_window_pane

0x499a,	// (0x00076f54) popup_note_window_cp01

0xcce8,	// (0x0007f2a2) calenote_swipe_1_pane_ParamLimits

0xcce8,	// (0x0007f2a2) calenote_swipe_1_pane

0xc7b0,	// (0x0007ed6a) calenote_swipe_2_pane_ParamLimits

0xc7b0,	// (0x0007ed6a) calenote_swipe_2_pane

0x4616,	// (0x00076bd0) calenote_swipe_1_pane_g1_ParamLimits

0x4616,	// (0x00076bd0) calenote_swipe_1_pane_g1

0x4623,	// (0x00076bdd) calenote_swipe_1_pane_g2_ParamLimits

0x4623,	// (0x00076bdd) calenote_swipe_1_pane_g2

0x0001,

0xfcf0,	// (0x000822aa) calenote_swipe_1_pane_g_ParamLimits

0xfcf0,	// (0x000822aa) calenote_swipe_1_pane_g

0x49ac,	// (0x00076f66) calenote_swipe_1_pane_t1_ParamLimits

0x49ac,	// (0x00076f66) calenote_swipe_1_pane_t1

0x4616,	// (0x00076bd0) calenote_swipe_2_pane_g1_ParamLimits

0x4616,	// (0x00076bd0) calenote_swipe_2_pane_g1

0x49cb,	// (0x00076f85) calenote_swipe_2_pane_g2_ParamLimits

0x49cb,	// (0x00076f85) calenote_swipe_2_pane_g2

0x0001,

0xfdc8,	// (0x00082382) calenote_swipe_2_pane_g_ParamLimits

0xfdc8,	// (0x00082382) calenote_swipe_2_pane_g

0x49d7,	// (0x00076f91) calenote_swipe_2_pane_t1_ParamLimits

0x49d7,	// (0x00076f91) calenote_swipe_2_pane_t1

0x0f8b,	// (0x00073545) main_mup_navstr_pane

0x9b3b,	// (0x0007c0f5) main_mup3_pane_t7_ParamLimits

0x9b3b,	// (0x0007c0f5) main_mup3_pane_t7

0xa4c7,	// (0x0007ca81) main_mp4_pane_g6_ParamLimits

0xa4c7,	// (0x0007ca81) main_mp4_pane_g6

0xa809,	// (0x0007cdc3) main_image3_pane_t4_ParamLimits

0xa809,	// (0x0007cdc3) main_image3_pane_t4

0xccfb,	// (0x0007f2b5) popup_navstr_preview_pane_ParamLimits

0xccfb,	// (0x0007f2b5) popup_navstr_preview_pane

0xcd07,	// (0x0007f2c1) scroll_navstr_pane_ParamLimits

0xcd07,	// (0x0007f2c1) scroll_navstr_pane

0x0f8b,	// (0x00073545) bg_popup_preview_window_pane_cp04

0x49fe,	// (0x00076fb8) popup_navstr_preview_pane_t1

0xcd13,	// (0x0007f2cd) scroll_navstr_pane_g1_ParamLimits

0xcd13,	// (0x0007f2cd) scroll_navstr_pane_g1

0xcd20,	// (0x0007f2da) scroll_navstr_pane_t1_ParamLimits

0xcd20,	// (0x0007f2da) scroll_navstr_pane_t1

0x49a3,	// (0x00076f5d) bg_button_pane_cp014

0x49a3,	// (0x00076f5d) bg_button_pane_cp030

0xc6ae,	// (0x0007ec68) list_double_fisheye_pane_g4_ParamLimits

0xc6ae,	// (0x0007ec68) list_double_fisheye_pane_g4

0xc6ba,	// (0x0007ec74) list_double_fisheye_pane_g5_ParamLimits

0xc6ba,	// (0x0007ec74) list_double_fisheye_pane_g5

0x4910,	// (0x00076eca) sp_fs_scroll_pane_cp03

0x4715,	// (0x00076ccf) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x4721,	// (0x00076cdb) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfd0d,	// (0x000822c7) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x472d,	// (0x00076ce7) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x4908,	// (0x00076ec2) sp_fs_scroll_pane_cp02

0x18fa,	// (0x00073eb4) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x18fa,	// (0x00073eb4) popup_sp_fs_calendar_preview_list_single_pane

0x0f8b,	// (0x00073545) main_cam6_pano_pane

0xf078,	// (0x00081632) main_mup3_pane_ParamLimits

0x0f8b,	// (0x00073545) main_phacti_pane

0xc308,	// (0x0007e8c2) bg_button_pane_cp11

0xc320,	// (0x0007e8da) main_mobtv_info_pane_g2_ParamLimits

0xc320,	// (0x0007e8da) main_mobtv_info_pane_g2

0x0001,

0xfc6d,	// (0x00082227) main_mobtv_info_pane_g_ParamLimits

0xfc6d,	// (0x00082227) main_mobtv_info_pane_g

0xc4ac,	// (0x0007ea66) sc_clock_pane_t5_ParamLimits

0xc4ac,	// (0x0007ea66) sc_clock_pane_t5

0xc536,	// (0x0007eaf0) main_radioblah_pane_g1_ParamLimits

0x4550,	// (0x00076b0a) main_radioblah_pane_t3_ParamLimits

0x4550,	// (0x00076b0a) main_radioblah_pane_t3

0x4568,	// (0x00076b22) main_radioblah_pane_t4_ParamLimits

0x4568,	// (0x00076b22) main_radioblah_pane_t4

0xc554,	// (0x0007eb0e) main_radioblah_text_pane_ParamLimits

0xc554,	// (0x0007eb0e) main_radioblah_text_pane

0xc561,	// (0x0007eb1b) main_radioblah_info_pane_g1_ParamLimits

0xc5ee,	// (0x0007eba8) main_radioblah_info_pane_t4_ParamLimits

0xc5ee,	// (0x0007eba8) main_radioblah_info_pane_t4

0xf078,	// (0x00081632) main_sp_fs_calendar_pane

0xcd32,	// (0x0007f2ec) main_phacti_pane_g1

0xcd3a,	// (0x0007f2f4) phacti_note_pane_ParamLimits

0xcd3a,	// (0x0007f2f4) phacti_note_pane

0x4a15,	// (0x00076fcf) phacti_term_pane_ParamLimits

0x4a15,	// (0x00076fcf) phacti_term_pane

0x4a2a,	// (0x00076fe4) phacti_note_pane_t1_ParamLimits

0x4a2a,	// (0x00076fe4) phacti_note_pane_t1

0x4a41,	// (0x00076ffb) phacti_term_pane_g1

0x4a49,	// (0x00077003) phacti_term_pane_t1_ParamLimits

0x4a49,	// (0x00077003) phacti_term_pane_t1

0x4a73,	// (0x0007702d) popup_sp_fs_calendar_preview_list_single_pane_g1

0x4a7b,	// (0x00077035) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdd2,	// (0x0008238c) popup_sp_fs_calendar_preview_list_single_pane_g

0x4a83,	// (0x0007703d) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x4a83,	// (0x0007703d) popup_sp_fs_calendar_preview_list_single_pane_t1

0x4a99,	// (0x00077053) aid_popup_sp_fs_bg_corner_pane

0x2b0b,	// (0x000750c5) popup_sp_fs_calendar_preview_bg_pane_g1

0x0f8b,	// (0x00073545) popup_sp_fs_calendar_preview_bg_pane

0x4aa1,	// (0x0007705b) popup_sp_fs_calendar_preview_list_pane

0xf078,	// (0x00081632) bg_main_sp_fs_cale_pane_ParamLimits

0xf078,	// (0x00081632) bg_main_sp_fs_cale_pane

0x4aa9,	// (0x00077063) listscroll_cale_mrui_pane_ParamLimits

0x4aa9,	// (0x00077063) listscroll_cale_mrui_pane

0x3545,	// (0x00075aff) listscroll_sp_fs_schedule_track_pane

0x4abd,	// (0x00077077) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x4abd,	// (0x00077077) main_sp_fs_ctrlbar_pane_cp01

0x4ace,	// (0x00077088) main_sp_fs_ribbon_pane

0x4ad6,	// (0x00077090) popup_sp_fs_cale_preview_window

0xcd75,	// (0x0007f32f) list_single_sp_fs_schedule_track_pane_ParamLimits

0xcd75,	// (0x0007f32f) list_single_sp_fs_schedule_track_pane

0x343e,	// (0x000759f8) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x343e,	// (0x000759f8) bg_sp_fs_highlight_list_pane_cp03

0xcd8a,	// (0x0007f344) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xcd8a,	// (0x0007f344) list_single_sp_fs_schedule_track_pane_g1

0xcd96,	// (0x0007f350) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xcd96,	// (0x0007f350) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdd7,	// (0x00082391) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdd7,	// (0x00082391) list_single_sp_fs_schedule_track_pane_g

0xcda2,	// (0x0007f35c) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xcda2,	// (0x0007f35c) list_single_sp_fs_schedule_track_pane_t1

0xcdba,	// (0x0007f374) sp_fs_schedule_track_pane_ParamLimits

0xcdba,	// (0x0007f374) sp_fs_schedule_track_pane

0x4ae8,	// (0x000770a2) sp_fs_schedule_track_pane_g1

0x4af0,	// (0x000770aa) sp_fs_schedule_track_pane_g2

0x4af8,	// (0x000770b2) sp_fs_schedule_track_pane_g3

0x4b00,	// (0x000770ba) sp_fs_schedule_track_pane_g4

0x4b08,	// (0x000770c2) sp_fs_schedule_track_pane_g5

0x0004,

0xfddc,	// (0x00082396) sp_fs_schedule_track_pane_g

0x34d5,	// (0x00075a8f) bg_sp_fs_schedule_viewer_highlight_g1

0x1d09,	// (0x000742c3) bg_sp_fs_schedule_viewer_highlight_g2

0x34dd,	// (0x00075a97) bg_sp_fs_schedule_viewer_highlight_g3

0x34e5,	// (0x00075a9f) bg_sp_fs_schedule_viewer_highlight_g4

0x3732,	// (0x00075cec) bg_sp_fs_schedule_viewer_highlight_g5

0x34f5,	// (0x00075aaf) bg_sp_fs_schedule_viewer_highlight_g6

0x34fd,	// (0x00075ab7) bg_sp_fs_schedule_viewer_highlight_g7

0x3505,	// (0x00075abf) bg_sp_fs_schedule_viewer_highlight_g8

0x1ce9,	// (0x000742a3) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfde7,	// (0x000823a1) bg_sp_fs_schedule_viewer_highlight_g

0x0f8b,	// (0x00073545) bg_main_sp_fs_ribbon_pane

0xa9fe,	// (0x0007cfb8) main_sp_fs_ribbon_pane_g1

0x4b10,	// (0x000770ca) main_sp_fs_ribbon_pane_t1

0xcdca,	// (0x0007f384) main_sp_fs_ribbon_pane_t2

0x4b1f,	// (0x000770d9) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdfa,	// (0x000823b4) main_sp_fs_ribbon_pane_t

0x4b2e,	// (0x000770e8) main_sp_fs_ribbon_scheduler_pane

0x4b36,	// (0x000770f0) bg_main_sp_fs_ribbon_pane_g1

0x4b3f,	// (0x000770f9) bg_main_sp_fs_ribbon_pane_g2

0x4b48,	// (0x00077102) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfe01,	// (0x000823bb) bg_main_sp_fs_ribbon_pane_g

0x4b50,	// (0x0007710a) main_sp_fs_ribbon_scheduler_pane_g1

0x4b59,	// (0x00077113) main_sp_fs_ribbon_scheduler_pane_g2

0x4b62,	// (0x0007711c) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfe08,	// (0x000823c2) main_sp_fs_ribbon_scheduler_pane_g

0x45c2,	// (0x00076b7c) list_cale_mrui_pane

0x4b6b,	// (0x00077125) sp_fs_scroll_pane_cp07_ParamLimits

0x4b6b,	// (0x00077125) sp_fs_scroll_pane_cp07

0xcdd9,	// (0x0007f393) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xcdd9,	// (0x0007f393) bg_sp_fs_schedule_viewer_highlight

0x4b80,	// (0x0007713a) list_single_sp_fs_schedule_track_pane_cp01

0x4b88,	// (0x00077142) list_sp_fs_schedule_track_pane

0x4b90,	// (0x0007714a) sp_fs_scroll_pane_cp06_ParamLimits

0x4b90,	// (0x0007714a) sp_fs_scroll_pane_cp06

0x2b0b,	// (0x000750c5) bgmain_sp_fs_calendar_pane_g1

0xcde6,	// (0x0007f3a0) list_single_cale_mrui_pane_ParamLimits

0xcde6,	// (0x0007f3a0) list_single_cale_mrui_pane

0x4ba2,	// (0x0007715c) list_single_cale_mrui_row_pane_ParamLimits

0x4ba2,	// (0x0007715c) list_single_cale_mrui_row_pane

0x4baf,	// (0x00077169) list_single_cale_mrui_row_pane_g1_ParamLimits

0x4baf,	// (0x00077169) list_single_cale_mrui_row_pane_g1

0x4be7,	// (0x000771a1) list_single_cale_mrui_row_pane_t1_ParamLimits

0x4be7,	// (0x000771a1) list_single_cale_mrui_row_pane_t1

0xce0b,	// (0x0007f3c5) list_single_cale_mrui_row_pane_t2_ParamLimits

0xce0b,	// (0x0007f3c5) list_single_cale_mrui_row_pane_t2

0x4bf9,	// (0x000771b3) list_single_cale_mrui_row_pane_t3_ParamLimits

0x4bf9,	// (0x000771b3) list_single_cale_mrui_row_pane_t3

0x4c28,	// (0x000771e2) list_single_cale_mrui_row_pane_t4_ParamLimits

0x4c28,	// (0x000771e2) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe14,	// (0x000823ce) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe14,	// (0x000823ce) list_single_cale_mrui_row_pane_t

0xce71,	// (0x0007f42b) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0xce71,	// (0x0007f42b) list_single_cmail_header_editor_pane_bg_cp01

0xce95,	// (0x0007f44f) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0xce95,	// (0x0007f44f) list_single_cmail_header_editor_pane_bg_cp02

0xceb3,	// (0x0007f46d) main_radioblah_text_pane_t1_ParamLimits

0xceb3,	// (0x0007f46d) main_radioblah_text_pane_t1

0xcecc,	// (0x0007f486) cam6_indi_pane_cp01

0xced4,	// (0x0007f48e) cam6_mode_pane_cp01

0xcedc,	// (0x0007f496) cam6_pano_pane

0xcee5,	// (0x0007f49f) cam6_zoom_pane_cp01

0xceed,	// (0x0007f4a7) cam6_pano_image_pane

0xcef6,	// (0x0007f4b0) cam6_pano_pane_g1

0x42ce,	// (0x00076888) cam6_pano_pane_g2

0xceff,	// (0x0007f4b9) cam6_pano_pane_g3

0xcf08,	// (0x0007f4c2) cam6_pano_pane_g4

0x3029,	// (0x000755e3) cam6_pano_pane_g5

0xcf11,	// (0x0007f4cb) cam6_pano_pane_g6

0xcf19,	// (0x0007f4d3) cam6_pano_pane_g7

0xcf21,	// (0x0007f4db) cam6_pano_pane_g8

0xcf2a,	// (0x0007f4e4) cam6_pano_pane_g9

0x0008,

0xfe1d,	// (0x000823d7) cam6_pano_pane_g

0x0f8b,	// (0x00073545) main_browser_tag_pane

0x49f6,	// (0x00076fb0) grid_navstr_albumart_pane

0xcf33,	// (0x0007f4ed) cell_navstr_albumart_pane_ParamLimits

0xcf33,	// (0x0007f4ed) cell_navstr_albumart_pane

0xe1a2,	// (0x0008075c) cell_navstr_albumart_pane_g1

0x24ad,	// (0x00074a67) cell_navstr_albumart_pane_g2

0x24bd,	// (0x00074a77) cell_navstr_albumart_pane_g3

0x24b5,	// (0x00074a6f) cell_navstr_albumart_pane_g4

0x0003,

0xfe30,	// (0x000823ea) cell_navstr_albumart_pane_g

0xcf4a,	// (0x0007f504) bt_list_pane_ParamLimits

0xcf4a,	// (0x0007f504) bt_list_pane

0xcf5f,	// (0x0007f519) bt_list_pane_t1

0xcf6e,	// (0x0007f528) bt_list_pane_t2

0x0001,

0xfe39,	// (0x000823f3) bt_list_pane_t

0x0f8b,	// (0x00073545) main_cale_prevew_pane

0xcf7d,	// (0x0007f537) popup_cale_preview_window_ParamLimits

0xcf7d,	// (0x0007f537) popup_cale_preview_window

0xf078,	// (0x00081632) bg_popup_preview_window_pane_cp05_ParamLimits

0xf078,	// (0x00081632) bg_popup_preview_window_pane_cp05

0xcf92,	// (0x0007f54c) list_cale_preview_pane_ParamLimits

0xcf92,	// (0x0007f54c) list_cale_preview_pane

0xcf9e,	// (0x0007f558) list_double_cale_preview_pane_ParamLimits

0xcf9e,	// (0x0007f558) list_double_cale_preview_pane

0xcfaf,	// (0x0007f569) list_single_cale_preview_pane_ParamLimits

0xcfaf,	// (0x0007f569) list_single_cale_preview_pane

0xcfc3,	// (0x0007f57d) list_single_cale_preview_pane_g1

0xcfcb,	// (0x0007f585) list_single_cale_preview_pane_t1_ParamLimits

0xcfcb,	// (0x0007f585) list_single_cale_preview_pane_t1

0xcfe0,	// (0x0007f59a) list_double_cale_preview_pane_g1

0xcfe8,	// (0x0007f5a2) list_double_cale_preview_pane_t1_ParamLimits

0xcfe8,	// (0x0007f5a2) list_double_cale_preview_pane_t1

0xcffd,	// (0x0007f5b7) list_double_cale_preview_pane_t2_ParamLimits

0xcffd,	// (0x0007f5b7) list_double_cale_preview_pane_t2

0x0001,

0xfe3e,	// (0x000823f8) list_double_cale_preview_pane_t_ParamLimits

0xfe3e,	// (0x000823f8) list_double_cale_preview_pane_t

0x0f8b,	// (0x00073545) main_ezdial_pane

0xf078,	// (0x00081632) main_sp_fs_email_pane_ParamLimits

0xc815,	// (0x0007edcf) cmail_ddmenu_btn01_pane_ParamLimits

0xc815,	// (0x0007edcf) cmail_ddmenu_btn01_pane

0xc832,	// (0x0007edec) cmail_ddmenu_btn02_pane_ParamLimits

0xc832,	// (0x0007edec) cmail_ddmenu_btn02_pane

0xc850,	// (0x0007ee0a) cmail_ddmenu_btn03_pane_ParamLimits

0xc850,	// (0x0007ee0a) cmail_ddmenu_btn03_pane

0xc87c,	// (0x0007ee36) main_sp_fs_ctrlbar_pane_ParamLimits

0xc894,	// (0x0007ee4e) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xcc3c,	// (0x0007f1f6) list_cmail_body_pane_ParamLimits

0x492a,	// (0x00076ee4) bg_button_pane_cp12

0x4932,	// (0x00076eec) list_single_cmail_header_detail_pane_g3_ParamLimits

0x4932,	// (0x00076eec) list_single_cmail_header_detail_pane_g3

0xcc94,	// (0x0007f24e) list_single_cmail_header_detail_pane_t2_ParamLimits

0xcc94,	// (0x0007f24e) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdc3,	// (0x0008237d) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdc3,	// (0x0008237d) list_single_cmail_header_detail_pane_t

0x4a5e,	// (0x00077018) phacti_term_pane_t2_ParamLimits

0x4a5e,	// (0x00077018) phacti_term_pane_t2

0x0001,

0xfdcd,	// (0x00082387) phacti_term_pane_t_ParamLimits

0xfdcd,	// (0x00082387) phacti_term_pane_t

0xd015,	// (0x0007f5cf) aid_size_list_single_double

0xd021,	// (0x0007f5db) popup_ezdial_listscroll_window

0xd03a,	// (0x0007f5f4) popup_number_entry_window_cp01

0xe041,	// (0x000805fb) bg_popup_call_pane_cp09

0xd046,	// (0x0007f600) ezdial_list_pane

0xd04e,	// (0x0007f608) scroll_pane_cp23

0x28f8,	// (0x00074eb2) bg_button_pane_cp028_ParamLimits

0x28f8,	// (0x00074eb2) bg_button_pane_cp028

0xd056,	// (0x0007f610) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xd056,	// (0x0007f610) cmail_ddmenu_btn01_pane_g1

0xd068,	// (0x0007f622) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xd068,	// (0x0007f622) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe43,	// (0x000823fd) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe43,	// (0x000823fd) cmail_ddmenu_btn01_pane_g

0xd074,	// (0x0007f62e) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xd074,	// (0x0007f62e) cmail_ddmenu_btn01_pane_t1

0x26d0,	// (0x00074c8a) bg_button_pane_cp029_ParamLimits

0x26d0,	// (0x00074c8a) bg_button_pane_cp029

0xd068,	// (0x0007f622) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xd068,	// (0x0007f622) cmail_ddmenu_btn02_pane_g1

0xd095,	// (0x0007f64f) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xd095,	// (0x0007f64f) cmail_ddmenu_btn02_pane_t1

0x343e,	// (0x000759f8) bg_button_pane_cp031_ParamLimits

0x343e,	// (0x000759f8) bg_button_pane_cp031

0xd068,	// (0x0007f622) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xd068,	// (0x0007f622) cmail_ddmenu_btn03_pane_g1

0xd095,	// (0x0007f64f) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xd095,	// (0x0007f64f) cmail_ddmenu_btn03_pane_t1

0xa6b8,	// (0x0007cc72) cell_dialer2_keypad_pane_t1_ParamLimits

0xa6d2,	// (0x0007cc8c) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xa6d2,	// (0x0007cc8c) cell_dialer2_keypad_pane_t1_copy1

0xc1b0,	// (0x0007e76a) ncimui_group_button_pane

0xf078,	// (0x00081632) main_sp_fs_calendar_pane_ParamLimits

0xcc3c,	// (0x0007f1f6) list_single_cmail_header_caption_pane_ParamLimits

0x3a5c,	// (0x00076016) aid_recal_txt_sm_pane

0x0f8b,	// (0x00073545) mian_recal_day_pane

0x4ad6,	// (0x00077090) popup_sp_fs_cale_preview_window_ParamLimits

0x0f8b,	// (0x00073545) list_recal_day_pane

0x4c60,	// (0x0007721a) list_single_recal_day_pane_ParamLimits

0x4c60,	// (0x0007721a) list_single_recal_day_pane

0xd0c9,	// (0x0007f683) list_single_recal_day_pane_g1_ParamLimits

0xd0c9,	// (0x0007f683) list_single_recal_day_pane_g1

0x4c72,	// (0x0007722c) list_single_recal_day_pane_g2_ParamLimits

0x4c72,	// (0x0007722c) list_single_recal_day_pane_g2

0x4c7e,	// (0x00077238) list_single_recal_day_pane_g3_ParamLimits

0x4c7e,	// (0x00077238) list_single_recal_day_pane_g3

0xd0d5,	// (0x0007f68f) list_single_recal_day_pane_g4_ParamLimits

0xd0d5,	// (0x0007f68f) list_single_recal_day_pane_g4

0x4c8a,	// (0x00077244) list_single_recal_day_pane_g5_ParamLimits

0x4c8a,	// (0x00077244) list_single_recal_day_pane_g5

0x4c96,	// (0x00077250) list_single_recal_day_pane_g6_ParamLimits

0x4c96,	// (0x00077250) list_single_recal_day_pane_g6

0x0005,

0xfe52,	// (0x0008240c) list_single_recal_day_pane_g_ParamLimits

0xfe52,	// (0x0008240c) list_single_recal_day_pane_g

0x4ca2,	// (0x0007725c) list_single_recal_day_pane_t1

0x4cb0,	// (0x0007726a) list_single_recal_day_pane_t2

0x0001,

0xfe5f,	// (0x00082419) list_single_recal_day_pane_t

0xd0e1,	// (0x0007f69b) ncimui_query_button_pane_ParamLimits

0xd0e1,	// (0x0007f69b) ncimui_query_button_pane

0xd0f1,	// (0x0007f6ab) ncimui_query_button_pane_t1_ParamLimits

0xd0f1,	// (0x0007f6ab) ncimui_query_button_pane_t1

0xd104,	// (0x0007f6be) ncimui_query_button_pane_t2_ParamLimits

0xd104,	// (0x0007f6be) ncimui_query_button_pane_t2

0x0001,

0xfe64,	// (0x0008241e) ncimui_query_button_pane_t_ParamLimits

0xfe64,	// (0x0008241e) ncimui_query_button_pane_t

0xd117,	// (0x0007f6d1) query_button_pane_ParamLimits

0xd117,	// (0x0007f6d1) query_button_pane

0x0f8b,	// (0x00073545) bg_button_pane_cp0028

0xd124,	// (0x0007f6de) query_button_pane_t1

0x8cd4,	// (0x0007b28e) main_tport_pane_ParamLimits

0xcb87,	// (0x0007f141) bg_popup_window_pane_cp01_ParamLimits

0xcb87,	// (0x0007f141) bg_popup_window_pane_cp01

0xcb94,	// (0x0007f14e) heading_pane_cp08_ParamLimits

0xcb94,	// (0x0007f14e) heading_pane_cp08

0xcba0,	// (0x0007f15a) heading_pane_cp07_ParamLimits

0xcba0,	// (0x0007f15a) heading_pane_cp07

0x48e2,	// (0x00076e9c) cell_tport_appsw_pane_g2

0x0002,

0xfdb0,	// (0x0008236a) cell_tport_appsw_pane_g

0x22dc,	// (0x00074896) input_candi_list_open_g1

0x1f09,	// (0x000744c3) list_cale_time_pane_g6_ParamLimits

0x1f09,	// (0x000744c3) list_cale_time_pane_g6

0x9675,	// (0x0007bc2f) aid_size_touch_calib_1_ParamLimits

0x9675,	// (0x0007bc2f) aid_size_touch_calib_1

0x9681,	// (0x0007bc3b) aid_size_touch_calib_2_ParamLimits

0x9681,	// (0x0007bc3b) aid_size_touch_calib_2

0x968d,	// (0x0007bc47) aid_size_touch_calib_3_ParamLimits

0x968d,	// (0x0007bc47) aid_size_touch_calib_3

0x969b,	// (0x0007bc55) aid_size_touch_calib_4_ParamLimits

0x969b,	// (0x0007bc55) aid_size_touch_calib_4

0x96a9,	// (0x0007bc63) main_touch_calib_button_group_pane_ParamLimits

0x96a9,	// (0x0007bc63) main_touch_calib_button_group_pane

0x96b6,	// (0x0007bc70) main_touch_calib_pane_g1_ParamLimits

0x96c2,	// (0x0007bc7c) main_touch_calib_pane_g2_ParamLimits

0x96ce,	// (0x0007bc88) main_touch_calib_pane_g3_ParamLimits

0x96da,	// (0x0007bc94) main_touch_calib_pane_g4_ParamLimits

0xf788,	// (0x00081d42) main_touch_calib_pane_g_ParamLimits

0x96e6,	// (0x0007bca0) main_touch_calib_pane_t1_ParamLimits

0x96fb,	// (0x0007bcb5) main_touch_calib_pane_t2_ParamLimits

0x9710,	// (0x0007bcca) main_touch_calib_pane_t3_ParamLimits

0x9722,	// (0x0007bcdc) main_touch_calib_pane_t4_ParamLimits

0x9734,	// (0x0007bcee) main_touch_calib_pane_t5_ParamLimits

0xf791,	// (0x00081d4b) main_touch_calib_pane_t_ParamLimits

0x2e54,	// (0x0007540e) list_single_fp_cale_pane_g3_ParamLimits

0x2e54,	// (0x0007540e) list_single_fp_cale_pane_g3

0xaad3,	// (0x0007d08d) bg_button_pane_cp012_ParamLimits

0xaad3,	// (0x0007d08d) bg_vkb2_func_pane_cp03_ParamLimits

0xb3d0,	// (0x0007d98a) cell_vitu2_function_top_pane_g1_ParamLimits

0xaad3,	// (0x0007d08d) bg_vkb2_func_pane_cp04_ParamLimits

0xc150,	// (0x0007e70a) main_ncimui_button_group_pane_ParamLimits

0xc150,	// (0x0007e70a) main_ncimui_button_group_pane

0xc19e,	// (0x0007e758) main_ncimui_pane_t3_ParamLimits

0xc19e,	// (0x0007e758) main_ncimui_pane_t3

0x4a0c,	// (0x00076fc6) phacti_button_group_pane

0xd015,	// (0x0007f5cf) aid_size_list_single_double_ParamLimits

0xd021,	// (0x0007f5db) popup_ezdial_listscroll_window_ParamLimits

0xd03a,	// (0x0007f5f4) popup_number_entry_window_cp01_ParamLimits

0xd132,	// (0x0007f6ec) phacti_button_pane_ParamLimits

0xd132,	// (0x0007f6ec) phacti_button_pane

0x0f8b,	// (0x00073545) bg_button_pane_cp14

0xd141,	// (0x0007f6fb) phacti_button_pane_t1

0xd14f,	// (0x0007f709) main_touch_calib_button_pane_ParamLimits

0xd14f,	// (0x0007f709) main_touch_calib_button_pane

0x1743,	// (0x00073cfd) bg_button_pane_cp18_ParamLimits

0x1743,	// (0x00073cfd) bg_button_pane_cp18

0xd15f,	// (0x0007f719) main_touch_calib_button_pane_t1_ParamLimits

0xd15f,	// (0x0007f719) main_touch_calib_button_pane_t1

0xd175,	// (0x0007f72f) main_touch_calib_button_pane_t2_ParamLimits

0xd175,	// (0x0007f72f) main_touch_calib_button_pane_t2

0x0001,

0xfe69,	// (0x00082423) main_touch_calib_button_pane_t_ParamLimits

0xfe69,	// (0x00082423) main_touch_calib_button_pane_t

0x0f8b,	// (0x00073545) cell_ncimui_button_pane

0x0f8b,	// (0x00073545) bg_button_pane_cp032

0xd193,	// (0x0007f74d) cell_ncimui_button_pane_t1

0xa724,	// (0x0007ccde) image3_infobar_pane_ParamLimits

0xa724,	// (0x0007ccde) image3_infobar_pane

0xc4cc,	// (0x0007ea86) fs_bigclock_status_pane_ParamLimits

0xc4cc,	// (0x0007ea86) fs_bigclock_status_pane

0xc4d9,	// (0x0007ea93) main_fs_bigclock_clock_pane_ParamLimits

0xc4d9,	// (0x0007ea93) main_fs_bigclock_clock_pane

0xc4e9,	// (0x0007eaa3) main_fs_bigclock_indi_pane_ParamLimits

0xc4e9,	// (0x0007eaa3) main_fs_bigclock_indi_pane

0xc50e,	// (0x0007eac8) main_fs_bigclock_swipe_pane_ParamLimits

0xc50e,	// (0x0007eac8) main_fs_bigclock_swipe_pane

0x0f8b,	// (0x00073545) main_fs_clock_dumped_data

0x43db,	// (0x00076995) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x43db,	// (0x00076995) list_single_fs_bigclock_indicator_pane_g1

0x43f5,	// (0x000769af) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x43f5,	// (0x000769af) list_single_fs_bigclock_indicator_pane_g2

0x440f,	// (0x000769c9) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x440f,	// (0x000769c9) list_single_fs_bigclock_indicator_pane_g3

0x4429,	// (0x000769e3) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x4429,	// (0x000769e3) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfca1,	// (0x0008225b) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfca1,	// (0x0008225b) list_single_fs_bigclock_indicator_pane_g

0x444d,	// (0x00076a07) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x444d,	// (0x00076a07) list_single_fs_bigclock_indicator_pane_t1

0x4475,	// (0x00076a2f) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x4475,	// (0x00076a2f) list_single_fs_bigclock_indicator_pane_t2

0x449d,	// (0x00076a57) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x449d,	// (0x00076a57) list_single_fs_bigclock_indicator_pane_t3

0x44c5,	// (0x00076a7f) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x44c5,	// (0x00076a7f) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfcac,	// (0x00082266) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfcac,	// (0x00082266) list_single_fs_bigclock_indicator_pane_t

0xd1a1,	// (0x0007f75b) image3_infobar_fav_pane_ParamLimits

0xd1a1,	// (0x0007f75b) image3_infobar_fav_pane

0xd1b1,	// (0x0007f76b) image3_infobar_loc_pane_ParamLimits

0xd1b1,	// (0x0007f76b) image3_infobar_loc_pane

0xd1c5,	// (0x0007f77f) image3_infobar_time_pane_ParamLimits

0xd1c5,	// (0x0007f77f) image3_infobar_time_pane

0x2b0b,	// (0x000750c5) image3_infobar_time_pane_g1

0xd1d5,	// (0x0007f78f) image3_infobar_time_pane_t1

0x2b0b,	// (0x000750c5) image3_infobar_loc_pane_g1

0xd1e3,	// (0x0007f79d) image3_infobar_loc_pane_g2

0x0001,

0xfe6e,	// (0x00082428) image3_infobar_loc_pane_g

0xd1eb,	// (0x0007f7a5) image3_infobar_loc_pane_t1

0x2b0b,	// (0x000750c5) image3_infobar_fav_pane_g1

0xd1f9,	// (0x0007f7b3) image3_infobar_fav_pane_g2

0x0001,

0xfe73,	// (0x0008242d) image3_infobar_fav_pane_g

0xd201,	// (0x0007f7bb) fs_bigclock_status_battery_pane

0xd20a,	// (0x0007f7c4) fs_bigclock_status_signal_pane

0xd213,	// (0x0007f7cd) fs_bigclock_status_title_pane

0xd21c,	// (0x0007f7d6) fs_bigclock_status_signal_pane_g1

0xd225,	// (0x0007f7df) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe78,	// (0x00082432) fs_bigclock_status_signal_pane_g

0xd22d,	// (0x0007f7e7) fs_bigclock_status_battery_pane_g1

0xd236,	// (0x0007f7f0) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe7d,	// (0x00082437) fs_bigclock_status_battery_pane_g

0xd23e,	// (0x0007f7f8) fs_bigclock_status_title_pane_t1

0x2b0b,	// (0x000750c5) main_fs_bigclock_clock_pane_g1

0xd24c,	// (0x0007f806) main_fs_bigclock_clock_pane_g2

0xd24c,	// (0x0007f806) main_fs_bigclock_clock_pane_g3

0xd24c,	// (0x0007f806) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe82,	// (0x0008243c) main_fs_bigclock_clock_pane_g

0xd254,	// (0x0007f80e) main_fs_bigclock_clock_pane_t1

0xd262,	// (0x0007f81c) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe8b,	// (0x00082445) main_fs_bigclock_clock_pane_t

0xd271,	// (0x0007f82b) list_single_fs_bigclock_indicator_pane_ParamLimits

0xd271,	// (0x0007f82b) list_single_fs_bigclock_indicator_pane

0xd282,	// (0x0007f83c) list_single_fs_bigclock_pane_ParamLimits

0xd282,	// (0x0007f83c) list_single_fs_bigclock_pane

0xd2e9,	// (0x0007f8a3) main_fs_bigclock_indicator_pane_t1

0xd2f8,	// (0x0007f8b2) list_single_fs_bigclock_pane_g1

0xd300,	// (0x0007f8ba) list_single_fs_bigclock_pane_t1

0x2b0b,	// (0x000750c5) main_fs_bigclock_swipe_pane_g1

0xd33e,	// (0x0007f8f8) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe9c,	// (0x00082456) main_fs_bigclock_swipe_pane_g

0xd346,	// (0x0007f900) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xd346,	// (0x0007f900) main_fs_bigclock_swipe_pane_t1

0x7da9,	// (0x0007a363) call_type_pane_ParamLimits

0x0f8b,	// (0x00073545) main_btmg_pane

0x4bdb,	// (0x00077195) list_single_cale_mrui_row_pane_g2_ParamLimits

0x4bdb,	// (0x00077195) list_single_cale_mrui_row_pane_g2

0x0001,

0xfe0f,	// (0x000823c9) list_single_cale_mrui_row_pane_g_ParamLimits

0xfe0f,	// (0x000823c9) list_single_cale_mrui_row_pane_g

0xd0b9,	// (0x0007f673) list_recal_vselct_arw_lo_pane

0xd0c1,	// (0x0007f67b) list_recal_vselct_arw_up_pane

0x4c57,	// (0x00077211) list_recal_vselct_pane

0xd363,	// (0x0007f91d) btmg_button_pane

0xd36b,	// (0x0007f925) main_btmg_pane_g1

0x0f8b,	// (0x00073545) bg_button_pane_cp044

0xd373,	// (0x0007f92d) btmg_button_pane_t1

0x26c8,	// (0x00074c82) aid_listscroll_gen

0xf078,	// (0x00081632) main_cntbar_detail_pane

0x4900,	// (0x00076eba) list_cmail_folder_pane

0x4910,	// (0x00076eca) sp_fs_scroll_pane_cp03_ParamLimits

0xd381,	// (0x0007f93b) list_single_fs_dyc_pane_cp01_ParamLimits

0xd381,	// (0x0007f93b) list_single_fs_dyc_pane_cp01

0xd398,	// (0x0007f952) aid_size_cmail_indent

0x52c1,	// (0x0007787b) list_single_dyc_row_pane_cp01

0xd3bb,	// (0x0007f975) cntbar_detail_list_pane_ParamLimits

0xd3bb,	// (0x0007f975) cntbar_detail_list_pane

0xd3f1,	// (0x0007f9ab) main_cntbar_detail_cont_pane_ParamLimits

0xd3f1,	// (0x0007f9ab) main_cntbar_detail_cont_pane

0xd3fd,	// (0x0007f9b7) scroll_pane_cp032_ParamLimits

0xd3fd,	// (0x0007f9b7) scroll_pane_cp032

0xd409,	// (0x0007f9c3) cntbar_detail_list_event_pane_ParamLimits

0xd409,	// (0x0007f9c3) cntbar_detail_list_event_pane

0xd3c7,	// (0x0007f981) cntbar_detail_list_shct_pane

0xd419,	// (0x0007f9d3) aid_list_gen

0x18a0,	// (0x00073e5a) aid_scroll

0x3a42,	// (0x00075ffc) aid_size_touch_scroll_bar

0xd422,	// (0x0007f9dc) aid_list_double

0xd42b,	// (0x0007f9e5) aid_list_single

0x4cbe,	// (0x00077278) aid_list_single_lg

0xd434,	// (0x0007f9ee) aid_list_z_g_a_sm

0xd43c,	// (0x0007f9f6) aid_list_z_g_d

0xd444,	// (0x0007f9fe) aid_txt_z_prm

0xd452,	// (0x0007fa0c) aid_txt_z_prm_cp01

0xd460,	// (0x0007fa1a) aid_txt_z_sec

0xd46e,	// (0x0007fa28) main_cntbar_detail_cont_pane_g1_ParamLimits

0xd46e,	// (0x0007fa28) main_cntbar_detail_cont_pane_g1

0xd47b,	// (0x0007fa35) main_cntbar_detail_cont_pane_g2_ParamLimits

0xd47b,	// (0x0007fa35) main_cntbar_detail_cont_pane_g2

0x0001,

0xfea1,	// (0x0008245b) main_cntbar_detail_cont_pane_g_ParamLimits

0xfea1,	// (0x0008245b) main_cntbar_detail_cont_pane_g

0xd487,	// (0x0007fa41) main_cntbar_detail_cont_pane_t1

0xd495,	// (0x0007fa4f) main_cntbar_detail_cont_pane_t2

0xd4a3,	// (0x0007fa5d) main_cntbar_detail_cont_pane_t3

0x0002,

0xfea6,	// (0x00082460) main_cntbar_detail_cont_pane_t

0xd4b1,	// (0x0007fa6b) cell_cntbar_detail_list_shct_pane_ParamLimits

0xd4b1,	// (0x0007fa6b) cell_cntbar_detail_list_shct_pane

0xd4c3,	// (0x0007fa7d) cntbar_detail_list_shct_pane_g1

0xd4cc,	// (0x0007fa86) cntbar_detail_list_shct_pane_g2

0x0001,

0xfead,	// (0x00082467) cntbar_detail_list_shct_pane_g

0xd4d5,	// (0x0007fa8f) cntbar_detail_list_event_pane_g1_ParamLimits

0xd4d5,	// (0x0007fa8f) cntbar_detail_list_event_pane_g1

0xd4e1,	// (0x0007fa9b) cntbar_detail_list_event_pane_g2_ParamLimits

0xd4e1,	// (0x0007fa9b) cntbar_detail_list_event_pane_g2

0x0005,

0xfeb2,	// (0x0008246c) cntbar_detail_list_event_pane_g_ParamLimits

0xfeb2,	// (0x0008246c) cntbar_detail_list_event_pane_g

0xd54d,	// (0x0007fb07) cntbar_detail_list_event_pane_t1_ParamLimits

0xd54d,	// (0x0007fb07) cntbar_detail_list_event_pane_t1

0xd562,	// (0x0007fb1c) cntbar_detail_list_event_pane_t2_ParamLimits

0xd562,	// (0x0007fb1c) cntbar_detail_list_event_pane_t2

0x0002,

0xfebf,	// (0x00082479) cntbar_detail_list_event_pane_t_ParamLimits

0xfebf,	// (0x00082479) cntbar_detail_list_event_pane_t

0x2b0b,	// (0x000750c5) cell_cntbar_detail_list_shct_pane_g1

0xe000,	// (0x000805ba) navi_pane_mv_g3

0xf078,	// (0x00081632) main_cntbar_detail_pane_ParamLimits

0x0f8b,	// (0x00073545) main_notif_wgt_pane

0xa412,	// (0x0007c9cc) aid_tch_main_mp4_pane_g4

0xa639,	// (0x0007cbf3) popup_slider_window_cp02

0x4c57,	// (0x00077211) list_recal_day_event_pane

0xd3a1,	// (0x0007f95b) cntbar_detail_btn_pane_ParamLimits

0xd3a1,	// (0x0007f95b) cntbar_detail_btn_pane

0xd3ad,	// (0x0007f967) cntbar_detail_btn_pane_cp01_ParamLimits

0xd3ad,	// (0x0007f967) cntbar_detail_btn_pane_cp01

0xd3c7,	// (0x0007f981) cntbar_detail_list_shct_pane_ParamLimits

0xd3d3,	// (0x0007f98d) cntbar_detail_pane_g1_ParamLimits

0xd3d3,	// (0x0007f98d) cntbar_detail_pane_g1

0xd3df,	// (0x0007f999) cntbar_detail_pane_t1_ParamLimits

0xd3df,	// (0x0007f999) cntbar_detail_pane_t1

0xd4ed,	// (0x0007faa7) cntbar_detail_list_event_pane_g3_ParamLimits

0xd4ed,	// (0x0007faa7) cntbar_detail_list_event_pane_g3

0xd505,	// (0x0007fabf) cntbar_detail_list_event_pane_g4_ParamLimits

0xd505,	// (0x0007fabf) cntbar_detail_list_event_pane_g4

0xd51d,	// (0x0007fad7) cntbar_detail_list_event_pane_g5_ParamLimits

0xd51d,	// (0x0007fad7) cntbar_detail_list_event_pane_g5

0xd535,	// (0x0007faef) cntbar_detail_list_event_pane_g6_ParamLimits

0xd535,	// (0x0007faef) cntbar_detail_list_event_pane_g6

0xd577,	// (0x0007fb31) cntbar_detail_list_event_pane_t3_ParamLimits

0xd577,	// (0x0007fb31) cntbar_detail_list_event_pane_t3

0xd589,	// (0x0007fb43) popup_notif_wgt_window_ParamLimits

0xd589,	// (0x0007fb43) popup_notif_wgt_window

0xd597,	// (0x0007fb51) popup_submenu_window_cp01_ParamLimits

0xd597,	// (0x0007fb51) popup_submenu_window_cp01

0xe041,	// (0x000805fb) bg_popup_window_pane_cp10

0xd5a3,	// (0x0007fb5d) listscroll_notif_wgt_pane

0xd5ab,	// (0x0007fb65) list_notif_wgt_window

0xd5b4,	// (0x0007fb6e) scroll_pane_cp033

0xd5bd,	// (0x0007fb77) list_notif_wgt_row_pane_ParamLimits

0xd5bd,	// (0x0007fb77) list_notif_wgt_row_pane

0xd5cf,	// (0x0007fb89) aid_size_list_notif_wgt_del

0xd5d8,	// (0x0007fb92) list_notif_wgt_row_pane_g1

0xd5e0,	// (0x0007fb9a) list_notif_wgt_row_pane_g2

0xd5e8,	// (0x0007fba2) list_notif_wgt_row_pane_g3

0x0002,

0xfec6,	// (0x00082480) list_notif_wgt_row_pane_g

0xd5f1,	// (0x0007fbab) list_notif_wgt_row_pane_t1

0xd5ff,	// (0x0007fbb9) list_notif_wgt_row_pane_t2

0xd60d,	// (0x0007fbc7) list_notif_wgt_row_pane_t3

0x0002,

0xfecd,	// (0x00082487) list_notif_wgt_row_pane_t

0x373a,	// (0x00075cf4) list_recal_day_event_pane_g1

0xd61b,	// (0x0007fbd5) list_recal_day_event_pane_t1

0x0f8b,	// (0x00073545) bg_button_pane_cp045

0xd62a,	// (0x0007fbe4) cntbar_detail_btn_pane_t1

0x26d0,	// (0x00074c8a) main_callh_pane_ParamLimits

0x26d0,	// (0x00074c8a) main_callh_pane

0x0f8b,	// (0x00073545) main_coverflow0_pane

0x0f8b,	// (0x00073545) main_wgtman_pane

0xc520,	// (0x0007eada) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xc520,	// (0x0007eada) main_fs_bigclock_unlock_btn_pane

0x48da,	// (0x00076e94) bg_button_pane_cp16

0x48ea,	// (0x00076ea4) cell_tport_appsw_pane_g3

0xd638,	// (0x0007fbf2) cf0_flow_pane_ParamLimits

0xd638,	// (0x0007fbf2) cf0_flow_pane

0xd647,	// (0x0007fc01) listscroll_cf0_pane

0xd650,	// (0x0007fc0a) main_cf0_pane_g1

0xd65a,	// (0x0007fc14) main_cf0_pane_t1_ParamLimits

0xd65a,	// (0x0007fc14) main_cf0_pane_t1

0xd66c,	// (0x0007fc26) main_cf0_pane_t2_ParamLimits

0xd66c,	// (0x0007fc26) main_cf0_pane_t2

0x0001,

0xfed4,	// (0x0008248e) main_cf0_pane_t_ParamLimits

0xfed4,	// (0x0008248e) main_cf0_pane_t

0xd67e,	// (0x0007fc38) scroll_pane_cp11

0xd687,	// (0x0007fc41) cf0_flow_pane_g1

0xd68f,	// (0x0007fc49) cf0_flow_pane_g2

0x0001,

0xfed9,	// (0x00082493) cf0_flow_pane_g

0xd697,	// (0x0007fc51) cf0_flow_pane_t1

0x0f8b,	// (0x00073545) main_call6_pane

0x0f8b,	// (0x00073545) main_calllock_pane

0xd6a5,	// (0x0007fc5f) call6_btn_grp_pane_ParamLimits

0xd6a5,	// (0x0007fc5f) call6_btn_grp_pane

0xd6b2,	// (0x0007fc6c) call6_pane_g1_ParamLimits

0xd6b2,	// (0x0007fc6c) call6_pane_g1

0xd6bf,	// (0x0007fc79) popup_call6_1st_window_ParamLimits

0xd6bf,	// (0x0007fc79) popup_call6_1st_window

0xd6cb,	// (0x0007fc85) popup_call6_2nd_window_ParamLimits

0xd6cb,	// (0x0007fc85) popup_call6_2nd_window

0xd6d7,	// (0x0007fc91) cell_call6_btn_pane_ParamLimits

0xd6d7,	// (0x0007fc91) cell_call6_btn_pane

0xe041,	// (0x000805fb) bg_popup_call2_in_pane_cp03

0xd6e6,	// (0x0007fca0) popup_call6_1st_window_g1

0xd6ee,	// (0x0007fca8) popup_call6_1st_window_g2

0xd6f6,	// (0x0007fcb0) popup_call6_1st_window_g3

0x0002,

0xfede,	// (0x00082498) popup_call6_1st_window_g

0xd6fe,	// (0x0007fcb8) popup_call6_1st_window_t1

0xd70d,	// (0x0007fcc7) popup_call6_1st_window_t2

0xd71b,	// (0x0007fcd5) popup_call6_1st_window_t3

0x0002,

0xfee5,	// (0x0008249f) popup_call6_1st_window_t

0xe041,	// (0x000805fb) bg_popup_call2_in_pane_cp04

0xd6e6,	// (0x0007fca0) popup_call6_2nd_window_g1

0xd6ee,	// (0x0007fca8) popup_call6_2nd_window_g2

0xd6f6,	// (0x0007fcb0) popup_call6_2nd_window_g3

0x0002,

0xfede,	// (0x00082498) popup_call6_2nd_window_g

0xd6fe,	// (0x0007fcb8) popup_call6_2nd_window_t1

0x0f8b,	// (0x00073545) bg_button_pane_cp15

0xd729,	// (0x0007fce3) cell_call6_btn_pane_g1

0xd732,	// (0x0007fcec) cell_call6_btn_pane_t1

0xd741,	// (0x0007fcfb) listscroll_wgtman_pane_ParamLimits

0xd741,	// (0x0007fcfb) listscroll_wgtman_pane

0xd75b,	// (0x0007fd15) wgtman_btn_pane_ParamLimits

0xd75b,	// (0x0007fd15) wgtman_btn_pane

0xde82,	// (0x0008043c) aid_scroll_copy1

0xd78e,	// (0x0007fd48) list_wgtman_pane

0xd798,	// (0x0007fd52) wgtman_btn_pane_g1_ParamLimits

0xd798,	// (0x0007fd52) wgtman_btn_pane_g1

0xd7c0,	// (0x0007fd7a) wgtman_btn_pane_t1_ParamLimits

0xd7c0,	// (0x0007fd7a) wgtman_btn_pane_t1

0xd7f7,	// (0x0007fdb1) wgtman_btn_pane_t2_ParamLimits

0xd7f7,	// (0x0007fdb1) wgtman_btn_pane_t2

0x0001,

0xfeec,	// (0x000824a6) wgtman_btn_pane_t_ParamLimits

0xfeec,	// (0x000824a6) wgtman_btn_pane_t

0xd80e,	// (0x0007fdc8) listrow_wgtman_pane_ParamLimits

0xd80e,	// (0x0007fdc8) listrow_wgtman_pane

0xd81f,	// (0x0007fdd9) listrow_wgtman_pane_g1

0xd828,	// (0x0007fde2) listrow_wgtman_pane_g2

0x0001,

0xfef1,	// (0x000824ab) listrow_wgtman_pane_g

0xd830,	// (0x0007fdea) listrow_wgtman_pane_t1

0xd83e,	// (0x0007fdf8) listrow_wgtman_pane_t2

0x0001,

0xfef6,	// (0x000824b0) listrow_wgtman_pane_t

0xd84c,	// (0x0007fe06) wait_bar_pane_cp09

0xd854,	// (0x0007fe0e) main_calllock_btn_pane

0xd85c,	// (0x0007fe16) main_calllock_pane_g1

0x0f8b,	// (0x00073545) bg_button_pane_cp17

0xd865,	// (0x0007fe1f) main_calllock_btn_pane_g1

0xd86e,	// (0x0007fe28) main_calllock_btn_pane_t1

0x0f8b,	// (0x00073545) main_dialer3_pane

0x0f8b,	// (0x00073545) main_fmrd2_pane

0x2b0b,	// (0x000750c5) main_fs_bigclock_unlock_btn_pane_g1

0xd885,	// (0x0007fe3f) main_fs_bigclock_unlock_btn_pane_t1

0xd893,	// (0x0007fe4d) area_fmrd2_info_pane_ParamLimits

0xd893,	// (0x0007fe4d) area_fmrd2_info_pane

0xd89f,	// (0x0007fe59) area_fmrd2_visual_pane_ParamLimits

0xd89f,	// (0x0007fe59) area_fmrd2_visual_pane

0xd8ad,	// (0x0007fe67) fmrd2_indi_pane_ParamLimits

0xd8ad,	// (0x0007fe67) fmrd2_indi_pane

0xd8ba,	// (0x0007fe74) area_fmrd2_visual_pane_g1

0xd8c2,	// (0x0007fe7c) area_fmrd2_visual_pane_t1

0xd8d0,	// (0x0007fe8a) area_fmrd2_visual_pane_t2

0xd8de,	// (0x0007fe98) area_fmrd2_visual_pane_t3

0x0002,

0xff00,	// (0x000824ba) area_fmrd2_visual_pane_t

0xd8ec,	// (0x0007fea6) area_fmrd2_info_pane_g1

0xd8f4,	// (0x0007feae) area_fmrd2_info_pane_t1

0xd902,	// (0x0007febc) area_fmrd2_info_pane_t2

0xd910,	// (0x0007feca) area_fmrd2_info_pane_t3

0xd91e,	// (0x0007fed8) area_fmrd2_info_pane_t4

0x0003,

0xff07,	// (0x000824c1) area_fmrd2_info_pane_t

0xd92c,	// (0x0007fee6) fmrd2_indi_pane_t1

0xd93a,	// (0x0007fef4) fmrd2_indi_pane_t2

0xd948,	// (0x0007ff02) fmrd2_indi_pane_t3

0x0002,

0xff10,	// (0x000824ca) fmrd2_indi_pane_t

0x4438,	// (0x000769f2) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x4438,	// (0x000769f2) list_single_fs_bigclock_indicator_pane_g5

0x44da,	// (0x00076a94) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x44da,	// (0x00076a94) list_single_fs_bigclock_indicator_pane_t5

0xcd4e,	// (0x0007f308) aid_cell_bcale_month_pane_ParamLimits

0xcd4e,	// (0x0007f308) aid_cell_bcale_month_pane

0xcd5a,	// (0x0007f314) bcale_month_pane_ParamLimits

0xcd5a,	// (0x0007f314) bcale_month_pane

0xcd66,	// (0x0007f320) bcale_preview_pane_ParamLimits

0xcd66,	// (0x0007f320) bcale_preview_pane

0xd300,	// (0x0007f8ba) list_single_fs_bigclock_pane_t1_ParamLimits

0xd31a,	// (0x0007f8d4) list_single_fs_bigclock_pane_t2_ParamLimits

0xd31a,	// (0x0007f8d4) list_single_fs_bigclock_pane_t2

0x0001,

0xfe97,	// (0x00082451) list_single_fs_bigclock_pane_t_ParamLimits

0xfe97,	// (0x00082451) list_single_fs_bigclock_pane_t

0xd87d,	// (0x0007fe37) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfefb,	// (0x000824b5) main_fs_bigclock_unlock_btn_pane_g

0xd956,	// (0x0007ff10) aid_dia3_key_size_ParamLimits

0xd956,	// (0x0007ff10) aid_dia3_key_size

0xd962,	// (0x0007ff1c) aid_dia3_listrow_size_ParamLimits

0xd962,	// (0x0007ff1c) aid_dia3_listrow_size

0xd970,	// (0x0007ff2a) dia3_keypad_fun_pane_ParamLimits

0xd970,	// (0x0007ff2a) dia3_keypad_fun_pane

0xd97c,	// (0x0007ff36) dia3_keypad_num_pane_ParamLimits

0xd97c,	// (0x0007ff36) dia3_keypad_num_pane

0xd988,	// (0x0007ff42) dia3_listscroll_pane_ParamLimits

0xd988,	// (0x0007ff42) dia3_listscroll_pane

0xd994,	// (0x0007ff4e) dia3_numentry_pane_ParamLimits

0xd994,	// (0x0007ff4e) dia3_numentry_pane

0xd9a0,	// (0x0007ff5a) dia3_list_pane

0xd9a9,	// (0x0007ff63) scroll_pane_cp12

0x0f8b,	// (0x00073545) bg_dia3_numentry_pane

0xd9b2,	// (0x0007ff6c) dia3_numentry_pane_t1

0xd9c1,	// (0x0007ff7b) cell_dia3_key_num_pane

0xd9c9,	// (0x0007ff83) cell_dia3_key0_fun_pane_ParamLimits

0xd9c9,	// (0x0007ff83) cell_dia3_key0_fun_pane

0xd9d6,	// (0x0007ff90) cell_dia3_key1_fun_pane_ParamLimits

0xd9d6,	// (0x0007ff90) cell_dia3_key1_fun_pane

0xd9e3,	// (0x0007ff9d) dia3_listrow_pane

0x413c,	// (0x000766f6) bg_dia3_numentry_pane_g1

0x0f8b,	// (0x00073545) bg_button_pane_cp21

0xd9f0,	// (0x0007ffaa) cell_dia3_key_num_pane_t1

0xd9fe,	// (0x0007ffb8) cell_dia3_key_num_pane_t2

0xda0d,	// (0x0007ffc7) cell_dia3_key_num_pane_t3

0xda1c,	// (0x0007ffd6) cell_dia3_key_num_pane_t4

0x0003,

0xff17,	// (0x000824d1) cell_dia3_key_num_pane_t

0x0f8b,	// (0x00073545) bg_button_pane_cp19

0xda2b,	// (0x0007ffe5) cell_dia3_key0_fun_pane_g1

0x0f8b,	// (0x00073545) bg_button_pane_cp20

0xda33,	// (0x0007ffed) cell_dia3_key1_fun_pane_g1

0xda3b,	// (0x0007fff5) area_left_week_number_pane

0xda44,	// (0x0007fffe) area_top_day_name_pane

0xda4d,	// (0x00080007) frame_month_view_pane

0xda55,	// (0x0008000f) grid_month_view_pane

0xda5f,	// (0x00080019) cell_top_day_name_pane_ParamLimits

0xda5f,	// (0x00080019) cell_top_day_name_pane

0xda75,	// (0x0008002f) cell_area_left_week_number_pane_ParamLimits

0xda75,	// (0x0008002f) cell_area_left_week_number_pane

0xda89,	// (0x00080043) cell_month_view_pane_ParamLimits

0xda89,	// (0x00080043) cell_month_view_pane

0xdaa4,	// (0x0008005e) frm_month_g1

0xdaad,	// (0x00080067) frm_month_g2

0xdab5,	// (0x0008006f) frm_month_g3

0xdabd,	// (0x00080077) frm_month_g4

0xdac5,	// (0x0008007f) frm_month_g5

0xdacd,	// (0x00080087) frm_month_g6

0xdad5,	// (0x0008008f) frm_month_g7

0xdadd,	// (0x00080097) frm_month_g8

0xdae6,	// (0x000800a0) frm_month_g9

0xdaef,	// (0x000800a9) frm_month_g10

0xaa07,	// (0x0007cfc1) frm_month_g11

0xdaf8,	// (0x000800b2) frm_month_g12

0xdb01,	// (0x000800bb) frm_month_g13

0xdb0a,	// (0x000800c4) frm_month_g14

0xdb13,	// (0x000800cd) frm_month_g15

0xdb1c,	// (0x000800d6) frm_month_g16

0x000f,

0xff20,	// (0x000824da) frm_month_g

0xdb25,	// (0x000800df) cell_top_day_name_pane_t1

0xdb34,	// (0x000800ee) cell_area_left_week_number_pane_g1

0xdb25,	// (0x000800df) cell_area_left_week_number_pane_t1

0x2b0b,	// (0x000750c5) cell_month_view_pane_g1

0xdb3c,	// (0x000800f6) cell_month_view_pane_t1

0x0f8b,	// (0x00073545) main_fps_pane

0x46dd,	// (0x00076c97) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x46dd,	// (0x00076c97) cmail_ddmenu_btn02_pane_cp1

0x46f9,	// (0x00076cb3) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x46f9,	// (0x00076cb3) cmail_ddmenu_btn02_pane_cp2

0xd089,	// (0x0007f643) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xd089,	// (0x0007f643) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe48,	// (0x00082402) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe48,	// (0x00082402) cmail_ddmenu_btn02_pane_g

0xd0a7,	// (0x0007f661) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xd0a7,	// (0x0007f661) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe4d,	// (0x00082407) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe4d,	// (0x00082407) cmail_ddmenu_btn02_pane_t

0xdb4b,	// (0x00080105) fps_text_pane_ParamLimits

0xdb4b,	// (0x00080105) fps_text_pane

0xdb58,	// (0x00080112) main_fps_pane_g1_ParamLimits

0xdb58,	// (0x00080112) main_fps_pane_g1

0xdb64,	// (0x0008011e) wait_bar_pane_cp010_ParamLimits

0xdb64,	// (0x0008011e) wait_bar_pane_cp010

0xdb70,	// (0x0008012a) fps_text_pane_t1_ParamLimits

0xdb70,	// (0x0008012a) fps_text_pane_t1

0xa9f5,	// (0x0007cfaf) cam4_image_uncrop_pane_g1

0xa9fe,	// (0x0007cfb8) cam4_image_uncrop_pane_g2

0xaa07,	// (0x0007cfc1) cam4_image_uncrop_pane_g3

0xaa10,	// (0x0007cfca) cam4_image_uncrop_pane_g4

0x0003,

0xf920,	// (0x00081eda) cam4_image_uncrop_pane_g

0xd9e3,	// (0x0007ff9d) dia3_listrow_pane_ParamLimits

0x0f8b,	// (0x00073545) main_phob2_pane

0xcbe1,	// (0x0007f19b) cell_tport_appsw_pane_cp02_ParamLimits

0xcbe1,	// (0x0007f19b) cell_tport_appsw_pane_cp02

0xcbee,	// (0x0007f1a8) cell_tport_appsw_pane_cp03_ParamLimits

0xcbee,	// (0x0007f1a8) cell_tport_appsw_pane_cp03

0x0f8b,	// (0x00073545) phob2_contact_card_pane

0x0f8b,	// (0x00073545) phob2_listscroll_pane

0xdb89,	// (0x00080143) phob2_list_pane

0xdb91,	// (0x0008014b) scroll_pane_cp034

0xdb99,	// (0x00080153) phob2_cc_data_pane_ParamLimits

0xdb99,	// (0x00080153) phob2_cc_data_pane

0xdbb1,	// (0x0008016b) phob2_cc_listscroll_pane_ParamLimits

0xdbb1,	// (0x0008016b) phob2_cc_listscroll_pane

0xdbc9,	// (0x00080183) list_double_large_graphic_phob2_pane_ParamLimits

0xdbc9,	// (0x00080183) list_double_large_graphic_phob2_pane

0xdbdc,	// (0x00080196) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xdbdc,	// (0x00080196) list_double_large_graphic_phob2_pane_g1

0xdbe9,	// (0x000801a3) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xdbe9,	// (0x000801a3) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff41,	// (0x000824fb) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff41,	// (0x000824fb) list_double_large_graphic_phob2_pane_g

0xdbf5,	// (0x000801af) list_double_large_graphic_phob2_pane_t1_ParamLimits

0xdbf5,	// (0x000801af) list_double_large_graphic_phob2_pane_t1

0xdc0a,	// (0x000801c4) list_double_large_graphic_phob2_pane_t2_ParamLimits

0xdc0a,	// (0x000801c4) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff46,	// (0x00082500) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff46,	// (0x00082500) list_double_large_graphic_phob2_pane_t

0x0f8b,	// (0x00073545) list_highlight_pane_cp024

0xdc1c,	// (0x000801d6) phob2_cc_button_pane

0xdc24,	// (0x000801de) phob2_cc_data_pane_g1_ParamLimits

0xdc24,	// (0x000801de) phob2_cc_data_pane_g1

0xdc30,	// (0x000801ea) phob2_cc_data_pane_g2_ParamLimits

0xdc30,	// (0x000801ea) phob2_cc_data_pane_g2

0x0001,

0xff4b,	// (0x00082505) phob2_cc_data_pane_g_ParamLimits

0xff4b,	// (0x00082505) phob2_cc_data_pane_g

0xdc3c,	// (0x000801f6) phob2_cc_data_pane_t1_ParamLimits

0xdc3c,	// (0x000801f6) phob2_cc_data_pane_t1

0xdc4e,	// (0x00080208) phob2_cc_data_pane_t2_ParamLimits

0xdc4e,	// (0x00080208) phob2_cc_data_pane_t2

0xdc60,	// (0x0008021a) phob2_cc_data_pane_t3_ParamLimits

0xdc60,	// (0x0008021a) phob2_cc_data_pane_t3

0x0002,

0xff50,	// (0x0008250a) phob2_cc_data_pane_t_ParamLimits

0xff50,	// (0x0008250a) phob2_cc_data_pane_t

0xdc72,	// (0x0008022c) phob2_cc_list_pane_ParamLimits

0xdc72,	// (0x0008022c) phob2_cc_list_pane

0x4059,	// (0x00076613) scroll_pane_cp035_ParamLimits

0x4059,	// (0x00076613) scroll_pane_cp035

0xf078,	// (0x00081632) bg_button_pane_cp033

0xdc7e,	// (0x00080238) phob2_cc_button_pane_g1

0xdc8a,	// (0x00080244) phob2_cc_button_pane_t1

0xdc9f,	// (0x00080259) phob2_cc_button_pane_t2

0x0001,

0xff57,	// (0x00082511) phob2_cc_button_pane_t

0xdcb1,	// (0x0008026b) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xdcb1,	// (0x0008026b) list_double_large_graphic_phob2_cc_pane

0xdccc,	// (0x00080286) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xdccc,	// (0x00080286) list_double_large_graphic_phob2_cc_pane_g1

0xdcdd,	// (0x00080297) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xdcdd,	// (0x00080297) list_double_large_graphic_phob2_cc_pane_g2

0xdcec,	// (0x000802a6) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xdcec,	// (0x000802a6) list_double_large_graphic_phob2_cc_pane_g3

0xdcfb,	// (0x000802b5) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0xdcfb,	// (0x000802b5) list_double_large_graphic_phob2_cc_pane_g4

0xdd0c,	// (0x000802c6) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xdd0c,	// (0x000802c6) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff5c,	// (0x00082516) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff5c,	// (0x00082516) list_double_large_graphic_phob2_cc_pane_g

0xdd1b,	// (0x000802d5) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0xdd1b,	// (0x000802d5) list_double_large_graphic_phob2_cc_pane_t1

0xdd44,	// (0x000802fe) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0xdd44,	// (0x000802fe) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff67,	// (0x00082521) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff67,	// (0x00082521) list_double_large_graphic_phob2_cc_pane_t

0xdd6d,	// (0x00080327) list_highlight_pane_cp025_ParamLimits

0xdd6d,	// (0x00080327) list_highlight_pane_cp025

0xf078,	// (0x00081632) bg_button_pane_cp033_ParamLimits

0xdc7e,	// (0x00080238) phob2_cc_button_pane_g1_ParamLimits

0xdc8a,	// (0x00080244) phob2_cc_button_pane_t1_ParamLimits

0xdc9f,	// (0x00080259) phob2_cc_button_pane_t2_ParamLimits

0xff57,	// (0x00082511) phob2_cc_button_pane_t_ParamLimits

0x6444,	// (0x000789fe) popup_wgtman_window

0x415c,	// (0x00076716) scroll_pane_cp038

0xd776,	// (0x0007fd30) wgtman_btn_pane_cp_01_ParamLimits

0xd776,	// (0x0007fd30) wgtman_btn_pane_cp_01

0xdd7b,	// (0x00080335) wgtman_content_pane

0xdd84,	// (0x0008033e) wgtman_heading_pane

0x0f8b,	// (0x00073545) bg_heading_pane_cp02

0xdd8d,	// (0x00080347) wgtman_heading_pane_g1

0xdd95,	// (0x0008034f) wgtman_heading_pane_t1

0xdda3,	// (0x0008035d) scroll_pane_cp036

0xddab,	// (0x00080365) wgtman_list_pane

0xddb3,	// (0x0008036d) wgtman_list_pane_t1_ParamLimits

0xddb3,	// (0x0008036d) wgtman_list_pane_t1

0xa95a,	// (0x0007cf14) cam4_grid_pane

0xb58d,	// (0x0007db47) bg_button_pane_cp015_ParamLimits

0xb59d,	// (0x0007db57) bg_button_pane_cp016_ParamLimits

0xb5b0,	// (0x0007db6a) bg_button_pane_cp017_ParamLimits

0xb602,	// (0x0007dbbc) popup_vitu2_query_window_g3_ParamLimits

0xb602,	// (0x0007dbbc) popup_vitu2_query_window_g3

0xb6b5,	// (0x0007dc6f) popup_vitu2_query_window_t6_ParamLimits

0xb6b5,	// (0x0007dc6f) popup_vitu2_query_window_t6

0xb6e0,	// (0x0007dc9a) popup_vitu2_query_window_t7_ParamLimits

0xb6e0,	// (0x0007dc9a) popup_vitu2_query_window_t7

0xf0b2,	// (0x0008166c) cam4_grid_pane_g1

0xf0bb,	// (0x00081675) cam4_grid_pane_g2

0xf0c4,	// (0x0008167e) cam4_grid_pane_g3

0xf0cd,	// (0x00081687) cam4_grid_pane_g4

0x0003,

0xff6c,	// (0x00082526) cam4_grid_pane_g

0x7106,	// (0x000796c0) aid_placing_vt_slider_lsc_ParamLimits

0x73b0,	// (0x0007996a) vidtel_button_pane_ParamLimits

0x73b0,	// (0x0007996a) vidtel_button_pane

0x0f8b,	// (0x00073545) bg_button_pane_cp034

0xf0d6,	// (0x00081690) vidtel_button_pane_g1

0xf0de,	// (0x00081698) vidtel_button_pane_t1

0x371c,	// (0x00075cd6) aid_size_vtel_slider_touch

0x4059,	// (0x00076613) scroll_pane_cp039

0x4188,	// (0x00076742) ncim_query_button_pane_cp01_ParamLimits

0x41a7,	// (0x00076761) ncimui_query_pane_g1_ParamLimits

0xf078,	// (0x00081632) input_focus_pane_cp012_ParamLimits

0x41cc,	// (0x00076786) ncim_query_entry_pane_t1_ParamLimits

0x4059,	// (0x00076613) scroll_pane_cp039_ParamLimits
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

} // end of namespace AknLayoutScalable_Abrw_pqp_apps_qvga_prt_Large
