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

#include "aknlayoutscalable_elaf_phl_apps_qhd_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch[]; }

namespace AknLayoutScalable_Elaf_phl_apps_qhd_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x0004c3b9 };

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
0x114c,	// (0x0004d505) Screen

0x1158,	// (0x0004d511) application_window

0x11a4,	// (0x0004d55d) area_bottom_pane_ParamLimits

0x11a4,	// (0x0004d55d) area_bottom_pane

0x11dd,	// (0x0004d596) area_top_pane_ParamLimits

0x11dd,	// (0x0004d596) area_top_pane

0x9cf3,	// (0x000560ac) call_video_uplink_pane_ParamLimits

0x9cf3,	// (0x000560ac) call_video_uplink_pane

0x126b,	// (0x0004d624) main_pane_ParamLimits

0x126b,	// (0x0004d624) main_pane

0xce4f,	// (0x00059208) context_pane

0x4622,	// (0x000509db) navi_pane

0x4654,	// (0x00050a0d) popup_cale_events_window_ParamLimits

0x4654,	// (0x00050a0d) popup_cale_events_window

0xce62,	// (0x0005921b) popup_mup_playback_window

0x466c,	// (0x00050a25) signal_pane

0xae12,	// (0x000571cb) main_browser_pane

0xba44,	// (0x00057dfd) main_burst_pane

0x4382,	// (0x0005073b) main_calc_pane

0xce35,	// (0x000591ee) main_cale_day_pane

0x18b3,	// (0x0004dc6c) main_cale_month_pane

0xce35,	// (0x000591ee) main_cale_week_pane

0xba44,	// (0x00057dfd) main_call_pane

0xaaf2,	// (0x00056eab) main_call_poc_pane

0xba44,	// (0x00057dfd) main_camera_pane

0xba44,	// (0x00057dfd) main_chi_dic_pane

0xb7c1,	// (0x00057b7a) main_clock_pane

0xaaf2,	// (0x00056eab) main_fmradio_pane

0xba44,	// (0x00057dfd) main_graph_messa_pane

0xaaf2,	// (0x00056eab) main_help_pane

0xae12,	// (0x000571cb) main_im_pane

0xad4d,	// (0x00057106) main_image_pane_ParamLimits

0xad4d,	// (0x00057106) main_image_pane

0xaaf2,	// (0x00056eab) main_location2_pane

0xba44,	// (0x00057dfd) main_location_pane

0xad4d,	// (0x00057106) main_messa_pane

0xaaf2,	// (0x00056eab) main_mp2_pane

0xba44,	// (0x00057dfd) main_mp_pane

0xaaf2,	// (0x00056eab) main_msg_pane

0xaaf2,	// (0x00056eab) main_mup_eq_pane

0xaaf2,	// (0x00056eab) main_mup_pane

0xae12,	// (0x000571cb) main_notes_pane

0xaaf2,	// (0x00056eab) main_pec_pane

0xaaf2,	// (0x00056eab) main_phob_pane

0xaaf2,	// (0x00056eab) main_pinb_pane

0xaaf2,	// (0x00056eab) main_postcard_pane

0xaaf2,	// (0x00056eab) main_qdial_pane

0xba44,	// (0x00057dfd) main_skin_pane

0xaaf2,	// (0x00056eab) main_smil2_pane

0xba44,	// (0x00057dfd) main_smil_pane

0xba44,	// (0x00057dfd) main_video_pane

0xba44,	// (0x00057dfd) main_video_tele_pane

0xad4d,	// (0x00057106) main_viewer_pane_ParamLimits

0xad4d,	// (0x00057106) main_viewer_pane

0xba44,	// (0x00057dfd) main_vorec_pane

0x43d6,	// (0x0005078f) popup_blid_sat_info_window_ParamLimits

0x43d6,	// (0x0005078f) popup_blid_sat_info_window

0x442e,	// (0x000507e7) popup_dyc_status_message_window_ParamLimits

0x442e,	// (0x000507e7) popup_dyc_status_message_window

0x4448,	// (0x00050801) popup_grid_large_graphic_window_ParamLimits

0x4448,	// (0x00050801) popup_grid_large_graphic_window

0x4504,	// (0x000508bd) popup_loc_request_window_ParamLimits

0x4504,	// (0x000508bd) popup_loc_request_window

0x45fa,	// (0x000509b3) popup_wml_address_window_ParamLimits

0x45fa,	// (0x000509b3) popup_wml_address_window

0x41bc,	// (0x00050575) call_muted_g1

0x3e71,	// (0x0005022a) popup_call_audio_conf_window_ParamLimits

0x3e71,	// (0x0005022a) popup_call_audio_conf_window

0x41d0,	// (0x00050589) popup_call_audio_first_window_ParamLimits

0x41d0,	// (0x00050589) popup_call_audio_first_window

0x4246,	// (0x000505ff) popup_call_audio_in_window_ParamLimits

0x4246,	// (0x000505ff) popup_call_audio_in_window

0x4282,	// (0x0005063b) popup_call_audio_out_window_ParamLimits

0x4282,	// (0x0005063b) popup_call_audio_out_window

0x42bc,	// (0x00050675) popup_call_audio_second_window_ParamLimits

0x42bc,	// (0x00050675) popup_call_audio_second_window

0x4312,	// (0x000506cb) popup_call_audio_wait_window_ParamLimits

0x4312,	// (0x000506cb) popup_call_audio_wait_window

0x4347,	// (0x00050700) popup_number_entry_window_ParamLimits

0x4347,	// (0x00050700) popup_number_entry_window

0x9d11,	// (0x000560ca) bg_popup_call_pane_cp05_ParamLimits

0x9d11,	// (0x000560ca) bg_popup_call_pane_cp05

0x9d31,	// (0x000560ea) popup_number_entry_window_t1

0x9d44,	// (0x000560fd) popup_number_entry_window_t2

0x9d56,	// (0x0005610f) popup_number_entry_window_t3

0x0003,

0xf0cd,	// (0x0005b486) popup_number_entry_window_t

0x9d68,	// (0x00056121) text_title_cp2

0x9d7b,	// (0x00056134) bg_popup_call_pane_cp_ParamLimits

0x9d7b,	// (0x00056134) bg_popup_call_pane_cp

0x9d89,	// (0x00056142) call_thumbnail_pane

0x9d91,	// (0x0005614a) popup_call_audio_in_window_g1_ParamLimits

0x9d91,	// (0x0005614a) popup_call_audio_in_window_g1

0x9d9d,	// (0x00056156) popup_call_audio_in_window_g2_ParamLimits

0x9d9d,	// (0x00056156) popup_call_audio_in_window_g2

0x9da9,	// (0x00056162) popup_call_audio_in_window_g3_ParamLimits

0x9da9,	// (0x00056162) popup_call_audio_in_window_g3

0x0002,

0xf0d6,	// (0x0005b48f) popup_call_audio_in_window_g_ParamLimits

0xf0d6,	// (0x0005b48f) popup_call_audio_in_window_g

0x9db5,	// (0x0005616e) popup_call_audio_in_window_t1_ParamLimits

0x9db5,	// (0x0005616e) popup_call_audio_in_window_t1

0x9dd1,	// (0x0005618a) popup_call_audio_in_window_t2_ParamLimits

0x9dd1,	// (0x0005618a) popup_call_audio_in_window_t2

0x9ded,	// (0x000561a6) popup_call_audio_in_window_t3_ParamLimits

0x9ded,	// (0x000561a6) popup_call_audio_in_window_t3

0x0002,

0xf0dd,	// (0x0005b496) popup_call_audio_in_window_t_ParamLimits

0xf0dd,	// (0x0005b496) popup_call_audio_in_window_t

0x9d7b,	// (0x00056134) bg_popup_call_pane_cp01_ParamLimits

0x9d7b,	// (0x00056134) bg_popup_call_pane_cp01

0x9d89,	// (0x00056142) call_thumbnail_pane_cp02

0x9e00,	// (0x000561b9) call_type_pane_cp022

0x9e08,	// (0x000561c1) popup_call_audio_out_window_g1_ParamLimits

0x9e08,	// (0x000561c1) popup_call_audio_out_window_g1

0x9e1a,	// (0x000561d3) popup_call_audio_out_window_g2_ParamLimits

0x9e1a,	// (0x000561d3) popup_call_audio_out_window_g2

0x9e26,	// (0x000561df) popup_call_audio_out_window_g3_ParamLimits

0x9e26,	// (0x000561df) popup_call_audio_out_window_g3

0x0002,

0xf0e4,	// (0x0005b49d) popup_call_audio_out_window_g_ParamLimits

0xf0e4,	// (0x0005b49d) popup_call_audio_out_window_g

0x9e38,	// (0x000561f1) popup_call_audio_out_window_t1_ParamLimits

0x9e38,	// (0x000561f1) popup_call_audio_out_window_t1

0x9e50,	// (0x00056209) popup_call_audio_out_window_t2_ParamLimits

0x9e50,	// (0x00056209) popup_call_audio_out_window_t2

0x0001,

0xf0eb,	// (0x0005b4a4) popup_call_audio_out_window_t_ParamLimits

0xf0eb,	// (0x0005b4a4) popup_call_audio_out_window_t

0x9e65,	// (0x0005621e) bg_popup_call_pane_ParamLimits

0x9e65,	// (0x0005621e) bg_popup_call_pane

0x1427,	// (0x0004d7e0) call_thumbnail_pane_cp_ParamLimits

0x1427,	// (0x0004d7e0) call_thumbnail_pane_cp

0x9ee9,	// (0x000562a2) call_type_pane_cp01_ParamLimits

0x9ee9,	// (0x000562a2) call_type_pane_cp01

0x9f2d,	// (0x000562e6) popup_call_audio_first_window_g1_ParamLimits

0x9f2d,	// (0x000562e6) popup_call_audio_first_window_g1

0xa947,	// (0x00056d00) popup_call_audio_first_window_g2_ParamLimits

0xa947,	// (0x00056d00) popup_call_audio_first_window_g2

0x0001,

0xf0f0,	// (0x0005b4a9) popup_call_audio_first_window_g_ParamLimits

0xf0f0,	// (0x0005b4a9) popup_call_audio_first_window_g

0xa98b,	// (0x00056d44) popup_call_audio_first_window_t1_ParamLimits

0xa98b,	// (0x00056d44) popup_call_audio_first_window_t1

0xaa37,	// (0x00056df0) popup_call_audio_first_window_t4_ParamLimits

0xaa37,	// (0x00056df0) popup_call_audio_first_window_t4

0xaac3,	// (0x00056e7c) popup_call_audio_first_window_t5_ParamLimits

0xaac3,	// (0x00056e7c) popup_call_audio_first_window_t5

0x0002,

0xf0f5,	// (0x0005b4ae) popup_call_audio_first_window_t_ParamLimits

0xf0f5,	// (0x0005b4ae) popup_call_audio_first_window_t

0xaaf2,	// (0x00056eab) bg_popup_call_pane_cp02

0xaafc,	// (0x00056eb5) call_type_pane_cp023

0xab04,	// (0x00056ebd) popup_call_audio_wait_window_g1

0xab0c,	// (0x00056ec5) popup_call_audio_wait_window_g2

0x0001,

0xf0fc,	// (0x0005b4b5) popup_call_audio_wait_window_g

0xab14,	// (0x00056ecd) popup_call_audio_wait_window_t3

0xab22,	// (0x00056edb) bg_popup_call_pane_cp03_ParamLimits

0xab22,	// (0x00056edb) bg_popup_call_pane_cp03

0xab82,	// (0x00056f3b) call_thumbnail_pane_cp011_ParamLimits

0xab82,	// (0x00056f3b) call_thumbnail_pane_cp011

0xab8e,	// (0x00056f47) call_type_pane_cp034_ParamLimits

0xab8e,	// (0x00056f47) call_type_pane_cp034

0xabca,	// (0x00056f83) popup_call_audio_second_window_g1_ParamLimits

0xabca,	// (0x00056f83) popup_call_audio_second_window_g1

0xac06,	// (0x00056fbf) popup_call_audio_second_window_g2_ParamLimits

0xac06,	// (0x00056fbf) popup_call_audio_second_window_g2

0x0001,

0xf101,	// (0x0005b4ba) popup_call_audio_second_window_g_ParamLimits

0xf101,	// (0x0005b4ba) popup_call_audio_second_window_g

0xac42,	// (0x00056ffb) popup_call_audio_second_window_t1_ParamLimits

0xac42,	// (0x00056ffb) popup_call_audio_second_window_t1

0xacc3,	// (0x0005707c) popup_call_audio_second_window_t2_ParamLimits

0xacc3,	// (0x0005707c) popup_call_audio_second_window_t2

0xacf9,	// (0x000570b2) popup_call_audio_second_window_t3_ParamLimits

0xacf9,	// (0x000570b2) popup_call_audio_second_window_t3

0x0002,

0xf106,	// (0x0005b4bf) popup_call_audio_second_window_t_ParamLimits

0xf106,	// (0x0005b4bf) popup_call_audio_second_window_t

0xaaf2,	// (0x00056eab) bg_popup_call_pane_cp04

0xad2f,	// (0x000570e8) list_conf_pane

0xad37,	// (0x000570f0) popup_call_audio_conf_window_t1

0xad45,	// (0x000570fe) call_thumbnail_pane_g1

0xad4d,	// (0x00057106) bg_pinb_pane_ParamLimits

0xad4d,	// (0x00057106) bg_pinb_pane

0xad5b,	// (0x00057114) find_pinb_pane

0xad64,	// (0x0005711d) listscroll_pinb_pane_ParamLimits

0xad64,	// (0x0005711d) listscroll_pinb_pane

0xad73,	// (0x0005712c) pinb_bg_pane_g1

0x144b,	// (0x0004d804) pinb_bg_pane_g2

0x1457,	// (0x0004d810) pinb_bg_pane_g3

0x1463,	// (0x0004d81c) pinb_bg_pane_g4

0x146f,	// (0x0004d828) pinb_bg_pane_g5

0x147b,	// (0x0004d834) pinb_bg_pane_g6

0x1486,	// (0x0004d83f) pinb_bg_pane_g7

0x1491,	// (0x0004d84a) pinb_bg_pane_g8

0x149c,	// (0x0004d855) pinb_bg_pane_g9

0x14a6,	// (0x0004d85f) pinb_bg_pane_g10

0x0009,

0xf10d,	// (0x0005b4c6) pinb_bg_pane_g

0x14c3,	// (0x0004d87c) grid_pinb_pane

0x14cc,	// (0x0004d885) list_pinb_pane

0x14d5,	// (0x0004d88e) scroll_pane_cp01_ParamLimits

0x14d5,	// (0x0004d88e) scroll_pane_cp01

0xad7d,	// (0x00057136) find_pinb_pane_g1_ParamLimits

0xad7d,	// (0x00057136) find_pinb_pane_g1

0xad95,	// (0x0005714e) find_pinb_pane_t1

0xada7,	// (0x00057160) find_pinb_pane_t2

0x0001,

0xf127,	// (0x0005b4e0) find_pinb_pane_t

0xadbc,	// (0x00057175) input_focus_pane_cp01_ParamLimits

0xadbc,	// (0x00057175) input_focus_pane_cp01

0x14e7,	// (0x0004d8a0) cell_pinb_pane_ParamLimits

0x14e7,	// (0x0004d8a0) cell_pinb_pane

0x1510,	// (0x0004d8c9) cell_pinb_pane_g1_ParamLimits

0x1510,	// (0x0004d8c9) cell_pinb_pane_g1

0x1520,	// (0x0004d8d9) cell_pinb_pane_g2_ParamLimits

0x1520,	// (0x0004d8d9) cell_pinb_pane_g2

0xadc8,	// (0x00057181) cell_pinb_pane_g3_ParamLimits

0xadc8,	// (0x00057181) cell_pinb_pane_g3

0x0002,

0xf12c,	// (0x0005b4e5) cell_pinb_pane_g_ParamLimits

0xf12c,	// (0x0005b4e5) cell_pinb_pane_g

0xaaf2,	// (0x00056eab) grid_highlight_pane_cp01

0x152c,	// (0x0004d8e5) list_pinb_item_pane_ParamLimits

0x152c,	// (0x0004d8e5) list_pinb_item_pane

0xaaf2,	// (0x00056eab) list_highlight_pane_cp02

0x153e,	// (0x0004d8f7) list_pinb_item_pane_g1_ParamLimits

0x153e,	// (0x0004d8f7) list_pinb_item_pane_g1

0x154b,	// (0x0004d904) list_pinb_item_pane_g2_ParamLimits

0x154b,	// (0x0004d904) list_pinb_item_pane_g2

0x1557,	// (0x0004d910) list_pinb_item_pane_g3_ParamLimits

0x1557,	// (0x0004d910) list_pinb_item_pane_g3

0x1568,	// (0x0004d921) list_pinb_item_pane_g4_ParamLimits

0x1568,	// (0x0004d921) list_pinb_item_pane_g4

0x0003,

0xf133,	// (0x0005b4ec) list_pinb_item_pane_g_ParamLimits

0xf133,	// (0x0005b4ec) list_pinb_item_pane_g

0x1574,	// (0x0004d92d) list_pinb_item_pane_t1_ParamLimits

0x1574,	// (0x0004d92d) list_pinb_item_pane_t1

0x15a9,	// (0x0004d962) calc_display_pane

0x15d1,	// (0x0004d98a) calc_paper_pane

0x15f4,	// (0x0004d9ad) grid_calc_pane

0xaaf2,	// (0x00056eab) bg_list_pane_cp01

0x1622,	// (0x0004d9db) clock_g1

0x162a,	// (0x0004d9e3) clock_g2

0x0001,

0xf13c,	// (0x0005b4f5) clock_g

0x1632,	// (0x0004d9eb) clock_t1_ParamLimits

0x1632,	// (0x0004d9eb) clock_t1

0x1647,	// (0x0004da00) clock_t2_ParamLimits

0x1647,	// (0x0004da00) clock_t2

0x1659,	// (0x0004da12) clock_t3_ParamLimits

0x1659,	// (0x0004da12) clock_t3

0x166b,	// (0x0004da24) clock_t4_ParamLimits

0x166b,	// (0x0004da24) clock_t4

0x167d,	// (0x0004da36) clock_t5_ParamLimits

0x167d,	// (0x0004da36) clock_t5

0x1692,	// (0x0004da4b) clock_t6_ParamLimits

0x1692,	// (0x0004da4b) clock_t6

0x16a4,	// (0x0004da5d) clock_t7_ParamLimits

0x16a4,	// (0x0004da5d) clock_t7

0x16b6,	// (0x0004da6f) clock_t8_ParamLimits

0x16b6,	// (0x0004da6f) clock_t8

0x16ca,	// (0x0004da83) clock_t9_ParamLimits

0x16ca,	// (0x0004da83) clock_t9

0x0008,

0xf141,	// (0x0005b4fa) clock_t_ParamLimits

0xf141,	// (0x0005b4fa) clock_t

0xadd4,	// (0x0005718d) popup_clock_analogue_window_cp02

0xadd4,	// (0x0005718d) popup_clock_digital_window_cp01

0xaddc,	// (0x00057195) listscroll_help_pane

0xaaf2,	// (0x00056eab) phob_pre_status_pane

0xade6,	// (0x0005719f) grid_qdial_pane

0xad4d,	// (0x00057106) listscroll_mce_pane

0xad4d,	// (0x00057106) bg_notes_pane

0xadf0,	// (0x000571a9) list_notes_pane

0x16de,	// (0x0004da97) scroll_pane_cp06

0xadfe,	// (0x000571b7) bg_calc_paper_pane

0x9f81,	// (0x0005633a) list_calc_pane

0xae12,	// (0x000571cb) bg_calc_display_pane

0x16f2,	// (0x0004daab) calc_display_pane_t1

0x1704,	// (0x0004dabd) calc_display_pane_t2

0x9f9b,	// (0x00056354) calc_display_pane_t3

0x0002,

0xf154,	// (0x0005b50d) calc_display_pane_t

0x1716,	// (0x0004dacf) cell_calc_pane_ParamLimits

0x1716,	// (0x0004dacf) cell_calc_pane

0xae1e,	// (0x000571d7) bg_calc_paper_pane_g1

0xae2a,	// (0x000571e3) bg_calc_paper_pane_g2

0xae36,	// (0x000571ef) bg_calc_paper_pane_g3

0xae42,	// (0x000571fb) bg_calc_paper_pane_g4

0xae4e,	// (0x00057207) bg_calc_paper_pane_g5

0x174b,	// (0x0004db04) bg_calc_paper_pane_g6

0x175a,	// (0x0004db13) bg_calc_paper_pane_g7

0x1769,	// (0x0004db22) bg_calc_paper_pane_g8

0x0007,

0xf15b,	// (0x0005b514) bg_calc_paper_pane_g

0x177c,	// (0x0004db35) calc_bg_paper_pane_g9

0x178f,	// (0x0004db48) list_calc_item_pane_ParamLimits

0x178f,	// (0x0004db48) list_calc_item_pane

0xae5a,	// (0x00057213) list_calc_item_pane_g1

0x9fad,	// (0x00056366) list_calc_item_pane_t1_ParamLimits

0x9fad,	// (0x00056366) list_calc_item_pane_t1

0x17a4,	// (0x0004db5d) list_calc_item_pane_t2_ParamLimits

0x17a4,	// (0x0004db5d) list_calc_item_pane_t2

0x0001,

0xf16c,	// (0x0005b525) list_calc_item_pane_t_ParamLimits

0xf16c,	// (0x0005b525) list_calc_item_pane_t

0xae67,	// (0x00057220) cell_calc_pane_g1

0xae71,	// (0x0005722a) grid_highlight_pane_cp02

0x17d6,	// (0x0004db8f) bg_calc_display_pane_g1

0x17df,	// (0x0004db98) bg_calc_display_pane_g2

0x17e9,	// (0x0004dba2) bg_calc_display_pane_g3

0x0002,

0xf176,	// (0x0005b52f) bg_calc_display_pane_g

0x17f2,	// (0x0004dbab) cell_qdial_pane_ParamLimits

0x17f2,	// (0x0004dbab) cell_qdial_pane

0x1806,	// (0x0004dbbf) cell_qdial_pane_g1_ParamLimits

0x1806,	// (0x0004dbbf) cell_qdial_pane_g1

0x181c,	// (0x0004dbd5) cell_qdial_pane_g2_ParamLimits

0x181c,	// (0x0004dbd5) cell_qdial_pane_g2

0xae93,	// (0x0005724c) cell_qdial_pane_g3_ParamLimits

0xae93,	// (0x0005724c) cell_qdial_pane_g3

0x0003,

0xf17d,	// (0x0005b536) cell_qdial_pane_g_ParamLimits

0xf17d,	// (0x0005b536) cell_qdial_pane_g

0x1843,	// (0x0004dbfc) cell_qdial_pane_t1_ParamLimits

0x1843,	// (0x0004dbfc) cell_qdial_pane_t1

0x185b,	// (0x0004dc14) cell_qdial_pane_t2_ParamLimits

0x185b,	// (0x0004dc14) cell_qdial_pane_t2

0x186e,	// (0x0004dc27) cell_qdial_pane_t3_ParamLimits

0x186e,	// (0x0004dc27) cell_qdial_pane_t3

0x0002,

0xf186,	// (0x0005b53f) cell_qdial_pane_t_ParamLimits

0xf186,	// (0x0005b53f) cell_qdial_pane_t

0xaaf2,	// (0x00056eab) grid_highlight_pane_cp04

0xae9f,	// (0x00057258) thumbnail_qdial_pane_ParamLimits

0xae9f,	// (0x00057258) thumbnail_qdial_pane

0xaefb,	// (0x000572b4) list_help_pane

0xaf04,	// (0x000572bd) scroll_pane_cp02

0x1881,	// (0x0004dc3a) help_list_pane_t1_ParamLimits

0x1881,	// (0x0004dc3a) help_list_pane_t1

0x9fbf,	// (0x00056378) bg_notes_pane_g2

0x9fc7,	// (0x00056380) bg_notes_pane_g3

0x9fcf,	// (0x00056388) notes_bg_pane_g1

0x9fd7,	// (0x00056390) notes_bg_pane_g4

0x9fdf,	// (0x00056398) notes_bg_pane_g5

0x9fe7,	// (0x000563a0) notes_bg_pane_g6

0x9fef,	// (0x000563a8) notes_bg_pane_g7

0x9ff7,	// (0x000563b0) notes_bg_pane_g8

0x9fff,	// (0x000563b8) notes_bg_pane_g9

0x0006,

0xf1a4,	// (0x0005b55d) notes_bg_pane_g

0x189e,	// (0x0004dc57) list_notes_text_pane_ParamLimits

0x189e,	// (0x0004dc57) list_notes_text_pane

0xaf0d,	// (0x000572c6) list_notes_text_pane_g1

0x0211,	// (0x0004c5ca) list_notes_text_pane_t1

0x18b3,	// (0x0004dc6c) listscroll_cale_week_pane

0x18df,	// (0x0004dc98) bg_cale_heading_pane

0xaf30,	// (0x000572e9) bg_cale_pane_cp01

0x18f7,	// (0x0004dcb0) cale_week_corner_pane

0x1916,	// (0x0004dccf) cale_week_day_heading_pane

0x1933,	// (0x0004dcec) cale_week_scroll_pane_g1

0x1946,	// (0x0004dcff) cale_week_scroll_pane_g2

0x195e,	// (0x0004dd17) cale_week_scroll_pane_g3

0x1976,	// (0x0004dd2f) cale_week_scroll_pane_g4

0x198e,	// (0x0004dd47) cale_week_scroll_pane_g5

0x19ae,	// (0x0004dd67) cale_week_scroll_pane_g6

0x19ce,	// (0x0004dd87) cale_week_scroll_pane_g7

0x19ee,	// (0x0004dda7) cale_week_scroll_pane_g8

0x1a12,	// (0x0004ddcb) cale_week_scroll_pane_g9

0x1a2a,	// (0x0004dde3) cale_week_scroll_pane_g10

0x1a42,	// (0x0004ddfb) cale_week_scroll_pane_g11

0x1a5a,	// (0x0004de13) cale_week_scroll_pane_g12

0x1a72,	// (0x0004de2b) cale_week_scroll_pane_g13

0x1a72,	// (0x0004de2b) cale_week_scroll_pane_g14

0x1a72,	// (0x0004de2b) cale_week_scroll_pane_g15

0x000e,

0xf1b3,	// (0x0005b56c) cale_week_scroll_pane_g

0x1a8a,	// (0x0004de43) cale_week_time_pane

0x1aae,	// (0x0004de67) grid_cale_week_pane

0xaf60,	// (0x00057319) scroll_pane_cp08

0x1ad4,	// (0x0004de8d) cell_cale_week_pane_ParamLimits

0x1ad4,	// (0x0004de8d) cell_cale_week_pane

0x1b62,	// (0x0004df1b) cale_week_day_heading_pane_t1

0x1ba7,	// (0x0004df60) cale_week_day_heading_pane_t2

0x1bf1,	// (0x0004dfaa) cale_week_day_heading_pane_t3

0x1c3b,	// (0x0004dff4) cale_week_day_heading_pane_t4

0x1c85,	// (0x0004e03e) cale_week_day_heading_pane_t5

0x1cd7,	// (0x0004e090) cale_week_day_heading_pane_t6

0x1d29,	// (0x0004e0e2) cale_week_day_heading_pane_t7

0x0006,

0xf1d2,	// (0x0005b58b) cale_week_day_heading_pane_t

0xaf7d,	// (0x00057336) bg_cale_side_pane

0x1d6e,	// (0x0004e127) cale_week_time_pane_t1

0x1d88,	// (0x0004e141) cale_week_time_pane_t2

0x1da2,	// (0x0004e15b) cale_week_time_pane_t3

0x1dbc,	// (0x0004e175) cale_week_time_pane_t4

0x1dd6,	// (0x0004e18f) cale_week_time_pane_t5

0x1df0,	// (0x0004e1a9) cale_week_time_pane_t6

0x1e0a,	// (0x0004e1c3) cale_week_time_pane_t7

0x1e24,	// (0x0004e1dd) cale_week_time_pane_t8

0x0007,

0xf1e1,	// (0x0005b59a) cale_week_time_pane_t

0x1e44,	// (0x0004e1fd) cell_cale_week_pane_g2

0x1e63,	// (0x0004e21c) cell_cale_week_pane_g3_ParamLimits

0x1e63,	// (0x0004e21c) cell_cale_week_pane_g3

0xaf8b,	// (0x00057344) grid_highlight_pane_cp07

0xaf93,	// (0x0005734c) listscroll_gms_pane

0xaf9d,	// (0x00057356) grid_gms_pane

0xafa6,	// (0x0005735f) listscroll_gms_pane_g1

0xafae,	// (0x00057367) listscroll_gms_pane_g2

0x0001,

0xf1f2,	// (0x0005b5ab) listscroll_gms_pane_g

0x1e7b,	// (0x0004e234) scroll_pane_cp010

0x1e86,	// (0x0004e23f) cell_gms_pane_ParamLimits

0x1e86,	// (0x0004e23f) cell_gms_pane

0x1e99,	// (0x0004e252) cell_gms_pane_g1

0xafb6,	// (0x0005736f) cell_gms_pane_g2

0xafbe,	// (0x00057377) cell_gms_pane_g3

0xafc7,	// (0x00057380) cell_gms_pane_g4

0x0003,

0xf1f7,	// (0x0005b5b0) cell_gms_pane_g

0xafd0,	// (0x00057389) grid_highlight_pane_cp09

0x4166,	// (0x0005051f) phob_pre_status_pane_g1

0x416e,	// (0x00050527) phob_pre_status_pane_g2

0x4176,	// (0x0005052f) phob_pre_status_pane_g3

0x417e,	// (0x00050537) phob_pre_status_pane_g4

0x0004,

0xf5e6,	// (0x0005b99f) phob_pre_status_pane_g

0x418e,	// (0x00050547) phob_pre_status_pane_t1

0x419c,	// (0x00050555) phob_pre_status_pane_t2

0x41ac,	// (0x00050565) phob_pre_status_pane_t3

0x0002,

0xf5f1,	// (0x0005b9aa) phob_pre_status_pane_t

0xaaf2,	// (0x00056eab) bg_list_pane_cp05

0x1ea9,	// (0x0004e262) grid_vorec_pane

0x1eb1,	// (0x0004e26a) vorec_t1

0x1ebf,	// (0x0004e278) vorec_t2

0x1ecd,	// (0x0004e286) vorec_t3

0x1edb,	// (0x0004e294) vorec_t4

0xa007,	// (0x000563c0) vorec_t5

0x1ee9,	// (0x0004e2a2) vorec_t6

0x0006,

0xf200,	// (0x0005b5b9) vorec_t

0x1f05,	// (0x0004e2be) wait_bar_pane_cp01

0x1f0d,	// (0x0004e2c6) cell_vorec_pane_ParamLimits

0x1f0d,	// (0x0004e2c6) cell_vorec_pane

0xa015,	// (0x000563ce) cell_vorec_pane_g1

0xaaf2,	// (0x00056eab) grid_highlight_pane_cp05

0x1f35,	// (0x0004e2ee) cams_zoom_pane

0x1f44,	// (0x0004e2fd) image_vga_pane

0x1f5e,	// (0x0004e317) main_camera_pane_g1

0x1f70,	// (0x0004e329) main_camera_pane_g2

0x1f80,	// (0x0004e339) main_camera_pane_g3

0x1f90,	// (0x0004e349) main_camera_pane_g4

0x1fa0,	// (0x0004e359) main_camera_pane_g5

0x1fb0,	// (0x0004e369) main_camera_pane_g6

0x1fc2,	// (0x0004e37b) main_camera_pane_g7

0x0007,

0xf20f,	// (0x0005b5c8) main_camera_pane_g

0x1fd2,	// (0x0004e38b) main_camera_pane_t1

0x1fe8,	// (0x0004e3a1) main_camera_pane_t2

0x0001,

0xf220,	// (0x0005b5d9) main_camera_pane_t

0x2022,	// (0x0004e3db) cams_zoom_pane_cp_ParamLimits

0x2022,	// (0x0004e3db) cams_zoom_pane_cp

0x204a,	// (0x0004e403) image_cif_pane_ParamLimits

0x204a,	// (0x0004e403) image_cif_pane

0x2080,	// (0x0004e439) image_subqcif_pane

0x2088,	// (0x0004e441) main_video_pane_g1_ParamLimits

0x2088,	// (0x0004e441) main_video_pane_g1

0x20ac,	// (0x0004e465) main_video_pane_g2_ParamLimits

0x20ac,	// (0x0004e465) main_video_pane_g2

0x20e0,	// (0x0004e499) main_video_pane_g3_ParamLimits

0x20e0,	// (0x0004e499) main_video_pane_g3

0x210e,	// (0x0004e4c7) main_video_pane_g4_ParamLimits

0x210e,	// (0x0004e4c7) main_video_pane_g4

0x213c,	// (0x0004e4f5) main_video_pane_g5_ParamLimits

0x213c,	// (0x0004e4f5) main_video_pane_g5

0xafe4,	// (0x0005739d) main_video_pane_g6_ParamLimits

0xafe4,	// (0x0005739d) main_video_pane_g6

0x0006,

0xf225,	// (0x0005b5de) main_video_pane_g_ParamLimits

0xf225,	// (0x0005b5de) main_video_pane_g

0x2165,	// (0x0004e51e) main_video_pane_t1_ParamLimits

0x2165,	// (0x0004e51e) main_video_pane_t1

0xaffe,	// (0x000573b7) cams_zoom_pane_g1

0xb007,	// (0x000573c0) cams_zoom_pane_g2

0xb010,	// (0x000573c9) cams_zoom_pane_g3

0xb019,	// (0x000573d2) cams_zoom_pane_g4

0x0003,

0xf234,	// (0x0005b5ed) cams_zoom_pane_g

0x21c2,	// (0x0004e57b) grid_cams_pane

0x21dc,	// (0x0004e595) linegrid_cams_pane

0x21f0,	// (0x0004e5a9) cell_cams_pane_ParamLimits

0x21f0,	// (0x0004e5a9) cell_cams_pane

0xb022,	// (0x000573db) cams_burst_image_pane

0xb02a,	// (0x000573e3) cell_cams_pane_g1

0xaaf2,	// (0x00056eab) grid_highlight_pane_cp03

0xae67,	// (0x00057220) mp_bg_pane_g1

0xaaf2,	// (0x00056eab) bg_list_pane_cp03

0xcd5a,	// (0x00059113) bg_mp_pane

0xcd62,	// (0x0005911b) grid_mp_pane

0xcd6a,	// (0x00059123) media_player_g1

0xcd72,	// (0x0005912b) media_player_t1

0xcd80,	// (0x00059139) media_player_t2

0xcd8e,	// (0x00059147) media_player_t3

0xcd9c,	// (0x00059155) media_player_t4

0xcdaa,	// (0x00059163) media_player_t5

0xcdb8,	// (0x00059171) media_player_t6

0xcdc6,	// (0x0005917f) media_player_t7

0x0006,

0xf5d0,	// (0x0005b989) media_player_t

0xcdd4,	// (0x0005918d) wait_bar_pane_cp02

0xf5b5,	// (0x0005b96e) main_usb_pane_t

0x415d,	// (0x00050516) cell_mp_pane

0xae67,	// (0x00057220) cell_mp_pane_g1

0xaaf2,	// (0x00056eab) grid_highlight_pane_cp06

0xb032,	// (0x000573eb) grid_skin_colour_pane

0xb03a,	// (0x000573f3) list_highlight_pane_cp03

0x2210,	// (0x0004e5c9) skin_g1

0xb042,	// (0x000573fb) skin_t1

0xb051,	// (0x0005740a) skin_t2

0x0001,

0xf269,	// (0x0005b622) skin_t

0x2218,	// (0x0004e5d1) cell_skin_colour_pane_ParamLimits

0x2218,	// (0x0004e5d1) cell_skin_colour_pane

0xb05f,	// (0x00057418) cell_skin_colour_pane_g1

0x2291,	// (0x0004e64a) call_video_g1_ParamLimits

0x2291,	// (0x0004e64a) call_video_g1

0x22ad,	// (0x0004e666) call_video_g2_ParamLimits

0x22ad,	// (0x0004e666) call_video_g2

0x0001,

0xf26e,	// (0x0005b627) call_video_g_ParamLimits

0xf26e,	// (0x0005b627) call_video_g

0x22ff,	// (0x0004e6b8) call_video_uplink_pane_cp1_ParamLimits

0x22ff,	// (0x0004e6b8) call_video_uplink_pane_cp1

0xb071,	// (0x0005742a) call_video_uplink_pane_cp2

0x239e,	// (0x0004e757) video_down_crop_pane_ParamLimits

0x239e,	// (0x0004e757) video_down_crop_pane

0x2495,	// (0x0004e84e) video_down_pane_ParamLimits

0x2495,	// (0x0004e84e) video_down_pane

0xb079,	// (0x00057432) video_down_subqcif_pane_ParamLimits

0xb079,	// (0x00057432) video_down_subqcif_pane

0xb091,	// (0x0005744a) video_down_subqcif_pane_cp_ParamLimits

0xb091,	// (0x0005744a) video_down_subqcif_pane_cp

0xb0b7,	// (0x00057470) im_reading_pane_ParamLimits

0xb0b7,	// (0x00057470) im_reading_pane

0x25a3,	// (0x0004e95c) im_writing_pane_ParamLimits

0x25a3,	// (0x0004e95c) im_writing_pane

0x25b9,	// (0x0004e972) im_reading_pane_t1

0xb0d1,	// (0x0005748a) list_im_pane

0xb0e2,	// (0x0005749b) scroll_pane_cp07

0x25f2,	// (0x0004e9ab) im_writing_pane_t1_ParamLimits

0x25f2,	// (0x0004e9ab) im_writing_pane_t1

0xb0fb,	// (0x000574b4) im_writing_pane_t2_ParamLimits

0xb0fb,	// (0x000574b4) im_writing_pane_t2

0x0001,

0xf278,	// (0x0005b631) im_writing_pane_t_ParamLimits

0xf278,	// (0x0005b631) im_writing_pane_t

0xaaf2,	// (0x00056eab) input_focus_pane_cp04

0xaaf2,	// (0x00056eab) input_focus_pane_cp05

0x2607,	// (0x0004e9c0) list_im_single_pane_ParamLimits

0x2607,	// (0x0004e9c0) list_im_single_pane

0x261b,	// (0x0004e9d4) list_single_im_pane_t1

0x411d,	// (0x000504d6) blid_accuracy_pane

0x4125,	// (0x000504de) blid_compass_pane

0x412f,	// (0x000504e8) main_location_t1

0x413f,	// (0x000504f8) main_location_t2

0x414f,	// (0x00050508) main_location_t3

0x0002,

0xf5df,	// (0x0005b998) main_location_t

0xaaf2,	// (0x00056eab) aid_levels_location

0xae67,	// (0x00057220) blid_accuracy_pane_g1

0xae67,	// (0x00057220) blid_accuracy_pane_g2

0x0001,

0xf2da,	// (0x0005b693) blid_accuracy_pane_g

0xb143,	// (0x000574fc) wml_content_pane

0xb181,	// (0x0005753a) wml_button_pane_ParamLimits

0xb181,	// (0x0005753a) wml_button_pane

0x262a,	// (0x0004e9e3) wml_list_single_large_pane_ParamLimits

0x262a,	// (0x0004e9e3) wml_list_single_large_pane

0x263f,	// (0x0004e9f8) wml_list_single_medium_pane_ParamLimits

0x263f,	// (0x0004e9f8) wml_list_single_medium_pane

0x2655,	// (0x0004ea0e) wml_list_single_small_pane_ParamLimits

0x2655,	// (0x0004ea0e) wml_list_single_small_pane

0xb195,	// (0x0005754e) wml_selection_box_pane_ParamLimits

0xb195,	// (0x0005754e) wml_selection_box_pane

0xb1a8,	// (0x00057561) wml_list_single_pane_t1

0xb1b7,	// (0x00057570) wml_list_single_medium_pane_t1

0xb1c6,	// (0x0005757f) wml_list_single_large_pane_t1

0xb1d5,	// (0x0005758e) input_focus_pane_cp02_ParamLimits

0xb1d5,	// (0x0005758e) input_focus_pane_cp02

0xb1e8,	// (0x000575a1) wml_selection_box_pane_g1

0xb1f1,	// (0x000575aa) wml_selection_box_pane_t1_ParamLimits

0xb1f1,	// (0x000575aa) wml_selection_box_pane_t1

0xad4d,	// (0x00057106) bg_wml_button_pane_ParamLimits

0xad4d,	// (0x00057106) bg_wml_button_pane

0xb209,	// (0x000575c2) wml_button_pane_g1

0xb211,	// (0x000575ca) wml_button_pane_t1

0xb209,	// (0x000575c2) wml_button_bg_pane_g1

0xb221,	// (0x000575da) wml_button_bg_pane_g2

0xb229,	// (0x000575e2) wml_button_bg_pane_g3

0xb231,	// (0x000575ea) wml_button_bg_pane_g4

0xb239,	// (0x000575f2) wml_button_bg_pane_g5

0xb241,	// (0x000575fa) wml_button_bg_pane_g6

0xb249,	// (0x00057602) wml_button_bg_pane_g7

0xb251,	// (0x0005760a) wml_button_bg_pane_g8

0xb259,	// (0x00057612) wml_button_bg_pane_g9

0x0008,

0xf27d,	// (0x0005b636) wml_button_bg_pane_g

0x266d,	// (0x0004ea26) bg_list_pane_cp02

0xb261,	// (0x0005761a) mce_header_pane_ParamLimits

0xb261,	// (0x0005761a) mce_header_pane

0xb277,	// (0x00057630) mce_icon_pane

0xb277,	// (0x00057630) mce_image_pane

0xb280,	// (0x00057639) mce_text_pane_ParamLimits

0xb280,	// (0x00057639) mce_text_pane

0x2675,	// (0x0004ea2e) scroll_pane_cp03

0xb179,	// (0x00057532) scroll_pane_cp04

0xb293,	// (0x0005764c) scroll_pane_cp05_ParamLimits

0xb293,	// (0x0005764c) scroll_pane_cp05

0x267f,	// (0x0004ea38) mce_header_field_pane_ParamLimits

0x267f,	// (0x0004ea38) mce_header_field_pane

0x2696,	// (0x0004ea4f) mce_header_field_pane_2_ParamLimits

0x2696,	// (0x0004ea4f) mce_header_field_pane_2

0x26ac,	// (0x0004ea65) mce_header_field_pane_3

0x26b4,	// (0x0004ea6d) list_single_mce_message_pane_ParamLimits

0x26b4,	// (0x0004ea6d) list_single_mce_message_pane

0x26c9,	// (0x0004ea82) list_single_mce_smart_pane_ParamLimits

0x26c9,	// (0x0004ea82) list_single_mce_smart_pane

0xb29f,	// (0x00057658) input_focus_pane_cp03

0xb2a8,	// (0x00057661) list_header_data_pane

0x26e9,	// (0x0004eaa2) mce_header_field_pane_t1

0x26f9,	// (0x0004eab2) list_single_mce_header_pane_ParamLimits

0x26f9,	// (0x0004eab2) list_single_mce_header_pane

0xb2b0,	// (0x00057669) list_single_mce_header_pane_t1

0xb2bf,	// (0x00057678) list_single_mce_message_pane_g1

0xb2c7,	// (0x00057680) list_single_mce_message_pane_t1

0x2733,	// (0x0004eaec) bg_cale_heading_pane_cp01_ParamLimits

0x2733,	// (0x0004eaec) bg_cale_heading_pane_cp01

0xb2d5,	// (0x0005768e) bg_cale_pane_cp02_ParamLimits

0xb2d5,	// (0x0005768e) bg_cale_pane_cp02

0x2762,	// (0x0004eb1b) cale_month_corner_pane

0x2781,	// (0x0004eb3a) cale_month_day_heading_pane_ParamLimits

0x2781,	// (0x0004eb3a) cale_month_day_heading_pane

0x27c8,	// (0x0004eb81) cale_month_pane_g1_ParamLimits

0x27c8,	// (0x0004eb81) cale_month_pane_g1

0x27ec,	// (0x0004eba5) cale_month_pane_g2_ParamLimits

0x27ec,	// (0x0004eba5) cale_month_pane_g2

0x281c,	// (0x0004ebd5) cale_month_pane_g3_ParamLimits

0x281c,	// (0x0004ebd5) cale_month_pane_g3

0x2858,	// (0x0004ec11) cale_month_pane_g4_ParamLimits

0x2858,	// (0x0004ec11) cale_month_pane_g4

0x2894,	// (0x0004ec4d) cale_month_pane_g5_ParamLimits

0x2894,	// (0x0004ec4d) cale_month_pane_g5

0x28dc,	// (0x0004ec95) cale_month_pane_g6_ParamLimits

0x28dc,	// (0x0004ec95) cale_month_pane_g6

0x2928,	// (0x0004ece1) cale_month_pane_g7_ParamLimits

0x2928,	// (0x0004ece1) cale_month_pane_g7

0x297c,	// (0x0004ed35) cale_month_pane_g8_ParamLimits

0x297c,	// (0x0004ed35) cale_month_pane_g8

0x29d0,	// (0x0004ed89) cale_month_pane_g9_ParamLimits

0x29d0,	// (0x0004ed89) cale_month_pane_g9

0x2a22,	// (0x0004eddb) cale_month_pane_g10_ParamLimits

0x2a22,	// (0x0004eddb) cale_month_pane_g10

0x2a74,	// (0x0004ee2d) cale_month_pane_g11_ParamLimits

0x2a74,	// (0x0004ee2d) cale_month_pane_g11

0x2ac6,	// (0x0004ee7f) cale_month_pane_g12_ParamLimits

0x2ac6,	// (0x0004ee7f) cale_month_pane_g12

0x2b18,	// (0x0004eed1) cale_month_pane_g13_ParamLimits

0x2b18,	// (0x0004eed1) cale_month_pane_g13

0x000c,

0xf290,	// (0x0005b649) cale_month_pane_g_ParamLimits

0xf290,	// (0x0005b649) cale_month_pane_g

0x2b6a,	// (0x0004ef23) cale_month_week_pane

0x2b8e,	// (0x0004ef47) grid_cale_month_pane_ParamLimits

0x2b8e,	// (0x0004ef47) grid_cale_month_pane

0x2bcc,	// (0x0004ef85) cale_month_day_heading_pane_t1

0x2c52,	// (0x0004f00b) cale_month_day_heading_pane_t2

0x2ce3,	// (0x0004f09c) cale_month_day_heading_pane_t3

0x2d74,	// (0x0004f12d) cale_month_day_heading_pane_t4

0x2e09,	// (0x0004f1c2) cale_month_day_heading_pane_t5

0x2eaa,	// (0x0004f263) cale_month_day_heading_pane_t6

0x2f4b,	// (0x0004f304) cale_month_day_heading_pane_t7

0x0006,

0xf2ab,	// (0x0005b664) cale_month_day_heading_pane_t

0xaf7d,	// (0x00057336) bg_cale_side_pane_cp01

0x2ff4,	// (0x0004f3ad) cale_month_week_pane_t1

0x300d,	// (0x0004f3c6) cale_month_week_pane_t2

0x3026,	// (0x0004f3df) cale_month_week_pane_t3

0x303f,	// (0x0004f3f8) cale_month_week_pane_t4

0x3058,	// (0x0004f411) cale_month_week_pane_t5

0x3071,	// (0x0004f42a) cale_month_week_pane_t6

0x0005,

0xf2ba,	// (0x0005b673) cale_month_week_pane_t

0x308a,	// (0x0004f443) cell_cale_month_pane_ParamLimits

0x308a,	// (0x0004f443) cell_cale_month_pane

0xa01f,	// (0x000563d8) cell_cale_month_pane_g1

0x31b4,	// (0x0004f56d) cell_cale_month_pane_t1_ParamLimits

0x31b4,	// (0x0004f56d) cell_cale_month_pane_t1

0xaf8b,	// (0x00057344) grid_highlight_pane_cp08

0xae67,	// (0x00057220) main_smil_g1

0x31d4,	// (0x0004f58d) smil_status_pane

0xb314,	// (0x000576cd) smil_text_pane

0xcc7a,	// (0x00059033) bg_popup_call3_rect_pane_g8

0xcc82,	// (0x0005903b) bg_popup_call3_rect_pane_g9

0x0008,

0xf573,	// (0x0005b92c) bg_popup_call3_rect_pane_g

0xcec9,	// (0x00059282) smil_status_volume_pane_g1

0xb31e,	// (0x000576d7) smil_status_pane_t1

0xa175,	// (0x0005652e) volume_smil_pane

0xb335,	// (0x000576ee) list_smil_text_pane

0x31e7,	// (0x0004f5a0) scroll_pane_cp011

0x31f2,	// (0x0004f5ab) smil_text_list_pane_t1_ParamLimits

0x31f2,	// (0x0004f5ab) smil_text_list_pane_t1

0xa02b,	// (0x000563e4) aid_volume_smil_ParamLimits

0xa02b,	// (0x000563e4) aid_volume_smil

0xae67,	// (0x00057220) smil_volume_pane_g1

0xae67,	// (0x00057220) smil_volume_pane_g2

0x0001,

0xf2da,	// (0x0005b693) smil_volume_pane_g

0x18b3,	// (0x0004dc6c) listscroll_cale_day_pane

0xb33f,	// (0x000576f8) bg_cale_pane

0xb357,	// (0x00057710) list_cale_pane

0xb37a,	// (0x00057733) scroll_pane_cp09

0xb38b,	// (0x00057744) cale_bg_pane_g1

0xb393,	// (0x0005774c) cale_bg_pane_g2

0xb39b,	// (0x00057754) cale_bg_pane_g3

0xb3a3,	// (0x0005775c) cale_bg_pane_g4

0xb3ab,	// (0x00057764) cale_bg_pane_g5

0xb3b3,	// (0x0005776c) cale_bg_pane_g6

0xb3bb,	// (0x00057774) cale_bg_pane_g7

0xb3c3,	// (0x0005777c) cale_bg_pane_g8

0xb3cb,	// (0x00057784) cale_bg_pane_g9

0x0008,

0xf2df,	// (0x0005b698) cale_bg_pane_g

0x3236,	// (0x0004f5ef) list_cale_time_pane_ParamLimits

0x3236,	// (0x0004f5ef) list_cale_time_pane

0xb3d3,	// (0x0005778c) list_cale_time_pane_g1_ParamLimits

0xb3d3,	// (0x0005778c) list_cale_time_pane_g1

0xb3df,	// (0x00057798) list_cale_time_pane_g2_ParamLimits

0xb3df,	// (0x00057798) list_cale_time_pane_g2

0x324b,	// (0x0004f604) list_cale_time_pane_g3_ParamLimits

0x324b,	// (0x0004f604) list_cale_time_pane_g3

0x3259,	// (0x0004f612) list_cale_time_pane_g4_ParamLimits

0x3259,	// (0x0004f612) list_cale_time_pane_g4

0x3267,	// (0x0004f620) list_cale_time_pane_g5_ParamLimits

0x3267,	// (0x0004f620) list_cale_time_pane_g5

0x0005,

0xf2f2,	// (0x0005b6ab) list_cale_time_pane_g_ParamLimits

0xf2f2,	// (0x0005b6ab) list_cale_time_pane_g

0xb3f9,	// (0x000577b2) list_cale_time_pane_t1_ParamLimits

0xb3f9,	// (0x000577b2) list_cale_time_pane_t1

0xb421,	// (0x000577da) list_cale_time_pane_t2_ParamLimits

0xb421,	// (0x000577da) list_cale_time_pane_t2

0x34ed,	// (0x0004f8a6) aid_blid_cardinal_pane

0x352b,	// (0x0004f8e4) compass_pane_t4

0xb449,	// (0x00057802) list_cale_time_pane_t4_ParamLimits

0xb449,	// (0x00057802) list_cale_time_pane_t4

0x3539,	// (0x0004f8f2) compass_pane_t5

0x3547,	// (0x0004f900) compass_pane_t6

0x3555,	// (0x0004f90e) compass_pane_t7

0xb906,	// (0x00057cbf) navi_pane_cc_t1

0xbaeb,	// (0x00057ea4) aid_phob_thumbnail_center_pane

0x3b35,	// (0x0004feee) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2ff,	// (0x0005b6b8) list_cale_time_pane_t_ParamLimits

0xf2ff,	// (0x0005b6b8) list_cale_time_pane_t

0x9d7b,	// (0x00056134) bg_popup_window_pane_cp02_ParamLimits

0x9d7b,	// (0x00056134) bg_popup_window_pane_cp02

0xb471,	// (0x0005782a) heading_pane_cp01_ParamLimits

0xb471,	// (0x0005782a) heading_pane_cp01

0xb47d,	// (0x00057836) loc_req_pane_ParamLimits

0xb47d,	// (0x00057836) loc_req_pane

0xb48d,	// (0x00057846) loc_type_pane_ParamLimits

0xb48d,	// (0x00057846) loc_type_pane

0xb49f,	// (0x00057858) loc_type_pane_t1_ParamLimits

0xb49f,	// (0x00057858) loc_type_pane_t1

0xb4b1,	// (0x0005786a) loc_type_pane_t2_ParamLimits

0xb4b1,	// (0x0005786a) loc_type_pane_t2

0xb4c3,	// (0x0005787c) loc_type_pane_t3_ParamLimits

0xb4c3,	// (0x0005787c) loc_type_pane_t3

0x0002,

0xf306,	// (0x0005b6bf) loc_type_pane_t_ParamLimits

0xf306,	// (0x0005b6bf) loc_type_pane_t

0xb4d5,	// (0x0005788e) list_loc_req_pane

0xb4df,	// (0x00057898) scroll_pane_cp012

0x3275,	// (0x0004f62e) list_single_loc_request_popup_menu_pane_ParamLimits

0x3275,	// (0x0004f62e) list_single_loc_request_popup_menu_pane

0xb4ea,	// (0x000578a3) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xb4ea,	// (0x000578a3) list_single_loc_request_popup_menu_pane_g1

0xb4f6,	// (0x000578af) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xb4f6,	// (0x000578af) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf30d,	// (0x0005b6c6) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf30d,	// (0x0005b6c6) list_single_loc_request_popup_menu_pane_g

0xb502,	// (0x000578bb) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xb502,	// (0x000578bb) list_single_loc_request_popup_menu_pane_t1

0xad4d,	// (0x00057106) bg_popup_window_pane_cp03_ParamLimits

0xad4d,	// (0x00057106) bg_popup_window_pane_cp03

0xb518,	// (0x000578d1) heading_loc_req_pane_ParamLimits

0xb518,	// (0x000578d1) heading_loc_req_pane

0x3282,	// (0x0004f63b) popup_dyc_status_message_window_g1_ParamLimits

0x3282,	// (0x0004f63b) popup_dyc_status_message_window_g1

0x3296,	// (0x0004f64f) popup_dyc_status_message_window_t1_ParamLimits

0x3296,	// (0x0004f64f) popup_dyc_status_message_window_t1

0x32ab,	// (0x0004f664) popup_dyc_status_message_window_t2_ParamLimits

0x32ab,	// (0x0004f664) popup_dyc_status_message_window_t2

0x32c0,	// (0x0004f679) popup_dyc_status_message_window_t3_ParamLimits

0x32c0,	// (0x0004f679) popup_dyc_status_message_window_t3

0x0002,

0xf312,	// (0x0005b6cb) popup_dyc_status_message_window_t_ParamLimits

0xf312,	// (0x0005b6cb) popup_dyc_status_message_window_t

0xaaf2,	// (0x00056eab) bg_heading_pane_cp01

0xb524,	// (0x000578dd) heading_loc_req_pane_g1

0xb52c,	// (0x000578e5) heading_loc_req_pane_g2

0xb534,	// (0x000578ed) heading_loc_req_pane_g3

0x0002,

0xf319,	// (0x0005b6d2) heading_loc_req_pane_g

0xb53c,	// (0x000578f5) heading_loc_req_pane_t1

0xb54b,	// (0x00057904) bg_popup_sub_pane_cp01_ParamLimits

0xb54b,	// (0x00057904) bg_popup_sub_pane_cp01

0xb559,	// (0x00057912) popup_cale_events_window_g1_ParamLimits

0xb559,	// (0x00057912) popup_cale_events_window_g1

0xb579,	// (0x00057932) popup_cale_events_window_g2_ParamLimits

0xb579,	// (0x00057932) popup_cale_events_window_g2

0x0001,

0xf34d,	// (0x0005b706) popup_cale_events_window_g_ParamLimits

0xf34d,	// (0x0005b706) popup_cale_events_window_g

0xb599,	// (0x00057952) popup_cale_events_window_t1_ParamLimits

0xb599,	// (0x00057952) popup_cale_events_window_t1

0xb5ab,	// (0x00057964) popup_cale_events_window_t2_ParamLimits

0xb5ab,	// (0x00057964) popup_cale_events_window_t2

0xb5f7,	// (0x000579b0) popup_cale_events_window_t3_ParamLimits

0xb5f7,	// (0x000579b0) popup_cale_events_window_t3

0xb631,	// (0x000579ea) popup_cale_events_window_t4_ParamLimits

0xb631,	// (0x000579ea) popup_cale_events_window_t4

0x0003,

0xf352,	// (0x0005b70b) popup_cale_events_window_t_ParamLimits

0xf352,	// (0x0005b70b) popup_cale_events_window_t

0x32e8,	// (0x0004f6a1) call_type_pane

0x32f8,	// (0x0004f6b1) popup_call_status_window_g1

0x330c,	// (0x0004f6c5) popup_call_status_window_g2

0x3320,	// (0x0004f6d9) popup_call_status_window_g3

0x0002,

0xf35b,	// (0x0005b714) popup_call_status_window_g

0xb667,	// (0x00057a20) call_type_pane_g1

0xb670,	// (0x00057a29) call_type_pane_g2

0x0001,

0xf362,	// (0x0005b71b) call_type_pane_g

0xaaf2,	// (0x00056eab) bg_popup_sub_pane_cp02

0xb679,	// (0x00057a32) listscroll_popup_wml_pane

0xb681,	// (0x00057a3a) list_wml_pane

0xb68b,	// (0x00057a44) scroll_pane_cp013

0xb696,	// (0x00057a4f) list_single_graphic_popup_wml_pane_ParamLimits

0xb696,	// (0x00057a4f) list_single_graphic_popup_wml_pane

0xae67,	// (0x00057220) list_single_graphic_popup_wml_pane_g1

0xb6aa,	// (0x00057a63) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf367,	// (0x0005b720) list_single_graphic_popup_wml_pane_g

0xb6b2,	// (0x00057a6b) list_single_graphic_popup_wml_pane_t1

0xb6c8,	// (0x00057a81) aid_call_pane

0xad45,	// (0x000570fe) popup_clock_analogue_window_g1

0xad45,	// (0x000570fe) popup_clock_analogue_window_g2

0xa04d,	// (0x00056406) popup_clock_analogue_window_g3

0xa04d,	// (0x00056406) popup_clock_analogue_window_g4

0xae67,	// (0x00057220) popup_clock_analogue_window_g5

0x0004,

0xf36c,	// (0x0005b725) popup_clock_analogue_window_g

0xa055,	// (0x0005640e) popup_clock_analogue_window_t1

0xa063,	// (0x0005641c) clock_digital_number_pane_ParamLimits

0xa063,	// (0x0005641c) clock_digital_number_pane

0xa06f,	// (0x00056428) clock_digital_number_pane_cp02_ParamLimits

0xa06f,	// (0x00056428) clock_digital_number_pane_cp02

0xa07b,	// (0x00056434) clock_digital_number_pane_cp03_ParamLimits

0xa07b,	// (0x00056434) clock_digital_number_pane_cp03

0xa087,	// (0x00056440) clock_digital_number_pane_cp04_ParamLimits

0xa087,	// (0x00056440) clock_digital_number_pane_cp04

0xa097,	// (0x00056450) clock_digital_separator_pane_ParamLimits

0xa097,	// (0x00056450) clock_digital_separator_pane

0xa0a3,	// (0x0005645c) popup_clock_digital_window_t1

0xae67,	// (0x00057220) clock_digital_number_pane_g1

0xae67,	// (0x00057220) clock_digital_number_pane_g2

0x0001,

0xf2da,	// (0x0005b693) clock_digital_number_pane_g

0xae67,	// (0x00057220) clock_digital_separator_pane_g1

0xae67,	// (0x00057220) clock_digital_separator_pane_g2

0x0001,

0xf2da,	// (0x0005b693) clock_digital_separator_pane_g

0xaaf2,	// (0x00056eab) bg_popup_window_pane_cp04

0xb6d0,	// (0x00057a89) heading_pane_cp03

0xb6d8,	// (0x00057a91) listscroll_popup_gms_pane

0xb6e0,	// (0x00057a99) grid_large_graphic_popup_pane

0xb6ea,	// (0x00057aa3) listscroll_popup_gms_pane_g1

0xb6f2,	// (0x00057aab) listscroll_popup_gms_pane_g2

0x0001,

0xf377,	// (0x0005b730) listscroll_popup_gms_pane_g

0xb179,	// (0x00057532) scroll_pane_cp014

0x332f,	// (0x0004f6e8) cell_large_graphic_popup_pane_ParamLimits

0x332f,	// (0x0004f6e8) cell_large_graphic_popup_pane

0x3347,	// (0x0004f700) cell_large_graphic_popup_pane_g1_ParamLimits

0x3347,	// (0x0004f700) cell_large_graphic_popup_pane_g1

0xb6fa,	// (0x00057ab3) cell_large_graphic_popup_pane_g2_ParamLimits

0xb6fa,	// (0x00057ab3) cell_large_graphic_popup_pane_g2

0xb706,	// (0x00057abf) cell_large_graphic_popup_pane_g3_ParamLimits

0xb706,	// (0x00057abf) cell_large_graphic_popup_pane_g3

0xb713,	// (0x00057acc) cell_large_graphic_popup_pane_g4_ParamLimits

0xb713,	// (0x00057acc) cell_large_graphic_popup_pane_g4

0x0003,

0xf37c,	// (0x0005b735) cell_large_graphic_popup_pane_g_ParamLimits

0xf37c,	// (0x0005b735) cell_large_graphic_popup_pane_g

0xb723,	// (0x00057adc) grid_highlight_pane_cp010

0xae67,	// (0x00057220) bg_popup_call_pane_g1

0xb72d,	// (0x00057ae6) list_single_graphic_popup_conf_pane_ParamLimits

0xb72d,	// (0x00057ae6) list_single_graphic_popup_conf_pane

0xb740,	// (0x00057af9) list_highlight_pane_cp01

0xb749,	// (0x00057b02) list_single_graphic_popup_conf_pane_g1

0xb751,	// (0x00057b0a) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf385,	// (0x0005b73e) list_single_graphic_popup_conf_pane_g

0xb759,	// (0x00057b12) list_single_graphic_popup_conf_pane_t1

0xb767,	// (0x00057b20) linegrid_cams_pane_g1

0x3353,	// (0x0004f70c) linegrid_cams_pane_g2

0xafbe,	// (0x00057377) linegrid_cams_pane_g3

0xb770,	// (0x00057b29) linegrid_cams_pane_g4

0x335c,	// (0x0004f715) linegrid_cams_pane_g5

0x3365,	// (0x0004f71e) linegrid_cams_pane_g6

0xafc7,	// (0x00057380) linegrid_cams_pane_g7

0x0006,

0xf38a,	// (0x0005b743) linegrid_cams_pane_g

0xb779,	// (0x00057b32) popup_clock_analogue_window

0xb779,	// (0x00057b32) popup_clock_digital_window

0xaaf2,	// (0x00056eab) popup_phob_thumbnail_window

0xae67,	// (0x00057220) call_video_uplink_pane_g1

0xb782,	// (0x00057b3b) call_video_uplink_pane_g2

0x0001,

0xf399,	// (0x0005b752) call_video_uplink_pane_g

0xb78a,	// (0x00057b43) video_uplink_pane

0xb792,	// (0x00057b4b) mce_image_pane_g1

0x3370,	// (0x0004f729) mce_image_pane_g2

0x337a,	// (0x0004f733) mce_image_pane_g3

0x3382,	// (0x0004f73b) mce_image_pane_g4

0x338a,	// (0x0004f743) mce_image_pane_g5

0x0004,

0xf39e,	// (0x0005b757) mce_image_pane_g

0xb79c,	// (0x00057b55) control_top_pane_stacon_cp01_ParamLimits

0xb79c,	// (0x00057b55) control_top_pane_stacon_cp01

0xb7b0,	// (0x00057b69) uni_indicator_pane_stacon_cp01_ParamLimits

0xb7b0,	// (0x00057b69) uni_indicator_pane_stacon_cp01

0xb7c1,	// (0x00057b7a) bg_popup_sub_pane_cp03

0xb7cb,	// (0x00057b84) chi_dic_find_pane

0x3392,	// (0x0004f74b) listscroll_chi_dic_pane

0xb7d3,	// (0x00057b8c) main_pane_chidic_g1

0xb7db,	// (0x00057b94) chi_dic_find_pane_t1

0xb7e9,	// (0x00057ba2) find_chidic_pane

0xb7f2,	// (0x00057bab) chi_dic_list_pane_ParamLimits

0xb7f2,	// (0x00057bab) chi_dic_list_pane

0xb803,	// (0x00057bbc) scroll_pane_cp020

0xb80b,	// (0x00057bc4) find_chidic_pane_t1

0xaaf2,	// (0x00056eab) input_focus_pane_cp06

0x33a6,	// (0x0004f75f) list_chi_dic_pane_ParamLimits

0x33a6,	// (0x0004f75f) list_chi_dic_pane

0x33b8,	// (0x0004f771) list_chi_dic_pane_t1_ParamLimits

0x33b8,	// (0x0004f771) list_chi_dic_pane_t1

0xaaf2,	// (0x00056eab) list_highlight_pane_cp020

0xb81a,	// (0x00057bd3) bg_cale_heading_pane_g1

0x33cb,	// (0x0004f784) bg_cale_heading_pane_g2

0x33d3,	// (0x0004f78c) bg_cale_heading_pane_g3

0x33db,	// (0x0004f794) bg_cale_heading_pane_g4

0x33e5,	// (0x0004f79e) bg_cale_heading_pane_g5

0x33ef,	// (0x0004f7a8) bg_cale_heading_pane_g6

0x33f7,	// (0x0004f7b0) bg_cale_heading_pane_g7

0x33ff,	// (0x0004f7b8) bg_cale_heading_pane_g8

0x3409,	// (0x0004f7c2) bg_cale_heading_pane_g9

0x0008,

0xf3a9,	// (0x0005b762) bg_cale_heading_pane_g

0xb81a,	// (0x00057bd3) bg_cale_side_pane_g1

0x3413,	// (0x0004f7cc) bg_cale_side_pane_g2

0x341b,	// (0x0004f7d4) bg_cale_side_pane_g3

0x3423,	// (0x0004f7dc) bg_cale_side_pane_g4

0x342b,	// (0x0004f7e4) bg_cale_side_pane_g5

0x3433,	// (0x0004f7ec) bg_cale_side_pane_g6

0x343b,	// (0x0004f7f4) bg_cale_side_pane_g7

0x3443,	// (0x0004f7fc) bg_cale_side_pane_g8

0x344b,	// (0x0004f804) bg_cale_side_pane_g9

0x0008,

0xf3bc,	// (0x0005b775) bg_cale_side_pane_g

0x3453,	// (0x0004f80c) popup_call_status_window_ParamLimits

0x3453,	// (0x0004f80c) popup_call_status_window

0xb822,	// (0x00057bdb) stacon_top_pane

0xb82a,	// (0x00057be3) status_pane_ParamLimits

0xb82a,	// (0x00057be3) status_pane

0xb83f,	// (0x00057bf8) status_small_pane

0xb847,	// (0x00057c00) control_pane

0xaaf2,	// (0x00056eab) stacon_bottom_pane

0xb84f,	// (0x00057c08) list_single_mce_smart_pane_t1_ParamLimits

0xb84f,	// (0x00057c08) list_single_mce_smart_pane_t1

0xb862,	// (0x00057c1b) list_single_mce_smart_pane_t2_ParamLimits

0xb862,	// (0x00057c1b) list_single_mce_smart_pane_t2

0x0001,

0xf3cf,	// (0x0005b788) list_single_mce_smart_pane_t_ParamLimits

0xf3cf,	// (0x0005b788) list_single_mce_smart_pane_t

0x349c,	// (0x0004f855) compass_pane

0x34a5,	// (0x0004f85e) main_location2_pane_t1

0x34b7,	// (0x0004f870) main_location2_pane_t2

0x34c9,	// (0x0004f882) main_location2_pane_t3

0x0003,

0xf3d4,	// (0x0005b78d) main_location2_pane_t

0xb881,	// (0x00057c3a) compass_pane_g1_ParamLimits

0xb881,	// (0x00057c3a) compass_pane_g1

0x350d,	// (0x0004f8c6) compass_pane_t1

0x351c,	// (0x0004f8d5) compass_pane_t2

0x0005,

0xf3dd,	// (0x0005b796) compass_pane_t

0x3563,	// (0x0004f91c) text_secondary_cp61

0xb8fd,	// (0x00057cb6) navi_pane_cams_g5

0xb979,	// (0x00057d32) navi_pane_im_t1

0xb987,	// (0x00057d40) navi_pane_mp_g1_ParamLimits

0xb987,	// (0x00057d40) navi_pane_mp_g1

0xb99b,	// (0x00057d54) navi_pane_mp_g2_ParamLimits

0xb99b,	// (0x00057d54) navi_pane_mp_g2

0xb9a7,	// (0x00057d60) navi_pane_mp_g3_ParamLimits

0xb9a7,	// (0x00057d60) navi_pane_mp_g3

0x0002,

0xf3f1,	// (0x0005b7aa) navi_pane_mp_g_ParamLimits

0xf3f1,	// (0x0005b7aa) navi_pane_mp_g

0xb9b3,	// (0x00057d6c) navi_pane_mp_t1

0xb9c1,	// (0x00057d7a) navi_pane_mp_t2

0x0002,

0xf3f8,	// (0x0005b7b1) navi_pane_mp_t

0xba2c,	// (0x00057de5) navi_pane_vt_g1

0xb9b3,	// (0x00057d6c) navi_pane_vt_t1

0xba34,	// (0x00057ded) navi_slider_pane

0xba44,	// (0x00057dfd) zooming_pane

0xba4c,	// (0x00057e05) navi_slider_pane_g1

0xa0c0,	// (0x00056479) navi_slider_pane_g2

0x0006,

0xf3ff,	// (0x0005b7b8) navi_slider_pane_g

0xba70,	// (0x00057e29) aid_levels_zoom

0xba78,	// (0x00057e31) zooming_pane_g1

0xba80,	// (0x00057e39) zooming_pane_g2

0xba80,	// (0x00057e39) zooming_pane_g3

0x0002,

0xf40e,	// (0x0005b7c7) zooming_pane_g

0xba88,	// (0x00057e41) level_10_zoom

0xba91,	// (0x00057e4a) level_11_zoom

0xba9a,	// (0x00057e53) level_1_zoom

0xbaa3,	// (0x00057e5c) level_2_zoom

0xbaac,	// (0x00057e65) level_3_zoom

0xbab5,	// (0x00057e6e) level_4_zoom

0xbabe,	// (0x00057e77) level_5_zoom

0xbac7,	// (0x00057e80) level_6_zoom

0xbad0,	// (0x00057e89) level_7_zoom

0xbad9,	// (0x00057e92) level_8_zoom

0xbae2,	// (0x00057e9b) level_9_zoom

0xbaf3,	// (0x00057eac) popup_phob_thumbnail_window_g1

0xbafb,	// (0x00057eb4) popup_phob_thumbnail_window_g2

0x0001,

0xf415,	// (0x0005b7ce) popup_phob_thumbnail_window_g

0xcddc,	// (0x00059195) level_1_location

0xcde4,	// (0x0005919d) level_2_location

0xcdec,	// (0x000591a5) level_3_location

0xcdf4,	// (0x000591ad) level_4_location

0xba44,	// (0x00057dfd) level_5_location

0x35b4,	// (0x0004f96d) mce_icon_pane_g1

0x35be,	// (0x0004f977) mce_icon_pane_g2

0x0001,

0xf41a,	// (0x0005b7d3) mce_icon_pane_g

0x35c6,	// (0x0004f97f) main_mup_pane_g1_ParamLimits

0x35c6,	// (0x0004f97f) main_mup_pane_g1

0x35dc,	// (0x0004f995) main_mup_pane_g2_ParamLimits

0x35dc,	// (0x0004f995) main_mup_pane_g2

0x35f4,	// (0x0004f9ad) main_mup_pane_g3_ParamLimits

0x35f4,	// (0x0004f9ad) main_mup_pane_g3

0x360c,	// (0x0004f9c5) main_mup_pane_g4_ParamLimits

0x360c,	// (0x0004f9c5) main_mup_pane_g4

0x3624,	// (0x0004f9dd) main_mup_pane_g5_ParamLimits

0x3624,	// (0x0004f9dd) main_mup_pane_g5

0x3640,	// (0x0004f9f9) main_mup_pane_g6_ParamLimits

0x3640,	// (0x0004f9f9) main_mup_pane_g6

0x3658,	// (0x0004fa11) main_mup_pane_g7_ParamLimits

0x3658,	// (0x0004fa11) main_mup_pane_g7

0x3670,	// (0x0004fa29) main_mup_pane_g8_ParamLimits

0x3670,	// (0x0004fa29) main_mup_pane_g8

0x368a,	// (0x0004fa43) main_mup_pane_g9_ParamLimits

0x368a,	// (0x0004fa43) main_mup_pane_g9

0x36a4,	// (0x0004fa5d) main_mup_pane_g10_ParamLimits

0x36a4,	// (0x0004fa5d) main_mup_pane_g10

0x36be,	// (0x0004fa77) main_mup_pane_g11_ParamLimits

0x36be,	// (0x0004fa77) main_mup_pane_g11

0x36d2,	// (0x0004fa8b) main_mup_pane_g12_ParamLimits

0x36d2,	// (0x0004fa8b) main_mup_pane_g12

0x36e8,	// (0x0004faa1) main_mup_pane_g13_ParamLimits

0x36e8,	// (0x0004faa1) main_mup_pane_g13

0x000c,

0xf41f,	// (0x0005b7d8) main_mup_pane_g_ParamLimits

0xf41f,	// (0x0005b7d8) main_mup_pane_g

0x36fc,	// (0x0004fab5) main_mup_pane_t1_ParamLimits

0x36fc,	// (0x0004fab5) main_mup_pane_t1

0x3716,	// (0x0004facf) main_mup_pane_t2_ParamLimits

0x3716,	// (0x0004facf) main_mup_pane_t2

0x372e,	// (0x0004fae7) main_mup_pane_t3_ParamLimits

0x372e,	// (0x0004fae7) main_mup_pane_t3

0x3746,	// (0x0004faff) main_mup_pane_t4_ParamLimits

0x3746,	// (0x0004faff) main_mup_pane_t4

0x3764,	// (0x0004fb1d) main_mup_pane_t5_ParamLimits

0x3764,	// (0x0004fb1d) main_mup_pane_t5

0x3779,	// (0x0004fb32) main_mup_pane_t6_ParamLimits

0x3779,	// (0x0004fb32) main_mup_pane_t6

0x0005,

0xf43a,	// (0x0005b7f3) main_mup_pane_t_ParamLimits

0xf43a,	// (0x0005b7f3) main_mup_pane_t

0x378b,	// (0x0004fb44) mup_progress_pane_ParamLimits

0x378b,	// (0x0004fb44) mup_progress_pane

0x3797,	// (0x0004fb50) mup_visualizer_pane_ParamLimits

0x3797,	// (0x0004fb50) mup_visualizer_pane

0x37c7,	// (0x0004fb80) mup_volume_pane_ParamLimits

0x37c7,	// (0x0004fb80) mup_volume_pane

0xbb03,	// (0x00057ebc) mup_visualizer_pane_g1_ParamLimits

0xbb03,	// (0x00057ebc) mup_visualizer_pane_g1

0xbb03,	// (0x00057ebc) mup_visualizer_pane_g2_ParamLimits

0xbb03,	// (0x00057ebc) mup_visualizer_pane_g2

0xb881,	// (0x00057c3a) mup_visualizer_pane_g3_ParamLimits

0xb881,	// (0x00057c3a) mup_visualizer_pane_g3

0x0002,

0xf447,	// (0x0005b800) mup_visualizer_pane_g_ParamLimits

0xf447,	// (0x0005b800) mup_visualizer_pane_g

0xae67,	// (0x00057220) mup_volume_pane_g1

0xbb19,	// (0x00057ed2) mup_volume_pane_g2

0x0001,

0xf44e,	// (0x0005b807) mup_volume_pane_g

0xae67,	// (0x00057220) mup_progress_pane_g1

0xbb22,	// (0x00057edb) mup_progress_pane_g2

0xbb2b,	// (0x00057ee4) mup_progress_pane_g3

0x0002,

0xf453,	// (0x0005b80c) mup_progress_pane_g

0xaaf2,	// (0x00056eab) bg_popup_window_pane_cp05

0xbb34,	// (0x00057eed) heading_pane_cp02_ParamLimits

0xbb34,	// (0x00057eed) heading_pane_cp02

0xbb4e,	// (0x00057f07) list_popup_blid_pane

0xbb56,	// (0x00057f0f) list_blid_sat_info_pane_ParamLimits

0xbb56,	// (0x00057f0f) list_blid_sat_info_pane

0xbb69,	// (0x00057f22) list_blid_sat_info_pane_g1

0xbb71,	// (0x00057f2a) list_blid_sat_info_pane_t1

0x38dd,	// (0x0004fc96) mup_equalizer_pane_ParamLimits

0x38dd,	// (0x0004fc96) mup_equalizer_pane

0x38f6,	// (0x0004fcaf) mup_equalizer_pane_cp1_ParamLimits

0x38f6,	// (0x0004fcaf) mup_equalizer_pane_cp1

0x3913,	// (0x0004fccc) mup_equalizer_pane_cp2_ParamLimits

0x3913,	// (0x0004fccc) mup_equalizer_pane_cp2

0x3930,	// (0x0004fce9) mup_equalizer_pane_cp3_ParamLimits

0x3930,	// (0x0004fce9) mup_equalizer_pane_cp3

0x3951,	// (0x0004fd0a) mup_equalizer_pane_cp4_ParamLimits

0x3951,	// (0x0004fd0a) mup_equalizer_pane_cp4

0x3972,	// (0x0004fd2b) mup_equalizer_pane_cp5

0x3986,	// (0x0004fd3f) mup_equalizer_pane_cp6

0x399a,	// (0x0004fd53) mup_equalizer_pane_cp7

0xccfa,	// (0x000590b3) bg_popup_call_poc_act_pane_g9

0xcd02,	// (0x000590bb) bg_popup_call_poc_act_pane_g10

0xcd0a,	// (0x000590c3) bg_popup_call_poc_act_pane_g11

0x000a,

0xad4d,	// (0x00057106) mup_scale_pane

0xae67,	// (0x00057220) mup_scale_pane_g1

0xbb7f,	// (0x00057f38) mup_scale_pane_g2

0x0006,

0xf46f,	// (0x0005b828) mup_scale_pane_g

0xbba3,	// (0x00057f5c) msg_data_pane

0xbbab,	// (0x00057f64) scroll_pane_cp017

0x043a,	// (0x0004c7f3) bg_list_pane_cp04_ParamLimits

0x043a,	// (0x0004c7f3) bg_list_pane_cp04

0xbbb3,	// (0x00057f6c) msg_data_pane_g1

0x39c8,	// (0x0004fd81) msg_data_pane_g2

0x39d2,	// (0x0004fd8b) msg_data_pane_g3

0x39da,	// (0x0004fd93) msg_data_pane_g4

0x39e2,	// (0x0004fd9b) msg_data_pane_g5

0x39ea,	// (0x0004fda3) msg_data_pane_g6

0x39f2,	// (0x0004fdab) msg_data_pane_g7

0x0006,

0xf47e,	// (0x0005b837) msg_data_pane_g

0x0452,	// (0x0004c80b) msg_text_pane_ParamLimits

0x0452,	// (0x0004c80b) msg_text_pane

0x39fa,	// (0x0004fdb3) qrid_highlight_pane_cp011_ParamLimits

0x39fa,	// (0x0004fdb3) qrid_highlight_pane_cp011

0xaaf2,	// (0x00056eab) msg_body_pane

0xaaf2,	// (0x00056eab) msg_header_pane

0xbbbb,	// (0x00057f74) input_focus_pane_cp07

0x0485,	// (0x0004c83e) msg_header_pane_t1_ParamLimits

0x0485,	// (0x0004c83e) msg_header_pane_t1

0x3a1b,	// (0x0004fdd4) msg_header_pane_t2_ParamLimits

0x3a1b,	// (0x0004fdd4) msg_header_pane_t2

0x0001,

0xf492,	// (0x0005b84b) msg_header_pane_t_ParamLimits

0xf492,	// (0x0005b84b) msg_header_pane_t

0xbbd0,	// (0x00057f89) msg_body_pane_g1

0x0497,	// (0x0004c850) msg_body_pane_t1_ParamLimits

0x0497,	// (0x0004c850) msg_body_pane_t1

0x3a2d,	// (0x0004fde6) msg_body_pane_t2_ParamLimits

0x3a2d,	// (0x0004fde6) msg_body_pane_t2

0x3a3f,	// (0x0004fdf8) msg_body_pane_t3_ParamLimits

0x3a3f,	// (0x0004fdf8) msg_body_pane_t3

0x0002,

0xf497,	// (0x0005b850) msg_body_pane_t_ParamLimits

0xf497,	// (0x0005b850) msg_body_pane_t

0x3a8b,	// (0x0004fe44) main_viewer_pane_g1_ParamLimits

0x3a8b,	// (0x0004fe44) main_viewer_pane_g1

0x3a99,	// (0x0004fe52) main_viewer_pane_g2_ParamLimits

0x3a99,	// (0x0004fe52) main_viewer_pane_g2

0x3aa7,	// (0x0004fe60) main_viewer_pane_g3_ParamLimits

0x3aa7,	// (0x0004fe60) main_viewer_pane_g3

0x3ab6,	// (0x0004fe6f) main_viewer_pane_g4_ParamLimits

0x3ab6,	// (0x0004fe6f) main_viewer_pane_g4

0xa0ea,	// (0x000564a3) main_viewer_pane_g5_ParamLimits

0xa0ea,	// (0x000564a3) main_viewer_pane_g5

0xa0ea,	// (0x000564a3) main_viewer_pane_g7_ParamLimits

0xa0ea,	// (0x000564a3) main_viewer_pane_g7

0xa0fc,	// (0x000564b5) main_viewer_pane_g8_ParamLimits

0xa0fc,	// (0x000564b5) main_viewer_pane_g8

0x0007,

0xf4a7,	// (0x0005b860) main_viewer_pane_g_ParamLimits

0xf4a7,	// (0x0005b860) main_viewer_pane_g

0xbbd8,	// (0x00057f91) viewer_content_pane_ParamLimits

0xbbd8,	// (0x00057f91) viewer_content_pane

0x3af2,	// (0x0004feab) main_postcard_pane_g1_ParamLimits

0x3af2,	// (0x0004feab) main_postcard_pane_g1

0x3b08,	// (0x0004fec1) main_postcard_pane_g2_ParamLimits

0x3b08,	// (0x0004fec1) main_postcard_pane_g2

0x3b1e,	// (0x0004fed7) main_postcard_pane_g3_ParamLimits

0x3b1e,	// (0x0004fed7) main_postcard_pane_g3

0x0005,

0xf4b8,	// (0x0005b871) main_postcard_pane_g_ParamLimits

0xf4b8,	// (0x0005b871) main_postcard_pane_g

0x3b35,	// (0x0004feee) main_postcard_pane_g4

0xcedc,	// (0x00059295) smil_status_volume_pane_g2

0x3b78,	// (0x0004ff31) postcard_pane_ParamLimits

0x3b78,	// (0x0004ff31) postcard_pane

0xbbe6,	// (0x00057f9f) postcard_pane_g1_ParamLimits

0xbbe6,	// (0x00057f9f) postcard_pane_g1

0x3bba,	// (0x0004ff73) postcard_pane_g2_ParamLimits

0x3bba,	// (0x0004ff73) postcard_pane_g2

0x3bc6,	// (0x0004ff7f) postcard_pane_g3_ParamLimits

0x3bc6,	// (0x0004ff7f) postcard_pane_g3

0xbbf4,	// (0x00057fad) postcard_pane_g4_ParamLimits

0xbbf4,	// (0x00057fad) postcard_pane_g4

0x3bd2,	// (0x0004ff8b) postcard_pane_g5_ParamLimits

0x3bd2,	// (0x0004ff8b) postcard_pane_g5

0x3be7,	// (0x0004ffa0) postcard_pane_g6_ParamLimits

0x3be7,	// (0x0004ffa0) postcard_pane_g6

0xbbe6,	// (0x00057f9f) postcard_pane_g7_ParamLimits

0xbbe6,	// (0x00057f9f) postcard_pane_g7

0x0006,

0xf4c5,	// (0x0005b87e) postcard_pane_g_ParamLimits

0xf4c5,	// (0x0005b87e) postcard_pane_g

0x3bfb,	// (0x0004ffb4) main_mp2_pane_g1_ParamLimits

0x3bfb,	// (0x0004ffb4) main_mp2_pane_g1

0x3c07,	// (0x0004ffc0) main_mp2_pane_g2_ParamLimits

0x3c07,	// (0x0004ffc0) main_mp2_pane_g2

0x3c13,	// (0x0004ffcc) main_mp2_pane_g3_ParamLimits

0x3c13,	// (0x0004ffcc) main_mp2_pane_g3

0x0002,

0xf4d4,	// (0x0005b88d) main_mp2_pane_g_ParamLimits

0xf4d4,	// (0x0005b88d) main_mp2_pane_g

0x3c1f,	// (0x0004ffd8) main_mp2_pane_t1_ParamLimits

0x3c1f,	// (0x0004ffd8) main_mp2_pane_t1

0x3c34,	// (0x0004ffed) main_mp2_pane_t2_ParamLimits

0x3c34,	// (0x0004ffed) main_mp2_pane_t2

0x3c46,	// (0x0004ffff) main_mp2_pane_t3_ParamLimits

0x3c46,	// (0x0004ffff) main_mp2_pane_t3

0x0002,

0xf4db,	// (0x0005b894) main_mp2_pane_t_ParamLimits

0xf4db,	// (0x0005b894) main_mp2_pane_t

0xbc02,	// (0x00057fbb) pec_content_pane_ParamLimits

0xbc02,	// (0x00057fbb) pec_content_pane

0xb179,	// (0x00057532) scroll_pane_cp015

0xbc14,	// (0x00057fcd) pec_attribute_pane_ParamLimits

0xbc14,	// (0x00057fcd) pec_attribute_pane

0x3c58,	// (0x00050011) pec_content_pane_g1_ParamLimits

0x3c58,	// (0x00050011) pec_content_pane_g1

0xbc24,	// (0x00057fdd) pec_content_pane_t1_ParamLimits

0xbc24,	// (0x00057fdd) pec_content_pane_t1

0xbc36,	// (0x00057fef) pec_content_pane_t2_ParamLimits

0xbc36,	// (0x00057fef) pec_content_pane_t2

0x0001,

0xf4e2,	// (0x0005b89b) pec_content_pane_t_ParamLimits

0xf4e2,	// (0x0005b89b) pec_content_pane_t

0x3c64,	// (0x0005001d) list_single_graphic_pane_cp01_ParamLimits

0x3c64,	// (0x0005001d) list_single_graphic_pane_cp01

0xad4d,	// (0x00057106) bg_popup_sub_pane_cp04

0xbc48,	// (0x00058001) popup_mup_playback_window_g1

0xbc54,	// (0x0005800d) popup_mup_playback_window_t1

0xbc69,	// (0x00058022) popup_mup_playback_window_t2

0x0001,

0xf4e7,	// (0x0005b8a0) popup_mup_playback_window_t

0xbca0,	// (0x00058059) main_image_pane_g1_ParamLimits

0xbca0,	// (0x00058059) main_image_pane_g1

0xbce3,	// (0x0005809c) scroll_pane_cp018_ParamLimits

0xbce3,	// (0x0005809c) scroll_pane_cp018

0xbcfb,	// (0x000580b4) scroll_pane_cp016_ParamLimits

0xbcfb,	// (0x000580b4) scroll_pane_cp016

0x3d31,	// (0x000500ea) smil2_image_pane_ParamLimits

0x3d31,	// (0x000500ea) smil2_image_pane

0x3d61,	// (0x0005011a) smil2_root_pane_ParamLimits

0x3d61,	// (0x0005011a) smil2_root_pane

0x3d99,	// (0x00050152) smil2_text_pane_ParamLimits

0x3d99,	// (0x00050152) smil2_text_pane

0xaaf2,	// (0x00056eab) bg_list_pane_cp06

0xbd37,	// (0x000580f0) grid_radio_pane

0xaaf2,	// (0x00056eab) bg_popup_window_pane_cp06

0xbd3f,	// (0x000580f8) main_fmradio_pane_t1

0xb6d0,	// (0x00057a89) heading_pane_cp04

0xbd4d,	// (0x00058106) main_fmradio_pane_t2

0xcd12,	// (0x000590cb) popup_cale_lunar_info_window_g1

0xbd5b,	// (0x00058114) main_fmradio_pane_t3

0xcd1a,	// (0x000590d3) popup_cale_lunar_info_window_g2

0xbd69,	// (0x00058122) main_fmradio_pane_t4

0x0001,

0xbd77,	// (0x00058130) main_fmradio_pane_t5

0x0004,

0xf5c2,	// (0x0005b97b) popup_cale_lunar_info_window_g

0xf4fc,	// (0x0005b8b5) main_fmradio_pane_t

0xbd85,	// (0x0005813e) wait_bar_pane_cp03

0xbd8d,	// (0x00058146) cell_fmradio_pane_ParamLimits

0xbd8d,	// (0x00058146) cell_fmradio_pane

0xbbe6,	// (0x00057f9f) cell_fmradio_pane_g1_ParamLimits

0xbbe6,	// (0x00057f9f) cell_fmradio_pane_g1

0xaaf2,	// (0x00056eab) grid_highlight_pane_cp011

0xbda0,	// (0x00058159) poc_content_pane_ParamLimits

0xbda0,	// (0x00058159) poc_content_pane

0xbdb2,	// (0x0005816b) scroll_pane_cp019

0x3e19,	// (0x000501d2) popup_call_poc_act_window_ParamLimits

0x3e19,	// (0x000501d2) popup_call_poc_act_window

0x3e3d,	// (0x000501f6) popup_call_poc_inact_window_ParamLimits

0x3e3d,	// (0x000501f6) popup_call_poc_inact_window

0xf599,	// (0x0005b952) bg_popup_call_poc_act_pane_g

0xcc8a,	// (0x00059043) bg_popup_call_poc_inact_pane_g1

0xcc92,	// (0x0005904b) bg_popup_call_poc_inact_pane_g2

0xbdba,	// (0x00058173) popup_call_poc_act_window_g2

0xcc9a,	// (0x00059053) bg_popup_call_poc_inact_pane_g3

0xcca2,	// (0x0005905b) bg_popup_call_poc_inact_pane_g4

0xccaa,	// (0x00059063) bg_popup_call_poc_inact_pane_g5

0xbdc2,	// (0x0005817b) popup_call_poc_act_window_t1_ParamLimits

0xbdc2,	// (0x0005817b) popup_call_poc_act_window_t1

0xbdea,	// (0x000581a3) popup_call_poc_act_window_t2_ParamLimits

0xbdea,	// (0x000581a3) popup_call_poc_act_window_t2

0xbe12,	// (0x000581cb) popup_call_poc_act_window_t3_ParamLimits

0xbe12,	// (0x000581cb) popup_call_poc_act_window_t3

0xbe3a,	// (0x000581f3) popup_call_poc_act_window_t4_ParamLimits

0xbe3a,	// (0x000581f3) popup_call_poc_act_window_t4

0x0003,

0xf507,	// (0x0005b8c0) popup_call_poc_act_window_t_ParamLimits

0xf507,	// (0x0005b8c0) popup_call_poc_act_window_t

0xccb2,	// (0x0005906b) bg_popup_call_poc_inact_pane_g6

0xccba,	// (0x00059073) bg_popup_call_poc_inact_pane_g7

0xccc2,	// (0x0005907b) bg_popup_call_poc_inact_pane_g8

0xbe4c,	// (0x00058205) popup_call_poc_inact_window_g2

0xccca,	// (0x00059083) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf586,	// (0x0005b93f) bg_popup_call_poc_inact_pane_g

0xbe54,	// (0x0005820d) popup_call_poc_inact_window_t1_ParamLimits

0xbe54,	// (0x0005820d) popup_call_poc_inact_window_t1

0xbe69,	// (0x00058222) popup_call_poc_inact_window_t2_ParamLimits

0xbe69,	// (0x00058222) popup_call_poc_inact_window_t2

0xbe7e,	// (0x00058237) popup_call_poc_inact_window_t3_ParamLimits

0xbe7e,	// (0x00058237) popup_call_poc_inact_window_t3

0x0002,

0xf510,	// (0x0005b8c9) popup_call_poc_inact_window_t_ParamLimits

0xf510,	// (0x0005b8c9) popup_call_poc_inact_window_t

0xce4f,	// (0x00059208) context_pane_ParamLimits

0x466c,	// (0x00050a25) signal_pane_ParamLimits

0xba44,	// (0x00057dfd) main_call2_pane

0xa141,	// (0x000564fa) popup_phob_thumbnail2_window_ParamLimits

0xa141,	// (0x000564fa) popup_phob_thumbnail2_window

0xa0d2,	// (0x0005648b) aid_hotspot_pointer_arrow_pane

0xa0da,	// (0x00056493) aid_hotspot_pointer_hand_pane

0x4186,	// (0x0005053f) phob_pre_status_pane_g5

0x1f35,	// (0x0004e2ee) cams_zoom_pane_ParamLimits

0x1f44,	// (0x0004e2fd) image_vga_pane_ParamLimits

0x1f5e,	// (0x0004e317) main_camera_pane_g1_ParamLimits

0x1f70,	// (0x0004e329) main_camera_pane_g2_ParamLimits

0x1f80,	// (0x0004e339) main_camera_pane_g3_ParamLimits

0x1f90,	// (0x0004e349) main_camera_pane_g4_ParamLimits

0x1fa0,	// (0x0004e359) main_camera_pane_g5_ParamLimits

0x1fb0,	// (0x0004e369) main_camera_pane_g6_ParamLimits

0x1fc2,	// (0x0004e37b) main_camera_pane_g7_ParamLimits

0xf20f,	// (0x0005b5c8) main_camera_pane_g_ParamLimits

0x1fd2,	// (0x0004e38b) main_camera_pane_t1_ParamLimits

0x1fe8,	// (0x0004e3a1) main_camera_pane_t2_ParamLimits

0xf220,	// (0x0005b5d9) main_camera_pane_t_ParamLimits

0xad4d,	// (0x00057106) bg_popup_preview_window_pane_cp01_ParamLimits

0xad4d,	// (0x00057106) bg_popup_preview_window_pane_cp01

0xbe93,	// (0x0005824c) popup_phob_thumbnail2_window_g1_ParamLimits

0xbe93,	// (0x0005824c) popup_phob_thumbnail2_window_g1

0xaaf2,	// (0x00056eab) call2_cli_visual_pane

0x3e71,	// (0x0005022a) popup_call2_audio_conf_window_ParamLimits

0x3e71,	// (0x0005022a) popup_call2_audio_conf_window

0x3e91,	// (0x0005024a) popup_call2_audio_first_window_ParamLimits

0x3e91,	// (0x0005024a) popup_call2_audio_first_window

0x3f27,	// (0x000502e0) popup_call2_audio_in_window_ParamLimits

0x3f27,	// (0x000502e0) popup_call2_audio_in_window

0x3f6f,	// (0x00050328) popup_call2_audio_out_window_ParamLimits

0x3f6f,	// (0x00050328) popup_call2_audio_out_window

0x3fd9,	// (0x00050392) popup_call2_audio_second_window_ParamLimits

0x3fd9,	// (0x00050392) popup_call2_audio_second_window

0x403f,	// (0x000503f8) popup_call2_audio_wait_window_ParamLimits

0x403f,	// (0x000503f8) popup_call2_audio_wait_window

0xaaf2,	// (0x00056eab) bg_popup_call2_act_pane_cp03

0xad2f,	// (0x000570e8) list_conf_pane_cp

0xbe9f,	// (0x00058258) popup_call2_audio_conf_window_t1

0xb72d,	// (0x00057ae6) list_single_graphic_popup_conf2_pane_ParamLimits

0xb72d,	// (0x00057ae6) list_single_graphic_popup_conf2_pane

0xb740,	// (0x00057af9) list_highlight_pane_cp04

0xbead,	// (0x00058266) list_single_graphic_popup_conf2_pane_g1

0xb751,	// (0x00057b0a) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf517,	// (0x0005b8d0) list_single_graphic_popup_conf2_pane_g

0xbeb7,	// (0x00058270) list_single_graphic_popup_conf2_pane_t1

0xbec5,	// (0x0005827e) bg_popup_call2_act_pane_cp01_ParamLimits

0xbec5,	// (0x0005827e) bg_popup_call2_act_pane_cp01

0xbf4f,	// (0x00058308) call_type_pane_cp05_ParamLimits

0xbf4f,	// (0x00058308) call_type_pane_cp05

0xbfa3,	// (0x0005835c) popup_call2_audio_second_window_g1_ParamLimits

0xbfa3,	// (0x0005835c) popup_call2_audio_second_window_g1

0xbff7,	// (0x000583b0) popup_call2_audio_second_window_g2_ParamLimits

0xbff7,	// (0x000583b0) popup_call2_audio_second_window_g2

0x0002,

0xf51c,	// (0x0005b8d5) popup_call2_audio_second_window_g_ParamLimits

0xf51c,	// (0x0005b8d5) popup_call2_audio_second_window_g

0xc05c,	// (0x00058415) popup_call2_audio_second_window_t1_ParamLimits

0xc05c,	// (0x00058415) popup_call2_audio_second_window_t1

0xc117,	// (0x000584d0) popup_call2_audio_second_window_t2_ParamLimits

0xc117,	// (0x000584d0) popup_call2_audio_second_window_t2

0xc16a,	// (0x00058523) popup_call2_audio_second_window_t3_ParamLimits

0xc16a,	// (0x00058523) popup_call2_audio_second_window_t3

0x0003,

0xf523,	// (0x0005b8dc) popup_call2_audio_second_window_t_ParamLimits

0xf523,	// (0x0005b8dc) popup_call2_audio_second_window_t

0xaaf2,	// (0x00056eab) bg_popup_call2_in_pane_cp02

0xaafc,	// (0x00056eb5) call_type_pane_cp04

0xab04,	// (0x00056ebd) popup_call2_audio_wait_window_g1

0xab0c,	// (0x00056ec5) popup_call2_audio_wait_window_g2

0x0001,

0xf0fc,	// (0x0005b4b5) popup_call2_audio_wait_window_g

0xab14,	// (0x00056ecd) popup_call2_audio_wait_window_t3

0xc25d,	// (0x00058616) bg_popup_call2_act_pane_ParamLimits

0xc25d,	// (0x00058616) bg_popup_call2_act_pane

0xc31d,	// (0x000586d6) call_type_pane_cp03_ParamLimits

0xc31d,	// (0x000586d6) call_type_pane_cp03

0xc381,	// (0x0005873a) popup_call2_audio_first_window_g1_ParamLimits

0xc381,	// (0x0005873a) popup_call2_audio_first_window_g1

0xc3f1,	// (0x000587aa) popup_call2_audio_first_window_g2_ParamLimits

0xc3f1,	// (0x000587aa) popup_call2_audio_first_window_g2

0xbb03,	// (0x00057ebc) popup_call2_audio_first_window_g3_ParamLimits

0xbb03,	// (0x00057ebc) popup_call2_audio_first_window_g3

0x0004,

0xf52c,	// (0x0005b8e5) popup_call2_audio_first_window_g_ParamLimits

0xf52c,	// (0x0005b8e5) popup_call2_audio_first_window_g

0xc4cf,	// (0x00058888) popup_call2_audio_first_window_t1_ParamLimits

0xc4cf,	// (0x00058888) popup_call2_audio_first_window_t1

0xc5d2,	// (0x0005898b) popup_call2_audio_first_window_t4_ParamLimits

0xc5d2,	// (0x0005898b) popup_call2_audio_first_window_t4

0xc6b5,	// (0x00058a6e) popup_call2_audio_first_window_t5_ParamLimits

0xc6b5,	// (0x00058a6e) popup_call2_audio_first_window_t5

0x0003,

0xf537,	// (0x0005b8f0) popup_call2_audio_first_window_t_ParamLimits

0xf537,	// (0x0005b8f0) popup_call2_audio_first_window_t

0xad45,	// (0x000570fe) bg_popup_call2_act_pane_g1

0xcd22,	// (0x000590db) popup_cale_lunar_info_window_t1

0xcd30,	// (0x000590e9) popup_cale_lunar_info_window_t2

0xcd3e,	// (0x000590f7) popup_cale_lunar_info_window_t3

0xaaf2,	// (0x00056eab) bg_popup_call2_bubble_pane

0xc7b6,	// (0x00058b6f) bg_popup_call2_in_pane_cp01_ParamLimits

0xc7b6,	// (0x00058b6f) bg_popup_call2_in_pane_cp01

0x9e00,	// (0x000561b9) call_type_pane_cp02

0xc7fe,	// (0x00058bb7) popup_call2_audio_out_window_g1_ParamLimits

0xc7fe,	// (0x00058bb7) popup_call2_audio_out_window_g1

0xc82a,	// (0x00058be3) popup_call2_audio_out_window_g2_ParamLimits

0xc82a,	// (0x00058be3) popup_call2_audio_out_window_g2

0xc852,	// (0x00058c0b) popup_call2_audio_out_window_g3_ParamLimits

0xc852,	// (0x00058c0b) popup_call2_audio_out_window_g3

0x0003,

0xf540,	// (0x0005b8f9) popup_call2_audio_out_window_g_ParamLimits

0xf540,	// (0x0005b8f9) popup_call2_audio_out_window_g

0xc88d,	// (0x00058c46) popup_call2_audio_out_window_t1_ParamLimits

0xc88d,	// (0x00058c46) popup_call2_audio_out_window_t1

0xc8ec,	// (0x00058ca5) popup_call2_audio_out_window_t2_ParamLimits

0xc8ec,	// (0x00058ca5) popup_call2_audio_out_window_t2

0xc940,	// (0x00058cf9) popup_call2_audio_out_window_t3_ParamLimits

0xc940,	// (0x00058cf9) popup_call2_audio_out_window_t3

0xc956,	// (0x00058d0f) popup_call2_audio_out_window_t4_ParamLimits

0xc956,	// (0x00058d0f) popup_call2_audio_out_window_t4

0xc96c,	// (0x00058d25) popup_call2_audio_out_window_t5_ParamLimits

0xc96c,	// (0x00058d25) popup_call2_audio_out_window_t5

0x0005,

0xf549,	// (0x0005b902) popup_call2_audio_out_window_t_ParamLimits

0xf549,	// (0x0005b902) popup_call2_audio_out_window_t

0xc9d0,	// (0x00058d89) bg_popup_call2_in_pane_ParamLimits

0xc9d0,	// (0x00058d89) bg_popup_call2_in_pane

0xca2c,	// (0x00058de5) popup_call2_audio_in_window_g1_ParamLimits

0xca2c,	// (0x00058de5) popup_call2_audio_in_window_g1

0xca64,	// (0x00058e1d) popup_call2_audio_in_window_g2_ParamLimits

0xca64,	// (0x00058e1d) popup_call2_audio_in_window_g2

0xca9c,	// (0x00058e55) popup_call2_audio_in_window_g3_ParamLimits

0xca9c,	// (0x00058e55) popup_call2_audio_in_window_g3

0x0003,

0xf556,	// (0x0005b90f) popup_call2_audio_in_window_g_ParamLimits

0xf556,	// (0x0005b90f) popup_call2_audio_in_window_g

0xcaf4,	// (0x00058ead) popup_call2_audio_in_window_t1_ParamLimits

0xcaf4,	// (0x00058ead) popup_call2_audio_in_window_t1

0xcb74,	// (0x00058f2d) popup_call2_audio_in_window_t2_ParamLimits

0xcb74,	// (0x00058f2d) popup_call2_audio_in_window_t2

0xcbf4,	// (0x00058fad) popup_call2_audio_in_window_t3_ParamLimits

0xcbf4,	// (0x00058fad) popup_call2_audio_in_window_t3

0xcc0e,	// (0x00058fc7) popup_call2_audio_in_window_t4_ParamLimits

0xcc0e,	// (0x00058fc7) popup_call2_audio_in_window_t4

0xcc20,	// (0x00058fd9) popup_call2_audio_in_window_t5_ParamLimits

0xcc20,	// (0x00058fd9) popup_call2_audio_in_window_t5

0xcc35,	// (0x00058fee) popup_call2_audio_in_window_t6_ParamLimits

0xcc35,	// (0x00058fee) popup_call2_audio_in_window_t6

0x0005,

0xf55f,	// (0x0005b918) popup_call2_audio_in_window_t_ParamLimits

0xf55f,	// (0x0005b918) popup_call2_audio_in_window_t

0xad45,	// (0x000570fe) bg_popup_call2_in_pane_g1

0xcd4c,	// (0x00059105) popup_cale_lunar_info_window_t4

0x0003,

0xf5c7,	// (0x0005b980) popup_cale_lunar_info_window_t

0xad4d,	// (0x00057106) bg_popup_call2_rect_pane_ParamLimits

0xad4d,	// (0x00057106) bg_popup_call2_rect_pane

0xaaf2,	// (0x00056eab) call2_cli_visual_graphic_pane

0xaaf2,	// (0x00056eab) call2_cli_visual_text_pane

0xa168,	// (0x00056521) smil_status_volume_pane_g3

0x0002,

0xae67,	// (0x00057220) call2_cli_visual_graphic_pane_g1

0xae67,	// (0x00057220) call2_cli_visual_graphic_pane_g2

0xae67,	// (0x00057220) call2_cli_visual_graphic_pane_g3

0x0002,

0xf56c,	// (0x0005b925) call2_cli_visual_graphic_pane_g

0xcc4a,	// (0x00059003) bg_popup_call2_rect_pane_g1

0xaef3,	// (0x000572ac) bg_popup_call2_rect_pane_g2

0xcc52,	// (0x0005900b) bg_popup_call2_rect_pane_g3

0xcc5a,	// (0x00059013) bg_popup_call2_rect_pane_g4

0xcc62,	// (0x0005901b) bg_popup_call2_rect_pane_g5

0xcc6a,	// (0x00059023) bg_popup_call2_rect_pane_g6

0xcc72,	// (0x0005902b) bg_popup_call2_rect_pane_g7

0xcc7a,	// (0x00059033) bg_popup_call2_rect_pane_g8

0xcc82,	// (0x0005903b) bg_popup_call2_rect_pane_g9

0x0008,

0xf573,	// (0x0005b92c) bg_popup_call2_rect_pane_g

0xcc8a,	// (0x00059043) bg_popup_call2_bubble_pane_g1

0xcc92,	// (0x0005904b) bg_popup_call2_bubble_pane_g2

0xcc9a,	// (0x00059053) bg_popup_call2_bubble_pane_g3

0xcca2,	// (0x0005905b) bg_popup_call2_bubble_pane_g4

0xccaa,	// (0x00059063) bg_popup_call2_bubble_pane_g5

0xccb2,	// (0x0005906b) bg_popup_call2_bubble_pane_g6

0xccba,	// (0x00059073) bg_popup_call2_bubble_pane_g7

0xccc2,	// (0x0005907b) bg_popup_call2_bubble_pane_g8

0xccca,	// (0x00059083) bg_popup_call2_bubble_pane_g9

0x0008,

0xf586,	// (0x0005b93f) bg_popup_call2_bubble_pane_g

0x18c5,	// (0x0004dc7e) aid_cale_week_size_cell_pane

0x1ffe,	// (0x0004e3b7) aid_cams_cif_uncrop_pane_ParamLimits

0x1ffe,	// (0x0004e3b7) aid_cams_cif_uncrop_pane

0x21ae,	// (0x0004e567) aid_cams_size_cell_ParamLimits

0x21ae,	// (0x0004e567) aid_cams_size_cell

0x21c2,	// (0x0004e57b) grid_cams_pane_ParamLimits

0x21dc,	// (0x0004e595) linegrid_cams_pane_ParamLimits

0x22c3,	// (0x0004e67c) call_video_pane_t1

0x22e1,	// (0x0004e69a) call_video_pane_t2

0x0001,

0xf273,	// (0x0005b62c) call_video_pane_t

0x270d,	// (0x0004eac6) aid_cale_month_size_cell_pane_ParamLimits

0x270d,	// (0x0004eac6) aid_cale_month_size_cell_pane

0xf610,	// (0x0005b9c9) smil_status_volume_pane_g

0xa175,	// (0x0005652e) volume_smil_pane_ParamLimits

0x9cbb,	// (0x00056074) aid_popup2_width_pane

0x182d,	// (0x0004dbe6) cell_qdial_pane_g4_ParamLimits

0x182d,	// (0x0004dbe6) cell_qdial_pane_g4

0x34ed,	// (0x0004f8a6) aid_blid_cardinal_pane_ParamLimits

0x34f9,	// (0x0004f8b2) aid_blid_destination_pane_ParamLimits

0x34f9,	// (0x0004f8b2) aid_blid_destination_pane

0xad4d,	// (0x00057106) bg_popup_call_poc_act_pane_ParamLimits

0xad4d,	// (0x00057106) bg_popup_call_poc_act_pane

0xad4d,	// (0x00057106) bg_popup_call_poc_inact_pane_ParamLimits

0xad4d,	// (0x00057106) bg_popup_call_poc_inact_pane

0xccd2,	// (0x0005908b) bg_popup_call_poc_act_pane_g1

0xccda,	// (0x00059093) bg_popup_call_poc_act_pane_g2

0xcce2,	// (0x0005909b) bg_popup_call_poc_act_pane_g3

0xcca2,	// (0x0005905b) bg_popup_call_poc_act_pane_g4

0xccaa,	// (0x00059063) bg_popup_call_poc_act_pane_g5

0xccea,	// (0x000590a3) bg_popup_call_poc_act_pane_g6

0xccba,	// (0x00059073) bg_popup_call_poc_act_pane_g7

0xccf2,	// (0x000590ab) bg_popup_call_poc_act_pane_g8

0xaaf2,	// (0x00056eab) main_usb_pane

0xa11c,	// (0x000564d5) popup_cale_lunar_info_window

0x25b9,	// (0x0004e972) im_reading_pane_t1_ParamLimits

0xb0d1,	// (0x0005748a) list_im_pane_ParamLimits

0xb0e2,	// (0x0005749b) scroll_pane_cp07_ParamLimits

0xaaf2,	// (0x00056eab) grid_highlight_pane_cp012

0xad4d,	// (0x00057106) mup_scale_pane_ParamLimits

0xbbe6,	// (0x00057f9f) main_usb_pane_g1_ParamLimits

0xbbe6,	// (0x00057f9f) main_usb_pane_g1

0x409b,	// (0x00050454) main_usb_pane_g2_ParamLimits

0x409b,	// (0x00050454) main_usb_pane_g2

0x0001,

0xf5b0,	// (0x0005b969) main_usb_pane_g_ParamLimits

0xf5b0,	// (0x0005b969) main_usb_pane_g

0x40b1,	// (0x0005046a) main_usb_pane_t1_ParamLimits

0x40b1,	// (0x0005046a) main_usb_pane_t1

0x40c3,	// (0x0005047c) main_usb_pane_t2_ParamLimits

0x40c3,	// (0x0005047c) main_usb_pane_t2

0x40d5,	// (0x0005048e) main_usb_pane_t3_ParamLimits

0x40d5,	// (0x0005048e) main_usb_pane_t3

0x40e7,	// (0x000504a0) main_usb_pane_t4_ParamLimits

0x40e7,	// (0x000504a0) main_usb_pane_t4

0x40f9,	// (0x000504b2) main_usb_pane_t5_ParamLimits

0x40f9,	// (0x000504b2) main_usb_pane_t5

0x410b,	// (0x000504c4) main_usb_pane_t6_ParamLimits

0x410b,	// (0x000504c4) main_usb_pane_t6

0x0005,

0xf5b5,	// (0x0005b96e) main_usb_pane_t_ParamLimits

0x349c,	// (0x0004f855) aid_text_placing

0x34a5,	// (0x0004f85e) main_location2_pane_t1_ParamLimits

0x34b7,	// (0x0004f870) main_location2_pane_t2_ParamLimits

0x34c9,	// (0x0004f882) main_location2_pane_t3_ParamLimits

0x34db,	// (0x0004f894) main_location2_pane_t4_ParamLimits

0x34db,	// (0x0004f894) main_location2_pane_t4

0xf3d4,	// (0x0005b78d) main_location2_pane_t_ParamLimits

0xad89,	// (0x00057142) find_pinb_pane_g2_ParamLimits

0xad89,	// (0x00057142) find_pinb_pane_g2

0x0001,

0xf122,	// (0x0005b4db) find_pinb_pane_g_ParamLimits

0xf122,	// (0x0005b4db) find_pinb_pane_g

0xad95,	// (0x0005714e) find_pinb_pane_t1_ParamLimits

0xada7,	// (0x00057160) find_pinb_pane_t2_ParamLimits

0xf127,	// (0x0005b4e0) find_pinb_pane_t_ParamLimits

0xaaf2,	// (0x00056eab) main_call3_pane

0x2bcc,	// (0x0004ef85) cale_month_day_heading_pane_t1_ParamLimits

0x2c52,	// (0x0004f00b) cale_month_day_heading_pane_t2_ParamLimits

0x2ce3,	// (0x0004f09c) cale_month_day_heading_pane_t3_ParamLimits

0x2d74,	// (0x0004f12d) cale_month_day_heading_pane_t4_ParamLimits

0x2e09,	// (0x0004f1c2) cale_month_day_heading_pane_t5_ParamLimits

0x2eaa,	// (0x0004f263) cale_month_day_heading_pane_t6_ParamLimits

0x2f4b,	// (0x0004f304) cale_month_day_heading_pane_t7_ParamLimits

0xf2ab,	// (0x0005b664) cale_month_day_heading_pane_t_ParamLimits

0xb32c,	// (0x000576e5) smil_status_volume_pane

0x3b96,	// (0x0004ff4f) postcard_address_pane_ParamLimits

0x3b96,	// (0x0004ff4f) postcard_address_pane

0x3ba8,	// (0x0004ff61) postcard_message_pane_ParamLimits

0x3ba8,	// (0x0004ff61) postcard_message_pane

0x4079,	// (0x00050432) call2_cli_visual_pane_t1_ParamLimits

0x4079,	// (0x00050432) call2_cli_visual_pane_t1

0x4899,	// (0x00050c52) postcard_message_pane_t1_ParamLimits

0x4899,	// (0x00050c52) postcard_message_pane_t1

0x4882,	// (0x00050c3b) postcard_address_pane_t1_ParamLimits

0x4882,	// (0x00050c3b) postcard_address_pane_t1

0x486e,	// (0x00050c27) popup_call3_audio_in_window_ParamLimits

0x486e,	// (0x00050c27) popup_call3_audio_in_window

0x46f9,	// (0x00050ab2) bg_popup_call3_in_pane_ParamLimits

0x46f9,	// (0x00050ab2) bg_popup_call3_in_pane

0x476f,	// (0x00050b28) popup_call3_audio_in_window_g1_ParamLimits

0x476f,	// (0x00050b28) popup_call3_audio_in_window_g1

0x478f,	// (0x00050b48) popup_call3_audio_in_window_g2_ParamLimits

0x478f,	// (0x00050b48) popup_call3_audio_in_window_g2

0x47af,	// (0x00050b68) popup_call3_audio_in_window_g3_ParamLimits

0x47af,	// (0x00050b68) popup_call3_audio_in_window_g3

0x0003,

0xf617,	// (0x0005b9d0) popup_call3_audio_in_window_g_ParamLimits

0xf617,	// (0x0005b9d0) popup_call3_audio_in_window_g

0x47e0,	// (0x00050b99) popup_call3_audio_in_window_t1_ParamLimits

0x47e0,	// (0x00050b99) popup_call3_audio_in_window_t1

0x481e,	// (0x00050bd7) popup_call3_audio_in_window_t2_ParamLimits

0x481e,	// (0x00050bd7) popup_call3_audio_in_window_t2

0x485c,	// (0x00050c15) popup_call3_audio_in_window_t3_ParamLimits

0x485c,	// (0x00050c15) popup_call3_audio_in_window_t3

0x0002,

0xf620,	// (0x0005b9d9) popup_call3_audio_in_window_t_ParamLimits

0xf620,	// (0x0005b9d9) popup_call3_audio_in_window_t

0xba44,	// (0x00057dfd) bg_popup_call3_rect_pane

0xcc4a,	// (0x00059003) bg_popup_call3_rect_pane_g1

0xaef3,	// (0x000572ac) bg_popup_call3_rect_pane_g2

0xcc52,	// (0x0005900b) bg_popup_call3_rect_pane_g3

0xcc5a,	// (0x00059013) bg_popup_call3_rect_pane_g4

0xcc62,	// (0x0005901b) bg_popup_call3_rect_pane_g5

0xcc6a,	// (0x00059023) bg_popup_call3_rect_pane_g6

0xcc72,	// (0x0005902b) bg_popup_call3_rect_pane_g7

0x37dd,	// (0x0004fb96) mup_visualizer_osc_pane

0xbb11,	// (0x00057eca) mup_visualizer_spec_pane

0x4729,	// (0x00050ae2) call3_video_qcif_pane_ParamLimits

0x4729,	// (0x00050ae2) call3_video_qcif_pane

0x473c,	// (0x00050af5) call3_video_qcif_uncrop_pane_ParamLimits

0x473c,	// (0x00050af5) call3_video_qcif_uncrop_pane

0x474a,	// (0x00050b03) call3_video_subqcif_pane_ParamLimits

0x474a,	// (0x00050b03) call3_video_subqcif_pane

0x475e,	// (0x00050b17) call3_video_subqcif_uncrop_pane_ParamLimits

0x475e,	// (0x00050b17) call3_video_subqcif_uncrop_pane

0x47cf,	// (0x00050b88) popup_call3_audio_in_window_g4_ParamLimits

0x47cf,	// (0x00050b88) popup_call3_audio_in_window_g4

0x46e8,	// (0x00050aa1) mup_spec_half_pane

0x46f1,	// (0x00050aaa) mup_spec_half_pane_cp

0xceaf,	// (0x00059268) mup_osc_middle_pane

0xceb8,	// (0x00059271) mup_visualizer_osc_pane_g1

0x46c8,	// (0x00050a81) mup_spec_bar_pane_ParamLimits

0x46c8,	// (0x00050a81) mup_spec_bar_pane

0xce9c,	// (0x00059255) mup_spec_bar_pane_g1

0xcea6,	// (0x0005925f) mup_spec_bar_pane_g2

0x0001,

0xf60b,	// (0x0005b9c4) mup_spec_bar_pane_g

0x18c5,	// (0x0004dc7e) aid_cale_week_size_cell_pane_ParamLimits

0x18df,	// (0x0004dc98) bg_cale_heading_pane_ParamLimits

0xaf30,	// (0x000572e9) bg_cale_pane_cp01_ParamLimits

0x18f7,	// (0x0004dcb0) cale_week_corner_pane_ParamLimits

0x1916,	// (0x0004dccf) cale_week_day_heading_pane_ParamLimits

0x1933,	// (0x0004dcec) cale_week_scroll_pane_g1_ParamLimits

0x1946,	// (0x0004dcff) cale_week_scroll_pane_g2_ParamLimits

0x195e,	// (0x0004dd17) cale_week_scroll_pane_g3_ParamLimits

0x1976,	// (0x0004dd2f) cale_week_scroll_pane_g4_ParamLimits

0x198e,	// (0x0004dd47) cale_week_scroll_pane_g5_ParamLimits

0x19ae,	// (0x0004dd67) cale_week_scroll_pane_g6_ParamLimits

0x19ce,	// (0x0004dd87) cale_week_scroll_pane_g7_ParamLimits

0x19ee,	// (0x0004dda7) cale_week_scroll_pane_g8_ParamLimits

0x1a12,	// (0x0004ddcb) cale_week_scroll_pane_g9_ParamLimits

0x1a2a,	// (0x0004dde3) cale_week_scroll_pane_g10_ParamLimits

0x1a42,	// (0x0004ddfb) cale_week_scroll_pane_g11_ParamLimits

0x1a5a,	// (0x0004de13) cale_week_scroll_pane_g12_ParamLimits

0x1a72,	// (0x0004de2b) cale_week_scroll_pane_g13_ParamLimits

0x1a72,	// (0x0004de2b) cale_week_scroll_pane_g14_ParamLimits

0x1a72,	// (0x0004de2b) cale_week_scroll_pane_g15_ParamLimits

0xf1b3,	// (0x0005b56c) cale_week_scroll_pane_g_ParamLimits

0x1a8a,	// (0x0004de43) cale_week_time_pane_ParamLimits

0x1aae,	// (0x0004de67) grid_cale_week_pane_ParamLimits

0xaf4e,	// (0x00057307) listscroll_cale_week_pane_t1

0xaf60,	// (0x00057319) scroll_pane_cp08_ParamLimits

0x2762,	// (0x0004eb1b) cale_month_corner_pane_ParamLimits

0xb302,	// (0x000576bb) cale_month_pane_t1

0x2b6a,	// (0x0004ef23) cale_month_week_pane_ParamLimits

0x32f8,	// (0x0004f6b1) popup_call_status_window_g1_ParamLimits

0x330c,	// (0x0004f6c5) popup_call_status_window_g2_ParamLimits

0x3320,	// (0x0004f6d9) popup_call_status_window_g3_ParamLimits

0xf35b,	// (0x0005b714) popup_call_status_window_g_ParamLimits

0xb6c0,	// (0x00057a79) aid_call2_pane

0x0477,	// (0x0004c830) msg_header_pane_g1

0x3b96,	// (0x0004ff4f) postcard_address2_pane_ParamLimits

0x3b96,	// (0x0004ff4f) postcard_address2_pane

0x3ba8,	// (0x0004ff61) postcard_message2_pane_ParamLimits

0x3ba8,	// (0x0004ff61) postcard_message2_pane

0x467a,	// (0x00050a33) message2_row_pane_ParamLimits

0x467a,	// (0x00050a33) message2_row_pane

0x4696,	// (0x00050a4f) address2_row_pane_ParamLimits

0x4696,	// (0x00050a4f) address2_row_pane

0xce6a,	// (0x00059223) postcard_message2_row_pane_g1

0xce72,	// (0x0005922b) postcard_message2_row_pane_t1

0xce6a,	// (0x00059223) address2_row_pane_g1

0xce72,	// (0x0005922b) address2_row_pane_t1

0x1ea1,	// (0x0004e25a) aid_size_cell_vorec

0xaaf2,	// (0x00056eab) main_rss_pane

0x46a9,	// (0x00050a62) rss_list_single_pane_ParamLimits

0x46a9,	// (0x00050a62) rss_list_single_pane

0xce80,	// (0x00059239) rss_list_single_pane_t1

0xce8e,	// (0x00059247) rss_list_single_pane_t2

0x0001,

0xf606,	// (0x0005b9bf) rss_list_single_pane_t

0xaaf2,	// (0x00056eab) main_camera2_pane

0xaaf2,	// (0x00056eab) main_video2_pane

0x4912,	// (0x00050ccb) cams_zoom_pane_cp2_ParamLimits

0x4912,	// (0x00050ccb) cams_zoom_pane_cp2

0x4932,	// (0x00050ceb) image2_vga_pane_ParamLimits

0x4932,	// (0x00050ceb) image2_vga_pane

0x4983,	// (0x00050d3c) main_camera2_pane_g1_ParamLimits

0x4983,	// (0x00050d3c) main_camera2_pane_g1

0x49a3,	// (0x00050d5c) main_camera2_pane_g2_ParamLimits

0x49a3,	// (0x00050d5c) main_camera2_pane_g2

0x49c3,	// (0x00050d7c) main_camera2_pane_g3_ParamLimits

0x49c3,	// (0x00050d7c) main_camera2_pane_g3

0x49e3,	// (0x00050d9c) main_camera2_pane_g4_ParamLimits

0x49e3,	// (0x00050d9c) main_camera2_pane_g4

0x4a03,	// (0x00050dbc) main_camera2_pane_g5_ParamLimits

0x4a03,	// (0x00050dbc) main_camera2_pane_g5

0x4a23,	// (0x00050ddc) main_camera2_pane_g6_ParamLimits

0x4a23,	// (0x00050ddc) main_camera2_pane_g6

0x4a43,	// (0x00050dfc) main_camera2_pane_g7_ParamLimits

0x4a43,	// (0x00050dfc) main_camera2_pane_g7

0x4a63,	// (0x00050e1c) main_camera2_pane_g8_ParamLimits

0x4a63,	// (0x00050e1c) main_camera2_pane_g8

0x0008,

0xf627,	// (0x0005b9e0) main_camera2_pane_g_ParamLimits

0xf627,	// (0x0005b9e0) main_camera2_pane_g

0x4aa3,	// (0x00050e5c) main_camera2_pane_t1_ParamLimits

0x4aa3,	// (0x00050e5c) main_camera2_pane_t1

0x4ad8,	// (0x00050e91) main_camera2_pane_t2_ParamLimits

0x4ad8,	// (0x00050e91) main_camera2_pane_t2

0x4afe,	// (0x00050eb7) main_camera2_pane_t3_ParamLimits

0x4afe,	// (0x00050eb7) main_camera2_pane_t3

0x4b5c,	// (0x00050f15) main_camera2_pane_t4_ParamLimits

0x4b5c,	// (0x00050f15) main_camera2_pane_t4

0x0006,

0xf63a,	// (0x0005b9f3) main_camera2_pane_t_ParamLimits

0xf63a,	// (0x0005b9f3) main_camera2_pane_t

0x4bee,	// (0x00050fa7) cams_zoom_pane_cp4_ParamLimits

0x4bee,	// (0x00050fa7) cams_zoom_pane_cp4

0x4c04,	// (0x00050fbd) image2_cif_pane_ParamLimits

0x4c04,	// (0x00050fbd) image2_cif_pane

0x4c2f,	// (0x00050fe8) image2_subqcif_pane_ParamLimits

0x4c2f,	// (0x00050fe8) image2_subqcif_pane

0x4c49,	// (0x00051002) main_video2_pane_g1_ParamLimits

0x4c49,	// (0x00051002) main_video2_pane_g1

0x4c63,	// (0x0005101c) main_video2_pane_g2_ParamLimits

0x4c63,	// (0x0005101c) main_video2_pane_g2

0x4c79,	// (0x00051032) main_video2_pane_g3_ParamLimits

0x4c79,	// (0x00051032) main_video2_pane_g3

0x4c8f,	// (0x00051048) main_video2_pane_g4_ParamLimits

0x4c8f,	// (0x00051048) main_video2_pane_g4

0x4ca5,	// (0x0005105e) main_video2_pane_g5_ParamLimits

0x4ca5,	// (0x0005105e) main_video2_pane_g5

0x4cbb,	// (0x00051074) main_video2_pane_g6_ParamLimits

0x4cbb,	// (0x00051074) main_video2_pane_g6

0x0005,

0xf649,	// (0x0005ba02) main_video2_pane_g_ParamLimits

0xf649,	// (0x0005ba02) main_video2_pane_g

0x4cd5,	// (0x0005108e) main_video2_pane_t1_ParamLimits

0x4cd5,	// (0x0005108e) main_video2_pane_t1

0x4cf9,	// (0x000510b2) main_video2_pane_t2_ParamLimits

0x4cf9,	// (0x000510b2) main_video2_pane_t2

0x4d47,	// (0x00051100) main_video2_pane_t3_ParamLimits

0x4d47,	// (0x00051100) main_video2_pane_t3

0x0002,

0xf656,	// (0x0005ba0f) main_video2_pane_t_ParamLimits

0xf656,	// (0x0005ba0f) main_video2_pane_t

0x41c6,	// (0x0005057f) call_muted_g2

0x0001,

0xf5f8,	// (0x0005b9b1) call_muted_g

0xaaf2,	// (0x00056eab) main_mup2_pane

0x4d8b,	// (0x00051144) main_mup2_pane_g1_ParamLimits

0x4d8b,	// (0x00051144) main_mup2_pane_g1

0x4d97,	// (0x00051150) main_mup2_pane_g2_ParamLimits

0x4d97,	// (0x00051150) main_mup2_pane_g2

0xa1e3,	// (0x0005659c) main_mup_pane_g13_cp1

0xa1eb,	// (0x000565a4) mup_volume_pane_cp1

0x4db3,	// (0x0005116c) main_mup2_pane_g4_ParamLimits

0x4db3,	// (0x0005116c) main_mup2_pane_g4

0x4dc5,	// (0x0005117e) main_mup2_pane_g5_ParamLimits

0x4dc5,	// (0x0005117e) main_mup2_pane_g5

0x4dd7,	// (0x00051190) main_mup2_pane_g6_ParamLimits

0x4dd7,	// (0x00051190) main_mup2_pane_g6

0x4de9,	// (0x000511a2) main_mup2_pane_g7_ParamLimits

0x4de9,	// (0x000511a2) main_mup2_pane_g7

0x0006,

0xf65d,	// (0x0005ba16) main_mup2_pane_g_ParamLimits

0xf65d,	// (0x0005ba16) main_mup2_pane_g

0x4e01,	// (0x000511ba) main_mup2_pane_t1_ParamLimits

0x4e01,	// (0x000511ba) main_mup2_pane_t1

0x4e17,	// (0x000511d0) main_mup2_pane_t2_ParamLimits

0x4e17,	// (0x000511d0) main_mup2_pane_t2

0x4e2d,	// (0x000511e6) main_mup2_pane_t3_ParamLimits

0x4e2d,	// (0x000511e6) main_mup2_pane_t3

0x4e43,	// (0x000511fc) main_mup2_pane_t4_ParamLimits

0x4e43,	// (0x000511fc) main_mup2_pane_t4

0x4e5b,	// (0x00051214) main_mup2_pane_t5_ParamLimits

0x4e5b,	// (0x00051214) main_mup2_pane_t5

0x4e73,	// (0x0005122c) main_mup2_pane_t6_ParamLimits

0x4e73,	// (0x0005122c) main_mup2_pane_t6

0x0005,

0xf66c,	// (0x0005ba25) main_mup2_pane_t_ParamLimits

0xf66c,	// (0x0005ba25) main_mup2_pane_t

0x4ea3,	// (0x0005125c) mup2_visualizer_pane_ParamLimits

0x4ea3,	// (0x0005125c) mup2_visualizer_pane

0x4ed1,	// (0x0005128a) mup_progress_pane_cp_ParamLimits

0x4ed1,	// (0x0005128a) mup_progress_pane_cp

0xa1ce,	// (0x00056587) mup_volume_pane_cp_ParamLimits

0xa1ce,	// (0x00056587) mup_volume_pane_cp

0x4ee5,	// (0x0005129e) mup2_visualizer_pane_g1_ParamLimits

0x4ee5,	// (0x0005129e) mup2_visualizer_pane_g1

0xceef,	// (0x000592a8) mup2_visualizer_pane_g2_ParamLimits

0xceef,	// (0x000592a8) mup2_visualizer_pane_g2

0x4efc,	// (0x000512b5) mup2_visualizer_pane_g3_ParamLimits

0x4efc,	// (0x000512b5) mup2_visualizer_pane_g3

0x0002,

0xf679,	// (0x0005ba32) mup2_visualizer_pane_g_ParamLimits

0xf679,	// (0x0005ba32) mup2_visualizer_pane_g

0xbd2f,	// (0x000580e8) aid_size_cell_fmradio

0x4378,	// (0x00050731) aid_height_parent_landcape

0xb160,	// (0x00057519) wml_content_pane_cp

0xb168,	// (0x00057521) wml_tabs_pane

0xb171,	// (0x0005752a) popup_wml_miniature_window

0xb179,	// (0x00057532) scroll_pane_cp021

0xb18d,	// (0x00057546) wml_content_pane_comp8

0xaaf2,	// (0x00056eab) bg_popup_sub_pane_cp05

0xcf0d,	// (0x000592c6) popup_wml_miniature_window_g1

0xcf15,	// (0x000592ce) wml_miniature_view_pane

0x4f08,	// (0x000512c1) aid_size_wml_view

0x4f10,	// (0x000512c9) wml_miniature_view_pane_g1

0x4f19,	// (0x000512d2) wml_miniature_view_pane_g2

0x4f22,	// (0x000512db) wml_miniature_view_pane_g3

0x4f2a,	// (0x000512e3) wml_miniature_view_pane_g4

0x4f32,	// (0x000512eb) wml_miniature_view_pane_g5

0x4f3a,	// (0x000512f3) wml_miniature_view_pane_g6

0x4f42,	// (0x000512fb) wml_miniature_view_pane_g7

0x4f4a,	// (0x00051303) wml_miniature_view_pane_g8

0x0007,

0xf680,	// (0x0005ba39) wml_miniature_view_pane_g

0xcf1d,	// (0x000592d6) background_graphic_ParamLimits

0xcf1d,	// (0x000592d6) background_graphic

0xcf29,	// (0x000592e2) wml_tabs_2_pane

0xcf32,	// (0x000592eb) wml_tabs_3_pane_ParamLimits

0xcf32,	// (0x000592eb) wml_tabs_3_pane

0xcf44,	// (0x000592fd) wml_tabs_4_pane_ParamLimits

0xcf44,	// (0x000592fd) wml_tabs_4_pane

0xcf5a,	// (0x00059313) wml_tabs_5_pane_ParamLimits

0xcf5a,	// (0x00059313) wml_tabs_5_pane

0xcf74,	// (0x0005932d) wml_tabs_pane_g2_ParamLimits

0xcf74,	// (0x0005932d) wml_tabs_pane_g2

0xcf88,	// (0x00059341) wml_tabs_pane_g3_ParamLimits

0xcf88,	// (0x00059341) wml_tabs_pane_g3

0x4f52,	// (0x0005130b) wml_tabs_2_active_pane_ParamLimits

0x4f52,	// (0x0005130b) wml_tabs_2_active_pane

0x4f66,	// (0x0005131f) wml_tabs_2_passive_pane_ParamLimits

0x4f66,	// (0x0005131f) wml_tabs_2_passive_pane

0x4f7a,	// (0x00051333) wml_tabs_3_active_pane_cp_ParamLimits

0x4f7a,	// (0x00051333) wml_tabs_3_active_pane_cp

0x4f8f,	// (0x00051348) wml_tabs_3_passive_pane_ParamLimits

0x4f8f,	// (0x00051348) wml_tabs_3_passive_pane

0x4fa2,	// (0x0005135b) wml_tabs_3_passive_pane_cp_ParamLimits

0x4fa2,	// (0x0005135b) wml_tabs_3_passive_pane_cp

0x4fb9,	// (0x00051372) tabs_4_active_pane

0x4fc1,	// (0x0005137a) tabs_4_passive_pane

0x4fcb,	// (0x00051384) tabs_4_passive_pane_cp

0x4fd3,	// (0x0005138c) tabs_4_passive_pane_cp2

0x4093,	// (0x0005044c) aid_height_text

0x37b3,	// (0x0004fb6c) mup_volume_cont_pane_ParamLimits

0x37b3,	// (0x0004fb6c) mup_volume_cont_pane

0x14b1,	// (0x0004d86a) aid_size_cell_pinb

0x14bb,	// (0x0004d874) aid_size_list_pinb

0x4ebd,	// (0x00051276) mup2_volume_cont_pane_ParamLimits

0x4ebd,	// (0x00051276) mup2_volume_cont_pane

0xa1ba,	// (0x00056573) mup2_volume_cont_pane_g1_ParamLimits

0xa1ba,	// (0x00056573) mup2_volume_cont_pane_g1

0x1164,	// (0x0004d51d) aid_size_cell_touch_ParamLimits

0x1164,	// (0x0004d51d) aid_size_cell_touch

0x13a1,	// (0x0004d75a) touch_pane_ParamLimits

0x13a1,	// (0x0004d75a) touch_pane

0x9ca9,	// (0x00056062) main_rss2_pane

0xcfa5,	// (0x0005935e) listscroll_rss2_pane

0xcfba,	// (0x00059373) rss2_navigation_pane

0xcfc2,	// (0x0005937b) list_rss2_pane

0xb803,	// (0x00057bbc) scroll_pane_cp22

0xcfca,	// (0x00059383) rss2_navigation_pane_g1

0xcfd3,	// (0x0005938c) rss2_navigation_pane_g2

0xcfdb,	// (0x00059394) rss2_navigation_pane_g3

0x0002,

0xf691,	// (0x0005ba4a) rss2_navigation_pane_g

0xcfe3,	// (0x0005939c) rss2_navigation_pane_t1

0x4fdd,	// (0x00051396) rss2_list_single_pane_ParamLimits

0x4fdd,	// (0x00051396) rss2_list_single_pane

0xcff1,	// (0x000593aa) rss2_list_single_pane_t2

0xcfff,	// (0x000593b8) rss2_list_single_pane_t3_ParamLimits

0xcfff,	// (0x000593b8) rss2_list_single_pane_t3

0xd01c,	// (0x000593d5) rss2_list_single_pane_t4

0x31dd,	// (0x0004f596) smil_status_pane_g1

0xa939,	// (0x00056cf2) main_image2_pane_ParamLimits

0xa939,	// (0x00056cf2) main_image2_pane

0x4a83,	// (0x00050e3c) main_camera2_pane_g9_ParamLimits

0x4a83,	// (0x00050e3c) main_camera2_pane_g9

0x4bb1,	// (0x00050f6a) main_camera2_pane_t5_ParamLimits

0x4bb1,	// (0x00050f6a) main_camera2_pane_t5

0xa18a,	// (0x00056543) main_camera2_pane_t6_ParamLimits

0xa18a,	// (0x00056543) main_camera2_pane_t6

0x4ff2,	// (0x000513ab) main_image2_pane_g1_ParamLimits

0x4ff2,	// (0x000513ab) main_image2_pane_g1

0x3dcf,	// (0x00050188) smil2_video_pane_ParamLimits

0x3dcf,	// (0x00050188) smil2_video_pane

0x119c,	// (0x0004d555) aid_zoom_text_primary_cp

0x9d07,	// (0x000560c0) popup_preview_fixed_window

0xb0c9,	// (0x00057482) im_reading_pane_g1

0x48fa,	// (0x00050cb3) cams2_bc_adjust_pane_cp_ParamLimits

0x48fa,	// (0x00050cb3) cams2_bc_adjust_pane_cp

0x4be0,	// (0x00050f99) cams2_bc_adjust_pane_ParamLimits

0x4be0,	// (0x00050f99) cams2_bc_adjust_pane

0xa1f3,	// (0x000565ac) cams2_bc_adjust_pane_g1

0xa1fb,	// (0x000565b4) cams2_slider_pane

0xa204,	// (0x000565bd) cams2_slider_pane_g1

0xa20d,	// (0x000565c6) cams2_slider_pane_g2

0x0006,

0xf698,	// (0x0005ba51) cams2_slider_pane_g

0x15a9,	// (0x0004d962) calc_display_pane_ParamLimits

0x15d1,	// (0x0004d98a) calc_paper_pane_ParamLimits

0x15f4,	// (0x0004d9ad) grid_calc_pane_ParamLimits

0xa0a3,	// (0x0005645c) popup_clock_digital_window_t1_ParamLimits

0xbccc,	// (0x00058085) main_image_pane_t1

0x158b,	// (0x0004d944) aid_size_cell_calc_ParamLimits

0x158b,	// (0x0004d944) aid_size_cell_calc

0x43be,	// (0x00050777) popup_blid_sat_info2_window_ParamLimits

0x43be,	// (0x00050777) popup_blid_sat_info2_window

0xd032,	// (0x000593eb) aid_size_cell_blid

0xd03a,	// (0x000593f3) bg_popup_window_pane_cp07

0xd05d,	// (0x00059416) grid_popup_blid_pane

0xd067,	// (0x00059420) heading_pane_cp05_ParamLimits

0xd067,	// (0x00059420) heading_pane_cp05

0xd131,	// (0x000594ea) cell_popup_blid_pane_ParamLimits

0xd131,	// (0x000594ea) cell_popup_blid_pane

0xd155,	// (0x0005950e) cell_popup_blid_pane_g1

0xd15d,	// (0x00059516) cell_popup_blid_pane_t1

0x4e8d,	// (0x00051246) mup2_indicator_pane_ParamLimits

0x4e8d,	// (0x00051246) mup2_indicator_pane

0xba44,	// (0x00057dfd) mup2_visualizer_osc_pane

0xcefb,	// (0x000592b4) mup2_visualizer_spec_pane_ParamLimits

0xcefb,	// (0x000592b4) mup2_visualizer_spec_pane

0x5008,	// (0x000513c1) mup2_spec_half_pane

0x5011,	// (0x000513ca) mup2_spec_half_pane_cp

0x5019,	// (0x000513d2) mup2_spec_bar_pane_ParamLimits

0x5019,	// (0x000513d2) mup2_spec_bar_pane

0xce9c,	// (0x00059255) mup2_spec_bar_pane_g1

0xcea6,	// (0x0005925f) mup2_spec_bar_pane_g2

0x0001,

0xf60b,	// (0x0005b9c4) mup2_spec_bar_pane_g

0x5039,	// (0x000513f2) mup2_osc_middle_pane

0xceb8,	// (0x00059271) mup2_visualizer_osc_pane_g1

0x9d31,	// (0x000560ea) popup_number_entry_window_t1_ParamLimits

0x9d44,	// (0x000560fd) popup_number_entry_window_t2_ParamLimits

0x9d56,	// (0x0005610f) popup_number_entry_window_t3_ParamLimits

0x13f3,	// (0x0004d7ac) popup_number_entry_window_t5_ParamLimits

0x13f3,	// (0x0004d7ac) popup_number_entry_window_t5

0xf0cd,	// (0x0005b486) popup_number_entry_window_t_ParamLimits

0x9d68,	// (0x00056121) text_title_cp2_ParamLimits

0xa0e2,	// (0x0005649b) aid_hotspot_pointer_text2_pane

0xa108,	// (0x000564c1) main_viewer_pane_g9_ParamLimits

0xa108,	// (0x000564c1) main_viewer_pane_g9

0xb302,	// (0x000576bb) cale_month_pane_t1_ParamLimits

0xb33f,	// (0x000576f8) bg_cale_pane_ParamLimits

0xb357,	// (0x00057710) list_cale_pane_ParamLimits

0xb368,	// (0x00057721) listscroll_cale_day_pane_t1

0xb37a,	// (0x00057733) scroll_pane_cp09_ParamLimits

0x37e5,	// (0x0004fb9e) main_mup_eq_pane_t1_ParamLimits

0x37e5,	// (0x0004fb9e) main_mup_eq_pane_t1

0x37ff,	// (0x0004fbb8) main_mup_eq_pane_t2_ParamLimits

0x37ff,	// (0x0004fbb8) main_mup_eq_pane_t2

0x3819,	// (0x0004fbd2) main_mup_eq_pane_t3_ParamLimits

0x3819,	// (0x0004fbd2) main_mup_eq_pane_t3

0x3835,	// (0x0004fbee) main_mup_eq_pane_t4_ParamLimits

0x3835,	// (0x0004fbee) main_mup_eq_pane_t4

0x3851,	// (0x0004fc0a) main_mup_eq_pane_t5_ParamLimits

0x3851,	// (0x0004fc0a) main_mup_eq_pane_t5

0x386d,	// (0x0004fc26) main_mup_eq_pane_t6_ParamLimits

0x386d,	// (0x0004fc26) main_mup_eq_pane_t6

0x3881,	// (0x0004fc3a) main_mup_eq_pane_t7_ParamLimits

0x3881,	// (0x0004fc3a) main_mup_eq_pane_t7

0x3895,	// (0x0004fc4e) main_mup_eq_pane_t8_ParamLimits

0x3895,	// (0x0004fc4e) main_mup_eq_pane_t8

0x38a9,	// (0x0004fc62) main_mup_eq_pane_t9_ParamLimits

0x38a9,	// (0x0004fc62) main_mup_eq_pane_t9

0x38c3,	// (0x0004fc7c) main_mup_eq_pane_t10_ParamLimits

0x38c3,	// (0x0004fc7c) main_mup_eq_pane_t10

0x0009,

0xf45a,	// (0x0005b813) main_mup_eq_pane_t_ParamLimits

0xf45a,	// (0x0005b813) main_mup_eq_pane_t

0x3972,	// (0x0004fd2b) mup_equalizer_pane_cp5_ParamLimits

0x3986,	// (0x0004fd3f) mup_equalizer_pane_cp6_ParamLimits

0x399a,	// (0x0004fd53) mup_equalizer_pane_cp7_ParamLimits

0x9ca9,	// (0x00056062) main_gallery_pane

0xcec1,	// (0x0005927a) smil2_volume_pane

0xcec9,	// (0x00059282) smil_status_volume_pane_g1_ParamLimits

0xcedc,	// (0x00059295) smil_status_volume_pane_g2_ParamLimits

0xa168,	// (0x00056521) smil_status_volume_pane_g3_ParamLimits

0xf610,	// (0x0005b9c9) smil_status_volume_pane_g_ParamLimits

0xd03a,	// (0x000593f3) bg_popup_window_pane_cp07_ParamLimits

0xd048,	// (0x00059401) blid_firmament_pane

0x5042,	// (0x000513fb) aid_size_cell_gallery_ParamLimits

0x5042,	// (0x000513fb) aid_size_cell_gallery

0x5058,	// (0x00051411) grid_gallery_pane_ParamLimits

0x5058,	// (0x00051411) grid_gallery_pane

0x5071,	// (0x0005142a) cell_gallery_pane_ParamLimits

0x5071,	// (0x0005142a) cell_gallery_pane

0xd16b,	// (0x00059524) bg_cell_gallery_focus_pane_ParamLimits

0xd16b,	// (0x00059524) bg_cell_gallery_focus_pane

0xd17d,	// (0x00059536) cell_gallery_pane_g1_ParamLimits

0xd17d,	// (0x00059536) cell_gallery_pane_g1

0x50ba,	// (0x00051473) cell_gallery_pane_g2_ParamLimits

0x50ba,	// (0x00051473) cell_gallery_pane_g2

0x50c7,	// (0x00051480) cell_gallery_pane_g3_ParamLimits

0x50c7,	// (0x00051480) cell_gallery_pane_g3

0xd189,	// (0x00059542) cell_gallery_pane_g4_ParamLimits

0xd189,	// (0x00059542) cell_gallery_pane_g4

0x0003,

0xf6be,	// (0x0005ba77) cell_gallery_pane_g_ParamLimits

0xf6be,	// (0x0005ba77) cell_gallery_pane_g

0xd195,	// (0x0005954e) bg_cell_gallery_focus_pane_g1

0xd19d,	// (0x00059556) bg_cell_gallery_focus_pane_g2

0xd1a5,	// (0x0005955e) bg_cell_gallery_focus_pane_g3

0xd1ad,	// (0x00059566) bg_cell_gallery_focus_pane_g4

0xd1b5,	// (0x0005956e) bg_cell_gallery_focus_pane_g5

0xd1bd,	// (0x00059576) bg_cell_gallery_focus_pane_g6

0xd1c5,	// (0x0005957e) bg_cell_gallery_focus_pane_g7

0xd1cd,	// (0x00059586) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6c7,	// (0x0005ba80) bg_cell_gallery_focus_pane_g

0xd1d5,	// (0x0005958e) aid_firma_cardinal

0xd1e9,	// (0x000595a2) blid_firmament_pane_t1

0xd200,	// (0x000595b9) blid_firmament_pane_t2

0xd217,	// (0x000595d0) blid_firmament_pane_t3

0xd22e,	// (0x000595e7) blid_firmament_pane_t4

0x0003,

0xf6d8,	// (0x0005ba91) blid_firmament_pane_t

0xd245,	// (0x000595fe) blid_sat_info_pane

0xd255,	// (0x0005960e) blid_sat_info_pane_g1

0xd255,	// (0x0005960e) blid_sat_info_pane_g2

0x0001,

0xf6e1,	// (0x0005ba9a) blid_sat_info_pane_g

0xd25f,	// (0x00059618) blid_sat_info_pane_t1

0xd26d,	// (0x00059626) smil2_volume_content_pane

0xd276,	// (0x0005962f) smil2_volume_pane_g1

0xd27e,	// (0x00059637) smil2_volume_content_pane_g1

0xd287,	// (0x00059640) smil2_volume_content_pane_g2

0xd290,	// (0x00059649) smil2_volume_content_pane_g3

0xd299,	// (0x00059652) smil2_volume_content_pane_g4

0xd2a2,	// (0x0005965b) smil2_volume_content_pane_g5

0xd2ab,	// (0x00059664) smil2_volume_content_pane_g6

0xd2b4,	// (0x0005966d) smil2_volume_content_pane_g7

0xd2bd,	// (0x00059676) smil2_volume_content_pane_g8

0xd2c6,	// (0x0005967f) smil2_volume_content_pane_g9

0xd2cf,	// (0x00059688) smil2_volume_content_pane_g10

0x0009,

0xf6e6,	// (0x0005ba9f) smil2_volume_content_pane_g

0x1b62,	// (0x0004df1b) cale_week_day_heading_pane_t1_ParamLimits

0x1ba7,	// (0x0004df60) cale_week_day_heading_pane_t2_ParamLimits

0x1bf1,	// (0x0004dfaa) cale_week_day_heading_pane_t3_ParamLimits

0x1c3b,	// (0x0004dff4) cale_week_day_heading_pane_t4_ParamLimits

0x1c85,	// (0x0004e03e) cale_week_day_heading_pane_t5_ParamLimits

0x1cd7,	// (0x0004e090) cale_week_day_heading_pane_t6_ParamLimits

0x1d29,	// (0x0004e0e2) cale_week_day_heading_pane_t7_ParamLimits

0xf1d2,	// (0x0005b58b) cale_week_day_heading_pane_t_ParamLimits

0xaf7d,	// (0x00057336) bg_cale_side_pane_ParamLimits

0x1d6e,	// (0x0004e127) cale_week_time_pane_t1_ParamLimits

0x1d88,	// (0x0004e141) cale_week_time_pane_t2_ParamLimits

0x1da2,	// (0x0004e15b) cale_week_time_pane_t3_ParamLimits

0x1dbc,	// (0x0004e175) cale_week_time_pane_t4_ParamLimits

0x1dd6,	// (0x0004e18f) cale_week_time_pane_t5_ParamLimits

0x1df0,	// (0x0004e1a9) cale_week_time_pane_t6_ParamLimits

0x1e0a,	// (0x0004e1c3) cale_week_time_pane_t7_ParamLimits

0x1e24,	// (0x0004e1dd) cale_week_time_pane_t8_ParamLimits

0xf1e1,	// (0x0005b59a) cale_week_time_pane_t_ParamLimits

0x1e44,	// (0x0004e1fd) cell_cale_week_pane_g2_ParamLimits

0xaf7d,	// (0x00057336) bg_cale_side_pane_cp01_ParamLimits

0x2ff4,	// (0x0004f3ad) cale_month_week_pane_t1_ParamLimits

0x300d,	// (0x0004f3c6) cale_month_week_pane_t2_ParamLimits

0x3026,	// (0x0004f3df) cale_month_week_pane_t3_ParamLimits

0x303f,	// (0x0004f3f8) cale_month_week_pane_t4_ParamLimits

0x3058,	// (0x0004f411) cale_month_week_pane_t5_ParamLimits

0x3071,	// (0x0004f42a) cale_month_week_pane_t6_ParamLimits

0xf2ba,	// (0x0005b673) cale_month_week_pane_t_ParamLimits

0xa01f,	// (0x000563d8) cell_cale_month_pane_g1_ParamLimits

0x9ca9,	// (0x00056062) main_cale_event_viewer_pane

0x9ca9,	// (0x00056062) listscroll_cale_event_viewer_pane

0xd2d8,	// (0x00059691) list_cale_ev_pane

0xd2e0,	// (0x00059699) scroll_pane_cp023

0xd2ec,	// (0x000596a5) field_cale_ev_pane_ParamLimits

0xd2ec,	// (0x000596a5) field_cale_ev_pane

0xd30a,	// (0x000596c3) field_cale_ev_content_pane_ParamLimits

0xd30a,	// (0x000596c3) field_cale_ev_content_pane

0xd316,	// (0x000596cf) field_cale_ev_pane_g1_ParamLimits

0xd316,	// (0x000596cf) field_cale_ev_pane_g1

0xd322,	// (0x000596db) field_cale_ev_pane_g2_ParamLimits

0xd322,	// (0x000596db) field_cale_ev_pane_g2

0xd33a,	// (0x000596f3) field_cale_ev_pane_g3_ParamLimits

0xd33a,	// (0x000596f3) field_cale_ev_pane_g3

0x0002,

0xf6fb,	// (0x0005bab4) field_cale_ev_pane_g_ParamLimits

0xf6fb,	// (0x0005bab4) field_cale_ev_pane_g

0xd352,	// (0x0005970b) field_cale_ev_pane_t1_ParamLimits

0xd352,	// (0x0005970b) field_cale_ev_pane_t1

0xd369,	// (0x00059722) field_cale_ev_content_pane_t1_ParamLimits

0xd369,	// (0x00059722) field_cale_ev_content_pane_t1

0x3a10,	// (0x0004fdc9) bg_button_pane_cp01

0x18b3,	// (0x0004dc6c) listscroll_cale_week_pane_ParamLimits

0xaf27,	// (0x000572e0) popup_toolbar_window_cp01

0xaf4e,	// (0x00057307) listscroll_cale_week_pane_t1_ParamLimits

0x18b3,	// (0x0004dc6c) listscroll_cale_day_pane_ParamLimits

0xaf27,	// (0x000572e0) popup_toolbar_window_cp02

0xb368,	// (0x00057721) listscroll_cale_day_pane_t1_ParamLimits

0x18b3,	// (0x0004dc6c) main_cale_month_pane_ParamLimits

0xa153,	// (0x0005650c) popup_toolbar_window_cp03_ParamLimits

0xa153,	// (0x0005650c) popup_toolbar_window_cp03

0x3c97,	// (0x00050050) main_image_pane_g2_ParamLimits

0x3c97,	// (0x00050050) main_image_pane_g2

0x3ca8,	// (0x00050061) main_image_pane_g3_ParamLimits

0x3ca8,	// (0x00050061) main_image_pane_g3

0x0002,

0xf4ec,	// (0x0005b8a5) main_image_pane_g_ParamLimits

0xf4ec,	// (0x0005b8a5) main_image_pane_g

0xbccc,	// (0x00058085) main_image_pane_t1_ParamLimits

0x3cb9,	// (0x00050072) main_image_pane_t2_ParamLimits

0x3cb9,	// (0x00050072) main_image_pane_t2

0x3ccb,	// (0x00050084) main_image_pane_t3_ParamLimits

0x3ccb,	// (0x00050084) main_image_pane_t3

0x3cf3,	// (0x000500ac) main_image_pane_t4_ParamLimits

0x3cf3,	// (0x000500ac) main_image_pane_t4

0x0003,

0xf4f3,	// (0x0005b8ac) main_image_pane_t_ParamLimits

0xf4f3,	// (0x0005b8ac) main_image_pane_t

0x3d13,	// (0x000500cc) popup_image_details_window_cp01

0x3d1d,	// (0x000500d6) popup_toobar_trans_pane_cp01_ParamLimits

0x3d1d,	// (0x000500d6) popup_toobar_trans_pane_cp01

0x449d,	// (0x00050856) popup_image_details_window_ParamLimits

0x449d,	// (0x00050856) popup_image_details_window

0xa126,	// (0x000564df) popup_image_focus_window

0x48b4,	// (0x00050c6d) camera2_autofocus_pane_ParamLimits

0x48b4,	// (0x00050c6d) camera2_autofocus_pane

0x9ca9,	// (0x00056062) bg_popup_sub_pane_cp06

0xd387,	// (0x00059740) popup_image_focus_window_g1

0xd38f,	// (0x00059748) popup_image_focus_window_g2

0xd397,	// (0x00059750) popup_image_focus_window_g3

0xd39f,	// (0x00059758) popup_image_focus_window_g4

0x0003,

0xf702,	// (0x0005babb) popup_image_focus_window_g

0xd3a7,	// (0x00059760) popup_image_focus_window_t1

0xd3b5,	// (0x0005976e) popup_image_focus_window_t2

0xd3c5,	// (0x0005977e) popup_image_focus_window_t3

0x0002,

0xf70b,	// (0x0005bac4) popup_image_focus_window_t

0xd3d3,	// (0x0005978c) camera2_autofocus_pane_g1

0xa939,	// (0x00056cf2) bg_tb_trans_pane_cp01

0xd3e1,	// (0x0005979a) popup_image_details_window_g1

0xd3f4,	// (0x000597ad) popup_image_details_window_g2

0x0002,

0xf71d,	// (0x0005bad6) popup_image_details_window_g

0xd41d,	// (0x000597d6) popup_image_details_window_t1

0xd42f,	// (0x000597e8) popup_image_details_window_t2

0xd448,	// (0x00059801) popup_image_details_window_t3

0xd45c,	// (0x00059815) popup_image_details_window_t4

0xd477,	// (0x00059830) popup_image_details_window_t5

0x0004,

0xf724,	// (0x0005badd) popup_image_details_window_t

0xadfe,	// (0x000571b7) bg_calc_paper_pane_ParamLimits

0x9ca9,	// (0x00056062) grid_highlight_pane_cp013

0x9f81,	// (0x0005633a) list_calc_pane_ParamLimits

0x9f93,	// (0x0005634c) scroll_pane_cp024

0xae12,	// (0x000571cb) bg_calc_display_pane_ParamLimits

0x16f2,	// (0x0004daab) calc_display_pane_t1_ParamLimits

0x1704,	// (0x0004dabd) calc_display_pane_t2_ParamLimits

0x9f9b,	// (0x00056354) calc_display_pane_t3_ParamLimits

0xf154,	// (0x0005b50d) calc_display_pane_t_ParamLimits

0x17be,	// (0x0004db77) cell_calc_pane_g2

0x0001,

0xf171,	// (0x0005b52a) cell_calc_pane_g

0x17c7,	// (0x0004db80) cell_calc_pane_t1

0xae71,	// (0x0005722a) grid_highlight_pane_cp02_ParamLimits

0xae87,	// (0x00057240) toolbar_button_pane_cp01_ParamLimits

0xae87,	// (0x00057240) toolbar_button_pane_cp01

0xbd11,	// (0x000580ca) temp_image_control_pane_ParamLimits

0xbd11,	// (0x000580ca) temp_image_control_pane

0xa939,	// (0x00056cf2) main_mp3_pane

0xd491,	// (0x0005984a) temp_image_control_pane_g1_ParamLimits

0xd491,	// (0x0005984a) temp_image_control_pane_g1

0xd49f,	// (0x00059858) temp_image_control_pane_g2_ParamLimits

0xd49f,	// (0x00059858) temp_image_control_pane_g2

0xd4b1,	// (0x0005986a) temp_image_control_pane_g3_ParamLimits

0xd4b1,	// (0x0005986a) temp_image_control_pane_g3

0x5104,	// (0x000514bd) temp_image_control_pane_g4_ParamLimits

0x5104,	// (0x000514bd) temp_image_control_pane_g4

0x0003,

0xf72f,	// (0x0005bae8) temp_image_control_pane_g_ParamLimits

0xf72f,	// (0x0005bae8) temp_image_control_pane_g

0xd491,	// (0x0005984a) main_mp3_pane_g1

0x5117,	// (0x000514d0) main_mp3_pane_g2

0x0007,

0xf738,	// (0x0005baf1) main_mp3_pane_g

0xd4f4,	// (0x000598ad) main_mp3_pane_t1

0xafd8,	// (0x00057391) main_camera_pane_g8_ParamLimits

0xafd8,	// (0x00057391) main_camera_pane_g8

0x2154,	// (0x0004e50d) main_video_pane_g7_ParamLimits

0x2154,	// (0x0004e50d) main_video_pane_g7

0xa1a8,	// (0x00056561) main_camera2_pane_t7_ParamLimits

0xa1a8,	// (0x00056561) main_camera2_pane_t7

0xb120,	// (0x000574d9) scroll_pane_cp025_ParamLimits

0xb120,	// (0x000574d9) scroll_pane_cp025

0xb134,	// (0x000574ed) scroll_pane_cp026_ParamLimits

0xb134,	// (0x000574ed) scroll_pane_cp026

0xb143,	// (0x000574fc) wml_content_pane_ParamLimits

0x9ca9,	// (0x00056062) main_touch_calib_pane

0x51eb,	// (0x000515a4) main_touch_calib_pane_g1

0x51fd,	// (0x000515b6) main_touch_calib_pane_g2

0x520f,	// (0x000515c8) main_touch_calib_pane_g3

0x5221,	// (0x000515da) main_touch_calib_pane_g4

0x0003,

0xf756,	// (0x0005bb0f) main_touch_calib_pane_g

0x5233,	// (0x000515ec) main_touch_calib_pane_t1

0x524d,	// (0x00051606) main_touch_calib_pane_t2

0x0004,

0xf75f,	// (0x0005bb18) main_touch_calib_pane_t

0xb8df,	// (0x00057c98) mup_progress_pane_cp02

0xb914,	// (0x00057ccd) navi_pane_g1

0xb9cf,	// (0x00057d88) navi_pane_mp_t3

0xa939,	// (0x00056cf2) main_mp3_pane_ParamLimits

0x4622,	// (0x000509db) navi_pane_ParamLimits

0xd491,	// (0x0005984a) main_mp3_pane_g1_ParamLimits

0x5117,	// (0x000514d0) main_mp3_pane_g2_ParamLimits

0x5125,	// (0x000514de) main_mp3_pane_g3_ParamLimits

0x5125,	// (0x000514de) main_mp3_pane_g3

0x5133,	// (0x000514ec) main_mp3_pane_g4_ParamLimits

0x5133,	// (0x000514ec) main_mp3_pane_g4

0xd4c1,	// (0x0005987a) main_mp3_pane_g5_ParamLimits

0xd4c1,	// (0x0005987a) main_mp3_pane_g5

0xd4cf,	// (0x00059888) main_mp3_pane_g6_ParamLimits

0xd4cf,	// (0x00059888) main_mp3_pane_g6

0xd4dc,	// (0x00059895) main_mp3_pane_g7_ParamLimits

0xd4dc,	// (0x00059895) main_mp3_pane_g7

0xd4e8,	// (0x000598a1) main_mp3_pane_g8_ParamLimits

0xd4e8,	// (0x000598a1) main_mp3_pane_g8

0xf738,	// (0x0005baf1) main_mp3_pane_g_ParamLimits

0x513f,	// (0x000514f8) main_mp3_pane_t2

0x514d,	// (0x00051506) main_mp3_pane_t3

0xd502,	// (0x000598bb) main_mp3_pane_t4

0xd510,	// (0x000598c9) main_mp3_pane_t5

0x0005,

0xf749,	// (0x0005bb02) main_mp3_pane_t

0xd51e,	// (0x000598d7) mup_progress_pane_cp01

0x119c,	// (0x0004d555) aid_zoom_text_secondary2

0xd2d8,	// (0x00059691) list_cale_ev2_pane

0xd2e0,	// (0x00059699) scroll_pane_cp023_ParamLimits

0x52a3,	// (0x0005165c) field_cale_ev2_pane_ParamLimits

0x52a3,	// (0x0005165c) field_cale_ev2_pane

0x52c3,	// (0x0005167c) field_cale_ev2_pane_g1_ParamLimits

0x52c3,	// (0x0005167c) field_cale_ev2_pane_g1

0x52cf,	// (0x00051688) field_cale_ev2_pane_g2_ParamLimits

0x52cf,	// (0x00051688) field_cale_ev2_pane_g2

0x52e7,	// (0x000516a0) field_cale_ev2_pane_g3_ParamLimits

0x52e7,	// (0x000516a0) field_cale_ev2_pane_g3

0x0003,

0xf76a,	// (0x0005bb23) field_cale_ev2_pane_g_ParamLimits

0xf76a,	// (0x0005bb23) field_cale_ev2_pane_g

0x04c8,	// (0x0004c881) field_cale_ev2_pane_t1_ParamLimits

0x04c8,	// (0x0004c881) field_cale_ev2_pane_t1

0x04df,	// (0x0004c898) field_cale_ev2_pane_t2_ParamLimits

0x04df,	// (0x0004c898) field_cale_ev2_pane_t2

0x0001,

0xf773,	// (0x0005bb2c) field_cale_ev2_pane_t_ParamLimits

0xf773,	// (0x0005bb2c) field_cale_ev2_pane_t

0x3b4c,	// (0x0004ff05) main_postcard_pane_g5_ParamLimits

0x3b4c,	// (0x0004ff05) main_postcard_pane_g5

0x3b62,	// (0x0004ff1b) main_postcard_pane_g6_ParamLimits

0x3b62,	// (0x0004ff1b) main_postcard_pane_g6

0x1f20,	// (0x0004e2d9) camera2_autofocus_pane_cp_ParamLimits

0x1f20,	// (0x0004e2d9) camera2_autofocus_pane_cp

0xa939,	// (0x00056cf2) main_mup3_pane

0x530b,	// (0x000516c4) main_mup3_pane_g1_ParamLimits

0x530b,	// (0x000516c4) main_mup3_pane_g1

0x532d,	// (0x000516e6) main_mup3_pane_g2_ParamLimits

0x532d,	// (0x000516e6) main_mup3_pane_g2

0x53ab,	// (0x00051764) main_mup3_pane_g3_ParamLimits

0x53ab,	// (0x00051764) main_mup3_pane_g3

0x53f1,	// (0x000517aa) main_mup3_pane_g4_ParamLimits

0x53f1,	// (0x000517aa) main_mup3_pane_g4

0x5437,	// (0x000517f0) main_mup3_pane_g5_ParamLimits

0x5437,	// (0x000517f0) main_mup3_pane_g5

0x547d,	// (0x00051836) main_mup3_pane_g6_ParamLimits

0x547d,	// (0x00051836) main_mup3_pane_g6

0xd546,	// (0x000598ff) main_mup3_pane_g7_ParamLimits

0xd546,	// (0x000598ff) main_mup3_pane_g7

0x0007,

0xf783,	// (0x0005bb3c) main_mup3_pane_g_ParamLimits

0xf783,	// (0x0005bb3c) main_mup3_pane_g

0x54fb,	// (0x000518b4) main_mup3_pane_t1_ParamLimits

0x54fb,	// (0x000518b4) main_mup3_pane_t1

0x556f,	// (0x00051928) main_mup3_pane_t2_ParamLimits

0x556f,	// (0x00051928) main_mup3_pane_t2

0x5643,	// (0x000519fc) main_mup3_pane_t4_ParamLimits

0x5643,	// (0x000519fc) main_mup3_pane_t4

0x5699,	// (0x00051a52) main_mup3_pane_t5_ParamLimits

0x5699,	// (0x00051a52) main_mup3_pane_t5

0x5755,	// (0x00051b0e) main_mup3_pane_t6_ParamLimits

0x5755,	// (0x00051b0e) main_mup3_pane_t6

0x0005,

0xf794,	// (0x0005bb4d) main_mup3_pane_t_ParamLimits

0xf794,	// (0x0005bb4d) main_mup3_pane_t

0x580d,	// (0x00051bc6) mup3_progress_pane_ParamLimits

0x580d,	// (0x00051bc6) mup3_progress_pane

0x58a3,	// (0x00051c5c) popup_mup3_control_window_ParamLimits

0x58a3,	// (0x00051c5c) popup_mup3_control_window

0xd554,	// (0x0005990d) popup_mup3_text_window

0x58d5,	// (0x00051c8e) mup3_progress_pane_t1

0x58f4,	// (0x00051cad) mup3_progress_pane_t2

0xd55c,	// (0x00059915) mup3_progress_pane_t3

0x0002,

0xf7a1,	// (0x0005bb5a) mup3_progress_pane_t

0xd579,	// (0x00059932) mup_progress_pane_cp03

0x9ca9,	// (0x00056062) bg_tb_trans_pane_cp04

0x5913,	// (0x00051ccc) mup3_volume_pane

0x591b,	// (0x00051cd4) popup_mup3_control_window_g1

0x5924,	// (0x00051cdd) mup3_volume_pane_g1

0x592d,	// (0x00051ce6) mup3_volume_pane_g2

0x5936,	// (0x00051cef) mup3_volume_pane_g3

0x0002,

0xf7a8,	// (0x0005bb61) mup3_volume_pane_g

0x9ca9,	// (0x00056062) bg_tb_trans_pane_cp03

0xd589,	// (0x00059942) popup_mup3_text_window_g1

0xd591,	// (0x0005994a) popup_mup3_text_window_t1

0xae5a,	// (0x00057213) list_calc_item_pane_g1_ParamLimits

0xcf9c,	// (0x00059355) mup_volume_pane_cp_g1

0x5267,	// (0x00051620) main_touch_calib_pane_t3

0x527b,	// (0x00051634) main_touch_calib_pane_t4

0x528f,	// (0x00051648) main_touch_calib_pane_t5

0x9cb3,	// (0x0005606c) aid_cell_size_toolbar2

0x9cbb,	// (0x00056074) aid_popup3_width_pane

0x1194,	// (0x0004d54d) aid_zoom_text_msg_primary

0x1ef7,	// (0x0004e2b0) vorec_t7

0xae1e,	// (0x000571d7) bg_calc_paper_pane_g1_ParamLimits

0xae2a,	// (0x000571e3) bg_calc_paper_pane_g2_ParamLimits

0xae36,	// (0x000571ef) bg_calc_paper_pane_g3_ParamLimits

0xae42,	// (0x000571fb) bg_calc_paper_pane_g4_ParamLimits

0xae4e,	// (0x00057207) bg_calc_paper_pane_g5_ParamLimits

0x174b,	// (0x0004db04) bg_calc_paper_pane_g6_ParamLimits

0x175a,	// (0x0004db13) bg_calc_paper_pane_g7_ParamLimits

0x1769,	// (0x0004db22) bg_calc_paper_pane_g8_ParamLimits

0xf15b,	// (0x0005b514) bg_calc_paper_pane_g_ParamLimits

0x177c,	// (0x0004db35) calc_bg_paper_pane_g9_ParamLimits

0x206b,	// (0x0004e424) image_qvga_pane_ParamLimits

0x206b,	// (0x0004e424) image_qvga_pane

0xad4d,	// (0x00057106) bg_popup_sub_pane_cp04_ParamLimits

0xbc48,	// (0x00058001) popup_mup_playback_window_g1_ParamLimits

0xbc54,	// (0x0005800d) popup_mup_playback_window_t1_ParamLimits

0xbc69,	// (0x00058022) popup_mup_playback_window_t2_ParamLimits

0xf4e7,	// (0x0005b8a0) popup_mup_playback_window_t_ParamLimits

0x4da7,	// (0x00051160) main_mup2_pane_g3_ParamLimits

0x4da7,	// (0x00051160) main_mup2_pane_g3

0x2364,	// (0x0004e71d) popup_toolbar_window_cp04

0xc04b,	// (0x00058404) popup_call2_audio_second_window_g3_ParamLimits

0xc04b,	// (0x00058404) popup_call2_audio_second_window_g3

0xc455,	// (0x0005880e) popup_call2_audio_first_window_g4_ParamLimits

0xc455,	// (0x0005880e) popup_call2_audio_first_window_g4

0xcad4,	// (0x00058e8d) popup_call2_audio_in_window_g4_ParamLimits

0xcad4,	// (0x00058e8d) popup_call2_audio_in_window_g4

0x3c79,	// (0x00050032) aid_area_sk_bg_cut_ParamLimits

0x3c79,	// (0x00050032) aid_area_sk_bg_cut

0xbc7e,	// (0x00058037) aid_area_sk_bg_cut_2_ParamLimits

0xbc7e,	// (0x00058037) aid_area_sk_bg_cut_2

0x50aa,	// (0x00051463) aid_placing_details_win

0x50b2,	// (0x0005146b) aid_placing_details_win_2

0xd3d3,	// (0x0005978c) camera2_autofocus_pane_g1_ParamLimits

0x133a,	// (0x0004d6f3) popup_fixed_preview_cale_window_ParamLimits

0x133a,	// (0x0004d6f3) popup_fixed_preview_cale_window

0xba55,	// (0x00057e0e) navi_slider_pane_g3

0xba5e,	// (0x00057e17) navi_slider_pane_g4

0xba67,	// (0x00057e20) navi_slider_pane_g5

0xba55,	// (0x00057e0e) navi_slider_pane_g6

0xa0c9,	// (0x00056482) navi_slider_pane_g7

0xbb88,	// (0x00057f41) mup_scale_pane_g3

0xbb91,	// (0x00057f4a) mup_scale_pane_g4

0xbb9a,	// (0x00057f53) mup_scale_pane_g5

0x39ae,	// (0x0004fd67) mup_scale_pane_g6

0x39b7,	// (0x0004fd70) mup_scale_pane_g7

0xba55,	// (0x00057e0e) cams2_slider_pane_g3

0xd02a,	// (0x000593e3) cams2_slider_pane_g4

0xa216,	// (0x000565cf) cams2_slider_pane_g5

0xba55,	// (0x00057e0e) cams2_slider_pane_g6

0xa21e,	// (0x000565d7) cams2_slider_pane_g7

0xd255,	// (0x0005960e) camera2_autofocus_pane_cp_g1

0xce35,	// (0x000591ee) bg_popup_preview_window_pane_cp02_ParamLimits

0xce35,	// (0x000591ee) bg_popup_preview_window_pane_cp02

0xd59f,	// (0x00059958) list_fp_cale_pane_ParamLimits

0xd59f,	// (0x00059958) list_fp_cale_pane

0xd5ab,	// (0x00059964) popup_fixed_preview_cale_window_t1_ParamLimits

0xd5ab,	// (0x00059964) popup_fixed_preview_cale_window_t1

0x593f,	// (0x00051cf8) popup_fixed_preview_cale_window_t2_ParamLimits

0x593f,	// (0x00051cf8) popup_fixed_preview_cale_window_t2

0x5954,	// (0x00051d0d) popup_fixed_preview_cale_window_t3_ParamLimits

0x5954,	// (0x00051d0d) popup_fixed_preview_cale_window_t3

0x0002,

0xf7af,	// (0x0005bb68) popup_fixed_preview_cale_window_t_ParamLimits

0xf7af,	// (0x0005bb68) popup_fixed_preview_cale_window_t

0x5969,	// (0x00051d22) list_single_fp_cale_pane_ParamLimits

0x5969,	// (0x00051d22) list_single_fp_cale_pane

0xd5c9,	// (0x00059982) list_single_fp_cale_pane_g1_ParamLimits

0xd5c9,	// (0x00059982) list_single_fp_cale_pane_g1

0xd5d5,	// (0x0005998e) list_single_fp_cale_pane_g2_ParamLimits

0xd5d5,	// (0x0005998e) list_single_fp_cale_pane_g2

0x0002,

0xf7b6,	// (0x0005bb6f) list_single_fp_cale_pane_g_ParamLimits

0xf7b6,	// (0x0005bb6f) list_single_fp_cale_pane_g

0xd5ee,	// (0x000599a7) list_single_fp_cale_pane_t1_ParamLimits

0xd5ee,	// (0x000599a7) list_single_fp_cale_pane_t1

0xd600,	// (0x000599b9) list_single_fp_cale_pane_t2_ParamLimits

0xd600,	// (0x000599b9) list_single_fp_cale_pane_t2

0x0001,

0xf7bd,	// (0x0005bb76) list_single_fp_cale_pane_t_ParamLimits

0xf7bd,	// (0x0005bb76) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x9ca9,	// (0x00056062) main_dialer_pane

0x597e,	// (0x00051d37) aid_cell_size_keypad

0x5988,	// (0x00051d41) dialer_ne_pane

0x5990,	// (0x00051d49) grid_dialer_command_1_pane

0x5998,	// (0x00051d51) grid_dialer_command_2_pane

0x59a0,	// (0x00051d59) grid_dialer_keypad_pane

0x59b2,	// (0x00051d6b) bg_popup_call_pane_cp06_ParamLimits

0x59b2,	// (0x00051d6b) bg_popup_call_pane_cp06

0x59be,	// (0x00051d77) dialer_ne_clear_pane_ParamLimits

0x59be,	// (0x00051d77) dialer_ne_clear_pane

0xd633,	// (0x000599ec) dialer_ne_pane_g1

0xd63b,	// (0x000599f4) dialer_ne_pane_t1_ParamLimits

0xd63b,	// (0x000599f4) dialer_ne_pane_t1

0x59ca,	// (0x00051d83) dialer_ne_pane_t2_ParamLimits

0x59ca,	// (0x00051d83) dialer_ne_pane_t2

0x59f4,	// (0x00051dad) dialer_ne_pane_t3_ParamLimits

0x59f4,	// (0x00051dad) dialer_ne_pane_t3

0x0002,

0xf7c2,	// (0x0005bb7b) dialer_ne_pane_t_ParamLimits

0xf7c2,	// (0x0005bb7b) dialer_ne_pane_t

0x5a24,	// (0x00051ddd) dialer_ne_pane_t3_copy1_ParamLimits

0x5a24,	// (0x00051ddd) dialer_ne_pane_t3_copy1

0x5a53,	// (0x00051e0c) cell_dialer_keypad_pane_ParamLimits

0x5a53,	// (0x00051e0c) cell_dialer_keypad_pane

0x5a6a,	// (0x00051e23) cell_dialer_command_1_pane_ParamLimits

0x5a6a,	// (0x00051e23) cell_dialer_command_1_pane

0x5a80,	// (0x00051e39) cell_dialer_command_2_pane_ParamLimits

0x5a80,	// (0x00051e39) cell_dialer_command_2_pane

0xd64d,	// (0x00059a06) bg_button_pane_cp02_ParamLimits

0xd64d,	// (0x00059a06) bg_button_pane_cp02

0x5a8f,	// (0x00051e48) cell_dialer_keypad_pane_g1_ParamLimits

0x5a8f,	// (0x00051e48) cell_dialer_keypad_pane_g1

0xd64d,	// (0x00059a06) bg_button_pane_cp03_ParamLimits

0xd64d,	// (0x00059a06) bg_button_pane_cp03

0x5aa3,	// (0x00051e5c) cell_dialer_command_1_pane_g1_ParamLimits

0x5aa3,	// (0x00051e5c) cell_dialer_command_1_pane_g1

0xd659,	// (0x00059a12) bg_button_pane_cp04

0x5ab7,	// (0x00051e70) cell_dialer_command_2_pane_g1

0xba44,	// (0x00057dfd) bg_button_pane_cp06

0xd661,	// (0x00059a1a) dialer_ne_clear_pane_g1

0xb920,	// (0x00057cd9) navi_pane_g2

0xb94e,	// (0x00057d07) navi_pane_g3

0x0002,

0xf3ea,	// (0x0005b7a3) navi_pane_g

0xb9dd,	// (0x00057d96) navi_pane_mv_g2

0xba04,	// (0x00057dbd) navi_pane_mv_g5

0x3572,	// (0x0004f92b) navi_pane_mv_t1

0xae12,	// (0x000571cb) main_clock2_pane

0x5b02,	// (0x00051ebb) main_clock2_list_pane_ParamLimits

0x5b02,	// (0x00051ebb) main_clock2_list_pane

0x5b3a,	// (0x00051ef3) main_clock2_pane_t1_ParamLimits

0x5b3a,	// (0x00051ef3) main_clock2_pane_t1

0x5b76,	// (0x00051f2f) main_clock2_pane_t2_ParamLimits

0x5b76,	// (0x00051f2f) main_clock2_pane_t2

0x0004,

0xf7c9,	// (0x0005bb82) main_clock2_pane_t_ParamLimits

0xf7c9,	// (0x0005bb82) main_clock2_pane_t

0x5c14,	// (0x00051fcd) popup_clock_analogue_window_cp03_ParamLimits

0x5c14,	// (0x00051fcd) popup_clock_analogue_window_cp03

0x5c39,	// (0x00051ff2) popup_clock_digital_window_cp02_ParamLimits

0x5c39,	// (0x00051ff2) popup_clock_digital_window_cp02

0x5caa,	// (0x00052063) main_clock2_list_single_pane_ParamLimits

0x5caa,	// (0x00052063) main_clock2_list_single_pane

0xba44,	// (0x00057dfd) list_highlight_pane_cp05

0xd67f,	// (0x00059a38) main_clock2_list_single_pane_t1

0x2364,	// (0x0004e71d) popup_toolbar_window_cp04_ParamLimits

0x50d4,	// (0x0005148d) camera2_autofocus_pane_g2_ParamLimits

0x50d4,	// (0x0005148d) camera2_autofocus_pane_g2

0x50e0,	// (0x00051499) camera2_autofocus_pane_g3_ParamLimits

0x50e0,	// (0x00051499) camera2_autofocus_pane_g3

0x50ec,	// (0x000514a5) camera2_autofocus_pane_g4_ParamLimits

0x50ec,	// (0x000514a5) camera2_autofocus_pane_g4

0x50f8,	// (0x000514b1) camera2_autofocus_pane_g5_ParamLimits

0x50f8,	// (0x000514b1) camera2_autofocus_pane_g5

0x0004,

0xf712,	// (0x0005bacb) camera2_autofocus_pane_g_ParamLimits

0xf712,	// (0x0005bacb) camera2_autofocus_pane_g

0xd526,	// (0x000598df) camera2_autofocus_pane_cp_g2

0xd52e,	// (0x000598e7) camera2_autofocus_pane_cp_g3

0xd536,	// (0x000598ef) camera2_autofocus_pane_cp_g4

0xd53e,	// (0x000598f7) camera2_autofocus_pane_cp_g5

0x0004,

0xf778,	// (0x0005bb31) camera2_autofocus_pane_cp_g

0x59aa,	// (0x00051d63) popup_dialer_spcha_window

0x9ca9,	// (0x00056062) bg_popup_sub_pane_cp07

0xd68d,	// (0x00059a46) list_spcha_pane

0xd695,	// (0x00059a4e) list_single_spcha_pane_ParamLimits

0xd695,	// (0x00059a4e) list_single_spcha_pane

0x9ca9,	// (0x00056062) list_highlight_pane_cp06

0xd6a6,	// (0x00059a5f) list_single_spcha_pane_t1

0xc87e,	// (0x00058c37) popup_call2_audio_out_window_g4_ParamLimits

0xc87e,	// (0x00058c37) popup_call2_audio_out_window_g4

0x9ca9,	// (0x00056062) main_imed2_pane

0xa12e,	// (0x000564e7) popup_imed_adjust2_window

0x44b5,	// (0x0005086e) popup_imed_trans_window_ParamLimits

0x44b5,	// (0x0005086e) popup_imed_trans_window

0xd093,	// (0x0005944c) popup_blid_sat_info2_window_t1

0xd0a1,	// (0x0005945a) popup_blid_sat_info2_window_t2

0x000a,

0xf6a7,	// (0x0005ba60) popup_blid_sat_info2_window_t

0x5d54,	// (0x0005210d) aid_size_cell_colour_35

0x5d74,	// (0x0005212d) aid_size_cell_colour_112

0x5d94,	// (0x0005214d) aid_size_cell_effect

0xce41,	// (0x000591fa) bg_tb_trans_pane_cp02

0xb471,	// (0x0005782a) heading_imed_pane

0x5db4,	// (0x0005216d) listscroll_imed_pane

0xd6b4,	// (0x00059a6d) heading_imed_pane_g1

0xd6bc,	// (0x00059a75) heading_imed_pane_t1

0xd6ca,	// (0x00059a83) grid_imed_colour_35_pane_ParamLimits

0xd6ca,	// (0x00059a83) grid_imed_colour_35_pane

0x5dc0,	// (0x00052179) grid_imed_effect_pane

0xd6e1,	// (0x00059a9a) list_imed_aspect_pane

0x5dd6,	// (0x0005218f) scroll_pane_cp027_ParamLimits

0x5dd6,	// (0x0005218f) scroll_pane_cp027

0x5de7,	// (0x000521a0) cell_imed_effect_pane_ParamLimits

0x5de7,	// (0x000521a0) cell_imed_effect_pane

0xd6e9,	// (0x00059aa2) cell_imed_colour_pane_ParamLimits

0xd6e9,	// (0x00059aa2) cell_imed_colour_pane

0xd72b,	// (0x00059ae4) cell_imed_colour_pane_g1_ParamLimits

0xd72b,	// (0x00059ae4) cell_imed_colour_pane_g1

0xd73c,	// (0x00059af5) hgihlgiht_grid_pane_cp016_ParamLimits

0xd73c,	// (0x00059af5) hgihlgiht_grid_pane_cp016

0x5e0e,	// (0x000521c7) cell_imed_effect_pane_g1

0x5e16,	// (0x000521cf) grid_highlight_pane_cp017

0xd74d,	// (0x00059b06) list_imed_single_pane_ParamLimits

0xd74d,	// (0x00059b06) list_imed_single_pane

0x9ca9,	// (0x00056062) list_highlight_pane_cp07

0xd762,	// (0x00059b1b) list_imed_aspect_pane_comp1_t1

0xce41,	// (0x000591fa) bg_tb_trans_pane_cp05

0xd784,	// (0x00059b3d) popup_imed_adjust2_window_g1

0xd7ab,	// (0x00059b64) popup_imed_adjust2_window_t1

0xd7c3,	// (0x00059b7c) slider_imed_adjust_pane

0xd7d7,	// (0x00059b90) slider_imed_adjust_pane_g1

0xd7e7,	// (0x00059ba0) slider_imed_adjust_pane_g2

0xd7f7,	// (0x00059bb0) slider_imed_adjust_pane_g3

0xd808,	// (0x00059bc1) slider_imed_adjust_pane_g4

0x0003,

0xf7e6,	// (0x0005bb9f) slider_imed_adjust_pane_g

0x5e1f,	// (0x000521d8) aid_size_cell_clipart2

0x5e2b,	// (0x000521e4) grid_imed_clipart_pane

0xd819,	// (0x00059bd2) scroll_pane_cp031

0x5e35,	// (0x000521ee) cell_imed_clipart_pane_ParamLimits

0x5e35,	// (0x000521ee) cell_imed_clipart_pane

0x5e57,	// (0x00052210) cell_imed_clipart_pane_g1

0x9ca9,	// (0x00056062) grid_highlight_pane_cp014

0x5b17,	// (0x00051ed0) main_clock2_pane_g1_ParamLimits

0x5b17,	// (0x00051ed0) main_clock2_pane_g1

0x5c55,	// (0x0005200e) aid_call2_pane_cp10

0x5c67,	// (0x00052020) aid_call_pane_cp10

0xb881,	// (0x00057c3a) popup_clock_analogue_window_cp10_g1

0xb881,	// (0x00057c3a) popup_clock_analogue_window_cp10_g2

0x5c79,	// (0x00052032) popup_clock_analogue_window_cp10_g3

0x5c79,	// (0x00052032) popup_clock_analogue_window_cp10_g4

0xb881,	// (0x00057c3a) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7d4,	// (0x0005bb8d) popup_clock_analogue_window_cp10_g

0x5c8b,	// (0x00052044) popup_clock_analogue_window_cp10_t1

0x5cbc,	// (0x00052075) clock_digital_number_pane_cp10_ParamLimits

0x5cbc,	// (0x00052075) clock_digital_number_pane_cp10

0x5cd4,	// (0x0005208d) clock_digital_number_pane_cp11_ParamLimits

0x5cd4,	// (0x0005208d) clock_digital_number_pane_cp11

0x5cec,	// (0x000520a5) clock_digital_number_pane_cp12_ParamLimits

0x5cec,	// (0x000520a5) clock_digital_number_pane_cp12

0x5d04,	// (0x000520bd) clock_digital_number_pane_cp13_ParamLimits

0x5d04,	// (0x000520bd) clock_digital_number_pane_cp13

0x5d1c,	// (0x000520d5) clock_digital_separator_pane_cp10_ParamLimits

0x5d1c,	// (0x000520d5) clock_digital_separator_pane_cp10

0x5d34,	// (0x000520ed) popup_clock_digital_window_cp02_t1_ParamLimits

0x5d34,	// (0x000520ed) popup_clock_digital_window_cp02_t1

0xad45,	// (0x000570fe) clock_digital_number_pane_cp10_g1

0xad45,	// (0x000570fe) clock_digital_number_pane_cp10_g2

0x0001,

0xf7ef,	// (0x0005bba8) clock_digital_number_pane_cp10_g

0xad45,	// (0x000570fe) clock_digital_separator_pane_cp10_g1

0xad45,	// (0x000570fe) clock_digital_separator_pane_g2_cp10

0xba0c,	// (0x00057dc5) navi_pane_vded_g4

0xba15,	// (0x00057dce) navi_pane_vded_g5

0xba1e,	// (0x00057dd7) navi_pane_vded_t1

0x9ca9,	// (0x00056062) main_vded_pane

0x5e60,	// (0x00052219) main_vded_pane_g1

0x5e6a,	// (0x00052223) main_vded_pane_g2

0x5e74,	// (0x0005222d) main_vded_pane_g3

0x0002,

0xf7f4,	// (0x0005bbad) main_vded_pane_g

0x5e7e,	// (0x00052237) main_vded_pane_t1

0x5e8c,	// (0x00052245) main_vded_pane_t2

0x0001,

0xf7fb,	// (0x0005bbb4) main_vded_pane_t

0x5e9a,	// (0x00052253) vded_slider_pane

0x5ea2,	// (0x0005225b) vded_video_pane

0xd821,	// (0x00059bda) vded_video_pane_g1

0x5eaa,	// (0x00052263) vded_video_pane_g2

0xd255,	// (0x0005960e) vded_video_pane_g3

0x0002,

0xf800,	// (0x0005bbb9) vded_video_pane_g

0xd82b,	// (0x00059be4) vded_slider_pane_g1

0xcf9c,	// (0x00059355) vded_slider_pane_g2

0xd834,	// (0x00059bed) vded_slider_pane_g3

0xd83d,	// (0x00059bf6) vded_slider_pane_g4

0xd846,	// (0x00059bff) vded_slider_pane_g5

0x0004,

0xf807,	// (0x0005bbc0) vded_slider_pane_g

0x588b,	// (0x00051c44) mup3_rocker_pane_ParamLimits

0x588b,	// (0x00051c44) mup3_rocker_pane

0x5eb3,	// (0x0005226c) mup3_control_keys_pane_g1

0x5ebb,	// (0x00052274) mup3_control_keys_pane_g2

0x5ec3,	// (0x0005227c) mup3_control_keys_pane_g3

0x5ecb,	// (0x00052284) mup3_control_keys_pane_g4

0x0003,

0xf812,	// (0x0005bbcb) mup3_control_keys_pane_g

0x1371,	// (0x0004d72a) popup_toolbar2_fixed_window_cp01_ParamLimits

0x1371,	// (0x0004d72a) popup_toolbar2_fixed_window_cp01

0x58bf,	// (0x00051c78) popup_toolbar2_fixed_window_cp02_ParamLimits

0x58bf,	// (0x00051c78) popup_toolbar2_fixed_window_cp02

0xc1bd,	// (0x00058576) popup_call2_audio_second_window_t4_ParamLimits

0xc1bd,	// (0x00058576) popup_call2_audio_second_window_t4

0xc6eb,	// (0x00058aa4) popup_call2_audio_first_window_t6_ParamLimits

0xc6eb,	// (0x00058aa4) popup_call2_audio_first_window_t6

0xc981,	// (0x00058d3a) popup_call2_audio_out_window_t6_ParamLimits

0xc981,	// (0x00058d3a) popup_call2_audio_out_window_t6

0x9ca9,	// (0x00056062) main_vitu_pane

0x5edb,	// (0x00052294) aid_size_cell_itu_ParamLimits

0x5edb,	// (0x00052294) aid_size_cell_itu

0xa939,	// (0x00056cf2) bg_popup_window_pane_cp08_ParamLimits

0xa939,	// (0x00056cf2) bg_popup_window_pane_cp08

0x5ef1,	// (0x000522aa) field_vitu_entry_pane_ParamLimits

0x5ef1,	// (0x000522aa) field_vitu_entry_pane

0x5f08,	// (0x000522c1) grid_vitu_function_pane_ParamLimits

0x5f08,	// (0x000522c1) grid_vitu_function_pane

0x5f23,	// (0x000522dc) grid_vitu_itu_pane_ParamLimits

0x5f23,	// (0x000522dc) grid_vitu_itu_pane

0x5f41,	// (0x000522fa) cell_vitu_itu_pane_ParamLimits

0x5f41,	// (0x000522fa) cell_vitu_itu_pane

0x5f63,	// (0x0005231c) cell_vitu_function_pane_ParamLimits

0x5f63,	// (0x0005231c) cell_vitu_function_pane

0xa939,	// (0x00056cf2) bg_popup_sub_pane_cp08_ParamLimits

0xa939,	// (0x00056cf2) bg_popup_sub_pane_cp08

0x5f7c,	// (0x00052335) field_vitu_entry_pane_t1_ParamLimits

0x5f7c,	// (0x00052335) field_vitu_entry_pane_t1

0xd867,	// (0x00059c20) field_vitu_entry_pane_t2_ParamLimits

0xd867,	// (0x00059c20) field_vitu_entry_pane_t2

0x0001,

0xf820,	// (0x0005bbd9) field_vitu_entry_pane_t_ParamLimits

0xf820,	// (0x0005bbd9) field_vitu_entry_pane_t

0xd884,	// (0x00059c3d) bg_button_pane_cp05_ParamLimits

0xd884,	// (0x00059c3d) bg_button_pane_cp05

0x5f9a,	// (0x00052353) cell_vitu_itu_pane_g1

0x5fb2,	// (0x0005236b) cell_vitu_itu_pane_t1_ParamLimits

0x5fb2,	// (0x0005236b) cell_vitu_itu_pane_t1

0x5fc4,	// (0x0005237d) cell_vitu_itu_pane_t2_ParamLimits

0x5fc4,	// (0x0005237d) cell_vitu_itu_pane_t2

0x0002,

0xf825,	// (0x0005bbde) cell_vitu_itu_pane_t_ParamLimits

0xf825,	// (0x0005bbde) cell_vitu_itu_pane_t

0xd892,	// (0x00059c4b) bg_button_pane_cp07

0x5ff9,	// (0x000523b2) cell_vitu_function_pane_g1

0x9f79,	// (0x00056332) main_calc_pane_g1

0x1188,	// (0x0004d541) aid_visual_content_pane

0x9ca9,	// (0x00056062) main_vradio_pane

0x6002,	// (0x000523bb) main_vradio_pane_g1_ParamLimits

0x6002,	// (0x000523bb) main_vradio_pane_g1

0xd89c,	// (0x00059c55) main_vradio_pane_g2_ParamLimits

0xd89c,	// (0x00059c55) main_vradio_pane_g2

0x0001,

0xf82c,	// (0x0005bbe5) main_vradio_pane_g_ParamLimits

0xf82c,	// (0x0005bbe5) main_vradio_pane_g

0x601b,	// (0x000523d4) main_vradio_pane_t1_ParamLimits

0x601b,	// (0x000523d4) main_vradio_pane_t1

0x6030,	// (0x000523e9) main_vradio_pane_t2_ParamLimits

0x6030,	// (0x000523e9) main_vradio_pane_t2

0xd8a9,	// (0x00059c62) main_vradio_pane_t3_ParamLimits

0xd8a9,	// (0x00059c62) main_vradio_pane_t3

0x0002,

0xf831,	// (0x0005bbea) main_vradio_pane_t_ParamLimits

0xf831,	// (0x0005bbea) main_vradio_pane_t

0x6045,	// (0x000523fe) vradio_rocker_control_pane_ParamLimits

0x6045,	// (0x000523fe) vradio_rocker_control_pane

0x6057,	// (0x00052410) vradio_station_info_pane_ParamLimits

0x6057,	// (0x00052410) vradio_station_info_pane

0xd8bd,	// (0x00059c76) vradio_frequency_info_pane_ParamLimits

0xd8bd,	// (0x00059c76) vradio_frequency_info_pane

0xd255,	// (0x0005960e) vradio_station_info_pane_g1

0xd8cc,	// (0x00059c85) vradio_station_info_pane_t1_ParamLimits

0xd8cc,	// (0x00059c85) vradio_station_info_pane_t1

0xd8ee,	// (0x00059ca7) vradio_station_info_pane_t2_ParamLimits

0xd8ee,	// (0x00059ca7) vradio_station_info_pane_t2

0x0001,

0xf838,	// (0x0005bbf1) vradio_station_info_pane_t_ParamLimits

0xf838,	// (0x0005bbf1) vradio_station_info_pane_t

0xd900,	// (0x00059cb9) vradio_tuning_pane

0xd908,	// (0x00059cc1) vradio_rocker_control_pane_g1

0xd910,	// (0x00059cc9) vradio_rocker_control_pane_g2

0xd918,	// (0x00059cd1) vradio_rocker_control_pane_g3

0xd920,	// (0x00059cd9) vradio_rocker_control_pane_g4

0xd928,	// (0x00059ce1) vradio_rocker_control_pane_g5

0x0004,

0xf83d,	// (0x0005bbf6) vradio_rocker_control_pane_g

0x6069,	// (0x00052422) vradio_frequency_info_pane_g1

0xd930,	// (0x00059ce9) vradio_frequency_info_pane_t1_ParamLimits

0xd930,	// (0x00059ce9) vradio_frequency_info_pane_t1

0x6073,	// (0x0005242c) vradio_tuning_pane_g1

0x607e,	// (0x00052437) vradio_tuning_pane_t1

0x9ccf,	// (0x00056088) area_side_right_pane_ParamLimits

0x9ccf,	// (0x00056088) area_side_right_pane

0xcdfc,	// (0x000591b5) status_small_pane_g1

0xce04,	// (0x000591bd) status_small_pane_g2

0xce0d,	// (0x000591c6) status_small_pane_g3

0xce16,	// (0x000591cf) status_small_pane_g4

0x0003,

0xf5fd,	// (0x0005b9b6) status_small_pane_g

0xce1f,	// (0x000591d8) status_small_pane_t1

0x9ca9,	// (0x00056062) main_video3_pane

0xd944,	// (0x00059cfd) cams_zoom_vslider_pane

0xd94c,	// (0x00059d05) image3_wide_pane_ParamLimits

0xd94c,	// (0x00059d05) image3_wide_pane

0xd966,	// (0x00059d1f) image3_wide_small_pane

0xd972,	// (0x00059d2b) main_video3_pane_g1_ParamLimits

0xd972,	// (0x00059d2b) main_video3_pane_g1

0xd98e,	// (0x00059d47) main_video3_pane_g2_ParamLimits

0xd98e,	// (0x00059d47) main_video3_pane_g2

0x0001,

0xf848,	// (0x0005bc01) main_video3_pane_g_ParamLimits

0xf848,	// (0x0005bc01) main_video3_pane_g

0xd9aa,	// (0x00059d63) main_video3_pane_t1_ParamLimits

0xd9aa,	// (0x00059d63) main_video3_pane_t1

0xd9d5,	// (0x00059d8e) main_video3_pane_t2_ParamLimits

0xd9d5,	// (0x00059d8e) main_video3_pane_t2

0xda00,	// (0x00059db9) main_video3_pane_t3_ParamLimits

0xda00,	// (0x00059db9) main_video3_pane_t3

0x0002,

0xf84d,	// (0x0005bc06) main_video3_pane_t_ParamLimits

0xf84d,	// (0x0005bc06) main_video3_pane_t

0xda2d,	// (0x00059de6) cams_zoom_vslider_pane_g1

0xda36,	// (0x00059def) cams_zoom_vslider_pane_g2

0x0001,

0xf854,	// (0x0005bc0d) cams_zoom_vslider_pane_g

0xda3e,	// (0x00059df7) small_slider_vertical_pane

0xd255,	// (0x0005960e) small_slider_vertical_pane_g1

0xd255,	// (0x0005960e) small_slider_vertical_pane_g2

0xda46,	// (0x00059dff) small_slider_vertical_pane_g3

0x0002,

0xf859,	// (0x0005bc12) small_slider_vertical_pane_g

0x9ca9,	// (0x00056062) main_hwr_training_pane

0xda4f,	// (0x00059e08) hwr_training_instruct_pane_ParamLimits

0xda4f,	// (0x00059e08) hwr_training_instruct_pane

0x608d,	// (0x00052446) hwr_training_navi_pane_ParamLimits

0x608d,	// (0x00052446) hwr_training_navi_pane

0x60ac,	// (0x00052465) hwr_training_write_pane_ParamLimits

0x60ac,	// (0x00052465) hwr_training_write_pane

0x9ca9,	// (0x00056062) bg_frame_shadow_pane

0xda86,	// (0x00059e3f) hwr_training_write_pane_g1

0xda8e,	// (0x00059e47) hwr_training_write_pane_g2

0xda96,	// (0x00059e4f) hwr_training_write_pane_g3

0xda9e,	// (0x00059e57) hwr_training_write_pane_g4

0xdaa6,	// (0x00059e5f) hwr_training_write_pane_g5

0xdaae,	// (0x00059e67) hwr_training_write_pane_g6

0xdab6,	// (0x00059e6f) hwr_training_write_pane_g7

0x0006,

0xf860,	// (0x0005bc19) hwr_training_write_pane_g

0xa227,	// (0x000565e0) hwr_training_navi_pane_g1_ParamLimits

0xa227,	// (0x000565e0) hwr_training_navi_pane_g1

0xa239,	// (0x000565f2) hwr_training_navi_pane_g2_ParamLimits

0xa239,	// (0x000565f2) hwr_training_navi_pane_g2

0xa24b,	// (0x00056604) hwr_training_navi_pane_g3_ParamLimits

0xa24b,	// (0x00056604) hwr_training_navi_pane_g3

0xa25b,	// (0x00056614) hwr_training_navi_pane_g4_ParamLimits

0xa25b,	// (0x00056614) hwr_training_navi_pane_g4

0x0004,

0xf86f,	// (0x0005bc28) hwr_training_navi_pane_g_ParamLimits

0xf86f,	// (0x0005bc28) hwr_training_navi_pane_g

0xa268,	// (0x00056621) hwr_training_navi_pane_t1

0x60f4,	// (0x000524ad) list_single_hwr_training_instruct_pane_ParamLimits

0x60f4,	// (0x000524ad) list_single_hwr_training_instruct_pane

0xdabe,	// (0x00059e77) list_single_hwr_training_instruct_pane_t1

0xd195,	// (0x0005954e) bg_frame_shadow_pane_g1

0xdacd,	// (0x00059e86) bg_frame_shadow_pane_g2

0xdad5,	// (0x00059e8e) bg_frame_shadow_pane_g3

0xdadd,	// (0x00059e96) bg_frame_shadow_pane_g4

0xdae5,	// (0x00059e9e) bg_frame_shadow_pane_g5

0xdaed,	// (0x00059ea6) bg_frame_shadow_pane_g6

0xdaf5,	// (0x00059eae) bg_frame_shadow_pane_g7

0xaecb,	// (0x00057284) bg_frame_shadow_pane_g8

0x0007,

0xf87a,	// (0x0005bc33) bg_frame_shadow_pane_g

0x9ca9,	// (0x00056062) main_video_tele_dialer_pane

0x6109,	// (0x000524c2) aid_size_cell_video_keypad_ParamLimits

0x6109,	// (0x000524c2) aid_size_cell_video_keypad

0x6123,	// (0x000524dc) grid_video_dialer_keypad_pane_ParamLimits

0x6123,	// (0x000524dc) grid_video_dialer_keypad_pane

0x616f,	// (0x00052528) video_down_pane_cp_ParamLimits

0x616f,	// (0x00052528) video_down_pane_cp

0x61a1,	// (0x0005255a) cell_video_dialer_keypad_pane_ParamLimits

0x61a1,	// (0x0005255a) cell_video_dialer_keypad_pane

0xdafd,	// (0x00059eb6) bg_button_pane_cp08_ParamLimits

0xdafd,	// (0x00059eb6) bg_button_pane_cp08

0x61c3,	// (0x0005257c) cell_video_dialer_keypad_pane_g1_ParamLimits

0x61c3,	// (0x0005257c) cell_video_dialer_keypad_pane_g1

0x5875,	// (0x00051c2e) mup3_rocker2_pane_ParamLimits

0x5875,	// (0x00051c2e) mup3_rocker2_pane

0xd255,	// (0x0005960e) mup3_rocker2_pane_g1

0x4396,	// (0x0005074f) main_dialer2_pane

0x9ca9,	// (0x00056062) main_mp4_pane

0xa27e,	// (0x00056637) main_mp4_pane_g1_ParamLimits

0xa27e,	// (0x00056637) main_mp4_pane_g1

0xa27e,	// (0x00056637) main_mp4_pane_g2_ParamLimits

0xa27e,	// (0x00056637) main_mp4_pane_g2

0x61fa,	// (0x000525b3) main_mp4_pane_g3_ParamLimits

0x61fa,	// (0x000525b3) main_mp4_pane_g3

0xa28c,	// (0x00056645) main_mp4_pane_g4_ParamLimits

0xa28c,	// (0x00056645) main_mp4_pane_g4

0xa2b4,	// (0x0005666d) main_mp4_pane_g5_ParamLimits

0xa2b4,	// (0x0005666d) main_mp4_pane_g5

0x0005,

0xf89a,	// (0x0005bc53) main_mp4_pane_g_ParamLimits

0xf89a,	// (0x0005bc53) main_mp4_pane_g

0xa304,	// (0x000566bd) main_mp4_pane_t1_ParamLimits

0xa304,	// (0x000566bd) main_mp4_pane_t1

0xa360,	// (0x00056719) main_mp4_pane_t2_ParamLimits

0xa360,	// (0x00056719) main_mp4_pane_t2

0xdb09,	// (0x00059ec2) main_mp4_pane_t3_ParamLimits

0xdb09,	// (0x00059ec2) main_mp4_pane_t3

0xa3b2,	// (0x0005676b) main_mp4_pane_t4_ParamLimits

0xa3b2,	// (0x0005676b) main_mp4_pane_t4

0x0003,

0xf8a7,	// (0x0005bc60) main_mp4_pane_t_ParamLimits

0xf8a7,	// (0x0005bc60) main_mp4_pane_t

0xa3f6,	// (0x000567af) mp4_progress_pane_ParamLimits

0xa3f6,	// (0x000567af) mp4_progress_pane

0xa440,	// (0x000567f9) mp4_rocker_pane_ParamLimits

0xa440,	// (0x000567f9) mp4_rocker_pane

0xdb31,	// (0x00059eea) mp4_progress_pane_t1

0xdb4a,	// (0x00059f03) mp4_progress_pane_t2

0x0001,

0xf8b0,	// (0x0005bc69) mp4_progress_pane_t

0xdb63,	// (0x00059f1c) mup_progress_pane_cp04

0xd255,	// (0x0005960e) mp4_rocker_pane_g1

0x6236,	// (0x000525ef) aid_cell_size_keypad2_ParamLimits

0x6236,	// (0x000525ef) aid_cell_size_keypad2

0x624c,	// (0x00052605) dialer2_ne_pane_ParamLimits

0x624c,	// (0x00052605) dialer2_ne_pane

0x6266,	// (0x0005261f) grid_dialer2_keypad_pane_ParamLimits

0x6266,	// (0x0005261f) grid_dialer2_keypad_pane

0xd03a,	// (0x000593f3) bg_popup_call_pane_cp07_ParamLimits

0xd03a,	// (0x000593f3) bg_popup_call_pane_cp07

0x6282,	// (0x0005263b) dialer2_ne_pane_t1_ParamLimits

0x6282,	// (0x0005263b) dialer2_ne_pane_t1

0x62bd,	// (0x00052676) cell_dialer2_keypad_pane_ParamLimits

0x62bd,	// (0x00052676) cell_dialer2_keypad_pane

0xdb81,	// (0x00059f3a) bg_button_pane_pane_cp04_ParamLimits

0xdb81,	// (0x00059f3a) bg_button_pane_pane_cp04

0x62df,	// (0x00052698) cell_dialer2_keypad_pane_g1_ParamLimits

0x62df,	// (0x00052698) cell_dialer2_keypad_pane_g1

0x2238,	// (0x0004e5f1) aid_placing_vt_set_content_ParamLimits

0x2238,	// (0x0004e5f1) aid_placing_vt_set_content

0x2260,	// (0x0004e619) aid_placing_vt_set_title_ParamLimits

0x2260,	// (0x0004e619) aid_placing_vt_set_title

0x9ca9,	// (0x00056062) main_image3_pane

0x63a5,	// (0x0005275e) area_side_right_pane_cp01_ParamLimits

0x63a5,	// (0x0005275e) area_side_right_pane_cp01

0xa27e,	// (0x00056637) main_image3_pane_g1_ParamLimits

0xa27e,	// (0x00056637) main_image3_pane_g1

0x63bc,	// (0x00052775) main_image3_pane_g2_ParamLimits

0x63bc,	// (0x00052775) main_image3_pane_g2

0x63e4,	// (0x0005279d) main_image3_pane_g3_ParamLimits

0x63e4,	// (0x0005279d) main_image3_pane_g3

0x640e,	// (0x000527c7) main_image3_pane_g4_ParamLimits

0x640e,	// (0x000527c7) main_image3_pane_g4

0x0003,

0xf8bf,	// (0x0005bc78) main_image3_pane_g_ParamLimits

0xf8bf,	// (0x0005bc78) main_image3_pane_g

0x6438,	// (0x000527f1) main_image3_pane_t1_ParamLimits

0x6438,	// (0x000527f1) main_image3_pane_t1

0x6490,	// (0x00052849) main_image3_pane_t2_ParamLimits

0x6490,	// (0x00052849) main_image3_pane_t2

0x64e2,	// (0x0005289b) main_image3_pane_t3_ParamLimits

0x64e2,	// (0x0005289b) main_image3_pane_t3

0x0003,

0xf8c8,	// (0x0005bc81) main_image3_pane_t_ParamLimits

0xf8c8,	// (0x0005bc81) main_image3_pane_t

0xa939,	// (0x00056cf2) grid_sctrl_middle_pane_cp01_ParamLimits

0xa939,	// (0x00056cf2) grid_sctrl_middle_pane_cp01

0x656a,	// (0x00052923) cell_sctrl_middle_pane_cp01_ParamLimits

0x656a,	// (0x00052923) cell_sctrl_middle_pane_cp01

0x6587,	// (0x00052940) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x6587,	// (0x00052940) cell_sctrl_middle_pane_cp01_g1

0x9ca9,	// (0x00056062) main_call4_pane

0x659d,	// (0x00052956) aid_size_button_call4_ParamLimits

0x659d,	// (0x00052956) aid_size_button_call4

0x65ce,	// (0x00052987) call4_windows_pane_ParamLimits

0x65ce,	// (0x00052987) call4_windows_pane

0x65ee,	// (0x000529a7) grid_call4_button_pane_ParamLimits

0x65ee,	// (0x000529a7) grid_call4_button_pane

0xdb8d,	// (0x00059f46) call4_windows_conf_pane

0xdba4,	// (0x00059f5d) popup_call4_audio_first_window_ParamLimits

0xdba4,	// (0x00059f5d) popup_call4_audio_first_window

0xdbf0,	// (0x00059fa9) popup_call4_audio_second_window_ParamLimits

0xdbf0,	// (0x00059fa9) popup_call4_audio_second_window

0xdc04,	// (0x00059fbd) popup_call4_audio_wait_window_ParamLimits

0xdc04,	// (0x00059fbd) popup_call4_audio_wait_window

0x661b,	// (0x000529d4) cell_call4_button_pane_ParamLimits

0x661b,	// (0x000529d4) cell_call4_button_pane

0x6644,	// (0x000529fd) bg_button_pane_cp09_ParamLimits

0x6644,	// (0x000529fd) bg_button_pane_cp09

0x6650,	// (0x00052a09) cell_call4_button_pane_g1_ParamLimits

0x6650,	// (0x00052a09) cell_call4_button_pane_g1

0x6676,	// (0x00052a2f) cell_call4_button_pane_t1_ParamLimits

0x6676,	// (0x00052a2f) cell_call4_button_pane_t1

0xdc4c,	// (0x0005a005) popup_call4_audio_conf_window_ParamLimits

0xdc4c,	// (0x0005a005) popup_call4_audio_conf_window

0x58d5,	// (0x00051c8e) mup3_progress_pane_t1_ParamLimits

0x58f4,	// (0x00051cad) mup3_progress_pane_t2_ParamLimits

0xd55c,	// (0x00059915) mup3_progress_pane_t3_ParamLimits

0xf7a1,	// (0x0005bb5a) mup3_progress_pane_t_ParamLimits

0xd579,	// (0x00059932) mup_progress_pane_cp03_ParamLimits

0x5ed3,	// (0x0005228c) mup3_control_keys_pane_g4_copy1

0xa424,	// (0x000567dd) mp4_rocker2_pane_ParamLimits

0xa424,	// (0x000567dd) mp4_rocker2_pane

0xdc60,	// (0x0005a019) mp4_rocker2_pane_g1

0xdc68,	// (0x0005a021) mp4_rocker2_pane_g2

0xa492,	// (0x0005684b) mp4_rocker2_pane_g3

0xa49a,	// (0x00056853) mp4_rocker2_pane_g4

0xa4a2,	// (0x0005685b) mp4_rocker2_pane_g5

0x0004,

0xf8d1,	// (0x0005bc8a) mp4_rocker2_pane_g

0x9ca9,	// (0x00056062) main_camera4_pane

0x9ca9,	// (0x00056062) main_video4_pane

0x613d,	// (0x000524f6) main_video_tele_dialer_pane_t1_ParamLimits

0x613d,	// (0x000524f6) main_video_tele_dialer_pane_t1

0x6156,	// (0x0005250f) main_video_tele_dialer_pane_t2_ParamLimits

0x6156,	// (0x0005250f) main_video_tele_dialer_pane_t2

0x0001,

0xf88b,	// (0x0005bc44) main_video_tele_dialer_pane_t_ParamLimits

0xf88b,	// (0x0005bc44) main_video_tele_dialer_pane_t

0x66b4,	// (0x00052a6d) cam4_autofocus_pane_ParamLimits

0x66b4,	// (0x00052a6d) cam4_autofocus_pane

0x66ca,	// (0x00052a83) cam4_image_uncrop_pane_ParamLimits

0x66ca,	// (0x00052a83) cam4_image_uncrop_pane

0x66e4,	// (0x00052a9d) cam4_indicators_pane_ParamLimits

0x66e4,	// (0x00052a9d) cam4_indicators_pane

0x670f,	// (0x00052ac8) main_camera4_pane_g1_ParamLimits

0x670f,	// (0x00052ac8) main_camera4_pane_g1

0x6721,	// (0x00052ada) main_camera4_pane_g2_ParamLimits

0x6721,	// (0x00052ada) main_camera4_pane_g2

0x6734,	// (0x00052aed) main_camera4_pane_g3_ParamLimits

0x6734,	// (0x00052aed) main_camera4_pane_g3

0x6747,	// (0x00052b00) main_camera4_pane_g4_ParamLimits

0x6747,	// (0x00052b00) main_camera4_pane_g4

0x675a,	// (0x00052b13) main_camera4_pane_g5_ParamLimits

0x675a,	// (0x00052b13) main_camera4_pane_g5

0x0005,

0xf8dc,	// (0x0005bc95) main_camera4_pane_g_ParamLimits

0xf8dc,	// (0x0005bc95) main_camera4_pane_g

0x677e,	// (0x00052b37) main_camera4_pane_t1_ParamLimits

0x677e,	// (0x00052b37) main_camera4_pane_t1

0xd4c1,	// (0x0005987a) bg_tb_trans_pane_cp06

0xa4ce,	// (0x00056887) cam4_indicators_pane_g1

0xa4df,	// (0x00056898) cam4_indicators_pane_g2

0x0002,

0xf8f7,	// (0x0005bcb0) cam4_indicators_pane_g

0xa4fd,	// (0x000568b6) cam4_indicators_pane_t1

0x67e2,	// (0x00052b9b) main_video4_pane_g1_ParamLimits

0x67e2,	// (0x00052b9b) main_video4_pane_g1

0x67f1,	// (0x00052baa) main_video4_pane_g2_ParamLimits

0x67f1,	// (0x00052baa) main_video4_pane_g2

0x6800,	// (0x00052bb9) main_video4_pane_g3_ParamLimits

0x6800,	// (0x00052bb9) main_video4_pane_g3

0x680f,	// (0x00052bc8) main_video4_pane_g4_ParamLimits

0x680f,	// (0x00052bc8) main_video4_pane_g4

0x0004,

0xf8fe,	// (0x0005bcb7) main_video4_pane_g_ParamLimits

0xf8fe,	// (0x0005bcb7) main_video4_pane_g

0x682d,	// (0x00052be6) vid4_indicators_pane_ParamLimits

0x682d,	// (0x00052be6) vid4_indicators_pane

0x685b,	// (0x00052c14) video4_image_uncrop_cif_pane_ParamLimits

0x685b,	// (0x00052c14) video4_image_uncrop_cif_pane

0x6875,	// (0x00052c2e) video4_image_uncrop_nhd_pane_ParamLimits

0x6875,	// (0x00052c2e) video4_image_uncrop_nhd_pane

0x66ca,	// (0x00052a83) video4_image_uncrop_vga_pane_ParamLimits

0x66ca,	// (0x00052a83) video4_image_uncrop_vga_pane

0xa939,	// (0x00056cf2) bg_tb_trans_pane_cp07

0xa529,	// (0x000568e2) vid4_indicators_pane_g1

0xa53d,	// (0x000568f6) vid4_indicators_pane_g2

0xa551,	// (0x0005690a) vid4_indicators_pane_g3

0x0004,

0xf909,	// (0x0005bcc2) vid4_indicators_pane_g

0xa580,	// (0x00056939) vid4_indicators_pane_t1

0x6889,	// (0x00052c42) cam4_autofocus_pane_g1

0x6891,	// (0x00052c4a) cam4_autofocus_pane_g2

0x6899,	// (0x00052c52) cam4_autofocus_pane_g3

0x0002,

0xf914,	// (0x0005bccd) cam4_autofocus_pane_g

0x68a1,	// (0x00052c5a) cam4_autofocus_pane_g3_copy1

0x6185,	// (0x0005253e) video_down_pane_cp_t1

0x6193,	// (0x0005254c) video_down_pane_cp_t2

0x0001,

0xf890,	// (0x0005bc49) video_down_pane_cp_t

0xa939,	// (0x00056cf2) popup_vitu2_window_ParamLimits

0xa939,	// (0x00056cf2) popup_vitu2_window

0x68a9,	// (0x00052c62) aid_size_cell2_itu2_ParamLimits

0x68a9,	// (0x00052c62) aid_size_cell2_itu2

0x68cf,	// (0x00052c88) aid_size_cell_itu2_ParamLimits

0x68cf,	// (0x00052c88) aid_size_cell_itu2

0x692b,	// (0x00052ce4) bg_popup_window_pane_cp09_ParamLimits

0x692b,	// (0x00052ce4) bg_popup_window_pane_cp09

0x6939,	// (0x00052cf2) field_vitu2_entry_pane_ParamLimits

0x6939,	// (0x00052cf2) field_vitu2_entry_pane

0x695f,	// (0x00052d18) grid_vitu2_function_pane_ParamLimits

0x695f,	// (0x00052d18) grid_vitu2_function_pane

0x69b0,	// (0x00052d69) grid_vitu2_itu_pane_ParamLimits

0x69b0,	// (0x00052d69) grid_vitu2_itu_pane

0x6a43,	// (0x00052dfc) cell_vitu2_itu_pane_ParamLimits

0x6a43,	// (0x00052dfc) cell_vitu2_itu_pane

0x6a67,	// (0x00052e20) cell_vitu2_function_pane_ParamLimits

0x6a67,	// (0x00052e20) cell_vitu2_function_pane

0xdc70,	// (0x0005a029) bg_popup_call_pane_cp08_ParamLimits

0xdc70,	// (0x0005a029) bg_popup_call_pane_cp08

0xdc89,	// (0x0005a042) field_vitu2_entry_pane_g1

0xdc95,	// (0x0005a04e) field_vitu2_entry_pane_g2

0x0002,

0xf91b,	// (0x0005bcd4) field_vitu2_entry_pane_g

0x04f4,	// (0x0004c8ad) field_vitu2_entry_pane_t1_ParamLimits

0x04f4,	// (0x0004c8ad) field_vitu2_entry_pane_t1

0x6aa6,	// (0x00052e5f) field_vitu2_entry_pane_t2_ParamLimits

0x6aa6,	// (0x00052e5f) field_vitu2_entry_pane_t2

0x0001,

0xf922,	// (0x0005bcdb) field_vitu2_entry_pane_t_ParamLimits

0xf922,	// (0x0005bcdb) field_vitu2_entry_pane_t

0x6ac3,	// (0x00052e7c) bg_button_pane_cp010_ParamLimits

0x6ac3,	// (0x00052e7c) bg_button_pane_cp010

0x6ad1,	// (0x00052e8a) cell_vitu2_itu_pane_g1

0x6afc,	// (0x00052eb5) cell_vitu2_itu_pane_t1_ParamLimits

0x6afc,	// (0x00052eb5) cell_vitu2_itu_pane_t1

0x0523,	// (0x0004c8dc) cell_vitu2_itu_pane_t2_ParamLimits

0x0523,	// (0x0004c8dc) cell_vitu2_itu_pane_t2

0x0002,

0xf92c,	// (0x0005bce5) cell_vitu2_itu_pane_t_ParamLimits

0xf92c,	// (0x0005bce5) cell_vitu2_itu_pane_t

0xa939,	// (0x00056cf2) bg_button_pane_cp011

0x6b5a,	// (0x00052f13) cell_vitu2_function_pane_g1

0x9ca9,	// (0x00056062) main_myfav_hc_pane

0x6532,	// (0x000528eb) popup_image3_note_pane_ParamLimits

0x6532,	// (0x000528eb) popup_image3_note_pane

0x654e,	// (0x00052907) popup_image3_tool_bar_pane_ParamLimits

0x654e,	// (0x00052907) popup_image3_tool_bar_pane

0x05b1,	// (0x0004c96a) cell_vitu2_itu_pane_t3_ParamLimits

0x05b1,	// (0x0004c96a) cell_vitu2_itu_pane_t3

0x9ca9,	// (0x00056062) bg_popup_trans_pane

0xdcb7,	// (0x0005a070) grid_image3_tool_bar_pane

0xdcc1,	// (0x0005a07a) bg_popup_trans_pane_g1

0xb229,	// (0x000575e2) bg_popup_trans_pane_g2

0xdcc9,	// (0x0005a082) bg_popup_trans_pane_g3

0xdcd1,	// (0x0005a08a) bg_popup_trans_pane_g4

0xdcd9,	// (0x0005a092) bg_popup_trans_pane_g5

0xdce1,	// (0x0005a09a) bg_popup_trans_pane_g6

0xdce9,	// (0x0005a0a2) bg_popup_trans_pane_g7

0xdcf1,	// (0x0005a0aa) bg_popup_trans_pane_g8

0xb209,	// (0x000575c2) bg_popup_trans_pane_g9

0x0008,

0xf933,	// (0x0005bcec) bg_popup_trans_pane_g

0xdcf9,	// (0x0005a0b2) cell_image3_tool_bar_pane_ParamLimits

0xdcf9,	// (0x0005a0b2) cell_image3_tool_bar_pane

0xd255,	// (0x0005960e) cell_image3_tool_bar_pane_g1

0x9ca9,	// (0x00056062) bg_popup_trans_pane_cp1

0xdd0d,	// (0x0005a0c6) popup_image3_note_pane_t1

0xdd1b,	// (0x0005a0d4) popup_image3_note_pane_t2

0xdd29,	// (0x0005a0e2) popup_image3_note_pane_t3

0x0002,

0xf946,	// (0x0005bcff) popup_image3_note_pane_t

0xdd37,	// (0x0005a0f0) popup_image3_note_pane_t3_copy1

0x6b6e,	// (0x00052f27) bg_myfav_hc_instruction_pane_ParamLimits

0x6b6e,	// (0x00052f27) bg_myfav_hc_instruction_pane

0x6b82,	// (0x00052f3b) cell_myfav_contact_pane_ParamLimits

0x6b82,	// (0x00052f3b) cell_myfav_contact_pane

0x6ba0,	// (0x00052f59) cell_myfav_contact_pane_cp1_ParamLimits

0x6ba0,	// (0x00052f59) cell_myfav_contact_pane_cp1

0x6bb8,	// (0x00052f71) cell_myfav_contact_pane_cp2_ParamLimits

0x6bb8,	// (0x00052f71) cell_myfav_contact_pane_cp2

0x6bd0,	// (0x00052f89) cell_myfav_contact_pane_cp3_ParamLimits

0x6bd0,	// (0x00052f89) cell_myfav_contact_pane_cp3

0x6be7,	// (0x00052fa0) cell_myfav_contact_pane_cp4_ParamLimits

0x6be7,	// (0x00052fa0) cell_myfav_contact_pane_cp4

0x6bff,	// (0x00052fb8) cell_myfav_contact_pane_cp5_ParamLimits

0x6bff,	// (0x00052fb8) cell_myfav_contact_pane_cp5

0x6c13,	// (0x00052fcc) cell_myfav_contact_pane_cp6_ParamLimits

0x6c13,	// (0x00052fcc) cell_myfav_contact_pane_cp6

0x6c29,	// (0x00052fe2) cell_myfav_contact_pane_cp7_ParamLimits

0x6c29,	// (0x00052fe2) cell_myfav_contact_pane_cp7

0xdd45,	// (0x0005a0fe) listscroll_gen_pane_cp05

0x6c43,	// (0x00052ffc) main_myfav_hc_pane_g1_ParamLimits

0x6c43,	// (0x00052ffc) main_myfav_hc_pane_g1

0x6c5d,	// (0x00053016) main_myfav_hc_pane_g2_ParamLimits

0x6c5d,	// (0x00053016) main_myfav_hc_pane_g2

0x0002,

0xf94d,	// (0x0005bd06) main_myfav_hc_pane_g_ParamLimits

0xf94d,	// (0x0005bd06) main_myfav_hc_pane_g

0x6c8f,	// (0x00053048) main_myfav_hc_pane_t1_ParamLimits

0x6c8f,	// (0x00053048) main_myfav_hc_pane_t1

0xdd4e,	// (0x0005a107) main_myfav_hc_pane_t2_ParamLimits

0xdd4e,	// (0x0005a107) main_myfav_hc_pane_t2

0xdd60,	// (0x0005a119) main_myfav_hc_pane_t3_ParamLimits

0xdd60,	// (0x0005a119) main_myfav_hc_pane_t3

0x6ca6,	// (0x0005305f) main_myfav_hc_pane_t4_ParamLimits

0x6ca6,	// (0x0005305f) main_myfav_hc_pane_t4

0x0004,

0xf954,	// (0x0005bd0d) main_myfav_hc_pane_t_ParamLimits

0xf954,	// (0x0005bd0d) main_myfav_hc_pane_t

0xd255,	// (0x0005960e) bg_myfav_hc_instruction_pane_g1

0xdd72,	// (0x0005a12b) cell_myfav_contact_pane_g1_ParamLimits

0xdd72,	// (0x0005a12b) cell_myfav_contact_pane_g1

0xdd72,	// (0x0005a12b) cell_myfav_contact_pane_g2_ParamLimits

0xdd72,	// (0x0005a12b) cell_myfav_contact_pane_g2

0xdd7e,	// (0x0005a137) cell_myfav_contact_pane_g3_ParamLimits

0xdd7e,	// (0x0005a137) cell_myfav_contact_pane_g3

0xd546,	// (0x000598ff) cell_myfav_contact_pane_g4_ParamLimits

0xd546,	// (0x000598ff) cell_myfav_contact_pane_g4

0xdd8b,	// (0x0005a144) cell_myfav_contact_pane_g5_ParamLimits

0xdd8b,	// (0x0005a144) cell_myfav_contact_pane_g5

0x0004,

0xf95f,	// (0x0005bd18) cell_myfav_contact_pane_g_ParamLimits

0xf95f,	// (0x0005bd18) cell_myfav_contact_pane_g

0x6c77,	// (0x00053030) main_myfav_hc_pane_g3_ParamLimits

0x6c77,	// (0x00053030) main_myfav_hc_pane_g3

0x12d3,	// (0x0004d68c) popup_adpt_find_window

0x6cce,	// (0x00053087) afind_page_pane_ParamLimits

0x6cce,	// (0x00053087) afind_page_pane

0x6ce3,	// (0x0005309c) aid_size_cell_afind_ParamLimits

0x6ce3,	// (0x0005309c) aid_size_cell_afind

0x6d01,	// (0x000530ba) bg_popup_sub_pane_cp09_ParamLimits

0x6d01,	// (0x000530ba) bg_popup_sub_pane_cp09

0x6d0e,	// (0x000530c7) find_pane_cp01_ParamLimits

0x6d0e,	// (0x000530c7) find_pane_cp01

0xdd97,	// (0x0005a150) grid_afind_control_pane_ParamLimits

0xdd97,	// (0x0005a150) grid_afind_control_pane

0x6d1b,	// (0x000530d4) grid_afind_pane_ParamLimits

0x6d1b,	// (0x000530d4) grid_afind_pane

0x6d3d,	// (0x000530f6) cell_afind_pane_ParamLimits

0x6d3d,	// (0x000530f6) cell_afind_pane

0xd255,	// (0x0005960e) afind_page_pane_g1

0x6d9e,	// (0x00053157) afind_page_pane_g2

0x6da7,	// (0x00053160) afind_page_pane_g3

0x0002,

0xf96a,	// (0x0005bd23) afind_page_pane_g

0x6db0,	// (0x00053169) afind_page_pane_t1

0xddab,	// (0x0005a164) cell_afind_grid_control_pane_ParamLimits

0xddab,	// (0x0005a164) cell_afind_grid_control_pane

0xdb81,	// (0x00059f3a) bg_button_pane_cp69_ParamLimits

0xdb81,	// (0x00059f3a) bg_button_pane_cp69

0x6dd0,	// (0x00053189) cell_afind_pane_g1_ParamLimits

0x6dd0,	// (0x00053189) cell_afind_pane_g1

0x6ddd,	// (0x00053196) cell_afind_pane_t1_ParamLimits

0x6ddd,	// (0x00053196) cell_afind_pane_t1

0xb022,	// (0x000573db) bg_button_pane_cp72

0xddba,	// (0x0005a173) cell_afind_grid_control_pane_g1

0x3e56,	// (0x0005020f) aid_image_placing_area_ParamLimits

0x3e56,	// (0x0005020f) aid_image_placing_area

0xd84f,	// (0x00059c08) field_vitu_entry_pane_g1_ParamLimits

0xd84f,	// (0x00059c08) field_vitu_entry_pane_g1

0xd85b,	// (0x00059c14) field_vitu_entry_pane_g2_ParamLimits

0xd85b,	// (0x00059c14) field_vitu_entry_pane_g2

0x0001,

0xf81b,	// (0x0005bbd4) field_vitu_entry_pane_g_ParamLimits

0xf81b,	// (0x0005bbd4) field_vitu_entry_pane_g

0x5f9a,	// (0x00052353) cell_vitu_itu_pane_g1_ParamLimits

0x5fdc,	// (0x00052395) cell_vitu_itu_pane_t3_ParamLimits

0x5fdc,	// (0x00052395) cell_vitu_itu_pane_t3

0xdb31,	// (0x00059eea) mp4_progress_pane_t1_ParamLimits

0xdb4a,	// (0x00059f03) mp4_progress_pane_t2_ParamLimits

0xf8b0,	// (0x0005bc69) mp4_progress_pane_t_ParamLimits

0xdb63,	// (0x00059f1c) mup_progress_pane_cp04_ParamLimits

0x6cba,	// (0x00053073) main_myfav_hc_pane_t5_ParamLimits

0x6cba,	// (0x00053073) main_myfav_hc_pane_t5

0x9cc7,	// (0x00056080) aid_zoom_text_primary

0x12d3,	// (0x0004d68c) popup_adpt_find_window_ParamLimits

0xa939,	// (0x00056cf2) main_cam_set_pane

0x66fb,	// (0x00052ab4) cam4_zoom_pane_ParamLimits

0x66fb,	// (0x00052ab4) cam4_zoom_pane

0x6def,	// (0x000531a8) main_cam_set_pane_g1_ParamLimits

0x6def,	// (0x000531a8) main_cam_set_pane_g1

0x6dfd,	// (0x000531b6) main_cam_set_pane_g2_ParamLimits

0x6dfd,	// (0x000531b6) main_cam_set_pane_g2

0x0001,

0xf971,	// (0x0005bd2a) main_cam_set_pane_g_ParamLimits

0xf971,	// (0x0005bd2a) main_cam_set_pane_g

0x6e1e,	// (0x000531d7) main_cam_set_pane_t1_ParamLimits

0x6e1e,	// (0x000531d7) main_cam_set_pane_t1

0x6e39,	// (0x000531f2) main_cset_listscroll_pane_ParamLimits

0x6e39,	// (0x000531f2) main_cset_listscroll_pane

0x6e59,	// (0x00053212) main_cset_slider_pane_ParamLimits

0x6e59,	// (0x00053212) main_cset_slider_pane

0xddcb,	// (0x0005a184) main_cset_list_pane_ParamLimits

0xddcb,	// (0x0005a184) main_cset_list_pane

0xdddb,	// (0x0005a194) scroll_pane_cp028

0x6e7f,	// (0x00053238) aid_area_touch_slider

0x6e9b,	// (0x00053254) cset_slider_pane

0x6ec5,	// (0x0005327e) main_cset_slider_pane_g1

0x6eda,	// (0x00053293) main_cset_slider_pane_g2

0x0011,

0xf976,	// (0x0005bd2f) main_cset_slider_pane_g

0xde14,	// (0x0005a1cd) main_cset_slider_pane_t1

0x6f96,	// (0x0005334f) main_cset_slider_pane_t2

0x6fb0,	// (0x00053369) main_cset_slider_pane_t3

0x6fca,	// (0x00053383) main_cset_slider_pane_t4

0x6fe4,	// (0x0005339d) main_cset_slider_pane_t5

0x6ffe,	// (0x000533b7) main_cset_slider_pane_t6

0x7013,	// (0x000533cc) main_cset_slider_pane_t7

0x000e,

0xf99b,	// (0x0005bd54) main_cset_slider_pane_t

0x7117,	// (0x000534d0) cset_list_set_pane_ParamLimits

0x7117,	// (0x000534d0) cset_list_set_pane

0x7129,	// (0x000534e2) aid_position_infowindow_above

0x7131,	// (0x000534ea) aid_position_infowindow_below

0x7139,	// (0x000534f2) cset_list_set_pane_g1_ParamLimits

0x7139,	// (0x000534f2) cset_list_set_pane_g1

0x7145,	// (0x000534fe) cset_list_set_pane_g3_ParamLimits

0x7145,	// (0x000534fe) cset_list_set_pane_g3

0x0001,

0xf9ba,	// (0x0005bd73) cset_list_set_pane_g_ParamLimits

0xf9ba,	// (0x0005bd73) cset_list_set_pane_g

0x7154,	// (0x0005350d) cset_list_set_pane_t1_ParamLimits

0x7154,	// (0x0005350d) cset_list_set_pane_t1

0xa939,	// (0x00056cf2) list_highlight_pane_cp021_ParamLimits

0xa939,	// (0x00056cf2) list_highlight_pane_cp021

0xbb88,	// (0x00057f41) cset_slider_pane_g1

0xbb9a,	// (0x00057f53) cset_slider_pane_g2

0xbb91,	// (0x00057f4a) cset_slider_pane_g3

0x0002,

0xf9bf,	// (0x0005bd78) cset_slider_pane_g

0xa597,	// (0x00056950) aid_area_touch_cam4_zoom

0xa59f,	// (0x00056958) cam4_zoom_cont_pane

0xa5a7,	// (0x00056960) cam4_zoom_pane_g1

0xa5af,	// (0x00056968) cam4_zoom_pane_g2

0x7169,	// (0x00053522) cam4_zoom_pane_g3

0x0002,

0xf9c6,	// (0x0005bd7f) cam4_zoom_pane_g

0xdeb4,	// (0x0005a26d) cam4_zoom_cont_pane_g1

0xdebd,	// (0x0005a276) cam4_zoom_cont_pane_g2

0xdec6,	// (0x0005a27f) cam4_zoom_cont_pane_g3

0x0002,

0xf9cd,	// (0x0005bd86) cam4_zoom_cont_pane_g

0x65bb,	// (0x00052974) call4_image_pane_ParamLimits

0x65bb,	// (0x00052974) call4_image_pane

0xdb8d,	// (0x00059f46) call4_windows_conf_pane_ParamLimits

0xdbce,	// (0x00059f87) popup_call4_audio_in_window_ParamLimits

0xdbce,	// (0x00059f87) popup_call4_audio_in_window

0x9ca9,	// (0x00056062) bg_popup_call2_act_pane_cp02

0xdc44,	// (0x00059ffd) call4_list_conf_pane

0xd255,	// (0x0005960e) call4_image_pane_g1

0xd255,	// (0x0005960e) call4_image_pane_g2

0x0001,

0xf6e1,	// (0x0005ba9a) call4_image_pane_g

0xdecf,	// (0x0005a288) list_single_graphic_popup_conf4_pane_ParamLimits

0xdecf,	// (0x0005a288) list_single_graphic_popup_conf4_pane

0x9ca9,	// (0x00056062) list_highlight_pane_cp022

0xdee2,	// (0x0005a29b) list_single_graphic_popup_conf4_pane_g1

0xb751,	// (0x00057b0a) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9d4,	// (0x0005bd8d) list_single_graphic_popup_conf4_pane_g

0xdeea,	// (0x0005a2a3) list_single_graphic_popup_conf4_pane_t1

0x2384,	// (0x0004e73d) popup_vtel_slider_window_ParamLimits

0x2384,	// (0x0004e73d) popup_vtel_slider_window

0xdb6f,	// (0x00059f28) dialer2_ne_pane_t2_ParamLimits

0xdb6f,	// (0x00059f28) dialer2_ne_pane_t2

0x0001,

0xf8b5,	// (0x0005bc6e) dialer2_ne_pane_t_ParamLimits

0xf8b5,	// (0x0005bc6e) dialer2_ne_pane_t

0xd03a,	// (0x000593f3) bg_popup_sub_pane_cp010_ParamLimits

0xd03a,	// (0x000593f3) bg_popup_sub_pane_cp010

0x7171,	// (0x0005352a) popup_vtel_slider_window_g1_ParamLimits

0x7171,	// (0x0005352a) popup_vtel_slider_window_g1

0x7184,	// (0x0005353d) popup_vtel_slider_window_g2_ParamLimits

0x7184,	// (0x0005353d) popup_vtel_slider_window_g2

0x0003,

0xf9d9,	// (0x0005bd92) popup_vtel_slider_window_g_ParamLimits

0xf9d9,	// (0x0005bd92) popup_vtel_slider_window_g

0x71da,	// (0x00053593) vtel_slider_pane_ParamLimits

0x71da,	// (0x00053593) vtel_slider_pane

0x71fc,	// (0x000535b5) vtel_slider_pane_g1_ParamLimits

0x71fc,	// (0x000535b5) vtel_slider_pane_g1

0x7210,	// (0x000535c9) vtel_slider_pane_g2_ParamLimits

0x7210,	// (0x000535c9) vtel_slider_pane_g2

0x7228,	// (0x000535e1) vtel_slider_pane_g3_ParamLimits

0x7228,	// (0x000535e1) vtel_slider_pane_g3

0x71fc,	// (0x000535b5) vtel_slider_pane_g4_ParamLimits

0x71fc,	// (0x000535b5) vtel_slider_pane_g4

0x723e,	// (0x000535f7) vtel_slider_pane_g5_ParamLimits

0x723e,	// (0x000535f7) vtel_slider_pane_g5

0x0004,

0xf9e2,	// (0x0005bd9b) vtel_slider_pane_g_ParamLimits

0xf9e2,	// (0x0005bd9b) vtel_slider_pane_g

0xa939,	// (0x00056cf2) main_gallery2_pane

0x68fb,	// (0x00052cb4) aid_size_row_itut2_dropdow_list_ParamLimits

0x68fb,	// (0x00052cb4) aid_size_row_itut2_dropdow_list

0x6987,	// (0x00052d40) grid_vitu2_function_top_pane_ParamLimits

0x6987,	// (0x00052d40) grid_vitu2_function_top_pane

0x69ec,	// (0x00052da5) popup_vitu2_dropdown_list_window_ParamLimits

0x69ec,	// (0x00052da5) popup_vitu2_dropdown_list_window

0x6a15,	// (0x00052dce) popup_vitu2_match_list_window

0x7254,	// (0x0005360d) cell_vitu2_function_top_pane_ParamLimits

0x7254,	// (0x0005360d) cell_vitu2_function_top_pane

0x7272,	// (0x0005362b) cell_vitu2_function_top_pane_cp01_ParamLimits

0x7272,	// (0x0005362b) cell_vitu2_function_top_pane_cp01

0x7290,	// (0x00053649) cell_vitu2_function_top_wide_pane_ParamLimits

0x7290,	// (0x00053649) cell_vitu2_function_top_wide_pane

0xa939,	// (0x00056cf2) bg_button_pane_cp012

0x72ae,	// (0x00053667) cell_vitu2_function_top_pane_g1

0xa5b7,	// (0x00056970) bg_button_pane_cp013_ParamLimits

0xa5b7,	// (0x00056970) bg_button_pane_cp013

0x72c2,	// (0x0005367b) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x72c2,	// (0x0005367b) cell_vitu2_function_top_wide_pane_g1

0xa939,	// (0x00056cf2) bg_popup_sub_pane_cp20

0x72da,	// (0x00053693) list_vitu2_match_list_pane

0xdcc1,	// (0x0005a07a) bg_popup_sub_pane_cp20_g1

0xdcc9,	// (0x0005a082) bg_popup_sub_pane_cp20_g2

0xb229,	// (0x000575e2) bg_popup_sub_pane_cp20_g3

0xdcd1,	// (0x0005a08a) bg_popup_sub_pane_cp20_g4

0xb209,	// (0x000575c2) bg_popup_sub_pane_cp20_g5

0xdf00,	// (0x0005a2b9) bg_popup_sub_pane_cp20_g6

0xdce1,	// (0x0005a09a) bg_popup_sub_pane_cp20_g7

0xdce9,	// (0x0005a0a2) bg_popup_sub_pane_cp20_g8

0xdcf1,	// (0x0005a0aa) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9ed,	// (0x0005bda6) bg_popup_sub_pane_cp20_g

0xa5d3,	// (0x0005698c) list_vitu2_match_list_item_pane_ParamLimits

0xa5d3,	// (0x0005698c) list_vitu2_match_list_item_pane

0xa5e5,	// (0x0005699e) list_vitu2_match_list_item_pane_t1

0x9ca9,	// (0x00056062) bg_popup_sub_pane_cp21

0xb679,	// (0x00057a32) grid_vitu2_dropdown_list_pane

0x72f8,	// (0x000536b1) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x72f8,	// (0x000536b1) cell_vitu2_dropdown_list_char_pane

0x7319,	// (0x000536d2) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x7319,	// (0x000536d2) cell_vitu2_dropdown_list_ctrl_pane

0xdf08,	// (0x0005a2c1) cell_vitu2_dropdown_list_char_pane_g1

0xdf11,	// (0x0005a2ca) cell_vitu2_dropdown_list_char_pane_g2

0xdf1a,	// (0x0005a2d3) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa0a,	// (0x0005bdc3) cell_vitu2_dropdown_list_char_pane_g

0x7345,	// (0x000536fe) cell_vitu2_dropdown_list_char_pane_t1

0x7353,	// (0x0005370c) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x7353,	// (0x0005370c) cell_vitu2_dropdown_list_ctrl_pane_g1

0x7360,	// (0x00053719) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x7360,	// (0x00053719) cell_vitu2_dropdown_list_ctrl_pane_g2

0x736d,	// (0x00053726) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x736d,	// (0x00053726) cell_vitu2_dropdown_list_ctrl_pane_g3

0x737a,	// (0x00053733) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x737a,	// (0x00053733) cell_vitu2_dropdown_list_ctrl_pane_g4

0xd4c1,	// (0x0005987a) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xd4c1,	// (0x0005987a) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa11,	// (0x0005bdca) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa11,	// (0x0005bdca) cell_vitu2_dropdown_list_ctrl_pane_g

0x7396,	// (0x0005374f) aid_size_cell_gallery2_ParamLimits

0x7396,	// (0x0005374f) aid_size_cell_gallery2

0x73b4,	// (0x0005376d) grid_gallery2_pane_ParamLimits

0x73b4,	// (0x0005376d) grid_gallery2_pane

0x73ce,	// (0x00053787) scroll_pane_cp029_ParamLimits

0x73ce,	// (0x00053787) scroll_pane_cp029

0x73da,	// (0x00053793) cell_gallery2_pane_ParamLimits

0x73da,	// (0x00053793) cell_gallery2_pane

0xdf23,	// (0x0005a2dc) cell_gallery2_pane_g2

0x7435,	// (0x000537ee) cell_gallery2_pane_g3

0xdf2b,	// (0x0005a2e4) cell_gallery2_pane_g4

0xdf33,	// (0x0005a2ec) cell_gallery2_pane_g5

0xba44,	// (0x00057dfd) grid_highlight_pane_cp10

0x6a15,	// (0x00052dce) popup_vitu2_match_list_window_ParamLimits

0x6a2c,	// (0x00052de5) popup_vitu2_query_window_ParamLimits

0x6a2c,	// (0x00052de5) popup_vitu2_query_window

0x9ca9,	// (0x00056062) bg_vitu2_candi_button_pane

0xdf08,	// (0x0005a2c1) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xdf11,	// (0x0005a2ca) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xdf1a,	// (0x0005a2d3) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x0667,	// (0x0004ca20) bg_button_pane_cp015

0x743d,	// (0x000537f6) bg_button_pane_cp016

0x7450,	// (0x00053809) bg_button_pane_cp017

0xce41,	// (0x000591fa) bg_popup_sub_pane_cp22

0xdf3b,	// (0x0005a2f4) popup_vitu2_query_window_g1

0x069a,	// (0x0004ca53) popup_vitu2_query_window_g2

0x0002,

0xfa1c,	// (0x0005bdd5) popup_vitu2_query_window_g

0x06b9,	// (0x0004ca72) popup_vitu2_query_window_t1_ParamLimits

0x06b9,	// (0x0004ca72) popup_vitu2_query_window_t1

0x06ee,	// (0x0004caa7) popup_vitu2_query_window_t2_ParamLimits

0x06ee,	// (0x0004caa7) popup_vitu2_query_window_t2

0x0700,	// (0x0004cab9) popup_vitu2_query_window_t3_ParamLimits

0x0700,	// (0x0004cab9) popup_vitu2_query_window_t3

0x7474,	// (0x0005382d) popup_vitu2_query_window_t4_ParamLimits

0x7474,	// (0x0005382d) popup_vitu2_query_window_t4

0x7495,	// (0x0005384e) popup_vitu2_query_window_t5_ParamLimits

0x7495,	// (0x0005384e) popup_vitu2_query_window_t5

0x0006,

0xfa23,	// (0x0005bddc) popup_vitu2_query_window_t_ParamLimits

0xfa23,	// (0x0005bddc) popup_vitu2_query_window_t

0xddc3,	// (0x0005a17c) main_cset_text_pane

0x6e7f,	// (0x00053238) aid_area_touch_slider_ParamLimits

0x6e9b,	// (0x00053254) cset_slider_pane_ParamLimits

0x6ec5,	// (0x0005327e) main_cset_slider_pane_g1_ParamLimits

0x6eda,	// (0x00053293) main_cset_slider_pane_g2_ParamLimits

0xdde4,	// (0x0005a19d) main_cset_slider_pane_g3_ParamLimits

0xdde4,	// (0x0005a19d) main_cset_slider_pane_g3

0x6eef,	// (0x000532a8) main_cset_slider_pane_g4_ParamLimits

0x6eef,	// (0x000532a8) main_cset_slider_pane_g4

0x6efe,	// (0x000532b7) main_cset_slider_pane_g5_ParamLimits

0x6efe,	// (0x000532b7) main_cset_slider_pane_g5

0x6f0a,	// (0x000532c3) main_cset_slider_pane_g6_ParamLimits

0x6f0a,	// (0x000532c3) main_cset_slider_pane_g6

0xf976,	// (0x0005bd2f) main_cset_slider_pane_g_ParamLimits

0xde14,	// (0x0005a1cd) main_cset_slider_pane_t1_ParamLimits

0x6f96,	// (0x0005334f) main_cset_slider_pane_t2_ParamLimits

0x6fb0,	// (0x00053369) main_cset_slider_pane_t3_ParamLimits

0x6fca,	// (0x00053383) main_cset_slider_pane_t4_ParamLimits

0x6fe4,	// (0x0005339d) main_cset_slider_pane_t5_ParamLimits

0x6ffe,	// (0x000533b7) main_cset_slider_pane_t6_ParamLimits

0x7013,	// (0x000533cc) main_cset_slider_pane_t7_ParamLimits

0x703d,	// (0x000533f6) main_cset_slider_pane_t8_ParamLimits

0x703d,	// (0x000533f6) main_cset_slider_pane_t8

0x7065,	// (0x0005341e) main_cset_slider_pane_t9_ParamLimits

0x7065,	// (0x0005341e) main_cset_slider_pane_t9

0x708d,	// (0x00053446) main_cset_slider_pane_t10_ParamLimits

0x708d,	// (0x00053446) main_cset_slider_pane_t10

0x70b5,	// (0x0005346e) main_cset_slider_pane_t11_ParamLimits

0x70b5,	// (0x0005346e) main_cset_slider_pane_t11

0x70dd,	// (0x00053496) main_cset_slider_pane_t12_ParamLimits

0x70dd,	// (0x00053496) main_cset_slider_pane_t12

0x70fa,	// (0x000534b3) main_cset_slider_pane_t13_ParamLimits

0x70fa,	// (0x000534b3) main_cset_slider_pane_t13

0xf99b,	// (0x0005bd54) main_cset_slider_pane_t_ParamLimits

0x9ca9,	// (0x00056062) bg_popup_sub_pane_cp011

0xdf47,	// (0x0005a300) main_cset_text_pane_g1

0xdf4f,	// (0x0005a308) main_cset_text_pane_t1

0xdf5d,	// (0x0005a316) main_cset_text_pane_t2

0xdf6b,	// (0x0005a324) main_cset_text_pane_t3

0xdf79,	// (0x0005a332) main_cset_text_pane_t4

0xdf87,	// (0x0005a340) main_cset_text_pane_t5

0xdf95,	// (0x0005a34e) main_cset_text_pane_t6

0xdfa3,	// (0x0005a35c) main_cset_text_pane_t7

0x0006,

0xfa32,	// (0x0005bdeb) main_cset_text_pane_t

0x9ca9,	// (0x00056062) main_cam4_burst_pane

0x9ca9,	// (0x00056062) main_cam5_pane

0x6dbe,	// (0x00053177) bg_button_pane_cp019

0x6dc7,	// (0x00053180) bg_button_pane_cp020

0xddf0,	// (0x0005a1a9) main_cset_slider_pane_g7_ParamLimits

0xddf0,	// (0x0005a1a9) main_cset_slider_pane_g7

0xddfc,	// (0x0005a1b5) main_cset_slider_pane_g8_ParamLimits

0xddfc,	// (0x0005a1b5) main_cset_slider_pane_g8

0x6f1e,	// (0x000532d7) main_cset_slider_pane_g9_ParamLimits

0x6f1e,	// (0x000532d7) main_cset_slider_pane_g9

0x6f2a,	// (0x000532e3) main_cset_slider_pane_g10_ParamLimits

0x6f2a,	// (0x000532e3) main_cset_slider_pane_g10

0x6f36,	// (0x000532ef) main_cset_slider_pane_g11_ParamLimits

0x6f36,	// (0x000532ef) main_cset_slider_pane_g11

0x6f42,	// (0x000532fb) main_cset_slider_pane_g12_ParamLimits

0x6f42,	// (0x000532fb) main_cset_slider_pane_g12

0x6f4e,	// (0x00053307) main_cset_slider_pane_g13_ParamLimits

0x6f4e,	// (0x00053307) main_cset_slider_pane_g13

0x6f5a,	// (0x00053313) main_cset_slider_pane_g14_ParamLimits

0x6f5a,	// (0x00053313) main_cset_slider_pane_g14

0x6f66,	// (0x0005331f) main_cset_slider_pane_g15_ParamLimits

0x6f66,	// (0x0005331f) main_cset_slider_pane_g15

0xde42,	// (0x0005a1fb) main_cset_slider_pane_t14_ParamLimits

0xde42,	// (0x0005a1fb) main_cset_slider_pane_t14

0xde7b,	// (0x0005a234) main_cset_slider_pane_t15_ParamLimits

0xde7b,	// (0x0005a234) main_cset_slider_pane_t15

0x74b6,	// (0x0005386f) aid_cam4_burst_size_cell_ParamLimits

0x74b6,	// (0x0005386f) aid_cam4_burst_size_cell

0x74d6,	// (0x0005388f) grid_cam4_burst_pane_ParamLimits

0x74d6,	// (0x0005388f) grid_cam4_burst_pane

0x750e,	// (0x000538c7) linegrid_cam4_burst_pane_ParamLimits

0x750e,	// (0x000538c7) linegrid_cam4_burst_pane

0xdfb1,	// (0x0005a36a) scroll_pane_cp30_ParamLimits

0xdfb1,	// (0x0005a36a) scroll_pane_cp30

0x7532,	// (0x000538eb) cell_cam4_burst_pane_ParamLimits

0x7532,	// (0x000538eb) cell_cam4_burst_pane

0xdfbd,	// (0x0005a376) linegrid_cam4_burst_pane_g1_ParamLimits

0xdfbd,	// (0x0005a376) linegrid_cam4_burst_pane_g1

0x757f,	// (0x00053938) linegrid_cam4_burst_pane_g2_ParamLimits

0x757f,	// (0x00053938) linegrid_cam4_burst_pane_g2

0xdfca,	// (0x0005a383) linegrid_cam4_burst_pane_g3_ParamLimits

0xdfca,	// (0x0005a383) linegrid_cam4_burst_pane_g3

0x0002,

0xfa41,	// (0x0005bdfa) linegrid_cam4_burst_pane_g_ParamLimits

0xfa41,	// (0x0005bdfa) linegrid_cam4_burst_pane_g

0x7590,	// (0x00053949) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x7590,	// (0x00053949) linegrid_cam4_burst_pane_g3_copy1

0xdfd7,	// (0x0005a390) linegrid_cam4_burst_pane_g4_ParamLimits

0xdfd7,	// (0x0005a390) linegrid_cam4_burst_pane_g4

0x75aa,	// (0x00053963) linegrid_cam4_burst_pane_g5_ParamLimits

0x75aa,	// (0x00053963) linegrid_cam4_burst_pane_g5

0x75bb,	// (0x00053974) linegrid_cam4_burst_pane_g6_ParamLimits

0x75bb,	// (0x00053974) linegrid_cam4_burst_pane_g6

0xdfe4,	// (0x0005a39d) linegrid_cam4_burst_pane_g7_ParamLimits

0xdfe4,	// (0x0005a39d) linegrid_cam4_burst_pane_g7

0x75d2,	// (0x0005398b) cell_cam4_burst_pane_g1

0xdffd,	// (0x0005a3b6) main_cam5_pane_t1_ParamLimits

0xdffd,	// (0x0005a3b6) main_cam5_pane_t1

0xe00f,	// (0x0005a3c8) main_cam5_pane_t2_ParamLimits

0xe00f,	// (0x0005a3c8) main_cam5_pane_t2

0xe021,	// (0x0005a3da) main_cam5_pane_t3_ParamLimits

0xe021,	// (0x0005a3da) main_cam5_pane_t3

0xe033,	// (0x0005a3ec) main_cam5_pane_t4_ParamLimits

0xe033,	// (0x0005a3ec) main_cam5_pane_t4

0xe04b,	// (0x0005a404) main_cam5_pane_t5_ParamLimits

0xe04b,	// (0x0005a404) main_cam5_pane_t5

0xe05f,	// (0x0005a418) main_cam5_pane_t6_ParamLimits

0xe05f,	// (0x0005a418) main_cam5_pane_t6

0xe073,	// (0x0005a42c) main_cam5_pane_t7_ParamLimits

0xe073,	// (0x0005a42c) main_cam5_pane_t7

0xe085,	// (0x0005a43e) main_cam5_pane_t8_ParamLimits

0xe085,	// (0x0005a43e) main_cam5_pane_t8

0xe0a1,	// (0x0005a45a) main_cam5_pane_t9_ParamLimits

0xe0a1,	// (0x0005a45a) main_cam5_pane_t9

0xe0b3,	// (0x0005a46c) main_cam5_pane_t10_ParamLimits

0xe0b3,	// (0x0005a46c) main_cam5_pane_t10

0xe0c5,	// (0x0005a47e) main_cam5_pane_t11_ParamLimits

0xe0c5,	// (0x0005a47e) main_cam5_pane_t11

0xe0d7,	// (0x0005a490) main_cam5_pane_t12_ParamLimits

0xe0d7,	// (0x0005a490) main_cam5_pane_t12

0xe0ec,	// (0x0005a4a5) main_cam5_pane_t13_ParamLimits

0xe0ec,	// (0x0005a4a5) main_cam5_pane_t13

0x000c,

0xfa4d,	// (0x0005be06) main_cam5_pane_t_ParamLimits

0xfa4d,	// (0x0005be06) main_cam5_pane_t

0x1355,	// (0x0004d70e) popup_scut_keymap_window_ParamLimits

0x1355,	// (0x0004d70e) popup_scut_keymap_window

0x75e5,	// (0x0005399e) aid_size_cell_brow_shortcut

0xba44,	// (0x00057dfd) bg_popup_window_pane_cp010

0x75f1,	// (0x000539aa) grid_scut_pane

0x75fd,	// (0x000539b6) cell_scut_pane_ParamLimits

0x75fd,	// (0x000539b6) cell_scut_pane

0x7614,	// (0x000539cd) cell_scut_pane_g1

0xe109,	// (0x0005a4c2) cell_scut_pane_t1

0xe118,	// (0x0005a4d1) cell_scut_pane_t2

0x761d,	// (0x000539d6) cell_scut_pane_t3

0x0002,

0xfa68,	// (0x0005be21) cell_scut_pane_t

0x548e,	// (0x00051847) main_mup3_pane_g8_ParamLimits

0x548e,	// (0x00051847) main_mup3_pane_g8

0x6913,	// (0x00052ccc) area_vitu2_query_pane_ParamLimits

0x6913,	// (0x00052ccc) area_vitu2_query_pane

0x0679,	// (0x0004ca32) input_focus_pane_cp08

0xe127,	// (0x0005a4e0) area_vitu2_query_pane_g1

0x077e,	// (0x0004cb37) area_vitu2_query_pane_g2

0x0001,

0xfa6f,	// (0x0005be28) area_vitu2_query_pane_g

0x762b,	// (0x000539e4) area_vitu2_query_pane_t1_ParamLimits

0x762b,	// (0x000539e4) area_vitu2_query_pane_t1

0x763f,	// (0x000539f8) area_vitu2_query_pane_t2_ParamLimits

0x763f,	// (0x000539f8) area_vitu2_query_pane_t2

0x078f,	// (0x0004cb48) area_vitu2_query_pane_t3_ParamLimits

0x078f,	// (0x0004cb48) area_vitu2_query_pane_t3

0x7653,	// (0x00053a0c) area_vitu2_query_pane_t4_ParamLimits

0x7653,	// (0x00053a0c) area_vitu2_query_pane_t4

0x767b,	// (0x00053a34) area_vitu2_query_pane_t5_ParamLimits

0x767b,	// (0x00053a34) area_vitu2_query_pane_t5

0x76a3,	// (0x00053a5c) area_vitu2_query_pane_t6_ParamLimits

0x76a3,	// (0x00053a5c) area_vitu2_query_pane_t6

0x0006,

0xfa74,	// (0x0005be2d) area_vitu2_query_pane_t_ParamLimits

0xfa74,	// (0x0005be2d) area_vitu2_query_pane_t

0x76ef,	// (0x00053aa8) bg_button_pane_cp018

0x76fd,	// (0x00053ab6) bg_button_pane_cp021

0x07b7,	// (0x0004cb70) bg_button_pane_cp022

0x07c6,	// (0x0004cb7f) input_focus_pane_cp09

0xb88d,	// (0x00057c46) aid_size_touch_mv_arrow_left

0xb8b6,	// (0x00057c6f) aid_size_touch_mv_arrow_right

0x6f7e,	// (0x00053337) main_cset_slider_pane_g16_ParamLimits

0x6f7e,	// (0x00053337) main_cset_slider_pane_g16

0x6f8a,	// (0x00053343) main_cset_slider_pane_g17_ParamLimits

0x6f8a,	// (0x00053343) main_cset_slider_pane_g17

0x75d2,	// (0x0005398b) cell_cam4_burst_pane_g1_ParamLimits

0x9ca9,	// (0x00056062) compa_mode_pane

0x7194,	// (0x0005354d) popup_vtel_slider_window_g3_ParamLimits

0x7194,	// (0x0005354d) popup_vtel_slider_window_g3

0x71ab,	// (0x00053564) popup_vtel_slider_window_g4_ParamLimits

0x71ab,	// (0x00053564) popup_vtel_slider_window_g4

0x71c2,	// (0x0005357b) popup_vtel_slider_window_t1_ParamLimits

0x71c2,	// (0x0005357b) popup_vtel_slider_window_t1

0x9ca9,	// (0x00056062) main_cl_pane

0xa12e,	// (0x000564e7) popup_imed_adjust2_window_ParamLimits

0xce41,	// (0x000591fa) bg_tb_trans_pane_cp05_ParamLimits

0xd784,	// (0x00059b3d) popup_imed_adjust2_window_g1_ParamLimits

0xd793,	// (0x00059b4c) popup_imed_adjust2_window_g2_ParamLimits

0xd793,	// (0x00059b4c) popup_imed_adjust2_window_g2

0xd79f,	// (0x00059b58) popup_imed_adjust2_window_g3_ParamLimits

0xd79f,	// (0x00059b58) popup_imed_adjust2_window_g3

0x0002,

0xf7df,	// (0x0005bb98) popup_imed_adjust2_window_g_ParamLimits

0xf7df,	// (0x0005bb98) popup_imed_adjust2_window_g

0xd7ab,	// (0x00059b64) popup_imed_adjust2_window_t1_ParamLimits

0xd7c3,	// (0x00059b7c) slider_imed_adjust_pane_ParamLimits

0xd7d7,	// (0x00059b90) slider_imed_adjust_pane_g1_ParamLimits

0xd7e7,	// (0x00059ba0) slider_imed_adjust_pane_g2_ParamLimits

0xd7f7,	// (0x00059bb0) slider_imed_adjust_pane_g3_ParamLimits

0xd808,	// (0x00059bc1) slider_imed_adjust_pane_g4_ParamLimits

0xf7e6,	// (0x0005bb9f) slider_imed_adjust_pane_g_ParamLimits

0x669c,	// (0x00052a55) aid_touch_area_cam4_ParamLimits

0x669c,	// (0x00052a55) aid_touch_area_cam4

0xa4aa,	// (0x00056863) battery_pane_cp01

0x676b,	// (0x00052b24) main_camera4_pane_g6_ParamLimits

0x676b,	// (0x00052b24) main_camera4_pane_g6

0x6795,	// (0x00052b4e) main_camera4_pane_t2_ParamLimits

0x6795,	// (0x00052b4e) main_camera4_pane_t2

0x0001,

0xf8e9,	// (0x0005bca2) main_camera4_pane_t_ParamLimits

0xf8e9,	// (0x0005bca2) main_camera4_pane_t

0x67ca,	// (0x00052b83) aid_touch_area_vid4_ParamLimits

0x67ca,	// (0x00052b83) aid_touch_area_vid4

0x681e,	// (0x00052bd7) main_video4_pane_g5_ParamLimits

0x681e,	// (0x00052bd7) main_video4_pane_g5

0x6843,	// (0x00052bfc) vid4_progress_pane_ParamLimits

0x6843,	// (0x00052bfc) vid4_progress_pane

0xde08,	// (0x0005a1c1) main_cset_slider_pane_g18_ParamLimits

0xde08,	// (0x0005a1c1) main_cset_slider_pane_g18

0xdff1,	// (0x0005a3aa) cell_cam4_burst_pane_g2_ParamLimits

0xdff1,	// (0x0005a3aa) cell_cam4_burst_pane_g2

0x0001,

0xfa48,	// (0x0005be01) cell_cam4_burst_pane_g_ParamLimits

0xfa48,	// (0x0005be01) cell_cam4_burst_pane_g

0xae12,	// (0x000571cb) bg_cl_pane_ParamLimits

0xae12,	// (0x000571cb) bg_cl_pane

0x7709,	// (0x00053ac2) cl_header_pane_ParamLimits

0x7709,	// (0x00053ac2) cl_header_pane

0x771d,	// (0x00053ad6) cl_listscroll_pane_ParamLimits

0x771d,	// (0x00053ad6) cl_listscroll_pane

0xe133,	// (0x0005a4ec) bg_cl_pane_g1

0xe13b,	// (0x0005a4f4) bg_cl_pane_g2

0xe143,	// (0x0005a4fc) bg_cl_pane_g3

0xe14b,	// (0x0005a504) bg_cl_pane_g4

0xe153,	// (0x0005a50c) bg_cl_pane_g5

0xe15b,	// (0x0005a514) bg_cl_pane_g6

0xe163,	// (0x0005a51c) bg_cl_pane_g7

0xe16b,	// (0x0005a524) bg_cl_pane_g8

0xe173,	// (0x0005a52c) bg_cl_pane_g9

0x0008,

0xfa83,	// (0x0005be3c) bg_cl_pane_g

0x772d,	// (0x00053ae6) aid_height_cl_leading_ParamLimits

0x772d,	// (0x00053ae6) aid_height_cl_leading

0x7739,	// (0x00053af2) aid_height_cl_text_ParamLimits

0x7739,	// (0x00053af2) aid_height_cl_text

0xa939,	// (0x00056cf2) bg_cl_header_pane_ParamLimits

0xa939,	// (0x00056cf2) bg_cl_header_pane

0x7758,	// (0x00053b11) cl_header_pane_g1_ParamLimits

0x7758,	// (0x00053b11) cl_header_pane_g1

0x776e,	// (0x00053b27) cl_header_pane_t1_ParamLimits

0x776e,	// (0x00053b27) cl_header_pane_t1

0xe17b,	// (0x0005a534) cl_list_pane

0xdddb,	// (0x0005a194) hc_scroll_pane_cp01

0xb209,	// (0x000575c2) bg_cl_header_pane_g1

0xdcc1,	// (0x0005a07a) bg_cl_header_pane_g2

0xb229,	// (0x000575e2) bg_cl_header_pane_g3

0xdcd1,	// (0x0005a08a) bg_cl_header_pane_g4

0xdcc9,	// (0x0005a082) bg_cl_header_pane_g5

0xdf00,	// (0x0005a2b9) bg_cl_header_pane_g6

0xdce9,	// (0x0005a0a2) bg_cl_header_pane_g7

0xdcf1,	// (0x0005a0aa) bg_cl_header_pane_g8

0xdce1,	// (0x0005a09a) bg_cl_header_pane_g9

0x0008,

0xfa96,	// (0x0005be4f) bg_cl_header_pane_g

0x7787,	// (0x00053b40) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x7787,	// (0x00053b40) hc_cl_list_double_graphic_heading_pane

0x7798,	// (0x00053b51) hc_cl_list_single_graphic_pane_ParamLimits

0x7798,	// (0x00053b51) hc_cl_list_single_graphic_pane

0x77ae,	// (0x00053b67) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x77ae,	// (0x00053b67) hc_cl_list_single_graphic_pane_g1

0x77ba,	// (0x00053b73) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x77ba,	// (0x00053b73) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaa9,	// (0x0005be62) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaa9,	// (0x0005be62) hc_cl_list_single_graphic_pane_g

0x77ce,	// (0x00053b87) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x77ce,	// (0x00053b87) hc_cl_list_single_graphic_pane_t1

0x77ae,	// (0x00053b67) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x77ae,	// (0x00053b67) hc_cl_list_double_graphic_heading_pane_g1

0x77e3,	// (0x00053b9c) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x77e3,	// (0x00053b9c) hc_cl_list_double_graphic_heading_pane_g2

0x77f7,	// (0x00053bb0) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x77f7,	// (0x00053bb0) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfaae,	// (0x0005be67) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfaae,	// (0x0005be67) hc_cl_list_double_graphic_heading_pane_g

0x780b,	// (0x00053bc4) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x780b,	// (0x00053bc4) hc_cl_list_double_graphic_heading_pane_t1

0x7820,	// (0x00053bd9) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x7820,	// (0x00053bd9) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfab5,	// (0x0005be6e) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfab5,	// (0x0005be6e) hc_cl_list_double_graphic_heading_pane_t

0x7835,	// (0x00053bee) vid4_progress_pane_g1

0x7847,	// (0x00053c00) vid4_progress_pane_g2

0xa0fc,	// (0x000564b5) vid4_progress_pane_g3

0xa5fb,	// (0x000569b4) vid4_progress_pane_g4

0x0004,

0xfaba,	// (0x0005be73) vid4_progress_pane_g

0xa619,	// (0x000569d2) vid4_progress_pane_t1

0xa62e,	// (0x000569e7) vid4_progress_pane_t2

0x0002,

0xfac5,	// (0x0005be7e) vid4_progress_pane_t

0xa659,	// (0x00056a12) wait_bar_pane_cp07

0xd048,	// (0x00059401) blid_firmament_pane_ParamLimits

0xd08b,	// (0x00059444) popup_blid_sat_info2_window_g1

0xd0af,	// (0x00059468) popup_blid_sat_info2_window_t3

0xd0bd,	// (0x00059476) popup_blid_sat_info2_window_t4

0xd0cb,	// (0x00059484) popup_blid_sat_info2_window_t5

0xd0d9,	// (0x00059492) popup_blid_sat_info2_window_t6

0xd0e9,	// (0x000594a2) popup_blid_sat_info2_window_t7

0xd0f7,	// (0x000594b0) popup_blid_sat_info2_window_t8

0xd105,	// (0x000594be) popup_blid_sat_info2_window_t9

0xd113,	// (0x000594cc) popup_blid_sat_info2_window_t10

0xd1d5,	// (0x0005958e) aid_firma_cardinal_ParamLimits

0xd1e9,	// (0x000595a2) blid_firmament_pane_t1_ParamLimits

0xd200,	// (0x000595b9) blid_firmament_pane_t2_ParamLimits

0xd217,	// (0x000595d0) blid_firmament_pane_t3_ParamLimits

0xd22e,	// (0x000595e7) blid_firmament_pane_t4_ParamLimits

0xf6d8,	// (0x0005ba91) blid_firmament_pane_t_ParamLimits

0xd245,	// (0x000595fe) blid_sat_info_pane_ParamLimits

0xa939,	// (0x00056cf2) main_cam_set_pane_ParamLimits

0x5d54,	// (0x0005210d) aid_size_cell_colour_35_ParamLimits

0x5d74,	// (0x0005212d) aid_size_cell_colour_112_ParamLimits

0x5d94,	// (0x0005214d) aid_size_cell_effect_ParamLimits

0xce41,	// (0x000591fa) bg_tb_trans_pane_cp02_ParamLimits

0xb471,	// (0x0005782a) heading_imed_pane_ParamLimits

0x5db4,	// (0x0005216d) listscroll_imed_pane_ParamLimits

0xc467,	// (0x00058820) popup_call2_audio_first_window_g5_ParamLimits

0xc467,	// (0x00058820) popup_call2_audio_first_window_g5

0x6347,	// (0x00052700) aid_size_touch_image3_arrow_left_ParamLimits

0x6347,	// (0x00052700) aid_size_touch_image3_arrow_left

0x6373,	// (0x0005272c) aid_size_touch_image3_arrow_right_ParamLimits

0x6373,	// (0x0005272c) aid_size_touch_image3_arrow_right

0xa644,	// (0x000569fd) vid4_progress_pane_t3

0x60c7,	// (0x00052480) main_hwr_training_symbol_option_pane_ParamLimits

0x60c7,	// (0x00052480) main_hwr_training_symbol_option_pane

0xda71,	// (0x00059e2a) popup_hwr_training_preview_window_ParamLimits

0xda71,	// (0x00059e2a) popup_hwr_training_preview_window

0x60e7,	// (0x000524a0) hwr_training_navi_pane_g5_ParamLimits

0x60e7,	// (0x000524a0) hwr_training_navi_pane_g5

0xdcaf,	// (0x0005a068) popup_char_count_window

0xa939,	// (0x00056cf2) bg_popup_sub_pane_cp20_ParamLimits

0x72da,	// (0x00053693) list_vitu2_match_list_pane_ParamLimits

0x72e9,	// (0x000536a2) vitu2_page_scroll_pane_ParamLimits

0x72e9,	// (0x000536a2) vitu2_page_scroll_pane

0xe184,	// (0x0005a53d) list_single_hwr_training_symbol_option_pane_ParamLimits

0xe184,	// (0x0005a53d) list_single_hwr_training_symbol_option_pane

0xe197,	// (0x0005a550) list_single_hwr_training_symbol_option_pane_g1

0xe19f,	// (0x0005a558) list_single_hwr_training_symbol_option_pane_t1

0xe1ad,	// (0x0005a566) bg_button_pane_cp023

0xe1b6,	// (0x0005a56f) bg_button_pane_cp024

0x789f,	// (0x00053c58) vitu2_page_scroll_pane_g1

0x78a7,	// (0x00053c60) vitu2_page_scroll_pane_g2

0x0001,

0xfacc,	// (0x0005be85) vitu2_page_scroll_pane_g

0x78af,	// (0x00053c68) vitu2_page_scroll_pane_t1

0xe1e9,	// (0x0005a5a2) popup_char_count_window_g1

0xe1f2,	// (0x0005a5ab) popup_char_count_window_g2

0xe1fb,	// (0x0005a5b4) popup_char_count_window_g3

0x0002,

0xfad1,	// (0x0005be8a) popup_char_count_window_g

0xe204,	// (0x0005a5bd) popup_char_count_window_t1

0x9ca9,	// (0x00056062) main_vded2_pane

0xd770,	// (0x00059b29) aid_size_cell_imed_line

0xd77a,	// (0x00059b33) grid_imed_line_width_pane

0xa562,	// (0x0005691b) vid4_indicators_pane_g4

0xe212,	// (0x0005a5cb) cell_imed_line_width_pane_ParamLimits

0xe212,	// (0x0005a5cb) cell_imed_line_width_pane

0xe226,	// (0x0005a5df) cell_imed_line_width_pane_g1

0xe22f,	// (0x0005a5e8) cell_imed_line_width_pane_g2

0x0001,

0xfad8,	// (0x0005be91) cell_imed_line_width_pane_g

0x78be,	// (0x00053c77) main_vded2_pane_g1_ParamLimits

0x78be,	// (0x00053c77) main_vded2_pane_g1

0x78d4,	// (0x00053c8d) main_vded2_pane_g2_ParamLimits

0x78d4,	// (0x00053c8d) main_vded2_pane_g2

0x0001,

0xfadd,	// (0x0005be96) main_vded2_pane_g_ParamLimits

0xfadd,	// (0x0005be96) main_vded2_pane_g

0x78e6,	// (0x00053c9f) vded2_slider_pane_ParamLimits

0x78e6,	// (0x00053c9f) vded2_slider_pane

0x78f6,	// (0x00053caf) aid_size_touch_vded2_end

0x7900,	// (0x00053cb9) aid_size_touch_vded2_playhead

0xe237,	// (0x0005a5f0) aid_size_touch_vded2_start

0xe23f,	// (0x0005a5f8) vded2_slider_bg_pane

0xe248,	// (0x0005a601) vded2_slider_pane_g1

0xe251,	// (0x0005a60a) vded2_slider_pane_g2

0x790a,	// (0x00053cc3) vded2_slider_pane_g3

0x0002,

0xfae2,	// (0x0005be9b) vded2_slider_pane_g

0xe259,	// (0x0005a612) vded2_slider_bg_pane_g1

0xe262,	// (0x0005a61b) vded2_slider_bg_pane_g2

0xe26b,	// (0x0005a624) vded2_slider_bg_pane_g3

0x0002,

0xfae9,	// (0x0005bea2) vded2_slider_bg_pane_g

0x3ac5,	// (0x0004fe7e) aid_postcard_touch_down_pane_ParamLimits

0x3ac5,	// (0x0004fe7e) aid_postcard_touch_down_pane

0x3adb,	// (0x0004fe94) aid_postcard_touch_up_pane_ParamLimits

0x3adb,	// (0x0004fe94) aid_postcard_touch_up_pane

0x9ca9,	// (0x00056062) main_blid2_pane

0xa114,	// (0x000564cd) popup_blid2_search_window

0x9ca9,	// (0x00056062) blid2_gps_pane

0x9ca9,	// (0x00056062) blid2_navig_pane

0x9ca9,	// (0x00056062) blid2_search_pane

0x9ca9,	// (0x00056062) blid2_tripm_pane

0x7915,	// (0x00053cce) blid2_search_pane_g1_ParamLimits

0x7915,	// (0x00053cce) blid2_search_pane_g1

0x792f,	// (0x00053ce8) blid2_search_pane_t1_ParamLimits

0x792f,	// (0x00053ce8) blid2_search_pane_t1

0x7941,	// (0x00053cfa) aid_size_cell_blid2_gps_ParamLimits

0x7941,	// (0x00053cfa) aid_size_cell_blid2_gps

0x7959,	// (0x00053d12) blid2_gps_pane_g1_ParamLimits

0x7959,	// (0x00053d12) blid2_gps_pane_g1

0x796d,	// (0x00053d26) grid_blid2_satellite_pane_ParamLimits

0x796d,	// (0x00053d26) grid_blid2_satellite_pane

0x7987,	// (0x00053d40) blid2_navig_pane_g1_ParamLimits

0x7987,	// (0x00053d40) blid2_navig_pane_g1

0x7993,	// (0x00053d4c) blid2_navig_pane_t1_ParamLimits

0x7993,	// (0x00053d4c) blid2_navig_pane_t1

0x79ae,	// (0x00053d67) blid2_navig_pane_t2_ParamLimits

0x79ae,	// (0x00053d67) blid2_navig_pane_t2

0x0001,

0xfaf0,	// (0x0005bea9) blid2_navig_pane_t_ParamLimits

0xfaf0,	// (0x0005bea9) blid2_navig_pane_t

0x79c9,	// (0x00053d82) blid2_navig_ring_pane_ParamLimits

0x79c9,	// (0x00053d82) blid2_navig_ring_pane

0x79e2,	// (0x00053d9b) blid2_speed_pane_ParamLimits

0x79e2,	// (0x00053d9b) blid2_speed_pane

0x79ee,	// (0x00053da7) blid2_tripm_pane_g1_ParamLimits

0x79ee,	// (0x00053da7) blid2_tripm_pane_g1

0x7a07,	// (0x00053dc0) blid2_tripm_pane_g2_ParamLimits

0x7a07,	// (0x00053dc0) blid2_tripm_pane_g2

0x7a1b,	// (0x00053dd4) blid2_tripm_pane_g3_ParamLimits

0x7a1b,	// (0x00053dd4) blid2_tripm_pane_g3

0x7a2f,	// (0x00053de8) blid2_tripm_pane_g4_ParamLimits

0x7a2f,	// (0x00053de8) blid2_tripm_pane_g4

0x7a43,	// (0x00053dfc) blid2_tripm_pane_g5_ParamLimits

0x7a43,	// (0x00053dfc) blid2_tripm_pane_g5

0x0005,

0xfaf5,	// (0x0005beae) blid2_tripm_pane_g_ParamLimits

0xfaf5,	// (0x0005beae) blid2_tripm_pane_g

0x7a69,	// (0x00053e22) blid2_tripm_pane_t1_ParamLimits

0x7a69,	// (0x00053e22) blid2_tripm_pane_t1

0x7a84,	// (0x00053e3d) blid2_tripm_pane_t2_ParamLimits

0x7a84,	// (0x00053e3d) blid2_tripm_pane_t2

0x7a9d,	// (0x00053e56) blid2_tripm_pane_t3_ParamLimits

0x7a9d,	// (0x00053e56) blid2_tripm_pane_t3

0x0003,

0xfb02,	// (0x0005bebb) blid2_tripm_pane_t_ParamLimits

0xfb02,	// (0x0005bebb) blid2_tripm_pane_t

0x7ae4,	// (0x00053e9d) cell_blid2_satellite_pane_ParamLimits

0x7ae4,	// (0x00053e9d) cell_blid2_satellite_pane

0x7b02,	// (0x00053ebb) cell_blid2_satellite_pane_g1

0xe274,	// (0x0005a62d) cell_blid2_satellite_pane_t1

0xd255,	// (0x0005960e) blid2_speed_pane_g1

0xe282,	// (0x0005a63b) blid2_speed_pane_t1

0xe290,	// (0x0005a649) blid2_speed_pane_t2

0x0001,

0xfb0b,	// (0x0005bec4) blid2_speed_pane_t

0xd255,	// (0x0005960e) blid2_navig_ring_pane_g1

0x7b0b,	// (0x00053ec4) blid2_navig_ring_pane_g2

0x7b13,	// (0x00053ecc) blid2_navig_ring_pane_g3

0x7b1b,	// (0x00053ed4) blid2_navig_ring_pane_g4

0x7b23,	// (0x00053edc) blid2_navig_ring_pane_g5

0x0004,

0xfb10,	// (0x0005bec9) blid2_navig_ring_pane_g

0x9ca9,	// (0x00056062) bg_popup_window_pane_cp011

0xe29e,	// (0x0005a657) popup_blid2_search_window_g1

0xe2a6,	// (0x0005a65f) popup_blid2_search_window_t1

0xe2b4,	// (0x0005a66d) popup_blid2_search_window_t2

0x0001,

0xfb1b,	// (0x0005bed4) popup_blid2_search_window_t

0xb118,	// (0x000574d1) main_browser_pane_g1

0xae12,	// (0x000571cb) main_browser_pane_ParamLimits

0xa939,	// (0x00056cf2) bg_button_pane_cp011_ParamLimits

0x6b5a,	// (0x00052f13) cell_vitu2_function_pane_g1_ParamLimits

0xce41,	// (0x000591fa) bg_popup_sub_pane_cp22_ParamLimits

0x0679,	// (0x0004ca32) input_focus_pane_cp08_ParamLimits

0x7463,	// (0x0005381c) popup_vitu2_query_button_pane_ParamLimits

0x7463,	// (0x0005381c) popup_vitu2_query_button_pane

0x0690,	// (0x0004ca49) popup_vitu2_query_input_button_pane

0xdf3b,	// (0x0005a2f4) popup_vitu2_query_window_g1_ParamLimits

0x069a,	// (0x0004ca53) popup_vitu2_query_window_g2_ParamLimits

0xfa1c,	// (0x0005bdd5) popup_vitu2_query_window_g_ParamLimits

0x9ca9,	// (0x00056062) bg_button_pane_cp026

0x7b2b,	// (0x00053ee4) popup_vitu2_query_input_button_pane_g1

0x9ca9,	// (0x00056062) bg_button_pane_cp025

0xe2c2,	// (0x0005a67b) popup_vitu2_query_button_pane_t1

0x515b,	// (0x00051514) main_mp3_pane_t6

0x5169,	// (0x00051522) popup_slider_window_cp01

0xa4c6,	// (0x0005687f) cam4_battery_pane

0xa51f,	// (0x000568d8) cam4_battery_pane_cp02

0xa5f3,	// (0x000569ac) cam4_battery_pane_cp01

0xa5f3,	// (0x000569ac) cam4_battery_pane_cp03

0xd255,	// (0x0005960e) cam4_battery_pane_g1

0xe2d0,	// (0x0005a689) cam4_battery_pane_g2

0x0001,

0xfb20,	// (0x0005bed9) cam4_battery_pane_g

0xd121,	// (0x000594da) popup_blid_sat_info2_window_t11

0xb88d,	// (0x00057c46) aid_size_touch_mv_arrow_left_ParamLimits

0xb8b6,	// (0x00057c6f) aid_size_touch_mv_arrow_right_ParamLimits

0xb914,	// (0x00057ccd) navi_pane_g1_ParamLimits

0xb920,	// (0x00057cd9) navi_pane_g2_ParamLimits

0xb94e,	// (0x00057d07) navi_pane_g3_ParamLimits

0xf3ea,	// (0x0005b7a3) navi_pane_g_ParamLimits

0x3572,	// (0x0004f92b) navi_pane_mv_t1_ParamLimits

0x5dc0,	// (0x00052179) grid_imed_effect_pane_ParamLimits

0x2281,	// (0x0004e63a) aid_placing_vt_slider_lsc

0xb067,	// (0x00057420) aid_placing_vt_slider_prt

0xa939,	// (0x00056cf2) bg_tb_trans_pane_cp01_ParamLimits

0xd3e1,	// (0x0005979a) popup_image_details_window_g1_ParamLimits

0xd3f4,	// (0x000597ad) popup_image_details_window_g2_ParamLimits

0xd409,	// (0x000597c2) popup_image_details_window_g3_ParamLimits

0xd409,	// (0x000597c2) popup_image_details_window_g3

0xf71d,	// (0x0005bad6) popup_image_details_window_g_ParamLimits

0xd41d,	// (0x000597d6) popup_image_details_window_t1_ParamLimits

0xd42f,	// (0x000597e8) popup_image_details_window_t2_ParamLimits

0xd448,	// (0x00059801) popup_image_details_window_t3_ParamLimits

0xd45c,	// (0x00059815) popup_image_details_window_t4_ParamLimits

0xd477,	// (0x00059830) popup_image_details_window_t5_ParamLimits

0xf724,	// (0x0005badd) popup_image_details_window_t_ParamLimits

0x7745,	// (0x00053afe) cl_header_name_pane_ParamLimits

0x7745,	// (0x00053afe) cl_header_name_pane

0x7b33,	// (0x00053eec) cl_header_name_pane_t1_ParamLimits

0x7b33,	// (0x00053eec) cl_header_name_pane_t1

0x7b54,	// (0x00053f0d) cl_header_name_pane_t2_ParamLimits

0x7b54,	// (0x00053f0d) cl_header_name_pane_t2

0x7b96,	// (0x00053f4f) cl_header_name_pane_t3_ParamLimits

0x7b96,	// (0x00053f4f) cl_header_name_pane_t3

0x0002,

0xfb25,	// (0x0005bede) cl_header_name_pane_t_ParamLimits

0xfb25,	// (0x0005bede) cl_header_name_pane_t

0xb9dd,	// (0x00057d96) navi_pane_mv_g2_ParamLimits

0xdc89,	// (0x0005a042) field_vitu2_entry_pane_g1_ParamLimits

0xdc95,	// (0x0005a04e) field_vitu2_entry_pane_g2_ParamLimits

0xdca1,	// (0x0005a05a) field_vitu2_entry_pane_g3_ParamLimits

0xdca1,	// (0x0005a05a) field_vitu2_entry_pane_g3

0xf91b,	// (0x0005bcd4) field_vitu2_entry_pane_g_ParamLimits

0x6ad1,	// (0x00052e8a) cell_vitu2_itu_pane_g1_ParamLimits

0x6ae1,	// (0x00052e9a) cell_vitu2_itu_pane_g2_ParamLimits

0x6ae1,	// (0x00052e9a) cell_vitu2_itu_pane_g2

0x0001,

0xf927,	// (0x0005bce0) cell_vitu2_itu_pane_g_ParamLimits

0xf927,	// (0x0005bce0) cell_vitu2_itu_pane_g

0xa939,	// (0x00056cf2) bg_vkb2_func_pane_cp05_ParamLimits

0xa939,	// (0x00056cf2) bg_vkb2_func_pane_cp05

0xa939,	// (0x00056cf2) bg_vkb2_func_pane_cp03

0xa939,	// (0x00056cf2) bg_vkb2_func_pane_cp04

0xa939,	// (0x00056cf2) bg_vkb2_func_pane_cp10_ParamLimits

0xa939,	// (0x00056cf2) bg_vkb2_func_pane_cp10

0x07b7,	// (0x0004cb70) bg_vkb2_func_pane_cp08

0x76ef,	// (0x00053aa8) bg_vkb2_func_pane_cp06

0x76fd,	// (0x00053ab6) bg_vkb2_func_pane_cp07

0xe1bf,	// (0x0005a578) bg_vkb2_func_pane_cp11_ParamLimits

0xe1bf,	// (0x0005a578) bg_vkb2_func_pane_cp11

0xe1d4,	// (0x0005a58d) bg_vkb2_func_pane_cp12_ParamLimits

0xe1d4,	// (0x0005a58d) bg_vkb2_func_pane_cp12

0x9ca9,	// (0x00056062) bg_vkb2_func_pane_cp09

0xdcc1,	// (0x0005a07a) bg_vkb2_func_pane_g1

0xb229,	// (0x000575e2) bg_vkb2_func_pane_g2

0xdcc9,	// (0x0005a082) bg_vkb2_func_pane_g3

0xdcd1,	// (0x0005a08a) bg_vkb2_func_pane_g4

0xdf00,	// (0x0005a2b9) bg_vkb2_func_pane_g5

0xdce9,	// (0x0005a0a2) bg_vkb2_func_pane_g6

0xdcf1,	// (0x0005a0aa) bg_vkb2_func_pane_g7

0xdce1,	// (0x0005a09a) bg_vkb2_func_pane_g8

0xb209,	// (0x000575c2) bg_vkb2_func_pane_g9

0x0008,

0xfb2c,	// (0x0005bee5) bg_vkb2_func_pane_g

0x7a57,	// (0x00053e10) blid2_tripm_pane_g6_ParamLimits

0x7a57,	// (0x00053e10) blid2_tripm_pane_g6

0xdb29,	// (0x00059ee2) mp4_progress_pane_g1

0x7ad0,	// (0x00053e89) blid2_tripm_values_pane_ParamLimits

0x7ad0,	// (0x00053e89) blid2_tripm_values_pane

0x7bc7,	// (0x00053f80) blid2_tripm_values_pane_t1

0x7bd5,	// (0x00053f8e) blid2_tripm_values_pane_t2

0x7be3,	// (0x00053f9c) blid2_tripm_values_pane_t3

0x7bf1,	// (0x00053faa) blid2_tripm_values_pane_t4

0x7bff,	// (0x00053fb8) blid2_tripm_values_pane_t5

0x7c0d,	// (0x00053fc6) blid2_tripm_values_pane_t6

0x7c1b,	// (0x00053fd4) blid2_tripm_values_pane_t7

0x7c29,	// (0x00053fe2) blid2_tripm_values_pane_t8

0x7c37,	// (0x00053ff0) blid2_tripm_values_pane_t9

0x0008,

0xfb3f,	// (0x0005bef8) blid2_tripm_values_pane_t

0x22c3,	// (0x0004e67c) call_video_pane_t1_ParamLimits

0x22e1,	// (0x0004e69a) call_video_pane_t2_ParamLimits

0xf273,	// (0x0005b62c) call_video_pane_t_ParamLimits

0x0477,	// (0x0004c830) msg_header_pane_g1_ParamLimits

0xbbc4,	// (0x00057f7d) msg_header_pane_g2_ParamLimits

0xbbc4,	// (0x00057f7d) msg_header_pane_g2

0x0001,

0xf48d,	// (0x0005b846) msg_header_pane_g_ParamLimits

0xf48d,	// (0x0005b846) msg_header_pane_g

0xae12,	// (0x000571cb) main_clock2_pane_ParamLimits

0x5abf,	// (0x00051e78) grid_clock2_toolbar_pane_ParamLimits

0x5abf,	// (0x00051e78) grid_clock2_toolbar_pane

0x5abf,	// (0x00051e78) listscroll_clock2_pane_ParamLimits

0x5abf,	// (0x00051e78) listscroll_clock2_pane

0x5bb4,	// (0x00051f6d) main_clock2_pane_t3_ParamLimits

0x5bb4,	// (0x00051f6d) main_clock2_pane_t3

0x5bd8,	// (0x00051f91) main_clock2_pane_t4_ParamLimits

0x5bd8,	// (0x00051f91) main_clock2_pane_t4

0xe2da,	// (0x0005a693) cell_clock2_toolbar_pane

0xe2e2,	// (0x0005a69b) cell_clock2_toolbar_pane_cp01

0xe2e2,	// (0x0005a69b) cell_clock2_toolbar_pane_cp02

0xe2ea,	// (0x0005a6a3) cell_clock2_toolbar_pane_cp03

0xe2f2,	// (0x0005a6ab) list_clock2_pane

0xb803,	// (0x00057bbc) scroll_pane_cp10

0xe2fa,	// (0x0005a6b3) list_single_clock2_pane_ParamLimits

0xe2fa,	// (0x0005a6b3) list_single_clock2_pane

0xba44,	// (0x00057dfd) list_highlight_pane_cp08

0xe307,	// (0x0005a6c0) list_single_clock2_pane_t1

0xe315,	// (0x0005a6ce) list_single_clock2_pane_t2

0x0001,

0xfb52,	// (0x0005bf0b) list_single_clock2_pane_t

0x9ca9,	// (0x00056062) bg_button_pane_cp10

0xe323,	// (0x0005a6dc) cell_clock2_toolbar_pane_g1

0x3a51,	// (0x0004fe0a) aid_main_viewer_pane_g1_ParamLimits

0x3a51,	// (0x0004fe0a) aid_main_viewer_pane_g1

0x3a5f,	// (0x0004fe18) aid_main_viewer_pane_g2_ParamLimits

0x3a5f,	// (0x0004fe18) aid_main_viewer_pane_g2

0x3a6d,	// (0x0004fe26) aid_main_viewer_pane_g3_ParamLimits

0x3a6d,	// (0x0004fe26) aid_main_viewer_pane_g3

0x3a7c,	// (0x0004fe35) aid_main_viewer_pane_g4_ParamLimits

0x3a7c,	// (0x0004fe35) aid_main_viewer_pane_g4

0x0003,

0xf49e,	// (0x0005b857) aid_main_viewer_pane_g_ParamLimits

0xf49e,	// (0x0005b857) aid_main_viewer_pane_g

0x4382,	// (0x0005073b) main_calc_pane_ParamLimits

0x4396,	// (0x0005074f) main_dialer2_pane_ParamLimits

0x9ca9,	// (0x00056062) main_cam6_pane

0x9ca9,	// (0x00056062) main_vid6_pane

0x5acb,	// (0x00051e84) listscroll_gen_pane_cp06_ParamLimits

0x5acb,	// (0x00051e84) listscroll_gen_pane_cp06

0x5bfb,	// (0x00051fb4) main_clock2_pane_t5_ParamLimits

0x5bfb,	// (0x00051fb4) main_clock2_pane_t5

0x5c55,	// (0x0005200e) aid_call2_pane_cp10_ParamLimits

0x5c67,	// (0x00052020) aid_call_pane_cp10_ParamLimits

0xb881,	// (0x00057c3a) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb881,	// (0x00057c3a) popup_clock_analogue_window_cp10_g2_ParamLimits

0x5c79,	// (0x00052032) popup_clock_analogue_window_cp10_g3_ParamLimits

0x5c79,	// (0x00052032) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb881,	// (0x00057c3a) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7d4,	// (0x0005bb8d) popup_clock_analogue_window_cp10_g_ParamLimits

0x5c8b,	// (0x00052044) popup_clock_analogue_window_cp10_t1_ParamLimits

0x62f4,	// (0x000526ad) cell_dialer2_keypad_pane_g2_ParamLimits

0x62f4,	// (0x000526ad) cell_dialer2_keypad_pane_g2

0x0001,

0xf8ba,	// (0x0005bc73) cell_dialer2_keypad_pane_g_ParamLimits

0xf8ba,	// (0x0005bc73) cell_dialer2_keypad_pane_g

0x6310,	// (0x000526c9) cell_dialer2_keypad_pane_t1

0x6e71,	// (0x0005322a) main_cset_text2_pane_ParamLimits

0x6e71,	// (0x0005322a) main_cset_text2_pane

0xe127,	// (0x0005a4e0) area_vitu2_query_pane_g1_ParamLimits

0x077e,	// (0x0004cb37) area_vitu2_query_pane_g2_ParamLimits

0xfa6f,	// (0x0005be28) area_vitu2_query_pane_g_ParamLimits

0x76cb,	// (0x00053a84) area_vitu2_query_pane_t7_ParamLimits

0x76cb,	// (0x00053a84) area_vitu2_query_pane_t7

0x76ef,	// (0x00053aa8) bg_button_pane_cp018_ParamLimits

0x76fd,	// (0x00053ab6) bg_button_pane_cp021_ParamLimits

0x07b7,	// (0x0004cb70) bg_button_pane_cp022_ParamLimits

0x07b7,	// (0x0004cb70) bg_vkb2_func_pane_cp08_ParamLimits

0x76ef,	// (0x00053aa8) bg_vkb2_func_pane_cp06_ParamLimits

0x76fd,	// (0x00053ab6) bg_vkb2_func_pane_cp07_ParamLimits

0x07c6,	// (0x0004cb7f) input_focus_pane_cp09_ParamLimits

0xa66b,	// (0x00056a24) cam6_autofocus_pane_ParamLimits

0xa66b,	// (0x00056a24) cam6_autofocus_pane

0x7c45,	// (0x00053ffe) cam6_image_uncrop_pane_ParamLimits

0x7c45,	// (0x00053ffe) cam6_image_uncrop_pane

0x7c54,	// (0x0005400d) cam6_indi_pane_ParamLimits

0x7c54,	// (0x0005400d) cam6_indi_pane

0x7c6a,	// (0x00054023) cam6_mode_pane_ParamLimits

0x7c6a,	// (0x00054023) cam6_mode_pane

0x7c7c,	// (0x00054035) cam6_timer_pane_ParamLimits

0x7c7c,	// (0x00054035) cam6_timer_pane

0x7c88,	// (0x00054041) cam6_zoom_pane_ParamLimits

0x7c88,	// (0x00054041) cam6_zoom_pane

0x7c94,	// (0x0005404d) cam6_mode_pane_g1_ParamLimits

0x7c94,	// (0x0005404d) cam6_mode_pane_g1

0x7ca4,	// (0x0005405d) cam6_mode_pane_g2_ParamLimits

0x7ca4,	// (0x0005405d) cam6_mode_pane_g2

0x7cb4,	// (0x0005406d) cam6_mode_pane_g3_ParamLimits

0x7cb4,	// (0x0005406d) cam6_mode_pane_g3

0x7cc4,	// (0x0005407d) cam6_mode_pane_g4_ParamLimits

0x7cc4,	// (0x0005407d) cam6_mode_pane_g4

0x0003,

0xfb57,	// (0x0005bf10) cam6_mode_pane_g_ParamLimits

0xfb57,	// (0x0005bf10) cam6_mode_pane_g

0xe32b,	// (0x0005a6e4) bg_tb_trans_pane_cp08_ParamLimits

0xe32b,	// (0x0005a6e4) bg_tb_trans_pane_cp08

0xe339,	// (0x0005a6f2) cam6_battery_pane_ParamLimits

0xe339,	// (0x0005a6f2) cam6_battery_pane

0xe34f,	// (0x0005a708) cam6_indi_pane_g1_ParamLimits

0xe34f,	// (0x0005a708) cam6_indi_pane_g1

0xe361,	// (0x0005a71a) cam6_indi_pane_g2_ParamLimits

0xe361,	// (0x0005a71a) cam6_indi_pane_g2

0xe373,	// (0x0005a72c) cam6_indi_pane_g3_ParamLimits

0xe373,	// (0x0005a72c) cam6_indi_pane_g3

0x0002,

0xfb60,	// (0x0005bf19) cam6_indi_pane_g_ParamLimits

0xfb60,	// (0x0005bf19) cam6_indi_pane_g

0xe385,	// (0x0005a73e) cam6_indi_pane_t1_ParamLimits

0xe385,	// (0x0005a73e) cam6_indi_pane_t1

0x7cd4,	// (0x0005408d) cam6_autofocus_pane_g1

0x7cdc,	// (0x00054095) cam6_autofocus_pane_g2

0x7ce4,	// (0x0005409d) cam6_autofocus_pane_g3

0x7cec,	// (0x000540a5) cam6_autofocus_pane_g4

0x0003,

0xfb67,	// (0x0005bf20) cam6_autofocus_pane_g

0xe3ab,	// (0x0005a764) cam6_timer_pane_g1

0xe3b3,	// (0x0005a76c) cam6_timer_pane_t1

0xe3c1,	// (0x0005a77a) cam6_zoom_cont_pane

0xe3c9,	// (0x0005a782) cam6_zoom_pane_g1

0xe3d1,	// (0x0005a78a) cam6_zoom_pane_g2

0x7cf4,	// (0x000540ad) cam6_zoom_pane_g3

0x0002,

0xfb70,	// (0x0005bf29) cam6_zoom_pane_g

0xd255,	// (0x0005960e) cam6_battery_pane_g1

0xd255,	// (0x0005960e) cam6_battery_pane_g2

0x0001,

0xf6e1,	// (0x0005ba9a) cam6_battery_pane_g

0xe3d9,	// (0x0005a792) cam6_zoom_cont_pane_g1

0xe3e2,	// (0x0005a79b) cam6_zoom_cont_pane_g2

0xe3eb,	// (0x0005a7a4) cam6_zoom_cont_pane_g3

0x0002,

0xfb77,	// (0x0005bf30) cam6_zoom_cont_pane_g

0x7d11,	// (0x000540ca) cam6_mode_pane_cp_ParamLimits

0x7d11,	// (0x000540ca) cam6_mode_pane_cp

0x7c88,	// (0x00054041) cam6_zoom_pane_cp_ParamLimits

0x7c88,	// (0x00054041) cam6_zoom_pane_cp

0x7d23,	// (0x000540dc) vid6_image_uncrop_cif_pane_ParamLimits

0x7d23,	// (0x000540dc) vid6_image_uncrop_cif_pane

0x7d33,	// (0x000540ec) vid6_image_uncrop_nhd_pane_ParamLimits

0x7d33,	// (0x000540ec) vid6_image_uncrop_nhd_pane

0x7c45,	// (0x00053ffe) vid6_image_uncrop_vga_pane_ParamLimits

0x7c45,	// (0x00053ffe) vid6_image_uncrop_vga_pane

0x7d42,	// (0x000540fb) vid6_image_uncrop_wvga_pane_ParamLimits

0x7d42,	// (0x000540fb) vid6_image_uncrop_wvga_pane

0x7d51,	// (0x0005410a) vid6_indi_pane_ParamLimits

0x7d51,	// (0x0005410a) vid6_indi_pane

0xe32b,	// (0x0005a6e4) bg_tb_trans_pane_cp09_ParamLimits

0xe32b,	// (0x0005a6e4) bg_tb_trans_pane_cp09

0xe403,	// (0x0005a7bc) cam6_battery_pane_cp_ParamLimits

0xe403,	// (0x0005a7bc) cam6_battery_pane_cp

0xe40f,	// (0x0005a7c8) vid6_indi_pane_g1_ParamLimits

0xe40f,	// (0x0005a7c8) vid6_indi_pane_g1

0xe421,	// (0x0005a7da) vid6_indi_pane_g2_ParamLimits

0xe421,	// (0x0005a7da) vid6_indi_pane_g2

0xe433,	// (0x0005a7ec) vid6_indi_pane_g3_ParamLimits

0xe433,	// (0x0005a7ec) vid6_indi_pane_g3

0xe448,	// (0x0005a801) vid6_indi_pane_g4_ParamLimits

0xe448,	// (0x0005a801) vid6_indi_pane_g4

0xe45d,	// (0x0005a816) vid6_indi_pane_g5_ParamLimits

0xe45d,	// (0x0005a816) vid6_indi_pane_g5

0x0004,

0xfb7e,	// (0x0005bf37) vid6_indi_pane_g_ParamLimits

0xfb7e,	// (0x0005bf37) vid6_indi_pane_g

0xe477,	// (0x0005a830) vid6_indi_pane_t1_ParamLimits

0xe477,	// (0x0005a830) vid6_indi_pane_t1

0xe48d,	// (0x0005a846) vid6_indi_pane_t2_ParamLimits

0xe48d,	// (0x0005a846) vid6_indi_pane_t2

0xe4b5,	// (0x0005a86e) vid6_indi_pane_t3_ParamLimits

0xe4b5,	// (0x0005a86e) vid6_indi_pane_t3

0xe4dd,	// (0x0005a896) vid6_indi_pane_t4_ParamLimits

0xe4dd,	// (0x0005a896) vid6_indi_pane_t4

0x0003,

0xfb89,	// (0x0005bf42) vid6_indi_pane_t_ParamLimits

0xfb89,	// (0x0005bf42) vid6_indi_pane_t

0xe501,	// (0x0005a8ba) wait_bar_pane_cp08

0x7d69,	// (0x00054122) main_cset_text2_pane_t1_ParamLimits

0x7d69,	// (0x00054122) main_cset_text2_pane_t1

0x7cfc,	// (0x000540b5) listscroll_gen_pane_cp06_t1_ParamLimits

0x7cfc,	// (0x000540b5) listscroll_gen_pane_cp06_t1

0x9ca9,	// (0x00056062) main_cam6_set_pane

0xd4c1,	// (0x0005987a) bg_tb_trans_pane_cp06_ParamLimits

0xa4ce,	// (0x00056887) cam4_indicators_pane_g1_ParamLimits

0xa4df,	// (0x00056898) cam4_indicators_pane_g2_ParamLimits

0xf8f7,	// (0x0005bcb0) cam4_indicators_pane_g_ParamLimits

0xa4fd,	// (0x000568b6) cam4_indicators_pane_t1_ParamLimits

0xa939,	// (0x00056cf2) bg_tb_trans_pane_cp07_ParamLimits

0xa529,	// (0x000568e2) vid4_indicators_pane_g1_ParamLimits

0xa53d,	// (0x000568f6) vid4_indicators_pane_g2_ParamLimits

0xa551,	// (0x0005690a) vid4_indicators_pane_g3_ParamLimits

0xa562,	// (0x0005691b) vid4_indicators_pane_g4_ParamLimits

0xf909,	// (0x0005bcc2) vid4_indicators_pane_g_ParamLimits

0xa580,	// (0x00056939) vid4_indicators_pane_t1_ParamLimits

0x7835,	// (0x00053bee) vid4_progress_pane_g1_ParamLimits

0x7847,	// (0x00053c00) vid4_progress_pane_g2_ParamLimits

0xa0fc,	// (0x000564b5) vid4_progress_pane_g3_ParamLimits

0xa5fb,	// (0x000569b4) vid4_progress_pane_g4_ParamLimits

0xfaba,	// (0x0005be73) vid4_progress_pane_g_ParamLimits

0xa619,	// (0x000569d2) vid4_progress_pane_t1_ParamLimits

0xa62e,	// (0x000569e7) vid4_progress_pane_t2_ParamLimits

0xa644,	// (0x000569fd) vid4_progress_pane_t3_ParamLimits

0xfac5,	// (0x0005be7e) vid4_progress_pane_t_ParamLimits

0xa659,	// (0x00056a12) wait_bar_pane_cp07_ParamLimits

0x7d86,	// (0x0005413f) main_cam6_set_pane_g2_ParamLimits

0x7d86,	// (0x0005413f) main_cam6_set_pane_g2

0x7daa,	// (0x00054163) main_cset6_listscroll_pane_ParamLimits

0x7daa,	// (0x00054163) main_cset6_listscroll_pane

0x7dca,	// (0x00054183) main_cset6_slider_pane_ParamLimits

0x7dca,	// (0x00054183) main_cset6_slider_pane

0x7de0,	// (0x00054199) main_cset6_text2_pane_ParamLimits

0x7de0,	// (0x00054199) main_cset6_text2_pane

0xe510,	// (0x0005a8c9) main_cset6_text_pane

0xe518,	// (0x0005a8d1) main_cset_list_pane_copy1_ParamLimits

0xe518,	// (0x0005a8d1) main_cset_list_pane_copy1

0xe528,	// (0x0005a8e1) scroll_pane_cp028_copy1

0x7dee,	// (0x000541a7) cset_list_set_pane_copy1

0x7dff,	// (0x000541b8) aid_position_infowindow_above_copy1

0x7e07,	// (0x000541c0) aid_position_infowindow_below_copy1

0x07e9,	// (0x0004cba2) cset_list_set_pane_g1_copy1

0x07f1,	// (0x0004cbaa) cset_list_set_pane_g3_copy1_ParamLimits

0x07f1,	// (0x0004cbaa) cset_list_set_pane_g3_copy1

0x0800,	// (0x0004cbb9) cset_list_set_pane_t1_copy1_ParamLimits

0x0800,	// (0x0004cbb9) cset_list_set_pane_t1_copy1

0xa939,	// (0x00056cf2) list_highlight_pane_cp021_copy1_ParamLimits

0xa939,	// (0x00056cf2) list_highlight_pane_cp021_copy1

0xe531,	// (0x0005a8ea) cset6_slider_pane_ParamLimits

0xe531,	// (0x0005a8ea) cset6_slider_pane

0xe55d,	// (0x0005a916) main_cset6_slider_pane_g1_ParamLimits

0xe55d,	// (0x0005a916) main_cset6_slider_pane_g1

0x7e0f,	// (0x000541c8) main_cset6_slider_pane_g2_ParamLimits

0x7e0f,	// (0x000541c8) main_cset6_slider_pane_g2

0xe585,	// (0x0005a93e) main_cset6_slider_pane_g3_ParamLimits

0xe585,	// (0x0005a93e) main_cset6_slider_pane_g3

0x7e37,	// (0x000541f0) main_cset6_slider_pane_g4_ParamLimits

0x7e37,	// (0x000541f0) main_cset6_slider_pane_g4

0x7e43,	// (0x000541fc) main_cset6_slider_pane_g5_ParamLimits

0x7e43,	// (0x000541fc) main_cset6_slider_pane_g5

0xddf0,	// (0x0005a1a9) main_cset6_slider_pane_g7_ParamLimits

0xddf0,	// (0x0005a1a9) main_cset6_slider_pane_g7

0xddfc,	// (0x0005a1b5) main_cset6_slider_pane_g8_ParamLimits

0xddfc,	// (0x0005a1b5) main_cset6_slider_pane_g8

0x6f1e,	// (0x000532d7) main_cset6_slider_pane_g9_ParamLimits

0x6f1e,	// (0x000532d7) main_cset6_slider_pane_g9

0x6f2a,	// (0x000532e3) main_cset6_slider_pane_g10_ParamLimits

0x6f2a,	// (0x000532e3) main_cset6_slider_pane_g10

0x6f36,	// (0x000532ef) main_cset6_slider_pane_g11_ParamLimits

0x6f36,	// (0x000532ef) main_cset6_slider_pane_g11

0x6f42,	// (0x000532fb) main_cset6_slider_pane_g12_ParamLimits

0x6f42,	// (0x000532fb) main_cset6_slider_pane_g12

0x6f4e,	// (0x00053307) main_cset6_slider_pane_g13_ParamLimits

0x6f4e,	// (0x00053307) main_cset6_slider_pane_g13

0x6f5a,	// (0x00053313) main_cset6_slider_pane_g14_ParamLimits

0x6f5a,	// (0x00053313) main_cset6_slider_pane_g14

0x7e4f,	// (0x00054208) main_cset6_slider_pane_g15_ParamLimits

0x7e4f,	// (0x00054208) main_cset6_slider_pane_g15

0x6f7e,	// (0x00053337) main_cset6_slider_pane_g16_ParamLimits

0x6f7e,	// (0x00053337) main_cset6_slider_pane_g16

0x6f8a,	// (0x00053343) main_cset6_slider_pane_g17_ParamLimits

0x6f8a,	// (0x00053343) main_cset6_slider_pane_g17

0x0011,

0xfb92,	// (0x0005bf4b) main_cset6_slider_pane_g_ParamLimits

0xfb92,	// (0x0005bf4b) main_cset6_slider_pane_g

0xe591,	// (0x0005a94a) main_cset6_slider_pane_t1_ParamLimits

0xe591,	// (0x0005a94a) main_cset6_slider_pane_t1

0x7e7f,	// (0x00054238) main_cset6_slider_pane_t2_ParamLimits

0x7e7f,	// (0x00054238) main_cset6_slider_pane_t2

0x7eaa,	// (0x00054263) main_cset6_slider_pane_t3_ParamLimits

0x7eaa,	// (0x00054263) main_cset6_slider_pane_t3

0x7ed5,	// (0x0005428e) main_cset6_slider_pane_t4_ParamLimits

0x7ed5,	// (0x0005428e) main_cset6_slider_pane_t4

0x7f00,	// (0x000542b9) main_cset6_slider_pane_t5_ParamLimits

0x7f00,	// (0x000542b9) main_cset6_slider_pane_t5

0xe5d2,	// (0x0005a98b) main_cset6_slider_pane_t7_ParamLimits

0xe5d2,	// (0x0005a98b) main_cset6_slider_pane_t7

0x7f2b,	// (0x000542e4) main_cset6_slider_pane_t8_ParamLimits

0x7f2b,	// (0x000542e4) main_cset6_slider_pane_t8

0x7f4f,	// (0x00054308) main_cset6_slider_pane_t9_ParamLimits

0x7f4f,	// (0x00054308) main_cset6_slider_pane_t9

0x7f73,	// (0x0005432c) main_cset6_slider_pane_t10_ParamLimits

0x7f73,	// (0x0005432c) main_cset6_slider_pane_t10

0x7f97,	// (0x00054350) main_cset6_slider_pane_t11_ParamLimits

0x7f97,	// (0x00054350) main_cset6_slider_pane_t11

0xe608,	// (0x0005a9c1) main_cset6_slider_pane_t14_ParamLimits

0xe608,	// (0x0005a9c1) main_cset6_slider_pane_t14

0xe641,	// (0x0005a9fa) main_cset6_slider_pane_t15_ParamLimits

0xe641,	// (0x0005a9fa) main_cset6_slider_pane_t15

0x000b,

0xfbb7,	// (0x0005bf70) main_cset6_slider_pane_t_ParamLimits

0xfbb7,	// (0x0005bf70) main_cset6_slider_pane_t

0xdeb4,	// (0x0005a26d) cset_slider_pane_g1_copy1

0xdebd,	// (0x0005a276) cset_slider_pane_g2_copy1

0xdec6,	// (0x0005a27f) cset_slider_pane_g3_copy1

0x9ca9,	// (0x00056062) bg_popup_sub_pane_cp011_copy1

0xe67a,	// (0x0005aa33) main_cset_text_pane_g1_copy1

0xdf4f,	// (0x0005a308) main_cset_text_pane_t1_copy1

0xdf5d,	// (0x0005a316) main_cset_text_pane_t2_copy1

0xdf6b,	// (0x0005a324) main_cset_text_pane_t3_copy1

0xdf79,	// (0x0005a332) main_cset_text_pane_t4_copy1

0xdf87,	// (0x0005a340) main_cset_text_pane_t5_copy1

0xe682,	// (0x0005aa3b) main_cset_text_pane_t6_copy1

0xdfa3,	// (0x0005a35c) main_cset_text_pane_t7_copy1

0x7d69,	// (0x00054122) main_cset_text2_pane_t1_copy1

0xa939,	// (0x00056cf2) main_ncimui_pane

0x45e0,	// (0x00050999) popup_query_ncimui_window_ParamLimits

0x45e0,	// (0x00050999) popup_query_ncimui_window

0x52ff,	// (0x000516b8) field_cale_ev2_pane_g4_ParamLimits

0x52ff,	// (0x000516b8) field_cale_ev2_pane_g4

0x61d4,	// (0x0005258d) cell_video_dialer_keypad_pane_g2_ParamLimits

0x61d4,	// (0x0005258d) cell_video_dialer_keypad_pane_g2

0x0001,

0xf895,	// (0x0005bc4e) cell_video_dialer_keypad_pane_g_ParamLimits

0xf895,	// (0x0005bc4e) cell_video_dialer_keypad_pane_g

0x61ec,	// (0x000525a5) cell_video_dialer_keypad_pane_t1

0x9ca9,	// (0x00056062) bg_popup_window_pane_cp012

0xb6d0,	// (0x00057a89) heading_pane_cp06

0xe6ae,	// (0x0005aa67) ncim_query_content_pane

0x9ca9,	// (0x00056062) bg_popup_heading_pane_cp01

0xe6b6,	// (0x0005aa6f) ncim_heading_pane_t1

0xe6c4,	// (0x0005aa7d) ncim_indicator_popup_pane

0xe6d6,	// (0x0005aa8f) ncim_query_button_pane

0xe6ea,	// (0x0005aaa3) ncim_query_content_pane_t1

0xe6fc,	// (0x0005aab5) ncim_query_content_pane_t2

0x0005,

0xfbfb,	// (0x0005bfb4) ncim_query_content_pane_t

0xe736,	// (0x0005aaef) ncim_query_list_pane

0xe748,	// (0x0005ab01) ncim_query_popup_pane

0xe6c4,	// (0x0005aa7d) ncim_indicator_popup_pane_ParamLimits

0x80e1,	// (0x0005449a) ncim_query_content_pane_g1_ParamLimits

0x80e1,	// (0x0005449a) ncim_query_content_pane_g1

0xe6ea,	// (0x0005aaa3) ncim_query_content_pane_t1_ParamLimits

0xe6fc,	// (0x0005aab5) ncim_query_content_pane_t2_ParamLimits

0x80ed,	// (0x000544a6) ncim_query_content_pane_t3_ParamLimits

0x80ed,	// (0x000544a6) ncim_query_content_pane_t3

0x8115,	// (0x000544ce) ncim_query_content_pane_t4_ParamLimits

0x8115,	// (0x000544ce) ncim_query_content_pane_t4

0x813d,	// (0x000544f6) ncim_query_content_pane_t5_ParamLimits

0x813d,	// (0x000544f6) ncim_query_content_pane_t5

0xe70e,	// (0x0005aac7) ncim_query_content_pane_t6_ParamLimits

0xe70e,	// (0x0005aac7) ncim_query_content_pane_t6

0xfbfb,	// (0x0005bfb4) ncim_query_content_pane_t_ParamLimits

0xe736,	// (0x0005aaef) ncim_query_list_pane_ParamLimits

0xe748,	// (0x0005ab01) ncim_query_popup_pane_ParamLimits

0xe75c,	// (0x0005ab15) wait_bar_pane_cp04

0x9ca9,	// (0x00056062) input_focus_pane_cp011

0xe764,	// (0x0005ab1d) ncim_query_popup_pane_t1

0xe772,	// (0x0005ab2b) ncim_list_query_list_pane_ParamLimits

0xe772,	// (0x0005ab2b) ncim_list_query_list_pane

0x9ca9,	// (0x00056062) bg_button_pane_cp027

0xe77f,	// (0x0005ab38) ncim_query_button_pane_g1

0x9ca9,	// (0x00056062) list_highlight_pane_cp012

0xe789,	// (0x0005ab42) ncim_list_query_list_pane_g1

0xe791,	// (0x0005ab4a) ncim_list_query_list_pane_t1

0xa4ee,	// (0x000568a7) cam4_indicators_pane_g3_ParamLimits

0xa4ee,	// (0x000568a7) cam4_indicators_pane_g3

0xa56e,	// (0x00056927) vid4_indicators_pane_g5_ParamLimits

0xa56e,	// (0x00056927) vid4_indicators_pane_g5

0xa60a,	// (0x000569c3) vid4_progress_pane_g5_ParamLimits

0xa60a,	// (0x000569c3) vid4_progress_pane_g5

0x7fcf,	// (0x00054388) main_ncimui_pane_g1

0x8035,	// (0x000543ee) ncimui_group_query_pane_ParamLimits

0x8035,	// (0x000543ee) ncimui_group_query_pane

0x807d,	// (0x00054436) ncimui_list_pane_ParamLimits

0x807d,	// (0x00054436) ncimui_list_pane

0x80a4,	// (0x0005445d) ncimui_text_pane_ParamLimits

0x80a4,	// (0x0005445d) ncimui_text_pane

0x8165,	// (0x0005451e) ncimui_text_pane_t1_ParamLimits

0x8165,	// (0x0005451e) ncimui_text_pane_t1

0xe79f,	// (0x0005ab58) ncimui_list_single_graphic_pane_ParamLimits

0xe79f,	// (0x0005ab58) ncimui_list_single_graphic_pane

0x8183,	// (0x0005453c) ncimui_query_pane_ParamLimits

0x8183,	// (0x0005453c) ncimui_query_pane

0x9ca9,	// (0x00056062) list_highlight_pane_cp013

0xe7af,	// (0x0005ab68) ncim_list_query_list_pane_t1_copy1

0xe789,	// (0x0005ab42) ncim_list_single_graphic_pane_g1

0xe7bd,	// (0x0005ab76) ncim_query_button_pane_cp01

0xe7c9,	// (0x0005ab82) ncim_query_entry_pane_ParamLimits

0xe7c9,	// (0x0005ab82) ncim_query_entry_pane

0xe7dc,	// (0x0005ab95) ncimui_query_pane_g1

0xe7e8,	// (0x0005aba1) ncimui_query_pane_t1_ParamLimits

0xe7e8,	// (0x0005aba1) ncimui_query_pane_t1

0xa939,	// (0x00056cf2) input_focus_pane_cp012

0xe801,	// (0x0005abba) ncim_query_entry_pane_t1

0xae12,	// (0x000571cb) main_im_pane_ParamLimits

0xa939,	// (0x00056cf2) main_mobtv_pane_ParamLimits

0xa939,	// (0x00056cf2) main_mobtv_pane

0x7e67,	// (0x00054220) main_cset6_slider_pane_g18_ParamLimits

0x7e67,	// (0x00054220) main_cset6_slider_pane_g18

0x7e73,	// (0x0005422c) main_cset6_slider_pane_g19_ParamLimits

0x7e73,	// (0x0005422c) main_cset6_slider_pane_g19

0xb5e9,	// (0x000579a2) bg_main_mobtv_pane_ParamLimits

0xb5e9,	// (0x000579a2) bg_main_mobtv_pane

0x8196,	// (0x0005454f) main_mobtv_info_pane

0x819f,	// (0x00054558) main_mobtv_loading_pane_ParamLimits

0x819f,	// (0x00054558) main_mobtv_loading_pane

0xe813,	// (0x0005abcc) main_mobtv_pg_channel_list_pane

0xe81d,	// (0x0005abd6) main_mobtv_pg_hdr_pane

0x81ac,	// (0x00054565) main_mobtv_programe_curr_pane_ParamLimits

0x81ac,	// (0x00054565) main_mobtv_programe_curr_pane

0x81b9,	// (0x00054572) main_mobtv_programe_next_pane_ParamLimits

0x81b9,	// (0x00054572) main_mobtv_programe_next_pane

0xe826,	// (0x0005abdf) popup_mobtv_noti_window

0xd255,	// (0x0005960e) main_tv_pg_hdr_pane_g1

0xe82e,	// (0x0005abe7) main_tv_pg_hdr_pane_g2

0xe836,	// (0x0005abef) main_tv_pg_hdr_pane_g3

0xe83e,	// (0x0005abf7) main_tv_pg_hdr_pane_g4

0xe846,	// (0x0005abff) main_tv_pg_hdr_pane_g5

0xe850,	// (0x0005ac09) main_tv_pg_hdr_pane_g6

0xe85a,	// (0x0005ac13) main_tv_pg_hdr_pane_g7

0xe864,	// (0x0005ac1d) main_tv_pg_hdr_pane_g8

0xe86e,	// (0x0005ac27) main_tv_pg_hdr_pane_g9

0xe878,	// (0x0005ac31) main_tv_pg_hdr_pane_g10

0xe882,	// (0x0005ac3b) main_tv_pg_hdr_pane_g11

0x000a,

0xfc08,	// (0x0005bfc1) main_tv_pg_hdr_pane_g

0xe88c,	// (0x0005ac45) main_tv_pg_hdr_pane_t1

0xe89a,	// (0x0005ac53) main_tv_pg_hdr_pane_t2

0xe8a8,	// (0x0005ac61) main_tv_pg_hdr_pane_t3

0xe8b8,	// (0x0005ac71) main_tv_pg_hdr_pane_t4

0xe8e8,	// (0x0005aca1) main_tv_pg_hdr_pane_t5

0x0004,

0xfc1f,	// (0x0005bfd8) main_tv_pg_hdr_pane_t

0xe8f8,	// (0x0005acb1) single_mobtv_pg_channel_pane_ParamLimits

0xe8f8,	// (0x0005acb1) single_mobtv_pg_channel_pane

0xe90a,	// (0x0005acc3) single_mobtv_pg_channel_table_pane

0xe913,	// (0x0005accc) single_mobtv_pg_channel_thumb_pane

0xe91c,	// (0x0005acd5) single_tv_pg_channel_pane_g1

0xe925,	// (0x0005acde) single_tv_pg_channel_pane_g2

0x0001,

0xfc2a,	// (0x0005bfe3) single_tv_pg_channel_pane_g

0xd4c1,	// (0x0005987a) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xd4c1,	// (0x0005987a) bg_single_mobtv_pg_channel_thumb_pane

0xe92e,	// (0x0005ace7) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe92e,	// (0x0005ace7) single_mobtv_pg_channel_thumb_pane_g1

0xe93c,	// (0x0005acf5) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe93c,	// (0x0005acf5) single_mobtv_pg_channel_thumb_pane_g2

0xe948,	// (0x0005ad01) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe948,	// (0x0005ad01) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc2f,	// (0x0005bfe8) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc2f,	// (0x0005bfe8) single_mobtv_pg_channel_thumb_pane_g

0xe954,	// (0x0005ad0d) single_mobtv_pg_channel_thumb_pane_t1

0xe962,	// (0x0005ad1b) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc36,	// (0x0005bfef) single_mobtv_pg_channel_thumb_pane_t

0xd255,	// (0x0005960e) bg_single_mobtv_pg_channel_table_pane_g1

0xd255,	// (0x0005960e) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6e1,	// (0x0005ba9a) bg_single_mobtv_pg_channel_table_pane_g

0xe970,	// (0x0005ad29) single_mobtv_pg_channel_table_pane_t1

0xe97e,	// (0x0005ad37) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc3b,	// (0x0005bff4) single_mobtv_pg_channel_table_pane_t

0x81ce,	// (0x00054587) main_mobtv_info_pane_g1_ParamLimits

0x81ce,	// (0x00054587) main_mobtv_info_pane_g1

0x81ec,	// (0x000545a5) main_mobtv_info_pane_t1_ParamLimits

0x81ec,	// (0x000545a5) main_mobtv_info_pane_t1

0x8264,	// (0x0005461d) main_mobtv_info_pane_t2_ParamLimits

0x8264,	// (0x0005461d) main_mobtv_info_pane_t2

0x0002,

0xfc45,	// (0x0005bffe) main_mobtv_info_pane_t_ParamLimits

0xfc45,	// (0x0005bffe) main_mobtv_info_pane_t

0x82f3,	// (0x000546ac) wait_bar_pane_cp05

0x8305,	// (0x000546be) main_mobtv_loading_pane_g1_ParamLimits

0x8305,	// (0x000546be) main_mobtv_loading_pane_g1

0x8318,	// (0x000546d1) main_mobtv_loading_pane_g2_ParamLimits

0x8318,	// (0x000546d1) main_mobtv_loading_pane_g2

0x8324,	// (0x000546dd) main_mobtv_loading_pane_g3_ParamLimits

0x8324,	// (0x000546dd) main_mobtv_loading_pane_g3

0x0002,

0xfc4c,	// (0x0005c005) main_mobtv_loading_pane_g_ParamLimits

0xfc4c,	// (0x0005c005) main_mobtv_loading_pane_g

0xe98c,	// (0x0005ad45) main_mobtv_loading_pane_t1_ParamLimits

0xe98c,	// (0x0005ad45) main_mobtv_loading_pane_t1

0xe9a4,	// (0x0005ad5d) main_mobtv_loading_pane_t2_ParamLimits

0xe9a4,	// (0x0005ad5d) main_mobtv_loading_pane_t2

0x0001,

0xfc53,	// (0x0005c00c) main_mobtv_loading_pane_t_ParamLimits

0xfc53,	// (0x0005c00c) main_mobtv_loading_pane_t

0x8337,	// (0x000546f0) wait_bar_pane_cp06_ParamLimits

0x8337,	// (0x000546f0) wait_bar_pane_cp06

0xe9c8,	// (0x0005ad81) main_mobtv_programe_curr_pane_t1

0xe9d6,	// (0x0005ad8f) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc58,	// (0x0005c011) main_mobtv_programe_curr_pane_t

0xe9e4,	// (0x0005ad9d) main_mobtv_programe_next_pane_t1

0xe9f2,	// (0x0005adab) main_mobtv_programe_next_pane_t2

0xea00,	// (0x0005adb9) main_mobtv_programe_next_pane_t3

0x0002,

0xfc5d,	// (0x0005c016) main_mobtv_programe_next_pane_t

0x9ca9,	// (0x00056062) bg_popup_mobtv_noti_window_pane

0xea0e,	// (0x0005adc7) popup_mobtv_noti_window_g1

0xea16,	// (0x0005adcf) popup_mobtv_noti_window_t1

0xea24,	// (0x0005addd) popup_mobtv_noti_window_t2

0x0001,

0xfc64,	// (0x0005c01d) popup_mobtv_noti_window_t

0xd255,	// (0x0005960e) bg_popup_mobtv_noti_window_pane_g1

0x9ca9,	// (0x00056062) sc_clock_pane

0x9ca9,	// (0x00056062) main_fs_bigclock_pane

0x7aba,	// (0x00053e73) blid2_tripm_pane_t4_ParamLimits

0x7aba,	// (0x00053e73) blid2_tripm_pane_t4

0x8346,	// (0x000546ff) sc_clock_pane_g1_ParamLimits

0x8346,	// (0x000546ff) sc_clock_pane_g1

0x8358,	// (0x00054711) sc_clock_pane_t1_ParamLimits

0x8358,	// (0x00054711) sc_clock_pane_t1

0x837a,	// (0x00054733) sc_clock_pane_t2_ParamLimits

0x837a,	// (0x00054733) sc_clock_pane_t2

0x8392,	// (0x0005474b) sc_clock_pane_t3_ParamLimits

0x8392,	// (0x0005474b) sc_clock_pane_t3

0x0004,

0xfc69,	// (0x0005c022) sc_clock_pane_t_ParamLimits

0xfc69,	// (0x0005c022) sc_clock_pane_t

0x8e91,	// (0x0005524a) main_fs_bigclock_indicator_pane_ParamLimits

0x8e91,	// (0x0005524a) main_fs_bigclock_indicator_pane

0xd491,	// (0x0005984a) main_fs_bigclock_pane_g1_ParamLimits

0xd491,	// (0x0005984a) main_fs_bigclock_pane_g1

0x8e9d,	// (0x00055256) main_fs_bigclock_pane_t1_ParamLimits

0x8e9d,	// (0x00055256) main_fs_bigclock_pane_t1

0x8eaf,	// (0x00055268) main_fs_bigclock_pane_t2_ParamLimits

0x8eaf,	// (0x00055268) main_fs_bigclock_pane_t2

0x8ec3,	// (0x0005527c) main_fs_bigclock_pane_t3_ParamLimits

0x8ec3,	// (0x0005527c) main_fs_bigclock_pane_t3

0x0002,

0xfe47,	// (0x0005c200) main_fs_bigclock_pane_t_ParamLimits

0xfe47,	// (0x0005c200) main_fs_bigclock_pane_t

0x8ed5,	// (0x0005528e) main_fs_bigclock_indicator_pane_g1

0xe6de,	// (0x0005aa97) ncim_query_content_pane_g2_ParamLimits

0xe6de,	// (0x0005aa97) ncim_query_content_pane_g2

0x0001,

0xfbf6,	// (0x0005bfaf) ncim_query_content_pane_g_ParamLimits

0xfbf6,	// (0x0005bfaf) ncim_query_content_pane_g

0x83ab,	// (0x00054764) sc_clock_pane_t4_ParamLimits

0x83ab,	// (0x00054764) sc_clock_pane_t4

0xa939,	// (0x00056cf2) main_radioblah_pane

0xdc12,	// (0x00059fcb) cell_call4_button_pane_t1_copy1_ParamLimits

0xdc12,	// (0x00059fcb) cell_call4_button_pane_t1_copy1

0x7fe7,	// (0x000543a0) main_ncimui_pane_t1_ParamLimits

0x7fe7,	// (0x000543a0) main_ncimui_pane_t1

0x8001,	// (0x000543ba) main_ncimui_pane_t2_ParamLimits

0x8001,	// (0x000543ba) main_ncimui_pane_t2

0x0002,

0xfbef,	// (0x0005bfa8) main_ncimui_pane_t_ParamLimits

0xfbef,	// (0x0005bfa8) main_ncimui_pane_t

0xeb5e,	// (0x0005af17) main_radioblah_anim_pane_ParamLimits

0xeb5e,	// (0x0005af17) main_radioblah_anim_pane

0xeb6f,	// (0x0005af28) main_radioblah_info_pane_ParamLimits

0xeb6f,	// (0x0005af28) main_radioblah_info_pane

0xeb83,	// (0x0005af3c) main_radioblah_pane_t1_ParamLimits

0xeb83,	// (0x0005af3c) main_radioblah_pane_t1

0xeb9f,	// (0x0005af58) main_radioblah_pane_t2_ParamLimits

0xeb9f,	// (0x0005af58) main_radioblah_pane_t2

0x0003,

0xfc8a,	// (0x0005c043) main_radioblah_pane_t_ParamLimits

0xfc8a,	// (0x0005c043) main_radioblah_pane_t

0x8461,	// (0x0005481a) main_radioblah_rocker_ctrl_pane_ParamLimits

0x8461,	// (0x0005481a) main_radioblah_rocker_ctrl_pane

0xebe7,	// (0x0005afa0) main_radioblah_info_pane_t1_ParamLimits

0xebe7,	// (0x0005afa0) main_radioblah_info_pane_t1

0x84b9,	// (0x00054872) main_radioblah_info_pane_t2_ParamLimits

0x84b9,	// (0x00054872) main_radioblah_info_pane_t2

0x0003,

0xfc93,	// (0x0005c04c) main_radioblah_info_pane_t_ParamLimits

0xfc93,	// (0x0005c04c) main_radioblah_info_pane_t

0xd255,	// (0x0005960e) main_radioblah_rocker_ctrl_pane_g1

0x8569,	// (0x00054922) main_radioblah_rocker_ctrl_pane_g2

0x8571,	// (0x0005492a) main_radioblah_rocker_ctrl_pane_g3

0x8579,	// (0x00054932) main_radioblah_rocker_ctrl_pane_g4

0x8581,	// (0x0005493a) main_radioblah_rocker_ctrl_pane_g5

0x8589,	// (0x00054942) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc9c,	// (0x0005c055) main_radioblah_rocker_ctrl_pane_g

0x7d69,	// (0x00054122) main_cset_text2_pane_t1_copy1_ParamLimits

0xa4be,	// (0x00056877) cam4_image_uncrop_qvga_pane

0xa517,	// (0x000568d0) vid4_image_uncrop_qcif_pane

0xa66b,	// (0x00056a24) cam6_image_uncrop_qvga_pane_ParamLimits

0xa66b,	// (0x00056a24) cam6_image_uncrop_qvga_pane

0xe3f3,	// (0x0005a7ac) vid6_image_uncrop_qcif_pane_ParamLimits

0xe3f3,	// (0x0005a7ac) vid6_image_uncrop_qcif_pane

0x9ca9,	// (0x00056062) bg_popup_preview_window_pane_cp03

0xe690,	// (0x0005aa49) list_cset_text2_pane

0xe698,	// (0x0005aa51) main_cset6_text2_pane_g1

0xe6a0,	// (0x0005aa59) main_cset6_text2_pane_t1

0x8591,	// (0x0005494a) list_cset_text2_pane_t1_ParamLimits

0x8591,	// (0x0005494a) list_cset_text2_pane_t1

0xa939,	// (0x00056cf2) main_radioblah_pane_ParamLimits

0x82df,	// (0x00054698) main_mobtv_info_pane_t3_ParamLimits

0x82df,	// (0x00054698) main_mobtv_info_pane_t3

0x844f,	// (0x00054808) main_radioblah_pane_g1

0x8489,	// (0x00054842) main_radioblah_info_pane_g1

0x850e,	// (0x000548c7) main_radioblah_info_pane_t3_ParamLimits

0x850e,	// (0x000548c7) main_radioblah_info_pane_t3

0x318e,	// (0x0004f547) highlight_cell_cale_month_pane_ParamLimits

0x318e,	// (0x0004f547) highlight_cell_cale_month_pane

0x9ca9,	// (0x00056062) main_phob_fisheye_pane

0xd5bd,	// (0x00059976) scroll_pane_cp0031_ParamLimits

0xd5bd,	// (0x00059976) scroll_pane_cp0031

0xe501,	// (0x0005a8ba) wait_bar_pane_cp08_ParamLimits

0x7dee,	// (0x000541a7) cset_list_set_pane_copy1_ParamLimits

0xec21,	// (0x0005afda) highlight_cell_cale_month_pane_g1

0x85aa,	// (0x00054963) highlight_cell_cale_month_pane_t1

0xe17b,	// (0x0005a534) list_gen_pane_cp01

0xdddb,	// (0x0005a194) scroll_pane_01

0x85b8,	// (0x00054971) list_single_double_fisheye_pane

0x08e6,	// (0x0004cc9f) list_double_fisheye_pane_g1_ParamLimits

0x08e6,	// (0x0004cc9f) list_double_fisheye_pane_g1

0x08f2,	// (0x0004ccab) list_double_fisheye_pane_g2_ParamLimits

0x08f2,	// (0x0004ccab) list_double_fisheye_pane_g2

0x85c1,	// (0x0005497a) list_double_fisheye_pane_g3_ParamLimits

0x85c1,	// (0x0005497a) list_double_fisheye_pane_g3

0x0004,

0xfca9,	// (0x0005c062) list_double_fisheye_pane_g_ParamLimits

0xfca9,	// (0x0005c062) list_double_fisheye_pane_g

0x0923,	// (0x0004ccdc) list_double_fisheye_pane_t1_ParamLimits

0x0923,	// (0x0004ccdc) list_double_fisheye_pane_t1

0x093e,	// (0x0004ccf7) list_double_fisheye_pane_t2_ParamLimits

0x093e,	// (0x0004ccf7) list_double_fisheye_pane_t2

0x0001,

0xfcb4,	// (0x0005c06d) list_double_fisheye_pane_t_ParamLimits

0xfcb4,	// (0x0005c06d) list_double_fisheye_pane_t

0x9ca9,	// (0x00056062) main_call5_pane

0x83d6,	// (0x0005478f) sc_swipe_pane_ParamLimits

0x83d6,	// (0x0005478f) sc_swipe_pane

0x85e0,	// (0x00054999) call5_image_pane_ParamLimits

0x85e0,	// (0x00054999) call5_image_pane

0x85fd,	// (0x000549b6) call5_swipe_1_pane_ParamLimits

0x85fd,	// (0x000549b6) call5_swipe_1_pane

0x8610,	// (0x000549c9) call5_swipe_2_pane_ParamLimits

0x8610,	// (0x000549c9) call5_swipe_2_pane

0x863b,	// (0x000549f4) popup_call5_audio_first_window_ParamLimits

0x863b,	// (0x000549f4) popup_call5_audio_first_window

0xd4c1,	// (0x0005987a) call5_swipe_1_pane_g1_ParamLimits

0xd4c1,	// (0x0005987a) call5_swipe_1_pane_g1

0xec29,	// (0x0005afe2) call5_swipe_1_pane_g2_ParamLimits

0xec29,	// (0x0005afe2) call5_swipe_1_pane_g2

0x0001,

0xfcb9,	// (0x0005c072) call5_swipe_1_pane_g_ParamLimits

0xfcb9,	// (0x0005c072) call5_swipe_1_pane_g

0xec35,	// (0x0005afee) call5_swipe_1_pane_t1_ParamLimits

0xec35,	// (0x0005afee) call5_swipe_1_pane_t1

0xd4c1,	// (0x0005987a) call5_swipe_2_pane_g1_ParamLimits

0xd4c1,	// (0x0005987a) call5_swipe_2_pane_g1

0xec4a,	// (0x0005b003) call5_swipe_2_pane_g2_ParamLimits

0xec4a,	// (0x0005b003) call5_swipe_2_pane_g2

0x0001,

0xfcbe,	// (0x0005c077) call5_swipe_2_pane_g_ParamLimits

0xfcbe,	// (0x0005c077) call5_swipe_2_pane_g

0xec56,	// (0x0005b00f) call5_swipe_2_pane_t1_ParamLimits

0xec56,	// (0x0005b00f) call5_swipe_2_pane_t1

0xec6b,	// (0x0005b024) sc_swipe_pane_g1_ParamLimits

0xec6b,	// (0x0005b024) sc_swipe_pane_g1

0xec78,	// (0x0005b031) sc_swipe_pane_g2_ParamLimits

0xec78,	// (0x0005b031) sc_swipe_pane_g2

0x0001,

0xfcc3,	// (0x0005c07c) sc_swipe_pane_g_ParamLimits

0xfcc3,	// (0x0005c07c) sc_swipe_pane_g

0xec84,	// (0x0005b03d) sc_swipe_pane_t1_ParamLimits

0xec84,	// (0x0005b03d) sc_swipe_pane_t1

0x9ca9,	// (0x00056062) main_cmail_launcher_pane

0x864c,	// (0x00054a05) aid_size_cell_cmail_l_ParamLimits

0x864c,	// (0x00054a05) aid_size_cell_cmail_l

0x8666,	// (0x00054a1f) grid_cmail_l_pane_ParamLimits

0x8666,	// (0x00054a1f) grid_cmail_l_pane

0x8681,	// (0x00054a3a) cell_cmail_l_pane_ParamLimits

0x8681,	// (0x00054a3a) cell_cmail_l_pane

0x86a7,	// (0x00054a60) cell_cmail_l_pane_g1_ParamLimits

0x86a7,	// (0x00054a60) cell_cmail_l_pane_g1

0x86b3,	// (0x00054a6c) cell_cmail_l_pane_t1_ParamLimits

0x86b3,	// (0x00054a6c) cell_cmail_l_pane_t1

0xec99,	// (0x0005b052) cell_cmail_l_pane_t2_ParamLimits

0xec99,	// (0x0005b052) cell_cmail_l_pane_t2

0x0001,

0xfcc8,	// (0x0005c081) cell_cmail_l_pane_t_ParamLimits

0xfcc8,	// (0x0005c081) cell_cmail_l_pane_t

0xa939,	// (0x00056cf2) grid_highlight_pane_cp018_ParamLimits

0xa939,	// (0x00056cf2) grid_highlight_pane_cp018

0x123a,	// (0x0004d5f3) main2_pane_ParamLimits

0x123a,	// (0x0004d5f3) main2_pane

0xaeab,	// (0x00057264) popup_sp_fs_action_menu_bg_pane_g1

0xaeb3,	// (0x0005726c) popup_sp_fs_action_menu_bg_pane_g2

0xaebb,	// (0x00057274) popup_sp_fs_action_menu_bg_pane_g3

0xaec3,	// (0x0005727c) popup_sp_fs_action_menu_bg_pane_g4

0xaecb,	// (0x00057284) popup_sp_fs_action_menu_bg_pane_g5

0xaed3,	// (0x0005728c) popup_sp_fs_action_menu_bg_pane_g6

0xaedb,	// (0x00057294) popup_sp_fs_action_menu_bg_pane_g7

0xaee3,	// (0x0005729c) popup_sp_fs_action_menu_bg_pane_g8

0xaeeb,	// (0x000572a4) popup_sp_fs_action_menu_bg_pane_g9

0xaef3,	// (0x000572ac) popup_sp_fs_action_menu_bg_pane_g10

0xaef3,	// (0x000572ac) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf18d,	// (0x0005b546) popup_sp_fs_action_menu_bg_pane_g

0x021f,	// (0x0004c5d8) list_medium_line_x2_t3_g3_g1_ParamLimits

0x021f,	// (0x0004c5d8) list_medium_line_x2_t3_g3_g1

0x022b,	// (0x0004c5e4) list_medium_line_x2_t3_g3_g2_ParamLimits

0x022b,	// (0x0004c5e4) list_medium_line_x2_t3_g3_g2

0x0237,	// (0x0004c5f0) list_medium_line_x2_t3_g3_g3_ParamLimits

0x0237,	// (0x0004c5f0) list_medium_line_x2_t3_g3_g3

0x0002,

0xf23d,	// (0x0005b5f6) list_medium_line_x2_t3_g3_g_ParamLimits

0xf23d,	// (0x0005b5f6) list_medium_line_x2_t3_g3_g

0x0243,	// (0x0004c5fc) list_medium_line_x2_t3_g3_t1_ParamLimits

0x0243,	// (0x0004c5fc) list_medium_line_x2_t3_g3_t1

0x0258,	// (0x0004c611) list_medium_line_x2_t3_g3_t2_ParamLimits

0x0258,	// (0x0004c611) list_medium_line_x2_t3_g3_t2

0x026c,	// (0x0004c625) list_medium_line_x2_t3_g3_t3_ParamLimits

0x026c,	// (0x0004c625) list_medium_line_x2_t3_g3_t3

0x0002,

0xf244,	// (0x0005b5fd) list_medium_line_x2_t3_g3_t_ParamLimits

0xf244,	// (0x0005b5fd) list_medium_line_x2_t3_g3_t

0x021f,	// (0x0004c5d8) list_medium_line_x2_t3_g2_g1_ParamLimits

0x021f,	// (0x0004c5d8) list_medium_line_x2_t3_g2_g1

0x0237,	// (0x0004c5f0) list_medium_line_x2_t3_g2_g2_ParamLimits

0x0237,	// (0x0004c5f0) list_medium_line_x2_t3_g2_g2

0x0001,

0xf24b,	// (0x0005b604) list_medium_line_x2_t3_g2_g_ParamLimits

0xf24b,	// (0x0005b604) list_medium_line_x2_t3_g2_g

0x0281,	// (0x0004c63a) list_medium_line_x2_t3_g2_t1_ParamLimits

0x0281,	// (0x0004c63a) list_medium_line_x2_t3_g2_t1

0x0297,	// (0x0004c650) list_medium_line_x2_t3_g2_t2_ParamLimits

0x0297,	// (0x0004c650) list_medium_line_x2_t3_g2_t2

0x02a9,	// (0x0004c662) list_medium_line_x2_t3_g2_t3_ParamLimits

0x02a9,	// (0x0004c662) list_medium_line_x2_t3_g2_t3

0x0002,

0xf250,	// (0x0005b609) list_medium_line_x2_t3_g2_t_ParamLimits

0xf250,	// (0x0005b609) list_medium_line_x2_t3_g2_t

0x021f,	// (0x0004c5d8) list_medium_line_x2_t4_g4_g1_ParamLimits

0x021f,	// (0x0004c5d8) list_medium_line_x2_t4_g4_g1

0x02c6,	// (0x0004c67f) list_medium_line_x2_t4_g4_g2_ParamLimits

0x02c6,	// (0x0004c67f) list_medium_line_x2_t4_g4_g2

0x022b,	// (0x0004c5e4) list_medium_line_x2_t4_g4_g3_ParamLimits

0x022b,	// (0x0004c5e4) list_medium_line_x2_t4_g4_g3

0x02d2,	// (0x0004c68b) list_medium_line_x2_t4_g4_g4_ParamLimits

0x02d2,	// (0x0004c68b) list_medium_line_x2_t4_g4_g4

0x0003,

0xf257,	// (0x0005b610) list_medium_line_x2_t4_g4_g_ParamLimits

0xf257,	// (0x0005b610) list_medium_line_x2_t4_g4_g

0x02de,	// (0x0004c697) list_medium_line_x2_t4_g4_t1_ParamLimits

0x02de,	// (0x0004c697) list_medium_line_x2_t4_g4_t1

0x02f8,	// (0x0004c6b1) list_medium_line_x2_t4_g4_t2_ParamLimits

0x02f8,	// (0x0004c6b1) list_medium_line_x2_t4_g4_t2

0x030e,	// (0x0004c6c7) list_medium_line_x2_t4_g4_t3_ParamLimits

0x030e,	// (0x0004c6c7) list_medium_line_x2_t4_g4_t3

0x0323,	// (0x0004c6dc) list_medium_line_x2_t4_g4_t4_ParamLimits

0x0323,	// (0x0004c6dc) list_medium_line_x2_t4_g4_t4

0x0003,

0xf260,	// (0x0005b619) list_medium_line_x2_t4_g4_t_ParamLimits

0xf260,	// (0x0005b619) list_medium_line_x2_t4_g4_t

0x021f,	// (0x0004c5d8) list_medium_line_x2_t2_g4_g1_ParamLimits

0x021f,	// (0x0004c5d8) list_medium_line_x2_t2_g4_g1

0x02c6,	// (0x0004c67f) list_medium_line_x2_t2_g4_g2_ParamLimits

0x02c6,	// (0x0004c67f) list_medium_line_x2_t2_g4_g2

0x022b,	// (0x0004c5e4) list_medium_line_x2_t2_g4_g3_ParamLimits

0x022b,	// (0x0004c5e4) list_medium_line_x2_t2_g4_g3

0x0237,	// (0x0004c5f0) list_medium_line_x2_t2_g4_g4_ParamLimits

0x0237,	// (0x0004c5f0) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c7,	// (0x0005b680) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c7,	// (0x0005b680) list_medium_line_x2_t2_g4_g

0x0335,	// (0x0004c6ee) list_medium_line_x2_t2_g4_t1_ParamLimits

0x0335,	// (0x0004c6ee) list_medium_line_x2_t2_g4_t1

0x026c,	// (0x0004c625) list_medium_line_x2_t2_g4_t2_ParamLimits

0x026c,	// (0x0004c625) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2d0,	// (0x0005b689) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2d0,	// (0x0005b689) list_medium_line_x2_t2_g4_t

0x021f,	// (0x0004c5d8) list_medium_line_x2_t2_g3_g1_ParamLimits

0x021f,	// (0x0004c5d8) list_medium_line_x2_t2_g3_g1

0x022b,	// (0x0004c5e4) list_medium_line_x2_t2_g3_g2_ParamLimits

0x022b,	// (0x0004c5e4) list_medium_line_x2_t2_g3_g2

0x0237,	// (0x0004c5f0) list_medium_line_x2_t2_g3_g3_ParamLimits

0x0237,	// (0x0004c5f0) list_medium_line_x2_t2_g3_g3

0x0002,

0xf23d,	// (0x0005b5f6) list_medium_line_x2_t2_g3_g_ParamLimits

0xf23d,	// (0x0005b5f6) list_medium_line_x2_t2_g3_g

0x034a,	// (0x0004c703) list_medium_line_x2_t2_g3_t1_ParamLimits

0x034a,	// (0x0004c703) list_medium_line_x2_t2_g3_t1

0x026c,	// (0x0004c625) list_medium_line_x2_t2_g3_t2_ParamLimits

0x026c,	// (0x0004c625) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d5,	// (0x0005b68e) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d5,	// (0x0005b68e) list_medium_line_x2_t2_g3_t

0x32dc,	// (0x0004f695) main_sp_fs_list_pane_ParamLimits

0x32dc,	// (0x0004f695) main_sp_fs_list_pane

0xcfae,	// (0x00059367) sp_fs_scroll_pane_ParamLimits

0xcfae,	// (0x00059367) sp_fs_scroll_pane

0x035f,	// (0x0004c718) list_medium_line_x2_t3_t1

0x036f,	// (0x0004c728) list_medium_line_x2_t3_t2

0x037d,	// (0x0004c736) list_medium_line_x2_t3_t3

0x0002,

0xf320,	// (0x0005b6d9) list_medium_line_x2_t3_t

0x038b,	// (0x0004c744) list_medium_line_x3_t4_t1

0x039b,	// (0x0004c754) list_medium_line_x3_t4_t2

0x03a9,	// (0x0004c762) list_medium_line_x3_t4_t3

0x037d,	// (0x0004c736) list_medium_line_x3_t4_t4

0x0003,

0xf327,	// (0x0005b6e0) list_medium_line_x3_t4_t

0x03b7,	// (0x0004c770) list_medium_line_x4_t5_t1

0x03c7,	// (0x0004c780) list_medium_line_x4_t5_t2

0x03a9,	// (0x0004c762) list_medium_line_x4_t5_t3

0x03d5,	// (0x0004c78e) list_medium_line_x4_t5_t4

0x037d,	// (0x0004c736) list_medium_line_x4_t5_t5

0x0004,

0xf330,	// (0x0005b6e9) list_medium_line_x4_t5_t

0x021f,	// (0x0004c5d8) list_medium_line_t4_g4_g1_ParamLimits

0x021f,	// (0x0004c5d8) list_medium_line_t4_g4_g1

0x03e3,	// (0x0004c79c) list_medium_line_t4_g4_g2_ParamLimits

0x03e3,	// (0x0004c79c) list_medium_line_t4_g4_g2

0x03ef,	// (0x0004c7a8) list_medium_line_t4_g4_g3_ParamLimits

0x03ef,	// (0x0004c7a8) list_medium_line_t4_g4_g3

0x0237,	// (0x0004c5f0) list_medium_line_t4_g4_g4_ParamLimits

0x0237,	// (0x0004c5f0) list_medium_line_t4_g4_g4

0x0003,

0xf33b,	// (0x0005b6f4) list_medium_line_t4_g4_g_ParamLimits

0xf33b,	// (0x0005b6f4) list_medium_line_t4_g4_g

0x03fb,	// (0x0004c7b4) list_medium_line_t4_g4_t1_ParamLimits

0x03fb,	// (0x0004c7b4) list_medium_line_t4_g4_t1

0x0410,	// (0x0004c7c9) list_medium_line_t4_g4_t2_ParamLimits

0x0410,	// (0x0004c7c9) list_medium_line_t4_g4_t2

0x0425,	// (0x0004c7de) list_medium_line_t4_g4_t3_ParamLimits

0x0425,	// (0x0004c7de) list_medium_line_t4_g4_t3

0x026c,	// (0x0004c625) list_medium_line_t4_g4_t4_ParamLimits

0x026c,	// (0x0004c625) list_medium_line_t4_g4_t4

0x0003,

0xf344,	// (0x0005b6fd) list_medium_line_t4_g4_t_ParamLimits

0xf344,	// (0x0005b6fd) list_medium_line_t4_g4_t

0x339b,	// (0x0004f754) chi_dic_find_pane_g1

0x43aa,	// (0x00050763) main_tport_pane

0x060f,	// (0x0004c9c8) list_medium_line_plain_t1

0x061d,	// (0x0004c9d6) list_medium_line_t2_g2_g1_ParamLimits

0x061d,	// (0x0004c9d6) list_medium_line_t2_g2_g1

0x0629,	// (0x0004c9e2) list_medium_line_t2_g2_g2_ParamLimits

0x0629,	// (0x0004c9e2) list_medium_line_t2_g2_g2

0x0001,

0xfa00,	// (0x0005bdb9) list_medium_line_t2_g2_g_ParamLimits

0xfa00,	// (0x0005bdb9) list_medium_line_t2_g2_g

0x0635,	// (0x0004c9ee) list_medium_line_t2_g2_t1_ParamLimits

0x0635,	// (0x0004c9ee) list_medium_line_t2_g2_t1

0x064c,	// (0x0004ca05) list_medium_line_t2_g2_t2_ParamLimits

0x064c,	// (0x0004ca05) list_medium_line_t2_g2_t2

0x0001,

0xfa05,	// (0x0005bdbe) list_medium_line_t2_g2_t_ParamLimits

0xfa05,	// (0x0005bdbe) list_medium_line_t2_g2_t

0x7859,	// (0x00053c12) aid_sp_fs_list_icon_a_sm

0x7861,	// (0x00053c1a) aid_sp_fs_list_icon_d

0x7869,	// (0x00053c22) aid_sp_fs_text_primary

0x7872,	// (0x00053c2b) aid_sp_fs_text_secondary

0x787b,	// (0x00053c34) list_medium_line

0x787b,	// (0x00053c34) list_medium_line_g2

0x787b,	// (0x00053c34) list_medium_line_g3

0x787b,	// (0x00053c34) list_medium_line_plain

0x787b,	// (0x00053c34) list_medium_line_plain_t2

0x787b,	// (0x00053c34) list_medium_line_plain_t3

0x787b,	// (0x00053c34) list_medium_line_right_icon

0x787b,	// (0x00053c34) list_medium_line_right_iconx2

0x787b,	// (0x00053c34) list_medium_line_t2

0x787b,	// (0x00053c34) list_medium_line_t2_g2

0x787b,	// (0x00053c34) list_medium_line_t2_g3

0x787b,	// (0x00053c34) list_medium_line_t2_right_icon

0x787b,	// (0x00053c34) list_medium_line_t2_right_iconx2

0x787b,	// (0x00053c34) list_medium_line_t3

0x787b,	// (0x00053c34) list_medium_line_t3_g2

0x787b,	// (0x00053c34) list_medium_line_t3_g3

0x787b,	// (0x00053c34) list_medium_line_t3_right_iconx2

0x7884,	// (0x00053c3d) list_medium_line_t4_g4

0x788d,	// (0x00053c46) list_medium_line_x2

0x788d,	// (0x00053c46) list_medium_line_x2_t2_g2

0x788d,	// (0x00053c46) list_medium_line_x2_t2_g3

0x788d,	// (0x00053c46) list_medium_line_x2_t2_g4

0x788d,	// (0x00053c46) list_medium_line_x2_t3

0x788d,	// (0x00053c46) list_medium_line_x2_t3_g2

0x788d,	// (0x00053c46) list_medium_line_x2_t3_g3

0x788d,	// (0x00053c46) list_medium_line_x2_t3_g4

0x788d,	// (0x00053c46) list_medium_line_x2_t4_g2

0x788d,	// (0x00053c46) list_medium_line_x2_t4_g4

0x7896,	// (0x00053c4f) list_medium_line_x3

0x7896,	// (0x00053c4f) list_medium_line_x3_t4

0x7896,	// (0x00053c4f) list_medium_line_x3_t4_g4

0x7884,	// (0x00053c3d) list_medium_line_x4_t4

0x7884,	// (0x00053c3d) list_medium_line_x4_t4_g7

0x7884,	// (0x00053c3d) list_medium_line_x4_t5

0x07d5,	// (0x0004cb8e) list_single_fs_dyc_pane_ParamLimits

0x07d5,	// (0x0004cb8e) list_single_fs_dyc_pane

0x021f,	// (0x0004c5d8) list_medium_line_x4_t4_g7_g1_ParamLimits

0x021f,	// (0x0004c5d8) list_medium_line_x4_t4_g7_g1

0x0815,	// (0x0004cbce) list_medium_line_x4_t4_g7_g2_ParamLimits

0x0815,	// (0x0004cbce) list_medium_line_x4_t4_g7_g2

0x0821,	// (0x0004cbda) list_medium_line_x4_t4_g7_g3_ParamLimits

0x0821,	// (0x0004cbda) list_medium_line_x4_t4_g7_g3

0x0830,	// (0x0004cbe9) list_medium_line_x4_t4_g7_g4_ParamLimits

0x0830,	// (0x0004cbe9) list_medium_line_x4_t4_g7_g4

0x083c,	// (0x0004cbf5) list_medium_line_x4_t4_g7_g5_ParamLimits

0x083c,	// (0x0004cbf5) list_medium_line_x4_t4_g7_g5

0x084b,	// (0x0004cc04) list_medium_line_x4_t4_g7_g6_ParamLimits

0x084b,	// (0x0004cc04) list_medium_line_x4_t4_g7_g6

0x085a,	// (0x0004cc13) list_medium_line_x4_t4_g7_g7_ParamLimits

0x085a,	// (0x0004cc13) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbd0,	// (0x0005bf89) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbd0,	// (0x0005bf89) list_medium_line_x4_t4_g7_g

0x0866,	// (0x0004cc1f) list_medium_line_x4_t4_g7_t1_ParamLimits

0x0866,	// (0x0004cc1f) list_medium_line_x4_t4_g7_t1

0x087b,	// (0x0004cc34) list_medium_line_x4_t4_g7_t2_ParamLimits

0x087b,	// (0x0004cc34) list_medium_line_x4_t4_g7_t2

0x0890,	// (0x0004cc49) list_medium_line_x4_t4_g7_t3_ParamLimits

0x0890,	// (0x0004cc49) list_medium_line_x4_t4_g7_t3

0x08a5,	// (0x0004cc5e) list_medium_line_x4_t4_g7_t4_ParamLimits

0x08a5,	// (0x0004cc5e) list_medium_line_x4_t4_g7_t4

0x08b7,	// (0x0004cc70) list_medium_line_x4_t4_g7_t5_ParamLimits

0x08b7,	// (0x0004cc70) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbdf,	// (0x0005bf98) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbdf,	// (0x0005bf98) list_medium_line_x4_t4_g7_t

0x08c9,	// (0x0004cc82) list_single_dyc_row_pane_ParamLimits

0x08c9,	// (0x0004cc82) list_single_dyc_row_pane

0x85cd,	// (0x00054986) call5_gesture_pane_ParamLimits

0x85cd,	// (0x00054986) call5_gesture_pane

0x8623,	// (0x000549dc) call5_windows_pane_ParamLimits

0x8623,	// (0x000549dc) call5_windows_pane

0x86c9,	// (0x00054a82) call5_swipe_1_pane_cp_ParamLimits

0x86c9,	// (0x00054a82) call5_swipe_1_pane_cp

0x86d5,	// (0x00054a8e) call5_swipe_2_pane_cp_ParamLimits

0x86d5,	// (0x00054a8e) call5_swipe_2_pane_cp

0xba44,	// (0x00057dfd) call5_image_pane_cp

0x86e1,	// (0x00054a9a) popup_call5_audio_first_window_cp_ParamLimits

0x86e1,	// (0x00054a9a) popup_call5_audio_first_window_cp

0xec6b,	// (0x0005b024) call5_swipe_1_pane_g1_cp_ParamLimits

0xec6b,	// (0x0005b024) call5_swipe_1_pane_g1_cp

0xecab,	// (0x0005b064) call5_swipe_1_pane_g2_cp

0xec84,	// (0x0005b03d) call5_swipe_1_pane_t1_cp_ParamLimits

0xec84,	// (0x0005b03d) call5_swipe_1_pane_t1_cp

0xec6b,	// (0x0005b024) call5_swipe_2_pane_g1_cp_ParamLimits

0xec6b,	// (0x0005b024) call5_swipe_2_pane_g1_cp

0xecb3,	// (0x0005b06c) call5_swipe_2_pane_g2_cp

0xecbb,	// (0x0005b074) call5_swipe_2_pane_t1_cp_ParamLimits

0xecbb,	// (0x0005b074) call5_swipe_2_pane_t1_cp

0xa939,	// (0x00056cf2) main_sp_fs_email_pane

0xecd0,	// (0x0005b089) main_sp_fs_listscroll_pane_te

0x86ef,	// (0x00054aa8) popup_sp_fs_action_menu_pane_ParamLimits

0x86ef,	// (0x00054aa8) popup_sp_fs_action_menu_pane

0xd255,	// (0x0005960e) bg_sp_fs_ctrlbar_pane_g1

0xd834,	// (0x00059bed) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xd846,	// (0x00059bff) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xd83d,	// (0x00059bf6) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xd255,	// (0x0005960e) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfccd,	// (0x0005c086) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xd03a,	// (0x000593f3) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xd03a,	// (0x000593f3) bg_sp_fs_ctrlbar_ddmenu_pane

0xecd9,	// (0x0005b092) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xecd9,	// (0x0005b092) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xece5,	// (0x0005b09e) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xece5,	// (0x0005b09e) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcd6,	// (0x0005c08f) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcd6,	// (0x0005c08f) main_sp_fs_ctrlbar_ddmenu_pane_g

0xecf1,	// (0x0005b0aa) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xecf1,	// (0x0005b0aa) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x0960,	// (0x0004cd19) list_medium_line_t2_right_icon_g1

0x0968,	// (0x0004cd21) list_medium_line_t2_right_icon_t1

0x0978,	// (0x0004cd31) list_medium_line_t2_right_icon_t2

0x0001,

0xfcdb,	// (0x0005c094) list_medium_line_t2_right_icon_t

0xce41,	// (0x000591fa) bg_sp_fs_ctrlbar_pane_ParamLimits

0xce41,	// (0x000591fa) bg_sp_fs_ctrlbar_pane

0x877b,	// (0x00054b34) main_sp_fs_ctrlbar_button_pane_cp01

0x8785,	// (0x00054b3e) main_sp_fs_ctrlbar_ddmenu_pane

0xed43,	// (0x0005b0fc) main_sp_fs_ctrlbar_pane_g1

0xed4f,	// (0x0005b108) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfce0,	// (0x0005c099) main_sp_fs_ctrlbar_pane_g

0xed5b,	// (0x0005b114) main_sp_fs_ctrlbar_pane_t1

0x878f,	// (0x00054b48) main_sp_fs_ctrlbar_pane

0x87b3,	// (0x00054b6c) main_sp_fs_listscroll_pane_te_cp01

0x098a,	// (0x0004cd43) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x098a,	// (0x0004cd43) popup_sp_fs_action_menu_pane_cp01

0xa939,	// (0x00056cf2) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xa939,	// (0x00056cf2) bg_sp_fs_highlight_list_pane_cp01

0x87d3,	// (0x00054b8c) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x87d3,	// (0x00054b8c) sp_fs_action_menu_list_gene_pane_g1

0xed8b,	// (0x0005b144) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xed8b,	// (0x0005b144) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcea,	// (0x0005c0a3) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcea,	// (0x0005c0a3) sp_fs_action_menu_list_gene_pane_g

0x87e2,	// (0x00054b9b) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x87e2,	// (0x00054b9b) sp_fs_action_menu_list_gene_pane_t1

0x87fa,	// (0x00054bb3) sp_fs_action_menu_list_gene_pane_ParamLimits

0x87fa,	// (0x00054bb3) sp_fs_action_menu_list_gene_pane

0xed98,	// (0x0005b151) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xed98,	// (0x0005b151) popup_sp_fs_action_menu_bg_pane

0xa679,	// (0x00056a32) sp_fs_action_menu_list_pane_ParamLimits

0xa679,	// (0x00056a32) sp_fs_action_menu_list_pane

0x09ba,	// (0x0004cd73) sp_fs_scroll_pane_cp01_ParamLimits

0x09ba,	// (0x0004cd73) sp_fs_scroll_pane_cp01

0x09e0,	// (0x0004cd99) list_medium_line_plain_t2_t1

0x09f0,	// (0x0004cda9) list_medium_line_plain_t2_t2

0x0001,

0xfcef,	// (0x0005c0a8) list_medium_line_plain_t2_t

0x0a00,	// (0x0004cdb9) list_medium_line_plain_t3_t1

0x0a10,	// (0x0004cdc9) list_medium_line_plain_t3_t2

0x0a1e,	// (0x0004cdd7) list_medium_line_plain_t3_t3

0x0002,

0xfcf4,	// (0x0005c0ad) list_medium_line_plain_t3_t

0x021f,	// (0x0004c5d8) list_medium_line_x2_t2_g2_g1_ParamLimits

0x021f,	// (0x0004c5d8) list_medium_line_x2_t2_g2_g1

0x0237,	// (0x0004c5f0) list_medium_line_x2_t2_g2_g2_ParamLimits

0x0237,	// (0x0004c5f0) list_medium_line_x2_t2_g2_g2

0x0001,

0xf24b,	// (0x0005b604) list_medium_line_x2_t2_g2_g_ParamLimits

0xf24b,	// (0x0005b604) list_medium_line_x2_t2_g2_g

0x03fb,	// (0x0004c7b4) list_medium_line_x2_t2_g2_t1_ParamLimits

0x03fb,	// (0x0004c7b4) list_medium_line_x2_t2_g2_t1

0x026c,	// (0x0004c625) list_medium_line_x2_t2_g2_t2_ParamLimits

0x026c,	// (0x0004c625) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcfb,	// (0x0005c0b4) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcfb,	// (0x0005c0b4) list_medium_line_x2_t2_g2_t

0x021f,	// (0x0004c5d8) list_medium_line_x2_t4_g2_g1_ParamLimits

0x021f,	// (0x0004c5d8) list_medium_line_x2_t4_g2_g1

0x0a2c,	// (0x0004cde5) list_medium_line_x2_t4_g2_g2_ParamLimits

0x0a2c,	// (0x0004cde5) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd00,	// (0x0005c0b9) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd00,	// (0x0005c0b9) list_medium_line_x2_t4_g2_g

0x0a3d,	// (0x0004cdf6) list_medium_line_x2_t4_g2_t1_ParamLimits

0x0a3d,	// (0x0004cdf6) list_medium_line_x2_t4_g2_t1

0x0a54,	// (0x0004ce0d) list_medium_line_x2_t4_g2_t2_ParamLimits

0x0a54,	// (0x0004ce0d) list_medium_line_x2_t4_g2_t2

0x0a69,	// (0x0004ce22) list_medium_line_x2_t4_g2_t3_ParamLimits

0x0a69,	// (0x0004ce22) list_medium_line_x2_t4_g2_t3

0x026c,	// (0x0004c625) list_medium_line_x2_t4_g2_t4_ParamLimits

0x026c,	// (0x0004c625) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd05,	// (0x0005c0be) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd05,	// (0x0005c0be) list_medium_line_x2_t4_g2_t

0x0a7b,	// (0x0004ce34) list_medium_line_t3_right_iconx2_g1

0x0960,	// (0x0004cd19) list_medium_line_t3_right_iconx2_g2

0x0a83,	// (0x0004ce3c) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd0e,	// (0x0005c0c7) list_medium_line_t3_right_iconx2_g

0x0a8d,	// (0x0004ce46) list_medium_line_t3_right_iconx2_t1

0x0a9d,	// (0x0004ce56) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd15,	// (0x0005c0ce) list_medium_line_t3_right_iconx2_t

0x021f,	// (0x0004c5d8) list_medium_line_x3_t4_g4_g1_ParamLimits

0x021f,	// (0x0004c5d8) list_medium_line_x3_t4_g4_g1

0x022b,	// (0x0004c5e4) list_medium_line_x3_t4_g4_g2_ParamLimits

0x022b,	// (0x0004c5e4) list_medium_line_x3_t4_g4_g2

0x03e3,	// (0x0004c79c) list_medium_line_x3_t4_g4_g3_ParamLimits

0x03e3,	// (0x0004c79c) list_medium_line_x3_t4_g4_g3

0x0aab,	// (0x0004ce64) list_medium_line_x3_t4_g4_g4_ParamLimits

0x0aab,	// (0x0004ce64) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd1a,	// (0x0005c0d3) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd1a,	// (0x0005c0d3) list_medium_line_x3_t4_g4_g

0x0ab7,	// (0x0004ce70) list_medium_line_x3_t4_g4_t1_ParamLimits

0x0ab7,	// (0x0004ce70) list_medium_line_x3_t4_g4_t1

0x0ace,	// (0x0004ce87) list_medium_line_x3_t4_g4_t2_ParamLimits

0x0ace,	// (0x0004ce87) list_medium_line_x3_t4_g4_t2

0x0410,	// (0x0004c7c9) list_medium_line_x3_t4_g4_t3_ParamLimits

0x0410,	// (0x0004c7c9) list_medium_line_x3_t4_g4_t3

0x0ae9,	// (0x0004cea2) list_medium_line_x3_t4_g4_t4_ParamLimits

0x0ae9,	// (0x0004cea2) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd23,	// (0x0005c0dc) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd23,	// (0x0005c0dc) list_medium_line_x3_t4_g4_t

0x0b06,	// (0x0004cebf) list_single_dyc_row_text_pane_t1_ParamLimits

0x0b06,	// (0x0004cebf) list_single_dyc_row_text_pane_t1

0x0b4f,	// (0x0004cf08) list_single_dyc_row_text_pane_t2_ParamLimits

0x0b4f,	// (0x0004cf08) list_single_dyc_row_text_pane_t2

0xa699,	// (0x00056a52) list_single_dyc_row_text_pane_t3_ParamLimits

0xa699,	// (0x00056a52) list_single_dyc_row_text_pane_t3

0x0005,

0xfd2c,	// (0x0005c0e5) list_single_dyc_row_text_pane_t_ParamLimits

0xfd2c,	// (0x0005c0e5) list_single_dyc_row_text_pane_t

0xa6bd,	// (0x00056a76) list_single_dyc_row_pane_g1_ParamLimits

0xa6bd,	// (0x00056a76) list_single_dyc_row_pane_g1

0xa6c9,	// (0x00056a82) list_single_dyc_row_pane_g2_ParamLimits

0xa6c9,	// (0x00056a82) list_single_dyc_row_pane_g2

0xa6d5,	// (0x00056a8e) list_single_dyc_row_pane_g3_ParamLimits

0xa6d5,	// (0x00056a8e) list_single_dyc_row_pane_g3

0xa6e1,	// (0x00056a9a) list_single_dyc_row_pane_g4_ParamLimits

0xa6e1,	// (0x00056a9a) list_single_dyc_row_pane_g4

0x0003,

0xfd39,	// (0x0005c0f2) list_single_dyc_row_pane_g_ParamLimits

0xfd39,	// (0x0005c0f2) list_single_dyc_row_pane_g

0xa6ed,	// (0x00056aa6) list_single_dyc_row_text_pane_ParamLimits

0xa6ed,	// (0x00056aa6) list_single_dyc_row_text_pane

0x9ca9,	// (0x00056062) bg_sp_fs_scroll_pane

0xeda6,	// (0x0005b15f) thumb_sp_fs_scroll_pane

0x061d,	// (0x0004c9d6) list_medium_line_g1_ParamLimits

0x061d,	// (0x0004c9d6) list_medium_line_g1

0x0c84,	// (0x0004d03d) list_medium_line_t1_ParamLimits

0x0c84,	// (0x0004d03d) list_medium_line_t1

0x021f,	// (0x0004c5d8) list_medium_line_x2_g1_ParamLimits

0x021f,	// (0x0004c5d8) list_medium_line_x2_g1

0x022b,	// (0x0004c5e4) list_medium_line_x2_g2_ParamLimits

0x022b,	// (0x0004c5e4) list_medium_line_x2_g2

0x0001,

0xfd42,	// (0x0005c0fb) list_medium_line_x2_g_ParamLimits

0xfd42,	// (0x0005c0fb) list_medium_line_x2_g

0xa70c,	// (0x00056ac5) list_medium_line_x2_t1_ParamLimits

0xa70c,	// (0x00056ac5) list_medium_line_x2_t1

0x021f,	// (0x0004c5d8) list_medium_line_x3_g1_ParamLimits

0x021f,	// (0x0004c5d8) list_medium_line_x3_g1

0x022b,	// (0x0004c5e4) list_medium_line_x3_g2_ParamLimits

0x022b,	// (0x0004c5e4) list_medium_line_x3_g2

0x0001,

0xfd42,	// (0x0005c0fb) list_medium_line_x3_g_ParamLimits

0xfd42,	// (0x0005c0fb) list_medium_line_x3_g

0xa70c,	// (0x00056ac5) list_medium_line_x3_t1_ParamLimits

0xa70c,	// (0x00056ac5) list_medium_line_x3_t1

0xedaf,	// (0x0005b168) thumb_sp_fs_scroll_pane_g1

0xedb8,	// (0x0005b171) thumb_sp_fs_scroll_pane_g2

0xedc1,	// (0x0005b17a) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x0005c100) thumb_sp_fs_scroll_pane_g

0xedaf,	// (0x0005b168) bg_sp_fs_scroll_pane_g1

0xedb8,	// (0x0005b171) bg_sp_fs_scroll_pane_g2

0xedc1,	// (0x0005b17a) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x0005c100) bg_sp_fs_scroll_pane_g

0x021f,	// (0x0004c5d8) list_medium_line_x2_t3_g4_g1_ParamLimits

0x021f,	// (0x0004c5d8) list_medium_line_x2_t3_g4_g1

0x02c6,	// (0x0004c67f) list_medium_line_x2_t3_g4_g2_ParamLimits

0x02c6,	// (0x0004c67f) list_medium_line_x2_t3_g4_g2

0x022b,	// (0x0004c5e4) list_medium_line_x2_t3_g4_g3_ParamLimits

0x022b,	// (0x0004c5e4) list_medium_line_x2_t3_g4_g3

0x0237,	// (0x0004c5f0) list_medium_line_x2_t3_g4_g4_ParamLimits

0x0237,	// (0x0004c5f0) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c7,	// (0x0005b680) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c7,	// (0x0005b680) list_medium_line_x2_t3_g4_g

0x0c99,	// (0x0004d052) list_medium_line_x2_t3_g4_t1_ParamLimits

0x0c99,	// (0x0004d052) list_medium_line_x2_t3_g4_t1

0x0cb3,	// (0x0004d06c) list_medium_line_x2_t3_g4_t2_ParamLimits

0x0cb3,	// (0x0004d06c) list_medium_line_x2_t3_g4_t2

0x026c,	// (0x0004c625) list_medium_line_x2_t3_g4_t3_ParamLimits

0x026c,	// (0x0004c625) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd4e,	// (0x0005c107) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd4e,	// (0x0005c107) list_medium_line_x2_t3_g4_t

0x061d,	// (0x0004c9d6) list_medium_line_g2_g1_ParamLimits

0x061d,	// (0x0004c9d6) list_medium_line_g2_g1

0x0629,	// (0x0004c9e2) list_medium_line_g2_g2_ParamLimits

0x0629,	// (0x0004c9e2) list_medium_line_g2_g2

0x0001,

0xfa00,	// (0x0005bdb9) list_medium_line_g2_g_ParamLimits

0xfa00,	// (0x0005bdb9) list_medium_line_g2_g

0x0ccd,	// (0x0004d086) list_medium_line_g2_t1_ParamLimits

0x0ccd,	// (0x0004d086) list_medium_line_g2_t1

0x061d,	// (0x0004c9d6) list_medium_line_t3_g2_g1_ParamLimits

0x061d,	// (0x0004c9d6) list_medium_line_t3_g2_g1

0x0629,	// (0x0004c9e2) list_medium_line_t3_g2_g2_ParamLimits

0x0629,	// (0x0004c9e2) list_medium_line_t3_g2_g2

0x0001,

0xfa00,	// (0x0005bdb9) list_medium_line_t3_g2_g_ParamLimits

0xfa00,	// (0x0005bdb9) list_medium_line_t3_g2_g

0x0ce2,	// (0x0004d09b) list_medium_line_t3_g2_t1_ParamLimits

0x0ce2,	// (0x0004d09b) list_medium_line_t3_g2_t1

0x0cf9,	// (0x0004d0b2) list_medium_line_t3_g2_t2_ParamLimits

0x0cf9,	// (0x0004d0b2) list_medium_line_t3_g2_t2

0x0d0e,	// (0x0004d0c7) list_medium_line_t3_g2_t3_ParamLimits

0x0d0e,	// (0x0004d0c7) list_medium_line_t3_g2_t3

0x0002,

0xfd55,	// (0x0005c10e) list_medium_line_t3_g2_t_ParamLimits

0xfd55,	// (0x0005c10e) list_medium_line_t3_g2_t

0x0960,	// (0x0004cd19) list_medium_line_right_icon_g1

0x0d27,	// (0x0004d0e0) list_medium_line_right_icon_t1

0x061d,	// (0x0004c9d6) list_medium_line_t2_g1_ParamLimits

0x061d,	// (0x0004c9d6) list_medium_line_t2_g1

0x0d35,	// (0x0004d0ee) list_medium_line_t2_t1_ParamLimits

0x0d35,	// (0x0004d0ee) list_medium_line_t2_t1

0x0d4f,	// (0x0004d108) list_medium_line_t2_t2_ParamLimits

0x0d4f,	// (0x0004d108) list_medium_line_t2_t2

0x0001,

0xfd5c,	// (0x0005c115) list_medium_line_t2_t_ParamLimits

0xfd5c,	// (0x0005c115) list_medium_line_t2_t

0x061d,	// (0x0004c9d6) list_medium_line_t3_g1_ParamLimits

0x061d,	// (0x0004c9d6) list_medium_line_t3_g1

0x0d68,	// (0x0004d121) list_medium_line_t3_t1_ParamLimits

0x0d68,	// (0x0004d121) list_medium_line_t3_t1

0x0d7f,	// (0x0004d138) list_medium_line_t3_t2_ParamLimits

0x0d7f,	// (0x0004d138) list_medium_line_t3_t2

0x0d94,	// (0x0004d14d) list_medium_line_t3_t3_ParamLimits

0x0d94,	// (0x0004d14d) list_medium_line_t3_t3

0x0002,

0xfd61,	// (0x0005c11a) list_medium_line_t3_t_ParamLimits

0xfd61,	// (0x0005c11a) list_medium_line_t3_t

0x061d,	// (0x0004c9d6) list_medium_line_g3_g1_ParamLimits

0x061d,	// (0x0004c9d6) list_medium_line_g3_g1

0x0da6,	// (0x0004d15f) list_medium_line_g3_g2_ParamLimits

0x0da6,	// (0x0004d15f) list_medium_line_g3_g2

0x0629,	// (0x0004c9e2) list_medium_line_g3_g3_ParamLimits

0x0629,	// (0x0004c9e2) list_medium_line_g3_g3

0x0002,

0xfd68,	// (0x0005c121) list_medium_line_g3_g_ParamLimits

0xfd68,	// (0x0005c121) list_medium_line_g3_g

0x0db2,	// (0x0004d16b) list_medium_line_g3_t1_ParamLimits

0x0db2,	// (0x0004d16b) list_medium_line_g3_t1

0x061d,	// (0x0004c9d6) list_medium_line_t2_g3_g1_ParamLimits

0x061d,	// (0x0004c9d6) list_medium_line_t2_g3_g1

0x0da6,	// (0x0004d15f) list_medium_line_t2_g3_g2_ParamLimits

0x0da6,	// (0x0004d15f) list_medium_line_t2_g3_g2

0x0629,	// (0x0004c9e2) list_medium_line_t2_g3_g3_ParamLimits

0x0629,	// (0x0004c9e2) list_medium_line_t2_g3_g3

0x0002,

0xfd68,	// (0x0005c121) list_medium_line_t2_g3_g_ParamLimits

0xfd68,	// (0x0005c121) list_medium_line_t2_g3_g

0x0dc7,	// (0x0004d180) list_medium_line_t2_g3_t1_ParamLimits

0x0dc7,	// (0x0004d180) list_medium_line_t2_g3_t1

0x0de1,	// (0x0004d19a) list_medium_line_t2_g3_t2_ParamLimits

0x0de1,	// (0x0004d19a) list_medium_line_t2_g3_t2

0x0001,

0xfd6f,	// (0x0005c128) list_medium_line_t2_g3_t_ParamLimits

0xfd6f,	// (0x0005c128) list_medium_line_t2_g3_t

0x061d,	// (0x0004c9d6) list_medium_line_t3_g3_g1_ParamLimits

0x061d,	// (0x0004c9d6) list_medium_line_t3_g3_g1

0x0da6,	// (0x0004d15f) list_medium_line_t3_g3_g2_ParamLimits

0x0da6,	// (0x0004d15f) list_medium_line_t3_g3_g2

0x0629,	// (0x0004c9e2) list_medium_line_t3_g3_g3_ParamLimits

0x0629,	// (0x0004c9e2) list_medium_line_t3_g3_g3

0x0002,

0xfd68,	// (0x0005c121) list_medium_line_t3_g3_g_ParamLimits

0xfd68,	// (0x0005c121) list_medium_line_t3_g3_g

0x0dfc,	// (0x0004d1b5) list_medium_line_t3_g3_t1_ParamLimits

0x0dfc,	// (0x0004d1b5) list_medium_line_t3_g3_t1

0x0e10,	// (0x0004d1c9) list_medium_line_t3_g3_t2_ParamLimits

0x0e10,	// (0x0004d1c9) list_medium_line_t3_g3_t2

0x0e22,	// (0x0004d1db) list_medium_line_t3_g3_t3_ParamLimits

0x0e22,	// (0x0004d1db) list_medium_line_t3_g3_t3

0x0002,

0xfd74,	// (0x0005c12d) list_medium_line_t3_g3_t_ParamLimits

0xfd74,	// (0x0005c12d) list_medium_line_t3_g3_t

0x0a7b,	// (0x0004ce34) list_medium_line_right_iconx2_g1

0x0960,	// (0x0004cd19) list_medium_line_right_iconx2_g2

0x0001,

0xfd7b,	// (0x0005c134) list_medium_line_right_iconx2_g

0x0e36,	// (0x0004d1ef) list_medium_line_right_iconx2_t1

0x0a7b,	// (0x0004ce34) list_medium_line_t2_right_iconx2_g1

0x0960,	// (0x0004cd19) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd7b,	// (0x0005c134) list_medium_line_t2_right_iconx2_g

0x0e44,	// (0x0004d1fd) list_medium_line_t2_right_iconx2_t1

0x0e54,	// (0x0004d20d) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd80,	// (0x0005c139) list_medium_line_t2_right_iconx2_t

0x0e66,	// (0x0004d21f) list_medium_line_x4_t4_t1

0x0e74,	// (0x0004d22d) list_medium_line_x4_t4_t2

0x0e84,	// (0x0004d23d) list_medium_line_x4_t4_t3

0x0e94,	// (0x0004d24d) list_medium_line_x4_t4_t4

0x0003,

0xfd85,	// (0x0005c13e) list_medium_line_x4_t4_t

0x885c,	// (0x00054c15) tport_appsw_pane_ParamLimits

0x885c,	// (0x00054c15) tport_appsw_pane

0x8874,	// (0x00054c2d) tport_contact_pane_ParamLimits

0x8874,	// (0x00054c2d) tport_contact_pane

0x888c,	// (0x00054c45) tport_listscroll_pane_ParamLimits

0x888c,	// (0x00054c45) tport_listscroll_pane

0x88a6,	// (0x00054c5f) cell_tport_appsw_pane_ParamLimits

0x88a6,	// (0x00054c5f) cell_tport_appsw_pane

0xdca1,	// (0x0005a05a) tport_appsw_pane_g1_ParamLimits

0xdca1,	// (0x0005a05a) tport_appsw_pane_g1

0xedca,	// (0x0005b183) tport_contact_pane_g1

0xe764,	// (0x0005ab1d) tport_contact_pane_t1

0xedd3,	// (0x0005b18c) tport_contact_pane_t2

0x0001,

0xfd8e,	// (0x0005c147) tport_contact_pane_t

0xede1,	// (0x0005b19a) list_tport_pane

0xedea,	// (0x0005b1a3) scroll_pane_cp_030

0x88ee,	// (0x00054ca7) cell_tport_appsw_pane_g1

0x88fe,	// (0x00054cb7) cell_tport_appsw_pane_t1

0x890c,	// (0x00054cc5) grid_highlight_pane_cp019

0x8914,	// (0x00054ccd) list_tport_double_graphic_pane_ParamLimits

0x8914,	// (0x00054ccd) list_tport_double_graphic_pane

0xa939,	// (0x00056cf2) list_highlight_pane_cp023_ParamLimits

0xa939,	// (0x00056cf2) list_highlight_pane_cp023

0x8921,	// (0x00054cda) list_tport_double_graphic_pane_g1_ParamLimits

0x8921,	// (0x00054cda) list_tport_double_graphic_pane_g1

0x892e,	// (0x00054ce7) list_tport_double_graphic_pane_t1_ParamLimits

0x892e,	// (0x00054ce7) list_tport_double_graphic_pane_t1

0x8943,	// (0x00054cfc) list_tport_double_graphic_pane_t2_ParamLimits

0x8943,	// (0x00054cfc) list_tport_double_graphic_pane_t2

0x0001,

0xfd9a,	// (0x0005c153) list_tport_double_graphic_pane_t_ParamLimits

0xfd9a,	// (0x0005c153) list_tport_double_graphic_pane_t

0x9ca9,	// (0x00056062) main_cale_note_pane

0x6a8c,	// (0x00052e45) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x6a8c,	// (0x00052e45) cell_vitu2_function_top_wide_pane_cp01

0x82f3,	// (0x000546ac) wait_bar_pane_cp05_ParamLimits

0xa939,	// (0x00056cf2) listscroll_cmail_pane

0xedf3,	// (0x0005b1ac) list_cmail_pane

0xdcf9,	// (0x0005a0b2) list_cmail_body_pane

0x8955,	// (0x00054d0e) list_single_cmail_header_caption_pane

0x896c,	// (0x00054d25) list_single_cmail_header_detail_pane_ParamLimits

0x896c,	// (0x00054d25) list_single_cmail_header_detail_pane

0xee03,	// (0x0005b1bc) list_single_cmail_header_caption_pane_t1

0x0ea4,	// (0x0004d25d) list_single_cmail_header_detail_pane_g1_ParamLimits

0x0ea4,	// (0x0004d25d) list_single_cmail_header_detail_pane_g1

0xa722,	// (0x00056adb) list_single_cmail_header_detail_pane_g2_ParamLimits

0xa722,	// (0x00056adb) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd9f,	// (0x0005c158) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd9f,	// (0x0005c158) list_single_cmail_header_detail_pane_g

0x0ebc,	// (0x0004d275) list_single_cmail_header_detail_pane_t1_ParamLimits

0x0ebc,	// (0x0004d275) list_single_cmail_header_detail_pane_t1

0x0efa,	// (0x0004d2b3) list_single_cmail_header_editor_pane_bg_ParamLimits

0x0efa,	// (0x0004d2b3) list_single_cmail_header_editor_pane_bg

0xe925,	// (0x0005acde) list_cmail_body_pane_g1

0xee1e,	// (0x0005b1d7) list_cmail_body_pane_t1

0xdcc1,	// (0x0005a07a) list_single_cmail_header_editor_pane_bg_g1

0xb229,	// (0x000575e2) list_single_cmail_header_editor_pane_bg_g1_copy1

0xdcd1,	// (0x0005a08a) list_single_cmail_header_editor_pane_bg_g1_copy2

0xdcc9,	// (0x0005a082) list_single_cmail_header_editor_pane_bg_g1_copy3

0xdf00,	// (0x0005a2b9) list_single_cmail_header_editor_pane_bg_g1_copy4

0xdcf1,	// (0x0005a0aa) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xdce1,	// (0x0005a09a) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xdce9,	// (0x0005a0a2) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xb209,	// (0x000575c2) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x89a1,	// (0x00054d5a) calenote_gesture_pane_ParamLimits

0x89a1,	// (0x00054d5a) calenote_gesture_pane

0x89c1,	// (0x00054d7a) calenote_window_pane_ParamLimits

0x89c1,	// (0x00054d7a) calenote_window_pane

0xee2c,	// (0x0005b1e5) popup_note_window_cp01

0x89dd,	// (0x00054d96) calenote_swipe_1_pane_ParamLimits

0x89dd,	// (0x00054d96) calenote_swipe_1_pane

0x86d5,	// (0x00054a8e) calenote_swipe_2_pane_ParamLimits

0x86d5,	// (0x00054a8e) calenote_swipe_2_pane

0xec6b,	// (0x0005b024) calenote_swipe_1_pane_g1_ParamLimits

0xec6b,	// (0x0005b024) calenote_swipe_1_pane_g1

0xec78,	// (0x0005b031) calenote_swipe_1_pane_g2_ParamLimits

0xec78,	// (0x0005b031) calenote_swipe_1_pane_g2

0x0001,

0xfcc3,	// (0x0005c07c) calenote_swipe_1_pane_g_ParamLimits

0xfcc3,	// (0x0005c07c) calenote_swipe_1_pane_g

0xee3e,	// (0x0005b1f7) calenote_swipe_1_pane_t1_ParamLimits

0xee3e,	// (0x0005b1f7) calenote_swipe_1_pane_t1

0xec6b,	// (0x0005b024) calenote_swipe_2_pane_g1_ParamLimits

0xec6b,	// (0x0005b024) calenote_swipe_2_pane_g1

0xee5d,	// (0x0005b216) calenote_swipe_2_pane_g2_ParamLimits

0xee5d,	// (0x0005b216) calenote_swipe_2_pane_g2

0x0001,

0x0055,	// (0x0004c40e) calenote_swipe_2_pane_g_ParamLimits

0x0055,	// (0x0004c40e) calenote_swipe_2_pane_g

0xee69,	// (0x0005b222) calenote_swipe_2_pane_t1_ParamLimits

0xee69,	// (0x0005b222) calenote_swipe_2_pane_t1

0x9ca9,	// (0x00056062) main_mup_navstr_pane

0x5767,	// (0x00051b20) main_mup3_pane_t7_ParamLimits

0x5767,	// (0x00051b20) main_mup3_pane_t7

0xa2dc,	// (0x00056695) main_mp4_pane_g6_ParamLimits

0xa2dc,	// (0x00056695) main_mp4_pane_g6

0xa480,	// (0x00056839) main_image3_pane_t4_ParamLimits

0xa480,	// (0x00056839) main_image3_pane_t4

0x89f2,	// (0x00054dab) popup_navstr_preview_pane_ParamLimits

0x89f2,	// (0x00054dab) popup_navstr_preview_pane

0x8a06,	// (0x00054dbf) scroll_navstr_pane_ParamLimits

0x8a06,	// (0x00054dbf) scroll_navstr_pane

0x9ca9,	// (0x00056062) bg_popup_preview_window_pane_cp04

0xee90,	// (0x0005b249) popup_navstr_preview_pane_t1

0x8a1a,	// (0x00054dd3) scroll_navstr_pane_g1_ParamLimits

0x8a1a,	// (0x00054dd3) scroll_navstr_pane_g1

0x8a2e,	// (0x00054de7) scroll_navstr_pane_t1_ParamLimits

0x8a2e,	// (0x00054de7) scroll_navstr_pane_t1

0xee35,	// (0x0005b1ee) bg_button_pane_cp014

0xee35,	// (0x0005b1ee) bg_button_pane_cp030

0x0906,	// (0x0004ccbf) list_double_fisheye_pane_g4_ParamLimits

0x0906,	// (0x0004ccbf) list_double_fisheye_pane_g4

0x0912,	// (0x0004cccb) list_double_fisheye_pane_g5_ParamLimits

0x0912,	// (0x0004cccb) list_double_fisheye_pane_g5

0xcfae,	// (0x00059367) sp_fs_scroll_pane_cp03

0xed43,	// (0x0005b0fc) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xed4f,	// (0x0005b108) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfce0,	// (0x0005c099) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xed5b,	// (0x0005b114) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xedfb,	// (0x0005b1b4) sp_fs_scroll_pane_cp02

0xaf16,	// (0x000572cf) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xaf16,	// (0x000572cf) popup_sp_fs_calendar_preview_list_single_pane

0x9ca9,	// (0x00056062) main_cam6_pano_pane

0xa939,	// (0x00056cf2) main_mup3_pane_ParamLimits

0x9ca9,	// (0x00056062) main_phacti_pane

0x81c6,	// (0x0005457f) bg_button_pane_cp11

0x81e0,	// (0x00054599) main_mobtv_info_pane_g2_ParamLimits

0x81e0,	// (0x00054599) main_mobtv_info_pane_g2

0x0001,

0xfc40,	// (0x0005bff9) main_mobtv_info_pane_g_ParamLimits

0xfc40,	// (0x0005bff9) main_mobtv_info_pane_g

0x83bd,	// (0x00054776) sc_clock_pane_t5_ParamLimits

0x83bd,	// (0x00054776) sc_clock_pane_t5

0x844f,	// (0x00054808) main_radioblah_pane_g1_ParamLimits

0xebb7,	// (0x0005af70) main_radioblah_pane_t3_ParamLimits

0xebb7,	// (0x0005af70) main_radioblah_pane_t3

0xebcf,	// (0x0005af88) main_radioblah_pane_t4_ParamLimits

0xebcf,	// (0x0005af88) main_radioblah_pane_t4

0x8477,	// (0x00054830) main_radioblah_text_pane_ParamLimits

0x8477,	// (0x00054830) main_radioblah_text_pane

0x8489,	// (0x00054842) main_radioblah_info_pane_g1_ParamLimits

0x8522,	// (0x000548db) main_radioblah_info_pane_t4_ParamLimits

0x8522,	// (0x000548db) main_radioblah_info_pane_t4

0xa939,	// (0x00056cf2) main_sp_fs_calendar_pane

0x8a45,	// (0x00054dfe) main_phacti_pane_g1

0x8a4d,	// (0x00054e06) phacti_note_pane_ParamLimits

0x8a4d,	// (0x00054e06) phacti_note_pane

0xeea7,	// (0x0005b260) phacti_term_pane_ParamLimits

0xeea7,	// (0x0005b260) phacti_term_pane

0xeebc,	// (0x0005b275) phacti_note_pane_t1_ParamLimits

0xeebc,	// (0x0005b275) phacti_note_pane_t1

0xa752,	// (0x00056b0b) phacti_term_pane_g1

0xa75a,	// (0x00056b13) phacti_term_pane_t1_ParamLimits

0xa75a,	// (0x00056b13) phacti_term_pane_t1

0xeed3,	// (0x0005b28c) popup_sp_fs_calendar_preview_list_single_pane_g1

0xb02a,	// (0x000573e3) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0x005f,	// (0x0004c418) popup_sp_fs_calendar_preview_list_single_pane_g

0xeedb,	// (0x0005b294) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xeedb,	// (0x0005b294) popup_sp_fs_calendar_preview_list_single_pane_t1

0xeef0,	// (0x0005b2a9) aid_popup_sp_fs_bg_corner_pane

0xd255,	// (0x0005960e) popup_sp_fs_calendar_preview_bg_pane_g1

0x9ca9,	// (0x00056062) popup_sp_fs_calendar_preview_bg_pane

0xeef8,	// (0x0005b2b1) popup_sp_fs_calendar_preview_list_pane

0xce41,	// (0x000591fa) bg_main_sp_fs_cale_pane_ParamLimits

0xce41,	// (0x000591fa) bg_main_sp_fs_cale_pane

0xa78d,	// (0x00056b46) listscroll_cale_mrui_pane_ParamLimits

0xa78d,	// (0x00056b46) listscroll_cale_mrui_pane

0xa7a2,	// (0x00056b5b) listscroll_sp_fs_schedule_track_pane

0xa7ab,	// (0x00056b64) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xa7ab,	// (0x00056b64) main_sp_fs_ctrlbar_pane_cp01

0xef00,	// (0x0005b2b9) main_sp_fs_ribbon_pane

0xa7be,	// (0x00056b77) popup_sp_fs_cale_preview_window

0x8ac2,	// (0x00054e7b) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8ac2,	// (0x00054e7b) list_single_sp_fs_schedule_track_pane

0xa939,	// (0x00056cf2) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xa939,	// (0x00056cf2) bg_sp_fs_highlight_list_pane_cp03

0x8ad6,	// (0x00054e8f) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8ad6,	// (0x00054e8f) list_single_sp_fs_schedule_track_pane_g1

0x8ae2,	// (0x00054e9b) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8ae2,	// (0x00054e9b) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdb0,	// (0x0005c169) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdb0,	// (0x0005c169) list_single_sp_fs_schedule_track_pane_g

0x8aee,	// (0x00054ea7) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8aee,	// (0x00054ea7) list_single_sp_fs_schedule_track_pane_t1

0x8b08,	// (0x00054ec1) sp_fs_schedule_track_pane_ParamLimits

0x8b08,	// (0x00054ec1) sp_fs_schedule_track_pane

0xef08,	// (0x0005b2c1) sp_fs_schedule_track_pane_g1

0xef10,	// (0x0005b2c9) sp_fs_schedule_track_pane_g2

0xef18,	// (0x0005b2d1) sp_fs_schedule_track_pane_g3

0xef20,	// (0x0005b2d9) sp_fs_schedule_track_pane_g4

0xef28,	// (0x0005b2e1) sp_fs_schedule_track_pane_g5

0x0004,

0x0069,	// (0x0004c422) sp_fs_schedule_track_pane_g

0xdcc1,	// (0x0005a07a) bg_sp_fs_schedule_viewer_highlight_g1

0xb229,	// (0x000575e2) bg_sp_fs_schedule_viewer_highlight_g2

0xdcc9,	// (0x0005a082) bg_sp_fs_schedule_viewer_highlight_g3

0xdcd1,	// (0x0005a08a) bg_sp_fs_schedule_viewer_highlight_g4

0xdf00,	// (0x0005a2b9) bg_sp_fs_schedule_viewer_highlight_g5

0xdce1,	// (0x0005a09a) bg_sp_fs_schedule_viewer_highlight_g6

0xdce9,	// (0x0005a0a2) bg_sp_fs_schedule_viewer_highlight_g7

0xdcf1,	// (0x0005a0aa) bg_sp_fs_schedule_viewer_highlight_g8

0xb209,	// (0x000575c2) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdb5,	// (0x0005c16e) bg_sp_fs_schedule_viewer_highlight_g

0x9ca9,	// (0x00056062) bg_main_sp_fs_ribbon_pane

0x8b19,	// (0x00054ed2) main_sp_fs_ribbon_pane_g1

0xef30,	// (0x0005b2e9) main_sp_fs_ribbon_pane_t1

0x8b22,	// (0x00054edb) main_sp_fs_ribbon_pane_t2

0xef3f,	// (0x0005b2f8) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdc8,	// (0x0005c181) main_sp_fs_ribbon_pane_t

0xef4e,	// (0x0005b307) main_sp_fs_ribbon_scheduler_pane

0xef56,	// (0x0005b30f) bg_main_sp_fs_ribbon_pane_g1

0xef5f,	// (0x0005b318) bg_main_sp_fs_ribbon_pane_g2

0xef68,	// (0x0005b321) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0x008e,	// (0x0004c447) bg_main_sp_fs_ribbon_pane_g

0xef70,	// (0x0005b329) main_sp_fs_ribbon_scheduler_pane_g1

0xef79,	// (0x0005b332) main_sp_fs_ribbon_scheduler_pane_g2

0xef82,	// (0x0005b33b) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0x0095,	// (0x0004c44e) main_sp_fs_ribbon_scheduler_pane_g

0xef8b,	// (0x0005b344) list_cale_mrui_pane

0x8b31,	// (0x00054eea) sp_fs_scroll_pane_cp07_ParamLimits

0x8b31,	// (0x00054eea) sp_fs_scroll_pane_cp07

0x8b4d,	// (0x00054f06) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8b4d,	// (0x00054f06) bg_sp_fs_schedule_viewer_highlight

0xef98,	// (0x0005b351) list_single_sp_fs_schedule_track_pane_cp01

0xefa0,	// (0x0005b359) list_sp_fs_schedule_track_pane

0xefa8,	// (0x0005b361) sp_fs_scroll_pane_cp06_ParamLimits

0xefa8,	// (0x0005b361) sp_fs_scroll_pane_cp06

0xd255,	// (0x0005960e) bgmain_sp_fs_calendar_pane_g1

0x0f13,	// (0x0004d2cc) list_single_cale_mrui_pane_ParamLimits

0x0f13,	// (0x0004d2cc) list_single_cale_mrui_pane

0xa7d0,	// (0x00056b89) list_single_cale_mrui_row_pane_ParamLimits

0xa7d0,	// (0x00056b89) list_single_cale_mrui_row_pane

0xa7dd,	// (0x00056b96) list_single_cale_mrui_row_pane_g1_ParamLimits

0xa7dd,	// (0x00056b96) list_single_cale_mrui_row_pane_g1

0xa815,	// (0x00056bce) list_single_cale_mrui_row_pane_t1_ParamLimits

0xa815,	// (0x00056bce) list_single_cale_mrui_row_pane_t1

0x0f34,	// (0x0004d2ed) list_single_cale_mrui_row_pane_t2_ParamLimits

0x0f34,	// (0x0004d2ed) list_single_cale_mrui_row_pane_t2

0xa827,	// (0x00056be0) list_single_cale_mrui_row_pane_t3_ParamLimits

0xa827,	// (0x00056be0) list_single_cale_mrui_row_pane_t3

0xa856,	// (0x00056c0f) list_single_cale_mrui_row_pane_t4_ParamLimits

0xa856,	// (0x00056c0f) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdd6,	// (0x0005c18f) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdd6,	// (0x0005c18f) list_single_cale_mrui_row_pane_t

0x0f9c,	// (0x0004d355) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x0f9c,	// (0x0004d355) list_single_cmail_header_editor_pane_bg_cp01

0x0fc2,	// (0x0004d37b) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x0fc2,	// (0x0004d37b) list_single_cmail_header_editor_pane_bg_cp02

0x8b5d,	// (0x00054f16) main_radioblah_text_pane_t1_ParamLimits

0x8b5d,	// (0x00054f16) main_radioblah_text_pane_t1

0xefc7,	// (0x0005b380) cam6_indi_pane_cp01

0xefcf,	// (0x0005b388) cam6_mode_pane_cp01

0xefd7,	// (0x0005b390) cam6_pano_pane

0xefe0,	// (0x0005b399) cam6_zoom_pane_cp01

0xefe8,	// (0x0005b3a1) cam6_pano_image_pane

0xeff3,	// (0x0005b3ac) cam6_pano_pane_g1

0xe925,	// (0x0005acde) cam6_pano_pane_g2

0xeffc,	// (0x0005b3b5) cam6_pano_pane_g3

0xf005,	// (0x0005b3be) cam6_pano_pane_g4

0xd821,	// (0x00059bda) cam6_pano_pane_g5

0xf00e,	// (0x0005b3c7) cam6_pano_pane_g6

0xf018,	// (0x0005b3d1) cam6_pano_pane_g7

0xf020,	// (0x0005b3d9) cam6_pano_pane_g8

0xf029,	// (0x0005b3e2) cam6_pano_pane_g9

0x0008,

0xfddf,	// (0x0005c198) cam6_pano_pane_g

0x9ca9,	// (0x00056062) main_browser_tag_pane

0xee88,	// (0x0005b241) grid_navstr_albumart_pane

0xf034,	// (0x0005b3ed) cell_navstr_albumart_pane_ParamLimits

0xf034,	// (0x0005b3ed) cell_navstr_albumart_pane

0xf054,	// (0x0005b40d) cell_navstr_albumart_pane_g1

0xcc52,	// (0x0005900b) cell_navstr_albumart_pane_g2

0xcc62,	// (0x0005901b) cell_navstr_albumart_pane_g3

0xcc5a,	// (0x00059013) cell_navstr_albumart_pane_g4

0x0003,

0x00bf,	// (0x0004c478) cell_navstr_albumart_pane_g

0x8b77,	// (0x00054f30) bt_list_pane_ParamLimits

0x8b77,	// (0x00054f30) bt_list_pane

0x8b8b,	// (0x00054f44) bt_list_pane_t1

0x8b9a,	// (0x00054f53) bt_list_pane_t2

0x0001,

0xfdf2,	// (0x0005c1ab) bt_list_pane_t

0x9ca9,	// (0x00056062) main_cale_prevew_pane

0x8ba9,	// (0x00054f62) popup_cale_preview_window_ParamLimits

0x8ba9,	// (0x00054f62) popup_cale_preview_window

0xa939,	// (0x00056cf2) bg_popup_preview_window_pane_cp05_ParamLimits

0xa939,	// (0x00056cf2) bg_popup_preview_window_pane_cp05

0xf05c,	// (0x0005b415) list_cale_preview_pane_ParamLimits

0xf05c,	// (0x0005b415) list_cale_preview_pane

0x8bc4,	// (0x00054f7d) list_double_cale_preview_pane_ParamLimits

0x8bc4,	// (0x00054f7d) list_double_cale_preview_pane

0x8bd6,	// (0x00054f8f) list_single_cale_preview_pane_ParamLimits

0x8bd6,	// (0x00054f8f) list_single_cale_preview_pane

0x8bec,	// (0x00054fa5) list_single_cale_preview_pane_g1

0x8bf4,	// (0x00054fad) list_single_cale_preview_pane_t1_ParamLimits

0x8bf4,	// (0x00054fad) list_single_cale_preview_pane_t1

0x8c09,	// (0x00054fc2) list_double_cale_preview_pane_g1

0x8c11,	// (0x00054fca) list_double_cale_preview_pane_t1_ParamLimits

0x8c11,	// (0x00054fca) list_double_cale_preview_pane_t1

0x8c26,	// (0x00054fdf) list_double_cale_preview_pane_t2_ParamLimits

0x8c26,	// (0x00054fdf) list_double_cale_preview_pane_t2

0x0001,

0xfdf7,	// (0x0005c1b0) list_double_cale_preview_pane_t_ParamLimits

0xfdf7,	// (0x0005c1b0) list_double_cale_preview_pane_t

0x9ca9,	// (0x00056062) main_ezdial_pane

0xa939,	// (0x00056cf2) main_sp_fs_email_pane_ParamLimits

0x8733,	// (0x00054aec) cmail_ddmenu_btn01_pane_ParamLimits

0x8733,	// (0x00054aec) cmail_ddmenu_btn01_pane

0x8746,	// (0x00054aff) cmail_ddmenu_btn02_pane_ParamLimits

0x8746,	// (0x00054aff) cmail_ddmenu_btn02_pane

0x8769,	// (0x00054b22) cmail_ddmenu_btn03_pane_ParamLimits

0x8769,	// (0x00054b22) cmail_ddmenu_btn03_pane

0x878f,	// (0x00054b48) main_sp_fs_ctrlbar_pane_ParamLimits

0x87b3,	// (0x00054b6c) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xdcf9,	// (0x0005a0b2) list_cmail_body_pane_ParamLimits

0x8996,	// (0x00054d4f) bg_button_pane_cp12

0xee11,	// (0x0005b1ca) list_single_cmail_header_detail_pane_g3_ParamLimits

0xee11,	// (0x0005b1ca) list_single_cmail_header_detail_pane_g3

0xa72e,	// (0x00056ae7) list_single_cmail_header_detail_pane_t2_ParamLimits

0xa72e,	// (0x00056ae7) list_single_cmail_header_detail_pane_t2

0x0001,

0xfda6,	// (0x0005c15f) list_single_cmail_header_detail_pane_t_ParamLimits

0xfda6,	// (0x0005c15f) list_single_cmail_header_detail_pane_t

0xa76f,	// (0x00056b28) phacti_term_pane_t2_ParamLimits

0xa76f,	// (0x00056b28) phacti_term_pane_t2

0x0001,

0xfdab,	// (0x0005c164) phacti_term_pane_t_ParamLimits

0xfdab,	// (0x0005c164) phacti_term_pane_t

0xf068,	// (0x0005b421) aid_size_list_single_double

0x8c3e,	// (0x00054ff7) popup_ezdial_listscroll_window

0x8c5a,	// (0x00055013) popup_number_entry_window_cp01

0xba44,	// (0x00057dfd) bg_popup_call_pane_cp09

0xf074,	// (0x0005b42d) ezdial_list_pane

0xf07c,	// (0x0005b435) scroll_pane_cp23

0xce41,	// (0x000591fa) bg_button_pane_cp028_ParamLimits

0xce41,	// (0x000591fa) bg_button_pane_cp028

0x8c68,	// (0x00055021) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x8c68,	// (0x00055021) cmail_ddmenu_btn01_pane_g1

0x8c74,	// (0x0005502d) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x8c74,	// (0x0005502d) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfdfc,	// (0x0005c1b5) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfdfc,	// (0x0005c1b5) cmail_ddmenu_btn01_pane_g

0xf084,	// (0x0005b43d) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xf084,	// (0x0005b43d) cmail_ddmenu_btn01_pane_t1

0xce41,	// (0x000591fa) bg_button_pane_cp029_ParamLimits

0xce41,	// (0x000591fa) bg_button_pane_cp029

0x8c88,	// (0x00055041) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x8c88,	// (0x00055041) cmail_ddmenu_btn02_pane_g1

0x8ca0,	// (0x00055059) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x8ca0,	// (0x00055059) cmail_ddmenu_btn02_pane_t1

0xa939,	// (0x00056cf2) bg_button_pane_cp031_ParamLimits

0xa939,	// (0x00056cf2) bg_button_pane_cp031

0x8c88,	// (0x00055041) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x8c88,	// (0x00055041) cmail_ddmenu_btn03_pane_g1

0x8ca0,	// (0x00055059) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x8ca0,	// (0x00055059) cmail_ddmenu_btn03_pane_t1

0x6310,	// (0x000526c9) cell_dialer2_keypad_pane_t1_ParamLimits

0x632a,	// (0x000526e3) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x632a,	// (0x000526e3) cell_dialer2_keypad_pane_t1_copy1

0x802d,	// (0x000543e6) ncimui_group_button_pane

0xa939,	// (0x00056cf2) main_sp_fs_calendar_pane_ParamLimits

0x8955,	// (0x00054d0e) list_single_cmail_header_caption_pane_ParamLimits

0xa784,	// (0x00056b3d) aid_recal_txt_sm_pane

0x9ca9,	// (0x00056062) mian_recal_day_pane

0xa7be,	// (0x00056b77) popup_sp_fs_cale_preview_window_ParamLimits

0xf09a,	// (0x0005b453) list_recal_day_pane

0xa8a0,	// (0x00056c59) list_single_recal_day_pane_ParamLimits

0xa8a0,	// (0x00056c59) list_single_recal_day_pane

0xf0c1,	// (0x0005b47a) list_single_recal_day_pane_g1_ParamLimits

0xf0c1,	// (0x0005b47a) list_single_recal_day_pane_g1

0xa8b2,	// (0x00056c6b) list_single_recal_day_pane_g2_ParamLimits

0xa8b2,	// (0x00056c6b) list_single_recal_day_pane_g2

0xa8c2,	// (0x00056c7b) list_single_recal_day_pane_g3_ParamLimits

0xa8c2,	// (0x00056c7b) list_single_recal_day_pane_g3

0x0fe2,	// (0x0004d39b) list_single_recal_day_pane_g4_ParamLimits

0x0fe2,	// (0x0004d39b) list_single_recal_day_pane_g4

0xa8ce,	// (0x00056c87) list_single_recal_day_pane_g5_ParamLimits

0xa8ce,	// (0x00056c87) list_single_recal_day_pane_g5

0xa8de,	// (0x00056c97) list_single_recal_day_pane_g6_ParamLimits

0xa8de,	// (0x00056c97) list_single_recal_day_pane_g6

0x0004,

0xfe0b,	// (0x0005c1c4) list_single_recal_day_pane_g_ParamLimits

0xfe0b,	// (0x0005c1c4) list_single_recal_day_pane_g

0xa8f2,	// (0x00056cab) list_single_recal_day_pane_t1

0xa904,	// (0x00056cbd) list_single_recal_day_pane_t2

0x0001,

0xfe16,	// (0x0005c1cf) list_single_recal_day_pane_t

0x8cc4,	// (0x0005507d) ncimui_query_button_pane_ParamLimits

0x8cc4,	// (0x0005507d) ncimui_query_button_pane

0x8cd4,	// (0x0005508d) ncimui_query_button_pane_t1_ParamLimits

0x8cd4,	// (0x0005508d) ncimui_query_button_pane_t1

0x8ce7,	// (0x000550a0) ncimui_query_button_pane_t2_ParamLimits

0x8ce7,	// (0x000550a0) ncimui_query_button_pane_t2

0x0001,

0xfe1b,	// (0x0005c1d4) ncimui_query_button_pane_t_ParamLimits

0xfe1b,	// (0x0005c1d4) ncimui_query_button_pane_t

0x8cfa,	// (0x000550b3) query_button_pane_ParamLimits

0x8cfa,	// (0x000550b3) query_button_pane

0x9ca9,	// (0x00056062) bg_button_pane_cp0028

0x8d0d,	// (0x000550c6) query_button_pane_t1

0x43aa,	// (0x00050763) main_tport_pane_ParamLimits

0x8819,	// (0x00054bd2) bg_popup_window_pane_cp01_ParamLimits

0x8819,	// (0x00054bd2) bg_popup_window_pane_cp01

0x8834,	// (0x00054bed) heading_pane_cp08_ParamLimits

0x8834,	// (0x00054bed) heading_pane_cp08

0x8847,	// (0x00054c00) heading_pane_cp07_ParamLimits

0x8847,	// (0x00054c00) heading_pane_cp07

0x88ee,	// (0x00054ca7) cell_tport_appsw_pane_g2

0x0002,

0xfd93,	// (0x0005c14c) cell_tport_appsw_pane_g

0x39c0,	// (0x0004fd79) input_candi_list_open_g1

0xb3ec,	// (0x000577a5) list_cale_time_pane_g6_ParamLimits

0xb3ec,	// (0x000577a5) list_cale_time_pane_g6

0x5173,	// (0x0005152c) aid_size_touch_calib_1_ParamLimits

0x5173,	// (0x0005152c) aid_size_touch_calib_1

0x5185,	// (0x0005153e) aid_size_touch_calib_2_ParamLimits

0x5185,	// (0x0005153e) aid_size_touch_calib_2

0x519d,	// (0x00051556) aid_size_touch_calib_3_ParamLimits

0x519d,	// (0x00051556) aid_size_touch_calib_3

0x51bb,	// (0x00051574) aid_size_touch_calib_4_ParamLimits

0x51bb,	// (0x00051574) aid_size_touch_calib_4

0x51d3,	// (0x0005158c) main_touch_calib_button_group_pane_ParamLimits

0x51d3,	// (0x0005158c) main_touch_calib_button_group_pane

0x51eb,	// (0x000515a4) main_touch_calib_pane_g1_ParamLimits

0x51fd,	// (0x000515b6) main_touch_calib_pane_g2_ParamLimits

0x520f,	// (0x000515c8) main_touch_calib_pane_g3_ParamLimits

0x5221,	// (0x000515da) main_touch_calib_pane_g4_ParamLimits

0xf756,	// (0x0005bb0f) main_touch_calib_pane_g_ParamLimits

0x5233,	// (0x000515ec) main_touch_calib_pane_t1_ParamLimits

0x524d,	// (0x00051606) main_touch_calib_pane_t2_ParamLimits

0x5267,	// (0x00051620) main_touch_calib_pane_t3_ParamLimits

0x527b,	// (0x00051634) main_touch_calib_pane_t4_ParamLimits

0x528f,	// (0x00051648) main_touch_calib_pane_t5_ParamLimits

0xf75f,	// (0x0005bb18) main_touch_calib_pane_t_ParamLimits

0xd5e1,	// (0x0005999a) list_single_fp_cale_pane_g3_ParamLimits

0xd5e1,	// (0x0005999a) list_single_fp_cale_pane_g3

0xa939,	// (0x00056cf2) bg_button_pane_cp012_ParamLimits

0xa939,	// (0x00056cf2) bg_vkb2_func_pane_cp03_ParamLimits

0x72ae,	// (0x00053667) cell_vitu2_function_top_pane_g1_ParamLimits

0xa939,	// (0x00056cf2) bg_vkb2_func_pane_cp04_ParamLimits

0x7fbb,	// (0x00054374) main_ncimui_button_group_pane_ParamLimits

0x7fbb,	// (0x00054374) main_ncimui_button_group_pane

0x801b,	// (0x000543d4) main_ncimui_pane_t3_ParamLimits

0x801b,	// (0x000543d4) main_ncimui_pane_t3

0xee9e,	// (0x0005b257) phacti_button_group_pane

0xf068,	// (0x0005b421) aid_size_list_single_double_ParamLimits

0x8c3e,	// (0x00054ff7) popup_ezdial_listscroll_window_ParamLimits

0x8c5a,	// (0x00055013) popup_number_entry_window_cp01_ParamLimits

0x8d1b,	// (0x000550d4) phacti_button_pane_ParamLimits

0x8d1b,	// (0x000550d4) phacti_button_pane

0x9ca9,	// (0x00056062) bg_button_pane_cp14

0x8d2c,	// (0x000550e5) phacti_button_pane_t1

0x8d3a,	// (0x000550f3) main_touch_calib_button_pane_ParamLimits

0x8d3a,	// (0x000550f3) main_touch_calib_button_pane

0xae12,	// (0x000571cb) bg_button_pane_cp18_ParamLimits

0xae12,	// (0x000571cb) bg_button_pane_cp18

0x8d4f,	// (0x00055108) main_touch_calib_button_pane_t1_ParamLimits

0x8d4f,	// (0x00055108) main_touch_calib_button_pane_t1

0x8d65,	// (0x0005511e) main_touch_calib_button_pane_t2_ParamLimits

0x8d65,	// (0x0005511e) main_touch_calib_button_pane_t2

0x0001,

0xfe20,	// (0x0005c1d9) main_touch_calib_button_pane_t_ParamLimits

0xfe20,	// (0x0005c1d9) main_touch_calib_button_pane_t

0x9ca9,	// (0x00056062) cell_ncimui_button_pane

0x9ca9,	// (0x00056062) bg_button_pane_cp032

0x8d83,	// (0x0005513c) cell_ncimui_button_pane_t1

0xa460,	// (0x00056819) image3_infobar_pane_ParamLimits

0xa460,	// (0x00056819) image3_infobar_pane

0x83e9,	// (0x000547a2) fs_bigclock_status_pane_ParamLimits

0x83e9,	// (0x000547a2) fs_bigclock_status_pane

0x83f6,	// (0x000547af) main_fs_bigclock_clock_pane_ParamLimits

0x83f6,	// (0x000547af) main_fs_bigclock_clock_pane

0x8412,	// (0x000547cb) main_fs_bigclock_indi_pane_ParamLimits

0x8412,	// (0x000547cb) main_fs_bigclock_indi_pane

0x842b,	// (0x000547e4) main_fs_bigclock_swipe_pane_ParamLimits

0x842b,	// (0x000547e4) main_fs_bigclock_swipe_pane

0x9ca9,	// (0x00056062) main_fs_clock_dumped_data

0xea32,	// (0x0005adeb) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xea32,	// (0x0005adeb) list_single_fs_bigclock_indicator_pane_g1

0xea4c,	// (0x0005ae05) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xea4c,	// (0x0005ae05) list_single_fs_bigclock_indicator_pane_g2

0xea66,	// (0x0005ae1f) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xea66,	// (0x0005ae1f) list_single_fs_bigclock_indicator_pane_g3

0xea80,	// (0x0005ae39) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xea80,	// (0x0005ae39) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc74,	// (0x0005c02d) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc74,	// (0x0005c02d) list_single_fs_bigclock_indicator_pane_g

0xeaa9,	// (0x0005ae62) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xeaa9,	// (0x0005ae62) list_single_fs_bigclock_indicator_pane_t1

0xead1,	// (0x0005ae8a) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xead1,	// (0x0005ae8a) list_single_fs_bigclock_indicator_pane_t2

0xeaf9,	// (0x0005aeb2) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xeaf9,	// (0x0005aeb2) list_single_fs_bigclock_indicator_pane_t3

0xeb21,	// (0x0005aeda) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xeb21,	// (0x0005aeda) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc7f,	// (0x0005c038) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc7f,	// (0x0005c038) list_single_fs_bigclock_indicator_pane_t

0x8d91,	// (0x0005514a) image3_infobar_fav_pane_ParamLimits

0x8d91,	// (0x0005514a) image3_infobar_fav_pane

0x8da1,	// (0x0005515a) image3_infobar_loc_pane_ParamLimits

0x8da1,	// (0x0005515a) image3_infobar_loc_pane

0x8db5,	// (0x0005516e) image3_infobar_time_pane_ParamLimits

0x8db5,	// (0x0005516e) image3_infobar_time_pane

0xd255,	// (0x0005960e) image3_infobar_time_pane_g1

0x8dc5,	// (0x0005517e) image3_infobar_time_pane_t1

0xd255,	// (0x0005960e) image3_infobar_loc_pane_g1

0x8dd3,	// (0x0005518c) image3_infobar_loc_pane_g2

0x0001,

0xfe25,	// (0x0005c1de) image3_infobar_loc_pane_g

0x8ddb,	// (0x00055194) image3_infobar_loc_pane_t1

0xd255,	// (0x0005960e) image3_infobar_fav_pane_g1

0x8de9,	// (0x000551a2) image3_infobar_fav_pane_g2

0x0001,

0xfe2a,	// (0x0005c1e3) image3_infobar_fav_pane_g

0x8df1,	// (0x000551aa) fs_bigclock_status_battery_pane

0x8dfa,	// (0x000551b3) fs_bigclock_status_signal_pane

0x8e03,	// (0x000551bc) fs_bigclock_status_title_pane

0x8e0c,	// (0x000551c5) fs_bigclock_status_signal_pane_g1

0x8e15,	// (0x000551ce) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe2f,	// (0x0005c1e8) fs_bigclock_status_signal_pane_g

0x8e1d,	// (0x000551d6) fs_bigclock_status_battery_pane_g1

0x8e26,	// (0x000551df) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe34,	// (0x0005c1ed) fs_bigclock_status_battery_pane_g

0x8e2e,	// (0x000551e7) fs_bigclock_status_title_pane_t1

0xd255,	// (0x0005960e) main_fs_bigclock_clock_pane_g1

0x8e3c,	// (0x000551f5) main_fs_bigclock_clock_pane_g2

0x8e3c,	// (0x000551f5) main_fs_bigclock_clock_pane_g3

0x8e3c,	// (0x000551f5) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe39,	// (0x0005c1f2) main_fs_bigclock_clock_pane_g

0x8e44,	// (0x000551fd) main_fs_bigclock_clock_pane_t1

0x8e52,	// (0x0005520b) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe42,	// (0x0005c1fb) main_fs_bigclock_clock_pane_t

0x8e61,	// (0x0005521a) list_single_fs_bigclock_indicator_pane_ParamLimits

0x8e61,	// (0x0005521a) list_single_fs_bigclock_indicator_pane

0x8e72,	// (0x0005522b) list_single_fs_bigclock_pane_ParamLimits

0x8e72,	// (0x0005522b) list_single_fs_bigclock_pane

0x8ede,	// (0x00055297) main_fs_bigclock_indicator_pane_t1

0x8eed,	// (0x000552a6) list_single_fs_bigclock_pane_g1

0x8ef5,	// (0x000552ae) list_single_fs_bigclock_pane_t1

0xd255,	// (0x0005960e) main_fs_bigclock_swipe_pane_g1

0x8f38,	// (0x000552f1) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe53,	// (0x0005c20c) main_fs_bigclock_swipe_pane_g

0x8f40,	// (0x000552f9) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x8f40,	// (0x000552f9) main_fs_bigclock_swipe_pane_t1

0x32e8,	// (0x0004f6a1) call_type_pane_ParamLimits

0x9ca9,	// (0x00056062) main_btmg_pane

0xa809,	// (0x00056bc2) list_single_cale_mrui_row_pane_g2_ParamLimits

0xa809,	// (0x00056bc2) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdcf,	// (0x0005c188) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdcf,	// (0x0005c188) list_single_cale_mrui_row_pane_g

0xa88f,	// (0x00056c48) list_recal_vselct_arw_lo_pane

0xf0b9,	// (0x0005b472) list_recal_vselct_arw_up_pane

0xa897,	// (0x00056c50) list_recal_vselct_pane

0x8f5d,	// (0x00055316) btmg_button_pane

0x8f67,	// (0x00055320) main_btmg_pane_g1

0x9ca9,	// (0x00056062) bg_button_pane_cp044

0x8f71,	// (0x0005532a) btmg_button_pane_t1

0xce2d,	// (0x000591e6) aid_listscroll_gen

0xa939,	// (0x00056cf2) main_cntbar_detail_pane

0xedf3,	// (0x0005b1ac) list_cmail_folder_pane

0xcfae,	// (0x00059367) sp_fs_scroll_pane_cp03_ParamLimits

0x1002,	// (0x0004d3bb) list_single_fs_dyc_pane_cp01_ParamLimits

0x1002,	// (0x0004d3bb) list_single_fs_dyc_pane_cp01

0x8f7f,	// (0x00055338) aid_size_cmail_indent

0xa916,	// (0x00056ccf) list_single_dyc_row_pane_cp01

0x8fba,	// (0x00055373) cntbar_detail_list_pane_ParamLimits

0x8fba,	// (0x00055373) cntbar_detail_list_pane

0x9006,	// (0x000553bf) main_cntbar_detail_cont_pane_ParamLimits

0x9006,	// (0x000553bf) main_cntbar_detail_cont_pane

0xcfae,	// (0x00059367) scroll_pane_cp032_ParamLimits

0xcfae,	// (0x00059367) scroll_pane_cp032

0x901a,	// (0x000553d3) cntbar_detail_list_event_pane_ParamLimits

0x901a,	// (0x000553d3) cntbar_detail_list_event_pane

0x8fca,	// (0x00055383) cntbar_detail_list_shct_pane

0xb277,	// (0x00057630) aid_list_gen

0x902a,	// (0x000553e3) aid_scroll

0x9033,	// (0x000553ec) aid_size_touch_scroll_bar

0x788d,	// (0x00053c46) aid_list_double

0x787b,	// (0x00053c34) aid_list_single

0x787b,	// (0x00053c34) aid_list_single_lg

0x1019,	// (0x0004d3d2) aid_list_z_g_a_sm

0x1021,	// (0x0004d3da) aid_list_z_g_d

0x1029,	// (0x0004d3e2) aid_txt_z_prm

0x1037,	// (0x0004d3f0) aid_txt_z_prm_cp01

0x1045,	// (0x0004d3fe) aid_txt_z_sec

0x903c,	// (0x000553f5) main_cntbar_detail_cont_pane_g1_ParamLimits

0x903c,	// (0x000553f5) main_cntbar_detail_cont_pane_g1

0x9050,	// (0x00055409) main_cntbar_detail_cont_pane_g2_ParamLimits

0x9050,	// (0x00055409) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe58,	// (0x0005c211) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe58,	// (0x0005c211) main_cntbar_detail_cont_pane_g

0x9060,	// (0x00055419) main_cntbar_detail_cont_pane_t1

0x906e,	// (0x00055427) main_cntbar_detail_cont_pane_t2

0x907c,	// (0x00055435) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe5d,	// (0x0005c216) main_cntbar_detail_cont_pane_t

0x908a,	// (0x00055443) cell_cntbar_detail_list_shct_pane_ParamLimits

0x908a,	// (0x00055443) cell_cntbar_detail_list_shct_pane

0x909e,	// (0x00055457) cntbar_detail_list_shct_pane_g1

0x90a7,	// (0x00055460) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe64,	// (0x0005c21d) cntbar_detail_list_shct_pane_g

0x90b0,	// (0x00055469) cntbar_detail_list_event_pane_g1_ParamLimits

0x90b0,	// (0x00055469) cntbar_detail_list_event_pane_g1

0x90bc,	// (0x00055475) cntbar_detail_list_event_pane_g2_ParamLimits

0x90bc,	// (0x00055475) cntbar_detail_list_event_pane_g2

0x0005,

0xfe69,	// (0x0005c222) cntbar_detail_list_event_pane_g_ParamLimits

0xfe69,	// (0x0005c222) cntbar_detail_list_event_pane_g

0x9128,	// (0x000554e1) cntbar_detail_list_event_pane_t1_ParamLimits

0x9128,	// (0x000554e1) cntbar_detail_list_event_pane_t1

0x913d,	// (0x000554f6) cntbar_detail_list_event_pane_t2_ParamLimits

0x913d,	// (0x000554f6) cntbar_detail_list_event_pane_t2

0x0002,

0xfe76,	// (0x0005c22f) cntbar_detail_list_event_pane_t_ParamLimits

0xfe76,	// (0x0005c22f) cntbar_detail_list_event_pane_t

0xd255,	// (0x0005960e) cell_cntbar_detail_list_shct_pane_g1

0xb9fc,	// (0x00057db5) navi_pane_mv_g3

0xa939,	// (0x00056cf2) main_cntbar_detail_pane_ParamLimits

0x9ca9,	// (0x00056062) main_notif_wgt_pane

0xa276,	// (0x0005662f) aid_tch_main_mp4_pane_g4

0xa458,	// (0x00056811) popup_slider_window_cp02

0xa885,	// (0x00056c3e) list_recal_day_event_pane

0x8f88,	// (0x00055341) cntbar_detail_btn_pane_ParamLimits

0x8f88,	// (0x00055341) cntbar_detail_btn_pane

0x8fa1,	// (0x0005535a) cntbar_detail_btn_pane_cp01_ParamLimits

0x8fa1,	// (0x0005535a) cntbar_detail_btn_pane_cp01

0x8fca,	// (0x00055383) cntbar_detail_list_shct_pane_ParamLimits

0x8fda,	// (0x00055393) cntbar_detail_pane_g1_ParamLimits

0x8fda,	// (0x00055393) cntbar_detail_pane_g1

0x8fea,	// (0x000553a3) cntbar_detail_pane_t1_ParamLimits

0x8fea,	// (0x000553a3) cntbar_detail_pane_t1

0x90c8,	// (0x00055481) cntbar_detail_list_event_pane_g3_ParamLimits

0x90c8,	// (0x00055481) cntbar_detail_list_event_pane_g3

0x90e0,	// (0x00055499) cntbar_detail_list_event_pane_g4_ParamLimits

0x90e0,	// (0x00055499) cntbar_detail_list_event_pane_g4

0x90f8,	// (0x000554b1) cntbar_detail_list_event_pane_g5_ParamLimits

0x90f8,	// (0x000554b1) cntbar_detail_list_event_pane_g5

0x9110,	// (0x000554c9) cntbar_detail_list_event_pane_g6_ParamLimits

0x9110,	// (0x000554c9) cntbar_detail_list_event_pane_g6

0x9152,	// (0x0005550b) cntbar_detail_list_event_pane_t3_ParamLimits

0x9152,	// (0x0005550b) cntbar_detail_list_event_pane_t3

0x9164,	// (0x0005551d) popup_notif_wgt_window_ParamLimits

0x9164,	// (0x0005551d) popup_notif_wgt_window

0x917d,	// (0x00055536) popup_submenu_window_cp01_ParamLimits

0x917d,	// (0x00055536) popup_submenu_window_cp01

0xba44,	// (0x00057dfd) bg_popup_window_pane_cp10

0x9193,	// (0x0005554c) listscroll_notif_wgt_pane

0x91a5,	// (0x0005555e) list_notif_wgt_window

0x91ae,	// (0x00055567) scroll_pane_cp033

0x91b7,	// (0x00055570) list_notif_wgt_row_pane_ParamLimits

0x91b7,	// (0x00055570) list_notif_wgt_row_pane

0x91c7,	// (0x00055580) aid_size_list_notif_wgt_del

0x91d4,	// (0x0005558d) list_notif_wgt_row_pane_g1

0x91e0,	// (0x00055599) list_notif_wgt_row_pane_g2

0x91ec,	// (0x000555a5) list_notif_wgt_row_pane_g3

0x0002,

0xfe7d,	// (0x0005c236) list_notif_wgt_row_pane_g

0x91f9,	// (0x000555b2) list_notif_wgt_row_pane_t1

0x920e,	// (0x000555c7) list_notif_wgt_row_pane_t2

0x9220,	// (0x000555d9) list_notif_wgt_row_pane_t3

0x0002,

0xfe84,	// (0x0005c23d) list_notif_wgt_row_pane_t

0xdf08,	// (0x0005a2c1) list_recal_day_event_pane_g1

0x9232,	// (0x000555eb) list_recal_day_event_pane_t1

0x9ca9,	// (0x00056062) bg_button_pane_cp045

0x9241,	// (0x000555fa) cntbar_detail_btn_pane_t1

0xce41,	// (0x000591fa) main_callh_pane_ParamLimits

0xce41,	// (0x000591fa) main_callh_pane

0x9ca9,	// (0x00056062) main_coverflow0_pane

0x9ca9,	// (0x00056062) main_wgtman_pane

0x8439,	// (0x000547f2) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x8439,	// (0x000547f2) main_fs_bigclock_unlock_btn_pane

0x88e6,	// (0x00054c9f) bg_button_pane_cp16

0x88f6,	// (0x00054caf) cell_tport_appsw_pane_g3

0x924f,	// (0x00055608) cf0_flow_pane_ParamLimits

0x924f,	// (0x00055608) cf0_flow_pane

0x9264,	// (0x0005561d) listscroll_cf0_pane

0x926f,	// (0x00055628) main_cf0_pane_g1

0x9281,	// (0x0005563a) main_cf0_pane_t1_ParamLimits

0x9281,	// (0x0005563a) main_cf0_pane_t1

0x9298,	// (0x00055651) main_cf0_pane_t2_ParamLimits

0x9298,	// (0x00055651) main_cf0_pane_t2

0x0001,

0xfe90,	// (0x0005c249) main_cf0_pane_t_ParamLimits

0xfe90,	// (0x0005c249) main_cf0_pane_t

0x92af,	// (0x00055668) scroll_pane_cp11

0x92ba,	// (0x00055673) cf0_flow_pane_g1

0x92c2,	// (0x0005567b) cf0_flow_pane_g2

0x0001,

0xfe95,	// (0x0005c24e) cf0_flow_pane_g

0x92ca,	// (0x00055683) cf0_flow_pane_t1

0x9ca9,	// (0x00056062) main_call6_pane

0x9ca9,	// (0x00056062) main_calllock_pane

0x92d8,	// (0x00055691) call6_btn_grp_pane_ParamLimits

0x92d8,	// (0x00055691) call6_btn_grp_pane

0x92f2,	// (0x000556ab) call6_pane_g1_ParamLimits

0x92f2,	// (0x000556ab) call6_pane_g1

0x9307,	// (0x000556c0) popup_call6_1st_window_ParamLimits

0x9307,	// (0x000556c0) popup_call6_1st_window

0x9318,	// (0x000556d1) popup_call6_2nd_window_ParamLimits

0x9318,	// (0x000556d1) popup_call6_2nd_window

0x9329,	// (0x000556e2) cell_call6_btn_pane_ParamLimits

0x9329,	// (0x000556e2) cell_call6_btn_pane

0xba44,	// (0x00057dfd) bg_popup_call2_in_pane_cp03

0x933d,	// (0x000556f6) popup_call6_1st_window_g1

0x9345,	// (0x000556fe) popup_call6_1st_window_g2

0x934d,	// (0x00055706) popup_call6_1st_window_g3

0x0002,

0xfe9a,	// (0x0005c253) popup_call6_1st_window_g

0x9355,	// (0x0005570e) popup_call6_1st_window_t1

0x9364,	// (0x0005571d) popup_call6_1st_window_t2

0x9374,	// (0x0005572d) popup_call6_1st_window_t3

0x0002,

0xfea1,	// (0x0005c25a) popup_call6_1st_window_t

0xba44,	// (0x00057dfd) bg_popup_call2_in_pane_cp04

0x933d,	// (0x000556f6) popup_call6_2nd_window_g1

0x9345,	// (0x000556fe) popup_call6_2nd_window_g2

0x934d,	// (0x00055706) popup_call6_2nd_window_g3

0x0002,

0xfe9a,	// (0x0005c253) popup_call6_2nd_window_g

0x9355,	// (0x0005570e) popup_call6_2nd_window_t1

0x9ca9,	// (0x00056062) bg_button_pane_cp15

0x9384,	// (0x0005573d) cell_call6_btn_pane_g1

0x938d,	// (0x00055746) cell_call6_btn_pane_t1

0x939c,	// (0x00055755) listscroll_wgtman_pane_ParamLimits

0x939c,	// (0x00055755) listscroll_wgtman_pane

0x93bd,	// (0x00055776) wgtman_btn_pane_ParamLimits

0x93bd,	// (0x00055776) wgtman_btn_pane

0xb803,	// (0x00057bbc) aid_scroll_copy1

0x9400,	// (0x000557b9) list_wgtman_pane

0x940a,	// (0x000557c3) wgtman_btn_pane_g1_ParamLimits

0x940a,	// (0x000557c3) wgtman_btn_pane_g1

0x9436,	// (0x000557ef) wgtman_btn_pane_t1_ParamLimits

0x9436,	// (0x000557ef) wgtman_btn_pane_t1

0x9473,	// (0x0005582c) wgtman_btn_pane_t2_ParamLimits

0x9473,	// (0x0005582c) wgtman_btn_pane_t2

0x0001,

0xfea8,	// (0x0005c261) wgtman_btn_pane_t_ParamLimits

0xfea8,	// (0x0005c261) wgtman_btn_pane_t

0x948a,	// (0x00055843) listrow_wgtman_pane_ParamLimits

0x948a,	// (0x00055843) listrow_wgtman_pane

0x949c,	// (0x00055855) listrow_wgtman_pane_g1

0x94a9,	// (0x00055862) listrow_wgtman_pane_g2

0x0001,

0xfead,	// (0x0005c266) listrow_wgtman_pane_g

0x1053,	// (0x0004d40c) listrow_wgtman_pane_t1

0x106b,	// (0x0004d424) listrow_wgtman_pane_t2

0x0001,

0xfeb2,	// (0x0005c26b) listrow_wgtman_pane_t

0x1091,	// (0x0004d44a) wait_bar_pane_cp09

0x94c7,	// (0x00055880) main_calllock_btn_pane

0x94d1,	// (0x0005588a) main_calllock_pane_g1

0x9ca9,	// (0x00056062) bg_button_pane_cp17

0x94dd,	// (0x00055896) main_calllock_btn_pane_g1

0x94e6,	// (0x0005589f) main_calllock_btn_pane_t1

0x9ca9,	// (0x00056062) main_dialer3_pane

0x9ca9,	// (0x00056062) main_fmrd2_pane

0xd255,	// (0x0005960e) main_fs_bigclock_unlock_btn_pane_g1

0x94fd,	// (0x000558b6) main_fs_bigclock_unlock_btn_pane_t1

0x950b,	// (0x000558c4) area_fmrd2_info_pane_ParamLimits

0x950b,	// (0x000558c4) area_fmrd2_info_pane

0x951c,	// (0x000558d5) area_fmrd2_visual_pane_ParamLimits

0x951c,	// (0x000558d5) area_fmrd2_visual_pane

0x952a,	// (0x000558e3) fmrd2_indi_pane_ParamLimits

0x952a,	// (0x000558e3) fmrd2_indi_pane

0x9537,	// (0x000558f0) area_fmrd2_visual_pane_g1

0x953f,	// (0x000558f8) area_fmrd2_visual_pane_t1

0x954f,	// (0x00055908) area_fmrd2_visual_pane_t2

0x955f,	// (0x00055918) area_fmrd2_visual_pane_t3

0x0002,

0xfebc,	// (0x0005c275) area_fmrd2_visual_pane_t

0x956f,	// (0x00055928) area_fmrd2_info_pane_g1

0x9577,	// (0x00055930) area_fmrd2_info_pane_t1

0x9587,	// (0x00055940) area_fmrd2_info_pane_t2

0x9597,	// (0x00055950) area_fmrd2_info_pane_t3

0x95a7,	// (0x00055960) area_fmrd2_info_pane_t4

0x0003,

0xfec3,	// (0x0005c27c) area_fmrd2_info_pane_t

0x95b5,	// (0x0005596e) fmrd2_indi_pane_t1

0x95c5,	// (0x0005597e) fmrd2_indi_pane_t2

0x95d5,	// (0x0005598e) fmrd2_indi_pane_t3

0x0002,

0xfecc,	// (0x0005c285) fmrd2_indi_pane_t

0xea8f,	// (0x0005ae48) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xea8f,	// (0x0005ae48) list_single_fs_bigclock_indicator_pane_g5

0xeb36,	// (0x0005aeef) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xeb36,	// (0x0005aeef) list_single_fs_bigclock_indicator_pane_t5

0x8a61,	// (0x00054e1a) aid_cell_bcale_month_pane_ParamLimits

0x8a61,	// (0x00054e1a) aid_cell_bcale_month_pane

0x8a7f,	// (0x00054e38) bcale_month_pane_ParamLimits

0x8a7f,	// (0x00054e38) bcale_month_pane

0x8aa3,	// (0x00054e5c) bcale_preview_pane_ParamLimits

0x8aa3,	// (0x00054e5c) bcale_preview_pane

0x8ef5,	// (0x000552ae) list_single_fs_bigclock_pane_t1_ParamLimits

0x8f14,	// (0x000552cd) list_single_fs_bigclock_pane_t2_ParamLimits

0x8f14,	// (0x000552cd) list_single_fs_bigclock_pane_t2

0x0001,

0xfe4e,	// (0x0005c207) list_single_fs_bigclock_pane_t_ParamLimits

0xfe4e,	// (0x0005c207) list_single_fs_bigclock_pane_t

0x94f5,	// (0x000558ae) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfeb7,	// (0x0005c270) main_fs_bigclock_unlock_btn_pane_g

0x95e5,	// (0x0005599e) aid_dia3_key_size_ParamLimits

0x95e5,	// (0x0005599e) aid_dia3_key_size

0x95f4,	// (0x000559ad) aid_dia3_listrow_size_ParamLimits

0x95f4,	// (0x000559ad) aid_dia3_listrow_size

0x9609,	// (0x000559c2) dia3_keypad_fun_pane_ParamLimits

0x9609,	// (0x000559c2) dia3_keypad_fun_pane

0x9625,	// (0x000559de) dia3_keypad_num_pane_ParamLimits

0x9625,	// (0x000559de) dia3_keypad_num_pane

0x9640,	// (0x000559f9) dia3_listscroll_pane_ParamLimits

0x9640,	// (0x000559f9) dia3_listscroll_pane

0x9653,	// (0x00055a0c) dia3_numentry_pane_ParamLimits

0x9653,	// (0x00055a0c) dia3_numentry_pane

0x9667,	// (0x00055a20) dia3_list_pane

0x9672,	// (0x00055a2b) scroll_pane_cp12

0x9ca9,	// (0x00056062) bg_dia3_numentry_pane

0x967d,	// (0x00055a36) dia3_numentry_pane_t1

0x968c,	// (0x00055a45) cell_dia3_key_num_pane

0x9694,	// (0x00055a4d) cell_dia3_key0_fun_pane_ParamLimits

0x9694,	// (0x00055a4d) cell_dia3_key0_fun_pane

0x96a8,	// (0x00055a61) cell_dia3_key1_fun_pane_ParamLimits

0x96a8,	// (0x00055a61) cell_dia3_key1_fun_pane

0x96c0,	// (0x00055a79) dia3_listrow_pane

0xe77f,	// (0x0005ab38) bg_dia3_numentry_pane_g1

0x9ca9,	// (0x00056062) bg_button_pane_cp21

0x96d2,	// (0x00055a8b) cell_dia3_key_num_pane_t1

0x96e0,	// (0x00055a99) cell_dia3_key_num_pane_t2

0x96ef,	// (0x00055aa8) cell_dia3_key_num_pane_t3

0x96fe,	// (0x00055ab7) cell_dia3_key_num_pane_t4

0x0003,

0xfed3,	// (0x0005c28c) cell_dia3_key_num_pane_t

0x9ca9,	// (0x00056062) bg_button_pane_cp19

0x970d,	// (0x00055ac6) cell_dia3_key0_fun_pane_g1

0x9ca9,	// (0x00056062) bg_button_pane_cp20

0x9715,	// (0x00055ace) cell_dia3_key1_fun_pane_g1

0x971d,	// (0x00055ad6) area_left_week_number_pane

0x9729,	// (0x00055ae2) area_top_day_name_pane

0x973c,	// (0x00055af5) frame_month_view_pane

0x974f,	// (0x00055b08) grid_month_view_pane

0x975d,	// (0x00055b16) cell_top_day_name_pane_ParamLimits

0x975d,	// (0x00055b16) cell_top_day_name_pane

0x978a,	// (0x00055b43) cell_area_left_week_number_pane_ParamLimits

0x978a,	// (0x00055b43) cell_area_left_week_number_pane

0x979e,	// (0x00055b57) cell_month_view_pane_ParamLimits

0x979e,	// (0x00055b57) cell_month_view_pane

0x97cb,	// (0x00055b84) frm_month_g1

0x97d8,	// (0x00055b91) frm_month_g2

0x97eb,	// (0x00055ba4) frm_month_g3

0x97fe,	// (0x00055bb7) frm_month_g4

0x9811,	// (0x00055bca) frm_month_g5

0x9824,	// (0x00055bdd) frm_month_g6

0x9837,	// (0x00055bf0) frm_month_g7

0x984a,	// (0x00055c03) frm_month_g8

0x9857,	// (0x00055c10) frm_month_g9

0x9867,	// (0x00055c20) frm_month_g10

0x9877,	// (0x00055c30) frm_month_g11

0x9887,	// (0x00055c40) frm_month_g12

0x9899,	// (0x00055c52) frm_month_g13

0x98ab,	// (0x00055c64) frm_month_g14

0x98bf,	// (0x00055c78) frm_month_g15

0x98d3,	// (0x00055c8c) frm_month_g16

0x000f,

0xfedc,	// (0x0005c295) frm_month_g

0x98e7,	// (0x00055ca0) cell_top_day_name_pane_t1

0x98fa,	// (0x00055cb3) cell_area_left_week_number_pane_g1

0x9906,	// (0x00055cbf) cell_area_left_week_number_pane_t1

0xd4c1,	// (0x0005987a) cell_month_view_pane_g1

0x9919,	// (0x00055cd2) cell_month_view_pane_t1

0x9ca9,	// (0x00056062) main_fps_pane

0xed0b,	// (0x0005b0c4) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xed0b,	// (0x0005b0c4) cmail_ddmenu_btn02_pane_cp1

0xed27,	// (0x0005b0e0) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xed27,	// (0x0005b0e0) cmail_ddmenu_btn02_pane_cp2

0x8c94,	// (0x0005504d) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x8c94,	// (0x0005504d) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe01,	// (0x0005c1ba) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe01,	// (0x0005c1ba) cmail_ddmenu_btn02_pane_g

0x8cb2,	// (0x0005506b) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x8cb2,	// (0x0005506b) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe06,	// (0x0005c1bf) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe06,	// (0x0005c1bf) cmail_ddmenu_btn02_pane_t

0x992c,	// (0x00055ce5) fps_text_pane_ParamLimits

0x992c,	// (0x00055ce5) fps_text_pane

0x9943,	// (0x00055cfc) main_fps_pane_g1_ParamLimits

0x9943,	// (0x00055cfc) main_fps_pane_g1

0x995d,	// (0x00055d16) wait_bar_pane_cp010_ParamLimits

0x995d,	// (0x00055d16) wait_bar_pane_cp010

0x996e,	// (0x00055d27) fps_text_pane_t1_ParamLimits

0x996e,	// (0x00055d27) fps_text_pane_t1

0xe8d6,	// (0x0005ac8f) cam4_image_uncrop_pane_g1

0xe8df,	// (0x0005ac98) cam4_image_uncrop_pane_g2

0x67b6,	// (0x00052b6f) cam4_image_uncrop_pane_g3

0x67bf,	// (0x00052b78) cam4_image_uncrop_pane_g4

0x0003,

0xf8ee,	// (0x0005bca7) cam4_image_uncrop_pane_g

0x96c0,	// (0x00055a79) dia3_listrow_pane_ParamLimits

0x9ca9,	// (0x00056062) main_phob2_pane

0x88b7,	// (0x00054c70) cell_tport_appsw_pane_cp02_ParamLimits

0x88b7,	// (0x00054c70) cell_tport_appsw_pane_cp02

0x88cb,	// (0x00054c84) cell_tport_appsw_pane_cp03_ParamLimits

0x88cb,	// (0x00054c84) cell_tport_appsw_pane_cp03

0x9ca9,	// (0x00056062) phob2_contact_card_pane

0x9ca9,	// (0x00056062) phob2_listscroll_pane

0x9986,	// (0x00055d3f) phob2_list_pane

0x998e,	// (0x00055d47) scroll_pane_cp034

0x9996,	// (0x00055d4f) phob2_cc_data_pane_ParamLimits

0x9996,	// (0x00055d4f) phob2_cc_data_pane

0x99b5,	// (0x00055d6e) phob2_cc_listscroll_pane_ParamLimits

0x99b5,	// (0x00055d6e) phob2_cc_listscroll_pane

0x99d3,	// (0x00055d8c) list_double_large_graphic_phob2_pane_ParamLimits

0x99d3,	// (0x00055d8c) list_double_large_graphic_phob2_pane

0x99e5,	// (0x00055d9e) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x99e5,	// (0x00055d9e) list_double_large_graphic_phob2_pane_g1

0x10a3,	// (0x0004d45c) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x10a3,	// (0x0004d45c) list_double_large_graphic_phob2_pane_g2

0x0001,

0xfefd,	// (0x0005c2b6) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfefd,	// (0x0005c2b6) list_double_large_graphic_phob2_pane_g

0x10af,	// (0x0004d468) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x10af,	// (0x0004d468) list_double_large_graphic_phob2_pane_t1

0x10c4,	// (0x0004d47d) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x10c4,	// (0x0004d47d) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff02,	// (0x0005c2bb) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff02,	// (0x0005c2bb) list_double_large_graphic_phob2_pane_t

0x9ca9,	// (0x00056062) list_highlight_pane_cp024

0x99fb,	// (0x00055db4) phob2_cc_button_pane

0x9a03,	// (0x00055dbc) phob2_cc_data_pane_g1_ParamLimits

0x9a03,	// (0x00055dbc) phob2_cc_data_pane_g1

0x9a18,	// (0x00055dd1) phob2_cc_data_pane_g2_ParamLimits

0x9a18,	// (0x00055dd1) phob2_cc_data_pane_g2

0x0001,

0xff07,	// (0x0005c2c0) phob2_cc_data_pane_g_ParamLimits

0xff07,	// (0x0005c2c0) phob2_cc_data_pane_g

0x9a28,	// (0x00055de1) phob2_cc_data_pane_t1_ParamLimits

0x9a28,	// (0x00055de1) phob2_cc_data_pane_t1

0x9a40,	// (0x00055df9) phob2_cc_data_pane_t2_ParamLimits

0x9a40,	// (0x00055df9) phob2_cc_data_pane_t2

0x9a58,	// (0x00055e11) phob2_cc_data_pane_t3_ParamLimits

0x9a58,	// (0x00055e11) phob2_cc_data_pane_t3

0x0002,

0xff0c,	// (0x0005c2c5) phob2_cc_data_pane_t_ParamLimits

0xff0c,	// (0x0005c2c5) phob2_cc_data_pane_t

0x9a70,	// (0x00055e29) phob2_cc_list_pane_ParamLimits

0x9a70,	// (0x00055e29) phob2_cc_list_pane

0xdfb1,	// (0x0005a36a) scroll_pane_cp035_ParamLimits

0xdfb1,	// (0x0005a36a) scroll_pane_cp035

0xa939,	// (0x00056cf2) bg_button_pane_cp033

0x9a7c,	// (0x00055e35) phob2_cc_button_pane_g1

0x9a88,	// (0x00055e41) phob2_cc_button_pane_t1

0x9a9d,	// (0x00055e56) phob2_cc_button_pane_t2

0x0001,

0xff13,	// (0x0005c2cc) phob2_cc_button_pane_t

0x9aaf,	// (0x00055e68) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9aaf,	// (0x00055e68) list_double_large_graphic_phob2_cc_pane

0x9ac1,	// (0x00055e7a) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9ac1,	// (0x00055e7a) list_double_large_graphic_phob2_cc_pane_g1

0x10d6,	// (0x0004d48f) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x10d6,	// (0x0004d48f) list_double_large_graphic_phob2_cc_pane_g2

0x10e2,	// (0x0004d49b) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x10e2,	// (0x0004d49b) list_double_large_graphic_phob2_cc_pane_g3

0x10ee,	// (0x0004d4a7) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x10ee,	// (0x0004d4a7) list_double_large_graphic_phob2_cc_pane_g4

0xa91f,	// (0x00056cd8) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xa91f,	// (0x00056cd8) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff18,	// (0x0005c2d1) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff18,	// (0x0005c2d1) list_double_large_graphic_phob2_cc_pane_g

0x10fa,	// (0x0004d4b3) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x10fa,	// (0x0004d4b3) list_double_large_graphic_phob2_cc_pane_t1

0x1123,	// (0x0004d4dc) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x1123,	// (0x0004d4dc) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff23,	// (0x0005c2dc) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff23,	// (0x0005c2dc) list_double_large_graphic_phob2_cc_pane_t

0x9acd,	// (0x00055e86) list_highlight_pane_cp025_ParamLimits

0x9acd,	// (0x00055e86) list_highlight_pane_cp025

0xa939,	// (0x00056cf2) bg_button_pane_cp033_ParamLimits

0x9a7c,	// (0x00055e35) phob2_cc_button_pane_g1_ParamLimits

0x9a88,	// (0x00055e41) phob2_cc_button_pane_t1_ParamLimits

0x9a9d,	// (0x00055e56) phob2_cc_button_pane_t2_ParamLimits

0xff13,	// (0x0005c2cc) phob2_cc_button_pane_t_ParamLimits

0x1395,	// (0x0004d74e) popup_wgtman_window

0xdddb,	// (0x0005a194) scroll_pane_cp038

0x93e2,	// (0x0005579b) wgtman_btn_pane_cp_01_ParamLimits

0x93e2,	// (0x0005579b) wgtman_btn_pane_cp_01

0x9adb,	// (0x00055e94) wgtman_content_pane

0x9ae4,	// (0x00055e9d) wgtman_heading_pane

0x9ca9,	// (0x00056062) bg_heading_pane_cp02

0x9aed,	// (0x00055ea6) wgtman_heading_pane_g1

0x9af5,	// (0x00055eae) wgtman_heading_pane_t1

0x9b03,	// (0x00055ebc) scroll_pane_cp036

0x9b0b,	// (0x00055ec4) wgtman_list_pane

0x9b13,	// (0x00055ecc) wgtman_list_pane_t1_ParamLimits

0x9b13,	// (0x00055ecc) wgtman_list_pane_t1

0xa4b2,	// (0x0005686b) cam4_grid_pane

0x0667,	// (0x0004ca20) bg_button_pane_cp015_ParamLimits

0x743d,	// (0x000537f6) bg_button_pane_cp016_ParamLimits

0x7450,	// (0x00053809) bg_button_pane_cp017_ParamLimits

0x06ad,	// (0x0004ca66) popup_vitu2_query_window_g3_ParamLimits

0x06ad,	// (0x0004ca66) popup_vitu2_query_window_g3

0x0728,	// (0x0004cae1) popup_vitu2_query_window_t6_ParamLimits

0x0728,	// (0x0004cae1) popup_vitu2_query_window_t6

0x0753,	// (0x0004cb0c) popup_vitu2_query_window_t7_ParamLimits

0x0753,	// (0x0004cb0c) popup_vitu2_query_window_t7

0xe8d6,	// (0x0005ac8f) cam4_grid_pane_g1

0xe8df,	// (0x0005ac98) cam4_grid_pane_g2

0x9b2d,	// (0x00055ee6) cam4_grid_pane_g3

0x9b36,	// (0x00055eef) cam4_grid_pane_g4

0x0003,

0xff28,	// (0x0005c2e1) cam4_grid_pane_g

0x2281,	// (0x0004e63a) aid_placing_vt_slider_lsc_ParamLimits

0x258c,	// (0x0004e945) vidtel_button_pane_ParamLimits

0x258c,	// (0x0004e945) vidtel_button_pane

0x9b41,	// (0x00055efa) bg_button_pane_cp034

0x9b4b,	// (0x00055f04) vidtel_button_pane_g1

0x9b53,	// (0x00055f0c) vidtel_button_pane_t1

0xdef8,	// (0x0005a2b1) aid_size_vtel_slider_touch

0xdfb1,	// (0x0005a36a) scroll_pane_cp039

0xe7bd,	// (0x0005ab76) ncim_query_button_pane_cp01_ParamLimits

0xe7dc,	// (0x0005ab95) ncimui_query_pane_g1_ParamLimits

0xa939,	// (0x00056cf2) input_focus_pane_cp012_ParamLimits

0xe801,	// (0x0005abba) ncim_query_entry_pane_t1_ParamLimits

0xdfb1,	// (0x0005a36a) scroll_pane_cp039_ParamLimits

0xb8e7,	// (0x00057ca0) navi_pane_bcale_mc_g1

0xb8ef,	// (0x00057ca8) navi_pane_bcale_mc_t1

0xed70,	// (0x0005b129) main_sp_fs_email_pane_g1

0xed7c,	// (0x0005b135) main_sp_fs_email_pane_g2

0x0001,

0xfce5,	// (0x0005c09e) main_sp_fs_email_pane_g

0xefba,	// (0x0005b373) list_single_cale_mrui_row_pane_g3_ParamLimits

0xefba,	// (0x0005b373) list_single_cale_mrui_row_pane_g3

0x0ff8,	// (0x0004d3b1) list_single_recal_day_pane_g5_event_pane

0xa8ea,	// (0x00056ca3) list_single_recal_day_pane_g7

0x9b61,	// (0x00055f1a) list_recal_day_event_pane_cp01

0x9b6a,	// (0x00055f23) list_recal_vselct_arw_lo_pane_cp01

0x9b72,	// (0x00055f2b) list_recal_vselct_arw_up_pane_cp01

0x9b7a,	// (0x00055f33) list_recal_vselct_pane_cp01

0xdf08,	// (0x0005a2c1) list_recal_day_event_pane_cp01_g1

0xa92b,	// (0x00056ce4) list_recal_day_event_pane_cp01_t1

0xa8f2,	// (0x00056cab) list_single_recal_day_pane_t1_ParamLimits

0xa904,	// (0x00056cbd) list_single_recal_day_pane_t2_ParamLimits

0xfe16,	// (0x0005c1cf) list_single_recal_day_pane_t_ParamLimits

0xad4d,	// (0x00057106) bg_notes_pane_ParamLimits

0xadf0,	// (0x000571a9) list_notes_pane_ParamLimits

0x16de,	// (0x0004da97) scroll_pane_cp06_ParamLimits

0xae12,	// (0x000571cb) main_notes_pane_ParamLimits

0x9ca9,	// (0x00056062) main_welc_pane

0x9b84,	// (0x00055f3d) main_welc_body_pane_ParamLimits

0x9b84,	// (0x00055f3d) main_welc_body_pane

0x9ba2,	// (0x00055f5b) main_welc_opti_pane_ParamLimits

0x9ba2,	// (0x00055f5b) main_welc_opti_pane

0x9be7,	// (0x00055fa0) main_welc_pane_t1_ParamLimits

0x9be7,	// (0x00055fa0) main_welc_pane_t1

0x9c05,	// (0x00055fbe) main_welc_body_row_pane_ParamLimits

0x9c05,	// (0x00055fbe) main_welc_body_row_pane

0xe8c8,	// (0x0005ac81) main_welc_opti_row_pane_ParamLimits

0xe8c8,	// (0x0005ac81) main_welc_opti_row_pane

0x9c19,	// (0x00055fd2) main_welc_opti_row_pane_g1

0x9c21,	// (0x00055fda) main_welc_opti_row_pane_t1

0x9c31,	// (0x00055fea) main_welc_body_row_pane_t1

0x919d,	// (0x00055556) popup_notif_wgt_heading_pane

0x91c7,	// (0x00055580) aid_size_list_notif_wgt_del_ParamLimits

0x91d4,	// (0x0005558d) list_notif_wgt_row_pane_g1_ParamLimits

0x91e0,	// (0x00055599) list_notif_wgt_row_pane_g2_ParamLimits

0x91ec,	// (0x000555a5) list_notif_wgt_row_pane_g3_ParamLimits

0xfe7d,	// (0x0005c236) list_notif_wgt_row_pane_g_ParamLimits

0x91f9,	// (0x000555b2) list_notif_wgt_row_pane_t1_ParamLimits

0x920e,	// (0x000555c7) list_notif_wgt_row_pane_t2_ParamLimits

0x9220,	// (0x000555d9) list_notif_wgt_row_pane_t3_ParamLimits

0xfe84,	// (0x0005c23d) list_notif_wgt_row_pane_t_ParamLimits

0x949c,	// (0x00055855) listrow_wgtman_pane_g1_ParamLimits

0x94a9,	// (0x00055862) listrow_wgtman_pane_g2_ParamLimits

0xfead,	// (0x0005c266) listrow_wgtman_pane_g_ParamLimits

0x1053,	// (0x0004d40c) listrow_wgtman_pane_t1_ParamLimits

0x106b,	// (0x0004d424) listrow_wgtman_pane_t2_ParamLimits

0xfeb2,	// (0x0005c26b) listrow_wgtman_pane_t_ParamLimits

0x1091,	// (0x0004d44a) wait_bar_pane_cp09_ParamLimits

0x9ca9,	// (0x00056062) bg_popup_heading_pane_cp02

0x9c40,	// (0x00055ff9) popup_notif_wgt_heading_pane_g1

0x9c48,	// (0x00056001) popup_notif_wgt_heading_pane_t1

0x9ca9,	// (0x00056062) main_vids_pane

0x9ca9,	// (0x00056062) vids_listscroll_pane

0x9c56,	// (0x0005600f) scroll_pane_cp040

0x9ca9,	// (0x00056062) vids_list_pane

0x9c61,	// (0x0005601a) vids_list_double_pane_ParamLimits

0x9c61,	// (0x0005601a) vids_list_double_pane

0x9c72,	// (0x0005602b) vids_list_double_pane_g1

0x9c7b,	// (0x00056034) vids_list_double_pane_t1

0x9c8b,	// (0x00056044) vids_list_double_pane_t2

0x0001,

0xff36,	// (0x0005c2ef) vids_list_double_pane_t

0xa939,	// (0x00056cf2) main_ncimui_pane_ParamLimits

0x7fcf,	// (0x00054388) main_ncimui_pane_g1_ParamLimits

0x7fdb,	// (0x00054394) main_ncimui_pane_g2_ParamLimits

0x7fdb,	// (0x00054394) main_ncimui_pane_g2

0x0001,

0xfbea,	// (0x0005bfa3) main_ncimui_pane_g_ParamLimits

0xfbea,	// (0x0005bfa3) main_ncimui_pane_g

0x9bbd,	// (0x00055f76) main_welc_pane_g1_ParamLimits

0x9bbd,	// (0x00055f76) main_welc_pane_g1

0x9bd2,	// (0x00055f8b) main_welc_pane_g2_ParamLimits

0x9bd2,	// (0x00055f8b) main_welc_pane_g2

0x0001,

0xff31,	// (0x0005c2ea) main_welc_pane_g_ParamLimits

0xff31,	// (0x0005c2ea) main_welc_pane_g

0xad4d,	// (0x00057106) listscroll_mce_pane_ParamLimits

0xba3c,	// (0x00057df5) wait_bar_pane_cp10

0xce35,	// (0x000591ee) main_cale_day_pane_ParamLimits

0xce35,	// (0x000591ee) main_cale_week_pane_ParamLimits

0xad4d,	// (0x00057106) main_messa_pane_ParamLimits

0x5af0,	// (0x00051ea9) main_clock2_btn_pane_ParamLimits

0x5af0,	// (0x00051ea9) main_clock2_btn_pane

0xd669,	// (0x00059a22) main_clock2_btn_pane_cp01_ParamLimits

0xd669,	// (0x00059a22) main_clock2_btn_pane_cp01

0xef8b,	// (0x0005b344) list_cale_mrui_pane_ParamLimits

0x9279,	// (0x00055632) main_cf0_pane_g2

0x0001,

0xfe8b,	// (0x0005c244) main_cf0_pane_g

0x971d,	// (0x00055ad6) area_left_week_number_pane_ParamLimits

0x9729,	// (0x00055ae2) area_top_day_name_pane_ParamLimits

0x973c,	// (0x00055af5) frame_month_view_pane_ParamLimits

0x974f,	// (0x00055b08) grid_month_view_pane_ParamLimits

0x97cb,	// (0x00055b84) frm_month_g1_ParamLimits

0x97d8,	// (0x00055b91) frm_month_g2_ParamLimits

0x97eb,	// (0x00055ba4) frm_month_g3_ParamLimits

0x97fe,	// (0x00055bb7) frm_month_g4_ParamLimits

0x9811,	// (0x00055bca) frm_month_g5_ParamLimits

0x9824,	// (0x00055bdd) frm_month_g6_ParamLimits

0x9837,	// (0x00055bf0) frm_month_g7_ParamLimits

0x984a,	// (0x00055c03) frm_month_g8_ParamLimits

0x9857,	// (0x00055c10) frm_month_g9_ParamLimits

0x9867,	// (0x00055c20) frm_month_g10_ParamLimits

0x9877,	// (0x00055c30) frm_month_g11_ParamLimits

0x9887,	// (0x00055c40) frm_month_g12_ParamLimits

0x9899,	// (0x00055c52) frm_month_g13_ParamLimits

0x98ab,	// (0x00055c64) frm_month_g14_ParamLimits

0x98bf,	// (0x00055c78) frm_month_g15_ParamLimits

0x98d3,	// (0x00055c8c) frm_month_g16_ParamLimits

0xfedc,	// (0x0005c295) frm_month_g_ParamLimits

0x98e7,	// (0x00055ca0) cell_top_day_name_pane_t1_ParamLimits

0x98fa,	// (0x00055cb3) cell_area_left_week_number_pane_g1_ParamLimits

0x9906,	// (0x00055cbf) cell_area_left_week_number_pane_t1_ParamLimits

0xd4c1,	// (0x0005987a) cell_month_view_pane_g1_ParamLimits

0x9919,	// (0x00055cd2) cell_month_view_pane_t1_ParamLimits

0xad45,	// (0x000570fe) main_clock2_btn_pane_g1

0x9c9b,	// (0x00056054) main_clock2_btn_pane_t1

0xa939,	// (0x00056cf2) listscroll_cmail_pane_ParamLimits

0xed70,	// (0x0005b129) main_sp_fs_email_pane_g1_ParamLimits

0xed7c,	// (0x0005b135) main_sp_fs_email_pane_g2_ParamLimits

0xfce5,	// (0x0005c09e) main_sp_fs_email_pane_g_ParamLimits

0xf09a,	// (0x0005b453) list_recal_day_pane_ParamLimits

0xf0ab,	// (0x0005b464) mian_recal_day_pane_t1

0x0bc5,	// (0x0004cf7e) list_single_dyc_row_text_pane_t4_ParamLimits

0x0bc5,	// (0x0004cf7e) list_single_dyc_row_text_pane_t4

0x0c0e,	// (0x0004cfc7) list_single_dyc_row_text_pane_t5_ParamLimits

0x0c0e,	// (0x0004cfc7) list_single_dyc_row_text_pane_t5

0xa6ab,	// (0x00056a64) list_single_dyc_row_text_pane_t6_ParamLimits

0xa6ab,	// (0x00056a64) list_single_dyc_row_text_pane_t6

0x322e,	// (0x0004f5e7) aid_mgn_list_cale_time_pane

0xa939,	// (0x00056cf2) main_gallery2_pane_ParamLimits
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
	};

} // end of namespace AknLayoutScalable_Elaf_phl_apps_qhd_lsc_tch_Small
