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

#include "aknlayoutscalable_abrw_pnp4_apps_nhd4_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pnp4_apps_nhd4_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x0005c7f7 };

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
0x0cf2,	// (0x0005d4e9) Screen

0x0cfe,	// (0x0005d4f5) application_window

0x0d5a,	// (0x0005d551) area_bottom_pane_ParamLimits

0x0d5a,	// (0x0005d551) area_bottom_pane

0x0db3,	// (0x0005d5aa) area_top_pane_ParamLimits

0x0db3,	// (0x0005d5aa) area_top_pane

0x0e17,	// (0x0005d60e) call_video_uplink_pane_ParamLimits

0x0e17,	// (0x0005d60e) call_video_uplink_pane

0x0e56,	// (0x0005d64d) main_pane_ParamLimits

0x0e56,	// (0x0005d64d) main_pane

0xc7af,	// (0x00068fa6) context_pane

0x4355,	// (0x00060b4c) navi_pane

0x437b,	// (0x00060b72) popup_cale_events_window_ParamLimits

0x437b,	// (0x00060b72) popup_cale_events_window

0xc7c2,	// (0x00068fb9) popup_mup_playback_window

0x4393,	// (0x00060b8a) signal_pane

0xa730,	// (0x00066f27) main_browser_pane

0xb396,	// (0x00067b8d) main_burst_pane

0x41dd,	// (0x000609d4) main_calc_pane

0xc795,	// (0x00068f8c) main_cale_day_pane

0x15a1,	// (0x0005dd98) main_cale_month_pane

0xc795,	// (0x00068f8c) main_cale_week_pane

0xb396,	// (0x00067b8d) main_call_pane

0xa1b0,	// (0x000669a7) main_call_poc_pane

0xb396,	// (0x00067b8d) main_camera_pane

0xb396,	// (0x00067b8d) main_chi_dic_pane

0xb100,	// (0x000678f7) main_clock_pane

0xa1b0,	// (0x000669a7) main_fmradio_pane

0xb396,	// (0x00067b8d) main_graph_messa_pane

0xa1b0,	// (0x000669a7) main_help_pane

0xa730,	// (0x00066f27) main_im_pane

0xa5c3,	// (0x00066dba) main_image_pane_ParamLimits

0xa5c3,	// (0x00066dba) main_image_pane

0xa1b0,	// (0x000669a7) main_location2_pane

0xb396,	// (0x00067b8d) main_location_pane

0xa5c3,	// (0x00066dba) main_messa_pane

0xa1b0,	// (0x000669a7) main_mp2_pane

0xb396,	// (0x00067b8d) main_mp_pane

0xa1b0,	// (0x000669a7) main_msg_pane

0xa1b0,	// (0x000669a7) main_mup_eq_pane

0xa1b0,	// (0x000669a7) main_mup_pane

0xa730,	// (0x00066f27) main_notes_pane

0xa1b0,	// (0x000669a7) main_pec_pane

0xa1b0,	// (0x000669a7) main_phob_pane

0xa1b0,	// (0x000669a7) main_pinb_pane

0xa1b0,	// (0x000669a7) main_postcard_pane

0xa1b0,	// (0x000669a7) main_qdial_pane

0xb396,	// (0x00067b8d) main_skin_pane

0xa1b0,	// (0x000669a7) main_smil2_pane

0xb396,	// (0x00067b8d) main_smil_pane

0xb396,	// (0x00067b8d) main_video_pane

0xb396,	// (0x00067b8d) main_video_tele_pane

0xa5c3,	// (0x00066dba) main_viewer_pane_ParamLimits

0xa5c3,	// (0x00066dba) main_viewer_pane

0xb396,	// (0x00067b8d) main_vorec_pane

0x4229,	// (0x00060a20) popup_blid_sat_info_window_ParamLimits

0x4229,	// (0x00060a20) popup_blid_sat_info_window

0x4249,	// (0x00060a40) popup_dyc_status_message_window_ParamLimits

0x4249,	// (0x00060a40) popup_dyc_status_message_window

0x4257,	// (0x00060a4e) popup_grid_large_graphic_window_ParamLimits

0x4257,	// (0x00060a4e) popup_grid_large_graphic_window

0x42e6,	// (0x00060add) popup_loc_request_window_ParamLimits

0x42e6,	// (0x00060add) popup_loc_request_window

0x432d,	// (0x00060b24) popup_wml_address_window_ParamLimits

0x432d,	// (0x00060b24) popup_wml_address_window

0x40b5,	// (0x000608ac) call_muted_g1

0x3d73,	// (0x0006056a) popup_call_audio_conf_window_ParamLimits

0x3d73,	// (0x0006056a) popup_call_audio_conf_window

0x40c5,	// (0x000608bc) popup_call_audio_first_window_ParamLimits

0x40c5,	// (0x000608bc) popup_call_audio_first_window

0x4105,	// (0x000608fc) popup_call_audio_in_window_ParamLimits

0x4105,	// (0x000608fc) popup_call_audio_in_window

0x4129,	// (0x00060920) popup_call_audio_out_window_ParamLimits

0x4129,	// (0x00060920) popup_call_audio_out_window

0x414b,	// (0x00060942) popup_call_audio_second_window_ParamLimits

0x414b,	// (0x00060942) popup_call_audio_second_window

0x417b,	// (0x00060972) popup_call_audio_wait_window_ParamLimits

0x417b,	// (0x00060972) popup_call_audio_wait_window

0x419c,	// (0x00060993) popup_number_entry_window_ParamLimits

0x419c,	// (0x00060993) popup_number_entry_window

0x9819,	// (0x00066010) bg_popup_call_pane_cp05_ParamLimits

0x9819,	// (0x00066010) bg_popup_call_pane_cp05

0x9839,	// (0x00066030) popup_number_entry_window_t1

0x984c,	// (0x00066043) popup_number_entry_window_t2

0x985e,	// (0x00066055) popup_number_entry_window_t3

0x0003,

0xf0c6,	// (0x0006b8bd) popup_number_entry_window_t

0x9870,	// (0x00066067) text_title_cp2

0x9883,	// (0x0006607a) bg_popup_call_pane_cp_ParamLimits

0x9883,	// (0x0006607a) bg_popup_call_pane_cp

0x9891,	// (0x00066088) call_thumbnail_pane

0x9899,	// (0x00066090) popup_call_audio_in_window_g1_ParamLimits

0x9899,	// (0x00066090) popup_call_audio_in_window_g1

0x98a5,	// (0x0006609c) popup_call_audio_in_window_g2_ParamLimits

0x98a5,	// (0x0006609c) popup_call_audio_in_window_g2

0x98b1,	// (0x000660a8) popup_call_audio_in_window_g3_ParamLimits

0x98b1,	// (0x000660a8) popup_call_audio_in_window_g3

0x0002,

0xf0cf,	// (0x0006b8c6) popup_call_audio_in_window_g_ParamLimits

0xf0cf,	// (0x0006b8c6) popup_call_audio_in_window_g

0x98bd,	// (0x000660b4) popup_call_audio_in_window_t1_ParamLimits

0x98bd,	// (0x000660b4) popup_call_audio_in_window_t1

0x98d9,	// (0x000660d0) popup_call_audio_in_window_t2_ParamLimits

0x98d9,	// (0x000660d0) popup_call_audio_in_window_t2

0x98f5,	// (0x000660ec) popup_call_audio_in_window_t3_ParamLimits

0x98f5,	// (0x000660ec) popup_call_audio_in_window_t3

0x0002,

0xf0d6,	// (0x0006b8cd) popup_call_audio_in_window_t_ParamLimits

0xf0d6,	// (0x0006b8cd) popup_call_audio_in_window_t

0x9883,	// (0x0006607a) bg_popup_call_pane_cp01_ParamLimits

0x9883,	// (0x0006607a) bg_popup_call_pane_cp01

0x9891,	// (0x00066088) call_thumbnail_pane_cp02

0x9908,	// (0x000660ff) call_type_pane_cp022

0x9910,	// (0x00066107) popup_call_audio_out_window_g1_ParamLimits

0x9910,	// (0x00066107) popup_call_audio_out_window_g1

0x9922,	// (0x00066119) popup_call_audio_out_window_g2_ParamLimits

0x9922,	// (0x00066119) popup_call_audio_out_window_g2

0x992e,	// (0x00066125) popup_call_audio_out_window_g3_ParamLimits

0x992e,	// (0x00066125) popup_call_audio_out_window_g3

0x0002,

0xf0dd,	// (0x0006b8d4) popup_call_audio_out_window_g_ParamLimits

0xf0dd,	// (0x0006b8d4) popup_call_audio_out_window_g

0x9940,	// (0x00066137) popup_call_audio_out_window_t1_ParamLimits

0x9940,	// (0x00066137) popup_call_audio_out_window_t1

0x9958,	// (0x0006614f) popup_call_audio_out_window_t2_ParamLimits

0x9958,	// (0x0006614f) popup_call_audio_out_window_t2

0x0001,

0xf0e4,	// (0x0006b8db) popup_call_audio_out_window_t_ParamLimits

0xf0e4,	// (0x0006b8db) popup_call_audio_out_window_t

0x996d,	// (0x00066164) bg_popup_call_pane_ParamLimits

0x996d,	// (0x00066164) bg_popup_call_pane

0x1072,	// (0x0005d869) call_thumbnail_pane_cp_ParamLimits

0x1072,	// (0x0005d869) call_thumbnail_pane_cp

0x99f1,	// (0x000661e8) call_type_pane_cp01_ParamLimits

0x99f1,	// (0x000661e8) call_type_pane_cp01

0x9a35,	// (0x0006622c) popup_call_audio_first_window_g1_ParamLimits

0x9a35,	// (0x0006622c) popup_call_audio_first_window_g1

0x9a81,	// (0x00066278) popup_call_audio_first_window_g2_ParamLimits

0x9a81,	// (0x00066278) popup_call_audio_first_window_g2

0x0001,

0xf0e9,	// (0x0006b8e0) popup_call_audio_first_window_g_ParamLimits

0xf0e9,	// (0x0006b8e0) popup_call_audio_first_window_g

0x9ac5,	// (0x000662bc) popup_call_audio_first_window_t1_ParamLimits

0x9ac5,	// (0x000662bc) popup_call_audio_first_window_t1

0x9b71,	// (0x00066368) popup_call_audio_first_window_t4_ParamLimits

0x9b71,	// (0x00066368) popup_call_audio_first_window_t4

0x9bfd,	// (0x000663f4) popup_call_audio_first_window_t5_ParamLimits

0x9bfd,	// (0x000663f4) popup_call_audio_first_window_t5

0x0002,

0xf0ee,	// (0x0006b8e5) popup_call_audio_first_window_t_ParamLimits

0xf0ee,	// (0x0006b8e5) popup_call_audio_first_window_t

0xa1b0,	// (0x000669a7) bg_popup_call_pane_cp02

0xa1ba,	// (0x000669b1) call_type_pane_cp023

0xa1c2,	// (0x000669b9) popup_call_audio_wait_window_g1

0xa1ca,	// (0x000669c1) popup_call_audio_wait_window_g2

0x0001,

0xf0f5,	// (0x0006b8ec) popup_call_audio_wait_window_g

0xa1d2,	// (0x000669c9) popup_call_audio_wait_window_t3

0xa1e0,	// (0x000669d7) bg_popup_call_pane_cp03_ParamLimits

0xa1e0,	// (0x000669d7) bg_popup_call_pane_cp03

0xa240,	// (0x00066a37) call_thumbnail_pane_cp011_ParamLimits

0xa240,	// (0x00066a37) call_thumbnail_pane_cp011

0xa24c,	// (0x00066a43) call_type_pane_cp034_ParamLimits

0xa24c,	// (0x00066a43) call_type_pane_cp034

0xa440,	// (0x00066c37) popup_call_audio_second_window_g1_ParamLimits

0xa440,	// (0x00066c37) popup_call_audio_second_window_g1

0xa47c,	// (0x00066c73) popup_call_audio_second_window_g2_ParamLimits

0xa47c,	// (0x00066c73) popup_call_audio_second_window_g2

0x0001,

0xf0fa,	// (0x0006b8f1) popup_call_audio_second_window_g_ParamLimits

0xf0fa,	// (0x0006b8f1) popup_call_audio_second_window_g

0xa4b8,	// (0x00066caf) popup_call_audio_second_window_t1_ParamLimits

0xa4b8,	// (0x00066caf) popup_call_audio_second_window_t1

0xa539,	// (0x00066d30) popup_call_audio_second_window_t2_ParamLimits

0xa539,	// (0x00066d30) popup_call_audio_second_window_t2

0xa56f,	// (0x00066d66) popup_call_audio_second_window_t3_ParamLimits

0xa56f,	// (0x00066d66) popup_call_audio_second_window_t3

0x0002,

0xf0ff,	// (0x0006b8f6) popup_call_audio_second_window_t_ParamLimits

0xf0ff,	// (0x0006b8f6) popup_call_audio_second_window_t

0xa1b0,	// (0x000669a7) bg_popup_call_pane_cp04

0xa5a5,	// (0x00066d9c) list_conf_pane

0xa5ad,	// (0x00066da4) popup_call_audio_conf_window_t1

0xa5bb,	// (0x00066db2) call_thumbnail_pane_g1

0xa5c3,	// (0x00066dba) bg_pinb_pane_ParamLimits

0xa5c3,	// (0x00066dba) bg_pinb_pane

0xa5d1,	// (0x00066dc8) find_pinb_pane

0xa5da,	// (0x00066dd1) listscroll_pinb_pane_ParamLimits

0xa5da,	// (0x00066dd1) listscroll_pinb_pane

0xa5e9,	// (0x00066de0) pinb_bg_pane_g1

0x1096,	// (0x0005d88d) pinb_bg_pane_g2

0x10a2,	// (0x0005d899) pinb_bg_pane_g3

0x10ae,	// (0x0005d8a5) pinb_bg_pane_g4

0x10ba,	// (0x0005d8b1) pinb_bg_pane_g5

0x10c6,	// (0x0005d8bd) pinb_bg_pane_g6

0x10d1,	// (0x0005d8c8) pinb_bg_pane_g7

0x10dc,	// (0x0005d8d3) pinb_bg_pane_g8

0x10e7,	// (0x0005d8de) pinb_bg_pane_g9

0x10f1,	// (0x0005d8e8) pinb_bg_pane_g10

0x0009,

0xf106,	// (0x0006b8fd) pinb_bg_pane_g

0x110e,	// (0x0005d905) grid_pinb_pane

0x1119,	// (0x0005d910) list_pinb_pane

0x1124,	// (0x0005d91b) scroll_pane_cp01_ParamLimits

0x1124,	// (0x0005d91b) scroll_pane_cp01

0xa5f3,	// (0x00066dea) find_pinb_pane_g1_ParamLimits

0xa5f3,	// (0x00066dea) find_pinb_pane_g1

0xa60b,	// (0x00066e02) find_pinb_pane_t1

0xa61d,	// (0x00066e14) find_pinb_pane_t2

0x0001,

0xf120,	// (0x0006b917) find_pinb_pane_t

0xa632,	// (0x00066e29) input_focus_pane_cp01_ParamLimits

0xa632,	// (0x00066e29) input_focus_pane_cp01

0x1136,	// (0x0005d92d) cell_pinb_pane_ParamLimits

0x1136,	// (0x0005d92d) cell_pinb_pane

0xa6c7,	// (0x00066ebe) cell_pinb_pane_g1_ParamLimits

0xa6c7,	// (0x00066ebe) cell_pinb_pane_g1

0xa6da,	// (0x00066ed1) cell_pinb_pane_g2_ParamLimits

0xa6da,	// (0x00066ed1) cell_pinb_pane_g2

0xa6e6,	// (0x00066edd) cell_pinb_pane_g3_ParamLimits

0xa6e6,	// (0x00066edd) cell_pinb_pane_g3

0x0002,

0xf125,	// (0x0006b91c) cell_pinb_pane_g_ParamLimits

0xf125,	// (0x0006b91c) cell_pinb_pane_g

0xa1b0,	// (0x000669a7) grid_highlight_pane_cp01

0x1165,	// (0x0005d95c) list_pinb_item_pane_ParamLimits

0x1165,	// (0x0005d95c) list_pinb_item_pane

0xa1b0,	// (0x000669a7) list_highlight_pane_cp02

0x118f,	// (0x0005d986) list_pinb_item_pane_g1_ParamLimits

0x118f,	// (0x0005d986) list_pinb_item_pane_g1

0x119c,	// (0x0005d993) list_pinb_item_pane_g2_ParamLimits

0x119c,	// (0x0005d993) list_pinb_item_pane_g2

0x11a8,	// (0x0005d99f) list_pinb_item_pane_g3_ParamLimits

0x11a8,	// (0x0005d99f) list_pinb_item_pane_g3

0x11b9,	// (0x0005d9b0) list_pinb_item_pane_g4_ParamLimits

0x11b9,	// (0x0005d9b0) list_pinb_item_pane_g4

0x0003,

0xf12c,	// (0x0006b923) list_pinb_item_pane_g_ParamLimits

0xf12c,	// (0x0006b923) list_pinb_item_pane_g

0x11c5,	// (0x0005d9bc) list_pinb_item_pane_t1_ParamLimits

0x11c5,	// (0x0005d9bc) list_pinb_item_pane_t1

0x11f6,	// (0x0005d9ed) calc_display_pane

0x1214,	// (0x0005da0b) calc_paper_pane

0x1230,	// (0x0005da27) grid_calc_pane

0xa1b0,	// (0x000669a7) bg_list_pane_cp01

0x125c,	// (0x0005da53) clock_g1

0x1264,	// (0x0005da5b) clock_g2

0x0001,

0xf135,	// (0x0006b92c) clock_g

0x126e,	// (0x0005da65) clock_t1_ParamLimits

0x126e,	// (0x0005da65) clock_t1

0x1283,	// (0x0005da7a) clock_t2_ParamLimits

0x1283,	// (0x0005da7a) clock_t2

0x1295,	// (0x0005da8c) clock_t3_ParamLimits

0x1295,	// (0x0005da8c) clock_t3

0x12a7,	// (0x0005da9e) clock_t4_ParamLimits

0x12a7,	// (0x0005da9e) clock_t4

0x12b9,	// (0x0005dab0) clock_t5_ParamLimits

0x12b9,	// (0x0005dab0) clock_t5

0x12ce,	// (0x0005dac5) clock_t6_ParamLimits

0x12ce,	// (0x0005dac5) clock_t6

0x12e0,	// (0x0005dad7) clock_t7_ParamLimits

0x12e0,	// (0x0005dad7) clock_t7

0x12f2,	// (0x0005dae9) clock_t8_ParamLimits

0x12f2,	// (0x0005dae9) clock_t8

0x1308,	// (0x0005daff) clock_t9_ParamLimits

0x1308,	// (0x0005daff) clock_t9

0x0008,

0xf13a,	// (0x0006b931) clock_t_ParamLimits

0xf13a,	// (0x0006b931) clock_t

0xa6f2,	// (0x00066ee9) popup_clock_analogue_window_cp02

0xa6f2,	// (0x00066ee9) popup_clock_digital_window_cp01

0xa6fa,	// (0x00066ef1) listscroll_help_pane

0xa1b0,	// (0x000669a7) phob_pre_status_pane

0xa704,	// (0x00066efb) grid_qdial_pane

0xa5c3,	// (0x00066dba) listscroll_mce_pane

0xa5c3,	// (0x00066dba) bg_notes_pane

0xa70e,	// (0x00066f05) list_notes_pane

0x131e,	// (0x0005db15) scroll_pane_cp06

0xa71c,	// (0x00066f13) bg_calc_paper_pane

0x132d,	// (0x0005db24) list_calc_pane

0xa730,	// (0x00066f27) bg_calc_display_pane

0x1347,	// (0x0005db3e) calc_display_pane_t1

0x135c,	// (0x0005db53) calc_display_pane_t2

0x1371,	// (0x0005db68) calc_display_pane_t3

0x0002,

0xf14d,	// (0x0006b944) calc_display_pane_t

0x1383,	// (0x0005db7a) cell_calc_pane_ParamLimits

0x1383,	// (0x0005db7a) cell_calc_pane

0xa73c,	// (0x00066f33) bg_calc_paper_pane_g1

0xa748,	// (0x00066f3f) bg_calc_paper_pane_g2

0xa754,	// (0x00066f4b) bg_calc_paper_pane_g3

0xa760,	// (0x00066f57) bg_calc_paper_pane_g4

0xa76c,	// (0x00066f63) bg_calc_paper_pane_g5

0x13b0,	// (0x0005dba7) bg_calc_paper_pane_g6

0x13c1,	// (0x0005dbb8) bg_calc_paper_pane_g7

0x13d2,	// (0x0005dbc9) bg_calc_paper_pane_g8

0x0007,

0xf154,	// (0x0006b94b) bg_calc_paper_pane_g

0x13e3,	// (0x0005dbda) calc_bg_paper_pane_g9

0x13f4,	// (0x0005dbeb) list_calc_item_pane_ParamLimits

0x13f4,	// (0x0005dbeb) list_calc_item_pane

0xa778,	// (0x00066f6f) list_calc_item_pane_g1

0x1428,	// (0x0005dc1f) list_calc_item_pane_t1_ParamLimits

0x1428,	// (0x0005dc1f) list_calc_item_pane_t1

0x143a,	// (0x0005dc31) list_calc_item_pane_t2_ParamLimits

0x143a,	// (0x0005dc31) list_calc_item_pane_t2

0x0001,

0xf165,	// (0x0006b95c) list_calc_item_pane_t_ParamLimits

0xf165,	// (0x0006b95c) list_calc_item_pane_t

0xa785,	// (0x00066f7c) cell_calc_pane_g1

0xa78f,	// (0x00066f86) grid_highlight_pane_cp02

0xa7b1,	// (0x00066fa8) bg_calc_display_pane_g1

0x146a,	// (0x0005dc61) bg_calc_display_pane_g2

0xa7ba,	// (0x00066fb1) bg_calc_display_pane_g3

0x0002,

0xf16f,	// (0x0006b966) bg_calc_display_pane_g

0x1474,	// (0x0005dc6b) cell_qdial_pane_ParamLimits

0x1474,	// (0x0005dc6b) cell_qdial_pane

0x1488,	// (0x0005dc7f) cell_qdial_pane_g1_ParamLimits

0x1488,	// (0x0005dc7f) cell_qdial_pane_g1

0x1495,	// (0x0005dc8c) cell_qdial_pane_g2_ParamLimits

0x1495,	// (0x0005dc8c) cell_qdial_pane_g2

0xa7c3,	// (0x00066fba) cell_qdial_pane_g3_ParamLimits

0xa7c3,	// (0x00066fba) cell_qdial_pane_g3

0x0003,

0xf176,	// (0x0006b96d) cell_qdial_pane_g_ParamLimits

0xf176,	// (0x0006b96d) cell_qdial_pane_g

0x14b2,	// (0x0005dca9) cell_qdial_pane_t1_ParamLimits

0x14b2,	// (0x0005dca9) cell_qdial_pane_t1

0x14ca,	// (0x0005dcc1) cell_qdial_pane_t2_ParamLimits

0x14ca,	// (0x0005dcc1) cell_qdial_pane_t2

0x14dd,	// (0x0005dcd4) cell_qdial_pane_t3_ParamLimits

0x14dd,	// (0x0005dcd4) cell_qdial_pane_t3

0x0002,

0xf17f,	// (0x0006b976) cell_qdial_pane_t_ParamLimits

0xf17f,	// (0x0006b976) cell_qdial_pane_t

0xa1b0,	// (0x000669a7) grid_highlight_pane_cp04

0xa7cf,	// (0x00066fc6) thumbnail_qdial_pane_ParamLimits

0xa7cf,	// (0x00066fc6) thumbnail_qdial_pane

0xa82b,	// (0x00067022) list_help_pane

0xa834,	// (0x0006702b) scroll_pane_cp02

0x14f0,	// (0x0005dce7) help_list_pane_t1_ParamLimits

0x14f0,	// (0x0005dce7) help_list_pane_t1

0x152a,	// (0x0005dd21) bg_notes_pane_g2

0x1532,	// (0x0005dd29) bg_notes_pane_g3

0x153a,	// (0x0005dd31) notes_bg_pane_g1

0x1542,	// (0x0005dd39) notes_bg_pane_g4

0x154a,	// (0x0005dd41) notes_bg_pane_g5

0x1552,	// (0x0005dd49) notes_bg_pane_g6

0x155a,	// (0x0005dd51) notes_bg_pane_g7

0x1562,	// (0x0005dd59) notes_bg_pane_g8

0x156a,	// (0x0005dd61) notes_bg_pane_g9

0x0006,

0xf19d,	// (0x0006b994) notes_bg_pane_g

0x1572,	// (0x0005dd69) list_notes_text_pane_ParamLimits

0x1572,	// (0x0005dd69) list_notes_text_pane

0xa83d,	// (0x00067034) list_notes_text_pane_g1

0x9c2c,	// (0x00066423) list_notes_text_pane_t1

0x15a1,	// (0x0005dd98) listscroll_cale_week_pane

0x15c6,	// (0x0005ddbd) bg_cale_heading_pane

0xa860,	// (0x00067057) bg_cale_pane_cp01

0x15e8,	// (0x0005dddf) cale_week_corner_pane

0x1602,	// (0x0005ddf9) cale_week_day_heading_pane

0x1624,	// (0x0005de1b) cale_week_scroll_pane_g1

0x1641,	// (0x0005de38) cale_week_scroll_pane_g2

0x1654,	// (0x0005de4b) cale_week_scroll_pane_g3

0x1667,	// (0x0005de5e) cale_week_scroll_pane_g4

0x167a,	// (0x0005de71) cale_week_scroll_pane_g5

0x168d,	// (0x0005de84) cale_week_scroll_pane_g6

0x16a0,	// (0x0005de97) cale_week_scroll_pane_g7

0x16b3,	// (0x0005deaa) cale_week_scroll_pane_g8

0x16c8,	// (0x0005debf) cale_week_scroll_pane_g9

0x16db,	// (0x0005ded2) cale_week_scroll_pane_g10

0x16ee,	// (0x0005dee5) cale_week_scroll_pane_g11

0x1701,	// (0x0005def8) cale_week_scroll_pane_g12

0x1718,	// (0x0005df0f) cale_week_scroll_pane_g13

0x1733,	// (0x0005df2a) cale_week_scroll_pane_g14

0x174e,	// (0x0005df45) cale_week_scroll_pane_g15

0x000f,

0xf1ac,	// (0x0006b9a3) cale_week_scroll_pane_g

0x177e,	// (0x0005df75) cale_week_time_pane

0x1793,	// (0x0005df8a) grid_cale_week_pane

0xa890,	// (0x00067087) scroll_pane_cp08

0x17b4,	// (0x0005dfab) cell_cale_week_pane_ParamLimits

0x17b4,	// (0x0005dfab) cell_cale_week_pane

0x1818,	// (0x0005e00f) cale_week_day_heading_pane_t1

0x1853,	// (0x0005e04a) cale_week_day_heading_pane_t2

0x188e,	// (0x0005e085) cale_week_day_heading_pane_t3

0x18c9,	// (0x0005e0c0) cale_week_day_heading_pane_t4

0x1904,	// (0x0005e0fb) cale_week_day_heading_pane_t5

0x193f,	// (0x0005e136) cale_week_day_heading_pane_t6

0x197a,	// (0x0005e171) cale_week_day_heading_pane_t7

0x0006,

0xf1cd,	// (0x0006b9c4) cale_week_day_heading_pane_t

0xa8ad,	// (0x000670a4) bg_cale_side_pane

0x19b5,	// (0x0005e1ac) cale_week_time_pane_t1

0x19cf,	// (0x0005e1c6) cale_week_time_pane_t2

0x19e9,	// (0x0005e1e0) cale_week_time_pane_t3

0x1a03,	// (0x0005e1fa) cale_week_time_pane_t4

0x1a1d,	// (0x0005e214) cale_week_time_pane_t5

0x1a39,	// (0x0005e230) cale_week_time_pane_t6

0x1a5b,	// (0x0005e252) cale_week_time_pane_t7

0x1a7f,	// (0x0005e276) cale_week_time_pane_t8

0x0007,

0xf1dc,	// (0x0006b9d3) cale_week_time_pane_t

0x1aa5,	// (0x0005e29c) cell_cale_week_pane_g2

0x1ac9,	// (0x0005e2c0) cell_cale_week_pane_g3_ParamLimits

0x1ac9,	// (0x0005e2c0) cell_cale_week_pane_g3

0xa8bb,	// (0x000670b2) grid_highlight_pane_cp07

0xa8c3,	// (0x000670ba) listscroll_gms_pane

0xa8cd,	// (0x000670c4) grid_gms_pane

0xa8d6,	// (0x000670cd) listscroll_gms_pane_g1

0xa8de,	// (0x000670d5) listscroll_gms_pane_g2

0x0001,

0xf1ed,	// (0x0006b9e4) listscroll_gms_pane_g

0x1ae1,	// (0x0005e2d8) scroll_pane_cp010

0x1aec,	// (0x0005e2e3) cell_gms_pane_ParamLimits

0x1aec,	// (0x0005e2e3) cell_gms_pane

0x1afc,	// (0x0005e2f3) cell_gms_pane_g1

0xa8e6,	// (0x000670dd) cell_gms_pane_g2

0xa83d,	// (0x00067034) cell_gms_pane_g3

0xa8ee,	// (0x000670e5) cell_gms_pane_g4

0x0003,

0xf1f2,	// (0x0006b9e9) cell_gms_pane_g

0xa8f7,	// (0x000670ee) grid_highlight_pane_cp09

0x405d,	// (0x00060854) phob_pre_status_pane_g1

0x4065,	// (0x0006085c) phob_pre_status_pane_g2

0x406d,	// (0x00060864) phob_pre_status_pane_g3

0x4075,	// (0x0006086c) phob_pre_status_pane_g4

0x0004,

0xf524,	// (0x0006bd1b) phob_pre_status_pane_g

0x4085,	// (0x0006087c) phob_pre_status_pane_t1

0x4095,	// (0x0006088c) phob_pre_status_pane_t2

0x40a5,	// (0x0006089c) phob_pre_status_pane_t3

0x0002,

0xf52f,	// (0x0006bd26) phob_pre_status_pane_t

0xa1b0,	// (0x000669a7) bg_list_pane_cp05

0x1b0c,	// (0x0005e303) grid_vorec_pane

0x1b16,	// (0x0005e30d) vorec_t1

0x1b24,	// (0x0005e31b) vorec_t2

0x1b32,	// (0x0005e329) vorec_t3

0x1b40,	// (0x0005e337) vorec_t4

0x1b4e,	// (0x0005e345) vorec_t5

0x1b5c,	// (0x0005e353) vorec_t6

0x0006,

0xf1fb,	// (0x0006b9f2) vorec_t

0x1b78,	// (0x0005e36f) wait_bar_pane_cp01

0x1b80,	// (0x0005e377) cell_vorec_pane_ParamLimits

0x1b80,	// (0x0005e377) cell_vorec_pane

0x1b93,	// (0x0005e38a) cell_vorec_pane_g1

0xa1b0,	// (0x000669a7) grid_highlight_pane_cp05

0x1bad,	// (0x0005e3a4) cams_zoom_pane

0x1bb9,	// (0x0005e3b0) image_vga_pane

0x1bc8,	// (0x0005e3bf) main_camera_pane_g1

0x1bd6,	// (0x0005e3cd) main_camera_pane_g2

0x1be2,	// (0x0005e3d9) main_camera_pane_g3

0x1bee,	// (0x0005e3e5) main_camera_pane_g4

0x1bfa,	// (0x0005e3f1) main_camera_pane_g5

0x1c06,	// (0x0005e3fd) main_camera_pane_g6

0x1c12,	// (0x0005e409) main_camera_pane_g7

0x0007,

0xf20a,	// (0x0006ba01) main_camera_pane_g

0x1c1e,	// (0x0005e415) main_camera_pane_t1

0x1c30,	// (0x0005e427) main_camera_pane_t2

0x0001,

0xf21b,	// (0x0006ba12) main_camera_pane_t

0x1c51,	// (0x0005e448) cams_zoom_pane_cp_ParamLimits

0x1c51,	// (0x0005e448) cams_zoom_pane_cp

0x1c75,	// (0x0005e46c) image_cif_pane_ParamLimits

0x1c75,	// (0x0005e46c) image_cif_pane

0x1c93,	// (0x0005e48a) image_subqcif_pane

0x1c9b,	// (0x0005e492) main_video_pane_g1_ParamLimits

0x1c9b,	// (0x0005e492) main_video_pane_g1

0x1cbb,	// (0x0005e4b2) main_video_pane_g2_ParamLimits

0x1cbb,	// (0x0005e4b2) main_video_pane_g2

0x1ceb,	// (0x0005e4e2) main_video_pane_g3_ParamLimits

0x1ceb,	// (0x0005e4e2) main_video_pane_g3

0x1d14,	// (0x0005e50b) main_video_pane_g4_ParamLimits

0x1d14,	// (0x0005e50b) main_video_pane_g4

0x1d3d,	// (0x0005e534) main_video_pane_g5_ParamLimits

0x1d3d,	// (0x0005e534) main_video_pane_g5

0xa90b,	// (0x00067102) main_video_pane_g6_ParamLimits

0xa90b,	// (0x00067102) main_video_pane_g6

0x0006,

0xf220,	// (0x0006ba17) main_video_pane_g_ParamLimits

0xf220,	// (0x0006ba17) main_video_pane_g

0x1d5f,	// (0x0005e556) main_video_pane_t1_ParamLimits

0x1d5f,	// (0x0005e556) main_video_pane_t1

0xa925,	// (0x0006711c) cams_zoom_pane_g1

0xa92e,	// (0x00067125) cams_zoom_pane_g2

0xa937,	// (0x0006712e) cams_zoom_pane_g3

0xa940,	// (0x00067137) cams_zoom_pane_g4

0x0003,

0xf22f,	// (0x0006ba26) cams_zoom_pane_g

0x1da9,	// (0x0005e5a0) grid_cams_pane

0x1db7,	// (0x0005e5ae) linegrid_cams_pane

0x1dc5,	// (0x0005e5bc) cell_cams_pane_ParamLimits

0x1dc5,	// (0x0005e5bc) cell_cams_pane

0xa949,	// (0x00067140) cams_burst_image_pane

0xa951,	// (0x00067148) cell_cams_pane_g1

0xa1b0,	// (0x000669a7) grid_highlight_pane_cp03

0xa785,	// (0x00066f7c) mp_bg_pane_g1

0xa1b0,	// (0x000669a7) bg_list_pane_cp03

0xc6ba,	// (0x00068eb1) bg_mp_pane

0xc6c2,	// (0x00068eb9) grid_mp_pane

0xc6ca,	// (0x00068ec1) media_player_g1

0xc6d2,	// (0x00068ec9) media_player_t1

0xc6e0,	// (0x00068ed7) media_player_t2

0xc6ee,	// (0x00068ee5) media_player_t3

0xc6fc,	// (0x00068ef3) media_player_t4

0xc70a,	// (0x00068f01) media_player_t5

0xc718,	// (0x00068f0f) media_player_t6

0xc726,	// (0x00068f1d) media_player_t7

0x0006,

0x0290,	// (0x0005ca87) media_player_t

0xc734,	// (0x00068f2b) wait_bar_pane_cp02

0xf510,	// (0x0006bd07) main_usb_pane_t

0x4054,	// (0x0006084b) cell_mp_pane

0xa785,	// (0x00066f7c) cell_mp_pane_g1

0xa1b0,	// (0x000669a7) grid_highlight_pane_cp06

0xa959,	// (0x00067150) grid_skin_colour_pane

0xa961,	// (0x00067158) list_highlight_pane_cp03

0x1e42,	// (0x0005e639) skin_g1

0xa969,	// (0x00067160) skin_t1

0xa978,	// (0x0006716f) skin_t2

0x0001,

0xf264,	// (0x0006ba5b) skin_t

0x1e4c,	// (0x0005e643) cell_skin_colour_pane_ParamLimits

0x1e4c,	// (0x0005e643) cell_skin_colour_pane

0xa986,	// (0x0006717d) cell_skin_colour_pane_g1

0x1ed0,	// (0x0005e6c7) call_video_g1_ParamLimits

0x1ed0,	// (0x0005e6c7) call_video_g1

0x1ee0,	// (0x0005e6d7) call_video_g2_ParamLimits

0x1ee0,	// (0x0005e6d7) call_video_g2

0x0001,

0xf269,	// (0x0006ba60) call_video_g_ParamLimits

0xf269,	// (0x0006ba60) call_video_g

0x1f3a,	// (0x0005e731) call_video_uplink_pane_cp1_ParamLimits

0x1f3a,	// (0x0005e731) call_video_uplink_pane_cp1

0xa998,	// (0x0006718f) call_video_uplink_pane_cp2

0x2006,	// (0x0005e7fd) video_down_crop_pane_ParamLimits

0x2006,	// (0x0005e7fd) video_down_crop_pane

0x20f8,	// (0x0005e8ef) video_down_pane_ParamLimits

0x20f8,	// (0x0005e8ef) video_down_pane

0xa9a0,	// (0x00067197) video_down_subqcif_pane_ParamLimits

0xa9a0,	// (0x00067197) video_down_subqcif_pane

0xa9b8,	// (0x000671af) video_down_subqcif_pane_cp_ParamLimits

0xa9b8,	// (0x000671af) video_down_subqcif_pane_cp

0xa9de,	// (0x000671d5) im_reading_pane_ParamLimits

0xa9de,	// (0x000671d5) im_reading_pane

0x221a,	// (0x0005ea11) im_writing_pane_ParamLimits

0x221a,	// (0x0005ea11) im_writing_pane

0x2238,	// (0x0005ea2f) im_reading_pane_t1

0xa9f8,	// (0x000671ef) list_im_pane

0xaa09,	// (0x00067200) scroll_pane_cp07

0x2293,	// (0x0005ea8a) im_writing_pane_t1_ParamLimits

0x2293,	// (0x0005ea8a) im_writing_pane_t1

0xaa22,	// (0x00067219) im_writing_pane_t2_ParamLimits

0xaa22,	// (0x00067219) im_writing_pane_t2

0x0001,

0xf273,	// (0x0006ba6a) im_writing_pane_t_ParamLimits

0xf273,	// (0x0006ba6a) im_writing_pane_t

0xa1b0,	// (0x000669a7) input_focus_pane_cp04

0xa1b0,	// (0x000669a7) input_focus_pane_cp05

0x22a5,	// (0x0005ea9c) list_im_single_pane_ParamLimits

0x22a5,	// (0x0005ea9c) list_im_single_pane

0x22cd,	// (0x0005eac4) list_single_im_pane_t1

0x4018,	// (0x0006080f) blid_accuracy_pane

0x4020,	// (0x00060817) blid_compass_pane

0x402a,	// (0x00060821) main_location_t1

0x4038,	// (0x0006082f) main_location_t2

0x4046,	// (0x0006083d) main_location_t3

0x0002,

0xf51d,	// (0x0006bd14) main_location_t

0xa1b0,	// (0x000669a7) aid_levels_location

0xa785,	// (0x00066f7c) blid_accuracy_pane_g1

0xa785,	// (0x00066f7c) blid_accuracy_pane_g2

0x0001,

0xf2d5,	// (0x0006bacc) blid_accuracy_pane_g

0xaa6a,	// (0x00067261) wml_content_pane

0xaaa8,	// (0x0006729f) wml_button_pane_ParamLimits

0xaaa8,	// (0x0006729f) wml_button_pane

0x22dc,	// (0x0005ead3) wml_list_single_large_pane_ParamLimits

0x22dc,	// (0x0005ead3) wml_list_single_large_pane

0x230d,	// (0x0005eb04) wml_list_single_medium_pane_ParamLimits

0x230d,	// (0x0005eb04) wml_list_single_medium_pane

0x2345,	// (0x0005eb3c) wml_list_single_small_pane_ParamLimits

0x2345,	// (0x0005eb3c) wml_list_single_small_pane

0xaabc,	// (0x000672b3) wml_selection_box_pane_ParamLimits

0xaabc,	// (0x000672b3) wml_selection_box_pane

0xaacf,	// (0x000672c6) wml_list_single_pane_t1

0xaade,	// (0x000672d5) wml_list_single_medium_pane_t1

0xaaed,	// (0x000672e4) wml_list_single_large_pane_t1

0xaafc,	// (0x000672f3) input_focus_pane_cp02_ParamLimits

0xaafc,	// (0x000672f3) input_focus_pane_cp02

0xab0f,	// (0x00067306) wml_selection_box_pane_g1

0xab18,	// (0x0006730f) wml_selection_box_pane_t1_ParamLimits

0xab18,	// (0x0006730f) wml_selection_box_pane_t1

0xa5c3,	// (0x00066dba) bg_wml_button_pane_ParamLimits

0xa5c3,	// (0x00066dba) bg_wml_button_pane

0xab30,	// (0x00067327) wml_button_pane_g1

0xab38,	// (0x0006732f) wml_button_pane_t1

0xab30,	// (0x00067327) wml_button_bg_pane_g1

0xab48,	// (0x0006733f) wml_button_bg_pane_g2

0xab50,	// (0x00067347) wml_button_bg_pane_g3

0xab58,	// (0x0006734f) wml_button_bg_pane_g4

0xab60,	// (0x00067357) wml_button_bg_pane_g5

0xab68,	// (0x0006735f) wml_button_bg_pane_g6

0xab70,	// (0x00067367) wml_button_bg_pane_g7

0xab78,	// (0x0006736f) wml_button_bg_pane_g8

0xab80,	// (0x00067377) wml_button_bg_pane_g9

0x0008,

0xf278,	// (0x0006ba6f) wml_button_bg_pane_g

0x2386,	// (0x0005eb7d) bg_list_pane_cp02

0xab88,	// (0x0006737f) mce_header_pane_ParamLimits

0xab88,	// (0x0006737f) mce_header_pane

0xab9e,	// (0x00067395) mce_icon_pane

0xab9e,	// (0x00067395) mce_image_pane

0xaba7,	// (0x0006739e) mce_text_pane_ParamLimits

0xaba7,	// (0x0006739e) mce_text_pane

0x2390,	// (0x0005eb87) scroll_pane_cp03

0xaaa0,	// (0x00067297) scroll_pane_cp04

0xabba,	// (0x000673b1) scroll_pane_cp05_ParamLimits

0xabba,	// (0x000673b1) scroll_pane_cp05

0x239a,	// (0x0005eb91) mce_header_field_pane_ParamLimits

0x239a,	// (0x0005eb91) mce_header_field_pane

0x23ba,	// (0x0005ebb1) mce_header_field_pane_2_ParamLimits

0x23ba,	// (0x0005ebb1) mce_header_field_pane_2

0x23d0,	// (0x0005ebc7) mce_header_field_pane_3

0x23d8,	// (0x0005ebcf) list_single_mce_message_pane_ParamLimits

0x23d8,	// (0x0005ebcf) list_single_mce_message_pane

0x240a,	// (0x0005ec01) list_single_mce_smart_pane_ParamLimits

0x240a,	// (0x0005ec01) list_single_mce_smart_pane

0xabc6,	// (0x000673bd) input_focus_pane_cp03

0xabcf,	// (0x000673c6) list_header_data_pane

0x2447,	// (0x0005ec3e) mce_header_field_pane_t1

0x2457,	// (0x0005ec4e) list_single_mce_header_pane_ParamLimits

0x2457,	// (0x0005ec4e) list_single_mce_header_pane

0xabd7,	// (0x000673ce) list_single_mce_header_pane_t1

0xabe6,	// (0x000673dd) list_single_mce_message_pane_g1

0xabee,	// (0x000673e5) list_single_mce_message_pane_t1

0x24ae,	// (0x0005eca5) bg_cale_heading_pane_cp01_ParamLimits

0x24ae,	// (0x0005eca5) bg_cale_heading_pane_cp01

0xabfc,	// (0x000673f3) bg_cale_pane_cp02_ParamLimits

0xabfc,	// (0x000673f3) bg_cale_pane_cp02

0x24f1,	// (0x0005ece8) cale_month_corner_pane

0x250b,	// (0x0005ed02) cale_month_day_heading_pane_ParamLimits

0x250b,	// (0x0005ed02) cale_month_day_heading_pane

0x2566,	// (0x0005ed5d) cale_month_pane_g1_ParamLimits

0x2566,	// (0x0005ed5d) cale_month_pane_g1

0x259e,	// (0x0005ed95) cale_month_pane_g2_ParamLimits

0x259e,	// (0x0005ed95) cale_month_pane_g2

0x25c9,	// (0x0005edc0) cale_month_pane_g3_ParamLimits

0x25c9,	// (0x0005edc0) cale_month_pane_g3

0x2619,	// (0x0005ee10) cale_month_pane_g4_ParamLimits

0x2619,	// (0x0005ee10) cale_month_pane_g4

0x2669,	// (0x0005ee60) cale_month_pane_g5_ParamLimits

0x2669,	// (0x0005ee60) cale_month_pane_g5

0x26b9,	// (0x0005eeb0) cale_month_pane_g6_ParamLimits

0x26b9,	// (0x0005eeb0) cale_month_pane_g6

0x2709,	// (0x0005ef00) cale_month_pane_g7_ParamLimits

0x2709,	// (0x0005ef00) cale_month_pane_g7

0x2771,	// (0x0005ef68) cale_month_pane_g8_ParamLimits

0x2771,	// (0x0005ef68) cale_month_pane_g8

0x27d9,	// (0x0005efd0) cale_month_pane_g9_ParamLimits

0x27d9,	// (0x0005efd0) cale_month_pane_g9

0x2837,	// (0x0005f02e) cale_month_pane_g10_ParamLimits

0x2837,	// (0x0005f02e) cale_month_pane_g10

0x2895,	// (0x0005f08c) cale_month_pane_g11_ParamLimits

0x2895,	// (0x0005f08c) cale_month_pane_g11

0x28e9,	// (0x0005f0e0) cale_month_pane_g12_ParamLimits

0x28e9,	// (0x0005f0e0) cale_month_pane_g12

0x293f,	// (0x0005f136) cale_month_pane_g13_ParamLimits

0x293f,	// (0x0005f136) cale_month_pane_g13

0x000c,

0xf28b,	// (0x0006ba82) cale_month_pane_g_ParamLimits

0xf28b,	// (0x0006ba82) cale_month_pane_g

0x2995,	// (0x0005f18c) cale_month_week_pane

0x29aa,	// (0x0005f1a1) grid_cale_month_pane_ParamLimits

0x29aa,	// (0x0005f1a1) grid_cale_month_pane

0x29fc,	// (0x0005f1f3) cale_month_day_heading_pane_t1

0x2a82,	// (0x0005f279) cale_month_day_heading_pane_t2

0x2b13,	// (0x0005f30a) cale_month_day_heading_pane_t3

0x2ba4,	// (0x0005f39b) cale_month_day_heading_pane_t4

0x2c35,	// (0x0005f42c) cale_month_day_heading_pane_t5

0x2cc6,	// (0x0005f4bd) cale_month_day_heading_pane_t6

0x2d63,	// (0x0005f55a) cale_month_day_heading_pane_t7

0x0006,

0xf2a6,	// (0x0006ba9d) cale_month_day_heading_pane_t

0xa8ad,	// (0x000670a4) bg_cale_side_pane_cp01

0x2e0c,	// (0x0005f603) cale_month_week_pane_t1

0x2e25,	// (0x0005f61c) cale_month_week_pane_t2

0x2e3e,	// (0x0005f635) cale_month_week_pane_t3

0x2e57,	// (0x0005f64e) cale_month_week_pane_t4

0x2e74,	// (0x0005f66b) cale_month_week_pane_t5

0x2e95,	// (0x0005f68c) cale_month_week_pane_t6

0x0005,

0xf2b5,	// (0x0006baac) cale_month_week_pane_t

0x2eb6,	// (0x0005f6ad) cell_cale_month_pane_ParamLimits

0x2eb6,	// (0x0005f6ad) cell_cale_month_pane

0x2fdc,	// (0x0005f7d3) cell_cale_month_pane_g1

0x2fe8,	// (0x0005f7df) cell_cale_month_pane_t1_ParamLimits

0x2fe8,	// (0x0005f7df) cell_cale_month_pane_t1

0xa8bb,	// (0x000670b2) grid_highlight_pane_cp08

0xa785,	// (0x00066f7c) main_smil_g1

0x3008,	// (0x0005f7ff) smil_status_pane

0xac3b,	// (0x00067432) smil_text_pane

0xc5da,	// (0x00068dd1) bg_popup_call3_rect_pane_g8

0xc5e2,	// (0x00068dd9) bg_popup_call3_rect_pane_g9

0x0008,

0xf4f8,	// (0x0006bcef) bg_popup_call3_rect_pane_g

0xc829,	// (0x00069020) smil_status_volume_pane_g1

0xac45,	// (0x0006743c) smil_status_pane_t1

0x444e,	// (0x00060c45) volume_smil_pane

0xac5c,	// (0x00067453) list_smil_text_pane

0x301b,	// (0x0005f812) scroll_pane_cp011

0x3026,	// (0x0005f81d) smil_text_list_pane_t1_ParamLimits

0x3026,	// (0x0005f81d) smil_text_list_pane_t1

0x30ba,	// (0x0005f8b1) aid_volume_smil_ParamLimits

0x30ba,	// (0x0005f8b1) aid_volume_smil

0xa785,	// (0x00066f7c) smil_volume_pane_g1

0xa785,	// (0x00066f7c) smil_volume_pane_g2

0x0001,

0xf2d5,	// (0x0006bacc) smil_volume_pane_g

0x15a1,	// (0x0005dd98) listscroll_cale_day_pane

0xac66,	// (0x0006745d) bg_cale_pane

0xac7e,	// (0x00067475) list_cale_pane

0xaca1,	// (0x00067498) scroll_pane_cp09

0xacb2,	// (0x000674a9) cale_bg_pane_g1

0xacba,	// (0x000674b1) cale_bg_pane_g2

0xacc2,	// (0x000674b9) cale_bg_pane_g3

0xacca,	// (0x000674c1) cale_bg_pane_g4

0xacd2,	// (0x000674c9) cale_bg_pane_g5

0xacda,	// (0x000674d1) cale_bg_pane_g6

0xace2,	// (0x000674d9) cale_bg_pane_g7

0xacea,	// (0x000674e1) cale_bg_pane_g8

0xacf2,	// (0x000674e9) cale_bg_pane_g9

0x0008,

0xf2da,	// (0x0006bad1) cale_bg_pane_g

0x30dc,	// (0x0005f8d3) list_cale_time_pane_ParamLimits

0x30dc,	// (0x0005f8d3) list_cale_time_pane

0xad02,	// (0x000674f9) list_cale_time_pane_g1_ParamLimits

0xad02,	// (0x000674f9) list_cale_time_pane_g1

0xad0e,	// (0x00067505) list_cale_time_pane_g2_ParamLimits

0xad0e,	// (0x00067505) list_cale_time_pane_g2

0x3108,	// (0x0005f8ff) list_cale_time_pane_g3_ParamLimits

0x3108,	// (0x0005f8ff) list_cale_time_pane_g3

0x3116,	// (0x0005f90d) list_cale_time_pane_g4_ParamLimits

0x3116,	// (0x0005f90d) list_cale_time_pane_g4

0x3124,	// (0x0005f91b) list_cale_time_pane_g5_ParamLimits

0x3124,	// (0x0005f91b) list_cale_time_pane_g5

0x0005,

0xf2ed,	// (0x0006bae4) list_cale_time_pane_g_ParamLimits

0xf2ed,	// (0x0006bae4) list_cale_time_pane_g

0xad28,	// (0x0006751f) list_cale_time_pane_t1_ParamLimits

0xad28,	// (0x0006751f) list_cale_time_pane_t1

0xad50,	// (0x00067547) list_cale_time_pane_t2_ParamLimits

0xad50,	// (0x00067547) list_cale_time_pane_t2

0x3469,	// (0x0005fc60) aid_blid_cardinal_pane

0x34ab,	// (0x0005fca2) compass_pane_t4

0xad78,	// (0x0006756f) list_cale_time_pane_t4_ParamLimits

0xad78,	// (0x0006756f) list_cale_time_pane_t4

0x34b9,	// (0x0005fcb0) compass_pane_t5

0x34c9,	// (0x0005fcc0) compass_pane_t6

0x34d7,	// (0x0005fcce) compass_pane_t7

0xb237,	// (0x00067a2e) navi_pane_cc_t1

0xb43d,	// (0x00067c34) aid_phob_thumbnail_center_pane

0x3b11,	// (0x00060308) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2fa,	// (0x0006baf1) list_cale_time_pane_t_ParamLimits

0xf2fa,	// (0x0006baf1) list_cale_time_pane_t

0x9883,	// (0x0006607a) bg_popup_window_pane_cp02_ParamLimits

0x9883,	// (0x0006607a) bg_popup_window_pane_cp02

0xada0,	// (0x00067597) heading_pane_cp01_ParamLimits

0xada0,	// (0x00067597) heading_pane_cp01

0xadac,	// (0x000675a3) loc_req_pane_ParamLimits

0xadac,	// (0x000675a3) loc_req_pane

0xadbc,	// (0x000675b3) loc_type_pane_ParamLimits

0xadbc,	// (0x000675b3) loc_type_pane

0xadce,	// (0x000675c5) loc_type_pane_t1_ParamLimits

0xadce,	// (0x000675c5) loc_type_pane_t1

0xade0,	// (0x000675d7) loc_type_pane_t2_ParamLimits

0xade0,	// (0x000675d7) loc_type_pane_t2

0xadf2,	// (0x000675e9) loc_type_pane_t3_ParamLimits

0xadf2,	// (0x000675e9) loc_type_pane_t3

0x0002,

0xf301,	// (0x0006baf8) loc_type_pane_t_ParamLimits

0xf301,	// (0x0006baf8) loc_type_pane_t

0xae04,	// (0x000675fb) list_loc_req_pane

0xae0e,	// (0x00067605) scroll_pane_cp012

0x3132,	// (0x0005f929) list_single_loc_request_popup_menu_pane_ParamLimits

0x3132,	// (0x0005f929) list_single_loc_request_popup_menu_pane

0xae19,	// (0x00067610) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xae19,	// (0x00067610) list_single_loc_request_popup_menu_pane_g1

0xae25,	// (0x0006761c) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xae25,	// (0x0006761c) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf308,	// (0x0006baff) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf308,	// (0x0006baff) list_single_loc_request_popup_menu_pane_g

0xae31,	// (0x00067628) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xae31,	// (0x00067628) list_single_loc_request_popup_menu_pane_t1

0x314b,	// (0x0005f942) bg_popup_window_pane_cp03_ParamLimits

0x314b,	// (0x0005f942) bg_popup_window_pane_cp03

0x3159,	// (0x0005f950) heading_loc_req_pane_ParamLimits

0x3159,	// (0x0005f950) heading_loc_req_pane

0x3165,	// (0x0005f95c) popup_dyc_status_message_window_g1_ParamLimits

0x3165,	// (0x0005f95c) popup_dyc_status_message_window_g1

0x3171,	// (0x0005f968) popup_dyc_status_message_window_t1_ParamLimits

0x3171,	// (0x0005f968) popup_dyc_status_message_window_t1

0x3183,	// (0x0005f97a) popup_dyc_status_message_window_t2_ParamLimits

0x3183,	// (0x0005f97a) popup_dyc_status_message_window_t2

0x3195,	// (0x0005f98c) popup_dyc_status_message_window_t3_ParamLimits

0x3195,	// (0x0005f98c) popup_dyc_status_message_window_t3

0x0002,

0xf30d,	// (0x0006bb04) popup_dyc_status_message_window_t_ParamLimits

0xf30d,	// (0x0006bb04) popup_dyc_status_message_window_t

0xa1b0,	// (0x000669a7) bg_heading_pane_cp01

0xae47,	// (0x0006763e) heading_loc_req_pane_g1

0xae4f,	// (0x00067646) heading_loc_req_pane_g2

0xae57,	// (0x0006764e) heading_loc_req_pane_g3

0x0002,

0xf314,	// (0x0006bb0b) heading_loc_req_pane_g

0xae5f,	// (0x00067656) heading_loc_req_pane_t1

0xae6e,	// (0x00067665) bg_popup_sub_pane_cp01_ParamLimits

0xae6e,	// (0x00067665) bg_popup_sub_pane_cp01

0xae7c,	// (0x00067673) popup_cale_events_window_g1_ParamLimits

0xae7c,	// (0x00067673) popup_cale_events_window_g1

0xae9c,	// (0x00067693) popup_cale_events_window_g2_ParamLimits

0xae9c,	// (0x00067693) popup_cale_events_window_g2

0x0001,

0xf348,	// (0x0006bb3f) popup_cale_events_window_g_ParamLimits

0xf348,	// (0x0006bb3f) popup_cale_events_window_g

0xaebc,	// (0x000676b3) popup_cale_events_window_t1_ParamLimits

0xaebc,	// (0x000676b3) popup_cale_events_window_t1

0xaece,	// (0x000676c5) popup_cale_events_window_t2_ParamLimits

0xaece,	// (0x000676c5) popup_cale_events_window_t2

0xaf0c,	// (0x00067703) popup_cale_events_window_t3_ParamLimits

0xaf0c,	// (0x00067703) popup_cale_events_window_t3

0xaf46,	// (0x0006773d) popup_cale_events_window_t4_ParamLimits

0xaf46,	// (0x0006773d) popup_cale_events_window_t4

0x0003,

0xf34d,	// (0x0006bb44) popup_cale_events_window_t_ParamLimits

0xf34d,	// (0x0006bb44) popup_cale_events_window_t

0x3249,	// (0x0005fa40) call_type_pane

0xb0f2,	// (0x000678e9) popup_call_status_window_g1

0x3255,	// (0x0005fa4c) popup_call_status_window_g2

0x3261,	// (0x0005fa58) popup_call_status_window_g3

0x0002,

0xf356,	// (0x0006bb4d) popup_call_status_window_g

0xaf7c,	// (0x00067773) call_type_pane_g1

0xaf85,	// (0x0006777c) call_type_pane_g2

0x0001,

0xf35d,	// (0x0006bb54) call_type_pane_g

0xa1b0,	// (0x000669a7) bg_popup_sub_pane_cp02

0xaf8e,	// (0x00067785) listscroll_popup_wml_pane

0xaf96,	// (0x0006778d) list_wml_pane

0xafa0,	// (0x00067797) scroll_pane_cp013

0xafab,	// (0x000677a2) list_single_graphic_popup_wml_pane_ParamLimits

0xafab,	// (0x000677a2) list_single_graphic_popup_wml_pane

0xa785,	// (0x00066f7c) list_single_graphic_popup_wml_pane_g1

0xafbf,	// (0x000677b6) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf362,	// (0x0006bb59) list_single_graphic_popup_wml_pane_g

0xafc7,	// (0x000677be) list_single_graphic_popup_wml_pane_t1

0xafdd,	// (0x000677d4) aid_call_pane

0xa5bb,	// (0x00066db2) popup_clock_analogue_window_g1

0xa5bb,	// (0x00066db2) popup_clock_analogue_window_g2

0x326d,	// (0x0005fa64) popup_clock_analogue_window_g3

0x326d,	// (0x0005fa64) popup_clock_analogue_window_g4

0xa785,	// (0x00066f7c) popup_clock_analogue_window_g5

0x0004,

0xf367,	// (0x0006bb5e) popup_clock_analogue_window_g

0x3275,	// (0x0005fa6c) popup_clock_analogue_window_t1

0x3283,	// (0x0005fa7a) clock_digital_number_pane_ParamLimits

0x3283,	// (0x0005fa7a) clock_digital_number_pane

0x328f,	// (0x0005fa86) clock_digital_number_pane_cp02_ParamLimits

0x328f,	// (0x0005fa86) clock_digital_number_pane_cp02

0x329b,	// (0x0005fa92) clock_digital_number_pane_cp03_ParamLimits

0x329b,	// (0x0005fa92) clock_digital_number_pane_cp03

0x32a7,	// (0x0005fa9e) clock_digital_number_pane_cp04_ParamLimits

0x32a7,	// (0x0005fa9e) clock_digital_number_pane_cp04

0x32b7,	// (0x0005faae) clock_digital_separator_pane_ParamLimits

0x32b7,	// (0x0005faae) clock_digital_separator_pane

0x32c3,	// (0x0005faba) popup_clock_digital_window_t1

0xa785,	// (0x00066f7c) clock_digital_number_pane_g1

0xa785,	// (0x00066f7c) clock_digital_number_pane_g2

0x0001,

0xf2d5,	// (0x0006bacc) clock_digital_number_pane_g

0xa785,	// (0x00066f7c) clock_digital_separator_pane_g1

0xa785,	// (0x00066f7c) clock_digital_separator_pane_g2

0x0001,

0xf2d5,	// (0x0006bacc) clock_digital_separator_pane_g

0xa1b0,	// (0x000669a7) bg_popup_window_pane_cp04

0xafe5,	// (0x000677dc) heading_pane_cp03

0xafed,	// (0x000677e4) listscroll_popup_gms_pane

0xaff5,	// (0x000677ec) grid_large_graphic_popup_pane

0xafff,	// (0x000677f6) listscroll_popup_gms_pane_g1

0xb007,	// (0x000677fe) listscroll_popup_gms_pane_g2

0x0001,

0xf372,	// (0x0006bb69) listscroll_popup_gms_pane_g

0xaaa0,	// (0x00067297) scroll_pane_cp014

0xb00f,	// (0x00067806) cell_large_graphic_popup_pane_ParamLimits

0xb00f,	// (0x00067806) cell_large_graphic_popup_pane

0xb027,	// (0x0006781e) cell_large_graphic_popup_pane_g1_ParamLimits

0xb027,	// (0x0006781e) cell_large_graphic_popup_pane_g1

0xb033,	// (0x0006782a) cell_large_graphic_popup_pane_g2_ParamLimits

0xb033,	// (0x0006782a) cell_large_graphic_popup_pane_g2

0xb03f,	// (0x00067836) cell_large_graphic_popup_pane_g3_ParamLimits

0xb03f,	// (0x00067836) cell_large_graphic_popup_pane_g3

0xb04c,	// (0x00067843) cell_large_graphic_popup_pane_g4_ParamLimits

0xb04c,	// (0x00067843) cell_large_graphic_popup_pane_g4

0x0003,

0xf377,	// (0x0006bb6e) cell_large_graphic_popup_pane_g_ParamLimits

0xf377,	// (0x0006bb6e) cell_large_graphic_popup_pane_g

0xb05c,	// (0x00067853) grid_highlight_pane_cp010

0xa785,	// (0x00066f7c) bg_popup_call_pane_g1

0xb066,	// (0x0006785d) list_single_graphic_popup_conf_pane_ParamLimits

0xb066,	// (0x0006785d) list_single_graphic_popup_conf_pane

0xb079,	// (0x00067870) list_highlight_pane_cp01

0xb082,	// (0x00067879) list_single_graphic_popup_conf_pane_g1

0xb08a,	// (0x00067881) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf380,	// (0x0006bb77) list_single_graphic_popup_conf_pane_g

0xb092,	// (0x00067889) list_single_graphic_popup_conf_pane_t1

0xb0a0,	// (0x00067897) linegrid_cams_pane_g1

0x32e0,	// (0x0005fad7) linegrid_cams_pane_g2

0xa83d,	// (0x00067034) linegrid_cams_pane_g3

0xb0a9,	// (0x000678a0) linegrid_cams_pane_g4

0x32e9,	// (0x0005fae0) linegrid_cams_pane_g5

0x32f2,	// (0x0005fae9) linegrid_cams_pane_g6

0xa8ee,	// (0x000670e5) linegrid_cams_pane_g7

0x0006,

0xf385,	// (0x0006bb7c) linegrid_cams_pane_g

0xb0b2,	// (0x000678a9) popup_clock_analogue_window

0xb0b2,	// (0x000678a9) popup_clock_digital_window

0xa1b0,	// (0x000669a7) popup_phob_thumbnail_window

0xa785,	// (0x00066f7c) call_video_uplink_pane_g1

0xb0bb,	// (0x000678b2) call_video_uplink_pane_g2

0x0001,

0xf394,	// (0x0006bb8b) call_video_uplink_pane_g

0xa8bb,	// (0x000670b2) video_uplink_pane

0xb0c3,	// (0x000678ba) mce_image_pane_g1

0x32fb,	// (0x0005faf2) mce_image_pane_g2

0x3303,	// (0x0005fafa) mce_image_pane_g3

0x330b,	// (0x0005fb02) mce_image_pane_g4

0x3313,	// (0x0005fb0a) mce_image_pane_g5

0x0004,

0xf399,	// (0x0006bb90) mce_image_pane_g

0xb0cd,	// (0x000678c4) control_top_pane_stacon_cp01_ParamLimits

0xb0cd,	// (0x000678c4) control_top_pane_stacon_cp01

0xb0e1,	// (0x000678d8) uni_indicator_pane_stacon_cp01_ParamLimits

0xb0e1,	// (0x000678d8) uni_indicator_pane_stacon_cp01

0xb100,	// (0x000678f7) bg_popup_sub_pane_cp03

0x331b,	// (0x0005fb12) chi_dic_find_pane

0x3323,	// (0x0005fb1a) listscroll_chi_dic_pane

0x332c,	// (0x0005fb23) main_pane_chidic_g1

0xb10a,	// (0x00067901) chi_dic_find_pane_t1

0xb118,	// (0x0006790f) find_chidic_pane

0xb121,	// (0x00067918) chi_dic_list_pane_ParamLimits

0xb121,	// (0x00067918) chi_dic_list_pane

0xb132,	// (0x00067929) scroll_pane_cp020

0xb13a,	// (0x00067931) find_chidic_pane_t1

0xa1b0,	// (0x000669a7) input_focus_pane_cp06

0x333f,	// (0x0005fb36) list_chi_dic_pane_ParamLimits

0x333f,	// (0x0005fb36) list_chi_dic_pane

0x335c,	// (0x0005fb53) list_chi_dic_pane_t1_ParamLimits

0x335c,	// (0x0005fb53) list_chi_dic_pane_t1

0xa1b0,	// (0x000669a7) list_highlight_pane_cp020

0xb149,	// (0x00067940) bg_cale_heading_pane_g1

0x336f,	// (0x0005fb66) bg_cale_heading_pane_g2

0x3377,	// (0x0005fb6e) bg_cale_heading_pane_g3

0x337f,	// (0x0005fb76) bg_cale_heading_pane_g4

0x3389,	// (0x0005fb80) bg_cale_heading_pane_g5

0x3393,	// (0x0005fb8a) bg_cale_heading_pane_g6

0x339b,	// (0x0005fb92) bg_cale_heading_pane_g7

0x33a3,	// (0x0005fb9a) bg_cale_heading_pane_g8

0x33ad,	// (0x0005fba4) bg_cale_heading_pane_g9

0x0008,

0xf3a4,	// (0x0006bb9b) bg_cale_heading_pane_g

0xb149,	// (0x00067940) bg_cale_side_pane_g1

0x33b7,	// (0x0005fbae) bg_cale_side_pane_g2

0x33c1,	// (0x0005fbb8) bg_cale_side_pane_g3

0x33cb,	// (0x0005fbc2) bg_cale_side_pane_g4

0x33d5,	// (0x0005fbcc) bg_cale_side_pane_g5

0x33df,	// (0x0005fbd6) bg_cale_side_pane_g6

0x33e9,	// (0x0005fbe0) bg_cale_side_pane_g7

0x33f3,	// (0x0005fbea) bg_cale_side_pane_g8

0x33fb,	// (0x0005fbf2) bg_cale_side_pane_g9

0x0008,

0xf3b7,	// (0x0006bbae) bg_cale_side_pane_g

0x3403,	// (0x0005fbfa) popup_call_status_window_ParamLimits

0x3403,	// (0x0005fbfa) popup_call_status_window

0xb151,	// (0x00067948) stacon_top_pane

0xb159,	// (0x00067950) status_pane_ParamLimits

0xb159,	// (0x00067950) status_pane

0xb16e,	// (0x00067965) status_small_pane

0xb176,	// (0x0006796d) control_pane

0xa1b0,	// (0x000669a7) stacon_bottom_pane

0xb17e,	// (0x00067975) list_single_mce_smart_pane_t1_ParamLimits

0xb17e,	// (0x00067975) list_single_mce_smart_pane_t1

0xb191,	// (0x00067988) list_single_mce_smart_pane_t2_ParamLimits

0xb191,	// (0x00067988) list_single_mce_smart_pane_t2

0x0001,

0xf3ca,	// (0x0006bbc1) list_single_mce_smart_pane_t_ParamLimits

0xf3ca,	// (0x0006bbc1) list_single_mce_smart_pane_t

0x340f,	// (0x0005fc06) compass_pane

0x341b,	// (0x0005fc12) main_location2_pane_t1

0x342f,	// (0x0005fc26) main_location2_pane_t2

0x3443,	// (0x0005fc3a) main_location2_pane_t3

0x0003,

0xf3cf,	// (0x0006bbc6) main_location2_pane_t

0xb1b0,	// (0x000679a7) compass_pane_g1_ParamLimits

0xb1b0,	// (0x000679a7) compass_pane_g1

0x348d,	// (0x0005fc84) compass_pane_t1

0x349c,	// (0x0005fc93) compass_pane_t2

0x0005,

0xf3d8,	// (0x0006bbcf) compass_pane_t

0x34e7,	// (0x0005fcde) text_secondary_cp61

0xb22e,	// (0x00067a25) navi_pane_cams_g5

0xb2aa,	// (0x00067aa1) navi_pane_im_t1

0xb2b8,	// (0x00067aaf) navi_pane_mp_g1_ParamLimits

0xb2b8,	// (0x00067aaf) navi_pane_mp_g1

0xb2cc,	// (0x00067ac3) navi_pane_mp_g2_ParamLimits

0xb2cc,	// (0x00067ac3) navi_pane_mp_g2

0xb2d8,	// (0x00067acf) navi_pane_mp_g3_ParamLimits

0xb2d8,	// (0x00067acf) navi_pane_mp_g3

0x0002,

0xf3ec,	// (0x0006bbe3) navi_pane_mp_g_ParamLimits

0xf3ec,	// (0x0006bbe3) navi_pane_mp_g

0xb2e4,	// (0x00067adb) navi_pane_mp_t1

0xb2f2,	// (0x00067ae9) navi_pane_mp_t2

0x0002,

0xf3f3,	// (0x0006bbea) navi_pane_mp_t

0xb37e,	// (0x00067b75) navi_pane_vt_g1

0xb2e4,	// (0x00067adb) navi_pane_vt_t1

0xb386,	// (0x00067b7d) navi_slider_pane

0xb396,	// (0x00067b8d) zooming_pane

0xb39e,	// (0x00067b95) navi_slider_pane_g1

0x3522,	// (0x0005fd19) navi_slider_pane_g2

0x0006,

0xf3fa,	// (0x0006bbf1) navi_slider_pane_g

0xb3c2,	// (0x00067bb9) aid_levels_zoom

0xb3ca,	// (0x00067bc1) zooming_pane_g1

0xb3d2,	// (0x00067bc9) zooming_pane_g2

0xb3d2,	// (0x00067bc9) zooming_pane_g3

0x0002,

0x00ce,	// (0x0005c8c5) zooming_pane_g

0xb3da,	// (0x00067bd1) level_10_zoom

0xb3e3,	// (0x00067bda) level_11_zoom

0xb3ec,	// (0x00067be3) level_1_zoom

0xb3f5,	// (0x00067bec) level_2_zoom

0xb3fe,	// (0x00067bf5) level_3_zoom

0xb407,	// (0x00067bfe) level_4_zoom

0xb410,	// (0x00067c07) level_5_zoom

0xb419,	// (0x00067c10) level_6_zoom

0xb422,	// (0x00067c19) level_7_zoom

0xb42b,	// (0x00067c22) level_8_zoom

0xb434,	// (0x00067c2b) level_9_zoom

0xb445,	// (0x00067c3c) popup_phob_thumbnail_window_g1

0xb44d,	// (0x00067c44) popup_phob_thumbnail_window_g2

0x0001,

0x00d5,	// (0x0005c8cc) popup_phob_thumbnail_window_g

0xc73c,	// (0x00068f33) level_1_location

0xc744,	// (0x00068f3b) level_2_location

0xc74c,	// (0x00068f43) level_3_location

0xc754,	// (0x00068f4b) level_4_location

0xb396,	// (0x00067b8d) level_5_location

0x3534,	// (0x0005fd2b) mce_icon_pane_g1

0x353c,	// (0x0005fd33) mce_icon_pane_g2

0x0001,

0xf409,	// (0x0006bc00) mce_icon_pane_g

0x3544,	// (0x0005fd3b) main_mup_pane_g1_ParamLimits

0x3544,	// (0x0005fd3b) main_mup_pane_g1

0x355c,	// (0x0005fd53) main_mup_pane_g2_ParamLimits

0x355c,	// (0x0005fd53) main_mup_pane_g2

0x3578,	// (0x0005fd6f) main_mup_pane_g3_ParamLimits

0x3578,	// (0x0005fd6f) main_mup_pane_g3

0x3594,	// (0x0005fd8b) main_mup_pane_g4_ParamLimits

0x3594,	// (0x0005fd8b) main_mup_pane_g4

0x35b0,	// (0x0005fda7) main_mup_pane_g5_ParamLimits

0x35b0,	// (0x0005fda7) main_mup_pane_g5

0x35d1,	// (0x0005fdc8) main_mup_pane_g6_ParamLimits

0x35d1,	// (0x0005fdc8) main_mup_pane_g6

0x35ed,	// (0x0005fde4) main_mup_pane_g7_ParamLimits

0x35ed,	// (0x0005fde4) main_mup_pane_g7

0x3609,	// (0x0005fe00) main_mup_pane_g8_ParamLimits

0x3609,	// (0x0005fe00) main_mup_pane_g8

0x3625,	// (0x0005fe1c) main_mup_pane_g9_ParamLimits

0x3625,	// (0x0005fe1c) main_mup_pane_g9

0x3644,	// (0x0005fe3b) main_mup_pane_g10_ParamLimits

0x3644,	// (0x0005fe3b) main_mup_pane_g10

0x3663,	// (0x0005fe5a) main_mup_pane_g11_ParamLimits

0x3663,	// (0x0005fe5a) main_mup_pane_g11

0x367b,	// (0x0005fe72) main_mup_pane_g12_ParamLimits

0x367b,	// (0x0005fe72) main_mup_pane_g12

0x3689,	// (0x0005fe80) main_mup_pane_g13_ParamLimits

0x3689,	// (0x0005fe80) main_mup_pane_g13

0x000c,

0xf40e,	// (0x0006bc05) main_mup_pane_g_ParamLimits

0xf40e,	// (0x0006bc05) main_mup_pane_g

0x369f,	// (0x0005fe96) main_mup_pane_t1_ParamLimits

0x369f,	// (0x0005fe96) main_mup_pane_t1

0x36bc,	// (0x0005feb3) main_mup_pane_t2_ParamLimits

0x36bc,	// (0x0005feb3) main_mup_pane_t2

0x36d6,	// (0x0005fecd) main_mup_pane_t3_ParamLimits

0x36d6,	// (0x0005fecd) main_mup_pane_t3

0x36f0,	// (0x0005fee7) main_mup_pane_t4_ParamLimits

0x36f0,	// (0x0005fee7) main_mup_pane_t4

0x3702,	// (0x0005fef9) main_mup_pane_t5_ParamLimits

0x3702,	// (0x0005fef9) main_mup_pane_t5

0x3714,	// (0x0005ff0b) main_mup_pane_t6_ParamLimits

0x3714,	// (0x0005ff0b) main_mup_pane_t6

0x0005,

0xf429,	// (0x0006bc20) main_mup_pane_t_ParamLimits

0xf429,	// (0x0006bc20) main_mup_pane_t

0x372a,	// (0x0005ff21) mup_progress_pane_ParamLimits

0x372a,	// (0x0005ff21) mup_progress_pane

0x3736,	// (0x0005ff2d) mup_visualizer_pane_ParamLimits

0x3736,	// (0x0005ff2d) mup_visualizer_pane

0x3774,	// (0x0005ff6b) mup_volume_pane_ParamLimits

0x3774,	// (0x0005ff6b) mup_volume_pane

0xb0f2,	// (0x000678e9) mup_visualizer_pane_g1_ParamLimits

0xb0f2,	// (0x000678e9) mup_visualizer_pane_g1

0xb0f2,	// (0x000678e9) mup_visualizer_pane_g2_ParamLimits

0xb0f2,	// (0x000678e9) mup_visualizer_pane_g2

0xb1b0,	// (0x000679a7) mup_visualizer_pane_g3_ParamLimits

0xb1b0,	// (0x000679a7) mup_visualizer_pane_g3

0x0002,

0xf436,	// (0x0006bc2d) mup_visualizer_pane_g_ParamLimits

0xf436,	// (0x0006bc2d) mup_visualizer_pane_g

0xa785,	// (0x00066f7c) mup_volume_pane_g1

0xb45d,	// (0x00067c54) mup_volume_pane_g2

0x0001,

0xf43d,	// (0x0006bc34) mup_volume_pane_g

0xa785,	// (0x00066f7c) mup_progress_pane_g1

0xb466,	// (0x00067c5d) mup_progress_pane_g2

0xb46f,	// (0x00067c66) mup_progress_pane_g3

0x0002,

0xf442,	// (0x0006bc39) mup_progress_pane_g

0xa1b0,	// (0x000669a7) bg_popup_window_pane_cp05

0xb478,	// (0x00067c6f) heading_pane_cp02_ParamLimits

0xb478,	// (0x00067c6f) heading_pane_cp02

0xb492,	// (0x00067c89) list_popup_blid_pane

0xb49a,	// (0x00067c91) list_blid_sat_info_pane_ParamLimits

0xb49a,	// (0x00067c91) list_blid_sat_info_pane

0xb4ad,	// (0x00067ca4) list_blid_sat_info_pane_g1

0xb4b5,	// (0x00067cac) list_blid_sat_info_pane_t1

0x387f,	// (0x00060076) mup_equalizer_pane_ParamLimits

0x387f,	// (0x00060076) mup_equalizer_pane

0x38a0,	// (0x00060097) mup_equalizer_pane_cp1_ParamLimits

0x38a0,	// (0x00060097) mup_equalizer_pane_cp1

0x38c1,	// (0x000600b8) mup_equalizer_pane_cp2_ParamLimits

0x38c1,	// (0x000600b8) mup_equalizer_pane_cp2

0x38e2,	// (0x000600d9) mup_equalizer_pane_cp3_ParamLimits

0x38e2,	// (0x000600d9) mup_equalizer_pane_cp3

0x3903,	// (0x000600fa) mup_equalizer_pane_cp4_ParamLimits

0x3903,	// (0x000600fa) mup_equalizer_pane_cp4

0x3924,	// (0x0006011b) mup_equalizer_pane_cp5

0x393a,	// (0x00060131) mup_equalizer_pane_cp6

0x3952,	// (0x00060149) mup_equalizer_pane_cp7

0xc65a,	// (0x00068e51) bg_popup_call_poc_act_pane_g9

0xc662,	// (0x00068e59) bg_popup_call_poc_act_pane_g10

0xc66a,	// (0x00068e61) bg_popup_call_poc_act_pane_g11

0x000a,

0xa5c3,	// (0x00066dba) mup_scale_pane

0xa785,	// (0x00066f7c) mup_scale_pane_g1

0xb4c3,	// (0x00067cba) mup_scale_pane_g2

0x0006,

0xf45e,	// (0x0006bc55) mup_scale_pane_g

0xb4e7,	// (0x00067cde) msg_data_pane

0xb4ef,	// (0x00067ce6) scroll_pane_cp017

0x9d51,	// (0x00066548) bg_list_pane_cp04_ParamLimits

0x9d51,	// (0x00066548) bg_list_pane_cp04

0xb4f7,	// (0x00067cee) msg_data_pane_g1

0x397c,	// (0x00060173) msg_data_pane_g2

0x3303,	// (0x0005fafa) msg_data_pane_g3

0x3984,	// (0x0006017b) msg_data_pane_g4

0x398c,	// (0x00060183) msg_data_pane_g5

0x3994,	// (0x0006018b) msg_data_pane_g6

0x399c,	// (0x00060193) msg_data_pane_g7

0x0006,

0xf46d,	// (0x0006bc64) msg_data_pane_g

0x39a4,	// (0x0006019b) msg_text_pane_ParamLimits

0x39a4,	// (0x0006019b) msg_text_pane

0x39f1,	// (0x000601e8) qrid_highlight_pane_cp011_ParamLimits

0x39f1,	// (0x000601e8) qrid_highlight_pane_cp011

0xa1b0,	// (0x000669a7) msg_body_pane

0xa1b0,	// (0x000669a7) msg_header_pane

0xb508,	// (0x00067cff) input_focus_pane_cp07

0x9d71,	// (0x00066568) msg_header_pane_t1_ParamLimits

0x9d71,	// (0x00066568) msg_header_pane_t1

0x9d83,	// (0x0006657a) msg_header_pane_t2_ParamLimits

0x9d83,	// (0x0006657a) msg_header_pane_t2

0x0001,

0xf481,	// (0x0006bc78) msg_header_pane_t_ParamLimits

0xf481,	// (0x0006bc78) msg_header_pane_t

0xb51d,	// (0x00067d14) msg_body_pane_g1

0x9d95,	// (0x0006658c) msg_body_pane_t1_ParamLimits

0x9d95,	// (0x0006658c) msg_body_pane_t1

0x9dc6,	// (0x000665bd) msg_body_pane_t2_ParamLimits

0x9dc6,	// (0x000665bd) msg_body_pane_t2

0x9dd8,	// (0x000665cf) msg_body_pane_t3_ParamLimits

0x9dd8,	// (0x000665cf) msg_body_pane_t3

0x0002,

0xf486,	// (0x0006bc7d) msg_body_pane_t_ParamLimits

0xf486,	// (0x0006bc7d) msg_body_pane_t

0x3a6d,	// (0x00060264) main_viewer_pane_g1_ParamLimits

0x3a6d,	// (0x00060264) main_viewer_pane_g1

0x3a79,	// (0x00060270) main_viewer_pane_g2_ParamLimits

0x3a79,	// (0x00060270) main_viewer_pane_g2

0x3a85,	// (0x0006027c) main_viewer_pane_g3_ParamLimits

0x3a85,	// (0x0006027c) main_viewer_pane_g3

0x3a96,	// (0x0006028d) main_viewer_pane_g4_ParamLimits

0x3a96,	// (0x0006028d) main_viewer_pane_g4

0x3aa7,	// (0x0006029e) main_viewer_pane_g5_ParamLimits

0x3aa7,	// (0x0006029e) main_viewer_pane_g5

0x3aa7,	// (0x0006029e) main_viewer_pane_g7_ParamLimits

0x3aa7,	// (0x0006029e) main_viewer_pane_g7

0xae19,	// (0x00067610) main_viewer_pane_g8_ParamLimits

0xae19,	// (0x00067610) main_viewer_pane_g8

0x0007,

0xf496,	// (0x0006bc8d) main_viewer_pane_g_ParamLimits

0xf496,	// (0x0006bc8d) main_viewer_pane_g

0xb525,	// (0x00067d1c) viewer_content_pane_ParamLimits

0xb525,	// (0x00067d1c) viewer_content_pane

0x3ae5,	// (0x000602dc) main_postcard_pane_g1_ParamLimits

0x3ae5,	// (0x000602dc) main_postcard_pane_g1

0x3af3,	// (0x000602ea) main_postcard_pane_g2_ParamLimits

0x3af3,	// (0x000602ea) main_postcard_pane_g2

0x3b01,	// (0x000602f8) main_postcard_pane_g3_ParamLimits

0x3b01,	// (0x000602f8) main_postcard_pane_g3

0x0005,

0xf4a7,	// (0x0006bc9e) main_postcard_pane_g_ParamLimits

0xf4a7,	// (0x0006bc9e) main_postcard_pane_g

0x3b11,	// (0x00060308) main_postcard_pane_g4

0xc83c,	// (0x00069033) smil_status_volume_pane_g2

0x3b3d,	// (0x00060334) postcard_pane_ParamLimits

0x3b3d,	// (0x00060334) postcard_pane

0xb0f2,	// (0x000678e9) postcard_pane_g1_ParamLimits

0xb0f2,	// (0x000678e9) postcard_pane_g1

0x3b6f,	// (0x00060366) postcard_pane_g2_ParamLimits

0x3b6f,	// (0x00060366) postcard_pane_g2

0x3b7b,	// (0x00060372) postcard_pane_g3_ParamLimits

0x3b7b,	// (0x00060372) postcard_pane_g3

0xb533,	// (0x00067d2a) postcard_pane_g4_ParamLimits

0xb533,	// (0x00067d2a) postcard_pane_g4

0x3b87,	// (0x0006037e) postcard_pane_g5_ParamLimits

0x3b87,	// (0x0006037e) postcard_pane_g5

0x3b93,	// (0x0006038a) postcard_pane_g6_ParamLimits

0x3b93,	// (0x0006038a) postcard_pane_g6

0xb541,	// (0x00067d38) postcard_pane_g7_ParamLimits

0xb541,	// (0x00067d38) postcard_pane_g7

0x0006,

0xf4b4,	// (0x0006bcab) postcard_pane_g_ParamLimits

0xf4b4,	// (0x0006bcab) postcard_pane_g

0x3b9f,	// (0x00060396) main_mp2_pane_g1_ParamLimits

0x3b9f,	// (0x00060396) main_mp2_pane_g1

0x3bab,	// (0x000603a2) main_mp2_pane_g2_ParamLimits

0x3bab,	// (0x000603a2) main_mp2_pane_g2

0x3bb7,	// (0x000603ae) main_mp2_pane_g3_ParamLimits

0x3bb7,	// (0x000603ae) main_mp2_pane_g3

0x0002,

0xf4c3,	// (0x0006bcba) main_mp2_pane_g_ParamLimits

0xf4c3,	// (0x0006bcba) main_mp2_pane_g

0x3bc3,	// (0x000603ba) main_mp2_pane_t1_ParamLimits

0x3bc3,	// (0x000603ba) main_mp2_pane_t1

0x3bda,	// (0x000603d1) main_mp2_pane_t2_ParamLimits

0x3bda,	// (0x000603d1) main_mp2_pane_t2

0x3bec,	// (0x000603e3) main_mp2_pane_t3_ParamLimits

0x3bec,	// (0x000603e3) main_mp2_pane_t3

0x0002,

0xf4ca,	// (0x0006bcc1) main_mp2_pane_t_ParamLimits

0xf4ca,	// (0x0006bcc1) main_mp2_pane_t

0xb54f,	// (0x00067d46) pec_content_pane_ParamLimits

0xb54f,	// (0x00067d46) pec_content_pane

0xaaa0,	// (0x00067297) scroll_pane_cp015

0xb561,	// (0x00067d58) pec_attribute_pane_ParamLimits

0xb561,	// (0x00067d58) pec_attribute_pane

0x3bfe,	// (0x000603f5) pec_content_pane_g1_ParamLimits

0x3bfe,	// (0x000603f5) pec_content_pane_g1

0xb571,	// (0x00067d68) pec_content_pane_t1_ParamLimits

0xb571,	// (0x00067d68) pec_content_pane_t1

0xb583,	// (0x00067d7a) pec_content_pane_t2_ParamLimits

0xb583,	// (0x00067d7a) pec_content_pane_t2

0x0001,

0x01a2,	// (0x0005c999) pec_content_pane_t_ParamLimits

0x01a2,	// (0x0005c999) pec_content_pane_t

0x3c0a,	// (0x00060401) list_single_graphic_pane_cp01_ParamLimits

0x3c0a,	// (0x00060401) list_single_graphic_pane_cp01

0xa5c3,	// (0x00066dba) bg_popup_sub_pane_cp04

0xb595,	// (0x00067d8c) popup_mup_playback_window_g1

0xb5a1,	// (0x00067d98) popup_mup_playback_window_t1

0xb5b6,	// (0x00067dad) popup_mup_playback_window_t2

0x0001,

0x01a7,	// (0x0005c99e) popup_mup_playback_window_t

0xb5ed,	// (0x00067de4) main_image_pane_g1_ParamLimits

0xb5ed,	// (0x00067de4) main_image_pane_g1

0xb630,	// (0x00067e27) scroll_pane_cp018_ParamLimits

0xb630,	// (0x00067e27) scroll_pane_cp018

0xb648,	// (0x00067e3f) scroll_pane_cp016_ParamLimits

0xb648,	// (0x00067e3f) scroll_pane_cp016

0x3caa,	// (0x000604a1) smil2_image_pane_ParamLimits

0x3caa,	// (0x000604a1) smil2_image_pane

0x3cde,	// (0x000604d5) smil2_root_pane_ParamLimits

0x3cde,	// (0x000604d5) smil2_root_pane

0x3d0a,	// (0x00060501) smil2_text_pane_ParamLimits

0x3d0a,	// (0x00060501) smil2_text_pane

0xa1b0,	// (0x000669a7) bg_list_pane_cp06

0xb684,	// (0x00067e7b) grid_radio_pane

0xa1b0,	// (0x000669a7) bg_popup_window_pane_cp06

0xb68c,	// (0x00067e83) main_fmradio_pane_t1

0xafe5,	// (0x000677dc) heading_pane_cp04

0xb69a,	// (0x00067e91) main_fmradio_pane_t2

0xc672,	// (0x00068e69) popup_cale_lunar_info_window_g1

0xb6a8,	// (0x00067e9f) main_fmradio_pane_t3

0xc67a,	// (0x00068e71) popup_cale_lunar_info_window_g2

0xb6b6,	// (0x00067ead) main_fmradio_pane_t4

0x0001,

0xb6c4,	// (0x00067ebb) main_fmradio_pane_t5

0x0004,

0x0282,	// (0x0005ca79) popup_cale_lunar_info_window_g

0x01bc,	// (0x0005c9b3) main_fmradio_pane_t

0xb6d2,	// (0x00067ec9) wait_bar_pane_cp03

0xb6da,	// (0x00067ed1) cell_fmradio_pane_ParamLimits

0xb6da,	// (0x00067ed1) cell_fmradio_pane

0xb541,	// (0x00067d38) cell_fmradio_pane_g1_ParamLimits

0xb541,	// (0x00067d38) cell_fmradio_pane_g1

0xa1b0,	// (0x000669a7) grid_highlight_pane_cp011

0xb6ed,	// (0x00067ee4) poc_content_pane_ParamLimits

0xb6ed,	// (0x00067ee4) poc_content_pane

0xb6ff,	// (0x00067ef6) scroll_pane_cp019

0x3d4a,	// (0x00060541) popup_call_poc_act_window_ParamLimits

0x3d4a,	// (0x00060541) popup_call_poc_act_window

0x3d57,	// (0x0006054e) popup_call_poc_inact_window_ParamLimits

0x3d57,	// (0x0006054e) popup_call_poc_inact_window

0x0259,	// (0x0005ca50) bg_popup_call_poc_act_pane_g

0xc5ea,	// (0x00068de1) bg_popup_call_poc_inact_pane_g1

0xc5f2,	// (0x00068de9) bg_popup_call_poc_inact_pane_g2

0xb707,	// (0x00067efe) popup_call_poc_act_window_g2

0xc5fa,	// (0x00068df1) bg_popup_call_poc_inact_pane_g3

0xc602,	// (0x00068df9) bg_popup_call_poc_inact_pane_g4

0xc60a,	// (0x00068e01) bg_popup_call_poc_inact_pane_g5

0xb70f,	// (0x00067f06) popup_call_poc_act_window_t1_ParamLimits

0xb70f,	// (0x00067f06) popup_call_poc_act_window_t1

0xb737,	// (0x00067f2e) popup_call_poc_act_window_t2_ParamLimits

0xb737,	// (0x00067f2e) popup_call_poc_act_window_t2

0xb75f,	// (0x00067f56) popup_call_poc_act_window_t3_ParamLimits

0xb75f,	// (0x00067f56) popup_call_poc_act_window_t3

0xb787,	// (0x00067f7e) popup_call_poc_act_window_t4_ParamLimits

0xb787,	// (0x00067f7e) popup_call_poc_act_window_t4

0x0003,

0x01c7,	// (0x0005c9be) popup_call_poc_act_window_t_ParamLimits

0x01c7,	// (0x0005c9be) popup_call_poc_act_window_t

0xc612,	// (0x00068e09) bg_popup_call_poc_inact_pane_g6

0xc61a,	// (0x00068e11) bg_popup_call_poc_inact_pane_g7

0xc622,	// (0x00068e19) bg_popup_call_poc_inact_pane_g8

0xb799,	// (0x00067f90) popup_call_poc_inact_window_g2

0xc62a,	// (0x00068e21) bg_popup_call_poc_inact_pane_g9

0x0008,

0x0246,	// (0x0005ca3d) bg_popup_call_poc_inact_pane_g

0xb7a1,	// (0x00067f98) popup_call_poc_inact_window_t1_ParamLimits

0xb7a1,	// (0x00067f98) popup_call_poc_inact_window_t1

0xb7b6,	// (0x00067fad) popup_call_poc_inact_window_t2_ParamLimits

0xb7b6,	// (0x00067fad) popup_call_poc_inact_window_t2

0xb7cb,	// (0x00067fc2) popup_call_poc_inact_window_t3_ParamLimits

0xb7cb,	// (0x00067fc2) popup_call_poc_inact_window_t3

0x0002,

0x01d0,	// (0x0005c9c7) popup_call_poc_inact_window_t_ParamLimits

0x01d0,	// (0x0005c9c7) popup_call_poc_inact_window_t

0xc7af,	// (0x00068fa6) context_pane_ParamLimits

0x4393,	// (0x00060b8a) signal_pane_ParamLimits

0xb396,	// (0x00067b8d) main_call2_pane

0x4306,	// (0x00060afd) popup_phob_thumbnail2_window_ParamLimits

0x4306,	// (0x00060afd) popup_phob_thumbnail2_window

0x3a1b,	// (0x00060212) aid_hotspot_pointer_arrow_pane

0x3a23,	// (0x0006021a) aid_hotspot_pointer_hand_pane

0x407d,	// (0x00060874) phob_pre_status_pane_g5

0x1bad,	// (0x0005e3a4) cams_zoom_pane_ParamLimits

0x1bb9,	// (0x0005e3b0) image_vga_pane_ParamLimits

0x1bc8,	// (0x0005e3bf) main_camera_pane_g1_ParamLimits

0x1bd6,	// (0x0005e3cd) main_camera_pane_g2_ParamLimits

0x1be2,	// (0x0005e3d9) main_camera_pane_g3_ParamLimits

0x1bee,	// (0x0005e3e5) main_camera_pane_g4_ParamLimits

0x1bfa,	// (0x0005e3f1) main_camera_pane_g5_ParamLimits

0x1c06,	// (0x0005e3fd) main_camera_pane_g6_ParamLimits

0x1c12,	// (0x0005e409) main_camera_pane_g7_ParamLimits

0xf20a,	// (0x0006ba01) main_camera_pane_g_ParamLimits

0x1c1e,	// (0x0005e415) main_camera_pane_t1_ParamLimits

0x1c30,	// (0x0005e427) main_camera_pane_t2_ParamLimits

0xf21b,	// (0x0006ba12) main_camera_pane_t_ParamLimits

0xa5c3,	// (0x00066dba) bg_popup_preview_window_pane_cp01_ParamLimits

0xa5c3,	// (0x00066dba) bg_popup_preview_window_pane_cp01

0xb7e0,	// (0x00067fd7) popup_phob_thumbnail2_window_g1_ParamLimits

0xb7e0,	// (0x00067fd7) popup_phob_thumbnail2_window_g1

0xa1b0,	// (0x000669a7) call2_cli_visual_pane

0x3d73,	// (0x0006056a) popup_call2_audio_conf_window_ParamLimits

0x3d73,	// (0x0006056a) popup_call2_audio_conf_window

0x3d88,	// (0x0006057f) popup_call2_audio_first_window_ParamLimits

0x3d88,	// (0x0006057f) popup_call2_audio_first_window

0x3e26,	// (0x0006061d) popup_call2_audio_in_window_ParamLimits

0x3e26,	// (0x0006061d) popup_call2_audio_in_window

0x3e68,	// (0x0006065f) popup_call2_audio_out_window_ParamLimits

0x3e68,	// (0x0006065f) popup_call2_audio_out_window

0x3eca,	// (0x000606c1) popup_call2_audio_second_window_ParamLimits

0x3eca,	// (0x000606c1) popup_call2_audio_second_window

0x3f28,	// (0x0006071f) popup_call2_audio_wait_window_ParamLimits

0x3f28,	// (0x0006071f) popup_call2_audio_wait_window

0xa1b0,	// (0x000669a7) bg_popup_call2_act_pane_cp03

0xa5a5,	// (0x00066d9c) list_conf_pane_cp

0xb7ec,	// (0x00067fe3) popup_call2_audio_conf_window_t1

0xb7fa,	// (0x00067ff1) list_single_graphic_popup_conf2_pane_ParamLimits

0xb7fa,	// (0x00067ff1) list_single_graphic_popup_conf2_pane

0xb079,	// (0x00067870) list_highlight_pane_cp04

0xb80d,	// (0x00068004) list_single_graphic_popup_conf2_pane_g1

0xb08a,	// (0x00067881) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf4e1,	// (0x0006bcd8) list_single_graphic_popup_conf2_pane_g

0xb817,	// (0x0006800e) list_single_graphic_popup_conf2_pane_t1

0xb825,	// (0x0006801c) bg_popup_call2_act_pane_cp01_ParamLimits

0xb825,	// (0x0006801c) bg_popup_call2_act_pane_cp01

0xb8af,	// (0x000680a6) call_type_pane_cp05_ParamLimits

0xb8af,	// (0x000680a6) call_type_pane_cp05

0xb903,	// (0x000680fa) popup_call2_audio_second_window_g1_ParamLimits

0xb903,	// (0x000680fa) popup_call2_audio_second_window_g1

0xb957,	// (0x0006814e) popup_call2_audio_second_window_g2_ParamLimits

0xb957,	// (0x0006814e) popup_call2_audio_second_window_g2

0x0002,

0x01dc,	// (0x0005c9d3) popup_call2_audio_second_window_g_ParamLimits

0x01dc,	// (0x0005c9d3) popup_call2_audio_second_window_g

0xb9bc,	// (0x000681b3) popup_call2_audio_second_window_t1_ParamLimits

0xb9bc,	// (0x000681b3) popup_call2_audio_second_window_t1

0xba77,	// (0x0006826e) popup_call2_audio_second_window_t2_ParamLimits

0xba77,	// (0x0006826e) popup_call2_audio_second_window_t2

0xbaca,	// (0x000682c1) popup_call2_audio_second_window_t3_ParamLimits

0xbaca,	// (0x000682c1) popup_call2_audio_second_window_t3

0x0003,

0x01e3,	// (0x0005c9da) popup_call2_audio_second_window_t_ParamLimits

0x01e3,	// (0x0005c9da) popup_call2_audio_second_window_t

0xa1b0,	// (0x000669a7) bg_popup_call2_in_pane_cp02

0xa1ba,	// (0x000669b1) call_type_pane_cp04

0xa1c2,	// (0x000669b9) popup_call2_audio_wait_window_g1

0xa1ca,	// (0x000669c1) popup_call2_audio_wait_window_g2

0x0001,

0xf0f5,	// (0x0006b8ec) popup_call2_audio_wait_window_g

0xa1d2,	// (0x000669c9) popup_call2_audio_wait_window_t3

0xbbbd,	// (0x000683b4) bg_popup_call2_act_pane_ParamLimits

0xbbbd,	// (0x000683b4) bg_popup_call2_act_pane

0xbc7d,	// (0x00068474) call_type_pane_cp03_ParamLimits

0xbc7d,	// (0x00068474) call_type_pane_cp03

0xbce1,	// (0x000684d8) popup_call2_audio_first_window_g1_ParamLimits

0xbce1,	// (0x000684d8) popup_call2_audio_first_window_g1

0xbd51,	// (0x00068548) popup_call2_audio_first_window_g2_ParamLimits

0xbd51,	// (0x00068548) popup_call2_audio_first_window_g2

0xb0f2,	// (0x000678e9) popup_call2_audio_first_window_g3_ParamLimits

0xb0f2,	// (0x000678e9) popup_call2_audio_first_window_g3

0x0004,

0xf4e6,	// (0x0006bcdd) popup_call2_audio_first_window_g_ParamLimits

0xf4e6,	// (0x0006bcdd) popup_call2_audio_first_window_g

0xbe2f,	// (0x00068626) popup_call2_audio_first_window_t1_ParamLimits

0xbe2f,	// (0x00068626) popup_call2_audio_first_window_t1

0xbf32,	// (0x00068729) popup_call2_audio_first_window_t4_ParamLimits

0xbf32,	// (0x00068729) popup_call2_audio_first_window_t4

0xc015,	// (0x0006880c) popup_call2_audio_first_window_t5_ParamLimits

0xc015,	// (0x0006880c) popup_call2_audio_first_window_t5

0x0003,

0x01f7,	// (0x0005c9ee) popup_call2_audio_first_window_t_ParamLimits

0x01f7,	// (0x0005c9ee) popup_call2_audio_first_window_t

0xa5bb,	// (0x00066db2) bg_popup_call2_act_pane_g1

0xc682,	// (0x00068e79) popup_cale_lunar_info_window_t1

0xc690,	// (0x00068e87) popup_cale_lunar_info_window_t2

0xc69e,	// (0x00068e95) popup_cale_lunar_info_window_t3

0xa1b0,	// (0x000669a7) bg_popup_call2_bubble_pane

0xc116,	// (0x0006890d) bg_popup_call2_in_pane_cp01_ParamLimits

0xc116,	// (0x0006890d) bg_popup_call2_in_pane_cp01

0x9908,	// (0x000660ff) call_type_pane_cp02

0xc15e,	// (0x00068955) popup_call2_audio_out_window_g1_ParamLimits

0xc15e,	// (0x00068955) popup_call2_audio_out_window_g1

0xc18a,	// (0x00068981) popup_call2_audio_out_window_g2_ParamLimits

0xc18a,	// (0x00068981) popup_call2_audio_out_window_g2

0xc1b2,	// (0x000689a9) popup_call2_audio_out_window_g3_ParamLimits

0xc1b2,	// (0x000689a9) popup_call2_audio_out_window_g3

0x0003,

0x0200,	// (0x0005c9f7) popup_call2_audio_out_window_g_ParamLimits

0x0200,	// (0x0005c9f7) popup_call2_audio_out_window_g

0xc1ed,	// (0x000689e4) popup_call2_audio_out_window_t1_ParamLimits

0xc1ed,	// (0x000689e4) popup_call2_audio_out_window_t1

0xc24c,	// (0x00068a43) popup_call2_audio_out_window_t2_ParamLimits

0xc24c,	// (0x00068a43) popup_call2_audio_out_window_t2

0xc2a0,	// (0x00068a97) popup_call2_audio_out_window_t3_ParamLimits

0xc2a0,	// (0x00068a97) popup_call2_audio_out_window_t3

0xc2b6,	// (0x00068aad) popup_call2_audio_out_window_t4_ParamLimits

0xc2b6,	// (0x00068aad) popup_call2_audio_out_window_t4

0xc2cc,	// (0x00068ac3) popup_call2_audio_out_window_t5_ParamLimits

0xc2cc,	// (0x00068ac3) popup_call2_audio_out_window_t5

0x0005,

0x0209,	// (0x0005ca00) popup_call2_audio_out_window_t_ParamLimits

0x0209,	// (0x0005ca00) popup_call2_audio_out_window_t

0xc330,	// (0x00068b27) bg_popup_call2_in_pane_ParamLimits

0xc330,	// (0x00068b27) bg_popup_call2_in_pane

0xc38c,	// (0x00068b83) popup_call2_audio_in_window_g1_ParamLimits

0xc38c,	// (0x00068b83) popup_call2_audio_in_window_g1

0xc3c4,	// (0x00068bbb) popup_call2_audio_in_window_g2_ParamLimits

0xc3c4,	// (0x00068bbb) popup_call2_audio_in_window_g2

0xc3fc,	// (0x00068bf3) popup_call2_audio_in_window_g3_ParamLimits

0xc3fc,	// (0x00068bf3) popup_call2_audio_in_window_g3

0x0003,

0x0216,	// (0x0005ca0d) popup_call2_audio_in_window_g_ParamLimits

0x0216,	// (0x0005ca0d) popup_call2_audio_in_window_g

0xc454,	// (0x00068c4b) popup_call2_audio_in_window_t1_ParamLimits

0xc454,	// (0x00068c4b) popup_call2_audio_in_window_t1

0xc4d4,	// (0x00068ccb) popup_call2_audio_in_window_t2_ParamLimits

0xc4d4,	// (0x00068ccb) popup_call2_audio_in_window_t2

0xc554,	// (0x00068d4b) popup_call2_audio_in_window_t3_ParamLimits

0xc554,	// (0x00068d4b) popup_call2_audio_in_window_t3

0xc56e,	// (0x00068d65) popup_call2_audio_in_window_t4_ParamLimits

0xc56e,	// (0x00068d65) popup_call2_audio_in_window_t4

0xc580,	// (0x00068d77) popup_call2_audio_in_window_t5_ParamLimits

0xc580,	// (0x00068d77) popup_call2_audio_in_window_t5

0xc595,	// (0x00068d8c) popup_call2_audio_in_window_t6_ParamLimits

0xc595,	// (0x00068d8c) popup_call2_audio_in_window_t6

0x0005,

0x021f,	// (0x0005ca16) popup_call2_audio_in_window_t_ParamLimits

0x021f,	// (0x0005ca16) popup_call2_audio_in_window_t

0xa5bb,	// (0x00066db2) bg_popup_call2_in_pane_g1

0xc6ac,	// (0x00068ea3) popup_cale_lunar_info_window_t4

0x0003,

0x0287,	// (0x0005ca7e) popup_cale_lunar_info_window_t

0xa5c3,	// (0x00066dba) bg_popup_call2_rect_pane_ParamLimits

0xa5c3,	// (0x00066dba) bg_popup_call2_rect_pane

0xa1b0,	// (0x000669a7) call2_cli_visual_graphic_pane

0xa1b0,	// (0x000669a7) call2_cli_visual_text_pane

0x4441,	// (0x00060c38) smil_status_volume_pane_g3

0x0002,

0xa785,	// (0x00066f7c) call2_cli_visual_graphic_pane_g1

0xa785,	// (0x00066f7c) call2_cli_visual_graphic_pane_g2

0xa785,	// (0x00066f7c) call2_cli_visual_graphic_pane_g3

0x0002,

0xf4f1,	// (0x0006bce8) call2_cli_visual_graphic_pane_g

0xc5aa,	// (0x00068da1) bg_popup_call2_rect_pane_g1

0xa823,	// (0x0006701a) bg_popup_call2_rect_pane_g2

0xc5b2,	// (0x00068da9) bg_popup_call2_rect_pane_g3

0xc5ba,	// (0x00068db1) bg_popup_call2_rect_pane_g4

0xc5c2,	// (0x00068db9) bg_popup_call2_rect_pane_g5

0xc5ca,	// (0x00068dc1) bg_popup_call2_rect_pane_g6

0xc5d2,	// (0x00068dc9) bg_popup_call2_rect_pane_g7

0xc5da,	// (0x00068dd1) bg_popup_call2_rect_pane_g8

0xc5e2,	// (0x00068dd9) bg_popup_call2_rect_pane_g9

0x0008,

0xf4f8,	// (0x0006bcef) bg_popup_call2_rect_pane_g

0xc5ea,	// (0x00068de1) bg_popup_call2_bubble_pane_g1

0xc5f2,	// (0x00068de9) bg_popup_call2_bubble_pane_g2

0xc5fa,	// (0x00068df1) bg_popup_call2_bubble_pane_g3

0xc602,	// (0x00068df9) bg_popup_call2_bubble_pane_g4

0xc60a,	// (0x00068e01) bg_popup_call2_bubble_pane_g5

0xc612,	// (0x00068e09) bg_popup_call2_bubble_pane_g6

0xc61a,	// (0x00068e11) bg_popup_call2_bubble_pane_g7

0xc622,	// (0x00068e19) bg_popup_call2_bubble_pane_g8

0xc62a,	// (0x00068e21) bg_popup_call2_bubble_pane_g9

0x0008,

0x0246,	// (0x0005ca3d) bg_popup_call2_bubble_pane_g

0x15b1,	// (0x0005dda8) aid_cale_week_size_cell_pane

0x1c42,	// (0x0005e439) aid_cams_cif_uncrop_pane_ParamLimits

0x1c42,	// (0x0005e439) aid_cams_cif_uncrop_pane

0x1d9d,	// (0x0005e594) aid_cams_size_cell_ParamLimits

0x1d9d,	// (0x0005e594) aid_cams_size_cell

0x1da9,	// (0x0005e5a0) grid_cams_pane_ParamLimits

0x1db7,	// (0x0005e5ae) linegrid_cams_pane_ParamLimits

0x1ef8,	// (0x0005e6ef) call_video_pane_t1

0x1f19,	// (0x0005e710) call_video_pane_t2

0x0001,

0xf26e,	// (0x0006ba65) call_video_pane_t

0x2488,	// (0x0005ec7f) aid_cale_month_size_cell_pane_ParamLimits

0x2488,	// (0x0005ec7f) aid_cale_month_size_cell_pane

0xf53b,	// (0x0006bd32) smil_status_volume_pane_g

0x444e,	// (0x00060c45) volume_smil_pane_ParamLimits

0x0d12,	// (0x0005d509) aid_popup2_width_pane

0x14a5,	// (0x0005dc9c) cell_qdial_pane_g4_ParamLimits

0x14a5,	// (0x0005dc9c) cell_qdial_pane_g4

0x3469,	// (0x0005fc60) aid_blid_cardinal_pane_ParamLimits

0x3479,	// (0x0005fc70) aid_blid_destination_pane_ParamLimits

0x3479,	// (0x0005fc70) aid_blid_destination_pane

0xa5c3,	// (0x00066dba) bg_popup_call_poc_act_pane_ParamLimits

0xa5c3,	// (0x00066dba) bg_popup_call_poc_act_pane

0xa5c3,	// (0x00066dba) bg_popup_call_poc_inact_pane_ParamLimits

0xa5c3,	// (0x00066dba) bg_popup_call_poc_inact_pane

0xc632,	// (0x00068e29) bg_popup_call_poc_act_pane_g1

0xc63a,	// (0x00068e31) bg_popup_call_poc_act_pane_g2

0xc642,	// (0x00068e39) bg_popup_call_poc_act_pane_g3

0xc602,	// (0x00068df9) bg_popup_call_poc_act_pane_g4

0xc60a,	// (0x00068e01) bg_popup_call_poc_act_pane_g5

0xc64a,	// (0x00068e41) bg_popup_call_poc_act_pane_g6

0xc61a,	// (0x00068e11) bg_popup_call_poc_act_pane_g7

0xc652,	// (0x00068e49) bg_popup_call_poc_act_pane_g8

0xa1b0,	// (0x000669a7) main_usb_pane

0x423f,	// (0x00060a36) popup_cale_lunar_info_window

0x2238,	// (0x0005ea2f) im_reading_pane_t1_ParamLimits

0xa9f8,	// (0x000671ef) list_im_pane_ParamLimits

0xaa09,	// (0x00067200) scroll_pane_cp07_ParamLimits

0xa1b0,	// (0x000669a7) grid_highlight_pane_cp012

0xa5c3,	// (0x00066dba) mup_scale_pane_ParamLimits

0xb0f2,	// (0x000678e9) main_usb_pane_g1_ParamLimits

0xb0f2,	// (0x000678e9) main_usb_pane_g1

0x3fa0,	// (0x00060797) main_usb_pane_g2_ParamLimits

0x3fa0,	// (0x00060797) main_usb_pane_g2

0x0001,

0xf50b,	// (0x0006bd02) main_usb_pane_g_ParamLimits

0xf50b,	// (0x0006bd02) main_usb_pane_g

0x3fac,	// (0x000607a3) main_usb_pane_t1_ParamLimits

0x3fac,	// (0x000607a3) main_usb_pane_t1

0x3fbe,	// (0x000607b5) main_usb_pane_t2_ParamLimits

0x3fbe,	// (0x000607b5) main_usb_pane_t2

0x3fd0,	// (0x000607c7) main_usb_pane_t3_ParamLimits

0x3fd0,	// (0x000607c7) main_usb_pane_t3

0x3fe2,	// (0x000607d9) main_usb_pane_t4_ParamLimits

0x3fe2,	// (0x000607d9) main_usb_pane_t4

0x3ff4,	// (0x000607eb) main_usb_pane_t5_ParamLimits

0x3ff4,	// (0x000607eb) main_usb_pane_t5

0x4006,	// (0x000607fd) main_usb_pane_t6_ParamLimits

0x4006,	// (0x000607fd) main_usb_pane_t6

0x0005,

0xf510,	// (0x0006bd07) main_usb_pane_t_ParamLimits

0x340f,	// (0x0005fc06) aid_text_placing

0x341b,	// (0x0005fc12) main_location2_pane_t1_ParamLimits

0x342f,	// (0x0005fc26) main_location2_pane_t2_ParamLimits

0x3443,	// (0x0005fc3a) main_location2_pane_t3_ParamLimits

0x3457,	// (0x0005fc4e) main_location2_pane_t4_ParamLimits

0x3457,	// (0x0005fc4e) main_location2_pane_t4

0xf3cf,	// (0x0006bbc6) main_location2_pane_t_ParamLimits

0xa5ff,	// (0x00066df6) find_pinb_pane_g2_ParamLimits

0xa5ff,	// (0x00066df6) find_pinb_pane_g2

0x0001,

0xf11b,	// (0x0006b912) find_pinb_pane_g_ParamLimits

0xf11b,	// (0x0006b912) find_pinb_pane_g

0xa60b,	// (0x00066e02) find_pinb_pane_t1_ParamLimits

0xa61d,	// (0x00066e14) find_pinb_pane_t2_ParamLimits

0xf120,	// (0x0006b917) find_pinb_pane_t_ParamLimits

0xa1b0,	// (0x000669a7) main_call3_pane

0x29fc,	// (0x0005f1f3) cale_month_day_heading_pane_t1_ParamLimits

0x2a82,	// (0x0005f279) cale_month_day_heading_pane_t2_ParamLimits

0x2b13,	// (0x0005f30a) cale_month_day_heading_pane_t3_ParamLimits

0x2ba4,	// (0x0005f39b) cale_month_day_heading_pane_t4_ParamLimits

0x2c35,	// (0x0005f42c) cale_month_day_heading_pane_t5_ParamLimits

0x2cc6,	// (0x0005f4bd) cale_month_day_heading_pane_t6_ParamLimits

0x2d63,	// (0x0005f55a) cale_month_day_heading_pane_t7_ParamLimits

0xf2a6,	// (0x0006ba9d) cale_month_day_heading_pane_t_ParamLimits

0xac53,	// (0x0006744a) smil_status_volume_pane

0x3b57,	// (0x0006034e) postcard_address_pane_ParamLimits

0x3b57,	// (0x0006034e) postcard_address_pane

0x3b63,	// (0x0006035a) postcard_message_pane_ParamLimits

0x3b63,	// (0x0006035a) postcard_message_pane

0x3f67,	// (0x0006075e) call2_cli_visual_pane_t1_ParamLimits

0x3f67,	// (0x0006075e) call2_cli_visual_pane_t1

0x45a3,	// (0x00060d9a) postcard_message_pane_t1_ParamLimits

0x45a3,	// (0x00060d9a) postcard_message_pane_t1

0x458c,	// (0x00060d83) postcard_address_pane_t1_ParamLimits

0x458c,	// (0x00060d83) postcard_address_pane_t1

0x457d,	// (0x00060d74) popup_call3_audio_in_window_ParamLimits

0x457d,	// (0x00060d74) popup_call3_audio_in_window

0x4463,	// (0x00060c5a) bg_popup_call3_in_pane_ParamLimits

0x4463,	// (0x00060c5a) bg_popup_call3_in_pane

0x44c3,	// (0x00060cba) popup_call3_audio_in_window_g1_ParamLimits

0x44c3,	// (0x00060cba) popup_call3_audio_in_window_g1

0x44db,	// (0x00060cd2) popup_call3_audio_in_window_g2_ParamLimits

0x44db,	// (0x00060cd2) popup_call3_audio_in_window_g2

0x44f3,	// (0x00060cea) popup_call3_audio_in_window_g3_ParamLimits

0x44f3,	// (0x00060cea) popup_call3_audio_in_window_g3

0x0003,

0xf542,	// (0x0006bd39) popup_call3_audio_in_window_g_ParamLimits

0xf542,	// (0x0006bd39) popup_call3_audio_in_window_g

0x451b,	// (0x00060d12) popup_call3_audio_in_window_t1_ParamLimits

0x451b,	// (0x00060d12) popup_call3_audio_in_window_t1

0x4543,	// (0x00060d3a) popup_call3_audio_in_window_t2_ParamLimits

0x4543,	// (0x00060d3a) popup_call3_audio_in_window_t2

0x456b,	// (0x00060d62) popup_call3_audio_in_window_t3_ParamLimits

0x456b,	// (0x00060d62) popup_call3_audio_in_window_t3

0x0002,

0xf54b,	// (0x0006bd42) popup_call3_audio_in_window_t_ParamLimits

0xf54b,	// (0x0006bd42) popup_call3_audio_in_window_t

0xb396,	// (0x00067b8d) bg_popup_call3_rect_pane

0xc5aa,	// (0x00068da1) bg_popup_call3_rect_pane_g1

0xa823,	// (0x0006701a) bg_popup_call3_rect_pane_g2

0xc5b2,	// (0x00068da9) bg_popup_call3_rect_pane_g3

0xc5ba,	// (0x00068db1) bg_popup_call3_rect_pane_g4

0xc5c2,	// (0x00068db9) bg_popup_call3_rect_pane_g5

0xc5ca,	// (0x00068dc1) bg_popup_call3_rect_pane_g6

0xc5d2,	// (0x00068dc9) bg_popup_call3_rect_pane_g7

0x378f,	// (0x0005ff86) mup_visualizer_osc_pane

0xb455,	// (0x00067c4c) mup_visualizer_spec_pane

0x4483,	// (0x00060c7a) call3_video_qcif_pane_ParamLimits

0x4483,	// (0x00060c7a) call3_video_qcif_pane

0x4493,	// (0x00060c8a) call3_video_qcif_uncrop_pane_ParamLimits

0x4493,	// (0x00060c8a) call3_video_qcif_uncrop_pane

0x44a1,	// (0x00060c98) call3_video_subqcif_pane_ParamLimits

0x44a1,	// (0x00060c98) call3_video_subqcif_pane

0x44b3,	// (0x00060caa) call3_video_subqcif_uncrop_pane_ParamLimits

0x44b3,	// (0x00060caa) call3_video_subqcif_uncrop_pane

0x450b,	// (0x00060d02) popup_call3_audio_in_window_g4_ParamLimits

0x450b,	// (0x00060d02) popup_call3_audio_in_window_g4

0x442e,	// (0x00060c25) mup_spec_half_pane

0x4437,	// (0x00060c2e) mup_spec_half_pane_cp

0xc80f,	// (0x00069006) mup_osc_middle_pane

0xc818,	// (0x0006900f) mup_visualizer_osc_pane_g1

0x440f,	// (0x00060c06) mup_spec_bar_pane_ParamLimits

0x440f,	// (0x00060c06) mup_spec_bar_pane

0xc7fc,	// (0x00068ff3) mup_spec_bar_pane_g1

0xc806,	// (0x00068ffd) mup_spec_bar_pane_g2

0x0001,

0x02cb,	// (0x0005cac2) mup_spec_bar_pane_g

0x15b1,	// (0x0005dda8) aid_cale_week_size_cell_pane_ParamLimits

0x15c6,	// (0x0005ddbd) bg_cale_heading_pane_ParamLimits

0xa860,	// (0x00067057) bg_cale_pane_cp01_ParamLimits

0x15e8,	// (0x0005dddf) cale_week_corner_pane_ParamLimits

0x1602,	// (0x0005ddf9) cale_week_day_heading_pane_ParamLimits

0x1624,	// (0x0005de1b) cale_week_scroll_pane_g1_ParamLimits

0x1641,	// (0x0005de38) cale_week_scroll_pane_g2_ParamLimits

0x1654,	// (0x0005de4b) cale_week_scroll_pane_g3_ParamLimits

0x1667,	// (0x0005de5e) cale_week_scroll_pane_g4_ParamLimits

0x167a,	// (0x0005de71) cale_week_scroll_pane_g5_ParamLimits

0x168d,	// (0x0005de84) cale_week_scroll_pane_g6_ParamLimits

0x16a0,	// (0x0005de97) cale_week_scroll_pane_g7_ParamLimits

0x16b3,	// (0x0005deaa) cale_week_scroll_pane_g8_ParamLimits

0x16c8,	// (0x0005debf) cale_week_scroll_pane_g9_ParamLimits

0x16db,	// (0x0005ded2) cale_week_scroll_pane_g10_ParamLimits

0x16ee,	// (0x0005dee5) cale_week_scroll_pane_g11_ParamLimits

0x1701,	// (0x0005def8) cale_week_scroll_pane_g12_ParamLimits

0x1718,	// (0x0005df0f) cale_week_scroll_pane_g13_ParamLimits

0x1733,	// (0x0005df2a) cale_week_scroll_pane_g14_ParamLimits

0x174e,	// (0x0005df45) cale_week_scroll_pane_g15_ParamLimits

0xf1ac,	// (0x0006b9a3) cale_week_scroll_pane_g_ParamLimits

0x177e,	// (0x0005df75) cale_week_time_pane_ParamLimits

0x1793,	// (0x0005df8a) grid_cale_week_pane_ParamLimits

0xa87e,	// (0x00067075) listscroll_cale_week_pane_t1

0xa890,	// (0x00067087) scroll_pane_cp08_ParamLimits

0x24f1,	// (0x0005ece8) cale_month_corner_pane_ParamLimits

0xac29,	// (0x00067420) cale_month_pane_t1

0x2995,	// (0x0005f18c) cale_month_week_pane_ParamLimits

0xb0f2,	// (0x000678e9) popup_call_status_window_g1_ParamLimits

0x3255,	// (0x0005fa4c) popup_call_status_window_g2_ParamLimits

0x3261,	// (0x0005fa58) popup_call_status_window_g3_ParamLimits

0xf356,	// (0x0006bb4d) popup_call_status_window_g_ParamLimits

0xafd5,	// (0x000677cc) aid_call2_pane

0x3a0d,	// (0x00060204) msg_header_pane_g1

0x3b57,	// (0x0006034e) postcard_address2_pane_ParamLimits

0x3b57,	// (0x0006034e) postcard_address2_pane

0x3b63,	// (0x0006035a) postcard_message2_pane_ParamLimits

0x3b63,	// (0x0006035a) postcard_message2_pane

0x43a1,	// (0x00060b98) message2_row_pane_ParamLimits

0x43a1,	// (0x00060b98) message2_row_pane

0x43be,	// (0x00060bb5) address2_row_pane_ParamLimits

0x43be,	// (0x00060bb5) address2_row_pane

0xc7ca,	// (0x00068fc1) postcard_message2_row_pane_g1

0xc7d2,	// (0x00068fc9) postcard_message2_row_pane_t1

0xc7ca,	// (0x00068fc1) address2_row_pane_g1

0xc7d2,	// (0x00068fc9) address2_row_pane_t1

0x1b04,	// (0x0005e2fb) aid_size_cell_vorec

0xa1b0,	// (0x000669a7) main_rss_pane

0x43d1,	// (0x00060bc8) rss_list_single_pane_ParamLimits

0x43d1,	// (0x00060bc8) rss_list_single_pane

0xc7e0,	// (0x00068fd7) rss_list_single_pane_t1

0xc7ee,	// (0x00068fe5) rss_list_single_pane_t2

0x0001,

0x02c6,	// (0x0005cabd) rss_list_single_pane_t

0xa1b0,	// (0x000669a7) main_camera2_pane

0xa1b0,	// (0x000669a7) main_video2_pane

0x4607,	// (0x00060dfe) cams_zoom_pane_cp2_ParamLimits

0x4607,	// (0x00060dfe) cams_zoom_pane_cp2

0x4613,	// (0x00060e0a) image2_vga_pane_ParamLimits

0x4613,	// (0x00060e0a) image2_vga_pane

0x4622,	// (0x00060e19) main_camera2_pane_g1_ParamLimits

0x4622,	// (0x00060e19) main_camera2_pane_g1

0x462e,	// (0x00060e25) main_camera2_pane_g2_ParamLimits

0x462e,	// (0x00060e25) main_camera2_pane_g2

0x463a,	// (0x00060e31) main_camera2_pane_g3_ParamLimits

0x463a,	// (0x00060e31) main_camera2_pane_g3

0x4646,	// (0x00060e3d) main_camera2_pane_g4_ParamLimits

0x4646,	// (0x00060e3d) main_camera2_pane_g4

0x4652,	// (0x00060e49) main_camera2_pane_g5_ParamLimits

0x4652,	// (0x00060e49) main_camera2_pane_g5

0x465e,	// (0x00060e55) main_camera2_pane_g6_ParamLimits

0x465e,	// (0x00060e55) main_camera2_pane_g6

0x466a,	// (0x00060e61) main_camera2_pane_g7_ParamLimits

0x466a,	// (0x00060e61) main_camera2_pane_g7

0x4676,	// (0x00060e6d) main_camera2_pane_g8_ParamLimits

0x4676,	// (0x00060e6d) main_camera2_pane_g8

0x0008,

0xf552,	// (0x0006bd49) main_camera2_pane_g_ParamLimits

0xf552,	// (0x0006bd49) main_camera2_pane_g

0x468e,	// (0x00060e85) main_camera2_pane_t1_ParamLimits

0x468e,	// (0x00060e85) main_camera2_pane_t1

0x46a0,	// (0x00060e97) main_camera2_pane_t2_ParamLimits

0x46a0,	// (0x00060e97) main_camera2_pane_t2

0x46b2,	// (0x00060ea9) main_camera2_pane_t3_ParamLimits

0x46b2,	// (0x00060ea9) main_camera2_pane_t3

0x46c4,	// (0x00060ebb) main_camera2_pane_t4_ParamLimits

0x46c4,	// (0x00060ebb) main_camera2_pane_t4

0x0006,

0xf565,	// (0x0006bd5c) main_camera2_pane_t_ParamLimits

0xf565,	// (0x0006bd5c) main_camera2_pane_t

0x4726,	// (0x00060f1d) cams_zoom_pane_cp4_ParamLimits

0x4726,	// (0x00060f1d) cams_zoom_pane_cp4

0x4736,	// (0x00060f2d) image2_cif_pane_ParamLimits

0x4736,	// (0x00060f2d) image2_cif_pane

0x474b,	// (0x00060f42) image2_subqcif_pane_ParamLimits

0x474b,	// (0x00060f42) image2_subqcif_pane

0x475a,	// (0x00060f51) main_video2_pane_g1_ParamLimits

0x475a,	// (0x00060f51) main_video2_pane_g1

0x476c,	// (0x00060f63) main_video2_pane_g2_ParamLimits

0x476c,	// (0x00060f63) main_video2_pane_g2

0x477c,	// (0x00060f73) main_video2_pane_g3_ParamLimits

0x477c,	// (0x00060f73) main_video2_pane_g3

0x478c,	// (0x00060f83) main_video2_pane_g4_ParamLimits

0x478c,	// (0x00060f83) main_video2_pane_g4

0x479c,	// (0x00060f93) main_video2_pane_g5_ParamLimits

0x479c,	// (0x00060f93) main_video2_pane_g5

0x47ac,	// (0x00060fa3) main_video2_pane_g6_ParamLimits

0x47ac,	// (0x00060fa3) main_video2_pane_g6

0x0005,

0xf574,	// (0x0006bd6b) main_video2_pane_g_ParamLimits

0xf574,	// (0x0006bd6b) main_video2_pane_g

0x47be,	// (0x00060fb5) main_video2_pane_t1_ParamLimits

0x47be,	// (0x00060fb5) main_video2_pane_t1

0x47d8,	// (0x00060fcf) main_video2_pane_t2_ParamLimits

0x47d8,	// (0x00060fcf) main_video2_pane_t2

0x47fe,	// (0x00060ff5) main_video2_pane_t3_ParamLimits

0x47fe,	// (0x00060ff5) main_video2_pane_t3

0x0002,

0xf581,	// (0x0006bd78) main_video2_pane_t_ParamLimits

0xf581,	// (0x0006bd78) main_video2_pane_t

0x40bd,	// (0x000608b4) call_muted_g2

0x0001,

0xf536,	// (0x0006bd2d) call_muted_g

0xa1b0,	// (0x000669a7) main_mup2_pane

0xc84f,	// (0x00069046) main_mup2_pane_g1_ParamLimits

0xc84f,	// (0x00069046) main_mup2_pane_g1

0x4824,	// (0x0006101b) main_mup2_pane_g2_ParamLimits

0x4824,	// (0x0006101b) main_mup2_pane_g2

0x4aa6,	// (0x0006129d) main_mup_pane_g13_cp1

0x4aae,	// (0x000612a5) mup_volume_pane_cp1

0x4844,	// (0x0006103b) main_mup2_pane_g4_ParamLimits

0x4844,	// (0x0006103b) main_mup2_pane_g4

0x4859,	// (0x00061050) main_mup2_pane_g5_ParamLimits

0x4859,	// (0x00061050) main_mup2_pane_g5

0x486e,	// (0x00061065) main_mup2_pane_g6_ParamLimits

0x486e,	// (0x00061065) main_mup2_pane_g6

0x4883,	// (0x0006107a) main_mup2_pane_g7_ParamLimits

0x4883,	// (0x0006107a) main_mup2_pane_g7

0x0006,

0xf588,	// (0x0006bd7f) main_mup2_pane_g_ParamLimits

0xf588,	// (0x0006bd7f) main_mup2_pane_g

0x489f,	// (0x00061096) main_mup2_pane_t1_ParamLimits

0x489f,	// (0x00061096) main_mup2_pane_t1

0x48b6,	// (0x000610ad) main_mup2_pane_t2_ParamLimits

0x48b6,	// (0x000610ad) main_mup2_pane_t2

0x48cd,	// (0x000610c4) main_mup2_pane_t3_ParamLimits

0x48cd,	// (0x000610c4) main_mup2_pane_t3

0x48e4,	// (0x000610db) main_mup2_pane_t4_ParamLimits

0x48e4,	// (0x000610db) main_mup2_pane_t4

0x48fe,	// (0x000610f5) main_mup2_pane_t5_ParamLimits

0x48fe,	// (0x000610f5) main_mup2_pane_t5

0x4918,	// (0x0006110f) main_mup2_pane_t6_ParamLimits

0x4918,	// (0x0006110f) main_mup2_pane_t6

0x0005,

0xf597,	// (0x0006bd8e) main_mup2_pane_t_ParamLimits

0xf597,	// (0x0006bd8e) main_mup2_pane_t

0x4950,	// (0x00061147) mup2_visualizer_pane_ParamLimits

0x4950,	// (0x00061147) mup2_visualizer_pane

0x4986,	// (0x0006117d) mup_progress_pane_cp_ParamLimits

0x4986,	// (0x0006117d) mup_progress_pane_cp

0x4a91,	// (0x00061288) mup_volume_pane_cp_ParamLimits

0x4a91,	// (0x00061288) mup_volume_pane_cp

0x499d,	// (0x00061194) mup2_visualizer_pane_g1_ParamLimits

0x499d,	// (0x00061194) mup2_visualizer_pane_g1

0xc85b,	// (0x00069052) mup2_visualizer_pane_g2_ParamLimits

0xc85b,	// (0x00069052) mup2_visualizer_pane_g2

0x49b2,	// (0x000611a9) mup2_visualizer_pane_g3_ParamLimits

0x49b2,	// (0x000611a9) mup2_visualizer_pane_g3

0x0002,

0xf5a4,	// (0x0006bd9b) mup2_visualizer_pane_g_ParamLimits

0xf5a4,	// (0x0006bd9b) mup2_visualizer_pane_g

0xb67c,	// (0x00067e73) aid_size_cell_fmradio

0x41d3,	// (0x000609ca) aid_height_parent_landcape

0xaa87,	// (0x0006727e) wml_content_pane_cp

0xaa8f,	// (0x00067286) wml_tabs_pane

0xaa98,	// (0x0006728f) popup_wml_miniature_window

0xaaa0,	// (0x00067297) scroll_pane_cp021

0xaab4,	// (0x000672ab) wml_content_pane_comp8

0xa1b0,	// (0x000669a7) bg_popup_sub_pane_cp05

0xc879,	// (0x00069070) popup_wml_miniature_window_g1

0xc881,	// (0x00069078) wml_miniature_view_pane

0x49c0,	// (0x000611b7) aid_size_wml_view

0x49c8,	// (0x000611bf) wml_miniature_view_pane_g1

0x49d1,	// (0x000611c8) wml_miniature_view_pane_g2

0x49da,	// (0x000611d1) wml_miniature_view_pane_g3

0x49e2,	// (0x000611d9) wml_miniature_view_pane_g4

0x49ea,	// (0x000611e1) wml_miniature_view_pane_g5

0x49f2,	// (0x000611e9) wml_miniature_view_pane_g6

0x49fa,	// (0x000611f1) wml_miniature_view_pane_g7

0x4a02,	// (0x000611f9) wml_miniature_view_pane_g8

0x0007,

0xf5ab,	// (0x0006bda2) wml_miniature_view_pane_g

0xc84f,	// (0x00069046) background_graphic_ParamLimits

0xc84f,	// (0x00069046) background_graphic

0xc889,	// (0x00069080) wml_tabs_2_pane

0xc892,	// (0x00069089) wml_tabs_3_pane_ParamLimits

0xc892,	// (0x00069089) wml_tabs_3_pane

0xc8a4,	// (0x0006909b) wml_tabs_4_pane_ParamLimits

0xc8a4,	// (0x0006909b) wml_tabs_4_pane

0xc8ba,	// (0x000690b1) wml_tabs_5_pane_ParamLimits

0xc8ba,	// (0x000690b1) wml_tabs_5_pane

0xc8d4,	// (0x000690cb) wml_tabs_pane_g2_ParamLimits

0xc8d4,	// (0x000690cb) wml_tabs_pane_g2

0xc8e8,	// (0x000690df) wml_tabs_pane_g3_ParamLimits

0xc8e8,	// (0x000690df) wml_tabs_pane_g3

0x4a0a,	// (0x00061201) wml_tabs_2_active_pane_ParamLimits

0x4a0a,	// (0x00061201) wml_tabs_2_active_pane

0x4a1a,	// (0x00061211) wml_tabs_2_passive_pane_ParamLimits

0x4a1a,	// (0x00061211) wml_tabs_2_passive_pane

0x4a2a,	// (0x00061221) wml_tabs_3_active_pane_cp_ParamLimits

0x4a2a,	// (0x00061221) wml_tabs_3_active_pane_cp

0x4a3b,	// (0x00061232) wml_tabs_3_passive_pane_ParamLimits

0x4a3b,	// (0x00061232) wml_tabs_3_passive_pane

0x4a4c,	// (0x00061243) wml_tabs_3_passive_pane_cp_ParamLimits

0x4a4c,	// (0x00061243) wml_tabs_3_passive_pane_cp

0x4a5d,	// (0x00061254) tabs_4_active_pane

0x4a65,	// (0x0006125c) tabs_4_passive_pane

0x4a6d,	// (0x00061264) tabs_4_passive_pane_cp

0x4a75,	// (0x0006126c) tabs_4_passive_pane_cp2

0x3f98,	// (0x0006078f) aid_height_text

0x3758,	// (0x0005ff4f) mup_volume_cont_pane_ParamLimits

0x3758,	// (0x0005ff4f) mup_volume_cont_pane

0x10fc,	// (0x0005d8f3) aid_size_cell_pinb

0x1106,	// (0x0005d8fd) aid_size_list_pinb

0x496f,	// (0x00061166) mup2_volume_cont_pane_ParamLimits

0x496f,	// (0x00061166) mup2_volume_cont_pane

0x4a7d,	// (0x00061274) mup2_volume_cont_pane_g1_ParamLimits

0x4a7d,	// (0x00061274) mup2_volume_cont_pane_g1

0x0d1e,	// (0x0005d515) aid_size_cell_touch_ParamLimits

0x0d1e,	// (0x0005d515) aid_size_cell_touch

0x0fdf,	// (0x0005d7d6) touch_pane_ParamLimits

0x0fdf,	// (0x0005d7d6) touch_pane

0x0fd5,	// (0x0005d7cc) main_rss2_pane

0xc905,	// (0x000690fc) listscroll_rss2_pane

0xc90e,	// (0x00069105) rss2_navigation_pane

0xc916,	// (0x0006910d) list_rss2_pane

0xb132,	// (0x00067929) scroll_pane_cp22

0xc91e,	// (0x00069115) rss2_navigation_pane_g1

0xc927,	// (0x0006911e) rss2_navigation_pane_g2

0xc92f,	// (0x00069126) rss2_navigation_pane_g3

0x0002,

0x0351,	// (0x0005cb48) rss2_navigation_pane_g

0xc937,	// (0x0006912e) rss2_navigation_pane_t1

0x4ab6,	// (0x000612ad) rss2_list_single_pane_ParamLimits

0x4ab6,	// (0x000612ad) rss2_list_single_pane

0xc945,	// (0x0006913c) rss2_list_single_pane_t2

0xc953,	// (0x0006914a) rss2_list_single_pane_t3_ParamLimits

0xc953,	// (0x0006914a) rss2_list_single_pane_t3

0xc970,	// (0x00069167) rss2_list_single_pane_t4

0x3013,	// (0x0005f80a) smil_status_pane_g1

0x41ea,	// (0x000609e1) main_image2_pane_ParamLimits

0x41ea,	// (0x000609e1) main_image2_pane

0x4682,	// (0x00060e79) main_camera2_pane_g9_ParamLimits

0x4682,	// (0x00060e79) main_camera2_pane_g9

0x46d6,	// (0x00060ecd) main_camera2_pane_t5_ParamLimits

0x46d6,	// (0x00060ecd) main_camera2_pane_t5

0x46e8,	// (0x00060edf) main_camera2_pane_t6_ParamLimits

0x46e8,	// (0x00060edf) main_camera2_pane_t6

0x4aee,	// (0x000612e5) main_image2_pane_g1_ParamLimits

0x4aee,	// (0x000612e5) main_image2_pane_g1

0x3d34,	// (0x0006052b) smil2_video_pane_ParamLimits

0x3d34,	// (0x0006052b) smil2_video_pane

0x0c2f,	// (0x0005d426) aid_zoom_text_primary_cp

0x0f70,	// (0x0005d767) popup_preview_fixed_window

0xa9f0,	// (0x000671e7) im_reading_pane_g1

0x45cc,	// (0x00060dc3) cams2_bc_adjust_pane_cp_ParamLimits

0x45cc,	// (0x00060dc3) cams2_bc_adjust_pane_cp

0x4718,	// (0x00060f0f) cams2_bc_adjust_pane_ParamLimits

0x4718,	// (0x00060f0f) cams2_bc_adjust_pane

0xda94,	// (0x0006a28b) cams2_bc_adjust_pane_g1

0x4afa,	// (0x000612f1) cams2_slider_pane

0x4b03,	// (0x000612fa) cams2_slider_pane_g1

0x4b0c,	// (0x00061303) cams2_slider_pane_g2

0x0006,

0xf5bc,	// (0x0006bdb3) cams2_slider_pane_g

0x11f6,	// (0x0005d9ed) calc_display_pane_ParamLimits

0x1214,	// (0x0005da0b) calc_paper_pane_ParamLimits

0x1230,	// (0x0005da27) grid_calc_pane_ParamLimits

0x32c3,	// (0x0005faba) popup_clock_digital_window_t1_ParamLimits

0xb619,	// (0x00067e10) main_image_pane_t1

0x11dc,	// (0x0005d9d3) aid_size_cell_calc_ParamLimits

0x11dc,	// (0x0005d9d3) aid_size_cell_calc

0x421b,	// (0x00060a12) popup_blid_sat_info2_window_ParamLimits

0x421b,	// (0x00060a12) popup_blid_sat_info2_window

0xc986,	// (0x0006917d) aid_size_cell_blid

0xc98e,	// (0x00069185) bg_popup_window_pane_cp07

0xc9b1,	// (0x000691a8) grid_popup_blid_pane

0xc9bb,	// (0x000691b2) heading_pane_cp05_ParamLimits

0xc9bb,	// (0x000691b2) heading_pane_cp05

0xca85,	// (0x0006927c) cell_popup_blid_pane_ParamLimits

0xca85,	// (0x0006927c) cell_popup_blid_pane

0xcaab,	// (0x000692a2) cell_popup_blid_pane_g1

0xcab3,	// (0x000692aa) cell_popup_blid_pane_t1

0x4935,	// (0x0006112c) mup2_indicator_pane_ParamLimits

0x4935,	// (0x0006112c) mup2_indicator_pane

0xb396,	// (0x00067b8d) mup2_visualizer_osc_pane

0xc867,	// (0x0006905e) mup2_visualizer_spec_pane_ParamLimits

0xc867,	// (0x0006905e) mup2_visualizer_spec_pane

0x4b26,	// (0x0006131d) mup2_spec_half_pane

0x4b2f,	// (0x00061326) mup2_spec_half_pane_cp

0x4b39,	// (0x00061330) mup2_spec_bar_pane_ParamLimits

0x4b39,	// (0x00061330) mup2_spec_bar_pane

0xc7fc,	// (0x00068ff3) mup2_spec_bar_pane_g1

0xc806,	// (0x00068ffd) mup2_spec_bar_pane_g2

0x0001,

0x02cb,	// (0x0005cac2) mup2_spec_bar_pane_g

0x4b58,	// (0x0006134f) mup2_osc_middle_pane

0xc818,	// (0x0006900f) mup2_visualizer_osc_pane_g1

0x9839,	// (0x00066030) popup_number_entry_window_t1_ParamLimits

0x984c,	// (0x00066043) popup_number_entry_window_t2_ParamLimits

0x985e,	// (0x00066055) popup_number_entry_window_t3_ParamLimits

0x1036,	// (0x0005d82d) popup_number_entry_window_t5_ParamLimits

0x1036,	// (0x0005d82d) popup_number_entry_window_t5

0xf0c6,	// (0x0006b8bd) popup_number_entry_window_t_ParamLimits

0x9870,	// (0x00066067) text_title_cp2_ParamLimits

0x3a2b,	// (0x00060222) aid_hotspot_pointer_text2_pane

0x3ab9,	// (0x000602b0) main_viewer_pane_g9_ParamLimits

0x3ab9,	// (0x000602b0) main_viewer_pane_g9

0xac29,	// (0x00067420) cale_month_pane_t1_ParamLimits

0xac66,	// (0x0006745d) bg_cale_pane_ParamLimits

0xac7e,	// (0x00067475) list_cale_pane_ParamLimits

0xac8f,	// (0x00067486) listscroll_cale_day_pane_t1

0xaca1,	// (0x00067498) scroll_pane_cp09_ParamLimits

0x3797,	// (0x0005ff8e) main_mup_eq_pane_t1_ParamLimits

0x3797,	// (0x0005ff8e) main_mup_eq_pane_t1

0x37b1,	// (0x0005ffa8) main_mup_eq_pane_t2_ParamLimits

0x37b1,	// (0x0005ffa8) main_mup_eq_pane_t2

0x37c9,	// (0x0005ffc0) main_mup_eq_pane_t3_ParamLimits

0x37c9,	// (0x0005ffc0) main_mup_eq_pane_t3

0x37e1,	// (0x0005ffd8) main_mup_eq_pane_t4_ParamLimits

0x37e1,	// (0x0005ffd8) main_mup_eq_pane_t4

0x37f9,	// (0x0005fff0) main_mup_eq_pane_t5_ParamLimits

0x37f9,	// (0x0005fff0) main_mup_eq_pane_t5

0x3811,	// (0x00060008) main_mup_eq_pane_t6_ParamLimits

0x3811,	// (0x00060008) main_mup_eq_pane_t6

0x3825,	// (0x0006001c) main_mup_eq_pane_t7_ParamLimits

0x3825,	// (0x0006001c) main_mup_eq_pane_t7

0x3839,	// (0x00060030) main_mup_eq_pane_t8_ParamLimits

0x3839,	// (0x00060030) main_mup_eq_pane_t8

0x384f,	// (0x00060046) main_mup_eq_pane_t9_ParamLimits

0x384f,	// (0x00060046) main_mup_eq_pane_t9

0x3867,	// (0x0006005e) main_mup_eq_pane_t10_ParamLimits

0x3867,	// (0x0006005e) main_mup_eq_pane_t10

0x0009,

0xf449,	// (0x0006bc40) main_mup_eq_pane_t_ParamLimits

0xf449,	// (0x0006bc40) main_mup_eq_pane_t

0x3924,	// (0x0006011b) mup_equalizer_pane_cp5_ParamLimits

0x393a,	// (0x00060131) mup_equalizer_pane_cp6_ParamLimits

0x3952,	// (0x00060149) mup_equalizer_pane_cp7_ParamLimits

0x0fd5,	// (0x0005d7cc) main_gallery_pane

0xc821,	// (0x00069018) smil2_volume_pane

0xc829,	// (0x00069020) smil_status_volume_pane_g1_ParamLimits

0xc83c,	// (0x00069033) smil_status_volume_pane_g2_ParamLimits

0x4441,	// (0x00060c38) smil_status_volume_pane_g3_ParamLimits

0xf53b,	// (0x0006bd32) smil_status_volume_pane_g_ParamLimits

0xc98e,	// (0x00069185) bg_popup_window_pane_cp07_ParamLimits

0xc99c,	// (0x00069193) blid_firmament_pane

0x4b61,	// (0x00061358) aid_size_cell_gallery_ParamLimits

0x4b61,	// (0x00061358) aid_size_cell_gallery

0x4b6f,	// (0x00061366) grid_gallery_pane_ParamLimits

0x4b6f,	// (0x00061366) grid_gallery_pane

0x4b7f,	// (0x00061376) cell_gallery_pane_ParamLimits

0x4b7f,	// (0x00061376) cell_gallery_pane

0xcac1,	// (0x000692b8) bg_cell_gallery_focus_pane_ParamLimits

0xcac1,	// (0x000692b8) bg_cell_gallery_focus_pane

0xcad3,	// (0x000692ca) cell_gallery_pane_g1_ParamLimits

0xcad3,	// (0x000692ca) cell_gallery_pane_g1

0x4bcd,	// (0x000613c4) cell_gallery_pane_g2_ParamLimits

0x4bcd,	// (0x000613c4) cell_gallery_pane_g2

0x4bda,	// (0x000613d1) cell_gallery_pane_g3_ParamLimits

0x4bda,	// (0x000613d1) cell_gallery_pane_g3

0xcadf,	// (0x000692d6) cell_gallery_pane_g4_ParamLimits

0xcadf,	// (0x000692d6) cell_gallery_pane_g4

0x0003,

0xf5cb,	// (0x0006bdc2) cell_gallery_pane_g_ParamLimits

0xf5cb,	// (0x0006bdc2) cell_gallery_pane_g

0xcaeb,	// (0x000692e2) bg_cell_gallery_focus_pane_g1

0xcaf3,	// (0x000692ea) bg_cell_gallery_focus_pane_g2

0xcafb,	// (0x000692f2) bg_cell_gallery_focus_pane_g3

0xcb03,	// (0x000692fa) bg_cell_gallery_focus_pane_g4

0xcb0b,	// (0x00069302) bg_cell_gallery_focus_pane_g5

0xcb13,	// (0x0006930a) bg_cell_gallery_focus_pane_g6

0xcb1b,	// (0x00069312) bg_cell_gallery_focus_pane_g7

0xcb23,	// (0x0006931a) bg_cell_gallery_focus_pane_g8

0x0007,

0x0387,	// (0x0005cb7e) bg_cell_gallery_focus_pane_g

0xcb2b,	// (0x00069322) aid_firma_cardinal

0xcb3f,	// (0x00069336) blid_firmament_pane_t1

0xcb56,	// (0x0006934d) blid_firmament_pane_t2

0xcb6d,	// (0x00069364) blid_firmament_pane_t3

0xcb84,	// (0x0006937b) blid_firmament_pane_t4

0x0003,

0x0398,	// (0x0005cb8f) blid_firmament_pane_t

0xcb9b,	// (0x00069392) blid_sat_info_pane

0xcbab,	// (0x000693a2) blid_sat_info_pane_g1

0xcbab,	// (0x000693a2) blid_sat_info_pane_g2

0x0001,

0x03a1,	// (0x0005cb98) blid_sat_info_pane_g

0xcbb5,	// (0x000693ac) blid_sat_info_pane_t1

0xcbc3,	// (0x000693ba) smil2_volume_content_pane

0xcbcc,	// (0x000693c3) smil2_volume_pane_g1

0xa7ba,	// (0x00066fb1) smil2_volume_content_pane_g1

0xcbd4,	// (0x000693cb) smil2_volume_content_pane_g2

0xcbdd,	// (0x000693d4) smil2_volume_content_pane_g3

0xcbe6,	// (0x000693dd) smil2_volume_content_pane_g4

0xcbef,	// (0x000693e6) smil2_volume_content_pane_g5

0xcbf8,	// (0x000693ef) smil2_volume_content_pane_g6

0xcc01,	// (0x000693f8) smil2_volume_content_pane_g7

0xcc0a,	// (0x00069401) smil2_volume_content_pane_g8

0xcc13,	// (0x0006940a) smil2_volume_content_pane_g9

0xcc1c,	// (0x00069413) smil2_volume_content_pane_g10

0x0009,

0xf5d4,	// (0x0006bdcb) smil2_volume_content_pane_g

0x1818,	// (0x0005e00f) cale_week_day_heading_pane_t1_ParamLimits

0x1853,	// (0x0005e04a) cale_week_day_heading_pane_t2_ParamLimits

0x188e,	// (0x0005e085) cale_week_day_heading_pane_t3_ParamLimits

0x18c9,	// (0x0005e0c0) cale_week_day_heading_pane_t4_ParamLimits

0x1904,	// (0x0005e0fb) cale_week_day_heading_pane_t5_ParamLimits

0x193f,	// (0x0005e136) cale_week_day_heading_pane_t6_ParamLimits

0x197a,	// (0x0005e171) cale_week_day_heading_pane_t7_ParamLimits

0xf1cd,	// (0x0006b9c4) cale_week_day_heading_pane_t_ParamLimits

0xa8ad,	// (0x000670a4) bg_cale_side_pane_ParamLimits

0x19b5,	// (0x0005e1ac) cale_week_time_pane_t1_ParamLimits

0x19cf,	// (0x0005e1c6) cale_week_time_pane_t2_ParamLimits

0x19e9,	// (0x0005e1e0) cale_week_time_pane_t3_ParamLimits

0x1a03,	// (0x0005e1fa) cale_week_time_pane_t4_ParamLimits

0x1a1d,	// (0x0005e214) cale_week_time_pane_t5_ParamLimits

0x1a39,	// (0x0005e230) cale_week_time_pane_t6_ParamLimits

0x1a5b,	// (0x0005e252) cale_week_time_pane_t7_ParamLimits

0x1a7f,	// (0x0005e276) cale_week_time_pane_t8_ParamLimits

0xf1dc,	// (0x0006b9d3) cale_week_time_pane_t_ParamLimits

0x1aa5,	// (0x0005e29c) cell_cale_week_pane_g2_ParamLimits

0xa8ad,	// (0x000670a4) bg_cale_side_pane_cp01_ParamLimits

0x2e0c,	// (0x0005f603) cale_month_week_pane_t1_ParamLimits

0x2e25,	// (0x0005f61c) cale_month_week_pane_t2_ParamLimits

0x2e3e,	// (0x0005f635) cale_month_week_pane_t3_ParamLimits

0x2e57,	// (0x0005f64e) cale_month_week_pane_t4_ParamLimits

0x2e74,	// (0x0005f66b) cale_month_week_pane_t5_ParamLimits

0x2e95,	// (0x0005f68c) cale_month_week_pane_t6_ParamLimits

0xf2b5,	// (0x0006baac) cale_month_week_pane_t_ParamLimits

0x2fdc,	// (0x0005f7d3) cell_cale_month_pane_g1_ParamLimits

0x0fd5,	// (0x0005d7cc) main_cale_event_viewer_pane

0x980f,	// (0x00066006) listscroll_cale_event_viewer_pane

0xcc25,	// (0x0006941c) list_cale_ev_pane

0xcc2d,	// (0x00069424) scroll_pane_cp023

0xcc39,	// (0x00069430) field_cale_ev_pane_ParamLimits

0xcc39,	// (0x00069430) field_cale_ev_pane

0xcc55,	// (0x0006944c) field_cale_ev_content_pane_ParamLimits

0xcc55,	// (0x0006944c) field_cale_ev_content_pane

0xcc61,	// (0x00069458) field_cale_ev_pane_g1_ParamLimits

0xcc61,	// (0x00069458) field_cale_ev_pane_g1

0xcc6d,	// (0x00069464) field_cale_ev_pane_g2_ParamLimits

0xcc6d,	// (0x00069464) field_cale_ev_pane_g2

0xcc85,	// (0x0006947c) field_cale_ev_pane_g3_ParamLimits

0xcc85,	// (0x0006947c) field_cale_ev_pane_g3

0x0002,

0x03bb,	// (0x0005cbb2) field_cale_ev_pane_g_ParamLimits

0x03bb,	// (0x0005cbb2) field_cale_ev_pane_g

0xcc9d,	// (0x00069494) field_cale_ev_pane_t1_ParamLimits

0xcc9d,	// (0x00069494) field_cale_ev_pane_t1

0xccb4,	// (0x000694ab) field_cale_ev_content_pane_t1_ParamLimits

0xccb4,	// (0x000694ab) field_cale_ev_content_pane_t1

0xb4ff,	// (0x00067cf6) bg_button_pane_cp01

0x15a1,	// (0x0005dd98) listscroll_cale_week_pane_ParamLimits

0xa857,	// (0x0006704e) popup_toolbar_window_cp01

0xa87e,	// (0x00067075) listscroll_cale_week_pane_t1_ParamLimits

0x15a1,	// (0x0005dd98) listscroll_cale_day_pane_ParamLimits

0xa857,	// (0x0006704e) popup_toolbar_window_cp02

0xac8f,	// (0x00067486) listscroll_cale_day_pane_t1_ParamLimits

0x15a1,	// (0x0005dd98) main_cale_month_pane_ParamLimits

0x4318,	// (0x00060b0f) popup_toolbar_window_cp03_ParamLimits

0x4318,	// (0x00060b0f) popup_toolbar_window_cp03

0x3c46,	// (0x0006043d) main_image_pane_g2_ParamLimits

0x3c46,	// (0x0006043d) main_image_pane_g2

0x3c52,	// (0x00060449) main_image_pane_g3_ParamLimits

0x3c52,	// (0x00060449) main_image_pane_g3

0x0002,

0xf4d1,	// (0x0006bcc8) main_image_pane_g_ParamLimits

0xf4d1,	// (0x0006bcc8) main_image_pane_g

0xb619,	// (0x00067e10) main_image_pane_t1_ParamLimits

0x3c5e,	// (0x00060455) main_image_pane_t2_ParamLimits

0x3c5e,	// (0x00060455) main_image_pane_t2

0x3c70,	// (0x00060467) main_image_pane_t3_ParamLimits

0x3c70,	// (0x00060467) main_image_pane_t3

0x3c82,	// (0x00060479) main_image_pane_t4_ParamLimits

0x3c82,	// (0x00060479) main_image_pane_t4

0x0003,

0xf4d8,	// (0x0006bccf) main_image_pane_t_ParamLimits

0xf4d8,	// (0x0006bccf) main_image_pane_t

0x3c94,	// (0x0006048b) popup_image_details_window_cp01

0x3c9e,	// (0x00060495) popup_toobar_trans_pane_cp01_ParamLimits

0x3c9e,	// (0x00060495) popup_toobar_trans_pane_cp01

0x426e,	// (0x00060a65) popup_image_details_window_ParamLimits

0x426e,	// (0x00060a65) popup_image_details_window

0x427c,	// (0x00060a73) popup_image_focus_window

0x45be,	// (0x00060db5) camera2_autofocus_pane_ParamLimits

0x45be,	// (0x00060db5) camera2_autofocus_pane

0x980f,	// (0x00066006) bg_popup_sub_pane_cp06

0xccd1,	// (0x000694c8) popup_image_focus_window_g1

0xccd9,	// (0x000694d0) popup_image_focus_window_g2

0xcce1,	// (0x000694d8) popup_image_focus_window_g3

0xcce9,	// (0x000694e0) popup_image_focus_window_g4

0x0003,

0x03c2,	// (0x0005cbb9) popup_image_focus_window_g

0xccf1,	// (0x000694e8) popup_image_focus_window_t1

0xccff,	// (0x000694f6) popup_image_focus_window_t2

0xcd0f,	// (0x00069506) popup_image_focus_window_t3

0x0002,

0x03cb,	// (0x0005cbc2) popup_image_focus_window_t

0xcd1d,	// (0x00069514) camera2_autofocus_pane_g1

0xa63e,	// (0x00066e35) bg_tb_trans_pane_cp01

0xcd2b,	// (0x00069522) popup_image_details_window_g1

0xcd3e,	// (0x00069535) popup_image_details_window_g2

0x0002,

0x03dd,	// (0x0005cbd4) popup_image_details_window_g

0xcd67,	// (0x0006955e) popup_image_details_window_t1

0xcd79,	// (0x00069570) popup_image_details_window_t2

0xcd92,	// (0x00069589) popup_image_details_window_t3

0xcda6,	// (0x0006959d) popup_image_details_window_t4

0xcdc1,	// (0x000695b8) popup_image_details_window_t5

0x0004,

0x03e4,	// (0x0005cbdb) popup_image_details_window_t

0xa71c,	// (0x00066f13) bg_calc_paper_pane_ParamLimits

0x0fd5,	// (0x0005d7cc) grid_highlight_pane_cp013

0x132d,	// (0x0005db24) list_calc_pane_ParamLimits

0x133f,	// (0x0005db36) scroll_pane_cp024

0xa730,	// (0x00066f27) bg_calc_display_pane_ParamLimits

0x1347,	// (0x0005db3e) calc_display_pane_t1_ParamLimits

0x135c,	// (0x0005db53) calc_display_pane_t2_ParamLimits

0x1371,	// (0x0005db68) calc_display_pane_t3_ParamLimits

0xf14d,	// (0x0006b944) calc_display_pane_t_ParamLimits

0x1452,	// (0x0005dc49) cell_calc_pane_g2

0x0001,

0xf16a,	// (0x0006b961) cell_calc_pane_g

0x145b,	// (0x0005dc52) cell_calc_pane_t1

0xa78f,	// (0x00066f86) grid_highlight_pane_cp02_ParamLimits

0xa7a5,	// (0x00066f9c) toolbar_button_pane_cp01_ParamLimits

0xa7a5,	// (0x00066f9c) toolbar_button_pane_cp01

0xb65e,	// (0x00067e55) temp_image_control_pane_ParamLimits

0xb65e,	// (0x00067e55) temp_image_control_pane

0x41ea,	// (0x000609e1) main_mp3_pane

0xcddb,	// (0x000695d2) temp_image_control_pane_g1_ParamLimits

0xcddb,	// (0x000695d2) temp_image_control_pane_g1

0xcde9,	// (0x000695e0) temp_image_control_pane_g2_ParamLimits

0xcde9,	// (0x000695e0) temp_image_control_pane_g2

0xcdfb,	// (0x000695f2) temp_image_control_pane_g3_ParamLimits

0xcdfb,	// (0x000695f2) temp_image_control_pane_g3

0x4c17,	// (0x0006140e) temp_image_control_pane_g4_ParamLimits

0x4c17,	// (0x0006140e) temp_image_control_pane_g4

0x0003,

0xf5f4,	// (0x0006bdeb) temp_image_control_pane_g_ParamLimits

0xf5f4,	// (0x0006bdeb) temp_image_control_pane_g

0xcddb,	// (0x000695d2) main_mp3_pane_g1

0x4c28,	// (0x0006141f) main_mp3_pane_g2

0x0007,

0xf5fd,	// (0x0006bdf4) main_mp3_pane_g

0xce3e,	// (0x00069635) main_mp3_pane_t1

0xa8ff,	// (0x000670f6) main_camera_pane_g8_ParamLimits

0xa8ff,	// (0x000670f6) main_camera_pane_g8

0x1d53,	// (0x0005e54a) main_video_pane_g7_ParamLimits

0x1d53,	// (0x0005e54a) main_video_pane_g7

0x4706,	// (0x00060efd) main_camera2_pane_t7_ParamLimits

0x4706,	// (0x00060efd) main_camera2_pane_t7

0xaa47,	// (0x0006723e) scroll_pane_cp025_ParamLimits

0xaa47,	// (0x0006723e) scroll_pane_cp025

0xaa5b,	// (0x00067252) scroll_pane_cp026_ParamLimits

0xaa5b,	// (0x00067252) scroll_pane_cp026

0xaa6a,	// (0x00067261) wml_content_pane_ParamLimits

0x0fd5,	// (0x0005d7cc) main_touch_calib_pane

0x4ccc,	// (0x000614c3) main_touch_calib_pane_g1

0x4cd8,	// (0x000614cf) main_touch_calib_pane_g2

0x4ce4,	// (0x000614db) main_touch_calib_pane_g3

0x4cf0,	// (0x000614e7) main_touch_calib_pane_g4

0x0003,

0xf61b,	// (0x0006be12) main_touch_calib_pane_g

0x4cfc,	// (0x000614f3) main_touch_calib_pane_t1

0x4d15,	// (0x0006150c) main_touch_calib_pane_t2

0x0004,

0xf624,	// (0x0006be1b) main_touch_calib_pane_t

0xb210,	// (0x00067a07) mup_progress_pane_cp02

0xb245,	// (0x00067a3c) navi_pane_g1

0xb300,	// (0x00067af7) navi_pane_mp_t3

0x41ea,	// (0x000609e1) main_mp3_pane_ParamLimits

0x4355,	// (0x00060b4c) navi_pane_ParamLimits

0xcddb,	// (0x000695d2) main_mp3_pane_g1_ParamLimits

0x4c28,	// (0x0006141f) main_mp3_pane_g2_ParamLimits

0x4c34,	// (0x0006142b) main_mp3_pane_g3_ParamLimits

0x4c34,	// (0x0006142b) main_mp3_pane_g3

0x4c40,	// (0x00061437) main_mp3_pane_g4_ParamLimits

0x4c40,	// (0x00061437) main_mp3_pane_g4

0xce0b,	// (0x00069602) main_mp3_pane_g5_ParamLimits

0xce0b,	// (0x00069602) main_mp3_pane_g5

0xce19,	// (0x00069610) main_mp3_pane_g6_ParamLimits

0xce19,	// (0x00069610) main_mp3_pane_g6

0xce26,	// (0x0006961d) main_mp3_pane_g7_ParamLimits

0xce26,	// (0x0006961d) main_mp3_pane_g7

0xce32,	// (0x00069629) main_mp3_pane_g8_ParamLimits

0xce32,	// (0x00069629) main_mp3_pane_g8

0xf5fd,	// (0x0006bdf4) main_mp3_pane_g_ParamLimits

0x4c4c,	// (0x00061443) main_mp3_pane_t2

0x4c5c,	// (0x00061453) main_mp3_pane_t3

0xce4c,	// (0x00069643) main_mp3_pane_t4

0xce5a,	// (0x00069651) main_mp3_pane_t5

0x0005,

0xf60e,	// (0x0006be05) main_mp3_pane_t

0xce68,	// (0x0006965f) mup_progress_pane_cp01

0x0c2f,	// (0x0005d426) aid_zoom_text_secondary2

0xcc25,	// (0x0006941c) list_cale_ev2_pane

0xcc2d,	// (0x00069424) scroll_pane_cp023_ParamLimits

0x4d70,	// (0x00061567) field_cale_ev2_pane_ParamLimits

0x4d70,	// (0x00061567) field_cale_ev2_pane

0x9dea,	// (0x000665e1) field_cale_ev2_pane_g1_ParamLimits

0x9dea,	// (0x000665e1) field_cale_ev2_pane_g1

0x9df6,	// (0x000665ed) field_cale_ev2_pane_g2_ParamLimits

0x9df6,	// (0x000665ed) field_cale_ev2_pane_g2

0x9e0e,	// (0x00066605) field_cale_ev2_pane_g3_ParamLimits

0x9e0e,	// (0x00066605) field_cale_ev2_pane_g3

0x0003,

0xf62f,	// (0x0006be26) field_cale_ev2_pane_g_ParamLimits

0xf62f,	// (0x0006be26) field_cale_ev2_pane_g

0x9e32,	// (0x00066629) field_cale_ev2_pane_t1_ParamLimits

0x9e32,	// (0x00066629) field_cale_ev2_pane_t1

0x9e49,	// (0x00066640) field_cale_ev2_pane_t2_ParamLimits

0x9e49,	// (0x00066640) field_cale_ev2_pane_t2

0x0001,

0xf638,	// (0x0006be2f) field_cale_ev2_pane_t_ParamLimits

0xf638,	// (0x0006be2f) field_cale_ev2_pane_t

0x3b21,	// (0x00060318) main_postcard_pane_g5_ParamLimits

0x3b21,	// (0x00060318) main_postcard_pane_g5

0x3b2f,	// (0x00060326) main_postcard_pane_g6_ParamLimits

0x3b2f,	// (0x00060326) main_postcard_pane_g6

0x1b9d,	// (0x0005e394) camera2_autofocus_pane_cp_ParamLimits

0x1b9d,	// (0x0005e394) camera2_autofocus_pane_cp

0x41ea,	// (0x000609e1) main_mup3_pane

0x4dbe,	// (0x000615b5) main_mup3_pane_g1_ParamLimits

0x4dbe,	// (0x000615b5) main_mup3_pane_g1

0x4ddf,	// (0x000615d6) main_mup3_pane_g2_ParamLimits

0x4ddf,	// (0x000615d6) main_mup3_pane_g2

0x4e5b,	// (0x00061652) main_mup3_pane_g3_ParamLimits

0x4e5b,	// (0x00061652) main_mup3_pane_g3

0x4e9e,	// (0x00061695) main_mup3_pane_g4_ParamLimits

0x4e9e,	// (0x00061695) main_mup3_pane_g4

0x4ee1,	// (0x000616d8) main_mup3_pane_g5_ParamLimits

0x4ee1,	// (0x000616d8) main_mup3_pane_g5

0x4f26,	// (0x0006171d) main_mup3_pane_g6_ParamLimits

0x4f26,	// (0x0006171d) main_mup3_pane_g6

0xce70,	// (0x00069667) main_mup3_pane_g7_ParamLimits

0xce70,	// (0x00069667) main_mup3_pane_g7

0x0007,

0xf648,	// (0x0006be3f) main_mup3_pane_g_ParamLimits

0xf648,	// (0x0006be3f) main_mup3_pane_g

0x4f9c,	// (0x00061793) main_mup3_pane_t1_ParamLimits

0x4f9c,	// (0x00061793) main_mup3_pane_t1

0x500b,	// (0x00061802) main_mup3_pane_t2_ParamLimits

0x500b,	// (0x00061802) main_mup3_pane_t2

0x50d4,	// (0x000618cb) main_mup3_pane_t4_ParamLimits

0x50d4,	// (0x000618cb) main_mup3_pane_t4

0x5122,	// (0x00061919) main_mup3_pane_t5_ParamLimits

0x5122,	// (0x00061919) main_mup3_pane_t5

0x51d2,	// (0x000619c9) main_mup3_pane_t6_ParamLimits

0x51d2,	// (0x000619c9) main_mup3_pane_t6

0x0005,

0xf659,	// (0x0006be50) main_mup3_pane_t_ParamLimits

0xf659,	// (0x0006be50) main_mup3_pane_t

0x527e,	// (0x00061a75) mup3_progress_pane_ParamLimits

0x527e,	// (0x00061a75) mup3_progress_pane

0x52f2,	// (0x00061ae9) popup_mup3_control_window_ParamLimits

0x52f2,	// (0x00061ae9) popup_mup3_control_window

0xce7e,	// (0x00069675) popup_mup3_text_window

0x530b,	// (0x00061b02) mup3_progress_pane_t1

0x532a,	// (0x00061b21) mup3_progress_pane_t2

0xce86,	// (0x0006967d) mup3_progress_pane_t3

0x0002,

0xf666,	// (0x0006be5d) mup3_progress_pane_t

0xcea3,	// (0x0006969a) mup_progress_pane_cp03

0x980f,	// (0x00066006) bg_tb_trans_pane_cp04

0x5349,	// (0x00061b40) mup3_volume_pane

0x5351,	// (0x00061b48) popup_mup3_control_window_g1

0x535a,	// (0x00061b51) mup3_volume_pane_g1

0x5363,	// (0x00061b5a) mup3_volume_pane_g2

0x536c,	// (0x00061b63) mup3_volume_pane_g3

0x0002,

0xf66d,	// (0x0006be64) mup3_volume_pane_g

0x980f,	// (0x00066006) bg_tb_trans_pane_cp03

0xceb3,	// (0x000696aa) popup_mup3_text_window_g1

0xcebb,	// (0x000696b2) popup_mup3_text_window_t1

0xa778,	// (0x00066f6f) list_calc_item_pane_g1_ParamLimits

0xc8fc,	// (0x000690f3) mup_volume_pane_cp_g1

0x4d2e,	// (0x00061525) main_touch_calib_pane_t3

0x4d44,	// (0x0006153b) main_touch_calib_pane_t4

0x4d5a,	// (0x00061551) main_touch_calib_pane_t5

0x0d0a,	// (0x0005d501) aid_cell_size_toolbar2

0x0d12,	// (0x0005d509) aid_popup3_width_pane

0x0c27,	// (0x0005d41e) aid_zoom_text_msg_primary

0x1b6a,	// (0x0005e361) vorec_t7

0xa73c,	// (0x00066f33) bg_calc_paper_pane_g1_ParamLimits

0xa748,	// (0x00066f3f) bg_calc_paper_pane_g2_ParamLimits

0xa754,	// (0x00066f4b) bg_calc_paper_pane_g3_ParamLimits

0xa760,	// (0x00066f57) bg_calc_paper_pane_g4_ParamLimits

0xa76c,	// (0x00066f63) bg_calc_paper_pane_g5_ParamLimits

0x13b0,	// (0x0005dba7) bg_calc_paper_pane_g6_ParamLimits

0x13c1,	// (0x0005dbb8) bg_calc_paper_pane_g7_ParamLimits

0x13d2,	// (0x0005dbc9) bg_calc_paper_pane_g8_ParamLimits

0xf154,	// (0x0006b94b) bg_calc_paper_pane_g_ParamLimits

0x13e3,	// (0x0005dbda) calc_bg_paper_pane_g9_ParamLimits

0x1c84,	// (0x0005e47b) image_qvga_pane_ParamLimits

0x1c84,	// (0x0005e47b) image_qvga_pane

0xa5c3,	// (0x00066dba) bg_popup_sub_pane_cp04_ParamLimits

0xb595,	// (0x00067d8c) popup_mup_playback_window_g1_ParamLimits

0xb5a1,	// (0x00067d98) popup_mup_playback_window_t1_ParamLimits

0xb5b6,	// (0x00067dad) popup_mup_playback_window_t2_ParamLimits

0x01a7,	// (0x0005c99e) popup_mup_playback_window_t_ParamLimits

0x4835,	// (0x0006102c) main_mup2_pane_g3_ParamLimits

0x4835,	// (0x0006102c) main_mup2_pane_g3

0x1fa6,	// (0x0005e79d) popup_toolbar_window_cp04

0xb9ab,	// (0x000681a2) popup_call2_audio_second_window_g3_ParamLimits

0xb9ab,	// (0x000681a2) popup_call2_audio_second_window_g3

0xbdb5,	// (0x000685ac) popup_call2_audio_first_window_g4_ParamLimits

0xbdb5,	// (0x000685ac) popup_call2_audio_first_window_g4

0xc434,	// (0x00068c2b) popup_call2_audio_in_window_g4_ParamLimits

0xc434,	// (0x00068c2b) popup_call2_audio_in_window_g4

0x3c39,	// (0x00060430) aid_area_sk_bg_cut_ParamLimits

0x3c39,	// (0x00060430) aid_area_sk_bg_cut

0xb5cb,	// (0x00067dc2) aid_area_sk_bg_cut_2_ParamLimits

0xb5cb,	// (0x00067dc2) aid_area_sk_bg_cut_2

0x4bbd,	// (0x000613b4) aid_placing_details_win

0x4bc5,	// (0x000613bc) aid_placing_details_win_2

0xcd1d,	// (0x00069514) camera2_autofocus_pane_g1_ParamLimits

0x0f61,	// (0x0005d758) popup_fixed_preview_cale_window_ParamLimits

0x0f61,	// (0x0005d758) popup_fixed_preview_cale_window

0xb3a7,	// (0x00067b9e) navi_slider_pane_g3

0xb3b0,	// (0x00067ba7) navi_slider_pane_g4

0xb3b9,	// (0x00067bb0) navi_slider_pane_g5

0xb3a7,	// (0x00067b9e) navi_slider_pane_g6

0x352b,	// (0x0005fd22) navi_slider_pane_g7

0xb4cc,	// (0x00067cc3) mup_scale_pane_g3

0xb4d5,	// (0x00067ccc) mup_scale_pane_g4

0xb4de,	// (0x00067cd5) mup_scale_pane_g5

0x396a,	// (0x00060161) mup_scale_pane_g6

0x3973,	// (0x0006016a) mup_scale_pane_g7

0xb3a7,	// (0x00067b9e) cams2_slider_pane_g3

0xc97e,	// (0x00069175) cams2_slider_pane_g4

0x4b15,	// (0x0006130c) cams2_slider_pane_g5

0xb3a7,	// (0x00067b9e) cams2_slider_pane_g6

0x4b1d,	// (0x00061314) cams2_slider_pane_g7

0xcbab,	// (0x000693a2) camera2_autofocus_pane_cp_g1

0xc795,	// (0x00068f8c) bg_popup_preview_window_pane_cp02_ParamLimits

0xc795,	// (0x00068f8c) bg_popup_preview_window_pane_cp02

0xcec9,	// (0x000696c0) list_fp_cale_pane_ParamLimits

0xcec9,	// (0x000696c0) list_fp_cale_pane

0xced5,	// (0x000696cc) popup_fixed_preview_cale_window_t1_ParamLimits

0xced5,	// (0x000696cc) popup_fixed_preview_cale_window_t1

0x5375,	// (0x00061b6c) popup_fixed_preview_cale_window_t2_ParamLimits

0x5375,	// (0x00061b6c) popup_fixed_preview_cale_window_t2

0x538a,	// (0x00061b81) popup_fixed_preview_cale_window_t3_ParamLimits

0x538a,	// (0x00061b81) popup_fixed_preview_cale_window_t3

0x0002,

0xf674,	// (0x0006be6b) popup_fixed_preview_cale_window_t_ParamLimits

0xf674,	// (0x0006be6b) popup_fixed_preview_cale_window_t

0x539f,	// (0x00061b96) list_single_fp_cale_pane_ParamLimits

0x539f,	// (0x00061b96) list_single_fp_cale_pane

0xcef3,	// (0x000696ea) list_single_fp_cale_pane_g1_ParamLimits

0xcef3,	// (0x000696ea) list_single_fp_cale_pane_g1

0xceff,	// (0x000696f6) list_single_fp_cale_pane_g2_ParamLimits

0xceff,	// (0x000696f6) list_single_fp_cale_pane_g2

0x0002,

0x0476,	// (0x0005cc6d) list_single_fp_cale_pane_g_ParamLimits

0x0476,	// (0x0005cc6d) list_single_fp_cale_pane_g

0xcf18,	// (0x0006970f) list_single_fp_cale_pane_t1_ParamLimits

0xcf18,	// (0x0006970f) list_single_fp_cale_pane_t1

0xcf2a,	// (0x00069721) list_single_fp_cale_pane_t2_ParamLimits

0xcf2a,	// (0x00069721) list_single_fp_cale_pane_t2

0x0001,

0x047d,	// (0x0005cc74) list_single_fp_cale_pane_t_ParamLimits

0x047d,	// (0x0005cc74) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x0fd5,	// (0x0005d7cc) main_dialer_pane

0x53b3,	// (0x00061baa) aid_cell_size_keypad

0x53bd,	// (0x00061bb4) dialer_ne_pane

0x53c7,	// (0x00061bbe) grid_dialer_command_1_pane

0x53cf,	// (0x00061bc6) grid_dialer_command_2_pane

0x53d7,	// (0x00061bce) grid_dialer_keypad_pane

0x53eb,	// (0x00061be2) bg_popup_call_pane_cp06_ParamLimits

0x53eb,	// (0x00061be2) bg_popup_call_pane_cp06

0x53f7,	// (0x00061bee) dialer_ne_clear_pane_ParamLimits

0x53f7,	// (0x00061bee) dialer_ne_clear_pane

0xcf5d,	// (0x00069754) dialer_ne_pane_g1

0xcf65,	// (0x0006975c) dialer_ne_pane_t1_ParamLimits

0xcf65,	// (0x0006975c) dialer_ne_pane_t1

0x5403,	// (0x00061bfa) dialer_ne_pane_t2_ParamLimits

0x5403,	// (0x00061bfa) dialer_ne_pane_t2

0x5420,	// (0x00061c17) dialer_ne_pane_t3_ParamLimits

0x5420,	// (0x00061c17) dialer_ne_pane_t3

0x0002,

0xf67b,	// (0x0006be72) dialer_ne_pane_t_ParamLimits

0xf67b,	// (0x0006be72) dialer_ne_pane_t

0x5444,	// (0x00061c3b) dialer_ne_pane_t3_copy1_ParamLimits

0x5444,	// (0x00061c3b) dialer_ne_pane_t3_copy1

0x5468,	// (0x00061c5f) cell_dialer_keypad_pane_ParamLimits

0x5468,	// (0x00061c5f) cell_dialer_keypad_pane

0x547f,	// (0x00061c76) cell_dialer_command_1_pane_ParamLimits

0x547f,	// (0x00061c76) cell_dialer_command_1_pane

0x5495,	// (0x00061c8c) cell_dialer_command_2_pane_ParamLimits

0x5495,	// (0x00061c8c) cell_dialer_command_2_pane

0xcf77,	// (0x0006976e) bg_button_pane_cp02_ParamLimits

0xcf77,	// (0x0006976e) bg_button_pane_cp02

0x54a4,	// (0x00061c9b) cell_dialer_keypad_pane_g1_ParamLimits

0x54a4,	// (0x00061c9b) cell_dialer_keypad_pane_g1

0xcf77,	// (0x0006976e) bg_button_pane_cp03_ParamLimits

0xcf77,	// (0x0006976e) bg_button_pane_cp03

0x54b9,	// (0x00061cb0) cell_dialer_command_1_pane_g1_ParamLimits

0x54b9,	// (0x00061cb0) cell_dialer_command_1_pane_g1

0xcf83,	// (0x0006977a) bg_button_pane_cp04

0x54cd,	// (0x00061cc4) cell_dialer_command_2_pane_g1

0xb396,	// (0x00067b8d) bg_button_pane_cp06

0xcf8b,	// (0x00069782) dialer_ne_clear_pane_g1

0xb251,	// (0x00067a48) navi_pane_g2

0xb27f,	// (0x00067a76) navi_pane_g3

0x0002,

0xf3e5,	// (0x0006bbdc) navi_pane_g

0xb30e,	// (0x00067b05) navi_pane_mv_g2

0xb335,	// (0x00067b2c) navi_pane_mv_g5

0x34f6,	// (0x0005fced) navi_pane_mv_t1

0xa730,	// (0x00066f27) main_clock2_pane

0x550d,	// (0x00061d04) main_clock2_list_pane_ParamLimits

0x550d,	// (0x00061d04) main_clock2_list_pane

0x5537,	// (0x00061d2e) main_clock2_pane_t1_ParamLimits

0x5537,	// (0x00061d2e) main_clock2_pane_t1

0x555b,	// (0x00061d52) main_clock2_pane_t2_ParamLimits

0x555b,	// (0x00061d52) main_clock2_pane_t2

0x0004,

0xf682,	// (0x0006be79) main_clock2_pane_t_ParamLimits

0xf682,	// (0x0006be79) main_clock2_pane_t

0x55b6,	// (0x00061dad) popup_clock_analogue_window_cp03_ParamLimits

0x55b6,	// (0x00061dad) popup_clock_analogue_window_cp03

0x55d4,	// (0x00061dcb) popup_clock_digital_window_cp02_ParamLimits

0x55d4,	// (0x00061dcb) popup_clock_digital_window_cp02

0x5643,	// (0x00061e3a) main_clock2_list_single_pane_ParamLimits

0x5643,	// (0x00061e3a) main_clock2_list_single_pane

0xb396,	// (0x00067b8d) list_highlight_pane_cp05

0xcfc5,	// (0x000697bc) main_clock2_list_single_pane_t1

0x1fa6,	// (0x0005e79d) popup_toolbar_window_cp04_ParamLimits

0x4be7,	// (0x000613de) camera2_autofocus_pane_g2_ParamLimits

0x4be7,	// (0x000613de) camera2_autofocus_pane_g2

0x4bf3,	// (0x000613ea) camera2_autofocus_pane_g3_ParamLimits

0x4bf3,	// (0x000613ea) camera2_autofocus_pane_g3

0x4bff,	// (0x000613f6) camera2_autofocus_pane_g4_ParamLimits

0x4bff,	// (0x000613f6) camera2_autofocus_pane_g4

0x4c0b,	// (0x00061402) camera2_autofocus_pane_g5_ParamLimits

0x4c0b,	// (0x00061402) camera2_autofocus_pane_g5

0x0004,

0xf5e9,	// (0x0006bde0) camera2_autofocus_pane_g_ParamLimits

0xf5e9,	// (0x0006bde0) camera2_autofocus_pane_g

0x4d9e,	// (0x00061595) camera2_autofocus_pane_cp_g2

0x4da6,	// (0x0006159d) camera2_autofocus_pane_cp_g3

0x4dae,	// (0x000615a5) camera2_autofocus_pane_cp_g4

0x4db6,	// (0x000615ad) camera2_autofocus_pane_cp_g5

0x0004,

0xf63d,	// (0x0006be34) camera2_autofocus_pane_cp_g

0x53e3,	// (0x00061bda) popup_dialer_spcha_window

0x980f,	// (0x00066006) bg_popup_sub_pane_cp07

0xcfd3,	// (0x000697ca) list_spcha_pane

0xcfdb,	// (0x000697d2) list_single_spcha_pane_ParamLimits

0xcfdb,	// (0x000697d2) list_single_spcha_pane

0x980f,	// (0x00066006) list_highlight_pane_cp06

0xcfec,	// (0x000697e3) list_single_spcha_pane_t1

0xc1de,	// (0x000689d5) popup_call2_audio_out_window_g4_ParamLimits

0xc1de,	// (0x000689d5) popup_call2_audio_out_window_g4

0x0fd5,	// (0x0005d7cc) main_imed2_pane

0x4284,	// (0x00060a7b) popup_imed_adjust2_window

0x4297,	// (0x00060a8e) popup_imed_trans_window_ParamLimits

0x4297,	// (0x00060a8e) popup_imed_trans_window

0xc9e7,	// (0x000691de) popup_blid_sat_info2_window_t1

0xc9f5,	// (0x000691ec) popup_blid_sat_info2_window_t2

0x000a,

0x0367,	// (0x0005cb5e) popup_blid_sat_info2_window_t

0x56ed,	// (0x00061ee4) aid_size_cell_colour_35

0x5707,	// (0x00061efe) aid_size_cell_colour_112

0x571e,	// (0x00061f15) aid_size_cell_effect

0xa63e,	// (0x00066e35) bg_tb_trans_pane_cp02

0xb346,	// (0x00067b3d) heading_imed_pane

0x5738,	// (0x00061f2f) listscroll_imed_pane

0xcffa,	// (0x000697f1) heading_imed_pane_g1

0xd002,	// (0x000697f9) heading_imed_pane_t1

0xd010,	// (0x00069807) grid_imed_colour_35_pane_ParamLimits

0xd010,	// (0x00069807) grid_imed_colour_35_pane

0x5744,	// (0x00061f3b) grid_imed_effect_pane

0xd028,	// (0x0006981f) list_imed_aspect_pane

0x5754,	// (0x00061f4b) scroll_pane_cp027_ParamLimits

0x5754,	// (0x00061f4b) scroll_pane_cp027

0x5760,	// (0x00061f57) cell_imed_effect_pane_ParamLimits

0x5760,	// (0x00061f57) cell_imed_effect_pane

0xd030,	// (0x00069827) cell_imed_colour_pane_ParamLimits

0xd030,	// (0x00069827) cell_imed_colour_pane

0xd072,	// (0x00069869) cell_imed_colour_pane_g1_ParamLimits

0xd072,	// (0x00069869) cell_imed_colour_pane_g1

0xd083,	// (0x0006987a) hgihlgiht_grid_pane_cp016_ParamLimits

0xd083,	// (0x0006987a) hgihlgiht_grid_pane_cp016

0x5778,	// (0x00061f6f) cell_imed_effect_pane_g1

0x5780,	// (0x00061f77) grid_highlight_pane_cp017

0xd0a0,	// (0x00069897) list_imed_single_pane_ParamLimits

0xd0a0,	// (0x00069897) list_imed_single_pane

0x980f,	// (0x00066006) list_highlight_pane_cp07

0xd0b6,	// (0x000698ad) list_imed_aspect_pane_comp1_t1

0xc7a1,	// (0x00068f98) bg_tb_trans_pane_cp05

0xd0d8,	// (0x000698cf) popup_imed_adjust2_window_g1

0xd0ff,	// (0x000698f6) popup_imed_adjust2_window_t1

0xd117,	// (0x0006990e) slider_imed_adjust_pane

0xd12b,	// (0x00069922) slider_imed_adjust_pane_g1

0xd13b,	// (0x00069932) slider_imed_adjust_pane_g2

0xd14b,	// (0x00069942) slider_imed_adjust_pane_g3

0xd15c,	// (0x00069953) slider_imed_adjust_pane_g4

0x0003,

0x04ab,	// (0x0005cca2) slider_imed_adjust_pane_g

0x5789,	// (0x00061f80) aid_size_cell_clipart2

0x5795,	// (0x00061f8c) grid_imed_clipart_pane

0xd16d,	// (0x00069964) scroll_pane_cp031

0x579f,	// (0x00061f96) cell_imed_clipart_pane_ParamLimits

0x579f,	// (0x00061f96) cell_imed_clipart_pane

0x57c6,	// (0x00061fbd) cell_imed_clipart_pane_g1

0x980f,	// (0x00066006) grid_highlight_pane_cp014

0x5519,	// (0x00061d10) main_clock2_pane_g1_ParamLimits

0x5519,	// (0x00061d10) main_clock2_pane_g1

0x55ee,	// (0x00061de5) aid_call2_pane_cp10

0x5600,	// (0x00061df7) aid_call_pane_cp10

0xb1b0,	// (0x000679a7) popup_clock_analogue_window_cp10_g1

0xb1b0,	// (0x000679a7) popup_clock_analogue_window_cp10_g2

0x5612,	// (0x00061e09) popup_clock_analogue_window_cp10_g3

0x5612,	// (0x00061e09) popup_clock_analogue_window_cp10_g4

0xb1b0,	// (0x000679a7) popup_clock_analogue_window_cp10_g5

0x0004,

0xf68d,	// (0x0006be84) popup_clock_analogue_window_cp10_g

0x5624,	// (0x00061e1b) popup_clock_analogue_window_cp10_t1

0x5655,	// (0x00061e4c) clock_digital_number_pane_cp10_ParamLimits

0x5655,	// (0x00061e4c) clock_digital_number_pane_cp10

0x566d,	// (0x00061e64) clock_digital_number_pane_cp11_ParamLimits

0x566d,	// (0x00061e64) clock_digital_number_pane_cp11

0x5685,	// (0x00061e7c) clock_digital_number_pane_cp12_ParamLimits

0x5685,	// (0x00061e7c) clock_digital_number_pane_cp12

0x569d,	// (0x00061e94) clock_digital_number_pane_cp13_ParamLimits

0x569d,	// (0x00061e94) clock_digital_number_pane_cp13

0x56b5,	// (0x00061eac) clock_digital_separator_pane_cp10_ParamLimits

0x56b5,	// (0x00061eac) clock_digital_separator_pane_cp10

0x56cd,	// (0x00061ec4) popup_clock_digital_window_cp02_t1_ParamLimits

0x56cd,	// (0x00061ec4) popup_clock_digital_window_cp02_t1

0xa5bb,	// (0x00066db2) clock_digital_number_pane_cp10_g1

0xa5bb,	// (0x00066db2) clock_digital_number_pane_cp10_g2

0x0001,

0xf698,	// (0x0006be8f) clock_digital_number_pane_cp10_g

0xa5bb,	// (0x00066db2) clock_digital_separator_pane_cp10_g1

0xa5bb,	// (0x00066db2) clock_digital_separator_pane_g2_cp10

0xb33d,	// (0x00067b34) navi_pane_vded_g4

0xb367,	// (0x00067b5e) navi_pane_vded_g5

0xb370,	// (0x00067b67) navi_pane_vded_t1

0x0fd5,	// (0x0005d7cc) main_vded_pane

0x57cf,	// (0x00061fc6) main_vded_pane_g1

0x57db,	// (0x00061fd2) main_vded_pane_g2

0x57e5,	// (0x00061fdc) main_vded_pane_g3

0x0002,

0xf69d,	// (0x0006be94) main_vded_pane_g

0x57ef,	// (0x00061fe6) main_vded_pane_t1

0x57fd,	// (0x00061ff4) main_vded_pane_t2

0x0001,

0xf6a4,	// (0x0006be9b) main_vded_pane_t

0x580b,	// (0x00062002) vded_slider_pane

0x5815,	// (0x0006200c) vded_video_pane

0xd175,	// (0x0006996c) vded_video_pane_g1

0x581f,	// (0x00062016) vded_video_pane_g2

0xcbab,	// (0x000693a2) vded_video_pane_g3

0x0002,

0xf6a9,	// (0x0006bea0) vded_video_pane_g

0xd17f,	// (0x00069976) vded_slider_pane_g1

0xd188,	// (0x0006997f) vded_slider_pane_g2

0xd191,	// (0x00069988) vded_slider_pane_g3

0xd19a,	// (0x00069991) vded_slider_pane_g4

0xd1a3,	// (0x0006999a) vded_slider_pane_g5

0x0004,

0x04cc,	// (0x0005ccc3) vded_slider_pane_g

0x52e4,	// (0x00061adb) mup3_rocker_pane_ParamLimits

0x52e4,	// (0x00061adb) mup3_rocker_pane

0x5828,	// (0x0006201f) mup3_control_keys_pane_g1

0x5830,	// (0x00062027) mup3_control_keys_pane_g2

0x5838,	// (0x0006202f) mup3_control_keys_pane_g3

0x5840,	// (0x00062037) mup3_control_keys_pane_g4

0x0003,

0xf6b0,	// (0x0006bea7) mup3_control_keys_pane_g

0x0f89,	// (0x0005d780) popup_toolbar2_fixed_window_cp01_ParamLimits

0x0f89,	// (0x0005d780) popup_toolbar2_fixed_window_cp01

0x52fe,	// (0x00061af5) popup_toolbar2_fixed_window_cp02_ParamLimits

0x52fe,	// (0x00061af5) popup_toolbar2_fixed_window_cp02

0xbb1d,	// (0x00068314) popup_call2_audio_second_window_t4_ParamLimits

0xbb1d,	// (0x00068314) popup_call2_audio_second_window_t4

0xc04b,	// (0x00068842) popup_call2_audio_first_window_t6_ParamLimits

0xc04b,	// (0x00068842) popup_call2_audio_first_window_t6

0xc2e1,	// (0x00068ad8) popup_call2_audio_out_window_t6_ParamLimits

0xc2e1,	// (0x00068ad8) popup_call2_audio_out_window_t6

0x0fd5,	// (0x0005d7cc) main_vitu_pane

0x5850,	// (0x00062047) aid_size_cell_itu_ParamLimits

0x5850,	// (0x00062047) aid_size_cell_itu

0xdd11,	// (0x0006a508) bg_popup_window_pane_cp08_ParamLimits

0xdd11,	// (0x0006a508) bg_popup_window_pane_cp08

0x585e,	// (0x00062055) field_vitu_entry_pane_ParamLimits

0x585e,	// (0x00062055) field_vitu_entry_pane

0x586d,	// (0x00062064) grid_vitu_function_pane_ParamLimits

0x586d,	// (0x00062064) grid_vitu_function_pane

0x587d,	// (0x00062074) grid_vitu_itu_pane_ParamLimits

0x587d,	// (0x00062074) grid_vitu_itu_pane

0x588d,	// (0x00062084) cell_vitu_itu_pane_ParamLimits

0x588d,	// (0x00062084) cell_vitu_itu_pane

0x58a2,	// (0x00062099) cell_vitu_function_pane_ParamLimits

0x58a2,	// (0x00062099) cell_vitu_function_pane

0xa63e,	// (0x00066e35) bg_popup_sub_pane_cp08_ParamLimits

0xa63e,	// (0x00066e35) bg_popup_sub_pane_cp08

0x58b6,	// (0x000620ad) field_vitu_entry_pane_t1_ParamLimits

0x58b6,	// (0x000620ad) field_vitu_entry_pane_t1

0xd1c4,	// (0x000699bb) field_vitu_entry_pane_t2_ParamLimits

0xd1c4,	// (0x000699bb) field_vitu_entry_pane_t2

0x0001,

0xf6b9,	// (0x0006beb0) field_vitu_entry_pane_t_ParamLimits

0xf6b9,	// (0x0006beb0) field_vitu_entry_pane_t

0xd1e1,	// (0x000699d8) bg_button_pane_cp05_ParamLimits

0xd1e1,	// (0x000699d8) bg_button_pane_cp05

0x58d3,	// (0x000620ca) cell_vitu_itu_pane_g1

0x58eb,	// (0x000620e2) cell_vitu_itu_pane_t1_ParamLimits

0x58eb,	// (0x000620e2) cell_vitu_itu_pane_t1

0x58fd,	// (0x000620f4) cell_vitu_itu_pane_t2_ParamLimits

0x58fd,	// (0x000620f4) cell_vitu_itu_pane_t2

0x0002,

0xf6be,	// (0x0006beb5) cell_vitu_itu_pane_t_ParamLimits

0xf6be,	// (0x0006beb5) cell_vitu_itu_pane_t

0xd1ef,	// (0x000699e6) bg_button_pane_cp07

0x5940,	// (0x00062137) cell_vitu_function_pane_g1

0x1254,	// (0x0005da4b) main_calc_pane_g1

0x0d46,	// (0x0005d53d) aid_visual_content_pane

0x0fd5,	// (0x0005d7cc) main_vradio_pane

0x5949,	// (0x00062140) main_vradio_pane_g1_ParamLimits

0x5949,	// (0x00062140) main_vradio_pane_g1

0xd1f9,	// (0x000699f0) main_vradio_pane_g2_ParamLimits

0xd1f9,	// (0x000699f0) main_vradio_pane_g2

0x0001,

0xf6c5,	// (0x0006bebc) main_vradio_pane_g_ParamLimits

0xf6c5,	// (0x0006bebc) main_vradio_pane_g

0x5959,	// (0x00062150) main_vradio_pane_t1_ParamLimits

0x5959,	// (0x00062150) main_vradio_pane_t1

0x596b,	// (0x00062162) main_vradio_pane_t2_ParamLimits

0x596b,	// (0x00062162) main_vradio_pane_t2

0xd206,	// (0x000699fd) main_vradio_pane_t3_ParamLimits

0xd206,	// (0x000699fd) main_vradio_pane_t3

0x0002,

0xf6ca,	// (0x0006bec1) main_vradio_pane_t_ParamLimits

0xf6ca,	// (0x0006bec1) main_vradio_pane_t

0x597d,	// (0x00062174) vradio_rocker_control_pane_ParamLimits

0x597d,	// (0x00062174) vradio_rocker_control_pane

0x5989,	// (0x00062180) vradio_station_info_pane_ParamLimits

0x5989,	// (0x00062180) vradio_station_info_pane

0xd21a,	// (0x00069a11) vradio_frequency_info_pane_ParamLimits

0xd21a,	// (0x00069a11) vradio_frequency_info_pane

0xcbab,	// (0x000693a2) vradio_station_info_pane_g1

0xd229,	// (0x00069a20) vradio_station_info_pane_t1_ParamLimits

0xd229,	// (0x00069a20) vradio_station_info_pane_t1

0xd24b,	// (0x00069a42) vradio_station_info_pane_t2_ParamLimits

0xd24b,	// (0x00069a42) vradio_station_info_pane_t2

0x0001,

0x04fd,	// (0x0005ccf4) vradio_station_info_pane_t_ParamLimits

0x04fd,	// (0x0005ccf4) vradio_station_info_pane_t

0xd25d,	// (0x00069a54) vradio_tuning_pane

0xd265,	// (0x00069a5c) vradio_rocker_control_pane_g1

0xd26d,	// (0x00069a64) vradio_rocker_control_pane_g2

0xd275,	// (0x00069a6c) vradio_rocker_control_pane_g3

0xd27d,	// (0x00069a74) vradio_rocker_control_pane_g4

0xd285,	// (0x00069a7c) vradio_rocker_control_pane_g5

0x0004,

0x0502,	// (0x0005ccf9) vradio_rocker_control_pane_g

0x5998,	// (0x0006218f) vradio_frequency_info_pane_g1

0xd28d,	// (0x00069a84) vradio_frequency_info_pane_t1_ParamLimits

0xd28d,	// (0x00069a84) vradio_frequency_info_pane_t1

0x59a2,	// (0x00062199) vradio_tuning_pane_g1

0x59ab,	// (0x000621a2) vradio_tuning_pane_t1

0x0d8f,	// (0x0005d586) area_side_right_pane_ParamLimits

0x0d8f,	// (0x0005d586) area_side_right_pane

0xc75c,	// (0x00068f53) status_small_pane_g1

0xc764,	// (0x00068f5b) status_small_pane_g2

0xc76d,	// (0x00068f64) status_small_pane_g3

0xc776,	// (0x00068f6d) status_small_pane_g4

0x0003,

0x02bd,	// (0x0005cab4) status_small_pane_g

0xc77f,	// (0x00068f76) status_small_pane_t1

0x0fd5,	// (0x0005d7cc) main_video3_pane

0xd2a1,	// (0x00069a98) cams_zoom_vslider_pane

0xd2a9,	// (0x00069aa0) image3_wide_pane_ParamLimits

0xd2a9,	// (0x00069aa0) image3_wide_pane

0xd2c3,	// (0x00069aba) image3_wide_small_pane

0xd2cf,	// (0x00069ac6) main_video3_pane_g1_ParamLimits

0xd2cf,	// (0x00069ac6) main_video3_pane_g1

0xd2eb,	// (0x00069ae2) main_video3_pane_g2_ParamLimits

0xd2eb,	// (0x00069ae2) main_video3_pane_g2

0x0001,

0x050d,	// (0x0005cd04) main_video3_pane_g_ParamLimits

0x050d,	// (0x0005cd04) main_video3_pane_g

0xd307,	// (0x00069afe) main_video3_pane_t1_ParamLimits

0xd307,	// (0x00069afe) main_video3_pane_t1

0xd332,	// (0x00069b29) main_video3_pane_t2_ParamLimits

0xd332,	// (0x00069b29) main_video3_pane_t2

0xd35d,	// (0x00069b54) main_video3_pane_t3_ParamLimits

0xd35d,	// (0x00069b54) main_video3_pane_t3

0x0002,

0x0512,	// (0x0005cd09) main_video3_pane_t_ParamLimits

0x0512,	// (0x0005cd09) main_video3_pane_t

0xd38a,	// (0x00069b81) cams_zoom_vslider_pane_g1

0xd393,	// (0x00069b8a) cams_zoom_vslider_pane_g2

0x0001,

0x0519,	// (0x0005cd10) cams_zoom_vslider_pane_g

0xd39b,	// (0x00069b92) small_slider_vertical_pane

0xcbab,	// (0x000693a2) small_slider_vertical_pane_g1

0xcbab,	// (0x000693a2) small_slider_vertical_pane_g2

0xd3a3,	// (0x00069b9a) small_slider_vertical_pane_g3

0x0002,

0x051e,	// (0x0005cd15) small_slider_vertical_pane_g

0x0fd5,	// (0x0005d7cc) main_hwr_training_pane

0xd3ac,	// (0x00069ba3) hwr_training_instruct_pane_ParamLimits

0xd3ac,	// (0x00069ba3) hwr_training_instruct_pane

0x59ba,	// (0x000621b1) hwr_training_navi_pane_ParamLimits

0x59ba,	// (0x000621b1) hwr_training_navi_pane

0x59d4,	// (0x000621cb) hwr_training_write_pane_ParamLimits

0x59d4,	// (0x000621cb) hwr_training_write_pane

0x980f,	// (0x00066006) bg_frame_shadow_pane

0xd3e3,	// (0x00069bda) hwr_training_write_pane_g1

0xd3eb,	// (0x00069be2) hwr_training_write_pane_g2

0xd3f3,	// (0x00069bea) hwr_training_write_pane_g3

0xd3fb,	// (0x00069bf2) hwr_training_write_pane_g4

0xd403,	// (0x00069bfa) hwr_training_write_pane_g5

0xd40b,	// (0x00069c02) hwr_training_write_pane_g6

0xd413,	// (0x00069c0a) hwr_training_write_pane_g7

0x0006,

0x0525,	// (0x0005cd1c) hwr_training_write_pane_g

0x5a0c,	// (0x00062203) hwr_training_navi_pane_g1_ParamLimits

0x5a0c,	// (0x00062203) hwr_training_navi_pane_g1

0x5a1e,	// (0x00062215) hwr_training_navi_pane_g2_ParamLimits

0x5a1e,	// (0x00062215) hwr_training_navi_pane_g2

0x5a30,	// (0x00062227) hwr_training_navi_pane_g3_ParamLimits

0x5a30,	// (0x00062227) hwr_training_navi_pane_g3

0x5a40,	// (0x00062237) hwr_training_navi_pane_g4_ParamLimits

0x5a40,	// (0x00062237) hwr_training_navi_pane_g4

0x0004,

0xf6d1,	// (0x0006bec8) hwr_training_navi_pane_g_ParamLimits

0xf6d1,	// (0x0006bec8) hwr_training_navi_pane_g

0x5a5a,	// (0x00062251) hwr_training_navi_pane_t1

0x5a68,	// (0x0006225f) list_single_hwr_training_instruct_pane_ParamLimits

0x5a68,	// (0x0006225f) list_single_hwr_training_instruct_pane

0xd41b,	// (0x00069c12) list_single_hwr_training_instruct_pane_t1

0xcaeb,	// (0x000692e2) bg_frame_shadow_pane_g1

0xd42a,	// (0x00069c21) bg_frame_shadow_pane_g2

0xd432,	// (0x00069c29) bg_frame_shadow_pane_g3

0xd43a,	// (0x00069c31) bg_frame_shadow_pane_g4

0xd442,	// (0x00069c39) bg_frame_shadow_pane_g5

0xd44a,	// (0x00069c41) bg_frame_shadow_pane_g6

0xd452,	// (0x00069c49) bg_frame_shadow_pane_g7

0xa7fb,	// (0x00066ff2) bg_frame_shadow_pane_g8

0x0007,

0xf6dc,	// (0x0006bed3) bg_frame_shadow_pane_g

0x0fd5,	// (0x0005d7cc) main_video_tele_dialer_pane

0x5a97,	// (0x0006228e) aid_size_cell_video_keypad_ParamLimits

0x5a97,	// (0x0006228e) aid_size_cell_video_keypad

0x5aa7,	// (0x0006229e) grid_video_dialer_keypad_pane_ParamLimits

0x5aa7,	// (0x0006229e) grid_video_dialer_keypad_pane

0x5adb,	// (0x000622d2) video_down_pane_cp_ParamLimits

0x5adb,	// (0x000622d2) video_down_pane_cp

0x5b05,	// (0x000622fc) cell_video_dialer_keypad_pane_ParamLimits

0x5b05,	// (0x000622fc) cell_video_dialer_keypad_pane

0xd45a,	// (0x00069c51) bg_button_pane_cp08_ParamLimits

0xd45a,	// (0x00069c51) bg_button_pane_cp08

0x5b1a,	// (0x00062311) cell_video_dialer_keypad_pane_g1_ParamLimits

0x5b1a,	// (0x00062311) cell_video_dialer_keypad_pane_g1

0x52d8,	// (0x00061acf) mup3_rocker2_pane_ParamLimits

0x52d8,	// (0x00061acf) mup3_rocker2_pane

0xcbab,	// (0x000693a2) mup3_rocker2_pane_g1

0x41f8,	// (0x000609ef) main_dialer2_pane

0x0fd5,	// (0x0005d7cc) main_mp4_pane

0x5b5d,	// (0x00062354) main_mp4_pane_g1_ParamLimits

0x5b5d,	// (0x00062354) main_mp4_pane_g1

0x5b6b,	// (0x00062362) main_mp4_pane_g2_ParamLimits

0x5b6b,	// (0x00062362) main_mp4_pane_g2

0x5b79,	// (0x00062370) main_mp4_pane_g3_ParamLimits

0x5b79,	// (0x00062370) main_mp4_pane_g3

0x5bbe,	// (0x000623b5) main_mp4_pane_g4_ParamLimits

0x5bbe,	// (0x000623b5) main_mp4_pane_g4

0x5be6,	// (0x000623dd) main_mp4_pane_g5_ParamLimits

0x5be6,	// (0x000623dd) main_mp4_pane_g5

0x0005,

0xf6fc,	// (0x0006bef3) main_mp4_pane_g_ParamLimits

0xf6fc,	// (0x0006bef3) main_mp4_pane_g

0x5c36,	// (0x0006242d) main_mp4_pane_t1_ParamLimits

0x5c36,	// (0x0006242d) main_mp4_pane_t1

0x5c92,	// (0x00062489) main_mp4_pane_t2_ParamLimits

0x5c92,	// (0x00062489) main_mp4_pane_t2

0xd466,	// (0x00069c5d) main_mp4_pane_t3_ParamLimits

0xd466,	// (0x00069c5d) main_mp4_pane_t3

0x5ce4,	// (0x000624db) main_mp4_pane_t4_ParamLimits

0x5ce4,	// (0x000624db) main_mp4_pane_t4

0x0003,

0xf709,	// (0x0006bf00) main_mp4_pane_t_ParamLimits

0xf709,	// (0x0006bf00) main_mp4_pane_t

0x5d28,	// (0x0006251f) mp4_progress_pane_ParamLimits

0x5d28,	// (0x0006251f) mp4_progress_pane

0x5d72,	// (0x00062569) mp4_rocker_pane_ParamLimits

0x5d72,	// (0x00062569) mp4_rocker_pane

0xd48e,	// (0x00069c85) mp4_progress_pane_t1

0xd4a7,	// (0x00069c9e) mp4_progress_pane_t2

0x0001,

0x0575,	// (0x0005cd6c) mp4_progress_pane_t

0xd4c0,	// (0x00069cb7) mup_progress_pane_cp04

0xda9c,	// (0x0006a293) mp4_rocker_pane_g1

0x5d92,	// (0x00062589) aid_cell_size_keypad2_ParamLimits

0x5d92,	// (0x00062589) aid_cell_size_keypad2

0x5da2,	// (0x00062599) dialer2_ne_pane_ParamLimits

0x5da2,	// (0x00062599) dialer2_ne_pane

0x5db0,	// (0x000625a7) grid_dialer2_keypad_pane_ParamLimits

0x5db0,	// (0x000625a7) grid_dialer2_keypad_pane

0xdaa6,	// (0x0006a29d) bg_popup_call_pane_cp07_ParamLimits

0xdaa6,	// (0x0006a29d) bg_popup_call_pane_cp07

0x5dc0,	// (0x000625b7) dialer2_ne_pane_t1_ParamLimits

0x5dc0,	// (0x000625b7) dialer2_ne_pane_t1

0x5de5,	// (0x000625dc) cell_dialer2_keypad_pane_ParamLimits

0x5de5,	// (0x000625dc) cell_dialer2_keypad_pane

0xd4de,	// (0x00069cd5) bg_button_pane_pane_cp04_ParamLimits

0xd4de,	// (0x00069cd5) bg_button_pane_pane_cp04

0x5dfa,	// (0x000625f1) cell_dialer2_keypad_pane_g1_ParamLimits

0x5dfa,	// (0x000625f1) cell_dialer2_keypad_pane_g1

0x1e68,	// (0x0005e65f) aid_placing_vt_set_content_ParamLimits

0x1e68,	// (0x0005e65f) aid_placing_vt_set_content

0x1e94,	// (0x0005e68b) aid_placing_vt_set_title_ParamLimits

0x1e94,	// (0x0005e68b) aid_placing_vt_set_title

0x0fd5,	// (0x0005d7cc) main_image3_pane

0x5e94,	// (0x0006268b) area_side_right_pane_cp01_ParamLimits

0x5e94,	// (0x0006268b) area_side_right_pane_cp01

0x5ec1,	// (0x000626b8) main_image3_pane_g1_ParamLimits

0x5ec1,	// (0x000626b8) main_image3_pane_g1

0x5ecf,	// (0x000626c6) main_image3_pane_g2_ParamLimits

0x5ecf,	// (0x000626c6) main_image3_pane_g2

0x5ee8,	// (0x000626df) main_image3_pane_g3_ParamLimits

0x5ee8,	// (0x000626df) main_image3_pane_g3

0x5f01,	// (0x000626f8) main_image3_pane_g4_ParamLimits

0x5f01,	// (0x000626f8) main_image3_pane_g4

0x0003,

0xf71c,	// (0x0006bf13) main_image3_pane_g_ParamLimits

0xf71c,	// (0x0006bf13) main_image3_pane_g

0x5f1a,	// (0x00062711) main_image3_pane_t1_ParamLimits

0x5f1a,	// (0x00062711) main_image3_pane_t1

0x5f3f,	// (0x00062736) main_image3_pane_t2_ParamLimits

0x5f3f,	// (0x00062736) main_image3_pane_t2

0x5f5e,	// (0x00062755) main_image3_pane_t3_ParamLimits

0x5f5e,	// (0x00062755) main_image3_pane_t3

0x0003,

0xf725,	// (0x0006bf1c) main_image3_pane_t_ParamLimits

0xf725,	// (0x0006bf1c) main_image3_pane_t

0xdd11,	// (0x0006a508) grid_sctrl_middle_pane_cp01_ParamLimits

0xdd11,	// (0x0006a508) grid_sctrl_middle_pane_cp01

0x5fbf,	// (0x000627b6) cell_sctrl_middle_pane_cp01_ParamLimits

0x5fbf,	// (0x000627b6) cell_sctrl_middle_pane_cp01

0x5fd0,	// (0x000627c7) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x5fd0,	// (0x000627c7) cell_sctrl_middle_pane_cp01_g1

0x0fd5,	// (0x0005d7cc) main_call4_pane

0x5fdd,	// (0x000627d4) aid_size_button_call4_ParamLimits

0x5fdd,	// (0x000627d4) aid_size_button_call4

0x600d,	// (0x00062804) call4_windows_pane_ParamLimits

0x600d,	// (0x00062804) call4_windows_pane

0x6027,	// (0x0006281e) grid_call4_button_pane_ParamLimits

0x6027,	// (0x0006281e) grid_call4_button_pane

0xd4ea,	// (0x00069ce1) call4_windows_conf_pane

0xd4ff,	// (0x00069cf6) popup_call4_audio_first_window_ParamLimits

0xd4ff,	// (0x00069cf6) popup_call4_audio_first_window

0xd54b,	// (0x00069d42) popup_call4_audio_second_window_ParamLimits

0xd54b,	// (0x00069d42) popup_call4_audio_second_window

0xd55f,	// (0x00069d56) popup_call4_audio_wait_window_ParamLimits

0xd55f,	// (0x00069d56) popup_call4_audio_wait_window

0x604b,	// (0x00062842) cell_call4_button_pane_ParamLimits

0x604b,	// (0x00062842) cell_call4_button_pane

0x6070,	// (0x00062867) bg_button_pane_cp09_ParamLimits

0x6070,	// (0x00062867) bg_button_pane_cp09

0x607c,	// (0x00062873) cell_call4_button_pane_g1_ParamLimits

0x607c,	// (0x00062873) cell_call4_button_pane_g1

0x6089,	// (0x00062880) cell_call4_button_pane_t1_ParamLimits

0x6089,	// (0x00062880) cell_call4_button_pane_t1

0xd5a7,	// (0x00069d9e) popup_call4_audio_conf_window_ParamLimits

0xd5a7,	// (0x00069d9e) popup_call4_audio_conf_window

0x530b,	// (0x00061b02) mup3_progress_pane_t1_ParamLimits

0x532a,	// (0x00061b21) mup3_progress_pane_t2_ParamLimits

0xce86,	// (0x0006967d) mup3_progress_pane_t3_ParamLimits

0xf666,	// (0x0006be5d) mup3_progress_pane_t_ParamLimits

0xcea3,	// (0x0006969a) mup_progress_pane_cp03_ParamLimits

0x5848,	// (0x0006203f) mup3_control_keys_pane_g4_copy1

0x5d56,	// (0x0006254d) mp4_rocker2_pane_ParamLimits

0x5d56,	// (0x0006254d) mp4_rocker2_pane

0xd5bb,	// (0x00069db2) mp4_rocker2_pane_g1

0xd5c3,	// (0x00069dba) mp4_rocker2_pane_g2

0x609b,	// (0x00062892) mp4_rocker2_pane_g3

0x60a3,	// (0x0006289a) mp4_rocker2_pane_g4

0x60ab,	// (0x000628a2) mp4_rocker2_pane_g5

0x0004,

0xf72e,	// (0x0006bf25) mp4_rocker2_pane_g

0x0fd5,	// (0x0005d7cc) main_camera4_pane

0x0fd5,	// (0x0005d7cc) main_video4_pane

0x5ab7,	// (0x000622ae) main_video_tele_dialer_pane_t1_ParamLimits

0x5ab7,	// (0x000622ae) main_video_tele_dialer_pane_t1

0x5ac9,	// (0x000622c0) main_video_tele_dialer_pane_t2_ParamLimits

0x5ac9,	// (0x000622c0) main_video_tele_dialer_pane_t2

0x0001,

0xf6ed,	// (0x0006bee4) main_video_tele_dialer_pane_t_ParamLimits

0xf6ed,	// (0x0006bee4) main_video_tele_dialer_pane_t

0x60cb,	// (0x000628c2) cam4_autofocus_pane_ParamLimits

0x60cb,	// (0x000628c2) cam4_autofocus_pane

0x60e5,	// (0x000628dc) cam4_image_uncrop_pane_ParamLimits

0x60e5,	// (0x000628dc) cam4_image_uncrop_pane

0x60fc,	// (0x000628f3) cam4_indicators_pane_ParamLimits

0x60fc,	// (0x000628f3) cam4_indicators_pane

0x6118,	// (0x0006290f) main_camera4_pane_g1_ParamLimits

0x6118,	// (0x0006290f) main_camera4_pane_g1

0x6124,	// (0x0006291b) main_camera4_pane_g2_ParamLimits

0x6124,	// (0x0006291b) main_camera4_pane_g2

0x6124,	// (0x0006291b) main_camera4_pane_g3_ParamLimits

0x6124,	// (0x0006291b) main_camera4_pane_g3

0x6130,	// (0x00062927) main_camera4_pane_g4_ParamLimits

0x6130,	// (0x00062927) main_camera4_pane_g4

0x613c,	// (0x00062933) main_camera4_pane_g5_ParamLimits

0x613c,	// (0x00062933) main_camera4_pane_g5

0x0005,

0xf739,	// (0x0006bf30) main_camera4_pane_g_ParamLimits

0xf739,	// (0x0006bf30) main_camera4_pane_g

0x6156,	// (0x0006294d) main_camera4_pane_t1_ParamLimits

0x6156,	// (0x0006294d) main_camera4_pane_t1

0x619e,	// (0x00062995) bg_tb_trans_pane_cp06

0x61b4,	// (0x000629ab) cam4_indicators_pane_g1

0x61c5,	// (0x000629bc) cam4_indicators_pane_g2

0x0002,

0xf754,	// (0x0006bf4b) cam4_indicators_pane_g

0x61e3,	// (0x000629da) cam4_indicators_pane_t1

0x620d,	// (0x00062a04) main_video4_pane_g1_ParamLimits

0x620d,	// (0x00062a04) main_video4_pane_g1

0x6219,	// (0x00062a10) main_video4_pane_g2_ParamLimits

0x6219,	// (0x00062a10) main_video4_pane_g2

0x6225,	// (0x00062a1c) main_video4_pane_g3_ParamLimits

0x6225,	// (0x00062a1c) main_video4_pane_g3

0x6231,	// (0x00062a28) main_video4_pane_g4_ParamLimits

0x6231,	// (0x00062a28) main_video4_pane_g4

0x0004,

0xf75b,	// (0x0006bf52) main_video4_pane_g_ParamLimits

0xf75b,	// (0x0006bf52) main_video4_pane_g

0x6251,	// (0x00062a48) vid4_indicators_pane_ParamLimits

0x6251,	// (0x00062a48) vid4_indicators_pane

0x6270,	// (0x00062a67) video4_image_uncrop_cif_pane_ParamLimits

0x6270,	// (0x00062a67) video4_image_uncrop_cif_pane

0x627f,	// (0x00062a76) video4_image_uncrop_nhd_pane_ParamLimits

0x627f,	// (0x00062a76) video4_image_uncrop_nhd_pane

0x60e5,	// (0x000628dc) video4_image_uncrop_vga_pane_ParamLimits

0x60e5,	// (0x000628dc) video4_image_uncrop_vga_pane

0x41ea,	// (0x000609e1) bg_tb_trans_pane_cp07

0x6294,	// (0x00062a8b) vid4_indicators_pane_g1

0x62a8,	// (0x00062a9f) vid4_indicators_pane_g2

0x62bc,	// (0x00062ab3) vid4_indicators_pane_g3

0x0004,

0xf766,	// (0x0006bf5d) vid4_indicators_pane_g

0x62e9,	// (0x00062ae0) vid4_indicators_pane_t1

0x6300,	// (0x00062af7) cam4_autofocus_pane_g1

0x6308,	// (0x00062aff) cam4_autofocus_pane_g2

0x6310,	// (0x00062b07) cam4_autofocus_pane_g3

0x0002,

0xf771,	// (0x0006bf68) cam4_autofocus_pane_g

0x6318,	// (0x00062b0f) cam4_autofocus_pane_g3_copy1

0x5ae9,	// (0x000622e0) video_down_pane_cp_t1

0x5af7,	// (0x000622ee) video_down_pane_cp_t2

0x0001,

0xf6f2,	// (0x0006bee9) video_down_pane_cp_t

0x0fbb,	// (0x0005d7b2) popup_vitu2_window_ParamLimits

0x0fbb,	// (0x0005d7b2) popup_vitu2_window

0x6320,	// (0x00062b17) aid_size_cell2_itu2_ParamLimits

0x6320,	// (0x00062b17) aid_size_cell2_itu2

0x6342,	// (0x00062b39) aid_size_cell_itu2_ParamLimits

0x6342,	// (0x00062b39) aid_size_cell_itu2

0x6386,	// (0x00062b7d) bg_popup_window_pane_cp09_ParamLimits

0x6386,	// (0x00062b7d) bg_popup_window_pane_cp09

0x6394,	// (0x00062b8b) field_vitu2_entry_pane_ParamLimits

0x6394,	// (0x00062b8b) field_vitu2_entry_pane

0x63b4,	// (0x00062bab) grid_vitu2_function_pane_ParamLimits

0x63b4,	// (0x00062bab) grid_vitu2_function_pane

0x63f8,	// (0x00062bef) grid_vitu2_itu_pane_ParamLimits

0x63f8,	// (0x00062bef) grid_vitu2_itu_pane

0x646e,	// (0x00062c65) cell_vitu2_itu_pane_ParamLimits

0x646e,	// (0x00062c65) cell_vitu2_itu_pane

0x6483,	// (0x00062c7a) cell_vitu2_function_pane_ParamLimits

0x6483,	// (0x00062c7a) cell_vitu2_function_pane

0xd5cb,	// (0x00069dc2) bg_popup_call_pane_cp08_ParamLimits

0xd5cb,	// (0x00069dc2) bg_popup_call_pane_cp08

0xd5e2,	// (0x00069dd9) field_vitu2_entry_pane_g1

0xd5ee,	// (0x00069de5) field_vitu2_entry_pane_g2

0x0002,

0x05e0,	// (0x0005cdd7) field_vitu2_entry_pane_g

0x64c4,	// (0x00062cbb) field_vitu2_entry_pane_t1_ParamLimits

0x64c4,	// (0x00062cbb) field_vitu2_entry_pane_t1

0x9e5e,	// (0x00066655) field_vitu2_entry_pane_t2_ParamLimits

0x9e5e,	// (0x00066655) field_vitu2_entry_pane_t2

0x0001,

0xf778,	// (0x0006bf6f) field_vitu2_entry_pane_t_ParamLimits

0xf778,	// (0x0006bf6f) field_vitu2_entry_pane_t

0x64f1,	// (0x00062ce8) bg_button_pane_cp010_ParamLimits

0x64f1,	// (0x00062ce8) bg_button_pane_cp010

0x64ff,	// (0x00062cf6) cell_vitu2_itu_pane_g1

0x6528,	// (0x00062d1f) cell_vitu2_itu_pane_t1_ParamLimits

0x6528,	// (0x00062d1f) cell_vitu2_itu_pane_t1

0x0c37,	// (0x0005d42e) cell_vitu2_itu_pane_t2_ParamLimits

0x0c37,	// (0x0005d42e) cell_vitu2_itu_pane_t2

0x0002,

0xf782,	// (0x0006bf79) cell_vitu2_itu_pane_t_ParamLimits

0xf782,	// (0x0006bf79) cell_vitu2_itu_pane_t

0x41ea,	// (0x000609e1) bg_button_pane_cp011

0x6574,	// (0x00062d6b) cell_vitu2_function_pane_g1

0x0fd5,	// (0x0005d7cc) main_myfav_hc_pane

0x5fa0,	// (0x00062797) popup_image3_note_pane_ParamLimits

0x5fa0,	// (0x00062797) popup_image3_note_pane

0x5fae,	// (0x000627a5) popup_image3_tool_bar_pane_ParamLimits

0x5fae,	// (0x000627a5) popup_image3_tool_bar_pane

0x0ca5,	// (0x0005d49c) cell_vitu2_itu_pane_t3_ParamLimits

0x0ca5,	// (0x0005d49c) cell_vitu2_itu_pane_t3

0x980f,	// (0x00066006) bg_popup_trans_pane

0xd610,	// (0x00069e07) grid_image3_tool_bar_pane

0xd61a,	// (0x00069e11) bg_popup_trans_pane_g1

0xab50,	// (0x00067347) bg_popup_trans_pane_g2

0xd622,	// (0x00069e19) bg_popup_trans_pane_g3

0xd62a,	// (0x00069e21) bg_popup_trans_pane_g4

0xd632,	// (0x00069e29) bg_popup_trans_pane_g5

0xd63a,	// (0x00069e31) bg_popup_trans_pane_g6

0xd642,	// (0x00069e39) bg_popup_trans_pane_g7

0xd64a,	// (0x00069e41) bg_popup_trans_pane_g8

0xab30,	// (0x00067327) bg_popup_trans_pane_g9

0x0008,

0xf789,	// (0x0006bf80) bg_popup_trans_pane_g

0xd652,	// (0x00069e49) cell_image3_tool_bar_pane_ParamLimits

0xd652,	// (0x00069e49) cell_image3_tool_bar_pane

0xcbab,	// (0x000693a2) cell_image3_tool_bar_pane_g1

0x980f,	// (0x00066006) bg_popup_trans_pane_cp1

0xd666,	// (0x00069e5d) popup_image3_note_pane_t1

0xd674,	// (0x00069e6b) popup_image3_note_pane_t2

0xd682,	// (0x00069e79) popup_image3_note_pane_t3

0x0002,

0x060b,	// (0x0005ce02) popup_image3_note_pane_t

0xd690,	// (0x00069e87) popup_image3_note_pane_t3_copy1

0x6588,	// (0x00062d7f) bg_myfav_hc_instruction_pane_ParamLimits

0x6588,	// (0x00062d7f) bg_myfav_hc_instruction_pane

0x65a0,	// (0x00062d97) cell_myfav_contact_pane_ParamLimits

0x65a0,	// (0x00062d97) cell_myfav_contact_pane

0x65ba,	// (0x00062db1) cell_myfav_contact_pane_cp1_ParamLimits

0x65ba,	// (0x00062db1) cell_myfav_contact_pane_cp1

0x65d2,	// (0x00062dc9) cell_myfav_contact_pane_cp2_ParamLimits

0x65d2,	// (0x00062dc9) cell_myfav_contact_pane_cp2

0x65ea,	// (0x00062de1) cell_myfav_contact_pane_cp3_ParamLimits

0x65ea,	// (0x00062de1) cell_myfav_contact_pane_cp3

0x6601,	// (0x00062df8) cell_myfav_contact_pane_cp4_ParamLimits

0x6601,	// (0x00062df8) cell_myfav_contact_pane_cp4

0x6617,	// (0x00062e0e) cell_myfav_contact_pane_cp5_ParamLimits

0x6617,	// (0x00062e0e) cell_myfav_contact_pane_cp5

0x662b,	// (0x00062e22) cell_myfav_contact_pane_cp6_ParamLimits

0x662b,	// (0x00062e22) cell_myfav_contact_pane_cp6

0x663f,	// (0x00062e36) cell_myfav_contact_pane_cp7_ParamLimits

0x663f,	// (0x00062e36) cell_myfav_contact_pane_cp7

0xd69e,	// (0x00069e95) listscroll_gen_pane_cp05

0x6657,	// (0x00062e4e) main_myfav_hc_pane_g1_ParamLimits

0x6657,	// (0x00062e4e) main_myfav_hc_pane_g1

0x666f,	// (0x00062e66) main_myfav_hc_pane_g2_ParamLimits

0x666f,	// (0x00062e66) main_myfav_hc_pane_g2

0x0002,

0xf79c,	// (0x0006bf93) main_myfav_hc_pane_g_ParamLimits

0xf79c,	// (0x0006bf93) main_myfav_hc_pane_g

0x669f,	// (0x00062e96) main_myfav_hc_pane_t1_ParamLimits

0x669f,	// (0x00062e96) main_myfav_hc_pane_t1

0xd6a7,	// (0x00069e9e) main_myfav_hc_pane_t2_ParamLimits

0xd6a7,	// (0x00069e9e) main_myfav_hc_pane_t2

0xd6b9,	// (0x00069eb0) main_myfav_hc_pane_t3_ParamLimits

0xd6b9,	// (0x00069eb0) main_myfav_hc_pane_t3

0x66b6,	// (0x00062ead) main_myfav_hc_pane_t4_ParamLimits

0x66b6,	// (0x00062ead) main_myfav_hc_pane_t4

0x0004,

0xf7a3,	// (0x0006bf9a) main_myfav_hc_pane_t_ParamLimits

0xf7a3,	// (0x0006bf9a) main_myfav_hc_pane_t

0xcbab,	// (0x000693a2) bg_myfav_hc_instruction_pane_g1

0xd6cb,	// (0x00069ec2) cell_myfav_contact_pane_g1_ParamLimits

0xd6cb,	// (0x00069ec2) cell_myfav_contact_pane_g1

0xd6cb,	// (0x00069ec2) cell_myfav_contact_pane_g2_ParamLimits

0xd6cb,	// (0x00069ec2) cell_myfav_contact_pane_g2

0xd6d7,	// (0x00069ece) cell_myfav_contact_pane_g3_ParamLimits

0xd6d7,	// (0x00069ece) cell_myfav_contact_pane_g3

0xce70,	// (0x00069667) cell_myfav_contact_pane_g4_ParamLimits

0xce70,	// (0x00069667) cell_myfav_contact_pane_g4

0xd6e4,	// (0x00069edb) cell_myfav_contact_pane_g5_ParamLimits

0xd6e4,	// (0x00069edb) cell_myfav_contact_pane_g5

0x0004,

0x0624,	// (0x0005ce1b) cell_myfav_contact_pane_g_ParamLimits

0x0624,	// (0x0005ce1b) cell_myfav_contact_pane_g

0x6687,	// (0x00062e7e) main_myfav_hc_pane_g3_ParamLimits

0x6687,	// (0x00062e7e) main_myfav_hc_pane_g3

0x0ec4,	// (0x0005d6bb) popup_adpt_find_window

0x66e0,	// (0x00062ed7) afind_page_pane_ParamLimits

0x66e0,	// (0x00062ed7) afind_page_pane

0x66ed,	// (0x00062ee4) aid_size_cell_afind_ParamLimits

0x66ed,	// (0x00062ee4) aid_size_cell_afind

0x6707,	// (0x00062efe) bg_popup_sub_pane_cp09_ParamLimits

0x6707,	// (0x00062efe) bg_popup_sub_pane_cp09

0x6714,	// (0x00062f0b) find_pane_cp01_ParamLimits

0x6714,	// (0x00062f0b) find_pane_cp01

0xd6f0,	// (0x00069ee7) grid_afind_control_pane_ParamLimits

0xd6f0,	// (0x00069ee7) grid_afind_control_pane

0x6721,	// (0x00062f18) grid_afind_pane_ParamLimits

0x6721,	// (0x00062f18) grid_afind_pane

0x673b,	// (0x00062f32) cell_afind_pane_ParamLimits

0x673b,	// (0x00062f32) cell_afind_pane

0xcbab,	// (0x000693a2) afind_page_pane_g1

0x6783,	// (0x00062f7a) afind_page_pane_g2

0x678c,	// (0x00062f83) afind_page_pane_g3

0x0002,

0xf7ae,	// (0x0006bfa5) afind_page_pane_g

0x6795,	// (0x00062f8c) afind_page_pane_t1

0xd704,	// (0x00069efb) cell_afind_grid_control_pane_ParamLimits

0xd704,	// (0x00069efb) cell_afind_grid_control_pane

0xd4de,	// (0x00069cd5) bg_button_pane_cp69_ParamLimits

0xd4de,	// (0x00069cd5) bg_button_pane_cp69

0x67b5,	// (0x00062fac) cell_afind_pane_g1_ParamLimits

0x67b5,	// (0x00062fac) cell_afind_pane_g1

0x67c2,	// (0x00062fb9) cell_afind_pane_t1_ParamLimits

0x67c2,	// (0x00062fb9) cell_afind_pane_t1

0xa949,	// (0x00067140) bg_button_pane_cp72

0xd713,	// (0x00069f0a) cell_afind_grid_control_pane_g1

0x3d64,	// (0x0006055b) aid_image_placing_area_ParamLimits

0x3d64,	// (0x0006055b) aid_image_placing_area

0xd1ac,	// (0x000699a3) field_vitu_entry_pane_g1_ParamLimits

0xd1ac,	// (0x000699a3) field_vitu_entry_pane_g1

0xd1b8,	// (0x000699af) field_vitu_entry_pane_g2_ParamLimits

0xd1b8,	// (0x000699af) field_vitu_entry_pane_g2

0x0001,

0x04e0,	// (0x0005ccd7) field_vitu_entry_pane_g_ParamLimits

0x04e0,	// (0x0005ccd7) field_vitu_entry_pane_g

0x58d3,	// (0x000620ca) cell_vitu_itu_pane_g1_ParamLimits

0x5923,	// (0x0006211a) cell_vitu_itu_pane_t3_ParamLimits

0x5923,	// (0x0006211a) cell_vitu_itu_pane_t3

0xd48e,	// (0x00069c85) mp4_progress_pane_t1_ParamLimits

0xd4a7,	// (0x00069c9e) mp4_progress_pane_t2_ParamLimits

0x0575,	// (0x0005cd6c) mp4_progress_pane_t_ParamLimits

0xd4c0,	// (0x00069cb7) mup_progress_pane_cp04_ParamLimits

0x66ca,	// (0x00062ec1) main_myfav_hc_pane_t5_ParamLimits

0x66ca,	// (0x00062ec1) main_myfav_hc_pane_t5

0x0d52,	// (0x0005d549) aid_zoom_text_primary

0x0ec4,	// (0x0005d6bb) popup_adpt_find_window_ParamLimits

0x41ea,	// (0x000609e1) main_cam_set_pane

0x610a,	// (0x00062901) cam4_zoom_pane_ParamLimits

0x610a,	// (0x00062901) cam4_zoom_pane

0x67d4,	// (0x00062fcb) main_cam_set_pane_g1_ParamLimits

0x67d4,	// (0x00062fcb) main_cam_set_pane_g1

0x67e2,	// (0x00062fd9) main_cam_set_pane_g2_ParamLimits

0x67e2,	// (0x00062fd9) main_cam_set_pane_g2

0x0001,

0xf7b5,	// (0x0006bfac) main_cam_set_pane_g_ParamLimits

0xf7b5,	// (0x0006bfac) main_cam_set_pane_g

0x67ee,	// (0x00062fe5) main_cam_set_pane_t1_ParamLimits

0x67ee,	// (0x00062fe5) main_cam_set_pane_t1

0x680a,	// (0x00063001) main_cset_listscroll_pane_ParamLimits

0x680a,	// (0x00063001) main_cset_listscroll_pane

0x6835,	// (0x0006302c) main_cset_slider_pane_ParamLimits

0x6835,	// (0x0006302c) main_cset_slider_pane

0xd724,	// (0x00069f1b) main_cset_list_pane_ParamLimits

0xd724,	// (0x00069f1b) main_cset_list_pane

0xd734,	// (0x00069f2b) scroll_pane_cp028

0x6854,	// (0x0006304b) aid_area_touch_slider

0x6870,	// (0x00063067) cset_slider_pane

0x689a,	// (0x00063091) main_cset_slider_pane_g1

0x68af,	// (0x000630a6) main_cset_slider_pane_g2

0x0011,

0xf7ba,	// (0x0006bfb1) main_cset_slider_pane_g

0xd76d,	// (0x00069f64) main_cset_slider_pane_t1

0x6975,	// (0x0006316c) main_cset_slider_pane_t2

0x698f,	// (0x00063186) main_cset_slider_pane_t3

0x69a9,	// (0x000631a0) main_cset_slider_pane_t4

0x69c7,	// (0x000631be) main_cset_slider_pane_t5

0x69e5,	// (0x000631dc) main_cset_slider_pane_t6

0x69fc,	// (0x000631f3) main_cset_slider_pane_t7

0x000e,

0xf7df,	// (0x0006bfd6) main_cset_slider_pane_t

0x6b0a,	// (0x00063301) cset_list_set_pane_ParamLimits

0x6b0a,	// (0x00063301) cset_list_set_pane

0x6b26,	// (0x0006331d) aid_position_infowindow_above

0x6b2e,	// (0x00063325) aid_position_infowindow_below

0x9e7b,	// (0x00066672) cset_list_set_pane_g1_ParamLimits

0x9e7b,	// (0x00066672) cset_list_set_pane_g1

0x6b36,	// (0x0006332d) cset_list_set_pane_g3_ParamLimits

0x6b36,	// (0x0006332d) cset_list_set_pane_g3

0x0001,

0xf7fe,	// (0x0006bff5) cset_list_set_pane_g_ParamLimits

0xf7fe,	// (0x0006bff5) cset_list_set_pane_g

0x9e87,	// (0x0006667e) cset_list_set_pane_t1_ParamLimits

0x9e87,	// (0x0006667e) cset_list_set_pane_t1

0xa63e,	// (0x00066e35) list_highlight_pane_cp021_ParamLimits

0xa63e,	// (0x00066e35) list_highlight_pane_cp021

0xb4cc,	// (0x00067cc3) cset_slider_pane_g1

0xb4de,	// (0x00067cd5) cset_slider_pane_g2

0xb4d5,	// (0x00067ccc) cset_slider_pane_g3

0x0002,

0x0684,	// (0x0005ce7b) cset_slider_pane_g

0x6b45,	// (0x0006333c) aid_area_touch_cam4_zoom

0x6b4d,	// (0x00063344) cam4_zoom_cont_pane

0x6b55,	// (0x0006334c) cam4_zoom_pane_g1

0x6b5d,	// (0x00063354) cam4_zoom_pane_g2

0x6b65,	// (0x0006335c) cam4_zoom_pane_g3

0x0002,

0xf803,	// (0x0006bffa) cam4_zoom_pane_g

0x6b6d,	// (0x00063364) cam4_zoom_cont_pane_g1

0x6b76,	// (0x0006336d) cam4_zoom_cont_pane_g2

0x6b7f,	// (0x00063376) cam4_zoom_cont_pane_g3

0x0002,

0xf80a,	// (0x0006c001) cam4_zoom_cont_pane_g

0x5ff7,	// (0x000627ee) call4_image_pane_ParamLimits

0x5ff7,	// (0x000627ee) call4_image_pane

0xd4ea,	// (0x00069ce1) call4_windows_conf_pane_ParamLimits

0xd529,	// (0x00069d20) popup_call4_audio_in_window_ParamLimits

0xd529,	// (0x00069d20) popup_call4_audio_in_window

0x980f,	// (0x00066006) bg_popup_call2_act_pane_cp02

0xd59f,	// (0x00069d96) call4_list_conf_pane

0xcbab,	// (0x000693a2) call4_image_pane_g1

0xcbab,	// (0x000693a2) call4_image_pane_g2

0x0001,

0x03a1,	// (0x0005cb98) call4_image_pane_g

0xd81f,	// (0x0006a016) list_single_graphic_popup_conf4_pane_ParamLimits

0xd81f,	// (0x0006a016) list_single_graphic_popup_conf4_pane

0x980f,	// (0x00066006) list_highlight_pane_cp022

0xd832,	// (0x0006a029) list_single_graphic_popup_conf4_pane_g1

0xb08a,	// (0x00067881) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf811,	// (0x0006c008) list_single_graphic_popup_conf4_pane_g

0xd83a,	// (0x0006a031) list_single_graphic_popup_conf4_pane_t1

0x1ff8,	// (0x0005e7ef) popup_vtel_slider_window_ParamLimits

0x1ff8,	// (0x0005e7ef) popup_vtel_slider_window

0xd4cc,	// (0x00069cc3) dialer2_ne_pane_t2_ParamLimits

0xd4cc,	// (0x00069cc3) dialer2_ne_pane_t2

0x0001,

0xf712,	// (0x0006bf09) dialer2_ne_pane_t_ParamLimits

0xf712,	// (0x0006bf09) dialer2_ne_pane_t

0xa63e,	// (0x00066e35) bg_popup_sub_pane_cp010_ParamLimits

0xa63e,	// (0x00066e35) bg_popup_sub_pane_cp010

0x6b88,	// (0x0006337f) popup_vtel_slider_window_g1_ParamLimits

0x6b88,	// (0x0006337f) popup_vtel_slider_window_g1

0x6b94,	// (0x0006338b) popup_vtel_slider_window_g2_ParamLimits

0x6b94,	// (0x0006338b) popup_vtel_slider_window_g2

0x0003,

0xf816,	// (0x0006c00d) popup_vtel_slider_window_g_ParamLimits

0xf816,	// (0x0006c00d) popup_vtel_slider_window_g

0x6bdc,	// (0x000633d3) vtel_slider_pane_ParamLimits

0x6bdc,	// (0x000633d3) vtel_slider_pane

0x6beb,	// (0x000633e2) vtel_slider_pane_g1_ParamLimits

0x6beb,	// (0x000633e2) vtel_slider_pane_g1

0x6bf8,	// (0x000633ef) vtel_slider_pane_g2_ParamLimits

0x6bf8,	// (0x000633ef) vtel_slider_pane_g2

0x6c05,	// (0x000633fc) vtel_slider_pane_g3_ParamLimits

0x6c05,	// (0x000633fc) vtel_slider_pane_g3

0x6beb,	// (0x000633e2) vtel_slider_pane_g4_ParamLimits

0x6beb,	// (0x000633e2) vtel_slider_pane_g4

0x6c12,	// (0x00063409) vtel_slider_pane_g5_ParamLimits

0x6c12,	// (0x00063409) vtel_slider_pane_g5

0x0004,

0xf81f,	// (0x0006c016) vtel_slider_pane_g_ParamLimits

0xf81f,	// (0x0006c016) vtel_slider_pane_g

0x41ea,	// (0x000609e1) main_gallery2_pane

0x6368,	// (0x00062b5f) aid_size_row_itut2_dropdow_list_ParamLimits

0x6368,	// (0x00062b5f) aid_size_row_itut2_dropdow_list

0x63d6,	// (0x00062bcd) grid_vitu2_function_top_pane_ParamLimits

0x63d6,	// (0x00062bcd) grid_vitu2_function_top_pane

0x642c,	// (0x00062c23) popup_vitu2_dropdown_list_window_ParamLimits

0x642c,	// (0x00062c23) popup_vitu2_dropdown_list_window

0x644c,	// (0x00062c43) popup_vitu2_match_list_window

0x6c1f,	// (0x00063416) cell_vitu2_function_top_pane_ParamLimits

0x6c1f,	// (0x00063416) cell_vitu2_function_top_pane

0x6c3f,	// (0x00063436) cell_vitu2_function_top_pane_cp01_ParamLimits

0x6c3f,	// (0x00063436) cell_vitu2_function_top_pane_cp01

0x6c5d,	// (0x00063454) cell_vitu2_function_top_wide_pane_ParamLimits

0x6c5d,	// (0x00063454) cell_vitu2_function_top_wide_pane

0x41ea,	// (0x000609e1) bg_button_pane_cp012

0x6c7b,	// (0x00063472) cell_vitu2_function_top_pane_g1

0x6c8f,	// (0x00063486) bg_button_pane_cp013_ParamLimits

0x6c8f,	// (0x00063486) bg_button_pane_cp013

0x6cab,	// (0x000634a2) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x6cab,	// (0x000634a2) cell_vitu2_function_top_wide_pane_g1

0x0fbb,	// (0x0005d7b2) bg_popup_sub_pane_cp20

0x6cc3,	// (0x000634ba) list_vitu2_match_list_pane

0xd61a,	// (0x00069e11) bg_popup_sub_pane_cp20_g1

0xd622,	// (0x00069e19) bg_popup_sub_pane_cp20_g2

0xab50,	// (0x00067347) bg_popup_sub_pane_cp20_g3

0xd62a,	// (0x00069e21) bg_popup_sub_pane_cp20_g4

0xab30,	// (0x00067327) bg_popup_sub_pane_cp20_g5

0xd850,	// (0x0006a047) bg_popup_sub_pane_cp20_g6

0xd63a,	// (0x00069e31) bg_popup_sub_pane_cp20_g7

0xd642,	// (0x00069e39) bg_popup_sub_pane_cp20_g8

0xd64a,	// (0x00069e41) bg_popup_sub_pane_cp20_g9

0x0008,

0xf82a,	// (0x0006c021) bg_popup_sub_pane_cp20_g

0x6cdb,	// (0x000634d2) list_vitu2_match_list_item_pane_ParamLimits

0x6cdb,	// (0x000634d2) list_vitu2_match_list_item_pane

0x6ced,	// (0x000634e4) list_vitu2_match_list_item_pane_t1

0x0fd5,	// (0x0005d7cc) bg_popup_sub_pane_cp21

0x6d2a,	// (0x00063521) grid_vitu2_dropdown_list_pane

0x6d32,	// (0x00063529) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x6d32,	// (0x00063529) cell_vitu2_dropdown_list_char_pane

0x6d53,	// (0x0006354a) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x6d53,	// (0x0006354a) cell_vitu2_dropdown_list_ctrl_pane

0xd858,	// (0x0006a04f) cell_vitu2_dropdown_list_char_pane_g1

0xd861,	// (0x0006a058) cell_vitu2_dropdown_list_char_pane_g2

0xd86a,	// (0x0006a061) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf847,	// (0x0006c03e) cell_vitu2_dropdown_list_char_pane_g

0x6d7f,	// (0x00063576) cell_vitu2_dropdown_list_char_pane_t1

0x6d8d,	// (0x00063584) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x6d8d,	// (0x00063584) cell_vitu2_dropdown_list_ctrl_pane_g1

0x6d9d,	// (0x00063594) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x6d9d,	// (0x00063594) cell_vitu2_dropdown_list_ctrl_pane_g2

0x6dae,	// (0x000635a5) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x6dae,	// (0x000635a5) cell_vitu2_dropdown_list_ctrl_pane_g3

0x6dbe,	// (0x000635b5) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x6dbe,	// (0x000635b5) cell_vitu2_dropdown_list_ctrl_pane_g4

0x619e,	// (0x00062995) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x619e,	// (0x00062995) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf84e,	// (0x0006c045) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf84e,	// (0x0006c045) cell_vitu2_dropdown_list_ctrl_pane_g

0x6dda,	// (0x000635d1) aid_size_cell_gallery2_ParamLimits

0x6dda,	// (0x000635d1) aid_size_cell_gallery2

0x6df4,	// (0x000635eb) grid_gallery2_pane_ParamLimits

0x6df4,	// (0x000635eb) grid_gallery2_pane

0x5754,	// (0x00061f4b) scroll_pane_cp029_ParamLimits

0x5754,	// (0x00061f4b) scroll_pane_cp029

0x6e0b,	// (0x00063602) cell_gallery2_pane_ParamLimits

0x6e0b,	// (0x00063602) cell_gallery2_pane

0xd873,	// (0x0006a06a) cell_gallery2_pane_g2

0x6e60,	// (0x00063657) cell_gallery2_pane_g3

0xd87b,	// (0x0006a072) cell_gallery2_pane_g4

0xd883,	// (0x0006a07a) cell_gallery2_pane_g5

0xb396,	// (0x00067b8d) grid_highlight_pane_cp10

0x644c,	// (0x00062c43) popup_vitu2_match_list_window_ParamLimits

0x645e,	// (0x00062c55) popup_vitu2_query_window_ParamLimits

0x645e,	// (0x00062c55) popup_vitu2_query_window

0x0fd5,	// (0x0005d7cc) bg_vitu2_candi_button_pane

0xd858,	// (0x0006a04f) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd861,	// (0x0006a058) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd86a,	// (0x0006a061) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x6e68,	// (0x0006365f) bg_button_pane_cp015

0x6e7a,	// (0x00063671) bg_button_pane_cp016

0x6e8d,	// (0x00063684) bg_button_pane_cp017

0xc7a1,	// (0x00068f98) bg_popup_sub_pane_cp22

0xd88b,	// (0x0006a082) popup_vitu2_query_window_g1

0x6ed2,	// (0x000636c9) popup_vitu2_query_window_g2

0x0002,

0xf859,	// (0x0006c050) popup_vitu2_query_window_g

0x6eef,	// (0x000636e6) popup_vitu2_query_window_t1_ParamLimits

0x6eef,	// (0x000636e6) popup_vitu2_query_window_t1

0x6f22,	// (0x00063719) popup_vitu2_query_window_t2_ParamLimits

0x6f22,	// (0x00063719) popup_vitu2_query_window_t2

0x6f34,	// (0x0006372b) popup_vitu2_query_window_t3_ParamLimits

0x6f34,	// (0x0006372b) popup_vitu2_query_window_t3

0x6f5c,	// (0x00063753) popup_vitu2_query_window_t4_ParamLimits

0x6f5c,	// (0x00063753) popup_vitu2_query_window_t4

0x6f7d,	// (0x00063774) popup_vitu2_query_window_t5_ParamLimits

0x6f7d,	// (0x00063774) popup_vitu2_query_window_t5

0x0006,

0xf860,	// (0x0006c057) popup_vitu2_query_window_t_ParamLimits

0xf860,	// (0x0006c057) popup_vitu2_query_window_t

0xd71c,	// (0x00069f13) main_cset_text_pane

0x6854,	// (0x0006304b) aid_area_touch_slider_ParamLimits

0x6870,	// (0x00063067) cset_slider_pane_ParamLimits

0x689a,	// (0x00063091) main_cset_slider_pane_g1_ParamLimits

0x68af,	// (0x000630a6) main_cset_slider_pane_g2_ParamLimits

0xd73d,	// (0x00069f34) main_cset_slider_pane_g3_ParamLimits

0xd73d,	// (0x00069f34) main_cset_slider_pane_g3

0x68c4,	// (0x000630bb) main_cset_slider_pane_g4_ParamLimits

0x68c4,	// (0x000630bb) main_cset_slider_pane_g4

0x68d3,	// (0x000630ca) main_cset_slider_pane_g5_ParamLimits

0x68d3,	// (0x000630ca) main_cset_slider_pane_g5

0x68e1,	// (0x000630d8) main_cset_slider_pane_g6_ParamLimits

0x68e1,	// (0x000630d8) main_cset_slider_pane_g6

0xf7ba,	// (0x0006bfb1) main_cset_slider_pane_g_ParamLimits

0xd76d,	// (0x00069f64) main_cset_slider_pane_t1_ParamLimits

0x6975,	// (0x0006316c) main_cset_slider_pane_t2_ParamLimits

0x698f,	// (0x00063186) main_cset_slider_pane_t3_ParamLimits

0x69a9,	// (0x000631a0) main_cset_slider_pane_t4_ParamLimits

0x69c7,	// (0x000631be) main_cset_slider_pane_t5_ParamLimits

0x69e5,	// (0x000631dc) main_cset_slider_pane_t6_ParamLimits

0x69fc,	// (0x000631f3) main_cset_slider_pane_t7_ParamLimits

0x6a2a,	// (0x00063221) main_cset_slider_pane_t8_ParamLimits

0x6a2a,	// (0x00063221) main_cset_slider_pane_t8

0x6a52,	// (0x00063249) main_cset_slider_pane_t9_ParamLimits

0x6a52,	// (0x00063249) main_cset_slider_pane_t9

0x6a7a,	// (0x00063271) main_cset_slider_pane_t10_ParamLimits

0x6a7a,	// (0x00063271) main_cset_slider_pane_t10

0x6aa2,	// (0x00063299) main_cset_slider_pane_t11_ParamLimits

0x6aa2,	// (0x00063299) main_cset_slider_pane_t11

0x6acc,	// (0x000632c3) main_cset_slider_pane_t12_ParamLimits

0x6acc,	// (0x000632c3) main_cset_slider_pane_t12

0x6aeb,	// (0x000632e2) main_cset_slider_pane_t13_ParamLimits

0x6aeb,	// (0x000632e2) main_cset_slider_pane_t13

0xf7df,	// (0x0006bfd6) main_cset_slider_pane_t_ParamLimits

0x980f,	// (0x00066006) bg_popup_sub_pane_cp011

0xd897,	// (0x0006a08e) main_cset_text_pane_g1

0xd89f,	// (0x0006a096) main_cset_text_pane_t1

0xd8ad,	// (0x0006a0a4) main_cset_text_pane_t2

0xd8bb,	// (0x0006a0b2) main_cset_text_pane_t3

0xd8c9,	// (0x0006a0c0) main_cset_text_pane_t4

0xd8d7,	// (0x0006a0ce) main_cset_text_pane_t5

0xd8e5,	// (0x0006a0dc) main_cset_text_pane_t6

0xd8f3,	// (0x0006a0ea) main_cset_text_pane_t7

0x0006,

0xf86f,	// (0x0006c066) main_cset_text_pane_t

0x0fd5,	// (0x0005d7cc) main_cam4_burst_pane

0x0fd5,	// (0x0005d7cc) main_cam5_pane

0x67a3,	// (0x00062f9a) bg_button_pane_cp019

0x67ac,	// (0x00062fa3) bg_button_pane_cp020

0xd749,	// (0x00069f40) main_cset_slider_pane_g7_ParamLimits

0xd749,	// (0x00069f40) main_cset_slider_pane_g7

0xd755,	// (0x00069f4c) main_cset_slider_pane_g8_ParamLimits

0xd755,	// (0x00069f4c) main_cset_slider_pane_g8

0x68f5,	// (0x000630ec) main_cset_slider_pane_g9_ParamLimits

0x68f5,	// (0x000630ec) main_cset_slider_pane_g9

0x6901,	// (0x000630f8) main_cset_slider_pane_g10_ParamLimits

0x6901,	// (0x000630f8) main_cset_slider_pane_g10

0x690d,	// (0x00063104) main_cset_slider_pane_g11_ParamLimits

0x690d,	// (0x00063104) main_cset_slider_pane_g11

0x6919,	// (0x00063110) main_cset_slider_pane_g12_ParamLimits

0x6919,	// (0x00063110) main_cset_slider_pane_g12

0x6925,	// (0x0006311c) main_cset_slider_pane_g13_ParamLimits

0x6925,	// (0x0006311c) main_cset_slider_pane_g13

0x6933,	// (0x0006312a) main_cset_slider_pane_g14_ParamLimits

0x6933,	// (0x0006312a) main_cset_slider_pane_g14

0x6941,	// (0x00063138) main_cset_slider_pane_g15_ParamLimits

0x6941,	// (0x00063138) main_cset_slider_pane_g15

0xd79b,	// (0x00069f92) main_cset_slider_pane_t14_ParamLimits

0xd79b,	// (0x00069f92) main_cset_slider_pane_t14

0xd7d4,	// (0x00069fcb) main_cset_slider_pane_t15_ParamLimits

0xd7d4,	// (0x00069fcb) main_cset_slider_pane_t15

0x6ff4,	// (0x000637eb) aid_cam4_burst_size_cell_ParamLimits

0x6ff4,	// (0x000637eb) aid_cam4_burst_size_cell

0x7010,	// (0x00063807) grid_cam4_burst_pane_ParamLimits

0x7010,	// (0x00063807) grid_cam4_burst_pane

0x7040,	// (0x00063837) linegrid_cam4_burst_pane_ParamLimits

0x7040,	// (0x00063837) linegrid_cam4_burst_pane

0x7062,	// (0x00063859) scroll_pane_cp30_ParamLimits

0x7062,	// (0x00063859) scroll_pane_cp30

0x706e,	// (0x00063865) cell_cam4_burst_pane_ParamLimits

0x706e,	// (0x00063865) cell_cam4_burst_pane

0xd901,	// (0x0006a0f8) linegrid_cam4_burst_pane_g1_ParamLimits

0xd901,	// (0x0006a0f8) linegrid_cam4_burst_pane_g1

0x70aa,	// (0x000638a1) linegrid_cam4_burst_pane_g2_ParamLimits

0x70aa,	// (0x000638a1) linegrid_cam4_burst_pane_g2

0xd90e,	// (0x0006a105) linegrid_cam4_burst_pane_g3_ParamLimits

0xd90e,	// (0x0006a105) linegrid_cam4_burst_pane_g3

0x0002,

0xf87e,	// (0x0006c075) linegrid_cam4_burst_pane_g_ParamLimits

0xf87e,	// (0x0006c075) linegrid_cam4_burst_pane_g

0x70bb,	// (0x000638b2) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x70bb,	// (0x000638b2) linegrid_cam4_burst_pane_g3_copy1

0xd91b,	// (0x0006a112) linegrid_cam4_burst_pane_g4_ParamLimits

0xd91b,	// (0x0006a112) linegrid_cam4_burst_pane_g4

0x70d5,	// (0x000638cc) linegrid_cam4_burst_pane_g5_ParamLimits

0x70d5,	// (0x000638cc) linegrid_cam4_burst_pane_g5

0x70e6,	// (0x000638dd) linegrid_cam4_burst_pane_g6_ParamLimits

0x70e6,	// (0x000638dd) linegrid_cam4_burst_pane_g6

0xd928,	// (0x0006a11f) linegrid_cam4_burst_pane_g7_ParamLimits

0xd928,	// (0x0006a11f) linegrid_cam4_burst_pane_g7

0x70f7,	// (0x000638ee) cell_cam4_burst_pane_g1

0xd941,	// (0x0006a138) main_cam5_pane_t1_ParamLimits

0xd941,	// (0x0006a138) main_cam5_pane_t1

0xd953,	// (0x0006a14a) main_cam5_pane_t2_ParamLimits

0xd953,	// (0x0006a14a) main_cam5_pane_t2

0xd965,	// (0x0006a15c) main_cam5_pane_t3_ParamLimits

0xd965,	// (0x0006a15c) main_cam5_pane_t3

0xd977,	// (0x0006a16e) main_cam5_pane_t4_ParamLimits

0xd977,	// (0x0006a16e) main_cam5_pane_t4

0xd98f,	// (0x0006a186) main_cam5_pane_t5_ParamLimits

0xd98f,	// (0x0006a186) main_cam5_pane_t5

0xd9a3,	// (0x0006a19a) main_cam5_pane_t6_ParamLimits

0xd9a3,	// (0x0006a19a) main_cam5_pane_t6

0xd9b7,	// (0x0006a1ae) main_cam5_pane_t7_ParamLimits

0xd9b7,	// (0x0006a1ae) main_cam5_pane_t7

0xd9c9,	// (0x0006a1c0) main_cam5_pane_t8_ParamLimits

0xd9c9,	// (0x0006a1c0) main_cam5_pane_t8

0xd9e5,	// (0x0006a1dc) main_cam5_pane_t9_ParamLimits

0xd9e5,	// (0x0006a1dc) main_cam5_pane_t9

0xd9f7,	// (0x0006a1ee) main_cam5_pane_t10_ParamLimits

0xd9f7,	// (0x0006a1ee) main_cam5_pane_t10

0xda09,	// (0x0006a200) main_cam5_pane_t11_ParamLimits

0xda09,	// (0x0006a200) main_cam5_pane_t11

0xda1b,	// (0x0006a212) main_cam5_pane_t12_ParamLimits

0xda1b,	// (0x0006a212) main_cam5_pane_t12

0xda30,	// (0x0006a227) main_cam5_pane_t13_ParamLimits

0xda30,	// (0x0006a227) main_cam5_pane_t13

0x000c,

0xf88a,	// (0x0006c081) main_cam5_pane_t_ParamLimits

0xf88a,	// (0x0006c081) main_cam5_pane_t

0x0f7a,	// (0x0005d771) popup_scut_keymap_window_ParamLimits

0x0f7a,	// (0x0005d771) popup_scut_keymap_window

0x710c,	// (0x00063903) aid_size_cell_brow_shortcut

0xb396,	// (0x00067b8d) bg_popup_window_pane_cp010

0x7118,	// (0x0006390f) grid_scut_pane

0x7124,	// (0x0006391b) cell_scut_pane_ParamLimits

0x7124,	// (0x0006391b) cell_scut_pane

0x713b,	// (0x00063932) cell_scut_pane_g1

0xda4d,	// (0x0006a244) cell_scut_pane_t1

0xda5c,	// (0x0006a253) cell_scut_pane_t2

0x7144,	// (0x0006393b) cell_scut_pane_t3

0x0002,

0xf8a5,	// (0x0006c09c) cell_scut_pane_t

0x4f34,	// (0x0006172b) main_mup3_pane_g8_ParamLimits

0x4f34,	// (0x0006172b) main_mup3_pane_g8

0x6376,	// (0x00062b6d) area_vitu2_query_pane_ParamLimits

0x6376,	// (0x00062b6d) area_vitu2_query_pane

0x6ea0,	// (0x00063697) input_focus_pane_cp08

0xda6b,	// (0x0006a262) area_vitu2_query_pane_g1

0x7152,	// (0x00063949) area_vitu2_query_pane_g2

0x0001,

0xf8ac,	// (0x0006c0a3) area_vitu2_query_pane_g

0x7163,	// (0x0006395a) area_vitu2_query_pane_t1_ParamLimits

0x7163,	// (0x0006395a) area_vitu2_query_pane_t1

0x7177,	// (0x0006396e) area_vitu2_query_pane_t2_ParamLimits

0x7177,	// (0x0006396e) area_vitu2_query_pane_t2

0x718b,	// (0x00063982) area_vitu2_query_pane_t3_ParamLimits

0x718b,	// (0x00063982) area_vitu2_query_pane_t3

0x9ec2,	// (0x000666b9) area_vitu2_query_pane_t4_ParamLimits

0x9ec2,	// (0x000666b9) area_vitu2_query_pane_t4

0x9eea,	// (0x000666e1) area_vitu2_query_pane_t5_ParamLimits

0x9eea,	// (0x000666e1) area_vitu2_query_pane_t5

0x9f12,	// (0x00066709) area_vitu2_query_pane_t6_ParamLimits

0x9f12,	// (0x00066709) area_vitu2_query_pane_t6

0x0006,

0xf8b1,	// (0x0006c0a8) area_vitu2_query_pane_t_ParamLimits

0xf8b1,	// (0x0006c0a8) area_vitu2_query_pane_t

0x71b3,	// (0x000639aa) bg_button_pane_cp018

0x71c1,	// (0x000639b8) bg_button_pane_cp021

0x71cd,	// (0x000639c4) bg_button_pane_cp022

0x71de,	// (0x000639d5) input_focus_pane_cp09

0xb1bc,	// (0x000679b3) aid_size_touch_mv_arrow_left

0xb1e7,	// (0x000679de) aid_size_touch_mv_arrow_right

0x6959,	// (0x00063150) main_cset_slider_pane_g16_ParamLimits

0x6959,	// (0x00063150) main_cset_slider_pane_g16

0x6967,	// (0x0006315e) main_cset_slider_pane_g17_ParamLimits

0x6967,	// (0x0006315e) main_cset_slider_pane_g17

0x70f7,	// (0x000638ee) cell_cam4_burst_pane_g1_ParamLimits

0x980f,	// (0x00066006) compa_mode_pane

0x6ba0,	// (0x00063397) popup_vtel_slider_window_g3_ParamLimits

0x6ba0,	// (0x00063397) popup_vtel_slider_window_g3

0x6bb4,	// (0x000633ab) popup_vtel_slider_window_g4_ParamLimits

0x6bb4,	// (0x000633ab) popup_vtel_slider_window_g4

0x6bc8,	// (0x000633bf) popup_vtel_slider_window_t1_ParamLimits

0x6bc8,	// (0x000633bf) popup_vtel_slider_window_t1

0x0fd5,	// (0x0005d7cc) main_cl_pane

0x4284,	// (0x00060a7b) popup_imed_adjust2_window_ParamLimits

0xc7a1,	// (0x00068f98) bg_tb_trans_pane_cp05_ParamLimits

0xd0d8,	// (0x000698cf) popup_imed_adjust2_window_g1_ParamLimits

0xd0e7,	// (0x000698de) popup_imed_adjust2_window_g2_ParamLimits

0xd0e7,	// (0x000698de) popup_imed_adjust2_window_g2

0xd0f3,	// (0x000698ea) popup_imed_adjust2_window_g3_ParamLimits

0xd0f3,	// (0x000698ea) popup_imed_adjust2_window_g3

0x0002,

0x04a4,	// (0x0005cc9b) popup_imed_adjust2_window_g_ParamLimits

0x04a4,	// (0x0005cc9b) popup_imed_adjust2_window_g

0xd0ff,	// (0x000698f6) popup_imed_adjust2_window_t1_ParamLimits

0xd117,	// (0x0006990e) slider_imed_adjust_pane_ParamLimits

0xd12b,	// (0x00069922) slider_imed_adjust_pane_g1_ParamLimits

0xd13b,	// (0x00069932) slider_imed_adjust_pane_g2_ParamLimits

0xd14b,	// (0x00069942) slider_imed_adjust_pane_g3_ParamLimits

0xd15c,	// (0x00069953) slider_imed_adjust_pane_g4_ParamLimits

0x04ab,	// (0x0005cca2) slider_imed_adjust_pane_g_ParamLimits

0x60b3,	// (0x000628aa) aid_touch_area_cam4_ParamLimits

0x60b3,	// (0x000628aa) aid_touch_area_cam4

0x60c3,	// (0x000628ba) battery_pane_cp01

0x614a,	// (0x00062941) main_camera4_pane_g6_ParamLimits

0x614a,	// (0x00062941) main_camera4_pane_g6

0x6168,	// (0x0006295f) main_camera4_pane_t2_ParamLimits

0x6168,	// (0x0006295f) main_camera4_pane_t2

0x0001,

0xf746,	// (0x0006bf3d) main_camera4_pane_t_ParamLimits

0xf746,	// (0x0006bf3d) main_camera4_pane_t

0x61fd,	// (0x000629f4) aid_touch_area_vid4_ParamLimits

0x61fd,	// (0x000629f4) aid_touch_area_vid4

0x623d,	// (0x00062a34) main_video4_pane_g5_ParamLimits

0x623d,	// (0x00062a34) main_video4_pane_g5

0x6261,	// (0x00062a58) vid4_progress_pane_ParamLimits

0x6261,	// (0x00062a58) vid4_progress_pane

0xd761,	// (0x00069f58) main_cset_slider_pane_g18_ParamLimits

0xd761,	// (0x00069f58) main_cset_slider_pane_g18

0xd935,	// (0x0006a12c) cell_cam4_burst_pane_g2_ParamLimits

0xd935,	// (0x0006a12c) cell_cam4_burst_pane_g2

0x0001,

0xf885,	// (0x0006c07c) cell_cam4_burst_pane_g_ParamLimits

0xf885,	// (0x0006c07c) cell_cam4_burst_pane_g

0x71ef,	// (0x000639e6) bg_cl_pane_ParamLimits

0x71ef,	// (0x000639e6) bg_cl_pane

0x71fb,	// (0x000639f2) cl_header_pane_ParamLimits

0x71fb,	// (0x000639f2) cl_header_pane

0x7207,	// (0x000639fe) cl_listscroll_pane_ParamLimits

0x7207,	// (0x000639fe) cl_listscroll_pane

0xda77,	// (0x0006a26e) bg_cl_pane_g1

0xdab4,	// (0x0006a2ab) bg_cl_pane_g2

0xdabc,	// (0x0006a2b3) bg_cl_pane_g3

0xdac4,	// (0x0006a2bb) bg_cl_pane_g4

0xdacc,	// (0x0006a2c3) bg_cl_pane_g5

0xdad4,	// (0x0006a2cb) bg_cl_pane_g6

0xdadc,	// (0x0006a2d3) bg_cl_pane_g7

0xdae4,	// (0x0006a2db) bg_cl_pane_g8

0xdaec,	// (0x0006a2e3) bg_cl_pane_g9

0x0008,

0xf8c0,	// (0x0006c0b7) bg_cl_pane_g

0x7213,	// (0x00063a0a) aid_height_cl_leading_ParamLimits

0x7213,	// (0x00063a0a) aid_height_cl_leading

0x721f,	// (0x00063a16) aid_height_cl_text_ParamLimits

0x721f,	// (0x00063a16) aid_height_cl_text

0xdd11,	// (0x0006a508) bg_cl_header_pane_ParamLimits

0xdd11,	// (0x0006a508) bg_cl_header_pane

0x7237,	// (0x00063a2e) cl_header_pane_g1_ParamLimits

0x7237,	// (0x00063a2e) cl_header_pane_g1

0x7244,	// (0x00063a3b) cl_header_pane_t1_ParamLimits

0x7244,	// (0x00063a3b) cl_header_pane_t1

0xdaf4,	// (0x0006a2eb) cl_list_pane

0xd734,	// (0x00069f2b) hc_scroll_pane_cp01

0xab30,	// (0x00067327) bg_cl_header_pane_g1

0xd61a,	// (0x00069e11) bg_cl_header_pane_g2

0xab50,	// (0x00067347) bg_cl_header_pane_g3

0xd62a,	// (0x00069e21) bg_cl_header_pane_g4

0xd622,	// (0x00069e19) bg_cl_header_pane_g5

0xd850,	// (0x0006a047) bg_cl_header_pane_g6

0xd642,	// (0x00069e39) bg_cl_header_pane_g7

0xd64a,	// (0x00069e41) bg_cl_header_pane_g8

0xd63a,	// (0x00069e31) bg_cl_header_pane_g9

0x0008,

0xf8d3,	// (0x0006c0ca) bg_cl_header_pane_g

0x7256,	// (0x00063a4d) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x7256,	// (0x00063a4d) hc_cl_list_double_graphic_heading_pane

0x726a,	// (0x00063a61) hc_cl_list_single_graphic_pane_ParamLimits

0x726a,	// (0x00063a61) hc_cl_list_single_graphic_pane

0x7284,	// (0x00063a7b) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x7284,	// (0x00063a7b) hc_cl_list_single_graphic_pane_g1

0x7290,	// (0x00063a87) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x7290,	// (0x00063a87) hc_cl_list_single_graphic_pane_g2

0x0001,

0xf8e6,	// (0x0006c0dd) hc_cl_list_single_graphic_pane_g_ParamLimits

0xf8e6,	// (0x0006c0dd) hc_cl_list_single_graphic_pane_g

0x72a4,	// (0x00063a9b) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x72a4,	// (0x00063a9b) hc_cl_list_single_graphic_pane_t1

0x7284,	// (0x00063a7b) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x7284,	// (0x00063a7b) hc_cl_list_double_graphic_heading_pane_g1

0x72b9,	// (0x00063ab0) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x72b9,	// (0x00063ab0) hc_cl_list_double_graphic_heading_pane_g2

0x72cd,	// (0x00063ac4) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x72cd,	// (0x00063ac4) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xf8eb,	// (0x0006c0e2) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xf8eb,	// (0x0006c0e2) hc_cl_list_double_graphic_heading_pane_g

0x72e1,	// (0x00063ad8) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x72e1,	// (0x00063ad8) hc_cl_list_double_graphic_heading_pane_t1

0x72f6,	// (0x00063aed) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x72f6,	// (0x00063aed) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xf8f2,	// (0x0006c0e9) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xf8f2,	// (0x0006c0e9) hc_cl_list_double_graphic_heading_pane_t

0x7313,	// (0x00063b0a) vid4_progress_pane_g1

0x7323,	// (0x00063b1a) vid4_progress_pane_g2

0x7333,	// (0x00063b2a) vid4_progress_pane_g3

0x7345,	// (0x00063b3c) vid4_progress_pane_g4

0x0004,

0xf8f7,	// (0x0006c0ee) vid4_progress_pane_g

0x7363,	// (0x00063b5a) vid4_progress_pane_t1

0x7379,	// (0x00063b70) vid4_progress_pane_t2

0x0002,

0xf902,	// (0x0006c0f9) vid4_progress_pane_t

0x73a4,	// (0x00063b9b) wait_bar_pane_cp07

0xc99c,	// (0x00069193) blid_firmament_pane_ParamLimits

0xc9df,	// (0x000691d6) popup_blid_sat_info2_window_g1

0xca03,	// (0x000691fa) popup_blid_sat_info2_window_t3

0xca11,	// (0x00069208) popup_blid_sat_info2_window_t4

0xca1f,	// (0x00069216) popup_blid_sat_info2_window_t5

0xca2d,	// (0x00069224) popup_blid_sat_info2_window_t6

0xca3d,	// (0x00069234) popup_blid_sat_info2_window_t7

0xca4b,	// (0x00069242) popup_blid_sat_info2_window_t8

0xca59,	// (0x00069250) popup_blid_sat_info2_window_t9

0xca67,	// (0x0006925e) popup_blid_sat_info2_window_t10

0xcb2b,	// (0x00069322) aid_firma_cardinal_ParamLimits

0xcb3f,	// (0x00069336) blid_firmament_pane_t1_ParamLimits

0xcb56,	// (0x0006934d) blid_firmament_pane_t2_ParamLimits

0xcb6d,	// (0x00069364) blid_firmament_pane_t3_ParamLimits

0xcb84,	// (0x0006937b) blid_firmament_pane_t4_ParamLimits

0x0398,	// (0x0005cb8f) blid_firmament_pane_t_ParamLimits

0xcb9b,	// (0x00069392) blid_sat_info_pane_ParamLimits

0x41ea,	// (0x000609e1) main_cam_set_pane_ParamLimits

0x56ed,	// (0x00061ee4) aid_size_cell_colour_35_ParamLimits

0x5707,	// (0x00061efe) aid_size_cell_colour_112_ParamLimits

0x571e,	// (0x00061f15) aid_size_cell_effect_ParamLimits

0xa63e,	// (0x00066e35) bg_tb_trans_pane_cp02_ParamLimits

0xb346,	// (0x00067b3d) heading_imed_pane_ParamLimits

0x5738,	// (0x00061f2f) listscroll_imed_pane_ParamLimits

0xbdc7,	// (0x000685be) popup_call2_audio_first_window_g5_ParamLimits

0xbdc7,	// (0x000685be) popup_call2_audio_first_window_g5

0x5e62,	// (0x00062659) aid_size_touch_image3_arrow_left_ParamLimits

0x5e62,	// (0x00062659) aid_size_touch_image3_arrow_left

0x5e78,	// (0x0006266f) aid_size_touch_image3_arrow_right_ParamLimits

0x5e78,	// (0x0006266f) aid_size_touch_image3_arrow_right

0x738e,	// (0x00063b85) vid4_progress_pane_t3

0x59ec,	// (0x000621e3) main_hwr_training_symbol_option_pane_ParamLimits

0x59ec,	// (0x000621e3) main_hwr_training_symbol_option_pane

0xd3ce,	// (0x00069bc5) popup_hwr_training_preview_window_ParamLimits

0xd3ce,	// (0x00069bc5) popup_hwr_training_preview_window

0x5a4d,	// (0x00062244) hwr_training_navi_pane_g5_ParamLimits

0x5a4d,	// (0x00062244) hwr_training_navi_pane_g5

0xd608,	// (0x00069dff) popup_char_count_window

0x0fbb,	// (0x0005d7b2) bg_popup_sub_pane_cp20_ParamLimits

0x6cc3,	// (0x000634ba) list_vitu2_match_list_pane_ParamLimits

0x6ccf,	// (0x000634c6) vitu2_page_scroll_pane_ParamLimits

0x6ccf,	// (0x000634c6) vitu2_page_scroll_pane

0xdafd,	// (0x0006a2f4) list_single_hwr_training_symbol_option_pane_ParamLimits

0xdafd,	// (0x0006a2f4) list_single_hwr_training_symbol_option_pane

0xdb10,	// (0x0006a307) list_single_hwr_training_symbol_option_pane_g1

0xdb18,	// (0x0006a30f) list_single_hwr_training_symbol_option_pane_t1

0xdb26,	// (0x0006a31d) bg_button_pane_cp023

0xdb2f,	// (0x0006a326) bg_button_pane_cp024

0x73e4,	// (0x00063bdb) vitu2_page_scroll_pane_g1

0x73ec,	// (0x00063be3) vitu2_page_scroll_pane_g2

0x0001,

0xf909,	// (0x0006c100) vitu2_page_scroll_pane_g

0x73f4,	// (0x00063beb) vitu2_page_scroll_pane_t1

0xd188,	// (0x0006997f) popup_char_count_window_g1

0xdb62,	// (0x0006a359) popup_char_count_window_g2

0xdb6b,	// (0x0006a362) popup_char_count_window_g3

0x0002,

0xf90e,	// (0x0006c105) popup_char_count_window_g

0xdb74,	// (0x0006a36b) popup_char_count_window_t1

0x0fd5,	// (0x0005d7cc) main_vded2_pane

0xd0c4,	// (0x000698bb) aid_size_cell_imed_line

0xd0ce,	// (0x000698c5) grid_imed_line_width_pane

0x62cd,	// (0x00062ac4) vid4_indicators_pane_g4

0xdb82,	// (0x0006a379) cell_imed_line_width_pane_ParamLimits

0xdb82,	// (0x0006a379) cell_imed_line_width_pane

0xdb96,	// (0x0006a38d) cell_imed_line_width_pane_g1

0xda94,	// (0x0006a28b) cell_imed_line_width_pane_g2

0x0001,

0xf915,	// (0x0006c10c) cell_imed_line_width_pane_g

0x7403,	// (0x00063bfa) main_vded2_pane_g1_ParamLimits

0x7403,	// (0x00063bfa) main_vded2_pane_g1

0x7410,	// (0x00063c07) main_vded2_pane_g2_ParamLimits

0x7410,	// (0x00063c07) main_vded2_pane_g2

0x0001,

0xf91a,	// (0x0006c111) main_vded2_pane_g_ParamLimits

0xf91a,	// (0x0006c111) main_vded2_pane_g

0x741e,	// (0x00063c15) vded2_slider_pane_ParamLimits

0x741e,	// (0x00063c15) vded2_slider_pane

0x742b,	// (0x00063c22) aid_size_touch_vded2_end

0x7435,	// (0x00063c2c) aid_size_touch_vded2_playhead

0xdb9f,	// (0x0006a396) aid_size_touch_vded2_start

0xdba7,	// (0x0006a39e) vded2_slider_bg_pane

0xdbb0,	// (0x0006a3a7) vded2_slider_pane_g1

0xdbb9,	// (0x0006a3b0) vded2_slider_pane_g2

0x743d,	// (0x00063c34) vded2_slider_pane_g3

0x0002,

0xf91f,	// (0x0006c116) vded2_slider_pane_g

0xdbc1,	// (0x0006a3b8) vded2_slider_bg_pane_g1

0xdbca,	// (0x0006a3c1) vded2_slider_bg_pane_g2

0xdbd3,	// (0x0006a3ca) vded2_slider_bg_pane_g3

0x0002,

0xf926,	// (0x0006c11d) vded2_slider_bg_pane_g

0x3ac5,	// (0x000602bc) aid_postcard_touch_down_pane_ParamLimits

0x3ac5,	// (0x000602bc) aid_postcard_touch_down_pane

0x3ad5,	// (0x000602cc) aid_postcard_touch_up_pane_ParamLimits

0x3ad5,	// (0x000602cc) aid_postcard_touch_up_pane

0x0fd5,	// (0x0005d7cc) main_blid2_pane

0x4213,	// (0x00060a0a) popup_blid2_search_window

0x980f,	// (0x00066006) blid2_gps_pane

0x980f,	// (0x00066006) blid2_navig_pane

0x980f,	// (0x00066006) blid2_search_pane

0x980f,	// (0x00066006) blid2_tripm_pane

0x7446,	// (0x00063c3d) blid2_search_pane_g1_ParamLimits

0x7446,	// (0x00063c3d) blid2_search_pane_g1

0x7456,	// (0x00063c4d) blid2_search_pane_t1_ParamLimits

0x7456,	// (0x00063c4d) blid2_search_pane_t1

0x7468,	// (0x00063c5f) aid_size_cell_blid2_gps_ParamLimits

0x7468,	// (0x00063c5f) aid_size_cell_blid2_gps

0x7478,	// (0x00063c6f) blid2_gps_pane_g1_ParamLimits

0x7478,	// (0x00063c6f) blid2_gps_pane_g1

0x7484,	// (0x00063c7b) grid_blid2_satellite_pane_ParamLimits

0x7484,	// (0x00063c7b) grid_blid2_satellite_pane

0x7494,	// (0x00063c8b) blid2_navig_pane_g1_ParamLimits

0x7494,	// (0x00063c8b) blid2_navig_pane_g1

0x74a0,	// (0x00063c97) blid2_navig_pane_t1_ParamLimits

0x74a0,	// (0x00063c97) blid2_navig_pane_t1

0x74b2,	// (0x00063ca9) blid2_navig_pane_t2_ParamLimits

0x74b2,	// (0x00063ca9) blid2_navig_pane_t2

0x0001,

0xf92d,	// (0x0006c124) blid2_navig_pane_t_ParamLimits

0xf92d,	// (0x0006c124) blid2_navig_pane_t

0x74c4,	// (0x00063cbb) blid2_navig_ring_pane_ParamLimits

0x74c4,	// (0x00063cbb) blid2_navig_ring_pane

0x74d4,	// (0x00063ccb) blid2_speed_pane_ParamLimits

0x74d4,	// (0x00063ccb) blid2_speed_pane

0x74e0,	// (0x00063cd7) blid2_tripm_pane_g1_ParamLimits

0x74e0,	// (0x00063cd7) blid2_tripm_pane_g1

0x74f0,	// (0x00063ce7) blid2_tripm_pane_g2_ParamLimits

0x74f0,	// (0x00063ce7) blid2_tripm_pane_g2

0x74fc,	// (0x00063cf3) blid2_tripm_pane_g3_ParamLimits

0x74fc,	// (0x00063cf3) blid2_tripm_pane_g3

0x7508,	// (0x00063cff) blid2_tripm_pane_g4_ParamLimits

0x7508,	// (0x00063cff) blid2_tripm_pane_g4

0x7514,	// (0x00063d0b) blid2_tripm_pane_g5_ParamLimits

0x7514,	// (0x00063d0b) blid2_tripm_pane_g5

0x0005,

0xf932,	// (0x0006c129) blid2_tripm_pane_g_ParamLimits

0xf932,	// (0x0006c129) blid2_tripm_pane_g

0x7530,	// (0x00063d27) blid2_tripm_pane_t1_ParamLimits

0x7530,	// (0x00063d27) blid2_tripm_pane_t1

0x7544,	// (0x00063d3b) blid2_tripm_pane_t2_ParamLimits

0x7544,	// (0x00063d3b) blid2_tripm_pane_t2

0x7556,	// (0x00063d4d) blid2_tripm_pane_t3_ParamLimits

0x7556,	// (0x00063d4d) blid2_tripm_pane_t3

0x0003,

0xf93f,	// (0x0006c136) blid2_tripm_pane_t_ParamLimits

0xf93f,	// (0x0006c136) blid2_tripm_pane_t

0x7588,	// (0x00063d7f) cell_blid2_satellite_pane_ParamLimits

0x7588,	// (0x00063d7f) cell_blid2_satellite_pane

0x75a2,	// (0x00063d99) cell_blid2_satellite_pane_g1

0xdbdc,	// (0x0006a3d3) cell_blid2_satellite_pane_t1

0xcbab,	// (0x000693a2) blid2_speed_pane_g1

0xdbea,	// (0x0006a3e1) blid2_speed_pane_t1

0xdbf8,	// (0x0006a3ef) blid2_speed_pane_t2

0x0001,

0xf948,	// (0x0006c13f) blid2_speed_pane_t

0xcbab,	// (0x000693a2) blid2_navig_ring_pane_g1

0x75ab,	// (0x00063da2) blid2_navig_ring_pane_g2

0x75b3,	// (0x00063daa) blid2_navig_ring_pane_g3

0x75bb,	// (0x00063db2) blid2_navig_ring_pane_g4

0x75c3,	// (0x00063dba) blid2_navig_ring_pane_g5

0x0004,

0xf94d,	// (0x0006c144) blid2_navig_ring_pane_g

0x980f,	// (0x00066006) bg_popup_window_pane_cp011

0xdc06,	// (0x0006a3fd) popup_blid2_search_window_g1

0xdc0e,	// (0x0006a405) popup_blid2_search_window_t1

0xdc1c,	// (0x0006a413) popup_blid2_search_window_t2

0x0001,

0xf958,	// (0x0006c14f) popup_blid2_search_window_t

0xaa3f,	// (0x00067236) main_browser_pane_g1

0xa730,	// (0x00066f27) main_browser_pane_ParamLimits

0x41ea,	// (0x000609e1) bg_button_pane_cp011_ParamLimits

0x6574,	// (0x00062d6b) cell_vitu2_function_pane_g1_ParamLimits

0xc7a1,	// (0x00068f98) bg_popup_sub_pane_cp22_ParamLimits

0x6ea0,	// (0x00063697) input_focus_pane_cp08_ParamLimits

0x6eb7,	// (0x000636ae) popup_vitu2_query_button_pane_ParamLimits

0x6eb7,	// (0x000636ae) popup_vitu2_query_button_pane

0x6ec8,	// (0x000636bf) popup_vitu2_query_input_button_pane

0xd88b,	// (0x0006a082) popup_vitu2_query_window_g1_ParamLimits

0x6ed2,	// (0x000636c9) popup_vitu2_query_window_g2_ParamLimits

0xf859,	// (0x0006c050) popup_vitu2_query_window_g_ParamLimits

0x980f,	// (0x00066006) bg_button_pane_cp026

0x75cb,	// (0x00063dc2) popup_vitu2_query_input_button_pane_g1

0x980f,	// (0x00066006) bg_button_pane_cp025

0xdc2a,	// (0x0006a421) popup_vitu2_query_button_pane_t1

0x4c6c,	// (0x00061463) main_mp3_pane_t6

0x4c7c,	// (0x00061473) popup_slider_window_cp01

0x61ac,	// (0x000629a3) cam4_battery_pane

0x628c,	// (0x00062a83) cam4_battery_pane_cp02

0x730b,	// (0x00063b02) cam4_battery_pane_cp01

0x730b,	// (0x00063b02) cam4_battery_pane_cp03

0xda9c,	// (0x0006a293) cam4_battery_pane_g1

0xcbab,	// (0x000693a2) cam4_battery_pane_g2

0x0001,

0xf95d,	// (0x0006c154) cam4_battery_pane_g

0xca75,	// (0x0006926c) popup_blid_sat_info2_window_t11

0xb1bc,	// (0x000679b3) aid_size_touch_mv_arrow_left_ParamLimits

0xb1e7,	// (0x000679de) aid_size_touch_mv_arrow_right_ParamLimits

0xb245,	// (0x00067a3c) navi_pane_g1_ParamLimits

0xb251,	// (0x00067a48) navi_pane_g2_ParamLimits

0xb27f,	// (0x00067a76) navi_pane_g3_ParamLimits

0xf3e5,	// (0x0006bbdc) navi_pane_g_ParamLimits

0x34f6,	// (0x0005fced) navi_pane_mv_t1_ParamLimits

0x5744,	// (0x00061f3b) grid_imed_effect_pane_ParamLimits

0x1eb8,	// (0x0005e6af) aid_placing_vt_slider_lsc

0xa98e,	// (0x00067185) aid_placing_vt_slider_prt

0xa63e,	// (0x00066e35) bg_tb_trans_pane_cp01_ParamLimits

0xcd2b,	// (0x00069522) popup_image_details_window_g1_ParamLimits

0xcd3e,	// (0x00069535) popup_image_details_window_g2_ParamLimits

0xcd53,	// (0x0006954a) popup_image_details_window_g3_ParamLimits

0xcd53,	// (0x0006954a) popup_image_details_window_g3

0x03dd,	// (0x0005cbd4) popup_image_details_window_g_ParamLimits

0xcd67,	// (0x0006955e) popup_image_details_window_t1_ParamLimits

0xcd79,	// (0x00069570) popup_image_details_window_t2_ParamLimits

0xcd92,	// (0x00069589) popup_image_details_window_t3_ParamLimits

0xcda6,	// (0x0006959d) popup_image_details_window_t4_ParamLimits

0xcdc1,	// (0x000695b8) popup_image_details_window_t5_ParamLimits

0x03e4,	// (0x0005cbdb) popup_image_details_window_t_ParamLimits

0x722b,	// (0x00063a22) cl_header_name_pane_ParamLimits

0x722b,	// (0x00063a22) cl_header_name_pane

0x75d3,	// (0x00063dca) cl_header_name_pane_t1_ParamLimits

0x75d3,	// (0x00063dca) cl_header_name_pane_t1

0x75ea,	// (0x00063de1) cl_header_name_pane_t2_ParamLimits

0x75ea,	// (0x00063de1) cl_header_name_pane_t2

0x7614,	// (0x00063e0b) cl_header_name_pane_t3_ParamLimits

0x7614,	// (0x00063e0b) cl_header_name_pane_t3

0x0002,

0xf962,	// (0x0006c159) cl_header_name_pane_t_ParamLimits

0xf962,	// (0x0006c159) cl_header_name_pane_t

0xb30e,	// (0x00067b05) navi_pane_mv_g2_ParamLimits

0xd5e2,	// (0x00069dd9) field_vitu2_entry_pane_g1_ParamLimits

0xd5ee,	// (0x00069de5) field_vitu2_entry_pane_g2_ParamLimits

0xd5fa,	// (0x00069df1) field_vitu2_entry_pane_g3_ParamLimits

0xd5fa,	// (0x00069df1) field_vitu2_entry_pane_g3

0x05e0,	// (0x0005cdd7) field_vitu2_entry_pane_g_ParamLimits

0x64ff,	// (0x00062cf6) cell_vitu2_itu_pane_g1_ParamLimits

0x650f,	// (0x00062d06) cell_vitu2_itu_pane_g2_ParamLimits

0x650f,	// (0x00062d06) cell_vitu2_itu_pane_g2

0x0001,

0xf77d,	// (0x0006bf74) cell_vitu2_itu_pane_g_ParamLimits

0xf77d,	// (0x0006bf74) cell_vitu2_itu_pane_g

0x41ea,	// (0x000609e1) bg_vkb2_func_pane_cp05_ParamLimits

0x41ea,	// (0x000609e1) bg_vkb2_func_pane_cp05

0x41ea,	// (0x000609e1) bg_vkb2_func_pane_cp03

0x41ea,	// (0x000609e1) bg_vkb2_func_pane_cp04

0x41ea,	// (0x000609e1) bg_vkb2_func_pane_cp10_ParamLimits

0x41ea,	// (0x000609e1) bg_vkb2_func_pane_cp10

0x71cd,	// (0x000639c4) bg_vkb2_func_pane_cp08

0x71b3,	// (0x000639aa) bg_vkb2_func_pane_cp06

0x71c1,	// (0x000639b8) bg_vkb2_func_pane_cp07

0xdb38,	// (0x0006a32f) bg_vkb2_func_pane_cp11_ParamLimits

0xdb38,	// (0x0006a32f) bg_vkb2_func_pane_cp11

0xdb4d,	// (0x0006a344) bg_vkb2_func_pane_cp12_ParamLimits

0xdb4d,	// (0x0006a344) bg_vkb2_func_pane_cp12

0x980f,	// (0x00066006) bg_vkb2_func_pane_cp09

0xd61a,	// (0x00069e11) bg_vkb2_func_pane_g1

0xab50,	// (0x00067347) bg_vkb2_func_pane_g2

0xd622,	// (0x00069e19) bg_vkb2_func_pane_g3

0xd62a,	// (0x00069e21) bg_vkb2_func_pane_g4

0xd850,	// (0x0006a047) bg_vkb2_func_pane_g5

0xd642,	// (0x00069e39) bg_vkb2_func_pane_g6

0xd64a,	// (0x00069e41) bg_vkb2_func_pane_g7

0xd63a,	// (0x00069e31) bg_vkb2_func_pane_g8

0xab30,	// (0x00067327) bg_vkb2_func_pane_g9

0x0008,

0xf969,	// (0x0006c160) bg_vkb2_func_pane_g

0x7522,	// (0x00063d19) blid2_tripm_pane_g6_ParamLimits

0x7522,	// (0x00063d19) blid2_tripm_pane_g6

0xd486,	// (0x00069c7d) mp4_progress_pane_g1

0x757c,	// (0x00063d73) blid2_tripm_values_pane_ParamLimits

0x757c,	// (0x00063d73) blid2_tripm_values_pane

0x7639,	// (0x00063e30) blid2_tripm_values_pane_t1

0x7647,	// (0x00063e3e) blid2_tripm_values_pane_t2

0x7655,	// (0x00063e4c) blid2_tripm_values_pane_t3

0x7663,	// (0x00063e5a) blid2_tripm_values_pane_t4

0x7671,	// (0x00063e68) blid2_tripm_values_pane_t5

0x767f,	// (0x00063e76) blid2_tripm_values_pane_t6

0x768d,	// (0x00063e84) blid2_tripm_values_pane_t7

0x769b,	// (0x00063e92) blid2_tripm_values_pane_t8

0x76a9,	// (0x00063ea0) blid2_tripm_values_pane_t9

0x0008,

0xf97c,	// (0x0006c173) blid2_tripm_values_pane_t

0x1ef8,	// (0x0005e6ef) call_video_pane_t1_ParamLimits

0x1f19,	// (0x0005e710) call_video_pane_t2_ParamLimits

0xf26e,	// (0x0006ba65) call_video_pane_t_ParamLimits

0x3a0d,	// (0x00060204) msg_header_pane_g1_ParamLimits

0xb511,	// (0x00067d08) msg_header_pane_g2_ParamLimits

0xb511,	// (0x00067d08) msg_header_pane_g2

0x0001,

0xf47c,	// (0x0006bc73) msg_header_pane_g_ParamLimits

0xf47c,	// (0x0006bc73) msg_header_pane_g

0xa730,	// (0x00066f27) main_clock2_pane_ParamLimits

0x54d5,	// (0x00061ccc) grid_clock2_toolbar_pane_ParamLimits

0x54d5,	// (0x00061ccc) grid_clock2_toolbar_pane

0x54d5,	// (0x00061ccc) listscroll_clock2_pane_ParamLimits

0x54d5,	// (0x00061ccc) listscroll_clock2_pane

0x557f,	// (0x00061d76) main_clock2_pane_t3_ParamLimits

0x557f,	// (0x00061d76) main_clock2_pane_t3

0x5591,	// (0x00061d88) main_clock2_pane_t4_ParamLimits

0x5591,	// (0x00061d88) main_clock2_pane_t4

0xdc38,	// (0x0006a42f) cell_clock2_toolbar_pane

0xdc40,	// (0x0006a437) cell_clock2_toolbar_pane_cp01

0xdc40,	// (0x0006a437) cell_clock2_toolbar_pane_cp02

0xdc48,	// (0x0006a43f) cell_clock2_toolbar_pane_cp03

0xdc50,	// (0x0006a447) list_clock2_pane

0xb132,	// (0x00067929) scroll_pane_cp10

0xdc58,	// (0x0006a44f) list_single_clock2_pane_ParamLimits

0xdc58,	// (0x0006a44f) list_single_clock2_pane

0xb396,	// (0x00067b8d) list_highlight_pane_cp08

0xdc65,	// (0x0006a45c) list_single_clock2_pane_t1

0xdc73,	// (0x0006a46a) list_single_clock2_pane_t2

0x0001,

0xf98f,	// (0x0006c186) list_single_clock2_pane_t

0x980f,	// (0x00066006) bg_button_pane_cp10

0xdc81,	// (0x0006a478) cell_clock2_toolbar_pane_g1

0x3a33,	// (0x0006022a) aid_main_viewer_pane_g1_ParamLimits

0x3a33,	// (0x0006022a) aid_main_viewer_pane_g1

0x3a3f,	// (0x00060236) aid_main_viewer_pane_g2_ParamLimits

0x3a3f,	// (0x00060236) aid_main_viewer_pane_g2

0x3a4b,	// (0x00060242) aid_main_viewer_pane_g3_ParamLimits

0x3a4b,	// (0x00060242) aid_main_viewer_pane_g3

0x3a5c,	// (0x00060253) aid_main_viewer_pane_g4_ParamLimits

0x3a5c,	// (0x00060253) aid_main_viewer_pane_g4

0x0003,

0xf48d,	// (0x0006bc84) aid_main_viewer_pane_g_ParamLimits

0xf48d,	// (0x0006bc84) aid_main_viewer_pane_g

0x41dd,	// (0x000609d4) main_calc_pane_ParamLimits

0x41f8,	// (0x000609ef) main_dialer2_pane_ParamLimits

0x0fd5,	// (0x0005d7cc) main_cam6_pane

0x0fd5,	// (0x0005d7cc) main_vid6_pane

0x54e1,	// (0x00061cd8) listscroll_gen_pane_cp06_ParamLimits

0x54e1,	// (0x00061cd8) listscroll_gen_pane_cp06

0x55a3,	// (0x00061d9a) main_clock2_pane_t5_ParamLimits

0x55a3,	// (0x00061d9a) main_clock2_pane_t5

0x55ee,	// (0x00061de5) aid_call2_pane_cp10_ParamLimits

0x5600,	// (0x00061df7) aid_call_pane_cp10_ParamLimits

0xb1b0,	// (0x000679a7) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb1b0,	// (0x000679a7) popup_clock_analogue_window_cp10_g2_ParamLimits

0x5612,	// (0x00061e09) popup_clock_analogue_window_cp10_g3_ParamLimits

0x5612,	// (0x00061e09) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb1b0,	// (0x000679a7) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf68d,	// (0x0006be84) popup_clock_analogue_window_cp10_g_ParamLimits

0x5624,	// (0x00061e1b) popup_clock_analogue_window_cp10_t1_ParamLimits

0x5e0f,	// (0x00062606) cell_dialer2_keypad_pane_g2_ParamLimits

0x5e0f,	// (0x00062606) cell_dialer2_keypad_pane_g2

0x0001,

0xf717,	// (0x0006bf0e) cell_dialer2_keypad_pane_g_ParamLimits

0xf717,	// (0x0006bf0e) cell_dialer2_keypad_pane_g

0x5e2b,	// (0x00062622) cell_dialer2_keypad_pane_t1

0x6841,	// (0x00063038) main_cset_text2_pane_ParamLimits

0x6841,	// (0x00063038) main_cset_text2_pane

0xda6b,	// (0x0006a262) area_vitu2_query_pane_g1_ParamLimits

0x7152,	// (0x00063949) area_vitu2_query_pane_g2_ParamLimits

0xf8ac,	// (0x0006c0a3) area_vitu2_query_pane_g_ParamLimits

0x9f3a,	// (0x00066731) area_vitu2_query_pane_t7_ParamLimits

0x9f3a,	// (0x00066731) area_vitu2_query_pane_t7

0x71b3,	// (0x000639aa) bg_button_pane_cp018_ParamLimits

0x71c1,	// (0x000639b8) bg_button_pane_cp021_ParamLimits

0x71cd,	// (0x000639c4) bg_button_pane_cp022_ParamLimits

0x71cd,	// (0x000639c4) bg_vkb2_func_pane_cp08_ParamLimits

0x71b3,	// (0x000639aa) bg_vkb2_func_pane_cp06_ParamLimits

0x71c1,	// (0x000639b8) bg_vkb2_func_pane_cp07_ParamLimits

0x71de,	// (0x000639d5) input_focus_pane_cp09_ParamLimits

0x76b7,	// (0x00063eae) cam6_autofocus_pane_ParamLimits

0x76b7,	// (0x00063eae) cam6_autofocus_pane

0x76d9,	// (0x00063ed0) cam6_image_uncrop_pane_ParamLimits

0x76d9,	// (0x00063ed0) cam6_image_uncrop_pane

0x7706,	// (0x00063efd) cam6_indi_pane_ParamLimits

0x7706,	// (0x00063efd) cam6_indi_pane

0x7720,	// (0x00063f17) cam6_mode_pane_ParamLimits

0x7720,	// (0x00063f17) cam6_mode_pane

0x7734,	// (0x00063f2b) cam6_timer_pane_ParamLimits

0x7734,	// (0x00063f2b) cam6_timer_pane

0x7740,	// (0x00063f37) cam6_zoom_pane_ParamLimits

0x7740,	// (0x00063f37) cam6_zoom_pane

0x7758,	// (0x00063f4f) cam6_mode_pane_g1_ParamLimits

0x7758,	// (0x00063f4f) cam6_mode_pane_g1

0x7764,	// (0x00063f5b) cam6_mode_pane_g2_ParamLimits

0x7764,	// (0x00063f5b) cam6_mode_pane_g2

0x7770,	// (0x00063f67) cam6_mode_pane_g3_ParamLimits

0x7770,	// (0x00063f67) cam6_mode_pane_g3

0x777c,	// (0x00063f73) cam6_mode_pane_g4_ParamLimits

0x777c,	// (0x00063f73) cam6_mode_pane_g4

0x0003,

0xf994,	// (0x0006c18b) cam6_mode_pane_g_ParamLimits

0xf994,	// (0x0006c18b) cam6_mode_pane_g

0xdaa6,	// (0x0006a29d) bg_tb_trans_pane_cp08_ParamLimits

0xdaa6,	// (0x0006a29d) bg_tb_trans_pane_cp08

0xdc89,	// (0x0006a480) cam6_battery_pane_ParamLimits

0xdc89,	// (0x0006a480) cam6_battery_pane

0xdc9f,	// (0x0006a496) cam6_indi_pane_g1_ParamLimits

0xdc9f,	// (0x0006a496) cam6_indi_pane_g1

0xdcb1,	// (0x0006a4a8) cam6_indi_pane_g2_ParamLimits

0xdcb1,	// (0x0006a4a8) cam6_indi_pane_g2

0xdcc3,	// (0x0006a4ba) cam6_indi_pane_g3_ParamLimits

0xdcc3,	// (0x0006a4ba) cam6_indi_pane_g3

0x0002,

0x0825,	// (0x0005d01c) cam6_indi_pane_g_ParamLimits

0x0825,	// (0x0005d01c) cam6_indi_pane_g

0xdcd5,	// (0x0006a4cc) cam6_indi_pane_t1_ParamLimits

0xdcd5,	// (0x0006a4cc) cam6_indi_pane_t1

0x6308,	// (0x00062aff) cam6_autofocus_pane_g1

0x6300,	// (0x00062af7) cam6_autofocus_pane_g2

0x6318,	// (0x00062b0f) cam6_autofocus_pane_g3

0x6310,	// (0x00062b07) cam6_autofocus_pane_g4

0x0003,

0xf99d,	// (0x0006c194) cam6_autofocus_pane_g

0xdcfb,	// (0x0006a4f2) cam6_timer_pane_g1

0xdd03,	// (0x0006a4fa) cam6_timer_pane_t1

0xdd28,	// (0x0006a51f) cam6_zoom_cont_pane

0xdd30,	// (0x0006a527) cam6_zoom_pane_g1

0xdd38,	// (0x0006a52f) cam6_zoom_pane_g2

0x7788,	// (0x00063f7f) cam6_zoom_pane_g3

0x0002,

0xf9a6,	// (0x0006c19d) cam6_zoom_pane_g

0xcbab,	// (0x000693a2) cam6_battery_pane_g1

0xcbab,	// (0x000693a2) cam6_battery_pane_g2

0x0001,

0x03a1,	// (0x0005cb98) cam6_battery_pane_g

0xdd40,	// (0x0006a537) cam6_zoom_cont_pane_g1

0xdd49,	// (0x0006a540) cam6_zoom_cont_pane_g2

0xdd52,	// (0x0006a549) cam6_zoom_cont_pane_g3

0x0002,

0xf9ad,	// (0x0006c1a4) cam6_zoom_cont_pane_g

0x77a5,	// (0x00063f9c) cam6_mode_pane_cp_ParamLimits

0x77a5,	// (0x00063f9c) cam6_mode_pane_cp

0x77b9,	// (0x00063fb0) cam6_zoom_pane_cp_ParamLimits

0x77b9,	// (0x00063fb0) cam6_zoom_pane_cp

0x77d1,	// (0x00063fc8) vid6_image_uncrop_cif_pane_ParamLimits

0x77d1,	// (0x00063fc8) vid6_image_uncrop_cif_pane

0x77fd,	// (0x00063ff4) vid6_image_uncrop_nhd_pane_ParamLimits

0x77fd,	// (0x00063ff4) vid6_image_uncrop_nhd_pane

0x781a,	// (0x00064011) vid6_image_uncrop_vga_pane_ParamLimits

0x781a,	// (0x00064011) vid6_image_uncrop_vga_pane

0x7839,	// (0x00064030) vid6_image_uncrop_wvga_pane_ParamLimits

0x7839,	// (0x00064030) vid6_image_uncrop_wvga_pane

0x7856,	// (0x0006404d) vid6_indi_pane_ParamLimits

0x7856,	// (0x0006404d) vid6_indi_pane

0xdaa6,	// (0x0006a29d) bg_tb_trans_pane_cp09_ParamLimits

0xdaa6,	// (0x0006a29d) bg_tb_trans_pane_cp09

0xdd6a,	// (0x0006a561) cam6_battery_pane_cp_ParamLimits

0xdd6a,	// (0x0006a561) cam6_battery_pane_cp

0xdd76,	// (0x0006a56d) vid6_indi_pane_g1_ParamLimits

0xdd76,	// (0x0006a56d) vid6_indi_pane_g1

0xdd88,	// (0x0006a57f) vid6_indi_pane_g2_ParamLimits

0xdd88,	// (0x0006a57f) vid6_indi_pane_g2

0xdd9a,	// (0x0006a591) vid6_indi_pane_g3_ParamLimits

0xdd9a,	// (0x0006a591) vid6_indi_pane_g3

0xddaf,	// (0x0006a5a6) vid6_indi_pane_g4_ParamLimits

0xddaf,	// (0x0006a5a6) vid6_indi_pane_g4

0xddc4,	// (0x0006a5bb) vid6_indi_pane_g5_ParamLimits

0xddc4,	// (0x0006a5bb) vid6_indi_pane_g5

0x0004,

0xf9b4,	// (0x0006c1ab) vid6_indi_pane_g_ParamLimits

0xf9b4,	// (0x0006c1ab) vid6_indi_pane_g

0xddde,	// (0x0006a5d5) vid6_indi_pane_t1_ParamLimits

0xddde,	// (0x0006a5d5) vid6_indi_pane_t1

0xddf4,	// (0x0006a5eb) vid6_indi_pane_t2_ParamLimits

0xddf4,	// (0x0006a5eb) vid6_indi_pane_t2

0xde1c,	// (0x0006a613) vid6_indi_pane_t3_ParamLimits

0xde1c,	// (0x0006a613) vid6_indi_pane_t3

0xde44,	// (0x0006a63b) vid6_indi_pane_t4_ParamLimits

0xde44,	// (0x0006a63b) vid6_indi_pane_t4

0x0003,

0xf9bf,	// (0x0006c1b6) vid6_indi_pane_t_ParamLimits

0xf9bf,	// (0x0006c1b6) vid6_indi_pane_t

0xde68,	// (0x0006a65f) wait_bar_pane_cp08

0x7879,	// (0x00064070) main_cset_text2_pane_t1_ParamLimits

0x7879,	// (0x00064070) main_cset_text2_pane_t1

0x7790,	// (0x00063f87) listscroll_gen_pane_cp06_t1_ParamLimits

0x7790,	// (0x00063f87) listscroll_gen_pane_cp06_t1

0x0fd5,	// (0x0005d7cc) main_cam6_set_pane

0x619e,	// (0x00062995) bg_tb_trans_pane_cp06_ParamLimits

0x61b4,	// (0x000629ab) cam4_indicators_pane_g1_ParamLimits

0x61c5,	// (0x000629bc) cam4_indicators_pane_g2_ParamLimits

0xf754,	// (0x0006bf4b) cam4_indicators_pane_g_ParamLimits

0x61e3,	// (0x000629da) cam4_indicators_pane_t1_ParamLimits

0x41ea,	// (0x000609e1) bg_tb_trans_pane_cp07_ParamLimits

0x6294,	// (0x00062a8b) vid4_indicators_pane_g1_ParamLimits

0x62a8,	// (0x00062a9f) vid4_indicators_pane_g2_ParamLimits

0x62bc,	// (0x00062ab3) vid4_indicators_pane_g3_ParamLimits

0x62cd,	// (0x00062ac4) vid4_indicators_pane_g4_ParamLimits

0xf766,	// (0x0006bf5d) vid4_indicators_pane_g_ParamLimits

0x62e9,	// (0x00062ae0) vid4_indicators_pane_t1_ParamLimits

0x7313,	// (0x00063b0a) vid4_progress_pane_g1_ParamLimits

0x7323,	// (0x00063b1a) vid4_progress_pane_g2_ParamLimits

0x7333,	// (0x00063b2a) vid4_progress_pane_g3_ParamLimits

0x7345,	// (0x00063b3c) vid4_progress_pane_g4_ParamLimits

0xf8f7,	// (0x0006c0ee) vid4_progress_pane_g_ParamLimits

0x7363,	// (0x00063b5a) vid4_progress_pane_t1_ParamLimits

0x7379,	// (0x00063b70) vid4_progress_pane_t2_ParamLimits

0x738e,	// (0x00063b85) vid4_progress_pane_t3_ParamLimits

0xf902,	// (0x0006c0f9) vid4_progress_pane_t_ParamLimits

0x73a4,	// (0x00063b9b) wait_bar_pane_cp07_ParamLimits

0x78b3,	// (0x000640aa) main_cam6_set_pane_g2_ParamLimits

0x78b3,	// (0x000640aa) main_cam6_set_pane_g2

0x78bf,	// (0x000640b6) main_cset6_listscroll_pane_ParamLimits

0x78bf,	// (0x000640b6) main_cset6_listscroll_pane

0x78ea,	// (0x000640e1) main_cset6_slider_pane_ParamLimits

0x78ea,	// (0x000640e1) main_cset6_slider_pane

0x78f6,	// (0x000640ed) main_cset6_text2_pane_ParamLimits

0x78f6,	// (0x000640ed) main_cset6_text2_pane

0xde77,	// (0x0006a66e) main_cset6_text_pane

0xde7f,	// (0x0006a676) main_cset_list_pane_copy1_ParamLimits

0xde7f,	// (0x0006a676) main_cset_list_pane_copy1

0xde8f,	// (0x0006a686) scroll_pane_cp028_copy1

0x7909,	// (0x00064100) cset_list_set_pane_copy1

0x7922,	// (0x00064119) aid_position_infowindow_above_copy1

0x792a,	// (0x00064121) aid_position_infowindow_below_copy1

0x7932,	// (0x00064129) cset_list_set_pane_g1_copy1

0x6b36,	// (0x0006332d) cset_list_set_pane_g3_copy1_ParamLimits

0x6b36,	// (0x0006332d) cset_list_set_pane_g3_copy1

0x9e87,	// (0x0006667e) cset_list_set_pane_t1_copy1_ParamLimits

0x9e87,	// (0x0006667e) cset_list_set_pane_t1_copy1

0xa63e,	// (0x00066e35) list_highlight_pane_cp021_copy1_ParamLimits

0xa63e,	// (0x00066e35) list_highlight_pane_cp021_copy1

0xde98,	// (0x0006a68f) cset6_slider_pane_ParamLimits

0xde98,	// (0x0006a68f) cset6_slider_pane

0xdec4,	// (0x0006a6bb) main_cset6_slider_pane_g1_ParamLimits

0xdec4,	// (0x0006a6bb) main_cset6_slider_pane_g1

0x793a,	// (0x00064131) main_cset6_slider_pane_g2_ParamLimits

0x793a,	// (0x00064131) main_cset6_slider_pane_g2

0xdeec,	// (0x0006a6e3) main_cset6_slider_pane_g3_ParamLimits

0xdeec,	// (0x0006a6e3) main_cset6_slider_pane_g3

0x7962,	// (0x00064159) main_cset6_slider_pane_g4_ParamLimits

0x7962,	// (0x00064159) main_cset6_slider_pane_g4

0x796e,	// (0x00064165) main_cset6_slider_pane_g5_ParamLimits

0x796e,	// (0x00064165) main_cset6_slider_pane_g5

0xd749,	// (0x00069f40) main_cset6_slider_pane_g7_ParamLimits

0xd749,	// (0x00069f40) main_cset6_slider_pane_g7

0xd755,	// (0x00069f4c) main_cset6_slider_pane_g8_ParamLimits

0xd755,	// (0x00069f4c) main_cset6_slider_pane_g8

0x797c,	// (0x00064173) main_cset6_slider_pane_g9_ParamLimits

0x797c,	// (0x00064173) main_cset6_slider_pane_g9

0x7988,	// (0x0006417f) main_cset6_slider_pane_g10_ParamLimits

0x7988,	// (0x0006417f) main_cset6_slider_pane_g10

0x7994,	// (0x0006418b) main_cset6_slider_pane_g11_ParamLimits

0x7994,	// (0x0006418b) main_cset6_slider_pane_g11

0x79a0,	// (0x00064197) main_cset6_slider_pane_g12_ParamLimits

0x79a0,	// (0x00064197) main_cset6_slider_pane_g12

0x79ac,	// (0x000641a3) main_cset6_slider_pane_g13_ParamLimits

0x79ac,	// (0x000641a3) main_cset6_slider_pane_g13

0x79b8,	// (0x000641af) main_cset6_slider_pane_g14_ParamLimits

0x79b8,	// (0x000641af) main_cset6_slider_pane_g14

0x79c4,	// (0x000641bb) main_cset6_slider_pane_g15_ParamLimits

0x79c4,	// (0x000641bb) main_cset6_slider_pane_g15

0x79dc,	// (0x000641d3) main_cset6_slider_pane_g16_ParamLimits

0x79dc,	// (0x000641d3) main_cset6_slider_pane_g16

0x79ea,	// (0x000641e1) main_cset6_slider_pane_g17_ParamLimits

0x79ea,	// (0x000641e1) main_cset6_slider_pane_g17

0x0011,

0xf9c8,	// (0x0006c1bf) main_cset6_slider_pane_g_ParamLimits

0xf9c8,	// (0x0006c1bf) main_cset6_slider_pane_g

0xdef8,	// (0x0006a6ef) main_cset6_slider_pane_t1_ParamLimits

0xdef8,	// (0x0006a6ef) main_cset6_slider_pane_t1

0x7a10,	// (0x00064207) main_cset6_slider_pane_t2_ParamLimits

0x7a10,	// (0x00064207) main_cset6_slider_pane_t2

0x7a3b,	// (0x00064232) main_cset6_slider_pane_t3_ParamLimits

0x7a3b,	// (0x00064232) main_cset6_slider_pane_t3

0x7a66,	// (0x0006425d) main_cset6_slider_pane_t4_ParamLimits

0x7a66,	// (0x0006425d) main_cset6_slider_pane_t4

0x7a91,	// (0x00064288) main_cset6_slider_pane_t5_ParamLimits

0x7a91,	// (0x00064288) main_cset6_slider_pane_t5

0xdf39,	// (0x0006a730) main_cset6_slider_pane_t7_ParamLimits

0xdf39,	// (0x0006a730) main_cset6_slider_pane_t7

0x7abe,	// (0x000642b5) main_cset6_slider_pane_t8_ParamLimits

0x7abe,	// (0x000642b5) main_cset6_slider_pane_t8

0x7ae2,	// (0x000642d9) main_cset6_slider_pane_t9_ParamLimits

0x7ae2,	// (0x000642d9) main_cset6_slider_pane_t9

0x7b06,	// (0x000642fd) main_cset6_slider_pane_t10_ParamLimits

0x7b06,	// (0x000642fd) main_cset6_slider_pane_t10

0x7b2a,	// (0x00064321) main_cset6_slider_pane_t11_ParamLimits

0x7b2a,	// (0x00064321) main_cset6_slider_pane_t11

0xdf8a,	// (0x0006a781) main_cset6_slider_pane_t14_ParamLimits

0xdf8a,	// (0x0006a781) main_cset6_slider_pane_t14

0xdfc3,	// (0x0006a7ba) main_cset6_slider_pane_t15_ParamLimits

0xdfc3,	// (0x0006a7ba) main_cset6_slider_pane_t15

0x000b,

0xf9ed,	// (0x0006c1e4) main_cset6_slider_pane_t_ParamLimits

0xf9ed,	// (0x0006c1e4) main_cset6_slider_pane_t

0xd80d,	// (0x0006a004) cset_slider_pane_g1_copy1

0xd816,	// (0x0006a00d) cset_slider_pane_g2_copy1

0xda7f,	// (0x0006a276) cset_slider_pane_g3_copy1

0x980f,	// (0x00066006) bg_popup_sub_pane_cp011_copy1

0xdffc,	// (0x0006a7f3) main_cset_text_pane_g1_copy1

0xd89f,	// (0x0006a096) main_cset_text_pane_t1_copy1

0xd8ad,	// (0x0006a0a4) main_cset_text_pane_t2_copy1

0xd8bb,	// (0x0006a0b2) main_cset_text_pane_t3_copy1

0xd8c9,	// (0x0006a0c0) main_cset_text_pane_t4_copy1

0xd8d7,	// (0x0006a0ce) main_cset_text_pane_t5_copy1

0xe004,	// (0x0006a7fb) main_cset_text_pane_t6_copy1

0xe012,	// (0x0006a809) main_cset_text_pane_t7_copy1

0x7bc5,	// (0x000643bc) main_cset_text2_pane_t1_copy1

0x41ea,	// (0x000609e1) main_ncimui_pane

0x4249,	// (0x00060a40) popup_query_ncimui_window_ParamLimits

0x4249,	// (0x00060a40) popup_query_ncimui_window

0x9e26,	// (0x0006661d) field_cale_ev2_pane_g4_ParamLimits

0x9e26,	// (0x0006661d) field_cale_ev2_pane_g4

0x5b2f,	// (0x00062326) cell_video_dialer_keypad_pane_g2_ParamLimits

0x5b2f,	// (0x00062326) cell_video_dialer_keypad_pane_g2

0x0001,

0xf6f7,	// (0x0006beee) cell_video_dialer_keypad_pane_g_ParamLimits

0xf6f7,	// (0x0006beee) cell_video_dialer_keypad_pane_g

0x5b47,	// (0x0006233e) cell_video_dialer_keypad_pane_t1

0x980f,	// (0x00066006) bg_popup_window_pane_cp012

0xafe5,	// (0x000677dc) heading_pane_cp06

0xe03e,	// (0x0006a835) ncim_query_content_pane

0x980f,	// (0x00066006) bg_popup_heading_pane_cp01

0xe046,	// (0x0006a83d) ncim_heading_pane_t1

0xe054,	// (0x0006a84b) ncim_indicator_popup_pane

0xe066,	// (0x0006a85d) ncim_query_button_pane

0xe07a,	// (0x0006a871) ncim_query_content_pane_t1

0xe08c,	// (0x0006a883) ncim_query_content_pane_t2

0x0005,

0xfa31,	// (0x0006c228) ncim_query_content_pane_t

0xe0c6,	// (0x0006a8bd) ncim_query_list_pane

0xe0d8,	// (0x0006a8cf) ncim_query_popup_pane

0xe054,	// (0x0006a84b) ncim_indicator_popup_pane_ParamLimits

0x7d1f,	// (0x00064516) ncim_query_content_pane_g1_ParamLimits

0x7d1f,	// (0x00064516) ncim_query_content_pane_g1

0xe07a,	// (0x0006a871) ncim_query_content_pane_t1_ParamLimits

0xe08c,	// (0x0006a883) ncim_query_content_pane_t2_ParamLimits

0x7d2b,	// (0x00064522) ncim_query_content_pane_t3_ParamLimits

0x7d2b,	// (0x00064522) ncim_query_content_pane_t3

0x7d48,	// (0x0006453f) ncim_query_content_pane_t4_ParamLimits

0x7d48,	// (0x0006453f) ncim_query_content_pane_t4

0x7d65,	// (0x0006455c) ncim_query_content_pane_t5_ParamLimits

0x7d65,	// (0x0006455c) ncim_query_content_pane_t5

0xe09e,	// (0x0006a895) ncim_query_content_pane_t6_ParamLimits

0xe09e,	// (0x0006a895) ncim_query_content_pane_t6

0xfa31,	// (0x0006c228) ncim_query_content_pane_t_ParamLimits

0xe0c6,	// (0x0006a8bd) ncim_query_list_pane_ParamLimits

0xe0d8,	// (0x0006a8cf) ncim_query_popup_pane_ParamLimits

0xe0ec,	// (0x0006a8e3) wait_bar_pane_cp04

0x980f,	// (0x00066006) input_focus_pane_cp011

0xe0f4,	// (0x0006a8eb) ncim_query_popup_pane_t1

0xe102,	// (0x0006a8f9) ncim_list_query_list_pane_ParamLimits

0xe102,	// (0x0006a8f9) ncim_list_query_list_pane

0x980f,	// (0x00066006) bg_button_pane_cp027

0xe115,	// (0x0006a90c) ncim_query_button_pane_g1

0x980f,	// (0x00066006) list_highlight_pane_cp012

0xe11f,	// (0x0006a916) ncim_list_query_list_pane_g1

0xe127,	// (0x0006a91e) ncim_list_query_list_pane_t1

0x61d4,	// (0x000629cb) cam4_indicators_pane_g3_ParamLimits

0x61d4,	// (0x000629cb) cam4_indicators_pane_g3

0x62d9,	// (0x00062ad0) vid4_indicators_pane_g5_ParamLimits

0x62d9,	// (0x00062ad0) vid4_indicators_pane_g5

0x7354,	// (0x00063b4b) vid4_progress_pane_g5_ParamLimits

0x7354,	// (0x00063b4b) vid4_progress_pane_g5

0x7c0b,	// (0x00064402) main_ncimui_pane_g1

0x7c73,	// (0x0006446a) ncimui_group_query_pane_ParamLimits

0x7c73,	// (0x0006446a) ncimui_group_query_pane

0x7cbb,	// (0x000644b2) ncimui_list_pane_ParamLimits

0x7cbb,	// (0x000644b2) ncimui_list_pane

0x7ce2,	// (0x000644d9) ncimui_text_pane_ParamLimits

0x7ce2,	// (0x000644d9) ncimui_text_pane

0x7d82,	// (0x00064579) ncimui_text_pane_t1_ParamLimits

0x7d82,	// (0x00064579) ncimui_text_pane_t1

0xe135,	// (0x0006a92c) ncimui_list_single_graphic_pane_ParamLimits

0xe135,	// (0x0006a92c) ncimui_list_single_graphic_pane

0x7da1,	// (0x00064598) ncimui_query_pane_ParamLimits

0x7da1,	// (0x00064598) ncimui_query_pane

0x980f,	// (0x00066006) list_highlight_pane_cp013

0xe145,	// (0x0006a93c) ncim_list_query_list_pane_t1_copy1

0xe11f,	// (0x0006a916) ncim_list_single_graphic_pane_g1

0xe153,	// (0x0006a94a) ncim_query_button_pane_cp01

0xe15f,	// (0x0006a956) ncim_query_entry_pane_ParamLimits

0xe15f,	// (0x0006a956) ncim_query_entry_pane

0xe172,	// (0x0006a969) ncimui_query_pane_g1

0xe17e,	// (0x0006a975) ncimui_query_pane_t1_ParamLimits

0xe17e,	// (0x0006a975) ncimui_query_pane_t1

0xa63e,	// (0x00066e35) input_focus_pane_cp012

0xe197,	// (0x0006a98e) ncim_query_entry_pane_t1

0xa730,	// (0x00066f27) main_im_pane_ParamLimits

0x41ea,	// (0x000609e1) main_mobtv_pane_ParamLimits

0x41ea,	// (0x000609e1) main_mobtv_pane

0x79f8,	// (0x000641ef) main_cset6_slider_pane_g18_ParamLimits

0x79f8,	// (0x000641ef) main_cset6_slider_pane_g18

0x7a04,	// (0x000641fb) main_cset6_slider_pane_g19_ParamLimits

0x7a04,	// (0x000641fb) main_cset6_slider_pane_g19

0xd5fa,	// (0x00069df1) bg_main_mobtv_pane_ParamLimits

0xd5fa,	// (0x00069df1) bg_main_mobtv_pane

0x7db4,	// (0x000645ab) main_mobtv_info_pane

0x7dbf,	// (0x000645b6) main_mobtv_loading_pane_ParamLimits

0x7dbf,	// (0x000645b6) main_mobtv_loading_pane

0xe1a9,	// (0x0006a9a0) main_mobtv_pg_channel_list_pane

0xe1b3,	// (0x0006a9aa) main_mobtv_pg_hdr_pane

0x7dcc,	// (0x000645c3) main_mobtv_programe_curr_pane_ParamLimits

0x7dcc,	// (0x000645c3) main_mobtv_programe_curr_pane

0x7dd9,	// (0x000645d0) main_mobtv_programe_next_pane_ParamLimits

0x7dd9,	// (0x000645d0) main_mobtv_programe_next_pane

0xe1bc,	// (0x0006a9b3) popup_mobtv_noti_window

0xcbab,	// (0x000693a2) main_tv_pg_hdr_pane_g1

0xe1c4,	// (0x0006a9bb) main_tv_pg_hdr_pane_g2

0xe1cc,	// (0x0006a9c3) main_tv_pg_hdr_pane_g3

0xe1d4,	// (0x0006a9cb) main_tv_pg_hdr_pane_g4

0xe1dc,	// (0x0006a9d3) main_tv_pg_hdr_pane_g5

0xe1e6,	// (0x0006a9dd) main_tv_pg_hdr_pane_g6

0xe1f0,	// (0x0006a9e7) main_tv_pg_hdr_pane_g7

0xe1fa,	// (0x0006a9f1) main_tv_pg_hdr_pane_g8

0xe204,	// (0x0006a9fb) main_tv_pg_hdr_pane_g9

0xe20e,	// (0x0006aa05) main_tv_pg_hdr_pane_g10

0xe218,	// (0x0006aa0f) main_tv_pg_hdr_pane_g11

0x000a,

0x08cd,	// (0x0005d0c4) main_tv_pg_hdr_pane_g

0xe222,	// (0x0006aa19) main_tv_pg_hdr_pane_t1

0xe230,	// (0x0006aa27) main_tv_pg_hdr_pane_t2

0xe23e,	// (0x0006aa35) main_tv_pg_hdr_pane_t3

0xe24e,	// (0x0006aa45) main_tv_pg_hdr_pane_t4

0xe25e,	// (0x0006aa55) main_tv_pg_hdr_pane_t5

0x0004,

0x08e4,	// (0x0005d0db) main_tv_pg_hdr_pane_t

0xe26e,	// (0x0006aa65) single_mobtv_pg_channel_pane_ParamLimits

0xe26e,	// (0x0006aa65) single_mobtv_pg_channel_pane

0xe280,	// (0x0006aa77) single_mobtv_pg_channel_table_pane

0xe289,	// (0x0006aa80) single_mobtv_pg_channel_thumb_pane

0xe292,	// (0x0006aa89) single_tv_pg_channel_pane_g1

0xe29b,	// (0x0006aa92) single_tv_pg_channel_pane_g2

0x0001,

0x08ef,	// (0x0005d0e6) single_tv_pg_channel_pane_g

0xce0b,	// (0x00069602) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xce0b,	// (0x00069602) bg_single_mobtv_pg_channel_thumb_pane

0xe2a4,	// (0x0006aa9b) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe2a4,	// (0x0006aa9b) single_mobtv_pg_channel_thumb_pane_g1

0xe2b2,	// (0x0006aaa9) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe2b2,	// (0x0006aaa9) single_mobtv_pg_channel_thumb_pane_g2

0xe2be,	// (0x0006aab5) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe2be,	// (0x0006aab5) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0x08f4,	// (0x0005d0eb) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0x08f4,	// (0x0005d0eb) single_mobtv_pg_channel_thumb_pane_g

0xe2ca,	// (0x0006aac1) single_mobtv_pg_channel_thumb_pane_t1

0xe2d8,	// (0x0006aacf) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0x08fb,	// (0x0005d0f2) single_mobtv_pg_channel_thumb_pane_t

0xcbab,	// (0x000693a2) bg_single_mobtv_pg_channel_table_pane_g1

0xcbab,	// (0x000693a2) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0x03a1,	// (0x0005cb98) bg_single_mobtv_pg_channel_table_pane_g

0xe2e6,	// (0x0006aadd) single_mobtv_pg_channel_table_pane_t1

0xe2f4,	// (0x0006aaeb) single_mobtv_pg_channel_table_pane_t2

0x0001,

0x0900,	// (0x0005d0f7) single_mobtv_pg_channel_table_pane_t

0x7dee,	// (0x000645e5) main_mobtv_info_pane_g1_ParamLimits

0x7dee,	// (0x000645e5) main_mobtv_info_pane_g1

0x7e0a,	// (0x00064601) main_mobtv_info_pane_t1_ParamLimits

0x7e0a,	// (0x00064601) main_mobtv_info_pane_t1

0x7e82,	// (0x00064679) main_mobtv_info_pane_t2_ParamLimits

0x7e82,	// (0x00064679) main_mobtv_info_pane_t2

0x0002,

0xfa43,	// (0x0006c23a) main_mobtv_info_pane_t_ParamLimits

0xfa43,	// (0x0006c23a) main_mobtv_info_pane_t

0x7f11,	// (0x00064708) wait_bar_pane_cp05

0x7f23,	// (0x0006471a) main_mobtv_loading_pane_g1_ParamLimits

0x7f23,	// (0x0006471a) main_mobtv_loading_pane_g1

0x7f31,	// (0x00064728) main_mobtv_loading_pane_g2_ParamLimits

0x7f31,	// (0x00064728) main_mobtv_loading_pane_g2

0x7f3d,	// (0x00064734) main_mobtv_loading_pane_g3_ParamLimits

0x7f3d,	// (0x00064734) main_mobtv_loading_pane_g3

0x0002,

0xfa4a,	// (0x0006c241) main_mobtv_loading_pane_g_ParamLimits

0xfa4a,	// (0x0006c241) main_mobtv_loading_pane_g

0xe302,	// (0x0006aaf9) main_mobtv_loading_pane_t1_ParamLimits

0xe302,	// (0x0006aaf9) main_mobtv_loading_pane_t1

0xe31a,	// (0x0006ab11) main_mobtv_loading_pane_t2_ParamLimits

0xe31a,	// (0x0006ab11) main_mobtv_loading_pane_t2

0x0001,

0x0918,	// (0x0005d10f) main_mobtv_loading_pane_t_ParamLimits

0x0918,	// (0x0005d10f) main_mobtv_loading_pane_t

0x7f4b,	// (0x00064742) wait_bar_pane_cp06_ParamLimits

0x7f4b,	// (0x00064742) wait_bar_pane_cp06

0xe33e,	// (0x0006ab35) main_mobtv_programe_curr_pane_t1

0xe34c,	// (0x0006ab43) main_mobtv_programe_curr_pane_t2

0x0001,

0x091d,	// (0x0005d114) main_mobtv_programe_curr_pane_t

0xe35a,	// (0x0006ab51) main_mobtv_programe_next_pane_t1

0xe368,	// (0x0006ab5f) main_mobtv_programe_next_pane_t2

0xe376,	// (0x0006ab6d) main_mobtv_programe_next_pane_t3

0x0002,

0x0922,	// (0x0005d119) main_mobtv_programe_next_pane_t

0x980f,	// (0x00066006) bg_popup_mobtv_noti_window_pane

0xe384,	// (0x0006ab7b) popup_mobtv_noti_window_g1

0xe38c,	// (0x0006ab83) popup_mobtv_noti_window_t1

0xe39a,	// (0x0006ab91) popup_mobtv_noti_window_t2

0x0001,

0x0929,	// (0x0005d120) popup_mobtv_noti_window_t

0xcbab,	// (0x000693a2) bg_popup_mobtv_noti_window_pane_g1

0x0fd5,	// (0x0005d7cc) sc_clock_pane

0x0fd5,	// (0x0005d7cc) main_fs_bigclock_pane

0x756a,	// (0x00063d61) blid2_tripm_pane_t4_ParamLimits

0x756a,	// (0x00063d61) blid2_tripm_pane_t4

0x7f57,	// (0x0006474e) sc_clock_pane_g1_ParamLimits

0x7f57,	// (0x0006474e) sc_clock_pane_g1

0x7f65,	// (0x0006475c) sc_clock_pane_t1_ParamLimits

0x7f65,	// (0x0006475c) sc_clock_pane_t1

0x7f78,	// (0x0006476f) sc_clock_pane_t2_ParamLimits

0x7f78,	// (0x0006476f) sc_clock_pane_t2

0x7f8a,	// (0x00064781) sc_clock_pane_t3_ParamLimits

0x7f8a,	// (0x00064781) sc_clock_pane_t3

0x0004,

0xfa51,	// (0x0006c248) sc_clock_pane_t_ParamLimits

0xfa51,	// (0x0006c248) sc_clock_pane_t

0x8d9a,	// (0x00065591) main_fs_bigclock_indicator_pane_ParamLimits

0x8d9a,	// (0x00065591) main_fs_bigclock_indicator_pane

0x8013,	// (0x0006480a) main_fs_bigclock_pane_g1_ParamLimits

0x8013,	// (0x0006480a) main_fs_bigclock_pane_g1

0x8da6,	// (0x0006559d) main_fs_bigclock_pane_t1_ParamLimits

0x8da6,	// (0x0006559d) main_fs_bigclock_pane_t1

0x8db8,	// (0x000655af) main_fs_bigclock_pane_t2_ParamLimits

0x8db8,	// (0x000655af) main_fs_bigclock_pane_t2

0x8dca,	// (0x000655c1) main_fs_bigclock_pane_t3_ParamLimits

0x8dca,	// (0x000655c1) main_fs_bigclock_pane_t3

0x0002,

0xfbc5,	// (0x0006c3bc) main_fs_bigclock_pane_t_ParamLimits

0xfbc5,	// (0x0006c3bc) main_fs_bigclock_pane_t

0xec8f,	// (0x0006b486) main_fs_bigclock_indicator_pane_g1

0xe06e,	// (0x0006a865) ncim_query_content_pane_g2_ParamLimits

0xe06e,	// (0x0006a865) ncim_query_content_pane_g2

0x0001,

0xfa2c,	// (0x0006c223) ncim_query_content_pane_g_ParamLimits

0xfa2c,	// (0x0006c223) ncim_query_content_pane_g

0x7f9e,	// (0x00064795) sc_clock_pane_t4_ParamLimits

0x7f9e,	// (0x00064795) sc_clock_pane_t4

0x41ea,	// (0x000609e1) main_radioblah_pane

0xd56d,	// (0x00069d64) cell_call4_button_pane_t1_copy1_ParamLimits

0xd56d,	// (0x00069d64) cell_call4_button_pane_t1_copy1

0x7c25,	// (0x0006441c) main_ncimui_pane_t1_ParamLimits

0x7c25,	// (0x0006441c) main_ncimui_pane_t1

0x7c3f,	// (0x00064436) main_ncimui_pane_t2_ParamLimits

0x7c3f,	// (0x00064436) main_ncimui_pane_t2

0x0002,

0xfa25,	// (0x0006c21c) main_ncimui_pane_t_ParamLimits

0xfa25,	// (0x0006c21c) main_ncimui_pane_t

0xe4df,	// (0x0006acd6) main_radioblah_anim_pane_ParamLimits

0xe4df,	// (0x0006acd6) main_radioblah_anim_pane

0xe4f0,	// (0x0006ace7) main_radioblah_info_pane_ParamLimits

0xe4f0,	// (0x0006ace7) main_radioblah_info_pane

0xe504,	// (0x0006acfb) main_radioblah_pane_t1_ParamLimits

0xe504,	// (0x0006acfb) main_radioblah_pane_t1

0xe520,	// (0x0006ad17) main_radioblah_pane_t2_ParamLimits

0xe520,	// (0x0006ad17) main_radioblah_pane_t2

0x0003,

0x094f,	// (0x0005d146) main_radioblah_pane_t_ParamLimits

0x094f,	// (0x0005d146) main_radioblah_pane_t

0x8065,	// (0x0006485c) main_radioblah_rocker_ctrl_pane_ParamLimits

0x8065,	// (0x0006485c) main_radioblah_rocker_ctrl_pane

0xe568,	// (0x0006ad5f) main_radioblah_info_pane_t1_ParamLimits

0xe568,	// (0x0006ad5f) main_radioblah_info_pane_t1

0x80aa,	// (0x000648a1) main_radioblah_info_pane_t2_ParamLimits

0x80aa,	// (0x000648a1) main_radioblah_info_pane_t2

0x0003,

0xfa5c,	// (0x0006c253) main_radioblah_info_pane_t_ParamLimits

0xfa5c,	// (0x0006c253) main_radioblah_info_pane_t

0xcbab,	// (0x000693a2) main_radioblah_rocker_ctrl_pane_g1

0x815a,	// (0x00064951) main_radioblah_rocker_ctrl_pane_g2

0x8162,	// (0x00064959) main_radioblah_rocker_ctrl_pane_g3

0x816a,	// (0x00064961) main_radioblah_rocker_ctrl_pane_g4

0x8172,	// (0x00064969) main_radioblah_rocker_ctrl_pane_g5

0x817a,	// (0x00064971) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfa65,	// (0x0006c25c) main_radioblah_rocker_ctrl_pane_g

0x7bc5,	// (0x000643bc) main_cset_text2_pane_t1_copy1_ParamLimits

0x60f4,	// (0x000628eb) cam4_image_uncrop_qvga_pane

0x6249,	// (0x00062a40) vid4_image_uncrop_qcif_pane

0x76f8,	// (0x00063eef) cam6_image_uncrop_qvga_pane_ParamLimits

0x76f8,	// (0x00063eef) cam6_image_uncrop_qvga_pane

0xdd5a,	// (0x0006a551) vid6_image_uncrop_qcif_pane_ParamLimits

0xdd5a,	// (0x0006a551) vid6_image_uncrop_qcif_pane

0x980f,	// (0x00066006) bg_popup_preview_window_pane_cp03

0xe020,	// (0x0006a817) list_cset_text2_pane

0xe028,	// (0x0006a81f) main_cset6_text2_pane_g1

0xe030,	// (0x0006a827) main_cset6_text2_pane_t1

0x8182,	// (0x00064979) list_cset_text2_pane_t1_ParamLimits

0x8182,	// (0x00064979) list_cset_text2_pane_t1

0x41ea,	// (0x000609e1) main_radioblah_pane_ParamLimits

0x7efd,	// (0x000646f4) main_mobtv_info_pane_t3_ParamLimits

0x7efd,	// (0x000646f4) main_mobtv_info_pane_t3

0x8053,	// (0x0006484a) main_radioblah_pane_g1

0x807e,	// (0x00064875) main_radioblah_info_pane_g1

0x80ff,	// (0x000648f6) main_radioblah_info_pane_t3_ParamLimits

0x80ff,	// (0x000648f6) main_radioblah_info_pane_t3

0x2fb6,	// (0x0005f7ad) highlight_cell_cale_month_pane_ParamLimits

0x2fb6,	// (0x0005f7ad) highlight_cell_cale_month_pane

0x0fd5,	// (0x0005d7cc) main_phob_fisheye_pane

0xcee7,	// (0x000696de) scroll_pane_cp0031_ParamLimits

0xcee7,	// (0x000696de) scroll_pane_cp0031

0xde68,	// (0x0006a65f) wait_bar_pane_cp08_ParamLimits

0x7909,	// (0x00064100) cset_list_set_pane_copy1_ParamLimits

0xe5a2,	// (0x0006ad99) highlight_cell_cale_month_pane_g1

0x81a9,	// (0x000649a0) highlight_cell_cale_month_pane_t1

0xdaf4,	// (0x0006a2eb) list_gen_pane_cp01

0xd734,	// (0x00069f2b) scroll_pane_01

0xb352,	// (0x00067b49) list_single_double_fisheye_pane

0x9fda,	// (0x000667d1) list_double_fisheye_pane_g1_ParamLimits

0x9fda,	// (0x000667d1) list_double_fisheye_pane_g1

0x9fe6,	// (0x000667dd) list_double_fisheye_pane_g2_ParamLimits

0x9fe6,	// (0x000667dd) list_double_fisheye_pane_g2

0xb35b,	// (0x00067b52) list_double_fisheye_pane_g3_ParamLimits

0xb35b,	// (0x00067b52) list_double_fisheye_pane_g3

0x0004,

0xfa72,	// (0x0006c269) list_double_fisheye_pane_g_ParamLimits

0xfa72,	// (0x0006c269) list_double_fisheye_pane_g

0xa017,	// (0x0006680e) list_double_fisheye_pane_t1_ParamLimits

0xa017,	// (0x0006680e) list_double_fisheye_pane_t1

0xa032,	// (0x00066829) list_double_fisheye_pane_t2_ParamLimits

0xa032,	// (0x00066829) list_double_fisheye_pane_t2

0x0001,

0xfa7d,	// (0x0006c274) list_double_fisheye_pane_t_ParamLimits

0xfa7d,	// (0x0006c274) list_double_fisheye_pane_t

0x0fd5,	// (0x0005d7cc) main_call5_pane

0x7fc4,	// (0x000647bb) sc_swipe_pane_ParamLimits

0x7fc4,	// (0x000647bb) sc_swipe_pane

0x81c3,	// (0x000649ba) call5_image_pane_ParamLimits

0x81c3,	// (0x000649ba) call5_image_pane

0x81d3,	// (0x000649ca) call5_swipe_1_pane_ParamLimits

0x81d3,	// (0x000649ca) call5_swipe_1_pane

0x81df,	// (0x000649d6) call5_swipe_2_pane_ParamLimits

0x81df,	// (0x000649d6) call5_swipe_2_pane

0x81f9,	// (0x000649f0) popup_call5_audio_first_window_ParamLimits

0x81f9,	// (0x000649f0) popup_call5_audio_first_window

0xce0b,	// (0x00069602) call5_swipe_1_pane_g1_ParamLimits

0xce0b,	// (0x00069602) call5_swipe_1_pane_g1

0xe5aa,	// (0x0006ada1) call5_swipe_1_pane_g2_ParamLimits

0xe5aa,	// (0x0006ada1) call5_swipe_1_pane_g2

0x0001,

0xfa82,	// (0x0006c279) call5_swipe_1_pane_g_ParamLimits

0xfa82,	// (0x0006c279) call5_swipe_1_pane_g

0xe5b6,	// (0x0006adad) call5_swipe_1_pane_t1_ParamLimits

0xe5b6,	// (0x0006adad) call5_swipe_1_pane_t1

0xce0b,	// (0x00069602) call5_swipe_2_pane_g1_ParamLimits

0xce0b,	// (0x00069602) call5_swipe_2_pane_g1

0xe5cb,	// (0x0006adc2) call5_swipe_2_pane_g2_ParamLimits

0xe5cb,	// (0x0006adc2) call5_swipe_2_pane_g2

0x0001,

0xfa87,	// (0x0006c27e) call5_swipe_2_pane_g_ParamLimits

0xfa87,	// (0x0006c27e) call5_swipe_2_pane_g

0xe5d7,	// (0x0006adce) call5_swipe_2_pane_t1_ParamLimits

0xe5d7,	// (0x0006adce) call5_swipe_2_pane_t1

0xe5ec,	// (0x0006ade3) sc_swipe_pane_g1_ParamLimits

0xe5ec,	// (0x0006ade3) sc_swipe_pane_g1

0xe5f9,	// (0x0006adf0) sc_swipe_pane_g2_ParamLimits

0xe5f9,	// (0x0006adf0) sc_swipe_pane_g2

0x0001,

0xfa8c,	// (0x0006c283) sc_swipe_pane_g_ParamLimits

0xfa8c,	// (0x0006c283) sc_swipe_pane_g

0xe605,	// (0x0006adfc) sc_swipe_pane_t1_ParamLimits

0xe605,	// (0x0006adfc) sc_swipe_pane_t1

0x0fd5,	// (0x0005d7cc) main_cmail_launcher_pane

0x8207,	// (0x000649fe) aid_size_cell_cmail_l_ParamLimits

0x8207,	// (0x000649fe) aid_size_cell_cmail_l

0x8217,	// (0x00064a0e) grid_cmail_l_pane_ParamLimits

0x8217,	// (0x00064a0e) grid_cmail_l_pane

0x8227,	// (0x00064a1e) cell_cmail_l_pane_ParamLimits

0x8227,	// (0x00064a1e) cell_cmail_l_pane

0x823b,	// (0x00064a32) cell_cmail_l_pane_g1_ParamLimits

0x823b,	// (0x00064a32) cell_cmail_l_pane_g1

0x824c,	// (0x00064a43) cell_cmail_l_pane_t1_ParamLimits

0x824c,	// (0x00064a43) cell_cmail_l_pane_t1

0xe61a,	// (0x0006ae11) cell_cmail_l_pane_t2_ParamLimits

0xe61a,	// (0x0006ae11) cell_cmail_l_pane_t2

0x0001,

0xfa91,	// (0x0006c288) cell_cmail_l_pane_t_ParamLimits

0xfa91,	// (0x0006c288) cell_cmail_l_pane_t

0xa63e,	// (0x00066e35) grid_highlight_pane_cp018_ParamLimits

0xa63e,	// (0x00066e35) grid_highlight_pane_cp018

0x0e2b,	// (0x0005d622) main2_pane_ParamLimits

0x0e2b,	// (0x0005d622) main2_pane

0xa7db,	// (0x00066fd2) popup_sp_fs_action_menu_bg_pane_g1

0xa7e3,	// (0x00066fda) popup_sp_fs_action_menu_bg_pane_g2

0xa7eb,	// (0x00066fe2) popup_sp_fs_action_menu_bg_pane_g3

0xa7f3,	// (0x00066fea) popup_sp_fs_action_menu_bg_pane_g4

0xa7fb,	// (0x00066ff2) popup_sp_fs_action_menu_bg_pane_g5

0xa803,	// (0x00066ffa) popup_sp_fs_action_menu_bg_pane_g6

0xa80b,	// (0x00067002) popup_sp_fs_action_menu_bg_pane_g7

0xa813,	// (0x0006700a) popup_sp_fs_action_menu_bg_pane_g8

0xa81b,	// (0x00067012) popup_sp_fs_action_menu_bg_pane_g9

0xa823,	// (0x0006701a) popup_sp_fs_action_menu_bg_pane_g10

0xa823,	// (0x0006701a) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf186,	// (0x0006b97d) popup_sp_fs_action_menu_bg_pane_g

0x9c3a,	// (0x00066431) list_medium_line_x2_t3_g3_g1_ParamLimits

0x9c3a,	// (0x00066431) list_medium_line_x2_t3_g3_g1

0x1dd8,	// (0x0005e5cf) list_medium_line_x2_t3_g3_g2_ParamLimits

0x1dd8,	// (0x0005e5cf) list_medium_line_x2_t3_g3_g2

0x9c46,	// (0x0006643d) list_medium_line_x2_t3_g3_g3_ParamLimits

0x9c46,	// (0x0006643d) list_medium_line_x2_t3_g3_g3

0x0002,

0xf238,	// (0x0006ba2f) list_medium_line_x2_t3_g3_g_ParamLimits

0xf238,	// (0x0006ba2f) list_medium_line_x2_t3_g3_g

0x9c52,	// (0x00066449) list_medium_line_x2_t3_g3_t1_ParamLimits

0x9c52,	// (0x00066449) list_medium_line_x2_t3_g3_t1

0x1de4,	// (0x0005e5db) list_medium_line_x2_t3_g3_t2_ParamLimits

0x1de4,	// (0x0005e5db) list_medium_line_x2_t3_g3_t2

0x9c67,	// (0x0006645e) list_medium_line_x2_t3_g3_t3_ParamLimits

0x9c67,	// (0x0006645e) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23f,	// (0x0006ba36) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23f,	// (0x0006ba36) list_medium_line_x2_t3_g3_t

0x9c3a,	// (0x00066431) list_medium_line_x2_t3_g2_g1_ParamLimits

0x9c3a,	// (0x00066431) list_medium_line_x2_t3_g2_g1

0x9c46,	// (0x0006643d) list_medium_line_x2_t3_g2_g2_ParamLimits

0x9c46,	// (0x0006643d) list_medium_line_x2_t3_g2_g2

0x0001,

0xf246,	// (0x0006ba3d) list_medium_line_x2_t3_g2_g_ParamLimits

0xf246,	// (0x0006ba3d) list_medium_line_x2_t3_g2_g

0x9c7c,	// (0x00066473) list_medium_line_x2_t3_g2_t1_ParamLimits

0x9c7c,	// (0x00066473) list_medium_line_x2_t3_g2_t1

0x9c92,	// (0x00066489) list_medium_line_x2_t3_g2_t2_ParamLimits

0x9c92,	// (0x00066489) list_medium_line_x2_t3_g2_t2

0x9ca4,	// (0x0006649b) list_medium_line_x2_t3_g2_t3_ParamLimits

0x9ca4,	// (0x0006649b) list_medium_line_x2_t3_g2_t3

0x0002,

0xf24b,	// (0x0006ba42) list_medium_line_x2_t3_g2_t_ParamLimits

0xf24b,	// (0x0006ba42) list_medium_line_x2_t3_g2_t

0x9c3a,	// (0x00066431) list_medium_line_x2_t4_g4_g1_ParamLimits

0x9c3a,	// (0x00066431) list_medium_line_x2_t4_g4_g1

0x1df8,	// (0x0005e5ef) list_medium_line_x2_t4_g4_g2_ParamLimits

0x1df8,	// (0x0005e5ef) list_medium_line_x2_t4_g4_g2

0x1dd8,	// (0x0005e5cf) list_medium_line_x2_t4_g4_g3_ParamLimits

0x1dd8,	// (0x0005e5cf) list_medium_line_x2_t4_g4_g3

0x9cc2,	// (0x000664b9) list_medium_line_x2_t4_g4_g4_ParamLimits

0x9cc2,	// (0x000664b9) list_medium_line_x2_t4_g4_g4

0x0003,

0xf252,	// (0x0006ba49) list_medium_line_x2_t4_g4_g_ParamLimits

0xf252,	// (0x0006ba49) list_medium_line_x2_t4_g4_g

0x1e04,	// (0x0005e5fb) list_medium_line_x2_t4_g4_t1_ParamLimits

0x1e04,	// (0x0005e5fb) list_medium_line_x2_t4_g4_t1

0x1e1b,	// (0x0005e612) list_medium_line_x2_t4_g4_t2_ParamLimits

0x1e1b,	// (0x0005e612) list_medium_line_x2_t4_g4_t2

0x1e30,	// (0x0005e627) list_medium_line_x2_t4_g4_t3_ParamLimits

0x1e30,	// (0x0005e627) list_medium_line_x2_t4_g4_t3

0x9cce,	// (0x000664c5) list_medium_line_x2_t4_g4_t4_ParamLimits

0x9cce,	// (0x000664c5) list_medium_line_x2_t4_g4_t4

0x0003,

0xf25b,	// (0x0006ba52) list_medium_line_x2_t4_g4_t_ParamLimits

0xf25b,	// (0x0006ba52) list_medium_line_x2_t4_g4_t

0x9c3a,	// (0x00066431) list_medium_line_x2_t2_g4_g1_ParamLimits

0x9c3a,	// (0x00066431) list_medium_line_x2_t2_g4_g1

0x1df8,	// (0x0005e5ef) list_medium_line_x2_t2_g4_g2_ParamLimits

0x1df8,	// (0x0005e5ef) list_medium_line_x2_t2_g4_g2

0x1dd8,	// (0x0005e5cf) list_medium_line_x2_t2_g4_g3_ParamLimits

0x1dd8,	// (0x0005e5cf) list_medium_line_x2_t2_g4_g3

0x9c46,	// (0x0006643d) list_medium_line_x2_t2_g4_g4_ParamLimits

0x9c46,	// (0x0006643d) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c2,	// (0x0006bab9) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c2,	// (0x0006bab9) list_medium_line_x2_t2_g4_g

0x9ce0,	// (0x000664d7) list_medium_line_x2_t2_g4_t1_ParamLimits

0x9ce0,	// (0x000664d7) list_medium_line_x2_t2_g4_t1

0x9c67,	// (0x0006645e) list_medium_line_x2_t2_g4_t2_ParamLimits

0x9c67,	// (0x0006645e) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2cb,	// (0x0006bac2) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2cb,	// (0x0006bac2) list_medium_line_x2_t2_g4_t

0x9c3a,	// (0x00066431) list_medium_line_x2_t2_g3_g1_ParamLimits

0x9c3a,	// (0x00066431) list_medium_line_x2_t2_g3_g1

0x1dd8,	// (0x0005e5cf) list_medium_line_x2_t2_g3_g2_ParamLimits

0x1dd8,	// (0x0005e5cf) list_medium_line_x2_t2_g3_g2

0x9c46,	// (0x0006643d) list_medium_line_x2_t2_g3_g3_ParamLimits

0x9c46,	// (0x0006643d) list_medium_line_x2_t2_g3_g3

0x0002,

0xf238,	// (0x0006ba2f) list_medium_line_x2_t2_g3_g_ParamLimits

0xf238,	// (0x0006ba2f) list_medium_line_x2_t2_g3_g

0x9cf5,	// (0x000664ec) list_medium_line_x2_t2_g3_t1_ParamLimits

0x9cf5,	// (0x000664ec) list_medium_line_x2_t2_g3_t1

0x9c67,	// (0x0006645e) list_medium_line_x2_t2_g3_t2_ParamLimits

0x9c67,	// (0x0006645e) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d0,	// (0x0006bac7) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d0,	// (0x0006bac7) list_medium_line_x2_t2_g3_t

0x31a7,	// (0x0005f99e) main_sp_fs_list_pane_ParamLimits

0x31a7,	// (0x0005f99e) main_sp_fs_list_pane

0x31b3,	// (0x0005f9aa) sp_fs_scroll_pane_ParamLimits

0x31b3,	// (0x0005f9aa) sp_fs_scroll_pane

0x31bf,	// (0x0005f9b6) list_medium_line_x2_t3_t1

0x31cf,	// (0x0005f9c6) list_medium_line_x2_t3_t2

0x9d0a,	// (0x00066501) list_medium_line_x2_t3_t3

0x0002,

0xf31b,	// (0x0006bb12) list_medium_line_x2_t3_t

0x31dd,	// (0x0005f9d4) list_medium_line_x3_t4_t1

0x31ed,	// (0x0005f9e4) list_medium_line_x3_t4_t2

0x9d18,	// (0x0006650f) list_medium_line_x3_t4_t3

0x9d0a,	// (0x00066501) list_medium_line_x3_t4_t4

0x0003,

0xf322,	// (0x0006bb19) list_medium_line_x3_t4_t

0x31fb,	// (0x0005f9f2) list_medium_line_x4_t5_t1

0x320b,	// (0x0005fa02) list_medium_line_x4_t5_t2

0x9d18,	// (0x0006650f) list_medium_line_x4_t5_t3

0x3219,	// (0x0005fa10) list_medium_line_x4_t5_t4

0x9d0a,	// (0x00066501) list_medium_line_x4_t5_t5

0x0004,

0xf32b,	// (0x0006bb22) list_medium_line_x4_t5_t

0x9c3a,	// (0x00066431) list_medium_line_t4_g4_g1_ParamLimits

0x9c3a,	// (0x00066431) list_medium_line_t4_g4_g1

0x9cc2,	// (0x000664b9) list_medium_line_t4_g4_g2_ParamLimits

0x9cc2,	// (0x000664b9) list_medium_line_t4_g4_g2

0x3227,	// (0x0005fa1e) list_medium_line_t4_g4_g3_ParamLimits

0x3227,	// (0x0005fa1e) list_medium_line_t4_g4_g3

0x9c46,	// (0x0006643d) list_medium_line_t4_g4_g4_ParamLimits

0x9c46,	// (0x0006643d) list_medium_line_t4_g4_g4

0x0003,

0xf336,	// (0x0006bb2d) list_medium_line_t4_g4_g_ParamLimits

0xf336,	// (0x0006bb2d) list_medium_line_t4_g4_g

0x9d26,	// (0x0006651d) list_medium_line_t4_g4_t1_ParamLimits

0x9d26,	// (0x0006651d) list_medium_line_t4_g4_t1

0x9d3b,	// (0x00066532) list_medium_line_t4_g4_t2_ParamLimits

0x9d3b,	// (0x00066532) list_medium_line_t4_g4_t2

0x3233,	// (0x0005fa2a) list_medium_line_t4_g4_t3_ParamLimits

0x3233,	// (0x0005fa2a) list_medium_line_t4_g4_t3

0x9c67,	// (0x0006645e) list_medium_line_t4_g4_t4_ParamLimits

0x9c67,	// (0x0006645e) list_medium_line_t4_g4_t4

0x0003,

0xf33f,	// (0x0006bb36) list_medium_line_t4_g4_t_ParamLimits

0xf33f,	// (0x0006bb36) list_medium_line_t4_g4_t

0x3334,	// (0x0005fb2b) chi_dic_find_pane_g1

0x4206,	// (0x000609fd) main_tport_pane

0x9e9c,	// (0x00066693) list_medium_line_plain_t1

0x9eaa,	// (0x000666a1) list_medium_line_t2_g2_g1_ParamLimits

0x9eaa,	// (0x000666a1) list_medium_line_t2_g2_g1

0x9eb6,	// (0x000666ad) list_medium_line_t2_g2_g2_ParamLimits

0x9eb6,	// (0x000666ad) list_medium_line_t2_g2_g2

0x0001,

0xf83d,	// (0x0006c034) list_medium_line_t2_g2_g_ParamLimits

0xf83d,	// (0x0006c034) list_medium_line_t2_g2_g

0x6cfb,	// (0x000634f2) list_medium_line_t2_g2_t1_ParamLimits

0x6cfb,	// (0x000634f2) list_medium_line_t2_g2_t1

0x6d15,	// (0x0006350c) list_medium_line_t2_g2_t2_ParamLimits

0x6d15,	// (0x0006350c) list_medium_line_t2_g2_t2

0x0001,

0xf842,	// (0x0006c039) list_medium_line_t2_g2_t_ParamLimits

0xf842,	// (0x0006c039) list_medium_line_t2_g2_t

0x9f5e,	// (0x00066755) aid_sp_fs_list_icon_a_sm

0x9f66,	// (0x0006675d) aid_sp_fs_list_icon_d

0x9f6e,	// (0x00066765) aid_sp_fs_text_primary

0x9f77,	// (0x0006676e) aid_sp_fs_text_secondary

0xdd1f,	// (0x0006a516) list_medium_line

0xdd1f,	// (0x0006a516) list_medium_line_g2

0xdd1f,	// (0x0006a516) list_medium_line_g3

0xdd1f,	// (0x0006a516) list_medium_line_plain

0xdd1f,	// (0x0006a516) list_medium_line_plain_t2

0xdd1f,	// (0x0006a516) list_medium_line_plain_t3

0xdd1f,	// (0x0006a516) list_medium_line_right_icon

0xdd1f,	// (0x0006a516) list_medium_line_right_iconx2

0xdd1f,	// (0x0006a516) list_medium_line_t2

0xdd1f,	// (0x0006a516) list_medium_line_t2_g2

0xdd1f,	// (0x0006a516) list_medium_line_t2_g3

0xdd1f,	// (0x0006a516) list_medium_line_t2_right_icon

0xdd1f,	// (0x0006a516) list_medium_line_t2_right_iconx2

0xdd1f,	// (0x0006a516) list_medium_line_t3

0xdd1f,	// (0x0006a516) list_medium_line_t3_g2

0xdd1f,	// (0x0006a516) list_medium_line_t3_g3

0xdd1f,	// (0x0006a516) list_medium_line_t3_right_iconx2

0x73b5,	// (0x00063bac) list_medium_line_t4_g4

0x73be,	// (0x00063bb5) list_medium_line_x2

0x73be,	// (0x00063bb5) list_medium_line_x2_t2_g2

0x73be,	// (0x00063bb5) list_medium_line_x2_t2_g3

0x73be,	// (0x00063bb5) list_medium_line_x2_t2_g4

0x73be,	// (0x00063bb5) list_medium_line_x2_t3

0x73be,	// (0x00063bb5) list_medium_line_x2_t3_g2

0x73be,	// (0x00063bb5) list_medium_line_x2_t3_g3

0x73be,	// (0x00063bb5) list_medium_line_x2_t3_g4

0x73be,	// (0x00063bb5) list_medium_line_x2_t4_g2

0x73be,	// (0x00063bb5) list_medium_line_x2_t4_g4

0x73c7,	// (0x00063bbe) list_medium_line_x3

0x73c7,	// (0x00063bbe) list_medium_line_x3_t4

0x73c7,	// (0x00063bbe) list_medium_line_x3_t4_g4

0x73b5,	// (0x00063bac) list_medium_line_x4_t4

0x73b5,	// (0x00063bac) list_medium_line_x4_t4_g7

0x73b5,	// (0x00063bac) list_medium_line_x4_t5

0x73d0,	// (0x00063bc7) list_single_fs_dyc_pane_ParamLimits

0x73d0,	// (0x00063bc7) list_single_fs_dyc_pane

0x9c3a,	// (0x00066431) list_medium_line_x4_t4_g7_g1_ParamLimits

0x9c3a,	// (0x00066431) list_medium_line_x4_t4_g7_g1

0x9f80,	// (0x00066777) list_medium_line_x4_t4_g7_g2_ParamLimits

0x9f80,	// (0x00066777) list_medium_line_x4_t4_g7_g2

0x7b50,	// (0x00064347) list_medium_line_x4_t4_g7_g3_ParamLimits

0x7b50,	// (0x00064347) list_medium_line_x4_t4_g7_g3

0x7b5f,	// (0x00064356) list_medium_line_x4_t4_g7_g4_ParamLimits

0x7b5f,	// (0x00064356) list_medium_line_x4_t4_g7_g4

0x7b6b,	// (0x00064362) list_medium_line_x4_t4_g7_g5_ParamLimits

0x7b6b,	// (0x00064362) list_medium_line_x4_t4_g7_g5

0x7b7a,	// (0x00064371) list_medium_line_x4_t4_g7_g6_ParamLimits

0x7b7a,	// (0x00064371) list_medium_line_x4_t4_g7_g6

0x9f8c,	// (0x00066783) list_medium_line_x4_t4_g7_g7_ParamLimits

0x9f8c,	// (0x00066783) list_medium_line_x4_t4_g7_g7

0x0006,

0xfa06,	// (0x0006c1fd) list_medium_line_x4_t4_g7_g_ParamLimits

0xfa06,	// (0x0006c1fd) list_medium_line_x4_t4_g7_g

0x9f98,	// (0x0006678f) list_medium_line_x4_t4_g7_t1_ParamLimits

0x9f98,	// (0x0006678f) list_medium_line_x4_t4_g7_t1

0x7b89,	// (0x00064380) list_medium_line_x4_t4_g7_t2_ParamLimits

0x7b89,	// (0x00064380) list_medium_line_x4_t4_g7_t2

0x7b9e,	// (0x00064395) list_medium_line_x4_t4_g7_t3_ParamLimits

0x7b9e,	// (0x00064395) list_medium_line_x4_t4_g7_t3

0x7bb3,	// (0x000643aa) list_medium_line_x4_t4_g7_t4_ParamLimits

0x7bb3,	// (0x000643aa) list_medium_line_x4_t4_g7_t4

0x9fad,	// (0x000667a4) list_medium_line_x4_t4_g7_t5_ParamLimits

0x9fad,	// (0x000667a4) list_medium_line_x4_t4_g7_t5

0x0004,

0xfa15,	// (0x0006c20c) list_medium_line_x4_t4_g7_t_ParamLimits

0xfa15,	// (0x0006c20c) list_medium_line_x4_t4_g7_t

0x9fbf,	// (0x000667b6) list_single_dyc_row_pane_ParamLimits

0x9fbf,	// (0x000667b6) list_single_dyc_row_pane

0x81b7,	// (0x000649ae) call5_gesture_pane_ParamLimits

0x81b7,	// (0x000649ae) call5_gesture_pane

0x81eb,	// (0x000649e2) call5_windows_pane_ParamLimits

0x81eb,	// (0x000649e2) call5_windows_pane

0x8262,	// (0x00064a59) call5_swipe_1_pane_cp_ParamLimits

0x8262,	// (0x00064a59) call5_swipe_1_pane_cp

0x826e,	// (0x00064a65) call5_swipe_2_pane_cp_ParamLimits

0x826e,	// (0x00064a65) call5_swipe_2_pane_cp

0xb396,	// (0x00067b8d) call5_image_pane_cp

0x827a,	// (0x00064a71) popup_call5_audio_first_window_cp_ParamLimits

0x827a,	// (0x00064a71) popup_call5_audio_first_window_cp

0xe5ec,	// (0x0006ade3) call5_swipe_1_pane_g1_cp_ParamLimits

0xe5ec,	// (0x0006ade3) call5_swipe_1_pane_g1_cp

0xe62c,	// (0x0006ae23) call5_swipe_1_pane_g2_cp

0xe605,	// (0x0006adfc) call5_swipe_1_pane_t1_cp_ParamLimits

0xe605,	// (0x0006adfc) call5_swipe_1_pane_t1_cp

0xe5ec,	// (0x0006ade3) call5_swipe_2_pane_g1_cp_ParamLimits

0xe5ec,	// (0x0006ade3) call5_swipe_2_pane_g1_cp

0xe634,	// (0x0006ae2b) call5_swipe_2_pane_g2_cp

0xe63c,	// (0x0006ae33) call5_swipe_2_pane_t1_cp_ParamLimits

0xe63c,	// (0x0006ae33) call5_swipe_2_pane_t1_cp

0xa63e,	// (0x00066e35) main_sp_fs_email_pane

0xe651,	// (0x0006ae48) main_sp_fs_listscroll_pane_te

0x8288,	// (0x00064a7f) popup_sp_fs_action_menu_pane_ParamLimits

0x8288,	// (0x00064a7f) popup_sp_fs_action_menu_pane

0xcbab,	// (0x000693a2) bg_sp_fs_ctrlbar_pane_g1

0xe65a,	// (0x0006ae51) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe663,	// (0x0006ae5a) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe66c,	// (0x0006ae63) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xcbab,	// (0x000693a2) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfa96,	// (0x0006c28d) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc98e,	// (0x00069185) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc98e,	// (0x00069185) bg_sp_fs_ctrlbar_ddmenu_pane

0xe675,	// (0x0006ae6c) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe675,	// (0x0006ae6c) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe681,	// (0x0006ae78) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe681,	// (0x0006ae78) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfa9f,	// (0x0006c296) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfa9f,	// (0x0006c296) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe68d,	// (0x0006ae84) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe68d,	// (0x0006ae84) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xa054,	// (0x0006684b) list_medium_line_t2_right_icon_g1

0x82ca,	// (0x00064ac1) list_medium_line_t2_right_icon_t1

0x82da,	// (0x00064ad1) list_medium_line_t2_right_icon_t2

0x0001,

0xfaa4,	// (0x0006c29b) list_medium_line_t2_right_icon_t

0xc7a1,	// (0x00068f98) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc7a1,	// (0x00068f98) bg_sp_fs_ctrlbar_pane

0x833f,	// (0x00064b36) main_sp_fs_ctrlbar_button_pane_cp01

0x8347,	// (0x00064b3e) main_sp_fs_ctrlbar_ddmenu_pane

0xe6df,	// (0x0006aed6) main_sp_fs_ctrlbar_pane_g1

0xe6eb,	// (0x0006aee2) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfaa9,	// (0x0006c2a0) main_sp_fs_ctrlbar_pane_g

0xe712,	// (0x0006af09) main_sp_fs_ctrlbar_pane_t1

0x8351,	// (0x00064b48) main_sp_fs_ctrlbar_pane

0x8367,	// (0x00064b5e) main_sp_fs_listscroll_pane_te_cp01

0x8378,	// (0x00064b6f) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x8378,	// (0x00064b6f) popup_sp_fs_action_menu_pane_cp01

0xa63e,	// (0x00066e35) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xa63e,	// (0x00066e35) bg_sp_fs_highlight_list_pane_cp01

0xa05c,	// (0x00066853) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xa05c,	// (0x00066853) sp_fs_action_menu_list_gene_pane_g1

0xe742,	// (0x0006af39) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe742,	// (0x0006af39) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfaae,	// (0x0006c2a5) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfaae,	// (0x0006c2a5) sp_fs_action_menu_list_gene_pane_g

0xa06b,	// (0x00066862) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xa06b,	// (0x00066862) sp_fs_action_menu_list_gene_pane_t1

0xa083,	// (0x0006687a) sp_fs_action_menu_list_gene_pane_ParamLimits

0xa083,	// (0x0006687a) sp_fs_action_menu_list_gene_pane

0xe74f,	// (0x0006af46) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe74f,	// (0x0006af46) popup_sp_fs_action_menu_bg_pane

0xa0a0,	// (0x00066897) sp_fs_action_menu_list_pane_ParamLimits

0xa0a0,	// (0x00066897) sp_fs_action_menu_list_pane

0x83a2,	// (0x00064b99) sp_fs_scroll_pane_cp01_ParamLimits

0x83a2,	// (0x00064b99) sp_fs_scroll_pane_cp01

0x83c8,	// (0x00064bbf) list_medium_line_plain_t2_t1

0x83d8,	// (0x00064bcf) list_medium_line_plain_t2_t2

0x0001,

0xfab3,	// (0x0006c2aa) list_medium_line_plain_t2_t

0x83e6,	// (0x00064bdd) list_medium_line_plain_t3_t1

0x83f6,	// (0x00064bed) list_medium_line_plain_t3_t2

0x8404,	// (0x00064bfb) list_medium_line_plain_t3_t3

0x0002,

0xfab8,	// (0x0006c2af) list_medium_line_plain_t3_t

0x9c3a,	// (0x00066431) list_medium_line_x2_t2_g2_g1_ParamLimits

0x9c3a,	// (0x00066431) list_medium_line_x2_t2_g2_g1

0x9c46,	// (0x0006643d) list_medium_line_x2_t2_g2_g2_ParamLimits

0x9c46,	// (0x0006643d) list_medium_line_x2_t2_g2_g2

0x0001,

0xf246,	// (0x0006ba3d) list_medium_line_x2_t2_g2_g_ParamLimits

0xf246,	// (0x0006ba3d) list_medium_line_x2_t2_g2_g

0x9d26,	// (0x0006651d) list_medium_line_x2_t2_g2_t1_ParamLimits

0x9d26,	// (0x0006651d) list_medium_line_x2_t2_g2_t1

0x9c67,	// (0x0006645e) list_medium_line_x2_t2_g2_t2_ParamLimits

0x9c67,	// (0x0006645e) list_medium_line_x2_t2_g2_t2

0x0001,

0xfabf,	// (0x0006c2b6) list_medium_line_x2_t2_g2_t_ParamLimits

0xfabf,	// (0x0006c2b6) list_medium_line_x2_t2_g2_t

0x9c3a,	// (0x00066431) list_medium_line_x2_t4_g2_g1_ParamLimits

0x9c3a,	// (0x00066431) list_medium_line_x2_t4_g2_g1

0x8412,	// (0x00064c09) list_medium_line_x2_t4_g2_g2_ParamLimits

0x8412,	// (0x00064c09) list_medium_line_x2_t4_g2_g2

0x0001,

0xfac4,	// (0x0006c2bb) list_medium_line_x2_t4_g2_g_ParamLimits

0xfac4,	// (0x0006c2bb) list_medium_line_x2_t4_g2_g

0x8424,	// (0x00064c1b) list_medium_line_x2_t4_g2_t1_ParamLimits

0x8424,	// (0x00064c1b) list_medium_line_x2_t4_g2_t1

0x843e,	// (0x00064c35) list_medium_line_x2_t4_g2_t2_ParamLimits

0x843e,	// (0x00064c35) list_medium_line_x2_t4_g2_t2

0x8453,	// (0x00064c4a) list_medium_line_x2_t4_g2_t3_ParamLimits

0x8453,	// (0x00064c4a) list_medium_line_x2_t4_g2_t3

0x9c67,	// (0x0006645e) list_medium_line_x2_t4_g2_t4_ParamLimits

0x9c67,	// (0x0006645e) list_medium_line_x2_t4_g2_t4

0x0003,

0xfac9,	// (0x0006c2c0) list_medium_line_x2_t4_g2_t_ParamLimits

0xfac9,	// (0x0006c2c0) list_medium_line_x2_t4_g2_t

0xa0be,	// (0x000668b5) list_medium_line_t3_right_iconx2_g1

0xa054,	// (0x0006684b) list_medium_line_t3_right_iconx2_g2

0x8468,	// (0x00064c5f) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfad2,	// (0x0006c2c9) list_medium_line_t3_right_iconx2_g

0x8470,	// (0x00064c67) list_medium_line_t3_right_iconx2_t1

0x8480,	// (0x00064c77) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfad9,	// (0x0006c2d0) list_medium_line_t3_right_iconx2_t

0x9c3a,	// (0x00066431) list_medium_line_x3_t4_g4_g1_ParamLimits

0x9c3a,	// (0x00066431) list_medium_line_x3_t4_g4_g1

0x1dd8,	// (0x0005e5cf) list_medium_line_x3_t4_g4_g2_ParamLimits

0x1dd8,	// (0x0005e5cf) list_medium_line_x3_t4_g4_g2

0x9cc2,	// (0x000664b9) list_medium_line_x3_t4_g4_g3_ParamLimits

0x9cc2,	// (0x000664b9) list_medium_line_x3_t4_g4_g3

0x848e,	// (0x00064c85) list_medium_line_x3_t4_g4_g4_ParamLimits

0x848e,	// (0x00064c85) list_medium_line_x3_t4_g4_g4

0x0003,

0xfade,	// (0x0006c2d5) list_medium_line_x3_t4_g4_g_ParamLimits

0xfade,	// (0x0006c2d5) list_medium_line_x3_t4_g4_g

0x849a,	// (0x00064c91) list_medium_line_x3_t4_g4_t1_ParamLimits

0x849a,	// (0x00064c91) list_medium_line_x3_t4_g4_t1

0x84b1,	// (0x00064ca8) list_medium_line_x3_t4_g4_t2_ParamLimits

0x84b1,	// (0x00064ca8) list_medium_line_x3_t4_g4_t2

0xa0c6,	// (0x000668bd) list_medium_line_x3_t4_g4_t3_ParamLimits

0xa0c6,	// (0x000668bd) list_medium_line_x3_t4_g4_t3

0x84c6,	// (0x00064cbd) list_medium_line_x3_t4_g4_t4_ParamLimits

0x84c6,	// (0x00064cbd) list_medium_line_x3_t4_g4_t4

0x0003,

0xfae7,	// (0x0006c2de) list_medium_line_x3_t4_g4_t_ParamLimits

0xfae7,	// (0x0006c2de) list_medium_line_x3_t4_g4_t

0x84e3,	// (0x00064cda) list_single_dyc_row_text_pane_t1_ParamLimits

0x84e3,	// (0x00064cda) list_single_dyc_row_text_pane_t1

0x851a,	// (0x00064d11) list_single_dyc_row_text_pane_t2_ParamLimits

0x851a,	// (0x00064d11) list_single_dyc_row_text_pane_t2

0xa0db,	// (0x000668d2) list_single_dyc_row_text_pane_t3_ParamLimits

0xa0db,	// (0x000668d2) list_single_dyc_row_text_pane_t3

0x0005,

0xfaf0,	// (0x0006c2e7) list_single_dyc_row_text_pane_t_ParamLimits

0xfaf0,	// (0x0006c2e7) list_single_dyc_row_text_pane_t

0xa0ff,	// (0x000668f6) list_single_dyc_row_pane_g1_ParamLimits

0xa0ff,	// (0x000668f6) list_single_dyc_row_pane_g1

0xa10b,	// (0x00066902) list_single_dyc_row_pane_g2_ParamLimits

0xa10b,	// (0x00066902) list_single_dyc_row_pane_g2

0xa117,	// (0x0006690e) list_single_dyc_row_pane_g3_ParamLimits

0xa117,	// (0x0006690e) list_single_dyc_row_pane_g3

0xa123,	// (0x0006691a) list_single_dyc_row_pane_g4_ParamLimits

0xa123,	// (0x0006691a) list_single_dyc_row_pane_g4

0x0003,

0xfafd,	// (0x0006c2f4) list_single_dyc_row_pane_g_ParamLimits

0xfafd,	// (0x0006c2f4) list_single_dyc_row_pane_g

0xa12f,	// (0x00066926) list_single_dyc_row_text_pane_ParamLimits

0xa12f,	// (0x00066926) list_single_dyc_row_text_pane

0x980f,	// (0x00066006) bg_sp_fs_scroll_pane

0xe75d,	// (0x0006af54) thumb_sp_fs_scroll_pane

0x9eaa,	// (0x000666a1) list_medium_line_g1_ParamLimits

0x9eaa,	// (0x000666a1) list_medium_line_g1

0xa14e,	// (0x00066945) list_medium_line_t1_ParamLimits

0xa14e,	// (0x00066945) list_medium_line_t1

0x9c3a,	// (0x00066431) list_medium_line_x2_g1_ParamLimits

0x9c3a,	// (0x00066431) list_medium_line_x2_g1

0x1dd8,	// (0x0005e5cf) list_medium_line_x2_g2_ParamLimits

0x1dd8,	// (0x0005e5cf) list_medium_line_x2_g2

0x0001,

0xfb06,	// (0x0006c2fd) list_medium_line_x2_g_ParamLimits

0xfb06,	// (0x0006c2fd) list_medium_line_x2_g

0xa163,	// (0x0006695a) list_medium_line_x2_t1_ParamLimits

0xa163,	// (0x0006695a) list_medium_line_x2_t1

0x9c3a,	// (0x00066431) list_medium_line_x3_g1_ParamLimits

0x9c3a,	// (0x00066431) list_medium_line_x3_g1

0x1dd8,	// (0x0005e5cf) list_medium_line_x3_g2_ParamLimits

0x1dd8,	// (0x0005e5cf) list_medium_line_x3_g2

0x0001,

0xfb06,	// (0x0006c2fd) list_medium_line_x3_g_ParamLimits

0xfb06,	// (0x0006c2fd) list_medium_line_x3_g

0xa163,	// (0x0006695a) list_medium_line_x3_t1_ParamLimits

0xa163,	// (0x0006695a) list_medium_line_x3_t1

0xe766,	// (0x0006af5d) thumb_sp_fs_scroll_pane_g1

0xe76f,	// (0x0006af66) thumb_sp_fs_scroll_pane_g2

0xe778,	// (0x0006af6f) thumb_sp_fs_scroll_pane_g3

0x0002,

0x0a0c,	// (0x0005d203) thumb_sp_fs_scroll_pane_g

0xe766,	// (0x0006af5d) bg_sp_fs_scroll_pane_g1

0xe76f,	// (0x0006af66) bg_sp_fs_scroll_pane_g2

0xe778,	// (0x0006af6f) bg_sp_fs_scroll_pane_g3

0x0002,

0x0a0c,	// (0x0005d203) bg_sp_fs_scroll_pane_g

0x9c3a,	// (0x00066431) list_medium_line_x2_t3_g4_g1_ParamLimits

0x9c3a,	// (0x00066431) list_medium_line_x2_t3_g4_g1

0x1df8,	// (0x0005e5ef) list_medium_line_x2_t3_g4_g2_ParamLimits

0x1df8,	// (0x0005e5ef) list_medium_line_x2_t3_g4_g2

0x1dd8,	// (0x0005e5cf) list_medium_line_x2_t3_g4_g3_ParamLimits

0x1dd8,	// (0x0005e5cf) list_medium_line_x2_t3_g4_g3

0x9c46,	// (0x0006643d) list_medium_line_x2_t3_g4_g4_ParamLimits

0x9c46,	// (0x0006643d) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c2,	// (0x0006bab9) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c2,	// (0x0006bab9) list_medium_line_x2_t3_g4_g

0x863d,	// (0x00064e34) list_medium_line_x2_t3_g4_t1_ParamLimits

0x863d,	// (0x00064e34) list_medium_line_x2_t3_g4_t1

0x8653,	// (0x00064e4a) list_medium_line_x2_t3_g4_t2_ParamLimits

0x8653,	// (0x00064e4a) list_medium_line_x2_t3_g4_t2

0x9c67,	// (0x0006645e) list_medium_line_x2_t3_g4_t3_ParamLimits

0x9c67,	// (0x0006645e) list_medium_line_x2_t3_g4_t3

0x0002,

0xfb0b,	// (0x0006c302) list_medium_line_x2_t3_g4_t_ParamLimits

0xfb0b,	// (0x0006c302) list_medium_line_x2_t3_g4_t

0x9eaa,	// (0x000666a1) list_medium_line_g2_g1_ParamLimits

0x9eaa,	// (0x000666a1) list_medium_line_g2_g1

0x9eb6,	// (0x000666ad) list_medium_line_g2_g2_ParamLimits

0x9eb6,	// (0x000666ad) list_medium_line_g2_g2

0x0001,

0xf83d,	// (0x0006c034) list_medium_line_g2_g_ParamLimits

0xf83d,	// (0x0006c034) list_medium_line_g2_g

0xa179,	// (0x00066970) list_medium_line_g2_t1_ParamLimits

0xa179,	// (0x00066970) list_medium_line_g2_t1

0x9eaa,	// (0x000666a1) list_medium_line_t3_g2_g1_ParamLimits

0x9eaa,	// (0x000666a1) list_medium_line_t3_g2_g1

0x9eb6,	// (0x000666ad) list_medium_line_t3_g2_g2_ParamLimits

0x9eb6,	// (0x000666ad) list_medium_line_t3_g2_g2

0x0001,

0xf83d,	// (0x0006c034) list_medium_line_t3_g2_g_ParamLimits

0xf83d,	// (0x0006c034) list_medium_line_t3_g2_g

0x866c,	// (0x00064e63) list_medium_line_t3_g2_t1_ParamLimits

0x866c,	// (0x00064e63) list_medium_line_t3_g2_t1

0x8683,	// (0x00064e7a) list_medium_line_t3_g2_t2_ParamLimits

0x8683,	// (0x00064e7a) list_medium_line_t3_g2_t2

0x8698,	// (0x00064e8f) list_medium_line_t3_g2_t3_ParamLimits

0x8698,	// (0x00064e8f) list_medium_line_t3_g2_t3

0x0002,

0xfb12,	// (0x0006c309) list_medium_line_t3_g2_t_ParamLimits

0xfb12,	// (0x0006c309) list_medium_line_t3_g2_t

0xa054,	// (0x0006684b) list_medium_line_right_icon_g1

0xa18e,	// (0x00066985) list_medium_line_right_icon_t1

0x9eaa,	// (0x000666a1) list_medium_line_t2_g1_ParamLimits

0x9eaa,	// (0x000666a1) list_medium_line_t2_g1

0x86ad,	// (0x00064ea4) list_medium_line_t2_t1_ParamLimits

0x86ad,	// (0x00064ea4) list_medium_line_t2_t1

0x86c7,	// (0x00064ebe) list_medium_line_t2_t2_ParamLimits

0x86c7,	// (0x00064ebe) list_medium_line_t2_t2

0x0001,

0xfb19,	// (0x0006c310) list_medium_line_t2_t_ParamLimits

0xfb19,	// (0x0006c310) list_medium_line_t2_t

0x9eaa,	// (0x000666a1) list_medium_line_t3_g1_ParamLimits

0x9eaa,	// (0x000666a1) list_medium_line_t3_g1

0x86dc,	// (0x00064ed3) list_medium_line_t3_t1_ParamLimits

0x86dc,	// (0x00064ed3) list_medium_line_t3_t1

0x86f6,	// (0x00064eed) list_medium_line_t3_t2_ParamLimits

0x86f6,	// (0x00064eed) list_medium_line_t3_t2

0x870b,	// (0x00064f02) list_medium_line_t3_t3_ParamLimits

0x870b,	// (0x00064f02) list_medium_line_t3_t3

0x0002,

0xfb1e,	// (0x0006c315) list_medium_line_t3_t_ParamLimits

0xfb1e,	// (0x0006c315) list_medium_line_t3_t

0x9eaa,	// (0x000666a1) list_medium_line_g3_g1_ParamLimits

0x9eaa,	// (0x000666a1) list_medium_line_g3_g1

0xa19c,	// (0x00066993) list_medium_line_g3_g2_ParamLimits

0xa19c,	// (0x00066993) list_medium_line_g3_g2

0x9eb6,	// (0x000666ad) list_medium_line_g3_g3_ParamLimits

0x9eb6,	// (0x000666ad) list_medium_line_g3_g3

0x0002,

0xfb25,	// (0x0006c31c) list_medium_line_g3_g_ParamLimits

0xfb25,	// (0x0006c31c) list_medium_line_g3_g

0xa288,	// (0x00066a7f) list_medium_line_g3_t1_ParamLimits

0xa288,	// (0x00066a7f) list_medium_line_g3_t1

0x9eaa,	// (0x000666a1) list_medium_line_t2_g3_g1_ParamLimits

0x9eaa,	// (0x000666a1) list_medium_line_t2_g3_g1

0xa19c,	// (0x00066993) list_medium_line_t2_g3_g2_ParamLimits

0xa19c,	// (0x00066993) list_medium_line_t2_g3_g2

0x9eb6,	// (0x000666ad) list_medium_line_t2_g3_g3_ParamLimits

0x9eb6,	// (0x000666ad) list_medium_line_t2_g3_g3

0x0002,

0xfb25,	// (0x0006c31c) list_medium_line_t2_g3_g_ParamLimits

0xfb25,	// (0x0006c31c) list_medium_line_t2_g3_g

0x8720,	// (0x00064f17) list_medium_line_t2_g3_t1_ParamLimits

0x8720,	// (0x00064f17) list_medium_line_t2_g3_t1

0x873a,	// (0x00064f31) list_medium_line_t2_g3_t2_ParamLimits

0x873a,	// (0x00064f31) list_medium_line_t2_g3_t2

0x0001,

0xfb2c,	// (0x0006c323) list_medium_line_t2_g3_t_ParamLimits

0xfb2c,	// (0x0006c323) list_medium_line_t2_g3_t

0x9eaa,	// (0x000666a1) list_medium_line_t3_g3_g1_ParamLimits

0x9eaa,	// (0x000666a1) list_medium_line_t3_g3_g1

0xa19c,	// (0x00066993) list_medium_line_t3_g3_g2_ParamLimits

0xa19c,	// (0x00066993) list_medium_line_t3_g3_g2

0x9eb6,	// (0x000666ad) list_medium_line_t3_g3_g3_ParamLimits

0x9eb6,	// (0x000666ad) list_medium_line_t3_g3_g3

0x0002,

0xfb25,	// (0x0006c31c) list_medium_line_t3_g3_g_ParamLimits

0xfb25,	// (0x0006c31c) list_medium_line_t3_g3_g

0x874f,	// (0x00064f46) list_medium_line_t3_g3_t1_ParamLimits

0x874f,	// (0x00064f46) list_medium_line_t3_g3_t1

0x8763,	// (0x00064f5a) list_medium_line_t3_g3_t2_ParamLimits

0x8763,	// (0x00064f5a) list_medium_line_t3_g3_t2

0x8775,	// (0x00064f6c) list_medium_line_t3_g3_t3_ParamLimits

0x8775,	// (0x00064f6c) list_medium_line_t3_g3_t3

0x0002,

0xfb31,	// (0x0006c328) list_medium_line_t3_g3_t_ParamLimits

0xfb31,	// (0x0006c328) list_medium_line_t3_g3_t

0xa0be,	// (0x000668b5) list_medium_line_right_iconx2_g1

0xa054,	// (0x0006684b) list_medium_line_right_iconx2_g2

0x0001,

0xfb38,	// (0x0006c32f) list_medium_line_right_iconx2_g

0xa29d,	// (0x00066a94) list_medium_line_right_iconx2_t1

0xa0be,	// (0x000668b5) list_medium_line_t2_right_iconx2_g1

0xa054,	// (0x0006684b) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfb38,	// (0x0006c32f) list_medium_line_t2_right_iconx2_g

0x8787,	// (0x00064f7e) list_medium_line_t2_right_iconx2_t1

0x8797,	// (0x00064f8e) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfb3d,	// (0x0006c334) list_medium_line_t2_right_iconx2_t

0xa2ab,	// (0x00066aa2) list_medium_line_x4_t4_t1

0x87a5,	// (0x00064f9c) list_medium_line_x4_t4_t2

0x87b5,	// (0x00064fac) list_medium_line_x4_t4_t3

0x87c5,	// (0x00064fbc) list_medium_line_x4_t4_t4

0x0003,

0xfb42,	// (0x0006c339) list_medium_line_x4_t4_t

0x87ff,	// (0x00064ff6) tport_appsw_pane_ParamLimits

0x87ff,	// (0x00064ff6) tport_appsw_pane

0x880d,	// (0x00065004) tport_contact_pane_ParamLimits

0x880d,	// (0x00065004) tport_contact_pane

0x881d,	// (0x00065014) tport_listscroll_pane_ParamLimits

0x881d,	// (0x00065014) tport_listscroll_pane

0x882d,	// (0x00065024) cell_tport_appsw_pane_ParamLimits

0x882d,	// (0x00065024) cell_tport_appsw_pane

0xce70,	// (0x00069667) tport_appsw_pane_g1_ParamLimits

0xce70,	// (0x00069667) tport_appsw_pane_g1

0xe781,	// (0x0006af78) tport_contact_pane_g1

0xe0f4,	// (0x0006a8eb) tport_contact_pane_t1

0xe78a,	// (0x0006af81) tport_contact_pane_t2

0x0001,

0x0a53,	// (0x0005d24a) tport_contact_pane_t

0xe798,	// (0x0006af8f) list_tport_pane

0xe7a1,	// (0x0006af98) scroll_pane_cp_030

0x8860,	// (0x00065057) cell_tport_appsw_pane_g1

0x8870,	// (0x00065067) cell_tport_appsw_pane_t1

0x887e,	// (0x00065075) grid_highlight_pane_cp019

0x8886,	// (0x0006507d) list_tport_double_graphic_pane_ParamLimits

0x8886,	// (0x0006507d) list_tport_double_graphic_pane

0xa63e,	// (0x00066e35) list_highlight_pane_cp023_ParamLimits

0xa63e,	// (0x00066e35) list_highlight_pane_cp023

0x8898,	// (0x0006508f) list_tport_double_graphic_pane_g1_ParamLimits

0x8898,	// (0x0006508f) list_tport_double_graphic_pane_g1

0x88a5,	// (0x0006509c) list_tport_double_graphic_pane_t1_ParamLimits

0x88a5,	// (0x0006509c) list_tport_double_graphic_pane_t1

0x88ba,	// (0x000650b1) list_tport_double_graphic_pane_t2_ParamLimits

0x88ba,	// (0x000650b1) list_tport_double_graphic_pane_t2

0x0001,

0xfb52,	// (0x0006c349) list_tport_double_graphic_pane_t_ParamLimits

0xfb52,	// (0x0006c349) list_tport_double_graphic_pane_t

0x980f,	// (0x00066006) main_cale_note_pane

0x64aa,	// (0x00062ca1) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x64aa,	// (0x00062ca1) cell_vitu2_function_top_wide_pane_cp01

0x7f11,	// (0x00064708) wait_bar_pane_cp05_ParamLimits

0xa63e,	// (0x00066e35) listscroll_cmail_pane

0xe7aa,	// (0x0006afa1) list_cmail_pane

0x88cc,	// (0x000650c3) list_cmail_body_pane

0x88f3,	// (0x000650ea) list_single_cmail_header_caption_pane

0x8927,	// (0x0006511e) list_single_cmail_header_detail_pane_ParamLimits

0x8927,	// (0x0006511e) list_single_cmail_header_detail_pane

0xe7ba,	// (0x0006afb1) list_single_cmail_header_caption_pane_t1

0x8962,	// (0x00065159) list_single_cmail_header_detail_pane_g1_ParamLimits

0x8962,	// (0x00065159) list_single_cmail_header_detail_pane_g1

0xa2b9,	// (0x00066ab0) list_single_cmail_header_detail_pane_g2_ParamLimits

0xa2b9,	// (0x00066ab0) list_single_cmail_header_detail_pane_g2

0x0002,

0xfb57,	// (0x0006c34e) list_single_cmail_header_detail_pane_g_ParamLimits

0xfb57,	// (0x0006c34e) list_single_cmail_header_detail_pane_g

0x8978,	// (0x0006516f) list_single_cmail_header_detail_pane_t1_ParamLimits

0x8978,	// (0x0006516f) list_single_cmail_header_detail_pane_t1

0x89b4,	// (0x000651ab) list_single_cmail_header_editor_pane_bg_ParamLimits

0x89b4,	// (0x000651ab) list_single_cmail_header_editor_pane_bg

0xe7de,	// (0x0006afd5) list_cmail_body_pane_g1

0xe7e7,	// (0x0006afde) list_cmail_body_pane_t1

0xd61a,	// (0x00069e11) list_single_cmail_header_editor_pane_bg_g1

0xab50,	// (0x00067347) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd62a,	// (0x00069e21) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd622,	// (0x00069e19) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd850,	// (0x0006a047) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd64a,	// (0x00069e41) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd63a,	// (0x00069e31) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd642,	// (0x00069e39) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xab30,	// (0x00067327) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x89cb,	// (0x000651c2) calenote_gesture_pane_ParamLimits

0x89cb,	// (0x000651c2) calenote_gesture_pane

0x89e5,	// (0x000651dc) calenote_window_pane_ParamLimits

0x89e5,	// (0x000651dc) calenote_window_pane

0xe7f5,	// (0x0006afec) popup_note_window_cp01

0x89fd,	// (0x000651f4) calenote_swipe_1_pane_ParamLimits

0x89fd,	// (0x000651f4) calenote_swipe_1_pane

0x826e,	// (0x00064a65) calenote_swipe_2_pane_ParamLimits

0x826e,	// (0x00064a65) calenote_swipe_2_pane

0xe5ec,	// (0x0006ade3) calenote_swipe_1_pane_g1_ParamLimits

0xe5ec,	// (0x0006ade3) calenote_swipe_1_pane_g1

0xe5f9,	// (0x0006adf0) calenote_swipe_1_pane_g2_ParamLimits

0xe5f9,	// (0x0006adf0) calenote_swipe_1_pane_g2

0x0001,

0xfa8c,	// (0x0006c283) calenote_swipe_1_pane_g_ParamLimits

0xfa8c,	// (0x0006c283) calenote_swipe_1_pane_g

0xe807,	// (0x0006affe) calenote_swipe_1_pane_t1_ParamLimits

0xe807,	// (0x0006affe) calenote_swipe_1_pane_t1

0xe5ec,	// (0x0006ade3) calenote_swipe_2_pane_g1_ParamLimits

0xe5ec,	// (0x0006ade3) calenote_swipe_2_pane_g1

0xe826,	// (0x0006b01d) calenote_swipe_2_pane_g2_ParamLimits

0xe826,	// (0x0006b01d) calenote_swipe_2_pane_g2

0x0001,

0xfb63,	// (0x0006c35a) calenote_swipe_2_pane_g_ParamLimits

0xfb63,	// (0x0006c35a) calenote_swipe_2_pane_g

0xe832,	// (0x0006b029) calenote_swipe_2_pane_t1_ParamLimits

0xe832,	// (0x0006b029) calenote_swipe_2_pane_t1

0x980f,	// (0x00066006) main_mup_navstr_pane

0x51e4,	// (0x000619db) main_mup3_pane_t7_ParamLimits

0x51e4,	// (0x000619db) main_mup3_pane_t7

0x5c0e,	// (0x00062405) main_mp4_pane_g6_ParamLimits

0x5c0e,	// (0x00062405) main_mp4_pane_g6

0x5f8e,	// (0x00062785) main_image3_pane_t4_ParamLimits

0x5f8e,	// (0x00062785) main_image3_pane_t4

0x8a10,	// (0x00065207) popup_navstr_preview_pane_ParamLimits

0x8a10,	// (0x00065207) popup_navstr_preview_pane

0x8a1c,	// (0x00065213) scroll_navstr_pane_ParamLimits

0x8a1c,	// (0x00065213) scroll_navstr_pane

0x980f,	// (0x00066006) bg_popup_preview_window_pane_cp04

0xe859,	// (0x0006b050) popup_navstr_preview_pane_t1

0x8a28,	// (0x0006521f) scroll_navstr_pane_g1_ParamLimits

0x8a28,	// (0x0006521f) scroll_navstr_pane_g1

0x8a35,	// (0x0006522c) scroll_navstr_pane_t1_ParamLimits

0x8a35,	// (0x0006522c) scroll_navstr_pane_t1

0xe7fe,	// (0x0006aff5) bg_button_pane_cp014

0xe7fe,	// (0x0006aff5) bg_button_pane_cp030

0x9ffa,	// (0x000667f1) list_double_fisheye_pane_g4_ParamLimits

0x9ffa,	// (0x000667f1) list_double_fisheye_pane_g4

0xa006,	// (0x000667fd) list_double_fisheye_pane_g5_ParamLimits

0xa006,	// (0x000667fd) list_double_fisheye_pane_g5

0xd094,	// (0x0006988b) sp_fs_scroll_pane_cp03

0xe6df,	// (0x0006aed6) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe6eb,	// (0x0006aee2) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfaa9,	// (0x0006c2a0) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe712,	// (0x0006af09) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe7b2,	// (0x0006afa9) sp_fs_scroll_pane_cp02

0xa846,	// (0x0006703d) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa846,	// (0x0006703d) popup_sp_fs_calendar_preview_list_single_pane

0x980f,	// (0x00066006) main_cam6_pano_pane

0x41ea,	// (0x000609e1) main_mup3_pane_ParamLimits

0x980f,	// (0x00066006) main_phacti_pane

0x7de6,	// (0x000645dd) bg_button_pane_cp11

0x7dfe,	// (0x000645f5) main_mobtv_info_pane_g2_ParamLimits

0x7dfe,	// (0x000645f5) main_mobtv_info_pane_g2

0x0001,

0xfa3e,	// (0x0006c235) main_mobtv_info_pane_g_ParamLimits

0xfa3e,	// (0x0006c235) main_mobtv_info_pane_g

0x7fb0,	// (0x000647a7) sc_clock_pane_t5_ParamLimits

0x7fb0,	// (0x000647a7) sc_clock_pane_t5

0x8053,	// (0x0006484a) main_radioblah_pane_g1_ParamLimits

0xe538,	// (0x0006ad2f) main_radioblah_pane_t3_ParamLimits

0xe538,	// (0x0006ad2f) main_radioblah_pane_t3

0xe550,	// (0x0006ad47) main_radioblah_pane_t4_ParamLimits

0xe550,	// (0x0006ad47) main_radioblah_pane_t4

0x8071,	// (0x00064868) main_radioblah_text_pane_ParamLimits

0x8071,	// (0x00064868) main_radioblah_text_pane

0x807e,	// (0x00064875) main_radioblah_info_pane_g1_ParamLimits

0x8113,	// (0x0006490a) main_radioblah_info_pane_t4_ParamLimits

0x8113,	// (0x0006490a) main_radioblah_info_pane_t4

0xa63e,	// (0x00066e35) main_sp_fs_calendar_pane

0x8a47,	// (0x0006523e) main_phacti_pane_g1

0x8a4f,	// (0x00065246) phacti_note_pane_ParamLimits

0x8a4f,	// (0x00065246) phacti_note_pane

0xe870,	// (0x0006b067) phacti_term_pane_ParamLimits

0xe870,	// (0x0006b067) phacti_term_pane

0xe885,	// (0x0006b07c) phacti_note_pane_t1_ParamLimits

0xe885,	// (0x0006b07c) phacti_note_pane_t1

0xa2e9,	// (0x00066ae0) phacti_term_pane_g1

0xa2f1,	// (0x00066ae8) phacti_term_pane_t1_ParamLimits

0xa2f1,	// (0x00066ae8) phacti_term_pane_t1

0xe89c,	// (0x0006b093) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe8a4,	// (0x0006b09b) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0x0a7a,	// (0x0005d271) popup_sp_fs_calendar_preview_list_single_pane_g

0xe8ac,	// (0x0006b0a3) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe8ac,	// (0x0006b0a3) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe8c2,	// (0x0006b0b9) aid_popup_sp_fs_bg_corner_pane

0xcbab,	// (0x000693a2) popup_sp_fs_calendar_preview_bg_pane_g1

0x980f,	// (0x00066006) popup_sp_fs_calendar_preview_bg_pane

0xa1a8,	// (0x0006699f) popup_sp_fs_calendar_preview_list_pane

0xc7a1,	// (0x00068f98) bg_main_sp_fs_cale_pane_ParamLimits

0xc7a1,	// (0x00068f98) bg_main_sp_fs_cale_pane

0xa31b,	// (0x00066b12) listscroll_cale_mrui_pane_ParamLimits

0xa31b,	// (0x00066b12) listscroll_cale_mrui_pane

0xa330,	// (0x00066b27) listscroll_sp_fs_schedule_track_pane

0xa339,	// (0x00066b30) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xa339,	// (0x00066b30) main_sp_fs_ctrlbar_pane_cp01

0xe8ca,	// (0x0006b0c1) main_sp_fs_ribbon_pane

0xa34c,	// (0x00066b43) popup_sp_fs_cale_preview_window

0x8ab2,	// (0x000652a9) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8ab2,	// (0x000652a9) list_single_sp_fs_schedule_track_pane

0xdd11,	// (0x0006a508) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xdd11,	// (0x0006a508) bg_sp_fs_highlight_list_pane_cp03

0x8ae0,	// (0x000652d7) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8ae0,	// (0x000652d7) list_single_sp_fs_schedule_track_pane_g1

0x8aec,	// (0x000652e3) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8aec,	// (0x000652e3) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfb6d,	// (0x0006c364) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfb6d,	// (0x0006c364) list_single_sp_fs_schedule_track_pane_g

0x8af8,	// (0x000652ef) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8af8,	// (0x000652ef) list_single_sp_fs_schedule_track_pane_t1

0x8b10,	// (0x00065307) sp_fs_schedule_track_pane_ParamLimits

0x8b10,	// (0x00065307) sp_fs_schedule_track_pane

0xe8d2,	// (0x0006b0c9) sp_fs_schedule_track_pane_g1

0xe8da,	// (0x0006b0d1) sp_fs_schedule_track_pane_g2

0xe8e2,	// (0x0006b0d9) sp_fs_schedule_track_pane_g3

0xe8ea,	// (0x0006b0e1) sp_fs_schedule_track_pane_g4

0xe8f2,	// (0x0006b0e9) sp_fs_schedule_track_pane_g5

0x0004,

0x0a84,	// (0x0005d27b) sp_fs_schedule_track_pane_g

0xd61a,	// (0x00069e11) bg_sp_fs_schedule_viewer_highlight_g1

0xab50,	// (0x00067347) bg_sp_fs_schedule_viewer_highlight_g2

0xd622,	// (0x00069e19) bg_sp_fs_schedule_viewer_highlight_g3

0xd62a,	// (0x00069e21) bg_sp_fs_schedule_viewer_highlight_g4

0xd850,	// (0x0006a047) bg_sp_fs_schedule_viewer_highlight_g5

0xd63a,	// (0x00069e31) bg_sp_fs_schedule_viewer_highlight_g6

0xd642,	// (0x00069e39) bg_sp_fs_schedule_viewer_highlight_g7

0xd64a,	// (0x00069e41) bg_sp_fs_schedule_viewer_highlight_g8

0xab30,	// (0x00067327) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfb72,	// (0x0006c369) bg_sp_fs_schedule_viewer_highlight_g

0x980f,	// (0x00066006) bg_main_sp_fs_ribbon_pane

0x8b20,	// (0x00065317) main_sp_fs_ribbon_pane_g1

0xe8fa,	// (0x0006b0f1) main_sp_fs_ribbon_pane_t1

0x8b29,	// (0x00065320) main_sp_fs_ribbon_pane_t2

0xe909,	// (0x0006b100) main_sp_fs_ribbon_pane_t3

0x0002,

0xfb85,	// (0x0006c37c) main_sp_fs_ribbon_pane_t

0xe918,	// (0x0006b10f) main_sp_fs_ribbon_scheduler_pane

0xe920,	// (0x0006b117) bg_main_sp_fs_ribbon_pane_g1

0xe929,	// (0x0006b120) bg_main_sp_fs_ribbon_pane_g2

0xe932,	// (0x0006b129) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0x0aa9,	// (0x0005d2a0) bg_main_sp_fs_ribbon_pane_g

0xe93a,	// (0x0006b131) main_sp_fs_ribbon_scheduler_pane_g1

0xe943,	// (0x0006b13a) main_sp_fs_ribbon_scheduler_pane_g2

0xe94c,	// (0x0006b143) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0x0ab0,	// (0x0005d2a7) main_sp_fs_ribbon_scheduler_pane_g

0xe955,	// (0x0006b14c) list_cale_mrui_pane

0x8b3a,	// (0x00065331) sp_fs_scroll_pane_cp07_ParamLimits

0x8b3a,	// (0x00065331) sp_fs_scroll_pane_cp07

0x8b56,	// (0x0006534d) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8b56,	// (0x0006534d) bg_sp_fs_schedule_viewer_highlight

0xe962,	// (0x0006b159) list_single_sp_fs_schedule_track_pane_cp01

0xe96a,	// (0x0006b161) list_sp_fs_schedule_track_pane

0xe972,	// (0x0006b169) sp_fs_scroll_pane_cp06_ParamLimits

0xe972,	// (0x0006b169) sp_fs_scroll_pane_cp06

0xcbab,	// (0x000693a2) bgmain_sp_fs_calendar_pane_g1

0x8b63,	// (0x0006535a) list_single_cale_mrui_pane_ParamLimits

0x8b63,	// (0x0006535a) list_single_cale_mrui_pane

0xa35e,	// (0x00066b55) list_single_cale_mrui_row_pane_ParamLimits

0xa35e,	// (0x00066b55) list_single_cale_mrui_row_pane

0xa36b,	// (0x00066b62) list_single_cale_mrui_row_pane_g1_ParamLimits

0xa36b,	// (0x00066b62) list_single_cale_mrui_row_pane_g1

0xa3a3,	// (0x00066b9a) list_single_cale_mrui_row_pane_t1_ParamLimits

0xa3a3,	// (0x00066b9a) list_single_cale_mrui_row_pane_t1

0x8b95,	// (0x0006538c) list_single_cale_mrui_row_pane_t2_ParamLimits

0x8b95,	// (0x0006538c) list_single_cale_mrui_row_pane_t2

0xa3b5,	// (0x00066bac) list_single_cale_mrui_row_pane_t3_ParamLimits

0xa3b5,	// (0x00066bac) list_single_cale_mrui_row_pane_t3

0xa3e4,	// (0x00066bdb) list_single_cale_mrui_row_pane_t4_ParamLimits

0xa3e4,	// (0x00066bdb) list_single_cale_mrui_row_pane_t4

0x0003,

0xfb93,	// (0x0006c38a) list_single_cale_mrui_row_pane_t_ParamLimits

0xfb93,	// (0x0006c38a) list_single_cale_mrui_row_pane_t

0x8bfb,	// (0x000653f2) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x8bfb,	// (0x000653f2) list_single_cmail_header_editor_pane_bg_cp01

0x8c1d,	// (0x00065414) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x8c1d,	// (0x00065414) list_single_cmail_header_editor_pane_bg_cp02

0x8c39,	// (0x00065430) main_radioblah_text_pane_t1_ParamLimits

0x8c39,	// (0x00065430) main_radioblah_text_pane_t1

0xe991,	// (0x0006b188) cam6_indi_pane_cp01

0xe999,	// (0x0006b190) cam6_mode_pane_cp01

0xe9a1,	// (0x0006b198) cam6_pano_pane

0xe9aa,	// (0x0006b1a1) cam6_zoom_pane_cp01

0xe9b2,	// (0x0006b1a9) cam6_pano_image_pane

0xe9bd,	// (0x0006b1b4) cam6_pano_pane_g1

0xe29b,	// (0x0006aa92) cam6_pano_pane_g2

0xe9c6,	// (0x0006b1bd) cam6_pano_pane_g3

0xe9cf,	// (0x0006b1c6) cam6_pano_pane_g4

0xd175,	// (0x0006996c) cam6_pano_pane_g5

0xe9d8,	// (0x0006b1cf) cam6_pano_pane_g6

0xe9e2,	// (0x0006b1d9) cam6_pano_pane_g7

0xe9ea,	// (0x0006b1e1) cam6_pano_pane_g8

0xe9f3,	// (0x0006b1ea) cam6_pano_pane_g9

0x0008,

0x0ac7,	// (0x0005d2be) cam6_pano_pane_g

0x980f,	// (0x00066006) main_browser_tag_pane

0xe851,	// (0x0006b048) grid_navstr_albumart_pane

0xe9fe,	// (0x0006b1f5) cell_navstr_albumart_pane_ParamLimits

0xe9fe,	// (0x0006b1f5) cell_navstr_albumart_pane

0xb4f7,	// (0x00067cee) cell_navstr_albumart_pane_g1

0xc5b2,	// (0x00068da9) cell_navstr_albumart_pane_g2

0xc5c2,	// (0x00068db9) cell_navstr_albumart_pane_g3

0xc5ba,	// (0x00068db1) cell_navstr_albumart_pane_g4

0x0003,

0x0ada,	// (0x0005d2d1) cell_navstr_albumart_pane_g

0x8c54,	// (0x0006544b) bt_list_pane_ParamLimits

0x8c54,	// (0x0006544b) bt_list_pane

0xea20,	// (0x0006b217) bt_list_pane_t1

0xea2f,	// (0x0006b226) bt_list_pane_t2

0x0001,

0x0ae3,	// (0x0005d2da) bt_list_pane_t

0x980f,	// (0x00066006) main_cale_prevew_pane

0x8c78,	// (0x0006546f) popup_cale_preview_window_ParamLimits

0x8c78,	// (0x0006546f) popup_cale_preview_window

0xa63e,	// (0x00066e35) bg_popup_preview_window_pane_cp05_ParamLimits

0xa63e,	// (0x00066e35) bg_popup_preview_window_pane_cp05

0xea3e,	// (0x0006b235) list_cale_preview_pane_ParamLimits

0xea3e,	// (0x0006b235) list_cale_preview_pane

0xea4a,	// (0x0006b241) list_double_cale_preview_pane_ParamLimits

0xea4a,	// (0x0006b241) list_double_cale_preview_pane

0xea5c,	// (0x0006b253) list_single_cale_preview_pane_ParamLimits

0xea5c,	// (0x0006b253) list_single_cale_preview_pane

0xea70,	// (0x0006b267) list_single_cale_preview_pane_g1

0xea78,	// (0x0006b26f) list_single_cale_preview_pane_t1_ParamLimits

0xea78,	// (0x0006b26f) list_single_cale_preview_pane_t1

0xea8d,	// (0x0006b284) list_double_cale_preview_pane_g1

0xea95,	// (0x0006b28c) list_double_cale_preview_pane_t1_ParamLimits

0xea95,	// (0x0006b28c) list_double_cale_preview_pane_t1

0xeaaa,	// (0x0006b2a1) list_double_cale_preview_pane_t2_ParamLimits

0xeaaa,	// (0x0006b2a1) list_double_cale_preview_pane_t2

0x0001,

0x0ae8,	// (0x0005d2df) list_double_cale_preview_pane_t_ParamLimits

0x0ae8,	// (0x0005d2df) list_double_cale_preview_pane_t

0x980f,	// (0x00066006) main_ezdial_pane

0xa63e,	// (0x00066e35) main_sp_fs_email_pane_ParamLimits

0x82e8,	// (0x00064adf) cmail_ddmenu_btn01_pane_ParamLimits

0x82e8,	// (0x00064adf) cmail_ddmenu_btn01_pane

0x8305,	// (0x00064afc) cmail_ddmenu_btn02_pane_ParamLimits

0x8305,	// (0x00064afc) cmail_ddmenu_btn02_pane

0x8323,	// (0x00064b1a) cmail_ddmenu_btn03_pane_ParamLimits

0x8323,	// (0x00064b1a) cmail_ddmenu_btn03_pane

0x8351,	// (0x00064b48) main_sp_fs_ctrlbar_pane_ParamLimits

0x8367,	// (0x00064b5e) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x88cc,	// (0x000650c3) list_cmail_body_pane_ParamLimits

0xe7c8,	// (0x0006afbf) bg_button_pane_cp12

0xe7d1,	// (0x0006afc8) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe7d1,	// (0x0006afc8) list_single_cmail_header_detail_pane_g3

0xa2c5,	// (0x00066abc) list_single_cmail_header_detail_pane_t2_ParamLimits

0xa2c5,	// (0x00066abc) list_single_cmail_header_detail_pane_t2

0x0001,

0xfb5e,	// (0x0006c355) list_single_cmail_header_detail_pane_t_ParamLimits

0xfb5e,	// (0x0006c355) list_single_cmail_header_detail_pane_t

0xa306,	// (0x00066afd) phacti_term_pane_t2_ParamLimits

0xa306,	// (0x00066afd) phacti_term_pane_t2

0x0001,

0xfb68,	// (0x0006c35f) phacti_term_pane_t_ParamLimits

0xfb68,	// (0x0006c35f) phacti_term_pane_t

0xeac2,	// (0x0006b2b9) aid_size_list_single_double

0x8c8f,	// (0x00065486) popup_ezdial_listscroll_window

0x8cb2,	// (0x000654a9) popup_number_entry_window_cp01

0xb396,	// (0x00067b8d) bg_popup_call_pane_cp09

0xeace,	// (0x0006b2c5) ezdial_list_pane

0xead6,	// (0x0006b2cd) scroll_pane_cp23

0xc98e,	// (0x00069185) bg_button_pane_cp028_ParamLimits

0xc98e,	// (0x00069185) bg_button_pane_cp028

0x8cc0,	// (0x000654b7) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x8cc0,	// (0x000654b7) cmail_ddmenu_btn01_pane_g1

0x8cd2,	// (0x000654c9) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x8cd2,	// (0x000654c9) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfb9c,	// (0x0006c393) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfb9c,	// (0x0006c393) cmail_ddmenu_btn01_pane_g

0xeade,	// (0x0006b2d5) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xeade,	// (0x0006b2d5) cmail_ddmenu_btn01_pane_t1

0xc7a1,	// (0x00068f98) bg_button_pane_cp029_ParamLimits

0xc7a1,	// (0x00068f98) bg_button_pane_cp029

0x8cde,	// (0x000654d5) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x8cde,	// (0x000654d5) cmail_ddmenu_btn02_pane_g1

0x8cf6,	// (0x000654ed) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x8cf6,	// (0x000654ed) cmail_ddmenu_btn02_pane_t1

0xdd11,	// (0x0006a508) bg_button_pane_cp031_ParamLimits

0xdd11,	// (0x0006a508) bg_button_pane_cp031

0x8cde,	// (0x000654d5) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x8cde,	// (0x000654d5) cmail_ddmenu_btn03_pane_g1

0x8cf6,	// (0x000654ed) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x8cf6,	// (0x000654ed) cmail_ddmenu_btn03_pane_t1

0x5e2b,	// (0x00062622) cell_dialer2_keypad_pane_t1_ParamLimits

0x5e45,	// (0x0006263c) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x5e45,	// (0x0006263c) cell_dialer2_keypad_pane_t1_copy1

0x7c6b,	// (0x00064462) ncimui_group_button_pane

0xa63e,	// (0x00066e35) main_sp_fs_calendar_pane_ParamLimits

0x88f3,	// (0x000650ea) list_single_cmail_header_caption_pane_ParamLimits

0xdf6f,	// (0x0006a766) aid_recal_txt_sm_pane

0x980f,	// (0x00066006) mian_recal_day_pane

0xa34c,	// (0x00066b43) popup_sp_fs_cale_preview_window_ParamLimits

0xeaf3,	// (0x0006b2ea) list_recal_day_pane

0xa42e,	// (0x00066c25) list_single_recal_day_pane_ParamLimits

0xa42e,	// (0x00066c25) list_single_recal_day_pane

0xeb1a,	// (0x0006b311) list_single_recal_day_pane_g1_ParamLimits

0xeb1a,	// (0x0006b311) list_single_recal_day_pane_g1

0xa64c,	// (0x00066e43) list_single_recal_day_pane_g2_ParamLimits

0xa64c,	// (0x00066e43) list_single_recal_day_pane_g2

0xa65c,	// (0x00066e53) list_single_recal_day_pane_g3_ParamLimits

0xa65c,	// (0x00066e53) list_single_recal_day_pane_g3

0x8d1a,	// (0x00065511) list_single_recal_day_pane_g4_ParamLimits

0x8d1a,	// (0x00065511) list_single_recal_day_pane_g4

0xa668,	// (0x00066e5f) list_single_recal_day_pane_g5_ParamLimits

0xa668,	// (0x00066e5f) list_single_recal_day_pane_g5

0xa678,	// (0x00066e6f) list_single_recal_day_pane_g6_ParamLimits

0xa678,	// (0x00066e6f) list_single_recal_day_pane_g6

0x0004,

0xfbab,	// (0x0006c3a2) list_single_recal_day_pane_g_ParamLimits

0xfbab,	// (0x0006c3a2) list_single_recal_day_pane_g

0xa68c,	// (0x00066e83) list_single_recal_day_pane_t1

0xa69e,	// (0x00066e95) list_single_recal_day_pane_t2

0x0001,

0xfbb6,	// (0x0006c3ad) list_single_recal_day_pane_t

0x8d3a,	// (0x00065531) ncimui_query_button_pane_ParamLimits

0x8d3a,	// (0x00065531) ncimui_query_button_pane

0x8d4a,	// (0x00065541) ncimui_query_button_pane_t1_ParamLimits

0x8d4a,	// (0x00065541) ncimui_query_button_pane_t1

0xeb26,	// (0x0006b31d) ncimui_query_button_pane_t2_ParamLimits

0xeb26,	// (0x0006b31d) ncimui_query_button_pane_t2

0x0001,

0xfbbb,	// (0x0006c3b2) ncimui_query_button_pane_t_ParamLimits

0xfbbb,	// (0x0006c3b2) ncimui_query_button_pane_t

0x8d5d,	// (0x00065554) query_button_pane_ParamLimits

0x8d5d,	// (0x00065554) query_button_pane

0x980f,	// (0x00066006) bg_button_pane_cp0028

0xeb39,	// (0x0006b330) query_button_pane_t1

0x4206,	// (0x000609fd) main_tport_pane_ParamLimits

0x87d5,	// (0x00064fcc) bg_popup_window_pane_cp01_ParamLimits

0x87d5,	// (0x00064fcc) bg_popup_window_pane_cp01

0x87e3,	// (0x00064fda) heading_pane_cp08_ParamLimits

0x87e3,	// (0x00064fda) heading_pane_cp08

0x87f1,	// (0x00064fe8) heading_pane_cp07_ParamLimits

0x87f1,	// (0x00064fe8) heading_pane_cp07

0x8860,	// (0x00065057) cell_tport_appsw_pane_g2

0x0002,

0xfb4b,	// (0x0006c342) cell_tport_appsw_pane_g

0x9d69,	// (0x00066560) input_candi_list_open_g1

0xad1b,	// (0x00067512) list_cale_time_pane_g6_ParamLimits

0xad1b,	// (0x00067512) list_cale_time_pane_g6

0x4c86,	// (0x0006147d) aid_size_touch_calib_1_ParamLimits

0x4c86,	// (0x0006147d) aid_size_touch_calib_1

0x4c92,	// (0x00061489) aid_size_touch_calib_2_ParamLimits

0x4c92,	// (0x00061489) aid_size_touch_calib_2

0x4ca0,	// (0x00061497) aid_size_touch_calib_3_ParamLimits

0x4ca0,	// (0x00061497) aid_size_touch_calib_3

0x4cb0,	// (0x000614a7) aid_size_touch_calib_4_ParamLimits

0x4cb0,	// (0x000614a7) aid_size_touch_calib_4

0x4cbe,	// (0x000614b5) main_touch_calib_button_group_pane_ParamLimits

0x4cbe,	// (0x000614b5) main_touch_calib_button_group_pane

0x4ccc,	// (0x000614c3) main_touch_calib_pane_g1_ParamLimits

0x4cd8,	// (0x000614cf) main_touch_calib_pane_g2_ParamLimits

0x4ce4,	// (0x000614db) main_touch_calib_pane_g3_ParamLimits

0x4cf0,	// (0x000614e7) main_touch_calib_pane_g4_ParamLimits

0xf61b,	// (0x0006be12) main_touch_calib_pane_g_ParamLimits

0x4cfc,	// (0x000614f3) main_touch_calib_pane_t1_ParamLimits

0x4d15,	// (0x0006150c) main_touch_calib_pane_t2_ParamLimits

0x4d2e,	// (0x00061525) main_touch_calib_pane_t3_ParamLimits

0x4d44,	// (0x0006153b) main_touch_calib_pane_t4_ParamLimits

0x4d5a,	// (0x00061551) main_touch_calib_pane_t5_ParamLimits

0xf624,	// (0x0006be1b) main_touch_calib_pane_t_ParamLimits

0xcf0b,	// (0x00069702) list_single_fp_cale_pane_g3_ParamLimits

0xcf0b,	// (0x00069702) list_single_fp_cale_pane_g3

0x41ea,	// (0x000609e1) bg_button_pane_cp012_ParamLimits

0x41ea,	// (0x000609e1) bg_vkb2_func_pane_cp03_ParamLimits

0x6c7b,	// (0x00063472) cell_vitu2_function_top_pane_g1_ParamLimits

0x41ea,	// (0x000609e1) bg_vkb2_func_pane_cp04_ParamLimits

0x7bf3,	// (0x000643ea) main_ncimui_button_group_pane_ParamLimits

0x7bf3,	// (0x000643ea) main_ncimui_button_group_pane

0x7c59,	// (0x00064450) main_ncimui_pane_t3_ParamLimits

0x7c59,	// (0x00064450) main_ncimui_pane_t3

0xe867,	// (0x0006b05e) phacti_button_group_pane

0xeac2,	// (0x0006b2b9) aid_size_list_single_double_ParamLimits

0x8c8f,	// (0x00065486) popup_ezdial_listscroll_window_ParamLimits

0x8cb2,	// (0x000654a9) popup_number_entry_window_cp01_ParamLimits

0x8d6a,	// (0x00065561) phacti_button_pane_ParamLimits

0x8d6a,	// (0x00065561) phacti_button_pane

0x980f,	// (0x00066006) bg_button_pane_cp14

0xeb47,	// (0x0006b33e) phacti_button_pane_t1

0x8d7b,	// (0x00065572) main_touch_calib_button_pane_ParamLimits

0x8d7b,	// (0x00065572) main_touch_calib_button_pane

0xa730,	// (0x00066f27) bg_button_pane_cp18_ParamLimits

0xa730,	// (0x00066f27) bg_button_pane_cp18

0xeb55,	// (0x0006b34c) main_touch_calib_button_pane_t1_ParamLimits

0xeb55,	// (0x0006b34c) main_touch_calib_button_pane_t1

0xeb6b,	// (0x0006b362) main_touch_calib_button_pane_t2_ParamLimits

0xeb6b,	// (0x0006b362) main_touch_calib_button_pane_t2

0x0001,

0x0b11,	// (0x0005d308) main_touch_calib_button_pane_t_ParamLimits

0x0b11,	// (0x0005d308) main_touch_calib_button_pane_t

0x980f,	// (0x00066006) cell_ncimui_button_pane

0x980f,	// (0x00066006) bg_button_pane_cp032

0xeb89,	// (0x0006b380) cell_ncimui_button_pane_t1

0x5ea1,	// (0x00062698) image3_infobar_pane_ParamLimits

0x5ea1,	// (0x00062698) image3_infobar_pane

0x7fd2,	// (0x000647c9) fs_bigclock_status_pane_ParamLimits

0x7fd2,	// (0x000647c9) fs_bigclock_status_pane

0x7fdf,	// (0x000647d6) main_fs_bigclock_clock_pane_ParamLimits

0x7fdf,	// (0x000647d6) main_fs_bigclock_clock_pane

0x7ff9,	// (0x000647f0) main_fs_bigclock_indi_pane_ParamLimits

0x7ff9,	// (0x000647f0) main_fs_bigclock_indi_pane

0x8021,	// (0x00064818) main_fs_bigclock_swipe_pane_ParamLimits

0x8021,	// (0x00064818) main_fs_bigclock_swipe_pane

0x980f,	// (0x00066006) main_fs_clock_dumped_data

0xe3a8,	// (0x0006ab9f) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe3a8,	// (0x0006ab9f) list_single_fs_bigclock_indicator_pane_g1

0xe3c4,	// (0x0006abbb) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe3c4,	// (0x0006abbb) list_single_fs_bigclock_indicator_pane_g2

0xe3de,	// (0x0006abd5) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe3de,	// (0x0006abd5) list_single_fs_bigclock_indicator_pane_g3

0xe3f8,	// (0x0006abef) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe3f8,	// (0x0006abef) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0x0939,	// (0x0005d130) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0x0939,	// (0x0005d130) list_single_fs_bigclock_indicator_pane_g

0xe423,	// (0x0006ac1a) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe423,	// (0x0006ac1a) list_single_fs_bigclock_indicator_pane_t1

0xe44b,	// (0x0006ac42) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe44b,	// (0x0006ac42) list_single_fs_bigclock_indicator_pane_t2

0xe473,	// (0x0006ac6a) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe473,	// (0x0006ac6a) list_single_fs_bigclock_indicator_pane_t3

0xe49b,	// (0x0006ac92) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe49b,	// (0x0006ac92) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0x0944,	// (0x0005d13b) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0x0944,	// (0x0005d13b) list_single_fs_bigclock_indicator_pane_t

0xeb97,	// (0x0006b38e) image3_infobar_fav_pane_ParamLimits

0xeb97,	// (0x0006b38e) image3_infobar_fav_pane

0xeba7,	// (0x0006b39e) image3_infobar_loc_pane_ParamLimits

0xeba7,	// (0x0006b39e) image3_infobar_loc_pane

0xebbb,	// (0x0006b3b2) image3_infobar_time_pane_ParamLimits

0xebbb,	// (0x0006b3b2) image3_infobar_time_pane

0xcbab,	// (0x000693a2) image3_infobar_time_pane_g1

0xebcb,	// (0x0006b3c2) image3_infobar_time_pane_t1

0xcbab,	// (0x000693a2) image3_infobar_loc_pane_g1

0xebd9,	// (0x0006b3d0) image3_infobar_loc_pane_g2

0x0001,

0x0b16,	// (0x0005d30d) image3_infobar_loc_pane_g

0xebe1,	// (0x0006b3d8) image3_infobar_loc_pane_t1

0xcbab,	// (0x000693a2) image3_infobar_fav_pane_g1

0xebef,	// (0x0006b3e6) image3_infobar_fav_pane_g2

0x0001,

0x0b1b,	// (0x0005d312) image3_infobar_fav_pane_g

0xebf7,	// (0x0006b3ee) fs_bigclock_status_battery_pane

0xec00,	// (0x0006b3f7) fs_bigclock_status_signal_pane

0xec09,	// (0x0006b400) fs_bigclock_status_title_pane

0xec12,	// (0x0006b409) fs_bigclock_status_signal_pane_g1

0xec1b,	// (0x0006b412) fs_bigclock_status_signal_pane_g2

0x0001,

0x0b20,	// (0x0005d317) fs_bigclock_status_signal_pane_g

0xec23,	// (0x0006b41a) fs_bigclock_status_battery_pane_g1

0xec2c,	// (0x0006b423) fs_bigclock_status_battery_pane_g2

0x0001,

0x0b25,	// (0x0005d31c) fs_bigclock_status_battery_pane_g

0xec34,	// (0x0006b42b) fs_bigclock_status_title_pane_t1

0xcbab,	// (0x000693a2) main_fs_bigclock_clock_pane_g1

0xec42,	// (0x0006b439) main_fs_bigclock_clock_pane_g2

0xec4b,	// (0x0006b442) main_fs_bigclock_clock_pane_g3

0xec4b,	// (0x0006b442) main_fs_bigclock_clock_pane_g4

0x0003,

0x0b2a,	// (0x0005d321) main_fs_bigclock_clock_pane_g

0xec53,	// (0x0006b44a) main_fs_bigclock_clock_pane_t1

0x8d8b,	// (0x00065582) main_fs_bigclock_clock_pane_t2

0x0001,

0xfbc0,	// (0x0006c3b7) main_fs_bigclock_clock_pane_t

0xec61,	// (0x0006b458) list_single_fs_bigclock_indicator_pane_ParamLimits

0xec61,	// (0x0006b458) list_single_fs_bigclock_indicator_pane

0xec72,	// (0x0006b469) list_single_fs_bigclock_pane_ParamLimits

0xec72,	// (0x0006b469) list_single_fs_bigclock_pane

0xec98,	// (0x0006b48f) main_fs_bigclock_indicator_pane_t1

0xeca7,	// (0x0006b49e) list_single_fs_bigclock_pane_g1

0xecaf,	// (0x0006b4a6) list_single_fs_bigclock_pane_t1

0xcbab,	// (0x000693a2) main_fs_bigclock_swipe_pane_g1

0xecf2,	// (0x0006b4e9) main_fs_bigclock_swipe_pane_g2

0x0001,

0x0b44,	// (0x0005d33b) main_fs_bigclock_swipe_pane_g

0xecfa,	// (0x0006b4f1) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xecfa,	// (0x0006b4f1) main_fs_bigclock_swipe_pane_t1

0x3249,	// (0x0005fa40) call_type_pane_ParamLimits

0x980f,	// (0x00066006) main_btmg_pane

0xa397,	// (0x00066b8e) list_single_cale_mrui_row_pane_g2_ParamLimits

0xa397,	// (0x00066b8e) list_single_cale_mrui_row_pane_g2

0x0002,

0xfb8c,	// (0x0006c383) list_single_cale_mrui_row_pane_g_ParamLimits

0xfb8c,	// (0x0006c383) list_single_cale_mrui_row_pane_g

0xa41d,	// (0x00066c14) list_recal_vselct_arw_lo_pane

0xeb12,	// (0x0006b309) list_recal_vselct_arw_up_pane

0xa425,	// (0x00066c1c) list_recal_vselct_pane

0x8ddc,	// (0x000655d3) btmg_button_pane

0x8de8,	// (0x000655df) main_btmg_pane_g1

0x980f,	// (0x00066006) bg_button_pane_cp044

0xed17,	// (0x0006b50e) btmg_button_pane_t1

0xc78d,	// (0x00068f84) aid_listscroll_gen

0xa63e,	// (0x00066e35) main_cntbar_detail_pane

0xe7aa,	// (0x0006afa1) list_cmail_folder_pane

0xd094,	// (0x0006988b) sp_fs_scroll_pane_cp03_ParamLimits

0x8df0,	// (0x000655e7) list_single_fs_dyc_pane_cp01_ParamLimits

0x8df0,	// (0x000655e7) list_single_fs_dyc_pane_cp01

0xed25,	// (0x0006b51c) aid_size_cmail_indent

0xa6b0,	// (0x00066ea7) list_single_dyc_row_pane_cp01

0x8e47,	// (0x0006563e) cntbar_detail_list_pane_ParamLimits

0x8e47,	// (0x0006563e) cntbar_detail_list_pane

0x8e81,	// (0x00065678) main_cntbar_detail_cont_pane_ParamLimits

0x8e81,	// (0x00065678) main_cntbar_detail_cont_pane

0x31b3,	// (0x0005f9aa) scroll_pane_cp032_ParamLimits

0x31b3,	// (0x0005f9aa) scroll_pane_cp032

0x8e8d,	// (0x00065684) cntbar_detail_list_event_pane_ParamLimits

0x8e8d,	// (0x00065684) cntbar_detail_list_event_pane

0x8e53,	// (0x0006564a) cntbar_detail_list_shct_pane

0xab9e,	// (0x00067395) aid_list_gen

0xed2e,	// (0x0006b525) aid_scroll

0xed37,	// (0x0006b52e) aid_size_touch_scroll_bar

0x73be,	// (0x00063bb5) aid_list_double

0x8ea1,	// (0x00065698) aid_list_single

0xdd1f,	// (0x0006a516) aid_list_single_lg

0x8eaa,	// (0x000656a1) aid_list_z_g_a_sm

0x8eb2,	// (0x000656a9) aid_list_z_g_d

0x8eba,	// (0x000656b1) aid_txt_z_prm

0x8ec8,	// (0x000656bf) aid_txt_z_prm_cp01

0x8ed6,	// (0x000656cd) aid_txt_z_sec

0x8ee4,	// (0x000656db) main_cntbar_detail_cont_pane_g1_ParamLimits

0x8ee4,	// (0x000656db) main_cntbar_detail_cont_pane_g1

0x8ef1,	// (0x000656e8) main_cntbar_detail_cont_pane_g2_ParamLimits

0x8ef1,	// (0x000656e8) main_cntbar_detail_cont_pane_g2

0x0001,

0xfbcc,	// (0x0006c3c3) main_cntbar_detail_cont_pane_g_ParamLimits

0xfbcc,	// (0x0006c3c3) main_cntbar_detail_cont_pane_g

0xed40,	// (0x0006b537) main_cntbar_detail_cont_pane_t1

0xed4e,	// (0x0006b545) main_cntbar_detail_cont_pane_t2

0xed5c,	// (0x0006b553) main_cntbar_detail_cont_pane_t3

0x0002,

0x0b4e,	// (0x0005d345) main_cntbar_detail_cont_pane_t

0x8efd,	// (0x000656f4) cell_cntbar_detail_list_shct_pane_ParamLimits

0x8efd,	// (0x000656f4) cell_cntbar_detail_list_shct_pane

0xed6a,	// (0x0006b561) cntbar_detail_list_shct_pane_g1

0xed73,	// (0x0006b56a) cntbar_detail_list_shct_pane_g2

0x0001,

0x0b55,	// (0x0005d34c) cntbar_detail_list_shct_pane_g

0x8f11,	// (0x00065708) cntbar_detail_list_event_pane_g1_ParamLimits

0x8f11,	// (0x00065708) cntbar_detail_list_event_pane_g1

0x8f1d,	// (0x00065714) cntbar_detail_list_event_pane_g2_ParamLimits

0x8f1d,	// (0x00065714) cntbar_detail_list_event_pane_g2

0x0005,

0xfbd1,	// (0x0006c3c8) cntbar_detail_list_event_pane_g_ParamLimits

0xfbd1,	// (0x0006c3c8) cntbar_detail_list_event_pane_g

0x8f89,	// (0x00065780) cntbar_detail_list_event_pane_t1_ParamLimits

0x8f89,	// (0x00065780) cntbar_detail_list_event_pane_t1

0x8f9e,	// (0x00065795) cntbar_detail_list_event_pane_t2_ParamLimits

0x8f9e,	// (0x00065795) cntbar_detail_list_event_pane_t2

0x0002,

0xfbde,	// (0x0006c3d5) cntbar_detail_list_event_pane_t_ParamLimits

0xfbde,	// (0x0006c3d5) cntbar_detail_list_event_pane_t

0xcbab,	// (0x000693a2) cell_cntbar_detail_list_shct_pane_g1

0xb32d,	// (0x00067b24) navi_pane_mv_g3

0xa63e,	// (0x00066e35) main_cntbar_detail_pane_ParamLimits

0x980f,	// (0x00066006) main_notif_wgt_pane

0x5b55,	// (0x0006234c) aid_tch_main_mp4_pane_g4

0x5d8a,	// (0x00062581) popup_slider_window_cp02

0xa413,	// (0x00066c0a) list_recal_day_event_pane

0x8e27,	// (0x0006561e) cntbar_detail_btn_pane_ParamLimits

0x8e27,	// (0x0006561e) cntbar_detail_btn_pane

0x8e37,	// (0x0006562e) cntbar_detail_btn_pane_cp01_ParamLimits

0x8e37,	// (0x0006562e) cntbar_detail_btn_pane_cp01

0x8e53,	// (0x0006564a) cntbar_detail_list_shct_pane_ParamLimits

0x8e5f,	// (0x00065656) cntbar_detail_pane_g1_ParamLimits

0x8e5f,	// (0x00065656) cntbar_detail_pane_g1

0x8e6b,	// (0x00065662) cntbar_detail_pane_t1_ParamLimits

0x8e6b,	// (0x00065662) cntbar_detail_pane_t1

0x8f29,	// (0x00065720) cntbar_detail_list_event_pane_g3_ParamLimits

0x8f29,	// (0x00065720) cntbar_detail_list_event_pane_g3

0x8f41,	// (0x00065738) cntbar_detail_list_event_pane_g4_ParamLimits

0x8f41,	// (0x00065738) cntbar_detail_list_event_pane_g4

0x8f59,	// (0x00065750) cntbar_detail_list_event_pane_g5_ParamLimits

0x8f59,	// (0x00065750) cntbar_detail_list_event_pane_g5

0x8f71,	// (0x00065768) cntbar_detail_list_event_pane_g6_ParamLimits

0x8f71,	// (0x00065768) cntbar_detail_list_event_pane_g6

0x8fb3,	// (0x000657aa) cntbar_detail_list_event_pane_t3_ParamLimits

0x8fb3,	// (0x000657aa) cntbar_detail_list_event_pane_t3

0x8fc5,	// (0x000657bc) popup_notif_wgt_window_ParamLimits

0x8fc5,	// (0x000657bc) popup_notif_wgt_window

0x8fd5,	// (0x000657cc) popup_submenu_window_cp01_ParamLimits

0x8fd5,	// (0x000657cc) popup_submenu_window_cp01

0xb396,	// (0x00067b8d) bg_popup_window_pane_cp10

0xed7c,	// (0x0006b573) listscroll_notif_wgt_pane

0xed8d,	// (0x0006b584) list_notif_wgt_window

0xed96,	// (0x0006b58d) scroll_pane_cp033

0x8fe3,	// (0x000657da) list_notif_wgt_row_pane_ParamLimits

0x8fe3,	// (0x000657da) list_notif_wgt_row_pane

0xed9f,	// (0x0006b596) aid_size_list_notif_wgt_del

0xedac,	// (0x0006b5a3) list_notif_wgt_row_pane_g1

0xedb8,	// (0x0006b5af) list_notif_wgt_row_pane_g2

0xedcc,	// (0x0006b5c3) list_notif_wgt_row_pane_g3

0x0002,

0x0b6e,	// (0x0005d365) list_notif_wgt_row_pane_g

0xedd9,	// (0x0006b5d0) list_notif_wgt_row_pane_t1

0xedef,	// (0x0006b5e6) list_notif_wgt_row_pane_t2

0xee01,	// (0x0006b5f8) list_notif_wgt_row_pane_t3

0x0002,

0x0b75,	// (0x0005d36c) list_notif_wgt_row_pane_t

0xd86a,	// (0x0006a061) list_recal_day_event_pane_g1

0xee13,	// (0x0006b60a) list_recal_day_event_pane_t1

0x980f,	// (0x00066006) bg_button_pane_cp045

0xee22,	// (0x0006b619) cntbar_detail_btn_pane_t1

0xc7a1,	// (0x00068f98) main_callh_pane_ParamLimits

0xc7a1,	// (0x00068f98) main_callh_pane

0x980f,	// (0x00066006) main_coverflow0_pane

0x980f,	// (0x00066006) main_wgtman_pane

0x8039,	// (0x00064830) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x8039,	// (0x00064830) main_fs_bigclock_unlock_btn_pane

0x8858,	// (0x0006504f) bg_button_pane_cp16

0x8868,	// (0x0006505f) cell_tport_appsw_pane_g3

0x8ff5,	// (0x000657ec) cf0_flow_pane_ParamLimits

0x8ff5,	// (0x000657ec) cf0_flow_pane

0xee30,	// (0x0006b627) listscroll_cf0_pane

0xee3b,	// (0x0006b632) main_cf0_pane_g1

0x9004,	// (0x000657fb) main_cf0_pane_t1_ParamLimits

0x9004,	// (0x000657fb) main_cf0_pane_t1

0x9018,	// (0x0006580f) main_cf0_pane_t2_ParamLimits

0x9018,	// (0x0006580f) main_cf0_pane_t2

0x0001,

0xfbe5,	// (0x0006c3dc) main_cf0_pane_t_ParamLimits

0xfbe5,	// (0x0006c3dc) main_cf0_pane_t

0xee4d,	// (0x0006b644) scroll_pane_cp11

0x902c,	// (0x00065823) cf0_flow_pane_g1

0x9034,	// (0x0006582b) cf0_flow_pane_g2

0x0001,

0xfbea,	// (0x0006c3e1) cf0_flow_pane_g

0x903c,	// (0x00065833) cf0_flow_pane_t1

0x980f,	// (0x00066006) main_call6_pane

0x980f,	// (0x00066006) main_calllock_pane

0x904a,	// (0x00065841) call6_btn_grp_pane_ParamLimits

0x904a,	// (0x00065841) call6_btn_grp_pane

0x9059,	// (0x00065850) call6_pane_g1_ParamLimits

0x9059,	// (0x00065850) call6_pane_g1

0x9068,	// (0x0006585f) popup_call6_1st_window_ParamLimits

0x9068,	// (0x0006585f) popup_call6_1st_window

0x9076,	// (0x0006586d) popup_call6_2nd_window_ParamLimits

0x9076,	// (0x0006586d) popup_call6_2nd_window

0x9084,	// (0x0006587b) cell_call6_btn_pane_ParamLimits

0x9084,	// (0x0006587b) cell_call6_btn_pane

0xb396,	// (0x00067b8d) bg_popup_call2_in_pane_cp03

0xee58,	// (0x0006b64f) popup_call6_1st_window_g1

0xee60,	// (0x0006b657) popup_call6_1st_window_g2

0xee68,	// (0x0006b65f) popup_call6_1st_window_g3

0x0002,

0x0b8b,	// (0x0005d382) popup_call6_1st_window_g

0xee70,	// (0x0006b667) popup_call6_1st_window_t1

0xee7f,	// (0x0006b676) popup_call6_1st_window_t2

0xee8f,	// (0x0006b686) popup_call6_1st_window_t3

0x0002,

0x0b92,	// (0x0005d389) popup_call6_1st_window_t

0xb396,	// (0x00067b8d) bg_popup_call2_in_pane_cp04

0xee58,	// (0x0006b64f) popup_call6_2nd_window_g1

0xee60,	// (0x0006b657) popup_call6_2nd_window_g2

0xee68,	// (0x0006b65f) popup_call6_2nd_window_g3

0x0002,

0x0b8b,	// (0x0005d382) popup_call6_2nd_window_g

0xee70,	// (0x0006b667) popup_call6_2nd_window_t1

0x980f,	// (0x00066006) bg_button_pane_cp15

0xee9f,	// (0x0006b696) cell_call6_btn_pane_g1

0xeea8,	// (0x0006b69f) cell_call6_btn_pane_t1

0x9093,	// (0x0006588a) listscroll_wgtman_pane_ParamLimits

0x9093,	// (0x0006588a) listscroll_wgtman_pane

0x90af,	// (0x000658a6) wgtman_btn_pane_ParamLimits

0x90af,	// (0x000658a6) wgtman_btn_pane

0xb132,	// (0x00067929) aid_scroll_copy1

0xeeb7,	// (0x0006b6ae) list_wgtman_pane

0x90e4,	// (0x000658db) wgtman_btn_pane_g1_ParamLimits

0x90e4,	// (0x000658db) wgtman_btn_pane_g1

0x910c,	// (0x00065903) wgtman_btn_pane_t1_ParamLimits

0x910c,	// (0x00065903) wgtman_btn_pane_t1

0xeec1,	// (0x0006b6b8) wgtman_btn_pane_t2_ParamLimits

0xeec1,	// (0x0006b6b8) wgtman_btn_pane_t2

0x0001,

0xfbef,	// (0x0006c3e6) wgtman_btn_pane_t_ParamLimits

0xfbef,	// (0x0006c3e6) wgtman_btn_pane_t

0x9143,	// (0x0006593a) listrow_wgtman_pane_ParamLimits

0x9143,	// (0x0006593a) listrow_wgtman_pane

0x915f,	// (0x00065956) listrow_wgtman_pane_g1

0x916c,	// (0x00065963) listrow_wgtman_pane_g2

0x0001,

0xfbf4,	// (0x0006c3eb) listrow_wgtman_pane_g

0x918a,	// (0x00065981) listrow_wgtman_pane_t1

0x91a2,	// (0x00065999) listrow_wgtman_pane_t2

0x0001,

0xfbf9,	// (0x0006c3f0) listrow_wgtman_pane_t

0x91c8,	// (0x000659bf) wait_bar_pane_cp09

0xeed8,	// (0x0006b6cf) main_calllock_btn_pane

0xeee2,	// (0x0006b6d9) main_calllock_pane_g1

0x980f,	// (0x00066006) bg_button_pane_cp17

0xeeed,	// (0x0006b6e4) main_calllock_btn_pane_g1

0xeef6,	// (0x0006b6ed) main_calllock_btn_pane_t1

0x980f,	// (0x00066006) main_dialer3_pane

0x980f,	// (0x00066006) main_fmrd2_pane

0xcbab,	// (0x000693a2) main_fs_bigclock_unlock_btn_pane_g1

0xef0d,	// (0x0006b704) main_fs_bigclock_unlock_btn_pane_t1

0x91da,	// (0x000659d1) area_fmrd2_info_pane_ParamLimits

0x91da,	// (0x000659d1) area_fmrd2_info_pane

0x91e8,	// (0x000659df) area_fmrd2_visual_pane_ParamLimits

0x91e8,	// (0x000659df) area_fmrd2_visual_pane

0x91f6,	// (0x000659ed) fmrd2_indi_pane_ParamLimits

0x91f6,	// (0x000659ed) fmrd2_indi_pane

0x9203,	// (0x000659fa) area_fmrd2_visual_pane_g1

0x920b,	// (0x00065a02) area_fmrd2_visual_pane_t1

0x921b,	// (0x00065a12) area_fmrd2_visual_pane_t2

0x922b,	// (0x00065a22) area_fmrd2_visual_pane_t3

0x0002,

0xfbfe,	// (0x0006c3f5) area_fmrd2_visual_pane_t

0x923b,	// (0x00065a32) area_fmrd2_info_pane_g1

0x9243,	// (0x00065a3a) area_fmrd2_info_pane_t1

0x9253,	// (0x00065a4a) area_fmrd2_info_pane_t2

0x9263,	// (0x00065a5a) area_fmrd2_info_pane_t3

0x9273,	// (0x00065a6a) area_fmrd2_info_pane_t4

0x0003,

0xfc05,	// (0x0006c3fc) area_fmrd2_info_pane_t

0x9281,	// (0x00065a78) fmrd2_indi_pane_t1

0x9291,	// (0x00065a88) fmrd2_indi_pane_t2

0x92a1,	// (0x00065a98) fmrd2_indi_pane_t3

0x0002,

0xfc0e,	// (0x0006c405) fmrd2_indi_pane_t

0xe407,	// (0x0006abfe) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe407,	// (0x0006abfe) list_single_fs_bigclock_indicator_pane_g5

0xe4b7,	// (0x0006acae) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe4b7,	// (0x0006acae) list_single_fs_bigclock_indicator_pane_t5

0x8a65,	// (0x0006525c) aid_cell_bcale_month_pane_ParamLimits

0x8a65,	// (0x0006525c) aid_cell_bcale_month_pane

0x8a83,	// (0x0006527a) bcale_month_pane_ParamLimits

0x8a83,	// (0x0006527a) bcale_month_pane

0x8aa1,	// (0x00065298) bcale_preview_pane_ParamLimits

0x8aa1,	// (0x00065298) bcale_preview_pane

0xecaf,	// (0x0006b4a6) list_single_fs_bigclock_pane_t1_ParamLimits

0xecce,	// (0x0006b4c5) list_single_fs_bigclock_pane_t2_ParamLimits

0xecce,	// (0x0006b4c5) list_single_fs_bigclock_pane_t2

0x0001,

0x0b3f,	// (0x0005d336) list_single_fs_bigclock_pane_t_ParamLimits

0x0b3f,	// (0x0005d336) list_single_fs_bigclock_pane_t

0xef05,	// (0x0006b6fc) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0x0ba8,	// (0x0005d39f) main_fs_bigclock_unlock_btn_pane_g

0x92af,	// (0x00065aa6) aid_dia3_key_size_ParamLimits

0x92af,	// (0x00065aa6) aid_dia3_key_size

0x92bb,	// (0x00065ab2) aid_dia3_listrow_size_ParamLimits

0x92bb,	// (0x00065ab2) aid_dia3_listrow_size

0x92cb,	// (0x00065ac2) dia3_keypad_fun_pane_ParamLimits

0x92cb,	// (0x00065ac2) dia3_keypad_fun_pane

0x92dd,	// (0x00065ad4) dia3_keypad_num_pane_ParamLimits

0x92dd,	// (0x00065ad4) dia3_keypad_num_pane

0x92ef,	// (0x00065ae6) dia3_listscroll_pane_ParamLimits

0x92ef,	// (0x00065ae6) dia3_listscroll_pane

0x92fd,	// (0x00065af4) dia3_numentry_pane_ParamLimits

0x92fd,	// (0x00065af4) dia3_numentry_pane

0xef1b,	// (0x0006b712) dia3_list_pane

0xef26,	// (0x0006b71d) scroll_pane_cp12

0x980f,	// (0x00066006) bg_dia3_numentry_pane

0x930b,	// (0x00065b02) dia3_numentry_pane_t1

0x931a,	// (0x00065b11) cell_dia3_key_num_pane

0x9322,	// (0x00065b19) cell_dia3_key0_fun_pane_ParamLimits

0x9322,	// (0x00065b19) cell_dia3_key0_fun_pane

0x932f,	// (0x00065b26) cell_dia3_key1_fun_pane_ParamLimits

0x932f,	// (0x00065b26) cell_dia3_key1_fun_pane

0x933c,	// (0x00065b33) dia3_listrow_pane

0xe115,	// (0x0006a90c) bg_dia3_numentry_pane_g1

0x980f,	// (0x00066006) bg_button_pane_cp21

0xef31,	// (0x0006b728) cell_dia3_key_num_pane_t1

0xef3f,	// (0x0006b736) cell_dia3_key_num_pane_t2

0xef4e,	// (0x0006b745) cell_dia3_key_num_pane_t3

0xef5d,	// (0x0006b754) cell_dia3_key_num_pane_t4

0x0003,

0x0bc4,	// (0x0005d3bb) cell_dia3_key_num_pane_t

0x980f,	// (0x00066006) bg_button_pane_cp19

0x9349,	// (0x00065b40) cell_dia3_key0_fun_pane_g1

0x980f,	// (0x00066006) bg_button_pane_cp20

0x9351,	// (0x00065b48) cell_dia3_key1_fun_pane_g1

0x9359,	// (0x00065b50) area_left_week_number_pane

0x936c,	// (0x00065b63) area_top_day_name_pane

0x937a,	// (0x00065b71) frame_month_view_pane

0xef6c,	// (0x0006b763) grid_month_view_pane

0x938f,	// (0x00065b86) cell_top_day_name_pane_ParamLimits

0x938f,	// (0x00065b86) cell_top_day_name_pane

0x93a9,	// (0x00065ba0) cell_area_left_week_number_pane_ParamLimits

0x93a9,	// (0x00065ba0) cell_area_left_week_number_pane

0x93cc,	// (0x00065bc3) cell_month_view_pane_ParamLimits

0x93cc,	// (0x00065bc3) cell_month_view_pane

0xef7a,	// (0x0006b771) frm_month_g1

0x93f8,	// (0x00065bef) frm_month_g2

0x9409,	// (0x00065c00) frm_month_g3

0x941a,	// (0x00065c11) frm_month_g4

0x942b,	// (0x00065c22) frm_month_g5

0x943e,	// (0x00065c35) frm_month_g6

0x9451,	// (0x00065c48) frm_month_g7

0xef87,	// (0x0006b77e) frm_month_g8

0x9464,	// (0x00065c5b) frm_month_g9

0x9471,	// (0x00065c68) frm_month_g10

0x947e,	// (0x00065c75) frm_month_g11

0x948b,	// (0x00065c82) frm_month_g12

0x9498,	// (0x00065c8f) frm_month_g13

0x94a5,	// (0x00065c9c) frm_month_g14

0x94b4,	// (0x00065cab) frm_month_g15

0x94c3,	// (0x00065cba) frm_month_g16

0x000f,

0xfc15,	// (0x0006c40c) frm_month_g

0xef94,	// (0x0006b78b) cell_top_day_name_pane_t1

0x94d2,	// (0x00065cc9) cell_area_left_week_number_pane_g1

0x94e1,	// (0x00065cd8) cell_area_left_week_number_pane_t1

0xce0b,	// (0x00069602) cell_month_view_pane_g1

0x94f7,	// (0x00065cee) cell_month_view_pane_t1

0x980f,	// (0x00066006) main_fps_pane

0xe6a7,	// (0x0006ae9e) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe6a7,	// (0x0006ae9e) cmail_ddmenu_btn02_pane_cp1

0xe6c3,	// (0x0006aeba) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe6c3,	// (0x0006aeba) cmail_ddmenu_btn02_pane_cp2

0x8cea,	// (0x000654e1) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x8cea,	// (0x000654e1) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfba1,	// (0x0006c398) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfba1,	// (0x0006c398) cmail_ddmenu_btn02_pane_g

0x8d08,	// (0x000654ff) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x8d08,	// (0x000654ff) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfba6,	// (0x0006c39d) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfba6,	// (0x0006c39d) cmail_ddmenu_btn02_pane_t

0x950d,	// (0x00065d04) fps_text_pane_ParamLimits

0x950d,	// (0x00065d04) fps_text_pane

0x951a,	// (0x00065d11) main_fps_pane_g1_ParamLimits

0x951a,	// (0x00065d11) main_fps_pane_g1

0x9528,	// (0x00065d1f) wait_bar_pane_cp010_ParamLimits

0x9528,	// (0x00065d1f) wait_bar_pane_cp010

0x9534,	// (0x00065d2b) fps_text_pane_t1_ParamLimits

0x9534,	// (0x00065d2b) fps_text_pane_t1

0x617a,	// (0x00062971) cam4_image_uncrop_pane_g1

0x6183,	// (0x0006297a) cam4_image_uncrop_pane_g2

0x618c,	// (0x00062983) cam4_image_uncrop_pane_g3

0x6195,	// (0x0006298c) cam4_image_uncrop_pane_g4

0x0003,

0xf74b,	// (0x0006bf42) cam4_image_uncrop_pane_g

0x933c,	// (0x00065b33) dia3_listrow_pane_ParamLimits

0x980f,	// (0x00066006) main_phob2_pane

0x883a,	// (0x00065031) cell_tport_appsw_pane_cp02_ParamLimits

0x883a,	// (0x00065031) cell_tport_appsw_pane_cp02

0x8849,	// (0x00065040) cell_tport_appsw_pane_cp03_ParamLimits

0x8849,	// (0x00065040) cell_tport_appsw_pane_cp03

0x980f,	// (0x00066006) phob2_contact_card_pane

0x980f,	// (0x00066006) phob2_listscroll_pane

0xefa7,	// (0x0006b79e) phob2_list_pane

0xefaf,	// (0x0006b7a6) scroll_pane_cp034

0x954d,	// (0x00065d44) phob2_cc_data_pane_ParamLimits

0x954d,	// (0x00065d44) phob2_cc_data_pane

0x9567,	// (0x00065d5e) phob2_cc_listscroll_pane_ParamLimits

0x9567,	// (0x00065d5e) phob2_cc_listscroll_pane

0x9581,	// (0x00065d78) list_double_large_graphic_phob2_pane_ParamLimits

0x9581,	// (0x00065d78) list_double_large_graphic_phob2_pane

0x95a3,	// (0x00065d9a) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x95a3,	// (0x00065d9a) list_double_large_graphic_phob2_pane_g1

0x95b9,	// (0x00065db0) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x95b9,	// (0x00065db0) list_double_large_graphic_phob2_pane_g2

0x0001,

0xfc36,	// (0x0006c42d) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfc36,	// (0x0006c42d) list_double_large_graphic_phob2_pane_g

0x95c5,	// (0x00065dbc) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x95c5,	// (0x00065dbc) list_double_large_graphic_phob2_pane_t1

0x95db,	// (0x00065dd2) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x95db,	// (0x00065dd2) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfc3b,	// (0x0006c432) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfc3b,	// (0x0006c432) list_double_large_graphic_phob2_pane_t

0x980f,	// (0x00066006) list_highlight_pane_cp024

0x95f0,	// (0x00065de7) phob2_cc_button_pane

0x95f8,	// (0x00065def) phob2_cc_data_pane_g1_ParamLimits

0x95f8,	// (0x00065def) phob2_cc_data_pane_g1

0x9604,	// (0x00065dfb) phob2_cc_data_pane_g2_ParamLimits

0x9604,	// (0x00065dfb) phob2_cc_data_pane_g2

0x0001,

0xfc40,	// (0x0006c437) phob2_cc_data_pane_g_ParamLimits

0xfc40,	// (0x0006c437) phob2_cc_data_pane_g

0x9610,	// (0x00065e07) phob2_cc_data_pane_t1_ParamLimits

0x9610,	// (0x00065e07) phob2_cc_data_pane_t1

0x9622,	// (0x00065e19) phob2_cc_data_pane_t2_ParamLimits

0x9622,	// (0x00065e19) phob2_cc_data_pane_t2

0x9634,	// (0x00065e2b) phob2_cc_data_pane_t3_ParamLimits

0x9634,	// (0x00065e2b) phob2_cc_data_pane_t3

0x0002,

0xfc45,	// (0x0006c43c) phob2_cc_data_pane_t_ParamLimits

0xfc45,	// (0x0006c43c) phob2_cc_data_pane_t

0xefb7,	// (0x0006b7ae) phob2_cc_list_pane_ParamLimits

0xefb7,	// (0x0006b7ae) phob2_cc_list_pane

0xda88,	// (0x0006a27f) scroll_pane_cp035_ParamLimits

0xda88,	// (0x0006a27f) scroll_pane_cp035

0xa63e,	// (0x00066e35) bg_button_pane_cp033

0xefc3,	// (0x0006b7ba) phob2_cc_button_pane_g1

0xefcf,	// (0x0006b7c6) phob2_cc_button_pane_t1

0xefe4,	// (0x0006b7db) phob2_cc_button_pane_t2

0x0001,

0xfc4c,	// (0x0006c443) phob2_cc_button_pane_t

0x9646,	// (0x00065e3d) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9646,	// (0x00065e3d) list_double_large_graphic_phob2_cc_pane

0x9675,	// (0x00065e6c) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9675,	// (0x00065e6c) list_double_large_graphic_phob2_cc_pane_g1

0x9686,	// (0x00065e7d) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x9686,	// (0x00065e7d) list_double_large_graphic_phob2_cc_pane_g2

0x9695,	// (0x00065e8c) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x9695,	// (0x00065e8c) list_double_large_graphic_phob2_cc_pane_g3

0x96a4,	// (0x00065e9b) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x96a4,	// (0x00065e9b) list_double_large_graphic_phob2_cc_pane_g4

0x96b5,	// (0x00065eac) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x96b5,	// (0x00065eac) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfc51,	// (0x0006c448) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfc51,	// (0x0006c448) list_double_large_graphic_phob2_cc_pane_g

0x96c4,	// (0x00065ebb) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x96c4,	// (0x00065ebb) list_double_large_graphic_phob2_cc_pane_t1

0x96ed,	// (0x00065ee4) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x96ed,	// (0x00065ee4) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfc5c,	// (0x0006c453) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfc5c,	// (0x0006c453) list_double_large_graphic_phob2_cc_pane_t

0xeff6,	// (0x0006b7ed) list_highlight_pane_cp025_ParamLimits

0xeff6,	// (0x0006b7ed) list_highlight_pane_cp025

0xa63e,	// (0x00066e35) bg_button_pane_cp033_ParamLimits

0xefc3,	// (0x0006b7ba) phob2_cc_button_pane_g1_ParamLimits

0xefcf,	// (0x0006b7c6) phob2_cc_button_pane_t1_ParamLimits

0xefe4,	// (0x0006b7db) phob2_cc_button_pane_t2_ParamLimits

0xfc4c,	// (0x0006c443) phob2_cc_button_pane_t_ParamLimits

0x0fc9,	// (0x0005d7c0) popup_wgtman_window

0xd734,	// (0x00069f2b) scroll_pane_cp038

0x90cc,	// (0x000658c3) wgtman_btn_pane_cp_01_ParamLimits

0x90cc,	// (0x000658c3) wgtman_btn_pane_cp_01

0xf004,	// (0x0006b7fb) wgtman_content_pane

0xf00d,	// (0x0006b804) wgtman_heading_pane

0x980f,	// (0x00066006) bg_heading_pane_cp02

0xf016,	// (0x0006b80d) wgtman_heading_pane_g1

0xf01e,	// (0x0006b815) wgtman_heading_pane_t1

0xf02c,	// (0x0006b823) scroll_pane_cp036

0xf034,	// (0x0006b82b) wgtman_list_pane

0xe6f7,	// (0x0006aeee) wgtman_list_pane_t1_ParamLimits

0xe6f7,	// (0x0006aeee) wgtman_list_pane_t1

0x60d9,	// (0x000628d0) cam4_grid_pane

0x6e68,	// (0x0006365f) bg_button_pane_cp015_ParamLimits

0x6e7a,	// (0x00063671) bg_button_pane_cp016_ParamLimits

0x6e8d,	// (0x00063684) bg_button_pane_cp017_ParamLimits

0x6ee3,	// (0x000636da) popup_vitu2_query_window_g3_ParamLimits

0x6ee3,	// (0x000636da) popup_vitu2_query_window_g3

0x6f9e,	// (0x00063795) popup_vitu2_query_window_t6_ParamLimits

0x6f9e,	// (0x00063795) popup_vitu2_query_window_t6

0x6fc9,	// (0x000637c0) popup_vitu2_query_window_t7_ParamLimits

0x6fc9,	// (0x000637c0) popup_vitu2_query_window_t7

0xdf78,	// (0x0006a76f) cam4_grid_pane_g1

0xdf81,	// (0x0006a778) cam4_grid_pane_g2

0xf03c,	// (0x0006b833) cam4_grid_pane_g3

0xf045,	// (0x0006b83c) cam4_grid_pane_g4

0x0003,

0xfc61,	// (0x0006c458) cam4_grid_pane_g

0x1eb8,	// (0x0005e6af) aid_placing_vt_slider_lsc_ParamLimits

0x21f8,	// (0x0005e9ef) vidtel_button_pane_ParamLimits

0x21f8,	// (0x0005e9ef) vidtel_button_pane

0xf050,	// (0x0006b847) bg_button_pane_cp034

0x9716,	// (0x00065f0d) vidtel_button_pane_g1

0xf05a,	// (0x0006b851) vidtel_button_pane_t1

0xd848,	// (0x0006a03f) aid_size_vtel_slider_touch

0xda88,	// (0x0006a27f) scroll_pane_cp039

0xe153,	// (0x0006a94a) ncim_query_button_pane_cp01_ParamLimits

0xe172,	// (0x0006a969) ncimui_query_pane_g1_ParamLimits

0xa63e,	// (0x00066e35) input_focus_pane_cp012_ParamLimits

0xe197,	// (0x0006a98e) ncim_query_entry_pane_t1_ParamLimits

0xda88,	// (0x0006a27f) scroll_pane_cp039_ParamLimits

0xb218,	// (0x00067a0f) navi_pane_bcale_mc_g1

0xb220,	// (0x00067a17) navi_pane_bcale_mc_t1

0xe727,	// (0x0006af1e) main_sp_fs_email_pane_g1

0xe733,	// (0x0006af2a) main_sp_fs_email_pane_g2

0x0001,

0x09aa,	// (0x0005d1a1) main_sp_fs_email_pane_g

0xe984,	// (0x0006b17b) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe984,	// (0x0006b17b) list_single_cale_mrui_row_pane_g3

0x8d30,	// (0x00065527) list_single_recal_day_pane_g5_event_pane

0xa684,	// (0x00066e7b) list_single_recal_day_pane_g7

0xf068,	// (0x0006b85f) list_recal_day_event_pane_cp01

0xf071,	// (0x0006b868) list_recal_vselct_arw_lo_pane_cp01

0xf079,	// (0x0006b870) list_recal_vselct_arw_up_pane_cp01

0xf081,	// (0x0006b878) list_recal_vselct_pane_cp01

0xd86a,	// (0x0006a061) list_recal_day_event_pane_cp01_g1

0xa6b9,	// (0x00066eb0) list_recal_day_event_pane_cp01_t1

0xa68c,	// (0x00066e83) list_single_recal_day_pane_t1_ParamLimits

0xa69e,	// (0x00066e95) list_single_recal_day_pane_t2_ParamLimits

0xfbb6,	// (0x0006c3ad) list_single_recal_day_pane_t_ParamLimits

0xa5c3,	// (0x00066dba) bg_notes_pane_ParamLimits

0xa70e,	// (0x00066f05) list_notes_pane_ParamLimits

0x131e,	// (0x0005db15) scroll_pane_cp06_ParamLimits

0xa730,	// (0x00066f27) main_notes_pane_ParamLimits

0x980f,	// (0x00066006) main_welc_pane

0x971e,	// (0x00065f15) main_welc_body_pane_ParamLimits

0x971e,	// (0x00065f15) main_welc_body_pane

0x9737,	// (0x00065f2e) main_welc_opti_pane_ParamLimits

0x9737,	// (0x00065f2e) main_welc_opti_pane

0x976c,	// (0x00065f63) main_welc_pane_t1_ParamLimits

0x976c,	// (0x00065f63) main_welc_pane_t1

0x978a,	// (0x00065f81) main_welc_body_row_pane_ParamLimits

0x978a,	// (0x00065f81) main_welc_body_row_pane

0xdd11,	// (0x0006a508) main_welc_opti_row_pane_ParamLimits

0xdd11,	// (0x0006a508) main_welc_opti_row_pane

0xf08b,	// (0x0006b882) main_welc_opti_row_pane_g1

0x97b6,	// (0x00065fad) main_welc_opti_row_pane_t1

0xf093,	// (0x0006b88a) main_welc_body_row_pane_t1

0xed85,	// (0x0006b57c) popup_notif_wgt_heading_pane

0xed9f,	// (0x0006b596) aid_size_list_notif_wgt_del_ParamLimits

0xedac,	// (0x0006b5a3) list_notif_wgt_row_pane_g1_ParamLimits

0xedb8,	// (0x0006b5af) list_notif_wgt_row_pane_g2_ParamLimits

0xedcc,	// (0x0006b5c3) list_notif_wgt_row_pane_g3_ParamLimits

0x0b6e,	// (0x0005d365) list_notif_wgt_row_pane_g_ParamLimits

0xedd9,	// (0x0006b5d0) list_notif_wgt_row_pane_t1_ParamLimits

0xedef,	// (0x0006b5e6) list_notif_wgt_row_pane_t2_ParamLimits

0xee01,	// (0x0006b5f8) list_notif_wgt_row_pane_t3_ParamLimits

0x0b75,	// (0x0005d36c) list_notif_wgt_row_pane_t_ParamLimits

0x915f,	// (0x00065956) listrow_wgtman_pane_g1_ParamLimits

0x916c,	// (0x00065963) listrow_wgtman_pane_g2_ParamLimits

0xfbf4,	// (0x0006c3eb) listrow_wgtman_pane_g_ParamLimits

0x918a,	// (0x00065981) listrow_wgtman_pane_t1_ParamLimits

0x91a2,	// (0x00065999) listrow_wgtman_pane_t2_ParamLimits

0xfbf9,	// (0x0006c3f0) listrow_wgtman_pane_t_ParamLimits

0x91c8,	// (0x000659bf) wait_bar_pane_cp09_ParamLimits

0x980f,	// (0x00066006) bg_popup_heading_pane_cp02

0xf0a2,	// (0x0006b899) popup_notif_wgt_heading_pane_g1

0xf0aa,	// (0x0006b8a1) popup_notif_wgt_heading_pane_t1

0x980f,	// (0x00066006) main_vids_pane

0x980f,	// (0x00066006) vids_listscroll_pane

0x97c5,	// (0x00065fbc) scroll_pane_cp040

0x980f,	// (0x00066006) vids_list_pane

0x97d0,	// (0x00065fc7) vids_list_double_pane_ParamLimits

0x97d0,	// (0x00065fc7) vids_list_double_pane

0x97e8,	// (0x00065fdf) vids_list_double_pane_g1

0x97f1,	// (0x00065fe8) vids_list_double_pane_t1

0x9801,	// (0x00065ff8) vids_list_double_pane_t2

0x0001,

0xfc6f,	// (0x0006c466) vids_list_double_pane_t

0x41ea,	// (0x000609e1) main_ncimui_pane_ParamLimits

0x7c0b,	// (0x00064402) main_ncimui_pane_g1_ParamLimits

0x7c17,	// (0x0006440e) main_ncimui_pane_g2_ParamLimits

0x7c17,	// (0x0006440e) main_ncimui_pane_g2

0x0001,

0xfa20,	// (0x0006c217) main_ncimui_pane_g_ParamLimits

0xfa20,	// (0x0006c217) main_ncimui_pane_g

0x9752,	// (0x00065f49) main_welc_pane_g1_ParamLimits

0x9752,	// (0x00065f49) main_welc_pane_g1

0x975e,	// (0x00065f55) main_welc_pane_g2_ParamLimits

0x975e,	// (0x00065f55) main_welc_pane_g2

0x0001,

0xfc6a,	// (0x0006c461) main_welc_pane_g_ParamLimits

0xfc6a,	// (0x0006c461) main_welc_pane_g

0xa5c3,	// (0x00066dba) listscroll_mce_pane_ParamLimits

0xb38e,	// (0x00067b85) wait_bar_pane_cp10

0xc795,	// (0x00068f8c) main_cale_day_pane_ParamLimits

0xc795,	// (0x00068f8c) main_cale_week_pane_ParamLimits

0xa5c3,	// (0x00066dba) main_messa_pane_ParamLimits

0x54ff,	// (0x00061cf6) main_clock2_btn_pane_ParamLimits

0x54ff,	// (0x00061cf6) main_clock2_btn_pane

0xcf93,	// (0x0006978a) main_clock2_btn_pane_cp01_ParamLimits

0xcf93,	// (0x0006978a) main_clock2_btn_pane_cp01

0xe955,	// (0x0006b14c) list_cale_mrui_pane_ParamLimits

0xee45,	// (0x0006b63c) main_cf0_pane_g2

0x0001,

0x0b7c,	// (0x0005d373) main_cf0_pane_g

0x9359,	// (0x00065b50) area_left_week_number_pane_ParamLimits

0x936c,	// (0x00065b63) area_top_day_name_pane_ParamLimits

0x937a,	// (0x00065b71) frame_month_view_pane_ParamLimits

0xef6c,	// (0x0006b763) grid_month_view_pane_ParamLimits

0xef7a,	// (0x0006b771) frm_month_g1_ParamLimits

0x93f8,	// (0x00065bef) frm_month_g2_ParamLimits

0x9409,	// (0x00065c00) frm_month_g3_ParamLimits

0x941a,	// (0x00065c11) frm_month_g4_ParamLimits

0x942b,	// (0x00065c22) frm_month_g5_ParamLimits

0x943e,	// (0x00065c35) frm_month_g6_ParamLimits

0x9451,	// (0x00065c48) frm_month_g7_ParamLimits

0xef87,	// (0x0006b77e) frm_month_g8_ParamLimits

0x9464,	// (0x00065c5b) frm_month_g9_ParamLimits

0x9471,	// (0x00065c68) frm_month_g10_ParamLimits

0x947e,	// (0x00065c75) frm_month_g11_ParamLimits

0x948b,	// (0x00065c82) frm_month_g12_ParamLimits

0x9498,	// (0x00065c8f) frm_month_g13_ParamLimits

0x94a5,	// (0x00065c9c) frm_month_g14_ParamLimits

0x94b4,	// (0x00065cab) frm_month_g15_ParamLimits

0x94c3,	// (0x00065cba) frm_month_g16_ParamLimits

0xfc15,	// (0x0006c40c) frm_month_g_ParamLimits

0xef94,	// (0x0006b78b) cell_top_day_name_pane_t1_ParamLimits

0x94d2,	// (0x00065cc9) cell_area_left_week_number_pane_g1_ParamLimits

0x94e1,	// (0x00065cd8) cell_area_left_week_number_pane_t1_ParamLimits

0xce0b,	// (0x00069602) cell_month_view_pane_g1_ParamLimits

0x94f7,	// (0x00065cee) cell_month_view_pane_t1_ParamLimits

0xa5bb,	// (0x00066db2) main_clock2_btn_pane_g1

0xf0b8,	// (0x0006b8af) main_clock2_btn_pane_t1

0xa63e,	// (0x00066e35) listscroll_cmail_pane_ParamLimits

0xe727,	// (0x0006af1e) main_sp_fs_email_pane_g1_ParamLimits

0xe733,	// (0x0006af2a) main_sp_fs_email_pane_g2_ParamLimits

0x09aa,	// (0x0005d1a1) main_sp_fs_email_pane_g_ParamLimits

0xeaf3,	// (0x0006b2ea) list_recal_day_pane_ParamLimits

0xeb04,	// (0x0006b2fb) mian_recal_day_pane_t1

0x8590,	// (0x00064d87) list_single_dyc_row_text_pane_t4_ParamLimits

0x8590,	// (0x00064d87) list_single_dyc_row_text_pane_t4

0x85c7,	// (0x00064dbe) list_single_dyc_row_text_pane_t5_ParamLimits

0x85c7,	// (0x00064dbe) list_single_dyc_row_text_pane_t5

0xa0ed,	// (0x000668e4) list_single_dyc_row_text_pane_t6_ParamLimits

0xa0ed,	// (0x000668e4) list_single_dyc_row_text_pane_t6

0xacfa,	// (0x000674f1) aid_mgn_list_cale_time_pane

0x41ea,	// (0x000609e1) main_gallery2_pane_ParamLimits

0xcfa9,	// (0x000697a0) main_clock2_pane_cp01_t1

0xcfb7,	// (0x000697ae) main_clock2_pane_cp01_t3

0x0001,

0x0489,	// (0x0005cc80) main_clock2_pane_cp01_t

0x1769,	// (0x0005df60) cale_week_scroll_pane_g16_ParamLimits

0x1769,	// (0x0005df60) cale_week_scroll_pane_g16
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

} // end of namespace AknLayoutScalable_Abrw_pnp4_apps_nhd4_prt_tch_Small
