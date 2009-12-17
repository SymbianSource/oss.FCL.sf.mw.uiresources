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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pqp_apps_qvga_prt + 0x000136de };

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
0x86e0,	// (0x0001bdbe) Screen

0x86ea,	// (0x0001bdc8) application_window

0x871c,	// (0x0001bdfa) area_bottom_pane_ParamLimits

0x871c,	// (0x0001bdfa) area_bottom_pane

0x874b,	// (0x0001be29) area_top_pane_ParamLimits

0x874b,	// (0x0001be29) area_top_pane

0x164d,	// (0x00014d2b) call_video_uplink_pane_ParamLimits

0x164d,	// (0x00014d2b) call_video_uplink_pane

0x87ce,	// (0x0001beac) main_pane_ParamLimits

0x87ce,	// (0x0001beac) main_pane

0x4180,	// (0x0001785e) context_pane

0xac26,	// (0x0001e304) navi_pane

0xac40,	// (0x0001e31e) popup_cale_events_window_ParamLimits

0xac40,	// (0x0001e31e) popup_cale_events_window

0x4193,	// (0x00017871) popup_mup_playback_window

0xac57,	// (0x0001e335) signal_pane

0x1dd4,	// (0x000154b2) main_browser_pane

0x2c41,	// (0x0001631f) main_burst_pane

0x439c,	// (0x00017a7a) main_calc_pane

0x2c41,	// (0x0001631f) main_cale_day_pane

0x1f9c,	// (0x0001567a) main_cale_month_pane

0x2c41,	// (0x0001631f) main_cale_week_pane

0x2c41,	// (0x0001631f) main_call_pane

0x1a88,	// (0x00015166) main_call_poc_pane

0x2c41,	// (0x0001631f) main_camera_pane

0x2c41,	// (0x0001631f) main_chi_dic_pane

0x2a40,	// (0x0001611e) main_clock_pane

0x1a88,	// (0x00015166) main_fmradio_pane

0x2c41,	// (0x0001631f) main_graph_messa_pane

0x1a88,	// (0x00015166) main_help_pane

0x1dd4,	// (0x000154b2) main_im_pane

0x1ce3,	// (0x000153c1) main_image_pane_ParamLimits

0x1ce3,	// (0x000153c1) main_image_pane

0x1a88,	// (0x00015166) main_location2_pane

0x2c41,	// (0x0001631f) main_location_pane

0x1a88,	// (0x00015166) main_messa_pane

0x1a88,	// (0x00015166) main_mp2_pane

0x2c41,	// (0x0001631f) main_mp_pane

0x1a88,	// (0x00015166) main_msg_pane

0x1a88,	// (0x00015166) main_mup_eq_pane

0x1a88,	// (0x00015166) main_mup_pane

0x2c41,	// (0x0001631f) main_notes_pane

0x1a88,	// (0x00015166) main_pec_pane

0x1a88,	// (0x00015166) main_phob_pane

0x1a88,	// (0x00015166) main_pinb_pane

0x1a88,	// (0x00015166) main_postcard_pane

0x1a88,	// (0x00015166) main_qdial_pane

0x2c41,	// (0x0001631f) main_skin_pane

0x1a88,	// (0x00015166) main_smil2_pane

0x2c41,	// (0x0001631f) main_smil_pane

0x2c41,	// (0x0001631f) main_video_pane

0x2c41,	// (0x0001631f) main_video_tele_pane

0x1ce3,	// (0x000153c1) main_viewer_pane_ParamLimits

0x1ce3,	// (0x000153c1) main_viewer_pane

0x2c41,	// (0x0001631f) main_vorec_pane

0xab58,	// (0x0001e236) popup_blid_sat_info_window_ParamLimits

0xab58,	// (0x0001e236) popup_blid_sat_info_window

0xab6c,	// (0x0001e24a) popup_dyc_status_message_window_ParamLimits

0xab6c,	// (0x0001e24a) popup_dyc_status_message_window

0xab78,	// (0x0001e256) popup_grid_large_graphic_window_ParamLimits

0xab78,	// (0x0001e256) popup_grid_large_graphic_window

0xabd0,	// (0x0001e2ae) popup_loc_request_window_ParamLimits

0xabd0,	// (0x0001e2ae) popup_loc_request_window

0xac00,	// (0x0001e2de) popup_wml_address_window_ParamLimits

0xac00,	// (0x0001e2de) popup_wml_address_window

0xaa3d,	// (0x0001e11b) call_muted_g1

0xa778,	// (0x0001de56) popup_call_audio_conf_window_ParamLimits

0xa778,	// (0x0001de56) popup_call_audio_conf_window

0xaa4d,	// (0x0001e12b) popup_call_audio_first_window_ParamLimits

0xaa4d,	// (0x0001e12b) popup_call_audio_first_window

0xaa81,	// (0x0001e15f) popup_call_audio_in_window_ParamLimits

0xaa81,	// (0x0001e15f) popup_call_audio_in_window

0xaa9d,	// (0x0001e17b) popup_call_audio_out_window_ParamLimits

0xaa9d,	// (0x0001e17b) popup_call_audio_out_window

0xaab9,	// (0x0001e197) popup_call_audio_second_window_ParamLimits

0xaab9,	// (0x0001e197) popup_call_audio_second_window

0xaae1,	// (0x0001e1bf) popup_call_audio_wait_window_ParamLimits

0xaae1,	// (0x0001e1bf) popup_call_audio_wait_window

0xab00,	// (0x0001e1de) popup_number_entry_window_ParamLimits

0xab00,	// (0x0001e1de) popup_number_entry_window

0x1677,	// (0x00014d55) bg_popup_call_pane_cp05_ParamLimits

0x1677,	// (0x00014d55) bg_popup_call_pane_cp05

0x1697,	// (0x00014d75) popup_number_entry_window_t1

0x16aa,	// (0x00014d88) popup_number_entry_window_t2

0x16bc,	// (0x00014d9a) popup_number_entry_window_t3

0x0003,

0xf12f,	// (0x0002280d) popup_number_entry_window_t

0x16ce,	// (0x00014dac) text_title_cp2

0x16e1,	// (0x00014dbf) bg_popup_call_pane_cp_ParamLimits

0x16e1,	// (0x00014dbf) bg_popup_call_pane_cp

0x16ef,	// (0x00014dcd) call_thumbnail_pane

0x16f7,	// (0x00014dd5) popup_call_audio_in_window_g1_ParamLimits

0x16f7,	// (0x00014dd5) popup_call_audio_in_window_g1

0x1703,	// (0x00014de1) popup_call_audio_in_window_g2_ParamLimits

0x1703,	// (0x00014de1) popup_call_audio_in_window_g2

0x170f,	// (0x00014ded) popup_call_audio_in_window_g3_ParamLimits

0x170f,	// (0x00014ded) popup_call_audio_in_window_g3

0x0002,

0xf138,	// (0x00022816) popup_call_audio_in_window_g_ParamLimits

0xf138,	// (0x00022816) popup_call_audio_in_window_g

0x171b,	// (0x00014df9) popup_call_audio_in_window_t1_ParamLimits

0x171b,	// (0x00014df9) popup_call_audio_in_window_t1

0x1736,	// (0x00014e14) popup_call_audio_in_window_t2_ParamLimits

0x1736,	// (0x00014e14) popup_call_audio_in_window_t2

0x1751,	// (0x00014e2f) popup_call_audio_in_window_t3_ParamLimits

0x1751,	// (0x00014e2f) popup_call_audio_in_window_t3

0x0002,

0xf13f,	// (0x0002281d) popup_call_audio_in_window_t_ParamLimits

0xf13f,	// (0x0002281d) popup_call_audio_in_window_t

0x16e1,	// (0x00014dbf) bg_popup_call_pane_cp01_ParamLimits

0x16e1,	// (0x00014dbf) bg_popup_call_pane_cp01

0x16ef,	// (0x00014dcd) call_thumbnail_pane_cp02

0x1764,	// (0x00014e42) call_type_pane_cp022

0x176c,	// (0x00014e4a) popup_call_audio_out_window_g1_ParamLimits

0x176c,	// (0x00014e4a) popup_call_audio_out_window_g1

0x177e,	// (0x00014e5c) popup_call_audio_out_window_g2_ParamLimits

0x177e,	// (0x00014e5c) popup_call_audio_out_window_g2

0x178a,	// (0x00014e68) popup_call_audio_out_window_g3_ParamLimits

0x178a,	// (0x00014e68) popup_call_audio_out_window_g3

0x0002,

0xf146,	// (0x00022824) popup_call_audio_out_window_g_ParamLimits

0xf146,	// (0x00022824) popup_call_audio_out_window_g

0x179c,	// (0x00014e7a) popup_call_audio_out_window_t1_ParamLimits

0x179c,	// (0x00014e7a) popup_call_audio_out_window_t1

0x17b4,	// (0x00014e92) popup_call_audio_out_window_t2_ParamLimits

0x17b4,	// (0x00014e92) popup_call_audio_out_window_t2

0x0001,

0xf14d,	// (0x0002282b) popup_call_audio_out_window_t_ParamLimits

0xf14d,	// (0x0002282b) popup_call_audio_out_window_t

0x17c9,	// (0x00014ea7) bg_popup_call_pane_ParamLimits

0x17c9,	// (0x00014ea7) bg_popup_call_pane

0x8977,	// (0x0001c055) call_thumbnail_pane_cp_ParamLimits

0x8977,	// (0x0001c055) call_thumbnail_pane_cp

0x184d,	// (0x00014f2b) call_type_pane_cp01_ParamLimits

0x184d,	// (0x00014f2b) call_type_pane_cp01

0x1891,	// (0x00014f6f) popup_call_audio_first_window_g1_ParamLimits

0x1891,	// (0x00014f6f) popup_call_audio_first_window_g1

0x18dd,	// (0x00014fbb) popup_call_audio_first_window_g2_ParamLimits

0x18dd,	// (0x00014fbb) popup_call_audio_first_window_g2

0x0001,

0xf152,	// (0x00022830) popup_call_audio_first_window_g_ParamLimits

0xf152,	// (0x00022830) popup_call_audio_first_window_g

0x1921,	// (0x00014fff) popup_call_audio_first_window_t1_ParamLimits

0x1921,	// (0x00014fff) popup_call_audio_first_window_t1

0x19cd,	// (0x000150ab) popup_call_audio_first_window_t4_ParamLimits

0x19cd,	// (0x000150ab) popup_call_audio_first_window_t4

0x1a59,	// (0x00015137) popup_call_audio_first_window_t5_ParamLimits

0x1a59,	// (0x00015137) popup_call_audio_first_window_t5

0x0002,

0xf157,	// (0x00022835) popup_call_audio_first_window_t_ParamLimits

0xf157,	// (0x00022835) popup_call_audio_first_window_t

0x1a88,	// (0x00015166) bg_popup_call_pane_cp02

0x1a92,	// (0x00015170) call_type_pane_cp023

0x1a9a,	// (0x00015178) popup_call_audio_wait_window_g1

0x1aa2,	// (0x00015180) popup_call_audio_wait_window_g2

0x0001,

0xf15e,	// (0x0002283c) popup_call_audio_wait_window_g

0x1aaa,	// (0x00015188) popup_call_audio_wait_window_t3

0x1ab8,	// (0x00015196) bg_popup_call_pane_cp03_ParamLimits

0x1ab8,	// (0x00015196) bg_popup_call_pane_cp03

0x1b18,	// (0x000151f6) call_thumbnail_pane_cp011_ParamLimits

0x1b18,	// (0x000151f6) call_thumbnail_pane_cp011

0x1b24,	// (0x00015202) call_type_pane_cp034_ParamLimits

0x1b24,	// (0x00015202) call_type_pane_cp034

0x1b60,	// (0x0001523e) popup_call_audio_second_window_g1_ParamLimits

0x1b60,	// (0x0001523e) popup_call_audio_second_window_g1

0x1b9c,	// (0x0001527a) popup_call_audio_second_window_g2_ParamLimits

0x1b9c,	// (0x0001527a) popup_call_audio_second_window_g2

0x0001,

0xf163,	// (0x00022841) popup_call_audio_second_window_g_ParamLimits

0xf163,	// (0x00022841) popup_call_audio_second_window_g

0x1bd8,	// (0x000152b6) popup_call_audio_second_window_t1_ParamLimits

0x1bd8,	// (0x000152b6) popup_call_audio_second_window_t1

0x1c59,	// (0x00015337) popup_call_audio_second_window_t2_ParamLimits

0x1c59,	// (0x00015337) popup_call_audio_second_window_t2

0x1c8f,	// (0x0001536d) popup_call_audio_second_window_t3_ParamLimits

0x1c8f,	// (0x0001536d) popup_call_audio_second_window_t3

0x0002,

0xf168,	// (0x00022846) popup_call_audio_second_window_t_ParamLimits

0xf168,	// (0x00022846) popup_call_audio_second_window_t

0x1a88,	// (0x00015166) bg_popup_call_pane_cp04

0x1cc5,	// (0x000153a3) list_conf_pane

0x1ccd,	// (0x000153ab) popup_call_audio_conf_window_t1

0x1cdb,	// (0x000153b9) call_thumbnail_pane_g1

0x1ce3,	// (0x000153c1) bg_pinb_pane_ParamLimits

0x1ce3,	// (0x000153c1) bg_pinb_pane

0x1cf1,	// (0x000153cf) find_pinb_pane

0x1cfa,	// (0x000153d8) listscroll_pinb_pane_ParamLimits

0x1cfa,	// (0x000153d8) listscroll_pinb_pane

0x1d09,	// (0x000153e7) pinb_bg_pane_g1

0x899b,	// (0x0001c079) pinb_bg_pane_g2

0x89a5,	// (0x0001c083) pinb_bg_pane_g3

0x89af,	// (0x0001c08d) pinb_bg_pane_g4

0x89b9,	// (0x0001c097) pinb_bg_pane_g5

0x89c3,	// (0x0001c0a1) pinb_bg_pane_g6

0x89ce,	// (0x0001c0ac) pinb_bg_pane_g7

0x89d9,	// (0x0001c0b7) pinb_bg_pane_g8

0x89e2,	// (0x0001c0c0) pinb_bg_pane_g9

0x89ea,	// (0x0001c0c8) pinb_bg_pane_g10

0x0009,

0xf16f,	// (0x0002284d) pinb_bg_pane_g

0x8a07,	// (0x0001c0e5) grid_pinb_pane

0x8a10,	// (0x0001c0ee) list_pinb_pane

0x8a1b,	// (0x0001c0f9) scroll_pane_cp01_ParamLimits

0x8a1b,	// (0x0001c0f9) scroll_pane_cp01

0x1d13,	// (0x000153f1) find_pinb_pane_g1_ParamLimits

0x1d13,	// (0x000153f1) find_pinb_pane_g1

0x1d2b,	// (0x00015409) find_pinb_pane_t1

0x1d3d,	// (0x0001541b) find_pinb_pane_t2

0x0001,

0xf189,	// (0x00022867) find_pinb_pane_t

0x1d52,	// (0x00015430) input_focus_pane_cp01_ParamLimits

0x1d52,	// (0x00015430) input_focus_pane_cp01

0x8a2b,	// (0x0001c109) cell_pinb_pane_ParamLimits

0x8a2b,	// (0x0001c109) cell_pinb_pane

0x8a44,	// (0x0001c122) cell_pinb_pane_g1_ParamLimits

0x8a44,	// (0x0001c122) cell_pinb_pane_g1

0x8a58,	// (0x0001c136) cell_pinb_pane_g2_ParamLimits

0x8a58,	// (0x0001c136) cell_pinb_pane_g2

0x1d5e,	// (0x0001543c) cell_pinb_pane_g3_ParamLimits

0x1d5e,	// (0x0001543c) cell_pinb_pane_g3

0x0002,

0xf18e,	// (0x0002286c) cell_pinb_pane_g_ParamLimits

0xf18e,	// (0x0002286c) cell_pinb_pane_g

0x1a88,	// (0x00015166) grid_highlight_pane_cp01

0x8a64,	// (0x0001c142) list_pinb_item_pane_ParamLimits

0x8a64,	// (0x0001c142) list_pinb_item_pane

0x1a88,	// (0x00015166) list_highlight_pane_cp02

0x8a79,	// (0x0001c157) list_pinb_item_pane_g1_ParamLimits

0x8a79,	// (0x0001c157) list_pinb_item_pane_g1

0x8a86,	// (0x0001c164) list_pinb_item_pane_g2_ParamLimits

0x8a86,	// (0x0001c164) list_pinb_item_pane_g2

0x8a92,	// (0x0001c170) list_pinb_item_pane_g3_ParamLimits

0x8a92,	// (0x0001c170) list_pinb_item_pane_g3

0x8aa1,	// (0x0001c17f) list_pinb_item_pane_g4_ParamLimits

0x8aa1,	// (0x0001c17f) list_pinb_item_pane_g4

0x0003,

0xf195,	// (0x00022873) list_pinb_item_pane_g_ParamLimits

0xf195,	// (0x00022873) list_pinb_item_pane_g

0x8aad,	// (0x0001c18b) list_pinb_item_pane_t1_ParamLimits

0x8aad,	// (0x0001c18b) list_pinb_item_pane_t1

0x731d,	// (0x0001a9fb) calc_display_pane

0x7335,	// (0x0001aa13) calc_paper_pane

0x7351,	// (0x0001aa2f) grid_calc_pane

0x1a88,	// (0x00015166) bg_list_pane_cp01

0x8ac4,	// (0x0001c1a2) clock_g1

0x8acc,	// (0x0001c1aa) clock_g2

0x0001,

0xf19e,	// (0x0002287c) clock_g

0x8ad4,	// (0x0001c1b2) clock_t1_ParamLimits

0x8ad4,	// (0x0001c1b2) clock_t1

0x8ae9,	// (0x0001c1c7) clock_t2_ParamLimits

0x8ae9,	// (0x0001c1c7) clock_t2

0x8afb,	// (0x0001c1d9) clock_t3_ParamLimits

0x8afb,	// (0x0001c1d9) clock_t3

0x8b0d,	// (0x0001c1eb) clock_t4_ParamLimits

0x8b0d,	// (0x0001c1eb) clock_t4

0x8b1f,	// (0x0001c1fd) clock_t5_ParamLimits

0x8b1f,	// (0x0001c1fd) clock_t5

0x8b34,	// (0x0001c212) clock_t6_ParamLimits

0x8b34,	// (0x0001c212) clock_t6

0x8b46,	// (0x0001c224) clock_t7_ParamLimits

0x8b46,	// (0x0001c224) clock_t7

0x8b58,	// (0x0001c236) clock_t8_ParamLimits

0x8b58,	// (0x0001c236) clock_t8

0x8b6a,	// (0x0001c248) clock_t9_ParamLimits

0x8b6a,	// (0x0001c248) clock_t9

0x0008,

0xf1a3,	// (0x00022881) clock_t_ParamLimits

0xf1a3,	// (0x00022881) clock_t

0x1d72,	// (0x00015450) popup_clock_analogue_window_cp02

0x1d72,	// (0x00015450) popup_clock_digital_window_cp01

0x1d7a,	// (0x00015458) listscroll_help_pane

0x1a88,	// (0x00015166) phob_pre_status_pane

0x1d84,	// (0x00015462) grid_qdial_pane

0x1a88,	// (0x00015166) listscroll_mce_pane

0x1d8e,	// (0x0001546c) bg_notes_pane

0x1d98,	// (0x00015476) list_notes_pane

0x8b7c,	// (0x0001c25a) scroll_pane_cp06

0x1da2,	// (0x00015480) bg_calc_paper_pane

0x737b,	// (0x0001aa59) list_calc_pane

0x1dd4,	// (0x000154b2) bg_calc_display_pane

0x7395,	// (0x0001aa73) calc_display_pane_t1

0x73aa,	// (0x0001aa88) calc_display_pane_t2

0x73bf,	// (0x0001aa9d) calc_display_pane_t3

0x0002,

0xf1b6,	// (0x00022894) calc_display_pane_t

0x73d1,	// (0x0001aaaf) cell_calc_pane_ParamLimits

0x73d1,	// (0x0001aaaf) cell_calc_pane

0x1e1c,	// (0x000154fa) bg_calc_paper_pane_g1

0x1e34,	// (0x00015512) bg_calc_paper_pane_g2

0x1e28,	// (0x00015506) bg_calc_paper_pane_g3

0x1e4c,	// (0x0001552a) bg_calc_paper_pane_g4

0x1e40,	// (0x0001551e) bg_calc_paper_pane_g5

0x8b85,	// (0x0001c263) bg_calc_paper_pane_g6

0x8b94,	// (0x0001c272) bg_calc_paper_pane_g7

0x8ba3,	// (0x0001c281) bg_calc_paper_pane_g8

0x0007,

0xf1bd,	// (0x0002289b) bg_calc_paper_pane_g

0x8bb2,	// (0x0001c290) calc_bg_paper_pane_g9

0x8bc1,	// (0x0001c29f) list_calc_item_pane_ParamLimits

0x8bc1,	// (0x0001c29f) list_calc_item_pane

0x1e58,	// (0x00015536) list_calc_item_pane_g1

0x73f8,	// (0x0001aad6) list_calc_item_pane_t1_ParamLimits

0x73f8,	// (0x0001aad6) list_calc_item_pane_t1

0x740a,	// (0x0001aae8) list_calc_item_pane_t2_ParamLimits

0x740a,	// (0x0001aae8) list_calc_item_pane_t2

0x0001,

0xf1ce,	// (0x000228ac) list_calc_item_pane_t_ParamLimits

0xf1ce,	// (0x000228ac) list_calc_item_pane_t

0x1e77,	// (0x00015555) cell_calc_pane_g1

0x1e81,	// (0x0001555f) grid_highlight_pane_cp02

0x1eb6,	// (0x00015594) bg_calc_display_pane_g1

0x7438,	// (0x0001ab16) bg_calc_display_pane_g2

0x1ea3,	// (0x00015581) bg_calc_display_pane_g3

0x0002,

0xf1d8,	// (0x000228b6) bg_calc_display_pane_g

0x7442,	// (0x0001ab20) cell_qdial_pane_ParamLimits

0x7442,	// (0x0001ab20) cell_qdial_pane

0x8bda,	// (0x0001c2b8) cell_qdial_pane_g1_ParamLimits

0x8bda,	// (0x0001c2b8) cell_qdial_pane_g1

0x8be7,	// (0x0001c2c5) cell_qdial_pane_g2_ParamLimits

0x8be7,	// (0x0001c2c5) cell_qdial_pane_g2

0x1ebf,	// (0x0001559d) cell_qdial_pane_g3_ParamLimits

0x1ebf,	// (0x0001559d) cell_qdial_pane_g3

0x0003,

0xf1df,	// (0x000228bd) cell_qdial_pane_g_ParamLimits

0xf1df,	// (0x000228bd) cell_qdial_pane_g

0x8c05,	// (0x0001c2e3) cell_qdial_pane_t1_ParamLimits

0x8c05,	// (0x0001c2e3) cell_qdial_pane_t1

0x8c1d,	// (0x0001c2fb) cell_qdial_pane_t2_ParamLimits

0x8c1d,	// (0x0001c2fb) cell_qdial_pane_t2

0x8c30,	// (0x0001c30e) cell_qdial_pane_t3_ParamLimits

0x8c30,	// (0x0001c30e) cell_qdial_pane_t3

0x0002,

0xf1e8,	// (0x000228c6) cell_qdial_pane_t_ParamLimits

0xf1e8,	// (0x000228c6) cell_qdial_pane_t

0x1a88,	// (0x00015166) grid_highlight_pane_cp04

0x1ecb,	// (0x000155a9) thumbnail_qdial_pane_ParamLimits

0x1ecb,	// (0x000155a9) thumbnail_qdial_pane

0x1f27,	// (0x00015605) list_help_pane

0x1f31,	// (0x0001560f) scroll_pane_cp02

0x8c43,	// (0x0001c321) help_list_pane_t1_ParamLimits

0x8c43,	// (0x0001c321) help_list_pane_t1

0x7454,	// (0x0001ab32) bg_notes_pane_g2

0x745c,	// (0x0001ab3a) bg_notes_pane_g3

0x7464,	// (0x0001ab42) notes_bg_pane_g1

0x746c,	// (0x0001ab4a) notes_bg_pane_g4

0x7474,	// (0x0001ab52) notes_bg_pane_g5

0x747c,	// (0x0001ab5a) notes_bg_pane_g6

0x7484,	// (0x0001ab62) notes_bg_pane_g7

0x748c,	// (0x0001ab6a) notes_bg_pane_g8

0x7494,	// (0x0001ab72) notes_bg_pane_g9

0x0006,

0xf206,	// (0x000228e4) notes_bg_pane_g

0x8c61,	// (0x0001c33f) list_notes_text_pane_ParamLimits

0x8c61,	// (0x0001c33f) list_notes_text_pane

0x1f82,	// (0x00015660) list_notes_text_pane_g1

0x8c77,	// (0x0001c355) list_notes_text_pane_t1

0x1f9c,	// (0x0001567a) listscroll_cale_week_pane

0x8ca0,	// (0x0001c37e) bg_cale_heading_pane

0x1fab,	// (0x00015689) bg_cale_pane_cp01

0x8cb4,	// (0x0001c392) cale_week_corner_pane

0x8cca,	// (0x0001c3a8) cale_week_day_heading_pane

0x8cde,	// (0x0001c3bc) cale_week_scroll_pane_g1

0x8cef,	// (0x0001c3cd) cale_week_scroll_pane_g2

0x8d00,	// (0x0001c3de) cale_week_scroll_pane_g3

0x8d11,	// (0x0001c3ef) cale_week_scroll_pane_g4

0x8d22,	// (0x0001c400) cale_week_scroll_pane_g5

0x8d33,	// (0x0001c411) cale_week_scroll_pane_g6

0x8d44,	// (0x0001c422) cale_week_scroll_pane_g7

0x8d55,	// (0x0001c433) cale_week_scroll_pane_g8

0x8d66,	// (0x0001c444) cale_week_scroll_pane_g9

0x8d77,	// (0x0001c455) cale_week_scroll_pane_g10

0x8d88,	// (0x0001c466) cale_week_scroll_pane_g11

0x8d99,	// (0x0001c477) cale_week_scroll_pane_g12

0x8daa,	// (0x0001c488) cale_week_scroll_pane_g13

0x8dbb,	// (0x0001c499) cale_week_scroll_pane_g14

0x8dcc,	// (0x0001c4aa) cale_week_scroll_pane_g15

0x000e,

0xf215,	// (0x000228f3) cale_week_scroll_pane_g

0x8ddd,	// (0x0001c4bb) cale_week_time_pane

0x8dee,	// (0x0001c4cc) grid_cale_week_pane

0x8e01,	// (0x0001c4df) scroll_pane_cp08

0x8e19,	// (0x0001c4f7) cell_cale_week_pane_ParamLimits

0x8e19,	// (0x0001c4f7) cell_cale_week_pane

0x8e55,	// (0x0001c533) cale_week_day_heading_pane_t1

0x8e6e,	// (0x0001c54c) cale_week_day_heading_pane_t2

0x8e87,	// (0x0001c565) cale_week_day_heading_pane_t3

0x8ea0,	// (0x0001c57e) cale_week_day_heading_pane_t4

0x8eb9,	// (0x0001c597) cale_week_day_heading_pane_t5

0x8ed2,	// (0x0001c5b0) cale_week_day_heading_pane_t6

0x8eeb,	// (0x0001c5c9) cale_week_day_heading_pane_t7

0x0006,

0xf234,	// (0x00022912) cale_week_day_heading_pane_t

0x1fd6,	// (0x000156b4) bg_cale_side_pane

0x749c,	// (0x0001ab7a) cale_week_time_pane_t1

0x74c8,	// (0x0001aba6) cale_week_time_pane_t2

0x74f4,	// (0x0001abd2) cale_week_time_pane_t3

0x7520,	// (0x0001abfe) cale_week_time_pane_t4

0x754c,	// (0x0001ac2a) cale_week_time_pane_t5

0x7578,	// (0x0001ac56) cale_week_time_pane_t6

0x75a4,	// (0x0001ac82) cale_week_time_pane_t7

0x75d0,	// (0x0001acae) cale_week_time_pane_t8

0x0007,

0xf243,	// (0x00022921) cale_week_time_pane_t

0x8f04,	// (0x0001c5e2) cell_cale_week_pane_g2

0x8f20,	// (0x0001c5fe) cell_cale_week_pane_g3_ParamLimits

0x8f20,	// (0x0001c5fe) cell_cale_week_pane_g3

0x1fe4,	// (0x000156c2) grid_highlight_pane_cp07

0x1fec,	// (0x000156ca) listscroll_gms_pane

0x1ff6,	// (0x000156d4) grid_gms_pane

0x1fff,	// (0x000156dd) listscroll_gms_pane_g1

0x2007,	// (0x000156e5) listscroll_gms_pane_g2

0x0001,

0xf254,	// (0x00022932) listscroll_gms_pane_g

0x8f38,	// (0x0001c616) scroll_pane_cp010

0x8f41,	// (0x0001c61f) cell_gms_pane_ParamLimits

0x8f41,	// (0x0001c61f) cell_gms_pane

0x8f52,	// (0x0001c630) cell_gms_pane_g1

0x200f,	// (0x000156ed) cell_gms_pane_g2

0x1f82,	// (0x00015660) cell_gms_pane_g3

0x2017,	// (0x000156f5) cell_gms_pane_g4

0x0003,

0xf259,	// (0x00022937) cell_gms_pane_g

0x2020,	// (0x000156fe) grid_highlight_pane_cp09

0xa9eb,	// (0x0001e0c9) phob_pre_status_pane_g1

0xa9f3,	// (0x0001e0d1) phob_pre_status_pane_g2

0xa9fb,	// (0x0001e0d9) phob_pre_status_pane_g3

0xaa03,	// (0x0001e0e1) phob_pre_status_pane_g4

0x0004,

0xf65b,	// (0x00022d39) phob_pre_status_pane_g

0xaa13,	// (0x0001e0f1) phob_pre_status_pane_t1

0xaa21,	// (0x0001e0ff) phob_pre_status_pane_t2

0xaa2f,	// (0x0001e10d) phob_pre_status_pane_t3

0x0002,

0xf666,	// (0x00022d44) phob_pre_status_pane_t

0x1a88,	// (0x00015166) bg_list_pane_cp05

0x7604,	// (0x0001ace2) grid_vorec_pane

0x760c,	// (0x0001acea) vorec_t1

0x761a,	// (0x0001acf8) vorec_t2

0x7628,	// (0x0001ad06) vorec_t3

0x7636,	// (0x0001ad14) vorec_t4

0x7644,	// (0x0001ad22) vorec_t5

0x7652,	// (0x0001ad30) vorec_t6

0x0006,

0xf262,	// (0x00022940) vorec_t

0x766e,	// (0x0001ad4c) wait_bar_pane_cp01

0x3050,	// (0x0001672e) cell_vorec_pane_ParamLimits

0x3050,	// (0x0001672e) cell_vorec_pane

0x2092,	// (0x00015770) cell_vorec_pane_g1

0x1a88,	// (0x00015166) grid_highlight_pane_cp05

0x8f66,	// (0x0001c644) cams_zoom_pane

0x8f72,	// (0x0001c650) image_vga_pane

0x8f7f,	// (0x0001c65d) main_camera_pane_g1

0x8f8b,	// (0x0001c669) main_camera_pane_g2

0x8f97,	// (0x0001c675) main_camera_pane_g3

0x8fa3,	// (0x0001c681) main_camera_pane_g4

0x8faf,	// (0x0001c68d) main_camera_pane_g5

0x8fbb,	// (0x0001c699) main_camera_pane_g6

0x8fc7,	// (0x0001c6a5) main_camera_pane_g7

0x0007,

0xf271,	// (0x0002294f) main_camera_pane_g

0x8fd3,	// (0x0001c6b1) main_camera_pane_t1

0x8fe5,	// (0x0001c6c3) main_camera_pane_t2

0x0001,

0xf282,	// (0x00022960) main_camera_pane_t

0x9009,	// (0x0001c6e7) cams_zoom_pane_cp_ParamLimits

0x9009,	// (0x0001c6e7) cams_zoom_pane_cp

0x902d,	// (0x0001c70b) image_cif_pane_ParamLimits

0x902d,	// (0x0001c70b) image_cif_pane

0x9047,	// (0x0001c725) image_subqcif_pane

0x904f,	// (0x0001c72d) main_video_pane_g1_ParamLimits

0x904f,	// (0x0001c72d) main_video_pane_g1

0x906f,	// (0x0001c74d) main_video_pane_g2_ParamLimits

0x906f,	// (0x0001c74d) main_video_pane_g2

0x909d,	// (0x0001c77b) main_video_pane_g3_ParamLimits

0x909d,	// (0x0001c77b) main_video_pane_g3

0x90c6,	// (0x0001c7a4) main_video_pane_g4_ParamLimits

0x90c6,	// (0x0001c7a4) main_video_pane_g4

0x90ef,	// (0x0001c7cd) main_video_pane_g5_ParamLimits

0x90ef,	// (0x0001c7cd) main_video_pane_g5

0x20a8,	// (0x00015786) main_video_pane_g6_ParamLimits

0x20a8,	// (0x00015786) main_video_pane_g6

0x0006,

0xf287,	// (0x00022965) main_video_pane_g_ParamLimits

0xf287,	// (0x00022965) main_video_pane_g

0x9111,	// (0x0001c7ef) main_video_pane_t1_ParamLimits

0x9111,	// (0x0001c7ef) main_video_pane_t1

0x20c2,	// (0x000157a0) cams_zoom_pane_g1

0x20cb,	// (0x000157a9) cams_zoom_pane_g2

0x20d4,	// (0x000157b2) cams_zoom_pane_g3

0x20dd,	// (0x000157bb) cams_zoom_pane_g4

0x0003,

0xf296,	// (0x00022974) cams_zoom_pane_g

0x915b,	// (0x0001c839) grid_cams_pane

0x9167,	// (0x0001c845) linegrid_cams_pane

0x9173,	// (0x0001c851) cell_cams_pane_ParamLimits

0x9173,	// (0x0001c851) cell_cams_pane

0x20e6,	// (0x000157c4) cams_burst_image_pane

0x20ee,	// (0x000157cc) cell_cams_pane_g1

0x1a88,	// (0x00015166) grid_highlight_pane_cp03

0x1e77,	// (0x00015555) mp_bg_pane_g1

0x1a88,	// (0x00015166) bg_list_pane_cp03

0x405c,	// (0x0001773a) bg_mp_pane

0x4064,	// (0x00017742) grid_mp_pane

0x406c,	// (0x0001774a) media_player_g1

0x4074,	// (0x00017752) media_player_t1

0x4082,	// (0x00017760) media_player_t2

0x4090,	// (0x0001776e) media_player_t3

0x409e,	// (0x0001777c) media_player_t4

0x40ac,	// (0x0001778a) media_player_t5

0x40ba,	// (0x00017798) media_player_t6

0x40c8,	// (0x000177a6) media_player_t7

0x0006,

0xf645,	// (0x00022d23) media_player_t

0x40d6,	// (0x000177b4) wait_bar_pane_cp02

0xf62a,	// (0x00022d08) main_usb_pane_t

0xa9e2,	// (0x0001e0c0) cell_mp_pane

0x1e77,	// (0x00015555) cell_mp_pane_g1

0x1a88,	// (0x00015166) grid_highlight_pane_cp06

0x2196,	// (0x00015874) grid_skin_colour_pane

0x219e,	// (0x0001587c) list_highlight_pane_cp03

0x91dc,	// (0x0001c8ba) skin_g1

0x21a6,	// (0x00015884) skin_t1

0x21b5,	// (0x00015893) skin_t2

0x0001,

0xf2cb,	// (0x000229a9) skin_t

0x91e4,	// (0x0001c8c2) cell_skin_colour_pane_ParamLimits

0x91e4,	// (0x0001c8c2) cell_skin_colour_pane

0x21c3,	// (0x000158a1) cell_skin_colour_pane_g1

0x922d,	// (0x0001c90b) call_video_g1_ParamLimits

0x922d,	// (0x0001c90b) call_video_g1

0x9239,	// (0x0001c917) call_video_g2_ParamLimits

0x9239,	// (0x0001c917) call_video_g2

0x0001,

0xf2d0,	// (0x000229ae) call_video_g_ParamLimits

0xf2d0,	// (0x000229ae) call_video_g

0x9271,	// (0x0001c94f) call_video_uplink_pane_cp1_ParamLimits

0x9271,	// (0x0001c94f) call_video_uplink_pane_cp1

0x21dd,	// (0x000158bb) call_video_uplink_pane_cp2

0x9300,	// (0x0001c9de) video_down_crop_pane_ParamLimits

0x9300,	// (0x0001c9de) video_down_crop_pane

0x93b6,	// (0x0001ca94) video_down_pane_ParamLimits

0x93b6,	// (0x0001ca94) video_down_pane

0x21e5,	// (0x000158c3) video_down_subqcif_pane_ParamLimits

0x21e5,	// (0x000158c3) video_down_subqcif_pane

0x21fd,	// (0x000158db) video_down_subqcif_pane_cp_ParamLimits

0x21fd,	// (0x000158db) video_down_subqcif_pane_cp

0x2221,	// (0x000158ff) im_reading_pane_ParamLimits

0x2221,	// (0x000158ff) im_reading_pane

0x9454,	// (0x0001cb32) im_writing_pane_ParamLimits

0x9454,	// (0x0001cb32) im_writing_pane

0x946a,	// (0x0001cb48) im_reading_pane_t1

0x223b,	// (0x00015919) list_im_pane

0x224c,	// (0x0001592a) scroll_pane_cp07

0x94a2,	// (0x0001cb80) im_writing_pane_t1_ParamLimits

0x94a2,	// (0x0001cb80) im_writing_pane_t1

0x2265,	// (0x00015943) im_writing_pane_t2_ParamLimits

0x2265,	// (0x00015943) im_writing_pane_t2

0x0001,

0xf2da,	// (0x000229b8) im_writing_pane_t_ParamLimits

0xf2da,	// (0x000229b8) im_writing_pane_t

0x1a88,	// (0x00015166) input_focus_pane_cp04

0x1a88,	// (0x00015166) input_focus_pane_cp05

0x94b7,	// (0x0001cb95) list_im_single_pane_ParamLimits

0x94b7,	// (0x0001cb95) list_im_single_pane

0x2282,	// (0x00015960) list_single_im_pane_t1

0xa9a8,	// (0x0001e086) blid_accuracy_pane

0xa9b0,	// (0x0001e08e) blid_compass_pane

0xa9b8,	// (0x0001e096) main_location_t1

0xa9c6,	// (0x0001e0a4) main_location_t2

0xa9d4,	// (0x0001e0b2) main_location_t3

0x0002,

0xf654,	// (0x00022d32) main_location_t

0x1a88,	// (0x00015166) aid_levels_location

0x1e77,	// (0x00015555) blid_accuracy_pane_g1

0x1e77,	// (0x00015555) blid_accuracy_pane_g2

0x0001,

0xf33c,	// (0x00022a1a) blid_accuracy_pane_g

0x22bc,	// (0x0001599a) wml_content_pane

0x22fa,	// (0x000159d8) wml_button_pane_ParamLimits

0x22fa,	// (0x000159d8) wml_button_pane

0x94cf,	// (0x0001cbad) wml_list_single_large_pane_ParamLimits

0x94cf,	// (0x0001cbad) wml_list_single_large_pane

0x94e6,	// (0x0001cbc4) wml_list_single_medium_pane_ParamLimits

0x94e6,	// (0x0001cbc4) wml_list_single_medium_pane

0x94fe,	// (0x0001cbdc) wml_list_single_small_pane_ParamLimits

0x94fe,	// (0x0001cbdc) wml_list_single_small_pane

0x230e,	// (0x000159ec) wml_selection_box_pane_ParamLimits

0x230e,	// (0x000159ec) wml_selection_box_pane

0x2321,	// (0x000159ff) wml_list_single_pane_t1

0x2330,	// (0x00015a0e) wml_list_single_medium_pane_t1

0x233f,	// (0x00015a1d) wml_list_single_large_pane_t1

0x234e,	// (0x00015a2c) input_focus_pane_cp02_ParamLimits

0x234e,	// (0x00015a2c) input_focus_pane_cp02

0x2361,	// (0x00015a3f) wml_selection_box_pane_g1

0x236a,	// (0x00015a48) wml_selection_box_pane_t1_ParamLimits

0x236a,	// (0x00015a48) wml_selection_box_pane_t1

0x1ce3,	// (0x000153c1) bg_wml_button_pane_ParamLimits

0x1ce3,	// (0x000153c1) bg_wml_button_pane

0x2382,	// (0x00015a60) wml_button_pane_g1

0x238a,	// (0x00015a68) wml_button_pane_t1

0x2382,	// (0x00015a60) wml_button_bg_pane_g1

0x239a,	// (0x00015a78) wml_button_bg_pane_g2

0x23a2,	// (0x00015a80) wml_button_bg_pane_g3

0x23aa,	// (0x00015a88) wml_button_bg_pane_g4

0x23b2,	// (0x00015a90) wml_button_bg_pane_g5

0x23ba,	// (0x00015a98) wml_button_bg_pane_g6

0x23c2,	// (0x00015aa0) wml_button_bg_pane_g7

0x23ca,	// (0x00015aa8) wml_button_bg_pane_g8

0x23d2,	// (0x00015ab0) wml_button_bg_pane_g9

0x0008,

0xf2df,	// (0x000229bd) wml_button_bg_pane_g

0x9519,	// (0x0001cbf7) bg_list_pane_cp02

0x23da,	// (0x00015ab8) mce_header_pane_ParamLimits

0x23da,	// (0x00015ab8) mce_header_pane

0x23ee,	// (0x00015acc) mce_icon_pane

0x23ee,	// (0x00015acc) mce_image_pane

0x23f7,	// (0x00015ad5) mce_text_pane_ParamLimits

0x23f7,	// (0x00015ad5) mce_text_pane

0x9522,	// (0x0001cc00) scroll_pane_cp03

0x9522,	// (0x0001cc00) scroll_pane_cp04

0x240b,	// (0x00015ae9) scroll_pane_cp05_ParamLimits

0x240b,	// (0x00015ae9) scroll_pane_cp05

0x952a,	// (0x0001cc08) mce_header_field_pane_ParamLimits

0x952a,	// (0x0001cc08) mce_header_field_pane

0x954a,	// (0x0001cc28) mce_header_field_pane_2_ParamLimits

0x954a,	// (0x0001cc28) mce_header_field_pane_2

0x9560,	// (0x0001cc3e) mce_header_field_pane_3

0x9568,	// (0x0001cc46) list_single_mce_message_pane_ParamLimits

0x9568,	// (0x0001cc46) list_single_mce_message_pane

0x957f,	// (0x0001cc5d) list_single_mce_smart_pane_ParamLimits

0x957f,	// (0x0001cc5d) list_single_mce_smart_pane

0x2417,	// (0x00015af5) input_focus_pane_cp03

0x2420,	// (0x00015afe) list_header_data_pane

0x95a1,	// (0x0001cc7f) mce_header_field_pane_t1

0x95af,	// (0x0001cc8d) list_single_mce_header_pane_ParamLimits

0x95af,	// (0x0001cc8d) list_single_mce_header_pane

0x2428,	// (0x00015b06) list_single_mce_header_pane_t1

0x2437,	// (0x00015b15) list_single_mce_message_pane_g1

0x2440,	// (0x00015b1e) list_single_mce_message_pane_t1

0x95e5,	// (0x0001ccc3) bg_cale_heading_pane_cp01_ParamLimits

0x95e5,	// (0x0001ccc3) bg_cale_heading_pane_cp01

0x244f,	// (0x00015b2d) bg_cale_pane_cp02_ParamLimits

0x244f,	// (0x00015b2d) bg_cale_pane_cp02

0x9608,	// (0x0001cce6) cale_month_corner_pane

0x961e,	// (0x0001ccfc) cale_month_day_heading_pane_ParamLimits

0x961e,	// (0x0001ccfc) cale_month_day_heading_pane

0x9641,	// (0x0001cd1f) cale_month_pane_g1_ParamLimits

0x9641,	// (0x0001cd1f) cale_month_pane_g1

0x965d,	// (0x0001cd3b) cale_month_pane_g2_ParamLimits

0x965d,	// (0x0001cd3b) cale_month_pane_g2

0x9676,	// (0x0001cd54) cale_month_pane_g3_ParamLimits

0x9676,	// (0x0001cd54) cale_month_pane_g3

0x96a2,	// (0x0001cd80) cale_month_pane_g4_ParamLimits

0x96a2,	// (0x0001cd80) cale_month_pane_g4

0x96ce,	// (0x0001cdac) cale_month_pane_g5_ParamLimits

0x96ce,	// (0x0001cdac) cale_month_pane_g5

0x96fa,	// (0x0001cdd8) cale_month_pane_g6_ParamLimits

0x96fa,	// (0x0001cdd8) cale_month_pane_g6

0x9726,	// (0x0001ce04) cale_month_pane_g7_ParamLimits

0x9726,	// (0x0001ce04) cale_month_pane_g7

0x9752,	// (0x0001ce30) cale_month_pane_g8_ParamLimits

0x9752,	// (0x0001ce30) cale_month_pane_g8

0x977e,	// (0x0001ce5c) cale_month_pane_g9_ParamLimits

0x977e,	// (0x0001ce5c) cale_month_pane_g9

0x97a8,	// (0x0001ce86) cale_month_pane_g10_ParamLimits

0x97a8,	// (0x0001ce86) cale_month_pane_g10

0x97d2,	// (0x0001ceb0) cale_month_pane_g11_ParamLimits

0x97d2,	// (0x0001ceb0) cale_month_pane_g11

0x97fc,	// (0x0001ceda) cale_month_pane_g12_ParamLimits

0x97fc,	// (0x0001ceda) cale_month_pane_g12

0x9826,	// (0x0001cf04) cale_month_pane_g13_ParamLimits

0x9826,	// (0x0001cf04) cale_month_pane_g13

0x000c,

0xf2f2,	// (0x000229d0) cale_month_pane_g_ParamLimits

0xf2f2,	// (0x000229d0) cale_month_pane_g

0x9850,	// (0x0001cf2e) cale_month_week_pane

0x9861,	// (0x0001cf3f) grid_cale_month_pane_ParamLimits

0x9861,	// (0x0001cf3f) grid_cale_month_pane

0x987f,	// (0x0001cf5d) cale_month_day_heading_pane_t1

0x98dd,	// (0x0001cfbb) cale_month_day_heading_pane_t2

0x9942,	// (0x0001d020) cale_month_day_heading_pane_t3

0x99a7,	// (0x0001d085) cale_month_day_heading_pane_t4

0x9a0c,	// (0x0001d0ea) cale_month_day_heading_pane_t5

0x9a71,	// (0x0001d14f) cale_month_day_heading_pane_t6

0x9ad6,	// (0x0001d1b4) cale_month_day_heading_pane_t7

0x0006,

0xf30d,	// (0x000229eb) cale_month_day_heading_pane_t

0x1fd6,	// (0x000156b4) bg_cale_side_pane_cp01

0x9b3b,	// (0x0001d219) cale_month_week_pane_t1

0x9b52,	// (0x0001d230) cale_month_week_pane_t2

0x9b69,	// (0x0001d247) cale_month_week_pane_t3

0x9b80,	// (0x0001d25e) cale_month_week_pane_t4

0x9b97,	// (0x0001d275) cale_month_week_pane_t5

0x9bae,	// (0x0001d28c) cale_month_week_pane_t6

0x0005,

0xf31c,	// (0x000229fa) cale_month_week_pane_t

0x9bc5,	// (0x0001d2a3) cell_cale_month_pane_ParamLimits

0x9bc5,	// (0x0001d2a3) cell_cale_month_pane

0x7676,	// (0x0001ad54) cell_cale_month_pane_g1

0x7682,	// (0x0001ad60) cell_cale_month_pane_t1_ParamLimits

0x7682,	// (0x0001ad60) cell_cale_month_pane_t1

0x1fe4,	// (0x000156c2) grid_highlight_pane_cp08

0x1e77,	// (0x00015555) main_smil_g1

0x9c6b,	// (0x0001d349) smil_status_pane

0x24ba,	// (0x00015b98) smil_text_pane

0x3f3c,	// (0x0001761a) bg_popup_call3_rect_pane_g8

0x3f44,	// (0x00017622) bg_popup_call3_rect_pane_g9

0x0008,

0xf5d5,	// (0x00022cb3) bg_popup_call3_rect_pane_g

0x420d,	// (0x000178eb) smil_status_volume_pane_g1

0x24c4,	// (0x00015ba2) smil_status_pane_t1

0x77c0,	// (0x0001ae9e) volume_smil_pane

0x24db,	// (0x00015bb9) list_smil_text_pane

0x9c7c,	// (0x0001d35a) scroll_pane_cp011

0x9c85,	// (0x0001d363) smil_text_list_pane_t1_ParamLimits

0x9c85,	// (0x0001d363) smil_text_list_pane_t1

0x769e,	// (0x0001ad7c) aid_volume_smil_ParamLimits

0x769e,	// (0x0001ad7c) aid_volume_smil

0x1e77,	// (0x00015555) smil_volume_pane_g1

0x1e77,	// (0x00015555) smil_volume_pane_g2

0x0001,

0xf33c,	// (0x00022a1a) smil_volume_pane_g

0x1dd4,	// (0x000154b2) listscroll_cale_day_pane

0x2507,	// (0x00015be5) bg_cale_pane

0x251f,	// (0x00015bfd) list_cale_pane

0x2530,	// (0x00015c0e) scroll_pane_cp09

0x2541,	// (0x00015c1f) cale_bg_pane_g1

0x2549,	// (0x00015c27) cale_bg_pane_g2

0x2551,	// (0x00015c2f) cale_bg_pane_g3

0x2559,	// (0x00015c37) cale_bg_pane_g4

0x2561,	// (0x00015c3f) cale_bg_pane_g5

0x2569,	// (0x00015c47) cale_bg_pane_g6

0x2571,	// (0x00015c4f) cale_bg_pane_g7

0x2579,	// (0x00015c57) cale_bg_pane_g8

0x2581,	// (0x00015c5f) cale_bg_pane_g9

0x0008,

0xf341,	// (0x00022a1f) cale_bg_pane_g

0x9cca,	// (0x0001d3a8) list_cale_time_pane_ParamLimits

0x9cca,	// (0x0001d3a8) list_cale_time_pane

0x2589,	// (0x00015c67) list_cale_time_pane_g1_ParamLimits

0x2589,	// (0x00015c67) list_cale_time_pane_g1

0x2595,	// (0x00015c73) list_cale_time_pane_g2_ParamLimits

0x2595,	// (0x00015c73) list_cale_time_pane_g2

0x9ce1,	// (0x0001d3bf) list_cale_time_pane_g3_ParamLimits

0x9ce1,	// (0x0001d3bf) list_cale_time_pane_g3

0x9ced,	// (0x0001d3cb) list_cale_time_pane_g4_ParamLimits

0x9ced,	// (0x0001d3cb) list_cale_time_pane_g4

0x9cf9,	// (0x0001d3d7) list_cale_time_pane_g5_ParamLimits

0x9cf9,	// (0x0001d3d7) list_cale_time_pane_g5

0x0005,

0xf354,	// (0x00022a32) list_cale_time_pane_g_ParamLimits

0xf354,	// (0x00022a32) list_cale_time_pane_g

0x25af,	// (0x00015c8d) list_cale_time_pane_t1_ParamLimits

0x25af,	// (0x00015c8d) list_cale_time_pane_t1

0x25d7,	// (0x00015cb5) list_cale_time_pane_t2_ParamLimits

0x25d7,	// (0x00015cb5) list_cale_time_pane_t2

0x9fa1,	// (0x0001d67f) aid_blid_cardinal_pane

0x9fdf,	// (0x0001d6bd) compass_pane_t4

0x25ff,	// (0x00015cdd) list_cale_time_pane_t4_ParamLimits

0x25ff,	// (0x00015cdd) list_cale_time_pane_t4

0x9fed,	// (0x0001d6cb) compass_pane_t5

0x9ffb,	// (0x0001d6d9) compass_pane_t6

0xa009,	// (0x0001d6e7) compass_pane_t7

0x2b44,	// (0x00016222) navi_pane_cc_t1

0x2cfa,	// (0x000163d8) aid_phob_thumbnail_center_pane

0xa555,	// (0x0001dc33) main_postcard_pane_g4_ParamLimits

0x0002,

0xf361,	// (0x00022a3f) list_cale_time_pane_t_ParamLimits

0xf361,	// (0x00022a3f) list_cale_time_pane_t

0x16e1,	// (0x00014dbf) bg_popup_window_pane_cp02_ParamLimits

0x16e1,	// (0x00014dbf) bg_popup_window_pane_cp02

0x2627,	// (0x00015d05) heading_pane_cp01_ParamLimits

0x2627,	// (0x00015d05) heading_pane_cp01

0x2633,	// (0x00015d11) loc_req_pane_ParamLimits

0x2633,	// (0x00015d11) loc_req_pane

0x2643,	// (0x00015d21) loc_type_pane_ParamLimits

0x2643,	// (0x00015d21) loc_type_pane

0x2655,	// (0x00015d33) loc_type_pane_t1_ParamLimits

0x2655,	// (0x00015d33) loc_type_pane_t1

0x2667,	// (0x00015d45) loc_type_pane_t2_ParamLimits

0x2667,	// (0x00015d45) loc_type_pane_t2

0x2679,	// (0x00015d57) loc_type_pane_t3_ParamLimits

0x2679,	// (0x00015d57) loc_type_pane_t3

0x0002,

0xf368,	// (0x00022a46) loc_type_pane_t_ParamLimits

0xf368,	// (0x00022a46) loc_type_pane_t

0x268b,	// (0x00015d69) list_loc_req_pane

0x2695,	// (0x00015d73) scroll_pane_cp012

0x9d05,	// (0x0001d3e3) list_single_loc_request_popup_menu_pane_ParamLimits

0x9d05,	// (0x0001d3e3) list_single_loc_request_popup_menu_pane

0x269e,	// (0x00015d7c) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x269e,	// (0x00015d7c) list_single_loc_request_popup_menu_pane_g1

0x26aa,	// (0x00015d88) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x26aa,	// (0x00015d88) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf36f,	// (0x00022a4d) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf36f,	// (0x00022a4d) list_single_loc_request_popup_menu_pane_g

0x26b6,	// (0x00015d94) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x26b6,	// (0x00015d94) list_single_loc_request_popup_menu_pane_t1

0x9d17,	// (0x0001d3f5) bg_popup_window_pane_cp03_ParamLimits

0x9d17,	// (0x0001d3f5) bg_popup_window_pane_cp03

0x9d25,	// (0x0001d403) heading_loc_req_pane_ParamLimits

0x9d25,	// (0x0001d403) heading_loc_req_pane

0x9d31,	// (0x0001d40f) popup_dyc_status_message_window_g1_ParamLimits

0x9d31,	// (0x0001d40f) popup_dyc_status_message_window_g1

0x9d3d,	// (0x0001d41b) popup_dyc_status_message_window_t1_ParamLimits

0x9d3d,	// (0x0001d41b) popup_dyc_status_message_window_t1

0x9d4f,	// (0x0001d42d) popup_dyc_status_message_window_t2_ParamLimits

0x9d4f,	// (0x0001d42d) popup_dyc_status_message_window_t2

0x9d61,	// (0x0001d43f) popup_dyc_status_message_window_t3_ParamLimits

0x9d61,	// (0x0001d43f) popup_dyc_status_message_window_t3

0x0002,

0xf374,	// (0x00022a52) popup_dyc_status_message_window_t_ParamLimits

0xf374,	// (0x00022a52) popup_dyc_status_message_window_t

0x1a88,	// (0x00015166) bg_heading_pane_cp01

0x26cc,	// (0x00015daa) heading_loc_req_pane_g1

0x26d4,	// (0x00015db2) heading_loc_req_pane_g2

0x26dc,	// (0x00015dba) heading_loc_req_pane_g3

0x0002,

0xf37b,	// (0x00022a59) heading_loc_req_pane_g

0x26e4,	// (0x00015dc2) heading_loc_req_pane_t1

0x278b,	// (0x00015e69) bg_popup_sub_pane_cp01_ParamLimits

0x278b,	// (0x00015e69) bg_popup_sub_pane_cp01

0x2799,	// (0x00015e77) popup_cale_events_window_g1_ParamLimits

0x2799,	// (0x00015e77) popup_cale_events_window_g1

0x27b9,	// (0x00015e97) popup_cale_events_window_g2_ParamLimits

0x27b9,	// (0x00015e97) popup_cale_events_window_g2

0x0001,

0xf3af,	// (0x00022a8d) popup_cale_events_window_g_ParamLimits

0xf3af,	// (0x00022a8d) popup_cale_events_window_g

0x27d9,	// (0x00015eb7) popup_cale_events_window_t1_ParamLimits

0x27d9,	// (0x00015eb7) popup_cale_events_window_t1

0x27eb,	// (0x00015ec9) popup_cale_events_window_t2_ParamLimits

0x27eb,	// (0x00015ec9) popup_cale_events_window_t2

0x2829,	// (0x00015f07) popup_cale_events_window_t3_ParamLimits

0x2829,	// (0x00015f07) popup_cale_events_window_t3

0x2863,	// (0x00015f41) popup_cale_events_window_t4_ParamLimits

0x2863,	// (0x00015f41) popup_cale_events_window_t4

0x0003,

0xf3b4,	// (0x00022a92) popup_cale_events_window_t_ParamLimits

0xf3b4,	// (0x00022a92) popup_cale_events_window_t

0x9de7,	// (0x0001d4c5) call_type_pane

0x2d12,	// (0x000163f0) popup_call_status_window_g1

0x9df3,	// (0x0001d4d1) popup_call_status_window_g2

0x9dff,	// (0x0001d4dd) popup_call_status_window_g3

0x0002,

0xf3bd,	// (0x00022a9b) popup_call_status_window_g

0x2899,	// (0x00015f77) call_type_pane_g1

0x28a2,	// (0x00015f80) call_type_pane_g2

0x0001,

0xf3c4,	// (0x00022aa2) call_type_pane_g

0x1a88,	// (0x00015166) bg_popup_sub_pane_cp02

0x28ab,	// (0x00015f89) listscroll_popup_wml_pane

0x28b3,	// (0x00015f91) list_wml_pane

0x28bd,	// (0x00015f9b) scroll_pane_cp013

0x9e0b,	// (0x0001d4e9) list_single_graphic_popup_wml_pane_ParamLimits

0x9e0b,	// (0x0001d4e9) list_single_graphic_popup_wml_pane

0x1e77,	// (0x00015555) list_single_graphic_popup_wml_pane_g1

0x28c6,	// (0x00015fa4) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf3c9,	// (0x00022aa7) list_single_graphic_popup_wml_pane_g

0x28ce,	// (0x00015fac) list_single_graphic_popup_wml_pane_t1

0x28dc,	// (0x00015fba) aid_call_pane

0x1cdb,	// (0x000153b9) popup_clock_analogue_window_g1

0x1cdb,	// (0x000153b9) popup_clock_analogue_window_g2

0x76c0,	// (0x0001ad9e) popup_clock_analogue_window_g3

0x76c0,	// (0x0001ad9e) popup_clock_analogue_window_g4

0x1e77,	// (0x00015555) popup_clock_analogue_window_g5

0x0004,

0xf3ce,	// (0x00022aac) popup_clock_analogue_window_g

0x76c8,	// (0x0001ada6) popup_clock_analogue_window_t1

0x76d6,	// (0x0001adb4) clock_digital_number_pane_ParamLimits

0x76d6,	// (0x0001adb4) clock_digital_number_pane

0x76e2,	// (0x0001adc0) clock_digital_number_pane_cp02_ParamLimits

0x76e2,	// (0x0001adc0) clock_digital_number_pane_cp02

0x76ee,	// (0x0001adcc) clock_digital_number_pane_cp03_ParamLimits

0x76ee,	// (0x0001adcc) clock_digital_number_pane_cp03

0x76fa,	// (0x0001add8) clock_digital_number_pane_cp04_ParamLimits

0x76fa,	// (0x0001add8) clock_digital_number_pane_cp04

0x7706,	// (0x0001ade4) clock_digital_separator_pane_ParamLimits

0x7706,	// (0x0001ade4) clock_digital_separator_pane

0x7712,	// (0x0001adf0) popup_clock_digital_window_t1

0x1e77,	// (0x00015555) clock_digital_number_pane_g1

0x1e77,	// (0x00015555) clock_digital_number_pane_g2

0x0001,

0xf33c,	// (0x00022a1a) clock_digital_number_pane_g

0x1e77,	// (0x00015555) clock_digital_separator_pane_g1

0x1e77,	// (0x00015555) clock_digital_separator_pane_g2

0x0001,

0xf33c,	// (0x00022a1a) clock_digital_separator_pane_g

0x1a88,	// (0x00015166) bg_popup_window_pane_cp04

0x295b,	// (0x00016039) heading_pane_cp03

0x2963,	// (0x00016041) listscroll_popup_gms_pane

0x296b,	// (0x00016049) grid_large_graphic_popup_pane

0x2975,	// (0x00016053) listscroll_popup_gms_pane_g1

0x297d,	// (0x0001605b) listscroll_popup_gms_pane_g2

0x0001,

0xf3d9,	// (0x00022ab7) listscroll_popup_gms_pane_g

0x22f2,	// (0x000159d0) scroll_pane_cp014

0x9e1f,	// (0x0001d4fd) cell_large_graphic_popup_pane_ParamLimits

0x9e1f,	// (0x0001d4fd) cell_large_graphic_popup_pane

0x9e36,	// (0x0001d514) cell_large_graphic_popup_pane_g1_ParamLimits

0x9e36,	// (0x0001d514) cell_large_graphic_popup_pane_g1

0x2985,	// (0x00016063) cell_large_graphic_popup_pane_g2_ParamLimits

0x2985,	// (0x00016063) cell_large_graphic_popup_pane_g2

0x2991,	// (0x0001606f) cell_large_graphic_popup_pane_g3_ParamLimits

0x2991,	// (0x0001606f) cell_large_graphic_popup_pane_g3

0x299e,	// (0x0001607c) cell_large_graphic_popup_pane_g4_ParamLimits

0x299e,	// (0x0001607c) cell_large_graphic_popup_pane_g4

0x0003,

0xf3de,	// (0x00022abc) cell_large_graphic_popup_pane_g_ParamLimits

0xf3de,	// (0x00022abc) cell_large_graphic_popup_pane_g

0x29ae,	// (0x0001608c) grid_highlight_pane_cp010

0x1e77,	// (0x00015555) bg_popup_call_pane_g1

0x29b8,	// (0x00016096) list_single_graphic_popup_conf_pane_ParamLimits

0x29b8,	// (0x00016096) list_single_graphic_popup_conf_pane

0x29cb,	// (0x000160a9) list_highlight_pane_cp01

0x29d4,	// (0x000160b2) list_single_graphic_popup_conf_pane_g1

0x29dc,	// (0x000160ba) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf3e7,	// (0x00022ac5) list_single_graphic_popup_conf_pane_g

0x29e4,	// (0x000160c2) list_single_graphic_popup_conf_pane_t1

0x29f2,	// (0x000160d0) linegrid_cams_pane_g1

0x9e42,	// (0x0001d520) linegrid_cams_pane_g2

0x1f82,	// (0x00015660) linegrid_cams_pane_g3

0x29fb,	// (0x000160d9) linegrid_cams_pane_g4

0x9e4b,	// (0x0001d529) linegrid_cams_pane_g5

0x9e54,	// (0x0001d532) linegrid_cams_pane_g6

0x2017,	// (0x000156f5) linegrid_cams_pane_g7

0x0006,

0xf3ec,	// (0x00022aca) linegrid_cams_pane_g

0x2a04,	// (0x000160e2) popup_clock_analogue_window

0x2a04,	// (0x000160e2) popup_clock_digital_window

0x1a88,	// (0x00015166) popup_phob_thumbnail_window

0x1e77,	// (0x00015555) call_video_uplink_pane_g1

0x2a0d,	// (0x000160eb) call_video_uplink_pane_g2

0x0001,

0xf3fb,	// (0x00022ad9) call_video_uplink_pane_g

0x1fe4,	// (0x000156c2) video_uplink_pane

0x2a15,	// (0x000160f3) mce_image_pane_g1

0x9e5d,	// (0x0001d53b) mce_image_pane_g2

0x9e65,	// (0x0001d543) mce_image_pane_g3

0x9e6d,	// (0x0001d54b) mce_image_pane_g4

0x9e75,	// (0x0001d553) mce_image_pane_g5

0x0004,

0xf400,	// (0x00022ade) mce_image_pane_g

0x2a1f,	// (0x000160fd) control_top_pane_stacon_cp01_ParamLimits

0x2a1f,	// (0x000160fd) control_top_pane_stacon_cp01

0x2a2f,	// (0x0001610d) uni_indicator_pane_stacon_cp01_ParamLimits

0x2a2f,	// (0x0001610d) uni_indicator_pane_stacon_cp01

0x2a40,	// (0x0001611e) bg_popup_sub_pane_cp03

0x2a4a,	// (0x00016128) chi_dic_find_pane

0x9e7d,	// (0x0001d55b) listscroll_chi_dic_pane

0x2a52,	// (0x00016130) main_pane_chidic_g1

0x2a5a,	// (0x00016138) chi_dic_find_pane_t1

0x2a68,	// (0x00016146) find_chidic_pane

0x2a71,	// (0x0001614f) chi_dic_list_pane_ParamLimits

0x2a71,	// (0x0001614f) chi_dic_list_pane

0x2a82,	// (0x00016160) scroll_pane_cp020

0x2a8a,	// (0x00016168) find_chidic_pane_t1

0x1a88,	// (0x00015166) input_focus_pane_cp06

0x9e8f,	// (0x0001d56d) list_chi_dic_pane_ParamLimits

0x9e8f,	// (0x0001d56d) list_chi_dic_pane

0x9ea2,	// (0x0001d580) list_chi_dic_pane_t1_ParamLimits

0x9ea2,	// (0x0001d580) list_chi_dic_pane_t1

0x1a88,	// (0x00015166) list_highlight_pane_cp020

0x2a99,	// (0x00016177) bg_cale_heading_pane_g1

0x9eb5,	// (0x0001d593) bg_cale_heading_pane_g2

0x9ebd,	// (0x0001d59b) bg_cale_heading_pane_g3

0x9ec5,	// (0x0001d5a3) bg_cale_heading_pane_g4

0x9ecd,	// (0x0001d5ab) bg_cale_heading_pane_g5

0x9ed5,	// (0x0001d5b3) bg_cale_heading_pane_g6

0x9edd,	// (0x0001d5bb) bg_cale_heading_pane_g7

0x9ee5,	// (0x0001d5c3) bg_cale_heading_pane_g8

0x9eed,	// (0x0001d5cb) bg_cale_heading_pane_g9

0x0008,

0xf40b,	// (0x00022ae9) bg_cale_heading_pane_g

0x2a99,	// (0x00016177) bg_cale_side_pane_g1

0x9ef5,	// (0x0001d5d3) bg_cale_side_pane_g2

0x9efd,	// (0x0001d5db) bg_cale_side_pane_g3

0x9f05,	// (0x0001d5e3) bg_cale_side_pane_g4

0x9f0d,	// (0x0001d5eb) bg_cale_side_pane_g5

0x9f15,	// (0x0001d5f3) bg_cale_side_pane_g6

0x9f1d,	// (0x0001d5fb) bg_cale_side_pane_g7

0x9f25,	// (0x0001d603) bg_cale_side_pane_g8

0x9f2d,	// (0x0001d60b) bg_cale_side_pane_g9

0x0008,

0xf41e,	// (0x00022afc) bg_cale_side_pane_g

0x9f35,	// (0x0001d613) popup_call_status_window_ParamLimits

0x9f35,	// (0x0001d613) popup_call_status_window

0x2aa1,	// (0x0001617f) stacon_top_pane

0x2aa9,	// (0x00016187) status_pane_ParamLimits

0x2aa9,	// (0x00016187) status_pane

0x2ac3,	// (0x000161a1) status_small_pane

0x2acb,	// (0x000161a9) control_pane

0x1a88,	// (0x00015166) stacon_bottom_pane

0x2ad3,	// (0x000161b1) list_single_mce_smart_pane_t1_ParamLimits

0x2ad3,	// (0x000161b1) list_single_mce_smart_pane_t1

0x2ae6,	// (0x000161c4) list_single_mce_smart_pane_t2_ParamLimits

0x2ae6,	// (0x000161c4) list_single_mce_smart_pane_t2

0x0001,

0xf431,	// (0x00022b0f) list_single_mce_smart_pane_t_ParamLimits

0xf431,	// (0x00022b0f) list_single_mce_smart_pane_t

0x9f44,	// (0x0001d622) compass_pane

0x9f4d,	// (0x0001d62b) main_location2_pane_t1

0x9f63,	// (0x0001d641) main_location2_pane_t2

0x9f79,	// (0x0001d657) main_location2_pane_t3

0x0003,

0xf436,	// (0x00022b14) main_location2_pane_t

0x2b0e,	// (0x000161ec) compass_pane_g1_ParamLimits

0x2b0e,	// (0x000161ec) compass_pane_g1

0x9fc1,	// (0x0001d69f) compass_pane_t1

0x9fd0,	// (0x0001d6ae) compass_pane_t2

0x0005,

0xf43f,	// (0x00022b1d) compass_pane_t

0xa017,	// (0x0001d6f5) text_secondary_cp61

0x2b3b,	// (0x00016219) navi_pane_cams_g5

0x2b7c,	// (0x0001625a) navi_pane_im_t1

0x2b8a,	// (0x00016268) navi_pane_mp_g1_ParamLimits

0x2b8a,	// (0x00016268) navi_pane_mp_g1

0x2b9e,	// (0x0001627c) navi_pane_mp_g2_ParamLimits

0x2b9e,	// (0x0001627c) navi_pane_mp_g2

0x2baa,	// (0x00016288) navi_pane_mp_g3_ParamLimits

0x2baa,	// (0x00016288) navi_pane_mp_g3

0x0002,

0xf453,	// (0x00022b31) navi_pane_mp_g_ParamLimits

0xf453,	// (0x00022b31) navi_pane_mp_g

0x2bb6,	// (0x00016294) navi_pane_mp_t1

0x2bc4,	// (0x000162a2) navi_pane_mp_t2

0x0002,

0xf45a,	// (0x00022b38) navi_pane_mp_t

0x2c31,	// (0x0001630f) navi_pane_vt_g1

0x2bb6,	// (0x00016294) navi_pane_vt_t1

0x2c39,	// (0x00016317) navi_slider_pane

0x2c41,	// (0x0001631f) zooming_pane

0x2c49,	// (0x00016327) navi_slider_pane_g1

0x772f,	// (0x0001ae0d) navi_slider_pane_g2

0x0006,

0xf461,	// (0x00022b3f) navi_slider_pane_g

0x2c7f,	// (0x0001635d) aid_levels_zoom

0x2c87,	// (0x00016365) zooming_pane_g1

0x2c8f,	// (0x0001636d) zooming_pane_g2

0x2c8f,	// (0x0001636d) zooming_pane_g3

0x0002,

0xf470,	// (0x00022b4e) zooming_pane_g

0x2c97,	// (0x00016375) level_10_zoom

0x2ca0,	// (0x0001637e) level_11_zoom

0x2ca9,	// (0x00016387) level_1_zoom

0x2cb2,	// (0x00016390) level_2_zoom

0x2cbb,	// (0x00016399) level_3_zoom

0x2cc4,	// (0x000163a2) level_4_zoom

0x2ccd,	// (0x000163ab) level_5_zoom

0x2cd6,	// (0x000163b4) level_6_zoom

0x2cdf,	// (0x000163bd) level_7_zoom

0x2ce8,	// (0x000163c6) level_8_zoom

0x2cf1,	// (0x000163cf) level_9_zoom

0x2d02,	// (0x000163e0) popup_phob_thumbnail_window_g1

0x2d0a,	// (0x000163e8) popup_phob_thumbnail_window_g2

0x0001,

0xf477,	// (0x00022b55) popup_phob_thumbnail_window_g

0x40de,	// (0x000177bc) level_1_location

0x40e6,	// (0x000177c4) level_2_location

0x40ee,	// (0x000177cc) level_3_location

0x40f6,	// (0x000177d4) level_4_location

0x2c41,	// (0x0001631f) level_5_location

0xa08e,	// (0x0001d76c) mce_icon_pane_g1

0xa096,	// (0x0001d774) mce_icon_pane_g2

0x0001,

0xf47c,	// (0x00022b5a) mce_icon_pane_g

0xa09e,	// (0x0001d77c) main_mup_pane_g1_ParamLimits

0xa09e,	// (0x0001d77c) main_mup_pane_g1

0xa0b6,	// (0x0001d794) main_mup_pane_g2_ParamLimits

0xa0b6,	// (0x0001d794) main_mup_pane_g2

0xa0d2,	// (0x0001d7b0) main_mup_pane_g3_ParamLimits

0xa0d2,	// (0x0001d7b0) main_mup_pane_g3

0xa0ee,	// (0x0001d7cc) main_mup_pane_g4_ParamLimits

0xa0ee,	// (0x0001d7cc) main_mup_pane_g4

0xa10a,	// (0x0001d7e8) main_mup_pane_g5_ParamLimits

0xa10a,	// (0x0001d7e8) main_mup_pane_g5

0xa127,	// (0x0001d805) main_mup_pane_g6_ParamLimits

0xa127,	// (0x0001d805) main_mup_pane_g6

0xa143,	// (0x0001d821) main_mup_pane_g7_ParamLimits

0xa143,	// (0x0001d821) main_mup_pane_g7

0xa15f,	// (0x0001d83d) main_mup_pane_g8_ParamLimits

0xa15f,	// (0x0001d83d) main_mup_pane_g8

0xa17b,	// (0x0001d859) main_mup_pane_g9_ParamLimits

0xa17b,	// (0x0001d859) main_mup_pane_g9

0xa192,	// (0x0001d870) main_mup_pane_g10_ParamLimits

0xa192,	// (0x0001d870) main_mup_pane_g10

0xa1a9,	// (0x0001d887) main_mup_pane_g11_ParamLimits

0xa1a9,	// (0x0001d887) main_mup_pane_g11

0xa1bd,	// (0x0001d89b) main_mup_pane_g12_ParamLimits

0xa1bd,	// (0x0001d89b) main_mup_pane_g12

0xa1c9,	// (0x0001d8a7) main_mup_pane_g13_ParamLimits

0xa1c9,	// (0x0001d8a7) main_mup_pane_g13

0x000c,

0xf481,	// (0x00022b5f) main_mup_pane_g_ParamLimits

0xf481,	// (0x00022b5f) main_mup_pane_g

0xa1dd,	// (0x0001d8bb) main_mup_pane_t1_ParamLimits

0xa1dd,	// (0x0001d8bb) main_mup_pane_t1

0xa1fa,	// (0x0001d8d8) main_mup_pane_t2_ParamLimits

0xa1fa,	// (0x0001d8d8) main_mup_pane_t2

0xa214,	// (0x0001d8f2) main_mup_pane_t3_ParamLimits

0xa214,	// (0x0001d8f2) main_mup_pane_t3

0xa22e,	// (0x0001d90c) main_mup_pane_t4_ParamLimits

0xa22e,	// (0x0001d90c) main_mup_pane_t4

0xa240,	// (0x0001d91e) main_mup_pane_t5_ParamLimits

0xa240,	// (0x0001d91e) main_mup_pane_t5

0xa252,	// (0x0001d930) main_mup_pane_t6_ParamLimits

0xa252,	// (0x0001d930) main_mup_pane_t6

0x0005,

0xf49c,	// (0x00022b7a) main_mup_pane_t_ParamLimits

0xf49c,	// (0x00022b7a) main_mup_pane_t

0xa268,	// (0x0001d946) mup_progress_pane_ParamLimits

0xa268,	// (0x0001d946) mup_progress_pane

0xa274,	// (0x0001d952) mup_visualizer_pane_ParamLimits

0xa274,	// (0x0001d952) mup_visualizer_pane

0xa2a2,	// (0x0001d980) mup_volume_pane_ParamLimits

0xa2a2,	// (0x0001d980) mup_volume_pane

0x2d12,	// (0x000163f0) mup_visualizer_pane_g1_ParamLimits

0x2d12,	// (0x000163f0) mup_visualizer_pane_g1

0x2d12,	// (0x000163f0) mup_visualizer_pane_g2_ParamLimits

0x2d12,	// (0x000163f0) mup_visualizer_pane_g2

0x2b0e,	// (0x000161ec) mup_visualizer_pane_g3_ParamLimits

0x2b0e,	// (0x000161ec) mup_visualizer_pane_g3

0x0002,

0xf4a9,	// (0x00022b87) mup_visualizer_pane_g_ParamLimits

0xf4a9,	// (0x00022b87) mup_visualizer_pane_g

0x1e77,	// (0x00015555) mup_volume_pane_g1

0x2d28,	// (0x00016406) mup_volume_pane_g2

0x0001,

0xf4b0,	// (0x00022b8e) mup_volume_pane_g

0x1e77,	// (0x00015555) mup_progress_pane_g1

0x2d31,	// (0x0001640f) mup_progress_pane_g2

0x2d3a,	// (0x00016418) mup_progress_pane_g3

0x0002,

0xf4b5,	// (0x00022b93) mup_progress_pane_g

0x1a88,	// (0x00015166) bg_popup_window_pane_cp05

0x2d43,	// (0x00016421) heading_pane_cp02_ParamLimits

0x2d43,	// (0x00016421) heading_pane_cp02

0x2d5d,	// (0x0001643b) list_popup_blid_pane

0x2d65,	// (0x00016443) list_blid_sat_info_pane_ParamLimits

0x2d65,	// (0x00016443) list_blid_sat_info_pane

0x2d78,	// (0x00016456) list_blid_sat_info_pane_g1

0x2d80,	// (0x0001645e) list_blid_sat_info_pane_t1

0xa395,	// (0x0001da73) mup_equalizer_pane_ParamLimits

0xa395,	// (0x0001da73) mup_equalizer_pane

0xa3ae,	// (0x0001da8c) mup_equalizer_pane_cp1_ParamLimits

0xa3ae,	// (0x0001da8c) mup_equalizer_pane_cp1

0xa3c7,	// (0x0001daa5) mup_equalizer_pane_cp2_ParamLimits

0xa3c7,	// (0x0001daa5) mup_equalizer_pane_cp2

0xa3e0,	// (0x0001dabe) mup_equalizer_pane_cp3_ParamLimits

0xa3e0,	// (0x0001dabe) mup_equalizer_pane_cp3

0xa3f9,	// (0x0001dad7) mup_equalizer_pane_cp4_ParamLimits

0xa3f9,	// (0x0001dad7) mup_equalizer_pane_cp4

0xa412,	// (0x0001daf0) mup_equalizer_pane_cp5

0xa424,	// (0x0001db02) mup_equalizer_pane_cp6

0xa436,	// (0x0001db14) mup_equalizer_pane_cp7

0x3fbc,	// (0x0001769a) bg_popup_call_poc_act_pane_g9

0x3fc4,	// (0x000176a2) bg_popup_call_poc_act_pane_g10

0x3fcc,	// (0x000176aa) bg_popup_call_poc_act_pane_g11

0x000a,

0x1ce3,	// (0x000153c1) mup_scale_pane

0x1e77,	// (0x00015555) mup_scale_pane_g1

0x2d8e,	// (0x0001646c) mup_scale_pane_g2

0x0006,

0xf4d1,	// (0x00022baf) mup_scale_pane_g

0x2db2,	// (0x00016490) msg_data_pane

0x2dba,	// (0x00016498) scroll_pane_cp017

0xa45a,	// (0x0001db38) bg_list_pane_cp04_ParamLimits

0xa45a,	// (0x0001db38) bg_list_pane_cp04

0x2dca,	// (0x000164a8) msg_data_pane_g1

0x9e5d,	// (0x0001d53b) msg_data_pane_g2

0x9e65,	// (0x0001d543) msg_data_pane_g3

0xa472,	// (0x0001db50) msg_data_pane_g4

0x9e75,	// (0x0001d553) msg_data_pane_g5

0xa08e,	// (0x0001d76c) msg_data_pane_g6

0xa47a,	// (0x0001db58) msg_data_pane_g7

0x0006,

0xf4e0,	// (0x00022bbe) msg_data_pane_g

0xa482,	// (0x0001db60) msg_text_pane_ParamLimits

0xa482,	// (0x0001db60) msg_text_pane

0xa4a9,	// (0x0001db87) qrid_highlight_pane_cp011_ParamLimits

0xa4a9,	// (0x0001db87) qrid_highlight_pane_cp011

0x1a88,	// (0x00015166) msg_body_pane

0x1a88,	// (0x00015166) msg_header_pane

0x2ddb,	// (0x000164b9) input_focus_pane_cp07

0xa4cb,	// (0x0001dba9) msg_header_pane_t1_ParamLimits

0xa4cb,	// (0x0001dba9) msg_header_pane_t1

0x2df0,	// (0x000164ce) msg_header_pane_t2_ParamLimits

0x2df0,	// (0x000164ce) msg_header_pane_t2

0x0001,

0xf4f4,	// (0x00022bd2) msg_header_pane_t_ParamLimits

0xf4f4,	// (0x00022bd2) msg_header_pane_t

0x2e02,	// (0x000164e0) msg_body_pane_g1

0x2e0a,	// (0x000164e8) msg_body_pane_t1_ParamLimits

0x2e0a,	// (0x000164e8) msg_body_pane_t1

0x2e35,	// (0x00016513) msg_body_pane_t2_ParamLimits

0x2e35,	// (0x00016513) msg_body_pane_t2

0x2e47,	// (0x00016525) msg_body_pane_t3_ParamLimits

0x2e47,	// (0x00016525) msg_body_pane_t3

0x0002,

0xf4f9,	// (0x00022bd7) msg_body_pane_t_ParamLimits

0xf4f9,	// (0x00022bd7) msg_body_pane_t

0x7771,	// (0x0001ae4f) main_viewer_pane_g1_ParamLimits

0x7771,	// (0x0001ae4f) main_viewer_pane_g1

0x777d,	// (0x0001ae5b) main_viewer_pane_g2_ParamLimits

0x777d,	// (0x0001ae5b) main_viewer_pane_g2

0xa4fb,	// (0x0001dbd9) main_viewer_pane_g3_ParamLimits

0xa4fb,	// (0x0001dbd9) main_viewer_pane_g3

0xa50a,	// (0x0001dbe8) main_viewer_pane_g4_ParamLimits

0xa50a,	// (0x0001dbe8) main_viewer_pane_g4

0x7789,	// (0x0001ae67) main_viewer_pane_g5_ParamLimits

0x7789,	// (0x0001ae67) main_viewer_pane_g5

0x7789,	// (0x0001ae67) main_viewer_pane_g7_ParamLimits

0x7789,	// (0x0001ae67) main_viewer_pane_g7

0x779b,	// (0x0001ae79) main_viewer_pane_g8_ParamLimits

0x779b,	// (0x0001ae79) main_viewer_pane_g8

0x0007,

0xf509,	// (0x00022be7) main_viewer_pane_g_ParamLimits

0xf509,	// (0x00022be7) main_viewer_pane_g

0x2e9b,	// (0x00016579) viewer_content_pane_ParamLimits

0x2e9b,	// (0x00016579) viewer_content_pane

0xa531,	// (0x0001dc0f) main_postcard_pane_g1_ParamLimits

0xa531,	// (0x0001dc0f) main_postcard_pane_g1

0xa53d,	// (0x0001dc1b) main_postcard_pane_g2_ParamLimits

0xa53d,	// (0x0001dc1b) main_postcard_pane_g2

0xa549,	// (0x0001dc27) main_postcard_pane_g3_ParamLimits

0xa549,	// (0x0001dc27) main_postcard_pane_g3

0x0005,

0xf51a,	// (0x00022bf8) main_postcard_pane_g_ParamLimits

0xf51a,	// (0x00022bf8) main_postcard_pane_g

0xa555,	// (0x0001dc33) main_postcard_pane_g4

0x41fa,	// (0x000178d8) smil_status_volume_pane_g2

0xa579,	// (0x0001dc57) postcard_pane_ParamLimits

0xa579,	// (0x0001dc57) postcard_pane

0x2d12,	// (0x000163f0) postcard_pane_g1_ParamLimits

0x2d12,	// (0x000163f0) postcard_pane_g1

0xa5a9,	// (0x0001dc87) postcard_pane_g2_ParamLimits

0xa5a9,	// (0x0001dc87) postcard_pane_g2

0xa5b5,	// (0x0001dc93) postcard_pane_g3_ParamLimits

0xa5b5,	// (0x0001dc93) postcard_pane_g3

0x2eb7,	// (0x00016595) postcard_pane_g4_ParamLimits

0x2eb7,	// (0x00016595) postcard_pane_g4

0xa5c1,	// (0x0001dc9f) postcard_pane_g5_ParamLimits

0xa5c1,	// (0x0001dc9f) postcard_pane_g5

0xa5cd,	// (0x0001dcab) postcard_pane_g6_ParamLimits

0xa5cd,	// (0x0001dcab) postcard_pane_g6

0x2ea9,	// (0x00016587) postcard_pane_g7_ParamLimits

0x2ea9,	// (0x00016587) postcard_pane_g7

0x0006,

0xf527,	// (0x00022c05) postcard_pane_g_ParamLimits

0xf527,	// (0x00022c05) postcard_pane_g

0xa5d9,	// (0x0001dcb7) main_mp2_pane_g1_ParamLimits

0xa5d9,	// (0x0001dcb7) main_mp2_pane_g1

0xa5e5,	// (0x0001dcc3) main_mp2_pane_g2_ParamLimits

0xa5e5,	// (0x0001dcc3) main_mp2_pane_g2

0xa5f1,	// (0x0001dccf) main_mp2_pane_g3_ParamLimits

0xa5f1,	// (0x0001dccf) main_mp2_pane_g3

0x0002,

0xf536,	// (0x00022c14) main_mp2_pane_g_ParamLimits

0xf536,	// (0x00022c14) main_mp2_pane_g

0xa5fd,	// (0x0001dcdb) main_mp2_pane_t1_ParamLimits

0xa5fd,	// (0x0001dcdb) main_mp2_pane_t1

0xa612,	// (0x0001dcf0) main_mp2_pane_t2_ParamLimits

0xa612,	// (0x0001dcf0) main_mp2_pane_t2

0xa624,	// (0x0001dd02) main_mp2_pane_t3_ParamLimits

0xa624,	// (0x0001dd02) main_mp2_pane_t3

0x0002,

0xf53d,	// (0x00022c1b) main_mp2_pane_t_ParamLimits

0xf53d,	// (0x00022c1b) main_mp2_pane_t

0x2ec5,	// (0x000165a3) pec_content_pane_ParamLimits

0x2ec5,	// (0x000165a3) pec_content_pane

0x22f2,	// (0x000159d0) scroll_pane_cp015

0x2ed7,	// (0x000165b5) pec_attribute_pane_ParamLimits

0x2ed7,	// (0x000165b5) pec_attribute_pane

0xa636,	// (0x0001dd14) pec_content_pane_g1_ParamLimits

0xa636,	// (0x0001dd14) pec_content_pane_g1

0x2ee7,	// (0x000165c5) pec_content_pane_t1_ParamLimits

0x2ee7,	// (0x000165c5) pec_content_pane_t1

0x2ef9,	// (0x000165d7) pec_content_pane_t2_ParamLimits

0x2ef9,	// (0x000165d7) pec_content_pane_t2

0x0001,

0xf544,	// (0x00022c22) pec_content_pane_t_ParamLimits

0xf544,	// (0x00022c22) pec_content_pane_t

0xa642,	// (0x0001dd20) list_single_graphic_pane_cp01_ParamLimits

0xa642,	// (0x0001dd20) list_single_graphic_pane_cp01

0x1ce3,	// (0x000153c1) bg_popup_sub_pane_cp04

0x2f0b,	// (0x000165e9) popup_mup_playback_window_g1

0x2f17,	// (0x000165f5) popup_mup_playback_window_t1

0x2f2c,	// (0x0001660a) popup_mup_playback_window_t2

0x0001,

0xf549,	// (0x00022c27) popup_mup_playback_window_t

0x2f63,	// (0x00016641) main_image_pane_g1_ParamLimits

0x2f63,	// (0x00016641) main_image_pane_g1

0x2fa6,	// (0x00016684) scroll_pane_cp018_ParamLimits

0x2fa6,	// (0x00016684) scroll_pane_cp018

0x2fbe,	// (0x0001669c) scroll_pane_cp016_ParamLimits

0x2fbe,	// (0x0001669c) scroll_pane_cp016

0xa6c7,	// (0x0001dda5) smil2_image_pane_ParamLimits

0xa6c7,	// (0x0001dda5) smil2_image_pane

0xa6ef,	// (0x0001ddcd) smil2_root_pane_ParamLimits

0xa6ef,	// (0x0001ddcd) smil2_root_pane

0xa71b,	// (0x0001ddf9) smil2_text_pane_ParamLimits

0xa71b,	// (0x0001ddf9) smil2_text_pane

0x1a88,	// (0x00015166) bg_list_pane_cp06

0x2ffa,	// (0x000166d8) grid_radio_pane

0x1a88,	// (0x00015166) bg_popup_window_pane_cp06

0x3002,	// (0x000166e0) main_fmradio_pane_t1

0x295b,	// (0x00016039) heading_pane_cp04

0x3010,	// (0x000166ee) main_fmradio_pane_t2

0x4014,	// (0x000176f2) popup_cale_lunar_info_window_g1

0x301e,	// (0x000166fc) main_fmradio_pane_t3

0x401c,	// (0x000176fa) popup_cale_lunar_info_window_g2

0x302c,	// (0x0001670a) main_fmradio_pane_t4

0x0001,

0x303a,	// (0x00016718) main_fmradio_pane_t5

0x0004,

0xf637,	// (0x00022d15) popup_cale_lunar_info_window_g

0xf55e,	// (0x00022c3c) main_fmradio_pane_t

0x3048,	// (0x00016726) wait_bar_pane_cp03

0x3050,	// (0x0001672e) cell_fmradio_pane_ParamLimits

0x3050,	// (0x0001672e) cell_fmradio_pane

0x2ea9,	// (0x00016587) cell_fmradio_pane_g1_ParamLimits

0x2ea9,	// (0x00016587) cell_fmradio_pane_g1

0x1a88,	// (0x00015166) grid_highlight_pane_cp011

0x3063,	// (0x00016741) poc_content_pane_ParamLimits

0x3063,	// (0x00016741) poc_content_pane

0x3076,	// (0x00016754) scroll_pane_cp019

0xa74f,	// (0x0001de2d) popup_call_poc_act_window_ParamLimits

0xa74f,	// (0x0001de2d) popup_call_poc_act_window

0xa75c,	// (0x0001de3a) popup_call_poc_inact_window_ParamLimits

0xa75c,	// (0x0001de3a) popup_call_poc_inact_window

0xf5fb,	// (0x00022cd9) bg_popup_call_poc_act_pane_g

0x3fd4,	// (0x000176b2) bg_popup_call_poc_inact_pane_g1

0x3fdc,	// (0x000176ba) bg_popup_call_poc_inact_pane_g2

0x307e,	// (0x0001675c) popup_call_poc_act_window_g2

0x3fe4,	// (0x000176c2) bg_popup_call_poc_inact_pane_g3

0x3f64,	// (0x00017642) bg_popup_call_poc_inact_pane_g4

0x3fec,	// (0x000176ca) bg_popup_call_poc_inact_pane_g5

0x3086,	// (0x00016764) popup_call_poc_act_window_t1_ParamLimits

0x3086,	// (0x00016764) popup_call_poc_act_window_t1

0x30ae,	// (0x0001678c) popup_call_poc_act_window_t2_ParamLimits

0x30ae,	// (0x0001678c) popup_call_poc_act_window_t2

0x30d6,	// (0x000167b4) popup_call_poc_act_window_t3_ParamLimits

0x30d6,	// (0x000167b4) popup_call_poc_act_window_t3

0x30fe,	// (0x000167dc) popup_call_poc_act_window_t4_ParamLimits

0x30fe,	// (0x000167dc) popup_call_poc_act_window_t4

0x0003,

0xf569,	// (0x00022c47) popup_call_poc_act_window_t_ParamLimits

0xf569,	// (0x00022c47) popup_call_poc_act_window_t

0x3ff4,	// (0x000176d2) bg_popup_call_poc_inact_pane_g6

0x3ffc,	// (0x000176da) bg_popup_call_poc_inact_pane_g7

0x4004,	// (0x000176e2) bg_popup_call_poc_inact_pane_g8

0x3110,	// (0x000167ee) popup_call_poc_inact_window_g2

0x400c,	// (0x000176ea) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf612,	// (0x00022cf0) bg_popup_call_poc_inact_pane_g

0x3118,	// (0x000167f6) popup_call_poc_inact_window_t1_ParamLimits

0x3118,	// (0x000167f6) popup_call_poc_inact_window_t1

0x312d,	// (0x0001680b) popup_call_poc_inact_window_t2_ParamLimits

0x312d,	// (0x0001680b) popup_call_poc_inact_window_t2

0x3142,	// (0x00016820) popup_call_poc_inact_window_t3_ParamLimits

0x3142,	// (0x00016820) popup_call_poc_inact_window_t3

0x0002,

0xf572,	// (0x00022c50) popup_call_poc_inact_window_t_ParamLimits

0xf572,	// (0x00022c50) popup_call_poc_inact_window_t

0x4180,	// (0x0001785e) context_pane_ParamLimits

0xac57,	// (0x0001e335) signal_pane_ParamLimits

0x2c41,	// (0x0001631f) main_call2_pane

0x416e,	// (0x0001784c) popup_phob_thumbnail2_window_ParamLimits

0x416e,	// (0x0001784c) popup_phob_thumbnail2_window

0x7741,	// (0x0001ae1f) aid_hotspot_pointer_arrow_pane

0x7749,	// (0x0001ae27) aid_hotspot_pointer_hand_pane

0xaa0b,	// (0x0001e0e9) phob_pre_status_pane_g5

0x8f66,	// (0x0001c644) cams_zoom_pane_ParamLimits

0x8f72,	// (0x0001c650) image_vga_pane_ParamLimits

0x8f7f,	// (0x0001c65d) main_camera_pane_g1_ParamLimits

0x8f8b,	// (0x0001c669) main_camera_pane_g2_ParamLimits

0x8f97,	// (0x0001c675) main_camera_pane_g3_ParamLimits

0x8fa3,	// (0x0001c681) main_camera_pane_g4_ParamLimits

0x8faf,	// (0x0001c68d) main_camera_pane_g5_ParamLimits

0x8fbb,	// (0x0001c699) main_camera_pane_g6_ParamLimits

0x8fc7,	// (0x0001c6a5) main_camera_pane_g7_ParamLimits

0xf271,	// (0x0002294f) main_camera_pane_g_ParamLimits

0x8fd3,	// (0x0001c6b1) main_camera_pane_t1_ParamLimits

0x8fe5,	// (0x0001c6c3) main_camera_pane_t2_ParamLimits

0xf282,	// (0x00022960) main_camera_pane_t_ParamLimits

0x1ce3,	// (0x000153c1) bg_popup_preview_window_pane_cp01_ParamLimits

0x1ce3,	// (0x000153c1) bg_popup_preview_window_pane_cp01

0x3157,	// (0x00016835) popup_phob_thumbnail2_window_g1_ParamLimits

0x3157,	// (0x00016835) popup_phob_thumbnail2_window_g1

0x1a88,	// (0x00015166) call2_cli_visual_pane

0xa778,	// (0x0001de56) popup_call2_audio_conf_window_ParamLimits

0xa778,	// (0x0001de56) popup_call2_audio_conf_window

0xa78b,	// (0x0001de69) popup_call2_audio_first_window_ParamLimits

0xa78b,	// (0x0001de69) popup_call2_audio_first_window

0xa807,	// (0x0001dee5) popup_call2_audio_in_window_ParamLimits

0xa807,	// (0x0001dee5) popup_call2_audio_in_window

0xa837,	// (0x0001df15) popup_call2_audio_out_window_ParamLimits

0xa837,	// (0x0001df15) popup_call2_audio_out_window

0xa883,	// (0x0001df61) popup_call2_audio_second_window_ParamLimits

0xa883,	// (0x0001df61) popup_call2_audio_second_window

0xa8cf,	// (0x0001dfad) popup_call2_audio_wait_window_ParamLimits

0xa8cf,	// (0x0001dfad) popup_call2_audio_wait_window

0x1a88,	// (0x00015166) bg_popup_call2_act_pane_cp03

0x1cc5,	// (0x000153a3) list_conf_pane_cp

0x3163,	// (0x00016841) popup_call2_audio_conf_window_t1

0x29b8,	// (0x00016096) list_single_graphic_popup_conf2_pane_ParamLimits

0x29b8,	// (0x00016096) list_single_graphic_popup_conf2_pane

0x29cb,	// (0x000160a9) list_highlight_pane_cp04

0x3171,	// (0x0001684f) list_single_graphic_popup_conf2_pane_g1

0x29dc,	// (0x000160ba) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf579,	// (0x00022c57) list_single_graphic_popup_conf2_pane_g

0x3179,	// (0x00016857) list_single_graphic_popup_conf2_pane_t1

0x3187,	// (0x00016865) bg_popup_call2_act_pane_cp01_ParamLimits

0x3187,	// (0x00016865) bg_popup_call2_act_pane_cp01

0x3211,	// (0x000168ef) call_type_pane_cp05_ParamLimits

0x3211,	// (0x000168ef) call_type_pane_cp05

0x3265,	// (0x00016943) popup_call2_audio_second_window_g1_ParamLimits

0x3265,	// (0x00016943) popup_call2_audio_second_window_g1

0x32b9,	// (0x00016997) popup_call2_audio_second_window_g2_ParamLimits

0x32b9,	// (0x00016997) popup_call2_audio_second_window_g2

0x0002,

0xf57e,	// (0x00022c5c) popup_call2_audio_second_window_g_ParamLimits

0xf57e,	// (0x00022c5c) popup_call2_audio_second_window_g

0x331e,	// (0x000169fc) popup_call2_audio_second_window_t1_ParamLimits

0x331e,	// (0x000169fc) popup_call2_audio_second_window_t1

0x33d9,	// (0x00016ab7) popup_call2_audio_second_window_t2_ParamLimits

0x33d9,	// (0x00016ab7) popup_call2_audio_second_window_t2

0x342c,	// (0x00016b0a) popup_call2_audio_second_window_t3_ParamLimits

0x342c,	// (0x00016b0a) popup_call2_audio_second_window_t3

0x0003,

0xf585,	// (0x00022c63) popup_call2_audio_second_window_t_ParamLimits

0xf585,	// (0x00022c63) popup_call2_audio_second_window_t

0x1a88,	// (0x00015166) bg_popup_call2_in_pane_cp02

0x1a92,	// (0x00015170) call_type_pane_cp04

0x1a9a,	// (0x00015178) popup_call2_audio_wait_window_g1

0x1aa2,	// (0x00015180) popup_call2_audio_wait_window_g2

0x0001,

0xf15e,	// (0x0002283c) popup_call2_audio_wait_window_g

0x1aaa,	// (0x00015188) popup_call2_audio_wait_window_t3

0x351f,	// (0x00016bfd) bg_popup_call2_act_pane_ParamLimits

0x351f,	// (0x00016bfd) bg_popup_call2_act_pane

0x35df,	// (0x00016cbd) call_type_pane_cp03_ParamLimits

0x35df,	// (0x00016cbd) call_type_pane_cp03

0x3643,	// (0x00016d21) popup_call2_audio_first_window_g1_ParamLimits

0x3643,	// (0x00016d21) popup_call2_audio_first_window_g1

0x36b3,	// (0x00016d91) popup_call2_audio_first_window_g2_ParamLimits

0x36b3,	// (0x00016d91) popup_call2_audio_first_window_g2

0x2d12,	// (0x000163f0) popup_call2_audio_first_window_g3_ParamLimits

0x2d12,	// (0x000163f0) popup_call2_audio_first_window_g3

0x0004,

0xf58e,	// (0x00022c6c) popup_call2_audio_first_window_g_ParamLimits

0xf58e,	// (0x00022c6c) popup_call2_audio_first_window_g

0x3791,	// (0x00016e6f) popup_call2_audio_first_window_t1_ParamLimits

0x3791,	// (0x00016e6f) popup_call2_audio_first_window_t1

0x3894,	// (0x00016f72) popup_call2_audio_first_window_t4_ParamLimits

0x3894,	// (0x00016f72) popup_call2_audio_first_window_t4

0x3977,	// (0x00017055) popup_call2_audio_first_window_t5_ParamLimits

0x3977,	// (0x00017055) popup_call2_audio_first_window_t5

0x0003,

0xf599,	// (0x00022c77) popup_call2_audio_first_window_t_ParamLimits

0xf599,	// (0x00022c77) popup_call2_audio_first_window_t

0x1cdb,	// (0x000153b9) bg_popup_call2_act_pane_g1

0x4024,	// (0x00017702) popup_cale_lunar_info_window_t1

0x4032,	// (0x00017710) popup_cale_lunar_info_window_t2

0x4040,	// (0x0001771e) popup_cale_lunar_info_window_t3

0x1a88,	// (0x00015166) bg_popup_call2_bubble_pane

0x3a78,	// (0x00017156) bg_popup_call2_in_pane_cp01_ParamLimits

0x3a78,	// (0x00017156) bg_popup_call2_in_pane_cp01

0x1764,	// (0x00014e42) call_type_pane_cp02

0x3ac0,	// (0x0001719e) popup_call2_audio_out_window_g1_ParamLimits

0x3ac0,	// (0x0001719e) popup_call2_audio_out_window_g1

0x3aec,	// (0x000171ca) popup_call2_audio_out_window_g2_ParamLimits

0x3aec,	// (0x000171ca) popup_call2_audio_out_window_g2

0x3b14,	// (0x000171f2) popup_call2_audio_out_window_g3_ParamLimits

0x3b14,	// (0x000171f2) popup_call2_audio_out_window_g3

0x0003,

0xf5a2,	// (0x00022c80) popup_call2_audio_out_window_g_ParamLimits

0xf5a2,	// (0x00022c80) popup_call2_audio_out_window_g

0x3b4f,	// (0x0001722d) popup_call2_audio_out_window_t1_ParamLimits

0x3b4f,	// (0x0001722d) popup_call2_audio_out_window_t1

0x3bae,	// (0x0001728c) popup_call2_audio_out_window_t2_ParamLimits

0x3bae,	// (0x0001728c) popup_call2_audio_out_window_t2

0x3c02,	// (0x000172e0) popup_call2_audio_out_window_t3_ParamLimits

0x3c02,	// (0x000172e0) popup_call2_audio_out_window_t3

0x3c18,	// (0x000172f6) popup_call2_audio_out_window_t4_ParamLimits

0x3c18,	// (0x000172f6) popup_call2_audio_out_window_t4

0x3c2e,	// (0x0001730c) popup_call2_audio_out_window_t5_ParamLimits

0x3c2e,	// (0x0001730c) popup_call2_audio_out_window_t5

0x0005,

0xf5ab,	// (0x00022c89) popup_call2_audio_out_window_t_ParamLimits

0xf5ab,	// (0x00022c89) popup_call2_audio_out_window_t

0x3c92,	// (0x00017370) bg_popup_call2_in_pane_ParamLimits

0x3c92,	// (0x00017370) bg_popup_call2_in_pane

0x3cee,	// (0x000173cc) popup_call2_audio_in_window_g1_ParamLimits

0x3cee,	// (0x000173cc) popup_call2_audio_in_window_g1

0x3d26,	// (0x00017404) popup_call2_audio_in_window_g2_ParamLimits

0x3d26,	// (0x00017404) popup_call2_audio_in_window_g2

0x3d5e,	// (0x0001743c) popup_call2_audio_in_window_g3_ParamLimits

0x3d5e,	// (0x0001743c) popup_call2_audio_in_window_g3

0x0003,

0xf5b8,	// (0x00022c96) popup_call2_audio_in_window_g_ParamLimits

0xf5b8,	// (0x00022c96) popup_call2_audio_in_window_g

0x3db6,	// (0x00017494) popup_call2_audio_in_window_t1_ParamLimits

0x3db6,	// (0x00017494) popup_call2_audio_in_window_t1

0x3e36,	// (0x00017514) popup_call2_audio_in_window_t2_ParamLimits

0x3e36,	// (0x00017514) popup_call2_audio_in_window_t2

0x3eb6,	// (0x00017594) popup_call2_audio_in_window_t3_ParamLimits

0x3eb6,	// (0x00017594) popup_call2_audio_in_window_t3

0x3ed0,	// (0x000175ae) popup_call2_audio_in_window_t4_ParamLimits

0x3ed0,	// (0x000175ae) popup_call2_audio_in_window_t4

0x3ee2,	// (0x000175c0) popup_call2_audio_in_window_t5_ParamLimits

0x3ee2,	// (0x000175c0) popup_call2_audio_in_window_t5

0x3ef7,	// (0x000175d5) popup_call2_audio_in_window_t6_ParamLimits

0x3ef7,	// (0x000175d5) popup_call2_audio_in_window_t6

0x0005,

0xf5c1,	// (0x00022c9f) popup_call2_audio_in_window_t_ParamLimits

0xf5c1,	// (0x00022c9f) popup_call2_audio_in_window_t

0x1cdb,	// (0x000153b9) bg_popup_call2_in_pane_g1

0x404e,	// (0x0001772c) popup_cale_lunar_info_window_t4

0x0003,

0xf63c,	// (0x00022d1a) popup_cale_lunar_info_window_t

0x1ce3,	// (0x000153c1) bg_popup_call2_rect_pane_ParamLimits

0x1ce3,	// (0x000153c1) bg_popup_call2_rect_pane

0x1a88,	// (0x00015166) call2_cli_visual_graphic_pane

0x1a88,	// (0x00015166) call2_cli_visual_text_pane

0x77b3,	// (0x0001ae91) smil_status_volume_pane_g3

0x0002,

0x1e77,	// (0x00015555) call2_cli_visual_graphic_pane_g1

0x1e77,	// (0x00015555) call2_cli_visual_graphic_pane_g2

0x1e77,	// (0x00015555) call2_cli_visual_graphic_pane_g3

0x0002,

0xf5ce,	// (0x00022cac) call2_cli_visual_graphic_pane_g

0x3f0c,	// (0x000175ea) bg_popup_call2_rect_pane_g1

0x1f1f,	// (0x000155fd) bg_popup_call2_rect_pane_g2

0x3f14,	// (0x000175f2) bg_popup_call2_rect_pane_g3

0x3f1c,	// (0x000175fa) bg_popup_call2_rect_pane_g4

0x3f24,	// (0x00017602) bg_popup_call2_rect_pane_g5

0x3f2c,	// (0x0001760a) bg_popup_call2_rect_pane_g6

0x3f34,	// (0x00017612) bg_popup_call2_rect_pane_g7

0x3f3c,	// (0x0001761a) bg_popup_call2_rect_pane_g8

0x3f44,	// (0x00017622) bg_popup_call2_rect_pane_g9

0x0008,

0xf5d5,	// (0x00022cb3) bg_popup_call2_rect_pane_g

0x3f4c,	// (0x0001762a) bg_popup_call2_bubble_pane_g1

0x3f54,	// (0x00017632) bg_popup_call2_bubble_pane_g2

0x3f5c,	// (0x0001763a) bg_popup_call2_bubble_pane_g3

0x3f64,	// (0x00017642) bg_popup_call2_bubble_pane_g4

0x3f6c,	// (0x0001764a) bg_popup_call2_bubble_pane_g5

0x3f74,	// (0x00017652) bg_popup_call2_bubble_pane_g6

0x3f7c,	// (0x0001765a) bg_popup_call2_bubble_pane_g7

0x3f84,	// (0x00017662) bg_popup_call2_bubble_pane_g8

0x3f8c,	// (0x0001766a) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5e8,	// (0x00022cc6) bg_popup_call2_bubble_pane_g

0x8c8d,	// (0x0001c36b) aid_cale_week_size_cell_pane

0x8ff7,	// (0x0001c6d5) aid_cams_cif_uncrop_pane_ParamLimits

0x8ff7,	// (0x0001c6d5) aid_cams_cif_uncrop_pane

0x914f,	// (0x0001c82d) aid_cams_size_cell_ParamLimits

0x914f,	// (0x0001c82d) aid_cams_size_cell

0x915b,	// (0x0001c839) grid_cams_pane_ParamLimits

0x9167,	// (0x0001c845) linegrid_cams_pane_ParamLimits

0x9245,	// (0x0001c923) call_video_pane_t1

0x925b,	// (0x0001c939) call_video_pane_t2

0x0001,

0xf2d5,	// (0x000229b3) call_video_pane_t

0x95c7,	// (0x0001cca5) aid_cale_month_size_cell_pane_ParamLimits

0x95c7,	// (0x0001cca5) aid_cale_month_size_cell_pane

0xf685,	// (0x00022d63) smil_status_volume_pane_g

0x77c0,	// (0x0001ae9e) volume_smil_pane_ParamLimits

0x1628,	// (0x00014d06) aid_popup2_width_pane

0x8bf8,	// (0x0001c2d6) cell_qdial_pane_g4_ParamLimits

0x8bf8,	// (0x0001c2d6) cell_qdial_pane_g4

0x9fa1,	// (0x0001d67f) aid_blid_cardinal_pane_ParamLimits

0x9fad,	// (0x0001d68b) aid_blid_destination_pane_ParamLimits

0x9fad,	// (0x0001d68b) aid_blid_destination_pane

0x1ce3,	// (0x000153c1) bg_popup_call_poc_act_pane_ParamLimits

0x1ce3,	// (0x000153c1) bg_popup_call_poc_act_pane

0x1ce3,	// (0x000153c1) bg_popup_call_poc_inact_pane_ParamLimits

0x1ce3,	// (0x000153c1) bg_popup_call_poc_inact_pane

0x3f94,	// (0x00017672) bg_popup_call_poc_act_pane_g1

0x3f9c,	// (0x0001767a) bg_popup_call_poc_act_pane_g2

0x3fa4,	// (0x00017682) bg_popup_call_poc_act_pane_g3

0x3f64,	// (0x00017642) bg_popup_call_poc_act_pane_g4

0x3f6c,	// (0x0001764a) bg_popup_call_poc_act_pane_g5

0x3fac,	// (0x0001768a) bg_popup_call_poc_act_pane_g6

0x3f7c,	// (0x0001765a) bg_popup_call_poc_act_pane_g7

0x3fb4,	// (0x00017692) bg_popup_call_poc_act_pane_g8

0x1a88,	// (0x00015166) main_usb_pane

0x414d,	// (0x0001782b) popup_cale_lunar_info_window

0x946a,	// (0x0001cb48) im_reading_pane_t1_ParamLimits

0x223b,	// (0x00015919) list_im_pane_ParamLimits

0x224c,	// (0x0001592a) scroll_pane_cp07_ParamLimits

0x1a88,	// (0x00015166) grid_highlight_pane_cp012

0x1ce3,	// (0x000153c1) mup_scale_pane_ParamLimits

0x2d12,	// (0x000163f0) main_usb_pane_g1_ParamLimits

0x2d12,	// (0x000163f0) main_usb_pane_g1

0xa930,	// (0x0001e00e) main_usb_pane_g2_ParamLimits

0xa930,	// (0x0001e00e) main_usb_pane_g2

0x0001,

0xf625,	// (0x00022d03) main_usb_pane_g_ParamLimits

0xf625,	// (0x00022d03) main_usb_pane_g

0xa93c,	// (0x0001e01a) main_usb_pane_t1_ParamLimits

0xa93c,	// (0x0001e01a) main_usb_pane_t1

0xa94e,	// (0x0001e02c) main_usb_pane_t2_ParamLimits

0xa94e,	// (0x0001e02c) main_usb_pane_t2

0xa960,	// (0x0001e03e) main_usb_pane_t3_ParamLimits

0xa960,	// (0x0001e03e) main_usb_pane_t3

0xa972,	// (0x0001e050) main_usb_pane_t4_ParamLimits

0xa972,	// (0x0001e050) main_usb_pane_t4

0xa984,	// (0x0001e062) main_usb_pane_t5_ParamLimits

0xa984,	// (0x0001e062) main_usb_pane_t5

0xa996,	// (0x0001e074) main_usb_pane_t6_ParamLimits

0xa996,	// (0x0001e074) main_usb_pane_t6

0x0005,

0xf62a,	// (0x00022d08) main_usb_pane_t_ParamLimits

0x2b05,	// (0x000161e3) aid_text_placing

0x9f4d,	// (0x0001d62b) main_location2_pane_t1_ParamLimits

0x9f63,	// (0x0001d641) main_location2_pane_t2_ParamLimits

0x9f79,	// (0x0001d657) main_location2_pane_t3_ParamLimits

0x9f8f,	// (0x0001d66d) main_location2_pane_t4_ParamLimits

0x9f8f,	// (0x0001d66d) main_location2_pane_t4

0xf436,	// (0x00022b14) main_location2_pane_t_ParamLimits

0x1d1f,	// (0x000153fd) find_pinb_pane_g2_ParamLimits

0x1d1f,	// (0x000153fd) find_pinb_pane_g2

0x0001,

0xf184,	// (0x00022862) find_pinb_pane_g_ParamLimits

0xf184,	// (0x00022862) find_pinb_pane_g

0x1d2b,	// (0x00015409) find_pinb_pane_t1_ParamLimits

0x1d3d,	// (0x0001541b) find_pinb_pane_t2_ParamLimits

0xf189,	// (0x00022867) find_pinb_pane_t_ParamLimits

0x1a88,	// (0x00015166) main_call3_pane

0x987f,	// (0x0001cf5d) cale_month_day_heading_pane_t1_ParamLimits

0x98dd,	// (0x0001cfbb) cale_month_day_heading_pane_t2_ParamLimits

0x9942,	// (0x0001d020) cale_month_day_heading_pane_t3_ParamLimits

0x99a7,	// (0x0001d085) cale_month_day_heading_pane_t4_ParamLimits

0x9a0c,	// (0x0001d0ea) cale_month_day_heading_pane_t5_ParamLimits

0x9a71,	// (0x0001d14f) cale_month_day_heading_pane_t6_ParamLimits

0x9ad6,	// (0x0001d1b4) cale_month_day_heading_pane_t7_ParamLimits

0xf30d,	// (0x000229eb) cale_month_day_heading_pane_t_ParamLimits

0x24d2,	// (0x00015bb0) smil_status_volume_pane

0xa591,	// (0x0001dc6f) postcard_address_pane_ParamLimits

0xa591,	// (0x0001dc6f) postcard_address_pane

0xa59d,	// (0x0001dc7b) postcard_message_pane_ParamLimits

0xa59d,	// (0x0001dc7b) postcard_message_pane

0xa90c,	// (0x0001dfea) call2_cli_visual_pane_t1_ParamLimits

0xa90c,	// (0x0001dfea) call2_cli_visual_pane_t1

0xae18,	// (0x0001e4f6) postcard_message_pane_t1_ParamLimits

0xae18,	// (0x0001e4f6) postcard_message_pane_t1

0xae01,	// (0x0001e4df) postcard_address_pane_t1_ParamLimits

0xae01,	// (0x0001e4df) postcard_address_pane_t1

0xadf4,	// (0x0001e4d2) popup_call3_audio_in_window_ParamLimits

0xadf4,	// (0x0001e4d2) popup_call3_audio_in_window

0xacdc,	// (0x0001e3ba) bg_popup_call3_in_pane_ParamLimits

0xacdc,	// (0x0001e3ba) bg_popup_call3_in_pane

0xad3a,	// (0x0001e418) popup_call3_audio_in_window_g1_ParamLimits

0xad3a,	// (0x0001e418) popup_call3_audio_in_window_g1

0xad52,	// (0x0001e430) popup_call3_audio_in_window_g2_ParamLimits

0xad52,	// (0x0001e430) popup_call3_audio_in_window_g2

0xad6a,	// (0x0001e448) popup_call3_audio_in_window_g3_ParamLimits

0xad6a,	// (0x0001e448) popup_call3_audio_in_window_g3

0x0003,

0xf68c,	// (0x00022d6a) popup_call3_audio_in_window_g_ParamLimits

0xf68c,	// (0x00022d6a) popup_call3_audio_in_window_g

0xad92,	// (0x0001e470) popup_call3_audio_in_window_t1_ParamLimits

0xad92,	// (0x0001e470) popup_call3_audio_in_window_t1

0xadba,	// (0x0001e498) popup_call3_audio_in_window_t2_ParamLimits

0xadba,	// (0x0001e498) popup_call3_audio_in_window_t2

0xade2,	// (0x0001e4c0) popup_call3_audio_in_window_t3_ParamLimits

0xade2,	// (0x0001e4c0) popup_call3_audio_in_window_t3

0x0002,

0xf695,	// (0x00022d73) popup_call3_audio_in_window_t_ParamLimits

0xf695,	// (0x00022d73) popup_call3_audio_in_window_t

0x2c41,	// (0x0001631f) bg_popup_call3_rect_pane

0x3f0c,	// (0x000175ea) bg_popup_call3_rect_pane_g1

0x1f1f,	// (0x000155fd) bg_popup_call3_rect_pane_g2

0x3f14,	// (0x000175f2) bg_popup_call3_rect_pane_g3

0x3f1c,	// (0x000175fa) bg_popup_call3_rect_pane_g4

0x3f24,	// (0x00017602) bg_popup_call3_rect_pane_g5

0x3f2c,	// (0x0001760a) bg_popup_call3_rect_pane_g6

0x3f34,	// (0x00017612) bg_popup_call3_rect_pane_g7

0xa2bd,	// (0x0001d99b) mup_visualizer_osc_pane

0x2d20,	// (0x000163fe) mup_visualizer_spec_pane

0xacfc,	// (0x0001e3da) call3_video_qcif_pane_ParamLimits

0xacfc,	// (0x0001e3da) call3_video_qcif_pane

0xad0c,	// (0x0001e3ea) call3_video_qcif_uncrop_pane_ParamLimits

0xad0c,	// (0x0001e3ea) call3_video_qcif_uncrop_pane

0xad18,	// (0x0001e3f6) call3_video_subqcif_pane_ParamLimits

0xad18,	// (0x0001e3f6) call3_video_subqcif_pane

0xad2a,	// (0x0001e408) call3_video_subqcif_uncrop_pane_ParamLimits

0xad2a,	// (0x0001e408) call3_video_subqcif_uncrop_pane

0xad82,	// (0x0001e460) popup_call3_audio_in_window_g4_ParamLimits

0xad82,	// (0x0001e460) popup_call3_audio_in_window_g4

0xaccb,	// (0x0001e3a9) mup_spec_half_pane

0xacd4,	// (0x0001e3b2) mup_spec_half_pane_cp

0x41e0,	// (0x000178be) mup_osc_middle_pane

0x41e9,	// (0x000178c7) mup_visualizer_osc_pane_g1

0xacac,	// (0x0001e38a) mup_spec_bar_pane_ParamLimits

0xacac,	// (0x0001e38a) mup_spec_bar_pane

0x41cd,	// (0x000178ab) mup_spec_bar_pane_g1

0x41d7,	// (0x000178b5) mup_spec_bar_pane_g2

0x0001,

0xf680,	// (0x00022d5e) mup_spec_bar_pane_g

0x8c8d,	// (0x0001c36b) aid_cale_week_size_cell_pane_ParamLimits

0x8ca0,	// (0x0001c37e) bg_cale_heading_pane_ParamLimits

0x1fab,	// (0x00015689) bg_cale_pane_cp01_ParamLimits

0x8cb4,	// (0x0001c392) cale_week_corner_pane_ParamLimits

0x8cca,	// (0x0001c3a8) cale_week_day_heading_pane_ParamLimits

0x8cde,	// (0x0001c3bc) cale_week_scroll_pane_g1_ParamLimits

0x8cef,	// (0x0001c3cd) cale_week_scroll_pane_g2_ParamLimits

0x8d00,	// (0x0001c3de) cale_week_scroll_pane_g3_ParamLimits

0x8d11,	// (0x0001c3ef) cale_week_scroll_pane_g4_ParamLimits

0x8d22,	// (0x0001c400) cale_week_scroll_pane_g5_ParamLimits

0x8d33,	// (0x0001c411) cale_week_scroll_pane_g6_ParamLimits

0x8d44,	// (0x0001c422) cale_week_scroll_pane_g7_ParamLimits

0x8d55,	// (0x0001c433) cale_week_scroll_pane_g8_ParamLimits

0x8d66,	// (0x0001c444) cale_week_scroll_pane_g9_ParamLimits

0x8d77,	// (0x0001c455) cale_week_scroll_pane_g10_ParamLimits

0x8d88,	// (0x0001c466) cale_week_scroll_pane_g11_ParamLimits

0x8d99,	// (0x0001c477) cale_week_scroll_pane_g12_ParamLimits

0x8daa,	// (0x0001c488) cale_week_scroll_pane_g13_ParamLimits

0x8dbb,	// (0x0001c499) cale_week_scroll_pane_g14_ParamLimits

0x8dcc,	// (0x0001c4aa) cale_week_scroll_pane_g15_ParamLimits

0xf215,	// (0x000228f3) cale_week_scroll_pane_g_ParamLimits

0x8ddd,	// (0x0001c4bb) cale_week_time_pane_ParamLimits

0x8dee,	// (0x0001c4cc) grid_cale_week_pane_ParamLimits

0x1fc4,	// (0x000156a2) listscroll_cale_week_pane_t1

0x8e01,	// (0x0001c4df) scroll_pane_cp08_ParamLimits

0x9608,	// (0x0001cce6) cale_month_corner_pane_ParamLimits

0x2472,	// (0x00015b50) cale_month_pane_t1

0x9850,	// (0x0001cf2e) cale_month_week_pane_ParamLimits

0x2d12,	// (0x000163f0) popup_call_status_window_g1_ParamLimits

0x9df3,	// (0x0001d4d1) popup_call_status_window_g2_ParamLimits

0x9dff,	// (0x0001d4dd) popup_call_status_window_g3_ParamLimits

0xf3bd,	// (0x00022a9b) popup_call_status_window_g_ParamLimits

0x28e4,	// (0x00015fc2) aid_call2_pane

0xa4bf,	// (0x0001db9d) msg_header_pane_g1

0xa591,	// (0x0001dc6f) postcard_address2_pane_ParamLimits

0xa591,	// (0x0001dc6f) postcard_address2_pane

0xa59d,	// (0x0001dc7b) postcard_message2_pane_ParamLimits

0xa59d,	// (0x0001dc7b) postcard_message2_pane

0xac63,	// (0x0001e341) message2_row_pane_ParamLimits

0xac63,	// (0x0001e341) message2_row_pane

0xac7b,	// (0x0001e359) address2_row_pane_ParamLimits

0xac7b,	// (0x0001e359) address2_row_pane

0x419b,	// (0x00017879) postcard_message2_row_pane_g1

0x41a3,	// (0x00017881) postcard_message2_row_pane_t1

0x419b,	// (0x00017879) address2_row_pane_g1

0x41a3,	// (0x00017881) address2_row_pane_t1

0x75fc,	// (0x0001acda) aid_size_cell_vorec

0x1a88,	// (0x00015166) main_rss_pane

0xac8e,	// (0x0001e36c) rss_list_single_pane_ParamLimits

0xac8e,	// (0x0001e36c) rss_list_single_pane

0x41b1,	// (0x0001788f) rss_list_single_pane_t1

0x41bf,	// (0x0001789d) rss_list_single_pane_t2

0x0001,

0xf67b,	// (0x00022d59) rss_list_single_pane_t

0x1a88,	// (0x00015166) main_camera2_pane

0x1a88,	// (0x00015166) main_video2_pane

0x780a,	// (0x0001aee8) cams_zoom_pane_cp2_ParamLimits

0x780a,	// (0x0001aee8) cams_zoom_pane_cp2

0x7816,	// (0x0001aef4) image2_vga_pane_ParamLimits

0x7816,	// (0x0001aef4) image2_vga_pane

0x7825,	// (0x0001af03) main_camera2_pane_g1_ParamLimits

0x7825,	// (0x0001af03) main_camera2_pane_g1

0x7831,	// (0x0001af0f) main_camera2_pane_g2_ParamLimits

0x7831,	// (0x0001af0f) main_camera2_pane_g2

0x783d,	// (0x0001af1b) main_camera2_pane_g3_ParamLimits

0x783d,	// (0x0001af1b) main_camera2_pane_g3

0x7849,	// (0x0001af27) main_camera2_pane_g4_ParamLimits

0x7849,	// (0x0001af27) main_camera2_pane_g4

0x7855,	// (0x0001af33) main_camera2_pane_g5_ParamLimits

0x7855,	// (0x0001af33) main_camera2_pane_g5

0x7861,	// (0x0001af3f) main_camera2_pane_g6_ParamLimits

0x7861,	// (0x0001af3f) main_camera2_pane_g6

0x786d,	// (0x0001af4b) main_camera2_pane_g7_ParamLimits

0x786d,	// (0x0001af4b) main_camera2_pane_g7

0x7879,	// (0x0001af57) main_camera2_pane_g8_ParamLimits

0x7879,	// (0x0001af57) main_camera2_pane_g8

0x0008,

0xf69c,	// (0x00022d7a) main_camera2_pane_g_ParamLimits

0xf69c,	// (0x00022d7a) main_camera2_pane_g

0x7891,	// (0x0001af6f) main_camera2_pane_t1_ParamLimits

0x7891,	// (0x0001af6f) main_camera2_pane_t1

0x78a3,	// (0x0001af81) main_camera2_pane_t2_ParamLimits

0x78a3,	// (0x0001af81) main_camera2_pane_t2

0x78b5,	// (0x0001af93) main_camera2_pane_t3_ParamLimits

0x78b5,	// (0x0001af93) main_camera2_pane_t3

0x78c7,	// (0x0001afa5) main_camera2_pane_t4_ParamLimits

0x78c7,	// (0x0001afa5) main_camera2_pane_t4

0x0006,

0xf6af,	// (0x00022d8d) main_camera2_pane_t_ParamLimits

0xf6af,	// (0x00022d8d) main_camera2_pane_t

0x7922,	// (0x0001b000) cams_zoom_pane_cp4_ParamLimits

0x7922,	// (0x0001b000) cams_zoom_pane_cp4

0x7932,	// (0x0001b010) image2_cif_pane_ParamLimits

0x7932,	// (0x0001b010) image2_cif_pane

0x7943,	// (0x0001b021) image2_subqcif_pane_ParamLimits

0x7943,	// (0x0001b021) image2_subqcif_pane

0x7950,	// (0x0001b02e) main_video2_pane_g1_ParamLimits

0x7950,	// (0x0001b02e) main_video2_pane_g1

0x7962,	// (0x0001b040) main_video2_pane_g2_ParamLimits

0x7962,	// (0x0001b040) main_video2_pane_g2

0x7972,	// (0x0001b050) main_video2_pane_g3_ParamLimits

0x7972,	// (0x0001b050) main_video2_pane_g3

0x7982,	// (0x0001b060) main_video2_pane_g4_ParamLimits

0x7982,	// (0x0001b060) main_video2_pane_g4

0x7992,	// (0x0001b070) main_video2_pane_g5_ParamLimits

0x7992,	// (0x0001b070) main_video2_pane_g5

0x79a2,	// (0x0001b080) main_video2_pane_g6_ParamLimits

0x79a2,	// (0x0001b080) main_video2_pane_g6

0x0005,

0xf6be,	// (0x00022d9c) main_video2_pane_g_ParamLimits

0xf6be,	// (0x00022d9c) main_video2_pane_g

0x79b4,	// (0x0001b092) main_video2_pane_t1_ParamLimits

0x79b4,	// (0x0001b092) main_video2_pane_t1

0x79ce,	// (0x0001b0ac) main_video2_pane_t2_ParamLimits

0x79ce,	// (0x0001b0ac) main_video2_pane_t2

0x79f4,	// (0x0001b0d2) main_video2_pane_t3_ParamLimits

0x79f4,	// (0x0001b0d2) main_video2_pane_t3

0x0002,

0xf6cb,	// (0x00022da9) main_video2_pane_t_ParamLimits

0xf6cb,	// (0x00022da9) main_video2_pane_t

0xaa45,	// (0x0001e123) call_muted_g2

0x0001,

0xf66d,	// (0x00022d4b) call_muted_g

0x1a88,	// (0x00015166) main_mup2_pane

0x429b,	// (0x00017979) main_mup2_pane_g1_ParamLimits

0x429b,	// (0x00017979) main_mup2_pane_g1

0xae33,	// (0x0001e511) main_mup2_pane_g2_ParamLimits

0xae33,	// (0x0001e511) main_mup2_pane_g2

0x7a43,	// (0x0001b121) main_mup_pane_g13_cp1

0x7a4b,	// (0x0001b129) mup_volume_pane_cp1

0xae53,	// (0x0001e531) main_mup2_pane_g4_ParamLimits

0xae53,	// (0x0001e531) main_mup2_pane_g4

0xae64,	// (0x0001e542) main_mup2_pane_g5_ParamLimits

0xae64,	// (0x0001e542) main_mup2_pane_g5

0xae75,	// (0x0001e553) main_mup2_pane_g6_ParamLimits

0xae75,	// (0x0001e553) main_mup2_pane_g6

0xae86,	// (0x0001e564) main_mup2_pane_g7_ParamLimits

0xae86,	// (0x0001e564) main_mup2_pane_g7

0x0006,

0xf6d2,	// (0x00022db0) main_mup2_pane_g_ParamLimits

0xf6d2,	// (0x00022db0) main_mup2_pane_g

0xaea2,	// (0x0001e580) main_mup2_pane_t1_ParamLimits

0xaea2,	// (0x0001e580) main_mup2_pane_t1

0xaeb9,	// (0x0001e597) main_mup2_pane_t2_ParamLimits

0xaeb9,	// (0x0001e597) main_mup2_pane_t2

0xaed0,	// (0x0001e5ae) main_mup2_pane_t3_ParamLimits

0xaed0,	// (0x0001e5ae) main_mup2_pane_t3

0xaee7,	// (0x0001e5c5) main_mup2_pane_t4_ParamLimits

0xaee7,	// (0x0001e5c5) main_mup2_pane_t4

0xaf01,	// (0x0001e5df) main_mup2_pane_t5_ParamLimits

0xaf01,	// (0x0001e5df) main_mup2_pane_t5

0xaf1b,	// (0x0001e5f9) main_mup2_pane_t6_ParamLimits

0xaf1b,	// (0x0001e5f9) main_mup2_pane_t6

0x0005,

0xf6e1,	// (0x00022dbf) main_mup2_pane_t_ParamLimits

0xf6e1,	// (0x00022dbf) main_mup2_pane_t

0xaf53,	// (0x0001e631) mup2_visualizer_pane_ParamLimits

0xaf53,	// (0x0001e631) mup2_visualizer_pane

0xaf85,	// (0x0001e663) mup_progress_pane_cp_ParamLimits

0xaf85,	// (0x0001e663) mup_progress_pane_cp

0x7a2e,	// (0x0001b10c) mup_volume_pane_cp_ParamLimits

0x7a2e,	// (0x0001b10c) mup_volume_pane_cp

0xaf9c,	// (0x0001e67a) mup2_visualizer_pane_g1_ParamLimits

0xaf9c,	// (0x0001e67a) mup2_visualizer_pane_g1

0x426d,	// (0x0001794b) mup2_visualizer_pane_g2_ParamLimits

0x426d,	// (0x0001794b) mup2_visualizer_pane_g2

0xafb1,	// (0x0001e68f) mup2_visualizer_pane_g3_ParamLimits

0xafb1,	// (0x0001e68f) mup2_visualizer_pane_g3

0x0002,

0xf6ee,	// (0x00022dcc) mup2_visualizer_pane_g_ParamLimits

0xf6ee,	// (0x00022dcc) mup2_visualizer_pane_g

0x2ff2,	// (0x000166d0) aid_size_cell_fmradio

0xab27,	// (0x0001e205) aid_height_parent_landcape

0x22d9,	// (0x000159b7) wml_content_pane_cp

0x22e1,	// (0x000159bf) wml_tabs_pane

0x22ea,	// (0x000159c8) popup_wml_miniature_window

0x22f2,	// (0x000159d0) scroll_pane_cp021

0x2306,	// (0x000159e4) wml_content_pane_comp8

0x1a88,	// (0x00015166) bg_popup_sub_pane_cp05

0x428b,	// (0x00017969) popup_wml_miniature_window_g1

0x4293,	// (0x00017971) wml_miniature_view_pane

0xafbd,	// (0x0001e69b) aid_size_wml_view

0xafc5,	// (0x0001e6a3) wml_miniature_view_pane_g1

0xafce,	// (0x0001e6ac) wml_miniature_view_pane_g2

0xafd7,	// (0x0001e6b5) wml_miniature_view_pane_g3

0xafdf,	// (0x0001e6bd) wml_miniature_view_pane_g4

0xafe7,	// (0x0001e6c5) wml_miniature_view_pane_g5

0xafef,	// (0x0001e6cd) wml_miniature_view_pane_g6

0xaff7,	// (0x0001e6d5) wml_miniature_view_pane_g7

0xafff,	// (0x0001e6dd) wml_miniature_view_pane_g8

0x0007,

0xf6f5,	// (0x00022dd3) wml_miniature_view_pane_g

0x429b,	// (0x00017979) background_graphic_ParamLimits

0x429b,	// (0x00017979) background_graphic

0x42a7,	// (0x00017985) wml_tabs_2_pane

0x42b0,	// (0x0001798e) wml_tabs_3_pane_ParamLimits

0x42b0,	// (0x0001798e) wml_tabs_3_pane

0x42c2,	// (0x000179a0) wml_tabs_4_pane_ParamLimits

0x42c2,	// (0x000179a0) wml_tabs_4_pane

0x42d8,	// (0x000179b6) wml_tabs_5_pane_ParamLimits

0x42d8,	// (0x000179b6) wml_tabs_5_pane

0x42f2,	// (0x000179d0) wml_tabs_pane_g2_ParamLimits

0x42f2,	// (0x000179d0) wml_tabs_pane_g2

0x4306,	// (0x000179e4) wml_tabs_pane_g3_ParamLimits

0x4306,	// (0x000179e4) wml_tabs_pane_g3

0xb007,	// (0x0001e6e5) wml_tabs_2_active_pane_ParamLimits

0xb007,	// (0x0001e6e5) wml_tabs_2_active_pane

0xb017,	// (0x0001e6f5) wml_tabs_2_passive_pane_ParamLimits

0xb017,	// (0x0001e6f5) wml_tabs_2_passive_pane

0xb027,	// (0x0001e705) wml_tabs_3_active_pane_cp_ParamLimits

0xb027,	// (0x0001e705) wml_tabs_3_active_pane_cp

0xb038,	// (0x0001e716) wml_tabs_3_passive_pane_ParamLimits

0xb038,	// (0x0001e716) wml_tabs_3_passive_pane

0xb049,	// (0x0001e727) wml_tabs_3_passive_pane_cp_ParamLimits

0xb049,	// (0x0001e727) wml_tabs_3_passive_pane_cp

0xb05a,	// (0x0001e738) tabs_4_active_pane

0xb062,	// (0x0001e740) tabs_4_passive_pane

0xb06a,	// (0x0001e748) tabs_4_passive_pane_cp

0xb072,	// (0x0001e750) tabs_4_passive_pane_cp2

0xa928,	// (0x0001e006) aid_height_text

0xa28a,	// (0x0001d968) mup_volume_cont_pane_ParamLimits

0xa28a,	// (0x0001d968) mup_volume_cont_pane

0x89f5,	// (0x0001c0d3) aid_size_cell_pinb

0x89ff,	// (0x0001c0dd) aid_size_list_pinb

0xaf6e,	// (0x0001e64c) mup2_volume_cont_pane_ParamLimits

0xaf6e,	// (0x0001e64c) mup2_volume_cont_pane

0x7a1a,	// (0x0001b0f8) mup2_volume_cont_pane_g1_ParamLimits

0x7a1a,	// (0x0001b0f8) mup2_volume_cont_pane_g1

0x86f4,	// (0x0001bdd2) aid_size_cell_touch_ParamLimits

0x86f4,	// (0x0001bdd2) aid_size_cell_touch

0x88f5,	// (0x0001bfd3) touch_pane_ParamLimits

0x88f5,	// (0x0001bfd3) touch_pane

0x1616,	// (0x00014cf4) main_rss2_pane

0x435c,	// (0x00017a3a) listscroll_rss2_pane

0x4365,	// (0x00017a43) rss2_navigation_pane

0x436d,	// (0x00017a4b) list_rss2_pane

0x2a82,	// (0x00016160) scroll_pane_cp22

0x4375,	// (0x00017a53) rss2_navigation_pane_g1

0x437e,	// (0x00017a5c) rss2_navigation_pane_g2

0x4386,	// (0x00017a64) rss2_navigation_pane_g3

0x0002,

0xf706,	// (0x00022de4) rss2_navigation_pane_g

0x438e,	// (0x00017a6c) rss2_navigation_pane_t1

0xb07a,	// (0x0001e758) rss2_list_single_pane_ParamLimits

0xb07a,	// (0x0001e758) rss2_list_single_pane

0x43ca,	// (0x00017aa8) rss2_list_single_pane_t2

0x43d8,	// (0x00017ab6) rss2_list_single_pane_t3_ParamLimits

0x43d8,	// (0x00017ab6) rss2_list_single_pane_t3

0x43f5,	// (0x00017ad3) rss2_list_single_pane_t4

0x9c74,	// (0x0001d352) smil_status_pane_g1

0x1669,	// (0x00014d47) main_image2_pane_ParamLimits

0x1669,	// (0x00014d47) main_image2_pane

0x7885,	// (0x0001af63) main_camera2_pane_g9_ParamLimits

0x7885,	// (0x0001af63) main_camera2_pane_g9

0x78d9,	// (0x0001afb7) main_camera2_pane_t5_ParamLimits

0x78d9,	// (0x0001afb7) main_camera2_pane_t5

0x78eb,	// (0x0001afc9) main_camera2_pane_t6_ParamLimits

0x78eb,	// (0x0001afc9) main_camera2_pane_t6

0xb091,	// (0x0001e76f) main_image2_pane_g1_ParamLimits

0xb091,	// (0x0001e76f) main_image2_pane_g1

0xa73d,	// (0x0001de1b) smil2_video_pane_ParamLimits

0xa73d,	// (0x0001de1b) smil2_video_pane

0x1630,	// (0x00014d0e) aid_zoom_text_primary_cp

0x1661,	// (0x00014d3f) popup_preview_fixed_window

0x2233,	// (0x00015911) im_reading_pane_g1

0x77e1,	// (0x0001aebf) cams2_bc_adjust_pane_cp_ParamLimits

0x77e1,	// (0x0001aebf) cams2_bc_adjust_pane_cp

0x7916,	// (0x0001aff4) cams2_bc_adjust_pane_ParamLimits

0x7916,	// (0x0001aff4) cams2_bc_adjust_pane

0x5a67,	// (0x00019145) cams2_bc_adjust_pane_g1

0x7a53,	// (0x0001b131) cams2_slider_pane

0x7a5c,	// (0x0001b13a) cams2_slider_pane_g1

0x7a65,	// (0x0001b143) cams2_slider_pane_g2

0x0006,

0xf70d,	// (0x00022deb) cams2_slider_pane_g

0x731d,	// (0x0001a9fb) calc_display_pane_ParamLimits

0x7335,	// (0x0001aa13) calc_paper_pane_ParamLimits

0x7351,	// (0x0001aa2f) grid_calc_pane_ParamLimits

0x7712,	// (0x0001adf0) popup_clock_digital_window_t1_ParamLimits

0x2f8f,	// (0x0001666d) main_image_pane_t1

0x7303,	// (0x0001a9e1) aid_size_cell_calc_ParamLimits

0x7303,	// (0x0001a9e1) aid_size_cell_calc

0xab4c,	// (0x0001e22a) popup_blid_sat_info2_window_ParamLimits

0xab4c,	// (0x0001e22a) popup_blid_sat_info2_window

0x443f,	// (0x00017b1d) aid_size_cell_blid

0x4447,	// (0x00017b25) bg_popup_window_pane_cp07

0x446a,	// (0x00017b48) grid_popup_blid_pane

0x4472,	// (0x00017b50) heading_pane_cp05_ParamLimits

0x4472,	// (0x00017b50) heading_pane_cp05

0x453a,	// (0x00017c18) cell_popup_blid_pane_ParamLimits

0x453a,	// (0x00017c18) cell_popup_blid_pane

0x455a,	// (0x00017c38) cell_popup_blid_pane_g1

0x4562,	// (0x00017c40) cell_popup_blid_pane_t1

0xaf38,	// (0x0001e616) mup2_indicator_pane_ParamLimits

0xaf38,	// (0x0001e616) mup2_indicator_pane

0x2c41,	// (0x0001631f) mup2_visualizer_osc_pane

0x4279,	// (0x00017957) mup2_visualizer_spec_pane_ParamLimits

0x4279,	// (0x00017957) mup2_visualizer_spec_pane

0xb09d,	// (0x0001e77b) mup2_spec_half_pane

0xb0a6,	// (0x0001e784) mup2_spec_half_pane_cp

0xb0ae,	// (0x0001e78c) mup2_spec_bar_pane_ParamLimits

0xb0ae,	// (0x0001e78c) mup2_spec_bar_pane

0x41cd,	// (0x000178ab) mup2_spec_bar_pane_g1

0x41d7,	// (0x000178b5) mup2_spec_bar_pane_g2

0x0001,

0xf680,	// (0x00022d5e) mup2_spec_bar_pane_g

0xb0cd,	// (0x0001e7ab) mup2_osc_middle_pane

0x41e9,	// (0x000178c7) mup2_visualizer_osc_pane_g1

0x1697,	// (0x00014d75) popup_number_entry_window_t1_ParamLimits

0x16aa,	// (0x00014d88) popup_number_entry_window_t2_ParamLimits

0x16bc,	// (0x00014d9a) popup_number_entry_window_t3_ParamLimits

0x8942,	// (0x0001c020) popup_number_entry_window_t5_ParamLimits

0x8942,	// (0x0001c020) popup_number_entry_window_t5

0xf12f,	// (0x0002280d) popup_number_entry_window_t_ParamLimits

0x16ce,	// (0x00014dac) text_title_cp2_ParamLimits

0x7751,	// (0x0001ae2f) aid_hotspot_pointer_text2_pane

0x77a7,	// (0x0001ae85) main_viewer_pane_g9_ParamLimits

0x77a7,	// (0x0001ae85) main_viewer_pane_g9

0x2472,	// (0x00015b50) cale_month_pane_t1_ParamLimits

0x2507,	// (0x00015be5) bg_cale_pane_ParamLimits

0x251f,	// (0x00015bfd) list_cale_pane_ParamLimits

0x1fc4,	// (0x000156a2) listscroll_cale_day_pane_t1

0x2530,	// (0x00015c0e) scroll_pane_cp09_ParamLimits

0xa2c5,	// (0x0001d9a3) main_mup_eq_pane_t1_ParamLimits

0xa2c5,	// (0x0001d9a3) main_mup_eq_pane_t1

0xa2db,	// (0x0001d9b9) main_mup_eq_pane_t2_ParamLimits

0xa2db,	// (0x0001d9b9) main_mup_eq_pane_t2

0xa2f1,	// (0x0001d9cf) main_mup_eq_pane_t3_ParamLimits

0xa2f1,	// (0x0001d9cf) main_mup_eq_pane_t3

0xa307,	// (0x0001d9e5) main_mup_eq_pane_t4_ParamLimits

0xa307,	// (0x0001d9e5) main_mup_eq_pane_t4

0xa31d,	// (0x0001d9fb) main_mup_eq_pane_t5_ParamLimits

0xa31d,	// (0x0001d9fb) main_mup_eq_pane_t5

0xa333,	// (0x0001da11) main_mup_eq_pane_t6_ParamLimits

0xa333,	// (0x0001da11) main_mup_eq_pane_t6

0xa345,	// (0x0001da23) main_mup_eq_pane_t7_ParamLimits

0xa345,	// (0x0001da23) main_mup_eq_pane_t7

0xa357,	// (0x0001da35) main_mup_eq_pane_t8_ParamLimits

0xa357,	// (0x0001da35) main_mup_eq_pane_t8

0xa369,	// (0x0001da47) main_mup_eq_pane_t9_ParamLimits

0xa369,	// (0x0001da47) main_mup_eq_pane_t9

0xa37f,	// (0x0001da5d) main_mup_eq_pane_t10_ParamLimits

0xa37f,	// (0x0001da5d) main_mup_eq_pane_t10

0x0009,

0xf4bc,	// (0x00022b9a) main_mup_eq_pane_t_ParamLimits

0xf4bc,	// (0x00022b9a) main_mup_eq_pane_t

0xa412,	// (0x0001daf0) mup_equalizer_pane_cp5_ParamLimits

0xa424,	// (0x0001db02) mup_equalizer_pane_cp6_ParamLimits

0xa436,	// (0x0001db14) mup_equalizer_pane_cp7_ParamLimits

0x1616,	// (0x00014cf4) main_gallery_pane

0x41f2,	// (0x000178d0) smil2_volume_pane

0x420d,	// (0x000178eb) smil_status_volume_pane_g1_ParamLimits

0x41fa,	// (0x000178d8) smil_status_volume_pane_g2_ParamLimits

0x77b3,	// (0x0001ae91) smil_status_volume_pane_g3_ParamLimits

0xf685,	// (0x00022d63) smil_status_volume_pane_g_ParamLimits

0x4447,	// (0x00017b25) bg_popup_window_pane_cp07_ParamLimits

0x4455,	// (0x00017b33) blid_firmament_pane

0xb0d6,	// (0x0001e7b4) aid_size_cell_gallery_ParamLimits

0xb0d6,	// (0x0001e7b4) aid_size_cell_gallery

0xb0e4,	// (0x0001e7c2) grid_gallery_pane_ParamLimits

0xb0e4,	// (0x0001e7c2) grid_gallery_pane

0xb0f0,	// (0x0001e7ce) cell_gallery_pane_ParamLimits

0xb0f0,	// (0x0001e7ce) cell_gallery_pane

0x4570,	// (0x00017c4e) bg_cell_gallery_focus_pane_ParamLimits

0x4570,	// (0x00017c4e) bg_cell_gallery_focus_pane

0x4582,	// (0x00017c60) cell_gallery_pane_g1_ParamLimits

0x4582,	// (0x00017c60) cell_gallery_pane_g1

0xb12f,	// (0x0001e80d) cell_gallery_pane_g2_ParamLimits

0xb12f,	// (0x0001e80d) cell_gallery_pane_g2

0xb13c,	// (0x0001e81a) cell_gallery_pane_g3_ParamLimits

0xb13c,	// (0x0001e81a) cell_gallery_pane_g3

0x458e,	// (0x00017c6c) cell_gallery_pane_g4_ParamLimits

0x458e,	// (0x00017c6c) cell_gallery_pane_g4

0x0003,

0xf733,	// (0x00022e11) cell_gallery_pane_g_ParamLimits

0xf733,	// (0x00022e11) cell_gallery_pane_g

0x459a,	// (0x00017c78) bg_cell_gallery_focus_pane_g1

0x45a2,	// (0x00017c80) bg_cell_gallery_focus_pane_g2

0x45aa,	// (0x00017c88) bg_cell_gallery_focus_pane_g3

0x45b2,	// (0x00017c90) bg_cell_gallery_focus_pane_g4

0x45ba,	// (0x00017c98) bg_cell_gallery_focus_pane_g5

0x45c2,	// (0x00017ca0) bg_cell_gallery_focus_pane_g6

0x45ca,	// (0x00017ca8) bg_cell_gallery_focus_pane_g7

0x45d2,	// (0x00017cb0) bg_cell_gallery_focus_pane_g8

0x0007,

0xf73c,	// (0x00022e1a) bg_cell_gallery_focus_pane_g

0x45da,	// (0x00017cb8) aid_firma_cardinal

0x45ee,	// (0x00017ccc) blid_firmament_pane_t1

0x4605,	// (0x00017ce3) blid_firmament_pane_t2

0x461c,	// (0x00017cfa) blid_firmament_pane_t3

0x4633,	// (0x00017d11) blid_firmament_pane_t4

0x0003,

0xf74d,	// (0x00022e2b) blid_firmament_pane_t

0x464a,	// (0x00017d28) blid_sat_info_pane

0x465a,	// (0x00017d38) blid_sat_info_pane_g1

0x465a,	// (0x00017d38) blid_sat_info_pane_g2

0x0001,

0xf756,	// (0x00022e34) blid_sat_info_pane_g

0x4664,	// (0x00017d42) blid_sat_info_pane_t1

0x4672,	// (0x00017d50) smil2_volume_content_pane

0x467b,	// (0x00017d59) smil2_volume_pane_g1

0x4683,	// (0x00017d61) smil2_volume_content_pane_g1

0x468c,	// (0x00017d6a) smil2_volume_content_pane_g2

0x4695,	// (0x00017d73) smil2_volume_content_pane_g3

0x469e,	// (0x00017d7c) smil2_volume_content_pane_g4

0x46a7,	// (0x00017d85) smil2_volume_content_pane_g5

0x46b0,	// (0x00017d8e) smil2_volume_content_pane_g6

0x46b9,	// (0x00017d97) smil2_volume_content_pane_g7

0x46c2,	// (0x00017da0) smil2_volume_content_pane_g8

0x46cb,	// (0x00017da9) smil2_volume_content_pane_g9

0x46d4,	// (0x00017db2) smil2_volume_content_pane_g10

0x0009,

0xf75b,	// (0x00022e39) smil2_volume_content_pane_g

0x8e55,	// (0x0001c533) cale_week_day_heading_pane_t1_ParamLimits

0x8e6e,	// (0x0001c54c) cale_week_day_heading_pane_t2_ParamLimits

0x8e87,	// (0x0001c565) cale_week_day_heading_pane_t3_ParamLimits

0x8ea0,	// (0x0001c57e) cale_week_day_heading_pane_t4_ParamLimits

0x8eb9,	// (0x0001c597) cale_week_day_heading_pane_t5_ParamLimits

0x8ed2,	// (0x0001c5b0) cale_week_day_heading_pane_t6_ParamLimits

0x8eeb,	// (0x0001c5c9) cale_week_day_heading_pane_t7_ParamLimits

0xf234,	// (0x00022912) cale_week_day_heading_pane_t_ParamLimits

0x1fd6,	// (0x000156b4) bg_cale_side_pane_ParamLimits

0x749c,	// (0x0001ab7a) cale_week_time_pane_t1_ParamLimits

0x74c8,	// (0x0001aba6) cale_week_time_pane_t2_ParamLimits

0x74f4,	// (0x0001abd2) cale_week_time_pane_t3_ParamLimits

0x7520,	// (0x0001abfe) cale_week_time_pane_t4_ParamLimits

0x754c,	// (0x0001ac2a) cale_week_time_pane_t5_ParamLimits

0x7578,	// (0x0001ac56) cale_week_time_pane_t6_ParamLimits

0x75a4,	// (0x0001ac82) cale_week_time_pane_t7_ParamLimits

0x75d0,	// (0x0001acae) cale_week_time_pane_t8_ParamLimits

0xf243,	// (0x00022921) cale_week_time_pane_t_ParamLimits

0x8f04,	// (0x0001c5e2) cell_cale_week_pane_g2_ParamLimits

0x1fd6,	// (0x000156b4) bg_cale_side_pane_cp01_ParamLimits

0x9b3b,	// (0x0001d219) cale_month_week_pane_t1_ParamLimits

0x9b52,	// (0x0001d230) cale_month_week_pane_t2_ParamLimits

0x9b69,	// (0x0001d247) cale_month_week_pane_t3_ParamLimits

0x9b80,	// (0x0001d25e) cale_month_week_pane_t4_ParamLimits

0x9b97,	// (0x0001d275) cale_month_week_pane_t5_ParamLimits

0x9bae,	// (0x0001d28c) cale_month_week_pane_t6_ParamLimits

0xf31c,	// (0x000229fa) cale_month_week_pane_t_ParamLimits

0x7676,	// (0x0001ad54) cell_cale_month_pane_g1_ParamLimits

0x1616,	// (0x00014cf4) main_cale_event_viewer_pane

0x1616,	// (0x00014cf4) listscroll_cale_event_viewer_pane

0x46dd,	// (0x00017dbb) list_cale_ev_pane

0x46e5,	// (0x00017dc3) scroll_pane_cp023

0xb149,	// (0x0001e827) field_cale_ev_pane_ParamLimits

0xb149,	// (0x0001e827) field_cale_ev_pane

0x46f1,	// (0x00017dcf) field_cale_ev_content_pane_ParamLimits

0x46f1,	// (0x00017dcf) field_cale_ev_content_pane

0x46fd,	// (0x00017ddb) field_cale_ev_pane_g1_ParamLimits

0x46fd,	// (0x00017ddb) field_cale_ev_pane_g1

0x4709,	// (0x00017de7) field_cale_ev_pane_g2_ParamLimits

0x4709,	// (0x00017de7) field_cale_ev_pane_g2

0x4721,	// (0x00017dff) field_cale_ev_pane_g3_ParamLimits

0x4721,	// (0x00017dff) field_cale_ev_pane_g3

0x0002,

0xf770,	// (0x00022e4e) field_cale_ev_pane_g_ParamLimits

0xf770,	// (0x00022e4e) field_cale_ev_pane_g

0x4739,	// (0x00017e17) field_cale_ev_pane_t1_ParamLimits

0x4739,	// (0x00017e17) field_cale_ev_pane_t1

0xb163,	// (0x0001e841) field_cale_ev_content_pane_t1_ParamLimits

0xb163,	// (0x0001e841) field_cale_ev_content_pane_t1

0x2dd2,	// (0x000164b0) bg_button_pane_cp01

0x1f9c,	// (0x0001567a) listscroll_cale_week_pane_ParamLimits

0x8c85,	// (0x0001c363) popup_toolbar_window_cp01

0x1fc4,	// (0x000156a2) listscroll_cale_week_pane_t1_ParamLimits

0x1dd4,	// (0x000154b2) listscroll_cale_day_pane_ParamLimits

0x8c85,	// (0x0001c363) popup_toolbar_window_cp02

0x1fc4,	// (0x000156a2) listscroll_cale_day_pane_t1_ParamLimits

0x1f9c,	// (0x0001567a) main_cale_month_pane_ParamLimits

0xabec,	// (0x0001e2ca) popup_toolbar_window_cp03_ParamLimits

0xabec,	// (0x0001e2ca) popup_toolbar_window_cp03

0xa665,	// (0x0001dd43) main_image_pane_g2_ParamLimits

0xa665,	// (0x0001dd43) main_image_pane_g2

0xa671,	// (0x0001dd4f) main_image_pane_g3_ParamLimits

0xa671,	// (0x0001dd4f) main_image_pane_g3

0x0002,

0xf54e,	// (0x00022c2c) main_image_pane_g_ParamLimits

0xf54e,	// (0x00022c2c) main_image_pane_g

0x2f8f,	// (0x0001666d) main_image_pane_t1_ParamLimits

0xa67d,	// (0x0001dd5b) main_image_pane_t2_ParamLimits

0xa67d,	// (0x0001dd5b) main_image_pane_t2

0xa68f,	// (0x0001dd6d) main_image_pane_t3_ParamLimits

0xa68f,	// (0x0001dd6d) main_image_pane_t3

0xa6a1,	// (0x0001dd7f) main_image_pane_t4_ParamLimits

0xa6a1,	// (0x0001dd7f) main_image_pane_t4

0x0003,

0xf555,	// (0x00022c33) main_image_pane_t_ParamLimits

0xf555,	// (0x00022c33) main_image_pane_t

0xa6b3,	// (0x0001dd91) popup_image_details_window_cp01

0xa6bb,	// (0x0001dd99) popup_toobar_trans_pane_cp01_ParamLimits

0xa6bb,	// (0x0001dd99) popup_toobar_trans_pane_cp01

0xab8b,	// (0x0001e269) popup_image_details_window_ParamLimits

0xab8b,	// (0x0001e269) popup_image_details_window

0x4155,	// (0x00017833) popup_image_focus_window

0x77d5,	// (0x0001aeb3) camera2_autofocus_pane_ParamLimits

0x77d5,	// (0x0001aeb3) camera2_autofocus_pane

0x1616,	// (0x00014cf4) bg_popup_sub_pane_cp06

0x4750,	// (0x00017e2e) popup_image_focus_window_g1

0x4758,	// (0x00017e36) popup_image_focus_window_g2

0x4760,	// (0x00017e3e) popup_image_focus_window_g3

0x4768,	// (0x00017e46) popup_image_focus_window_g4

0x0003,

0xf777,	// (0x00022e55) popup_image_focus_window_g

0x4770,	// (0x00017e4e) popup_image_focus_window_t1

0x477e,	// (0x00017e5c) popup_image_focus_window_t2

0x478d,	// (0x00017e6b) popup_image_focus_window_t3

0x0002,

0xf780,	// (0x00022e5e) popup_image_focus_window_t

0x479b,	// (0x00017e79) camera2_autofocus_pane_g1

0x1669,	// (0x00014d47) bg_tb_trans_pane_cp01

0x47a9,	// (0x00017e87) popup_image_details_window_g1

0x47bc,	// (0x00017e9a) popup_image_details_window_g2

0x0002,

0xf792,	// (0x00022e70) popup_image_details_window_g

0x47e5,	// (0x00017ec3) popup_image_details_window_t1

0x47f7,	// (0x00017ed5) popup_image_details_window_t2

0x4810,	// (0x00017eee) popup_image_details_window_t3

0x4824,	// (0x00017f02) popup_image_details_window_t4

0x483f,	// (0x00017f1d) popup_image_details_window_t5

0x0004,

0xf799,	// (0x00022e77) popup_image_details_window_t

0x1da2,	// (0x00015480) bg_calc_paper_pane_ParamLimits

0x7371,	// (0x0001aa4f) grid_highlight_pane_cp013

0x737b,	// (0x0001aa59) list_calc_pane_ParamLimits

0x738d,	// (0x0001aa6b) scroll_pane_cp024

0x1dd4,	// (0x000154b2) bg_calc_display_pane_ParamLimits

0x7395,	// (0x0001aa73) calc_display_pane_t1_ParamLimits

0x73aa,	// (0x0001aa88) calc_display_pane_t2_ParamLimits

0x73bf,	// (0x0001aa9d) calc_display_pane_t3_ParamLimits

0xf1b6,	// (0x00022894) calc_display_pane_t_ParamLimits

0x7420,	// (0x0001aafe) cell_calc_pane_g2

0x0001,

0xf1d3,	// (0x000228b1) cell_calc_pane_g

0x7429,	// (0x0001ab07) cell_calc_pane_t1

0x1e81,	// (0x0001555f) grid_highlight_pane_cp02_ParamLimits

0x1e97,	// (0x00015575) toolbar_button_pane_cp01_ParamLimits

0x1e97,	// (0x00015575) toolbar_button_pane_cp01

0x2fd4,	// (0x000166b2) temp_image_control_pane_ParamLimits

0x2fd4,	// (0x000166b2) temp_image_control_pane

0x1669,	// (0x00014d47) main_mp3_pane

0x4859,	// (0x00017f37) temp_image_control_pane_g1_ParamLimits

0x4859,	// (0x00017f37) temp_image_control_pane_g1

0x4867,	// (0x00017f45) temp_image_control_pane_g2_ParamLimits

0x4867,	// (0x00017f45) temp_image_control_pane_g2

0x4879,	// (0x00017f57) temp_image_control_pane_g3_ParamLimits

0x4879,	// (0x00017f57) temp_image_control_pane_g3

0xb1ad,	// (0x0001e88b) temp_image_control_pane_g4_ParamLimits

0xb1ad,	// (0x0001e88b) temp_image_control_pane_g4

0x0003,

0xf7a4,	// (0x00022e82) temp_image_control_pane_g_ParamLimits

0xf7a4,	// (0x00022e82) temp_image_control_pane_g

0x4859,	// (0x00017f37) main_mp3_pane_g1

0xb1be,	// (0x0001e89c) main_mp3_pane_g2

0x0007,

0xf7ad,	// (0x00022e8b) main_mp3_pane_g

0x48bc,	// (0x00017f9a) main_mp3_pane_t1

0x209c,	// (0x0001577a) main_camera_pane_g8_ParamLimits

0x209c,	// (0x0001577a) main_camera_pane_g8

0x9105,	// (0x0001c7e3) main_video_pane_g7_ParamLimits

0x9105,	// (0x0001c7e3) main_video_pane_g7

0x7904,	// (0x0001afe2) main_camera2_pane_t7_ParamLimits

0x7904,	// (0x0001afe2) main_camera2_pane_t7

0x2299,	// (0x00015977) scroll_pane_cp025_ParamLimits

0x2299,	// (0x00015977) scroll_pane_cp025

0x22ad,	// (0x0001598b) scroll_pane_cp026_ParamLimits

0x22ad,	// (0x0001598b) scroll_pane_cp026

0x22bc,	// (0x0001599a) wml_content_pane_ParamLimits

0x1616,	// (0x00014cf4) main_touch_calib_pane

0xb255,	// (0x0001e933) main_touch_calib_pane_g1

0xb261,	// (0x0001e93f) main_touch_calib_pane_g2

0xb26d,	// (0x0001e94b) main_touch_calib_pane_g3

0xb279,	// (0x0001e957) main_touch_calib_pane_g4

0x0003,

0xf7cb,	// (0x00022ea9) main_touch_calib_pane_g

0xb285,	// (0x0001e963) main_touch_calib_pane_t1

0xb29a,	// (0x0001e978) main_touch_calib_pane_t2

0x0004,

0xf7d4,	// (0x00022eb2) main_touch_calib_pane_t

0x2b33,	// (0x00016211) mup_progress_pane_cp02

0x2b52,	// (0x00016230) navi_pane_g1

0x2bd2,	// (0x000162b0) navi_pane_mp_t3

0x1669,	// (0x00014d47) main_mp3_pane_ParamLimits

0xac26,	// (0x0001e304) navi_pane_ParamLimits

0x4859,	// (0x00017f37) main_mp3_pane_g1_ParamLimits

0xb1be,	// (0x0001e89c) main_mp3_pane_g2_ParamLimits

0xb1ca,	// (0x0001e8a8) main_mp3_pane_g3_ParamLimits

0xb1ca,	// (0x0001e8a8) main_mp3_pane_g3

0xb1d6,	// (0x0001e8b4) main_mp3_pane_g4_ParamLimits

0xb1d6,	// (0x0001e8b4) main_mp3_pane_g4

0x4889,	// (0x00017f67) main_mp3_pane_g5_ParamLimits

0x4889,	// (0x00017f67) main_mp3_pane_g5

0x4897,	// (0x00017f75) main_mp3_pane_g6_ParamLimits

0x4897,	// (0x00017f75) main_mp3_pane_g6

0x48a4,	// (0x00017f82) main_mp3_pane_g7_ParamLimits

0x48a4,	// (0x00017f82) main_mp3_pane_g7

0x48b0,	// (0x00017f8e) main_mp3_pane_g8_ParamLimits

0x48b0,	// (0x00017f8e) main_mp3_pane_g8

0xf7ad,	// (0x00022e8b) main_mp3_pane_g_ParamLimits

0xb1e2,	// (0x0001e8c0) main_mp3_pane_t2

0xb1f0,	// (0x0001e8ce) main_mp3_pane_t3

0x48ca,	// (0x00017fa8) main_mp3_pane_t4

0x48d8,	// (0x00017fb6) main_mp3_pane_t5

0x0005,

0xf7be,	// (0x00022e9c) main_mp3_pane_t

0x48e6,	// (0x00017fc4) mup_progress_pane_cp01

0x1630,	// (0x00014d0e) aid_zoom_text_secondary2

0x46dd,	// (0x00017dbb) list_cale_ev2_pane

0x46e5,	// (0x00017dc3) scroll_pane_cp023_ParamLimits

0x556b,	// (0x00018c49) field_cale_ev2_pane_ParamLimits

0x556b,	// (0x00018c49) field_cale_ev2_pane

0x48ee,	// (0x00017fcc) field_cale_ev2_pane_g1_ParamLimits

0x48ee,	// (0x00017fcc) field_cale_ev2_pane_g1

0x48fa,	// (0x00017fd8) field_cale_ev2_pane_g2_ParamLimits

0x48fa,	// (0x00017fd8) field_cale_ev2_pane_g2

0x4912,	// (0x00017ff0) field_cale_ev2_pane_g3_ParamLimits

0x4912,	// (0x00017ff0) field_cale_ev2_pane_g3

0x0003,

0xf7df,	// (0x00022ebd) field_cale_ev2_pane_g_ParamLimits

0xf7df,	// (0x00022ebd) field_cale_ev2_pane_g

0x4936,	// (0x00018014) field_cale_ev2_pane_t1_ParamLimits

0x4936,	// (0x00018014) field_cale_ev2_pane_t1

0x494d,	// (0x0001802b) field_cale_ev2_pane_t2_ParamLimits

0x494d,	// (0x0001802b) field_cale_ev2_pane_t2

0x0001,

0xf7e8,	// (0x00022ec6) field_cale_ev2_pane_t_ParamLimits

0xf7e8,	// (0x00022ec6) field_cale_ev2_pane_t

0xa561,	// (0x0001dc3f) main_postcard_pane_g5_ParamLimits

0xa561,	// (0x0001dc3f) main_postcard_pane_g5

0xa56d,	// (0x0001dc4b) main_postcard_pane_g6_ParamLimits

0xa56d,	// (0x0001dc4b) main_postcard_pane_g6

0x8f5a,	// (0x0001c638) camera2_autofocus_pane_cp_ParamLimits

0x8f5a,	// (0x0001c638) camera2_autofocus_pane_cp

0x1669,	// (0x00014d47) main_mup3_pane

0xb305,	// (0x0001e9e3) main_mup3_pane_g1_ParamLimits

0xb305,	// (0x0001e9e3) main_mup3_pane_g1

0xb326,	// (0x0001ea04) main_mup3_pane_g2_ParamLimits

0xb326,	// (0x0001ea04) main_mup3_pane_g2

0xb389,	// (0x0001ea67) main_mup3_pane_g3_ParamLimits

0xb389,	// (0x0001ea67) main_mup3_pane_g3

0xb3c4,	// (0x0001eaa2) main_mup3_pane_g4_ParamLimits

0xb3c4,	// (0x0001eaa2) main_mup3_pane_g4

0xb3ff,	// (0x0001eadd) main_mup3_pane_g5_ParamLimits

0xb3ff,	// (0x0001eadd) main_mup3_pane_g5

0xb43a,	// (0x0001eb18) main_mup3_pane_g6_ParamLimits

0xb43a,	// (0x0001eb18) main_mup3_pane_g6

0x4962,	// (0x00018040) main_mup3_pane_g7_ParamLimits

0x4962,	// (0x00018040) main_mup3_pane_g7

0x0007,

0xf7f8,	// (0x00022ed6) main_mup3_pane_g_ParamLimits

0xf7f8,	// (0x00022ed6) main_mup3_pane_g

0xb4a8,	// (0x0001eb86) main_mup3_pane_t1_ParamLimits

0xb4a8,	// (0x0001eb86) main_mup3_pane_t1

0xb50b,	// (0x0001ebe9) main_mup3_pane_t2_ParamLimits

0xb50b,	// (0x0001ebe9) main_mup3_pane_t2

0xb5c8,	// (0x0001eca6) main_mup3_pane_t4_ParamLimits

0xb5c8,	// (0x0001eca6) main_mup3_pane_t4

0xb60e,	// (0x0001ecec) main_mup3_pane_t5_ParamLimits

0xb60e,	// (0x0001ecec) main_mup3_pane_t5

0xb6b2,	// (0x0001ed90) main_mup3_pane_t6_ParamLimits

0xb6b2,	// (0x0001ed90) main_mup3_pane_t6

0x0005,

0xf809,	// (0x00022ee7) main_mup3_pane_t_ParamLimits

0xf809,	// (0x00022ee7) main_mup3_pane_t

0xb75a,	// (0x0001ee38) mup3_progress_pane_ParamLimits

0xb75a,	// (0x0001ee38) mup3_progress_pane

0xb7a0,	// (0x0001ee7e) popup_mup3_control_window_ParamLimits

0xb7a0,	// (0x0001ee7e) popup_mup3_control_window

0x4970,	// (0x0001804e) popup_mup3_text_window

0xb7b9,	// (0x0001ee97) mup3_progress_pane_t1

0xb7cf,	// (0x0001eead) mup3_progress_pane_t2

0x4978,	// (0x00018056) mup3_progress_pane_t3

0x0002,

0xf816,	// (0x00022ef4) mup3_progress_pane_t

0x498f,	// (0x0001806d) mup_progress_pane_cp03

0x1616,	// (0x00014cf4) bg_tb_trans_pane_cp04

0xb7e5,	// (0x0001eec3) mup3_volume_pane

0xb7ed,	// (0x0001eecb) popup_mup3_control_window_g1

0xb7f6,	// (0x0001eed4) mup3_volume_pane_g1

0xb7ff,	// (0x0001eedd) mup3_volume_pane_g2

0xb808,	// (0x0001eee6) mup3_volume_pane_g3

0x0002,

0xf81d,	// (0x00022efb) mup3_volume_pane_g

0x1616,	// (0x00014cf4) bg_tb_trans_pane_cp03

0x499f,	// (0x0001807d) popup_mup3_text_window_g1

0x49a7,	// (0x00018085) popup_mup3_text_window_t1

0x1e58,	// (0x00015536) list_calc_item_pane_g1_ParamLimits

0x4343,	// (0x00017a21) mup_volume_pane_cp_g1

0xb2af,	// (0x0001e98d) main_touch_calib_pane_t3

0xb2c1,	// (0x0001e99f) main_touch_calib_pane_t4

0xb2d3,	// (0x0001e9b1) main_touch_calib_pane_t5

0x1620,	// (0x00014cfe) aid_cell_size_toolbar2

0x1628,	// (0x00014d06) aid_popup3_width_pane

0x1630,	// (0x00014d0e) aid_zoom_text_msg_primary

0x7660,	// (0x0001ad3e) vorec_t7

0x1e1c,	// (0x000154fa) bg_calc_paper_pane_g1_ParamLimits

0x1e34,	// (0x00015512) bg_calc_paper_pane_g2_ParamLimits

0x1e28,	// (0x00015506) bg_calc_paper_pane_g3_ParamLimits

0x1e4c,	// (0x0001552a) bg_calc_paper_pane_g4_ParamLimits

0x1e40,	// (0x0001551e) bg_calc_paper_pane_g5_ParamLimits

0x8b85,	// (0x0001c263) bg_calc_paper_pane_g6_ParamLimits

0x8b94,	// (0x0001c272) bg_calc_paper_pane_g7_ParamLimits

0x8ba3,	// (0x0001c281) bg_calc_paper_pane_g8_ParamLimits

0xf1bd,	// (0x0002289b) bg_calc_paper_pane_g_ParamLimits

0x8bb2,	// (0x0001c290) calc_bg_paper_pane_g9_ParamLimits

0x903a,	// (0x0001c718) image_qvga_pane_ParamLimits

0x903a,	// (0x0001c718) image_qvga_pane

0x1ce3,	// (0x000153c1) bg_popup_sub_pane_cp04_ParamLimits

0x2f0b,	// (0x000165e9) popup_mup_playback_window_g1_ParamLimits

0x2f17,	// (0x000165f5) popup_mup_playback_window_t1_ParamLimits

0x2f2c,	// (0x0001660a) popup_mup_playback_window_t2_ParamLimits

0xf549,	// (0x00022c27) popup_mup_playback_window_t_ParamLimits

0xae44,	// (0x0001e522) main_mup2_pane_g3_ParamLimits

0xae44,	// (0x0001e522) main_mup2_pane_g3

0x92ae,	// (0x0001c98c) popup_toolbar_window_cp04

0x330d,	// (0x000169eb) popup_call2_audio_second_window_g3_ParamLimits

0x330d,	// (0x000169eb) popup_call2_audio_second_window_g3

0x3717,	// (0x00016df5) popup_call2_audio_first_window_g4_ParamLimits

0x3717,	// (0x00016df5) popup_call2_audio_first_window_g4

0x3d96,	// (0x00017474) popup_call2_audio_in_window_g4_ParamLimits

0x3d96,	// (0x00017474) popup_call2_audio_in_window_g4

0xa658,	// (0x0001dd36) aid_area_sk_bg_cut_ParamLimits

0xa658,	// (0x0001dd36) aid_area_sk_bg_cut

0x2f41,	// (0x0001661f) aid_area_sk_bg_cut_2_ParamLimits

0x2f41,	// (0x0001661f) aid_area_sk_bg_cut_2

0xb11f,	// (0x0001e7fd) aid_placing_details_win

0xb127,	// (0x0001e805) aid_placing_details_win_2

0x479b,	// (0x00017e79) camera2_autofocus_pane_g1_ParamLimits

0x88b1,	// (0x0001bf8f) popup_fixed_preview_cale_window_ParamLimits

0x88b1,	// (0x0001bf8f) popup_fixed_preview_cale_window

0x2c6d,	// (0x0001634b) navi_slider_pane_g3

0x2c64,	// (0x00016342) navi_slider_pane_g4

0x2c5b,	// (0x00016339) navi_slider_pane_g5

0x2c6d,	// (0x0001634b) navi_slider_pane_g6

0x7738,	// (0x0001ae16) navi_slider_pane_g7

0x2d97,	// (0x00016475) mup_scale_pane_g3

0x2da0,	// (0x0001647e) mup_scale_pane_g4

0x2da9,	// (0x00016487) mup_scale_pane_g5

0xa448,	// (0x0001db26) mup_scale_pane_g6

0xa451,	// (0x0001db2f) mup_scale_pane_g7

0x2c6d,	// (0x0001634b) cams2_slider_pane_g3

0x4426,	// (0x00017b04) cams2_slider_pane_g4

0x7a6e,	// (0x0001b14c) cams2_slider_pane_g5

0x2c6d,	// (0x0001634b) cams2_slider_pane_g6

0x7a76,	// (0x0001b154) cams2_slider_pane_g7

0x465a,	// (0x00017d38) camera2_autofocus_pane_cp_g1

0x49b5,	// (0x00018093) bg_popup_preview_window_pane_cp02_ParamLimits

0x49b5,	// (0x00018093) bg_popup_preview_window_pane_cp02

0xb811,	// (0x0001eeef) list_fp_cale_pane_ParamLimits

0xb811,	// (0x0001eeef) list_fp_cale_pane

0x49c1,	// (0x0001809f) popup_fixed_preview_cale_window_t1_ParamLimits

0x49c1,	// (0x0001809f) popup_fixed_preview_cale_window_t1

0xb821,	// (0x0001eeff) popup_fixed_preview_cale_window_t2_ParamLimits

0xb821,	// (0x0001eeff) popup_fixed_preview_cale_window_t2

0xb836,	// (0x0001ef14) popup_fixed_preview_cale_window_t3_ParamLimits

0xb836,	// (0x0001ef14) popup_fixed_preview_cale_window_t3

0x0002,

0xf824,	// (0x00022f02) popup_fixed_preview_cale_window_t_ParamLimits

0xf824,	// (0x00022f02) popup_fixed_preview_cale_window_t

0xb848,	// (0x0001ef26) list_single_fp_cale_pane_ParamLimits

0xb848,	// (0x0001ef26) list_single_fp_cale_pane

0xb855,	// (0x0001ef33) list_single_fp_cale_pane_g1_ParamLimits

0xb855,	// (0x0001ef33) list_single_fp_cale_pane_g1

0x49df,	// (0x000180bd) list_single_fp_cale_pane_g2_ParamLimits

0x49df,	// (0x000180bd) list_single_fp_cale_pane_g2

0x0002,

0xf82b,	// (0x00022f09) list_single_fp_cale_pane_g_ParamLimits

0xf82b,	// (0x00022f09) list_single_fp_cale_pane_g

0xb861,	// (0x0001ef3f) list_single_fp_cale_pane_t1_ParamLimits

0xb861,	// (0x0001ef3f) list_single_fp_cale_pane_t1

0xb873,	// (0x0001ef51) list_single_fp_cale_pane_t2_ParamLimits

0xb873,	// (0x0001ef51) list_single_fp_cale_pane_t2

0x0001,

0xf832,	// (0x00022f10) list_single_fp_cale_pane_t_ParamLimits

0xf832,	// (0x00022f10) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x1616,	// (0x00014cf4) main_dialer_pane

0xb8a6,	// (0x0001ef84) aid_cell_size_keypad

0xb8b0,	// (0x0001ef8e) dialer_ne_pane

0xb8b8,	// (0x0001ef96) grid_dialer_command_1_pane

0xb8c0,	// (0x0001ef9e) grid_dialer_command_2_pane

0xb8c8,	// (0x0001efa6) grid_dialer_keypad_pane

0xb8d8,	// (0x0001efb6) bg_popup_call_pane_cp06_ParamLimits

0xb8d8,	// (0x0001efb6) bg_popup_call_pane_cp06

0xb8e4,	// (0x0001efc2) dialer_ne_clear_pane_ParamLimits

0xb8e4,	// (0x0001efc2) dialer_ne_clear_pane

0x49f8,	// (0x000180d6) dialer_ne_pane_g1

0x4a00,	// (0x000180de) dialer_ne_pane_t1_ParamLimits

0x4a00,	// (0x000180de) dialer_ne_pane_t1

0xb8f0,	// (0x0001efce) dialer_ne_pane_t2_ParamLimits

0xb8f0,	// (0x0001efce) dialer_ne_pane_t2

0xb90d,	// (0x0001efeb) dialer_ne_pane_t3_ParamLimits

0xb90d,	// (0x0001efeb) dialer_ne_pane_t3

0x0002,

0xf837,	// (0x00022f15) dialer_ne_pane_t_ParamLimits

0xf837,	// (0x00022f15) dialer_ne_pane_t

0xb931,	// (0x0001f00f) dialer_ne_pane_t3_copy1_ParamLimits

0xb931,	// (0x0001f00f) dialer_ne_pane_t3_copy1

0xb955,	// (0x0001f033) cell_dialer_keypad_pane_ParamLimits

0xb955,	// (0x0001f033) cell_dialer_keypad_pane

0xb96a,	// (0x0001f048) cell_dialer_command_1_pane_ParamLimits

0xb96a,	// (0x0001f048) cell_dialer_command_1_pane

0xb980,	// (0x0001f05e) cell_dialer_command_2_pane_ParamLimits

0xb980,	// (0x0001f05e) cell_dialer_command_2_pane

0x4a12,	// (0x000180f0) bg_button_pane_cp02_ParamLimits

0x4a12,	// (0x000180f0) bg_button_pane_cp02

0xb98f,	// (0x0001f06d) cell_dialer_keypad_pane_g1_ParamLimits

0xb98f,	// (0x0001f06d) cell_dialer_keypad_pane_g1

0x4a12,	// (0x000180f0) bg_button_pane_cp03_ParamLimits

0x4a12,	// (0x000180f0) bg_button_pane_cp03

0xb9a4,	// (0x0001f082) cell_dialer_command_1_pane_g1_ParamLimits

0xb9a4,	// (0x0001f082) cell_dialer_command_1_pane_g1

0x4a1e,	// (0x000180fc) bg_button_pane_cp04

0xb9b7,	// (0x0001f095) cell_dialer_command_2_pane_g1

0x2c41,	// (0x0001631f) bg_button_pane_cp06

0x4a26,	// (0x00018104) dialer_ne_clear_pane_g1

0x2b5e,	// (0x0001623c) navi_pane_g2

0xa03f,	// (0x0001d71d) navi_pane_g3

0x0002,

0xf44c,	// (0x00022b2a) navi_pane_g

0x2be0,	// (0x000162be) navi_pane_mv_g2

0x2c08,	// (0x000162e6) navi_pane_mv_g5

0xa064,	// (0x0001d742) navi_pane_mv_t1

0x1dd4,	// (0x000154b2) main_clock2_pane

0xb9e6,	// (0x0001f0c4) main_clock2_list_pane_ParamLimits

0xb9e6,	// (0x0001f0c4) main_clock2_list_pane

0xba0c,	// (0x0001f0ea) main_clock2_pane_t1_ParamLimits

0xba0c,	// (0x0001f0ea) main_clock2_pane_t1

0xba36,	// (0x0001f114) main_clock2_pane_t2_ParamLimits

0xba36,	// (0x0001f114) main_clock2_pane_t2

0x0004,

0xf83e,	// (0x00022f1c) main_clock2_pane_t_ParamLimits

0xf83e,	// (0x00022f1c) main_clock2_pane_t

0xba99,	// (0x0001f177) popup_clock_analogue_window_cp03_ParamLimits

0xba99,	// (0x0001f177) popup_clock_analogue_window_cp03

0xbab5,	// (0x0001f193) popup_clock_digital_window_cp02_ParamLimits

0xbab5,	// (0x0001f193) popup_clock_digital_window_cp02

0xbb03,	// (0x0001f1e1) main_clock2_list_single_pane_ParamLimits

0xbb03,	// (0x0001f1e1) main_clock2_list_single_pane

0x2c41,	// (0x0001631f) list_highlight_pane_cp05

0x4a2e,	// (0x0001810c) main_clock2_list_single_pane_t1

0x92ae,	// (0x0001c98c) popup_toolbar_window_cp04_ParamLimits

0xb17d,	// (0x0001e85b) camera2_autofocus_pane_g2_ParamLimits

0xb17d,	// (0x0001e85b) camera2_autofocus_pane_g2

0xb189,	// (0x0001e867) camera2_autofocus_pane_g3_ParamLimits

0xb189,	// (0x0001e867) camera2_autofocus_pane_g3

0xb195,	// (0x0001e873) camera2_autofocus_pane_g4_ParamLimits

0xb195,	// (0x0001e873) camera2_autofocus_pane_g4

0xb1a1,	// (0x0001e87f) camera2_autofocus_pane_g5_ParamLimits

0xb1a1,	// (0x0001e87f) camera2_autofocus_pane_g5

0x0004,

0xf787,	// (0x00022e65) camera2_autofocus_pane_g_ParamLimits

0xf787,	// (0x00022e65) camera2_autofocus_pane_g

0xb2e5,	// (0x0001e9c3) camera2_autofocus_pane_cp_g2

0xb2ed,	// (0x0001e9cb) camera2_autofocus_pane_cp_g3

0xb2f5,	// (0x0001e9d3) camera2_autofocus_pane_cp_g4

0xb2fd,	// (0x0001e9db) camera2_autofocus_pane_cp_g5

0x0004,

0xf7ed,	// (0x00022ecb) camera2_autofocus_pane_cp_g

0xb8d0,	// (0x0001efae) popup_dialer_spcha_window

0x1616,	// (0x00014cf4) bg_popup_sub_pane_cp07

0x4a3c,	// (0x0001811a) list_spcha_pane

0x4a44,	// (0x00018122) list_single_spcha_pane_ParamLimits

0x4a44,	// (0x00018122) list_single_spcha_pane

0x1616,	// (0x00014cf4) list_highlight_pane_cp06

0x4a55,	// (0x00018133) list_single_spcha_pane_t1

0x3b40,	// (0x0001721e) popup_call2_audio_out_window_g4_ParamLimits

0x3b40,	// (0x0001721e) popup_call2_audio_out_window_g4

0x1616,	// (0x00014cf4) main_imed2_pane

0x415d,	// (0x0001783b) popup_imed_adjust2_window

0xab97,	// (0x0001e275) popup_imed_trans_window_ParamLimits

0xab97,	// (0x0001e275) popup_imed_trans_window

0x449e,	// (0x00017b7c) popup_blid_sat_info2_window_t1

0x44ac,	// (0x00017b8a) popup_blid_sat_info2_window_t2

0x000a,

0xf71c,	// (0x00022dfa) popup_blid_sat_info2_window_t

0xbb33,	// (0x0001f211) aid_size_cell_colour_35

0xbb4a,	// (0x0001f228) aid_size_cell_colour_112

0xbb61,	// (0x0001f23f) aid_size_cell_effect

0x1669,	// (0x00014d47) bg_tb_trans_pane_cp02

0x43be,	// (0x00017a9c) heading_imed_pane

0xbb7b,	// (0x0001f259) listscroll_imed_pane

0x4a63,	// (0x00018141) heading_imed_pane_g1

0x4a6b,	// (0x00018149) heading_imed_pane_t1

0x4a79,	// (0x00018157) grid_imed_colour_35_pane_ParamLimits

0x4a79,	// (0x00018157) grid_imed_colour_35_pane

0xbb87,	// (0x0001f265) grid_imed_effect_pane

0x4a8c,	// (0x0001816a) list_imed_aspect_pane

0xbb93,	// (0x0001f271) scroll_pane_cp027_ParamLimits

0xbb93,	// (0x0001f271) scroll_pane_cp027

0xbb9f,	// (0x0001f27d) cell_imed_effect_pane_ParamLimits

0xbb9f,	// (0x0001f27d) cell_imed_effect_pane

0x4a94,	// (0x00018172) cell_imed_colour_pane_ParamLimits

0x4a94,	// (0x00018172) cell_imed_colour_pane

0x4ace,	// (0x000181ac) cell_imed_colour_pane_g1_ParamLimits

0x4ace,	// (0x000181ac) cell_imed_colour_pane_g1

0x4adf,	// (0x000181bd) hgihlgiht_grid_pane_cp016_ParamLimits

0x4adf,	// (0x000181bd) hgihlgiht_grid_pane_cp016

0xbbb5,	// (0x0001f293) cell_imed_effect_pane_g1

0xbbbd,	// (0x0001f29b) grid_highlight_pane_cp017

0x4af0,	// (0x000181ce) list_imed_single_pane_ParamLimits

0x4af0,	// (0x000181ce) list_imed_single_pane

0x1616,	// (0x00014cf4) list_highlight_pane_cp07

0x4b03,	// (0x000181e1) list_imed_aspect_pane_comp1_t1

0x4137,	// (0x00017815) bg_tb_trans_pane_cp05

0x4b23,	// (0x00018201) popup_imed_adjust2_window_g1

0x4b4a,	// (0x00018228) popup_imed_adjust2_window_t1

0x4b62,	// (0x00018240) slider_imed_adjust_pane

0x4b76,	// (0x00018254) slider_imed_adjust_pane_g1

0x4b86,	// (0x00018264) slider_imed_adjust_pane_g2

0x4b96,	// (0x00018274) slider_imed_adjust_pane_g3

0x4ba7,	// (0x00018285) slider_imed_adjust_pane_g4

0x0003,

0xf85b,	// (0x00022f39) slider_imed_adjust_pane_g

0xbbc6,	// (0x0001f2a4) aid_size_cell_clipart2

0xbbd2,	// (0x0001f2b0) grid_imed_clipart_pane

0x4bb8,	// (0x00018296) scroll_pane_cp031

0xbbdc,	// (0x0001f2ba) cell_imed_clipart_pane_ParamLimits

0xbbdc,	// (0x0001f2ba) cell_imed_clipart_pane

0xbbf3,	// (0x0001f2d1) cell_imed_clipart_pane_g1

0x1616,	// (0x00014cf4) grid_highlight_pane_cp014

0xb9f2,	// (0x0001f0d0) main_clock2_pane_g1_ParamLimits

0xb9f2,	// (0x0001f0d0) main_clock2_pane_g1

0xbacd,	// (0x0001f1ab) aid_call2_pane_cp10

0xbad9,	// (0x0001f1b7) aid_call_pane_cp10

0x2b0e,	// (0x000161ec) popup_clock_analogue_window_cp10_g1

0x2b0e,	// (0x000161ec) popup_clock_analogue_window_cp10_g2

0xbae5,	// (0x0001f1c3) popup_clock_analogue_window_cp10_g3

0xbae5,	// (0x0001f1c3) popup_clock_analogue_window_cp10_g4

0x2b0e,	// (0x000161ec) popup_clock_analogue_window_cp10_g5

0x0004,

0xf849,	// (0x00022f27) popup_clock_analogue_window_cp10_g

0xbaf1,	// (0x0001f1cf) popup_clock_analogue_window_cp10_t1

0x7a7f,	// (0x0001b15d) clock_digital_number_pane_cp10_ParamLimits

0x7a7f,	// (0x0001b15d) clock_digital_number_pane_cp10

0x7a97,	// (0x0001b175) clock_digital_number_pane_cp11_ParamLimits

0x7a97,	// (0x0001b175) clock_digital_number_pane_cp11

0x7aaf,	// (0x0001b18d) clock_digital_number_pane_cp12_ParamLimits

0x7aaf,	// (0x0001b18d) clock_digital_number_pane_cp12

0x7ac7,	// (0x0001b1a5) clock_digital_number_pane_cp13_ParamLimits

0x7ac7,	// (0x0001b1a5) clock_digital_number_pane_cp13

0x7adf,	// (0x0001b1bd) clock_digital_separator_pane_cp10_ParamLimits

0x7adf,	// (0x0001b1bd) clock_digital_separator_pane_cp10

0xbb15,	// (0x0001f1f3) popup_clock_digital_window_cp02_t1_ParamLimits

0xbb15,	// (0x0001f1f3) popup_clock_digital_window_cp02_t1

0x1cdb,	// (0x000153b9) clock_digital_number_pane_cp10_g1

0x1cdb,	// (0x000153b9) clock_digital_number_pane_cp10_g2

0x0001,

0xf864,	// (0x00022f42) clock_digital_number_pane_cp10_g

0x1cdb,	// (0x000153b9) clock_digital_separator_pane_cp10_g1

0x1cdb,	// (0x000153b9) clock_digital_separator_pane_g2_cp10

0x2c11,	// (0x000162ef) navi_pane_vded_g4

0x2c1a,	// (0x000162f8) navi_pane_vded_g5

0x2c23,	// (0x00016301) navi_pane_vded_t1

0x1616,	// (0x00014cf4) main_vded_pane

0xbbfc,	// (0x0001f2da) main_vded_pane_g1

0xbc04,	// (0x0001f2e2) main_vded_pane_g2

0xbc0c,	// (0x0001f2ea) main_vded_pane_g3

0x0002,

0xf869,	// (0x00022f47) main_vded_pane_g

0xbc14,	// (0x0001f2f2) main_vded_pane_t1

0xbc22,	// (0x0001f300) main_vded_pane_t2

0x0001,

0xf870,	// (0x00022f4e) main_vded_pane_t

0xbc30,	// (0x0001f30e) vded_slider_pane

0xbc38,	// (0x0001f316) vded_video_pane

0x4bc0,	// (0x0001829e) vded_video_pane_g1

0xbc40,	// (0x0001f31e) vded_video_pane_g2

0x465a,	// (0x00017d38) vded_video_pane_g3

0x0002,

0xf875,	// (0x00022f53) vded_video_pane_g

0x4bca,	// (0x000182a8) vded_slider_pane_g1

0x4343,	// (0x00017a21) vded_slider_pane_g2

0x4bd3,	// (0x000182b1) vded_slider_pane_g3

0x4bdc,	// (0x000182ba) vded_slider_pane_g4

0x4be5,	// (0x000182c3) vded_slider_pane_g5

0x0004,

0xf87c,	// (0x00022f5a) vded_slider_pane_g

0xb794,	// (0x0001ee72) mup3_rocker_pane_ParamLimits

0xb794,	// (0x0001ee72) mup3_rocker_pane

0xbc49,	// (0x0001f327) mup3_control_keys_pane_g1

0xbc51,	// (0x0001f32f) mup3_control_keys_pane_g2

0xbc59,	// (0x0001f337) mup3_control_keys_pane_g3

0xbc61,	// (0x0001f33f) mup3_control_keys_pane_g4

0x0003,

0xf887,	// (0x00022f65) mup3_control_keys_pane_g

0x88cd,	// (0x0001bfab) popup_toolbar2_fixed_window_cp01_ParamLimits

0x88cd,	// (0x0001bfab) popup_toolbar2_fixed_window_cp01

0xb7ac,	// (0x0001ee8a) popup_toolbar2_fixed_window_cp02_ParamLimits

0xb7ac,	// (0x0001ee8a) popup_toolbar2_fixed_window_cp02

0x347f,	// (0x00016b5d) popup_call2_audio_second_window_t4_ParamLimits

0x347f,	// (0x00016b5d) popup_call2_audio_second_window_t4

0x39ad,	// (0x0001708b) popup_call2_audio_first_window_t6_ParamLimits

0x39ad,	// (0x0001708b) popup_call2_audio_first_window_t6

0x3c43,	// (0x00017321) popup_call2_audio_out_window_t6_ParamLimits

0x3c43,	// (0x00017321) popup_call2_audio_out_window_t6

0x1616,	// (0x00014cf4) main_vitu_pane

0xbc71,	// (0x0001f34f) aid_size_cell_itu_ParamLimits

0xbc71,	// (0x0001f34f) aid_size_cell_itu

0x439c,	// (0x00017a7a) bg_popup_window_pane_cp08_ParamLimits

0x439c,	// (0x00017a7a) bg_popup_window_pane_cp08

0xbc7f,	// (0x0001f35d) field_vitu_entry_pane_ParamLimits

0xbc7f,	// (0x0001f35d) field_vitu_entry_pane

0xbc8c,	// (0x0001f36a) grid_vitu_function_pane_ParamLimits

0xbc8c,	// (0x0001f36a) grid_vitu_function_pane

0xbc98,	// (0x0001f376) grid_vitu_itu_pane_ParamLimits

0xbc98,	// (0x0001f376) grid_vitu_itu_pane

0xbca4,	// (0x0001f382) cell_vitu_itu_pane_ParamLimits

0xbca4,	// (0x0001f382) cell_vitu_itu_pane

0xbcb9,	// (0x0001f397) cell_vitu_function_pane_ParamLimits

0xbcb9,	// (0x0001f397) cell_vitu_function_pane

0x1669,	// (0x00014d47) bg_popup_sub_pane_cp08_ParamLimits

0x1669,	// (0x00014d47) bg_popup_sub_pane_cp08

0xbccb,	// (0x0001f3a9) field_vitu_entry_pane_t1_ParamLimits

0xbccb,	// (0x0001f3a9) field_vitu_entry_pane_t1

0x4c06,	// (0x000182e4) field_vitu_entry_pane_t2_ParamLimits

0x4c06,	// (0x000182e4) field_vitu_entry_pane_t2

0x0001,

0xf895,	// (0x00022f73) field_vitu_entry_pane_t_ParamLimits

0xf895,	// (0x00022f73) field_vitu_entry_pane_t

0x4c23,	// (0x00018301) bg_button_pane_cp05_ParamLimits

0x4c23,	// (0x00018301) bg_button_pane_cp05

0xbce4,	// (0x0001f3c2) cell_vitu_itu_pane_g1

0xbcfc,	// (0x0001f3da) cell_vitu_itu_pane_t1_ParamLimits

0xbcfc,	// (0x0001f3da) cell_vitu_itu_pane_t1

0xbd0e,	// (0x0001f3ec) cell_vitu_itu_pane_t2_ParamLimits

0xbd0e,	// (0x0001f3ec) cell_vitu_itu_pane_t2

0x0002,

0xf89a,	// (0x00022f78) cell_vitu_itu_pane_t_ParamLimits

0xf89a,	// (0x00022f78) cell_vitu_itu_pane_t

0x4c31,	// (0x0001830f) bg_button_pane_cp07

0xbd43,	// (0x0001f421) cell_vitu_function_pane_g1

0x7369,	// (0x0001aa47) main_calc_pane_g1

0x8714,	// (0x0001bdf2) aid_visual_content_pane

0x1616,	// (0x00014cf4) main_vradio_pane

0xbd4c,	// (0x0001f42a) main_vradio_pane_g1_ParamLimits

0xbd4c,	// (0x0001f42a) main_vradio_pane_g1

0x4c3b,	// (0x00018319) main_vradio_pane_g2_ParamLimits

0x4c3b,	// (0x00018319) main_vradio_pane_g2

0x0001,

0xf8a1,	// (0x00022f7f) main_vradio_pane_g_ParamLimits

0xf8a1,	// (0x00022f7f) main_vradio_pane_g

0xbd5a,	// (0x0001f438) main_vradio_pane_t1_ParamLimits

0xbd5a,	// (0x0001f438) main_vradio_pane_t1

0xbd6c,	// (0x0001f44a) main_vradio_pane_t2_ParamLimits

0xbd6c,	// (0x0001f44a) main_vradio_pane_t2

0x4c48,	// (0x00018326) main_vradio_pane_t3_ParamLimits

0x4c48,	// (0x00018326) main_vradio_pane_t3

0x0002,

0xf8a6,	// (0x00022f84) main_vradio_pane_t_ParamLimits

0xf8a6,	// (0x00022f84) main_vradio_pane_t

0xbd7e,	// (0x0001f45c) vradio_rocker_control_pane_ParamLimits

0xbd7e,	// (0x0001f45c) vradio_rocker_control_pane

0xbd8a,	// (0x0001f468) vradio_station_info_pane_ParamLimits

0xbd8a,	// (0x0001f468) vradio_station_info_pane

0x4c5a,	// (0x00018338) vradio_frequency_info_pane_ParamLimits

0x4c5a,	// (0x00018338) vradio_frequency_info_pane

0x465a,	// (0x00017d38) vradio_station_info_pane_g1

0x4c69,	// (0x00018347) vradio_station_info_pane_t1_ParamLimits

0x4c69,	// (0x00018347) vradio_station_info_pane_t1

0x4c8b,	// (0x00018369) vradio_station_info_pane_t2_ParamLimits

0x4c8b,	// (0x00018369) vradio_station_info_pane_t2

0x0001,

0xf8ad,	// (0x00022f8b) vradio_station_info_pane_t_ParamLimits

0xf8ad,	// (0x00022f8b) vradio_station_info_pane_t

0x4c9d,	// (0x0001837b) vradio_tuning_pane

0x4ca5,	// (0x00018383) vradio_rocker_control_pane_g1

0x4cad,	// (0x0001838b) vradio_rocker_control_pane_g2

0x4cb5,	// (0x00018393) vradio_rocker_control_pane_g3

0x4cbd,	// (0x0001839b) vradio_rocker_control_pane_g4

0x4cc5,	// (0x000183a3) vradio_rocker_control_pane_g5

0x0004,

0xf8b2,	// (0x00022f90) vradio_rocker_control_pane_g

0xbd97,	// (0x0001f475) vradio_frequency_info_pane_g1

0x4ccd,	// (0x000183ab) vradio_frequency_info_pane_t1_ParamLimits

0x4ccd,	// (0x000183ab) vradio_frequency_info_pane_t1

0xbd9f,	// (0x0001f47d) vradio_tuning_pane_g1

0xbda8,	// (0x0001f486) vradio_tuning_pane_t1

0x1640,	// (0x00014d1e) area_side_right_pane_ParamLimits

0x1640,	// (0x00014d1e) area_side_right_pane

0x40fe,	// (0x000177dc) status_small_pane_g1

0x4106,	// (0x000177e4) status_small_pane_g2

0x410f,	// (0x000177ed) status_small_pane_g3

0x4118,	// (0x000177f6) status_small_pane_g4

0x0003,

0xf672,	// (0x00022d50) status_small_pane_g

0x4121,	// (0x000177ff) status_small_pane_t1

0x1616,	// (0x00014cf4) main_video3_pane

0x4ce1,	// (0x000183bf) cams_zoom_vslider_pane

0x4ce9,	// (0x000183c7) image3_wide_pane_ParamLimits

0x4ce9,	// (0x000183c7) image3_wide_pane

0x4d03,	// (0x000183e1) image3_wide_small_pane

0x4d0d,	// (0x000183eb) main_video3_pane_g1_ParamLimits

0x4d0d,	// (0x000183eb) main_video3_pane_g1

0x4d29,	// (0x00018407) main_video3_pane_g2_ParamLimits

0x4d29,	// (0x00018407) main_video3_pane_g2

0x0001,

0xf8bd,	// (0x00022f9b) main_video3_pane_g_ParamLimits

0xf8bd,	// (0x00022f9b) main_video3_pane_g

0x4d45,	// (0x00018423) main_video3_pane_t1_ParamLimits

0x4d45,	// (0x00018423) main_video3_pane_t1

0x4d70,	// (0x0001844e) main_video3_pane_t2_ParamLimits

0x4d70,	// (0x0001844e) main_video3_pane_t2

0x4d9b,	// (0x00018479) main_video3_pane_t3_ParamLimits

0x4d9b,	// (0x00018479) main_video3_pane_t3

0x0002,

0xf8c2,	// (0x00022fa0) main_video3_pane_t_ParamLimits

0xf8c2,	// (0x00022fa0) main_video3_pane_t

0x4dc6,	// (0x000184a4) cams_zoom_vslider_pane_g1

0x4dcf,	// (0x000184ad) cams_zoom_vslider_pane_g2

0x0001,

0xf8c9,	// (0x00022fa7) cams_zoom_vslider_pane_g

0x4dd7,	// (0x000184b5) small_slider_vertical_pane

0x465a,	// (0x00017d38) small_slider_vertical_pane_g1

0x465a,	// (0x00017d38) small_slider_vertical_pane_g2

0x4ddf,	// (0x000184bd) small_slider_vertical_pane_g3

0x0002,

0xf8ce,	// (0x00022fac) small_slider_vertical_pane_g

0x1616,	// (0x00014cf4) main_hwr_training_pane

0x4de8,	// (0x000184c6) hwr_training_instruct_pane_ParamLimits

0x4de8,	// (0x000184c6) hwr_training_instruct_pane

0xbdb7,	// (0x0001f495) hwr_training_navi_pane_ParamLimits

0xbdb7,	// (0x0001f495) hwr_training_navi_pane

0xbdcb,	// (0x0001f4a9) hwr_training_write_pane_ParamLimits

0xbdcb,	// (0x0001f4a9) hwr_training_write_pane

0x1616,	// (0x00014cf4) bg_frame_shadow_pane

0x4e17,	// (0x000184f5) hwr_training_write_pane_g1

0x4e1f,	// (0x000184fd) hwr_training_write_pane_g2

0x4e27,	// (0x00018505) hwr_training_write_pane_g3

0x4e2f,	// (0x0001850d) hwr_training_write_pane_g4

0x4e37,	// (0x00018515) hwr_training_write_pane_g5

0x4e3f,	// (0x0001851d) hwr_training_write_pane_g6

0x4e47,	// (0x00018525) hwr_training_write_pane_g7

0x0006,

0xf8d5,	// (0x00022fb3) hwr_training_write_pane_g

0x7af7,	// (0x0001b1d5) hwr_training_navi_pane_g1_ParamLimits

0x7af7,	// (0x0001b1d5) hwr_training_navi_pane_g1

0x7b09,	// (0x0001b1e7) hwr_training_navi_pane_g2_ParamLimits

0x7b09,	// (0x0001b1e7) hwr_training_navi_pane_g2

0x7b1b,	// (0x0001b1f9) hwr_training_navi_pane_g3_ParamLimits

0x7b1b,	// (0x0001b1f9) hwr_training_navi_pane_g3

0x7b2b,	// (0x0001b209) hwr_training_navi_pane_g4_ParamLimits

0x7b2b,	// (0x0001b209) hwr_training_navi_pane_g4

0x0004,

0xf8e4,	// (0x00022fc2) hwr_training_navi_pane_g_ParamLimits

0xf8e4,	// (0x00022fc2) hwr_training_navi_pane_g

0x7b45,	// (0x0001b223) hwr_training_navi_pane_t1

0xbdf9,	// (0x0001f4d7) list_single_hwr_training_instruct_pane_ParamLimits

0xbdf9,	// (0x0001f4d7) list_single_hwr_training_instruct_pane

0x4e9e,	// (0x0001857c) list_single_hwr_training_instruct_pane_t1

0x459a,	// (0x00017c78) bg_frame_shadow_pane_g1

0x4ead,	// (0x0001858b) bg_frame_shadow_pane_g2

0x4eb5,	// (0x00018593) bg_frame_shadow_pane_g3

0x4ebd,	// (0x0001859b) bg_frame_shadow_pane_g4

0x4ec5,	// (0x000185a3) bg_frame_shadow_pane_g5

0x4ecd,	// (0x000185ab) bg_frame_shadow_pane_g6

0x4ed5,	// (0x000185b3) bg_frame_shadow_pane_g7

0x1ef7,	// (0x000155d5) bg_frame_shadow_pane_g8

0x0007,

0xf8ef,	// (0x00022fcd) bg_frame_shadow_pane_g

0x1616,	// (0x00014cf4) main_video_tele_dialer_pane

0x7b53,	// (0x0001b231) aid_size_cell_video_keypad_ParamLimits

0x7b53,	// (0x0001b231) aid_size_cell_video_keypad

0x7b63,	// (0x0001b241) grid_video_dialer_keypad_pane_ParamLimits

0x7b63,	// (0x0001b241) grid_video_dialer_keypad_pane

0x7b93,	// (0x0001b271) video_down_pane_cp_ParamLimits

0x7b93,	// (0x0001b271) video_down_pane_cp

0x7b9f,	// (0x0001b27d) cell_video_dialer_keypad_pane_ParamLimits

0x7b9f,	// (0x0001b27d) cell_video_dialer_keypad_pane

0x4edd,	// (0x000185bb) bg_button_pane_cp08_ParamLimits

0x4edd,	// (0x000185bb) bg_button_pane_cp08

0xbe2d,	// (0x0001f50b) cell_video_dialer_keypad_pane_g1_ParamLimits

0xbe2d,	// (0x0001f50b) cell_video_dialer_keypad_pane_g1

0xb788,	// (0x0001ee66) mup3_rocker2_pane_ParamLimits

0xb788,	// (0x0001ee66) mup3_rocker2_pane

0x465a,	// (0x00017d38) mup3_rocker2_pane_g1

0xab31,	// (0x0001e20f) main_dialer2_pane

0x1616,	// (0x00014cf4) main_mp4_pane

0x7bbc,	// (0x0001b29a) main_mp4_pane_g1_ParamLimits

0x7bbc,	// (0x0001b29a) main_mp4_pane_g1

0x7bca,	// (0x0001b2a8) main_mp4_pane_g2_ParamLimits

0x7bca,	// (0x0001b2a8) main_mp4_pane_g2

0x7bd8,	// (0x0001b2b6) main_mp4_pane_g3_ParamLimits

0x7bd8,	// (0x0001b2b6) main_mp4_pane_g3

0x7c0d,	// (0x0001b2eb) main_mp4_pane_g4_ParamLimits

0x7c0d,	// (0x0001b2eb) main_mp4_pane_g4

0x7c3b,	// (0x0001b319) main_mp4_pane_g5_ParamLimits

0x7c3b,	// (0x0001b319) main_mp4_pane_g5

0x0005,

0xf90f,	// (0x00022fed) main_mp4_pane_g_ParamLimits

0xf90f,	// (0x00022fed) main_mp4_pane_g

0x7c97,	// (0x0001b375) main_mp4_pane_t1_ParamLimits

0x7c97,	// (0x0001b375) main_mp4_pane_t1

0x7cef,	// (0x0001b3cd) main_mp4_pane_t2_ParamLimits

0x7cef,	// (0x0001b3cd) main_mp4_pane_t2

0x5033,	// (0x00018711) main_mp4_pane_t3_ParamLimits

0x5033,	// (0x00018711) main_mp4_pane_t3

0x7d41,	// (0x0001b41f) main_mp4_pane_t4_ParamLimits

0x7d41,	// (0x0001b41f) main_mp4_pane_t4

0x0003,

0xf91c,	// (0x00022ffa) main_mp4_pane_t_ParamLimits

0xf91c,	// (0x00022ffa) main_mp4_pane_t

0x7d81,	// (0x0001b45f) mp4_progress_pane_ParamLimits

0x7d81,	// (0x0001b45f) mp4_progress_pane

0x7dc5,	// (0x0001b4a3) mp4_rocker_pane_ParamLimits

0x7dc5,	// (0x0001b4a3) mp4_rocker_pane

0x5103,	// (0x000187e1) mp4_progress_pane_t1

0x511a,	// (0x000187f8) mp4_progress_pane_t2

0x0001,

0xf925,	// (0x00023003) mp4_progress_pane_t

0x5131,	// (0x0001880f) mup_progress_pane_cp04

0x5acb,	// (0x000191a9) mp4_rocker_pane_g1

0x7de3,	// (0x0001b4c1) aid_cell_size_keypad2_ParamLimits

0x7de3,	// (0x0001b4c1) aid_cell_size_keypad2

0x7df3,	// (0x0001b4d1) dialer2_ne_pane_ParamLimits

0x7df3,	// (0x0001b4d1) dialer2_ne_pane

0x7dff,	// (0x0001b4dd) grid_dialer2_keypad_pane_ParamLimits

0x7dff,	// (0x0001b4dd) grid_dialer2_keypad_pane

0x554f,	// (0x00018c2d) bg_popup_call_pane_cp07_ParamLimits

0x554f,	// (0x00018c2d) bg_popup_call_pane_cp07

0xbe64,	// (0x0001f542) dialer2_ne_pane_t1_ParamLimits

0xbe64,	// (0x0001f542) dialer2_ne_pane_t1

0x7e0b,	// (0x0001b4e9) cell_dialer2_keypad_pane_ParamLimits

0x7e0b,	// (0x0001b4e9) cell_dialer2_keypad_pane

0x514f,	// (0x0001882d) bg_button_pane_pane_cp04_ParamLimits

0x514f,	// (0x0001882d) bg_button_pane_pane_cp04

0xbe89,	// (0x0001f567) cell_dialer2_keypad_pane_g1_ParamLimits

0xbe89,	// (0x0001f567) cell_dialer2_keypad_pane_g1

0x91fc,	// (0x0001c8da) aid_placing_vt_set_content_ParamLimits

0x91fc,	// (0x0001c8da) aid_placing_vt_set_content

0x9216,	// (0x0001c8f4) aid_placing_vt_set_title_ParamLimits

0x9216,	// (0x0001c8f4) aid_placing_vt_set_title

0x1616,	// (0x00014cf4) main_image3_pane

0x7e48,	// (0x0001b526) area_side_right_pane_cp01_ParamLimits

0x7e48,	// (0x0001b526) area_side_right_pane_cp01

0x7e75,	// (0x0001b553) main_image3_pane_g1_ParamLimits

0x7e75,	// (0x0001b553) main_image3_pane_g1

0x7e83,	// (0x0001b561) main_image3_pane_g2_ParamLimits

0x7e83,	// (0x0001b561) main_image3_pane_g2

0x7e9a,	// (0x0001b578) main_image3_pane_g3_ParamLimits

0x7e9a,	// (0x0001b578) main_image3_pane_g3

0x7eb1,	// (0x0001b58f) main_image3_pane_g4_ParamLimits

0x7eb1,	// (0x0001b58f) main_image3_pane_g4

0x0003,

0xf934,	// (0x00023012) main_image3_pane_g_ParamLimits

0xf934,	// (0x00023012) main_image3_pane_g

0x7ec8,	// (0x0001b5a6) main_image3_pane_t1_ParamLimits

0x7ec8,	// (0x0001b5a6) main_image3_pane_t1

0x7eed,	// (0x0001b5cb) main_image3_pane_t2_ParamLimits

0x7eed,	// (0x0001b5cb) main_image3_pane_t2

0x7f0c,	// (0x0001b5ea) main_image3_pane_t3_ParamLimits

0x7f0c,	// (0x0001b5ea) main_image3_pane_t3

0x0003,

0xf93d,	// (0x0002301b) main_image3_pane_t_ParamLimits

0xf93d,	// (0x0002301b) main_image3_pane_t

0x439c,	// (0x00017a7a) grid_sctrl_middle_pane_cp01_ParamLimits

0x439c,	// (0x00017a7a) grid_sctrl_middle_pane_cp01

0xbed5,	// (0x0001f5b3) cell_sctrl_middle_pane_cp01_ParamLimits

0xbed5,	// (0x0001f5b3) cell_sctrl_middle_pane_cp01

0xbee6,	// (0x0001f5c4) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0xbee6,	// (0x0001f5c4) cell_sctrl_middle_pane_cp01_g1

0x1616,	// (0x00014cf4) main_call4_pane

0xbef3,	// (0x0001f5d1) aid_size_button_call4_ParamLimits

0xbef3,	// (0x0001f5d1) aid_size_button_call4

0xbf1d,	// (0x0001f5fb) call4_windows_pane_ParamLimits

0xbf1d,	// (0x0001f5fb) call4_windows_pane

0xbf31,	// (0x0001f60f) grid_call4_button_pane_ParamLimits

0xbf31,	// (0x0001f60f) grid_call4_button_pane

0x51a5,	// (0x00018883) call4_windows_conf_pane

0xbf4b,	// (0x0001f629) popup_call4_audio_first_window_ParamLimits

0xbf4b,	// (0x0001f629) popup_call4_audio_first_window

0xbf6b,	// (0x0001f649) popup_call4_audio_second_window_ParamLimits

0xbf6b,	// (0x0001f649) popup_call4_audio_second_window

0x51d8,	// (0x000188b6) popup_call4_audio_wait_window_ParamLimits

0x51d8,	// (0x000188b6) popup_call4_audio_wait_window

0xbf7d,	// (0x0001f65b) cell_call4_button_pane_ParamLimits

0xbf7d,	// (0x0001f65b) cell_call4_button_pane

0x1e97,	// (0x00015575) bg_button_pane_cp09_ParamLimits

0x1e97,	// (0x00015575) bg_button_pane_cp09

0xbfa0,	// (0x0001f67e) cell_call4_button_pane_g1_ParamLimits

0xbfa0,	// (0x0001f67e) cell_call4_button_pane_g1

0xbfad,	// (0x0001f68b) cell_call4_button_pane_t1_ParamLimits

0xbfad,	// (0x0001f68b) cell_call4_button_pane_t1

0x521e,	// (0x000188fc) popup_call4_audio_conf_window_ParamLimits

0x521e,	// (0x000188fc) popup_call4_audio_conf_window

0xb7b9,	// (0x0001ee97) mup3_progress_pane_t1_ParamLimits

0xb7cf,	// (0x0001eead) mup3_progress_pane_t2_ParamLimits

0x4978,	// (0x00018056) mup3_progress_pane_t3_ParamLimits

0xf816,	// (0x00022ef4) mup3_progress_pane_t_ParamLimits

0x498f,	// (0x0001806d) mup_progress_pane_cp03_ParamLimits

0xbc69,	// (0x0001f347) mup3_control_keys_pane_g4_copy1

0x7daf,	// (0x0001b48d) mp4_rocker2_pane_ParamLimits

0x7daf,	// (0x0001b48d) mp4_rocker2_pane

0x523a,	// (0x00018918) mp4_rocker2_pane_g1

0x5232,	// (0x00018910) mp4_rocker2_pane_g2

0x7f67,	// (0x0001b645) mp4_rocker2_pane_g3

0x7f6f,	// (0x0001b64d) mp4_rocker2_pane_g4

0x7f77,	// (0x0001b655) mp4_rocker2_pane_g5

0x0004,

0xf946,	// (0x00023024) mp4_rocker2_pane_g

0x1616,	// (0x00014cf4) main_camera4_pane

0x1616,	// (0x00014cf4) main_video4_pane

0x7b6f,	// (0x0001b24d) main_video_tele_dialer_pane_t1_ParamLimits

0x7b6f,	// (0x0001b24d) main_video_tele_dialer_pane_t1

0x7b81,	// (0x0001b25f) main_video_tele_dialer_pane_t2_ParamLimits

0x7b81,	// (0x0001b25f) main_video_tele_dialer_pane_t2

0x0001,

0xf900,	// (0x00022fde) main_video_tele_dialer_pane_t_ParamLimits

0xf900,	// (0x00022fde) main_video_tele_dialer_pane_t

0x7f95,	// (0x0001b673) cam4_autofocus_pane_ParamLimits

0x7f95,	// (0x0001b673) cam4_autofocus_pane

0x7fa1,	// (0x0001b67f) cam4_image_uncrop_pane_ParamLimits

0x7fa1,	// (0x0001b67f) cam4_image_uncrop_pane

0x7fb6,	// (0x0001b694) cam4_indicators_pane_ParamLimits

0x7fb6,	// (0x0001b694) cam4_indicators_pane

0x7fd0,	// (0x0001b6ae) main_camera4_pane_g1_ParamLimits

0x7fd0,	// (0x0001b6ae) main_camera4_pane_g1

0x7fdc,	// (0x0001b6ba) main_camera4_pane_g2_ParamLimits

0x7fdc,	// (0x0001b6ba) main_camera4_pane_g2

0x7fe8,	// (0x0001b6c6) main_camera4_pane_g3_ParamLimits

0x7fe8,	// (0x0001b6c6) main_camera4_pane_g3

0x7ff4,	// (0x0001b6d2) main_camera4_pane_g4_ParamLimits

0x7ff4,	// (0x0001b6d2) main_camera4_pane_g4

0x8000,	// (0x0001b6de) main_camera4_pane_g5_ParamLimits

0x8000,	// (0x0001b6de) main_camera4_pane_g5

0x0005,

0xf951,	// (0x0002302f) main_camera4_pane_g_ParamLimits

0xf951,	// (0x0002302f) main_camera4_pane_g

0x801a,	// (0x0001b6f8) main_camera4_pane_t1_ParamLimits

0x801a,	// (0x0001b6f8) main_camera4_pane_t1

0x803e,	// (0x0001b71c) bg_tb_trans_pane_cp06

0x8054,	// (0x0001b732) cam4_indicators_pane_g1

0x8064,	// (0x0001b742) cam4_indicators_pane_g2

0x0002,

0xf963,	// (0x00023041) cam4_indicators_pane_g

0x8084,	// (0x0001b762) cam4_indicators_pane_t1

0x80ac,	// (0x0001b78a) main_video4_pane_g1_ParamLimits

0x80ac,	// (0x0001b78a) main_video4_pane_g1

0x80b8,	// (0x0001b796) main_video4_pane_g2_ParamLimits

0x80b8,	// (0x0001b796) main_video4_pane_g2

0x80b8,	// (0x0001b796) main_video4_pane_g3_ParamLimits

0x80b8,	// (0x0001b796) main_video4_pane_g3

0x80c4,	// (0x0001b7a2) main_video4_pane_g4_ParamLimits

0x80c4,	// (0x0001b7a2) main_video4_pane_g4

0x0004,

0xf96a,	// (0x00023048) main_video4_pane_g_ParamLimits

0xf96a,	// (0x00023048) main_video4_pane_g

0x80e4,	// (0x0001b7c2) vid4_indicators_pane_ParamLimits

0x80e4,	// (0x0001b7c2) vid4_indicators_pane

0x8102,	// (0x0001b7e0) video4_image_uncrop_cif_pane_ParamLimits

0x8102,	// (0x0001b7e0) video4_image_uncrop_cif_pane

0x810f,	// (0x0001b7ed) video4_image_uncrop_nhd_pane_ParamLimits

0x810f,	// (0x0001b7ed) video4_image_uncrop_nhd_pane

0x7fa1,	// (0x0001b67f) video4_image_uncrop_vga_pane_ParamLimits

0x7fa1,	// (0x0001b67f) video4_image_uncrop_vga_pane

0x811c,	// (0x0001b7fa) bg_tb_trans_pane_cp07

0x8054,	// (0x0001b732) vid4_indicators_pane_g1

0x812a,	// (0x0001b808) vid4_indicators_pane_g2

0x813a,	// (0x0001b818) vid4_indicators_pane_g3

0x0004,

0xf975,	// (0x00023053) vid4_indicators_pane_g

0x8167,	// (0x0001b845) vid4_indicators_pane_t1

0xbfbf,	// (0x0001f69d) cam4_autofocus_pane_g1

0xbfc7,	// (0x0001f6a5) cam4_autofocus_pane_g2

0xbfcf,	// (0x0001f6ad) cam4_autofocus_pane_g3

0x0002,

0xf980,	// (0x0002305e) cam4_autofocus_pane_g

0xbfd7,	// (0x0001f6b5) cam4_autofocus_pane_g3_copy1

0xbe11,	// (0x0001f4ef) video_down_pane_cp_t1

0xbe1f,	// (0x0001f4fd) video_down_pane_cp_t2

0x0001,

0xf905,	// (0x00022fe3) video_down_pane_cp_t

0x439c,	// (0x00017a7a) popup_vitu2_window_ParamLimits

0x439c,	// (0x00017a7a) popup_vitu2_window

0x8181,	// (0x0001b85f) aid_size_cell2_itu2_ParamLimits

0x8181,	// (0x0001b85f) aid_size_cell2_itu2

0x81a3,	// (0x0001b881) aid_size_cell_itu2_ParamLimits

0x81a3,	// (0x0001b881) aid_size_cell_itu2

0x81e1,	// (0x0001b8bf) bg_popup_window_pane_cp09_ParamLimits

0x81e1,	// (0x0001b8bf) bg_popup_window_pane_cp09

0x81ef,	// (0x0001b8cd) field_vitu2_entry_pane_ParamLimits

0x81ef,	// (0x0001b8cd) field_vitu2_entry_pane

0x8205,	// (0x0001b8e3) grid_vitu2_function_pane_ParamLimits

0x8205,	// (0x0001b8e3) grid_vitu2_function_pane

0x8237,	// (0x0001b915) grid_vitu2_itu_pane_ParamLimits

0x8237,	// (0x0001b915) grid_vitu2_itu_pane

0x828d,	// (0x0001b96b) cell_vitu2_itu_pane_ParamLimits

0x828d,	// (0x0001b96b) cell_vitu2_itu_pane

0x82a2,	// (0x0001b980) cell_vitu2_function_pane_ParamLimits

0x82a2,	// (0x0001b980) cell_vitu2_function_pane

0x527a,	// (0x00018958) bg_popup_call_pane_cp08_ParamLimits

0x527a,	// (0x00018958) bg_popup_call_pane_cp08

0x5293,	// (0x00018971) field_vitu2_entry_pane_g1

0x529f,	// (0x0001897d) field_vitu2_entry_pane_g2

0x0002,

0xf987,	// (0x00023065) field_vitu2_entry_pane_g

0xbfdf,	// (0x0001f6bd) field_vitu2_entry_pane_t1_ParamLimits

0xbfdf,	// (0x0001f6bd) field_vitu2_entry_pane_t1

0x52b9,	// (0x00018997) field_vitu2_entry_pane_t2_ParamLimits

0x52b9,	// (0x00018997) field_vitu2_entry_pane_t2

0x0001,

0xf98e,	// (0x0002306c) field_vitu2_entry_pane_t_ParamLimits

0xf98e,	// (0x0002306c) field_vitu2_entry_pane_t

0x82e1,	// (0x0001b9bf) bg_button_pane_cp010_ParamLimits

0x82e1,	// (0x0001b9bf) bg_button_pane_cp010

0x82ef,	// (0x0001b9cd) cell_vitu2_itu_pane_g1

0x830d,	// (0x0001b9eb) cell_vitu2_itu_pane_t1_ParamLimits

0x830d,	// (0x0001b9eb) cell_vitu2_itu_pane_t1

0x835f,	// (0x0001ba3d) cell_vitu2_itu_pane_t2_ParamLimits

0x835f,	// (0x0001ba3d) cell_vitu2_itu_pane_t2

0x0002,

0xf998,	// (0x00023076) cell_vitu2_itu_pane_t_ParamLimits

0xf998,	// (0x00023076) cell_vitu2_itu_pane_t

0x811c,	// (0x0001b7fa) bg_button_pane_cp011

0x841a,	// (0x0001baf8) cell_vitu2_function_pane_g1

0x1616,	// (0x00014cf4) main_myfav_hc_pane

0x7f4c,	// (0x0001b62a) popup_image3_note_pane_ParamLimits

0x7f4c,	// (0x0001b62a) popup_image3_note_pane

0x7f58,	// (0x0001b636) popup_image3_tool_bar_pane_ParamLimits

0x7f58,	// (0x0001b636) popup_image3_tool_bar_pane

0x83cd,	// (0x0001baab) cell_vitu2_itu_pane_t3_ParamLimits

0x83cd,	// (0x0001baab) cell_vitu2_itu_pane_t3

0x1616,	// (0x00014cf4) bg_popup_trans_pane

0x52de,	// (0x000189bc) grid_image3_tool_bar_pane

0x52e8,	// (0x000189c6) bg_popup_trans_pane_g1

0x23a2,	// (0x00015a80) bg_popup_trans_pane_g2

0x52f0,	// (0x000189ce) bg_popup_trans_pane_g3

0x52f8,	// (0x000189d6) bg_popup_trans_pane_g4

0x5300,	// (0x000189de) bg_popup_trans_pane_g5

0x5308,	// (0x000189e6) bg_popup_trans_pane_g6

0x5310,	// (0x000189ee) bg_popup_trans_pane_g7

0x5318,	// (0x000189f6) bg_popup_trans_pane_g8

0x2382,	// (0x00015a60) bg_popup_trans_pane_g9

0x0008,

0xf99f,	// (0x0002307d) bg_popup_trans_pane_g

0x43aa,	// (0x00017a88) cell_image3_tool_bar_pane_ParamLimits

0x43aa,	// (0x00017a88) cell_image3_tool_bar_pane

0x465a,	// (0x00017d38) cell_image3_tool_bar_pane_g1

0x1616,	// (0x00014cf4) bg_popup_trans_pane_cp1

0x5320,	// (0x000189fe) popup_image3_note_pane_t1

0x532e,	// (0x00018a0c) popup_image3_note_pane_t2

0x533c,	// (0x00018a1a) popup_image3_note_pane_t3

0x0002,

0xf9b2,	// (0x00023090) popup_image3_note_pane_t

0x534a,	// (0x00018a28) popup_image3_note_pane_t3_copy1

0xbffa,	// (0x0001f6d8) bg_myfav_hc_instruction_pane_ParamLimits

0xbffa,	// (0x0001f6d8) bg_myfav_hc_instruction_pane

0xc00c,	// (0x0001f6ea) cell_myfav_contact_pane_ParamLimits

0xc00c,	// (0x0001f6ea) cell_myfav_contact_pane

0xc026,	// (0x0001f704) cell_myfav_contact_pane_cp1_ParamLimits

0xc026,	// (0x0001f704) cell_myfav_contact_pane_cp1

0xc03c,	// (0x0001f71a) cell_myfav_contact_pane_cp2_ParamLimits

0xc03c,	// (0x0001f71a) cell_myfav_contact_pane_cp2

0xc052,	// (0x0001f730) cell_myfav_contact_pane_cp3_ParamLimits

0xc052,	// (0x0001f730) cell_myfav_contact_pane_cp3

0xc067,	// (0x0001f745) cell_myfav_contact_pane_cp4_ParamLimits

0xc067,	// (0x0001f745) cell_myfav_contact_pane_cp4

0xc07b,	// (0x0001f759) cell_myfav_contact_pane_cp5_ParamLimits

0xc07b,	// (0x0001f759) cell_myfav_contact_pane_cp5

0xc08f,	// (0x0001f76d) cell_myfav_contact_pane_cp6_ParamLimits

0xc08f,	// (0x0001f76d) cell_myfav_contact_pane_cp6

0xc0a3,	// (0x0001f781) cell_myfav_contact_pane_cp7_ParamLimits

0xc0a3,	// (0x0001f781) cell_myfav_contact_pane_cp7

0x5358,	// (0x00018a36) listscroll_gen_pane_cp05

0xc0bb,	// (0x0001f799) main_myfav_hc_pane_g1_ParamLimits

0xc0bb,	// (0x0001f799) main_myfav_hc_pane_g1

0xc0d1,	// (0x0001f7af) main_myfav_hc_pane_g2_ParamLimits

0xc0d1,	// (0x0001f7af) main_myfav_hc_pane_g2

0x0002,

0xf9b9,	// (0x00023097) main_myfav_hc_pane_g_ParamLimits

0xf9b9,	// (0x00023097) main_myfav_hc_pane_g

0xc0fb,	// (0x0001f7d9) main_myfav_hc_pane_t1_ParamLimits

0xc0fb,	// (0x0001f7d9) main_myfav_hc_pane_t1

0x5361,	// (0x00018a3f) main_myfav_hc_pane_t2_ParamLimits

0x5361,	// (0x00018a3f) main_myfav_hc_pane_t2

0x5373,	// (0x00018a51) main_myfav_hc_pane_t3_ParamLimits

0x5373,	// (0x00018a51) main_myfav_hc_pane_t3

0xc110,	// (0x0001f7ee) main_myfav_hc_pane_t4_ParamLimits

0xc110,	// (0x0001f7ee) main_myfav_hc_pane_t4

0x0004,

0xf9c0,	// (0x0002309e) main_myfav_hc_pane_t_ParamLimits

0xf9c0,	// (0x0002309e) main_myfav_hc_pane_t

0x465a,	// (0x00017d38) bg_myfav_hc_instruction_pane_g1

0x5385,	// (0x00018a63) cell_myfav_contact_pane_g1_ParamLimits

0x5385,	// (0x00018a63) cell_myfav_contact_pane_g1

0x5385,	// (0x00018a63) cell_myfav_contact_pane_g2_ParamLimits

0x5385,	// (0x00018a63) cell_myfav_contact_pane_g2

0x5391,	// (0x00018a6f) cell_myfav_contact_pane_g3_ParamLimits

0x5391,	// (0x00018a6f) cell_myfav_contact_pane_g3

0x4962,	// (0x00018040) cell_myfav_contact_pane_g4_ParamLimits

0x4962,	// (0x00018040) cell_myfav_contact_pane_g4

0x539e,	// (0x00018a7c) cell_myfav_contact_pane_g5_ParamLimits

0x539e,	// (0x00018a7c) cell_myfav_contact_pane_g5

0x0004,

0xf9cb,	// (0x000230a9) cell_myfav_contact_pane_g_ParamLimits

0xf9cb,	// (0x000230a9) cell_myfav_contact_pane_g

0xc0e7,	// (0x0001f7c5) main_myfav_hc_pane_g3_ParamLimits

0xc0e7,	// (0x0001f7c5) main_myfav_hc_pane_g3

0x884b,	// (0x0001bf29) popup_adpt_find_window

0xc134,	// (0x0001f812) afind_page_pane_ParamLimits

0xc134,	// (0x0001f812) afind_page_pane

0xc141,	// (0x0001f81f) aid_size_cell_afind_ParamLimits

0xc141,	// (0x0001f81f) aid_size_cell_afind

0xc15b,	// (0x0001f839) bg_popup_sub_pane_cp09_ParamLimits

0xc15b,	// (0x0001f839) bg_popup_sub_pane_cp09

0xc168,	// (0x0001f846) find_pane_cp01_ParamLimits

0xc168,	// (0x0001f846) find_pane_cp01

0x53aa,	// (0x00018a88) grid_afind_control_pane_ParamLimits

0x53aa,	// (0x00018a88) grid_afind_control_pane

0xc175,	// (0x0001f853) grid_afind_pane_ParamLimits

0xc175,	// (0x0001f853) grid_afind_pane

0xc18b,	// (0x0001f869) cell_afind_pane_ParamLimits

0xc18b,	// (0x0001f869) cell_afind_pane

0x465a,	// (0x00017d38) afind_page_pane_g1

0xc1c1,	// (0x0001f89f) afind_page_pane_g2

0xc1ca,	// (0x0001f8a8) afind_page_pane_g3

0x0002,

0xf9d6,	// (0x000230b4) afind_page_pane_g

0xc1d3,	// (0x0001f8b1) afind_page_pane_t1

0x53be,	// (0x00018a9c) cell_afind_grid_control_pane_ParamLimits

0x53be,	// (0x00018a9c) cell_afind_grid_control_pane

0x514f,	// (0x0001882d) bg_button_pane_cp69_ParamLimits

0x514f,	// (0x0001882d) bg_button_pane_cp69

0xc1f3,	// (0x0001f8d1) cell_afind_pane_g1_ParamLimits

0xc1f3,	// (0x0001f8d1) cell_afind_pane_g1

0xc200,	// (0x0001f8de) cell_afind_pane_t1_ParamLimits

0xc200,	// (0x0001f8de) cell_afind_pane_t1

0x20e6,	// (0x000157c4) bg_button_pane_cp72

0x53cd,	// (0x00018aab) cell_afind_grid_control_pane_g1

0xa769,	// (0x0001de47) aid_image_placing_area_ParamLimits

0xa769,	// (0x0001de47) aid_image_placing_area

0x4bee,	// (0x000182cc) field_vitu_entry_pane_g1_ParamLimits

0x4bee,	// (0x000182cc) field_vitu_entry_pane_g1

0x4bfa,	// (0x000182d8) field_vitu_entry_pane_g2_ParamLimits

0x4bfa,	// (0x000182d8) field_vitu_entry_pane_g2

0x0001,

0xf890,	// (0x00022f6e) field_vitu_entry_pane_g_ParamLimits

0xf890,	// (0x00022f6e) field_vitu_entry_pane_g

0xbce4,	// (0x0001f3c2) cell_vitu_itu_pane_g1_ParamLimits

0xbd26,	// (0x0001f404) cell_vitu_itu_pane_t3_ParamLimits

0xbd26,	// (0x0001f404) cell_vitu_itu_pane_t3

0x5103,	// (0x000187e1) mp4_progress_pane_t1_ParamLimits

0x511a,	// (0x000187f8) mp4_progress_pane_t2_ParamLimits

0xf925,	// (0x00023003) mp4_progress_pane_t_ParamLimits

0x5131,	// (0x0001880f) mup_progress_pane_cp04_ParamLimits

0xc122,	// (0x0001f800) main_myfav_hc_pane_t5_ParamLimits

0xc122,	// (0x0001f800) main_myfav_hc_pane_t5

0x1638,	// (0x00014d16) aid_zoom_text_primary

0x884b,	// (0x0001bf29) popup_adpt_find_window_ParamLimits

0x1669,	// (0x00014d47) main_cam_set_pane

0x7fc4,	// (0x0001b6a2) cam4_zoom_pane_ParamLimits

0x7fc4,	// (0x0001b6a2) cam4_zoom_pane

0xc212,	// (0x0001f8f0) main_cam_set_pane_g1_ParamLimits

0xc212,	// (0x0001f8f0) main_cam_set_pane_g1

0xc220,	// (0x0001f8fe) main_cam_set_pane_g2_ParamLimits

0xc220,	// (0x0001f8fe) main_cam_set_pane_g2

0x0001,

0xf9dd,	// (0x000230bb) main_cam_set_pane_g_ParamLimits

0xf9dd,	// (0x000230bb) main_cam_set_pane_g

0xc22c,	// (0x0001f90a) main_cam_set_pane_t1_ParamLimits

0xc22c,	// (0x0001f90a) main_cam_set_pane_t1

0xc23e,	// (0x0001f91c) main_cset_listscroll_pane_ParamLimits

0xc23e,	// (0x0001f91c) main_cset_listscroll_pane

0xc267,	// (0x0001f945) main_cset_slider_pane_ParamLimits

0xc267,	// (0x0001f945) main_cset_slider_pane

0x53de,	// (0x00018abc) main_cset_list_pane_ParamLimits

0x53de,	// (0x00018abc) main_cset_list_pane

0x53ee,	// (0x00018acc) scroll_pane_cp028

0xc286,	// (0x0001f964) aid_area_touch_slider

0xc2a2,	// (0x0001f980) cset_slider_pane

0xc2cc,	// (0x0001f9aa) main_cset_slider_pane_g1

0xc2e1,	// (0x0001f9bf) main_cset_slider_pane_g2

0x0011,

0xf9e2,	// (0x000230c0) main_cset_slider_pane_g

0x5427,	// (0x00018b05) main_cset_slider_pane_t1

0xc39d,	// (0x0001fa7b) main_cset_slider_pane_t2

0xc3b7,	// (0x0001fa95) main_cset_slider_pane_t3

0xc3d1,	// (0x0001faaf) main_cset_slider_pane_t4

0xc3eb,	// (0x0001fac9) main_cset_slider_pane_t5

0xc405,	// (0x0001fae3) main_cset_slider_pane_t6

0xc41a,	// (0x0001faf8) main_cset_slider_pane_t7

0x000e,

0xfa07,	// (0x000230e5) main_cset_slider_pane_t

0xc51e,	// (0x0001fbfc) cset_list_set_pane_ParamLimits

0xc51e,	// (0x0001fbfc) cset_list_set_pane

0xc52e,	// (0x0001fc0c) aid_position_infowindow_above

0xc536,	// (0x0001fc14) aid_position_infowindow_below

0xc53e,	// (0x0001fc1c) cset_list_set_pane_g1_ParamLimits

0xc53e,	// (0x0001fc1c) cset_list_set_pane_g1

0x54c7,	// (0x00018ba5) cset_list_set_pane_g3_ParamLimits

0x54c7,	// (0x00018ba5) cset_list_set_pane_g3

0x0001,

0xfa26,	// (0x00023104) cset_list_set_pane_g_ParamLimits

0xfa26,	// (0x00023104) cset_list_set_pane_g

0x54d6,	// (0x00018bb4) cset_list_set_pane_t1_ParamLimits

0x54d6,	// (0x00018bb4) cset_list_set_pane_t1

0x1669,	// (0x00014d47) list_highlight_pane_cp021_ParamLimits

0x1669,	// (0x00014d47) list_highlight_pane_cp021

0x2d97,	// (0x00016475) cset_slider_pane_g1

0x2da9,	// (0x00016487) cset_slider_pane_g2

0x2da0,	// (0x0001647e) cset_slider_pane_g3

0x0002,

0xfa2b,	// (0x00023109) cset_slider_pane_g

0x842e,	// (0x0001bb0c) aid_area_touch_cam4_zoom

0x8436,	// (0x0001bb14) cam4_zoom_cont_pane

0x843e,	// (0x0001bb1c) cam4_zoom_pane_g1

0x8446,	// (0x0001bb24) cam4_zoom_pane_g2

0x844e,	// (0x0001bb2c) cam4_zoom_pane_g3

0x0002,

0xfa32,	// (0x00023110) cam4_zoom_pane_g

0x8456,	// (0x0001bb34) cam4_zoom_cont_pane_g1

0x845f,	// (0x0001bb3d) cam4_zoom_cont_pane_g2

0x8468,	// (0x0001bb46) cam4_zoom_cont_pane_g3

0x0002,

0xfa39,	// (0x00023117) cam4_zoom_cont_pane_g

0xbf0d,	// (0x0001f5eb) call4_image_pane_ParamLimits

0xbf0d,	// (0x0001f5eb) call4_image_pane

0x51a5,	// (0x00018883) call4_windows_conf_pane_ParamLimits

0x51b8,	// (0x00018896) popup_call4_audio_in_window_ParamLimits

0x51b8,	// (0x00018896) popup_call4_audio_in_window

0x1616,	// (0x00014cf4) bg_popup_call2_act_pane_cp02

0x5216,	// (0x000188f4) call4_list_conf_pane

0x465a,	// (0x00017d38) call4_image_pane_g1

0x465a,	// (0x00017d38) call4_image_pane_g2

0x0001,

0xf756,	// (0x00022e34) call4_image_pane_g

0x5526,	// (0x00018c04) list_single_graphic_popup_conf4_pane_ParamLimits

0x5526,	// (0x00018c04) list_single_graphic_popup_conf4_pane

0x1616,	// (0x00014cf4) list_highlight_pane_cp022

0x5539,	// (0x00018c17) list_single_graphic_popup_conf4_pane_g1

0x29dc,	// (0x000160ba) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xfa40,	// (0x0002311e) list_single_graphic_popup_conf4_pane_g

0x5541,	// (0x00018c1f) list_single_graphic_popup_conf4_pane_t1

0x92f4,	// (0x0001c9d2) popup_vtel_slider_window_ParamLimits

0x92f4,	// (0x0001c9d2) popup_vtel_slider_window

0x513d,	// (0x0001881b) dialer2_ne_pane_t2_ParamLimits

0x513d,	// (0x0001881b) dialer2_ne_pane_t2

0x0001,

0xf92a,	// (0x00023008) dialer2_ne_pane_t_ParamLimits

0xf92a,	// (0x00023008) dialer2_ne_pane_t

0x1669,	// (0x00014d47) bg_popup_sub_pane_cp010_ParamLimits

0x1669,	// (0x00014d47) bg_popup_sub_pane_cp010

0xc54a,	// (0x0001fc28) popup_vtel_slider_window_g1_ParamLimits

0xc54a,	// (0x0001fc28) popup_vtel_slider_window_g1

0xc556,	// (0x0001fc34) popup_vtel_slider_window_g2_ParamLimits

0xc556,	// (0x0001fc34) popup_vtel_slider_window_g2

0x0003,

0xfa45,	// (0x00023123) popup_vtel_slider_window_g_ParamLimits

0xfa45,	// (0x00023123) popup_vtel_slider_window_g

0xc59c,	// (0x0001fc7a) vtel_slider_pane_ParamLimits

0xc59c,	// (0x0001fc7a) vtel_slider_pane

0xc5ab,	// (0x0001fc89) vtel_slider_pane_g1_ParamLimits

0xc5ab,	// (0x0001fc89) vtel_slider_pane_g1

0xc5b8,	// (0x0001fc96) vtel_slider_pane_g2_ParamLimits

0xc5b8,	// (0x0001fc96) vtel_slider_pane_g2

0xc5c5,	// (0x0001fca3) vtel_slider_pane_g3_ParamLimits

0xc5c5,	// (0x0001fca3) vtel_slider_pane_g3

0xc5ab,	// (0x0001fc89) vtel_slider_pane_g4_ParamLimits

0xc5ab,	// (0x0001fc89) vtel_slider_pane_g4

0xc5d2,	// (0x0001fcb0) vtel_slider_pane_g5_ParamLimits

0xc5d2,	// (0x0001fcb0) vtel_slider_pane_g5

0x0004,

0xfa4e,	// (0x0002312c) vtel_slider_pane_g_ParamLimits

0xfa4e,	// (0x0002312c) vtel_slider_pane_g

0x1616,	// (0x00014cf4) main_gallery2_pane

0x81c9,	// (0x0001b8a7) aid_size_row_itut2_dropdow_list_ParamLimits

0x81c9,	// (0x0001b8a7) aid_size_row_itut2_dropdow_list

0x821d,	// (0x0001b8fb) grid_vitu2_function_top_pane_ParamLimits

0x821d,	// (0x0001b8fb) grid_vitu2_function_top_pane

0x8257,	// (0x0001b935) popup_vitu2_dropdown_list_window_ParamLimits

0x8257,	// (0x0001b935) popup_vitu2_dropdown_list_window

0x8271,	// (0x0001b94f) popup_vitu2_match_list_window

0x8471,	// (0x0001bb4f) cell_vitu2_function_top_pane_ParamLimits

0x8471,	// (0x0001bb4f) cell_vitu2_function_top_pane

0x8491,	// (0x0001bb6f) cell_vitu2_function_top_pane_cp01_ParamLimits

0x8491,	// (0x0001bb6f) cell_vitu2_function_top_pane_cp01

0x84b1,	// (0x0001bb8f) cell_vitu2_function_top_wide_pane_ParamLimits

0x84b1,	// (0x0001bb8f) cell_vitu2_function_top_wide_pane

0x811c,	// (0x0001b7fa) bg_button_pane_cp012

0x84cf,	// (0x0001bbad) cell_vitu2_function_top_pane_g1

0x84de,	// (0x0001bbbc) bg_button_pane_cp013_ParamLimits

0x84de,	// (0x0001bbbc) bg_button_pane_cp013

0xc5df,	// (0x0001fcbd) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xc5df,	// (0x0001fcbd) cell_vitu2_function_top_wide_pane_g1

0x84fa,	// (0x0001bbd8) bg_popup_sub_pane_cp20

0x8508,	// (0x0001bbe6) list_vitu2_match_list_pane

0x52e8,	// (0x000189c6) bg_popup_sub_pane_cp20_g1

0x52f0,	// (0x000189ce) bg_popup_sub_pane_cp20_g2

0x23a2,	// (0x00015a80) bg_popup_sub_pane_cp20_g3

0x52f8,	// (0x000189d6) bg_popup_sub_pane_cp20_g4

0x2382,	// (0x00015a60) bg_popup_sub_pane_cp20_g5

0x55ab,	// (0x00018c89) bg_popup_sub_pane_cp20_g6

0x5308,	// (0x000189e6) bg_popup_sub_pane_cp20_g7

0x5310,	// (0x000189ee) bg_popup_sub_pane_cp20_g8

0x5318,	// (0x000189f6) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa59,	// (0x00023137) bg_popup_sub_pane_cp20_g

0x8520,	// (0x0001bbfe) list_vitu2_match_list_item_pane_ParamLimits

0x8520,	// (0x0001bbfe) list_vitu2_match_list_item_pane

0x8532,	// (0x0001bc10) list_vitu2_match_list_item_pane_t1

0x7371,	// (0x0001aa4f) bg_popup_sub_pane_cp21

0x8540,	// (0x0001bc1e) grid_vitu2_dropdown_list_pane

0x8548,	// (0x0001bc26) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x8548,	// (0x0001bc26) cell_vitu2_dropdown_list_char_pane

0x8569,	// (0x0001bc47) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x8569,	// (0x0001bc47) cell_vitu2_dropdown_list_ctrl_pane

0x55e5,	// (0x00018cc3) cell_vitu2_dropdown_list_char_pane_g1

0x55dc,	// (0x00018cba) cell_vitu2_dropdown_list_char_pane_g2

0x55d3,	// (0x00018cb1) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa76,	// (0x00023154) cell_vitu2_dropdown_list_char_pane_g

0x8595,	// (0x0001bc73) cell_vitu2_dropdown_list_char_pane_t1

0xc623,	// (0x0001fd01) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xc623,	// (0x0001fd01) cell_vitu2_dropdown_list_ctrl_pane_g1

0xc633,	// (0x0001fd11) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xc633,	// (0x0001fd11) cell_vitu2_dropdown_list_ctrl_pane_g2

0xc644,	// (0x0001fd22) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xc644,	// (0x0001fd22) cell_vitu2_dropdown_list_ctrl_pane_g3

0x85a3,	// (0x0001bc81) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x85a3,	// (0x0001bc81) cell_vitu2_dropdown_list_ctrl_pane_g4

0x803e,	// (0x0001b71c) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x803e,	// (0x0001b71c) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa7d,	// (0x0002315b) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa7d,	// (0x0002315b) cell_vitu2_dropdown_list_ctrl_pane_g

0xc654,	// (0x0001fd32) aid_size_cell_gallery2_ParamLimits

0xc654,	// (0x0001fd32) aid_size_cell_gallery2

0xc662,	// (0x0001fd40) grid_gallery2_pane_ParamLimits

0xc662,	// (0x0001fd40) grid_gallery2_pane

0xc66f,	// (0x0001fd4d) scroll_pane_cp029_ParamLimits

0xc66f,	// (0x0001fd4d) scroll_pane_cp029

0xc67b,	// (0x0001fd59) cell_gallery2_pane_ParamLimits

0xc67b,	// (0x0001fd59) cell_gallery2_pane

0x55ee,	// (0x00018ccc) cell_gallery2_pane_g2

0xc6a7,	// (0x0001fd85) cell_gallery2_pane_g3

0x55f8,	// (0x00018cd6) cell_gallery2_pane_g4

0x5600,	// (0x00018cde) cell_gallery2_pane_g5

0x2c41,	// (0x0001631f) grid_highlight_pane_cp10

0x8271,	// (0x0001b94f) popup_vitu2_match_list_window_ParamLimits

0x8281,	// (0x0001b95f) popup_vitu2_query_window_ParamLimits

0x8281,	// (0x0001b95f) popup_vitu2_query_window

0x7371,	// (0x0001aa4f) bg_vitu2_candi_button_pane

0x55e5,	// (0x00018cc3) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x55dc,	// (0x00018cba) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x55d3,	// (0x00018cb1) cell_vitu2_dropdown_list_char_pane_g2_copy2

0xc6af,	// (0x0001fd8d) bg_button_pane_cp015

0xc6b7,	// (0x0001fd95) bg_button_pane_cp016

0xc6c1,	// (0x0001fd9f) bg_button_pane_cp017

0x1669,	// (0x00014d47) bg_popup_sub_pane_cp22

0x5608,	// (0x00018ce6) popup_vitu2_query_window_g1

0xc6e9,	// (0x0001fdc7) popup_vitu2_query_window_g2

0x0001,

0xfa88,	// (0x00023166) popup_vitu2_query_window_g

0xc6f5,	// (0x0001fdd3) popup_vitu2_query_window_t1_ParamLimits

0xc6f5,	// (0x0001fdd3) popup_vitu2_query_window_t1

0xc71d,	// (0x0001fdfb) popup_vitu2_query_window_t2_ParamLimits

0xc71d,	// (0x0001fdfb) popup_vitu2_query_window_t2

0xc72f,	// (0x0001fe0d) popup_vitu2_query_window_t3_ParamLimits

0xc72f,	// (0x0001fe0d) popup_vitu2_query_window_t3

0xc757,	// (0x0001fe35) popup_vitu2_query_window_t4_ParamLimits

0xc757,	// (0x0001fe35) popup_vitu2_query_window_t4

0xc769,	// (0x0001fe47) popup_vitu2_query_window_t5_ParamLimits

0xc769,	// (0x0001fe47) popup_vitu2_query_window_t5

0x0004,

0xfa8d,	// (0x0002316b) popup_vitu2_query_window_t_ParamLimits

0xfa8d,	// (0x0002316b) popup_vitu2_query_window_t

0x53d6,	// (0x00018ab4) main_cset_text_pane

0xc286,	// (0x0001f964) aid_area_touch_slider_ParamLimits

0xc2a2,	// (0x0001f980) cset_slider_pane_ParamLimits

0xc2cc,	// (0x0001f9aa) main_cset_slider_pane_g1_ParamLimits

0xc2e1,	// (0x0001f9bf) main_cset_slider_pane_g2_ParamLimits

0x53f7,	// (0x00018ad5) main_cset_slider_pane_g3_ParamLimits

0x53f7,	// (0x00018ad5) main_cset_slider_pane_g3

0xc2f6,	// (0x0001f9d4) main_cset_slider_pane_g4_ParamLimits

0xc2f6,	// (0x0001f9d4) main_cset_slider_pane_g4

0xc305,	// (0x0001f9e3) main_cset_slider_pane_g5_ParamLimits

0xc305,	// (0x0001f9e3) main_cset_slider_pane_g5

0xc311,	// (0x0001f9ef) main_cset_slider_pane_g6_ParamLimits

0xc311,	// (0x0001f9ef) main_cset_slider_pane_g6

0xf9e2,	// (0x000230c0) main_cset_slider_pane_g_ParamLimits

0x5427,	// (0x00018b05) main_cset_slider_pane_t1_ParamLimits

0xc39d,	// (0x0001fa7b) main_cset_slider_pane_t2_ParamLimits

0xc3b7,	// (0x0001fa95) main_cset_slider_pane_t3_ParamLimits

0xc3d1,	// (0x0001faaf) main_cset_slider_pane_t4_ParamLimits

0xc3eb,	// (0x0001fac9) main_cset_slider_pane_t5_ParamLimits

0xc405,	// (0x0001fae3) main_cset_slider_pane_t6_ParamLimits

0xc41a,	// (0x0001faf8) main_cset_slider_pane_t7_ParamLimits

0xc444,	// (0x0001fb22) main_cset_slider_pane_t8_ParamLimits

0xc444,	// (0x0001fb22) main_cset_slider_pane_t8

0xc46c,	// (0x0001fb4a) main_cset_slider_pane_t9_ParamLimits

0xc46c,	// (0x0001fb4a) main_cset_slider_pane_t9

0xc494,	// (0x0001fb72) main_cset_slider_pane_t10_ParamLimits

0xc494,	// (0x0001fb72) main_cset_slider_pane_t10

0xc4bc,	// (0x0001fb9a) main_cset_slider_pane_t11_ParamLimits

0xc4bc,	// (0x0001fb9a) main_cset_slider_pane_t11

0xc4e4,	// (0x0001fbc2) main_cset_slider_pane_t12_ParamLimits

0xc4e4,	// (0x0001fbc2) main_cset_slider_pane_t12

0xc501,	// (0x0001fbdf) main_cset_slider_pane_t13_ParamLimits

0xc501,	// (0x0001fbdf) main_cset_slider_pane_t13

0xfa07,	// (0x000230e5) main_cset_slider_pane_t_ParamLimits

0x1616,	// (0x00014cf4) bg_popup_sub_pane_cp011

0x5614,	// (0x00018cf2) main_cset_text_pane_g1

0x561c,	// (0x00018cfa) main_cset_text_pane_t1

0x562a,	// (0x00018d08) main_cset_text_pane_t2

0x5638,	// (0x00018d16) main_cset_text_pane_t3

0x5646,	// (0x00018d24) main_cset_text_pane_t4

0x5654,	// (0x00018d32) main_cset_text_pane_t5

0x5662,	// (0x00018d40) main_cset_text_pane_t6

0x5670,	// (0x00018d4e) main_cset_text_pane_t7

0x0006,

0xfa98,	// (0x00023176) main_cset_text_pane_t

0x1616,	// (0x00014cf4) main_cam4_burst_pane

0x1616,	// (0x00014cf4) main_cam5_pane

0xc1e1,	// (0x0001f8bf) bg_button_pane_cp019

0xc1ea,	// (0x0001f8c8) bg_button_pane_cp020

0x5403,	// (0x00018ae1) main_cset_slider_pane_g7_ParamLimits

0x5403,	// (0x00018ae1) main_cset_slider_pane_g7

0x540f,	// (0x00018aed) main_cset_slider_pane_g8_ParamLimits

0x540f,	// (0x00018aed) main_cset_slider_pane_g8

0xc325,	// (0x0001fa03) main_cset_slider_pane_g9_ParamLimits

0xc325,	// (0x0001fa03) main_cset_slider_pane_g9

0xc331,	// (0x0001fa0f) main_cset_slider_pane_g10_ParamLimits

0xc331,	// (0x0001fa0f) main_cset_slider_pane_g10

0xc33d,	// (0x0001fa1b) main_cset_slider_pane_g11_ParamLimits

0xc33d,	// (0x0001fa1b) main_cset_slider_pane_g11

0xc349,	// (0x0001fa27) main_cset_slider_pane_g12_ParamLimits

0xc349,	// (0x0001fa27) main_cset_slider_pane_g12

0xc355,	// (0x0001fa33) main_cset_slider_pane_g13_ParamLimits

0xc355,	// (0x0001fa33) main_cset_slider_pane_g13

0xc361,	// (0x0001fa3f) main_cset_slider_pane_g14_ParamLimits

0xc361,	// (0x0001fa3f) main_cset_slider_pane_g14

0xc36d,	// (0x0001fa4b) main_cset_slider_pane_g15_ParamLimits

0xc36d,	// (0x0001fa4b) main_cset_slider_pane_g15

0x5455,	// (0x00018b33) main_cset_slider_pane_t14_ParamLimits

0x5455,	// (0x00018b33) main_cset_slider_pane_t14

0x548e,	// (0x00018b6c) main_cset_slider_pane_t15_ParamLimits

0x548e,	// (0x00018b6c) main_cset_slider_pane_t15

0xc77b,	// (0x0001fe59) aid_cam4_burst_size_cell_ParamLimits

0xc77b,	// (0x0001fe59) aid_cam4_burst_size_cell

0xc797,	// (0x0001fe75) grid_cam4_burst_pane_ParamLimits

0xc797,	// (0x0001fe75) grid_cam4_burst_pane

0xc7b9,	// (0x0001fe97) linegrid_cam4_burst_pane_ParamLimits

0xc7b9,	// (0x0001fe97) linegrid_cam4_burst_pane

0xc7d7,	// (0x0001feb5) scroll_pane_cp30_ParamLimits

0xc7d7,	// (0x0001feb5) scroll_pane_cp30

0xc7e3,	// (0x0001fec1) cell_cam4_burst_pane_ParamLimits

0xc7e3,	// (0x0001fec1) cell_cam4_burst_pane

0x567e,	// (0x00018d5c) linegrid_cam4_burst_pane_g1_ParamLimits

0x567e,	// (0x00018d5c) linegrid_cam4_burst_pane_g1

0xc81b,	// (0x0001fef9) linegrid_cam4_burst_pane_g2_ParamLimits

0xc81b,	// (0x0001fef9) linegrid_cam4_burst_pane_g2

0x568b,	// (0x00018d69) linegrid_cam4_burst_pane_g3_ParamLimits

0x568b,	// (0x00018d69) linegrid_cam4_burst_pane_g3

0x0002,

0xfaa7,	// (0x00023185) linegrid_cam4_burst_pane_g_ParamLimits

0xfaa7,	// (0x00023185) linegrid_cam4_burst_pane_g

0xc82c,	// (0x0001ff0a) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xc82c,	// (0x0001ff0a) linegrid_cam4_burst_pane_g3_copy1

0x5698,	// (0x00018d76) linegrid_cam4_burst_pane_g4_ParamLimits

0x5698,	// (0x00018d76) linegrid_cam4_burst_pane_g4

0xc846,	// (0x0001ff24) linegrid_cam4_burst_pane_g5_ParamLimits

0xc846,	// (0x0001ff24) linegrid_cam4_burst_pane_g5

0xc857,	// (0x0001ff35) linegrid_cam4_burst_pane_g6_ParamLimits

0xc857,	// (0x0001ff35) linegrid_cam4_burst_pane_g6

0x56a5,	// (0x00018d83) linegrid_cam4_burst_pane_g7_ParamLimits

0x56a5,	// (0x00018d83) linegrid_cam4_burst_pane_g7

0xc868,	// (0x0001ff46) cell_cam4_burst_pane_g1

0x56be,	// (0x00018d9c) main_cam5_pane_t1_ParamLimits

0x56be,	// (0x00018d9c) main_cam5_pane_t1

0x56d0,	// (0x00018dae) main_cam5_pane_t2_ParamLimits

0x56d0,	// (0x00018dae) main_cam5_pane_t2

0x56e2,	// (0x00018dc0) main_cam5_pane_t3_ParamLimits

0x56e2,	// (0x00018dc0) main_cam5_pane_t3

0x56f4,	// (0x00018dd2) main_cam5_pane_t4_ParamLimits

0x56f4,	// (0x00018dd2) main_cam5_pane_t4

0x570a,	// (0x00018de8) main_cam5_pane_t5_ParamLimits

0x570a,	// (0x00018de8) main_cam5_pane_t5

0x571c,	// (0x00018dfa) main_cam5_pane_t6_ParamLimits

0x571c,	// (0x00018dfa) main_cam5_pane_t6

0x572e,	// (0x00018e0c) main_cam5_pane_t7_ParamLimits

0x572e,	// (0x00018e0c) main_cam5_pane_t7

0x5740,	// (0x00018e1e) main_cam5_pane_t8_ParamLimits

0x5740,	// (0x00018e1e) main_cam5_pane_t8

0x575c,	// (0x00018e3a) main_cam5_pane_t9_ParamLimits

0x575c,	// (0x00018e3a) main_cam5_pane_t9

0x576e,	// (0x00018e4c) main_cam5_pane_t10_ParamLimits

0x576e,	// (0x00018e4c) main_cam5_pane_t10

0x5780,	// (0x00018e5e) main_cam5_pane_t11_ParamLimits

0x5780,	// (0x00018e5e) main_cam5_pane_t11

0x5792,	// (0x00018e70) main_cam5_pane_t12_ParamLimits

0x5792,	// (0x00018e70) main_cam5_pane_t12

0x57a7,	// (0x00018e85) main_cam5_pane_t13_ParamLimits

0x57a7,	// (0x00018e85) main_cam5_pane_t13

0x000c,

0xfab3,	// (0x00023191) main_cam5_pane_t_ParamLimits

0xfab3,	// (0x00023191) main_cam5_pane_t

0x88be,	// (0x0001bf9c) popup_scut_keymap_window_ParamLimits

0x88be,	// (0x0001bf9c) popup_scut_keymap_window

0xc87b,	// (0x0001ff59) aid_size_cell_brow_shortcut

0x2c41,	// (0x0001631f) bg_popup_window_pane_cp010

0xc887,	// (0x0001ff65) grid_scut_pane

0xc891,	// (0x0001ff6f) cell_scut_pane_ParamLimits

0xc891,	// (0x0001ff6f) cell_scut_pane

0xc8a6,	// (0x0001ff84) cell_scut_pane_g1

0x57c4,	// (0x00018ea2) cell_scut_pane_t1

0x57d3,	// (0x00018eb1) cell_scut_pane_t2

0xc8af,	// (0x0001ff8d) cell_scut_pane_t3

0x0002,

0xface,	// (0x000231ac) cell_scut_pane_t

0xb446,	// (0x0001eb24) main_mup3_pane_g8_ParamLimits

0xb446,	// (0x0001eb24) main_mup3_pane_g8

0x81d5,	// (0x0001b8b3) area_vitu2_query_pane_ParamLimits

0x81d5,	// (0x0001b8b3) area_vitu2_query_pane

0xc6cb,	// (0x0001fda9) input_focus_pane_cp08

0x57e2,	// (0x00018ec0) area_vitu2_query_pane_g1

0xc8bd,	// (0x0001ff9b) area_vitu2_query_pane_g2

0x0001,

0xfad5,	// (0x000231b3) area_vitu2_query_pane_g

0xc8cc,	// (0x0001ffaa) area_vitu2_query_pane_t1_ParamLimits

0xc8cc,	// (0x0001ffaa) area_vitu2_query_pane_t1

0xc8de,	// (0x0001ffbc) area_vitu2_query_pane_t2_ParamLimits

0xc8de,	// (0x0001ffbc) area_vitu2_query_pane_t2

0xc8f0,	// (0x0001ffce) area_vitu2_query_pane_t3_ParamLimits

0xc8f0,	// (0x0001ffce) area_vitu2_query_pane_t3

0x57ee,	// (0x00018ecc) area_vitu2_query_pane_t4_ParamLimits

0x57ee,	// (0x00018ecc) area_vitu2_query_pane_t4

0x5816,	// (0x00018ef4) area_vitu2_query_pane_t5_ParamLimits

0x5816,	// (0x00018ef4) area_vitu2_query_pane_t5

0x583e,	// (0x00018f1c) area_vitu2_query_pane_t6_ParamLimits

0x583e,	// (0x00018f1c) area_vitu2_query_pane_t6

0x0006,

0xfada,	// (0x000231b8) area_vitu2_query_pane_t_ParamLimits

0xfada,	// (0x000231b8) area_vitu2_query_pane_t

0xc918,	// (0x0001fff6) bg_button_pane_cp018

0xc925,	// (0x00020003) bg_button_pane_cp021

0xc931,	// (0x0002000f) bg_button_pane_cp022

0xc940,	// (0x0002001e) input_focus_pane_cp09

0xa026,	// (0x0001d704) aid_size_touch_mv_arrow_left

0x2b1a,	// (0x000161f8) aid_size_touch_mv_arrow_right

0xc385,	// (0x0001fa63) main_cset_slider_pane_g16_ParamLimits

0xc385,	// (0x0001fa63) main_cset_slider_pane_g16

0xc391,	// (0x0001fa6f) main_cset_slider_pane_g17_ParamLimits

0xc391,	// (0x0001fa6f) main_cset_slider_pane_g17

0xc868,	// (0x0001ff46) cell_cam4_burst_pane_g1_ParamLimits

0x1616,	// (0x00014cf4) compa_mode_pane

0xc562,	// (0x0001fc40) popup_vtel_slider_window_g3_ParamLimits

0xc562,	// (0x0001fc40) popup_vtel_slider_window_g3

0xc576,	// (0x0001fc54) popup_vtel_slider_window_g4_ParamLimits

0xc576,	// (0x0001fc54) popup_vtel_slider_window_g4

0xc58a,	// (0x0001fc68) popup_vtel_slider_window_t1_ParamLimits

0xc58a,	// (0x0001fc68) popup_vtel_slider_window_t1

0x1616,	// (0x00014cf4) main_cl_pane

0x415d,	// (0x0001783b) popup_imed_adjust2_window_ParamLimits

0x4137,	// (0x00017815) bg_tb_trans_pane_cp05_ParamLimits

0x4b23,	// (0x00018201) popup_imed_adjust2_window_g1_ParamLimits

0x4b32,	// (0x00018210) popup_imed_adjust2_window_g2_ParamLimits

0x4b32,	// (0x00018210) popup_imed_adjust2_window_g2

0x4b3e,	// (0x0001821c) popup_imed_adjust2_window_g3_ParamLimits

0x4b3e,	// (0x0001821c) popup_imed_adjust2_window_g3

0x0002,

0xf854,	// (0x00022f32) popup_imed_adjust2_window_g_ParamLimits

0xf854,	// (0x00022f32) popup_imed_adjust2_window_g

0x4b4a,	// (0x00018228) popup_imed_adjust2_window_t1_ParamLimits

0x4b62,	// (0x00018240) slider_imed_adjust_pane_ParamLimits

0x4b76,	// (0x00018254) slider_imed_adjust_pane_g1_ParamLimits

0x4b86,	// (0x00018264) slider_imed_adjust_pane_g2_ParamLimits

0x4b96,	// (0x00018274) slider_imed_adjust_pane_g3_ParamLimits

0x4ba7,	// (0x00018285) slider_imed_adjust_pane_g4_ParamLimits

0xf85b,	// (0x00022f39) slider_imed_adjust_pane_g_ParamLimits

0x7f7f,	// (0x0001b65d) aid_touch_area_cam4_ParamLimits

0x7f7f,	// (0x0001b65d) aid_touch_area_cam4

0x7f8d,	// (0x0001b66b) battery_pane_cp01

0x800e,	// (0x0001b6ec) main_camera4_pane_g6_ParamLimits

0x800e,	// (0x0001b6ec) main_camera4_pane_g6

0x802c,	// (0x0001b70a) main_camera4_pane_t2_ParamLimits

0x802c,	// (0x0001b70a) main_camera4_pane_t2

0x0001,

0xf95e,	// (0x0002303c) main_camera4_pane_t_ParamLimits

0xf95e,	// (0x0002303c) main_camera4_pane_t

0x809e,	// (0x0001b77c) aid_touch_area_vid4_ParamLimits

0x809e,	// (0x0001b77c) aid_touch_area_vid4

0x80d0,	// (0x0001b7ae) main_video4_pane_g5_ParamLimits

0x80d0,	// (0x0001b7ae) main_video4_pane_g5

0x80f2,	// (0x0001b7d0) vid4_progress_pane_ParamLimits

0x80f2,	// (0x0001b7d0) vid4_progress_pane

0x541b,	// (0x00018af9) main_cset_slider_pane_g18_ParamLimits

0x541b,	// (0x00018af9) main_cset_slider_pane_g18

0x56b2,	// (0x00018d90) cell_cam4_burst_pane_g2_ParamLimits

0x56b2,	// (0x00018d90) cell_cam4_burst_pane_g2

0x0001,

0xfaae,	// (0x0002318c) cell_cam4_burst_pane_g_ParamLimits

0xfaae,	// (0x0002318c) cell_cam4_burst_pane_g

0xc94f,	// (0x0002002d) bg_cl_pane_ParamLimits

0xc94f,	// (0x0002002d) bg_cl_pane

0xc95b,	// (0x00020039) cl_header_pane_ParamLimits

0xc95b,	// (0x00020039) cl_header_pane

0xc967,	// (0x00020045) cl_listscroll_pane_ParamLimits

0xc967,	// (0x00020045) cl_listscroll_pane

0x588a,	// (0x00018f68) bg_cl_pane_g1

0x5892,	// (0x00018f70) bg_cl_pane_g2

0x589a,	// (0x00018f78) bg_cl_pane_g3

0x58a2,	// (0x00018f80) bg_cl_pane_g4

0x58aa,	// (0x00018f88) bg_cl_pane_g5

0x58b2,	// (0x00018f90) bg_cl_pane_g6

0x58ba,	// (0x00018f98) bg_cl_pane_g7

0x58c2,	// (0x00018fa0) bg_cl_pane_g8

0x58ca,	// (0x00018fa8) bg_cl_pane_g9

0x0008,

0xfae9,	// (0x000231c7) bg_cl_pane_g

0xc973,	// (0x00020051) aid_height_cl_leading_ParamLimits

0xc973,	// (0x00020051) aid_height_cl_leading

0xc97f,	// (0x0002005d) aid_height_cl_text_ParamLimits

0xc97f,	// (0x0002005d) aid_height_cl_text

0x439c,	// (0x00017a7a) bg_cl_header_pane_ParamLimits

0x439c,	// (0x00017a7a) bg_cl_header_pane

0xc997,	// (0x00020075) cl_header_pane_g1_ParamLimits

0xc997,	// (0x00020075) cl_header_pane_g1

0xc9a4,	// (0x00020082) cl_header_pane_t1_ParamLimits

0xc9a4,	// (0x00020082) cl_header_pane_t1

0x58d2,	// (0x00018fb0) cl_list_pane

0x58db,	// (0x00018fb9) hc_scroll_pane_cp01

0x2382,	// (0x00015a60) bg_cl_header_pane_g1

0x52e8,	// (0x000189c6) bg_cl_header_pane_g2

0x23a2,	// (0x00015a80) bg_cl_header_pane_g3

0x52f8,	// (0x000189d6) bg_cl_header_pane_g4

0x52f0,	// (0x000189ce) bg_cl_header_pane_g5

0x55ab,	// (0x00018c89) bg_cl_header_pane_g6

0x5310,	// (0x000189ee) bg_cl_header_pane_g7

0x5318,	// (0x000189f6) bg_cl_header_pane_g8

0x5308,	// (0x000189e6) bg_cl_header_pane_g9

0x0008,

0xfafc,	// (0x000231da) bg_cl_header_pane_g

0xc9b6,	// (0x00020094) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xc9b6,	// (0x00020094) hc_cl_list_double_graphic_heading_pane

0xc9c6,	// (0x000200a4) hc_cl_list_single_graphic_pane_ParamLimits

0xc9c6,	// (0x000200a4) hc_cl_list_single_graphic_pane

0xc9d8,	// (0x000200b6) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xc9d8,	// (0x000200b6) hc_cl_list_single_graphic_pane_g1

0xc9e4,	// (0x000200c2) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xc9e4,	// (0x000200c2) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfb0f,	// (0x000231ed) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfb0f,	// (0x000231ed) hc_cl_list_single_graphic_pane_g

0xc9f8,	// (0x000200d6) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xc9f8,	// (0x000200d6) hc_cl_list_single_graphic_pane_t1

0xc9d8,	// (0x000200b6) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xc9d8,	// (0x000200b6) hc_cl_list_double_graphic_heading_pane_g1

0xca0d,	// (0x000200eb) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xca0d,	// (0x000200eb) hc_cl_list_double_graphic_heading_pane_g2

0xca21,	// (0x000200ff) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xca21,	// (0x000200ff) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfb14,	// (0x000231f2) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfb14,	// (0x000231f2) hc_cl_list_double_graphic_heading_pane_g

0xca35,	// (0x00020113) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xca35,	// (0x00020113) hc_cl_list_double_graphic_heading_pane_t1

0xca4a,	// (0x00020128) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xca4a,	// (0x00020128) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfb1b,	// (0x000231f9) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfb1b,	// (0x000231f9) hc_cl_list_double_graphic_heading_pane_t

0x85bc,	// (0x0001bc9a) vid4_progress_pane_g1

0x85cb,	// (0x0001bca9) vid4_progress_pane_g2

0x85da,	// (0x0001bcb8) vid4_progress_pane_g3

0x85e9,	// (0x0001bcc7) vid4_progress_pane_g4

0x0004,

0xfb20,	// (0x000231fe) vid4_progress_pane_g

0x8601,	// (0x0001bcdf) vid4_progress_pane_t1

0x8617,	// (0x0001bcf5) vid4_progress_pane_t2

0x0002,

0xfb2b,	// (0x00023209) vid4_progress_pane_t

0x8641,	// (0x0001bd1f) wait_bar_pane_cp07

0x4455,	// (0x00017b33) blid_firmament_pane_ParamLimits

0x4496,	// (0x00017b74) popup_blid_sat_info2_window_g1

0x44ba,	// (0x00017b98) popup_blid_sat_info2_window_t3

0x44c8,	// (0x00017ba6) popup_blid_sat_info2_window_t4

0x44d6,	// (0x00017bb4) popup_blid_sat_info2_window_t5

0x44e4,	// (0x00017bc2) popup_blid_sat_info2_window_t6

0x44f4,	// (0x00017bd2) popup_blid_sat_info2_window_t7

0x4502,	// (0x00017be0) popup_blid_sat_info2_window_t8

0x4510,	// (0x00017bee) popup_blid_sat_info2_window_t9

0x451e,	// (0x00017bfc) popup_blid_sat_info2_window_t10

0x45da,	// (0x00017cb8) aid_firma_cardinal_ParamLimits

0x45ee,	// (0x00017ccc) blid_firmament_pane_t1_ParamLimits

0x4605,	// (0x00017ce3) blid_firmament_pane_t2_ParamLimits

0x461c,	// (0x00017cfa) blid_firmament_pane_t3_ParamLimits

0x4633,	// (0x00017d11) blid_firmament_pane_t4_ParamLimits

0xf74d,	// (0x00022e2b) blid_firmament_pane_t_ParamLimits

0x464a,	// (0x00017d28) blid_sat_info_pane_ParamLimits

0x1669,	// (0x00014d47) main_cam_set_pane_ParamLimits

0xbb33,	// (0x0001f211) aid_size_cell_colour_35_ParamLimits

0xbb4a,	// (0x0001f228) aid_size_cell_colour_112_ParamLimits

0xbb61,	// (0x0001f23f) aid_size_cell_effect_ParamLimits

0x1669,	// (0x00014d47) bg_tb_trans_pane_cp02_ParamLimits

0x43be,	// (0x00017a9c) heading_imed_pane_ParamLimits

0xbb7b,	// (0x0001f259) listscroll_imed_pane_ParamLimits

0x3729,	// (0x00016e07) popup_call2_audio_first_window_g5_ParamLimits

0x3729,	// (0x00016e07) popup_call2_audio_first_window_g5

0x7e20,	// (0x0001b4fe) aid_size_touch_image3_arrow_left_ParamLimits

0x7e20,	// (0x0001b4fe) aid_size_touch_image3_arrow_left

0x7e34,	// (0x0001b512) aid_size_touch_image3_arrow_right_ParamLimits

0x7e34,	// (0x0001b512) aid_size_touch_image3_arrow_right

0x862c,	// (0x0001bd0a) vid4_progress_pane_t3

0xbddf,	// (0x0001f4bd) main_hwr_training_symbol_option_pane_ParamLimits

0xbddf,	// (0x0001f4bd) main_hwr_training_symbol_option_pane

0x4e02,	// (0x000184e0) popup_hwr_training_preview_window_ParamLimits

0x4e02,	// (0x000184e0) popup_hwr_training_preview_window

0x7b38,	// (0x0001b216) hwr_training_navi_pane_g5_ParamLimits

0x7b38,	// (0x0001b216) hwr_training_navi_pane_g5

0x52d6,	// (0x000189b4) popup_char_count_window

0x84fa,	// (0x0001bbd8) bg_popup_sub_pane_cp20_ParamLimits

0x8508,	// (0x0001bbe6) list_vitu2_match_list_pane_ParamLimits

0x8514,	// (0x0001bbf2) vitu2_page_scroll_pane_ParamLimits

0x8514,	// (0x0001bbf2) vitu2_page_scroll_pane

0x59c7,	// (0x000190a5) list_single_hwr_training_symbol_option_pane_ParamLimits

0x59c7,	// (0x000190a5) list_single_hwr_training_symbol_option_pane

0x59da,	// (0x000190b8) list_single_hwr_training_symbol_option_pane_g1

0x59e2,	// (0x000190c0) list_single_hwr_training_symbol_option_pane_t1

0x59f0,	// (0x000190ce) bg_button_pane_cp023

0x59f9,	// (0x000190d7) bg_button_pane_cp024

0xca5f,	// (0x0002013d) vitu2_page_scroll_pane_g1

0xca67,	// (0x00020145) vitu2_page_scroll_pane_g2

0x0001,

0xfb32,	// (0x00023210) vitu2_page_scroll_pane_g

0xca6f,	// (0x0002014d) vitu2_page_scroll_pane_t1

0x4343,	// (0x00017a21) popup_char_count_window_g1

0x5a2c,	// (0x0001910a) popup_char_count_window_g2

0x5a35,	// (0x00019113) popup_char_count_window_g3

0x0002,

0xfb37,	// (0x00023215) popup_char_count_window_g

0x5a3e,	// (0x0001911c) popup_char_count_window_t1

0x1616,	// (0x00014cf4) main_vded2_pane

0x4b11,	// (0x000181ef) aid_size_cell_imed_line

0x4b1b,	// (0x000181f9) grid_imed_line_width_pane

0x814b,	// (0x0001b829) vid4_indicators_pane_g4

0x5a4c,	// (0x0001912a) cell_imed_line_width_pane_ParamLimits

0x5a4c,	// (0x0001912a) cell_imed_line_width_pane

0x5a5e,	// (0x0001913c) cell_imed_line_width_pane_g1

0x5a67,	// (0x00019145) cell_imed_line_width_pane_g2

0x0001,

0xfb3e,	// (0x0002321c) cell_imed_line_width_pane_g

0xca7e,	// (0x0002015c) main_vded2_pane_g1_ParamLimits

0xca7e,	// (0x0002015c) main_vded2_pane_g1

0xca8b,	// (0x00020169) main_vded2_pane_g2_ParamLimits

0xca8b,	// (0x00020169) main_vded2_pane_g2

0x0001,

0xfb43,	// (0x00023221) main_vded2_pane_g_ParamLimits

0xfb43,	// (0x00023221) main_vded2_pane_g

0xca97,	// (0x00020175) vded2_slider_pane_ParamLimits

0xca97,	// (0x00020175) vded2_slider_pane

0xcaa4,	// (0x00020182) aid_size_touch_vded2_end

0xcaac,	// (0x0002018a) aid_size_touch_vded2_playhead

0xcab4,	// (0x00020192) aid_size_touch_vded2_start

0xcabc,	// (0x0002019a) vded2_slider_bg_pane

0xcac5,	// (0x000201a3) vded2_slider_pane_g1

0xcace,	// (0x000201ac) vded2_slider_pane_g2

0xcad6,	// (0x000201b4) vded2_slider_pane_g3

0x0002,

0xfb48,	// (0x00023226) vded2_slider_pane_g

0xcadf,	// (0x000201bd) vded2_slider_bg_pane_g1

0xcae8,	// (0x000201c6) vded2_slider_bg_pane_g2

0xcaf1,	// (0x000201cf) vded2_slider_bg_pane_g3

0x0002,

0xfb4f,	// (0x0002322d) vded2_slider_bg_pane_g

0xa519,	// (0x0001dbf7) aid_postcard_touch_down_pane_ParamLimits

0xa519,	// (0x0001dbf7) aid_postcard_touch_down_pane

0xa525,	// (0x0001dc03) aid_postcard_touch_up_pane_ParamLimits

0xa525,	// (0x0001dc03) aid_postcard_touch_up_pane

0x1616,	// (0x00014cf4) main_blid2_pane

0x4145,	// (0x00017823) popup_blid2_search_window

0x1616,	// (0x00014cf4) blid2_gps_pane

0x1616,	// (0x00014cf4) blid2_navig_pane

0x1616,	// (0x00014cf4) blid2_search_pane

0x1616,	// (0x00014cf4) blid2_tripm_pane

0xcafa,	// (0x000201d8) blid2_search_pane_g1_ParamLimits

0xcafa,	// (0x000201d8) blid2_search_pane_g1

0xcb06,	// (0x000201e4) blid2_search_pane_t1_ParamLimits

0xcb06,	// (0x000201e4) blid2_search_pane_t1

0xcb18,	// (0x000201f6) aid_size_cell_blid2_gps_ParamLimits

0xcb18,	// (0x000201f6) aid_size_cell_blid2_gps

0xcb28,	// (0x00020206) blid2_gps_pane_g1_ParamLimits

0xcb28,	// (0x00020206) blid2_gps_pane_g1

0xcb34,	// (0x00020212) grid_blid2_satellite_pane_ParamLimits

0xcb34,	// (0x00020212) grid_blid2_satellite_pane

0xcb40,	// (0x0002021e) blid2_navig_pane_g1_ParamLimits

0xcb40,	// (0x0002021e) blid2_navig_pane_g1

0xcb4c,	// (0x0002022a) blid2_navig_pane_t1_ParamLimits

0xcb4c,	// (0x0002022a) blid2_navig_pane_t1

0xcb5e,	// (0x0002023c) blid2_navig_pane_t2_ParamLimits

0xcb5e,	// (0x0002023c) blid2_navig_pane_t2

0x0001,

0xfb56,	// (0x00023234) blid2_navig_pane_t_ParamLimits

0xfb56,	// (0x00023234) blid2_navig_pane_t

0xcb70,	// (0x0002024e) blid2_navig_ring_pane_ParamLimits

0xcb70,	// (0x0002024e) blid2_navig_ring_pane

0xcb7c,	// (0x0002025a) blid2_speed_pane_ParamLimits

0xcb7c,	// (0x0002025a) blid2_speed_pane

0xcb88,	// (0x00020266) blid2_tripm_pane_g1_ParamLimits

0xcb88,	// (0x00020266) blid2_tripm_pane_g1

0xcb94,	// (0x00020272) blid2_tripm_pane_g2_ParamLimits

0xcb94,	// (0x00020272) blid2_tripm_pane_g2

0xcba0,	// (0x0002027e) blid2_tripm_pane_g3_ParamLimits

0xcba0,	// (0x0002027e) blid2_tripm_pane_g3

0xcbac,	// (0x0002028a) blid2_tripm_pane_g4_ParamLimits

0xcbac,	// (0x0002028a) blid2_tripm_pane_g4

0xcbb8,	// (0x00020296) blid2_tripm_pane_g5_ParamLimits

0xcbb8,	// (0x00020296) blid2_tripm_pane_g5

0x0005,

0xfb5b,	// (0x00023239) blid2_tripm_pane_g_ParamLimits

0xfb5b,	// (0x00023239) blid2_tripm_pane_g

0xcbd0,	// (0x000202ae) blid2_tripm_pane_t1_ParamLimits

0xcbd0,	// (0x000202ae) blid2_tripm_pane_t1

0xcbe2,	// (0x000202c0) blid2_tripm_pane_t2_ParamLimits

0xcbe2,	// (0x000202c0) blid2_tripm_pane_t2

0xcbf4,	// (0x000202d2) blid2_tripm_pane_t3_ParamLimits

0xcbf4,	// (0x000202d2) blid2_tripm_pane_t3

0x0003,

0xfb68,	// (0x00023246) blid2_tripm_pane_t_ParamLimits

0xfb68,	// (0x00023246) blid2_tripm_pane_t

0xcc24,	// (0x00020302) cell_blid2_satellite_pane_ParamLimits

0xcc24,	// (0x00020302) cell_blid2_satellite_pane

0xcc3c,	// (0x0002031a) cell_blid2_satellite_pane_g1

0x5a6f,	// (0x0001914d) cell_blid2_satellite_pane_t1

0x465a,	// (0x00017d38) blid2_speed_pane_g1

0x5a7d,	// (0x0001915b) blid2_speed_pane_t1

0x5a8b,	// (0x00019169) blid2_speed_pane_t2

0x0001,

0xfb71,	// (0x0002324f) blid2_speed_pane_t

0x465a,	// (0x00017d38) blid2_navig_ring_pane_g1

0xcc45,	// (0x00020323) blid2_navig_ring_pane_g2

0xcc4d,	// (0x0002032b) blid2_navig_ring_pane_g3

0xcc55,	// (0x00020333) blid2_navig_ring_pane_g4

0xcc5d,	// (0x0002033b) blid2_navig_ring_pane_g5

0x0004,

0xfb76,	// (0x00023254) blid2_navig_ring_pane_g

0x1616,	// (0x00014cf4) bg_popup_window_pane_cp011

0x5a99,	// (0x00019177) popup_blid2_search_window_g1

0x5aa1,	// (0x0001917f) popup_blid2_search_window_t1

0x5aaf,	// (0x0001918d) popup_blid2_search_window_t2

0x0001,

0xfb81,	// (0x0002325f) popup_blid2_search_window_t

0x2291,	// (0x0001596f) main_browser_pane_g1

0x1dd4,	// (0x000154b2) main_browser_pane_ParamLimits

0x811c,	// (0x0001b7fa) bg_button_pane_cp011_ParamLimits

0x841a,	// (0x0001baf8) cell_vitu2_function_pane_g1_ParamLimits

0x1669,	// (0x00014d47) bg_popup_sub_pane_cp22_ParamLimits

0xc6cb,	// (0x0001fda9) input_focus_pane_cp08_ParamLimits

0xc6d8,	// (0x0001fdb6) popup_vitu2_query_button_pane_ParamLimits

0xc6d8,	// (0x0001fdb6) popup_vitu2_query_button_pane

0xc6af,	// (0x0001fd8d) popup_vitu2_query_input_button_pane

0x5608,	// (0x00018ce6) popup_vitu2_query_window_g1_ParamLimits

0xc6e9,	// (0x0001fdc7) popup_vitu2_query_window_g2_ParamLimits

0xfa88,	// (0x00023166) popup_vitu2_query_window_g_ParamLimits

0x1616,	// (0x00014cf4) bg_button_pane_cp026

0xcc65,	// (0x00020343) popup_vitu2_query_input_button_pane_g1

0x1616,	// (0x00014cf4) bg_button_pane_cp025

0x5abd,	// (0x0001919b) popup_vitu2_query_button_pane_t1

0xb1fe,	// (0x0001e8dc) main_mp3_pane_t6

0xb20c,	// (0x0001e8ea) popup_slider_window_cp01

0x804c,	// (0x0001b72a) cam4_battery_pane

0x804c,	// (0x0001b72a) cam4_battery_pane_cp02

0x804c,	// (0x0001b72a) cam4_battery_pane_cp01

0x804c,	// (0x0001b72a) cam4_battery_pane_cp03

0x5acb,	// (0x000191a9) cam4_battery_pane_g1

0x465a,	// (0x00017d38) cam4_battery_pane_g2

0x0001,

0xfb86,	// (0x00023264) cam4_battery_pane_g

0x452c,	// (0x00017c0a) popup_blid_sat_info2_window_t11

0xa026,	// (0x0001d704) aid_size_touch_mv_arrow_left_ParamLimits

0x2b1a,	// (0x000161f8) aid_size_touch_mv_arrow_right_ParamLimits

0x2b52,	// (0x00016230) navi_pane_g1_ParamLimits

0x2b5e,	// (0x0001623c) navi_pane_g2_ParamLimits

0xa03f,	// (0x0001d71d) navi_pane_g3_ParamLimits

0xf44c,	// (0x00022b2a) navi_pane_g_ParamLimits

0xa064,	// (0x0001d742) navi_pane_mv_t1_ParamLimits

0xbb87,	// (0x0001f265) grid_imed_effect_pane_ParamLimits

0x21cb,	// (0x000158a9) aid_placing_vt_slider_lsc

0x21d3,	// (0x000158b1) aid_placing_vt_slider_prt

0x1669,	// (0x00014d47) bg_tb_trans_pane_cp01_ParamLimits

0x47a9,	// (0x00017e87) popup_image_details_window_g1_ParamLimits

0x47bc,	// (0x00017e9a) popup_image_details_window_g2_ParamLimits

0x47d1,	// (0x00017eaf) popup_image_details_window_g3_ParamLimits

0x47d1,	// (0x00017eaf) popup_image_details_window_g3

0xf792,	// (0x00022e70) popup_image_details_window_g_ParamLimits

0x47e5,	// (0x00017ec3) popup_image_details_window_t1_ParamLimits

0x47f7,	// (0x00017ed5) popup_image_details_window_t2_ParamLimits

0x4810,	// (0x00017eee) popup_image_details_window_t3_ParamLimits

0x4824,	// (0x00017f02) popup_image_details_window_t4_ParamLimits

0x483f,	// (0x00017f1d) popup_image_details_window_t5_ParamLimits

0xf799,	// (0x00022e77) popup_image_details_window_t_ParamLimits

0xc98b,	// (0x00020069) cl_header_name_pane_ParamLimits

0xc98b,	// (0x00020069) cl_header_name_pane

0xcc6d,	// (0x0002034b) cl_header_name_pane_t1_ParamLimits

0xcc6d,	// (0x0002034b) cl_header_name_pane_t1

0xcc84,	// (0x00020362) cl_header_name_pane_t2_ParamLimits

0xcc84,	// (0x00020362) cl_header_name_pane_t2

0xccae,	// (0x0002038c) cl_header_name_pane_t3_ParamLimits

0xccae,	// (0x0002038c) cl_header_name_pane_t3

0x0002,

0xfb8b,	// (0x00023269) cl_header_name_pane_t_ParamLimits

0xfb8b,	// (0x00023269) cl_header_name_pane_t

0x2be0,	// (0x000162be) navi_pane_mv_g2_ParamLimits

0x5293,	// (0x00018971) field_vitu2_entry_pane_g1_ParamLimits

0x529f,	// (0x0001897d) field_vitu2_entry_pane_g2_ParamLimits

0x52ab,	// (0x00018989) field_vitu2_entry_pane_g3_ParamLimits

0x52ab,	// (0x00018989) field_vitu2_entry_pane_g3

0xf987,	// (0x00023065) field_vitu2_entry_pane_g_ParamLimits

0x82ef,	// (0x0001b9cd) cell_vitu2_itu_pane_g1_ParamLimits

0x82ff,	// (0x0001b9dd) cell_vitu2_itu_pane_g2_ParamLimits

0x82ff,	// (0x0001b9dd) cell_vitu2_itu_pane_g2

0x0001,

0xf993,	// (0x00023071) cell_vitu2_itu_pane_g_ParamLimits

0xf993,	// (0x00023071) cell_vitu2_itu_pane_g

0x811c,	// (0x0001b7fa) bg_vkb2_func_pane_cp05_ParamLimits

0x811c,	// (0x0001b7fa) bg_vkb2_func_pane_cp05

0x811c,	// (0x0001b7fa) bg_vkb2_func_pane_cp03

0x811c,	// (0x0001b7fa) bg_vkb2_func_pane_cp04

0x811c,	// (0x0001b7fa) bg_vkb2_func_pane_cp10_ParamLimits

0x811c,	// (0x0001b7fa) bg_vkb2_func_pane_cp10

0xc931,	// (0x0002000f) bg_vkb2_func_pane_cp08

0xc918,	// (0x0001fff6) bg_vkb2_func_pane_cp06

0xc925,	// (0x00020003) bg_vkb2_func_pane_cp07

0x5a02,	// (0x000190e0) bg_vkb2_func_pane_cp11_ParamLimits

0x5a02,	// (0x000190e0) bg_vkb2_func_pane_cp11

0x5a17,	// (0x000190f5) bg_vkb2_func_pane_cp12_ParamLimits

0x5a17,	// (0x000190f5) bg_vkb2_func_pane_cp12

0x1616,	// (0x00014cf4) bg_vkb2_func_pane_cp09

0x52e8,	// (0x000189c6) bg_vkb2_func_pane_g1

0x23a2,	// (0x00015a80) bg_vkb2_func_pane_g2

0x52f0,	// (0x000189ce) bg_vkb2_func_pane_g3

0x52f8,	// (0x000189d6) bg_vkb2_func_pane_g4

0x55ab,	// (0x00018c89) bg_vkb2_func_pane_g5

0x5310,	// (0x000189ee) bg_vkb2_func_pane_g6

0x5318,	// (0x000189f6) bg_vkb2_func_pane_g7

0x5308,	// (0x000189e6) bg_vkb2_func_pane_g8

0x2382,	// (0x00015a60) bg_vkb2_func_pane_g9

0x0008,

0xfb92,	// (0x00023270) bg_vkb2_func_pane_g

0xcbc4,	// (0x000202a2) blid2_tripm_pane_g6_ParamLimits

0xcbc4,	// (0x000202a2) blid2_tripm_pane_g6

0x50fb,	// (0x000187d9) mp4_progress_pane_g1

0xcc18,	// (0x000202f6) blid2_tripm_values_pane_ParamLimits

0xcc18,	// (0x000202f6) blid2_tripm_values_pane

0xccd3,	// (0x000203b1) blid2_tripm_values_pane_t1

0xcce1,	// (0x000203bf) blid2_tripm_values_pane_t2

0xccef,	// (0x000203cd) blid2_tripm_values_pane_t3

0xccfd,	// (0x000203db) blid2_tripm_values_pane_t4

0xcd0b,	// (0x000203e9) blid2_tripm_values_pane_t5

0xcd19,	// (0x000203f7) blid2_tripm_values_pane_t6

0xcd27,	// (0x00020405) blid2_tripm_values_pane_t7

0xcd35,	// (0x00020413) blid2_tripm_values_pane_t8

0xcd43,	// (0x00020421) blid2_tripm_values_pane_t9

0x0008,

0xfba5,	// (0x00023283) blid2_tripm_values_pane_t

0x9245,	// (0x0001c923) call_video_pane_t1_ParamLimits

0x925b,	// (0x0001c939) call_video_pane_t2_ParamLimits

0xf2d5,	// (0x000229b3) call_video_pane_t_ParamLimits

0xa4bf,	// (0x0001db9d) msg_header_pane_g1_ParamLimits

0x2de4,	// (0x000164c2) msg_header_pane_g2_ParamLimits

0x2de4,	// (0x000164c2) msg_header_pane_g2

0x0001,

0xf4ef,	// (0x00022bcd) msg_header_pane_g_ParamLimits

0xf4ef,	// (0x00022bcd) msg_header_pane_g

0x1dd4,	// (0x000154b2) main_clock2_pane_ParamLimits

0xb9bf,	// (0x0001f09d) grid_clock2_toolbar_pane_ParamLimits

0xb9bf,	// (0x0001f09d) grid_clock2_toolbar_pane

0xb9bf,	// (0x0001f09d) listscroll_clock2_pane_ParamLimits

0xb9bf,	// (0x0001f09d) listscroll_clock2_pane

0xba62,	// (0x0001f140) main_clock2_pane_t3_ParamLimits

0xba62,	// (0x0001f140) main_clock2_pane_t3

0xba74,	// (0x0001f152) main_clock2_pane_t4_ParamLimits

0xba74,	// (0x0001f152) main_clock2_pane_t4

0x5ad5,	// (0x000191b3) cell_clock2_toolbar_pane

0x5add,	// (0x000191bb) cell_clock2_toolbar_pane_cp01

0x5add,	// (0x000191bb) cell_clock2_toolbar_pane_cp02

0x5ae5,	// (0x000191c3) cell_clock2_toolbar_pane_cp03

0x5aed,	// (0x000191cb) list_clock2_pane

0x2a82,	// (0x00016160) scroll_pane_cp10

0x5af5,	// (0x000191d3) list_single_clock2_pane_ParamLimits

0x5af5,	// (0x000191d3) list_single_clock2_pane

0x2c41,	// (0x0001631f) list_highlight_pane_cp08

0x5b02,	// (0x000191e0) list_single_clock2_pane_t1

0x5b10,	// (0x000191ee) list_single_clock2_pane_t2

0x0001,

0xfbb8,	// (0x00023296) list_single_clock2_pane_t

0x1616,	// (0x00014cf4) bg_button_pane_cp10

0x5b1e,	// (0x000191fc) cell_clock2_toolbar_pane_g1

0x7759,	// (0x0001ae37) aid_main_viewer_pane_g1_ParamLimits

0x7759,	// (0x0001ae37) aid_main_viewer_pane_g1

0x7765,	// (0x0001ae43) aid_main_viewer_pane_g2_ParamLimits

0x7765,	// (0x0001ae43) aid_main_viewer_pane_g2

0xa4dd,	// (0x0001dbbb) aid_main_viewer_pane_g3_ParamLimits

0xa4dd,	// (0x0001dbbb) aid_main_viewer_pane_g3

0xa4ec,	// (0x0001dbca) aid_main_viewer_pane_g4_ParamLimits

0xa4ec,	// (0x0001dbca) aid_main_viewer_pane_g4

0x0003,

0xf500,	// (0x00022bde) aid_main_viewer_pane_g_ParamLimits

0xf500,	// (0x00022bde) aid_main_viewer_pane_g

0x439c,	// (0x00017a7a) main_calc_pane_ParamLimits

0xab31,	// (0x0001e20f) main_dialer2_pane_ParamLimits

0x1616,	// (0x00014cf4) main_cam6_pane

0x1616,	// (0x00014cf4) main_vid6_pane

0xb9cb,	// (0x0001f0a9) listscroll_gen_pane_cp06_ParamLimits

0xb9cb,	// (0x0001f0a9) listscroll_gen_pane_cp06

0xba86,	// (0x0001f164) main_clock2_pane_t5_ParamLimits

0xba86,	// (0x0001f164) main_clock2_pane_t5

0xbacd,	// (0x0001f1ab) aid_call2_pane_cp10_ParamLimits

0xbad9,	// (0x0001f1b7) aid_call_pane_cp10_ParamLimits

0x2b0e,	// (0x000161ec) popup_clock_analogue_window_cp10_g1_ParamLimits

0x2b0e,	// (0x000161ec) popup_clock_analogue_window_cp10_g2_ParamLimits

0xbae5,	// (0x0001f1c3) popup_clock_analogue_window_cp10_g3_ParamLimits

0xbae5,	// (0x0001f1c3) popup_clock_analogue_window_cp10_g4_ParamLimits

0x2b0e,	// (0x000161ec) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf849,	// (0x00022f27) popup_clock_analogue_window_cp10_g_ParamLimits

0xbaf1,	// (0x0001f1cf) popup_clock_analogue_window_cp10_t1_ParamLimits

0x515b,	// (0x00018839) cell_dialer2_keypad_pane_g2_ParamLimits

0x515b,	// (0x00018839) cell_dialer2_keypad_pane_g2

0x0001,

0xf92f,	// (0x0002300d) cell_dialer2_keypad_pane_g_ParamLimits

0xf92f,	// (0x0002300d) cell_dialer2_keypad_pane_g

0xbe9e,	// (0x0001f57c) cell_dialer2_keypad_pane_t1

0xc273,	// (0x0001f951) main_cset_text2_pane_ParamLimits

0xc273,	// (0x0001f951) main_cset_text2_pane

0x57e2,	// (0x00018ec0) area_vitu2_query_pane_g1_ParamLimits

0xc8bd,	// (0x0001ff9b) area_vitu2_query_pane_g2_ParamLimits

0xfad5,	// (0x000231b3) area_vitu2_query_pane_g_ParamLimits

0x5866,	// (0x00018f44) area_vitu2_query_pane_t7_ParamLimits

0x5866,	// (0x00018f44) area_vitu2_query_pane_t7

0xc918,	// (0x0001fff6) bg_button_pane_cp018_ParamLimits

0xc925,	// (0x00020003) bg_button_pane_cp021_ParamLimits

0xc931,	// (0x0002000f) bg_button_pane_cp022_ParamLimits

0xc931,	// (0x0002000f) bg_vkb2_func_pane_cp08_ParamLimits

0xc918,	// (0x0001fff6) bg_vkb2_func_pane_cp06_ParamLimits

0xc925,	// (0x00020003) bg_vkb2_func_pane_cp07_ParamLimits

0xc940,	// (0x0002001e) input_focus_pane_cp09_ParamLimits

0x8651,	// (0x0001bd2f) cam6_autofocus_pane_ParamLimits

0x8651,	// (0x0001bd2f) cam6_autofocus_pane

0x866d,	// (0x0001bd4b) cam6_image_uncrop_pane_ParamLimits

0x866d,	// (0x0001bd4b) cam6_image_uncrop_pane

0x8690,	// (0x0001bd6e) cam6_indi_pane_ParamLimits

0x8690,	// (0x0001bd6e) cam6_indi_pane

0x86aa,	// (0x0001bd88) cam6_mode_pane_ParamLimits

0x86aa,	// (0x0001bd88) cam6_mode_pane

0x86be,	// (0x0001bd9c) cam6_timer_pane_ParamLimits

0x86be,	// (0x0001bd9c) cam6_timer_pane

0x86ca,	// (0x0001bda8) cam6_zoom_pane_ParamLimits

0x86ca,	// (0x0001bda8) cam6_zoom_pane

0xcd51,	// (0x0002042f) cam6_mode_pane_g1_ParamLimits

0xcd51,	// (0x0002042f) cam6_mode_pane_g1

0xcd5d,	// (0x0002043b) cam6_mode_pane_g2_ParamLimits

0xcd5d,	// (0x0002043b) cam6_mode_pane_g2

0xcd69,	// (0x00020447) cam6_mode_pane_g3_ParamLimits

0xcd69,	// (0x00020447) cam6_mode_pane_g3

0xcd75,	// (0x00020453) cam6_mode_pane_g4_ParamLimits

0xcd75,	// (0x00020453) cam6_mode_pane_g4

0x0003,

0xfbbd,	// (0x0002329b) cam6_mode_pane_g_ParamLimits

0xfbbd,	// (0x0002329b) cam6_mode_pane_g

0x554f,	// (0x00018c2d) bg_tb_trans_pane_cp08_ParamLimits

0x554f,	// (0x00018c2d) bg_tb_trans_pane_cp08

0x5b32,	// (0x00019210) cam6_battery_pane_ParamLimits

0x5b32,	// (0x00019210) cam6_battery_pane

0x5b48,	// (0x00019226) cam6_indi_pane_g1_ParamLimits

0x5b48,	// (0x00019226) cam6_indi_pane_g1

0x5b5a,	// (0x00019238) cam6_indi_pane_g2_ParamLimits

0x5b5a,	// (0x00019238) cam6_indi_pane_g2

0x5b6c,	// (0x0001924a) cam6_indi_pane_g3_ParamLimits

0x5b6c,	// (0x0001924a) cam6_indi_pane_g3

0x0002,

0xfbc6,	// (0x000232a4) cam6_indi_pane_g_ParamLimits

0xfbc6,	// (0x000232a4) cam6_indi_pane_g

0x5b7e,	// (0x0001925c) cam6_indi_pane_t1_ParamLimits

0x5b7e,	// (0x0001925c) cam6_indi_pane_t1

0xbfc7,	// (0x0001f6a5) cam6_autofocus_pane_g1

0xbfbf,	// (0x0001f69d) cam6_autofocus_pane_g2

0xbfd7,	// (0x0001f6b5) cam6_autofocus_pane_g3

0xbfcf,	// (0x0001f6ad) cam6_autofocus_pane_g4

0x0003,

0xfbcd,	// (0x000232ab) cam6_autofocus_pane_g

0x5ba4,	// (0x00019282) cam6_timer_pane_g1

0x5bac,	// (0x0001928a) cam6_timer_pane_t1

0x5bba,	// (0x00019298) cam6_zoom_cont_pane

0x5bc2,	// (0x000192a0) cam6_zoom_pane_g1

0x5bca,	// (0x000192a8) cam6_zoom_pane_g2

0xcd81,	// (0x0002045f) cam6_zoom_pane_g3

0x0002,

0xfbd6,	// (0x000232b4) cam6_zoom_pane_g

0x465a,	// (0x00017d38) cam6_battery_pane_g1

0x465a,	// (0x00017d38) cam6_battery_pane_g2

0x0001,

0xf756,	// (0x00022e34) cam6_battery_pane_g

0x5bd2,	// (0x000192b0) cam6_zoom_cont_pane_g1

0x5bdb,	// (0x000192b9) cam6_zoom_cont_pane_g2

0x5be4,	// (0x000192c2) cam6_zoom_cont_pane_g3

0x0002,

0xfbdd,	// (0x000232bb) cam6_zoom_cont_pane_g

0xcd9e,	// (0x0002047c) cam6_mode_pane_cp_ParamLimits

0xcd9e,	// (0x0002047c) cam6_mode_pane_cp

0xcdb2,	// (0x00020490) cam6_zoom_pane_cp_ParamLimits

0xcdb2,	// (0x00020490) cam6_zoom_pane_cp

0xcdc8,	// (0x000204a6) vid6_image_uncrop_cif_pane_ParamLimits

0xcdc8,	// (0x000204a6) vid6_image_uncrop_cif_pane

0xcdea,	// (0x000204c8) vid6_image_uncrop_nhd_pane_ParamLimits

0xcdea,	// (0x000204c8) vid6_image_uncrop_nhd_pane

0xce01,	// (0x000204df) vid6_image_uncrop_vga_pane_ParamLimits

0xce01,	// (0x000204df) vid6_image_uncrop_vga_pane

0xce18,	// (0x000204f6) vid6_image_uncrop_wvga_pane_ParamLimits

0xce18,	// (0x000204f6) vid6_image_uncrop_wvga_pane

0xce2f,	// (0x0002050d) vid6_indi_pane_ParamLimits

0xce2f,	// (0x0002050d) vid6_indi_pane

0x554f,	// (0x00018c2d) bg_tb_trans_pane_cp09_ParamLimits

0x554f,	// (0x00018c2d) bg_tb_trans_pane_cp09

0x5bf8,	// (0x000192d6) cam6_battery_pane_cp_ParamLimits

0x5bf8,	// (0x000192d6) cam6_battery_pane_cp

0x5c04,	// (0x000192e2) vid6_indi_pane_g1_ParamLimits

0x5c04,	// (0x000192e2) vid6_indi_pane_g1

0x5c16,	// (0x000192f4) vid6_indi_pane_g2_ParamLimits

0x5c16,	// (0x000192f4) vid6_indi_pane_g2

0x5c28,	// (0x00019306) vid6_indi_pane_g3_ParamLimits

0x5c28,	// (0x00019306) vid6_indi_pane_g3

0x5c3d,	// (0x0001931b) vid6_indi_pane_g4_ParamLimits

0x5c3d,	// (0x0001931b) vid6_indi_pane_g4

0x5c52,	// (0x00019330) vid6_indi_pane_g5_ParamLimits

0x5c52,	// (0x00019330) vid6_indi_pane_g5

0x0004,

0xfbe4,	// (0x000232c2) vid6_indi_pane_g_ParamLimits

0xfbe4,	// (0x000232c2) vid6_indi_pane_g

0x5c6c,	// (0x0001934a) vid6_indi_pane_t1_ParamLimits

0x5c6c,	// (0x0001934a) vid6_indi_pane_t1

0x5c82,	// (0x00019360) vid6_indi_pane_t2_ParamLimits

0x5c82,	// (0x00019360) vid6_indi_pane_t2

0x5caa,	// (0x00019388) vid6_indi_pane_t3_ParamLimits

0x5caa,	// (0x00019388) vid6_indi_pane_t3

0x5cd2,	// (0x000193b0) vid6_indi_pane_t4_ParamLimits

0x5cd2,	// (0x000193b0) vid6_indi_pane_t4

0x0003,

0xfbef,	// (0x000232cd) vid6_indi_pane_t_ParamLimits

0xfbef,	// (0x000232cd) vid6_indi_pane_t

0x5cf6,	// (0x000193d4) wait_bar_pane_cp08

0xce4f,	// (0x0002052d) main_cset_text2_pane_t1_ParamLimits

0xce4f,	// (0x0002052d) main_cset_text2_pane_t1

0xcd89,	// (0x00020467) listscroll_gen_pane_cp06_t1_ParamLimits

0xcd89,	// (0x00020467) listscroll_gen_pane_cp06_t1

0x1616,	// (0x00014cf4) main_cam6_set_pane

0x803e,	// (0x0001b71c) bg_tb_trans_pane_cp06_ParamLimits

0x8054,	// (0x0001b732) cam4_indicators_pane_g1_ParamLimits

0x8064,	// (0x0001b742) cam4_indicators_pane_g2_ParamLimits

0xf963,	// (0x00023041) cam4_indicators_pane_g_ParamLimits

0x8084,	// (0x0001b762) cam4_indicators_pane_t1_ParamLimits

0x811c,	// (0x0001b7fa) bg_tb_trans_pane_cp07_ParamLimits

0x8054,	// (0x0001b732) vid4_indicators_pane_g1_ParamLimits

0x812a,	// (0x0001b808) vid4_indicators_pane_g2_ParamLimits

0x813a,	// (0x0001b818) vid4_indicators_pane_g3_ParamLimits

0x814b,	// (0x0001b829) vid4_indicators_pane_g4_ParamLimits

0xf975,	// (0x00023053) vid4_indicators_pane_g_ParamLimits

0x8167,	// (0x0001b845) vid4_indicators_pane_t1_ParamLimits

0x85bc,	// (0x0001bc9a) vid4_progress_pane_g1_ParamLimits

0x85cb,	// (0x0001bca9) vid4_progress_pane_g2_ParamLimits

0x85da,	// (0x0001bcb8) vid4_progress_pane_g3_ParamLimits

0x85e9,	// (0x0001bcc7) vid4_progress_pane_g4_ParamLimits

0xfb20,	// (0x000231fe) vid4_progress_pane_g_ParamLimits

0x8601,	// (0x0001bcdf) vid4_progress_pane_t1_ParamLimits

0x8617,	// (0x0001bcf5) vid4_progress_pane_t2_ParamLimits

0x862c,	// (0x0001bd0a) vid4_progress_pane_t3_ParamLimits

0xfb2b,	// (0x00023209) vid4_progress_pane_t_ParamLimits

0x8641,	// (0x0001bd1f) wait_bar_pane_cp07_ParamLimits

0xce6b,	// (0x00020549) main_cam6_set_pane_g2_ParamLimits

0xce6b,	// (0x00020549) main_cam6_set_pane_g2

0xce77,	// (0x00020555) main_cset6_listscroll_pane_ParamLimits

0xce77,	// (0x00020555) main_cset6_listscroll_pane

0xcea0,	// (0x0002057e) main_cset6_slider_pane_ParamLimits

0xcea0,	// (0x0002057e) main_cset6_slider_pane

0xceac,	// (0x0002058a) main_cset6_text2_pane_ParamLimits

0xceac,	// (0x0002058a) main_cset6_text2_pane

0x5d06,	// (0x000193e4) main_cset6_text_pane

0x53de,	// (0x00018abc) main_cset_list_pane_copy1_ParamLimits

0x53de,	// (0x00018abc) main_cset_list_pane_copy1

0x53ee,	// (0x00018acc) scroll_pane_cp028_copy1

0xcebf,	// (0x0002059d) cset_list_set_pane_copy1

0xc52e,	// (0x0001fc0c) aid_position_infowindow_above_copy1

0xc536,	// (0x0001fc14) aid_position_infowindow_below_copy1

0xcece,	// (0x000205ac) cset_list_set_pane_g1_copy1

0xced6,	// (0x000205b4) cset_list_set_pane_g3_copy1_ParamLimits

0xced6,	// (0x000205b4) cset_list_set_pane_g3_copy1

0xcee5,	// (0x000205c3) cset_list_set_pane_t1_copy1_ParamLimits

0xcee5,	// (0x000205c3) cset_list_set_pane_t1_copy1

0x1669,	// (0x00014d47) list_highlight_pane_cp021_copy1_ParamLimits

0x1669,	// (0x00014d47) list_highlight_pane_cp021_copy1

0x5d0e,	// (0x000193ec) cset6_slider_pane_ParamLimits

0x5d0e,	// (0x000193ec) cset6_slider_pane

0x5d3a,	// (0x00019418) main_cset6_slider_pane_g1_ParamLimits

0x5d3a,	// (0x00019418) main_cset6_slider_pane_g1

0xcefa,	// (0x000205d8) main_cset6_slider_pane_g2_ParamLimits

0xcefa,	// (0x000205d8) main_cset6_slider_pane_g2

0x5403,	// (0x00018ae1) main_cset6_slider_pane_g3_ParamLimits

0x5403,	// (0x00018ae1) main_cset6_slider_pane_g3

0xcf22,	// (0x00020600) main_cset6_slider_pane_g4_ParamLimits

0xcf22,	// (0x00020600) main_cset6_slider_pane_g4

0xcf2e,	// (0x0002060c) main_cset6_slider_pane_g5_ParamLimits

0xcf2e,	// (0x0002060c) main_cset6_slider_pane_g5

0x5403,	// (0x00018ae1) main_cset6_slider_pane_g7_ParamLimits

0x5403,	// (0x00018ae1) main_cset6_slider_pane_g7

0x540f,	// (0x00018aed) main_cset6_slider_pane_g8_ParamLimits

0x540f,	// (0x00018aed) main_cset6_slider_pane_g8

0xcf3a,	// (0x00020618) main_cset6_slider_pane_g9_ParamLimits

0xcf3a,	// (0x00020618) main_cset6_slider_pane_g9

0xcf46,	// (0x00020624) main_cset6_slider_pane_g10_ParamLimits

0xcf46,	// (0x00020624) main_cset6_slider_pane_g10

0xcf22,	// (0x00020600) main_cset6_slider_pane_g11_ParamLimits

0xcf22,	// (0x00020600) main_cset6_slider_pane_g11

0xcf52,	// (0x00020630) main_cset6_slider_pane_g12_ParamLimits

0xcf52,	// (0x00020630) main_cset6_slider_pane_g12

0xcf5e,	// (0x0002063c) main_cset6_slider_pane_g13_ParamLimits

0xcf5e,	// (0x0002063c) main_cset6_slider_pane_g13

0xcf6a,	// (0x00020648) main_cset6_slider_pane_g14_ParamLimits

0xcf6a,	// (0x00020648) main_cset6_slider_pane_g14

0xcf76,	// (0x00020654) main_cset6_slider_pane_g15_ParamLimits

0xcf76,	// (0x00020654) main_cset6_slider_pane_g15

0xcf2e,	// (0x0002060c) main_cset6_slider_pane_g16_ParamLimits

0xcf2e,	// (0x0002060c) main_cset6_slider_pane_g16

0xcf8e,	// (0x0002066c) main_cset6_slider_pane_g17_ParamLimits

0xcf8e,	// (0x0002066c) main_cset6_slider_pane_g17

0x0011,

0xfbf8,	// (0x000232d6) main_cset6_slider_pane_g_ParamLimits

0xfbf8,	// (0x000232d6) main_cset6_slider_pane_g

0x5d62,	// (0x00019440) main_cset6_slider_pane_t1_ParamLimits

0x5d62,	// (0x00019440) main_cset6_slider_pane_t1

0xcf9a,	// (0x00020678) main_cset6_slider_pane_t2_ParamLimits

0xcf9a,	// (0x00020678) main_cset6_slider_pane_t2

0x5da3,	// (0x00019481) main_cset6_slider_pane_t3_ParamLimits

0x5da3,	// (0x00019481) main_cset6_slider_pane_t3

0xcfc5,	// (0x000206a3) main_cset6_slider_pane_t4_ParamLimits

0xcfc5,	// (0x000206a3) main_cset6_slider_pane_t4

0x5dce,	// (0x000194ac) main_cset6_slider_pane_t5_ParamLimits

0x5dce,	// (0x000194ac) main_cset6_slider_pane_t5

0x5df9,	// (0x000194d7) main_cset6_slider_pane_t7_ParamLimits

0x5df9,	// (0x000194d7) main_cset6_slider_pane_t7

0xcff0,	// (0x000206ce) main_cset6_slider_pane_t8_ParamLimits

0xcff0,	// (0x000206ce) main_cset6_slider_pane_t8

0xd014,	// (0x000206f2) main_cset6_slider_pane_t9_ParamLimits

0xd014,	// (0x000206f2) main_cset6_slider_pane_t9

0xd038,	// (0x00020716) main_cset6_slider_pane_t10_ParamLimits

0xd038,	// (0x00020716) main_cset6_slider_pane_t10

0xd05c,	// (0x0002073a) main_cset6_slider_pane_t11_ParamLimits

0xd05c,	// (0x0002073a) main_cset6_slider_pane_t11

0x5e2f,	// (0x0001950d) main_cset6_slider_pane_t14_ParamLimits

0x5e2f,	// (0x0001950d) main_cset6_slider_pane_t14

0x5e68,	// (0x00019546) main_cset6_slider_pane_t15_ParamLimits

0x5e68,	// (0x00019546) main_cset6_slider_pane_t15

0x000b,

0xfc1d,	// (0x000232fb) main_cset6_slider_pane_t_ParamLimits

0xfc1d,	// (0x000232fb) main_cset6_slider_pane_t

0x550b,	// (0x00018be9) cset_slider_pane_g1_copy1

0x5514,	// (0x00018bf2) cset_slider_pane_g2_copy1

0x551d,	// (0x00018bfb) cset_slider_pane_g3_copy1

0x1616,	// (0x00014cf4) bg_popup_sub_pane_cp011_copy1

0x5614,	// (0x00018cf2) main_cset_text_pane_g1_copy1

0x561c,	// (0x00018cfa) main_cset_text_pane_t1_copy1

0x562a,	// (0x00018d08) main_cset_text_pane_t2_copy1

0x5638,	// (0x00018d16) main_cset_text_pane_t3_copy1

0x5646,	// (0x00018d24) main_cset_text_pane_t4_copy1

0x5654,	// (0x00018d32) main_cset_text_pane_t5_copy1

0x5662,	// (0x00018d40) main_cset_text_pane_t6_copy1

0x5670,	// (0x00018d4e) main_cset_text_pane_t7_copy1

0xd080,	// (0x0002075e) main_cset_text2_pane_t1_copy1

0x1616,	// (0x00014cf4) main_ncimui_pane

0xab6c,	// (0x0001e24a) popup_query_ncimui_window_ParamLimits

0xab6c,	// (0x0001e24a) popup_query_ncimui_window

0x492a,	// (0x00018008) field_cale_ev2_pane_g4_ParamLimits

0x492a,	// (0x00018008) field_cale_ev2_pane_g4

0xbe3e,	// (0x0001f51c) cell_video_dialer_keypad_pane_g2_ParamLimits

0xbe3e,	// (0x0001f51c) cell_video_dialer_keypad_pane_g2

0x0001,

0xf90a,	// (0x00022fe8) cell_video_dialer_keypad_pane_g_ParamLimits

0xf90a,	// (0x00022fe8) cell_video_dialer_keypad_pane_g

0xbe56,	// (0x0001f534) cell_video_dialer_keypad_pane_t1

0x1616,	// (0x00014cf4) bg_popup_window_pane_cp012

0x295b,	// (0x00016039) heading_pane_cp06

0x5f8a,	// (0x00019668) ncim_query_content_pane

0x1616,	// (0x00014cf4) bg_popup_heading_pane_cp01

0x5f92,	// (0x00019670) ncim_heading_pane_t1

0x5fa0,	// (0x0001967e) ncim_indicator_popup_pane

0x5fb2,	// (0x00019690) ncim_query_button_pane

0x5fc6,	// (0x000196a4) ncim_query_content_pane_t1

0x5fd8,	// (0x000196b6) ncim_query_content_pane_t2

0x0005,

0xfc5c,	// (0x0002333a) ncim_query_content_pane_t

0x6012,	// (0x000196f0) ncim_query_list_pane

0x6024,	// (0x00019702) ncim_query_popup_pane

0x5fa0,	// (0x0001967e) ncim_indicator_popup_pane_ParamLimits

0xd161,	// (0x0002083f) ncim_query_content_pane_g1_ParamLimits

0xd161,	// (0x0002083f) ncim_query_content_pane_g1

0x5fc6,	// (0x000196a4) ncim_query_content_pane_t1_ParamLimits

0x5fd8,	// (0x000196b6) ncim_query_content_pane_t2_ParamLimits

0xd16d,	// (0x0002084b) ncim_query_content_pane_t3_ParamLimits

0xd16d,	// (0x0002084b) ncim_query_content_pane_t3

0xd18a,	// (0x00020868) ncim_query_content_pane_t4_ParamLimits

0xd18a,	// (0x00020868) ncim_query_content_pane_t4

0xd1a7,	// (0x00020885) ncim_query_content_pane_t5_ParamLimits

0xd1a7,	// (0x00020885) ncim_query_content_pane_t5

0x5fea,	// (0x000196c8) ncim_query_content_pane_t6_ParamLimits

0x5fea,	// (0x000196c8) ncim_query_content_pane_t6

0xfc5c,	// (0x0002333a) ncim_query_content_pane_t_ParamLimits

0x6012,	// (0x000196f0) ncim_query_list_pane_ParamLimits

0x6024,	// (0x00019702) ncim_query_popup_pane_ParamLimits

0x6038,	// (0x00019716) wait_bar_pane_cp04

0x1616,	// (0x00014cf4) input_focus_pane_cp011

0x6040,	// (0x0001971e) ncim_query_popup_pane_t1

0x604e,	// (0x0001972c) ncim_list_query_list_pane_ParamLimits

0x604e,	// (0x0001972c) ncim_list_query_list_pane

0x1616,	// (0x00014cf4) bg_button_pane_cp027

0x6061,	// (0x0001973f) ncim_query_button_pane_g1

0x1616,	// (0x00014cf4) list_highlight_pane_cp012

0x606b,	// (0x00019749) ncim_list_query_list_pane_g1

0x6073,	// (0x00019751) ncim_list_query_list_pane_t1

0x8074,	// (0x0001b752) cam4_indicators_pane_g3_ParamLimits

0x8074,	// (0x0001b752) cam4_indicators_pane_g3

0x8157,	// (0x0001b835) vid4_indicators_pane_g5_ParamLimits

0x8157,	// (0x0001b835) vid4_indicators_pane_g5

0x85f5,	// (0x0001bcd3) vid4_progress_pane_g5_ParamLimits

0x85f5,	// (0x0001bcd3) vid4_progress_pane_g5

0xd0ab,	// (0x00020789) main_ncimui_pane_g1

0xd0f1,	// (0x000207cf) ncimui_group_query_pane_ParamLimits

0xd0f1,	// (0x000207cf) ncimui_group_query_pane

0xd125,	// (0x00020803) ncimui_list_pane_ParamLimits

0xd125,	// (0x00020803) ncimui_list_pane

0xd13d,	// (0x0002081b) ncimui_text_pane_ParamLimits

0xd13d,	// (0x0002081b) ncimui_text_pane

0xd1c4,	// (0x000208a2) ncimui_text_pane_t1_ParamLimits

0xd1c4,	// (0x000208a2) ncimui_text_pane_t1

0x6081,	// (0x0001975f) ncimui_list_single_graphic_pane_ParamLimits

0x6081,	// (0x0001975f) ncimui_list_single_graphic_pane

0xd1e2,	// (0x000208c0) ncimui_query_pane_ParamLimits

0xd1e2,	// (0x000208c0) ncimui_query_pane

0x1616,	// (0x00014cf4) list_highlight_pane_cp013

0x608e,	// (0x0001976c) ncim_list_query_list_pane_t1_copy1

0x609c,	// (0x0001977a) ncim_list_single_graphic_pane_g1

0x60a4,	// (0x00019782) ncim_query_button_pane_cp01

0x60ac,	// (0x0001978a) ncim_query_entry_pane_ParamLimits

0x60ac,	// (0x0001978a) ncim_query_entry_pane

0x60bc,	// (0x0001979a) ncimui_query_pane_g1

0x60c4,	// (0x000197a2) ncimui_query_pane_t1_ParamLimits

0x60c4,	// (0x000197a2) ncimui_query_pane_t1

0x1616,	// (0x00014cf4) input_focus_pane_cp012

0x6040,	// (0x0001971e) ncim_query_entry_pane_t1

0x1dd4,	// (0x000154b2) main_im_pane_ParamLimits

0x1669,	// (0x00014d47) main_mobtv_pane_ParamLimits

0x1669,	// (0x00014d47) main_mobtv_pane

0xcf3a,	// (0x00020618) main_cset6_slider_pane_g18_ParamLimits

0xcf3a,	// (0x00020618) main_cset6_slider_pane_g18

0xcf5e,	// (0x0002063c) main_cset6_slider_pane_g19_ParamLimits

0xcf5e,	// (0x0002063c) main_cset6_slider_pane_g19

0x52ab,	// (0x00018989) bg_main_mobtv_pane_ParamLimits

0x52ab,	// (0x00018989) bg_main_mobtv_pane

0xd1f2,	// (0x000208d0) main_mobtv_info_pane

0xd1fb,	// (0x000208d9) main_mobtv_loading_pane_ParamLimits

0xd1fb,	// (0x000208d9) main_mobtv_loading_pane

0x60da,	// (0x000197b8) main_mobtv_pg_channel_list_pane

0x60e4,	// (0x000197c2) main_mobtv_pg_hdr_pane

0xd208,	// (0x000208e6) main_mobtv_programe_curr_pane_ParamLimits

0xd208,	// (0x000208e6) main_mobtv_programe_curr_pane

0xd215,	// (0x000208f3) main_mobtv_programe_next_pane_ParamLimits

0xd215,	// (0x000208f3) main_mobtv_programe_next_pane

0x60ed,	// (0x000197cb) popup_mobtv_noti_window

0x465a,	// (0x00017d38) main_tv_pg_hdr_pane_g1

0x60f5,	// (0x000197d3) main_tv_pg_hdr_pane_g2

0x60fd,	// (0x000197db) main_tv_pg_hdr_pane_g3

0x6105,	// (0x000197e3) main_tv_pg_hdr_pane_g4

0x610d,	// (0x000197eb) main_tv_pg_hdr_pane_g5

0x6115,	// (0x000197f3) main_tv_pg_hdr_pane_g6

0x611d,	// (0x000197fb) main_tv_pg_hdr_pane_g7

0x6125,	// (0x00019803) main_tv_pg_hdr_pane_g8

0x612d,	// (0x0001980b) main_tv_pg_hdr_pane_g9

0x6135,	// (0x00019813) main_tv_pg_hdr_pane_g10

0x613f,	// (0x0001981d) main_tv_pg_hdr_pane_g11

0x000a,

0xfc69,	// (0x00023347) main_tv_pg_hdr_pane_g

0x6149,	// (0x00019827) main_tv_pg_hdr_pane_t1

0x6157,	// (0x00019835) main_tv_pg_hdr_pane_t2

0x6165,	// (0x00019843) main_tv_pg_hdr_pane_t3

0x6173,	// (0x00019851) main_tv_pg_hdr_pane_t4

0x6181,	// (0x0001985f) main_tv_pg_hdr_pane_t5

0x0004,

0xfc80,	// (0x0002335e) main_tv_pg_hdr_pane_t

0x618f,	// (0x0001986d) single_mobtv_pg_channel_pane_ParamLimits

0x618f,	// (0x0001986d) single_mobtv_pg_channel_pane

0x61a1,	// (0x0001987f) single_mobtv_pg_channel_table_pane

0x61aa,	// (0x00019888) single_mobtv_pg_channel_thumb_pane

0x61b3,	// (0x00019891) single_tv_pg_channel_pane_g1

0x61bc,	// (0x0001989a) single_tv_pg_channel_pane_g2

0x0001,

0xfc8b,	// (0x00023369) single_tv_pg_channel_pane_g

0x4889,	// (0x00017f67) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x4889,	// (0x00017f67) bg_single_mobtv_pg_channel_thumb_pane

0x61c5,	// (0x000198a3) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x61c5,	// (0x000198a3) single_mobtv_pg_channel_thumb_pane_g1

0x61d3,	// (0x000198b1) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x61d3,	// (0x000198b1) single_mobtv_pg_channel_thumb_pane_g2

0x61df,	// (0x000198bd) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x61df,	// (0x000198bd) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc90,	// (0x0002336e) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc90,	// (0x0002336e) single_mobtv_pg_channel_thumb_pane_g

0x61eb,	// (0x000198c9) single_mobtv_pg_channel_thumb_pane_t1

0x61f9,	// (0x000198d7) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc97,	// (0x00023375) single_mobtv_pg_channel_thumb_pane_t

0x465a,	// (0x00017d38) bg_single_mobtv_pg_channel_table_pane_g1

0x465a,	// (0x00017d38) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf756,	// (0x00022e34) bg_single_mobtv_pg_channel_table_pane_g

0x6207,	// (0x000198e5) single_mobtv_pg_channel_table_pane_t1

0x6215,	// (0x000198f3) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc9c,	// (0x0002337a) single_mobtv_pg_channel_table_pane_t

0xd22a,	// (0x00020908) main_mobtv_info_pane_g1_ParamLimits

0xd22a,	// (0x00020908) main_mobtv_info_pane_g1

0xd246,	// (0x00020924) main_mobtv_info_pane_t1_ParamLimits

0xd246,	// (0x00020924) main_mobtv_info_pane_t1

0xd2ac,	// (0x0002098a) main_mobtv_info_pane_t2_ParamLimits

0xd2ac,	// (0x0002098a) main_mobtv_info_pane_t2

0x0002,

0xfca6,	// (0x00023384) main_mobtv_info_pane_t_ParamLimits

0xfca6,	// (0x00023384) main_mobtv_info_pane_t

0xd32f,	// (0x00020a0d) wait_bar_pane_cp05

0xd33f,	// (0x00020a1d) main_mobtv_loading_pane_g1_ParamLimits

0xd33f,	// (0x00020a1d) main_mobtv_loading_pane_g1

0xd34b,	// (0x00020a29) main_mobtv_loading_pane_g2_ParamLimits

0xd34b,	// (0x00020a29) main_mobtv_loading_pane_g2

0xd357,	// (0x00020a35) main_mobtv_loading_pane_g3_ParamLimits

0xd357,	// (0x00020a35) main_mobtv_loading_pane_g3

0x0002,

0xfcad,	// (0x0002338b) main_mobtv_loading_pane_g_ParamLimits

0xfcad,	// (0x0002338b) main_mobtv_loading_pane_g

0x6223,	// (0x00019901) main_mobtv_loading_pane_t1_ParamLimits

0x6223,	// (0x00019901) main_mobtv_loading_pane_t1

0x623b,	// (0x00019919) main_mobtv_loading_pane_t2_ParamLimits

0x623b,	// (0x00019919) main_mobtv_loading_pane_t2

0x0001,

0xfcb4,	// (0x00023392) main_mobtv_loading_pane_t_ParamLimits

0xfcb4,	// (0x00023392) main_mobtv_loading_pane_t

0xd363,	// (0x00020a41) wait_bar_pane_cp06_ParamLimits

0xd363,	// (0x00020a41) wait_bar_pane_cp06

0x625f,	// (0x0001993d) main_mobtv_programe_curr_pane_t1

0x626d,	// (0x0001994b) main_mobtv_programe_curr_pane_t2

0x0001,

0xfcb9,	// (0x00023397) main_mobtv_programe_curr_pane_t

0x627b,	// (0x00019959) main_mobtv_programe_next_pane_t1

0x6289,	// (0x00019967) main_mobtv_programe_next_pane_t2

0x6297,	// (0x00019975) main_mobtv_programe_next_pane_t3

0x0002,

0xfcbe,	// (0x0002339c) main_mobtv_programe_next_pane_t

0x1616,	// (0x00014cf4) bg_popup_mobtv_noti_window_pane

0x62a5,	// (0x00019983) popup_mobtv_noti_window_g1

0x62ad,	// (0x0001998b) popup_mobtv_noti_window_t1

0x62bb,	// (0x00019999) popup_mobtv_noti_window_t2

0x0001,

0xfcc5,	// (0x000233a3) popup_mobtv_noti_window_t

0x465a,	// (0x00017d38) bg_popup_mobtv_noti_window_pane_g1

0x1616,	// (0x00014cf4) sc_clock_pane

0x1616,	// (0x00014cf4) main_fs_bigclock_pane

0xcc06,	// (0x000202e4) blid2_tripm_pane_t4_ParamLimits

0xcc06,	// (0x000202e4) blid2_tripm_pane_t4

0xd36f,	// (0x00020a4d) sc_clock_pane_g1_ParamLimits

0xd36f,	// (0x00020a4d) sc_clock_pane_g1

0xd37d,	// (0x00020a5b) sc_clock_pane_t1_ParamLimits

0xd37d,	// (0x00020a5b) sc_clock_pane_t1

0xd390,	// (0x00020a6e) sc_clock_pane_t2_ParamLimits

0xd390,	// (0x00020a6e) sc_clock_pane_t2

0xd3a2,	// (0x00020a80) sc_clock_pane_t3_ParamLimits

0xd3a2,	// (0x00020a80) sc_clock_pane_t3

0x0004,

0xfcca,	// (0x000233a8) sc_clock_pane_t_ParamLimits

0xfcca,	// (0x000233a8) sc_clock_pane_t

0xe8b9,	// (0x00021f97) main_fs_bigclock_indicator_pane_ParamLimits

0xe8b9,	// (0x00021f97) main_fs_bigclock_indicator_pane

0xd41a,	// (0x00020af8) main_fs_bigclock_pane_g1_ParamLimits

0xd41a,	// (0x00020af8) main_fs_bigclock_pane_g1

0xe8c5,	// (0x00021fa3) main_fs_bigclock_pane_t1_ParamLimits

0xe8c5,	// (0x00021fa3) main_fs_bigclock_pane_t1

0xe8d7,	// (0x00021fb5) main_fs_bigclock_pane_t2_ParamLimits

0xe8d7,	// (0x00021fb5) main_fs_bigclock_pane_t2

0xe8e9,	// (0x00021fc7) main_fs_bigclock_pane_t3_ParamLimits

0xe8e9,	// (0x00021fc7) main_fs_bigclock_pane_t3

0x0002,

0xfebf,	// (0x0002359d) main_fs_bigclock_pane_t_ParamLimits

0xfebf,	// (0x0002359d) main_fs_bigclock_pane_t

0xe8fb,	// (0x00021fd9) main_fs_bigclock_indicator_pane_g1

0x5fba,	// (0x00019698) ncim_query_content_pane_g2_ParamLimits

0x5fba,	// (0x00019698) ncim_query_content_pane_g2

0x0001,

0xfc57,	// (0x00023335) ncim_query_content_pane_g_ParamLimits

0xfc57,	// (0x00023335) ncim_query_content_pane_g

0xd3b4,	// (0x00020a92) sc_clock_pane_t4_ParamLimits

0xd3b4,	// (0x00020a92) sc_clock_pane_t4

0x1669,	// (0x00014d47) main_radioblah_pane

0x51e4,	// (0x000188c2) cell_call4_button_pane_t1_copy1_ParamLimits

0x51e4,	// (0x000188c2) cell_call4_button_pane_t1_copy1

0xd0b3,	// (0x00020791) main_ncimui_pane_t1_ParamLimits

0xd0b3,	// (0x00020791) main_ncimui_pane_t1

0xd0c5,	// (0x000207a3) main_ncimui_pane_t2_ParamLimits

0xd0c5,	// (0x000207a3) main_ncimui_pane_t2

0x0002,

0xfc50,	// (0x0002332e) main_ncimui_pane_t_ParamLimits

0xfc50,	// (0x0002332e) main_ncimui_pane_t

0x63e5,	// (0x00019ac3) main_radioblah_anim_pane_ParamLimits

0x63e5,	// (0x00019ac3) main_radioblah_anim_pane

0x63f6,	// (0x00019ad4) main_radioblah_info_pane_ParamLimits

0x63f6,	// (0x00019ad4) main_radioblah_info_pane

0x640a,	// (0x00019ae8) main_radioblah_pane_t1_ParamLimits

0x640a,	// (0x00019ae8) main_radioblah_pane_t1

0x6426,	// (0x00019b04) main_radioblah_pane_t2_ParamLimits

0x6426,	// (0x00019b04) main_radioblah_pane_t2

0x0003,

0xfceb,	// (0x000233c9) main_radioblah_pane_t_ParamLimits

0xfceb,	// (0x000233c9) main_radioblah_pane_t

0xd462,	// (0x00020b40) main_radioblah_rocker_ctrl_pane_ParamLimits

0xd462,	// (0x00020b40) main_radioblah_rocker_ctrl_pane

0x646e,	// (0x00019b4c) main_radioblah_info_pane_t1_ParamLimits

0x646e,	// (0x00019b4c) main_radioblah_info_pane_t1

0xd4a7,	// (0x00020b85) main_radioblah_info_pane_t2_ParamLimits

0xd4a7,	// (0x00020b85) main_radioblah_info_pane_t2

0x0003,

0xfcf4,	// (0x000233d2) main_radioblah_info_pane_t_ParamLimits

0xfcf4,	// (0x000233d2) main_radioblah_info_pane_t

0x465a,	// (0x00017d38) main_radioblah_rocker_ctrl_pane_g1

0xd54f,	// (0x00020c2d) main_radioblah_rocker_ctrl_pane_g2

0xd557,	// (0x00020c35) main_radioblah_rocker_ctrl_pane_g3

0xd55f,	// (0x00020c3d) main_radioblah_rocker_ctrl_pane_g4

0xd567,	// (0x00020c45) main_radioblah_rocker_ctrl_pane_g5

0xd56f,	// (0x00020c4d) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcfd,	// (0x000233db) main_radioblah_rocker_ctrl_pane_g

0xd080,	// (0x0002075e) main_cset_text2_pane_t1_copy1_ParamLimits

0x7fae,	// (0x0001b68c) cam4_image_uncrop_qvga_pane

0x80dc,	// (0x0001b7ba) vid4_image_uncrop_qcif_pane

0x8684,	// (0x0001bd62) cam6_image_uncrop_qvga_pane_ParamLimits

0x8684,	// (0x0001bd62) cam6_image_uncrop_qvga_pane

0x5bec,	// (0x000192ca) vid6_image_uncrop_qcif_pane_ParamLimits

0x5bec,	// (0x000192ca) vid6_image_uncrop_qcif_pane

0x1616,	// (0x00014cf4) bg_popup_preview_window_pane_cp03

0x5f6c,	// (0x0001964a) list_cset_text2_pane

0x5f74,	// (0x00019652) main_cset6_text2_pane_g1

0x5f7c,	// (0x0001965a) main_cset6_text2_pane_t1

0xd577,	// (0x00020c55) list_cset_text2_pane_t1_ParamLimits

0xd577,	// (0x00020c55) list_cset_text2_pane_t1

0x1669,	// (0x00014d47) main_radioblah_pane_ParamLimits

0xd31d,	// (0x000209fb) main_mobtv_info_pane_t3_ParamLimits

0xd31d,	// (0x000209fb) main_mobtv_info_pane_t3

0xd450,	// (0x00020b2e) main_radioblah_pane_g1

0xd47b,	// (0x00020b59) main_radioblah_info_pane_g1

0xd4f6,	// (0x00020bd4) main_radioblah_info_pane_t3_ParamLimits

0xd4f6,	// (0x00020bd4) main_radioblah_info_pane_t3

0x9c4d,	// (0x0001d32b) highlight_cell_cale_month_pane_ParamLimits

0x9c4d,	// (0x0001d32b) highlight_cell_cale_month_pane

0x1616,	// (0x00014cf4) main_phob_fisheye_pane

0x49d3,	// (0x000180b1) scroll_pane_cp0031_ParamLimits

0x49d3,	// (0x000180b1) scroll_pane_cp0031

0x5cf6,	// (0x000193d4) wait_bar_pane_cp08_ParamLimits

0xcebf,	// (0x0002059d) cset_list_set_pane_copy1_ParamLimits

0x64a8,	// (0x00019b86) highlight_cell_cale_month_pane_g1

0xd58e,	// (0x00020c6c) highlight_cell_cale_month_pane_t1

0x64b0,	// (0x00019b8e) list_gen_pane_cp01

0x53ee,	// (0x00018acc) scroll_pane_01

0x64b9,	// (0x00019b97) list_single_double_fisheye_pane

0xd59c,	// (0x00020c7a) list_double_fisheye_pane_g1_ParamLimits

0xd59c,	// (0x00020c7a) list_double_fisheye_pane_g1

0xd5a8,	// (0x00020c86) list_double_fisheye_pane_g2_ParamLimits

0xd5a8,	// (0x00020c86) list_double_fisheye_pane_g2

0xd5bc,	// (0x00020c9a) list_double_fisheye_pane_g3_ParamLimits

0xd5bc,	// (0x00020c9a) list_double_fisheye_pane_g3

0x0004,

0xfd0a,	// (0x000233e8) list_double_fisheye_pane_g_ParamLimits

0xfd0a,	// (0x000233e8) list_double_fisheye_pane_g

0xd5e5,	// (0x00020cc3) list_double_fisheye_pane_t1_ParamLimits

0xd5e5,	// (0x00020cc3) list_double_fisheye_pane_t1

0xd600,	// (0x00020cde) list_double_fisheye_pane_t2_ParamLimits

0xd600,	// (0x00020cde) list_double_fisheye_pane_t2

0x0001,

0xfd15,	// (0x000233f3) list_double_fisheye_pane_t_ParamLimits

0xfd15,	// (0x000233f3) list_double_fisheye_pane_t

0x1616,	// (0x00014cf4) main_call5_pane

0xd3da,	// (0x00020ab8) sc_swipe_pane_ParamLimits

0xd3da,	// (0x00020ab8) sc_swipe_pane

0xd62e,	// (0x00020d0c) call5_image_pane_ParamLimits

0xd62e,	// (0x00020d0c) call5_image_pane

0xd63a,	// (0x00020d18) call5_swipe_1_pane_ParamLimits

0xd63a,	// (0x00020d18) call5_swipe_1_pane

0xd646,	// (0x00020d24) call5_swipe_2_pane_ParamLimits

0xd646,	// (0x00020d24) call5_swipe_2_pane

0xd65e,	// (0x00020d3c) popup_call5_audio_first_window_ParamLimits

0xd65e,	// (0x00020d3c) popup_call5_audio_first_window

0x4889,	// (0x00017f67) call5_swipe_1_pane_g1_ParamLimits

0x4889,	// (0x00017f67) call5_swipe_1_pane_g1

0xd66a,	// (0x00020d48) call5_swipe_1_pane_g2_ParamLimits

0xd66a,	// (0x00020d48) call5_swipe_1_pane_g2

0x0001,

0xfd1a,	// (0x000233f8) call5_swipe_1_pane_g_ParamLimits

0xfd1a,	// (0x000233f8) call5_swipe_1_pane_g

0xd676,	// (0x00020d54) call5_swipe_1_pane_t1_ParamLimits

0xd676,	// (0x00020d54) call5_swipe_1_pane_t1

0x4889,	// (0x00017f67) call5_swipe_2_pane_g1_ParamLimits

0x4889,	// (0x00017f67) call5_swipe_2_pane_g1

0xd68b,	// (0x00020d69) call5_swipe_2_pane_g2_ParamLimits

0xd68b,	// (0x00020d69) call5_swipe_2_pane_g2

0x0001,

0xfd1f,	// (0x000233fd) call5_swipe_2_pane_g_ParamLimits

0xfd1f,	// (0x000233fd) call5_swipe_2_pane_g

0xd697,	// (0x00020d75) call5_swipe_2_pane_t1_ParamLimits

0xd697,	// (0x00020d75) call5_swipe_2_pane_t1

0xd6ac,	// (0x00020d8a) sc_swipe_pane_g1_ParamLimits

0xd6ac,	// (0x00020d8a) sc_swipe_pane_g1

0xd6b9,	// (0x00020d97) sc_swipe_pane_g2_ParamLimits

0xd6b9,	// (0x00020d97) sc_swipe_pane_g2

0x0001,

0xfd24,	// (0x00023402) sc_swipe_pane_g_ParamLimits

0xfd24,	// (0x00023402) sc_swipe_pane_g

0xd6c5,	// (0x00020da3) sc_swipe_pane_t1_ParamLimits

0xd6c5,	// (0x00020da3) sc_swipe_pane_t1

0x1616,	// (0x00014cf4) main_cmail_launcher_pane

0xd6da,	// (0x00020db8) aid_size_cell_cmail_l_ParamLimits

0xd6da,	// (0x00020db8) aid_size_cell_cmail_l

0xd6ea,	// (0x00020dc8) grid_cmail_l_pane_ParamLimits

0xd6ea,	// (0x00020dc8) grid_cmail_l_pane

0xd6f6,	// (0x00020dd4) cell_cmail_l_pane_ParamLimits

0xd6f6,	// (0x00020dd4) cell_cmail_l_pane

0xd708,	// (0x00020de6) cell_cmail_l_pane_g1_ParamLimits

0xd708,	// (0x00020de6) cell_cmail_l_pane_g1

0xd718,	// (0x00020df6) cell_cmail_l_pane_t1_ParamLimits

0xd718,	// (0x00020df6) cell_cmail_l_pane_t1

0xd72e,	// (0x00020e0c) cell_cmail_l_pane_t2_ParamLimits

0xd72e,	// (0x00020e0c) cell_cmail_l_pane_t2

0x0001,

0xfd29,	// (0x00023407) cell_cmail_l_pane_t_ParamLimits

0xfd29,	// (0x00023407) cell_cmail_l_pane_t

0x1669,	// (0x00014d47) grid_highlight_pane_cp018_ParamLimits

0x1669,	// (0x00014d47) grid_highlight_pane_cp018

0x87a7,	// (0x0001be85) main2_pane_ParamLimits

0x87a7,	// (0x0001be85) main2_pane

0x1ed7,	// (0x000155b5) popup_sp_fs_action_menu_bg_pane_g1

0x1edf,	// (0x000155bd) popup_sp_fs_action_menu_bg_pane_g2

0x1ee7,	// (0x000155c5) popup_sp_fs_action_menu_bg_pane_g3

0x1eef,	// (0x000155cd) popup_sp_fs_action_menu_bg_pane_g4

0x1ef7,	// (0x000155d5) popup_sp_fs_action_menu_bg_pane_g5

0x1eff,	// (0x000155dd) popup_sp_fs_action_menu_bg_pane_g6

0x1f07,	// (0x000155e5) popup_sp_fs_action_menu_bg_pane_g7

0x1f0f,	// (0x000155ed) popup_sp_fs_action_menu_bg_pane_g8

0x1f17,	// (0x000155f5) popup_sp_fs_action_menu_bg_pane_g9

0x1f1f,	// (0x000155fd) popup_sp_fs_action_menu_bg_pane_g10

0x1f1f,	// (0x000155fd) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1ef,	// (0x000228cd) popup_sp_fs_action_menu_bg_pane_g

0x20f6,	// (0x000157d4) list_medium_line_x2_t3_g3_g1_ParamLimits

0x20f6,	// (0x000157d4) list_medium_line_x2_t3_g3_g1

0x2102,	// (0x000157e0) list_medium_line_x2_t3_g3_g2_ParamLimits

0x2102,	// (0x000157e0) list_medium_line_x2_t3_g3_g2

0x210e,	// (0x000157ec) list_medium_line_x2_t3_g3_g3_ParamLimits

0x210e,	// (0x000157ec) list_medium_line_x2_t3_g3_g3

0x0002,

0xf29f,	// (0x0002297d) list_medium_line_x2_t3_g3_g_ParamLimits

0xf29f,	// (0x0002297d) list_medium_line_x2_t3_g3_g

0x211a,	// (0x000157f8) list_medium_line_x2_t3_g3_t1_ParamLimits

0x211a,	// (0x000157f8) list_medium_line_x2_t3_g3_t1

0x9186,	// (0x0001c864) list_medium_line_x2_t3_g3_t2_ParamLimits

0x9186,	// (0x0001c864) list_medium_line_x2_t3_g3_t2

0x212f,	// (0x0001580d) list_medium_line_x2_t3_g3_t3_ParamLimits

0x212f,	// (0x0001580d) list_medium_line_x2_t3_g3_t3

0x0002,

0xf2a6,	// (0x00022984) list_medium_line_x2_t3_g3_t_ParamLimits

0xf2a6,	// (0x00022984) list_medium_line_x2_t3_g3_t

0x20f6,	// (0x000157d4) list_medium_line_x2_t3_g2_g1_ParamLimits

0x20f6,	// (0x000157d4) list_medium_line_x2_t3_g2_g1

0x210e,	// (0x000157ec) list_medium_line_x2_t3_g2_g2_ParamLimits

0x210e,	// (0x000157ec) list_medium_line_x2_t3_g2_g2

0x0001,

0xf2ad,	// (0x0002298b) list_medium_line_x2_t3_g2_g_ParamLimits

0xf2ad,	// (0x0002298b) list_medium_line_x2_t3_g2_g

0x2144,	// (0x00015822) list_medium_line_x2_t3_g2_t1_ParamLimits

0x2144,	// (0x00015822) list_medium_line_x2_t3_g2_t1

0x215a,	// (0x00015838) list_medium_line_x2_t3_g2_t2_ParamLimits

0x215a,	// (0x00015838) list_medium_line_x2_t3_g2_t2

0x212f,	// (0x0001580d) list_medium_line_x2_t3_g2_t3_ParamLimits

0x212f,	// (0x0001580d) list_medium_line_x2_t3_g2_t3

0x0002,

0xf2b2,	// (0x00022990) list_medium_line_x2_t3_g2_t_ParamLimits

0xf2b2,	// (0x00022990) list_medium_line_x2_t3_g2_t

0x20f6,	// (0x000157d4) list_medium_line_x2_t4_g4_g1_ParamLimits

0x20f6,	// (0x000157d4) list_medium_line_x2_t4_g4_g1

0x216c,	// (0x0001584a) list_medium_line_x2_t4_g4_g2_ParamLimits

0x216c,	// (0x0001584a) list_medium_line_x2_t4_g4_g2

0x2102,	// (0x000157e0) list_medium_line_x2_t4_g4_g3_ParamLimits

0x2102,	// (0x000157e0) list_medium_line_x2_t4_g4_g3

0x2178,	// (0x00015856) list_medium_line_x2_t4_g4_g4_ParamLimits

0x2178,	// (0x00015856) list_medium_line_x2_t4_g4_g4

0x0003,

0xf2b9,	// (0x00022997) list_medium_line_x2_t4_g4_g_ParamLimits

0xf2b9,	// (0x00022997) list_medium_line_x2_t4_g4_g

0x9198,	// (0x0001c876) list_medium_line_x2_t4_g4_t1_ParamLimits

0x9198,	// (0x0001c876) list_medium_line_x2_t4_g4_t1

0x91b2,	// (0x0001c890) list_medium_line_x2_t4_g4_t2_ParamLimits

0x91b2,	// (0x0001c890) list_medium_line_x2_t4_g4_t2

0x91c7,	// (0x0001c8a5) list_medium_line_x2_t4_g4_t3_ParamLimits

0x91c7,	// (0x0001c8a5) list_medium_line_x2_t4_g4_t3

0x2184,	// (0x00015862) list_medium_line_x2_t4_g4_t4_ParamLimits

0x2184,	// (0x00015862) list_medium_line_x2_t4_g4_t4

0x0003,

0xf2c2,	// (0x000229a0) list_medium_line_x2_t4_g4_t_ParamLimits

0xf2c2,	// (0x000229a0) list_medium_line_x2_t4_g4_t

0x20f6,	// (0x000157d4) list_medium_line_x2_t2_g4_g1_ParamLimits

0x20f6,	// (0x000157d4) list_medium_line_x2_t2_g4_g1

0x216c,	// (0x0001584a) list_medium_line_x2_t2_g4_g2_ParamLimits

0x216c,	// (0x0001584a) list_medium_line_x2_t2_g4_g2

0x2102,	// (0x000157e0) list_medium_line_x2_t2_g4_g3_ParamLimits

0x2102,	// (0x000157e0) list_medium_line_x2_t2_g4_g3

0x210e,	// (0x000157ec) list_medium_line_x2_t2_g4_g4_ParamLimits

0x210e,	// (0x000157ec) list_medium_line_x2_t2_g4_g4

0x0003,

0xf329,	// (0x00022a07) list_medium_line_x2_t2_g4_g_ParamLimits

0xf329,	// (0x00022a07) list_medium_line_x2_t2_g4_g

0x2484,	// (0x00015b62) list_medium_line_x2_t2_g4_t1_ParamLimits

0x2484,	// (0x00015b62) list_medium_line_x2_t2_g4_t1

0x212f,	// (0x0001580d) list_medium_line_x2_t2_g4_t2_ParamLimits

0x212f,	// (0x0001580d) list_medium_line_x2_t2_g4_t2

0x0001,

0xf332,	// (0x00022a10) list_medium_line_x2_t2_g4_t_ParamLimits

0xf332,	// (0x00022a10) list_medium_line_x2_t2_g4_t

0x20f6,	// (0x000157d4) list_medium_line_x2_t2_g3_g1_ParamLimits

0x20f6,	// (0x000157d4) list_medium_line_x2_t2_g3_g1

0x2102,	// (0x000157e0) list_medium_line_x2_t2_g3_g2_ParamLimits

0x2102,	// (0x000157e0) list_medium_line_x2_t2_g3_g2

0x210e,	// (0x000157ec) list_medium_line_x2_t2_g3_g3_ParamLimits

0x210e,	// (0x000157ec) list_medium_line_x2_t2_g3_g3

0x0002,

0xf29f,	// (0x0002297d) list_medium_line_x2_t2_g3_g_ParamLimits

0xf29f,	// (0x0002297d) list_medium_line_x2_t2_g3_g

0x2499,	// (0x00015b77) list_medium_line_x2_t2_g3_t1_ParamLimits

0x2499,	// (0x00015b77) list_medium_line_x2_t2_g3_t1

0x212f,	// (0x0001580d) list_medium_line_x2_t2_g3_t2_ParamLimits

0x212f,	// (0x0001580d) list_medium_line_x2_t2_g3_t2

0x0001,

0xf337,	// (0x00022a15) list_medium_line_x2_t2_g3_t_ParamLimits

0xf337,	// (0x00022a15) list_medium_line_x2_t2_g3_t

0x9d73,	// (0x0001d451) main_sp_fs_list_pane_ParamLimits

0x9d73,	// (0x0001d451) main_sp_fs_list_pane

0x9d80,	// (0x0001d45e) sp_fs_scroll_pane_ParamLimits

0x9d80,	// (0x0001d45e) sp_fs_scroll_pane

0x9d8d,	// (0x0001d46b) list_medium_line_x2_t3_t1

0x9d9d,	// (0x0001d47b) list_medium_line_x2_t3_t2

0x26f3,	// (0x00015dd1) list_medium_line_x2_t3_t3

0x0002,

0xf382,	// (0x00022a60) list_medium_line_x2_t3_t

0x9dab,	// (0x0001d489) list_medium_line_x3_t4_t1

0x9dbb,	// (0x0001d499) list_medium_line_x3_t4_t2

0x2701,	// (0x00015ddf) list_medium_line_x3_t4_t3

0x270f,	// (0x00015ded) list_medium_line_x3_t4_t4

0x0003,

0xf389,	// (0x00022a67) list_medium_line_x3_t4_t

0x9dc9,	// (0x0001d4a7) list_medium_line_x4_t5_t1

0x9dd9,	// (0x0001d4b7) list_medium_line_x4_t5_t2

0x2701,	// (0x00015ddf) list_medium_line_x4_t5_t3

0x271d,	// (0x00015dfb) list_medium_line_x4_t5_t4

0x270f,	// (0x00015ded) list_medium_line_x4_t5_t5

0x0004,

0xf392,	// (0x00022a70) list_medium_line_x4_t5_t

0x20f6,	// (0x000157d4) list_medium_line_t4_g4_g1_ParamLimits

0x20f6,	// (0x000157d4) list_medium_line_t4_g4_g1

0x2178,	// (0x00015856) list_medium_line_t4_g4_g2_ParamLimits

0x2178,	// (0x00015856) list_medium_line_t4_g4_g2

0x272b,	// (0x00015e09) list_medium_line_t4_g4_g3_ParamLimits

0x272b,	// (0x00015e09) list_medium_line_t4_g4_g3

0x210e,	// (0x000157ec) list_medium_line_t4_g4_g4_ParamLimits

0x210e,	// (0x000157ec) list_medium_line_t4_g4_g4

0x0003,

0xf39d,	// (0x00022a7b) list_medium_line_t4_g4_g_ParamLimits

0xf39d,	// (0x00022a7b) list_medium_line_t4_g4_g

0x2737,	// (0x00015e15) list_medium_line_t4_g4_t1_ParamLimits

0x2737,	// (0x00015e15) list_medium_line_t4_g4_t1

0x274c,	// (0x00015e2a) list_medium_line_t4_g4_t2_ParamLimits

0x274c,	// (0x00015e2a) list_medium_line_t4_g4_t2

0x2761,	// (0x00015e3f) list_medium_line_t4_g4_t3_ParamLimits

0x2761,	// (0x00015e3f) list_medium_line_t4_g4_t3

0x2776,	// (0x00015e54) list_medium_line_t4_g4_t4_ParamLimits

0x2776,	// (0x00015e54) list_medium_line_t4_g4_t4

0x0003,

0xf3a6,	// (0x00022a84) list_medium_line_t4_g4_t_ParamLimits

0xf3a6,	// (0x00022a84) list_medium_line_t4_g4_t

0x9e86,	// (0x0001d564) chi_dic_find_pane_g1

0xab3f,	// (0x0001e21d) main_tport_pane

0x5581,	// (0x00018c5f) list_medium_line_plain_t1

0x20f6,	// (0x000157d4) list_medium_line_t2_g2_g1_ParamLimits

0x20f6,	// (0x000157d4) list_medium_line_t2_g2_g1

0x2102,	// (0x000157e0) list_medium_line_t2_g2_g2_ParamLimits

0x2102,	// (0x000157e0) list_medium_line_t2_g2_g2

0x0001,

0xfa6c,	// (0x0002314a) list_medium_line_t2_g2_g_ParamLimits

0xfa6c,	// (0x0002314a) list_medium_line_t2_g2_g

0xc5f7,	// (0x0001fcd5) list_medium_line_t2_g2_t1_ParamLimits

0xc5f7,	// (0x0001fcd5) list_medium_line_t2_g2_t1

0xc60e,	// (0x0001fcec) list_medium_line_t2_g2_t2_ParamLimits

0xc60e,	// (0x0001fcec) list_medium_line_t2_g2_t2

0x0001,

0xfa71,	// (0x0002314f) list_medium_line_t2_g2_t_ParamLimits

0xfa71,	// (0x0002314f) list_medium_line_t2_g2_t

0x596d,	// (0x0001904b) aid_sp_fs_list_icon_a_sm

0x5975,	// (0x00019053) aid_sp_fs_list_icon_d

0x597d,	// (0x0001905b) aid_sp_fs_text_primary

0x5986,	// (0x00019064) aid_sp_fs_text_secondary

0x598f,	// (0x0001906d) list_medium_line

0x598f,	// (0x0001906d) list_medium_line_g2

0x598f,	// (0x0001906d) list_medium_line_g3

0x598f,	// (0x0001906d) list_medium_line_plain

0x598f,	// (0x0001906d) list_medium_line_plain_t2

0x598f,	// (0x0001906d) list_medium_line_plain_t3

0x598f,	// (0x0001906d) list_medium_line_right_icon

0x598f,	// (0x0001906d) list_medium_line_right_iconx2

0x598f,	// (0x0001906d) list_medium_line_t2

0x598f,	// (0x0001906d) list_medium_line_t2_g2

0x598f,	// (0x0001906d) list_medium_line_t2_g3

0x598f,	// (0x0001906d) list_medium_line_t2_right_icon

0x598f,	// (0x0001906d) list_medium_line_t2_right_iconx2

0x598f,	// (0x0001906d) list_medium_line_t3

0x598f,	// (0x0001906d) list_medium_line_t3_g2

0x598f,	// (0x0001906d) list_medium_line_t3_g3

0x598f,	// (0x0001906d) list_medium_line_t3_right_iconx2

0x5998,	// (0x00019076) list_medium_line_t4_g4

0x59a1,	// (0x0001907f) list_medium_line_x2

0x59a1,	// (0x0001907f) list_medium_line_x2_t2_g2

0x59a1,	// (0x0001907f) list_medium_line_x2_t2_g3

0x59a1,	// (0x0001907f) list_medium_line_x2_t2_g4

0x59a1,	// (0x0001907f) list_medium_line_x2_t3

0x59a1,	// (0x0001907f) list_medium_line_x2_t3_g2

0x59a1,	// (0x0001907f) list_medium_line_x2_t3_g3

0x59a1,	// (0x0001907f) list_medium_line_x2_t3_g4

0x59a1,	// (0x0001907f) list_medium_line_x2_t4_g2

0x59a1,	// (0x0001907f) list_medium_line_x2_t4_g4

0x59aa,	// (0x00019088) list_medium_line_x3

0x59aa,	// (0x00019088) list_medium_line_x3_t4

0x59aa,	// (0x00019088) list_medium_line_x3_t4_g4

0x5998,	// (0x00019076) list_medium_line_x4_t4

0x5998,	// (0x00019076) list_medium_line_x4_t4_g7

0x5998,	// (0x00019076) list_medium_line_x4_t5

0x59b3,	// (0x00019091) list_single_fs_dyc_pane_ParamLimits

0x59b3,	// (0x00019091) list_single_fs_dyc_pane

0x20f6,	// (0x000157d4) list_medium_line_x4_t4_g7_g1_ParamLimits

0x20f6,	// (0x000157d4) list_medium_line_x4_t4_g7_g1

0x5ea1,	// (0x0001957f) list_medium_line_x4_t4_g7_g2_ParamLimits

0x5ea1,	// (0x0001957f) list_medium_line_x4_t4_g7_g2

0x5ead,	// (0x0001958b) list_medium_line_x4_t4_g7_g3_ParamLimits

0x5ead,	// (0x0001958b) list_medium_line_x4_t4_g7_g3

0x5ebc,	// (0x0001959a) list_medium_line_x4_t4_g7_g4_ParamLimits

0x5ebc,	// (0x0001959a) list_medium_line_x4_t4_g7_g4

0x5ec8,	// (0x000195a6) list_medium_line_x4_t4_g7_g5_ParamLimits

0x5ec8,	// (0x000195a6) list_medium_line_x4_t4_g7_g5

0x5ed7,	// (0x000195b5) list_medium_line_x4_t4_g7_g6_ParamLimits

0x5ed7,	// (0x000195b5) list_medium_line_x4_t4_g7_g6

0x5ee6,	// (0x000195c4) list_medium_line_x4_t4_g7_g7_ParamLimits

0x5ee6,	// (0x000195c4) list_medium_line_x4_t4_g7_g7

0x0006,

0xfc36,	// (0x00023314) list_medium_line_x4_t4_g7_g_ParamLimits

0xfc36,	// (0x00023314) list_medium_line_x4_t4_g7_g

0x5ef2,	// (0x000195d0) list_medium_line_x4_t4_g7_t1_ParamLimits

0x5ef2,	// (0x000195d0) list_medium_line_x4_t4_g7_t1

0x5f07,	// (0x000195e5) list_medium_line_x4_t4_g7_t2_ParamLimits

0x5f07,	// (0x000195e5) list_medium_line_x4_t4_g7_t2

0x5f1c,	// (0x000195fa) list_medium_line_x4_t4_g7_t3_ParamLimits

0x5f1c,	// (0x000195fa) list_medium_line_x4_t4_g7_t3

0x5f31,	// (0x0001960f) list_medium_line_x4_t4_g7_t4_ParamLimits

0x5f31,	// (0x0001960f) list_medium_line_x4_t4_g7_t4

0x5f43,	// (0x00019621) list_medium_line_x4_t4_g7_t5_ParamLimits

0x5f43,	// (0x00019621) list_medium_line_x4_t4_g7_t5

0x0004,

0xfc45,	// (0x00023323) list_medium_line_x4_t4_g7_t_ParamLimits

0xfc45,	// (0x00023323) list_medium_line_x4_t4_g7_t

0x5f55,	// (0x00019633) list_single_dyc_row_pane_ParamLimits

0x5f55,	// (0x00019633) list_single_dyc_row_pane

0xd622,	// (0x00020d00) call5_gesture_pane_ParamLimits

0xd622,	// (0x00020d00) call5_gesture_pane

0xd652,	// (0x00020d30) call5_windows_pane_ParamLimits

0xd652,	// (0x00020d30) call5_windows_pane

0xd740,	// (0x00020e1e) call5_swipe_1_pane_cp_ParamLimits

0xd740,	// (0x00020e1e) call5_swipe_1_pane_cp

0xd74c,	// (0x00020e2a) call5_swipe_2_pane_cp_ParamLimits

0xd74c,	// (0x00020e2a) call5_swipe_2_pane_cp

0x2c41,	// (0x0001631f) call5_image_pane_cp

0xd758,	// (0x00020e36) popup_call5_audio_first_window_cp_ParamLimits

0xd758,	// (0x00020e36) popup_call5_audio_first_window_cp

0xd6ac,	// (0x00020d8a) call5_swipe_1_pane_g1_cp_ParamLimits

0xd6ac,	// (0x00020d8a) call5_swipe_1_pane_g1_cp

0xd764,	// (0x00020e42) call5_swipe_1_pane_g2_cp

0xd6c5,	// (0x00020da3) call5_swipe_1_pane_t1_cp_ParamLimits

0xd6c5,	// (0x00020da3) call5_swipe_1_pane_t1_cp

0xd6ac,	// (0x00020d8a) call5_swipe_2_pane_g1_cp_ParamLimits

0xd6ac,	// (0x00020d8a) call5_swipe_2_pane_g1_cp

0xd76c,	// (0x00020e4a) call5_swipe_2_pane_g2_cp

0xd774,	// (0x00020e52) call5_swipe_2_pane_t1_cp_ParamLimits

0xd774,	// (0x00020e52) call5_swipe_2_pane_t1_cp

0x1669,	// (0x00014d47) main_sp_fs_email_pane

0xd789,	// (0x00020e67) main_sp_fs_listscroll_pane_te

0xd792,	// (0x00020e70) popup_sp_fs_action_menu_pane_ParamLimits

0xd792,	// (0x00020e70) popup_sp_fs_action_menu_pane

0x465a,	// (0x00017d38) bg_sp_fs_ctrlbar_pane_g1

0xd7c2,	// (0x00020ea0) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xd7cb,	// (0x00020ea9) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xd7d4,	// (0x00020eb2) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x465a,	// (0x00017d38) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfd2e,	// (0x0002340c) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x4447,	// (0x00017b25) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x4447,	// (0x00017b25) bg_sp_fs_ctrlbar_ddmenu_pane

0xd7dd,	// (0x00020ebb) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xd7dd,	// (0x00020ebb) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x20f6,	// (0x000157d4) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x20f6,	// (0x000157d4) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfd37,	// (0x00023415) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfd37,	// (0x00023415) main_sp_fs_ctrlbar_ddmenu_pane_g

0xd7e9,	// (0x00020ec7) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xd7e9,	// (0x00020ec7) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xd803,	// (0x00020ee1) list_medium_line_t2_right_icon_g1

0xd80b,	// (0x00020ee9) list_medium_line_t2_right_icon_t1

0xd81a,	// (0x00020ef8) list_medium_line_t2_right_icon_t2

0x0001,

0xfd3c,	// (0x0002341a) list_medium_line_t2_right_icon_t

0x4137,	// (0x00017815) bg_sp_fs_ctrlbar_pane_ParamLimits

0x4137,	// (0x00017815) bg_sp_fs_ctrlbar_pane

0xd8b5,	// (0x00020f93) main_sp_fs_ctrlbar_button_pane_cp01

0xd8bd,	// (0x00020f9b) main_sp_fs_ctrlbar_ddmenu_pane

0xd8c7,	// (0x00020fa5) main_sp_fs_ctrlbar_pane_g1

0xd8d3,	// (0x00020fb1) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfd41,	// (0x0002341f) main_sp_fs_ctrlbar_pane_g

0xd8df,	// (0x00020fbd) main_sp_fs_ctrlbar_pane_t1

0xd8f4,	// (0x00020fd2) main_sp_fs_ctrlbar_pane

0xd90c,	// (0x00020fea) main_sp_fs_listscroll_pane_te_cp01

0xd91d,	// (0x00020ffb) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0xd91d,	// (0x00020ffb) popup_sp_fs_action_menu_pane_cp01

0x1669,	// (0x00014d47) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x1669,	// (0x00014d47) bg_sp_fs_highlight_list_pane_cp01

0xd939,	// (0x00021017) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xd939,	// (0x00021017) sp_fs_action_menu_list_gene_pane_g1

0xd948,	// (0x00021026) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xd948,	// (0x00021026) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfd46,	// (0x00023424) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfd46,	// (0x00023424) sp_fs_action_menu_list_gene_pane_g

0xd955,	// (0x00021033) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xd955,	// (0x00021033) sp_fs_action_menu_list_gene_pane_t1

0xd96d,	// (0x0002104b) sp_fs_action_menu_list_gene_pane_ParamLimits

0xd96d,	// (0x0002104b) sp_fs_action_menu_list_gene_pane

0xd98a,	// (0x00021068) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xd98a,	// (0x00021068) popup_sp_fs_action_menu_bg_pane

0xd998,	// (0x00021076) sp_fs_action_menu_list_pane_ParamLimits

0xd998,	// (0x00021076) sp_fs_action_menu_list_pane

0xd9b4,	// (0x00021092) sp_fs_scroll_pane_cp01_ParamLimits

0xd9b4,	// (0x00021092) sp_fs_scroll_pane_cp01

0xd9da,	// (0x000210b8) list_medium_line_plain_t2_t1

0xd9e9,	// (0x000210c7) list_medium_line_plain_t2_t2

0x0001,

0xfd4b,	// (0x00023429) list_medium_line_plain_t2_t

0xd9f7,	// (0x000210d5) list_medium_line_plain_t3_t1

0xda07,	// (0x000210e5) list_medium_line_plain_t3_t2

0xda15,	// (0x000210f3) list_medium_line_plain_t3_t3

0x0002,

0xfd50,	// (0x0002342e) list_medium_line_plain_t3_t

0x20f6,	// (0x000157d4) list_medium_line_x2_t2_g2_g1_ParamLimits

0x20f6,	// (0x000157d4) list_medium_line_x2_t2_g2_g1

0x210e,	// (0x000157ec) list_medium_line_x2_t2_g2_g2_ParamLimits

0x210e,	// (0x000157ec) list_medium_line_x2_t2_g2_g2

0x0001,

0xf2ad,	// (0x0002298b) list_medium_line_x2_t2_g2_g_ParamLimits

0xf2ad,	// (0x0002298b) list_medium_line_x2_t2_g2_g

0x2737,	// (0x00015e15) list_medium_line_x2_t2_g2_t1_ParamLimits

0x2737,	// (0x00015e15) list_medium_line_x2_t2_g2_t1

0x212f,	// (0x0001580d) list_medium_line_x2_t2_g2_t2_ParamLimits

0x212f,	// (0x0001580d) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd57,	// (0x00023435) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd57,	// (0x00023435) list_medium_line_x2_t2_g2_t

0x20f6,	// (0x000157d4) list_medium_line_x2_t4_g2_g1_ParamLimits

0x20f6,	// (0x000157d4) list_medium_line_x2_t4_g2_g1

0x210e,	// (0x000157ec) list_medium_line_x2_t4_g2_g2_ParamLimits

0x210e,	// (0x000157ec) list_medium_line_x2_t4_g2_g2

0x0001,

0xf2ad,	// (0x0002298b) list_medium_line_x2_t4_g2_g_ParamLimits

0xf2ad,	// (0x0002298b) list_medium_line_x2_t4_g2_g

0xda23,	// (0x00021101) list_medium_line_x2_t4_g2_t1_ParamLimits

0xda23,	// (0x00021101) list_medium_line_x2_t4_g2_t1

0xda3d,	// (0x0002111b) list_medium_line_x2_t4_g2_t2_ParamLimits

0xda3d,	// (0x0002111b) list_medium_line_x2_t4_g2_t2

0xda52,	// (0x00021130) list_medium_line_x2_t4_g2_t3_ParamLimits

0xda52,	// (0x00021130) list_medium_line_x2_t4_g2_t3

0x212f,	// (0x0001580d) list_medium_line_x2_t4_g2_t4_ParamLimits

0x212f,	// (0x0001580d) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd5c,	// (0x0002343a) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd5c,	// (0x0002343a) list_medium_line_x2_t4_g2_t

0xda67,	// (0x00021145) list_medium_line_t3_right_iconx2_g1

0xd803,	// (0x00020ee1) list_medium_line_t3_right_iconx2_g2

0xda6f,	// (0x0002114d) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd65,	// (0x00023443) list_medium_line_t3_right_iconx2_g

0xda77,	// (0x00021155) list_medium_line_t3_right_iconx2_t1

0xda87,	// (0x00021165) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd6c,	// (0x0002344a) list_medium_line_t3_right_iconx2_t

0x20f6,	// (0x000157d4) list_medium_line_x3_t4_g4_g1_ParamLimits

0x20f6,	// (0x000157d4) list_medium_line_x3_t4_g4_g1

0x2102,	// (0x000157e0) list_medium_line_x3_t4_g4_g2_ParamLimits

0x2102,	// (0x000157e0) list_medium_line_x3_t4_g4_g2

0x2178,	// (0x00015856) list_medium_line_x3_t4_g4_g3_ParamLimits

0x2178,	// (0x00015856) list_medium_line_x3_t4_g4_g3

0xda95,	// (0x00021173) list_medium_line_x3_t4_g4_g4_ParamLimits

0xda95,	// (0x00021173) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd71,	// (0x0002344f) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd71,	// (0x0002344f) list_medium_line_x3_t4_g4_g

0xc5f7,	// (0x0001fcd5) list_medium_line_x3_t4_g4_t1_ParamLimits

0xc5f7,	// (0x0001fcd5) list_medium_line_x3_t4_g4_t1

0xc60e,	// (0x0001fcec) list_medium_line_x3_t4_g4_t2_ParamLimits

0xc60e,	// (0x0001fcec) list_medium_line_x3_t4_g4_t2

0x274c,	// (0x00015e2a) list_medium_line_x3_t4_g4_t3_ParamLimits

0x274c,	// (0x00015e2a) list_medium_line_x3_t4_g4_t3

0xdaa1,	// (0x0002117f) list_medium_line_x3_t4_g4_t4_ParamLimits

0xdaa1,	// (0x0002117f) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd7a,	// (0x00023458) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd7a,	// (0x00023458) list_medium_line_x3_t4_g4_t

0xdabe,	// (0x0002119c) list_single_dyc_row_text_pane_t1_ParamLimits

0xdabe,	// (0x0002119c) list_single_dyc_row_text_pane_t1

0xdaf5,	// (0x000211d3) list_single_dyc_row_text_pane_t2_ParamLimits

0xdaf5,	// (0x000211d3) list_single_dyc_row_text_pane_t2

0xdb4c,	// (0x0002122a) list_single_dyc_row_text_pane_t3_ParamLimits

0xdb4c,	// (0x0002122a) list_single_dyc_row_text_pane_t3

0x0002,

0xfd83,	// (0x00023461) list_single_dyc_row_text_pane_t_ParamLimits

0xfd83,	// (0x00023461) list_single_dyc_row_text_pane_t

0xdb5e,	// (0x0002123c) list_single_dyc_row_pane_g1_ParamLimits

0xdb5e,	// (0x0002123c) list_single_dyc_row_pane_g1

0xdb6a,	// (0x00021248) list_single_dyc_row_pane_g2_ParamLimits

0xdb6a,	// (0x00021248) list_single_dyc_row_pane_g2

0xdb76,	// (0x00021254) list_single_dyc_row_pane_g3_ParamLimits

0xdb76,	// (0x00021254) list_single_dyc_row_pane_g3

0xdb82,	// (0x00021260) list_single_dyc_row_pane_g4_ParamLimits

0xdb82,	// (0x00021260) list_single_dyc_row_pane_g4

0x0003,

0xfd8a,	// (0x00023468) list_single_dyc_row_pane_g_ParamLimits

0xfd8a,	// (0x00023468) list_single_dyc_row_pane_g

0xdb8e,	// (0x0002126c) list_single_dyc_row_text_pane_ParamLimits

0xdb8e,	// (0x0002126c) list_single_dyc_row_text_pane

0x1616,	// (0x00014cf4) bg_sp_fs_scroll_pane

0xdbad,	// (0x0002128b) thumb_sp_fs_scroll_pane

0x20f6,	// (0x000157d4) list_medium_line_g1_ParamLimits

0x20f6,	// (0x000157d4) list_medium_line_g1

0x2737,	// (0x00015e15) list_medium_line_t1_ParamLimits

0x2737,	// (0x00015e15) list_medium_line_t1

0x20f6,	// (0x000157d4) list_medium_line_x2_g1_ParamLimits

0x20f6,	// (0x000157d4) list_medium_line_x2_g1

0x2102,	// (0x000157e0) list_medium_line_x2_g2_ParamLimits

0x2102,	// (0x000157e0) list_medium_line_x2_g2

0x0001,

0xfa6c,	// (0x0002314a) list_medium_line_x2_g_ParamLimits

0xfa6c,	// (0x0002314a) list_medium_line_x2_g

0xdbb6,	// (0x00021294) list_medium_line_x2_t1_ParamLimits

0xdbb6,	// (0x00021294) list_medium_line_x2_t1

0x20f6,	// (0x000157d4) list_medium_line_x3_g1_ParamLimits

0x20f6,	// (0x000157d4) list_medium_line_x3_g1

0x2102,	// (0x000157e0) list_medium_line_x3_g2_ParamLimits

0x2102,	// (0x000157e0) list_medium_line_x3_g2

0x0001,

0xfa6c,	// (0x0002314a) list_medium_line_x3_g_ParamLimits

0xfa6c,	// (0x0002314a) list_medium_line_x3_g

0xdbb6,	// (0x00021294) list_medium_line_x3_t1_ParamLimits

0xdbb6,	// (0x00021294) list_medium_line_x3_t1

0xdbcc,	// (0x000212aa) thumb_sp_fs_scroll_pane_g1

0xdbd5,	// (0x000212b3) thumb_sp_fs_scroll_pane_g2

0xdbde,	// (0x000212bc) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd93,	// (0x00023471) thumb_sp_fs_scroll_pane_g

0xdbcc,	// (0x000212aa) bg_sp_fs_scroll_pane_g1

0xdbd5,	// (0x000212b3) bg_sp_fs_scroll_pane_g2

0xdbde,	// (0x000212bc) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd93,	// (0x00023471) bg_sp_fs_scroll_pane_g

0x20f6,	// (0x000157d4) list_medium_line_x2_t3_g4_g1_ParamLimits

0x20f6,	// (0x000157d4) list_medium_line_x2_t3_g4_g1

0x216c,	// (0x0001584a) list_medium_line_x2_t3_g4_g2_ParamLimits

0x216c,	// (0x0001584a) list_medium_line_x2_t3_g4_g2

0x2102,	// (0x000157e0) list_medium_line_x2_t3_g4_g3_ParamLimits

0x2102,	// (0x000157e0) list_medium_line_x2_t3_g4_g3

0x210e,	// (0x000157ec) list_medium_line_x2_t3_g4_g4_ParamLimits

0x210e,	// (0x000157ec) list_medium_line_x2_t3_g4_g4

0x0003,

0xf329,	// (0x00022a07) list_medium_line_x2_t3_g4_g_ParamLimits

0xf329,	// (0x00022a07) list_medium_line_x2_t3_g4_g

0xdbe7,	// (0x000212c5) list_medium_line_x2_t3_g4_t1_ParamLimits

0xdbe7,	// (0x000212c5) list_medium_line_x2_t3_g4_t1

0xdbfd,	// (0x000212db) list_medium_line_x2_t3_g4_t2_ParamLimits

0xdbfd,	// (0x000212db) list_medium_line_x2_t3_g4_t2

0x212f,	// (0x0001580d) list_medium_line_x2_t3_g4_t3_ParamLimits

0x212f,	// (0x0001580d) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd9a,	// (0x00023478) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd9a,	// (0x00023478) list_medium_line_x2_t3_g4_t

0x20f6,	// (0x000157d4) list_medium_line_g2_g1_ParamLimits

0x20f6,	// (0x000157d4) list_medium_line_g2_g1

0x2102,	// (0x000157e0) list_medium_line_g2_g2_ParamLimits

0x2102,	// (0x000157e0) list_medium_line_g2_g2

0x0001,

0xfa6c,	// (0x0002314a) list_medium_line_g2_g_ParamLimits

0xfa6c,	// (0x0002314a) list_medium_line_g2_g

0x2499,	// (0x00015b77) list_medium_line_g2_t1_ParamLimits

0x2499,	// (0x00015b77) list_medium_line_g2_t1

0x20f6,	// (0x000157d4) list_medium_line_t3_g2_g1_ParamLimits

0x20f6,	// (0x000157d4) list_medium_line_t3_g2_g1

0x2102,	// (0x000157e0) list_medium_line_t3_g2_g2_ParamLimits

0x2102,	// (0x000157e0) list_medium_line_t3_g2_g2

0x0001,

0xfa6c,	// (0x0002314a) list_medium_line_t3_g2_g_ParamLimits

0xfa6c,	// (0x0002314a) list_medium_line_t3_g2_g

0xdc16,	// (0x000212f4) list_medium_line_t3_g2_t1_ParamLimits

0xdc16,	// (0x000212f4) list_medium_line_t3_g2_t1

0xdc2d,	// (0x0002130b) list_medium_line_t3_g2_t2_ParamLimits

0xdc2d,	// (0x0002130b) list_medium_line_t3_g2_t2

0xdc42,	// (0x00021320) list_medium_line_t3_g2_t3_ParamLimits

0xdc42,	// (0x00021320) list_medium_line_t3_g2_t3

0x0002,

0xfda1,	// (0x0002347f) list_medium_line_t3_g2_t_ParamLimits

0xfda1,	// (0x0002347f) list_medium_line_t3_g2_t

0xd803,	// (0x00020ee1) list_medium_line_right_icon_g1

0xdc57,	// (0x00021335) list_medium_line_right_icon_t1

0x20f6,	// (0x000157d4) list_medium_line_t2_g1_ParamLimits

0x20f6,	// (0x000157d4) list_medium_line_t2_g1

0xdc65,	// (0x00021343) list_medium_line_t2_t1_ParamLimits

0xdc65,	// (0x00021343) list_medium_line_t2_t1

0xdc7e,	// (0x0002135c) list_medium_line_t2_t2_ParamLimits

0xdc7e,	// (0x0002135c) list_medium_line_t2_t2

0x0001,

0xfda8,	// (0x00023486) list_medium_line_t2_t_ParamLimits

0xfda8,	// (0x00023486) list_medium_line_t2_t

0x20f6,	// (0x000157d4) list_medium_line_t3_g1_ParamLimits

0x20f6,	// (0x000157d4) list_medium_line_t3_g1

0xdc93,	// (0x00021371) list_medium_line_t3_t1_ParamLimits

0xdc93,	// (0x00021371) list_medium_line_t3_t1

0xdcaa,	// (0x00021388) list_medium_line_t3_t2_ParamLimits

0xdcaa,	// (0x00021388) list_medium_line_t3_t2

0x215a,	// (0x00015838) list_medium_line_t3_t3_ParamLimits

0x215a,	// (0x00015838) list_medium_line_t3_t3

0x0002,

0xfdad,	// (0x0002348b) list_medium_line_t3_t_ParamLimits

0xfdad,	// (0x0002348b) list_medium_line_t3_t

0x20f6,	// (0x000157d4) list_medium_line_g3_g1_ParamLimits

0x20f6,	// (0x000157d4) list_medium_line_g3_g1

0x216c,	// (0x0001584a) list_medium_line_g3_g2_ParamLimits

0x216c,	// (0x0001584a) list_medium_line_g3_g2

0x2102,	// (0x000157e0) list_medium_line_g3_g3_ParamLimits

0x2102,	// (0x000157e0) list_medium_line_g3_g3

0x0002,

0xfdb4,	// (0x00023492) list_medium_line_g3_g_ParamLimits

0xfdb4,	// (0x00023492) list_medium_line_g3_g

0x2484,	// (0x00015b62) list_medium_line_g3_t1_ParamLimits

0x2484,	// (0x00015b62) list_medium_line_g3_t1

0x20f6,	// (0x000157d4) list_medium_line_t2_g3_g1_ParamLimits

0x20f6,	// (0x000157d4) list_medium_line_t2_g3_g1

0x216c,	// (0x0001584a) list_medium_line_t2_g3_g2_ParamLimits

0x216c,	// (0x0001584a) list_medium_line_t2_g3_g2

0x2102,	// (0x000157e0) list_medium_line_t2_g3_g3_ParamLimits

0x2102,	// (0x000157e0) list_medium_line_t2_g3_g3

0x0002,

0xfdb4,	// (0x00023492) list_medium_line_t2_g3_g_ParamLimits

0xfdb4,	// (0x00023492) list_medium_line_t2_g3_g

0xdcbf,	// (0x0002139d) list_medium_line_t2_g3_t1_ParamLimits

0xdcbf,	// (0x0002139d) list_medium_line_t2_g3_t1

0xdcd6,	// (0x000213b4) list_medium_line_t2_g3_t2_ParamLimits

0xdcd6,	// (0x000213b4) list_medium_line_t2_g3_t2

0x0001,

0xfdbb,	// (0x00023499) list_medium_line_t2_g3_t_ParamLimits

0xfdbb,	// (0x00023499) list_medium_line_t2_g3_t

0x20f6,	// (0x000157d4) list_medium_line_t3_g3_g1_ParamLimits

0x20f6,	// (0x000157d4) list_medium_line_t3_g3_g1

0x216c,	// (0x0001584a) list_medium_line_t3_g3_g2_ParamLimits

0x216c,	// (0x0001584a) list_medium_line_t3_g3_g2

0x2102,	// (0x000157e0) list_medium_line_t3_g3_g3_ParamLimits

0x2102,	// (0x000157e0) list_medium_line_t3_g3_g3

0x0002,

0xfdb4,	// (0x00023492) list_medium_line_t3_g3_g_ParamLimits

0xfdb4,	// (0x00023492) list_medium_line_t3_g3_g

0xdceb,	// (0x000213c9) list_medium_line_t3_g3_t1_ParamLimits

0xdceb,	// (0x000213c9) list_medium_line_t3_g3_t1

0xdcff,	// (0x000213dd) list_medium_line_t3_g3_t2_ParamLimits

0xdcff,	// (0x000213dd) list_medium_line_t3_g3_t2

0xdd11,	// (0x000213ef) list_medium_line_t3_g3_t3_ParamLimits

0xdd11,	// (0x000213ef) list_medium_line_t3_g3_t3

0x0002,

0xfdc0,	// (0x0002349e) list_medium_line_t3_g3_t_ParamLimits

0xfdc0,	// (0x0002349e) list_medium_line_t3_g3_t

0xda67,	// (0x00021145) list_medium_line_right_iconx2_g1

0xd803,	// (0x00020ee1) list_medium_line_right_iconx2_g2

0x0001,

0xfdc7,	// (0x000234a5) list_medium_line_right_iconx2_g

0xdd23,	// (0x00021401) list_medium_line_right_iconx2_t1

0xda67,	// (0x00021145) list_medium_line_t2_right_iconx2_g1

0xd803,	// (0x00020ee1) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfdc7,	// (0x000234a5) list_medium_line_t2_right_iconx2_g

0xdd31,	// (0x0002140f) list_medium_line_t2_right_iconx2_t1

0xdd41,	// (0x0002141f) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfdcc,	// (0x000234aa) list_medium_line_t2_right_iconx2_t

0x5581,	// (0x00018c5f) list_medium_line_x4_t4_t1

0xdd4f,	// (0x0002142d) list_medium_line_x4_t4_t2

0xdd5d,	// (0x0002143b) list_medium_line_x4_t4_t3

0xdd6b,	// (0x00021449) list_medium_line_x4_t4_t4

0x0003,

0xfdd1,	// (0x000234af) list_medium_line_x4_t4_t

0xdd9e,	// (0x0002147c) tport_appsw_pane_ParamLimits

0xdd9e,	// (0x0002147c) tport_appsw_pane

0xddaa,	// (0x00021488) tport_contact_pane_ParamLimits

0xddaa,	// (0x00021488) tport_contact_pane

0xddb8,	// (0x00021496) tport_listscroll_pane_ParamLimits

0xddb8,	// (0x00021496) tport_listscroll_pane

0xddc6,	// (0x000214a4) cell_tport_appsw_pane_ParamLimits

0xddc6,	// (0x000214a4) cell_tport_appsw_pane

0x4962,	// (0x00018040) tport_appsw_pane_g1_ParamLimits

0x4962,	// (0x00018040) tport_appsw_pane_g1

0xddd3,	// (0x000214b1) tport_contact_pane_g1

0xdddc,	// (0x000214ba) tport_contact_pane_t1

0xddea,	// (0x000214c8) tport_contact_pane_t2

0x0001,

0xfdda,	// (0x000234b8) tport_contact_pane_t

0xddf8,	// (0x000214d6) list_tport_pane

0x1f31,	// (0x0001560f) scroll_pane_cp_030

0xde09,	// (0x000214e7) cell_tport_appsw_pane_g1

0xde22,	// (0x00021500) cell_tport_appsw_pane_t1

0x1616,	// (0x00014cf4) grid_highlight_pane_cp019

0xde30,	// (0x0002150e) list_tport_double_graphic_pane_ParamLimits

0xde30,	// (0x0002150e) list_tport_double_graphic_pane

0x1669,	// (0x00014d47) list_highlight_pane_cp023_ParamLimits

0x1669,	// (0x00014d47) list_highlight_pane_cp023

0xde3d,	// (0x0002151b) list_tport_double_graphic_pane_g1_ParamLimits

0xde3d,	// (0x0002151b) list_tport_double_graphic_pane_g1

0xde4a,	// (0x00021528) list_tport_double_graphic_pane_t1_ParamLimits

0xde4a,	// (0x00021528) list_tport_double_graphic_pane_t1

0xde5f,	// (0x0002153d) list_tport_double_graphic_pane_t2_ParamLimits

0xde5f,	// (0x0002153d) list_tport_double_graphic_pane_t2

0x0001,

0xfde6,	// (0x000234c4) list_tport_double_graphic_pane_t_ParamLimits

0xfde6,	// (0x000234c4) list_tport_double_graphic_pane_t

0x1616,	// (0x00014cf4) main_cale_note_pane

0x82c7,	// (0x0001b9a5) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x82c7,	// (0x0001b9a5) cell_vitu2_function_top_wide_pane_cp01

0xd32f,	// (0x00020a0d) wait_bar_pane_cp05_ParamLimits

0x1616,	// (0x00014cf4) listscroll_cmail_pane

0xde71,	// (0x0002154f) list_cmail_pane

0xde8d,	// (0x0002156b) list_cmail_body_pane

0xde8d,	// (0x0002156b) list_single_cmail_header_caption_pane

0xdea5,	// (0x00021583) list_single_cmail_header_detail_pane_ParamLimits

0xdea5,	// (0x00021583) list_single_cmail_header_detail_pane

0xdecf,	// (0x000215ad) list_single_cmail_header_caption_pane_t1

0xdee5,	// (0x000215c3) list_single_cmail_header_detail_pane_g1_ParamLimits

0xdee5,	// (0x000215c3) list_single_cmail_header_detail_pane_g1

0xdefb,	// (0x000215d9) list_single_cmail_header_detail_pane_g2_ParamLimits

0xdefb,	// (0x000215d9) list_single_cmail_header_detail_pane_g2

0x0002,

0xfdeb,	// (0x000234c9) list_single_cmail_header_detail_pane_g_ParamLimits

0xfdeb,	// (0x000234c9) list_single_cmail_header_detail_pane_g

0xdf14,	// (0x000215f2) list_single_cmail_header_detail_pane_t1_ParamLimits

0xdf14,	// (0x000215f2) list_single_cmail_header_detail_pane_t1

0xdf6a,	// (0x00021648) list_single_cmail_header_editor_pane_bg_ParamLimits

0xdf6a,	// (0x00021648) list_single_cmail_header_editor_pane_bg

0xdf7c,	// (0x0002165a) list_cmail_body_pane_g1

0xdf85,	// (0x00021663) list_cmail_body_pane_t1

0x52e8,	// (0x000189c6) list_single_cmail_header_editor_pane_bg_g1

0x23a2,	// (0x00015a80) list_single_cmail_header_editor_pane_bg_g1_copy1

0x52f8,	// (0x000189d6) list_single_cmail_header_editor_pane_bg_g1_copy2

0x52f0,	// (0x000189ce) list_single_cmail_header_editor_pane_bg_g1_copy3

0x55ab,	// (0x00018c89) list_single_cmail_header_editor_pane_bg_g1_copy4

0x5318,	// (0x000189f6) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x5308,	// (0x000189e6) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x5310,	// (0x000189ee) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x2382,	// (0x00015a60) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xdf93,	// (0x00021671) calenote_gesture_pane_ParamLimits

0xdf93,	// (0x00021671) calenote_gesture_pane

0xdfab,	// (0x00021689) calenote_window_pane_ParamLimits

0xdfab,	// (0x00021689) calenote_window_pane

0xdfc3,	// (0x000216a1) popup_note_window_cp01

0xdfcc,	// (0x000216aa) calenote_swipe_1_pane_ParamLimits

0xdfcc,	// (0x000216aa) calenote_swipe_1_pane

0xd74c,	// (0x00020e2a) calenote_swipe_2_pane_ParamLimits

0xd74c,	// (0x00020e2a) calenote_swipe_2_pane

0xd6ac,	// (0x00020d8a) calenote_swipe_1_pane_g1_ParamLimits

0xd6ac,	// (0x00020d8a) calenote_swipe_1_pane_g1

0xd6b9,	// (0x00020d97) calenote_swipe_1_pane_g2_ParamLimits

0xd6b9,	// (0x00020d97) calenote_swipe_1_pane_g2

0x0001,

0xfd24,	// (0x00023402) calenote_swipe_1_pane_g_ParamLimits

0xfd24,	// (0x00023402) calenote_swipe_1_pane_g

0xdfe8,	// (0x000216c6) calenote_swipe_1_pane_t1_ParamLimits

0xdfe8,	// (0x000216c6) calenote_swipe_1_pane_t1

0xd6ac,	// (0x00020d8a) calenote_swipe_2_pane_g1_ParamLimits

0xd6ac,	// (0x00020d8a) calenote_swipe_2_pane_g1

0xe007,	// (0x000216e5) calenote_swipe_2_pane_g2_ParamLimits

0xe007,	// (0x000216e5) calenote_swipe_2_pane_g2

0x0001,

0xfdf7,	// (0x000234d5) calenote_swipe_2_pane_g_ParamLimits

0xfdf7,	// (0x000234d5) calenote_swipe_2_pane_g

0xe013,	// (0x000216f1) calenote_swipe_2_pane_t1_ParamLimits

0xe013,	// (0x000216f1) calenote_swipe_2_pane_t1

0x1616,	// (0x00014cf4) main_mup_navstr_pane

0xb6c4,	// (0x0001eda2) main_mup3_pane_t7_ParamLimits

0xb6c4,	// (0x0001eda2) main_mup3_pane_t7

0x7c69,	// (0x0001b347) main_mp4_pane_g6_ParamLimits

0x7c69,	// (0x0001b347) main_mp4_pane_g6

0x7f3a,	// (0x0001b618) main_image3_pane_t4_ParamLimits

0x7f3a,	// (0x0001b618) main_image3_pane_t4

0xe03a,	// (0x00021718) popup_navstr_preview_pane_ParamLimits

0xe03a,	// (0x00021718) popup_navstr_preview_pane

0xe046,	// (0x00021724) scroll_navstr_pane_ParamLimits

0xe046,	// (0x00021724) scroll_navstr_pane

0x1616,	// (0x00014cf4) bg_popup_preview_window_pane_cp04

0xe052,	// (0x00021730) popup_navstr_preview_pane_t1

0xe060,	// (0x0002173e) scroll_navstr_pane_g1_ParamLimits

0xe060,	// (0x0002173e) scroll_navstr_pane_g1

0xe06d,	// (0x0002174b) scroll_navstr_pane_t1_ParamLimits

0xe06d,	// (0x0002174b) scroll_navstr_pane_t1

0xdfdf,	// (0x000216bd) bg_button_pane_cp014

0xdfdf,	// (0x000216bd) bg_button_pane_cp030

0xd5c8,	// (0x00020ca6) list_double_fisheye_pane_g4_ParamLimits

0xd5c8,	// (0x00020ca6) list_double_fisheye_pane_g4

0xd5d4,	// (0x00020cb2) list_double_fisheye_pane_g5_ParamLimits

0xd5d4,	// (0x00020cb2) list_double_fisheye_pane_g5

0xde81,	// (0x0002155f) sp_fs_scroll_pane_cp03

0xd8c7,	// (0x00020fa5) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xd8d3,	// (0x00020fb1) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfd41,	// (0x0002341f) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xd8df,	// (0x00020fbd) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xde79,	// (0x00021557) sp_fs_scroll_pane_cp02

0x1f8b,	// (0x00015669) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x1f8b,	// (0x00015669) popup_sp_fs_calendar_preview_list_single_pane

0x1616,	// (0x00014cf4) main_cam6_pano_pane

0x1669,	// (0x00014d47) main_mup3_pane_ParamLimits

0x1616,	// (0x00014cf4) main_phacti_pane

0xd222,	// (0x00020900) bg_button_pane_cp11

0xd23a,	// (0x00020918) main_mobtv_info_pane_g2_ParamLimits

0xd23a,	// (0x00020918) main_mobtv_info_pane_g2

0x0001,

0xfca1,	// (0x0002337f) main_mobtv_info_pane_g_ParamLimits

0xfca1,	// (0x0002337f) main_mobtv_info_pane_g

0xd3c6,	// (0x00020aa4) sc_clock_pane_t5_ParamLimits

0xd3c6,	// (0x00020aa4) sc_clock_pane_t5

0xd450,	// (0x00020b2e) main_radioblah_pane_g1_ParamLimits

0x643e,	// (0x00019b1c) main_radioblah_pane_t3_ParamLimits

0x643e,	// (0x00019b1c) main_radioblah_pane_t3

0x6456,	// (0x00019b34) main_radioblah_pane_t4_ParamLimits

0x6456,	// (0x00019b34) main_radioblah_pane_t4

0xd46e,	// (0x00020b4c) main_radioblah_text_pane_ParamLimits

0xd46e,	// (0x00020b4c) main_radioblah_text_pane

0xd47b,	// (0x00020b59) main_radioblah_info_pane_g1_ParamLimits

0xd508,	// (0x00020be6) main_radioblah_info_pane_t4_ParamLimits

0xd508,	// (0x00020be6) main_radioblah_info_pane_t4

0x1669,	// (0x00014d47) main_sp_fs_calendar_pane

0xe07f,	// (0x0002175d) main_phacti_pane_g1

0xe090,	// (0x0002176e) phacti_note_pane_ParamLimits

0xe090,	// (0x0002176e) phacti_note_pane

0xe0a4,	// (0x00021782) phacti_term_pane_ParamLimits

0xe0a4,	// (0x00021782) phacti_term_pane

0xe0b9,	// (0x00021797) phacti_note_pane_t1_ParamLimits

0xe0b9,	// (0x00021797) phacti_note_pane_t1

0xe0d0,	// (0x000217ae) phacti_term_pane_g1

0xe0d8,	// (0x000217b6) phacti_term_pane_t1_ParamLimits

0xe0d8,	// (0x000217b6) phacti_term_pane_t1

0xe102,	// (0x000217e0) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe10a,	// (0x000217e8) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfe01,	// (0x000234df) popup_sp_fs_calendar_preview_list_single_pane_g

0xe112,	// (0x000217f0) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe112,	// (0x000217f0) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe128,	// (0x00021806) aid_popup_sp_fs_bg_corner_pane

0x465a,	// (0x00017d38) popup_sp_fs_calendar_preview_bg_pane_g1

0x1616,	// (0x00014cf4) popup_sp_fs_calendar_preview_bg_pane

0xe130,	// (0x0002180e) popup_sp_fs_calendar_preview_list_pane

0x1669,	// (0x00014d47) bg_main_sp_fs_cale_pane_ParamLimits

0x1669,	// (0x00014d47) bg_main_sp_fs_cale_pane

0xe168,	// (0x00021846) listscroll_cale_mrui_pane_ParamLimits

0xe168,	// (0x00021846) listscroll_cale_mrui_pane

0xe17c,	// (0x0002185a) listscroll_sp_fs_schedule_track_pane

0xe185,	// (0x00021863) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe185,	// (0x00021863) main_sp_fs_ctrlbar_pane_cp01

0xe196,	// (0x00021874) main_sp_fs_ribbon_pane

0xe19e,	// (0x0002187c) popup_sp_fs_cale_preview_window

0xe1b0,	// (0x0002188e) list_single_sp_fs_schedule_track_pane_ParamLimits

0xe1b0,	// (0x0002188e) list_single_sp_fs_schedule_track_pane

0x439c,	// (0x00017a7a) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x439c,	// (0x00017a7a) bg_sp_fs_highlight_list_pane_cp03

0xe1c5,	// (0x000218a3) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xe1c5,	// (0x000218a3) list_single_sp_fs_schedule_track_pane_g1

0xe1d1,	// (0x000218af) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xe1d1,	// (0x000218af) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfe06,	// (0x000234e4) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfe06,	// (0x000234e4) list_single_sp_fs_schedule_track_pane_g

0xe1dd,	// (0x000218bb) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xe1dd,	// (0x000218bb) list_single_sp_fs_schedule_track_pane_t1

0xe1f5,	// (0x000218d3) sp_fs_schedule_track_pane_ParamLimits

0xe1f5,	// (0x000218d3) sp_fs_schedule_track_pane

0xe205,	// (0x000218e3) sp_fs_schedule_track_pane_g1

0xe20d,	// (0x000218eb) sp_fs_schedule_track_pane_g2

0xe215,	// (0x000218f3) sp_fs_schedule_track_pane_g3

0xe21d,	// (0x000218fb) sp_fs_schedule_track_pane_g4

0xe225,	// (0x00021903) sp_fs_schedule_track_pane_g5

0x0004,

0xfe0b,	// (0x000234e9) sp_fs_schedule_track_pane_g

0x52e8,	// (0x000189c6) bg_sp_fs_schedule_viewer_highlight_g1

0x23a2,	// (0x00015a80) bg_sp_fs_schedule_viewer_highlight_g2

0x52f0,	// (0x000189ce) bg_sp_fs_schedule_viewer_highlight_g3

0x52f8,	// (0x000189d6) bg_sp_fs_schedule_viewer_highlight_g4

0x55ab,	// (0x00018c89) bg_sp_fs_schedule_viewer_highlight_g5

0x5308,	// (0x000189e6) bg_sp_fs_schedule_viewer_highlight_g6

0x5310,	// (0x000189ee) bg_sp_fs_schedule_viewer_highlight_g7

0x5318,	// (0x000189f6) bg_sp_fs_schedule_viewer_highlight_g8

0x2382,	// (0x00015a60) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfe16,	// (0x000234f4) bg_sp_fs_schedule_viewer_highlight_g

0x1616,	// (0x00014cf4) bg_main_sp_fs_ribbon_pane

0xe22d,	// (0x0002190b) main_sp_fs_ribbon_pane_g1

0xe236,	// (0x00021914) main_sp_fs_ribbon_pane_t1

0xe245,	// (0x00021923) main_sp_fs_ribbon_pane_t2

0xe254,	// (0x00021932) main_sp_fs_ribbon_pane_t3

0x0002,

0xfe29,	// (0x00023507) main_sp_fs_ribbon_pane_t

0xe263,	// (0x00021941) main_sp_fs_ribbon_scheduler_pane

0xe26b,	// (0x00021949) bg_main_sp_fs_ribbon_pane_g1

0xe274,	// (0x00021952) bg_main_sp_fs_ribbon_pane_g2

0xe27d,	// (0x0002195b) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfe30,	// (0x0002350e) bg_main_sp_fs_ribbon_pane_g

0xe285,	// (0x00021963) main_sp_fs_ribbon_scheduler_pane_g1

0xe28e,	// (0x0002196c) main_sp_fs_ribbon_scheduler_pane_g2

0xe297,	// (0x00021975) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfe37,	// (0x00023515) main_sp_fs_ribbon_scheduler_pane_g

0x64b0,	// (0x00019b8e) list_cale_mrui_pane

0xe2a0,	// (0x0002197e) sp_fs_scroll_pane_cp07_ParamLimits

0xe2a0,	// (0x0002197e) sp_fs_scroll_pane_cp07

0xe2b5,	// (0x00021993) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xe2b5,	// (0x00021993) bg_sp_fs_schedule_viewer_highlight

0xe2c2,	// (0x000219a0) list_single_sp_fs_schedule_track_pane_cp01

0xe2ca,	// (0x000219a8) list_sp_fs_schedule_track_pane

0xe2d2,	// (0x000219b0) sp_fs_scroll_pane_cp06_ParamLimits

0xe2d2,	// (0x000219b0) sp_fs_scroll_pane_cp06

0x465a,	// (0x00017d38) bgmain_sp_fs_calendar_pane_g1

0xe2e4,	// (0x000219c2) list_single_cale_mrui_pane_ParamLimits

0xe2e4,	// (0x000219c2) list_single_cale_mrui_pane

0xe30a,	// (0x000219e8) list_single_cale_mrui_row_pane_ParamLimits

0xe30a,	// (0x000219e8) list_single_cale_mrui_row_pane

0xe317,	// (0x000219f5) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe317,	// (0x000219f5) list_single_cale_mrui_row_pane_g1

0xe34f,	// (0x00021a2d) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe34f,	// (0x00021a2d) list_single_cale_mrui_row_pane_t1

0xe361,	// (0x00021a3f) list_single_cale_mrui_row_pane_t2_ParamLimits

0xe361,	// (0x00021a3f) list_single_cale_mrui_row_pane_t2

0xe3c7,	// (0x00021aa5) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe3c7,	// (0x00021aa5) list_single_cale_mrui_row_pane_t3

0xe3f6,	// (0x00021ad4) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe3f6,	// (0x00021ad4) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe43,	// (0x00023521) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe43,	// (0x00023521) list_single_cale_mrui_row_pane_t

0xe425,	// (0x00021b03) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0xe425,	// (0x00021b03) list_single_cmail_header_editor_pane_bg_cp01

0xe449,	// (0x00021b27) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0xe449,	// (0x00021b27) list_single_cmail_header_editor_pane_bg_cp02

0xe467,	// (0x00021b45) main_radioblah_text_pane_t1_ParamLimits

0xe467,	// (0x00021b45) main_radioblah_text_pane_t1

0xe480,	// (0x00021b5e) cam6_indi_pane_cp01

0xe488,	// (0x00021b66) cam6_mode_pane_cp01

0xe490,	// (0x00021b6e) cam6_pano_pane

0xe499,	// (0x00021b77) cam6_zoom_pane_cp01

0xe4a1,	// (0x00021b7f) cam6_pano_image_pane

0xe4aa,	// (0x00021b88) cam6_pano_pane_g1

0x61bc,	// (0x0001989a) cam6_pano_pane_g2

0xe4b3,	// (0x00021b91) cam6_pano_pane_g3

0xe4bc,	// (0x00021b9a) cam6_pano_pane_g4

0x4bc0,	// (0x0001829e) cam6_pano_pane_g5

0xe4c5,	// (0x00021ba3) cam6_pano_pane_g6

0xe4cd,	// (0x00021bab) cam6_pano_pane_g7

0xe4d5,	// (0x00021bb3) cam6_pano_pane_g8

0xe4de,	// (0x00021bbc) cam6_pano_pane_g9

0x0008,

0xfe4c,	// (0x0002352a) cam6_pano_pane_g

0x1616,	// (0x00014cf4) main_browser_tag_pane

0xe032,	// (0x00021710) grid_navstr_albumart_pane

0xe4e7,	// (0x00021bc5) cell_navstr_albumart_pane_ParamLimits

0xe4e7,	// (0x00021bc5) cell_navstr_albumart_pane

0x2dca,	// (0x000164a8) cell_navstr_albumart_pane_g1

0x3f14,	// (0x000175f2) cell_navstr_albumart_pane_g2

0x3f24,	// (0x00017602) cell_navstr_albumart_pane_g3

0x3f1c,	// (0x000175fa) cell_navstr_albumart_pane_g4

0x0003,

0xfe5f,	// (0x0002353d) cell_navstr_albumart_pane_g

0xe4fe,	// (0x00021bdc) bt_list_pane_ParamLimits

0xe4fe,	// (0x00021bdc) bt_list_pane

0xe513,	// (0x00021bf1) bt_list_pane_t1

0xe522,	// (0x00021c00) bt_list_pane_t2

0x0001,

0xfe68,	// (0x00023546) bt_list_pane_t

0x1616,	// (0x00014cf4) main_cale_prevew_pane

0xe531,	// (0x00021c0f) popup_cale_preview_window_ParamLimits

0xe531,	// (0x00021c0f) popup_cale_preview_window

0x1669,	// (0x00014d47) bg_popup_preview_window_pane_cp05_ParamLimits

0x1669,	// (0x00014d47) bg_popup_preview_window_pane_cp05

0xe546,	// (0x00021c24) list_cale_preview_pane_ParamLimits

0xe546,	// (0x00021c24) list_cale_preview_pane

0xe552,	// (0x00021c30) list_double_cale_preview_pane_ParamLimits

0xe552,	// (0x00021c30) list_double_cale_preview_pane

0xe563,	// (0x00021c41) list_single_cale_preview_pane_ParamLimits

0xe563,	// (0x00021c41) list_single_cale_preview_pane

0xe577,	// (0x00021c55) list_single_cale_preview_pane_g1

0xe57f,	// (0x00021c5d) list_single_cale_preview_pane_t1_ParamLimits

0xe57f,	// (0x00021c5d) list_single_cale_preview_pane_t1

0xe594,	// (0x00021c72) list_double_cale_preview_pane_g1

0xe59c,	// (0x00021c7a) list_double_cale_preview_pane_t1_ParamLimits

0xe59c,	// (0x00021c7a) list_double_cale_preview_pane_t1

0xe5b1,	// (0x00021c8f) list_double_cale_preview_pane_t2_ParamLimits

0xe5b1,	// (0x00021c8f) list_double_cale_preview_pane_t2

0x0001,

0xfe6d,	// (0x0002354b) list_double_cale_preview_pane_t_ParamLimits

0xfe6d,	// (0x0002354b) list_double_cale_preview_pane_t

0x1616,	// (0x00014cf4) main_ezdial_pane

0x1669,	// (0x00014d47) main_sp_fs_email_pane_ParamLimits

0xd828,	// (0x00020f06) cmail_ddmenu_btn01_pane_ParamLimits

0xd828,	// (0x00020f06) cmail_ddmenu_btn01_pane

0xd845,	// (0x00020f23) cmail_ddmenu_btn02_pane_ParamLimits

0xd845,	// (0x00020f23) cmail_ddmenu_btn02_pane

0xd89b,	// (0x00020f79) cmail_ddmenu_btn03_pane_ParamLimits

0xd89b,	// (0x00020f79) cmail_ddmenu_btn03_pane

0xd8f4,	// (0x00020fd2) main_sp_fs_ctrlbar_pane_ParamLimits

0xd90c,	// (0x00020fea) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xde8d,	// (0x0002156b) list_cmail_body_pane_ParamLimits

0xdedd,	// (0x000215bb) bg_button_pane_cp12

0xdf07,	// (0x000215e5) list_single_cmail_header_detail_pane_g3_ParamLimits

0xdf07,	// (0x000215e5) list_single_cmail_header_detail_pane_g3

0xdf46,	// (0x00021624) list_single_cmail_header_detail_pane_t2_ParamLimits

0xdf46,	// (0x00021624) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdf2,	// (0x000234d0) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdf2,	// (0x000234d0) list_single_cmail_header_detail_pane_t

0xe0ed,	// (0x000217cb) phacti_term_pane_t2_ParamLimits

0xe0ed,	// (0x000217cb) phacti_term_pane_t2

0x0001,

0xfdfc,	// (0x000234da) phacti_term_pane_t_ParamLimits

0xfdfc,	// (0x000234da) phacti_term_pane_t

0xe5c9,	// (0x00021ca7) aid_size_list_single_double

0xe5d5,	// (0x00021cb3) popup_ezdial_listscroll_window

0xe5ee,	// (0x00021ccc) popup_number_entry_window_cp01

0x2c41,	// (0x0001631f) bg_popup_call_pane_cp09

0xe5fa,	// (0x00021cd8) ezdial_list_pane

0xe602,	// (0x00021ce0) scroll_pane_cp23

0x4447,	// (0x00017b25) bg_button_pane_cp028_ParamLimits

0x4447,	// (0x00017b25) bg_button_pane_cp028

0xe60a,	// (0x00021ce8) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xe60a,	// (0x00021ce8) cmail_ddmenu_btn01_pane_g1

0xe61c,	// (0x00021cfa) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xe61c,	// (0x00021cfa) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe72,	// (0x00023550) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe72,	// (0x00023550) cmail_ddmenu_btn01_pane_g

0xe628,	// (0x00021d06) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xe628,	// (0x00021d06) cmail_ddmenu_btn01_pane_t1

0x4137,	// (0x00017815) bg_button_pane_cp029_ParamLimits

0x4137,	// (0x00017815) bg_button_pane_cp029

0xe61c,	// (0x00021cfa) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xe61c,	// (0x00021cfa) cmail_ddmenu_btn02_pane_g1

0xe649,	// (0x00021d27) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xe649,	// (0x00021d27) cmail_ddmenu_btn02_pane_t1

0x439c,	// (0x00017a7a) bg_button_pane_cp031_ParamLimits

0x439c,	// (0x00017a7a) bg_button_pane_cp031

0xe61c,	// (0x00021cfa) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xe61c,	// (0x00021cfa) cmail_ddmenu_btn03_pane_g1

0xe649,	// (0x00021d27) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xe649,	// (0x00021d27) cmail_ddmenu_btn03_pane_t1

0xbe9e,	// (0x0001f57c) cell_dialer2_keypad_pane_t1_ParamLimits

0xbeb8,	// (0x0001f596) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xbeb8,	// (0x0001f596) cell_dialer2_keypad_pane_t1_copy1

0xd0e9,	// (0x000207c7) ncimui_group_button_pane

0x1669,	// (0x00014d47) main_sp_fs_calendar_pane_ParamLimits

0xde8d,	// (0x0002156b) list_single_cmail_header_caption_pane_ParamLimits

0xe144,	// (0x00021822) aid_recal_txt_sm_pane

0x1616,	// (0x00014cf4) mian_recal_day_pane

0xe19e,	// (0x0002187c) popup_sp_fs_cale_preview_window_ParamLimits

0x1616,	// (0x00014cf4) list_recal_day_pane

0xe686,	// (0x00021d64) list_single_recal_day_pane_ParamLimits

0xe686,	// (0x00021d64) list_single_recal_day_pane

0xe698,	// (0x00021d76) list_single_recal_day_pane_g1_ParamLimits

0xe698,	// (0x00021d76) list_single_recal_day_pane_g1

0xe6a4,	// (0x00021d82) list_single_recal_day_pane_g2_ParamLimits

0xe6a4,	// (0x00021d82) list_single_recal_day_pane_g2

0xe6b0,	// (0x00021d8e) list_single_recal_day_pane_g3_ParamLimits

0xe6b0,	// (0x00021d8e) list_single_recal_day_pane_g3

0xe6bc,	// (0x00021d9a) list_single_recal_day_pane_g4_ParamLimits

0xe6bc,	// (0x00021d9a) list_single_recal_day_pane_g4

0xe6c8,	// (0x00021da6) list_single_recal_day_pane_g5_ParamLimits

0xe6c8,	// (0x00021da6) list_single_recal_day_pane_g5

0xe6d4,	// (0x00021db2) list_single_recal_day_pane_g6_ParamLimits

0xe6d4,	// (0x00021db2) list_single_recal_day_pane_g6

0x0005,

0xfe81,	// (0x0002355f) list_single_recal_day_pane_g_ParamLimits

0xfe81,	// (0x0002355f) list_single_recal_day_pane_g

0xe6e0,	// (0x00021dbe) list_single_recal_day_pane_t1

0xe6ee,	// (0x00021dcc) list_single_recal_day_pane_t2

0x0001,

0xfe8e,	// (0x0002356c) list_single_recal_day_pane_t

0xe6fc,	// (0x00021dda) ncimui_query_button_pane_ParamLimits

0xe6fc,	// (0x00021dda) ncimui_query_button_pane

0xe70c,	// (0x00021dea) ncimui_query_button_pane_t1_ParamLimits

0xe70c,	// (0x00021dea) ncimui_query_button_pane_t1

0xe71f,	// (0x00021dfd) ncimui_query_button_pane_t2_ParamLimits

0xe71f,	// (0x00021dfd) ncimui_query_button_pane_t2

0x0001,

0xfe93,	// (0x00023571) ncimui_query_button_pane_t_ParamLimits

0xfe93,	// (0x00023571) ncimui_query_button_pane_t

0xe732,	// (0x00021e10) query_button_pane_ParamLimits

0xe732,	// (0x00021e10) query_button_pane

0x1616,	// (0x00014cf4) bg_button_pane_cp0028

0xe73f,	// (0x00021e1d) query_button_pane_t1

0xab3f,	// (0x0001e21d) main_tport_pane_ParamLimits

0xdd79,	// (0x00021457) bg_popup_window_pane_cp01_ParamLimits

0xdd79,	// (0x00021457) bg_popup_window_pane_cp01

0xdd86,	// (0x00021464) heading_pane_cp08_ParamLimits

0xdd86,	// (0x00021464) heading_pane_cp08

0xdd92,	// (0x00021470) heading_pane_cp07_ParamLimits

0xdd92,	// (0x00021470) heading_pane_cp07

0xde12,	// (0x000214f0) cell_tport_appsw_pane_g2

0x0002,

0xfddf,	// (0x000234bd) cell_tport_appsw_pane_g

0x2dc2,	// (0x000164a0) input_candi_list_open_g1

0x25a2,	// (0x00015c80) list_cale_time_pane_g6_ParamLimits

0x25a2,	// (0x00015c80) list_cale_time_pane_g6

0xb214,	// (0x0001e8f2) aid_size_touch_calib_1_ParamLimits

0xb214,	// (0x0001e8f2) aid_size_touch_calib_1

0xb220,	// (0x0001e8fe) aid_size_touch_calib_2_ParamLimits

0xb220,	// (0x0001e8fe) aid_size_touch_calib_2

0xb22c,	// (0x0001e90a) aid_size_touch_calib_3_ParamLimits

0xb22c,	// (0x0001e90a) aid_size_touch_calib_3

0xb23a,	// (0x0001e918) aid_size_touch_calib_4_ParamLimits

0xb23a,	// (0x0001e918) aid_size_touch_calib_4

0xb248,	// (0x0001e926) main_touch_calib_button_group_pane_ParamLimits

0xb248,	// (0x0001e926) main_touch_calib_button_group_pane

0xb255,	// (0x0001e933) main_touch_calib_pane_g1_ParamLimits

0xb261,	// (0x0001e93f) main_touch_calib_pane_g2_ParamLimits

0xb26d,	// (0x0001e94b) main_touch_calib_pane_g3_ParamLimits

0xb279,	// (0x0001e957) main_touch_calib_pane_g4_ParamLimits

0xf7cb,	// (0x00022ea9) main_touch_calib_pane_g_ParamLimits

0xb285,	// (0x0001e963) main_touch_calib_pane_t1_ParamLimits

0xb29a,	// (0x0001e978) main_touch_calib_pane_t2_ParamLimits

0xb2af,	// (0x0001e98d) main_touch_calib_pane_t3_ParamLimits

0xb2c1,	// (0x0001e99f) main_touch_calib_pane_t4_ParamLimits

0xb2d3,	// (0x0001e9b1) main_touch_calib_pane_t5_ParamLimits

0xf7d4,	// (0x00022eb2) main_touch_calib_pane_t_ParamLimits

0x49eb,	// (0x000180c9) list_single_fp_cale_pane_g3_ParamLimits

0x49eb,	// (0x000180c9) list_single_fp_cale_pane_g3

0x811c,	// (0x0001b7fa) bg_button_pane_cp012_ParamLimits

0x811c,	// (0x0001b7fa) bg_vkb2_func_pane_cp03_ParamLimits

0x84cf,	// (0x0001bbad) cell_vitu2_function_top_pane_g1_ParamLimits

0x811c,	// (0x0001b7fa) bg_vkb2_func_pane_cp04_ParamLimits

0xd09c,	// (0x0002077a) main_ncimui_button_group_pane_ParamLimits

0xd09c,	// (0x0002077a) main_ncimui_button_group_pane

0xd0d7,	// (0x000207b5) main_ncimui_pane_t3_ParamLimits

0xd0d7,	// (0x000207b5) main_ncimui_pane_t3

0xe087,	// (0x00021765) phacti_button_group_pane

0xe5c9,	// (0x00021ca7) aid_size_list_single_double_ParamLimits

0xe5d5,	// (0x00021cb3) popup_ezdial_listscroll_window_ParamLimits

0xe5ee,	// (0x00021ccc) popup_number_entry_window_cp01_ParamLimits

0xe74d,	// (0x00021e2b) phacti_button_pane_ParamLimits

0xe74d,	// (0x00021e2b) phacti_button_pane

0x1616,	// (0x00014cf4) bg_button_pane_cp14

0xe75c,	// (0x00021e3a) phacti_button_pane_t1

0xe76a,	// (0x00021e48) main_touch_calib_button_pane_ParamLimits

0xe76a,	// (0x00021e48) main_touch_calib_button_pane

0x1dd4,	// (0x000154b2) bg_button_pane_cp18_ParamLimits

0x1dd4,	// (0x000154b2) bg_button_pane_cp18

0xe77a,	// (0x00021e58) main_touch_calib_button_pane_t1_ParamLimits

0xe77a,	// (0x00021e58) main_touch_calib_button_pane_t1

0xe790,	// (0x00021e6e) main_touch_calib_button_pane_t2_ParamLimits

0xe790,	// (0x00021e6e) main_touch_calib_button_pane_t2

0x0001,

0xfe98,	// (0x00023576) main_touch_calib_button_pane_t_ParamLimits

0xfe98,	// (0x00023576) main_touch_calib_button_pane_t

0x1616,	// (0x00014cf4) cell_ncimui_button_pane

0x1616,	// (0x00014cf4) bg_button_pane_cp032

0xe7ae,	// (0x00021e8c) cell_ncimui_button_pane_t1

0x7e55,	// (0x0001b533) image3_infobar_pane_ParamLimits

0x7e55,	// (0x0001b533) image3_infobar_pane

0xd3e6,	// (0x00020ac4) fs_bigclock_status_pane_ParamLimits

0xd3e6,	// (0x00020ac4) fs_bigclock_status_pane

0xd3f3,	// (0x00020ad1) main_fs_bigclock_clock_pane_ParamLimits

0xd3f3,	// (0x00020ad1) main_fs_bigclock_clock_pane

0xd403,	// (0x00020ae1) main_fs_bigclock_indi_pane_ParamLimits

0xd403,	// (0x00020ae1) main_fs_bigclock_indi_pane

0xd428,	// (0x00020b06) main_fs_bigclock_swipe_pane_ParamLimits

0xd428,	// (0x00020b06) main_fs_bigclock_swipe_pane

0x1616,	// (0x00014cf4) main_fs_clock_dumped_data

0x62c9,	// (0x000199a7) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x62c9,	// (0x000199a7) list_single_fs_bigclock_indicator_pane_g1

0x62e3,	// (0x000199c1) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x62e3,	// (0x000199c1) list_single_fs_bigclock_indicator_pane_g2

0x62fd,	// (0x000199db) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x62fd,	// (0x000199db) list_single_fs_bigclock_indicator_pane_g3

0x6317,	// (0x000199f5) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x6317,	// (0x000199f5) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfcd5,	// (0x000233b3) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfcd5,	// (0x000233b3) list_single_fs_bigclock_indicator_pane_g

0x633b,	// (0x00019a19) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x633b,	// (0x00019a19) list_single_fs_bigclock_indicator_pane_t1

0x6363,	// (0x00019a41) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x6363,	// (0x00019a41) list_single_fs_bigclock_indicator_pane_t2

0x638b,	// (0x00019a69) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x638b,	// (0x00019a69) list_single_fs_bigclock_indicator_pane_t3

0x63b3,	// (0x00019a91) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x63b3,	// (0x00019a91) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfce0,	// (0x000233be) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfce0,	// (0x000233be) list_single_fs_bigclock_indicator_pane_t

0xe7bc,	// (0x00021e9a) image3_infobar_fav_pane_ParamLimits

0xe7bc,	// (0x00021e9a) image3_infobar_fav_pane

0xe7cc,	// (0x00021eaa) image3_infobar_loc_pane_ParamLimits

0xe7cc,	// (0x00021eaa) image3_infobar_loc_pane

0xe7e0,	// (0x00021ebe) image3_infobar_time_pane_ParamLimits

0xe7e0,	// (0x00021ebe) image3_infobar_time_pane

0x465a,	// (0x00017d38) image3_infobar_time_pane_g1

0xe7f0,	// (0x00021ece) image3_infobar_time_pane_t1

0x465a,	// (0x00017d38) image3_infobar_loc_pane_g1

0xe7fe,	// (0x00021edc) image3_infobar_loc_pane_g2

0x0001,

0xfe9d,	// (0x0002357b) image3_infobar_loc_pane_g

0xe806,	// (0x00021ee4) image3_infobar_loc_pane_t1

0x465a,	// (0x00017d38) image3_infobar_fav_pane_g1

0xe814,	// (0x00021ef2) image3_infobar_fav_pane_g2

0x0001,

0xfea2,	// (0x00023580) image3_infobar_fav_pane_g

0xe81c,	// (0x00021efa) fs_bigclock_status_battery_pane

0xe825,	// (0x00021f03) fs_bigclock_status_signal_pane

0xe82e,	// (0x00021f0c) fs_bigclock_status_title_pane

0xe837,	// (0x00021f15) fs_bigclock_status_signal_pane_g1

0xe840,	// (0x00021f1e) fs_bigclock_status_signal_pane_g2

0x0001,

0xfea7,	// (0x00023585) fs_bigclock_status_signal_pane_g

0xe848,	// (0x00021f26) fs_bigclock_status_battery_pane_g1

0xe851,	// (0x00021f2f) fs_bigclock_status_battery_pane_g2

0x0001,

0xfeac,	// (0x0002358a) fs_bigclock_status_battery_pane_g

0xe859,	// (0x00021f37) fs_bigclock_status_title_pane_t1

0x465a,	// (0x00017d38) main_fs_bigclock_clock_pane_g1

0xe867,	// (0x00021f45) main_fs_bigclock_clock_pane_g2

0xe867,	// (0x00021f45) main_fs_bigclock_clock_pane_g3

0xe867,	// (0x00021f45) main_fs_bigclock_clock_pane_g4

0x0003,

0xfeb1,	// (0x0002358f) main_fs_bigclock_clock_pane_g

0xe86f,	// (0x00021f4d) main_fs_bigclock_clock_pane_t1

0xe87d,	// (0x00021f5b) main_fs_bigclock_clock_pane_t2

0x0001,

0xfeba,	// (0x00023598) main_fs_bigclock_clock_pane_t

0xe88c,	// (0x00021f6a) list_single_fs_bigclock_indicator_pane_ParamLimits

0xe88c,	// (0x00021f6a) list_single_fs_bigclock_indicator_pane

0xe89d,	// (0x00021f7b) list_single_fs_bigclock_pane_ParamLimits

0xe89d,	// (0x00021f7b) list_single_fs_bigclock_pane

0xe904,	// (0x00021fe2) main_fs_bigclock_indicator_pane_t1

0xe913,	// (0x00021ff1) list_single_fs_bigclock_pane_g1

0xe91b,	// (0x00021ff9) list_single_fs_bigclock_pane_t1

0x465a,	// (0x00017d38) main_fs_bigclock_swipe_pane_g1

0xe959,	// (0x00022037) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfecb,	// (0x000235a9) main_fs_bigclock_swipe_pane_g

0xe961,	// (0x0002203f) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xe961,	// (0x0002203f) main_fs_bigclock_swipe_pane_t1

0x9de7,	// (0x0001d4c5) call_type_pane_ParamLimits

0x1616,	// (0x00014cf4) main_btmg_pane

0xe343,	// (0x00021a21) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe343,	// (0x00021a21) list_single_cale_mrui_row_pane_g2

0x0001,

0xfe3e,	// (0x0002351c) list_single_cale_mrui_row_pane_g_ParamLimits

0xfe3e,	// (0x0002351c) list_single_cale_mrui_row_pane_g

0xe676,	// (0x00021d54) list_recal_vselct_arw_lo_pane

0xe67e,	// (0x00021d5c) list_recal_vselct_arw_up_pane

0xe66d,	// (0x00021d4b) list_recal_vselct_pane

0xe97e,	// (0x0002205c) btmg_button_pane

0xe986,	// (0x00022064) main_btmg_pane_g1

0x1616,	// (0x00014cf4) bg_button_pane_cp044

0xe98e,	// (0x0002206c) btmg_button_pane_t1

0x412f,	// (0x0001780d) aid_listscroll_gen

0x1669,	// (0x00014d47) main_cntbar_detail_pane

0xde71,	// (0x0002154f) list_cmail_folder_pane

0xde81,	// (0x0002155f) sp_fs_scroll_pane_cp03_ParamLimits

0xe99c,	// (0x0002207a) list_single_fs_dyc_pane_cp01_ParamLimits

0xe99c,	// (0x0002207a) list_single_fs_dyc_pane_cp01

0xe9b4,	// (0x00022092) aid_size_cmail_indent

0x598f,	// (0x0001906d) list_single_dyc_row_pane_cp01

0xe9d7,	// (0x000220b5) cntbar_detail_list_pane_ParamLimits

0xe9d7,	// (0x000220b5) cntbar_detail_list_pane

0xea0d,	// (0x000220eb) main_cntbar_detail_cont_pane_ParamLimits

0xea0d,	// (0x000220eb) main_cntbar_detail_cont_pane

0xea19,	// (0x000220f7) scroll_pane_cp032_ParamLimits

0xea19,	// (0x000220f7) scroll_pane_cp032

0xea25,	// (0x00022103) cntbar_detail_list_event_pane_ParamLimits

0xea25,	// (0x00022103) cntbar_detail_list_event_pane

0xe9e3,	// (0x000220c1) cntbar_detail_list_shct_pane

0xea35,	// (0x00022113) aid_list_gen

0x1f31,	// (0x0001560f) aid_scroll

0x58db,	// (0x00018fb9) aid_size_touch_scroll_bar

0xea3e,	// (0x0002211c) aid_list_double

0xea47,	// (0x00022125) aid_list_single

0x59a1,	// (0x0001907f) aid_list_single_lg

0xea50,	// (0x0002212e) aid_list_z_g_a_sm

0xea58,	// (0x00022136) aid_list_z_g_d

0xea60,	// (0x0002213e) aid_txt_z_prm

0xea6e,	// (0x0002214c) aid_txt_z_prm_cp01

0xea7c,	// (0x0002215a) aid_txt_z_sec

0xea8a,	// (0x00022168) main_cntbar_detail_cont_pane_g1_ParamLimits

0xea8a,	// (0x00022168) main_cntbar_detail_cont_pane_g1

0xea97,	// (0x00022175) main_cntbar_detail_cont_pane_g2_ParamLimits

0xea97,	// (0x00022175) main_cntbar_detail_cont_pane_g2

0x0001,

0xfed0,	// (0x000235ae) main_cntbar_detail_cont_pane_g_ParamLimits

0xfed0,	// (0x000235ae) main_cntbar_detail_cont_pane_g

0xeaa3,	// (0x00022181) main_cntbar_detail_cont_pane_t1

0xeab1,	// (0x0002218f) main_cntbar_detail_cont_pane_t2

0xeabf,	// (0x0002219d) main_cntbar_detail_cont_pane_t3

0x0002,

0xfed5,	// (0x000235b3) main_cntbar_detail_cont_pane_t

0xeacd,	// (0x000221ab) cell_cntbar_detail_list_shct_pane_ParamLimits

0xeacd,	// (0x000221ab) cell_cntbar_detail_list_shct_pane

0xeadf,	// (0x000221bd) cntbar_detail_list_shct_pane_g1

0xeae8,	// (0x000221c6) cntbar_detail_list_shct_pane_g2

0x0001,

0xfedc,	// (0x000235ba) cntbar_detail_list_shct_pane_g

0xeaf1,	// (0x000221cf) cntbar_detail_list_event_pane_g1_ParamLimits

0xeaf1,	// (0x000221cf) cntbar_detail_list_event_pane_g1

0xeafd,	// (0x000221db) cntbar_detail_list_event_pane_g2_ParamLimits

0xeafd,	// (0x000221db) cntbar_detail_list_event_pane_g2

0x0005,

0xfee1,	// (0x000235bf) cntbar_detail_list_event_pane_g_ParamLimits

0xfee1,	// (0x000235bf) cntbar_detail_list_event_pane_g

0xeb69,	// (0x00022247) cntbar_detail_list_event_pane_t1_ParamLimits

0xeb69,	// (0x00022247) cntbar_detail_list_event_pane_t1

0xeb7e,	// (0x0002225c) cntbar_detail_list_event_pane_t2_ParamLimits

0xeb7e,	// (0x0002225c) cntbar_detail_list_event_pane_t2

0x0002,

0xfeee,	// (0x000235cc) cntbar_detail_list_event_pane_t_ParamLimits

0xfeee,	// (0x000235cc) cntbar_detail_list_event_pane_t

0x465a,	// (0x00017d38) cell_cntbar_detail_list_shct_pane_g1

0x2c00,	// (0x000162de) navi_pane_mv_g3

0x1669,	// (0x00014d47) main_cntbar_detail_pane_ParamLimits

0x1616,	// (0x00014cf4) main_notif_wgt_pane

0x7bb4,	// (0x0001b292) aid_tch_main_mp4_pane_g4

0x7ddb,	// (0x0001b4b9) popup_slider_window_cp02

0xe66d,	// (0x00021d4b) list_recal_day_event_pane

0xe9bd,	// (0x0002209b) cntbar_detail_btn_pane_ParamLimits

0xe9bd,	// (0x0002209b) cntbar_detail_btn_pane

0xe9c9,	// (0x000220a7) cntbar_detail_btn_pane_cp01_ParamLimits

0xe9c9,	// (0x000220a7) cntbar_detail_btn_pane_cp01

0xe9e3,	// (0x000220c1) cntbar_detail_list_shct_pane_ParamLimits

0xe9ef,	// (0x000220cd) cntbar_detail_pane_g1_ParamLimits

0xe9ef,	// (0x000220cd) cntbar_detail_pane_g1

0xe9fb,	// (0x000220d9) cntbar_detail_pane_t1_ParamLimits

0xe9fb,	// (0x000220d9) cntbar_detail_pane_t1

0xeb09,	// (0x000221e7) cntbar_detail_list_event_pane_g3_ParamLimits

0xeb09,	// (0x000221e7) cntbar_detail_list_event_pane_g3

0xeb21,	// (0x000221ff) cntbar_detail_list_event_pane_g4_ParamLimits

0xeb21,	// (0x000221ff) cntbar_detail_list_event_pane_g4

0xeb39,	// (0x00022217) cntbar_detail_list_event_pane_g5_ParamLimits

0xeb39,	// (0x00022217) cntbar_detail_list_event_pane_g5

0xeb51,	// (0x0002222f) cntbar_detail_list_event_pane_g6_ParamLimits

0xeb51,	// (0x0002222f) cntbar_detail_list_event_pane_g6

0xeb93,	// (0x00022271) cntbar_detail_list_event_pane_t3_ParamLimits

0xeb93,	// (0x00022271) cntbar_detail_list_event_pane_t3

0xeba5,	// (0x00022283) popup_notif_wgt_window_ParamLimits

0xeba5,	// (0x00022283) popup_notif_wgt_window

0xebb3,	// (0x00022291) popup_submenu_window_cp01_ParamLimits

0xebb3,	// (0x00022291) popup_submenu_window_cp01

0x2c41,	// (0x0001631f) bg_popup_window_pane_cp10

0xebbf,	// (0x0002229d) listscroll_notif_wgt_pane

0xebc7,	// (0x000222a5) list_notif_wgt_window

0xebd0,	// (0x000222ae) scroll_pane_cp033

0xebd9,	// (0x000222b7) list_notif_wgt_row_pane_ParamLimits

0xebd9,	// (0x000222b7) list_notif_wgt_row_pane

0xebeb,	// (0x000222c9) aid_size_list_notif_wgt_del

0xebf4,	// (0x000222d2) list_notif_wgt_row_pane_g1

0xebfc,	// (0x000222da) list_notif_wgt_row_pane_g2

0xec04,	// (0x000222e2) list_notif_wgt_row_pane_g3

0x0002,

0xfef5,	// (0x000235d3) list_notif_wgt_row_pane_g

0xec0d,	// (0x000222eb) list_notif_wgt_row_pane_t1

0xec1b,	// (0x000222f9) list_notif_wgt_row_pane_t2

0xec29,	// (0x00022307) list_notif_wgt_row_pane_t3

0x0002,

0xfefc,	// (0x000235da) list_notif_wgt_row_pane_t

0x55d3,	// (0x00018cb1) list_recal_day_event_pane_g1

0xec37,	// (0x00022315) list_recal_day_event_pane_t1

0x1616,	// (0x00014cf4) bg_button_pane_cp045

0xec46,	// (0x00022324) cntbar_detail_btn_pane_t1

0x4137,	// (0x00017815) main_callh_pane_ParamLimits

0x4137,	// (0x00017815) main_callh_pane

0x1616,	// (0x00014cf4) main_coverflow0_pane

0x1616,	// (0x00014cf4) main_wgtman_pane

0xd43a,	// (0x00020b18) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xd43a,	// (0x00020b18) main_fs_bigclock_unlock_btn_pane

0xde01,	// (0x000214df) bg_button_pane_cp16

0xde1a,	// (0x000214f8) cell_tport_appsw_pane_g3

0xec54,	// (0x00022332) cf0_flow_pane_ParamLimits

0xec54,	// (0x00022332) cf0_flow_pane

0xec63,	// (0x00022341) listscroll_cf0_pane

0xec6c,	// (0x0002234a) main_cf0_pane_g1

0xec76,	// (0x00022354) main_cf0_pane_t1_ParamLimits

0xec76,	// (0x00022354) main_cf0_pane_t1

0xec88,	// (0x00022366) main_cf0_pane_t2_ParamLimits

0xec88,	// (0x00022366) main_cf0_pane_t2

0x0001,

0xff03,	// (0x000235e1) main_cf0_pane_t_ParamLimits

0xff03,	// (0x000235e1) main_cf0_pane_t

0xec9a,	// (0x00022378) scroll_pane_cp11

0xeca3,	// (0x00022381) cf0_flow_pane_g1

0xecab,	// (0x00022389) cf0_flow_pane_g2

0x0001,

0xff08,	// (0x000235e6) cf0_flow_pane_g

0xecb3,	// (0x00022391) cf0_flow_pane_t1

0x1616,	// (0x00014cf4) main_call6_pane

0x1616,	// (0x00014cf4) main_calllock_pane

0xecc1,	// (0x0002239f) call6_btn_grp_pane_ParamLimits

0xecc1,	// (0x0002239f) call6_btn_grp_pane

0xecce,	// (0x000223ac) call6_pane_g1_ParamLimits

0xecce,	// (0x000223ac) call6_pane_g1

0xecdb,	// (0x000223b9) popup_call6_1st_window_ParamLimits

0xecdb,	// (0x000223b9) popup_call6_1st_window

0xece7,	// (0x000223c5) popup_call6_2nd_window_ParamLimits

0xece7,	// (0x000223c5) popup_call6_2nd_window

0xecf3,	// (0x000223d1) cell_call6_btn_pane_ParamLimits

0xecf3,	// (0x000223d1) cell_call6_btn_pane

0x2c41,	// (0x0001631f) bg_popup_call2_in_pane_cp03

0xed02,	// (0x000223e0) popup_call6_1st_window_g1

0xed0a,	// (0x000223e8) popup_call6_1st_window_g2

0xed12,	// (0x000223f0) popup_call6_1st_window_g3

0x0002,

0xff0d,	// (0x000235eb) popup_call6_1st_window_g

0xed1a,	// (0x000223f8) popup_call6_1st_window_t1

0xed29,	// (0x00022407) popup_call6_1st_window_t2

0xed37,	// (0x00022415) popup_call6_1st_window_t3

0x0002,

0xff14,	// (0x000235f2) popup_call6_1st_window_t

0x2c41,	// (0x0001631f) bg_popup_call2_in_pane_cp04

0xed02,	// (0x000223e0) popup_call6_2nd_window_g1

0xed0a,	// (0x000223e8) popup_call6_2nd_window_g2

0xed12,	// (0x000223f0) popup_call6_2nd_window_g3

0x0002,

0xff0d,	// (0x000235eb) popup_call6_2nd_window_g

0xed1a,	// (0x000223f8) popup_call6_2nd_window_t1

0x1616,	// (0x00014cf4) bg_button_pane_cp15

0xed45,	// (0x00022423) cell_call6_btn_pane_g1

0xed4e,	// (0x0002242c) cell_call6_btn_pane_t1

0xed5d,	// (0x0002243b) listscroll_wgtman_pane_ParamLimits

0xed5d,	// (0x0002243b) listscroll_wgtman_pane

0xed6a,	// (0x00022448) wgtman_btn_pane_ParamLimits

0xed6a,	// (0x00022448) wgtman_btn_pane

0x2a82,	// (0x00016160) aid_scroll_copy1

0xed76,	// (0x00022454) list_wgtman_pane

0xed80,	// (0x0002245e) wgtman_btn_pane_g1_ParamLimits

0xed80,	// (0x0002245e) wgtman_btn_pane_g1

0xed8c,	// (0x0002246a) wgtman_btn_pane_t1_ParamLimits

0xed8c,	// (0x0002246a) wgtman_btn_pane_t1

0xed9e,	// (0x0002247c) wgtman_btn_pane_t2_ParamLimits

0xed9e,	// (0x0002247c) wgtman_btn_pane_t2

0x0001,

0xff1b,	// (0x000235f9) wgtman_btn_pane_t_ParamLimits

0xff1b,	// (0x000235f9) wgtman_btn_pane_t

0xedb0,	// (0x0002248e) listrow_wgtman_pane_ParamLimits

0xedb0,	// (0x0002248e) listrow_wgtman_pane

0xedc1,	// (0x0002249f) listrow_wgtman_pane_g1

0xedca,	// (0x000224a8) listrow_wgtman_pane_g2

0x0001,

0xff20,	// (0x000235fe) listrow_wgtman_pane_g

0xedd2,	// (0x000224b0) listrow_wgtman_pane_t1

0xede0,	// (0x000224be) listrow_wgtman_pane_t2

0x0001,

0xff25,	// (0x00023603) listrow_wgtman_pane_t

0xedee,	// (0x000224cc) wait_bar_pane_cp09

0xedf6,	// (0x000224d4) main_calllock_btn_pane

0xedfe,	// (0x000224dc) main_calllock_pane_g1

0x1616,	// (0x00014cf4) bg_button_pane_cp17

0xee07,	// (0x000224e5) main_calllock_btn_pane_g1

0xee10,	// (0x000224ee) main_calllock_btn_pane_t1

0x1616,	// (0x00014cf4) main_dialer3_pane

0x1616,	// (0x00014cf4) main_fmrd2_pane

0x465a,	// (0x00017d38) main_fs_bigclock_unlock_btn_pane_g1

0xee27,	// (0x00022505) main_fs_bigclock_unlock_btn_pane_t1

0xee35,	// (0x00022513) area_fmrd2_info_pane_ParamLimits

0xee35,	// (0x00022513) area_fmrd2_info_pane

0xee42,	// (0x00022520) area_fmrd2_visual_pane_ParamLimits

0xee42,	// (0x00022520) area_fmrd2_visual_pane

0xee50,	// (0x0002252e) fmrd2_indi_pane_ParamLimits

0xee50,	// (0x0002252e) fmrd2_indi_pane

0xee5d,	// (0x0002253b) area_fmrd2_visual_pane_g1

0xee65,	// (0x00022543) area_fmrd2_visual_pane_t1

0xee73,	// (0x00022551) area_fmrd2_visual_pane_t2

0xee81,	// (0x0002255f) area_fmrd2_visual_pane_t3

0x0002,

0xff2f,	// (0x0002360d) area_fmrd2_visual_pane_t

0xee8f,	// (0x0002256d) area_fmrd2_info_pane_g1

0xee97,	// (0x00022575) area_fmrd2_info_pane_t1

0xeea5,	// (0x00022583) area_fmrd2_info_pane_t2

0xeeb3,	// (0x00022591) area_fmrd2_info_pane_t3

0xeec1,	// (0x0002259f) area_fmrd2_info_pane_t4

0x0003,

0xff36,	// (0x00023614) area_fmrd2_info_pane_t

0xeecf,	// (0x000225ad) fmrd2_indi_pane_t1

0xeedd,	// (0x000225bb) fmrd2_indi_pane_t2

0xeeeb,	// (0x000225c9) fmrd2_indi_pane_t3

0x0002,

0xff3f,	// (0x0002361d) fmrd2_indi_pane_t

0x6326,	// (0x00019a04) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x6326,	// (0x00019a04) list_single_fs_bigclock_indicator_pane_g5

0x63c8,	// (0x00019aa6) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x63c8,	// (0x00019aa6) list_single_fs_bigclock_indicator_pane_t5

0xe138,	// (0x00021816) aid_cell_bcale_month_pane_ParamLimits

0xe138,	// (0x00021816) aid_cell_bcale_month_pane

0xe14d,	// (0x0002182b) bcale_month_pane_ParamLimits

0xe14d,	// (0x0002182b) bcale_month_pane

0xe159,	// (0x00021837) bcale_preview_pane_ParamLimits

0xe159,	// (0x00021837) bcale_preview_pane

0xe91b,	// (0x00021ff9) list_single_fs_bigclock_pane_t1_ParamLimits

0xe935,	// (0x00022013) list_single_fs_bigclock_pane_t2_ParamLimits

0xe935,	// (0x00022013) list_single_fs_bigclock_pane_t2

0x0001,

0xfec6,	// (0x000235a4) list_single_fs_bigclock_pane_t_ParamLimits

0xfec6,	// (0x000235a4) list_single_fs_bigclock_pane_t

0xee1f,	// (0x000224fd) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xff2a,	// (0x00023608) main_fs_bigclock_unlock_btn_pane_g

0xeef9,	// (0x000225d7) aid_dia3_key_size_ParamLimits

0xeef9,	// (0x000225d7) aid_dia3_key_size

0xef05,	// (0x000225e3) aid_dia3_listrow_size_ParamLimits

0xef05,	// (0x000225e3) aid_dia3_listrow_size

0xef11,	// (0x000225ef) dia3_keypad_fun_pane_ParamLimits

0xef11,	// (0x000225ef) dia3_keypad_fun_pane

0xef1d,	// (0x000225fb) dia3_keypad_num_pane_ParamLimits

0xef1d,	// (0x000225fb) dia3_keypad_num_pane

0xef29,	// (0x00022607) dia3_listscroll_pane_ParamLimits

0xef29,	// (0x00022607) dia3_listscroll_pane

0xef35,	// (0x00022613) dia3_numentry_pane_ParamLimits

0xef35,	// (0x00022613) dia3_numentry_pane

0xef41,	// (0x0002261f) dia3_list_pane

0xef4a,	// (0x00022628) scroll_pane_cp12

0x1616,	// (0x00014cf4) bg_dia3_numentry_pane

0xef53,	// (0x00022631) dia3_numentry_pane_t1

0xef62,	// (0x00022640) cell_dia3_key_num_pane

0xef6a,	// (0x00022648) cell_dia3_key0_fun_pane_ParamLimits

0xef6a,	// (0x00022648) cell_dia3_key0_fun_pane

0xef77,	// (0x00022655) cell_dia3_key1_fun_pane_ParamLimits

0xef77,	// (0x00022655) cell_dia3_key1_fun_pane

0xef84,	// (0x00022662) dia3_listrow_pane

0x6061,	// (0x0001973f) bg_dia3_numentry_pane_g1

0x1616,	// (0x00014cf4) bg_button_pane_cp21

0xef8d,	// (0x0002266b) cell_dia3_key_num_pane_t1

0xef9b,	// (0x00022679) cell_dia3_key_num_pane_t2

0xefaa,	// (0x00022688) cell_dia3_key_num_pane_t3

0xefb9,	// (0x00022697) cell_dia3_key_num_pane_t4

0x0003,

0xff46,	// (0x00023624) cell_dia3_key_num_pane_t

0x1616,	// (0x00014cf4) bg_button_pane_cp19

0xefc8,	// (0x000226a6) cell_dia3_key0_fun_pane_g1

0x1616,	// (0x00014cf4) bg_button_pane_cp20

0xefd0,	// (0x000226ae) cell_dia3_key1_fun_pane_g1

0xefd8,	// (0x000226b6) area_left_week_number_pane

0xefe1,	// (0x000226bf) area_top_day_name_pane

0xefea,	// (0x000226c8) frame_month_view_pane

0xeff2,	// (0x000226d0) grid_month_view_pane

0xeffc,	// (0x000226da) cell_top_day_name_pane_ParamLimits

0xeffc,	// (0x000226da) cell_top_day_name_pane

0xf012,	// (0x000226f0) cell_area_left_week_number_pane_ParamLimits

0xf012,	// (0x000226f0) cell_area_left_week_number_pane

0xf026,	// (0x00022704) cell_month_view_pane_ParamLimits

0xf026,	// (0x00022704) cell_month_view_pane

0xf041,	// (0x0002271f) frm_month_g1

0xf04a,	// (0x00022728) frm_month_g2

0xf052,	// (0x00022730) frm_month_g3

0xf05a,	// (0x00022738) frm_month_g4

0xf062,	// (0x00022740) frm_month_g5

0xf06a,	// (0x00022748) frm_month_g6

0xf072,	// (0x00022750) frm_month_g7

0xf07a,	// (0x00022758) frm_month_g8

0xf083,	// (0x00022761) frm_month_g9

0xf08c,	// (0x0002276a) frm_month_g10

0xf095,	// (0x00022773) frm_month_g11

0xf09e,	// (0x0002277c) frm_month_g12

0xf0a7,	// (0x00022785) frm_month_g13

0xf0b0,	// (0x0002278e) frm_month_g14

0xf0b9,	// (0x00022797) frm_month_g15

0xf0c2,	// (0x000227a0) frm_month_g16

0x000f,

0xff4f,	// (0x0002362d) frm_month_g

0xf0cb,	// (0x000227a9) cell_top_day_name_pane_t1

0xf0da,	// (0x000227b8) cell_area_left_week_number_pane_g1

0xf0cb,	// (0x000227a9) cell_area_left_week_number_pane_t1

0x465a,	// (0x00017d38) cell_month_view_pane_g1

0xf0e2,	// (0x000227c0) cell_month_view_pane_t1

0x1616,	// (0x00014cf4) main_fps_pane

0xd863,	// (0x00020f41) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xd863,	// (0x00020f41) cmail_ddmenu_btn02_pane_cp1

0xd87f,	// (0x00020f5d) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xd87f,	// (0x00020f5d) cmail_ddmenu_btn02_pane_cp2

0xe63d,	// (0x00021d1b) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xe63d,	// (0x00021d1b) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe77,	// (0x00023555) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe77,	// (0x00023555) cmail_ddmenu_btn02_pane_g

0xe65b,	// (0x00021d39) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xe65b,	// (0x00021d39) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe7c,	// (0x0002355a) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe7c,	// (0x0002355a) cmail_ddmenu_btn02_pane_t

0xf0f1,	// (0x000227cf) fps_text_pane_ParamLimits

0xf0f1,	// (0x000227cf) fps_text_pane

0xf0fe,	// (0x000227dc) main_fps_pane_g1_ParamLimits

0xf0fe,	// (0x000227dc) main_fps_pane_g1

0xf10a,	// (0x000227e8) wait_bar_pane_cp010_ParamLimits

0xf10a,	// (0x000227e8) wait_bar_pane_cp010

0xf116,	// (0x000227f4) fps_text_pane_t1_ParamLimits

0xf116,	// (0x000227f4) fps_text_pane_t1
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

} // end of namespace AknLayoutScalable_Abrw_pqp_apps_qvga_prt_Normal
