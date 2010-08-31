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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pqp_apps_qvga_prt + 0x00014561 };

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
0x87df,	// (0x0001cd40) Screen

0x87e9,	// (0x0001cd4a) application_window

0x881b,	// (0x0001cd7c) area_bottom_pane_ParamLimits

0x881b,	// (0x0001cd7c) area_bottom_pane

0x884a,	// (0x0001cdab) area_top_pane_ParamLimits

0x884a,	// (0x0001cdab) area_top_pane

0x10a4,	// (0x00015605) call_video_uplink_pane_ParamLimits

0x10a4,	// (0x00015605) call_video_uplink_pane

0x88cd,	// (0x0001ce2e) main_pane_ParamLimits

0x88cd,	// (0x0001ce2e) main_pane

0x3bcf,	// (0x00018130) context_pane

0xade1,	// (0x0001f342) navi_pane

0xadfb,	// (0x0001f35c) popup_cale_events_window_ParamLimits

0xadfb,	// (0x0001f35c) popup_cale_events_window

0x3be2,	// (0x00018143) popup_mup_playback_window

0xae12,	// (0x0001f373) signal_pane

0x182b,	// (0x00015d8c) main_browser_pane

0x2690,	// (0x00016bf1) main_burst_pane

0x4383,	// (0x000188e4) main_calc_pane

0x2690,	// (0x00016bf1) main_cale_day_pane

0x19f3,	// (0x00015f54) main_cale_month_pane

0x2690,	// (0x00016bf1) main_cale_week_pane

0x2690,	// (0x00016bf1) main_call_pane

0x14df,	// (0x00015a40) main_call_poc_pane

0x2690,	// (0x00016bf1) main_camera_pane

0x2690,	// (0x00016bf1) main_chi_dic_pane

0x248f,	// (0x000169f0) main_clock_pane

0x14df,	// (0x00015a40) main_fmradio_pane

0x2690,	// (0x00016bf1) main_graph_messa_pane

0x14df,	// (0x00015a40) main_help_pane

0x182b,	// (0x00015d8c) main_im_pane

0x173a,	// (0x00015c9b) main_image_pane_ParamLimits

0x173a,	// (0x00015c9b) main_image_pane

0x14df,	// (0x00015a40) main_location2_pane

0x2690,	// (0x00016bf1) main_location_pane

0x14df,	// (0x00015a40) main_messa_pane

0x14df,	// (0x00015a40) main_mp2_pane

0x2690,	// (0x00016bf1) main_mp_pane

0x14df,	// (0x00015a40) main_msg_pane

0x14df,	// (0x00015a40) main_mup_eq_pane

0x14df,	// (0x00015a40) main_mup_pane

0x2690,	// (0x00016bf1) main_notes_pane

0x14df,	// (0x00015a40) main_pec_pane

0x14df,	// (0x00015a40) main_phob_pane

0x14df,	// (0x00015a40) main_pinb_pane

0x14df,	// (0x00015a40) main_postcard_pane

0x14df,	// (0x00015a40) main_qdial_pane

0x2690,	// (0x00016bf1) main_skin_pane

0x14df,	// (0x00015a40) main_smil2_pane

0x2690,	// (0x00016bf1) main_smil_pane

0x2690,	// (0x00016bf1) main_video_pane

0x2690,	// (0x00016bf1) main_video_tele_pane

0x173a,	// (0x00015c9b) main_viewer_pane_ParamLimits

0x173a,	// (0x00015c9b) main_viewer_pane

0x2690,	// (0x00016bf1) main_vorec_pane

0xad13,	// (0x0001f274) popup_blid_sat_info_window_ParamLimits

0xad13,	// (0x0001f274) popup_blid_sat_info_window

0xad27,	// (0x0001f288) popup_dyc_status_message_window_ParamLimits

0xad27,	// (0x0001f288) popup_dyc_status_message_window

0xad33,	// (0x0001f294) popup_grid_large_graphic_window_ParamLimits

0xad33,	// (0x0001f294) popup_grid_large_graphic_window

0xad8b,	// (0x0001f2ec) popup_loc_request_window_ParamLimits

0xad8b,	// (0x0001f2ec) popup_loc_request_window

0xadbb,	// (0x0001f31c) popup_wml_address_window_ParamLimits

0xadbb,	// (0x0001f31c) popup_wml_address_window

0xabf8,	// (0x0001f159) call_muted_g1

0xa933,	// (0x0001ee94) popup_call_audio_conf_window_ParamLimits

0xa933,	// (0x0001ee94) popup_call_audio_conf_window

0xac08,	// (0x0001f169) popup_call_audio_first_window_ParamLimits

0xac08,	// (0x0001f169) popup_call_audio_first_window

0xac3c,	// (0x0001f19d) popup_call_audio_in_window_ParamLimits

0xac3c,	// (0x0001f19d) popup_call_audio_in_window

0xac58,	// (0x0001f1b9) popup_call_audio_out_window_ParamLimits

0xac58,	// (0x0001f1b9) popup_call_audio_out_window

0xac74,	// (0x0001f1d5) popup_call_audio_second_window_ParamLimits

0xac74,	// (0x0001f1d5) popup_call_audio_second_window

0xac9c,	// (0x0001f1fd) popup_call_audio_wait_window_ParamLimits

0xac9c,	// (0x0001f1fd) popup_call_audio_wait_window

0xacbb,	// (0x0001f21c) popup_number_entry_window_ParamLimits

0xacbb,	// (0x0001f21c) popup_number_entry_window

0x10ce,	// (0x0001562f) bg_popup_call_pane_cp05_ParamLimits

0x10ce,	// (0x0001562f) bg_popup_call_pane_cp05

0x10ee,	// (0x0001564f) popup_number_entry_window_t1

0x1101,	// (0x00015662) popup_number_entry_window_t2

0x1113,	// (0x00015674) popup_number_entry_window_t3

0x0003,

0xf0ec,	// (0x0002364d) popup_number_entry_window_t

0x1125,	// (0x00015686) text_title_cp2

0x1138,	// (0x00015699) bg_popup_call_pane_cp_ParamLimits

0x1138,	// (0x00015699) bg_popup_call_pane_cp

0x1146,	// (0x000156a7) call_thumbnail_pane

0x114e,	// (0x000156af) popup_call_audio_in_window_g1_ParamLimits

0x114e,	// (0x000156af) popup_call_audio_in_window_g1

0x115a,	// (0x000156bb) popup_call_audio_in_window_g2_ParamLimits

0x115a,	// (0x000156bb) popup_call_audio_in_window_g2

0x1166,	// (0x000156c7) popup_call_audio_in_window_g3_ParamLimits

0x1166,	// (0x000156c7) popup_call_audio_in_window_g3

0x0002,

0xf0f5,	// (0x00023656) popup_call_audio_in_window_g_ParamLimits

0xf0f5,	// (0x00023656) popup_call_audio_in_window_g

0x1172,	// (0x000156d3) popup_call_audio_in_window_t1_ParamLimits

0x1172,	// (0x000156d3) popup_call_audio_in_window_t1

0x118d,	// (0x000156ee) popup_call_audio_in_window_t2_ParamLimits

0x118d,	// (0x000156ee) popup_call_audio_in_window_t2

0x11a8,	// (0x00015709) popup_call_audio_in_window_t3_ParamLimits

0x11a8,	// (0x00015709) popup_call_audio_in_window_t3

0x0002,

0xf0fc,	// (0x0002365d) popup_call_audio_in_window_t_ParamLimits

0xf0fc,	// (0x0002365d) popup_call_audio_in_window_t

0x1138,	// (0x00015699) bg_popup_call_pane_cp01_ParamLimits

0x1138,	// (0x00015699) bg_popup_call_pane_cp01

0x1146,	// (0x000156a7) call_thumbnail_pane_cp02

0x11bb,	// (0x0001571c) call_type_pane_cp022

0x11c3,	// (0x00015724) popup_call_audio_out_window_g1_ParamLimits

0x11c3,	// (0x00015724) popup_call_audio_out_window_g1

0x11d5,	// (0x00015736) popup_call_audio_out_window_g2_ParamLimits

0x11d5,	// (0x00015736) popup_call_audio_out_window_g2

0x11e1,	// (0x00015742) popup_call_audio_out_window_g3_ParamLimits

0x11e1,	// (0x00015742) popup_call_audio_out_window_g3

0x0002,

0xf103,	// (0x00023664) popup_call_audio_out_window_g_ParamLimits

0xf103,	// (0x00023664) popup_call_audio_out_window_g

0x11f3,	// (0x00015754) popup_call_audio_out_window_t1_ParamLimits

0x11f3,	// (0x00015754) popup_call_audio_out_window_t1

0x120b,	// (0x0001576c) popup_call_audio_out_window_t2_ParamLimits

0x120b,	// (0x0001576c) popup_call_audio_out_window_t2

0x0001,

0xf10a,	// (0x0002366b) popup_call_audio_out_window_t_ParamLimits

0xf10a,	// (0x0002366b) popup_call_audio_out_window_t

0x1220,	// (0x00015781) bg_popup_call_pane_ParamLimits

0x1220,	// (0x00015781) bg_popup_call_pane

0x8a7e,	// (0x0001cfdf) call_thumbnail_pane_cp_ParamLimits

0x8a7e,	// (0x0001cfdf) call_thumbnail_pane_cp

0x12a4,	// (0x00015805) call_type_pane_cp01_ParamLimits

0x12a4,	// (0x00015805) call_type_pane_cp01

0x12e8,	// (0x00015849) popup_call_audio_first_window_g1_ParamLimits

0x12e8,	// (0x00015849) popup_call_audio_first_window_g1

0x1334,	// (0x00015895) popup_call_audio_first_window_g2_ParamLimits

0x1334,	// (0x00015895) popup_call_audio_first_window_g2

0x0001,

0xf10f,	// (0x00023670) popup_call_audio_first_window_g_ParamLimits

0xf10f,	// (0x00023670) popup_call_audio_first_window_g

0x1378,	// (0x000158d9) popup_call_audio_first_window_t1_ParamLimits

0x1378,	// (0x000158d9) popup_call_audio_first_window_t1

0x1424,	// (0x00015985) popup_call_audio_first_window_t4_ParamLimits

0x1424,	// (0x00015985) popup_call_audio_first_window_t4

0x14b0,	// (0x00015a11) popup_call_audio_first_window_t5_ParamLimits

0x14b0,	// (0x00015a11) popup_call_audio_first_window_t5

0x0002,

0xf114,	// (0x00023675) popup_call_audio_first_window_t_ParamLimits

0xf114,	// (0x00023675) popup_call_audio_first_window_t

0x14df,	// (0x00015a40) bg_popup_call_pane_cp02

0x14e9,	// (0x00015a4a) call_type_pane_cp023

0x14f1,	// (0x00015a52) popup_call_audio_wait_window_g1

0x14f9,	// (0x00015a5a) popup_call_audio_wait_window_g2

0x0001,

0xf11b,	// (0x0002367c) popup_call_audio_wait_window_g

0x1501,	// (0x00015a62) popup_call_audio_wait_window_t3

0x150f,	// (0x00015a70) bg_popup_call_pane_cp03_ParamLimits

0x150f,	// (0x00015a70) bg_popup_call_pane_cp03

0x156f,	// (0x00015ad0) call_thumbnail_pane_cp011_ParamLimits

0x156f,	// (0x00015ad0) call_thumbnail_pane_cp011

0x157b,	// (0x00015adc) call_type_pane_cp034_ParamLimits

0x157b,	// (0x00015adc) call_type_pane_cp034

0x15b7,	// (0x00015b18) popup_call_audio_second_window_g1_ParamLimits

0x15b7,	// (0x00015b18) popup_call_audio_second_window_g1

0x15f3,	// (0x00015b54) popup_call_audio_second_window_g2_ParamLimits

0x15f3,	// (0x00015b54) popup_call_audio_second_window_g2

0x0001,

0xf120,	// (0x00023681) popup_call_audio_second_window_g_ParamLimits

0xf120,	// (0x00023681) popup_call_audio_second_window_g

0x162f,	// (0x00015b90) popup_call_audio_second_window_t1_ParamLimits

0x162f,	// (0x00015b90) popup_call_audio_second_window_t1

0x16b0,	// (0x00015c11) popup_call_audio_second_window_t2_ParamLimits

0x16b0,	// (0x00015c11) popup_call_audio_second_window_t2

0x16e6,	// (0x00015c47) popup_call_audio_second_window_t3_ParamLimits

0x16e6,	// (0x00015c47) popup_call_audio_second_window_t3

0x0002,

0xf125,	// (0x00023686) popup_call_audio_second_window_t_ParamLimits

0xf125,	// (0x00023686) popup_call_audio_second_window_t

0x14df,	// (0x00015a40) bg_popup_call_pane_cp04

0x171c,	// (0x00015c7d) list_conf_pane

0x1724,	// (0x00015c85) popup_call_audio_conf_window_t1

0x1732,	// (0x00015c93) call_thumbnail_pane_g1

0x173a,	// (0x00015c9b) bg_pinb_pane_ParamLimits

0x173a,	// (0x00015c9b) bg_pinb_pane

0x1748,	// (0x00015ca9) find_pinb_pane

0x1751,	// (0x00015cb2) listscroll_pinb_pane_ParamLimits

0x1751,	// (0x00015cb2) listscroll_pinb_pane

0x1760,	// (0x00015cc1) pinb_bg_pane_g1

0x8aa2,	// (0x0001d003) pinb_bg_pane_g2

0x8aac,	// (0x0001d00d) pinb_bg_pane_g3

0x8ab6,	// (0x0001d017) pinb_bg_pane_g4

0x8ac0,	// (0x0001d021) pinb_bg_pane_g5

0x8aca,	// (0x0001d02b) pinb_bg_pane_g6

0x8ad5,	// (0x0001d036) pinb_bg_pane_g7

0x8ae0,	// (0x0001d041) pinb_bg_pane_g8

0x8ae9,	// (0x0001d04a) pinb_bg_pane_g9

0x8af1,	// (0x0001d052) pinb_bg_pane_g10

0x0009,

0xf12c,	// (0x0002368d) pinb_bg_pane_g

0x8b0e,	// (0x0001d06f) grid_pinb_pane

0x8b17,	// (0x0001d078) list_pinb_pane

0x8b22,	// (0x0001d083) scroll_pane_cp01_ParamLimits

0x8b22,	// (0x0001d083) scroll_pane_cp01

0x176a,	// (0x00015ccb) find_pinb_pane_g1_ParamLimits

0x176a,	// (0x00015ccb) find_pinb_pane_g1

0x1782,	// (0x00015ce3) find_pinb_pane_t1

0x1794,	// (0x00015cf5) find_pinb_pane_t2

0x0001,

0xf146,	// (0x000236a7) find_pinb_pane_t

0x17a9,	// (0x00015d0a) input_focus_pane_cp01_ParamLimits

0x17a9,	// (0x00015d0a) input_focus_pane_cp01

0x8b32,	// (0x0001d093) cell_pinb_pane_ParamLimits

0x8b32,	// (0x0001d093) cell_pinb_pane

0x8b4b,	// (0x0001d0ac) cell_pinb_pane_g1_ParamLimits

0x8b4b,	// (0x0001d0ac) cell_pinb_pane_g1

0x8b5f,	// (0x0001d0c0) cell_pinb_pane_g2_ParamLimits

0x8b5f,	// (0x0001d0c0) cell_pinb_pane_g2

0x17b5,	// (0x00015d16) cell_pinb_pane_g3_ParamLimits

0x17b5,	// (0x00015d16) cell_pinb_pane_g3

0x0002,

0xf14b,	// (0x000236ac) cell_pinb_pane_g_ParamLimits

0xf14b,	// (0x000236ac) cell_pinb_pane_g

0x14df,	// (0x00015a40) grid_highlight_pane_cp01

0x8b6b,	// (0x0001d0cc) list_pinb_item_pane_ParamLimits

0x8b6b,	// (0x0001d0cc) list_pinb_item_pane

0x14df,	// (0x00015a40) list_highlight_pane_cp02

0x8b80,	// (0x0001d0e1) list_pinb_item_pane_g1_ParamLimits

0x8b80,	// (0x0001d0e1) list_pinb_item_pane_g1

0x8b8d,	// (0x0001d0ee) list_pinb_item_pane_g2_ParamLimits

0x8b8d,	// (0x0001d0ee) list_pinb_item_pane_g2

0x8b99,	// (0x0001d0fa) list_pinb_item_pane_g3_ParamLimits

0x8b99,	// (0x0001d0fa) list_pinb_item_pane_g3

0x8ba8,	// (0x0001d109) list_pinb_item_pane_g4_ParamLimits

0x8ba8,	// (0x0001d109) list_pinb_item_pane_g4

0x0003,

0xf152,	// (0x000236b3) list_pinb_item_pane_g_ParamLimits

0xf152,	// (0x000236b3) list_pinb_item_pane_g

0x8bb4,	// (0x0001d115) list_pinb_item_pane_t1_ParamLimits

0x8bb4,	// (0x0001d115) list_pinb_item_pane_t1

0x7442,	// (0x0001b9a3) calc_display_pane

0x745a,	// (0x0001b9bb) calc_paper_pane

0x7476,	// (0x0001b9d7) grid_calc_pane

0x14df,	// (0x00015a40) bg_list_pane_cp01

0x8bcb,	// (0x0001d12c) clock_g1

0x8bd3,	// (0x0001d134) clock_g2

0x0001,

0xf15b,	// (0x000236bc) clock_g

0x8bdb,	// (0x0001d13c) clock_t1_ParamLimits

0x8bdb,	// (0x0001d13c) clock_t1

0x8bf0,	// (0x0001d151) clock_t2_ParamLimits

0x8bf0,	// (0x0001d151) clock_t2

0x8c02,	// (0x0001d163) clock_t3_ParamLimits

0x8c02,	// (0x0001d163) clock_t3

0x8c14,	// (0x0001d175) clock_t4_ParamLimits

0x8c14,	// (0x0001d175) clock_t4

0x8c26,	// (0x0001d187) clock_t5_ParamLimits

0x8c26,	// (0x0001d187) clock_t5

0x8c3b,	// (0x0001d19c) clock_t6_ParamLimits

0x8c3b,	// (0x0001d19c) clock_t6

0x8c4d,	// (0x0001d1ae) clock_t7_ParamLimits

0x8c4d,	// (0x0001d1ae) clock_t7

0x8c5f,	// (0x0001d1c0) clock_t8_ParamLimits

0x8c5f,	// (0x0001d1c0) clock_t8

0x8c71,	// (0x0001d1d2) clock_t9_ParamLimits

0x8c71,	// (0x0001d1d2) clock_t9

0x0008,

0xf160,	// (0x000236c1) clock_t_ParamLimits

0xf160,	// (0x000236c1) clock_t

0x17c9,	// (0x00015d2a) popup_clock_analogue_window_cp02

0x17c9,	// (0x00015d2a) popup_clock_digital_window_cp01

0x17d1,	// (0x00015d32) listscroll_help_pane

0x14df,	// (0x00015a40) phob_pre_status_pane

0x17db,	// (0x00015d3c) grid_qdial_pane

0x14df,	// (0x00015a40) listscroll_mce_pane

0x17e5,	// (0x00015d46) bg_notes_pane

0x17ef,	// (0x00015d50) list_notes_pane

0x8c83,	// (0x0001d1e4) scroll_pane_cp06

0x17f9,	// (0x00015d5a) bg_calc_paper_pane

0x74a0,	// (0x0001ba01) list_calc_pane

0x182b,	// (0x00015d8c) bg_calc_display_pane

0x74ba,	// (0x0001ba1b) calc_display_pane_t1

0x74cf,	// (0x0001ba30) calc_display_pane_t2

0x74e4,	// (0x0001ba45) calc_display_pane_t3

0x0002,

0xf173,	// (0x000236d4) calc_display_pane_t

0x74f6,	// (0x0001ba57) cell_calc_pane_ParamLimits

0x74f6,	// (0x0001ba57) cell_calc_pane

0x1873,	// (0x00015dd4) bg_calc_paper_pane_g1

0x188b,	// (0x00015dec) bg_calc_paper_pane_g2

0x187f,	// (0x00015de0) bg_calc_paper_pane_g3

0x18a3,	// (0x00015e04) bg_calc_paper_pane_g4

0x1897,	// (0x00015df8) bg_calc_paper_pane_g5

0x8c8c,	// (0x0001d1ed) bg_calc_paper_pane_g6

0x8c9b,	// (0x0001d1fc) bg_calc_paper_pane_g7

0x8caa,	// (0x0001d20b) bg_calc_paper_pane_g8

0x0007,

0xf17a,	// (0x000236db) bg_calc_paper_pane_g

0x8cb9,	// (0x0001d21a) calc_bg_paper_pane_g9

0x8cc8,	// (0x0001d229) list_calc_item_pane_ParamLimits

0x8cc8,	// (0x0001d229) list_calc_item_pane

0x18af,	// (0x00015e10) list_calc_item_pane_g1

0x751d,	// (0x0001ba7e) list_calc_item_pane_t1_ParamLimits

0x751d,	// (0x0001ba7e) list_calc_item_pane_t1

0x752f,	// (0x0001ba90) list_calc_item_pane_t2_ParamLimits

0x752f,	// (0x0001ba90) list_calc_item_pane_t2

0x0001,

0xf18b,	// (0x000236ec) list_calc_item_pane_t_ParamLimits

0xf18b,	// (0x000236ec) list_calc_item_pane_t

0x18ce,	// (0x00015e2f) cell_calc_pane_g1

0x18d8,	// (0x00015e39) grid_highlight_pane_cp02

0x190d,	// (0x00015e6e) bg_calc_display_pane_g1

0x755d,	// (0x0001babe) bg_calc_display_pane_g2

0x18fa,	// (0x00015e5b) bg_calc_display_pane_g3

0x0002,

0xf195,	// (0x000236f6) bg_calc_display_pane_g

0x7567,	// (0x0001bac8) cell_qdial_pane_ParamLimits

0x7567,	// (0x0001bac8) cell_qdial_pane

0x8ce1,	// (0x0001d242) cell_qdial_pane_g1_ParamLimits

0x8ce1,	// (0x0001d242) cell_qdial_pane_g1

0x8cee,	// (0x0001d24f) cell_qdial_pane_g2_ParamLimits

0x8cee,	// (0x0001d24f) cell_qdial_pane_g2

0x1916,	// (0x00015e77) cell_qdial_pane_g3_ParamLimits

0x1916,	// (0x00015e77) cell_qdial_pane_g3

0x0003,

0xf19c,	// (0x000236fd) cell_qdial_pane_g_ParamLimits

0xf19c,	// (0x000236fd) cell_qdial_pane_g

0x8d0c,	// (0x0001d26d) cell_qdial_pane_t1_ParamLimits

0x8d0c,	// (0x0001d26d) cell_qdial_pane_t1

0x8d24,	// (0x0001d285) cell_qdial_pane_t2_ParamLimits

0x8d24,	// (0x0001d285) cell_qdial_pane_t2

0x8d37,	// (0x0001d298) cell_qdial_pane_t3_ParamLimits

0x8d37,	// (0x0001d298) cell_qdial_pane_t3

0x0002,

0xf1a5,	// (0x00023706) cell_qdial_pane_t_ParamLimits

0xf1a5,	// (0x00023706) cell_qdial_pane_t

0x14df,	// (0x00015a40) grid_highlight_pane_cp04

0x1922,	// (0x00015e83) thumbnail_qdial_pane_ParamLimits

0x1922,	// (0x00015e83) thumbnail_qdial_pane

0x197e,	// (0x00015edf) list_help_pane

0x1988,	// (0x00015ee9) scroll_pane_cp02

0x8d4a,	// (0x0001d2ab) help_list_pane_t1_ParamLimits

0x8d4a,	// (0x0001d2ab) help_list_pane_t1

0x7579,	// (0x0001bada) bg_notes_pane_g2

0x7581,	// (0x0001bae2) bg_notes_pane_g3

0x7589,	// (0x0001baea) notes_bg_pane_g1

0x7591,	// (0x0001baf2) notes_bg_pane_g4

0x7599,	// (0x0001bafa) notes_bg_pane_g5

0x75a1,	// (0x0001bb02) notes_bg_pane_g6

0x75a9,	// (0x0001bb0a) notes_bg_pane_g7

0x75b1,	// (0x0001bb12) notes_bg_pane_g8

0x75b9,	// (0x0001bb1a) notes_bg_pane_g9

0x0006,

0xf1c3,	// (0x00023724) notes_bg_pane_g

0x8d68,	// (0x0001d2c9) list_notes_text_pane_ParamLimits

0x8d68,	// (0x0001d2c9) list_notes_text_pane

0x19d9,	// (0x00015f3a) list_notes_text_pane_g1

0x8d7e,	// (0x0001d2df) list_notes_text_pane_t1

0x19f3,	// (0x00015f54) listscroll_cale_week_pane

0x8da7,	// (0x0001d308) bg_cale_heading_pane

0x1a02,	// (0x00015f63) bg_cale_pane_cp01

0x8dbb,	// (0x0001d31c) cale_week_corner_pane

0x8dd1,	// (0x0001d332) cale_week_day_heading_pane

0x8de5,	// (0x0001d346) cale_week_scroll_pane_g1

0x8df6,	// (0x0001d357) cale_week_scroll_pane_g2

0x8e07,	// (0x0001d368) cale_week_scroll_pane_g3

0x8e18,	// (0x0001d379) cale_week_scroll_pane_g4

0x8e29,	// (0x0001d38a) cale_week_scroll_pane_g5

0x8e3a,	// (0x0001d39b) cale_week_scroll_pane_g6

0x8e4b,	// (0x0001d3ac) cale_week_scroll_pane_g7

0x8e5c,	// (0x0001d3bd) cale_week_scroll_pane_g8

0x8e6d,	// (0x0001d3ce) cale_week_scroll_pane_g9

0x8e7e,	// (0x0001d3df) cale_week_scroll_pane_g10

0x8e8f,	// (0x0001d3f0) cale_week_scroll_pane_g11

0x8ea0,	// (0x0001d401) cale_week_scroll_pane_g12

0x8eb1,	// (0x0001d412) cale_week_scroll_pane_g13

0x8ec2,	// (0x0001d423) cale_week_scroll_pane_g14

0x8ed3,	// (0x0001d434) cale_week_scroll_pane_g15

0x000e,

0xf1d2,	// (0x00023733) cale_week_scroll_pane_g

0x8ee4,	// (0x0001d445) cale_week_time_pane

0x8ef5,	// (0x0001d456) grid_cale_week_pane

0x8f08,	// (0x0001d469) scroll_pane_cp08

0x8f20,	// (0x0001d481) cell_cale_week_pane_ParamLimits

0x8f20,	// (0x0001d481) cell_cale_week_pane

0x8f5c,	// (0x0001d4bd) cale_week_day_heading_pane_t1

0x8f75,	// (0x0001d4d6) cale_week_day_heading_pane_t2

0x8f8e,	// (0x0001d4ef) cale_week_day_heading_pane_t3

0x8fa7,	// (0x0001d508) cale_week_day_heading_pane_t4

0x8fc0,	// (0x0001d521) cale_week_day_heading_pane_t5

0x8fd9,	// (0x0001d53a) cale_week_day_heading_pane_t6

0x8ff2,	// (0x0001d553) cale_week_day_heading_pane_t7

0x0006,

0xf1f1,	// (0x00023752) cale_week_day_heading_pane_t

0x1a2d,	// (0x00015f8e) bg_cale_side_pane

0x75c1,	// (0x0001bb22) cale_week_time_pane_t1

0x75ed,	// (0x0001bb4e) cale_week_time_pane_t2

0x7619,	// (0x0001bb7a) cale_week_time_pane_t3

0x7645,	// (0x0001bba6) cale_week_time_pane_t4

0x7671,	// (0x0001bbd2) cale_week_time_pane_t5

0x769d,	// (0x0001bbfe) cale_week_time_pane_t6

0x76c9,	// (0x0001bc2a) cale_week_time_pane_t7

0x76f5,	// (0x0001bc56) cale_week_time_pane_t8

0x0007,

0xf200,	// (0x00023761) cale_week_time_pane_t

0x900b,	// (0x0001d56c) cell_cale_week_pane_g2

0x9027,	// (0x0001d588) cell_cale_week_pane_g3_ParamLimits

0x9027,	// (0x0001d588) cell_cale_week_pane_g3

0x1a3b,	// (0x00015f9c) grid_highlight_pane_cp07

0x1a43,	// (0x00015fa4) listscroll_gms_pane

0x1a4d,	// (0x00015fae) grid_gms_pane

0x1a56,	// (0x00015fb7) listscroll_gms_pane_g1

0x1a5e,	// (0x00015fbf) listscroll_gms_pane_g2

0x0001,

0xf211,	// (0x00023772) listscroll_gms_pane_g

0x903f,	// (0x0001d5a0) scroll_pane_cp010

0x9048,	// (0x0001d5a9) cell_gms_pane_ParamLimits

0x9048,	// (0x0001d5a9) cell_gms_pane

0x9059,	// (0x0001d5ba) cell_gms_pane_g1

0x1a66,	// (0x00015fc7) cell_gms_pane_g2

0x19d9,	// (0x00015f3a) cell_gms_pane_g3

0x1a6e,	// (0x00015fcf) cell_gms_pane_g4

0x0003,

0xf216,	// (0x00023777) cell_gms_pane_g

0x1a77,	// (0x00015fd8) grid_highlight_pane_cp09

0xaba6,	// (0x0001f107) phob_pre_status_pane_g1

0xabae,	// (0x0001f10f) phob_pre_status_pane_g2

0xabb6,	// (0x0001f117) phob_pre_status_pane_g3

0xabbe,	// (0x0001f11f) phob_pre_status_pane_g4

0x0004,

0xf618,	// (0x00023b79) phob_pre_status_pane_g

0xabce,	// (0x0001f12f) phob_pre_status_pane_t1

0xabdc,	// (0x0001f13d) phob_pre_status_pane_t2

0xabea,	// (0x0001f14b) phob_pre_status_pane_t3

0x0002,

0xf623,	// (0x00023b84) phob_pre_status_pane_t

0x14df,	// (0x00015a40) bg_list_pane_cp05

0x7729,	// (0x0001bc8a) grid_vorec_pane

0x7731,	// (0x0001bc92) vorec_t1

0x773f,	// (0x0001bca0) vorec_t2

0x774d,	// (0x0001bcae) vorec_t3

0x775b,	// (0x0001bcbc) vorec_t4

0x7769,	// (0x0001bcca) vorec_t5

0x7777,	// (0x0001bcd8) vorec_t6

0x0006,

0xf21f,	// (0x00023780) vorec_t

0x7793,	// (0x0001bcf4) wait_bar_pane_cp01

0x2a9f,	// (0x00017000) cell_vorec_pane_ParamLimits

0x2a9f,	// (0x00017000) cell_vorec_pane

0x1ae9,	// (0x0001604a) cell_vorec_pane_g1

0x14df,	// (0x00015a40) grid_highlight_pane_cp05

0x906d,	// (0x0001d5ce) cams_zoom_pane

0x9079,	// (0x0001d5da) image_vga_pane

0x9086,	// (0x0001d5e7) main_camera_pane_g1

0x9092,	// (0x0001d5f3) main_camera_pane_g2

0x909e,	// (0x0001d5ff) main_camera_pane_g3

0x90aa,	// (0x0001d60b) main_camera_pane_g4

0x90b6,	// (0x0001d617) main_camera_pane_g5

0x90c2,	// (0x0001d623) main_camera_pane_g6

0x90ce,	// (0x0001d62f) main_camera_pane_g7

0x0007,

0xf22e,	// (0x0002378f) main_camera_pane_g

0x90da,	// (0x0001d63b) main_camera_pane_t1

0x90ec,	// (0x0001d64d) main_camera_pane_t2

0x0001,

0xf23f,	// (0x000237a0) main_camera_pane_t

0x9110,	// (0x0001d671) cams_zoom_pane_cp_ParamLimits

0x9110,	// (0x0001d671) cams_zoom_pane_cp

0x9134,	// (0x0001d695) image_cif_pane_ParamLimits

0x9134,	// (0x0001d695) image_cif_pane

0x914e,	// (0x0001d6af) image_subqcif_pane

0x9156,	// (0x0001d6b7) main_video_pane_g1_ParamLimits

0x9156,	// (0x0001d6b7) main_video_pane_g1

0x9176,	// (0x0001d6d7) main_video_pane_g2_ParamLimits

0x9176,	// (0x0001d6d7) main_video_pane_g2

0x91a4,	// (0x0001d705) main_video_pane_g3_ParamLimits

0x91a4,	// (0x0001d705) main_video_pane_g3

0x91cd,	// (0x0001d72e) main_video_pane_g4_ParamLimits

0x91cd,	// (0x0001d72e) main_video_pane_g4

0x91f6,	// (0x0001d757) main_video_pane_g5_ParamLimits

0x91f6,	// (0x0001d757) main_video_pane_g5

0x1aff,	// (0x00016060) main_video_pane_g6_ParamLimits

0x1aff,	// (0x00016060) main_video_pane_g6

0x0006,

0xf244,	// (0x000237a5) main_video_pane_g_ParamLimits

0xf244,	// (0x000237a5) main_video_pane_g

0x9218,	// (0x0001d779) main_video_pane_t1_ParamLimits

0x9218,	// (0x0001d779) main_video_pane_t1

0x1b19,	// (0x0001607a) cams_zoom_pane_g1

0x1b22,	// (0x00016083) cams_zoom_pane_g2

0x1b2b,	// (0x0001608c) cams_zoom_pane_g3

0x1b34,	// (0x00016095) cams_zoom_pane_g4

0x0003,

0xf253,	// (0x000237b4) cams_zoom_pane_g

0x9262,	// (0x0001d7c3) grid_cams_pane

0x926e,	// (0x0001d7cf) linegrid_cams_pane

0x927a,	// (0x0001d7db) cell_cams_pane_ParamLimits

0x927a,	// (0x0001d7db) cell_cams_pane

0x1b3d,	// (0x0001609e) cams_burst_image_pane

0x1b45,	// (0x000160a6) cell_cams_pane_g1

0x14df,	// (0x00015a40) grid_highlight_pane_cp03

0x18ce,	// (0x00015e2f) mp_bg_pane_g1

0x14df,	// (0x00015a40) bg_list_pane_cp03

0x3aab,	// (0x0001800c) bg_mp_pane

0x3ab3,	// (0x00018014) grid_mp_pane

0x3abb,	// (0x0001801c) media_player_g1

0x3ac3,	// (0x00018024) media_player_t1

0x3ad1,	// (0x00018032) media_player_t2

0x3adf,	// (0x00018040) media_player_t3

0x3aed,	// (0x0001804e) media_player_t4

0x3afb,	// (0x0001805c) media_player_t5

0x3b09,	// (0x0001806a) media_player_t6

0x3b17,	// (0x00018078) media_player_t7

0x0006,

0xf602,	// (0x00023b63) media_player_t

0x3b25,	// (0x00018086) wait_bar_pane_cp02

0xf5e7,	// (0x00023b48) main_usb_pane_t

0xab9d,	// (0x0001f0fe) cell_mp_pane

0x18ce,	// (0x00015e2f) cell_mp_pane_g1

0x14df,	// (0x00015a40) grid_highlight_pane_cp06

0x1bed,	// (0x0001614e) grid_skin_colour_pane

0x1bf5,	// (0x00016156) list_highlight_pane_cp03

0x92e3,	// (0x0001d844) skin_g1

0x1bfd,	// (0x0001615e) skin_t1

0x1c0c,	// (0x0001616d) skin_t2

0x0001,

0xf288,	// (0x000237e9) skin_t

0x92eb,	// (0x0001d84c) cell_skin_colour_pane_ParamLimits

0x92eb,	// (0x0001d84c) cell_skin_colour_pane

0x1c1a,	// (0x0001617b) cell_skin_colour_pane_g1

0x9361,	// (0x0001d8c2) call_video_g1_ParamLimits

0x9361,	// (0x0001d8c2) call_video_g1

0x936d,	// (0x0001d8ce) call_video_g2_ParamLimits

0x936d,	// (0x0001d8ce) call_video_g2

0x0001,

0xf28d,	// (0x000237ee) call_video_g_ParamLimits

0xf28d,	// (0x000237ee) call_video_g

0x93bd,	// (0x0001d91e) call_video_uplink_pane_cp1_ParamLimits

0x93bd,	// (0x0001d91e) call_video_uplink_pane_cp1

0x1c2c,	// (0x0001618d) call_video_uplink_pane_cp2

0x9479,	// (0x0001d9da) video_down_crop_pane_ParamLimits

0x9479,	// (0x0001d9da) video_down_crop_pane

0x9543,	// (0x0001daa4) video_down_pane_ParamLimits

0x9543,	// (0x0001daa4) video_down_pane

0x1c34,	// (0x00016195) video_down_subqcif_pane_ParamLimits

0x1c34,	// (0x00016195) video_down_subqcif_pane

0x1c4c,	// (0x000161ad) video_down_subqcif_pane_cp_ParamLimits

0x1c4c,	// (0x000161ad) video_down_subqcif_pane_cp

0x1c70,	// (0x000161d1) im_reading_pane_ParamLimits

0x1c70,	// (0x000161d1) im_reading_pane

0x960f,	// (0x0001db70) im_writing_pane_ParamLimits

0x960f,	// (0x0001db70) im_writing_pane

0x9625,	// (0x0001db86) im_reading_pane_t1

0x1c8a,	// (0x000161eb) list_im_pane

0x1c9b,	// (0x000161fc) scroll_pane_cp07

0x965d,	// (0x0001dbbe) im_writing_pane_t1_ParamLimits

0x965d,	// (0x0001dbbe) im_writing_pane_t1

0x1cb4,	// (0x00016215) im_writing_pane_t2_ParamLimits

0x1cb4,	// (0x00016215) im_writing_pane_t2

0x0001,

0xf297,	// (0x000237f8) im_writing_pane_t_ParamLimits

0xf297,	// (0x000237f8) im_writing_pane_t

0x14df,	// (0x00015a40) input_focus_pane_cp04

0x14df,	// (0x00015a40) input_focus_pane_cp05

0x9672,	// (0x0001dbd3) list_im_single_pane_ParamLimits

0x9672,	// (0x0001dbd3) list_im_single_pane

0x1cd1,	// (0x00016232) list_single_im_pane_t1

0xab63,	// (0x0001f0c4) blid_accuracy_pane

0xab6b,	// (0x0001f0cc) blid_compass_pane

0xab73,	// (0x0001f0d4) main_location_t1

0xab81,	// (0x0001f0e2) main_location_t2

0xab8f,	// (0x0001f0f0) main_location_t3

0x0002,

0xf611,	// (0x00023b72) main_location_t

0x14df,	// (0x00015a40) aid_levels_location

0x18ce,	// (0x00015e2f) blid_accuracy_pane_g1

0x18ce,	// (0x00015e2f) blid_accuracy_pane_g2

0x0001,

0xf2f9,	// (0x0002385a) blid_accuracy_pane_g

0x1d0b,	// (0x0001626c) wml_content_pane

0x1d49,	// (0x000162aa) wml_button_pane_ParamLimits

0x1d49,	// (0x000162aa) wml_button_pane

0x968a,	// (0x0001dbeb) wml_list_single_large_pane_ParamLimits

0x968a,	// (0x0001dbeb) wml_list_single_large_pane

0x96a1,	// (0x0001dc02) wml_list_single_medium_pane_ParamLimits

0x96a1,	// (0x0001dc02) wml_list_single_medium_pane

0x96b9,	// (0x0001dc1a) wml_list_single_small_pane_ParamLimits

0x96b9,	// (0x0001dc1a) wml_list_single_small_pane

0x1d5d,	// (0x000162be) wml_selection_box_pane_ParamLimits

0x1d5d,	// (0x000162be) wml_selection_box_pane

0x1d70,	// (0x000162d1) wml_list_single_pane_t1

0x1d7f,	// (0x000162e0) wml_list_single_medium_pane_t1

0x1d8e,	// (0x000162ef) wml_list_single_large_pane_t1

0x1d9d,	// (0x000162fe) input_focus_pane_cp02_ParamLimits

0x1d9d,	// (0x000162fe) input_focus_pane_cp02

0x1db0,	// (0x00016311) wml_selection_box_pane_g1

0x1db9,	// (0x0001631a) wml_selection_box_pane_t1_ParamLimits

0x1db9,	// (0x0001631a) wml_selection_box_pane_t1

0x173a,	// (0x00015c9b) bg_wml_button_pane_ParamLimits

0x173a,	// (0x00015c9b) bg_wml_button_pane

0x1dd1,	// (0x00016332) wml_button_pane_g1

0x1dd9,	// (0x0001633a) wml_button_pane_t1

0x1dd1,	// (0x00016332) wml_button_bg_pane_g1

0x1de9,	// (0x0001634a) wml_button_bg_pane_g2

0x1df1,	// (0x00016352) wml_button_bg_pane_g3

0x1df9,	// (0x0001635a) wml_button_bg_pane_g4

0x1e01,	// (0x00016362) wml_button_bg_pane_g5

0x1e09,	// (0x0001636a) wml_button_bg_pane_g6

0x1e11,	// (0x00016372) wml_button_bg_pane_g7

0x1e19,	// (0x0001637a) wml_button_bg_pane_g8

0x1e21,	// (0x00016382) wml_button_bg_pane_g9

0x0008,

0xf29c,	// (0x000237fd) wml_button_bg_pane_g

0x96d4,	// (0x0001dc35) bg_list_pane_cp02

0x1e29,	// (0x0001638a) mce_header_pane_ParamLimits

0x1e29,	// (0x0001638a) mce_header_pane

0x1e3d,	// (0x0001639e) mce_icon_pane

0x1e3d,	// (0x0001639e) mce_image_pane

0x1e46,	// (0x000163a7) mce_text_pane_ParamLimits

0x1e46,	// (0x000163a7) mce_text_pane

0x96dd,	// (0x0001dc3e) scroll_pane_cp03

0x96dd,	// (0x0001dc3e) scroll_pane_cp04

0x1e5a,	// (0x000163bb) scroll_pane_cp05_ParamLimits

0x1e5a,	// (0x000163bb) scroll_pane_cp05

0x96e5,	// (0x0001dc46) mce_header_field_pane_ParamLimits

0x96e5,	// (0x0001dc46) mce_header_field_pane

0x9705,	// (0x0001dc66) mce_header_field_pane_2_ParamLimits

0x9705,	// (0x0001dc66) mce_header_field_pane_2

0x971b,	// (0x0001dc7c) mce_header_field_pane_3

0x9723,	// (0x0001dc84) list_single_mce_message_pane_ParamLimits

0x9723,	// (0x0001dc84) list_single_mce_message_pane

0x973a,	// (0x0001dc9b) list_single_mce_smart_pane_ParamLimits

0x973a,	// (0x0001dc9b) list_single_mce_smart_pane

0x1e66,	// (0x000163c7) input_focus_pane_cp03

0x1e6f,	// (0x000163d0) list_header_data_pane

0x975c,	// (0x0001dcbd) mce_header_field_pane_t1

0x976a,	// (0x0001dccb) list_single_mce_header_pane_ParamLimits

0x976a,	// (0x0001dccb) list_single_mce_header_pane

0x1e77,	// (0x000163d8) list_single_mce_header_pane_t1

0x1e86,	// (0x000163e7) list_single_mce_message_pane_g1

0x1e8f,	// (0x000163f0) list_single_mce_message_pane_t1

0x97a0,	// (0x0001dd01) bg_cale_heading_pane_cp01_ParamLimits

0x97a0,	// (0x0001dd01) bg_cale_heading_pane_cp01

0x1e9e,	// (0x000163ff) bg_cale_pane_cp02_ParamLimits

0x1e9e,	// (0x000163ff) bg_cale_pane_cp02

0x97c3,	// (0x0001dd24) cale_month_corner_pane

0x97d9,	// (0x0001dd3a) cale_month_day_heading_pane_ParamLimits

0x97d9,	// (0x0001dd3a) cale_month_day_heading_pane

0x97fc,	// (0x0001dd5d) cale_month_pane_g1_ParamLimits

0x97fc,	// (0x0001dd5d) cale_month_pane_g1

0x9818,	// (0x0001dd79) cale_month_pane_g2_ParamLimits

0x9818,	// (0x0001dd79) cale_month_pane_g2

0x9831,	// (0x0001dd92) cale_month_pane_g3_ParamLimits

0x9831,	// (0x0001dd92) cale_month_pane_g3

0x985d,	// (0x0001ddbe) cale_month_pane_g4_ParamLimits

0x985d,	// (0x0001ddbe) cale_month_pane_g4

0x9889,	// (0x0001ddea) cale_month_pane_g5_ParamLimits

0x9889,	// (0x0001ddea) cale_month_pane_g5

0x98b5,	// (0x0001de16) cale_month_pane_g6_ParamLimits

0x98b5,	// (0x0001de16) cale_month_pane_g6

0x98e1,	// (0x0001de42) cale_month_pane_g7_ParamLimits

0x98e1,	// (0x0001de42) cale_month_pane_g7

0x990d,	// (0x0001de6e) cale_month_pane_g8_ParamLimits

0x990d,	// (0x0001de6e) cale_month_pane_g8

0x9939,	// (0x0001de9a) cale_month_pane_g9_ParamLimits

0x9939,	// (0x0001de9a) cale_month_pane_g9

0x9963,	// (0x0001dec4) cale_month_pane_g10_ParamLimits

0x9963,	// (0x0001dec4) cale_month_pane_g10

0x998d,	// (0x0001deee) cale_month_pane_g11_ParamLimits

0x998d,	// (0x0001deee) cale_month_pane_g11

0x99b7,	// (0x0001df18) cale_month_pane_g12_ParamLimits

0x99b7,	// (0x0001df18) cale_month_pane_g12

0x99e1,	// (0x0001df42) cale_month_pane_g13_ParamLimits

0x99e1,	// (0x0001df42) cale_month_pane_g13

0x000c,

0xf2af,	// (0x00023810) cale_month_pane_g_ParamLimits

0xf2af,	// (0x00023810) cale_month_pane_g

0x9a0b,	// (0x0001df6c) cale_month_week_pane

0x9a1c,	// (0x0001df7d) grid_cale_month_pane_ParamLimits

0x9a1c,	// (0x0001df7d) grid_cale_month_pane

0x9a3a,	// (0x0001df9b) cale_month_day_heading_pane_t1

0x9a98,	// (0x0001dff9) cale_month_day_heading_pane_t2

0x9afd,	// (0x0001e05e) cale_month_day_heading_pane_t3

0x9b62,	// (0x0001e0c3) cale_month_day_heading_pane_t4

0x9bc7,	// (0x0001e128) cale_month_day_heading_pane_t5

0x9c2c,	// (0x0001e18d) cale_month_day_heading_pane_t6

0x9c91,	// (0x0001e1f2) cale_month_day_heading_pane_t7

0x0006,

0xf2ca,	// (0x0002382b) cale_month_day_heading_pane_t

0x1a2d,	// (0x00015f8e) bg_cale_side_pane_cp01

0x9cf6,	// (0x0001e257) cale_month_week_pane_t1

0x9d0d,	// (0x0001e26e) cale_month_week_pane_t2

0x9d24,	// (0x0001e285) cale_month_week_pane_t3

0x9d3b,	// (0x0001e29c) cale_month_week_pane_t4

0x9d52,	// (0x0001e2b3) cale_month_week_pane_t5

0x9d69,	// (0x0001e2ca) cale_month_week_pane_t6

0x0005,

0xf2d9,	// (0x0002383a) cale_month_week_pane_t

0x9d80,	// (0x0001e2e1) cell_cale_month_pane_ParamLimits

0x9d80,	// (0x0001e2e1) cell_cale_month_pane

0x779b,	// (0x0001bcfc) cell_cale_month_pane_g1

0x77a7,	// (0x0001bd08) cell_cale_month_pane_t1_ParamLimits

0x77a7,	// (0x0001bd08) cell_cale_month_pane_t1

0x1a3b,	// (0x00015f9c) grid_highlight_pane_cp08

0x18ce,	// (0x00015e2f) main_smil_g1

0x9e26,	// (0x0001e387) smil_status_pane

0x1f09,	// (0x0001646a) smil_text_pane

0x398b,	// (0x00017eec) bg_popup_call3_rect_pane_g8

0x3993,	// (0x00017ef4) bg_popup_call3_rect_pane_g9

0x0008,

0xf592,	// (0x00023af3) bg_popup_call3_rect_pane_g

0x3c5c,	// (0x000181bd) smil_status_volume_pane_g1

0x1f13,	// (0x00016474) smil_status_pane_t1

0x78e5,	// (0x0001be46) volume_smil_pane

0x1f2a,	// (0x0001648b) list_smil_text_pane

0x9e37,	// (0x0001e398) scroll_pane_cp011

0x9e40,	// (0x0001e3a1) smil_text_list_pane_t1_ParamLimits

0x9e40,	// (0x0001e3a1) smil_text_list_pane_t1

0x77c3,	// (0x0001bd24) aid_volume_smil_ParamLimits

0x77c3,	// (0x0001bd24) aid_volume_smil

0x18ce,	// (0x00015e2f) smil_volume_pane_g1

0x18ce,	// (0x00015e2f) smil_volume_pane_g2

0x0001,

0xf2f9,	// (0x0002385a) smil_volume_pane_g

0x182b,	// (0x00015d8c) listscroll_cale_day_pane

0x1f56,	// (0x000164b7) bg_cale_pane

0x1f6e,	// (0x000164cf) list_cale_pane

0x1f7f,	// (0x000164e0) scroll_pane_cp09

0x1f90,	// (0x000164f1) cale_bg_pane_g1

0x1f98,	// (0x000164f9) cale_bg_pane_g2

0x1fa0,	// (0x00016501) cale_bg_pane_g3

0x1fa8,	// (0x00016509) cale_bg_pane_g4

0x1fb0,	// (0x00016511) cale_bg_pane_g5

0x1fb8,	// (0x00016519) cale_bg_pane_g6

0x1fc0,	// (0x00016521) cale_bg_pane_g7

0x1fc8,	// (0x00016529) cale_bg_pane_g8

0x1fd0,	// (0x00016531) cale_bg_pane_g9

0x0008,

0xf2fe,	// (0x0002385f) cale_bg_pane_g

0x9e85,	// (0x0001e3e6) list_cale_time_pane_ParamLimits

0x9e85,	// (0x0001e3e6) list_cale_time_pane

0x1fd8,	// (0x00016539) list_cale_time_pane_g1_ParamLimits

0x1fd8,	// (0x00016539) list_cale_time_pane_g1

0x1fe4,	// (0x00016545) list_cale_time_pane_g2_ParamLimits

0x1fe4,	// (0x00016545) list_cale_time_pane_g2

0x9e9c,	// (0x0001e3fd) list_cale_time_pane_g3_ParamLimits

0x9e9c,	// (0x0001e3fd) list_cale_time_pane_g3

0x9ea8,	// (0x0001e409) list_cale_time_pane_g4_ParamLimits

0x9ea8,	// (0x0001e409) list_cale_time_pane_g4

0x9eb4,	// (0x0001e415) list_cale_time_pane_g5_ParamLimits

0x9eb4,	// (0x0001e415) list_cale_time_pane_g5

0x0005,

0xf311,	// (0x00023872) list_cale_time_pane_g_ParamLimits

0xf311,	// (0x00023872) list_cale_time_pane_g

0x1ffe,	// (0x0001655f) list_cale_time_pane_t1_ParamLimits

0x1ffe,	// (0x0001655f) list_cale_time_pane_t1

0x2026,	// (0x00016587) list_cale_time_pane_t2_ParamLimits

0x2026,	// (0x00016587) list_cale_time_pane_t2

0xa15c,	// (0x0001e6bd) aid_blid_cardinal_pane

0xa19a,	// (0x0001e6fb) compass_pane_t4

0x204e,	// (0x000165af) list_cale_time_pane_t4_ParamLimits

0x204e,	// (0x000165af) list_cale_time_pane_t4

0xa1a8,	// (0x0001e709) compass_pane_t5

0xa1b6,	// (0x0001e717) compass_pane_t6

0xa1c4,	// (0x0001e725) compass_pane_t7

0x2593,	// (0x00016af4) navi_pane_cc_t1

0x2749,	// (0x00016caa) aid_phob_thumbnail_center_pane

0xa710,	// (0x0001ec71) main_postcard_pane_g4_ParamLimits

0x0002,

0xf31e,	// (0x0002387f) list_cale_time_pane_t_ParamLimits

0xf31e,	// (0x0002387f) list_cale_time_pane_t

0x1138,	// (0x00015699) bg_popup_window_pane_cp02_ParamLimits

0x1138,	// (0x00015699) bg_popup_window_pane_cp02

0x2076,	// (0x000165d7) heading_pane_cp01_ParamLimits

0x2076,	// (0x000165d7) heading_pane_cp01

0x2082,	// (0x000165e3) loc_req_pane_ParamLimits

0x2082,	// (0x000165e3) loc_req_pane

0x2092,	// (0x000165f3) loc_type_pane_ParamLimits

0x2092,	// (0x000165f3) loc_type_pane

0x20a4,	// (0x00016605) loc_type_pane_t1_ParamLimits

0x20a4,	// (0x00016605) loc_type_pane_t1

0x20b6,	// (0x00016617) loc_type_pane_t2_ParamLimits

0x20b6,	// (0x00016617) loc_type_pane_t2

0x20c8,	// (0x00016629) loc_type_pane_t3_ParamLimits

0x20c8,	// (0x00016629) loc_type_pane_t3

0x0002,

0xf325,	// (0x00023886) loc_type_pane_t_ParamLimits

0xf325,	// (0x00023886) loc_type_pane_t

0x20da,	// (0x0001663b) list_loc_req_pane

0x20e4,	// (0x00016645) scroll_pane_cp012

0x9ec0,	// (0x0001e421) list_single_loc_request_popup_menu_pane_ParamLimits

0x9ec0,	// (0x0001e421) list_single_loc_request_popup_menu_pane

0x20ed,	// (0x0001664e) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x20ed,	// (0x0001664e) list_single_loc_request_popup_menu_pane_g1

0x20f9,	// (0x0001665a) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x20f9,	// (0x0001665a) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf32c,	// (0x0002388d) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf32c,	// (0x0002388d) list_single_loc_request_popup_menu_pane_g

0x2105,	// (0x00016666) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x2105,	// (0x00016666) list_single_loc_request_popup_menu_pane_t1

0x9ed2,	// (0x0001e433) bg_popup_window_pane_cp03_ParamLimits

0x9ed2,	// (0x0001e433) bg_popup_window_pane_cp03

0x9ee0,	// (0x0001e441) heading_loc_req_pane_ParamLimits

0x9ee0,	// (0x0001e441) heading_loc_req_pane

0x9eec,	// (0x0001e44d) popup_dyc_status_message_window_g1_ParamLimits

0x9eec,	// (0x0001e44d) popup_dyc_status_message_window_g1

0x9ef8,	// (0x0001e459) popup_dyc_status_message_window_t1_ParamLimits

0x9ef8,	// (0x0001e459) popup_dyc_status_message_window_t1

0x9f0a,	// (0x0001e46b) popup_dyc_status_message_window_t2_ParamLimits

0x9f0a,	// (0x0001e46b) popup_dyc_status_message_window_t2

0x9f1c,	// (0x0001e47d) popup_dyc_status_message_window_t3_ParamLimits

0x9f1c,	// (0x0001e47d) popup_dyc_status_message_window_t3

0x0002,

0xf331,	// (0x00023892) popup_dyc_status_message_window_t_ParamLimits

0xf331,	// (0x00023892) popup_dyc_status_message_window_t

0x14df,	// (0x00015a40) bg_heading_pane_cp01

0x211b,	// (0x0001667c) heading_loc_req_pane_g1

0x2123,	// (0x00016684) heading_loc_req_pane_g2

0x212b,	// (0x0001668c) heading_loc_req_pane_g3

0x0002,

0xf338,	// (0x00023899) heading_loc_req_pane_g

0x2133,	// (0x00016694) heading_loc_req_pane_t1

0x21da,	// (0x0001673b) bg_popup_sub_pane_cp01_ParamLimits

0x21da,	// (0x0001673b) bg_popup_sub_pane_cp01

0x21e8,	// (0x00016749) popup_cale_events_window_g1_ParamLimits

0x21e8,	// (0x00016749) popup_cale_events_window_g1

0x2208,	// (0x00016769) popup_cale_events_window_g2_ParamLimits

0x2208,	// (0x00016769) popup_cale_events_window_g2

0x0001,

0xf36c,	// (0x000238cd) popup_cale_events_window_g_ParamLimits

0xf36c,	// (0x000238cd) popup_cale_events_window_g

0x2228,	// (0x00016789) popup_cale_events_window_t1_ParamLimits

0x2228,	// (0x00016789) popup_cale_events_window_t1

0x223a,	// (0x0001679b) popup_cale_events_window_t2_ParamLimits

0x223a,	// (0x0001679b) popup_cale_events_window_t2

0x2278,	// (0x000167d9) popup_cale_events_window_t3_ParamLimits

0x2278,	// (0x000167d9) popup_cale_events_window_t3

0x22b2,	// (0x00016813) popup_cale_events_window_t4_ParamLimits

0x22b2,	// (0x00016813) popup_cale_events_window_t4

0x0003,

0xf371,	// (0x000238d2) popup_cale_events_window_t_ParamLimits

0xf371,	// (0x000238d2) popup_cale_events_window_t

0x9fa2,	// (0x0001e503) call_type_pane

0x2761,	// (0x00016cc2) popup_call_status_window_g1

0x9fae,	// (0x0001e50f) popup_call_status_window_g2

0x9fba,	// (0x0001e51b) popup_call_status_window_g3

0x0002,

0xf37a,	// (0x000238db) popup_call_status_window_g

0x22e8,	// (0x00016849) call_type_pane_g1

0x22f1,	// (0x00016852) call_type_pane_g2

0x0001,

0xf381,	// (0x000238e2) call_type_pane_g

0x14df,	// (0x00015a40) bg_popup_sub_pane_cp02

0x22fa,	// (0x0001685b) listscroll_popup_wml_pane

0x2302,	// (0x00016863) list_wml_pane

0x230c,	// (0x0001686d) scroll_pane_cp013

0x9fc6,	// (0x0001e527) list_single_graphic_popup_wml_pane_ParamLimits

0x9fc6,	// (0x0001e527) list_single_graphic_popup_wml_pane

0x18ce,	// (0x00015e2f) list_single_graphic_popup_wml_pane_g1

0x2315,	// (0x00016876) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf386,	// (0x000238e7) list_single_graphic_popup_wml_pane_g

0x231d,	// (0x0001687e) list_single_graphic_popup_wml_pane_t1

0x232b,	// (0x0001688c) aid_call_pane

0x1732,	// (0x00015c93) popup_clock_analogue_window_g1

0x1732,	// (0x00015c93) popup_clock_analogue_window_g2

0x77e5,	// (0x0001bd46) popup_clock_analogue_window_g3

0x77e5,	// (0x0001bd46) popup_clock_analogue_window_g4

0x18ce,	// (0x00015e2f) popup_clock_analogue_window_g5

0x0004,

0xf38b,	// (0x000238ec) popup_clock_analogue_window_g

0x77ed,	// (0x0001bd4e) popup_clock_analogue_window_t1

0x77fb,	// (0x0001bd5c) clock_digital_number_pane_ParamLimits

0x77fb,	// (0x0001bd5c) clock_digital_number_pane

0x7807,	// (0x0001bd68) clock_digital_number_pane_cp02_ParamLimits

0x7807,	// (0x0001bd68) clock_digital_number_pane_cp02

0x7813,	// (0x0001bd74) clock_digital_number_pane_cp03_ParamLimits

0x7813,	// (0x0001bd74) clock_digital_number_pane_cp03

0x781f,	// (0x0001bd80) clock_digital_number_pane_cp04_ParamLimits

0x781f,	// (0x0001bd80) clock_digital_number_pane_cp04

0x782b,	// (0x0001bd8c) clock_digital_separator_pane_ParamLimits

0x782b,	// (0x0001bd8c) clock_digital_separator_pane

0x7837,	// (0x0001bd98) popup_clock_digital_window_t1

0x18ce,	// (0x00015e2f) clock_digital_number_pane_g1

0x18ce,	// (0x00015e2f) clock_digital_number_pane_g2

0x0001,

0xf2f9,	// (0x0002385a) clock_digital_number_pane_g

0x18ce,	// (0x00015e2f) clock_digital_separator_pane_g1

0x18ce,	// (0x00015e2f) clock_digital_separator_pane_g2

0x0001,

0xf2f9,	// (0x0002385a) clock_digital_separator_pane_g

0x14df,	// (0x00015a40) bg_popup_window_pane_cp04

0x23aa,	// (0x0001690b) heading_pane_cp03

0x23b2,	// (0x00016913) listscroll_popup_gms_pane

0x23ba,	// (0x0001691b) grid_large_graphic_popup_pane

0x23c4,	// (0x00016925) listscroll_popup_gms_pane_g1

0x23cc,	// (0x0001692d) listscroll_popup_gms_pane_g2

0x0001,

0xf396,	// (0x000238f7) listscroll_popup_gms_pane_g

0x1d41,	// (0x000162a2) scroll_pane_cp014

0x9fda,	// (0x0001e53b) cell_large_graphic_popup_pane_ParamLimits

0x9fda,	// (0x0001e53b) cell_large_graphic_popup_pane

0x9ff1,	// (0x0001e552) cell_large_graphic_popup_pane_g1_ParamLimits

0x9ff1,	// (0x0001e552) cell_large_graphic_popup_pane_g1

0x23d4,	// (0x00016935) cell_large_graphic_popup_pane_g2_ParamLimits

0x23d4,	// (0x00016935) cell_large_graphic_popup_pane_g2

0x23e0,	// (0x00016941) cell_large_graphic_popup_pane_g3_ParamLimits

0x23e0,	// (0x00016941) cell_large_graphic_popup_pane_g3

0x23ed,	// (0x0001694e) cell_large_graphic_popup_pane_g4_ParamLimits

0x23ed,	// (0x0001694e) cell_large_graphic_popup_pane_g4

0x0003,

0xf39b,	// (0x000238fc) cell_large_graphic_popup_pane_g_ParamLimits

0xf39b,	// (0x000238fc) cell_large_graphic_popup_pane_g

0x23fd,	// (0x0001695e) grid_highlight_pane_cp010

0x18ce,	// (0x00015e2f) bg_popup_call_pane_g1

0x2407,	// (0x00016968) list_single_graphic_popup_conf_pane_ParamLimits

0x2407,	// (0x00016968) list_single_graphic_popup_conf_pane

0x241a,	// (0x0001697b) list_highlight_pane_cp01

0x2423,	// (0x00016984) list_single_graphic_popup_conf_pane_g1

0x242b,	// (0x0001698c) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf3a4,	// (0x00023905) list_single_graphic_popup_conf_pane_g

0x2433,	// (0x00016994) list_single_graphic_popup_conf_pane_t1

0x2441,	// (0x000169a2) linegrid_cams_pane_g1

0x9ffd,	// (0x0001e55e) linegrid_cams_pane_g2

0x19d9,	// (0x00015f3a) linegrid_cams_pane_g3

0x244a,	// (0x000169ab) linegrid_cams_pane_g4

0xa006,	// (0x0001e567) linegrid_cams_pane_g5

0xa00f,	// (0x0001e570) linegrid_cams_pane_g6

0x1a6e,	// (0x00015fcf) linegrid_cams_pane_g7

0x0006,

0xf3a9,	// (0x0002390a) linegrid_cams_pane_g

0x2453,	// (0x000169b4) popup_clock_analogue_window

0x2453,	// (0x000169b4) popup_clock_digital_window

0x14df,	// (0x00015a40) popup_phob_thumbnail_window

0x18ce,	// (0x00015e2f) call_video_uplink_pane_g1

0x245c,	// (0x000169bd) call_video_uplink_pane_g2

0x0001,

0xf3b8,	// (0x00023919) call_video_uplink_pane_g

0x1a3b,	// (0x00015f9c) video_uplink_pane

0x2464,	// (0x000169c5) mce_image_pane_g1

0xa018,	// (0x0001e579) mce_image_pane_g2

0xa020,	// (0x0001e581) mce_image_pane_g3

0xa028,	// (0x0001e589) mce_image_pane_g4

0xa030,	// (0x0001e591) mce_image_pane_g5

0x0004,

0xf3bd,	// (0x0002391e) mce_image_pane_g

0x246e,	// (0x000169cf) control_top_pane_stacon_cp01_ParamLimits

0x246e,	// (0x000169cf) control_top_pane_stacon_cp01

0x247e,	// (0x000169df) uni_indicator_pane_stacon_cp01_ParamLimits

0x247e,	// (0x000169df) uni_indicator_pane_stacon_cp01

0x248f,	// (0x000169f0) bg_popup_sub_pane_cp03

0x2499,	// (0x000169fa) chi_dic_find_pane

0xa038,	// (0x0001e599) listscroll_chi_dic_pane

0x24a1,	// (0x00016a02) main_pane_chidic_g1

0x24a9,	// (0x00016a0a) chi_dic_find_pane_t1

0x24b7,	// (0x00016a18) find_chidic_pane

0x24c0,	// (0x00016a21) chi_dic_list_pane_ParamLimits

0x24c0,	// (0x00016a21) chi_dic_list_pane

0x24d1,	// (0x00016a32) scroll_pane_cp020

0x24d9,	// (0x00016a3a) find_chidic_pane_t1

0x14df,	// (0x00015a40) input_focus_pane_cp06

0xa04a,	// (0x0001e5ab) list_chi_dic_pane_ParamLimits

0xa04a,	// (0x0001e5ab) list_chi_dic_pane

0xa05d,	// (0x0001e5be) list_chi_dic_pane_t1_ParamLimits

0xa05d,	// (0x0001e5be) list_chi_dic_pane_t1

0x14df,	// (0x00015a40) list_highlight_pane_cp020

0x24e8,	// (0x00016a49) bg_cale_heading_pane_g1

0xa070,	// (0x0001e5d1) bg_cale_heading_pane_g2

0xa078,	// (0x0001e5d9) bg_cale_heading_pane_g3

0xa080,	// (0x0001e5e1) bg_cale_heading_pane_g4

0xa088,	// (0x0001e5e9) bg_cale_heading_pane_g5

0xa090,	// (0x0001e5f1) bg_cale_heading_pane_g6

0xa098,	// (0x0001e5f9) bg_cale_heading_pane_g7

0xa0a0,	// (0x0001e601) bg_cale_heading_pane_g8

0xa0a8,	// (0x0001e609) bg_cale_heading_pane_g9

0x0008,

0xf3c8,	// (0x00023929) bg_cale_heading_pane_g

0x24e8,	// (0x00016a49) bg_cale_side_pane_g1

0xa0b0,	// (0x0001e611) bg_cale_side_pane_g2

0xa0b8,	// (0x0001e619) bg_cale_side_pane_g3

0xa0c0,	// (0x0001e621) bg_cale_side_pane_g4

0xa0c8,	// (0x0001e629) bg_cale_side_pane_g5

0xa0d0,	// (0x0001e631) bg_cale_side_pane_g6

0xa0d8,	// (0x0001e639) bg_cale_side_pane_g7

0xa0e0,	// (0x0001e641) bg_cale_side_pane_g8

0xa0e8,	// (0x0001e649) bg_cale_side_pane_g9

0x0008,

0xf3db,	// (0x0002393c) bg_cale_side_pane_g

0xa0f0,	// (0x0001e651) popup_call_status_window_ParamLimits

0xa0f0,	// (0x0001e651) popup_call_status_window

0x24f0,	// (0x00016a51) stacon_top_pane

0x24f8,	// (0x00016a59) status_pane_ParamLimits

0x24f8,	// (0x00016a59) status_pane

0x2512,	// (0x00016a73) status_small_pane

0x251a,	// (0x00016a7b) control_pane

0x14df,	// (0x00015a40) stacon_bottom_pane

0x2522,	// (0x00016a83) list_single_mce_smart_pane_t1_ParamLimits

0x2522,	// (0x00016a83) list_single_mce_smart_pane_t1

0x2535,	// (0x00016a96) list_single_mce_smart_pane_t2_ParamLimits

0x2535,	// (0x00016a96) list_single_mce_smart_pane_t2

0x0001,

0xf3ee,	// (0x0002394f) list_single_mce_smart_pane_t_ParamLimits

0xf3ee,	// (0x0002394f) list_single_mce_smart_pane_t

0xa0ff,	// (0x0001e660) compass_pane

0xa108,	// (0x0001e669) main_location2_pane_t1

0xa11e,	// (0x0001e67f) main_location2_pane_t2

0xa134,	// (0x0001e695) main_location2_pane_t3

0x0003,

0xf3f3,	// (0x00023954) main_location2_pane_t

0x255d,	// (0x00016abe) compass_pane_g1_ParamLimits

0x255d,	// (0x00016abe) compass_pane_g1

0xa17c,	// (0x0001e6dd) compass_pane_t1

0xa18b,	// (0x0001e6ec) compass_pane_t2

0x0005,

0xf3fc,	// (0x0002395d) compass_pane_t

0xa1d2,	// (0x0001e733) text_secondary_cp61

0x258a,	// (0x00016aeb) navi_pane_cams_g5

0x25cb,	// (0x00016b2c) navi_pane_im_t1

0x25d9,	// (0x00016b3a) navi_pane_mp_g1_ParamLimits

0x25d9,	// (0x00016b3a) navi_pane_mp_g1

0x25ed,	// (0x00016b4e) navi_pane_mp_g2_ParamLimits

0x25ed,	// (0x00016b4e) navi_pane_mp_g2

0x25f9,	// (0x00016b5a) navi_pane_mp_g3_ParamLimits

0x25f9,	// (0x00016b5a) navi_pane_mp_g3

0x0002,

0xf410,	// (0x00023971) navi_pane_mp_g_ParamLimits

0xf410,	// (0x00023971) navi_pane_mp_g

0x2605,	// (0x00016b66) navi_pane_mp_t1

0x2613,	// (0x00016b74) navi_pane_mp_t2

0x0002,

0xf417,	// (0x00023978) navi_pane_mp_t

0x2680,	// (0x00016be1) navi_pane_vt_g1

0x2605,	// (0x00016b66) navi_pane_vt_t1

0x2688,	// (0x00016be9) navi_slider_pane

0x2690,	// (0x00016bf1) zooming_pane

0x2698,	// (0x00016bf9) navi_slider_pane_g1

0x7854,	// (0x0001bdb5) navi_slider_pane_g2

0x0006,

0xf41e,	// (0x0002397f) navi_slider_pane_g

0x26ce,	// (0x00016c2f) aid_levels_zoom

0x26d6,	// (0x00016c37) zooming_pane_g1

0x26de,	// (0x00016c3f) zooming_pane_g2

0x26de,	// (0x00016c3f) zooming_pane_g3

0x0002,

0xf42d,	// (0x0002398e) zooming_pane_g

0x26e6,	// (0x00016c47) level_10_zoom

0x26ef,	// (0x00016c50) level_11_zoom

0x26f8,	// (0x00016c59) level_1_zoom

0x2701,	// (0x00016c62) level_2_zoom

0x270a,	// (0x00016c6b) level_3_zoom

0x2713,	// (0x00016c74) level_4_zoom

0x271c,	// (0x00016c7d) level_5_zoom

0x2725,	// (0x00016c86) level_6_zoom

0x272e,	// (0x00016c8f) level_7_zoom

0x2737,	// (0x00016c98) level_8_zoom

0x2740,	// (0x00016ca1) level_9_zoom

0x2751,	// (0x00016cb2) popup_phob_thumbnail_window_g1

0x2759,	// (0x00016cba) popup_phob_thumbnail_window_g2

0x0001,

0xf434,	// (0x00023995) popup_phob_thumbnail_window_g

0x3b2d,	// (0x0001808e) level_1_location

0x3b35,	// (0x00018096) level_2_location

0x3b3d,	// (0x0001809e) level_3_location

0x3b45,	// (0x000180a6) level_4_location

0x2690,	// (0x00016bf1) level_5_location

0xa249,	// (0x0001e7aa) mce_icon_pane_g1

0xa251,	// (0x0001e7b2) mce_icon_pane_g2

0x0001,

0xf439,	// (0x0002399a) mce_icon_pane_g

0xa259,	// (0x0001e7ba) main_mup_pane_g1_ParamLimits

0xa259,	// (0x0001e7ba) main_mup_pane_g1

0xa271,	// (0x0001e7d2) main_mup_pane_g2_ParamLimits

0xa271,	// (0x0001e7d2) main_mup_pane_g2

0xa28d,	// (0x0001e7ee) main_mup_pane_g3_ParamLimits

0xa28d,	// (0x0001e7ee) main_mup_pane_g3

0xa2a9,	// (0x0001e80a) main_mup_pane_g4_ParamLimits

0xa2a9,	// (0x0001e80a) main_mup_pane_g4

0xa2c5,	// (0x0001e826) main_mup_pane_g5_ParamLimits

0xa2c5,	// (0x0001e826) main_mup_pane_g5

0xa2e2,	// (0x0001e843) main_mup_pane_g6_ParamLimits

0xa2e2,	// (0x0001e843) main_mup_pane_g6

0xa2fe,	// (0x0001e85f) main_mup_pane_g7_ParamLimits

0xa2fe,	// (0x0001e85f) main_mup_pane_g7

0xa31a,	// (0x0001e87b) main_mup_pane_g8_ParamLimits

0xa31a,	// (0x0001e87b) main_mup_pane_g8

0xa336,	// (0x0001e897) main_mup_pane_g9_ParamLimits

0xa336,	// (0x0001e897) main_mup_pane_g9

0xa34d,	// (0x0001e8ae) main_mup_pane_g10_ParamLimits

0xa34d,	// (0x0001e8ae) main_mup_pane_g10

0xa364,	// (0x0001e8c5) main_mup_pane_g11_ParamLimits

0xa364,	// (0x0001e8c5) main_mup_pane_g11

0xa378,	// (0x0001e8d9) main_mup_pane_g12_ParamLimits

0xa378,	// (0x0001e8d9) main_mup_pane_g12

0xa384,	// (0x0001e8e5) main_mup_pane_g13_ParamLimits

0xa384,	// (0x0001e8e5) main_mup_pane_g13

0x000c,

0xf43e,	// (0x0002399f) main_mup_pane_g_ParamLimits

0xf43e,	// (0x0002399f) main_mup_pane_g

0xa398,	// (0x0001e8f9) main_mup_pane_t1_ParamLimits

0xa398,	// (0x0001e8f9) main_mup_pane_t1

0xa3b5,	// (0x0001e916) main_mup_pane_t2_ParamLimits

0xa3b5,	// (0x0001e916) main_mup_pane_t2

0xa3cf,	// (0x0001e930) main_mup_pane_t3_ParamLimits

0xa3cf,	// (0x0001e930) main_mup_pane_t3

0xa3e9,	// (0x0001e94a) main_mup_pane_t4_ParamLimits

0xa3e9,	// (0x0001e94a) main_mup_pane_t4

0xa3fb,	// (0x0001e95c) main_mup_pane_t5_ParamLimits

0xa3fb,	// (0x0001e95c) main_mup_pane_t5

0xa40d,	// (0x0001e96e) main_mup_pane_t6_ParamLimits

0xa40d,	// (0x0001e96e) main_mup_pane_t6

0x0005,

0xf459,	// (0x000239ba) main_mup_pane_t_ParamLimits

0xf459,	// (0x000239ba) main_mup_pane_t

0xa423,	// (0x0001e984) mup_progress_pane_ParamLimits

0xa423,	// (0x0001e984) mup_progress_pane

0xa42f,	// (0x0001e990) mup_visualizer_pane_ParamLimits

0xa42f,	// (0x0001e990) mup_visualizer_pane

0xa45d,	// (0x0001e9be) mup_volume_pane_ParamLimits

0xa45d,	// (0x0001e9be) mup_volume_pane

0x2761,	// (0x00016cc2) mup_visualizer_pane_g1_ParamLimits

0x2761,	// (0x00016cc2) mup_visualizer_pane_g1

0x2761,	// (0x00016cc2) mup_visualizer_pane_g2_ParamLimits

0x2761,	// (0x00016cc2) mup_visualizer_pane_g2

0x255d,	// (0x00016abe) mup_visualizer_pane_g3_ParamLimits

0x255d,	// (0x00016abe) mup_visualizer_pane_g3

0x0002,

0xf466,	// (0x000239c7) mup_visualizer_pane_g_ParamLimits

0xf466,	// (0x000239c7) mup_visualizer_pane_g

0x18ce,	// (0x00015e2f) mup_volume_pane_g1

0x2777,	// (0x00016cd8) mup_volume_pane_g2

0x0001,

0xf46d,	// (0x000239ce) mup_volume_pane_g

0x18ce,	// (0x00015e2f) mup_progress_pane_g1

0x2780,	// (0x00016ce1) mup_progress_pane_g2

0x2789,	// (0x00016cea) mup_progress_pane_g3

0x0002,

0xf472,	// (0x000239d3) mup_progress_pane_g

0x14df,	// (0x00015a40) bg_popup_window_pane_cp05

0x2792,	// (0x00016cf3) heading_pane_cp02_ParamLimits

0x2792,	// (0x00016cf3) heading_pane_cp02

0x27ac,	// (0x00016d0d) list_popup_blid_pane

0x27b4,	// (0x00016d15) list_blid_sat_info_pane_ParamLimits

0x27b4,	// (0x00016d15) list_blid_sat_info_pane

0x27c7,	// (0x00016d28) list_blid_sat_info_pane_g1

0x27cf,	// (0x00016d30) list_blid_sat_info_pane_t1

0xa550,	// (0x0001eab1) mup_equalizer_pane_ParamLimits

0xa550,	// (0x0001eab1) mup_equalizer_pane

0xa569,	// (0x0001eaca) mup_equalizer_pane_cp1_ParamLimits

0xa569,	// (0x0001eaca) mup_equalizer_pane_cp1

0xa582,	// (0x0001eae3) mup_equalizer_pane_cp2_ParamLimits

0xa582,	// (0x0001eae3) mup_equalizer_pane_cp2

0xa59b,	// (0x0001eafc) mup_equalizer_pane_cp3_ParamLimits

0xa59b,	// (0x0001eafc) mup_equalizer_pane_cp3

0xa5b4,	// (0x0001eb15) mup_equalizer_pane_cp4_ParamLimits

0xa5b4,	// (0x0001eb15) mup_equalizer_pane_cp4

0xa5cd,	// (0x0001eb2e) mup_equalizer_pane_cp5

0xa5df,	// (0x0001eb40) mup_equalizer_pane_cp6

0xa5f1,	// (0x0001eb52) mup_equalizer_pane_cp7

0x3a0b,	// (0x00017f6c) bg_popup_call_poc_act_pane_g9

0x3a13,	// (0x00017f74) bg_popup_call_poc_act_pane_g10

0x3a1b,	// (0x00017f7c) bg_popup_call_poc_act_pane_g11

0x000a,

0x173a,	// (0x00015c9b) mup_scale_pane

0x18ce,	// (0x00015e2f) mup_scale_pane_g1

0x27dd,	// (0x00016d3e) mup_scale_pane_g2

0x0006,

0xf48e,	// (0x000239ef) mup_scale_pane_g

0x2801,	// (0x00016d62) msg_data_pane

0x2809,	// (0x00016d6a) scroll_pane_cp017

0xa615,	// (0x0001eb76) bg_list_pane_cp04_ParamLimits

0xa615,	// (0x0001eb76) bg_list_pane_cp04

0x2819,	// (0x00016d7a) msg_data_pane_g1

0xa018,	// (0x0001e579) msg_data_pane_g2

0xa020,	// (0x0001e581) msg_data_pane_g3

0xa62d,	// (0x0001eb8e) msg_data_pane_g4

0xa030,	// (0x0001e591) msg_data_pane_g5

0xa249,	// (0x0001e7aa) msg_data_pane_g6

0xa635,	// (0x0001eb96) msg_data_pane_g7

0x0006,

0xf49d,	// (0x000239fe) msg_data_pane_g

0xa63d,	// (0x0001eb9e) msg_text_pane_ParamLimits

0xa63d,	// (0x0001eb9e) msg_text_pane

0xa664,	// (0x0001ebc5) qrid_highlight_pane_cp011_ParamLimits

0xa664,	// (0x0001ebc5) qrid_highlight_pane_cp011

0x14df,	// (0x00015a40) msg_body_pane

0x14df,	// (0x00015a40) msg_header_pane

0x282a,	// (0x00016d8b) input_focus_pane_cp07

0xa686,	// (0x0001ebe7) msg_header_pane_t1_ParamLimits

0xa686,	// (0x0001ebe7) msg_header_pane_t1

0x283f,	// (0x00016da0) msg_header_pane_t2_ParamLimits

0x283f,	// (0x00016da0) msg_header_pane_t2

0x0001,

0xf4b1,	// (0x00023a12) msg_header_pane_t_ParamLimits

0xf4b1,	// (0x00023a12) msg_header_pane_t

0x2851,	// (0x00016db2) msg_body_pane_g1

0x2859,	// (0x00016dba) msg_body_pane_t1_ParamLimits

0x2859,	// (0x00016dba) msg_body_pane_t1

0x2884,	// (0x00016de5) msg_body_pane_t2_ParamLimits

0x2884,	// (0x00016de5) msg_body_pane_t2

0x2896,	// (0x00016df7) msg_body_pane_t3_ParamLimits

0x2896,	// (0x00016df7) msg_body_pane_t3

0x0002,

0xf4b6,	// (0x00023a17) msg_body_pane_t_ParamLimits

0xf4b6,	// (0x00023a17) msg_body_pane_t

0x7896,	// (0x0001bdf7) main_viewer_pane_g1_ParamLimits

0x7896,	// (0x0001bdf7) main_viewer_pane_g1

0x78a2,	// (0x0001be03) main_viewer_pane_g2_ParamLimits

0x78a2,	// (0x0001be03) main_viewer_pane_g2

0xa6b6,	// (0x0001ec17) main_viewer_pane_g3_ParamLimits

0xa6b6,	// (0x0001ec17) main_viewer_pane_g3

0xa6c5,	// (0x0001ec26) main_viewer_pane_g4_ParamLimits

0xa6c5,	// (0x0001ec26) main_viewer_pane_g4

0x78ae,	// (0x0001be0f) main_viewer_pane_g5_ParamLimits

0x78ae,	// (0x0001be0f) main_viewer_pane_g5

0x78ae,	// (0x0001be0f) main_viewer_pane_g7_ParamLimits

0x78ae,	// (0x0001be0f) main_viewer_pane_g7

0x78c0,	// (0x0001be21) main_viewer_pane_g8_ParamLimits

0x78c0,	// (0x0001be21) main_viewer_pane_g8

0x0007,

0xf4c6,	// (0x00023a27) main_viewer_pane_g_ParamLimits

0xf4c6,	// (0x00023a27) main_viewer_pane_g

0x28ea,	// (0x00016e4b) viewer_content_pane_ParamLimits

0x28ea,	// (0x00016e4b) viewer_content_pane

0xa6ec,	// (0x0001ec4d) main_postcard_pane_g1_ParamLimits

0xa6ec,	// (0x0001ec4d) main_postcard_pane_g1

0xa6f8,	// (0x0001ec59) main_postcard_pane_g2_ParamLimits

0xa6f8,	// (0x0001ec59) main_postcard_pane_g2

0xa704,	// (0x0001ec65) main_postcard_pane_g3_ParamLimits

0xa704,	// (0x0001ec65) main_postcard_pane_g3

0x0005,

0xf4d7,	// (0x00023a38) main_postcard_pane_g_ParamLimits

0xf4d7,	// (0x00023a38) main_postcard_pane_g

0xa710,	// (0x0001ec71) main_postcard_pane_g4

0x3c49,	// (0x000181aa) smil_status_volume_pane_g2

0xa734,	// (0x0001ec95) postcard_pane_ParamLimits

0xa734,	// (0x0001ec95) postcard_pane

0x2761,	// (0x00016cc2) postcard_pane_g1_ParamLimits

0x2761,	// (0x00016cc2) postcard_pane_g1

0xa764,	// (0x0001ecc5) postcard_pane_g2_ParamLimits

0xa764,	// (0x0001ecc5) postcard_pane_g2

0xa770,	// (0x0001ecd1) postcard_pane_g3_ParamLimits

0xa770,	// (0x0001ecd1) postcard_pane_g3

0x2906,	// (0x00016e67) postcard_pane_g4_ParamLimits

0x2906,	// (0x00016e67) postcard_pane_g4

0xa77c,	// (0x0001ecdd) postcard_pane_g5_ParamLimits

0xa77c,	// (0x0001ecdd) postcard_pane_g5

0xa788,	// (0x0001ece9) postcard_pane_g6_ParamLimits

0xa788,	// (0x0001ece9) postcard_pane_g6

0x28f8,	// (0x00016e59) postcard_pane_g7_ParamLimits

0x28f8,	// (0x00016e59) postcard_pane_g7

0x0006,

0xf4e4,	// (0x00023a45) postcard_pane_g_ParamLimits

0xf4e4,	// (0x00023a45) postcard_pane_g

0xa794,	// (0x0001ecf5) main_mp2_pane_g1_ParamLimits

0xa794,	// (0x0001ecf5) main_mp2_pane_g1

0xa7a0,	// (0x0001ed01) main_mp2_pane_g2_ParamLimits

0xa7a0,	// (0x0001ed01) main_mp2_pane_g2

0xa7ac,	// (0x0001ed0d) main_mp2_pane_g3_ParamLimits

0xa7ac,	// (0x0001ed0d) main_mp2_pane_g3

0x0002,

0xf4f3,	// (0x00023a54) main_mp2_pane_g_ParamLimits

0xf4f3,	// (0x00023a54) main_mp2_pane_g

0xa7b8,	// (0x0001ed19) main_mp2_pane_t1_ParamLimits

0xa7b8,	// (0x0001ed19) main_mp2_pane_t1

0xa7cd,	// (0x0001ed2e) main_mp2_pane_t2_ParamLimits

0xa7cd,	// (0x0001ed2e) main_mp2_pane_t2

0xa7df,	// (0x0001ed40) main_mp2_pane_t3_ParamLimits

0xa7df,	// (0x0001ed40) main_mp2_pane_t3

0x0002,

0xf4fa,	// (0x00023a5b) main_mp2_pane_t_ParamLimits

0xf4fa,	// (0x00023a5b) main_mp2_pane_t

0x2914,	// (0x00016e75) pec_content_pane_ParamLimits

0x2914,	// (0x00016e75) pec_content_pane

0x1d41,	// (0x000162a2) scroll_pane_cp015

0x2926,	// (0x00016e87) pec_attribute_pane_ParamLimits

0x2926,	// (0x00016e87) pec_attribute_pane

0xa7f1,	// (0x0001ed52) pec_content_pane_g1_ParamLimits

0xa7f1,	// (0x0001ed52) pec_content_pane_g1

0x2936,	// (0x00016e97) pec_content_pane_t1_ParamLimits

0x2936,	// (0x00016e97) pec_content_pane_t1

0x2948,	// (0x00016ea9) pec_content_pane_t2_ParamLimits

0x2948,	// (0x00016ea9) pec_content_pane_t2

0x0001,

0xf501,	// (0x00023a62) pec_content_pane_t_ParamLimits

0xf501,	// (0x00023a62) pec_content_pane_t

0xa7fd,	// (0x0001ed5e) list_single_graphic_pane_cp01_ParamLimits

0xa7fd,	// (0x0001ed5e) list_single_graphic_pane_cp01

0x173a,	// (0x00015c9b) bg_popup_sub_pane_cp04

0x295a,	// (0x00016ebb) popup_mup_playback_window_g1

0x2966,	// (0x00016ec7) popup_mup_playback_window_t1

0x297b,	// (0x00016edc) popup_mup_playback_window_t2

0x0001,

0xf506,	// (0x00023a67) popup_mup_playback_window_t

0x29b2,	// (0x00016f13) main_image_pane_g1_ParamLimits

0x29b2,	// (0x00016f13) main_image_pane_g1

0x29f5,	// (0x00016f56) scroll_pane_cp018_ParamLimits

0x29f5,	// (0x00016f56) scroll_pane_cp018

0x2a0d,	// (0x00016f6e) scroll_pane_cp016_ParamLimits

0x2a0d,	// (0x00016f6e) scroll_pane_cp016

0xa882,	// (0x0001ede3) smil2_image_pane_ParamLimits

0xa882,	// (0x0001ede3) smil2_image_pane

0xa8aa,	// (0x0001ee0b) smil2_root_pane_ParamLimits

0xa8aa,	// (0x0001ee0b) smil2_root_pane

0xa8d6,	// (0x0001ee37) smil2_text_pane_ParamLimits

0xa8d6,	// (0x0001ee37) smil2_text_pane

0x14df,	// (0x00015a40) bg_list_pane_cp06

0x2a49,	// (0x00016faa) grid_radio_pane

0x14df,	// (0x00015a40) bg_popup_window_pane_cp06

0x2a51,	// (0x00016fb2) main_fmradio_pane_t1

0x23aa,	// (0x0001690b) heading_pane_cp04

0x2a5f,	// (0x00016fc0) main_fmradio_pane_t2

0x3a63,	// (0x00017fc4) popup_cale_lunar_info_window_g1

0x2a6d,	// (0x00016fce) main_fmradio_pane_t3

0x3a6b,	// (0x00017fcc) popup_cale_lunar_info_window_g2

0x2a7b,	// (0x00016fdc) main_fmradio_pane_t4

0x0001,

0x2a89,	// (0x00016fea) main_fmradio_pane_t5

0x0004,

0xf5f4,	// (0x00023b55) popup_cale_lunar_info_window_g

0xf51b,	// (0x00023a7c) main_fmradio_pane_t

0x2a97,	// (0x00016ff8) wait_bar_pane_cp03

0x2a9f,	// (0x00017000) cell_fmradio_pane_ParamLimits

0x2a9f,	// (0x00017000) cell_fmradio_pane

0x28f8,	// (0x00016e59) cell_fmradio_pane_g1_ParamLimits

0x28f8,	// (0x00016e59) cell_fmradio_pane_g1

0x14df,	// (0x00015a40) grid_highlight_pane_cp011

0x2ab2,	// (0x00017013) poc_content_pane_ParamLimits

0x2ab2,	// (0x00017013) poc_content_pane

0x2ac5,	// (0x00017026) scroll_pane_cp019

0xa90a,	// (0x0001ee6b) popup_call_poc_act_window_ParamLimits

0xa90a,	// (0x0001ee6b) popup_call_poc_act_window

0xa917,	// (0x0001ee78) popup_call_poc_inact_window_ParamLimits

0xa917,	// (0x0001ee78) popup_call_poc_inact_window

0xf5b8,	// (0x00023b19) bg_popup_call_poc_act_pane_g

0x3a23,	// (0x00017f84) bg_popup_call_poc_inact_pane_g1

0x3a2b,	// (0x00017f8c) bg_popup_call_poc_inact_pane_g2

0x2acd,	// (0x0001702e) popup_call_poc_act_window_g2

0x3a33,	// (0x00017f94) bg_popup_call_poc_inact_pane_g3

0x39b3,	// (0x00017f14) bg_popup_call_poc_inact_pane_g4

0x3a3b,	// (0x00017f9c) bg_popup_call_poc_inact_pane_g5

0x2ad5,	// (0x00017036) popup_call_poc_act_window_t1_ParamLimits

0x2ad5,	// (0x00017036) popup_call_poc_act_window_t1

0x2afd,	// (0x0001705e) popup_call_poc_act_window_t2_ParamLimits

0x2afd,	// (0x0001705e) popup_call_poc_act_window_t2

0x2b25,	// (0x00017086) popup_call_poc_act_window_t3_ParamLimits

0x2b25,	// (0x00017086) popup_call_poc_act_window_t3

0x2b4d,	// (0x000170ae) popup_call_poc_act_window_t4_ParamLimits

0x2b4d,	// (0x000170ae) popup_call_poc_act_window_t4

0x0003,

0xf526,	// (0x00023a87) popup_call_poc_act_window_t_ParamLimits

0xf526,	// (0x00023a87) popup_call_poc_act_window_t

0x3a43,	// (0x00017fa4) bg_popup_call_poc_inact_pane_g6

0x3a4b,	// (0x00017fac) bg_popup_call_poc_inact_pane_g7

0x3a53,	// (0x00017fb4) bg_popup_call_poc_inact_pane_g8

0x2b5f,	// (0x000170c0) popup_call_poc_inact_window_g2

0x3a5b,	// (0x00017fbc) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5cf,	// (0x00023b30) bg_popup_call_poc_inact_pane_g

0x2b67,	// (0x000170c8) popup_call_poc_inact_window_t1_ParamLimits

0x2b67,	// (0x000170c8) popup_call_poc_inact_window_t1

0x2b7c,	// (0x000170dd) popup_call_poc_inact_window_t2_ParamLimits

0x2b7c,	// (0x000170dd) popup_call_poc_inact_window_t2

0x2b91,	// (0x000170f2) popup_call_poc_inact_window_t3_ParamLimits

0x2b91,	// (0x000170f2) popup_call_poc_inact_window_t3

0x0002,

0xf52f,	// (0x00023a90) popup_call_poc_inact_window_t_ParamLimits

0xf52f,	// (0x00023a90) popup_call_poc_inact_window_t

0x3bcf,	// (0x00018130) context_pane_ParamLimits

0xae12,	// (0x0001f373) signal_pane_ParamLimits

0x2690,	// (0x00016bf1) main_call2_pane

0x3bbd,	// (0x0001811e) popup_phob_thumbnail2_window_ParamLimits

0x3bbd,	// (0x0001811e) popup_phob_thumbnail2_window

0x7866,	// (0x0001bdc7) aid_hotspot_pointer_arrow_pane

0x786e,	// (0x0001bdcf) aid_hotspot_pointer_hand_pane

0xabc6,	// (0x0001f127) phob_pre_status_pane_g5

0x906d,	// (0x0001d5ce) cams_zoom_pane_ParamLimits

0x9079,	// (0x0001d5da) image_vga_pane_ParamLimits

0x9086,	// (0x0001d5e7) main_camera_pane_g1_ParamLimits

0x9092,	// (0x0001d5f3) main_camera_pane_g2_ParamLimits

0x909e,	// (0x0001d5ff) main_camera_pane_g3_ParamLimits

0x90aa,	// (0x0001d60b) main_camera_pane_g4_ParamLimits

0x90b6,	// (0x0001d617) main_camera_pane_g5_ParamLimits

0x90c2,	// (0x0001d623) main_camera_pane_g6_ParamLimits

0x90ce,	// (0x0001d62f) main_camera_pane_g7_ParamLimits

0xf22e,	// (0x0002378f) main_camera_pane_g_ParamLimits

0x90da,	// (0x0001d63b) main_camera_pane_t1_ParamLimits

0x90ec,	// (0x0001d64d) main_camera_pane_t2_ParamLimits

0xf23f,	// (0x000237a0) main_camera_pane_t_ParamLimits

0x173a,	// (0x00015c9b) bg_popup_preview_window_pane_cp01_ParamLimits

0x173a,	// (0x00015c9b) bg_popup_preview_window_pane_cp01

0x2ba6,	// (0x00017107) popup_phob_thumbnail2_window_g1_ParamLimits

0x2ba6,	// (0x00017107) popup_phob_thumbnail2_window_g1

0x14df,	// (0x00015a40) call2_cli_visual_pane

0xa933,	// (0x0001ee94) popup_call2_audio_conf_window_ParamLimits

0xa933,	// (0x0001ee94) popup_call2_audio_conf_window

0xa946,	// (0x0001eea7) popup_call2_audio_first_window_ParamLimits

0xa946,	// (0x0001eea7) popup_call2_audio_first_window

0xa9c2,	// (0x0001ef23) popup_call2_audio_in_window_ParamLimits

0xa9c2,	// (0x0001ef23) popup_call2_audio_in_window

0xa9f2,	// (0x0001ef53) popup_call2_audio_out_window_ParamLimits

0xa9f2,	// (0x0001ef53) popup_call2_audio_out_window

0xaa3e,	// (0x0001ef9f) popup_call2_audio_second_window_ParamLimits

0xaa3e,	// (0x0001ef9f) popup_call2_audio_second_window

0xaa8a,	// (0x0001efeb) popup_call2_audio_wait_window_ParamLimits

0xaa8a,	// (0x0001efeb) popup_call2_audio_wait_window

0x14df,	// (0x00015a40) bg_popup_call2_act_pane_cp03

0x171c,	// (0x00015c7d) list_conf_pane_cp

0x2bb2,	// (0x00017113) popup_call2_audio_conf_window_t1

0x2407,	// (0x00016968) list_single_graphic_popup_conf2_pane_ParamLimits

0x2407,	// (0x00016968) list_single_graphic_popup_conf2_pane

0x241a,	// (0x0001697b) list_highlight_pane_cp04

0x2bc0,	// (0x00017121) list_single_graphic_popup_conf2_pane_g1

0x242b,	// (0x0001698c) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf536,	// (0x00023a97) list_single_graphic_popup_conf2_pane_g

0x2bc8,	// (0x00017129) list_single_graphic_popup_conf2_pane_t1

0x2bd6,	// (0x00017137) bg_popup_call2_act_pane_cp01_ParamLimits

0x2bd6,	// (0x00017137) bg_popup_call2_act_pane_cp01

0x2c60,	// (0x000171c1) call_type_pane_cp05_ParamLimits

0x2c60,	// (0x000171c1) call_type_pane_cp05

0x2cb4,	// (0x00017215) popup_call2_audio_second_window_g1_ParamLimits

0x2cb4,	// (0x00017215) popup_call2_audio_second_window_g1

0x2d08,	// (0x00017269) popup_call2_audio_second_window_g2_ParamLimits

0x2d08,	// (0x00017269) popup_call2_audio_second_window_g2

0x0002,

0xf53b,	// (0x00023a9c) popup_call2_audio_second_window_g_ParamLimits

0xf53b,	// (0x00023a9c) popup_call2_audio_second_window_g

0x2d6d,	// (0x000172ce) popup_call2_audio_second_window_t1_ParamLimits

0x2d6d,	// (0x000172ce) popup_call2_audio_second_window_t1

0x2e28,	// (0x00017389) popup_call2_audio_second_window_t2_ParamLimits

0x2e28,	// (0x00017389) popup_call2_audio_second_window_t2

0x2e7b,	// (0x000173dc) popup_call2_audio_second_window_t3_ParamLimits

0x2e7b,	// (0x000173dc) popup_call2_audio_second_window_t3

0x0003,

0xf542,	// (0x00023aa3) popup_call2_audio_second_window_t_ParamLimits

0xf542,	// (0x00023aa3) popup_call2_audio_second_window_t

0x14df,	// (0x00015a40) bg_popup_call2_in_pane_cp02

0x14e9,	// (0x00015a4a) call_type_pane_cp04

0x14f1,	// (0x00015a52) popup_call2_audio_wait_window_g1

0x14f9,	// (0x00015a5a) popup_call2_audio_wait_window_g2

0x0001,

0xf11b,	// (0x0002367c) popup_call2_audio_wait_window_g

0x1501,	// (0x00015a62) popup_call2_audio_wait_window_t3

0x2f6e,	// (0x000174cf) bg_popup_call2_act_pane_ParamLimits

0x2f6e,	// (0x000174cf) bg_popup_call2_act_pane

0x302e,	// (0x0001758f) call_type_pane_cp03_ParamLimits

0x302e,	// (0x0001758f) call_type_pane_cp03

0x3092,	// (0x000175f3) popup_call2_audio_first_window_g1_ParamLimits

0x3092,	// (0x000175f3) popup_call2_audio_first_window_g1

0x3102,	// (0x00017663) popup_call2_audio_first_window_g2_ParamLimits

0x3102,	// (0x00017663) popup_call2_audio_first_window_g2

0x2761,	// (0x00016cc2) popup_call2_audio_first_window_g3_ParamLimits

0x2761,	// (0x00016cc2) popup_call2_audio_first_window_g3

0x0004,

0xf54b,	// (0x00023aac) popup_call2_audio_first_window_g_ParamLimits

0xf54b,	// (0x00023aac) popup_call2_audio_first_window_g

0x31e0,	// (0x00017741) popup_call2_audio_first_window_t1_ParamLimits

0x31e0,	// (0x00017741) popup_call2_audio_first_window_t1

0x32e3,	// (0x00017844) popup_call2_audio_first_window_t4_ParamLimits

0x32e3,	// (0x00017844) popup_call2_audio_first_window_t4

0x33c6,	// (0x00017927) popup_call2_audio_first_window_t5_ParamLimits

0x33c6,	// (0x00017927) popup_call2_audio_first_window_t5

0x0003,

0xf556,	// (0x00023ab7) popup_call2_audio_first_window_t_ParamLimits

0xf556,	// (0x00023ab7) popup_call2_audio_first_window_t

0x1732,	// (0x00015c93) bg_popup_call2_act_pane_g1

0x3a73,	// (0x00017fd4) popup_cale_lunar_info_window_t1

0x3a81,	// (0x00017fe2) popup_cale_lunar_info_window_t2

0x3a8f,	// (0x00017ff0) popup_cale_lunar_info_window_t3

0x14df,	// (0x00015a40) bg_popup_call2_bubble_pane

0x34c7,	// (0x00017a28) bg_popup_call2_in_pane_cp01_ParamLimits

0x34c7,	// (0x00017a28) bg_popup_call2_in_pane_cp01

0x11bb,	// (0x0001571c) call_type_pane_cp02

0x350f,	// (0x00017a70) popup_call2_audio_out_window_g1_ParamLimits

0x350f,	// (0x00017a70) popup_call2_audio_out_window_g1

0x353b,	// (0x00017a9c) popup_call2_audio_out_window_g2_ParamLimits

0x353b,	// (0x00017a9c) popup_call2_audio_out_window_g2

0x3563,	// (0x00017ac4) popup_call2_audio_out_window_g3_ParamLimits

0x3563,	// (0x00017ac4) popup_call2_audio_out_window_g3

0x0003,

0xf55f,	// (0x00023ac0) popup_call2_audio_out_window_g_ParamLimits

0xf55f,	// (0x00023ac0) popup_call2_audio_out_window_g

0x359e,	// (0x00017aff) popup_call2_audio_out_window_t1_ParamLimits

0x359e,	// (0x00017aff) popup_call2_audio_out_window_t1

0x35fd,	// (0x00017b5e) popup_call2_audio_out_window_t2_ParamLimits

0x35fd,	// (0x00017b5e) popup_call2_audio_out_window_t2

0x3651,	// (0x00017bb2) popup_call2_audio_out_window_t3_ParamLimits

0x3651,	// (0x00017bb2) popup_call2_audio_out_window_t3

0x3667,	// (0x00017bc8) popup_call2_audio_out_window_t4_ParamLimits

0x3667,	// (0x00017bc8) popup_call2_audio_out_window_t4

0x367d,	// (0x00017bde) popup_call2_audio_out_window_t5_ParamLimits

0x367d,	// (0x00017bde) popup_call2_audio_out_window_t5

0x0005,

0xf568,	// (0x00023ac9) popup_call2_audio_out_window_t_ParamLimits

0xf568,	// (0x00023ac9) popup_call2_audio_out_window_t

0x36e1,	// (0x00017c42) bg_popup_call2_in_pane_ParamLimits

0x36e1,	// (0x00017c42) bg_popup_call2_in_pane

0x373d,	// (0x00017c9e) popup_call2_audio_in_window_g1_ParamLimits

0x373d,	// (0x00017c9e) popup_call2_audio_in_window_g1

0x3775,	// (0x00017cd6) popup_call2_audio_in_window_g2_ParamLimits

0x3775,	// (0x00017cd6) popup_call2_audio_in_window_g2

0x37ad,	// (0x00017d0e) popup_call2_audio_in_window_g3_ParamLimits

0x37ad,	// (0x00017d0e) popup_call2_audio_in_window_g3

0x0003,

0xf575,	// (0x00023ad6) popup_call2_audio_in_window_g_ParamLimits

0xf575,	// (0x00023ad6) popup_call2_audio_in_window_g

0x3805,	// (0x00017d66) popup_call2_audio_in_window_t1_ParamLimits

0x3805,	// (0x00017d66) popup_call2_audio_in_window_t1

0x3885,	// (0x00017de6) popup_call2_audio_in_window_t2_ParamLimits

0x3885,	// (0x00017de6) popup_call2_audio_in_window_t2

0x3905,	// (0x00017e66) popup_call2_audio_in_window_t3_ParamLimits

0x3905,	// (0x00017e66) popup_call2_audio_in_window_t3

0x391f,	// (0x00017e80) popup_call2_audio_in_window_t4_ParamLimits

0x391f,	// (0x00017e80) popup_call2_audio_in_window_t4

0x3931,	// (0x00017e92) popup_call2_audio_in_window_t5_ParamLimits

0x3931,	// (0x00017e92) popup_call2_audio_in_window_t5

0x3946,	// (0x00017ea7) popup_call2_audio_in_window_t6_ParamLimits

0x3946,	// (0x00017ea7) popup_call2_audio_in_window_t6

0x0005,

0xf57e,	// (0x00023adf) popup_call2_audio_in_window_t_ParamLimits

0xf57e,	// (0x00023adf) popup_call2_audio_in_window_t

0x1732,	// (0x00015c93) bg_popup_call2_in_pane_g1

0x3a9d,	// (0x00017ffe) popup_cale_lunar_info_window_t4

0x0003,

0xf5f9,	// (0x00023b5a) popup_cale_lunar_info_window_t

0x173a,	// (0x00015c9b) bg_popup_call2_rect_pane_ParamLimits

0x173a,	// (0x00015c9b) bg_popup_call2_rect_pane

0x14df,	// (0x00015a40) call2_cli_visual_graphic_pane

0x14df,	// (0x00015a40) call2_cli_visual_text_pane

0x78d8,	// (0x0001be39) smil_status_volume_pane_g3

0x0002,

0x18ce,	// (0x00015e2f) call2_cli_visual_graphic_pane_g1

0x18ce,	// (0x00015e2f) call2_cli_visual_graphic_pane_g2

0x18ce,	// (0x00015e2f) call2_cli_visual_graphic_pane_g3

0x0002,

0xf58b,	// (0x00023aec) call2_cli_visual_graphic_pane_g

0x395b,	// (0x00017ebc) bg_popup_call2_rect_pane_g1

0x1976,	// (0x00015ed7) bg_popup_call2_rect_pane_g2

0x3963,	// (0x00017ec4) bg_popup_call2_rect_pane_g3

0x396b,	// (0x00017ecc) bg_popup_call2_rect_pane_g4

0x3973,	// (0x00017ed4) bg_popup_call2_rect_pane_g5

0x397b,	// (0x00017edc) bg_popup_call2_rect_pane_g6

0x3983,	// (0x00017ee4) bg_popup_call2_rect_pane_g7

0x398b,	// (0x00017eec) bg_popup_call2_rect_pane_g8

0x3993,	// (0x00017ef4) bg_popup_call2_rect_pane_g9

0x0008,

0xf592,	// (0x00023af3) bg_popup_call2_rect_pane_g

0x399b,	// (0x00017efc) bg_popup_call2_bubble_pane_g1

0x39a3,	// (0x00017f04) bg_popup_call2_bubble_pane_g2

0x39ab,	// (0x00017f0c) bg_popup_call2_bubble_pane_g3

0x39b3,	// (0x00017f14) bg_popup_call2_bubble_pane_g4

0x39bb,	// (0x00017f1c) bg_popup_call2_bubble_pane_g5

0x39c3,	// (0x00017f24) bg_popup_call2_bubble_pane_g6

0x39cb,	// (0x00017f2c) bg_popup_call2_bubble_pane_g7

0x39d3,	// (0x00017f34) bg_popup_call2_bubble_pane_g8

0x39db,	// (0x00017f3c) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5a5,	// (0x00023b06) bg_popup_call2_bubble_pane_g

0x8d94,	// (0x0001d2f5) aid_cale_week_size_cell_pane

0x90fe,	// (0x0001d65f) aid_cams_cif_uncrop_pane_ParamLimits

0x90fe,	// (0x0001d65f) aid_cams_cif_uncrop_pane

0x9256,	// (0x0001d7b7) aid_cams_size_cell_ParamLimits

0x9256,	// (0x0001d7b7) aid_cams_size_cell

0x9262,	// (0x0001d7c3) grid_cams_pane_ParamLimits

0x926e,	// (0x0001d7cf) linegrid_cams_pane_ParamLimits

0x9383,	// (0x0001d8e4) call_video_pane_t1

0x93a0,	// (0x0001d901) call_video_pane_t2

0x0001,

0xf292,	// (0x000237f3) call_video_pane_t

0x9782,	// (0x0001dce3) aid_cale_month_size_cell_pane_ParamLimits

0x9782,	// (0x0001dce3) aid_cale_month_size_cell_pane

0xf642,	// (0x00023ba3) smil_status_volume_pane_g

0x78e5,	// (0x0001be46) volume_smil_pane_ParamLimits

0x107f,	// (0x000155e0) aid_popup2_width_pane

0x8cff,	// (0x0001d260) cell_qdial_pane_g4_ParamLimits

0x8cff,	// (0x0001d260) cell_qdial_pane_g4

0xa15c,	// (0x0001e6bd) aid_blid_cardinal_pane_ParamLimits

0xa168,	// (0x0001e6c9) aid_blid_destination_pane_ParamLimits

0xa168,	// (0x0001e6c9) aid_blid_destination_pane

0x173a,	// (0x00015c9b) bg_popup_call_poc_act_pane_ParamLimits

0x173a,	// (0x00015c9b) bg_popup_call_poc_act_pane

0x173a,	// (0x00015c9b) bg_popup_call_poc_inact_pane_ParamLimits

0x173a,	// (0x00015c9b) bg_popup_call_poc_inact_pane

0x39e3,	// (0x00017f44) bg_popup_call_poc_act_pane_g1

0x39eb,	// (0x00017f4c) bg_popup_call_poc_act_pane_g2

0x39f3,	// (0x00017f54) bg_popup_call_poc_act_pane_g3

0x39b3,	// (0x00017f14) bg_popup_call_poc_act_pane_g4

0x39bb,	// (0x00017f1c) bg_popup_call_poc_act_pane_g5

0x39fb,	// (0x00017f5c) bg_popup_call_poc_act_pane_g6

0x39cb,	// (0x00017f2c) bg_popup_call_poc_act_pane_g7

0x3a03,	// (0x00017f64) bg_popup_call_poc_act_pane_g8

0x14df,	// (0x00015a40) main_usb_pane

0x3b9c,	// (0x000180fd) popup_cale_lunar_info_window

0x9625,	// (0x0001db86) im_reading_pane_t1_ParamLimits

0x1c8a,	// (0x000161eb) list_im_pane_ParamLimits

0x1c9b,	// (0x000161fc) scroll_pane_cp07_ParamLimits

0x14df,	// (0x00015a40) grid_highlight_pane_cp012

0x173a,	// (0x00015c9b) mup_scale_pane_ParamLimits

0x2761,	// (0x00016cc2) main_usb_pane_g1_ParamLimits

0x2761,	// (0x00016cc2) main_usb_pane_g1

0xaaeb,	// (0x0001f04c) main_usb_pane_g2_ParamLimits

0xaaeb,	// (0x0001f04c) main_usb_pane_g2

0x0001,

0xf5e2,	// (0x00023b43) main_usb_pane_g_ParamLimits

0xf5e2,	// (0x00023b43) main_usb_pane_g

0xaaf7,	// (0x0001f058) main_usb_pane_t1_ParamLimits

0xaaf7,	// (0x0001f058) main_usb_pane_t1

0xab09,	// (0x0001f06a) main_usb_pane_t2_ParamLimits

0xab09,	// (0x0001f06a) main_usb_pane_t2

0xab1b,	// (0x0001f07c) main_usb_pane_t3_ParamLimits

0xab1b,	// (0x0001f07c) main_usb_pane_t3

0xab2d,	// (0x0001f08e) main_usb_pane_t4_ParamLimits

0xab2d,	// (0x0001f08e) main_usb_pane_t4

0xab3f,	// (0x0001f0a0) main_usb_pane_t5_ParamLimits

0xab3f,	// (0x0001f0a0) main_usb_pane_t5

0xab51,	// (0x0001f0b2) main_usb_pane_t6_ParamLimits

0xab51,	// (0x0001f0b2) main_usb_pane_t6

0x0005,

0xf5e7,	// (0x00023b48) main_usb_pane_t_ParamLimits

0x2554,	// (0x00016ab5) aid_text_placing

0xa108,	// (0x0001e669) main_location2_pane_t1_ParamLimits

0xa11e,	// (0x0001e67f) main_location2_pane_t2_ParamLimits

0xa134,	// (0x0001e695) main_location2_pane_t3_ParamLimits

0xa14a,	// (0x0001e6ab) main_location2_pane_t4_ParamLimits

0xa14a,	// (0x0001e6ab) main_location2_pane_t4

0xf3f3,	// (0x00023954) main_location2_pane_t_ParamLimits

0x1776,	// (0x00015cd7) find_pinb_pane_g2_ParamLimits

0x1776,	// (0x00015cd7) find_pinb_pane_g2

0x0001,

0xf141,	// (0x000236a2) find_pinb_pane_g_ParamLimits

0xf141,	// (0x000236a2) find_pinb_pane_g

0x1782,	// (0x00015ce3) find_pinb_pane_t1_ParamLimits

0x1794,	// (0x00015cf5) find_pinb_pane_t2_ParamLimits

0xf146,	// (0x000236a7) find_pinb_pane_t_ParamLimits

0x14df,	// (0x00015a40) main_call3_pane

0x9a3a,	// (0x0001df9b) cale_month_day_heading_pane_t1_ParamLimits

0x9a98,	// (0x0001dff9) cale_month_day_heading_pane_t2_ParamLimits

0x9afd,	// (0x0001e05e) cale_month_day_heading_pane_t3_ParamLimits

0x9b62,	// (0x0001e0c3) cale_month_day_heading_pane_t4_ParamLimits

0x9bc7,	// (0x0001e128) cale_month_day_heading_pane_t5_ParamLimits

0x9c2c,	// (0x0001e18d) cale_month_day_heading_pane_t6_ParamLimits

0x9c91,	// (0x0001e1f2) cale_month_day_heading_pane_t7_ParamLimits

0xf2ca,	// (0x0002382b) cale_month_day_heading_pane_t_ParamLimits

0x1f21,	// (0x00016482) smil_status_volume_pane

0xa74c,	// (0x0001ecad) postcard_address_pane_ParamLimits

0xa74c,	// (0x0001ecad) postcard_address_pane

0xa758,	// (0x0001ecb9) postcard_message_pane_ParamLimits

0xa758,	// (0x0001ecb9) postcard_message_pane

0xaac7,	// (0x0001f028) call2_cli_visual_pane_t1_ParamLimits

0xaac7,	// (0x0001f028) call2_cli_visual_pane_t1

0xafd3,	// (0x0001f534) postcard_message_pane_t1_ParamLimits

0xafd3,	// (0x0001f534) postcard_message_pane_t1

0xafbc,	// (0x0001f51d) postcard_address_pane_t1_ParamLimits

0xafbc,	// (0x0001f51d) postcard_address_pane_t1

0xafaf,	// (0x0001f510) popup_call3_audio_in_window_ParamLimits

0xafaf,	// (0x0001f510) popup_call3_audio_in_window

0xae97,	// (0x0001f3f8) bg_popup_call3_in_pane_ParamLimits

0xae97,	// (0x0001f3f8) bg_popup_call3_in_pane

0xaef5,	// (0x0001f456) popup_call3_audio_in_window_g1_ParamLimits

0xaef5,	// (0x0001f456) popup_call3_audio_in_window_g1

0xaf0d,	// (0x0001f46e) popup_call3_audio_in_window_g2_ParamLimits

0xaf0d,	// (0x0001f46e) popup_call3_audio_in_window_g2

0xaf25,	// (0x0001f486) popup_call3_audio_in_window_g3_ParamLimits

0xaf25,	// (0x0001f486) popup_call3_audio_in_window_g3

0x0003,

0xf649,	// (0x00023baa) popup_call3_audio_in_window_g_ParamLimits

0xf649,	// (0x00023baa) popup_call3_audio_in_window_g

0xaf4d,	// (0x0001f4ae) popup_call3_audio_in_window_t1_ParamLimits

0xaf4d,	// (0x0001f4ae) popup_call3_audio_in_window_t1

0xaf75,	// (0x0001f4d6) popup_call3_audio_in_window_t2_ParamLimits

0xaf75,	// (0x0001f4d6) popup_call3_audio_in_window_t2

0xaf9d,	// (0x0001f4fe) popup_call3_audio_in_window_t3_ParamLimits

0xaf9d,	// (0x0001f4fe) popup_call3_audio_in_window_t3

0x0002,

0xf652,	// (0x00023bb3) popup_call3_audio_in_window_t_ParamLimits

0xf652,	// (0x00023bb3) popup_call3_audio_in_window_t

0x2690,	// (0x00016bf1) bg_popup_call3_rect_pane

0x395b,	// (0x00017ebc) bg_popup_call3_rect_pane_g1

0x1976,	// (0x00015ed7) bg_popup_call3_rect_pane_g2

0x3963,	// (0x00017ec4) bg_popup_call3_rect_pane_g3

0x396b,	// (0x00017ecc) bg_popup_call3_rect_pane_g4

0x3973,	// (0x00017ed4) bg_popup_call3_rect_pane_g5

0x397b,	// (0x00017edc) bg_popup_call3_rect_pane_g6

0x3983,	// (0x00017ee4) bg_popup_call3_rect_pane_g7

0xa478,	// (0x0001e9d9) mup_visualizer_osc_pane

0x276f,	// (0x00016cd0) mup_visualizer_spec_pane

0xaeb7,	// (0x0001f418) call3_video_qcif_pane_ParamLimits

0xaeb7,	// (0x0001f418) call3_video_qcif_pane

0xaec7,	// (0x0001f428) call3_video_qcif_uncrop_pane_ParamLimits

0xaec7,	// (0x0001f428) call3_video_qcif_uncrop_pane

0xaed3,	// (0x0001f434) call3_video_subqcif_pane_ParamLimits

0xaed3,	// (0x0001f434) call3_video_subqcif_pane

0xaee5,	// (0x0001f446) call3_video_subqcif_uncrop_pane_ParamLimits

0xaee5,	// (0x0001f446) call3_video_subqcif_uncrop_pane

0xaf3d,	// (0x0001f49e) popup_call3_audio_in_window_g4_ParamLimits

0xaf3d,	// (0x0001f49e) popup_call3_audio_in_window_g4

0xae86,	// (0x0001f3e7) mup_spec_half_pane

0xae8f,	// (0x0001f3f0) mup_spec_half_pane_cp

0x3c2f,	// (0x00018190) mup_osc_middle_pane

0x3c38,	// (0x00018199) mup_visualizer_osc_pane_g1

0xae67,	// (0x0001f3c8) mup_spec_bar_pane_ParamLimits

0xae67,	// (0x0001f3c8) mup_spec_bar_pane

0x3c1c,	// (0x0001817d) mup_spec_bar_pane_g1

0x3c26,	// (0x00018187) mup_spec_bar_pane_g2

0x0001,

0xf63d,	// (0x00023b9e) mup_spec_bar_pane_g

0x8d94,	// (0x0001d2f5) aid_cale_week_size_cell_pane_ParamLimits

0x8da7,	// (0x0001d308) bg_cale_heading_pane_ParamLimits

0x1a02,	// (0x00015f63) bg_cale_pane_cp01_ParamLimits

0x8dbb,	// (0x0001d31c) cale_week_corner_pane_ParamLimits

0x8dd1,	// (0x0001d332) cale_week_day_heading_pane_ParamLimits

0x8de5,	// (0x0001d346) cale_week_scroll_pane_g1_ParamLimits

0x8df6,	// (0x0001d357) cale_week_scroll_pane_g2_ParamLimits

0x8e07,	// (0x0001d368) cale_week_scroll_pane_g3_ParamLimits

0x8e18,	// (0x0001d379) cale_week_scroll_pane_g4_ParamLimits

0x8e29,	// (0x0001d38a) cale_week_scroll_pane_g5_ParamLimits

0x8e3a,	// (0x0001d39b) cale_week_scroll_pane_g6_ParamLimits

0x8e4b,	// (0x0001d3ac) cale_week_scroll_pane_g7_ParamLimits

0x8e5c,	// (0x0001d3bd) cale_week_scroll_pane_g8_ParamLimits

0x8e6d,	// (0x0001d3ce) cale_week_scroll_pane_g9_ParamLimits

0x8e7e,	// (0x0001d3df) cale_week_scroll_pane_g10_ParamLimits

0x8e8f,	// (0x0001d3f0) cale_week_scroll_pane_g11_ParamLimits

0x8ea0,	// (0x0001d401) cale_week_scroll_pane_g12_ParamLimits

0x8eb1,	// (0x0001d412) cale_week_scroll_pane_g13_ParamLimits

0x8ec2,	// (0x0001d423) cale_week_scroll_pane_g14_ParamLimits

0x8ed3,	// (0x0001d434) cale_week_scroll_pane_g15_ParamLimits

0xf1d2,	// (0x00023733) cale_week_scroll_pane_g_ParamLimits

0x8ee4,	// (0x0001d445) cale_week_time_pane_ParamLimits

0x8ef5,	// (0x0001d456) grid_cale_week_pane_ParamLimits

0x1a1b,	// (0x00015f7c) listscroll_cale_week_pane_t1

0x8f08,	// (0x0001d469) scroll_pane_cp08_ParamLimits

0x97c3,	// (0x0001dd24) cale_month_corner_pane_ParamLimits

0x1ec1,	// (0x00016422) cale_month_pane_t1

0x9a0b,	// (0x0001df6c) cale_month_week_pane_ParamLimits

0x2761,	// (0x00016cc2) popup_call_status_window_g1_ParamLimits

0x9fae,	// (0x0001e50f) popup_call_status_window_g2_ParamLimits

0x9fba,	// (0x0001e51b) popup_call_status_window_g3_ParamLimits

0xf37a,	// (0x000238db) popup_call_status_window_g_ParamLimits

0x2333,	// (0x00016894) aid_call2_pane

0xa67a,	// (0x0001ebdb) msg_header_pane_g1

0xa74c,	// (0x0001ecad) postcard_address2_pane_ParamLimits

0xa74c,	// (0x0001ecad) postcard_address2_pane

0xa758,	// (0x0001ecb9) postcard_message2_pane_ParamLimits

0xa758,	// (0x0001ecb9) postcard_message2_pane

0xae1e,	// (0x0001f37f) message2_row_pane_ParamLimits

0xae1e,	// (0x0001f37f) message2_row_pane

0xae36,	// (0x0001f397) address2_row_pane_ParamLimits

0xae36,	// (0x0001f397) address2_row_pane

0x3bea,	// (0x0001814b) postcard_message2_row_pane_g1

0x3bf2,	// (0x00018153) postcard_message2_row_pane_t1

0x3bea,	// (0x0001814b) address2_row_pane_g1

0x3bf2,	// (0x00018153) address2_row_pane_t1

0x7721,	// (0x0001bc82) aid_size_cell_vorec

0x14df,	// (0x00015a40) main_rss_pane

0xae49,	// (0x0001f3aa) rss_list_single_pane_ParamLimits

0xae49,	// (0x0001f3aa) rss_list_single_pane

0x3c00,	// (0x00018161) rss_list_single_pane_t1

0x3c0e,	// (0x0001816f) rss_list_single_pane_t2

0x0001,

0xf638,	// (0x00023b99) rss_list_single_pane_t

0x14df,	// (0x00015a40) main_camera2_pane

0x14df,	// (0x00015a40) main_video2_pane

0x792f,	// (0x0001be90) cams_zoom_pane_cp2_ParamLimits

0x792f,	// (0x0001be90) cams_zoom_pane_cp2

0x793b,	// (0x0001be9c) image2_vga_pane_ParamLimits

0x793b,	// (0x0001be9c) image2_vga_pane

0x794a,	// (0x0001beab) main_camera2_pane_g1_ParamLimits

0x794a,	// (0x0001beab) main_camera2_pane_g1

0x7956,	// (0x0001beb7) main_camera2_pane_g2_ParamLimits

0x7956,	// (0x0001beb7) main_camera2_pane_g2

0x7962,	// (0x0001bec3) main_camera2_pane_g3_ParamLimits

0x7962,	// (0x0001bec3) main_camera2_pane_g3

0x796e,	// (0x0001becf) main_camera2_pane_g4_ParamLimits

0x796e,	// (0x0001becf) main_camera2_pane_g4

0x797a,	// (0x0001bedb) main_camera2_pane_g5_ParamLimits

0x797a,	// (0x0001bedb) main_camera2_pane_g5

0x7986,	// (0x0001bee7) main_camera2_pane_g6_ParamLimits

0x7986,	// (0x0001bee7) main_camera2_pane_g6

0x7992,	// (0x0001bef3) main_camera2_pane_g7_ParamLimits

0x7992,	// (0x0001bef3) main_camera2_pane_g7

0x799e,	// (0x0001beff) main_camera2_pane_g8_ParamLimits

0x799e,	// (0x0001beff) main_camera2_pane_g8

0x0008,

0xf659,	// (0x00023bba) main_camera2_pane_g_ParamLimits

0xf659,	// (0x00023bba) main_camera2_pane_g

0x79b6,	// (0x0001bf17) main_camera2_pane_t1_ParamLimits

0x79b6,	// (0x0001bf17) main_camera2_pane_t1

0x79c8,	// (0x0001bf29) main_camera2_pane_t2_ParamLimits

0x79c8,	// (0x0001bf29) main_camera2_pane_t2

0x79da,	// (0x0001bf3b) main_camera2_pane_t3_ParamLimits

0x79da,	// (0x0001bf3b) main_camera2_pane_t3

0x79ec,	// (0x0001bf4d) main_camera2_pane_t4_ParamLimits

0x79ec,	// (0x0001bf4d) main_camera2_pane_t4

0x0006,

0xf66c,	// (0x00023bcd) main_camera2_pane_t_ParamLimits

0xf66c,	// (0x00023bcd) main_camera2_pane_t

0x7a47,	// (0x0001bfa8) cams_zoom_pane_cp4_ParamLimits

0x7a47,	// (0x0001bfa8) cams_zoom_pane_cp4

0x7a57,	// (0x0001bfb8) image2_cif_pane_ParamLimits

0x7a57,	// (0x0001bfb8) image2_cif_pane

0x7a68,	// (0x0001bfc9) image2_subqcif_pane_ParamLimits

0x7a68,	// (0x0001bfc9) image2_subqcif_pane

0x7a75,	// (0x0001bfd6) main_video2_pane_g1_ParamLimits

0x7a75,	// (0x0001bfd6) main_video2_pane_g1

0x7a87,	// (0x0001bfe8) main_video2_pane_g2_ParamLimits

0x7a87,	// (0x0001bfe8) main_video2_pane_g2

0x7a97,	// (0x0001bff8) main_video2_pane_g3_ParamLimits

0x7a97,	// (0x0001bff8) main_video2_pane_g3

0x7aa7,	// (0x0001c008) main_video2_pane_g4_ParamLimits

0x7aa7,	// (0x0001c008) main_video2_pane_g4

0x7ab7,	// (0x0001c018) main_video2_pane_g5_ParamLimits

0x7ab7,	// (0x0001c018) main_video2_pane_g5

0x7ac7,	// (0x0001c028) main_video2_pane_g6_ParamLimits

0x7ac7,	// (0x0001c028) main_video2_pane_g6

0x0005,

0xf67b,	// (0x00023bdc) main_video2_pane_g_ParamLimits

0xf67b,	// (0x00023bdc) main_video2_pane_g

0x7ad9,	// (0x0001c03a) main_video2_pane_t1_ParamLimits

0x7ad9,	// (0x0001c03a) main_video2_pane_t1

0x7af3,	// (0x0001c054) main_video2_pane_t2_ParamLimits

0x7af3,	// (0x0001c054) main_video2_pane_t2

0x7b19,	// (0x0001c07a) main_video2_pane_t3_ParamLimits

0x7b19,	// (0x0001c07a) main_video2_pane_t3

0x0002,

0xf688,	// (0x00023be9) main_video2_pane_t_ParamLimits

0xf688,	// (0x00023be9) main_video2_pane_t

0xac00,	// (0x0001f161) call_muted_g2

0x0001,

0xf62a,	// (0x00023b8b) call_muted_g

0x14df,	// (0x00015a40) main_mup2_pane

0x3cea,	// (0x0001824b) main_mup2_pane_g1_ParamLimits

0x3cea,	// (0x0001824b) main_mup2_pane_g1

0xafee,	// (0x0001f54f) main_mup2_pane_g2_ParamLimits

0xafee,	// (0x0001f54f) main_mup2_pane_g2

0x7b68,	// (0x0001c0c9) main_mup_pane_g13_cp1

0x7b70,	// (0x0001c0d1) mup_volume_pane_cp1

0xb00e,	// (0x0001f56f) main_mup2_pane_g4_ParamLimits

0xb00e,	// (0x0001f56f) main_mup2_pane_g4

0xb01f,	// (0x0001f580) main_mup2_pane_g5_ParamLimits

0xb01f,	// (0x0001f580) main_mup2_pane_g5

0xb030,	// (0x0001f591) main_mup2_pane_g6_ParamLimits

0xb030,	// (0x0001f591) main_mup2_pane_g6

0xb041,	// (0x0001f5a2) main_mup2_pane_g7_ParamLimits

0xb041,	// (0x0001f5a2) main_mup2_pane_g7

0x0006,

0xf68f,	// (0x00023bf0) main_mup2_pane_g_ParamLimits

0xf68f,	// (0x00023bf0) main_mup2_pane_g

0xb05d,	// (0x0001f5be) main_mup2_pane_t1_ParamLimits

0xb05d,	// (0x0001f5be) main_mup2_pane_t1

0xb074,	// (0x0001f5d5) main_mup2_pane_t2_ParamLimits

0xb074,	// (0x0001f5d5) main_mup2_pane_t2

0xb08b,	// (0x0001f5ec) main_mup2_pane_t3_ParamLimits

0xb08b,	// (0x0001f5ec) main_mup2_pane_t3

0xb0a2,	// (0x0001f603) main_mup2_pane_t4_ParamLimits

0xb0a2,	// (0x0001f603) main_mup2_pane_t4

0xb0bc,	// (0x0001f61d) main_mup2_pane_t5_ParamLimits

0xb0bc,	// (0x0001f61d) main_mup2_pane_t5

0xb0d6,	// (0x0001f637) main_mup2_pane_t6_ParamLimits

0xb0d6,	// (0x0001f637) main_mup2_pane_t6

0x0005,

0xf69e,	// (0x00023bff) main_mup2_pane_t_ParamLimits

0xf69e,	// (0x00023bff) main_mup2_pane_t

0xb10e,	// (0x0001f66f) mup2_visualizer_pane_ParamLimits

0xb10e,	// (0x0001f66f) mup2_visualizer_pane

0xb140,	// (0x0001f6a1) mup_progress_pane_cp_ParamLimits

0xb140,	// (0x0001f6a1) mup_progress_pane_cp

0x7b53,	// (0x0001c0b4) mup_volume_pane_cp_ParamLimits

0x7b53,	// (0x0001c0b4) mup_volume_pane_cp

0xb157,	// (0x0001f6b8) mup2_visualizer_pane_g1_ParamLimits

0xb157,	// (0x0001f6b8) mup2_visualizer_pane_g1

0x3cbc,	// (0x0001821d) mup2_visualizer_pane_g2_ParamLimits

0x3cbc,	// (0x0001821d) mup2_visualizer_pane_g2

0xb16c,	// (0x0001f6cd) mup2_visualizer_pane_g3_ParamLimits

0xb16c,	// (0x0001f6cd) mup2_visualizer_pane_g3

0x0002,

0xf6ab,	// (0x00023c0c) mup2_visualizer_pane_g_ParamLimits

0xf6ab,	// (0x00023c0c) mup2_visualizer_pane_g

0x2a41,	// (0x00016fa2) aid_size_cell_fmradio

0xace2,	// (0x0001f243) aid_height_parent_landcape

0x1d28,	// (0x00016289) wml_content_pane_cp

0x1d30,	// (0x00016291) wml_tabs_pane

0x1d39,	// (0x0001629a) popup_wml_miniature_window

0x1d41,	// (0x000162a2) scroll_pane_cp021

0x1d55,	// (0x000162b6) wml_content_pane_comp8

0x14df,	// (0x00015a40) bg_popup_sub_pane_cp05

0x3cda,	// (0x0001823b) popup_wml_miniature_window_g1

0x3ce2,	// (0x00018243) wml_miniature_view_pane

0xb178,	// (0x0001f6d9) aid_size_wml_view

0xb180,	// (0x0001f6e1) wml_miniature_view_pane_g1

0xb189,	// (0x0001f6ea) wml_miniature_view_pane_g2

0xb192,	// (0x0001f6f3) wml_miniature_view_pane_g3

0xb19a,	// (0x0001f6fb) wml_miniature_view_pane_g4

0xb1a2,	// (0x0001f703) wml_miniature_view_pane_g5

0xb1aa,	// (0x0001f70b) wml_miniature_view_pane_g6

0xb1b2,	// (0x0001f713) wml_miniature_view_pane_g7

0xb1ba,	// (0x0001f71b) wml_miniature_view_pane_g8

0x0007,

0xf6b2,	// (0x00023c13) wml_miniature_view_pane_g

0x3cea,	// (0x0001824b) background_graphic_ParamLimits

0x3cea,	// (0x0001824b) background_graphic

0x3cf6,	// (0x00018257) wml_tabs_2_pane

0x3cff,	// (0x00018260) wml_tabs_3_pane_ParamLimits

0x3cff,	// (0x00018260) wml_tabs_3_pane

0x3d11,	// (0x00018272) wml_tabs_4_pane_ParamLimits

0x3d11,	// (0x00018272) wml_tabs_4_pane

0x3d27,	// (0x00018288) wml_tabs_5_pane_ParamLimits

0x3d27,	// (0x00018288) wml_tabs_5_pane

0x3d41,	// (0x000182a2) wml_tabs_pane_g2_ParamLimits

0x3d41,	// (0x000182a2) wml_tabs_pane_g2

0x3d55,	// (0x000182b6) wml_tabs_pane_g3_ParamLimits

0x3d55,	// (0x000182b6) wml_tabs_pane_g3

0xb1c2,	// (0x0001f723) wml_tabs_2_active_pane_ParamLimits

0xb1c2,	// (0x0001f723) wml_tabs_2_active_pane

0xb1d2,	// (0x0001f733) wml_tabs_2_passive_pane_ParamLimits

0xb1d2,	// (0x0001f733) wml_tabs_2_passive_pane

0xb1e2,	// (0x0001f743) wml_tabs_3_active_pane_cp_ParamLimits

0xb1e2,	// (0x0001f743) wml_tabs_3_active_pane_cp

0xb1f3,	// (0x0001f754) wml_tabs_3_passive_pane_ParamLimits

0xb1f3,	// (0x0001f754) wml_tabs_3_passive_pane

0xb204,	// (0x0001f765) wml_tabs_3_passive_pane_cp_ParamLimits

0xb204,	// (0x0001f765) wml_tabs_3_passive_pane_cp

0xb215,	// (0x0001f776) tabs_4_active_pane

0xb21d,	// (0x0001f77e) tabs_4_passive_pane

0xb225,	// (0x0001f786) tabs_4_passive_pane_cp

0xb22d,	// (0x0001f78e) tabs_4_passive_pane_cp2

0xaae3,	// (0x0001f044) aid_height_text

0xa445,	// (0x0001e9a6) mup_volume_cont_pane_ParamLimits

0xa445,	// (0x0001e9a6) mup_volume_cont_pane

0x8afc,	// (0x0001d05d) aid_size_cell_pinb

0x8b06,	// (0x0001d067) aid_size_list_pinb

0xb129,	// (0x0001f68a) mup2_volume_cont_pane_ParamLimits

0xb129,	// (0x0001f68a) mup2_volume_cont_pane

0x7b3f,	// (0x0001c0a0) mup2_volume_cont_pane_g1_ParamLimits

0x7b3f,	// (0x0001c0a0) mup2_volume_cont_pane_g1

0x87f3,	// (0x0001cd54) aid_size_cell_touch_ParamLimits

0x87f3,	// (0x0001cd54) aid_size_cell_touch

0x89fc,	// (0x0001cf5d) touch_pane_ParamLimits

0x89fc,	// (0x0001cf5d) touch_pane

0x106d,	// (0x000155ce) main_rss2_pane

0x3dab,	// (0x0001830c) listscroll_rss2_pane

0x3db4,	// (0x00018315) rss2_navigation_pane

0x3dbc,	// (0x0001831d) list_rss2_pane

0x24d1,	// (0x00016a32) scroll_pane_cp22

0x3dc4,	// (0x00018325) rss2_navigation_pane_g1

0x3dcd,	// (0x0001832e) rss2_navigation_pane_g2

0x3dd5,	// (0x00018336) rss2_navigation_pane_g3

0x0002,

0xf6c3,	// (0x00023c24) rss2_navigation_pane_g

0x3ddd,	// (0x0001833e) rss2_navigation_pane_t1

0xb235,	// (0x0001f796) rss2_list_single_pane_ParamLimits

0xb235,	// (0x0001f796) rss2_list_single_pane

0x3deb,	// (0x0001834c) rss2_list_single_pane_t2

0x3df9,	// (0x0001835a) rss2_list_single_pane_t3_ParamLimits

0x3df9,	// (0x0001835a) rss2_list_single_pane_t3

0x3e16,	// (0x00018377) rss2_list_single_pane_t4

0x9e2f,	// (0x0001e390) smil_status_pane_g1

0x10c0,	// (0x00015621) main_image2_pane_ParamLimits

0x10c0,	// (0x00015621) main_image2_pane

0x79aa,	// (0x0001bf0b) main_camera2_pane_g9_ParamLimits

0x79aa,	// (0x0001bf0b) main_camera2_pane_g9

0x79fe,	// (0x0001bf5f) main_camera2_pane_t5_ParamLimits

0x79fe,	// (0x0001bf5f) main_camera2_pane_t5

0x7a10,	// (0x0001bf71) main_camera2_pane_t6_ParamLimits

0x7a10,	// (0x0001bf71) main_camera2_pane_t6

0xb24c,	// (0x0001f7ad) main_image2_pane_g1_ParamLimits

0xb24c,	// (0x0001f7ad) main_image2_pane_g1

0xa8f8,	// (0x0001ee59) smil2_video_pane_ParamLimits

0xa8f8,	// (0x0001ee59) smil2_video_pane

0x1087,	// (0x000155e8) aid_zoom_text_primary_cp

0x10b8,	// (0x00015619) popup_preview_fixed_window

0x1c82,	// (0x000161e3) im_reading_pane_g1

0x7906,	// (0x0001be67) cams2_bc_adjust_pane_cp_ParamLimits

0x7906,	// (0x0001be67) cams2_bc_adjust_pane_cp

0x7a3b,	// (0x0001bf9c) cams2_bc_adjust_pane_ParamLimits

0x7a3b,	// (0x0001bf9c) cams2_bc_adjust_pane

0x54f6,	// (0x00019a57) cams2_bc_adjust_pane_g1

0x7b78,	// (0x0001c0d9) cams2_slider_pane

0x7b81,	// (0x0001c0e2) cams2_slider_pane_g1

0x7b8a,	// (0x0001c0eb) cams2_slider_pane_g2

0x0006,

0xf6ca,	// (0x00023c2b) cams2_slider_pane_g

0x7442,	// (0x0001b9a3) calc_display_pane_ParamLimits

0x745a,	// (0x0001b9bb) calc_paper_pane_ParamLimits

0x7476,	// (0x0001b9d7) grid_calc_pane_ParamLimits

0x7837,	// (0x0001bd98) popup_clock_digital_window_t1_ParamLimits

0x29de,	// (0x00016f3f) main_image_pane_t1

0x7428,	// (0x0001b989) aid_size_cell_calc_ParamLimits

0x7428,	// (0x0001b989) aid_size_cell_calc

0xad07,	// (0x0001f268) popup_blid_sat_info2_window_ParamLimits

0xad07,	// (0x0001f268) popup_blid_sat_info2_window

0x3e60,	// (0x000183c1) aid_size_cell_blid

0x3e68,	// (0x000183c9) bg_popup_window_pane_cp07

0x3e8b,	// (0x000183ec) grid_popup_blid_pane

0x3e93,	// (0x000183f4) heading_pane_cp05_ParamLimits

0x3e93,	// (0x000183f4) heading_pane_cp05

0x3f5b,	// (0x000184bc) cell_popup_blid_pane_ParamLimits

0x3f5b,	// (0x000184bc) cell_popup_blid_pane

0x3f7b,	// (0x000184dc) cell_popup_blid_pane_g1

0x3f83,	// (0x000184e4) cell_popup_blid_pane_t1

0xb0f3,	// (0x0001f654) mup2_indicator_pane_ParamLimits

0xb0f3,	// (0x0001f654) mup2_indicator_pane

0x2690,	// (0x00016bf1) mup2_visualizer_osc_pane

0x3cc8,	// (0x00018229) mup2_visualizer_spec_pane_ParamLimits

0x3cc8,	// (0x00018229) mup2_visualizer_spec_pane

0xb258,	// (0x0001f7b9) mup2_spec_half_pane

0xb261,	// (0x0001f7c2) mup2_spec_half_pane_cp

0xb269,	// (0x0001f7ca) mup2_spec_bar_pane_ParamLimits

0xb269,	// (0x0001f7ca) mup2_spec_bar_pane

0x3c1c,	// (0x0001817d) mup2_spec_bar_pane_g1

0x3c26,	// (0x00018187) mup2_spec_bar_pane_g2

0x0001,

0xf63d,	// (0x00023b9e) mup2_spec_bar_pane_g

0xb288,	// (0x0001f7e9) mup2_osc_middle_pane

0x3c38,	// (0x00018199) mup2_visualizer_osc_pane_g1

0x10ee,	// (0x0001564f) popup_number_entry_window_t1_ParamLimits

0x1101,	// (0x00015662) popup_number_entry_window_t2_ParamLimits

0x1113,	// (0x00015674) popup_number_entry_window_t3_ParamLimits

0x8a49,	// (0x0001cfaa) popup_number_entry_window_t5_ParamLimits

0x8a49,	// (0x0001cfaa) popup_number_entry_window_t5

0xf0ec,	// (0x0002364d) popup_number_entry_window_t_ParamLimits

0x1125,	// (0x00015686) text_title_cp2_ParamLimits

0x7876,	// (0x0001bdd7) aid_hotspot_pointer_text2_pane

0x78cc,	// (0x0001be2d) main_viewer_pane_g9_ParamLimits

0x78cc,	// (0x0001be2d) main_viewer_pane_g9

0x1ec1,	// (0x00016422) cale_month_pane_t1_ParamLimits

0x1f56,	// (0x000164b7) bg_cale_pane_ParamLimits

0x1f6e,	// (0x000164cf) list_cale_pane_ParamLimits

0x1a1b,	// (0x00015f7c) listscroll_cale_day_pane_t1

0x1f7f,	// (0x000164e0) scroll_pane_cp09_ParamLimits

0xa480,	// (0x0001e9e1) main_mup_eq_pane_t1_ParamLimits

0xa480,	// (0x0001e9e1) main_mup_eq_pane_t1

0xa496,	// (0x0001e9f7) main_mup_eq_pane_t2_ParamLimits

0xa496,	// (0x0001e9f7) main_mup_eq_pane_t2

0xa4ac,	// (0x0001ea0d) main_mup_eq_pane_t3_ParamLimits

0xa4ac,	// (0x0001ea0d) main_mup_eq_pane_t3

0xa4c2,	// (0x0001ea23) main_mup_eq_pane_t4_ParamLimits

0xa4c2,	// (0x0001ea23) main_mup_eq_pane_t4

0xa4d8,	// (0x0001ea39) main_mup_eq_pane_t5_ParamLimits

0xa4d8,	// (0x0001ea39) main_mup_eq_pane_t5

0xa4ee,	// (0x0001ea4f) main_mup_eq_pane_t6_ParamLimits

0xa4ee,	// (0x0001ea4f) main_mup_eq_pane_t6

0xa500,	// (0x0001ea61) main_mup_eq_pane_t7_ParamLimits

0xa500,	// (0x0001ea61) main_mup_eq_pane_t7

0xa512,	// (0x0001ea73) main_mup_eq_pane_t8_ParamLimits

0xa512,	// (0x0001ea73) main_mup_eq_pane_t8

0xa524,	// (0x0001ea85) main_mup_eq_pane_t9_ParamLimits

0xa524,	// (0x0001ea85) main_mup_eq_pane_t9

0xa53a,	// (0x0001ea9b) main_mup_eq_pane_t10_ParamLimits

0xa53a,	// (0x0001ea9b) main_mup_eq_pane_t10

0x0009,

0xf479,	// (0x000239da) main_mup_eq_pane_t_ParamLimits

0xf479,	// (0x000239da) main_mup_eq_pane_t

0xa5cd,	// (0x0001eb2e) mup_equalizer_pane_cp5_ParamLimits

0xa5df,	// (0x0001eb40) mup_equalizer_pane_cp6_ParamLimits

0xa5f1,	// (0x0001eb52) mup_equalizer_pane_cp7_ParamLimits

0x106d,	// (0x000155ce) main_gallery_pane

0x3c41,	// (0x000181a2) smil2_volume_pane

0x3c5c,	// (0x000181bd) smil_status_volume_pane_g1_ParamLimits

0x3c49,	// (0x000181aa) smil_status_volume_pane_g2_ParamLimits

0x78d8,	// (0x0001be39) smil_status_volume_pane_g3_ParamLimits

0xf642,	// (0x00023ba3) smil_status_volume_pane_g_ParamLimits

0x3e68,	// (0x000183c9) bg_popup_window_pane_cp07_ParamLimits

0x3e76,	// (0x000183d7) blid_firmament_pane

0xb291,	// (0x0001f7f2) aid_size_cell_gallery_ParamLimits

0xb291,	// (0x0001f7f2) aid_size_cell_gallery

0xb29f,	// (0x0001f800) grid_gallery_pane_ParamLimits

0xb29f,	// (0x0001f800) grid_gallery_pane

0xb2ab,	// (0x0001f80c) cell_gallery_pane_ParamLimits

0xb2ab,	// (0x0001f80c) cell_gallery_pane

0x3f91,	// (0x000184f2) bg_cell_gallery_focus_pane_ParamLimits

0x3f91,	// (0x000184f2) bg_cell_gallery_focus_pane

0x3fa3,	// (0x00018504) cell_gallery_pane_g1_ParamLimits

0x3fa3,	// (0x00018504) cell_gallery_pane_g1

0xb2ea,	// (0x0001f84b) cell_gallery_pane_g2_ParamLimits

0xb2ea,	// (0x0001f84b) cell_gallery_pane_g2

0xb2f7,	// (0x0001f858) cell_gallery_pane_g3_ParamLimits

0xb2f7,	// (0x0001f858) cell_gallery_pane_g3

0x3faf,	// (0x00018510) cell_gallery_pane_g4_ParamLimits

0x3faf,	// (0x00018510) cell_gallery_pane_g4

0x0003,

0xf6f0,	// (0x00023c51) cell_gallery_pane_g_ParamLimits

0xf6f0,	// (0x00023c51) cell_gallery_pane_g

0x3fbb,	// (0x0001851c) bg_cell_gallery_focus_pane_g1

0x3fc3,	// (0x00018524) bg_cell_gallery_focus_pane_g2

0x3fcb,	// (0x0001852c) bg_cell_gallery_focus_pane_g3

0x3fd3,	// (0x00018534) bg_cell_gallery_focus_pane_g4

0x3fdb,	// (0x0001853c) bg_cell_gallery_focus_pane_g5

0x3fe3,	// (0x00018544) bg_cell_gallery_focus_pane_g6

0x3feb,	// (0x0001854c) bg_cell_gallery_focus_pane_g7

0x3ff3,	// (0x00018554) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6f9,	// (0x00023c5a) bg_cell_gallery_focus_pane_g

0x3ffb,	// (0x0001855c) aid_firma_cardinal

0x400f,	// (0x00018570) blid_firmament_pane_t1

0x4026,	// (0x00018587) blid_firmament_pane_t2

0x403d,	// (0x0001859e) blid_firmament_pane_t3

0x4054,	// (0x000185b5) blid_firmament_pane_t4

0x0003,

0xf70a,	// (0x00023c6b) blid_firmament_pane_t

0x406b,	// (0x000185cc) blid_sat_info_pane

0x407b,	// (0x000185dc) blid_sat_info_pane_g1

0x407b,	// (0x000185dc) blid_sat_info_pane_g2

0x0001,

0xf713,	// (0x00023c74) blid_sat_info_pane_g

0x4085,	// (0x000185e6) blid_sat_info_pane_t1

0x4093,	// (0x000185f4) smil2_volume_content_pane

0x409c,	// (0x000185fd) smil2_volume_pane_g1

0x40a4,	// (0x00018605) smil2_volume_content_pane_g1

0x40ad,	// (0x0001860e) smil2_volume_content_pane_g2

0x40b6,	// (0x00018617) smil2_volume_content_pane_g3

0x40bf,	// (0x00018620) smil2_volume_content_pane_g4

0x40c8,	// (0x00018629) smil2_volume_content_pane_g5

0x40d1,	// (0x00018632) smil2_volume_content_pane_g6

0x40da,	// (0x0001863b) smil2_volume_content_pane_g7

0x40e3,	// (0x00018644) smil2_volume_content_pane_g8

0x40ec,	// (0x0001864d) smil2_volume_content_pane_g9

0x40f5,	// (0x00018656) smil2_volume_content_pane_g10

0x0009,

0xf718,	// (0x00023c79) smil2_volume_content_pane_g

0x8f5c,	// (0x0001d4bd) cale_week_day_heading_pane_t1_ParamLimits

0x8f75,	// (0x0001d4d6) cale_week_day_heading_pane_t2_ParamLimits

0x8f8e,	// (0x0001d4ef) cale_week_day_heading_pane_t3_ParamLimits

0x8fa7,	// (0x0001d508) cale_week_day_heading_pane_t4_ParamLimits

0x8fc0,	// (0x0001d521) cale_week_day_heading_pane_t5_ParamLimits

0x8fd9,	// (0x0001d53a) cale_week_day_heading_pane_t6_ParamLimits

0x8ff2,	// (0x0001d553) cale_week_day_heading_pane_t7_ParamLimits

0xf1f1,	// (0x00023752) cale_week_day_heading_pane_t_ParamLimits

0x1a2d,	// (0x00015f8e) bg_cale_side_pane_ParamLimits

0x75c1,	// (0x0001bb22) cale_week_time_pane_t1_ParamLimits

0x75ed,	// (0x0001bb4e) cale_week_time_pane_t2_ParamLimits

0x7619,	// (0x0001bb7a) cale_week_time_pane_t3_ParamLimits

0x7645,	// (0x0001bba6) cale_week_time_pane_t4_ParamLimits

0x7671,	// (0x0001bbd2) cale_week_time_pane_t5_ParamLimits

0x769d,	// (0x0001bbfe) cale_week_time_pane_t6_ParamLimits

0x76c9,	// (0x0001bc2a) cale_week_time_pane_t7_ParamLimits

0x76f5,	// (0x0001bc56) cale_week_time_pane_t8_ParamLimits

0xf200,	// (0x00023761) cale_week_time_pane_t_ParamLimits

0x900b,	// (0x0001d56c) cell_cale_week_pane_g2_ParamLimits

0x1a2d,	// (0x00015f8e) bg_cale_side_pane_cp01_ParamLimits

0x9cf6,	// (0x0001e257) cale_month_week_pane_t1_ParamLimits

0x9d0d,	// (0x0001e26e) cale_month_week_pane_t2_ParamLimits

0x9d24,	// (0x0001e285) cale_month_week_pane_t3_ParamLimits

0x9d3b,	// (0x0001e29c) cale_month_week_pane_t4_ParamLimits

0x9d52,	// (0x0001e2b3) cale_month_week_pane_t5_ParamLimits

0x9d69,	// (0x0001e2ca) cale_month_week_pane_t6_ParamLimits

0xf2d9,	// (0x0002383a) cale_month_week_pane_t_ParamLimits

0x779b,	// (0x0001bcfc) cell_cale_month_pane_g1_ParamLimits

0x106d,	// (0x000155ce) main_cale_event_viewer_pane

0x106d,	// (0x000155ce) listscroll_cale_event_viewer_pane

0x40fe,	// (0x0001865f) list_cale_ev_pane

0x4106,	// (0x00018667) scroll_pane_cp023

0xb304,	// (0x0001f865) field_cale_ev_pane_ParamLimits

0xb304,	// (0x0001f865) field_cale_ev_pane

0x4112,	// (0x00018673) field_cale_ev_content_pane_ParamLimits

0x4112,	// (0x00018673) field_cale_ev_content_pane

0x411e,	// (0x0001867f) field_cale_ev_pane_g1_ParamLimits

0x411e,	// (0x0001867f) field_cale_ev_pane_g1

0x412a,	// (0x0001868b) field_cale_ev_pane_g2_ParamLimits

0x412a,	// (0x0001868b) field_cale_ev_pane_g2

0x4142,	// (0x000186a3) field_cale_ev_pane_g3_ParamLimits

0x4142,	// (0x000186a3) field_cale_ev_pane_g3

0x0002,

0xf72d,	// (0x00023c8e) field_cale_ev_pane_g_ParamLimits

0xf72d,	// (0x00023c8e) field_cale_ev_pane_g

0x415a,	// (0x000186bb) field_cale_ev_pane_t1_ParamLimits

0x415a,	// (0x000186bb) field_cale_ev_pane_t1

0xb31e,	// (0x0001f87f) field_cale_ev_content_pane_t1_ParamLimits

0xb31e,	// (0x0001f87f) field_cale_ev_content_pane_t1

0x2821,	// (0x00016d82) bg_button_pane_cp01

0x19f3,	// (0x00015f54) listscroll_cale_week_pane_ParamLimits

0x8d8c,	// (0x0001d2ed) popup_toolbar_window_cp01

0x1a1b,	// (0x00015f7c) listscroll_cale_week_pane_t1_ParamLimits

0x182b,	// (0x00015d8c) listscroll_cale_day_pane_ParamLimits

0x8d8c,	// (0x0001d2ed) popup_toolbar_window_cp02

0x1a1b,	// (0x00015f7c) listscroll_cale_day_pane_t1_ParamLimits

0x19f3,	// (0x00015f54) main_cale_month_pane_ParamLimits

0xada7,	// (0x0001f308) popup_toolbar_window_cp03_ParamLimits

0xada7,	// (0x0001f308) popup_toolbar_window_cp03

0xa820,	// (0x0001ed81) main_image_pane_g2_ParamLimits

0xa820,	// (0x0001ed81) main_image_pane_g2

0xa82c,	// (0x0001ed8d) main_image_pane_g3_ParamLimits

0xa82c,	// (0x0001ed8d) main_image_pane_g3

0x0002,

0xf50b,	// (0x00023a6c) main_image_pane_g_ParamLimits

0xf50b,	// (0x00023a6c) main_image_pane_g

0x29de,	// (0x00016f3f) main_image_pane_t1_ParamLimits

0xa838,	// (0x0001ed99) main_image_pane_t2_ParamLimits

0xa838,	// (0x0001ed99) main_image_pane_t2

0xa84a,	// (0x0001edab) main_image_pane_t3_ParamLimits

0xa84a,	// (0x0001edab) main_image_pane_t3

0xa85c,	// (0x0001edbd) main_image_pane_t4_ParamLimits

0xa85c,	// (0x0001edbd) main_image_pane_t4

0x0003,

0xf512,	// (0x00023a73) main_image_pane_t_ParamLimits

0xf512,	// (0x00023a73) main_image_pane_t

0xa86e,	// (0x0001edcf) popup_image_details_window_cp01

0xa876,	// (0x0001edd7) popup_toobar_trans_pane_cp01_ParamLimits

0xa876,	// (0x0001edd7) popup_toobar_trans_pane_cp01

0xad46,	// (0x0001f2a7) popup_image_details_window_ParamLimits

0xad46,	// (0x0001f2a7) popup_image_details_window

0x3ba4,	// (0x00018105) popup_image_focus_window

0x78fa,	// (0x0001be5b) camera2_autofocus_pane_ParamLimits

0x78fa,	// (0x0001be5b) camera2_autofocus_pane

0x106d,	// (0x000155ce) bg_popup_sub_pane_cp06

0x4171,	// (0x000186d2) popup_image_focus_window_g1

0x4179,	// (0x000186da) popup_image_focus_window_g2

0x4181,	// (0x000186e2) popup_image_focus_window_g3

0x4189,	// (0x000186ea) popup_image_focus_window_g4

0x0003,

0xf734,	// (0x00023c95) popup_image_focus_window_g

0x4191,	// (0x000186f2) popup_image_focus_window_t1

0x419f,	// (0x00018700) popup_image_focus_window_t2

0x41ae,	// (0x0001870f) popup_image_focus_window_t3

0x0002,

0xf73d,	// (0x00023c9e) popup_image_focus_window_t

0x41bc,	// (0x0001871d) camera2_autofocus_pane_g1

0x10c0,	// (0x00015621) bg_tb_trans_pane_cp01

0x41ca,	// (0x0001872b) popup_image_details_window_g1

0x41dd,	// (0x0001873e) popup_image_details_window_g2

0x0002,

0xf74f,	// (0x00023cb0) popup_image_details_window_g

0x4206,	// (0x00018767) popup_image_details_window_t1

0x4218,	// (0x00018779) popup_image_details_window_t2

0x4231,	// (0x00018792) popup_image_details_window_t3

0x4245,	// (0x000187a6) popup_image_details_window_t4

0x4260,	// (0x000187c1) popup_image_details_window_t5

0x0004,

0xf756,	// (0x00023cb7) popup_image_details_window_t

0x17f9,	// (0x00015d5a) bg_calc_paper_pane_ParamLimits

0x7496,	// (0x0001b9f7) grid_highlight_pane_cp013

0x74a0,	// (0x0001ba01) list_calc_pane_ParamLimits

0x74b2,	// (0x0001ba13) scroll_pane_cp024

0x182b,	// (0x00015d8c) bg_calc_display_pane_ParamLimits

0x74ba,	// (0x0001ba1b) calc_display_pane_t1_ParamLimits

0x74cf,	// (0x0001ba30) calc_display_pane_t2_ParamLimits

0x74e4,	// (0x0001ba45) calc_display_pane_t3_ParamLimits

0xf173,	// (0x000236d4) calc_display_pane_t_ParamLimits

0x7545,	// (0x0001baa6) cell_calc_pane_g2

0x0001,

0xf190,	// (0x000236f1) cell_calc_pane_g

0x754e,	// (0x0001baaf) cell_calc_pane_t1

0x18d8,	// (0x00015e39) grid_highlight_pane_cp02_ParamLimits

0x18ee,	// (0x00015e4f) toolbar_button_pane_cp01_ParamLimits

0x18ee,	// (0x00015e4f) toolbar_button_pane_cp01

0x2a23,	// (0x00016f84) temp_image_control_pane_ParamLimits

0x2a23,	// (0x00016f84) temp_image_control_pane

0x10c0,	// (0x00015621) main_mp3_pane

0x427a,	// (0x000187db) temp_image_control_pane_g1_ParamLimits

0x427a,	// (0x000187db) temp_image_control_pane_g1

0x4288,	// (0x000187e9) temp_image_control_pane_g2_ParamLimits

0x4288,	// (0x000187e9) temp_image_control_pane_g2

0x429a,	// (0x000187fb) temp_image_control_pane_g3_ParamLimits

0x429a,	// (0x000187fb) temp_image_control_pane_g3

0xb368,	// (0x0001f8c9) temp_image_control_pane_g4_ParamLimits

0xb368,	// (0x0001f8c9) temp_image_control_pane_g4

0x0003,

0xf761,	// (0x00023cc2) temp_image_control_pane_g_ParamLimits

0xf761,	// (0x00023cc2) temp_image_control_pane_g

0x427a,	// (0x000187db) main_mp3_pane_g1

0xb379,	// (0x0001f8da) main_mp3_pane_g2

0x0007,

0xf76a,	// (0x00023ccb) main_mp3_pane_g

0x42dd,	// (0x0001883e) main_mp3_pane_t1

0x1af3,	// (0x00016054) main_camera_pane_g8_ParamLimits

0x1af3,	// (0x00016054) main_camera_pane_g8

0x920c,	// (0x0001d76d) main_video_pane_g7_ParamLimits

0x920c,	// (0x0001d76d) main_video_pane_g7

0x7a29,	// (0x0001bf8a) main_camera2_pane_t7_ParamLimits

0x7a29,	// (0x0001bf8a) main_camera2_pane_t7

0x1ce8,	// (0x00016249) scroll_pane_cp025_ParamLimits

0x1ce8,	// (0x00016249) scroll_pane_cp025

0x1cfc,	// (0x0001625d) scroll_pane_cp026_ParamLimits

0x1cfc,	// (0x0001625d) scroll_pane_cp026

0x1d0b,	// (0x0001626c) wml_content_pane_ParamLimits

0x106d,	// (0x000155ce) main_touch_calib_pane

0xb410,	// (0x0001f971) main_touch_calib_pane_g1

0xb41c,	// (0x0001f97d) main_touch_calib_pane_g2

0xb428,	// (0x0001f989) main_touch_calib_pane_g3

0xb434,	// (0x0001f995) main_touch_calib_pane_g4

0x0003,

0xf788,	// (0x00023ce9) main_touch_calib_pane_g

0xb440,	// (0x0001f9a1) main_touch_calib_pane_t1

0xb455,	// (0x0001f9b6) main_touch_calib_pane_t2

0x0004,

0xf791,	// (0x00023cf2) main_touch_calib_pane_t

0x2582,	// (0x00016ae3) mup_progress_pane_cp02

0x25a1,	// (0x00016b02) navi_pane_g1

0x2621,	// (0x00016b82) navi_pane_mp_t3

0x10c0,	// (0x00015621) main_mp3_pane_ParamLimits

0xade1,	// (0x0001f342) navi_pane_ParamLimits

0x427a,	// (0x000187db) main_mp3_pane_g1_ParamLimits

0xb379,	// (0x0001f8da) main_mp3_pane_g2_ParamLimits

0xb385,	// (0x0001f8e6) main_mp3_pane_g3_ParamLimits

0xb385,	// (0x0001f8e6) main_mp3_pane_g3

0xb391,	// (0x0001f8f2) main_mp3_pane_g4_ParamLimits

0xb391,	// (0x0001f8f2) main_mp3_pane_g4

0x42aa,	// (0x0001880b) main_mp3_pane_g5_ParamLimits

0x42aa,	// (0x0001880b) main_mp3_pane_g5

0x42b8,	// (0x00018819) main_mp3_pane_g6_ParamLimits

0x42b8,	// (0x00018819) main_mp3_pane_g6

0x42c5,	// (0x00018826) main_mp3_pane_g7_ParamLimits

0x42c5,	// (0x00018826) main_mp3_pane_g7

0x42d1,	// (0x00018832) main_mp3_pane_g8_ParamLimits

0x42d1,	// (0x00018832) main_mp3_pane_g8

0xf76a,	// (0x00023ccb) main_mp3_pane_g_ParamLimits

0xb39d,	// (0x0001f8fe) main_mp3_pane_t2

0xb3ab,	// (0x0001f90c) main_mp3_pane_t3

0x42eb,	// (0x0001884c) main_mp3_pane_t4

0x42f9,	// (0x0001885a) main_mp3_pane_t5

0x0005,

0xf77b,	// (0x00023cdc) main_mp3_pane_t

0x4307,	// (0x00018868) mup_progress_pane_cp01

0x1087,	// (0x000155e8) aid_zoom_text_secondary2

0x40fe,	// (0x0001865f) list_cale_ev2_pane

0x4106,	// (0x00018667) scroll_pane_cp023_ParamLimits

0x4391,	// (0x000188f2) field_cale_ev2_pane_ParamLimits

0x4391,	// (0x000188f2) field_cale_ev2_pane

0x430f,	// (0x00018870) field_cale_ev2_pane_g1_ParamLimits

0x430f,	// (0x00018870) field_cale_ev2_pane_g1

0x431b,	// (0x0001887c) field_cale_ev2_pane_g2_ParamLimits

0x431b,	// (0x0001887c) field_cale_ev2_pane_g2

0x4333,	// (0x00018894) field_cale_ev2_pane_g3_ParamLimits

0x4333,	// (0x00018894) field_cale_ev2_pane_g3

0x0003,

0xf79c,	// (0x00023cfd) field_cale_ev2_pane_g_ParamLimits

0xf79c,	// (0x00023cfd) field_cale_ev2_pane_g

0x4357,	// (0x000188b8) field_cale_ev2_pane_t1_ParamLimits

0x4357,	// (0x000188b8) field_cale_ev2_pane_t1

0x436e,	// (0x000188cf) field_cale_ev2_pane_t2_ParamLimits

0x436e,	// (0x000188cf) field_cale_ev2_pane_t2

0x0001,

0xf7a5,	// (0x00023d06) field_cale_ev2_pane_t_ParamLimits

0xf7a5,	// (0x00023d06) field_cale_ev2_pane_t

0xa71c,	// (0x0001ec7d) main_postcard_pane_g5_ParamLimits

0xa71c,	// (0x0001ec7d) main_postcard_pane_g5

0xa728,	// (0x0001ec89) main_postcard_pane_g6_ParamLimits

0xa728,	// (0x0001ec89) main_postcard_pane_g6

0x9061,	// (0x0001d5c2) camera2_autofocus_pane_cp_ParamLimits

0x9061,	// (0x0001d5c2) camera2_autofocus_pane_cp

0x10c0,	// (0x00015621) main_mup3_pane

0xb4c0,	// (0x0001fa21) main_mup3_pane_g1_ParamLimits

0xb4c0,	// (0x0001fa21) main_mup3_pane_g1

0xb4e1,	// (0x0001fa42) main_mup3_pane_g2_ParamLimits

0xb4e1,	// (0x0001fa42) main_mup3_pane_g2

0xb544,	// (0x0001faa5) main_mup3_pane_g3_ParamLimits

0xb544,	// (0x0001faa5) main_mup3_pane_g3

0xb57f,	// (0x0001fae0) main_mup3_pane_g4_ParamLimits

0xb57f,	// (0x0001fae0) main_mup3_pane_g4

0xb5ba,	// (0x0001fb1b) main_mup3_pane_g5_ParamLimits

0xb5ba,	// (0x0001fb1b) main_mup3_pane_g5

0xb5f5,	// (0x0001fb56) main_mup3_pane_g6_ParamLimits

0xb5f5,	// (0x0001fb56) main_mup3_pane_g6

0x43c7,	// (0x00018928) main_mup3_pane_g7_ParamLimits

0x43c7,	// (0x00018928) main_mup3_pane_g7

0x0007,

0xf7b5,	// (0x00023d16) main_mup3_pane_g_ParamLimits

0xf7b5,	// (0x00023d16) main_mup3_pane_g

0xb663,	// (0x0001fbc4) main_mup3_pane_t1_ParamLimits

0xb663,	// (0x0001fbc4) main_mup3_pane_t1

0xb6c6,	// (0x0001fc27) main_mup3_pane_t2_ParamLimits

0xb6c6,	// (0x0001fc27) main_mup3_pane_t2

0xb783,	// (0x0001fce4) main_mup3_pane_t4_ParamLimits

0xb783,	// (0x0001fce4) main_mup3_pane_t4

0xb7c9,	// (0x0001fd2a) main_mup3_pane_t5_ParamLimits

0xb7c9,	// (0x0001fd2a) main_mup3_pane_t5

0xb86d,	// (0x0001fdce) main_mup3_pane_t6_ParamLimits

0xb86d,	// (0x0001fdce) main_mup3_pane_t6

0x0005,

0xf7c6,	// (0x00023d27) main_mup3_pane_t_ParamLimits

0xf7c6,	// (0x00023d27) main_mup3_pane_t

0xb915,	// (0x0001fe76) mup3_progress_pane_ParamLimits

0xb915,	// (0x0001fe76) mup3_progress_pane

0xb95b,	// (0x0001febc) popup_mup3_control_window_ParamLimits

0xb95b,	// (0x0001febc) popup_mup3_control_window

0x43d5,	// (0x00018936) popup_mup3_text_window

0xb974,	// (0x0001fed5) mup3_progress_pane_t1

0xb98a,	// (0x0001feeb) mup3_progress_pane_t2

0x43dd,	// (0x0001893e) mup3_progress_pane_t3

0x0002,

0xf7d3,	// (0x00023d34) mup3_progress_pane_t

0x43f4,	// (0x00018955) mup_progress_pane_cp03

0x106d,	// (0x000155ce) bg_tb_trans_pane_cp04

0xb9a0,	// (0x0001ff01) mup3_volume_pane

0xb9a8,	// (0x0001ff09) popup_mup3_control_window_g1

0xb9b1,	// (0x0001ff12) mup3_volume_pane_g1

0xb9ba,	// (0x0001ff1b) mup3_volume_pane_g2

0xb9c3,	// (0x0001ff24) mup3_volume_pane_g3

0x0002,

0xf7da,	// (0x00023d3b) mup3_volume_pane_g

0x106d,	// (0x000155ce) bg_tb_trans_pane_cp03

0x4404,	// (0x00018965) popup_mup3_text_window_g1

0x440c,	// (0x0001896d) popup_mup3_text_window_t1

0x18af,	// (0x00015e10) list_calc_item_pane_g1_ParamLimits

0x3d92,	// (0x000182f3) mup_volume_pane_cp_g1

0xb46a,	// (0x0001f9cb) main_touch_calib_pane_t3

0xb47c,	// (0x0001f9dd) main_touch_calib_pane_t4

0xb48e,	// (0x0001f9ef) main_touch_calib_pane_t5

0x1077,	// (0x000155d8) aid_cell_size_toolbar2

0x107f,	// (0x000155e0) aid_popup3_width_pane

0x1087,	// (0x000155e8) aid_zoom_text_msg_primary

0x7785,	// (0x0001bce6) vorec_t7

0x1873,	// (0x00015dd4) bg_calc_paper_pane_g1_ParamLimits

0x188b,	// (0x00015dec) bg_calc_paper_pane_g2_ParamLimits

0x187f,	// (0x00015de0) bg_calc_paper_pane_g3_ParamLimits

0x18a3,	// (0x00015e04) bg_calc_paper_pane_g4_ParamLimits

0x1897,	// (0x00015df8) bg_calc_paper_pane_g5_ParamLimits

0x8c8c,	// (0x0001d1ed) bg_calc_paper_pane_g6_ParamLimits

0x8c9b,	// (0x0001d1fc) bg_calc_paper_pane_g7_ParamLimits

0x8caa,	// (0x0001d20b) bg_calc_paper_pane_g8_ParamLimits

0xf17a,	// (0x000236db) bg_calc_paper_pane_g_ParamLimits

0x8cb9,	// (0x0001d21a) calc_bg_paper_pane_g9_ParamLimits

0x9141,	// (0x0001d6a2) image_qvga_pane_ParamLimits

0x9141,	// (0x0001d6a2) image_qvga_pane

0x173a,	// (0x00015c9b) bg_popup_sub_pane_cp04_ParamLimits

0x295a,	// (0x00016ebb) popup_mup_playback_window_g1_ParamLimits

0x2966,	// (0x00016ec7) popup_mup_playback_window_t1_ParamLimits

0x297b,	// (0x00016edc) popup_mup_playback_window_t2_ParamLimits

0xf506,	// (0x00023a67) popup_mup_playback_window_t_ParamLimits

0xafff,	// (0x0001f560) main_mup2_pane_g3_ParamLimits

0xafff,	// (0x0001f560) main_mup2_pane_g3

0x9427,	// (0x0001d988) popup_toolbar_window_cp04

0x2d5c,	// (0x000172bd) popup_call2_audio_second_window_g3_ParamLimits

0x2d5c,	// (0x000172bd) popup_call2_audio_second_window_g3

0x3166,	// (0x000176c7) popup_call2_audio_first_window_g4_ParamLimits

0x3166,	// (0x000176c7) popup_call2_audio_first_window_g4

0x37e5,	// (0x00017d46) popup_call2_audio_in_window_g4_ParamLimits

0x37e5,	// (0x00017d46) popup_call2_audio_in_window_g4

0xa813,	// (0x0001ed74) aid_area_sk_bg_cut_ParamLimits

0xa813,	// (0x0001ed74) aid_area_sk_bg_cut

0x2990,	// (0x00016ef1) aid_area_sk_bg_cut_2_ParamLimits

0x2990,	// (0x00016ef1) aid_area_sk_bg_cut_2

0xb2da,	// (0x0001f83b) aid_placing_details_win

0xb2e2,	// (0x0001f843) aid_placing_details_win_2

0x41bc,	// (0x0001871d) camera2_autofocus_pane_g1_ParamLimits

0x89b0,	// (0x0001cf11) popup_fixed_preview_cale_window_ParamLimits

0x89b0,	// (0x0001cf11) popup_fixed_preview_cale_window

0x26bc,	// (0x00016c1d) navi_slider_pane_g3

0x26b3,	// (0x00016c14) navi_slider_pane_g4

0x26aa,	// (0x00016c0b) navi_slider_pane_g5

0x26bc,	// (0x00016c1d) navi_slider_pane_g6

0x785d,	// (0x0001bdbe) navi_slider_pane_g7

0x27e6,	// (0x00016d47) mup_scale_pane_g3

0x27ef,	// (0x00016d50) mup_scale_pane_g4

0x27f8,	// (0x00016d59) mup_scale_pane_g5

0xa603,	// (0x0001eb64) mup_scale_pane_g6

0xa60c,	// (0x0001eb6d) mup_scale_pane_g7

0x26bc,	// (0x00016c1d) cams2_slider_pane_g3

0x3e47,	// (0x000183a8) cams2_slider_pane_g4

0x7b93,	// (0x0001c0f4) cams2_slider_pane_g5

0x26bc,	// (0x00016c1d) cams2_slider_pane_g6

0x7b9b,	// (0x0001c0fc) cams2_slider_pane_g7

0x407b,	// (0x000185dc) camera2_autofocus_pane_cp_g1

0x441a,	// (0x0001897b) bg_popup_preview_window_pane_cp02_ParamLimits

0x441a,	// (0x0001897b) bg_popup_preview_window_pane_cp02

0xb9cc,	// (0x0001ff2d) list_fp_cale_pane_ParamLimits

0xb9cc,	// (0x0001ff2d) list_fp_cale_pane

0x4426,	// (0x00018987) popup_fixed_preview_cale_window_t1_ParamLimits

0x4426,	// (0x00018987) popup_fixed_preview_cale_window_t1

0xb9dc,	// (0x0001ff3d) popup_fixed_preview_cale_window_t2_ParamLimits

0xb9dc,	// (0x0001ff3d) popup_fixed_preview_cale_window_t2

0xb9f1,	// (0x0001ff52) popup_fixed_preview_cale_window_t3_ParamLimits

0xb9f1,	// (0x0001ff52) popup_fixed_preview_cale_window_t3

0x0002,

0xf7e1,	// (0x00023d42) popup_fixed_preview_cale_window_t_ParamLimits

0xf7e1,	// (0x00023d42) popup_fixed_preview_cale_window_t

0xba03,	// (0x0001ff64) list_single_fp_cale_pane_ParamLimits

0xba03,	// (0x0001ff64) list_single_fp_cale_pane

0xba10,	// (0x0001ff71) list_single_fp_cale_pane_g1_ParamLimits

0xba10,	// (0x0001ff71) list_single_fp_cale_pane_g1

0x4444,	// (0x000189a5) list_single_fp_cale_pane_g2_ParamLimits

0x4444,	// (0x000189a5) list_single_fp_cale_pane_g2

0x0002,

0xf7e8,	// (0x00023d49) list_single_fp_cale_pane_g_ParamLimits

0xf7e8,	// (0x00023d49) list_single_fp_cale_pane_g

0xba1c,	// (0x0001ff7d) list_single_fp_cale_pane_t1_ParamLimits

0xba1c,	// (0x0001ff7d) list_single_fp_cale_pane_t1

0xba2e,	// (0x0001ff8f) list_single_fp_cale_pane_t2_ParamLimits

0xba2e,	// (0x0001ff8f) list_single_fp_cale_pane_t2

0x0001,

0xf7ef,	// (0x00023d50) list_single_fp_cale_pane_t_ParamLimits

0xf7ef,	// (0x00023d50) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x106d,	// (0x000155ce) main_dialer_pane

0xba61,	// (0x0001ffc2) aid_cell_size_keypad

0xba6b,	// (0x0001ffcc) dialer_ne_pane

0xba73,	// (0x0001ffd4) grid_dialer_command_1_pane

0xba7b,	// (0x0001ffdc) grid_dialer_command_2_pane

0xba83,	// (0x0001ffe4) grid_dialer_keypad_pane

0xba93,	// (0x0001fff4) bg_popup_call_pane_cp06_ParamLimits

0xba93,	// (0x0001fff4) bg_popup_call_pane_cp06

0xba9f,	// (0x00020000) dialer_ne_clear_pane_ParamLimits

0xba9f,	// (0x00020000) dialer_ne_clear_pane

0x445d,	// (0x000189be) dialer_ne_pane_g1

0x4465,	// (0x000189c6) dialer_ne_pane_t1_ParamLimits

0x4465,	// (0x000189c6) dialer_ne_pane_t1

0xbaab,	// (0x0002000c) dialer_ne_pane_t2_ParamLimits

0xbaab,	// (0x0002000c) dialer_ne_pane_t2

0xbac8,	// (0x00020029) dialer_ne_pane_t3_ParamLimits

0xbac8,	// (0x00020029) dialer_ne_pane_t3

0x0002,

0xf7f4,	// (0x00023d55) dialer_ne_pane_t_ParamLimits

0xf7f4,	// (0x00023d55) dialer_ne_pane_t

0xbaec,	// (0x0002004d) dialer_ne_pane_t3_copy1_ParamLimits

0xbaec,	// (0x0002004d) dialer_ne_pane_t3_copy1

0xbb10,	// (0x00020071) cell_dialer_keypad_pane_ParamLimits

0xbb10,	// (0x00020071) cell_dialer_keypad_pane

0xbb25,	// (0x00020086) cell_dialer_command_1_pane_ParamLimits

0xbb25,	// (0x00020086) cell_dialer_command_1_pane

0xbb3b,	// (0x0002009c) cell_dialer_command_2_pane_ParamLimits

0xbb3b,	// (0x0002009c) cell_dialer_command_2_pane

0x4477,	// (0x000189d8) bg_button_pane_cp02_ParamLimits

0x4477,	// (0x000189d8) bg_button_pane_cp02

0xbb4a,	// (0x000200ab) cell_dialer_keypad_pane_g1_ParamLimits

0xbb4a,	// (0x000200ab) cell_dialer_keypad_pane_g1

0x4477,	// (0x000189d8) bg_button_pane_cp03_ParamLimits

0x4477,	// (0x000189d8) bg_button_pane_cp03

0xbb5f,	// (0x000200c0) cell_dialer_command_1_pane_g1_ParamLimits

0xbb5f,	// (0x000200c0) cell_dialer_command_1_pane_g1

0x4483,	// (0x000189e4) bg_button_pane_cp04

0xbb72,	// (0x000200d3) cell_dialer_command_2_pane_g1

0x2690,	// (0x00016bf1) bg_button_pane_cp06

0x448b,	// (0x000189ec) dialer_ne_clear_pane_g1

0x25ad,	// (0x00016b0e) navi_pane_g2

0xa1fa,	// (0x0001e75b) navi_pane_g3

0x0002,

0xf409,	// (0x0002396a) navi_pane_g

0x262f,	// (0x00016b90) navi_pane_mv_g2

0x2657,	// (0x00016bb8) navi_pane_mv_g5

0xa21f,	// (0x0001e780) navi_pane_mv_t1

0x182b,	// (0x00015d8c) main_clock2_pane

0xbba3,	// (0x00020104) main_clock2_list_pane_ParamLimits

0xbba3,	// (0x00020104) main_clock2_list_pane

0xbbc9,	// (0x0002012a) main_clock2_pane_t1_ParamLimits

0xbbc9,	// (0x0002012a) main_clock2_pane_t1

0xbbf3,	// (0x00020154) main_clock2_pane_t2_ParamLimits

0xbbf3,	// (0x00020154) main_clock2_pane_t2

0x0004,

0xf7fb,	// (0x00023d5c) main_clock2_pane_t_ParamLimits

0xf7fb,	// (0x00023d5c) main_clock2_pane_t

0xbc56,	// (0x000201b7) popup_clock_analogue_window_cp03_ParamLimits

0xbc56,	// (0x000201b7) popup_clock_analogue_window_cp03

0xbc72,	// (0x000201d3) popup_clock_digital_window_cp02_ParamLimits

0xbc72,	// (0x000201d3) popup_clock_digital_window_cp02

0xbcc0,	// (0x00020221) main_clock2_list_single_pane_ParamLimits

0xbcc0,	// (0x00020221) main_clock2_list_single_pane

0x2690,	// (0x00016bf1) list_highlight_pane_cp05

0x4493,	// (0x000189f4) main_clock2_list_single_pane_t1

0x9427,	// (0x0001d988) popup_toolbar_window_cp04_ParamLimits

0xb338,	// (0x0001f899) camera2_autofocus_pane_g2_ParamLimits

0xb338,	// (0x0001f899) camera2_autofocus_pane_g2

0xb344,	// (0x0001f8a5) camera2_autofocus_pane_g3_ParamLimits

0xb344,	// (0x0001f8a5) camera2_autofocus_pane_g3

0xb350,	// (0x0001f8b1) camera2_autofocus_pane_g4_ParamLimits

0xb350,	// (0x0001f8b1) camera2_autofocus_pane_g4

0xb35c,	// (0x0001f8bd) camera2_autofocus_pane_g5_ParamLimits

0xb35c,	// (0x0001f8bd) camera2_autofocus_pane_g5

0x0004,

0xf744,	// (0x00023ca5) camera2_autofocus_pane_g_ParamLimits

0xf744,	// (0x00023ca5) camera2_autofocus_pane_g

0xb4a0,	// (0x0001fa01) camera2_autofocus_pane_cp_g2

0xb4a8,	// (0x0001fa09) camera2_autofocus_pane_cp_g3

0xb4b0,	// (0x0001fa11) camera2_autofocus_pane_cp_g4

0xb4b8,	// (0x0001fa19) camera2_autofocus_pane_cp_g5

0x0004,

0xf7aa,	// (0x00023d0b) camera2_autofocus_pane_cp_g

0xba8b,	// (0x0001ffec) popup_dialer_spcha_window

0x106d,	// (0x000155ce) bg_popup_sub_pane_cp07

0x44a1,	// (0x00018a02) list_spcha_pane

0x44a9,	// (0x00018a0a) list_single_spcha_pane_ParamLimits

0x44a9,	// (0x00018a0a) list_single_spcha_pane

0x106d,	// (0x000155ce) list_highlight_pane_cp06

0x44ba,	// (0x00018a1b) list_single_spcha_pane_t1

0x358f,	// (0x00017af0) popup_call2_audio_out_window_g4_ParamLimits

0x358f,	// (0x00017af0) popup_call2_audio_out_window_g4

0x106d,	// (0x000155ce) main_imed2_pane

0x3bac,	// (0x0001810d) popup_imed_adjust2_window

0xad52,	// (0x0001f2b3) popup_imed_trans_window_ParamLimits

0xad52,	// (0x0001f2b3) popup_imed_trans_window

0x3ebf,	// (0x00018420) popup_blid_sat_info2_window_t1

0x3ecd,	// (0x0001842e) popup_blid_sat_info2_window_t2

0x000a,

0xf6d9,	// (0x00023c3a) popup_blid_sat_info2_window_t

0xbcf0,	// (0x00020251) aid_size_cell_colour_35

0xbd07,	// (0x00020268) aid_size_cell_colour_112

0xbd1e,	// (0x0002027f) aid_size_cell_effect

0x10c0,	// (0x00015621) bg_tb_trans_pane_cp02

0x43bb,	// (0x0001891c) heading_imed_pane

0xbd38,	// (0x00020299) listscroll_imed_pane

0x44c8,	// (0x00018a29) heading_imed_pane_g1

0x44d0,	// (0x00018a31) heading_imed_pane_t1

0x44de,	// (0x00018a3f) grid_imed_colour_35_pane_ParamLimits

0x44de,	// (0x00018a3f) grid_imed_colour_35_pane

0xbd44,	// (0x000202a5) grid_imed_effect_pane

0x44f1,	// (0x00018a52) list_imed_aspect_pane

0xbd50,	// (0x000202b1) scroll_pane_cp027_ParamLimits

0xbd50,	// (0x000202b1) scroll_pane_cp027

0xbd5c,	// (0x000202bd) cell_imed_effect_pane_ParamLimits

0xbd5c,	// (0x000202bd) cell_imed_effect_pane

0x44f9,	// (0x00018a5a) cell_imed_colour_pane_ParamLimits

0x44f9,	// (0x00018a5a) cell_imed_colour_pane

0x4533,	// (0x00018a94) cell_imed_colour_pane_g1_ParamLimits

0x4533,	// (0x00018a94) cell_imed_colour_pane_g1

0x4544,	// (0x00018aa5) hgihlgiht_grid_pane_cp016_ParamLimits

0x4544,	// (0x00018aa5) hgihlgiht_grid_pane_cp016

0xbd72,	// (0x000202d3) cell_imed_effect_pane_g1

0xbd7a,	// (0x000202db) grid_highlight_pane_cp017

0x4555,	// (0x00018ab6) list_imed_single_pane_ParamLimits

0x4555,	// (0x00018ab6) list_imed_single_pane

0x106d,	// (0x000155ce) list_highlight_pane_cp07

0x4568,	// (0x00018ac9) list_imed_aspect_pane_comp1_t1

0x3b86,	// (0x000180e7) bg_tb_trans_pane_cp05

0x4588,	// (0x00018ae9) popup_imed_adjust2_window_g1

0x45af,	// (0x00018b10) popup_imed_adjust2_window_t1

0x45c7,	// (0x00018b28) slider_imed_adjust_pane

0x45db,	// (0x00018b3c) slider_imed_adjust_pane_g1

0x45eb,	// (0x00018b4c) slider_imed_adjust_pane_g2

0x45fb,	// (0x00018b5c) slider_imed_adjust_pane_g3

0x460c,	// (0x00018b6d) slider_imed_adjust_pane_g4

0x0003,

0xf818,	// (0x00023d79) slider_imed_adjust_pane_g

0xbd83,	// (0x000202e4) aid_size_cell_clipart2

0xbd8f,	// (0x000202f0) grid_imed_clipart_pane

0x461d,	// (0x00018b7e) scroll_pane_cp031

0xbd99,	// (0x000202fa) cell_imed_clipart_pane_ParamLimits

0xbd99,	// (0x000202fa) cell_imed_clipart_pane

0xbdb0,	// (0x00020311) cell_imed_clipart_pane_g1

0x106d,	// (0x000155ce) grid_highlight_pane_cp014

0xbbaf,	// (0x00020110) main_clock2_pane_g1_ParamLimits

0xbbaf,	// (0x00020110) main_clock2_pane_g1

0xbc8a,	// (0x000201eb) aid_call2_pane_cp10

0xbc96,	// (0x000201f7) aid_call_pane_cp10

0x255d,	// (0x00016abe) popup_clock_analogue_window_cp10_g1

0x255d,	// (0x00016abe) popup_clock_analogue_window_cp10_g2

0xbca2,	// (0x00020203) popup_clock_analogue_window_cp10_g3

0xbca2,	// (0x00020203) popup_clock_analogue_window_cp10_g4

0x255d,	// (0x00016abe) popup_clock_analogue_window_cp10_g5

0x0004,

0xf806,	// (0x00023d67) popup_clock_analogue_window_cp10_g

0xbcae,	// (0x0002020f) popup_clock_analogue_window_cp10_t1

0x7ba4,	// (0x0001c105) clock_digital_number_pane_cp10_ParamLimits

0x7ba4,	// (0x0001c105) clock_digital_number_pane_cp10

0x7bbc,	// (0x0001c11d) clock_digital_number_pane_cp11_ParamLimits

0x7bbc,	// (0x0001c11d) clock_digital_number_pane_cp11

0x7bd4,	// (0x0001c135) clock_digital_number_pane_cp12_ParamLimits

0x7bd4,	// (0x0001c135) clock_digital_number_pane_cp12

0x7bec,	// (0x0001c14d) clock_digital_number_pane_cp13_ParamLimits

0x7bec,	// (0x0001c14d) clock_digital_number_pane_cp13

0x7c04,	// (0x0001c165) clock_digital_separator_pane_cp10_ParamLimits

0x7c04,	// (0x0001c165) clock_digital_separator_pane_cp10

0xbcd2,	// (0x00020233) popup_clock_digital_window_cp02_t1_ParamLimits

0xbcd2,	// (0x00020233) popup_clock_digital_window_cp02_t1

0x1732,	// (0x00015c93) clock_digital_number_pane_cp10_g1

0x1732,	// (0x00015c93) clock_digital_number_pane_cp10_g2

0x0001,

0xf821,	// (0x00023d82) clock_digital_number_pane_cp10_g

0x1732,	// (0x00015c93) clock_digital_separator_pane_cp10_g1

0x1732,	// (0x00015c93) clock_digital_separator_pane_g2_cp10

0x2660,	// (0x00016bc1) navi_pane_vded_g4

0x2669,	// (0x00016bca) navi_pane_vded_g5

0x2672,	// (0x00016bd3) navi_pane_vded_t1

0x106d,	// (0x000155ce) main_vded_pane

0xbdb9,	// (0x0002031a) main_vded_pane_g1

0xbdc1,	// (0x00020322) main_vded_pane_g2

0xbdc9,	// (0x0002032a) main_vded_pane_g3

0x0002,

0xf826,	// (0x00023d87) main_vded_pane_g

0xbdd1,	// (0x00020332) main_vded_pane_t1

0xbddf,	// (0x00020340) main_vded_pane_t2

0x0001,

0xf82d,	// (0x00023d8e) main_vded_pane_t

0xbded,	// (0x0002034e) vded_slider_pane

0xbdf5,	// (0x00020356) vded_video_pane

0x4625,	// (0x00018b86) vded_video_pane_g1

0xbdfd,	// (0x0002035e) vded_video_pane_g2

0x407b,	// (0x000185dc) vded_video_pane_g3

0x0002,

0xf832,	// (0x00023d93) vded_video_pane_g

0x462f,	// (0x00018b90) vded_slider_pane_g1

0x3d92,	// (0x000182f3) vded_slider_pane_g2

0x4638,	// (0x00018b99) vded_slider_pane_g3

0x4641,	// (0x00018ba2) vded_slider_pane_g4

0x464a,	// (0x00018bab) vded_slider_pane_g5

0x0004,

0xf839,	// (0x00023d9a) vded_slider_pane_g

0xb94f,	// (0x0001feb0) mup3_rocker_pane_ParamLimits

0xb94f,	// (0x0001feb0) mup3_rocker_pane

0xbe06,	// (0x00020367) mup3_control_keys_pane_g1

0xbe0e,	// (0x0002036f) mup3_control_keys_pane_g2

0xbe16,	// (0x00020377) mup3_control_keys_pane_g3

0xbe1e,	// (0x0002037f) mup3_control_keys_pane_g4

0x0003,

0xf844,	// (0x00023da5) mup3_control_keys_pane_g

0x89cc,	// (0x0001cf2d) popup_toolbar2_fixed_window_cp01_ParamLimits

0x89cc,	// (0x0001cf2d) popup_toolbar2_fixed_window_cp01

0xb967,	// (0x0001fec8) popup_toolbar2_fixed_window_cp02_ParamLimits

0xb967,	// (0x0001fec8) popup_toolbar2_fixed_window_cp02

0x2ece,	// (0x0001742f) popup_call2_audio_second_window_t4_ParamLimits

0x2ece,	// (0x0001742f) popup_call2_audio_second_window_t4

0x33fc,	// (0x0001795d) popup_call2_audio_first_window_t6_ParamLimits

0x33fc,	// (0x0001795d) popup_call2_audio_first_window_t6

0x3692,	// (0x00017bf3) popup_call2_audio_out_window_t6_ParamLimits

0x3692,	// (0x00017bf3) popup_call2_audio_out_window_t6

0x106d,	// (0x000155ce) main_vitu_pane

0xbe2e,	// (0x0002038f) aid_size_cell_itu_ParamLimits

0xbe2e,	// (0x0002038f) aid_size_cell_itu

0x4383,	// (0x000188e4) bg_popup_window_pane_cp08_ParamLimits

0x4383,	// (0x000188e4) bg_popup_window_pane_cp08

0xbe3c,	// (0x0002039d) field_vitu_entry_pane_ParamLimits

0xbe3c,	// (0x0002039d) field_vitu_entry_pane

0xbe49,	// (0x000203aa) grid_vitu_function_pane_ParamLimits

0xbe49,	// (0x000203aa) grid_vitu_function_pane

0xbe55,	// (0x000203b6) grid_vitu_itu_pane_ParamLimits

0xbe55,	// (0x000203b6) grid_vitu_itu_pane

0xbe61,	// (0x000203c2) cell_vitu_itu_pane_ParamLimits

0xbe61,	// (0x000203c2) cell_vitu_itu_pane

0xbe76,	// (0x000203d7) cell_vitu_function_pane_ParamLimits

0xbe76,	// (0x000203d7) cell_vitu_function_pane

0x10c0,	// (0x00015621) bg_popup_sub_pane_cp08_ParamLimits

0x10c0,	// (0x00015621) bg_popup_sub_pane_cp08

0xbe88,	// (0x000203e9) field_vitu_entry_pane_t1_ParamLimits

0xbe88,	// (0x000203e9) field_vitu_entry_pane_t1

0x466b,	// (0x00018bcc) field_vitu_entry_pane_t2_ParamLimits

0x466b,	// (0x00018bcc) field_vitu_entry_pane_t2

0x0001,

0xf852,	// (0x00023db3) field_vitu_entry_pane_t_ParamLimits

0xf852,	// (0x00023db3) field_vitu_entry_pane_t

0x4688,	// (0x00018be9) bg_button_pane_cp05_ParamLimits

0x4688,	// (0x00018be9) bg_button_pane_cp05

0xbea1,	// (0x00020402) cell_vitu_itu_pane_g1

0xbeb9,	// (0x0002041a) cell_vitu_itu_pane_t1_ParamLimits

0xbeb9,	// (0x0002041a) cell_vitu_itu_pane_t1

0xbecb,	// (0x0002042c) cell_vitu_itu_pane_t2_ParamLimits

0xbecb,	// (0x0002042c) cell_vitu_itu_pane_t2

0x0002,

0xf857,	// (0x00023db8) cell_vitu_itu_pane_t_ParamLimits

0xf857,	// (0x00023db8) cell_vitu_itu_pane_t

0x4696,	// (0x00018bf7) bg_button_pane_cp07

0xbf00,	// (0x00020461) cell_vitu_function_pane_g1

0x748e,	// (0x0001b9ef) main_calc_pane_g1

0x8813,	// (0x0001cd74) aid_visual_content_pane

0x106d,	// (0x000155ce) main_vradio_pane

0xbf09,	// (0x0002046a) main_vradio_pane_g1_ParamLimits

0xbf09,	// (0x0002046a) main_vradio_pane_g1

0x46a0,	// (0x00018c01) main_vradio_pane_g2_ParamLimits

0x46a0,	// (0x00018c01) main_vradio_pane_g2

0x0001,

0xf85e,	// (0x00023dbf) main_vradio_pane_g_ParamLimits

0xf85e,	// (0x00023dbf) main_vradio_pane_g

0xbf17,	// (0x00020478) main_vradio_pane_t1_ParamLimits

0xbf17,	// (0x00020478) main_vradio_pane_t1

0xbf29,	// (0x0002048a) main_vradio_pane_t2_ParamLimits

0xbf29,	// (0x0002048a) main_vradio_pane_t2

0x46ad,	// (0x00018c0e) main_vradio_pane_t3_ParamLimits

0x46ad,	// (0x00018c0e) main_vradio_pane_t3

0x0002,

0xf863,	// (0x00023dc4) main_vradio_pane_t_ParamLimits

0xf863,	// (0x00023dc4) main_vradio_pane_t

0xbf3b,	// (0x0002049c) vradio_rocker_control_pane_ParamLimits

0xbf3b,	// (0x0002049c) vradio_rocker_control_pane

0xbf47,	// (0x000204a8) vradio_station_info_pane_ParamLimits

0xbf47,	// (0x000204a8) vradio_station_info_pane

0x46bf,	// (0x00018c20) vradio_frequency_info_pane_ParamLimits

0x46bf,	// (0x00018c20) vradio_frequency_info_pane

0x407b,	// (0x000185dc) vradio_station_info_pane_g1

0x46ce,	// (0x00018c2f) vradio_station_info_pane_t1_ParamLimits

0x46ce,	// (0x00018c2f) vradio_station_info_pane_t1

0x46f0,	// (0x00018c51) vradio_station_info_pane_t2_ParamLimits

0x46f0,	// (0x00018c51) vradio_station_info_pane_t2

0x0001,

0xf86a,	// (0x00023dcb) vradio_station_info_pane_t_ParamLimits

0xf86a,	// (0x00023dcb) vradio_station_info_pane_t

0x4702,	// (0x00018c63) vradio_tuning_pane

0x470a,	// (0x00018c6b) vradio_rocker_control_pane_g1

0x4712,	// (0x00018c73) vradio_rocker_control_pane_g2

0x471a,	// (0x00018c7b) vradio_rocker_control_pane_g3

0x4722,	// (0x00018c83) vradio_rocker_control_pane_g4

0x472a,	// (0x00018c8b) vradio_rocker_control_pane_g5

0x0004,

0xf86f,	// (0x00023dd0) vradio_rocker_control_pane_g

0xbf54,	// (0x000204b5) vradio_frequency_info_pane_g1

0x4732,	// (0x00018c93) vradio_frequency_info_pane_t1_ParamLimits

0x4732,	// (0x00018c93) vradio_frequency_info_pane_t1

0xbf5c,	// (0x000204bd) vradio_tuning_pane_g1

0xbf65,	// (0x000204c6) vradio_tuning_pane_t1

0x1097,	// (0x000155f8) area_side_right_pane_ParamLimits

0x1097,	// (0x000155f8) area_side_right_pane

0x3b4d,	// (0x000180ae) status_small_pane_g1

0x3b55,	// (0x000180b6) status_small_pane_g2

0x3b5e,	// (0x000180bf) status_small_pane_g3

0x3b67,	// (0x000180c8) status_small_pane_g4

0x0003,

0xf62f,	// (0x00023b90) status_small_pane_g

0x3b70,	// (0x000180d1) status_small_pane_t1

0x106d,	// (0x000155ce) main_video3_pane

0x4746,	// (0x00018ca7) cams_zoom_vslider_pane

0x474e,	// (0x00018caf) image3_wide_pane_ParamLimits

0x474e,	// (0x00018caf) image3_wide_pane

0x4768,	// (0x00018cc9) image3_wide_small_pane

0x4772,	// (0x00018cd3) main_video3_pane_g1_ParamLimits

0x4772,	// (0x00018cd3) main_video3_pane_g1

0x478e,	// (0x00018cef) main_video3_pane_g2_ParamLimits

0x478e,	// (0x00018cef) main_video3_pane_g2

0x0001,

0xf87a,	// (0x00023ddb) main_video3_pane_g_ParamLimits

0xf87a,	// (0x00023ddb) main_video3_pane_g

0x47aa,	// (0x00018d0b) main_video3_pane_t1_ParamLimits

0x47aa,	// (0x00018d0b) main_video3_pane_t1

0x47d5,	// (0x00018d36) main_video3_pane_t2_ParamLimits

0x47d5,	// (0x00018d36) main_video3_pane_t2

0x4800,	// (0x00018d61) main_video3_pane_t3_ParamLimits

0x4800,	// (0x00018d61) main_video3_pane_t3

0x0002,

0xf87f,	// (0x00023de0) main_video3_pane_t_ParamLimits

0xf87f,	// (0x00023de0) main_video3_pane_t

0x482b,	// (0x00018d8c) cams_zoom_vslider_pane_g1

0x4834,	// (0x00018d95) cams_zoom_vslider_pane_g2

0x0001,

0xf886,	// (0x00023de7) cams_zoom_vslider_pane_g

0x483c,	// (0x00018d9d) small_slider_vertical_pane

0x407b,	// (0x000185dc) small_slider_vertical_pane_g1

0x407b,	// (0x000185dc) small_slider_vertical_pane_g2

0x4844,	// (0x00018da5) small_slider_vertical_pane_g3

0x0002,

0xf88b,	// (0x00023dec) small_slider_vertical_pane_g

0x106d,	// (0x000155ce) main_hwr_training_pane

0x484d,	// (0x00018dae) hwr_training_instruct_pane_ParamLimits

0x484d,	// (0x00018dae) hwr_training_instruct_pane

0xbf74,	// (0x000204d5) hwr_training_navi_pane_ParamLimits

0xbf74,	// (0x000204d5) hwr_training_navi_pane

0xbf88,	// (0x000204e9) hwr_training_write_pane_ParamLimits

0xbf88,	// (0x000204e9) hwr_training_write_pane

0x106d,	// (0x000155ce) bg_frame_shadow_pane

0x487c,	// (0x00018ddd) hwr_training_write_pane_g1

0x4884,	// (0x00018de5) hwr_training_write_pane_g2

0x488c,	// (0x00018ded) hwr_training_write_pane_g3

0x4894,	// (0x00018df5) hwr_training_write_pane_g4

0x489c,	// (0x00018dfd) hwr_training_write_pane_g5

0x48a4,	// (0x00018e05) hwr_training_write_pane_g6

0x48ac,	// (0x00018e0d) hwr_training_write_pane_g7

0x0006,

0xf892,	// (0x00023df3) hwr_training_write_pane_g

0x7c1c,	// (0x0001c17d) hwr_training_navi_pane_g1_ParamLimits

0x7c1c,	// (0x0001c17d) hwr_training_navi_pane_g1

0x7c2e,	// (0x0001c18f) hwr_training_navi_pane_g2_ParamLimits

0x7c2e,	// (0x0001c18f) hwr_training_navi_pane_g2

0x7c40,	// (0x0001c1a1) hwr_training_navi_pane_g3_ParamLimits

0x7c40,	// (0x0001c1a1) hwr_training_navi_pane_g3

0x7c50,	// (0x0001c1b1) hwr_training_navi_pane_g4_ParamLimits

0x7c50,	// (0x0001c1b1) hwr_training_navi_pane_g4

0x0004,

0xf8a1,	// (0x00023e02) hwr_training_navi_pane_g_ParamLimits

0xf8a1,	// (0x00023e02) hwr_training_navi_pane_g

0x7c6a,	// (0x0001c1cb) hwr_training_navi_pane_t1

0xbfb6,	// (0x00020517) list_single_hwr_training_instruct_pane_ParamLimits

0xbfb6,	// (0x00020517) list_single_hwr_training_instruct_pane

0x4903,	// (0x00018e64) list_single_hwr_training_instruct_pane_t1

0x3fbb,	// (0x0001851c) bg_frame_shadow_pane_g1

0x4912,	// (0x00018e73) bg_frame_shadow_pane_g2

0x491a,	// (0x00018e7b) bg_frame_shadow_pane_g3

0x4922,	// (0x00018e83) bg_frame_shadow_pane_g4

0x492a,	// (0x00018e8b) bg_frame_shadow_pane_g5

0x4932,	// (0x00018e93) bg_frame_shadow_pane_g6

0x493a,	// (0x00018e9b) bg_frame_shadow_pane_g7

0x194e,	// (0x00015eaf) bg_frame_shadow_pane_g8

0x0007,

0xf8ac,	// (0x00023e0d) bg_frame_shadow_pane_g

0x106d,	// (0x000155ce) main_video_tele_dialer_pane

0x7c78,	// (0x0001c1d9) aid_size_cell_video_keypad_ParamLimits

0x7c78,	// (0x0001c1d9) aid_size_cell_video_keypad

0x7c88,	// (0x0001c1e9) grid_video_dialer_keypad_pane_ParamLimits

0x7c88,	// (0x0001c1e9) grid_video_dialer_keypad_pane

0x7cb8,	// (0x0001c219) video_down_pane_cp_ParamLimits

0x7cb8,	// (0x0001c219) video_down_pane_cp

0x7cc4,	// (0x0001c225) cell_video_dialer_keypad_pane_ParamLimits

0x7cc4,	// (0x0001c225) cell_video_dialer_keypad_pane

0x4942,	// (0x00018ea3) bg_button_pane_cp08_ParamLimits

0x4942,	// (0x00018ea3) bg_button_pane_cp08

0xbfea,	// (0x0002054b) cell_video_dialer_keypad_pane_g1_ParamLimits

0xbfea,	// (0x0002054b) cell_video_dialer_keypad_pane_g1

0xb943,	// (0x0001fea4) mup3_rocker2_pane_ParamLimits

0xb943,	// (0x0001fea4) mup3_rocker2_pane

0x407b,	// (0x000185dc) mup3_rocker2_pane_g1

0xacec,	// (0x0001f24d) main_dialer2_pane

0x106d,	// (0x000155ce) main_mp4_pane

0x7ce1,	// (0x0001c242) main_mp4_pane_g1_ParamLimits

0x7ce1,	// (0x0001c242) main_mp4_pane_g1

0x7cef,	// (0x0001c250) main_mp4_pane_g2_ParamLimits

0x7cef,	// (0x0001c250) main_mp4_pane_g2

0x7cfd,	// (0x0001c25e) main_mp4_pane_g3_ParamLimits

0x7cfd,	// (0x0001c25e) main_mp4_pane_g3

0x7d32,	// (0x0001c293) main_mp4_pane_g4_ParamLimits

0x7d32,	// (0x0001c293) main_mp4_pane_g4

0x7d60,	// (0x0001c2c1) main_mp4_pane_g5_ParamLimits

0x7d60,	// (0x0001c2c1) main_mp4_pane_g5

0x0005,

0xf8cc,	// (0x00023e2d) main_mp4_pane_g_ParamLimits

0xf8cc,	// (0x00023e2d) main_mp4_pane_g

0x7dbc,	// (0x0001c31d) main_mp4_pane_t1_ParamLimits

0x7dbc,	// (0x0001c31d) main_mp4_pane_t1

0x7e14,	// (0x0001c375) main_mp4_pane_t2_ParamLimits

0x7e14,	// (0x0001c375) main_mp4_pane_t2

0x4a98,	// (0x00018ff9) main_mp4_pane_t3_ParamLimits

0x4a98,	// (0x00018ff9) main_mp4_pane_t3

0x7e66,	// (0x0001c3c7) main_mp4_pane_t4_ParamLimits

0x7e66,	// (0x0001c3c7) main_mp4_pane_t4

0x0003,

0xf8d9,	// (0x00023e3a) main_mp4_pane_t_ParamLimits

0xf8d9,	// (0x00023e3a) main_mp4_pane_t

0x7ea6,	// (0x0001c407) mp4_progress_pane_ParamLimits

0x7ea6,	// (0x0001c407) mp4_progress_pane

0x7eea,	// (0x0001c44b) mp4_rocker_pane_ParamLimits

0x7eea,	// (0x0001c44b) mp4_rocker_pane

0x4b68,	// (0x000190c9) mp4_progress_pane_t1

0x4b7f,	// (0x000190e0) mp4_progress_pane_t2

0x0001,

0xf8e2,	// (0x00023e43) mp4_progress_pane_t

0x4b96,	// (0x000190f7) mup_progress_pane_cp04

0x5576,	// (0x00019ad7) mp4_rocker_pane_g1

0x7f08,	// (0x0001c469) aid_cell_size_keypad2_ParamLimits

0x7f08,	// (0x0001c469) aid_cell_size_keypad2

0x7f18,	// (0x0001c479) dialer2_ne_pane_ParamLimits

0x7f18,	// (0x0001c479) dialer2_ne_pane

0x7f24,	// (0x0001c485) grid_dialer2_keypad_pane_ParamLimits

0x7f24,	// (0x0001c485) grid_dialer2_keypad_pane

0x555a,	// (0x00019abb) bg_popup_call_pane_cp07_ParamLimits

0x555a,	// (0x00019abb) bg_popup_call_pane_cp07

0xc021,	// (0x00020582) dialer2_ne_pane_t1_ParamLimits

0xc021,	// (0x00020582) dialer2_ne_pane_t1

0x7f30,	// (0x0001c491) cell_dialer2_keypad_pane_ParamLimits

0x7f30,	// (0x0001c491) cell_dialer2_keypad_pane

0x4bb4,	// (0x00019115) bg_button_pane_pane_cp04_ParamLimits

0x4bb4,	// (0x00019115) bg_button_pane_pane_cp04

0xc046,	// (0x000205a7) cell_dialer2_keypad_pane_g1_ParamLimits

0xc046,	// (0x000205a7) cell_dialer2_keypad_pane_g1

0x9303,	// (0x0001d864) aid_placing_vt_set_content_ParamLimits

0x9303,	// (0x0001d864) aid_placing_vt_set_content

0x9329,	// (0x0001d88a) aid_placing_vt_set_title_ParamLimits

0x9329,	// (0x0001d88a) aid_placing_vt_set_title

0x106d,	// (0x000155ce) main_image3_pane

0x7f6d,	// (0x0001c4ce) area_side_right_pane_cp01_ParamLimits

0x7f6d,	// (0x0001c4ce) area_side_right_pane_cp01

0x7f9a,	// (0x0001c4fb) main_image3_pane_g1_ParamLimits

0x7f9a,	// (0x0001c4fb) main_image3_pane_g1

0x7fa8,	// (0x0001c509) main_image3_pane_g2_ParamLimits

0x7fa8,	// (0x0001c509) main_image3_pane_g2

0x7fbf,	// (0x0001c520) main_image3_pane_g3_ParamLimits

0x7fbf,	// (0x0001c520) main_image3_pane_g3

0x7fd6,	// (0x0001c537) main_image3_pane_g4_ParamLimits

0x7fd6,	// (0x0001c537) main_image3_pane_g4

0x0003,

0xf8f1,	// (0x00023e52) main_image3_pane_g_ParamLimits

0xf8f1,	// (0x00023e52) main_image3_pane_g

0x7fed,	// (0x0001c54e) main_image3_pane_t1_ParamLimits

0x7fed,	// (0x0001c54e) main_image3_pane_t1

0x8012,	// (0x0001c573) main_image3_pane_t2_ParamLimits

0x8012,	// (0x0001c573) main_image3_pane_t2

0x8031,	// (0x0001c592) main_image3_pane_t3_ParamLimits

0x8031,	// (0x0001c592) main_image3_pane_t3

0x0003,

0xf8fa,	// (0x00023e5b) main_image3_pane_t_ParamLimits

0xf8fa,	// (0x00023e5b) main_image3_pane_t

0x4383,	// (0x000188e4) grid_sctrl_middle_pane_cp01_ParamLimits

0x4383,	// (0x000188e4) grid_sctrl_middle_pane_cp01

0xc092,	// (0x000205f3) cell_sctrl_middle_pane_cp01_ParamLimits

0xc092,	// (0x000205f3) cell_sctrl_middle_pane_cp01

0xc0a3,	// (0x00020604) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0xc0a3,	// (0x00020604) cell_sctrl_middle_pane_cp01_g1

0x106d,	// (0x000155ce) main_call4_pane

0xc0b0,	// (0x00020611) aid_size_button_call4_ParamLimits

0xc0b0,	// (0x00020611) aid_size_button_call4

0xc0da,	// (0x0002063b) call4_windows_pane_ParamLimits

0xc0da,	// (0x0002063b) call4_windows_pane

0xc0ee,	// (0x0002064f) grid_call4_button_pane_ParamLimits

0xc0ee,	// (0x0002064f) grid_call4_button_pane

0x4c0a,	// (0x0001916b) call4_windows_conf_pane

0xc108,	// (0x00020669) popup_call4_audio_first_window_ParamLimits

0xc108,	// (0x00020669) popup_call4_audio_first_window

0xc128,	// (0x00020689) popup_call4_audio_second_window_ParamLimits

0xc128,	// (0x00020689) popup_call4_audio_second_window

0x4c3d,	// (0x0001919e) popup_call4_audio_wait_window_ParamLimits

0x4c3d,	// (0x0001919e) popup_call4_audio_wait_window

0xc13a,	// (0x0002069b) cell_call4_button_pane_ParamLimits

0xc13a,	// (0x0002069b) cell_call4_button_pane

0x18ee,	// (0x00015e4f) bg_button_pane_cp09_ParamLimits

0x18ee,	// (0x00015e4f) bg_button_pane_cp09

0xc15d,	// (0x000206be) cell_call4_button_pane_g1_ParamLimits

0xc15d,	// (0x000206be) cell_call4_button_pane_g1

0xc16a,	// (0x000206cb) cell_call4_button_pane_t1_ParamLimits

0xc16a,	// (0x000206cb) cell_call4_button_pane_t1

0x4c83,	// (0x000191e4) popup_call4_audio_conf_window_ParamLimits

0x4c83,	// (0x000191e4) popup_call4_audio_conf_window

0xb974,	// (0x0001fed5) mup3_progress_pane_t1_ParamLimits

0xb98a,	// (0x0001feeb) mup3_progress_pane_t2_ParamLimits

0x43dd,	// (0x0001893e) mup3_progress_pane_t3_ParamLimits

0xf7d3,	// (0x00023d34) mup3_progress_pane_t_ParamLimits

0x43f4,	// (0x00018955) mup_progress_pane_cp03_ParamLimits

0xbe26,	// (0x00020387) mup3_control_keys_pane_g4_copy1

0x7ed4,	// (0x0001c435) mp4_rocker2_pane_ParamLimits

0x7ed4,	// (0x0001c435) mp4_rocker2_pane

0x4c9f,	// (0x00019200) mp4_rocker2_pane_g1

0x4c97,	// (0x000191f8) mp4_rocker2_pane_g2

0x808c,	// (0x0001c5ed) mp4_rocker2_pane_g3

0x8094,	// (0x0001c5f5) mp4_rocker2_pane_g4

0x809c,	// (0x0001c5fd) mp4_rocker2_pane_g5

0x0004,

0xf903,	// (0x00023e64) mp4_rocker2_pane_g

0x106d,	// (0x000155ce) main_camera4_pane

0x106d,	// (0x000155ce) main_video4_pane

0x7c94,	// (0x0001c1f5) main_video_tele_dialer_pane_t1_ParamLimits

0x7c94,	// (0x0001c1f5) main_video_tele_dialer_pane_t1

0x7ca6,	// (0x0001c207) main_video_tele_dialer_pane_t2_ParamLimits

0x7ca6,	// (0x0001c207) main_video_tele_dialer_pane_t2

0x0001,

0xf8bd,	// (0x00023e1e) main_video_tele_dialer_pane_t_ParamLimits

0xf8bd,	// (0x00023e1e) main_video_tele_dialer_pane_t

0x80ba,	// (0x0001c61b) cam4_autofocus_pane_ParamLimits

0x80ba,	// (0x0001c61b) cam4_autofocus_pane

0x80d0,	// (0x0001c631) cam4_image_uncrop_pane_ParamLimits

0x80d0,	// (0x0001c631) cam4_image_uncrop_pane

0x80e5,	// (0x0001c646) cam4_indicators_pane_ParamLimits

0x80e5,	// (0x0001c646) cam4_indicators_pane

0x80ff,	// (0x0001c660) main_camera4_pane_g1_ParamLimits

0x80ff,	// (0x0001c660) main_camera4_pane_g1

0x810b,	// (0x0001c66c) main_camera4_pane_g2_ParamLimits

0x810b,	// (0x0001c66c) main_camera4_pane_g2

0x810b,	// (0x0001c66c) main_camera4_pane_g3_ParamLimits

0x810b,	// (0x0001c66c) main_camera4_pane_g3

0x8117,	// (0x0001c678) main_camera4_pane_g4_ParamLimits

0x8117,	// (0x0001c678) main_camera4_pane_g4

0x8123,	// (0x0001c684) main_camera4_pane_g5_ParamLimits

0x8123,	// (0x0001c684) main_camera4_pane_g5

0x0005,

0xf90e,	// (0x00023e6f) main_camera4_pane_g_ParamLimits

0xf90e,	// (0x00023e6f) main_camera4_pane_g

0x813d,	// (0x0001c69e) main_camera4_pane_t1_ParamLimits

0x813d,	// (0x0001c69e) main_camera4_pane_t1

0x8161,	// (0x0001c6c2) bg_tb_trans_pane_cp06

0x8177,	// (0x0001c6d8) cam4_indicators_pane_g1

0x8187,	// (0x0001c6e8) cam4_indicators_pane_g2

0x0002,

0xf929,	// (0x00023e8a) cam4_indicators_pane_g

0x81a7,	// (0x0001c708) cam4_indicators_pane_t1

0x81cf,	// (0x0001c730) main_video4_pane_g1_ParamLimits

0x81cf,	// (0x0001c730) main_video4_pane_g1

0x810b,	// (0x0001c66c) main_video4_pane_g2_ParamLimits

0x810b,	// (0x0001c66c) main_video4_pane_g2

0x810b,	// (0x0001c66c) main_video4_pane_g3_ParamLimits

0x810b,	// (0x0001c66c) main_video4_pane_g3

0x8117,	// (0x0001c678) main_video4_pane_g4_ParamLimits

0x8117,	// (0x0001c678) main_video4_pane_g4

0x0004,

0xf930,	// (0x00023e91) main_video4_pane_g_ParamLimits

0xf930,	// (0x00023e91) main_video4_pane_g

0x81e3,	// (0x0001c744) vid4_indicators_pane_ParamLimits

0x81e3,	// (0x0001c744) vid4_indicators_pane

0x8201,	// (0x0001c762) video4_image_uncrop_cif_pane_ParamLimits

0x8201,	// (0x0001c762) video4_image_uncrop_cif_pane

0x820e,	// (0x0001c76f) video4_image_uncrop_nhd_pane_ParamLimits

0x820e,	// (0x0001c76f) video4_image_uncrop_nhd_pane

0x80d0,	// (0x0001c631) video4_image_uncrop_vga_pane_ParamLimits

0x80d0,	// (0x0001c631) video4_image_uncrop_vga_pane

0x821b,	// (0x0001c77c) bg_tb_trans_pane_cp07

0x8177,	// (0x0001c6d8) vid4_indicators_pane_g1

0x8229,	// (0x0001c78a) vid4_indicators_pane_g2

0x8239,	// (0x0001c79a) vid4_indicators_pane_g3

0x0004,

0xf93b,	// (0x00023e9c) vid4_indicators_pane_g

0x8266,	// (0x0001c7c7) vid4_indicators_pane_t1

0xc1a0,	// (0x00020701) cam4_autofocus_pane_g1

0xc1a8,	// (0x00020709) cam4_autofocus_pane_g2

0xc1b0,	// (0x00020711) cam4_autofocus_pane_g3

0x0002,

0xf946,	// (0x00023ea7) cam4_autofocus_pane_g

0xc1b8,	// (0x00020719) cam4_autofocus_pane_g3_copy1

0xbfce,	// (0x0002052f) video_down_pane_cp_t1

0xbfdc,	// (0x0002053d) video_down_pane_cp_t2

0x0001,

0xf8c2,	// (0x00023e23) video_down_pane_cp_t

0x4383,	// (0x000188e4) popup_vitu2_window_ParamLimits

0x4383,	// (0x000188e4) popup_vitu2_window

0x8280,	// (0x0001c7e1) aid_size_cell2_itu2_ParamLimits

0x8280,	// (0x0001c7e1) aid_size_cell2_itu2

0x82a2,	// (0x0001c803) aid_size_cell_itu2_ParamLimits

0x82a2,	// (0x0001c803) aid_size_cell_itu2

0x82e0,	// (0x0001c841) bg_popup_window_pane_cp09_ParamLimits

0x82e0,	// (0x0001c841) bg_popup_window_pane_cp09

0x82ee,	// (0x0001c84f) field_vitu2_entry_pane_ParamLimits

0x82ee,	// (0x0001c84f) field_vitu2_entry_pane

0x8304,	// (0x0001c865) grid_vitu2_function_pane_ParamLimits

0x8304,	// (0x0001c865) grid_vitu2_function_pane

0x8336,	// (0x0001c897) grid_vitu2_itu_pane_ParamLimits

0x8336,	// (0x0001c897) grid_vitu2_itu_pane

0x838c,	// (0x0001c8ed) cell_vitu2_itu_pane_ParamLimits

0x838c,	// (0x0001c8ed) cell_vitu2_itu_pane

0x83a1,	// (0x0001c902) cell_vitu2_function_pane_ParamLimits

0x83a1,	// (0x0001c902) cell_vitu2_function_pane

0x4d33,	// (0x00019294) bg_popup_call_pane_cp08_ParamLimits

0x4d33,	// (0x00019294) bg_popup_call_pane_cp08

0x4d4c,	// (0x000192ad) field_vitu2_entry_pane_g1

0x4d58,	// (0x000192b9) field_vitu2_entry_pane_g2

0x0002,

0xf94d,	// (0x00023eae) field_vitu2_entry_pane_g

0xc1c0,	// (0x00020721) field_vitu2_entry_pane_t1_ParamLimits

0xc1c0,	// (0x00020721) field_vitu2_entry_pane_t1

0x4d72,	// (0x000192d3) field_vitu2_entry_pane_t2_ParamLimits

0x4d72,	// (0x000192d3) field_vitu2_entry_pane_t2

0x0001,

0xf954,	// (0x00023eb5) field_vitu2_entry_pane_t_ParamLimits

0xf954,	// (0x00023eb5) field_vitu2_entry_pane_t

0x83e0,	// (0x0001c941) bg_button_pane_cp010_ParamLimits

0x83e0,	// (0x0001c941) bg_button_pane_cp010

0x83ee,	// (0x0001c94f) cell_vitu2_itu_pane_g1

0x840c,	// (0x0001c96d) cell_vitu2_itu_pane_t1_ParamLimits

0x840c,	// (0x0001c96d) cell_vitu2_itu_pane_t1

0x845e,	// (0x0001c9bf) cell_vitu2_itu_pane_t2_ParamLimits

0x845e,	// (0x0001c9bf) cell_vitu2_itu_pane_t2

0x0002,

0xf95e,	// (0x00023ebf) cell_vitu2_itu_pane_t_ParamLimits

0xf95e,	// (0x00023ebf) cell_vitu2_itu_pane_t

0x821b,	// (0x0001c77c) bg_button_pane_cp011

0x8519,	// (0x0001ca7a) cell_vitu2_function_pane_g1

0x106d,	// (0x000155ce) main_myfav_hc_pane

0x8071,	// (0x0001c5d2) popup_image3_note_pane_ParamLimits

0x8071,	// (0x0001c5d2) popup_image3_note_pane

0x807d,	// (0x0001c5de) popup_image3_tool_bar_pane_ParamLimits

0x807d,	// (0x0001c5de) popup_image3_tool_bar_pane

0x84cc,	// (0x0001ca2d) cell_vitu2_itu_pane_t3_ParamLimits

0x84cc,	// (0x0001ca2d) cell_vitu2_itu_pane_t3

0x106d,	// (0x000155ce) bg_popup_trans_pane

0x4d97,	// (0x000192f8) grid_image3_tool_bar_pane

0x4da1,	// (0x00019302) bg_popup_trans_pane_g1

0x1df1,	// (0x00016352) bg_popup_trans_pane_g2

0x4da9,	// (0x0001930a) bg_popup_trans_pane_g3

0x4db1,	// (0x00019312) bg_popup_trans_pane_g4

0x4db9,	// (0x0001931a) bg_popup_trans_pane_g5

0x4dc1,	// (0x00019322) bg_popup_trans_pane_g6

0x4dc9,	// (0x0001932a) bg_popup_trans_pane_g7

0x4dd1,	// (0x00019332) bg_popup_trans_pane_g8

0x1dd1,	// (0x00016332) bg_popup_trans_pane_g9

0x0008,

0xf965,	// (0x00023ec6) bg_popup_trans_pane_g

0x43a7,	// (0x00018908) cell_image3_tool_bar_pane_ParamLimits

0x43a7,	// (0x00018908) cell_image3_tool_bar_pane

0x407b,	// (0x000185dc) cell_image3_tool_bar_pane_g1

0x106d,	// (0x000155ce) bg_popup_trans_pane_cp1

0x4dd9,	// (0x0001933a) popup_image3_note_pane_t1

0x4de7,	// (0x00019348) popup_image3_note_pane_t2

0x4df5,	// (0x00019356) popup_image3_note_pane_t3

0x0002,

0xf978,	// (0x00023ed9) popup_image3_note_pane_t

0x4e03,	// (0x00019364) popup_image3_note_pane_t3_copy1

0xc1db,	// (0x0002073c) bg_myfav_hc_instruction_pane_ParamLimits

0xc1db,	// (0x0002073c) bg_myfav_hc_instruction_pane

0xc1ed,	// (0x0002074e) cell_myfav_contact_pane_ParamLimits

0xc1ed,	// (0x0002074e) cell_myfav_contact_pane

0xc207,	// (0x00020768) cell_myfav_contact_pane_cp1_ParamLimits

0xc207,	// (0x00020768) cell_myfav_contact_pane_cp1

0xc21d,	// (0x0002077e) cell_myfav_contact_pane_cp2_ParamLimits

0xc21d,	// (0x0002077e) cell_myfav_contact_pane_cp2

0xc233,	// (0x00020794) cell_myfav_contact_pane_cp3_ParamLimits

0xc233,	// (0x00020794) cell_myfav_contact_pane_cp3

0xc248,	// (0x000207a9) cell_myfav_contact_pane_cp4_ParamLimits

0xc248,	// (0x000207a9) cell_myfav_contact_pane_cp4

0xc25c,	// (0x000207bd) cell_myfav_contact_pane_cp5_ParamLimits

0xc25c,	// (0x000207bd) cell_myfav_contact_pane_cp5

0xc270,	// (0x000207d1) cell_myfav_contact_pane_cp6_ParamLimits

0xc270,	// (0x000207d1) cell_myfav_contact_pane_cp6

0xc284,	// (0x000207e5) cell_myfav_contact_pane_cp7_ParamLimits

0xc284,	// (0x000207e5) cell_myfav_contact_pane_cp7

0x4e11,	// (0x00019372) listscroll_gen_pane_cp05

0xc29c,	// (0x000207fd) main_myfav_hc_pane_g1_ParamLimits

0xc29c,	// (0x000207fd) main_myfav_hc_pane_g1

0xc2b2,	// (0x00020813) main_myfav_hc_pane_g2_ParamLimits

0xc2b2,	// (0x00020813) main_myfav_hc_pane_g2

0x0002,

0xf97f,	// (0x00023ee0) main_myfav_hc_pane_g_ParamLimits

0xf97f,	// (0x00023ee0) main_myfav_hc_pane_g

0xc2dc,	// (0x0002083d) main_myfav_hc_pane_t1_ParamLimits

0xc2dc,	// (0x0002083d) main_myfav_hc_pane_t1

0x4e1a,	// (0x0001937b) main_myfav_hc_pane_t2_ParamLimits

0x4e1a,	// (0x0001937b) main_myfav_hc_pane_t2

0x4e2c,	// (0x0001938d) main_myfav_hc_pane_t3_ParamLimits

0x4e2c,	// (0x0001938d) main_myfav_hc_pane_t3

0xc2f1,	// (0x00020852) main_myfav_hc_pane_t4_ParamLimits

0xc2f1,	// (0x00020852) main_myfav_hc_pane_t4

0x0004,

0xf986,	// (0x00023ee7) main_myfav_hc_pane_t_ParamLimits

0xf986,	// (0x00023ee7) main_myfav_hc_pane_t

0x407b,	// (0x000185dc) bg_myfav_hc_instruction_pane_g1

0x4e3e,	// (0x0001939f) cell_myfav_contact_pane_g1_ParamLimits

0x4e3e,	// (0x0001939f) cell_myfav_contact_pane_g1

0x4e3e,	// (0x0001939f) cell_myfav_contact_pane_g2_ParamLimits

0x4e3e,	// (0x0001939f) cell_myfav_contact_pane_g2

0x4e4a,	// (0x000193ab) cell_myfav_contact_pane_g3_ParamLimits

0x4e4a,	// (0x000193ab) cell_myfav_contact_pane_g3

0x43c7,	// (0x00018928) cell_myfav_contact_pane_g4_ParamLimits

0x43c7,	// (0x00018928) cell_myfav_contact_pane_g4

0x4e57,	// (0x000193b8) cell_myfav_contact_pane_g5_ParamLimits

0x4e57,	// (0x000193b8) cell_myfav_contact_pane_g5

0x0004,

0xf991,	// (0x00023ef2) cell_myfav_contact_pane_g_ParamLimits

0xf991,	// (0x00023ef2) cell_myfav_contact_pane_g

0xc2c8,	// (0x00020829) main_myfav_hc_pane_g3_ParamLimits

0xc2c8,	// (0x00020829) main_myfav_hc_pane_g3

0x894a,	// (0x0001ceab) popup_adpt_find_window

0xc315,	// (0x00020876) afind_page_pane_ParamLimits

0xc315,	// (0x00020876) afind_page_pane

0xc322,	// (0x00020883) aid_size_cell_afind_ParamLimits

0xc322,	// (0x00020883) aid_size_cell_afind

0xc33c,	// (0x0002089d) bg_popup_sub_pane_cp09_ParamLimits

0xc33c,	// (0x0002089d) bg_popup_sub_pane_cp09

0xc349,	// (0x000208aa) find_pane_cp01_ParamLimits

0xc349,	// (0x000208aa) find_pane_cp01

0x4e63,	// (0x000193c4) grid_afind_control_pane_ParamLimits

0x4e63,	// (0x000193c4) grid_afind_control_pane

0xc356,	// (0x000208b7) grid_afind_pane_ParamLimits

0xc356,	// (0x000208b7) grid_afind_pane

0xc36c,	// (0x000208cd) cell_afind_pane_ParamLimits

0xc36c,	// (0x000208cd) cell_afind_pane

0x407b,	// (0x000185dc) afind_page_pane_g1

0xc3a2,	// (0x00020903) afind_page_pane_g2

0xc3ab,	// (0x0002090c) afind_page_pane_g3

0x0002,

0xf99c,	// (0x00023efd) afind_page_pane_g

0xc3b4,	// (0x00020915) afind_page_pane_t1

0x4e77,	// (0x000193d8) cell_afind_grid_control_pane_ParamLimits

0x4e77,	// (0x000193d8) cell_afind_grid_control_pane

0x4bb4,	// (0x00019115) bg_button_pane_cp69_ParamLimits

0x4bb4,	// (0x00019115) bg_button_pane_cp69

0xc3d4,	// (0x00020935) cell_afind_pane_g1_ParamLimits

0xc3d4,	// (0x00020935) cell_afind_pane_g1

0xc3e1,	// (0x00020942) cell_afind_pane_t1_ParamLimits

0xc3e1,	// (0x00020942) cell_afind_pane_t1

0x1b3d,	// (0x0001609e) bg_button_pane_cp72

0x4e86,	// (0x000193e7) cell_afind_grid_control_pane_g1

0xa924,	// (0x0001ee85) aid_image_placing_area_ParamLimits

0xa924,	// (0x0001ee85) aid_image_placing_area

0x4653,	// (0x00018bb4) field_vitu_entry_pane_g1_ParamLimits

0x4653,	// (0x00018bb4) field_vitu_entry_pane_g1

0x465f,	// (0x00018bc0) field_vitu_entry_pane_g2_ParamLimits

0x465f,	// (0x00018bc0) field_vitu_entry_pane_g2

0x0001,

0xf84d,	// (0x00023dae) field_vitu_entry_pane_g_ParamLimits

0xf84d,	// (0x00023dae) field_vitu_entry_pane_g

0xbea1,	// (0x00020402) cell_vitu_itu_pane_g1_ParamLimits

0xbee3,	// (0x00020444) cell_vitu_itu_pane_t3_ParamLimits

0xbee3,	// (0x00020444) cell_vitu_itu_pane_t3

0x4b68,	// (0x000190c9) mp4_progress_pane_t1_ParamLimits

0x4b7f,	// (0x000190e0) mp4_progress_pane_t2_ParamLimits

0xf8e2,	// (0x00023e43) mp4_progress_pane_t_ParamLimits

0x4b96,	// (0x000190f7) mup_progress_pane_cp04_ParamLimits

0xc303,	// (0x00020864) main_myfav_hc_pane_t5_ParamLimits

0xc303,	// (0x00020864) main_myfav_hc_pane_t5

0x108f,	// (0x000155f0) aid_zoom_text_primary

0x894a,	// (0x0001ceab) popup_adpt_find_window_ParamLimits

0x10c0,	// (0x00015621) main_cam_set_pane

0x80f3,	// (0x0001c654) cam4_zoom_pane_ParamLimits

0x80f3,	// (0x0001c654) cam4_zoom_pane

0xc3f3,	// (0x00020954) main_cam_set_pane_g1_ParamLimits

0xc3f3,	// (0x00020954) main_cam_set_pane_g1

0xc401,	// (0x00020962) main_cam_set_pane_g2_ParamLimits

0xc401,	// (0x00020962) main_cam_set_pane_g2

0x0001,

0xf9a3,	// (0x00023f04) main_cam_set_pane_g_ParamLimits

0xf9a3,	// (0x00023f04) main_cam_set_pane_g

0xc40d,	// (0x0002096e) main_cam_set_pane_t1_ParamLimits

0xc40d,	// (0x0002096e) main_cam_set_pane_t1

0xc41f,	// (0x00020980) main_cset_listscroll_pane_ParamLimits

0xc41f,	// (0x00020980) main_cset_listscroll_pane

0xc448,	// (0x000209a9) main_cset_slider_pane_ParamLimits

0xc448,	// (0x000209a9) main_cset_slider_pane

0x4e97,	// (0x000193f8) main_cset_list_pane_ParamLimits

0x4e97,	// (0x000193f8) main_cset_list_pane

0x4ea7,	// (0x00019408) scroll_pane_cp028

0xc467,	// (0x000209c8) aid_area_touch_slider

0xc483,	// (0x000209e4) cset_slider_pane

0xc4ad,	// (0x00020a0e) main_cset_slider_pane_g1

0xc4c2,	// (0x00020a23) main_cset_slider_pane_g2

0x0011,

0xf9a8,	// (0x00023f09) main_cset_slider_pane_g

0x4ee0,	// (0x00019441) main_cset_slider_pane_t1

0xc57e,	// (0x00020adf) main_cset_slider_pane_t2

0xc598,	// (0x00020af9) main_cset_slider_pane_t3

0xc5b2,	// (0x00020b13) main_cset_slider_pane_t4

0xc5cc,	// (0x00020b2d) main_cset_slider_pane_t5

0xc5e6,	// (0x00020b47) main_cset_slider_pane_t6

0xc5fb,	// (0x00020b5c) main_cset_slider_pane_t7

0x000e,

0xf9cd,	// (0x00023f2e) main_cset_slider_pane_t

0xc6ff,	// (0x00020c60) cset_list_set_pane_ParamLimits

0xc6ff,	// (0x00020c60) cset_list_set_pane

0xc70f,	// (0x00020c70) aid_position_infowindow_above

0xc717,	// (0x00020c78) aid_position_infowindow_below

0xc71f,	// (0x00020c80) cset_list_set_pane_g1_ParamLimits

0xc71f,	// (0x00020c80) cset_list_set_pane_g1

0x4f80,	// (0x000194e1) cset_list_set_pane_g3_ParamLimits

0x4f80,	// (0x000194e1) cset_list_set_pane_g3

0x0001,

0xf9ec,	// (0x00023f4d) cset_list_set_pane_g_ParamLimits

0xf9ec,	// (0x00023f4d) cset_list_set_pane_g

0x4f8f,	// (0x000194f0) cset_list_set_pane_t1_ParamLimits

0x4f8f,	// (0x000194f0) cset_list_set_pane_t1

0x10c0,	// (0x00015621) list_highlight_pane_cp021_ParamLimits

0x10c0,	// (0x00015621) list_highlight_pane_cp021

0x27e6,	// (0x00016d47) cset_slider_pane_g1

0x27f8,	// (0x00016d59) cset_slider_pane_g2

0x27ef,	// (0x00016d50) cset_slider_pane_g3

0x0002,

0xf9f1,	// (0x00023f52) cset_slider_pane_g

0x852d,	// (0x0001ca8e) aid_area_touch_cam4_zoom

0x8535,	// (0x0001ca96) cam4_zoom_cont_pane

0x853d,	// (0x0001ca9e) cam4_zoom_pane_g1

0x8545,	// (0x0001caa6) cam4_zoom_pane_g2

0x854d,	// (0x0001caae) cam4_zoom_pane_g3

0x0002,

0xf9f8,	// (0x00023f59) cam4_zoom_pane_g

0x8555,	// (0x0001cab6) cam4_zoom_cont_pane_g1

0x855e,	// (0x0001cabf) cam4_zoom_cont_pane_g2

0x8567,	// (0x0001cac8) cam4_zoom_cont_pane_g3

0x0002,

0xf9ff,	// (0x00023f60) cam4_zoom_cont_pane_g

0xc0ca,	// (0x0002062b) call4_image_pane_ParamLimits

0xc0ca,	// (0x0002062b) call4_image_pane

0x4c0a,	// (0x0001916b) call4_windows_conf_pane_ParamLimits

0x4c1d,	// (0x0001917e) popup_call4_audio_in_window_ParamLimits

0x4c1d,	// (0x0001917e) popup_call4_audio_in_window

0x106d,	// (0x000155ce) bg_popup_call2_act_pane_cp02

0x4c7b,	// (0x000191dc) call4_list_conf_pane

0x407b,	// (0x000185dc) call4_image_pane_g1

0x407b,	// (0x000185dc) call4_image_pane_g2

0x0001,

0xf713,	// (0x00023c74) call4_image_pane_g

0x4fdf,	// (0x00019540) list_single_graphic_popup_conf4_pane_ParamLimits

0x4fdf,	// (0x00019540) list_single_graphic_popup_conf4_pane

0x106d,	// (0x000155ce) list_highlight_pane_cp022

0x4ff2,	// (0x00019553) list_single_graphic_popup_conf4_pane_g1

0x242b,	// (0x0001698c) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xfa06,	// (0x00023f67) list_single_graphic_popup_conf4_pane_g

0x4ffa,	// (0x0001955b) list_single_graphic_popup_conf4_pane_t1

0x946d,	// (0x0001d9ce) popup_vtel_slider_window_ParamLimits

0x946d,	// (0x0001d9ce) popup_vtel_slider_window

0x4ba2,	// (0x00019103) dialer2_ne_pane_t2_ParamLimits

0x4ba2,	// (0x00019103) dialer2_ne_pane_t2

0x0001,

0xf8e7,	// (0x00023e48) dialer2_ne_pane_t_ParamLimits

0xf8e7,	// (0x00023e48) dialer2_ne_pane_t

0x10c0,	// (0x00015621) bg_popup_sub_pane_cp010_ParamLimits

0x10c0,	// (0x00015621) bg_popup_sub_pane_cp010

0xc72b,	// (0x00020c8c) popup_vtel_slider_window_g1_ParamLimits

0xc72b,	// (0x00020c8c) popup_vtel_slider_window_g1

0xc737,	// (0x00020c98) popup_vtel_slider_window_g2_ParamLimits

0xc737,	// (0x00020c98) popup_vtel_slider_window_g2

0x0003,

0xfa0b,	// (0x00023f6c) popup_vtel_slider_window_g_ParamLimits

0xfa0b,	// (0x00023f6c) popup_vtel_slider_window_g

0xc77d,	// (0x00020cde) vtel_slider_pane_ParamLimits

0xc77d,	// (0x00020cde) vtel_slider_pane

0xc78c,	// (0x00020ced) vtel_slider_pane_g1_ParamLimits

0xc78c,	// (0x00020ced) vtel_slider_pane_g1

0xc799,	// (0x00020cfa) vtel_slider_pane_g2_ParamLimits

0xc799,	// (0x00020cfa) vtel_slider_pane_g2

0xc7a6,	// (0x00020d07) vtel_slider_pane_g3_ParamLimits

0xc7a6,	// (0x00020d07) vtel_slider_pane_g3

0xc78c,	// (0x00020ced) vtel_slider_pane_g4_ParamLimits

0xc78c,	// (0x00020ced) vtel_slider_pane_g4

0xc7b3,	// (0x00020d14) vtel_slider_pane_g5_ParamLimits

0xc7b3,	// (0x00020d14) vtel_slider_pane_g5

0x0004,

0xfa14,	// (0x00023f75) vtel_slider_pane_g_ParamLimits

0xfa14,	// (0x00023f75) vtel_slider_pane_g

0x106d,	// (0x000155ce) main_gallery2_pane

0x82c8,	// (0x0001c829) aid_size_row_itut2_dropdow_list_ParamLimits

0x82c8,	// (0x0001c829) aid_size_row_itut2_dropdow_list

0x831c,	// (0x0001c87d) grid_vitu2_function_top_pane_ParamLimits

0x831c,	// (0x0001c87d) grid_vitu2_function_top_pane

0x8356,	// (0x0001c8b7) popup_vitu2_dropdown_list_window_ParamLimits

0x8356,	// (0x0001c8b7) popup_vitu2_dropdown_list_window

0x8370,	// (0x0001c8d1) popup_vitu2_match_list_window

0x8570,	// (0x0001cad1) cell_vitu2_function_top_pane_ParamLimits

0x8570,	// (0x0001cad1) cell_vitu2_function_top_pane

0x8590,	// (0x0001caf1) cell_vitu2_function_top_pane_cp01_ParamLimits

0x8590,	// (0x0001caf1) cell_vitu2_function_top_pane_cp01

0x85b0,	// (0x0001cb11) cell_vitu2_function_top_wide_pane_ParamLimits

0x85b0,	// (0x0001cb11) cell_vitu2_function_top_wide_pane

0x821b,	// (0x0001c77c) bg_button_pane_cp012

0x85ce,	// (0x0001cb2f) cell_vitu2_function_top_pane_g1

0x85dd,	// (0x0001cb3e) bg_button_pane_cp013_ParamLimits

0x85dd,	// (0x0001cb3e) bg_button_pane_cp013

0xc7c0,	// (0x00020d21) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xc7c0,	// (0x00020d21) cell_vitu2_function_top_wide_pane_g1

0x85f9,	// (0x0001cb5a) bg_popup_sub_pane_cp20

0x8607,	// (0x0001cb68) list_vitu2_match_list_pane

0x4da1,	// (0x00019302) bg_popup_sub_pane_cp20_g1

0x4da9,	// (0x0001930a) bg_popup_sub_pane_cp20_g2

0x1df1,	// (0x00016352) bg_popup_sub_pane_cp20_g3

0x4db1,	// (0x00019312) bg_popup_sub_pane_cp20_g4

0x1dd1,	// (0x00016332) bg_popup_sub_pane_cp20_g5

0x503a,	// (0x0001959b) bg_popup_sub_pane_cp20_g6

0x4dc1,	// (0x00019322) bg_popup_sub_pane_cp20_g7

0x4dc9,	// (0x0001932a) bg_popup_sub_pane_cp20_g8

0x4dd1,	// (0x00019332) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa1f,	// (0x00023f80) bg_popup_sub_pane_cp20_g

0x861f,	// (0x0001cb80) list_vitu2_match_list_item_pane_ParamLimits

0x861f,	// (0x0001cb80) list_vitu2_match_list_item_pane

0x8631,	// (0x0001cb92) list_vitu2_match_list_item_pane_t1

0x7496,	// (0x0001b9f7) bg_popup_sub_pane_cp21

0x863f,	// (0x0001cba0) grid_vitu2_dropdown_list_pane

0x8647,	// (0x0001cba8) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x8647,	// (0x0001cba8) cell_vitu2_dropdown_list_char_pane

0x8668,	// (0x0001cbc9) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x8668,	// (0x0001cbc9) cell_vitu2_dropdown_list_ctrl_pane

0x5074,	// (0x000195d5) cell_vitu2_dropdown_list_char_pane_g1

0x506b,	// (0x000195cc) cell_vitu2_dropdown_list_char_pane_g2

0x5062,	// (0x000195c3) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa3c,	// (0x00023f9d) cell_vitu2_dropdown_list_char_pane_g

0x8694,	// (0x0001cbf5) cell_vitu2_dropdown_list_char_pane_t1

0xc804,	// (0x00020d65) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xc804,	// (0x00020d65) cell_vitu2_dropdown_list_ctrl_pane_g1

0xc814,	// (0x00020d75) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xc814,	// (0x00020d75) cell_vitu2_dropdown_list_ctrl_pane_g2

0xc825,	// (0x00020d86) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xc825,	// (0x00020d86) cell_vitu2_dropdown_list_ctrl_pane_g3

0x86a2,	// (0x0001cc03) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x86a2,	// (0x0001cc03) cell_vitu2_dropdown_list_ctrl_pane_g4

0x8161,	// (0x0001c6c2) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x8161,	// (0x0001c6c2) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa43,	// (0x00023fa4) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa43,	// (0x00023fa4) cell_vitu2_dropdown_list_ctrl_pane_g

0xc835,	// (0x00020d96) aid_size_cell_gallery2_ParamLimits

0xc835,	// (0x00020d96) aid_size_cell_gallery2

0xc843,	// (0x00020da4) grid_gallery2_pane_ParamLimits

0xc843,	// (0x00020da4) grid_gallery2_pane

0xc850,	// (0x00020db1) scroll_pane_cp029_ParamLimits

0xc850,	// (0x00020db1) scroll_pane_cp029

0xc85c,	// (0x00020dbd) cell_gallery2_pane_ParamLimits

0xc85c,	// (0x00020dbd) cell_gallery2_pane

0x507d,	// (0x000195de) cell_gallery2_pane_g2

0xc888,	// (0x00020de9) cell_gallery2_pane_g3

0x5087,	// (0x000195e8) cell_gallery2_pane_g4

0x508f,	// (0x000195f0) cell_gallery2_pane_g5

0x2690,	// (0x00016bf1) grid_highlight_pane_cp10

0x8370,	// (0x0001c8d1) popup_vitu2_match_list_window_ParamLimits

0x8380,	// (0x0001c8e1) popup_vitu2_query_window_ParamLimits

0x8380,	// (0x0001c8e1) popup_vitu2_query_window

0x7496,	// (0x0001b9f7) bg_vitu2_candi_button_pane

0x5074,	// (0x000195d5) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x506b,	// (0x000195cc) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x5062,	// (0x000195c3) cell_vitu2_dropdown_list_char_pane_g2_copy2

0xc890,	// (0x00020df1) bg_button_pane_cp015

0xc8a0,	// (0x00020e01) bg_button_pane_cp016

0xc8b3,	// (0x00020e14) bg_button_pane_cp017

0x3b86,	// (0x000180e7) bg_popup_sub_pane_cp22

0x5097,	// (0x000195f8) popup_vitu2_query_window_g1

0xc8f6,	// (0x00020e57) popup_vitu2_query_window_g2

0x0002,

0xfa4e,	// (0x00023faf) popup_vitu2_query_window_g

0xc911,	// (0x00020e72) popup_vitu2_query_window_t1_ParamLimits

0xc911,	// (0x00020e72) popup_vitu2_query_window_t1

0xc944,	// (0x00020ea5) popup_vitu2_query_window_t2_ParamLimits

0xc944,	// (0x00020ea5) popup_vitu2_query_window_t2

0xc956,	// (0x00020eb7) popup_vitu2_query_window_t3_ParamLimits

0xc956,	// (0x00020eb7) popup_vitu2_query_window_t3

0xc97e,	// (0x00020edf) popup_vitu2_query_window_t4_ParamLimits

0xc97e,	// (0x00020edf) popup_vitu2_query_window_t4

0xc99b,	// (0x00020efc) popup_vitu2_query_window_t5_ParamLimits

0xc99b,	// (0x00020efc) popup_vitu2_query_window_t5

0x0006,

0xfa55,	// (0x00023fb6) popup_vitu2_query_window_t_ParamLimits

0xfa55,	// (0x00023fb6) popup_vitu2_query_window_t

0x4e8f,	// (0x000193f0) main_cset_text_pane

0xc467,	// (0x000209c8) aid_area_touch_slider_ParamLimits

0xc483,	// (0x000209e4) cset_slider_pane_ParamLimits

0xc4ad,	// (0x00020a0e) main_cset_slider_pane_g1_ParamLimits

0xc4c2,	// (0x00020a23) main_cset_slider_pane_g2_ParamLimits

0x4eb0,	// (0x00019411) main_cset_slider_pane_g3_ParamLimits

0x4eb0,	// (0x00019411) main_cset_slider_pane_g3

0xc4d7,	// (0x00020a38) main_cset_slider_pane_g4_ParamLimits

0xc4d7,	// (0x00020a38) main_cset_slider_pane_g4

0xc4e6,	// (0x00020a47) main_cset_slider_pane_g5_ParamLimits

0xc4e6,	// (0x00020a47) main_cset_slider_pane_g5

0xc4f2,	// (0x00020a53) main_cset_slider_pane_g6_ParamLimits

0xc4f2,	// (0x00020a53) main_cset_slider_pane_g6

0xf9a8,	// (0x00023f09) main_cset_slider_pane_g_ParamLimits

0x4ee0,	// (0x00019441) main_cset_slider_pane_t1_ParamLimits

0xc57e,	// (0x00020adf) main_cset_slider_pane_t2_ParamLimits

0xc598,	// (0x00020af9) main_cset_slider_pane_t3_ParamLimits

0xc5b2,	// (0x00020b13) main_cset_slider_pane_t4_ParamLimits

0xc5cc,	// (0x00020b2d) main_cset_slider_pane_t5_ParamLimits

0xc5e6,	// (0x00020b47) main_cset_slider_pane_t6_ParamLimits

0xc5fb,	// (0x00020b5c) main_cset_slider_pane_t7_ParamLimits

0xc625,	// (0x00020b86) main_cset_slider_pane_t8_ParamLimits

0xc625,	// (0x00020b86) main_cset_slider_pane_t8

0xc64d,	// (0x00020bae) main_cset_slider_pane_t9_ParamLimits

0xc64d,	// (0x00020bae) main_cset_slider_pane_t9

0xc675,	// (0x00020bd6) main_cset_slider_pane_t10_ParamLimits

0xc675,	// (0x00020bd6) main_cset_slider_pane_t10

0xc69d,	// (0x00020bfe) main_cset_slider_pane_t11_ParamLimits

0xc69d,	// (0x00020bfe) main_cset_slider_pane_t11

0xc6c5,	// (0x00020c26) main_cset_slider_pane_t12_ParamLimits

0xc6c5,	// (0x00020c26) main_cset_slider_pane_t12

0xc6e2,	// (0x00020c43) main_cset_slider_pane_t13_ParamLimits

0xc6e2,	// (0x00020c43) main_cset_slider_pane_t13

0xf9cd,	// (0x00023f2e) main_cset_slider_pane_t_ParamLimits

0x106d,	// (0x000155ce) bg_popup_sub_pane_cp011

0x50a3,	// (0x00019604) main_cset_text_pane_g1

0x50ab,	// (0x0001960c) main_cset_text_pane_t1

0x50b9,	// (0x0001961a) main_cset_text_pane_t2

0x50c7,	// (0x00019628) main_cset_text_pane_t3

0x50d5,	// (0x00019636) main_cset_text_pane_t4

0x50e3,	// (0x00019644) main_cset_text_pane_t5

0x50f1,	// (0x00019652) main_cset_text_pane_t6

0x50ff,	// (0x00019660) main_cset_text_pane_t7

0x0006,

0xfa64,	// (0x00023fc5) main_cset_text_pane_t

0x106d,	// (0x000155ce) main_cam4_burst_pane

0x106d,	// (0x000155ce) main_cam5_pane

0xc3c2,	// (0x00020923) bg_button_pane_cp019

0xc3cb,	// (0x0002092c) bg_button_pane_cp020

0x4ebc,	// (0x0001941d) main_cset_slider_pane_g7_ParamLimits

0x4ebc,	// (0x0001941d) main_cset_slider_pane_g7

0x4ec8,	// (0x00019429) main_cset_slider_pane_g8_ParamLimits

0x4ec8,	// (0x00019429) main_cset_slider_pane_g8

0xc506,	// (0x00020a67) main_cset_slider_pane_g9_ParamLimits

0xc506,	// (0x00020a67) main_cset_slider_pane_g9

0xc512,	// (0x00020a73) main_cset_slider_pane_g10_ParamLimits

0xc512,	// (0x00020a73) main_cset_slider_pane_g10

0xc51e,	// (0x00020a7f) main_cset_slider_pane_g11_ParamLimits

0xc51e,	// (0x00020a7f) main_cset_slider_pane_g11

0xc52a,	// (0x00020a8b) main_cset_slider_pane_g12_ParamLimits

0xc52a,	// (0x00020a8b) main_cset_slider_pane_g12

0xc536,	// (0x00020a97) main_cset_slider_pane_g13_ParamLimits

0xc536,	// (0x00020a97) main_cset_slider_pane_g13

0xc542,	// (0x00020aa3) main_cset_slider_pane_g14_ParamLimits

0xc542,	// (0x00020aa3) main_cset_slider_pane_g14

0xc54e,	// (0x00020aaf) main_cset_slider_pane_g15_ParamLimits

0xc54e,	// (0x00020aaf) main_cset_slider_pane_g15

0x4f0e,	// (0x0001946f) main_cset_slider_pane_t14_ParamLimits

0x4f0e,	// (0x0001946f) main_cset_slider_pane_t14

0x4f47,	// (0x000194a8) main_cset_slider_pane_t15_ParamLimits

0x4f47,	// (0x000194a8) main_cset_slider_pane_t15

0xca0e,	// (0x00020f6f) aid_cam4_burst_size_cell_ParamLimits

0xca0e,	// (0x00020f6f) aid_cam4_burst_size_cell

0xca2a,	// (0x00020f8b) grid_cam4_burst_pane_ParamLimits

0xca2a,	// (0x00020f8b) grid_cam4_burst_pane

0xca4c,	// (0x00020fad) linegrid_cam4_burst_pane_ParamLimits

0xca4c,	// (0x00020fad) linegrid_cam4_burst_pane

0xca6a,	// (0x00020fcb) scroll_pane_cp30_ParamLimits

0xca6a,	// (0x00020fcb) scroll_pane_cp30

0xca76,	// (0x00020fd7) cell_cam4_burst_pane_ParamLimits

0xca76,	// (0x00020fd7) cell_cam4_burst_pane

0x510d,	// (0x0001966e) linegrid_cam4_burst_pane_g1_ParamLimits

0x510d,	// (0x0001966e) linegrid_cam4_burst_pane_g1

0xcaae,	// (0x0002100f) linegrid_cam4_burst_pane_g2_ParamLimits

0xcaae,	// (0x0002100f) linegrid_cam4_burst_pane_g2

0x511a,	// (0x0001967b) linegrid_cam4_burst_pane_g3_ParamLimits

0x511a,	// (0x0001967b) linegrid_cam4_burst_pane_g3

0x0002,

0xfa73,	// (0x00023fd4) linegrid_cam4_burst_pane_g_ParamLimits

0xfa73,	// (0x00023fd4) linegrid_cam4_burst_pane_g

0xcabf,	// (0x00021020) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xcabf,	// (0x00021020) linegrid_cam4_burst_pane_g3_copy1

0x5127,	// (0x00019688) linegrid_cam4_burst_pane_g4_ParamLimits

0x5127,	// (0x00019688) linegrid_cam4_burst_pane_g4

0xcad9,	// (0x0002103a) linegrid_cam4_burst_pane_g5_ParamLimits

0xcad9,	// (0x0002103a) linegrid_cam4_burst_pane_g5

0xcaea,	// (0x0002104b) linegrid_cam4_burst_pane_g6_ParamLimits

0xcaea,	// (0x0002104b) linegrid_cam4_burst_pane_g6

0x5134,	// (0x00019695) linegrid_cam4_burst_pane_g7_ParamLimits

0x5134,	// (0x00019695) linegrid_cam4_burst_pane_g7

0xcafb,	// (0x0002105c) cell_cam4_burst_pane_g1

0x514d,	// (0x000196ae) main_cam5_pane_t1_ParamLimits

0x514d,	// (0x000196ae) main_cam5_pane_t1

0x515f,	// (0x000196c0) main_cam5_pane_t2_ParamLimits

0x515f,	// (0x000196c0) main_cam5_pane_t2

0x5171,	// (0x000196d2) main_cam5_pane_t3_ParamLimits

0x5171,	// (0x000196d2) main_cam5_pane_t3

0x5183,	// (0x000196e4) main_cam5_pane_t4_ParamLimits

0x5183,	// (0x000196e4) main_cam5_pane_t4

0x5199,	// (0x000196fa) main_cam5_pane_t5_ParamLimits

0x5199,	// (0x000196fa) main_cam5_pane_t5

0x51ab,	// (0x0001970c) main_cam5_pane_t6_ParamLimits

0x51ab,	// (0x0001970c) main_cam5_pane_t6

0x51bd,	// (0x0001971e) main_cam5_pane_t7_ParamLimits

0x51bd,	// (0x0001971e) main_cam5_pane_t7

0x51cf,	// (0x00019730) main_cam5_pane_t8_ParamLimits

0x51cf,	// (0x00019730) main_cam5_pane_t8

0x51eb,	// (0x0001974c) main_cam5_pane_t9_ParamLimits

0x51eb,	// (0x0001974c) main_cam5_pane_t9

0x51fd,	// (0x0001975e) main_cam5_pane_t10_ParamLimits

0x51fd,	// (0x0001975e) main_cam5_pane_t10

0x520f,	// (0x00019770) main_cam5_pane_t11_ParamLimits

0x520f,	// (0x00019770) main_cam5_pane_t11

0x5221,	// (0x00019782) main_cam5_pane_t12_ParamLimits

0x5221,	// (0x00019782) main_cam5_pane_t12

0x5236,	// (0x00019797) main_cam5_pane_t13_ParamLimits

0x5236,	// (0x00019797) main_cam5_pane_t13

0x000c,

0xfa7f,	// (0x00023fe0) main_cam5_pane_t_ParamLimits

0xfa7f,	// (0x00023fe0) main_cam5_pane_t

0x89bd,	// (0x0001cf1e) popup_scut_keymap_window_ParamLimits

0x89bd,	// (0x0001cf1e) popup_scut_keymap_window

0xcb0e,	// (0x0002106f) aid_size_cell_brow_shortcut

0x2690,	// (0x00016bf1) bg_popup_window_pane_cp010

0xcb1a,	// (0x0002107b) grid_scut_pane

0xcb24,	// (0x00021085) cell_scut_pane_ParamLimits

0xcb24,	// (0x00021085) cell_scut_pane

0xcb39,	// (0x0002109a) cell_scut_pane_g1

0x5253,	// (0x000197b4) cell_scut_pane_t1

0x5262,	// (0x000197c3) cell_scut_pane_t2

0xcb42,	// (0x000210a3) cell_scut_pane_t3

0x0002,

0xfa9a,	// (0x00023ffb) cell_scut_pane_t

0xb601,	// (0x0001fb62) main_mup3_pane_g8_ParamLimits

0xb601,	// (0x0001fb62) main_mup3_pane_g8

0x82d4,	// (0x0001c835) area_vitu2_query_pane_ParamLimits

0x82d4,	// (0x0001c835) area_vitu2_query_pane

0xc8c6,	// (0x00020e27) input_focus_pane_cp08

0x5271,	// (0x000197d2) area_vitu2_query_pane_g1

0xcb50,	// (0x000210b1) area_vitu2_query_pane_g2

0x0001,

0xfaa1,	// (0x00024002) area_vitu2_query_pane_g

0xcb5f,	// (0x000210c0) area_vitu2_query_pane_t1_ParamLimits

0xcb5f,	// (0x000210c0) area_vitu2_query_pane_t1

0xcb71,	// (0x000210d2) area_vitu2_query_pane_t2_ParamLimits

0xcb71,	// (0x000210d2) area_vitu2_query_pane_t2

0xcb83,	// (0x000210e4) area_vitu2_query_pane_t3_ParamLimits

0xcb83,	// (0x000210e4) area_vitu2_query_pane_t3

0x527d,	// (0x000197de) area_vitu2_query_pane_t4_ParamLimits

0x527d,	// (0x000197de) area_vitu2_query_pane_t4

0x52a5,	// (0x00019806) area_vitu2_query_pane_t5_ParamLimits

0x52a5,	// (0x00019806) area_vitu2_query_pane_t5

0x52cd,	// (0x0001982e) area_vitu2_query_pane_t6_ParamLimits

0x52cd,	// (0x0001982e) area_vitu2_query_pane_t6

0x0006,

0xfaa6,	// (0x00024007) area_vitu2_query_pane_t_ParamLimits

0xfaa6,	// (0x00024007) area_vitu2_query_pane_t

0xcbab,	// (0x0002110c) bg_button_pane_cp018

0xcbb8,	// (0x00021119) bg_button_pane_cp021

0xcbc4,	// (0x00021125) bg_button_pane_cp022

0xcbd3,	// (0x00021134) input_focus_pane_cp09

0xa1e1,	// (0x0001e742) aid_size_touch_mv_arrow_left

0x2569,	// (0x00016aca) aid_size_touch_mv_arrow_right

0xc566,	// (0x00020ac7) main_cset_slider_pane_g16_ParamLimits

0xc566,	// (0x00020ac7) main_cset_slider_pane_g16

0xc572,	// (0x00020ad3) main_cset_slider_pane_g17_ParamLimits

0xc572,	// (0x00020ad3) main_cset_slider_pane_g17

0xcafb,	// (0x0002105c) cell_cam4_burst_pane_g1_ParamLimits

0x106d,	// (0x000155ce) compa_mode_pane

0xc743,	// (0x00020ca4) popup_vtel_slider_window_g3_ParamLimits

0xc743,	// (0x00020ca4) popup_vtel_slider_window_g3

0xc757,	// (0x00020cb8) popup_vtel_slider_window_g4_ParamLimits

0xc757,	// (0x00020cb8) popup_vtel_slider_window_g4

0xc76b,	// (0x00020ccc) popup_vtel_slider_window_t1_ParamLimits

0xc76b,	// (0x00020ccc) popup_vtel_slider_window_t1

0x106d,	// (0x000155ce) main_cl_pane

0x3bac,	// (0x0001810d) popup_imed_adjust2_window_ParamLimits

0x3b86,	// (0x000180e7) bg_tb_trans_pane_cp05_ParamLimits

0x4588,	// (0x00018ae9) popup_imed_adjust2_window_g1_ParamLimits

0x4597,	// (0x00018af8) popup_imed_adjust2_window_g2_ParamLimits

0x4597,	// (0x00018af8) popup_imed_adjust2_window_g2

0x45a3,	// (0x00018b04) popup_imed_adjust2_window_g3_ParamLimits

0x45a3,	// (0x00018b04) popup_imed_adjust2_window_g3

0x0002,

0xf811,	// (0x00023d72) popup_imed_adjust2_window_g_ParamLimits

0xf811,	// (0x00023d72) popup_imed_adjust2_window_g

0x45af,	// (0x00018b10) popup_imed_adjust2_window_t1_ParamLimits

0x45c7,	// (0x00018b28) slider_imed_adjust_pane_ParamLimits

0x45db,	// (0x00018b3c) slider_imed_adjust_pane_g1_ParamLimits

0x45eb,	// (0x00018b4c) slider_imed_adjust_pane_g2_ParamLimits

0x45fb,	// (0x00018b5c) slider_imed_adjust_pane_g3_ParamLimits

0x460c,	// (0x00018b6d) slider_imed_adjust_pane_g4_ParamLimits

0xf818,	// (0x00023d79) slider_imed_adjust_pane_g_ParamLimits

0x80a4,	// (0x0001c605) aid_touch_area_cam4_ParamLimits

0x80a4,	// (0x0001c605) aid_touch_area_cam4

0x80b2,	// (0x0001c613) battery_pane_cp01

0x8131,	// (0x0001c692) main_camera4_pane_g6_ParamLimits

0x8131,	// (0x0001c692) main_camera4_pane_g6

0x814f,	// (0x0001c6b0) main_camera4_pane_t2_ParamLimits

0x814f,	// (0x0001c6b0) main_camera4_pane_t2

0x0001,

0xf91b,	// (0x00023e7c) main_camera4_pane_t_ParamLimits

0xf91b,	// (0x00023e7c) main_camera4_pane_t

0x81c1,	// (0x0001c722) aid_touch_area_vid4_ParamLimits

0x81c1,	// (0x0001c722) aid_touch_area_vid4

0x8131,	// (0x0001c692) main_video4_pane_g5_ParamLimits

0x8131,	// (0x0001c692) main_video4_pane_g5

0x81f1,	// (0x0001c752) vid4_progress_pane_ParamLimits

0x81f1,	// (0x0001c752) vid4_progress_pane

0x4ed4,	// (0x00019435) main_cset_slider_pane_g18_ParamLimits

0x4ed4,	// (0x00019435) main_cset_slider_pane_g18

0x5141,	// (0x000196a2) cell_cam4_burst_pane_g2_ParamLimits

0x5141,	// (0x000196a2) cell_cam4_burst_pane_g2

0x0001,

0xfa7a,	// (0x00023fdb) cell_cam4_burst_pane_g_ParamLimits

0xfa7a,	// (0x00023fdb) cell_cam4_burst_pane_g

0xcbe2,	// (0x00021143) bg_cl_pane_ParamLimits

0xcbe2,	// (0x00021143) bg_cl_pane

0xcbee,	// (0x0002114f) cl_header_pane_ParamLimits

0xcbee,	// (0x0002114f) cl_header_pane

0xcbfa,	// (0x0002115b) cl_listscroll_pane_ParamLimits

0xcbfa,	// (0x0002115b) cl_listscroll_pane

0x5319,	// (0x0001987a) bg_cl_pane_g1

0x5321,	// (0x00019882) bg_cl_pane_g2

0x5329,	// (0x0001988a) bg_cl_pane_g3

0x5331,	// (0x00019892) bg_cl_pane_g4

0x5339,	// (0x0001989a) bg_cl_pane_g5

0x5341,	// (0x000198a2) bg_cl_pane_g6

0x5349,	// (0x000198aa) bg_cl_pane_g7

0x5351,	// (0x000198b2) bg_cl_pane_g8

0x5359,	// (0x000198ba) bg_cl_pane_g9

0x0008,

0xfab5,	// (0x00024016) bg_cl_pane_g

0xcc06,	// (0x00021167) aid_height_cl_leading_ParamLimits

0xcc06,	// (0x00021167) aid_height_cl_leading

0xcc12,	// (0x00021173) aid_height_cl_text_ParamLimits

0xcc12,	// (0x00021173) aid_height_cl_text

0x4383,	// (0x000188e4) bg_cl_header_pane_ParamLimits

0x4383,	// (0x000188e4) bg_cl_header_pane

0xcc2a,	// (0x0002118b) cl_header_pane_g1_ParamLimits

0xcc2a,	// (0x0002118b) cl_header_pane_g1

0xcc37,	// (0x00021198) cl_header_pane_t1_ParamLimits

0xcc37,	// (0x00021198) cl_header_pane_t1

0x5361,	// (0x000198c2) cl_list_pane

0x536a,	// (0x000198cb) hc_scroll_pane_cp01

0x1dd1,	// (0x00016332) bg_cl_header_pane_g1

0x4da1,	// (0x00019302) bg_cl_header_pane_g2

0x1df1,	// (0x00016352) bg_cl_header_pane_g3

0x4db1,	// (0x00019312) bg_cl_header_pane_g4

0x4da9,	// (0x0001930a) bg_cl_header_pane_g5

0x503a,	// (0x0001959b) bg_cl_header_pane_g6

0x4dc9,	// (0x0001932a) bg_cl_header_pane_g7

0x4dd1,	// (0x00019332) bg_cl_header_pane_g8

0x4dc1,	// (0x00019322) bg_cl_header_pane_g9

0x0008,

0xfac8,	// (0x00024029) bg_cl_header_pane_g

0xcc49,	// (0x000211aa) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xcc49,	// (0x000211aa) hc_cl_list_double_graphic_heading_pane

0xcc59,	// (0x000211ba) hc_cl_list_single_graphic_pane_ParamLimits

0xcc59,	// (0x000211ba) hc_cl_list_single_graphic_pane

0xcc6b,	// (0x000211cc) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xcc6b,	// (0x000211cc) hc_cl_list_single_graphic_pane_g1

0xcc77,	// (0x000211d8) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xcc77,	// (0x000211d8) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfadb,	// (0x0002403c) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfadb,	// (0x0002403c) hc_cl_list_single_graphic_pane_g

0xcc8b,	// (0x000211ec) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xcc8b,	// (0x000211ec) hc_cl_list_single_graphic_pane_t1

0xcc6b,	// (0x000211cc) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xcc6b,	// (0x000211cc) hc_cl_list_double_graphic_heading_pane_g1

0xcca0,	// (0x00021201) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xcca0,	// (0x00021201) hc_cl_list_double_graphic_heading_pane_g2

0xccb4,	// (0x00021215) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xccb4,	// (0x00021215) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfae0,	// (0x00024041) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfae0,	// (0x00024041) hc_cl_list_double_graphic_heading_pane_g

0xccc8,	// (0x00021229) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xccc8,	// (0x00021229) hc_cl_list_double_graphic_heading_pane_t1

0xccdd,	// (0x0002123e) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xccdd,	// (0x0002123e) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfae7,	// (0x00024048) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfae7,	// (0x00024048) hc_cl_list_double_graphic_heading_pane_t

0x86bb,	// (0x0001cc1c) vid4_progress_pane_g1

0x86ca,	// (0x0001cc2b) vid4_progress_pane_g2

0x86d9,	// (0x0001cc3a) vid4_progress_pane_g3

0x86e8,	// (0x0001cc49) vid4_progress_pane_g4

0x0004,

0xfaec,	// (0x0002404d) vid4_progress_pane_g

0x8700,	// (0x0001cc61) vid4_progress_pane_t1

0x8716,	// (0x0001cc77) vid4_progress_pane_t2

0x0002,

0xfaf7,	// (0x00024058) vid4_progress_pane_t

0x8740,	// (0x0001cca1) wait_bar_pane_cp07

0x3e76,	// (0x000183d7) blid_firmament_pane_ParamLimits

0x3eb7,	// (0x00018418) popup_blid_sat_info2_window_g1

0x3edb,	// (0x0001843c) popup_blid_sat_info2_window_t3

0x3ee9,	// (0x0001844a) popup_blid_sat_info2_window_t4

0x3ef7,	// (0x00018458) popup_blid_sat_info2_window_t5

0x3f05,	// (0x00018466) popup_blid_sat_info2_window_t6

0x3f15,	// (0x00018476) popup_blid_sat_info2_window_t7

0x3f23,	// (0x00018484) popup_blid_sat_info2_window_t8

0x3f31,	// (0x00018492) popup_blid_sat_info2_window_t9

0x3f3f,	// (0x000184a0) popup_blid_sat_info2_window_t10

0x3ffb,	// (0x0001855c) aid_firma_cardinal_ParamLimits

0x400f,	// (0x00018570) blid_firmament_pane_t1_ParamLimits

0x4026,	// (0x00018587) blid_firmament_pane_t2_ParamLimits

0x403d,	// (0x0001859e) blid_firmament_pane_t3_ParamLimits

0x4054,	// (0x000185b5) blid_firmament_pane_t4_ParamLimits

0xf70a,	// (0x00023c6b) blid_firmament_pane_t_ParamLimits

0x406b,	// (0x000185cc) blid_sat_info_pane_ParamLimits

0x10c0,	// (0x00015621) main_cam_set_pane_ParamLimits

0xbcf0,	// (0x00020251) aid_size_cell_colour_35_ParamLimits

0xbd07,	// (0x00020268) aid_size_cell_colour_112_ParamLimits

0xbd1e,	// (0x0002027f) aid_size_cell_effect_ParamLimits

0x10c0,	// (0x00015621) bg_tb_trans_pane_cp02_ParamLimits

0x43bb,	// (0x0001891c) heading_imed_pane_ParamLimits

0xbd38,	// (0x00020299) listscroll_imed_pane_ParamLimits

0x3178,	// (0x000176d9) popup_call2_audio_first_window_g5_ParamLimits

0x3178,	// (0x000176d9) popup_call2_audio_first_window_g5

0x7f45,	// (0x0001c4a6) aid_size_touch_image3_arrow_left_ParamLimits

0x7f45,	// (0x0001c4a6) aid_size_touch_image3_arrow_left

0x7f59,	// (0x0001c4ba) aid_size_touch_image3_arrow_right_ParamLimits

0x7f59,	// (0x0001c4ba) aid_size_touch_image3_arrow_right

0x872b,	// (0x0001cc8c) vid4_progress_pane_t3

0xbf9c,	// (0x000204fd) main_hwr_training_symbol_option_pane_ParamLimits

0xbf9c,	// (0x000204fd) main_hwr_training_symbol_option_pane

0x4867,	// (0x00018dc8) popup_hwr_training_preview_window_ParamLimits

0x4867,	// (0x00018dc8) popup_hwr_training_preview_window

0x7c5d,	// (0x0001c1be) hwr_training_navi_pane_g5_ParamLimits

0x7c5d,	// (0x0001c1be) hwr_training_navi_pane_g5

0x4d8f,	// (0x000192f0) popup_char_count_window

0x85f9,	// (0x0001cb5a) bg_popup_sub_pane_cp20_ParamLimits

0x8607,	// (0x0001cb68) list_vitu2_match_list_pane_ParamLimits

0x8613,	// (0x0001cb74) vitu2_page_scroll_pane_ParamLimits

0x8613,	// (0x0001cb74) vitu2_page_scroll_pane

0x5456,	// (0x000199b7) list_single_hwr_training_symbol_option_pane_ParamLimits

0x5456,	// (0x000199b7) list_single_hwr_training_symbol_option_pane

0x5469,	// (0x000199ca) list_single_hwr_training_symbol_option_pane_g1

0x5471,	// (0x000199d2) list_single_hwr_training_symbol_option_pane_t1

0x547f,	// (0x000199e0) bg_button_pane_cp023

0x5488,	// (0x000199e9) bg_button_pane_cp024

0xccf2,	// (0x00021253) vitu2_page_scroll_pane_g1

0xccfa,	// (0x0002125b) vitu2_page_scroll_pane_g2

0x0001,

0xfafe,	// (0x0002405f) vitu2_page_scroll_pane_g

0xcd02,	// (0x00021263) vitu2_page_scroll_pane_t1

0x3d92,	// (0x000182f3) popup_char_count_window_g1

0x54bb,	// (0x00019a1c) popup_char_count_window_g2

0x54c4,	// (0x00019a25) popup_char_count_window_g3

0x0002,

0xfb03,	// (0x00024064) popup_char_count_window_g

0x54cd,	// (0x00019a2e) popup_char_count_window_t1

0x106d,	// (0x000155ce) main_vded2_pane

0x4576,	// (0x00018ad7) aid_size_cell_imed_line

0x4580,	// (0x00018ae1) grid_imed_line_width_pane

0x824a,	// (0x0001c7ab) vid4_indicators_pane_g4

0x54db,	// (0x00019a3c) cell_imed_line_width_pane_ParamLimits

0x54db,	// (0x00019a3c) cell_imed_line_width_pane

0x54ed,	// (0x00019a4e) cell_imed_line_width_pane_g1

0x54f6,	// (0x00019a57) cell_imed_line_width_pane_g2

0x0001,

0xfb0a,	// (0x0002406b) cell_imed_line_width_pane_g

0xcd11,	// (0x00021272) main_vded2_pane_g1_ParamLimits

0xcd11,	// (0x00021272) main_vded2_pane_g1

0xcd1e,	// (0x0002127f) main_vded2_pane_g2_ParamLimits

0xcd1e,	// (0x0002127f) main_vded2_pane_g2

0x0001,

0xfb0f,	// (0x00024070) main_vded2_pane_g_ParamLimits

0xfb0f,	// (0x00024070) main_vded2_pane_g

0xcd2a,	// (0x0002128b) vded2_slider_pane_ParamLimits

0xcd2a,	// (0x0002128b) vded2_slider_pane

0xcd37,	// (0x00021298) aid_size_touch_vded2_end

0xcd3f,	// (0x000212a0) aid_size_touch_vded2_playhead

0xcd47,	// (0x000212a8) aid_size_touch_vded2_start

0xcd4f,	// (0x000212b0) vded2_slider_bg_pane

0xcd58,	// (0x000212b9) vded2_slider_pane_g1

0xcd61,	// (0x000212c2) vded2_slider_pane_g2

0xcd69,	// (0x000212ca) vded2_slider_pane_g3

0x0002,

0xfb14,	// (0x00024075) vded2_slider_pane_g

0xcd72,	// (0x000212d3) vded2_slider_bg_pane_g1

0xcd7b,	// (0x000212dc) vded2_slider_bg_pane_g2

0xcd84,	// (0x000212e5) vded2_slider_bg_pane_g3

0x0002,

0xfb1b,	// (0x0002407c) vded2_slider_bg_pane_g

0xa6d4,	// (0x0001ec35) aid_postcard_touch_down_pane_ParamLimits

0xa6d4,	// (0x0001ec35) aid_postcard_touch_down_pane

0xa6e0,	// (0x0001ec41) aid_postcard_touch_up_pane_ParamLimits

0xa6e0,	// (0x0001ec41) aid_postcard_touch_up_pane

0x106d,	// (0x000155ce) main_blid2_pane

0x3b94,	// (0x000180f5) popup_blid2_search_window

0x106d,	// (0x000155ce) blid2_gps_pane

0x106d,	// (0x000155ce) blid2_navig_pane

0x106d,	// (0x000155ce) blid2_search_pane

0x106d,	// (0x000155ce) blid2_tripm_pane

0xcd8d,	// (0x000212ee) blid2_search_pane_g1_ParamLimits

0xcd8d,	// (0x000212ee) blid2_search_pane_g1

0xcd99,	// (0x000212fa) blid2_search_pane_t1_ParamLimits

0xcd99,	// (0x000212fa) blid2_search_pane_t1

0xcdab,	// (0x0002130c) aid_size_cell_blid2_gps_ParamLimits

0xcdab,	// (0x0002130c) aid_size_cell_blid2_gps

0xcdbb,	// (0x0002131c) blid2_gps_pane_g1_ParamLimits

0xcdbb,	// (0x0002131c) blid2_gps_pane_g1

0xcdc7,	// (0x00021328) grid_blid2_satellite_pane_ParamLimits

0xcdc7,	// (0x00021328) grid_blid2_satellite_pane

0xcdd3,	// (0x00021334) blid2_navig_pane_g1_ParamLimits

0xcdd3,	// (0x00021334) blid2_navig_pane_g1

0xcddf,	// (0x00021340) blid2_navig_pane_t1_ParamLimits

0xcddf,	// (0x00021340) blid2_navig_pane_t1

0xcdf1,	// (0x00021352) blid2_navig_pane_t2_ParamLimits

0xcdf1,	// (0x00021352) blid2_navig_pane_t2

0x0001,

0xfb22,	// (0x00024083) blid2_navig_pane_t_ParamLimits

0xfb22,	// (0x00024083) blid2_navig_pane_t

0xce03,	// (0x00021364) blid2_navig_ring_pane_ParamLimits

0xce03,	// (0x00021364) blid2_navig_ring_pane

0xce0f,	// (0x00021370) blid2_speed_pane_ParamLimits

0xce0f,	// (0x00021370) blid2_speed_pane

0xce1b,	// (0x0002137c) blid2_tripm_pane_g1_ParamLimits

0xce1b,	// (0x0002137c) blid2_tripm_pane_g1

0xce27,	// (0x00021388) blid2_tripm_pane_g2_ParamLimits

0xce27,	// (0x00021388) blid2_tripm_pane_g2

0xce33,	// (0x00021394) blid2_tripm_pane_g3_ParamLimits

0xce33,	// (0x00021394) blid2_tripm_pane_g3

0xce3f,	// (0x000213a0) blid2_tripm_pane_g4_ParamLimits

0xce3f,	// (0x000213a0) blid2_tripm_pane_g4

0xce4b,	// (0x000213ac) blid2_tripm_pane_g5_ParamLimits

0xce4b,	// (0x000213ac) blid2_tripm_pane_g5

0x0005,

0xfb27,	// (0x00024088) blid2_tripm_pane_g_ParamLimits

0xfb27,	// (0x00024088) blid2_tripm_pane_g

0xce63,	// (0x000213c4) blid2_tripm_pane_t1_ParamLimits

0xce63,	// (0x000213c4) blid2_tripm_pane_t1

0xce75,	// (0x000213d6) blid2_tripm_pane_t2_ParamLimits

0xce75,	// (0x000213d6) blid2_tripm_pane_t2

0xce87,	// (0x000213e8) blid2_tripm_pane_t3_ParamLimits

0xce87,	// (0x000213e8) blid2_tripm_pane_t3

0x0003,

0xfb34,	// (0x00024095) blid2_tripm_pane_t_ParamLimits

0xfb34,	// (0x00024095) blid2_tripm_pane_t

0xceb7,	// (0x00021418) cell_blid2_satellite_pane_ParamLimits

0xceb7,	// (0x00021418) cell_blid2_satellite_pane

0xcecf,	// (0x00021430) cell_blid2_satellite_pane_g1

0x54fe,	// (0x00019a5f) cell_blid2_satellite_pane_t1

0x407b,	// (0x000185dc) blid2_speed_pane_g1

0x550c,	// (0x00019a6d) blid2_speed_pane_t1

0x551a,	// (0x00019a7b) blid2_speed_pane_t2

0x0001,

0xfb3d,	// (0x0002409e) blid2_speed_pane_t

0x407b,	// (0x000185dc) blid2_navig_ring_pane_g1

0xced8,	// (0x00021439) blid2_navig_ring_pane_g2

0xcee0,	// (0x00021441) blid2_navig_ring_pane_g3

0xcee8,	// (0x00021449) blid2_navig_ring_pane_g4

0xcef0,	// (0x00021451) blid2_navig_ring_pane_g5

0x0004,

0xfb42,	// (0x000240a3) blid2_navig_ring_pane_g

0x106d,	// (0x000155ce) bg_popup_window_pane_cp011

0x5528,	// (0x00019a89) popup_blid2_search_window_g1

0x5530,	// (0x00019a91) popup_blid2_search_window_t1

0x553e,	// (0x00019a9f) popup_blid2_search_window_t2

0x0001,

0xfb4d,	// (0x000240ae) popup_blid2_search_window_t

0x1ce0,	// (0x00016241) main_browser_pane_g1

0x182b,	// (0x00015d8c) main_browser_pane_ParamLimits

0x821b,	// (0x0001c77c) bg_button_pane_cp011_ParamLimits

0x8519,	// (0x0001ca7a) cell_vitu2_function_pane_g1_ParamLimits

0x3b86,	// (0x000180e7) bg_popup_sub_pane_cp22_ParamLimits

0xc8c6,	// (0x00020e27) input_focus_pane_cp08_ParamLimits

0xc8dd,	// (0x00020e3e) popup_vitu2_query_button_pane_ParamLimits

0xc8dd,	// (0x00020e3e) popup_vitu2_query_button_pane

0xc8ee,	// (0x00020e4f) popup_vitu2_query_input_button_pane

0x5097,	// (0x000195f8) popup_vitu2_query_window_g1_ParamLimits

0xc8f6,	// (0x00020e57) popup_vitu2_query_window_g2_ParamLimits

0xfa4e,	// (0x00023faf) popup_vitu2_query_window_g_ParamLimits

0x106d,	// (0x000155ce) bg_button_pane_cp026

0xcef8,	// (0x00021459) popup_vitu2_query_input_button_pane_g1

0x106d,	// (0x000155ce) bg_button_pane_cp025

0x554c,	// (0x00019aad) popup_vitu2_query_button_pane_t1

0xb3b9,	// (0x0001f91a) main_mp3_pane_t6

0xb3c7,	// (0x0001f928) popup_slider_window_cp01

0x816f,	// (0x0001c6d0) cam4_battery_pane

0x816f,	// (0x0001c6d0) cam4_battery_pane_cp02

0x816f,	// (0x0001c6d0) cam4_battery_pane_cp01

0x816f,	// (0x0001c6d0) cam4_battery_pane_cp03

0x5576,	// (0x00019ad7) cam4_battery_pane_g1

0x407b,	// (0x000185dc) cam4_battery_pane_g2

0x0001,

0xfb52,	// (0x000240b3) cam4_battery_pane_g

0x3f4d,	// (0x000184ae) popup_blid_sat_info2_window_t11

0xa1e1,	// (0x0001e742) aid_size_touch_mv_arrow_left_ParamLimits

0x2569,	// (0x00016aca) aid_size_touch_mv_arrow_right_ParamLimits

0x25a1,	// (0x00016b02) navi_pane_g1_ParamLimits

0x25ad,	// (0x00016b0e) navi_pane_g2_ParamLimits

0xa1fa,	// (0x0001e75b) navi_pane_g3_ParamLimits

0xf409,	// (0x0002396a) navi_pane_g_ParamLimits

0xa21f,	// (0x0001e780) navi_pane_mv_t1_ParamLimits

0xbd44,	// (0x000202a5) grid_imed_effect_pane_ParamLimits

0x9349,	// (0x0001d8aa) aid_placing_vt_slider_lsc

0x1c22,	// (0x00016183) aid_placing_vt_slider_prt

0x10c0,	// (0x00015621) bg_tb_trans_pane_cp01_ParamLimits

0x41ca,	// (0x0001872b) popup_image_details_window_g1_ParamLimits

0x41dd,	// (0x0001873e) popup_image_details_window_g2_ParamLimits

0x41f2,	// (0x00018753) popup_image_details_window_g3_ParamLimits

0x41f2,	// (0x00018753) popup_image_details_window_g3

0xf74f,	// (0x00023cb0) popup_image_details_window_g_ParamLimits

0x4206,	// (0x00018767) popup_image_details_window_t1_ParamLimits

0x4218,	// (0x00018779) popup_image_details_window_t2_ParamLimits

0x4231,	// (0x00018792) popup_image_details_window_t3_ParamLimits

0x4245,	// (0x000187a6) popup_image_details_window_t4_ParamLimits

0x4260,	// (0x000187c1) popup_image_details_window_t5_ParamLimits

0xf756,	// (0x00023cb7) popup_image_details_window_t_ParamLimits

0xcc1e,	// (0x0002117f) cl_header_name_pane_ParamLimits

0xcc1e,	// (0x0002117f) cl_header_name_pane

0xcf00,	// (0x00021461) cl_header_name_pane_t1_ParamLimits

0xcf00,	// (0x00021461) cl_header_name_pane_t1

0xcf17,	// (0x00021478) cl_header_name_pane_t2_ParamLimits

0xcf17,	// (0x00021478) cl_header_name_pane_t2

0xcf41,	// (0x000214a2) cl_header_name_pane_t3_ParamLimits

0xcf41,	// (0x000214a2) cl_header_name_pane_t3

0x0002,

0xfb57,	// (0x000240b8) cl_header_name_pane_t_ParamLimits

0xfb57,	// (0x000240b8) cl_header_name_pane_t

0x262f,	// (0x00016b90) navi_pane_mv_g2_ParamLimits

0x4d4c,	// (0x000192ad) field_vitu2_entry_pane_g1_ParamLimits

0x4d58,	// (0x000192b9) field_vitu2_entry_pane_g2_ParamLimits

0x4d64,	// (0x000192c5) field_vitu2_entry_pane_g3_ParamLimits

0x4d64,	// (0x000192c5) field_vitu2_entry_pane_g3

0xf94d,	// (0x00023eae) field_vitu2_entry_pane_g_ParamLimits

0x83ee,	// (0x0001c94f) cell_vitu2_itu_pane_g1_ParamLimits

0x83fe,	// (0x0001c95f) cell_vitu2_itu_pane_g2_ParamLimits

0x83fe,	// (0x0001c95f) cell_vitu2_itu_pane_g2

0x0001,

0xf959,	// (0x00023eba) cell_vitu2_itu_pane_g_ParamLimits

0xf959,	// (0x00023eba) cell_vitu2_itu_pane_g

0x821b,	// (0x0001c77c) bg_vkb2_func_pane_cp05_ParamLimits

0x821b,	// (0x0001c77c) bg_vkb2_func_pane_cp05

0x821b,	// (0x0001c77c) bg_vkb2_func_pane_cp03

0x821b,	// (0x0001c77c) bg_vkb2_func_pane_cp04

0x821b,	// (0x0001c77c) bg_vkb2_func_pane_cp10_ParamLimits

0x821b,	// (0x0001c77c) bg_vkb2_func_pane_cp10

0xcbc4,	// (0x00021125) bg_vkb2_func_pane_cp08

0xcbab,	// (0x0002110c) bg_vkb2_func_pane_cp06

0xcbb8,	// (0x00021119) bg_vkb2_func_pane_cp07

0x5491,	// (0x000199f2) bg_vkb2_func_pane_cp11_ParamLimits

0x5491,	// (0x000199f2) bg_vkb2_func_pane_cp11

0x54a6,	// (0x00019a07) bg_vkb2_func_pane_cp12_ParamLimits

0x54a6,	// (0x00019a07) bg_vkb2_func_pane_cp12

0x106d,	// (0x000155ce) bg_vkb2_func_pane_cp09

0x4da1,	// (0x00019302) bg_vkb2_func_pane_g1

0x1df1,	// (0x00016352) bg_vkb2_func_pane_g2

0x4da9,	// (0x0001930a) bg_vkb2_func_pane_g3

0x4db1,	// (0x00019312) bg_vkb2_func_pane_g4

0x503a,	// (0x0001959b) bg_vkb2_func_pane_g5

0x4dc9,	// (0x0001932a) bg_vkb2_func_pane_g6

0x4dd1,	// (0x00019332) bg_vkb2_func_pane_g7

0x4dc1,	// (0x00019322) bg_vkb2_func_pane_g8

0x1dd1,	// (0x00016332) bg_vkb2_func_pane_g9

0x0008,

0xfb5e,	// (0x000240bf) bg_vkb2_func_pane_g

0xce57,	// (0x000213b8) blid2_tripm_pane_g6_ParamLimits

0xce57,	// (0x000213b8) blid2_tripm_pane_g6

0x4b60,	// (0x000190c1) mp4_progress_pane_g1

0xceab,	// (0x0002140c) blid2_tripm_values_pane_ParamLimits

0xceab,	// (0x0002140c) blid2_tripm_values_pane

0xcf66,	// (0x000214c7) blid2_tripm_values_pane_t1

0xcf74,	// (0x000214d5) blid2_tripm_values_pane_t2

0xcf82,	// (0x000214e3) blid2_tripm_values_pane_t3

0xcf90,	// (0x000214f1) blid2_tripm_values_pane_t4

0xcf9e,	// (0x000214ff) blid2_tripm_values_pane_t5

0xcfac,	// (0x0002150d) blid2_tripm_values_pane_t6

0xcfba,	// (0x0002151b) blid2_tripm_values_pane_t7

0xcfc8,	// (0x00021529) blid2_tripm_values_pane_t8

0xcfd6,	// (0x00021537) blid2_tripm_values_pane_t9

0x0008,

0xfb71,	// (0x000240d2) blid2_tripm_values_pane_t

0x9383,	// (0x0001d8e4) call_video_pane_t1_ParamLimits

0x93a0,	// (0x0001d901) call_video_pane_t2_ParamLimits

0xf292,	// (0x000237f3) call_video_pane_t_ParamLimits

0xa67a,	// (0x0001ebdb) msg_header_pane_g1_ParamLimits

0x2833,	// (0x00016d94) msg_header_pane_g2_ParamLimits

0x2833,	// (0x00016d94) msg_header_pane_g2

0x0001,

0xf4ac,	// (0x00023a0d) msg_header_pane_g_ParamLimits

0xf4ac,	// (0x00023a0d) msg_header_pane_g

0x182b,	// (0x00015d8c) main_clock2_pane_ParamLimits

0xbb7a,	// (0x000200db) grid_clock2_toolbar_pane_ParamLimits

0xbb7a,	// (0x000200db) grid_clock2_toolbar_pane

0xbb7a,	// (0x000200db) listscroll_clock2_pane_ParamLimits

0xbb7a,	// (0x000200db) listscroll_clock2_pane

0xbc1f,	// (0x00020180) main_clock2_pane_t3_ParamLimits

0xbc1f,	// (0x00020180) main_clock2_pane_t3

0xbc31,	// (0x00020192) main_clock2_pane_t4_ParamLimits

0xbc31,	// (0x00020192) main_clock2_pane_t4

0x5580,	// (0x00019ae1) cell_clock2_toolbar_pane

0x5588,	// (0x00019ae9) cell_clock2_toolbar_pane_cp01

0x5588,	// (0x00019ae9) cell_clock2_toolbar_pane_cp02

0x5590,	// (0x00019af1) cell_clock2_toolbar_pane_cp03

0x5598,	// (0x00019af9) list_clock2_pane

0x24d1,	// (0x00016a32) scroll_pane_cp10

0x55a0,	// (0x00019b01) list_single_clock2_pane_ParamLimits

0x55a0,	// (0x00019b01) list_single_clock2_pane

0x2690,	// (0x00016bf1) list_highlight_pane_cp08

0x55ad,	// (0x00019b0e) list_single_clock2_pane_t1

0x55bb,	// (0x00019b1c) list_single_clock2_pane_t2

0x0001,

0xfb84,	// (0x000240e5) list_single_clock2_pane_t

0x106d,	// (0x000155ce) bg_button_pane_cp10

0x55c9,	// (0x00019b2a) cell_clock2_toolbar_pane_g1

0x787e,	// (0x0001bddf) aid_main_viewer_pane_g1_ParamLimits

0x787e,	// (0x0001bddf) aid_main_viewer_pane_g1

0x788a,	// (0x0001bdeb) aid_main_viewer_pane_g2_ParamLimits

0x788a,	// (0x0001bdeb) aid_main_viewer_pane_g2

0xa698,	// (0x0001ebf9) aid_main_viewer_pane_g3_ParamLimits

0xa698,	// (0x0001ebf9) aid_main_viewer_pane_g3

0xa6a7,	// (0x0001ec08) aid_main_viewer_pane_g4_ParamLimits

0xa6a7,	// (0x0001ec08) aid_main_viewer_pane_g4

0x0003,

0xf4bd,	// (0x00023a1e) aid_main_viewer_pane_g_ParamLimits

0xf4bd,	// (0x00023a1e) aid_main_viewer_pane_g

0x4383,	// (0x000188e4) main_calc_pane_ParamLimits

0xacec,	// (0x0001f24d) main_dialer2_pane_ParamLimits

0x106d,	// (0x000155ce) main_cam6_pane

0x106d,	// (0x000155ce) main_vid6_pane

0xbb86,	// (0x000200e7) listscroll_gen_pane_cp06_ParamLimits

0xbb86,	// (0x000200e7) listscroll_gen_pane_cp06

0xbc43,	// (0x000201a4) main_clock2_pane_t5_ParamLimits

0xbc43,	// (0x000201a4) main_clock2_pane_t5

0xbc8a,	// (0x000201eb) aid_call2_pane_cp10_ParamLimits

0xbc96,	// (0x000201f7) aid_call_pane_cp10_ParamLimits

0x255d,	// (0x00016abe) popup_clock_analogue_window_cp10_g1_ParamLimits

0x255d,	// (0x00016abe) popup_clock_analogue_window_cp10_g2_ParamLimits

0xbca2,	// (0x00020203) popup_clock_analogue_window_cp10_g3_ParamLimits

0xbca2,	// (0x00020203) popup_clock_analogue_window_cp10_g4_ParamLimits

0x255d,	// (0x00016abe) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf806,	// (0x00023d67) popup_clock_analogue_window_cp10_g_ParamLimits

0xbcae,	// (0x0002020f) popup_clock_analogue_window_cp10_t1_ParamLimits

0x4bc0,	// (0x00019121) cell_dialer2_keypad_pane_g2_ParamLimits

0x4bc0,	// (0x00019121) cell_dialer2_keypad_pane_g2

0x0001,

0xf8ec,	// (0x00023e4d) cell_dialer2_keypad_pane_g_ParamLimits

0xf8ec,	// (0x00023e4d) cell_dialer2_keypad_pane_g

0xc05b,	// (0x000205bc) cell_dialer2_keypad_pane_t1

0xc454,	// (0x000209b5) main_cset_text2_pane_ParamLimits

0xc454,	// (0x000209b5) main_cset_text2_pane

0x5271,	// (0x000197d2) area_vitu2_query_pane_g1_ParamLimits

0xcb50,	// (0x000210b1) area_vitu2_query_pane_g2_ParamLimits

0xfaa1,	// (0x00024002) area_vitu2_query_pane_g_ParamLimits

0x52f5,	// (0x00019856) area_vitu2_query_pane_t7_ParamLimits

0x52f5,	// (0x00019856) area_vitu2_query_pane_t7

0xcbab,	// (0x0002110c) bg_button_pane_cp018_ParamLimits

0xcbb8,	// (0x00021119) bg_button_pane_cp021_ParamLimits

0xcbc4,	// (0x00021125) bg_button_pane_cp022_ParamLimits

0xcbc4,	// (0x00021125) bg_vkb2_func_pane_cp08_ParamLimits

0xcbab,	// (0x0002110c) bg_vkb2_func_pane_cp06_ParamLimits

0xcbb8,	// (0x00021119) bg_vkb2_func_pane_cp07_ParamLimits

0xcbd3,	// (0x00021134) input_focus_pane_cp09_ParamLimits

0x8750,	// (0x0001ccb1) cam6_autofocus_pane_ParamLimits

0x8750,	// (0x0001ccb1) cam6_autofocus_pane

0x876c,	// (0x0001cccd) cam6_image_uncrop_pane_ParamLimits

0x876c,	// (0x0001cccd) cam6_image_uncrop_pane

0x878f,	// (0x0001ccf0) cam6_indi_pane_ParamLimits

0x878f,	// (0x0001ccf0) cam6_indi_pane

0x87a9,	// (0x0001cd0a) cam6_mode_pane_ParamLimits

0x87a9,	// (0x0001cd0a) cam6_mode_pane

0x87bd,	// (0x0001cd1e) cam6_timer_pane_ParamLimits

0x87bd,	// (0x0001cd1e) cam6_timer_pane

0x87c9,	// (0x0001cd2a) cam6_zoom_pane_ParamLimits

0x87c9,	// (0x0001cd2a) cam6_zoom_pane

0xcfe4,	// (0x00021545) cam6_mode_pane_g1_ParamLimits

0xcfe4,	// (0x00021545) cam6_mode_pane_g1

0xcff0,	// (0x00021551) cam6_mode_pane_g2_ParamLimits

0xcff0,	// (0x00021551) cam6_mode_pane_g2

0xcffc,	// (0x0002155d) cam6_mode_pane_g3_ParamLimits

0xcffc,	// (0x0002155d) cam6_mode_pane_g3

0xd008,	// (0x00021569) cam6_mode_pane_g4_ParamLimits

0xd008,	// (0x00021569) cam6_mode_pane_g4

0x0003,

0xfb89,	// (0x000240ea) cam6_mode_pane_g_ParamLimits

0xfb89,	// (0x000240ea) cam6_mode_pane_g

0x555a,	// (0x00019abb) bg_tb_trans_pane_cp08_ParamLimits

0x555a,	// (0x00019abb) bg_tb_trans_pane_cp08

0x55dd,	// (0x00019b3e) cam6_battery_pane_ParamLimits

0x55dd,	// (0x00019b3e) cam6_battery_pane

0x55f3,	// (0x00019b54) cam6_indi_pane_g1_ParamLimits

0x55f3,	// (0x00019b54) cam6_indi_pane_g1

0x5605,	// (0x00019b66) cam6_indi_pane_g2_ParamLimits

0x5605,	// (0x00019b66) cam6_indi_pane_g2

0x5617,	// (0x00019b78) cam6_indi_pane_g3_ParamLimits

0x5617,	// (0x00019b78) cam6_indi_pane_g3

0x0002,

0xfb92,	// (0x000240f3) cam6_indi_pane_g_ParamLimits

0xfb92,	// (0x000240f3) cam6_indi_pane_g

0x5629,	// (0x00019b8a) cam6_indi_pane_t1_ParamLimits

0x5629,	// (0x00019b8a) cam6_indi_pane_t1

0xc1a8,	// (0x00020709) cam6_autofocus_pane_g1

0xc1a0,	// (0x00020701) cam6_autofocus_pane_g2

0xc1b8,	// (0x00020719) cam6_autofocus_pane_g3

0xc1b0,	// (0x00020711) cam6_autofocus_pane_g4

0x0003,

0xfb99,	// (0x000240fa) cam6_autofocus_pane_g

0x564f,	// (0x00019bb0) cam6_timer_pane_g1

0x5657,	// (0x00019bb8) cam6_timer_pane_t1

0x5665,	// (0x00019bc6) cam6_zoom_cont_pane

0x566d,	// (0x00019bce) cam6_zoom_pane_g1

0x5675,	// (0x00019bd6) cam6_zoom_pane_g2

0xd014,	// (0x00021575) cam6_zoom_pane_g3

0x0002,

0xfba2,	// (0x00024103) cam6_zoom_pane_g

0x407b,	// (0x000185dc) cam6_battery_pane_g1

0x407b,	// (0x000185dc) cam6_battery_pane_g2

0x0001,

0xf713,	// (0x00023c74) cam6_battery_pane_g

0x567d,	// (0x00019bde) cam6_zoom_cont_pane_g1

0x5686,	// (0x00019be7) cam6_zoom_cont_pane_g2

0x568f,	// (0x00019bf0) cam6_zoom_cont_pane_g3

0x0002,

0xfba9,	// (0x0002410a) cam6_zoom_cont_pane_g

0xd031,	// (0x00021592) cam6_mode_pane_cp_ParamLimits

0xd031,	// (0x00021592) cam6_mode_pane_cp

0xd045,	// (0x000215a6) cam6_zoom_pane_cp_ParamLimits

0xd045,	// (0x000215a6) cam6_zoom_pane_cp

0xd05b,	// (0x000215bc) vid6_image_uncrop_cif_pane_ParamLimits

0xd05b,	// (0x000215bc) vid6_image_uncrop_cif_pane

0xd07d,	// (0x000215de) vid6_image_uncrop_nhd_pane_ParamLimits

0xd07d,	// (0x000215de) vid6_image_uncrop_nhd_pane

0xd094,	// (0x000215f5) vid6_image_uncrop_vga_pane_ParamLimits

0xd094,	// (0x000215f5) vid6_image_uncrop_vga_pane

0xd0ab,	// (0x0002160c) vid6_image_uncrop_wvga_pane_ParamLimits

0xd0ab,	// (0x0002160c) vid6_image_uncrop_wvga_pane

0xd0c2,	// (0x00021623) vid6_indi_pane_ParamLimits

0xd0c2,	// (0x00021623) vid6_indi_pane

0x555a,	// (0x00019abb) bg_tb_trans_pane_cp09_ParamLimits

0x555a,	// (0x00019abb) bg_tb_trans_pane_cp09

0x56a3,	// (0x00019c04) cam6_battery_pane_cp_ParamLimits

0x56a3,	// (0x00019c04) cam6_battery_pane_cp

0x56af,	// (0x00019c10) vid6_indi_pane_g1_ParamLimits

0x56af,	// (0x00019c10) vid6_indi_pane_g1

0x56c1,	// (0x00019c22) vid6_indi_pane_g2_ParamLimits

0x56c1,	// (0x00019c22) vid6_indi_pane_g2

0x56d3,	// (0x00019c34) vid6_indi_pane_g3_ParamLimits

0x56d3,	// (0x00019c34) vid6_indi_pane_g3

0x56e8,	// (0x00019c49) vid6_indi_pane_g4_ParamLimits

0x56e8,	// (0x00019c49) vid6_indi_pane_g4

0x56fd,	// (0x00019c5e) vid6_indi_pane_g5_ParamLimits

0x56fd,	// (0x00019c5e) vid6_indi_pane_g5

0x0004,

0xfbb0,	// (0x00024111) vid6_indi_pane_g_ParamLimits

0xfbb0,	// (0x00024111) vid6_indi_pane_g

0x5717,	// (0x00019c78) vid6_indi_pane_t1_ParamLimits

0x5717,	// (0x00019c78) vid6_indi_pane_t1

0x572d,	// (0x00019c8e) vid6_indi_pane_t2_ParamLimits

0x572d,	// (0x00019c8e) vid6_indi_pane_t2

0x5755,	// (0x00019cb6) vid6_indi_pane_t3_ParamLimits

0x5755,	// (0x00019cb6) vid6_indi_pane_t3

0x577d,	// (0x00019cde) vid6_indi_pane_t4_ParamLimits

0x577d,	// (0x00019cde) vid6_indi_pane_t4

0x0003,

0xfbbb,	// (0x0002411c) vid6_indi_pane_t_ParamLimits

0xfbbb,	// (0x0002411c) vid6_indi_pane_t

0x57a1,	// (0x00019d02) wait_bar_pane_cp08

0xd0e2,	// (0x00021643) main_cset_text2_pane_t1_ParamLimits

0xd0e2,	// (0x00021643) main_cset_text2_pane_t1

0xd01c,	// (0x0002157d) listscroll_gen_pane_cp06_t1_ParamLimits

0xd01c,	// (0x0002157d) listscroll_gen_pane_cp06_t1

0x106d,	// (0x000155ce) main_cam6_set_pane

0x8161,	// (0x0001c6c2) bg_tb_trans_pane_cp06_ParamLimits

0x8177,	// (0x0001c6d8) cam4_indicators_pane_g1_ParamLimits

0x8187,	// (0x0001c6e8) cam4_indicators_pane_g2_ParamLimits

0xf929,	// (0x00023e8a) cam4_indicators_pane_g_ParamLimits

0x81a7,	// (0x0001c708) cam4_indicators_pane_t1_ParamLimits

0x821b,	// (0x0001c77c) bg_tb_trans_pane_cp07_ParamLimits

0x8177,	// (0x0001c6d8) vid4_indicators_pane_g1_ParamLimits

0x8229,	// (0x0001c78a) vid4_indicators_pane_g2_ParamLimits

0x8239,	// (0x0001c79a) vid4_indicators_pane_g3_ParamLimits

0x824a,	// (0x0001c7ab) vid4_indicators_pane_g4_ParamLimits

0xf93b,	// (0x00023e9c) vid4_indicators_pane_g_ParamLimits

0x8266,	// (0x0001c7c7) vid4_indicators_pane_t1_ParamLimits

0x86bb,	// (0x0001cc1c) vid4_progress_pane_g1_ParamLimits

0x86ca,	// (0x0001cc2b) vid4_progress_pane_g2_ParamLimits

0x86d9,	// (0x0001cc3a) vid4_progress_pane_g3_ParamLimits

0x86e8,	// (0x0001cc49) vid4_progress_pane_g4_ParamLimits

0xfaec,	// (0x0002404d) vid4_progress_pane_g_ParamLimits

0x8700,	// (0x0001cc61) vid4_progress_pane_t1_ParamLimits

0x8716,	// (0x0001cc77) vid4_progress_pane_t2_ParamLimits

0x872b,	// (0x0001cc8c) vid4_progress_pane_t3_ParamLimits

0xfaf7,	// (0x00024058) vid4_progress_pane_t_ParamLimits

0x8740,	// (0x0001cca1) wait_bar_pane_cp07_ParamLimits

0xd0fe,	// (0x0002165f) main_cam6_set_pane_g2_ParamLimits

0xd0fe,	// (0x0002165f) main_cam6_set_pane_g2

0xd10a,	// (0x0002166b) main_cset6_listscroll_pane_ParamLimits

0xd10a,	// (0x0002166b) main_cset6_listscroll_pane

0xd133,	// (0x00021694) main_cset6_slider_pane_ParamLimits

0xd133,	// (0x00021694) main_cset6_slider_pane

0xd13f,	// (0x000216a0) main_cset6_text2_pane_ParamLimits

0xd13f,	// (0x000216a0) main_cset6_text2_pane

0x57b1,	// (0x00019d12) main_cset6_text_pane

0x4e97,	// (0x000193f8) main_cset_list_pane_copy1_ParamLimits

0x4e97,	// (0x000193f8) main_cset_list_pane_copy1

0x4ea7,	// (0x00019408) scroll_pane_cp028_copy1

0xd152,	// (0x000216b3) cset_list_set_pane_copy1

0xc70f,	// (0x00020c70) aid_position_infowindow_above_copy1

0xc717,	// (0x00020c78) aid_position_infowindow_below_copy1

0xd161,	// (0x000216c2) cset_list_set_pane_g1_copy1

0xd169,	// (0x000216ca) cset_list_set_pane_g3_copy1_ParamLimits

0xd169,	// (0x000216ca) cset_list_set_pane_g3_copy1

0xd178,	// (0x000216d9) cset_list_set_pane_t1_copy1_ParamLimits

0xd178,	// (0x000216d9) cset_list_set_pane_t1_copy1

0x10c0,	// (0x00015621) list_highlight_pane_cp021_copy1_ParamLimits

0x10c0,	// (0x00015621) list_highlight_pane_cp021_copy1

0x57b9,	// (0x00019d1a) cset6_slider_pane_ParamLimits

0x57b9,	// (0x00019d1a) cset6_slider_pane

0x57e5,	// (0x00019d46) main_cset6_slider_pane_g1_ParamLimits

0x57e5,	// (0x00019d46) main_cset6_slider_pane_g1

0xd18d,	// (0x000216ee) main_cset6_slider_pane_g2_ParamLimits

0xd18d,	// (0x000216ee) main_cset6_slider_pane_g2

0x4ebc,	// (0x0001941d) main_cset6_slider_pane_g3_ParamLimits

0x4ebc,	// (0x0001941d) main_cset6_slider_pane_g3

0xd1b5,	// (0x00021716) main_cset6_slider_pane_g4_ParamLimits

0xd1b5,	// (0x00021716) main_cset6_slider_pane_g4

0xd1c1,	// (0x00021722) main_cset6_slider_pane_g5_ParamLimits

0xd1c1,	// (0x00021722) main_cset6_slider_pane_g5

0x4ebc,	// (0x0001941d) main_cset6_slider_pane_g7_ParamLimits

0x4ebc,	// (0x0001941d) main_cset6_slider_pane_g7

0x4ec8,	// (0x00019429) main_cset6_slider_pane_g8_ParamLimits

0x4ec8,	// (0x00019429) main_cset6_slider_pane_g8

0xd1cd,	// (0x0002172e) main_cset6_slider_pane_g9_ParamLimits

0xd1cd,	// (0x0002172e) main_cset6_slider_pane_g9

0xd1d9,	// (0x0002173a) main_cset6_slider_pane_g10_ParamLimits

0xd1d9,	// (0x0002173a) main_cset6_slider_pane_g10

0xd1b5,	// (0x00021716) main_cset6_slider_pane_g11_ParamLimits

0xd1b5,	// (0x00021716) main_cset6_slider_pane_g11

0xd1e5,	// (0x00021746) main_cset6_slider_pane_g12_ParamLimits

0xd1e5,	// (0x00021746) main_cset6_slider_pane_g12

0xd1f1,	// (0x00021752) main_cset6_slider_pane_g13_ParamLimits

0xd1f1,	// (0x00021752) main_cset6_slider_pane_g13

0xd1fd,	// (0x0002175e) main_cset6_slider_pane_g14_ParamLimits

0xd1fd,	// (0x0002175e) main_cset6_slider_pane_g14

0xd209,	// (0x0002176a) main_cset6_slider_pane_g15_ParamLimits

0xd209,	// (0x0002176a) main_cset6_slider_pane_g15

0xd1c1,	// (0x00021722) main_cset6_slider_pane_g16_ParamLimits

0xd1c1,	// (0x00021722) main_cset6_slider_pane_g16

0xd221,	// (0x00021782) main_cset6_slider_pane_g17_ParamLimits

0xd221,	// (0x00021782) main_cset6_slider_pane_g17

0x0011,

0xfbc4,	// (0x00024125) main_cset6_slider_pane_g_ParamLimits

0xfbc4,	// (0x00024125) main_cset6_slider_pane_g

0x580d,	// (0x00019d6e) main_cset6_slider_pane_t1_ParamLimits

0x580d,	// (0x00019d6e) main_cset6_slider_pane_t1

0xd22d,	// (0x0002178e) main_cset6_slider_pane_t2_ParamLimits

0xd22d,	// (0x0002178e) main_cset6_slider_pane_t2

0x584e,	// (0x00019daf) main_cset6_slider_pane_t3_ParamLimits

0x584e,	// (0x00019daf) main_cset6_slider_pane_t3

0xd258,	// (0x000217b9) main_cset6_slider_pane_t4_ParamLimits

0xd258,	// (0x000217b9) main_cset6_slider_pane_t4

0x5879,	// (0x00019dda) main_cset6_slider_pane_t5_ParamLimits

0x5879,	// (0x00019dda) main_cset6_slider_pane_t5

0x58a4,	// (0x00019e05) main_cset6_slider_pane_t7_ParamLimits

0x58a4,	// (0x00019e05) main_cset6_slider_pane_t7

0xd283,	// (0x000217e4) main_cset6_slider_pane_t8_ParamLimits

0xd283,	// (0x000217e4) main_cset6_slider_pane_t8

0xd2a7,	// (0x00021808) main_cset6_slider_pane_t9_ParamLimits

0xd2a7,	// (0x00021808) main_cset6_slider_pane_t9

0xd2cb,	// (0x0002182c) main_cset6_slider_pane_t10_ParamLimits

0xd2cb,	// (0x0002182c) main_cset6_slider_pane_t10

0xd2ef,	// (0x00021850) main_cset6_slider_pane_t11_ParamLimits

0xd2ef,	// (0x00021850) main_cset6_slider_pane_t11

0x58da,	// (0x00019e3b) main_cset6_slider_pane_t14_ParamLimits

0x58da,	// (0x00019e3b) main_cset6_slider_pane_t14

0x5913,	// (0x00019e74) main_cset6_slider_pane_t15_ParamLimits

0x5913,	// (0x00019e74) main_cset6_slider_pane_t15

0x000b,

0xfbe9,	// (0x0002414a) main_cset6_slider_pane_t_ParamLimits

0xfbe9,	// (0x0002414a) main_cset6_slider_pane_t

0x4fc4,	// (0x00019525) cset_slider_pane_g1_copy1

0x4fcd,	// (0x0001952e) cset_slider_pane_g2_copy1

0x4fd6,	// (0x00019537) cset_slider_pane_g3_copy1

0x106d,	// (0x000155ce) bg_popup_sub_pane_cp011_copy1

0x50a3,	// (0x00019604) main_cset_text_pane_g1_copy1

0x50ab,	// (0x0001960c) main_cset_text_pane_t1_copy1

0x50b9,	// (0x0001961a) main_cset_text_pane_t2_copy1

0x50c7,	// (0x00019628) main_cset_text_pane_t3_copy1

0x50d5,	// (0x00019636) main_cset_text_pane_t4_copy1

0x50e3,	// (0x00019644) main_cset_text_pane_t5_copy1

0x50f1,	// (0x00019652) main_cset_text_pane_t6_copy1

0x50ff,	// (0x00019660) main_cset_text_pane_t7_copy1

0xd313,	// (0x00021874) main_cset_text2_pane_t1_copy1

0x106d,	// (0x000155ce) main_ncimui_pane

0xad27,	// (0x0001f288) popup_query_ncimui_window_ParamLimits

0xad27,	// (0x0001f288) popup_query_ncimui_window

0x434b,	// (0x000188ac) field_cale_ev2_pane_g4_ParamLimits

0x434b,	// (0x000188ac) field_cale_ev2_pane_g4

0xbffb,	// (0x0002055c) cell_video_dialer_keypad_pane_g2_ParamLimits

0xbffb,	// (0x0002055c) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8c7,	// (0x00023e28) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8c7,	// (0x00023e28) cell_video_dialer_keypad_pane_g

0xc013,	// (0x00020574) cell_video_dialer_keypad_pane_t1

0x106d,	// (0x000155ce) bg_popup_window_pane_cp012

0x23aa,	// (0x0001690b) heading_pane_cp06

0x5a41,	// (0x00019fa2) ncim_query_content_pane

0x106d,	// (0x000155ce) bg_popup_heading_pane_cp01

0x5a49,	// (0x00019faa) ncim_heading_pane_t1

0x5a57,	// (0x00019fb8) ncim_indicator_popup_pane

0x5a69,	// (0x00019fca) ncim_query_button_pane

0x5a7d,	// (0x00019fde) ncim_query_content_pane_t1

0x5a8f,	// (0x00019ff0) ncim_query_content_pane_t2

0x0005,

0xfc28,	// (0x00024189) ncim_query_content_pane_t

0x5ac9,	// (0x0001a02a) ncim_query_list_pane

0x5adb,	// (0x0001a03c) ncim_query_popup_pane

0x5a57,	// (0x00019fb8) ncim_indicator_popup_pane_ParamLimits

0xd426,	// (0x00021987) ncim_query_content_pane_g1_ParamLimits

0xd426,	// (0x00021987) ncim_query_content_pane_g1

0x5a7d,	// (0x00019fde) ncim_query_content_pane_t1_ParamLimits

0x5a8f,	// (0x00019ff0) ncim_query_content_pane_t2_ParamLimits

0xd432,	// (0x00021993) ncim_query_content_pane_t3_ParamLimits

0xd432,	// (0x00021993) ncim_query_content_pane_t3

0xd44f,	// (0x000219b0) ncim_query_content_pane_t4_ParamLimits

0xd44f,	// (0x000219b0) ncim_query_content_pane_t4

0xd46c,	// (0x000219cd) ncim_query_content_pane_t5_ParamLimits

0xd46c,	// (0x000219cd) ncim_query_content_pane_t5

0x5aa1,	// (0x0001a002) ncim_query_content_pane_t6_ParamLimits

0x5aa1,	// (0x0001a002) ncim_query_content_pane_t6

0xfc28,	// (0x00024189) ncim_query_content_pane_t_ParamLimits

0x5ac9,	// (0x0001a02a) ncim_query_list_pane_ParamLimits

0x5adb,	// (0x0001a03c) ncim_query_popup_pane_ParamLimits

0x5aef,	// (0x0001a050) wait_bar_pane_cp04

0x106d,	// (0x000155ce) input_focus_pane_cp011

0x5af7,	// (0x0001a058) ncim_query_popup_pane_t1

0x5b05,	// (0x0001a066) ncim_list_query_list_pane_ParamLimits

0x5b05,	// (0x0001a066) ncim_list_query_list_pane

0x106d,	// (0x000155ce) bg_button_pane_cp027

0x5b18,	// (0x0001a079) ncim_query_button_pane_g1

0x106d,	// (0x000155ce) list_highlight_pane_cp012

0x5b22,	// (0x0001a083) ncim_list_query_list_pane_g1

0x5b2a,	// (0x0001a08b) ncim_list_query_list_pane_t1

0x8197,	// (0x0001c6f8) cam4_indicators_pane_g3_ParamLimits

0x8197,	// (0x0001c6f8) cam4_indicators_pane_g3

0x8256,	// (0x0001c7b7) vid4_indicators_pane_g5_ParamLimits

0x8256,	// (0x0001c7b7) vid4_indicators_pane_g5

0x86f4,	// (0x0001cc55) vid4_progress_pane_g5_ParamLimits

0x86f4,	// (0x0001cc55) vid4_progress_pane_g5

0xd341,	// (0x000218a2) main_ncimui_pane_g1

0xd397,	// (0x000218f8) ncimui_group_query_pane_ParamLimits

0xd397,	// (0x000218f8) ncimui_group_query_pane

0xd3d3,	// (0x00021934) ncimui_list_pane_ParamLimits

0xd3d3,	// (0x00021934) ncimui_list_pane

0xd3f2,	// (0x00021953) ncimui_text_pane_ParamLimits

0xd3f2,	// (0x00021953) ncimui_text_pane

0xd489,	// (0x000219ea) ncimui_text_pane_t1_ParamLimits

0xd489,	// (0x000219ea) ncimui_text_pane_t1

0x5b41,	// (0x0001a0a2) ncimui_list_single_graphic_pane_ParamLimits

0x5b41,	// (0x0001a0a2) ncimui_list_single_graphic_pane

0xd4a7,	// (0x00021a08) ncimui_query_pane_ParamLimits

0xd4a7,	// (0x00021a08) ncimui_query_pane

0x106d,	// (0x000155ce) list_highlight_pane_cp013

0x5b4e,	// (0x0001a0af) ncim_list_query_list_pane_t1_copy1

0x5b5c,	// (0x0001a0bd) ncim_list_single_graphic_pane_g1

0x5b64,	// (0x0001a0c5) ncim_query_button_pane_cp01

0x5b70,	// (0x0001a0d1) ncim_query_entry_pane_ParamLimits

0x5b70,	// (0x0001a0d1) ncim_query_entry_pane

0x5b83,	// (0x0001a0e4) ncimui_query_pane_g1

0x5b8f,	// (0x0001a0f0) ncimui_query_pane_t1_ParamLimits

0x5b8f,	// (0x0001a0f0) ncimui_query_pane_t1

0x10c0,	// (0x00015621) input_focus_pane_cp012

0x5ba8,	// (0x0001a109) ncim_query_entry_pane_t1

0x182b,	// (0x00015d8c) main_im_pane_ParamLimits

0x10c0,	// (0x00015621) main_mobtv_pane_ParamLimits

0x10c0,	// (0x00015621) main_mobtv_pane

0xd1cd,	// (0x0002172e) main_cset6_slider_pane_g18_ParamLimits

0xd1cd,	// (0x0002172e) main_cset6_slider_pane_g18

0xd1f1,	// (0x00021752) main_cset6_slider_pane_g19_ParamLimits

0xd1f1,	// (0x00021752) main_cset6_slider_pane_g19

0x4d64,	// (0x000192c5) bg_main_mobtv_pane_ParamLimits

0x4d64,	// (0x000192c5) bg_main_mobtv_pane

0xd4b7,	// (0x00021a18) main_mobtv_info_pane

0xd4c0,	// (0x00021a21) main_mobtv_loading_pane_ParamLimits

0xd4c0,	// (0x00021a21) main_mobtv_loading_pane

0x5bba,	// (0x0001a11b) main_mobtv_pg_channel_list_pane

0x5bc4,	// (0x0001a125) main_mobtv_pg_hdr_pane

0xd4cd,	// (0x00021a2e) main_mobtv_programe_curr_pane_ParamLimits

0xd4cd,	// (0x00021a2e) main_mobtv_programe_curr_pane

0xd4da,	// (0x00021a3b) main_mobtv_programe_next_pane_ParamLimits

0xd4da,	// (0x00021a3b) main_mobtv_programe_next_pane

0x5bcd,	// (0x0001a12e) popup_mobtv_noti_window

0x407b,	// (0x000185dc) main_tv_pg_hdr_pane_g1

0x5bd5,	// (0x0001a136) main_tv_pg_hdr_pane_g2

0x5bdd,	// (0x0001a13e) main_tv_pg_hdr_pane_g3

0x5be5,	// (0x0001a146) main_tv_pg_hdr_pane_g4

0x5bed,	// (0x0001a14e) main_tv_pg_hdr_pane_g5

0x5bf5,	// (0x0001a156) main_tv_pg_hdr_pane_g6

0x5bfd,	// (0x0001a15e) main_tv_pg_hdr_pane_g7

0x5c05,	// (0x0001a166) main_tv_pg_hdr_pane_g8

0x5c0d,	// (0x0001a16e) main_tv_pg_hdr_pane_g9

0x5c15,	// (0x0001a176) main_tv_pg_hdr_pane_g10

0x5c1f,	// (0x0001a180) main_tv_pg_hdr_pane_g11

0x000a,

0xfc35,	// (0x00024196) main_tv_pg_hdr_pane_g

0x5c29,	// (0x0001a18a) main_tv_pg_hdr_pane_t1

0x5c37,	// (0x0001a198) main_tv_pg_hdr_pane_t2

0x5c45,	// (0x0001a1a6) main_tv_pg_hdr_pane_t3

0x5c53,	// (0x0001a1b4) main_tv_pg_hdr_pane_t4

0x5c61,	// (0x0001a1c2) main_tv_pg_hdr_pane_t5

0x0004,

0xfc4c,	// (0x000241ad) main_tv_pg_hdr_pane_t

0x5c6f,	// (0x0001a1d0) single_mobtv_pg_channel_pane_ParamLimits

0x5c6f,	// (0x0001a1d0) single_mobtv_pg_channel_pane

0x5c81,	// (0x0001a1e2) single_mobtv_pg_channel_table_pane

0x5c8a,	// (0x0001a1eb) single_mobtv_pg_channel_thumb_pane

0x5c93,	// (0x0001a1f4) single_tv_pg_channel_pane_g1

0x5c9c,	// (0x0001a1fd) single_tv_pg_channel_pane_g2

0x0001,

0xfc57,	// (0x000241b8) single_tv_pg_channel_pane_g

0x42aa,	// (0x0001880b) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x42aa,	// (0x0001880b) bg_single_mobtv_pg_channel_thumb_pane

0x5ca5,	// (0x0001a206) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x5ca5,	// (0x0001a206) single_mobtv_pg_channel_thumb_pane_g1

0x5cb3,	// (0x0001a214) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x5cb3,	// (0x0001a214) single_mobtv_pg_channel_thumb_pane_g2

0x5cbf,	// (0x0001a220) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x5cbf,	// (0x0001a220) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc5c,	// (0x000241bd) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc5c,	// (0x000241bd) single_mobtv_pg_channel_thumb_pane_g

0x5ccb,	// (0x0001a22c) single_mobtv_pg_channel_thumb_pane_t1

0x5cd9,	// (0x0001a23a) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc63,	// (0x000241c4) single_mobtv_pg_channel_thumb_pane_t

0x407b,	// (0x000185dc) bg_single_mobtv_pg_channel_table_pane_g1

0x407b,	// (0x000185dc) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf713,	// (0x00023c74) bg_single_mobtv_pg_channel_table_pane_g

0x5ce7,	// (0x0001a248) single_mobtv_pg_channel_table_pane_t1

0x5cf5,	// (0x0001a256) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc68,	// (0x000241c9) single_mobtv_pg_channel_table_pane_t

0xd4ef,	// (0x00021a50) main_mobtv_info_pane_g1_ParamLimits

0xd4ef,	// (0x00021a50) main_mobtv_info_pane_g1

0xd50b,	// (0x00021a6c) main_mobtv_info_pane_t1_ParamLimits

0xd50b,	// (0x00021a6c) main_mobtv_info_pane_t1

0xd571,	// (0x00021ad2) main_mobtv_info_pane_t2_ParamLimits

0xd571,	// (0x00021ad2) main_mobtv_info_pane_t2

0x0002,

0xfc72,	// (0x000241d3) main_mobtv_info_pane_t_ParamLimits

0xfc72,	// (0x000241d3) main_mobtv_info_pane_t

0xd5f4,	// (0x00021b55) wait_bar_pane_cp05

0xd604,	// (0x00021b65) main_mobtv_loading_pane_g1_ParamLimits

0xd604,	// (0x00021b65) main_mobtv_loading_pane_g1

0xd610,	// (0x00021b71) main_mobtv_loading_pane_g2_ParamLimits

0xd610,	// (0x00021b71) main_mobtv_loading_pane_g2

0xd61c,	// (0x00021b7d) main_mobtv_loading_pane_g3_ParamLimits

0xd61c,	// (0x00021b7d) main_mobtv_loading_pane_g3

0x0002,

0xfc79,	// (0x000241da) main_mobtv_loading_pane_g_ParamLimits

0xfc79,	// (0x000241da) main_mobtv_loading_pane_g

0x5d03,	// (0x0001a264) main_mobtv_loading_pane_t1_ParamLimits

0x5d03,	// (0x0001a264) main_mobtv_loading_pane_t1

0x5d1b,	// (0x0001a27c) main_mobtv_loading_pane_t2_ParamLimits

0x5d1b,	// (0x0001a27c) main_mobtv_loading_pane_t2

0x0001,

0xfc80,	// (0x000241e1) main_mobtv_loading_pane_t_ParamLimits

0xfc80,	// (0x000241e1) main_mobtv_loading_pane_t

0xd628,	// (0x00021b89) wait_bar_pane_cp06_ParamLimits

0xd628,	// (0x00021b89) wait_bar_pane_cp06

0x5d3f,	// (0x0001a2a0) main_mobtv_programe_curr_pane_t1

0x5d4d,	// (0x0001a2ae) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc85,	// (0x000241e6) main_mobtv_programe_curr_pane_t

0x5d5b,	// (0x0001a2bc) main_mobtv_programe_next_pane_t1

0x5d69,	// (0x0001a2ca) main_mobtv_programe_next_pane_t2

0x5d77,	// (0x0001a2d8) main_mobtv_programe_next_pane_t3

0x0002,

0xfc8a,	// (0x000241eb) main_mobtv_programe_next_pane_t

0x106d,	// (0x000155ce) bg_popup_mobtv_noti_window_pane

0x5d85,	// (0x0001a2e6) popup_mobtv_noti_window_g1

0x5d8d,	// (0x0001a2ee) popup_mobtv_noti_window_t1

0x5d9b,	// (0x0001a2fc) popup_mobtv_noti_window_t2

0x0001,

0xfc91,	// (0x000241f2) popup_mobtv_noti_window_t

0x407b,	// (0x000185dc) bg_popup_mobtv_noti_window_pane_g1

0x106d,	// (0x000155ce) sc_clock_pane

0x106d,	// (0x000155ce) main_fs_bigclock_pane

0xce99,	// (0x000213fa) blid2_tripm_pane_t4_ParamLimits

0xce99,	// (0x000213fa) blid2_tripm_pane_t4

0xd634,	// (0x00021b95) sc_clock_pane_g1_ParamLimits

0xd634,	// (0x00021b95) sc_clock_pane_g1

0xd642,	// (0x00021ba3) sc_clock_pane_t1_ParamLimits

0xd642,	// (0x00021ba3) sc_clock_pane_t1

0xd655,	// (0x00021bb6) sc_clock_pane_t2_ParamLimits

0xd655,	// (0x00021bb6) sc_clock_pane_t2

0xd667,	// (0x00021bc8) sc_clock_pane_t3_ParamLimits

0xd667,	// (0x00021bc8) sc_clock_pane_t3

0x0004,

0xfc96,	// (0x000241f7) sc_clock_pane_t_ParamLimits

0xfc96,	// (0x000241f7) sc_clock_pane_t

0xe584,	// (0x00022ae5) main_fs_bigclock_indicator_pane_ParamLimits

0xe584,	// (0x00022ae5) main_fs_bigclock_indicator_pane

0xd6df,	// (0x00021c40) main_fs_bigclock_pane_g1_ParamLimits

0xd6df,	// (0x00021c40) main_fs_bigclock_pane_g1

0xe590,	// (0x00022af1) main_fs_bigclock_pane_t1_ParamLimits

0xe590,	// (0x00022af1) main_fs_bigclock_pane_t1

0xe5a2,	// (0x00022b03) main_fs_bigclock_pane_t2_ParamLimits

0xe5a2,	// (0x00022b03) main_fs_bigclock_pane_t2

0xe5b4,	// (0x00022b15) main_fs_bigclock_pane_t3_ParamLimits

0xe5b4,	// (0x00022b15) main_fs_bigclock_pane_t3

0x0002,

0xfe8b,	// (0x000243ec) main_fs_bigclock_pane_t_ParamLimits

0xfe8b,	// (0x000243ec) main_fs_bigclock_pane_t

0xe5c6,	// (0x00022b27) main_fs_bigclock_indicator_pane_g1

0x5a71,	// (0x00019fd2) ncim_query_content_pane_g2_ParamLimits

0x5a71,	// (0x00019fd2) ncim_query_content_pane_g2

0x0001,

0xfc23,	// (0x00024184) ncim_query_content_pane_g_ParamLimits

0xfc23,	// (0x00024184) ncim_query_content_pane_g

0xd679,	// (0x00021bda) sc_clock_pane_t4_ParamLimits

0xd679,	// (0x00021bda) sc_clock_pane_t4

0x10c0,	// (0x00015621) main_radioblah_pane

0x4c49,	// (0x000191aa) cell_call4_button_pane_t1_copy1_ParamLimits

0x4c49,	// (0x000191aa) cell_call4_button_pane_t1_copy1

0xd349,	// (0x000218aa) main_ncimui_pane_t1_ParamLimits

0xd349,	// (0x000218aa) main_ncimui_pane_t1

0xd363,	// (0x000218c4) main_ncimui_pane_t2_ParamLimits

0xd363,	// (0x000218c4) main_ncimui_pane_t2

0x0002,

0xfc1c,	// (0x0002417d) main_ncimui_pane_t_ParamLimits

0xfc1c,	// (0x0002417d) main_ncimui_pane_t

0x5ec5,	// (0x0001a426) main_radioblah_anim_pane_ParamLimits

0x5ec5,	// (0x0001a426) main_radioblah_anim_pane

0x5ed6,	// (0x0001a437) main_radioblah_info_pane_ParamLimits

0x5ed6,	// (0x0001a437) main_radioblah_info_pane

0x5eea,	// (0x0001a44b) main_radioblah_pane_t1_ParamLimits

0x5eea,	// (0x0001a44b) main_radioblah_pane_t1

0x5f06,	// (0x0001a467) main_radioblah_pane_t2_ParamLimits

0x5f06,	// (0x0001a467) main_radioblah_pane_t2

0x0003,

0xfcb7,	// (0x00024218) main_radioblah_pane_t_ParamLimits

0xfcb7,	// (0x00024218) main_radioblah_pane_t

0xd727,	// (0x00021c88) main_radioblah_rocker_ctrl_pane_ParamLimits

0xd727,	// (0x00021c88) main_radioblah_rocker_ctrl_pane

0x5f4e,	// (0x0001a4af) main_radioblah_info_pane_t1_ParamLimits

0x5f4e,	// (0x0001a4af) main_radioblah_info_pane_t1

0xd76c,	// (0x00021ccd) main_radioblah_info_pane_t2_ParamLimits

0xd76c,	// (0x00021ccd) main_radioblah_info_pane_t2

0x0003,

0xfcc0,	// (0x00024221) main_radioblah_info_pane_t_ParamLimits

0xfcc0,	// (0x00024221) main_radioblah_info_pane_t

0x407b,	// (0x000185dc) main_radioblah_rocker_ctrl_pane_g1

0xd814,	// (0x00021d75) main_radioblah_rocker_ctrl_pane_g2

0xd81c,	// (0x00021d7d) main_radioblah_rocker_ctrl_pane_g3

0xd824,	// (0x00021d85) main_radioblah_rocker_ctrl_pane_g4

0xd82c,	// (0x00021d8d) main_radioblah_rocker_ctrl_pane_g5

0xd834,	// (0x00021d95) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcc9,	// (0x0002422a) main_radioblah_rocker_ctrl_pane_g

0xd313,	// (0x00021874) main_cset_text2_pane_t1_copy1_ParamLimits

0x80dd,	// (0x0001c63e) cam4_image_uncrop_qvga_pane

0x81db,	// (0x0001c73c) vid4_image_uncrop_qcif_pane

0x8783,	// (0x0001cce4) cam6_image_uncrop_qvga_pane_ParamLimits

0x8783,	// (0x0001cce4) cam6_image_uncrop_qvga_pane

0x5697,	// (0x00019bf8) vid6_image_uncrop_qcif_pane_ParamLimits

0x5697,	// (0x00019bf8) vid6_image_uncrop_qcif_pane

0x106d,	// (0x000155ce) bg_popup_preview_window_pane_cp03

0x5a17,	// (0x00019f78) list_cset_text2_pane

0x5a1f,	// (0x00019f80) main_cset6_text2_pane_g1

0x5a27,	// (0x00019f88) main_cset6_text2_pane_t1

0xd83c,	// (0x00021d9d) list_cset_text2_pane_t1_ParamLimits

0xd83c,	// (0x00021d9d) list_cset_text2_pane_t1

0x10c0,	// (0x00015621) main_radioblah_pane_ParamLimits

0xd5e2,	// (0x00021b43) main_mobtv_info_pane_t3_ParamLimits

0xd5e2,	// (0x00021b43) main_mobtv_info_pane_t3

0xd715,	// (0x00021c76) main_radioblah_pane_g1

0xd740,	// (0x00021ca1) main_radioblah_info_pane_g1

0xd7bb,	// (0x00021d1c) main_radioblah_info_pane_t3_ParamLimits

0xd7bb,	// (0x00021d1c) main_radioblah_info_pane_t3

0x9e08,	// (0x0001e369) highlight_cell_cale_month_pane_ParamLimits

0x9e08,	// (0x0001e369) highlight_cell_cale_month_pane

0x106d,	// (0x000155ce) main_phob_fisheye_pane

0x4438,	// (0x00018999) scroll_pane_cp0031_ParamLimits

0x4438,	// (0x00018999) scroll_pane_cp0031

0x57a1,	// (0x00019d02) wait_bar_pane_cp08_ParamLimits

0xd152,	// (0x000216b3) cset_list_set_pane_copy1_ParamLimits

0x5f88,	// (0x0001a4e9) highlight_cell_cale_month_pane_g1

0xd853,	// (0x00021db4) highlight_cell_cale_month_pane_t1

0x5f90,	// (0x0001a4f1) list_gen_pane_cp01

0x4ea7,	// (0x00019408) scroll_pane_01

0x6222,	// (0x0001a783) list_single_double_fisheye_pane

0xd861,	// (0x00021dc2) list_double_fisheye_pane_g1_ParamLimits

0xd861,	// (0x00021dc2) list_double_fisheye_pane_g1

0xd86d,	// (0x00021dce) list_double_fisheye_pane_g2_ParamLimits

0xd86d,	// (0x00021dce) list_double_fisheye_pane_g2

0xd881,	// (0x00021de2) list_double_fisheye_pane_g3_ParamLimits

0xd881,	// (0x00021de2) list_double_fisheye_pane_g3

0x0004,

0xfcd6,	// (0x00024237) list_double_fisheye_pane_g_ParamLimits

0xfcd6,	// (0x00024237) list_double_fisheye_pane_g

0xd8aa,	// (0x00021e0b) list_double_fisheye_pane_t1_ParamLimits

0xd8aa,	// (0x00021e0b) list_double_fisheye_pane_t1

0xd8c5,	// (0x00021e26) list_double_fisheye_pane_t2_ParamLimits

0xd8c5,	// (0x00021e26) list_double_fisheye_pane_t2

0x0001,

0xfce1,	// (0x00024242) list_double_fisheye_pane_t_ParamLimits

0xfce1,	// (0x00024242) list_double_fisheye_pane_t

0x106d,	// (0x000155ce) main_call5_pane

0xd69f,	// (0x00021c00) sc_swipe_pane_ParamLimits

0xd69f,	// (0x00021c00) sc_swipe_pane

0xd8f3,	// (0x00021e54) call5_image_pane_ParamLimits

0xd8f3,	// (0x00021e54) call5_image_pane

0xd8ff,	// (0x00021e60) call5_swipe_1_pane_ParamLimits

0xd8ff,	// (0x00021e60) call5_swipe_1_pane

0xd90b,	// (0x00021e6c) call5_swipe_2_pane_ParamLimits

0xd90b,	// (0x00021e6c) call5_swipe_2_pane

0xd923,	// (0x00021e84) popup_call5_audio_first_window_ParamLimits

0xd923,	// (0x00021e84) popup_call5_audio_first_window

0x42aa,	// (0x0001880b) call5_swipe_1_pane_g1_ParamLimits

0x42aa,	// (0x0001880b) call5_swipe_1_pane_g1

0x5f99,	// (0x0001a4fa) call5_swipe_1_pane_g2_ParamLimits

0x5f99,	// (0x0001a4fa) call5_swipe_1_pane_g2

0x0001,

0xfce6,	// (0x00024247) call5_swipe_1_pane_g_ParamLimits

0xfce6,	// (0x00024247) call5_swipe_1_pane_g

0x5fa5,	// (0x0001a506) call5_swipe_1_pane_t1_ParamLimits

0x5fa5,	// (0x0001a506) call5_swipe_1_pane_t1

0x42aa,	// (0x0001880b) call5_swipe_2_pane_g1_ParamLimits

0x42aa,	// (0x0001880b) call5_swipe_2_pane_g1

0x5fba,	// (0x0001a51b) call5_swipe_2_pane_g2_ParamLimits

0x5fba,	// (0x0001a51b) call5_swipe_2_pane_g2

0x0001,

0xfceb,	// (0x0002424c) call5_swipe_2_pane_g_ParamLimits

0xfceb,	// (0x0002424c) call5_swipe_2_pane_g

0x5fc6,	// (0x0001a527) call5_swipe_2_pane_t1_ParamLimits

0x5fc6,	// (0x0001a527) call5_swipe_2_pane_t1

0x5fdb,	// (0x0001a53c) sc_swipe_pane_g1_ParamLimits

0x5fdb,	// (0x0001a53c) sc_swipe_pane_g1

0x5fe8,	// (0x0001a549) sc_swipe_pane_g2_ParamLimits

0x5fe8,	// (0x0001a549) sc_swipe_pane_g2

0x0001,

0xfcf0,	// (0x00024251) sc_swipe_pane_g_ParamLimits

0xfcf0,	// (0x00024251) sc_swipe_pane_g

0x5ff4,	// (0x0001a555) sc_swipe_pane_t1_ParamLimits

0x5ff4,	// (0x0001a555) sc_swipe_pane_t1

0x106d,	// (0x000155ce) main_cmail_launcher_pane

0xd92f,	// (0x00021e90) aid_size_cell_cmail_l_ParamLimits

0xd92f,	// (0x00021e90) aid_size_cell_cmail_l

0xd93f,	// (0x00021ea0) grid_cmail_l_pane_ParamLimits

0xd93f,	// (0x00021ea0) grid_cmail_l_pane

0xd94b,	// (0x00021eac) cell_cmail_l_pane_ParamLimits

0xd94b,	// (0x00021eac) cell_cmail_l_pane

0xd95d,	// (0x00021ebe) cell_cmail_l_pane_g1_ParamLimits

0xd95d,	// (0x00021ebe) cell_cmail_l_pane_g1

0xd96d,	// (0x00021ece) cell_cmail_l_pane_t1_ParamLimits

0xd96d,	// (0x00021ece) cell_cmail_l_pane_t1

0x6009,	// (0x0001a56a) cell_cmail_l_pane_t2_ParamLimits

0x6009,	// (0x0001a56a) cell_cmail_l_pane_t2

0x0001,

0xfcf5,	// (0x00024256) cell_cmail_l_pane_t_ParamLimits

0xfcf5,	// (0x00024256) cell_cmail_l_pane_t

0x10c0,	// (0x00015621) grid_highlight_pane_cp018_ParamLimits

0x10c0,	// (0x00015621) grid_highlight_pane_cp018

0x88a6,	// (0x0001ce07) main2_pane_ParamLimits

0x88a6,	// (0x0001ce07) main2_pane

0x192e,	// (0x00015e8f) popup_sp_fs_action_menu_bg_pane_g1

0x1936,	// (0x00015e97) popup_sp_fs_action_menu_bg_pane_g2

0x193e,	// (0x00015e9f) popup_sp_fs_action_menu_bg_pane_g3

0x1946,	// (0x00015ea7) popup_sp_fs_action_menu_bg_pane_g4

0x194e,	// (0x00015eaf) popup_sp_fs_action_menu_bg_pane_g5

0x1956,	// (0x00015eb7) popup_sp_fs_action_menu_bg_pane_g6

0x195e,	// (0x00015ebf) popup_sp_fs_action_menu_bg_pane_g7

0x1966,	// (0x00015ec7) popup_sp_fs_action_menu_bg_pane_g8

0x196e,	// (0x00015ecf) popup_sp_fs_action_menu_bg_pane_g9

0x1976,	// (0x00015ed7) popup_sp_fs_action_menu_bg_pane_g10

0x1976,	// (0x00015ed7) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1ac,	// (0x0002370d) popup_sp_fs_action_menu_bg_pane_g

0x1b4d,	// (0x000160ae) list_medium_line_x2_t3_g3_g1_ParamLimits

0x1b4d,	// (0x000160ae) list_medium_line_x2_t3_g3_g1

0x1b59,	// (0x000160ba) list_medium_line_x2_t3_g3_g2_ParamLimits

0x1b59,	// (0x000160ba) list_medium_line_x2_t3_g3_g2

0x1b65,	// (0x000160c6) list_medium_line_x2_t3_g3_g3_ParamLimits

0x1b65,	// (0x000160c6) list_medium_line_x2_t3_g3_g3

0x0002,

0xf25c,	// (0x000237bd) list_medium_line_x2_t3_g3_g_ParamLimits

0xf25c,	// (0x000237bd) list_medium_line_x2_t3_g3_g

0x1b71,	// (0x000160d2) list_medium_line_x2_t3_g3_t1_ParamLimits

0x1b71,	// (0x000160d2) list_medium_line_x2_t3_g3_t1

0x928d,	// (0x0001d7ee) list_medium_line_x2_t3_g3_t2_ParamLimits

0x928d,	// (0x0001d7ee) list_medium_line_x2_t3_g3_t2

0x1b86,	// (0x000160e7) list_medium_line_x2_t3_g3_t3_ParamLimits

0x1b86,	// (0x000160e7) list_medium_line_x2_t3_g3_t3

0x0002,

0xf263,	// (0x000237c4) list_medium_line_x2_t3_g3_t_ParamLimits

0xf263,	// (0x000237c4) list_medium_line_x2_t3_g3_t

0x1b4d,	// (0x000160ae) list_medium_line_x2_t3_g2_g1_ParamLimits

0x1b4d,	// (0x000160ae) list_medium_line_x2_t3_g2_g1

0x1b65,	// (0x000160c6) list_medium_line_x2_t3_g2_g2_ParamLimits

0x1b65,	// (0x000160c6) list_medium_line_x2_t3_g2_g2

0x0001,

0xf26a,	// (0x000237cb) list_medium_line_x2_t3_g2_g_ParamLimits

0xf26a,	// (0x000237cb) list_medium_line_x2_t3_g2_g

0x1b9b,	// (0x000160fc) list_medium_line_x2_t3_g2_t1_ParamLimits

0x1b9b,	// (0x000160fc) list_medium_line_x2_t3_g2_t1

0x1bb1,	// (0x00016112) list_medium_line_x2_t3_g2_t2_ParamLimits

0x1bb1,	// (0x00016112) list_medium_line_x2_t3_g2_t2

0x1b86,	// (0x000160e7) list_medium_line_x2_t3_g2_t3_ParamLimits

0x1b86,	// (0x000160e7) list_medium_line_x2_t3_g2_t3

0x0002,

0xf26f,	// (0x000237d0) list_medium_line_x2_t3_g2_t_ParamLimits

0xf26f,	// (0x000237d0) list_medium_line_x2_t3_g2_t

0x1b4d,	// (0x000160ae) list_medium_line_x2_t4_g4_g1_ParamLimits

0x1b4d,	// (0x000160ae) list_medium_line_x2_t4_g4_g1

0x1bc3,	// (0x00016124) list_medium_line_x2_t4_g4_g2_ParamLimits

0x1bc3,	// (0x00016124) list_medium_line_x2_t4_g4_g2

0x1b59,	// (0x000160ba) list_medium_line_x2_t4_g4_g3_ParamLimits

0x1b59,	// (0x000160ba) list_medium_line_x2_t4_g4_g3

0x1bcf,	// (0x00016130) list_medium_line_x2_t4_g4_g4_ParamLimits

0x1bcf,	// (0x00016130) list_medium_line_x2_t4_g4_g4

0x0003,

0xf276,	// (0x000237d7) list_medium_line_x2_t4_g4_g_ParamLimits

0xf276,	// (0x000237d7) list_medium_line_x2_t4_g4_g

0x929f,	// (0x0001d800) list_medium_line_x2_t4_g4_t1_ParamLimits

0x929f,	// (0x0001d800) list_medium_line_x2_t4_g4_t1

0x92b9,	// (0x0001d81a) list_medium_line_x2_t4_g4_t2_ParamLimits

0x92b9,	// (0x0001d81a) list_medium_line_x2_t4_g4_t2

0x92ce,	// (0x0001d82f) list_medium_line_x2_t4_g4_t3_ParamLimits

0x92ce,	// (0x0001d82f) list_medium_line_x2_t4_g4_t3

0x1bdb,	// (0x0001613c) list_medium_line_x2_t4_g4_t4_ParamLimits

0x1bdb,	// (0x0001613c) list_medium_line_x2_t4_g4_t4

0x0003,

0xf27f,	// (0x000237e0) list_medium_line_x2_t4_g4_t_ParamLimits

0xf27f,	// (0x000237e0) list_medium_line_x2_t4_g4_t

0x1b4d,	// (0x000160ae) list_medium_line_x2_t2_g4_g1_ParamLimits

0x1b4d,	// (0x000160ae) list_medium_line_x2_t2_g4_g1

0x1bc3,	// (0x00016124) list_medium_line_x2_t2_g4_g2_ParamLimits

0x1bc3,	// (0x00016124) list_medium_line_x2_t2_g4_g2

0x1b59,	// (0x000160ba) list_medium_line_x2_t2_g4_g3_ParamLimits

0x1b59,	// (0x000160ba) list_medium_line_x2_t2_g4_g3

0x1b65,	// (0x000160c6) list_medium_line_x2_t2_g4_g4_ParamLimits

0x1b65,	// (0x000160c6) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2e6,	// (0x00023847) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2e6,	// (0x00023847) list_medium_line_x2_t2_g4_g

0x1ed3,	// (0x00016434) list_medium_line_x2_t2_g4_t1_ParamLimits

0x1ed3,	// (0x00016434) list_medium_line_x2_t2_g4_t1

0x1b86,	// (0x000160e7) list_medium_line_x2_t2_g4_t2_ParamLimits

0x1b86,	// (0x000160e7) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2ef,	// (0x00023850) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2ef,	// (0x00023850) list_medium_line_x2_t2_g4_t

0x1b4d,	// (0x000160ae) list_medium_line_x2_t2_g3_g1_ParamLimits

0x1b4d,	// (0x000160ae) list_medium_line_x2_t2_g3_g1

0x1b59,	// (0x000160ba) list_medium_line_x2_t2_g3_g2_ParamLimits

0x1b59,	// (0x000160ba) list_medium_line_x2_t2_g3_g2

0x1b65,	// (0x000160c6) list_medium_line_x2_t2_g3_g3_ParamLimits

0x1b65,	// (0x000160c6) list_medium_line_x2_t2_g3_g3

0x0002,

0xf25c,	// (0x000237bd) list_medium_line_x2_t2_g3_g_ParamLimits

0xf25c,	// (0x000237bd) list_medium_line_x2_t2_g3_g

0x1ee8,	// (0x00016449) list_medium_line_x2_t2_g3_t1_ParamLimits

0x1ee8,	// (0x00016449) list_medium_line_x2_t2_g3_t1

0x1b86,	// (0x000160e7) list_medium_line_x2_t2_g3_t2_ParamLimits

0x1b86,	// (0x000160e7) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2f4,	// (0x00023855) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2f4,	// (0x00023855) list_medium_line_x2_t2_g3_t

0x9f2e,	// (0x0001e48f) main_sp_fs_list_pane_ParamLimits

0x9f2e,	// (0x0001e48f) main_sp_fs_list_pane

0x9f3b,	// (0x0001e49c) sp_fs_scroll_pane_ParamLimits

0x9f3b,	// (0x0001e49c) sp_fs_scroll_pane

0x9f48,	// (0x0001e4a9) list_medium_line_x2_t3_t1

0x9f58,	// (0x0001e4b9) list_medium_line_x2_t3_t2

0x2142,	// (0x000166a3) list_medium_line_x2_t3_t3

0x0002,

0xf33f,	// (0x000238a0) list_medium_line_x2_t3_t

0x9f66,	// (0x0001e4c7) list_medium_line_x3_t4_t1

0x9f76,	// (0x0001e4d7) list_medium_line_x3_t4_t2

0x2150,	// (0x000166b1) list_medium_line_x3_t4_t3

0x215e,	// (0x000166bf) list_medium_line_x3_t4_t4

0x0003,

0xf346,	// (0x000238a7) list_medium_line_x3_t4_t

0x9f84,	// (0x0001e4e5) list_medium_line_x4_t5_t1

0x9f94,	// (0x0001e4f5) list_medium_line_x4_t5_t2

0x2150,	// (0x000166b1) list_medium_line_x4_t5_t3

0x216c,	// (0x000166cd) list_medium_line_x4_t5_t4

0x215e,	// (0x000166bf) list_medium_line_x4_t5_t5

0x0004,

0xf34f,	// (0x000238b0) list_medium_line_x4_t5_t

0x1b4d,	// (0x000160ae) list_medium_line_t4_g4_g1_ParamLimits

0x1b4d,	// (0x000160ae) list_medium_line_t4_g4_g1

0x1bcf,	// (0x00016130) list_medium_line_t4_g4_g2_ParamLimits

0x1bcf,	// (0x00016130) list_medium_line_t4_g4_g2

0x217a,	// (0x000166db) list_medium_line_t4_g4_g3_ParamLimits

0x217a,	// (0x000166db) list_medium_line_t4_g4_g3

0x1b65,	// (0x000160c6) list_medium_line_t4_g4_g4_ParamLimits

0x1b65,	// (0x000160c6) list_medium_line_t4_g4_g4

0x0003,

0xf35a,	// (0x000238bb) list_medium_line_t4_g4_g_ParamLimits

0xf35a,	// (0x000238bb) list_medium_line_t4_g4_g

0x2186,	// (0x000166e7) list_medium_line_t4_g4_t1_ParamLimits

0x2186,	// (0x000166e7) list_medium_line_t4_g4_t1

0x219b,	// (0x000166fc) list_medium_line_t4_g4_t2_ParamLimits

0x219b,	// (0x000166fc) list_medium_line_t4_g4_t2

0x21b0,	// (0x00016711) list_medium_line_t4_g4_t3_ParamLimits

0x21b0,	// (0x00016711) list_medium_line_t4_g4_t3

0x21c5,	// (0x00016726) list_medium_line_t4_g4_t4_ParamLimits

0x21c5,	// (0x00016726) list_medium_line_t4_g4_t4

0x0003,

0xf363,	// (0x000238c4) list_medium_line_t4_g4_t_ParamLimits

0xf363,	// (0x000238c4) list_medium_line_t4_g4_t

0xa041,	// (0x0001e5a2) chi_dic_find_pane_g1

0xacfa,	// (0x0001f25b) main_tport_pane

0x5010,	// (0x00019571) list_medium_line_plain_t1

0x1b4d,	// (0x000160ae) list_medium_line_t2_g2_g1_ParamLimits

0x1b4d,	// (0x000160ae) list_medium_line_t2_g2_g1

0x1b59,	// (0x000160ba) list_medium_line_t2_g2_g2_ParamLimits

0x1b59,	// (0x000160ba) list_medium_line_t2_g2_g2

0x0001,

0xfa32,	// (0x00023f93) list_medium_line_t2_g2_g_ParamLimits

0xfa32,	// (0x00023f93) list_medium_line_t2_g2_g

0xc7d8,	// (0x00020d39) list_medium_line_t2_g2_t1_ParamLimits

0xc7d8,	// (0x00020d39) list_medium_line_t2_g2_t1

0xc7ef,	// (0x00020d50) list_medium_line_t2_g2_t2_ParamLimits

0xc7ef,	// (0x00020d50) list_medium_line_t2_g2_t2

0x0001,

0xfa37,	// (0x00023f98) list_medium_line_t2_g2_t_ParamLimits

0xfa37,	// (0x00023f98) list_medium_line_t2_g2_t

0x53fc,	// (0x0001995d) aid_sp_fs_list_icon_a_sm

0x5404,	// (0x00019965) aid_sp_fs_list_icon_d

0x540c,	// (0x0001996d) aid_sp_fs_text_primary

0x5415,	// (0x00019976) aid_sp_fs_text_secondary

0x541e,	// (0x0001997f) list_medium_line

0x541e,	// (0x0001997f) list_medium_line_g2

0x541e,	// (0x0001997f) list_medium_line_g3

0x541e,	// (0x0001997f) list_medium_line_plain

0x541e,	// (0x0001997f) list_medium_line_plain_t2

0x541e,	// (0x0001997f) list_medium_line_plain_t3

0x541e,	// (0x0001997f) list_medium_line_right_icon

0x541e,	// (0x0001997f) list_medium_line_right_iconx2

0x541e,	// (0x0001997f) list_medium_line_t2

0x541e,	// (0x0001997f) list_medium_line_t2_g2

0x541e,	// (0x0001997f) list_medium_line_t2_g3

0x541e,	// (0x0001997f) list_medium_line_t2_right_icon

0x541e,	// (0x0001997f) list_medium_line_t2_right_iconx2

0x541e,	// (0x0001997f) list_medium_line_t3

0x541e,	// (0x0001997f) list_medium_line_t3_g2

0x541e,	// (0x0001997f) list_medium_line_t3_g3

0x541e,	// (0x0001997f) list_medium_line_t3_right_iconx2

0x5427,	// (0x00019988) list_medium_line_t4_g4

0x5430,	// (0x00019991) list_medium_line_x2

0x5430,	// (0x00019991) list_medium_line_x2_t2_g2

0x5430,	// (0x00019991) list_medium_line_x2_t2_g3

0x5430,	// (0x00019991) list_medium_line_x2_t2_g4

0x5430,	// (0x00019991) list_medium_line_x2_t3

0x5430,	// (0x00019991) list_medium_line_x2_t3_g2

0x5430,	// (0x00019991) list_medium_line_x2_t3_g3

0x5430,	// (0x00019991) list_medium_line_x2_t3_g4

0x5430,	// (0x00019991) list_medium_line_x2_t4_g2

0x5430,	// (0x00019991) list_medium_line_x2_t4_g4

0x5439,	// (0x0001999a) list_medium_line_x3

0x5439,	// (0x0001999a) list_medium_line_x3_t4

0x5439,	// (0x0001999a) list_medium_line_x3_t4_g4

0x5427,	// (0x00019988) list_medium_line_x4_t4

0x5427,	// (0x00019988) list_medium_line_x4_t4_g7

0x5427,	// (0x00019988) list_medium_line_x4_t5

0x5442,	// (0x000199a3) list_single_fs_dyc_pane_ParamLimits

0x5442,	// (0x000199a3) list_single_fs_dyc_pane

0x1b4d,	// (0x000160ae) list_medium_line_x4_t4_g7_g1_ParamLimits

0x1b4d,	// (0x000160ae) list_medium_line_x4_t4_g7_g1

0x594c,	// (0x00019ead) list_medium_line_x4_t4_g7_g2_ParamLimits

0x594c,	// (0x00019ead) list_medium_line_x4_t4_g7_g2

0x5958,	// (0x00019eb9) list_medium_line_x4_t4_g7_g3_ParamLimits

0x5958,	// (0x00019eb9) list_medium_line_x4_t4_g7_g3

0x5967,	// (0x00019ec8) list_medium_line_x4_t4_g7_g4_ParamLimits

0x5967,	// (0x00019ec8) list_medium_line_x4_t4_g7_g4

0x5973,	// (0x00019ed4) list_medium_line_x4_t4_g7_g5_ParamLimits

0x5973,	// (0x00019ed4) list_medium_line_x4_t4_g7_g5

0x5982,	// (0x00019ee3) list_medium_line_x4_t4_g7_g6_ParamLimits

0x5982,	// (0x00019ee3) list_medium_line_x4_t4_g7_g6

0x5991,	// (0x00019ef2) list_medium_line_x4_t4_g7_g7_ParamLimits

0x5991,	// (0x00019ef2) list_medium_line_x4_t4_g7_g7

0x0006,

0xfc02,	// (0x00024163) list_medium_line_x4_t4_g7_g_ParamLimits

0xfc02,	// (0x00024163) list_medium_line_x4_t4_g7_g

0x599d,	// (0x00019efe) list_medium_line_x4_t4_g7_t1_ParamLimits

0x599d,	// (0x00019efe) list_medium_line_x4_t4_g7_t1

0x59b2,	// (0x00019f13) list_medium_line_x4_t4_g7_t2_ParamLimits

0x59b2,	// (0x00019f13) list_medium_line_x4_t4_g7_t2

0x59c7,	// (0x00019f28) list_medium_line_x4_t4_g7_t3_ParamLimits

0x59c7,	// (0x00019f28) list_medium_line_x4_t4_g7_t3

0x59dc,	// (0x00019f3d) list_medium_line_x4_t4_g7_t4_ParamLimits

0x59dc,	// (0x00019f3d) list_medium_line_x4_t4_g7_t4

0x59ee,	// (0x00019f4f) list_medium_line_x4_t4_g7_t5_ParamLimits

0x59ee,	// (0x00019f4f) list_medium_line_x4_t4_g7_t5

0x0004,

0xfc11,	// (0x00024172) list_medium_line_x4_t4_g7_t_ParamLimits

0xfc11,	// (0x00024172) list_medium_line_x4_t4_g7_t

0x5a00,	// (0x00019f61) list_single_dyc_row_pane_ParamLimits

0x5a00,	// (0x00019f61) list_single_dyc_row_pane

0xd8e7,	// (0x00021e48) call5_gesture_pane_ParamLimits

0xd8e7,	// (0x00021e48) call5_gesture_pane

0xd917,	// (0x00021e78) call5_windows_pane_ParamLimits

0xd917,	// (0x00021e78) call5_windows_pane

0xd983,	// (0x00021ee4) call5_swipe_1_pane_cp_ParamLimits

0xd983,	// (0x00021ee4) call5_swipe_1_pane_cp

0xd98f,	// (0x00021ef0) call5_swipe_2_pane_cp_ParamLimits

0xd98f,	// (0x00021ef0) call5_swipe_2_pane_cp

0x2690,	// (0x00016bf1) call5_image_pane_cp

0xd99b,	// (0x00021efc) popup_call5_audio_first_window_cp_ParamLimits

0xd99b,	// (0x00021efc) popup_call5_audio_first_window_cp

0x5fdb,	// (0x0001a53c) call5_swipe_1_pane_g1_cp_ParamLimits

0x5fdb,	// (0x0001a53c) call5_swipe_1_pane_g1_cp

0x601b,	// (0x0001a57c) call5_swipe_1_pane_g2_cp

0x5ff4,	// (0x0001a555) call5_swipe_1_pane_t1_cp_ParamLimits

0x5ff4,	// (0x0001a555) call5_swipe_1_pane_t1_cp

0x5fdb,	// (0x0001a53c) call5_swipe_2_pane_g1_cp_ParamLimits

0x5fdb,	// (0x0001a53c) call5_swipe_2_pane_g1_cp

0x6023,	// (0x0001a584) call5_swipe_2_pane_g2_cp

0x602b,	// (0x0001a58c) call5_swipe_2_pane_t1_cp_ParamLimits

0x602b,	// (0x0001a58c) call5_swipe_2_pane_t1_cp

0x10c0,	// (0x00015621) main_sp_fs_email_pane

0x6040,	// (0x0001a5a1) main_sp_fs_listscroll_pane_te

0xd9a7,	// (0x00021f08) popup_sp_fs_action_menu_pane_ParamLimits

0xd9a7,	// (0x00021f08) popup_sp_fs_action_menu_pane

0x407b,	// (0x000185dc) bg_sp_fs_ctrlbar_pane_g1

0x6049,	// (0x0001a5aa) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x6052,	// (0x0001a5b3) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x605b,	// (0x0001a5bc) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x407b,	// (0x000185dc) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcfa,	// (0x0002425b) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x3e68,	// (0x000183c9) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x3e68,	// (0x000183c9) bg_sp_fs_ctrlbar_ddmenu_pane

0x6064,	// (0x0001a5c5) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x6064,	// (0x0001a5c5) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x1b4d,	// (0x000160ae) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x1b4d,	// (0x000160ae) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfd03,	// (0x00024264) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfd03,	// (0x00024264) main_sp_fs_ctrlbar_ddmenu_pane_g

0x6070,	// (0x0001a5d1) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x6070,	// (0x0001a5d1) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x608a,	// (0x0001a5eb) list_medium_line_t2_right_icon_g1

0xd9d7,	// (0x00021f38) list_medium_line_t2_right_icon_t1

0xd9e6,	// (0x00021f47) list_medium_line_t2_right_icon_t2

0x0001,

0xfd08,	// (0x00024269) list_medium_line_t2_right_icon_t

0x3b86,	// (0x000180e7) bg_sp_fs_ctrlbar_pane_ParamLimits

0x3b86,	// (0x000180e7) bg_sp_fs_ctrlbar_pane

0xda49,	// (0x00021faa) main_sp_fs_ctrlbar_button_pane_cp01

0xda51,	// (0x00021fb2) main_sp_fs_ctrlbar_ddmenu_pane

0x60da,	// (0x0001a63b) main_sp_fs_ctrlbar_pane_g1

0x60e6,	// (0x0001a647) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfd0d,	// (0x0002426e) main_sp_fs_ctrlbar_pane_g

0x60f2,	// (0x0001a653) main_sp_fs_ctrlbar_pane_t1

0xda5b,	// (0x00021fbc) main_sp_fs_ctrlbar_pane

0xda73,	// (0x00021fd4) main_sp_fs_listscroll_pane_te_cp01

0xda84,	// (0x00021fe5) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0xda84,	// (0x00021fe5) popup_sp_fs_action_menu_pane_cp01

0x10c0,	// (0x00015621) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x10c0,	// (0x00015621) bg_sp_fs_highlight_list_pane_cp01

0xdaa0,	// (0x00022001) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xdaa0,	// (0x00022001) sp_fs_action_menu_list_gene_pane_g1

0x6107,	// (0x0001a668) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x6107,	// (0x0001a668) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfd12,	// (0x00024273) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfd12,	// (0x00024273) sp_fs_action_menu_list_gene_pane_g

0xdaaf,	// (0x00022010) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xdaaf,	// (0x00022010) sp_fs_action_menu_list_gene_pane_t1

0xdac7,	// (0x00022028) sp_fs_action_menu_list_gene_pane_ParamLimits

0xdac7,	// (0x00022028) sp_fs_action_menu_list_gene_pane

0x6114,	// (0x0001a675) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x6114,	// (0x0001a675) popup_sp_fs_action_menu_bg_pane

0xdae4,	// (0x00022045) sp_fs_action_menu_list_pane_ParamLimits

0xdae4,	// (0x00022045) sp_fs_action_menu_list_pane

0x6122,	// (0x0001a683) sp_fs_scroll_pane_cp01_ParamLimits

0x6122,	// (0x0001a683) sp_fs_scroll_pane_cp01

0xdb00,	// (0x00022061) list_medium_line_plain_t2_t1

0xdb0f,	// (0x00022070) list_medium_line_plain_t2_t2

0x0001,

0xfd17,	// (0x00024278) list_medium_line_plain_t2_t

0xdb1d,	// (0x0002207e) list_medium_line_plain_t3_t1

0xdb2d,	// (0x0002208e) list_medium_line_plain_t3_t2

0xdb3b,	// (0x0002209c) list_medium_line_plain_t3_t3

0x0002,

0xfd1c,	// (0x0002427d) list_medium_line_plain_t3_t

0x1b4d,	// (0x000160ae) list_medium_line_x2_t2_g2_g1_ParamLimits

0x1b4d,	// (0x000160ae) list_medium_line_x2_t2_g2_g1

0x1b65,	// (0x000160c6) list_medium_line_x2_t2_g2_g2_ParamLimits

0x1b65,	// (0x000160c6) list_medium_line_x2_t2_g2_g2

0x0001,

0xf26a,	// (0x000237cb) list_medium_line_x2_t2_g2_g_ParamLimits

0xf26a,	// (0x000237cb) list_medium_line_x2_t2_g2_g

0x2186,	// (0x000166e7) list_medium_line_x2_t2_g2_t1_ParamLimits

0x2186,	// (0x000166e7) list_medium_line_x2_t2_g2_t1

0x1b86,	// (0x000160e7) list_medium_line_x2_t2_g2_t2_ParamLimits

0x1b86,	// (0x000160e7) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd23,	// (0x00024284) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd23,	// (0x00024284) list_medium_line_x2_t2_g2_t

0x1b4d,	// (0x000160ae) list_medium_line_x2_t4_g2_g1_ParamLimits

0x1b4d,	// (0x000160ae) list_medium_line_x2_t4_g2_g1

0x1b65,	// (0x000160c6) list_medium_line_x2_t4_g2_g2_ParamLimits

0x1b65,	// (0x000160c6) list_medium_line_x2_t4_g2_g2

0x0001,

0xf26a,	// (0x000237cb) list_medium_line_x2_t4_g2_g_ParamLimits

0xf26a,	// (0x000237cb) list_medium_line_x2_t4_g2_g

0xdb49,	// (0x000220aa) list_medium_line_x2_t4_g2_t1_ParamLimits

0xdb49,	// (0x000220aa) list_medium_line_x2_t4_g2_t1

0xdb63,	// (0x000220c4) list_medium_line_x2_t4_g2_t2_ParamLimits

0xdb63,	// (0x000220c4) list_medium_line_x2_t4_g2_t2

0xdb78,	// (0x000220d9) list_medium_line_x2_t4_g2_t3_ParamLimits

0xdb78,	// (0x000220d9) list_medium_line_x2_t4_g2_t3

0x1b86,	// (0x000160e7) list_medium_line_x2_t4_g2_t4_ParamLimits

0x1b86,	// (0x000160e7) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd28,	// (0x00024289) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd28,	// (0x00024289) list_medium_line_x2_t4_g2_t

0x6148,	// (0x0001a6a9) list_medium_line_t3_right_iconx2_g1

0x608a,	// (0x0001a5eb) list_medium_line_t3_right_iconx2_g2

0xdb8d,	// (0x000220ee) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd31,	// (0x00024292) list_medium_line_t3_right_iconx2_g

0x6092,	// (0x0001a5f3) list_medium_line_t3_right_iconx2_t1

0xdb95,	// (0x000220f6) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd38,	// (0x00024299) list_medium_line_t3_right_iconx2_t

0x1b4d,	// (0x000160ae) list_medium_line_x3_t4_g4_g1_ParamLimits

0x1b4d,	// (0x000160ae) list_medium_line_x3_t4_g4_g1

0x1b59,	// (0x000160ba) list_medium_line_x3_t4_g4_g2_ParamLimits

0x1b59,	// (0x000160ba) list_medium_line_x3_t4_g4_g2

0x1bcf,	// (0x00016130) list_medium_line_x3_t4_g4_g3_ParamLimits

0x1bcf,	// (0x00016130) list_medium_line_x3_t4_g4_g3

0x6150,	// (0x0001a6b1) list_medium_line_x3_t4_g4_g4_ParamLimits

0x6150,	// (0x0001a6b1) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd3d,	// (0x0002429e) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd3d,	// (0x0002429e) list_medium_line_x3_t4_g4_g

0xc7d8,	// (0x00020d39) list_medium_line_x3_t4_g4_t1_ParamLimits

0xc7d8,	// (0x00020d39) list_medium_line_x3_t4_g4_t1

0xc7ef,	// (0x00020d50) list_medium_line_x3_t4_g4_t2_ParamLimits

0xc7ef,	// (0x00020d50) list_medium_line_x3_t4_g4_t2

0x219b,	// (0x000166fc) list_medium_line_x3_t4_g4_t3_ParamLimits

0x219b,	// (0x000166fc) list_medium_line_x3_t4_g4_t3

0x615c,	// (0x0001a6bd) list_medium_line_x3_t4_g4_t4_ParamLimits

0x615c,	// (0x0001a6bd) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd46,	// (0x000242a7) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd46,	// (0x000242a7) list_medium_line_x3_t4_g4_t

0xdba3,	// (0x00022104) list_single_dyc_row_text_pane_t1_ParamLimits

0xdba3,	// (0x00022104) list_single_dyc_row_text_pane_t1

0xdbda,	// (0x0002213b) list_single_dyc_row_text_pane_t2_ParamLimits

0xdbda,	// (0x0002213b) list_single_dyc_row_text_pane_t2

0x6179,	// (0x0001a6da) list_single_dyc_row_text_pane_t3_ParamLimits

0x6179,	// (0x0001a6da) list_single_dyc_row_text_pane_t3

0x0002,

0xfd4f,	// (0x000242b0) list_single_dyc_row_text_pane_t_ParamLimits

0xfd4f,	// (0x000242b0) list_single_dyc_row_text_pane_t

0x618b,	// (0x0001a6ec) list_single_dyc_row_pane_g1_ParamLimits

0x618b,	// (0x0001a6ec) list_single_dyc_row_pane_g1

0x6197,	// (0x0001a6f8) list_single_dyc_row_pane_g2_ParamLimits

0x6197,	// (0x0001a6f8) list_single_dyc_row_pane_g2

0x61a3,	// (0x0001a704) list_single_dyc_row_pane_g3_ParamLimits

0x61a3,	// (0x0001a704) list_single_dyc_row_pane_g3

0x61af,	// (0x0001a710) list_single_dyc_row_pane_g4_ParamLimits

0x61af,	// (0x0001a710) list_single_dyc_row_pane_g4

0x0003,

0xfd56,	// (0x000242b7) list_single_dyc_row_pane_g_ParamLimits

0xfd56,	// (0x000242b7) list_single_dyc_row_pane_g

0x61bb,	// (0x0001a71c) list_single_dyc_row_text_pane_ParamLimits

0x61bb,	// (0x0001a71c) list_single_dyc_row_text_pane

0x106d,	// (0x000155ce) bg_sp_fs_scroll_pane

0x61da,	// (0x0001a73b) thumb_sp_fs_scroll_pane

0x1b4d,	// (0x000160ae) list_medium_line_g1_ParamLimits

0x1b4d,	// (0x000160ae) list_medium_line_g1

0x2186,	// (0x000166e7) list_medium_line_t1_ParamLimits

0x2186,	// (0x000166e7) list_medium_line_t1

0x1b4d,	// (0x000160ae) list_medium_line_x2_g1_ParamLimits

0x1b4d,	// (0x000160ae) list_medium_line_x2_g1

0x1b59,	// (0x000160ba) list_medium_line_x2_g2_ParamLimits

0x1b59,	// (0x000160ba) list_medium_line_x2_g2

0x0001,

0xfa32,	// (0x00023f93) list_medium_line_x2_g_ParamLimits

0xfa32,	// (0x00023f93) list_medium_line_x2_g

0x61e3,	// (0x0001a744) list_medium_line_x2_t1_ParamLimits

0x61e3,	// (0x0001a744) list_medium_line_x2_t1

0x1b4d,	// (0x000160ae) list_medium_line_x3_g1_ParamLimits

0x1b4d,	// (0x000160ae) list_medium_line_x3_g1

0x1b59,	// (0x000160ba) list_medium_line_x3_g2_ParamLimits

0x1b59,	// (0x000160ba) list_medium_line_x3_g2

0x0001,

0xfa32,	// (0x00023f93) list_medium_line_x3_g_ParamLimits

0xfa32,	// (0x00023f93) list_medium_line_x3_g

0x61e3,	// (0x0001a744) list_medium_line_x3_t1_ParamLimits

0x61e3,	// (0x0001a744) list_medium_line_x3_t1

0x61f9,	// (0x0001a75a) thumb_sp_fs_scroll_pane_g1

0x6202,	// (0x0001a763) thumb_sp_fs_scroll_pane_g2

0x620b,	// (0x0001a76c) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd5f,	// (0x000242c0) thumb_sp_fs_scroll_pane_g

0x61f9,	// (0x0001a75a) bg_sp_fs_scroll_pane_g1

0x6202,	// (0x0001a763) bg_sp_fs_scroll_pane_g2

0x620b,	// (0x0001a76c) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd5f,	// (0x000242c0) bg_sp_fs_scroll_pane_g

0x1b4d,	// (0x000160ae) list_medium_line_x2_t3_g4_g1_ParamLimits

0x1b4d,	// (0x000160ae) list_medium_line_x2_t3_g4_g1

0x1bc3,	// (0x00016124) list_medium_line_x2_t3_g4_g2_ParamLimits

0x1bc3,	// (0x00016124) list_medium_line_x2_t3_g4_g2

0x1b59,	// (0x000160ba) list_medium_line_x2_t3_g4_g3_ParamLimits

0x1b59,	// (0x000160ba) list_medium_line_x2_t3_g4_g3

0x1b65,	// (0x000160c6) list_medium_line_x2_t3_g4_g4_ParamLimits

0x1b65,	// (0x000160c6) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2e6,	// (0x00023847) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2e6,	// (0x00023847) list_medium_line_x2_t3_g4_g

0xdc31,	// (0x00022192) list_medium_line_x2_t3_g4_t1_ParamLimits

0xdc31,	// (0x00022192) list_medium_line_x2_t3_g4_t1

0xdc47,	// (0x000221a8) list_medium_line_x2_t3_g4_t2_ParamLimits

0xdc47,	// (0x000221a8) list_medium_line_x2_t3_g4_t2

0x1b86,	// (0x000160e7) list_medium_line_x2_t3_g4_t3_ParamLimits

0x1b86,	// (0x000160e7) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd66,	// (0x000242c7) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd66,	// (0x000242c7) list_medium_line_x2_t3_g4_t

0x1b4d,	// (0x000160ae) list_medium_line_g2_g1_ParamLimits

0x1b4d,	// (0x000160ae) list_medium_line_g2_g1

0x1b59,	// (0x000160ba) list_medium_line_g2_g2_ParamLimits

0x1b59,	// (0x000160ba) list_medium_line_g2_g2

0x0001,

0xfa32,	// (0x00023f93) list_medium_line_g2_g_ParamLimits

0xfa32,	// (0x00023f93) list_medium_line_g2_g

0x1ee8,	// (0x00016449) list_medium_line_g2_t1_ParamLimits

0x1ee8,	// (0x00016449) list_medium_line_g2_t1

0x1b4d,	// (0x000160ae) list_medium_line_t3_g2_g1_ParamLimits

0x1b4d,	// (0x000160ae) list_medium_line_t3_g2_g1

0x1b59,	// (0x000160ba) list_medium_line_t3_g2_g2_ParamLimits

0x1b59,	// (0x000160ba) list_medium_line_t3_g2_g2

0x0001,

0xfa32,	// (0x00023f93) list_medium_line_t3_g2_g_ParamLimits

0xfa32,	// (0x00023f93) list_medium_line_t3_g2_g

0xdc60,	// (0x000221c1) list_medium_line_t3_g2_t1_ParamLimits

0xdc60,	// (0x000221c1) list_medium_line_t3_g2_t1

0xdc77,	// (0x000221d8) list_medium_line_t3_g2_t2_ParamLimits

0xdc77,	// (0x000221d8) list_medium_line_t3_g2_t2

0xdc8c,	// (0x000221ed) list_medium_line_t3_g2_t3_ParamLimits

0xdc8c,	// (0x000221ed) list_medium_line_t3_g2_t3

0x0002,

0xfd6d,	// (0x000242ce) list_medium_line_t3_g2_t_ParamLimits

0xfd6d,	// (0x000242ce) list_medium_line_t3_g2_t

0x608a,	// (0x0001a5eb) list_medium_line_right_icon_g1

0x6214,	// (0x0001a775) list_medium_line_right_icon_t1

0x1b4d,	// (0x000160ae) list_medium_line_t2_g1_ParamLimits

0x1b4d,	// (0x000160ae) list_medium_line_t2_g1

0xdca1,	// (0x00022202) list_medium_line_t2_t1_ParamLimits

0xdca1,	// (0x00022202) list_medium_line_t2_t1

0xdcba,	// (0x0002221b) list_medium_line_t2_t2_ParamLimits

0xdcba,	// (0x0002221b) list_medium_line_t2_t2

0x0001,

0xfd74,	// (0x000242d5) list_medium_line_t2_t_ParamLimits

0xfd74,	// (0x000242d5) list_medium_line_t2_t

0x1b4d,	// (0x000160ae) list_medium_line_t3_g1_ParamLimits

0x1b4d,	// (0x000160ae) list_medium_line_t3_g1

0xdccf,	// (0x00022230) list_medium_line_t3_t1_ParamLimits

0xdccf,	// (0x00022230) list_medium_line_t3_t1

0xdce6,	// (0x00022247) list_medium_line_t3_t2_ParamLimits

0xdce6,	// (0x00022247) list_medium_line_t3_t2

0x1bb1,	// (0x00016112) list_medium_line_t3_t3_ParamLimits

0x1bb1,	// (0x00016112) list_medium_line_t3_t3

0x0002,

0xfd79,	// (0x000242da) list_medium_line_t3_t_ParamLimits

0xfd79,	// (0x000242da) list_medium_line_t3_t

0x1b4d,	// (0x000160ae) list_medium_line_g3_g1_ParamLimits

0x1b4d,	// (0x000160ae) list_medium_line_g3_g1

0x1bc3,	// (0x00016124) list_medium_line_g3_g2_ParamLimits

0x1bc3,	// (0x00016124) list_medium_line_g3_g2

0x1b59,	// (0x000160ba) list_medium_line_g3_g3_ParamLimits

0x1b59,	// (0x000160ba) list_medium_line_g3_g3

0x0002,

0xfd80,	// (0x000242e1) list_medium_line_g3_g_ParamLimits

0xfd80,	// (0x000242e1) list_medium_line_g3_g

0x1ed3,	// (0x00016434) list_medium_line_g3_t1_ParamLimits

0x1ed3,	// (0x00016434) list_medium_line_g3_t1

0x1b4d,	// (0x000160ae) list_medium_line_t2_g3_g1_ParamLimits

0x1b4d,	// (0x000160ae) list_medium_line_t2_g3_g1

0x1bc3,	// (0x00016124) list_medium_line_t2_g3_g2_ParamLimits

0x1bc3,	// (0x00016124) list_medium_line_t2_g3_g2

0x1b59,	// (0x000160ba) list_medium_line_t2_g3_g3_ParamLimits

0x1b59,	// (0x000160ba) list_medium_line_t2_g3_g3

0x0002,

0xfd80,	// (0x000242e1) list_medium_line_t2_g3_g_ParamLimits

0xfd80,	// (0x000242e1) list_medium_line_t2_g3_g

0xdcfb,	// (0x0002225c) list_medium_line_t2_g3_t1_ParamLimits

0xdcfb,	// (0x0002225c) list_medium_line_t2_g3_t1

0xdd12,	// (0x00022273) list_medium_line_t2_g3_t2_ParamLimits

0xdd12,	// (0x00022273) list_medium_line_t2_g3_t2

0x0001,

0xfd87,	// (0x000242e8) list_medium_line_t2_g3_t_ParamLimits

0xfd87,	// (0x000242e8) list_medium_line_t2_g3_t

0x1b4d,	// (0x000160ae) list_medium_line_t3_g3_g1_ParamLimits

0x1b4d,	// (0x000160ae) list_medium_line_t3_g3_g1

0x1bc3,	// (0x00016124) list_medium_line_t3_g3_g2_ParamLimits

0x1bc3,	// (0x00016124) list_medium_line_t3_g3_g2

0x1b59,	// (0x000160ba) list_medium_line_t3_g3_g3_ParamLimits

0x1b59,	// (0x000160ba) list_medium_line_t3_g3_g3

0x0002,

0xfd80,	// (0x000242e1) list_medium_line_t3_g3_g_ParamLimits

0xfd80,	// (0x000242e1) list_medium_line_t3_g3_g

0xdd27,	// (0x00022288) list_medium_line_t3_g3_t1_ParamLimits

0xdd27,	// (0x00022288) list_medium_line_t3_g3_t1

0xdd3b,	// (0x0002229c) list_medium_line_t3_g3_t2_ParamLimits

0xdd3b,	// (0x0002229c) list_medium_line_t3_g3_t2

0xdd4d,	// (0x000222ae) list_medium_line_t3_g3_t3_ParamLimits

0xdd4d,	// (0x000222ae) list_medium_line_t3_g3_t3

0x0002,

0xfd8c,	// (0x000242ed) list_medium_line_t3_g3_t_ParamLimits

0xfd8c,	// (0x000242ed) list_medium_line_t3_g3_t

0x6148,	// (0x0001a6a9) list_medium_line_right_iconx2_g1

0x608a,	// (0x0001a5eb) list_medium_line_right_iconx2_g2

0x0001,

0xfd93,	// (0x000242f4) list_medium_line_right_iconx2_g

0x622b,	// (0x0001a78c) list_medium_line_right_iconx2_t1

0x6148,	// (0x0001a6a9) list_medium_line_t2_right_iconx2_g1

0x608a,	// (0x0001a5eb) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd93,	// (0x000242f4) list_medium_line_t2_right_iconx2_g

0xdd5f,	// (0x000222c0) list_medium_line_t2_right_iconx2_t1

0xdd6f,	// (0x000222d0) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd98,	// (0x000242f9) list_medium_line_t2_right_iconx2_t

0x5010,	// (0x00019571) list_medium_line_x4_t4_t1

0xdd7d,	// (0x000222de) list_medium_line_x4_t4_t2

0xdd8b,	// (0x000222ec) list_medium_line_x4_t4_t3

0xdd99,	// (0x000222fa) list_medium_line_x4_t4_t4

0x0003,

0xfd9d,	// (0x000242fe) list_medium_line_x4_t4_t

0xddcc,	// (0x0002232d) tport_appsw_pane_ParamLimits

0xddcc,	// (0x0002232d) tport_appsw_pane

0xddd8,	// (0x00022339) tport_contact_pane_ParamLimits

0xddd8,	// (0x00022339) tport_contact_pane

0xdde6,	// (0x00022347) tport_listscroll_pane_ParamLimits

0xdde6,	// (0x00022347) tport_listscroll_pane

0xddf4,	// (0x00022355) cell_tport_appsw_pane_ParamLimits

0xddf4,	// (0x00022355) cell_tport_appsw_pane

0x43c7,	// (0x00018928) tport_appsw_pane_g1_ParamLimits

0x43c7,	// (0x00018928) tport_appsw_pane_g1

0x6239,	// (0x0001a79a) tport_contact_pane_g1

0x6242,	// (0x0001a7a3) tport_contact_pane_t1

0x6250,	// (0x0001a7b1) tport_contact_pane_t2

0x0001,

0xfda6,	// (0x00024307) tport_contact_pane_t

0x625e,	// (0x0001a7bf) list_tport_pane

0x1988,	// (0x00015ee9) scroll_pane_cp_030

0x626f,	// (0x0001a7d0) cell_tport_appsw_pane_g1

0x627f,	// (0x0001a7e0) cell_tport_appsw_pane_t1

0x106d,	// (0x000155ce) grid_highlight_pane_cp019

0xde1b,	// (0x0002237c) list_tport_double_graphic_pane_ParamLimits

0xde1b,	// (0x0002237c) list_tport_double_graphic_pane

0x10c0,	// (0x00015621) list_highlight_pane_cp023_ParamLimits

0x10c0,	// (0x00015621) list_highlight_pane_cp023

0xde28,	// (0x00022389) list_tport_double_graphic_pane_g1_ParamLimits

0xde28,	// (0x00022389) list_tport_double_graphic_pane_g1

0xde35,	// (0x00022396) list_tport_double_graphic_pane_t1_ParamLimits

0xde35,	// (0x00022396) list_tport_double_graphic_pane_t1

0xde4a,	// (0x000223ab) list_tport_double_graphic_pane_t2_ParamLimits

0xde4a,	// (0x000223ab) list_tport_double_graphic_pane_t2

0x0001,

0xfdb2,	// (0x00024313) list_tport_double_graphic_pane_t_ParamLimits

0xfdb2,	// (0x00024313) list_tport_double_graphic_pane_t

0x106d,	// (0x000155ce) main_cale_note_pane

0x83c6,	// (0x0001c927) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x83c6,	// (0x0001c927) cell_vitu2_function_top_wide_pane_cp01

0xd5f4,	// (0x00021b55) wait_bar_pane_cp05_ParamLimits

0x106d,	// (0x000155ce) listscroll_cmail_pane

0x628d,	// (0x0001a7ee) list_cmail_pane

0xde5c,	// (0x000223bd) list_cmail_body_pane

0xde5c,	// (0x000223bd) list_single_cmail_header_caption_pane

0xde74,	// (0x000223d5) list_single_cmail_header_detail_pane_ParamLimits

0xde74,	// (0x000223d5) list_single_cmail_header_detail_pane

0x62a9,	// (0x0001a80a) list_single_cmail_header_caption_pane_t1

0xde9e,	// (0x000223ff) list_single_cmail_header_detail_pane_g1_ParamLimits

0xde9e,	// (0x000223ff) list_single_cmail_header_detail_pane_g1

0x62bf,	// (0x0001a820) list_single_cmail_header_detail_pane_g2_ParamLimits

0x62bf,	// (0x0001a820) list_single_cmail_header_detail_pane_g2

0x0002,

0xfdb7,	// (0x00024318) list_single_cmail_header_detail_pane_g_ParamLimits

0xfdb7,	// (0x00024318) list_single_cmail_header_detail_pane_g

0x62d8,	// (0x0001a839) list_single_cmail_header_detail_pane_t1_ParamLimits

0x62d8,	// (0x0001a839) list_single_cmail_header_detail_pane_t1

0x630a,	// (0x0001a86b) list_single_cmail_header_editor_pane_bg_ParamLimits

0x630a,	// (0x0001a86b) list_single_cmail_header_editor_pane_bg

0x631c,	// (0x0001a87d) list_cmail_body_pane_g1

0x6325,	// (0x0001a886) list_cmail_body_pane_t1

0x4da1,	// (0x00019302) list_single_cmail_header_editor_pane_bg_g1

0x1df1,	// (0x00016352) list_single_cmail_header_editor_pane_bg_g1_copy1

0x4db1,	// (0x00019312) list_single_cmail_header_editor_pane_bg_g1_copy2

0x4da9,	// (0x0001930a) list_single_cmail_header_editor_pane_bg_g1_copy3

0x503a,	// (0x0001959b) list_single_cmail_header_editor_pane_bg_g1_copy4

0x4dd1,	// (0x00019332) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x4dc1,	// (0x00019322) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x4dc9,	// (0x0001932a) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x1dd1,	// (0x00016332) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xded8,	// (0x00022439) calenote_gesture_pane_ParamLimits

0xded8,	// (0x00022439) calenote_gesture_pane

0xdef0,	// (0x00022451) calenote_window_pane_ParamLimits

0xdef0,	// (0x00022451) calenote_window_pane

0x6333,	// (0x0001a894) popup_note_window_cp01

0xdf08,	// (0x00022469) calenote_swipe_1_pane_ParamLimits

0xdf08,	// (0x00022469) calenote_swipe_1_pane

0xd98f,	// (0x00021ef0) calenote_swipe_2_pane_ParamLimits

0xd98f,	// (0x00021ef0) calenote_swipe_2_pane

0x5fdb,	// (0x0001a53c) calenote_swipe_1_pane_g1_ParamLimits

0x5fdb,	// (0x0001a53c) calenote_swipe_1_pane_g1

0x5fe8,	// (0x0001a549) calenote_swipe_1_pane_g2_ParamLimits

0x5fe8,	// (0x0001a549) calenote_swipe_1_pane_g2

0x0001,

0xfcf0,	// (0x00024251) calenote_swipe_1_pane_g_ParamLimits

0xfcf0,	// (0x00024251) calenote_swipe_1_pane_g

0x6345,	// (0x0001a8a6) calenote_swipe_1_pane_t1_ParamLimits

0x6345,	// (0x0001a8a6) calenote_swipe_1_pane_t1

0x5fdb,	// (0x0001a53c) calenote_swipe_2_pane_g1_ParamLimits

0x5fdb,	// (0x0001a53c) calenote_swipe_2_pane_g1

0x6364,	// (0x0001a8c5) calenote_swipe_2_pane_g2_ParamLimits

0x6364,	// (0x0001a8c5) calenote_swipe_2_pane_g2

0x0001,

0xfdc3,	// (0x00024324) calenote_swipe_2_pane_g_ParamLimits

0xfdc3,	// (0x00024324) calenote_swipe_2_pane_g

0x6370,	// (0x0001a8d1) calenote_swipe_2_pane_t1_ParamLimits

0x6370,	// (0x0001a8d1) calenote_swipe_2_pane_t1

0x106d,	// (0x000155ce) main_mup_navstr_pane

0xb87f,	// (0x0001fde0) main_mup3_pane_t7_ParamLimits

0xb87f,	// (0x0001fde0) main_mup3_pane_t7

0x7d8e,	// (0x0001c2ef) main_mp4_pane_g6_ParamLimits

0x7d8e,	// (0x0001c2ef) main_mp4_pane_g6

0x805f,	// (0x0001c5c0) main_image3_pane_t4_ParamLimits

0x805f,	// (0x0001c5c0) main_image3_pane_t4

0xdf1b,	// (0x0002247c) popup_navstr_preview_pane_ParamLimits

0xdf1b,	// (0x0002247c) popup_navstr_preview_pane

0xdf27,	// (0x00022488) scroll_navstr_pane_ParamLimits

0xdf27,	// (0x00022488) scroll_navstr_pane

0x106d,	// (0x000155ce) bg_popup_preview_window_pane_cp04

0x6397,	// (0x0001a8f8) popup_navstr_preview_pane_t1

0xdf33,	// (0x00022494) scroll_navstr_pane_g1_ParamLimits

0xdf33,	// (0x00022494) scroll_navstr_pane_g1

0xdf40,	// (0x000224a1) scroll_navstr_pane_t1_ParamLimits

0xdf40,	// (0x000224a1) scroll_navstr_pane_t1

0x633c,	// (0x0001a89d) bg_button_pane_cp014

0x633c,	// (0x0001a89d) bg_button_pane_cp030

0xd88d,	// (0x00021dee) list_double_fisheye_pane_g4_ParamLimits

0xd88d,	// (0x00021dee) list_double_fisheye_pane_g4

0xd899,	// (0x00021dfa) list_double_fisheye_pane_g5_ParamLimits

0xd899,	// (0x00021dfa) list_double_fisheye_pane_g5

0x629d,	// (0x0001a7fe) sp_fs_scroll_pane_cp03

0x60da,	// (0x0001a63b) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x60e6,	// (0x0001a647) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfd0d,	// (0x0002426e) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x60f2,	// (0x0001a653) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x6295,	// (0x0001a7f6) sp_fs_scroll_pane_cp02

0x19e2,	// (0x00015f43) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x19e2,	// (0x00015f43) popup_sp_fs_calendar_preview_list_single_pane

0x106d,	// (0x000155ce) main_cam6_pano_pane

0x10c0,	// (0x00015621) main_mup3_pane_ParamLimits

0x106d,	// (0x000155ce) main_phacti_pane

0xd4e7,	// (0x00021a48) bg_button_pane_cp11

0xd4ff,	// (0x00021a60) main_mobtv_info_pane_g2_ParamLimits

0xd4ff,	// (0x00021a60) main_mobtv_info_pane_g2

0x0001,

0xfc6d,	// (0x000241ce) main_mobtv_info_pane_g_ParamLimits

0xfc6d,	// (0x000241ce) main_mobtv_info_pane_g

0xd68b,	// (0x00021bec) sc_clock_pane_t5_ParamLimits

0xd68b,	// (0x00021bec) sc_clock_pane_t5

0xd715,	// (0x00021c76) main_radioblah_pane_g1_ParamLimits

0x5f1e,	// (0x0001a47f) main_radioblah_pane_t3_ParamLimits

0x5f1e,	// (0x0001a47f) main_radioblah_pane_t3

0x5f36,	// (0x0001a497) main_radioblah_pane_t4_ParamLimits

0x5f36,	// (0x0001a497) main_radioblah_pane_t4

0xd733,	// (0x00021c94) main_radioblah_text_pane_ParamLimits

0xd733,	// (0x00021c94) main_radioblah_text_pane

0xd740,	// (0x00021ca1) main_radioblah_info_pane_g1_ParamLimits

0xd7cd,	// (0x00021d2e) main_radioblah_info_pane_t4_ParamLimits

0xd7cd,	// (0x00021d2e) main_radioblah_info_pane_t4

0x10c0,	// (0x00015621) main_sp_fs_calendar_pane

0xdf52,	// (0x000224b3) main_phacti_pane_g1

0xdf5a,	// (0x000224bb) phacti_note_pane_ParamLimits

0xdf5a,	// (0x000224bb) phacti_note_pane

0x63ae,	// (0x0001a90f) phacti_term_pane_ParamLimits

0x63ae,	// (0x0001a90f) phacti_term_pane

0x63c3,	// (0x0001a924) phacti_note_pane_t1_ParamLimits

0x63c3,	// (0x0001a924) phacti_note_pane_t1

0x63da,	// (0x0001a93b) phacti_term_pane_g1

0x63e2,	// (0x0001a943) phacti_term_pane_t1_ParamLimits

0x63e2,	// (0x0001a943) phacti_term_pane_t1

0x640c,	// (0x0001a96d) popup_sp_fs_calendar_preview_list_single_pane_g1

0x6414,	// (0x0001a975) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdcd,	// (0x0002432e) popup_sp_fs_calendar_preview_list_single_pane_g

0x641c,	// (0x0001a97d) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x641c,	// (0x0001a97d) popup_sp_fs_calendar_preview_list_single_pane_t1

0x6432,	// (0x0001a993) aid_popup_sp_fs_bg_corner_pane

0x407b,	// (0x000185dc) popup_sp_fs_calendar_preview_bg_pane_g1

0x106d,	// (0x000155ce) popup_sp_fs_calendar_preview_bg_pane

0x643a,	// (0x0001a99b) popup_sp_fs_calendar_preview_list_pane

0x10c0,	// (0x00015621) bg_main_sp_fs_cale_pane_ParamLimits

0x10c0,	// (0x00015621) bg_main_sp_fs_cale_pane

0x644b,	// (0x0001a9ac) listscroll_cale_mrui_pane_ParamLimits

0x644b,	// (0x0001a9ac) listscroll_cale_mrui_pane

0x645f,	// (0x0001a9c0) listscroll_sp_fs_schedule_track_pane

0x6468,	// (0x0001a9c9) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x6468,	// (0x0001a9c9) main_sp_fs_ctrlbar_pane_cp01

0x6479,	// (0x0001a9da) main_sp_fs_ribbon_pane

0x6481,	// (0x0001a9e2) popup_sp_fs_cale_preview_window

0xdf95,	// (0x000224f6) list_single_sp_fs_schedule_track_pane_ParamLimits

0xdf95,	// (0x000224f6) list_single_sp_fs_schedule_track_pane

0x4383,	// (0x000188e4) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x4383,	// (0x000188e4) bg_sp_fs_highlight_list_pane_cp03

0xdfaa,	// (0x0002250b) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xdfaa,	// (0x0002250b) list_single_sp_fs_schedule_track_pane_g1

0xdfb6,	// (0x00022517) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xdfb6,	// (0x00022517) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdd2,	// (0x00024333) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdd2,	// (0x00024333) list_single_sp_fs_schedule_track_pane_g

0xdfc2,	// (0x00022523) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xdfc2,	// (0x00022523) list_single_sp_fs_schedule_track_pane_t1

0xdfda,	// (0x0002253b) sp_fs_schedule_track_pane_ParamLimits

0xdfda,	// (0x0002253b) sp_fs_schedule_track_pane

0x6493,	// (0x0001a9f4) sp_fs_schedule_track_pane_g1

0x649b,	// (0x0001a9fc) sp_fs_schedule_track_pane_g2

0x64a3,	// (0x0001aa04) sp_fs_schedule_track_pane_g3

0x64ab,	// (0x0001aa0c) sp_fs_schedule_track_pane_g4

0x64b3,	// (0x0001aa14) sp_fs_schedule_track_pane_g5

0x0004,

0xfdd7,	// (0x00024338) sp_fs_schedule_track_pane_g

0x4da1,	// (0x00019302) bg_sp_fs_schedule_viewer_highlight_g1

0x1df1,	// (0x00016352) bg_sp_fs_schedule_viewer_highlight_g2

0x4da9,	// (0x0001930a) bg_sp_fs_schedule_viewer_highlight_g3

0x4db1,	// (0x00019312) bg_sp_fs_schedule_viewer_highlight_g4

0x503a,	// (0x0001959b) bg_sp_fs_schedule_viewer_highlight_g5

0x4dc1,	// (0x00019322) bg_sp_fs_schedule_viewer_highlight_g6

0x4dc9,	// (0x0001932a) bg_sp_fs_schedule_viewer_highlight_g7

0x4dd1,	// (0x00019332) bg_sp_fs_schedule_viewer_highlight_g8

0x1dd1,	// (0x00016332) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfde2,	// (0x00024343) bg_sp_fs_schedule_viewer_highlight_g

0x106d,	// (0x000155ce) bg_main_sp_fs_ribbon_pane

0xc185,	// (0x000206e6) main_sp_fs_ribbon_pane_g1

0x64bb,	// (0x0001aa1c) main_sp_fs_ribbon_pane_t1

0xdfea,	// (0x0002254b) main_sp_fs_ribbon_pane_t2

0x64ca,	// (0x0001aa2b) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdf5,	// (0x00024356) main_sp_fs_ribbon_pane_t

0x64d9,	// (0x0001aa3a) main_sp_fs_ribbon_scheduler_pane

0x64e1,	// (0x0001aa42) bg_main_sp_fs_ribbon_pane_g1

0x64ea,	// (0x0001aa4b) bg_main_sp_fs_ribbon_pane_g2

0x64f3,	// (0x0001aa54) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdfc,	// (0x0002435d) bg_main_sp_fs_ribbon_pane_g

0x64fb,	// (0x0001aa5c) main_sp_fs_ribbon_scheduler_pane_g1

0x6504,	// (0x0001aa65) main_sp_fs_ribbon_scheduler_pane_g2

0x650d,	// (0x0001aa6e) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfe03,	// (0x00024364) main_sp_fs_ribbon_scheduler_pane_g

0x5f90,	// (0x0001a4f1) list_cale_mrui_pane

0x6516,	// (0x0001aa77) sp_fs_scroll_pane_cp07_ParamLimits

0x6516,	// (0x0001aa77) sp_fs_scroll_pane_cp07

0xdff9,	// (0x0002255a) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xdff9,	// (0x0002255a) bg_sp_fs_schedule_viewer_highlight

0x652b,	// (0x0001aa8c) list_single_sp_fs_schedule_track_pane_cp01

0x6533,	// (0x0001aa94) list_sp_fs_schedule_track_pane

0x653b,	// (0x0001aa9c) sp_fs_scroll_pane_cp06_ParamLimits

0x653b,	// (0x0001aa9c) sp_fs_scroll_pane_cp06

0x407b,	// (0x000185dc) bgmain_sp_fs_calendar_pane_g1

0xe006,	// (0x00022567) list_single_cale_mrui_pane_ParamLimits

0xe006,	// (0x00022567) list_single_cale_mrui_pane

0x654d,	// (0x0001aaae) list_single_cale_mrui_row_pane_ParamLimits

0x654d,	// (0x0001aaae) list_single_cale_mrui_row_pane

0x655a,	// (0x0001aabb) list_single_cale_mrui_row_pane_g1_ParamLimits

0x655a,	// (0x0001aabb) list_single_cale_mrui_row_pane_g1

0x6592,	// (0x0001aaf3) list_single_cale_mrui_row_pane_t1_ParamLimits

0x6592,	// (0x0001aaf3) list_single_cale_mrui_row_pane_t1

0xe02c,	// (0x0002258d) list_single_cale_mrui_row_pane_t2_ParamLimits

0xe02c,	// (0x0002258d) list_single_cale_mrui_row_pane_t2

0xe092,	// (0x000225f3) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe092,	// (0x000225f3) list_single_cale_mrui_row_pane_t3

0xe0c1,	// (0x00022622) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe0c1,	// (0x00022622) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe0f,	// (0x00024370) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe0f,	// (0x00024370) list_single_cale_mrui_row_pane_t

0xe0f0,	// (0x00022651) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0xe0f0,	// (0x00022651) list_single_cmail_header_editor_pane_bg_cp01

0xe114,	// (0x00022675) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0xe114,	// (0x00022675) list_single_cmail_header_editor_pane_bg_cp02

0xe132,	// (0x00022693) main_radioblah_text_pane_t1_ParamLimits

0xe132,	// (0x00022693) main_radioblah_text_pane_t1

0xe14b,	// (0x000226ac) cam6_indi_pane_cp01

0xe153,	// (0x000226b4) cam6_mode_pane_cp01

0xe15b,	// (0x000226bc) cam6_pano_pane

0xe164,	// (0x000226c5) cam6_zoom_pane_cp01

0xe16c,	// (0x000226cd) cam6_pano_image_pane

0xe175,	// (0x000226d6) cam6_pano_pane_g1

0x5c9c,	// (0x0001a1fd) cam6_pano_pane_g2

0xe17e,	// (0x000226df) cam6_pano_pane_g3

0xe187,	// (0x000226e8) cam6_pano_pane_g4

0x4625,	// (0x00018b86) cam6_pano_pane_g5

0xe190,	// (0x000226f1) cam6_pano_pane_g6

0xe198,	// (0x000226f9) cam6_pano_pane_g7

0xe1a0,	// (0x00022701) cam6_pano_pane_g8

0xe1a9,	// (0x0002270a) cam6_pano_pane_g9

0x0008,

0xfe18,	// (0x00024379) cam6_pano_pane_g

0x106d,	// (0x000155ce) main_browser_tag_pane

0x638f,	// (0x0001a8f0) grid_navstr_albumart_pane

0xe1b2,	// (0x00022713) cell_navstr_albumart_pane_ParamLimits

0xe1b2,	// (0x00022713) cell_navstr_albumart_pane

0x2819,	// (0x00016d7a) cell_navstr_albumart_pane_g1

0x3963,	// (0x00017ec4) cell_navstr_albumart_pane_g2

0x3973,	// (0x00017ed4) cell_navstr_albumart_pane_g3

0x396b,	// (0x00017ecc) cell_navstr_albumart_pane_g4

0x0003,

0xfe2b,	// (0x0002438c) cell_navstr_albumart_pane_g

0xe1c9,	// (0x0002272a) bt_list_pane_ParamLimits

0xe1c9,	// (0x0002272a) bt_list_pane

0xe1de,	// (0x0002273f) bt_list_pane_t1

0xe1ed,	// (0x0002274e) bt_list_pane_t2

0x0001,

0xfe34,	// (0x00024395) bt_list_pane_t

0x106d,	// (0x000155ce) main_cale_prevew_pane

0xe1fc,	// (0x0002275d) popup_cale_preview_window_ParamLimits

0xe1fc,	// (0x0002275d) popup_cale_preview_window

0x10c0,	// (0x00015621) bg_popup_preview_window_pane_cp05_ParamLimits

0x10c0,	// (0x00015621) bg_popup_preview_window_pane_cp05

0xe211,	// (0x00022772) list_cale_preview_pane_ParamLimits

0xe211,	// (0x00022772) list_cale_preview_pane

0xe21d,	// (0x0002277e) list_double_cale_preview_pane_ParamLimits

0xe21d,	// (0x0002277e) list_double_cale_preview_pane

0xe22e,	// (0x0002278f) list_single_cale_preview_pane_ParamLimits

0xe22e,	// (0x0002278f) list_single_cale_preview_pane

0xe242,	// (0x000227a3) list_single_cale_preview_pane_g1

0xe24a,	// (0x000227ab) list_single_cale_preview_pane_t1_ParamLimits

0xe24a,	// (0x000227ab) list_single_cale_preview_pane_t1

0xe25f,	// (0x000227c0) list_double_cale_preview_pane_g1

0xe267,	// (0x000227c8) list_double_cale_preview_pane_t1_ParamLimits

0xe267,	// (0x000227c8) list_double_cale_preview_pane_t1

0xe27c,	// (0x000227dd) list_double_cale_preview_pane_t2_ParamLimits

0xe27c,	// (0x000227dd) list_double_cale_preview_pane_t2

0x0001,

0xfe39,	// (0x0002439a) list_double_cale_preview_pane_t_ParamLimits

0xfe39,	// (0x0002439a) list_double_cale_preview_pane_t

0x106d,	// (0x000155ce) main_ezdial_pane

0x10c0,	// (0x00015621) main_sp_fs_email_pane_ParamLimits

0xd9f4,	// (0x00021f55) cmail_ddmenu_btn01_pane_ParamLimits

0xd9f4,	// (0x00021f55) cmail_ddmenu_btn01_pane

0xda11,	// (0x00021f72) cmail_ddmenu_btn02_pane_ParamLimits

0xda11,	// (0x00021f72) cmail_ddmenu_btn02_pane

0xda2f,	// (0x00021f90) cmail_ddmenu_btn03_pane_ParamLimits

0xda2f,	// (0x00021f90) cmail_ddmenu_btn03_pane

0xda5b,	// (0x00021fbc) main_sp_fs_ctrlbar_pane_ParamLimits

0xda73,	// (0x00021fd4) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xde5c,	// (0x000223bd) list_cmail_body_pane_ParamLimits

0x62b7,	// (0x0001a818) bg_button_pane_cp12

0x62cb,	// (0x0001a82c) list_single_cmail_header_detail_pane_g3_ParamLimits

0x62cb,	// (0x0001a82c) list_single_cmail_header_detail_pane_g3

0xdeb4,	// (0x00022415) list_single_cmail_header_detail_pane_t2_ParamLimits

0xdeb4,	// (0x00022415) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdbe,	// (0x0002431f) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdbe,	// (0x0002431f) list_single_cmail_header_detail_pane_t

0x63f7,	// (0x0001a958) phacti_term_pane_t2_ParamLimits

0x63f7,	// (0x0001a958) phacti_term_pane_t2

0x0001,

0xfdc8,	// (0x00024329) phacti_term_pane_t_ParamLimits

0xfdc8,	// (0x00024329) phacti_term_pane_t

0xe294,	// (0x000227f5) aid_size_list_single_double

0xe2a0,	// (0x00022801) popup_ezdial_listscroll_window

0xe2b9,	// (0x0002281a) popup_number_entry_window_cp01

0x2690,	// (0x00016bf1) bg_popup_call_pane_cp09

0xe2c5,	// (0x00022826) ezdial_list_pane

0xe2cd,	// (0x0002282e) scroll_pane_cp23

0x3e68,	// (0x000183c9) bg_button_pane_cp028_ParamLimits

0x3e68,	// (0x000183c9) bg_button_pane_cp028

0xe2d5,	// (0x00022836) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xe2d5,	// (0x00022836) cmail_ddmenu_btn01_pane_g1

0xe2e7,	// (0x00022848) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xe2e7,	// (0x00022848) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe3e,	// (0x0002439f) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe3e,	// (0x0002439f) cmail_ddmenu_btn01_pane_g

0xe2f3,	// (0x00022854) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xe2f3,	// (0x00022854) cmail_ddmenu_btn01_pane_t1

0x3b86,	// (0x000180e7) bg_button_pane_cp029_ParamLimits

0x3b86,	// (0x000180e7) bg_button_pane_cp029

0xe2e7,	// (0x00022848) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xe2e7,	// (0x00022848) cmail_ddmenu_btn02_pane_g1

0xe314,	// (0x00022875) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xe314,	// (0x00022875) cmail_ddmenu_btn02_pane_t1

0x4383,	// (0x000188e4) bg_button_pane_cp031_ParamLimits

0x4383,	// (0x000188e4) bg_button_pane_cp031

0xe2e7,	// (0x00022848) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xe2e7,	// (0x00022848) cmail_ddmenu_btn03_pane_g1

0xe314,	// (0x00022875) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xe314,	// (0x00022875) cmail_ddmenu_btn03_pane_t1

0xc05b,	// (0x000205bc) cell_dialer2_keypad_pane_t1_ParamLimits

0xc075,	// (0x000205d6) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xc075,	// (0x000205d6) cell_dialer2_keypad_pane_t1_copy1

0xd38f,	// (0x000218f0) ncimui_group_button_pane

0x10c0,	// (0x00015621) main_sp_fs_calendar_pane_ParamLimits

0xde5c,	// (0x000223bd) list_single_cmail_header_caption_pane_ParamLimits

0x6442,	// (0x0001a9a3) aid_recal_txt_sm_pane

0x106d,	// (0x000155ce) mian_recal_day_pane

0x6481,	// (0x0001a9e2) popup_sp_fs_cale_preview_window_ParamLimits

0x106d,	// (0x000155ce) list_recal_day_pane

0xe351,	// (0x000228b2) list_single_recal_day_pane_ParamLimits

0xe351,	// (0x000228b2) list_single_recal_day_pane

0xe363,	// (0x000228c4) list_single_recal_day_pane_g1_ParamLimits

0xe363,	// (0x000228c4) list_single_recal_day_pane_g1

0xe36f,	// (0x000228d0) list_single_recal_day_pane_g2_ParamLimits

0xe36f,	// (0x000228d0) list_single_recal_day_pane_g2

0xe37b,	// (0x000228dc) list_single_recal_day_pane_g3_ParamLimits

0xe37b,	// (0x000228dc) list_single_recal_day_pane_g3

0xe387,	// (0x000228e8) list_single_recal_day_pane_g4_ParamLimits

0xe387,	// (0x000228e8) list_single_recal_day_pane_g4

0xe393,	// (0x000228f4) list_single_recal_day_pane_g5_ParamLimits

0xe393,	// (0x000228f4) list_single_recal_day_pane_g5

0xe39f,	// (0x00022900) list_single_recal_day_pane_g6_ParamLimits

0xe39f,	// (0x00022900) list_single_recal_day_pane_g6

0x0005,

0xfe4d,	// (0x000243ae) list_single_recal_day_pane_g_ParamLimits

0xfe4d,	// (0x000243ae) list_single_recal_day_pane_g

0xe3ab,	// (0x0002290c) list_single_recal_day_pane_t1

0xe3b9,	// (0x0002291a) list_single_recal_day_pane_t2

0x0001,

0xfe5a,	// (0x000243bb) list_single_recal_day_pane_t

0xe3c7,	// (0x00022928) ncimui_query_button_pane_ParamLimits

0xe3c7,	// (0x00022928) ncimui_query_button_pane

0xe3d7,	// (0x00022938) ncimui_query_button_pane_t1_ParamLimits

0xe3d7,	// (0x00022938) ncimui_query_button_pane_t1

0xe3ea,	// (0x0002294b) ncimui_query_button_pane_t2_ParamLimits

0xe3ea,	// (0x0002294b) ncimui_query_button_pane_t2

0x0001,

0xfe5f,	// (0x000243c0) ncimui_query_button_pane_t_ParamLimits

0xfe5f,	// (0x000243c0) ncimui_query_button_pane_t

0xe3fd,	// (0x0002295e) query_button_pane_ParamLimits

0xe3fd,	// (0x0002295e) query_button_pane

0x106d,	// (0x000155ce) bg_button_pane_cp0028

0xe40a,	// (0x0002296b) query_button_pane_t1

0xacfa,	// (0x0001f25b) main_tport_pane_ParamLimits

0xdda7,	// (0x00022308) bg_popup_window_pane_cp01_ParamLimits

0xdda7,	// (0x00022308) bg_popup_window_pane_cp01

0xddb4,	// (0x00022315) heading_pane_cp08_ParamLimits

0xddb4,	// (0x00022315) heading_pane_cp08

0xddc0,	// (0x00022321) heading_pane_cp07_ParamLimits

0xddc0,	// (0x00022321) heading_pane_cp07

0x626f,	// (0x0001a7d0) cell_tport_appsw_pane_g2

0x0002,

0xfdab,	// (0x0002430c) cell_tport_appsw_pane_g

0x2811,	// (0x00016d72) input_candi_list_open_g1

0x1ff1,	// (0x00016552) list_cale_time_pane_g6_ParamLimits

0x1ff1,	// (0x00016552) list_cale_time_pane_g6

0xb3cf,	// (0x0001f930) aid_size_touch_calib_1_ParamLimits

0xb3cf,	// (0x0001f930) aid_size_touch_calib_1

0xb3db,	// (0x0001f93c) aid_size_touch_calib_2_ParamLimits

0xb3db,	// (0x0001f93c) aid_size_touch_calib_2

0xb3e7,	// (0x0001f948) aid_size_touch_calib_3_ParamLimits

0xb3e7,	// (0x0001f948) aid_size_touch_calib_3

0xb3f5,	// (0x0001f956) aid_size_touch_calib_4_ParamLimits

0xb3f5,	// (0x0001f956) aid_size_touch_calib_4

0xb403,	// (0x0001f964) main_touch_calib_button_group_pane_ParamLimits

0xb403,	// (0x0001f964) main_touch_calib_button_group_pane

0xb410,	// (0x0001f971) main_touch_calib_pane_g1_ParamLimits

0xb41c,	// (0x0001f97d) main_touch_calib_pane_g2_ParamLimits

0xb428,	// (0x0001f989) main_touch_calib_pane_g3_ParamLimits

0xb434,	// (0x0001f995) main_touch_calib_pane_g4_ParamLimits

0xf788,	// (0x00023ce9) main_touch_calib_pane_g_ParamLimits

0xb440,	// (0x0001f9a1) main_touch_calib_pane_t1_ParamLimits

0xb455,	// (0x0001f9b6) main_touch_calib_pane_t2_ParamLimits

0xb46a,	// (0x0001f9cb) main_touch_calib_pane_t3_ParamLimits

0xb47c,	// (0x0001f9dd) main_touch_calib_pane_t4_ParamLimits

0xb48e,	// (0x0001f9ef) main_touch_calib_pane_t5_ParamLimits

0xf791,	// (0x00023cf2) main_touch_calib_pane_t_ParamLimits

0x4450,	// (0x000189b1) list_single_fp_cale_pane_g3_ParamLimits

0x4450,	// (0x000189b1) list_single_fp_cale_pane_g3

0x821b,	// (0x0001c77c) bg_button_pane_cp012_ParamLimits

0x821b,	// (0x0001c77c) bg_vkb2_func_pane_cp03_ParamLimits

0x85ce,	// (0x0001cb2f) cell_vitu2_function_top_pane_g1_ParamLimits

0x821b,	// (0x0001c77c) bg_vkb2_func_pane_cp04_ParamLimits

0xd32f,	// (0x00021890) main_ncimui_button_group_pane_ParamLimits

0xd32f,	// (0x00021890) main_ncimui_button_group_pane

0xd37d,	// (0x000218de) main_ncimui_pane_t3_ParamLimits

0xd37d,	// (0x000218de) main_ncimui_pane_t3

0x63a5,	// (0x0001a906) phacti_button_group_pane

0xe294,	// (0x000227f5) aid_size_list_single_double_ParamLimits

0xe2a0,	// (0x00022801) popup_ezdial_listscroll_window_ParamLimits

0xe2b9,	// (0x0002281a) popup_number_entry_window_cp01_ParamLimits

0xe418,	// (0x00022979) phacti_button_pane_ParamLimits

0xe418,	// (0x00022979) phacti_button_pane

0x106d,	// (0x000155ce) bg_button_pane_cp14

0xe427,	// (0x00022988) phacti_button_pane_t1

0xe435,	// (0x00022996) main_touch_calib_button_pane_ParamLimits

0xe435,	// (0x00022996) main_touch_calib_button_pane

0x182b,	// (0x00015d8c) bg_button_pane_cp18_ParamLimits

0x182b,	// (0x00015d8c) bg_button_pane_cp18

0xe445,	// (0x000229a6) main_touch_calib_button_pane_t1_ParamLimits

0xe445,	// (0x000229a6) main_touch_calib_button_pane_t1

0xe45b,	// (0x000229bc) main_touch_calib_button_pane_t2_ParamLimits

0xe45b,	// (0x000229bc) main_touch_calib_button_pane_t2

0x0001,

0xfe64,	// (0x000243c5) main_touch_calib_button_pane_t_ParamLimits

0xfe64,	// (0x000243c5) main_touch_calib_button_pane_t

0x106d,	// (0x000155ce) cell_ncimui_button_pane

0x106d,	// (0x000155ce) bg_button_pane_cp032

0xe479,	// (0x000229da) cell_ncimui_button_pane_t1

0x7f7a,	// (0x0001c4db) image3_infobar_pane_ParamLimits

0x7f7a,	// (0x0001c4db) image3_infobar_pane

0xd6ab,	// (0x00021c0c) fs_bigclock_status_pane_ParamLimits

0xd6ab,	// (0x00021c0c) fs_bigclock_status_pane

0xd6b8,	// (0x00021c19) main_fs_bigclock_clock_pane_ParamLimits

0xd6b8,	// (0x00021c19) main_fs_bigclock_clock_pane

0xd6c8,	// (0x00021c29) main_fs_bigclock_indi_pane_ParamLimits

0xd6c8,	// (0x00021c29) main_fs_bigclock_indi_pane

0xd6ed,	// (0x00021c4e) main_fs_bigclock_swipe_pane_ParamLimits

0xd6ed,	// (0x00021c4e) main_fs_bigclock_swipe_pane

0x106d,	// (0x000155ce) main_fs_clock_dumped_data

0x5da9,	// (0x0001a30a) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x5da9,	// (0x0001a30a) list_single_fs_bigclock_indicator_pane_g1

0x5dc3,	// (0x0001a324) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x5dc3,	// (0x0001a324) list_single_fs_bigclock_indicator_pane_g2

0x5ddd,	// (0x0001a33e) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x5ddd,	// (0x0001a33e) list_single_fs_bigclock_indicator_pane_g3

0x5df7,	// (0x0001a358) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x5df7,	// (0x0001a358) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfca1,	// (0x00024202) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfca1,	// (0x00024202) list_single_fs_bigclock_indicator_pane_g

0x5e1b,	// (0x0001a37c) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x5e1b,	// (0x0001a37c) list_single_fs_bigclock_indicator_pane_t1

0x5e43,	// (0x0001a3a4) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x5e43,	// (0x0001a3a4) list_single_fs_bigclock_indicator_pane_t2

0x5e6b,	// (0x0001a3cc) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x5e6b,	// (0x0001a3cc) list_single_fs_bigclock_indicator_pane_t3

0x5e93,	// (0x0001a3f4) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x5e93,	// (0x0001a3f4) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfcac,	// (0x0002420d) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfcac,	// (0x0002420d) list_single_fs_bigclock_indicator_pane_t

0xe487,	// (0x000229e8) image3_infobar_fav_pane_ParamLimits

0xe487,	// (0x000229e8) image3_infobar_fav_pane

0xe497,	// (0x000229f8) image3_infobar_loc_pane_ParamLimits

0xe497,	// (0x000229f8) image3_infobar_loc_pane

0xe4ab,	// (0x00022a0c) image3_infobar_time_pane_ParamLimits

0xe4ab,	// (0x00022a0c) image3_infobar_time_pane

0x407b,	// (0x000185dc) image3_infobar_time_pane_g1

0xe4bb,	// (0x00022a1c) image3_infobar_time_pane_t1

0x407b,	// (0x000185dc) image3_infobar_loc_pane_g1

0xe4c9,	// (0x00022a2a) image3_infobar_loc_pane_g2

0x0001,

0xfe69,	// (0x000243ca) image3_infobar_loc_pane_g

0xe4d1,	// (0x00022a32) image3_infobar_loc_pane_t1

0x407b,	// (0x000185dc) image3_infobar_fav_pane_g1

0xe4df,	// (0x00022a40) image3_infobar_fav_pane_g2

0x0001,

0xfe6e,	// (0x000243cf) image3_infobar_fav_pane_g

0xe4e7,	// (0x00022a48) fs_bigclock_status_battery_pane

0xe4f0,	// (0x00022a51) fs_bigclock_status_signal_pane

0xe4f9,	// (0x00022a5a) fs_bigclock_status_title_pane

0xe502,	// (0x00022a63) fs_bigclock_status_signal_pane_g1

0xe50b,	// (0x00022a6c) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe73,	// (0x000243d4) fs_bigclock_status_signal_pane_g

0xe513,	// (0x00022a74) fs_bigclock_status_battery_pane_g1

0xe51c,	// (0x00022a7d) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe78,	// (0x000243d9) fs_bigclock_status_battery_pane_g

0xe524,	// (0x00022a85) fs_bigclock_status_title_pane_t1

0x407b,	// (0x000185dc) main_fs_bigclock_clock_pane_g1

0xe532,	// (0x00022a93) main_fs_bigclock_clock_pane_g2

0xe532,	// (0x00022a93) main_fs_bigclock_clock_pane_g3

0xe532,	// (0x00022a93) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe7d,	// (0x000243de) main_fs_bigclock_clock_pane_g

0xe53a,	// (0x00022a9b) main_fs_bigclock_clock_pane_t1

0xe548,	// (0x00022aa9) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe86,	// (0x000243e7) main_fs_bigclock_clock_pane_t

0xe557,	// (0x00022ab8) list_single_fs_bigclock_indicator_pane_ParamLimits

0xe557,	// (0x00022ab8) list_single_fs_bigclock_indicator_pane

0xe568,	// (0x00022ac9) list_single_fs_bigclock_pane_ParamLimits

0xe568,	// (0x00022ac9) list_single_fs_bigclock_pane

0xe5cf,	// (0x00022b30) main_fs_bigclock_indicator_pane_t1

0xe5de,	// (0x00022b3f) list_single_fs_bigclock_pane_g1

0xe5e6,	// (0x00022b47) list_single_fs_bigclock_pane_t1

0x407b,	// (0x000185dc) main_fs_bigclock_swipe_pane_g1

0xe624,	// (0x00022b85) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe97,	// (0x000243f8) main_fs_bigclock_swipe_pane_g

0xe62c,	// (0x00022b8d) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xe62c,	// (0x00022b8d) main_fs_bigclock_swipe_pane_t1

0x9fa2,	// (0x0001e503) call_type_pane_ParamLimits

0x106d,	// (0x000155ce) main_btmg_pane

0x6586,	// (0x0001aae7) list_single_cale_mrui_row_pane_g2_ParamLimits

0x6586,	// (0x0001aae7) list_single_cale_mrui_row_pane_g2

0x0001,

0xfe0a,	// (0x0002436b) list_single_cale_mrui_row_pane_g_ParamLimits

0xfe0a,	// (0x0002436b) list_single_cale_mrui_row_pane_g

0xe341,	// (0x000228a2) list_recal_vselct_arw_lo_pane

0xe349,	// (0x000228aa) list_recal_vselct_arw_up_pane

0xe338,	// (0x00022899) list_recal_vselct_pane

0xe649,	// (0x00022baa) btmg_button_pane

0xe651,	// (0x00022bb2) main_btmg_pane_g1

0x106d,	// (0x000155ce) bg_button_pane_cp044

0xe659,	// (0x00022bba) btmg_button_pane_t1

0x3b7e,	// (0x000180df) aid_listscroll_gen

0x10c0,	// (0x00015621) main_cntbar_detail_pane

0x628d,	// (0x0001a7ee) list_cmail_folder_pane

0x629d,	// (0x0001a7fe) sp_fs_scroll_pane_cp03_ParamLimits

0xe667,	// (0x00022bc8) list_single_fs_dyc_pane_cp01_ParamLimits

0xe667,	// (0x00022bc8) list_single_fs_dyc_pane_cp01

0xe67f,	// (0x00022be0) aid_size_cmail_indent

0x541e,	// (0x0001997f) list_single_dyc_row_pane_cp01

0xe6a2,	// (0x00022c03) cntbar_detail_list_pane_ParamLimits

0xe6a2,	// (0x00022c03) cntbar_detail_list_pane

0xe6d8,	// (0x00022c39) main_cntbar_detail_cont_pane_ParamLimits

0xe6d8,	// (0x00022c39) main_cntbar_detail_cont_pane

0xe6e4,	// (0x00022c45) scroll_pane_cp032_ParamLimits

0xe6e4,	// (0x00022c45) scroll_pane_cp032

0xe6f0,	// (0x00022c51) cntbar_detail_list_event_pane_ParamLimits

0xe6f0,	// (0x00022c51) cntbar_detail_list_event_pane

0xe6ae,	// (0x00022c0f) cntbar_detail_list_shct_pane

0xe700,	// (0x00022c61) aid_list_gen

0x1988,	// (0x00015ee9) aid_scroll

0x536a,	// (0x000198cb) aid_size_touch_scroll_bar

0xe709,	// (0x00022c6a) aid_list_double

0xe712,	// (0x00022c73) aid_list_single

0x5430,	// (0x00019991) aid_list_single_lg

0xe71b,	// (0x00022c7c) aid_list_z_g_a_sm

0xe723,	// (0x00022c84) aid_list_z_g_d

0xe72b,	// (0x00022c8c) aid_txt_z_prm

0xe739,	// (0x00022c9a) aid_txt_z_prm_cp01

0xe747,	// (0x00022ca8) aid_txt_z_sec

0xe755,	// (0x00022cb6) main_cntbar_detail_cont_pane_g1_ParamLimits

0xe755,	// (0x00022cb6) main_cntbar_detail_cont_pane_g1

0xe762,	// (0x00022cc3) main_cntbar_detail_cont_pane_g2_ParamLimits

0xe762,	// (0x00022cc3) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe9c,	// (0x000243fd) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe9c,	// (0x000243fd) main_cntbar_detail_cont_pane_g

0xe76e,	// (0x00022ccf) main_cntbar_detail_cont_pane_t1

0xe77c,	// (0x00022cdd) main_cntbar_detail_cont_pane_t2

0xe78a,	// (0x00022ceb) main_cntbar_detail_cont_pane_t3

0x0002,

0xfea1,	// (0x00024402) main_cntbar_detail_cont_pane_t

0xe798,	// (0x00022cf9) cell_cntbar_detail_list_shct_pane_ParamLimits

0xe798,	// (0x00022cf9) cell_cntbar_detail_list_shct_pane

0xe7aa,	// (0x00022d0b) cntbar_detail_list_shct_pane_g1

0xe7b3,	// (0x00022d14) cntbar_detail_list_shct_pane_g2

0x0001,

0xfea8,	// (0x00024409) cntbar_detail_list_shct_pane_g

0xe7bc,	// (0x00022d1d) cntbar_detail_list_event_pane_g1_ParamLimits

0xe7bc,	// (0x00022d1d) cntbar_detail_list_event_pane_g1

0xe7c8,	// (0x00022d29) cntbar_detail_list_event_pane_g2_ParamLimits

0xe7c8,	// (0x00022d29) cntbar_detail_list_event_pane_g2

0x0005,

0xfead,	// (0x0002440e) cntbar_detail_list_event_pane_g_ParamLimits

0xfead,	// (0x0002440e) cntbar_detail_list_event_pane_g

0xe834,	// (0x00022d95) cntbar_detail_list_event_pane_t1_ParamLimits

0xe834,	// (0x00022d95) cntbar_detail_list_event_pane_t1

0xe849,	// (0x00022daa) cntbar_detail_list_event_pane_t2_ParamLimits

0xe849,	// (0x00022daa) cntbar_detail_list_event_pane_t2

0x0002,

0xfeba,	// (0x0002441b) cntbar_detail_list_event_pane_t_ParamLimits

0xfeba,	// (0x0002441b) cntbar_detail_list_event_pane_t

0x407b,	// (0x000185dc) cell_cntbar_detail_list_shct_pane_g1

0x264f,	// (0x00016bb0) navi_pane_mv_g3

0x10c0,	// (0x00015621) main_cntbar_detail_pane_ParamLimits

0x106d,	// (0x000155ce) main_notif_wgt_pane

0x7cd9,	// (0x0001c23a) aid_tch_main_mp4_pane_g4

0x7f00,	// (0x0001c461) popup_slider_window_cp02

0xe338,	// (0x00022899) list_recal_day_event_pane

0xe688,	// (0x00022be9) cntbar_detail_btn_pane_ParamLimits

0xe688,	// (0x00022be9) cntbar_detail_btn_pane

0xe694,	// (0x00022bf5) cntbar_detail_btn_pane_cp01_ParamLimits

0xe694,	// (0x00022bf5) cntbar_detail_btn_pane_cp01

0xe6ae,	// (0x00022c0f) cntbar_detail_list_shct_pane_ParamLimits

0xe6ba,	// (0x00022c1b) cntbar_detail_pane_g1_ParamLimits

0xe6ba,	// (0x00022c1b) cntbar_detail_pane_g1

0xe6c6,	// (0x00022c27) cntbar_detail_pane_t1_ParamLimits

0xe6c6,	// (0x00022c27) cntbar_detail_pane_t1

0xe7d4,	// (0x00022d35) cntbar_detail_list_event_pane_g3_ParamLimits

0xe7d4,	// (0x00022d35) cntbar_detail_list_event_pane_g3

0xe7ec,	// (0x00022d4d) cntbar_detail_list_event_pane_g4_ParamLimits

0xe7ec,	// (0x00022d4d) cntbar_detail_list_event_pane_g4

0xe804,	// (0x00022d65) cntbar_detail_list_event_pane_g5_ParamLimits

0xe804,	// (0x00022d65) cntbar_detail_list_event_pane_g5

0xe81c,	// (0x00022d7d) cntbar_detail_list_event_pane_g6_ParamLimits

0xe81c,	// (0x00022d7d) cntbar_detail_list_event_pane_g6

0xe85e,	// (0x00022dbf) cntbar_detail_list_event_pane_t3_ParamLimits

0xe85e,	// (0x00022dbf) cntbar_detail_list_event_pane_t3

0xe870,	// (0x00022dd1) popup_notif_wgt_window_ParamLimits

0xe870,	// (0x00022dd1) popup_notif_wgt_window

0xe87e,	// (0x00022ddf) popup_submenu_window_cp01_ParamLimits

0xe87e,	// (0x00022ddf) popup_submenu_window_cp01

0x2690,	// (0x00016bf1) bg_popup_window_pane_cp10

0xe88a,	// (0x00022deb) listscroll_notif_wgt_pane

0xe892,	// (0x00022df3) list_notif_wgt_window

0xe89b,	// (0x00022dfc) scroll_pane_cp033

0xe8a4,	// (0x00022e05) list_notif_wgt_row_pane_ParamLimits

0xe8a4,	// (0x00022e05) list_notif_wgt_row_pane

0xe8b6,	// (0x00022e17) aid_size_list_notif_wgt_del

0xe8bf,	// (0x00022e20) list_notif_wgt_row_pane_g1

0xe8c7,	// (0x00022e28) list_notif_wgt_row_pane_g2

0xe8cf,	// (0x00022e30) list_notif_wgt_row_pane_g3

0x0002,

0xfec1,	// (0x00024422) list_notif_wgt_row_pane_g

0xe8d8,	// (0x00022e39) list_notif_wgt_row_pane_t1

0xe8e6,	// (0x00022e47) list_notif_wgt_row_pane_t2

0xe8f4,	// (0x00022e55) list_notif_wgt_row_pane_t3

0x0002,

0xfec8,	// (0x00024429) list_notif_wgt_row_pane_t

0x5062,	// (0x000195c3) list_recal_day_event_pane_g1

0xe902,	// (0x00022e63) list_recal_day_event_pane_t1

0x106d,	// (0x000155ce) bg_button_pane_cp045

0xe911,	// (0x00022e72) cntbar_detail_btn_pane_t1

0x3b86,	// (0x000180e7) main_callh_pane_ParamLimits

0x3b86,	// (0x000180e7) main_callh_pane

0x106d,	// (0x000155ce) main_coverflow0_pane

0x106d,	// (0x000155ce) main_wgtman_pane

0xd6ff,	// (0x00021c60) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xd6ff,	// (0x00021c60) main_fs_bigclock_unlock_btn_pane

0x6267,	// (0x0001a7c8) bg_button_pane_cp16

0x6277,	// (0x0001a7d8) cell_tport_appsw_pane_g3

0xe91f,	// (0x00022e80) cf0_flow_pane_ParamLimits

0xe91f,	// (0x00022e80) cf0_flow_pane

0xe92e,	// (0x00022e8f) listscroll_cf0_pane

0xe937,	// (0x00022e98) main_cf0_pane_g1

0xe941,	// (0x00022ea2) main_cf0_pane_t1_ParamLimits

0xe941,	// (0x00022ea2) main_cf0_pane_t1

0xe953,	// (0x00022eb4) main_cf0_pane_t2_ParamLimits

0xe953,	// (0x00022eb4) main_cf0_pane_t2

0x0001,

0xfecf,	// (0x00024430) main_cf0_pane_t_ParamLimits

0xfecf,	// (0x00024430) main_cf0_pane_t

0xe965,	// (0x00022ec6) scroll_pane_cp11

0xe96e,	// (0x00022ecf) cf0_flow_pane_g1

0xe976,	// (0x00022ed7) cf0_flow_pane_g2

0x0001,

0xfed4,	// (0x00024435) cf0_flow_pane_g

0xe97e,	// (0x00022edf) cf0_flow_pane_t1

0x106d,	// (0x000155ce) main_call6_pane

0x106d,	// (0x000155ce) main_calllock_pane

0xe98c,	// (0x00022eed) call6_btn_grp_pane_ParamLimits

0xe98c,	// (0x00022eed) call6_btn_grp_pane

0xe999,	// (0x00022efa) call6_pane_g1_ParamLimits

0xe999,	// (0x00022efa) call6_pane_g1

0xe9a6,	// (0x00022f07) popup_call6_1st_window_ParamLimits

0xe9a6,	// (0x00022f07) popup_call6_1st_window

0xe9b2,	// (0x00022f13) popup_call6_2nd_window_ParamLimits

0xe9b2,	// (0x00022f13) popup_call6_2nd_window

0xe9be,	// (0x00022f1f) cell_call6_btn_pane_ParamLimits

0xe9be,	// (0x00022f1f) cell_call6_btn_pane

0x2690,	// (0x00016bf1) bg_popup_call2_in_pane_cp03

0xe9cd,	// (0x00022f2e) popup_call6_1st_window_g1

0xe9d5,	// (0x00022f36) popup_call6_1st_window_g2

0xe9dd,	// (0x00022f3e) popup_call6_1st_window_g3

0x0002,

0xfed9,	// (0x0002443a) popup_call6_1st_window_g

0xe9e5,	// (0x00022f46) popup_call6_1st_window_t1

0xe9f4,	// (0x00022f55) popup_call6_1st_window_t2

0xea02,	// (0x00022f63) popup_call6_1st_window_t3

0x0002,

0xfee0,	// (0x00024441) popup_call6_1st_window_t

0x2690,	// (0x00016bf1) bg_popup_call2_in_pane_cp04

0xe9cd,	// (0x00022f2e) popup_call6_2nd_window_g1

0xe9d5,	// (0x00022f36) popup_call6_2nd_window_g2

0xe9dd,	// (0x00022f3e) popup_call6_2nd_window_g3

0x0002,

0xfed9,	// (0x0002443a) popup_call6_2nd_window_g

0xe9e5,	// (0x00022f46) popup_call6_2nd_window_t1

0x106d,	// (0x000155ce) bg_button_pane_cp15

0xea10,	// (0x00022f71) cell_call6_btn_pane_g1

0xea19,	// (0x00022f7a) cell_call6_btn_pane_t1

0xea28,	// (0x00022f89) listscroll_wgtman_pane_ParamLimits

0xea28,	// (0x00022f89) listscroll_wgtman_pane

0xea42,	// (0x00022fa3) wgtman_btn_pane_ParamLimits

0xea42,	// (0x00022fa3) wgtman_btn_pane

0x24d1,	// (0x00016a32) aid_scroll_copy1

0xea75,	// (0x00022fd6) list_wgtman_pane

0xea7f,	// (0x00022fe0) wgtman_btn_pane_g1_ParamLimits

0xea7f,	// (0x00022fe0) wgtman_btn_pane_g1

0xeaa7,	// (0x00023008) wgtman_btn_pane_t1_ParamLimits

0xeaa7,	// (0x00023008) wgtman_btn_pane_t1

0xeade,	// (0x0002303f) wgtman_btn_pane_t2_ParamLimits

0xeade,	// (0x0002303f) wgtman_btn_pane_t2

0x0001,

0xfee7,	// (0x00024448) wgtman_btn_pane_t_ParamLimits

0xfee7,	// (0x00024448) wgtman_btn_pane_t

0xeaf5,	// (0x00023056) listrow_wgtman_pane_ParamLimits

0xeaf5,	// (0x00023056) listrow_wgtman_pane

0xeb06,	// (0x00023067) listrow_wgtman_pane_g1

0xeb0f,	// (0x00023070) listrow_wgtman_pane_g2

0x0001,

0xfeec,	// (0x0002444d) listrow_wgtman_pane_g

0xeb17,	// (0x00023078) listrow_wgtman_pane_t1

0xeb25,	// (0x00023086) listrow_wgtman_pane_t2

0x0001,

0xfef1,	// (0x00024452) listrow_wgtman_pane_t

0xeb33,	// (0x00023094) wait_bar_pane_cp09

0xeb3b,	// (0x0002309c) main_calllock_btn_pane

0xeb43,	// (0x000230a4) main_calllock_pane_g1

0x106d,	// (0x000155ce) bg_button_pane_cp17

0xeb4c,	// (0x000230ad) main_calllock_btn_pane_g1

0xeb55,	// (0x000230b6) main_calllock_btn_pane_t1

0x106d,	// (0x000155ce) main_dialer3_pane

0x106d,	// (0x000155ce) main_fmrd2_pane

0x407b,	// (0x000185dc) main_fs_bigclock_unlock_btn_pane_g1

0xeb6c,	// (0x000230cd) main_fs_bigclock_unlock_btn_pane_t1

0xeb7a,	// (0x000230db) area_fmrd2_info_pane_ParamLimits

0xeb7a,	// (0x000230db) area_fmrd2_info_pane

0xeb86,	// (0x000230e7) area_fmrd2_visual_pane_ParamLimits

0xeb86,	// (0x000230e7) area_fmrd2_visual_pane

0xeb94,	// (0x000230f5) fmrd2_indi_pane_ParamLimits

0xeb94,	// (0x000230f5) fmrd2_indi_pane

0xeba1,	// (0x00023102) area_fmrd2_visual_pane_g1

0xeba9,	// (0x0002310a) area_fmrd2_visual_pane_t1

0xebb7,	// (0x00023118) area_fmrd2_visual_pane_t2

0xebc5,	// (0x00023126) area_fmrd2_visual_pane_t3

0x0002,

0xfefb,	// (0x0002445c) area_fmrd2_visual_pane_t

0xebd3,	// (0x00023134) area_fmrd2_info_pane_g1

0xebdb,	// (0x0002313c) area_fmrd2_info_pane_t1

0xebe9,	// (0x0002314a) area_fmrd2_info_pane_t2

0xebf7,	// (0x00023158) area_fmrd2_info_pane_t3

0xec05,	// (0x00023166) area_fmrd2_info_pane_t4

0x0003,

0xff02,	// (0x00024463) area_fmrd2_info_pane_t

0xec13,	// (0x00023174) fmrd2_indi_pane_t1

0xec21,	// (0x00023182) fmrd2_indi_pane_t2

0xec2f,	// (0x00023190) fmrd2_indi_pane_t3

0x0002,

0xff0b,	// (0x0002446c) fmrd2_indi_pane_t

0x5e06,	// (0x0001a367) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x5e06,	// (0x0001a367) list_single_fs_bigclock_indicator_pane_g5

0x5ea8,	// (0x0001a409) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x5ea8,	// (0x0001a409) list_single_fs_bigclock_indicator_pane_t5

0xdf6e,	// (0x000224cf) aid_cell_bcale_month_pane_ParamLimits

0xdf6e,	// (0x000224cf) aid_cell_bcale_month_pane

0xdf7a,	// (0x000224db) bcale_month_pane_ParamLimits

0xdf7a,	// (0x000224db) bcale_month_pane

0xdf86,	// (0x000224e7) bcale_preview_pane_ParamLimits

0xdf86,	// (0x000224e7) bcale_preview_pane

0xe5e6,	// (0x00022b47) list_single_fs_bigclock_pane_t1_ParamLimits

0xe600,	// (0x00022b61) list_single_fs_bigclock_pane_t2_ParamLimits

0xe600,	// (0x00022b61) list_single_fs_bigclock_pane_t2

0x0001,

0xfe92,	// (0x000243f3) list_single_fs_bigclock_pane_t_ParamLimits

0xfe92,	// (0x000243f3) list_single_fs_bigclock_pane_t

0xeb64,	// (0x000230c5) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfef6,	// (0x00024457) main_fs_bigclock_unlock_btn_pane_g

0xec3d,	// (0x0002319e) aid_dia3_key_size_ParamLimits

0xec3d,	// (0x0002319e) aid_dia3_key_size

0xec49,	// (0x000231aa) aid_dia3_listrow_size_ParamLimits

0xec49,	// (0x000231aa) aid_dia3_listrow_size

0xec57,	// (0x000231b8) dia3_keypad_fun_pane_ParamLimits

0xec57,	// (0x000231b8) dia3_keypad_fun_pane

0xec63,	// (0x000231c4) dia3_keypad_num_pane_ParamLimits

0xec63,	// (0x000231c4) dia3_keypad_num_pane

0xec6f,	// (0x000231d0) dia3_listscroll_pane_ParamLimits

0xec6f,	// (0x000231d0) dia3_listscroll_pane

0xec7b,	// (0x000231dc) dia3_numentry_pane_ParamLimits

0xec7b,	// (0x000231dc) dia3_numentry_pane

0xec87,	// (0x000231e8) dia3_list_pane

0xec90,	// (0x000231f1) scroll_pane_cp12

0x106d,	// (0x000155ce) bg_dia3_numentry_pane

0xec99,	// (0x000231fa) dia3_numentry_pane_t1

0xeca8,	// (0x00023209) cell_dia3_key_num_pane

0xecb0,	// (0x00023211) cell_dia3_key0_fun_pane_ParamLimits

0xecb0,	// (0x00023211) cell_dia3_key0_fun_pane

0xecbd,	// (0x0002321e) cell_dia3_key1_fun_pane_ParamLimits

0xecbd,	// (0x0002321e) cell_dia3_key1_fun_pane

0xecca,	// (0x0002322b) dia3_listrow_pane

0x5b18,	// (0x0001a079) bg_dia3_numentry_pane_g1

0x106d,	// (0x000155ce) bg_button_pane_cp21

0xecd7,	// (0x00023238) cell_dia3_key_num_pane_t1

0xece5,	// (0x00023246) cell_dia3_key_num_pane_t2

0xecf4,	// (0x00023255) cell_dia3_key_num_pane_t3

0xed03,	// (0x00023264) cell_dia3_key_num_pane_t4

0x0003,

0xff12,	// (0x00024473) cell_dia3_key_num_pane_t

0x106d,	// (0x000155ce) bg_button_pane_cp19

0xed12,	// (0x00023273) cell_dia3_key0_fun_pane_g1

0x106d,	// (0x000155ce) bg_button_pane_cp20

0xed1a,	// (0x0002327b) cell_dia3_key1_fun_pane_g1

0xed22,	// (0x00023283) area_left_week_number_pane

0xed2b,	// (0x0002328c) area_top_day_name_pane

0xed34,	// (0x00023295) frame_month_view_pane

0xed3c,	// (0x0002329d) grid_month_view_pane

0xed46,	// (0x000232a7) cell_top_day_name_pane_ParamLimits

0xed46,	// (0x000232a7) cell_top_day_name_pane

0xed5c,	// (0x000232bd) cell_area_left_week_number_pane_ParamLimits

0xed5c,	// (0x000232bd) cell_area_left_week_number_pane

0xed70,	// (0x000232d1) cell_month_view_pane_ParamLimits

0xed70,	// (0x000232d1) cell_month_view_pane

0xed8b,	// (0x000232ec) frm_month_g1

0xed94,	// (0x000232f5) frm_month_g2

0xed9c,	// (0x000232fd) frm_month_g3

0xeda4,	// (0x00023305) frm_month_g4

0xedac,	// (0x0002330d) frm_month_g5

0xedb4,	// (0x00023315) frm_month_g6

0xedbc,	// (0x0002331d) frm_month_g7

0xedc4,	// (0x00023325) frm_month_g8

0xedcd,	// (0x0002332e) frm_month_g9

0xedd6,	// (0x00023337) frm_month_g10

0xc18e,	// (0x000206ef) frm_month_g11

0xeddf,	// (0x00023340) frm_month_g12

0xede8,	// (0x00023349) frm_month_g13

0xedf1,	// (0x00023352) frm_month_g14

0xedfa,	// (0x0002335b) frm_month_g15

0xee03,	// (0x00023364) frm_month_g16

0x000f,

0xff1b,	// (0x0002447c) frm_month_g

0xee0c,	// (0x0002336d) cell_top_day_name_pane_t1

0xee1b,	// (0x0002337c) cell_area_left_week_number_pane_g1

0xee0c,	// (0x0002336d) cell_area_left_week_number_pane_t1

0x407b,	// (0x000185dc) cell_month_view_pane_g1

0xee23,	// (0x00023384) cell_month_view_pane_t1

0x106d,	// (0x000155ce) main_fps_pane

0x60a2,	// (0x0001a603) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x60a2,	// (0x0001a603) cmail_ddmenu_btn02_pane_cp1

0x60be,	// (0x0001a61f) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x60be,	// (0x0001a61f) cmail_ddmenu_btn02_pane_cp2

0xe308,	// (0x00022869) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xe308,	// (0x00022869) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe43,	// (0x000243a4) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe43,	// (0x000243a4) cmail_ddmenu_btn02_pane_g

0xe326,	// (0x00022887) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xe326,	// (0x00022887) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe48,	// (0x000243a9) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe48,	// (0x000243a9) cmail_ddmenu_btn02_pane_t

0xee32,	// (0x00023393) fps_text_pane_ParamLimits

0xee32,	// (0x00023393) fps_text_pane

0xee3f,	// (0x000233a0) main_fps_pane_g1_ParamLimits

0xee3f,	// (0x000233a0) main_fps_pane_g1

0xee4b,	// (0x000233ac) wait_bar_pane_cp010_ParamLimits

0xee4b,	// (0x000233ac) wait_bar_pane_cp010

0xee57,	// (0x000233b8) fps_text_pane_t1_ParamLimits

0xee57,	// (0x000233b8) fps_text_pane_t1

0xc17c,	// (0x000206dd) cam4_image_uncrop_pane_g1

0xc185,	// (0x000206e6) cam4_image_uncrop_pane_g2

0xc18e,	// (0x000206ef) cam4_image_uncrop_pane_g3

0xc197,	// (0x000206f8) cam4_image_uncrop_pane_g4

0x0003,

0xf920,	// (0x00023e81) cam4_image_uncrop_pane_g

0xecca,	// (0x0002322b) dia3_listrow_pane_ParamLimits

0x106d,	// (0x000155ce) main_phob2_pane

0xde01,	// (0x00022362) cell_tport_appsw_pane_cp02_ParamLimits

0xde01,	// (0x00022362) cell_tport_appsw_pane_cp02

0xde0e,	// (0x0002236f) cell_tport_appsw_pane_cp03_ParamLimits

0xde0e,	// (0x0002236f) cell_tport_appsw_pane_cp03

0x106d,	// (0x000155ce) phob2_contact_card_pane

0x106d,	// (0x000155ce) phob2_listscroll_pane

0xee70,	// (0x000233d1) phob2_list_pane

0xee78,	// (0x000233d9) scroll_pane_cp034

0xee80,	// (0x000233e1) phob2_cc_data_pane_ParamLimits

0xee80,	// (0x000233e1) phob2_cc_data_pane

0xee98,	// (0x000233f9) phob2_cc_listscroll_pane_ParamLimits

0xee98,	// (0x000233f9) phob2_cc_listscroll_pane

0xeeb0,	// (0x00023411) list_double_large_graphic_phob2_pane_ParamLimits

0xeeb0,	// (0x00023411) list_double_large_graphic_phob2_pane

0xeec3,	// (0x00023424) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xeec3,	// (0x00023424) list_double_large_graphic_phob2_pane_g1

0xeed0,	// (0x00023431) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xeed0,	// (0x00023431) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff3c,	// (0x0002449d) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff3c,	// (0x0002449d) list_double_large_graphic_phob2_pane_g

0xeedc,	// (0x0002343d) list_double_large_graphic_phob2_pane_t1_ParamLimits

0xeedc,	// (0x0002343d) list_double_large_graphic_phob2_pane_t1

0xeef1,	// (0x00023452) list_double_large_graphic_phob2_pane_t2_ParamLimits

0xeef1,	// (0x00023452) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff41,	// (0x000244a2) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff41,	// (0x000244a2) list_double_large_graphic_phob2_pane_t

0x106d,	// (0x000155ce) list_highlight_pane_cp024

0xef03,	// (0x00023464) phob2_cc_button_pane

0xef0b,	// (0x0002346c) phob2_cc_data_pane_g1_ParamLimits

0xef0b,	// (0x0002346c) phob2_cc_data_pane_g1

0xef17,	// (0x00023478) phob2_cc_data_pane_g2_ParamLimits

0xef17,	// (0x00023478) phob2_cc_data_pane_g2

0x0001,

0xff46,	// (0x000244a7) phob2_cc_data_pane_g_ParamLimits

0xff46,	// (0x000244a7) phob2_cc_data_pane_g

0xef23,	// (0x00023484) phob2_cc_data_pane_t1_ParamLimits

0xef23,	// (0x00023484) phob2_cc_data_pane_t1

0xef35,	// (0x00023496) phob2_cc_data_pane_t2_ParamLimits

0xef35,	// (0x00023496) phob2_cc_data_pane_t2

0xef47,	// (0x000234a8) phob2_cc_data_pane_t3_ParamLimits

0xef47,	// (0x000234a8) phob2_cc_data_pane_t3

0x0002,

0xff4b,	// (0x000244ac) phob2_cc_data_pane_t_ParamLimits

0xff4b,	// (0x000244ac) phob2_cc_data_pane_t

0xef59,	// (0x000234ba) phob2_cc_list_pane_ParamLimits

0xef59,	// (0x000234ba) phob2_cc_list_pane

0x5a35,	// (0x00019f96) scroll_pane_cp035_ParamLimits

0x5a35,	// (0x00019f96) scroll_pane_cp035

0x10c0,	// (0x00015621) bg_button_pane_cp033

0xef65,	// (0x000234c6) phob2_cc_button_pane_g1

0xef71,	// (0x000234d2) phob2_cc_button_pane_t1

0xef86,	// (0x000234e7) phob2_cc_button_pane_t2

0x0001,

0xff52,	// (0x000244b3) phob2_cc_button_pane_t

0xef98,	// (0x000234f9) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xef98,	// (0x000234f9) list_double_large_graphic_phob2_cc_pane

0xefb3,	// (0x00023514) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xefb3,	// (0x00023514) list_double_large_graphic_phob2_cc_pane_g1

0xefc4,	// (0x00023525) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xefc4,	// (0x00023525) list_double_large_graphic_phob2_cc_pane_g2

0xefd3,	// (0x00023534) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xefd3,	// (0x00023534) list_double_large_graphic_phob2_cc_pane_g3

0xefe2,	// (0x00023543) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0xefe2,	// (0x00023543) list_double_large_graphic_phob2_cc_pane_g4

0xeff3,	// (0x00023554) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xeff3,	// (0x00023554) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff57,	// (0x000244b8) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff57,	// (0x000244b8) list_double_large_graphic_phob2_cc_pane_g

0xf002,	// (0x00023563) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0xf002,	// (0x00023563) list_double_large_graphic_phob2_cc_pane_t1

0xf02b,	// (0x0002358c) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0xf02b,	// (0x0002358c) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff62,	// (0x000244c3) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff62,	// (0x000244c3) list_double_large_graphic_phob2_cc_pane_t

0xf054,	// (0x000235b5) list_highlight_pane_cp025_ParamLimits

0xf054,	// (0x000235b5) list_highlight_pane_cp025

0x10c0,	// (0x00015621) bg_button_pane_cp033_ParamLimits

0xef65,	// (0x000234c6) phob2_cc_button_pane_g1_ParamLimits

0xef71,	// (0x000234d2) phob2_cc_button_pane_t1_ParamLimits

0xef86,	// (0x000234e7) phob2_cc_button_pane_t2_ParamLimits

0xff52,	// (0x000244b3) phob2_cc_button_pane_t_ParamLimits

0x89f4,	// (0x0001cf55) popup_wgtman_window

0x5b38,	// (0x0001a099) scroll_pane_cp038

0xea5d,	// (0x00022fbe) wgtman_btn_pane_cp_01_ParamLimits

0xea5d,	// (0x00022fbe) wgtman_btn_pane_cp_01

0xf062,	// (0x000235c3) wgtman_content_pane

0xf06b,	// (0x000235cc) wgtman_heading_pane

0x106d,	// (0x000155ce) bg_heading_pane_cp02

0xf074,	// (0x000235d5) wgtman_heading_pane_g1

0xf07c,	// (0x000235dd) wgtman_heading_pane_t1

0xf08a,	// (0x000235eb) scroll_pane_cp036

0xf092,	// (0x000235f3) wgtman_list_pane

0xf09a,	// (0x000235fb) wgtman_list_pane_t1_ParamLimits

0xf09a,	// (0x000235fb) wgtman_list_pane_t1

0x80c6,	// (0x0001c627) cam4_grid_pane

0xc890,	// (0x00020df1) bg_button_pane_cp015_ParamLimits

0xc8a0,	// (0x00020e01) bg_button_pane_cp016_ParamLimits

0xc8b3,	// (0x00020e14) bg_button_pane_cp017_ParamLimits

0xc905,	// (0x00020e66) popup_vitu2_query_window_g3_ParamLimits

0xc905,	// (0x00020e66) popup_vitu2_query_window_g3

0xc9b8,	// (0x00020f19) popup_vitu2_query_window_t6_ParamLimits

0xc9b8,	// (0x00020f19) popup_vitu2_query_window_t6

0xc9e3,	// (0x00020f44) popup_vitu2_query_window_t7_ParamLimits

0xc9e3,	// (0x00020f44) popup_vitu2_query_window_t7

0xf0b2,	// (0x00023613) cam4_grid_pane_g1

0xf0bb,	// (0x0002361c) cam4_grid_pane_g2

0xf0c4,	// (0x00023625) cam4_grid_pane_g3

0xf0cd,	// (0x0002362e) cam4_grid_pane_g4

0x0003,

0xff67,	// (0x000244c8) cam4_grid_pane_g

0x9349,	// (0x0001d8aa) aid_placing_vt_slider_lsc_ParamLimits

0x95f3,	// (0x0001db54) vidtel_button_pane_ParamLimits

0x95f3,	// (0x0001db54) vidtel_button_pane

0x106d,	// (0x000155ce) bg_button_pane_cp034

0xf0d6,	// (0x00023637) vidtel_button_pane_g1

0xf0de,	// (0x0002363f) vidtel_button_pane_t1

0x5008,	// (0x00019569) aid_size_vtel_slider_touch

0x5a35,	// (0x00019f96) scroll_pane_cp039

0x5b64,	// (0x0001a0c5) ncim_query_button_pane_cp01_ParamLimits

0x5b83,	// (0x0001a0e4) ncimui_query_pane_g1_ParamLimits

0x10c0,	// (0x00015621) input_focus_pane_cp012_ParamLimits

0x5ba8,	// (0x0001a109) ncim_query_entry_pane_t1_ParamLimits

0x5a35,	// (0x00019f96) scroll_pane_cp039_ParamLimits
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

} // end of namespace AknLayoutScalable_Abrw_pqp_apps_qvga_prt_Normal
