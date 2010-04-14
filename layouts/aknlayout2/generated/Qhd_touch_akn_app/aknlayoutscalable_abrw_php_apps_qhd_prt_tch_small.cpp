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

#include "aknlayoutscalable_abrw_php_apps_qhd_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch[]; }

namespace AknLayoutScalable_Abrw_php_apps_qhd_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x0005bcd8 };

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
0x0ec5,	// (0x0005cb9d) Screen

0x0ed1,	// (0x0005cba9) application_window

0x0f2d,	// (0x0005cc05) area_bottom_pane_ParamLimits

0x0f2d,	// (0x0005cc05) area_bottom_pane

0x0f86,	// (0x0005cc5e) area_top_pane_ParamLimits

0x0f86,	// (0x0005cc5e) area_top_pane

0x0fea,	// (0x0005ccc2) call_video_uplink_pane_ParamLimits

0x0fea,	// (0x0005ccc2) call_video_uplink_pane

0x1029,	// (0x0005cd01) main_pane_ParamLimits

0x1029,	// (0x0005cd01) main_pane

0xc869,	// (0x00068541) context_pane

0x4634,	// (0x0006030c) navi_pane

0x465a,	// (0x00060332) popup_cale_events_window_ParamLimits

0x465a,	// (0x00060332) popup_cale_events_window

0xc87c,	// (0x00068554) popup_mup_playback_window

0x4672,	// (0x0006034a) signal_pane

0xa831,	// (0x00066509) main_browser_pane

0xb463,	// (0x0006713b) main_burst_pane

0x44b2,	// (0x0006018a) main_calc_pane

0xc84f,	// (0x00068527) main_cale_day_pane

0x178c,	// (0x0005d464) main_cale_month_pane

0xc84f,	// (0x00068527) main_cale_week_pane

0xb463,	// (0x0006713b) main_call_pane

0xa511,	// (0x000661e9) main_call_poc_pane

0xb463,	// (0x0006713b) main_camera_pane

0xb463,	// (0x0006713b) main_chi_dic_pane

0xb1e0,	// (0x00066eb8) main_clock_pane

0xa511,	// (0x000661e9) main_fmradio_pane

0xb463,	// (0x0006713b) main_graph_messa_pane

0xa511,	// (0x000661e9) main_help_pane

0xa831,	// (0x00066509) main_im_pane

0xa76c,	// (0x00066444) main_image_pane_ParamLimits

0xa76c,	// (0x00066444) main_image_pane

0xa511,	// (0x000661e9) main_location2_pane

0xb463,	// (0x0006713b) main_location_pane

0xa76c,	// (0x00066444) main_messa_pane

0xa511,	// (0x000661e9) main_mp2_pane

0xb463,	// (0x0006713b) main_mp_pane

0xa511,	// (0x000661e9) main_msg_pane

0xa511,	// (0x000661e9) main_mup_eq_pane

0xa511,	// (0x000661e9) main_mup_pane

0xa831,	// (0x00066509) main_notes_pane

0xa511,	// (0x000661e9) main_pec_pane

0xa511,	// (0x000661e9) main_phob_pane

0xa511,	// (0x000661e9) main_pinb_pane

0xa511,	// (0x000661e9) main_postcard_pane

0xa511,	// (0x000661e9) main_qdial_pane

0xb463,	// (0x0006713b) main_skin_pane

0xa511,	// (0x000661e9) main_smil2_pane

0xb463,	// (0x0006713b) main_smil_pane

0xb463,	// (0x0006713b) main_video_pane

0xb463,	// (0x0006713b) main_video_tele_pane

0xa76c,	// (0x00066444) main_viewer_pane_ParamLimits

0xa76c,	// (0x00066444) main_viewer_pane

0xb463,	// (0x0006713b) main_vorec_pane

0x44fe,	// (0x000601d6) popup_blid_sat_info_window_ParamLimits

0x44fe,	// (0x000601d6) popup_blid_sat_info_window

0x451e,	// (0x000601f6) popup_dyc_status_message_window_ParamLimits

0x451e,	// (0x000601f6) popup_dyc_status_message_window

0x452e,	// (0x00060206) popup_grid_large_graphic_window_ParamLimits

0x452e,	// (0x00060206) popup_grid_large_graphic_window

0x45bf,	// (0x00060297) popup_loc_request_window_ParamLimits

0x45bf,	// (0x00060297) popup_loc_request_window

0x460c,	// (0x000602e4) popup_wml_address_window_ParamLimits

0x460c,	// (0x000602e4) popup_wml_address_window

0x438a,	// (0x00060062) call_muted_g1

0x404c,	// (0x0005fd24) popup_call_audio_conf_window_ParamLimits

0x404c,	// (0x0005fd24) popup_call_audio_conf_window

0x439a,	// (0x00060072) popup_call_audio_first_window_ParamLimits

0x439a,	// (0x00060072) popup_call_audio_first_window

0x43da,	// (0x000600b2) popup_call_audio_in_window_ParamLimits

0x43da,	// (0x000600b2) popup_call_audio_in_window

0x43fe,	// (0x000600d6) popup_call_audio_out_window_ParamLimits

0x43fe,	// (0x000600d6) popup_call_audio_out_window

0x4420,	// (0x000600f8) popup_call_audio_second_window_ParamLimits

0x4420,	// (0x000600f8) popup_call_audio_second_window

0x4450,	// (0x00060128) popup_call_audio_wait_window_ParamLimits

0x4450,	// (0x00060128) popup_call_audio_wait_window

0x4471,	// (0x00060149) popup_number_entry_window_ParamLimits

0x4471,	// (0x00060149) popup_number_entry_window

0x9c59,	// (0x00065931) bg_popup_call_pane_cp05_ParamLimits

0x9c59,	// (0x00065931) bg_popup_call_pane_cp05

0x9c79,	// (0x00065951) popup_number_entry_window_t1

0x9c8c,	// (0x00065964) popup_number_entry_window_t2

0x9c9e,	// (0x00065976) popup_number_entry_window_t3

0x0003,

0xf0c6,	// (0x0006ad9e) popup_number_entry_window_t

0x9cb0,	// (0x00065988) text_title_cp2

0x9cc3,	// (0x0006599b) bg_popup_call_pane_cp_ParamLimits

0x9cc3,	// (0x0006599b) bg_popup_call_pane_cp

0x9cd1,	// (0x000659a9) call_thumbnail_pane

0x9cd9,	// (0x000659b1) popup_call_audio_in_window_g1_ParamLimits

0x9cd9,	// (0x000659b1) popup_call_audio_in_window_g1

0x9ce5,	// (0x000659bd) popup_call_audio_in_window_g2_ParamLimits

0x9ce5,	// (0x000659bd) popup_call_audio_in_window_g2

0x9cf1,	// (0x000659c9) popup_call_audio_in_window_g3_ParamLimits

0x9cf1,	// (0x000659c9) popup_call_audio_in_window_g3

0x0002,

0xf0cf,	// (0x0006ada7) popup_call_audio_in_window_g_ParamLimits

0xf0cf,	// (0x0006ada7) popup_call_audio_in_window_g

0x9cfd,	// (0x000659d5) popup_call_audio_in_window_t1_ParamLimits

0x9cfd,	// (0x000659d5) popup_call_audio_in_window_t1

0x9d19,	// (0x000659f1) popup_call_audio_in_window_t2_ParamLimits

0x9d19,	// (0x000659f1) popup_call_audio_in_window_t2

0x9d35,	// (0x00065a0d) popup_call_audio_in_window_t3_ParamLimits

0x9d35,	// (0x00065a0d) popup_call_audio_in_window_t3

0x0002,

0xf0d6,	// (0x0006adae) popup_call_audio_in_window_t_ParamLimits

0xf0d6,	// (0x0006adae) popup_call_audio_in_window_t

0x9cc3,	// (0x0006599b) bg_popup_call_pane_cp01_ParamLimits

0x9cc3,	// (0x0006599b) bg_popup_call_pane_cp01

0x9cd1,	// (0x000659a9) call_thumbnail_pane_cp02

0x9d48,	// (0x00065a20) call_type_pane_cp022

0x9d50,	// (0x00065a28) popup_call_audio_out_window_g1_ParamLimits

0x9d50,	// (0x00065a28) popup_call_audio_out_window_g1

0x9d62,	// (0x00065a3a) popup_call_audio_out_window_g2_ParamLimits

0x9d62,	// (0x00065a3a) popup_call_audio_out_window_g2

0x9d6e,	// (0x00065a46) popup_call_audio_out_window_g3_ParamLimits

0x9d6e,	// (0x00065a46) popup_call_audio_out_window_g3

0x0002,

0xf0dd,	// (0x0006adb5) popup_call_audio_out_window_g_ParamLimits

0xf0dd,	// (0x0006adb5) popup_call_audio_out_window_g

0x9d80,	// (0x00065a58) popup_call_audio_out_window_t1_ParamLimits

0x9d80,	// (0x00065a58) popup_call_audio_out_window_t1

0x9d98,	// (0x00065a70) popup_call_audio_out_window_t2_ParamLimits

0x9d98,	// (0x00065a70) popup_call_audio_out_window_t2

0x0001,

0xf0e4,	// (0x0006adbc) popup_call_audio_out_window_t_ParamLimits

0xf0e4,	// (0x0006adbc) popup_call_audio_out_window_t

0x9dad,	// (0x00065a85) bg_popup_call_pane_ParamLimits

0x9dad,	// (0x00065a85) bg_popup_call_pane

0x1242,	// (0x0005cf1a) call_thumbnail_pane_cp_ParamLimits

0x1242,	// (0x0005cf1a) call_thumbnail_pane_cp

0x9e31,	// (0x00065b09) call_type_pane_cp01_ParamLimits

0x9e31,	// (0x00065b09) call_type_pane_cp01

0x9e75,	// (0x00065b4d) popup_call_audio_first_window_g1_ParamLimits

0x9e75,	// (0x00065b4d) popup_call_audio_first_window_g1

0x9ec1,	// (0x00065b99) popup_call_audio_first_window_g2_ParamLimits

0x9ec1,	// (0x00065b99) popup_call_audio_first_window_g2

0x0001,

0xf0e9,	// (0x0006adc1) popup_call_audio_first_window_g_ParamLimits

0xf0e9,	// (0x0006adc1) popup_call_audio_first_window_g

0x9f05,	// (0x00065bdd) popup_call_audio_first_window_t1_ParamLimits

0x9f05,	// (0x00065bdd) popup_call_audio_first_window_t1

0x9fb1,	// (0x00065c89) popup_call_audio_first_window_t4_ParamLimits

0x9fb1,	// (0x00065c89) popup_call_audio_first_window_t4

0xa49f,	// (0x00066177) popup_call_audio_first_window_t5_ParamLimits

0xa49f,	// (0x00066177) popup_call_audio_first_window_t5

0x0002,

0xf0ee,	// (0x0006adc6) popup_call_audio_first_window_t_ParamLimits

0xf0ee,	// (0x0006adc6) popup_call_audio_first_window_t

0xa511,	// (0x000661e9) bg_popup_call_pane_cp02

0xa51b,	// (0x000661f3) call_type_pane_cp023

0xa523,	// (0x000661fb) popup_call_audio_wait_window_g1

0xa52b,	// (0x00066203) popup_call_audio_wait_window_g2

0x0001,

0xf0f5,	// (0x0006adcd) popup_call_audio_wait_window_g

0xa533,	// (0x0006620b) popup_call_audio_wait_window_t3

0xa541,	// (0x00066219) bg_popup_call_pane_cp03_ParamLimits

0xa541,	// (0x00066219) bg_popup_call_pane_cp03

0xa5a1,	// (0x00066279) call_thumbnail_pane_cp011_ParamLimits

0xa5a1,	// (0x00066279) call_thumbnail_pane_cp011

0xa5ad,	// (0x00066285) call_type_pane_cp034_ParamLimits

0xa5ad,	// (0x00066285) call_type_pane_cp034

0xa5e9,	// (0x000662c1) popup_call_audio_second_window_g1_ParamLimits

0xa5e9,	// (0x000662c1) popup_call_audio_second_window_g1

0xa625,	// (0x000662fd) popup_call_audio_second_window_g2_ParamLimits

0xa625,	// (0x000662fd) popup_call_audio_second_window_g2

0x0001,

0xf0fa,	// (0x0006add2) popup_call_audio_second_window_g_ParamLimits

0xf0fa,	// (0x0006add2) popup_call_audio_second_window_g

0xa661,	// (0x00066339) popup_call_audio_second_window_t1_ParamLimits

0xa661,	// (0x00066339) popup_call_audio_second_window_t1

0xa6e2,	// (0x000663ba) popup_call_audio_second_window_t2_ParamLimits

0xa6e2,	// (0x000663ba) popup_call_audio_second_window_t2

0xa718,	// (0x000663f0) popup_call_audio_second_window_t3_ParamLimits

0xa718,	// (0x000663f0) popup_call_audio_second_window_t3

0x0002,

0xf0ff,	// (0x0006add7) popup_call_audio_second_window_t_ParamLimits

0xf0ff,	// (0x0006add7) popup_call_audio_second_window_t

0xa511,	// (0x000661e9) bg_popup_call_pane_cp04

0xa74e,	// (0x00066426) list_conf_pane

0xa756,	// (0x0006642e) popup_call_audio_conf_window_t1

0xa764,	// (0x0006643c) call_thumbnail_pane_g1

0xa76c,	// (0x00066444) bg_pinb_pane_ParamLimits

0xa76c,	// (0x00066444) bg_pinb_pane

0xa77a,	// (0x00066452) find_pinb_pane

0xa783,	// (0x0006645b) listscroll_pinb_pane_ParamLimits

0xa783,	// (0x0006645b) listscroll_pinb_pane

0xa792,	// (0x0006646a) pinb_bg_pane_g1

0x1266,	// (0x0005cf3e) pinb_bg_pane_g2

0x1272,	// (0x0005cf4a) pinb_bg_pane_g3

0x127e,	// (0x0005cf56) pinb_bg_pane_g4

0x128a,	// (0x0005cf62) pinb_bg_pane_g5

0x1296,	// (0x0005cf6e) pinb_bg_pane_g6

0x12a1,	// (0x0005cf79) pinb_bg_pane_g7

0x12ac,	// (0x0005cf84) pinb_bg_pane_g8

0x12b7,	// (0x0005cf8f) pinb_bg_pane_g9

0x12c1,	// (0x0005cf99) pinb_bg_pane_g10

0x0009,

0xf106,	// (0x0006adde) pinb_bg_pane_g

0x12de,	// (0x0005cfb6) grid_pinb_pane

0x12e9,	// (0x0005cfc1) list_pinb_pane

0x12f4,	// (0x0005cfcc) scroll_pane_cp01_ParamLimits

0x12f4,	// (0x0005cfcc) scroll_pane_cp01

0xa79c,	// (0x00066474) find_pinb_pane_g1_ParamLimits

0xa79c,	// (0x00066474) find_pinb_pane_g1

0xa7b4,	// (0x0006648c) find_pinb_pane_t1

0xa7c6,	// (0x0006649e) find_pinb_pane_t2

0x0001,

0xf120,	// (0x0006adf8) find_pinb_pane_t

0xa7db,	// (0x000664b3) input_focus_pane_cp01_ParamLimits

0xa7db,	// (0x000664b3) input_focus_pane_cp01

0x1306,	// (0x0005cfde) cell_pinb_pane_ParamLimits

0x1306,	// (0x0005cfde) cell_pinb_pane

0x132e,	// (0x0005d006) cell_pinb_pane_g1_ParamLimits

0x132e,	// (0x0005d006) cell_pinb_pane_g1

0x1343,	// (0x0005d01b) cell_pinb_pane_g2_ParamLimits

0x1343,	// (0x0005d01b) cell_pinb_pane_g2

0xa7e7,	// (0x000664bf) cell_pinb_pane_g3_ParamLimits

0xa7e7,	// (0x000664bf) cell_pinb_pane_g3

0x0002,

0xf125,	// (0x0006adfd) cell_pinb_pane_g_ParamLimits

0xf125,	// (0x0006adfd) cell_pinb_pane_g

0xa511,	// (0x000661e9) grid_highlight_pane_cp01

0x134f,	// (0x0005d027) list_pinb_item_pane_ParamLimits

0x134f,	// (0x0005d027) list_pinb_item_pane

0xa511,	// (0x000661e9) list_highlight_pane_cp02

0x1375,	// (0x0005d04d) list_pinb_item_pane_g1_ParamLimits

0x1375,	// (0x0005d04d) list_pinb_item_pane_g1

0x1382,	// (0x0005d05a) list_pinb_item_pane_g2_ParamLimits

0x1382,	// (0x0005d05a) list_pinb_item_pane_g2

0x138e,	// (0x0005d066) list_pinb_item_pane_g3_ParamLimits

0x138e,	// (0x0005d066) list_pinb_item_pane_g3

0x139f,	// (0x0005d077) list_pinb_item_pane_g4_ParamLimits

0x139f,	// (0x0005d077) list_pinb_item_pane_g4

0x0003,

0xf12c,	// (0x0006ae04) list_pinb_item_pane_g_ParamLimits

0xf12c,	// (0x0006ae04) list_pinb_item_pane_g

0x13ab,	// (0x0005d083) list_pinb_item_pane_t1_ParamLimits

0x13ab,	// (0x0005d083) list_pinb_item_pane_t1

0x13dc,	// (0x0005d0b4) calc_display_pane

0x13fa,	// (0x0005d0d2) calc_paper_pane

0x1416,	// (0x0005d0ee) grid_calc_pane

0xa511,	// (0x000661e9) bg_list_pane_cp01

0x1442,	// (0x0005d11a) clock_g1

0x144a,	// (0x0005d122) clock_g2

0x0001,

0xf135,	// (0x0006ae0d) clock_g

0x1454,	// (0x0005d12c) clock_t1_ParamLimits

0x1454,	// (0x0005d12c) clock_t1

0x1469,	// (0x0005d141) clock_t2_ParamLimits

0x1469,	// (0x0005d141) clock_t2

0x147b,	// (0x0005d153) clock_t3_ParamLimits

0x147b,	// (0x0005d153) clock_t3

0x148d,	// (0x0005d165) clock_t4_ParamLimits

0x148d,	// (0x0005d165) clock_t4

0x149f,	// (0x0005d177) clock_t5_ParamLimits

0x149f,	// (0x0005d177) clock_t5

0x14b4,	// (0x0005d18c) clock_t6_ParamLimits

0x14b4,	// (0x0005d18c) clock_t6

0x14c6,	// (0x0005d19e) clock_t7_ParamLimits

0x14c6,	// (0x0005d19e) clock_t7

0x14d8,	// (0x0005d1b0) clock_t8_ParamLimits

0x14d8,	// (0x0005d1b0) clock_t8

0x14ee,	// (0x0005d1c6) clock_t9_ParamLimits

0x14ee,	// (0x0005d1c6) clock_t9

0x0008,

0xf13a,	// (0x0006ae12) clock_t_ParamLimits

0xf13a,	// (0x0006ae12) clock_t

0xa7f3,	// (0x000664cb) popup_clock_analogue_window_cp02

0xa7f3,	// (0x000664cb) popup_clock_digital_window_cp01

0xa7fb,	// (0x000664d3) listscroll_help_pane

0xa511,	// (0x000661e9) phob_pre_status_pane

0xa805,	// (0x000664dd) grid_qdial_pane

0xa76c,	// (0x00066444) listscroll_mce_pane

0xa76c,	// (0x00066444) bg_notes_pane

0xa80f,	// (0x000664e7) list_notes_pane

0x1504,	// (0x0005d1dc) scroll_pane_cp06

0xa81d,	// (0x000664f5) bg_calc_paper_pane

0x1513,	// (0x0005d1eb) list_calc_pane

0xa831,	// (0x00066509) bg_calc_display_pane

0x152d,	// (0x0005d205) calc_display_pane_t1

0x1542,	// (0x0005d21a) calc_display_pane_t2

0x1557,	// (0x0005d22f) calc_display_pane_t3

0x0002,

0xf14d,	// (0x0006ae25) calc_display_pane_t

0x1569,	// (0x0005d241) cell_calc_pane_ParamLimits

0x1569,	// (0x0005d241) cell_calc_pane

0xa83d,	// (0x00066515) bg_calc_paper_pane_g1

0xa855,	// (0x0006652d) bg_calc_paper_pane_g2

0xa849,	// (0x00066521) bg_calc_paper_pane_g3

0xa861,	// (0x00066539) bg_calc_paper_pane_g4

0xa86d,	// (0x00066545) bg_calc_paper_pane_g5

0x1596,	// (0x0005d26e) bg_calc_paper_pane_g6

0x15a7,	// (0x0005d27f) bg_calc_paper_pane_g7

0x15b8,	// (0x0005d290) bg_calc_paper_pane_g8

0x0007,

0xf154,	// (0x0006ae2c) bg_calc_paper_pane_g

0x15c9,	// (0x0005d2a1) calc_bg_paper_pane_g9

0x15da,	// (0x0005d2b2) list_calc_item_pane_ParamLimits

0x15da,	// (0x0005d2b2) list_calc_item_pane

0xa879,	// (0x00066551) list_calc_item_pane_g1

0x1609,	// (0x0005d2e1) list_calc_item_pane_t1_ParamLimits

0x1609,	// (0x0005d2e1) list_calc_item_pane_t1

0x161b,	// (0x0005d2f3) list_calc_item_pane_t2_ParamLimits

0x161b,	// (0x0005d2f3) list_calc_item_pane_t2

0x0001,

0xf165,	// (0x0006ae3d) list_calc_item_pane_t_ParamLimits

0xf165,	// (0x0006ae3d) list_calc_item_pane_t

0xa886,	// (0x0006655e) cell_calc_pane_g1

0xa890,	// (0x00066568) grid_highlight_pane_cp02

0x164b,	// (0x0005d323) bg_calc_display_pane_g1

0x1654,	// (0x0005d32c) bg_calc_display_pane_g2

0xcc6d,	// (0x00068945) bg_calc_display_pane_g3

0x0002,

0xf16f,	// (0x0006ae47) bg_calc_display_pane_g

0x165e,	// (0x0005d336) cell_qdial_pane_ParamLimits

0x165e,	// (0x0005d336) cell_qdial_pane

0x1672,	// (0x0005d34a) cell_qdial_pane_g1_ParamLimits

0x1672,	// (0x0005d34a) cell_qdial_pane_g1

0x167f,	// (0x0005d357) cell_qdial_pane_g2_ParamLimits

0x167f,	// (0x0005d357) cell_qdial_pane_g2

0xa8b2,	// (0x0006658a) cell_qdial_pane_g3_ParamLimits

0xa8b2,	// (0x0006658a) cell_qdial_pane_g3

0x0003,

0xf176,	// (0x0006ae4e) cell_qdial_pane_g_ParamLimits

0xf176,	// (0x0006ae4e) cell_qdial_pane_g

0x169d,	// (0x0005d375) cell_qdial_pane_t1_ParamLimits

0x169d,	// (0x0005d375) cell_qdial_pane_t1

0x16b5,	// (0x0005d38d) cell_qdial_pane_t2_ParamLimits

0x16b5,	// (0x0005d38d) cell_qdial_pane_t2

0x16c8,	// (0x0005d3a0) cell_qdial_pane_t3_ParamLimits

0x16c8,	// (0x0005d3a0) cell_qdial_pane_t3

0x0002,

0xf17f,	// (0x0006ae57) cell_qdial_pane_t_ParamLimits

0xf17f,	// (0x0006ae57) cell_qdial_pane_t

0xa511,	// (0x000661e9) grid_highlight_pane_cp04

0xa8be,	// (0x00066596) thumbnail_qdial_pane_ParamLimits

0xa8be,	// (0x00066596) thumbnail_qdial_pane

0xa91a,	// (0x000665f2) list_help_pane

0xa923,	// (0x000665fb) scroll_pane_cp02

0x16db,	// (0x0005d3b3) help_list_pane_t1_ParamLimits

0x16db,	// (0x0005d3b3) help_list_pane_t1

0x170e,	// (0x0005d3e6) bg_notes_pane_g2

0x1716,	// (0x0005d3ee) bg_notes_pane_g3

0x171e,	// (0x0005d3f6) notes_bg_pane_g1

0x1726,	// (0x0005d3fe) notes_bg_pane_g4

0x172e,	// (0x0005d406) notes_bg_pane_g5

0x1736,	// (0x0005d40e) notes_bg_pane_g6

0x173e,	// (0x0005d416) notes_bg_pane_g7

0x1746,	// (0x0005d41e) notes_bg_pane_g8

0x174e,	// (0x0005d426) notes_bg_pane_g9

0x0006,

0xf19d,	// (0x0006ae75) notes_bg_pane_g

0x1756,	// (0x0005d42e) list_notes_text_pane_ParamLimits

0x1756,	// (0x0005d42e) list_notes_text_pane

0xa92c,	// (0x00066604) list_notes_text_pane_g1

0x177e,	// (0x0005d456) list_notes_text_pane_t1

0x178c,	// (0x0005d464) listscroll_cale_week_pane

0x17b1,	// (0x0005d489) bg_cale_heading_pane

0xa94f,	// (0x00066627) bg_cale_pane_cp01

0x17d3,	// (0x0005d4ab) cale_week_corner_pane

0x17ed,	// (0x0005d4c5) cale_week_day_heading_pane

0x180f,	// (0x0005d4e7) cale_week_scroll_pane_g1

0x182c,	// (0x0005d504) cale_week_scroll_pane_g2

0x183f,	// (0x0005d517) cale_week_scroll_pane_g3

0x1852,	// (0x0005d52a) cale_week_scroll_pane_g4

0x1865,	// (0x0005d53d) cale_week_scroll_pane_g5

0x1878,	// (0x0005d550) cale_week_scroll_pane_g6

0x188b,	// (0x0005d563) cale_week_scroll_pane_g7

0x189e,	// (0x0005d576) cale_week_scroll_pane_g8

0x18b3,	// (0x0005d58b) cale_week_scroll_pane_g9

0x18c6,	// (0x0005d59e) cale_week_scroll_pane_g10

0x18d9,	// (0x0005d5b1) cale_week_scroll_pane_g11

0x18ec,	// (0x0005d5c4) cale_week_scroll_pane_g12

0x1903,	// (0x0005d5db) cale_week_scroll_pane_g13

0x191e,	// (0x0005d5f6) cale_week_scroll_pane_g14

0x1939,	// (0x0005d611) cale_week_scroll_pane_g15

0x000f,

0xf1ac,	// (0x0006ae84) cale_week_scroll_pane_g

0x1969,	// (0x0005d641) cale_week_time_pane

0x197e,	// (0x0005d656) grid_cale_week_pane

0xa97f,	// (0x00066657) scroll_pane_cp08

0x199d,	// (0x0005d675) cell_cale_week_pane_ParamLimits

0x199d,	// (0x0005d675) cell_cale_week_pane

0x19ff,	// (0x0005d6d7) cale_week_day_heading_pane_t1

0x1a3a,	// (0x0005d712) cale_week_day_heading_pane_t2

0x1a75,	// (0x0005d74d) cale_week_day_heading_pane_t3

0x1ab0,	// (0x0005d788) cale_week_day_heading_pane_t4

0x1aeb,	// (0x0005d7c3) cale_week_day_heading_pane_t5

0x1b26,	// (0x0005d7fe) cale_week_day_heading_pane_t6

0x1b61,	// (0x0005d839) cale_week_day_heading_pane_t7

0x0006,

0xf1cd,	// (0x0006aea5) cale_week_day_heading_pane_t

0xa99c,	// (0x00066674) bg_cale_side_pane

0x1b9c,	// (0x0005d874) cale_week_time_pane_t1

0x1bb6,	// (0x0005d88e) cale_week_time_pane_t2

0x1bd0,	// (0x0005d8a8) cale_week_time_pane_t3

0x1bea,	// (0x0005d8c2) cale_week_time_pane_t4

0x1c04,	// (0x0005d8dc) cale_week_time_pane_t5

0x1c1e,	// (0x0005d8f6) cale_week_time_pane_t6

0x1c3e,	// (0x0005d916) cale_week_time_pane_t7

0x1c60,	// (0x0005d938) cale_week_time_pane_t8

0x0007,

0xf1dc,	// (0x0006aeb4) cale_week_time_pane_t

0x1c84,	// (0x0005d95c) cell_cale_week_pane_g2

0x1ca8,	// (0x0005d980) cell_cale_week_pane_g3_ParamLimits

0x1ca8,	// (0x0005d980) cell_cale_week_pane_g3

0xa9aa,	// (0x00066682) grid_highlight_pane_cp07

0xa9b2,	// (0x0006668a) listscroll_gms_pane

0xa9bc,	// (0x00066694) grid_gms_pane

0xa9c5,	// (0x0006669d) listscroll_gms_pane_g1

0xa9cd,	// (0x000666a5) listscroll_gms_pane_g2

0x0001,

0xf1ed,	// (0x0006aec5) listscroll_gms_pane_g

0x1cc0,	// (0x0005d998) scroll_pane_cp010

0x1ccb,	// (0x0005d9a3) cell_gms_pane_ParamLimits

0x1ccb,	// (0x0005d9a3) cell_gms_pane

0x1cde,	// (0x0005d9b6) cell_gms_pane_g1

0xa9d5,	// (0x000666ad) cell_gms_pane_g2

0xa9dd,	// (0x000666b5) cell_gms_pane_g3

0xa9e6,	// (0x000666be) cell_gms_pane_g4

0x0003,

0xf1f2,	// (0x0006aeca) cell_gms_pane_g

0xa9ef,	// (0x000666c7) grid_highlight_pane_cp09

0x4332,	// (0x0006000a) phob_pre_status_pane_g1

0x433a,	// (0x00060012) phob_pre_status_pane_g2

0x4342,	// (0x0006001a) phob_pre_status_pane_g3

0x434a,	// (0x00060022) phob_pre_status_pane_g4

0x0004,

0xf50a,	// (0x0006b1e2) phob_pre_status_pane_g

0x435a,	// (0x00060032) phob_pre_status_pane_t1

0x436a,	// (0x00060042) phob_pre_status_pane_t2

0x437a,	// (0x00060052) phob_pre_status_pane_t3

0x0002,

0xf515,	// (0x0006b1ed) phob_pre_status_pane_t

0xa511,	// (0x000661e9) bg_list_pane_cp05

0x1cee,	// (0x0005d9c6) grid_vorec_pane

0x1cf8,	// (0x0005d9d0) vorec_t1

0x1d06,	// (0x0005d9de) vorec_t2

0x1d14,	// (0x0005d9ec) vorec_t3

0x1d22,	// (0x0005d9fa) vorec_t4

0x1d30,	// (0x0005da08) vorec_t5

0x1d3e,	// (0x0005da16) vorec_t6

0x0006,

0xf1fb,	// (0x0006aed3) vorec_t

0x1d5a,	// (0x0005da32) wait_bar_pane_cp01

0x1d62,	// (0x0005da3a) cell_vorec_pane_ParamLimits

0x1d62,	// (0x0005da3a) cell_vorec_pane

0x1d75,	// (0x0005da4d) cell_vorec_pane_g1

0xa511,	// (0x000661e9) grid_highlight_pane_cp05

0x1d8f,	// (0x0005da67) cams_zoom_pane

0x1d9b,	// (0x0005da73) image_vga_pane

0x1daa,	// (0x0005da82) main_camera_pane_g1

0x1db8,	// (0x0005da90) main_camera_pane_g2

0x1dc4,	// (0x0005da9c) main_camera_pane_g3

0x1dd0,	// (0x0005daa8) main_camera_pane_g4

0x1ddc,	// (0x0005dab4) main_camera_pane_g5

0x1de8,	// (0x0005dac0) main_camera_pane_g6

0x1df4,	// (0x0005dacc) main_camera_pane_g7

0x0007,

0xf20a,	// (0x0006aee2) main_camera_pane_g

0x1e00,	// (0x0005dad8) main_camera_pane_t1

0x1e12,	// (0x0005daea) main_camera_pane_t2

0x0001,

0xf21b,	// (0x0006aef3) main_camera_pane_t

0x1e33,	// (0x0005db0b) cams_zoom_pane_cp_ParamLimits

0x1e33,	// (0x0005db0b) cams_zoom_pane_cp

0x1e57,	// (0x0005db2f) image_cif_pane_ParamLimits

0x1e57,	// (0x0005db2f) image_cif_pane

0x1e75,	// (0x0005db4d) image_subqcif_pane

0x1e7d,	// (0x0005db55) main_video_pane_g1_ParamLimits

0x1e7d,	// (0x0005db55) main_video_pane_g1

0x1e9d,	// (0x0005db75) main_video_pane_g2_ParamLimits

0x1e9d,	// (0x0005db75) main_video_pane_g2

0x1ecd,	// (0x0005dba5) main_video_pane_g3_ParamLimits

0x1ecd,	// (0x0005dba5) main_video_pane_g3

0x1ef6,	// (0x0005dbce) main_video_pane_g4_ParamLimits

0x1ef6,	// (0x0005dbce) main_video_pane_g4

0x1f1f,	// (0x0005dbf7) main_video_pane_g5_ParamLimits

0x1f1f,	// (0x0005dbf7) main_video_pane_g5

0xaa03,	// (0x000666db) main_video_pane_g6_ParamLimits

0xaa03,	// (0x000666db) main_video_pane_g6

0x0006,

0xf220,	// (0x0006aef8) main_video_pane_g_ParamLimits

0xf220,	// (0x0006aef8) main_video_pane_g

0x1f41,	// (0x0005dc19) main_video_pane_t1_ParamLimits

0x1f41,	// (0x0005dc19) main_video_pane_t1

0xaa1d,	// (0x000666f5) cams_zoom_pane_g1

0xaa26,	// (0x000666fe) cams_zoom_pane_g2

0xaa2f,	// (0x00066707) cams_zoom_pane_g3

0xaa38,	// (0x00066710) cams_zoom_pane_g4

0x0003,

0xf22f,	// (0x0006af07) cams_zoom_pane_g

0x1f8b,	// (0x0005dc63) grid_cams_pane

0x1f99,	// (0x0005dc71) linegrid_cams_pane

0x1fa7,	// (0x0005dc7f) cell_cams_pane_ParamLimits

0x1fa7,	// (0x0005dc7f) cell_cams_pane

0xaa41,	// (0x00066719) cams_burst_image_pane

0xaa49,	// (0x00066721) cell_cams_pane_g1

0xa511,	// (0x000661e9) grid_highlight_pane_cp03

0xa886,	// (0x0006655e) mp_bg_pane_g1

0xa511,	// (0x000661e9) bg_list_pane_cp03

0xc774,	// (0x0006844c) bg_mp_pane

0xc77c,	// (0x00068454) grid_mp_pane

0xc784,	// (0x0006845c) media_player_g1

0xc78c,	// (0x00068464) media_player_t1

0xc79a,	// (0x00068472) media_player_t2

0xc7a8,	// (0x00068480) media_player_t3

0xc7b6,	// (0x0006848e) media_player_t4

0xc7c4,	// (0x0006849c) media_player_t5

0xc7d2,	// (0x000684aa) media_player_t6

0xc7e0,	// (0x000684b8) media_player_t7

0x0006,

0x04c4,	// (0x0005c19c) media_player_t

0xc7ee,	// (0x000684c6) wait_bar_pane_cp02

0xf4f6,	// (0x0006b1ce) main_usb_pane_t

0x4329,	// (0x00060001) cell_mp_pane

0xa886,	// (0x0006655e) cell_mp_pane_g1

0xa511,	// (0x000661e9) grid_highlight_pane_cp06

0xaa51,	// (0x00066729) grid_skin_colour_pane

0xaa59,	// (0x00066731) list_highlight_pane_cp03

0x20c7,	// (0x0005dd9f) skin_g1

0xaa61,	// (0x00066739) skin_t1

0xaa70,	// (0x00066748) skin_t2

0x0001,

0xf264,	// (0x0006af3c) skin_t

0x20d1,	// (0x0005dda9) cell_skin_colour_pane_ParamLimits

0x20d1,	// (0x0005dda9) cell_skin_colour_pane

0xaa7e,	// (0x00066756) cell_skin_colour_pane_g1

0x2155,	// (0x0005de2d) call_video_g1_ParamLimits

0x2155,	// (0x0005de2d) call_video_g1

0x2165,	// (0x0005de3d) call_video_g2_ParamLimits

0x2165,	// (0x0005de3d) call_video_g2

0x0001,

0xf269,	// (0x0006af41) call_video_g_ParamLimits

0xf269,	// (0x0006af41) call_video_g

0x21bf,	// (0x0005de97) call_video_uplink_pane_cp1_ParamLimits

0x21bf,	// (0x0005de97) call_video_uplink_pane_cp1

0xaa90,	// (0x00066768) call_video_uplink_pane_cp2

0x228b,	// (0x0005df63) video_down_crop_pane_ParamLimits

0x228b,	// (0x0005df63) video_down_crop_pane

0x2389,	// (0x0005e061) video_down_pane_ParamLimits

0x2389,	// (0x0005e061) video_down_pane

0xaa98,	// (0x00066770) video_down_subqcif_pane_ParamLimits

0xaa98,	// (0x00066770) video_down_subqcif_pane

0xaab0,	// (0x00066788) video_down_subqcif_pane_cp_ParamLimits

0xaab0,	// (0x00066788) video_down_subqcif_pane_cp

0xaad6,	// (0x000667ae) im_reading_pane_ParamLimits

0xaad6,	// (0x000667ae) im_reading_pane

0x24ab,	// (0x0005e183) im_writing_pane_ParamLimits

0x24ab,	// (0x0005e183) im_writing_pane

0x24c9,	// (0x0005e1a1) im_reading_pane_t1

0xaaf0,	// (0x000667c8) list_im_pane

0xab01,	// (0x000667d9) scroll_pane_cp07

0x251d,	// (0x0005e1f5) im_writing_pane_t1_ParamLimits

0x251d,	// (0x0005e1f5) im_writing_pane_t1

0xab1a,	// (0x000667f2) im_writing_pane_t2_ParamLimits

0xab1a,	// (0x000667f2) im_writing_pane_t2

0x0001,

0xf273,	// (0x0006af4b) im_writing_pane_t_ParamLimits

0xf273,	// (0x0006af4b) im_writing_pane_t

0xa511,	// (0x000661e9) input_focus_pane_cp04

0xa511,	// (0x000661e9) input_focus_pane_cp05

0x2532,	// (0x0005e20a) list_im_single_pane_ParamLimits

0x2532,	// (0x0005e20a) list_im_single_pane

0x2556,	// (0x0005e22e) list_single_im_pane_t1

0x42ed,	// (0x0005ffc5) blid_accuracy_pane

0x42f5,	// (0x0005ffcd) blid_compass_pane

0x42ff,	// (0x0005ffd7) main_location_t1

0x430d,	// (0x0005ffe5) main_location_t2

0x431b,	// (0x0005fff3) main_location_t3

0x0002,

0xf503,	// (0x0006b1db) main_location_t

0xa511,	// (0x000661e9) aid_levels_location

0xa886,	// (0x0006655e) blid_accuracy_pane_g1

0xa886,	// (0x0006655e) blid_accuracy_pane_g2

0x0001,

0xf2d5,	// (0x0006afad) blid_accuracy_pane_g

0xab62,	// (0x0006683a) wml_content_pane

0xaba0,	// (0x00066878) wml_button_pane_ParamLimits

0xaba0,	// (0x00066878) wml_button_pane

0x2565,	// (0x0005e23d) wml_list_single_large_pane_ParamLimits

0x2565,	// (0x0005e23d) wml_list_single_large_pane

0x258f,	// (0x0005e267) wml_list_single_medium_pane_ParamLimits

0x258f,	// (0x0005e267) wml_list_single_medium_pane

0x25c0,	// (0x0005e298) wml_list_single_small_pane_ParamLimits

0x25c0,	// (0x0005e298) wml_list_single_small_pane

0xabb4,	// (0x0006688c) wml_selection_box_pane_ParamLimits

0xabb4,	// (0x0006688c) wml_selection_box_pane

0xabc7,	// (0x0006689f) wml_list_single_pane_t1

0xabd6,	// (0x000668ae) wml_list_single_medium_pane_t1

0xabe5,	// (0x000668bd) wml_list_single_large_pane_t1

0xabf4,	// (0x000668cc) input_focus_pane_cp02_ParamLimits

0xabf4,	// (0x000668cc) input_focus_pane_cp02

0xac07,	// (0x000668df) wml_selection_box_pane_g1

0xac10,	// (0x000668e8) wml_selection_box_pane_t1_ParamLimits

0xac10,	// (0x000668e8) wml_selection_box_pane_t1

0xa76c,	// (0x00066444) bg_wml_button_pane_ParamLimits

0xa76c,	// (0x00066444) bg_wml_button_pane

0xac28,	// (0x00066900) wml_button_pane_g1

0xac30,	// (0x00066908) wml_button_pane_t1

0xac28,	// (0x00066900) wml_button_bg_pane_g1

0xac40,	// (0x00066918) wml_button_bg_pane_g2

0xac48,	// (0x00066920) wml_button_bg_pane_g3

0xac50,	// (0x00066928) wml_button_bg_pane_g4

0xac58,	// (0x00066930) wml_button_bg_pane_g5

0xac60,	// (0x00066938) wml_button_bg_pane_g6

0xac68,	// (0x00066940) wml_button_bg_pane_g7

0xac70,	// (0x00066948) wml_button_bg_pane_g8

0xac78,	// (0x00066950) wml_button_bg_pane_g9

0x0008,

0xf278,	// (0x0006af50) wml_button_bg_pane_g

0x25fa,	// (0x0005e2d2) bg_list_pane_cp02

0xac80,	// (0x00066958) mce_header_pane_ParamLimits

0xac80,	// (0x00066958) mce_header_pane

0xac96,	// (0x0006696e) mce_icon_pane

0xac96,	// (0x0006696e) mce_image_pane

0xac9f,	// (0x00066977) mce_text_pane_ParamLimits

0xac9f,	// (0x00066977) mce_text_pane

0x2604,	// (0x0005e2dc) scroll_pane_cp03

0xab98,	// (0x00066870) scroll_pane_cp04

0xacb2,	// (0x0006698a) scroll_pane_cp05_ParamLimits

0xacb2,	// (0x0006698a) scroll_pane_cp05

0x260e,	// (0x0005e2e6) mce_header_field_pane_ParamLimits

0x260e,	// (0x0005e2e6) mce_header_field_pane

0x262e,	// (0x0005e306) mce_header_field_pane_2_ParamLimits

0x262e,	// (0x0005e306) mce_header_field_pane_2

0x2644,	// (0x0005e31c) mce_header_field_pane_3

0x264c,	// (0x0005e324) list_single_mce_message_pane_ParamLimits

0x264c,	// (0x0005e324) list_single_mce_message_pane

0x2677,	// (0x0005e34f) list_single_mce_smart_pane_ParamLimits

0x2677,	// (0x0005e34f) list_single_mce_smart_pane

0xacbe,	// (0x00066996) input_focus_pane_cp03

0xacc7,	// (0x0006699f) list_header_data_pane

0x26ad,	// (0x0005e385) mce_header_field_pane_t1

0x26bb,	// (0x0005e393) list_single_mce_header_pane_ParamLimits

0x26bb,	// (0x0005e393) list_single_mce_header_pane

0xaccf,	// (0x000669a7) list_single_mce_header_pane_t1

0xacde,	// (0x000669b6) list_single_mce_message_pane_g1

0xace6,	// (0x000669be) list_single_mce_message_pane_t1

0x270d,	// (0x0005e3e5) bg_cale_heading_pane_cp01_ParamLimits

0x270d,	// (0x0005e3e5) bg_cale_heading_pane_cp01

0xacf4,	// (0x000669cc) bg_cale_pane_cp02_ParamLimits

0xacf4,	// (0x000669cc) bg_cale_pane_cp02

0x2750,	// (0x0005e428) cale_month_corner_pane

0x276a,	// (0x0005e442) cale_month_day_heading_pane_ParamLimits

0x276a,	// (0x0005e442) cale_month_day_heading_pane

0x27c5,	// (0x0005e49d) cale_month_pane_g1_ParamLimits

0x27c5,	// (0x0005e49d) cale_month_pane_g1

0x27fd,	// (0x0005e4d5) cale_month_pane_g2_ParamLimits

0x27fd,	// (0x0005e4d5) cale_month_pane_g2

0x2826,	// (0x0005e4fe) cale_month_pane_g3_ParamLimits

0x2826,	// (0x0005e4fe) cale_month_pane_g3

0x2872,	// (0x0005e54a) cale_month_pane_g4_ParamLimits

0x2872,	// (0x0005e54a) cale_month_pane_g4

0x28be,	// (0x0005e596) cale_month_pane_g5_ParamLimits

0x28be,	// (0x0005e596) cale_month_pane_g5

0x290a,	// (0x0005e5e2) cale_month_pane_g6_ParamLimits

0x290a,	// (0x0005e5e2) cale_month_pane_g6

0x2956,	// (0x0005e62e) cale_month_pane_g7_ParamLimits

0x2956,	// (0x0005e62e) cale_month_pane_g7

0x29ba,	// (0x0005e692) cale_month_pane_g8_ParamLimits

0x29ba,	// (0x0005e692) cale_month_pane_g8

0x2a1e,	// (0x0005e6f6) cale_month_pane_g9_ParamLimits

0x2a1e,	// (0x0005e6f6) cale_month_pane_g9

0x2a7c,	// (0x0005e754) cale_month_pane_g10_ParamLimits

0x2a7c,	// (0x0005e754) cale_month_pane_g10

0x2ad8,	// (0x0005e7b0) cale_month_pane_g11_ParamLimits

0x2ad8,	// (0x0005e7b0) cale_month_pane_g11

0x2b2c,	// (0x0005e804) cale_month_pane_g12_ParamLimits

0x2b2c,	// (0x0005e804) cale_month_pane_g12

0x2b82,	// (0x0005e85a) cale_month_pane_g13_ParamLimits

0x2b82,	// (0x0005e85a) cale_month_pane_g13

0x000c,

0xf28b,	// (0x0006af63) cale_month_pane_g_ParamLimits

0xf28b,	// (0x0006af63) cale_month_pane_g

0x2bd8,	// (0x0005e8b0) cale_month_week_pane

0x2bed,	// (0x0005e8c5) grid_cale_month_pane_ParamLimits

0x2bed,	// (0x0005e8c5) grid_cale_month_pane

0x2c3b,	// (0x0005e913) cale_month_day_heading_pane_t1

0x2cc1,	// (0x0005e999) cale_month_day_heading_pane_t2

0x2d52,	// (0x0005ea2a) cale_month_day_heading_pane_t3

0x2de3,	// (0x0005eabb) cale_month_day_heading_pane_t4

0x2e74,	// (0x0005eb4c) cale_month_day_heading_pane_t5

0x2f05,	// (0x0005ebdd) cale_month_day_heading_pane_t6

0x2f96,	// (0x0005ec6e) cale_month_day_heading_pane_t7

0x0006,

0xf2a6,	// (0x0006af7e) cale_month_day_heading_pane_t

0xa99c,	// (0x00066674) bg_cale_side_pane_cp01

0x303f,	// (0x0005ed17) cale_month_week_pane_t1

0x3058,	// (0x0005ed30) cale_month_week_pane_t2

0x3071,	// (0x0005ed49) cale_month_week_pane_t3

0x308a,	// (0x0005ed62) cale_month_week_pane_t4

0x30a3,	// (0x0005ed7b) cale_month_week_pane_t5

0x30c4,	// (0x0005ed9c) cale_month_week_pane_t6

0x0005,

0xf2b5,	// (0x0006af8d) cale_month_week_pane_t

0x30e5,	// (0x0005edbd) cell_cale_month_pane_ParamLimits

0x30e5,	// (0x0005edbd) cell_cale_month_pane

0x3231,	// (0x0005ef09) cell_cale_month_pane_g1

0x323d,	// (0x0005ef15) cell_cale_month_pane_t1_ParamLimits

0x323d,	// (0x0005ef15) cell_cale_month_pane_t1

0xa9aa,	// (0x00066682) grid_highlight_pane_cp08

0xa886,	// (0x0006655e) main_smil_g1

0x325d,	// (0x0005ef35) smil_status_pane

0xad33,	// (0x00066a0b) smil_text_pane

0xc694,	// (0x0006836c) bg_popup_call3_rect_pane_g8

0xc69c,	// (0x00068374) bg_popup_call3_rect_pane_g9

0x0008,

0xf4de,	// (0x0006b1b6) bg_popup_call3_rect_pane_g

0xc8e3,	// (0x000685bb) smil_status_volume_pane_g1

0xad3d,	// (0x00066a15) smil_status_pane_t1

0x4725,	// (0x000603fd) volume_smil_pane

0xad54,	// (0x00066a2c) list_smil_text_pane

0x3270,	// (0x0005ef48) scroll_pane_cp011

0x327b,	// (0x0005ef53) smil_text_list_pane_t1_ParamLimits

0x327b,	// (0x0005ef53) smil_text_list_pane_t1

0x32f3,	// (0x0005efcb) aid_volume_smil_ParamLimits

0x32f3,	// (0x0005efcb) aid_volume_smil

0xa886,	// (0x0006655e) smil_volume_pane_g1

0xa886,	// (0x0006655e) smil_volume_pane_g2

0x0001,

0xf2d5,	// (0x0006afad) smil_volume_pane_g

0x178c,	// (0x0005d464) listscroll_cale_day_pane

0xad5e,	// (0x00066a36) bg_cale_pane

0xad76,	// (0x00066a4e) list_cale_pane

0xad99,	// (0x00066a71) scroll_pane_cp09

0xadaa,	// (0x00066a82) cale_bg_pane_g1

0xadb2,	// (0x00066a8a) cale_bg_pane_g2

0xadba,	// (0x00066a92) cale_bg_pane_g3

0xadc2,	// (0x00066a9a) cale_bg_pane_g4

0xadca,	// (0x00066aa2) cale_bg_pane_g5

0xadd2,	// (0x00066aaa) cale_bg_pane_g6

0xadda,	// (0x00066ab2) cale_bg_pane_g7

0xade2,	// (0x00066aba) cale_bg_pane_g8

0xadea,	// (0x00066ac2) cale_bg_pane_g9

0x0008,

0xf2da,	// (0x0006afb2) cale_bg_pane_g

0x331d,	// (0x0005eff5) list_cale_time_pane_ParamLimits

0x331d,	// (0x0005eff5) list_cale_time_pane

0xadf2,	// (0x00066aca) list_cale_time_pane_g1_ParamLimits

0xadf2,	// (0x00066aca) list_cale_time_pane_g1

0xadfe,	// (0x00066ad6) list_cale_time_pane_g2_ParamLimits

0xadfe,	// (0x00066ad6) list_cale_time_pane_g2

0x333f,	// (0x0005f017) list_cale_time_pane_g3_ParamLimits

0x333f,	// (0x0005f017) list_cale_time_pane_g3

0x334d,	// (0x0005f025) list_cale_time_pane_g4_ParamLimits

0x334d,	// (0x0005f025) list_cale_time_pane_g4

0x335b,	// (0x0005f033) list_cale_time_pane_g5_ParamLimits

0x335b,	// (0x0005f033) list_cale_time_pane_g5

0x0005,

0xf2ed,	// (0x0006afc5) list_cale_time_pane_g_ParamLimits

0xf2ed,	// (0x0006afc5) list_cale_time_pane_g

0xae18,	// (0x00066af0) list_cale_time_pane_t1_ParamLimits

0xae18,	// (0x00066af0) list_cale_time_pane_t1

0xae40,	// (0x00066b18) list_cale_time_pane_t2_ParamLimits

0xae40,	// (0x00066b18) list_cale_time_pane_t2

0x36f1,	// (0x0005f3c9) aid_blid_cardinal_pane

0x3733,	// (0x0005f40b) compass_pane_t4

0xae68,	// (0x00066b40) list_cale_time_pane_t4_ParamLimits

0xae68,	// (0x00066b40) list_cale_time_pane_t4

0x3741,	// (0x0005f419) compass_pane_t5

0x3751,	// (0x0005f429) compass_pane_t6

0x375f,	// (0x0005f437) compass_pane_t7

0xb325,	// (0x00066ffd) navi_pane_cc_t1

0xb50a,	// (0x000671e2) aid_phob_thumbnail_center_pane

0x3df3,	// (0x0005facb) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2fa,	// (0x0006afd2) list_cale_time_pane_t_ParamLimits

0xf2fa,	// (0x0006afd2) list_cale_time_pane_t

0x9cc3,	// (0x0006599b) bg_popup_window_pane_cp02_ParamLimits

0x9cc3,	// (0x0006599b) bg_popup_window_pane_cp02

0xae90,	// (0x00066b68) heading_pane_cp01_ParamLimits

0xae90,	// (0x00066b68) heading_pane_cp01

0xae9c,	// (0x00066b74) loc_req_pane_ParamLimits

0xae9c,	// (0x00066b74) loc_req_pane

0xaeac,	// (0x00066b84) loc_type_pane_ParamLimits

0xaeac,	// (0x00066b84) loc_type_pane

0xaebe,	// (0x00066b96) loc_type_pane_t1_ParamLimits

0xaebe,	// (0x00066b96) loc_type_pane_t1

0xaed0,	// (0x00066ba8) loc_type_pane_t2_ParamLimits

0xaed0,	// (0x00066ba8) loc_type_pane_t2

0xaee2,	// (0x00066bba) loc_type_pane_t3_ParamLimits

0xaee2,	// (0x00066bba) loc_type_pane_t3

0x0002,

0xf301,	// (0x0006afd9) loc_type_pane_t_ParamLimits

0xf301,	// (0x0006afd9) loc_type_pane_t

0xaef4,	// (0x00066bcc) list_loc_req_pane

0xaefe,	// (0x00066bd6) scroll_pane_cp012

0x3369,	// (0x0005f041) list_single_loc_request_popup_menu_pane_ParamLimits

0x3369,	// (0x0005f041) list_single_loc_request_popup_menu_pane

0xaf09,	// (0x00066be1) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xaf09,	// (0x00066be1) list_single_loc_request_popup_menu_pane_g1

0xaf15,	// (0x00066bed) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xaf15,	// (0x00066bed) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf308,	// (0x0006afe0) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf308,	// (0x0006afe0) list_single_loc_request_popup_menu_pane_g

0xaf21,	// (0x00066bf9) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xaf21,	// (0x00066bf9) list_single_loc_request_popup_menu_pane_t1

0x337b,	// (0x0005f053) bg_popup_window_pane_cp03_ParamLimits

0x337b,	// (0x0005f053) bg_popup_window_pane_cp03

0x3389,	// (0x0005f061) heading_loc_req_pane_ParamLimits

0x3389,	// (0x0005f061) heading_loc_req_pane

0x3395,	// (0x0005f06d) popup_dyc_status_message_window_g1_ParamLimits

0x3395,	// (0x0005f06d) popup_dyc_status_message_window_g1

0x33a1,	// (0x0005f079) popup_dyc_status_message_window_t1_ParamLimits

0x33a1,	// (0x0005f079) popup_dyc_status_message_window_t1

0x33b3,	// (0x0005f08b) popup_dyc_status_message_window_t2_ParamLimits

0x33b3,	// (0x0005f08b) popup_dyc_status_message_window_t2

0x33c5,	// (0x0005f09d) popup_dyc_status_message_window_t3_ParamLimits

0x33c5,	// (0x0005f09d) popup_dyc_status_message_window_t3

0x0002,

0xf30d,	// (0x0006afe5) popup_dyc_status_message_window_t_ParamLimits

0xf30d,	// (0x0006afe5) popup_dyc_status_message_window_t

0xa511,	// (0x000661e9) bg_heading_pane_cp01

0xaf37,	// (0x00066c0f) heading_loc_req_pane_g1

0xaf3f,	// (0x00066c17) heading_loc_req_pane_g2

0xaf47,	// (0x00066c1f) heading_loc_req_pane_g3

0x0002,

0xf314,	// (0x0006afec) heading_loc_req_pane_g

0xaf4f,	// (0x00066c27) heading_loc_req_pane_t1

0xaf5e,	// (0x00066c36) bg_popup_sub_pane_cp01_ParamLimits

0xaf5e,	// (0x00066c36) bg_popup_sub_pane_cp01

0xaf6c,	// (0x00066c44) popup_cale_events_window_g1_ParamLimits

0xaf6c,	// (0x00066c44) popup_cale_events_window_g1

0xaf98,	// (0x00066c70) popup_cale_events_window_g2_ParamLimits

0xaf98,	// (0x00066c70) popup_cale_events_window_g2

0x0001,

0xf348,	// (0x0006b020) popup_cale_events_window_g_ParamLimits

0xf348,	// (0x0006b020) popup_cale_events_window_g

0xafb8,	// (0x00066c90) popup_cale_events_window_t1_ParamLimits

0xafb8,	// (0x00066c90) popup_cale_events_window_t1

0xafca,	// (0x00066ca2) popup_cale_events_window_t2_ParamLimits

0xafca,	// (0x00066ca2) popup_cale_events_window_t2

0xb008,	// (0x00066ce0) popup_cale_events_window_t3_ParamLimits

0xb008,	// (0x00066ce0) popup_cale_events_window_t3

0xb042,	// (0x00066d1a) popup_cale_events_window_t4_ParamLimits

0xb042,	// (0x00066d1a) popup_cale_events_window_t4

0x0003,

0xf34d,	// (0x0006b025) popup_cale_events_window_t_ParamLimits

0xf34d,	// (0x0006b025) popup_cale_events_window_t

0x34be,	// (0x0005f196) call_type_pane

0xb1d2,	// (0x00066eaa) popup_call_status_window_g1

0x34ca,	// (0x0005f1a2) popup_call_status_window_g2

0x34d6,	// (0x0005f1ae) popup_call_status_window_g3

0x0002,

0xf356,	// (0x0006b02e) popup_call_status_window_g

0xb078,	// (0x00066d50) call_type_pane_g1

0xb081,	// (0x00066d59) call_type_pane_g2

0x0001,

0xf35d,	// (0x0006b035) call_type_pane_g

0xa511,	// (0x000661e9) bg_popup_sub_pane_cp02

0xb08a,	// (0x00066d62) listscroll_popup_wml_pane

0xb092,	// (0x00066d6a) list_wml_pane

0xb09c,	// (0x00066d74) scroll_pane_cp013

0xb0a7,	// (0x00066d7f) list_single_graphic_popup_wml_pane_ParamLimits

0xb0a7,	// (0x00066d7f) list_single_graphic_popup_wml_pane

0xa886,	// (0x0006655e) list_single_graphic_popup_wml_pane_g1

0xb0bb,	// (0x00066d93) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf362,	// (0x0006b03a) list_single_graphic_popup_wml_pane_g

0xb0c3,	// (0x00066d9b) list_single_graphic_popup_wml_pane_t1

0xb0d9,	// (0x00066db1) aid_call_pane

0xa764,	// (0x0006643c) popup_clock_analogue_window_g1

0xa764,	// (0x0006643c) popup_clock_analogue_window_g2

0x34e2,	// (0x0005f1ba) popup_clock_analogue_window_g3

0x34e2,	// (0x0005f1ba) popup_clock_analogue_window_g4

0xa886,	// (0x0006655e) popup_clock_analogue_window_g5

0x0004,

0xf367,	// (0x0006b03f) popup_clock_analogue_window_g

0x34ea,	// (0x0005f1c2) popup_clock_analogue_window_t1

0x34f8,	// (0x0005f1d0) clock_digital_number_pane_ParamLimits

0x34f8,	// (0x0005f1d0) clock_digital_number_pane

0x3504,	// (0x0005f1dc) clock_digital_number_pane_cp02_ParamLimits

0x3504,	// (0x0005f1dc) clock_digital_number_pane_cp02

0x3510,	// (0x0005f1e8) clock_digital_number_pane_cp03_ParamLimits

0x3510,	// (0x0005f1e8) clock_digital_number_pane_cp03

0x351c,	// (0x0005f1f4) clock_digital_number_pane_cp04_ParamLimits

0x351c,	// (0x0005f1f4) clock_digital_number_pane_cp04

0x352c,	// (0x0005f204) clock_digital_separator_pane_ParamLimits

0x352c,	// (0x0005f204) clock_digital_separator_pane

0x3538,	// (0x0005f210) popup_clock_digital_window_t1

0xa886,	// (0x0006655e) clock_digital_number_pane_g1

0xa886,	// (0x0006655e) clock_digital_number_pane_g2

0x0001,

0xf2d5,	// (0x0006afad) clock_digital_number_pane_g

0xa886,	// (0x0006655e) clock_digital_separator_pane_g1

0xa886,	// (0x0006655e) clock_digital_separator_pane_g2

0x0001,

0xf2d5,	// (0x0006afad) clock_digital_separator_pane_g

0xa511,	// (0x000661e9) bg_popup_window_pane_cp04

0xb0e1,	// (0x00066db9) heading_pane_cp03

0xb0e9,	// (0x00066dc1) listscroll_popup_gms_pane

0xb0f1,	// (0x00066dc9) grid_large_graphic_popup_pane

0xb0fb,	// (0x00066dd3) listscroll_popup_gms_pane_g1

0xb103,	// (0x00066ddb) listscroll_popup_gms_pane_g2

0x0001,

0xf372,	// (0x0006b04a) listscroll_popup_gms_pane_g

0xab98,	// (0x00066870) scroll_pane_cp014

0x3555,	// (0x0005f22d) cell_large_graphic_popup_pane_ParamLimits

0x3555,	// (0x0005f22d) cell_large_graphic_popup_pane

0x356d,	// (0x0005f245) cell_large_graphic_popup_pane_g1_ParamLimits

0x356d,	// (0x0005f245) cell_large_graphic_popup_pane_g1

0xb10b,	// (0x00066de3) cell_large_graphic_popup_pane_g2_ParamLimits

0xb10b,	// (0x00066de3) cell_large_graphic_popup_pane_g2

0xb117,	// (0x00066def) cell_large_graphic_popup_pane_g3_ParamLimits

0xb117,	// (0x00066def) cell_large_graphic_popup_pane_g3

0xb124,	// (0x00066dfc) cell_large_graphic_popup_pane_g4_ParamLimits

0xb124,	// (0x00066dfc) cell_large_graphic_popup_pane_g4

0x0003,

0xf377,	// (0x0006b04f) cell_large_graphic_popup_pane_g_ParamLimits

0xf377,	// (0x0006b04f) cell_large_graphic_popup_pane_g

0xb134,	// (0x00066e0c) grid_highlight_pane_cp010

0xa886,	// (0x0006655e) bg_popup_call_pane_g1

0xb13e,	// (0x00066e16) list_single_graphic_popup_conf_pane_ParamLimits

0xb13e,	// (0x00066e16) list_single_graphic_popup_conf_pane

0xb151,	// (0x00066e29) list_highlight_pane_cp01

0xb15a,	// (0x00066e32) list_single_graphic_popup_conf_pane_g1

0xb162,	// (0x00066e3a) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf380,	// (0x0006b058) list_single_graphic_popup_conf_pane_g

0xb16a,	// (0x00066e42) list_single_graphic_popup_conf_pane_t1

0xb178,	// (0x00066e50) linegrid_cams_pane_g1

0x3579,	// (0x0005f251) linegrid_cams_pane_g2

0xa9dd,	// (0x000666b5) linegrid_cams_pane_g3

0xb181,	// (0x00066e59) linegrid_cams_pane_g4

0x3582,	// (0x0005f25a) linegrid_cams_pane_g5

0x358b,	// (0x0005f263) linegrid_cams_pane_g6

0xa9e6,	// (0x000666be) linegrid_cams_pane_g7

0x0006,

0xf385,	// (0x0006b05d) linegrid_cams_pane_g

0xb18a,	// (0x00066e62) popup_clock_analogue_window

0xb18a,	// (0x00066e62) popup_clock_digital_window

0xa511,	// (0x000661e9) popup_phob_thumbnail_window

0xa886,	// (0x0006655e) call_video_uplink_pane_g1

0xb193,	// (0x00066e6b) call_video_uplink_pane_g2

0x0001,

0xf394,	// (0x0006b06c) call_video_uplink_pane_g

0xb19b,	// (0x00066e73) video_uplink_pane

0xb1a3,	// (0x00066e7b) mce_image_pane_g1

0x3594,	// (0x0005f26c) mce_image_pane_g2

0x359e,	// (0x0005f276) mce_image_pane_g3

0x35a6,	// (0x0005f27e) mce_image_pane_g4

0x35ae,	// (0x0005f286) mce_image_pane_g5

0x0004,

0xf399,	// (0x0006b071) mce_image_pane_g

0xb1ad,	// (0x00066e85) control_top_pane_stacon_cp01_ParamLimits

0xb1ad,	// (0x00066e85) control_top_pane_stacon_cp01

0xb1c1,	// (0x00066e99) uni_indicator_pane_stacon_cp01_ParamLimits

0xb1c1,	// (0x00066e99) uni_indicator_pane_stacon_cp01

0xb1e0,	// (0x00066eb8) bg_popup_sub_pane_cp03

0xb1ea,	// (0x00066ec2) chi_dic_find_pane

0x35b6,	// (0x0005f28e) listscroll_chi_dic_pane

0xb1f2,	// (0x00066eca) main_pane_chidic_g1

0xb1fa,	// (0x00066ed2) chi_dic_find_pane_t1

0xb208,	// (0x00066ee0) find_chidic_pane

0xb211,	// (0x00066ee9) chi_dic_list_pane_ParamLimits

0xb211,	// (0x00066ee9) chi_dic_list_pane

0xb222,	// (0x00066efa) scroll_pane_cp020

0xb22a,	// (0x00066f02) find_chidic_pane_t1

0xa511,	// (0x000661e9) input_focus_pane_cp06

0x35ca,	// (0x0005f2a2) list_chi_dic_pane_ParamLimits

0x35ca,	// (0x0005f2a2) list_chi_dic_pane

0x35e4,	// (0x0005f2bc) list_chi_dic_pane_t1_ParamLimits

0x35e4,	// (0x0005f2bc) list_chi_dic_pane_t1

0xa511,	// (0x000661e9) list_highlight_pane_cp020

0xb239,	// (0x00066f11) bg_cale_heading_pane_g1

0x35f7,	// (0x0005f2cf) bg_cale_heading_pane_g2

0x35ff,	// (0x0005f2d7) bg_cale_heading_pane_g3

0x3607,	// (0x0005f2df) bg_cale_heading_pane_g4

0x3611,	// (0x0005f2e9) bg_cale_heading_pane_g5

0x361b,	// (0x0005f2f3) bg_cale_heading_pane_g6

0x3623,	// (0x0005f2fb) bg_cale_heading_pane_g7

0x362b,	// (0x0005f303) bg_cale_heading_pane_g8

0x3635,	// (0x0005f30d) bg_cale_heading_pane_g9

0x0008,

0xf3a4,	// (0x0006b07c) bg_cale_heading_pane_g

0xb239,	// (0x00066f11) bg_cale_side_pane_g1

0x363f,	// (0x0005f317) bg_cale_side_pane_g2

0x3649,	// (0x0005f321) bg_cale_side_pane_g3

0x3653,	// (0x0005f32b) bg_cale_side_pane_g4

0x365d,	// (0x0005f335) bg_cale_side_pane_g5

0x3667,	// (0x0005f33f) bg_cale_side_pane_g6

0x3671,	// (0x0005f349) bg_cale_side_pane_g7

0x367b,	// (0x0005f353) bg_cale_side_pane_g8

0x3683,	// (0x0005f35b) bg_cale_side_pane_g9

0x0008,

0xf3b7,	// (0x0006b08f) bg_cale_side_pane_g

0x368b,	// (0x0005f363) popup_call_status_window_ParamLimits

0x368b,	// (0x0005f363) popup_call_status_window

0xb241,	// (0x00066f19) stacon_top_pane

0xb249,	// (0x00066f21) status_pane_ParamLimits

0xb249,	// (0x00066f21) status_pane

0xb25e,	// (0x00066f36) status_small_pane

0xb266,	// (0x00066f3e) control_pane

0xa511,	// (0x000661e9) stacon_bottom_pane

0xb26e,	// (0x00066f46) list_single_mce_smart_pane_t1_ParamLimits

0xb26e,	// (0x00066f46) list_single_mce_smart_pane_t1

0xb281,	// (0x00066f59) list_single_mce_smart_pane_t2_ParamLimits

0xb281,	// (0x00066f59) list_single_mce_smart_pane_t2

0x0001,

0x02c3,	// (0x0005bf9b) list_single_mce_smart_pane_t_ParamLimits

0x02c3,	// (0x0005bf9b) list_single_mce_smart_pane_t

0x3697,	// (0x0005f36f) compass_pane

0x36a3,	// (0x0005f37b) main_location2_pane_t1

0x36b7,	// (0x0005f38f) main_location2_pane_t2

0x36cb,	// (0x0005f3a3) main_location2_pane_t3

0x0003,

0xf3ca,	// (0x0006b0a2) main_location2_pane_t

0xb2a0,	// (0x00066f78) compass_pane_g1_ParamLimits

0xb2a0,	// (0x00066f78) compass_pane_g1

0x3715,	// (0x0005f3ed) compass_pane_t1

0x3724,	// (0x0005f3fc) compass_pane_t2

0x0005,

0xf3d3,	// (0x0006b0ab) compass_pane_t

0x376f,	// (0x0005f447) text_secondary_cp61

0xb31c,	// (0x00066ff4) navi_pane_cams_g5

0xb398,	// (0x00067070) navi_pane_im_t1

0xb3a6,	// (0x0006707e) navi_pane_mp_g1_ParamLimits

0xb3a6,	// (0x0006707e) navi_pane_mp_g1

0xb3ba,	// (0x00067092) navi_pane_mp_g2_ParamLimits

0xb3ba,	// (0x00067092) navi_pane_mp_g2

0xb3c6,	// (0x0006709e) navi_pane_mp_g3_ParamLimits

0xb3c6,	// (0x0006709e) navi_pane_mp_g3

0x0002,

0x02e5,	// (0x0005bfbd) navi_pane_mp_g_ParamLimits

0x02e5,	// (0x0005bfbd) navi_pane_mp_g

0xb3d2,	// (0x000670aa) navi_pane_mp_t1

0xb3e0,	// (0x000670b8) navi_pane_mp_t2

0x0002,

0x02ec,	// (0x0005bfc4) navi_pane_mp_t

0xb44b,	// (0x00067123) navi_pane_vt_g1

0xb3d2,	// (0x000670aa) navi_pane_vt_t1

0xb453,	// (0x0006712b) navi_slider_pane

0xb463,	// (0x0006713b) zooming_pane

0xb46b,	// (0x00067143) navi_slider_pane_g1

0x37aa,	// (0x0005f482) navi_slider_pane_g2

0x0006,

0xf3e0,	// (0x0006b0b8) navi_slider_pane_g

0xb48f,	// (0x00067167) aid_levels_zoom

0xb497,	// (0x0006716f) zooming_pane_g1

0xb49f,	// (0x00067177) zooming_pane_g2

0xb49f,	// (0x00067177) zooming_pane_g3

0x0002,

0x0302,	// (0x0005bfda) zooming_pane_g

0xb4a7,	// (0x0006717f) level_10_zoom

0xb4b0,	// (0x00067188) level_11_zoom

0xb4b9,	// (0x00067191) level_1_zoom

0xb4c2,	// (0x0006719a) level_2_zoom

0xb4cb,	// (0x000671a3) level_3_zoom

0xb4d4,	// (0x000671ac) level_4_zoom

0xb4dd,	// (0x000671b5) level_5_zoom

0xb4e6,	// (0x000671be) level_6_zoom

0xb4ef,	// (0x000671c7) level_7_zoom

0xb4f8,	// (0x000671d0) level_8_zoom

0xb501,	// (0x000671d9) level_9_zoom

0xb512,	// (0x000671ea) popup_phob_thumbnail_window_g1

0xb51a,	// (0x000671f2) popup_phob_thumbnail_window_g2

0x0001,

0x0309,	// (0x0005bfe1) popup_phob_thumbnail_window_g

0xc7f6,	// (0x000684ce) level_1_location

0xc7fe,	// (0x000684d6) level_2_location

0xc806,	// (0x000684de) level_3_location

0xc80e,	// (0x000684e6) level_4_location

0xb463,	// (0x0006713b) level_5_location

0x37bc,	// (0x0005f494) mce_icon_pane_g1

0x37c4,	// (0x0005f49c) mce_icon_pane_g2

0x0001,

0xf3ef,	// (0x0006b0c7) mce_icon_pane_g

0x37cc,	// (0x0005f4a4) main_mup_pane_g1_ParamLimits

0x37cc,	// (0x0005f4a4) main_mup_pane_g1

0x37e4,	// (0x0005f4bc) main_mup_pane_g2_ParamLimits

0x37e4,	// (0x0005f4bc) main_mup_pane_g2

0x3800,	// (0x0005f4d8) main_mup_pane_g3_ParamLimits

0x3800,	// (0x0005f4d8) main_mup_pane_g3

0x381c,	// (0x0005f4f4) main_mup_pane_g4_ParamLimits

0x381c,	// (0x0005f4f4) main_mup_pane_g4

0x3838,	// (0x0005f510) main_mup_pane_g5_ParamLimits

0x3838,	// (0x0005f510) main_mup_pane_g5

0x3859,	// (0x0005f531) main_mup_pane_g6_ParamLimits

0x3859,	// (0x0005f531) main_mup_pane_g6

0x3875,	// (0x0005f54d) main_mup_pane_g7_ParamLimits

0x3875,	// (0x0005f54d) main_mup_pane_g7

0x3891,	// (0x0005f569) main_mup_pane_g8_ParamLimits

0x3891,	// (0x0005f569) main_mup_pane_g8

0x38b1,	// (0x0005f589) main_mup_pane_g9_ParamLimits

0x38b1,	// (0x0005f589) main_mup_pane_g9

0x38d0,	// (0x0005f5a8) main_mup_pane_g10_ParamLimits

0x38d0,	// (0x0005f5a8) main_mup_pane_g10

0x38ef,	// (0x0005f5c7) main_mup_pane_g11_ParamLimits

0x38ef,	// (0x0005f5c7) main_mup_pane_g11

0x3907,	// (0x0005f5df) main_mup_pane_g12_ParamLimits

0x3907,	// (0x0005f5df) main_mup_pane_g12

0x3915,	// (0x0005f5ed) main_mup_pane_g13_ParamLimits

0x3915,	// (0x0005f5ed) main_mup_pane_g13

0x000c,

0xf3f4,	// (0x0006b0cc) main_mup_pane_g_ParamLimits

0xf3f4,	// (0x0006b0cc) main_mup_pane_g

0x392b,	// (0x0005f603) main_mup_pane_t1_ParamLimits

0x392b,	// (0x0005f603) main_mup_pane_t1

0x3948,	// (0x0005f620) main_mup_pane_t2_ParamLimits

0x3948,	// (0x0005f620) main_mup_pane_t2

0x3962,	// (0x0005f63a) main_mup_pane_t3_ParamLimits

0x3962,	// (0x0005f63a) main_mup_pane_t3

0x397c,	// (0x0005f654) main_mup_pane_t4_ParamLimits

0x397c,	// (0x0005f654) main_mup_pane_t4

0x398e,	// (0x0005f666) main_mup_pane_t5_ParamLimits

0x398e,	// (0x0005f666) main_mup_pane_t5

0x39a0,	// (0x0005f678) main_mup_pane_t6_ParamLimits

0x39a0,	// (0x0005f678) main_mup_pane_t6

0x0005,

0xf40f,	// (0x0006b0e7) main_mup_pane_t_ParamLimits

0xf40f,	// (0x0006b0e7) main_mup_pane_t

0x39b6,	// (0x0005f68e) mup_progress_pane_ParamLimits

0x39b6,	// (0x0005f68e) mup_progress_pane

0x39c2,	// (0x0005f69a) mup_visualizer_pane_ParamLimits

0x39c2,	// (0x0005f69a) mup_visualizer_pane

0x39fc,	// (0x0005f6d4) mup_volume_pane_ParamLimits

0x39fc,	// (0x0005f6d4) mup_volume_pane

0xb1d2,	// (0x00066eaa) mup_visualizer_pane_g1_ParamLimits

0xb1d2,	// (0x00066eaa) mup_visualizer_pane_g1

0xb1d2,	// (0x00066eaa) mup_visualizer_pane_g2_ParamLimits

0xb1d2,	// (0x00066eaa) mup_visualizer_pane_g2

0xb2a0,	// (0x00066f78) mup_visualizer_pane_g3_ParamLimits

0xb2a0,	// (0x00066f78) mup_visualizer_pane_g3

0x0002,

0xf41c,	// (0x0006b0f4) mup_visualizer_pane_g_ParamLimits

0xf41c,	// (0x0006b0f4) mup_visualizer_pane_g

0xa886,	// (0x0006655e) mup_volume_pane_g1

0xb52a,	// (0x00067202) mup_volume_pane_g2

0x0001,

0xf423,	// (0x0006b0fb) mup_volume_pane_g

0xa886,	// (0x0006655e) mup_progress_pane_g1

0xb533,	// (0x0006720b) mup_progress_pane_g2

0xb53c,	// (0x00067214) mup_progress_pane_g3

0x0002,

0xf428,	// (0x0006b100) mup_progress_pane_g

0xa511,	// (0x000661e9) bg_popup_window_pane_cp05

0xb545,	// (0x0006721d) heading_pane_cp02_ParamLimits

0xb545,	// (0x0006721d) heading_pane_cp02

0xb55f,	// (0x00067237) list_popup_blid_pane

0xb567,	// (0x0006723f) list_blid_sat_info_pane_ParamLimits

0xb567,	// (0x0006723f) list_blid_sat_info_pane

0xb57a,	// (0x00067252) list_blid_sat_info_pane_g1

0xb582,	// (0x0006725a) list_blid_sat_info_pane_t1

0x3b09,	// (0x0005f7e1) mup_equalizer_pane_ParamLimits

0x3b09,	// (0x0005f7e1) mup_equalizer_pane

0x3b2a,	// (0x0005f802) mup_equalizer_pane_cp1_ParamLimits

0x3b2a,	// (0x0005f802) mup_equalizer_pane_cp1

0x3b4b,	// (0x0005f823) mup_equalizer_pane_cp2_ParamLimits

0x3b4b,	// (0x0005f823) mup_equalizer_pane_cp2

0x3b6c,	// (0x0005f844) mup_equalizer_pane_cp3_ParamLimits

0x3b6c,	// (0x0005f844) mup_equalizer_pane_cp3

0x3b8d,	// (0x0005f865) mup_equalizer_pane_cp4_ParamLimits

0x3b8d,	// (0x0005f865) mup_equalizer_pane_cp4

0x3bae,	// (0x0005f886) mup_equalizer_pane_cp5

0x3bc4,	// (0x0005f89c) mup_equalizer_pane_cp6

0x3bdc,	// (0x0005f8b4) mup_equalizer_pane_cp7

0xc714,	// (0x000683ec) bg_popup_call_poc_act_pane_g9

0xc71c,	// (0x000683f4) bg_popup_call_poc_act_pane_g10

0xc724,	// (0x000683fc) bg_popup_call_poc_act_pane_g11

0x000a,

0xa76c,	// (0x00066444) mup_scale_pane

0xa886,	// (0x0006655e) mup_scale_pane_g1

0xb590,	// (0x00067268) mup_scale_pane_g2

0x0006,

0xf444,	// (0x0006b11c) mup_scale_pane_g

0xb5b4,	// (0x0006728c) msg_data_pane

0xb5bc,	// (0x00067294) scroll_pane_cp017

0x3c06,	// (0x0005f8de) bg_list_pane_cp04_ParamLimits

0x3c06,	// (0x0005f8de) bg_list_pane_cp04

0xb5c4,	// (0x0006729c) msg_data_pane_g1

0x3c22,	// (0x0005f8fa) msg_data_pane_g2

0x3c2c,	// (0x0005f904) msg_data_pane_g3

0x3c34,	// (0x0005f90c) msg_data_pane_g4

0x3c3c,	// (0x0005f914) msg_data_pane_g5

0x3c44,	// (0x0005f91c) msg_data_pane_g6

0x3c4c,	// (0x0005f924) msg_data_pane_g7

0x0006,

0xf453,	// (0x0006b12b) msg_data_pane_g

0x3c54,	// (0x0005f92c) msg_text_pane_ParamLimits

0x3c54,	// (0x0005f92c) msg_text_pane

0x3c94,	// (0x0005f96c) qrid_highlight_pane_cp011_ParamLimits

0x3c94,	// (0x0005f96c) qrid_highlight_pane_cp011

0xa511,	// (0x000661e9) msg_body_pane

0xa511,	// (0x000661e9) msg_header_pane

0xb5d5,	// (0x000672ad) input_focus_pane_cp07

0x3cba,	// (0x0005f992) msg_header_pane_t1_ParamLimits

0x3cba,	// (0x0005f992) msg_header_pane_t1

0xa045,	// (0x00065d1d) msg_header_pane_t2_ParamLimits

0xa045,	// (0x00065d1d) msg_header_pane_t2

0x0001,

0xf467,	// (0x0006b13f) msg_header_pane_t_ParamLimits

0xf467,	// (0x0006b13f) msg_header_pane_t

0xb5ea,	// (0x000672c2) msg_body_pane_g1

0x3ccc,	// (0x0005f9a4) msg_body_pane_t1_ParamLimits

0x3ccc,	// (0x0005f9a4) msg_body_pane_t1

0xa057,	// (0x00065d2f) msg_body_pane_t2_ParamLimits

0xa057,	// (0x00065d2f) msg_body_pane_t2

0xa069,	// (0x00065d41) msg_body_pane_t3_ParamLimits

0xa069,	// (0x00065d41) msg_body_pane_t3

0x0002,

0xf46c,	// (0x0006b144) msg_body_pane_t_ParamLimits

0xf46c,	// (0x0006b144) msg_body_pane_t

0x3d4f,	// (0x0005fa27) main_viewer_pane_g1_ParamLimits

0x3d4f,	// (0x0005fa27) main_viewer_pane_g1

0x3d5b,	// (0x0005fa33) main_viewer_pane_g2_ParamLimits

0x3d5b,	// (0x0005fa33) main_viewer_pane_g2

0x3d67,	// (0x0005fa3f) main_viewer_pane_g3_ParamLimits

0x3d67,	// (0x0005fa3f) main_viewer_pane_g3

0x3d78,	// (0x0005fa50) main_viewer_pane_g4_ParamLimits

0x3d78,	// (0x0005fa50) main_viewer_pane_g4

0x3d89,	// (0x0005fa61) main_viewer_pane_g5_ParamLimits

0x3d89,	// (0x0005fa61) main_viewer_pane_g5

0x3d89,	// (0x0005fa61) main_viewer_pane_g7_ParamLimits

0x3d89,	// (0x0005fa61) main_viewer_pane_g7

0xaf09,	// (0x00066be1) main_viewer_pane_g8_ParamLimits

0xaf09,	// (0x00066be1) main_viewer_pane_g8

0x0007,

0xf47c,	// (0x0006b154) main_viewer_pane_g_ParamLimits

0xf47c,	// (0x0006b154) main_viewer_pane_g

0xb5f2,	// (0x000672ca) viewer_content_pane_ParamLimits

0xb5f2,	// (0x000672ca) viewer_content_pane

0x3dc7,	// (0x0005fa9f) main_postcard_pane_g1_ParamLimits

0x3dc7,	// (0x0005fa9f) main_postcard_pane_g1

0x3dd5,	// (0x0005faad) main_postcard_pane_g2_ParamLimits

0x3dd5,	// (0x0005faad) main_postcard_pane_g2

0x3de3,	// (0x0005fabb) main_postcard_pane_g3_ParamLimits

0x3de3,	// (0x0005fabb) main_postcard_pane_g3

0x0005,

0xf48d,	// (0x0006b165) main_postcard_pane_g_ParamLimits

0xf48d,	// (0x0006b165) main_postcard_pane_g

0x3df3,	// (0x0005facb) main_postcard_pane_g4

0xc8f6,	// (0x000685ce) smil_status_volume_pane_g2

0x3e1f,	// (0x0005faf7) postcard_pane_ParamLimits

0x3e1f,	// (0x0005faf7) postcard_pane

0xb1d2,	// (0x00066eaa) postcard_pane_g1_ParamLimits

0xb1d2,	// (0x00066eaa) postcard_pane_g1

0x3e51,	// (0x0005fb29) postcard_pane_g2_ParamLimits

0x3e51,	// (0x0005fb29) postcard_pane_g2

0x3e5d,	// (0x0005fb35) postcard_pane_g3_ParamLimits

0x3e5d,	// (0x0005fb35) postcard_pane_g3

0xb60e,	// (0x000672e6) postcard_pane_g4_ParamLimits

0xb60e,	// (0x000672e6) postcard_pane_g4

0x3e69,	// (0x0005fb41) postcard_pane_g5_ParamLimits

0x3e69,	// (0x0005fb41) postcard_pane_g5

0x3e75,	// (0x0005fb4d) postcard_pane_g6_ParamLimits

0x3e75,	// (0x0005fb4d) postcard_pane_g6

0xb600,	// (0x000672d8) postcard_pane_g7_ParamLimits

0xb600,	// (0x000672d8) postcard_pane_g7

0x0006,

0xf49a,	// (0x0006b172) postcard_pane_g_ParamLimits

0xf49a,	// (0x0006b172) postcard_pane_g

0x3e81,	// (0x0005fb59) main_mp2_pane_g1_ParamLimits

0x3e81,	// (0x0005fb59) main_mp2_pane_g1

0x3e8d,	// (0x0005fb65) main_mp2_pane_g2_ParamLimits

0x3e8d,	// (0x0005fb65) main_mp2_pane_g2

0x3e99,	// (0x0005fb71) main_mp2_pane_g3_ParamLimits

0x3e99,	// (0x0005fb71) main_mp2_pane_g3

0x0002,

0xf4a9,	// (0x0006b181) main_mp2_pane_g_ParamLimits

0xf4a9,	// (0x0006b181) main_mp2_pane_g

0x3ea5,	// (0x0005fb7d) main_mp2_pane_t1_ParamLimits

0x3ea5,	// (0x0005fb7d) main_mp2_pane_t1

0x3ebc,	// (0x0005fb94) main_mp2_pane_t2_ParamLimits

0x3ebc,	// (0x0005fb94) main_mp2_pane_t2

0x3ed0,	// (0x0005fba8) main_mp2_pane_t3_ParamLimits

0x3ed0,	// (0x0005fba8) main_mp2_pane_t3

0x0002,

0xf4b0,	// (0x0006b188) main_mp2_pane_t_ParamLimits

0xf4b0,	// (0x0006b188) main_mp2_pane_t

0xb61c,	// (0x000672f4) pec_content_pane_ParamLimits

0xb61c,	// (0x000672f4) pec_content_pane

0xab98,	// (0x00066870) scroll_pane_cp015

0xb62e,	// (0x00067306) pec_attribute_pane_ParamLimits

0xb62e,	// (0x00067306) pec_attribute_pane

0x3ee2,	// (0x0005fbba) pec_content_pane_g1_ParamLimits

0x3ee2,	// (0x0005fbba) pec_content_pane_g1

0xb63e,	// (0x00067316) pec_content_pane_t1_ParamLimits

0xb63e,	// (0x00067316) pec_content_pane_t1

0xb650,	// (0x00067328) pec_content_pane_t2_ParamLimits

0xb650,	// (0x00067328) pec_content_pane_t2

0x0001,

0x03d6,	// (0x0005c0ae) pec_content_pane_t_ParamLimits

0x03d6,	// (0x0005c0ae) pec_content_pane_t

0x3eee,	// (0x0005fbc6) list_single_graphic_pane_cp01_ParamLimits

0x3eee,	// (0x0005fbc6) list_single_graphic_pane_cp01

0xa76c,	// (0x00066444) bg_popup_sub_pane_cp04

0xb662,	// (0x0006733a) popup_mup_playback_window_g1

0xb66e,	// (0x00067346) popup_mup_playback_window_t1

0xb683,	// (0x0006735b) popup_mup_playback_window_t2

0x0001,

0x03db,	// (0x0005c0b3) popup_mup_playback_window_t

0xb6ba,	// (0x00067392) main_image_pane_g1_ParamLimits

0xb6ba,	// (0x00067392) main_image_pane_g1

0xb6fd,	// (0x000673d5) scroll_pane_cp018_ParamLimits

0xb6fd,	// (0x000673d5) scroll_pane_cp018

0xb715,	// (0x000673ed) scroll_pane_cp016_ParamLimits

0xb715,	// (0x000673ed) scroll_pane_cp016

0x3f87,	// (0x0005fc5f) smil2_image_pane_ParamLimits

0x3f87,	// (0x0005fc5f) smil2_image_pane

0x3fb7,	// (0x0005fc8f) smil2_root_pane_ParamLimits

0x3fb7,	// (0x0005fc8f) smil2_root_pane

0x3fe3,	// (0x0005fcbb) smil2_text_pane_ParamLimits

0x3fe3,	// (0x0005fcbb) smil2_text_pane

0xa511,	// (0x000661e9) bg_list_pane_cp06

0xb751,	// (0x00067429) grid_radio_pane

0xa511,	// (0x000661e9) bg_popup_window_pane_cp06

0xb759,	// (0x00067431) main_fmradio_pane_t1

0xb0e1,	// (0x00066db9) heading_pane_cp04

0xb767,	// (0x0006743f) main_fmradio_pane_t2

0xc72c,	// (0x00068404) popup_cale_lunar_info_window_g1

0xb775,	// (0x0006744d) main_fmradio_pane_t3

0xc734,	// (0x0006840c) popup_cale_lunar_info_window_g2

0xb783,	// (0x0006745b) main_fmradio_pane_t4

0x0001,

0xb791,	// (0x00067469) main_fmradio_pane_t5

0x0004,

0x04b6,	// (0x0005c18e) popup_cale_lunar_info_window_g

0x03f0,	// (0x0005c0c8) main_fmradio_pane_t

0xb79f,	// (0x00067477) wait_bar_pane_cp03

0xb7a7,	// (0x0006747f) cell_fmradio_pane_ParamLimits

0xb7a7,	// (0x0006747f) cell_fmradio_pane

0xb600,	// (0x000672d8) cell_fmradio_pane_g1_ParamLimits

0xb600,	// (0x000672d8) cell_fmradio_pane_g1

0xa511,	// (0x000661e9) grid_highlight_pane_cp011

0xb7ba,	// (0x00067492) poc_content_pane_ParamLimits

0xb7ba,	// (0x00067492) poc_content_pane

0xb7cc,	// (0x000674a4) scroll_pane_cp019

0x4023,	// (0x0005fcfb) popup_call_poc_act_window_ParamLimits

0x4023,	// (0x0005fcfb) popup_call_poc_act_window

0x4030,	// (0x0005fd08) popup_call_poc_inact_window_ParamLimits

0x4030,	// (0x0005fd08) popup_call_poc_inact_window

0x048d,	// (0x0005c165) bg_popup_call_poc_act_pane_g

0xc6a4,	// (0x0006837c) bg_popup_call_poc_inact_pane_g1

0xc6ac,	// (0x00068384) bg_popup_call_poc_inact_pane_g2

0xb7d4,	// (0x000674ac) popup_call_poc_act_window_g2

0xc6b4,	// (0x0006838c) bg_popup_call_poc_inact_pane_g3

0xc6bc,	// (0x00068394) bg_popup_call_poc_inact_pane_g4

0xc6c4,	// (0x0006839c) bg_popup_call_poc_inact_pane_g5

0xb7dc,	// (0x000674b4) popup_call_poc_act_window_t1_ParamLimits

0xb7dc,	// (0x000674b4) popup_call_poc_act_window_t1

0xb804,	// (0x000674dc) popup_call_poc_act_window_t2_ParamLimits

0xb804,	// (0x000674dc) popup_call_poc_act_window_t2

0xb82c,	// (0x00067504) popup_call_poc_act_window_t3_ParamLimits

0xb82c,	// (0x00067504) popup_call_poc_act_window_t3

0xb854,	// (0x0006752c) popup_call_poc_act_window_t4_ParamLimits

0xb854,	// (0x0006752c) popup_call_poc_act_window_t4

0x0003,

0x03fb,	// (0x0005c0d3) popup_call_poc_act_window_t_ParamLimits

0x03fb,	// (0x0005c0d3) popup_call_poc_act_window_t

0xc6cc,	// (0x000683a4) bg_popup_call_poc_inact_pane_g6

0xc6d4,	// (0x000683ac) bg_popup_call_poc_inact_pane_g7

0xc6dc,	// (0x000683b4) bg_popup_call_poc_inact_pane_g8

0xb866,	// (0x0006753e) popup_call_poc_inact_window_g2

0xc6e4,	// (0x000683bc) bg_popup_call_poc_inact_pane_g9

0x0008,

0x047a,	// (0x0005c152) bg_popup_call_poc_inact_pane_g

0xb86e,	// (0x00067546) popup_call_poc_inact_window_t1_ParamLimits

0xb86e,	// (0x00067546) popup_call_poc_inact_window_t1

0xb883,	// (0x0006755b) popup_call_poc_inact_window_t2_ParamLimits

0xb883,	// (0x0006755b) popup_call_poc_inact_window_t2

0xb898,	// (0x00067570) popup_call_poc_inact_window_t3_ParamLimits

0xb898,	// (0x00067570) popup_call_poc_inact_window_t3

0x0002,

0x0404,	// (0x0005c0dc) popup_call_poc_inact_window_t_ParamLimits

0x0404,	// (0x0005c0dc) popup_call_poc_inact_window_t

0xc869,	// (0x00068541) context_pane_ParamLimits

0x4672,	// (0x0006034a) signal_pane_ParamLimits

0xb463,	// (0x0006713b) main_call2_pane

0x45e5,	// (0x000602bd) popup_phob_thumbnail2_window_ParamLimits

0x45e5,	// (0x000602bd) popup_phob_thumbnail2_window

0x3cfd,	// (0x0005f9d5) aid_hotspot_pointer_arrow_pane

0x3d05,	// (0x0005f9dd) aid_hotspot_pointer_hand_pane

0x4352,	// (0x0006002a) phob_pre_status_pane_g5

0x1d8f,	// (0x0005da67) cams_zoom_pane_ParamLimits

0x1d9b,	// (0x0005da73) image_vga_pane_ParamLimits

0x1daa,	// (0x0005da82) main_camera_pane_g1_ParamLimits

0x1db8,	// (0x0005da90) main_camera_pane_g2_ParamLimits

0x1dc4,	// (0x0005da9c) main_camera_pane_g3_ParamLimits

0x1dd0,	// (0x0005daa8) main_camera_pane_g4_ParamLimits

0x1ddc,	// (0x0005dab4) main_camera_pane_g5_ParamLimits

0x1de8,	// (0x0005dac0) main_camera_pane_g6_ParamLimits

0x1df4,	// (0x0005dacc) main_camera_pane_g7_ParamLimits

0xf20a,	// (0x0006aee2) main_camera_pane_g_ParamLimits

0x1e00,	// (0x0005dad8) main_camera_pane_t1_ParamLimits

0x1e12,	// (0x0005daea) main_camera_pane_t2_ParamLimits

0xf21b,	// (0x0006aef3) main_camera_pane_t_ParamLimits

0xa76c,	// (0x00066444) bg_popup_preview_window_pane_cp01_ParamLimits

0xa76c,	// (0x00066444) bg_popup_preview_window_pane_cp01

0xb8ad,	// (0x00067585) popup_phob_thumbnail2_window_g1_ParamLimits

0xb8ad,	// (0x00067585) popup_phob_thumbnail2_window_g1

0xa511,	// (0x000661e9) call2_cli_visual_pane

0x404c,	// (0x0005fd24) popup_call2_audio_conf_window_ParamLimits

0x404c,	// (0x0005fd24) popup_call2_audio_conf_window

0x4061,	// (0x0005fd39) popup_call2_audio_first_window_ParamLimits

0x4061,	// (0x0005fd39) popup_call2_audio_first_window

0x40ff,	// (0x0005fdd7) popup_call2_audio_in_window_ParamLimits

0x40ff,	// (0x0005fdd7) popup_call2_audio_in_window

0x4141,	// (0x0005fe19) popup_call2_audio_out_window_ParamLimits

0x4141,	// (0x0005fe19) popup_call2_audio_out_window

0x41a3,	// (0x0005fe7b) popup_call2_audio_second_window_ParamLimits

0x41a3,	// (0x0005fe7b) popup_call2_audio_second_window

0x4201,	// (0x0005fed9) popup_call2_audio_wait_window_ParamLimits

0x4201,	// (0x0005fed9) popup_call2_audio_wait_window

0xa511,	// (0x000661e9) bg_popup_call2_act_pane_cp03

0xa74e,	// (0x00066426) list_conf_pane_cp

0xb8b9,	// (0x00067591) popup_call2_audio_conf_window_t1

0xb13e,	// (0x00066e16) list_single_graphic_popup_conf2_pane_ParamLimits

0xb13e,	// (0x00066e16) list_single_graphic_popup_conf2_pane

0xb151,	// (0x00066e29) list_highlight_pane_cp04

0xb8c7,	// (0x0006759f) list_single_graphic_popup_conf2_pane_g1

0xb162,	// (0x00066e3a) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf4c7,	// (0x0006b19f) list_single_graphic_popup_conf2_pane_g

0xb8d1,	// (0x000675a9) list_single_graphic_popup_conf2_pane_t1

0xb8df,	// (0x000675b7) bg_popup_call2_act_pane_cp01_ParamLimits

0xb8df,	// (0x000675b7) bg_popup_call2_act_pane_cp01

0xb969,	// (0x00067641) call_type_pane_cp05_ParamLimits

0xb969,	// (0x00067641) call_type_pane_cp05

0xb9bd,	// (0x00067695) popup_call2_audio_second_window_g1_ParamLimits

0xb9bd,	// (0x00067695) popup_call2_audio_second_window_g1

0xba11,	// (0x000676e9) popup_call2_audio_second_window_g2_ParamLimits

0xba11,	// (0x000676e9) popup_call2_audio_second_window_g2

0x0002,

0x0410,	// (0x0005c0e8) popup_call2_audio_second_window_g_ParamLimits

0x0410,	// (0x0005c0e8) popup_call2_audio_second_window_g

0xba76,	// (0x0006774e) popup_call2_audio_second_window_t1_ParamLimits

0xba76,	// (0x0006774e) popup_call2_audio_second_window_t1

0xbb31,	// (0x00067809) popup_call2_audio_second_window_t2_ParamLimits

0xbb31,	// (0x00067809) popup_call2_audio_second_window_t2

0xbb84,	// (0x0006785c) popup_call2_audio_second_window_t3_ParamLimits

0xbb84,	// (0x0006785c) popup_call2_audio_second_window_t3

0x0003,

0x0417,	// (0x0005c0ef) popup_call2_audio_second_window_t_ParamLimits

0x0417,	// (0x0005c0ef) popup_call2_audio_second_window_t

0xa511,	// (0x000661e9) bg_popup_call2_in_pane_cp02

0xa51b,	// (0x000661f3) call_type_pane_cp04

0xa523,	// (0x000661fb) popup_call2_audio_wait_window_g1

0xa52b,	// (0x00066203) popup_call2_audio_wait_window_g2

0x0001,

0xf0f5,	// (0x0006adcd) popup_call2_audio_wait_window_g

0xa533,	// (0x0006620b) popup_call2_audio_wait_window_t3

0xbc77,	// (0x0006794f) bg_popup_call2_act_pane_ParamLimits

0xbc77,	// (0x0006794f) bg_popup_call2_act_pane

0xbd37,	// (0x00067a0f) call_type_pane_cp03_ParamLimits

0xbd37,	// (0x00067a0f) call_type_pane_cp03

0xbd9b,	// (0x00067a73) popup_call2_audio_first_window_g1_ParamLimits

0xbd9b,	// (0x00067a73) popup_call2_audio_first_window_g1

0xbe0b,	// (0x00067ae3) popup_call2_audio_first_window_g2_ParamLimits

0xbe0b,	// (0x00067ae3) popup_call2_audio_first_window_g2

0xb1d2,	// (0x00066eaa) popup_call2_audio_first_window_g3_ParamLimits

0xb1d2,	// (0x00066eaa) popup_call2_audio_first_window_g3

0x0004,

0xf4cc,	// (0x0006b1a4) popup_call2_audio_first_window_g_ParamLimits

0xf4cc,	// (0x0006b1a4) popup_call2_audio_first_window_g

0xbee9,	// (0x00067bc1) popup_call2_audio_first_window_t1_ParamLimits

0xbee9,	// (0x00067bc1) popup_call2_audio_first_window_t1

0xbfec,	// (0x00067cc4) popup_call2_audio_first_window_t4_ParamLimits

0xbfec,	// (0x00067cc4) popup_call2_audio_first_window_t4

0xc0cf,	// (0x00067da7) popup_call2_audio_first_window_t5_ParamLimits

0xc0cf,	// (0x00067da7) popup_call2_audio_first_window_t5

0x0003,

0x042b,	// (0x0005c103) popup_call2_audio_first_window_t_ParamLimits

0x042b,	// (0x0005c103) popup_call2_audio_first_window_t

0xa764,	// (0x0006643c) bg_popup_call2_act_pane_g1

0xc73c,	// (0x00068414) popup_cale_lunar_info_window_t1

0xc74a,	// (0x00068422) popup_cale_lunar_info_window_t2

0xc758,	// (0x00068430) popup_cale_lunar_info_window_t3

0xa511,	// (0x000661e9) bg_popup_call2_bubble_pane

0xc1d0,	// (0x00067ea8) bg_popup_call2_in_pane_cp01_ParamLimits

0xc1d0,	// (0x00067ea8) bg_popup_call2_in_pane_cp01

0x9d48,	// (0x00065a20) call_type_pane_cp02

0xc218,	// (0x00067ef0) popup_call2_audio_out_window_g1_ParamLimits

0xc218,	// (0x00067ef0) popup_call2_audio_out_window_g1

0xc244,	// (0x00067f1c) popup_call2_audio_out_window_g2_ParamLimits

0xc244,	// (0x00067f1c) popup_call2_audio_out_window_g2

0xc26c,	// (0x00067f44) popup_call2_audio_out_window_g3_ParamLimits

0xc26c,	// (0x00067f44) popup_call2_audio_out_window_g3

0x0003,

0x0434,	// (0x0005c10c) popup_call2_audio_out_window_g_ParamLimits

0x0434,	// (0x0005c10c) popup_call2_audio_out_window_g

0xc2a7,	// (0x00067f7f) popup_call2_audio_out_window_t1_ParamLimits

0xc2a7,	// (0x00067f7f) popup_call2_audio_out_window_t1

0xc306,	// (0x00067fde) popup_call2_audio_out_window_t2_ParamLimits

0xc306,	// (0x00067fde) popup_call2_audio_out_window_t2

0xc35a,	// (0x00068032) popup_call2_audio_out_window_t3_ParamLimits

0xc35a,	// (0x00068032) popup_call2_audio_out_window_t3

0xc370,	// (0x00068048) popup_call2_audio_out_window_t4_ParamLimits

0xc370,	// (0x00068048) popup_call2_audio_out_window_t4

0xc386,	// (0x0006805e) popup_call2_audio_out_window_t5_ParamLimits

0xc386,	// (0x0006805e) popup_call2_audio_out_window_t5

0x0005,

0x043d,	// (0x0005c115) popup_call2_audio_out_window_t_ParamLimits

0x043d,	// (0x0005c115) popup_call2_audio_out_window_t

0xc3ea,	// (0x000680c2) bg_popup_call2_in_pane_ParamLimits

0xc3ea,	// (0x000680c2) bg_popup_call2_in_pane

0xc446,	// (0x0006811e) popup_call2_audio_in_window_g1_ParamLimits

0xc446,	// (0x0006811e) popup_call2_audio_in_window_g1

0xc47e,	// (0x00068156) popup_call2_audio_in_window_g2_ParamLimits

0xc47e,	// (0x00068156) popup_call2_audio_in_window_g2

0xc4b6,	// (0x0006818e) popup_call2_audio_in_window_g3_ParamLimits

0xc4b6,	// (0x0006818e) popup_call2_audio_in_window_g3

0x0003,

0x044a,	// (0x0005c122) popup_call2_audio_in_window_g_ParamLimits

0x044a,	// (0x0005c122) popup_call2_audio_in_window_g

0xc50e,	// (0x000681e6) popup_call2_audio_in_window_t1_ParamLimits

0xc50e,	// (0x000681e6) popup_call2_audio_in_window_t1

0xc58e,	// (0x00068266) popup_call2_audio_in_window_t2_ParamLimits

0xc58e,	// (0x00068266) popup_call2_audio_in_window_t2

0xc60e,	// (0x000682e6) popup_call2_audio_in_window_t3_ParamLimits

0xc60e,	// (0x000682e6) popup_call2_audio_in_window_t3

0xc628,	// (0x00068300) popup_call2_audio_in_window_t4_ParamLimits

0xc628,	// (0x00068300) popup_call2_audio_in_window_t4

0xc63a,	// (0x00068312) popup_call2_audio_in_window_t5_ParamLimits

0xc63a,	// (0x00068312) popup_call2_audio_in_window_t5

0xc64f,	// (0x00068327) popup_call2_audio_in_window_t6_ParamLimits

0xc64f,	// (0x00068327) popup_call2_audio_in_window_t6

0x0005,

0x0453,	// (0x0005c12b) popup_call2_audio_in_window_t_ParamLimits

0x0453,	// (0x0005c12b) popup_call2_audio_in_window_t

0xa764,	// (0x0006643c) bg_popup_call2_in_pane_g1

0xc766,	// (0x0006843e) popup_cale_lunar_info_window_t4

0x0003,

0x04bb,	// (0x0005c193) popup_cale_lunar_info_window_t

0xa76c,	// (0x00066444) bg_popup_call2_rect_pane_ParamLimits

0xa76c,	// (0x00066444) bg_popup_call2_rect_pane

0xa511,	// (0x000661e9) call2_cli_visual_graphic_pane

0xa511,	// (0x000661e9) call2_cli_visual_text_pane

0x4718,	// (0x000603f0) smil_status_volume_pane_g3

0x0002,

0xa886,	// (0x0006655e) call2_cli_visual_graphic_pane_g1

0xa886,	// (0x0006655e) call2_cli_visual_graphic_pane_g2

0xa886,	// (0x0006655e) call2_cli_visual_graphic_pane_g3

0x0002,

0xf4d7,	// (0x0006b1af) call2_cli_visual_graphic_pane_g

0xc664,	// (0x0006833c) bg_popup_call2_rect_pane_g1

0xa912,	// (0x000665ea) bg_popup_call2_rect_pane_g2

0xc66c,	// (0x00068344) bg_popup_call2_rect_pane_g3

0xc674,	// (0x0006834c) bg_popup_call2_rect_pane_g4

0xc67c,	// (0x00068354) bg_popup_call2_rect_pane_g5

0xc684,	// (0x0006835c) bg_popup_call2_rect_pane_g6

0xc68c,	// (0x00068364) bg_popup_call2_rect_pane_g7

0xc694,	// (0x0006836c) bg_popup_call2_rect_pane_g8

0xc69c,	// (0x00068374) bg_popup_call2_rect_pane_g9

0x0008,

0xf4de,	// (0x0006b1b6) bg_popup_call2_rect_pane_g

0xc6a4,	// (0x0006837c) bg_popup_call2_bubble_pane_g1

0xc6ac,	// (0x00068384) bg_popup_call2_bubble_pane_g2

0xc6b4,	// (0x0006838c) bg_popup_call2_bubble_pane_g3

0xc6bc,	// (0x00068394) bg_popup_call2_bubble_pane_g4

0xc6c4,	// (0x0006839c) bg_popup_call2_bubble_pane_g5

0xc6cc,	// (0x000683a4) bg_popup_call2_bubble_pane_g6

0xc6d4,	// (0x000683ac) bg_popup_call2_bubble_pane_g7

0xc6dc,	// (0x000683b4) bg_popup_call2_bubble_pane_g8

0xc6e4,	// (0x000683bc) bg_popup_call2_bubble_pane_g9

0x0008,

0x047a,	// (0x0005c152) bg_popup_call2_bubble_pane_g

0x179c,	// (0x0005d474) aid_cale_week_size_cell_pane

0x1e24,	// (0x0005dafc) aid_cams_cif_uncrop_pane_ParamLimits

0x1e24,	// (0x0005dafc) aid_cams_cif_uncrop_pane

0x1f7f,	// (0x0005dc57) aid_cams_size_cell_ParamLimits

0x1f7f,	// (0x0005dc57) aid_cams_size_cell

0x1f8b,	// (0x0005dc63) grid_cams_pane_ParamLimits

0x1f99,	// (0x0005dc71) linegrid_cams_pane_ParamLimits

0x217d,	// (0x0005de55) call_video_pane_t1

0x219e,	// (0x0005de76) call_video_pane_t2

0x0001,

0xf26e,	// (0x0006af46) call_video_pane_t

0x26e7,	// (0x0005e3bf) aid_cale_month_size_cell_pane_ParamLimits

0x26e7,	// (0x0005e3bf) aid_cale_month_size_cell_pane

0xf521,	// (0x0006b1f9) smil_status_volume_pane_g

0x4725,	// (0x000603fd) volume_smil_pane_ParamLimits

0x0ee5,	// (0x0005cbbd) aid_popup2_width_pane

0x1690,	// (0x0005d368) cell_qdial_pane_g4_ParamLimits

0x1690,	// (0x0005d368) cell_qdial_pane_g4

0x36f1,	// (0x0005f3c9) aid_blid_cardinal_pane_ParamLimits

0x3701,	// (0x0005f3d9) aid_blid_destination_pane_ParamLimits

0x3701,	// (0x0005f3d9) aid_blid_destination_pane

0xa76c,	// (0x00066444) bg_popup_call_poc_act_pane_ParamLimits

0xa76c,	// (0x00066444) bg_popup_call_poc_act_pane

0xa76c,	// (0x00066444) bg_popup_call_poc_inact_pane_ParamLimits

0xa76c,	// (0x00066444) bg_popup_call_poc_inact_pane

0xc6ec,	// (0x000683c4) bg_popup_call_poc_act_pane_g1

0xc6f4,	// (0x000683cc) bg_popup_call_poc_act_pane_g2

0xc6fc,	// (0x000683d4) bg_popup_call_poc_act_pane_g3

0xc6bc,	// (0x00068394) bg_popup_call_poc_act_pane_g4

0xc6c4,	// (0x0006839c) bg_popup_call_poc_act_pane_g5

0xc704,	// (0x000683dc) bg_popup_call_poc_act_pane_g6

0xc6d4,	// (0x000683ac) bg_popup_call_poc_act_pane_g7

0xc70c,	// (0x000683e4) bg_popup_call_poc_act_pane_g8

0xa511,	// (0x000661e9) main_usb_pane

0x4514,	// (0x000601ec) popup_cale_lunar_info_window

0x24c9,	// (0x0005e1a1) im_reading_pane_t1_ParamLimits

0xaaf0,	// (0x000667c8) list_im_pane_ParamLimits

0xab01,	// (0x000667d9) scroll_pane_cp07_ParamLimits

0xa511,	// (0x000661e9) grid_highlight_pane_cp012

0xa76c,	// (0x00066444) mup_scale_pane_ParamLimits

0xb1d2,	// (0x00066eaa) main_usb_pane_g1_ParamLimits

0xb1d2,	// (0x00066eaa) main_usb_pane_g1

0x4275,	// (0x0005ff4d) main_usb_pane_g2_ParamLimits

0x4275,	// (0x0005ff4d) main_usb_pane_g2

0x0001,

0xf4f1,	// (0x0006b1c9) main_usb_pane_g_ParamLimits

0xf4f1,	// (0x0006b1c9) main_usb_pane_g

0x4281,	// (0x0005ff59) main_usb_pane_t1_ParamLimits

0x4281,	// (0x0005ff59) main_usb_pane_t1

0x4293,	// (0x0005ff6b) main_usb_pane_t2_ParamLimits

0x4293,	// (0x0005ff6b) main_usb_pane_t2

0x42a5,	// (0x0005ff7d) main_usb_pane_t3_ParamLimits

0x42a5,	// (0x0005ff7d) main_usb_pane_t3

0x42b7,	// (0x0005ff8f) main_usb_pane_t4_ParamLimits

0x42b7,	// (0x0005ff8f) main_usb_pane_t4

0x42c9,	// (0x0005ffa1) main_usb_pane_t5_ParamLimits

0x42c9,	// (0x0005ffa1) main_usb_pane_t5

0x42db,	// (0x0005ffb3) main_usb_pane_t6_ParamLimits

0x42db,	// (0x0005ffb3) main_usb_pane_t6

0x0005,

0xf4f6,	// (0x0006b1ce) main_usb_pane_t_ParamLimits

0x3697,	// (0x0005f36f) aid_text_placing

0x36a3,	// (0x0005f37b) main_location2_pane_t1_ParamLimits

0x36b7,	// (0x0005f38f) main_location2_pane_t2_ParamLimits

0x36cb,	// (0x0005f3a3) main_location2_pane_t3_ParamLimits

0x36df,	// (0x0005f3b7) main_location2_pane_t4_ParamLimits

0x36df,	// (0x0005f3b7) main_location2_pane_t4

0xf3ca,	// (0x0006b0a2) main_location2_pane_t_ParamLimits

0xa7a8,	// (0x00066480) find_pinb_pane_g2_ParamLimits

0xa7a8,	// (0x00066480) find_pinb_pane_g2

0x0001,

0xf11b,	// (0x0006adf3) find_pinb_pane_g_ParamLimits

0xf11b,	// (0x0006adf3) find_pinb_pane_g

0xa7b4,	// (0x0006648c) find_pinb_pane_t1_ParamLimits

0xa7c6,	// (0x0006649e) find_pinb_pane_t2_ParamLimits

0xf120,	// (0x0006adf8) find_pinb_pane_t_ParamLimits

0xa511,	// (0x000661e9) main_call3_pane

0x2c3b,	// (0x0005e913) cale_month_day_heading_pane_t1_ParamLimits

0x2cc1,	// (0x0005e999) cale_month_day_heading_pane_t2_ParamLimits

0x2d52,	// (0x0005ea2a) cale_month_day_heading_pane_t3_ParamLimits

0x2de3,	// (0x0005eabb) cale_month_day_heading_pane_t4_ParamLimits

0x2e74,	// (0x0005eb4c) cale_month_day_heading_pane_t5_ParamLimits

0x2f05,	// (0x0005ebdd) cale_month_day_heading_pane_t6_ParamLimits

0x2f96,	// (0x0005ec6e) cale_month_day_heading_pane_t7_ParamLimits

0xf2a6,	// (0x0006af7e) cale_month_day_heading_pane_t_ParamLimits

0xad4b,	// (0x00066a23) smil_status_volume_pane

0x3e39,	// (0x0005fb11) postcard_address_pane_ParamLimits

0x3e39,	// (0x0005fb11) postcard_address_pane

0x3e45,	// (0x0005fb1d) postcard_message_pane_ParamLimits

0x3e45,	// (0x0005fb1d) postcard_message_pane

0x4240,	// (0x0005ff18) call2_cli_visual_pane_t1_ParamLimits

0x4240,	// (0x0005ff18) call2_cli_visual_pane_t1

0x487c,	// (0x00060554) postcard_message_pane_t1_ParamLimits

0x487c,	// (0x00060554) postcard_message_pane_t1

0x4865,	// (0x0006053d) postcard_address_pane_t1_ParamLimits

0x4865,	// (0x0006053d) postcard_address_pane_t1

0x4856,	// (0x0006052e) popup_call3_audio_in_window_ParamLimits

0x4856,	// (0x0006052e) popup_call3_audio_in_window

0x473a,	// (0x00060412) bg_popup_call3_in_pane_ParamLimits

0x473a,	// (0x00060412) bg_popup_call3_in_pane

0x479c,	// (0x00060474) popup_call3_audio_in_window_g1_ParamLimits

0x479c,	// (0x00060474) popup_call3_audio_in_window_g1

0x47b4,	// (0x0006048c) popup_call3_audio_in_window_g2_ParamLimits

0x47b4,	// (0x0006048c) popup_call3_audio_in_window_g2

0x47cc,	// (0x000604a4) popup_call3_audio_in_window_g3_ParamLimits

0x47cc,	// (0x000604a4) popup_call3_audio_in_window_g3

0x0003,

0xf528,	// (0x0006b200) popup_call3_audio_in_window_g_ParamLimits

0xf528,	// (0x0006b200) popup_call3_audio_in_window_g

0x47f4,	// (0x000604cc) popup_call3_audio_in_window_t1_ParamLimits

0x47f4,	// (0x000604cc) popup_call3_audio_in_window_t1

0x481c,	// (0x000604f4) popup_call3_audio_in_window_t2_ParamLimits

0x481c,	// (0x000604f4) popup_call3_audio_in_window_t2

0x4844,	// (0x0006051c) popup_call3_audio_in_window_t3_ParamLimits

0x4844,	// (0x0006051c) popup_call3_audio_in_window_t3

0x0002,

0xf531,	// (0x0006b209) popup_call3_audio_in_window_t_ParamLimits

0xf531,	// (0x0006b209) popup_call3_audio_in_window_t

0xb463,	// (0x0006713b) bg_popup_call3_rect_pane

0xc664,	// (0x0006833c) bg_popup_call3_rect_pane_g1

0xa912,	// (0x000665ea) bg_popup_call3_rect_pane_g2

0xc66c,	// (0x00068344) bg_popup_call3_rect_pane_g3

0xc674,	// (0x0006834c) bg_popup_call3_rect_pane_g4

0xc67c,	// (0x00068354) bg_popup_call3_rect_pane_g5

0xc684,	// (0x0006835c) bg_popup_call3_rect_pane_g6

0xc68c,	// (0x00068364) bg_popup_call3_rect_pane_g7

0x3a17,	// (0x0005f6ef) mup_visualizer_osc_pane

0xb522,	// (0x000671fa) mup_visualizer_spec_pane

0x475a,	// (0x00060432) call3_video_qcif_pane_ParamLimits

0x475a,	// (0x00060432) call3_video_qcif_pane

0x476c,	// (0x00060444) call3_video_qcif_uncrop_pane_ParamLimits

0x476c,	// (0x00060444) call3_video_qcif_uncrop_pane

0x477a,	// (0x00060452) call3_video_subqcif_pane_ParamLimits

0x477a,	// (0x00060452) call3_video_subqcif_pane

0x478c,	// (0x00060464) call3_video_subqcif_uncrop_pane_ParamLimits

0x478c,	// (0x00060464) call3_video_subqcif_uncrop_pane

0x47e4,	// (0x000604bc) popup_call3_audio_in_window_g4_ParamLimits

0x47e4,	// (0x000604bc) popup_call3_audio_in_window_g4

0x4707,	// (0x000603df) mup_spec_half_pane

0x4710,	// (0x000603e8) mup_spec_half_pane_cp

0xc8c9,	// (0x000685a1) mup_osc_middle_pane

0xc8d2,	// (0x000685aa) mup_visualizer_osc_pane_g1

0x46e8,	// (0x000603c0) mup_spec_bar_pane_ParamLimits

0x46e8,	// (0x000603c0) mup_spec_bar_pane

0xc8b6,	// (0x0006858e) mup_spec_bar_pane_g1

0xc8c0,	// (0x00068598) mup_spec_bar_pane_g2

0x0001,

0x04ff,	// (0x0005c1d7) mup_spec_bar_pane_g

0x179c,	// (0x0005d474) aid_cale_week_size_cell_pane_ParamLimits

0x17b1,	// (0x0005d489) bg_cale_heading_pane_ParamLimits

0xa94f,	// (0x00066627) bg_cale_pane_cp01_ParamLimits

0x17d3,	// (0x0005d4ab) cale_week_corner_pane_ParamLimits

0x17ed,	// (0x0005d4c5) cale_week_day_heading_pane_ParamLimits

0x180f,	// (0x0005d4e7) cale_week_scroll_pane_g1_ParamLimits

0x182c,	// (0x0005d504) cale_week_scroll_pane_g2_ParamLimits

0x183f,	// (0x0005d517) cale_week_scroll_pane_g3_ParamLimits

0x1852,	// (0x0005d52a) cale_week_scroll_pane_g4_ParamLimits

0x1865,	// (0x0005d53d) cale_week_scroll_pane_g5_ParamLimits

0x1878,	// (0x0005d550) cale_week_scroll_pane_g6_ParamLimits

0x188b,	// (0x0005d563) cale_week_scroll_pane_g7_ParamLimits

0x189e,	// (0x0005d576) cale_week_scroll_pane_g8_ParamLimits

0x18b3,	// (0x0005d58b) cale_week_scroll_pane_g9_ParamLimits

0x18c6,	// (0x0005d59e) cale_week_scroll_pane_g10_ParamLimits

0x18d9,	// (0x0005d5b1) cale_week_scroll_pane_g11_ParamLimits

0x18ec,	// (0x0005d5c4) cale_week_scroll_pane_g12_ParamLimits

0x1903,	// (0x0005d5db) cale_week_scroll_pane_g13_ParamLimits

0x191e,	// (0x0005d5f6) cale_week_scroll_pane_g14_ParamLimits

0x1939,	// (0x0005d611) cale_week_scroll_pane_g15_ParamLimits

0xf1ac,	// (0x0006ae84) cale_week_scroll_pane_g_ParamLimits

0x1969,	// (0x0005d641) cale_week_time_pane_ParamLimits

0x197e,	// (0x0005d656) grid_cale_week_pane_ParamLimits

0xa96d,	// (0x00066645) listscroll_cale_week_pane_t1

0xa97f,	// (0x00066657) scroll_pane_cp08_ParamLimits

0x2750,	// (0x0005e428) cale_month_corner_pane_ParamLimits

0xad21,	// (0x000669f9) cale_month_pane_t1

0x2bd8,	// (0x0005e8b0) cale_month_week_pane_ParamLimits

0xb1d2,	// (0x00066eaa) popup_call_status_window_g1_ParamLimits

0x34ca,	// (0x0005f1a2) popup_call_status_window_g2_ParamLimits

0x34d6,	// (0x0005f1ae) popup_call_status_window_g3_ParamLimits

0xf356,	// (0x0006b02e) popup_call_status_window_g_ParamLimits

0xb0d1,	// (0x00066da9) aid_call2_pane

0x3cae,	// (0x0005f986) msg_header_pane_g1

0x3e39,	// (0x0005fb11) postcard_address2_pane_ParamLimits

0x3e39,	// (0x0005fb11) postcard_address2_pane

0x3e45,	// (0x0005fb1d) postcard_message2_pane_ParamLimits

0x3e45,	// (0x0005fb1d) postcard_message2_pane

0x4680,	// (0x00060358) message2_row_pane_ParamLimits

0x4680,	// (0x00060358) message2_row_pane

0x469b,	// (0x00060373) address2_row_pane_ParamLimits

0x469b,	// (0x00060373) address2_row_pane

0xc884,	// (0x0006855c) postcard_message2_row_pane_g1

0xc88c,	// (0x00068564) postcard_message2_row_pane_t1

0xc884,	// (0x0006855c) address2_row_pane_g1

0xc88c,	// (0x00068564) address2_row_pane_t1

0x1ce6,	// (0x0005d9be) aid_size_cell_vorec

0xa511,	// (0x000661e9) main_rss_pane

0x46ae,	// (0x00060386) rss_list_single_pane_ParamLimits

0x46ae,	// (0x00060386) rss_list_single_pane

0xc89a,	// (0x00068572) rss_list_single_pane_t1

0xc8a8,	// (0x00068580) rss_list_single_pane_t2

0x0001,

0x04fa,	// (0x0005c1d2) rss_list_single_pane_t

0xa511,	// (0x000661e9) main_camera2_pane

0xa511,	// (0x000661e9) main_video2_pane

0x48e0,	// (0x000605b8) cams_zoom_pane_cp2_ParamLimits

0x48e0,	// (0x000605b8) cams_zoom_pane_cp2

0x48ec,	// (0x000605c4) image2_vga_pane_ParamLimits

0x48ec,	// (0x000605c4) image2_vga_pane

0x48fb,	// (0x000605d3) main_camera2_pane_g1_ParamLimits

0x48fb,	// (0x000605d3) main_camera2_pane_g1

0x4907,	// (0x000605df) main_camera2_pane_g2_ParamLimits

0x4907,	// (0x000605df) main_camera2_pane_g2

0x4913,	// (0x000605eb) main_camera2_pane_g3_ParamLimits

0x4913,	// (0x000605eb) main_camera2_pane_g3

0x491f,	// (0x000605f7) main_camera2_pane_g4_ParamLimits

0x491f,	// (0x000605f7) main_camera2_pane_g4

0x492b,	// (0x00060603) main_camera2_pane_g5_ParamLimits

0x492b,	// (0x00060603) main_camera2_pane_g5

0x4937,	// (0x0006060f) main_camera2_pane_g6_ParamLimits

0x4937,	// (0x0006060f) main_camera2_pane_g6

0x4943,	// (0x0006061b) main_camera2_pane_g7_ParamLimits

0x4943,	// (0x0006061b) main_camera2_pane_g7

0x494f,	// (0x00060627) main_camera2_pane_g8_ParamLimits

0x494f,	// (0x00060627) main_camera2_pane_g8

0x0008,

0xf538,	// (0x0006b210) main_camera2_pane_g_ParamLimits

0xf538,	// (0x0006b210) main_camera2_pane_g

0x4967,	// (0x0006063f) main_camera2_pane_t1_ParamLimits

0x4967,	// (0x0006063f) main_camera2_pane_t1

0x4979,	// (0x00060651) main_camera2_pane_t2_ParamLimits

0x4979,	// (0x00060651) main_camera2_pane_t2

0x498b,	// (0x00060663) main_camera2_pane_t3_ParamLimits

0x498b,	// (0x00060663) main_camera2_pane_t3

0x499d,	// (0x00060675) main_camera2_pane_t4_ParamLimits

0x499d,	// (0x00060675) main_camera2_pane_t4

0x0006,

0xf54b,	// (0x0006b223) main_camera2_pane_t_ParamLimits

0xf54b,	// (0x0006b223) main_camera2_pane_t

0x49ff,	// (0x000606d7) cams_zoom_pane_cp4_ParamLimits

0x49ff,	// (0x000606d7) cams_zoom_pane_cp4

0x4a0f,	// (0x000606e7) image2_cif_pane_ParamLimits

0x4a0f,	// (0x000606e7) image2_cif_pane

0x4a24,	// (0x000606fc) image2_subqcif_pane_ParamLimits

0x4a24,	// (0x000606fc) image2_subqcif_pane

0x4a33,	// (0x0006070b) main_video2_pane_g1_ParamLimits

0x4a33,	// (0x0006070b) main_video2_pane_g1

0x4a45,	// (0x0006071d) main_video2_pane_g2_ParamLimits

0x4a45,	// (0x0006071d) main_video2_pane_g2

0x4a55,	// (0x0006072d) main_video2_pane_g3_ParamLimits

0x4a55,	// (0x0006072d) main_video2_pane_g3

0x4a65,	// (0x0006073d) main_video2_pane_g4_ParamLimits

0x4a65,	// (0x0006073d) main_video2_pane_g4

0x4a75,	// (0x0006074d) main_video2_pane_g5_ParamLimits

0x4a75,	// (0x0006074d) main_video2_pane_g5

0x4a85,	// (0x0006075d) main_video2_pane_g6_ParamLimits

0x4a85,	// (0x0006075d) main_video2_pane_g6

0x0005,

0xf55a,	// (0x0006b232) main_video2_pane_g_ParamLimits

0xf55a,	// (0x0006b232) main_video2_pane_g

0x4a97,	// (0x0006076f) main_video2_pane_t1_ParamLimits

0x4a97,	// (0x0006076f) main_video2_pane_t1

0x4ab1,	// (0x00060789) main_video2_pane_t2_ParamLimits

0x4ab1,	// (0x00060789) main_video2_pane_t2

0x4ad7,	// (0x000607af) main_video2_pane_t3_ParamLimits

0x4ad7,	// (0x000607af) main_video2_pane_t3

0x0002,

0xf567,	// (0x0006b23f) main_video2_pane_t_ParamLimits

0xf567,	// (0x0006b23f) main_video2_pane_t

0x4392,	// (0x0006006a) call_muted_g2

0x0001,

0xf51c,	// (0x0006b1f4) call_muted_g

0xa511,	// (0x000661e9) main_mup2_pane

0xc909,	// (0x000685e1) main_mup2_pane_g1_ParamLimits

0xc909,	// (0x000685e1) main_mup2_pane_g1

0x4afd,	// (0x000607d5) main_mup2_pane_g2_ParamLimits

0x4afd,	// (0x000607d5) main_mup2_pane_g2

0x4d7f,	// (0x00060a57) main_mup_pane_g13_cp1

0x4d87,	// (0x00060a5f) mup_volume_pane_cp1

0x4b1d,	// (0x000607f5) main_mup2_pane_g4_ParamLimits

0x4b1d,	// (0x000607f5) main_mup2_pane_g4

0x4b32,	// (0x0006080a) main_mup2_pane_g5_ParamLimits

0x4b32,	// (0x0006080a) main_mup2_pane_g5

0x4b47,	// (0x0006081f) main_mup2_pane_g6_ParamLimits

0x4b47,	// (0x0006081f) main_mup2_pane_g6

0x4b5c,	// (0x00060834) main_mup2_pane_g7_ParamLimits

0x4b5c,	// (0x00060834) main_mup2_pane_g7

0x0006,

0xf56e,	// (0x0006b246) main_mup2_pane_g_ParamLimits

0xf56e,	// (0x0006b246) main_mup2_pane_g

0x4b78,	// (0x00060850) main_mup2_pane_t1_ParamLimits

0x4b78,	// (0x00060850) main_mup2_pane_t1

0x4b8f,	// (0x00060867) main_mup2_pane_t2_ParamLimits

0x4b8f,	// (0x00060867) main_mup2_pane_t2

0x4ba6,	// (0x0006087e) main_mup2_pane_t3_ParamLimits

0x4ba6,	// (0x0006087e) main_mup2_pane_t3

0x4bbd,	// (0x00060895) main_mup2_pane_t4_ParamLimits

0x4bbd,	// (0x00060895) main_mup2_pane_t4

0x4bd7,	// (0x000608af) main_mup2_pane_t5_ParamLimits

0x4bd7,	// (0x000608af) main_mup2_pane_t5

0x4bf1,	// (0x000608c9) main_mup2_pane_t6_ParamLimits

0x4bf1,	// (0x000608c9) main_mup2_pane_t6

0x0005,

0xf57d,	// (0x0006b255) main_mup2_pane_t_ParamLimits

0xf57d,	// (0x0006b255) main_mup2_pane_t

0x4c29,	// (0x00060901) mup2_visualizer_pane_ParamLimits

0x4c29,	// (0x00060901) mup2_visualizer_pane

0x4c5f,	// (0x00060937) mup_progress_pane_cp_ParamLimits

0x4c5f,	// (0x00060937) mup_progress_pane_cp

0x4d6a,	// (0x00060a42) mup_volume_pane_cp_ParamLimits

0x4d6a,	// (0x00060a42) mup_volume_pane_cp

0x4c76,	// (0x0006094e) mup2_visualizer_pane_g1_ParamLimits

0x4c76,	// (0x0006094e) mup2_visualizer_pane_g1

0xc915,	// (0x000685ed) mup2_visualizer_pane_g2_ParamLimits

0xc915,	// (0x000685ed) mup2_visualizer_pane_g2

0x4c8b,	// (0x00060963) mup2_visualizer_pane_g3_ParamLimits

0x4c8b,	// (0x00060963) mup2_visualizer_pane_g3

0x0002,

0xf58a,	// (0x0006b262) mup2_visualizer_pane_g_ParamLimits

0xf58a,	// (0x0006b262) mup2_visualizer_pane_g

0xb749,	// (0x00067421) aid_size_cell_fmradio

0x44a8,	// (0x00060180) aid_height_parent_landcape

0xab7f,	// (0x00066857) wml_content_pane_cp

0xab87,	// (0x0006685f) wml_tabs_pane

0xab90,	// (0x00066868) popup_wml_miniature_window

0xab98,	// (0x00066870) scroll_pane_cp021

0xabac,	// (0x00066884) wml_content_pane_comp8

0xa511,	// (0x000661e9) bg_popup_sub_pane_cp05

0xc933,	// (0x0006860b) popup_wml_miniature_window_g1

0xc93b,	// (0x00068613) wml_miniature_view_pane

0x4c99,	// (0x00060971) aid_size_wml_view

0x4ca1,	// (0x00060979) wml_miniature_view_pane_g1

0x4caa,	// (0x00060982) wml_miniature_view_pane_g2

0x4cb3,	// (0x0006098b) wml_miniature_view_pane_g3

0x4cbb,	// (0x00060993) wml_miniature_view_pane_g4

0x4cc3,	// (0x0006099b) wml_miniature_view_pane_g5

0x4ccb,	// (0x000609a3) wml_miniature_view_pane_g6

0x4cd3,	// (0x000609ab) wml_miniature_view_pane_g7

0x4cdb,	// (0x000609b3) wml_miniature_view_pane_g8

0x0007,

0xf591,	// (0x0006b269) wml_miniature_view_pane_g

0xc909,	// (0x000685e1) background_graphic_ParamLimits

0xc909,	// (0x000685e1) background_graphic

0xc943,	// (0x0006861b) wml_tabs_2_pane

0xc94c,	// (0x00068624) wml_tabs_3_pane_ParamLimits

0xc94c,	// (0x00068624) wml_tabs_3_pane

0xc95e,	// (0x00068636) wml_tabs_4_pane_ParamLimits

0xc95e,	// (0x00068636) wml_tabs_4_pane

0xc974,	// (0x0006864c) wml_tabs_5_pane_ParamLimits

0xc974,	// (0x0006864c) wml_tabs_5_pane

0xc98e,	// (0x00068666) wml_tabs_pane_g2_ParamLimits

0xc98e,	// (0x00068666) wml_tabs_pane_g2

0xc9a2,	// (0x0006867a) wml_tabs_pane_g3_ParamLimits

0xc9a2,	// (0x0006867a) wml_tabs_pane_g3

0x4ce3,	// (0x000609bb) wml_tabs_2_active_pane_ParamLimits

0x4ce3,	// (0x000609bb) wml_tabs_2_active_pane

0x4cf3,	// (0x000609cb) wml_tabs_2_passive_pane_ParamLimits

0x4cf3,	// (0x000609cb) wml_tabs_2_passive_pane

0x4d03,	// (0x000609db) wml_tabs_3_active_pane_cp_ParamLimits

0x4d03,	// (0x000609db) wml_tabs_3_active_pane_cp

0x4d14,	// (0x000609ec) wml_tabs_3_passive_pane_ParamLimits

0x4d14,	// (0x000609ec) wml_tabs_3_passive_pane

0x4d25,	// (0x000609fd) wml_tabs_3_passive_pane_cp_ParamLimits

0x4d25,	// (0x000609fd) wml_tabs_3_passive_pane_cp

0x4d36,	// (0x00060a0e) tabs_4_active_pane

0x4d3e,	// (0x00060a16) tabs_4_passive_pane

0x4d46,	// (0x00060a1e) tabs_4_passive_pane_cp

0x4d4e,	// (0x00060a26) tabs_4_passive_pane_cp2

0x426d,	// (0x0005ff45) aid_height_text

0x39e4,	// (0x0005f6bc) mup_volume_cont_pane_ParamLimits

0x39e4,	// (0x0005f6bc) mup_volume_cont_pane

0x12cc,	// (0x0005cfa4) aid_size_cell_pinb

0x12d6,	// (0x0005cfae) aid_size_list_pinb

0x4c48,	// (0x00060920) mup2_volume_cont_pane_ParamLimits

0x4c48,	// (0x00060920) mup2_volume_cont_pane

0x4d56,	// (0x00060a2e) mup2_volume_cont_pane_g1_ParamLimits

0x4d56,	// (0x00060a2e) mup2_volume_cont_pane_g1

0x0ef1,	// (0x0005cbc9) aid_size_cell_touch_ParamLimits

0x0ef1,	// (0x0005cbc9) aid_size_cell_touch

0x11b2,	// (0x0005ce8a) touch_pane_ParamLimits

0x11b2,	// (0x0005ce8a) touch_pane

0x11a8,	// (0x0005ce80) main_rss2_pane

0xc9bf,	// (0x00068697) listscroll_rss2_pane

0xc9c8,	// (0x000686a0) rss2_navigation_pane

0xc9d0,	// (0x000686a8) list_rss2_pane

0xb222,	// (0x00066efa) scroll_pane_cp22

0xc9d8,	// (0x000686b0) rss2_navigation_pane_g1

0xc9e1,	// (0x000686b9) rss2_navigation_pane_g2

0xc9e9,	// (0x000686c1) rss2_navigation_pane_g3

0x0002,

0x0585,	// (0x0005c25d) rss2_navigation_pane_g

0xc9f1,	// (0x000686c9) rss2_navigation_pane_t1

0x4d8f,	// (0x00060a67) rss2_list_single_pane_ParamLimits

0x4d8f,	// (0x00060a67) rss2_list_single_pane

0xc9ff,	// (0x000686d7) rss2_list_single_pane_t2

0xca0d,	// (0x000686e5) rss2_list_single_pane_t3_ParamLimits

0xca0d,	// (0x000686e5) rss2_list_single_pane_t3

0xca2a,	// (0x00068702) rss2_list_single_pane_t4

0x3268,	// (0x0005ef40) smil_status_pane_g1

0x44bf,	// (0x00060197) main_image2_pane_ParamLimits

0x44bf,	// (0x00060197) main_image2_pane

0x495b,	// (0x00060633) main_camera2_pane_g9_ParamLimits

0x495b,	// (0x00060633) main_camera2_pane_g9

0x49af,	// (0x00060687) main_camera2_pane_t5_ParamLimits

0x49af,	// (0x00060687) main_camera2_pane_t5

0x49c1,	// (0x00060699) main_camera2_pane_t6_ParamLimits

0x49c1,	// (0x00060699) main_camera2_pane_t6

0x4dc0,	// (0x00060a98) main_image2_pane_g1_ParamLimits

0x4dc0,	// (0x00060a98) main_image2_pane_g1

0x400d,	// (0x0005fce5) smil2_video_pane_ParamLimits

0x400d,	// (0x0005fce5) smil2_video_pane

0x0e02,	// (0x0005cada) aid_zoom_text_primary_cp

0x1143,	// (0x0005ce1b) popup_preview_fixed_window

0xaae8,	// (0x000667c0) im_reading_pane_g1

0x48a5,	// (0x0006057d) cams2_bc_adjust_pane_cp_ParamLimits

0x48a5,	// (0x0006057d) cams2_bc_adjust_pane_cp

0x49f1,	// (0x000606c9) cams2_bc_adjust_pane_ParamLimits

0x49f1,	// (0x000606c9) cams2_bc_adjust_pane

0xdc67,	// (0x0006993f) cams2_bc_adjust_pane_g1

0x4dcc,	// (0x00060aa4) cams2_slider_pane

0x4dd5,	// (0x00060aad) cams2_slider_pane_g1

0x4dde,	// (0x00060ab6) cams2_slider_pane_g2

0x0006,

0xf5a2,	// (0x0006b27a) cams2_slider_pane_g

0x13dc,	// (0x0005d0b4) calc_display_pane_ParamLimits

0x13fa,	// (0x0005d0d2) calc_paper_pane_ParamLimits

0x1416,	// (0x0005d0ee) grid_calc_pane_ParamLimits

0x3538,	// (0x0005f210) popup_clock_digital_window_t1_ParamLimits

0xb6e6,	// (0x000673be) main_image_pane_t1

0x13c2,	// (0x0005d09a) aid_size_cell_calc_ParamLimits

0x13c2,	// (0x0005d09a) aid_size_cell_calc

0x44f0,	// (0x000601c8) popup_blid_sat_info2_window_ParamLimits

0x44f0,	// (0x000601c8) popup_blid_sat_info2_window

0xca40,	// (0x00068718) aid_size_cell_blid

0xca48,	// (0x00068720) bg_popup_window_pane_cp07

0xca6b,	// (0x00068743) grid_popup_blid_pane

0xca75,	// (0x0006874d) heading_pane_cp05_ParamLimits

0xca75,	// (0x0006874d) heading_pane_cp05

0xcb3f,	// (0x00068817) cell_popup_blid_pane_ParamLimits

0xcb3f,	// (0x00068817) cell_popup_blid_pane

0xcb63,	// (0x0006883b) cell_popup_blid_pane_g1

0xcb6b,	// (0x00068843) cell_popup_blid_pane_t1

0x4c0e,	// (0x000608e6) mup2_indicator_pane_ParamLimits

0x4c0e,	// (0x000608e6) mup2_indicator_pane

0xb463,	// (0x0006713b) mup2_visualizer_osc_pane

0xc921,	// (0x000685f9) mup2_visualizer_spec_pane_ParamLimits

0xc921,	// (0x000685f9) mup2_visualizer_spec_pane

0x4df8,	// (0x00060ad0) mup2_spec_half_pane

0x4e01,	// (0x00060ad9) mup2_spec_half_pane_cp

0x4e0b,	// (0x00060ae3) mup2_spec_bar_pane_ParamLimits

0x4e0b,	// (0x00060ae3) mup2_spec_bar_pane

0xc8b6,	// (0x0006858e) mup2_spec_bar_pane_g1

0xc8c0,	// (0x00068598) mup2_spec_bar_pane_g2

0x0001,

0x04ff,	// (0x0005c1d7) mup2_spec_bar_pane_g

0x4e2a,	// (0x00060b02) mup2_osc_middle_pane

0xc8d2,	// (0x000685aa) mup2_visualizer_osc_pane_g1

0x9c79,	// (0x00065951) popup_number_entry_window_t1_ParamLimits

0x9c8c,	// (0x00065964) popup_number_entry_window_t2_ParamLimits

0x9c9e,	// (0x00065976) popup_number_entry_window_t3_ParamLimits

0x1209,	// (0x0005cee1) popup_number_entry_window_t5_ParamLimits

0x1209,	// (0x0005cee1) popup_number_entry_window_t5

0xf0c6,	// (0x0006ad9e) popup_number_entry_window_t_ParamLimits

0x9cb0,	// (0x00065988) text_title_cp2_ParamLimits

0x3d0d,	// (0x0005f9e5) aid_hotspot_pointer_text2_pane

0x3d9b,	// (0x0005fa73) main_viewer_pane_g9_ParamLimits

0x3d9b,	// (0x0005fa73) main_viewer_pane_g9

0xad21,	// (0x000669f9) cale_month_pane_t1_ParamLimits

0xad5e,	// (0x00066a36) bg_cale_pane_ParamLimits

0xad76,	// (0x00066a4e) list_cale_pane_ParamLimits

0xad87,	// (0x00066a5f) listscroll_cale_day_pane_t1

0xad99,	// (0x00066a71) scroll_pane_cp09_ParamLimits

0x3a1f,	// (0x0005f6f7) main_mup_eq_pane_t1_ParamLimits

0x3a1f,	// (0x0005f6f7) main_mup_eq_pane_t1

0x3a39,	// (0x0005f711) main_mup_eq_pane_t2_ParamLimits

0x3a39,	// (0x0005f711) main_mup_eq_pane_t2

0x3a53,	// (0x0005f72b) main_mup_eq_pane_t3_ParamLimits

0x3a53,	// (0x0005f72b) main_mup_eq_pane_t3

0x3a6b,	// (0x0005f743) main_mup_eq_pane_t4_ParamLimits

0x3a6b,	// (0x0005f743) main_mup_eq_pane_t4

0x3a83,	// (0x0005f75b) main_mup_eq_pane_t5_ParamLimits

0x3a83,	// (0x0005f75b) main_mup_eq_pane_t5

0x3a9b,	// (0x0005f773) main_mup_eq_pane_t6_ParamLimits

0x3a9b,	// (0x0005f773) main_mup_eq_pane_t6

0x3aaf,	// (0x0005f787) main_mup_eq_pane_t7_ParamLimits

0x3aaf,	// (0x0005f787) main_mup_eq_pane_t7

0x3ac3,	// (0x0005f79b) main_mup_eq_pane_t8_ParamLimits

0x3ac3,	// (0x0005f79b) main_mup_eq_pane_t8

0x3ad9,	// (0x0005f7b1) main_mup_eq_pane_t9_ParamLimits

0x3ad9,	// (0x0005f7b1) main_mup_eq_pane_t9

0x3af1,	// (0x0005f7c9) main_mup_eq_pane_t10_ParamLimits

0x3af1,	// (0x0005f7c9) main_mup_eq_pane_t10

0x0009,

0xf42f,	// (0x0006b107) main_mup_eq_pane_t_ParamLimits

0xf42f,	// (0x0006b107) main_mup_eq_pane_t

0x3bae,	// (0x0005f886) mup_equalizer_pane_cp5_ParamLimits

0x3bc4,	// (0x0005f89c) mup_equalizer_pane_cp6_ParamLimits

0x3bdc,	// (0x0005f8b4) mup_equalizer_pane_cp7_ParamLimits

0x11a8,	// (0x0005ce80) main_gallery_pane

0xc8db,	// (0x000685b3) smil2_volume_pane

0xc8e3,	// (0x000685bb) smil_status_volume_pane_g1_ParamLimits

0xc8f6,	// (0x000685ce) smil_status_volume_pane_g2_ParamLimits

0x4718,	// (0x000603f0) smil_status_volume_pane_g3_ParamLimits

0xf521,	// (0x0006b1f9) smil_status_volume_pane_g_ParamLimits

0xca48,	// (0x00068720) bg_popup_window_pane_cp07_ParamLimits

0xca56,	// (0x0006872e) blid_firmament_pane

0x4e33,	// (0x00060b0b) aid_size_cell_gallery_ParamLimits

0x4e33,	// (0x00060b0b) aid_size_cell_gallery

0x4e41,	// (0x00060b19) grid_gallery_pane_ParamLimits

0x4e41,	// (0x00060b19) grid_gallery_pane

0x4e51,	// (0x00060b29) cell_gallery_pane_ParamLimits

0x4e51,	// (0x00060b29) cell_gallery_pane

0xcb79,	// (0x00068851) bg_cell_gallery_focus_pane_ParamLimits

0xcb79,	// (0x00068851) bg_cell_gallery_focus_pane

0xcb8b,	// (0x00068863) cell_gallery_pane_g1_ParamLimits

0xcb8b,	// (0x00068863) cell_gallery_pane_g1

0x4e9f,	// (0x00060b77) cell_gallery_pane_g2_ParamLimits

0x4e9f,	// (0x00060b77) cell_gallery_pane_g2

0x4eac,	// (0x00060b84) cell_gallery_pane_g3_ParamLimits

0x4eac,	// (0x00060b84) cell_gallery_pane_g3

0xcb97,	// (0x0006886f) cell_gallery_pane_g4_ParamLimits

0xcb97,	// (0x0006886f) cell_gallery_pane_g4

0x0003,

0xf5b1,	// (0x0006b289) cell_gallery_pane_g_ParamLimits

0xf5b1,	// (0x0006b289) cell_gallery_pane_g

0xcba3,	// (0x0006887b) bg_cell_gallery_focus_pane_g1

0xcbab,	// (0x00068883) bg_cell_gallery_focus_pane_g2

0xcbb3,	// (0x0006888b) bg_cell_gallery_focus_pane_g3

0xcbbb,	// (0x00068893) bg_cell_gallery_focus_pane_g4

0xcbc3,	// (0x0006889b) bg_cell_gallery_focus_pane_g5

0xcbcb,	// (0x000688a3) bg_cell_gallery_focus_pane_g6

0xcbd3,	// (0x000688ab) bg_cell_gallery_focus_pane_g7

0xcbdb,	// (0x000688b3) bg_cell_gallery_focus_pane_g8

0x0007,

0x05bb,	// (0x0005c293) bg_cell_gallery_focus_pane_g

0xcbe3,	// (0x000688bb) aid_firma_cardinal

0xcbf7,	// (0x000688cf) blid_firmament_pane_t1

0xcc0e,	// (0x000688e6) blid_firmament_pane_t2

0xcc25,	// (0x000688fd) blid_firmament_pane_t3

0xcc3c,	// (0x00068914) blid_firmament_pane_t4

0x0003,

0x05cc,	// (0x0005c2a4) blid_firmament_pane_t

0xcc53,	// (0x0006892b) blid_sat_info_pane

0xcc63,	// (0x0006893b) blid_sat_info_pane_g1

0xcc63,	// (0x0006893b) blid_sat_info_pane_g2

0x0001,

0x05d5,	// (0x0005c2ad) blid_sat_info_pane_g

0xcc76,	// (0x0006894e) blid_sat_info_pane_t1

0xcc84,	// (0x0006895c) smil2_volume_content_pane

0xcc8d,	// (0x00068965) smil2_volume_pane_g1

0xcc6d,	// (0x00068945) smil2_volume_content_pane_g1

0xcc95,	// (0x0006896d) smil2_volume_content_pane_g2

0xcc9e,	// (0x00068976) smil2_volume_content_pane_g3

0xcca7,	// (0x0006897f) smil2_volume_content_pane_g4

0xccb0,	// (0x00068988) smil2_volume_content_pane_g5

0xccb9,	// (0x00068991) smil2_volume_content_pane_g6

0xccc2,	// (0x0006899a) smil2_volume_content_pane_g7

0xcccb,	// (0x000689a3) smil2_volume_content_pane_g8

0xccd4,	// (0x000689ac) smil2_volume_content_pane_g9

0xccdd,	// (0x000689b5) smil2_volume_content_pane_g10

0x0009,

0xf5ba,	// (0x0006b292) smil2_volume_content_pane_g

0x19ff,	// (0x0005d6d7) cale_week_day_heading_pane_t1_ParamLimits

0x1a3a,	// (0x0005d712) cale_week_day_heading_pane_t2_ParamLimits

0x1a75,	// (0x0005d74d) cale_week_day_heading_pane_t3_ParamLimits

0x1ab0,	// (0x0005d788) cale_week_day_heading_pane_t4_ParamLimits

0x1aeb,	// (0x0005d7c3) cale_week_day_heading_pane_t5_ParamLimits

0x1b26,	// (0x0005d7fe) cale_week_day_heading_pane_t6_ParamLimits

0x1b61,	// (0x0005d839) cale_week_day_heading_pane_t7_ParamLimits

0xf1cd,	// (0x0006aea5) cale_week_day_heading_pane_t_ParamLimits

0xa99c,	// (0x00066674) bg_cale_side_pane_ParamLimits

0x1b9c,	// (0x0005d874) cale_week_time_pane_t1_ParamLimits

0x1bb6,	// (0x0005d88e) cale_week_time_pane_t2_ParamLimits

0x1bd0,	// (0x0005d8a8) cale_week_time_pane_t3_ParamLimits

0x1bea,	// (0x0005d8c2) cale_week_time_pane_t4_ParamLimits

0x1c04,	// (0x0005d8dc) cale_week_time_pane_t5_ParamLimits

0x1c1e,	// (0x0005d8f6) cale_week_time_pane_t6_ParamLimits

0x1c3e,	// (0x0005d916) cale_week_time_pane_t7_ParamLimits

0x1c60,	// (0x0005d938) cale_week_time_pane_t8_ParamLimits

0xf1dc,	// (0x0006aeb4) cale_week_time_pane_t_ParamLimits

0x1c84,	// (0x0005d95c) cell_cale_week_pane_g2_ParamLimits

0xa99c,	// (0x00066674) bg_cale_side_pane_cp01_ParamLimits

0x303f,	// (0x0005ed17) cale_month_week_pane_t1_ParamLimits

0x3058,	// (0x0005ed30) cale_month_week_pane_t2_ParamLimits

0x3071,	// (0x0005ed49) cale_month_week_pane_t3_ParamLimits

0x308a,	// (0x0005ed62) cale_month_week_pane_t4_ParamLimits

0x30a3,	// (0x0005ed7b) cale_month_week_pane_t5_ParamLimits

0x30c4,	// (0x0005ed9c) cale_month_week_pane_t6_ParamLimits

0xf2b5,	// (0x0006af8d) cale_month_week_pane_t_ParamLimits

0x3231,	// (0x0005ef09) cell_cale_month_pane_g1_ParamLimits

0x11a8,	// (0x0005ce80) main_cale_event_viewer_pane

0x9c4f,	// (0x00065927) listscroll_cale_event_viewer_pane

0xcce6,	// (0x000689be) list_cale_ev_pane

0xccee,	// (0x000689c6) scroll_pane_cp023

0xccfa,	// (0x000689d2) field_cale_ev_pane_ParamLimits

0xccfa,	// (0x000689d2) field_cale_ev_pane

0xcd18,	// (0x000689f0) field_cale_ev_content_pane_ParamLimits

0xcd18,	// (0x000689f0) field_cale_ev_content_pane

0xcd24,	// (0x000689fc) field_cale_ev_pane_g1_ParamLimits

0xcd24,	// (0x000689fc) field_cale_ev_pane_g1

0xcd3c,	// (0x00068a14) field_cale_ev_pane_g2_ParamLimits

0xcd3c,	// (0x00068a14) field_cale_ev_pane_g2

0xcd54,	// (0x00068a2c) field_cale_ev_pane_g3_ParamLimits

0xcd54,	// (0x00068a2c) field_cale_ev_pane_g3

0x0002,

0xf5cf,	// (0x0006b2a7) field_cale_ev_pane_g_ParamLimits

0xf5cf,	// (0x0006b2a7) field_cale_ev_pane_g

0xcd6c,	// (0x00068a44) field_cale_ev_pane_t1_ParamLimits

0xcd6c,	// (0x00068a44) field_cale_ev_pane_t1

0xcd83,	// (0x00068a5b) field_cale_ev_content_pane_t1_ParamLimits

0xcd83,	// (0x00068a5b) field_cale_ev_content_pane_t1

0xb5cc,	// (0x000672a4) bg_button_pane_cp01

0x178c,	// (0x0005d464) listscroll_cale_week_pane_ParamLimits

0xa946,	// (0x0006661e) popup_toolbar_window_cp01

0xa96d,	// (0x00066645) listscroll_cale_week_pane_t1_ParamLimits

0x178c,	// (0x0005d464) listscroll_cale_day_pane_ParamLimits

0xa946,	// (0x0006661e) popup_toolbar_window_cp02

0xad87,	// (0x00066a5f) listscroll_cale_day_pane_t1_ParamLimits

0x178c,	// (0x0005d464) main_cale_month_pane_ParamLimits

0x45f7,	// (0x000602cf) popup_toolbar_window_cp03_ParamLimits

0x45f7,	// (0x000602cf) popup_toolbar_window_cp03

0x3f23,	// (0x0005fbfb) main_image_pane_g2_ParamLimits

0x3f23,	// (0x0005fbfb) main_image_pane_g2

0x3f2f,	// (0x0005fc07) main_image_pane_g3_ParamLimits

0x3f2f,	// (0x0005fc07) main_image_pane_g3

0x0002,

0xf4b7,	// (0x0006b18f) main_image_pane_g_ParamLimits

0xf4b7,	// (0x0006b18f) main_image_pane_g

0xb6e6,	// (0x000673be) main_image_pane_t1_ParamLimits

0x3f3b,	// (0x0005fc13) main_image_pane_t2_ParamLimits

0x3f3b,	// (0x0005fc13) main_image_pane_t2

0x3f4d,	// (0x0005fc25) main_image_pane_t3_ParamLimits

0x3f4d,	// (0x0005fc25) main_image_pane_t3

0x3f5f,	// (0x0005fc37) main_image_pane_t4_ParamLimits

0x3f5f,	// (0x0005fc37) main_image_pane_t4

0x0003,

0xf4be,	// (0x0006b196) main_image_pane_t_ParamLimits

0xf4be,	// (0x0006b196) main_image_pane_t

0x3f71,	// (0x0005fc49) popup_image_details_window_cp01

0x3f7b,	// (0x0005fc53) popup_toobar_trans_pane_cp01_ParamLimits

0x3f7b,	// (0x0005fc53) popup_toobar_trans_pane_cp01

0x4547,	// (0x0006021f) popup_image_details_window_ParamLimits

0x4547,	// (0x0006021f) popup_image_details_window

0x4555,	// (0x0006022d) popup_image_focus_window

0x4897,	// (0x0006056f) camera2_autofocus_pane_ParamLimits

0x4897,	// (0x0006056f) camera2_autofocus_pane

0x9c4f,	// (0x00065927) bg_popup_sub_pane_cp06

0xcda1,	// (0x00068a79) popup_image_focus_window_g1

0xcda9,	// (0x00068a81) popup_image_focus_window_g2

0xcdb1,	// (0x00068a89) popup_image_focus_window_g3

0xcdb9,	// (0x00068a91) popup_image_focus_window_g4

0x0003,

0x05f6,	// (0x0005c2ce) popup_image_focus_window_g

0xcdc1,	// (0x00068a99) popup_image_focus_window_t1

0xcdcf,	// (0x00068aa7) popup_image_focus_window_t2

0xcddf,	// (0x00068ab7) popup_image_focus_window_t3

0x0002,

0x05ff,	// (0x0005c2d7) popup_image_focus_window_t

0xcded,	// (0x00068ac5) camera2_autofocus_pane_g1

0xa4ce,	// (0x000661a6) bg_tb_trans_pane_cp01

0xcdfb,	// (0x00068ad3) popup_image_details_window_g1

0xce0e,	// (0x00068ae6) popup_image_details_window_g2

0x0002,

0x0611,	// (0x0005c2e9) popup_image_details_window_g

0xce37,	// (0x00068b0f) popup_image_details_window_t1

0xce49,	// (0x00068b21) popup_image_details_window_t2

0xce62,	// (0x00068b3a) popup_image_details_window_t3

0xce76,	// (0x00068b4e) popup_image_details_window_t4

0xce91,	// (0x00068b69) popup_image_details_window_t5

0x0004,

0x0618,	// (0x0005c2f0) popup_image_details_window_t

0xa81d,	// (0x000664f5) bg_calc_paper_pane_ParamLimits

0x11a8,	// (0x0005ce80) grid_highlight_pane_cp013

0x1513,	// (0x0005d1eb) list_calc_pane_ParamLimits

0x1525,	// (0x0005d1fd) scroll_pane_cp024

0xa831,	// (0x00066509) bg_calc_display_pane_ParamLimits

0x152d,	// (0x0005d205) calc_display_pane_t1_ParamLimits

0x1542,	// (0x0005d21a) calc_display_pane_t2_ParamLimits

0x1557,	// (0x0005d22f) calc_display_pane_t3_ParamLimits

0xf14d,	// (0x0006ae25) calc_display_pane_t_ParamLimits

0x1633,	// (0x0005d30b) cell_calc_pane_g2

0x0001,

0xf16a,	// (0x0006ae42) cell_calc_pane_g

0x163c,	// (0x0005d314) cell_calc_pane_t1

0xa890,	// (0x00066568) grid_highlight_pane_cp02_ParamLimits

0xa8a6,	// (0x0006657e) toolbar_button_pane_cp01_ParamLimits

0xa8a6,	// (0x0006657e) toolbar_button_pane_cp01

0xb72b,	// (0x00067403) temp_image_control_pane_ParamLimits

0xb72b,	// (0x00067403) temp_image_control_pane

0x44bf,	// (0x00060197) main_mp3_pane

0xceab,	// (0x00068b83) temp_image_control_pane_g1_ParamLimits

0xceab,	// (0x00068b83) temp_image_control_pane_g1

0xceb9,	// (0x00068b91) temp_image_control_pane_g2_ParamLimits

0xceb9,	// (0x00068b91) temp_image_control_pane_g2

0xcecb,	// (0x00068ba3) temp_image_control_pane_g3_ParamLimits

0xcecb,	// (0x00068ba3) temp_image_control_pane_g3

0x4ee9,	// (0x00060bc1) temp_image_control_pane_g4_ParamLimits

0x4ee9,	// (0x00060bc1) temp_image_control_pane_g4

0x0003,

0xf5e1,	// (0x0006b2b9) temp_image_control_pane_g_ParamLimits

0xf5e1,	// (0x0006b2b9) temp_image_control_pane_g

0xceab,	// (0x00068b83) main_mp3_pane_g1

0x4efa,	// (0x00060bd2) main_mp3_pane_g2

0x0007,

0xf5ea,	// (0x0006b2c2) main_mp3_pane_g

0xcf0e,	// (0x00068be6) main_mp3_pane_t1

0xa9f7,	// (0x000666cf) main_camera_pane_g8_ParamLimits

0xa9f7,	// (0x000666cf) main_camera_pane_g8

0x1f35,	// (0x0005dc0d) main_video_pane_g7_ParamLimits

0x1f35,	// (0x0005dc0d) main_video_pane_g7

0x49df,	// (0x000606b7) main_camera2_pane_t7_ParamLimits

0x49df,	// (0x000606b7) main_camera2_pane_t7

0xab3f,	// (0x00066817) scroll_pane_cp025_ParamLimits

0xab3f,	// (0x00066817) scroll_pane_cp025

0xab53,	// (0x0006682b) scroll_pane_cp026_ParamLimits

0xab53,	// (0x0006682b) scroll_pane_cp026

0xab62,	// (0x0006683a) wml_content_pane_ParamLimits

0x11a8,	// (0x0005ce80) main_touch_calib_pane

0x4f9e,	// (0x00060c76) main_touch_calib_pane_g1

0x4faa,	// (0x00060c82) main_touch_calib_pane_g2

0x4fb6,	// (0x00060c8e) main_touch_calib_pane_g3

0x4fc2,	// (0x00060c9a) main_touch_calib_pane_g4

0x0003,

0xf608,	// (0x0006b2e0) main_touch_calib_pane_g

0x4fce,	// (0x00060ca6) main_touch_calib_pane_t1

0x4fe7,	// (0x00060cbf) main_touch_calib_pane_t2

0x0004,

0xf611,	// (0x0006b2e9) main_touch_calib_pane_t

0xb2fe,	// (0x00066fd6) mup_progress_pane_cp02

0xb333,	// (0x0006700b) navi_pane_g1

0xb3ee,	// (0x000670c6) navi_pane_mp_t3

0x44bf,	// (0x00060197) main_mp3_pane_ParamLimits

0x4634,	// (0x0006030c) navi_pane_ParamLimits

0xceab,	// (0x00068b83) main_mp3_pane_g1_ParamLimits

0x4efa,	// (0x00060bd2) main_mp3_pane_g2_ParamLimits

0x4f06,	// (0x00060bde) main_mp3_pane_g3_ParamLimits

0x4f06,	// (0x00060bde) main_mp3_pane_g3

0x4f12,	// (0x00060bea) main_mp3_pane_g4_ParamLimits

0x4f12,	// (0x00060bea) main_mp3_pane_g4

0xcedb,	// (0x00068bb3) main_mp3_pane_g5_ParamLimits

0xcedb,	// (0x00068bb3) main_mp3_pane_g5

0xcee9,	// (0x00068bc1) main_mp3_pane_g6_ParamLimits

0xcee9,	// (0x00068bc1) main_mp3_pane_g6

0xcef6,	// (0x00068bce) main_mp3_pane_g7_ParamLimits

0xcef6,	// (0x00068bce) main_mp3_pane_g7

0xcf02,	// (0x00068bda) main_mp3_pane_g8_ParamLimits

0xcf02,	// (0x00068bda) main_mp3_pane_g8

0xf5ea,	// (0x0006b2c2) main_mp3_pane_g_ParamLimits

0x4f1e,	// (0x00060bf6) main_mp3_pane_t2

0x4f2e,	// (0x00060c06) main_mp3_pane_t3

0xcf1c,	// (0x00068bf4) main_mp3_pane_t4

0xcf2a,	// (0x00068c02) main_mp3_pane_t5

0x0005,

0xf5fb,	// (0x0006b2d3) main_mp3_pane_t

0xcf38,	// (0x00068c10) mup_progress_pane_cp01

0x0e02,	// (0x0005cada) aid_zoom_text_secondary2

0xcce6,	// (0x000689be) list_cale_ev2_pane

0xccee,	// (0x000689c6) scroll_pane_cp023_ParamLimits

0x5042,	// (0x00060d1a) field_cale_ev2_pane_ParamLimits

0x5042,	// (0x00060d1a) field_cale_ev2_pane

0xa07b,	// (0x00065d53) field_cale_ev2_pane_g1_ParamLimits

0xa07b,	// (0x00065d53) field_cale_ev2_pane_g1

0xa087,	// (0x00065d5f) field_cale_ev2_pane_g2_ParamLimits

0xa087,	// (0x00065d5f) field_cale_ev2_pane_g2

0xa09f,	// (0x00065d77) field_cale_ev2_pane_g3_ParamLimits

0xa09f,	// (0x00065d77) field_cale_ev2_pane_g3

0x0003,

0xf61c,	// (0x0006b2f4) field_cale_ev2_pane_g_ParamLimits

0xf61c,	// (0x0006b2f4) field_cale_ev2_pane_g

0x506b,	// (0x00060d43) field_cale_ev2_pane_t1_ParamLimits

0x506b,	// (0x00060d43) field_cale_ev2_pane_t1

0x5082,	// (0x00060d5a) field_cale_ev2_pane_t2_ParamLimits

0x5082,	// (0x00060d5a) field_cale_ev2_pane_t2

0x0001,

0xf625,	// (0x0006b2fd) field_cale_ev2_pane_t_ParamLimits

0xf625,	// (0x0006b2fd) field_cale_ev2_pane_t

0x3e03,	// (0x0005fadb) main_postcard_pane_g5_ParamLimits

0x3e03,	// (0x0005fadb) main_postcard_pane_g5

0x3e11,	// (0x0005fae9) main_postcard_pane_g6_ParamLimits

0x3e11,	// (0x0005fae9) main_postcard_pane_g6

0x1d7f,	// (0x0005da57) camera2_autofocus_pane_cp_ParamLimits

0x1d7f,	// (0x0005da57) camera2_autofocus_pane_cp

0x44bf,	// (0x00060197) main_mup3_pane

0x5097,	// (0x00060d6f) main_mup3_pane_g1_ParamLimits

0x5097,	// (0x00060d6f) main_mup3_pane_g1

0x50b8,	// (0x00060d90) main_mup3_pane_g2_ParamLimits

0x50b8,	// (0x00060d90) main_mup3_pane_g2

0x5130,	// (0x00060e08) main_mup3_pane_g3_ParamLimits

0x5130,	// (0x00060e08) main_mup3_pane_g3

0x5173,	// (0x00060e4b) main_mup3_pane_g4_ParamLimits

0x5173,	// (0x00060e4b) main_mup3_pane_g4

0x51b6,	// (0x00060e8e) main_mup3_pane_g5_ParamLimits

0x51b6,	// (0x00060e8e) main_mup3_pane_g5

0x51f9,	// (0x00060ed1) main_mup3_pane_g6_ParamLimits

0x51f9,	// (0x00060ed1) main_mup3_pane_g6

0xcf60,	// (0x00068c38) main_mup3_pane_g7_ParamLimits

0xcf60,	// (0x00068c38) main_mup3_pane_g7

0x0007,

0xf62a,	// (0x0006b302) main_mup3_pane_g_ParamLimits

0xf62a,	// (0x0006b302) main_mup3_pane_g

0x526f,	// (0x00060f47) main_mup3_pane_t1_ParamLimits

0x526f,	// (0x00060f47) main_mup3_pane_t1

0x52de,	// (0x00060fb6) main_mup3_pane_t2_ParamLimits

0x52de,	// (0x00060fb6) main_mup3_pane_t2

0x53a7,	// (0x0006107f) main_mup3_pane_t4_ParamLimits

0x53a7,	// (0x0006107f) main_mup3_pane_t4

0x53f5,	// (0x000610cd) main_mup3_pane_t5_ParamLimits

0x53f5,	// (0x000610cd) main_mup3_pane_t5

0x54a5,	// (0x0006117d) main_mup3_pane_t6_ParamLimits

0x54a5,	// (0x0006117d) main_mup3_pane_t6

0x0005,

0xf63b,	// (0x0006b313) main_mup3_pane_t_ParamLimits

0xf63b,	// (0x0006b313) main_mup3_pane_t

0x5551,	// (0x00061229) mup3_progress_pane_ParamLimits

0x5551,	// (0x00061229) mup3_progress_pane

0x55cf,	// (0x000612a7) popup_mup3_control_window_ParamLimits

0x55cf,	// (0x000612a7) popup_mup3_control_window

0xcf6e,	// (0x00068c46) popup_mup3_text_window

0x55e8,	// (0x000612c0) mup3_progress_pane_t1

0x5607,	// (0x000612df) mup3_progress_pane_t2

0xcf76,	// (0x00068c4e) mup3_progress_pane_t3

0x0002,

0xf648,	// (0x0006b320) mup3_progress_pane_t

0xcf93,	// (0x00068c6b) mup_progress_pane_cp03

0x9c4f,	// (0x00065927) bg_tb_trans_pane_cp04

0x5626,	// (0x000612fe) mup3_volume_pane

0x562e,	// (0x00061306) popup_mup3_control_window_g1

0x5637,	// (0x0006130f) mup3_volume_pane_g1

0x5640,	// (0x00061318) mup3_volume_pane_g2

0x5649,	// (0x00061321) mup3_volume_pane_g3

0x0002,

0xf64f,	// (0x0006b327) mup3_volume_pane_g

0x9c4f,	// (0x00065927) bg_tb_trans_pane_cp03

0xcfa3,	// (0x00068c7b) popup_mup3_text_window_g1

0xcfab,	// (0x00068c83) popup_mup3_text_window_t1

0xa879,	// (0x00066551) list_calc_item_pane_g1_ParamLimits

0xc9b6,	// (0x0006868e) mup_volume_pane_cp_g1

0x5000,	// (0x00060cd8) main_touch_calib_pane_t3

0x5016,	// (0x00060cee) main_touch_calib_pane_t4

0x502c,	// (0x00060d04) main_touch_calib_pane_t5

0x0edd,	// (0x0005cbb5) aid_cell_size_toolbar2

0x0ee5,	// (0x0005cbbd) aid_popup3_width_pane

0x0dfa,	// (0x0005cad2) aid_zoom_text_msg_primary

0x1d4c,	// (0x0005da24) vorec_t7

0xa83d,	// (0x00066515) bg_calc_paper_pane_g1_ParamLimits

0xa855,	// (0x0006652d) bg_calc_paper_pane_g2_ParamLimits

0xa849,	// (0x00066521) bg_calc_paper_pane_g3_ParamLimits

0xa861,	// (0x00066539) bg_calc_paper_pane_g4_ParamLimits

0xa86d,	// (0x00066545) bg_calc_paper_pane_g5_ParamLimits

0x1596,	// (0x0005d26e) bg_calc_paper_pane_g6_ParamLimits

0x15a7,	// (0x0005d27f) bg_calc_paper_pane_g7_ParamLimits

0x15b8,	// (0x0005d290) bg_calc_paper_pane_g8_ParamLimits

0xf154,	// (0x0006ae2c) bg_calc_paper_pane_g_ParamLimits

0x15c9,	// (0x0005d2a1) calc_bg_paper_pane_g9_ParamLimits

0x1e66,	// (0x0005db3e) image_qvga_pane_ParamLimits

0x1e66,	// (0x0005db3e) image_qvga_pane

0xa76c,	// (0x00066444) bg_popup_sub_pane_cp04_ParamLimits

0xb662,	// (0x0006733a) popup_mup_playback_window_g1_ParamLimits

0xb66e,	// (0x00067346) popup_mup_playback_window_t1_ParamLimits

0xb683,	// (0x0006735b) popup_mup_playback_window_t2_ParamLimits

0x03db,	// (0x0005c0b3) popup_mup_playback_window_t_ParamLimits

0x4b0e,	// (0x000607e6) main_mup2_pane_g3_ParamLimits

0x4b0e,	// (0x000607e6) main_mup2_pane_g3

0x222b,	// (0x0005df03) popup_toolbar_window_cp04

0xba65,	// (0x0006773d) popup_call2_audio_second_window_g3_ParamLimits

0xba65,	// (0x0006773d) popup_call2_audio_second_window_g3

0xbe6f,	// (0x00067b47) popup_call2_audio_first_window_g4_ParamLimits

0xbe6f,	// (0x00067b47) popup_call2_audio_first_window_g4

0xc4ee,	// (0x000681c6) popup_call2_audio_in_window_g4_ParamLimits

0xc4ee,	// (0x000681c6) popup_call2_audio_in_window_g4

0x3f16,	// (0x0005fbee) aid_area_sk_bg_cut_ParamLimits

0x3f16,	// (0x0005fbee) aid_area_sk_bg_cut

0xb698,	// (0x00067370) aid_area_sk_bg_cut_2_ParamLimits

0xb698,	// (0x00067370) aid_area_sk_bg_cut_2

0x4e8f,	// (0x00060b67) aid_placing_details_win

0x4e97,	// (0x00060b6f) aid_placing_details_win_2

0xcded,	// (0x00068ac5) camera2_autofocus_pane_g1_ParamLimits

0x1134,	// (0x0005ce0c) popup_fixed_preview_cale_window_ParamLimits

0x1134,	// (0x0005ce0c) popup_fixed_preview_cale_window

0xb474,	// (0x0006714c) navi_slider_pane_g3

0xb47d,	// (0x00067155) navi_slider_pane_g4

0xb486,	// (0x0006715e) navi_slider_pane_g5

0xb474,	// (0x0006714c) navi_slider_pane_g6

0x37b3,	// (0x0005f48b) navi_slider_pane_g7

0xb599,	// (0x00067271) mup_scale_pane_g3

0xb5a2,	// (0x0006727a) mup_scale_pane_g4

0xb5ab,	// (0x00067283) mup_scale_pane_g5

0x3bf4,	// (0x0005f8cc) mup_scale_pane_g6

0x3bfd,	// (0x0005f8d5) mup_scale_pane_g7

0xb474,	// (0x0006714c) cams2_slider_pane_g3

0xca38,	// (0x00068710) cams2_slider_pane_g4

0x4de7,	// (0x00060abf) cams2_slider_pane_g5

0xb474,	// (0x0006714c) cams2_slider_pane_g6

0x4def,	// (0x00060ac7) cams2_slider_pane_g7

0xcc63,	// (0x0006893b) camera2_autofocus_pane_cp_g1

0xc84f,	// (0x00068527) bg_popup_preview_window_pane_cp02_ParamLimits

0xc84f,	// (0x00068527) bg_popup_preview_window_pane_cp02

0xcfb9,	// (0x00068c91) list_fp_cale_pane_ParamLimits

0xcfb9,	// (0x00068c91) list_fp_cale_pane

0xcfc5,	// (0x00068c9d) popup_fixed_preview_cale_window_t1_ParamLimits

0xcfc5,	// (0x00068c9d) popup_fixed_preview_cale_window_t1

0x5652,	// (0x0006132a) popup_fixed_preview_cale_window_t2_ParamLimits

0x5652,	// (0x0006132a) popup_fixed_preview_cale_window_t2

0x5667,	// (0x0006133f) popup_fixed_preview_cale_window_t3_ParamLimits

0x5667,	// (0x0006133f) popup_fixed_preview_cale_window_t3

0x0002,

0xf656,	// (0x0006b32e) popup_fixed_preview_cale_window_t_ParamLimits

0xf656,	// (0x0006b32e) popup_fixed_preview_cale_window_t

0x567c,	// (0x00061354) list_single_fp_cale_pane_ParamLimits

0x567c,	// (0x00061354) list_single_fp_cale_pane

0xcfe3,	// (0x00068cbb) list_single_fp_cale_pane_g1_ParamLimits

0xcfe3,	// (0x00068cbb) list_single_fp_cale_pane_g1

0xcfef,	// (0x00068cc7) list_single_fp_cale_pane_g2_ParamLimits

0xcfef,	// (0x00068cc7) list_single_fp_cale_pane_g2

0x0002,

0x06aa,	// (0x0005c382) list_single_fp_cale_pane_g_ParamLimits

0x06aa,	// (0x0005c382) list_single_fp_cale_pane_g

0xd008,	// (0x00068ce0) list_single_fp_cale_pane_t1_ParamLimits

0xd008,	// (0x00068ce0) list_single_fp_cale_pane_t1

0xd01a,	// (0x00068cf2) list_single_fp_cale_pane_t2_ParamLimits

0xd01a,	// (0x00068cf2) list_single_fp_cale_pane_t2

0x0001,

0x06b1,	// (0x0005c389) list_single_fp_cale_pane_t_ParamLimits

0x06b1,	// (0x0005c389) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x11a8,	// (0x0005ce80) main_dialer_pane

0x568f,	// (0x00061367) aid_cell_size_keypad

0x5699,	// (0x00061371) dialer_ne_pane

0x56a3,	// (0x0006137b) grid_dialer_command_1_pane

0x56ab,	// (0x00061383) grid_dialer_command_2_pane

0x56b3,	// (0x0006138b) grid_dialer_keypad_pane

0x56c5,	// (0x0006139d) bg_popup_call_pane_cp06_ParamLimits

0x56c5,	// (0x0006139d) bg_popup_call_pane_cp06

0x56d1,	// (0x000613a9) dialer_ne_clear_pane_ParamLimits

0x56d1,	// (0x000613a9) dialer_ne_clear_pane

0xd04d,	// (0x00068d25) dialer_ne_pane_g1

0xd055,	// (0x00068d2d) dialer_ne_pane_t1_ParamLimits

0xd055,	// (0x00068d2d) dialer_ne_pane_t1

0x56dd,	// (0x000613b5) dialer_ne_pane_t2_ParamLimits

0x56dd,	// (0x000613b5) dialer_ne_pane_t2

0x56fa,	// (0x000613d2) dialer_ne_pane_t3_ParamLimits

0x56fa,	// (0x000613d2) dialer_ne_pane_t3

0x0002,

0xf65d,	// (0x0006b335) dialer_ne_pane_t_ParamLimits

0xf65d,	// (0x0006b335) dialer_ne_pane_t

0x571e,	// (0x000613f6) dialer_ne_pane_t3_copy1_ParamLimits

0x571e,	// (0x000613f6) dialer_ne_pane_t3_copy1

0x5742,	// (0x0006141a) cell_dialer_keypad_pane_ParamLimits

0x5742,	// (0x0006141a) cell_dialer_keypad_pane

0x5759,	// (0x00061431) cell_dialer_command_1_pane_ParamLimits

0x5759,	// (0x00061431) cell_dialer_command_1_pane

0x576f,	// (0x00061447) cell_dialer_command_2_pane_ParamLimits

0x576f,	// (0x00061447) cell_dialer_command_2_pane

0xd067,	// (0x00068d3f) bg_button_pane_cp02_ParamLimits

0xd067,	// (0x00068d3f) bg_button_pane_cp02

0x577e,	// (0x00061456) cell_dialer_keypad_pane_g1_ParamLimits

0x577e,	// (0x00061456) cell_dialer_keypad_pane_g1

0xd067,	// (0x00068d3f) bg_button_pane_cp03_ParamLimits

0xd067,	// (0x00068d3f) bg_button_pane_cp03

0x5793,	// (0x0006146b) cell_dialer_command_1_pane_g1_ParamLimits

0x5793,	// (0x0006146b) cell_dialer_command_1_pane_g1

0xd073,	// (0x00068d4b) bg_button_pane_cp04

0x57a7,	// (0x0006147f) cell_dialer_command_2_pane_g1

0xb463,	// (0x0006713b) bg_button_pane_cp06

0xd07b,	// (0x00068d53) dialer_ne_clear_pane_g1

0xb33f,	// (0x00067017) navi_pane_g2

0xb36d,	// (0x00067045) navi_pane_g3

0x0002,

0x02de,	// (0x0005bfb6) navi_pane_g

0xb3fc,	// (0x000670d4) navi_pane_mv_g2

0xb423,	// (0x000670fb) navi_pane_mv_g5

0x377e,	// (0x0005f456) navi_pane_mv_t1

0xa831,	// (0x00066509) main_clock2_pane

0x57e5,	// (0x000614bd) main_clock2_list_pane_ParamLimits

0x57e5,	// (0x000614bd) main_clock2_list_pane

0x580d,	// (0x000614e5) main_clock2_pane_t1_ParamLimits

0x580d,	// (0x000614e5) main_clock2_pane_t1

0x582f,	// (0x00061507) main_clock2_pane_t2_ParamLimits

0x582f,	// (0x00061507) main_clock2_pane_t2

0x0004,

0xf664,	// (0x0006b33c) main_clock2_pane_t_ParamLimits

0xf664,	// (0x0006b33c) main_clock2_pane_t

0x588a,	// (0x00061562) popup_clock_analogue_window_cp03_ParamLimits

0x588a,	// (0x00061562) popup_clock_analogue_window_cp03

0x58a8,	// (0x00061580) popup_clock_digital_window_cp02_ParamLimits

0x58a8,	// (0x00061580) popup_clock_digital_window_cp02

0x5915,	// (0x000615ed) main_clock2_list_single_pane_ParamLimits

0x5915,	// (0x000615ed) main_clock2_list_single_pane

0xb463,	// (0x0006713b) list_highlight_pane_cp05

0xd0b9,	// (0x00068d91) main_clock2_list_single_pane_t1

0x222b,	// (0x0005df03) popup_toolbar_window_cp04_ParamLimits

0x4eb9,	// (0x00060b91) camera2_autofocus_pane_g2_ParamLimits

0x4eb9,	// (0x00060b91) camera2_autofocus_pane_g2

0x4ec5,	// (0x00060b9d) camera2_autofocus_pane_g3_ParamLimits

0x4ec5,	// (0x00060b9d) camera2_autofocus_pane_g3

0x4ed1,	// (0x00060ba9) camera2_autofocus_pane_g4_ParamLimits

0x4ed1,	// (0x00060ba9) camera2_autofocus_pane_g4

0x4edd,	// (0x00060bb5) camera2_autofocus_pane_g5_ParamLimits

0x4edd,	// (0x00060bb5) camera2_autofocus_pane_g5

0x0004,

0xf5d6,	// (0x0006b2ae) camera2_autofocus_pane_g_ParamLimits

0xf5d6,	// (0x0006b2ae) camera2_autofocus_pane_g

0xcf40,	// (0x00068c18) camera2_autofocus_pane_cp_g2

0xcf48,	// (0x00068c20) camera2_autofocus_pane_cp_g3

0xcf50,	// (0x00068c28) camera2_autofocus_pane_cp_g4

0xcf58,	// (0x00068c30) camera2_autofocus_pane_cp_g5

0x0004,

0x066c,	// (0x0005c344) camera2_autofocus_pane_cp_g

0x56bd,	// (0x00061395) popup_dialer_spcha_window

0x9c4f,	// (0x00065927) bg_popup_sub_pane_cp07

0xd0c7,	// (0x00068d9f) list_spcha_pane

0xd0cf,	// (0x00068da7) list_single_spcha_pane_ParamLimits

0xd0cf,	// (0x00068da7) list_single_spcha_pane

0x9c4f,	// (0x00065927) list_highlight_pane_cp06

0xd0e0,	// (0x00068db8) list_single_spcha_pane_t1

0xc298,	// (0x00067f70) popup_call2_audio_out_window_g4_ParamLimits

0xc298,	// (0x00067f70) popup_call2_audio_out_window_g4

0x11a8,	// (0x0005ce80) main_imed2_pane

0x455d,	// (0x00060235) popup_imed_adjust2_window

0x4570,	// (0x00060248) popup_imed_trans_window_ParamLimits

0x4570,	// (0x00060248) popup_imed_trans_window

0xcaa1,	// (0x00068779) popup_blid_sat_info2_window_t1

0xcaaf,	// (0x00068787) popup_blid_sat_info2_window_t2

0x000a,

0x059b,	// (0x0005c273) popup_blid_sat_info2_window_t

0x59bf,	// (0x00061697) aid_size_cell_colour_35

0x59d9,	// (0x000616b1) aid_size_cell_colour_112

0x59f0,	// (0x000616c8) aid_size_cell_effect

0xa4ce,	// (0x000661a6) bg_tb_trans_pane_cp02

0xaf8c,	// (0x00066c64) heading_imed_pane

0x5a0a,	// (0x000616e2) listscroll_imed_pane

0xd0ee,	// (0x00068dc6) heading_imed_pane_g1

0xd0f6,	// (0x00068dce) heading_imed_pane_t1

0xd104,	// (0x00068ddc) grid_imed_colour_35_pane_ParamLimits

0xd104,	// (0x00068ddc) grid_imed_colour_35_pane

0x5a16,	// (0x000616ee) grid_imed_effect_pane

0xd11b,	// (0x00068df3) list_imed_aspect_pane

0x5a26,	// (0x000616fe) scroll_pane_cp027_ParamLimits

0x5a26,	// (0x000616fe) scroll_pane_cp027

0x5a32,	// (0x0006170a) cell_imed_effect_pane_ParamLimits

0x5a32,	// (0x0006170a) cell_imed_effect_pane

0xd123,	// (0x00068dfb) cell_imed_colour_pane_ParamLimits

0xd123,	// (0x00068dfb) cell_imed_colour_pane

0xd165,	// (0x00068e3d) cell_imed_colour_pane_g1_ParamLimits

0xd165,	// (0x00068e3d) cell_imed_colour_pane_g1

0xd176,	// (0x00068e4e) hgihlgiht_grid_pane_cp016_ParamLimits

0xd176,	// (0x00068e4e) hgihlgiht_grid_pane_cp016

0x5a4a,	// (0x00061722) cell_imed_effect_pane_g1

0x5a52,	// (0x0006172a) grid_highlight_pane_cp017

0xd187,	// (0x00068e5f) list_imed_single_pane_ParamLimits

0xd187,	// (0x00068e5f) list_imed_single_pane

0x9c4f,	// (0x00065927) list_highlight_pane_cp07

0xd19c,	// (0x00068e74) list_imed_aspect_pane_comp1_t1

0xc85b,	// (0x00068533) bg_tb_trans_pane_cp05

0xd1be,	// (0x00068e96) popup_imed_adjust2_window_g1

0xd1e5,	// (0x00068ebd) popup_imed_adjust2_window_t1

0xd1fd,	// (0x00068ed5) slider_imed_adjust_pane

0xd211,	// (0x00068ee9) slider_imed_adjust_pane_g1

0xd221,	// (0x00068ef9) slider_imed_adjust_pane_g2

0xd231,	// (0x00068f09) slider_imed_adjust_pane_g3

0xd242,	// (0x00068f1a) slider_imed_adjust_pane_g4

0x0003,

0x06df,	// (0x0005c3b7) slider_imed_adjust_pane_g

0x5a5b,	// (0x00061733) aid_size_cell_clipart2

0x5a67,	// (0x0006173f) grid_imed_clipart_pane

0xd253,	// (0x00068f2b) scroll_pane_cp031

0x5a71,	// (0x00061749) cell_imed_clipart_pane_ParamLimits

0x5a71,	// (0x00061749) cell_imed_clipart_pane

0x5a93,	// (0x0006176b) cell_imed_clipart_pane_g1

0x9c4f,	// (0x00065927) grid_highlight_pane_cp014

0x57f1,	// (0x000614c9) main_clock2_pane_g1_ParamLimits

0x57f1,	// (0x000614c9) main_clock2_pane_g1

0x58c0,	// (0x00061598) aid_call2_pane_cp10

0x58d2,	// (0x000615aa) aid_call_pane_cp10

0xb2a0,	// (0x00066f78) popup_clock_analogue_window_cp10_g1

0xb2a0,	// (0x00066f78) popup_clock_analogue_window_cp10_g2

0x58e4,	// (0x000615bc) popup_clock_analogue_window_cp10_g3

0x58e4,	// (0x000615bc) popup_clock_analogue_window_cp10_g4

0xb2a0,	// (0x00066f78) popup_clock_analogue_window_cp10_g5

0x0004,

0xf66f,	// (0x0006b347) popup_clock_analogue_window_cp10_g

0x58f6,	// (0x000615ce) popup_clock_analogue_window_cp10_t1

0x5927,	// (0x000615ff) clock_digital_number_pane_cp10_ParamLimits

0x5927,	// (0x000615ff) clock_digital_number_pane_cp10

0x593f,	// (0x00061617) clock_digital_number_pane_cp11_ParamLimits

0x593f,	// (0x00061617) clock_digital_number_pane_cp11

0x5957,	// (0x0006162f) clock_digital_number_pane_cp12_ParamLimits

0x5957,	// (0x0006162f) clock_digital_number_pane_cp12

0x596f,	// (0x00061647) clock_digital_number_pane_cp13_ParamLimits

0x596f,	// (0x00061647) clock_digital_number_pane_cp13

0x5987,	// (0x0006165f) clock_digital_separator_pane_cp10_ParamLimits

0x5987,	// (0x0006165f) clock_digital_separator_pane_cp10

0x599f,	// (0x00061677) popup_clock_digital_window_cp02_t1_ParamLimits

0x599f,	// (0x00061677) popup_clock_digital_window_cp02_t1

0xa764,	// (0x0006643c) clock_digital_number_pane_cp10_g1

0xa764,	// (0x0006643c) clock_digital_number_pane_cp10_g2

0x0001,

0xf67a,	// (0x0006b352) clock_digital_number_pane_cp10_g

0xa764,	// (0x0006643c) clock_digital_separator_pane_cp10_g1

0xa764,	// (0x0006643c) clock_digital_separator_pane_g2_cp10

0xb42b,	// (0x00067103) navi_pane_vded_g4

0xb434,	// (0x0006710c) navi_pane_vded_g5

0xb43d,	// (0x00067115) navi_pane_vded_t1

0x11a8,	// (0x0005ce80) main_vded_pane

0x5a9c,	// (0x00061774) main_vded_pane_g1

0x5aa8,	// (0x00061780) main_vded_pane_g2

0x5ab2,	// (0x0006178a) main_vded_pane_g3

0x0002,

0xf67f,	// (0x0006b357) main_vded_pane_g

0x5abc,	// (0x00061794) main_vded_pane_t1

0x5aca,	// (0x000617a2) main_vded_pane_t2

0x0001,

0xf686,	// (0x0006b35e) main_vded_pane_t

0x5ad8,	// (0x000617b0) vded_slider_pane

0x5ae2,	// (0x000617ba) vded_video_pane

0xd25b,	// (0x00068f33) vded_video_pane_g1

0x5aec,	// (0x000617c4) vded_video_pane_g2

0xcc63,	// (0x0006893b) vded_video_pane_g3

0x0002,

0xf68b,	// (0x0006b363) vded_video_pane_g

0xd265,	// (0x00068f3d) vded_slider_pane_g1

0xc9b6,	// (0x0006868e) vded_slider_pane_g2

0xd26e,	// (0x00068f46) vded_slider_pane_g3

0xd277,	// (0x00068f4f) vded_slider_pane_g4

0xd280,	// (0x00068f58) vded_slider_pane_g5

0x0004,

0x0700,	// (0x0005c3d8) vded_slider_pane_g

0x55c1,	// (0x00061299) mup3_rocker_pane_ParamLimits

0x55c1,	// (0x00061299) mup3_rocker_pane

0x5af5,	// (0x000617cd) mup3_control_keys_pane_g1

0x5afd,	// (0x000617d5) mup3_control_keys_pane_g2

0x5b05,	// (0x000617dd) mup3_control_keys_pane_g3

0x5b0d,	// (0x000617e5) mup3_control_keys_pane_g4

0x0003,

0xf692,	// (0x0006b36a) mup3_control_keys_pane_g

0x115c,	// (0x0005ce34) popup_toolbar2_fixed_window_cp01_ParamLimits

0x115c,	// (0x0005ce34) popup_toolbar2_fixed_window_cp01

0x55db,	// (0x000612b3) popup_toolbar2_fixed_window_cp02_ParamLimits

0x55db,	// (0x000612b3) popup_toolbar2_fixed_window_cp02

0xbbd7,	// (0x000678af) popup_call2_audio_second_window_t4_ParamLimits

0xbbd7,	// (0x000678af) popup_call2_audio_second_window_t4

0xc105,	// (0x00067ddd) popup_call2_audio_first_window_t6_ParamLimits

0xc105,	// (0x00067ddd) popup_call2_audio_first_window_t6

0xc39b,	// (0x00068073) popup_call2_audio_out_window_t6_ParamLimits

0xc39b,	// (0x00068073) popup_call2_audio_out_window_t6

0x11a8,	// (0x0005ce80) main_vitu_pane

0x5b1d,	// (0x000617f5) aid_size_cell_itu_ParamLimits

0x5b1d,	// (0x000617f5) aid_size_cell_itu

0xe6d5,	// (0x0006a3ad) bg_popup_window_pane_cp08_ParamLimits

0xe6d5,	// (0x0006a3ad) bg_popup_window_pane_cp08

0x5b2b,	// (0x00061803) field_vitu_entry_pane_ParamLimits

0x5b2b,	// (0x00061803) field_vitu_entry_pane

0x5b3a,	// (0x00061812) grid_vitu_function_pane_ParamLimits

0x5b3a,	// (0x00061812) grid_vitu_function_pane

0x5b4a,	// (0x00061822) grid_vitu_itu_pane_ParamLimits

0x5b4a,	// (0x00061822) grid_vitu_itu_pane

0x5b5a,	// (0x00061832) cell_vitu_itu_pane_ParamLimits

0x5b5a,	// (0x00061832) cell_vitu_itu_pane

0x5b6f,	// (0x00061847) cell_vitu_function_pane_ParamLimits

0x5b6f,	// (0x00061847) cell_vitu_function_pane

0xa4ce,	// (0x000661a6) bg_popup_sub_pane_cp08_ParamLimits

0xa4ce,	// (0x000661a6) bg_popup_sub_pane_cp08

0x5b81,	// (0x00061859) field_vitu_entry_pane_t1_ParamLimits

0x5b81,	// (0x00061859) field_vitu_entry_pane_t1

0xd2a1,	// (0x00068f79) field_vitu_entry_pane_t2_ParamLimits

0xd2a1,	// (0x00068f79) field_vitu_entry_pane_t2

0x0001,

0xf69b,	// (0x0006b373) field_vitu_entry_pane_t_ParamLimits

0xf69b,	// (0x0006b373) field_vitu_entry_pane_t

0xd2be,	// (0x00068f96) bg_button_pane_cp05_ParamLimits

0xd2be,	// (0x00068f96) bg_button_pane_cp05

0x5b9d,	// (0x00061875) cell_vitu_itu_pane_g1

0x5bb5,	// (0x0006188d) cell_vitu_itu_pane_t1_ParamLimits

0x5bb5,	// (0x0006188d) cell_vitu_itu_pane_t1

0x5bc7,	// (0x0006189f) cell_vitu_itu_pane_t2_ParamLimits

0x5bc7,	// (0x0006189f) cell_vitu_itu_pane_t2

0x0002,

0xf6a0,	// (0x0006b378) cell_vitu_itu_pane_t_ParamLimits

0xf6a0,	// (0x0006b378) cell_vitu_itu_pane_t

0xd2cc,	// (0x00068fa4) bg_button_pane_cp07

0x5bfc,	// (0x000618d4) cell_vitu_function_pane_g1

0x143a,	// (0x0005d112) main_calc_pane_g1

0x0f19,	// (0x0005cbf1) aid_visual_content_pane

0x11a8,	// (0x0005ce80) main_vradio_pane

0x5c05,	// (0x000618dd) main_vradio_pane_g1_ParamLimits

0x5c05,	// (0x000618dd) main_vradio_pane_g1

0xd2d6,	// (0x00068fae) main_vradio_pane_g2_ParamLimits

0xd2d6,	// (0x00068fae) main_vradio_pane_g2

0x0001,

0xf6a7,	// (0x0006b37f) main_vradio_pane_g_ParamLimits

0xf6a7,	// (0x0006b37f) main_vradio_pane_g

0x5c15,	// (0x000618ed) main_vradio_pane_t1_ParamLimits

0x5c15,	// (0x000618ed) main_vradio_pane_t1

0x5c27,	// (0x000618ff) main_vradio_pane_t2_ParamLimits

0x5c27,	// (0x000618ff) main_vradio_pane_t2

0xd2e3,	// (0x00068fbb) main_vradio_pane_t3_ParamLimits

0xd2e3,	// (0x00068fbb) main_vradio_pane_t3

0x0002,

0xf6ac,	// (0x0006b384) main_vradio_pane_t_ParamLimits

0xf6ac,	// (0x0006b384) main_vradio_pane_t

0x5c39,	// (0x00061911) vradio_rocker_control_pane_ParamLimits

0x5c39,	// (0x00061911) vradio_rocker_control_pane

0x5c45,	// (0x0006191d) vradio_station_info_pane_ParamLimits

0x5c45,	// (0x0006191d) vradio_station_info_pane

0xd2f7,	// (0x00068fcf) vradio_frequency_info_pane_ParamLimits

0xd2f7,	// (0x00068fcf) vradio_frequency_info_pane

0xcc63,	// (0x0006893b) vradio_station_info_pane_g1

0xd306,	// (0x00068fde) vradio_station_info_pane_t1_ParamLimits

0xd306,	// (0x00068fde) vradio_station_info_pane_t1

0xd328,	// (0x00069000) vradio_station_info_pane_t2_ParamLimits

0xd328,	// (0x00069000) vradio_station_info_pane_t2

0x0001,

0x0731,	// (0x0005c409) vradio_station_info_pane_t_ParamLimits

0x0731,	// (0x0005c409) vradio_station_info_pane_t

0xd33a,	// (0x00069012) vradio_tuning_pane

0xd342,	// (0x0006901a) vradio_rocker_control_pane_g1

0xd34a,	// (0x00069022) vradio_rocker_control_pane_g2

0xd352,	// (0x0006902a) vradio_rocker_control_pane_g3

0xd35a,	// (0x00069032) vradio_rocker_control_pane_g4

0xd362,	// (0x0006903a) vradio_rocker_control_pane_g5

0x0004,

0x0736,	// (0x0005c40e) vradio_rocker_control_pane_g

0x5c54,	// (0x0006192c) vradio_frequency_info_pane_g1

0xd36a,	// (0x00069042) vradio_frequency_info_pane_t1_ParamLimits

0xd36a,	// (0x00069042) vradio_frequency_info_pane_t1

0x5c5e,	// (0x00061936) vradio_tuning_pane_g1

0x5c67,	// (0x0006193f) vradio_tuning_pane_t1

0x0f62,	// (0x0005cc3a) area_side_right_pane_ParamLimits

0x0f62,	// (0x0005cc3a) area_side_right_pane

0xc816,	// (0x000684ee) status_small_pane_g1

0xc81e,	// (0x000684f6) status_small_pane_g2

0xc827,	// (0x000684ff) status_small_pane_g3

0xc830,	// (0x00068508) status_small_pane_g4

0x0003,

0x04f1,	// (0x0005c1c9) status_small_pane_g

0xc839,	// (0x00068511) status_small_pane_t1

0x11a8,	// (0x0005ce80) main_video3_pane

0xd37e,	// (0x00069056) cams_zoom_vslider_pane

0xd386,	// (0x0006905e) image3_wide_pane_ParamLimits

0xd386,	// (0x0006905e) image3_wide_pane

0xd3a0,	// (0x00069078) image3_wide_small_pane

0xd3ac,	// (0x00069084) main_video3_pane_g1_ParamLimits

0xd3ac,	// (0x00069084) main_video3_pane_g1

0xd3c8,	// (0x000690a0) main_video3_pane_g2_ParamLimits

0xd3c8,	// (0x000690a0) main_video3_pane_g2

0x0001,

0x0741,	// (0x0005c419) main_video3_pane_g_ParamLimits

0x0741,	// (0x0005c419) main_video3_pane_g

0xd3e4,	// (0x000690bc) main_video3_pane_t1_ParamLimits

0xd3e4,	// (0x000690bc) main_video3_pane_t1

0xd40f,	// (0x000690e7) main_video3_pane_t2_ParamLimits

0xd40f,	// (0x000690e7) main_video3_pane_t2

0xd43a,	// (0x00069112) main_video3_pane_t3_ParamLimits

0xd43a,	// (0x00069112) main_video3_pane_t3

0x0002,

0x0746,	// (0x0005c41e) main_video3_pane_t_ParamLimits

0x0746,	// (0x0005c41e) main_video3_pane_t

0xd467,	// (0x0006913f) cams_zoom_vslider_pane_g1

0xd470,	// (0x00069148) cams_zoom_vslider_pane_g2

0x0001,

0x074d,	// (0x0005c425) cams_zoom_vslider_pane_g

0xd478,	// (0x00069150) small_slider_vertical_pane

0xcc63,	// (0x0006893b) small_slider_vertical_pane_g1

0xcc63,	// (0x0006893b) small_slider_vertical_pane_g2

0xd480,	// (0x00069158) small_slider_vertical_pane_g3

0x0002,

0x0752,	// (0x0005c42a) small_slider_vertical_pane_g

0x11a8,	// (0x0005ce80) main_hwr_training_pane

0xd489,	// (0x00069161) hwr_training_instruct_pane_ParamLimits

0xd489,	// (0x00069161) hwr_training_instruct_pane

0x5c76,	// (0x0006194e) hwr_training_navi_pane_ParamLimits

0x5c76,	// (0x0006194e) hwr_training_navi_pane

0x5c90,	// (0x00061968) hwr_training_write_pane_ParamLimits

0x5c90,	// (0x00061968) hwr_training_write_pane

0x9c4f,	// (0x00065927) bg_frame_shadow_pane

0xd4c0,	// (0x00069198) hwr_training_write_pane_g1

0xd4c8,	// (0x000691a0) hwr_training_write_pane_g2

0xd4d0,	// (0x000691a8) hwr_training_write_pane_g3

0xd4d8,	// (0x000691b0) hwr_training_write_pane_g4

0xd4e0,	// (0x000691b8) hwr_training_write_pane_g5

0xd4e8,	// (0x000691c0) hwr_training_write_pane_g6

0xd4f0,	// (0x000691c8) hwr_training_write_pane_g7

0x0006,

0x0759,	// (0x0005c431) hwr_training_write_pane_g

0x5cc8,	// (0x000619a0) hwr_training_navi_pane_g1_ParamLimits

0x5cc8,	// (0x000619a0) hwr_training_navi_pane_g1

0x5cda,	// (0x000619b2) hwr_training_navi_pane_g2_ParamLimits

0x5cda,	// (0x000619b2) hwr_training_navi_pane_g2

0x5cec,	// (0x000619c4) hwr_training_navi_pane_g3_ParamLimits

0x5cec,	// (0x000619c4) hwr_training_navi_pane_g3

0x5cfc,	// (0x000619d4) hwr_training_navi_pane_g4_ParamLimits

0x5cfc,	// (0x000619d4) hwr_training_navi_pane_g4

0x0004,

0xf6b3,	// (0x0006b38b) hwr_training_navi_pane_g_ParamLimits

0xf6b3,	// (0x0006b38b) hwr_training_navi_pane_g

0x5d16,	// (0x000619ee) hwr_training_navi_pane_t1

0x5d24,	// (0x000619fc) list_single_hwr_training_instruct_pane_ParamLimits

0x5d24,	// (0x000619fc) list_single_hwr_training_instruct_pane

0xd4f8,	// (0x000691d0) list_single_hwr_training_instruct_pane_t1

0xcba3,	// (0x0006887b) bg_frame_shadow_pane_g1

0xd507,	// (0x000691df) bg_frame_shadow_pane_g2

0xd50f,	// (0x000691e7) bg_frame_shadow_pane_g3

0xd517,	// (0x000691ef) bg_frame_shadow_pane_g4

0xd51f,	// (0x000691f7) bg_frame_shadow_pane_g5

0xd527,	// (0x000691ff) bg_frame_shadow_pane_g6

0xd52f,	// (0x00069207) bg_frame_shadow_pane_g7

0xa8ea,	// (0x000665c2) bg_frame_shadow_pane_g8

0x0007,

0xf6be,	// (0x0006b396) bg_frame_shadow_pane_g

0x11a8,	// (0x0005ce80) main_video_tele_dialer_pane

0x5d49,	// (0x00061a21) aid_size_cell_video_keypad_ParamLimits

0x5d49,	// (0x00061a21) aid_size_cell_video_keypad

0x5d59,	// (0x00061a31) grid_video_dialer_keypad_pane_ParamLimits

0x5d59,	// (0x00061a31) grid_video_dialer_keypad_pane

0x5d8d,	// (0x00061a65) video_down_pane_cp_ParamLimits

0x5d8d,	// (0x00061a65) video_down_pane_cp

0x5db7,	// (0x00061a8f) cell_video_dialer_keypad_pane_ParamLimits

0x5db7,	// (0x00061a8f) cell_video_dialer_keypad_pane

0xd537,	// (0x0006920f) bg_button_pane_cp08_ParamLimits

0xd537,	// (0x0006920f) bg_button_pane_cp08

0x5dcc,	// (0x00061aa4) cell_video_dialer_keypad_pane_g1_ParamLimits

0x5dcc,	// (0x00061aa4) cell_video_dialer_keypad_pane_g1

0x55b5,	// (0x0006128d) mup3_rocker2_pane_ParamLimits

0x55b5,	// (0x0006128d) mup3_rocker2_pane

0xcc63,	// (0x0006893b) mup3_rocker2_pane_g1

0x44cd,	// (0x000601a5) main_dialer2_pane

0x11a8,	// (0x0005ce80) main_mp4_pane

0x5e0b,	// (0x00061ae3) main_mp4_pane_g1_ParamLimits

0x5e0b,	// (0x00061ae3) main_mp4_pane_g1

0x5e19,	// (0x00061af1) main_mp4_pane_g2_ParamLimits

0x5e19,	// (0x00061af1) main_mp4_pane_g2

0x5e27,	// (0x00061aff) main_mp4_pane_g3_ParamLimits

0x5e27,	// (0x00061aff) main_mp4_pane_g3

0x5e6c,	// (0x00061b44) main_mp4_pane_g4_ParamLimits

0x5e6c,	// (0x00061b44) main_mp4_pane_g4

0x5e94,	// (0x00061b6c) main_mp4_pane_g5_ParamLimits

0x5e94,	// (0x00061b6c) main_mp4_pane_g5

0x0005,

0xf6de,	// (0x0006b3b6) main_mp4_pane_g_ParamLimits

0xf6de,	// (0x0006b3b6) main_mp4_pane_g

0x5ee4,	// (0x00061bbc) main_mp4_pane_t1_ParamLimits

0x5ee4,	// (0x00061bbc) main_mp4_pane_t1

0x5f40,	// (0x00061c18) main_mp4_pane_t2_ParamLimits

0x5f40,	// (0x00061c18) main_mp4_pane_t2

0xd543,	// (0x0006921b) main_mp4_pane_t3_ParamLimits

0xd543,	// (0x0006921b) main_mp4_pane_t3

0x5f92,	// (0x00061c6a) main_mp4_pane_t4_ParamLimits

0x5f92,	// (0x00061c6a) main_mp4_pane_t4

0x0003,

0xf6eb,	// (0x0006b3c3) main_mp4_pane_t_ParamLimits

0xf6eb,	// (0x0006b3c3) main_mp4_pane_t

0x5fd6,	// (0x00061cae) mp4_progress_pane_ParamLimits

0x5fd6,	// (0x00061cae) mp4_progress_pane

0x6020,	// (0x00061cf8) mp4_rocker_pane_ParamLimits

0x6020,	// (0x00061cf8) mp4_rocker_pane

0xd56b,	// (0x00069243) mp4_progress_pane_t1

0xd584,	// (0x0006925c) mp4_progress_pane_t2

0x0001,

0x07a9,	// (0x0005c481) mp4_progress_pane_t

0xd59d,	// (0x00069275) mup_progress_pane_cp04

0xdcfa,	// (0x000699d2) mp4_rocker_pane_g1

0x6040,	// (0x00061d18) aid_cell_size_keypad2_ParamLimits

0x6040,	// (0x00061d18) aid_cell_size_keypad2

0x6050,	// (0x00061d28) dialer2_ne_pane_ParamLimits

0x6050,	// (0x00061d28) dialer2_ne_pane

0x605e,	// (0x00061d36) grid_dialer2_keypad_pane_ParamLimits

0x605e,	// (0x00061d36) grid_dialer2_keypad_pane

0xdd3f,	// (0x00069a17) bg_popup_call_pane_cp07_ParamLimits

0xdd3f,	// (0x00069a17) bg_popup_call_pane_cp07

0x606e,	// (0x00061d46) dialer2_ne_pane_t1_ParamLimits

0x606e,	// (0x00061d46) dialer2_ne_pane_t1

0x6093,	// (0x00061d6b) cell_dialer2_keypad_pane_ParamLimits

0x6093,	// (0x00061d6b) cell_dialer2_keypad_pane

0xd5bb,	// (0x00069293) bg_button_pane_pane_cp04_ParamLimits

0xd5bb,	// (0x00069293) bg_button_pane_pane_cp04

0x60a8,	// (0x00061d80) cell_dialer2_keypad_pane_g1_ParamLimits

0x60a8,	// (0x00061d80) cell_dialer2_keypad_pane_g1

0x20ed,	// (0x0005ddc5) aid_placing_vt_set_content_ParamLimits

0x20ed,	// (0x0005ddc5) aid_placing_vt_set_content

0x2119,	// (0x0005ddf1) aid_placing_vt_set_title_ParamLimits

0x2119,	// (0x0005ddf1) aid_placing_vt_set_title

0x11a8,	// (0x0005ce80) main_image3_pane

0x6142,	// (0x00061e1a) area_side_right_pane_cp01_ParamLimits

0x6142,	// (0x00061e1a) area_side_right_pane_cp01

0x616f,	// (0x00061e47) main_image3_pane_g1_ParamLimits

0x616f,	// (0x00061e47) main_image3_pane_g1

0x617d,	// (0x00061e55) main_image3_pane_g2_ParamLimits

0x617d,	// (0x00061e55) main_image3_pane_g2

0x6196,	// (0x00061e6e) main_image3_pane_g3_ParamLimits

0x6196,	// (0x00061e6e) main_image3_pane_g3

0x61af,	// (0x00061e87) main_image3_pane_g4_ParamLimits

0x61af,	// (0x00061e87) main_image3_pane_g4

0x0003,

0xf6fe,	// (0x0006b3d6) main_image3_pane_g_ParamLimits

0xf6fe,	// (0x0006b3d6) main_image3_pane_g

0x61c8,	// (0x00061ea0) main_image3_pane_t1_ParamLimits

0x61c8,	// (0x00061ea0) main_image3_pane_t1

0x61ed,	// (0x00061ec5) main_image3_pane_t2_ParamLimits

0x61ed,	// (0x00061ec5) main_image3_pane_t2

0x620c,	// (0x00061ee4) main_image3_pane_t3_ParamLimits

0x620c,	// (0x00061ee4) main_image3_pane_t3

0x0003,

0xf707,	// (0x0006b3df) main_image3_pane_t_ParamLimits

0xf707,	// (0x0006b3df) main_image3_pane_t

0xe6d5,	// (0x0006a3ad) grid_sctrl_middle_pane_cp01_ParamLimits

0xe6d5,	// (0x0006a3ad) grid_sctrl_middle_pane_cp01

0x626d,	// (0x00061f45) cell_sctrl_middle_pane_cp01_ParamLimits

0x626d,	// (0x00061f45) cell_sctrl_middle_pane_cp01

0x627e,	// (0x00061f56) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x627e,	// (0x00061f56) cell_sctrl_middle_pane_cp01_g1

0x11a8,	// (0x0005ce80) main_call4_pane

0x628b,	// (0x00061f63) aid_size_button_call4_ParamLimits

0x628b,	// (0x00061f63) aid_size_button_call4

0x62bb,	// (0x00061f93) call4_windows_pane_ParamLimits

0x62bb,	// (0x00061f93) call4_windows_pane

0x62d5,	// (0x00061fad) grid_call4_button_pane_ParamLimits

0x62d5,	// (0x00061fad) grid_call4_button_pane

0xd5c7,	// (0x0006929f) call4_windows_conf_pane

0xd5de,	// (0x000692b6) popup_call4_audio_first_window_ParamLimits

0xd5de,	// (0x000692b6) popup_call4_audio_first_window

0xd62a,	// (0x00069302) popup_call4_audio_second_window_ParamLimits

0xd62a,	// (0x00069302) popup_call4_audio_second_window

0xd63e,	// (0x00069316) popup_call4_audio_wait_window_ParamLimits

0xd63e,	// (0x00069316) popup_call4_audio_wait_window

0x62f9,	// (0x00061fd1) cell_call4_button_pane_ParamLimits

0x62f9,	// (0x00061fd1) cell_call4_button_pane

0x631e,	// (0x00061ff6) bg_button_pane_cp09_ParamLimits

0x631e,	// (0x00061ff6) bg_button_pane_cp09

0x632a,	// (0x00062002) cell_call4_button_pane_g1_ParamLimits

0x632a,	// (0x00062002) cell_call4_button_pane_g1

0x6337,	// (0x0006200f) cell_call4_button_pane_t1_ParamLimits

0x6337,	// (0x0006200f) cell_call4_button_pane_t1

0xd686,	// (0x0006935e) popup_call4_audio_conf_window_ParamLimits

0xd686,	// (0x0006935e) popup_call4_audio_conf_window

0x55e8,	// (0x000612c0) mup3_progress_pane_t1_ParamLimits

0x5607,	// (0x000612df) mup3_progress_pane_t2_ParamLimits

0xcf76,	// (0x00068c4e) mup3_progress_pane_t3_ParamLimits

0xf648,	// (0x0006b320) mup3_progress_pane_t_ParamLimits

0xcf93,	// (0x00068c6b) mup_progress_pane_cp03_ParamLimits

0x5b15,	// (0x000617ed) mup3_control_keys_pane_g4_copy1

0x6004,	// (0x00061cdc) mp4_rocker2_pane_ParamLimits

0x6004,	// (0x00061cdc) mp4_rocker2_pane

0xd69a,	// (0x00069372) mp4_rocker2_pane_g1

0xd6a2,	// (0x0006937a) mp4_rocker2_pane_g2

0x6349,	// (0x00062021) mp4_rocker2_pane_g3

0x6351,	// (0x00062029) mp4_rocker2_pane_g4

0x6359,	// (0x00062031) mp4_rocker2_pane_g5

0x0004,

0xf710,	// (0x0006b3e8) mp4_rocker2_pane_g

0x11a8,	// (0x0005ce80) main_camera4_pane

0x11a8,	// (0x0005ce80) main_video4_pane

0x5d69,	// (0x00061a41) main_video_tele_dialer_pane_t1_ParamLimits

0x5d69,	// (0x00061a41) main_video_tele_dialer_pane_t1

0x5d7b,	// (0x00061a53) main_video_tele_dialer_pane_t2_ParamLimits

0x5d7b,	// (0x00061a53) main_video_tele_dialer_pane_t2

0x0001,

0xf6cf,	// (0x0006b3a7) main_video_tele_dialer_pane_t_ParamLimits

0xf6cf,	// (0x0006b3a7) main_video_tele_dialer_pane_t

0x6379,	// (0x00062051) cam4_autofocus_pane_ParamLimits

0x6379,	// (0x00062051) cam4_autofocus_pane

0x6393,	// (0x0006206b) cam4_image_uncrop_pane_ParamLimits

0x6393,	// (0x0006206b) cam4_image_uncrop_pane

0x63aa,	// (0x00062082) cam4_indicators_pane_ParamLimits

0x63aa,	// (0x00062082) cam4_indicators_pane

0x63c6,	// (0x0006209e) main_camera4_pane_g1_ParamLimits

0x63c6,	// (0x0006209e) main_camera4_pane_g1

0x63d2,	// (0x000620aa) main_camera4_pane_g2_ParamLimits

0x63d2,	// (0x000620aa) main_camera4_pane_g2

0x63d2,	// (0x000620aa) main_camera4_pane_g3_ParamLimits

0x63d2,	// (0x000620aa) main_camera4_pane_g3

0x63de,	// (0x000620b6) main_camera4_pane_g4_ParamLimits

0x63de,	// (0x000620b6) main_camera4_pane_g4

0x63ea,	// (0x000620c2) main_camera4_pane_g5_ParamLimits

0x63ea,	// (0x000620c2) main_camera4_pane_g5

0x0005,

0xf71b,	// (0x0006b3f3) main_camera4_pane_g_ParamLimits

0xf71b,	// (0x0006b3f3) main_camera4_pane_g

0x6404,	// (0x000620dc) main_camera4_pane_t1_ParamLimits

0x6404,	// (0x000620dc) main_camera4_pane_t1

0x644c,	// (0x00062124) bg_tb_trans_pane_cp06

0x6462,	// (0x0006213a) cam4_indicators_pane_g1

0x6473,	// (0x0006214b) cam4_indicators_pane_g2

0x0002,

0xf736,	// (0x0006b40e) cam4_indicators_pane_g

0x6491,	// (0x00062169) cam4_indicators_pane_t1

0x64bb,	// (0x00062193) main_video4_pane_g1_ParamLimits

0x64bb,	// (0x00062193) main_video4_pane_g1

0x64c7,	// (0x0006219f) main_video4_pane_g2_ParamLimits

0x64c7,	// (0x0006219f) main_video4_pane_g2

0x64d3,	// (0x000621ab) main_video4_pane_g3_ParamLimits

0x64d3,	// (0x000621ab) main_video4_pane_g3

0x64df,	// (0x000621b7) main_video4_pane_g4_ParamLimits

0x64df,	// (0x000621b7) main_video4_pane_g4

0x0004,

0xf73d,	// (0x0006b415) main_video4_pane_g_ParamLimits

0xf73d,	// (0x0006b415) main_video4_pane_g

0x64ff,	// (0x000621d7) vid4_indicators_pane_ParamLimits

0x64ff,	// (0x000621d7) vid4_indicators_pane

0x651e,	// (0x000621f6) video4_image_uncrop_cif_pane_ParamLimits

0x651e,	// (0x000621f6) video4_image_uncrop_cif_pane

0x652d,	// (0x00062205) video4_image_uncrop_nhd_pane_ParamLimits

0x652d,	// (0x00062205) video4_image_uncrop_nhd_pane

0x6393,	// (0x0006206b) video4_image_uncrop_vga_pane_ParamLimits

0x6393,	// (0x0006206b) video4_image_uncrop_vga_pane

0x44bf,	// (0x00060197) bg_tb_trans_pane_cp07

0x6544,	// (0x0006221c) vid4_indicators_pane_g1

0x6558,	// (0x00062230) vid4_indicators_pane_g2

0x656c,	// (0x00062244) vid4_indicators_pane_g3

0x0004,

0xf748,	// (0x0006b420) vid4_indicators_pane_g

0x659b,	// (0x00062273) vid4_indicators_pane_t1

0x65b2,	// (0x0006228a) cam4_autofocus_pane_g1

0x65ba,	// (0x00062292) cam4_autofocus_pane_g2

0x65c2,	// (0x0006229a) cam4_autofocus_pane_g3

0x0002,

0xf753,	// (0x0006b42b) cam4_autofocus_pane_g

0x65ca,	// (0x000622a2) cam4_autofocus_pane_g3_copy1

0x5d9b,	// (0x00061a73) video_down_pane_cp_t1

0x5da9,	// (0x00061a81) video_down_pane_cp_t2

0x0001,

0xf6d4,	// (0x0006b3ac) video_down_pane_cp_t

0x118e,	// (0x0005ce66) popup_vitu2_window_ParamLimits

0x118e,	// (0x0005ce66) popup_vitu2_window

0x65d2,	// (0x000622aa) aid_size_cell2_itu2_ParamLimits

0x65d2,	// (0x000622aa) aid_size_cell2_itu2

0x65f4,	// (0x000622cc) aid_size_cell_itu2_ParamLimits

0x65f4,	// (0x000622cc) aid_size_cell_itu2

0x6638,	// (0x00062310) bg_popup_window_pane_cp09_ParamLimits

0x6638,	// (0x00062310) bg_popup_window_pane_cp09

0x6646,	// (0x0006231e) field_vitu2_entry_pane_ParamLimits

0x6646,	// (0x0006231e) field_vitu2_entry_pane

0x6666,	// (0x0006233e) grid_vitu2_function_pane_ParamLimits

0x6666,	// (0x0006233e) grid_vitu2_function_pane

0x66aa,	// (0x00062382) grid_vitu2_itu_pane_ParamLimits

0x66aa,	// (0x00062382) grid_vitu2_itu_pane

0x6722,	// (0x000623fa) cell_vitu2_itu_pane_ParamLimits

0x6722,	// (0x000623fa) cell_vitu2_itu_pane

0x6737,	// (0x0006240f) cell_vitu2_function_pane_ParamLimits

0x6737,	// (0x0006240f) cell_vitu2_function_pane

0xd6aa,	// (0x00069382) bg_popup_call_pane_cp08_ParamLimits

0xd6aa,	// (0x00069382) bg_popup_call_pane_cp08

0xd6c1,	// (0x00069399) field_vitu2_entry_pane_g1

0xd6cd,	// (0x000693a5) field_vitu2_entry_pane_g2

0x0002,

0x0814,	// (0x0005c4ec) field_vitu2_entry_pane_g

0x6776,	// (0x0006244e) field_vitu2_entry_pane_t1_ParamLimits

0x6776,	// (0x0006244e) field_vitu2_entry_pane_t1

0xa0c3,	// (0x00065d9b) field_vitu2_entry_pane_t2_ParamLimits

0xa0c3,	// (0x00065d9b) field_vitu2_entry_pane_t2

0x0001,

0xf75a,	// (0x0006b432) field_vitu2_entry_pane_t_ParamLimits

0xf75a,	// (0x0006b432) field_vitu2_entry_pane_t

0x67a3,	// (0x0006247b) bg_button_pane_cp010_ParamLimits

0x67a3,	// (0x0006247b) bg_button_pane_cp010

0x67b1,	// (0x00062489) cell_vitu2_itu_pane_g1

0x67da,	// (0x000624b2) cell_vitu2_itu_pane_t1_ParamLimits

0x67da,	// (0x000624b2) cell_vitu2_itu_pane_t1

0x0e0a,	// (0x0005cae2) cell_vitu2_itu_pane_t2_ParamLimits

0x0e0a,	// (0x0005cae2) cell_vitu2_itu_pane_t2

0x0002,

0xf764,	// (0x0006b43c) cell_vitu2_itu_pane_t_ParamLimits

0xf764,	// (0x0006b43c) cell_vitu2_itu_pane_t

0x44bf,	// (0x00060197) bg_button_pane_cp011

0x6826,	// (0x000624fe) cell_vitu2_function_pane_g1

0x11a8,	// (0x0005ce80) main_myfav_hc_pane

0x624e,	// (0x00061f26) popup_image3_note_pane_ParamLimits

0x624e,	// (0x00061f26) popup_image3_note_pane

0x625c,	// (0x00061f34) popup_image3_tool_bar_pane_ParamLimits

0x625c,	// (0x00061f34) popup_image3_tool_bar_pane

0x0e78,	// (0x0005cb50) cell_vitu2_itu_pane_t3_ParamLimits

0x0e78,	// (0x0005cb50) cell_vitu2_itu_pane_t3

0x9c4f,	// (0x00065927) bg_popup_trans_pane

0xd6ef,	// (0x000693c7) grid_image3_tool_bar_pane

0xd6f9,	// (0x000693d1) bg_popup_trans_pane_g1

0xac48,	// (0x00066920) bg_popup_trans_pane_g2

0xd701,	// (0x000693d9) bg_popup_trans_pane_g3

0xd709,	// (0x000693e1) bg_popup_trans_pane_g4

0xd711,	// (0x000693e9) bg_popup_trans_pane_g5

0xd719,	// (0x000693f1) bg_popup_trans_pane_g6

0xd721,	// (0x000693f9) bg_popup_trans_pane_g7

0xd729,	// (0x00069401) bg_popup_trans_pane_g8

0xac28,	// (0x00066900) bg_popup_trans_pane_g9

0x0008,

0xf76b,	// (0x0006b443) bg_popup_trans_pane_g

0xd731,	// (0x00069409) cell_image3_tool_bar_pane_ParamLimits

0xd731,	// (0x00069409) cell_image3_tool_bar_pane

0xcc63,	// (0x0006893b) cell_image3_tool_bar_pane_g1

0x9c4f,	// (0x00065927) bg_popup_trans_pane_cp1

0xd745,	// (0x0006941d) popup_image3_note_pane_t1

0xd753,	// (0x0006942b) popup_image3_note_pane_t2

0xd761,	// (0x00069439) popup_image3_note_pane_t3

0x0002,

0x083f,	// (0x0005c517) popup_image3_note_pane_t

0xd76f,	// (0x00069447) popup_image3_note_pane_t3_copy1

0x683a,	// (0x00062512) bg_myfav_hc_instruction_pane_ParamLimits

0x683a,	// (0x00062512) bg_myfav_hc_instruction_pane

0x6852,	// (0x0006252a) cell_myfav_contact_pane_ParamLimits

0x6852,	// (0x0006252a) cell_myfav_contact_pane

0x686c,	// (0x00062544) cell_myfav_contact_pane_cp1_ParamLimits

0x686c,	// (0x00062544) cell_myfav_contact_pane_cp1

0x6884,	// (0x0006255c) cell_myfav_contact_pane_cp2_ParamLimits

0x6884,	// (0x0006255c) cell_myfav_contact_pane_cp2

0x689c,	// (0x00062574) cell_myfav_contact_pane_cp3_ParamLimits

0x689c,	// (0x00062574) cell_myfav_contact_pane_cp3

0x68b3,	// (0x0006258b) cell_myfav_contact_pane_cp4_ParamLimits

0x68b3,	// (0x0006258b) cell_myfav_contact_pane_cp4

0x68c9,	// (0x000625a1) cell_myfav_contact_pane_cp5_ParamLimits

0x68c9,	// (0x000625a1) cell_myfav_contact_pane_cp5

0x68dd,	// (0x000625b5) cell_myfav_contact_pane_cp6_ParamLimits

0x68dd,	// (0x000625b5) cell_myfav_contact_pane_cp6

0x68f1,	// (0x000625c9) cell_myfav_contact_pane_cp7_ParamLimits

0x68f1,	// (0x000625c9) cell_myfav_contact_pane_cp7

0xd77d,	// (0x00069455) listscroll_gen_pane_cp05

0x6909,	// (0x000625e1) main_myfav_hc_pane_g1_ParamLimits

0x6909,	// (0x000625e1) main_myfav_hc_pane_g1

0x691f,	// (0x000625f7) main_myfav_hc_pane_g2_ParamLimits

0x691f,	// (0x000625f7) main_myfav_hc_pane_g2

0x0002,

0xf77e,	// (0x0006b456) main_myfav_hc_pane_g_ParamLimits

0xf77e,	// (0x0006b456) main_myfav_hc_pane_g

0x694d,	// (0x00062625) main_myfav_hc_pane_t1_ParamLimits

0x694d,	// (0x00062625) main_myfav_hc_pane_t1

0xd786,	// (0x0006945e) main_myfav_hc_pane_t2_ParamLimits

0xd786,	// (0x0006945e) main_myfav_hc_pane_t2

0xd798,	// (0x00069470) main_myfav_hc_pane_t3_ParamLimits

0xd798,	// (0x00069470) main_myfav_hc_pane_t3

0x6964,	// (0x0006263c) main_myfav_hc_pane_t4_ParamLimits

0x6964,	// (0x0006263c) main_myfav_hc_pane_t4

0x0004,

0xf785,	// (0x0006b45d) main_myfav_hc_pane_t_ParamLimits

0xf785,	// (0x0006b45d) main_myfav_hc_pane_t

0xcc63,	// (0x0006893b) bg_myfav_hc_instruction_pane_g1

0xd7aa,	// (0x00069482) cell_myfav_contact_pane_g1_ParamLimits

0xd7aa,	// (0x00069482) cell_myfav_contact_pane_g1

0xd7aa,	// (0x00069482) cell_myfav_contact_pane_g2_ParamLimits

0xd7aa,	// (0x00069482) cell_myfav_contact_pane_g2

0xd7b6,	// (0x0006948e) cell_myfav_contact_pane_g3_ParamLimits

0xd7b6,	// (0x0006948e) cell_myfav_contact_pane_g3

0xcf60,	// (0x00068c38) cell_myfav_contact_pane_g4_ParamLimits

0xcf60,	// (0x00068c38) cell_myfav_contact_pane_g4

0xd7c3,	// (0x0006949b) cell_myfav_contact_pane_g5_ParamLimits

0xd7c3,	// (0x0006949b) cell_myfav_contact_pane_g5

0x0004,

0x0858,	// (0x0005c530) cell_myfav_contact_pane_g_ParamLimits

0x0858,	// (0x0005c530) cell_myfav_contact_pane_g

0x6935,	// (0x0006260d) main_myfav_hc_pane_g3_ParamLimits

0x6935,	// (0x0006260d) main_myfav_hc_pane_g3

0x1097,	// (0x0005cd6f) popup_adpt_find_window

0x698e,	// (0x00062666) afind_page_pane_ParamLimits

0x698e,	// (0x00062666) afind_page_pane

0x699b,	// (0x00062673) aid_size_cell_afind_ParamLimits

0x699b,	// (0x00062673) aid_size_cell_afind

0x69b5,	// (0x0006268d) bg_popup_sub_pane_cp09_ParamLimits

0x69b5,	// (0x0006268d) bg_popup_sub_pane_cp09

0x69c2,	// (0x0006269a) find_pane_cp01_ParamLimits

0x69c2,	// (0x0006269a) find_pane_cp01

0xd7cf,	// (0x000694a7) grid_afind_control_pane_ParamLimits

0xd7cf,	// (0x000694a7) grid_afind_control_pane

0x69cf,	// (0x000626a7) grid_afind_pane_ParamLimits

0x69cf,	// (0x000626a7) grid_afind_pane

0x69eb,	// (0x000626c3) cell_afind_pane_ParamLimits

0x69eb,	// (0x000626c3) cell_afind_pane

0xcc63,	// (0x0006893b) afind_page_pane_g1

0x6a33,	// (0x0006270b) afind_page_pane_g2

0x6a3c,	// (0x00062714) afind_page_pane_g3

0x0002,

0xf790,	// (0x0006b468) afind_page_pane_g

0x6a45,	// (0x0006271d) afind_page_pane_t1

0xd7e3,	// (0x000694bb) cell_afind_grid_control_pane_ParamLimits

0xd7e3,	// (0x000694bb) cell_afind_grid_control_pane

0xd5bb,	// (0x00069293) bg_button_pane_cp69_ParamLimits

0xd5bb,	// (0x00069293) bg_button_pane_cp69

0x6a65,	// (0x0006273d) cell_afind_pane_g1_ParamLimits

0x6a65,	// (0x0006273d) cell_afind_pane_g1

0x6a72,	// (0x0006274a) cell_afind_pane_t1_ParamLimits

0x6a72,	// (0x0006274a) cell_afind_pane_t1

0xaa41,	// (0x00066719) bg_button_pane_cp72

0xd7f2,	// (0x000694ca) cell_afind_grid_control_pane_g1

0x403d,	// (0x0005fd15) aid_image_placing_area_ParamLimits

0x403d,	// (0x0005fd15) aid_image_placing_area

0xd289,	// (0x00068f61) field_vitu_entry_pane_g1_ParamLimits

0xd289,	// (0x00068f61) field_vitu_entry_pane_g1

0xd295,	// (0x00068f6d) field_vitu_entry_pane_g2_ParamLimits

0xd295,	// (0x00068f6d) field_vitu_entry_pane_g2

0x0001,

0x0714,	// (0x0005c3ec) field_vitu_entry_pane_g_ParamLimits

0x0714,	// (0x0005c3ec) field_vitu_entry_pane_g

0x5b9d,	// (0x00061875) cell_vitu_itu_pane_g1_ParamLimits

0x5bdf,	// (0x000618b7) cell_vitu_itu_pane_t3_ParamLimits

0x5bdf,	// (0x000618b7) cell_vitu_itu_pane_t3

0xd56b,	// (0x00069243) mp4_progress_pane_t1_ParamLimits

0xd584,	// (0x0006925c) mp4_progress_pane_t2_ParamLimits

0x07a9,	// (0x0005c481) mp4_progress_pane_t_ParamLimits

0xd59d,	// (0x00069275) mup_progress_pane_cp04_ParamLimits

0x6978,	// (0x00062650) main_myfav_hc_pane_t5_ParamLimits

0x6978,	// (0x00062650) main_myfav_hc_pane_t5

0x0f25,	// (0x0005cbfd) aid_zoom_text_primary

0x1097,	// (0x0005cd6f) popup_adpt_find_window_ParamLimits

0x44bf,	// (0x00060197) main_cam_set_pane

0x63b8,	// (0x00062090) cam4_zoom_pane_ParamLimits

0x63b8,	// (0x00062090) cam4_zoom_pane

0x6a84,	// (0x0006275c) main_cam_set_pane_g1_ParamLimits

0x6a84,	// (0x0006275c) main_cam_set_pane_g1

0x6a92,	// (0x0006276a) main_cam_set_pane_g2_ParamLimits

0x6a92,	// (0x0006276a) main_cam_set_pane_g2

0x0001,

0xf797,	// (0x0006b46f) main_cam_set_pane_g_ParamLimits

0xf797,	// (0x0006b46f) main_cam_set_pane_g

0x6a9e,	// (0x00062776) main_cam_set_pane_t1_ParamLimits

0x6a9e,	// (0x00062776) main_cam_set_pane_t1

0x6aba,	// (0x00062792) main_cset_listscroll_pane_ParamLimits

0x6aba,	// (0x00062792) main_cset_listscroll_pane

0x6ae5,	// (0x000627bd) main_cset_slider_pane_ParamLimits

0x6ae5,	// (0x000627bd) main_cset_slider_pane

0xd803,	// (0x000694db) main_cset_list_pane_ParamLimits

0xd803,	// (0x000694db) main_cset_list_pane

0xd813,	// (0x000694eb) scroll_pane_cp028

0x6b04,	// (0x000627dc) aid_area_touch_slider

0x6b20,	// (0x000627f8) cset_slider_pane

0x6b4a,	// (0x00062822) main_cset_slider_pane_g1

0x6b5f,	// (0x00062837) main_cset_slider_pane_g2

0x0011,

0xf79c,	// (0x0006b474) main_cset_slider_pane_g

0xd84c,	// (0x00069524) main_cset_slider_pane_t1

0x6c21,	// (0x000628f9) main_cset_slider_pane_t2

0x6c3b,	// (0x00062913) main_cset_slider_pane_t3

0x6c55,	// (0x0006292d) main_cset_slider_pane_t4

0x6c6f,	// (0x00062947) main_cset_slider_pane_t5

0x6c8d,	// (0x00062965) main_cset_slider_pane_t6

0x6ca4,	// (0x0006297c) main_cset_slider_pane_t7

0x000e,

0xf7c1,	// (0x0006b499) main_cset_slider_pane_t

0x6db0,	// (0x00062a88) cset_list_set_pane_ParamLimits

0x6db0,	// (0x00062a88) cset_list_set_pane

0x6dc6,	// (0x00062a9e) aid_position_infowindow_above

0x6dce,	// (0x00062aa6) aid_position_infowindow_below

0xa0e0,	// (0x00065db8) cset_list_set_pane_g1_ParamLimits

0xa0e0,	// (0x00065db8) cset_list_set_pane_g1

0xa0ec,	// (0x00065dc4) cset_list_set_pane_g3_ParamLimits

0xa0ec,	// (0x00065dc4) cset_list_set_pane_g3

0x0001,

0xf7e0,	// (0x0006b4b8) cset_list_set_pane_g_ParamLimits

0xf7e0,	// (0x0006b4b8) cset_list_set_pane_g

0xa0fb,	// (0x00065dd3) cset_list_set_pane_t1_ParamLimits

0xa0fb,	// (0x00065dd3) cset_list_set_pane_t1

0xa4ce,	// (0x000661a6) list_highlight_pane_cp021_ParamLimits

0xa4ce,	// (0x000661a6) list_highlight_pane_cp021

0xb599,	// (0x00067271) cset_slider_pane_g1

0xb5ab,	// (0x00067283) cset_slider_pane_g2

0xb5a2,	// (0x0006727a) cset_slider_pane_g3

0x0002,

0x08b8,	// (0x0005c590) cset_slider_pane_g

0x6dd6,	// (0x00062aae) aid_area_touch_cam4_zoom

0x6dde,	// (0x00062ab6) cam4_zoom_cont_pane

0x6de6,	// (0x00062abe) cam4_zoom_pane_g1

0x6dee,	// (0x00062ac6) cam4_zoom_pane_g2

0x6df6,	// (0x00062ace) cam4_zoom_pane_g3

0x0002,

0xf7e5,	// (0x0006b4bd) cam4_zoom_pane_g

0x6dfe,	// (0x00062ad6) cam4_zoom_cont_pane_g1

0x6e07,	// (0x00062adf) cam4_zoom_cont_pane_g2

0x6e10,	// (0x00062ae8) cam4_zoom_cont_pane_g3

0x0002,

0xf7ec,	// (0x0006b4c4) cam4_zoom_cont_pane_g

0x62a5,	// (0x00061f7d) call4_image_pane_ParamLimits

0x62a5,	// (0x00061f7d) call4_image_pane

0xd5c7,	// (0x0006929f) call4_windows_conf_pane_ParamLimits

0xd608,	// (0x000692e0) popup_call4_audio_in_window_ParamLimits

0xd608,	// (0x000692e0) popup_call4_audio_in_window

0x9c4f,	// (0x00065927) bg_popup_call2_act_pane_cp02

0xd67e,	// (0x00069356) call4_list_conf_pane

0xcc63,	// (0x0006893b) call4_image_pane_g1

0xcc63,	// (0x0006893b) call4_image_pane_g2

0x0001,

0x05d5,	// (0x0005c2ad) call4_image_pane_g

0xd8ec,	// (0x000695c4) list_single_graphic_popup_conf4_pane_ParamLimits

0xd8ec,	// (0x000695c4) list_single_graphic_popup_conf4_pane

0x9c4f,	// (0x00065927) list_highlight_pane_cp022

0xd8ff,	// (0x000695d7) list_single_graphic_popup_conf4_pane_g1

0xb162,	// (0x00066e3a) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf7f3,	// (0x0006b4cb) list_single_graphic_popup_conf4_pane_g

0xd907,	// (0x000695df) list_single_graphic_popup_conf4_pane_t1

0x227d,	// (0x0005df55) popup_vtel_slider_window_ParamLimits

0x227d,	// (0x0005df55) popup_vtel_slider_window

0xd5a9,	// (0x00069281) dialer2_ne_pane_t2_ParamLimits

0xd5a9,	// (0x00069281) dialer2_ne_pane_t2

0x0001,

0xf6f4,	// (0x0006b3cc) dialer2_ne_pane_t_ParamLimits

0xf6f4,	// (0x0006b3cc) dialer2_ne_pane_t

0xa4ce,	// (0x000661a6) bg_popup_sub_pane_cp010_ParamLimits

0xa4ce,	// (0x000661a6) bg_popup_sub_pane_cp010

0x6e19,	// (0x00062af1) popup_vtel_slider_window_g1_ParamLimits

0x6e19,	// (0x00062af1) popup_vtel_slider_window_g1

0x6e25,	// (0x00062afd) popup_vtel_slider_window_g2_ParamLimits

0x6e25,	// (0x00062afd) popup_vtel_slider_window_g2

0x0003,

0xf7f8,	// (0x0006b4d0) popup_vtel_slider_window_g_ParamLimits

0xf7f8,	// (0x0006b4d0) popup_vtel_slider_window_g

0x6e6d,	// (0x00062b45) vtel_slider_pane_ParamLimits

0x6e6d,	// (0x00062b45) vtel_slider_pane

0x6e7c,	// (0x00062b54) vtel_slider_pane_g1_ParamLimits

0x6e7c,	// (0x00062b54) vtel_slider_pane_g1

0x6e89,	// (0x00062b61) vtel_slider_pane_g2_ParamLimits

0x6e89,	// (0x00062b61) vtel_slider_pane_g2

0x6e96,	// (0x00062b6e) vtel_slider_pane_g3_ParamLimits

0x6e96,	// (0x00062b6e) vtel_slider_pane_g3

0x6e7c,	// (0x00062b54) vtel_slider_pane_g4_ParamLimits

0x6e7c,	// (0x00062b54) vtel_slider_pane_g4

0x6ea3,	// (0x00062b7b) vtel_slider_pane_g5_ParamLimits

0x6ea3,	// (0x00062b7b) vtel_slider_pane_g5

0x0004,

0xf801,	// (0x0006b4d9) vtel_slider_pane_g_ParamLimits

0xf801,	// (0x0006b4d9) vtel_slider_pane_g

0x44bf,	// (0x00060197) main_gallery2_pane

0x661a,	// (0x000622f2) aid_size_row_itut2_dropdow_list_ParamLimits

0x661a,	// (0x000622f2) aid_size_row_itut2_dropdow_list

0x6688,	// (0x00062360) grid_vitu2_function_top_pane_ParamLimits

0x6688,	// (0x00062360) grid_vitu2_function_top_pane

0x66de,	// (0x000623b6) popup_vitu2_dropdown_list_window_ParamLimits

0x66de,	// (0x000623b6) popup_vitu2_dropdown_list_window

0x66fe,	// (0x000623d6) popup_vitu2_match_list_window

0x6ebe,	// (0x00062b96) cell_vitu2_function_top_pane_ParamLimits

0x6ebe,	// (0x00062b96) cell_vitu2_function_top_pane

0x6ede,	// (0x00062bb6) cell_vitu2_function_top_pane_cp01_ParamLimits

0x6ede,	// (0x00062bb6) cell_vitu2_function_top_pane_cp01

0x6efc,	// (0x00062bd4) cell_vitu2_function_top_wide_pane_ParamLimits

0x6efc,	// (0x00062bd4) cell_vitu2_function_top_wide_pane

0x44bf,	// (0x00060197) bg_button_pane_cp012

0x6f1a,	// (0x00062bf2) cell_vitu2_function_top_pane_g1

0x6f2e,	// (0x00062c06) bg_button_pane_cp013_ParamLimits

0x6f2e,	// (0x00062c06) bg_button_pane_cp013

0x6f4a,	// (0x00062c22) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x6f4a,	// (0x00062c22) cell_vitu2_function_top_wide_pane_g1

0x118e,	// (0x0005ce66) bg_popup_sub_pane_cp20

0x6f62,	// (0x00062c3a) list_vitu2_match_list_pane

0xd6f9,	// (0x000693d1) bg_popup_sub_pane_cp20_g1

0xd701,	// (0x000693d9) bg_popup_sub_pane_cp20_g2

0xac48,	// (0x00066920) bg_popup_sub_pane_cp20_g3

0xd709,	// (0x000693e1) bg_popup_sub_pane_cp20_g4

0xac28,	// (0x00066900) bg_popup_sub_pane_cp20_g5

0xd91d,	// (0x000695f5) bg_popup_sub_pane_cp20_g6

0xd719,	// (0x000693f1) bg_popup_sub_pane_cp20_g7

0xd721,	// (0x000693f9) bg_popup_sub_pane_cp20_g8

0xd729,	// (0x00069401) bg_popup_sub_pane_cp20_g9

0x0008,

0xf80c,	// (0x0006b4e4) bg_popup_sub_pane_cp20_g

0x6f7a,	// (0x00062c52) list_vitu2_match_list_item_pane_ParamLimits

0x6f7a,	// (0x00062c52) list_vitu2_match_list_item_pane

0x6f8c,	// (0x00062c64) list_vitu2_match_list_item_pane_t1

0x11a8,	// (0x0005ce80) bg_popup_sub_pane_cp21

0x6fde,	// (0x00062cb6) grid_vitu2_dropdown_list_pane

0x6fe6,	// (0x00062cbe) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x6fe6,	// (0x00062cbe) cell_vitu2_dropdown_list_char_pane

0x7007,	// (0x00062cdf) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x7007,	// (0x00062cdf) cell_vitu2_dropdown_list_ctrl_pane

0xd925,	// (0x000695fd) cell_vitu2_dropdown_list_char_pane_g1

0xd92e,	// (0x00069606) cell_vitu2_dropdown_list_char_pane_g2

0xd937,	// (0x0006960f) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0x0903,	// (0x0005c5db) cell_vitu2_dropdown_list_char_pane_g

0x7033,	// (0x00062d0b) cell_vitu2_dropdown_list_char_pane_t1

0x7041,	// (0x00062d19) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x7041,	// (0x00062d19) cell_vitu2_dropdown_list_ctrl_pane_g1

0x7051,	// (0x00062d29) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x7051,	// (0x00062d29) cell_vitu2_dropdown_list_ctrl_pane_g2

0x7062,	// (0x00062d3a) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x7062,	// (0x00062d3a) cell_vitu2_dropdown_list_ctrl_pane_g3

0x7072,	// (0x00062d4a) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x7072,	// (0x00062d4a) cell_vitu2_dropdown_list_ctrl_pane_g4

0x644c,	// (0x00062124) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x644c,	// (0x00062124) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf829,	// (0x0006b501) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf829,	// (0x0006b501) cell_vitu2_dropdown_list_ctrl_pane_g

0x708e,	// (0x00062d66) aid_size_cell_gallery2_ParamLimits

0x708e,	// (0x00062d66) aid_size_cell_gallery2

0x70a8,	// (0x00062d80) grid_gallery2_pane_ParamLimits

0x70a8,	// (0x00062d80) grid_gallery2_pane

0x5a26,	// (0x000616fe) scroll_pane_cp029_ParamLimits

0x5a26,	// (0x000616fe) scroll_pane_cp029

0x70bf,	// (0x00062d97) cell_gallery2_pane_ParamLimits

0x70bf,	// (0x00062d97) cell_gallery2_pane

0xd940,	// (0x00069618) cell_gallery2_pane_g2

0xea33,	// (0x0006a70b) cell_gallery2_pane_g3

0xd948,	// (0x00069620) cell_gallery2_pane_g4

0xd950,	// (0x00069628) cell_gallery2_pane_g5

0xb463,	// (0x0006713b) grid_highlight_pane_cp10

0x66fe,	// (0x000623d6) popup_vitu2_match_list_window_ParamLimits

0x6712,	// (0x000623ea) popup_vitu2_query_window_ParamLimits

0x6712,	// (0x000623ea) popup_vitu2_query_window

0x11a8,	// (0x0005ce80) bg_vitu2_candi_button_pane

0xd925,	// (0x000695fd) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd92e,	// (0x00069606) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd937,	// (0x0006960f) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x7113,	// (0x00062deb) bg_button_pane_cp015

0x7125,	// (0x00062dfd) bg_button_pane_cp016

0x7138,	// (0x00062e10) bg_button_pane_cp017

0xc85b,	// (0x00068533) bg_popup_sub_pane_cp22

0xd958,	// (0x00069630) popup_vitu2_query_window_g1

0x717d,	// (0x00062e55) popup_vitu2_query_window_g2

0x0002,

0xf834,	// (0x0006b50c) popup_vitu2_query_window_g

0x719a,	// (0x00062e72) popup_vitu2_query_window_t1_ParamLimits

0x719a,	// (0x00062e72) popup_vitu2_query_window_t1

0x71cd,	// (0x00062ea5) popup_vitu2_query_window_t2_ParamLimits

0x71cd,	// (0x00062ea5) popup_vitu2_query_window_t2

0x71df,	// (0x00062eb7) popup_vitu2_query_window_t3_ParamLimits

0x71df,	// (0x00062eb7) popup_vitu2_query_window_t3

0x7207,	// (0x00062edf) popup_vitu2_query_window_t4_ParamLimits

0x7207,	// (0x00062edf) popup_vitu2_query_window_t4

0x7228,	// (0x00062f00) popup_vitu2_query_window_t5_ParamLimits

0x7228,	// (0x00062f00) popup_vitu2_query_window_t5

0x0006,

0xf83b,	// (0x0006b513) popup_vitu2_query_window_t_ParamLimits

0xf83b,	// (0x0006b513) popup_vitu2_query_window_t

0xd7fb,	// (0x000694d3) main_cset_text_pane

0x6b04,	// (0x000627dc) aid_area_touch_slider_ParamLimits

0x6b20,	// (0x000627f8) cset_slider_pane_ParamLimits

0x6b4a,	// (0x00062822) main_cset_slider_pane_g1_ParamLimits

0x6b5f,	// (0x00062837) main_cset_slider_pane_g2_ParamLimits

0xd81c,	// (0x000694f4) main_cset_slider_pane_g3_ParamLimits

0xd81c,	// (0x000694f4) main_cset_slider_pane_g3

0x6b74,	// (0x0006284c) main_cset_slider_pane_g4_ParamLimits

0x6b74,	// (0x0006284c) main_cset_slider_pane_g4

0x6b83,	// (0x0006285b) main_cset_slider_pane_g5_ParamLimits

0x6b83,	// (0x0006285b) main_cset_slider_pane_g5

0x6b91,	// (0x00062869) main_cset_slider_pane_g6_ParamLimits

0x6b91,	// (0x00062869) main_cset_slider_pane_g6

0xf79c,	// (0x0006b474) main_cset_slider_pane_g_ParamLimits

0xd84c,	// (0x00069524) main_cset_slider_pane_t1_ParamLimits

0x6c21,	// (0x000628f9) main_cset_slider_pane_t2_ParamLimits

0x6c3b,	// (0x00062913) main_cset_slider_pane_t3_ParamLimits

0x6c55,	// (0x0006292d) main_cset_slider_pane_t4_ParamLimits

0x6c6f,	// (0x00062947) main_cset_slider_pane_t5_ParamLimits

0x6c8d,	// (0x00062965) main_cset_slider_pane_t6_ParamLimits

0x6ca4,	// (0x0006297c) main_cset_slider_pane_t7_ParamLimits

0x6cd2,	// (0x000629aa) main_cset_slider_pane_t8_ParamLimits

0x6cd2,	// (0x000629aa) main_cset_slider_pane_t8

0x6cfa,	// (0x000629d2) main_cset_slider_pane_t9_ParamLimits

0x6cfa,	// (0x000629d2) main_cset_slider_pane_t9

0x6d22,	// (0x000629fa) main_cset_slider_pane_t10_ParamLimits

0x6d22,	// (0x000629fa) main_cset_slider_pane_t10

0x6d4a,	// (0x00062a22) main_cset_slider_pane_t11_ParamLimits

0x6d4a,	// (0x00062a22) main_cset_slider_pane_t11

0x6d74,	// (0x00062a4c) main_cset_slider_pane_t12_ParamLimits

0x6d74,	// (0x00062a4c) main_cset_slider_pane_t12

0x6d91,	// (0x00062a69) main_cset_slider_pane_t13_ParamLimits

0x6d91,	// (0x00062a69) main_cset_slider_pane_t13

0xf7c1,	// (0x0006b499) main_cset_slider_pane_t_ParamLimits

0x9c4f,	// (0x00065927) bg_popup_sub_pane_cp011

0xd964,	// (0x0006963c) main_cset_text_pane_g1

0xd96c,	// (0x00069644) main_cset_text_pane_t1

0xd97a,	// (0x00069652) main_cset_text_pane_t2

0xd988,	// (0x00069660) main_cset_text_pane_t3

0xd996,	// (0x0006966e) main_cset_text_pane_t4

0xd9a4,	// (0x0006967c) main_cset_text_pane_t5

0xd9b2,	// (0x0006968a) main_cset_text_pane_t6

0xd9c0,	// (0x00069698) main_cset_text_pane_t7

0x0006,

0x092b,	// (0x0005c603) main_cset_text_pane_t

0x11a8,	// (0x0005ce80) main_cam4_burst_pane

0x11a8,	// (0x0005ce80) main_cam5_pane

0x6a53,	// (0x0006272b) bg_button_pane_cp019

0x6a5c,	// (0x00062734) bg_button_pane_cp020

0xd828,	// (0x00069500) main_cset_slider_pane_g7_ParamLimits

0xd828,	// (0x00069500) main_cset_slider_pane_g7

0xd834,	// (0x0006950c) main_cset_slider_pane_g8_ParamLimits

0xd834,	// (0x0006950c) main_cset_slider_pane_g8

0x6ba5,	// (0x0006287d) main_cset_slider_pane_g9_ParamLimits

0x6ba5,	// (0x0006287d) main_cset_slider_pane_g9

0x6bb1,	// (0x00062889) main_cset_slider_pane_g10_ParamLimits

0x6bb1,	// (0x00062889) main_cset_slider_pane_g10

0x6bbd,	// (0x00062895) main_cset_slider_pane_g11_ParamLimits

0x6bbd,	// (0x00062895) main_cset_slider_pane_g11

0x6bc9,	// (0x000628a1) main_cset_slider_pane_g12_ParamLimits

0x6bc9,	// (0x000628a1) main_cset_slider_pane_g12

0x6bd5,	// (0x000628ad) main_cset_slider_pane_g13_ParamLimits

0x6bd5,	// (0x000628ad) main_cset_slider_pane_g13

0x6be1,	// (0x000628b9) main_cset_slider_pane_g14_ParamLimits

0x6be1,	// (0x000628b9) main_cset_slider_pane_g14

0x6bed,	// (0x000628c5) main_cset_slider_pane_g15_ParamLimits

0x6bed,	// (0x000628c5) main_cset_slider_pane_g15

0xd87a,	// (0x00069552) main_cset_slider_pane_t14_ParamLimits

0xd87a,	// (0x00069552) main_cset_slider_pane_t14

0xd8b3,	// (0x0006958b) main_cset_slider_pane_t15_ParamLimits

0xd8b3,	// (0x0006958b) main_cset_slider_pane_t15

0x729f,	// (0x00062f77) aid_cam4_burst_size_cell_ParamLimits

0x729f,	// (0x00062f77) aid_cam4_burst_size_cell

0x72bb,	// (0x00062f93) grid_cam4_burst_pane_ParamLimits

0x72bb,	// (0x00062f93) grid_cam4_burst_pane

0x72eb,	// (0x00062fc3) linegrid_cam4_burst_pane_ParamLimits

0x72eb,	// (0x00062fc3) linegrid_cam4_burst_pane

0x730b,	// (0x00062fe3) scroll_pane_cp30_ParamLimits

0x730b,	// (0x00062fe3) scroll_pane_cp30

0x7317,	// (0x00062fef) cell_cam4_burst_pane_ParamLimits

0x7317,	// (0x00062fef) cell_cam4_burst_pane

0xd9ce,	// (0x000696a6) linegrid_cam4_burst_pane_g1_ParamLimits

0xd9ce,	// (0x000696a6) linegrid_cam4_burst_pane_g1

0x7353,	// (0x0006302b) linegrid_cam4_burst_pane_g2_ParamLimits

0x7353,	// (0x0006302b) linegrid_cam4_burst_pane_g2

0xd9db,	// (0x000696b3) linegrid_cam4_burst_pane_g3_ParamLimits

0xd9db,	// (0x000696b3) linegrid_cam4_burst_pane_g3

0x0002,

0xf84a,	// (0x0006b522) linegrid_cam4_burst_pane_g_ParamLimits

0xf84a,	// (0x0006b522) linegrid_cam4_burst_pane_g

0x7364,	// (0x0006303c) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x7364,	// (0x0006303c) linegrid_cam4_burst_pane_g3_copy1

0xd9e8,	// (0x000696c0) linegrid_cam4_burst_pane_g4_ParamLimits

0xd9e8,	// (0x000696c0) linegrid_cam4_burst_pane_g4

0x737e,	// (0x00063056) linegrid_cam4_burst_pane_g5_ParamLimits

0x737e,	// (0x00063056) linegrid_cam4_burst_pane_g5

0x738f,	// (0x00063067) linegrid_cam4_burst_pane_g6_ParamLimits

0x738f,	// (0x00063067) linegrid_cam4_burst_pane_g6

0xd9f5,	// (0x000696cd) linegrid_cam4_burst_pane_g7_ParamLimits

0xd9f5,	// (0x000696cd) linegrid_cam4_burst_pane_g7

0x73a0,	// (0x00063078) cell_cam4_burst_pane_g1

0xda17,	// (0x000696ef) main_cam5_pane_t1_ParamLimits

0xda17,	// (0x000696ef) main_cam5_pane_t1

0xda29,	// (0x00069701) main_cam5_pane_t2_ParamLimits

0xda29,	// (0x00069701) main_cam5_pane_t2

0xda59,	// (0x00069731) main_cam5_pane_t3_ParamLimits

0xda59,	// (0x00069731) main_cam5_pane_t3

0xda6b,	// (0x00069743) main_cam5_pane_t4_ParamLimits

0xda6b,	// (0x00069743) main_cam5_pane_t4

0xda83,	// (0x0006975b) main_cam5_pane_t5_ParamLimits

0xda83,	// (0x0006975b) main_cam5_pane_t5

0xda97,	// (0x0006976f) main_cam5_pane_t6_ParamLimits

0xda97,	// (0x0006976f) main_cam5_pane_t6

0xdaab,	// (0x00069783) main_cam5_pane_t7_ParamLimits

0xdaab,	// (0x00069783) main_cam5_pane_t7

0xdabd,	// (0x00069795) main_cam5_pane_t8_ParamLimits

0xdabd,	// (0x00069795) main_cam5_pane_t8

0xdad9,	// (0x000697b1) main_cam5_pane_t9_ParamLimits

0xdad9,	// (0x000697b1) main_cam5_pane_t9

0xdaeb,	// (0x000697c3) main_cam5_pane_t10_ParamLimits

0xdaeb,	// (0x000697c3) main_cam5_pane_t10

0xdafd,	// (0x000697d5) main_cam5_pane_t11_ParamLimits

0xdafd,	// (0x000697d5) main_cam5_pane_t11

0xdb0f,	// (0x000697e7) main_cam5_pane_t12_ParamLimits

0xdb0f,	// (0x000697e7) main_cam5_pane_t12

0xdb24,	// (0x000697fc) main_cam5_pane_t13_ParamLimits

0xdb24,	// (0x000697fc) main_cam5_pane_t13

0x000c,

0xf856,	// (0x0006b52e) main_cam5_pane_t_ParamLimits

0xf856,	// (0x0006b52e) main_cam5_pane_t

0x114d,	// (0x0005ce25) popup_scut_keymap_window_ParamLimits

0x114d,	// (0x0005ce25) popup_scut_keymap_window

0x73b3,	// (0x0006308b) aid_size_cell_brow_shortcut

0xb463,	// (0x0006713b) bg_popup_window_pane_cp010

0x73bf,	// (0x00063097) grid_scut_pane

0x73cb,	// (0x000630a3) cell_scut_pane_ParamLimits

0x73cb,	// (0x000630a3) cell_scut_pane

0x73e2,	// (0x000630ba) cell_scut_pane_g1

0xdb41,	// (0x00069819) cell_scut_pane_t1

0xdb50,	// (0x00069828) cell_scut_pane_t2

0x73eb,	// (0x000630c3) cell_scut_pane_t3

0x0002,

0xf871,	// (0x0006b549) cell_scut_pane_t

0x5207,	// (0x00060edf) main_mup3_pane_g8_ParamLimits

0x5207,	// (0x00060edf) main_mup3_pane_g8

0x6628,	// (0x00062300) area_vitu2_query_pane_ParamLimits

0x6628,	// (0x00062300) area_vitu2_query_pane

0x714b,	// (0x00062e23) input_focus_pane_cp08

0xdb5f,	// (0x00069837) area_vitu2_query_pane_g1

0x73f9,	// (0x000630d1) area_vitu2_query_pane_g2

0x0001,

0xf878,	// (0x0006b550) area_vitu2_query_pane_g

0x740a,	// (0x000630e2) area_vitu2_query_pane_t1_ParamLimits

0x740a,	// (0x000630e2) area_vitu2_query_pane_t1

0x741e,	// (0x000630f6) area_vitu2_query_pane_t2_ParamLimits

0x741e,	// (0x000630f6) area_vitu2_query_pane_t2

0x7432,	// (0x0006310a) area_vitu2_query_pane_t3_ParamLimits

0x7432,	// (0x0006310a) area_vitu2_query_pane_t3

0xa110,	// (0x00065de8) area_vitu2_query_pane_t4_ParamLimits

0xa110,	// (0x00065de8) area_vitu2_query_pane_t4

0xa138,	// (0x00065e10) area_vitu2_query_pane_t5_ParamLimits

0xa138,	// (0x00065e10) area_vitu2_query_pane_t5

0xa160,	// (0x00065e38) area_vitu2_query_pane_t6_ParamLimits

0xa160,	// (0x00065e38) area_vitu2_query_pane_t6

0x0006,

0xf87d,	// (0x0006b555) area_vitu2_query_pane_t_ParamLimits

0xf87d,	// (0x0006b555) area_vitu2_query_pane_t

0x745a,	// (0x00063132) bg_button_pane_cp018

0x7468,	// (0x00063140) bg_button_pane_cp021

0x7474,	// (0x0006314c) bg_button_pane_cp022

0x7485,	// (0x0006315d) input_focus_pane_cp09

0xb2ac,	// (0x00066f84) aid_size_touch_mv_arrow_left

0xb2d5,	// (0x00066fad) aid_size_touch_mv_arrow_right

0x6c05,	// (0x000628dd) main_cset_slider_pane_g16_ParamLimits

0x6c05,	// (0x000628dd) main_cset_slider_pane_g16

0x6c13,	// (0x000628eb) main_cset_slider_pane_g17_ParamLimits

0x6c13,	// (0x000628eb) main_cset_slider_pane_g17

0x73a0,	// (0x00063078) cell_cam4_burst_pane_g1_ParamLimits

0x9c4f,	// (0x00065927) compa_mode_pane

0x6e31,	// (0x00062b09) popup_vtel_slider_window_g3_ParamLimits

0x6e31,	// (0x00062b09) popup_vtel_slider_window_g3

0x6e45,	// (0x00062b1d) popup_vtel_slider_window_g4_ParamLimits

0x6e45,	// (0x00062b1d) popup_vtel_slider_window_g4

0x6e59,	// (0x00062b31) popup_vtel_slider_window_t1_ParamLimits

0x6e59,	// (0x00062b31) popup_vtel_slider_window_t1

0x11a8,	// (0x0005ce80) main_cl_pane

0x455d,	// (0x00060235) popup_imed_adjust2_window_ParamLimits

0xc85b,	// (0x00068533) bg_tb_trans_pane_cp05_ParamLimits

0xd1be,	// (0x00068e96) popup_imed_adjust2_window_g1_ParamLimits

0xd1cd,	// (0x00068ea5) popup_imed_adjust2_window_g2_ParamLimits

0xd1cd,	// (0x00068ea5) popup_imed_adjust2_window_g2

0xd1d9,	// (0x00068eb1) popup_imed_adjust2_window_g3_ParamLimits

0xd1d9,	// (0x00068eb1) popup_imed_adjust2_window_g3

0x0002,

0x06d8,	// (0x0005c3b0) popup_imed_adjust2_window_g_ParamLimits

0x06d8,	// (0x0005c3b0) popup_imed_adjust2_window_g

0xd1e5,	// (0x00068ebd) popup_imed_adjust2_window_t1_ParamLimits

0xd1fd,	// (0x00068ed5) slider_imed_adjust_pane_ParamLimits

0xd211,	// (0x00068ee9) slider_imed_adjust_pane_g1_ParamLimits

0xd221,	// (0x00068ef9) slider_imed_adjust_pane_g2_ParamLimits

0xd231,	// (0x00068f09) slider_imed_adjust_pane_g3_ParamLimits

0xd242,	// (0x00068f1a) slider_imed_adjust_pane_g4_ParamLimits

0x06df,	// (0x0005c3b7) slider_imed_adjust_pane_g_ParamLimits

0x6361,	// (0x00062039) aid_touch_area_cam4_ParamLimits

0x6361,	// (0x00062039) aid_touch_area_cam4

0x6371,	// (0x00062049) battery_pane_cp01

0x63f8,	// (0x000620d0) main_camera4_pane_g6_ParamLimits

0x63f8,	// (0x000620d0) main_camera4_pane_g6

0x6416,	// (0x000620ee) main_camera4_pane_t2_ParamLimits

0x6416,	// (0x000620ee) main_camera4_pane_t2

0x0001,

0xf728,	// (0x0006b400) main_camera4_pane_t_ParamLimits

0xf728,	// (0x0006b400) main_camera4_pane_t

0x64ab,	// (0x00062183) aid_touch_area_vid4_ParamLimits

0x64ab,	// (0x00062183) aid_touch_area_vid4

0x64eb,	// (0x000621c3) main_video4_pane_g5_ParamLimits

0x64eb,	// (0x000621c3) main_video4_pane_g5

0x650f,	// (0x000621e7) vid4_progress_pane_ParamLimits

0x650f,	// (0x000621e7) vid4_progress_pane

0xd840,	// (0x00069518) main_cset_slider_pane_g18_ParamLimits

0xd840,	// (0x00069518) main_cset_slider_pane_g18

0xda02,	// (0x000696da) cell_cam4_burst_pane_g2_ParamLimits

0xda02,	// (0x000696da) cell_cam4_burst_pane_g2

0x0001,

0xf851,	// (0x0006b529) cell_cam4_burst_pane_g_ParamLimits

0xf851,	// (0x0006b529) cell_cam4_burst_pane_g

0x7496,	// (0x0006316e) bg_cl_pane_ParamLimits

0x7496,	// (0x0006316e) bg_cl_pane

0x74a2,	// (0x0006317a) cl_header_pane_ParamLimits

0x74a2,	// (0x0006317a) cl_header_pane

0x74ae,	// (0x00063186) cl_listscroll_pane_ParamLimits

0x74ae,	// (0x00063186) cl_listscroll_pane

0xdb6b,	// (0x00069843) bg_cl_pane_g1

0xdb73,	// (0x0006984b) bg_cl_pane_g2

0xdb7b,	// (0x00069853) bg_cl_pane_g3

0xdb83,	// (0x0006985b) bg_cl_pane_g4

0xdb8b,	// (0x00069863) bg_cl_pane_g5

0xdb93,	// (0x0006986b) bg_cl_pane_g6

0xdb9b,	// (0x00069873) bg_cl_pane_g7

0xdba3,	// (0x0006987b) bg_cl_pane_g8

0xdbab,	// (0x00069883) bg_cl_pane_g9

0x0008,

0x097c,	// (0x0005c654) bg_cl_pane_g

0x74ba,	// (0x00063192) aid_height_cl_leading_ParamLimits

0x74ba,	// (0x00063192) aid_height_cl_leading

0x74c6,	// (0x0006319e) aid_height_cl_text_ParamLimits

0x74c6,	// (0x0006319e) aid_height_cl_text

0xe6d5,	// (0x0006a3ad) bg_cl_header_pane_ParamLimits

0xe6d5,	// (0x0006a3ad) bg_cl_header_pane

0x74de,	// (0x000631b6) cl_header_pane_g1_ParamLimits

0x74de,	// (0x000631b6) cl_header_pane_g1

0x74eb,	// (0x000631c3) cl_header_pane_t1_ParamLimits

0x74eb,	// (0x000631c3) cl_header_pane_t1

0xdbb3,	// (0x0006988b) cl_list_pane

0xd813,	// (0x000694eb) hc_scroll_pane_cp01

0xac28,	// (0x00066900) bg_cl_header_pane_g1

0xd6f9,	// (0x000693d1) bg_cl_header_pane_g2

0xac48,	// (0x00066920) bg_cl_header_pane_g3

0xd709,	// (0x000693e1) bg_cl_header_pane_g4

0xd701,	// (0x000693d9) bg_cl_header_pane_g5

0xd91d,	// (0x000695f5) bg_cl_header_pane_g6

0xd721,	// (0x000693f9) bg_cl_header_pane_g7

0xd729,	// (0x00069401) bg_cl_header_pane_g8

0xd719,	// (0x000693f1) bg_cl_header_pane_g9

0x0008,

0xf88c,	// (0x0006b564) bg_cl_header_pane_g

0x74fd,	// (0x000631d5) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x74fd,	// (0x000631d5) hc_cl_list_double_graphic_heading_pane

0x750e,	// (0x000631e6) hc_cl_list_single_graphic_pane_ParamLimits

0x750e,	// (0x000631e6) hc_cl_list_single_graphic_pane

0x7527,	// (0x000631ff) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x7527,	// (0x000631ff) hc_cl_list_single_graphic_pane_g1

0x7533,	// (0x0006320b) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x7533,	// (0x0006320b) hc_cl_list_single_graphic_pane_g2

0x0001,

0xf89f,	// (0x0006b577) hc_cl_list_single_graphic_pane_g_ParamLimits

0xf89f,	// (0x0006b577) hc_cl_list_single_graphic_pane_g

0x7547,	// (0x0006321f) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x7547,	// (0x0006321f) hc_cl_list_single_graphic_pane_t1

0x7527,	// (0x000631ff) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x7527,	// (0x000631ff) hc_cl_list_double_graphic_heading_pane_g1

0x755c,	// (0x00063234) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x755c,	// (0x00063234) hc_cl_list_double_graphic_heading_pane_g2

0x7570,	// (0x00063248) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x7570,	// (0x00063248) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xf8a4,	// (0x0006b57c) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xf8a4,	// (0x0006b57c) hc_cl_list_double_graphic_heading_pane_g

0x7584,	// (0x0006325c) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x7584,	// (0x0006325c) hc_cl_list_double_graphic_heading_pane_t1

0x7599,	// (0x00063271) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x7599,	// (0x00063271) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xf8ab,	// (0x0006b583) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xf8ab,	// (0x0006b583) hc_cl_list_double_graphic_heading_pane_t

0x75b6,	// (0x0006328e) vid4_progress_pane_g1

0x75c6,	// (0x0006329e) vid4_progress_pane_g2

0x75d6,	// (0x000632ae) vid4_progress_pane_g3

0x75e8,	// (0x000632c0) vid4_progress_pane_g4

0x0004,

0xf8b0,	// (0x0006b588) vid4_progress_pane_g

0x7600,	// (0x000632d8) vid4_progress_pane_t1

0x7616,	// (0x000632ee) vid4_progress_pane_t2

0x0002,

0xf8bb,	// (0x0006b593) vid4_progress_pane_t

0x7640,	// (0x00063318) wait_bar_pane_cp07

0xca56,	// (0x0006872e) blid_firmament_pane_ParamLimits

0xca99,	// (0x00068771) popup_blid_sat_info2_window_g1

0xcabd,	// (0x00068795) popup_blid_sat_info2_window_t3

0xcacb,	// (0x000687a3) popup_blid_sat_info2_window_t4

0xcad9,	// (0x000687b1) popup_blid_sat_info2_window_t5

0xcae7,	// (0x000687bf) popup_blid_sat_info2_window_t6

0xcaf7,	// (0x000687cf) popup_blid_sat_info2_window_t7

0xcb05,	// (0x000687dd) popup_blid_sat_info2_window_t8

0xcb13,	// (0x000687eb) popup_blid_sat_info2_window_t9

0xcb21,	// (0x000687f9) popup_blid_sat_info2_window_t10

0xcbe3,	// (0x000688bb) aid_firma_cardinal_ParamLimits

0xcbf7,	// (0x000688cf) blid_firmament_pane_t1_ParamLimits

0xcc0e,	// (0x000688e6) blid_firmament_pane_t2_ParamLimits

0xcc25,	// (0x000688fd) blid_firmament_pane_t3_ParamLimits

0xcc3c,	// (0x00068914) blid_firmament_pane_t4_ParamLimits

0x05cc,	// (0x0005c2a4) blid_firmament_pane_t_ParamLimits

0xcc53,	// (0x0006892b) blid_sat_info_pane_ParamLimits

0x44bf,	// (0x00060197) main_cam_set_pane_ParamLimits

0x59bf,	// (0x00061697) aid_size_cell_colour_35_ParamLimits

0x59d9,	// (0x000616b1) aid_size_cell_colour_112_ParamLimits

0x59f0,	// (0x000616c8) aid_size_cell_effect_ParamLimits

0xa4ce,	// (0x000661a6) bg_tb_trans_pane_cp02_ParamLimits

0xaf8c,	// (0x00066c64) heading_imed_pane_ParamLimits

0x5a0a,	// (0x000616e2) listscroll_imed_pane_ParamLimits

0xbe81,	// (0x00067b59) popup_call2_audio_first_window_g5_ParamLimits

0xbe81,	// (0x00067b59) popup_call2_audio_first_window_g5

0x6110,	// (0x00061de8) aid_size_touch_image3_arrow_left_ParamLimits

0x6110,	// (0x00061de8) aid_size_touch_image3_arrow_left

0x6126,	// (0x00061dfe) aid_size_touch_image3_arrow_right_ParamLimits

0x6126,	// (0x00061dfe) aid_size_touch_image3_arrow_right

0x762b,	// (0x00063303) vid4_progress_pane_t3

0x5ca8,	// (0x00061980) main_hwr_training_symbol_option_pane_ParamLimits

0x5ca8,	// (0x00061980) main_hwr_training_symbol_option_pane

0xd4ab,	// (0x00069183) popup_hwr_training_preview_window_ParamLimits

0xd4ab,	// (0x00069183) popup_hwr_training_preview_window

0x5d09,	// (0x000619e1) hwr_training_navi_pane_g5_ParamLimits

0x5d09,	// (0x000619e1) hwr_training_navi_pane_g5

0xd6e7,	// (0x000693bf) popup_char_count_window

0x118e,	// (0x0005ce66) bg_popup_sub_pane_cp20_ParamLimits

0x6f62,	// (0x00062c3a) list_vitu2_match_list_pane_ParamLimits

0x6f6e,	// (0x00062c46) vitu2_page_scroll_pane_ParamLimits

0x6f6e,	// (0x00062c46) vitu2_page_scroll_pane

0xdbbc,	// (0x00069894) list_single_hwr_training_symbol_option_pane_ParamLimits

0xdbbc,	// (0x00069894) list_single_hwr_training_symbol_option_pane

0xdbcf,	// (0x000698a7) list_single_hwr_training_symbol_option_pane_g1

0xdbd7,	// (0x000698af) list_single_hwr_training_symbol_option_pane_t1

0xdbe5,	// (0x000698bd) bg_button_pane_cp023

0xdbee,	// (0x000698c6) bg_button_pane_cp024

0x768b,	// (0x00063363) vitu2_page_scroll_pane_g1

0x7693,	// (0x0006336b) vitu2_page_scroll_pane_g2

0x0001,

0xf8c2,	// (0x0006b59a) vitu2_page_scroll_pane_g

0x769b,	// (0x00063373) vitu2_page_scroll_pane_t1

0xdc21,	// (0x000698f9) popup_char_count_window_g1

0xdc2a,	// (0x00069902) popup_char_count_window_g2

0xdc33,	// (0x0006990b) popup_char_count_window_g3

0x0002,

0x09ca,	// (0x0005c6a2) popup_char_count_window_g

0xdc3c,	// (0x00069914) popup_char_count_window_t1

0x11a8,	// (0x0005ce80) main_vded2_pane

0xd1aa,	// (0x00068e82) aid_size_cell_imed_line

0xd1b4,	// (0x00068e8c) grid_imed_line_width_pane

0x657d,	// (0x00062255) vid4_indicators_pane_g4

0xdc4a,	// (0x00069922) cell_imed_line_width_pane_ParamLimits

0xdc4a,	// (0x00069922) cell_imed_line_width_pane

0xdc5e,	// (0x00069936) cell_imed_line_width_pane_g1

0xdc67,	// (0x0006993f) cell_imed_line_width_pane_g2

0x0001,

0x09d1,	// (0x0005c6a9) cell_imed_line_width_pane_g

0x76aa,	// (0x00063382) main_vded2_pane_g1_ParamLimits

0x76aa,	// (0x00063382) main_vded2_pane_g1

0x76b7,	// (0x0006338f) main_vded2_pane_g2_ParamLimits

0x76b7,	// (0x0006338f) main_vded2_pane_g2

0x0001,

0xf8c7,	// (0x0006b59f) main_vded2_pane_g_ParamLimits

0xf8c7,	// (0x0006b59f) main_vded2_pane_g

0x76c5,	// (0x0006339d) vded2_slider_pane_ParamLimits

0x76c5,	// (0x0006339d) vded2_slider_pane

0x76d2,	// (0x000633aa) aid_size_touch_vded2_end

0x76dc,	// (0x000633b4) aid_size_touch_vded2_playhead

0xdc6f,	// (0x00069947) aid_size_touch_vded2_start

0xdc77,	// (0x0006994f) vded2_slider_bg_pane

0xdc80,	// (0x00069958) vded2_slider_pane_g1

0xdc89,	// (0x00069961) vded2_slider_pane_g2

0x76e4,	// (0x000633bc) vded2_slider_pane_g3

0x0002,

0xf8cc,	// (0x0006b5a4) vded2_slider_pane_g

0xdc91,	// (0x00069969) vded2_slider_bg_pane_g1

0xdc9a,	// (0x00069972) vded2_slider_bg_pane_g2

0xdca3,	// (0x0006997b) vded2_slider_bg_pane_g3

0x0002,

0x09e2,	// (0x0005c6ba) vded2_slider_bg_pane_g

0x3da7,	// (0x0005fa7f) aid_postcard_touch_down_pane_ParamLimits

0x3da7,	// (0x0005fa7f) aid_postcard_touch_down_pane

0x3db7,	// (0x0005fa8f) aid_postcard_touch_up_pane_ParamLimits

0x3db7,	// (0x0005fa8f) aid_postcard_touch_up_pane

0x11a8,	// (0x0005ce80) main_blid2_pane

0x44e8,	// (0x000601c0) popup_blid2_search_window

0x9c4f,	// (0x00065927) blid2_gps_pane

0x9c4f,	// (0x00065927) blid2_navig_pane

0x9c4f,	// (0x00065927) blid2_search_pane

0x9c4f,	// (0x00065927) blid2_tripm_pane

0x76ed,	// (0x000633c5) blid2_search_pane_g1_ParamLimits

0x76ed,	// (0x000633c5) blid2_search_pane_g1

0x76fd,	// (0x000633d5) blid2_search_pane_t1_ParamLimits

0x76fd,	// (0x000633d5) blid2_search_pane_t1

0x770f,	// (0x000633e7) aid_size_cell_blid2_gps_ParamLimits

0x770f,	// (0x000633e7) aid_size_cell_blid2_gps

0x771f,	// (0x000633f7) blid2_gps_pane_g1_ParamLimits

0x771f,	// (0x000633f7) blid2_gps_pane_g1

0x772b,	// (0x00063403) grid_blid2_satellite_pane_ParamLimits

0x772b,	// (0x00063403) grid_blid2_satellite_pane

0x773b,	// (0x00063413) blid2_navig_pane_g1_ParamLimits

0x773b,	// (0x00063413) blid2_navig_pane_g1

0x7747,	// (0x0006341f) blid2_navig_pane_t1_ParamLimits

0x7747,	// (0x0006341f) blid2_navig_pane_t1

0x7759,	// (0x00063431) blid2_navig_pane_t2_ParamLimits

0x7759,	// (0x00063431) blid2_navig_pane_t2

0x0001,

0xf8d3,	// (0x0006b5ab) blid2_navig_pane_t_ParamLimits

0xf8d3,	// (0x0006b5ab) blid2_navig_pane_t

0x776b,	// (0x00063443) blid2_navig_ring_pane_ParamLimits

0x776b,	// (0x00063443) blid2_navig_ring_pane

0x777b,	// (0x00063453) blid2_speed_pane_ParamLimits

0x777b,	// (0x00063453) blid2_speed_pane

0x7787,	// (0x0006345f) blid2_tripm_pane_g1_ParamLimits

0x7787,	// (0x0006345f) blid2_tripm_pane_g1

0x7797,	// (0x0006346f) blid2_tripm_pane_g2_ParamLimits

0x7797,	// (0x0006346f) blid2_tripm_pane_g2

0x77a3,	// (0x0006347b) blid2_tripm_pane_g3_ParamLimits

0x77a3,	// (0x0006347b) blid2_tripm_pane_g3

0x77af,	// (0x00063487) blid2_tripm_pane_g4_ParamLimits

0x77af,	// (0x00063487) blid2_tripm_pane_g4

0x77bb,	// (0x00063493) blid2_tripm_pane_g5_ParamLimits

0x77bb,	// (0x00063493) blid2_tripm_pane_g5

0x0005,

0xf8d8,	// (0x0006b5b0) blid2_tripm_pane_g_ParamLimits

0xf8d8,	// (0x0006b5b0) blid2_tripm_pane_g

0x77d7,	// (0x000634af) blid2_tripm_pane_t1_ParamLimits

0x77d7,	// (0x000634af) blid2_tripm_pane_t1

0x77eb,	// (0x000634c3) blid2_tripm_pane_t2_ParamLimits

0x77eb,	// (0x000634c3) blid2_tripm_pane_t2

0x77fd,	// (0x000634d5) blid2_tripm_pane_t3_ParamLimits

0x77fd,	// (0x000634d5) blid2_tripm_pane_t3

0x0003,

0xf8e5,	// (0x0006b5bd) blid2_tripm_pane_t_ParamLimits

0xf8e5,	// (0x0006b5bd) blid2_tripm_pane_t

0x782f,	// (0x00063507) cell_blid2_satellite_pane_ParamLimits

0x782f,	// (0x00063507) cell_blid2_satellite_pane

0x7849,	// (0x00063521) cell_blid2_satellite_pane_g1

0xdcac,	// (0x00069984) cell_blid2_satellite_pane_t1

0xcc63,	// (0x0006893b) blid2_speed_pane_g1

0xdcba,	// (0x00069992) blid2_speed_pane_t1

0xdcc8,	// (0x000699a0) blid2_speed_pane_t2

0x0001,

0x0a04,	// (0x0005c6dc) blid2_speed_pane_t

0xcc63,	// (0x0006893b) blid2_navig_ring_pane_g1

0x7852,	// (0x0006352a) blid2_navig_ring_pane_g2

0x785a,	// (0x00063532) blid2_navig_ring_pane_g3

0x7862,	// (0x0006353a) blid2_navig_ring_pane_g4

0x786a,	// (0x00063542) blid2_navig_ring_pane_g5

0x0004,

0xf8ee,	// (0x0006b5c6) blid2_navig_ring_pane_g

0x9c4f,	// (0x00065927) bg_popup_window_pane_cp011

0xdcd6,	// (0x000699ae) popup_blid2_search_window_g1

0xdcde,	// (0x000699b6) popup_blid2_search_window_t1

0xdcec,	// (0x000699c4) popup_blid2_search_window_t2

0x0001,

0x0a14,	// (0x0005c6ec) popup_blid2_search_window_t

0xab37,	// (0x0006680f) main_browser_pane_g1

0xa831,	// (0x00066509) main_browser_pane_ParamLimits

0x44bf,	// (0x00060197) bg_button_pane_cp011_ParamLimits

0x6826,	// (0x000624fe) cell_vitu2_function_pane_g1_ParamLimits

0xc85b,	// (0x00068533) bg_popup_sub_pane_cp22_ParamLimits

0x714b,	// (0x00062e23) input_focus_pane_cp08_ParamLimits

0x7162,	// (0x00062e3a) popup_vitu2_query_button_pane_ParamLimits

0x7162,	// (0x00062e3a) popup_vitu2_query_button_pane

0x7173,	// (0x00062e4b) popup_vitu2_query_input_button_pane

0xd958,	// (0x00069630) popup_vitu2_query_window_g1_ParamLimits

0x717d,	// (0x00062e55) popup_vitu2_query_window_g2_ParamLimits

0xf834,	// (0x0006b50c) popup_vitu2_query_window_g_ParamLimits

0x9c4f,	// (0x00065927) bg_button_pane_cp026

0x7872,	// (0x0006354a) popup_vitu2_query_input_button_pane_g1

0x9c4f,	// (0x00065927) bg_button_pane_cp025

0xdd04,	// (0x000699dc) popup_vitu2_query_button_pane_t1

0x4f3e,	// (0x00060c16) main_mp3_pane_t6

0x4f4e,	// (0x00060c26) popup_slider_window_cp01

0x645a,	// (0x00062132) cam4_battery_pane

0x653a,	// (0x00062212) cam4_battery_pane_cp02

0x75ae,	// (0x00063286) cam4_battery_pane_cp01

0x75ae,	// (0x00063286) cam4_battery_pane_cp03

0xdcfa,	// (0x000699d2) cam4_battery_pane_g1

0xcc63,	// (0x0006893b) cam4_battery_pane_g2

0x0001,

0xf8f9,	// (0x0006b5d1) cam4_battery_pane_g

0xcb2f,	// (0x00068807) popup_blid_sat_info2_window_t11

0xb2ac,	// (0x00066f84) aid_size_touch_mv_arrow_left_ParamLimits

0xb2d5,	// (0x00066fad) aid_size_touch_mv_arrow_right_ParamLimits

0xb333,	// (0x0006700b) navi_pane_g1_ParamLimits

0xb33f,	// (0x00067017) navi_pane_g2_ParamLimits

0xb36d,	// (0x00067045) navi_pane_g3_ParamLimits

0x02de,	// (0x0005bfb6) navi_pane_g_ParamLimits

0x377e,	// (0x0005f456) navi_pane_mv_t1_ParamLimits

0x5a16,	// (0x000616ee) grid_imed_effect_pane_ParamLimits

0x213d,	// (0x0005de15) aid_placing_vt_slider_lsc

0xaa86,	// (0x0006675e) aid_placing_vt_slider_prt

0xa4ce,	// (0x000661a6) bg_tb_trans_pane_cp01_ParamLimits

0xcdfb,	// (0x00068ad3) popup_image_details_window_g1_ParamLimits

0xce0e,	// (0x00068ae6) popup_image_details_window_g2_ParamLimits

0xce23,	// (0x00068afb) popup_image_details_window_g3_ParamLimits

0xce23,	// (0x00068afb) popup_image_details_window_g3

0x0611,	// (0x0005c2e9) popup_image_details_window_g_ParamLimits

0xce37,	// (0x00068b0f) popup_image_details_window_t1_ParamLimits

0xce49,	// (0x00068b21) popup_image_details_window_t2_ParamLimits

0xce62,	// (0x00068b3a) popup_image_details_window_t3_ParamLimits

0xce76,	// (0x00068b4e) popup_image_details_window_t4_ParamLimits

0xce91,	// (0x00068b69) popup_image_details_window_t5_ParamLimits

0x0618,	// (0x0005c2f0) popup_image_details_window_t_ParamLimits

0x74d2,	// (0x000631aa) cl_header_name_pane_ParamLimits

0x74d2,	// (0x000631aa) cl_header_name_pane

0x787a,	// (0x00063552) cl_header_name_pane_t1_ParamLimits

0x787a,	// (0x00063552) cl_header_name_pane_t1

0x7891,	// (0x00063569) cl_header_name_pane_t2_ParamLimits

0x7891,	// (0x00063569) cl_header_name_pane_t2

0x78bb,	// (0x00063593) cl_header_name_pane_t3_ParamLimits

0x78bb,	// (0x00063593) cl_header_name_pane_t3

0x0002,

0xf8fe,	// (0x0006b5d6) cl_header_name_pane_t_ParamLimits

0xf8fe,	// (0x0006b5d6) cl_header_name_pane_t

0xb3fc,	// (0x000670d4) navi_pane_mv_g2_ParamLimits

0xd6c1,	// (0x00069399) field_vitu2_entry_pane_g1_ParamLimits

0xd6cd,	// (0x000693a5) field_vitu2_entry_pane_g2_ParamLimits

0xd6d9,	// (0x000693b1) field_vitu2_entry_pane_g3_ParamLimits

0xd6d9,	// (0x000693b1) field_vitu2_entry_pane_g3

0x0814,	// (0x0005c4ec) field_vitu2_entry_pane_g_ParamLimits

0x67b1,	// (0x00062489) cell_vitu2_itu_pane_g1_ParamLimits

0x67c1,	// (0x00062499) cell_vitu2_itu_pane_g2_ParamLimits

0x67c1,	// (0x00062499) cell_vitu2_itu_pane_g2

0x0001,

0xf75f,	// (0x0006b437) cell_vitu2_itu_pane_g_ParamLimits

0xf75f,	// (0x0006b437) cell_vitu2_itu_pane_g

0x44bf,	// (0x00060197) bg_vkb2_func_pane_cp05_ParamLimits

0x44bf,	// (0x00060197) bg_vkb2_func_pane_cp05

0x44bf,	// (0x00060197) bg_vkb2_func_pane_cp03

0x44bf,	// (0x00060197) bg_vkb2_func_pane_cp04

0x44bf,	// (0x00060197) bg_vkb2_func_pane_cp10_ParamLimits

0x44bf,	// (0x00060197) bg_vkb2_func_pane_cp10

0x7474,	// (0x0006314c) bg_vkb2_func_pane_cp08

0x745a,	// (0x00063132) bg_vkb2_func_pane_cp06

0x7468,	// (0x00063140) bg_vkb2_func_pane_cp07

0xdbf7,	// (0x000698cf) bg_vkb2_func_pane_cp11_ParamLimits

0xdbf7,	// (0x000698cf) bg_vkb2_func_pane_cp11

0xdc0c,	// (0x000698e4) bg_vkb2_func_pane_cp12_ParamLimits

0xdc0c,	// (0x000698e4) bg_vkb2_func_pane_cp12

0x9c4f,	// (0x00065927) bg_vkb2_func_pane_cp09

0xd6f9,	// (0x000693d1) bg_vkb2_func_pane_g1

0xac48,	// (0x00066920) bg_vkb2_func_pane_g2

0xd701,	// (0x000693d9) bg_vkb2_func_pane_g3

0xd709,	// (0x000693e1) bg_vkb2_func_pane_g4

0xd91d,	// (0x000695f5) bg_vkb2_func_pane_g5

0xd721,	// (0x000693f9) bg_vkb2_func_pane_g6

0xd729,	// (0x00069401) bg_vkb2_func_pane_g7

0xd719,	// (0x000693f1) bg_vkb2_func_pane_g8

0xac28,	// (0x00066900) bg_vkb2_func_pane_g9

0x0008,

0xf905,	// (0x0006b5dd) bg_vkb2_func_pane_g

0x77c9,	// (0x000634a1) blid2_tripm_pane_g6_ParamLimits

0x77c9,	// (0x000634a1) blid2_tripm_pane_g6

0xd563,	// (0x0006923b) mp4_progress_pane_g1

0x7823,	// (0x000634fb) blid2_tripm_values_pane_ParamLimits

0x7823,	// (0x000634fb) blid2_tripm_values_pane

0x78e0,	// (0x000635b8) blid2_tripm_values_pane_t1

0x78ee,	// (0x000635c6) blid2_tripm_values_pane_t2

0x78fc,	// (0x000635d4) blid2_tripm_values_pane_t3

0x790a,	// (0x000635e2) blid2_tripm_values_pane_t4

0x7918,	// (0x000635f0) blid2_tripm_values_pane_t5

0x7926,	// (0x000635fe) blid2_tripm_values_pane_t6

0x7934,	// (0x0006360c) blid2_tripm_values_pane_t7

0x7942,	// (0x0006361a) blid2_tripm_values_pane_t8

0x7950,	// (0x00063628) blid2_tripm_values_pane_t9

0x0008,

0xf918,	// (0x0006b5f0) blid2_tripm_values_pane_t

0x217d,	// (0x0005de55) call_video_pane_t1_ParamLimits

0x219e,	// (0x0005de76) call_video_pane_t2_ParamLimits

0xf26e,	// (0x0006af46) call_video_pane_t_ParamLimits

0x3cae,	// (0x0005f986) msg_header_pane_g1_ParamLimits

0xb5de,	// (0x000672b6) msg_header_pane_g2_ParamLimits

0xb5de,	// (0x000672b6) msg_header_pane_g2

0x0001,

0xf462,	// (0x0006b13a) msg_header_pane_g_ParamLimits

0xf462,	// (0x0006b13a) msg_header_pane_g

0xa831,	// (0x00066509) main_clock2_pane_ParamLimits

0x57af,	// (0x00061487) grid_clock2_toolbar_pane_ParamLimits

0x57af,	// (0x00061487) grid_clock2_toolbar_pane

0x57af,	// (0x00061487) listscroll_clock2_pane_ParamLimits

0x57af,	// (0x00061487) listscroll_clock2_pane

0x5853,	// (0x0006152b) main_clock2_pane_t3_ParamLimits

0x5853,	// (0x0006152b) main_clock2_pane_t3

0x5865,	// (0x0006153d) main_clock2_pane_t4_ParamLimits

0x5865,	// (0x0006153d) main_clock2_pane_t4

0xdd12,	// (0x000699ea) cell_clock2_toolbar_pane

0xdd1a,	// (0x000699f2) cell_clock2_toolbar_pane_cp01

0xdd1a,	// (0x000699f2) cell_clock2_toolbar_pane_cp02

0xdd22,	// (0x000699fa) cell_clock2_toolbar_pane_cp03

0xdd2a,	// (0x00069a02) list_clock2_pane

0xb222,	// (0x00066efa) scroll_pane_cp10

0xdd32,	// (0x00069a0a) list_single_clock2_pane_ParamLimits

0xdd32,	// (0x00069a0a) list_single_clock2_pane

0xb463,	// (0x0006713b) list_highlight_pane_cp08

0xdd4d,	// (0x00069a25) list_single_clock2_pane_t1

0xdd5b,	// (0x00069a33) list_single_clock2_pane_t2

0x0001,

0xf92b,	// (0x0006b603) list_single_clock2_pane_t

0x9c4f,	// (0x00065927) bg_button_pane_cp10

0xdd69,	// (0x00069a41) cell_clock2_toolbar_pane_g1

0x3d15,	// (0x0005f9ed) aid_main_viewer_pane_g1_ParamLimits

0x3d15,	// (0x0005f9ed) aid_main_viewer_pane_g1

0x3d21,	// (0x0005f9f9) aid_main_viewer_pane_g2_ParamLimits

0x3d21,	// (0x0005f9f9) aid_main_viewer_pane_g2

0x3d2d,	// (0x0005fa05) aid_main_viewer_pane_g3_ParamLimits

0x3d2d,	// (0x0005fa05) aid_main_viewer_pane_g3

0x3d3e,	// (0x0005fa16) aid_main_viewer_pane_g4_ParamLimits

0x3d3e,	// (0x0005fa16) aid_main_viewer_pane_g4

0x0003,

0xf473,	// (0x0006b14b) aid_main_viewer_pane_g_ParamLimits

0xf473,	// (0x0006b14b) aid_main_viewer_pane_g

0x44b2,	// (0x0006018a) main_calc_pane_ParamLimits

0x44cd,	// (0x000601a5) main_dialer2_pane_ParamLimits

0x11a8,	// (0x0005ce80) main_cam6_pane

0x11a8,	// (0x0005ce80) main_vid6_pane

0x57bb,	// (0x00061493) listscroll_gen_pane_cp06_ParamLimits

0x57bb,	// (0x00061493) listscroll_gen_pane_cp06

0x5877,	// (0x0006154f) main_clock2_pane_t5_ParamLimits

0x5877,	// (0x0006154f) main_clock2_pane_t5

0x58c0,	// (0x00061598) aid_call2_pane_cp10_ParamLimits

0x58d2,	// (0x000615aa) aid_call_pane_cp10_ParamLimits

0xb2a0,	// (0x00066f78) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb2a0,	// (0x00066f78) popup_clock_analogue_window_cp10_g2_ParamLimits

0x58e4,	// (0x000615bc) popup_clock_analogue_window_cp10_g3_ParamLimits

0x58e4,	// (0x000615bc) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb2a0,	// (0x00066f78) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf66f,	// (0x0006b347) popup_clock_analogue_window_cp10_g_ParamLimits

0x58f6,	// (0x000615ce) popup_clock_analogue_window_cp10_t1_ParamLimits

0x60bd,	// (0x00061d95) cell_dialer2_keypad_pane_g2_ParamLimits

0x60bd,	// (0x00061d95) cell_dialer2_keypad_pane_g2

0x0001,

0xf6f9,	// (0x0006b3d1) cell_dialer2_keypad_pane_g_ParamLimits

0xf6f9,	// (0x0006b3d1) cell_dialer2_keypad_pane_g

0x60d9,	// (0x00061db1) cell_dialer2_keypad_pane_t1

0x6af1,	// (0x000627c9) main_cset_text2_pane_ParamLimits

0x6af1,	// (0x000627c9) main_cset_text2_pane

0xdb5f,	// (0x00069837) area_vitu2_query_pane_g1_ParamLimits

0x73f9,	// (0x000630d1) area_vitu2_query_pane_g2_ParamLimits

0xf878,	// (0x0006b550) area_vitu2_query_pane_g_ParamLimits

0xa188,	// (0x00065e60) area_vitu2_query_pane_t7_ParamLimits

0xa188,	// (0x00065e60) area_vitu2_query_pane_t7

0x745a,	// (0x00063132) bg_button_pane_cp018_ParamLimits

0x7468,	// (0x00063140) bg_button_pane_cp021_ParamLimits

0x7474,	// (0x0006314c) bg_button_pane_cp022_ParamLimits

0x7474,	// (0x0006314c) bg_vkb2_func_pane_cp08_ParamLimits

0x745a,	// (0x00063132) bg_vkb2_func_pane_cp06_ParamLimits

0x7468,	// (0x00063140) bg_vkb2_func_pane_cp07_ParamLimits

0x7485,	// (0x0006315d) input_focus_pane_cp09_ParamLimits

0x795e,	// (0x00063636) cam6_autofocus_pane_ParamLimits

0x795e,	// (0x00063636) cam6_autofocus_pane

0x7980,	// (0x00063658) cam6_image_uncrop_pane_ParamLimits

0x7980,	// (0x00063658) cam6_image_uncrop_pane

0x79ad,	// (0x00063685) cam6_indi_pane_ParamLimits

0x79ad,	// (0x00063685) cam6_indi_pane

0x79c7,	// (0x0006369f) cam6_mode_pane_ParamLimits

0x79c7,	// (0x0006369f) cam6_mode_pane

0x79db,	// (0x000636b3) cam6_timer_pane_ParamLimits

0x79db,	// (0x000636b3) cam6_timer_pane

0x79e7,	// (0x000636bf) cam6_zoom_pane_ParamLimits

0x79e7,	// (0x000636bf) cam6_zoom_pane

0x79ff,	// (0x000636d7) cam6_mode_pane_g1_ParamLimits

0x79ff,	// (0x000636d7) cam6_mode_pane_g1

0x7a0b,	// (0x000636e3) cam6_mode_pane_g2_ParamLimits

0x7a0b,	// (0x000636e3) cam6_mode_pane_g2

0x7a17,	// (0x000636ef) cam6_mode_pane_g3_ParamLimits

0x7a17,	// (0x000636ef) cam6_mode_pane_g3

0x7a23,	// (0x000636fb) cam6_mode_pane_g4_ParamLimits

0x7a23,	// (0x000636fb) cam6_mode_pane_g4

0x0003,

0xf930,	// (0x0006b608) cam6_mode_pane_g_ParamLimits

0xf930,	// (0x0006b608) cam6_mode_pane_g

0xdd3f,	// (0x00069a17) bg_tb_trans_pane_cp08_ParamLimits

0xdd3f,	// (0x00069a17) bg_tb_trans_pane_cp08

0xdd71,	// (0x00069a49) cam6_battery_pane_ParamLimits

0xdd71,	// (0x00069a49) cam6_battery_pane

0xdd87,	// (0x00069a5f) cam6_indi_pane_g1_ParamLimits

0xdd87,	// (0x00069a5f) cam6_indi_pane_g1

0xdd99,	// (0x00069a71) cam6_indi_pane_g2_ParamLimits

0xdd99,	// (0x00069a71) cam6_indi_pane_g2

0xddab,	// (0x00069a83) cam6_indi_pane_g3_ParamLimits

0xddab,	// (0x00069a83) cam6_indi_pane_g3

0x0002,

0x0a59,	// (0x0005c731) cam6_indi_pane_g_ParamLimits

0x0a59,	// (0x0005c731) cam6_indi_pane_g

0xddbd,	// (0x00069a95) cam6_indi_pane_t1_ParamLimits

0xddbd,	// (0x00069a95) cam6_indi_pane_t1

0x65ba,	// (0x00062292) cam6_autofocus_pane_g1

0x65b2,	// (0x0006228a) cam6_autofocus_pane_g2

0x65ca,	// (0x000622a2) cam6_autofocus_pane_g3

0x65c2,	// (0x0006229a) cam6_autofocus_pane_g4

0x0003,

0xf939,	// (0x0006b611) cam6_autofocus_pane_g

0xdde3,	// (0x00069abb) cam6_timer_pane_g1

0xddeb,	// (0x00069ac3) cam6_timer_pane_t1

0xddf9,	// (0x00069ad1) cam6_zoom_cont_pane

0xde01,	// (0x00069ad9) cam6_zoom_pane_g1

0xde09,	// (0x00069ae1) cam6_zoom_pane_g2

0x7a2f,	// (0x00063707) cam6_zoom_pane_g3

0x0002,

0xf942,	// (0x0006b61a) cam6_zoom_pane_g

0xcc63,	// (0x0006893b) cam6_battery_pane_g1

0xcc63,	// (0x0006893b) cam6_battery_pane_g2

0x0001,

0x05d5,	// (0x0005c2ad) cam6_battery_pane_g

0xde11,	// (0x00069ae9) cam6_zoom_cont_pane_g1

0xde1a,	// (0x00069af2) cam6_zoom_cont_pane_g2

0xde23,	// (0x00069afb) cam6_zoom_cont_pane_g3

0x0002,

0x0a70,	// (0x0005c748) cam6_zoom_cont_pane_g

0x7a4c,	// (0x00063724) cam6_mode_pane_cp_ParamLimits

0x7a4c,	// (0x00063724) cam6_mode_pane_cp

0x7a60,	// (0x00063738) cam6_zoom_pane_cp_ParamLimits

0x7a60,	// (0x00063738) cam6_zoom_pane_cp

0x7a78,	// (0x00063750) vid6_image_uncrop_cif_pane_ParamLimits

0x7a78,	// (0x00063750) vid6_image_uncrop_cif_pane

0x7aa4,	// (0x0006377c) vid6_image_uncrop_nhd_pane_ParamLimits

0x7aa4,	// (0x0006377c) vid6_image_uncrop_nhd_pane

0x7ac1,	// (0x00063799) vid6_image_uncrop_vga_pane_ParamLimits

0x7ac1,	// (0x00063799) vid6_image_uncrop_vga_pane

0x7ae0,	// (0x000637b8) vid6_image_uncrop_wvga_pane_ParamLimits

0x7ae0,	// (0x000637b8) vid6_image_uncrop_wvga_pane

0x7afd,	// (0x000637d5) vid6_indi_pane_ParamLimits

0x7afd,	// (0x000637d5) vid6_indi_pane

0xdd3f,	// (0x00069a17) bg_tb_trans_pane_cp09_ParamLimits

0xdd3f,	// (0x00069a17) bg_tb_trans_pane_cp09

0xde3b,	// (0x00069b13) cam6_battery_pane_cp_ParamLimits

0xde3b,	// (0x00069b13) cam6_battery_pane_cp

0xde47,	// (0x00069b1f) vid6_indi_pane_g1_ParamLimits

0xde47,	// (0x00069b1f) vid6_indi_pane_g1

0xde59,	// (0x00069b31) vid6_indi_pane_g2_ParamLimits

0xde59,	// (0x00069b31) vid6_indi_pane_g2

0xde6b,	// (0x00069b43) vid6_indi_pane_g3_ParamLimits

0xde6b,	// (0x00069b43) vid6_indi_pane_g3

0xde80,	// (0x00069b58) vid6_indi_pane_g4_ParamLimits

0xde80,	// (0x00069b58) vid6_indi_pane_g4

0xde95,	// (0x00069b6d) vid6_indi_pane_g5_ParamLimits

0xde95,	// (0x00069b6d) vid6_indi_pane_g5

0x0004,

0x0a77,	// (0x0005c74f) vid6_indi_pane_g_ParamLimits

0x0a77,	// (0x0005c74f) vid6_indi_pane_g

0xdeaf,	// (0x00069b87) vid6_indi_pane_t1_ParamLimits

0xdeaf,	// (0x00069b87) vid6_indi_pane_t1

0xdec5,	// (0x00069b9d) vid6_indi_pane_t2_ParamLimits

0xdec5,	// (0x00069b9d) vid6_indi_pane_t2

0xdeed,	// (0x00069bc5) vid6_indi_pane_t3_ParamLimits

0xdeed,	// (0x00069bc5) vid6_indi_pane_t3

0xdf15,	// (0x00069bed) vid6_indi_pane_t4_ParamLimits

0xdf15,	// (0x00069bed) vid6_indi_pane_t4

0x0003,

0x0a82,	// (0x0005c75a) vid6_indi_pane_t_ParamLimits

0x0a82,	// (0x0005c75a) vid6_indi_pane_t

0xdf39,	// (0x00069c11) wait_bar_pane_cp08

0x7b22,	// (0x000637fa) main_cset_text2_pane_t1_ParamLimits

0x7b22,	// (0x000637fa) main_cset_text2_pane_t1

0x7a37,	// (0x0006370f) listscroll_gen_pane_cp06_t1_ParamLimits

0x7a37,	// (0x0006370f) listscroll_gen_pane_cp06_t1

0x11a8,	// (0x0005ce80) main_cam6_set_pane

0x644c,	// (0x00062124) bg_tb_trans_pane_cp06_ParamLimits

0x6462,	// (0x0006213a) cam4_indicators_pane_g1_ParamLimits

0x6473,	// (0x0006214b) cam4_indicators_pane_g2_ParamLimits

0xf736,	// (0x0006b40e) cam4_indicators_pane_g_ParamLimits

0x6491,	// (0x00062169) cam4_indicators_pane_t1_ParamLimits

0x44bf,	// (0x00060197) bg_tb_trans_pane_cp07_ParamLimits

0x6544,	// (0x0006221c) vid4_indicators_pane_g1_ParamLimits

0x6558,	// (0x00062230) vid4_indicators_pane_g2_ParamLimits

0x656c,	// (0x00062244) vid4_indicators_pane_g3_ParamLimits

0x657d,	// (0x00062255) vid4_indicators_pane_g4_ParamLimits

0xf748,	// (0x0006b420) vid4_indicators_pane_g_ParamLimits

0x659b,	// (0x00062273) vid4_indicators_pane_t1_ParamLimits

0x75b6,	// (0x0006328e) vid4_progress_pane_g1_ParamLimits

0x75c6,	// (0x0006329e) vid4_progress_pane_g2_ParamLimits

0x75d6,	// (0x000632ae) vid4_progress_pane_g3_ParamLimits

0x75e8,	// (0x000632c0) vid4_progress_pane_g4_ParamLimits

0xf8b0,	// (0x0006b588) vid4_progress_pane_g_ParamLimits

0x7600,	// (0x000632d8) vid4_progress_pane_t1_ParamLimits

0x7616,	// (0x000632ee) vid4_progress_pane_t2_ParamLimits

0x762b,	// (0x00063303) vid4_progress_pane_t3_ParamLimits

0xf8bb,	// (0x0006b593) vid4_progress_pane_t_ParamLimits

0x7640,	// (0x00063318) wait_bar_pane_cp07_ParamLimits

0x7b55,	// (0x0006382d) main_cam6_set_pane_g2_ParamLimits

0x7b55,	// (0x0006382d) main_cam6_set_pane_g2

0x7b61,	// (0x00063839) main_cset6_listscroll_pane_ParamLimits

0x7b61,	// (0x00063839) main_cset6_listscroll_pane

0x7b8c,	// (0x00063864) main_cset6_slider_pane_ParamLimits

0x7b8c,	// (0x00063864) main_cset6_slider_pane

0x7b98,	// (0x00063870) main_cset6_text2_pane_ParamLimits

0x7b98,	// (0x00063870) main_cset6_text2_pane

0xdf48,	// (0x00069c20) main_cset6_text_pane

0xdf50,	// (0x00069c28) main_cset_list_pane_copy1_ParamLimits

0xdf50,	// (0x00069c28) main_cset_list_pane_copy1

0xdf60,	// (0x00069c38) scroll_pane_cp028_copy1

0x7bab,	// (0x00063883) cset_list_set_pane_copy1

0x7bbe,	// (0x00063896) aid_position_infowindow_above_copy1

0x7bc6,	// (0x0006389e) aid_position_infowindow_below_copy1

0x7bce,	// (0x000638a6) cset_list_set_pane_g1_copy1

0xa0ec,	// (0x00065dc4) cset_list_set_pane_g3_copy1_ParamLimits

0xa0ec,	// (0x00065dc4) cset_list_set_pane_g3_copy1

0xa0fb,	// (0x00065dd3) cset_list_set_pane_t1_copy1_ParamLimits

0xa0fb,	// (0x00065dd3) cset_list_set_pane_t1_copy1

0xa4ce,	// (0x000661a6) list_highlight_pane_cp021_copy1_ParamLimits

0xa4ce,	// (0x000661a6) list_highlight_pane_cp021_copy1

0xdf69,	// (0x00069c41) cset6_slider_pane_ParamLimits

0xdf69,	// (0x00069c41) cset6_slider_pane

0xdf95,	// (0x00069c6d) main_cset6_slider_pane_g1_ParamLimits

0xdf95,	// (0x00069c6d) main_cset6_slider_pane_g1

0x7bd6,	// (0x000638ae) main_cset6_slider_pane_g2_ParamLimits

0x7bd6,	// (0x000638ae) main_cset6_slider_pane_g2

0xdfbd,	// (0x00069c95) main_cset6_slider_pane_g3_ParamLimits

0xdfbd,	// (0x00069c95) main_cset6_slider_pane_g3

0x7bfe,	// (0x000638d6) main_cset6_slider_pane_g4_ParamLimits

0x7bfe,	// (0x000638d6) main_cset6_slider_pane_g4

0x7c0a,	// (0x000638e2) main_cset6_slider_pane_g5_ParamLimits

0x7c0a,	// (0x000638e2) main_cset6_slider_pane_g5

0xd828,	// (0x00069500) main_cset6_slider_pane_g7_ParamLimits

0xd828,	// (0x00069500) main_cset6_slider_pane_g7

0xd834,	// (0x0006950c) main_cset6_slider_pane_g8_ParamLimits

0xd834,	// (0x0006950c) main_cset6_slider_pane_g8

0x7c18,	// (0x000638f0) main_cset6_slider_pane_g9_ParamLimits

0x7c18,	// (0x000638f0) main_cset6_slider_pane_g9

0x7c24,	// (0x000638fc) main_cset6_slider_pane_g10_ParamLimits

0x7c24,	// (0x000638fc) main_cset6_slider_pane_g10

0x7c30,	// (0x00063908) main_cset6_slider_pane_g11_ParamLimits

0x7c30,	// (0x00063908) main_cset6_slider_pane_g11

0x7c3c,	// (0x00063914) main_cset6_slider_pane_g12_ParamLimits

0x7c3c,	// (0x00063914) main_cset6_slider_pane_g12

0x7c48,	// (0x00063920) main_cset6_slider_pane_g13_ParamLimits

0x7c48,	// (0x00063920) main_cset6_slider_pane_g13

0x7c54,	// (0x0006392c) main_cset6_slider_pane_g14_ParamLimits

0x7c54,	// (0x0006392c) main_cset6_slider_pane_g14

0x7c60,	// (0x00063938) main_cset6_slider_pane_g15_ParamLimits

0x7c60,	// (0x00063938) main_cset6_slider_pane_g15

0x7c78,	// (0x00063950) main_cset6_slider_pane_g16_ParamLimits

0x7c78,	// (0x00063950) main_cset6_slider_pane_g16

0x7c86,	// (0x0006395e) main_cset6_slider_pane_g17_ParamLimits

0x7c86,	// (0x0006395e) main_cset6_slider_pane_g17

0x0011,

0xf949,	// (0x0006b621) main_cset6_slider_pane_g_ParamLimits

0xf949,	// (0x0006b621) main_cset6_slider_pane_g

0xdfc9,	// (0x00069ca1) main_cset6_slider_pane_t1_ParamLimits

0xdfc9,	// (0x00069ca1) main_cset6_slider_pane_t1

0x7cac,	// (0x00063984) main_cset6_slider_pane_t2_ParamLimits

0x7cac,	// (0x00063984) main_cset6_slider_pane_t2

0x7cd7,	// (0x000639af) main_cset6_slider_pane_t3_ParamLimits

0x7cd7,	// (0x000639af) main_cset6_slider_pane_t3

0x7d02,	// (0x000639da) main_cset6_slider_pane_t4_ParamLimits

0x7d02,	// (0x000639da) main_cset6_slider_pane_t4

0x7d2d,	// (0x00063a05) main_cset6_slider_pane_t5_ParamLimits

0x7d2d,	// (0x00063a05) main_cset6_slider_pane_t5

0xe00a,	// (0x00069ce2) main_cset6_slider_pane_t7_ParamLimits

0xe00a,	// (0x00069ce2) main_cset6_slider_pane_t7

0x7d5a,	// (0x00063a32) main_cset6_slider_pane_t8_ParamLimits

0x7d5a,	// (0x00063a32) main_cset6_slider_pane_t8

0x7d7e,	// (0x00063a56) main_cset6_slider_pane_t9_ParamLimits

0x7d7e,	// (0x00063a56) main_cset6_slider_pane_t9

0x7da2,	// (0x00063a7a) main_cset6_slider_pane_t10_ParamLimits

0x7da2,	// (0x00063a7a) main_cset6_slider_pane_t10

0x7dc6,	// (0x00063a9e) main_cset6_slider_pane_t11_ParamLimits

0x7dc6,	// (0x00063a9e) main_cset6_slider_pane_t11

0xe040,	// (0x00069d18) main_cset6_slider_pane_t14_ParamLimits

0xe040,	// (0x00069d18) main_cset6_slider_pane_t14

0xe079,	// (0x00069d51) main_cset6_slider_pane_t15_ParamLimits

0xe079,	// (0x00069d51) main_cset6_slider_pane_t15

0x000b,

0xf96e,	// (0x0006b646) main_cset6_slider_pane_t_ParamLimits

0xf96e,	// (0x0006b646) main_cset6_slider_pane_t

0xda0e,	// (0x000696e6) cset_slider_pane_g1_copy1

0xda3b,	// (0x00069713) cset_slider_pane_g2_copy1

0xda44,	// (0x0006971c) cset_slider_pane_g3_copy1

0x9c4f,	// (0x00065927) bg_popup_sub_pane_cp011_copy1

0xe0b2,	// (0x00069d8a) main_cset_text_pane_g1_copy1

0xd96c,	// (0x00069644) main_cset_text_pane_t1_copy1

0xd97a,	// (0x00069652) main_cset_text_pane_t2_copy1

0xd988,	// (0x00069660) main_cset_text_pane_t3_copy1

0xd996,	// (0x0006966e) main_cset_text_pane_t4_copy1

0xd9a4,	// (0x0006967c) main_cset_text_pane_t5_copy1

0xe0ba,	// (0x00069d92) main_cset_text_pane_t6_copy1

0xd9c0,	// (0x00069698) main_cset_text_pane_t7_copy1

0x7ebb,	// (0x00063b93) main_cset_text2_pane_t1_copy1

0x44bf,	// (0x00060197) main_ncimui_pane

0x451e,	// (0x000601f6) popup_query_ncimui_window_ParamLimits

0x451e,	// (0x000601f6) popup_query_ncimui_window

0xa0b7,	// (0x00065d8f) field_cale_ev2_pane_g4_ParamLimits

0xa0b7,	// (0x00065d8f) field_cale_ev2_pane_g4

0x5ddd,	// (0x00061ab5) cell_video_dialer_keypad_pane_g2_ParamLimits

0x5ddd,	// (0x00061ab5) cell_video_dialer_keypad_pane_g2

0x0001,

0xf6d9,	// (0x0006b3b1) cell_video_dialer_keypad_pane_g_ParamLimits

0xf6d9,	// (0x0006b3b1) cell_video_dialer_keypad_pane_g

0x5df5,	// (0x00061acd) cell_video_dialer_keypad_pane_t1

0x9c4f,	// (0x00065927) bg_popup_window_pane_cp012

0xb0e1,	// (0x00066db9) heading_pane_cp06

0xe0e6,	// (0x00069dbe) ncim_query_content_pane

0x9c4f,	// (0x00065927) bg_popup_heading_pane_cp01

0xe0ee,	// (0x00069dc6) ncim_heading_pane_t1

0xe0fc,	// (0x00069dd4) ncim_indicator_popup_pane

0xe10e,	// (0x00069de6) ncim_query_button_pane

0xe122,	// (0x00069dfa) ncim_query_content_pane_t1

0xe134,	// (0x00069e0c) ncim_query_content_pane_t2

0x0005,

0xf9b2,	// (0x0006b68a) ncim_query_content_pane_t

0xe16e,	// (0x00069e46) ncim_query_list_pane

0xe180,	// (0x00069e58) ncim_query_popup_pane

0xe0fc,	// (0x00069dd4) ncim_indicator_popup_pane_ParamLimits

0x800e,	// (0x00063ce6) ncim_query_content_pane_g1_ParamLimits

0x800e,	// (0x00063ce6) ncim_query_content_pane_g1

0xe122,	// (0x00069dfa) ncim_query_content_pane_t1_ParamLimits

0xe134,	// (0x00069e0c) ncim_query_content_pane_t2_ParamLimits

0x801a,	// (0x00063cf2) ncim_query_content_pane_t3_ParamLimits

0x801a,	// (0x00063cf2) ncim_query_content_pane_t3

0x8037,	// (0x00063d0f) ncim_query_content_pane_t4_ParamLimits

0x8037,	// (0x00063d0f) ncim_query_content_pane_t4

0x8054,	// (0x00063d2c) ncim_query_content_pane_t5_ParamLimits

0x8054,	// (0x00063d2c) ncim_query_content_pane_t5

0xe146,	// (0x00069e1e) ncim_query_content_pane_t6_ParamLimits

0xe146,	// (0x00069e1e) ncim_query_content_pane_t6

0xf9b2,	// (0x0006b68a) ncim_query_content_pane_t_ParamLimits

0xe16e,	// (0x00069e46) ncim_query_list_pane_ParamLimits

0xe180,	// (0x00069e58) ncim_query_popup_pane_ParamLimits

0xe194,	// (0x00069e6c) wait_bar_pane_cp04

0x9c4f,	// (0x00065927) input_focus_pane_cp011

0xe19c,	// (0x00069e74) ncim_query_popup_pane_t1

0xe1aa,	// (0x00069e82) ncim_list_query_list_pane_ParamLimits

0xe1aa,	// (0x00069e82) ncim_list_query_list_pane

0x9c4f,	// (0x00065927) bg_button_pane_cp027

0xe1b7,	// (0x00069e8f) ncim_query_button_pane_g1

0x9c4f,	// (0x00065927) list_highlight_pane_cp012

0xe1c1,	// (0x00069e99) ncim_list_query_list_pane_g1

0xe1c9,	// (0x00069ea1) ncim_list_query_list_pane_t1

0x6482,	// (0x0006215a) cam4_indicators_pane_g3_ParamLimits

0x6482,	// (0x0006215a) cam4_indicators_pane_g3

0x6589,	// (0x00062261) vid4_indicators_pane_g5_ParamLimits

0x6589,	// (0x00062261) vid4_indicators_pane_g5

0x75f4,	// (0x000632cc) vid4_progress_pane_g5_ParamLimits

0x75f4,	// (0x000632cc) vid4_progress_pane_g5

0x7efa,	// (0x00063bd2) main_ncimui_pane_g1

0x7f62,	// (0x00063c3a) ncimui_group_query_pane_ParamLimits

0x7f62,	// (0x00063c3a) ncimui_group_query_pane

0x7faa,	// (0x00063c82) ncimui_list_pane_ParamLimits

0x7faa,	// (0x00063c82) ncimui_list_pane

0x7fd1,	// (0x00063ca9) ncimui_text_pane_ParamLimits

0x7fd1,	// (0x00063ca9) ncimui_text_pane

0x8071,	// (0x00063d49) ncimui_text_pane_t1_ParamLimits

0x8071,	// (0x00063d49) ncimui_text_pane_t1

0xe1d7,	// (0x00069eaf) ncimui_list_single_graphic_pane_ParamLimits

0xe1d7,	// (0x00069eaf) ncimui_list_single_graphic_pane

0x8090,	// (0x00063d68) ncimui_query_pane_ParamLimits

0x8090,	// (0x00063d68) ncimui_query_pane

0x9c4f,	// (0x00065927) list_highlight_pane_cp013

0xe1e7,	// (0x00069ebf) ncim_list_query_list_pane_t1_copy1

0xe1c1,	// (0x00069e99) ncim_list_single_graphic_pane_g1

0xe1f5,	// (0x00069ecd) ncim_query_button_pane_cp01

0xe201,	// (0x00069ed9) ncim_query_entry_pane_ParamLimits

0xe201,	// (0x00069ed9) ncim_query_entry_pane

0xe214,	// (0x00069eec) ncimui_query_pane_g1

0xe220,	// (0x00069ef8) ncimui_query_pane_t1_ParamLimits

0xe220,	// (0x00069ef8) ncimui_query_pane_t1

0xa4ce,	// (0x000661a6) input_focus_pane_cp012

0xe239,	// (0x00069f11) ncim_query_entry_pane_t1

0xa831,	// (0x00066509) main_im_pane_ParamLimits

0x44bf,	// (0x00060197) main_mobtv_pane_ParamLimits

0x44bf,	// (0x00060197) main_mobtv_pane

0x7c94,	// (0x0006396c) main_cset6_slider_pane_g18_ParamLimits

0x7c94,	// (0x0006396c) main_cset6_slider_pane_g18

0x7ca0,	// (0x00063978) main_cset6_slider_pane_g19_ParamLimits

0x7ca0,	// (0x00063978) main_cset6_slider_pane_g19

0xd6d9,	// (0x000693b1) bg_main_mobtv_pane_ParamLimits

0xd6d9,	// (0x000693b1) bg_main_mobtv_pane

0x80a3,	// (0x00063d7b) main_mobtv_info_pane

0x80ae,	// (0x00063d86) main_mobtv_loading_pane_ParamLimits

0x80ae,	// (0x00063d86) main_mobtv_loading_pane

0xe24b,	// (0x00069f23) main_mobtv_pg_channel_list_pane

0xe255,	// (0x00069f2d) main_mobtv_pg_hdr_pane

0x80bb,	// (0x00063d93) main_mobtv_programe_curr_pane_ParamLimits

0x80bb,	// (0x00063d93) main_mobtv_programe_curr_pane

0x80c8,	// (0x00063da0) main_mobtv_programe_next_pane_ParamLimits

0x80c8,	// (0x00063da0) main_mobtv_programe_next_pane

0xe25e,	// (0x00069f36) popup_mobtv_noti_window

0xcc63,	// (0x0006893b) main_tv_pg_hdr_pane_g1

0xe266,	// (0x00069f3e) main_tv_pg_hdr_pane_g2

0xe26e,	// (0x00069f46) main_tv_pg_hdr_pane_g3

0xe276,	// (0x00069f4e) main_tv_pg_hdr_pane_g4

0xe27e,	// (0x00069f56) main_tv_pg_hdr_pane_g5

0xe288,	// (0x00069f60) main_tv_pg_hdr_pane_g6

0xe292,	// (0x00069f6a) main_tv_pg_hdr_pane_g7

0xe29c,	// (0x00069f74) main_tv_pg_hdr_pane_g8

0xe2a6,	// (0x00069f7e) main_tv_pg_hdr_pane_g9

0xe2b0,	// (0x00069f88) main_tv_pg_hdr_pane_g10

0xe2ba,	// (0x00069f92) main_tv_pg_hdr_pane_g11

0x000a,

0x0b01,	// (0x0005c7d9) main_tv_pg_hdr_pane_g

0xe2c4,	// (0x00069f9c) main_tv_pg_hdr_pane_t1

0xe2d2,	// (0x00069faa) main_tv_pg_hdr_pane_t2

0xe2e0,	// (0x00069fb8) main_tv_pg_hdr_pane_t3

0xe2f0,	// (0x00069fc8) main_tv_pg_hdr_pane_t4

0xe300,	// (0x00069fd8) main_tv_pg_hdr_pane_t5

0x0004,

0x0b18,	// (0x0005c7f0) main_tv_pg_hdr_pane_t

0xe310,	// (0x00069fe8) single_mobtv_pg_channel_pane_ParamLimits

0xe310,	// (0x00069fe8) single_mobtv_pg_channel_pane

0xe322,	// (0x00069ffa) single_mobtv_pg_channel_table_pane

0xe32b,	// (0x0006a003) single_mobtv_pg_channel_thumb_pane

0xe334,	// (0x0006a00c) single_tv_pg_channel_pane_g1

0xe33d,	// (0x0006a015) single_tv_pg_channel_pane_g2

0x0001,

0x0b23,	// (0x0005c7fb) single_tv_pg_channel_pane_g

0xcedb,	// (0x00068bb3) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xcedb,	// (0x00068bb3) bg_single_mobtv_pg_channel_thumb_pane

0xe346,	// (0x0006a01e) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe346,	// (0x0006a01e) single_mobtv_pg_channel_thumb_pane_g1

0xe354,	// (0x0006a02c) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe354,	// (0x0006a02c) single_mobtv_pg_channel_thumb_pane_g2

0xe360,	// (0x0006a038) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe360,	// (0x0006a038) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0x0b28,	// (0x0005c800) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0x0b28,	// (0x0005c800) single_mobtv_pg_channel_thumb_pane_g

0xe36c,	// (0x0006a044) single_mobtv_pg_channel_thumb_pane_t1

0xe37a,	// (0x0006a052) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0x0b2f,	// (0x0005c807) single_mobtv_pg_channel_thumb_pane_t

0xcc63,	// (0x0006893b) bg_single_mobtv_pg_channel_table_pane_g1

0xcc63,	// (0x0006893b) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0x05d5,	// (0x0005c2ad) bg_single_mobtv_pg_channel_table_pane_g

0xe388,	// (0x0006a060) single_mobtv_pg_channel_table_pane_t1

0xe396,	// (0x0006a06e) single_mobtv_pg_channel_table_pane_t2

0x0001,

0x0b34,	// (0x0005c80c) single_mobtv_pg_channel_table_pane_t

0x80dd,	// (0x00063db5) main_mobtv_info_pane_g1_ParamLimits

0x80dd,	// (0x00063db5) main_mobtv_info_pane_g1

0x80f9,	// (0x00063dd1) main_mobtv_info_pane_t1_ParamLimits

0x80f9,	// (0x00063dd1) main_mobtv_info_pane_t1

0x8171,	// (0x00063e49) main_mobtv_info_pane_t2_ParamLimits

0x8171,	// (0x00063e49) main_mobtv_info_pane_t2

0x0002,

0xf9c4,	// (0x0006b69c) main_mobtv_info_pane_t_ParamLimits

0xf9c4,	// (0x0006b69c) main_mobtv_info_pane_t

0x8200,	// (0x00063ed8) wait_bar_pane_cp05

0x8212,	// (0x00063eea) main_mobtv_loading_pane_g1_ParamLimits

0x8212,	// (0x00063eea) main_mobtv_loading_pane_g1

0x8220,	// (0x00063ef8) main_mobtv_loading_pane_g2_ParamLimits

0x8220,	// (0x00063ef8) main_mobtv_loading_pane_g2

0x822c,	// (0x00063f04) main_mobtv_loading_pane_g3_ParamLimits

0x822c,	// (0x00063f04) main_mobtv_loading_pane_g3

0x0002,

0xf9cb,	// (0x0006b6a3) main_mobtv_loading_pane_g_ParamLimits

0xf9cb,	// (0x0006b6a3) main_mobtv_loading_pane_g

0xe3a4,	// (0x0006a07c) main_mobtv_loading_pane_t1_ParamLimits

0xe3a4,	// (0x0006a07c) main_mobtv_loading_pane_t1

0xe3bc,	// (0x0006a094) main_mobtv_loading_pane_t2_ParamLimits

0xe3bc,	// (0x0006a094) main_mobtv_loading_pane_t2

0x0001,

0x0b4c,	// (0x0005c824) main_mobtv_loading_pane_t_ParamLimits

0x0b4c,	// (0x0005c824) main_mobtv_loading_pane_t

0x823a,	// (0x00063f12) wait_bar_pane_cp06_ParamLimits

0x823a,	// (0x00063f12) wait_bar_pane_cp06

0xe3e0,	// (0x0006a0b8) main_mobtv_programe_curr_pane_t1

0xe3ee,	// (0x0006a0c6) main_mobtv_programe_curr_pane_t2

0x0001,

0x0b51,	// (0x0005c829) main_mobtv_programe_curr_pane_t

0xe3fc,	// (0x0006a0d4) main_mobtv_programe_next_pane_t1

0xe40a,	// (0x0006a0e2) main_mobtv_programe_next_pane_t2

0xe418,	// (0x0006a0f0) main_mobtv_programe_next_pane_t3

0x0002,

0x0b56,	// (0x0005c82e) main_mobtv_programe_next_pane_t

0x9c4f,	// (0x00065927) bg_popup_mobtv_noti_window_pane

0xe426,	// (0x0006a0fe) popup_mobtv_noti_window_g1

0xe42e,	// (0x0006a106) popup_mobtv_noti_window_t1

0xe43c,	// (0x0006a114) popup_mobtv_noti_window_t2

0x0001,

0x0b5d,	// (0x0005c835) popup_mobtv_noti_window_t

0xcc63,	// (0x0006893b) bg_popup_mobtv_noti_window_pane_g1

0x11a8,	// (0x0005ce80) sc_clock_pane

0x11a8,	// (0x0005ce80) main_fs_bigclock_pane

0x7811,	// (0x000634e9) blid2_tripm_pane_t4_ParamLimits

0x7811,	// (0x000634e9) blid2_tripm_pane_t4

0x8246,	// (0x00063f1e) sc_clock_pane_g1_ParamLimits

0x8246,	// (0x00063f1e) sc_clock_pane_g1

0x8254,	// (0x00063f2c) sc_clock_pane_t1_ParamLimits

0x8254,	// (0x00063f2c) sc_clock_pane_t1

0x8267,	// (0x00063f3f) sc_clock_pane_t2_ParamLimits

0x8267,	// (0x00063f3f) sc_clock_pane_t2

0x8279,	// (0x00063f51) sc_clock_pane_t3_ParamLimits

0x8279,	// (0x00063f51) sc_clock_pane_t3

0x0004,

0xf9d2,	// (0x0006b6aa) sc_clock_pane_t_ParamLimits

0xf9d2,	// (0x0006b6aa) sc_clock_pane_t

0x9203,	// (0x00064edb) main_fs_bigclock_indicator_pane_ParamLimits

0x9203,	// (0x00064edb) main_fs_bigclock_indicator_pane

0x8302,	// (0x00063fda) main_fs_bigclock_pane_g1_ParamLimits

0x8302,	// (0x00063fda) main_fs_bigclock_pane_g1

0x920f,	// (0x00064ee7) main_fs_bigclock_pane_t1_ParamLimits

0x920f,	// (0x00064ee7) main_fs_bigclock_pane_t1

0x9221,	// (0x00064ef9) main_fs_bigclock_pane_t2_ParamLimits

0x9221,	// (0x00064ef9) main_fs_bigclock_pane_t2

0x9235,	// (0x00064f0d) main_fs_bigclock_pane_t3_ParamLimits

0x9235,	// (0x00064f0d) main_fs_bigclock_pane_t3

0x0002,

0xfb6c,	// (0x0006b844) main_fs_bigclock_pane_t_ParamLimits

0xfb6c,	// (0x0006b844) main_fs_bigclock_pane_t

0xec81,	// (0x0006a959) main_fs_bigclock_indicator_pane_g1

0xe116,	// (0x00069dee) ncim_query_content_pane_g2_ParamLimits

0xe116,	// (0x00069dee) ncim_query_content_pane_g2

0x0001,

0xf9ad,	// (0x0006b685) ncim_query_content_pane_g_ParamLimits

0xf9ad,	// (0x0006b685) ncim_query_content_pane_g

0x828d,	// (0x00063f65) sc_clock_pane_t4_ParamLimits

0x828d,	// (0x00063f65) sc_clock_pane_t4

0x44bf,	// (0x00060197) main_radioblah_pane

0xd64c,	// (0x00069324) cell_call4_button_pane_t1_copy1_ParamLimits

0xd64c,	// (0x00069324) cell_call4_button_pane_t1_copy1

0x7f14,	// (0x00063bec) main_ncimui_pane_t1_ParamLimits

0x7f14,	// (0x00063bec) main_ncimui_pane_t1

0x7f2e,	// (0x00063c06) main_ncimui_pane_t2_ParamLimits

0x7f2e,	// (0x00063c06) main_ncimui_pane_t2

0x0002,

0xf9a6,	// (0x0006b67e) main_ncimui_pane_t_ParamLimits

0xf9a6,	// (0x0006b67e) main_ncimui_pane_t

0xe580,	// (0x0006a258) main_radioblah_anim_pane_ParamLimits

0xe580,	// (0x0006a258) main_radioblah_anim_pane

0xe591,	// (0x0006a269) main_radioblah_info_pane_ParamLimits

0xe591,	// (0x0006a269) main_radioblah_info_pane

0xe5a5,	// (0x0006a27d) main_radioblah_pane_t1_ParamLimits

0xe5a5,	// (0x0006a27d) main_radioblah_pane_t1

0xe5c1,	// (0x0006a299) main_radioblah_pane_t2_ParamLimits

0xe5c1,	// (0x0006a299) main_radioblah_pane_t2

0x0003,

0x0b83,	// (0x0005c85b) main_radioblah_pane_t_ParamLimits

0x0b83,	// (0x0005c85b) main_radioblah_pane_t

0x8354,	// (0x0006402c) main_radioblah_rocker_ctrl_pane_ParamLimits

0x8354,	// (0x0006402c) main_radioblah_rocker_ctrl_pane

0xe609,	// (0x0006a2e1) main_radioblah_info_pane_t1_ParamLimits

0xe609,	// (0x0006a2e1) main_radioblah_info_pane_t1

0x8399,	// (0x00064071) main_radioblah_info_pane_t2_ParamLimits

0x8399,	// (0x00064071) main_radioblah_info_pane_t2

0x0003,

0xf9dd,	// (0x0006b6b5) main_radioblah_info_pane_t_ParamLimits

0xf9dd,	// (0x0006b6b5) main_radioblah_info_pane_t

0xcc63,	// (0x0006893b) main_radioblah_rocker_ctrl_pane_g1

0x8449,	// (0x00064121) main_radioblah_rocker_ctrl_pane_g2

0x8451,	// (0x00064129) main_radioblah_rocker_ctrl_pane_g3

0x8459,	// (0x00064131) main_radioblah_rocker_ctrl_pane_g4

0x8461,	// (0x00064139) main_radioblah_rocker_ctrl_pane_g5

0x8469,	// (0x00064141) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xf9e6,	// (0x0006b6be) main_radioblah_rocker_ctrl_pane_g

0x7ebb,	// (0x00063b93) main_cset_text2_pane_t1_copy1_ParamLimits

0x63a2,	// (0x0006207a) cam4_image_uncrop_qvga_pane

0x64f7,	// (0x000621cf) vid4_image_uncrop_qcif_pane

0x799f,	// (0x00063677) cam6_image_uncrop_qvga_pane_ParamLimits

0x799f,	// (0x00063677) cam6_image_uncrop_qvga_pane

0xde2b,	// (0x00069b03) vid6_image_uncrop_qcif_pane_ParamLimits

0xde2b,	// (0x00069b03) vid6_image_uncrop_qcif_pane

0x9c4f,	// (0x00065927) bg_popup_preview_window_pane_cp03

0xe0c8,	// (0x00069da0) list_cset_text2_pane

0xe0d0,	// (0x00069da8) main_cset6_text2_pane_g1

0xe0d8,	// (0x00069db0) main_cset6_text2_pane_t1

0x8471,	// (0x00064149) list_cset_text2_pane_t1_ParamLimits

0x8471,	// (0x00064149) list_cset_text2_pane_t1

0x44bf,	// (0x00060197) main_radioblah_pane_ParamLimits

0x81ec,	// (0x00063ec4) main_mobtv_info_pane_t3_ParamLimits

0x81ec,	// (0x00063ec4) main_mobtv_info_pane_t3

0x8342,	// (0x0006401a) main_radioblah_pane_g1

0x836d,	// (0x00064045) main_radioblah_info_pane_g1

0x83ee,	// (0x000640c6) main_radioblah_info_pane_t3_ParamLimits

0x83ee,	// (0x000640c6) main_radioblah_info_pane_t3

0x31e1,	// (0x0005eeb9) highlight_cell_cale_month_pane_ParamLimits

0x31e1,	// (0x0005eeb9) highlight_cell_cale_month_pane

0x11a8,	// (0x0005ce80) main_phob_fisheye_pane

0xcfd7,	// (0x00068caf) scroll_pane_cp0031_ParamLimits

0xcfd7,	// (0x00068caf) scroll_pane_cp0031

0xdf39,	// (0x00069c11) wait_bar_pane_cp08_ParamLimits

0x7bab,	// (0x00063883) cset_list_set_pane_copy1_ParamLimits

0xe643,	// (0x0006a31b) highlight_cell_cale_month_pane_g1

0x848e,	// (0x00064166) highlight_cell_cale_month_pane_t1

0xdbb3,	// (0x0006988b) list_gen_pane_cp01

0xd813,	// (0x000694eb) scroll_pane_01

0x849c,	// (0x00064174) list_single_double_fisheye_pane

0x84a5,	// (0x0006417d) list_double_fisheye_pane_g1_ParamLimits

0x84a5,	// (0x0006417d) list_double_fisheye_pane_g1

0x84b1,	// (0x00064189) list_double_fisheye_pane_g2_ParamLimits

0x84b1,	// (0x00064189) list_double_fisheye_pane_g2

0x84c5,	// (0x0006419d) list_double_fisheye_pane_g3_ParamLimits

0x84c5,	// (0x0006419d) list_double_fisheye_pane_g3

0x0004,

0xf9f3,	// (0x0006b6cb) list_double_fisheye_pane_g_ParamLimits

0xf9f3,	// (0x0006b6cb) list_double_fisheye_pane_g

0x84ee,	// (0x000641c6) list_double_fisheye_pane_t1_ParamLimits

0x84ee,	// (0x000641c6) list_double_fisheye_pane_t1

0x8509,	// (0x000641e1) list_double_fisheye_pane_t2_ParamLimits

0x8509,	// (0x000641e1) list_double_fisheye_pane_t2

0x0001,

0xf9fe,	// (0x0006b6d6) list_double_fisheye_pane_t_ParamLimits

0xf9fe,	// (0x0006b6d6) list_double_fisheye_pane_t

0x11a8,	// (0x0005ce80) main_call5_pane

0x82b3,	// (0x00063f8b) sc_swipe_pane_ParamLimits

0x82b3,	// (0x00063f8b) sc_swipe_pane

0x8537,	// (0x0006420f) call5_image_pane_ParamLimits

0x8537,	// (0x0006420f) call5_image_pane

0x8547,	// (0x0006421f) call5_swipe_1_pane_ParamLimits

0x8547,	// (0x0006421f) call5_swipe_1_pane

0x8553,	// (0x0006422b) call5_swipe_2_pane_ParamLimits

0x8553,	// (0x0006422b) call5_swipe_2_pane

0x856d,	// (0x00064245) popup_call5_audio_first_window_ParamLimits

0x856d,	// (0x00064245) popup_call5_audio_first_window

0xcedb,	// (0x00068bb3) call5_swipe_1_pane_g1_ParamLimits

0xcedb,	// (0x00068bb3) call5_swipe_1_pane_g1

0xe64b,	// (0x0006a323) call5_swipe_1_pane_g2_ParamLimits

0xe64b,	// (0x0006a323) call5_swipe_1_pane_g2

0x0001,

0x0bb2,	// (0x0005c88a) call5_swipe_1_pane_g_ParamLimits

0x0bb2,	// (0x0005c88a) call5_swipe_1_pane_g

0xe657,	// (0x0006a32f) call5_swipe_1_pane_t1_ParamLimits

0xe657,	// (0x0006a32f) call5_swipe_1_pane_t1

0xcedb,	// (0x00068bb3) call5_swipe_2_pane_g1_ParamLimits

0xcedb,	// (0x00068bb3) call5_swipe_2_pane_g1

0xe66c,	// (0x0006a344) call5_swipe_2_pane_g2_ParamLimits

0xe66c,	// (0x0006a344) call5_swipe_2_pane_g2

0x0001,

0x0bb7,	// (0x0005c88f) call5_swipe_2_pane_g_ParamLimits

0x0bb7,	// (0x0005c88f) call5_swipe_2_pane_g

0xe678,	// (0x0006a350) call5_swipe_2_pane_t1_ParamLimits

0xe678,	// (0x0006a350) call5_swipe_2_pane_t1

0xe68d,	// (0x0006a365) sc_swipe_pane_g1_ParamLimits

0xe68d,	// (0x0006a365) sc_swipe_pane_g1

0xe69a,	// (0x0006a372) sc_swipe_pane_g2_ParamLimits

0xe69a,	// (0x0006a372) sc_swipe_pane_g2

0x0001,

0x0bbc,	// (0x0005c894) sc_swipe_pane_g_ParamLimits

0x0bbc,	// (0x0005c894) sc_swipe_pane_g

0xe6a6,	// (0x0006a37e) sc_swipe_pane_t1_ParamLimits

0xe6a6,	// (0x0006a37e) sc_swipe_pane_t1

0x11a8,	// (0x0005ce80) main_cmail_launcher_pane

0x857b,	// (0x00064253) aid_size_cell_cmail_l_ParamLimits

0x857b,	// (0x00064253) aid_size_cell_cmail_l

0x858b,	// (0x00064263) grid_cmail_l_pane_ParamLimits

0x858b,	// (0x00064263) grid_cmail_l_pane

0x859b,	// (0x00064273) cell_cmail_l_pane_ParamLimits

0x859b,	// (0x00064273) cell_cmail_l_pane

0x85af,	// (0x00064287) cell_cmail_l_pane_g1_ParamLimits

0x85af,	// (0x00064287) cell_cmail_l_pane_g1

0x85bb,	// (0x00064293) cell_cmail_l_pane_t1_ParamLimits

0x85bb,	// (0x00064293) cell_cmail_l_pane_t1

0xe6bb,	// (0x0006a393) cell_cmail_l_pane_t2_ParamLimits

0xe6bb,	// (0x0006a393) cell_cmail_l_pane_t2

0x0001,

0xfa03,	// (0x0006b6db) cell_cmail_l_pane_t_ParamLimits

0xfa03,	// (0x0006b6db) cell_cmail_l_pane_t

0xa4ce,	// (0x000661a6) grid_highlight_pane_cp018_ParamLimits

0xa4ce,	// (0x000661a6) grid_highlight_pane_cp018

0x0ffe,	// (0x0005ccd6) main2_pane_ParamLimits

0x0ffe,	// (0x0005ccd6) main2_pane

0xa8ca,	// (0x000665a2) popup_sp_fs_action_menu_bg_pane_g1

0xa8d2,	// (0x000665aa) popup_sp_fs_action_menu_bg_pane_g2

0xa8da,	// (0x000665b2) popup_sp_fs_action_menu_bg_pane_g3

0xa8e2,	// (0x000665ba) popup_sp_fs_action_menu_bg_pane_g4

0xa8ea,	// (0x000665c2) popup_sp_fs_action_menu_bg_pane_g5

0xa8f2,	// (0x000665ca) popup_sp_fs_action_menu_bg_pane_g6

0xa8fa,	// (0x000665d2) popup_sp_fs_action_menu_bg_pane_g7

0xa902,	// (0x000665da) popup_sp_fs_action_menu_bg_pane_g8

0xa90a,	// (0x000665e2) popup_sp_fs_action_menu_bg_pane_g9

0xa912,	// (0x000665ea) popup_sp_fs_action_menu_bg_pane_g10

0xa912,	// (0x000665ea) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf186,	// (0x0006ae5e) popup_sp_fs_action_menu_bg_pane_g

0x1fba,	// (0x0005dc92) list_medium_line_x2_t3_g3_g1_ParamLimits

0x1fba,	// (0x0005dc92) list_medium_line_x2_t3_g3_g1

0x1fc6,	// (0x0005dc9e) list_medium_line_x2_t3_g3_g2_ParamLimits

0x1fc6,	// (0x0005dc9e) list_medium_line_x2_t3_g3_g2

0x1fd2,	// (0x0005dcaa) list_medium_line_x2_t3_g3_g3_ParamLimits

0x1fd2,	// (0x0005dcaa) list_medium_line_x2_t3_g3_g3

0x0002,

0xf238,	// (0x0006af10) list_medium_line_x2_t3_g3_g_ParamLimits

0xf238,	// (0x0006af10) list_medium_line_x2_t3_g3_g

0x1fde,	// (0x0005dcb6) list_medium_line_x2_t3_g3_t1_ParamLimits

0x1fde,	// (0x0005dcb6) list_medium_line_x2_t3_g3_t1

0x1ff3,	// (0x0005dccb) list_medium_line_x2_t3_g3_t2_ParamLimits

0x1ff3,	// (0x0005dccb) list_medium_line_x2_t3_g3_t2

0x2005,	// (0x0005dcdd) list_medium_line_x2_t3_g3_t3_ParamLimits

0x2005,	// (0x0005dcdd) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23f,	// (0x0006af17) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23f,	// (0x0006af17) list_medium_line_x2_t3_g3_t

0x1fba,	// (0x0005dc92) list_medium_line_x2_t3_g2_g1_ParamLimits

0x1fba,	// (0x0005dc92) list_medium_line_x2_t3_g2_g1

0x1fd2,	// (0x0005dcaa) list_medium_line_x2_t3_g2_g2_ParamLimits

0x1fd2,	// (0x0005dcaa) list_medium_line_x2_t3_g2_g2

0x0001,

0xf246,	// (0x0006af1e) list_medium_line_x2_t3_g2_g_ParamLimits

0xf246,	// (0x0006af1e) list_medium_line_x2_t3_g2_g

0x201a,	// (0x0005dcf2) list_medium_line_x2_t3_g2_t1_ParamLimits

0x201a,	// (0x0005dcf2) list_medium_line_x2_t3_g2_t1

0x2030,	// (0x0005dd08) list_medium_line_x2_t3_g2_t2_ParamLimits

0x2030,	// (0x0005dd08) list_medium_line_x2_t3_g2_t2

0x2042,	// (0x0005dd1a) list_medium_line_x2_t3_g2_t3_ParamLimits

0x2042,	// (0x0005dd1a) list_medium_line_x2_t3_g2_t3

0x0002,

0xf24b,	// (0x0006af23) list_medium_line_x2_t3_g2_t_ParamLimits

0xf24b,	// (0x0006af23) list_medium_line_x2_t3_g2_t

0x1fba,	// (0x0005dc92) list_medium_line_x2_t4_g4_g1_ParamLimits

0x1fba,	// (0x0005dc92) list_medium_line_x2_t4_g4_g1

0x205f,	// (0x0005dd37) list_medium_line_x2_t4_g4_g2_ParamLimits

0x205f,	// (0x0005dd37) list_medium_line_x2_t4_g4_g2

0x1fc6,	// (0x0005dc9e) list_medium_line_x2_t4_g4_g3_ParamLimits

0x1fc6,	// (0x0005dc9e) list_medium_line_x2_t4_g4_g3

0x206b,	// (0x0005dd43) list_medium_line_x2_t4_g4_g4_ParamLimits

0x206b,	// (0x0005dd43) list_medium_line_x2_t4_g4_g4

0x0003,

0xf252,	// (0x0006af2a) list_medium_line_x2_t4_g4_g_ParamLimits

0xf252,	// (0x0006af2a) list_medium_line_x2_t4_g4_g

0x2077,	// (0x0005dd4f) list_medium_line_x2_t4_g4_t1_ParamLimits

0x2077,	// (0x0005dd4f) list_medium_line_x2_t4_g4_t1

0x208e,	// (0x0005dd66) list_medium_line_x2_t4_g4_t2_ParamLimits

0x208e,	// (0x0005dd66) list_medium_line_x2_t4_g4_t2

0x20a3,	// (0x0005dd7b) list_medium_line_x2_t4_g4_t3_ParamLimits

0x20a3,	// (0x0005dd7b) list_medium_line_x2_t4_g4_t3

0x20b5,	// (0x0005dd8d) list_medium_line_x2_t4_g4_t4_ParamLimits

0x20b5,	// (0x0005dd8d) list_medium_line_x2_t4_g4_t4

0x0003,

0xf25b,	// (0x0006af33) list_medium_line_x2_t4_g4_t_ParamLimits

0xf25b,	// (0x0006af33) list_medium_line_x2_t4_g4_t

0x1fba,	// (0x0005dc92) list_medium_line_x2_t2_g4_g1_ParamLimits

0x1fba,	// (0x0005dc92) list_medium_line_x2_t2_g4_g1

0x205f,	// (0x0005dd37) list_medium_line_x2_t2_g4_g2_ParamLimits

0x205f,	// (0x0005dd37) list_medium_line_x2_t2_g4_g2

0x1fc6,	// (0x0005dc9e) list_medium_line_x2_t2_g4_g3_ParamLimits

0x1fc6,	// (0x0005dc9e) list_medium_line_x2_t2_g4_g3

0x1fd2,	// (0x0005dcaa) list_medium_line_x2_t2_g4_g4_ParamLimits

0x1fd2,	// (0x0005dcaa) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c2,	// (0x0006af9a) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c2,	// (0x0006af9a) list_medium_line_x2_t2_g4_g

0x3207,	// (0x0005eedf) list_medium_line_x2_t2_g4_t1_ParamLimits

0x3207,	// (0x0005eedf) list_medium_line_x2_t2_g4_t1

0x2005,	// (0x0005dcdd) list_medium_line_x2_t2_g4_t2_ParamLimits

0x2005,	// (0x0005dcdd) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2cb,	// (0x0006afa3) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2cb,	// (0x0006afa3) list_medium_line_x2_t2_g4_t

0x1fba,	// (0x0005dc92) list_medium_line_x2_t2_g3_g1_ParamLimits

0x1fba,	// (0x0005dc92) list_medium_line_x2_t2_g3_g1

0x1fc6,	// (0x0005dc9e) list_medium_line_x2_t2_g3_g2_ParamLimits

0x1fc6,	// (0x0005dc9e) list_medium_line_x2_t2_g3_g2

0x1fd2,	// (0x0005dcaa) list_medium_line_x2_t2_g3_g3_ParamLimits

0x1fd2,	// (0x0005dcaa) list_medium_line_x2_t2_g3_g3

0x0002,

0xf238,	// (0x0006af10) list_medium_line_x2_t2_g3_g_ParamLimits

0xf238,	// (0x0006af10) list_medium_line_x2_t2_g3_g

0x321c,	// (0x0005eef4) list_medium_line_x2_t2_g3_t1_ParamLimits

0x321c,	// (0x0005eef4) list_medium_line_x2_t2_g3_t1

0x2005,	// (0x0005dcdd) list_medium_line_x2_t2_g3_t2_ParamLimits

0x2005,	// (0x0005dcdd) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d0,	// (0x0006afa8) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d0,	// (0x0006afa8) list_medium_line_x2_t2_g3_t

0x33d7,	// (0x0005f0af) main_sp_fs_list_pane_ParamLimits

0x33d7,	// (0x0005f0af) main_sp_fs_list_pane

0x33e3,	// (0x0005f0bb) sp_fs_scroll_pane_ParamLimits

0x33e3,	// (0x0005f0bb) sp_fs_scroll_pane

0x33ef,	// (0x0005f0c7) list_medium_line_x2_t3_t1

0x33ff,	// (0x0005f0d7) list_medium_line_x2_t3_t2

0x340d,	// (0x0005f0e5) list_medium_line_x2_t3_t3

0x0002,

0xf31b,	// (0x0006aff3) list_medium_line_x2_t3_t

0x341b,	// (0x0005f0f3) list_medium_line_x3_t4_t1

0x342b,	// (0x0005f103) list_medium_line_x3_t4_t2

0x3439,	// (0x0005f111) list_medium_line_x3_t4_t3

0x340d,	// (0x0005f0e5) list_medium_line_x3_t4_t4

0x0003,

0xf322,	// (0x0006affa) list_medium_line_x3_t4_t

0x3447,	// (0x0005f11f) list_medium_line_x4_t5_t1

0x3457,	// (0x0005f12f) list_medium_line_x4_t5_t2

0x3439,	// (0x0005f111) list_medium_line_x4_t5_t3

0x3465,	// (0x0005f13d) list_medium_line_x4_t5_t4

0x340d,	// (0x0005f0e5) list_medium_line_x4_t5_t5

0x0004,

0xf32b,	// (0x0006b003) list_medium_line_x4_t5_t

0x1fba,	// (0x0005dc92) list_medium_line_t4_g4_g1_ParamLimits

0x1fba,	// (0x0005dc92) list_medium_line_t4_g4_g1

0x206b,	// (0x0005dd43) list_medium_line_t4_g4_g2_ParamLimits

0x206b,	// (0x0005dd43) list_medium_line_t4_g4_g2

0x3473,	// (0x0005f14b) list_medium_line_t4_g4_g3_ParamLimits

0x3473,	// (0x0005f14b) list_medium_line_t4_g4_g3

0x1fd2,	// (0x0005dcaa) list_medium_line_t4_g4_g4_ParamLimits

0x1fd2,	// (0x0005dcaa) list_medium_line_t4_g4_g4

0x0003,

0xf336,	// (0x0006b00e) list_medium_line_t4_g4_g_ParamLimits

0xf336,	// (0x0006b00e) list_medium_line_t4_g4_g

0x347f,	// (0x0005f157) list_medium_line_t4_g4_t1_ParamLimits

0x347f,	// (0x0005f157) list_medium_line_t4_g4_t1

0x3494,	// (0x0005f16c) list_medium_line_t4_g4_t2_ParamLimits

0x3494,	// (0x0005f16c) list_medium_line_t4_g4_t2

0x34a9,	// (0x0005f181) list_medium_line_t4_g4_t3_ParamLimits

0x34a9,	// (0x0005f181) list_medium_line_t4_g4_t3

0x2005,	// (0x0005dcdd) list_medium_line_t4_g4_t4_ParamLimits

0x2005,	// (0x0005dcdd) list_medium_line_t4_g4_t4

0x0003,

0xf33f,	// (0x0006b017) list_medium_line_t4_g4_t_ParamLimits

0xf33f,	// (0x0006b017) list_medium_line_t4_g4_t

0x35bf,	// (0x0005f297) chi_dic_find_pane_g1

0x44db,	// (0x000601b3) main_tport_pane

0x6eb0,	// (0x00062b88) list_medium_line_plain_t1

0x6f9a,	// (0x00062c72) list_medium_line_t2_g2_g1_ParamLimits

0x6f9a,	// (0x00062c72) list_medium_line_t2_g2_g1

0x6fa6,	// (0x00062c7e) list_medium_line_t2_g2_g2_ParamLimits

0x6fa6,	// (0x00062c7e) list_medium_line_t2_g2_g2

0x0001,

0xf81f,	// (0x0006b4f7) list_medium_line_t2_g2_g_ParamLimits

0xf81f,	// (0x0006b4f7) list_medium_line_t2_g2_g

0x6fb2,	// (0x00062c8a) list_medium_line_t2_g2_t1_ParamLimits

0x6fb2,	// (0x00062c8a) list_medium_line_t2_g2_t1

0x6fc9,	// (0x00062ca1) list_medium_line_t2_g2_t2_ParamLimits

0x6fc9,	// (0x00062ca1) list_medium_line_t2_g2_t2

0x0001,

0xf824,	// (0x0006b4fc) list_medium_line_t2_g2_t_ParamLimits

0xf824,	// (0x0006b4fc) list_medium_line_t2_g2_t

0xa1ac,	// (0x00065e84) aid_sp_fs_list_icon_a_sm

0xa1b4,	// (0x00065e8c) aid_sp_fs_list_icon_d

0xa1bc,	// (0x00065e94) aid_sp_fs_text_primary

0xa1c5,	// (0x00065e9d) aid_sp_fs_text_secondary

0x7653,	// (0x0006332b) list_medium_line

0x7653,	// (0x0006332b) list_medium_line_g2

0x7653,	// (0x0006332b) list_medium_line_g3

0x7653,	// (0x0006332b) list_medium_line_plain

0x7653,	// (0x0006332b) list_medium_line_plain_t2

0x7653,	// (0x0006332b) list_medium_line_plain_t3

0x7653,	// (0x0006332b) list_medium_line_right_icon

0x7653,	// (0x0006332b) list_medium_line_right_iconx2

0x7653,	// (0x0006332b) list_medium_line_t2

0x7653,	// (0x0006332b) list_medium_line_t2_g2

0x7653,	// (0x0006332b) list_medium_line_t2_g3

0x7653,	// (0x0006332b) list_medium_line_t2_right_icon

0x7653,	// (0x0006332b) list_medium_line_t2_right_iconx2

0x7653,	// (0x0006332b) list_medium_line_t3

0x7653,	// (0x0006332b) list_medium_line_t3_g2

0x7653,	// (0x0006332b) list_medium_line_t3_g3

0x7653,	// (0x0006332b) list_medium_line_t3_right_iconx2

0x765c,	// (0x00063334) list_medium_line_t4_g4

0x7665,	// (0x0006333d) list_medium_line_x2

0x7665,	// (0x0006333d) list_medium_line_x2_t2_g2

0x7665,	// (0x0006333d) list_medium_line_x2_t2_g3

0x7665,	// (0x0006333d) list_medium_line_x2_t2_g4

0x7665,	// (0x0006333d) list_medium_line_x2_t3

0x7665,	// (0x0006333d) list_medium_line_x2_t3_g2

0x7665,	// (0x0006333d) list_medium_line_x2_t3_g3

0x7665,	// (0x0006333d) list_medium_line_x2_t3_g4

0x7665,	// (0x0006333d) list_medium_line_x2_t4_g2

0x7665,	// (0x0006333d) list_medium_line_x2_t4_g4

0x766e,	// (0x00063346) list_medium_line_x3

0x766e,	// (0x00063346) list_medium_line_x3_t4

0x766e,	// (0x00063346) list_medium_line_x3_t4_g4

0x765c,	// (0x00063334) list_medium_line_x4_t4

0x765c,	// (0x00063334) list_medium_line_x4_t4_g7

0x765c,	// (0x00063334) list_medium_line_x4_t5

0x7677,	// (0x0006334f) list_single_fs_dyc_pane_ParamLimits

0x7677,	// (0x0006334f) list_single_fs_dyc_pane

0x1fba,	// (0x0005dc92) list_medium_line_x4_t4_g7_g1_ParamLimits

0x1fba,	// (0x0005dc92) list_medium_line_x4_t4_g7_g1

0x7dea,	// (0x00063ac2) list_medium_line_x4_t4_g7_g2_ParamLimits

0x7dea,	// (0x00063ac2) list_medium_line_x4_t4_g7_g2

0x7df6,	// (0x00063ace) list_medium_line_x4_t4_g7_g3_ParamLimits

0x7df6,	// (0x00063ace) list_medium_line_x4_t4_g7_g3

0x7e05,	// (0x00063add) list_medium_line_x4_t4_g7_g4_ParamLimits

0x7e05,	// (0x00063add) list_medium_line_x4_t4_g7_g4

0x7e11,	// (0x00063ae9) list_medium_line_x4_t4_g7_g5_ParamLimits

0x7e11,	// (0x00063ae9) list_medium_line_x4_t4_g7_g5

0x7e20,	// (0x00063af8) list_medium_line_x4_t4_g7_g6_ParamLimits

0x7e20,	// (0x00063af8) list_medium_line_x4_t4_g7_g6

0x7e2f,	// (0x00063b07) list_medium_line_x4_t4_g7_g7_ParamLimits

0x7e2f,	// (0x00063b07) list_medium_line_x4_t4_g7_g7

0x0006,

0xf987,	// (0x0006b65f) list_medium_line_x4_t4_g7_g_ParamLimits

0xf987,	// (0x0006b65f) list_medium_line_x4_t4_g7_g

0x7e3b,	// (0x00063b13) list_medium_line_x4_t4_g7_t1_ParamLimits

0x7e3b,	// (0x00063b13) list_medium_line_x4_t4_g7_t1

0x7e50,	// (0x00063b28) list_medium_line_x4_t4_g7_t2_ParamLimits

0x7e50,	// (0x00063b28) list_medium_line_x4_t4_g7_t2

0x7e65,	// (0x00063b3d) list_medium_line_x4_t4_g7_t3_ParamLimits

0x7e65,	// (0x00063b3d) list_medium_line_x4_t4_g7_t3

0x7e7a,	// (0x00063b52) list_medium_line_x4_t4_g7_t4_ParamLimits

0x7e7a,	// (0x00063b52) list_medium_line_x4_t4_g7_t4

0x7e8c,	// (0x00063b64) list_medium_line_x4_t4_g7_t5_ParamLimits

0x7e8c,	// (0x00063b64) list_medium_line_x4_t4_g7_t5

0x0004,

0xf996,	// (0x0006b66e) list_medium_line_x4_t4_g7_t_ParamLimits

0xf996,	// (0x0006b66e) list_medium_line_x4_t4_g7_t

0x7e9e,	// (0x00063b76) list_single_dyc_row_pane_ParamLimits

0x7e9e,	// (0x00063b76) list_single_dyc_row_pane

0x852b,	// (0x00064203) call5_gesture_pane_ParamLimits

0x852b,	// (0x00064203) call5_gesture_pane

0x855f,	// (0x00064237) call5_windows_pane_ParamLimits

0x855f,	// (0x00064237) call5_windows_pane

0x85d1,	// (0x000642a9) call5_swipe_1_pane_cp_ParamLimits

0x85d1,	// (0x000642a9) call5_swipe_1_pane_cp

0x85dd,	// (0x000642b5) call5_swipe_2_pane_cp_ParamLimits

0x85dd,	// (0x000642b5) call5_swipe_2_pane_cp

0xb463,	// (0x0006713b) call5_image_pane_cp

0x85e9,	// (0x000642c1) popup_call5_audio_first_window_cp_ParamLimits

0x85e9,	// (0x000642c1) popup_call5_audio_first_window_cp

0xe68d,	// (0x0006a365) call5_swipe_1_pane_g1_cp_ParamLimits

0xe68d,	// (0x0006a365) call5_swipe_1_pane_g1_cp

0xe6cd,	// (0x0006a3a5) call5_swipe_1_pane_g2_cp

0xe6a6,	// (0x0006a37e) call5_swipe_1_pane_t1_cp_ParamLimits

0xe6a6,	// (0x0006a37e) call5_swipe_1_pane_t1_cp

0xe68d,	// (0x0006a365) call5_swipe_2_pane_g1_cp_ParamLimits

0xe68d,	// (0x0006a365) call5_swipe_2_pane_g1_cp

0xe6e3,	// (0x0006a3bb) call5_swipe_2_pane_g2_cp

0xe6eb,	// (0x0006a3c3) call5_swipe_2_pane_t1_cp_ParamLimits

0xe6eb,	// (0x0006a3c3) call5_swipe_2_pane_t1_cp

0xa4ce,	// (0x000661a6) main_sp_fs_email_pane

0xe700,	// (0x0006a3d8) main_sp_fs_listscroll_pane_te

0x85f7,	// (0x000642cf) popup_sp_fs_action_menu_pane_ParamLimits

0x85f7,	// (0x000642cf) popup_sp_fs_action_menu_pane

0xcc63,	// (0x0006893b) bg_sp_fs_ctrlbar_pane_g1

0xd26e,	// (0x00068f46) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xd280,	// (0x00068f58) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xd277,	// (0x00068f4f) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xcc63,	// (0x0006893b) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0x0bc6,	// (0x0005c89e) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xca48,	// (0x00068720) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xca48,	// (0x00068720) bg_sp_fs_ctrlbar_ddmenu_pane

0xe709,	// (0x0006a3e1) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe709,	// (0x0006a3e1) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe715,	// (0x0006a3ed) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe715,	// (0x0006a3ed) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfa08,	// (0x0006b6e0) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfa08,	// (0x0006b6e0) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe721,	// (0x0006a3f9) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe721,	// (0x0006a3f9) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x8639,	// (0x00064311) list_medium_line_t2_right_icon_g1

0x8641,	// (0x00064319) list_medium_line_t2_right_icon_t1

0x8651,	// (0x00064329) list_medium_line_t2_right_icon_t2

0x0001,

0xfa0d,	// (0x0006b6e5) list_medium_line_t2_right_icon_t

0xc85b,	// (0x00068533) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc85b,	// (0x00068533) bg_sp_fs_ctrlbar_pane

0x86b6,	// (0x0006438e) main_sp_fs_ctrlbar_button_pane_cp01

0x86be,	// (0x00064396) main_sp_fs_ctrlbar_ddmenu_pane

0xe785,	// (0x0006a45d) main_sp_fs_ctrlbar_pane_g1

0xe791,	// (0x0006a469) main_sp_fs_ctrlbar_pane_g2

0x0001,

0x0bd9,	// (0x0005c8b1) main_sp_fs_ctrlbar_pane_g

0xe79d,	// (0x0006a475) main_sp_fs_ctrlbar_pane_t1

0x86c8,	// (0x000643a0) main_sp_fs_ctrlbar_pane

0x86de,	// (0x000643b6) main_sp_fs_listscroll_pane_te_cp01

0x86ef,	// (0x000643c7) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x86ef,	// (0x000643c7) popup_sp_fs_action_menu_pane_cp01

0xa4ce,	// (0x000661a6) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xa4ce,	// (0x000661a6) bg_sp_fs_highlight_list_pane_cp01

0xa1ce,	// (0x00065ea6) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xa1ce,	// (0x00065ea6) sp_fs_action_menu_list_gene_pane_g1

0xe7cd,	// (0x0006a4a5) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe7cd,	// (0x0006a4a5) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfa12,	// (0x0006b6ea) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfa12,	// (0x0006b6ea) sp_fs_action_menu_list_gene_pane_g

0xa1dd,	// (0x00065eb5) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xa1dd,	// (0x00065eb5) sp_fs_action_menu_list_gene_pane_t1

0xa1f5,	// (0x00065ecd) sp_fs_action_menu_list_gene_pane_ParamLimits

0xa1f5,	// (0x00065ecd) sp_fs_action_menu_list_gene_pane

0xe7da,	// (0x0006a4b2) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe7da,	// (0x0006a4b2) popup_sp_fs_action_menu_bg_pane

0xa214,	// (0x00065eec) sp_fs_action_menu_list_pane_ParamLimits

0xa214,	// (0x00065eec) sp_fs_action_menu_list_pane

0x8719,	// (0x000643f1) sp_fs_scroll_pane_cp01_ParamLimits

0x8719,	// (0x000643f1) sp_fs_scroll_pane_cp01

0x873f,	// (0x00064417) list_medium_line_plain_t2_t1

0x874f,	// (0x00064427) list_medium_line_plain_t2_t2

0x0001,

0xfa17,	// (0x0006b6ef) list_medium_line_plain_t2_t

0x875d,	// (0x00064435) list_medium_line_plain_t3_t1

0x876d,	// (0x00064445) list_medium_line_plain_t3_t2

0x877b,	// (0x00064453) list_medium_line_plain_t3_t3

0x0002,

0xfa1c,	// (0x0006b6f4) list_medium_line_plain_t3_t

0x1fba,	// (0x0005dc92) list_medium_line_x2_t2_g2_g1_ParamLimits

0x1fba,	// (0x0005dc92) list_medium_line_x2_t2_g2_g1

0x1fd2,	// (0x0005dcaa) list_medium_line_x2_t2_g2_g2_ParamLimits

0x1fd2,	// (0x0005dcaa) list_medium_line_x2_t2_g2_g2

0x0001,

0xf246,	// (0x0006af1e) list_medium_line_x2_t2_g2_g_ParamLimits

0xf246,	// (0x0006af1e) list_medium_line_x2_t2_g2_g

0x347f,	// (0x0005f157) list_medium_line_x2_t2_g2_t1_ParamLimits

0x347f,	// (0x0005f157) list_medium_line_x2_t2_g2_t1

0x2005,	// (0x0005dcdd) list_medium_line_x2_t2_g2_t2_ParamLimits

0x2005,	// (0x0005dcdd) list_medium_line_x2_t2_g2_t2

0x0001,

0xfa23,	// (0x0006b6fb) list_medium_line_x2_t2_g2_t_ParamLimits

0xfa23,	// (0x0006b6fb) list_medium_line_x2_t2_g2_t

0x1fba,	// (0x0005dc92) list_medium_line_x2_t4_g2_g1_ParamLimits

0x1fba,	// (0x0005dc92) list_medium_line_x2_t4_g2_g1

0x8789,	// (0x00064461) list_medium_line_x2_t4_g2_g2_ParamLimits

0x8789,	// (0x00064461) list_medium_line_x2_t4_g2_g2

0x0001,

0xfa28,	// (0x0006b700) list_medium_line_x2_t4_g2_g_ParamLimits

0xfa28,	// (0x0006b700) list_medium_line_x2_t4_g2_g

0x879a,	// (0x00064472) list_medium_line_x2_t4_g2_t1_ParamLimits

0x879a,	// (0x00064472) list_medium_line_x2_t4_g2_t1

0x87b4,	// (0x0006448c) list_medium_line_x2_t4_g2_t2_ParamLimits

0x87b4,	// (0x0006448c) list_medium_line_x2_t4_g2_t2

0x87c9,	// (0x000644a1) list_medium_line_x2_t4_g2_t3_ParamLimits

0x87c9,	// (0x000644a1) list_medium_line_x2_t4_g2_t3

0x2005,	// (0x0005dcdd) list_medium_line_x2_t4_g2_t4_ParamLimits

0x2005,	// (0x0005dcdd) list_medium_line_x2_t4_g2_t4

0x0003,

0xfa2d,	// (0x0006b705) list_medium_line_x2_t4_g2_t_ParamLimits

0xfa2d,	// (0x0006b705) list_medium_line_x2_t4_g2_t

0x87de,	// (0x000644b6) list_medium_line_t3_right_iconx2_g1

0x8639,	// (0x00064311) list_medium_line_t3_right_iconx2_g2

0x87e6,	// (0x000644be) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfa36,	// (0x0006b70e) list_medium_line_t3_right_iconx2_g

0x87ee,	// (0x000644c6) list_medium_line_t3_right_iconx2_t1

0x87fe,	// (0x000644d6) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfa3d,	// (0x0006b715) list_medium_line_t3_right_iconx2_t

0x1fba,	// (0x0005dc92) list_medium_line_x3_t4_g4_g1_ParamLimits

0x1fba,	// (0x0005dc92) list_medium_line_x3_t4_g4_g1

0x1fc6,	// (0x0005dc9e) list_medium_line_x3_t4_g4_g2_ParamLimits

0x1fc6,	// (0x0005dc9e) list_medium_line_x3_t4_g4_g2

0x206b,	// (0x0005dd43) list_medium_line_x3_t4_g4_g3_ParamLimits

0x206b,	// (0x0005dd43) list_medium_line_x3_t4_g4_g3

0x880c,	// (0x000644e4) list_medium_line_x3_t4_g4_g4_ParamLimits

0x880c,	// (0x000644e4) list_medium_line_x3_t4_g4_g4

0x0003,

0xfa42,	// (0x0006b71a) list_medium_line_x3_t4_g4_g_ParamLimits

0xfa42,	// (0x0006b71a) list_medium_line_x3_t4_g4_g

0x8818,	// (0x000644f0) list_medium_line_x3_t4_g4_t1_ParamLimits

0x8818,	// (0x000644f0) list_medium_line_x3_t4_g4_t1

0x882f,	// (0x00064507) list_medium_line_x3_t4_g4_t2_ParamLimits

0x882f,	// (0x00064507) list_medium_line_x3_t4_g4_t2

0x3494,	// (0x0005f16c) list_medium_line_x3_t4_g4_t3_ParamLimits

0x3494,	// (0x0005f16c) list_medium_line_x3_t4_g4_t3

0x8844,	// (0x0006451c) list_medium_line_x3_t4_g4_t4_ParamLimits

0x8844,	// (0x0006451c) list_medium_line_x3_t4_g4_t4

0x0003,

0xfa4b,	// (0x0006b723) list_medium_line_x3_t4_g4_t_ParamLimits

0xfa4b,	// (0x0006b723) list_medium_line_x3_t4_g4_t

0x8861,	// (0x00064539) list_single_dyc_row_text_pane_t1_ParamLimits

0x8861,	// (0x00064539) list_single_dyc_row_text_pane_t1

0x8898,	// (0x00064570) list_single_dyc_row_text_pane_t2_ParamLimits

0x8898,	// (0x00064570) list_single_dyc_row_text_pane_t2

0xa234,	// (0x00065f0c) list_single_dyc_row_text_pane_t3_ParamLimits

0xa234,	// (0x00065f0c) list_single_dyc_row_text_pane_t3

0x0005,

0xfa54,	// (0x0006b72c) list_single_dyc_row_text_pane_t_ParamLimits

0xfa54,	// (0x0006b72c) list_single_dyc_row_text_pane_t

0xa258,	// (0x00065f30) list_single_dyc_row_pane_g1_ParamLimits

0xa258,	// (0x00065f30) list_single_dyc_row_pane_g1

0xa264,	// (0x00065f3c) list_single_dyc_row_pane_g2_ParamLimits

0xa264,	// (0x00065f3c) list_single_dyc_row_pane_g2

0xa270,	// (0x00065f48) list_single_dyc_row_pane_g3_ParamLimits

0xa270,	// (0x00065f48) list_single_dyc_row_pane_g3

0xa27c,	// (0x00065f54) list_single_dyc_row_pane_g4_ParamLimits

0xa27c,	// (0x00065f54) list_single_dyc_row_pane_g4

0x0003,

0xfa61,	// (0x0006b739) list_single_dyc_row_pane_g_ParamLimits

0xfa61,	// (0x0006b739) list_single_dyc_row_pane_g

0xa288,	// (0x00065f60) list_single_dyc_row_text_pane_ParamLimits

0xa288,	// (0x00065f60) list_single_dyc_row_text_pane

0x9c4f,	// (0x00065927) bg_sp_fs_scroll_pane

0xe7e8,	// (0x0006a4c0) thumb_sp_fs_scroll_pane

0x6f9a,	// (0x00062c72) list_medium_line_g1_ParamLimits

0x6f9a,	// (0x00062c72) list_medium_line_g1

0x89bb,	// (0x00064693) list_medium_line_t1_ParamLimits

0x89bb,	// (0x00064693) list_medium_line_t1

0x1fba,	// (0x0005dc92) list_medium_line_x2_g1_ParamLimits

0x1fba,	// (0x0005dc92) list_medium_line_x2_g1

0x1fc6,	// (0x0005dc9e) list_medium_line_x2_g2_ParamLimits

0x1fc6,	// (0x0005dc9e) list_medium_line_x2_g2

0x0001,

0xfa6a,	// (0x0006b742) list_medium_line_x2_g_ParamLimits

0xfa6a,	// (0x0006b742) list_medium_line_x2_g

0xa2a7,	// (0x00065f7f) list_medium_line_x2_t1_ParamLimits

0xa2a7,	// (0x00065f7f) list_medium_line_x2_t1

0x1fba,	// (0x0005dc92) list_medium_line_x3_g1_ParamLimits

0x1fba,	// (0x0005dc92) list_medium_line_x3_g1

0x1fc6,	// (0x0005dc9e) list_medium_line_x3_g2_ParamLimits

0x1fc6,	// (0x0005dc9e) list_medium_line_x3_g2

0x0001,

0xfa6a,	// (0x0006b742) list_medium_line_x3_g_ParamLimits

0xfa6a,	// (0x0006b742) list_medium_line_x3_g

0xa2a7,	// (0x00065f7f) list_medium_line_x3_t1_ParamLimits

0xa2a7,	// (0x00065f7f) list_medium_line_x3_t1

0xe7f1,	// (0x0006a4c9) thumb_sp_fs_scroll_pane_g1

0xe7fa,	// (0x0006a4d2) thumb_sp_fs_scroll_pane_g2

0xe803,	// (0x0006a4db) thumb_sp_fs_scroll_pane_g3

0x0002,

0x0c40,	// (0x0005c918) thumb_sp_fs_scroll_pane_g

0xe7f1,	// (0x0006a4c9) bg_sp_fs_scroll_pane_g1

0xe7fa,	// (0x0006a4d2) bg_sp_fs_scroll_pane_g2

0xe803,	// (0x0006a4db) bg_sp_fs_scroll_pane_g3

0x0002,

0x0c40,	// (0x0005c918) bg_sp_fs_scroll_pane_g

0x1fba,	// (0x0005dc92) list_medium_line_x2_t3_g4_g1_ParamLimits

0x1fba,	// (0x0005dc92) list_medium_line_x2_t3_g4_g1

0x205f,	// (0x0005dd37) list_medium_line_x2_t3_g4_g2_ParamLimits

0x205f,	// (0x0005dd37) list_medium_line_x2_t3_g4_g2

0x1fc6,	// (0x0005dc9e) list_medium_line_x2_t3_g4_g3_ParamLimits

0x1fc6,	// (0x0005dc9e) list_medium_line_x2_t3_g4_g3

0x1fd2,	// (0x0005dcaa) list_medium_line_x2_t3_g4_g4_ParamLimits

0x1fd2,	// (0x0005dcaa) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c2,	// (0x0006af9a) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c2,	// (0x0006af9a) list_medium_line_x2_t3_g4_g

0x89d0,	// (0x000646a8) list_medium_line_x2_t3_g4_t1_ParamLimits

0x89d0,	// (0x000646a8) list_medium_line_x2_t3_g4_t1

0x89e6,	// (0x000646be) list_medium_line_x2_t3_g4_t2_ParamLimits

0x89e6,	// (0x000646be) list_medium_line_x2_t3_g4_t2

0x2005,	// (0x0005dcdd) list_medium_line_x2_t3_g4_t3_ParamLimits

0x2005,	// (0x0005dcdd) list_medium_line_x2_t3_g4_t3

0x0002,

0xfa6f,	// (0x0006b747) list_medium_line_x2_t3_g4_t_ParamLimits

0xfa6f,	// (0x0006b747) list_medium_line_x2_t3_g4_t

0x6f9a,	// (0x00062c72) list_medium_line_g2_g1_ParamLimits

0x6f9a,	// (0x00062c72) list_medium_line_g2_g1

0x6fa6,	// (0x00062c7e) list_medium_line_g2_g2_ParamLimits

0x6fa6,	// (0x00062c7e) list_medium_line_g2_g2

0x0001,

0xf81f,	// (0x0006b4f7) list_medium_line_g2_g_ParamLimits

0xf81f,	// (0x0006b4f7) list_medium_line_g2_g

0x8a00,	// (0x000646d8) list_medium_line_g2_t1_ParamLimits

0x8a00,	// (0x000646d8) list_medium_line_g2_t1

0x6f9a,	// (0x00062c72) list_medium_line_t3_g2_g1_ParamLimits

0x6f9a,	// (0x00062c72) list_medium_line_t3_g2_g1

0x6fa6,	// (0x00062c7e) list_medium_line_t3_g2_g2_ParamLimits

0x6fa6,	// (0x00062c7e) list_medium_line_t3_g2_g2

0x0001,

0xf81f,	// (0x0006b4f7) list_medium_line_t3_g2_g_ParamLimits

0xf81f,	// (0x0006b4f7) list_medium_line_t3_g2_g

0x8a15,	// (0x000646ed) list_medium_line_t3_g2_t1_ParamLimits

0x8a15,	// (0x000646ed) list_medium_line_t3_g2_t1

0x8a2f,	// (0x00064707) list_medium_line_t3_g2_t2_ParamLimits

0x8a2f,	// (0x00064707) list_medium_line_t3_g2_t2

0x8a44,	// (0x0006471c) list_medium_line_t3_g2_t3_ParamLimits

0x8a44,	// (0x0006471c) list_medium_line_t3_g2_t3

0x0002,

0xfa76,	// (0x0006b74e) list_medium_line_t3_g2_t_ParamLimits

0xfa76,	// (0x0006b74e) list_medium_line_t3_g2_t

0x8639,	// (0x00064311) list_medium_line_right_icon_g1

0x8a5a,	// (0x00064732) list_medium_line_right_icon_t1

0x6f9a,	// (0x00062c72) list_medium_line_t2_g1_ParamLimits

0x6f9a,	// (0x00062c72) list_medium_line_t2_g1

0x8a68,	// (0x00064740) list_medium_line_t2_t1_ParamLimits

0x8a68,	// (0x00064740) list_medium_line_t2_t1

0x8a82,	// (0x0006475a) list_medium_line_t2_t2_ParamLimits

0x8a82,	// (0x0006475a) list_medium_line_t2_t2

0x0001,

0xfa7d,	// (0x0006b755) list_medium_line_t2_t_ParamLimits

0xfa7d,	// (0x0006b755) list_medium_line_t2_t

0x6f9a,	// (0x00062c72) list_medium_line_t3_g1_ParamLimits

0x6f9a,	// (0x00062c72) list_medium_line_t3_g1

0x8a97,	// (0x0006476f) list_medium_line_t3_t1_ParamLimits

0x8a97,	// (0x0006476f) list_medium_line_t3_t1

0x8aae,	// (0x00064786) list_medium_line_t3_t2_ParamLimits

0x8aae,	// (0x00064786) list_medium_line_t3_t2

0x8ac3,	// (0x0006479b) list_medium_line_t3_t3_ParamLimits

0x8ac3,	// (0x0006479b) list_medium_line_t3_t3

0x0002,

0xfa82,	// (0x0006b75a) list_medium_line_t3_t_ParamLimits

0xfa82,	// (0x0006b75a) list_medium_line_t3_t

0x6f9a,	// (0x00062c72) list_medium_line_g3_g1_ParamLimits

0x6f9a,	// (0x00062c72) list_medium_line_g3_g1

0x8ad5,	// (0x000647ad) list_medium_line_g3_g2_ParamLimits

0x8ad5,	// (0x000647ad) list_medium_line_g3_g2

0x6fa6,	// (0x00062c7e) list_medium_line_g3_g3_ParamLimits

0x6fa6,	// (0x00062c7e) list_medium_line_g3_g3

0x0002,

0xfa89,	// (0x0006b761) list_medium_line_g3_g_ParamLimits

0xfa89,	// (0x0006b761) list_medium_line_g3_g

0x8ae1,	// (0x000647b9) list_medium_line_g3_t1_ParamLimits

0x8ae1,	// (0x000647b9) list_medium_line_g3_t1

0x6f9a,	// (0x00062c72) list_medium_line_t2_g3_g1_ParamLimits

0x6f9a,	// (0x00062c72) list_medium_line_t2_g3_g1

0x8ad5,	// (0x000647ad) list_medium_line_t2_g3_g2_ParamLimits

0x8ad5,	// (0x000647ad) list_medium_line_t2_g3_g2

0x6fa6,	// (0x00062c7e) list_medium_line_t2_g3_g3_ParamLimits

0x6fa6,	// (0x00062c7e) list_medium_line_t2_g3_g3

0x0002,

0xfa89,	// (0x0006b761) list_medium_line_t2_g3_g_ParamLimits

0xfa89,	// (0x0006b761) list_medium_line_t2_g3_g

0x8af6,	// (0x000647ce) list_medium_line_t2_g3_t1_ParamLimits

0x8af6,	// (0x000647ce) list_medium_line_t2_g3_t1

0x8b10,	// (0x000647e8) list_medium_line_t2_g3_t2_ParamLimits

0x8b10,	// (0x000647e8) list_medium_line_t2_g3_t2

0x0001,

0xfa90,	// (0x0006b768) list_medium_line_t2_g3_t_ParamLimits

0xfa90,	// (0x0006b768) list_medium_line_t2_g3_t

0x6f9a,	// (0x00062c72) list_medium_line_t3_g3_g1_ParamLimits

0x6f9a,	// (0x00062c72) list_medium_line_t3_g3_g1

0x8ad5,	// (0x000647ad) list_medium_line_t3_g3_g2_ParamLimits

0x8ad5,	// (0x000647ad) list_medium_line_t3_g3_g2

0x6fa6,	// (0x00062c7e) list_medium_line_t3_g3_g3_ParamLimits

0x6fa6,	// (0x00062c7e) list_medium_line_t3_g3_g3

0x0002,

0xfa89,	// (0x0006b761) list_medium_line_t3_g3_g_ParamLimits

0xfa89,	// (0x0006b761) list_medium_line_t3_g3_g

0x8b25,	// (0x000647fd) list_medium_line_t3_g3_t1_ParamLimits

0x8b25,	// (0x000647fd) list_medium_line_t3_g3_t1

0x8b3e,	// (0x00064816) list_medium_line_t3_g3_t2_ParamLimits

0x8b3e,	// (0x00064816) list_medium_line_t3_g3_t2

0x8b54,	// (0x0006482c) list_medium_line_t3_g3_t3_ParamLimits

0x8b54,	// (0x0006482c) list_medium_line_t3_g3_t3

0x0002,

0xfa95,	// (0x0006b76d) list_medium_line_t3_g3_t_ParamLimits

0xfa95,	// (0x0006b76d) list_medium_line_t3_g3_t

0x87de,	// (0x000644b6) list_medium_line_right_iconx2_g1

0x8639,	// (0x00064311) list_medium_line_right_iconx2_g2

0x0001,

0xfa9c,	// (0x0006b774) list_medium_line_right_iconx2_g

0x8b6a,	// (0x00064842) list_medium_line_right_iconx2_t1

0x87de,	// (0x000644b6) list_medium_line_t2_right_iconx2_g1

0x8639,	// (0x00064311) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfa9c,	// (0x0006b774) list_medium_line_t2_right_iconx2_g

0x8b78,	// (0x00064850) list_medium_line_t2_right_iconx2_t1

0x8b88,	// (0x00064860) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfaa1,	// (0x0006b779) list_medium_line_t2_right_iconx2_t

0x8b96,	// (0x0006486e) list_medium_line_x4_t4_t1

0x8ba4,	// (0x0006487c) list_medium_line_x4_t4_t2

0x8bb4,	// (0x0006488c) list_medium_line_x4_t4_t3

0x8bc4,	// (0x0006489c) list_medium_line_x4_t4_t4

0x0003,

0xfaa6,	// (0x0006b77e) list_medium_line_x4_t4_t

0x8bfe,	// (0x000648d6) tport_appsw_pane_ParamLimits

0x8bfe,	// (0x000648d6) tport_appsw_pane

0x8c0c,	// (0x000648e4) tport_contact_pane_ParamLimits

0x8c0c,	// (0x000648e4) tport_contact_pane

0x8c1c,	// (0x000648f4) tport_listscroll_pane_ParamLimits

0x8c1c,	// (0x000648f4) tport_listscroll_pane

0x8c2c,	// (0x00064904) cell_tport_appsw_pane_ParamLimits

0x8c2c,	// (0x00064904) cell_tport_appsw_pane

0xcf60,	// (0x00068c38) tport_appsw_pane_g1_ParamLimits

0xcf60,	// (0x00068c38) tport_appsw_pane_g1

0xe80c,	// (0x0006a4e4) tport_contact_pane_g1

0xe19c,	// (0x00069e74) tport_contact_pane_t1

0xe815,	// (0x0006a4ed) tport_contact_pane_t2

0x0001,

0x0c87,	// (0x0005c95f) tport_contact_pane_t

0xe823,	// (0x0006a4fb) list_tport_pane

0xe82c,	// (0x0006a504) scroll_pane_cp_030

0x8c5f,	// (0x00064937) cell_tport_appsw_pane_g1

0x8c6f,	// (0x00064947) cell_tport_appsw_pane_t1

0x8c7d,	// (0x00064955) grid_highlight_pane_cp019

0x8c85,	// (0x0006495d) list_tport_double_graphic_pane_ParamLimits

0x8c85,	// (0x0006495d) list_tport_double_graphic_pane

0xa4ce,	// (0x000661a6) list_highlight_pane_cp023_ParamLimits

0xa4ce,	// (0x000661a6) list_highlight_pane_cp023

0x8c96,	// (0x0006496e) list_tport_double_graphic_pane_g1_ParamLimits

0x8c96,	// (0x0006496e) list_tport_double_graphic_pane_g1

0x8ca3,	// (0x0006497b) list_tport_double_graphic_pane_t1_ParamLimits

0x8ca3,	// (0x0006497b) list_tport_double_graphic_pane_t1

0x8cb8,	// (0x00064990) list_tport_double_graphic_pane_t2_ParamLimits

0x8cb8,	// (0x00064990) list_tport_double_graphic_pane_t2

0x0001,

0xfab6,	// (0x0006b78e) list_tport_double_graphic_pane_t_ParamLimits

0xfab6,	// (0x0006b78e) list_tport_double_graphic_pane_t

0x9c4f,	// (0x00065927) main_cale_note_pane

0x675c,	// (0x00062434) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x675c,	// (0x00062434) cell_vitu2_function_top_wide_pane_cp01

0x8200,	// (0x00063ed8) wait_bar_pane_cp05_ParamLimits

0xa4ce,	// (0x000661a6) listscroll_cmail_pane

0xe835,	// (0x0006a50d) list_cmail_pane

0x8cca,	// (0x000649a2) list_cmail_body_pane

0x8cea,	// (0x000649c2) list_single_cmail_header_caption_pane

0x8d16,	// (0x000649ee) list_single_cmail_header_detail_pane_ParamLimits

0x8d16,	// (0x000649ee) list_single_cmail_header_detail_pane

0xe845,	// (0x0006a51d) list_single_cmail_header_caption_pane_t1

0x8d4c,	// (0x00064a24) list_single_cmail_header_detail_pane_g1_ParamLimits

0x8d4c,	// (0x00064a24) list_single_cmail_header_detail_pane_g1

0xa2bd,	// (0x00065f95) list_single_cmail_header_detail_pane_g2_ParamLimits

0xa2bd,	// (0x00065f95) list_single_cmail_header_detail_pane_g2

0x0002,

0xfabb,	// (0x0006b793) list_single_cmail_header_detail_pane_g_ParamLimits

0xfabb,	// (0x0006b793) list_single_cmail_header_detail_pane_g

0x8d62,	// (0x00064a3a) list_single_cmail_header_detail_pane_t1_ParamLimits

0x8d62,	// (0x00064a3a) list_single_cmail_header_detail_pane_t1

0x8d9e,	// (0x00064a76) list_single_cmail_header_editor_pane_bg_ParamLimits

0x8d9e,	// (0x00064a76) list_single_cmail_header_editor_pane_bg

0xe33d,	// (0x0006a015) list_cmail_body_pane_g1

0xe869,	// (0x0006a541) list_cmail_body_pane_t1

0xd6f9,	// (0x000693d1) list_single_cmail_header_editor_pane_bg_g1

0xac48,	// (0x00066920) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd709,	// (0x000693e1) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd701,	// (0x000693d9) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd91d,	// (0x000695f5) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd729,	// (0x00069401) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd719,	// (0x000693f1) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd721,	// (0x000693f9) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xac28,	// (0x00066900) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8db5,	// (0x00064a8d) calenote_gesture_pane_ParamLimits

0x8db5,	// (0x00064a8d) calenote_gesture_pane

0x8dcf,	// (0x00064aa7) calenote_window_pane_ParamLimits

0x8dcf,	// (0x00064aa7) calenote_window_pane

0xe877,	// (0x0006a54f) popup_note_window_cp01

0x8de7,	// (0x00064abf) calenote_swipe_1_pane_ParamLimits

0x8de7,	// (0x00064abf) calenote_swipe_1_pane

0x85dd,	// (0x000642b5) calenote_swipe_2_pane_ParamLimits

0x85dd,	// (0x000642b5) calenote_swipe_2_pane

0xe68d,	// (0x0006a365) calenote_swipe_1_pane_g1_ParamLimits

0xe68d,	// (0x0006a365) calenote_swipe_1_pane_g1

0xe69a,	// (0x0006a372) calenote_swipe_1_pane_g2_ParamLimits

0xe69a,	// (0x0006a372) calenote_swipe_1_pane_g2

0x0001,

0x0bbc,	// (0x0005c894) calenote_swipe_1_pane_g_ParamLimits

0x0bbc,	// (0x0005c894) calenote_swipe_1_pane_g

0xe889,	// (0x0006a561) calenote_swipe_1_pane_t1_ParamLimits

0xe889,	// (0x0006a561) calenote_swipe_1_pane_t1

0xe68d,	// (0x0006a365) calenote_swipe_2_pane_g1_ParamLimits

0xe68d,	// (0x0006a365) calenote_swipe_2_pane_g1

0xe8a8,	// (0x0006a580) calenote_swipe_2_pane_g2_ParamLimits

0xe8a8,	// (0x0006a580) calenote_swipe_2_pane_g2

0x0001,

0x0ca4,	// (0x0005c97c) calenote_swipe_2_pane_g_ParamLimits

0x0ca4,	// (0x0005c97c) calenote_swipe_2_pane_g

0xe8b4,	// (0x0006a58c) calenote_swipe_2_pane_t1_ParamLimits

0xe8b4,	// (0x0006a58c) calenote_swipe_2_pane_t1

0x9c4f,	// (0x00065927) main_mup_navstr_pane

0x54b7,	// (0x0006118f) main_mup3_pane_t7_ParamLimits

0x54b7,	// (0x0006118f) main_mup3_pane_t7

0x5ebc,	// (0x00061b94) main_mp4_pane_g6_ParamLimits

0x5ebc,	// (0x00061b94) main_mp4_pane_g6

0x623c,	// (0x00061f14) main_image3_pane_t4_ParamLimits

0x623c,	// (0x00061f14) main_image3_pane_t4

0x8dfa,	// (0x00064ad2) popup_navstr_preview_pane_ParamLimits

0x8dfa,	// (0x00064ad2) popup_navstr_preview_pane

0x8e06,	// (0x00064ade) scroll_navstr_pane_ParamLimits

0x8e06,	// (0x00064ade) scroll_navstr_pane

0x9c4f,	// (0x00065927) bg_popup_preview_window_pane_cp04

0xe8db,	// (0x0006a5b3) popup_navstr_preview_pane_t1

0x8e12,	// (0x00064aea) scroll_navstr_pane_g1_ParamLimits

0x8e12,	// (0x00064aea) scroll_navstr_pane_g1

0x8e1f,	// (0x00064af7) scroll_navstr_pane_t1_ParamLimits

0x8e1f,	// (0x00064af7) scroll_navstr_pane_t1

0xe880,	// (0x0006a558) bg_button_pane_cp014

0xe880,	// (0x0006a558) bg_button_pane_cp030

0x84d1,	// (0x000641a9) list_double_fisheye_pane_g4_ParamLimits

0x84d1,	// (0x000641a9) list_double_fisheye_pane_g4

0x84dd,	// (0x000641b5) list_double_fisheye_pane_g5_ParamLimits

0x84dd,	// (0x000641b5) list_double_fisheye_pane_g5

0xcd30,	// (0x00068a08) sp_fs_scroll_pane_cp03

0xe785,	// (0x0006a45d) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe791,	// (0x0006a469) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0x0bd9,	// (0x0005c8b1) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe79d,	// (0x0006a475) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe83d,	// (0x0006a515) sp_fs_scroll_pane_cp02

0xa935,	// (0x0006660d) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa935,	// (0x0006660d) popup_sp_fs_calendar_preview_list_single_pane

0x9c4f,	// (0x00065927) main_cam6_pano_pane

0x44bf,	// (0x00060197) main_mup3_pane_ParamLimits

0x9c4f,	// (0x00065927) main_phacti_pane

0x80d5,	// (0x00063dad) bg_button_pane_cp11

0x80ed,	// (0x00063dc5) main_mobtv_info_pane_g2_ParamLimits

0x80ed,	// (0x00063dc5) main_mobtv_info_pane_g2

0x0001,

0xf9bf,	// (0x0006b697) main_mobtv_info_pane_g_ParamLimits

0xf9bf,	// (0x0006b697) main_mobtv_info_pane_g

0x829f,	// (0x00063f77) sc_clock_pane_t5_ParamLimits

0x829f,	// (0x00063f77) sc_clock_pane_t5

0x8342,	// (0x0006401a) main_radioblah_pane_g1_ParamLimits

0xe5d9,	// (0x0006a2b1) main_radioblah_pane_t3_ParamLimits

0xe5d9,	// (0x0006a2b1) main_radioblah_pane_t3

0xe5f1,	// (0x0006a2c9) main_radioblah_pane_t4_ParamLimits

0xe5f1,	// (0x0006a2c9) main_radioblah_pane_t4

0x8360,	// (0x00064038) main_radioblah_text_pane_ParamLimits

0x8360,	// (0x00064038) main_radioblah_text_pane

0x836d,	// (0x00064045) main_radioblah_info_pane_g1_ParamLimits

0x8402,	// (0x000640da) main_radioblah_info_pane_t4_ParamLimits

0x8402,	// (0x000640da) main_radioblah_info_pane_t4

0xa4ce,	// (0x000661a6) main_sp_fs_calendar_pane

0x8e31,	// (0x00064b09) main_phacti_pane_g1

0x8e39,	// (0x00064b11) phacti_note_pane_ParamLimits

0x8e39,	// (0x00064b11) phacti_note_pane

0xe8f2,	// (0x0006a5ca) phacti_term_pane_ParamLimits

0xe8f2,	// (0x0006a5ca) phacti_term_pane

0xe907,	// (0x0006a5df) phacti_note_pane_t1_ParamLimits

0xe907,	// (0x0006a5df) phacti_note_pane_t1

0xa2ed,	// (0x00065fc5) phacti_term_pane_g1

0xa2f5,	// (0x00065fcd) phacti_term_pane_t1_ParamLimits

0xa2f5,	// (0x00065fcd) phacti_term_pane_t1

0xe91e,	// (0x0006a5f6) popup_sp_fs_calendar_preview_list_single_pane_g1

0xaa49,	// (0x00066721) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfacc,	// (0x0006b7a4) popup_sp_fs_calendar_preview_list_single_pane_g

0xe926,	// (0x0006a5fe) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe926,	// (0x0006a5fe) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe93b,	// (0x0006a613) aid_popup_sp_fs_bg_corner_pane

0xcc63,	// (0x0006893b) popup_sp_fs_calendar_preview_bg_pane_g1

0x9c4f,	// (0x00065927) popup_sp_fs_calendar_preview_bg_pane

0xe943,	// (0x0006a61b) popup_sp_fs_calendar_preview_list_pane

0xc85b,	// (0x00068533) bg_main_sp_fs_cale_pane_ParamLimits

0xc85b,	// (0x00068533) bg_main_sp_fs_cale_pane

0xa328,	// (0x00066000) listscroll_cale_mrui_pane_ParamLimits

0xa328,	// (0x00066000) listscroll_cale_mrui_pane

0xa33d,	// (0x00066015) listscroll_sp_fs_schedule_track_pane

0xa346,	// (0x0006601e) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xa346,	// (0x0006601e) main_sp_fs_ctrlbar_pane_cp01

0xe94b,	// (0x0006a623) main_sp_fs_ribbon_pane

0xa359,	// (0x00066031) popup_sp_fs_cale_preview_window

0x8e9c,	// (0x00064b74) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8e9c,	// (0x00064b74) list_single_sp_fs_schedule_track_pane

0xe6d5,	// (0x0006a3ad) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xe6d5,	// (0x0006a3ad) bg_sp_fs_highlight_list_pane_cp03

0x8ebf,	// (0x00064b97) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8ebf,	// (0x00064b97) list_single_sp_fs_schedule_track_pane_g1

0x8ecb,	// (0x00064ba3) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8ecb,	// (0x00064ba3) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfad1,	// (0x0006b7a9) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfad1,	// (0x0006b7a9) list_single_sp_fs_schedule_track_pane_g

0x8ed7,	// (0x00064baf) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8ed7,	// (0x00064baf) list_single_sp_fs_schedule_track_pane_t1

0x8eef,	// (0x00064bc7) sp_fs_schedule_track_pane_ParamLimits

0x8eef,	// (0x00064bc7) sp_fs_schedule_track_pane

0xe953,	// (0x0006a62b) sp_fs_schedule_track_pane_g1

0xe95b,	// (0x0006a633) sp_fs_schedule_track_pane_g2

0xe963,	// (0x0006a63b) sp_fs_schedule_track_pane_g3

0xe96b,	// (0x0006a643) sp_fs_schedule_track_pane_g4

0xe973,	// (0x0006a64b) sp_fs_schedule_track_pane_g5

0x0004,

0x0cb8,	// (0x0005c990) sp_fs_schedule_track_pane_g

0xd6f9,	// (0x000693d1) bg_sp_fs_schedule_viewer_highlight_g1

0xac48,	// (0x00066920) bg_sp_fs_schedule_viewer_highlight_g2

0xd701,	// (0x000693d9) bg_sp_fs_schedule_viewer_highlight_g3

0xd709,	// (0x000693e1) bg_sp_fs_schedule_viewer_highlight_g4

0xd91d,	// (0x000695f5) bg_sp_fs_schedule_viewer_highlight_g5

0xd719,	// (0x000693f1) bg_sp_fs_schedule_viewer_highlight_g6

0xd721,	// (0x000693f9) bg_sp_fs_schedule_viewer_highlight_g7

0xd729,	// (0x00069401) bg_sp_fs_schedule_viewer_highlight_g8

0xac28,	// (0x00066900) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfad6,	// (0x0006b7ae) bg_sp_fs_schedule_viewer_highlight_g

0x9c4f,	// (0x00065927) bg_main_sp_fs_ribbon_pane

0x8eff,	// (0x00064bd7) main_sp_fs_ribbon_pane_g1

0xe97b,	// (0x0006a653) main_sp_fs_ribbon_pane_t1

0x8f08,	// (0x00064be0) main_sp_fs_ribbon_pane_t2

0xe98a,	// (0x0006a662) main_sp_fs_ribbon_pane_t3

0x0002,

0xfae9,	// (0x0006b7c1) main_sp_fs_ribbon_pane_t

0xe999,	// (0x0006a671) main_sp_fs_ribbon_scheduler_pane

0xe9a1,	// (0x0006a679) bg_main_sp_fs_ribbon_pane_g1

0xe9aa,	// (0x0006a682) bg_main_sp_fs_ribbon_pane_g2

0xe9b3,	// (0x0006a68b) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfaf0,	// (0x0006b7c8) bg_main_sp_fs_ribbon_pane_g

0xe9bb,	// (0x0006a693) main_sp_fs_ribbon_scheduler_pane_g1

0xe9c4,	// (0x0006a69c) main_sp_fs_ribbon_scheduler_pane_g2

0xe9cd,	// (0x0006a6a5) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfaf7,	// (0x0006b7cf) main_sp_fs_ribbon_scheduler_pane_g

0xe9d6,	// (0x0006a6ae) list_cale_mrui_pane

0x8f17,	// (0x00064bef) sp_fs_scroll_pane_cp07_ParamLimits

0x8f17,	// (0x00064bef) sp_fs_scroll_pane_cp07

0x8f33,	// (0x00064c0b) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8f33,	// (0x00064c0b) bg_sp_fs_schedule_viewer_highlight

0xe9e3,	// (0x0006a6bb) list_single_sp_fs_schedule_track_pane_cp01

0xe9eb,	// (0x0006a6c3) list_sp_fs_schedule_track_pane

0xe9f3,	// (0x0006a6cb) sp_fs_scroll_pane_cp06_ParamLimits

0xe9f3,	// (0x0006a6cb) sp_fs_scroll_pane_cp06

0xcc63,	// (0x0006893b) bgmain_sp_fs_calendar_pane_g1

0x8f40,	// (0x00064c18) list_single_cale_mrui_pane_ParamLimits

0x8f40,	// (0x00064c18) list_single_cale_mrui_pane

0xa36b,	// (0x00066043) list_single_cale_mrui_row_pane_ParamLimits

0xa36b,	// (0x00066043) list_single_cale_mrui_row_pane

0xa378,	// (0x00066050) list_single_cale_mrui_row_pane_g1_ParamLimits

0xa378,	// (0x00066050) list_single_cale_mrui_row_pane_g1

0xa3b0,	// (0x00066088) list_single_cale_mrui_row_pane_t1_ParamLimits

0xa3b0,	// (0x00066088) list_single_cale_mrui_row_pane_t1

0x8f6e,	// (0x00064c46) list_single_cale_mrui_row_pane_t2_ParamLimits

0x8f6e,	// (0x00064c46) list_single_cale_mrui_row_pane_t2

0xa3c2,	// (0x0006609a) list_single_cale_mrui_row_pane_t3_ParamLimits

0xa3c2,	// (0x0006609a) list_single_cale_mrui_row_pane_t3

0xa3f1,	// (0x000660c9) list_single_cale_mrui_row_pane_t4_ParamLimits

0xa3f1,	// (0x000660c9) list_single_cale_mrui_row_pane_t4

0x0003,

0xfb05,	// (0x0006b7dd) list_single_cale_mrui_row_pane_t_ParamLimits

0xfb05,	// (0x0006b7dd) list_single_cale_mrui_row_pane_t

0x8fd4,	// (0x00064cac) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x8fd4,	// (0x00064cac) list_single_cmail_header_editor_pane_bg_cp01

0x8ff4,	// (0x00064ccc) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x8ff4,	// (0x00064ccc) list_single_cmail_header_editor_pane_bg_cp02

0x9010,	// (0x00064ce8) main_radioblah_text_pane_t1_ParamLimits

0x9010,	// (0x00064ce8) main_radioblah_text_pane_t1

0xea12,	// (0x0006a6ea) cam6_indi_pane_cp01

0xea1a,	// (0x0006a6f2) cam6_mode_pane_cp01

0xea22,	// (0x0006a6fa) cam6_pano_pane

0xea2b,	// (0x0006a703) cam6_zoom_pane_cp01

0xea3b,	// (0x0006a713) cam6_pano_image_pane

0xea46,	// (0x0006a71e) cam6_pano_pane_g1

0xe33d,	// (0x0006a015) cam6_pano_pane_g2

0xea4f,	// (0x0006a727) cam6_pano_pane_g3

0xea58,	// (0x0006a730) cam6_pano_pane_g4

0xd25b,	// (0x00068f33) cam6_pano_pane_g5

0xea61,	// (0x0006a739) cam6_pano_pane_g6

0xea33,	// (0x0006a70b) cam6_pano_pane_g7

0xea6b,	// (0x0006a743) cam6_pano_pane_g8

0xea74,	// (0x0006a74c) cam6_pano_pane_g9

0x0008,

0xfb0e,	// (0x0006b7e6) cam6_pano_pane_g

0x9c4f,	// (0x00065927) main_browser_tag_pane

0xe8d3,	// (0x0006a5ab) grid_navstr_albumart_pane

0xea7f,	// (0x0006a757) cell_navstr_albumart_pane_ParamLimits

0xea7f,	// (0x0006a757) cell_navstr_albumart_pane

0xea9f,	// (0x0006a777) cell_navstr_albumart_pane_g1

0xc66c,	// (0x00068344) cell_navstr_albumart_pane_g2

0xc67c,	// (0x00068354) cell_navstr_albumart_pane_g3

0xc674,	// (0x0006834c) cell_navstr_albumart_pane_g4

0x0003,

0xfb21,	// (0x0006b7f9) cell_navstr_albumart_pane_g

0x902b,	// (0x00064d03) bt_list_pane_ParamLimits

0x902b,	// (0x00064d03) bt_list_pane

0x904b,	// (0x00064d23) bt_list_pane_t1

0x905a,	// (0x00064d32) bt_list_pane_t2

0x0001,

0xfb2a,	// (0x0006b802) bt_list_pane_t

0x9c4f,	// (0x00065927) main_cale_prevew_pane

0x9069,	// (0x00064d41) popup_cale_preview_window_ParamLimits

0x9069,	// (0x00064d41) popup_cale_preview_window

0xa4ce,	// (0x000661a6) bg_popup_preview_window_pane_cp05_ParamLimits

0xa4ce,	// (0x000661a6) bg_popup_preview_window_pane_cp05

0xeaa7,	// (0x0006a77f) list_cale_preview_pane_ParamLimits

0xeaa7,	// (0x0006a77f) list_cale_preview_pane

0x9082,	// (0x00064d5a) list_double_cale_preview_pane_ParamLimits

0x9082,	// (0x00064d5a) list_double_cale_preview_pane

0x9094,	// (0x00064d6c) list_single_cale_preview_pane_ParamLimits

0x9094,	// (0x00064d6c) list_single_cale_preview_pane

0x90aa,	// (0x00064d82) list_single_cale_preview_pane_g1

0x90b2,	// (0x00064d8a) list_single_cale_preview_pane_t1_ParamLimits

0x90b2,	// (0x00064d8a) list_single_cale_preview_pane_t1

0x90c7,	// (0x00064d9f) list_double_cale_preview_pane_g1

0x90cf,	// (0x00064da7) list_double_cale_preview_pane_t1_ParamLimits

0x90cf,	// (0x00064da7) list_double_cale_preview_pane_t1

0x90e4,	// (0x00064dbc) list_double_cale_preview_pane_t2_ParamLimits

0x90e4,	// (0x00064dbc) list_double_cale_preview_pane_t2

0x0001,

0xfb2f,	// (0x0006b807) list_double_cale_preview_pane_t_ParamLimits

0xfb2f,	// (0x0006b807) list_double_cale_preview_pane_t

0x9c4f,	// (0x00065927) main_ezdial_pane

0xa4ce,	// (0x000661a6) main_sp_fs_email_pane_ParamLimits

0x865f,	// (0x00064337) cmail_ddmenu_btn01_pane_ParamLimits

0x865f,	// (0x00064337) cmail_ddmenu_btn01_pane

0x867c,	// (0x00064354) cmail_ddmenu_btn02_pane_ParamLimits

0x867c,	// (0x00064354) cmail_ddmenu_btn02_pane

0x869a,	// (0x00064372) cmail_ddmenu_btn03_pane_ParamLimits

0x869a,	// (0x00064372) cmail_ddmenu_btn03_pane

0x86c8,	// (0x000643a0) main_sp_fs_ctrlbar_pane_ParamLimits

0x86de,	// (0x000643b6) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x8cca,	// (0x000649a2) list_cmail_body_pane_ParamLimits

0xe853,	// (0x0006a52b) bg_button_pane_cp12

0xe85c,	// (0x0006a534) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe85c,	// (0x0006a534) list_single_cmail_header_detail_pane_g3

0xa2c9,	// (0x00065fa1) list_single_cmail_header_detail_pane_t2_ParamLimits

0xa2c9,	// (0x00065fa1) list_single_cmail_header_detail_pane_t2

0x0001,

0xfac2,	// (0x0006b79a) list_single_cmail_header_detail_pane_t_ParamLimits

0xfac2,	// (0x0006b79a) list_single_cmail_header_detail_pane_t

0xa30a,	// (0x00065fe2) phacti_term_pane_t2_ParamLimits

0xa30a,	// (0x00065fe2) phacti_term_pane_t2

0x0001,

0xfac7,	// (0x0006b79f) phacti_term_pane_t_ParamLimits

0xfac7,	// (0x0006b79f) phacti_term_pane_t

0xeab3,	// (0x0006a78b) aid_size_list_single_double

0x90fc,	// (0x00064dd4) popup_ezdial_listscroll_window

0x911d,	// (0x00064df5) popup_number_entry_window_cp01

0xb463,	// (0x0006713b) bg_popup_call_pane_cp09

0xeabf,	// (0x0006a797) ezdial_list_pane

0xeac7,	// (0x0006a79f) scroll_pane_cp23

0xca48,	// (0x00068720) bg_button_pane_cp028_ParamLimits

0xca48,	// (0x00068720) bg_button_pane_cp028

0x912b,	// (0x00064e03) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x912b,	// (0x00064e03) cmail_ddmenu_btn01_pane_g1

0x913b,	// (0x00064e13) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x913b,	// (0x00064e13) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfb34,	// (0x0006b80c) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfb34,	// (0x0006b80c) cmail_ddmenu_btn01_pane_g

0xeacf,	// (0x0006a7a7) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xeacf,	// (0x0006a7a7) cmail_ddmenu_btn01_pane_t1

0xc85b,	// (0x00068533) bg_button_pane_cp029_ParamLimits

0xc85b,	// (0x00068533) bg_button_pane_cp029

0x9147,	// (0x00064e1f) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x9147,	// (0x00064e1f) cmail_ddmenu_btn02_pane_g1

0x915f,	// (0x00064e37) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x915f,	// (0x00064e37) cmail_ddmenu_btn02_pane_t1

0xe6d5,	// (0x0006a3ad) bg_button_pane_cp031_ParamLimits

0xe6d5,	// (0x0006a3ad) bg_button_pane_cp031

0x9147,	// (0x00064e1f) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x9147,	// (0x00064e1f) cmail_ddmenu_btn03_pane_g1

0x915f,	// (0x00064e37) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x915f,	// (0x00064e37) cmail_ddmenu_btn03_pane_t1

0x60d9,	// (0x00061db1) cell_dialer2_keypad_pane_t1_ParamLimits

0x60f3,	// (0x00061dcb) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x60f3,	// (0x00061dcb) cell_dialer2_keypad_pane_t1_copy1

0x7f5a,	// (0x00063c32) ncimui_group_button_pane

0xa4ce,	// (0x000661a6) main_sp_fs_calendar_pane_ParamLimits

0x8cea,	// (0x000649c2) list_single_cmail_header_caption_pane_ParamLimits

0xa31f,	// (0x00065ff7) aid_recal_txt_sm_pane

0x9c4f,	// (0x00065927) mian_recal_day_pane

0xa359,	// (0x00066031) popup_sp_fs_cale_preview_window_ParamLimits

0xeae5,	// (0x0006a7bd) list_recal_day_pane

0xa43b,	// (0x00066113) list_single_recal_day_pane_ParamLimits

0xa43b,	// (0x00066113) list_single_recal_day_pane

0xeb0c,	// (0x0006a7e4) list_single_recal_day_pane_g1_ParamLimits

0xeb0c,	// (0x0006a7e4) list_single_recal_day_pane_g1

0xa44d,	// (0x00066125) list_single_recal_day_pane_g2_ParamLimits

0xa44d,	// (0x00066125) list_single_recal_day_pane_g2

0xa45d,	// (0x00066135) list_single_recal_day_pane_g3_ParamLimits

0xa45d,	// (0x00066135) list_single_recal_day_pane_g3

0x9183,	// (0x00064e5b) list_single_recal_day_pane_g4_ParamLimits

0x9183,	// (0x00064e5b) list_single_recal_day_pane_g4

0xa469,	// (0x00066141) list_single_recal_day_pane_g5_ParamLimits

0xa469,	// (0x00066141) list_single_recal_day_pane_g5

0xa479,	// (0x00066151) list_single_recal_day_pane_g6_ParamLimits

0xa479,	// (0x00066151) list_single_recal_day_pane_g6

0x0004,

0xfb43,	// (0x0006b81b) list_single_recal_day_pane_g_ParamLimits

0xfb43,	// (0x0006b81b) list_single_recal_day_pane_g

0xa48d,	// (0x00066165) list_single_recal_day_pane_t1

0xa4dc,	// (0x000661b4) list_single_recal_day_pane_t2

0x0001,

0xfb4e,	// (0x0006b826) list_single_recal_day_pane_t

0x91a3,	// (0x00064e7b) ncimui_query_button_pane_ParamLimits

0x91a3,	// (0x00064e7b) ncimui_query_button_pane

0x91b3,	// (0x00064e8b) ncimui_query_button_pane_t1_ParamLimits

0x91b3,	// (0x00064e8b) ncimui_query_button_pane_t1

0xeb18,	// (0x0006a7f0) ncimui_query_button_pane_t2_ParamLimits

0xeb18,	// (0x0006a7f0) ncimui_query_button_pane_t2

0x0001,

0xfb53,	// (0x0006b82b) ncimui_query_button_pane_t_ParamLimits

0xfb53,	// (0x0006b82b) ncimui_query_button_pane_t

0x91c6,	// (0x00064e9e) query_button_pane_ParamLimits

0x91c6,	// (0x00064e9e) query_button_pane

0x9c4f,	// (0x00065927) bg_button_pane_cp0028

0xeb2b,	// (0x0006a803) query_button_pane_t1

0x44db,	// (0x000601b3) main_tport_pane_ParamLimits

0x8bd4,	// (0x000648ac) bg_popup_window_pane_cp01_ParamLimits

0x8bd4,	// (0x000648ac) bg_popup_window_pane_cp01

0x8be2,	// (0x000648ba) heading_pane_cp08_ParamLimits

0x8be2,	// (0x000648ba) heading_pane_cp08

0x8bf0,	// (0x000648c8) heading_pane_cp07_ParamLimits

0x8bf0,	// (0x000648c8) heading_pane_cp07

0x8c5f,	// (0x00064937) cell_tport_appsw_pane_g2

0x0002,

0xfaaf,	// (0x0006b787) cell_tport_appsw_pane_g

0xa03d,	// (0x00065d15) input_candi_list_open_g1

0xae0b,	// (0x00066ae3) list_cale_time_pane_g6_ParamLimits

0xae0b,	// (0x00066ae3) list_cale_time_pane_g6

0x4f58,	// (0x00060c30) aid_size_touch_calib_1_ParamLimits

0x4f58,	// (0x00060c30) aid_size_touch_calib_1

0x4f64,	// (0x00060c3c) aid_size_touch_calib_2_ParamLimits

0x4f64,	// (0x00060c3c) aid_size_touch_calib_2

0x4f72,	// (0x00060c4a) aid_size_touch_calib_3_ParamLimits

0x4f72,	// (0x00060c4a) aid_size_touch_calib_3

0x4f82,	// (0x00060c5a) aid_size_touch_calib_4_ParamLimits

0x4f82,	// (0x00060c5a) aid_size_touch_calib_4

0x4f90,	// (0x00060c68) main_touch_calib_button_group_pane_ParamLimits

0x4f90,	// (0x00060c68) main_touch_calib_button_group_pane

0x4f9e,	// (0x00060c76) main_touch_calib_pane_g1_ParamLimits

0x4faa,	// (0x00060c82) main_touch_calib_pane_g2_ParamLimits

0x4fb6,	// (0x00060c8e) main_touch_calib_pane_g3_ParamLimits

0x4fc2,	// (0x00060c9a) main_touch_calib_pane_g4_ParamLimits

0xf608,	// (0x0006b2e0) main_touch_calib_pane_g_ParamLimits

0x4fce,	// (0x00060ca6) main_touch_calib_pane_t1_ParamLimits

0x4fe7,	// (0x00060cbf) main_touch_calib_pane_t2_ParamLimits

0x5000,	// (0x00060cd8) main_touch_calib_pane_t3_ParamLimits

0x5016,	// (0x00060cee) main_touch_calib_pane_t4_ParamLimits

0x502c,	// (0x00060d04) main_touch_calib_pane_t5_ParamLimits

0xf611,	// (0x0006b2e9) main_touch_calib_pane_t_ParamLimits

0xcffb,	// (0x00068cd3) list_single_fp_cale_pane_g3_ParamLimits

0xcffb,	// (0x00068cd3) list_single_fp_cale_pane_g3

0x44bf,	// (0x00060197) bg_button_pane_cp012_ParamLimits

0x44bf,	// (0x00060197) bg_vkb2_func_pane_cp03_ParamLimits

0x6f1a,	// (0x00062bf2) cell_vitu2_function_top_pane_g1_ParamLimits

0x44bf,	// (0x00060197) bg_vkb2_func_pane_cp04_ParamLimits

0x7ee2,	// (0x00063bba) main_ncimui_button_group_pane_ParamLimits

0x7ee2,	// (0x00063bba) main_ncimui_button_group_pane

0x7f48,	// (0x00063c20) main_ncimui_pane_t3_ParamLimits

0x7f48,	// (0x00063c20) main_ncimui_pane_t3

0xe8e9,	// (0x0006a5c1) phacti_button_group_pane

0xeab3,	// (0x0006a78b) aid_size_list_single_double_ParamLimits

0x90fc,	// (0x00064dd4) popup_ezdial_listscroll_window_ParamLimits

0x911d,	// (0x00064df5) popup_number_entry_window_cp01_ParamLimits

0x91d3,	// (0x00064eab) phacti_button_pane_ParamLimits

0x91d3,	// (0x00064eab) phacti_button_pane

0x9c4f,	// (0x00065927) bg_button_pane_cp14

0xeb39,	// (0x0006a811) phacti_button_pane_t1

0x91e4,	// (0x00064ebc) main_touch_calib_button_pane_ParamLimits

0x91e4,	// (0x00064ebc) main_touch_calib_button_pane

0xa831,	// (0x00066509) bg_button_pane_cp18_ParamLimits

0xa831,	// (0x00066509) bg_button_pane_cp18

0xeb47,	// (0x0006a81f) main_touch_calib_button_pane_t1_ParamLimits

0xeb47,	// (0x0006a81f) main_touch_calib_button_pane_t1

0xeb5d,	// (0x0006a835) main_touch_calib_button_pane_t2_ParamLimits

0xeb5d,	// (0x0006a835) main_touch_calib_button_pane_t2

0x0001,

0xfb58,	// (0x0006b830) main_touch_calib_button_pane_t_ParamLimits

0xfb58,	// (0x0006b830) main_touch_calib_button_pane_t

0x9c4f,	// (0x00065927) cell_ncimui_button_pane

0x9c4f,	// (0x00065927) bg_button_pane_cp032

0xeb7b,	// (0x0006a853) cell_ncimui_button_pane_t1

0x614f,	// (0x00061e27) image3_infobar_pane_ParamLimits

0x614f,	// (0x00061e27) image3_infobar_pane

0x82c1,	// (0x00063f99) fs_bigclock_status_pane_ParamLimits

0x82c1,	// (0x00063f99) fs_bigclock_status_pane

0x82ce,	// (0x00063fa6) main_fs_bigclock_clock_pane_ParamLimits

0x82ce,	// (0x00063fa6) main_fs_bigclock_clock_pane

0x82e8,	// (0x00063fc0) main_fs_bigclock_indi_pane_ParamLimits

0x82e8,	// (0x00063fc0) main_fs_bigclock_indi_pane

0x8310,	// (0x00063fe8) main_fs_bigclock_swipe_pane_ParamLimits

0x8310,	// (0x00063fe8) main_fs_bigclock_swipe_pane

0x9c4f,	// (0x00065927) main_fs_clock_dumped_data

0xe44a,	// (0x0006a122) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe44a,	// (0x0006a122) list_single_fs_bigclock_indicator_pane_g1

0xe465,	// (0x0006a13d) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe465,	// (0x0006a13d) list_single_fs_bigclock_indicator_pane_g2

0xe47f,	// (0x0006a157) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe47f,	// (0x0006a157) list_single_fs_bigclock_indicator_pane_g3

0xe499,	// (0x0006a171) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe499,	// (0x0006a171) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0x0b6d,	// (0x0005c845) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0x0b6d,	// (0x0005c845) list_single_fs_bigclock_indicator_pane_g

0xe4c4,	// (0x0006a19c) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe4c4,	// (0x0006a19c) list_single_fs_bigclock_indicator_pane_t1

0xe4ec,	// (0x0006a1c4) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe4ec,	// (0x0006a1c4) list_single_fs_bigclock_indicator_pane_t2

0xe514,	// (0x0006a1ec) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe514,	// (0x0006a1ec) list_single_fs_bigclock_indicator_pane_t3

0xe53c,	// (0x0006a214) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe53c,	// (0x0006a214) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0x0b78,	// (0x0005c850) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0x0b78,	// (0x0005c850) list_single_fs_bigclock_indicator_pane_t

0xeb89,	// (0x0006a861) image3_infobar_fav_pane_ParamLimits

0xeb89,	// (0x0006a861) image3_infobar_fav_pane

0xeb99,	// (0x0006a871) image3_infobar_loc_pane_ParamLimits

0xeb99,	// (0x0006a871) image3_infobar_loc_pane

0xebad,	// (0x0006a885) image3_infobar_time_pane_ParamLimits

0xebad,	// (0x0006a885) image3_infobar_time_pane

0xcc63,	// (0x0006893b) image3_infobar_time_pane_g1

0xebbd,	// (0x0006a895) image3_infobar_time_pane_t1

0xcc63,	// (0x0006893b) image3_infobar_loc_pane_g1

0xebcb,	// (0x0006a8a3) image3_infobar_loc_pane_g2

0x0001,

0x0d2e,	// (0x0005ca06) image3_infobar_loc_pane_g

0xebd3,	// (0x0006a8ab) image3_infobar_loc_pane_t1

0xcc63,	// (0x0006893b) image3_infobar_fav_pane_g1

0xebe1,	// (0x0006a8b9) image3_infobar_fav_pane_g2

0x0001,

0x0d33,	// (0x0005ca0b) image3_infobar_fav_pane_g

0xebe9,	// (0x0006a8c1) fs_bigclock_status_battery_pane

0xebf2,	// (0x0006a8ca) fs_bigclock_status_signal_pane

0xebfb,	// (0x0006a8d3) fs_bigclock_status_title_pane

0xec04,	// (0x0006a8dc) fs_bigclock_status_signal_pane_g1

0xec0d,	// (0x0006a8e5) fs_bigclock_status_signal_pane_g2

0x0001,

0xfb5d,	// (0x0006b835) fs_bigclock_status_signal_pane_g

0xec15,	// (0x0006a8ed) fs_bigclock_status_battery_pane_g1

0xec1e,	// (0x0006a8f6) fs_bigclock_status_battery_pane_g2

0x0001,

0xfb62,	// (0x0006b83a) fs_bigclock_status_battery_pane_g

0xec26,	// (0x0006a8fe) fs_bigclock_status_title_pane_t1

0xcc63,	// (0x0006893b) main_fs_bigclock_clock_pane_g1

0xec34,	// (0x0006a90c) main_fs_bigclock_clock_pane_g2

0xec3d,	// (0x0006a915) main_fs_bigclock_clock_pane_g3

0xec3d,	// (0x0006a915) main_fs_bigclock_clock_pane_g4

0x0003,

0x0d38,	// (0x0005ca10) main_fs_bigclock_clock_pane_g

0xec45,	// (0x0006a91d) main_fs_bigclock_clock_pane_t1

0x91f4,	// (0x00064ecc) main_fs_bigclock_clock_pane_t2

0x0001,

0xfb67,	// (0x0006b83f) main_fs_bigclock_clock_pane_t

0xec53,	// (0x0006a92b) list_single_fs_bigclock_indicator_pane_ParamLimits

0xec53,	// (0x0006a92b) list_single_fs_bigclock_indicator_pane

0xec64,	// (0x0006a93c) list_single_fs_bigclock_pane_ParamLimits

0xec64,	// (0x0006a93c) list_single_fs_bigclock_pane

0xec8a,	// (0x0006a962) main_fs_bigclock_indicator_pane_t1

0xec99,	// (0x0006a971) list_single_fs_bigclock_pane_g1

0xeca1,	// (0x0006a979) list_single_fs_bigclock_pane_t1

0xcc63,	// (0x0006893b) main_fs_bigclock_swipe_pane_g1

0xece4,	// (0x0006a9bc) main_fs_bigclock_swipe_pane_g2

0x0001,

0x0d4d,	// (0x0005ca25) main_fs_bigclock_swipe_pane_g

0xecec,	// (0x0006a9c4) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xecec,	// (0x0006a9c4) main_fs_bigclock_swipe_pane_t1

0x34be,	// (0x0005f196) call_type_pane_ParamLimits

0x9c4f,	// (0x00065927) main_btmg_pane

0xa3a4,	// (0x0006607c) list_single_cale_mrui_row_pane_g2_ParamLimits

0xa3a4,	// (0x0006607c) list_single_cale_mrui_row_pane_g2

0x0002,

0xfafe,	// (0x0006b7d6) list_single_cale_mrui_row_pane_g_ParamLimits

0xfafe,	// (0x0006b7d6) list_single_cale_mrui_row_pane_g

0xa42a,	// (0x00066102) list_recal_vselct_arw_lo_pane

0xeb04,	// (0x0006a7dc) list_recal_vselct_arw_up_pane

0xa432,	// (0x0006610a) list_recal_vselct_pane

0x9247,	// (0x00064f1f) btmg_button_pane

0x9253,	// (0x00064f2b) main_btmg_pane_g1

0x9c4f,	// (0x00065927) bg_button_pane_cp044

0xed09,	// (0x0006a9e1) btmg_button_pane_t1

0xc847,	// (0x0006851f) aid_listscroll_gen

0xa4ce,	// (0x000661a6) main_cntbar_detail_pane

0xe835,	// (0x0006a50d) list_cmail_folder_pane

0xcd30,	// (0x00068a08) sp_fs_scroll_pane_cp03_ParamLimits

0x925b,	// (0x00064f33) list_single_fs_dyc_pane_cp01_ParamLimits

0x925b,	// (0x00064f33) list_single_fs_dyc_pane_cp01

0xed17,	// (0x0006a9ef) aid_size_cmail_indent

0xa4ee,	// (0x000661c6) list_single_dyc_row_pane_cp01

0x92aa,	// (0x00064f82) cntbar_detail_list_pane_ParamLimits

0x92aa,	// (0x00064f82) cntbar_detail_list_pane

0x92e4,	// (0x00064fbc) main_cntbar_detail_cont_pane_ParamLimits

0x92e4,	// (0x00064fbc) main_cntbar_detail_cont_pane

0x33e3,	// (0x0005f0bb) scroll_pane_cp032_ParamLimits

0x33e3,	// (0x0005f0bb) scroll_pane_cp032

0x92f0,	// (0x00064fc8) cntbar_detail_list_event_pane_ParamLimits

0x92f0,	// (0x00064fc8) cntbar_detail_list_event_pane

0x92b6,	// (0x00064f8e) cntbar_detail_list_shct_pane

0xac96,	// (0x0006696e) aid_list_gen

0xed20,	// (0x0006a9f8) aid_scroll

0xed29,	// (0x0006aa01) aid_size_touch_scroll_bar

0x7665,	// (0x0006333d) aid_list_double

0x9304,	// (0x00064fdc) aid_list_single

0x7653,	// (0x0006332b) aid_list_single_lg

0x930d,	// (0x00064fe5) aid_list_z_g_a_sm

0x9315,	// (0x00064fed) aid_list_z_g_d

0x931d,	// (0x00064ff5) aid_txt_z_prm

0x932b,	// (0x00065003) aid_txt_z_prm_cp01

0x9339,	// (0x00065011) aid_txt_z_sec

0x9347,	// (0x0006501f) main_cntbar_detail_cont_pane_g1_ParamLimits

0x9347,	// (0x0006501f) main_cntbar_detail_cont_pane_g1

0x9354,	// (0x0006502c) main_cntbar_detail_cont_pane_g2_ParamLimits

0x9354,	// (0x0006502c) main_cntbar_detail_cont_pane_g2

0x0001,

0xfb78,	// (0x0006b850) main_cntbar_detail_cont_pane_g_ParamLimits

0xfb78,	// (0x0006b850) main_cntbar_detail_cont_pane_g

0xed32,	// (0x0006aa0a) main_cntbar_detail_cont_pane_t1

0xed40,	// (0x0006aa18) main_cntbar_detail_cont_pane_t2

0xed4e,	// (0x0006aa26) main_cntbar_detail_cont_pane_t3

0x0002,

0xfb7d,	// (0x0006b855) main_cntbar_detail_cont_pane_t

0x9360,	// (0x00065038) cell_cntbar_detail_list_shct_pane_ParamLimits

0x9360,	// (0x00065038) cell_cntbar_detail_list_shct_pane

0xed5c,	// (0x0006aa34) cntbar_detail_list_shct_pane_g1

0xed65,	// (0x0006aa3d) cntbar_detail_list_shct_pane_g2

0x0001,

0xfb84,	// (0x0006b85c) cntbar_detail_list_shct_pane_g

0x9374,	// (0x0006504c) cntbar_detail_list_event_pane_g1_ParamLimits

0x9374,	// (0x0006504c) cntbar_detail_list_event_pane_g1

0x9380,	// (0x00065058) cntbar_detail_list_event_pane_g2_ParamLimits

0x9380,	// (0x00065058) cntbar_detail_list_event_pane_g2

0x0005,

0xfb89,	// (0x0006b861) cntbar_detail_list_event_pane_g_ParamLimits

0xfb89,	// (0x0006b861) cntbar_detail_list_event_pane_g

0x93ec,	// (0x000650c4) cntbar_detail_list_event_pane_t1_ParamLimits

0x93ec,	// (0x000650c4) cntbar_detail_list_event_pane_t1

0x9401,	// (0x000650d9) cntbar_detail_list_event_pane_t2_ParamLimits

0x9401,	// (0x000650d9) cntbar_detail_list_event_pane_t2

0x0002,

0xfb96,	// (0x0006b86e) cntbar_detail_list_event_pane_t_ParamLimits

0xfb96,	// (0x0006b86e) cntbar_detail_list_event_pane_t

0xcc63,	// (0x0006893b) cell_cntbar_detail_list_shct_pane_g1

0xb41b,	// (0x000670f3) navi_pane_mv_g3

0xa4ce,	// (0x000661a6) main_cntbar_detail_pane_ParamLimits

0x9c4f,	// (0x00065927) main_notif_wgt_pane

0x5e03,	// (0x00061adb) aid_tch_main_mp4_pane_g4

0x6038,	// (0x00061d10) popup_slider_window_cp02

0xa420,	// (0x000660f8) list_recal_day_event_pane

0x928a,	// (0x00064f62) cntbar_detail_btn_pane_ParamLimits

0x928a,	// (0x00064f62) cntbar_detail_btn_pane

0x929a,	// (0x00064f72) cntbar_detail_btn_pane_cp01_ParamLimits

0x929a,	// (0x00064f72) cntbar_detail_btn_pane_cp01

0x92b6,	// (0x00064f8e) cntbar_detail_list_shct_pane_ParamLimits

0x92c2,	// (0x00064f9a) cntbar_detail_pane_g1_ParamLimits

0x92c2,	// (0x00064f9a) cntbar_detail_pane_g1

0x92ce,	// (0x00064fa6) cntbar_detail_pane_t1_ParamLimits

0x92ce,	// (0x00064fa6) cntbar_detail_pane_t1

0x938c,	// (0x00065064) cntbar_detail_list_event_pane_g3_ParamLimits

0x938c,	// (0x00065064) cntbar_detail_list_event_pane_g3

0x93a4,	// (0x0006507c) cntbar_detail_list_event_pane_g4_ParamLimits

0x93a4,	// (0x0006507c) cntbar_detail_list_event_pane_g4

0x93bc,	// (0x00065094) cntbar_detail_list_event_pane_g5_ParamLimits

0x93bc,	// (0x00065094) cntbar_detail_list_event_pane_g5

0x93d4,	// (0x000650ac) cntbar_detail_list_event_pane_g6_ParamLimits

0x93d4,	// (0x000650ac) cntbar_detail_list_event_pane_g6

0x9416,	// (0x000650ee) cntbar_detail_list_event_pane_t3_ParamLimits

0x9416,	// (0x000650ee) cntbar_detail_list_event_pane_t3

0x9428,	// (0x00065100) popup_notif_wgt_window_ParamLimits

0x9428,	// (0x00065100) popup_notif_wgt_window

0x9438,	// (0x00065110) popup_submenu_window_cp01_ParamLimits

0x9438,	// (0x00065110) popup_submenu_window_cp01

0xb463,	// (0x0006713b) bg_popup_window_pane_cp10

0xed6e,	// (0x0006aa46) listscroll_notif_wgt_pane

0xed80,	// (0x0006aa58) list_notif_wgt_window

0xed89,	// (0x0006aa61) scroll_pane_cp033

0x944a,	// (0x00065122) list_notif_wgt_row_pane_ParamLimits

0x944a,	// (0x00065122) list_notif_wgt_row_pane

0xed92,	// (0x0006aa6a) aid_size_list_notif_wgt_del

0xed9f,	// (0x0006aa77) list_notif_wgt_row_pane_g1

0xedab,	// (0x0006aa83) list_notif_wgt_row_pane_g2

0xedbf,	// (0x0006aa97) list_notif_wgt_row_pane_g3

0x0002,

0xfb9d,	// (0x0006b875) list_notif_wgt_row_pane_g

0xedcc,	// (0x0006aaa4) list_notif_wgt_row_pane_t1

0xede2,	// (0x0006aaba) list_notif_wgt_row_pane_t2

0xedf4,	// (0x0006aacc) list_notif_wgt_row_pane_t3

0x0002,

0xfba4,	// (0x0006b87c) list_notif_wgt_row_pane_t

0xd937,	// (0x0006960f) list_recal_day_event_pane_g1

0xee06,	// (0x0006aade) list_recal_day_event_pane_t1

0x9c4f,	// (0x00065927) bg_button_pane_cp045

0x945c,	// (0x00065134) cntbar_detail_btn_pane_t1

0xc85b,	// (0x00068533) main_callh_pane_ParamLimits

0xc85b,	// (0x00068533) main_callh_pane

0x9c4f,	// (0x00065927) main_coverflow0_pane

0x9c4f,	// (0x00065927) main_wgtman_pane

0x8328,	// (0x00064000) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x8328,	// (0x00064000) main_fs_bigclock_unlock_btn_pane

0x8c57,	// (0x0006492f) bg_button_pane_cp16

0x8c67,	// (0x0006493f) cell_tport_appsw_pane_g3

0x946a,	// (0x00065142) cf0_flow_pane_ParamLimits

0x946a,	// (0x00065142) cf0_flow_pane

0xee15,	// (0x0006aaed) listscroll_cf0_pane

0xee20,	// (0x0006aaf8) main_cf0_pane_g1

0x9479,	// (0x00065151) main_cf0_pane_t1_ParamLimits

0x9479,	// (0x00065151) main_cf0_pane_t1

0x948d,	// (0x00065165) main_cf0_pane_t2_ParamLimits

0x948d,	// (0x00065165) main_cf0_pane_t2

0x0001,

0xfbb0,	// (0x0006b888) main_cf0_pane_t_ParamLimits

0xfbb0,	// (0x0006b888) main_cf0_pane_t

0xee32,	// (0x0006ab0a) scroll_pane_cp11

0x94a1,	// (0x00065179) cf0_flow_pane_g1

0x94a9,	// (0x00065181) cf0_flow_pane_g2

0x0001,

0xfbb5,	// (0x0006b88d) cf0_flow_pane_g

0x94b1,	// (0x00065189) cf0_flow_pane_t1

0x9c4f,	// (0x00065927) main_call6_pane

0x9c4f,	// (0x00065927) main_calllock_pane

0x94bf,	// (0x00065197) call6_btn_grp_pane_ParamLimits

0x94bf,	// (0x00065197) call6_btn_grp_pane

0x94ce,	// (0x000651a6) call6_pane_g1_ParamLimits

0x94ce,	// (0x000651a6) call6_pane_g1

0x94dd,	// (0x000651b5) popup_call6_1st_window_ParamLimits

0x94dd,	// (0x000651b5) popup_call6_1st_window

0x94eb,	// (0x000651c3) popup_call6_2nd_window_ParamLimits

0x94eb,	// (0x000651c3) popup_call6_2nd_window

0x94f9,	// (0x000651d1) cell_call6_btn_pane_ParamLimits

0x94f9,	// (0x000651d1) cell_call6_btn_pane

0xb463,	// (0x0006713b) bg_popup_call2_in_pane_cp03

0xee3d,	// (0x0006ab15) popup_call6_1st_window_g1

0xee45,	// (0x0006ab1d) popup_call6_1st_window_g2

0xee4d,	// (0x0006ab25) popup_call6_1st_window_g3

0x0002,

0xfbba,	// (0x0006b892) popup_call6_1st_window_g

0xee55,	// (0x0006ab2d) popup_call6_1st_window_t1

0xee64,	// (0x0006ab3c) popup_call6_1st_window_t2

0xee74,	// (0x0006ab4c) popup_call6_1st_window_t3

0x0002,

0xfbc1,	// (0x0006b899) popup_call6_1st_window_t

0xb463,	// (0x0006713b) bg_popup_call2_in_pane_cp04

0xee3d,	// (0x0006ab15) popup_call6_2nd_window_g1

0xee45,	// (0x0006ab1d) popup_call6_2nd_window_g2

0xee4d,	// (0x0006ab25) popup_call6_2nd_window_g3

0x0002,

0xfbba,	// (0x0006b892) popup_call6_2nd_window_g

0xee55,	// (0x0006ab2d) popup_call6_2nd_window_t1

0x9c4f,	// (0x00065927) bg_button_pane_cp15

0xee84,	// (0x0006ab5c) cell_call6_btn_pane_g1

0xee8d,	// (0x0006ab65) cell_call6_btn_pane_t1

0x9508,	// (0x000651e0) listscroll_wgtman_pane_ParamLimits

0x9508,	// (0x000651e0) listscroll_wgtman_pane

0x9524,	// (0x000651fc) wgtman_btn_pane_ParamLimits

0x9524,	// (0x000651fc) wgtman_btn_pane

0xb222,	// (0x00066efa) aid_scroll_copy1

0xee9c,	// (0x0006ab74) list_wgtman_pane

0x9559,	// (0x00065231) wgtman_btn_pane_g1_ParamLimits

0x9559,	// (0x00065231) wgtman_btn_pane_g1

0x9581,	// (0x00065259) wgtman_btn_pane_t1_ParamLimits

0x9581,	// (0x00065259) wgtman_btn_pane_t1

0xeea6,	// (0x0006ab7e) wgtman_btn_pane_t2_ParamLimits

0xeea6,	// (0x0006ab7e) wgtman_btn_pane_t2

0x0001,

0xfbc8,	// (0x0006b8a0) wgtman_btn_pane_t_ParamLimits

0xfbc8,	// (0x0006b8a0) wgtman_btn_pane_t

0x95b8,	// (0x00065290) listrow_wgtman_pane_ParamLimits

0x95b8,	// (0x00065290) listrow_wgtman_pane

0x95d3,	// (0x000652ab) listrow_wgtman_pane_g1

0x95e0,	// (0x000652b8) listrow_wgtman_pane_g2

0x0001,

0xfbcd,	// (0x0006b8a5) listrow_wgtman_pane_g

0x95fe,	// (0x000652d6) listrow_wgtman_pane_t1

0x9616,	// (0x000652ee) listrow_wgtman_pane_t2

0x0001,

0xfbd2,	// (0x0006b8aa) listrow_wgtman_pane_t

0x963c,	// (0x00065314) wait_bar_pane_cp09

0xeebd,	// (0x0006ab95) main_calllock_btn_pane

0xeec7,	// (0x0006ab9f) main_calllock_pane_g1

0x9c4f,	// (0x00065927) bg_button_pane_cp17

0xeed3,	// (0x0006abab) main_calllock_btn_pane_g1

0xeedc,	// (0x0006abb4) main_calllock_btn_pane_t1

0x9c4f,	// (0x00065927) main_dialer3_pane

0x9c4f,	// (0x00065927) main_fmrd2_pane

0xcc63,	// (0x0006893b) main_fs_bigclock_unlock_btn_pane_g1

0xeef3,	// (0x0006abcb) main_fs_bigclock_unlock_btn_pane_t1

0x964e,	// (0x00065326) area_fmrd2_info_pane_ParamLimits

0x964e,	// (0x00065326) area_fmrd2_info_pane

0x965c,	// (0x00065334) area_fmrd2_visual_pane_ParamLimits

0x965c,	// (0x00065334) area_fmrd2_visual_pane

0x966a,	// (0x00065342) fmrd2_indi_pane_ParamLimits

0x966a,	// (0x00065342) fmrd2_indi_pane

0x9677,	// (0x0006534f) area_fmrd2_visual_pane_g1

0x967f,	// (0x00065357) area_fmrd2_visual_pane_t1

0x968f,	// (0x00065367) area_fmrd2_visual_pane_t2

0x969f,	// (0x00065377) area_fmrd2_visual_pane_t3

0x0002,

0xfbd7,	// (0x0006b8af) area_fmrd2_visual_pane_t

0x96af,	// (0x00065387) area_fmrd2_info_pane_g1

0x96b7,	// (0x0006538f) area_fmrd2_info_pane_t1

0x96c7,	// (0x0006539f) area_fmrd2_info_pane_t2

0x96d7,	// (0x000653af) area_fmrd2_info_pane_t3

0x96e7,	// (0x000653bf) area_fmrd2_info_pane_t4

0x0003,

0xfbde,	// (0x0006b8b6) area_fmrd2_info_pane_t

0x96f5,	// (0x000653cd) fmrd2_indi_pane_t1

0x9705,	// (0x000653dd) fmrd2_indi_pane_t2

0x9715,	// (0x000653ed) fmrd2_indi_pane_t3

0x0002,

0xfbe7,	// (0x0006b8bf) fmrd2_indi_pane_t

0xe4a8,	// (0x0006a180) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe4a8,	// (0x0006a180) list_single_fs_bigclock_indicator_pane_g5

0xe558,	// (0x0006a230) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe558,	// (0x0006a230) list_single_fs_bigclock_indicator_pane_t5

0x8e4f,	// (0x00064b27) aid_cell_bcale_month_pane_ParamLimits

0x8e4f,	// (0x00064b27) aid_cell_bcale_month_pane

0x8e6d,	// (0x00064b45) bcale_month_pane_ParamLimits

0x8e6d,	// (0x00064b45) bcale_month_pane

0x8e8b,	// (0x00064b63) bcale_preview_pane_ParamLimits

0x8e8b,	// (0x00064b63) bcale_preview_pane

0xeca1,	// (0x0006a979) list_single_fs_bigclock_pane_t1_ParamLimits

0xecc0,	// (0x0006a998) list_single_fs_bigclock_pane_t2_ParamLimits

0xecc0,	// (0x0006a998) list_single_fs_bigclock_pane_t2

0x0001,

0xfb73,	// (0x0006b84b) list_single_fs_bigclock_pane_t_ParamLimits

0xfb73,	// (0x0006b84b) list_single_fs_bigclock_pane_t

0xeeeb,	// (0x0006abc3) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0x0d84,	// (0x0005ca5c) main_fs_bigclock_unlock_btn_pane_g

0x9723,	// (0x000653fb) aid_dia3_key_size_ParamLimits

0x9723,	// (0x000653fb) aid_dia3_key_size

0x972f,	// (0x00065407) aid_dia3_listrow_size_ParamLimits

0x972f,	// (0x00065407) aid_dia3_listrow_size

0x973f,	// (0x00065417) dia3_keypad_fun_pane_ParamLimits

0x973f,	// (0x00065417) dia3_keypad_fun_pane

0x9751,	// (0x00065429) dia3_keypad_num_pane_ParamLimits

0x9751,	// (0x00065429) dia3_keypad_num_pane

0x9763,	// (0x0006543b) dia3_listscroll_pane_ParamLimits

0x9763,	// (0x0006543b) dia3_listscroll_pane

0x9771,	// (0x00065449) dia3_numentry_pane_ParamLimits

0x9771,	// (0x00065449) dia3_numentry_pane

0xef01,	// (0x0006abd9) dia3_list_pane

0xef0c,	// (0x0006abe4) scroll_pane_cp12

0x9c4f,	// (0x00065927) bg_dia3_numentry_pane

0x977f,	// (0x00065457) dia3_numentry_pane_t1

0x978e,	// (0x00065466) cell_dia3_key_num_pane

0x9796,	// (0x0006546e) cell_dia3_key0_fun_pane_ParamLimits

0x9796,	// (0x0006546e) cell_dia3_key0_fun_pane

0x97a3,	// (0x0006547b) cell_dia3_key1_fun_pane_ParamLimits

0x97a3,	// (0x0006547b) cell_dia3_key1_fun_pane

0x97b0,	// (0x00065488) dia3_listrow_pane

0xe1b7,	// (0x00069e8f) bg_dia3_numentry_pane_g1

0x9c4f,	// (0x00065927) bg_button_pane_cp21

0xef17,	// (0x0006abef) cell_dia3_key_num_pane_t1

0xef25,	// (0x0006abfd) cell_dia3_key_num_pane_t2

0xef34,	// (0x0006ac0c) cell_dia3_key_num_pane_t3

0xef43,	// (0x0006ac1b) cell_dia3_key_num_pane_t4

0x0003,

0xfbee,	// (0x0006b8c6) cell_dia3_key_num_pane_t

0x9c4f,	// (0x00065927) bg_button_pane_cp19

0x97bd,	// (0x00065495) cell_dia3_key0_fun_pane_g1

0x9c4f,	// (0x00065927) bg_button_pane_cp20

0x97c5,	// (0x0006549d) cell_dia3_key1_fun_pane_g1

0x97cd,	// (0x000654a5) area_left_week_number_pane

0x97e0,	// (0x000654b8) area_top_day_name_pane

0x97ee,	// (0x000654c6) frame_month_view_pane

0xef52,	// (0x0006ac2a) grid_month_view_pane

0x9803,	// (0x000654db) cell_top_day_name_pane_ParamLimits

0x9803,	// (0x000654db) cell_top_day_name_pane

0x981d,	// (0x000654f5) cell_area_left_week_number_pane_ParamLimits

0x981d,	// (0x000654f5) cell_area_left_week_number_pane

0x9840,	// (0x00065518) cell_month_view_pane_ParamLimits

0x9840,	// (0x00065518) cell_month_view_pane

0xef60,	// (0x0006ac38) frm_month_g1

0x986c,	// (0x00065544) frm_month_g2

0x987d,	// (0x00065555) frm_month_g3

0x988e,	// (0x00065566) frm_month_g4

0x989f,	// (0x00065577) frm_month_g5

0x98b2,	// (0x0006558a) frm_month_g6

0x98c5,	// (0x0006559d) frm_month_g7

0xef6d,	// (0x0006ac45) frm_month_g8

0x98d8,	// (0x000655b0) frm_month_g9

0x98e5,	// (0x000655bd) frm_month_g10

0x98f2,	// (0x000655ca) frm_month_g11

0x98ff,	// (0x000655d7) frm_month_g12

0x990c,	// (0x000655e4) frm_month_g13

0x9919,	// (0x000655f1) frm_month_g14

0x9928,	// (0x00065600) frm_month_g15

0x9937,	// (0x0006560f) frm_month_g16

0x000f,

0xfbf7,	// (0x0006b8cf) frm_month_g

0xef7a,	// (0x0006ac52) cell_top_day_name_pane_t1

0x9946,	// (0x0006561e) cell_area_left_week_number_pane_g1

0x9955,	// (0x0006562d) cell_area_left_week_number_pane_t1

0xcedb,	// (0x00068bb3) cell_month_view_pane_g1

0x996b,	// (0x00065643) cell_month_view_pane_t1

0x9c4f,	// (0x00065927) main_fps_pane

0xe73b,	// (0x0006a413) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe73b,	// (0x0006a413) cmail_ddmenu_btn02_pane_cp1

0xe769,	// (0x0006a441) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe769,	// (0x0006a441) cmail_ddmenu_btn02_pane_cp2

0x9153,	// (0x00064e2b) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x9153,	// (0x00064e2b) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfb39,	// (0x0006b811) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfb39,	// (0x0006b811) cmail_ddmenu_btn02_pane_g

0x9171,	// (0x00064e49) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x9171,	// (0x00064e49) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfb3e,	// (0x0006b816) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfb3e,	// (0x0006b816) cmail_ddmenu_btn02_pane_t

0x9981,	// (0x00065659) fps_text_pane_ParamLimits

0x9981,	// (0x00065659) fps_text_pane

0x998e,	// (0x00065666) main_fps_pane_g1_ParamLimits

0x998e,	// (0x00065666) main_fps_pane_g1

0x999c,	// (0x00065674) wait_bar_pane_cp010_ParamLimits

0x999c,	// (0x00065674) wait_bar_pane_cp010

0x99a8,	// (0x00065680) fps_text_pane_t1_ParamLimits

0x99a8,	// (0x00065680) fps_text_pane_t1

0x6428,	// (0x00062100) cam4_image_uncrop_pane_g1

0x6431,	// (0x00062109) cam4_image_uncrop_pane_g2

0x643a,	// (0x00062112) cam4_image_uncrop_pane_g3

0x6443,	// (0x0006211b) cam4_image_uncrop_pane_g4

0x0003,

0xf72d,	// (0x0006b405) cam4_image_uncrop_pane_g

0x97b0,	// (0x00065488) dia3_listrow_pane_ParamLimits

0x9c4f,	// (0x00065927) main_phob2_pane

0x8c39,	// (0x00064911) cell_tport_appsw_pane_cp02_ParamLimits

0x8c39,	// (0x00064911) cell_tport_appsw_pane_cp02

0x8c48,	// (0x00064920) cell_tport_appsw_pane_cp03_ParamLimits

0x8c48,	// (0x00064920) cell_tport_appsw_pane_cp03

0x9c4f,	// (0x00065927) phob2_contact_card_pane

0x9c4f,	// (0x00065927) phob2_listscroll_pane

0xef8d,	// (0x0006ac65) phob2_list_pane

0xef95,	// (0x0006ac6d) scroll_pane_cp034

0x99c1,	// (0x00065699) phob2_cc_data_pane_ParamLimits

0x99c1,	// (0x00065699) phob2_cc_data_pane

0x99db,	// (0x000656b3) phob2_cc_listscroll_pane_ParamLimits

0x99db,	// (0x000656b3) phob2_cc_listscroll_pane

0x99f5,	// (0x000656cd) list_double_large_graphic_phob2_pane_ParamLimits

0x99f5,	// (0x000656cd) list_double_large_graphic_phob2_pane

0x9a13,	// (0x000656eb) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9a13,	// (0x000656eb) list_double_large_graphic_phob2_pane_g1

0x9a29,	// (0x00065701) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x9a29,	// (0x00065701) list_double_large_graphic_phob2_pane_g2

0x0001,

0xfc18,	// (0x0006b8f0) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfc18,	// (0x0006b8f0) list_double_large_graphic_phob2_pane_g

0x9a35,	// (0x0006570d) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x9a35,	// (0x0006570d) list_double_large_graphic_phob2_pane_t1

0x9a4a,	// (0x00065722) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x9a4a,	// (0x00065722) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfc1d,	// (0x0006b8f5) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfc1d,	// (0x0006b8f5) list_double_large_graphic_phob2_pane_t

0x9c4f,	// (0x00065927) list_highlight_pane_cp024

0x9a5c,	// (0x00065734) phob2_cc_button_pane

0x9a64,	// (0x0006573c) phob2_cc_data_pane_g1_ParamLimits

0x9a64,	// (0x0006573c) phob2_cc_data_pane_g1

0x9a70,	// (0x00065748) phob2_cc_data_pane_g2_ParamLimits

0x9a70,	// (0x00065748) phob2_cc_data_pane_g2

0x0001,

0xfc22,	// (0x0006b8fa) phob2_cc_data_pane_g_ParamLimits

0xfc22,	// (0x0006b8fa) phob2_cc_data_pane_g

0x9a7c,	// (0x00065754) phob2_cc_data_pane_t1_ParamLimits

0x9a7c,	// (0x00065754) phob2_cc_data_pane_t1

0x9a8e,	// (0x00065766) phob2_cc_data_pane_t2_ParamLimits

0x9a8e,	// (0x00065766) phob2_cc_data_pane_t2

0x9aa0,	// (0x00065778) phob2_cc_data_pane_t3_ParamLimits

0x9aa0,	// (0x00065778) phob2_cc_data_pane_t3

0x0002,

0xfc27,	// (0x0006b8ff) phob2_cc_data_pane_t_ParamLimits

0xfc27,	// (0x0006b8ff) phob2_cc_data_pane_t

0xef9d,	// (0x0006ac75) phob2_cc_list_pane_ParamLimits

0xef9d,	// (0x0006ac75) phob2_cc_list_pane

0xda4d,	// (0x00069725) scroll_pane_cp035_ParamLimits

0xda4d,	// (0x00069725) scroll_pane_cp035

0xa4ce,	// (0x000661a6) bg_button_pane_cp033

0xefa9,	// (0x0006ac81) phob2_cc_button_pane_g1

0xefb5,	// (0x0006ac8d) phob2_cc_button_pane_t1

0xefca,	// (0x0006aca2) phob2_cc_button_pane_t2

0x0001,

0xfc2e,	// (0x0006b906) phob2_cc_button_pane_t

0x9ab2,	// (0x0006578a) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9ab2,	// (0x0006578a) list_double_large_graphic_phob2_cc_pane

0x9ad9,	// (0x000657b1) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9ad9,	// (0x000657b1) list_double_large_graphic_phob2_cc_pane_g1

0xa4f7,	// (0x000661cf) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xa4f7,	// (0x000661cf) list_double_large_graphic_phob2_cc_pane_g2

0x9aea,	// (0x000657c2) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x9aea,	// (0x000657c2) list_double_large_graphic_phob2_cc_pane_g3

0x9af6,	// (0x000657ce) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x9af6,	// (0x000657ce) list_double_large_graphic_phob2_cc_pane_g4

0x9b02,	// (0x000657da) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x9b02,	// (0x000657da) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfc33,	// (0x0006b90b) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfc33,	// (0x0006b90b) list_double_large_graphic_phob2_cc_pane_g

0x9b0e,	// (0x000657e6) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x9b0e,	// (0x000657e6) list_double_large_graphic_phob2_cc_pane_t1

0x9b37,	// (0x0006580f) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x9b37,	// (0x0006580f) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfc3e,	// (0x0006b916) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfc3e,	// (0x0006b916) list_double_large_graphic_phob2_cc_pane_t

0xefdc,	// (0x0006acb4) list_highlight_pane_cp025_ParamLimits

0xefdc,	// (0x0006acb4) list_highlight_pane_cp025

0xa4ce,	// (0x000661a6) bg_button_pane_cp033_ParamLimits

0xefa9,	// (0x0006ac81) phob2_cc_button_pane_g1_ParamLimits

0xefb5,	// (0x0006ac8d) phob2_cc_button_pane_t1_ParamLimits

0xefca,	// (0x0006aca2) phob2_cc_button_pane_t2_ParamLimits

0xfc2e,	// (0x0006b906) phob2_cc_button_pane_t_ParamLimits

0x119c,	// (0x0005ce74) popup_wgtman_window

0xd813,	// (0x000694eb) scroll_pane_cp038

0x9541,	// (0x00065219) wgtman_btn_pane_cp_01_ParamLimits

0x9541,	// (0x00065219) wgtman_btn_pane_cp_01

0xefea,	// (0x0006acc2) wgtman_content_pane

0xeff3,	// (0x0006accb) wgtman_heading_pane

0x9c4f,	// (0x00065927) bg_heading_pane_cp02

0xeffc,	// (0x0006acd4) wgtman_heading_pane_g1

0xf004,	// (0x0006acdc) wgtman_heading_pane_t1

0xf012,	// (0x0006acea) scroll_pane_cp036

0xf01a,	// (0x0006acf2) wgtman_list_pane

0xf022,	// (0x0006acfa) wgtman_list_pane_t1_ParamLimits

0xf022,	// (0x0006acfa) wgtman_list_pane_t1

0x6387,	// (0x0006205f) cam4_grid_pane

0x7113,	// (0x00062deb) bg_button_pane_cp015_ParamLimits

0x7125,	// (0x00062dfd) bg_button_pane_cp016_ParamLimits

0x7138,	// (0x00062e10) bg_button_pane_cp017_ParamLimits

0x718e,	// (0x00062e66) popup_vitu2_query_window_g3_ParamLimits

0x718e,	// (0x00062e66) popup_vitu2_query_window_g3

0x7249,	// (0x00062f21) popup_vitu2_query_window_t6_ParamLimits

0x7249,	// (0x00062f21) popup_vitu2_query_window_t6

0x7274,	// (0x00062f4c) popup_vitu2_query_window_t7_ParamLimits

0x7274,	// (0x00062f4c) popup_vitu2_query_window_t7

0xe757,	// (0x0006a42f) cam4_grid_pane_g1

0xe760,	// (0x0006a438) cam4_grid_pane_g2

0xf03c,	// (0x0006ad14) cam4_grid_pane_g3

0xf045,	// (0x0006ad1d) cam4_grid_pane_g4

0x0003,

0xfc43,	// (0x0006b91b) cam4_grid_pane_g

0x213d,	// (0x0005de15) aid_placing_vt_slider_lsc_ParamLimits

0x2489,	// (0x0005e161) vidtel_button_pane_ParamLimits

0x2489,	// (0x0005e161) vidtel_button_pane

0xf050,	// (0x0006ad28) bg_button_pane_cp034

0x9b60,	// (0x00065838) vidtel_button_pane_g1

0xf05a,	// (0x0006ad32) vidtel_button_pane_t1

0xd915,	// (0x000695ed) aid_size_vtel_slider_touch

0xda4d,	// (0x00069725) scroll_pane_cp039

0xe1f5,	// (0x00069ecd) ncim_query_button_pane_cp01_ParamLimits

0xe214,	// (0x00069eec) ncimui_query_pane_g1_ParamLimits

0xa4ce,	// (0x000661a6) input_focus_pane_cp012_ParamLimits

0xe239,	// (0x00069f11) ncim_query_entry_pane_t1_ParamLimits

0xda4d,	// (0x00069725) scroll_pane_cp039_ParamLimits

0xb306,	// (0x00066fde) navi_pane_bcale_mc_g1

0xb30e,	// (0x00066fe6) navi_pane_bcale_mc_t1

0xe7b2,	// (0x0006a48a) main_sp_fs_email_pane_g1

0xe7be,	// (0x0006a496) main_sp_fs_email_pane_g2

0x0001,

0x0bde,	// (0x0005c8b6) main_sp_fs_email_pane_g

0xea05,	// (0x0006a6dd) list_single_cale_mrui_row_pane_g3_ParamLimits

0xea05,	// (0x0006a6dd) list_single_cale_mrui_row_pane_g3

0x9199,	// (0x00064e71) list_single_recal_day_pane_g5_event_pane

0xa485,	// (0x0006615d) list_single_recal_day_pane_g7

0xf068,	// (0x0006ad40) list_recal_day_event_pane_cp01

0xf071,	// (0x0006ad49) list_recal_vselct_arw_lo_pane_cp01

0xf079,	// (0x0006ad51) list_recal_vselct_arw_up_pane_cp01

0xf081,	// (0x0006ad59) list_recal_vselct_pane_cp01

0xd937,	// (0x0006960f) list_recal_day_event_pane_cp01_g1

0xa503,	// (0x000661db) list_recal_day_event_pane_cp01_t1

0xa48d,	// (0x00066165) list_single_recal_day_pane_t1_ParamLimits

0xa4dc,	// (0x000661b4) list_single_recal_day_pane_t2_ParamLimits

0xfb4e,	// (0x0006b826) list_single_recal_day_pane_t_ParamLimits

0xa76c,	// (0x00066444) bg_notes_pane_ParamLimits

0xa80f,	// (0x000664e7) list_notes_pane_ParamLimits

0x1504,	// (0x0005d1dc) scroll_pane_cp06_ParamLimits

0xa831,	// (0x00066509) main_notes_pane_ParamLimits

0x9c4f,	// (0x00065927) main_welc_pane

0x9b68,	// (0x00065840) main_welc_body_pane_ParamLimits

0x9b68,	// (0x00065840) main_welc_body_pane

0x9b82,	// (0x0006585a) main_welc_opti_pane_ParamLimits

0x9b82,	// (0x0006585a) main_welc_opti_pane

0x9bb5,	// (0x0006588d) main_welc_pane_t1_ParamLimits

0x9bb5,	// (0x0006588d) main_welc_pane_t1

0x9bcf,	// (0x000658a7) main_welc_body_row_pane_ParamLimits

0x9bcf,	// (0x000658a7) main_welc_body_row_pane

0xe6d5,	// (0x0006a3ad) main_welc_opti_row_pane_ParamLimits

0xe6d5,	// (0x0006a3ad) main_welc_opti_row_pane

0xf08b,	// (0x0006ad63) main_welc_opti_row_pane_g1

0x9bf4,	// (0x000658cc) main_welc_opti_row_pane_t1

0xf093,	// (0x0006ad6b) main_welc_body_row_pane_t1

0xed78,	// (0x0006aa50) popup_notif_wgt_heading_pane

0xed92,	// (0x0006aa6a) aid_size_list_notif_wgt_del_ParamLimits

0xed9f,	// (0x0006aa77) list_notif_wgt_row_pane_g1_ParamLimits

0xedab,	// (0x0006aa83) list_notif_wgt_row_pane_g2_ParamLimits

0xedbf,	// (0x0006aa97) list_notif_wgt_row_pane_g3_ParamLimits

0xfb9d,	// (0x0006b875) list_notif_wgt_row_pane_g_ParamLimits

0xedcc,	// (0x0006aaa4) list_notif_wgt_row_pane_t1_ParamLimits

0xede2,	// (0x0006aaba) list_notif_wgt_row_pane_t2_ParamLimits

0xedf4,	// (0x0006aacc) list_notif_wgt_row_pane_t3_ParamLimits

0xfba4,	// (0x0006b87c) list_notif_wgt_row_pane_t_ParamLimits

0x95d3,	// (0x000652ab) listrow_wgtman_pane_g1_ParamLimits

0x95e0,	// (0x000652b8) listrow_wgtman_pane_g2_ParamLimits

0xfbcd,	// (0x0006b8a5) listrow_wgtman_pane_g_ParamLimits

0x95fe,	// (0x000652d6) listrow_wgtman_pane_t1_ParamLimits

0x9616,	// (0x000652ee) listrow_wgtman_pane_t2_ParamLimits

0xfbd2,	// (0x0006b8aa) listrow_wgtman_pane_t_ParamLimits

0x963c,	// (0x00065314) wait_bar_pane_cp09_ParamLimits

0x9c4f,	// (0x00065927) bg_popup_heading_pane_cp02

0xf0a2,	// (0x0006ad7a) popup_notif_wgt_heading_pane_g1

0xf0aa,	// (0x0006ad82) popup_notif_wgt_heading_pane_t1

0x9c4f,	// (0x00065927) main_vids_pane

0x9c4f,	// (0x00065927) vids_listscroll_pane

0x9c03,	// (0x000658db) scroll_pane_cp040

0x9c4f,	// (0x00065927) vids_list_pane

0x9c0e,	// (0x000658e6) vids_list_double_pane_ParamLimits

0x9c0e,	// (0x000658e6) vids_list_double_pane

0x9c28,	// (0x00065900) vids_list_double_pane_g1

0x9c31,	// (0x00065909) vids_list_double_pane_t1

0x9c41,	// (0x00065919) vids_list_double_pane_t2

0x0001,

0xfc51,	// (0x0006b929) vids_list_double_pane_t

0x44bf,	// (0x00060197) main_ncimui_pane_ParamLimits

0x7efa,	// (0x00063bd2) main_ncimui_pane_g1_ParamLimits

0x7f06,	// (0x00063bde) main_ncimui_pane_g2_ParamLimits

0x7f06,	// (0x00063bde) main_ncimui_pane_g2

0x0001,

0xf9a1,	// (0x0006b679) main_ncimui_pane_g_ParamLimits

0xf9a1,	// (0x0006b679) main_ncimui_pane_g

0x9b9b,	// (0x00065873) main_welc_pane_g1_ParamLimits

0x9b9b,	// (0x00065873) main_welc_pane_g1

0x9ba7,	// (0x0006587f) main_welc_pane_g2_ParamLimits

0x9ba7,	// (0x0006587f) main_welc_pane_g2

0x0001,

0xfc4c,	// (0x0006b924) main_welc_pane_g_ParamLimits

0xfc4c,	// (0x0006b924) main_welc_pane_g

0xa76c,	// (0x00066444) listscroll_mce_pane_ParamLimits

0xb45b,	// (0x00067133) wait_bar_pane_cp10

0xc84f,	// (0x00068527) main_cale_day_pane_ParamLimits

0xc84f,	// (0x00068527) main_cale_week_pane_ParamLimits

0xa76c,	// (0x00066444) main_messa_pane_ParamLimits

0x57d9,	// (0x000614b1) main_clock2_btn_pane_ParamLimits

0x57d9,	// (0x000614b1) main_clock2_btn_pane

0xd083,	// (0x00068d5b) main_clock2_btn_pane_cp01_ParamLimits

0xd083,	// (0x00068d5b) main_clock2_btn_pane_cp01

0xe9d6,	// (0x0006a6ae) list_cale_mrui_pane_ParamLimits

0xee2a,	// (0x0006ab02) main_cf0_pane_g2

0x0001,

0xfbab,	// (0x0006b883) main_cf0_pane_g

0x97cd,	// (0x000654a5) area_left_week_number_pane_ParamLimits

0x97e0,	// (0x000654b8) area_top_day_name_pane_ParamLimits

0x97ee,	// (0x000654c6) frame_month_view_pane_ParamLimits

0xef52,	// (0x0006ac2a) grid_month_view_pane_ParamLimits

0xef60,	// (0x0006ac38) frm_month_g1_ParamLimits

0x986c,	// (0x00065544) frm_month_g2_ParamLimits

0x987d,	// (0x00065555) frm_month_g3_ParamLimits

0x988e,	// (0x00065566) frm_month_g4_ParamLimits

0x989f,	// (0x00065577) frm_month_g5_ParamLimits

0x98b2,	// (0x0006558a) frm_month_g6_ParamLimits

0x98c5,	// (0x0006559d) frm_month_g7_ParamLimits

0xef6d,	// (0x0006ac45) frm_month_g8_ParamLimits

0x98d8,	// (0x000655b0) frm_month_g9_ParamLimits

0x98e5,	// (0x000655bd) frm_month_g10_ParamLimits

0x98f2,	// (0x000655ca) frm_month_g11_ParamLimits

0x98ff,	// (0x000655d7) frm_month_g12_ParamLimits

0x990c,	// (0x000655e4) frm_month_g13_ParamLimits

0x9919,	// (0x000655f1) frm_month_g14_ParamLimits

0x9928,	// (0x00065600) frm_month_g15_ParamLimits

0x9937,	// (0x0006560f) frm_month_g16_ParamLimits

0xfbf7,	// (0x0006b8cf) frm_month_g_ParamLimits

0xef7a,	// (0x0006ac52) cell_top_day_name_pane_t1_ParamLimits

0x9946,	// (0x0006561e) cell_area_left_week_number_pane_g1_ParamLimits

0x9955,	// (0x0006562d) cell_area_left_week_number_pane_t1_ParamLimits

0xcedb,	// (0x00068bb3) cell_month_view_pane_g1_ParamLimits

0x996b,	// (0x00065643) cell_month_view_pane_t1_ParamLimits

0xa764,	// (0x0006643c) main_clock2_btn_pane_g1

0xf0b8,	// (0x0006ad90) main_clock2_btn_pane_t1

0xa4ce,	// (0x000661a6) listscroll_cmail_pane_ParamLimits

0xe7b2,	// (0x0006a48a) main_sp_fs_email_pane_g1_ParamLimits

0xe7be,	// (0x0006a496) main_sp_fs_email_pane_g2_ParamLimits

0x0bde,	// (0x0005c8b6) main_sp_fs_email_pane_g_ParamLimits

0xeae5,	// (0x0006a7bd) list_recal_day_pane_ParamLimits

0xeaf6,	// (0x0006a7ce) mian_recal_day_pane_t1

0x890e,	// (0x000645e6) list_single_dyc_row_text_pane_t4_ParamLimits

0x890e,	// (0x000645e6) list_single_dyc_row_text_pane_t4

0x8945,	// (0x0006461d) list_single_dyc_row_text_pane_t5_ParamLimits

0x8945,	// (0x0006461d) list_single_dyc_row_text_pane_t5

0xa246,	// (0x00065f1e) list_single_dyc_row_text_pane_t6_ParamLimits

0xa246,	// (0x00065f1e) list_single_dyc_row_text_pane_t6

0x3315,	// (0x0005efed) aid_mgn_list_cale_time_pane

0x44bf,	// (0x00060197) main_gallery2_pane_ParamLimits

0xd099,	// (0x00068d71) main_clock2_pane_cp01_t1

0xd0a9,	// (0x00068d81) main_clock2_pane_cp01_t3

0x0001,

0x06bd,	// (0x0005c395) main_clock2_pane_cp01_t

0x1954,	// (0x0005d62c) cale_week_scroll_pane_g16_ParamLimits

0x1954,	// (0x0005d62c) cale_week_scroll_pane_g16
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
	};

} // end of namespace AknLayoutScalable_Abrw_php_apps_qhd_prt_tch_Small
