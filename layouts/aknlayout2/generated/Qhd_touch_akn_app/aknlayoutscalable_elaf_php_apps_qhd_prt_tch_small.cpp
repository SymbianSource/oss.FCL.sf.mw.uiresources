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

#include "aknlayoutscalable_elaf_php_apps_qhd_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch[]; }

namespace AknLayoutScalable_Elaf_php_apps_qhd_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x000318ca };

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
0x5294,	// (0x00036b5e) Screen

0x52a0,	// (0x00036b6a) application_window

0x5306,	// (0x00036bd0) area_bottom_pane_ParamLimits

0x5306,	// (0x00036bd0) area_bottom_pane

0x535f,	// (0x00036c29) area_top_pane_ParamLimits

0x535f,	// (0x00036c29) area_top_pane

0xc9b7,	// (0x0003e281) call_video_uplink_pane_ParamLimits

0xc9b7,	// (0x0003e281) call_video_uplink_pane

0x53ec,	// (0x00036cb6) main_pane_ParamLimits

0x53ec,	// (0x00036cb6) main_pane

0xf04c,	// (0x00040916) context_pane

0x8324,	// (0x00039bee) navi_pane

0x8344,	// (0x00039c0e) popup_cale_events_window_ParamLimits

0x8344,	// (0x00039c0e) popup_cale_events_window

0xf05f,	// (0x00040929) popup_mup_playback_window

0x835c,	// (0x00039c26) signal_pane

0xd11a,	// (0x0003e9e4) main_browser_pane

0xdbf9,	// (0x0003f4c3) main_burst_pane

0x81ee,	// (0x00039ab8) main_calc_pane

0xdbf9,	// (0x0003f4c3) main_cale_day_pane

0xd11a,	// (0x0003e9e4) main_cale_month_pane

0xdbf9,	// (0x0003f4c3) main_cale_week_pane

0xdbf9,	// (0x0003f4c3) main_call_pane

0xcde8,	// (0x0003e6b2) main_call_poc_pane

0xdbf9,	// (0x0003f4c3) main_camera_pane

0xdbf9,	// (0x0003f4c3) main_chi_dic_pane

0xda7e,	// (0x0003f348) main_clock_pane

0xcde8,	// (0x0003e6b2) main_fmradio_pane

0xdbf9,	// (0x0003f4c3) main_graph_messa_pane

0xcde8,	// (0x0003e6b2) main_help_pane

0xd11a,	// (0x0003e9e4) main_im_pane

0xd043,	// (0x0003e90d) main_image_pane_ParamLimits

0xd043,	// (0x0003e90d) main_image_pane

0xcde8,	// (0x0003e6b2) main_location2_pane

0xdbf9,	// (0x0003f4c3) main_location_pane

0xcde8,	// (0x0003e6b2) main_messa_pane

0xcde8,	// (0x0003e6b2) main_mp2_pane

0xdbf9,	// (0x0003f4c3) main_mp_pane

0xcde8,	// (0x0003e6b2) main_msg_pane

0xcde8,	// (0x0003e6b2) main_mup_eq_pane

0xcde8,	// (0x0003e6b2) main_mup_pane

0xdbf9,	// (0x0003f4c3) main_notes_pane

0xcde8,	// (0x0003e6b2) main_pec_pane

0xcde8,	// (0x0003e6b2) main_phob_pane

0xcde8,	// (0x0003e6b2) main_pinb_pane

0xcde8,	// (0x0003e6b2) main_postcard_pane

0xcde8,	// (0x0003e6b2) main_qdial_pane

0xdbf9,	// (0x0003f4c3) main_skin_pane

0xcde8,	// (0x0003e6b2) main_smil2_pane

0xdbf9,	// (0x0003f4c3) main_smil_pane

0xdbf9,	// (0x0003f4c3) main_video_pane

0xdbf9,	// (0x0003f4c3) main_video_tele_pane

0xd043,	// (0x0003e90d) main_viewer_pane_ParamLimits

0xd043,	// (0x0003e90d) main_viewer_pane

0xdbf9,	// (0x0003f4c3) main_vorec_pane

0x8224,	// (0x00039aee) popup_blid_sat_info_window_ParamLimits

0x8224,	// (0x00039aee) popup_blid_sat_info_window

0x823a,	// (0x00039b04) popup_dyc_status_message_window_ParamLimits

0x823a,	// (0x00039b04) popup_dyc_status_message_window

0x824a,	// (0x00039b14) popup_grid_large_graphic_window_ParamLimits

0x824a,	// (0x00039b14) popup_grid_large_graphic_window

0x82c0,	// (0x00039b8a) popup_loc_request_window_ParamLimits

0x82c0,	// (0x00039b8a) popup_loc_request_window

0x82fc,	// (0x00039bc6) popup_wml_address_window_ParamLimits

0x82fc,	// (0x00039bc6) popup_wml_address_window

0x80c6,	// (0x00039990) call_muted_g1

0x7d88,	// (0x00039652) popup_call_audio_conf_window_ParamLimits

0x7d88,	// (0x00039652) popup_call_audio_conf_window

0x80d6,	// (0x000399a0) popup_call_audio_first_window_ParamLimits

0x80d6,	// (0x000399a0) popup_call_audio_first_window

0x8116,	// (0x000399e0) popup_call_audio_in_window_ParamLimits

0x8116,	// (0x000399e0) popup_call_audio_in_window

0x813a,	// (0x00039a04) popup_call_audio_out_window_ParamLimits

0x813a,	// (0x00039a04) popup_call_audio_out_window

0x815c,	// (0x00039a26) popup_call_audio_second_window_ParamLimits

0x815c,	// (0x00039a26) popup_call_audio_second_window

0x818c,	// (0x00039a56) popup_call_audio_wait_window_ParamLimits

0x818c,	// (0x00039a56) popup_call_audio_wait_window

0x81ad,	// (0x00039a77) popup_number_entry_window_ParamLimits

0x81ad,	// (0x00039a77) popup_number_entry_window

0xc9d5,	// (0x0003e29f) bg_popup_call_pane_cp05_ParamLimits

0xc9d5,	// (0x0003e29f) bg_popup_call_pane_cp05

0xc9f5,	// (0x0003e2bf) popup_number_entry_window_t1

0xca08,	// (0x0003e2d2) popup_number_entry_window_t2

0xca1a,	// (0x0003e2e4) popup_number_entry_window_t3

0x0003,

0xf0ec,	// (0x000409b6) popup_number_entry_window_t

0xca2c,	// (0x0003e2f6) text_title_cp2

0xca3f,	// (0x0003e309) bg_popup_call_pane_cp_ParamLimits

0xca3f,	// (0x0003e309) bg_popup_call_pane_cp

0xca4d,	// (0x0003e317) call_thumbnail_pane

0xca55,	// (0x0003e31f) popup_call_audio_in_window_g1_ParamLimits

0xca55,	// (0x0003e31f) popup_call_audio_in_window_g1

0xca61,	// (0x0003e32b) popup_call_audio_in_window_g2_ParamLimits

0xca61,	// (0x0003e32b) popup_call_audio_in_window_g2

0xca6d,	// (0x0003e337) popup_call_audio_in_window_g3_ParamLimits

0xca6d,	// (0x0003e337) popup_call_audio_in_window_g3

0x0002,

0xf0f5,	// (0x000409bf) popup_call_audio_in_window_g_ParamLimits

0xf0f5,	// (0x000409bf) popup_call_audio_in_window_g

0xca79,	// (0x0003e343) popup_call_audio_in_window_t1_ParamLimits

0xca79,	// (0x0003e343) popup_call_audio_in_window_t1

0xca95,	// (0x0003e35f) popup_call_audio_in_window_t2_ParamLimits

0xca95,	// (0x0003e35f) popup_call_audio_in_window_t2

0xcab1,	// (0x0003e37b) popup_call_audio_in_window_t3_ParamLimits

0xcab1,	// (0x0003e37b) popup_call_audio_in_window_t3

0x0002,

0xf0fc,	// (0x000409c6) popup_call_audio_in_window_t_ParamLimits

0xf0fc,	// (0x000409c6) popup_call_audio_in_window_t

0xca3f,	// (0x0003e309) bg_popup_call_pane_cp01_ParamLimits

0xca3f,	// (0x0003e309) bg_popup_call_pane_cp01

0xca4d,	// (0x0003e317) call_thumbnail_pane_cp02

0xcac4,	// (0x0003e38e) call_type_pane_cp022

0xcacc,	// (0x0003e396) popup_call_audio_out_window_g1_ParamLimits

0xcacc,	// (0x0003e396) popup_call_audio_out_window_g1

0xcade,	// (0x0003e3a8) popup_call_audio_out_window_g2_ParamLimits

0xcade,	// (0x0003e3a8) popup_call_audio_out_window_g2

0xcaea,	// (0x0003e3b4) popup_call_audio_out_window_g3_ParamLimits

0xcaea,	// (0x0003e3b4) popup_call_audio_out_window_g3

0x0002,

0xf103,	// (0x000409cd) popup_call_audio_out_window_g_ParamLimits

0xf103,	// (0x000409cd) popup_call_audio_out_window_g

0xcafc,	// (0x0003e3c6) popup_call_audio_out_window_t1_ParamLimits

0xcafc,	// (0x0003e3c6) popup_call_audio_out_window_t1

0xcb14,	// (0x0003e3de) popup_call_audio_out_window_t2_ParamLimits

0xcb14,	// (0x0003e3de) popup_call_audio_out_window_t2

0x0001,

0xf10a,	// (0x000409d4) popup_call_audio_out_window_t_ParamLimits

0xf10a,	// (0x000409d4) popup_call_audio_out_window_t

0xcb29,	// (0x0003e3f3) bg_popup_call_pane_ParamLimits

0xcb29,	// (0x0003e3f3) bg_popup_call_pane

0x55e7,	// (0x00036eb1) call_thumbnail_pane_cp_ParamLimits

0x55e7,	// (0x00036eb1) call_thumbnail_pane_cp

0xcbad,	// (0x0003e477) call_type_pane_cp01_ParamLimits

0xcbad,	// (0x0003e477) call_type_pane_cp01

0xcbf1,	// (0x0003e4bb) popup_call_audio_first_window_g1_ParamLimits

0xcbf1,	// (0x0003e4bb) popup_call_audio_first_window_g1

0xcc3d,	// (0x0003e507) popup_call_audio_first_window_g2_ParamLimits

0xcc3d,	// (0x0003e507) popup_call_audio_first_window_g2

0x0001,

0xf10f,	// (0x000409d9) popup_call_audio_first_window_g_ParamLimits

0xf10f,	// (0x000409d9) popup_call_audio_first_window_g

0xcc81,	// (0x0003e54b) popup_call_audio_first_window_t1_ParamLimits

0xcc81,	// (0x0003e54b) popup_call_audio_first_window_t1

0xcd2d,	// (0x0003e5f7) popup_call_audio_first_window_t4_ParamLimits

0xcd2d,	// (0x0003e5f7) popup_call_audio_first_window_t4

0xcdb9,	// (0x0003e683) popup_call_audio_first_window_t5_ParamLimits

0xcdb9,	// (0x0003e683) popup_call_audio_first_window_t5

0x0002,

0xf114,	// (0x000409de) popup_call_audio_first_window_t_ParamLimits

0xf114,	// (0x000409de) popup_call_audio_first_window_t

0xcde8,	// (0x0003e6b2) bg_popup_call_pane_cp02

0xcdf2,	// (0x0003e6bc) call_type_pane_cp023

0xcdfa,	// (0x0003e6c4) popup_call_audio_wait_window_g1

0xce02,	// (0x0003e6cc) popup_call_audio_wait_window_g2

0x0001,

0xf11b,	// (0x000409e5) popup_call_audio_wait_window_g

0xce0a,	// (0x0003e6d4) popup_call_audio_wait_window_t3

0xce18,	// (0x0003e6e2) bg_popup_call_pane_cp03_ParamLimits

0xce18,	// (0x0003e6e2) bg_popup_call_pane_cp03

0xce78,	// (0x0003e742) call_thumbnail_pane_cp011_ParamLimits

0xce78,	// (0x0003e742) call_thumbnail_pane_cp011

0xce84,	// (0x0003e74e) call_type_pane_cp034_ParamLimits

0xce84,	// (0x0003e74e) call_type_pane_cp034

0xcec0,	// (0x0003e78a) popup_call_audio_second_window_g1_ParamLimits

0xcec0,	// (0x0003e78a) popup_call_audio_second_window_g1

0xcefc,	// (0x0003e7c6) popup_call_audio_second_window_g2_ParamLimits

0xcefc,	// (0x0003e7c6) popup_call_audio_second_window_g2

0x0001,

0xf120,	// (0x000409ea) popup_call_audio_second_window_g_ParamLimits

0xf120,	// (0x000409ea) popup_call_audio_second_window_g

0xcf38,	// (0x0003e802) popup_call_audio_second_window_t1_ParamLimits

0xcf38,	// (0x0003e802) popup_call_audio_second_window_t1

0xcfb9,	// (0x0003e883) popup_call_audio_second_window_t2_ParamLimits

0xcfb9,	// (0x0003e883) popup_call_audio_second_window_t2

0xcfef,	// (0x0003e8b9) popup_call_audio_second_window_t3_ParamLimits

0xcfef,	// (0x0003e8b9) popup_call_audio_second_window_t3

0x0002,

0xf125,	// (0x000409ef) popup_call_audio_second_window_t_ParamLimits

0xf125,	// (0x000409ef) popup_call_audio_second_window_t

0xcde8,	// (0x0003e6b2) bg_popup_call_pane_cp04

0xd025,	// (0x0003e8ef) list_conf_pane

0xd02d,	// (0x0003e8f7) popup_call_audio_conf_window_t1

0xd03b,	// (0x0003e905) call_thumbnail_pane_g1

0xd043,	// (0x0003e90d) bg_pinb_pane_ParamLimits

0xd043,	// (0x0003e90d) bg_pinb_pane

0xd051,	// (0x0003e91b) find_pinb_pane

0xd05a,	// (0x0003e924) listscroll_pinb_pane_ParamLimits

0xd05a,	// (0x0003e924) listscroll_pinb_pane

0xd069,	// (0x0003e933) pinb_bg_pane_g1

0x560b,	// (0x00036ed5) pinb_bg_pane_g2

0x5617,	// (0x00036ee1) pinb_bg_pane_g3

0x5623,	// (0x00036eed) pinb_bg_pane_g4

0x562f,	// (0x00036ef9) pinb_bg_pane_g5

0x563b,	// (0x00036f05) pinb_bg_pane_g6

0x5646,	// (0x00036f10) pinb_bg_pane_g7

0x5651,	// (0x00036f1b) pinb_bg_pane_g8

0x565c,	// (0x00036f26) pinb_bg_pane_g9

0x5666,	// (0x00036f30) pinb_bg_pane_g10

0x0009,

0xf12c,	// (0x000409f6) pinb_bg_pane_g

0x5683,	// (0x00036f4d) grid_pinb_pane

0x568e,	// (0x00036f58) list_pinb_pane

0x5699,	// (0x00036f63) scroll_pane_cp01_ParamLimits

0x5699,	// (0x00036f63) scroll_pane_cp01

0xd073,	// (0x0003e93d) find_pinb_pane_g1_ParamLimits

0xd073,	// (0x0003e93d) find_pinb_pane_g1

0xd08b,	// (0x0003e955) find_pinb_pane_t1

0xd09d,	// (0x0003e967) find_pinb_pane_t2

0x0001,

0xf146,	// (0x00040a10) find_pinb_pane_t

0xd0b2,	// (0x0003e97c) input_focus_pane_cp01_ParamLimits

0xd0b2,	// (0x0003e97c) input_focus_pane_cp01

0x56ab,	// (0x00036f75) cell_pinb_pane_ParamLimits

0x56ab,	// (0x00036f75) cell_pinb_pane

0x56d0,	// (0x00036f9a) cell_pinb_pane_g1_ParamLimits

0x56d0,	// (0x00036f9a) cell_pinb_pane_g1

0x56e5,	// (0x00036faf) cell_pinb_pane_g2_ParamLimits

0x56e5,	// (0x00036faf) cell_pinb_pane_g2

0xd0be,	// (0x0003e988) cell_pinb_pane_g3_ParamLimits

0xd0be,	// (0x0003e988) cell_pinb_pane_g3

0x0002,

0xf14b,	// (0x00040a15) cell_pinb_pane_g_ParamLimits

0xf14b,	// (0x00040a15) cell_pinb_pane_g

0xcde8,	// (0x0003e6b2) grid_highlight_pane_cp01

0x56f1,	// (0x00036fbb) list_pinb_item_pane_ParamLimits

0x56f1,	// (0x00036fbb) list_pinb_item_pane

0xcde8,	// (0x0003e6b2) list_highlight_pane_cp02

0x5711,	// (0x00036fdb) list_pinb_item_pane_g1_ParamLimits

0x5711,	// (0x00036fdb) list_pinb_item_pane_g1

0xd0ca,	// (0x0003e994) list_pinb_item_pane_g2_ParamLimits

0xd0ca,	// (0x0003e994) list_pinb_item_pane_g2

0x571e,	// (0x00036fe8) list_pinb_item_pane_g3_ParamLimits

0x571e,	// (0x00036fe8) list_pinb_item_pane_g3

0x572f,	// (0x00036ff9) list_pinb_item_pane_g4_ParamLimits

0x572f,	// (0x00036ff9) list_pinb_item_pane_g4

0x0003,

0xf152,	// (0x00040a1c) list_pinb_item_pane_g_ParamLimits

0xf152,	// (0x00040a1c) list_pinb_item_pane_g

0x573b,	// (0x00037005) list_pinb_item_pane_t1_ParamLimits

0x573b,	// (0x00037005) list_pinb_item_pane_t1

0x576c,	// (0x00037036) calc_display_pane

0x578a,	// (0x00037054) calc_paper_pane

0x57a6,	// (0x00037070) grid_calc_pane

0xcde8,	// (0x0003e6b2) bg_list_pane_cp01

0x57d0,	// (0x0003709a) clock_g1

0x57d8,	// (0x000370a2) clock_g2

0x0001,

0xf15b,	// (0x00040a25) clock_g

0x57e2,	// (0x000370ac) clock_t1_ParamLimits

0x57e2,	// (0x000370ac) clock_t1

0x57f7,	// (0x000370c1) clock_t2_ParamLimits

0x57f7,	// (0x000370c1) clock_t2

0x5809,	// (0x000370d3) clock_t3_ParamLimits

0x5809,	// (0x000370d3) clock_t3

0x581b,	// (0x000370e5) clock_t4_ParamLimits

0x581b,	// (0x000370e5) clock_t4

0x582d,	// (0x000370f7) clock_t5_ParamLimits

0x582d,	// (0x000370f7) clock_t5

0x5842,	// (0x0003710c) clock_t6_ParamLimits

0x5842,	// (0x0003710c) clock_t6

0x5854,	// (0x0003711e) clock_t7_ParamLimits

0x5854,	// (0x0003711e) clock_t7

0x5866,	// (0x00037130) clock_t8_ParamLimits

0x5866,	// (0x00037130) clock_t8

0x587c,	// (0x00037146) clock_t9_ParamLimits

0x587c,	// (0x00037146) clock_t9

0x0008,

0xf160,	// (0x00040a2a) clock_t_ParamLimits

0xf160,	// (0x00040a2a) clock_t

0xd0d6,	// (0x0003e9a0) popup_clock_analogue_window_cp02

0xd0d6,	// (0x0003e9a0) popup_clock_digital_window_cp01

0xd0de,	// (0x0003e9a8) listscroll_help_pane

0xcde8,	// (0x0003e6b2) phob_pre_status_pane

0xd0e8,	// (0x0003e9b2) grid_qdial_pane

0xcde8,	// (0x0003e6b2) listscroll_mce_pane

0xd0f2,	// (0x0003e9bc) bg_notes_pane

0xd0fc,	// (0x0003e9c6) list_notes_pane

0x5892,	// (0x0003715c) scroll_pane_cp06

0xd106,	// (0x0003e9d0) bg_calc_paper_pane

0x589d,	// (0x00037167) list_calc_pane

0xd11a,	// (0x0003e9e4) bg_calc_display_pane

0x58b7,	// (0x00037181) calc_display_pane_t1

0x58cc,	// (0x00037196) calc_display_pane_t2

0x58e1,	// (0x000371ab) calc_display_pane_t3

0x0002,

0xf173,	// (0x00040a3d) calc_display_pane_t

0x58f3,	// (0x000371bd) cell_calc_pane_ParamLimits

0x58f3,	// (0x000371bd) cell_calc_pane

0xd126,	// (0x0003e9f0) bg_calc_paper_pane_g1

0xd132,	// (0x0003e9fc) bg_calc_paper_pane_g2

0xd13e,	// (0x0003ea08) bg_calc_paper_pane_g3

0xd14a,	// (0x0003ea14) bg_calc_paper_pane_g4

0xd156,	// (0x0003ea20) bg_calc_paper_pane_g5

0x5920,	// (0x000371ea) bg_calc_paper_pane_g6

0x5931,	// (0x000371fb) bg_calc_paper_pane_g7

0x5942,	// (0x0003720c) bg_calc_paper_pane_g8

0x0007,

0xf17a,	// (0x00040a44) bg_calc_paper_pane_g

0x5953,	// (0x0003721d) calc_bg_paper_pane_g9

0x5964,	// (0x0003722e) list_calc_item_pane_ParamLimits

0x5964,	// (0x0003722e) list_calc_item_pane

0xd162,	// (0x0003ea2c) list_calc_item_pane_g1

0x5993,	// (0x0003725d) list_calc_item_pane_t1_ParamLimits

0x5993,	// (0x0003725d) list_calc_item_pane_t1

0x59a5,	// (0x0003726f) list_calc_item_pane_t2_ParamLimits

0x59a5,	// (0x0003726f) list_calc_item_pane_t2

0x0001,

0xf18b,	// (0x00040a55) list_calc_item_pane_t_ParamLimits

0xf18b,	// (0x00040a55) list_calc_item_pane_t

0xd16f,	// (0x0003ea39) cell_calc_pane_g1

0xd179,	// (0x0003ea43) grid_highlight_pane_cp02

0x043f,	// (0x00031d09) bg_calc_display_pane_g1

0x59d5,	// (0x0003729f) bg_calc_display_pane_g2

0x59df,	// (0x000372a9) bg_calc_display_pane_g3

0x0002,

0xf195,	// (0x00040a5f) bg_calc_display_pane_g

0x59e8,	// (0x000372b2) cell_qdial_pane_ParamLimits

0x59e8,	// (0x000372b2) cell_qdial_pane

0x59fc,	// (0x000372c6) cell_qdial_pane_g1_ParamLimits

0x59fc,	// (0x000372c6) cell_qdial_pane_g1

0x5a09,	// (0x000372d3) cell_qdial_pane_g2_ParamLimits

0x5a09,	// (0x000372d3) cell_qdial_pane_g2

0xd19b,	// (0x0003ea65) cell_qdial_pane_g3_ParamLimits

0xd19b,	// (0x0003ea65) cell_qdial_pane_g3

0x0003,

0xf19c,	// (0x00040a66) cell_qdial_pane_g_ParamLimits

0xf19c,	// (0x00040a66) cell_qdial_pane_g

0x5a27,	// (0x000372f1) cell_qdial_pane_t1_ParamLimits

0x5a27,	// (0x000372f1) cell_qdial_pane_t1

0x5a3f,	// (0x00037309) cell_qdial_pane_t2_ParamLimits

0x5a3f,	// (0x00037309) cell_qdial_pane_t2

0x5a52,	// (0x0003731c) cell_qdial_pane_t3_ParamLimits

0x5a52,	// (0x0003731c) cell_qdial_pane_t3

0x0002,

0xf1a5,	// (0x00040a6f) cell_qdial_pane_t_ParamLimits

0xf1a5,	// (0x00040a6f) cell_qdial_pane_t

0xcde8,	// (0x0003e6b2) grid_highlight_pane_cp04

0xd1a7,	// (0x0003ea71) thumbnail_qdial_pane_ParamLimits

0xd1a7,	// (0x0003ea71) thumbnail_qdial_pane

0xd203,	// (0x0003eacd) list_help_pane

0xd20c,	// (0x0003ead6) scroll_pane_cp02

0x5a65,	// (0x0003732f) help_list_pane_t1_ParamLimits

0x5a65,	// (0x0003732f) help_list_pane_t1

0x5a98,	// (0x00037362) bg_notes_pane_g2

0x5aa0,	// (0x0003736a) bg_notes_pane_g3

0x5aa8,	// (0x00037372) notes_bg_pane_g1

0x5ab0,	// (0x0003737a) notes_bg_pane_g4

0x5ab8,	// (0x00037382) notes_bg_pane_g5

0x5ac0,	// (0x0003738a) notes_bg_pane_g6

0x5ac8,	// (0x00037392) notes_bg_pane_g7

0x5ad0,	// (0x0003739a) notes_bg_pane_g8

0x5ad8,	// (0x000373a2) notes_bg_pane_g9

0x0006,

0xf1c3,	// (0x00040a8d) notes_bg_pane_g

0x5ae0,	// (0x000373aa) list_notes_text_pane_ParamLimits

0x5ae0,	// (0x000373aa) list_notes_text_pane

0xd215,	// (0x0003eadf) list_notes_text_pane_g1

0x4102,	// (0x000359cc) list_notes_text_pane_t1

0xd11a,	// (0x0003e9e4) listscroll_cale_week_pane

0x5b22,	// (0x000373ec) bg_cale_heading_pane

0xd22f,	// (0x0003eaf9) bg_cale_pane_cp01

0x5b3e,	// (0x00037408) cale_week_corner_pane

0x5b54,	// (0x0003741e) cale_week_day_heading_pane

0x5b70,	// (0x0003743a) cale_week_scroll_pane_g1

0x5b89,	// (0x00037453) cale_week_scroll_pane_g2

0x5b9a,	// (0x00037464) cale_week_scroll_pane_g3

0x5bab,	// (0x00037475) cale_week_scroll_pane_g4

0x5bbc,	// (0x00037486) cale_week_scroll_pane_g5

0x5bcd,	// (0x00037497) cale_week_scroll_pane_g6

0x5bde,	// (0x000374a8) cale_week_scroll_pane_g7

0x5bf1,	// (0x000374bb) cale_week_scroll_pane_g8

0x5c04,	// (0x000374ce) cale_week_scroll_pane_g9

0x5c15,	// (0x000374df) cale_week_scroll_pane_g10

0x5c26,	// (0x000374f0) cale_week_scroll_pane_g11

0x5c37,	// (0x00037501) cale_week_scroll_pane_g12

0x5c48,	// (0x00037512) cale_week_scroll_pane_g13

0x5c61,	// (0x0003752b) cale_week_scroll_pane_g14

0x5c7a,	// (0x00037544) cale_week_scroll_pane_g15

0x000e,

0xf1d2,	// (0x00040a9c) cale_week_scroll_pane_g

0x5c93,	// (0x0003755d) cale_week_time_pane

0x5ca6,	// (0x00037570) grid_cale_week_pane

0x5cc3,	// (0x0003758d) scroll_pane_cp08

0x5cdd,	// (0x000375a7) cell_cale_week_pane_ParamLimits

0x5cdd,	// (0x000375a7) cell_cale_week_pane

0x5d29,	// (0x000375f3) cale_week_day_heading_pane_t1

0x5d42,	// (0x0003760c) cale_week_day_heading_pane_t2

0x5d5b,	// (0x00037625) cale_week_day_heading_pane_t3

0x5d74,	// (0x0003763e) cale_week_day_heading_pane_t4

0x5d8d,	// (0x00037657) cale_week_day_heading_pane_t5

0x5da6,	// (0x00037670) cale_week_day_heading_pane_t6

0x5dbf,	// (0x00037689) cale_week_day_heading_pane_t7

0x0006,

0xf1f1,	// (0x00040abb) cale_week_day_heading_pane_t

0xd25a,	// (0x0003eb24) bg_cale_side_pane

0x5dd8,	// (0x000376a2) cale_week_time_pane_t1

0x5df0,	// (0x000376ba) cale_week_time_pane_t2

0x5e08,	// (0x000376d2) cale_week_time_pane_t3

0x5e20,	// (0x000376ea) cale_week_time_pane_t4

0x5e38,	// (0x00037702) cale_week_time_pane_t5

0x5e50,	// (0x0003771a) cale_week_time_pane_t6

0x5e68,	// (0x00037732) cale_week_time_pane_t7

0x5e88,	// (0x00037752) cale_week_time_pane_t8

0x0007,

0xf200,	// (0x00040aca) cale_week_time_pane_t

0x5ea8,	// (0x00037772) cell_cale_week_pane_g2

0x5eb9,	// (0x00037783) cell_cale_week_pane_g3_ParamLimits

0x5eb9,	// (0x00037783) cell_cale_week_pane_g3

0xd268,	// (0x0003eb32) grid_highlight_pane_cp07

0xd270,	// (0x0003eb3a) listscroll_gms_pane

0xd27a,	// (0x0003eb44) grid_gms_pane

0xd283,	// (0x0003eb4d) listscroll_gms_pane_g1

0xd28b,	// (0x0003eb55) listscroll_gms_pane_g2

0x0001,

0xf211,	// (0x00040adb) listscroll_gms_pane_g

0x5ed1,	// (0x0003779b) scroll_pane_cp010

0x5edc,	// (0x000377a6) cell_gms_pane_ParamLimits

0x5edc,	// (0x000377a6) cell_gms_pane

0x5eef,	// (0x000377b9) cell_gms_pane_g1

0xd293,	// (0x0003eb5d) cell_gms_pane_g2

0xd29b,	// (0x0003eb65) cell_gms_pane_g3

0xd2a4,	// (0x0003eb6e) cell_gms_pane_g4

0x0003,

0xf216,	// (0x00040ae0) cell_gms_pane_g

0xd2ad,	// (0x0003eb77) grid_highlight_pane_cp09

0x806e,	// (0x00039938) phob_pre_status_pane_g1

0x8076,	// (0x00039940) phob_pre_status_pane_g2

0x807e,	// (0x00039948) phob_pre_status_pane_g3

0x8086,	// (0x00039950) phob_pre_status_pane_g4

0x0004,

0xf605,	// (0x00040ecf) phob_pre_status_pane_g

0x8096,	// (0x00039960) phob_pre_status_pane_t1

0x80a6,	// (0x00039970) phob_pre_status_pane_t2

0x80b6,	// (0x00039980) phob_pre_status_pane_t3

0x0002,

0xf610,	// (0x00040eda) phob_pre_status_pane_t

0xcde8,	// (0x0003e6b2) bg_list_pane_cp05

0x5eff,	// (0x000377c9) grid_vorec_pane

0x5f09,	// (0x000377d3) vorec_t1

0x5f17,	// (0x000377e1) vorec_t2

0x5f25,	// (0x000377ef) vorec_t3

0x5f33,	// (0x000377fd) vorec_t4

0x5f41,	// (0x0003780b) vorec_t5

0x5f4f,	// (0x00037819) vorec_t6

0x0006,

0xf21f,	// (0x00040ae9) vorec_t

0x5f6b,	// (0x00037835) wait_bar_pane_cp01

0x5f73,	// (0x0003783d) cell_vorec_pane_ParamLimits

0x5f73,	// (0x0003783d) cell_vorec_pane

0xd2b5,	// (0x0003eb7f) cell_vorec_pane_g1

0xcde8,	// (0x0003e6b2) grid_highlight_pane_cp05

0x5f96,	// (0x00037860) cams_zoom_pane

0x5fa2,	// (0x0003786c) image_vga_pane

0x5fb1,	// (0x0003787b) main_camera_pane_g1

0x5fbf,	// (0x00037889) main_camera_pane_g2

0x5fcb,	// (0x00037895) main_camera_pane_g3

0x5fd7,	// (0x000378a1) main_camera_pane_g4

0x5fe3,	// (0x000378ad) main_camera_pane_g5

0x5fef,	// (0x000378b9) main_camera_pane_g6

0x5ffb,	// (0x000378c5) main_camera_pane_g7

0x0007,

0xf22e,	// (0x00040af8) main_camera_pane_g

0x6007,	// (0x000378d1) main_camera_pane_t1

0x6019,	// (0x000378e3) main_camera_pane_t2

0x0001,

0xf23f,	// (0x00040b09) main_camera_pane_t

0x603a,	// (0x00037904) cams_zoom_pane_cp_ParamLimits

0x603a,	// (0x00037904) cams_zoom_pane_cp

0x605e,	// (0x00037928) image_cif_pane_ParamLimits

0x605e,	// (0x00037928) image_cif_pane

0x607c,	// (0x00037946) image_subqcif_pane

0x6084,	// (0x0003794e) main_video_pane_g1_ParamLimits

0x6084,	// (0x0003794e) main_video_pane_g1

0x60a4,	// (0x0003796e) main_video_pane_g2_ParamLimits

0x60a4,	// (0x0003796e) main_video_pane_g2

0x60d4,	// (0x0003799e) main_video_pane_g3_ParamLimits

0x60d4,	// (0x0003799e) main_video_pane_g3

0x60fd,	// (0x000379c7) main_video_pane_g4_ParamLimits

0x60fd,	// (0x000379c7) main_video_pane_g4

0x6126,	// (0x000379f0) main_video_pane_g5_ParamLimits

0x6126,	// (0x000379f0) main_video_pane_g5

0xd2cb,	// (0x0003eb95) main_video_pane_g6_ParamLimits

0xd2cb,	// (0x0003eb95) main_video_pane_g6

0x0006,

0xf244,	// (0x00040b0e) main_video_pane_g_ParamLimits

0xf244,	// (0x00040b0e) main_video_pane_g

0x614a,	// (0x00037a14) main_video_pane_t1_ParamLimits

0x614a,	// (0x00037a14) main_video_pane_t1

0xd2e5,	// (0x0003ebaf) cams_zoom_pane_g1

0xd2ee,	// (0x0003ebb8) cams_zoom_pane_g2

0xd2f7,	// (0x0003ebc1) cams_zoom_pane_g3

0xd300,	// (0x0003ebca) cams_zoom_pane_g4

0x0003,

0xf253,	// (0x00040b1d) cams_zoom_pane_g

0x6194,	// (0x00037a5e) grid_cams_pane

0x61a2,	// (0x00037a6c) linegrid_cams_pane

0x61b0,	// (0x00037a7a) cell_cams_pane_ParamLimits

0x61b0,	// (0x00037a7a) cell_cams_pane

0xd309,	// (0x0003ebd3) cams_burst_image_pane

0xd311,	// (0x0003ebdb) cell_cams_pane_g1

0xcde8,	// (0x0003e6b2) grid_highlight_pane_cp03

0xd16f,	// (0x0003ea39) mp_bg_pane_g1

0xcde8,	// (0x0003e6b2) bg_list_pane_cp03

0xef24,	// (0x000407ee) bg_mp_pane

0xef2c,	// (0x000407f6) grid_mp_pane

0xef34,	// (0x000407fe) media_player_g1

0xef3c,	// (0x00040806) media_player_t1

0xef4a,	// (0x00040814) media_player_t2

0xef58,	// (0x00040822) media_player_t3

0xef66,	// (0x00040830) media_player_t4

0xef74,	// (0x0004083e) media_player_t5

0xef82,	// (0x0004084c) media_player_t6

0xef90,	// (0x0004085a) media_player_t7

0x0006,

0xf5ef,	// (0x00040eb9) media_player_t

0xef9e,	// (0x00040868) wait_bar_pane_cp02

0xf5d4,	// (0x00040e9e) main_usb_pane_t

0x8065,	// (0x0003992f) cell_mp_pane

0xd16f,	// (0x0003ea39) cell_mp_pane_g1

0xcde8,	// (0x0003e6b2) grid_highlight_pane_cp06

0xd319,	// (0x0003ebe3) grid_skin_colour_pane

0xd321,	// (0x0003ebeb) list_highlight_pane_cp03

0x61c3,	// (0x00037a8d) skin_g1

0xd329,	// (0x0003ebf3) skin_t1

0xd338,	// (0x0003ec02) skin_t2

0x0001,

0xf288,	// (0x00040b52) skin_t

0x61cd,	// (0x00037a97) cell_skin_colour_pane_ParamLimits

0x61cd,	// (0x00037a97) cell_skin_colour_pane

0xd346,	// (0x0003ec10) cell_skin_colour_pane_g1

0x624f,	// (0x00037b19) call_video_g1_ParamLimits

0x624f,	// (0x00037b19) call_video_g1

0x625f,	// (0x00037b29) call_video_g2_ParamLimits

0x625f,	// (0x00037b29) call_video_g2

0x0001,

0xf28d,	// (0x00040b57) call_video_g_ParamLimits

0xf28d,	// (0x00040b57) call_video_g

0x62b9,	// (0x00037b83) call_video_uplink_pane_cp1_ParamLimits

0x62b9,	// (0x00037b83) call_video_uplink_pane_cp1

0xd358,	// (0x0003ec22) call_video_uplink_pane_cp2

0x6385,	// (0x00037c4f) video_down_crop_pane_ParamLimits

0x6385,	// (0x00037c4f) video_down_crop_pane

0x6483,	// (0x00037d4d) video_down_pane_ParamLimits

0x6483,	// (0x00037d4d) video_down_pane

0xd360,	// (0x0003ec2a) video_down_subqcif_pane_ParamLimits

0xd360,	// (0x0003ec2a) video_down_subqcif_pane

0xd378,	// (0x0003ec42) video_down_subqcif_pane_cp_ParamLimits

0xd378,	// (0x0003ec42) video_down_subqcif_pane_cp

0xd39c,	// (0x0003ec66) im_reading_pane_ParamLimits

0xd39c,	// (0x0003ec66) im_reading_pane

0x65a5,	// (0x00037e6f) im_writing_pane_ParamLimits

0x65a5,	// (0x00037e6f) im_writing_pane

0x65c3,	// (0x00037e8d) im_reading_pane_t1

0xd3b6,	// (0x0003ec80) list_im_pane

0xd3c7,	// (0x0003ec91) scroll_pane_cp07

0x6617,	// (0x00037ee1) im_writing_pane_t1_ParamLimits

0x6617,	// (0x00037ee1) im_writing_pane_t1

0xd3e0,	// (0x0003ecaa) im_writing_pane_t2_ParamLimits

0xd3e0,	// (0x0003ecaa) im_writing_pane_t2

0x0001,

0xf297,	// (0x00040b61) im_writing_pane_t_ParamLimits

0xf297,	// (0x00040b61) im_writing_pane_t

0xcde8,	// (0x0003e6b2) input_focus_pane_cp04

0xcde8,	// (0x0003e6b2) input_focus_pane_cp05

0x662c,	// (0x00037ef6) list_im_single_pane_ParamLimits

0x662c,	// (0x00037ef6) list_im_single_pane

0x6650,	// (0x00037f1a) list_single_im_pane_t1

0x8029,	// (0x000398f3) blid_accuracy_pane

0x8031,	// (0x000398fb) blid_compass_pane

0x803b,	// (0x00039905) main_location_t1

0x8049,	// (0x00039913) main_location_t2

0x8057,	// (0x00039921) main_location_t3

0x0002,

0xf5fe,	// (0x00040ec8) main_location_t

0xcde8,	// (0x0003e6b2) aid_levels_location

0xd16f,	// (0x0003ea39) blid_accuracy_pane_g1

0xd16f,	// (0x0003ea39) blid_accuracy_pane_g2

0x0001,

0xf2f9,	// (0x00040bc3) blid_accuracy_pane_g

0xd428,	// (0x0003ecf2) wml_content_pane

0xd466,	// (0x0003ed30) wml_button_pane_ParamLimits

0xd466,	// (0x0003ed30) wml_button_pane

0x665f,	// (0x00037f29) wml_list_single_large_pane_ParamLimits

0x665f,	// (0x00037f29) wml_list_single_large_pane

0x6689,	// (0x00037f53) wml_list_single_medium_pane_ParamLimits

0x6689,	// (0x00037f53) wml_list_single_medium_pane

0x66ba,	// (0x00037f84) wml_list_single_small_pane_ParamLimits

0x66ba,	// (0x00037f84) wml_list_single_small_pane

0xd47a,	// (0x0003ed44) wml_selection_box_pane_ParamLimits

0xd47a,	// (0x0003ed44) wml_selection_box_pane

0xd48d,	// (0x0003ed57) wml_list_single_pane_t1

0xd49c,	// (0x0003ed66) wml_list_single_medium_pane_t1

0xd4ab,	// (0x0003ed75) wml_list_single_large_pane_t1

0xd4ba,	// (0x0003ed84) input_focus_pane_cp02_ParamLimits

0xd4ba,	// (0x0003ed84) input_focus_pane_cp02

0xd4cd,	// (0x0003ed97) wml_selection_box_pane_g1

0xd4d6,	// (0x0003eda0) wml_selection_box_pane_t1_ParamLimits

0xd4d6,	// (0x0003eda0) wml_selection_box_pane_t1

0xd043,	// (0x0003e90d) bg_wml_button_pane_ParamLimits

0xd043,	// (0x0003e90d) bg_wml_button_pane

0xd4ee,	// (0x0003edb8) wml_button_pane_g1

0xd4f6,	// (0x0003edc0) wml_button_pane_t1

0xd4ee,	// (0x0003edb8) wml_button_bg_pane_g1

0xd506,	// (0x0003edd0) wml_button_bg_pane_g2

0xd50e,	// (0x0003edd8) wml_button_bg_pane_g3

0xd516,	// (0x0003ede0) wml_button_bg_pane_g4

0xd51e,	// (0x0003ede8) wml_button_bg_pane_g5

0xd526,	// (0x0003edf0) wml_button_bg_pane_g6

0xd52e,	// (0x0003edf8) wml_button_bg_pane_g7

0xd536,	// (0x0003ee00) wml_button_bg_pane_g8

0xd53e,	// (0x0003ee08) wml_button_bg_pane_g9

0x0008,

0xf29c,	// (0x00040b66) wml_button_bg_pane_g

0x66f4,	// (0x00037fbe) bg_list_pane_cp02

0xd546,	// (0x0003ee10) mce_header_pane_ParamLimits

0xd546,	// (0x0003ee10) mce_header_pane

0xd55c,	// (0x0003ee26) mce_icon_pane

0xd55c,	// (0x0003ee26) mce_image_pane

0xd565,	// (0x0003ee2f) mce_text_pane_ParamLimits

0xd565,	// (0x0003ee2f) mce_text_pane

0x66fe,	// (0x00037fc8) scroll_pane_cp03

0xd45e,	// (0x0003ed28) scroll_pane_cp04

0xd578,	// (0x0003ee42) scroll_pane_cp05_ParamLimits

0xd578,	// (0x0003ee42) scroll_pane_cp05

0x6708,	// (0x00037fd2) mce_header_field_pane_ParamLimits

0x6708,	// (0x00037fd2) mce_header_field_pane

0x6728,	// (0x00037ff2) mce_header_field_pane_2_ParamLimits

0x6728,	// (0x00037ff2) mce_header_field_pane_2

0x673e,	// (0x00038008) mce_header_field_pane_3

0x6746,	// (0x00038010) list_single_mce_message_pane_ParamLimits

0x6746,	// (0x00038010) list_single_mce_message_pane

0x676b,	// (0x00038035) list_single_mce_smart_pane_ParamLimits

0x676b,	// (0x00038035) list_single_mce_smart_pane

0xd584,	// (0x0003ee4e) input_focus_pane_cp03

0xd58d,	// (0x0003ee57) list_header_data_pane

0x679b,	// (0x00038065) mce_header_field_pane_t1

0x67a9,	// (0x00038073) list_single_mce_header_pane_ParamLimits

0x67a9,	// (0x00038073) list_single_mce_header_pane

0xd595,	// (0x0003ee5f) list_single_mce_header_pane_t1

0xd5a4,	// (0x0003ee6e) list_single_mce_message_pane_g1

0xd5ac,	// (0x0003ee76) list_single_mce_message_pane_t1

0x67ed,	// (0x000380b7) bg_cale_heading_pane_cp01_ParamLimits

0x67ed,	// (0x000380b7) bg_cale_heading_pane_cp01

0xd5ba,	// (0x0003ee84) bg_cale_pane_cp02_ParamLimits

0xd5ba,	// (0x0003ee84) bg_cale_pane_cp02

0x6820,	// (0x000380ea) cale_month_corner_pane

0x6836,	// (0x00038100) cale_month_day_heading_pane_ParamLimits

0x6836,	// (0x00038100) cale_month_day_heading_pane

0x6879,	// (0x00038143) cale_month_pane_g1_ParamLimits

0x6879,	// (0x00038143) cale_month_pane_g1

0x68a5,	// (0x0003816f) cale_month_pane_g2_ParamLimits

0x68a5,	// (0x0003816f) cale_month_pane_g2

0x68c8,	// (0x00038192) cale_month_pane_g3_ParamLimits

0x68c8,	// (0x00038192) cale_month_pane_g3

0x6904,	// (0x000381ce) cale_month_pane_g4_ParamLimits

0x6904,	// (0x000381ce) cale_month_pane_g4

0x6940,	// (0x0003820a) cale_month_pane_g5_ParamLimits

0x6940,	// (0x0003820a) cale_month_pane_g5

0x697c,	// (0x00038246) cale_month_pane_g6_ParamLimits

0x697c,	// (0x00038246) cale_month_pane_g6

0x69b8,	// (0x00038282) cale_month_pane_g7_ParamLimits

0x69b8,	// (0x00038282) cale_month_pane_g7

0x6a04,	// (0x000382ce) cale_month_pane_g8_ParamLimits

0x6a04,	// (0x000382ce) cale_month_pane_g8

0x6a50,	// (0x0003831a) cale_month_pane_g9_ParamLimits

0x6a50,	// (0x0003831a) cale_month_pane_g9

0x6a96,	// (0x00038360) cale_month_pane_g10_ParamLimits

0x6a96,	// (0x00038360) cale_month_pane_g10

0x6ad0,	// (0x0003839a) cale_month_pane_g11_ParamLimits

0x6ad0,	// (0x0003839a) cale_month_pane_g11

0x6b0e,	// (0x000383d8) cale_month_pane_g12_ParamLimits

0x6b0e,	// (0x000383d8) cale_month_pane_g12

0x6b4c,	// (0x00038416) cale_month_pane_g13_ParamLimits

0x6b4c,	// (0x00038416) cale_month_pane_g13

0x000c,

0xf2af,	// (0x00040b79) cale_month_pane_g_ParamLimits

0xf2af,	// (0x00040b79) cale_month_pane_g

0x6b8a,	// (0x00038454) cale_month_week_pane

0x6b9d,	// (0x00038467) grid_cale_month_pane_ParamLimits

0x6b9d,	// (0x00038467) grid_cale_month_pane

0x6bdb,	// (0x000384a5) cale_month_day_heading_pane_t1

0x6c39,	// (0x00038503) cale_month_day_heading_pane_t2

0x6c9e,	// (0x00038568) cale_month_day_heading_pane_t3

0x6d03,	// (0x000385cd) cale_month_day_heading_pane_t4

0x6d68,	// (0x00038632) cale_month_day_heading_pane_t5

0x6dcd,	// (0x00038697) cale_month_day_heading_pane_t6

0x6e32,	// (0x000386fc) cale_month_day_heading_pane_t7

0x0006,

0xf2ca,	// (0x00040b94) cale_month_day_heading_pane_t

0xd25a,	// (0x0003eb24) bg_cale_side_pane_cp01

0x6ea7,	// (0x00038771) cale_month_week_pane_t1

0x6ebe,	// (0x00038788) cale_month_week_pane_t2

0x6ed5,	// (0x0003879f) cale_month_week_pane_t3

0x6eec,	// (0x000387b6) cale_month_week_pane_t4

0x6f03,	// (0x000387cd) cale_month_week_pane_t5

0x6f1e,	// (0x000387e8) cale_month_week_pane_t6

0x0005,

0xf2d9,	// (0x00040ba3) cale_month_week_pane_t

0x6f3d,	// (0x00038807) cell_cale_month_pane_ParamLimits

0x6f3d,	// (0x00038807) cell_cale_month_pane

0x7003,	// (0x000388cd) cell_cale_month_pane_g1

0x700f,	// (0x000388d9) cell_cale_month_pane_t1_ParamLimits

0x700f,	// (0x000388d9) cell_cale_month_pane_t1

0xd268,	// (0x0003eb32) grid_highlight_pane_cp08

0xd16f,	// (0x0003ea39) main_smil_g1

0x702b,	// (0x000388f5) smil_status_pane

0xd5ef,	// (0x0003eeb9) smil_text_pane

0xee44,	// (0x0004070e) bg_popup_call3_rect_pane_g8

0xee4c,	// (0x00040716) bg_popup_call3_rect_pane_g9

0x0008,

0xf592,	// (0x00040e5c) bg_popup_call3_rect_pane_g

0xf0d9,	// (0x000409a3) smil_status_volume_pane_g1

0xd5f9,	// (0x0003eec3) smil_status_pane_t1

0x840f,	// (0x00039cd9) volume_smil_pane

0xd610,	// (0x0003eeda) list_smil_text_pane

0x703e,	// (0x00038908) scroll_pane_cp011

0x7049,	// (0x00038913) smil_text_list_pane_t1_ParamLimits

0x7049,	// (0x00038913) smil_text_list_pane_t1

0x70c1,	// (0x0003898b) aid_volume_smil_ParamLimits

0x70c1,	// (0x0003898b) aid_volume_smil

0xd16f,	// (0x0003ea39) smil_volume_pane_g1

0xd16f,	// (0x0003ea39) smil_volume_pane_g2

0x0001,

0xf2f9,	// (0x00040bc3) smil_volume_pane_g

0xd11a,	// (0x0003e9e4) listscroll_cale_day_pane

0xd61a,	// (0x0003eee4) bg_cale_pane

0xd632,	// (0x0003eefc) list_cale_pane

0xd643,	// (0x0003ef0d) scroll_pane_cp09

0xd654,	// (0x0003ef1e) cale_bg_pane_g1

0xd65c,	// (0x0003ef26) cale_bg_pane_g2

0xd664,	// (0x0003ef2e) cale_bg_pane_g3

0xd66c,	// (0x0003ef36) cale_bg_pane_g4

0xd674,	// (0x0003ef3e) cale_bg_pane_g5

0xd67c,	// (0x0003ef46) cale_bg_pane_g6

0xd684,	// (0x0003ef4e) cale_bg_pane_g7

0xd68c,	// (0x0003ef56) cale_bg_pane_g8

0xd694,	// (0x0003ef5e) cale_bg_pane_g9

0x0008,

0xf2fe,	// (0x00040bc8) cale_bg_pane_g

0x70e3,	// (0x000389ad) list_cale_time_pane_ParamLimits

0x70e3,	// (0x000389ad) list_cale_time_pane

0xd69c,	// (0x0003ef66) list_cale_time_pane_g1_ParamLimits

0xd69c,	// (0x0003ef66) list_cale_time_pane_g1

0xd6a8,	// (0x0003ef72) list_cale_time_pane_g2_ParamLimits

0xd6a8,	// (0x0003ef72) list_cale_time_pane_g2

0x70ff,	// (0x000389c9) list_cale_time_pane_g3_ParamLimits

0x70ff,	// (0x000389c9) list_cale_time_pane_g3

0x710d,	// (0x000389d7) list_cale_time_pane_g4_ParamLimits

0x710d,	// (0x000389d7) list_cale_time_pane_g4

0x711b,	// (0x000389e5) list_cale_time_pane_g5_ParamLimits

0x711b,	// (0x000389e5) list_cale_time_pane_g5

0x0005,

0xf311,	// (0x00040bdb) list_cale_time_pane_g_ParamLimits

0xf311,	// (0x00040bdb) list_cale_time_pane_g

0xd6c2,	// (0x0003ef8c) list_cale_time_pane_t1_ParamLimits

0xd6c2,	// (0x0003ef8c) list_cale_time_pane_t1

0xd6ea,	// (0x0003efb4) list_cale_time_pane_t2_ParamLimits

0xd6ea,	// (0x0003efb4) list_cale_time_pane_t2

0x73f2,	// (0x00038cbc) aid_blid_cardinal_pane

0x7434,	// (0x00038cfe) compass_pane_t4

0xd712,	// (0x0003efdc) list_cale_time_pane_t4_ParamLimits

0xd712,	// (0x0003efdc) list_cale_time_pane_t4

0x7442,	// (0x00038d0c) compass_pane_t5

0x7452,	// (0x00038d1c) compass_pane_t6

0x7460,	// (0x00038d2a) compass_pane_t7

0xdb4b,	// (0x0003f415) navi_pane_cc_t1

0xdca0,	// (0x0003f56a) aid_phob_thumbnail_center_pane

0x7b2f,	// (0x000393f9) main_postcard_pane_g4_ParamLimits

0x0002,

0xf31e,	// (0x00040be8) list_cale_time_pane_t_ParamLimits

0xf31e,	// (0x00040be8) list_cale_time_pane_t

0xca3f,	// (0x0003e309) bg_popup_window_pane_cp02_ParamLimits

0xca3f,	// (0x0003e309) bg_popup_window_pane_cp02

0xd73a,	// (0x0003f004) heading_pane_cp01_ParamLimits

0xd73a,	// (0x0003f004) heading_pane_cp01

0xd746,	// (0x0003f010) loc_req_pane_ParamLimits

0xd746,	// (0x0003f010) loc_req_pane

0xd756,	// (0x0003f020) loc_type_pane_ParamLimits

0xd756,	// (0x0003f020) loc_type_pane

0xd768,	// (0x0003f032) loc_type_pane_t1_ParamLimits

0xd768,	// (0x0003f032) loc_type_pane_t1

0xd77a,	// (0x0003f044) loc_type_pane_t2_ParamLimits

0xd77a,	// (0x0003f044) loc_type_pane_t2

0xd78c,	// (0x0003f056) loc_type_pane_t3_ParamLimits

0xd78c,	// (0x0003f056) loc_type_pane_t3

0x0002,

0xf325,	// (0x00040bef) loc_type_pane_t_ParamLimits

0xf325,	// (0x00040bef) loc_type_pane_t

0xd79e,	// (0x0003f068) list_loc_req_pane

0xd7a8,	// (0x0003f072) scroll_pane_cp012

0x7129,	// (0x000389f3) list_single_loc_request_popup_menu_pane_ParamLimits

0x7129,	// (0x000389f3) list_single_loc_request_popup_menu_pane

0xd7b3,	// (0x0003f07d) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xd7b3,	// (0x0003f07d) list_single_loc_request_popup_menu_pane_g1

0xd7bf,	// (0x0003f089) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xd7bf,	// (0x0003f089) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf32c,	// (0x00040bf6) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf32c,	// (0x00040bf6) list_single_loc_request_popup_menu_pane_g

0xd7cb,	// (0x0003f095) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xd7cb,	// (0x0003f095) list_single_loc_request_popup_menu_pane_t1

0x713b,	// (0x00038a05) bg_popup_window_pane_cp03_ParamLimits

0x713b,	// (0x00038a05) bg_popup_window_pane_cp03

0x7149,	// (0x00038a13) heading_loc_req_pane_ParamLimits

0x7149,	// (0x00038a13) heading_loc_req_pane

0x7155,	// (0x00038a1f) popup_dyc_status_message_window_g1_ParamLimits

0x7155,	// (0x00038a1f) popup_dyc_status_message_window_g1

0x7161,	// (0x00038a2b) popup_dyc_status_message_window_t1_ParamLimits

0x7161,	// (0x00038a2b) popup_dyc_status_message_window_t1

0x7173,	// (0x00038a3d) popup_dyc_status_message_window_t2_ParamLimits

0x7173,	// (0x00038a3d) popup_dyc_status_message_window_t2

0x7185,	// (0x00038a4f) popup_dyc_status_message_window_t3_ParamLimits

0x7185,	// (0x00038a4f) popup_dyc_status_message_window_t3

0x0002,

0xf331,	// (0x00040bfb) popup_dyc_status_message_window_t_ParamLimits

0xf331,	// (0x00040bfb) popup_dyc_status_message_window_t

0xcde8,	// (0x0003e6b2) bg_heading_pane_cp01

0xd7e1,	// (0x0003f0ab) heading_loc_req_pane_g1

0xd7e9,	// (0x0003f0b3) heading_loc_req_pane_g2

0xd7f1,	// (0x0003f0bb) heading_loc_req_pane_g3

0x0002,

0xf338,	// (0x00040c02) heading_loc_req_pane_g

0xd7f9,	// (0x0003f0c3) heading_loc_req_pane_t1

0xd808,	// (0x0003f0d2) bg_popup_sub_pane_cp01_ParamLimits

0xd808,	// (0x0003f0d2) bg_popup_sub_pane_cp01

0xd816,	// (0x0003f0e0) popup_cale_events_window_g1_ParamLimits

0xd816,	// (0x0003f0e0) popup_cale_events_window_g1

0xd836,	// (0x0003f100) popup_cale_events_window_g2_ParamLimits

0xd836,	// (0x0003f100) popup_cale_events_window_g2

0x0001,

0xf36c,	// (0x00040c36) popup_cale_events_window_g_ParamLimits

0xf36c,	// (0x00040c36) popup_cale_events_window_g

0xd856,	// (0x0003f120) popup_cale_events_window_t1_ParamLimits

0xd856,	// (0x0003f120) popup_cale_events_window_t1

0xd868,	// (0x0003f132) popup_cale_events_window_t2_ParamLimits

0xd868,	// (0x0003f132) popup_cale_events_window_t2

0xd8a6,	// (0x0003f170) popup_cale_events_window_t3_ParamLimits

0xd8a6,	// (0x0003f170) popup_cale_events_window_t3

0xd8e0,	// (0x0003f1aa) popup_cale_events_window_t4_ParamLimits

0xd8e0,	// (0x0003f1aa) popup_cale_events_window_t4

0x0003,

0xf371,	// (0x00040c3b) popup_cale_events_window_t_ParamLimits

0xf371,	// (0x00040c3b) popup_cale_events_window_t

0x71af,	// (0x00038a79) call_type_pane

0xd916,	// (0x0003f1e0) popup_call_status_window_g1

0x71bb,	// (0x00038a85) popup_call_status_window_g2

0x71c7,	// (0x00038a91) popup_call_status_window_g3

0x0002,

0xf37a,	// (0x00040c44) popup_call_status_window_g

0xd924,	// (0x0003f1ee) call_type_pane_g1

0xd92d,	// (0x0003f1f7) call_type_pane_g2

0x0001,

0xf381,	// (0x00040c4b) call_type_pane_g

0xcde8,	// (0x0003e6b2) bg_popup_sub_pane_cp02

0xd936,	// (0x0003f200) listscroll_popup_wml_pane

0xd93e,	// (0x0003f208) list_wml_pane

0xd948,	// (0x0003f212) scroll_pane_cp013

0xd953,	// (0x0003f21d) list_single_graphic_popup_wml_pane_ParamLimits

0xd953,	// (0x0003f21d) list_single_graphic_popup_wml_pane

0xd16f,	// (0x0003ea39) list_single_graphic_popup_wml_pane_g1

0xd967,	// (0x0003f231) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf386,	// (0x00040c50) list_single_graphic_popup_wml_pane_g

0xd96f,	// (0x0003f239) list_single_graphic_popup_wml_pane_t1

0xd985,	// (0x0003f24f) aid_call_pane

0xd03b,	// (0x0003e905) popup_clock_analogue_window_g1

0xd03b,	// (0x0003e905) popup_clock_analogue_window_g2

0x71d3,	// (0x00038a9d) popup_clock_analogue_window_g3

0x71d3,	// (0x00038a9d) popup_clock_analogue_window_g4

0xd16f,	// (0x0003ea39) popup_clock_analogue_window_g5

0x0004,

0xf38b,	// (0x00040c55) popup_clock_analogue_window_g

0x71db,	// (0x00038aa5) popup_clock_analogue_window_t1

0x71e9,	// (0x00038ab3) clock_digital_number_pane_ParamLimits

0x71e9,	// (0x00038ab3) clock_digital_number_pane

0x71f5,	// (0x00038abf) clock_digital_number_pane_cp02_ParamLimits

0x71f5,	// (0x00038abf) clock_digital_number_pane_cp02

0x7201,	// (0x00038acb) clock_digital_number_pane_cp03_ParamLimits

0x7201,	// (0x00038acb) clock_digital_number_pane_cp03

0x720d,	// (0x00038ad7) clock_digital_number_pane_cp04_ParamLimits

0x720d,	// (0x00038ad7) clock_digital_number_pane_cp04

0x721d,	// (0x00038ae7) clock_digital_separator_pane_ParamLimits

0x721d,	// (0x00038ae7) clock_digital_separator_pane

0x7229,	// (0x00038af3) popup_clock_digital_window_t1

0xd16f,	// (0x0003ea39) clock_digital_number_pane_g1

0xd16f,	// (0x0003ea39) clock_digital_number_pane_g2

0x0001,

0xf2f9,	// (0x00040bc3) clock_digital_number_pane_g

0xd16f,	// (0x0003ea39) clock_digital_separator_pane_g1

0xd16f,	// (0x0003ea39) clock_digital_separator_pane_g2

0x0001,

0xf2f9,	// (0x00040bc3) clock_digital_separator_pane_g

0xcde8,	// (0x0003e6b2) bg_popup_window_pane_cp04

0xd98d,	// (0x0003f257) heading_pane_cp03

0xd995,	// (0x0003f25f) listscroll_popup_gms_pane

0xd99d,	// (0x0003f267) grid_large_graphic_popup_pane

0xd9a7,	// (0x0003f271) listscroll_popup_gms_pane_g1

0xd9af,	// (0x0003f279) listscroll_popup_gms_pane_g2

0x0001,

0xf396,	// (0x00040c60) listscroll_popup_gms_pane_g

0xd45e,	// (0x0003ed28) scroll_pane_cp014

0x7246,	// (0x00038b10) cell_large_graphic_popup_pane_ParamLimits

0x7246,	// (0x00038b10) cell_large_graphic_popup_pane

0x725e,	// (0x00038b28) cell_large_graphic_popup_pane_g1_ParamLimits

0x725e,	// (0x00038b28) cell_large_graphic_popup_pane_g1

0xd9b7,	// (0x0003f281) cell_large_graphic_popup_pane_g2_ParamLimits

0xd9b7,	// (0x0003f281) cell_large_graphic_popup_pane_g2

0xd9c3,	// (0x0003f28d) cell_large_graphic_popup_pane_g3_ParamLimits

0xd9c3,	// (0x0003f28d) cell_large_graphic_popup_pane_g3

0xd9d0,	// (0x0003f29a) cell_large_graphic_popup_pane_g4_ParamLimits

0xd9d0,	// (0x0003f29a) cell_large_graphic_popup_pane_g4

0x0003,

0xf39b,	// (0x00040c65) cell_large_graphic_popup_pane_g_ParamLimits

0xf39b,	// (0x00040c65) cell_large_graphic_popup_pane_g

0xd9e0,	// (0x0003f2aa) grid_highlight_pane_cp010

0xd16f,	// (0x0003ea39) bg_popup_call_pane_g1

0xd9ea,	// (0x0003f2b4) list_single_graphic_popup_conf_pane_ParamLimits

0xd9ea,	// (0x0003f2b4) list_single_graphic_popup_conf_pane

0xd9fd,	// (0x0003f2c7) list_highlight_pane_cp01

0xda06,	// (0x0003f2d0) list_single_graphic_popup_conf_pane_g1

0xda0e,	// (0x0003f2d8) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf3a4,	// (0x00040c6e) list_single_graphic_popup_conf_pane_g

0xda16,	// (0x0003f2e0) list_single_graphic_popup_conf_pane_t1

0xda24,	// (0x0003f2ee) linegrid_cams_pane_g1

0x726a,	// (0x00038b34) linegrid_cams_pane_g2

0xd29b,	// (0x0003eb65) linegrid_cams_pane_g3

0xda2d,	// (0x0003f2f7) linegrid_cams_pane_g4

0x7273,	// (0x00038b3d) linegrid_cams_pane_g5

0x727c,	// (0x00038b46) linegrid_cams_pane_g6

0xd2a4,	// (0x0003eb6e) linegrid_cams_pane_g7

0x0006,

0xf3a9,	// (0x00040c73) linegrid_cams_pane_g

0xda36,	// (0x0003f300) popup_clock_analogue_window

0xda36,	// (0x0003f300) popup_clock_digital_window

0xcde8,	// (0x0003e6b2) popup_phob_thumbnail_window

0xd16f,	// (0x0003ea39) call_video_uplink_pane_g1

0xda3f,	// (0x0003f309) call_video_uplink_pane_g2

0x0001,

0xf3b8,	// (0x00040c82) call_video_uplink_pane_g

0xda47,	// (0x0003f311) video_uplink_pane

0xda4f,	// (0x0003f319) mce_image_pane_g1

0x7285,	// (0x00038b4f) mce_image_pane_g2

0x728f,	// (0x00038b59) mce_image_pane_g3

0x7297,	// (0x00038b61) mce_image_pane_g4

0x729f,	// (0x00038b69) mce_image_pane_g5

0x0004,

0xf3bd,	// (0x00040c87) mce_image_pane_g

0xda59,	// (0x0003f323) control_top_pane_stacon_cp01_ParamLimits

0xda59,	// (0x0003f323) control_top_pane_stacon_cp01

0xda6d,	// (0x0003f337) uni_indicator_pane_stacon_cp01_ParamLimits

0xda6d,	// (0x0003f337) uni_indicator_pane_stacon_cp01

0xda7e,	// (0x0003f348) bg_popup_sub_pane_cp03

0x72a7,	// (0x00038b71) chi_dic_find_pane

0x72af,	// (0x00038b79) listscroll_chi_dic_pane

0x72b8,	// (0x00038b82) main_pane_chidic_g1

0xda88,	// (0x0003f352) chi_dic_find_pane_t1

0xda96,	// (0x0003f360) find_chidic_pane

0xda9f,	// (0x0003f369) chi_dic_list_pane_ParamLimits

0xda9f,	// (0x0003f369) chi_dic_list_pane

0xdab0,	// (0x0003f37a) scroll_pane_cp020

0xdab8,	// (0x0003f382) find_chidic_pane_t1

0xcde8,	// (0x0003e6b2) input_focus_pane_cp06

0x72cb,	// (0x00038b95) list_chi_dic_pane_ParamLimits

0x72cb,	// (0x00038b95) list_chi_dic_pane

0x72e5,	// (0x00038baf) list_chi_dic_pane_t1_ParamLimits

0x72e5,	// (0x00038baf) list_chi_dic_pane_t1

0xcde8,	// (0x0003e6b2) list_highlight_pane_cp020

0xdac7,	// (0x0003f391) bg_cale_heading_pane_g1

0x72f8,	// (0x00038bc2) bg_cale_heading_pane_g2

0x7300,	// (0x00038bca) bg_cale_heading_pane_g3

0x7308,	// (0x00038bd2) bg_cale_heading_pane_g4

0x7312,	// (0x00038bdc) bg_cale_heading_pane_g5

0x731c,	// (0x00038be6) bg_cale_heading_pane_g6

0x7324,	// (0x00038bee) bg_cale_heading_pane_g7

0x732c,	// (0x00038bf6) bg_cale_heading_pane_g8

0x7336,	// (0x00038c00) bg_cale_heading_pane_g9

0x0008,

0xf3c8,	// (0x00040c92) bg_cale_heading_pane_g

0xdac7,	// (0x0003f391) bg_cale_side_pane_g1

0x7340,	// (0x00038c0a) bg_cale_side_pane_g2

0x734a,	// (0x00038c14) bg_cale_side_pane_g3

0x7354,	// (0x00038c1e) bg_cale_side_pane_g4

0x735e,	// (0x00038c28) bg_cale_side_pane_g5

0x7368,	// (0x00038c32) bg_cale_side_pane_g6

0x7372,	// (0x00038c3c) bg_cale_side_pane_g7

0x737c,	// (0x00038c46) bg_cale_side_pane_g8

0x7384,	// (0x00038c4e) bg_cale_side_pane_g9

0x0008,

0xf3db,	// (0x00040ca5) bg_cale_side_pane_g

0x738c,	// (0x00038c56) popup_call_status_window_ParamLimits

0x738c,	// (0x00038c56) popup_call_status_window

0xdacf,	// (0x0003f399) stacon_top_pane

0xdad7,	// (0x0003f3a1) status_pane_ParamLimits

0xdad7,	// (0x0003f3a1) status_pane

0xdaec,	// (0x0003f3b6) status_small_pane

0xdaf4,	// (0x0003f3be) control_pane

0xcde8,	// (0x0003e6b2) stacon_bottom_pane

0xdafc,	// (0x0003f3c6) list_single_mce_smart_pane_t1_ParamLimits

0xdafc,	// (0x0003f3c6) list_single_mce_smart_pane_t1

0xdb0f,	// (0x0003f3d9) list_single_mce_smart_pane_t2_ParamLimits

0xdb0f,	// (0x0003f3d9) list_single_mce_smart_pane_t2

0x0001,

0xf3ee,	// (0x00040cb8) list_single_mce_smart_pane_t_ParamLimits

0xf3ee,	// (0x00040cb8) list_single_mce_smart_pane_t

0x7398,	// (0x00038c62) compass_pane

0x73a4,	// (0x00038c6e) main_location2_pane_t1

0x73b8,	// (0x00038c82) main_location2_pane_t2

0x73cc,	// (0x00038c96) main_location2_pane_t3

0x0003,

0xf3f3,	// (0x00040cbd) main_location2_pane_t

0xdb2e,	// (0x0003f3f8) compass_pane_g1_ParamLimits

0xdb2e,	// (0x0003f3f8) compass_pane_g1

0x7416,	// (0x00038ce0) compass_pane_t1

0x7425,	// (0x00038cef) compass_pane_t2

0x0005,

0xf3fc,	// (0x00040cc6) compass_pane_t

0x7470,	// (0x00038d3a) text_secondary_cp61

0xdb42,	// (0x0003f40c) navi_pane_cams_g5

0xdb65,	// (0x0003f42f) navi_pane_im_t1

0xdb73,	// (0x0003f43d) navi_pane_mp_g1_ParamLimits

0xdb73,	// (0x0003f43d) navi_pane_mp_g1

0xdb87,	// (0x0003f451) navi_pane_mp_g2_ParamLimits

0xdb87,	// (0x0003f451) navi_pane_mp_g2

0xdb93,	// (0x0003f45d) navi_pane_mp_g3_ParamLimits

0xdb93,	// (0x0003f45d) navi_pane_mp_g3

0x0002,

0xf410,	// (0x00040cda) navi_pane_mp_g_ParamLimits

0xf410,	// (0x00040cda) navi_pane_mp_g

0xdb9f,	// (0x0003f469) navi_pane_mp_t1

0xdbad,	// (0x0003f477) navi_pane_mp_t2

0x0002,

0xf417,	// (0x00040ce1) navi_pane_mp_t

0xdbe9,	// (0x0003f4b3) navi_pane_vt_g1

0xdb9f,	// (0x0003f469) navi_pane_vt_t1

0xdbf1,	// (0x0003f4bb) navi_slider_pane

0xdbf9,	// (0x0003f4c3) zooming_pane

0xdc01,	// (0x0003f4cb) navi_slider_pane_g1

0x7585,	// (0x00038e4f) navi_slider_pane_g2

0x0006,

0xf41e,	// (0x00040ce8) navi_slider_pane_g

0xdc25,	// (0x0003f4ef) aid_levels_zoom

0xdc2d,	// (0x0003f4f7) zooming_pane_g1

0xdc35,	// (0x0003f4ff) zooming_pane_g2

0xdc35,	// (0x0003f4ff) zooming_pane_g3

0x0002,

0xf42d,	// (0x00040cf7) zooming_pane_g

0xdc3d,	// (0x0003f507) level_10_zoom

0xdc46,	// (0x0003f510) level_11_zoom

0xdc4f,	// (0x0003f519) level_1_zoom

0xdc58,	// (0x0003f522) level_2_zoom

0xdc61,	// (0x0003f52b) level_3_zoom

0xdc6a,	// (0x0003f534) level_4_zoom

0xdc73,	// (0x0003f53d) level_5_zoom

0xdc7c,	// (0x0003f546) level_6_zoom

0xdc85,	// (0x0003f54f) level_7_zoom

0xdc8e,	// (0x0003f558) level_8_zoom

0xdc97,	// (0x0003f561) level_9_zoom

0xdca8,	// (0x0003f572) popup_phob_thumbnail_window_g1

0xdcb0,	// (0x0003f57a) popup_phob_thumbnail_window_g2

0x0001,

0xf434,	// (0x00040cfe) popup_phob_thumbnail_window_g

0xefa6,	// (0x00040870) level_1_location

0xefae,	// (0x00040878) level_2_location

0xefb6,	// (0x00040880) level_3_location

0xefbe,	// (0x00040888) level_4_location

0xdbf9,	// (0x0003f4c3) level_5_location

0x7597,	// (0x00038e61) mce_icon_pane_g1

0x759f,	// (0x00038e69) mce_icon_pane_g2

0x0001,

0xf439,	// (0x00040d03) mce_icon_pane_g

0x75a7,	// (0x00038e71) main_mup_pane_g1_ParamLimits

0x75a7,	// (0x00038e71) main_mup_pane_g1

0x75bf,	// (0x00038e89) main_mup_pane_g2_ParamLimits

0x75bf,	// (0x00038e89) main_mup_pane_g2

0x75db,	// (0x00038ea5) main_mup_pane_g3_ParamLimits

0x75db,	// (0x00038ea5) main_mup_pane_g3

0x75f7,	// (0x00038ec1) main_mup_pane_g4_ParamLimits

0x75f7,	// (0x00038ec1) main_mup_pane_g4

0x7613,	// (0x00038edd) main_mup_pane_g5_ParamLimits

0x7613,	// (0x00038edd) main_mup_pane_g5

0x7634,	// (0x00038efe) main_mup_pane_g6_ParamLimits

0x7634,	// (0x00038efe) main_mup_pane_g6

0x7650,	// (0x00038f1a) main_mup_pane_g7_ParamLimits

0x7650,	// (0x00038f1a) main_mup_pane_g7

0x766c,	// (0x00038f36) main_mup_pane_g8_ParamLimits

0x766c,	// (0x00038f36) main_mup_pane_g8

0x768c,	// (0x00038f56) main_mup_pane_g9_ParamLimits

0x768c,	// (0x00038f56) main_mup_pane_g9

0x76ab,	// (0x00038f75) main_mup_pane_g10_ParamLimits

0x76ab,	// (0x00038f75) main_mup_pane_g10

0x76ca,	// (0x00038f94) main_mup_pane_g11_ParamLimits

0x76ca,	// (0x00038f94) main_mup_pane_g11

0x76e2,	// (0x00038fac) main_mup_pane_g12_ParamLimits

0x76e2,	// (0x00038fac) main_mup_pane_g12

0x76f0,	// (0x00038fba) main_mup_pane_g13_ParamLimits

0x76f0,	// (0x00038fba) main_mup_pane_g13

0x000c,

0xf43e,	// (0x00040d08) main_mup_pane_g_ParamLimits

0xf43e,	// (0x00040d08) main_mup_pane_g

0x7706,	// (0x00038fd0) main_mup_pane_t1_ParamLimits

0x7706,	// (0x00038fd0) main_mup_pane_t1

0x7723,	// (0x00038fed) main_mup_pane_t2_ParamLimits

0x7723,	// (0x00038fed) main_mup_pane_t2

0x773d,	// (0x00039007) main_mup_pane_t3_ParamLimits

0x773d,	// (0x00039007) main_mup_pane_t3

0x7757,	// (0x00039021) main_mup_pane_t4_ParamLimits

0x7757,	// (0x00039021) main_mup_pane_t4

0x7769,	// (0x00039033) main_mup_pane_t5_ParamLimits

0x7769,	// (0x00039033) main_mup_pane_t5

0x777b,	// (0x00039045) main_mup_pane_t6_ParamLimits

0x777b,	// (0x00039045) main_mup_pane_t6

0x0005,

0xf459,	// (0x00040d23) main_mup_pane_t_ParamLimits

0xf459,	// (0x00040d23) main_mup_pane_t

0x7791,	// (0x0003905b) mup_progress_pane_ParamLimits

0x7791,	// (0x0003905b) mup_progress_pane

0x779d,	// (0x00039067) mup_visualizer_pane_ParamLimits

0x779d,	// (0x00039067) mup_visualizer_pane

0x77d7,	// (0x000390a1) mup_volume_pane_ParamLimits

0x77d7,	// (0x000390a1) mup_volume_pane

0xd916,	// (0x0003f1e0) mup_visualizer_pane_g1_ParamLimits

0xd916,	// (0x0003f1e0) mup_visualizer_pane_g1

0xd916,	// (0x0003f1e0) mup_visualizer_pane_g2_ParamLimits

0xd916,	// (0x0003f1e0) mup_visualizer_pane_g2

0xdb2e,	// (0x0003f3f8) mup_visualizer_pane_g3_ParamLimits

0xdb2e,	// (0x0003f3f8) mup_visualizer_pane_g3

0x0002,

0xf466,	// (0x00040d30) mup_visualizer_pane_g_ParamLimits

0xf466,	// (0x00040d30) mup_visualizer_pane_g

0xd16f,	// (0x0003ea39) mup_volume_pane_g1

0xdcc0,	// (0x0003f58a) mup_volume_pane_g2

0x0001,

0xf46d,	// (0x00040d37) mup_volume_pane_g

0xd16f,	// (0x0003ea39) mup_progress_pane_g1

0xdcc9,	// (0x0003f593) mup_progress_pane_g2

0xdcd2,	// (0x0003f59c) mup_progress_pane_g3

0x0002,

0xf472,	// (0x00040d3c) mup_progress_pane_g

0xcde8,	// (0x0003e6b2) bg_popup_window_pane_cp05

0xdcdb,	// (0x0003f5a5) heading_pane_cp02_ParamLimits

0xdcdb,	// (0x0003f5a5) heading_pane_cp02

0xdcf5,	// (0x0003f5bf) list_popup_blid_pane

0xdcfd,	// (0x0003f5c7) list_blid_sat_info_pane_ParamLimits

0xdcfd,	// (0x0003f5c7) list_blid_sat_info_pane

0xdd10,	// (0x0003f5da) list_blid_sat_info_pane_g1

0xdd18,	// (0x0003f5e2) list_blid_sat_info_pane_t1

0x78e4,	// (0x000391ae) mup_equalizer_pane_ParamLimits

0x78e4,	// (0x000391ae) mup_equalizer_pane

0x7905,	// (0x000391cf) mup_equalizer_pane_cp1_ParamLimits

0x7905,	// (0x000391cf) mup_equalizer_pane_cp1

0x7926,	// (0x000391f0) mup_equalizer_pane_cp2_ParamLimits

0x7926,	// (0x000391f0) mup_equalizer_pane_cp2

0x7947,	// (0x00039211) mup_equalizer_pane_cp3_ParamLimits

0x7947,	// (0x00039211) mup_equalizer_pane_cp3

0x7968,	// (0x00039232) mup_equalizer_pane_cp4_ParamLimits

0x7968,	// (0x00039232) mup_equalizer_pane_cp4

0x7989,	// (0x00039253) mup_equalizer_pane_cp5

0x799f,	// (0x00039269) mup_equalizer_pane_cp6

0x79b7,	// (0x00039281) mup_equalizer_pane_cp7

0xeec4,	// (0x0004078e) bg_popup_call_poc_act_pane_g9

0xeecc,	// (0x00040796) bg_popup_call_poc_act_pane_g10

0xeed4,	// (0x0004079e) bg_popup_call_poc_act_pane_g11

0x000a,

0xd043,	// (0x0003e90d) mup_scale_pane

0xd16f,	// (0x0003ea39) mup_scale_pane_g1

0xdd26,	// (0x0003f5f0) mup_scale_pane_g2

0x0006,

0xf48e,	// (0x00040d58) mup_scale_pane_g

0xdd4a,	// (0x0003f614) msg_data_pane

0xdd52,	// (0x0003f61c) scroll_pane_cp017

0x4300,	// (0x00035bca) bg_list_pane_cp04_ParamLimits

0x4300,	// (0x00035bca) bg_list_pane_cp04

0xdd5a,	// (0x0003f624) msg_data_pane_g1

0x79e1,	// (0x000392ab) msg_data_pane_g2

0x79eb,	// (0x000392b5) msg_data_pane_g3

0x79f3,	// (0x000392bd) msg_data_pane_g4

0x79fb,	// (0x000392c5) msg_data_pane_g5

0x7a03,	// (0x000392cd) msg_data_pane_g6

0x7a0b,	// (0x000392d5) msg_data_pane_g7

0x0006,

0xf49d,	// (0x00040d67) msg_data_pane_g

0x4324,	// (0x00035bee) msg_text_pane_ParamLimits

0x4324,	// (0x00035bee) msg_text_pane

0x7a13,	// (0x000392dd) qrid_highlight_pane_cp011_ParamLimits

0x7a13,	// (0x000392dd) qrid_highlight_pane_cp011

0xcde8,	// (0x0003e6b2) msg_body_pane

0xcde8,	// (0x0003e6b2) msg_header_pane

0xdd6b,	// (0x0003f635) input_focus_pane_cp07

0x4370,	// (0x00035c3a) msg_header_pane_t1_ParamLimits

0x4370,	// (0x00035c3a) msg_header_pane_t1

0x4382,	// (0x00035c4c) msg_header_pane_t2_ParamLimits

0x4382,	// (0x00035c4c) msg_header_pane_t2

0x0001,

0xf4b1,	// (0x00040d7b) msg_header_pane_t_ParamLimits

0xf4b1,	// (0x00040d7b) msg_header_pane_t

0xdd80,	// (0x0003f64a) msg_body_pane_g1

0x4394,	// (0x00035c5e) msg_body_pane_t1_ParamLimits

0x4394,	// (0x00035c5e) msg_body_pane_t1

0x43c5,	// (0x00035c8f) msg_body_pane_t2_ParamLimits

0x43c5,	// (0x00035c8f) msg_body_pane_t2

0x43d7,	// (0x00035ca1) msg_body_pane_t3_ParamLimits

0x43d7,	// (0x00035ca1) msg_body_pane_t3

0x0002,

0xf4b6,	// (0x00040d80) msg_body_pane_t_ParamLimits

0xf4b6,	// (0x00040d80) msg_body_pane_t

0x7a7f,	// (0x00039349) main_viewer_pane_g1_ParamLimits

0x7a7f,	// (0x00039349) main_viewer_pane_g1

0x7a8b,	// (0x00039355) main_viewer_pane_g2_ParamLimits

0x7a8b,	// (0x00039355) main_viewer_pane_g2

0x7a97,	// (0x00039361) main_viewer_pane_g3_ParamLimits

0x7a97,	// (0x00039361) main_viewer_pane_g3

0x7aa8,	// (0x00039372) main_viewer_pane_g4_ParamLimits

0x7aa8,	// (0x00039372) main_viewer_pane_g4

0x7ab9,	// (0x00039383) main_viewer_pane_g5_ParamLimits

0x7ab9,	// (0x00039383) main_viewer_pane_g5

0x7ab9,	// (0x00039383) main_viewer_pane_g7_ParamLimits

0x7ab9,	// (0x00039383) main_viewer_pane_g7

0x7acb,	// (0x00039395) main_viewer_pane_g8_ParamLimits

0x7acb,	// (0x00039395) main_viewer_pane_g8

0x0007,

0xf4c6,	// (0x00040d90) main_viewer_pane_g_ParamLimits

0xf4c6,	// (0x00040d90) main_viewer_pane_g

0xdd88,	// (0x0003f652) viewer_content_pane_ParamLimits

0xdd88,	// (0x0003f652) viewer_content_pane

0x7b03,	// (0x000393cd) main_postcard_pane_g1_ParamLimits

0x7b03,	// (0x000393cd) main_postcard_pane_g1

0x7b11,	// (0x000393db) main_postcard_pane_g2_ParamLimits

0x7b11,	// (0x000393db) main_postcard_pane_g2

0x7b1f,	// (0x000393e9) main_postcard_pane_g3_ParamLimits

0x7b1f,	// (0x000393e9) main_postcard_pane_g3

0x0005,

0xf4d7,	// (0x00040da1) main_postcard_pane_g_ParamLimits

0xf4d7,	// (0x00040da1) main_postcard_pane_g

0x7b2f,	// (0x000393f9) main_postcard_pane_g4

0xf0c6,	// (0x00040990) smil_status_volume_pane_g2

0x7b5b,	// (0x00039425) postcard_pane_ParamLimits

0x7b5b,	// (0x00039425) postcard_pane

0xd916,	// (0x0003f1e0) postcard_pane_g1_ParamLimits

0xd916,	// (0x0003f1e0) postcard_pane_g1

0x7b8d,	// (0x00039457) postcard_pane_g2_ParamLimits

0x7b8d,	// (0x00039457) postcard_pane_g2

0x7b99,	// (0x00039463) postcard_pane_g3_ParamLimits

0x7b99,	// (0x00039463) postcard_pane_g3

0xdd96,	// (0x0003f660) postcard_pane_g4_ParamLimits

0xdd96,	// (0x0003f660) postcard_pane_g4

0x7ba5,	// (0x0003946f) postcard_pane_g5_ParamLimits

0x7ba5,	// (0x0003946f) postcard_pane_g5

0x7bb1,	// (0x0003947b) postcard_pane_g6_ParamLimits

0x7bb1,	// (0x0003947b) postcard_pane_g6

0xdda4,	// (0x0003f66e) postcard_pane_g7_ParamLimits

0xdda4,	// (0x0003f66e) postcard_pane_g7

0x0006,

0xf4e4,	// (0x00040dae) postcard_pane_g_ParamLimits

0xf4e4,	// (0x00040dae) postcard_pane_g

0x7bbd,	// (0x00039487) main_mp2_pane_g1_ParamLimits

0x7bbd,	// (0x00039487) main_mp2_pane_g1

0x7bc9,	// (0x00039493) main_mp2_pane_g2_ParamLimits

0x7bc9,	// (0x00039493) main_mp2_pane_g2

0x7bd5,	// (0x0003949f) main_mp2_pane_g3_ParamLimits

0x7bd5,	// (0x0003949f) main_mp2_pane_g3

0x0002,

0xf4f3,	// (0x00040dbd) main_mp2_pane_g_ParamLimits

0xf4f3,	// (0x00040dbd) main_mp2_pane_g

0x7be1,	// (0x000394ab) main_mp2_pane_t1_ParamLimits

0x7be1,	// (0x000394ab) main_mp2_pane_t1

0x7bf8,	// (0x000394c2) main_mp2_pane_t2_ParamLimits

0x7bf8,	// (0x000394c2) main_mp2_pane_t2

0x7c0c,	// (0x000394d6) main_mp2_pane_t3_ParamLimits

0x7c0c,	// (0x000394d6) main_mp2_pane_t3

0x0002,

0xf4fa,	// (0x00040dc4) main_mp2_pane_t_ParamLimits

0xf4fa,	// (0x00040dc4) main_mp2_pane_t

0xddb2,	// (0x0003f67c) pec_content_pane_ParamLimits

0xddb2,	// (0x0003f67c) pec_content_pane

0xd45e,	// (0x0003ed28) scroll_pane_cp015

0xddc4,	// (0x0003f68e) pec_attribute_pane_ParamLimits

0xddc4,	// (0x0003f68e) pec_attribute_pane

0x7c1e,	// (0x000394e8) pec_content_pane_g1_ParamLimits

0x7c1e,	// (0x000394e8) pec_content_pane_g1

0xddd4,	// (0x0003f69e) pec_content_pane_t1_ParamLimits

0xddd4,	// (0x0003f69e) pec_content_pane_t1

0xdde6,	// (0x0003f6b0) pec_content_pane_t2_ParamLimits

0xdde6,	// (0x0003f6b0) pec_content_pane_t2

0x0001,

0xf501,	// (0x00040dcb) pec_content_pane_t_ParamLimits

0xf501,	// (0x00040dcb) pec_content_pane_t

0x7c2a,	// (0x000394f4) list_single_graphic_pane_cp01_ParamLimits

0x7c2a,	// (0x000394f4) list_single_graphic_pane_cp01

0xd043,	// (0x0003e90d) bg_popup_sub_pane_cp04

0xddf8,	// (0x0003f6c2) popup_mup_playback_window_g1

0xde04,	// (0x0003f6ce) popup_mup_playback_window_t1

0xde19,	// (0x0003f6e3) popup_mup_playback_window_t2

0x0001,

0xf506,	// (0x00040dd0) popup_mup_playback_window_t

0xde50,	// (0x0003f71a) main_image_pane_g1_ParamLimits

0xde50,	// (0x0003f71a) main_image_pane_g1

0xde93,	// (0x0003f75d) scroll_pane_cp018_ParamLimits

0xde93,	// (0x0003f75d) scroll_pane_cp018

0xdeab,	// (0x0003f775) scroll_pane_cp016_ParamLimits

0xdeab,	// (0x0003f775) scroll_pane_cp016

0x7cc3,	// (0x0003958d) smil2_image_pane_ParamLimits

0x7cc3,	// (0x0003958d) smil2_image_pane

0x7cf3,	// (0x000395bd) smil2_root_pane_ParamLimits

0x7cf3,	// (0x000395bd) smil2_root_pane

0x7d1f,	// (0x000395e9) smil2_text_pane_ParamLimits

0x7d1f,	// (0x000395e9) smil2_text_pane

0xcde8,	// (0x0003e6b2) bg_list_pane_cp06

0xdee7,	// (0x0003f7b1) grid_radio_pane

0xcde8,	// (0x0003e6b2) bg_popup_window_pane_cp06

0xdeef,	// (0x0003f7b9) main_fmradio_pane_t1

0xd98d,	// (0x0003f257) heading_pane_cp04

0xdefd,	// (0x0003f7c7) main_fmradio_pane_t2

0xeedc,	// (0x000407a6) popup_cale_lunar_info_window_g1

0xdf0b,	// (0x0003f7d5) main_fmradio_pane_t3

0xeee4,	// (0x000407ae) popup_cale_lunar_info_window_g2

0xdf19,	// (0x0003f7e3) main_fmradio_pane_t4

0x0001,

0xdf27,	// (0x0003f7f1) main_fmradio_pane_t5

0x0004,

0xf5e1,	// (0x00040eab) popup_cale_lunar_info_window_g

0xf51b,	// (0x00040de5) main_fmradio_pane_t

0xdf35,	// (0x0003f7ff) wait_bar_pane_cp03

0xdf3d,	// (0x0003f807) cell_fmradio_pane_ParamLimits

0xdf3d,	// (0x0003f807) cell_fmradio_pane

0xdda4,	// (0x0003f66e) cell_fmradio_pane_g1_ParamLimits

0xdda4,	// (0x0003f66e) cell_fmradio_pane_g1

0xcde8,	// (0x0003e6b2) grid_highlight_pane_cp011

0xdf50,	// (0x0003f81a) poc_content_pane_ParamLimits

0xdf50,	// (0x0003f81a) poc_content_pane

0xdf62,	// (0x0003f82c) scroll_pane_cp019

0x7d5f,	// (0x00039629) popup_call_poc_act_window_ParamLimits

0x7d5f,	// (0x00039629) popup_call_poc_act_window

0x7d6c,	// (0x00039636) popup_call_poc_inact_window_ParamLimits

0x7d6c,	// (0x00039636) popup_call_poc_inact_window

0xf5b8,	// (0x00040e82) bg_popup_call_poc_act_pane_g

0xee54,	// (0x0004071e) bg_popup_call_poc_inact_pane_g1

0xee5c,	// (0x00040726) bg_popup_call_poc_inact_pane_g2

0xdf6a,	// (0x0003f834) popup_call_poc_act_window_g2

0xee64,	// (0x0004072e) bg_popup_call_poc_inact_pane_g3

0xee6c,	// (0x00040736) bg_popup_call_poc_inact_pane_g4

0xee74,	// (0x0004073e) bg_popup_call_poc_inact_pane_g5

0xdf72,	// (0x0003f83c) popup_call_poc_act_window_t1_ParamLimits

0xdf72,	// (0x0003f83c) popup_call_poc_act_window_t1

0xdf9a,	// (0x0003f864) popup_call_poc_act_window_t2_ParamLimits

0xdf9a,	// (0x0003f864) popup_call_poc_act_window_t2

0xdfc2,	// (0x0003f88c) popup_call_poc_act_window_t3_ParamLimits

0xdfc2,	// (0x0003f88c) popup_call_poc_act_window_t3

0xdfea,	// (0x0003f8b4) popup_call_poc_act_window_t4_ParamLimits

0xdfea,	// (0x0003f8b4) popup_call_poc_act_window_t4

0x0003,

0xf526,	// (0x00040df0) popup_call_poc_act_window_t_ParamLimits

0xf526,	// (0x00040df0) popup_call_poc_act_window_t

0xee7c,	// (0x00040746) bg_popup_call_poc_inact_pane_g6

0xee84,	// (0x0004074e) bg_popup_call_poc_inact_pane_g7

0xee8c,	// (0x00040756) bg_popup_call_poc_inact_pane_g8

0xdffc,	// (0x0003f8c6) popup_call_poc_inact_window_g2

0xee94,	// (0x0004075e) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5a5,	// (0x00040e6f) bg_popup_call_poc_inact_pane_g

0xe004,	// (0x0003f8ce) popup_call_poc_inact_window_t1_ParamLimits

0xe004,	// (0x0003f8ce) popup_call_poc_inact_window_t1

0xe019,	// (0x0003f8e3) popup_call_poc_inact_window_t2_ParamLimits

0xe019,	// (0x0003f8e3) popup_call_poc_inact_window_t2

0xe02e,	// (0x0003f8f8) popup_call_poc_inact_window_t3_ParamLimits

0xe02e,	// (0x0003f8f8) popup_call_poc_inact_window_t3

0x0002,

0xf52f,	// (0x00040df9) popup_call_poc_inact_window_t_ParamLimits

0xf52f,	// (0x00040df9) popup_call_poc_inact_window_t

0xf04c,	// (0x00040916) context_pane_ParamLimits

0x835c,	// (0x00039c26) signal_pane_ParamLimits

0xdbf9,	// (0x0003f4c3) main_call2_pane

0xf03a,	// (0x00040904) popup_phob_thumbnail2_window_ParamLimits

0xf03a,	// (0x00040904) popup_phob_thumbnail2_window

0x7a2d,	// (0x000392f7) aid_hotspot_pointer_arrow_pane

0x7a35,	// (0x000392ff) aid_hotspot_pointer_hand_pane

0x808e,	// (0x00039958) phob_pre_status_pane_g5

0x5f96,	// (0x00037860) cams_zoom_pane_ParamLimits

0x5fa2,	// (0x0003786c) image_vga_pane_ParamLimits

0x5fb1,	// (0x0003787b) main_camera_pane_g1_ParamLimits

0x5fbf,	// (0x00037889) main_camera_pane_g2_ParamLimits

0x5fcb,	// (0x00037895) main_camera_pane_g3_ParamLimits

0x5fd7,	// (0x000378a1) main_camera_pane_g4_ParamLimits

0x5fe3,	// (0x000378ad) main_camera_pane_g5_ParamLimits

0x5fef,	// (0x000378b9) main_camera_pane_g6_ParamLimits

0x5ffb,	// (0x000378c5) main_camera_pane_g7_ParamLimits

0xf22e,	// (0x00040af8) main_camera_pane_g_ParamLimits

0x6007,	// (0x000378d1) main_camera_pane_t1_ParamLimits

0x6019,	// (0x000378e3) main_camera_pane_t2_ParamLimits

0xf23f,	// (0x00040b09) main_camera_pane_t_ParamLimits

0xd043,	// (0x0003e90d) bg_popup_preview_window_pane_cp01_ParamLimits

0xd043,	// (0x0003e90d) bg_popup_preview_window_pane_cp01

0xe043,	// (0x0003f90d) popup_phob_thumbnail2_window_g1_ParamLimits

0xe043,	// (0x0003f90d) popup_phob_thumbnail2_window_g1

0xcde8,	// (0x0003e6b2) call2_cli_visual_pane

0x7d88,	// (0x00039652) popup_call2_audio_conf_window_ParamLimits

0x7d88,	// (0x00039652) popup_call2_audio_conf_window

0x7d9d,	// (0x00039667) popup_call2_audio_first_window_ParamLimits

0x7d9d,	// (0x00039667) popup_call2_audio_first_window

0x7e3b,	// (0x00039705) popup_call2_audio_in_window_ParamLimits

0x7e3b,	// (0x00039705) popup_call2_audio_in_window

0x7e7d,	// (0x00039747) popup_call2_audio_out_window_ParamLimits

0x7e7d,	// (0x00039747) popup_call2_audio_out_window

0x7edf,	// (0x000397a9) popup_call2_audio_second_window_ParamLimits

0x7edf,	// (0x000397a9) popup_call2_audio_second_window

0x7f3d,	// (0x00039807) popup_call2_audio_wait_window_ParamLimits

0x7f3d,	// (0x00039807) popup_call2_audio_wait_window

0xcde8,	// (0x0003e6b2) bg_popup_call2_act_pane_cp03

0xd025,	// (0x0003e8ef) list_conf_pane_cp

0xe04f,	// (0x0003f919) popup_call2_audio_conf_window_t1

0xd9ea,	// (0x0003f2b4) list_single_graphic_popup_conf2_pane_ParamLimits

0xd9ea,	// (0x0003f2b4) list_single_graphic_popup_conf2_pane

0xd9fd,	// (0x0003f2c7) list_highlight_pane_cp04

0xe05d,	// (0x0003f927) list_single_graphic_popup_conf2_pane_g1

0xda0e,	// (0x0003f2d8) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf536,	// (0x00040e00) list_single_graphic_popup_conf2_pane_g

0xe067,	// (0x0003f931) list_single_graphic_popup_conf2_pane_t1

0xe075,	// (0x0003f93f) bg_popup_call2_act_pane_cp01_ParamLimits

0xe075,	// (0x0003f93f) bg_popup_call2_act_pane_cp01

0xe0ff,	// (0x0003f9c9) call_type_pane_cp05_ParamLimits

0xe0ff,	// (0x0003f9c9) call_type_pane_cp05

0xe153,	// (0x0003fa1d) popup_call2_audio_second_window_g1_ParamLimits

0xe153,	// (0x0003fa1d) popup_call2_audio_second_window_g1

0xe1a7,	// (0x0003fa71) popup_call2_audio_second_window_g2_ParamLimits

0xe1a7,	// (0x0003fa71) popup_call2_audio_second_window_g2

0x0002,

0xf53b,	// (0x00040e05) popup_call2_audio_second_window_g_ParamLimits

0xf53b,	// (0x00040e05) popup_call2_audio_second_window_g

0xe20c,	// (0x0003fad6) popup_call2_audio_second_window_t1_ParamLimits

0xe20c,	// (0x0003fad6) popup_call2_audio_second_window_t1

0xe2e1,	// (0x0003fbab) popup_call2_audio_second_window_t2_ParamLimits

0xe2e1,	// (0x0003fbab) popup_call2_audio_second_window_t2

0xe334,	// (0x0003fbfe) popup_call2_audio_second_window_t3_ParamLimits

0xe334,	// (0x0003fbfe) popup_call2_audio_second_window_t3

0x0003,

0xf542,	// (0x00040e0c) popup_call2_audio_second_window_t_ParamLimits

0xf542,	// (0x00040e0c) popup_call2_audio_second_window_t

0xcde8,	// (0x0003e6b2) bg_popup_call2_in_pane_cp02

0xcdf2,	// (0x0003e6bc) call_type_pane_cp04

0xcdfa,	// (0x0003e6c4) popup_call2_audio_wait_window_g1

0xce02,	// (0x0003e6cc) popup_call2_audio_wait_window_g2

0x0001,

0xf11b,	// (0x000409e5) popup_call2_audio_wait_window_g

0xce0a,	// (0x0003e6d4) popup_call2_audio_wait_window_t3

0xe427,	// (0x0003fcf1) bg_popup_call2_act_pane_ParamLimits

0xe427,	// (0x0003fcf1) bg_popup_call2_act_pane

0xe4e7,	// (0x0003fdb1) call_type_pane_cp03_ParamLimits

0xe4e7,	// (0x0003fdb1) call_type_pane_cp03

0xe54b,	// (0x0003fe15) popup_call2_audio_first_window_g1_ParamLimits

0xe54b,	// (0x0003fe15) popup_call2_audio_first_window_g1

0xe5bb,	// (0x0003fe85) popup_call2_audio_first_window_g2_ParamLimits

0xe5bb,	// (0x0003fe85) popup_call2_audio_first_window_g2

0xd916,	// (0x0003f1e0) popup_call2_audio_first_window_g3_ParamLimits

0xd916,	// (0x0003f1e0) popup_call2_audio_first_window_g3

0x0004,

0xf54b,	// (0x00040e15) popup_call2_audio_first_window_g_ParamLimits

0xf54b,	// (0x00040e15) popup_call2_audio_first_window_g

0xe699,	// (0x0003ff63) popup_call2_audio_first_window_t1_ParamLimits

0xe699,	// (0x0003ff63) popup_call2_audio_first_window_t1

0xe79c,	// (0x00040066) popup_call2_audio_first_window_t4_ParamLimits

0xe79c,	// (0x00040066) popup_call2_audio_first_window_t4

0xe87f,	// (0x00040149) popup_call2_audio_first_window_t5_ParamLimits

0xe87f,	// (0x00040149) popup_call2_audio_first_window_t5

0x0003,

0xf556,	// (0x00040e20) popup_call2_audio_first_window_t_ParamLimits

0xf556,	// (0x00040e20) popup_call2_audio_first_window_t

0xd03b,	// (0x0003e905) bg_popup_call2_act_pane_g1

0xeeec,	// (0x000407b6) popup_cale_lunar_info_window_t1

0xeefa,	// (0x000407c4) popup_cale_lunar_info_window_t2

0xef08,	// (0x000407d2) popup_cale_lunar_info_window_t3

0xcde8,	// (0x0003e6b2) bg_popup_call2_bubble_pane

0xe980,	// (0x0004024a) bg_popup_call2_in_pane_cp01_ParamLimits

0xe980,	// (0x0004024a) bg_popup_call2_in_pane_cp01

0xcac4,	// (0x0003e38e) call_type_pane_cp02

0xe9c8,	// (0x00040292) popup_call2_audio_out_window_g1_ParamLimits

0xe9c8,	// (0x00040292) popup_call2_audio_out_window_g1

0xe9f4,	// (0x000402be) popup_call2_audio_out_window_g2_ParamLimits

0xe9f4,	// (0x000402be) popup_call2_audio_out_window_g2

0xea1c,	// (0x000402e6) popup_call2_audio_out_window_g3_ParamLimits

0xea1c,	// (0x000402e6) popup_call2_audio_out_window_g3

0x0003,

0xf55f,	// (0x00040e29) popup_call2_audio_out_window_g_ParamLimits

0xf55f,	// (0x00040e29) popup_call2_audio_out_window_g

0xea57,	// (0x00040321) popup_call2_audio_out_window_t1_ParamLimits

0xea57,	// (0x00040321) popup_call2_audio_out_window_t1

0xeab6,	// (0x00040380) popup_call2_audio_out_window_t2_ParamLimits

0xeab6,	// (0x00040380) popup_call2_audio_out_window_t2

0xeb0a,	// (0x000403d4) popup_call2_audio_out_window_t3_ParamLimits

0xeb0a,	// (0x000403d4) popup_call2_audio_out_window_t3

0xeb20,	// (0x000403ea) popup_call2_audio_out_window_t4_ParamLimits

0xeb20,	// (0x000403ea) popup_call2_audio_out_window_t4

0xeb36,	// (0x00040400) popup_call2_audio_out_window_t5_ParamLimits

0xeb36,	// (0x00040400) popup_call2_audio_out_window_t5

0x0005,

0xf568,	// (0x00040e32) popup_call2_audio_out_window_t_ParamLimits

0xf568,	// (0x00040e32) popup_call2_audio_out_window_t

0xeb9a,	// (0x00040464) bg_popup_call2_in_pane_ParamLimits

0xeb9a,	// (0x00040464) bg_popup_call2_in_pane

0xebf6,	// (0x000404c0) popup_call2_audio_in_window_g1_ParamLimits

0xebf6,	// (0x000404c0) popup_call2_audio_in_window_g1

0xec2e,	// (0x000404f8) popup_call2_audio_in_window_g2_ParamLimits

0xec2e,	// (0x000404f8) popup_call2_audio_in_window_g2

0xec66,	// (0x00040530) popup_call2_audio_in_window_g3_ParamLimits

0xec66,	// (0x00040530) popup_call2_audio_in_window_g3

0x0003,

0xf575,	// (0x00040e3f) popup_call2_audio_in_window_g_ParamLimits

0xf575,	// (0x00040e3f) popup_call2_audio_in_window_g

0xecbe,	// (0x00040588) popup_call2_audio_in_window_t1_ParamLimits

0xecbe,	// (0x00040588) popup_call2_audio_in_window_t1

0xed3e,	// (0x00040608) popup_call2_audio_in_window_t2_ParamLimits

0xed3e,	// (0x00040608) popup_call2_audio_in_window_t2

0xedbe,	// (0x00040688) popup_call2_audio_in_window_t3_ParamLimits

0xedbe,	// (0x00040688) popup_call2_audio_in_window_t3

0xedd8,	// (0x000406a2) popup_call2_audio_in_window_t4_ParamLimits

0xedd8,	// (0x000406a2) popup_call2_audio_in_window_t4

0xedea,	// (0x000406b4) popup_call2_audio_in_window_t5_ParamLimits

0xedea,	// (0x000406b4) popup_call2_audio_in_window_t5

0xedff,	// (0x000406c9) popup_call2_audio_in_window_t6_ParamLimits

0xedff,	// (0x000406c9) popup_call2_audio_in_window_t6

0x0005,

0xf57e,	// (0x00040e48) popup_call2_audio_in_window_t_ParamLimits

0xf57e,	// (0x00040e48) popup_call2_audio_in_window_t

0xd03b,	// (0x0003e905) bg_popup_call2_in_pane_g1

0xef16,	// (0x000407e0) popup_cale_lunar_info_window_t4

0x0003,

0xf5e6,	// (0x00040eb0) popup_cale_lunar_info_window_t

0xd043,	// (0x0003e90d) bg_popup_call2_rect_pane_ParamLimits

0xd043,	// (0x0003e90d) bg_popup_call2_rect_pane

0xcde8,	// (0x0003e6b2) call2_cli_visual_graphic_pane

0xcde8,	// (0x0003e6b2) call2_cli_visual_text_pane

0x8402,	// (0x00039ccc) smil_status_volume_pane_g3

0x0002,

0xd16f,	// (0x0003ea39) call2_cli_visual_graphic_pane_g1

0xd16f,	// (0x0003ea39) call2_cli_visual_graphic_pane_g2

0xd16f,	// (0x0003ea39) call2_cli_visual_graphic_pane_g3

0x0002,

0xf58b,	// (0x00040e55) call2_cli_visual_graphic_pane_g

0xee14,	// (0x000406de) bg_popup_call2_rect_pane_g1

0xd1fb,	// (0x0003eac5) bg_popup_call2_rect_pane_g2

0xee1c,	// (0x000406e6) bg_popup_call2_rect_pane_g3

0xee24,	// (0x000406ee) bg_popup_call2_rect_pane_g4

0xee2c,	// (0x000406f6) bg_popup_call2_rect_pane_g5

0xee34,	// (0x000406fe) bg_popup_call2_rect_pane_g6

0xee3c,	// (0x00040706) bg_popup_call2_rect_pane_g7

0xee44,	// (0x0004070e) bg_popup_call2_rect_pane_g8

0xee4c,	// (0x00040716) bg_popup_call2_rect_pane_g9

0x0008,

0xf592,	// (0x00040e5c) bg_popup_call2_rect_pane_g

0xee54,	// (0x0004071e) bg_popup_call2_bubble_pane_g1

0xee5c,	// (0x00040726) bg_popup_call2_bubble_pane_g2

0xee64,	// (0x0004072e) bg_popup_call2_bubble_pane_g3

0xee6c,	// (0x00040736) bg_popup_call2_bubble_pane_g4

0xee74,	// (0x0004073e) bg_popup_call2_bubble_pane_g5

0xee7c,	// (0x00040746) bg_popup_call2_bubble_pane_g6

0xee84,	// (0x0004074e) bg_popup_call2_bubble_pane_g7

0xee8c,	// (0x00040756) bg_popup_call2_bubble_pane_g8

0xee94,	// (0x0004075e) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5a5,	// (0x00040e6f) bg_popup_call2_bubble_pane_g

0x5b0f,	// (0x000373d9) aid_cale_week_size_cell_pane

0x602b,	// (0x000378f5) aid_cams_cif_uncrop_pane_ParamLimits

0x602b,	// (0x000378f5) aid_cams_cif_uncrop_pane

0x6188,	// (0x00037a52) aid_cams_size_cell_ParamLimits

0x6188,	// (0x00037a52) aid_cams_size_cell

0x6194,	// (0x00037a5e) grid_cams_pane_ParamLimits

0x61a2,	// (0x00037a6c) linegrid_cams_pane_ParamLimits

0x6277,	// (0x00037b41) call_video_pane_t1

0x6298,	// (0x00037b62) call_video_pane_t2

0x0001,

0xf292,	// (0x00040b5c) call_video_pane_t

0x67cf,	// (0x00038099) aid_cale_month_size_cell_pane_ParamLimits

0x67cf,	// (0x00038099) aid_cale_month_size_cell_pane

0xf62f,	// (0x00040ef9) smil_status_volume_pane_g

0x840f,	// (0x00039cd9) volume_smil_pane_ParamLimits

0x52be,	// (0x00036b88) aid_popup2_width_pane

0x5a1a,	// (0x000372e4) cell_qdial_pane_g4_ParamLimits

0x5a1a,	// (0x000372e4) cell_qdial_pane_g4

0x73f2,	// (0x00038cbc) aid_blid_cardinal_pane_ParamLimits

0x7402,	// (0x00038ccc) aid_blid_destination_pane_ParamLimits

0x7402,	// (0x00038ccc) aid_blid_destination_pane

0xd043,	// (0x0003e90d) bg_popup_call_poc_act_pane_ParamLimits

0xd043,	// (0x0003e90d) bg_popup_call_poc_act_pane

0xd043,	// (0x0003e90d) bg_popup_call_poc_inact_pane_ParamLimits

0xd043,	// (0x0003e90d) bg_popup_call_poc_inact_pane

0xee9c,	// (0x00040766) bg_popup_call_poc_act_pane_g1

0xeea4,	// (0x0004076e) bg_popup_call_poc_act_pane_g2

0xeeac,	// (0x00040776) bg_popup_call_poc_act_pane_g3

0xee6c,	// (0x00040736) bg_popup_call_poc_act_pane_g4

0xee74,	// (0x0004073e) bg_popup_call_poc_act_pane_g5

0xeeb4,	// (0x0004077e) bg_popup_call_poc_act_pane_g6

0xee84,	// (0x0004074e) bg_popup_call_poc_act_pane_g7

0xeebc,	// (0x00040786) bg_popup_call_poc_act_pane_g8

0xcde8,	// (0x0003e6b2) main_usb_pane

0xf015,	// (0x000408df) popup_cale_lunar_info_window

0x65c3,	// (0x00037e8d) im_reading_pane_t1_ParamLimits

0xd3b6,	// (0x0003ec80) list_im_pane_ParamLimits

0xd3c7,	// (0x0003ec91) scroll_pane_cp07_ParamLimits

0xcde8,	// (0x0003e6b2) grid_highlight_pane_cp012

0xd043,	// (0x0003e90d) mup_scale_pane_ParamLimits

0xd916,	// (0x0003f1e0) main_usb_pane_g1_ParamLimits

0xd916,	// (0x0003f1e0) main_usb_pane_g1

0x7fb1,	// (0x0003987b) main_usb_pane_g2_ParamLimits

0x7fb1,	// (0x0003987b) main_usb_pane_g2

0x0001,

0xf5cf,	// (0x00040e99) main_usb_pane_g_ParamLimits

0xf5cf,	// (0x00040e99) main_usb_pane_g

0x7fbd,	// (0x00039887) main_usb_pane_t1_ParamLimits

0x7fbd,	// (0x00039887) main_usb_pane_t1

0x7fcf,	// (0x00039899) main_usb_pane_t2_ParamLimits

0x7fcf,	// (0x00039899) main_usb_pane_t2

0x7fe1,	// (0x000398ab) main_usb_pane_t3_ParamLimits

0x7fe1,	// (0x000398ab) main_usb_pane_t3

0x7ff3,	// (0x000398bd) main_usb_pane_t4_ParamLimits

0x7ff3,	// (0x000398bd) main_usb_pane_t4

0x8005,	// (0x000398cf) main_usb_pane_t5_ParamLimits

0x8005,	// (0x000398cf) main_usb_pane_t5

0x8017,	// (0x000398e1) main_usb_pane_t6_ParamLimits

0x8017,	// (0x000398e1) main_usb_pane_t6

0x0005,

0xf5d4,	// (0x00040e9e) main_usb_pane_t_ParamLimits

0x7398,	// (0x00038c62) aid_text_placing

0x73a4,	// (0x00038c6e) main_location2_pane_t1_ParamLimits

0x73b8,	// (0x00038c82) main_location2_pane_t2_ParamLimits

0x73cc,	// (0x00038c96) main_location2_pane_t3_ParamLimits

0x73e0,	// (0x00038caa) main_location2_pane_t4_ParamLimits

0x73e0,	// (0x00038caa) main_location2_pane_t4

0xf3f3,	// (0x00040cbd) main_location2_pane_t_ParamLimits

0xd07f,	// (0x0003e949) find_pinb_pane_g2_ParamLimits

0xd07f,	// (0x0003e949) find_pinb_pane_g2

0x0001,

0xf141,	// (0x00040a0b) find_pinb_pane_g_ParamLimits

0xf141,	// (0x00040a0b) find_pinb_pane_g

0xd08b,	// (0x0003e955) find_pinb_pane_t1_ParamLimits

0xd09d,	// (0x0003e967) find_pinb_pane_t2_ParamLimits

0xf146,	// (0x00040a10) find_pinb_pane_t_ParamLimits

0xcde8,	// (0x0003e6b2) main_call3_pane

0x6bdb,	// (0x000384a5) cale_month_day_heading_pane_t1_ParamLimits

0x6c39,	// (0x00038503) cale_month_day_heading_pane_t2_ParamLimits

0x6c9e,	// (0x00038568) cale_month_day_heading_pane_t3_ParamLimits

0x6d03,	// (0x000385cd) cale_month_day_heading_pane_t4_ParamLimits

0x6d68,	// (0x00038632) cale_month_day_heading_pane_t5_ParamLimits

0x6dcd,	// (0x00038697) cale_month_day_heading_pane_t6_ParamLimits

0x6e32,	// (0x000386fc) cale_month_day_heading_pane_t7_ParamLimits

0xf2ca,	// (0x00040b94) cale_month_day_heading_pane_t_ParamLimits

0xd607,	// (0x0003eed1) smil_status_volume_pane

0x7b75,	// (0x0003943f) postcard_address_pane_ParamLimits

0x7b75,	// (0x0003943f) postcard_address_pane

0x7b81,	// (0x0003944b) postcard_message_pane_ParamLimits

0x7b81,	// (0x0003944b) postcard_message_pane

0x7f7c,	// (0x00039846) call2_cli_visual_pane_t1_ParamLimits

0x7f7c,	// (0x00039846) call2_cli_visual_pane_t1

0x8566,	// (0x00039e30) postcard_message_pane_t1_ParamLimits

0x8566,	// (0x00039e30) postcard_message_pane_t1

0x854f,	// (0x00039e19) postcard_address_pane_t1_ParamLimits

0x854f,	// (0x00039e19) postcard_address_pane_t1

0x8540,	// (0x00039e0a) popup_call3_audio_in_window_ParamLimits

0x8540,	// (0x00039e0a) popup_call3_audio_in_window

0x8424,	// (0x00039cee) bg_popup_call3_in_pane_ParamLimits

0x8424,	// (0x00039cee) bg_popup_call3_in_pane

0x8486,	// (0x00039d50) popup_call3_audio_in_window_g1_ParamLimits

0x8486,	// (0x00039d50) popup_call3_audio_in_window_g1

0x849e,	// (0x00039d68) popup_call3_audio_in_window_g2_ParamLimits

0x849e,	// (0x00039d68) popup_call3_audio_in_window_g2

0x84b6,	// (0x00039d80) popup_call3_audio_in_window_g3_ParamLimits

0x84b6,	// (0x00039d80) popup_call3_audio_in_window_g3

0x0003,

0xf636,	// (0x00040f00) popup_call3_audio_in_window_g_ParamLimits

0xf636,	// (0x00040f00) popup_call3_audio_in_window_g

0x84de,	// (0x00039da8) popup_call3_audio_in_window_t1_ParamLimits

0x84de,	// (0x00039da8) popup_call3_audio_in_window_t1

0x8506,	// (0x00039dd0) popup_call3_audio_in_window_t2_ParamLimits

0x8506,	// (0x00039dd0) popup_call3_audio_in_window_t2

0x852e,	// (0x00039df8) popup_call3_audio_in_window_t3_ParamLimits

0x852e,	// (0x00039df8) popup_call3_audio_in_window_t3

0x0002,

0xf63f,	// (0x00040f09) popup_call3_audio_in_window_t_ParamLimits

0xf63f,	// (0x00040f09) popup_call3_audio_in_window_t

0xdbf9,	// (0x0003f4c3) bg_popup_call3_rect_pane

0xee14,	// (0x000406de) bg_popup_call3_rect_pane_g1

0xd1fb,	// (0x0003eac5) bg_popup_call3_rect_pane_g2

0xee1c,	// (0x000406e6) bg_popup_call3_rect_pane_g3

0xee24,	// (0x000406ee) bg_popup_call3_rect_pane_g4

0xee2c,	// (0x000406f6) bg_popup_call3_rect_pane_g5

0xee34,	// (0x000406fe) bg_popup_call3_rect_pane_g6

0xee3c,	// (0x00040706) bg_popup_call3_rect_pane_g7

0x77f2,	// (0x000390bc) mup_visualizer_osc_pane

0xdcb8,	// (0x0003f582) mup_visualizer_spec_pane

0x8444,	// (0x00039d0e) call3_video_qcif_pane_ParamLimits

0x8444,	// (0x00039d0e) call3_video_qcif_pane

0x8456,	// (0x00039d20) call3_video_qcif_uncrop_pane_ParamLimits

0x8456,	// (0x00039d20) call3_video_qcif_uncrop_pane

0x8464,	// (0x00039d2e) call3_video_subqcif_pane_ParamLimits

0x8464,	// (0x00039d2e) call3_video_subqcif_pane

0x8476,	// (0x00039d40) call3_video_subqcif_uncrop_pane_ParamLimits

0x8476,	// (0x00039d40) call3_video_subqcif_uncrop_pane

0x84ce,	// (0x00039d98) popup_call3_audio_in_window_g4_ParamLimits

0x84ce,	// (0x00039d98) popup_call3_audio_in_window_g4

0x83f1,	// (0x00039cbb) mup_spec_half_pane

0x83fa,	// (0x00039cc4) mup_spec_half_pane_cp

0xf0ac,	// (0x00040976) mup_osc_middle_pane

0xf0b5,	// (0x0004097f) mup_visualizer_osc_pane_g1

0x83d2,	// (0x00039c9c) mup_spec_bar_pane_ParamLimits

0x83d2,	// (0x00039c9c) mup_spec_bar_pane

0xf099,	// (0x00040963) mup_spec_bar_pane_g1

0xf0a3,	// (0x0004096d) mup_spec_bar_pane_g2

0x0001,

0xf62a,	// (0x00040ef4) mup_spec_bar_pane_g

0x5b0f,	// (0x000373d9) aid_cale_week_size_cell_pane_ParamLimits

0x5b22,	// (0x000373ec) bg_cale_heading_pane_ParamLimits

0xd22f,	// (0x0003eaf9) bg_cale_pane_cp01_ParamLimits

0x5b3e,	// (0x00037408) cale_week_corner_pane_ParamLimits

0x5b54,	// (0x0003741e) cale_week_day_heading_pane_ParamLimits

0x5b70,	// (0x0003743a) cale_week_scroll_pane_g1_ParamLimits

0x5b89,	// (0x00037453) cale_week_scroll_pane_g2_ParamLimits

0x5b9a,	// (0x00037464) cale_week_scroll_pane_g3_ParamLimits

0x5bab,	// (0x00037475) cale_week_scroll_pane_g4_ParamLimits

0x5bbc,	// (0x00037486) cale_week_scroll_pane_g5_ParamLimits

0x5bcd,	// (0x00037497) cale_week_scroll_pane_g6_ParamLimits

0x5bde,	// (0x000374a8) cale_week_scroll_pane_g7_ParamLimits

0x5bf1,	// (0x000374bb) cale_week_scroll_pane_g8_ParamLimits

0x5c04,	// (0x000374ce) cale_week_scroll_pane_g9_ParamLimits

0x5c15,	// (0x000374df) cale_week_scroll_pane_g10_ParamLimits

0x5c26,	// (0x000374f0) cale_week_scroll_pane_g11_ParamLimits

0x5c37,	// (0x00037501) cale_week_scroll_pane_g12_ParamLimits

0x5c48,	// (0x00037512) cale_week_scroll_pane_g13_ParamLimits

0x5c61,	// (0x0003752b) cale_week_scroll_pane_g14_ParamLimits

0x5c7a,	// (0x00037544) cale_week_scroll_pane_g15_ParamLimits

0xf1d2,	// (0x00040a9c) cale_week_scroll_pane_g_ParamLimits

0x5c93,	// (0x0003755d) cale_week_time_pane_ParamLimits

0x5ca6,	// (0x00037570) grid_cale_week_pane_ParamLimits

0xd248,	// (0x0003eb12) listscroll_cale_week_pane_t1

0x5cc3,	// (0x0003758d) scroll_pane_cp08_ParamLimits

0x6820,	// (0x000380ea) cale_month_corner_pane_ParamLimits

0xd5dd,	// (0x0003eea7) cale_month_pane_t1

0x6b8a,	// (0x00038454) cale_month_week_pane_ParamLimits

0xd916,	// (0x0003f1e0) popup_call_status_window_g1_ParamLimits

0x71bb,	// (0x00038a85) popup_call_status_window_g2_ParamLimits

0x71c7,	// (0x00038a91) popup_call_status_window_g3_ParamLimits

0xf37a,	// (0x00040c44) popup_call_status_window_g_ParamLimits

0xd97d,	// (0x0003f247) aid_call2_pane

0x4364,	// (0x00035c2e) msg_header_pane_g1

0x7b75,	// (0x0003943f) postcard_address2_pane_ParamLimits

0x7b75,	// (0x0003943f) postcard_address2_pane

0x7b81,	// (0x0003944b) postcard_message2_pane_ParamLimits

0x7b81,	// (0x0003944b) postcard_message2_pane

0x836a,	// (0x00039c34) message2_row_pane_ParamLimits

0x836a,	// (0x00039c34) message2_row_pane

0x8385,	// (0x00039c4f) address2_row_pane_ParamLimits

0x8385,	// (0x00039c4f) address2_row_pane

0xf067,	// (0x00040931) postcard_message2_row_pane_g1

0xf06f,	// (0x00040939) postcard_message2_row_pane_t1

0xf067,	// (0x00040931) address2_row_pane_g1

0xf06f,	// (0x00040939) address2_row_pane_t1

0x5ef7,	// (0x000377c1) aid_size_cell_vorec

0xcde8,	// (0x0003e6b2) main_rss_pane

0x8398,	// (0x00039c62) rss_list_single_pane_ParamLimits

0x8398,	// (0x00039c62) rss_list_single_pane

0xf07d,	// (0x00040947) rss_list_single_pane_t1

0xf08b,	// (0x00040955) rss_list_single_pane_t2

0x0001,

0xf625,	// (0x00040eef) rss_list_single_pane_t

0xcde8,	// (0x0003e6b2) main_camera2_pane

0xcde8,	// (0x0003e6b2) main_video2_pane

0x85ca,	// (0x00039e94) cams_zoom_pane_cp2_ParamLimits

0x85ca,	// (0x00039e94) cams_zoom_pane_cp2

0x85d6,	// (0x00039ea0) image2_vga_pane_ParamLimits

0x85d6,	// (0x00039ea0) image2_vga_pane

0x85e5,	// (0x00039eaf) main_camera2_pane_g1_ParamLimits

0x85e5,	// (0x00039eaf) main_camera2_pane_g1

0x85f1,	// (0x00039ebb) main_camera2_pane_g2_ParamLimits

0x85f1,	// (0x00039ebb) main_camera2_pane_g2

0x85fd,	// (0x00039ec7) main_camera2_pane_g3_ParamLimits

0x85fd,	// (0x00039ec7) main_camera2_pane_g3

0x8609,	// (0x00039ed3) main_camera2_pane_g4_ParamLimits

0x8609,	// (0x00039ed3) main_camera2_pane_g4

0x8615,	// (0x00039edf) main_camera2_pane_g5_ParamLimits

0x8615,	// (0x00039edf) main_camera2_pane_g5

0x8621,	// (0x00039eeb) main_camera2_pane_g6_ParamLimits

0x8621,	// (0x00039eeb) main_camera2_pane_g6

0x862d,	// (0x00039ef7) main_camera2_pane_g7_ParamLimits

0x862d,	// (0x00039ef7) main_camera2_pane_g7

0x8639,	// (0x00039f03) main_camera2_pane_g8_ParamLimits

0x8639,	// (0x00039f03) main_camera2_pane_g8

0x0008,

0xf646,	// (0x00040f10) main_camera2_pane_g_ParamLimits

0xf646,	// (0x00040f10) main_camera2_pane_g

0x8651,	// (0x00039f1b) main_camera2_pane_t1_ParamLimits

0x8651,	// (0x00039f1b) main_camera2_pane_t1

0x8663,	// (0x00039f2d) main_camera2_pane_t2_ParamLimits

0x8663,	// (0x00039f2d) main_camera2_pane_t2

0x8675,	// (0x00039f3f) main_camera2_pane_t3_ParamLimits

0x8675,	// (0x00039f3f) main_camera2_pane_t3

0x8687,	// (0x00039f51) main_camera2_pane_t4_ParamLimits

0x8687,	// (0x00039f51) main_camera2_pane_t4

0x0006,

0xf659,	// (0x00040f23) main_camera2_pane_t_ParamLimits

0xf659,	// (0x00040f23) main_camera2_pane_t

0x86e9,	// (0x00039fb3) cams_zoom_pane_cp4_ParamLimits

0x86e9,	// (0x00039fb3) cams_zoom_pane_cp4

0x86f9,	// (0x00039fc3) image2_cif_pane_ParamLimits

0x86f9,	// (0x00039fc3) image2_cif_pane

0x870e,	// (0x00039fd8) image2_subqcif_pane_ParamLimits

0x870e,	// (0x00039fd8) image2_subqcif_pane

0x871d,	// (0x00039fe7) main_video2_pane_g1_ParamLimits

0x871d,	// (0x00039fe7) main_video2_pane_g1

0x872f,	// (0x00039ff9) main_video2_pane_g2_ParamLimits

0x872f,	// (0x00039ff9) main_video2_pane_g2

0x873f,	// (0x0003a009) main_video2_pane_g3_ParamLimits

0x873f,	// (0x0003a009) main_video2_pane_g3

0x874f,	// (0x0003a019) main_video2_pane_g4_ParamLimits

0x874f,	// (0x0003a019) main_video2_pane_g4

0x875f,	// (0x0003a029) main_video2_pane_g5_ParamLimits

0x875f,	// (0x0003a029) main_video2_pane_g5

0x876f,	// (0x0003a039) main_video2_pane_g6_ParamLimits

0x876f,	// (0x0003a039) main_video2_pane_g6

0x0005,

0xf668,	// (0x00040f32) main_video2_pane_g_ParamLimits

0xf668,	// (0x00040f32) main_video2_pane_g

0x8781,	// (0x0003a04b) main_video2_pane_t1_ParamLimits

0x8781,	// (0x0003a04b) main_video2_pane_t1

0x879b,	// (0x0003a065) main_video2_pane_t2_ParamLimits

0x879b,	// (0x0003a065) main_video2_pane_t2

0x87c1,	// (0x0003a08b) main_video2_pane_t3_ParamLimits

0x87c1,	// (0x0003a08b) main_video2_pane_t3

0x0002,

0xf675,	// (0x00040f3f) main_video2_pane_t_ParamLimits

0xf675,	// (0x00040f3f) main_video2_pane_t

0x80ce,	// (0x00039998) call_muted_g2

0x0001,

0xf617,	// (0x00040ee1) call_muted_g

0xcde8,	// (0x0003e6b2) main_mup2_pane

0x007d,	// (0x00031947) main_mup2_pane_g1_ParamLimits

0x007d,	// (0x00031947) main_mup2_pane_g1

0x87e7,	// (0x0003a0b1) main_mup2_pane_g2_ParamLimits

0x87e7,	// (0x0003a0b1) main_mup2_pane_g2

0x8a69,	// (0x0003a333) main_mup_pane_g13_cp1

0x8a71,	// (0x0003a33b) mup_volume_pane_cp1

0x8807,	// (0x0003a0d1) main_mup2_pane_g4_ParamLimits

0x8807,	// (0x0003a0d1) main_mup2_pane_g4

0x881c,	// (0x0003a0e6) main_mup2_pane_g5_ParamLimits

0x881c,	// (0x0003a0e6) main_mup2_pane_g5

0x8831,	// (0x0003a0fb) main_mup2_pane_g6_ParamLimits

0x8831,	// (0x0003a0fb) main_mup2_pane_g6

0x8846,	// (0x0003a110) main_mup2_pane_g7_ParamLimits

0x8846,	// (0x0003a110) main_mup2_pane_g7

0x0006,

0xf67c,	// (0x00040f46) main_mup2_pane_g_ParamLimits

0xf67c,	// (0x00040f46) main_mup2_pane_g

0x8862,	// (0x0003a12c) main_mup2_pane_t1_ParamLimits

0x8862,	// (0x0003a12c) main_mup2_pane_t1

0x8879,	// (0x0003a143) main_mup2_pane_t2_ParamLimits

0x8879,	// (0x0003a143) main_mup2_pane_t2

0x8890,	// (0x0003a15a) main_mup2_pane_t3_ParamLimits

0x8890,	// (0x0003a15a) main_mup2_pane_t3

0x88a7,	// (0x0003a171) main_mup2_pane_t4_ParamLimits

0x88a7,	// (0x0003a171) main_mup2_pane_t4

0x88c1,	// (0x0003a18b) main_mup2_pane_t5_ParamLimits

0x88c1,	// (0x0003a18b) main_mup2_pane_t5

0x88db,	// (0x0003a1a5) main_mup2_pane_t6_ParamLimits

0x88db,	// (0x0003a1a5) main_mup2_pane_t6

0x0005,

0xf68b,	// (0x00040f55) main_mup2_pane_t_ParamLimits

0xf68b,	// (0x00040f55) main_mup2_pane_t

0x8913,	// (0x0003a1dd) mup2_visualizer_pane_ParamLimits

0x8913,	// (0x0003a1dd) mup2_visualizer_pane

0x8949,	// (0x0003a213) mup_progress_pane_cp_ParamLimits

0x8949,	// (0x0003a213) mup_progress_pane_cp

0x8a54,	// (0x0003a31e) mup_volume_pane_cp_ParamLimits

0x8a54,	// (0x0003a31e) mup_volume_pane_cp

0x8960,	// (0x0003a22a) mup2_visualizer_pane_g1_ParamLimits

0x8960,	// (0x0003a22a) mup2_visualizer_pane_g1

0x004f,	// (0x00031919) mup2_visualizer_pane_g2_ParamLimits

0x004f,	// (0x00031919) mup2_visualizer_pane_g2

0x8975,	// (0x0003a23f) mup2_visualizer_pane_g3_ParamLimits

0x8975,	// (0x0003a23f) mup2_visualizer_pane_g3

0x0002,

0xf698,	// (0x00040f62) mup2_visualizer_pane_g_ParamLimits

0xf698,	// (0x00040f62) mup2_visualizer_pane_g

0xdedf,	// (0x0003f7a9) aid_size_cell_fmradio

0x81e4,	// (0x00039aae) aid_height_parent_landcape

0xd445,	// (0x0003ed0f) wml_content_pane_cp

0xd44d,	// (0x0003ed17) wml_tabs_pane

0xd456,	// (0x0003ed20) popup_wml_miniature_window

0xd45e,	// (0x0003ed28) scroll_pane_cp021

0xd472,	// (0x0003ed3c) wml_content_pane_comp8

0xcde8,	// (0x0003e6b2) bg_popup_sub_pane_cp05

0x006d,	// (0x00031937) popup_wml_miniature_window_g1

0x0075,	// (0x0003193f) wml_miniature_view_pane

0x8983,	// (0x0003a24d) aid_size_wml_view

0x898b,	// (0x0003a255) wml_miniature_view_pane_g1

0x8994,	// (0x0003a25e) wml_miniature_view_pane_g2

0x899d,	// (0x0003a267) wml_miniature_view_pane_g3

0x89a5,	// (0x0003a26f) wml_miniature_view_pane_g4

0x89ad,	// (0x0003a277) wml_miniature_view_pane_g5

0x89b5,	// (0x0003a27f) wml_miniature_view_pane_g6

0x89bd,	// (0x0003a287) wml_miniature_view_pane_g7

0x89c5,	// (0x0003a28f) wml_miniature_view_pane_g8

0x0007,

0xf69f,	// (0x00040f69) wml_miniature_view_pane_g

0x007d,	// (0x00031947) background_graphic_ParamLimits

0x007d,	// (0x00031947) background_graphic

0x0089,	// (0x00031953) wml_tabs_2_pane

0x0092,	// (0x0003195c) wml_tabs_3_pane_ParamLimits

0x0092,	// (0x0003195c) wml_tabs_3_pane

0x00a4,	// (0x0003196e) wml_tabs_4_pane_ParamLimits

0x00a4,	// (0x0003196e) wml_tabs_4_pane

0x00ba,	// (0x00031984) wml_tabs_5_pane_ParamLimits

0x00ba,	// (0x00031984) wml_tabs_5_pane

0x00d4,	// (0x0003199e) wml_tabs_pane_g2_ParamLimits

0x00d4,	// (0x0003199e) wml_tabs_pane_g2

0x00e8,	// (0x000319b2) wml_tabs_pane_g3_ParamLimits

0x00e8,	// (0x000319b2) wml_tabs_pane_g3

0x89cd,	// (0x0003a297) wml_tabs_2_active_pane_ParamLimits

0x89cd,	// (0x0003a297) wml_tabs_2_active_pane

0x89dd,	// (0x0003a2a7) wml_tabs_2_passive_pane_ParamLimits

0x89dd,	// (0x0003a2a7) wml_tabs_2_passive_pane

0x89ed,	// (0x0003a2b7) wml_tabs_3_active_pane_cp_ParamLimits

0x89ed,	// (0x0003a2b7) wml_tabs_3_active_pane_cp

0x89fe,	// (0x0003a2c8) wml_tabs_3_passive_pane_ParamLimits

0x89fe,	// (0x0003a2c8) wml_tabs_3_passive_pane

0x8a0f,	// (0x0003a2d9) wml_tabs_3_passive_pane_cp_ParamLimits

0x8a0f,	// (0x0003a2d9) wml_tabs_3_passive_pane_cp

0x8a20,	// (0x0003a2ea) tabs_4_active_pane

0x8a28,	// (0x0003a2f2) tabs_4_passive_pane

0x8a30,	// (0x0003a2fa) tabs_4_passive_pane_cp

0x8a38,	// (0x0003a302) tabs_4_passive_pane_cp2

0x7fa9,	// (0x00039873) aid_height_text

0x77bf,	// (0x00039089) mup_volume_cont_pane_ParamLimits

0x77bf,	// (0x00039089) mup_volume_cont_pane

0x5671,	// (0x00036f3b) aid_size_cell_pinb

0x567b,	// (0x00036f45) aid_size_list_pinb

0x8932,	// (0x0003a1fc) mup2_volume_cont_pane_ParamLimits

0x8932,	// (0x0003a1fc) mup2_volume_cont_pane

0x8a40,	// (0x0003a30a) mup2_volume_cont_pane_g1_ParamLimits

0x8a40,	// (0x0003a30a) mup2_volume_cont_pane_g1

0x52ca,	// (0x00036b94) aid_size_cell_touch_ParamLimits

0x52ca,	// (0x00036b94) aid_size_cell_touch

0x5557,	// (0x00036e21) touch_pane_ParamLimits

0x5557,	// (0x00036e21) touch_pane

0x52ac,	// (0x00036b76) main_rss2_pane

0x013e,	// (0x00031a08) listscroll_rss2_pane

0x0147,	// (0x00031a11) rss2_navigation_pane

0x014f,	// (0x00031a19) list_rss2_pane

0xdab0,	// (0x0003f37a) scroll_pane_cp22

0x0157,	// (0x00031a21) rss2_navigation_pane_g1

0x0160,	// (0x00031a2a) rss2_navigation_pane_g2

0x0168,	// (0x00031a32) rss2_navigation_pane_g3

0x0002,

0xf6b0,	// (0x00040f7a) rss2_navigation_pane_g

0x0170,	// (0x00031a3a) rss2_navigation_pane_t1

0x8a79,	// (0x0003a343) rss2_list_single_pane_ParamLimits

0x8a79,	// (0x0003a343) rss2_list_single_pane

0x017e,	// (0x00031a48) rss2_list_single_pane_t2

0x018c,	// (0x00031a56) rss2_list_single_pane_t3_ParamLimits

0x018c,	// (0x00031a56) rss2_list_single_pane_t3

0x01a9,	// (0x00031a73) rss2_list_single_pane_t4

0x7036,	// (0x00038900) smil_status_pane_g1

0xe2c7,	// (0x0003fb91) main_image2_pane_ParamLimits

0xe2c7,	// (0x0003fb91) main_image2_pane

0x8645,	// (0x00039f0f) main_camera2_pane_g9_ParamLimits

0x8645,	// (0x00039f0f) main_camera2_pane_g9

0x8699,	// (0x00039f63) main_camera2_pane_t5_ParamLimits

0x8699,	// (0x00039f63) main_camera2_pane_t5

0x86ab,	// (0x00039f75) main_camera2_pane_t6_ParamLimits

0x86ab,	// (0x00039f75) main_camera2_pane_t6

0x8aaa,	// (0x0003a374) main_image2_pane_g1_ParamLimits

0x8aaa,	// (0x0003a374) main_image2_pane_g1

0x7d49,	// (0x00039613) smil2_video_pane_ParamLimits

0x7d49,	// (0x00039613) smil2_video_pane

0x40fa,	// (0x000359c4) aid_zoom_text_primary_cp

0xc9cb,	// (0x0003e295) popup_preview_fixed_window

0xd3ae,	// (0x0003ec78) im_reading_pane_g1

0x858f,	// (0x00039e59) cams2_bc_adjust_pane_cp_ParamLimits

0x858f,	// (0x00039e59) cams2_bc_adjust_pane_cp

0x86db,	// (0x00039fa5) cams2_bc_adjust_pane_ParamLimits

0x86db,	// (0x00039fa5) cams2_bc_adjust_pane

0x8ab6,	// (0x0003a380) cams2_bc_adjust_pane_g1

0x8abe,	// (0x0003a388) cams2_slider_pane

0x8ac7,	// (0x0003a391) cams2_slider_pane_g1

0x8ad0,	// (0x0003a39a) cams2_slider_pane_g2

0x0006,

0xf6b7,	// (0x00040f81) cams2_slider_pane_g

0x576c,	// (0x00037036) calc_display_pane_ParamLimits

0x578a,	// (0x00037054) calc_paper_pane_ParamLimits

0x57a6,	// (0x00037070) grid_calc_pane_ParamLimits

0x7229,	// (0x00038af3) popup_clock_digital_window_t1_ParamLimits

0xde7c,	// (0x0003f746) main_image_pane_t1

0x5752,	// (0x0003701c) aid_size_cell_calc_ParamLimits

0x5752,	// (0x0003701c) aid_size_cell_calc

0x8216,	// (0x00039ae0) popup_blid_sat_info2_window_ParamLimits

0x8216,	// (0x00039ae0) popup_blid_sat_info2_window

0x01f3,	// (0x00031abd) aid_size_cell_blid

0x01fb,	// (0x00031ac5) bg_popup_window_pane_cp07

0x021e,	// (0x00031ae8) grid_popup_blid_pane

0x0228,	// (0x00031af2) heading_pane_cp05_ParamLimits

0x0228,	// (0x00031af2) heading_pane_cp05

0x02f2,	// (0x00031bbc) cell_popup_blid_pane_ParamLimits

0x02f2,	// (0x00031bbc) cell_popup_blid_pane

0x0316,	// (0x00031be0) cell_popup_blid_pane_g1

0x031e,	// (0x00031be8) cell_popup_blid_pane_t1

0x88f8,	// (0x0003a1c2) mup2_indicator_pane_ParamLimits

0x88f8,	// (0x0003a1c2) mup2_indicator_pane

0xdbf9,	// (0x0003f4c3) mup2_visualizer_osc_pane

0x005b,	// (0x00031925) mup2_visualizer_spec_pane_ParamLimits

0x005b,	// (0x00031925) mup2_visualizer_spec_pane

0x8aea,	// (0x0003a3b4) mup2_spec_half_pane

0x8af3,	// (0x0003a3bd) mup2_spec_half_pane_cp

0x8afd,	// (0x0003a3c7) mup2_spec_bar_pane_ParamLimits

0x8afd,	// (0x0003a3c7) mup2_spec_bar_pane

0xf099,	// (0x00040963) mup2_spec_bar_pane_g1

0xf0a3,	// (0x0004096d) mup2_spec_bar_pane_g2

0x0001,

0xf62a,	// (0x00040ef4) mup2_spec_bar_pane_g

0x8b1c,	// (0x0003a3e6) mup2_osc_middle_pane

0xf0b5,	// (0x0004097f) mup2_visualizer_osc_pane_g1

0xc9f5,	// (0x0003e2bf) popup_number_entry_window_t1_ParamLimits

0xca08,	// (0x0003e2d2) popup_number_entry_window_t2_ParamLimits

0xca1a,	// (0x0003e2e4) popup_number_entry_window_t3_ParamLimits

0x55ae,	// (0x00036e78) popup_number_entry_window_t5_ParamLimits

0x55ae,	// (0x00036e78) popup_number_entry_window_t5

0xf0ec,	// (0x000409b6) popup_number_entry_window_t_ParamLimits

0xca2c,	// (0x0003e2f6) text_title_cp2_ParamLimits

0x7a3d,	// (0x00039307) aid_hotspot_pointer_text2_pane

0x7ad7,	// (0x000393a1) main_viewer_pane_g9_ParamLimits

0x7ad7,	// (0x000393a1) main_viewer_pane_g9

0xd5dd,	// (0x0003eea7) cale_month_pane_t1_ParamLimits

0xd61a,	// (0x0003eee4) bg_cale_pane_ParamLimits

0xd632,	// (0x0003eefc) list_cale_pane_ParamLimits

0xd248,	// (0x0003eb12) listscroll_cale_day_pane_t1

0xd643,	// (0x0003ef0d) scroll_pane_cp09_ParamLimits

0x77fa,	// (0x000390c4) main_mup_eq_pane_t1_ParamLimits

0x77fa,	// (0x000390c4) main_mup_eq_pane_t1

0x7814,	// (0x000390de) main_mup_eq_pane_t2_ParamLimits

0x7814,	// (0x000390de) main_mup_eq_pane_t2

0x782e,	// (0x000390f8) main_mup_eq_pane_t3_ParamLimits

0x782e,	// (0x000390f8) main_mup_eq_pane_t3

0x7846,	// (0x00039110) main_mup_eq_pane_t4_ParamLimits

0x7846,	// (0x00039110) main_mup_eq_pane_t4

0x785e,	// (0x00039128) main_mup_eq_pane_t5_ParamLimits

0x785e,	// (0x00039128) main_mup_eq_pane_t5

0x7876,	// (0x00039140) main_mup_eq_pane_t6_ParamLimits

0x7876,	// (0x00039140) main_mup_eq_pane_t6

0x788a,	// (0x00039154) main_mup_eq_pane_t7_ParamLimits

0x788a,	// (0x00039154) main_mup_eq_pane_t7

0x789e,	// (0x00039168) main_mup_eq_pane_t8_ParamLimits

0x789e,	// (0x00039168) main_mup_eq_pane_t8

0x78b4,	// (0x0003917e) main_mup_eq_pane_t9_ParamLimits

0x78b4,	// (0x0003917e) main_mup_eq_pane_t9

0x78cc,	// (0x00039196) main_mup_eq_pane_t10_ParamLimits

0x78cc,	// (0x00039196) main_mup_eq_pane_t10

0x0009,

0xf479,	// (0x00040d43) main_mup_eq_pane_t_ParamLimits

0xf479,	// (0x00040d43) main_mup_eq_pane_t

0x7989,	// (0x00039253) mup_equalizer_pane_cp5_ParamLimits

0x799f,	// (0x00039269) mup_equalizer_pane_cp6_ParamLimits

0x79b7,	// (0x00039281) mup_equalizer_pane_cp7_ParamLimits

0x52ac,	// (0x00036b76) main_gallery_pane

0xf0be,	// (0x00040988) smil2_volume_pane

0xf0d9,	// (0x000409a3) smil_status_volume_pane_g1_ParamLimits

0xf0c6,	// (0x00040990) smil_status_volume_pane_g2_ParamLimits

0x8402,	// (0x00039ccc) smil_status_volume_pane_g3_ParamLimits

0xf62f,	// (0x00040ef9) smil_status_volume_pane_g_ParamLimits

0x01fb,	// (0x00031ac5) bg_popup_window_pane_cp07_ParamLimits

0x0209,	// (0x00031ad3) blid_firmament_pane

0x8b25,	// (0x0003a3ef) aid_size_cell_gallery_ParamLimits

0x8b25,	// (0x0003a3ef) aid_size_cell_gallery

0x8b33,	// (0x0003a3fd) grid_gallery_pane_ParamLimits

0x8b33,	// (0x0003a3fd) grid_gallery_pane

0x8b43,	// (0x0003a40d) cell_gallery_pane_ParamLimits

0x8b43,	// (0x0003a40d) cell_gallery_pane

0x032c,	// (0x00031bf6) bg_cell_gallery_focus_pane_ParamLimits

0x032c,	// (0x00031bf6) bg_cell_gallery_focus_pane

0x033e,	// (0x00031c08) cell_gallery_pane_g1_ParamLimits

0x033e,	// (0x00031c08) cell_gallery_pane_g1

0x8b91,	// (0x0003a45b) cell_gallery_pane_g2_ParamLimits

0x8b91,	// (0x0003a45b) cell_gallery_pane_g2

0x8b9e,	// (0x0003a468) cell_gallery_pane_g3_ParamLimits

0x8b9e,	// (0x0003a468) cell_gallery_pane_g3

0x034a,	// (0x00031c14) cell_gallery_pane_g4_ParamLimits

0x034a,	// (0x00031c14) cell_gallery_pane_g4

0x0003,

0xf6dd,	// (0x00040fa7) cell_gallery_pane_g_ParamLimits

0xf6dd,	// (0x00040fa7) cell_gallery_pane_g

0x0356,	// (0x00031c20) bg_cell_gallery_focus_pane_g1

0x035e,	// (0x00031c28) bg_cell_gallery_focus_pane_g2

0x0366,	// (0x00031c30) bg_cell_gallery_focus_pane_g3

0x036e,	// (0x00031c38) bg_cell_gallery_focus_pane_g4

0x0376,	// (0x00031c40) bg_cell_gallery_focus_pane_g5

0x037e,	// (0x00031c48) bg_cell_gallery_focus_pane_g6

0x0386,	// (0x00031c50) bg_cell_gallery_focus_pane_g7

0x038e,	// (0x00031c58) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6e6,	// (0x00040fb0) bg_cell_gallery_focus_pane_g

0x0396,	// (0x00031c60) aid_firma_cardinal

0x03aa,	// (0x00031c74) blid_firmament_pane_t1

0x03c1,	// (0x00031c8b) blid_firmament_pane_t2

0x03d8,	// (0x00031ca2) blid_firmament_pane_t3

0x03ef,	// (0x00031cb9) blid_firmament_pane_t4

0x0003,

0xf6f7,	// (0x00040fc1) blid_firmament_pane_t

0x0406,	// (0x00031cd0) blid_sat_info_pane

0x0416,	// (0x00031ce0) blid_sat_info_pane_g1

0x0416,	// (0x00031ce0) blid_sat_info_pane_g2

0x0001,

0xf700,	// (0x00040fca) blid_sat_info_pane_g

0x0420,	// (0x00031cea) blid_sat_info_pane_t1

0x042e,	// (0x00031cf8) smil2_volume_content_pane

0x0437,	// (0x00031d01) smil2_volume_pane_g1

0x043f,	// (0x00031d09) smil2_volume_content_pane_g1

0x0448,	// (0x00031d12) smil2_volume_content_pane_g2

0x0451,	// (0x00031d1b) smil2_volume_content_pane_g3

0x045a,	// (0x00031d24) smil2_volume_content_pane_g4

0x0463,	// (0x00031d2d) smil2_volume_content_pane_g5

0x046c,	// (0x00031d36) smil2_volume_content_pane_g6

0x0475,	// (0x00031d3f) smil2_volume_content_pane_g7

0x047e,	// (0x00031d48) smil2_volume_content_pane_g8

0x0487,	// (0x00031d51) smil2_volume_content_pane_g9

0x0490,	// (0x00031d5a) smil2_volume_content_pane_g10

0x0009,

0xf705,	// (0x00040fcf) smil2_volume_content_pane_g

0x5d29,	// (0x000375f3) cale_week_day_heading_pane_t1_ParamLimits

0x5d42,	// (0x0003760c) cale_week_day_heading_pane_t2_ParamLimits

0x5d5b,	// (0x00037625) cale_week_day_heading_pane_t3_ParamLimits

0x5d74,	// (0x0003763e) cale_week_day_heading_pane_t4_ParamLimits

0x5d8d,	// (0x00037657) cale_week_day_heading_pane_t5_ParamLimits

0x5da6,	// (0x00037670) cale_week_day_heading_pane_t6_ParamLimits

0x5dbf,	// (0x00037689) cale_week_day_heading_pane_t7_ParamLimits

0xf1f1,	// (0x00040abb) cale_week_day_heading_pane_t_ParamLimits

0xd25a,	// (0x0003eb24) bg_cale_side_pane_ParamLimits

0x5dd8,	// (0x000376a2) cale_week_time_pane_t1_ParamLimits

0x5df0,	// (0x000376ba) cale_week_time_pane_t2_ParamLimits

0x5e08,	// (0x000376d2) cale_week_time_pane_t3_ParamLimits

0x5e20,	// (0x000376ea) cale_week_time_pane_t4_ParamLimits

0x5e38,	// (0x00037702) cale_week_time_pane_t5_ParamLimits

0x5e50,	// (0x0003771a) cale_week_time_pane_t6_ParamLimits

0x5e68,	// (0x00037732) cale_week_time_pane_t7_ParamLimits

0x5e88,	// (0x00037752) cale_week_time_pane_t8_ParamLimits

0xf200,	// (0x00040aca) cale_week_time_pane_t_ParamLimits

0x5ea8,	// (0x00037772) cell_cale_week_pane_g2_ParamLimits

0xd25a,	// (0x0003eb24) bg_cale_side_pane_cp01_ParamLimits

0x6ea7,	// (0x00038771) cale_month_week_pane_t1_ParamLimits

0x6ebe,	// (0x00038788) cale_month_week_pane_t2_ParamLimits

0x6ed5,	// (0x0003879f) cale_month_week_pane_t3_ParamLimits

0x6eec,	// (0x000387b6) cale_month_week_pane_t4_ParamLimits

0x6f03,	// (0x000387cd) cale_month_week_pane_t5_ParamLimits

0x6f1e,	// (0x000387e8) cale_month_week_pane_t6_ParamLimits

0xf2d9,	// (0x00040ba3) cale_month_week_pane_t_ParamLimits

0x7003,	// (0x000388cd) cell_cale_month_pane_g1_ParamLimits

0x52ac,	// (0x00036b76) main_cale_event_viewer_pane

0x52ac,	// (0x00036b76) listscroll_cale_event_viewer_pane

0x0499,	// (0x00031d63) list_cale_ev_pane

0x04a1,	// (0x00031d6b) scroll_pane_cp023

0x04ad,	// (0x00031d77) field_cale_ev_pane_ParamLimits

0x04ad,	// (0x00031d77) field_cale_ev_pane

0x04cb,	// (0x00031d95) field_cale_ev_content_pane_ParamLimits

0x04cb,	// (0x00031d95) field_cale_ev_content_pane

0x04d7,	// (0x00031da1) field_cale_ev_pane_g1_ParamLimits

0x04d7,	// (0x00031da1) field_cale_ev_pane_g1

0x04e3,	// (0x00031dad) field_cale_ev_pane_g2_ParamLimits

0x04e3,	// (0x00031dad) field_cale_ev_pane_g2

0x04fb,	// (0x00031dc5) field_cale_ev_pane_g3_ParamLimits

0x04fb,	// (0x00031dc5) field_cale_ev_pane_g3

0x0002,

0xf71a,	// (0x00040fe4) field_cale_ev_pane_g_ParamLimits

0xf71a,	// (0x00040fe4) field_cale_ev_pane_g

0x0513,	// (0x00031ddd) field_cale_ev_pane_t1_ParamLimits

0x0513,	// (0x00031ddd) field_cale_ev_pane_t1

0x052a,	// (0x00031df4) field_cale_ev_content_pane_t1_ParamLimits

0x052a,	// (0x00031df4) field_cale_ev_content_pane_t1

0xdd62,	// (0x0003f62c) bg_button_pane_cp01

0xd11a,	// (0x0003e9e4) listscroll_cale_week_pane_ParamLimits

0x5b05,	// (0x000373cf) popup_toolbar_window_cp01

0xd248,	// (0x0003eb12) listscroll_cale_week_pane_t1_ParamLimits

0xd11a,	// (0x0003e9e4) listscroll_cale_day_pane_ParamLimits

0x5b05,	// (0x000373cf) popup_toolbar_window_cp02

0xd248,	// (0x0003eb12) listscroll_cale_day_pane_t1_ParamLimits

0xd11a,	// (0x0003e9e4) main_cale_month_pane_ParamLimits

0x82e6,	// (0x00039bb0) popup_toolbar_window_cp03_ParamLimits

0x82e6,	// (0x00039bb0) popup_toolbar_window_cp03

0x7c5f,	// (0x00039529) main_image_pane_g2_ParamLimits

0x7c5f,	// (0x00039529) main_image_pane_g2

0x7c6b,	// (0x00039535) main_image_pane_g3_ParamLimits

0x7c6b,	// (0x00039535) main_image_pane_g3

0x0002,

0xf50b,	// (0x00040dd5) main_image_pane_g_ParamLimits

0xf50b,	// (0x00040dd5) main_image_pane_g

0xde7c,	// (0x0003f746) main_image_pane_t1_ParamLimits

0x7c77,	// (0x00039541) main_image_pane_t2_ParamLimits

0x7c77,	// (0x00039541) main_image_pane_t2

0x7c89,	// (0x00039553) main_image_pane_t3_ParamLimits

0x7c89,	// (0x00039553) main_image_pane_t3

0x7c9b,	// (0x00039565) main_image_pane_t4_ParamLimits

0x7c9b,	// (0x00039565) main_image_pane_t4

0x0003,

0xf512,	// (0x00040ddc) main_image_pane_t_ParamLimits

0xf512,	// (0x00040ddc) main_image_pane_t

0x7cad,	// (0x00039577) popup_image_details_window_cp01

0x7cb7,	// (0x00039581) popup_toobar_trans_pane_cp01_ParamLimits

0x7cb7,	// (0x00039581) popup_toobar_trans_pane_cp01

0x8263,	// (0x00039b2d) popup_image_details_window_ParamLimits

0x8263,	// (0x00039b2d) popup_image_details_window

0xf01f,	// (0x000408e9) popup_image_focus_window

0x8581,	// (0x00039e4b) camera2_autofocus_pane_ParamLimits

0x8581,	// (0x00039e4b) camera2_autofocus_pane

0x52ac,	// (0x00036b76) bg_popup_sub_pane_cp06

0x0548,	// (0x00031e12) popup_image_focus_window_g1

0x0550,	// (0x00031e1a) popup_image_focus_window_g2

0x0558,	// (0x00031e22) popup_image_focus_window_g3

0x0560,	// (0x00031e2a) popup_image_focus_window_g4

0x0003,

0xf721,	// (0x00040feb) popup_image_focus_window_g

0x0568,	// (0x00031e32) popup_image_focus_window_t1

0x0576,	// (0x00031e40) popup_image_focus_window_t2

0x0586,	// (0x00031e50) popup_image_focus_window_t3

0x0002,

0xf72a,	// (0x00040ff4) popup_image_focus_window_t

0x0594,	// (0x00031e5e) camera2_autofocus_pane_g1

0xe2c7,	// (0x0003fb91) bg_tb_trans_pane_cp01

0x05a2,	// (0x00031e6c) popup_image_details_window_g1

0x05b5,	// (0x00031e7f) popup_image_details_window_g2

0x0002,

0xf73c,	// (0x00041006) popup_image_details_window_g

0x05de,	// (0x00031ea8) popup_image_details_window_t1

0x05f0,	// (0x00031eba) popup_image_details_window_t2

0x0609,	// (0x00031ed3) popup_image_details_window_t3

0x061d,	// (0x00031ee7) popup_image_details_window_t4

0x0638,	// (0x00031f02) popup_image_details_window_t5

0x0004,

0xf743,	// (0x0004100d) popup_image_details_window_t

0xd106,	// (0x0003e9d0) bg_calc_paper_pane_ParamLimits

0x52ac,	// (0x00036b76) grid_highlight_pane_cp013

0x589d,	// (0x00037167) list_calc_pane_ParamLimits

0x58af,	// (0x00037179) scroll_pane_cp024

0xd11a,	// (0x0003e9e4) bg_calc_display_pane_ParamLimits

0x58b7,	// (0x00037181) calc_display_pane_t1_ParamLimits

0x58cc,	// (0x00037196) calc_display_pane_t2_ParamLimits

0x58e1,	// (0x000371ab) calc_display_pane_t3_ParamLimits

0xf173,	// (0x00040a3d) calc_display_pane_t_ParamLimits

0x59bd,	// (0x00037287) cell_calc_pane_g2

0x0001,

0xf190,	// (0x00040a5a) cell_calc_pane_g

0x59c6,	// (0x00037290) cell_calc_pane_t1

0xd179,	// (0x0003ea43) grid_highlight_pane_cp02_ParamLimits

0xd18f,	// (0x0003ea59) toolbar_button_pane_cp01_ParamLimits

0xd18f,	// (0x0003ea59) toolbar_button_pane_cp01

0xdec1,	// (0x0003f78b) temp_image_control_pane_ParamLimits

0xdec1,	// (0x0003f78b) temp_image_control_pane

0xe2c7,	// (0x0003fb91) main_mp3_pane

0x0652,	// (0x00031f1c) temp_image_control_pane_g1_ParamLimits

0x0652,	// (0x00031f1c) temp_image_control_pane_g1

0x0660,	// (0x00031f2a) temp_image_control_pane_g2_ParamLimits

0x0660,	// (0x00031f2a) temp_image_control_pane_g2

0x0672,	// (0x00031f3c) temp_image_control_pane_g3_ParamLimits

0x0672,	// (0x00031f3c) temp_image_control_pane_g3

0x8bdb,	// (0x0003a4a5) temp_image_control_pane_g4_ParamLimits

0x8bdb,	// (0x0003a4a5) temp_image_control_pane_g4

0x0003,

0xf74e,	// (0x00041018) temp_image_control_pane_g_ParamLimits

0xf74e,	// (0x00041018) temp_image_control_pane_g

0x0652,	// (0x00031f1c) main_mp3_pane_g1

0x8bec,	// (0x0003a4b6) main_mp3_pane_g2

0x0007,

0xf757,	// (0x00041021) main_mp3_pane_g

0x06b5,	// (0x00031f7f) main_mp3_pane_t1

0xd2bf,	// (0x0003eb89) main_camera_pane_g8_ParamLimits

0xd2bf,	// (0x0003eb89) main_camera_pane_g8

0x613e,	// (0x00037a08) main_video_pane_g7_ParamLimits

0x613e,	// (0x00037a08) main_video_pane_g7

0x86c9,	// (0x00039f93) main_camera2_pane_t7_ParamLimits

0x86c9,	// (0x00039f93) main_camera2_pane_t7

0xd405,	// (0x0003eccf) scroll_pane_cp025_ParamLimits

0xd405,	// (0x0003eccf) scroll_pane_cp025

0xd419,	// (0x0003ece3) scroll_pane_cp026_ParamLimits

0xd419,	// (0x0003ece3) scroll_pane_cp026

0xd428,	// (0x0003ecf2) wml_content_pane_ParamLimits

0x52ac,	// (0x00036b76) main_touch_calib_pane

0x8c90,	// (0x0003a55a) main_touch_calib_pane_g1

0x8c9c,	// (0x0003a566) main_touch_calib_pane_g2

0x8ca8,	// (0x0003a572) main_touch_calib_pane_g3

0x8cb4,	// (0x0003a57e) main_touch_calib_pane_g4

0x0003,

0xf775,	// (0x0004103f) main_touch_calib_pane_g

0x8cc0,	// (0x0003a58a) main_touch_calib_pane_t1

0x8cd7,	// (0x0003a5a1) main_touch_calib_pane_t2

0x0004,

0xf77e,	// (0x00041048) main_touch_calib_pane_t

0xdb3a,	// (0x0003f404) mup_progress_pane_cp02

0xdb59,	// (0x0003f423) navi_pane_g1

0xdbbb,	// (0x0003f485) navi_pane_mp_t3

0xe2c7,	// (0x0003fb91) main_mp3_pane_ParamLimits

0x8324,	// (0x00039bee) navi_pane_ParamLimits

0x0652,	// (0x00031f1c) main_mp3_pane_g1_ParamLimits

0x8bec,	// (0x0003a4b6) main_mp3_pane_g2_ParamLimits

0x8bf8,	// (0x0003a4c2) main_mp3_pane_g3_ParamLimits

0x8bf8,	// (0x0003a4c2) main_mp3_pane_g3

0x8c04,	// (0x0003a4ce) main_mp3_pane_g4_ParamLimits

0x8c04,	// (0x0003a4ce) main_mp3_pane_g4

0x0682,	// (0x00031f4c) main_mp3_pane_g5_ParamLimits

0x0682,	// (0x00031f4c) main_mp3_pane_g5

0x0690,	// (0x00031f5a) main_mp3_pane_g6_ParamLimits

0x0690,	// (0x00031f5a) main_mp3_pane_g6

0x069d,	// (0x00031f67) main_mp3_pane_g7_ParamLimits

0x069d,	// (0x00031f67) main_mp3_pane_g7

0x06a9,	// (0x00031f73) main_mp3_pane_g8_ParamLimits

0x06a9,	// (0x00031f73) main_mp3_pane_g8

0xf757,	// (0x00041021) main_mp3_pane_g_ParamLimits

0x8c10,	// (0x0003a4da) main_mp3_pane_t2

0x8c20,	// (0x0003a4ea) main_mp3_pane_t3

0x06c3,	// (0x00031f8d) main_mp3_pane_t4

0x06d1,	// (0x00031f9b) main_mp3_pane_t5

0x0005,

0xf768,	// (0x00041032) main_mp3_pane_t

0x06df,	// (0x00031fa9) mup_progress_pane_cp01

0x40fa,	// (0x000359c4) aid_zoom_text_secondary2

0x0499,	// (0x00031d63) list_cale_ev2_pane

0x04a1,	// (0x00031d6b) scroll_pane_cp023_ParamLimits

0x8d2c,	// (0x0003a5f6) field_cale_ev2_pane_ParamLimits

0x8d2c,	// (0x0003a5f6) field_cale_ev2_pane

0x43e9,	// (0x00035cb3) field_cale_ev2_pane_g1_ParamLimits

0x43e9,	// (0x00035cb3) field_cale_ev2_pane_g1

0x43f5,	// (0x00035cbf) field_cale_ev2_pane_g2_ParamLimits

0x43f5,	// (0x00035cbf) field_cale_ev2_pane_g2

0x440d,	// (0x00035cd7) field_cale_ev2_pane_g3_ParamLimits

0x440d,	// (0x00035cd7) field_cale_ev2_pane_g3

0x0003,

0xf789,	// (0x00041053) field_cale_ev2_pane_g_ParamLimits

0xf789,	// (0x00041053) field_cale_ev2_pane_g

0x4431,	// (0x00035cfb) field_cale_ev2_pane_t1_ParamLimits

0x4431,	// (0x00035cfb) field_cale_ev2_pane_t1

0x4448,	// (0x00035d12) field_cale_ev2_pane_t2_ParamLimits

0x4448,	// (0x00035d12) field_cale_ev2_pane_t2

0x0001,

0xf792,	// (0x0004105c) field_cale_ev2_pane_t_ParamLimits

0xf792,	// (0x0004105c) field_cale_ev2_pane_t

0x7b3f,	// (0x00039409) main_postcard_pane_g5_ParamLimits

0x7b3f,	// (0x00039409) main_postcard_pane_g5

0x7b4d,	// (0x00039417) main_postcard_pane_g6_ParamLimits

0x7b4d,	// (0x00039417) main_postcard_pane_g6

0x5f86,	// (0x00037850) camera2_autofocus_pane_cp_ParamLimits

0x5f86,	// (0x00037850) camera2_autofocus_pane_cp

0xe2c7,	// (0x0003fb91) main_mup3_pane

0x8d75,	// (0x0003a63f) main_mup3_pane_g1_ParamLimits

0x8d75,	// (0x0003a63f) main_mup3_pane_g1

0x8d96,	// (0x0003a660) main_mup3_pane_g2_ParamLimits

0x8d96,	// (0x0003a660) main_mup3_pane_g2

0x8e0e,	// (0x0003a6d8) main_mup3_pane_g3_ParamLimits

0x8e0e,	// (0x0003a6d8) main_mup3_pane_g3

0x8e4d,	// (0x0003a717) main_mup3_pane_g4_ParamLimits

0x8e4d,	// (0x0003a717) main_mup3_pane_g4

0x8e8c,	// (0x0003a756) main_mup3_pane_g5_ParamLimits

0x8e8c,	// (0x0003a756) main_mup3_pane_g5

0x8ecb,	// (0x0003a795) main_mup3_pane_g6_ParamLimits

0x8ecb,	// (0x0003a795) main_mup3_pane_g6

0x06f3,	// (0x00031fbd) main_mup3_pane_g7_ParamLimits

0x06f3,	// (0x00031fbd) main_mup3_pane_g7

0x0007,

0xf7a2,	// (0x0004106c) main_mup3_pane_g_ParamLimits

0xf7a2,	// (0x0004106c) main_mup3_pane_g

0x8f3d,	// (0x0003a807) main_mup3_pane_t1_ParamLimits

0x8f3d,	// (0x0003a807) main_mup3_pane_t1

0x8fa8,	// (0x0003a872) main_mup3_pane_t2_ParamLimits

0x8fa8,	// (0x0003a872) main_mup3_pane_t2

0x906d,	// (0x0003a937) main_mup3_pane_t4_ParamLimits

0x906d,	// (0x0003a937) main_mup3_pane_t4

0x90bb,	// (0x0003a985) main_mup3_pane_t5_ParamLimits

0x90bb,	// (0x0003a985) main_mup3_pane_t5

0x9163,	// (0x0003aa2d) main_mup3_pane_t6_ParamLimits

0x9163,	// (0x0003aa2d) main_mup3_pane_t6

0x0005,

0xf7b3,	// (0x0004107d) main_mup3_pane_t_ParamLimits

0xf7b3,	// (0x0004107d) main_mup3_pane_t

0x920b,	// (0x0003aad5) mup3_progress_pane_ParamLimits

0x920b,	// (0x0003aad5) mup3_progress_pane

0x9276,	// (0x0003ab40) popup_mup3_control_window_ParamLimits

0x9276,	// (0x0003ab40) popup_mup3_control_window

0x0701,	// (0x00031fcb) popup_mup3_text_window

0x928f,	// (0x0003ab59) mup3_progress_pane_t1

0x92a6,	// (0x0003ab70) mup3_progress_pane_t2

0x0709,	// (0x00031fd3) mup3_progress_pane_t3

0x0002,

0xf7c0,	// (0x0004108a) mup3_progress_pane_t

0x0720,	// (0x00031fea) mup_progress_pane_cp03

0x52ac,	// (0x00036b76) bg_tb_trans_pane_cp04

0x92bd,	// (0x0003ab87) mup3_volume_pane

0x92c5,	// (0x0003ab8f) popup_mup3_control_window_g1

0x92ce,	// (0x0003ab98) mup3_volume_pane_g1

0x92d7,	// (0x0003aba1) mup3_volume_pane_g2

0x92e0,	// (0x0003abaa) mup3_volume_pane_g3

0x0002,

0xf7c7,	// (0x00041091) mup3_volume_pane_g

0x52ac,	// (0x00036b76) bg_tb_trans_pane_cp03

0x0730,	// (0x00031ffa) popup_mup3_text_window_g1

0x0738,	// (0x00032002) popup_mup3_text_window_t1

0xd162,	// (0x0003ea2c) list_calc_item_pane_g1_ParamLimits

0x0125,	// (0x000319ef) mup_volume_pane_cp_g1

0x8cee,	// (0x0003a5b8) main_touch_calib_pane_t3

0x8d02,	// (0x0003a5cc) main_touch_calib_pane_t4

0x8d16,	// (0x0003a5e0) main_touch_calib_pane_t5

0x52b6,	// (0x00036b80) aid_cell_size_toolbar2

0x52be,	// (0x00036b88) aid_popup3_width_pane

0x40f2,	// (0x000359bc) aid_zoom_text_msg_primary

0x5f5d,	// (0x00037827) vorec_t7

0xd126,	// (0x0003e9f0) bg_calc_paper_pane_g1_ParamLimits

0xd132,	// (0x0003e9fc) bg_calc_paper_pane_g2_ParamLimits

0xd13e,	// (0x0003ea08) bg_calc_paper_pane_g3_ParamLimits

0xd14a,	// (0x0003ea14) bg_calc_paper_pane_g4_ParamLimits

0xd156,	// (0x0003ea20) bg_calc_paper_pane_g5_ParamLimits

0x5920,	// (0x000371ea) bg_calc_paper_pane_g6_ParamLimits

0x5931,	// (0x000371fb) bg_calc_paper_pane_g7_ParamLimits

0x5942,	// (0x0003720c) bg_calc_paper_pane_g8_ParamLimits

0xf17a,	// (0x00040a44) bg_calc_paper_pane_g_ParamLimits

0x5953,	// (0x0003721d) calc_bg_paper_pane_g9_ParamLimits

0x606d,	// (0x00037937) image_qvga_pane_ParamLimits

0x606d,	// (0x00037937) image_qvga_pane

0xd043,	// (0x0003e90d) bg_popup_sub_pane_cp04_ParamLimits

0xddf8,	// (0x0003f6c2) popup_mup_playback_window_g1_ParamLimits

0xde04,	// (0x0003f6ce) popup_mup_playback_window_t1_ParamLimits

0xde19,	// (0x0003f6e3) popup_mup_playback_window_t2_ParamLimits

0xf506,	// (0x00040dd0) popup_mup_playback_window_t_ParamLimits

0x87f8,	// (0x0003a0c2) main_mup2_pane_g3_ParamLimits

0x87f8,	// (0x0003a0c2) main_mup2_pane_g3

0x6325,	// (0x00037bef) popup_toolbar_window_cp04

0xe1fb,	// (0x0003fac5) popup_call2_audio_second_window_g3_ParamLimits

0xe1fb,	// (0x0003fac5) popup_call2_audio_second_window_g3

0xe61f,	// (0x0003fee9) popup_call2_audio_first_window_g4_ParamLimits

0xe61f,	// (0x0003fee9) popup_call2_audio_first_window_g4

0xec9e,	// (0x00040568) popup_call2_audio_in_window_g4_ParamLimits

0xec9e,	// (0x00040568) popup_call2_audio_in_window_g4

0x7c52,	// (0x0003951c) aid_area_sk_bg_cut_ParamLimits

0x7c52,	// (0x0003951c) aid_area_sk_bg_cut

0xde2e,	// (0x0003f6f8) aid_area_sk_bg_cut_2_ParamLimits

0xde2e,	// (0x0003f6f8) aid_area_sk_bg_cut_2

0x8b81,	// (0x0003a44b) aid_placing_details_win

0x8b89,	// (0x0003a453) aid_placing_details_win_2

0x0594,	// (0x00031e5e) camera2_autofocus_pane_g1_ParamLimits

0x54f7,	// (0x00036dc1) popup_fixed_preview_cale_window_ParamLimits

0x54f7,	// (0x00036dc1) popup_fixed_preview_cale_window

0xdc0a,	// (0x0003f4d4) navi_slider_pane_g3

0xdc13,	// (0x0003f4dd) navi_slider_pane_g4

0xdc1c,	// (0x0003f4e6) navi_slider_pane_g5

0xdc0a,	// (0x0003f4d4) navi_slider_pane_g6

0x758e,	// (0x00038e58) navi_slider_pane_g7

0xdd2f,	// (0x0003f5f9) mup_scale_pane_g3

0xdd38,	// (0x0003f602) mup_scale_pane_g4

0xdd41,	// (0x0003f60b) mup_scale_pane_g5

0x79cf,	// (0x00039299) mup_scale_pane_g6

0x79d8,	// (0x000392a2) mup_scale_pane_g7

0xdc0a,	// (0x0003f4d4) cams2_slider_pane_g3

0x01da,	// (0x00031aa4) cams2_slider_pane_g4

0x8ad9,	// (0x0003a3a3) cams2_slider_pane_g5

0xdc0a,	// (0x0003f4d4) cams2_slider_pane_g6

0x8ae1,	// (0x0003a3ab) cams2_slider_pane_g7

0x0416,	// (0x00031ce0) camera2_autofocus_pane_cp_g1

0x0746,	// (0x00032010) bg_popup_preview_window_pane_cp02_ParamLimits

0x0746,	// (0x00032010) bg_popup_preview_window_pane_cp02

0x0752,	// (0x0003201c) list_fp_cale_pane_ParamLimits

0x0752,	// (0x0003201c) list_fp_cale_pane

0x075e,	// (0x00032028) popup_fixed_preview_cale_window_t1_ParamLimits

0x075e,	// (0x00032028) popup_fixed_preview_cale_window_t1

0x92e9,	// (0x0003abb3) popup_fixed_preview_cale_window_t2_ParamLimits

0x92e9,	// (0x0003abb3) popup_fixed_preview_cale_window_t2

0x92fe,	// (0x0003abc8) popup_fixed_preview_cale_window_t3_ParamLimits

0x92fe,	// (0x0003abc8) popup_fixed_preview_cale_window_t3

0x0002,

0xf7ce,	// (0x00041098) popup_fixed_preview_cale_window_t_ParamLimits

0xf7ce,	// (0x00041098) popup_fixed_preview_cale_window_t

0x9313,	// (0x0003abdd) list_single_fp_cale_pane_ParamLimits

0x9313,	// (0x0003abdd) list_single_fp_cale_pane

0x077c,	// (0x00032046) list_single_fp_cale_pane_g1_ParamLimits

0x077c,	// (0x00032046) list_single_fp_cale_pane_g1

0x0788,	// (0x00032052) list_single_fp_cale_pane_g2_ParamLimits

0x0788,	// (0x00032052) list_single_fp_cale_pane_g2

0x0002,

0xf7d5,	// (0x0004109f) list_single_fp_cale_pane_g_ParamLimits

0xf7d5,	// (0x0004109f) list_single_fp_cale_pane_g

0x07a1,	// (0x0003206b) list_single_fp_cale_pane_t1_ParamLimits

0x07a1,	// (0x0003206b) list_single_fp_cale_pane_t1

0x07b3,	// (0x0003207d) list_single_fp_cale_pane_t2_ParamLimits

0x07b3,	// (0x0003207d) list_single_fp_cale_pane_t2

0x0001,

0xf7dc,	// (0x000410a6) list_single_fp_cale_pane_t_ParamLimits

0xf7dc,	// (0x000410a6) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x52ac,	// (0x00036b76) main_dialer_pane

0x9325,	// (0x0003abef) aid_cell_size_keypad

0x932f,	// (0x0003abf9) dialer_ne_pane

0x9339,	// (0x0003ac03) grid_dialer_command_1_pane

0x9341,	// (0x0003ac0b) grid_dialer_command_2_pane

0x9349,	// (0x0003ac13) grid_dialer_keypad_pane

0x935b,	// (0x0003ac25) bg_popup_call_pane_cp06_ParamLimits

0x935b,	// (0x0003ac25) bg_popup_call_pane_cp06

0x9367,	// (0x0003ac31) dialer_ne_clear_pane_ParamLimits

0x9367,	// (0x0003ac31) dialer_ne_clear_pane

0x07e6,	// (0x000320b0) dialer_ne_pane_g1

0x07ee,	// (0x000320b8) dialer_ne_pane_t1_ParamLimits

0x07ee,	// (0x000320b8) dialer_ne_pane_t1

0x9373,	// (0x0003ac3d) dialer_ne_pane_t2_ParamLimits

0x9373,	// (0x0003ac3d) dialer_ne_pane_t2

0x9390,	// (0x0003ac5a) dialer_ne_pane_t3_ParamLimits

0x9390,	// (0x0003ac5a) dialer_ne_pane_t3

0x0002,

0xf7e1,	// (0x000410ab) dialer_ne_pane_t_ParamLimits

0xf7e1,	// (0x000410ab) dialer_ne_pane_t

0x93b4,	// (0x0003ac7e) dialer_ne_pane_t3_copy1_ParamLimits

0x93b4,	// (0x0003ac7e) dialer_ne_pane_t3_copy1

0x93d8,	// (0x0003aca2) cell_dialer_keypad_pane_ParamLimits

0x93d8,	// (0x0003aca2) cell_dialer_keypad_pane

0x93ef,	// (0x0003acb9) cell_dialer_command_1_pane_ParamLimits

0x93ef,	// (0x0003acb9) cell_dialer_command_1_pane

0x9405,	// (0x0003accf) cell_dialer_command_2_pane_ParamLimits

0x9405,	// (0x0003accf) cell_dialer_command_2_pane

0x0800,	// (0x000320ca) bg_button_pane_cp02_ParamLimits

0x0800,	// (0x000320ca) bg_button_pane_cp02

0x9414,	// (0x0003acde) cell_dialer_keypad_pane_g1_ParamLimits

0x9414,	// (0x0003acde) cell_dialer_keypad_pane_g1

0x0800,	// (0x000320ca) bg_button_pane_cp03_ParamLimits

0x0800,	// (0x000320ca) bg_button_pane_cp03

0x9429,	// (0x0003acf3) cell_dialer_command_1_pane_g1_ParamLimits

0x9429,	// (0x0003acf3) cell_dialer_command_1_pane_g1

0x080c,	// (0x000320d6) bg_button_pane_cp04

0x943d,	// (0x0003ad07) cell_dialer_command_2_pane_g1

0xdbf9,	// (0x0003f4c3) bg_button_pane_cp06

0x0814,	// (0x000320de) dialer_ne_clear_pane_g1

0x74d1,	// (0x00038d9b) navi_pane_g2

0x74ff,	// (0x00038dc9) navi_pane_g3

0x0002,

0xf409,	// (0x00040cd3) navi_pane_g

0x752a,	// (0x00038df4) navi_pane_mv_g2

0x7551,	// (0x00038e1b) navi_pane_mv_g5

0x7559,	// (0x00038e23) navi_pane_mv_t1

0xd11a,	// (0x0003e9e4) main_clock2_pane

0x946c,	// (0x0003ad36) main_clock2_list_pane_ParamLimits

0x946c,	// (0x0003ad36) main_clock2_list_pane

0x9494,	// (0x0003ad5e) main_clock2_pane_t1_ParamLimits

0x9494,	// (0x0003ad5e) main_clock2_pane_t1

0x94c2,	// (0x0003ad8c) main_clock2_pane_t2_ParamLimits

0x94c2,	// (0x0003ad8c) main_clock2_pane_t2

0x0004,

0xf7e8,	// (0x000410b2) main_clock2_pane_t_ParamLimits

0xf7e8,	// (0x000410b2) main_clock2_pane_t

0x9529,	// (0x0003adf3) popup_clock_analogue_window_cp03_ParamLimits

0x9529,	// (0x0003adf3) popup_clock_analogue_window_cp03

0x9547,	// (0x0003ae11) popup_clock_digital_window_cp02_ParamLimits

0x9547,	// (0x0003ae11) popup_clock_digital_window_cp02

0x95b4,	// (0x0003ae7e) main_clock2_list_single_pane_ParamLimits

0x95b4,	// (0x0003ae7e) main_clock2_list_single_pane

0xdbf9,	// (0x0003f4c3) list_highlight_pane_cp05

0x081c,	// (0x000320e6) main_clock2_list_single_pane_t1

0x6325,	// (0x00037bef) popup_toolbar_window_cp04_ParamLimits

0x8bab,	// (0x0003a475) camera2_autofocus_pane_g2_ParamLimits

0x8bab,	// (0x0003a475) camera2_autofocus_pane_g2

0x8bb7,	// (0x0003a481) camera2_autofocus_pane_g3_ParamLimits

0x8bb7,	// (0x0003a481) camera2_autofocus_pane_g3

0x8bc3,	// (0x0003a48d) camera2_autofocus_pane_g4_ParamLimits

0x8bc3,	// (0x0003a48d) camera2_autofocus_pane_g4

0x8bcf,	// (0x0003a499) camera2_autofocus_pane_g5_ParamLimits

0x8bcf,	// (0x0003a499) camera2_autofocus_pane_g5

0x0004,

0xf731,	// (0x00040ffb) camera2_autofocus_pane_g_ParamLimits

0xf731,	// (0x00040ffb) camera2_autofocus_pane_g

0x8d55,	// (0x0003a61f) camera2_autofocus_pane_cp_g2

0x8d5d,	// (0x0003a627) camera2_autofocus_pane_cp_g3

0x8d65,	// (0x0003a62f) camera2_autofocus_pane_cp_g4

0x8d6d,	// (0x0003a637) camera2_autofocus_pane_cp_g5

0x0004,

0xf797,	// (0x00041061) camera2_autofocus_pane_cp_g

0x9353,	// (0x0003ac1d) popup_dialer_spcha_window

0x52ac,	// (0x00036b76) bg_popup_sub_pane_cp07

0x082a,	// (0x000320f4) list_spcha_pane

0x0832,	// (0x000320fc) list_single_spcha_pane_ParamLimits

0x0832,	// (0x000320fc) list_single_spcha_pane

0x52ac,	// (0x00036b76) list_highlight_pane_cp06

0x0843,	// (0x0003210d) list_single_spcha_pane_t1

0xea48,	// (0x00040312) popup_call2_audio_out_window_g4_ParamLimits

0xea48,	// (0x00040312) popup_call2_audio_out_window_g4

0x52ac,	// (0x00036b76) main_imed2_pane

0xf027,	// (0x000408f1) popup_imed_adjust2_window

0x8271,	// (0x00039b3b) popup_imed_trans_window_ParamLimits

0x8271,	// (0x00039b3b) popup_imed_trans_window

0x0254,	// (0x00031b1e) popup_blid_sat_info2_window_t1

0x0262,	// (0x00031b2c) popup_blid_sat_info2_window_t2

0x000a,

0xf6c6,	// (0x00040f90) popup_blid_sat_info2_window_t

0x965e,	// (0x0003af28) aid_size_cell_colour_35

0x9678,	// (0x0003af42) aid_size_cell_colour_112

0x968f,	// (0x0003af59) aid_size_cell_effect

0xe2c7,	// (0x0003fb91) bg_tb_trans_pane_cp02

0xe2d5,	// (0x0003fb9f) heading_imed_pane

0x96a9,	// (0x0003af73) listscroll_imed_pane

0x0851,	// (0x0003211b) heading_imed_pane_g1

0x0859,	// (0x00032123) heading_imed_pane_t1

0x0867,	// (0x00032131) grid_imed_colour_35_pane_ParamLimits

0x0867,	// (0x00032131) grid_imed_colour_35_pane

0x96b5,	// (0x0003af7f) grid_imed_effect_pane

0x087e,	// (0x00032148) list_imed_aspect_pane

0x96c5,	// (0x0003af8f) scroll_pane_cp027_ParamLimits

0x96c5,	// (0x0003af8f) scroll_pane_cp027

0x96d1,	// (0x0003af9b) cell_imed_effect_pane_ParamLimits

0x96d1,	// (0x0003af9b) cell_imed_effect_pane

0x0886,	// (0x00032150) cell_imed_colour_pane_ParamLimits

0x0886,	// (0x00032150) cell_imed_colour_pane

0x08c8,	// (0x00032192) cell_imed_colour_pane_g1_ParamLimits

0x08c8,	// (0x00032192) cell_imed_colour_pane_g1

0x08d9,	// (0x000321a3) hgihlgiht_grid_pane_cp016_ParamLimits

0x08d9,	// (0x000321a3) hgihlgiht_grid_pane_cp016

0x96e9,	// (0x0003afb3) cell_imed_effect_pane_g1

0x96f1,	// (0x0003afbb) grid_highlight_pane_cp017

0x08ea,	// (0x000321b4) list_imed_single_pane_ParamLimits

0x08ea,	// (0x000321b4) list_imed_single_pane

0x52ac,	// (0x00036b76) list_highlight_pane_cp07

0x08ff,	// (0x000321c9) list_imed_aspect_pane_comp1_t1

0xefff,	// (0x000408c9) bg_tb_trans_pane_cp05

0x0921,	// (0x000321eb) popup_imed_adjust2_window_g1

0x0948,	// (0x00032212) popup_imed_adjust2_window_t1

0x0960,	// (0x0003222a) slider_imed_adjust_pane

0x0974,	// (0x0003223e) slider_imed_adjust_pane_g1

0x0984,	// (0x0003224e) slider_imed_adjust_pane_g2

0x0994,	// (0x0003225e) slider_imed_adjust_pane_g3

0x09a5,	// (0x0003226f) slider_imed_adjust_pane_g4

0x0003,

0xf805,	// (0x000410cf) slider_imed_adjust_pane_g

0x96fa,	// (0x0003afc4) aid_size_cell_clipart2

0x9706,	// (0x0003afd0) grid_imed_clipart_pane

0x09b6,	// (0x00032280) scroll_pane_cp031

0x9710,	// (0x0003afda) cell_imed_clipart_pane_ParamLimits

0x9710,	// (0x0003afda) cell_imed_clipart_pane

0x9732,	// (0x0003affc) cell_imed_clipart_pane_g1

0x52ac,	// (0x00036b76) grid_highlight_pane_cp014

0x9478,	// (0x0003ad42) main_clock2_pane_g1_ParamLimits

0x9478,	// (0x0003ad42) main_clock2_pane_g1

0x955f,	// (0x0003ae29) aid_call2_pane_cp10

0x9571,	// (0x0003ae3b) aid_call_pane_cp10

0xdb2e,	// (0x0003f3f8) popup_clock_analogue_window_cp10_g1

0xdb2e,	// (0x0003f3f8) popup_clock_analogue_window_cp10_g2

0x9583,	// (0x0003ae4d) popup_clock_analogue_window_cp10_g3

0x9583,	// (0x0003ae4d) popup_clock_analogue_window_cp10_g4

0xdb2e,	// (0x0003f3f8) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7f3,	// (0x000410bd) popup_clock_analogue_window_cp10_g

0x9595,	// (0x0003ae5f) popup_clock_analogue_window_cp10_t1

0x95c6,	// (0x0003ae90) clock_digital_number_pane_cp10_ParamLimits

0x95c6,	// (0x0003ae90) clock_digital_number_pane_cp10

0x95de,	// (0x0003aea8) clock_digital_number_pane_cp11_ParamLimits

0x95de,	// (0x0003aea8) clock_digital_number_pane_cp11

0x95f6,	// (0x0003aec0) clock_digital_number_pane_cp12_ParamLimits

0x95f6,	// (0x0003aec0) clock_digital_number_pane_cp12

0x960e,	// (0x0003aed8) clock_digital_number_pane_cp13_ParamLimits

0x960e,	// (0x0003aed8) clock_digital_number_pane_cp13

0x9626,	// (0x0003aef0) clock_digital_separator_pane_cp10_ParamLimits

0x9626,	// (0x0003aef0) clock_digital_separator_pane_cp10

0x963e,	// (0x0003af08) popup_clock_digital_window_cp02_t1_ParamLimits

0x963e,	// (0x0003af08) popup_clock_digital_window_cp02_t1

0xd03b,	// (0x0003e905) clock_digital_number_pane_cp10_g1

0xd03b,	// (0x0003e905) clock_digital_number_pane_cp10_g2

0x0001,

0xf80e,	// (0x000410d8) clock_digital_number_pane_cp10_g

0xd03b,	// (0x0003e905) clock_digital_separator_pane_cp10_g1

0xd03b,	// (0x0003e905) clock_digital_separator_pane_g2_cp10

0xdbc9,	// (0x0003f493) navi_pane_vded_g4

0xdbd2,	// (0x0003f49c) navi_pane_vded_g5

0xdbdb,	// (0x0003f4a5) navi_pane_vded_t1

0x52ac,	// (0x00036b76) main_vded_pane

0x973b,	// (0x0003b005) main_vded_pane_g1

0x9747,	// (0x0003b011) main_vded_pane_g2

0x9751,	// (0x0003b01b) main_vded_pane_g3

0x0002,

0xf813,	// (0x000410dd) main_vded_pane_g

0x975b,	// (0x0003b025) main_vded_pane_t1

0x9769,	// (0x0003b033) main_vded_pane_t2

0x0001,

0xf81a,	// (0x000410e4) main_vded_pane_t

0x9777,	// (0x0003b041) vded_slider_pane

0x9781,	// (0x0003b04b) vded_video_pane

0x09be,	// (0x00032288) vded_video_pane_g1

0x978b,	// (0x0003b055) vded_video_pane_g2

0x0416,	// (0x00031ce0) vded_video_pane_g3

0x0002,

0xf81f,	// (0x000410e9) vded_video_pane_g

0x09c8,	// (0x00032292) vded_slider_pane_g1

0x0125,	// (0x000319ef) vded_slider_pane_g2

0x09d1,	// (0x0003229b) vded_slider_pane_g3

0x09da,	// (0x000322a4) vded_slider_pane_g4

0x09e3,	// (0x000322ad) vded_slider_pane_g5

0x0004,

0xf826,	// (0x000410f0) vded_slider_pane_g

0x9268,	// (0x0003ab32) mup3_rocker_pane_ParamLimits

0x9268,	// (0x0003ab32) mup3_rocker_pane

0x9794,	// (0x0003b05e) mup3_control_keys_pane_g1

0x979c,	// (0x0003b066) mup3_control_keys_pane_g2

0x97a4,	// (0x0003b06e) mup3_control_keys_pane_g3

0x97ac,	// (0x0003b076) mup3_control_keys_pane_g4

0x0003,

0xf831,	// (0x000410fb) mup3_control_keys_pane_g

0x5515,	// (0x00036ddf) popup_toolbar2_fixed_window_cp01_ParamLimits

0x5515,	// (0x00036ddf) popup_toolbar2_fixed_window_cp01

0x9282,	// (0x0003ab4c) popup_toolbar2_fixed_window_cp02_ParamLimits

0x9282,	// (0x0003ab4c) popup_toolbar2_fixed_window_cp02

0xe387,	// (0x0003fc51) popup_call2_audio_second_window_t4_ParamLimits

0xe387,	// (0x0003fc51) popup_call2_audio_second_window_t4

0xe8b5,	// (0x0004017f) popup_call2_audio_first_window_t6_ParamLimits

0xe8b5,	// (0x0004017f) popup_call2_audio_first_window_t6

0xeb4b,	// (0x00040415) popup_call2_audio_out_window_t6_ParamLimits

0xeb4b,	// (0x00040415) popup_call2_audio_out_window_t6

0x52ac,	// (0x00036b76) main_vitu_pane

0x97bc,	// (0x0003b086) aid_size_cell_itu_ParamLimits

0x97bc,	// (0x0003b086) aid_size_cell_itu

0x553d,	// (0x00036e07) bg_popup_window_pane_cp08_ParamLimits

0x553d,	// (0x00036e07) bg_popup_window_pane_cp08

0x97ca,	// (0x0003b094) field_vitu_entry_pane_ParamLimits

0x97ca,	// (0x0003b094) field_vitu_entry_pane

0x97d9,	// (0x0003b0a3) grid_vitu_function_pane_ParamLimits

0x97d9,	// (0x0003b0a3) grid_vitu_function_pane

0x97e9,	// (0x0003b0b3) grid_vitu_itu_pane_ParamLimits

0x97e9,	// (0x0003b0b3) grid_vitu_itu_pane

0x97f9,	// (0x0003b0c3) cell_vitu_itu_pane_ParamLimits

0x97f9,	// (0x0003b0c3) cell_vitu_itu_pane

0x980e,	// (0x0003b0d8) cell_vitu_function_pane_ParamLimits

0x980e,	// (0x0003b0d8) cell_vitu_function_pane

0xe2c7,	// (0x0003fb91) bg_popup_sub_pane_cp08_ParamLimits

0xe2c7,	// (0x0003fb91) bg_popup_sub_pane_cp08

0x9820,	// (0x0003b0ea) field_vitu_entry_pane_t1_ParamLimits

0x9820,	// (0x0003b0ea) field_vitu_entry_pane_t1

0x0a04,	// (0x000322ce) field_vitu_entry_pane_t2_ParamLimits

0x0a04,	// (0x000322ce) field_vitu_entry_pane_t2

0x0001,

0xf83f,	// (0x00041109) field_vitu_entry_pane_t_ParamLimits

0xf83f,	// (0x00041109) field_vitu_entry_pane_t

0x0a21,	// (0x000322eb) bg_button_pane_cp05_ParamLimits

0x0a21,	// (0x000322eb) bg_button_pane_cp05

0x983b,	// (0x0003b105) cell_vitu_itu_pane_g1

0x9853,	// (0x0003b11d) cell_vitu_itu_pane_t1_ParamLimits

0x9853,	// (0x0003b11d) cell_vitu_itu_pane_t1

0x9865,	// (0x0003b12f) cell_vitu_itu_pane_t2_ParamLimits

0x9865,	// (0x0003b12f) cell_vitu_itu_pane_t2

0x0002,

0xf844,	// (0x0004110e) cell_vitu_itu_pane_t_ParamLimits

0xf844,	// (0x0004110e) cell_vitu_itu_pane_t

0x0a2f,	// (0x000322f9) bg_button_pane_cp07

0x989a,	// (0x0003b164) cell_vitu_function_pane_g1

0x57c8,	// (0x00037092) main_calc_pane_g1

0x52f2,	// (0x00036bbc) aid_visual_content_pane

0x52ac,	// (0x00036b76) main_vradio_pane

0x98a3,	// (0x0003b16d) main_vradio_pane_g1_ParamLimits

0x98a3,	// (0x0003b16d) main_vradio_pane_g1

0x0a39,	// (0x00032303) main_vradio_pane_g2_ParamLimits

0x0a39,	// (0x00032303) main_vradio_pane_g2

0x0001,

0xf84b,	// (0x00041115) main_vradio_pane_g_ParamLimits

0xf84b,	// (0x00041115) main_vradio_pane_g

0x98b3,	// (0x0003b17d) main_vradio_pane_t1_ParamLimits

0x98b3,	// (0x0003b17d) main_vradio_pane_t1

0x98c5,	// (0x0003b18f) main_vradio_pane_t2_ParamLimits

0x98c5,	// (0x0003b18f) main_vradio_pane_t2

0x0a46,	// (0x00032310) main_vradio_pane_t3_ParamLimits

0x0a46,	// (0x00032310) main_vradio_pane_t3

0x0002,

0xf850,	// (0x0004111a) main_vradio_pane_t_ParamLimits

0xf850,	// (0x0004111a) main_vradio_pane_t

0x98d7,	// (0x0003b1a1) vradio_rocker_control_pane_ParamLimits

0x98d7,	// (0x0003b1a1) vradio_rocker_control_pane

0x98e3,	// (0x0003b1ad) vradio_station_info_pane_ParamLimits

0x98e3,	// (0x0003b1ad) vradio_station_info_pane

0x0a5a,	// (0x00032324) vradio_frequency_info_pane_ParamLimits

0x0a5a,	// (0x00032324) vradio_frequency_info_pane

0x0416,	// (0x00031ce0) vradio_station_info_pane_g1

0x0a69,	// (0x00032333) vradio_station_info_pane_t1_ParamLimits

0x0a69,	// (0x00032333) vradio_station_info_pane_t1

0x0a8b,	// (0x00032355) vradio_station_info_pane_t2_ParamLimits

0x0a8b,	// (0x00032355) vradio_station_info_pane_t2

0x0001,

0xf857,	// (0x00041121) vradio_station_info_pane_t_ParamLimits

0xf857,	// (0x00041121) vradio_station_info_pane_t

0x0a9d,	// (0x00032367) vradio_tuning_pane

0x0aa5,	// (0x0003236f) vradio_rocker_control_pane_g1

0x0aad,	// (0x00032377) vradio_rocker_control_pane_g2

0x0ab5,	// (0x0003237f) vradio_rocker_control_pane_g3

0x0abd,	// (0x00032387) vradio_rocker_control_pane_g4

0x0ac5,	// (0x0003238f) vradio_rocker_control_pane_g5

0x0004,

0xf85c,	// (0x00041126) vradio_rocker_control_pane_g

0x98f2,	// (0x0003b1bc) vradio_frequency_info_pane_g1

0x0acd,	// (0x00032397) vradio_frequency_info_pane_t1_ParamLimits

0x0acd,	// (0x00032397) vradio_frequency_info_pane_t1

0x98fc,	// (0x0003b1c6) vradio_tuning_pane_g1

0x9905,	// (0x0003b1cf) vradio_tuning_pane_t1

0x533b,	// (0x00036c05) area_side_right_pane_ParamLimits

0x533b,	// (0x00036c05) area_side_right_pane

0xefc6,	// (0x00040890) status_small_pane_g1

0xefce,	// (0x00040898) status_small_pane_g2

0xefd7,	// (0x000408a1) status_small_pane_g3

0xefe0,	// (0x000408aa) status_small_pane_g4

0x0003,

0xf61c,	// (0x00040ee6) status_small_pane_g

0xefe9,	// (0x000408b3) status_small_pane_t1

0x52ac,	// (0x00036b76) main_video3_pane

0x0ae1,	// (0x000323ab) cams_zoom_vslider_pane

0x0ae9,	// (0x000323b3) image3_wide_pane_ParamLimits

0x0ae9,	// (0x000323b3) image3_wide_pane

0x0b03,	// (0x000323cd) image3_wide_small_pane

0x0b0f,	// (0x000323d9) main_video3_pane_g1_ParamLimits

0x0b0f,	// (0x000323d9) main_video3_pane_g1

0x0b2b,	// (0x000323f5) main_video3_pane_g2_ParamLimits

0x0b2b,	// (0x000323f5) main_video3_pane_g2

0x0001,

0xf867,	// (0x00041131) main_video3_pane_g_ParamLimits

0xf867,	// (0x00041131) main_video3_pane_g

0x0b47,	// (0x00032411) main_video3_pane_t1_ParamLimits

0x0b47,	// (0x00032411) main_video3_pane_t1

0x0b72,	// (0x0003243c) main_video3_pane_t2_ParamLimits

0x0b72,	// (0x0003243c) main_video3_pane_t2

0x0b9d,	// (0x00032467) main_video3_pane_t3_ParamLimits

0x0b9d,	// (0x00032467) main_video3_pane_t3

0x0002,

0xf86c,	// (0x00041136) main_video3_pane_t_ParamLimits

0xf86c,	// (0x00041136) main_video3_pane_t

0x0bca,	// (0x00032494) cams_zoom_vslider_pane_g1

0x0bd3,	// (0x0003249d) cams_zoom_vslider_pane_g2

0x0001,

0xf873,	// (0x0004113d) cams_zoom_vslider_pane_g

0x0bdb,	// (0x000324a5) small_slider_vertical_pane

0x0416,	// (0x00031ce0) small_slider_vertical_pane_g1

0x0416,	// (0x00031ce0) small_slider_vertical_pane_g2

0x0be3,	// (0x000324ad) small_slider_vertical_pane_g3

0x0002,

0xf878,	// (0x00041142) small_slider_vertical_pane_g

0x52ac,	// (0x00036b76) main_hwr_training_pane

0x0bec,	// (0x000324b6) hwr_training_instruct_pane_ParamLimits

0x0bec,	// (0x000324b6) hwr_training_instruct_pane

0x9914,	// (0x0003b1de) hwr_training_navi_pane_ParamLimits

0x9914,	// (0x0003b1de) hwr_training_navi_pane

0x992e,	// (0x0003b1f8) hwr_training_write_pane_ParamLimits

0x992e,	// (0x0003b1f8) hwr_training_write_pane

0x52ac,	// (0x00036b76) bg_frame_shadow_pane

0x0c23,	// (0x000324ed) hwr_training_write_pane_g1

0x0c2b,	// (0x000324f5) hwr_training_write_pane_g2

0x0c33,	// (0x000324fd) hwr_training_write_pane_g3

0x0c3b,	// (0x00032505) hwr_training_write_pane_g4

0x0c43,	// (0x0003250d) hwr_training_write_pane_g5

0x0c4b,	// (0x00032515) hwr_training_write_pane_g6

0x0c53,	// (0x0003251d) hwr_training_write_pane_g7

0x0006,

0xf87f,	// (0x00041149) hwr_training_write_pane_g

0x9966,	// (0x0003b230) hwr_training_navi_pane_g1_ParamLimits

0x9966,	// (0x0003b230) hwr_training_navi_pane_g1

0x9978,	// (0x0003b242) hwr_training_navi_pane_g2_ParamLimits

0x9978,	// (0x0003b242) hwr_training_navi_pane_g2

0x998a,	// (0x0003b254) hwr_training_navi_pane_g3_ParamLimits

0x998a,	// (0x0003b254) hwr_training_navi_pane_g3

0x999a,	// (0x0003b264) hwr_training_navi_pane_g4_ParamLimits

0x999a,	// (0x0003b264) hwr_training_navi_pane_g4

0x0004,

0xf88e,	// (0x00041158) hwr_training_navi_pane_g_ParamLimits

0xf88e,	// (0x00041158) hwr_training_navi_pane_g

0x99b4,	// (0x0003b27e) hwr_training_navi_pane_t1

0x99c2,	// (0x0003b28c) list_single_hwr_training_instruct_pane_ParamLimits

0x99c2,	// (0x0003b28c) list_single_hwr_training_instruct_pane

0x0caa,	// (0x00032574) list_single_hwr_training_instruct_pane_t1

0x0356,	// (0x00031c20) bg_frame_shadow_pane_g1

0x0cb9,	// (0x00032583) bg_frame_shadow_pane_g2

0x0cc1,	// (0x0003258b) bg_frame_shadow_pane_g3

0x0cc9,	// (0x00032593) bg_frame_shadow_pane_g4

0x0cd1,	// (0x0003259b) bg_frame_shadow_pane_g5

0x0cd9,	// (0x000325a3) bg_frame_shadow_pane_g6

0x0ce1,	// (0x000325ab) bg_frame_shadow_pane_g7

0xd1d3,	// (0x0003ea9d) bg_frame_shadow_pane_g8

0x0007,

0xf899,	// (0x00041163) bg_frame_shadow_pane_g

0x52ac,	// (0x00036b76) main_video_tele_dialer_pane

0x99e7,	// (0x0003b2b1) aid_size_cell_video_keypad_ParamLimits

0x99e7,	// (0x0003b2b1) aid_size_cell_video_keypad

0x99f7,	// (0x0003b2c1) grid_video_dialer_keypad_pane_ParamLimits

0x99f7,	// (0x0003b2c1) grid_video_dialer_keypad_pane

0x9a29,	// (0x0003b2f3) video_down_pane_cp_ParamLimits

0x9a29,	// (0x0003b2f3) video_down_pane_cp

0x9a35,	// (0x0003b2ff) cell_video_dialer_keypad_pane_ParamLimits

0x9a35,	// (0x0003b2ff) cell_video_dialer_keypad_pane

0x0d05,	// (0x000325cf) bg_button_pane_cp08_ParamLimits

0x0d05,	// (0x000325cf) bg_button_pane_cp08

0x9a4a,	// (0x0003b314) cell_video_dialer_keypad_pane_g1_ParamLimits

0x9a4a,	// (0x0003b314) cell_video_dialer_keypad_pane_g1

0x925c,	// (0x0003ab26) mup3_rocker2_pane_ParamLimits

0x925c,	// (0x0003ab26) mup3_rocker2_pane

0x0416,	// (0x00031ce0) mup3_rocker2_pane_g1

0x81fb,	// (0x00039ac5) main_dialer2_pane

0x52ac,	// (0x00036b76) main_mp4_pane

0x9a8c,	// (0x0003b356) main_mp4_pane_g1_ParamLimits

0x9a8c,	// (0x0003b356) main_mp4_pane_g1

0x9a9a,	// (0x0003b364) main_mp4_pane_g2_ParamLimits

0x9a9a,	// (0x0003b364) main_mp4_pane_g2

0x9aa8,	// (0x0003b372) main_mp4_pane_g3_ParamLimits

0x9aa8,	// (0x0003b372) main_mp4_pane_g3

0x9aed,	// (0x0003b3b7) main_mp4_pane_g4_ParamLimits

0x9aed,	// (0x0003b3b7) main_mp4_pane_g4

0x9b15,	// (0x0003b3df) main_mp4_pane_g5_ParamLimits

0x9b15,	// (0x0003b3df) main_mp4_pane_g5

0x0005,

0xf8b9,	// (0x00041183) main_mp4_pane_g_ParamLimits

0xf8b9,	// (0x00041183) main_mp4_pane_g

0x9b65,	// (0x0003b42f) main_mp4_pane_t1_ParamLimits

0x9b65,	// (0x0003b42f) main_mp4_pane_t1

0x9bc1,	// (0x0003b48b) main_mp4_pane_t2_ParamLimits

0x9bc1,	// (0x0003b48b) main_mp4_pane_t2

0x0e4d,	// (0x00032717) main_mp4_pane_t3_ParamLimits

0x0e4d,	// (0x00032717) main_mp4_pane_t3

0x9c13,	// (0x0003b4dd) main_mp4_pane_t4_ParamLimits

0x9c13,	// (0x0003b4dd) main_mp4_pane_t4

0x0003,

0xf8c6,	// (0x00041190) main_mp4_pane_t_ParamLimits

0xf8c6,	// (0x00041190) main_mp4_pane_t

0x9c57,	// (0x0003b521) mp4_progress_pane_ParamLimits

0x9c57,	// (0x0003b521) mp4_progress_pane

0x9ca1,	// (0x0003b56b) mp4_rocker_pane_ParamLimits

0x9ca1,	// (0x0003b56b) mp4_rocker_pane

0x0f23,	// (0x000327ed) mp4_progress_pane_t1

0x0f3c,	// (0x00032806) mp4_progress_pane_t2

0x0001,

0xf8cf,	// (0x00041199) mp4_progress_pane_t

0x0f55,	// (0x0003281f) mup_progress_pane_cp04

0x0416,	// (0x00031ce0) mp4_rocker_pane_g1

0x9cc1,	// (0x0003b58b) aid_cell_size_keypad2_ParamLimits

0x9cc1,	// (0x0003b58b) aid_cell_size_keypad2

0x9cd1,	// (0x0003b59b) dialer2_ne_pane_ParamLimits

0x9cd1,	// (0x0003b59b) dialer2_ne_pane

0x9cdf,	// (0x0003b5a9) grid_dialer2_keypad_pane_ParamLimits

0x9cdf,	// (0x0003b5a9) grid_dialer2_keypad_pane

0x1ab2,	// (0x0003337c) bg_popup_call_pane_cp07_ParamLimits

0x1ab2,	// (0x0003337c) bg_popup_call_pane_cp07

0x9cef,	// (0x0003b5b9) dialer2_ne_pane_t1_ParamLimits

0x9cef,	// (0x0003b5b9) dialer2_ne_pane_t1

0x9d14,	// (0x0003b5de) cell_dialer2_keypad_pane_ParamLimits

0x9d14,	// (0x0003b5de) cell_dialer2_keypad_pane

0x0f7d,	// (0x00032847) bg_button_pane_pane_cp04_ParamLimits

0x0f7d,	// (0x00032847) bg_button_pane_pane_cp04

0x9d29,	// (0x0003b5f3) cell_dialer2_keypad_pane_g1_ParamLimits

0x9d29,	// (0x0003b5f3) cell_dialer2_keypad_pane_g1

0x61e9,	// (0x00037ab3) aid_placing_vt_set_content_ParamLimits

0x61e9,	// (0x00037ab3) aid_placing_vt_set_content

0x6213,	// (0x00037add) aid_placing_vt_set_title_ParamLimits

0x6213,	// (0x00037add) aid_placing_vt_set_title

0x52ac,	// (0x00036b76) main_image3_pane

0x9dc3,	// (0x0003b68d) area_side_right_pane_cp01_ParamLimits

0x9dc3,	// (0x0003b68d) area_side_right_pane_cp01

0x2070,	// (0x0003393a) main_image3_pane_g1_ParamLimits

0x2070,	// (0x0003393a) main_image3_pane_g1

0x9df0,	// (0x0003b6ba) main_image3_pane_g2_ParamLimits

0x9df0,	// (0x0003b6ba) main_image3_pane_g2

0x9e09,	// (0x0003b6d3) main_image3_pane_g3_ParamLimits

0x9e09,	// (0x0003b6d3) main_image3_pane_g3

0x9e22,	// (0x0003b6ec) main_image3_pane_g4_ParamLimits

0x9e22,	// (0x0003b6ec) main_image3_pane_g4

0x0003,

0xf8de,	// (0x000411a8) main_image3_pane_g_ParamLimits

0xf8de,	// (0x000411a8) main_image3_pane_g

0x9e3b,	// (0x0003b705) main_image3_pane_t1_ParamLimits

0x9e3b,	// (0x0003b705) main_image3_pane_t1

0x9e60,	// (0x0003b72a) main_image3_pane_t2_ParamLimits

0x9e60,	// (0x0003b72a) main_image3_pane_t2

0x9e7f,	// (0x0003b749) main_image3_pane_t3_ParamLimits

0x9e7f,	// (0x0003b749) main_image3_pane_t3

0x0003,

0xf8e7,	// (0x000411b1) main_image3_pane_t_ParamLimits

0xf8e7,	// (0x000411b1) main_image3_pane_t

0x553d,	// (0x00036e07) grid_sctrl_middle_pane_cp01_ParamLimits

0x553d,	// (0x00036e07) grid_sctrl_middle_pane_cp01

0x9ee0,	// (0x0003b7aa) cell_sctrl_middle_pane_cp01_ParamLimits

0x9ee0,	// (0x0003b7aa) cell_sctrl_middle_pane_cp01

0x9ef1,	// (0x0003b7bb) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x9ef1,	// (0x0003b7bb) cell_sctrl_middle_pane_cp01_g1

0x52ac,	// (0x00036b76) main_call4_pane

0x9efe,	// (0x0003b7c8) aid_size_button_call4_ParamLimits

0x9efe,	// (0x0003b7c8) aid_size_button_call4

0x9f2e,	// (0x0003b7f8) call4_windows_pane_ParamLimits

0x9f2e,	// (0x0003b7f8) call4_windows_pane

0x9f48,	// (0x0003b812) grid_call4_button_pane_ParamLimits

0x9f48,	// (0x0003b812) grid_call4_button_pane

0x0fbb,	// (0x00032885) call4_windows_conf_pane

0x0fd2,	// (0x0003289c) popup_call4_audio_first_window_ParamLimits

0x0fd2,	// (0x0003289c) popup_call4_audio_first_window

0x101e,	// (0x000328e8) popup_call4_audio_second_window_ParamLimits

0x101e,	// (0x000328e8) popup_call4_audio_second_window

0x1032,	// (0x000328fc) popup_call4_audio_wait_window_ParamLimits

0x1032,	// (0x000328fc) popup_call4_audio_wait_window

0x9f6c,	// (0x0003b836) cell_call4_button_pane_ParamLimits

0x9f6c,	// (0x0003b836) cell_call4_button_pane

0x9f91,	// (0x0003b85b) bg_button_pane_cp09_ParamLimits

0x9f91,	// (0x0003b85b) bg_button_pane_cp09

0x9f9d,	// (0x0003b867) cell_call4_button_pane_g1_ParamLimits

0x9f9d,	// (0x0003b867) cell_call4_button_pane_g1

0x9faa,	// (0x0003b874) cell_call4_button_pane_t1_ParamLimits

0x9faa,	// (0x0003b874) cell_call4_button_pane_t1

0x107a,	// (0x00032944) popup_call4_audio_conf_window_ParamLimits

0x107a,	// (0x00032944) popup_call4_audio_conf_window

0x928f,	// (0x0003ab59) mup3_progress_pane_t1_ParamLimits

0x92a6,	// (0x0003ab70) mup3_progress_pane_t2_ParamLimits

0x0709,	// (0x00031fd3) mup3_progress_pane_t3_ParamLimits

0xf7c0,	// (0x0004108a) mup3_progress_pane_t_ParamLimits

0x0720,	// (0x00031fea) mup_progress_pane_cp03_ParamLimits

0x97b4,	// (0x0003b07e) mup3_control_keys_pane_g4_copy1

0x9c85,	// (0x0003b54f) mp4_rocker2_pane_ParamLimits

0x9c85,	// (0x0003b54f) mp4_rocker2_pane

0x1096,	// (0x00032960) mp4_rocker2_pane_g1

0x108e,	// (0x00032958) mp4_rocker2_pane_g2

0x9fbc,	// (0x0003b886) mp4_rocker2_pane_g3

0x9fc4,	// (0x0003b88e) mp4_rocker2_pane_g4

0x9fcc,	// (0x0003b896) mp4_rocker2_pane_g5

0x0004,

0xf8f0,	// (0x000411ba) mp4_rocker2_pane_g

0x52ac,	// (0x00036b76) main_camera4_pane

0x52ac,	// (0x00036b76) main_video4_pane

0x9a05,	// (0x0003b2cf) main_video_tele_dialer_pane_t1_ParamLimits

0x9a05,	// (0x0003b2cf) main_video_tele_dialer_pane_t1

0x9a17,	// (0x0003b2e1) main_video_tele_dialer_pane_t2_ParamLimits

0x9a17,	// (0x0003b2e1) main_video_tele_dialer_pane_t2

0x0001,

0xf8aa,	// (0x00041174) main_video_tele_dialer_pane_t_ParamLimits

0xf8aa,	// (0x00041174) main_video_tele_dialer_pane_t

0x9fec,	// (0x0003b8b6) cam4_autofocus_pane_ParamLimits

0x9fec,	// (0x0003b8b6) cam4_autofocus_pane

0xa006,	// (0x0003b8d0) cam4_image_uncrop_pane_ParamLimits

0xa006,	// (0x0003b8d0) cam4_image_uncrop_pane

0xa01d,	// (0x0003b8e7) cam4_indicators_pane_ParamLimits

0xa01d,	// (0x0003b8e7) cam4_indicators_pane

0xa039,	// (0x0003b903) main_camera4_pane_g1_ParamLimits

0xa039,	// (0x0003b903) main_camera4_pane_g1

0xa045,	// (0x0003b90f) main_camera4_pane_g2_ParamLimits

0xa045,	// (0x0003b90f) main_camera4_pane_g2

0xa045,	// (0x0003b90f) main_camera4_pane_g3_ParamLimits

0xa045,	// (0x0003b90f) main_camera4_pane_g3

0xa051,	// (0x0003b91b) main_camera4_pane_g4_ParamLimits

0xa051,	// (0x0003b91b) main_camera4_pane_g4

0xa05d,	// (0x0003b927) main_camera4_pane_g5_ParamLimits

0xa05d,	// (0x0003b927) main_camera4_pane_g5

0x0005,

0xf8fb,	// (0x000411c5) main_camera4_pane_g_ParamLimits

0xf8fb,	// (0x000411c5) main_camera4_pane_g

0xa077,	// (0x0003b941) main_camera4_pane_t1_ParamLimits

0xa077,	// (0x0003b941) main_camera4_pane_t1

0x0682,	// (0x00031f4c) bg_tb_trans_pane_cp06

0xa0c7,	// (0x0003b991) cam4_indicators_pane_g1

0xa0d8,	// (0x0003b9a2) cam4_indicators_pane_g2

0x0002,

0xf916,	// (0x000411e0) cam4_indicators_pane_g

0xa0f6,	// (0x0003b9c0) cam4_indicators_pane_t1

0xa120,	// (0x0003b9ea) main_video4_pane_g1_ParamLimits

0xa120,	// (0x0003b9ea) main_video4_pane_g1

0xa12c,	// (0x0003b9f6) main_video4_pane_g2_ParamLimits

0xa12c,	// (0x0003b9f6) main_video4_pane_g2

0xa138,	// (0x0003ba02) main_video4_pane_g3_ParamLimits

0xa138,	// (0x0003ba02) main_video4_pane_g3

0xa144,	// (0x0003ba0e) main_video4_pane_g4_ParamLimits

0xa144,	// (0x0003ba0e) main_video4_pane_g4

0x0004,

0xf91d,	// (0x000411e7) main_video4_pane_g_ParamLimits

0xf91d,	// (0x000411e7) main_video4_pane_g

0xa164,	// (0x0003ba2e) vid4_indicators_pane_ParamLimits

0xa164,	// (0x0003ba2e) vid4_indicators_pane

0xa182,	// (0x0003ba4c) video4_image_uncrop_cif_pane_ParamLimits

0xa182,	// (0x0003ba4c) video4_image_uncrop_cif_pane

0xa191,	// (0x0003ba5b) video4_image_uncrop_nhd_pane_ParamLimits

0xa191,	// (0x0003ba5b) video4_image_uncrop_nhd_pane

0xa006,	// (0x0003b8d0) video4_image_uncrop_vga_pane_ParamLimits

0xa006,	// (0x0003b8d0) video4_image_uncrop_vga_pane

0xe2c7,	// (0x0003fb91) bg_tb_trans_pane_cp07

0xa1a8,	// (0x0003ba72) vid4_indicators_pane_g1

0xa1b9,	// (0x0003ba83) vid4_indicators_pane_g2

0xa1ca,	// (0x0003ba94) vid4_indicators_pane_g3

0x0004,

0xf928,	// (0x000411f2) vid4_indicators_pane_g

0xa1f7,	// (0x0003bac1) vid4_indicators_pane_t1

0xa210,	// (0x0003bada) cam4_autofocus_pane_g1

0xa218,	// (0x0003bae2) cam4_autofocus_pane_g2

0xa220,	// (0x0003baea) cam4_autofocus_pane_g3

0x0002,

0xf933,	// (0x000411fd) cam4_autofocus_pane_g

0xa228,	// (0x0003baf2) cam4_autofocus_pane_g3_copy1

0x0ce9,	// (0x000325b3) video_down_pane_cp_t1

0x0cf7,	// (0x000325c1) video_down_pane_cp_t2

0x0001,

0xf8af,	// (0x00041179) video_down_pane_cp_t

0x553d,	// (0x00036e07) popup_vitu2_window_ParamLimits

0x553d,	// (0x00036e07) popup_vitu2_window

0xa230,	// (0x0003bafa) aid_size_cell2_itu2_ParamLimits

0xa230,	// (0x0003bafa) aid_size_cell2_itu2

0xa252,	// (0x0003bb1c) aid_size_cell_itu2_ParamLimits

0xa252,	// (0x0003bb1c) aid_size_cell_itu2

0x1ab2,	// (0x0003337c) bg_popup_window_pane_cp09_ParamLimits

0x1ab2,	// (0x0003337c) bg_popup_window_pane_cp09

0xa296,	// (0x0003bb60) field_vitu2_entry_pane_ParamLimits

0xa296,	// (0x0003bb60) field_vitu2_entry_pane

0xa2b6,	// (0x0003bb80) grid_vitu2_function_pane_ParamLimits

0xa2b6,	// (0x0003bb80) grid_vitu2_function_pane

0xa2fa,	// (0x0003bbc4) grid_vitu2_itu_pane_ParamLimits

0xa2fa,	// (0x0003bbc4) grid_vitu2_itu_pane

0xa372,	// (0x0003bc3c) cell_vitu2_itu_pane_ParamLimits

0xa372,	// (0x0003bc3c) cell_vitu2_itu_pane

0xa387,	// (0x0003bc51) cell_vitu2_function_pane_ParamLimits

0xa387,	// (0x0003bc51) cell_vitu2_function_pane

0x1163,	// (0x00032a2d) bg_popup_call_pane_cp08_ParamLimits

0x1163,	// (0x00032a2d) bg_popup_call_pane_cp08

0x117c,	// (0x00032a46) field_vitu2_entry_pane_g1

0x1188,	// (0x00032a52) field_vitu2_entry_pane_g2

0x0002,

0xf93a,	// (0x00041204) field_vitu2_entry_pane_g

0x445d,	// (0x00035d27) field_vitu2_entry_pane_t1_ParamLimits

0x445d,	// (0x00035d27) field_vitu2_entry_pane_t1

0x448d,	// (0x00035d57) field_vitu2_entry_pane_t2_ParamLimits

0x448d,	// (0x00035d57) field_vitu2_entry_pane_t2

0x0001,

0xf941,	// (0x0004120b) field_vitu2_entry_pane_t_ParamLimits

0xf941,	// (0x0004120b) field_vitu2_entry_pane_t

0xa3c6,	// (0x0003bc90) bg_button_pane_cp010_ParamLimits

0xa3c6,	// (0x0003bc90) bg_button_pane_cp010

0xa3d4,	// (0x0003bc9e) cell_vitu2_itu_pane_g1

0xa3f2,	// (0x0003bcbc) cell_vitu2_itu_pane_t1_ParamLimits

0xa3f2,	// (0x0003bcbc) cell_vitu2_itu_pane_t1

0x44aa,	// (0x00035d74) cell_vitu2_itu_pane_t2_ParamLimits

0x44aa,	// (0x00035d74) cell_vitu2_itu_pane_t2

0x0002,

0xf94b,	// (0x00041215) cell_vitu2_itu_pane_t_ParamLimits

0xf94b,	// (0x00041215) cell_vitu2_itu_pane_t

0xe2c7,	// (0x0003fb91) bg_button_pane_cp011

0xa444,	// (0x0003bd0e) cell_vitu2_function_pane_g1

0x52ac,	// (0x00036b76) main_myfav_hc_pane

0x9ec1,	// (0x0003b78b) popup_image3_note_pane_ParamLimits

0x9ec1,	// (0x0003b78b) popup_image3_note_pane

0x9ecf,	// (0x0003b799) popup_image3_tool_bar_pane_ParamLimits

0x9ecf,	// (0x0003b799) popup_image3_tool_bar_pane

0x4518,	// (0x00035de2) cell_vitu2_itu_pane_t3_ParamLimits

0x4518,	// (0x00035de2) cell_vitu2_itu_pane_t3

0x52ac,	// (0x00036b76) bg_popup_trans_pane

0x1204,	// (0x00032ace) grid_image3_tool_bar_pane

0x120e,	// (0x00032ad8) bg_popup_trans_pane_g1

0xd50e,	// (0x0003edd8) bg_popup_trans_pane_g2

0x1216,	// (0x00032ae0) bg_popup_trans_pane_g3

0x121e,	// (0x00032ae8) bg_popup_trans_pane_g4

0x1226,	// (0x00032af0) bg_popup_trans_pane_g5

0x122e,	// (0x00032af8) bg_popup_trans_pane_g6

0x1236,	// (0x00032b00) bg_popup_trans_pane_g7

0x123e,	// (0x00032b08) bg_popup_trans_pane_g8

0xd4ee,	// (0x0003edb8) bg_popup_trans_pane_g9

0x0008,

0xf952,	// (0x0004121c) bg_popup_trans_pane_g

0x1246,	// (0x00032b10) cell_image3_tool_bar_pane_ParamLimits

0x1246,	// (0x00032b10) cell_image3_tool_bar_pane

0x0416,	// (0x00031ce0) cell_image3_tool_bar_pane_g1

0x52ac,	// (0x00036b76) bg_popup_trans_pane_cp1

0x125a,	// (0x00032b24) popup_image3_note_pane_t1

0x1268,	// (0x00032b32) popup_image3_note_pane_t2

0x1276,	// (0x00032b40) popup_image3_note_pane_t3

0x0002,

0xf965,	// (0x0004122f) popup_image3_note_pane_t

0x1284,	// (0x00032b4e) popup_image3_note_pane_t3_copy1

0xa458,	// (0x0003bd22) bg_myfav_hc_instruction_pane_ParamLimits

0xa458,	// (0x0003bd22) bg_myfav_hc_instruction_pane

0xa470,	// (0x0003bd3a) cell_myfav_contact_pane_ParamLimits

0xa470,	// (0x0003bd3a) cell_myfav_contact_pane

0xa48a,	// (0x0003bd54) cell_myfav_contact_pane_cp1_ParamLimits

0xa48a,	// (0x0003bd54) cell_myfav_contact_pane_cp1

0xa4a2,	// (0x0003bd6c) cell_myfav_contact_pane_cp2_ParamLimits

0xa4a2,	// (0x0003bd6c) cell_myfav_contact_pane_cp2

0xa4ba,	// (0x0003bd84) cell_myfav_contact_pane_cp3_ParamLimits

0xa4ba,	// (0x0003bd84) cell_myfav_contact_pane_cp3

0xa4d1,	// (0x0003bd9b) cell_myfav_contact_pane_cp4_ParamLimits

0xa4d1,	// (0x0003bd9b) cell_myfav_contact_pane_cp4

0xa4e7,	// (0x0003bdb1) cell_myfav_contact_pane_cp5_ParamLimits

0xa4e7,	// (0x0003bdb1) cell_myfav_contact_pane_cp5

0xa4fb,	// (0x0003bdc5) cell_myfav_contact_pane_cp6_ParamLimits

0xa4fb,	// (0x0003bdc5) cell_myfav_contact_pane_cp6

0xa50f,	// (0x0003bdd9) cell_myfav_contact_pane_cp7_ParamLimits

0xa50f,	// (0x0003bdd9) cell_myfav_contact_pane_cp7

0x1292,	// (0x00032b5c) listscroll_gen_pane_cp05

0xa527,	// (0x0003bdf1) main_myfav_hc_pane_g1_ParamLimits

0xa527,	// (0x0003bdf1) main_myfav_hc_pane_g1

0xa53d,	// (0x0003be07) main_myfav_hc_pane_g2_ParamLimits

0xa53d,	// (0x0003be07) main_myfav_hc_pane_g2

0x0002,

0xf96c,	// (0x00041236) main_myfav_hc_pane_g_ParamLimits

0xf96c,	// (0x00041236) main_myfav_hc_pane_g

0xa56b,	// (0x0003be35) main_myfav_hc_pane_t1_ParamLimits

0xa56b,	// (0x0003be35) main_myfav_hc_pane_t1

0x129b,	// (0x00032b65) main_myfav_hc_pane_t2_ParamLimits

0x129b,	// (0x00032b65) main_myfav_hc_pane_t2

0x12ad,	// (0x00032b77) main_myfav_hc_pane_t3_ParamLimits

0x12ad,	// (0x00032b77) main_myfav_hc_pane_t3

0xa582,	// (0x0003be4c) main_myfav_hc_pane_t4_ParamLimits

0xa582,	// (0x0003be4c) main_myfav_hc_pane_t4

0x0004,

0xf973,	// (0x0004123d) main_myfav_hc_pane_t_ParamLimits

0xf973,	// (0x0004123d) main_myfav_hc_pane_t

0x0416,	// (0x00031ce0) bg_myfav_hc_instruction_pane_g1

0x12bf,	// (0x00032b89) cell_myfav_contact_pane_g1_ParamLimits

0x12bf,	// (0x00032b89) cell_myfav_contact_pane_g1

0x12bf,	// (0x00032b89) cell_myfav_contact_pane_g2_ParamLimits

0x12bf,	// (0x00032b89) cell_myfav_contact_pane_g2

0x12cb,	// (0x00032b95) cell_myfav_contact_pane_g3_ParamLimits

0x12cb,	// (0x00032b95) cell_myfav_contact_pane_g3

0x06f3,	// (0x00031fbd) cell_myfav_contact_pane_g4_ParamLimits

0x06f3,	// (0x00031fbd) cell_myfav_contact_pane_g4

0x12d8,	// (0x00032ba2) cell_myfav_contact_pane_g5_ParamLimits

0x12d8,	// (0x00032ba2) cell_myfav_contact_pane_g5

0x0004,

0xf97e,	// (0x00041248) cell_myfav_contact_pane_g_ParamLimits

0xf97e,	// (0x00041248) cell_myfav_contact_pane_g

0xa553,	// (0x0003be1d) main_myfav_hc_pane_g3_ParamLimits

0xa553,	// (0x0003be1d) main_myfav_hc_pane_g3

0x545a,	// (0x00036d24) popup_adpt_find_window

0xa5ac,	// (0x0003be76) afind_page_pane_ParamLimits

0xa5ac,	// (0x0003be76) afind_page_pane

0xa5b9,	// (0x0003be83) aid_size_cell_afind_ParamLimits

0xa5b9,	// (0x0003be83) aid_size_cell_afind

0xa5d3,	// (0x0003be9d) bg_popup_sub_pane_cp09_ParamLimits

0xa5d3,	// (0x0003be9d) bg_popup_sub_pane_cp09

0xa5e0,	// (0x0003beaa) find_pane_cp01_ParamLimits

0xa5e0,	// (0x0003beaa) find_pane_cp01

0x12e4,	// (0x00032bae) grid_afind_control_pane_ParamLimits

0x12e4,	// (0x00032bae) grid_afind_control_pane

0xa5ed,	// (0x0003beb7) grid_afind_pane_ParamLimits

0xa5ed,	// (0x0003beb7) grid_afind_pane

0xa609,	// (0x0003bed3) cell_afind_pane_ParamLimits

0xa609,	// (0x0003bed3) cell_afind_pane

0x0416,	// (0x00031ce0) afind_page_pane_g1

0xa651,	// (0x0003bf1b) afind_page_pane_g2

0xa65a,	// (0x0003bf24) afind_page_pane_g3

0x0002,

0xf989,	// (0x00041253) afind_page_pane_g

0xa663,	// (0x0003bf2d) afind_page_pane_t1

0x12f8,	// (0x00032bc2) cell_afind_grid_control_pane_ParamLimits

0x12f8,	// (0x00032bc2) cell_afind_grid_control_pane

0x0f7d,	// (0x00032847) bg_button_pane_cp69_ParamLimits

0x0f7d,	// (0x00032847) bg_button_pane_cp69

0xa683,	// (0x0003bf4d) cell_afind_pane_g1_ParamLimits

0xa683,	// (0x0003bf4d) cell_afind_pane_g1

0xa690,	// (0x0003bf5a) cell_afind_pane_t1_ParamLimits

0xa690,	// (0x0003bf5a) cell_afind_pane_t1

0xd309,	// (0x0003ebd3) bg_button_pane_cp72

0x1307,	// (0x00032bd1) cell_afind_grid_control_pane_g1

0x7d79,	// (0x00039643) aid_image_placing_area_ParamLimits

0x7d79,	// (0x00039643) aid_image_placing_area

0x09ec,	// (0x000322b6) field_vitu_entry_pane_g1_ParamLimits

0x09ec,	// (0x000322b6) field_vitu_entry_pane_g1

0x09f8,	// (0x000322c2) field_vitu_entry_pane_g2_ParamLimits

0x09f8,	// (0x000322c2) field_vitu_entry_pane_g2

0x0001,

0xf83a,	// (0x00041104) field_vitu_entry_pane_g_ParamLimits

0xf83a,	// (0x00041104) field_vitu_entry_pane_g

0x983b,	// (0x0003b105) cell_vitu_itu_pane_g1_ParamLimits

0x987d,	// (0x0003b147) cell_vitu_itu_pane_t3_ParamLimits

0x987d,	// (0x0003b147) cell_vitu_itu_pane_t3

0x0f23,	// (0x000327ed) mp4_progress_pane_t1_ParamLimits

0x0f3c,	// (0x00032806) mp4_progress_pane_t2_ParamLimits

0xf8cf,	// (0x00041199) mp4_progress_pane_t_ParamLimits

0x0f55,	// (0x0003281f) mup_progress_pane_cp04_ParamLimits

0xa596,	// (0x0003be60) main_myfav_hc_pane_t5_ParamLimits

0xa596,	// (0x0003be60) main_myfav_hc_pane_t5

0x52fe,	// (0x00036bc8) aid_zoom_text_primary

0x545a,	// (0x00036d24) popup_adpt_find_window_ParamLimits

0xe2c7,	// (0x0003fb91) main_cam_set_pane

0xa02b,	// (0x0003b8f5) cam4_zoom_pane_ParamLimits

0xa02b,	// (0x0003b8f5) cam4_zoom_pane

0xa6a2,	// (0x0003bf6c) main_cam_set_pane_g1_ParamLimits

0xa6a2,	// (0x0003bf6c) main_cam_set_pane_g1

0xa6b0,	// (0x0003bf7a) main_cam_set_pane_g2_ParamLimits

0xa6b0,	// (0x0003bf7a) main_cam_set_pane_g2

0x0001,

0xf990,	// (0x0004125a) main_cam_set_pane_g_ParamLimits

0xf990,	// (0x0004125a) main_cam_set_pane_g

0xa6bc,	// (0x0003bf86) main_cam_set_pane_t1_ParamLimits

0xa6bc,	// (0x0003bf86) main_cam_set_pane_t1

0xa6d8,	// (0x0003bfa2) main_cset_listscroll_pane_ParamLimits

0xa6d8,	// (0x0003bfa2) main_cset_listscroll_pane

0xa703,	// (0x0003bfcd) main_cset_slider_pane_ParamLimits

0xa703,	// (0x0003bfcd) main_cset_slider_pane

0x1318,	// (0x00032be2) main_cset_list_pane_ParamLimits

0x1318,	// (0x00032be2) main_cset_list_pane

0x1328,	// (0x00032bf2) scroll_pane_cp028

0xa722,	// (0x0003bfec) aid_area_touch_slider

0xa73e,	// (0x0003c008) cset_slider_pane

0xa768,	// (0x0003c032) main_cset_slider_pane_g1

0xa77d,	// (0x0003c047) main_cset_slider_pane_g2

0x0011,

0xf995,	// (0x0004125f) main_cset_slider_pane_g

0x1361,	// (0x00032c2b) main_cset_slider_pane_t1

0xa83f,	// (0x0003c109) main_cset_slider_pane_t2

0xa859,	// (0x0003c123) main_cset_slider_pane_t3

0xa873,	// (0x0003c13d) main_cset_slider_pane_t4

0xa88d,	// (0x0003c157) main_cset_slider_pane_t5

0xa8ab,	// (0x0003c175) main_cset_slider_pane_t6

0xa8c2,	// (0x0003c18c) main_cset_slider_pane_t7

0x000e,

0xf9ba,	// (0x00041284) main_cset_slider_pane_t

0xa9ce,	// (0x0003c298) cset_list_set_pane_ParamLimits

0xa9ce,	// (0x0003c298) cset_list_set_pane

0xa9e4,	// (0x0003c2ae) aid_position_infowindow_above

0xa9ec,	// (0x0003c2b6) aid_position_infowindow_below

0x4565,	// (0x00035e2f) cset_list_set_pane_g1_ParamLimits

0x4565,	// (0x00035e2f) cset_list_set_pane_g1

0x4571,	// (0x00035e3b) cset_list_set_pane_g3_ParamLimits

0x4571,	// (0x00035e3b) cset_list_set_pane_g3

0x0001,

0xf9d9,	// (0x000412a3) cset_list_set_pane_g_ParamLimits

0xf9d9,	// (0x000412a3) cset_list_set_pane_g

0x4580,	// (0x00035e4a) cset_list_set_pane_t1_ParamLimits

0x4580,	// (0x00035e4a) cset_list_set_pane_t1

0xe2c7,	// (0x0003fb91) list_highlight_pane_cp021_ParamLimits

0xe2c7,	// (0x0003fb91) list_highlight_pane_cp021

0xdd2f,	// (0x0003f5f9) cset_slider_pane_g1

0xdd41,	// (0x0003f60b) cset_slider_pane_g2

0xdd38,	// (0x0003f602) cset_slider_pane_g3

0x0002,

0xf9de,	// (0x000412a8) cset_slider_pane_g

0xa9f4,	// (0x0003c2be) aid_area_touch_cam4_zoom

0xa9fc,	// (0x0003c2c6) cam4_zoom_cont_pane

0xaa04,	// (0x0003c2ce) cam4_zoom_pane_g1

0xaa0c,	// (0x0003c2d6) cam4_zoom_pane_g2

0xaa14,	// (0x0003c2de) cam4_zoom_pane_g3

0x0002,

0xf9e5,	// (0x000412af) cam4_zoom_pane_g

0x1e01,	// (0x000336cb) cam4_zoom_cont_pane_g1

0x1e0a,	// (0x000336d4) cam4_zoom_cont_pane_g2

0x1e13,	// (0x000336dd) cam4_zoom_cont_pane_g3

0x0002,

0xf9ec,	// (0x000412b6) cam4_zoom_cont_pane_g

0x9f18,	// (0x0003b7e2) call4_image_pane_ParamLimits

0x9f18,	// (0x0003b7e2) call4_image_pane

0x0fbb,	// (0x00032885) call4_windows_conf_pane_ParamLimits

0x0ffc,	// (0x000328c6) popup_call4_audio_in_window_ParamLimits

0x0ffc,	// (0x000328c6) popup_call4_audio_in_window

0x52ac,	// (0x00036b76) bg_popup_call2_act_pane_cp02

0x1072,	// (0x0003293c) call4_list_conf_pane

0x0416,	// (0x00031ce0) call4_image_pane_g1

0x0416,	// (0x00031ce0) call4_image_pane_g2

0x0001,

0xf700,	// (0x00040fca) call4_image_pane_g

0x1460,	// (0x00032d2a) list_single_graphic_popup_conf4_pane_ParamLimits

0x1460,	// (0x00032d2a) list_single_graphic_popup_conf4_pane

0x52ac,	// (0x00036b76) list_highlight_pane_cp022

0x1473,	// (0x00032d3d) list_single_graphic_popup_conf4_pane_g1

0xda0e,	// (0x0003f2d8) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9f3,	// (0x000412bd) list_single_graphic_popup_conf4_pane_g

0x147b,	// (0x00032d45) list_single_graphic_popup_conf4_pane_t1

0x6377,	// (0x00037c41) popup_vtel_slider_window_ParamLimits

0x6377,	// (0x00037c41) popup_vtel_slider_window

0x0f6b,	// (0x00032835) dialer2_ne_pane_t2_ParamLimits

0x0f6b,	// (0x00032835) dialer2_ne_pane_t2

0x0001,

0xf8d4,	// (0x0004119e) dialer2_ne_pane_t_ParamLimits

0xf8d4,	// (0x0004119e) dialer2_ne_pane_t

0xe2c7,	// (0x0003fb91) bg_popup_sub_pane_cp010_ParamLimits

0xe2c7,	// (0x0003fb91) bg_popup_sub_pane_cp010

0xaa1c,	// (0x0003c2e6) popup_vtel_slider_window_g1_ParamLimits

0xaa1c,	// (0x0003c2e6) popup_vtel_slider_window_g1

0xaa28,	// (0x0003c2f2) popup_vtel_slider_window_g2_ParamLimits

0xaa28,	// (0x0003c2f2) popup_vtel_slider_window_g2

0x0003,

0xf9f8,	// (0x000412c2) popup_vtel_slider_window_g_ParamLimits

0xf9f8,	// (0x000412c2) popup_vtel_slider_window_g

0xaa70,	// (0x0003c33a) vtel_slider_pane_ParamLimits

0xaa70,	// (0x0003c33a) vtel_slider_pane

0xaa7f,	// (0x0003c349) vtel_slider_pane_g1_ParamLimits

0xaa7f,	// (0x0003c349) vtel_slider_pane_g1

0xaa8c,	// (0x0003c356) vtel_slider_pane_g2_ParamLimits

0xaa8c,	// (0x0003c356) vtel_slider_pane_g2

0xaa99,	// (0x0003c363) vtel_slider_pane_g3_ParamLimits

0xaa99,	// (0x0003c363) vtel_slider_pane_g3

0xaa7f,	// (0x0003c349) vtel_slider_pane_g4_ParamLimits

0xaa7f,	// (0x0003c349) vtel_slider_pane_g4

0xaaa6,	// (0x0003c370) vtel_slider_pane_g5_ParamLimits

0xaaa6,	// (0x0003c370) vtel_slider_pane_g5

0x0004,

0xfa01,	// (0x000412cb) vtel_slider_pane_g_ParamLimits

0xfa01,	// (0x000412cb) vtel_slider_pane_g

0x52ac,	// (0x00036b76) main_gallery2_pane

0xa278,	// (0x0003bb42) aid_size_row_itut2_dropdow_list_ParamLimits

0xa278,	// (0x0003bb42) aid_size_row_itut2_dropdow_list

0xa2d8,	// (0x0003bba2) grid_vitu2_function_top_pane_ParamLimits

0xa2d8,	// (0x0003bba2) grid_vitu2_function_top_pane

0xa32e,	// (0x0003bbf8) popup_vitu2_dropdown_list_window_ParamLimits

0xa32e,	// (0x0003bbf8) popup_vitu2_dropdown_list_window

0xa34e,	// (0x0003bc18) popup_vitu2_match_list_window

0xaab3,	// (0x0003c37d) cell_vitu2_function_top_pane_ParamLimits

0xaab3,	// (0x0003c37d) cell_vitu2_function_top_pane

0xaad3,	// (0x0003c39d) cell_vitu2_function_top_pane_cp01_ParamLimits

0xaad3,	// (0x0003c39d) cell_vitu2_function_top_pane_cp01

0xaaf1,	// (0x0003c3bb) cell_vitu2_function_top_wide_pane_ParamLimits

0xaaf1,	// (0x0003c3bb) cell_vitu2_function_top_wide_pane

0xe2c7,	// (0x0003fb91) bg_button_pane_cp012

0xab0f,	// (0x0003c3d9) cell_vitu2_function_top_pane_g1

0xab1e,	// (0x0003c3e8) bg_button_pane_cp013_ParamLimits

0xab1e,	// (0x0003c3e8) bg_button_pane_cp013

0xab3a,	// (0x0003c404) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xab3a,	// (0x0003c404) cell_vitu2_function_top_wide_pane_g1

0x553d,	// (0x00036e07) bg_popup_sub_pane_cp20

0xab52,	// (0x0003c41c) list_vitu2_match_list_pane

0x120e,	// (0x00032ad8) bg_popup_sub_pane_cp20_g1

0x1216,	// (0x00032ae0) bg_popup_sub_pane_cp20_g2

0xd50e,	// (0x0003edd8) bg_popup_sub_pane_cp20_g3

0x121e,	// (0x00032ae8) bg_popup_sub_pane_cp20_g4

0xd4ee,	// (0x0003edb8) bg_popup_sub_pane_cp20_g5

0x14bb,	// (0x00032d85) bg_popup_sub_pane_cp20_g6

0x122e,	// (0x00032af8) bg_popup_sub_pane_cp20_g7

0x1236,	// (0x00032b00) bg_popup_sub_pane_cp20_g8

0x123e,	// (0x00032b08) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa0c,	// (0x000412d6) bg_popup_sub_pane_cp20_g

0xab6a,	// (0x0003c434) list_vitu2_match_list_item_pane_ParamLimits

0xab6a,	// (0x0003c434) list_vitu2_match_list_item_pane

0xab7c,	// (0x0003c446) list_vitu2_match_list_item_pane_t1

0x52ac,	// (0x00036b76) bg_popup_sub_pane_cp21

0xd936,	// (0x0003f200) grid_vitu2_dropdown_list_pane

0xab8a,	// (0x0003c454) cell_vitu2_dropdown_list_char_pane_ParamLimits

0xab8a,	// (0x0003c454) cell_vitu2_dropdown_list_char_pane

0xabab,	// (0x0003c475) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0xabab,	// (0x0003c475) cell_vitu2_dropdown_list_ctrl_pane

0x1515,	// (0x00032ddf) cell_vitu2_dropdown_list_char_pane_g1

0x150c,	// (0x00032dd6) cell_vitu2_dropdown_list_char_pane_g2

0x1503,	// (0x00032dcd) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa29,	// (0x000412f3) cell_vitu2_dropdown_list_char_pane_g

0xabd7,	// (0x0003c4a1) cell_vitu2_dropdown_list_char_pane_t1

0xabe5,	// (0x0003c4af) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xabe5,	// (0x0003c4af) cell_vitu2_dropdown_list_ctrl_pane_g1

0xabf5,	// (0x0003c4bf) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xabf5,	// (0x0003c4bf) cell_vitu2_dropdown_list_ctrl_pane_g2

0xac06,	// (0x0003c4d0) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xac06,	// (0x0003c4d0) cell_vitu2_dropdown_list_ctrl_pane_g3

0xac16,	// (0x0003c4e0) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0xac16,	// (0x0003c4e0) cell_vitu2_dropdown_list_ctrl_pane_g4

0x0682,	// (0x00031f4c) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x0682,	// (0x00031f4c) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa30,	// (0x000412fa) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa30,	// (0x000412fa) cell_vitu2_dropdown_list_ctrl_pane_g

0xac32,	// (0x0003c4fc) aid_size_cell_gallery2_ParamLimits

0xac32,	// (0x0003c4fc) aid_size_cell_gallery2

0xac40,	// (0x0003c50a) grid_gallery2_pane_ParamLimits

0xac40,	// (0x0003c50a) grid_gallery2_pane

0xac4f,	// (0x0003c519) scroll_pane_cp029_ParamLimits

0xac4f,	// (0x0003c519) scroll_pane_cp029

0xac5b,	// (0x0003c525) cell_gallery2_pane_ParamLimits

0xac5b,	// (0x0003c525) cell_gallery2_pane

0x151e,	// (0x00032de8) cell_gallery2_pane_g2

0x2bfd,	// (0x000344c7) cell_gallery2_pane_g3

0x1528,	// (0x00032df2) cell_gallery2_pane_g4

0x1530,	// (0x00032dfa) cell_gallery2_pane_g5

0xdbf9,	// (0x0003f4c3) grid_highlight_pane_cp10

0xa34e,	// (0x0003bc18) popup_vitu2_match_list_window_ParamLimits

0xa362,	// (0x0003bc2c) popup_vitu2_query_window_ParamLimits

0xa362,	// (0x0003bc2c) popup_vitu2_query_window

0x52ac,	// (0x00036b76) bg_vitu2_candi_button_pane

0x1515,	// (0x00032ddf) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x150c,	// (0x00032dd6) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x1503,	// (0x00032dcd) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x45ea,	// (0x00035eb4) bg_button_pane_cp015

0xac89,	// (0x0003c553) bg_button_pane_cp016

0xac9c,	// (0x0003c566) bg_button_pane_cp017

0xefff,	// (0x000408c9) bg_popup_sub_pane_cp22

0x1538,	// (0x00032e02) popup_vitu2_query_window_g1

0x461d,	// (0x00035ee7) popup_vitu2_query_window_g2

0x0002,

0xfa3b,	// (0x00041305) popup_vitu2_query_window_g

0x463a,	// (0x00035f04) popup_vitu2_query_window_t1_ParamLimits

0x463a,	// (0x00035f04) popup_vitu2_query_window_t1

0x466d,	// (0x00035f37) popup_vitu2_query_window_t2_ParamLimits

0x466d,	// (0x00035f37) popup_vitu2_query_window_t2

0x467f,	// (0x00035f49) popup_vitu2_query_window_t3_ParamLimits

0x467f,	// (0x00035f49) popup_vitu2_query_window_t3

0xacc0,	// (0x0003c58a) popup_vitu2_query_window_t4_ParamLimits

0xacc0,	// (0x0003c58a) popup_vitu2_query_window_t4

0xace1,	// (0x0003c5ab) popup_vitu2_query_window_t5_ParamLimits

0xace1,	// (0x0003c5ab) popup_vitu2_query_window_t5

0x0006,

0xfa42,	// (0x0004130c) popup_vitu2_query_window_t_ParamLimits

0xfa42,	// (0x0004130c) popup_vitu2_query_window_t

0x1310,	// (0x00032bda) main_cset_text_pane

0xa722,	// (0x0003bfec) aid_area_touch_slider_ParamLimits

0xa73e,	// (0x0003c008) cset_slider_pane_ParamLimits

0xa768,	// (0x0003c032) main_cset_slider_pane_g1_ParamLimits

0xa77d,	// (0x0003c047) main_cset_slider_pane_g2_ParamLimits

0x1331,	// (0x00032bfb) main_cset_slider_pane_g3_ParamLimits

0x1331,	// (0x00032bfb) main_cset_slider_pane_g3

0xa792,	// (0x0003c05c) main_cset_slider_pane_g4_ParamLimits

0xa792,	// (0x0003c05c) main_cset_slider_pane_g4

0xa7a1,	// (0x0003c06b) main_cset_slider_pane_g5_ParamLimits

0xa7a1,	// (0x0003c06b) main_cset_slider_pane_g5

0xa7af,	// (0x0003c079) main_cset_slider_pane_g6_ParamLimits

0xa7af,	// (0x0003c079) main_cset_slider_pane_g6

0xf995,	// (0x0004125f) main_cset_slider_pane_g_ParamLimits

0x1361,	// (0x00032c2b) main_cset_slider_pane_t1_ParamLimits

0xa83f,	// (0x0003c109) main_cset_slider_pane_t2_ParamLimits

0xa859,	// (0x0003c123) main_cset_slider_pane_t3_ParamLimits

0xa873,	// (0x0003c13d) main_cset_slider_pane_t4_ParamLimits

0xa88d,	// (0x0003c157) main_cset_slider_pane_t5_ParamLimits

0xa8ab,	// (0x0003c175) main_cset_slider_pane_t6_ParamLimits

0xa8c2,	// (0x0003c18c) main_cset_slider_pane_t7_ParamLimits

0xa8f0,	// (0x0003c1ba) main_cset_slider_pane_t8_ParamLimits

0xa8f0,	// (0x0003c1ba) main_cset_slider_pane_t8

0xa918,	// (0x0003c1e2) main_cset_slider_pane_t9_ParamLimits

0xa918,	// (0x0003c1e2) main_cset_slider_pane_t9

0xa940,	// (0x0003c20a) main_cset_slider_pane_t10_ParamLimits

0xa940,	// (0x0003c20a) main_cset_slider_pane_t10

0xa968,	// (0x0003c232) main_cset_slider_pane_t11_ParamLimits

0xa968,	// (0x0003c232) main_cset_slider_pane_t11

0xa992,	// (0x0003c25c) main_cset_slider_pane_t12_ParamLimits

0xa992,	// (0x0003c25c) main_cset_slider_pane_t12

0xa9af,	// (0x0003c279) main_cset_slider_pane_t13_ParamLimits

0xa9af,	// (0x0003c279) main_cset_slider_pane_t13

0xf9ba,	// (0x00041284) main_cset_slider_pane_t_ParamLimits

0x52ac,	// (0x00036b76) bg_popup_sub_pane_cp011

0x1544,	// (0x00032e0e) main_cset_text_pane_g1

0x154c,	// (0x00032e16) main_cset_text_pane_t1

0x155a,	// (0x00032e24) main_cset_text_pane_t2

0x1568,	// (0x00032e32) main_cset_text_pane_t3

0x1576,	// (0x00032e40) main_cset_text_pane_t4

0x1584,	// (0x00032e4e) main_cset_text_pane_t5

0x1592,	// (0x00032e5c) main_cset_text_pane_t6

0x15a0,	// (0x00032e6a) main_cset_text_pane_t7

0x0006,

0xfa51,	// (0x0004131b) main_cset_text_pane_t

0x52ac,	// (0x00036b76) main_cam4_burst_pane

0x52ac,	// (0x00036b76) main_cam5_pane

0xa671,	// (0x0003bf3b) bg_button_pane_cp019

0xa67a,	// (0x0003bf44) bg_button_pane_cp020

0x133d,	// (0x00032c07) main_cset_slider_pane_g7_ParamLimits

0x133d,	// (0x00032c07) main_cset_slider_pane_g7

0x1349,	// (0x00032c13) main_cset_slider_pane_g8_ParamLimits

0x1349,	// (0x00032c13) main_cset_slider_pane_g8

0xa7c3,	// (0x0003c08d) main_cset_slider_pane_g9_ParamLimits

0xa7c3,	// (0x0003c08d) main_cset_slider_pane_g9

0xa7cf,	// (0x0003c099) main_cset_slider_pane_g10_ParamLimits

0xa7cf,	// (0x0003c099) main_cset_slider_pane_g10

0xa7db,	// (0x0003c0a5) main_cset_slider_pane_g11_ParamLimits

0xa7db,	// (0x0003c0a5) main_cset_slider_pane_g11

0xa7e7,	// (0x0003c0b1) main_cset_slider_pane_g12_ParamLimits

0xa7e7,	// (0x0003c0b1) main_cset_slider_pane_g12

0xa7f3,	// (0x0003c0bd) main_cset_slider_pane_g13_ParamLimits

0xa7f3,	// (0x0003c0bd) main_cset_slider_pane_g13

0xa7ff,	// (0x0003c0c9) main_cset_slider_pane_g14_ParamLimits

0xa7ff,	// (0x0003c0c9) main_cset_slider_pane_g14

0xa80b,	// (0x0003c0d5) main_cset_slider_pane_g15_ParamLimits

0xa80b,	// (0x0003c0d5) main_cset_slider_pane_g15

0x138f,	// (0x00032c59) main_cset_slider_pane_t14_ParamLimits

0x138f,	// (0x00032c59) main_cset_slider_pane_t14

0x13c8,	// (0x00032c92) main_cset_slider_pane_t15_ParamLimits

0x13c8,	// (0x00032c92) main_cset_slider_pane_t15

0xad02,	// (0x0003c5cc) aid_cam4_burst_size_cell_ParamLimits

0xad02,	// (0x0003c5cc) aid_cam4_burst_size_cell

0xad1e,	// (0x0003c5e8) grid_cam4_burst_pane_ParamLimits

0xad1e,	// (0x0003c5e8) grid_cam4_burst_pane

0xad4e,	// (0x0003c618) linegrid_cam4_burst_pane_ParamLimits

0xad4e,	// (0x0003c618) linegrid_cam4_burst_pane

0xad6e,	// (0x0003c638) scroll_pane_cp30_ParamLimits

0xad6e,	// (0x0003c638) scroll_pane_cp30

0xad7a,	// (0x0003c644) cell_cam4_burst_pane_ParamLimits

0xad7a,	// (0x0003c644) cell_cam4_burst_pane

0x15ba,	// (0x00032e84) linegrid_cam4_burst_pane_g1_ParamLimits

0x15ba,	// (0x00032e84) linegrid_cam4_burst_pane_g1

0xadb6,	// (0x0003c680) linegrid_cam4_burst_pane_g2_ParamLimits

0xadb6,	// (0x0003c680) linegrid_cam4_burst_pane_g2

0x15c7,	// (0x00032e91) linegrid_cam4_burst_pane_g3_ParamLimits

0x15c7,	// (0x00032e91) linegrid_cam4_burst_pane_g3

0x0002,

0xfa60,	// (0x0004132a) linegrid_cam4_burst_pane_g_ParamLimits

0xfa60,	// (0x0004132a) linegrid_cam4_burst_pane_g

0xadc7,	// (0x0003c691) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xadc7,	// (0x0003c691) linegrid_cam4_burst_pane_g3_copy1

0x15d4,	// (0x00032e9e) linegrid_cam4_burst_pane_g4_ParamLimits

0x15d4,	// (0x00032e9e) linegrid_cam4_burst_pane_g4

0xade1,	// (0x0003c6ab) linegrid_cam4_burst_pane_g5_ParamLimits

0xade1,	// (0x0003c6ab) linegrid_cam4_burst_pane_g5

0xadf2,	// (0x0003c6bc) linegrid_cam4_burst_pane_g6_ParamLimits

0xadf2,	// (0x0003c6bc) linegrid_cam4_burst_pane_g6

0x15e1,	// (0x00032eab) linegrid_cam4_burst_pane_g7_ParamLimits

0x15e1,	// (0x00032eab) linegrid_cam4_burst_pane_g7

0xae03,	// (0x0003c6cd) cell_cam4_burst_pane_g1

0x15fa,	// (0x00032ec4) main_cam5_pane_t1_ParamLimits

0x15fa,	// (0x00032ec4) main_cam5_pane_t1

0x160c,	// (0x00032ed6) main_cam5_pane_t2_ParamLimits

0x160c,	// (0x00032ed6) main_cam5_pane_t2

0x161e,	// (0x00032ee8) main_cam5_pane_t3_ParamLimits

0x161e,	// (0x00032ee8) main_cam5_pane_t3

0x1630,	// (0x00032efa) main_cam5_pane_t4_ParamLimits

0x1630,	// (0x00032efa) main_cam5_pane_t4

0x1648,	// (0x00032f12) main_cam5_pane_t5_ParamLimits

0x1648,	// (0x00032f12) main_cam5_pane_t5

0x165c,	// (0x00032f26) main_cam5_pane_t6_ParamLimits

0x165c,	// (0x00032f26) main_cam5_pane_t6

0x1670,	// (0x00032f3a) main_cam5_pane_t7_ParamLimits

0x1670,	// (0x00032f3a) main_cam5_pane_t7

0x1682,	// (0x00032f4c) main_cam5_pane_t8_ParamLimits

0x1682,	// (0x00032f4c) main_cam5_pane_t8

0x169e,	// (0x00032f68) main_cam5_pane_t9_ParamLimits

0x169e,	// (0x00032f68) main_cam5_pane_t9

0x16b0,	// (0x00032f7a) main_cam5_pane_t10_ParamLimits

0x16b0,	// (0x00032f7a) main_cam5_pane_t10

0x16c2,	// (0x00032f8c) main_cam5_pane_t11_ParamLimits

0x16c2,	// (0x00032f8c) main_cam5_pane_t11

0x16d4,	// (0x00032f9e) main_cam5_pane_t12_ParamLimits

0x16d4,	// (0x00032f9e) main_cam5_pane_t12

0x16e9,	// (0x00032fb3) main_cam5_pane_t13_ParamLimits

0x16e9,	// (0x00032fb3) main_cam5_pane_t13

0x000c,

0xfa6c,	// (0x00041336) main_cam5_pane_t_ParamLimits

0xfa6c,	// (0x00041336) main_cam5_pane_t

0x5506,	// (0x00036dd0) popup_scut_keymap_window_ParamLimits

0x5506,	// (0x00036dd0) popup_scut_keymap_window

0xae16,	// (0x0003c6e0) aid_size_cell_brow_shortcut

0xdbf9,	// (0x0003f4c3) bg_popup_window_pane_cp010

0xae22,	// (0x0003c6ec) grid_scut_pane

0xae2e,	// (0x0003c6f8) cell_scut_pane_ParamLimits

0xae2e,	// (0x0003c6f8) cell_scut_pane

0xae45,	// (0x0003c70f) cell_scut_pane_g1

0x1706,	// (0x00032fd0) cell_scut_pane_t1

0x1715,	// (0x00032fdf) cell_scut_pane_t2

0xae4e,	// (0x0003c718) cell_scut_pane_t3

0x0002,

0xfa87,	// (0x00041351) cell_scut_pane_t

0x8ed9,	// (0x0003a7a3) main_mup3_pane_g8_ParamLimits

0x8ed9,	// (0x0003a7a3) main_mup3_pane_g8

0xa286,	// (0x0003bb50) area_vitu2_query_pane_ParamLimits

0xa286,	// (0x0003bb50) area_vitu2_query_pane

0x45fc,	// (0x00035ec6) input_focus_pane_cp08

0x1724,	// (0x00032fee) area_vitu2_query_pane_g1

0x46fd,	// (0x00035fc7) area_vitu2_query_pane_g2

0x0001,

0xfa8e,	// (0x00041358) area_vitu2_query_pane_g

0xae5c,	// (0x0003c726) area_vitu2_query_pane_t1_ParamLimits

0xae5c,	// (0x0003c726) area_vitu2_query_pane_t1

0xae70,	// (0x0003c73a) area_vitu2_query_pane_t2_ParamLimits

0xae70,	// (0x0003c73a) area_vitu2_query_pane_t2

0x470e,	// (0x00035fd8) area_vitu2_query_pane_t3_ParamLimits

0x470e,	// (0x00035fd8) area_vitu2_query_pane_t3

0x4736,	// (0x00036000) area_vitu2_query_pane_t4_ParamLimits

0x4736,	// (0x00036000) area_vitu2_query_pane_t4

0x475e,	// (0x00036028) area_vitu2_query_pane_t5_ParamLimits

0x475e,	// (0x00036028) area_vitu2_query_pane_t5

0x4786,	// (0x00036050) area_vitu2_query_pane_t6_ParamLimits

0x4786,	// (0x00036050) area_vitu2_query_pane_t6

0x0006,

0xfa93,	// (0x0004135d) area_vitu2_query_pane_t_ParamLimits

0xfa93,	// (0x0004135d) area_vitu2_query_pane_t

0xae84,	// (0x0003c74e) bg_button_pane_cp018

0xae92,	// (0x0003c75c) bg_button_pane_cp021

0x47d2,	// (0x0003609c) bg_button_pane_cp022

0x47e3,	// (0x000360ad) input_focus_pane_cp09

0x747f,	// (0x00038d49) aid_size_touch_mv_arrow_left

0x74a8,	// (0x00038d72) aid_size_touch_mv_arrow_right

0xa823,	// (0x0003c0ed) main_cset_slider_pane_g16_ParamLimits

0xa823,	// (0x0003c0ed) main_cset_slider_pane_g16

0xa831,	// (0x0003c0fb) main_cset_slider_pane_g17_ParamLimits

0xa831,	// (0x0003c0fb) main_cset_slider_pane_g17

0xae03,	// (0x0003c6cd) cell_cam4_burst_pane_g1_ParamLimits

0x52ac,	// (0x00036b76) compa_mode_pane

0xaa34,	// (0x0003c2fe) popup_vtel_slider_window_g3_ParamLimits

0xaa34,	// (0x0003c2fe) popup_vtel_slider_window_g3

0xaa48,	// (0x0003c312) popup_vtel_slider_window_g4_ParamLimits

0xaa48,	// (0x0003c312) popup_vtel_slider_window_g4

0xaa5c,	// (0x0003c326) popup_vtel_slider_window_t1_ParamLimits

0xaa5c,	// (0x0003c326) popup_vtel_slider_window_t1

0x52ac,	// (0x00036b76) main_cl_pane

0xf027,	// (0x000408f1) popup_imed_adjust2_window_ParamLimits

0xefff,	// (0x000408c9) bg_tb_trans_pane_cp05_ParamLimits

0x0921,	// (0x000321eb) popup_imed_adjust2_window_g1_ParamLimits

0x0930,	// (0x000321fa) popup_imed_adjust2_window_g2_ParamLimits

0x0930,	// (0x000321fa) popup_imed_adjust2_window_g2

0x093c,	// (0x00032206) popup_imed_adjust2_window_g3_ParamLimits

0x093c,	// (0x00032206) popup_imed_adjust2_window_g3

0x0002,

0xf7fe,	// (0x000410c8) popup_imed_adjust2_window_g_ParamLimits

0xf7fe,	// (0x000410c8) popup_imed_adjust2_window_g

0x0948,	// (0x00032212) popup_imed_adjust2_window_t1_ParamLimits

0x0960,	// (0x0003222a) slider_imed_adjust_pane_ParamLimits

0x0974,	// (0x0003223e) slider_imed_adjust_pane_g1_ParamLimits

0x0984,	// (0x0003224e) slider_imed_adjust_pane_g2_ParamLimits

0x0994,	// (0x0003225e) slider_imed_adjust_pane_g3_ParamLimits

0x09a5,	// (0x0003226f) slider_imed_adjust_pane_g4_ParamLimits

0xf805,	// (0x000410cf) slider_imed_adjust_pane_g_ParamLimits

0x9fd4,	// (0x0003b89e) aid_touch_area_cam4_ParamLimits

0x9fd4,	// (0x0003b89e) aid_touch_area_cam4

0x9fe4,	// (0x0003b8ae) battery_pane_cp01

0xa06b,	// (0x0003b935) main_camera4_pane_g6_ParamLimits

0xa06b,	// (0x0003b935) main_camera4_pane_g6

0xa089,	// (0x0003b953) main_camera4_pane_t2_ParamLimits

0xa089,	// (0x0003b953) main_camera4_pane_t2

0x0001,

0xf908,	// (0x000411d2) main_camera4_pane_t_ParamLimits

0xf908,	// (0x000411d2) main_camera4_pane_t

0xa110,	// (0x0003b9da) aid_touch_area_vid4_ParamLimits

0xa110,	// (0x0003b9da) aid_touch_area_vid4

0xa150,	// (0x0003ba1a) main_video4_pane_g5_ParamLimits

0xa150,	// (0x0003ba1a) main_video4_pane_g5

0xa172,	// (0x0003ba3c) vid4_progress_pane_ParamLimits

0xa172,	// (0x0003ba3c) vid4_progress_pane

0x1355,	// (0x00032c1f) main_cset_slider_pane_g18_ParamLimits

0x1355,	// (0x00032c1f) main_cset_slider_pane_g18

0x15ee,	// (0x00032eb8) cell_cam4_burst_pane_g2_ParamLimits

0x15ee,	// (0x00032eb8) cell_cam4_burst_pane_g2

0x0001,

0xfa67,	// (0x00041331) cell_cam4_burst_pane_g_ParamLimits

0xfa67,	// (0x00041331) cell_cam4_burst_pane_g

0xae9e,	// (0x0003c768) bg_cl_pane_ParamLimits

0xae9e,	// (0x0003c768) bg_cl_pane

0xaeaa,	// (0x0003c774) cl_header_pane_ParamLimits

0xaeaa,	// (0x0003c774) cl_header_pane

0xaeb6,	// (0x0003c780) cl_listscroll_pane_ParamLimits

0xaeb6,	// (0x0003c780) cl_listscroll_pane

0x17cc,	// (0x00033096) bg_cl_pane_g1

0x17d4,	// (0x0003309e) bg_cl_pane_g2

0x17dc,	// (0x000330a6) bg_cl_pane_g3

0x17e4,	// (0x000330ae) bg_cl_pane_g4

0x17ec,	// (0x000330b6) bg_cl_pane_g5

0x17f4,	// (0x000330be) bg_cl_pane_g6

0x17fc,	// (0x000330c6) bg_cl_pane_g7

0x1804,	// (0x000330ce) bg_cl_pane_g8

0x180c,	// (0x000330d6) bg_cl_pane_g9

0x0008,

0xfaa2,	// (0x0004136c) bg_cl_pane_g

0xaec2,	// (0x0003c78c) aid_height_cl_leading_ParamLimits

0xaec2,	// (0x0003c78c) aid_height_cl_leading

0xaece,	// (0x0003c798) aid_height_cl_text_ParamLimits

0xaece,	// (0x0003c798) aid_height_cl_text

0x553d,	// (0x00036e07) bg_cl_header_pane_ParamLimits

0x553d,	// (0x00036e07) bg_cl_header_pane

0xaee6,	// (0x0003c7b0) cl_header_pane_g1_ParamLimits

0xaee6,	// (0x0003c7b0) cl_header_pane_g1

0xaef3,	// (0x0003c7bd) cl_header_pane_t1_ParamLimits

0xaef3,	// (0x0003c7bd) cl_header_pane_t1

0x1814,	// (0x000330de) cl_list_pane

0x1328,	// (0x00032bf2) hc_scroll_pane_cp01

0xd4ee,	// (0x0003edb8) bg_cl_header_pane_g1

0x120e,	// (0x00032ad8) bg_cl_header_pane_g2

0xd50e,	// (0x0003edd8) bg_cl_header_pane_g3

0x121e,	// (0x00032ae8) bg_cl_header_pane_g4

0x1216,	// (0x00032ae0) bg_cl_header_pane_g5

0x14bb,	// (0x00032d85) bg_cl_header_pane_g6

0x1236,	// (0x00032b00) bg_cl_header_pane_g7

0x123e,	// (0x00032b08) bg_cl_header_pane_g8

0x122e,	// (0x00032af8) bg_cl_header_pane_g9

0x0008,

0xfab5,	// (0x0004137f) bg_cl_header_pane_g

0xaf05,	// (0x0003c7cf) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xaf05,	// (0x0003c7cf) hc_cl_list_double_graphic_heading_pane

0xaf16,	// (0x0003c7e0) hc_cl_list_single_graphic_pane_ParamLimits

0xaf16,	// (0x0003c7e0) hc_cl_list_single_graphic_pane

0xaf2f,	// (0x0003c7f9) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xaf2f,	// (0x0003c7f9) hc_cl_list_single_graphic_pane_g1

0xaf3b,	// (0x0003c805) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xaf3b,	// (0x0003c805) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfac8,	// (0x00041392) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfac8,	// (0x00041392) hc_cl_list_single_graphic_pane_g

0xaf4f,	// (0x0003c819) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xaf4f,	// (0x0003c819) hc_cl_list_single_graphic_pane_t1

0xaf2f,	// (0x0003c7f9) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xaf2f,	// (0x0003c7f9) hc_cl_list_double_graphic_heading_pane_g1

0xaf64,	// (0x0003c82e) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xaf64,	// (0x0003c82e) hc_cl_list_double_graphic_heading_pane_g2

0xaf78,	// (0x0003c842) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xaf78,	// (0x0003c842) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfacd,	// (0x00041397) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfacd,	// (0x00041397) hc_cl_list_double_graphic_heading_pane_g

0xaf8c,	// (0x0003c856) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xaf8c,	// (0x0003c856) hc_cl_list_double_graphic_heading_pane_t1

0xafa1,	// (0x0003c86b) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xafa1,	// (0x0003c86b) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfad4,	// (0x0004139e) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfad4,	// (0x0004139e) hc_cl_list_double_graphic_heading_pane_t

0xafbe,	// (0x0003c888) vid4_progress_pane_g1

0xafce,	// (0x0003c898) vid4_progress_pane_g2

0x7acb,	// (0x00039395) vid4_progress_pane_g3

0xafde,	// (0x0003c8a8) vid4_progress_pane_g4

0x0004,

0xfad9,	// (0x000413a3) vid4_progress_pane_g

0xaffc,	// (0x0003c8c6) vid4_progress_pane_t1

0xb011,	// (0x0003c8db) vid4_progress_pane_t2

0x0002,

0xfae4,	// (0x000413ae) vid4_progress_pane_t

0xb03c,	// (0x0003c906) wait_bar_pane_cp07

0x0209,	// (0x00031ad3) blid_firmament_pane_ParamLimits

0x024c,	// (0x00031b16) popup_blid_sat_info2_window_g1

0x0270,	// (0x00031b3a) popup_blid_sat_info2_window_t3

0x027e,	// (0x00031b48) popup_blid_sat_info2_window_t4

0x028c,	// (0x00031b56) popup_blid_sat_info2_window_t5

0x029a,	// (0x00031b64) popup_blid_sat_info2_window_t6

0x02aa,	// (0x00031b74) popup_blid_sat_info2_window_t7

0x02b8,	// (0x00031b82) popup_blid_sat_info2_window_t8

0x02c6,	// (0x00031b90) popup_blid_sat_info2_window_t9

0x02d4,	// (0x00031b9e) popup_blid_sat_info2_window_t10

0x0396,	// (0x00031c60) aid_firma_cardinal_ParamLimits

0x03aa,	// (0x00031c74) blid_firmament_pane_t1_ParamLimits

0x03c1,	// (0x00031c8b) blid_firmament_pane_t2_ParamLimits

0x03d8,	// (0x00031ca2) blid_firmament_pane_t3_ParamLimits

0x03ef,	// (0x00031cb9) blid_firmament_pane_t4_ParamLimits

0xf6f7,	// (0x00040fc1) blid_firmament_pane_t_ParamLimits

0x0406,	// (0x00031cd0) blid_sat_info_pane_ParamLimits

0xe2c7,	// (0x0003fb91) main_cam_set_pane_ParamLimits

0x965e,	// (0x0003af28) aid_size_cell_colour_35_ParamLimits

0x9678,	// (0x0003af42) aid_size_cell_colour_112_ParamLimits

0x968f,	// (0x0003af59) aid_size_cell_effect_ParamLimits

0xe2c7,	// (0x0003fb91) bg_tb_trans_pane_cp02_ParamLimits

0xe2d5,	// (0x0003fb9f) heading_imed_pane_ParamLimits

0x96a9,	// (0x0003af73) listscroll_imed_pane_ParamLimits

0xe631,	// (0x0003fefb) popup_call2_audio_first_window_g5_ParamLimits

0xe631,	// (0x0003fefb) popup_call2_audio_first_window_g5

0x9d91,	// (0x0003b65b) aid_size_touch_image3_arrow_left_ParamLimits

0x9d91,	// (0x0003b65b) aid_size_touch_image3_arrow_left

0x9da7,	// (0x0003b671) aid_size_touch_image3_arrow_right_ParamLimits

0x9da7,	// (0x0003b671) aid_size_touch_image3_arrow_right

0xb027,	// (0x0003c8f1) vid4_progress_pane_t3

0x9946,	// (0x0003b210) main_hwr_training_symbol_option_pane_ParamLimits

0x9946,	// (0x0003b210) main_hwr_training_symbol_option_pane

0x0c0e,	// (0x000324d8) popup_hwr_training_preview_window_ParamLimits

0x0c0e,	// (0x000324d8) popup_hwr_training_preview_window

0x99a7,	// (0x0003b271) hwr_training_navi_pane_g5_ParamLimits

0x99a7,	// (0x0003b271) hwr_training_navi_pane_g5

0x11ee,	// (0x00032ab8) popup_char_count_window

0x553d,	// (0x00036e07) bg_popup_sub_pane_cp20_ParamLimits

0xab52,	// (0x0003c41c) list_vitu2_match_list_pane_ParamLimits

0xab5e,	// (0x0003c428) vitu2_page_scroll_pane_ParamLimits

0xab5e,	// (0x0003c428) vitu2_page_scroll_pane

0x190f,	// (0x000331d9) list_single_hwr_training_symbol_option_pane_ParamLimits

0x190f,	// (0x000331d9) list_single_hwr_training_symbol_option_pane

0x1922,	// (0x000331ec) list_single_hwr_training_symbol_option_pane_g1

0x192a,	// (0x000331f4) list_single_hwr_training_symbol_option_pane_t1

0x1938,	// (0x00033202) bg_button_pane_cp023

0x1941,	// (0x0003320b) bg_button_pane_cp024

0xb04e,	// (0x0003c918) vitu2_page_scroll_pane_g1

0xb056,	// (0x0003c920) vitu2_page_scroll_pane_g2

0x0001,

0xfaeb,	// (0x000413b5) vitu2_page_scroll_pane_g

0xb05e,	// (0x0003c928) vitu2_page_scroll_pane_t1

0x1974,	// (0x0003323e) popup_char_count_window_g1

0x197d,	// (0x00033247) popup_char_count_window_g2

0x1986,	// (0x00033250) popup_char_count_window_g3

0x0002,

0xfaf0,	// (0x000413ba) popup_char_count_window_g

0x198f,	// (0x00033259) popup_char_count_window_t1

0x52ac,	// (0x00036b76) main_vded2_pane

0x090d,	// (0x000321d7) aid_size_cell_imed_line

0x0917,	// (0x000321e1) grid_imed_line_width_pane

0xa1db,	// (0x0003baa5) vid4_indicators_pane_g4

0x199d,	// (0x00033267) cell_imed_line_width_pane_ParamLimits

0x199d,	// (0x00033267) cell_imed_line_width_pane

0x19b1,	// (0x0003327b) cell_imed_line_width_pane_g1

0x01b7,	// (0x00031a81) cell_imed_line_width_pane_g2

0x0001,

0xfaf7,	// (0x000413c1) cell_imed_line_width_pane_g

0xb06d,	// (0x0003c937) main_vded2_pane_g1_ParamLimits

0xb06d,	// (0x0003c937) main_vded2_pane_g1

0xb07a,	// (0x0003c944) main_vded2_pane_g2_ParamLimits

0xb07a,	// (0x0003c944) main_vded2_pane_g2

0x0001,

0xfafc,	// (0x000413c6) main_vded2_pane_g_ParamLimits

0xfafc,	// (0x000413c6) main_vded2_pane_g

0xb088,	// (0x0003c952) vded2_slider_pane_ParamLimits

0xb088,	// (0x0003c952) vded2_slider_pane

0xb095,	// (0x0003c95f) aid_size_touch_vded2_end

0xb09f,	// (0x0003c969) aid_size_touch_vded2_playhead

0x19ba,	// (0x00033284) aid_size_touch_vded2_start

0x19c2,	// (0x0003328c) vded2_slider_bg_pane

0x19cb,	// (0x00033295) vded2_slider_pane_g1

0x19d4,	// (0x0003329e) vded2_slider_pane_g2

0xb0a7,	// (0x0003c971) vded2_slider_pane_g3

0x0002,

0xfb01,	// (0x000413cb) vded2_slider_pane_g

0x19dc,	// (0x000332a6) vded2_slider_bg_pane_g1

0x19e5,	// (0x000332af) vded2_slider_bg_pane_g2

0x19ee,	// (0x000332b8) vded2_slider_bg_pane_g3

0x0002,

0xfb08,	// (0x000413d2) vded2_slider_bg_pane_g

0x7ae3,	// (0x000393ad) aid_postcard_touch_down_pane_ParamLimits

0x7ae3,	// (0x000393ad) aid_postcard_touch_down_pane

0x7af3,	// (0x000393bd) aid_postcard_touch_up_pane_ParamLimits

0x7af3,	// (0x000393bd) aid_postcard_touch_up_pane

0x52ac,	// (0x00036b76) main_blid2_pane

0xf00d,	// (0x000408d7) popup_blid2_search_window

0x52ac,	// (0x00036b76) blid2_gps_pane

0x52ac,	// (0x00036b76) blid2_navig_pane

0x52ac,	// (0x00036b76) blid2_search_pane

0x52ac,	// (0x00036b76) blid2_tripm_pane

0xb0b0,	// (0x0003c97a) blid2_search_pane_g1_ParamLimits

0xb0b0,	// (0x0003c97a) blid2_search_pane_g1

0xb0c0,	// (0x0003c98a) blid2_search_pane_t1_ParamLimits

0xb0c0,	// (0x0003c98a) blid2_search_pane_t1

0xb0d2,	// (0x0003c99c) aid_size_cell_blid2_gps_ParamLimits

0xb0d2,	// (0x0003c99c) aid_size_cell_blid2_gps

0xb0e2,	// (0x0003c9ac) blid2_gps_pane_g1_ParamLimits

0xb0e2,	// (0x0003c9ac) blid2_gps_pane_g1

0xb0ee,	// (0x0003c9b8) grid_blid2_satellite_pane_ParamLimits

0xb0ee,	// (0x0003c9b8) grid_blid2_satellite_pane

0xb0fe,	// (0x0003c9c8) blid2_navig_pane_g1_ParamLimits

0xb0fe,	// (0x0003c9c8) blid2_navig_pane_g1

0xb10a,	// (0x0003c9d4) blid2_navig_pane_t1_ParamLimits

0xb10a,	// (0x0003c9d4) blid2_navig_pane_t1

0xb11c,	// (0x0003c9e6) blid2_navig_pane_t2_ParamLimits

0xb11c,	// (0x0003c9e6) blid2_navig_pane_t2

0x0001,

0xfb0f,	// (0x000413d9) blid2_navig_pane_t_ParamLimits

0xfb0f,	// (0x000413d9) blid2_navig_pane_t

0xb12e,	// (0x0003c9f8) blid2_navig_ring_pane_ParamLimits

0xb12e,	// (0x0003c9f8) blid2_navig_ring_pane

0xb13e,	// (0x0003ca08) blid2_speed_pane_ParamLimits

0xb13e,	// (0x0003ca08) blid2_speed_pane

0xb14a,	// (0x0003ca14) blid2_tripm_pane_g1_ParamLimits

0xb14a,	// (0x0003ca14) blid2_tripm_pane_g1

0xb15a,	// (0x0003ca24) blid2_tripm_pane_g2_ParamLimits

0xb15a,	// (0x0003ca24) blid2_tripm_pane_g2

0xb166,	// (0x0003ca30) blid2_tripm_pane_g3_ParamLimits

0xb166,	// (0x0003ca30) blid2_tripm_pane_g3

0xb172,	// (0x0003ca3c) blid2_tripm_pane_g4_ParamLimits

0xb172,	// (0x0003ca3c) blid2_tripm_pane_g4

0xb17e,	// (0x0003ca48) blid2_tripm_pane_g5_ParamLimits

0xb17e,	// (0x0003ca48) blid2_tripm_pane_g5

0x0005,

0xfb14,	// (0x000413de) blid2_tripm_pane_g_ParamLimits

0xfb14,	// (0x000413de) blid2_tripm_pane_g

0xb19a,	// (0x0003ca64) blid2_tripm_pane_t1_ParamLimits

0xb19a,	// (0x0003ca64) blid2_tripm_pane_t1

0xb1ae,	// (0x0003ca78) blid2_tripm_pane_t2_ParamLimits

0xb1ae,	// (0x0003ca78) blid2_tripm_pane_t2

0xb1c0,	// (0x0003ca8a) blid2_tripm_pane_t3_ParamLimits

0xb1c0,	// (0x0003ca8a) blid2_tripm_pane_t3

0x0003,

0xfb21,	// (0x000413eb) blid2_tripm_pane_t_ParamLimits

0xfb21,	// (0x000413eb) blid2_tripm_pane_t

0xb1f2,	// (0x0003cabc) cell_blid2_satellite_pane_ParamLimits

0xb1f2,	// (0x0003cabc) cell_blid2_satellite_pane

0xb20c,	// (0x0003cad6) cell_blid2_satellite_pane_g1

0x19f7,	// (0x000332c1) cell_blid2_satellite_pane_t1

0x0416,	// (0x00031ce0) blid2_speed_pane_g1

0x1a05,	// (0x000332cf) blid2_speed_pane_t1

0x1a13,	// (0x000332dd) blid2_speed_pane_t2

0x0001,

0xfb2a,	// (0x000413f4) blid2_speed_pane_t

0x0416,	// (0x00031ce0) blid2_navig_ring_pane_g1

0xb215,	// (0x0003cadf) blid2_navig_ring_pane_g2

0xb21d,	// (0x0003cae7) blid2_navig_ring_pane_g3

0xb225,	// (0x0003caef) blid2_navig_ring_pane_g4

0xb22d,	// (0x0003caf7) blid2_navig_ring_pane_g5

0x0004,

0xfb2f,	// (0x000413f9) blid2_navig_ring_pane_g

0x52ac,	// (0x00036b76) bg_popup_window_pane_cp011

0x1a21,	// (0x000332eb) popup_blid2_search_window_g1

0x1a29,	// (0x000332f3) popup_blid2_search_window_t1

0x1a37,	// (0x00033301) popup_blid2_search_window_t2

0x0001,

0xfb3a,	// (0x00041404) popup_blid2_search_window_t

0xd3fd,	// (0x0003ecc7) main_browser_pane_g1

0xd11a,	// (0x0003e9e4) main_browser_pane_ParamLimits

0xe2c7,	// (0x0003fb91) bg_button_pane_cp011_ParamLimits

0xa444,	// (0x0003bd0e) cell_vitu2_function_pane_g1_ParamLimits

0xefff,	// (0x000408c9) bg_popup_sub_pane_cp22_ParamLimits

0x45fc,	// (0x00035ec6) input_focus_pane_cp08_ParamLimits

0xacaf,	// (0x0003c579) popup_vitu2_query_button_pane_ParamLimits

0xacaf,	// (0x0003c579) popup_vitu2_query_button_pane

0x4613,	// (0x00035edd) popup_vitu2_query_input_button_pane

0x1538,	// (0x00032e02) popup_vitu2_query_window_g1_ParamLimits

0x461d,	// (0x00035ee7) popup_vitu2_query_window_g2_ParamLimits

0xfa3b,	// (0x00041305) popup_vitu2_query_window_g_ParamLimits

0x52ac,	// (0x00036b76) bg_button_pane_cp026

0xb235,	// (0x0003caff) popup_vitu2_query_input_button_pane_g1

0x52ac,	// (0x00036b76) bg_button_pane_cp025

0x1a45,	// (0x0003330f) popup_vitu2_query_button_pane_t1

0x8c30,	// (0x0003a4fa) main_mp3_pane_t6

0x8c40,	// (0x0003a50a) popup_slider_window_cp01

0xa0bf,	// (0x0003b989) cam4_battery_pane

0xa19e,	// (0x0003ba68) cam4_battery_pane_cp02

0xafb6,	// (0x0003c880) cam4_battery_pane_cp01

0xafb6,	// (0x0003c880) cam4_battery_pane_cp03

0x0416,	// (0x00031ce0) cam4_battery_pane_g1

0x0f61,	// (0x0003282b) cam4_battery_pane_g2

0x0001,

0xfb3f,	// (0x00041409) cam4_battery_pane_g

0x02e2,	// (0x00031bac) popup_blid_sat_info2_window_t11

0x747f,	// (0x00038d49) aid_size_touch_mv_arrow_left_ParamLimits

0x74a8,	// (0x00038d72) aid_size_touch_mv_arrow_right_ParamLimits

0xdb59,	// (0x0003f423) navi_pane_g1_ParamLimits

0x74d1,	// (0x00038d9b) navi_pane_g2_ParamLimits

0x74ff,	// (0x00038dc9) navi_pane_g3_ParamLimits

0xf409,	// (0x00040cd3) navi_pane_g_ParamLimits

0x7559,	// (0x00038e23) navi_pane_mv_t1_ParamLimits

0x96b5,	// (0x0003af7f) grid_imed_effect_pane_ParamLimits

0x6237,	// (0x00037b01) aid_placing_vt_slider_lsc

0xd34e,	// (0x0003ec18) aid_placing_vt_slider_prt

0xe2c7,	// (0x0003fb91) bg_tb_trans_pane_cp01_ParamLimits

0x05a2,	// (0x00031e6c) popup_image_details_window_g1_ParamLimits

0x05b5,	// (0x00031e7f) popup_image_details_window_g2_ParamLimits

0x05ca,	// (0x00031e94) popup_image_details_window_g3_ParamLimits

0x05ca,	// (0x00031e94) popup_image_details_window_g3

0xf73c,	// (0x00041006) popup_image_details_window_g_ParamLimits

0x05de,	// (0x00031ea8) popup_image_details_window_t1_ParamLimits

0x05f0,	// (0x00031eba) popup_image_details_window_t2_ParamLimits

0x0609,	// (0x00031ed3) popup_image_details_window_t3_ParamLimits

0x061d,	// (0x00031ee7) popup_image_details_window_t4_ParamLimits

0x0638,	// (0x00031f02) popup_image_details_window_t5_ParamLimits

0xf743,	// (0x0004100d) popup_image_details_window_t_ParamLimits

0xaeda,	// (0x0003c7a4) cl_header_name_pane_ParamLimits

0xaeda,	// (0x0003c7a4) cl_header_name_pane

0xb23d,	// (0x0003cb07) cl_header_name_pane_t1_ParamLimits

0xb23d,	// (0x0003cb07) cl_header_name_pane_t1

0xb254,	// (0x0003cb1e) cl_header_name_pane_t2_ParamLimits

0xb254,	// (0x0003cb1e) cl_header_name_pane_t2

0xb27e,	// (0x0003cb48) cl_header_name_pane_t3_ParamLimits

0xb27e,	// (0x0003cb48) cl_header_name_pane_t3

0x0002,

0xfb44,	// (0x0004140e) cl_header_name_pane_t_ParamLimits

0xfb44,	// (0x0004140e) cl_header_name_pane_t

0x752a,	// (0x00038df4) navi_pane_mv_g2_ParamLimits

0x117c,	// (0x00032a46) field_vitu2_entry_pane_g1_ParamLimits

0x1188,	// (0x00032a52) field_vitu2_entry_pane_g2_ParamLimits

0x1194,	// (0x00032a5e) field_vitu2_entry_pane_g3_ParamLimits

0x1194,	// (0x00032a5e) field_vitu2_entry_pane_g3

0xf93a,	// (0x00041204) field_vitu2_entry_pane_g_ParamLimits

0xa3d4,	// (0x0003bc9e) cell_vitu2_itu_pane_g1_ParamLimits

0xa3e4,	// (0x0003bcae) cell_vitu2_itu_pane_g2_ParamLimits

0xa3e4,	// (0x0003bcae) cell_vitu2_itu_pane_g2

0x0001,

0xf946,	// (0x00041210) cell_vitu2_itu_pane_g_ParamLimits

0xf946,	// (0x00041210) cell_vitu2_itu_pane_g

0xe2c7,	// (0x0003fb91) bg_vkb2_func_pane_cp05_ParamLimits

0xe2c7,	// (0x0003fb91) bg_vkb2_func_pane_cp05

0xe2c7,	// (0x0003fb91) bg_vkb2_func_pane_cp03

0xe2c7,	// (0x0003fb91) bg_vkb2_func_pane_cp04

0xe2c7,	// (0x0003fb91) bg_vkb2_func_pane_cp10_ParamLimits

0xe2c7,	// (0x0003fb91) bg_vkb2_func_pane_cp10

0x47d2,	// (0x0003609c) bg_vkb2_func_pane_cp08

0xae84,	// (0x0003c74e) bg_vkb2_func_pane_cp06

0xae92,	// (0x0003c75c) bg_vkb2_func_pane_cp07

0x194a,	// (0x00033214) bg_vkb2_func_pane_cp11_ParamLimits

0x194a,	// (0x00033214) bg_vkb2_func_pane_cp11

0x195f,	// (0x00033229) bg_vkb2_func_pane_cp12_ParamLimits

0x195f,	// (0x00033229) bg_vkb2_func_pane_cp12

0x52ac,	// (0x00036b76) bg_vkb2_func_pane_cp09

0x120e,	// (0x00032ad8) bg_vkb2_func_pane_g1

0xd50e,	// (0x0003edd8) bg_vkb2_func_pane_g2

0x1216,	// (0x00032ae0) bg_vkb2_func_pane_g3

0x121e,	// (0x00032ae8) bg_vkb2_func_pane_g4

0x14bb,	// (0x00032d85) bg_vkb2_func_pane_g5

0x1236,	// (0x00032b00) bg_vkb2_func_pane_g6

0x123e,	// (0x00032b08) bg_vkb2_func_pane_g7

0x122e,	// (0x00032af8) bg_vkb2_func_pane_g8

0xd4ee,	// (0x0003edb8) bg_vkb2_func_pane_g9

0x0008,

0xfb4b,	// (0x00041415) bg_vkb2_func_pane_g

0xb18c,	// (0x0003ca56) blid2_tripm_pane_g6_ParamLimits

0xb18c,	// (0x0003ca56) blid2_tripm_pane_g6

0x0f1b,	// (0x000327e5) mp4_progress_pane_g1

0xb1e6,	// (0x0003cab0) blid2_tripm_values_pane_ParamLimits

0xb1e6,	// (0x0003cab0) blid2_tripm_values_pane

0xb2a3,	// (0x0003cb6d) blid2_tripm_values_pane_t1

0xb2b1,	// (0x0003cb7b) blid2_tripm_values_pane_t2

0xb2bf,	// (0x0003cb89) blid2_tripm_values_pane_t3

0xb2cd,	// (0x0003cb97) blid2_tripm_values_pane_t4

0xb2db,	// (0x0003cba5) blid2_tripm_values_pane_t5

0xb2e9,	// (0x0003cbb3) blid2_tripm_values_pane_t6

0xb2f7,	// (0x0003cbc1) blid2_tripm_values_pane_t7

0xb305,	// (0x0003cbcf) blid2_tripm_values_pane_t8

0xb313,	// (0x0003cbdd) blid2_tripm_values_pane_t9

0x0008,

0xfb5e,	// (0x00041428) blid2_tripm_values_pane_t

0x6277,	// (0x00037b41) call_video_pane_t1_ParamLimits

0x6298,	// (0x00037b62) call_video_pane_t2_ParamLimits

0xf292,	// (0x00040b5c) call_video_pane_t_ParamLimits

0x4364,	// (0x00035c2e) msg_header_pane_g1_ParamLimits

0xdd74,	// (0x0003f63e) msg_header_pane_g2_ParamLimits

0xdd74,	// (0x0003f63e) msg_header_pane_g2

0x0001,

0xf4ac,	// (0x00040d76) msg_header_pane_g_ParamLimits

0xf4ac,	// (0x00040d76) msg_header_pane_g

0xd11a,	// (0x0003e9e4) main_clock2_pane_ParamLimits

0x9445,	// (0x0003ad0f) grid_clock2_toolbar_pane_ParamLimits

0x9445,	// (0x0003ad0f) grid_clock2_toolbar_pane

0x9445,	// (0x0003ad0f) listscroll_clock2_pane_ParamLimits

0x9445,	// (0x0003ad0f) listscroll_clock2_pane

0x94f2,	// (0x0003adbc) main_clock2_pane_t3_ParamLimits

0x94f2,	// (0x0003adbc) main_clock2_pane_t3

0x9504,	// (0x0003adce) main_clock2_pane_t4_ParamLimits

0x9504,	// (0x0003adce) main_clock2_pane_t4

0x1a53,	// (0x0003331d) cell_clock2_toolbar_pane

0x1a5b,	// (0x00033325) cell_clock2_toolbar_pane_cp01

0x1a5b,	// (0x00033325) cell_clock2_toolbar_pane_cp02

0x1a63,	// (0x0003332d) cell_clock2_toolbar_pane_cp03

0x1a6b,	// (0x00033335) list_clock2_pane

0xdab0,	// (0x0003f37a) scroll_pane_cp10

0x1a73,	// (0x0003333d) list_single_clock2_pane_ParamLimits

0x1a73,	// (0x0003333d) list_single_clock2_pane

0xdbf9,	// (0x0003f4c3) list_highlight_pane_cp08

0x1a80,	// (0x0003334a) list_single_clock2_pane_t1

0x1a8e,	// (0x00033358) list_single_clock2_pane_t2

0x0001,

0xfb71,	// (0x0004143b) list_single_clock2_pane_t

0x52ac,	// (0x00036b76) bg_button_pane_cp10

0x1a9c,	// (0x00033366) cell_clock2_toolbar_pane_g1

0x7a45,	// (0x0003930f) aid_main_viewer_pane_g1_ParamLimits

0x7a45,	// (0x0003930f) aid_main_viewer_pane_g1

0x7a51,	// (0x0003931b) aid_main_viewer_pane_g2_ParamLimits

0x7a51,	// (0x0003931b) aid_main_viewer_pane_g2

0x7a5d,	// (0x00039327) aid_main_viewer_pane_g3_ParamLimits

0x7a5d,	// (0x00039327) aid_main_viewer_pane_g3

0x7a6e,	// (0x00039338) aid_main_viewer_pane_g4_ParamLimits

0x7a6e,	// (0x00039338) aid_main_viewer_pane_g4

0x0003,

0xf4bd,	// (0x00040d87) aid_main_viewer_pane_g_ParamLimits

0xf4bd,	// (0x00040d87) aid_main_viewer_pane_g

0x81ee,	// (0x00039ab8) main_calc_pane_ParamLimits

0x81fb,	// (0x00039ac5) main_dialer2_pane_ParamLimits

0x52ac,	// (0x00036b76) main_cam6_pane

0x52ac,	// (0x00036b76) main_vid6_pane

0x9451,	// (0x0003ad1b) listscroll_gen_pane_cp06_ParamLimits

0x9451,	// (0x0003ad1b) listscroll_gen_pane_cp06

0x9516,	// (0x0003ade0) main_clock2_pane_t5_ParamLimits

0x9516,	// (0x0003ade0) main_clock2_pane_t5

0x955f,	// (0x0003ae29) aid_call2_pane_cp10_ParamLimits

0x9571,	// (0x0003ae3b) aid_call_pane_cp10_ParamLimits

0xdb2e,	// (0x0003f3f8) popup_clock_analogue_window_cp10_g1_ParamLimits

0xdb2e,	// (0x0003f3f8) popup_clock_analogue_window_cp10_g2_ParamLimits

0x9583,	// (0x0003ae4d) popup_clock_analogue_window_cp10_g3_ParamLimits

0x9583,	// (0x0003ae4d) popup_clock_analogue_window_cp10_g4_ParamLimits

0xdb2e,	// (0x0003f3f8) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7f3,	// (0x000410bd) popup_clock_analogue_window_cp10_g_ParamLimits

0x9595,	// (0x0003ae5f) popup_clock_analogue_window_cp10_t1_ParamLimits

0x9d3e,	// (0x0003b608) cell_dialer2_keypad_pane_g2_ParamLimits

0x9d3e,	// (0x0003b608) cell_dialer2_keypad_pane_g2

0x0001,

0xf8d9,	// (0x000411a3) cell_dialer2_keypad_pane_g_ParamLimits

0xf8d9,	// (0x000411a3) cell_dialer2_keypad_pane_g

0x9d5a,	// (0x0003b624) cell_dialer2_keypad_pane_t1

0xa70f,	// (0x0003bfd9) main_cset_text2_pane_ParamLimits

0xa70f,	// (0x0003bfd9) main_cset_text2_pane

0x1724,	// (0x00032fee) area_vitu2_query_pane_g1_ParamLimits

0x46fd,	// (0x00035fc7) area_vitu2_query_pane_g2_ParamLimits

0xfa8e,	// (0x00041358) area_vitu2_query_pane_g_ParamLimits

0x47ae,	// (0x00036078) area_vitu2_query_pane_t7_ParamLimits

0x47ae,	// (0x00036078) area_vitu2_query_pane_t7

0xae84,	// (0x0003c74e) bg_button_pane_cp018_ParamLimits

0xae92,	// (0x0003c75c) bg_button_pane_cp021_ParamLimits

0x47d2,	// (0x0003609c) bg_button_pane_cp022_ParamLimits

0x47d2,	// (0x0003609c) bg_vkb2_func_pane_cp08_ParamLimits

0xae84,	// (0x0003c74e) bg_vkb2_func_pane_cp06_ParamLimits

0xae92,	// (0x0003c75c) bg_vkb2_func_pane_cp07_ParamLimits

0x47e3,	// (0x000360ad) input_focus_pane_cp09_ParamLimits

0xb321,	// (0x0003cbeb) cam6_autofocus_pane_ParamLimits

0xb321,	// (0x0003cbeb) cam6_autofocus_pane

0xb343,	// (0x0003cc0d) cam6_image_uncrop_pane_ParamLimits

0xb343,	// (0x0003cc0d) cam6_image_uncrop_pane

0xb370,	// (0x0003cc3a) cam6_indi_pane_ParamLimits

0xb370,	// (0x0003cc3a) cam6_indi_pane

0xb38a,	// (0x0003cc54) cam6_mode_pane_ParamLimits

0xb38a,	// (0x0003cc54) cam6_mode_pane

0xb39e,	// (0x0003cc68) cam6_timer_pane_ParamLimits

0xb39e,	// (0x0003cc68) cam6_timer_pane

0xb3aa,	// (0x0003cc74) cam6_zoom_pane_ParamLimits

0xb3aa,	// (0x0003cc74) cam6_zoom_pane

0xa120,	// (0x0003b9ea) cam6_mode_pane_g1_ParamLimits

0xa120,	// (0x0003b9ea) cam6_mode_pane_g1

0xa138,	// (0x0003ba02) cam6_mode_pane_g2_ParamLimits

0xa138,	// (0x0003ba02) cam6_mode_pane_g2

0xa144,	// (0x0003ba0e) cam6_mode_pane_g3_ParamLimits

0xa144,	// (0x0003ba0e) cam6_mode_pane_g3

0xa150,	// (0x0003ba1a) cam6_mode_pane_g4_ParamLimits

0xa150,	// (0x0003ba1a) cam6_mode_pane_g4

0x0003,

0xfb76,	// (0x00041440) cam6_mode_pane_g_ParamLimits

0xfb76,	// (0x00041440) cam6_mode_pane_g

0x1ab2,	// (0x0003337c) bg_tb_trans_pane_cp08_ParamLimits

0x1ab2,	// (0x0003337c) bg_tb_trans_pane_cp08

0x1ac0,	// (0x0003338a) cam6_battery_pane_ParamLimits

0x1ac0,	// (0x0003338a) cam6_battery_pane

0x1ad6,	// (0x000333a0) cam6_indi_pane_g1_ParamLimits

0x1ad6,	// (0x000333a0) cam6_indi_pane_g1

0x1ae8,	// (0x000333b2) cam6_indi_pane_g2_ParamLimits

0x1ae8,	// (0x000333b2) cam6_indi_pane_g2

0x1afa,	// (0x000333c4) cam6_indi_pane_g3_ParamLimits

0x1afa,	// (0x000333c4) cam6_indi_pane_g3

0x0002,

0xfb7f,	// (0x00041449) cam6_indi_pane_g_ParamLimits

0xfb7f,	// (0x00041449) cam6_indi_pane_g

0x1b0c,	// (0x000333d6) cam6_indi_pane_t1_ParamLimits

0x1b0c,	// (0x000333d6) cam6_indi_pane_t1

0xa210,	// (0x0003bada) cam6_autofocus_pane_g1

0xa218,	// (0x0003bae2) cam6_autofocus_pane_g2

0xa220,	// (0x0003baea) cam6_autofocus_pane_g3

0xa228,	// (0x0003baf2) cam6_autofocus_pane_g4

0x0003,

0xfb86,	// (0x00041450) cam6_autofocus_pane_g

0x1b32,	// (0x000333fc) cam6_timer_pane_g1

0x1b3a,	// (0x00033404) cam6_timer_pane_t1

0x1b48,	// (0x00033412) cam6_zoom_cont_pane

0x1b50,	// (0x0003341a) cam6_zoom_pane_g1

0x1b58,	// (0x00033422) cam6_zoom_pane_g2

0xb3c2,	// (0x0003cc8c) cam6_zoom_pane_g3

0x0002,

0xfb8f,	// (0x00041459) cam6_zoom_pane_g

0x0416,	// (0x00031ce0) cam6_battery_pane_g1

0x0416,	// (0x00031ce0) cam6_battery_pane_g2

0x0001,

0xf700,	// (0x00040fca) cam6_battery_pane_g

0x1b60,	// (0x0003342a) cam6_zoom_cont_pane_g1

0x1b69,	// (0x00033433) cam6_zoom_cont_pane_g2

0x1b72,	// (0x0003343c) cam6_zoom_cont_pane_g3

0x0002,

0xfb96,	// (0x00041460) cam6_zoom_cont_pane_g

0xb3df,	// (0x0003cca9) cam6_mode_pane_cp_ParamLimits

0xb3df,	// (0x0003cca9) cam6_mode_pane_cp

0xb3aa,	// (0x0003cc74) cam6_zoom_pane_cp_ParamLimits

0xb3aa,	// (0x0003cc74) cam6_zoom_pane_cp

0xb3f3,	// (0x0003ccbd) vid6_image_uncrop_cif_pane_ParamLimits

0xb3f3,	// (0x0003ccbd) vid6_image_uncrop_cif_pane

0xb41f,	// (0x0003cce9) vid6_image_uncrop_nhd_pane_ParamLimits

0xb41f,	// (0x0003cce9) vid6_image_uncrop_nhd_pane

0xb343,	// (0x0003cc0d) vid6_image_uncrop_vga_pane_ParamLimits

0xb343,	// (0x0003cc0d) vid6_image_uncrop_vga_pane

0xb43c,	// (0x0003cd06) vid6_image_uncrop_wvga_pane_ParamLimits

0xb43c,	// (0x0003cd06) vid6_image_uncrop_wvga_pane

0xb459,	// (0x0003cd23) vid6_indi_pane_ParamLimits

0xb459,	// (0x0003cd23) vid6_indi_pane

0x1ab2,	// (0x0003337c) bg_tb_trans_pane_cp09_ParamLimits

0x1ab2,	// (0x0003337c) bg_tb_trans_pane_cp09

0x1b8a,	// (0x00033454) cam6_battery_pane_cp_ParamLimits

0x1b8a,	// (0x00033454) cam6_battery_pane_cp

0x1b96,	// (0x00033460) vid6_indi_pane_g1_ParamLimits

0x1b96,	// (0x00033460) vid6_indi_pane_g1

0x1ba8,	// (0x00033472) vid6_indi_pane_g2_ParamLimits

0x1ba8,	// (0x00033472) vid6_indi_pane_g2

0x1bba,	// (0x00033484) vid6_indi_pane_g3_ParamLimits

0x1bba,	// (0x00033484) vid6_indi_pane_g3

0x1bcf,	// (0x00033499) vid6_indi_pane_g4_ParamLimits

0x1bcf,	// (0x00033499) vid6_indi_pane_g4

0x1be4,	// (0x000334ae) vid6_indi_pane_g5_ParamLimits

0x1be4,	// (0x000334ae) vid6_indi_pane_g5

0x0004,

0xfb9d,	// (0x00041467) vid6_indi_pane_g_ParamLimits

0xfb9d,	// (0x00041467) vid6_indi_pane_g

0x1bfe,	// (0x000334c8) vid6_indi_pane_t1_ParamLimits

0x1bfe,	// (0x000334c8) vid6_indi_pane_t1

0x1c14,	// (0x000334de) vid6_indi_pane_t2_ParamLimits

0x1c14,	// (0x000334de) vid6_indi_pane_t2

0x1c3c,	// (0x00033506) vid6_indi_pane_t3_ParamLimits

0x1c3c,	// (0x00033506) vid6_indi_pane_t3

0x1c64,	// (0x0003352e) vid6_indi_pane_t4_ParamLimits

0x1c64,	// (0x0003352e) vid6_indi_pane_t4

0x0003,

0xfba8,	// (0x00041472) vid6_indi_pane_t_ParamLimits

0xfba8,	// (0x00041472) vid6_indi_pane_t

0x1c88,	// (0x00033552) wait_bar_pane_cp08

0xb47e,	// (0x0003cd48) main_cset_text2_pane_t1_ParamLimits

0xb47e,	// (0x0003cd48) main_cset_text2_pane_t1

0xb3ca,	// (0x0003cc94) listscroll_gen_pane_cp06_t1_ParamLimits

0xb3ca,	// (0x0003cc94) listscroll_gen_pane_cp06_t1

0x52ac,	// (0x00036b76) main_cam6_set_pane

0x0682,	// (0x00031f4c) bg_tb_trans_pane_cp06_ParamLimits

0xa0c7,	// (0x0003b991) cam4_indicators_pane_g1_ParamLimits

0xa0d8,	// (0x0003b9a2) cam4_indicators_pane_g2_ParamLimits

0xf916,	// (0x000411e0) cam4_indicators_pane_g_ParamLimits

0xa0f6,	// (0x0003b9c0) cam4_indicators_pane_t1_ParamLimits

0xe2c7,	// (0x0003fb91) bg_tb_trans_pane_cp07_ParamLimits

0xa1a8,	// (0x0003ba72) vid4_indicators_pane_g1_ParamLimits

0xa1b9,	// (0x0003ba83) vid4_indicators_pane_g2_ParamLimits

0xa1ca,	// (0x0003ba94) vid4_indicators_pane_g3_ParamLimits

0xa1db,	// (0x0003baa5) vid4_indicators_pane_g4_ParamLimits

0xf928,	// (0x000411f2) vid4_indicators_pane_g_ParamLimits

0xa1f7,	// (0x0003bac1) vid4_indicators_pane_t1_ParamLimits

0xafbe,	// (0x0003c888) vid4_progress_pane_g1_ParamLimits

0xafce,	// (0x0003c898) vid4_progress_pane_g2_ParamLimits

0x7acb,	// (0x00039395) vid4_progress_pane_g3_ParamLimits

0xafde,	// (0x0003c8a8) vid4_progress_pane_g4_ParamLimits

0xfad9,	// (0x000413a3) vid4_progress_pane_g_ParamLimits

0xaffc,	// (0x0003c8c6) vid4_progress_pane_t1_ParamLimits

0xb011,	// (0x0003c8db) vid4_progress_pane_t2_ParamLimits

0xb027,	// (0x0003c8f1) vid4_progress_pane_t3_ParamLimits

0xfae4,	// (0x000413ae) vid4_progress_pane_t_ParamLimits

0xb03c,	// (0x0003c906) wait_bar_pane_cp07_ParamLimits

0xb4b1,	// (0x0003cd7b) main_cam6_set_pane_g2_ParamLimits

0xb4b1,	// (0x0003cd7b) main_cam6_set_pane_g2

0xb4bd,	// (0x0003cd87) main_cset6_listscroll_pane_ParamLimits

0xb4bd,	// (0x0003cd87) main_cset6_listscroll_pane

0xb4e8,	// (0x0003cdb2) main_cset6_slider_pane_ParamLimits

0xb4e8,	// (0x0003cdb2) main_cset6_slider_pane

0xb4f4,	// (0x0003cdbe) main_cset6_text2_pane_ParamLimits

0xb4f4,	// (0x0003cdbe) main_cset6_text2_pane

0x1c97,	// (0x00033561) main_cset6_text_pane

0x1c9f,	// (0x00033569) main_cset_list_pane_copy1_ParamLimits

0x1c9f,	// (0x00033569) main_cset_list_pane_copy1

0x1caf,	// (0x00033579) scroll_pane_cp028_copy1

0xb507,	// (0x0003cdd1) cset_list_set_pane_copy1

0xb51a,	// (0x0003cde4) aid_position_infowindow_above_copy1

0xb522,	// (0x0003cdec) aid_position_infowindow_below_copy1

0x483c,	// (0x00036106) cset_list_set_pane_g1_copy1

0x4571,	// (0x00035e3b) cset_list_set_pane_g3_copy1_ParamLimits

0x4571,	// (0x00035e3b) cset_list_set_pane_g3_copy1

0x4580,	// (0x00035e4a) cset_list_set_pane_t1_copy1_ParamLimits

0x4580,	// (0x00035e4a) cset_list_set_pane_t1_copy1

0xe2c7,	// (0x0003fb91) list_highlight_pane_cp021_copy1_ParamLimits

0xe2c7,	// (0x0003fb91) list_highlight_pane_cp021_copy1

0x1cb8,	// (0x00033582) cset6_slider_pane_ParamLimits

0x1cb8,	// (0x00033582) cset6_slider_pane

0x1ce4,	// (0x000335ae) main_cset6_slider_pane_g1_ParamLimits

0x1ce4,	// (0x000335ae) main_cset6_slider_pane_g1

0xb52a,	// (0x0003cdf4) main_cset6_slider_pane_g2_ParamLimits

0xb52a,	// (0x0003cdf4) main_cset6_slider_pane_g2

0x1d0c,	// (0x000335d6) main_cset6_slider_pane_g3_ParamLimits

0x1d0c,	// (0x000335d6) main_cset6_slider_pane_g3

0xb552,	// (0x0003ce1c) main_cset6_slider_pane_g4_ParamLimits

0xb552,	// (0x0003ce1c) main_cset6_slider_pane_g4

0xb55e,	// (0x0003ce28) main_cset6_slider_pane_g5_ParamLimits

0xb55e,	// (0x0003ce28) main_cset6_slider_pane_g5

0x133d,	// (0x00032c07) main_cset6_slider_pane_g7_ParamLimits

0x133d,	// (0x00032c07) main_cset6_slider_pane_g7

0x1349,	// (0x00032c13) main_cset6_slider_pane_g8_ParamLimits

0x1349,	// (0x00032c13) main_cset6_slider_pane_g8

0xb56c,	// (0x0003ce36) main_cset6_slider_pane_g9_ParamLimits

0xb56c,	// (0x0003ce36) main_cset6_slider_pane_g9

0xb578,	// (0x0003ce42) main_cset6_slider_pane_g10_ParamLimits

0xb578,	// (0x0003ce42) main_cset6_slider_pane_g10

0xb584,	// (0x0003ce4e) main_cset6_slider_pane_g11_ParamLimits

0xb584,	// (0x0003ce4e) main_cset6_slider_pane_g11

0xb590,	// (0x0003ce5a) main_cset6_slider_pane_g12_ParamLimits

0xb590,	// (0x0003ce5a) main_cset6_slider_pane_g12

0xb59c,	// (0x0003ce66) main_cset6_slider_pane_g13_ParamLimits

0xb59c,	// (0x0003ce66) main_cset6_slider_pane_g13

0xb5a8,	// (0x0003ce72) main_cset6_slider_pane_g14_ParamLimits

0xb5a8,	// (0x0003ce72) main_cset6_slider_pane_g14

0xb5b4,	// (0x0003ce7e) main_cset6_slider_pane_g15_ParamLimits

0xb5b4,	// (0x0003ce7e) main_cset6_slider_pane_g15

0xb5cc,	// (0x0003ce96) main_cset6_slider_pane_g16_ParamLimits

0xb5cc,	// (0x0003ce96) main_cset6_slider_pane_g16

0xb5da,	// (0x0003cea4) main_cset6_slider_pane_g17_ParamLimits

0xb5da,	// (0x0003cea4) main_cset6_slider_pane_g17

0x0011,

0xfbb1,	// (0x0004147b) main_cset6_slider_pane_g_ParamLimits

0xfbb1,	// (0x0004147b) main_cset6_slider_pane_g

0x1d18,	// (0x000335e2) main_cset6_slider_pane_t1_ParamLimits

0x1d18,	// (0x000335e2) main_cset6_slider_pane_t1

0xb600,	// (0x0003ceca) main_cset6_slider_pane_t2_ParamLimits

0xb600,	// (0x0003ceca) main_cset6_slider_pane_t2

0xb62b,	// (0x0003cef5) main_cset6_slider_pane_t3_ParamLimits

0xb62b,	// (0x0003cef5) main_cset6_slider_pane_t3

0xb656,	// (0x0003cf20) main_cset6_slider_pane_t4_ParamLimits

0xb656,	// (0x0003cf20) main_cset6_slider_pane_t4

0xb681,	// (0x0003cf4b) main_cset6_slider_pane_t5_ParamLimits

0xb681,	// (0x0003cf4b) main_cset6_slider_pane_t5

0x1d59,	// (0x00033623) main_cset6_slider_pane_t7_ParamLimits

0x1d59,	// (0x00033623) main_cset6_slider_pane_t7

0xb6ae,	// (0x0003cf78) main_cset6_slider_pane_t8_ParamLimits

0xb6ae,	// (0x0003cf78) main_cset6_slider_pane_t8

0xb6d2,	// (0x0003cf9c) main_cset6_slider_pane_t9_ParamLimits

0xb6d2,	// (0x0003cf9c) main_cset6_slider_pane_t9

0xb6f6,	// (0x0003cfc0) main_cset6_slider_pane_t10_ParamLimits

0xb6f6,	// (0x0003cfc0) main_cset6_slider_pane_t10

0xb71a,	// (0x0003cfe4) main_cset6_slider_pane_t11_ParamLimits

0xb71a,	// (0x0003cfe4) main_cset6_slider_pane_t11

0x1d8f,	// (0x00033659) main_cset6_slider_pane_t14_ParamLimits

0x1d8f,	// (0x00033659) main_cset6_slider_pane_t14

0x1dc8,	// (0x00033692) main_cset6_slider_pane_t15_ParamLimits

0x1dc8,	// (0x00033692) main_cset6_slider_pane_t15

0x000b,

0xfbd6,	// (0x000414a0) main_cset6_slider_pane_t_ParamLimits

0xfbd6,	// (0x000414a0) main_cset6_slider_pane_t

0x1e01,	// (0x000336cb) cset_slider_pane_g1_copy1

0x1e0a,	// (0x000336d4) cset_slider_pane_g2_copy1

0x1e13,	// (0x000336dd) cset_slider_pane_g3_copy1

0x52ac,	// (0x00036b76) bg_popup_sub_pane_cp011_copy1

0x1544,	// (0x00032e0e) main_cset_text_pane_g1_copy1

0x154c,	// (0x00032e16) main_cset_text_pane_t1_copy1

0x155a,	// (0x00032e24) main_cset_text_pane_t2_copy1

0x1568,	// (0x00032e32) main_cset_text_pane_t3_copy1

0x1576,	// (0x00032e40) main_cset_text_pane_t4_copy1

0x1584,	// (0x00032e4e) main_cset_text_pane_t5_copy1

0x1592,	// (0x00032e5c) main_cset_text_pane_t6_copy1

0x15a0,	// (0x00032e6a) main_cset_text_pane_t7_copy1

0xb73e,	// (0x0003d008) main_cset_text2_pane_t1_copy1

0x52ac,	// (0x00036b76) main_ncimui_pane

0x823a,	// (0x00039b04) popup_query_ncimui_window_ParamLimits

0x823a,	// (0x00039b04) popup_query_ncimui_window

0x4425,	// (0x00035cef) field_cale_ev2_pane_g4_ParamLimits

0x4425,	// (0x00035cef) field_cale_ev2_pane_g4

0x9a5e,	// (0x0003b328) cell_video_dialer_keypad_pane_g2_ParamLimits

0x9a5e,	// (0x0003b328) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8b4,	// (0x0004117e) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8b4,	// (0x0004117e) cell_video_dialer_keypad_pane_g

0x9a76,	// (0x0003b340) cell_video_dialer_keypad_pane_t1

0x52ac,	// (0x00036b76) bg_popup_window_pane_cp012

0xd98d,	// (0x0003f257) heading_pane_cp06

0x1f0b,	// (0x000337d5) ncim_query_content_pane

0x52ac,	// (0x00036b76) bg_popup_heading_pane_cp01

0x1f13,	// (0x000337dd) ncim_heading_pane_t1

0x1f21,	// (0x000337eb) ncim_indicator_popup_pane

0x1f33,	// (0x000337fd) ncim_query_button_pane

0x1f47,	// (0x00033811) ncim_query_content_pane_t1

0x1f59,	// (0x00033823) ncim_query_content_pane_t2

0x0005,

0xfc15,	// (0x000414df) ncim_query_content_pane_t

0x1f93,	// (0x0003385d) ncim_query_list_pane

0x1fa5,	// (0x0003386f) ncim_query_popup_pane

0x1f21,	// (0x000337eb) ncim_indicator_popup_pane_ParamLimits

0xb860,	// (0x0003d12a) ncim_query_content_pane_g1_ParamLimits

0xb860,	// (0x0003d12a) ncim_query_content_pane_g1

0x1f47,	// (0x00033811) ncim_query_content_pane_t1_ParamLimits

0x1f59,	// (0x00033823) ncim_query_content_pane_t2_ParamLimits

0xb86c,	// (0x0003d136) ncim_query_content_pane_t3_ParamLimits

0xb86c,	// (0x0003d136) ncim_query_content_pane_t3

0xb889,	// (0x0003d153) ncim_query_content_pane_t4_ParamLimits

0xb889,	// (0x0003d153) ncim_query_content_pane_t4

0xb8a6,	// (0x0003d170) ncim_query_content_pane_t5_ParamLimits

0xb8a6,	// (0x0003d170) ncim_query_content_pane_t5

0x1f6b,	// (0x00033835) ncim_query_content_pane_t6_ParamLimits

0x1f6b,	// (0x00033835) ncim_query_content_pane_t6

0xfc15,	// (0x000414df) ncim_query_content_pane_t_ParamLimits

0x1f93,	// (0x0003385d) ncim_query_list_pane_ParamLimits

0x1fa5,	// (0x0003386f) ncim_query_popup_pane_ParamLimits

0x1fb9,	// (0x00033883) wait_bar_pane_cp04

0x52ac,	// (0x00036b76) input_focus_pane_cp011

0x1fc1,	// (0x0003388b) ncim_query_popup_pane_t1

0x1fcf,	// (0x00033899) ncim_list_query_list_pane_ParamLimits

0x1fcf,	// (0x00033899) ncim_list_query_list_pane

0x52ac,	// (0x00036b76) bg_button_pane_cp027

0x1fdc,	// (0x000338a6) ncim_query_button_pane_g1

0x52ac,	// (0x00036b76) list_highlight_pane_cp012

0x1fe6,	// (0x000338b0) ncim_list_query_list_pane_g1

0x1fee,	// (0x000338b8) ncim_list_query_list_pane_t1

0xa0e7,	// (0x0003b9b1) cam4_indicators_pane_g3_ParamLimits

0xa0e7,	// (0x0003b9b1) cam4_indicators_pane_g3

0xa1e7,	// (0x0003bab1) vid4_indicators_pane_g5_ParamLimits

0xa1e7,	// (0x0003bab1) vid4_indicators_pane_g5

0xafed,	// (0x0003c8b7) vid4_progress_pane_g5_ParamLimits

0xafed,	// (0x0003c8b7) vid4_progress_pane_g5

0xb779,	// (0x0003d043) main_ncimui_pane_g1

0xb7cf,	// (0x0003d099) ncimui_group_query_pane_ParamLimits

0xb7cf,	// (0x0003d099) ncimui_group_query_pane

0xb80b,	// (0x0003d0d5) ncimui_list_pane_ParamLimits

0xb80b,	// (0x0003d0d5) ncimui_list_pane

0xb82c,	// (0x0003d0f6) ncimui_text_pane_ParamLimits

0xb82c,	// (0x0003d0f6) ncimui_text_pane

0xb8c3,	// (0x0003d18d) ncimui_text_pane_t1_ParamLimits

0xb8c3,	// (0x0003d18d) ncimui_text_pane_t1

0x1ffc,	// (0x000338c6) ncimui_list_single_graphic_pane_ParamLimits

0x1ffc,	// (0x000338c6) ncimui_list_single_graphic_pane

0xb8e2,	// (0x0003d1ac) ncimui_query_pane_ParamLimits

0xb8e2,	// (0x0003d1ac) ncimui_query_pane

0x52ac,	// (0x00036b76) list_highlight_pane_cp013

0x200c,	// (0x000338d6) ncim_list_query_list_pane_t1_copy1

0x1fe6,	// (0x000338b0) ncim_list_single_graphic_pane_g1

0x201a,	// (0x000338e4) ncim_query_button_pane_cp01

0x2026,	// (0x000338f0) ncim_query_entry_pane_ParamLimits

0x2026,	// (0x000338f0) ncim_query_entry_pane

0x2039,	// (0x00033903) ncimui_query_pane_g1

0x2045,	// (0x0003390f) ncimui_query_pane_t1_ParamLimits

0x2045,	// (0x0003390f) ncimui_query_pane_t1

0xe2c7,	// (0x0003fb91) input_focus_pane_cp012

0x205e,	// (0x00033928) ncim_query_entry_pane_t1

0xd11a,	// (0x0003e9e4) main_im_pane_ParamLimits

0xe2c7,	// (0x0003fb91) main_mobtv_pane_ParamLimits

0xe2c7,	// (0x0003fb91) main_mobtv_pane

0xb5e8,	// (0x0003ceb2) main_cset6_slider_pane_g18_ParamLimits

0xb5e8,	// (0x0003ceb2) main_cset6_slider_pane_g18

0xb5f4,	// (0x0003cebe) main_cset6_slider_pane_g19_ParamLimits

0xb5f4,	// (0x0003cebe) main_cset6_slider_pane_g19

0x1194,	// (0x00032a5e) bg_main_mobtv_pane_ParamLimits

0x1194,	// (0x00032a5e) bg_main_mobtv_pane

0xb8f5,	// (0x0003d1bf) main_mobtv_info_pane

0xb900,	// (0x0003d1ca) main_mobtv_loading_pane_ParamLimits

0xb900,	// (0x0003d1ca) main_mobtv_loading_pane

0x207e,	// (0x00033948) main_mobtv_pg_channel_list_pane

0x2088,	// (0x00033952) main_mobtv_pg_hdr_pane

0xb90d,	// (0x0003d1d7) main_mobtv_programe_curr_pane_ParamLimits

0xb90d,	// (0x0003d1d7) main_mobtv_programe_curr_pane

0xb91a,	// (0x0003d1e4) main_mobtv_programe_next_pane_ParamLimits

0xb91a,	// (0x0003d1e4) main_mobtv_programe_next_pane

0x2091,	// (0x0003395b) popup_mobtv_noti_window

0x0416,	// (0x00031ce0) main_tv_pg_hdr_pane_g1

0x2099,	// (0x00033963) main_tv_pg_hdr_pane_g2

0x20a1,	// (0x0003396b) main_tv_pg_hdr_pane_g3

0x20a9,	// (0x00033973) main_tv_pg_hdr_pane_g4

0x20b1,	// (0x0003397b) main_tv_pg_hdr_pane_g5

0x20bb,	// (0x00033985) main_tv_pg_hdr_pane_g6

0x20c5,	// (0x0003398f) main_tv_pg_hdr_pane_g7

0x20cf,	// (0x00033999) main_tv_pg_hdr_pane_g8

0x20d9,	// (0x000339a3) main_tv_pg_hdr_pane_g9

0x20e3,	// (0x000339ad) main_tv_pg_hdr_pane_g10

0x20ed,	// (0x000339b7) main_tv_pg_hdr_pane_g11

0x000a,

0xfc22,	// (0x000414ec) main_tv_pg_hdr_pane_g

0x20f7,	// (0x000339c1) main_tv_pg_hdr_pane_t1

0x2105,	// (0x000339cf) main_tv_pg_hdr_pane_t2

0x2113,	// (0x000339dd) main_tv_pg_hdr_pane_t3

0x2123,	// (0x000339ed) main_tv_pg_hdr_pane_t4

0x2133,	// (0x000339fd) main_tv_pg_hdr_pane_t5

0x0004,

0xfc39,	// (0x00041503) main_tv_pg_hdr_pane_t

0x2143,	// (0x00033a0d) single_mobtv_pg_channel_pane_ParamLimits

0x2143,	// (0x00033a0d) single_mobtv_pg_channel_pane

0x2155,	// (0x00033a1f) single_mobtv_pg_channel_table_pane

0x215e,	// (0x00033a28) single_mobtv_pg_channel_thumb_pane

0x2167,	// (0x00033a31) single_tv_pg_channel_pane_g1

0x2170,	// (0x00033a3a) single_tv_pg_channel_pane_g2

0x0001,

0xfc44,	// (0x0004150e) single_tv_pg_channel_pane_g

0x0682,	// (0x00031f4c) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x0682,	// (0x00031f4c) bg_single_mobtv_pg_channel_thumb_pane

0x2179,	// (0x00033a43) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x2179,	// (0x00033a43) single_mobtv_pg_channel_thumb_pane_g1

0x2187,	// (0x00033a51) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x2187,	// (0x00033a51) single_mobtv_pg_channel_thumb_pane_g2

0x2193,	// (0x00033a5d) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x2193,	// (0x00033a5d) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc49,	// (0x00041513) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc49,	// (0x00041513) single_mobtv_pg_channel_thumb_pane_g

0x219f,	// (0x00033a69) single_mobtv_pg_channel_thumb_pane_t1

0x21ad,	// (0x00033a77) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc50,	// (0x0004151a) single_mobtv_pg_channel_thumb_pane_t

0x0416,	// (0x00031ce0) bg_single_mobtv_pg_channel_table_pane_g1

0x0416,	// (0x00031ce0) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf700,	// (0x00040fca) bg_single_mobtv_pg_channel_table_pane_g

0x21bb,	// (0x00033a85) single_mobtv_pg_channel_table_pane_t1

0x21c9,	// (0x00033a93) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc55,	// (0x0004151f) single_mobtv_pg_channel_table_pane_t

0xb92f,	// (0x0003d1f9) main_mobtv_info_pane_g1_ParamLimits

0xb92f,	// (0x0003d1f9) main_mobtv_info_pane_g1

0xb94b,	// (0x0003d215) main_mobtv_info_pane_t1_ParamLimits

0xb94b,	// (0x0003d215) main_mobtv_info_pane_t1

0xb9c3,	// (0x0003d28d) main_mobtv_info_pane_t2_ParamLimits

0xb9c3,	// (0x0003d28d) main_mobtv_info_pane_t2

0x0002,

0xfc5f,	// (0x00041529) main_mobtv_info_pane_t_ParamLimits

0xfc5f,	// (0x00041529) main_mobtv_info_pane_t

0xba52,	// (0x0003d31c) wait_bar_pane_cp05

0xba64,	// (0x0003d32e) main_mobtv_loading_pane_g1_ParamLimits

0xba64,	// (0x0003d32e) main_mobtv_loading_pane_g1

0xba72,	// (0x0003d33c) main_mobtv_loading_pane_g2_ParamLimits

0xba72,	// (0x0003d33c) main_mobtv_loading_pane_g2

0xba7e,	// (0x0003d348) main_mobtv_loading_pane_g3_ParamLimits

0xba7e,	// (0x0003d348) main_mobtv_loading_pane_g3

0x0002,

0xfc66,	// (0x00041530) main_mobtv_loading_pane_g_ParamLimits

0xfc66,	// (0x00041530) main_mobtv_loading_pane_g

0x21d7,	// (0x00033aa1) main_mobtv_loading_pane_t1_ParamLimits

0x21d7,	// (0x00033aa1) main_mobtv_loading_pane_t1

0x21ef,	// (0x00033ab9) main_mobtv_loading_pane_t2_ParamLimits

0x21ef,	// (0x00033ab9) main_mobtv_loading_pane_t2

0x0001,

0xfc6d,	// (0x00041537) main_mobtv_loading_pane_t_ParamLimits

0xfc6d,	// (0x00041537) main_mobtv_loading_pane_t

0xba8c,	// (0x0003d356) wait_bar_pane_cp06_ParamLimits

0xba8c,	// (0x0003d356) wait_bar_pane_cp06

0x2213,	// (0x00033add) main_mobtv_programe_curr_pane_t1

0x2221,	// (0x00033aeb) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc72,	// (0x0004153c) main_mobtv_programe_curr_pane_t

0x222f,	// (0x00033af9) main_mobtv_programe_next_pane_t1

0x223d,	// (0x00033b07) main_mobtv_programe_next_pane_t2

0x224b,	// (0x00033b15) main_mobtv_programe_next_pane_t3

0x0002,

0xfc77,	// (0x00041541) main_mobtv_programe_next_pane_t

0x52ac,	// (0x00036b76) bg_popup_mobtv_noti_window_pane

0x2259,	// (0x00033b23) popup_mobtv_noti_window_g1

0x2261,	// (0x00033b2b) popup_mobtv_noti_window_t1

0x226f,	// (0x00033b39) popup_mobtv_noti_window_t2

0x0001,

0xfc7e,	// (0x00041548) popup_mobtv_noti_window_t

0x0416,	// (0x00031ce0) bg_popup_mobtv_noti_window_pane_g1

0x52ac,	// (0x00036b76) sc_clock_pane

0x52ac,	// (0x00036b76) main_fs_bigclock_pane

0xb1d4,	// (0x0003ca9e) blid2_tripm_pane_t4_ParamLimits

0xb1d4,	// (0x0003ca9e) blid2_tripm_pane_t4

0xba98,	// (0x0003d362) sc_clock_pane_g1_ParamLimits

0xba98,	// (0x0003d362) sc_clock_pane_g1

0xbaa6,	// (0x0003d370) sc_clock_pane_t1_ParamLimits

0xbaa6,	// (0x0003d370) sc_clock_pane_t1

0xbab9,	// (0x0003d383) sc_clock_pane_t2_ParamLimits

0xbab9,	// (0x0003d383) sc_clock_pane_t2

0xbacb,	// (0x0003d395) sc_clock_pane_t3_ParamLimits

0xbacb,	// (0x0003d395) sc_clock_pane_t3

0x0004,

0xfc83,	// (0x0004154d) sc_clock_pane_t_ParamLimits

0xfc83,	// (0x0004154d) sc_clock_pane_t

0xc2b6,	// (0x0003db80) main_fs_bigclock_indicator_pane_ParamLimits

0xc2b6,	// (0x0003db80) main_fs_bigclock_indicator_pane

0xbb4f,	// (0x0003d419) main_fs_bigclock_pane_g1_ParamLimits

0xbb4f,	// (0x0003d419) main_fs_bigclock_pane_g1

0xc2c2,	// (0x0003db8c) main_fs_bigclock_pane_t1_ParamLimits

0xc2c2,	// (0x0003db8c) main_fs_bigclock_pane_t1

0xc2d4,	// (0x0003db9e) main_fs_bigclock_pane_t2_ParamLimits

0xc2d4,	// (0x0003db9e) main_fs_bigclock_pane_t2

0xc2e8,	// (0x0003dbb2) main_fs_bigclock_pane_t3_ParamLimits

0xc2e8,	// (0x0003dbb2) main_fs_bigclock_pane_t3

0x0002,

0xfe82,	// (0x0004174c) main_fs_bigclock_pane_t_ParamLimits

0xfe82,	// (0x0004174c) main_fs_bigclock_pane_t

0x2e65,	// (0x0003472f) main_fs_bigclock_indicator_pane_g1

0x1f3b,	// (0x00033805) ncim_query_content_pane_g2_ParamLimits

0x1f3b,	// (0x00033805) ncim_query_content_pane_g2

0x0001,

0xfc10,	// (0x000414da) ncim_query_content_pane_g_ParamLimits

0xfc10,	// (0x000414da) ncim_query_content_pane_g

0xbadf,	// (0x0003d3a9) sc_clock_pane_t4_ParamLimits

0xbadf,	// (0x0003d3a9) sc_clock_pane_t4

0xe2c7,	// (0x0003fb91) main_radioblah_pane

0x1040,	// (0x0003290a) cell_call4_button_pane_t1_copy1_ParamLimits

0x1040,	// (0x0003290a) cell_call4_button_pane_t1_copy1

0xb781,	// (0x0003d04b) main_ncimui_pane_t1_ParamLimits

0xb781,	// (0x0003d04b) main_ncimui_pane_t1

0xb79b,	// (0x0003d065) main_ncimui_pane_t2_ParamLimits

0xb79b,	// (0x0003d065) main_ncimui_pane_t2

0x0002,

0xfc09,	// (0x000414d3) main_ncimui_pane_t_ParamLimits

0xfc09,	// (0x000414d3) main_ncimui_pane_t

0x239d,	// (0x00033c67) main_radioblah_anim_pane_ParamLimits

0x239d,	// (0x00033c67) main_radioblah_anim_pane

0x23ae,	// (0x00033c78) main_radioblah_info_pane_ParamLimits

0x23ae,	// (0x00033c78) main_radioblah_info_pane

0x23c2,	// (0x00033c8c) main_radioblah_pane_t1_ParamLimits

0x23c2,	// (0x00033c8c) main_radioblah_pane_t1

0x23de,	// (0x00033ca8) main_radioblah_pane_t2_ParamLimits

0x23de,	// (0x00033ca8) main_radioblah_pane_t2

0x0003,

0xfca4,	// (0x0004156e) main_radioblah_pane_t_ParamLimits

0xfca4,	// (0x0004156e) main_radioblah_pane_t

0xbba1,	// (0x0003d46b) main_radioblah_rocker_ctrl_pane_ParamLimits

0xbba1,	// (0x0003d46b) main_radioblah_rocker_ctrl_pane

0x2426,	// (0x00033cf0) main_radioblah_info_pane_t1_ParamLimits

0x2426,	// (0x00033cf0) main_radioblah_info_pane_t1

0xbbe6,	// (0x0003d4b0) main_radioblah_info_pane_t2_ParamLimits

0xbbe6,	// (0x0003d4b0) main_radioblah_info_pane_t2

0x0003,

0xfcad,	// (0x00041577) main_radioblah_info_pane_t_ParamLimits

0xfcad,	// (0x00041577) main_radioblah_info_pane_t

0x0416,	// (0x00031ce0) main_radioblah_rocker_ctrl_pane_g1

0xbc96,	// (0x0003d560) main_radioblah_rocker_ctrl_pane_g2

0xbc9e,	// (0x0003d568) main_radioblah_rocker_ctrl_pane_g3

0xbca6,	// (0x0003d570) main_radioblah_rocker_ctrl_pane_g4

0xbcae,	// (0x0003d578) main_radioblah_rocker_ctrl_pane_g5

0xbcb6,	// (0x0003d580) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcb6,	// (0x00041580) main_radioblah_rocker_ctrl_pane_g

0xb73e,	// (0x0003d008) main_cset_text2_pane_t1_copy1_ParamLimits

0xa015,	// (0x0003b8df) cam4_image_uncrop_qvga_pane

0xa15c,	// (0x0003ba26) vid4_image_uncrop_qcif_pane

0xb362,	// (0x0003cc2c) cam6_image_uncrop_qvga_pane_ParamLimits

0xb362,	// (0x0003cc2c) cam6_image_uncrop_qvga_pane

0x1b7a,	// (0x00033444) vid6_image_uncrop_qcif_pane_ParamLimits

0x1b7a,	// (0x00033444) vid6_image_uncrop_qcif_pane

0x52ac,	// (0x00036b76) bg_popup_preview_window_pane_cp03

0x1eed,	// (0x000337b7) list_cset_text2_pane

0x1ef5,	// (0x000337bf) main_cset6_text2_pane_g1

0x1efd,	// (0x000337c7) main_cset6_text2_pane_t1

0xbcbe,	// (0x0003d588) list_cset_text2_pane_t1_ParamLimits

0xbcbe,	// (0x0003d588) list_cset_text2_pane_t1

0xe2c7,	// (0x0003fb91) main_radioblah_pane_ParamLimits

0xba3e,	// (0x0003d308) main_mobtv_info_pane_t3_ParamLimits

0xba3e,	// (0x0003d308) main_mobtv_info_pane_t3

0xbb8f,	// (0x0003d459) main_radioblah_pane_g1

0xbbba,	// (0x0003d484) main_radioblah_info_pane_g1

0xbc3b,	// (0x0003d505) main_radioblah_info_pane_t3_ParamLimits

0xbc3b,	// (0x0003d505) main_radioblah_info_pane_t3

0x6fe5,	// (0x000388af) highlight_cell_cale_month_pane_ParamLimits

0x6fe5,	// (0x000388af) highlight_cell_cale_month_pane

0x52ac,	// (0x00036b76) main_phob_fisheye_pane

0x0770,	// (0x0003203a) scroll_pane_cp0031_ParamLimits

0x0770,	// (0x0003203a) scroll_pane_cp0031

0x1c88,	// (0x00033552) wait_bar_pane_cp08_ParamLimits

0xb507,	// (0x0003cdd1) cset_list_set_pane_copy1_ParamLimits

0x2460,	// (0x00033d2a) highlight_cell_cale_month_pane_g1

0xbcdb,	// (0x0003d5a5) highlight_cell_cale_month_pane_t1

0x1814,	// (0x000330de) list_gen_pane_cp01

0x1328,	// (0x00032bf2) scroll_pane_01

0xbce9,	// (0x0003d5b3) list_single_double_fisheye_pane

0x4915,	// (0x000361df) list_double_fisheye_pane_g1_ParamLimits

0x4915,	// (0x000361df) list_double_fisheye_pane_g1

0x4921,	// (0x000361eb) list_double_fisheye_pane_g2_ParamLimits

0x4921,	// (0x000361eb) list_double_fisheye_pane_g2

0xbcf2,	// (0x0003d5bc) list_double_fisheye_pane_g3_ParamLimits

0xbcf2,	// (0x0003d5bc) list_double_fisheye_pane_g3

0x0004,

0xfcc3,	// (0x0004158d) list_double_fisheye_pane_g_ParamLimits

0xfcc3,	// (0x0004158d) list_double_fisheye_pane_g

0x4952,	// (0x0003621c) list_double_fisheye_pane_t1_ParamLimits

0x4952,	// (0x0003621c) list_double_fisheye_pane_t1

0x496d,	// (0x00036237) list_double_fisheye_pane_t2_ParamLimits

0x496d,	// (0x00036237) list_double_fisheye_pane_t2

0x0001,

0xfcce,	// (0x00041598) list_double_fisheye_pane_t_ParamLimits

0xfcce,	// (0x00041598) list_double_fisheye_pane_t

0x52ac,	// (0x00036b76) main_call5_pane

0xbb05,	// (0x0003d3cf) sc_swipe_pane_ParamLimits

0xbb05,	// (0x0003d3cf) sc_swipe_pane

0xbd0a,	// (0x0003d5d4) call5_image_pane_ParamLimits

0xbd0a,	// (0x0003d5d4) call5_image_pane

0xbd1a,	// (0x0003d5e4) call5_swipe_1_pane_ParamLimits

0xbd1a,	// (0x0003d5e4) call5_swipe_1_pane

0xbd26,	// (0x0003d5f0) call5_swipe_2_pane_ParamLimits

0xbd26,	// (0x0003d5f0) call5_swipe_2_pane

0xbd40,	// (0x0003d60a) popup_call5_audio_first_window_ParamLimits

0xbd40,	// (0x0003d60a) popup_call5_audio_first_window

0x0682,	// (0x00031f4c) call5_swipe_1_pane_g1_ParamLimits

0x0682,	// (0x00031f4c) call5_swipe_1_pane_g1

0x2471,	// (0x00033d3b) call5_swipe_1_pane_g2_ParamLimits

0x2471,	// (0x00033d3b) call5_swipe_1_pane_g2

0x0001,

0xfcd3,	// (0x0004159d) call5_swipe_1_pane_g_ParamLimits

0xfcd3,	// (0x0004159d) call5_swipe_1_pane_g

0x247d,	// (0x00033d47) call5_swipe_1_pane_t1_ParamLimits

0x247d,	// (0x00033d47) call5_swipe_1_pane_t1

0x0682,	// (0x00031f4c) call5_swipe_2_pane_g1_ParamLimits

0x0682,	// (0x00031f4c) call5_swipe_2_pane_g1

0x2492,	// (0x00033d5c) call5_swipe_2_pane_g2_ParamLimits

0x2492,	// (0x00033d5c) call5_swipe_2_pane_g2

0x0001,

0xfcd8,	// (0x000415a2) call5_swipe_2_pane_g_ParamLimits

0xfcd8,	// (0x000415a2) call5_swipe_2_pane_g

0x249e,	// (0x00033d68) call5_swipe_2_pane_t1_ParamLimits

0x249e,	// (0x00033d68) call5_swipe_2_pane_t1

0x24b3,	// (0x00033d7d) sc_swipe_pane_g1_ParamLimits

0x24b3,	// (0x00033d7d) sc_swipe_pane_g1

0x24c0,	// (0x00033d8a) sc_swipe_pane_g2_ParamLimits

0x24c0,	// (0x00033d8a) sc_swipe_pane_g2

0x0001,

0xfcdd,	// (0x000415a7) sc_swipe_pane_g_ParamLimits

0xfcdd,	// (0x000415a7) sc_swipe_pane_g

0x24cc,	// (0x00033d96) sc_swipe_pane_t1_ParamLimits

0x24cc,	// (0x00033d96) sc_swipe_pane_t1

0x52ac,	// (0x00036b76) main_cmail_launcher_pane

0xbd4e,	// (0x0003d618) aid_size_cell_cmail_l_ParamLimits

0xbd4e,	// (0x0003d618) aid_size_cell_cmail_l

0xbd5e,	// (0x0003d628) grid_cmail_l_pane_ParamLimits

0xbd5e,	// (0x0003d628) grid_cmail_l_pane

0xbd6e,	// (0x0003d638) cell_cmail_l_pane_ParamLimits

0xbd6e,	// (0x0003d638) cell_cmail_l_pane

0xbd82,	// (0x0003d64c) cell_cmail_l_pane_g1_ParamLimits

0xbd82,	// (0x0003d64c) cell_cmail_l_pane_g1

0xbd8e,	// (0x0003d658) cell_cmail_l_pane_t1_ParamLimits

0xbd8e,	// (0x0003d658) cell_cmail_l_pane_t1

0x24e1,	// (0x00033dab) cell_cmail_l_pane_t2_ParamLimits

0x24e1,	// (0x00033dab) cell_cmail_l_pane_t2

0x0001,

0xfce2,	// (0x000415ac) cell_cmail_l_pane_t_ParamLimits

0xfce2,	// (0x000415ac) cell_cmail_l_pane_t

0xe2c7,	// (0x0003fb91) grid_highlight_pane_cp018_ParamLimits

0xe2c7,	// (0x0003fb91) grid_highlight_pane_cp018

0x53c3,	// (0x00036c8d) main2_pane_ParamLimits

0x53c3,	// (0x00036c8d) main2_pane

0xd1b3,	// (0x0003ea7d) popup_sp_fs_action_menu_bg_pane_g1

0xd1bb,	// (0x0003ea85) popup_sp_fs_action_menu_bg_pane_g2

0xd1c3,	// (0x0003ea8d) popup_sp_fs_action_menu_bg_pane_g3

0xd1cb,	// (0x0003ea95) popup_sp_fs_action_menu_bg_pane_g4

0xd1d3,	// (0x0003ea9d) popup_sp_fs_action_menu_bg_pane_g5

0xd1db,	// (0x0003eaa5) popup_sp_fs_action_menu_bg_pane_g6

0xd1e3,	// (0x0003eaad) popup_sp_fs_action_menu_bg_pane_g7

0xd1eb,	// (0x0003eab5) popup_sp_fs_action_menu_bg_pane_g8

0xd1f3,	// (0x0003eabd) popup_sp_fs_action_menu_bg_pane_g9

0xd1fb,	// (0x0003eac5) popup_sp_fs_action_menu_bg_pane_g10

0xd1fb,	// (0x0003eac5) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1ac,	// (0x00040a76) popup_sp_fs_action_menu_bg_pane_g

0x4110,	// (0x000359da) list_medium_line_x2_t3_g3_g1_ParamLimits

0x4110,	// (0x000359da) list_medium_line_x2_t3_g3_g1

0x411c,	// (0x000359e6) list_medium_line_x2_t3_g3_g2_ParamLimits

0x411c,	// (0x000359e6) list_medium_line_x2_t3_g3_g2

0x4128,	// (0x000359f2) list_medium_line_x2_t3_g3_g3_ParamLimits

0x4128,	// (0x000359f2) list_medium_line_x2_t3_g3_g3

0x0002,

0xf25c,	// (0x00040b26) list_medium_line_x2_t3_g3_g_ParamLimits

0xf25c,	// (0x00040b26) list_medium_line_x2_t3_g3_g

0x4134,	// (0x000359fe) list_medium_line_x2_t3_g3_t1_ParamLimits

0x4134,	// (0x000359fe) list_medium_line_x2_t3_g3_t1

0x4149,	// (0x00035a13) list_medium_line_x2_t3_g3_t2_ParamLimits

0x4149,	// (0x00035a13) list_medium_line_x2_t3_g3_t2

0x415b,	// (0x00035a25) list_medium_line_x2_t3_g3_t3_ParamLimits

0x415b,	// (0x00035a25) list_medium_line_x2_t3_g3_t3

0x0002,

0xf263,	// (0x00040b2d) list_medium_line_x2_t3_g3_t_ParamLimits

0xf263,	// (0x00040b2d) list_medium_line_x2_t3_g3_t

0x4110,	// (0x000359da) list_medium_line_x2_t3_g2_g1_ParamLimits

0x4110,	// (0x000359da) list_medium_line_x2_t3_g2_g1

0x4128,	// (0x000359f2) list_medium_line_x2_t3_g2_g2_ParamLimits

0x4128,	// (0x000359f2) list_medium_line_x2_t3_g2_g2

0x0001,

0xf26a,	// (0x00040b34) list_medium_line_x2_t3_g2_g_ParamLimits

0xf26a,	// (0x00040b34) list_medium_line_x2_t3_g2_g

0x4170,	// (0x00035a3a) list_medium_line_x2_t3_g2_t1_ParamLimits

0x4170,	// (0x00035a3a) list_medium_line_x2_t3_g2_t1

0x4186,	// (0x00035a50) list_medium_line_x2_t3_g2_t2_ParamLimits

0x4186,	// (0x00035a50) list_medium_line_x2_t3_g2_t2

0x415b,	// (0x00035a25) list_medium_line_x2_t3_g2_t3_ParamLimits

0x415b,	// (0x00035a25) list_medium_line_x2_t3_g2_t3

0x0002,

0xf26f,	// (0x00040b39) list_medium_line_x2_t3_g2_t_ParamLimits

0xf26f,	// (0x00040b39) list_medium_line_x2_t3_g2_t

0x4110,	// (0x000359da) list_medium_line_x2_t4_g4_g1_ParamLimits

0x4110,	// (0x000359da) list_medium_line_x2_t4_g4_g1

0x4198,	// (0x00035a62) list_medium_line_x2_t4_g4_g2_ParamLimits

0x4198,	// (0x00035a62) list_medium_line_x2_t4_g4_g2

0x411c,	// (0x000359e6) list_medium_line_x2_t4_g4_g3_ParamLimits

0x411c,	// (0x000359e6) list_medium_line_x2_t4_g4_g3

0x41a4,	// (0x00035a6e) list_medium_line_x2_t4_g4_g4_ParamLimits

0x41a4,	// (0x00035a6e) list_medium_line_x2_t4_g4_g4

0x0003,

0xf276,	// (0x00040b40) list_medium_line_x2_t4_g4_g_ParamLimits

0xf276,	// (0x00040b40) list_medium_line_x2_t4_g4_g

0x41b0,	// (0x00035a7a) list_medium_line_x2_t4_g4_t1_ParamLimits

0x41b0,	// (0x00035a7a) list_medium_line_x2_t4_g4_t1

0x41ca,	// (0x00035a94) list_medium_line_x2_t4_g4_t2_ParamLimits

0x41ca,	// (0x00035a94) list_medium_line_x2_t4_g4_t2

0x41e0,	// (0x00035aaa) list_medium_line_x2_t4_g4_t3_ParamLimits

0x41e0,	// (0x00035aaa) list_medium_line_x2_t4_g4_t3

0x41f5,	// (0x00035abf) list_medium_line_x2_t4_g4_t4_ParamLimits

0x41f5,	// (0x00035abf) list_medium_line_x2_t4_g4_t4

0x0003,

0xf27f,	// (0x00040b49) list_medium_line_x2_t4_g4_t_ParamLimits

0xf27f,	// (0x00040b49) list_medium_line_x2_t4_g4_t

0x4110,	// (0x000359da) list_medium_line_x2_t2_g4_g1_ParamLimits

0x4110,	// (0x000359da) list_medium_line_x2_t2_g4_g1

0x4198,	// (0x00035a62) list_medium_line_x2_t2_g4_g2_ParamLimits

0x4198,	// (0x00035a62) list_medium_line_x2_t2_g4_g2

0x411c,	// (0x000359e6) list_medium_line_x2_t2_g4_g3_ParamLimits

0x411c,	// (0x000359e6) list_medium_line_x2_t2_g4_g3

0x4128,	// (0x000359f2) list_medium_line_x2_t2_g4_g4_ParamLimits

0x4128,	// (0x000359f2) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2e6,	// (0x00040bb0) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2e6,	// (0x00040bb0) list_medium_line_x2_t2_g4_g

0x4207,	// (0x00035ad1) list_medium_line_x2_t2_g4_t1_ParamLimits

0x4207,	// (0x00035ad1) list_medium_line_x2_t2_g4_t1

0x415b,	// (0x00035a25) list_medium_line_x2_t2_g4_t2_ParamLimits

0x415b,	// (0x00035a25) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2ef,	// (0x00040bb9) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2ef,	// (0x00040bb9) list_medium_line_x2_t2_g4_t

0x4110,	// (0x000359da) list_medium_line_x2_t2_g3_g1_ParamLimits

0x4110,	// (0x000359da) list_medium_line_x2_t2_g3_g1

0x411c,	// (0x000359e6) list_medium_line_x2_t2_g3_g2_ParamLimits

0x411c,	// (0x000359e6) list_medium_line_x2_t2_g3_g2

0x4128,	// (0x000359f2) list_medium_line_x2_t2_g3_g3_ParamLimits

0x4128,	// (0x000359f2) list_medium_line_x2_t2_g3_g3

0x0002,

0xf25c,	// (0x00040b26) list_medium_line_x2_t2_g3_g_ParamLimits

0xf25c,	// (0x00040b26) list_medium_line_x2_t2_g3_g

0x421c,	// (0x00035ae6) list_medium_line_x2_t2_g3_t1_ParamLimits

0x421c,	// (0x00035ae6) list_medium_line_x2_t2_g3_t1

0x415b,	// (0x00035a25) list_medium_line_x2_t2_g3_t2_ParamLimits

0x415b,	// (0x00035a25) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2f4,	// (0x00040bbe) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2f4,	// (0x00040bbe) list_medium_line_x2_t2_g3_t

0x7197,	// (0x00038a61) main_sp_fs_list_pane_ParamLimits

0x7197,	// (0x00038a61) main_sp_fs_list_pane

0x71a3,	// (0x00038a6d) sp_fs_scroll_pane_ParamLimits

0x71a3,	// (0x00038a6d) sp_fs_scroll_pane

0x4231,	// (0x00035afb) list_medium_line_x2_t3_t1

0x4241,	// (0x00035b0b) list_medium_line_x2_t3_t2

0x424f,	// (0x00035b19) list_medium_line_x2_t3_t3

0x0002,

0xf33f,	// (0x00040c09) list_medium_line_x2_t3_t

0x425d,	// (0x00035b27) list_medium_line_x3_t4_t1

0x426d,	// (0x00035b37) list_medium_line_x3_t4_t2

0x427b,	// (0x00035b45) list_medium_line_x3_t4_t3

0x424f,	// (0x00035b19) list_medium_line_x3_t4_t4

0x0003,

0xf346,	// (0x00040c10) list_medium_line_x3_t4_t

0x4289,	// (0x00035b53) list_medium_line_x4_t5_t1

0x4299,	// (0x00035b63) list_medium_line_x4_t5_t2

0x427b,	// (0x00035b45) list_medium_line_x4_t5_t3

0x42a7,	// (0x00035b71) list_medium_line_x4_t5_t4

0x424f,	// (0x00035b19) list_medium_line_x4_t5_t5

0x0004,

0xf34f,	// (0x00040c19) list_medium_line_x4_t5_t

0x4110,	// (0x000359da) list_medium_line_t4_g4_g1_ParamLimits

0x4110,	// (0x000359da) list_medium_line_t4_g4_g1

0x41a4,	// (0x00035a6e) list_medium_line_t4_g4_g2_ParamLimits

0x41a4,	// (0x00035a6e) list_medium_line_t4_g4_g2

0x42b5,	// (0x00035b7f) list_medium_line_t4_g4_g3_ParamLimits

0x42b5,	// (0x00035b7f) list_medium_line_t4_g4_g3

0x4128,	// (0x000359f2) list_medium_line_t4_g4_g4_ParamLimits

0x4128,	// (0x000359f2) list_medium_line_t4_g4_g4

0x0003,

0xf35a,	// (0x00040c24) list_medium_line_t4_g4_g_ParamLimits

0xf35a,	// (0x00040c24) list_medium_line_t4_g4_g

0x42c1,	// (0x00035b8b) list_medium_line_t4_g4_t1_ParamLimits

0x42c1,	// (0x00035b8b) list_medium_line_t4_g4_t1

0x42d6,	// (0x00035ba0) list_medium_line_t4_g4_t2_ParamLimits

0x42d6,	// (0x00035ba0) list_medium_line_t4_g4_t2

0x42eb,	// (0x00035bb5) list_medium_line_t4_g4_t3_ParamLimits

0x42eb,	// (0x00035bb5) list_medium_line_t4_g4_t3

0x415b,	// (0x00035a25) list_medium_line_t4_g4_t4_ParamLimits

0x415b,	// (0x00035a25) list_medium_line_t4_g4_t4

0x0003,

0xf363,	// (0x00040c2d) list_medium_line_t4_g4_t_ParamLimits

0xf363,	// (0x00040c2d) list_medium_line_t4_g4_t

0x72c0,	// (0x00038b8a) chi_dic_find_pane_g1

0x8209,	// (0x00039ad3) main_tport_pane

0x4595,	// (0x00035e5f) list_medium_line_plain_t1

0x45a3,	// (0x00035e6d) list_medium_line_t2_g2_g1_ParamLimits

0x45a3,	// (0x00035e6d) list_medium_line_t2_g2_g1

0x45af,	// (0x00035e79) list_medium_line_t2_g2_g2_ParamLimits

0x45af,	// (0x00035e79) list_medium_line_t2_g2_g2

0x0001,

0xfa1f,	// (0x000412e9) list_medium_line_t2_g2_g_ParamLimits

0xfa1f,	// (0x000412e9) list_medium_line_t2_g2_g

0x45bb,	// (0x00035e85) list_medium_line_t2_g2_t1_ParamLimits

0x45bb,	// (0x00035e85) list_medium_line_t2_g2_t1

0x45d5,	// (0x00035e9f) list_medium_line_t2_g2_t2_ParamLimits

0x45d5,	// (0x00035e9f) list_medium_line_t2_g2_t2

0x0001,

0xfa24,	// (0x000412ee) list_medium_line_t2_g2_t_ParamLimits

0xfa24,	// (0x000412ee) list_medium_line_t2_g2_t

0x47f4,	// (0x000360be) aid_sp_fs_list_icon_a_sm

0x47fc,	// (0x000360c6) aid_sp_fs_list_icon_d

0x2c9a,	// (0x00034564) aid_sp_fs_text_primary

0x29f8,	// (0x000342c2) aid_sp_fs_text_secondary

0x4804,	// (0x000360ce) list_medium_line

0x4804,	// (0x000360ce) list_medium_line_g2

0x4804,	// (0x000360ce) list_medium_line_g3

0x4804,	// (0x000360ce) list_medium_line_plain

0x4804,	// (0x000360ce) list_medium_line_plain_t2

0x4804,	// (0x000360ce) list_medium_line_plain_t3

0x4804,	// (0x000360ce) list_medium_line_right_icon

0x4804,	// (0x000360ce) list_medium_line_right_iconx2

0x4804,	// (0x000360ce) list_medium_line_t2

0x4804,	// (0x000360ce) list_medium_line_t2_g2

0x4804,	// (0x000360ce) list_medium_line_t2_g3

0x4804,	// (0x000360ce) list_medium_line_t2_right_icon

0x4804,	// (0x000360ce) list_medium_line_t2_right_iconx2

0x4804,	// (0x000360ce) list_medium_line_t3

0x4804,	// (0x000360ce) list_medium_line_t3_g2

0x4804,	// (0x000360ce) list_medium_line_t3_g3

0x4804,	// (0x000360ce) list_medium_line_t3_right_iconx2

0x480d,	// (0x000360d7) list_medium_line_t4_g4

0x4816,	// (0x000360e0) list_medium_line_x2

0x4816,	// (0x000360e0) list_medium_line_x2_t2_g2

0x4816,	// (0x000360e0) list_medium_line_x2_t2_g3

0x4816,	// (0x000360e0) list_medium_line_x2_t2_g4

0x4816,	// (0x000360e0) list_medium_line_x2_t3

0x4816,	// (0x000360e0) list_medium_line_x2_t3_g2

0x4816,	// (0x000360e0) list_medium_line_x2_t3_g3

0x4816,	// (0x000360e0) list_medium_line_x2_t3_g4

0x4816,	// (0x000360e0) list_medium_line_x2_t4_g2

0x4816,	// (0x000360e0) list_medium_line_x2_t4_g4

0x481f,	// (0x000360e9) list_medium_line_x3

0x481f,	// (0x000360e9) list_medium_line_x3_t4

0x481f,	// (0x000360e9) list_medium_line_x3_t4_g4

0x480d,	// (0x000360d7) list_medium_line_x4_t4

0x480d,	// (0x000360d7) list_medium_line_x4_t4_g7

0x480d,	// (0x000360d7) list_medium_line_x4_t5

0x4828,	// (0x000360f2) list_single_fs_dyc_pane_ParamLimits

0x4828,	// (0x000360f2) list_single_fs_dyc_pane

0x4110,	// (0x000359da) list_medium_line_x4_t4_g7_g1_ParamLimits

0x4110,	// (0x000359da) list_medium_line_x4_t4_g7_g1

0x4844,	// (0x0003610e) list_medium_line_x4_t4_g7_g2_ParamLimits

0x4844,	// (0x0003610e) list_medium_line_x4_t4_g7_g2

0x4850,	// (0x0003611a) list_medium_line_x4_t4_g7_g3_ParamLimits

0x4850,	// (0x0003611a) list_medium_line_x4_t4_g7_g3

0x485f,	// (0x00036129) list_medium_line_x4_t4_g7_g4_ParamLimits

0x485f,	// (0x00036129) list_medium_line_x4_t4_g7_g4

0x486b,	// (0x00036135) list_medium_line_x4_t4_g7_g5_ParamLimits

0x486b,	// (0x00036135) list_medium_line_x4_t4_g7_g5

0x487a,	// (0x00036144) list_medium_line_x4_t4_g7_g6_ParamLimits

0x487a,	// (0x00036144) list_medium_line_x4_t4_g7_g6

0x4889,	// (0x00036153) list_medium_line_x4_t4_g7_g7_ParamLimits

0x4889,	// (0x00036153) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbef,	// (0x000414b9) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbef,	// (0x000414b9) list_medium_line_x4_t4_g7_g

0x4895,	// (0x0003615f) list_medium_line_x4_t4_g7_t1_ParamLimits

0x4895,	// (0x0003615f) list_medium_line_x4_t4_g7_t1

0x48aa,	// (0x00036174) list_medium_line_x4_t4_g7_t2_ParamLimits

0x48aa,	// (0x00036174) list_medium_line_x4_t4_g7_t2

0x48bf,	// (0x00036189) list_medium_line_x4_t4_g7_t3_ParamLimits

0x48bf,	// (0x00036189) list_medium_line_x4_t4_g7_t3

0x48d4,	// (0x0003619e) list_medium_line_x4_t4_g7_t4_ParamLimits

0x48d4,	// (0x0003619e) list_medium_line_x4_t4_g7_t4

0x48e6,	// (0x000361b0) list_medium_line_x4_t4_g7_t5_ParamLimits

0x48e6,	// (0x000361b0) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbfe,	// (0x000414c8) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbfe,	// (0x000414c8) list_medium_line_x4_t4_g7_t

0x48f8,	// (0x000361c2) list_single_dyc_row_pane_ParamLimits

0x48f8,	// (0x000361c2) list_single_dyc_row_pane

0xbcfe,	// (0x0003d5c8) call5_gesture_pane_ParamLimits

0xbcfe,	// (0x0003d5c8) call5_gesture_pane

0xbd32,	// (0x0003d5fc) call5_windows_pane_ParamLimits

0xbd32,	// (0x0003d5fc) call5_windows_pane

0xbda4,	// (0x0003d66e) call5_swipe_1_pane_cp_ParamLimits

0xbda4,	// (0x0003d66e) call5_swipe_1_pane_cp

0xbdb0,	// (0x0003d67a) call5_swipe_2_pane_cp_ParamLimits

0xbdb0,	// (0x0003d67a) call5_swipe_2_pane_cp

0xdbf9,	// (0x0003f4c3) call5_image_pane_cp

0xbdbc,	// (0x0003d686) popup_call5_audio_first_window_cp_ParamLimits

0xbdbc,	// (0x0003d686) popup_call5_audio_first_window_cp

0x24b3,	// (0x00033d7d) call5_swipe_1_pane_g1_cp_ParamLimits

0x24b3,	// (0x00033d7d) call5_swipe_1_pane_g1_cp

0x24f3,	// (0x00033dbd) call5_swipe_1_pane_g2_cp

0x24cc,	// (0x00033d96) call5_swipe_1_pane_t1_cp_ParamLimits

0x24cc,	// (0x00033d96) call5_swipe_1_pane_t1_cp

0x24b3,	// (0x00033d7d) call5_swipe_2_pane_g1_cp_ParamLimits

0x24b3,	// (0x00033d7d) call5_swipe_2_pane_g1_cp

0x24fb,	// (0x00033dc5) call5_swipe_2_pane_g2_cp

0x2503,	// (0x00033dcd) call5_swipe_2_pane_t1_cp_ParamLimits

0x2503,	// (0x00033dcd) call5_swipe_2_pane_t1_cp

0xe2c7,	// (0x0003fb91) main_sp_fs_email_pane

0x2518,	// (0x00033de2) main_sp_fs_listscroll_pane_te

0x498f,	// (0x00036259) popup_sp_fs_action_menu_pane_ParamLimits

0x498f,	// (0x00036259) popup_sp_fs_action_menu_pane

0x0416,	// (0x00031ce0) bg_sp_fs_ctrlbar_pane_g1

0x2565,	// (0x00033e2f) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x256e,	// (0x00033e38) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x2577,	// (0x00033e41) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x0416,	// (0x00031ce0) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfce7,	// (0x000415b1) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x01fb,	// (0x00031ac5) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x01fb,	// (0x00031ac5) bg_sp_fs_ctrlbar_ddmenu_pane

0x2580,	// (0x00033e4a) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x2580,	// (0x00033e4a) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x258c,	// (0x00033e56) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x258c,	// (0x00033e56) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcf0,	// (0x000415ba) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcf0,	// (0x000415ba) main_sp_fs_ctrlbar_ddmenu_pane_g

0x2598,	// (0x00033e62) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x2598,	// (0x00033e62) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x49d3,	// (0x0003629d) list_medium_line_t2_right_icon_g1

0x49db,	// (0x000362a5) list_medium_line_t2_right_icon_t1

0x49eb,	// (0x000362b5) list_medium_line_t2_right_icon_t2

0x0001,

0xfcf5,	// (0x000415bf) list_medium_line_t2_right_icon_t

0xefff,	// (0x000408c9) bg_sp_fs_ctrlbar_pane_ParamLimits

0xefff,	// (0x000408c9) bg_sp_fs_ctrlbar_pane

0xbe21,	// (0x0003d6eb) main_sp_fs_ctrlbar_button_pane_cp01

0xbe29,	// (0x0003d6f3) main_sp_fs_ctrlbar_ddmenu_pane

0x25f2,	// (0x00033ebc) main_sp_fs_ctrlbar_pane_g1

0x25fe,	// (0x00033ec8) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfcfa,	// (0x000415c4) main_sp_fs_ctrlbar_pane_g

0x260a,	// (0x00033ed4) main_sp_fs_ctrlbar_pane_t1

0x49f9,	// (0x000362c3) main_sp_fs_ctrlbar_pane

0x4a15,	// (0x000362df) main_sp_fs_listscroll_pane_te_cp01

0x4a26,	// (0x000362f0) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x4a26,	// (0x000362f0) popup_sp_fs_action_menu_pane_cp01

0xe2c7,	// (0x0003fb91) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xe2c7,	// (0x0003fb91) bg_sp_fs_highlight_list_pane_cp01

0x4a3e,	// (0x00036308) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x4a3e,	// (0x00036308) sp_fs_action_menu_list_gene_pane_g1

0x262e,	// (0x00033ef8) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x262e,	// (0x00033ef8) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcff,	// (0x000415c9) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcff,	// (0x000415c9) sp_fs_action_menu_list_gene_pane_g

0x4a4d,	// (0x00036317) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x4a4d,	// (0x00036317) sp_fs_action_menu_list_gene_pane_t1

0x4a65,	// (0x0003632f) sp_fs_action_menu_list_gene_pane_ParamLimits

0x4a65,	// (0x0003632f) sp_fs_action_menu_list_gene_pane

0x2674,	// (0x00033f3e) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x2674,	// (0x00033f3e) popup_sp_fs_action_menu_bg_pane

0x4a84,	// (0x0003634e) sp_fs_action_menu_list_pane_ParamLimits

0x4a84,	// (0x0003634e) sp_fs_action_menu_list_pane

0x26a4,	// (0x00033f6e) sp_fs_scroll_pane_cp01_ParamLimits

0x26a4,	// (0x00033f6e) sp_fs_scroll_pane_cp01

0x4aa4,	// (0x0003636e) list_medium_line_plain_t2_t1

0x4ab4,	// (0x0003637e) list_medium_line_plain_t2_t2

0x0001,

0xfd04,	// (0x000415ce) list_medium_line_plain_t2_t

0x4ac2,	// (0x0003638c) list_medium_line_plain_t3_t1

0x4ad2,	// (0x0003639c) list_medium_line_plain_t3_t2

0x4ae0,	// (0x000363aa) list_medium_line_plain_t3_t3

0x0002,

0xfd09,	// (0x000415d3) list_medium_line_plain_t3_t

0x4110,	// (0x000359da) list_medium_line_x2_t2_g2_g1_ParamLimits

0x4110,	// (0x000359da) list_medium_line_x2_t2_g2_g1

0x4128,	// (0x000359f2) list_medium_line_x2_t2_g2_g2_ParamLimits

0x4128,	// (0x000359f2) list_medium_line_x2_t2_g2_g2

0x0001,

0xf26a,	// (0x00040b34) list_medium_line_x2_t2_g2_g_ParamLimits

0xf26a,	// (0x00040b34) list_medium_line_x2_t2_g2_g

0x42c1,	// (0x00035b8b) list_medium_line_x2_t2_g2_t1_ParamLimits

0x42c1,	// (0x00035b8b) list_medium_line_x2_t2_g2_t1

0x415b,	// (0x00035a25) list_medium_line_x2_t2_g2_t2_ParamLimits

0x415b,	// (0x00035a25) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd10,	// (0x000415da) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd10,	// (0x000415da) list_medium_line_x2_t2_g2_t

0x4110,	// (0x000359da) list_medium_line_x2_t4_g2_g1_ParamLimits

0x4110,	// (0x000359da) list_medium_line_x2_t4_g2_g1

0x4aee,	// (0x000363b8) list_medium_line_x2_t4_g2_g2_ParamLimits

0x4aee,	// (0x000363b8) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd15,	// (0x000415df) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd15,	// (0x000415df) list_medium_line_x2_t4_g2_g

0x4b00,	// (0x000363ca) list_medium_line_x2_t4_g2_t1_ParamLimits

0x4b00,	// (0x000363ca) list_medium_line_x2_t4_g2_t1

0x4b1a,	// (0x000363e4) list_medium_line_x2_t4_g2_t2_ParamLimits

0x4b1a,	// (0x000363e4) list_medium_line_x2_t4_g2_t2

0x4b2f,	// (0x000363f9) list_medium_line_x2_t4_g2_t3_ParamLimits

0x4b2f,	// (0x000363f9) list_medium_line_x2_t4_g2_t3

0x415b,	// (0x00035a25) list_medium_line_x2_t4_g2_t4_ParamLimits

0x415b,	// (0x00035a25) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd1a,	// (0x000415e4) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd1a,	// (0x000415e4) list_medium_line_x2_t4_g2_t

0x4b44,	// (0x0003640e) list_medium_line_t3_right_iconx2_g1

0x49d3,	// (0x0003629d) list_medium_line_t3_right_iconx2_g2

0x4b4c,	// (0x00036416) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd23,	// (0x000415ed) list_medium_line_t3_right_iconx2_g

0x4b54,	// (0x0003641e) list_medium_line_t3_right_iconx2_t1

0x4b64,	// (0x0003642e) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd2a,	// (0x000415f4) list_medium_line_t3_right_iconx2_t

0x4110,	// (0x000359da) list_medium_line_x3_t4_g4_g1_ParamLimits

0x4110,	// (0x000359da) list_medium_line_x3_t4_g4_g1

0x411c,	// (0x000359e6) list_medium_line_x3_t4_g4_g2_ParamLimits

0x411c,	// (0x000359e6) list_medium_line_x3_t4_g4_g2

0x41a4,	// (0x00035a6e) list_medium_line_x3_t4_g4_g3_ParamLimits

0x41a4,	// (0x00035a6e) list_medium_line_x3_t4_g4_g3

0x4b72,	// (0x0003643c) list_medium_line_x3_t4_g4_g4_ParamLimits

0x4b72,	// (0x0003643c) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd2f,	// (0x000415f9) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd2f,	// (0x000415f9) list_medium_line_x3_t4_g4_g

0x4b7e,	// (0x00036448) list_medium_line_x3_t4_g4_t1_ParamLimits

0x4b7e,	// (0x00036448) list_medium_line_x3_t4_g4_t1

0x4b95,	// (0x0003645f) list_medium_line_x3_t4_g4_t2_ParamLimits

0x4b95,	// (0x0003645f) list_medium_line_x3_t4_g4_t2

0x42d6,	// (0x00035ba0) list_medium_line_x3_t4_g4_t3_ParamLimits

0x42d6,	// (0x00035ba0) list_medium_line_x3_t4_g4_t3

0x4baa,	// (0x00036474) list_medium_line_x3_t4_g4_t4_ParamLimits

0x4baa,	// (0x00036474) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd38,	// (0x00041602) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd38,	// (0x00041602) list_medium_line_x3_t4_g4_t

0x4bc7,	// (0x00036491) list_single_dyc_row_text_pane_t1_ParamLimits

0x4bc7,	// (0x00036491) list_single_dyc_row_text_pane_t1

0x4bfe,	// (0x000364c8) list_single_dyc_row_text_pane_t2_ParamLimits

0x4bfe,	// (0x000364c8) list_single_dyc_row_text_pane_t2

0x4c58,	// (0x00036522) list_single_dyc_row_text_pane_t3_ParamLimits

0x4c58,	// (0x00036522) list_single_dyc_row_text_pane_t3

0x0002,

0xfd41,	// (0x0004160b) list_single_dyc_row_text_pane_t_ParamLimits

0xfd41,	// (0x0004160b) list_single_dyc_row_text_pane_t

0x4c6a,	// (0x00036534) list_single_dyc_row_pane_g1_ParamLimits

0x4c6a,	// (0x00036534) list_single_dyc_row_pane_g1

0x4c76,	// (0x00036540) list_single_dyc_row_pane_g2_ParamLimits

0x4c76,	// (0x00036540) list_single_dyc_row_pane_g2

0x4c82,	// (0x0003654c) list_single_dyc_row_pane_g3_ParamLimits

0x4c82,	// (0x0003654c) list_single_dyc_row_pane_g3

0x4c8e,	// (0x00036558) list_single_dyc_row_pane_g4_ParamLimits

0x4c8e,	// (0x00036558) list_single_dyc_row_pane_g4

0x0003,

0xfd48,	// (0x00041612) list_single_dyc_row_pane_g_ParamLimits

0xfd48,	// (0x00041612) list_single_dyc_row_pane_g

0x4c9a,	// (0x00036564) list_single_dyc_row_text_pane_ParamLimits

0x4c9a,	// (0x00036564) list_single_dyc_row_text_pane

0x52ac,	// (0x00036b76) bg_sp_fs_scroll_pane

0x275c,	// (0x00034026) thumb_sp_fs_scroll_pane

0x45a3,	// (0x00035e6d) list_medium_line_g1_ParamLimits

0x45a3,	// (0x00035e6d) list_medium_line_g1

0x4cb9,	// (0x00036583) list_medium_line_t1_ParamLimits

0x4cb9,	// (0x00036583) list_medium_line_t1

0x4110,	// (0x000359da) list_medium_line_x2_g1_ParamLimits

0x4110,	// (0x000359da) list_medium_line_x2_g1

0x411c,	// (0x000359e6) list_medium_line_x2_g2_ParamLimits

0x411c,	// (0x000359e6) list_medium_line_x2_g2

0x0001,

0xfd51,	// (0x0004161b) list_medium_line_x2_g_ParamLimits

0xfd51,	// (0x0004161b) list_medium_line_x2_g

0x4cce,	// (0x00036598) list_medium_line_x2_t1_ParamLimits

0x4cce,	// (0x00036598) list_medium_line_x2_t1

0x4110,	// (0x000359da) list_medium_line_x3_g1_ParamLimits

0x4110,	// (0x000359da) list_medium_line_x3_g1

0x411c,	// (0x000359e6) list_medium_line_x3_g2_ParamLimits

0x411c,	// (0x000359e6) list_medium_line_x3_g2

0x0001,

0xfd51,	// (0x0004161b) list_medium_line_x3_g_ParamLimits

0xfd51,	// (0x0004161b) list_medium_line_x3_g

0x4cce,	// (0x00036598) list_medium_line_x3_t1_ParamLimits

0x4cce,	// (0x00036598) list_medium_line_x3_t1

0x2790,	// (0x0003405a) thumb_sp_fs_scroll_pane_g1

0x2799,	// (0x00034063) thumb_sp_fs_scroll_pane_g2

0x27a2,	// (0x0003406c) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd56,	// (0x00041620) thumb_sp_fs_scroll_pane_g

0x2790,	// (0x0003405a) bg_sp_fs_scroll_pane_g1

0x2799,	// (0x00034063) bg_sp_fs_scroll_pane_g2

0x27a2,	// (0x0003406c) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd56,	// (0x00041620) bg_sp_fs_scroll_pane_g

0x4110,	// (0x000359da) list_medium_line_x2_t3_g4_g1_ParamLimits

0x4110,	// (0x000359da) list_medium_line_x2_t3_g4_g1

0x4198,	// (0x00035a62) list_medium_line_x2_t3_g4_g2_ParamLimits

0x4198,	// (0x00035a62) list_medium_line_x2_t3_g4_g2

0x411c,	// (0x000359e6) list_medium_line_x2_t3_g4_g3_ParamLimits

0x411c,	// (0x000359e6) list_medium_line_x2_t3_g4_g3

0x4128,	// (0x000359f2) list_medium_line_x2_t3_g4_g4_ParamLimits

0x4128,	// (0x000359f2) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2e6,	// (0x00040bb0) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2e6,	// (0x00040bb0) list_medium_line_x2_t3_g4_g

0x4ce4,	// (0x000365ae) list_medium_line_x2_t3_g4_t1_ParamLimits

0x4ce4,	// (0x000365ae) list_medium_line_x2_t3_g4_t1

0x4cfa,	// (0x000365c4) list_medium_line_x2_t3_g4_t2_ParamLimits

0x4cfa,	// (0x000365c4) list_medium_line_x2_t3_g4_t2

0x415b,	// (0x00035a25) list_medium_line_x2_t3_g4_t3_ParamLimits

0x415b,	// (0x00035a25) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd5d,	// (0x00041627) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd5d,	// (0x00041627) list_medium_line_x2_t3_g4_t

0x45a3,	// (0x00035e6d) list_medium_line_g2_g1_ParamLimits

0x45a3,	// (0x00035e6d) list_medium_line_g2_g1

0x45af,	// (0x00035e79) list_medium_line_g2_g2_ParamLimits

0x45af,	// (0x00035e79) list_medium_line_g2_g2

0x0001,

0xfa1f,	// (0x000412e9) list_medium_line_g2_g_ParamLimits

0xfa1f,	// (0x000412e9) list_medium_line_g2_g

0x4d14,	// (0x000365de) list_medium_line_g2_t1_ParamLimits

0x4d14,	// (0x000365de) list_medium_line_g2_t1

0x45a3,	// (0x00035e6d) list_medium_line_t3_g2_g1_ParamLimits

0x45a3,	// (0x00035e6d) list_medium_line_t3_g2_g1

0x45af,	// (0x00035e79) list_medium_line_t3_g2_g2_ParamLimits

0x45af,	// (0x00035e79) list_medium_line_t3_g2_g2

0x0001,

0xfa1f,	// (0x000412e9) list_medium_line_t3_g2_g_ParamLimits

0xfa1f,	// (0x000412e9) list_medium_line_t3_g2_g

0x4d29,	// (0x000365f3) list_medium_line_t3_g2_t1_ParamLimits

0x4d29,	// (0x000365f3) list_medium_line_t3_g2_t1

0x4d40,	// (0x0003660a) list_medium_line_t3_g2_t2_ParamLimits

0x4d40,	// (0x0003660a) list_medium_line_t3_g2_t2

0x4d55,	// (0x0003661f) list_medium_line_t3_g2_t3_ParamLimits

0x4d55,	// (0x0003661f) list_medium_line_t3_g2_t3

0x0002,

0xfd64,	// (0x0004162e) list_medium_line_t3_g2_t_ParamLimits

0xfd64,	// (0x0004162e) list_medium_line_t3_g2_t

0x49d3,	// (0x0003629d) list_medium_line_right_icon_g1

0x4d6a,	// (0x00036634) list_medium_line_right_icon_t1

0x45a3,	// (0x00035e6d) list_medium_line_t2_g1_ParamLimits

0x45a3,	// (0x00035e6d) list_medium_line_t2_g1

0x4d78,	// (0x00036642) list_medium_line_t2_t1_ParamLimits

0x4d78,	// (0x00036642) list_medium_line_t2_t1

0x4d92,	// (0x0003665c) list_medium_line_t2_t2_ParamLimits

0x4d92,	// (0x0003665c) list_medium_line_t2_t2

0x0001,

0xfd6b,	// (0x00041635) list_medium_line_t2_t_ParamLimits

0xfd6b,	// (0x00041635) list_medium_line_t2_t

0x45a3,	// (0x00035e6d) list_medium_line_t3_g1_ParamLimits

0x45a3,	// (0x00035e6d) list_medium_line_t3_g1

0x4da7,	// (0x00036671) list_medium_line_t3_t1_ParamLimits

0x4da7,	// (0x00036671) list_medium_line_t3_t1

0x4dbe,	// (0x00036688) list_medium_line_t3_t2_ParamLimits

0x4dbe,	// (0x00036688) list_medium_line_t3_t2

0x4dd3,	// (0x0003669d) list_medium_line_t3_t3_ParamLimits

0x4dd3,	// (0x0003669d) list_medium_line_t3_t3

0x0002,

0xfd70,	// (0x0004163a) list_medium_line_t3_t_ParamLimits

0xfd70,	// (0x0004163a) list_medium_line_t3_t

0x45a3,	// (0x00035e6d) list_medium_line_g3_g1_ParamLimits

0x45a3,	// (0x00035e6d) list_medium_line_g3_g1

0x4de5,	// (0x000366af) list_medium_line_g3_g2_ParamLimits

0x4de5,	// (0x000366af) list_medium_line_g3_g2

0x45af,	// (0x00035e79) list_medium_line_g3_g3_ParamLimits

0x45af,	// (0x00035e79) list_medium_line_g3_g3

0x0002,

0xfd77,	// (0x00041641) list_medium_line_g3_g_ParamLimits

0xfd77,	// (0x00041641) list_medium_line_g3_g

0x4df1,	// (0x000366bb) list_medium_line_g3_t1_ParamLimits

0x4df1,	// (0x000366bb) list_medium_line_g3_t1

0x45a3,	// (0x00035e6d) list_medium_line_t2_g3_g1_ParamLimits

0x45a3,	// (0x00035e6d) list_medium_line_t2_g3_g1

0x4de5,	// (0x000366af) list_medium_line_t2_g3_g2_ParamLimits

0x4de5,	// (0x000366af) list_medium_line_t2_g3_g2

0x45af,	// (0x00035e79) list_medium_line_t2_g3_g3_ParamLimits

0x45af,	// (0x00035e79) list_medium_line_t2_g3_g3

0x0002,

0xfd77,	// (0x00041641) list_medium_line_t2_g3_g_ParamLimits

0xfd77,	// (0x00041641) list_medium_line_t2_g3_g

0x4e06,	// (0x000366d0) list_medium_line_t2_g3_t1_ParamLimits

0x4e06,	// (0x000366d0) list_medium_line_t2_g3_t1

0x4e20,	// (0x000366ea) list_medium_line_t2_g3_t2_ParamLimits

0x4e20,	// (0x000366ea) list_medium_line_t2_g3_t2

0x0001,

0xfd7e,	// (0x00041648) list_medium_line_t2_g3_t_ParamLimits

0xfd7e,	// (0x00041648) list_medium_line_t2_g3_t

0x45a3,	// (0x00035e6d) list_medium_line_t3_g3_g1_ParamLimits

0x45a3,	// (0x00035e6d) list_medium_line_t3_g3_g1

0x4de5,	// (0x000366af) list_medium_line_t3_g3_g2_ParamLimits

0x4de5,	// (0x000366af) list_medium_line_t3_g3_g2

0x45af,	// (0x00035e79) list_medium_line_t3_g3_g3_ParamLimits

0x45af,	// (0x00035e79) list_medium_line_t3_g3_g3

0x0002,

0xfd77,	// (0x00041641) list_medium_line_t3_g3_g_ParamLimits

0xfd77,	// (0x00041641) list_medium_line_t3_g3_g

0x4e35,	// (0x000366ff) list_medium_line_t3_g3_t1_ParamLimits

0x4e35,	// (0x000366ff) list_medium_line_t3_g3_t1

0x4e49,	// (0x00036713) list_medium_line_t3_g3_t2_ParamLimits

0x4e49,	// (0x00036713) list_medium_line_t3_g3_t2

0x4e5b,	// (0x00036725) list_medium_line_t3_g3_t3_ParamLimits

0x4e5b,	// (0x00036725) list_medium_line_t3_g3_t3

0x0002,

0xfd83,	// (0x0004164d) list_medium_line_t3_g3_t_ParamLimits

0xfd83,	// (0x0004164d) list_medium_line_t3_g3_t

0x4b44,	// (0x0003640e) list_medium_line_right_iconx2_g1

0x49d3,	// (0x0003629d) list_medium_line_right_iconx2_g2

0x0001,

0xfd8a,	// (0x00041654) list_medium_line_right_iconx2_g

0x4e6d,	// (0x00036737) list_medium_line_right_iconx2_t1

0x4b44,	// (0x0003640e) list_medium_line_t2_right_iconx2_g1

0x49d3,	// (0x0003629d) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd8a,	// (0x00041654) list_medium_line_t2_right_iconx2_g

0x4e7b,	// (0x00036745) list_medium_line_t2_right_iconx2_t1

0x4e8b,	// (0x00036755) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd8f,	// (0x00041659) list_medium_line_t2_right_iconx2_t

0x4e99,	// (0x00036763) list_medium_line_x4_t4_t1

0x4ea7,	// (0x00036771) list_medium_line_x4_t4_t2

0x4eb7,	// (0x00036781) list_medium_line_x4_t4_t3

0x4ec7,	// (0x00036791) list_medium_line_x4_t4_t4

0x0003,

0xfd94,	// (0x0004165e) list_medium_line_x4_t4_t

0xbe5c,	// (0x0003d726) tport_appsw_pane_ParamLimits

0xbe5c,	// (0x0003d726) tport_appsw_pane

0xbe68,	// (0x0003d732) tport_contact_pane_ParamLimits

0xbe68,	// (0x0003d732) tport_contact_pane

0xbe78,	// (0x0003d742) tport_listscroll_pane_ParamLimits

0xbe78,	// (0x0003d742) tport_listscroll_pane

0xbe88,	// (0x0003d752) cell_tport_appsw_pane_ParamLimits

0xbe88,	// (0x0003d752) cell_tport_appsw_pane

0x06f3,	// (0x00031fbd) tport_appsw_pane_g1_ParamLimits

0x06f3,	// (0x00031fbd) tport_appsw_pane_g1

0x280b,	// (0x000340d5) tport_contact_pane_g1

0x1fc1,	// (0x0003388b) tport_contact_pane_t1

0x2814,	// (0x000340de) tport_contact_pane_t2

0x0001,

0xfd9d,	// (0x00041667) tport_contact_pane_t

0x2822,	// (0x000340ec) list_tport_pane

0x282b,	// (0x000340f5) scroll_pane_cp_030

0x283c,	// (0x00034106) cell_tport_appsw_pane_g1

0x284c,	// (0x00034116) cell_tport_appsw_pane_t1

0x52ac,	// (0x00036b76) grid_highlight_pane_cp019

0xbeb3,	// (0x0003d77d) list_tport_double_graphic_pane_ParamLimits

0xbeb3,	// (0x0003d77d) list_tport_double_graphic_pane

0xe2c7,	// (0x0003fb91) list_highlight_pane_cp023_ParamLimits

0xe2c7,	// (0x0003fb91) list_highlight_pane_cp023

0xbec5,	// (0x0003d78f) list_tport_double_graphic_pane_g1_ParamLimits

0xbec5,	// (0x0003d78f) list_tport_double_graphic_pane_g1

0xbed2,	// (0x0003d79c) list_tport_double_graphic_pane_t1_ParamLimits

0xbed2,	// (0x0003d79c) list_tport_double_graphic_pane_t1

0xbee7,	// (0x0003d7b1) list_tport_double_graphic_pane_t2_ParamLimits

0xbee7,	// (0x0003d7b1) list_tport_double_graphic_pane_t2

0x0001,

0xfda9,	// (0x00041673) list_tport_double_graphic_pane_t_ParamLimits

0xfda9,	// (0x00041673) list_tport_double_graphic_pane_t

0x52ac,	// (0x00036b76) main_cale_note_pane

0xa3ac,	// (0x0003bc76) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0xa3ac,	// (0x0003bc76) cell_vitu2_function_top_wide_pane_cp01

0xba52,	// (0x0003d31c) wait_bar_pane_cp05_ParamLimits

0x52ac,	// (0x00036b76) listscroll_cmail_pane

0x2862,	// (0x0003412c) list_cmail_pane

0xbf03,	// (0x0003d7cd) list_cmail_body_pane

0xbf20,	// (0x0003d7ea) list_single_cmail_header_caption_pane

0xbf45,	// (0x0003d80f) list_single_cmail_header_detail_pane_ParamLimits

0xbf45,	// (0x0003d80f) list_single_cmail_header_detail_pane

0xbf78,	// (0x0003d842) list_single_cmail_header_caption_pane_t1

0x4ed7,	// (0x000367a1) list_single_cmail_header_detail_pane_g1_ParamLimits

0x4ed7,	// (0x000367a1) list_single_cmail_header_detail_pane_g1

0x4eed,	// (0x000367b7) list_single_cmail_header_detail_pane_g2_ParamLimits

0x4eed,	// (0x000367b7) list_single_cmail_header_detail_pane_g2

0x0002,

0xfdae,	// (0x00041678) list_single_cmail_header_detail_pane_g_ParamLimits

0xfdae,	// (0x00041678) list_single_cmail_header_detail_pane_g

0x4ef9,	// (0x000367c3) list_single_cmail_header_detail_pane_t1_ParamLimits

0x4ef9,	// (0x000367c3) list_single_cmail_header_detail_pane_t1

0x4f53,	// (0x0003681d) list_single_cmail_header_editor_pane_bg_ParamLimits

0x4f53,	// (0x0003681d) list_single_cmail_header_editor_pane_bg

0x2170,	// (0x00033a3a) list_cmail_body_pane_g1

0x28e4,	// (0x000341ae) list_cmail_body_pane_t1

0x120e,	// (0x00032ad8) list_single_cmail_header_editor_pane_bg_g1

0xd50e,	// (0x0003edd8) list_single_cmail_header_editor_pane_bg_g1_copy1

0x121e,	// (0x00032ae8) list_single_cmail_header_editor_pane_bg_g1_copy2

0x1216,	// (0x00032ae0) list_single_cmail_header_editor_pane_bg_g1_copy3

0x14bb,	// (0x00032d85) list_single_cmail_header_editor_pane_bg_g1_copy4

0x123e,	// (0x00032b08) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x122e,	// (0x00032af8) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x1236,	// (0x00032b00) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xd4ee,	// (0x0003edb8) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xbf86,	// (0x0003d850) calenote_gesture_pane_ParamLimits

0xbf86,	// (0x0003d850) calenote_gesture_pane

0xbfa0,	// (0x0003d86a) calenote_window_pane_ParamLimits

0xbfa0,	// (0x0003d86a) calenote_window_pane

0x28f2,	// (0x000341bc) popup_note_window_cp01

0xbfb8,	// (0x0003d882) calenote_swipe_1_pane_ParamLimits

0xbfb8,	// (0x0003d882) calenote_swipe_1_pane

0xbdb0,	// (0x0003d67a) calenote_swipe_2_pane_ParamLimits

0xbdb0,	// (0x0003d67a) calenote_swipe_2_pane

0x24b3,	// (0x00033d7d) calenote_swipe_1_pane_g1_ParamLimits

0x24b3,	// (0x00033d7d) calenote_swipe_1_pane_g1

0x24c0,	// (0x00033d8a) calenote_swipe_1_pane_g2_ParamLimits

0x24c0,	// (0x00033d8a) calenote_swipe_1_pane_g2

0x0001,

0xfcdd,	// (0x000415a7) calenote_swipe_1_pane_g_ParamLimits

0xfcdd,	// (0x000415a7) calenote_swipe_1_pane_g

0x2904,	// (0x000341ce) calenote_swipe_1_pane_t1_ParamLimits

0x2904,	// (0x000341ce) calenote_swipe_1_pane_t1

0x24b3,	// (0x00033d7d) calenote_swipe_2_pane_g1_ParamLimits

0x24b3,	// (0x00033d7d) calenote_swipe_2_pane_g1

0x2923,	// (0x000341ed) calenote_swipe_2_pane_g2_ParamLimits

0x2923,	// (0x000341ed) calenote_swipe_2_pane_g2

0x0001,

0xfdba,	// (0x00041684) calenote_swipe_2_pane_g_ParamLimits

0xfdba,	// (0x00041684) calenote_swipe_2_pane_g

0x292f,	// (0x000341f9) calenote_swipe_2_pane_t1_ParamLimits

0x292f,	// (0x000341f9) calenote_swipe_2_pane_t1

0x52ac,	// (0x00036b76) main_mup_navstr_pane

0x9175,	// (0x0003aa3f) main_mup3_pane_t7_ParamLimits

0x9175,	// (0x0003aa3f) main_mup3_pane_t7

0x9b3d,	// (0x0003b407) main_mp4_pane_g6_ParamLimits

0x9b3d,	// (0x0003b407) main_mp4_pane_g6

0x9eaf,	// (0x0003b779) main_image3_pane_t4_ParamLimits

0x9eaf,	// (0x0003b779) main_image3_pane_t4

0xbfcb,	// (0x0003d895) popup_navstr_preview_pane_ParamLimits

0xbfcb,	// (0x0003d895) popup_navstr_preview_pane

0xbfd7,	// (0x0003d8a1) scroll_navstr_pane_ParamLimits

0xbfd7,	// (0x0003d8a1) scroll_navstr_pane

0x52ac,	// (0x00036b76) bg_popup_preview_window_pane_cp04

0x2956,	// (0x00034220) popup_navstr_preview_pane_t1

0xbfe3,	// (0x0003d8ad) scroll_navstr_pane_g1_ParamLimits

0xbfe3,	// (0x0003d8ad) scroll_navstr_pane_g1

0xbff0,	// (0x0003d8ba) scroll_navstr_pane_t1_ParamLimits

0xbff0,	// (0x0003d8ba) scroll_navstr_pane_t1

0x28fb,	// (0x000341c5) bg_button_pane_cp014

0x28fb,	// (0x000341c5) bg_button_pane_cp030

0x4935,	// (0x000361ff) list_double_fisheye_pane_g4_ParamLimits

0x4935,	// (0x000361ff) list_double_fisheye_pane_g4

0x4941,	// (0x0003620b) list_double_fisheye_pane_g5_ParamLimits

0x4941,	// (0x0003620b) list_double_fisheye_pane_g5

0x286a,	// (0x00034134) sp_fs_scroll_pane_cp03

0x25f2,	// (0x00033ebc) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x25fe,	// (0x00033ec8) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcfa,	// (0x000415c4) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x260a,	// (0x00033ed4) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xbef9,	// (0x0003d7c3) sp_fs_scroll_pane_cp02

0xd21e,	// (0x0003eae8) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xd21e,	// (0x0003eae8) popup_sp_fs_calendar_preview_list_single_pane

0x52ac,	// (0x00036b76) main_cam6_pano_pane

0xe2c7,	// (0x0003fb91) main_mup3_pane_ParamLimits

0x52ac,	// (0x00036b76) main_phacti_pane

0xb927,	// (0x0003d1f1) bg_button_pane_cp11

0xb93f,	// (0x0003d209) main_mobtv_info_pane_g2_ParamLimits

0xb93f,	// (0x0003d209) main_mobtv_info_pane_g2

0x0001,

0xfc5a,	// (0x00041524) main_mobtv_info_pane_g_ParamLimits

0xfc5a,	// (0x00041524) main_mobtv_info_pane_g

0xbaf1,	// (0x0003d3bb) sc_clock_pane_t5_ParamLimits

0xbaf1,	// (0x0003d3bb) sc_clock_pane_t5

0xbb8f,	// (0x0003d459) main_radioblah_pane_g1_ParamLimits

0x23f6,	// (0x00033cc0) main_radioblah_pane_t3_ParamLimits

0x23f6,	// (0x00033cc0) main_radioblah_pane_t3

0x240e,	// (0x00033cd8) main_radioblah_pane_t4_ParamLimits

0x240e,	// (0x00033cd8) main_radioblah_pane_t4

0xbbad,	// (0x0003d477) main_radioblah_text_pane_ParamLimits

0xbbad,	// (0x0003d477) main_radioblah_text_pane

0xbbba,	// (0x0003d484) main_radioblah_info_pane_g1_ParamLimits

0xbc4f,	// (0x0003d519) main_radioblah_info_pane_t4_ParamLimits

0xbc4f,	// (0x0003d519) main_radioblah_info_pane_t4

0xe2c7,	// (0x0003fb91) main_sp_fs_calendar_pane

0xc002,	// (0x0003d8cc) main_phacti_pane_g1

0xc00a,	// (0x0003d8d4) phacti_note_pane_ParamLimits

0xc00a,	// (0x0003d8d4) phacti_note_pane

0x296d,	// (0x00034237) phacti_term_pane_ParamLimits

0x296d,	// (0x00034237) phacti_term_pane

0x2982,	// (0x0003424c) phacti_note_pane_t1_ParamLimits

0x2982,	// (0x0003424c) phacti_note_pane_t1

0x4f65,	// (0x0003682f) phacti_term_pane_g1

0x4f6d,	// (0x00036837) phacti_term_pane_t1_ParamLimits

0x4f6d,	// (0x00036837) phacti_term_pane_t1

0x29cb,	// (0x00034295) popup_sp_fs_calendar_preview_list_single_pane_g1

0xd311,	// (0x0003ebdb) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdc4,	// (0x0004168e) popup_sp_fs_calendar_preview_list_single_pane_g

0x29d3,	// (0x0003429d) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x29d3,	// (0x0003429d) popup_sp_fs_calendar_preview_list_single_pane_t1

0x29e8,	// (0x000342b2) aid_popup_sp_fs_bg_corner_pane

0x0416,	// (0x00031ce0) popup_sp_fs_calendar_preview_bg_pane_g1

0x52ac,	// (0x00036b76) popup_sp_fs_calendar_preview_bg_pane

0x29f0,	// (0x000342ba) popup_sp_fs_calendar_preview_list_pane

0xe2c7,	// (0x0003fb91) bg_main_sp_fs_cale_pane_ParamLimits

0xe2c7,	// (0x0003fb91) bg_main_sp_fs_cale_pane

0x4f97,	// (0x00036861) listscroll_cale_mrui_pane_ParamLimits

0x4f97,	// (0x00036861) listscroll_cale_mrui_pane

0x4fab,	// (0x00036875) listscroll_sp_fs_schedule_track_pane

0x4fb4,	// (0x0003687e) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x4fb4,	// (0x0003687e) main_sp_fs_ctrlbar_pane_cp01

0x2a2f,	// (0x000342f9) main_sp_fs_ribbon_pane

0x2a37,	// (0x00034301) popup_sp_fs_cale_preview_window

0xc049,	// (0x0003d913) list_single_sp_fs_schedule_track_pane_ParamLimits

0xc049,	// (0x0003d913) list_single_sp_fs_schedule_track_pane

0x553d,	// (0x00036e07) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x553d,	// (0x00036e07) bg_sp_fs_highlight_list_pane_cp03

0xc062,	// (0x0003d92c) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xc062,	// (0x0003d92c) list_single_sp_fs_schedule_track_pane_g1

0xc06e,	// (0x0003d938) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xc06e,	// (0x0003d938) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdc9,	// (0x00041693) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdc9,	// (0x00041693) list_single_sp_fs_schedule_track_pane_g

0xc07a,	// (0x0003d944) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xc07a,	// (0x0003d944) list_single_sp_fs_schedule_track_pane_t1

0xc092,	// (0x0003d95c) sp_fs_schedule_track_pane_ParamLimits

0xc092,	// (0x0003d95c) sp_fs_schedule_track_pane

0x2a49,	// (0x00034313) sp_fs_schedule_track_pane_g1

0x2a51,	// (0x0003431b) sp_fs_schedule_track_pane_g2

0x2a59,	// (0x00034323) sp_fs_schedule_track_pane_g3

0x2a61,	// (0x0003432b) sp_fs_schedule_track_pane_g4

0x2a69,	// (0x00034333) sp_fs_schedule_track_pane_g5

0x0004,

0xfdce,	// (0x00041698) sp_fs_schedule_track_pane_g

0x120e,	// (0x00032ad8) bg_sp_fs_schedule_viewer_highlight_g1

0xd50e,	// (0x0003edd8) bg_sp_fs_schedule_viewer_highlight_g2

0x1216,	// (0x00032ae0) bg_sp_fs_schedule_viewer_highlight_g3

0x121e,	// (0x00032ae8) bg_sp_fs_schedule_viewer_highlight_g4

0x14bb,	// (0x00032d85) bg_sp_fs_schedule_viewer_highlight_g5

0x122e,	// (0x00032af8) bg_sp_fs_schedule_viewer_highlight_g6

0x1236,	// (0x00032b00) bg_sp_fs_schedule_viewer_highlight_g7

0x123e,	// (0x00032b08) bg_sp_fs_schedule_viewer_highlight_g8

0xd4ee,	// (0x0003edb8) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdd9,	// (0x000416a3) bg_sp_fs_schedule_viewer_highlight_g

0x52ac,	// (0x00036b76) bg_main_sp_fs_ribbon_pane

0xc0a2,	// (0x0003d96c) main_sp_fs_ribbon_pane_g1

0x2a71,	// (0x0003433b) main_sp_fs_ribbon_pane_t1

0xc0ab,	// (0x0003d975) main_sp_fs_ribbon_pane_t2

0x2a80,	// (0x0003434a) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdec,	// (0x000416b6) main_sp_fs_ribbon_pane_t

0x2a8f,	// (0x00034359) main_sp_fs_ribbon_scheduler_pane

0x2a97,	// (0x00034361) bg_main_sp_fs_ribbon_pane_g1

0x2aa0,	// (0x0003436a) bg_main_sp_fs_ribbon_pane_g2

0x2aa9,	// (0x00034373) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdf3,	// (0x000416bd) bg_main_sp_fs_ribbon_pane_g

0x2ab1,	// (0x0003437b) main_sp_fs_ribbon_scheduler_pane_g1

0x2aba,	// (0x00034384) main_sp_fs_ribbon_scheduler_pane_g2

0x2ac3,	// (0x0003438d) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdfa,	// (0x000416c4) main_sp_fs_ribbon_scheduler_pane_g

0x2acc,	// (0x00034396) list_cale_mrui_pane

0xc0ba,	// (0x0003d984) sp_fs_scroll_pane_cp07_ParamLimits

0xc0ba,	// (0x0003d984) sp_fs_scroll_pane_cp07

0xc0d0,	// (0x0003d99a) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xc0d0,	// (0x0003d99a) bg_sp_fs_schedule_viewer_highlight

0x2ad5,	// (0x0003439f) list_single_sp_fs_schedule_track_pane_cp01

0x2add,	// (0x000343a7) list_sp_fs_schedule_track_pane

0x2ae5,	// (0x000343af) sp_fs_scroll_pane_cp06_ParamLimits

0x2ae5,	// (0x000343af) sp_fs_scroll_pane_cp06

0x0416,	// (0x00031ce0) bgmain_sp_fs_calendar_pane_g1

0x4fc5,	// (0x0003688f) list_single_cale_mrui_pane_ParamLimits

0x4fc5,	// (0x0003688f) list_single_cale_mrui_pane

0x4fed,	// (0x000368b7) list_single_cale_mrui_row_pane_ParamLimits

0x4fed,	// (0x000368b7) list_single_cale_mrui_row_pane

0x4ffa,	// (0x000368c4) list_single_cale_mrui_row_pane_g1_ParamLimits

0x4ffa,	// (0x000368c4) list_single_cale_mrui_row_pane_g1

0x5032,	// (0x000368fc) list_single_cale_mrui_row_pane_t1_ParamLimits

0x5032,	// (0x000368fc) list_single_cale_mrui_row_pane_t1

0x5044,	// (0x0003690e) list_single_cale_mrui_row_pane_t2_ParamLimits

0x5044,	// (0x0003690e) list_single_cale_mrui_row_pane_t2

0x50aa,	// (0x00036974) list_single_cale_mrui_row_pane_t3_ParamLimits

0x50aa,	// (0x00036974) list_single_cale_mrui_row_pane_t3

0x50d9,	// (0x000369a3) list_single_cale_mrui_row_pane_t4_ParamLimits

0x50d9,	// (0x000369a3) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe06,	// (0x000416d0) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe06,	// (0x000416d0) list_single_cale_mrui_row_pane_t

0x5108,	// (0x000369d2) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x5108,	// (0x000369d2) list_single_cmail_header_editor_pane_bg_cp01

0x5128,	// (0x000369f2) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x5128,	// (0x000369f2) list_single_cmail_header_editor_pane_bg_cp02

0xc0dd,	// (0x0003d9a7) main_radioblah_text_pane_t1_ParamLimits

0xc0dd,	// (0x0003d9a7) main_radioblah_text_pane_t1

0x2bac,	// (0x00034476) cam6_indi_pane_cp01

0x2bb4,	// (0x0003447e) cam6_mode_pane_cp01

0x2bbc,	// (0x00034486) cam6_pano_pane

0x2bc5,	// (0x0003448f) cam6_zoom_pane_cp01

0x2bcd,	// (0x00034497) cam6_pano_image_pane

0x2bd8,	// (0x000344a2) cam6_pano_pane_g1

0x2170,	// (0x00033a3a) cam6_pano_pane_g2

0x2be1,	// (0x000344ab) cam6_pano_pane_g3

0x2bea,	// (0x000344b4) cam6_pano_pane_g4

0x09be,	// (0x00032288) cam6_pano_pane_g5

0x2bf3,	// (0x000344bd) cam6_pano_pane_g6

0x2bfd,	// (0x000344c7) cam6_pano_pane_g7

0x2c05,	// (0x000344cf) cam6_pano_pane_g8

0x2c0e,	// (0x000344d8) cam6_pano_pane_g9

0x0008,

0xfe0f,	// (0x000416d9) cam6_pano_pane_g

0x52ac,	// (0x00036b76) main_browser_tag_pane

0x294e,	// (0x00034218) grid_navstr_albumart_pane

0x2c19,	// (0x000344e3) cell_navstr_albumart_pane_ParamLimits

0x2c19,	// (0x000344e3) cell_navstr_albumart_pane

0x2c3c,	// (0x00034506) cell_navstr_albumart_pane_g1

0xee1c,	// (0x000406e6) cell_navstr_albumart_pane_g2

0xee2c,	// (0x000406f6) cell_navstr_albumart_pane_g3

0xee24,	// (0x000406ee) cell_navstr_albumart_pane_g4

0x0003,

0xfe22,	// (0x000416ec) cell_navstr_albumart_pane_g

0xc0f8,	// (0x0003d9c2) bt_list_pane_ParamLimits

0xc0f8,	// (0x0003d9c2) bt_list_pane

0xc118,	// (0x0003d9e2) bt_list_pane_t1

0xc127,	// (0x0003d9f1) bt_list_pane_t2

0x0001,

0xfe2b,	// (0x000416f5) bt_list_pane_t

0x52ac,	// (0x00036b76) main_cale_prevew_pane

0xc136,	// (0x0003da00) popup_cale_preview_window_ParamLimits

0xc136,	// (0x0003da00) popup_cale_preview_window

0xe2c7,	// (0x0003fb91) bg_popup_preview_window_pane_cp05_ParamLimits

0xe2c7,	// (0x0003fb91) bg_popup_preview_window_pane_cp05

0x2c44,	// (0x0003450e) list_cale_preview_pane_ParamLimits

0x2c44,	// (0x0003450e) list_cale_preview_pane

0x2fa3,	// (0x0003486d) list_double_cale_preview_pane_ParamLimits

0x2fa3,	// (0x0003486d) list_double_cale_preview_pane

0xc14f,	// (0x0003da19) list_single_cale_preview_pane_ParamLimits

0xc14f,	// (0x0003da19) list_single_cale_preview_pane

0xc165,	// (0x0003da2f) list_single_cale_preview_pane_g1

0xc16d,	// (0x0003da37) list_single_cale_preview_pane_t1_ParamLimits

0xc16d,	// (0x0003da37) list_single_cale_preview_pane_t1

0xc182,	// (0x0003da4c) list_double_cale_preview_pane_g1

0xc18a,	// (0x0003da54) list_double_cale_preview_pane_t1_ParamLimits

0xc18a,	// (0x0003da54) list_double_cale_preview_pane_t1

0xc19f,	// (0x0003da69) list_double_cale_preview_pane_t2_ParamLimits

0xc19f,	// (0x0003da69) list_double_cale_preview_pane_t2

0x0001,

0xfe30,	// (0x000416fa) list_double_cale_preview_pane_t_ParamLimits

0xfe30,	// (0x000416fa) list_double_cale_preview_pane_t

0x52ac,	// (0x00036b76) main_ezdial_pane

0xe2c7,	// (0x0003fb91) main_sp_fs_email_pane_ParamLimits

0xbdca,	// (0x0003d694) cmail_ddmenu_btn01_pane_ParamLimits

0xbdca,	// (0x0003d694) cmail_ddmenu_btn01_pane

0xbde7,	// (0x0003d6b1) cmail_ddmenu_btn02_pane_ParamLimits

0xbde7,	// (0x0003d6b1) cmail_ddmenu_btn02_pane

0xbe05,	// (0x0003d6cf) cmail_ddmenu_btn03_pane_ParamLimits

0xbe05,	// (0x0003d6cf) cmail_ddmenu_btn03_pane

0x49f9,	// (0x000362c3) main_sp_fs_ctrlbar_pane_ParamLimits

0x4a15,	// (0x000362df) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xbf03,	// (0x0003d7cd) list_cmail_body_pane_ParamLimits

0x287a,	// (0x00034144) bg_button_pane_cp12

0x288f,	// (0x00034159) list_single_cmail_header_detail_pane_g3_ParamLimits

0x288f,	// (0x00034159) list_single_cmail_header_detail_pane_g3

0x4f2f,	// (0x000367f9) list_single_cmail_header_detail_pane_t2_ParamLimits

0x4f2f,	// (0x000367f9) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdb5,	// (0x0004167f) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdb5,	// (0x0004167f) list_single_cmail_header_detail_pane_t

0x4f82,	// (0x0003684c) phacti_term_pane_t2_ParamLimits

0x4f82,	// (0x0003684c) phacti_term_pane_t2

0x0001,

0xfdbf,	// (0x00041689) phacti_term_pane_t_ParamLimits

0xfdbf,	// (0x00041689) phacti_term_pane_t

0x2c50,	// (0x0003451a) aid_size_list_single_double

0xc1b7,	// (0x0003da81) popup_ezdial_listscroll_window

0xc1d7,	// (0x0003daa1) popup_number_entry_window_cp01

0xdbf9,	// (0x0003f4c3) bg_popup_call_pane_cp09

0x2c5c,	// (0x00034526) ezdial_list_pane

0x2c64,	// (0x0003452e) scroll_pane_cp23

0x01fb,	// (0x00031ac5) bg_button_pane_cp028_ParamLimits

0x01fb,	// (0x00031ac5) bg_button_pane_cp028

0xc1e5,	// (0x0003daaf) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xc1e5,	// (0x0003daaf) cmail_ddmenu_btn01_pane_g1

0xc1f5,	// (0x0003dabf) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xc1f5,	// (0x0003dabf) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe35,	// (0x000416ff) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe35,	// (0x000416ff) cmail_ddmenu_btn01_pane_g

0x2c6c,	// (0x00034536) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x2c6c,	// (0x00034536) cmail_ddmenu_btn01_pane_t1

0xefff,	// (0x000408c9) bg_button_pane_cp029_ParamLimits

0xefff,	// (0x000408c9) bg_button_pane_cp029

0xc1f5,	// (0x0003dabf) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xc1f5,	// (0x0003dabf) cmail_ddmenu_btn02_pane_g1

0xc20d,	// (0x0003dad7) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xc20d,	// (0x0003dad7) cmail_ddmenu_btn02_pane_t1

0x553d,	// (0x00036e07) bg_button_pane_cp031_ParamLimits

0x553d,	// (0x00036e07) bg_button_pane_cp031

0xc1f5,	// (0x0003dabf) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xc1f5,	// (0x0003dabf) cmail_ddmenu_btn03_pane_g1

0xc20d,	// (0x0003dad7) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xc20d,	// (0x0003dad7) cmail_ddmenu_btn03_pane_t1

0x9d5a,	// (0x0003b624) cell_dialer2_keypad_pane_t1_ParamLimits

0x9d74,	// (0x0003b63e) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x9d74,	// (0x0003b63e) cell_dialer2_keypad_pane_t1_copy1

0xb7c7,	// (0x0003d091) ncimui_group_button_pane

0xe2c7,	// (0x0003fb91) main_sp_fs_calendar_pane_ParamLimits

0xbf20,	// (0x0003d7ea) list_single_cmail_header_caption_pane_ParamLimits

0x29f8,	// (0x000342c2) aid_recal_txt_sm_pane

0x52ac,	// (0x00036b76) mian_recal_day_pane

0x2a37,	// (0x00034301) popup_sp_fs_cale_preview_window_ParamLimits

0x52ac,	// (0x00036b76) list_recal_day_pane

0x2ca3,	// (0x0003456d) list_single_recal_day_pane_ParamLimits

0x2ca3,	// (0x0003456d) list_single_recal_day_pane

0x2cb5,	// (0x0003457f) list_single_recal_day_pane_g1_ParamLimits

0x2cb5,	// (0x0003457f) list_single_recal_day_pane_g1

0x2cc1,	// (0x0003458b) list_single_recal_day_pane_g2_ParamLimits

0x2cc1,	// (0x0003458b) list_single_recal_day_pane_g2

0x2cd0,	// (0x0003459a) list_single_recal_day_pane_g3_ParamLimits

0x2cd0,	// (0x0003459a) list_single_recal_day_pane_g3

0xc231,	// (0x0003dafb) list_single_recal_day_pane_g4_ParamLimits

0xc231,	// (0x0003dafb) list_single_recal_day_pane_g4

0x2cdc,	// (0x000345a6) list_single_recal_day_pane_g5_ParamLimits

0x2cdc,	// (0x000345a6) list_single_recal_day_pane_g5

0x2ceb,	// (0x000345b5) list_single_recal_day_pane_g6_ParamLimits

0x2ceb,	// (0x000345b5) list_single_recal_day_pane_g6

0x0005,

0xfe44,	// (0x0004170e) list_single_recal_day_pane_g_ParamLimits

0xfe44,	// (0x0004170e) list_single_recal_day_pane_g

0x2cf7,	// (0x000345c1) list_single_recal_day_pane_t1

0x2d05,	// (0x000345cf) list_single_recal_day_pane_t2

0x0001,

0xfe51,	// (0x0004171b) list_single_recal_day_pane_t

0xc244,	// (0x0003db0e) ncimui_query_button_pane_ParamLimits

0xc244,	// (0x0003db0e) ncimui_query_button_pane

0xc254,	// (0x0003db1e) ncimui_query_button_pane_t1_ParamLimits

0xc254,	// (0x0003db1e) ncimui_query_button_pane_t1

0x2d13,	// (0x000345dd) ncimui_query_button_pane_t2_ParamLimits

0x2d13,	// (0x000345dd) ncimui_query_button_pane_t2

0x0001,

0xfe56,	// (0x00041720) ncimui_query_button_pane_t_ParamLimits

0xfe56,	// (0x00041720) ncimui_query_button_pane_t

0xc267,	// (0x0003db31) query_button_pane_ParamLimits

0xc267,	// (0x0003db31) query_button_pane

0x52ac,	// (0x00036b76) bg_button_pane_cp0028

0x2d26,	// (0x000345f0) query_button_pane_t1

0x8209,	// (0x00039ad3) main_tport_pane_ParamLimits

0xbe33,	// (0x0003d6fd) bg_popup_window_pane_cp01_ParamLimits

0xbe33,	// (0x0003d6fd) bg_popup_window_pane_cp01

0xbe40,	// (0x0003d70a) heading_pane_cp08_ParamLimits

0xbe40,	// (0x0003d70a) heading_pane_cp08

0xbe4e,	// (0x0003d718) heading_pane_cp07_ParamLimits

0xbe4e,	// (0x0003d718) heading_pane_cp07

0x283c,	// (0x00034106) cell_tport_appsw_pane_g2

0x0002,

0xfda2,	// (0x0004166c) cell_tport_appsw_pane_g

0x431c,	// (0x00035be6) input_candi_list_open_g1

0xd6b5,	// (0x0003ef7f) list_cale_time_pane_g6_ParamLimits

0xd6b5,	// (0x0003ef7f) list_cale_time_pane_g6

0x8c4a,	// (0x0003a514) aid_size_touch_calib_1_ParamLimits

0x8c4a,	// (0x0003a514) aid_size_touch_calib_1

0x8c56,	// (0x0003a520) aid_size_touch_calib_2_ParamLimits

0x8c56,	// (0x0003a520) aid_size_touch_calib_2

0x8c64,	// (0x0003a52e) aid_size_touch_calib_3_ParamLimits

0x8c64,	// (0x0003a52e) aid_size_touch_calib_3

0x8c74,	// (0x0003a53e) aid_size_touch_calib_4_ParamLimits

0x8c74,	// (0x0003a53e) aid_size_touch_calib_4

0x8c82,	// (0x0003a54c) main_touch_calib_button_group_pane_ParamLimits

0x8c82,	// (0x0003a54c) main_touch_calib_button_group_pane

0x8c90,	// (0x0003a55a) main_touch_calib_pane_g1_ParamLimits

0x8c9c,	// (0x0003a566) main_touch_calib_pane_g2_ParamLimits

0x8ca8,	// (0x0003a572) main_touch_calib_pane_g3_ParamLimits

0x8cb4,	// (0x0003a57e) main_touch_calib_pane_g4_ParamLimits

0xf775,	// (0x0004103f) main_touch_calib_pane_g_ParamLimits

0x8cc0,	// (0x0003a58a) main_touch_calib_pane_t1_ParamLimits

0x8cd7,	// (0x0003a5a1) main_touch_calib_pane_t2_ParamLimits

0x8cee,	// (0x0003a5b8) main_touch_calib_pane_t3_ParamLimits

0x8d02,	// (0x0003a5cc) main_touch_calib_pane_t4_ParamLimits

0x8d16,	// (0x0003a5e0) main_touch_calib_pane_t5_ParamLimits

0xf77e,	// (0x00041048) main_touch_calib_pane_t_ParamLimits

0x0794,	// (0x0003205e) list_single_fp_cale_pane_g3_ParamLimits

0x0794,	// (0x0003205e) list_single_fp_cale_pane_g3

0xe2c7,	// (0x0003fb91) bg_button_pane_cp012_ParamLimits

0xe2c7,	// (0x0003fb91) bg_vkb2_func_pane_cp03_ParamLimits

0xab0f,	// (0x0003c3d9) cell_vitu2_function_top_pane_g1_ParamLimits

0xe2c7,	// (0x0003fb91) bg_vkb2_func_pane_cp04_ParamLimits

0xb765,	// (0x0003d02f) main_ncimui_button_group_pane_ParamLimits

0xb765,	// (0x0003d02f) main_ncimui_button_group_pane

0xb7b5,	// (0x0003d07f) main_ncimui_pane_t3_ParamLimits

0xb7b5,	// (0x0003d07f) main_ncimui_pane_t3

0x2964,	// (0x0003422e) phacti_button_group_pane

0x2c50,	// (0x0003451a) aid_size_list_single_double_ParamLimits

0xc1b7,	// (0x0003da81) popup_ezdial_listscroll_window_ParamLimits

0xc1d7,	// (0x0003daa1) popup_number_entry_window_cp01_ParamLimits

0xc274,	// (0x0003db3e) phacti_button_pane_ParamLimits

0xc274,	// (0x0003db3e) phacti_button_pane

0x52ac,	// (0x00036b76) bg_button_pane_cp14

0x2d34,	// (0x000345fe) phacti_button_pane_t1

0xc285,	// (0x0003db4f) main_touch_calib_button_pane_ParamLimits

0xc285,	// (0x0003db4f) main_touch_calib_button_pane

0xd11a,	// (0x0003e9e4) bg_button_pane_cp18_ParamLimits

0xd11a,	// (0x0003e9e4) bg_button_pane_cp18

0x2d42,	// (0x0003460c) main_touch_calib_button_pane_t1_ParamLimits

0x2d42,	// (0x0003460c) main_touch_calib_button_pane_t1

0x2d58,	// (0x00034622) main_touch_calib_button_pane_t2_ParamLimits

0x2d58,	// (0x00034622) main_touch_calib_button_pane_t2

0x0001,

0xfe5b,	// (0x00041725) main_touch_calib_button_pane_t_ParamLimits

0xfe5b,	// (0x00041725) main_touch_calib_button_pane_t

0x52ac,	// (0x00036b76) cell_ncimui_button_pane

0x52ac,	// (0x00036b76) bg_button_pane_cp032

0x2d76,	// (0x00034640) cell_ncimui_button_pane_t1

0x9dd0,	// (0x0003b69a) image3_infobar_pane_ParamLimits

0x9dd0,	// (0x0003b69a) image3_infobar_pane

0xbb13,	// (0x0003d3dd) fs_bigclock_status_pane_ParamLimits

0xbb13,	// (0x0003d3dd) fs_bigclock_status_pane

0xbb20,	// (0x0003d3ea) main_fs_bigclock_clock_pane_ParamLimits

0xbb20,	// (0x0003d3ea) main_fs_bigclock_clock_pane

0xbb30,	// (0x0003d3fa) main_fs_bigclock_indi_pane_ParamLimits

0xbb30,	// (0x0003d3fa) main_fs_bigclock_indi_pane

0xbb5d,	// (0x0003d427) main_fs_bigclock_swipe_pane_ParamLimits

0xbb5d,	// (0x0003d427) main_fs_bigclock_swipe_pane

0x52ac,	// (0x00036b76) main_fs_clock_dumped_data

0x227d,	// (0x00033b47) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x227d,	// (0x00033b47) list_single_fs_bigclock_indicator_pane_g1

0x2299,	// (0x00033b63) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x2299,	// (0x00033b63) list_single_fs_bigclock_indicator_pane_g2

0x22b3,	// (0x00033b7d) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x22b3,	// (0x00033b7d) list_single_fs_bigclock_indicator_pane_g3

0x22cd,	// (0x00033b97) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x22cd,	// (0x00033b97) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc8e,	// (0x00041558) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc8e,	// (0x00041558) list_single_fs_bigclock_indicator_pane_g

0x22f3,	// (0x00033bbd) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x22f3,	// (0x00033bbd) list_single_fs_bigclock_indicator_pane_t1

0x231b,	// (0x00033be5) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x231b,	// (0x00033be5) list_single_fs_bigclock_indicator_pane_t2

0x2343,	// (0x00033c0d) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x2343,	// (0x00033c0d) list_single_fs_bigclock_indicator_pane_t3

0x236b,	// (0x00033c35) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x236b,	// (0x00033c35) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc99,	// (0x00041563) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc99,	// (0x00041563) list_single_fs_bigclock_indicator_pane_t

0x2d84,	// (0x0003464e) image3_infobar_fav_pane_ParamLimits

0x2d84,	// (0x0003464e) image3_infobar_fav_pane

0x2d94,	// (0x0003465e) image3_infobar_loc_pane_ParamLimits

0x2d94,	// (0x0003465e) image3_infobar_loc_pane

0x2da8,	// (0x00034672) image3_infobar_time_pane_ParamLimits

0x2da8,	// (0x00034672) image3_infobar_time_pane

0x0416,	// (0x00031ce0) image3_infobar_time_pane_g1

0x2db8,	// (0x00034682) image3_infobar_time_pane_t1

0x0416,	// (0x00031ce0) image3_infobar_loc_pane_g1

0x2dc6,	// (0x00034690) image3_infobar_loc_pane_g2

0x0001,

0xfe60,	// (0x0004172a) image3_infobar_loc_pane_g

0x2dce,	// (0x00034698) image3_infobar_loc_pane_t1

0x0416,	// (0x00031ce0) image3_infobar_fav_pane_g1

0x2ddc,	// (0x000346a6) image3_infobar_fav_pane_g2

0x0001,

0xfe65,	// (0x0004172f) image3_infobar_fav_pane_g

0x2de4,	// (0x000346ae) fs_bigclock_status_battery_pane

0x2ded,	// (0x000346b7) fs_bigclock_status_signal_pane

0x2df6,	// (0x000346c0) fs_bigclock_status_title_pane

0x2dff,	// (0x000346c9) fs_bigclock_status_signal_pane_g1

0x2e08,	// (0x000346d2) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe6a,	// (0x00041734) fs_bigclock_status_signal_pane_g

0x2e10,	// (0x000346da) fs_bigclock_status_battery_pane_g1

0x2e19,	// (0x000346e3) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe6f,	// (0x00041739) fs_bigclock_status_battery_pane_g

0x2e21,	// (0x000346eb) fs_bigclock_status_title_pane_t1

0x0416,	// (0x00031ce0) main_fs_bigclock_clock_pane_g1

0x2e2f,	// (0x000346f9) main_fs_bigclock_clock_pane_g2

0x2e2f,	// (0x000346f9) main_fs_bigclock_clock_pane_g3

0x2e2f,	// (0x000346f9) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe74,	// (0x0004173e) main_fs_bigclock_clock_pane_g

0x2e37,	// (0x00034701) main_fs_bigclock_clock_pane_t1

0x2e45,	// (0x0003470f) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe7d,	// (0x00041747) main_fs_bigclock_clock_pane_t

0x2e54,	// (0x0003471e) list_single_fs_bigclock_indicator_pane_ParamLimits

0x2e54,	// (0x0003471e) list_single_fs_bigclock_indicator_pane

0xc297,	// (0x0003db61) list_single_fs_bigclock_pane_ParamLimits

0xc297,	// (0x0003db61) list_single_fs_bigclock_pane

0x2e6e,	// (0x00034738) main_fs_bigclock_indicator_pane_t1

0x2e7d,	// (0x00034747) list_single_fs_bigclock_pane_g1

0x2e85,	// (0x0003474f) list_single_fs_bigclock_pane_t1

0x0416,	// (0x00031ce0) main_fs_bigclock_swipe_pane_g1

0x2ec3,	// (0x0003478d) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe8e,	// (0x00041758) main_fs_bigclock_swipe_pane_g

0x2ecb,	// (0x00034795) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x2ecb,	// (0x00034795) main_fs_bigclock_swipe_pane_t1

0x71af,	// (0x00038a79) call_type_pane_ParamLimits

0x52ac,	// (0x00036b76) main_btmg_pane

0x5026,	// (0x000368f0) list_single_cale_mrui_row_pane_g2_ParamLimits

0x5026,	// (0x000368f0) list_single_cale_mrui_row_pane_g2

0x0001,

0xfe01,	// (0x000416cb) list_single_cale_mrui_row_pane_g_ParamLimits

0xfe01,	// (0x000416cb) list_single_cale_mrui_row_pane_g

0x2c8a,	// (0x00034554) list_recal_vselct_arw_lo_pane

0x2c92,	// (0x0003455c) list_recal_vselct_arw_up_pane

0x2c9a,	// (0x00034564) list_recal_vselct_pane

0x2ee8,	// (0x000347b2) btmg_button_pane

0xc2fa,	// (0x0003dbc4) main_btmg_pane_g1

0x52ac,	// (0x00036b76) bg_button_pane_cp044

0x2ef2,	// (0x000347bc) btmg_button_pane_t1

0xeff7,	// (0x000408c1) aid_listscroll_gen

0xe2c7,	// (0x0003fb91) main_cntbar_detail_pane

0x285a,	// (0x00034124) list_cmail_folder_pane

0x286a,	// (0x00034134) sp_fs_scroll_pane_cp03_ParamLimits

0x5144,	// (0x00036a0e) list_single_fs_dyc_pane_cp01_ParamLimits

0x5144,	// (0x00036a0e) list_single_fs_dyc_pane_cp01

0x2f00,	// (0x000347ca) aid_size_cmail_indent

0x516a,	// (0x00036a34) list_single_dyc_row_pane_cp01

0xc322,	// (0x0003dbec) cntbar_detail_list_pane_ParamLimits

0xc322,	// (0x0003dbec) cntbar_detail_list_pane

0xc35c,	// (0x0003dc26) main_cntbar_detail_cont_pane_ParamLimits

0xc35c,	// (0x0003dc26) main_cntbar_detail_cont_pane

0x71a3,	// (0x00038a6d) scroll_pane_cp032_ParamLimits

0x71a3,	// (0x00038a6d) scroll_pane_cp032

0xc368,	// (0x0003dc32) cntbar_detail_list_event_pane_ParamLimits

0xc368,	// (0x0003dc32) cntbar_detail_list_event_pane

0xc32e,	// (0x0003dbf8) cntbar_detail_list_shct_pane

0xd55c,	// (0x0003ee26) aid_list_gen

0x2f12,	// (0x000347dc) aid_scroll

0x2f1b,	// (0x000347e5) aid_size_touch_scroll_bar

0x2468,	// (0x00033d32) aid_list_double

0x2f24,	// (0x000347ee) aid_list_single

0x18d7,	// (0x000331a1) aid_list_single_lg

0x5173,	// (0x00036a3d) aid_list_z_g_a_sm

0x517b,	// (0x00036a45) aid_list_z_g_d

0x5183,	// (0x00036a4d) aid_txt_z_prm

0x5191,	// (0x00036a5b) aid_txt_z_prm_cp01

0x519f,	// (0x00036a69) aid_txt_z_sec

0xc37c,	// (0x0003dc46) main_cntbar_detail_cont_pane_g1_ParamLimits

0xc37c,	// (0x0003dc46) main_cntbar_detail_cont_pane_g1

0xc389,	// (0x0003dc53) main_cntbar_detail_cont_pane_g2_ParamLimits

0xc389,	// (0x0003dc53) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe93,	// (0x0004175d) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe93,	// (0x0004175d) main_cntbar_detail_cont_pane_g

0x2f4b,	// (0x00034815) main_cntbar_detail_cont_pane_t1

0x2f59,	// (0x00034823) main_cntbar_detail_cont_pane_t2

0x2f67,	// (0x00034831) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe98,	// (0x00041762) main_cntbar_detail_cont_pane_t

0xc395,	// (0x0003dc5f) cell_cntbar_detail_list_shct_pane_ParamLimits

0xc395,	// (0x0003dc5f) cell_cntbar_detail_list_shct_pane

0x2f75,	// (0x0003483f) cntbar_detail_list_shct_pane_g1

0x2f7e,	// (0x00034848) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe9f,	// (0x00041769) cntbar_detail_list_shct_pane_g

0xc3a9,	// (0x0003dc73) cntbar_detail_list_event_pane_g1_ParamLimits

0xc3a9,	// (0x0003dc73) cntbar_detail_list_event_pane_g1

0xc3b5,	// (0x0003dc7f) cntbar_detail_list_event_pane_g2_ParamLimits

0xc3b5,	// (0x0003dc7f) cntbar_detail_list_event_pane_g2

0x0005,

0xfea4,	// (0x0004176e) cntbar_detail_list_event_pane_g_ParamLimits

0xfea4,	// (0x0004176e) cntbar_detail_list_event_pane_g

0xc421,	// (0x0003dceb) cntbar_detail_list_event_pane_t1_ParamLimits

0xc421,	// (0x0003dceb) cntbar_detail_list_event_pane_t1

0xc436,	// (0x0003dd00) cntbar_detail_list_event_pane_t2_ParamLimits

0xc436,	// (0x0003dd00) cntbar_detail_list_event_pane_t2

0x0002,

0xfeb1,	// (0x0004177b) cntbar_detail_list_event_pane_t_ParamLimits

0xfeb1,	// (0x0004177b) cntbar_detail_list_event_pane_t

0x0416,	// (0x00031ce0) cell_cntbar_detail_list_shct_pane_g1

0x7549,	// (0x00038e13) navi_pane_mv_g3

0xe2c7,	// (0x0003fb91) main_cntbar_detail_pane_ParamLimits

0x52ac,	// (0x00036b76) main_notif_wgt_pane

0x9a84,	// (0x0003b34e) aid_tch_main_mp4_pane_g4

0x9cb9,	// (0x0003b583) popup_slider_window_cp02

0x2c81,	// (0x0003454b) list_recal_day_event_pane

0xc302,	// (0x0003dbcc) cntbar_detail_btn_pane_ParamLimits

0xc302,	// (0x0003dbcc) cntbar_detail_btn_pane

0xc312,	// (0x0003dbdc) cntbar_detail_btn_pane_cp01_ParamLimits

0xc312,	// (0x0003dbdc) cntbar_detail_btn_pane_cp01

0xc32e,	// (0x0003dbf8) cntbar_detail_list_shct_pane_ParamLimits

0xc33a,	// (0x0003dc04) cntbar_detail_pane_g1_ParamLimits

0xc33a,	// (0x0003dc04) cntbar_detail_pane_g1

0xc346,	// (0x0003dc10) cntbar_detail_pane_t1_ParamLimits

0xc346,	// (0x0003dc10) cntbar_detail_pane_t1

0xc3c1,	// (0x0003dc8b) cntbar_detail_list_event_pane_g3_ParamLimits

0xc3c1,	// (0x0003dc8b) cntbar_detail_list_event_pane_g3

0xc3d9,	// (0x0003dca3) cntbar_detail_list_event_pane_g4_ParamLimits

0xc3d9,	// (0x0003dca3) cntbar_detail_list_event_pane_g4

0xc3f1,	// (0x0003dcbb) cntbar_detail_list_event_pane_g5_ParamLimits

0xc3f1,	// (0x0003dcbb) cntbar_detail_list_event_pane_g5

0xc409,	// (0x0003dcd3) cntbar_detail_list_event_pane_g6_ParamLimits

0xc409,	// (0x0003dcd3) cntbar_detail_list_event_pane_g6

0xc44b,	// (0x0003dd15) cntbar_detail_list_event_pane_t3_ParamLimits

0xc44b,	// (0x0003dd15) cntbar_detail_list_event_pane_t3

0xc45d,	// (0x0003dd27) popup_notif_wgt_window_ParamLimits

0xc45d,	// (0x0003dd27) popup_notif_wgt_window

0xc46d,	// (0x0003dd37) popup_submenu_window_cp01_ParamLimits

0xc46d,	// (0x0003dd37) popup_submenu_window_cp01

0xdbf9,	// (0x0003f4c3) bg_popup_window_pane_cp10

0x2f87,	// (0x00034851) listscroll_notif_wgt_pane

0x2f91,	// (0x0003485b) list_notif_wgt_window

0x2f9a,	// (0x00034864) scroll_pane_cp033

0x2fa3,	// (0x0003486d) list_notif_wgt_row_pane_ParamLimits

0x2fa3,	// (0x0003486d) list_notif_wgt_row_pane

0x2fb5,	// (0x0003487f) aid_size_list_notif_wgt_del

0x2fbe,	// (0x00034888) list_notif_wgt_row_pane_g1

0x2fc6,	// (0x00034890) list_notif_wgt_row_pane_g2

0x2fce,	// (0x00034898) list_notif_wgt_row_pane_g3

0x0002,

0xfeb8,	// (0x00041782) list_notif_wgt_row_pane_g

0x2fd7,	// (0x000348a1) list_notif_wgt_row_pane_t1

0x2fe5,	// (0x000348af) list_notif_wgt_row_pane_t2

0x2ff3,	// (0x000348bd) list_notif_wgt_row_pane_t3

0x0002,

0xfebf,	// (0x00041789) list_notif_wgt_row_pane_t

0x1515,	// (0x00032ddf) list_recal_day_event_pane_g1

0x3001,	// (0x000348cb) list_recal_day_event_pane_t1

0x52ac,	// (0x00036b76) bg_button_pane_cp045

0x3010,	// (0x000348da) cntbar_detail_btn_pane_t1

0xefff,	// (0x000408c9) main_callh_pane_ParamLimits

0xefff,	// (0x000408c9) main_callh_pane

0x52ac,	// (0x00036b76) main_coverflow0_pane

0x52ac,	// (0x00036b76) main_wgtman_pane

0xbb75,	// (0x0003d43f) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xbb75,	// (0x0003d43f) main_fs_bigclock_unlock_btn_pane

0x2834,	// (0x000340fe) bg_button_pane_cp16

0x2844,	// (0x0003410e) cell_tport_appsw_pane_g3

0xc47b,	// (0x0003dd45) cf0_flow_pane_ParamLimits

0xc47b,	// (0x0003dd45) cf0_flow_pane

0x301e,	// (0x000348e8) listscroll_cf0_pane

0x3027,	// (0x000348f1) main_cf0_pane_g1

0xc48a,	// (0x0003dd54) main_cf0_pane_t1_ParamLimits

0xc48a,	// (0x0003dd54) main_cf0_pane_t1

0xc49e,	// (0x0003dd68) main_cf0_pane_t2_ParamLimits

0xc49e,	// (0x0003dd68) main_cf0_pane_t2

0x0001,

0xfec6,	// (0x00041790) main_cf0_pane_t_ParamLimits

0xfec6,	// (0x00041790) main_cf0_pane_t

0x3031,	// (0x000348fb) scroll_pane_cp11

0xc4b2,	// (0x0003dd7c) cf0_flow_pane_g1

0xc4ba,	// (0x0003dd84) cf0_flow_pane_g2

0x0001,

0xfecb,	// (0x00041795) cf0_flow_pane_g

0xc4c2,	// (0x0003dd8c) cf0_flow_pane_t1

0x52ac,	// (0x00036b76) main_call6_pane

0x52ac,	// (0x00036b76) main_calllock_pane

0xc4d0,	// (0x0003dd9a) call6_btn_grp_pane_ParamLimits

0xc4d0,	// (0x0003dd9a) call6_btn_grp_pane

0xc4df,	// (0x0003dda9) call6_pane_g1_ParamLimits

0xc4df,	// (0x0003dda9) call6_pane_g1

0xc4ee,	// (0x0003ddb8) popup_call6_1st_window_ParamLimits

0xc4ee,	// (0x0003ddb8) popup_call6_1st_window

0xc4fc,	// (0x0003ddc6) popup_call6_2nd_window_ParamLimits

0xc4fc,	// (0x0003ddc6) popup_call6_2nd_window

0xc50a,	// (0x0003ddd4) cell_call6_btn_pane_ParamLimits

0xc50a,	// (0x0003ddd4) cell_call6_btn_pane

0xdbf9,	// (0x0003f4c3) bg_popup_call2_in_pane_cp03

0x303c,	// (0x00034906) popup_call6_1st_window_g1

0x3044,	// (0x0003490e) popup_call6_1st_window_g2

0x304c,	// (0x00034916) popup_call6_1st_window_g3

0x0002,

0xfed0,	// (0x0004179a) popup_call6_1st_window_g

0x3054,	// (0x0003491e) popup_call6_1st_window_t1

0x3063,	// (0x0003492d) popup_call6_1st_window_t2

0x3073,	// (0x0003493d) popup_call6_1st_window_t3

0x0002,

0xfed7,	// (0x000417a1) popup_call6_1st_window_t

0xdbf9,	// (0x0003f4c3) bg_popup_call2_in_pane_cp04

0x303c,	// (0x00034906) popup_call6_2nd_window_g1

0x3044,	// (0x0003490e) popup_call6_2nd_window_g2

0x304c,	// (0x00034916) popup_call6_2nd_window_g3

0x0002,

0xfed0,	// (0x0004179a) popup_call6_2nd_window_g

0x3054,	// (0x0003491e) popup_call6_2nd_window_t1

0x52ac,	// (0x00036b76) bg_button_pane_cp15

0x3083,	// (0x0003494d) cell_call6_btn_pane_g1

0x308c,	// (0x00034956) cell_call6_btn_pane_t1

0xc519,	// (0x0003dde3) listscroll_wgtman_pane_ParamLimits

0xc519,	// (0x0003dde3) listscroll_wgtman_pane

0xc537,	// (0x0003de01) wgtman_btn_pane_ParamLimits

0xc537,	// (0x0003de01) wgtman_btn_pane

0xdab0,	// (0x0003f37a) aid_scroll_copy1

0x309b,	// (0x00034965) list_wgtman_pane

0xc56c,	// (0x0003de36) wgtman_btn_pane_g1_ParamLimits

0xc56c,	// (0x0003de36) wgtman_btn_pane_g1

0xc594,	// (0x0003de5e) wgtman_btn_pane_t1_ParamLimits

0xc594,	// (0x0003de5e) wgtman_btn_pane_t1

0x30a5,	// (0x0003496f) wgtman_btn_pane_t2_ParamLimits

0x30a5,	// (0x0003496f) wgtman_btn_pane_t2

0x0001,

0xfede,	// (0x000417a8) wgtman_btn_pane_t_ParamLimits

0xfede,	// (0x000417a8) wgtman_btn_pane_t

0xc5cb,	// (0x0003de95) listrow_wgtman_pane_ParamLimits

0xc5cb,	// (0x0003de95) listrow_wgtman_pane

0xc5e6,	// (0x0003deb0) listrow_wgtman_pane_g1

0xc5ef,	// (0x0003deb9) listrow_wgtman_pane_g2

0x0001,

0xfee3,	// (0x000417ad) listrow_wgtman_pane_g

0x51ad,	// (0x00036a77) listrow_wgtman_pane_t1

0x51bb,	// (0x00036a85) listrow_wgtman_pane_t2

0x0001,

0xfee8,	// (0x000417b2) listrow_wgtman_pane_t

0x51c9,	// (0x00036a93) wait_bar_pane_cp09

0x30bc,	// (0x00034986) main_calllock_btn_pane

0x30c6,	// (0x00034990) main_calllock_pane_g1

0x52ac,	// (0x00036b76) bg_button_pane_cp17

0x30d2,	// (0x0003499c) main_calllock_btn_pane_g1

0x30db,	// (0x000349a5) main_calllock_btn_pane_t1

0x52ac,	// (0x00036b76) main_dialer3_pane

0x52ac,	// (0x00036b76) main_fmrd2_pane

0x0416,	// (0x00031ce0) main_fs_bigclock_unlock_btn_pane_g1

0x30f2,	// (0x000349bc) main_fs_bigclock_unlock_btn_pane_t1

0xc5f9,	// (0x0003dec3) area_fmrd2_info_pane_ParamLimits

0xc5f9,	// (0x0003dec3) area_fmrd2_info_pane

0xc607,	// (0x0003ded1) area_fmrd2_visual_pane_ParamLimits

0xc607,	// (0x0003ded1) area_fmrd2_visual_pane

0xc615,	// (0x0003dedf) fmrd2_indi_pane_ParamLimits

0xc615,	// (0x0003dedf) fmrd2_indi_pane

0xc622,	// (0x0003deec) area_fmrd2_visual_pane_g1

0xc62a,	// (0x0003def4) area_fmrd2_visual_pane_t1

0xc63a,	// (0x0003df04) area_fmrd2_visual_pane_t2

0xc64a,	// (0x0003df14) area_fmrd2_visual_pane_t3

0x0002,

0xfef2,	// (0x000417bc) area_fmrd2_visual_pane_t

0xc65a,	// (0x0003df24) area_fmrd2_info_pane_g1

0xc662,	// (0x0003df2c) area_fmrd2_info_pane_t1

0xc672,	// (0x0003df3c) area_fmrd2_info_pane_t2

0xc682,	// (0x0003df4c) area_fmrd2_info_pane_t3

0xc692,	// (0x0003df5c) area_fmrd2_info_pane_t4

0x0003,

0xfef9,	// (0x000417c3) area_fmrd2_info_pane_t

0xc6a0,	// (0x0003df6a) fmrd2_indi_pane_t1

0xc6b0,	// (0x0003df7a) fmrd2_indi_pane_t2

0xc6c0,	// (0x0003df8a) fmrd2_indi_pane_t3

0x0002,

0xff02,	// (0x000417cc) fmrd2_indi_pane_t

0x22dc,	// (0x00033ba6) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x22dc,	// (0x00033ba6) list_single_fs_bigclock_indicator_pane_g5

0x2380,	// (0x00033c4a) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x2380,	// (0x00033c4a) list_single_fs_bigclock_indicator_pane_t5

0xc020,	// (0x0003d8ea) aid_cell_bcale_month_pane_ParamLimits

0xc020,	// (0x0003d8ea) aid_cell_bcale_month_pane

0xc02c,	// (0x0003d8f6) bcale_month_pane_ParamLimits

0xc02c,	// (0x0003d8f6) bcale_month_pane

0xc03a,	// (0x0003d904) bcale_preview_pane_ParamLimits

0xc03a,	// (0x0003d904) bcale_preview_pane

0x2e85,	// (0x0003474f) list_single_fs_bigclock_pane_t1_ParamLimits

0x2e9f,	// (0x00034769) list_single_fs_bigclock_pane_t2_ParamLimits

0x2e9f,	// (0x00034769) list_single_fs_bigclock_pane_t2

0x0001,

0xfe89,	// (0x00041753) list_single_fs_bigclock_pane_t_ParamLimits

0xfe89,	// (0x00041753) list_single_fs_bigclock_pane_t

0x30ea,	// (0x000349b4) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfeed,	// (0x000417b7) main_fs_bigclock_unlock_btn_pane_g

0xc6ce,	// (0x0003df98) aid_dia3_key_size_ParamLimits

0xc6ce,	// (0x0003df98) aid_dia3_key_size

0xc6da,	// (0x0003dfa4) aid_dia3_listrow_size_ParamLimits

0xc6da,	// (0x0003dfa4) aid_dia3_listrow_size

0xc6ea,	// (0x0003dfb4) dia3_keypad_fun_pane_ParamLimits

0xc6ea,	// (0x0003dfb4) dia3_keypad_fun_pane

0xc6fc,	// (0x0003dfc6) dia3_keypad_num_pane_ParamLimits

0xc6fc,	// (0x0003dfc6) dia3_keypad_num_pane

0xc70e,	// (0x0003dfd8) dia3_listscroll_pane_ParamLimits

0xc70e,	// (0x0003dfd8) dia3_listscroll_pane

0xc71c,	// (0x0003dfe6) dia3_numentry_pane_ParamLimits

0xc71c,	// (0x0003dfe6) dia3_numentry_pane

0x3100,	// (0x000349ca) dia3_list_pane

0x310b,	// (0x000349d5) scroll_pane_cp12

0x52ac,	// (0x00036b76) bg_dia3_numentry_pane

0xc72a,	// (0x0003dff4) dia3_numentry_pane_t1

0xc739,	// (0x0003e003) cell_dia3_key_num_pane

0xc741,	// (0x0003e00b) cell_dia3_key0_fun_pane_ParamLimits

0xc741,	// (0x0003e00b) cell_dia3_key0_fun_pane

0xc74e,	// (0x0003e018) cell_dia3_key1_fun_pane_ParamLimits

0xc74e,	// (0x0003e018) cell_dia3_key1_fun_pane

0xc75b,	// (0x0003e025) dia3_listrow_pane

0x1fdc,	// (0x000338a6) bg_dia3_numentry_pane_g1

0x52ac,	// (0x00036b76) bg_button_pane_cp21

0x3116,	// (0x000349e0) cell_dia3_key_num_pane_t1

0x3124,	// (0x000349ee) cell_dia3_key_num_pane_t2

0x3133,	// (0x000349fd) cell_dia3_key_num_pane_t3

0x3142,	// (0x00034a0c) cell_dia3_key_num_pane_t4

0x0003,

0xff09,	// (0x000417d3) cell_dia3_key_num_pane_t

0x52ac,	// (0x00036b76) bg_button_pane_cp19

0xc768,	// (0x0003e032) cell_dia3_key0_fun_pane_g1

0x52ac,	// (0x00036b76) bg_button_pane_cp20

0xc770,	// (0x0003e03a) cell_dia3_key1_fun_pane_g1

0xc778,	// (0x0003e042) area_left_week_number_pane

0xc781,	// (0x0003e04b) area_top_day_name_pane

0xc78a,	// (0x0003e054) frame_month_view_pane

0xc794,	// (0x0003e05e) grid_month_view_pane

0xc79e,	// (0x0003e068) cell_top_day_name_pane_ParamLimits

0xc79e,	// (0x0003e068) cell_top_day_name_pane

0xc7b8,	// (0x0003e082) cell_area_left_week_number_pane_ParamLimits

0xc7b8,	// (0x0003e082) cell_area_left_week_number_pane

0xc7cc,	// (0x0003e096) cell_month_view_pane_ParamLimits

0xc7cc,	// (0x0003e096) cell_month_view_pane

0x3151,	// (0x00034a1b) frm_month_g1

0xc7e9,	// (0x0003e0b3) frm_month_g2

0xc7f3,	// (0x0003e0bd) frm_month_g3

0xc7fd,	// (0x0003e0c7) frm_month_g4

0xc807,	// (0x0003e0d1) frm_month_g5

0xc811,	// (0x0003e0db) frm_month_g6

0xc81b,	// (0x0003e0e5) frm_month_g7

0x315a,	// (0x00034a24) frm_month_g8

0xc825,	// (0x0003e0ef) frm_month_g9

0xc82e,	// (0x0003e0f8) frm_month_g10

0xc837,	// (0x0003e101) frm_month_g11

0xc840,	// (0x0003e10a) frm_month_g12

0xc849,	// (0x0003e113) frm_month_g13

0xc852,	// (0x0003e11c) frm_month_g14

0xc85b,	// (0x0003e125) frm_month_g15

0xc866,	// (0x0003e130) frm_month_g16

0x000f,

0xff12,	// (0x000417dc) frm_month_g

0xc871,	// (0x0003e13b) cell_top_day_name_pane_t1

0xc880,	// (0x0003e14a) cell_area_left_week_number_pane_g1

0xc871,	// (0x0003e13b) cell_area_left_week_number_pane_t1

0x0416,	// (0x00031ce0) cell_month_view_pane_g1

0xc888,	// (0x0003e152) cell_month_view_pane_t1

0x52ac,	// (0x00036b76) main_fps_pane

0x25ba,	// (0x00033e84) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x25ba,	// (0x00033e84) cmail_ddmenu_btn02_pane_cp1

0x25d6,	// (0x00033ea0) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x25d6,	// (0x00033ea0) cmail_ddmenu_btn02_pane_cp2

0xc201,	// (0x0003dacb) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xc201,	// (0x0003dacb) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe3a,	// (0x00041704) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe3a,	// (0x00041704) cmail_ddmenu_btn02_pane_g

0xc21f,	// (0x0003dae9) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xc21f,	// (0x0003dae9) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe3f,	// (0x00041709) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe3f,	// (0x00041709) cmail_ddmenu_btn02_pane_t

0xc897,	// (0x0003e161) fps_text_pane_ParamLimits

0xc897,	// (0x0003e161) fps_text_pane

0xc8a4,	// (0x0003e16e) main_fps_pane_g1_ParamLimits

0xc8a4,	// (0x0003e16e) main_fps_pane_g1

0xc8b2,	// (0x0003e17c) wait_bar_pane_cp010_ParamLimits

0xc8b2,	// (0x0003e17c) wait_bar_pane_cp010

0xc8be,	// (0x0003e188) fps_text_pane_t1_ParamLimits

0xc8be,	// (0x0003e188) fps_text_pane_t1

0xa09b,	// (0x0003b965) cam4_image_uncrop_pane_g1

0xa0a4,	// (0x0003b96e) cam4_image_uncrop_pane_g2

0xa0ad,	// (0x0003b977) cam4_image_uncrop_pane_g3

0xa0b6,	// (0x0003b980) cam4_image_uncrop_pane_g4

0x0003,

0xf90d,	// (0x000411d7) cam4_image_uncrop_pane_g

0xc75b,	// (0x0003e025) dia3_listrow_pane_ParamLimits

0x52ac,	// (0x00036b76) main_phob2_pane

0xbe95,	// (0x0003d75f) cell_tport_appsw_pane_cp02_ParamLimits

0xbe95,	// (0x0003d75f) cell_tport_appsw_pane_cp02

0xbea4,	// (0x0003d76e) cell_tport_appsw_pane_cp03_ParamLimits

0xbea4,	// (0x0003d76e) cell_tport_appsw_pane_cp03

0x52ac,	// (0x00036b76) phob2_contact_card_pane

0x52ac,	// (0x00036b76) phob2_listscroll_pane

0x3163,	// (0x00034a2d) phob2_list_pane

0x316b,	// (0x00034a35) scroll_pane_cp034

0xc8d7,	// (0x0003e1a1) phob2_cc_data_pane_ParamLimits

0xc8d7,	// (0x0003e1a1) phob2_cc_data_pane

0xc8f1,	// (0x0003e1bb) phob2_cc_listscroll_pane_ParamLimits

0xc8f1,	// (0x0003e1bb) phob2_cc_listscroll_pane

0xc90b,	// (0x0003e1d5) list_double_large_graphic_phob2_pane_ParamLimits

0xc90b,	// (0x0003e1d5) list_double_large_graphic_phob2_pane

0x3173,	// (0x00034a3d) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x3173,	// (0x00034a3d) list_double_large_graphic_phob2_pane_g1

0x51d1,	// (0x00036a9b) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x51d1,	// (0x00036a9b) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff33,	// (0x000417fd) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff33,	// (0x000417fd) list_double_large_graphic_phob2_pane_g

0x51dd,	// (0x00036aa7) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x51dd,	// (0x00036aa7) list_double_large_graphic_phob2_pane_t1

0x51f2,	// (0x00036abc) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x51f2,	// (0x00036abc) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff38,	// (0x00041802) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff38,	// (0x00041802) list_double_large_graphic_phob2_pane_t

0x52ac,	// (0x00036b76) list_highlight_pane_cp024

0x31b3,	// (0x00034a7d) phob2_cc_button_pane

0xc929,	// (0x0003e1f3) phob2_cc_data_pane_g1_ParamLimits

0xc929,	// (0x0003e1f3) phob2_cc_data_pane_g1

0xc935,	// (0x0003e1ff) phob2_cc_data_pane_g2_ParamLimits

0xc935,	// (0x0003e1ff) phob2_cc_data_pane_g2

0x0001,

0xff3d,	// (0x00041807) phob2_cc_data_pane_g_ParamLimits

0xff3d,	// (0x00041807) phob2_cc_data_pane_g

0xc941,	// (0x0003e20b) phob2_cc_data_pane_t1_ParamLimits

0xc941,	// (0x0003e20b) phob2_cc_data_pane_t1

0xc953,	// (0x0003e21d) phob2_cc_data_pane_t2_ParamLimits

0xc953,	// (0x0003e21d) phob2_cc_data_pane_t2

0xc965,	// (0x0003e22f) phob2_cc_data_pane_t3_ParamLimits

0xc965,	// (0x0003e22f) phob2_cc_data_pane_t3

0x0002,

0xff42,	// (0x0004180c) phob2_cc_data_pane_t_ParamLimits

0xff42,	// (0x0004180c) phob2_cc_data_pane_t

0x31bb,	// (0x00034a85) phob2_cc_list_pane_ParamLimits

0x31bb,	// (0x00034a85) phob2_cc_list_pane

0x15ae,	// (0x00032e78) scroll_pane_cp035_ParamLimits

0x15ae,	// (0x00032e78) scroll_pane_cp035

0xe2c7,	// (0x0003fb91) bg_button_pane_cp033

0x31c7,	// (0x00034a91) phob2_cc_button_pane_g1

0x31d3,	// (0x00034a9d) phob2_cc_button_pane_t1

0x31e8,	// (0x00034ab2) phob2_cc_button_pane_t2

0x0001,

0xff49,	// (0x00041813) phob2_cc_button_pane_t

0xc977,	// (0x0003e241) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xc977,	// (0x0003e241) list_double_large_graphic_phob2_cc_pane

0xc99e,	// (0x0003e268) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xc99e,	// (0x0003e268) list_double_large_graphic_phob2_cc_pane_g1

0x5204,	// (0x00036ace) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x5204,	// (0x00036ace) list_double_large_graphic_phob2_cc_pane_g2

0x5213,	// (0x00036add) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x5213,	// (0x00036add) list_double_large_graphic_phob2_cc_pane_g3

0x5222,	// (0x00036aec) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x5222,	// (0x00036aec) list_double_large_graphic_phob2_cc_pane_g4

0x5233,	// (0x00036afd) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x5233,	// (0x00036afd) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff4e,	// (0x00041818) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff4e,	// (0x00041818) list_double_large_graphic_phob2_cc_pane_g

0x5242,	// (0x00036b0c) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x5242,	// (0x00036b0c) list_double_large_graphic_phob2_cc_pane_t1

0x526b,	// (0x00036b35) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x526b,	// (0x00036b35) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff59,	// (0x00041823) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff59,	// (0x00041823) list_double_large_graphic_phob2_cc_pane_t

0x31fa,	// (0x00034ac4) list_highlight_pane_cp025_ParamLimits

0x31fa,	// (0x00034ac4) list_highlight_pane_cp025

0xe2c7,	// (0x0003fb91) bg_button_pane_cp033_ParamLimits

0x31c7,	// (0x00034a91) phob2_cc_button_pane_g1_ParamLimits

0x31d3,	// (0x00034a9d) phob2_cc_button_pane_t1_ParamLimits

0x31e8,	// (0x00034ab2) phob2_cc_button_pane_t2_ParamLimits

0xff49,	// (0x00041813) phob2_cc_button_pane_t_ParamLimits

0x554b,	// (0x00036e15) popup_wgtman_window

0x1328,	// (0x00032bf2) scroll_pane_cp038

0xc554,	// (0x0003de1e) wgtman_btn_pane_cp_01_ParamLimits

0xc554,	// (0x0003de1e) wgtman_btn_pane_cp_01

0x3208,	// (0x00034ad2) wgtman_content_pane

0x3211,	// (0x00034adb) wgtman_heading_pane

0x52ac,	// (0x00036b76) bg_heading_pane_cp02

0x321a,	// (0x00034ae4) wgtman_heading_pane_g1

0x3222,	// (0x00034aec) wgtman_heading_pane_t1

0x3230,	// (0x00034afa) scroll_pane_cp036

0x3238,	// (0x00034b02) wgtman_list_pane

0x3240,	// (0x00034b0a) wgtman_list_pane_t1_ParamLimits

0x3240,	// (0x00034b0a) wgtman_list_pane_t1

0x9ffa,	// (0x0003b8c4) cam4_grid_pane

0x45ea,	// (0x00035eb4) bg_button_pane_cp015_ParamLimits

0xac89,	// (0x0003c553) bg_button_pane_cp016_ParamLimits

0xac9c,	// (0x0003c566) bg_button_pane_cp017_ParamLimits

0x462e,	// (0x00035ef8) popup_vitu2_query_window_g3_ParamLimits

0x462e,	// (0x00035ef8) popup_vitu2_query_window_g3

0x46a7,	// (0x00035f71) popup_vitu2_query_window_t6_ParamLimits

0x46a7,	// (0x00035f71) popup_vitu2_query_window_t6

0x46d2,	// (0x00035f9c) popup_vitu2_query_window_t7_ParamLimits

0x46d2,	// (0x00035f9c) popup_vitu2_query_window_t7

0x10d2,	// (0x0003299c) cam4_grid_pane_g1

0x10db,	// (0x000329a5) cam4_grid_pane_g2

0x325a,	// (0x00034b24) cam4_grid_pane_g3

0x3263,	// (0x00034b2d) cam4_grid_pane_g4

0x0003,

0xff5e,	// (0x00041828) cam4_grid_pane_g

0x6237,	// (0x00037b01) aid_placing_vt_slider_lsc_ParamLimits

0x6583,	// (0x00037e4d) vidtel_button_pane_ParamLimits

0x6583,	// (0x00037e4d) vidtel_button_pane

0x52ac,	// (0x00036b76) bg_button_pane_cp034

0xc9af,	// (0x0003e279) vidtel_button_pane_g1

0x326e,	// (0x00034b38) vidtel_button_pane_t1

0x1489,	// (0x00032d53) aid_size_vtel_slider_touch

0x15ae,	// (0x00032e78) scroll_pane_cp039

0x201a,	// (0x000338e4) ncim_query_button_pane_cp01_ParamLimits

0x2039,	// (0x00033903) ncimui_query_pane_g1_ParamLimits

0xe2c7,	// (0x0003fb91) input_focus_pane_cp012_ParamLimits

0x205e,	// (0x00033928) ncim_query_entry_pane_t1_ParamLimits

0x15ae,	// (0x00032e78) scroll_pane_cp039_ParamLimits
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

} // end of namespace AknLayoutScalable_Elaf_php_apps_qhd_prt_tch_Small
