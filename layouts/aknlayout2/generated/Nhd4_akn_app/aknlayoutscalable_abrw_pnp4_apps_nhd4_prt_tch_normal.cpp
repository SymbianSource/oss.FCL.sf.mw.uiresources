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

#include "aknlayoutscalable_abrw_pnp4_apps_nhd4_prt_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pnp4_apps_nhd4_prt_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x00016b45 };

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
0x81f4,	// (0x0001ed39) Screen

0x8200,	// (0x0001ed45) application_window

0x8240,	// (0x0001ed85) area_bottom_pane_ParamLimits

0x8240,	// (0x0001ed85) area_bottom_pane

0x8275,	// (0x0001edba) area_top_pane_ParamLimits

0x8275,	// (0x0001edba) area_top_pane

0x0252,	// (0x00016d97) call_video_uplink_pane_ParamLimits

0x0252,	// (0x00016d97) call_video_uplink_pane

0x8302,	// (0x0001ee47) main_pane_ParamLimits

0x8302,	// (0x0001ee47) main_pane

0x2c9b,	// (0x000197e0) context_pane

0xb057,	// (0x00021b9c) navi_pane

0xb077,	// (0x00021bbc) popup_cale_events_window_ParamLimits

0xb077,	// (0x00021bbc) popup_cale_events_window

0x2cae,	// (0x000197f3) popup_mup_playback_window

0xb08f,	// (0x00021bd4) signal_pane

0x0a1b,	// (0x00017560) main_browser_pane

0x17af,	// (0x000182f4) main_burst_pane

0xaf2d,	// (0x00021a72) main_calc_pane

0x17af,	// (0x000182f4) main_cale_day_pane

0x0a1b,	// (0x00017560) main_cale_month_pane

0x17af,	// (0x000182f4) main_cale_week_pane

0x17af,	// (0x000182f4) main_call_pane

0x068f,	// (0x000171d4) main_call_poc_pane

0x17af,	// (0x000182f4) main_camera_pane

0x17af,	// (0x000182f4) main_chi_dic_pane

0x163e,	// (0x00018183) main_clock_pane

0x068f,	// (0x000171d4) main_fmradio_pane

0x17af,	// (0x000182f4) main_graph_messa_pane

0x068f,	// (0x000171d4) main_help_pane

0x0a1b,	// (0x00017560) main_im_pane

0x08ea,	// (0x0001742f) main_image_pane_ParamLimits

0x08ea,	// (0x0001742f) main_image_pane

0x068f,	// (0x000171d4) main_location2_pane

0x17af,	// (0x000182f4) main_location_pane

0x068f,	// (0x000171d4) main_messa_pane

0x068f,	// (0x000171d4) main_mp2_pane

0x17af,	// (0x000182f4) main_mp_pane

0x068f,	// (0x000171d4) main_msg_pane

0x068f,	// (0x000171d4) main_mup_eq_pane

0x068f,	// (0x000171d4) main_mup_pane

0x17af,	// (0x000182f4) main_notes_pane

0x068f,	// (0x000171d4) main_pec_pane

0x068f,	// (0x000171d4) main_phob_pane

0x068f,	// (0x000171d4) main_pinb_pane

0x068f,	// (0x000171d4) main_postcard_pane

0x068f,	// (0x000171d4) main_qdial_pane

0x17af,	// (0x000182f4) main_skin_pane

0x068f,	// (0x000171d4) main_smil2_pane

0x17af,	// (0x000182f4) main_smil_pane

0x17af,	// (0x000182f4) main_video_pane

0x17af,	// (0x000182f4) main_video_tele_pane

0x08ea,	// (0x0001742f) main_viewer_pane_ParamLimits

0x08ea,	// (0x0001742f) main_viewer_pane

0x17af,	// (0x000182f4) main_vorec_pane

0xaf63,	// (0x00021aa8) popup_blid_sat_info_window_ParamLimits

0xaf63,	// (0x00021aa8) popup_blid_sat_info_window

0xaf79,	// (0x00021abe) popup_dyc_status_message_window_ParamLimits

0xaf79,	// (0x00021abe) popup_dyc_status_message_window

0xaf87,	// (0x00021acc) popup_grid_large_graphic_window_ParamLimits

0xaf87,	// (0x00021acc) popup_grid_large_graphic_window

0xaffb,	// (0x00021b40) popup_loc_request_window_ParamLimits

0xaffb,	// (0x00021b40) popup_loc_request_window

0xb02f,	// (0x00021b74) popup_wml_address_window_ParamLimits

0xb02f,	// (0x00021b74) popup_wml_address_window

0xae05,	// (0x0002194a) call_muted_g1

0xaac4,	// (0x00021609) popup_call_audio_conf_window_ParamLimits

0xaac4,	// (0x00021609) popup_call_audio_conf_window

0xae15,	// (0x0002195a) popup_call_audio_first_window_ParamLimits

0xae15,	// (0x0002195a) popup_call_audio_first_window

0xae55,	// (0x0002199a) popup_call_audio_in_window_ParamLimits

0xae55,	// (0x0002199a) popup_call_audio_in_window

0xae79,	// (0x000219be) popup_call_audio_out_window_ParamLimits

0xae79,	// (0x000219be) popup_call_audio_out_window

0xae9b,	// (0x000219e0) popup_call_audio_second_window_ParamLimits

0xae9b,	// (0x000219e0) popup_call_audio_second_window

0xaecb,	// (0x00021a10) popup_call_audio_wait_window_ParamLimits

0xaecb,	// (0x00021a10) popup_call_audio_wait_window

0xaeec,	// (0x00021a31) popup_number_entry_window_ParamLimits

0xaeec,	// (0x00021a31) popup_number_entry_window

0x027e,	// (0x00016dc3) bg_popup_call_pane_cp05_ParamLimits

0x027e,	// (0x00016dc3) bg_popup_call_pane_cp05

0x029e,	// (0x00016de3) popup_number_entry_window_t1

0x02b1,	// (0x00016df6) popup_number_entry_window_t2

0x02c3,	// (0x00016e08) popup_number_entry_window_t3

0x0003,

0xf0ec,	// (0x00025c31) popup_number_entry_window_t

0x02d5,	// (0x00016e1a) text_title_cp2

0x02e8,	// (0x00016e2d) bg_popup_call_pane_cp_ParamLimits

0x02e8,	// (0x00016e2d) bg_popup_call_pane_cp

0x02f6,	// (0x00016e3b) call_thumbnail_pane

0x02fe,	// (0x00016e43) popup_call_audio_in_window_g1_ParamLimits

0x02fe,	// (0x00016e43) popup_call_audio_in_window_g1

0x030a,	// (0x00016e4f) popup_call_audio_in_window_g2_ParamLimits

0x030a,	// (0x00016e4f) popup_call_audio_in_window_g2

0x0316,	// (0x00016e5b) popup_call_audio_in_window_g3_ParamLimits

0x0316,	// (0x00016e5b) popup_call_audio_in_window_g3

0x0002,

0xf0f5,	// (0x00025c3a) popup_call_audio_in_window_g_ParamLimits

0xf0f5,	// (0x00025c3a) popup_call_audio_in_window_g

0x0322,	// (0x00016e67) popup_call_audio_in_window_t1_ParamLimits

0x0322,	// (0x00016e67) popup_call_audio_in_window_t1

0x033d,	// (0x00016e82) popup_call_audio_in_window_t2_ParamLimits

0x033d,	// (0x00016e82) popup_call_audio_in_window_t2

0x0358,	// (0x00016e9d) popup_call_audio_in_window_t3_ParamLimits

0x0358,	// (0x00016e9d) popup_call_audio_in_window_t3

0x0002,

0xf0fc,	// (0x00025c41) popup_call_audio_in_window_t_ParamLimits

0xf0fc,	// (0x00025c41) popup_call_audio_in_window_t

0x02e8,	// (0x00016e2d) bg_popup_call_pane_cp01_ParamLimits

0x02e8,	// (0x00016e2d) bg_popup_call_pane_cp01

0x02f6,	// (0x00016e3b) call_thumbnail_pane_cp02

0x036b,	// (0x00016eb0) call_type_pane_cp022

0x0373,	// (0x00016eb8) popup_call_audio_out_window_g1_ParamLimits

0x0373,	// (0x00016eb8) popup_call_audio_out_window_g1

0x0385,	// (0x00016eca) popup_call_audio_out_window_g2_ParamLimits

0x0385,	// (0x00016eca) popup_call_audio_out_window_g2

0x0391,	// (0x00016ed6) popup_call_audio_out_window_g3_ParamLimits

0x0391,	// (0x00016ed6) popup_call_audio_out_window_g3

0x0002,

0xf103,	// (0x00025c48) popup_call_audio_out_window_g_ParamLimits

0xf103,	// (0x00025c48) popup_call_audio_out_window_g

0x03a3,	// (0x00016ee8) popup_call_audio_out_window_t1_ParamLimits

0x03a3,	// (0x00016ee8) popup_call_audio_out_window_t1

0x03bb,	// (0x00016f00) popup_call_audio_out_window_t2_ParamLimits

0x03bb,	// (0x00016f00) popup_call_audio_out_window_t2

0x0001,

0xf10a,	// (0x00025c4f) popup_call_audio_out_window_t_ParamLimits

0xf10a,	// (0x00025c4f) popup_call_audio_out_window_t

0x03d0,	// (0x00016f15) bg_popup_call_pane_ParamLimits

0x03d0,	// (0x00016f15) bg_popup_call_pane

0x84f5,	// (0x0001f03a) call_thumbnail_pane_cp_ParamLimits

0x84f5,	// (0x0001f03a) call_thumbnail_pane_cp

0x0454,	// (0x00016f99) call_type_pane_cp01_ParamLimits

0x0454,	// (0x00016f99) call_type_pane_cp01

0x0498,	// (0x00016fdd) popup_call_audio_first_window_g1_ParamLimits

0x0498,	// (0x00016fdd) popup_call_audio_first_window_g1

0x04e4,	// (0x00017029) popup_call_audio_first_window_g2_ParamLimits

0x04e4,	// (0x00017029) popup_call_audio_first_window_g2

0x0001,

0xf10f,	// (0x00025c54) popup_call_audio_first_window_g_ParamLimits

0xf10f,	// (0x00025c54) popup_call_audio_first_window_g

0x0528,	// (0x0001706d) popup_call_audio_first_window_t1_ParamLimits

0x0528,	// (0x0001706d) popup_call_audio_first_window_t1

0x05d4,	// (0x00017119) popup_call_audio_first_window_t4_ParamLimits

0x05d4,	// (0x00017119) popup_call_audio_first_window_t4

0x0660,	// (0x000171a5) popup_call_audio_first_window_t5_ParamLimits

0x0660,	// (0x000171a5) popup_call_audio_first_window_t5

0x0002,

0xf114,	// (0x00025c59) popup_call_audio_first_window_t_ParamLimits

0xf114,	// (0x00025c59) popup_call_audio_first_window_t

0x068f,	// (0x000171d4) bg_popup_call_pane_cp02

0x0699,	// (0x000171de) call_type_pane_cp023

0x06a1,	// (0x000171e6) popup_call_audio_wait_window_g1

0x06a9,	// (0x000171ee) popup_call_audio_wait_window_g2

0x0001,

0xf11b,	// (0x00025c60) popup_call_audio_wait_window_g

0x06b1,	// (0x000171f6) popup_call_audio_wait_window_t3

0x06bf,	// (0x00017204) bg_popup_call_pane_cp03_ParamLimits

0x06bf,	// (0x00017204) bg_popup_call_pane_cp03

0x071f,	// (0x00017264) call_thumbnail_pane_cp011_ParamLimits

0x071f,	// (0x00017264) call_thumbnail_pane_cp011

0x072b,	// (0x00017270) call_type_pane_cp034_ParamLimits

0x072b,	// (0x00017270) call_type_pane_cp034

0x0767,	// (0x000172ac) popup_call_audio_second_window_g1_ParamLimits

0x0767,	// (0x000172ac) popup_call_audio_second_window_g1

0x07a3,	// (0x000172e8) popup_call_audio_second_window_g2_ParamLimits

0x07a3,	// (0x000172e8) popup_call_audio_second_window_g2

0x0001,

0xf120,	// (0x00025c65) popup_call_audio_second_window_g_ParamLimits

0xf120,	// (0x00025c65) popup_call_audio_second_window_g

0x07df,	// (0x00017324) popup_call_audio_second_window_t1_ParamLimits

0x07df,	// (0x00017324) popup_call_audio_second_window_t1

0x0860,	// (0x000173a5) popup_call_audio_second_window_t2_ParamLimits

0x0860,	// (0x000173a5) popup_call_audio_second_window_t2

0x0896,	// (0x000173db) popup_call_audio_second_window_t3_ParamLimits

0x0896,	// (0x000173db) popup_call_audio_second_window_t3

0x0002,

0xf125,	// (0x00025c6a) popup_call_audio_second_window_t_ParamLimits

0xf125,	// (0x00025c6a) popup_call_audio_second_window_t

0x068f,	// (0x000171d4) bg_popup_call_pane_cp04

0x08cc,	// (0x00017411) list_conf_pane

0x08d4,	// (0x00017419) popup_call_audio_conf_window_t1

0x08e2,	// (0x00017427) call_thumbnail_pane_g1

0x08ea,	// (0x0001742f) bg_pinb_pane_ParamLimits

0x08ea,	// (0x0001742f) bg_pinb_pane

0x08f8,	// (0x0001743d) find_pinb_pane

0x0901,	// (0x00017446) listscroll_pinb_pane_ParamLimits

0x0901,	// (0x00017446) listscroll_pinb_pane

0x0910,	// (0x00017455) pinb_bg_pane_g1

0x8519,	// (0x0001f05e) pinb_bg_pane_g2

0x8525,	// (0x0001f06a) pinb_bg_pane_g3

0x8531,	// (0x0001f076) pinb_bg_pane_g4

0x853d,	// (0x0001f082) pinb_bg_pane_g5

0x8549,	// (0x0001f08e) pinb_bg_pane_g6

0x8554,	// (0x0001f099) pinb_bg_pane_g7

0x855f,	// (0x0001f0a4) pinb_bg_pane_g8

0x856a,	// (0x0001f0af) pinb_bg_pane_g9

0x8574,	// (0x0001f0b9) pinb_bg_pane_g10

0x0009,

0xf12c,	// (0x00025c71) pinb_bg_pane_g

0x8589,	// (0x0001f0ce) grid_pinb_pane

0x8594,	// (0x0001f0d9) list_pinb_pane

0x859f,	// (0x0001f0e4) scroll_pane_cp01_ParamLimits

0x859f,	// (0x0001f0e4) scroll_pane_cp01

0x0922,	// (0x00017467) find_pinb_pane_g1_ParamLimits

0x0922,	// (0x00017467) find_pinb_pane_g1

0x093a,	// (0x0001747f) find_pinb_pane_t1

0x094c,	// (0x00017491) find_pinb_pane_t2

0x0001,

0xf146,	// (0x00025c8b) find_pinb_pane_t

0x0961,	// (0x000174a6) input_focus_pane_cp01_ParamLimits

0x0961,	// (0x000174a6) input_focus_pane_cp01

0x85b1,	// (0x0001f0f6) cell_pinb_pane_ParamLimits

0x85b1,	// (0x0001f0f6) cell_pinb_pane

0x85df,	// (0x0001f124) cell_pinb_pane_g1_ParamLimits

0x85df,	// (0x0001f124) cell_pinb_pane_g1

0x85f4,	// (0x0001f139) cell_pinb_pane_g2_ParamLimits

0x85f4,	// (0x0001f139) cell_pinb_pane_g2

0x096d,	// (0x000174b2) cell_pinb_pane_g3_ParamLimits

0x096d,	// (0x000174b2) cell_pinb_pane_g3

0x0002,

0xf14b,	// (0x00025c90) cell_pinb_pane_g_ParamLimits

0xf14b,	// (0x00025c90) cell_pinb_pane_g

0x068f,	// (0x000171d4) grid_highlight_pane_cp01

0x8600,	// (0x0001f145) list_pinb_item_pane_ParamLimits

0x8600,	// (0x0001f145) list_pinb_item_pane

0x068f,	// (0x000171d4) list_highlight_pane_cp02

0x0979,	// (0x000174be) list_pinb_item_pane_g1_ParamLimits

0x0979,	// (0x000174be) list_pinb_item_pane_g1

0x0986,	// (0x000174cb) list_pinb_item_pane_g2_ParamLimits

0x0986,	// (0x000174cb) list_pinb_item_pane_g2

0x862a,	// (0x0001f16f) list_pinb_item_pane_g3_ParamLimits

0x862a,	// (0x0001f16f) list_pinb_item_pane_g3

0x0992,	// (0x000174d7) list_pinb_item_pane_g4_ParamLimits

0x0992,	// (0x000174d7) list_pinb_item_pane_g4

0x0003,

0xf152,	// (0x00025c97) list_pinb_item_pane_g_ParamLimits

0xf152,	// (0x00025c97) list_pinb_item_pane_g

0x099e,	// (0x000174e3) list_pinb_item_pane_t1_ParamLimits

0x099e,	// (0x000174e3) list_pinb_item_pane_t1

0x6df5,	// (0x0001d93a) calc_display_pane

0x6e13,	// (0x0001d958) calc_paper_pane

0x6e2f,	// (0x0001d974) grid_calc_pane

0x068f,	// (0x000171d4) bg_list_pane_cp01

0x863b,	// (0x0001f180) clock_g1

0x8643,	// (0x0001f188) clock_g2

0x0001,

0xf15b,	// (0x00025ca0) clock_g

0x864d,	// (0x0001f192) clock_t1_ParamLimits

0x864d,	// (0x0001f192) clock_t1

0x8662,	// (0x0001f1a7) clock_t2_ParamLimits

0x8662,	// (0x0001f1a7) clock_t2

0x8674,	// (0x0001f1b9) clock_t3_ParamLimits

0x8674,	// (0x0001f1b9) clock_t3

0x8686,	// (0x0001f1cb) clock_t4_ParamLimits

0x8686,	// (0x0001f1cb) clock_t4

0x8698,	// (0x0001f1dd) clock_t5_ParamLimits

0x8698,	// (0x0001f1dd) clock_t5

0x86ad,	// (0x0001f1f2) clock_t6_ParamLimits

0x86ad,	// (0x0001f1f2) clock_t6

0x86bf,	// (0x0001f204) clock_t7_ParamLimits

0x86bf,	// (0x0001f204) clock_t7

0x86d1,	// (0x0001f216) clock_t8_ParamLimits

0x86d1,	// (0x0001f216) clock_t8

0x86e7,	// (0x0001f22c) clock_t9_ParamLimits

0x86e7,	// (0x0001f22c) clock_t9

0x0008,

0xf160,	// (0x00025ca5) clock_t_ParamLimits

0xf160,	// (0x00025ca5) clock_t

0x09bd,	// (0x00017502) popup_clock_analogue_window_cp02

0x09bd,	// (0x00017502) popup_clock_digital_window_cp01

0x09c5,	// (0x0001750a) listscroll_help_pane

0x068f,	// (0x000171d4) phob_pre_status_pane

0x09cf,	// (0x00017514) grid_qdial_pane

0x068f,	// (0x000171d4) listscroll_mce_pane

0x09d9,	// (0x0001751e) bg_notes_pane

0x09e3,	// (0x00017528) list_notes_pane

0x86fd,	// (0x0001f242) scroll_pane_cp06

0x09ed,	// (0x00017532) bg_calc_paper_pane

0x6e65,	// (0x0001d9aa) list_calc_pane

0x0a1b,	// (0x00017560) bg_calc_display_pane

0x6e7f,	// (0x0001d9c4) calc_display_pane_t1

0x6e94,	// (0x0001d9d9) calc_display_pane_t2

0x6ea9,	// (0x0001d9ee) calc_display_pane_t3

0x0002,

0xf173,	// (0x00025cb8) calc_display_pane_t

0x6ebb,	// (0x0001da00) cell_calc_pane_ParamLimits

0x6ebb,	// (0x0001da00) cell_calc_pane

0x0a39,	// (0x0001757e) bg_calc_paper_pane_g1

0x0a51,	// (0x00017596) bg_calc_paper_pane_g2

0x0a45,	// (0x0001758a) bg_calc_paper_pane_g3

0x0a69,	// (0x000175ae) bg_calc_paper_pane_g4

0x0a5d,	// (0x000175a2) bg_calc_paper_pane_g5

0x8708,	// (0x0001f24d) bg_calc_paper_pane_g6

0x8719,	// (0x0001f25e) bg_calc_paper_pane_g7

0x872a,	// (0x0001f26f) bg_calc_paper_pane_g8

0x0007,

0xf17a,	// (0x00025cbf) bg_calc_paper_pane_g

0x873b,	// (0x0001f280) calc_bg_paper_pane_g9

0x874c,	// (0x0001f291) list_calc_item_pane_ParamLimits

0x874c,	// (0x0001f291) list_calc_item_pane

0x0a75,	// (0x000175ba) list_calc_item_pane_g1

0x6ee8,	// (0x0001da2d) list_calc_item_pane_t1_ParamLimits

0x6ee8,	// (0x0001da2d) list_calc_item_pane_t1

0x6efa,	// (0x0001da3f) list_calc_item_pane_t2_ParamLimits

0x6efa,	// (0x0001da3f) list_calc_item_pane_t2

0x0001,

0xf18b,	// (0x00025cd0) list_calc_item_pane_t_ParamLimits

0xf18b,	// (0x00025cd0) list_calc_item_pane_t

0x0a94,	// (0x000175d9) cell_calc_pane_g1

0x0a9e,	// (0x000175e3) grid_highlight_pane_cp02

0x0ad3,	// (0x00017618) bg_calc_display_pane_g1

0x6f2a,	// (0x0001da6f) bg_calc_display_pane_g2

0x0ac0,	// (0x00017605) bg_calc_display_pane_g3

0x0002,

0xf195,	// (0x00025cda) bg_calc_display_pane_g

0x6f34,	// (0x0001da79) cell_qdial_pane_ParamLimits

0x6f34,	// (0x0001da79) cell_qdial_pane

0x8786,	// (0x0001f2cb) cell_qdial_pane_g1_ParamLimits

0x8786,	// (0x0001f2cb) cell_qdial_pane_g1

0x8793,	// (0x0001f2d8) cell_qdial_pane_g2_ParamLimits

0x8793,	// (0x0001f2d8) cell_qdial_pane_g2

0x0adc,	// (0x00017621) cell_qdial_pane_g3_ParamLimits

0x0adc,	// (0x00017621) cell_qdial_pane_g3

0x0003,

0xf19c,	// (0x00025ce1) cell_qdial_pane_g_ParamLimits

0xf19c,	// (0x00025ce1) cell_qdial_pane_g

0x87b1,	// (0x0001f2f6) cell_qdial_pane_t1_ParamLimits

0x87b1,	// (0x0001f2f6) cell_qdial_pane_t1

0x87c9,	// (0x0001f30e) cell_qdial_pane_t2_ParamLimits

0x87c9,	// (0x0001f30e) cell_qdial_pane_t2

0x87dc,	// (0x0001f321) cell_qdial_pane_t3_ParamLimits

0x87dc,	// (0x0001f321) cell_qdial_pane_t3

0x0002,

0xf1a5,	// (0x00025cea) cell_qdial_pane_t_ParamLimits

0xf1a5,	// (0x00025cea) cell_qdial_pane_t

0x068f,	// (0x000171d4) grid_highlight_pane_cp04

0x0ae8,	// (0x0001762d) thumbnail_qdial_pane_ParamLimits

0x0ae8,	// (0x0001762d) thumbnail_qdial_pane

0x0b44,	// (0x00017689) list_help_pane

0x0b4d,	// (0x00017692) scroll_pane_cp02

0x87ef,	// (0x0001f334) help_list_pane_t1_ParamLimits

0x87ef,	// (0x0001f334) help_list_pane_t1

0x6f48,	// (0x0001da8d) bg_notes_pane_g2

0x6f50,	// (0x0001da95) bg_notes_pane_g3

0x6f58,	// (0x0001da9d) notes_bg_pane_g1

0x6f60,	// (0x0001daa5) notes_bg_pane_g4

0x6f68,	// (0x0001daad) notes_bg_pane_g5

0x6f70,	// (0x0001dab5) notes_bg_pane_g6

0x6f78,	// (0x0001dabd) notes_bg_pane_g7

0x6f80,	// (0x0001dac5) notes_bg_pane_g8

0x6f88,	// (0x0001dacd) notes_bg_pane_g9

0x0006,

0xf1c3,	// (0x00025d08) notes_bg_pane_g

0x882d,	// (0x0001f372) list_notes_text_pane_ParamLimits

0x882d,	// (0x0001f372) list_notes_text_pane

0x0bb5,	// (0x000176fa) list_notes_text_pane_g1

0x0bbe,	// (0x00017703) list_notes_text_pane_t1

0x0a1b,	// (0x00017560) listscroll_cale_week_pane

0x887a,	// (0x0001f3bf) bg_cale_heading_pane

0x0bdd,	// (0x00017722) bg_cale_pane_cp01

0x8896,	// (0x0001f3db) cale_week_corner_pane

0x88a7,	// (0x0001f3ec) cale_week_day_heading_pane

0x88c3,	// (0x0001f408) cale_week_scroll_pane_g1

0x88dc,	// (0x0001f421) cale_week_scroll_pane_g2

0x88ed,	// (0x0001f432) cale_week_scroll_pane_g3

0x88fe,	// (0x0001f443) cale_week_scroll_pane_g4

0x890f,	// (0x0001f454) cale_week_scroll_pane_g5

0x8920,	// (0x0001f465) cale_week_scroll_pane_g6

0x8931,	// (0x0001f476) cale_week_scroll_pane_g7

0x8944,	// (0x0001f489) cale_week_scroll_pane_g8

0x8957,	// (0x0001f49c) cale_week_scroll_pane_g9

0x8968,	// (0x0001f4ad) cale_week_scroll_pane_g10

0x8979,	// (0x0001f4be) cale_week_scroll_pane_g11

0x898a,	// (0x0001f4cf) cale_week_scroll_pane_g12

0x89a3,	// (0x0001f4e8) cale_week_scroll_pane_g13

0x89bc,	// (0x0001f501) cale_week_scroll_pane_g14

0x89d5,	// (0x0001f51a) cale_week_scroll_pane_g15

0x000e,

0xf1d2,	// (0x00025d17) cale_week_scroll_pane_g

0x89ee,	// (0x0001f533) cale_week_time_pane

0x8a01,	// (0x0001f546) grid_cale_week_pane

0x8a1e,	// (0x0001f563) scroll_pane_cp08

0x8a38,	// (0x0001f57d) cell_cale_week_pane_ParamLimits

0x8a38,	// (0x0001f57d) cell_cale_week_pane

0x8a88,	// (0x0001f5cd) cale_week_day_heading_pane_t1

0x8a9c,	// (0x0001f5e1) cale_week_day_heading_pane_t2

0x8ab0,	// (0x0001f5f5) cale_week_day_heading_pane_t3

0x8ac4,	// (0x0001f609) cale_week_day_heading_pane_t4

0x8ad8,	// (0x0001f61d) cale_week_day_heading_pane_t5

0x8aec,	// (0x0001f631) cale_week_day_heading_pane_t6

0x8b00,	// (0x0001f645) cale_week_day_heading_pane_t7

0x0006,

0xf1f1,	// (0x00025d36) cale_week_day_heading_pane_t

0x0c08,	// (0x0001774d) bg_cale_side_pane

0x6f90,	// (0x0001dad5) cale_week_time_pane_t1

0x6fa8,	// (0x0001daed) cale_week_time_pane_t2

0x6fc0,	// (0x0001db05) cale_week_time_pane_t3

0x6fd8,	// (0x0001db1d) cale_week_time_pane_t4

0x6ff0,	// (0x0001db35) cale_week_time_pane_t5

0x7008,	// (0x0001db4d) cale_week_time_pane_t6

0x7028,	// (0x0001db6d) cale_week_time_pane_t7

0x7048,	// (0x0001db8d) cale_week_time_pane_t8

0x0007,

0xf200,	// (0x00025d45) cale_week_time_pane_t

0x8b14,	// (0x0001f659) cell_cale_week_pane_g2

0x8b25,	// (0x0001f66a) cell_cale_week_pane_g3_ParamLimits

0x8b25,	// (0x0001f66a) cell_cale_week_pane_g3

0x0c16,	// (0x0001775b) grid_highlight_pane_cp07

0x0c1e,	// (0x00017763) listscroll_gms_pane

0x0c28,	// (0x0001776d) grid_gms_pane

0x0c31,	// (0x00017776) listscroll_gms_pane_g1

0x0c39,	// (0x0001777e) listscroll_gms_pane_g2

0x0001,

0xf211,	// (0x00025d56) listscroll_gms_pane_g

0x8b3d,	// (0x0001f682) scroll_pane_cp010

0x8b48,	// (0x0001f68d) cell_gms_pane_ParamLimits

0x8b48,	// (0x0001f68d) cell_gms_pane

0x8b5a,	// (0x0001f69f) cell_gms_pane_g1

0x0c41,	// (0x00017786) cell_gms_pane_g2

0x0bb5,	// (0x000176fa) cell_gms_pane_g3

0x0c49,	// (0x0001778e) cell_gms_pane_g4

0x0003,

0xf216,	// (0x00025d5b) cell_gms_pane_g

0x0c52,	// (0x00017797) grid_highlight_pane_cp09

0xadad,	// (0x000218f2) phob_pre_status_pane_g1

0xadb5,	// (0x000218fa) phob_pre_status_pane_g2

0xadbd,	// (0x00021902) phob_pre_status_pane_g3

0xadc5,	// (0x0002190a) phob_pre_status_pane_g4

0x0004,

0xf605,	// (0x0002614a) phob_pre_status_pane_g

0xadd5,	// (0x0002191a) phob_pre_status_pane_t1

0xade5,	// (0x0002192a) phob_pre_status_pane_t2

0xadf5,	// (0x0002193a) phob_pre_status_pane_t3

0x0002,

0xf610,	// (0x00026155) phob_pre_status_pane_t

0x068f,	// (0x000171d4) bg_list_pane_cp05

0x7070,	// (0x0001dbb5) grid_vorec_pane

0x7078,	// (0x0001dbbd) vorec_t1

0x7086,	// (0x0001dbcb) vorec_t2

0x7094,	// (0x0001dbd9) vorec_t3

0x70a2,	// (0x0001dbe7) vorec_t4

0x70b0,	// (0x0001dbf5) vorec_t5

0x70be,	// (0x0001dc03) vorec_t6

0x0006,

0xf21f,	// (0x00025d64) vorec_t

0x70da,	// (0x0001dc1f) wait_bar_pane_cp01

0x0cd4,	// (0x00017819) cell_vorec_pane_ParamLimits

0x0cd4,	// (0x00017819) cell_vorec_pane

0x0ce7,	// (0x0001782c) cell_vorec_pane_g1

0x068f,	// (0x000171d4) grid_highlight_pane_cp05

0x8b72,	// (0x0001f6b7) cams_zoom_pane

0x8b7e,	// (0x0001f6c3) image_vga_pane

0x8b8d,	// (0x0001f6d2) main_camera_pane_g1

0x8b9b,	// (0x0001f6e0) main_camera_pane_g2

0x8ba9,	// (0x0001f6ee) main_camera_pane_g3

0x8bb5,	// (0x0001f6fa) main_camera_pane_g4

0x8bc1,	// (0x0001f706) main_camera_pane_g5

0x8bcd,	// (0x0001f712) main_camera_pane_g6

0x8bd9,	// (0x0001f71e) main_camera_pane_g7

0x0007,

0xf22e,	// (0x00025d73) main_camera_pane_g

0x8be5,	// (0x0001f72a) main_camera_pane_t1

0x8bf7,	// (0x0001f73c) main_camera_pane_t2

0x0001,

0xf23f,	// (0x00025d84) main_camera_pane_t

0x8c18,	// (0x0001f75d) cams_zoom_pane_cp_ParamLimits

0x8c18,	// (0x0001f75d) cams_zoom_pane_cp

0x8c3c,	// (0x0001f781) image_cif_pane_ParamLimits

0x8c3c,	// (0x0001f781) image_cif_pane

0x8c5a,	// (0x0001f79f) image_subqcif_pane

0x8c62,	// (0x0001f7a7) main_video_pane_g1_ParamLimits

0x8c62,	// (0x0001f7a7) main_video_pane_g1

0x8c82,	// (0x0001f7c7) main_video_pane_g2_ParamLimits

0x8c82,	// (0x0001f7c7) main_video_pane_g2

0x8cb4,	// (0x0001f7f9) main_video_pane_g3_ParamLimits

0x8cb4,	// (0x0001f7f9) main_video_pane_g3

0x8cdf,	// (0x0001f824) main_video_pane_g4_ParamLimits

0x8cdf,	// (0x0001f824) main_video_pane_g4

0x8d0a,	// (0x0001f84f) main_video_pane_g5_ParamLimits

0x8d0a,	// (0x0001f84f) main_video_pane_g5

0x0cfd,	// (0x00017842) main_video_pane_g6_ParamLimits

0x0cfd,	// (0x00017842) main_video_pane_g6

0x0006,

0xf244,	// (0x00025d89) main_video_pane_g_ParamLimits

0xf244,	// (0x00025d89) main_video_pane_g

0x8d2e,	// (0x0001f873) main_video_pane_t1_ParamLimits

0x8d2e,	// (0x0001f873) main_video_pane_t1

0x0d17,	// (0x0001785c) cams_zoom_pane_g1

0x0d20,	// (0x00017865) cams_zoom_pane_g2

0x0d29,	// (0x0001786e) cams_zoom_pane_g3

0x0d32,	// (0x00017877) cams_zoom_pane_g4

0x0003,

0xf253,	// (0x00025d98) cams_zoom_pane_g

0x8d78,	// (0x0001f8bd) grid_cams_pane

0x8d86,	// (0x0001f8cb) linegrid_cams_pane

0x8d94,	// (0x0001f8d9) cell_cams_pane_ParamLimits

0x8d94,	// (0x0001f8d9) cell_cams_pane

0x0d3b,	// (0x00017880) cams_burst_image_pane

0x0d43,	// (0x00017888) cell_cams_pane_g1

0x068f,	// (0x000171d4) grid_highlight_pane_cp03

0x0a94,	// (0x000175d9) mp_bg_pane_g1

0x068f,	// (0x000171d4) bg_list_pane_cp03

0x2b73,	// (0x000196b8) bg_mp_pane

0x2b7b,	// (0x000196c0) grid_mp_pane

0x2b83,	// (0x000196c8) media_player_g1

0x2b8b,	// (0x000196d0) media_player_t1

0x2b99,	// (0x000196de) media_player_t2

0x2ba7,	// (0x000196ec) media_player_t3

0x2bb5,	// (0x000196fa) media_player_t4

0x2bc3,	// (0x00019708) media_player_t5

0x2bd1,	// (0x00019716) media_player_t6

0x2bdf,	// (0x00019724) media_player_t7

0x0006,

0xf5ef,	// (0x00026134) media_player_t

0x2bed,	// (0x00019732) wait_bar_pane_cp02

0xf5d4,	// (0x00026119) main_usb_pane_t

0xada4,	// (0x000218e9) cell_mp_pane

0x0a94,	// (0x000175d9) cell_mp_pane_g1

0x068f,	// (0x000171d4) grid_highlight_pane_cp06

0x0e08,	// (0x0001794d) grid_skin_colour_pane

0x0e10,	// (0x00017955) list_highlight_pane_cp03

0x8dfd,	// (0x0001f942) skin_g1

0x0e18,	// (0x0001795d) skin_t1

0x0e27,	// (0x0001796c) skin_t2

0x0001,

0xf288,	// (0x00025dcd) skin_t

0x8e07,	// (0x0001f94c) cell_skin_colour_pane_ParamLimits

0x8e07,	// (0x0001f94c) cell_skin_colour_pane

0x0e35,	// (0x0001797a) cell_skin_colour_pane_g1

0x8e8b,	// (0x0001f9d0) call_video_g1_ParamLimits

0x8e8b,	// (0x0001f9d0) call_video_g1

0x8e9b,	// (0x0001f9e0) call_video_g2_ParamLimits

0x8e9b,	// (0x0001f9e0) call_video_g2

0x0001,

0xf28d,	// (0x00025dd2) call_video_g_ParamLimits

0xf28d,	// (0x00025dd2) call_video_g

0x8ef5,	// (0x0001fa3a) call_video_uplink_pane_cp1_ParamLimits

0x8ef5,	// (0x0001fa3a) call_video_uplink_pane_cp1

0x0e47,	// (0x0001798c) call_video_uplink_pane_cp2

0x8fc1,	// (0x0001fb06) video_down_crop_pane_ParamLimits

0x8fc1,	// (0x0001fb06) video_down_crop_pane

0x90b3,	// (0x0001fbf8) video_down_pane_ParamLimits

0x90b3,	// (0x0001fbf8) video_down_pane

0x0e4f,	// (0x00017994) video_down_subqcif_pane_ParamLimits

0x0e4f,	// (0x00017994) video_down_subqcif_pane

0x0e67,	// (0x000179ac) video_down_subqcif_pane_cp_ParamLimits

0x0e67,	// (0x000179ac) video_down_subqcif_pane_cp

0x0e8b,	// (0x000179d0) im_reading_pane_ParamLimits

0x0e8b,	// (0x000179d0) im_reading_pane

0x91d5,	// (0x0001fd1a) im_writing_pane_ParamLimits

0x91d5,	// (0x0001fd1a) im_writing_pane

0x91f3,	// (0x0001fd38) im_reading_pane_t1

0x0ea5,	// (0x000179ea) list_im_pane

0x0eb6,	// (0x000179fb) scroll_pane_cp07

0x9253,	// (0x0001fd98) im_writing_pane_t1_ParamLimits

0x9253,	// (0x0001fd98) im_writing_pane_t1

0x0ecf,	// (0x00017a14) im_writing_pane_t2_ParamLimits

0x0ecf,	// (0x00017a14) im_writing_pane_t2

0x0001,

0xf297,	// (0x00025ddc) im_writing_pane_t_ParamLimits

0xf297,	// (0x00025ddc) im_writing_pane_t

0x068f,	// (0x000171d4) input_focus_pane_cp04

0x068f,	// (0x000171d4) input_focus_pane_cp05

0x9265,	// (0x0001fdaa) list_im_single_pane_ParamLimits

0x9265,	// (0x0001fdaa) list_im_single_pane

0x9291,	// (0x0001fdd6) list_single_im_pane_t1

0xad68,	// (0x000218ad) blid_accuracy_pane

0xad70,	// (0x000218b5) blid_compass_pane

0xad7a,	// (0x000218bf) main_location_t1

0xad88,	// (0x000218cd) main_location_t2

0xad96,	// (0x000218db) main_location_t3

0x0002,

0xf5fe,	// (0x00026143) main_location_t

0x068f,	// (0x000171d4) aid_levels_location

0x0a94,	// (0x000175d9) blid_accuracy_pane_g1

0x0a94,	// (0x000175d9) blid_accuracy_pane_g2

0x0001,

0xf2f9,	// (0x00025e3e) blid_accuracy_pane_g

0x0f17,	// (0x00017a5c) wml_content_pane

0x0f55,	// (0x00017a9a) wml_button_pane_ParamLimits

0x0f55,	// (0x00017a9a) wml_button_pane

0x92a0,	// (0x0001fde5) wml_list_single_large_pane_ParamLimits

0x92a0,	// (0x0001fde5) wml_list_single_large_pane

0x92d2,	// (0x0001fe17) wml_list_single_medium_pane_ParamLimits

0x92d2,	// (0x0001fe17) wml_list_single_medium_pane

0x930b,	// (0x0001fe50) wml_list_single_small_pane_ParamLimits

0x930b,	// (0x0001fe50) wml_list_single_small_pane

0x0f69,	// (0x00017aae) wml_selection_box_pane_ParamLimits

0x0f69,	// (0x00017aae) wml_selection_box_pane

0x0f7c,	// (0x00017ac1) wml_list_single_pane_t1

0x0f8b,	// (0x00017ad0) wml_list_single_medium_pane_t1

0x0f9a,	// (0x00017adf) wml_list_single_large_pane_t1

0x0fa9,	// (0x00017aee) input_focus_pane_cp02_ParamLimits

0x0fa9,	// (0x00017aee) input_focus_pane_cp02

0x0fbc,	// (0x00017b01) wml_selection_box_pane_g1

0x0fc5,	// (0x00017b0a) wml_selection_box_pane_t1_ParamLimits

0x0fc5,	// (0x00017b0a) wml_selection_box_pane_t1

0x08ea,	// (0x0001742f) bg_wml_button_pane_ParamLimits

0x08ea,	// (0x0001742f) bg_wml_button_pane

0x0fdd,	// (0x00017b22) wml_button_pane_g1

0x0fe5,	// (0x00017b2a) wml_button_pane_t1

0x0fdd,	// (0x00017b22) wml_button_bg_pane_g1

0x0ff5,	// (0x00017b3a) wml_button_bg_pane_g2

0x0ffd,	// (0x00017b42) wml_button_bg_pane_g3

0x1005,	// (0x00017b4a) wml_button_bg_pane_g4

0x100d,	// (0x00017b52) wml_button_bg_pane_g5

0x1015,	// (0x00017b5a) wml_button_bg_pane_g6

0x101d,	// (0x00017b62) wml_button_bg_pane_g7

0x1025,	// (0x00017b6a) wml_button_bg_pane_g8

0x102d,	// (0x00017b72) wml_button_bg_pane_g9

0x0008,

0xf29c,	// (0x00025de1) wml_button_bg_pane_g

0x9353,	// (0x0001fe98) bg_list_pane_cp02

0x1035,	// (0x00017b7a) mce_header_pane_ParamLimits

0x1035,	// (0x00017b7a) mce_header_pane

0x104b,	// (0x00017b90) mce_icon_pane

0x104b,	// (0x00017b90) mce_image_pane

0x1054,	// (0x00017b99) mce_text_pane_ParamLimits

0x1054,	// (0x00017b99) mce_text_pane

0x935d,	// (0x0001fea2) scroll_pane_cp03

0x0f4d,	// (0x00017a92) scroll_pane_cp04

0x1067,	// (0x00017bac) scroll_pane_cp05_ParamLimits

0x1067,	// (0x00017bac) scroll_pane_cp05

0x9367,	// (0x0001feac) mce_header_field_pane_ParamLimits

0x9367,	// (0x0001feac) mce_header_field_pane

0x9387,	// (0x0001fecc) mce_header_field_pane_2_ParamLimits

0x9387,	// (0x0001fecc) mce_header_field_pane_2

0x939d,	// (0x0001fee2) mce_header_field_pane_3

0x93a5,	// (0x0001feea) list_single_mce_message_pane_ParamLimits

0x93a5,	// (0x0001feea) list_single_mce_message_pane

0x93d5,	// (0x0001ff1a) list_single_mce_smart_pane_ParamLimits

0x93d5,	// (0x0001ff1a) list_single_mce_smart_pane

0x1073,	// (0x00017bb8) input_focus_pane_cp03

0x107c,	// (0x00017bc1) list_header_data_pane

0x9410,	// (0x0001ff55) mce_header_field_pane_t1

0x9420,	// (0x0001ff65) list_single_mce_header_pane_ParamLimits

0x9420,	// (0x0001ff65) list_single_mce_header_pane

0x1084,	// (0x00017bc9) list_single_mce_header_pane_t1

0x1093,	// (0x00017bd8) list_single_mce_message_pane_g1

0x109b,	// (0x00017be0) list_single_mce_message_pane_t1

0x9472,	// (0x0001ffb7) bg_cale_heading_pane_cp01_ParamLimits

0x9472,	// (0x0001ffb7) bg_cale_heading_pane_cp01

0x10a9,	// (0x00017bee) bg_cale_pane_cp02_ParamLimits

0x10a9,	// (0x00017bee) bg_cale_pane_cp02

0x94a5,	// (0x0001ffea) cale_month_corner_pane

0x94bb,	// (0x00020000) cale_month_day_heading_pane_ParamLimits

0x94bb,	// (0x00020000) cale_month_day_heading_pane

0x94fe,	// (0x00020043) cale_month_pane_g1_ParamLimits

0x94fe,	// (0x00020043) cale_month_pane_g1

0x952a,	// (0x0002006f) cale_month_pane_g2_ParamLimits

0x952a,	// (0x0002006f) cale_month_pane_g2

0x954d,	// (0x00020092) cale_month_pane_g3_ParamLimits

0x954d,	// (0x00020092) cale_month_pane_g3

0x9589,	// (0x000200ce) cale_month_pane_g4_ParamLimits

0x9589,	// (0x000200ce) cale_month_pane_g4

0x95c5,	// (0x0002010a) cale_month_pane_g5_ParamLimits

0x95c5,	// (0x0002010a) cale_month_pane_g5

0x9601,	// (0x00020146) cale_month_pane_g6_ParamLimits

0x9601,	// (0x00020146) cale_month_pane_g6

0x963d,	// (0x00020182) cale_month_pane_g7_ParamLimits

0x963d,	// (0x00020182) cale_month_pane_g7

0x9689,	// (0x000201ce) cale_month_pane_g8_ParamLimits

0x9689,	// (0x000201ce) cale_month_pane_g8

0x96d5,	// (0x0002021a) cale_month_pane_g9_ParamLimits

0x96d5,	// (0x0002021a) cale_month_pane_g9

0x971b,	// (0x00020260) cale_month_pane_g10_ParamLimits

0x971b,	// (0x00020260) cale_month_pane_g10

0x9761,	// (0x000202a6) cale_month_pane_g11_ParamLimits

0x9761,	// (0x000202a6) cale_month_pane_g11

0x979f,	// (0x000202e4) cale_month_pane_g12_ParamLimits

0x979f,	// (0x000202e4) cale_month_pane_g12

0x97dd,	// (0x00020322) cale_month_pane_g13_ParamLimits

0x97dd,	// (0x00020322) cale_month_pane_g13

0x000c,

0xf2af,	// (0x00025df4) cale_month_pane_g_ParamLimits

0xf2af,	// (0x00025df4) cale_month_pane_g

0x981b,	// (0x00020360) cale_month_week_pane

0x982e,	// (0x00020373) grid_cale_month_pane_ParamLimits

0x982e,	// (0x00020373) grid_cale_month_pane

0x986c,	// (0x000203b1) cale_month_day_heading_pane_t1

0x98ca,	// (0x0002040f) cale_month_day_heading_pane_t2

0x992f,	// (0x00020474) cale_month_day_heading_pane_t3

0x9994,	// (0x000204d9) cale_month_day_heading_pane_t4

0x99f9,	// (0x0002053e) cale_month_day_heading_pane_t5

0x9a5e,	// (0x000205a3) cale_month_day_heading_pane_t6

0x9acb,	// (0x00020610) cale_month_day_heading_pane_t7

0x0006,

0xf2ca,	// (0x00025e0f) cale_month_day_heading_pane_t

0x0c08,	// (0x0001774d) bg_cale_side_pane_cp01

0x9b40,	// (0x00020685) cale_month_week_pane_t1

0x9b57,	// (0x0002069c) cale_month_week_pane_t2

0x9b6e,	// (0x000206b3) cale_month_week_pane_t3

0x9b85,	// (0x000206ca) cale_month_week_pane_t4

0x9b9c,	// (0x000206e1) cale_month_week_pane_t5

0x9bbb,	// (0x00020700) cale_month_week_pane_t6

0x0005,

0xf2d9,	// (0x00025e1e) cale_month_week_pane_t

0x9bda,	// (0x0002071f) cell_cale_month_pane_ParamLimits

0x9bda,	// (0x0002071f) cell_cale_month_pane

0x70e2,	// (0x0001dc27) cell_cale_month_pane_g1

0x70ee,	// (0x0001dc33) cell_cale_month_pane_t1_ParamLimits

0x70ee,	// (0x0001dc33) cell_cale_month_pane_t1

0x0c16,	// (0x0001775b) grid_highlight_pane_cp08

0x0a94,	// (0x000175d9) main_smil_g1

0x9ca8,	// (0x000207ed) smil_status_pane

0x1114,	// (0x00017c59) smil_text_pane

0x2a8b,	// (0x000195d0) bg_popup_call3_rect_pane_g8

0x2a93,	// (0x000195d8) bg_popup_call3_rect_pane_g9

0x0008,

0xf592,	// (0x000260d7) bg_popup_call3_rect_pane_g

0x2d28,	// (0x0001986d) smil_status_volume_pane_g1

0x111e,	// (0x00017c63) smil_status_pane_t1

0x722c,	// (0x0001dd71) volume_smil_pane

0x1135,	// (0x00017c7a) list_smil_text_pane

0x9cbb,	// (0x00020800) scroll_pane_cp011

0x9cc6,	// (0x0002080b) smil_text_list_pane_t1_ParamLimits

0x9cc6,	// (0x0002080b) smil_text_list_pane_t1

0x710a,	// (0x0001dc4f) aid_volume_smil_ParamLimits

0x710a,	// (0x0001dc4f) aid_volume_smil

0x0a94,	// (0x000175d9) smil_volume_pane_g1

0x0a94,	// (0x000175d9) smil_volume_pane_g2

0x0001,

0xf2f9,	// (0x00025e3e) smil_volume_pane_g

0x0a1b,	// (0x00017560) listscroll_cale_day_pane

0x1161,	// (0x00017ca6) bg_cale_pane

0x1179,	// (0x00017cbe) list_cale_pane

0x118a,	// (0x00017ccf) scroll_pane_cp09

0x119b,	// (0x00017ce0) cale_bg_pane_g1

0x11a3,	// (0x00017ce8) cale_bg_pane_g2

0x11ab,	// (0x00017cf0) cale_bg_pane_g3

0x11b3,	// (0x00017cf8) cale_bg_pane_g4

0x11bb,	// (0x00017d00) cale_bg_pane_g5

0x11c3,	// (0x00017d08) cale_bg_pane_g6

0x11cb,	// (0x00017d10) cale_bg_pane_g7

0x11d3,	// (0x00017d18) cale_bg_pane_g8

0x11db,	// (0x00017d20) cale_bg_pane_g9

0x0008,

0xf2fe,	// (0x00025e43) cale_bg_pane_g

0x9d71,	// (0x000208b6) list_cale_time_pane_ParamLimits

0x9d71,	// (0x000208b6) list_cale_time_pane

0x9d92,	// (0x000208d7) list_cale_time_pane_g1_ParamLimits

0x9d92,	// (0x000208d7) list_cale_time_pane_g1

0x11e3,	// (0x00017d28) list_cale_time_pane_g2_ParamLimits

0x11e3,	// (0x00017d28) list_cale_time_pane_g2

0x9d9e,	// (0x000208e3) list_cale_time_pane_g3_ParamLimits

0x9d9e,	// (0x000208e3) list_cale_time_pane_g3

0x9dba,	// (0x000208ff) list_cale_time_pane_g4_ParamLimits

0x9dba,	// (0x000208ff) list_cale_time_pane_g4

0x9dc8,	// (0x0002090d) list_cale_time_pane_g5_ParamLimits

0x9dc8,	// (0x0002090d) list_cale_time_pane_g5

0x0005,

0xf311,	// (0x00025e56) list_cale_time_pane_g_ParamLimits

0xf311,	// (0x00025e56) list_cale_time_pane_g

0x9dd6,	// (0x0002091b) list_cale_time_pane_t1_ParamLimits

0x9dd6,	// (0x0002091b) list_cale_time_pane_t1

0x9dfe,	// (0x00020943) list_cale_time_pane_t2_ParamLimits

0x9dfe,	// (0x00020943) list_cale_time_pane_t2

0xa0e9,	// (0x00020c2e) aid_blid_cardinal_pane

0xa12b,	// (0x00020c70) compass_pane_t4

0x9e26,	// (0x0002096b) list_cale_time_pane_t4_ParamLimits

0x9e26,	// (0x0002096b) list_cale_time_pane_t4

0xa139,	// (0x00020c7e) compass_pane_t5

0xa149,	// (0x00020c8e) compass_pane_t6

0xa157,	// (0x00020c9c) compass_pane_t7

0x1701,	// (0x00018246) navi_pane_cc_t1

0x1868,	// (0x000183ad) aid_phob_thumbnail_center_pane

0xa85e,	// (0x000213a3) main_postcard_pane_g4_ParamLimits

0x0002,

0xf31e,	// (0x00025e63) list_cale_time_pane_t_ParamLimits

0xf31e,	// (0x00025e63) list_cale_time_pane_t

0x02e8,	// (0x00016e2d) bg_popup_window_pane_cp02_ParamLimits

0x02e8,	// (0x00016e2d) bg_popup_window_pane_cp02

0x11fd,	// (0x00017d42) heading_pane_cp01_ParamLimits

0x11fd,	// (0x00017d42) heading_pane_cp01

0x1209,	// (0x00017d4e) loc_req_pane_ParamLimits

0x1209,	// (0x00017d4e) loc_req_pane

0x1219,	// (0x00017d5e) loc_type_pane_ParamLimits

0x1219,	// (0x00017d5e) loc_type_pane

0x122b,	// (0x00017d70) loc_type_pane_t1_ParamLimits

0x122b,	// (0x00017d70) loc_type_pane_t1

0x123d,	// (0x00017d82) loc_type_pane_t2_ParamLimits

0x123d,	// (0x00017d82) loc_type_pane_t2

0x124f,	// (0x00017d94) loc_type_pane_t3_ParamLimits

0x124f,	// (0x00017d94) loc_type_pane_t3

0x0002,

0xf325,	// (0x00025e6a) loc_type_pane_t_ParamLimits

0xf325,	// (0x00025e6a) loc_type_pane_t

0x1261,	// (0x00017da6) list_loc_req_pane

0x126b,	// (0x00017db0) scroll_pane_cp012

0x9e4e,	// (0x00020993) list_single_loc_request_popup_menu_pane_ParamLimits

0x9e4e,	// (0x00020993) list_single_loc_request_popup_menu_pane

0x1276,	// (0x00017dbb) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x1276,	// (0x00017dbb) list_single_loc_request_popup_menu_pane_g1

0x1282,	// (0x00017dc7) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x1282,	// (0x00017dc7) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf32c,	// (0x00025e71) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf32c,	// (0x00025e71) list_single_loc_request_popup_menu_pane_g

0x128e,	// (0x00017dd3) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x128e,	// (0x00017dd3) list_single_loc_request_popup_menu_pane_t1

0x9e60,	// (0x000209a5) bg_popup_window_pane_cp03_ParamLimits

0x9e60,	// (0x000209a5) bg_popup_window_pane_cp03

0x9e6e,	// (0x000209b3) heading_loc_req_pane_ParamLimits

0x9e6e,	// (0x000209b3) heading_loc_req_pane

0x9e7a,	// (0x000209bf) popup_dyc_status_message_window_g1_ParamLimits

0x9e7a,	// (0x000209bf) popup_dyc_status_message_window_g1

0x9e86,	// (0x000209cb) popup_dyc_status_message_window_t1_ParamLimits

0x9e86,	// (0x000209cb) popup_dyc_status_message_window_t1

0x9e98,	// (0x000209dd) popup_dyc_status_message_window_t2_ParamLimits

0x9e98,	// (0x000209dd) popup_dyc_status_message_window_t2

0x9eaa,	// (0x000209ef) popup_dyc_status_message_window_t3_ParamLimits

0x9eaa,	// (0x000209ef) popup_dyc_status_message_window_t3

0x0002,

0xf331,	// (0x00025e76) popup_dyc_status_message_window_t_ParamLimits

0xf331,	// (0x00025e76) popup_dyc_status_message_window_t

0x068f,	// (0x000171d4) bg_heading_pane_cp01

0x12b0,	// (0x00017df5) heading_loc_req_pane_g1

0x12b8,	// (0x00017dfd) heading_loc_req_pane_g2

0x12c0,	// (0x00017e05) heading_loc_req_pane_g3

0x0002,

0xf338,	// (0x00025e7d) heading_loc_req_pane_g

0x12c8,	// (0x00017e0d) heading_loc_req_pane_t1

0x134c,	// (0x00017e91) bg_popup_sub_pane_cp01_ParamLimits

0x134c,	// (0x00017e91) bg_popup_sub_pane_cp01

0x135a,	// (0x00017e9f) popup_cale_events_window_g1_ParamLimits

0x135a,	// (0x00017e9f) popup_cale_events_window_g1

0x137a,	// (0x00017ebf) popup_cale_events_window_g2_ParamLimits

0x137a,	// (0x00017ebf) popup_cale_events_window_g2

0x0001,

0xf36c,	// (0x00025eb1) popup_cale_events_window_g_ParamLimits

0xf36c,	// (0x00025eb1) popup_cale_events_window_g

0x139a,	// (0x00017edf) popup_cale_events_window_t1_ParamLimits

0x139a,	// (0x00017edf) popup_cale_events_window_t1

0x13ac,	// (0x00017ef1) popup_cale_events_window_t2_ParamLimits

0x13ac,	// (0x00017ef1) popup_cale_events_window_t2

0x13ea,	// (0x00017f2f) popup_cale_events_window_t3_ParamLimits

0x13ea,	// (0x00017f2f) popup_cale_events_window_t3

0x1424,	// (0x00017f69) popup_cale_events_window_t4_ParamLimits

0x1424,	// (0x00017f69) popup_cale_events_window_t4

0x0003,

0xf371,	// (0x00025eb6) popup_cale_events_window_t_ParamLimits

0xf371,	// (0x00025eb6) popup_cale_events_window_t

0x9f2e,	// (0x00020a73) call_type_pane

0x1880,	// (0x000183c5) popup_call_status_window_g1

0x9f3a,	// (0x00020a7f) popup_call_status_window_g2

0x9f46,	// (0x00020a8b) popup_call_status_window_g3

0x0002,

0xf37a,	// (0x00025ebf) popup_call_status_window_g

0x145a,	// (0x00017f9f) call_type_pane_g1

0x1463,	// (0x00017fa8) call_type_pane_g2

0x0001,

0xf381,	// (0x00025ec6) call_type_pane_g

0x068f,	// (0x000171d4) bg_popup_sub_pane_cp02

0x146c,	// (0x00017fb1) listscroll_popup_wml_pane

0x1474,	// (0x00017fb9) list_wml_pane

0x147e,	// (0x00017fc3) scroll_pane_cp013

0x1489,	// (0x00017fce) list_single_graphic_popup_wml_pane_ParamLimits

0x1489,	// (0x00017fce) list_single_graphic_popup_wml_pane

0x0a94,	// (0x000175d9) list_single_graphic_popup_wml_pane_g1

0x149d,	// (0x00017fe2) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf386,	// (0x00025ecb) list_single_graphic_popup_wml_pane_g

0x14a5,	// (0x00017fea) list_single_graphic_popup_wml_pane_t1

0x14b3,	// (0x00017ff8) aid_call_pane

0x08e2,	// (0x00017427) popup_clock_analogue_window_g1

0x08e2,	// (0x00017427) popup_clock_analogue_window_g2

0x712c,	// (0x0001dc71) popup_clock_analogue_window_g3

0x712c,	// (0x0001dc71) popup_clock_analogue_window_g4

0x0a94,	// (0x000175d9) popup_clock_analogue_window_g5

0x0004,

0xf38b,	// (0x00025ed0) popup_clock_analogue_window_g

0x7134,	// (0x0001dc79) popup_clock_analogue_window_t1

0x7142,	// (0x0001dc87) clock_digital_number_pane_ParamLimits

0x7142,	// (0x0001dc87) clock_digital_number_pane

0x714e,	// (0x0001dc93) clock_digital_number_pane_cp02_ParamLimits

0x714e,	// (0x0001dc93) clock_digital_number_pane_cp02

0x715a,	// (0x0001dc9f) clock_digital_number_pane_cp03_ParamLimits

0x715a,	// (0x0001dc9f) clock_digital_number_pane_cp03

0x7166,	// (0x0001dcab) clock_digital_number_pane_cp04_ParamLimits

0x7166,	// (0x0001dcab) clock_digital_number_pane_cp04

0x7172,	// (0x0001dcb7) clock_digital_separator_pane_ParamLimits

0x7172,	// (0x0001dcb7) clock_digital_separator_pane

0x717e,	// (0x0001dcc3) popup_clock_digital_window_t1

0x0a94,	// (0x000175d9) clock_digital_number_pane_g1

0x0a94,	// (0x000175d9) clock_digital_number_pane_g2

0x0001,

0xf2f9,	// (0x00025e3e) clock_digital_number_pane_g

0x0a94,	// (0x000175d9) clock_digital_separator_pane_g1

0x0a94,	// (0x000175d9) clock_digital_separator_pane_g2

0x0001,

0xf2f9,	// (0x00025e3e) clock_digital_separator_pane_g

0x068f,	// (0x000171d4) bg_popup_window_pane_cp04

0x1532,	// (0x00018077) heading_pane_cp03

0x153a,	// (0x0001807f) listscroll_popup_gms_pane

0x1542,	// (0x00018087) grid_large_graphic_popup_pane

0x154c,	// (0x00018091) listscroll_popup_gms_pane_g1

0x1554,	// (0x00018099) listscroll_popup_gms_pane_g2

0x0001,

0xf396,	// (0x00025edb) listscroll_popup_gms_pane_g

0x0f4d,	// (0x00017a92) scroll_pane_cp014

0x155c,	// (0x000180a1) cell_large_graphic_popup_pane_ParamLimits

0x155c,	// (0x000180a1) cell_large_graphic_popup_pane

0x1574,	// (0x000180b9) cell_large_graphic_popup_pane_g1_ParamLimits

0x1574,	// (0x000180b9) cell_large_graphic_popup_pane_g1

0x1580,	// (0x000180c5) cell_large_graphic_popup_pane_g2_ParamLimits

0x1580,	// (0x000180c5) cell_large_graphic_popup_pane_g2

0x158c,	// (0x000180d1) cell_large_graphic_popup_pane_g3_ParamLimits

0x158c,	// (0x000180d1) cell_large_graphic_popup_pane_g3

0x1599,	// (0x000180de) cell_large_graphic_popup_pane_g4_ParamLimits

0x1599,	// (0x000180de) cell_large_graphic_popup_pane_g4

0x0003,

0xf39b,	// (0x00025ee0) cell_large_graphic_popup_pane_g_ParamLimits

0xf39b,	// (0x00025ee0) cell_large_graphic_popup_pane_g

0x15a9,	// (0x000180ee) grid_highlight_pane_cp010

0x0a94,	// (0x000175d9) bg_popup_call_pane_g1

0x15b3,	// (0x000180f8) list_single_graphic_popup_conf_pane_ParamLimits

0x15b3,	// (0x000180f8) list_single_graphic_popup_conf_pane

0x15c5,	// (0x0001810a) list_highlight_pane_cp01

0x15ce,	// (0x00018113) list_single_graphic_popup_conf_pane_g1

0x15d6,	// (0x0001811b) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf3a4,	// (0x00025ee9) list_single_graphic_popup_conf_pane_g

0x15de,	// (0x00018123) list_single_graphic_popup_conf_pane_t1

0x15ec,	// (0x00018131) linegrid_cams_pane_g1

0x9f52,	// (0x00020a97) linegrid_cams_pane_g2

0x0bb5,	// (0x000176fa) linegrid_cams_pane_g3

0x15f5,	// (0x0001813a) linegrid_cams_pane_g4

0x9f5b,	// (0x00020aa0) linegrid_cams_pane_g5

0x9f64,	// (0x00020aa9) linegrid_cams_pane_g6

0x0c49,	// (0x0001778e) linegrid_cams_pane_g7

0x0006,

0xf3a9,	// (0x00025eee) linegrid_cams_pane_g

0x15fe,	// (0x00018143) popup_clock_analogue_window

0x15fe,	// (0x00018143) popup_clock_digital_window

0x068f,	// (0x000171d4) popup_phob_thumbnail_window

0x0a94,	// (0x000175d9) call_video_uplink_pane_g1

0x1607,	// (0x0001814c) call_video_uplink_pane_g2

0x0001,

0xf3b8,	// (0x00025efd) call_video_uplink_pane_g

0x0c16,	// (0x0001775b) video_uplink_pane

0x160f,	// (0x00018154) mce_image_pane_g1

0x9f6d,	// (0x00020ab2) mce_image_pane_g2

0x9f75,	// (0x00020aba) mce_image_pane_g3

0x9f7d,	// (0x00020ac2) mce_image_pane_g4

0x9f85,	// (0x00020aca) mce_image_pane_g5

0x0004,

0xf3bd,	// (0x00025f02) mce_image_pane_g

0x1619,	// (0x0001815e) control_top_pane_stacon_cp01_ParamLimits

0x1619,	// (0x0001815e) control_top_pane_stacon_cp01

0x162d,	// (0x00018172) uni_indicator_pane_stacon_cp01_ParamLimits

0x162d,	// (0x00018172) uni_indicator_pane_stacon_cp01

0x163e,	// (0x00018183) bg_popup_sub_pane_cp03

0x9f8d,	// (0x00020ad2) chi_dic_find_pane

0x9f95,	// (0x00020ada) listscroll_chi_dic_pane

0x9f9e,	// (0x00020ae3) main_pane_chidic_g1

0x9fb1,	// (0x00020af6) chi_dic_find_pane_t1

0x1648,	// (0x0001818d) find_chidic_pane

0x1651,	// (0x00018196) chi_dic_list_pane_ParamLimits

0x1651,	// (0x00018196) chi_dic_list_pane

0x1662,	// (0x000181a7) scroll_pane_cp020

0x9fbf,	// (0x00020b04) find_chidic_pane_t1

0x068f,	// (0x000171d4) input_focus_pane_cp06

0x9fce,	// (0x00020b13) list_chi_dic_pane_ParamLimits

0x9fce,	// (0x00020b13) list_chi_dic_pane

0x166a,	// (0x000181af) list_chi_dic_pane_t1_ParamLimits

0x166a,	// (0x000181af) list_chi_dic_pane_t1

0x068f,	// (0x000171d4) list_highlight_pane_cp020

0x167d,	// (0x000181c2) bg_cale_heading_pane_g1

0x9fef,	// (0x00020b34) bg_cale_heading_pane_g2

0x9ff7,	// (0x00020b3c) bg_cale_heading_pane_g3

0x9fff,	// (0x00020b44) bg_cale_heading_pane_g4

0xa009,	// (0x00020b4e) bg_cale_heading_pane_g5

0xa013,	// (0x00020b58) bg_cale_heading_pane_g6

0xa01b,	// (0x00020b60) bg_cale_heading_pane_g7

0xa023,	// (0x00020b68) bg_cale_heading_pane_g8

0xa02d,	// (0x00020b72) bg_cale_heading_pane_g9

0x0008,

0xf3c8,	// (0x00025f0d) bg_cale_heading_pane_g

0x167d,	// (0x000181c2) bg_cale_side_pane_g1

0xa037,	// (0x00020b7c) bg_cale_side_pane_g2

0xa041,	// (0x00020b86) bg_cale_side_pane_g3

0xa04b,	// (0x00020b90) bg_cale_side_pane_g4

0xa055,	// (0x00020b9a) bg_cale_side_pane_g5

0xa05f,	// (0x00020ba4) bg_cale_side_pane_g6

0xa069,	// (0x00020bae) bg_cale_side_pane_g7

0xa073,	// (0x00020bb8) bg_cale_side_pane_g8

0xa07b,	// (0x00020bc0) bg_cale_side_pane_g9

0x0008,

0xf3db,	// (0x00025f20) bg_cale_side_pane_g

0xa083,	// (0x00020bc8) popup_call_status_window_ParamLimits

0xa083,	// (0x00020bc8) popup_call_status_window

0x1685,	// (0x000181ca) stacon_top_pane

0x168d,	// (0x000181d2) status_pane_ParamLimits

0x168d,	// (0x000181d2) status_pane

0x16a2,	// (0x000181e7) status_small_pane

0x16aa,	// (0x000181ef) control_pane

0x068f,	// (0x000171d4) stacon_bottom_pane

0x16b2,	// (0x000181f7) list_single_mce_smart_pane_t1_ParamLimits

0x16b2,	// (0x000181f7) list_single_mce_smart_pane_t1

0x16c5,	// (0x0001820a) list_single_mce_smart_pane_t2_ParamLimits

0x16c5,	// (0x0001820a) list_single_mce_smart_pane_t2

0x0001,

0xf3ee,	// (0x00025f33) list_single_mce_smart_pane_t_ParamLimits

0xf3ee,	// (0x00025f33) list_single_mce_smart_pane_t

0xa08f,	// (0x00020bd4) compass_pane

0xa09b,	// (0x00020be0) main_location2_pane_t1

0xa0af,	// (0x00020bf4) main_location2_pane_t2

0xa0c3,	// (0x00020c08) main_location2_pane_t3

0x0003,

0xf3f3,	// (0x00025f38) main_location2_pane_t

0x16e4,	// (0x00018229) compass_pane_g1_ParamLimits

0x16e4,	// (0x00018229) compass_pane_g1

0xa10d,	// (0x00020c52) compass_pane_t1

0xa11c,	// (0x00020c61) compass_pane_t2

0x0005,

0xf3fc,	// (0x00025f41) compass_pane_t

0xa167,	// (0x00020cac) text_secondary_cp61

0x16f8,	// (0x0001823d) navi_pane_cams_g5

0x171b,	// (0x00018260) navi_pane_im_t1

0x1729,	// (0x0001826e) navi_pane_mp_g1_ParamLimits

0x1729,	// (0x0001826e) navi_pane_mp_g1

0x173d,	// (0x00018282) navi_pane_mp_g2_ParamLimits

0x173d,	// (0x00018282) navi_pane_mp_g2

0x1749,	// (0x0001828e) navi_pane_mp_g3_ParamLimits

0x1749,	// (0x0001828e) navi_pane_mp_g3

0x0002,

0xf410,	// (0x00025f55) navi_pane_mp_g_ParamLimits

0xf410,	// (0x00025f55) navi_pane_mp_g

0x1755,	// (0x0001829a) navi_pane_mp_t1

0x1763,	// (0x000182a8) navi_pane_mp_t2

0x0002,

0xf417,	// (0x00025f5c) navi_pane_mp_t

0x179f,	// (0x000182e4) navi_pane_vt_g1

0x1755,	// (0x0001829a) navi_pane_vt_t1

0x17a7,	// (0x000182ec) navi_slider_pane

0x17af,	// (0x000182f4) zooming_pane

0x17b7,	// (0x000182fc) navi_slider_pane_g1

0x719b,	// (0x0001dce0) navi_slider_pane_g2

0x0006,

0xf41e,	// (0x00025f63) navi_slider_pane_g

0x17ed,	// (0x00018332) aid_levels_zoom

0x17f5,	// (0x0001833a) zooming_pane_g1

0x17fd,	// (0x00018342) zooming_pane_g2

0x17fd,	// (0x00018342) zooming_pane_g3

0x0002,

0xf42d,	// (0x00025f72) zooming_pane_g

0x1805,	// (0x0001834a) level_10_zoom

0x180e,	// (0x00018353) level_11_zoom

0x1817,	// (0x0001835c) level_1_zoom

0x1820,	// (0x00018365) level_2_zoom

0x1829,	// (0x0001836e) level_3_zoom

0x1832,	// (0x00018377) level_4_zoom

0x183b,	// (0x00018380) level_5_zoom

0x1844,	// (0x00018389) level_6_zoom

0x184d,	// (0x00018392) level_7_zoom

0x1856,	// (0x0001839b) level_8_zoom

0x185f,	// (0x000183a4) level_9_zoom

0x1870,	// (0x000183b5) popup_phob_thumbnail_window_g1

0x1878,	// (0x000183bd) popup_phob_thumbnail_window_g2

0x0001,

0xf434,	// (0x00025f79) popup_phob_thumbnail_window_g

0x2bf5,	// (0x0001973a) level_1_location

0x2bfd,	// (0x00019742) level_2_location

0x2c05,	// (0x0001974a) level_3_location

0x2c0d,	// (0x00019752) level_4_location

0x17af,	// (0x000182f4) level_5_location

0xa27e,	// (0x00020dc3) mce_icon_pane_g1

0xa286,	// (0x00020dcb) mce_icon_pane_g2

0x0001,

0xf439,	// (0x00025f7e) mce_icon_pane_g

0xa28e,	// (0x00020dd3) main_mup_pane_g1_ParamLimits

0xa28e,	// (0x00020dd3) main_mup_pane_g1

0xa2a6,	// (0x00020deb) main_mup_pane_g2_ParamLimits

0xa2a6,	// (0x00020deb) main_mup_pane_g2

0xa2c2,	// (0x00020e07) main_mup_pane_g3_ParamLimits

0xa2c2,	// (0x00020e07) main_mup_pane_g3

0xa2de,	// (0x00020e23) main_mup_pane_g4_ParamLimits

0xa2de,	// (0x00020e23) main_mup_pane_g4

0xa2fa,	// (0x00020e3f) main_mup_pane_g5_ParamLimits

0xa2fa,	// (0x00020e3f) main_mup_pane_g5

0xa31b,	// (0x00020e60) main_mup_pane_g6_ParamLimits

0xa31b,	// (0x00020e60) main_mup_pane_g6

0xa337,	// (0x00020e7c) main_mup_pane_g7_ParamLimits

0xa337,	// (0x00020e7c) main_mup_pane_g7

0xa353,	// (0x00020e98) main_mup_pane_g8_ParamLimits

0xa353,	// (0x00020e98) main_mup_pane_g8

0xa36f,	// (0x00020eb4) main_mup_pane_g9_ParamLimits

0xa36f,	// (0x00020eb4) main_mup_pane_g9

0xa38e,	// (0x00020ed3) main_mup_pane_g10_ParamLimits

0xa38e,	// (0x00020ed3) main_mup_pane_g10

0xa3ad,	// (0x00020ef2) main_mup_pane_g11_ParamLimits

0xa3ad,	// (0x00020ef2) main_mup_pane_g11

0xa3c5,	// (0x00020f0a) main_mup_pane_g12_ParamLimits

0xa3c5,	// (0x00020f0a) main_mup_pane_g12

0xa3d3,	// (0x00020f18) main_mup_pane_g13_ParamLimits

0xa3d3,	// (0x00020f18) main_mup_pane_g13

0x000c,

0xf43e,	// (0x00025f83) main_mup_pane_g_ParamLimits

0xf43e,	// (0x00025f83) main_mup_pane_g

0xa3e9,	// (0x00020f2e) main_mup_pane_t1_ParamLimits

0xa3e9,	// (0x00020f2e) main_mup_pane_t1

0xa406,	// (0x00020f4b) main_mup_pane_t2_ParamLimits

0xa406,	// (0x00020f4b) main_mup_pane_t2

0xa420,	// (0x00020f65) main_mup_pane_t3_ParamLimits

0xa420,	// (0x00020f65) main_mup_pane_t3

0xa43a,	// (0x00020f7f) main_mup_pane_t4_ParamLimits

0xa43a,	// (0x00020f7f) main_mup_pane_t4

0xa44c,	// (0x00020f91) main_mup_pane_t5_ParamLimits

0xa44c,	// (0x00020f91) main_mup_pane_t5

0xa45e,	// (0x00020fa3) main_mup_pane_t6_ParamLimits

0xa45e,	// (0x00020fa3) main_mup_pane_t6

0x0005,

0xf459,	// (0x00025f9e) main_mup_pane_t_ParamLimits

0xf459,	// (0x00025f9e) main_mup_pane_t

0xa474,	// (0x00020fb9) mup_progress_pane_ParamLimits

0xa474,	// (0x00020fb9) mup_progress_pane

0xa480,	// (0x00020fc5) mup_visualizer_pane_ParamLimits

0xa480,	// (0x00020fc5) mup_visualizer_pane

0xa4be,	// (0x00021003) mup_volume_pane_ParamLimits

0xa4be,	// (0x00021003) mup_volume_pane

0x1880,	// (0x000183c5) mup_visualizer_pane_g1_ParamLimits

0x1880,	// (0x000183c5) mup_visualizer_pane_g1

0x1880,	// (0x000183c5) mup_visualizer_pane_g2_ParamLimits

0x1880,	// (0x000183c5) mup_visualizer_pane_g2

0x16e4,	// (0x00018229) mup_visualizer_pane_g3_ParamLimits

0x16e4,	// (0x00018229) mup_visualizer_pane_g3

0x0002,

0xf466,	// (0x00025fab) mup_visualizer_pane_g_ParamLimits

0xf466,	// (0x00025fab) mup_visualizer_pane_g

0x0a94,	// (0x000175d9) mup_volume_pane_g1

0x1896,	// (0x000183db) mup_volume_pane_g2

0x0001,

0xf46d,	// (0x00025fb2) mup_volume_pane_g

0x0a94,	// (0x000175d9) mup_progress_pane_g1

0x189f,	// (0x000183e4) mup_progress_pane_g2

0x18a8,	// (0x000183ed) mup_progress_pane_g3

0x0002,

0xf472,	// (0x00025fb7) mup_progress_pane_g

0x068f,	// (0x000171d4) bg_popup_window_pane_cp05

0x18b1,	// (0x000183f6) heading_pane_cp02_ParamLimits

0x18b1,	// (0x000183f6) heading_pane_cp02

0x18cb,	// (0x00018410) list_popup_blid_pane

0x18d3,	// (0x00018418) list_blid_sat_info_pane_ParamLimits

0x18d3,	// (0x00018418) list_blid_sat_info_pane

0x18e6,	// (0x0001842b) list_blid_sat_info_pane_g1

0x18ee,	// (0x00018433) list_blid_sat_info_pane_t1

0xa5c9,	// (0x0002110e) mup_equalizer_pane_ParamLimits

0xa5c9,	// (0x0002110e) mup_equalizer_pane

0xa5ea,	// (0x0002112f) mup_equalizer_pane_cp1_ParamLimits

0xa5ea,	// (0x0002112f) mup_equalizer_pane_cp1

0xa60b,	// (0x00021150) mup_equalizer_pane_cp2_ParamLimits

0xa60b,	// (0x00021150) mup_equalizer_pane_cp2

0xa62c,	// (0x00021171) mup_equalizer_pane_cp3_ParamLimits

0xa62c,	// (0x00021171) mup_equalizer_pane_cp3

0xa64d,	// (0x00021192) mup_equalizer_pane_cp4_ParamLimits

0xa64d,	// (0x00021192) mup_equalizer_pane_cp4

0xa66e,	// (0x000211b3) mup_equalizer_pane_cp5

0xa684,	// (0x000211c9) mup_equalizer_pane_cp6

0xa69c,	// (0x000211e1) mup_equalizer_pane_cp7

0x2b13,	// (0x00019658) bg_popup_call_poc_act_pane_g9

0x2b1b,	// (0x00019660) bg_popup_call_poc_act_pane_g10

0x2b23,	// (0x00019668) bg_popup_call_poc_act_pane_g11

0x000a,

0x08ea,	// (0x0001742f) mup_scale_pane

0x0a94,	// (0x000175d9) mup_scale_pane_g1

0x18fc,	// (0x00018441) mup_scale_pane_g2

0x0006,

0xf48e,	// (0x00025fd3) mup_scale_pane_g

0x1920,	// (0x00018465) msg_data_pane

0x1928,	// (0x0001846d) scroll_pane_cp017

0xa6c6,	// (0x0002120b) bg_list_pane_cp04_ParamLimits

0xa6c6,	// (0x0002120b) bg_list_pane_cp04

0x1930,	// (0x00018475) msg_data_pane_g1

0xa6e6,	// (0x0002122b) msg_data_pane_g2

0x9f75,	// (0x00020aba) msg_data_pane_g3

0xa6ee,	// (0x00021233) msg_data_pane_g4

0xa6f6,	// (0x0002123b) msg_data_pane_g5

0xa6fe,	// (0x00021243) msg_data_pane_g6

0xa706,	// (0x0002124b) msg_data_pane_g7

0x0006,

0xf49d,	// (0x00025fe2) msg_data_pane_g

0xa70e,	// (0x00021253) msg_text_pane_ParamLimits

0xa70e,	// (0x00021253) msg_text_pane

0xa75f,	// (0x000212a4) qrid_highlight_pane_cp011_ParamLimits

0xa75f,	// (0x000212a4) qrid_highlight_pane_cp011

0x068f,	// (0x000171d4) msg_body_pane

0x068f,	// (0x000171d4) msg_header_pane

0x1941,	// (0x00018486) input_focus_pane_cp07

0xa789,	// (0x000212ce) msg_header_pane_t1_ParamLimits

0xa789,	// (0x000212ce) msg_header_pane_t1

0x1956,	// (0x0001849b) msg_header_pane_t2_ParamLimits

0x1956,	// (0x0001849b) msg_header_pane_t2

0x0001,

0xf4b1,	// (0x00025ff6) msg_header_pane_t_ParamLimits

0xf4b1,	// (0x00025ff6) msg_header_pane_t

0x1968,	// (0x000184ad) msg_body_pane_g1

0xa79d,	// (0x000212e2) msg_body_pane_t1_ParamLimits

0xa79d,	// (0x000212e2) msg_body_pane_t1

0x1970,	// (0x000184b5) msg_body_pane_t2_ParamLimits

0x1970,	// (0x000184b5) msg_body_pane_t2

0x1982,	// (0x000184c7) msg_body_pane_t3_ParamLimits

0x1982,	// (0x000184c7) msg_body_pane_t3

0x0002,

0xf4b6,	// (0x00025ffb) msg_body_pane_t_ParamLimits

0xf4b6,	// (0x00025ffb) msg_body_pane_t

0x71dd,	// (0x0001dd22) main_viewer_pane_g1_ParamLimits

0x71dd,	// (0x0001dd22) main_viewer_pane_g1

0x71e9,	// (0x0001dd2e) main_viewer_pane_g2_ParamLimits

0x71e9,	// (0x0001dd2e) main_viewer_pane_g2

0xa7f0,	// (0x00021335) main_viewer_pane_g3_ParamLimits

0xa7f0,	// (0x00021335) main_viewer_pane_g3

0xa801,	// (0x00021346) main_viewer_pane_g4_ParamLimits

0xa801,	// (0x00021346) main_viewer_pane_g4

0x71f5,	// (0x0001dd3a) main_viewer_pane_g5_ParamLimits

0x71f5,	// (0x0001dd3a) main_viewer_pane_g5

0x71f5,	// (0x0001dd3a) main_viewer_pane_g7_ParamLimits

0x71f5,	// (0x0001dd3a) main_viewer_pane_g7

0x7207,	// (0x0001dd4c) main_viewer_pane_g8_ParamLimits

0x7207,	// (0x0001dd4c) main_viewer_pane_g8

0x0007,

0xf4c6,	// (0x0002600b) main_viewer_pane_g_ParamLimits

0xf4c6,	// (0x0002600b) main_viewer_pane_g

0x19d6,	// (0x0001851b) viewer_content_pane_ParamLimits

0x19d6,	// (0x0001851b) viewer_content_pane

0xa832,	// (0x00021377) main_postcard_pane_g1_ParamLimits

0xa832,	// (0x00021377) main_postcard_pane_g1

0xa840,	// (0x00021385) main_postcard_pane_g2_ParamLimits

0xa840,	// (0x00021385) main_postcard_pane_g2

0xa84e,	// (0x00021393) main_postcard_pane_g3_ParamLimits

0xa84e,	// (0x00021393) main_postcard_pane_g3

0x0005,

0xf4d7,	// (0x0002601c) main_postcard_pane_g_ParamLimits

0xf4d7,	// (0x0002601c) main_postcard_pane_g

0xa85e,	// (0x000213a3) main_postcard_pane_g4

0x2d15,	// (0x0001985a) smil_status_volume_pane_g2

0xa88a,	// (0x000213cf) postcard_pane_ParamLimits

0xa88a,	// (0x000213cf) postcard_pane

0x1880,	// (0x000183c5) postcard_pane_g1_ParamLimits

0x1880,	// (0x000183c5) postcard_pane_g1

0xa8bc,	// (0x00021401) postcard_pane_g2_ParamLimits

0xa8bc,	// (0x00021401) postcard_pane_g2

0xa8c8,	// (0x0002140d) postcard_pane_g3_ParamLimits

0xa8c8,	// (0x0002140d) postcard_pane_g3

0x19f2,	// (0x00018537) postcard_pane_g4_ParamLimits

0x19f2,	// (0x00018537) postcard_pane_g4

0xa8d4,	// (0x00021419) postcard_pane_g5_ParamLimits

0xa8d4,	// (0x00021419) postcard_pane_g5

0xa8e0,	// (0x00021425) postcard_pane_g6_ParamLimits

0xa8e0,	// (0x00021425) postcard_pane_g6

0x19e4,	// (0x00018529) postcard_pane_g7_ParamLimits

0x19e4,	// (0x00018529) postcard_pane_g7

0x0006,

0xf4e4,	// (0x00026029) postcard_pane_g_ParamLimits

0xf4e4,	// (0x00026029) postcard_pane_g

0xa8ec,	// (0x00021431) main_mp2_pane_g1_ParamLimits

0xa8ec,	// (0x00021431) main_mp2_pane_g1

0xa8f8,	// (0x0002143d) main_mp2_pane_g2_ParamLimits

0xa8f8,	// (0x0002143d) main_mp2_pane_g2

0xa904,	// (0x00021449) main_mp2_pane_g3_ParamLimits

0xa904,	// (0x00021449) main_mp2_pane_g3

0x0002,

0xf4f3,	// (0x00026038) main_mp2_pane_g_ParamLimits

0xf4f3,	// (0x00026038) main_mp2_pane_g

0xa910,	// (0x00021455) main_mp2_pane_t1_ParamLimits

0xa910,	// (0x00021455) main_mp2_pane_t1

0xa927,	// (0x0002146c) main_mp2_pane_t2_ParamLimits

0xa927,	// (0x0002146c) main_mp2_pane_t2

0xa939,	// (0x0002147e) main_mp2_pane_t3_ParamLimits

0xa939,	// (0x0002147e) main_mp2_pane_t3

0x0002,

0xf4fa,	// (0x0002603f) main_mp2_pane_t_ParamLimits

0xf4fa,	// (0x0002603f) main_mp2_pane_t

0x1a00,	// (0x00018545) pec_content_pane_ParamLimits

0x1a00,	// (0x00018545) pec_content_pane

0x0f4d,	// (0x00017a92) scroll_pane_cp015

0x1a12,	// (0x00018557) pec_attribute_pane_ParamLimits

0x1a12,	// (0x00018557) pec_attribute_pane

0xa94b,	// (0x00021490) pec_content_pane_g1_ParamLimits

0xa94b,	// (0x00021490) pec_content_pane_g1

0x1a22,	// (0x00018567) pec_content_pane_t1_ParamLimits

0x1a22,	// (0x00018567) pec_content_pane_t1

0x1a34,	// (0x00018579) pec_content_pane_t2_ParamLimits

0x1a34,	// (0x00018579) pec_content_pane_t2

0x0001,

0xf501,	// (0x00026046) pec_content_pane_t_ParamLimits

0xf501,	// (0x00026046) pec_content_pane_t

0xa957,	// (0x0002149c) list_single_graphic_pane_cp01_ParamLimits

0xa957,	// (0x0002149c) list_single_graphic_pane_cp01

0x08ea,	// (0x0001742f) bg_popup_sub_pane_cp04

0x1a46,	// (0x0001858b) popup_mup_playback_window_g1

0x1a52,	// (0x00018597) popup_mup_playback_window_t1

0x1a67,	// (0x000185ac) popup_mup_playback_window_t2

0x0001,

0xf506,	// (0x0002604b) popup_mup_playback_window_t

0x1a9e,	// (0x000185e3) main_image_pane_g1_ParamLimits

0x1a9e,	// (0x000185e3) main_image_pane_g1

0x1ae1,	// (0x00018626) scroll_pane_cp018_ParamLimits

0x1ae1,	// (0x00018626) scroll_pane_cp018

0x1af9,	// (0x0001863e) scroll_pane_cp016_ParamLimits

0x1af9,	// (0x0001863e) scroll_pane_cp016

0xa9fb,	// (0x00021540) smil2_image_pane_ParamLimits

0xa9fb,	// (0x00021540) smil2_image_pane

0xaa2f,	// (0x00021574) smil2_root_pane_ParamLimits

0xaa2f,	// (0x00021574) smil2_root_pane

0xaa5b,	// (0x000215a0) smil2_text_pane_ParamLimits

0xaa5b,	// (0x000215a0) smil2_text_pane

0x068f,	// (0x000171d4) bg_list_pane_cp06

0x1b35,	// (0x0001867a) grid_radio_pane

0x068f,	// (0x000171d4) bg_popup_window_pane_cp06

0x1b3d,	// (0x00018682) main_fmradio_pane_t1

0x1532,	// (0x00018077) heading_pane_cp04

0x1b4b,	// (0x00018690) main_fmradio_pane_t2

0x2b2b,	// (0x00019670) popup_cale_lunar_info_window_g1

0x1b59,	// (0x0001869e) main_fmradio_pane_t3

0x2b33,	// (0x00019678) popup_cale_lunar_info_window_g2

0x1b67,	// (0x000186ac) main_fmradio_pane_t4

0x0001,

0x1b75,	// (0x000186ba) main_fmradio_pane_t5

0x0004,

0xf5e1,	// (0x00026126) popup_cale_lunar_info_window_g

0xf51b,	// (0x00026060) main_fmradio_pane_t

0x1b83,	// (0x000186c8) wait_bar_pane_cp03

0x1b8b,	// (0x000186d0) cell_fmradio_pane_ParamLimits

0x1b8b,	// (0x000186d0) cell_fmradio_pane

0x19e4,	// (0x00018529) cell_fmradio_pane_g1_ParamLimits

0x19e4,	// (0x00018529) cell_fmradio_pane_g1

0x068f,	// (0x000171d4) grid_highlight_pane_cp011

0x1b9e,	// (0x000186e3) poc_content_pane_ParamLimits

0x1b9e,	// (0x000186e3) poc_content_pane

0x1bb0,	// (0x000186f5) scroll_pane_cp019

0xaa9b,	// (0x000215e0) popup_call_poc_act_window_ParamLimits

0xaa9b,	// (0x000215e0) popup_call_poc_act_window

0xaaa8,	// (0x000215ed) popup_call_poc_inact_window_ParamLimits

0xaaa8,	// (0x000215ed) popup_call_poc_inact_window

0xf5b8,	// (0x000260fd) bg_popup_call_poc_act_pane_g

0x2a9b,	// (0x000195e0) bg_popup_call_poc_inact_pane_g1

0x2aa3,	// (0x000195e8) bg_popup_call_poc_inact_pane_g2

0x1bb8,	// (0x000186fd) popup_call_poc_act_window_g2

0x2aab,	// (0x000195f0) bg_popup_call_poc_inact_pane_g3

0x2ab3,	// (0x000195f8) bg_popup_call_poc_inact_pane_g4

0x2abb,	// (0x00019600) bg_popup_call_poc_inact_pane_g5

0x1bc0,	// (0x00018705) popup_call_poc_act_window_t1_ParamLimits

0x1bc0,	// (0x00018705) popup_call_poc_act_window_t1

0x1be8,	// (0x0001872d) popup_call_poc_act_window_t2_ParamLimits

0x1be8,	// (0x0001872d) popup_call_poc_act_window_t2

0x1c10,	// (0x00018755) popup_call_poc_act_window_t3_ParamLimits

0x1c10,	// (0x00018755) popup_call_poc_act_window_t3

0x1c38,	// (0x0001877d) popup_call_poc_act_window_t4_ParamLimits

0x1c38,	// (0x0001877d) popup_call_poc_act_window_t4

0x0003,

0xf526,	// (0x0002606b) popup_call_poc_act_window_t_ParamLimits

0xf526,	// (0x0002606b) popup_call_poc_act_window_t

0x2ac3,	// (0x00019608) bg_popup_call_poc_inact_pane_g6

0x2acb,	// (0x00019610) bg_popup_call_poc_inact_pane_g7

0x2ad3,	// (0x00019618) bg_popup_call_poc_inact_pane_g8

0x1c4a,	// (0x0001878f) popup_call_poc_inact_window_g2

0x2adb,	// (0x00019620) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5a5,	// (0x000260ea) bg_popup_call_poc_inact_pane_g

0x1c52,	// (0x00018797) popup_call_poc_inact_window_t1_ParamLimits

0x1c52,	// (0x00018797) popup_call_poc_inact_window_t1

0x1c67,	// (0x000187ac) popup_call_poc_inact_window_t2_ParamLimits

0x1c67,	// (0x000187ac) popup_call_poc_inact_window_t2

0x1c7c,	// (0x000187c1) popup_call_poc_inact_window_t3_ParamLimits

0x1c7c,	// (0x000187c1) popup_call_poc_inact_window_t3

0x0002,

0xf52f,	// (0x00026074) popup_call_poc_inact_window_t_ParamLimits

0xf52f,	// (0x00026074) popup_call_poc_inact_window_t

0x2c9b,	// (0x000197e0) context_pane_ParamLimits

0xb08f,	// (0x00021bd4) signal_pane_ParamLimits

0x17af,	// (0x000182f4) main_call2_pane

0x2c89,	// (0x000197ce) popup_phob_thumbnail2_window_ParamLimits

0x2c89,	// (0x000197ce) popup_phob_thumbnail2_window

0x71ad,	// (0x0001dcf2) aid_hotspot_pointer_arrow_pane

0x71b5,	// (0x0001dcfa) aid_hotspot_pointer_hand_pane

0xadcd,	// (0x00021912) phob_pre_status_pane_g5

0x8b72,	// (0x0001f6b7) cams_zoom_pane_ParamLimits

0x8b7e,	// (0x0001f6c3) image_vga_pane_ParamLimits

0x8b8d,	// (0x0001f6d2) main_camera_pane_g1_ParamLimits

0x8b9b,	// (0x0001f6e0) main_camera_pane_g2_ParamLimits

0x8ba9,	// (0x0001f6ee) main_camera_pane_g3_ParamLimits

0x8bb5,	// (0x0001f6fa) main_camera_pane_g4_ParamLimits

0x8bc1,	// (0x0001f706) main_camera_pane_g5_ParamLimits

0x8bcd,	// (0x0001f712) main_camera_pane_g6_ParamLimits

0x8bd9,	// (0x0001f71e) main_camera_pane_g7_ParamLimits

0xf22e,	// (0x00025d73) main_camera_pane_g_ParamLimits

0x8be5,	// (0x0001f72a) main_camera_pane_t1_ParamLimits

0x8bf7,	// (0x0001f73c) main_camera_pane_t2_ParamLimits

0xf23f,	// (0x00025d84) main_camera_pane_t_ParamLimits

0x08ea,	// (0x0001742f) bg_popup_preview_window_pane_cp01_ParamLimits

0x08ea,	// (0x0001742f) bg_popup_preview_window_pane_cp01

0x1c91,	// (0x000187d6) popup_phob_thumbnail2_window_g1_ParamLimits

0x1c91,	// (0x000187d6) popup_phob_thumbnail2_window_g1

0x068f,	// (0x000171d4) call2_cli_visual_pane

0xaac4,	// (0x00021609) popup_call2_audio_conf_window_ParamLimits

0xaac4,	// (0x00021609) popup_call2_audio_conf_window

0xaad9,	// (0x0002161e) popup_call2_audio_first_window_ParamLimits

0xaad9,	// (0x0002161e) popup_call2_audio_first_window

0xab77,	// (0x000216bc) popup_call2_audio_in_window_ParamLimits

0xab77,	// (0x000216bc) popup_call2_audio_in_window

0xabb9,	// (0x000216fe) popup_call2_audio_out_window_ParamLimits

0xabb9,	// (0x000216fe) popup_call2_audio_out_window

0xac1b,	// (0x00021760) popup_call2_audio_second_window_ParamLimits

0xac1b,	// (0x00021760) popup_call2_audio_second_window

0xac79,	// (0x000217be) popup_call2_audio_wait_window_ParamLimits

0xac79,	// (0x000217be) popup_call2_audio_wait_window

0x068f,	// (0x000171d4) bg_popup_call2_act_pane_cp03

0x08cc,	// (0x00017411) list_conf_pane_cp

0x1c9d,	// (0x000187e2) popup_call2_audio_conf_window_t1

0x1cab,	// (0x000187f0) list_single_graphic_popup_conf2_pane_ParamLimits

0x1cab,	// (0x000187f0) list_single_graphic_popup_conf2_pane

0x15c5,	// (0x0001810a) list_highlight_pane_cp04

0x1cbe,	// (0x00018803) list_single_graphic_popup_conf2_pane_g1

0x15d6,	// (0x0001811b) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf536,	// (0x0002607b) list_single_graphic_popup_conf2_pane_g

0x1cc8,	// (0x0001880d) list_single_graphic_popup_conf2_pane_t1

0x1cd6,	// (0x0001881b) bg_popup_call2_act_pane_cp01_ParamLimits

0x1cd6,	// (0x0001881b) bg_popup_call2_act_pane_cp01

0x1d60,	// (0x000188a5) call_type_pane_cp05_ParamLimits

0x1d60,	// (0x000188a5) call_type_pane_cp05

0x1db4,	// (0x000188f9) popup_call2_audio_second_window_g1_ParamLimits

0x1db4,	// (0x000188f9) popup_call2_audio_second_window_g1

0x1e08,	// (0x0001894d) popup_call2_audio_second_window_g2_ParamLimits

0x1e08,	// (0x0001894d) popup_call2_audio_second_window_g2

0x0002,

0xf53b,	// (0x00026080) popup_call2_audio_second_window_g_ParamLimits

0xf53b,	// (0x00026080) popup_call2_audio_second_window_g

0x1e6d,	// (0x000189b2) popup_call2_audio_second_window_t1_ParamLimits

0x1e6d,	// (0x000189b2) popup_call2_audio_second_window_t1

0x1f28,	// (0x00018a6d) popup_call2_audio_second_window_t2_ParamLimits

0x1f28,	// (0x00018a6d) popup_call2_audio_second_window_t2

0x1f7b,	// (0x00018ac0) popup_call2_audio_second_window_t3_ParamLimits

0x1f7b,	// (0x00018ac0) popup_call2_audio_second_window_t3

0x0003,

0xf542,	// (0x00026087) popup_call2_audio_second_window_t_ParamLimits

0xf542,	// (0x00026087) popup_call2_audio_second_window_t

0x068f,	// (0x000171d4) bg_popup_call2_in_pane_cp02

0x0699,	// (0x000171de) call_type_pane_cp04

0x06a1,	// (0x000171e6) popup_call2_audio_wait_window_g1

0x06a9,	// (0x000171ee) popup_call2_audio_wait_window_g2

0x0001,

0xf11b,	// (0x00025c60) popup_call2_audio_wait_window_g

0x06b1,	// (0x000171f6) popup_call2_audio_wait_window_t3

0x206e,	// (0x00018bb3) bg_popup_call2_act_pane_ParamLimits

0x206e,	// (0x00018bb3) bg_popup_call2_act_pane

0x212e,	// (0x00018c73) call_type_pane_cp03_ParamLimits

0x212e,	// (0x00018c73) call_type_pane_cp03

0x2192,	// (0x00018cd7) popup_call2_audio_first_window_g1_ParamLimits

0x2192,	// (0x00018cd7) popup_call2_audio_first_window_g1

0x2202,	// (0x00018d47) popup_call2_audio_first_window_g2_ParamLimits

0x2202,	// (0x00018d47) popup_call2_audio_first_window_g2

0x1880,	// (0x000183c5) popup_call2_audio_first_window_g3_ParamLimits

0x1880,	// (0x000183c5) popup_call2_audio_first_window_g3

0x0004,

0xf54b,	// (0x00026090) popup_call2_audio_first_window_g_ParamLimits

0xf54b,	// (0x00026090) popup_call2_audio_first_window_g

0x22e0,	// (0x00018e25) popup_call2_audio_first_window_t1_ParamLimits

0x22e0,	// (0x00018e25) popup_call2_audio_first_window_t1

0x23e3,	// (0x00018f28) popup_call2_audio_first_window_t4_ParamLimits

0x23e3,	// (0x00018f28) popup_call2_audio_first_window_t4

0x24c6,	// (0x0001900b) popup_call2_audio_first_window_t5_ParamLimits

0x24c6,	// (0x0001900b) popup_call2_audio_first_window_t5

0x0003,

0xf556,	// (0x0002609b) popup_call2_audio_first_window_t_ParamLimits

0xf556,	// (0x0002609b) popup_call2_audio_first_window_t

0x08e2,	// (0x00017427) bg_popup_call2_act_pane_g1

0x2b3b,	// (0x00019680) popup_cale_lunar_info_window_t1

0x2b49,	// (0x0001968e) popup_cale_lunar_info_window_t2

0x2b57,	// (0x0001969c) popup_cale_lunar_info_window_t3

0x068f,	// (0x000171d4) bg_popup_call2_bubble_pane

0x25c7,	// (0x0001910c) bg_popup_call2_in_pane_cp01_ParamLimits

0x25c7,	// (0x0001910c) bg_popup_call2_in_pane_cp01

0x036b,	// (0x00016eb0) call_type_pane_cp02

0x260f,	// (0x00019154) popup_call2_audio_out_window_g1_ParamLimits

0x260f,	// (0x00019154) popup_call2_audio_out_window_g1

0x263b,	// (0x00019180) popup_call2_audio_out_window_g2_ParamLimits

0x263b,	// (0x00019180) popup_call2_audio_out_window_g2

0x2663,	// (0x000191a8) popup_call2_audio_out_window_g3_ParamLimits

0x2663,	// (0x000191a8) popup_call2_audio_out_window_g3

0x0003,

0xf55f,	// (0x000260a4) popup_call2_audio_out_window_g_ParamLimits

0xf55f,	// (0x000260a4) popup_call2_audio_out_window_g

0x269e,	// (0x000191e3) popup_call2_audio_out_window_t1_ParamLimits

0x269e,	// (0x000191e3) popup_call2_audio_out_window_t1

0x26fd,	// (0x00019242) popup_call2_audio_out_window_t2_ParamLimits

0x26fd,	// (0x00019242) popup_call2_audio_out_window_t2

0x2751,	// (0x00019296) popup_call2_audio_out_window_t3_ParamLimits

0x2751,	// (0x00019296) popup_call2_audio_out_window_t3

0x2767,	// (0x000192ac) popup_call2_audio_out_window_t4_ParamLimits

0x2767,	// (0x000192ac) popup_call2_audio_out_window_t4

0x277d,	// (0x000192c2) popup_call2_audio_out_window_t5_ParamLimits

0x277d,	// (0x000192c2) popup_call2_audio_out_window_t5

0x0005,

0xf568,	// (0x000260ad) popup_call2_audio_out_window_t_ParamLimits

0xf568,	// (0x000260ad) popup_call2_audio_out_window_t

0x27e1,	// (0x00019326) bg_popup_call2_in_pane_ParamLimits

0x27e1,	// (0x00019326) bg_popup_call2_in_pane

0x283d,	// (0x00019382) popup_call2_audio_in_window_g1_ParamLimits

0x283d,	// (0x00019382) popup_call2_audio_in_window_g1

0x2875,	// (0x000193ba) popup_call2_audio_in_window_g2_ParamLimits

0x2875,	// (0x000193ba) popup_call2_audio_in_window_g2

0x28ad,	// (0x000193f2) popup_call2_audio_in_window_g3_ParamLimits

0x28ad,	// (0x000193f2) popup_call2_audio_in_window_g3

0x0003,

0xf575,	// (0x000260ba) popup_call2_audio_in_window_g_ParamLimits

0xf575,	// (0x000260ba) popup_call2_audio_in_window_g

0x2905,	// (0x0001944a) popup_call2_audio_in_window_t1_ParamLimits

0x2905,	// (0x0001944a) popup_call2_audio_in_window_t1

0x2985,	// (0x000194ca) popup_call2_audio_in_window_t2_ParamLimits

0x2985,	// (0x000194ca) popup_call2_audio_in_window_t2

0x2a05,	// (0x0001954a) popup_call2_audio_in_window_t3_ParamLimits

0x2a05,	// (0x0001954a) popup_call2_audio_in_window_t3

0x2a1f,	// (0x00019564) popup_call2_audio_in_window_t4_ParamLimits

0x2a1f,	// (0x00019564) popup_call2_audio_in_window_t4

0x2a31,	// (0x00019576) popup_call2_audio_in_window_t5_ParamLimits

0x2a31,	// (0x00019576) popup_call2_audio_in_window_t5

0x2a46,	// (0x0001958b) popup_call2_audio_in_window_t6_ParamLimits

0x2a46,	// (0x0001958b) popup_call2_audio_in_window_t6

0x0005,

0xf57e,	// (0x000260c3) popup_call2_audio_in_window_t_ParamLimits

0xf57e,	// (0x000260c3) popup_call2_audio_in_window_t

0x08e2,	// (0x00017427) bg_popup_call2_in_pane_g1

0x2b65,	// (0x000196aa) popup_cale_lunar_info_window_t4

0x0003,

0xf5e6,	// (0x0002612b) popup_cale_lunar_info_window_t

0x08ea,	// (0x0001742f) bg_popup_call2_rect_pane_ParamLimits

0x08ea,	// (0x0001742f) bg_popup_call2_rect_pane

0x068f,	// (0x000171d4) call2_cli_visual_graphic_pane

0x068f,	// (0x000171d4) call2_cli_visual_text_pane

0x721f,	// (0x0001dd64) smil_status_volume_pane_g3

0x0002,

0x0a94,	// (0x000175d9) call2_cli_visual_graphic_pane_g1

0x0a94,	// (0x000175d9) call2_cli_visual_graphic_pane_g2

0x0a94,	// (0x000175d9) call2_cli_visual_graphic_pane_g3

0x0002,

0xf58b,	// (0x000260d0) call2_cli_visual_graphic_pane_g

0x2a5b,	// (0x000195a0) bg_popup_call2_rect_pane_g1

0x0b3c,	// (0x00017681) bg_popup_call2_rect_pane_g2

0x2a63,	// (0x000195a8) bg_popup_call2_rect_pane_g3

0x2a6b,	// (0x000195b0) bg_popup_call2_rect_pane_g4

0x2a73,	// (0x000195b8) bg_popup_call2_rect_pane_g5

0x2a7b,	// (0x000195c0) bg_popup_call2_rect_pane_g6

0x2a83,	// (0x000195c8) bg_popup_call2_rect_pane_g7

0x2a8b,	// (0x000195d0) bg_popup_call2_rect_pane_g8

0x2a93,	// (0x000195d8) bg_popup_call2_rect_pane_g9

0x0008,

0xf592,	// (0x000260d7) bg_popup_call2_rect_pane_g

0x2a9b,	// (0x000195e0) bg_popup_call2_bubble_pane_g1

0x2aa3,	// (0x000195e8) bg_popup_call2_bubble_pane_g2

0x2aab,	// (0x000195f0) bg_popup_call2_bubble_pane_g3

0x2ab3,	// (0x000195f8) bg_popup_call2_bubble_pane_g4

0x2abb,	// (0x00019600) bg_popup_call2_bubble_pane_g5

0x2ac3,	// (0x00019608) bg_popup_call2_bubble_pane_g6

0x2acb,	// (0x00019610) bg_popup_call2_bubble_pane_g7

0x2ad3,	// (0x00019618) bg_popup_call2_bubble_pane_g8

0x2adb,	// (0x00019620) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5a5,	// (0x000260ea) bg_popup_call2_bubble_pane_g

0x8867,	// (0x0001f3ac) aid_cale_week_size_cell_pane

0x8c09,	// (0x0001f74e) aid_cams_cif_uncrop_pane_ParamLimits

0x8c09,	// (0x0001f74e) aid_cams_cif_uncrop_pane

0x8d6c,	// (0x0001f8b1) aid_cams_size_cell_ParamLimits

0x8d6c,	// (0x0001f8b1) aid_cams_size_cell

0x8d78,	// (0x0001f8bd) grid_cams_pane_ParamLimits

0x8d86,	// (0x0001f8cb) linegrid_cams_pane_ParamLimits

0x8eb3,	// (0x0001f9f8) call_video_pane_t1

0x8ed4,	// (0x0001fa19) call_video_pane_t2

0x0001,

0xf292,	// (0x00025dd7) call_video_pane_t

0x9454,	// (0x0001ff99) aid_cale_month_size_cell_pane_ParamLimits

0x9454,	// (0x0001ff99) aid_cale_month_size_cell_pane

0xf62f,	// (0x00026174) smil_status_volume_pane_g

0x722c,	// (0x0001dd71) volume_smil_pane_ParamLimits

0x0212,	// (0x00016d57) aid_popup2_width_pane

0x87a4,	// (0x0001f2e9) cell_qdial_pane_g4_ParamLimits

0x87a4,	// (0x0001f2e9) cell_qdial_pane_g4

0xa0e9,	// (0x00020c2e) aid_blid_cardinal_pane_ParamLimits

0xa0f9,	// (0x00020c3e) aid_blid_destination_pane_ParamLimits

0xa0f9,	// (0x00020c3e) aid_blid_destination_pane

0x08ea,	// (0x0001742f) bg_popup_call_poc_act_pane_ParamLimits

0x08ea,	// (0x0001742f) bg_popup_call_poc_act_pane

0x08ea,	// (0x0001742f) bg_popup_call_poc_inact_pane_ParamLimits

0x08ea,	// (0x0001742f) bg_popup_call_poc_inact_pane

0x2aeb,	// (0x00019630) bg_popup_call_poc_act_pane_g1

0x2af3,	// (0x00019638) bg_popup_call_poc_act_pane_g2

0x2afb,	// (0x00019640) bg_popup_call_poc_act_pane_g3

0x2ab3,	// (0x000195f8) bg_popup_call_poc_act_pane_g4

0x2abb,	// (0x00019600) bg_popup_call_poc_act_pane_g5

0x2b03,	// (0x00019648) bg_popup_call_poc_act_pane_g6

0x2acb,	// (0x00019610) bg_popup_call_poc_act_pane_g7

0x2b0b,	// (0x00019650) bg_popup_call_poc_act_pane_g8

0x068f,	// (0x000171d4) main_usb_pane

0x2c64,	// (0x000197a9) popup_cale_lunar_info_window

0x91f3,	// (0x0001fd38) im_reading_pane_t1_ParamLimits

0x0ea5,	// (0x000179ea) list_im_pane_ParamLimits

0x0eb6,	// (0x000179fb) scroll_pane_cp07_ParamLimits

0x068f,	// (0x000171d4) grid_highlight_pane_cp012

0x08ea,	// (0x0001742f) mup_scale_pane_ParamLimits

0x1880,	// (0x000183c5) main_usb_pane_g1_ParamLimits

0x1880,	// (0x000183c5) main_usb_pane_g1

0xacf0,	// (0x00021835) main_usb_pane_g2_ParamLimits

0xacf0,	// (0x00021835) main_usb_pane_g2

0x0001,

0xf5cf,	// (0x00026114) main_usb_pane_g_ParamLimits

0xf5cf,	// (0x00026114) main_usb_pane_g

0xacfc,	// (0x00021841) main_usb_pane_t1_ParamLimits

0xacfc,	// (0x00021841) main_usb_pane_t1

0xad0e,	// (0x00021853) main_usb_pane_t2_ParamLimits

0xad0e,	// (0x00021853) main_usb_pane_t2

0xad20,	// (0x00021865) main_usb_pane_t3_ParamLimits

0xad20,	// (0x00021865) main_usb_pane_t3

0xad32,	// (0x00021877) main_usb_pane_t4_ParamLimits

0xad32,	// (0x00021877) main_usb_pane_t4

0xad44,	// (0x00021889) main_usb_pane_t5_ParamLimits

0xad44,	// (0x00021889) main_usb_pane_t5

0xad56,	// (0x0002189b) main_usb_pane_t6_ParamLimits

0xad56,	// (0x0002189b) main_usb_pane_t6

0x0005,

0xf5d4,	// (0x00026119) main_usb_pane_t_ParamLimits

0xa08f,	// (0x00020bd4) aid_text_placing

0xa09b,	// (0x00020be0) main_location2_pane_t1_ParamLimits

0xa0af,	// (0x00020bf4) main_location2_pane_t2_ParamLimits

0xa0c3,	// (0x00020c08) main_location2_pane_t3_ParamLimits

0xa0d7,	// (0x00020c1c) main_location2_pane_t4_ParamLimits

0xa0d7,	// (0x00020c1c) main_location2_pane_t4

0xf3f3,	// (0x00025f38) main_location2_pane_t_ParamLimits

0x092e,	// (0x00017473) find_pinb_pane_g2_ParamLimits

0x092e,	// (0x00017473) find_pinb_pane_g2

0x0001,

0xf141,	// (0x00025c86) find_pinb_pane_g_ParamLimits

0xf141,	// (0x00025c86) find_pinb_pane_g

0x093a,	// (0x0001747f) find_pinb_pane_t1_ParamLimits

0x094c,	// (0x00017491) find_pinb_pane_t2_ParamLimits

0xf146,	// (0x00025c8b) find_pinb_pane_t_ParamLimits

0x068f,	// (0x000171d4) main_call3_pane

0x986c,	// (0x000203b1) cale_month_day_heading_pane_t1_ParamLimits

0x98ca,	// (0x0002040f) cale_month_day_heading_pane_t2_ParamLimits

0x992f,	// (0x00020474) cale_month_day_heading_pane_t3_ParamLimits

0x9994,	// (0x000204d9) cale_month_day_heading_pane_t4_ParamLimits

0x99f9,	// (0x0002053e) cale_month_day_heading_pane_t5_ParamLimits

0x9a5e,	// (0x000205a3) cale_month_day_heading_pane_t6_ParamLimits

0x9acb,	// (0x00020610) cale_month_day_heading_pane_t7_ParamLimits

0xf2ca,	// (0x00025e0f) cale_month_day_heading_pane_t_ParamLimits

0x112c,	// (0x00017c71) smil_status_volume_pane

0xa8a4,	// (0x000213e9) postcard_address_pane_ParamLimits

0xa8a4,	// (0x000213e9) postcard_address_pane

0xa8b0,	// (0x000213f5) postcard_message_pane_ParamLimits

0xa8b0,	// (0x000213f5) postcard_message_pane

0xacb8,	// (0x000217fd) call2_cli_visual_pane_t1_ParamLimits

0xacb8,	// (0x000217fd) call2_cli_visual_pane_t1

0xb27d,	// (0x00021dc2) postcard_message_pane_t1_ParamLimits

0xb27d,	// (0x00021dc2) postcard_message_pane_t1

0xb266,	// (0x00021dab) postcard_address_pane_t1_ParamLimits

0xb266,	// (0x00021dab) postcard_address_pane_t1

0xb257,	// (0x00021d9c) popup_call3_audio_in_window_ParamLimits

0xb257,	// (0x00021d9c) popup_call3_audio_in_window

0xb13f,	// (0x00021c84) bg_popup_call3_in_pane_ParamLimits

0xb13f,	// (0x00021c84) bg_popup_call3_in_pane

0xb19d,	// (0x00021ce2) popup_call3_audio_in_window_g1_ParamLimits

0xb19d,	// (0x00021ce2) popup_call3_audio_in_window_g1

0xb1b5,	// (0x00021cfa) popup_call3_audio_in_window_g2_ParamLimits

0xb1b5,	// (0x00021cfa) popup_call3_audio_in_window_g2

0xb1cd,	// (0x00021d12) popup_call3_audio_in_window_g3_ParamLimits

0xb1cd,	// (0x00021d12) popup_call3_audio_in_window_g3

0x0003,

0xf636,	// (0x0002617b) popup_call3_audio_in_window_g_ParamLimits

0xf636,	// (0x0002617b) popup_call3_audio_in_window_g

0xb1f5,	// (0x00021d3a) popup_call3_audio_in_window_t1_ParamLimits

0xb1f5,	// (0x00021d3a) popup_call3_audio_in_window_t1

0xb21d,	// (0x00021d62) popup_call3_audio_in_window_t2_ParamLimits

0xb21d,	// (0x00021d62) popup_call3_audio_in_window_t2

0xb245,	// (0x00021d8a) popup_call3_audio_in_window_t3_ParamLimits

0xb245,	// (0x00021d8a) popup_call3_audio_in_window_t3

0x0002,

0xf63f,	// (0x00026184) popup_call3_audio_in_window_t_ParamLimits

0xf63f,	// (0x00026184) popup_call3_audio_in_window_t

0x17af,	// (0x000182f4) bg_popup_call3_rect_pane

0x2a5b,	// (0x000195a0) bg_popup_call3_rect_pane_g1

0x0b3c,	// (0x00017681) bg_popup_call3_rect_pane_g2

0x2a63,	// (0x000195a8) bg_popup_call3_rect_pane_g3

0x2a6b,	// (0x000195b0) bg_popup_call3_rect_pane_g4

0x2a73,	// (0x000195b8) bg_popup_call3_rect_pane_g5

0x2a7b,	// (0x000195c0) bg_popup_call3_rect_pane_g6

0x2a83,	// (0x000195c8) bg_popup_call3_rect_pane_g7

0xa4d9,	// (0x0002101e) mup_visualizer_osc_pane

0x188e,	// (0x000183d3) mup_visualizer_spec_pane

0xb15f,	// (0x00021ca4) call3_video_qcif_pane_ParamLimits

0xb15f,	// (0x00021ca4) call3_video_qcif_pane

0xb16f,	// (0x00021cb4) call3_video_qcif_uncrop_pane_ParamLimits

0xb16f,	// (0x00021cb4) call3_video_qcif_uncrop_pane

0xb17b,	// (0x00021cc0) call3_video_subqcif_pane_ParamLimits

0xb17b,	// (0x00021cc0) call3_video_subqcif_pane

0xb18d,	// (0x00021cd2) call3_video_subqcif_uncrop_pane_ParamLimits

0xb18d,	// (0x00021cd2) call3_video_subqcif_uncrop_pane

0xb1e5,	// (0x00021d2a) popup_call3_audio_in_window_g4_ParamLimits

0xb1e5,	// (0x00021d2a) popup_call3_audio_in_window_g4

0xb12e,	// (0x00021c73) mup_spec_half_pane

0xb137,	// (0x00021c7c) mup_spec_half_pane_cp

0x2cfb,	// (0x00019840) mup_osc_middle_pane

0x2d04,	// (0x00019849) mup_visualizer_osc_pane_g1

0xb10f,	// (0x00021c54) mup_spec_bar_pane_ParamLimits

0xb10f,	// (0x00021c54) mup_spec_bar_pane

0x2ce8,	// (0x0001982d) mup_spec_bar_pane_g1

0x2cf2,	// (0x00019837) mup_spec_bar_pane_g2

0x0001,

0xf62a,	// (0x0002616f) mup_spec_bar_pane_g

0x8867,	// (0x0001f3ac) aid_cale_week_size_cell_pane_ParamLimits

0x887a,	// (0x0001f3bf) bg_cale_heading_pane_ParamLimits

0x0bdd,	// (0x00017722) bg_cale_pane_cp01_ParamLimits

0x8896,	// (0x0001f3db) cale_week_corner_pane_ParamLimits

0x88a7,	// (0x0001f3ec) cale_week_day_heading_pane_ParamLimits

0x88c3,	// (0x0001f408) cale_week_scroll_pane_g1_ParamLimits

0x88dc,	// (0x0001f421) cale_week_scroll_pane_g2_ParamLimits

0x88ed,	// (0x0001f432) cale_week_scroll_pane_g3_ParamLimits

0x88fe,	// (0x0001f443) cale_week_scroll_pane_g4_ParamLimits

0x890f,	// (0x0001f454) cale_week_scroll_pane_g5_ParamLimits

0x8920,	// (0x0001f465) cale_week_scroll_pane_g6_ParamLimits

0x8931,	// (0x0001f476) cale_week_scroll_pane_g7_ParamLimits

0x8944,	// (0x0001f489) cale_week_scroll_pane_g8_ParamLimits

0x8957,	// (0x0001f49c) cale_week_scroll_pane_g9_ParamLimits

0x8968,	// (0x0001f4ad) cale_week_scroll_pane_g10_ParamLimits

0x8979,	// (0x0001f4be) cale_week_scroll_pane_g11_ParamLimits

0x898a,	// (0x0001f4cf) cale_week_scroll_pane_g12_ParamLimits

0x89a3,	// (0x0001f4e8) cale_week_scroll_pane_g13_ParamLimits

0x89bc,	// (0x0001f501) cale_week_scroll_pane_g14_ParamLimits

0x89d5,	// (0x0001f51a) cale_week_scroll_pane_g15_ParamLimits

0xf1d2,	// (0x00025d17) cale_week_scroll_pane_g_ParamLimits

0x89ee,	// (0x0001f533) cale_week_time_pane_ParamLimits

0x8a01,	// (0x0001f546) grid_cale_week_pane_ParamLimits

0x0bf6,	// (0x0001773b) listscroll_cale_week_pane_t1

0x8a1e,	// (0x0001f563) scroll_pane_cp08_ParamLimits

0x94a5,	// (0x0001ffea) cale_month_corner_pane_ParamLimits

0x10cc,	// (0x00017c11) cale_month_pane_t1

0x981b,	// (0x00020360) cale_month_week_pane_ParamLimits

0x1880,	// (0x000183c5) popup_call_status_window_g1_ParamLimits

0x9f3a,	// (0x00020a7f) popup_call_status_window_g2_ParamLimits

0x9f46,	// (0x00020a8b) popup_call_status_window_g3_ParamLimits

0xf37a,	// (0x00025ebf) popup_call_status_window_g_ParamLimits

0x14bb,	// (0x00018000) aid_call2_pane

0xa77b,	// (0x000212c0) msg_header_pane_g1

0xa8a4,	// (0x000213e9) postcard_address2_pane_ParamLimits

0xa8a4,	// (0x000213e9) postcard_address2_pane

0xa8b0,	// (0x000213f5) postcard_message2_pane_ParamLimits

0xa8b0,	// (0x000213f5) postcard_message2_pane

0xb09d,	// (0x00021be2) message2_row_pane_ParamLimits

0xb09d,	// (0x00021be2) message2_row_pane

0xb0ba,	// (0x00021bff) address2_row_pane_ParamLimits

0xb0ba,	// (0x00021bff) address2_row_pane

0x2cb6,	// (0x000197fb) postcard_message2_row_pane_g1

0x2cbe,	// (0x00019803) postcard_message2_row_pane_t1

0x2cb6,	// (0x000197fb) address2_row_pane_g1

0x2cbe,	// (0x00019803) address2_row_pane_t1

0x7068,	// (0x0001dbad) aid_size_cell_vorec

0x068f,	// (0x000171d4) main_rss_pane

0xb0cd,	// (0x00021c12) rss_list_single_pane_ParamLimits

0xb0cd,	// (0x00021c12) rss_list_single_pane

0x2ccc,	// (0x00019811) rss_list_single_pane_t1

0x2cda,	// (0x0001981f) rss_list_single_pane_t2

0x0001,

0xf625,	// (0x0002616a) rss_list_single_pane_t

0x068f,	// (0x000171d4) main_camera2_pane

0x068f,	// (0x000171d4) main_video2_pane

0x728a,	// (0x0001ddcf) cams_zoom_pane_cp2_ParamLimits

0x728a,	// (0x0001ddcf) cams_zoom_pane_cp2

0x7296,	// (0x0001dddb) image2_vga_pane_ParamLimits

0x7296,	// (0x0001dddb) image2_vga_pane

0x72a5,	// (0x0001ddea) main_camera2_pane_g1_ParamLimits

0x72a5,	// (0x0001ddea) main_camera2_pane_g1

0x72b1,	// (0x0001ddf6) main_camera2_pane_g2_ParamLimits

0x72b1,	// (0x0001ddf6) main_camera2_pane_g2

0x72bd,	// (0x0001de02) main_camera2_pane_g3_ParamLimits

0x72bd,	// (0x0001de02) main_camera2_pane_g3

0x72c9,	// (0x0001de0e) main_camera2_pane_g4_ParamLimits

0x72c9,	// (0x0001de0e) main_camera2_pane_g4

0x72d5,	// (0x0001de1a) main_camera2_pane_g5_ParamLimits

0x72d5,	// (0x0001de1a) main_camera2_pane_g5

0x72e1,	// (0x0001de26) main_camera2_pane_g6_ParamLimits

0x72e1,	// (0x0001de26) main_camera2_pane_g6

0x72ed,	// (0x0001de32) main_camera2_pane_g7_ParamLimits

0x72ed,	// (0x0001de32) main_camera2_pane_g7

0x72f9,	// (0x0001de3e) main_camera2_pane_g8_ParamLimits

0x72f9,	// (0x0001de3e) main_camera2_pane_g8

0x0008,

0xf646,	// (0x0002618b) main_camera2_pane_g_ParamLimits

0xf646,	// (0x0002618b) main_camera2_pane_g

0x7311,	// (0x0001de56) main_camera2_pane_t1_ParamLimits

0x7311,	// (0x0001de56) main_camera2_pane_t1

0x7323,	// (0x0001de68) main_camera2_pane_t2_ParamLimits

0x7323,	// (0x0001de68) main_camera2_pane_t2

0x7335,	// (0x0001de7a) main_camera2_pane_t3_ParamLimits

0x7335,	// (0x0001de7a) main_camera2_pane_t3

0x7347,	// (0x0001de8c) main_camera2_pane_t4_ParamLimits

0x7347,	// (0x0001de8c) main_camera2_pane_t4

0x0006,

0xf659,	// (0x0002619e) main_camera2_pane_t_ParamLimits

0xf659,	// (0x0002619e) main_camera2_pane_t

0x73a9,	// (0x0001deee) cams_zoom_pane_cp4_ParamLimits

0x73a9,	// (0x0001deee) cams_zoom_pane_cp4

0x73b9,	// (0x0001defe) image2_cif_pane_ParamLimits

0x73b9,	// (0x0001defe) image2_cif_pane

0x73ce,	// (0x0001df13) image2_subqcif_pane_ParamLimits

0x73ce,	// (0x0001df13) image2_subqcif_pane

0x73dd,	// (0x0001df22) main_video2_pane_g1_ParamLimits

0x73dd,	// (0x0001df22) main_video2_pane_g1

0x73ef,	// (0x0001df34) main_video2_pane_g2_ParamLimits

0x73ef,	// (0x0001df34) main_video2_pane_g2

0x73ff,	// (0x0001df44) main_video2_pane_g3_ParamLimits

0x73ff,	// (0x0001df44) main_video2_pane_g3

0x740f,	// (0x0001df54) main_video2_pane_g4_ParamLimits

0x740f,	// (0x0001df54) main_video2_pane_g4

0x741f,	// (0x0001df64) main_video2_pane_g5_ParamLimits

0x741f,	// (0x0001df64) main_video2_pane_g5

0x742f,	// (0x0001df74) main_video2_pane_g6_ParamLimits

0x742f,	// (0x0001df74) main_video2_pane_g6

0x0005,

0xf668,	// (0x000261ad) main_video2_pane_g_ParamLimits

0xf668,	// (0x000261ad) main_video2_pane_g

0x7441,	// (0x0001df86) main_video2_pane_t1_ParamLimits

0x7441,	// (0x0001df86) main_video2_pane_t1

0x745b,	// (0x0001dfa0) main_video2_pane_t2_ParamLimits

0x745b,	// (0x0001dfa0) main_video2_pane_t2

0x7481,	// (0x0001dfc6) main_video2_pane_t3_ParamLimits

0x7481,	// (0x0001dfc6) main_video2_pane_t3

0x0002,

0xf675,	// (0x000261ba) main_video2_pane_t_ParamLimits

0xf675,	// (0x000261ba) main_video2_pane_t

0xae0d,	// (0x00021952) call_muted_g2

0x0001,

0xf617,	// (0x0002615c) call_muted_g

0x068f,	// (0x000171d4) main_mup2_pane

0x2dbb,	// (0x00019900) main_mup2_pane_g1_ParamLimits

0x2dbb,	// (0x00019900) main_mup2_pane_g1

0xb298,	// (0x00021ddd) main_mup2_pane_g2_ParamLimits

0xb298,	// (0x00021ddd) main_mup2_pane_g2

0x74d0,	// (0x0001e015) main_mup_pane_g13_cp1

0x74d8,	// (0x0001e01d) mup_volume_pane_cp1

0xb2b8,	// (0x00021dfd) main_mup2_pane_g4_ParamLimits

0xb2b8,	// (0x00021dfd) main_mup2_pane_g4

0xb2cd,	// (0x00021e12) main_mup2_pane_g5_ParamLimits

0xb2cd,	// (0x00021e12) main_mup2_pane_g5

0xb2e2,	// (0x00021e27) main_mup2_pane_g6_ParamLimits

0xb2e2,	// (0x00021e27) main_mup2_pane_g6

0xb2f7,	// (0x00021e3c) main_mup2_pane_g7_ParamLimits

0xb2f7,	// (0x00021e3c) main_mup2_pane_g7

0x0006,

0xf67c,	// (0x000261c1) main_mup2_pane_g_ParamLimits

0xf67c,	// (0x000261c1) main_mup2_pane_g

0xb313,	// (0x00021e58) main_mup2_pane_t1_ParamLimits

0xb313,	// (0x00021e58) main_mup2_pane_t1

0xb32a,	// (0x00021e6f) main_mup2_pane_t2_ParamLimits

0xb32a,	// (0x00021e6f) main_mup2_pane_t2

0xb341,	// (0x00021e86) main_mup2_pane_t3_ParamLimits

0xb341,	// (0x00021e86) main_mup2_pane_t3

0xb358,	// (0x00021e9d) main_mup2_pane_t4_ParamLimits

0xb358,	// (0x00021e9d) main_mup2_pane_t4

0xb372,	// (0x00021eb7) main_mup2_pane_t5_ParamLimits

0xb372,	// (0x00021eb7) main_mup2_pane_t5

0xb38c,	// (0x00021ed1) main_mup2_pane_t6_ParamLimits

0xb38c,	// (0x00021ed1) main_mup2_pane_t6

0x0005,

0xf68b,	// (0x000261d0) main_mup2_pane_t_ParamLimits

0xf68b,	// (0x000261d0) main_mup2_pane_t

0xb3c4,	// (0x00021f09) mup2_visualizer_pane_ParamLimits

0xb3c4,	// (0x00021f09) mup2_visualizer_pane

0xb3fa,	// (0x00021f3f) mup_progress_pane_cp_ParamLimits

0xb3fa,	// (0x00021f3f) mup_progress_pane_cp

0x74bb,	// (0x0001e000) mup_volume_pane_cp_ParamLimits

0x74bb,	// (0x0001e000) mup_volume_pane_cp

0xb411,	// (0x00021f56) mup2_visualizer_pane_g1_ParamLimits

0xb411,	// (0x00021f56) mup2_visualizer_pane_g1

0x2d8d,	// (0x000198d2) mup2_visualizer_pane_g2_ParamLimits

0x2d8d,	// (0x000198d2) mup2_visualizer_pane_g2

0xb426,	// (0x00021f6b) mup2_visualizer_pane_g3_ParamLimits

0xb426,	// (0x00021f6b) mup2_visualizer_pane_g3

0x0002,

0xf698,	// (0x000261dd) mup2_visualizer_pane_g_ParamLimits

0xf698,	// (0x000261dd) mup2_visualizer_pane_g

0x1b2d,	// (0x00018672) aid_size_cell_fmradio

0xaf23,	// (0x00021a68) aid_height_parent_landcape

0x0f34,	// (0x00017a79) wml_content_pane_cp

0x0f3c,	// (0x00017a81) wml_tabs_pane

0x0f45,	// (0x00017a8a) popup_wml_miniature_window

0x0f4d,	// (0x00017a92) scroll_pane_cp021

0x0f61,	// (0x00017aa6) wml_content_pane_comp8

0x068f,	// (0x000171d4) bg_popup_sub_pane_cp05

0x2dab,	// (0x000198f0) popup_wml_miniature_window_g1

0x2db3,	// (0x000198f8) wml_miniature_view_pane

0xb434,	// (0x00021f79) aid_size_wml_view

0xb43c,	// (0x00021f81) wml_miniature_view_pane_g1

0xb445,	// (0x00021f8a) wml_miniature_view_pane_g2

0xb44e,	// (0x00021f93) wml_miniature_view_pane_g3

0xb456,	// (0x00021f9b) wml_miniature_view_pane_g4

0xb45e,	// (0x00021fa3) wml_miniature_view_pane_g5

0xb466,	// (0x00021fab) wml_miniature_view_pane_g6

0xb46e,	// (0x00021fb3) wml_miniature_view_pane_g7

0xb476,	// (0x00021fbb) wml_miniature_view_pane_g8

0x0007,

0xf69f,	// (0x000261e4) wml_miniature_view_pane_g

0x2dbb,	// (0x00019900) background_graphic_ParamLimits

0x2dbb,	// (0x00019900) background_graphic

0x2dc7,	// (0x0001990c) wml_tabs_2_pane

0x2dd0,	// (0x00019915) wml_tabs_3_pane_ParamLimits

0x2dd0,	// (0x00019915) wml_tabs_3_pane

0x2de2,	// (0x00019927) wml_tabs_4_pane_ParamLimits

0x2de2,	// (0x00019927) wml_tabs_4_pane

0x2df8,	// (0x0001993d) wml_tabs_5_pane_ParamLimits

0x2df8,	// (0x0001993d) wml_tabs_5_pane

0x2e12,	// (0x00019957) wml_tabs_pane_g2_ParamLimits

0x2e12,	// (0x00019957) wml_tabs_pane_g2

0x2e26,	// (0x0001996b) wml_tabs_pane_g3_ParamLimits

0x2e26,	// (0x0001996b) wml_tabs_pane_g3

0xb47e,	// (0x00021fc3) wml_tabs_2_active_pane_ParamLimits

0xb47e,	// (0x00021fc3) wml_tabs_2_active_pane

0xb48e,	// (0x00021fd3) wml_tabs_2_passive_pane_ParamLimits

0xb48e,	// (0x00021fd3) wml_tabs_2_passive_pane

0xb49e,	// (0x00021fe3) wml_tabs_3_active_pane_cp_ParamLimits

0xb49e,	// (0x00021fe3) wml_tabs_3_active_pane_cp

0xb4af,	// (0x00021ff4) wml_tabs_3_passive_pane_ParamLimits

0xb4af,	// (0x00021ff4) wml_tabs_3_passive_pane

0xb4c0,	// (0x00022005) wml_tabs_3_passive_pane_cp_ParamLimits

0xb4c0,	// (0x00022005) wml_tabs_3_passive_pane_cp

0xb4d1,	// (0x00022016) tabs_4_active_pane

0xb4d9,	// (0x0002201e) tabs_4_passive_pane

0xb4e1,	// (0x00022026) tabs_4_passive_pane_cp

0xb4e9,	// (0x0002202e) tabs_4_passive_pane_cp2

0x2ae3,	// (0x00019628) aid_height_text

0xa4a2,	// (0x00020fe7) mup_volume_cont_pane_ParamLimits

0xa4a2,	// (0x00020fe7) mup_volume_cont_pane

0x857f,	// (0x0001f0c4) aid_size_cell_pinb

0x091a,	// (0x0001745f) aid_size_list_pinb

0xb3e3,	// (0x00021f28) mup2_volume_cont_pane_ParamLimits

0xb3e3,	// (0x00021f28) mup2_volume_cont_pane

0x74a7,	// (0x0001dfec) mup2_volume_cont_pane_g1_ParamLimits

0x74a7,	// (0x0001dfec) mup2_volume_cont_pane_g1

0x820c,	// (0x0001ed51) aid_size_cell_touch_ParamLimits

0x820c,	// (0x0001ed51) aid_size_cell_touch

0x845f,	// (0x0001efa4) touch_pane_ParamLimits

0x845f,	// (0x0001efa4) touch_pane

0x0200,	// (0x00016d45) main_rss2_pane

0x2e7c,	// (0x000199c1) listscroll_rss2_pane

0x2e85,	// (0x000199ca) rss2_navigation_pane

0x2e8d,	// (0x000199d2) list_rss2_pane

0x1662,	// (0x000181a7) scroll_pane_cp22

0x2e95,	// (0x000199da) rss2_navigation_pane_g1

0x2e9e,	// (0x000199e3) rss2_navigation_pane_g2

0x2ea6,	// (0x000199eb) rss2_navigation_pane_g3

0x0002,

0xf6b0,	// (0x000261f5) rss2_navigation_pane_g

0x2eae,	// (0x000199f3) rss2_navigation_pane_t1

0xb4f1,	// (0x00022036) rss2_list_single_pane_ParamLimits

0xb4f1,	// (0x00022036) rss2_list_single_pane

0x2ebc,	// (0x00019a01) rss2_list_single_pane_t2

0x2eca,	// (0x00019a0f) rss2_list_single_pane_t3_ParamLimits

0x2eca,	// (0x00019a0f) rss2_list_single_pane_t3

0x2ee7,	// (0x00019a2c) rss2_list_single_pane_t4

0x9cb3,	// (0x000207f8) smil_status_pane_g1

0x0270,	// (0x00016db5) main_image2_pane_ParamLimits

0x0270,	// (0x00016db5) main_image2_pane

0x7305,	// (0x0001de4a) main_camera2_pane_g9_ParamLimits

0x7305,	// (0x0001de4a) main_camera2_pane_g9

0x7359,	// (0x0001de9e) main_camera2_pane_t5_ParamLimits

0x7359,	// (0x0001de9e) main_camera2_pane_t5

0x736b,	// (0x0001deb0) main_camera2_pane_t6_ParamLimits

0x736b,	// (0x0001deb0) main_camera2_pane_t6

0xb52d,	// (0x00022072) main_image2_pane_g1_ParamLimits

0xb52d,	// (0x00022072) main_image2_pane_g1

0xaa85,	// (0x000215ca) smil2_video_pane_ParamLimits

0xaa85,	// (0x000215ca) smil2_video_pane

0x021e,	// (0x00016d63) aid_zoom_text_primary_cp

0x0266,	// (0x00016dab) popup_preview_fixed_window

0x0e9d,	// (0x000179e2) im_reading_pane_g1

0x724f,	// (0x0001dd94) cams2_bc_adjust_pane_cp_ParamLimits

0x724f,	// (0x0001dd94) cams2_bc_adjust_pane_cp

0x739b,	// (0x0001dee0) cams2_bc_adjust_pane_ParamLimits

0x739b,	// (0x0001dee0) cams2_bc_adjust_pane

0x466d,	// (0x0001b1b2) cams2_bc_adjust_pane_g1

0x74e0,	// (0x0001e025) cams2_slider_pane

0x74e9,	// (0x0001e02e) cams2_slider_pane_g1

0x74f2,	// (0x0001e037) cams2_slider_pane_g2

0x0006,

0xf6b7,	// (0x000261fc) cams2_slider_pane_g

0x6df5,	// (0x0001d93a) calc_display_pane_ParamLimits

0x6e13,	// (0x0001d958) calc_paper_pane_ParamLimits

0x6e2f,	// (0x0001d974) grid_calc_pane_ParamLimits

0x717e,	// (0x0001dcc3) popup_clock_digital_window_t1_ParamLimits

0x1aca,	// (0x0001860f) main_image_pane_t1

0x6ddb,	// (0x0001d920) aid_size_cell_calc_ParamLimits

0x6ddb,	// (0x0001d920) aid_size_cell_calc

0xaf55,	// (0x00021a9a) popup_blid_sat_info2_window_ParamLimits

0xaf55,	// (0x00021a9a) popup_blid_sat_info2_window

0x2f31,	// (0x00019a76) aid_size_cell_blid

0x2f39,	// (0x00019a7e) bg_popup_window_pane_cp07

0x2f5c,	// (0x00019aa1) grid_popup_blid_pane

0x2f66,	// (0x00019aab) heading_pane_cp05_ParamLimits

0x2f66,	// (0x00019aab) heading_pane_cp05

0x3030,	// (0x00019b75) cell_popup_blid_pane_ParamLimits

0x3030,	// (0x00019b75) cell_popup_blid_pane

0x3056,	// (0x00019b9b) cell_popup_blid_pane_g1

0x305e,	// (0x00019ba3) cell_popup_blid_pane_t1

0xb3a9,	// (0x00021eee) mup2_indicator_pane_ParamLimits

0xb3a9,	// (0x00021eee) mup2_indicator_pane

0x17af,	// (0x000182f4) mup2_visualizer_osc_pane

0x2d99,	// (0x000198de) mup2_visualizer_spec_pane_ParamLimits

0x2d99,	// (0x000198de) mup2_visualizer_spec_pane

0xb539,	// (0x0002207e) mup2_spec_half_pane

0xb542,	// (0x00022087) mup2_spec_half_pane_cp

0xb54c,	// (0x00022091) mup2_spec_bar_pane_ParamLimits

0xb54c,	// (0x00022091) mup2_spec_bar_pane

0x2ce8,	// (0x0001982d) mup2_spec_bar_pane_g1

0x2cf2,	// (0x00019837) mup2_spec_bar_pane_g2

0x0001,

0xf62a,	// (0x0002616f) mup2_spec_bar_pane_g

0xb56b,	// (0x000220b0) mup2_osc_middle_pane

0x2d04,	// (0x00019849) mup2_visualizer_osc_pane_g1

0x029e,	// (0x00016de3) popup_number_entry_window_t1_ParamLimits

0x02b1,	// (0x00016df6) popup_number_entry_window_t2_ParamLimits

0x02c3,	// (0x00016e08) popup_number_entry_window_t3_ParamLimits

0x84b6,	// (0x0001effb) popup_number_entry_window_t5_ParamLimits

0x84b6,	// (0x0001effb) popup_number_entry_window_t5

0xf0ec,	// (0x00025c31) popup_number_entry_window_t_ParamLimits

0x02d5,	// (0x00016e1a) text_title_cp2_ParamLimits

0x71bd,	// (0x0001dd02) aid_hotspot_pointer_text2_pane

0x7213,	// (0x0001dd58) main_viewer_pane_g9_ParamLimits

0x7213,	// (0x0001dd58) main_viewer_pane_g9

0x10cc,	// (0x00017c11) cale_month_pane_t1_ParamLimits

0x1161,	// (0x00017ca6) bg_cale_pane_ParamLimits

0x1179,	// (0x00017cbe) list_cale_pane_ParamLimits

0x0bf6,	// (0x0001773b) listscroll_cale_day_pane_t1

0x118a,	// (0x00017ccf) scroll_pane_cp09_ParamLimits

0xa4e1,	// (0x00021026) main_mup_eq_pane_t1_ParamLimits

0xa4e1,	// (0x00021026) main_mup_eq_pane_t1

0xa4fb,	// (0x00021040) main_mup_eq_pane_t2_ParamLimits

0xa4fb,	// (0x00021040) main_mup_eq_pane_t2

0xa513,	// (0x00021058) main_mup_eq_pane_t3_ParamLimits

0xa513,	// (0x00021058) main_mup_eq_pane_t3

0xa52b,	// (0x00021070) main_mup_eq_pane_t4_ParamLimits

0xa52b,	// (0x00021070) main_mup_eq_pane_t4

0xa543,	// (0x00021088) main_mup_eq_pane_t5_ParamLimits

0xa543,	// (0x00021088) main_mup_eq_pane_t5

0xa55b,	// (0x000210a0) main_mup_eq_pane_t6_ParamLimits

0xa55b,	// (0x000210a0) main_mup_eq_pane_t6

0xa56f,	// (0x000210b4) main_mup_eq_pane_t7_ParamLimits

0xa56f,	// (0x000210b4) main_mup_eq_pane_t7

0xa583,	// (0x000210c8) main_mup_eq_pane_t8_ParamLimits

0xa583,	// (0x000210c8) main_mup_eq_pane_t8

0xa599,	// (0x000210de) main_mup_eq_pane_t9_ParamLimits

0xa599,	// (0x000210de) main_mup_eq_pane_t9

0xa5b1,	// (0x000210f6) main_mup_eq_pane_t10_ParamLimits

0xa5b1,	// (0x000210f6) main_mup_eq_pane_t10

0x0009,

0xf479,	// (0x00025fbe) main_mup_eq_pane_t_ParamLimits

0xf479,	// (0x00025fbe) main_mup_eq_pane_t

0xa66e,	// (0x000211b3) mup_equalizer_pane_cp5_ParamLimits

0xa684,	// (0x000211c9) mup_equalizer_pane_cp6_ParamLimits

0xa69c,	// (0x000211e1) mup_equalizer_pane_cp7_ParamLimits

0x0200,	// (0x00016d45) main_gallery_pane

0x2d0d,	// (0x00019852) smil2_volume_pane

0x2d28,	// (0x0001986d) smil_status_volume_pane_g1_ParamLimits

0x2d15,	// (0x0001985a) smil_status_volume_pane_g2_ParamLimits

0x721f,	// (0x0001dd64) smil_status_volume_pane_g3_ParamLimits

0xf62f,	// (0x00026174) smil_status_volume_pane_g_ParamLimits

0x2f39,	// (0x00019a7e) bg_popup_window_pane_cp07_ParamLimits

0x2f47,	// (0x00019a8c) blid_firmament_pane

0xb574,	// (0x000220b9) aid_size_cell_gallery_ParamLimits

0xb574,	// (0x000220b9) aid_size_cell_gallery

0xb582,	// (0x000220c7) grid_gallery_pane_ParamLimits

0xb582,	// (0x000220c7) grid_gallery_pane

0xb592,	// (0x000220d7) cell_gallery_pane_ParamLimits

0xb592,	// (0x000220d7) cell_gallery_pane

0x306c,	// (0x00019bb1) bg_cell_gallery_focus_pane_ParamLimits

0x306c,	// (0x00019bb1) bg_cell_gallery_focus_pane

0x307e,	// (0x00019bc3) cell_gallery_pane_g1_ParamLimits

0x307e,	// (0x00019bc3) cell_gallery_pane_g1

0xb5e0,	// (0x00022125) cell_gallery_pane_g2_ParamLimits

0xb5e0,	// (0x00022125) cell_gallery_pane_g2

0xb5ed,	// (0x00022132) cell_gallery_pane_g3_ParamLimits

0xb5ed,	// (0x00022132) cell_gallery_pane_g3

0x308a,	// (0x00019bcf) cell_gallery_pane_g4_ParamLimits

0x308a,	// (0x00019bcf) cell_gallery_pane_g4

0x0003,

0xf6dd,	// (0x00026222) cell_gallery_pane_g_ParamLimits

0xf6dd,	// (0x00026222) cell_gallery_pane_g

0x3096,	// (0x00019bdb) bg_cell_gallery_focus_pane_g1

0x309e,	// (0x00019be3) bg_cell_gallery_focus_pane_g2

0x30a6,	// (0x00019beb) bg_cell_gallery_focus_pane_g3

0x30ae,	// (0x00019bf3) bg_cell_gallery_focus_pane_g4

0x30b6,	// (0x00019bfb) bg_cell_gallery_focus_pane_g5

0x30be,	// (0x00019c03) bg_cell_gallery_focus_pane_g6

0x30c6,	// (0x00019c0b) bg_cell_gallery_focus_pane_g7

0x30ce,	// (0x00019c13) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6e6,	// (0x0002622b) bg_cell_gallery_focus_pane_g

0x30d6,	// (0x00019c1b) aid_firma_cardinal

0x30ea,	// (0x00019c2f) blid_firmament_pane_t1

0x3101,	// (0x00019c46) blid_firmament_pane_t2

0x3118,	// (0x00019c5d) blid_firmament_pane_t3

0x312f,	// (0x00019c74) blid_firmament_pane_t4

0x0003,

0xf6f7,	// (0x0002623c) blid_firmament_pane_t

0x3146,	// (0x00019c8b) blid_sat_info_pane

0x3156,	// (0x00019c9b) blid_sat_info_pane_g1

0x3156,	// (0x00019c9b) blid_sat_info_pane_g2

0x0001,

0xf700,	// (0x00026245) blid_sat_info_pane_g

0x3160,	// (0x00019ca5) blid_sat_info_pane_t1

0x316e,	// (0x00019cb3) smil2_volume_content_pane

0x3177,	// (0x00019cbc) smil2_volume_pane_g1

0x317f,	// (0x00019cc4) smil2_volume_content_pane_g1

0x3188,	// (0x00019ccd) smil2_volume_content_pane_g2

0x3191,	// (0x00019cd6) smil2_volume_content_pane_g3

0x319a,	// (0x00019cdf) smil2_volume_content_pane_g4

0x31a3,	// (0x00019ce8) smil2_volume_content_pane_g5

0x31ac,	// (0x00019cf1) smil2_volume_content_pane_g6

0x31b5,	// (0x00019cfa) smil2_volume_content_pane_g7

0x31be,	// (0x00019d03) smil2_volume_content_pane_g8

0x31c7,	// (0x00019d0c) smil2_volume_content_pane_g9

0x31d0,	// (0x00019d15) smil2_volume_content_pane_g10

0x0009,

0xf705,	// (0x0002624a) smil2_volume_content_pane_g

0x8a88,	// (0x0001f5cd) cale_week_day_heading_pane_t1_ParamLimits

0x8a9c,	// (0x0001f5e1) cale_week_day_heading_pane_t2_ParamLimits

0x8ab0,	// (0x0001f5f5) cale_week_day_heading_pane_t3_ParamLimits

0x8ac4,	// (0x0001f609) cale_week_day_heading_pane_t4_ParamLimits

0x8ad8,	// (0x0001f61d) cale_week_day_heading_pane_t5_ParamLimits

0x8aec,	// (0x0001f631) cale_week_day_heading_pane_t6_ParamLimits

0x8b00,	// (0x0001f645) cale_week_day_heading_pane_t7_ParamLimits

0xf1f1,	// (0x00025d36) cale_week_day_heading_pane_t_ParamLimits

0x0c08,	// (0x0001774d) bg_cale_side_pane_ParamLimits

0x6f90,	// (0x0001dad5) cale_week_time_pane_t1_ParamLimits

0x6fa8,	// (0x0001daed) cale_week_time_pane_t2_ParamLimits

0x6fc0,	// (0x0001db05) cale_week_time_pane_t3_ParamLimits

0x6fd8,	// (0x0001db1d) cale_week_time_pane_t4_ParamLimits

0x6ff0,	// (0x0001db35) cale_week_time_pane_t5_ParamLimits

0x7008,	// (0x0001db4d) cale_week_time_pane_t6_ParamLimits

0x7028,	// (0x0001db6d) cale_week_time_pane_t7_ParamLimits

0x7048,	// (0x0001db8d) cale_week_time_pane_t8_ParamLimits

0xf200,	// (0x00025d45) cale_week_time_pane_t_ParamLimits

0x8b14,	// (0x0001f659) cell_cale_week_pane_g2_ParamLimits

0x0c08,	// (0x0001774d) bg_cale_side_pane_cp01_ParamLimits

0x9b40,	// (0x00020685) cale_month_week_pane_t1_ParamLimits

0x9b57,	// (0x0002069c) cale_month_week_pane_t2_ParamLimits

0x9b6e,	// (0x000206b3) cale_month_week_pane_t3_ParamLimits

0x9b85,	// (0x000206ca) cale_month_week_pane_t4_ParamLimits

0x9b9c,	// (0x000206e1) cale_month_week_pane_t5_ParamLimits

0x9bbb,	// (0x00020700) cale_month_week_pane_t6_ParamLimits

0xf2d9,	// (0x00025e1e) cale_month_week_pane_t_ParamLimits

0x70e2,	// (0x0001dc27) cell_cale_month_pane_g1_ParamLimits

0x0200,	// (0x00016d45) main_cale_event_viewer_pane

0x0200,	// (0x00016d45) listscroll_cale_event_viewer_pane

0x31d9,	// (0x00019d1e) list_cale_ev_pane

0x31e1,	// (0x00019d26) scroll_pane_cp023

0x31ed,	// (0x00019d32) field_cale_ev_pane_ParamLimits

0x31ed,	// (0x00019d32) field_cale_ev_pane

0x3207,	// (0x00019d4c) field_cale_ev_content_pane_ParamLimits

0x3207,	// (0x00019d4c) field_cale_ev_content_pane

0x3213,	// (0x00019d58) field_cale_ev_pane_g1_ParamLimits

0x3213,	// (0x00019d58) field_cale_ev_pane_g1

0x321f,	// (0x00019d64) field_cale_ev_pane_g2_ParamLimits

0x321f,	// (0x00019d64) field_cale_ev_pane_g2

0x3237,	// (0x00019d7c) field_cale_ev_pane_g3_ParamLimits

0x3237,	// (0x00019d7c) field_cale_ev_pane_g3

0x0002,

0xf71a,	// (0x0002625f) field_cale_ev_pane_g_ParamLimits

0xf71a,	// (0x0002625f) field_cale_ev_pane_g

0x324f,	// (0x00019d94) field_cale_ev_pane_t1_ParamLimits

0x324f,	// (0x00019d94) field_cale_ev_pane_t1

0x3266,	// (0x00019dab) field_cale_ev_content_pane_t1_ParamLimits

0x3266,	// (0x00019dab) field_cale_ev_content_pane_t1

0x1938,	// (0x0001847d) bg_button_pane_cp01

0x0a1b,	// (0x00017560) listscroll_cale_week_pane_ParamLimits

0x885d,	// (0x0001f3a2) popup_toolbar_window_cp01

0x0bf6,	// (0x0001773b) listscroll_cale_week_pane_t1_ParamLimits

0x0a1b,	// (0x00017560) listscroll_cale_day_pane_ParamLimits

0x885d,	// (0x0001f3a2) popup_toolbar_window_cp02

0x0bf6,	// (0x0001773b) listscroll_cale_day_pane_t1_ParamLimits

0x0a1b,	// (0x00017560) main_cale_month_pane_ParamLimits

0xb019,	// (0x00021b5e) popup_toolbar_window_cp03_ParamLimits

0xb019,	// (0x00021b5e) popup_toolbar_window_cp03

0xa997,	// (0x000214dc) main_image_pane_g2_ParamLimits

0xa997,	// (0x000214dc) main_image_pane_g2

0xa9a3,	// (0x000214e8) main_image_pane_g3_ParamLimits

0xa9a3,	// (0x000214e8) main_image_pane_g3

0x0002,

0xf50b,	// (0x00026050) main_image_pane_g_ParamLimits

0xf50b,	// (0x00026050) main_image_pane_g

0x1aca,	// (0x0001860f) main_image_pane_t1_ParamLimits

0xa9af,	// (0x000214f4) main_image_pane_t2_ParamLimits

0xa9af,	// (0x000214f4) main_image_pane_t2

0xa9c1,	// (0x00021506) main_image_pane_t3_ParamLimits

0xa9c1,	// (0x00021506) main_image_pane_t3

0xa9d3,	// (0x00021518) main_image_pane_t4_ParamLimits

0xa9d3,	// (0x00021518) main_image_pane_t4

0x0003,

0xf512,	// (0x00026057) main_image_pane_t_ParamLimits

0xf512,	// (0x00026057) main_image_pane_t

0xa9e5,	// (0x0002152a) popup_image_details_window_cp01

0xa9ef,	// (0x00021534) popup_toobar_trans_pane_cp01_ParamLimits

0xa9ef,	// (0x00021534) popup_toobar_trans_pane_cp01

0xaf9e,	// (0x00021ae3) popup_image_details_window_ParamLimits

0xaf9e,	// (0x00021ae3) popup_image_details_window

0x2c6e,	// (0x000197b3) popup_image_focus_window

0x7241,	// (0x0001dd86) camera2_autofocus_pane_ParamLimits

0x7241,	// (0x0001dd86) camera2_autofocus_pane

0x0200,	// (0x00016d45) bg_popup_sub_pane_cp06

0x3283,	// (0x00019dc8) popup_image_focus_window_g1

0x328b,	// (0x00019dd0) popup_image_focus_window_g2

0x3293,	// (0x00019dd8) popup_image_focus_window_g3

0x329b,	// (0x00019de0) popup_image_focus_window_g4

0x0003,

0xf721,	// (0x00026266) popup_image_focus_window_g

0x32a3,	// (0x00019de8) popup_image_focus_window_t1

0x32b1,	// (0x00019df6) popup_image_focus_window_t2

0x32c1,	// (0x00019e06) popup_image_focus_window_t3

0x0002,

0xf72a,	// (0x0002626f) popup_image_focus_window_t

0x32cf,	// (0x00019e14) camera2_autofocus_pane_g1

0x0270,	// (0x00016db5) bg_tb_trans_pane_cp01

0x32dd,	// (0x00019e22) popup_image_details_window_g1

0x32f0,	// (0x00019e35) popup_image_details_window_g2

0x0002,

0xf73c,	// (0x00026281) popup_image_details_window_g

0x3319,	// (0x00019e5e) popup_image_details_window_t1

0x332b,	// (0x00019e70) popup_image_details_window_t2

0x3344,	// (0x00019e89) popup_image_details_window_t3

0x3358,	// (0x00019e9d) popup_image_details_window_t4

0x3373,	// (0x00019eb8) popup_image_details_window_t5

0x0004,

0xf743,	// (0x00026288) popup_image_details_window_t

0x09ed,	// (0x00017532) bg_calc_paper_pane_ParamLimits

0x6e5b,	// (0x0001d9a0) grid_highlight_pane_cp013

0x6e65,	// (0x0001d9aa) list_calc_pane_ParamLimits

0x6e77,	// (0x0001d9bc) scroll_pane_cp024

0x0a1b,	// (0x00017560) bg_calc_display_pane_ParamLimits

0x6e7f,	// (0x0001d9c4) calc_display_pane_t1_ParamLimits

0x6e94,	// (0x0001d9d9) calc_display_pane_t2_ParamLimits

0x6ea9,	// (0x0001d9ee) calc_display_pane_t3_ParamLimits

0xf173,	// (0x00025cb8) calc_display_pane_t_ParamLimits

0x6f12,	// (0x0001da57) cell_calc_pane_g2

0x0001,

0xf190,	// (0x00025cd5) cell_calc_pane_g

0x6f1b,	// (0x0001da60) cell_calc_pane_t1

0x0a9e,	// (0x000175e3) grid_highlight_pane_cp02_ParamLimits

0x0ab4,	// (0x000175f9) toolbar_button_pane_cp01_ParamLimits

0x0ab4,	// (0x000175f9) toolbar_button_pane_cp01

0x1b0f,	// (0x00018654) temp_image_control_pane_ParamLimits

0x1b0f,	// (0x00018654) temp_image_control_pane

0x0270,	// (0x00016db5) main_mp3_pane

0x338d,	// (0x00019ed2) temp_image_control_pane_g1_ParamLimits

0x338d,	// (0x00019ed2) temp_image_control_pane_g1

0x339b,	// (0x00019ee0) temp_image_control_pane_g2_ParamLimits

0x339b,	// (0x00019ee0) temp_image_control_pane_g2

0x33ad,	// (0x00019ef2) temp_image_control_pane_g3_ParamLimits

0x33ad,	// (0x00019ef2) temp_image_control_pane_g3

0xb62a,	// (0x0002216f) temp_image_control_pane_g4_ParamLimits

0xb62a,	// (0x0002216f) temp_image_control_pane_g4

0x0003,

0xf74e,	// (0x00026293) temp_image_control_pane_g_ParamLimits

0xf74e,	// (0x00026293) temp_image_control_pane_g

0x338d,	// (0x00019ed2) main_mp3_pane_g1

0xb63b,	// (0x00022180) main_mp3_pane_g2

0x0007,

0xf757,	// (0x0002629c) main_mp3_pane_g

0x33f0,	// (0x00019f35) main_mp3_pane_t1

0x0cf1,	// (0x00017836) main_camera_pane_g8_ParamLimits

0x0cf1,	// (0x00017836) main_camera_pane_g8

0x8d22,	// (0x0001f867) main_video_pane_g7_ParamLimits

0x8d22,	// (0x0001f867) main_video_pane_g7

0x7389,	// (0x0001dece) main_camera2_pane_t7_ParamLimits

0x7389,	// (0x0001dece) main_camera2_pane_t7

0x0ef4,	// (0x00017a39) scroll_pane_cp025_ParamLimits

0x0ef4,	// (0x00017a39) scroll_pane_cp025

0x0f08,	// (0x00017a4d) scroll_pane_cp026_ParamLimits

0x0f08,	// (0x00017a4d) scroll_pane_cp026

0x0f17,	// (0x00017a5c) wml_content_pane_ParamLimits

0x0200,	// (0x00016d45) main_touch_calib_pane

0xb6df,	// (0x00022224) main_touch_calib_pane_g1

0xb6eb,	// (0x00022230) main_touch_calib_pane_g2

0xb6f7,	// (0x0002223c) main_touch_calib_pane_g3

0xb703,	// (0x00022248) main_touch_calib_pane_g4

0x0003,

0xf775,	// (0x000262ba) main_touch_calib_pane_g

0xb70f,	// (0x00022254) main_touch_calib_pane_t1

0xb726,	// (0x0002226b) main_touch_calib_pane_t2

0x0004,

0xf77e,	// (0x000262c3) main_touch_calib_pane_t

0x16f0,	// (0x00018235) mup_progress_pane_cp02

0x170f,	// (0x00018254) navi_pane_g1

0x1771,	// (0x000182b6) navi_pane_mp_t3

0x0270,	// (0x00016db5) main_mp3_pane_ParamLimits

0xb057,	// (0x00021b9c) navi_pane_ParamLimits

0x338d,	// (0x00019ed2) main_mp3_pane_g1_ParamLimits

0xb63b,	// (0x00022180) main_mp3_pane_g2_ParamLimits

0xb647,	// (0x0002218c) main_mp3_pane_g3_ParamLimits

0xb647,	// (0x0002218c) main_mp3_pane_g3

0xb653,	// (0x00022198) main_mp3_pane_g4_ParamLimits

0xb653,	// (0x00022198) main_mp3_pane_g4

0x33bd,	// (0x00019f02) main_mp3_pane_g5_ParamLimits

0x33bd,	// (0x00019f02) main_mp3_pane_g5

0x33cb,	// (0x00019f10) main_mp3_pane_g6_ParamLimits

0x33cb,	// (0x00019f10) main_mp3_pane_g6

0x33d8,	// (0x00019f1d) main_mp3_pane_g7_ParamLimits

0x33d8,	// (0x00019f1d) main_mp3_pane_g7

0x33e4,	// (0x00019f29) main_mp3_pane_g8_ParamLimits

0x33e4,	// (0x00019f29) main_mp3_pane_g8

0xf757,	// (0x0002629c) main_mp3_pane_g_ParamLimits

0xb65f,	// (0x000221a4) main_mp3_pane_t2

0xb66f,	// (0x000221b4) main_mp3_pane_t3

0x33fe,	// (0x00019f43) main_mp3_pane_t4

0x340c,	// (0x00019f51) main_mp3_pane_t5

0x0005,

0xf768,	// (0x000262ad) main_mp3_pane_t

0x341a,	// (0x00019f5f) mup_progress_pane_cp01

0x021e,	// (0x00016d63) aid_zoom_text_secondary2

0x31d9,	// (0x00019d1e) list_cale_ev2_pane

0x31e1,	// (0x00019d26) scroll_pane_cp023_ParamLimits

0xb779,	// (0x000222be) field_cale_ev2_pane_ParamLimits

0xb779,	// (0x000222be) field_cale_ev2_pane

0xb7ad,	// (0x000222f2) field_cale_ev2_pane_g1_ParamLimits

0xb7ad,	// (0x000222f2) field_cale_ev2_pane_g1

0xb7b9,	// (0x000222fe) field_cale_ev2_pane_g2_ParamLimits

0xb7b9,	// (0x000222fe) field_cale_ev2_pane_g2

0xb7d1,	// (0x00022316) field_cale_ev2_pane_g3_ParamLimits

0xb7d1,	// (0x00022316) field_cale_ev2_pane_g3

0x0003,

0xf789,	// (0x000262ce) field_cale_ev2_pane_g_ParamLimits

0xf789,	// (0x000262ce) field_cale_ev2_pane_g

0x342e,	// (0x00019f73) field_cale_ev2_pane_t1_ParamLimits

0x342e,	// (0x00019f73) field_cale_ev2_pane_t1

0x3445,	// (0x00019f8a) field_cale_ev2_pane_t2_ParamLimits

0x3445,	// (0x00019f8a) field_cale_ev2_pane_t2

0x0001,

0xf792,	// (0x000262d7) field_cale_ev2_pane_t_ParamLimits

0xf792,	// (0x000262d7) field_cale_ev2_pane_t

0xa86e,	// (0x000213b3) main_postcard_pane_g5_ParamLimits

0xa86e,	// (0x000213b3) main_postcard_pane_g5

0xa87c,	// (0x000213c1) main_postcard_pane_g6_ParamLimits

0xa87c,	// (0x000213c1) main_postcard_pane_g6

0x8b62,	// (0x0001f6a7) camera2_autofocus_pane_cp_ParamLimits

0x8b62,	// (0x0001f6a7) camera2_autofocus_pane_cp

0x0270,	// (0x00016db5) main_mup3_pane

0xb809,	// (0x0002234e) main_mup3_pane_g1_ParamLimits

0xb809,	// (0x0002234e) main_mup3_pane_g1

0xb82a,	// (0x0002236f) main_mup3_pane_g2_ParamLimits

0xb82a,	// (0x0002236f) main_mup3_pane_g2

0xb8a5,	// (0x000223ea) main_mup3_pane_g3_ParamLimits

0xb8a5,	// (0x000223ea) main_mup3_pane_g3

0xb8e4,	// (0x00022429) main_mup3_pane_g4_ParamLimits

0xb8e4,	// (0x00022429) main_mup3_pane_g4

0xb923,	// (0x00022468) main_mup3_pane_g5_ParamLimits

0xb923,	// (0x00022468) main_mup3_pane_g5

0xb964,	// (0x000224a9) main_mup3_pane_g6_ParamLimits

0xb964,	// (0x000224a9) main_mup3_pane_g6

0x345a,	// (0x00019f9f) main_mup3_pane_g7_ParamLimits

0x345a,	// (0x00019f9f) main_mup3_pane_g7

0x0007,

0xf7a2,	// (0x000262e7) main_mup3_pane_g_ParamLimits

0xf7a2,	// (0x000262e7) main_mup3_pane_g

0xb9d6,	// (0x0002251b) main_mup3_pane_t1_ParamLimits

0xb9d6,	// (0x0002251b) main_mup3_pane_t1

0xba45,	// (0x0002258a) main_mup3_pane_t2_ParamLimits

0xba45,	// (0x0002258a) main_mup3_pane_t2

0xbb0e,	// (0x00022653) main_mup3_pane_t4_ParamLimits

0xbb0e,	// (0x00022653) main_mup3_pane_t4

0xbb60,	// (0x000226a5) main_mup3_pane_t5_ParamLimits

0xbb60,	// (0x000226a5) main_mup3_pane_t5

0xbc08,	// (0x0002274d) main_mup3_pane_t6_ParamLimits

0xbc08,	// (0x0002274d) main_mup3_pane_t6

0x0005,

0xf7b3,	// (0x000262f8) main_mup3_pane_t_ParamLimits

0xf7b3,	// (0x000262f8) main_mup3_pane_t

0xbcb0,	// (0x000227f5) mup3_progress_pane_ParamLimits

0xbcb0,	// (0x000227f5) mup3_progress_pane

0xbd15,	// (0x0002285a) popup_mup3_control_window_ParamLimits

0xbd15,	// (0x0002285a) popup_mup3_control_window

0x3468,	// (0x00019fad) popup_mup3_text_window

0xbd2e,	// (0x00022873) mup3_progress_pane_t1

0xbd45,	// (0x0002288a) mup3_progress_pane_t2

0x3470,	// (0x00019fb5) mup3_progress_pane_t3

0x0002,

0xf7c0,	// (0x00026305) mup3_progress_pane_t

0x3487,	// (0x00019fcc) mup_progress_pane_cp03

0x0200,	// (0x00016d45) bg_tb_trans_pane_cp04

0xbd5c,	// (0x000228a1) mup3_volume_pane

0xbd64,	// (0x000228a9) popup_mup3_control_window_g1

0xbd6d,	// (0x000228b2) mup3_volume_pane_g1

0xbd76,	// (0x000228bb) mup3_volume_pane_g2

0xbd7f,	// (0x000228c4) mup3_volume_pane_g3

0x0002,

0xf7c7,	// (0x0002630c) mup3_volume_pane_g

0x0200,	// (0x00016d45) bg_tb_trans_pane_cp03

0x3497,	// (0x00019fdc) popup_mup3_text_window_g1

0x349f,	// (0x00019fe4) popup_mup3_text_window_t1

0x0a75,	// (0x000175ba) list_calc_item_pane_g1_ParamLimits

0x2e63,	// (0x000199a8) mup_volume_pane_cp_g1

0xb73d,	// (0x00022282) main_touch_calib_pane_t3

0xb751,	// (0x00022296) main_touch_calib_pane_t4

0xb765,	// (0x000222aa) main_touch_calib_pane_t5

0x020a,	// (0x00016d4f) aid_cell_size_toolbar2

0x0212,	// (0x00016d57) aid_popup3_width_pane

0x021e,	// (0x00016d63) aid_zoom_text_msg_primary

0x70cc,	// (0x0001dc11) vorec_t7

0x0a39,	// (0x0001757e) bg_calc_paper_pane_g1_ParamLimits

0x0a51,	// (0x00017596) bg_calc_paper_pane_g2_ParamLimits

0x0a45,	// (0x0001758a) bg_calc_paper_pane_g3_ParamLimits

0x0a69,	// (0x000175ae) bg_calc_paper_pane_g4_ParamLimits

0x0a5d,	// (0x000175a2) bg_calc_paper_pane_g5_ParamLimits

0x8708,	// (0x0001f24d) bg_calc_paper_pane_g6_ParamLimits

0x8719,	// (0x0001f25e) bg_calc_paper_pane_g7_ParamLimits

0x872a,	// (0x0001f26f) bg_calc_paper_pane_g8_ParamLimits

0xf17a,	// (0x00025cbf) bg_calc_paper_pane_g_ParamLimits

0x873b,	// (0x0001f280) calc_bg_paper_pane_g9_ParamLimits

0x8c4b,	// (0x0001f790) image_qvga_pane_ParamLimits

0x8c4b,	// (0x0001f790) image_qvga_pane

0x08ea,	// (0x0001742f) bg_popup_sub_pane_cp04_ParamLimits

0x1a46,	// (0x0001858b) popup_mup_playback_window_g1_ParamLimits

0x1a52,	// (0x00018597) popup_mup_playback_window_t1_ParamLimits

0x1a67,	// (0x000185ac) popup_mup_playback_window_t2_ParamLimits

0xf506,	// (0x0002604b) popup_mup_playback_window_t_ParamLimits

0xb2a9,	// (0x00021dee) main_mup2_pane_g3_ParamLimits

0xb2a9,	// (0x00021dee) main_mup2_pane_g3

0x8f61,	// (0x0001faa6) popup_toolbar_window_cp04

0x1e5c,	// (0x000189a1) popup_call2_audio_second_window_g3_ParamLimits

0x1e5c,	// (0x000189a1) popup_call2_audio_second_window_g3

0x2266,	// (0x00018dab) popup_call2_audio_first_window_g4_ParamLimits

0x2266,	// (0x00018dab) popup_call2_audio_first_window_g4

0x28e5,	// (0x0001942a) popup_call2_audio_in_window_g4_ParamLimits

0x28e5,	// (0x0001942a) popup_call2_audio_in_window_g4

0xa98a,	// (0x000214cf) aid_area_sk_bg_cut_ParamLimits

0xa98a,	// (0x000214cf) aid_area_sk_bg_cut

0x1a7c,	// (0x000185c1) aid_area_sk_bg_cut_2_ParamLimits

0x1a7c,	// (0x000185c1) aid_area_sk_bg_cut_2

0xb5d0,	// (0x00022115) aid_placing_details_win

0xb5d8,	// (0x0002211d) aid_placing_details_win_2

0x32cf,	// (0x00019e14) camera2_autofocus_pane_g1_ParamLimits

0x840d,	// (0x0001ef52) popup_fixed_preview_cale_window_ParamLimits

0x840d,	// (0x0001ef52) popup_fixed_preview_cale_window

0x17db,	// (0x00018320) navi_slider_pane_g3

0x17d2,	// (0x00018317) navi_slider_pane_g4

0x17c9,	// (0x0001830e) navi_slider_pane_g5

0x17db,	// (0x00018320) navi_slider_pane_g6

0x71a4,	// (0x0001dce9) navi_slider_pane_g7

0x1905,	// (0x0001844a) mup_scale_pane_g3

0x190e,	// (0x00018453) mup_scale_pane_g4

0x1917,	// (0x0001845c) mup_scale_pane_g5

0xa6b4,	// (0x000211f9) mup_scale_pane_g6

0xa6bd,	// (0x00021202) mup_scale_pane_g7

0x17db,	// (0x00018320) cams2_slider_pane_g3

0x2f18,	// (0x00019a5d) cams2_slider_pane_g4

0x74fb,	// (0x0001e040) cams2_slider_pane_g5

0x17db,	// (0x00018320) cams2_slider_pane_g6

0x7503,	// (0x0001e048) cams2_slider_pane_g7

0x3156,	// (0x00019c9b) camera2_autofocus_pane_cp_g1

0x34ad,	// (0x00019ff2) bg_popup_preview_window_pane_cp02_ParamLimits

0x34ad,	// (0x00019ff2) bg_popup_preview_window_pane_cp02

0x34b9,	// (0x00019ffe) list_fp_cale_pane_ParamLimits

0x34b9,	// (0x00019ffe) list_fp_cale_pane

0x34c5,	// (0x0001a00a) popup_fixed_preview_cale_window_t1_ParamLimits

0x34c5,	// (0x0001a00a) popup_fixed_preview_cale_window_t1

0xbd88,	// (0x000228cd) popup_fixed_preview_cale_window_t2_ParamLimits

0xbd88,	// (0x000228cd) popup_fixed_preview_cale_window_t2

0xbd9d,	// (0x000228e2) popup_fixed_preview_cale_window_t3_ParamLimits

0xbd9d,	// (0x000228e2) popup_fixed_preview_cale_window_t3

0x0002,

0xf7ce,	// (0x00026313) popup_fixed_preview_cale_window_t_ParamLimits

0xf7ce,	// (0x00026313) popup_fixed_preview_cale_window_t

0xbdb2,	// (0x000228f7) list_single_fp_cale_pane_ParamLimits

0xbdb2,	// (0x000228f7) list_single_fp_cale_pane

0x34e3,	// (0x0001a028) list_single_fp_cale_pane_g1_ParamLimits

0x34e3,	// (0x0001a028) list_single_fp_cale_pane_g1

0x34ef,	// (0x0001a034) list_single_fp_cale_pane_g2_ParamLimits

0x34ef,	// (0x0001a034) list_single_fp_cale_pane_g2

0x0002,

0xf7d5,	// (0x0002631a) list_single_fp_cale_pane_g_ParamLimits

0xf7d5,	// (0x0002631a) list_single_fp_cale_pane_g

0x3508,	// (0x0001a04d) list_single_fp_cale_pane_t1_ParamLimits

0x3508,	// (0x0001a04d) list_single_fp_cale_pane_t1

0x351a,	// (0x0001a05f) list_single_fp_cale_pane_t2_ParamLimits

0x351a,	// (0x0001a05f) list_single_fp_cale_pane_t2

0x0001,

0xf7dc,	// (0x00026321) list_single_fp_cale_pane_t_ParamLimits

0xf7dc,	// (0x00026321) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x0200,	// (0x00016d45) main_dialer_pane

0xbdc6,	// (0x0002290b) aid_cell_size_keypad

0xbdd0,	// (0x00022915) dialer_ne_pane

0xbdda,	// (0x0002291f) grid_dialer_command_1_pane

0xbde2,	// (0x00022927) grid_dialer_command_2_pane

0xbdea,	// (0x0002292f) grid_dialer_keypad_pane

0xbdfe,	// (0x00022943) bg_popup_call_pane_cp06_ParamLimits

0xbdfe,	// (0x00022943) bg_popup_call_pane_cp06

0xbe0a,	// (0x0002294f) dialer_ne_clear_pane_ParamLimits

0xbe0a,	// (0x0002294f) dialer_ne_clear_pane

0x354d,	// (0x0001a092) dialer_ne_pane_g1

0x3555,	// (0x0001a09a) dialer_ne_pane_t1_ParamLimits

0x3555,	// (0x0001a09a) dialer_ne_pane_t1

0xbe16,	// (0x0002295b) dialer_ne_pane_t2_ParamLimits

0xbe16,	// (0x0002295b) dialer_ne_pane_t2

0xbe33,	// (0x00022978) dialer_ne_pane_t3_ParamLimits

0xbe33,	// (0x00022978) dialer_ne_pane_t3

0x0002,

0xf7e1,	// (0x00026326) dialer_ne_pane_t_ParamLimits

0xf7e1,	// (0x00026326) dialer_ne_pane_t

0xbe57,	// (0x0002299c) dialer_ne_pane_t3_copy1_ParamLimits

0xbe57,	// (0x0002299c) dialer_ne_pane_t3_copy1

0xbe7b,	// (0x000229c0) cell_dialer_keypad_pane_ParamLimits

0xbe7b,	// (0x000229c0) cell_dialer_keypad_pane

0xbe92,	// (0x000229d7) cell_dialer_command_1_pane_ParamLimits

0xbe92,	// (0x000229d7) cell_dialer_command_1_pane

0xbea8,	// (0x000229ed) cell_dialer_command_2_pane_ParamLimits

0xbea8,	// (0x000229ed) cell_dialer_command_2_pane

0x3567,	// (0x0001a0ac) bg_button_pane_cp02_ParamLimits

0x3567,	// (0x0001a0ac) bg_button_pane_cp02

0xbeb7,	// (0x000229fc) cell_dialer_keypad_pane_g1_ParamLimits

0xbeb7,	// (0x000229fc) cell_dialer_keypad_pane_g1

0x3567,	// (0x0001a0ac) bg_button_pane_cp03_ParamLimits

0x3567,	// (0x0001a0ac) bg_button_pane_cp03

0xbecc,	// (0x00022a11) cell_dialer_command_1_pane_g1_ParamLimits

0xbecc,	// (0x00022a11) cell_dialer_command_1_pane_g1

0x3573,	// (0x0001a0b8) bg_button_pane_cp04

0xbedf,	// (0x00022a24) cell_dialer_command_2_pane_g1

0x17af,	// (0x000182f4) bg_button_pane_cp06

0x357b,	// (0x0001a0c0) dialer_ne_clear_pane_g1

0xa1ca,	// (0x00020d0f) navi_pane_g2

0xa1f8,	// (0x00020d3d) navi_pane_g3

0x0002,

0xf409,	// (0x00025f4e) navi_pane_g

0xa223,	// (0x00020d68) navi_pane_mv_g2

0xa24a,	// (0x00020d8f) navi_pane_mv_g5

0xa252,	// (0x00020d97) navi_pane_mv_t1

0x0a1b,	// (0x00017560) main_clock2_pane

0xbf0d,	// (0x00022a52) main_clock2_list_pane_ParamLimits

0xbf0d,	// (0x00022a52) main_clock2_list_pane

0xbf35,	// (0x00022a7a) main_clock2_pane_t1_ParamLimits

0xbf35,	// (0x00022a7a) main_clock2_pane_t1

0xbf65,	// (0x00022aaa) main_clock2_pane_t2_ParamLimits

0xbf65,	// (0x00022aaa) main_clock2_pane_t2

0x0004,

0xf7e8,	// (0x0002632d) main_clock2_pane_t_ParamLimits

0xf7e8,	// (0x0002632d) main_clock2_pane_t

0xbfcc,	// (0x00022b11) popup_clock_analogue_window_cp03_ParamLimits

0xbfcc,	// (0x00022b11) popup_clock_analogue_window_cp03

0xbfec,	// (0x00022b31) popup_clock_digital_window_cp02_ParamLimits

0xbfec,	// (0x00022b31) popup_clock_digital_window_cp02

0xc061,	// (0x00022ba6) main_clock2_list_single_pane_ParamLimits

0xc061,	// (0x00022ba6) main_clock2_list_single_pane

0x17af,	// (0x000182f4) list_highlight_pane_cp05

0x3583,	// (0x0001a0c8) main_clock2_list_single_pane_t1

0x8f61,	// (0x0001faa6) popup_toolbar_window_cp04_ParamLimits

0xb5fa,	// (0x0002213f) camera2_autofocus_pane_g2_ParamLimits

0xb5fa,	// (0x0002213f) camera2_autofocus_pane_g2

0xb606,	// (0x0002214b) camera2_autofocus_pane_g3_ParamLimits

0xb606,	// (0x0002214b) camera2_autofocus_pane_g3

0xb612,	// (0x00022157) camera2_autofocus_pane_g4_ParamLimits

0xb612,	// (0x00022157) camera2_autofocus_pane_g4

0xb61e,	// (0x00022163) camera2_autofocus_pane_g5_ParamLimits

0xb61e,	// (0x00022163) camera2_autofocus_pane_g5

0x0004,

0xf731,	// (0x00026276) camera2_autofocus_pane_g_ParamLimits

0xf731,	// (0x00026276) camera2_autofocus_pane_g

0xb7e9,	// (0x0002232e) camera2_autofocus_pane_cp_g2

0xb7f1,	// (0x00022336) camera2_autofocus_pane_cp_g3

0xb7f9,	// (0x0002233e) camera2_autofocus_pane_cp_g4

0xb801,	// (0x00022346) camera2_autofocus_pane_cp_g5

0x0004,

0xf797,	// (0x000262dc) camera2_autofocus_pane_cp_g

0xbdf6,	// (0x0002293b) popup_dialer_spcha_window

0x0200,	// (0x00016d45) bg_popup_sub_pane_cp07

0x3591,	// (0x0001a0d6) list_spcha_pane

0x3599,	// (0x0001a0de) list_single_spcha_pane_ParamLimits

0x3599,	// (0x0001a0de) list_single_spcha_pane

0x0200,	// (0x00016d45) list_highlight_pane_cp06

0x35aa,	// (0x0001a0ef) list_single_spcha_pane_t1

0x268f,	// (0x000191d4) popup_call2_audio_out_window_g4_ParamLimits

0x268f,	// (0x000191d4) popup_call2_audio_out_window_g4

0x0200,	// (0x00016d45) main_imed2_pane

0x2c76,	// (0x000197bb) popup_imed_adjust2_window

0xafac,	// (0x00021af1) popup_imed_trans_window_ParamLimits

0xafac,	// (0x00021af1) popup_imed_trans_window

0x2f92,	// (0x00019ad7) popup_blid_sat_info2_window_t1

0x2fa0,	// (0x00019ae5) popup_blid_sat_info2_window_t2

0x000a,

0xf6c6,	// (0x0002620b) popup_blid_sat_info2_window_t

0xc093,	// (0x00022bd8) aid_size_cell_colour_35

0xc0ad,	// (0x00022bf2) aid_size_cell_colour_112

0xc0c4,	// (0x00022c09) aid_size_cell_effect

0x0270,	// (0x00016db5) bg_tb_trans_pane_cp02

0x12a4,	// (0x00017de9) heading_imed_pane

0xc0de,	// (0x00022c23) listscroll_imed_pane

0x35b8,	// (0x0001a0fd) heading_imed_pane_g1

0x35c0,	// (0x0001a105) heading_imed_pane_t1

0x35ce,	// (0x0001a113) grid_imed_colour_35_pane_ParamLimits

0x35ce,	// (0x0001a113) grid_imed_colour_35_pane

0xc0ea,	// (0x00022c2f) grid_imed_effect_pane

0x35e9,	// (0x0001a12e) list_imed_aspect_pane

0xc0fa,	// (0x00022c3f) scroll_pane_cp027_ParamLimits

0xc0fa,	// (0x00022c3f) scroll_pane_cp027

0xc106,	// (0x00022c4b) cell_imed_effect_pane_ParamLimits

0xc106,	// (0x00022c4b) cell_imed_effect_pane

0x35f1,	// (0x0001a136) cell_imed_colour_pane_ParamLimits

0x35f1,	// (0x0001a136) cell_imed_colour_pane

0x3633,	// (0x0001a178) cell_imed_colour_pane_g1_ParamLimits

0x3633,	// (0x0001a178) cell_imed_colour_pane_g1

0x3644,	// (0x0001a189) hgihlgiht_grid_pane_cp016_ParamLimits

0x3644,	// (0x0001a189) hgihlgiht_grid_pane_cp016

0xc11e,	// (0x00022c63) cell_imed_effect_pane_g1

0xc126,	// (0x00022c6b) grid_highlight_pane_cp017

0x0b9e,	// (0x000176e3) list_imed_single_pane_ParamLimits

0x0b9e,	// (0x000176e3) list_imed_single_pane

0x0200,	// (0x00016d45) list_highlight_pane_cp07

0x3655,	// (0x0001a19a) list_imed_aspect_pane_comp1_t1

0x2c4e,	// (0x00019793) bg_tb_trans_pane_cp05

0x3677,	// (0x0001a1bc) popup_imed_adjust2_window_g1

0x369e,	// (0x0001a1e3) popup_imed_adjust2_window_t1

0x36b6,	// (0x0001a1fb) slider_imed_adjust_pane

0x36ca,	// (0x0001a20f) slider_imed_adjust_pane_g1

0x36da,	// (0x0001a21f) slider_imed_adjust_pane_g2

0x36ea,	// (0x0001a22f) slider_imed_adjust_pane_g3

0x36fb,	// (0x0001a240) slider_imed_adjust_pane_g4

0x0003,

0xf805,	// (0x0002634a) slider_imed_adjust_pane_g

0xc12f,	// (0x00022c74) aid_size_cell_clipart2

0xc13b,	// (0x00022c80) grid_imed_clipart_pane

0x370c,	// (0x0001a251) scroll_pane_cp031

0xc145,	// (0x00022c8a) cell_imed_clipart_pane_ParamLimits

0xc145,	// (0x00022c8a) cell_imed_clipart_pane

0xc16c,	// (0x00022cb1) cell_imed_clipart_pane_g1

0x0200,	// (0x00016d45) grid_highlight_pane_cp014

0xbf19,	// (0x00022a5e) main_clock2_pane_g1_ParamLimits

0xbf19,	// (0x00022a5e) main_clock2_pane_g1

0xc008,	// (0x00022b4d) aid_call2_pane_cp10

0xc01a,	// (0x00022b5f) aid_call_pane_cp10

0x16e4,	// (0x00018229) popup_clock_analogue_window_cp10_g1

0x16e4,	// (0x00018229) popup_clock_analogue_window_cp10_g2

0xc02c,	// (0x00022b71) popup_clock_analogue_window_cp10_g3

0xc02c,	// (0x00022b71) popup_clock_analogue_window_cp10_g4

0x16e4,	// (0x00018229) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7f3,	// (0x00026338) popup_clock_analogue_window_cp10_g

0xc042,	// (0x00022b87) popup_clock_analogue_window_cp10_t1

0x750c,	// (0x0001e051) clock_digital_number_pane_cp10_ParamLimits

0x750c,	// (0x0001e051) clock_digital_number_pane_cp10

0x7524,	// (0x0001e069) clock_digital_number_pane_cp11_ParamLimits

0x7524,	// (0x0001e069) clock_digital_number_pane_cp11

0x753c,	// (0x0001e081) clock_digital_number_pane_cp12_ParamLimits

0x753c,	// (0x0001e081) clock_digital_number_pane_cp12

0x7554,	// (0x0001e099) clock_digital_number_pane_cp13_ParamLimits

0x7554,	// (0x0001e099) clock_digital_number_pane_cp13

0x756c,	// (0x0001e0b1) clock_digital_separator_pane_cp10_ParamLimits

0x756c,	// (0x0001e0b1) clock_digital_separator_pane_cp10

0xc073,	// (0x00022bb8) popup_clock_digital_window_cp02_t1_ParamLimits

0xc073,	// (0x00022bb8) popup_clock_digital_window_cp02_t1

0x08e2,	// (0x00017427) clock_digital_number_pane_cp10_g1

0x08e2,	// (0x00017427) clock_digital_number_pane_cp10_g2

0x0001,

0xf80e,	// (0x00026353) clock_digital_number_pane_cp10_g

0x08e2,	// (0x00017427) clock_digital_separator_pane_cp10_g1

0x08e2,	// (0x00017427) clock_digital_separator_pane_g2_cp10

0x177f,	// (0x000182c4) navi_pane_vded_g4

0x1788,	// (0x000182cd) navi_pane_vded_g5

0x1791,	// (0x000182d6) navi_pane_vded_t1

0x0200,	// (0x00016d45) main_vded_pane

0xc175,	// (0x00022cba) main_vded_pane_g1

0xc181,	// (0x00022cc6) main_vded_pane_g2

0xc18b,	// (0x00022cd0) main_vded_pane_g3

0x0002,

0xf813,	// (0x00026358) main_vded_pane_g

0xc195,	// (0x00022cda) main_vded_pane_t1

0xc1a3,	// (0x00022ce8) main_vded_pane_t2

0x0001,

0xf81a,	// (0x0002635f) main_vded_pane_t

0xc1b1,	// (0x00022cf6) vded_slider_pane

0xc1bb,	// (0x00022d00) vded_video_pane

0x3714,	// (0x0001a259) vded_video_pane_g1

0xc1c5,	// (0x00022d0a) vded_video_pane_g2

0x3156,	// (0x00019c9b) vded_video_pane_g3

0x0002,

0xf81f,	// (0x00026364) vded_video_pane_g

0x371e,	// (0x0001a263) vded_slider_pane_g1

0x2e63,	// (0x000199a8) vded_slider_pane_g2

0x3727,	// (0x0001a26c) vded_slider_pane_g3

0x3730,	// (0x0001a275) vded_slider_pane_g4

0x3739,	// (0x0001a27e) vded_slider_pane_g5

0x0004,

0xf826,	// (0x0002636b) vded_slider_pane_g

0xbd07,	// (0x0002284c) mup3_rocker_pane_ParamLimits

0xbd07,	// (0x0002284c) mup3_rocker_pane

0xc1ce,	// (0x00022d13) mup3_control_keys_pane_g1

0xc1d6,	// (0x00022d1b) mup3_control_keys_pane_g2

0xc1de,	// (0x00022d23) mup3_control_keys_pane_g3

0xc1e6,	// (0x00022d2b) mup3_control_keys_pane_g4

0x0003,

0xf831,	// (0x00026376) mup3_control_keys_pane_g

0x842b,	// (0x0001ef70) popup_toolbar2_fixed_window_cp01_ParamLimits

0x842b,	// (0x0001ef70) popup_toolbar2_fixed_window_cp01

0xbd21,	// (0x00022866) popup_toolbar2_fixed_window_cp02_ParamLimits

0xbd21,	// (0x00022866) popup_toolbar2_fixed_window_cp02

0x1fce,	// (0x00018b13) popup_call2_audio_second_window_t4_ParamLimits

0x1fce,	// (0x00018b13) popup_call2_audio_second_window_t4

0x24fc,	// (0x00019041) popup_call2_audio_first_window_t6_ParamLimits

0x24fc,	// (0x00019041) popup_call2_audio_first_window_t6

0x2792,	// (0x000192d7) popup_call2_audio_out_window_t6_ParamLimits

0x2792,	// (0x000192d7) popup_call2_audio_out_window_t6

0x0200,	// (0x00016d45) main_vitu_pane

0xc1f6,	// (0x00022d3b) aid_size_cell_itu_ParamLimits

0xc1f6,	// (0x00022d3b) aid_size_cell_itu

0x3823,	// (0x0001a368) bg_popup_window_pane_cp08_ParamLimits

0x3823,	// (0x0001a368) bg_popup_window_pane_cp08

0xc204,	// (0x00022d49) field_vitu_entry_pane_ParamLimits

0xc204,	// (0x00022d49) field_vitu_entry_pane

0xc213,	// (0x00022d58) grid_vitu_function_pane_ParamLimits

0xc213,	// (0x00022d58) grid_vitu_function_pane

0xc223,	// (0x00022d68) grid_vitu_itu_pane_ParamLimits

0xc223,	// (0x00022d68) grid_vitu_itu_pane

0xc233,	// (0x00022d78) cell_vitu_itu_pane_ParamLimits

0xc233,	// (0x00022d78) cell_vitu_itu_pane

0xc248,	// (0x00022d8d) cell_vitu_function_pane_ParamLimits

0xc248,	// (0x00022d8d) cell_vitu_function_pane

0x0270,	// (0x00016db5) bg_popup_sub_pane_cp08_ParamLimits

0x0270,	// (0x00016db5) bg_popup_sub_pane_cp08

0xc25c,	// (0x00022da1) field_vitu_entry_pane_t1_ParamLimits

0xc25c,	// (0x00022da1) field_vitu_entry_pane_t1

0x375a,	// (0x0001a29f) field_vitu_entry_pane_t2_ParamLimits

0x375a,	// (0x0001a29f) field_vitu_entry_pane_t2

0x0001,

0xf83f,	// (0x00026384) field_vitu_entry_pane_t_ParamLimits

0xf83f,	// (0x00026384) field_vitu_entry_pane_t

0x3777,	// (0x0001a2bc) bg_button_pane_cp05_ParamLimits

0x3777,	// (0x0001a2bc) bg_button_pane_cp05

0xc279,	// (0x00022dbe) cell_vitu_itu_pane_g1

0xc291,	// (0x00022dd6) cell_vitu_itu_pane_t1_ParamLimits

0xc291,	// (0x00022dd6) cell_vitu_itu_pane_t1

0xc2a3,	// (0x00022de8) cell_vitu_itu_pane_t2_ParamLimits

0xc2a3,	// (0x00022de8) cell_vitu_itu_pane_t2

0x0002,

0xf844,	// (0x00026389) cell_vitu_itu_pane_t_ParamLimits

0xf844,	// (0x00026389) cell_vitu_itu_pane_t

0x3785,	// (0x0001a2ca) bg_button_pane_cp07

0xc2d8,	// (0x00022e1d) cell_vitu_function_pane_g1

0x6e53,	// (0x0001d998) main_calc_pane_g1

0x8234,	// (0x0001ed79) aid_visual_content_pane

0x0200,	// (0x00016d45) main_vradio_pane

0xc2e1,	// (0x00022e26) main_vradio_pane_g1_ParamLimits

0xc2e1,	// (0x00022e26) main_vradio_pane_g1

0x378f,	// (0x0001a2d4) main_vradio_pane_g2_ParamLimits

0x378f,	// (0x0001a2d4) main_vradio_pane_g2

0x0001,

0xf84b,	// (0x00026390) main_vradio_pane_g_ParamLimits

0xf84b,	// (0x00026390) main_vradio_pane_g

0xc2f1,	// (0x00022e36) main_vradio_pane_t1_ParamLimits

0xc2f1,	// (0x00022e36) main_vradio_pane_t1

0xc303,	// (0x00022e48) main_vradio_pane_t2_ParamLimits

0xc303,	// (0x00022e48) main_vradio_pane_t2

0x379c,	// (0x0001a2e1) main_vradio_pane_t3_ParamLimits

0x379c,	// (0x0001a2e1) main_vradio_pane_t3

0x0002,

0xf850,	// (0x00026395) main_vradio_pane_t_ParamLimits

0xf850,	// (0x00026395) main_vradio_pane_t

0xc315,	// (0x00022e5a) vradio_rocker_control_pane_ParamLimits

0xc315,	// (0x00022e5a) vradio_rocker_control_pane

0xc321,	// (0x00022e66) vradio_station_info_pane_ParamLimits

0xc321,	// (0x00022e66) vradio_station_info_pane

0x37b0,	// (0x0001a2f5) vradio_frequency_info_pane_ParamLimits

0x37b0,	// (0x0001a2f5) vradio_frequency_info_pane

0x3156,	// (0x00019c9b) vradio_station_info_pane_g1

0x37bf,	// (0x0001a304) vradio_station_info_pane_t1_ParamLimits

0x37bf,	// (0x0001a304) vradio_station_info_pane_t1

0x37e1,	// (0x0001a326) vradio_station_info_pane_t2_ParamLimits

0x37e1,	// (0x0001a326) vradio_station_info_pane_t2

0x0001,

0xf857,	// (0x0002639c) vradio_station_info_pane_t_ParamLimits

0xf857,	// (0x0002639c) vradio_station_info_pane_t

0x37f3,	// (0x0001a338) vradio_tuning_pane

0x37fb,	// (0x0001a340) vradio_rocker_control_pane_g1

0x3803,	// (0x0001a348) vradio_rocker_control_pane_g2

0x380b,	// (0x0001a350) vradio_rocker_control_pane_g3

0x3813,	// (0x0001a358) vradio_rocker_control_pane_g4

0x381b,	// (0x0001a360) vradio_rocker_control_pane_g5

0x0004,

0xf85c,	// (0x000263a1) vradio_rocker_control_pane_g

0xc330,	// (0x00022e75) vradio_frequency_info_pane_g1

0x3831,	// (0x0001a376) vradio_frequency_info_pane_t1_ParamLimits

0x3831,	// (0x0001a376) vradio_frequency_info_pane_t1

0xc33a,	// (0x00022e7f) vradio_tuning_pane_g1

0xc343,	// (0x00022e88) vradio_tuning_pane_t1

0x022e,	// (0x00016d73) area_side_right_pane_ParamLimits

0x022e,	// (0x00016d73) area_side_right_pane

0x2c15,	// (0x0001975a) status_small_pane_g1

0x2c1d,	// (0x00019762) status_small_pane_g2

0x2c26,	// (0x0001976b) status_small_pane_g3

0x2c2f,	// (0x00019774) status_small_pane_g4

0x0003,

0xf61c,	// (0x00026161) status_small_pane_g

0x2c38,	// (0x0001977d) status_small_pane_t1

0x0200,	// (0x00016d45) main_video3_pane

0x3845,	// (0x0001a38a) cams_zoom_vslider_pane

0x384d,	// (0x0001a392) image3_wide_pane_ParamLimits

0x384d,	// (0x0001a392) image3_wide_pane

0x3867,	// (0x0001a3ac) image3_wide_small_pane

0x3873,	// (0x0001a3b8) main_video3_pane_g1_ParamLimits

0x3873,	// (0x0001a3b8) main_video3_pane_g1

0x388f,	// (0x0001a3d4) main_video3_pane_g2_ParamLimits

0x388f,	// (0x0001a3d4) main_video3_pane_g2

0x0001,

0xf867,	// (0x000263ac) main_video3_pane_g_ParamLimits

0xf867,	// (0x000263ac) main_video3_pane_g

0x38ab,	// (0x0001a3f0) main_video3_pane_t1_ParamLimits

0x38ab,	// (0x0001a3f0) main_video3_pane_t1

0x38d6,	// (0x0001a41b) main_video3_pane_t2_ParamLimits

0x38d6,	// (0x0001a41b) main_video3_pane_t2

0x3901,	// (0x0001a446) main_video3_pane_t3_ParamLimits

0x3901,	// (0x0001a446) main_video3_pane_t3

0x0002,

0xf86c,	// (0x000263b1) main_video3_pane_t_ParamLimits

0xf86c,	// (0x000263b1) main_video3_pane_t

0x392e,	// (0x0001a473) cams_zoom_vslider_pane_g1

0x3937,	// (0x0001a47c) cams_zoom_vslider_pane_g2

0x0001,

0xf873,	// (0x000263b8) cams_zoom_vslider_pane_g

0x393f,	// (0x0001a484) small_slider_vertical_pane

0x3156,	// (0x00019c9b) small_slider_vertical_pane_g1

0x3156,	// (0x00019c9b) small_slider_vertical_pane_g2

0x3947,	// (0x0001a48c) small_slider_vertical_pane_g3

0x0002,

0xf878,	// (0x000263bd) small_slider_vertical_pane_g

0x0200,	// (0x00016d45) main_hwr_training_pane

0x3950,	// (0x0001a495) hwr_training_instruct_pane_ParamLimits

0x3950,	// (0x0001a495) hwr_training_instruct_pane

0xc352,	// (0x00022e97) hwr_training_navi_pane_ParamLimits

0xc352,	// (0x00022e97) hwr_training_navi_pane

0xc36c,	// (0x00022eb1) hwr_training_write_pane_ParamLimits

0xc36c,	// (0x00022eb1) hwr_training_write_pane

0x0200,	// (0x00016d45) bg_frame_shadow_pane

0x3987,	// (0x0001a4cc) hwr_training_write_pane_g1

0x398f,	// (0x0001a4d4) hwr_training_write_pane_g2

0x3997,	// (0x0001a4dc) hwr_training_write_pane_g3

0x399f,	// (0x0001a4e4) hwr_training_write_pane_g4

0x39a7,	// (0x0001a4ec) hwr_training_write_pane_g5

0x39af,	// (0x0001a4f4) hwr_training_write_pane_g6

0x39b7,	// (0x0001a4fc) hwr_training_write_pane_g7

0x0006,

0xf87f,	// (0x000263c4) hwr_training_write_pane_g

0x7584,	// (0x0001e0c9) hwr_training_navi_pane_g1_ParamLimits

0x7584,	// (0x0001e0c9) hwr_training_navi_pane_g1

0x7596,	// (0x0001e0db) hwr_training_navi_pane_g2_ParamLimits

0x7596,	// (0x0001e0db) hwr_training_navi_pane_g2

0x75a8,	// (0x0001e0ed) hwr_training_navi_pane_g3_ParamLimits

0x75a8,	// (0x0001e0ed) hwr_training_navi_pane_g3

0x75b8,	// (0x0001e0fd) hwr_training_navi_pane_g4_ParamLimits

0x75b8,	// (0x0001e0fd) hwr_training_navi_pane_g4

0x0004,

0xf88e,	// (0x000263d3) hwr_training_navi_pane_g_ParamLimits

0xf88e,	// (0x000263d3) hwr_training_navi_pane_g

0x75d2,	// (0x0001e117) hwr_training_navi_pane_t1

0xc3a4,	// (0x00022ee9) list_single_hwr_training_instruct_pane_ParamLimits

0xc3a4,	// (0x00022ee9) list_single_hwr_training_instruct_pane

0x3a0e,	// (0x0001a553) list_single_hwr_training_instruct_pane_t1

0x3096,	// (0x00019bdb) bg_frame_shadow_pane_g1

0x3a1d,	// (0x0001a562) bg_frame_shadow_pane_g2

0x3a25,	// (0x0001a56a) bg_frame_shadow_pane_g3

0x3a2d,	// (0x0001a572) bg_frame_shadow_pane_g4

0x3a35,	// (0x0001a57a) bg_frame_shadow_pane_g5

0x3a3d,	// (0x0001a582) bg_frame_shadow_pane_g6

0x3a45,	// (0x0001a58a) bg_frame_shadow_pane_g7

0x0b14,	// (0x00017659) bg_frame_shadow_pane_g8

0x0007,

0xf899,	// (0x000263de) bg_frame_shadow_pane_g

0x0200,	// (0x00016d45) main_video_tele_dialer_pane

0x75e0,	// (0x0001e125) aid_size_cell_video_keypad_ParamLimits

0x75e0,	// (0x0001e125) aid_size_cell_video_keypad

0x75f0,	// (0x0001e135) grid_video_dialer_keypad_pane_ParamLimits

0x75f0,	// (0x0001e135) grid_video_dialer_keypad_pane

0x7622,	// (0x0001e167) video_down_pane_cp_ParamLimits

0x7622,	// (0x0001e167) video_down_pane_cp

0x762e,	// (0x0001e173) cell_video_dialer_keypad_pane_ParamLimits

0x762e,	// (0x0001e173) cell_video_dialer_keypad_pane

0x3a4d,	// (0x0001a592) bg_button_pane_cp08_ParamLimits

0x3a4d,	// (0x0001a592) bg_button_pane_cp08

0xc3f6,	// (0x00022f3b) cell_video_dialer_keypad_pane_g1_ParamLimits

0xc3f6,	// (0x00022f3b) cell_video_dialer_keypad_pane_g1

0xbcfb,	// (0x00022840) mup3_rocker2_pane_ParamLimits

0xbcfb,	// (0x00022840) mup3_rocker2_pane

0x3156,	// (0x00019c9b) mup3_rocker2_pane_g1

0xaf3a,	// (0x00021a7f) main_dialer2_pane

0x0200,	// (0x00016d45) main_mp4_pane

0x764b,	// (0x0001e190) main_mp4_pane_g1_ParamLimits

0x764b,	// (0x0001e190) main_mp4_pane_g1

0x7659,	// (0x0001e19e) main_mp4_pane_g2_ParamLimits

0x7659,	// (0x0001e19e) main_mp4_pane_g2

0x7667,	// (0x0001e1ac) main_mp4_pane_g3_ParamLimits

0x7667,	// (0x0001e1ac) main_mp4_pane_g3

0x76ac,	// (0x0001e1f1) main_mp4_pane_g4_ParamLimits

0x76ac,	// (0x0001e1f1) main_mp4_pane_g4

0x76d4,	// (0x0001e219) main_mp4_pane_g5_ParamLimits

0x76d4,	// (0x0001e219) main_mp4_pane_g5

0x0005,

0xf8b9,	// (0x000263fe) main_mp4_pane_g_ParamLimits

0xf8b9,	// (0x000263fe) main_mp4_pane_g

0x7724,	// (0x0001e269) main_mp4_pane_t1_ParamLimits

0x7724,	// (0x0001e269) main_mp4_pane_t1

0x7780,	// (0x0001e2c5) main_mp4_pane_t2_ParamLimits

0x7780,	// (0x0001e2c5) main_mp4_pane_t2

0x3b95,	// (0x0001a6da) main_mp4_pane_t3_ParamLimits

0x3b95,	// (0x0001a6da) main_mp4_pane_t3

0x77d2,	// (0x0001e317) main_mp4_pane_t4_ParamLimits

0x77d2,	// (0x0001e317) main_mp4_pane_t4

0x0003,

0xf8c6,	// (0x0002640b) main_mp4_pane_t_ParamLimits

0xf8c6,	// (0x0002640b) main_mp4_pane_t

0x7816,	// (0x0001e35b) mp4_progress_pane_ParamLimits

0x7816,	// (0x0001e35b) mp4_progress_pane

0x7860,	// (0x0001e3a5) mp4_rocker_pane_ParamLimits

0x7860,	// (0x0001e3a5) mp4_rocker_pane

0x3c6b,	// (0x0001a7b0) mp4_progress_pane_t1

0x3c84,	// (0x0001a7c9) mp4_progress_pane_t2

0x0001,

0xf8cf,	// (0x00026414) mp4_progress_pane_t

0x3c9d,	// (0x0001a7e2) mup_progress_pane_cp04

0x470e,	// (0x0001b253) mp4_rocker_pane_g1

0x7880,	// (0x0001e3c5) aid_cell_size_keypad2_ParamLimits

0x7880,	// (0x0001e3c5) aid_cell_size_keypad2

0x7890,	// (0x0001e3d5) dialer2_ne_pane_ParamLimits

0x7890,	// (0x0001e3d5) dialer2_ne_pane

0x789e,	// (0x0001e3e3) grid_dialer2_keypad_pane_ParamLimits

0x789e,	// (0x0001e3e3) grid_dialer2_keypad_pane

0x4777,	// (0x0001b2bc) bg_popup_call_pane_cp07_ParamLimits

0x4777,	// (0x0001b2bc) bg_popup_call_pane_cp07

0xc42d,	// (0x00022f72) dialer2_ne_pane_t1_ParamLimits

0xc42d,	// (0x00022f72) dialer2_ne_pane_t1

0x78ae,	// (0x0001e3f3) cell_dialer2_keypad_pane_ParamLimits

0x78ae,	// (0x0001e3f3) cell_dialer2_keypad_pane

0x3cbb,	// (0x0001a800) bg_button_pane_pane_cp04_ParamLimits

0x3cbb,	// (0x0001a800) bg_button_pane_pane_cp04

0xc452,	// (0x00022f97) cell_dialer2_keypad_pane_g1_ParamLimits

0xc452,	// (0x00022f97) cell_dialer2_keypad_pane_g1

0x8e23,	// (0x0001f968) aid_placing_vt_set_content_ParamLimits

0x8e23,	// (0x0001f968) aid_placing_vt_set_content

0x8e4f,	// (0x0001f994) aid_placing_vt_set_title_ParamLimits

0x8e4f,	// (0x0001f994) aid_placing_vt_set_title

0x0200,	// (0x00016d45) main_image3_pane

0x78f7,	// (0x0001e43c) area_side_right_pane_cp01_ParamLimits

0x78f7,	// (0x0001e43c) area_side_right_pane_cp01

0x7924,	// (0x0001e469) main_image3_pane_g1_ParamLimits

0x7924,	// (0x0001e469) main_image3_pane_g1

0x7932,	// (0x0001e477) main_image3_pane_g2_ParamLimits

0x7932,	// (0x0001e477) main_image3_pane_g2

0x794b,	// (0x0001e490) main_image3_pane_g3_ParamLimits

0x794b,	// (0x0001e490) main_image3_pane_g3

0x7964,	// (0x0001e4a9) main_image3_pane_g4_ParamLimits

0x7964,	// (0x0001e4a9) main_image3_pane_g4

0x0003,

0xf8de,	// (0x00026423) main_image3_pane_g_ParamLimits

0xf8de,	// (0x00026423) main_image3_pane_g

0x797d,	// (0x0001e4c2) main_image3_pane_t1_ParamLimits

0x797d,	// (0x0001e4c2) main_image3_pane_t1

0x79a2,	// (0x0001e4e7) main_image3_pane_t2_ParamLimits

0x79a2,	// (0x0001e4e7) main_image3_pane_t2

0x79c1,	// (0x0001e506) main_image3_pane_t3_ParamLimits

0x79c1,	// (0x0001e506) main_image3_pane_t3

0x0003,

0xf8e7,	// (0x0002642c) main_image3_pane_t_ParamLimits

0xf8e7,	// (0x0002642c) main_image3_pane_t

0x3823,	// (0x0001a368) grid_sctrl_middle_pane_cp01_ParamLimits

0x3823,	// (0x0001a368) grid_sctrl_middle_pane_cp01

0xc4ba,	// (0x00022fff) cell_sctrl_middle_pane_cp01_ParamLimits

0xc4ba,	// (0x00022fff) cell_sctrl_middle_pane_cp01

0xc4cb,	// (0x00023010) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0xc4cb,	// (0x00023010) cell_sctrl_middle_pane_cp01_g1

0x0200,	// (0x00016d45) main_call4_pane

0xc4d8,	// (0x0002301d) aid_size_button_call4_ParamLimits

0xc4d8,	// (0x0002301d) aid_size_button_call4

0xc508,	// (0x0002304d) call4_windows_pane_ParamLimits

0xc508,	// (0x0002304d) call4_windows_pane

0xc522,	// (0x00023067) grid_call4_button_pane_ParamLimits

0xc522,	// (0x00023067) grid_call4_button_pane

0x3cf9,	// (0x0001a83e) call4_windows_conf_pane

0x3d0e,	// (0x0001a853) popup_call4_audio_first_window_ParamLimits

0x3d0e,	// (0x0001a853) popup_call4_audio_first_window

0x3d5a,	// (0x0001a89f) popup_call4_audio_second_window_ParamLimits

0x3d5a,	// (0x0001a89f) popup_call4_audio_second_window

0x3d6e,	// (0x0001a8b3) popup_call4_audio_wait_window_ParamLimits

0x3d6e,	// (0x0001a8b3) popup_call4_audio_wait_window

0xc546,	// (0x0002308b) cell_call4_button_pane_ParamLimits

0xc546,	// (0x0002308b) cell_call4_button_pane

0xc56b,	// (0x000230b0) bg_button_pane_cp09_ParamLimits

0xc56b,	// (0x000230b0) bg_button_pane_cp09

0xc577,	// (0x000230bc) cell_call4_button_pane_g1_ParamLimits

0xc577,	// (0x000230bc) cell_call4_button_pane_g1

0xc584,	// (0x000230c9) cell_call4_button_pane_t1_ParamLimits

0xc584,	// (0x000230c9) cell_call4_button_pane_t1

0x3db6,	// (0x0001a8fb) popup_call4_audio_conf_window_ParamLimits

0x3db6,	// (0x0001a8fb) popup_call4_audio_conf_window

0xbd2e,	// (0x00022873) mup3_progress_pane_t1_ParamLimits

0xbd45,	// (0x0002288a) mup3_progress_pane_t2_ParamLimits

0x3470,	// (0x00019fb5) mup3_progress_pane_t3_ParamLimits

0xf7c0,	// (0x00026305) mup3_progress_pane_t_ParamLimits

0x3487,	// (0x00019fcc) mup_progress_pane_cp03_ParamLimits

0xc1ee,	// (0x00022d33) mup3_control_keys_pane_g4_copy1

0x7844,	// (0x0001e389) mp4_rocker2_pane_ParamLimits

0x7844,	// (0x0001e389) mp4_rocker2_pane

0x3dd2,	// (0x0001a917) mp4_rocker2_pane_g1

0x3dca,	// (0x0001a90f) mp4_rocker2_pane_g2

0x7a22,	// (0x0001e567) mp4_rocker2_pane_g3

0x7a2a,	// (0x0001e56f) mp4_rocker2_pane_g4

0x7a32,	// (0x0001e577) mp4_rocker2_pane_g5

0x0004,

0xf8f0,	// (0x00026435) mp4_rocker2_pane_g

0x0200,	// (0x00016d45) main_camera4_pane

0x0200,	// (0x00016d45) main_video4_pane

0x75fe,	// (0x0001e143) main_video_tele_dialer_pane_t1_ParamLimits

0x75fe,	// (0x0001e143) main_video_tele_dialer_pane_t1

0x7610,	// (0x0001e155) main_video_tele_dialer_pane_t2_ParamLimits

0x7610,	// (0x0001e155) main_video_tele_dialer_pane_t2

0x0001,

0xf8aa,	// (0x000263ef) main_video_tele_dialer_pane_t_ParamLimits

0xf8aa,	// (0x000263ef) main_video_tele_dialer_pane_t

0x7a52,	// (0x0001e597) cam4_autofocus_pane_ParamLimits

0x7a52,	// (0x0001e597) cam4_autofocus_pane

0x7a6c,	// (0x0001e5b1) cam4_image_uncrop_pane_ParamLimits

0x7a6c,	// (0x0001e5b1) cam4_image_uncrop_pane

0x7a83,	// (0x0001e5c8) cam4_indicators_pane_ParamLimits

0x7a83,	// (0x0001e5c8) cam4_indicators_pane

0x7a9f,	// (0x0001e5e4) main_camera4_pane_g1_ParamLimits

0x7a9f,	// (0x0001e5e4) main_camera4_pane_g1

0x7aab,	// (0x0001e5f0) main_camera4_pane_g2_ParamLimits

0x7aab,	// (0x0001e5f0) main_camera4_pane_g2

0x7aab,	// (0x0001e5f0) main_camera4_pane_g3_ParamLimits

0x7aab,	// (0x0001e5f0) main_camera4_pane_g3

0x7ab7,	// (0x0001e5fc) main_camera4_pane_g4_ParamLimits

0x7ab7,	// (0x0001e5fc) main_camera4_pane_g4

0x7ac3,	// (0x0001e608) main_camera4_pane_g5_ParamLimits

0x7ac3,	// (0x0001e608) main_camera4_pane_g5

0x0005,

0xf8fb,	// (0x00026440) main_camera4_pane_g_ParamLimits

0xf8fb,	// (0x00026440) main_camera4_pane_g

0x7add,	// (0x0001e622) main_camera4_pane_t1_ParamLimits

0x7add,	// (0x0001e622) main_camera4_pane_t1

0x7b01,	// (0x0001e646) bg_tb_trans_pane_cp06

0x7b17,	// (0x0001e65c) cam4_indicators_pane_g1

0x7b28,	// (0x0001e66d) cam4_indicators_pane_g2

0x0002,

0xf916,	// (0x0002645b) cam4_indicators_pane_g

0x7b46,	// (0x0001e68b) cam4_indicators_pane_t1

0x7b70,	// (0x0001e6b5) main_video4_pane_g1_ParamLimits

0x7b70,	// (0x0001e6b5) main_video4_pane_g1

0x7b7c,	// (0x0001e6c1) main_video4_pane_g2_ParamLimits

0x7b7c,	// (0x0001e6c1) main_video4_pane_g2

0x7b88,	// (0x0001e6cd) main_video4_pane_g3_ParamLimits

0x7b88,	// (0x0001e6cd) main_video4_pane_g3

0x7b94,	// (0x0001e6d9) main_video4_pane_g4_ParamLimits

0x7b94,	// (0x0001e6d9) main_video4_pane_g4

0x0004,

0xf91d,	// (0x00026462) main_video4_pane_g_ParamLimits

0xf91d,	// (0x00026462) main_video4_pane_g

0x7bb4,	// (0x0001e6f9) vid4_indicators_pane_ParamLimits

0x7bb4,	// (0x0001e6f9) vid4_indicators_pane

0x7bd2,	// (0x0001e717) video4_image_uncrop_cif_pane_ParamLimits

0x7bd2,	// (0x0001e717) video4_image_uncrop_cif_pane

0x7be1,	// (0x0001e726) video4_image_uncrop_nhd_pane_ParamLimits

0x7be1,	// (0x0001e726) video4_image_uncrop_nhd_pane

0x7a6c,	// (0x0001e5b1) video4_image_uncrop_vga_pane_ParamLimits

0x7a6c,	// (0x0001e5b1) video4_image_uncrop_vga_pane

0x7bee,	// (0x0001e733) bg_tb_trans_pane_cp07

0x7b17,	// (0x0001e65c) vid4_indicators_pane_g1

0x7c04,	// (0x0001e749) vid4_indicators_pane_g2

0x7c15,	// (0x0001e75a) vid4_indicators_pane_g3

0x0004,

0xf928,	// (0x0002646d) vid4_indicators_pane_g

0x7c42,	// (0x0001e787) vid4_indicators_pane_t1

0xc5ba,	// (0x000230ff) cam4_autofocus_pane_g1

0xc5c2,	// (0x00023107) cam4_autofocus_pane_g2

0xc5ca,	// (0x0002310f) cam4_autofocus_pane_g3

0x0002,

0xf933,	// (0x00026478) cam4_autofocus_pane_g

0xc5d2,	// (0x00023117) cam4_autofocus_pane_g3_copy1

0xc3da,	// (0x00022f1f) video_down_pane_cp_t1

0xc3e8,	// (0x00022f2d) video_down_pane_cp_t2

0x0001,

0xf8af,	// (0x000263f4) video_down_pane_cp_t

0x3823,	// (0x0001a368) popup_vitu2_window_ParamLimits

0x3823,	// (0x0001a368) popup_vitu2_window

0x7c5b,	// (0x0001e7a0) aid_size_cell2_itu2_ParamLimits

0x7c5b,	// (0x0001e7a0) aid_size_cell2_itu2

0x7c7d,	// (0x0001e7c2) aid_size_cell_itu2_ParamLimits

0x7c7d,	// (0x0001e7c2) aid_size_cell_itu2

0x7cc1,	// (0x0001e806) bg_popup_window_pane_cp09_ParamLimits

0x7cc1,	// (0x0001e806) bg_popup_window_pane_cp09

0x7ccf,	// (0x0001e814) field_vitu2_entry_pane_ParamLimits

0x7ccf,	// (0x0001e814) field_vitu2_entry_pane

0x7cef,	// (0x0001e834) grid_vitu2_function_pane_ParamLimits

0x7cef,	// (0x0001e834) grid_vitu2_function_pane

0x7d33,	// (0x0001e878) grid_vitu2_itu_pane_ParamLimits

0x7d33,	// (0x0001e878) grid_vitu2_itu_pane

0x7da9,	// (0x0001e8ee) cell_vitu2_itu_pane_ParamLimits

0x7da9,	// (0x0001e8ee) cell_vitu2_itu_pane

0x7dbe,	// (0x0001e903) cell_vitu2_function_pane_ParamLimits

0x7dbe,	// (0x0001e903) cell_vitu2_function_pane

0x3e6f,	// (0x0001a9b4) bg_popup_call_pane_cp08_ParamLimits

0x3e6f,	// (0x0001a9b4) bg_popup_call_pane_cp08

0x3e88,	// (0x0001a9cd) field_vitu2_entry_pane_g1

0x3e94,	// (0x0001a9d9) field_vitu2_entry_pane_g2

0x0002,

0xf93a,	// (0x0002647f) field_vitu2_entry_pane_g

0x3eae,	// (0x0001a9f3) field_vitu2_entry_pane_t1_ParamLimits

0x3eae,	// (0x0001a9f3) field_vitu2_entry_pane_t1

0x3edf,	// (0x0001aa24) field_vitu2_entry_pane_t2_ParamLimits

0x3edf,	// (0x0001aa24) field_vitu2_entry_pane_t2

0x0001,

0xf941,	// (0x00026486) field_vitu2_entry_pane_t_ParamLimits

0xf941,	// (0x00026486) field_vitu2_entry_pane_t

0x7dff,	// (0x0001e944) bg_button_pane_cp010_ParamLimits

0x7dff,	// (0x0001e944) bg_button_pane_cp010

0x7e0d,	// (0x0001e952) cell_vitu2_itu_pane_g1

0x7e2b,	// (0x0001e970) cell_vitu2_itu_pane_t1_ParamLimits

0x7e2b,	// (0x0001e970) cell_vitu2_itu_pane_t1

0x7e7d,	// (0x0001e9c2) cell_vitu2_itu_pane_t2_ParamLimits

0x7e7d,	// (0x0001e9c2) cell_vitu2_itu_pane_t2

0x0002,

0xf94b,	// (0x00026490) cell_vitu2_itu_pane_t_ParamLimits

0xf94b,	// (0x00026490) cell_vitu2_itu_pane_t

0x7bee,	// (0x0001e733) bg_button_pane_cp011

0x7f38,	// (0x0001ea7d) cell_vitu2_function_pane_g1

0x0200,	// (0x00016d45) main_myfav_hc_pane

0x7a03,	// (0x0001e548) popup_image3_note_pane_ParamLimits

0x7a03,	// (0x0001e548) popup_image3_note_pane

0x7a11,	// (0x0001e556) popup_image3_tool_bar_pane_ParamLimits

0x7a11,	// (0x0001e556) popup_image3_tool_bar_pane

0x7eeb,	// (0x0001ea30) cell_vitu2_itu_pane_t3_ParamLimits

0x7eeb,	// (0x0001ea30) cell_vitu2_itu_pane_t3

0x0200,	// (0x00016d45) bg_popup_trans_pane

0x3f04,	// (0x0001aa49) grid_image3_tool_bar_pane

0x3f0e,	// (0x0001aa53) bg_popup_trans_pane_g1

0x0ffd,	// (0x00017b42) bg_popup_trans_pane_g2

0x3f16,	// (0x0001aa5b) bg_popup_trans_pane_g3

0x3f1e,	// (0x0001aa63) bg_popup_trans_pane_g4

0x3f26,	// (0x0001aa6b) bg_popup_trans_pane_g5

0x3f2e,	// (0x0001aa73) bg_popup_trans_pane_g6

0x3f36,	// (0x0001aa7b) bg_popup_trans_pane_g7

0x3f3e,	// (0x0001aa83) bg_popup_trans_pane_g8

0x0fdd,	// (0x00017b22) bg_popup_trans_pane_g9

0x0008,

0xf952,	// (0x00026497) bg_popup_trans_pane_g

0x3f46,	// (0x0001aa8b) cell_image3_tool_bar_pane_ParamLimits

0x3f46,	// (0x0001aa8b) cell_image3_tool_bar_pane

0x3156,	// (0x00019c9b) cell_image3_tool_bar_pane_g1

0x0200,	// (0x00016d45) bg_popup_trans_pane_cp1

0x3f5a,	// (0x0001aa9f) popup_image3_note_pane_t1

0x3f68,	// (0x0001aaad) popup_image3_note_pane_t2

0x3f76,	// (0x0001aabb) popup_image3_note_pane_t3

0x0002,

0xf965,	// (0x000264aa) popup_image3_note_pane_t

0x3f84,	// (0x0001aac9) popup_image3_note_pane_t3_copy1

0xc5da,	// (0x0002311f) bg_myfav_hc_instruction_pane_ParamLimits

0xc5da,	// (0x0002311f) bg_myfav_hc_instruction_pane

0xc5f2,	// (0x00023137) cell_myfav_contact_pane_ParamLimits

0xc5f2,	// (0x00023137) cell_myfav_contact_pane

0xc60c,	// (0x00023151) cell_myfav_contact_pane_cp1_ParamLimits

0xc60c,	// (0x00023151) cell_myfav_contact_pane_cp1

0xc624,	// (0x00023169) cell_myfav_contact_pane_cp2_ParamLimits

0xc624,	// (0x00023169) cell_myfav_contact_pane_cp2

0xc63c,	// (0x00023181) cell_myfav_contact_pane_cp3_ParamLimits

0xc63c,	// (0x00023181) cell_myfav_contact_pane_cp3

0xc653,	// (0x00023198) cell_myfav_contact_pane_cp4_ParamLimits

0xc653,	// (0x00023198) cell_myfav_contact_pane_cp4

0xc669,	// (0x000231ae) cell_myfav_contact_pane_cp5_ParamLimits

0xc669,	// (0x000231ae) cell_myfav_contact_pane_cp5

0xc67d,	// (0x000231c2) cell_myfav_contact_pane_cp6_ParamLimits

0xc67d,	// (0x000231c2) cell_myfav_contact_pane_cp6

0xc691,	// (0x000231d6) cell_myfav_contact_pane_cp7_ParamLimits

0xc691,	// (0x000231d6) cell_myfav_contact_pane_cp7

0x3f92,	// (0x0001aad7) listscroll_gen_pane_cp05

0xc6a9,	// (0x000231ee) main_myfav_hc_pane_g1_ParamLimits

0xc6a9,	// (0x000231ee) main_myfav_hc_pane_g1

0xc6c1,	// (0x00023206) main_myfav_hc_pane_g2_ParamLimits

0xc6c1,	// (0x00023206) main_myfav_hc_pane_g2

0x0002,

0xf96c,	// (0x000264b1) main_myfav_hc_pane_g_ParamLimits

0xf96c,	// (0x000264b1) main_myfav_hc_pane_g

0xc6f1,	// (0x00023236) main_myfav_hc_pane_t1_ParamLimits

0xc6f1,	// (0x00023236) main_myfav_hc_pane_t1

0x3f9b,	// (0x0001aae0) main_myfav_hc_pane_t2_ParamLimits

0x3f9b,	// (0x0001aae0) main_myfav_hc_pane_t2

0x3fad,	// (0x0001aaf2) main_myfav_hc_pane_t3_ParamLimits

0x3fad,	// (0x0001aaf2) main_myfav_hc_pane_t3

0xc708,	// (0x0002324d) main_myfav_hc_pane_t4_ParamLimits

0xc708,	// (0x0002324d) main_myfav_hc_pane_t4

0x0004,

0xf973,	// (0x000264b8) main_myfav_hc_pane_t_ParamLimits

0xf973,	// (0x000264b8) main_myfav_hc_pane_t

0x3156,	// (0x00019c9b) bg_myfav_hc_instruction_pane_g1

0x3fbf,	// (0x0001ab04) cell_myfav_contact_pane_g1_ParamLimits

0x3fbf,	// (0x0001ab04) cell_myfav_contact_pane_g1

0x3fbf,	// (0x0001ab04) cell_myfav_contact_pane_g2_ParamLimits

0x3fbf,	// (0x0001ab04) cell_myfav_contact_pane_g2

0x3fcb,	// (0x0001ab10) cell_myfav_contact_pane_g3_ParamLimits

0x3fcb,	// (0x0001ab10) cell_myfav_contact_pane_g3

0x345a,	// (0x00019f9f) cell_myfav_contact_pane_g4_ParamLimits

0x345a,	// (0x00019f9f) cell_myfav_contact_pane_g4

0x3fd8,	// (0x0001ab1d) cell_myfav_contact_pane_g5_ParamLimits

0x3fd8,	// (0x0001ab1d) cell_myfav_contact_pane_g5

0x0004,

0xf97e,	// (0x000264c3) cell_myfav_contact_pane_g_ParamLimits

0xf97e,	// (0x000264c3) cell_myfav_contact_pane_g

0xc6d9,	// (0x0002321e) main_myfav_hc_pane_g3_ParamLimits

0xc6d9,	// (0x0002321e) main_myfav_hc_pane_g3

0x8370,	// (0x0001eeb5) popup_adpt_find_window

0xc732,	// (0x00023277) afind_page_pane_ParamLimits

0xc732,	// (0x00023277) afind_page_pane

0xc73f,	// (0x00023284) aid_size_cell_afind_ParamLimits

0xc73f,	// (0x00023284) aid_size_cell_afind

0xc759,	// (0x0002329e) bg_popup_sub_pane_cp09_ParamLimits

0xc759,	// (0x0002329e) bg_popup_sub_pane_cp09

0xc766,	// (0x000232ab) find_pane_cp01_ParamLimits

0xc766,	// (0x000232ab) find_pane_cp01

0x3fe4,	// (0x0001ab29) grid_afind_control_pane_ParamLimits

0x3fe4,	// (0x0001ab29) grid_afind_control_pane

0xc773,	// (0x000232b8) grid_afind_pane_ParamLimits

0xc773,	// (0x000232b8) grid_afind_pane

0xc78f,	// (0x000232d4) cell_afind_pane_ParamLimits

0xc78f,	// (0x000232d4) cell_afind_pane

0x3156,	// (0x00019c9b) afind_page_pane_g1

0xc7d7,	// (0x0002331c) afind_page_pane_g2

0xc7e0,	// (0x00023325) afind_page_pane_g3

0x0002,

0xf989,	// (0x000264ce) afind_page_pane_g

0xc7e9,	// (0x0002332e) afind_page_pane_t1

0x3ff8,	// (0x0001ab3d) cell_afind_grid_control_pane_ParamLimits

0x3ff8,	// (0x0001ab3d) cell_afind_grid_control_pane

0x3cbb,	// (0x0001a800) bg_button_pane_cp69_ParamLimits

0x3cbb,	// (0x0001a800) bg_button_pane_cp69

0xc800,	// (0x00023345) cell_afind_pane_g1_ParamLimits

0xc800,	// (0x00023345) cell_afind_pane_g1

0xc80d,	// (0x00023352) cell_afind_pane_t1_ParamLimits

0xc80d,	// (0x00023352) cell_afind_pane_t1

0x0d3b,	// (0x00017880) bg_button_pane_cp72

0x4007,	// (0x0001ab4c) cell_afind_grid_control_pane_g1

0xaab5,	// (0x000215fa) aid_image_placing_area_ParamLimits

0xaab5,	// (0x000215fa) aid_image_placing_area

0x3742,	// (0x0001a287) field_vitu_entry_pane_g1_ParamLimits

0x3742,	// (0x0001a287) field_vitu_entry_pane_g1

0x374e,	// (0x0001a293) field_vitu_entry_pane_g2_ParamLimits

0x374e,	// (0x0001a293) field_vitu_entry_pane_g2

0x0001,

0xf83a,	// (0x0002637f) field_vitu_entry_pane_g_ParamLimits

0xf83a,	// (0x0002637f) field_vitu_entry_pane_g

0xc279,	// (0x00022dbe) cell_vitu_itu_pane_g1_ParamLimits

0xc2bb,	// (0x00022e00) cell_vitu_itu_pane_t3_ParamLimits

0xc2bb,	// (0x00022e00) cell_vitu_itu_pane_t3

0x3c6b,	// (0x0001a7b0) mp4_progress_pane_t1_ParamLimits

0x3c84,	// (0x0001a7c9) mp4_progress_pane_t2_ParamLimits

0xf8cf,	// (0x00026414) mp4_progress_pane_t_ParamLimits

0x3c9d,	// (0x0001a7e2) mup_progress_pane_cp04_ParamLimits

0xc71c,	// (0x00023261) main_myfav_hc_pane_t5_ParamLimits

0xc71c,	// (0x00023261) main_myfav_hc_pane_t5

0x0226,	// (0x00016d6b) aid_zoom_text_primary

0x8370,	// (0x0001eeb5) popup_adpt_find_window_ParamLimits

0x0270,	// (0x00016db5) main_cam_set_pane

0x7a91,	// (0x0001e5d6) cam4_zoom_pane_ParamLimits

0x7a91,	// (0x0001e5d6) cam4_zoom_pane

0xc81f,	// (0x00023364) main_cam_set_pane_g1_ParamLimits

0xc81f,	// (0x00023364) main_cam_set_pane_g1

0xc82d,	// (0x00023372) main_cam_set_pane_g2_ParamLimits

0xc82d,	// (0x00023372) main_cam_set_pane_g2

0x0001,

0xf990,	// (0x000264d5) main_cam_set_pane_g_ParamLimits

0xf990,	// (0x000264d5) main_cam_set_pane_g

0xc839,	// (0x0002337e) main_cam_set_pane_t1_ParamLimits

0xc839,	// (0x0002337e) main_cam_set_pane_t1

0xc855,	// (0x0002339a) main_cset_listscroll_pane_ParamLimits

0xc855,	// (0x0002339a) main_cset_listscroll_pane

0xc880,	// (0x000233c5) main_cset_slider_pane_ParamLimits

0xc880,	// (0x000233c5) main_cset_slider_pane

0x4018,	// (0x0001ab5d) main_cset_list_pane_ParamLimits

0x4018,	// (0x0001ab5d) main_cset_list_pane

0x4028,	// (0x0001ab6d) scroll_pane_cp028

0xc89f,	// (0x000233e4) aid_area_touch_slider

0xc8bb,	// (0x00023400) cset_slider_pane

0xc8e5,	// (0x0002342a) main_cset_slider_pane_g1

0xc8fa,	// (0x0002343f) main_cset_slider_pane_g2

0x0011,

0xf995,	// (0x000264da) main_cset_slider_pane_g

0x4061,	// (0x0001aba6) main_cset_slider_pane_t1

0xc9c2,	// (0x00023507) main_cset_slider_pane_t2

0xc9dc,	// (0x00023521) main_cset_slider_pane_t3

0xc9f6,	// (0x0002353b) main_cset_slider_pane_t4

0xca14,	// (0x00023559) main_cset_slider_pane_t5

0xca36,	// (0x0002357b) main_cset_slider_pane_t6

0xca4d,	// (0x00023592) main_cset_slider_pane_t7

0x000e,

0xf9ba,	// (0x000264ff) main_cset_slider_pane_t

0xcb5b,	// (0x000236a0) cset_list_set_pane_ParamLimits

0xcb5b,	// (0x000236a0) cset_list_set_pane

0xcb78,	// (0x000236bd) aid_position_infowindow_above

0xcb80,	// (0x000236c5) aid_position_infowindow_below

0xcb88,	// (0x000236cd) cset_list_set_pane_g1_ParamLimits

0xcb88,	// (0x000236cd) cset_list_set_pane_g1

0x4985,	// (0x0001b4ca) cset_list_set_pane_g3_ParamLimits

0x4985,	// (0x0001b4ca) cset_list_set_pane_g3

0x0001,

0xf9d9,	// (0x0002651e) cset_list_set_pane_g_ParamLimits

0xf9d9,	// (0x0002651e) cset_list_set_pane_g

0x4994,	// (0x0001b4d9) cset_list_set_pane_t1_ParamLimits

0x4994,	// (0x0001b4d9) cset_list_set_pane_t1

0x0270,	// (0x00016db5) list_highlight_pane_cp021_ParamLimits

0x0270,	// (0x00016db5) list_highlight_pane_cp021

0x1905,	// (0x0001844a) cset_slider_pane_g1

0x1917,	// (0x0001845c) cset_slider_pane_g2

0x190e,	// (0x00018453) cset_slider_pane_g3

0x0002,

0xf9de,	// (0x00026523) cset_slider_pane_g

0x7f4c,	// (0x0001ea91) aid_area_touch_cam4_zoom

0x7f54,	// (0x0001ea99) cam4_zoom_cont_pane

0x7f5c,	// (0x0001eaa1) cam4_zoom_pane_g1

0x7f64,	// (0x0001eaa9) cam4_zoom_pane_g2

0x7f6c,	// (0x0001eab1) cam4_zoom_pane_g3

0x0002,

0xf9e5,	// (0x0002652a) cam4_zoom_pane_g

0x7f74,	// (0x0001eab9) cam4_zoom_cont_pane_g1

0x7f7d,	// (0x0001eac2) cam4_zoom_cont_pane_g2

0x7f86,	// (0x0001eacb) cam4_zoom_cont_pane_g3

0x0002,

0xf9ec,	// (0x00026531) cam4_zoom_cont_pane_g

0xc4f2,	// (0x00023037) call4_image_pane_ParamLimits

0xc4f2,	// (0x00023037) call4_image_pane

0x3cf9,	// (0x0001a83e) call4_windows_conf_pane_ParamLimits

0x3d38,	// (0x0001a87d) popup_call4_audio_in_window_ParamLimits

0x3d38,	// (0x0001a87d) popup_call4_audio_in_window

0x0200,	// (0x00016d45) bg_popup_call2_act_pane_cp02

0x3dae,	// (0x0001a8f3) call4_list_conf_pane

0x3156,	// (0x00019c9b) call4_image_pane_g1

0x3156,	// (0x00019c9b) call4_image_pane_g2

0x0001,

0xf700,	// (0x00026245) call4_image_pane_g

0x413c,	// (0x0001ac81) list_single_graphic_popup_conf4_pane_ParamLimits

0x413c,	// (0x0001ac81) list_single_graphic_popup_conf4_pane

0x0200,	// (0x00016d45) list_highlight_pane_cp022

0x414f,	// (0x0001ac94) list_single_graphic_popup_conf4_pane_g1

0x15d6,	// (0x0001811b) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9f3,	// (0x00026538) list_single_graphic_popup_conf4_pane_g

0x4157,	// (0x0001ac9c) list_single_graphic_popup_conf4_pane_t1

0x8fb3,	// (0x0001faf8) popup_vtel_slider_window_ParamLimits

0x8fb3,	// (0x0001faf8) popup_vtel_slider_window

0x3ca9,	// (0x0001a7ee) dialer2_ne_pane_t2_ParamLimits

0x3ca9,	// (0x0001a7ee) dialer2_ne_pane_t2

0x0001,

0xf8d4,	// (0x00026419) dialer2_ne_pane_t_ParamLimits

0xf8d4,	// (0x00026419) dialer2_ne_pane_t

0x0270,	// (0x00016db5) bg_popup_sub_pane_cp010_ParamLimits

0x0270,	// (0x00016db5) bg_popup_sub_pane_cp010

0xcb94,	// (0x000236d9) popup_vtel_slider_window_g1_ParamLimits

0xcb94,	// (0x000236d9) popup_vtel_slider_window_g1

0xcba0,	// (0x000236e5) popup_vtel_slider_window_g2_ParamLimits

0xcba0,	// (0x000236e5) popup_vtel_slider_window_g2

0x0003,

0xf9f8,	// (0x0002653d) popup_vtel_slider_window_g_ParamLimits

0xf9f8,	// (0x0002653d) popup_vtel_slider_window_g

0xcbe8,	// (0x0002372d) vtel_slider_pane_ParamLimits

0xcbe8,	// (0x0002372d) vtel_slider_pane

0xcbf7,	// (0x0002373c) vtel_slider_pane_g1_ParamLimits

0xcbf7,	// (0x0002373c) vtel_slider_pane_g1

0xcc04,	// (0x00023749) vtel_slider_pane_g2_ParamLimits

0xcc04,	// (0x00023749) vtel_slider_pane_g2

0xcc11,	// (0x00023756) vtel_slider_pane_g3_ParamLimits

0xcc11,	// (0x00023756) vtel_slider_pane_g3

0xcbf7,	// (0x0002373c) vtel_slider_pane_g4_ParamLimits

0xcbf7,	// (0x0002373c) vtel_slider_pane_g4

0xcc1e,	// (0x00023763) vtel_slider_pane_g5_ParamLimits

0xcc1e,	// (0x00023763) vtel_slider_pane_g5

0x0004,

0xfa01,	// (0x00026546) vtel_slider_pane_g_ParamLimits

0xfa01,	// (0x00026546) vtel_slider_pane_g

0x0200,	// (0x00016d45) main_gallery2_pane

0x7ca3,	// (0x0001e7e8) aid_size_row_itut2_dropdow_list_ParamLimits

0x7ca3,	// (0x0001e7e8) aid_size_row_itut2_dropdow_list

0x7d11,	// (0x0001e856) grid_vitu2_function_top_pane_ParamLimits

0x7d11,	// (0x0001e856) grid_vitu2_function_top_pane

0x7d67,	// (0x0001e8ac) popup_vitu2_dropdown_list_window_ParamLimits

0x7d67,	// (0x0001e8ac) popup_vitu2_dropdown_list_window

0x7d87,	// (0x0001e8cc) popup_vitu2_match_list_window

0x7f8f,	// (0x0001ead4) cell_vitu2_function_top_pane_ParamLimits

0x7f8f,	// (0x0001ead4) cell_vitu2_function_top_pane

0x7faf,	// (0x0001eaf4) cell_vitu2_function_top_pane_cp01_ParamLimits

0x7faf,	// (0x0001eaf4) cell_vitu2_function_top_pane_cp01

0x7fcd,	// (0x0001eb12) cell_vitu2_function_top_wide_pane_ParamLimits

0x7fcd,	// (0x0001eb12) cell_vitu2_function_top_wide_pane

0x7bee,	// (0x0001e733) bg_button_pane_cp012

0x7feb,	// (0x0001eb30) cell_vitu2_function_top_pane_g1

0x7ffa,	// (0x0001eb3f) bg_button_pane_cp013_ParamLimits

0x7ffa,	// (0x0001eb3f) bg_button_pane_cp013

0xcc2b,	// (0x00023770) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xcc2b,	// (0x00023770) cell_vitu2_function_top_wide_pane_g1

0x8016,	// (0x0001eb5b) bg_popup_sub_pane_cp20

0x8024,	// (0x0001eb69) list_vitu2_match_list_pane

0x3f0e,	// (0x0001aa53) bg_popup_sub_pane_cp20_g1

0x3f16,	// (0x0001aa5b) bg_popup_sub_pane_cp20_g2

0x0ffd,	// (0x00017b42) bg_popup_sub_pane_cp20_g3

0x3f1e,	// (0x0001aa63) bg_popup_sub_pane_cp20_g4

0x0fdd,	// (0x00017b22) bg_popup_sub_pane_cp20_g5

0x4197,	// (0x0001acdc) bg_popup_sub_pane_cp20_g6

0x3f2e,	// (0x0001aa73) bg_popup_sub_pane_cp20_g7

0x3f36,	// (0x0001aa7b) bg_popup_sub_pane_cp20_g8

0x3f3e,	// (0x0001aa83) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa0c,	// (0x00026551) bg_popup_sub_pane_cp20_g

0x803c,	// (0x0001eb81) list_vitu2_match_list_item_pane_ParamLimits

0x803c,	// (0x0001eb81) list_vitu2_match_list_item_pane

0x804e,	// (0x0001eb93) list_vitu2_match_list_item_pane_t1

0x6e5b,	// (0x0001d9a0) bg_popup_sub_pane_cp21

0x805c,	// (0x0001eba1) grid_vitu2_dropdown_list_pane

0x8064,	// (0x0001eba9) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x8064,	// (0x0001eba9) cell_vitu2_dropdown_list_char_pane

0x8085,	// (0x0001ebca) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x8085,	// (0x0001ebca) cell_vitu2_dropdown_list_ctrl_pane

0x41e9,	// (0x0001ad2e) cell_vitu2_dropdown_list_char_pane_g1

0x41e0,	// (0x0001ad25) cell_vitu2_dropdown_list_char_pane_g2

0x41d7,	// (0x0001ad1c) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa29,	// (0x0002656e) cell_vitu2_dropdown_list_char_pane_g

0x80b1,	// (0x0001ebf6) cell_vitu2_dropdown_list_char_pane_t1

0xcc72,	// (0x000237b7) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xcc72,	// (0x000237b7) cell_vitu2_dropdown_list_ctrl_pane_g1

0xcc82,	// (0x000237c7) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xcc82,	// (0x000237c7) cell_vitu2_dropdown_list_ctrl_pane_g2

0xcc93,	// (0x000237d8) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xcc93,	// (0x000237d8) cell_vitu2_dropdown_list_ctrl_pane_g3

0x80bf,	// (0x0001ec04) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x80bf,	// (0x0001ec04) cell_vitu2_dropdown_list_ctrl_pane_g4

0x7b01,	// (0x0001e646) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x7b01,	// (0x0001e646) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa30,	// (0x00026575) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa30,	// (0x00026575) cell_vitu2_dropdown_list_ctrl_pane_g

0xcca3,	// (0x000237e8) aid_size_cell_gallery2_ParamLimits

0xcca3,	// (0x000237e8) aid_size_cell_gallery2

0xccb1,	// (0x000237f6) grid_gallery2_pane_ParamLimits

0xccb1,	// (0x000237f6) grid_gallery2_pane

0xccc0,	// (0x00023805) scroll_pane_cp029_ParamLimits

0xccc0,	// (0x00023805) scroll_pane_cp029

0xcccc,	// (0x00023811) cell_gallery2_pane_ParamLimits

0xcccc,	// (0x00023811) cell_gallery2_pane

0x41f2,	// (0x0001ad37) cell_gallery2_pane_g2

0xccfd,	// (0x00023842) cell_gallery2_pane_g3

0x41fc,	// (0x0001ad41) cell_gallery2_pane_g4

0x4204,	// (0x0001ad49) cell_gallery2_pane_g5

0x17af,	// (0x000182f4) grid_highlight_pane_cp10

0x7d87,	// (0x0001e8cc) popup_vitu2_match_list_window_ParamLimits

0x7d99,	// (0x0001e8de) popup_vitu2_query_window_ParamLimits

0x7d99,	// (0x0001e8de) popup_vitu2_query_window

0x6e5b,	// (0x0001d9a0) bg_vitu2_candi_button_pane

0x41e9,	// (0x0001ad2e) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x41e0,	// (0x0001ad25) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x41d7,	// (0x0001ad1c) cell_vitu2_dropdown_list_char_pane_g2_copy2

0xcd05,	// (0x0002384a) bg_button_pane_cp015

0xcd17,	// (0x0002385c) bg_button_pane_cp016

0xcd2a,	// (0x0002386f) bg_button_pane_cp017

0x2c4e,	// (0x00019793) bg_popup_sub_pane_cp22

0x420c,	// (0x0001ad51) popup_vitu2_query_window_g1

0xcd6f,	// (0x000238b4) popup_vitu2_query_window_g2

0x0002,

0xfa3b,	// (0x00026580) popup_vitu2_query_window_g

0xcd8c,	// (0x000238d1) popup_vitu2_query_window_t1_ParamLimits

0xcd8c,	// (0x000238d1) popup_vitu2_query_window_t1

0xcdbf,	// (0x00023904) popup_vitu2_query_window_t2_ParamLimits

0xcdbf,	// (0x00023904) popup_vitu2_query_window_t2

0xcdd1,	// (0x00023916) popup_vitu2_query_window_t3_ParamLimits

0xcdd1,	// (0x00023916) popup_vitu2_query_window_t3

0xcdf9,	// (0x0002393e) popup_vitu2_query_window_t4_ParamLimits

0xcdf9,	// (0x0002393e) popup_vitu2_query_window_t4

0xce1a,	// (0x0002395f) popup_vitu2_query_window_t5_ParamLimits

0xce1a,	// (0x0002395f) popup_vitu2_query_window_t5

0x0006,

0xfa42,	// (0x00026587) popup_vitu2_query_window_t_ParamLimits

0xfa42,	// (0x00026587) popup_vitu2_query_window_t

0x4010,	// (0x0001ab55) main_cset_text_pane

0xc89f,	// (0x000233e4) aid_area_touch_slider_ParamLimits

0xc8bb,	// (0x00023400) cset_slider_pane_ParamLimits

0xc8e5,	// (0x0002342a) main_cset_slider_pane_g1_ParamLimits

0xc8fa,	// (0x0002343f) main_cset_slider_pane_g2_ParamLimits

0x4031,	// (0x0001ab76) main_cset_slider_pane_g3_ParamLimits

0x4031,	// (0x0001ab76) main_cset_slider_pane_g3

0xc90f,	// (0x00023454) main_cset_slider_pane_g4_ParamLimits

0xc90f,	// (0x00023454) main_cset_slider_pane_g4

0xc91e,	// (0x00023463) main_cset_slider_pane_g5_ParamLimits

0xc91e,	// (0x00023463) main_cset_slider_pane_g5

0xc92c,	// (0x00023471) main_cset_slider_pane_g6_ParamLimits

0xc92c,	// (0x00023471) main_cset_slider_pane_g6

0xf995,	// (0x000264da) main_cset_slider_pane_g_ParamLimits

0x4061,	// (0x0001aba6) main_cset_slider_pane_t1_ParamLimits

0xc9c2,	// (0x00023507) main_cset_slider_pane_t2_ParamLimits

0xc9dc,	// (0x00023521) main_cset_slider_pane_t3_ParamLimits

0xc9f6,	// (0x0002353b) main_cset_slider_pane_t4_ParamLimits

0xca14,	// (0x00023559) main_cset_slider_pane_t5_ParamLimits

0xca36,	// (0x0002357b) main_cset_slider_pane_t6_ParamLimits

0xca4d,	// (0x00023592) main_cset_slider_pane_t7_ParamLimits

0xca7b,	// (0x000235c0) main_cset_slider_pane_t8_ParamLimits

0xca7b,	// (0x000235c0) main_cset_slider_pane_t8

0xcaa3,	// (0x000235e8) main_cset_slider_pane_t9_ParamLimits

0xcaa3,	// (0x000235e8) main_cset_slider_pane_t9

0xcacb,	// (0x00023610) main_cset_slider_pane_t10_ParamLimits

0xcacb,	// (0x00023610) main_cset_slider_pane_t10

0xcaf3,	// (0x00023638) main_cset_slider_pane_t11_ParamLimits

0xcaf3,	// (0x00023638) main_cset_slider_pane_t11

0xcb1d,	// (0x00023662) main_cset_slider_pane_t12_ParamLimits

0xcb1d,	// (0x00023662) main_cset_slider_pane_t12

0xcb3c,	// (0x00023681) main_cset_slider_pane_t13_ParamLimits

0xcb3c,	// (0x00023681) main_cset_slider_pane_t13

0xf9ba,	// (0x000264ff) main_cset_slider_pane_t_ParamLimits

0x0200,	// (0x00016d45) bg_popup_sub_pane_cp011

0x4218,	// (0x0001ad5d) main_cset_text_pane_g1

0x4220,	// (0x0001ad65) main_cset_text_pane_t1

0x422e,	// (0x0001ad73) main_cset_text_pane_t2

0x423c,	// (0x0001ad81) main_cset_text_pane_t3

0x424a,	// (0x0001ad8f) main_cset_text_pane_t4

0x4258,	// (0x0001ad9d) main_cset_text_pane_t5

0x4266,	// (0x0001adab) main_cset_text_pane_t6

0x4274,	// (0x0001adb9) main_cset_text_pane_t7

0x0006,

0xfa51,	// (0x00026596) main_cset_text_pane_t

0x0200,	// (0x00016d45) main_cam4_burst_pane

0x0200,	// (0x00016d45) main_cam5_pane

0x112c,	// (0x00017c71) bg_button_pane_cp019

0xc7f7,	// (0x0002333c) bg_button_pane_cp020

0x403d,	// (0x0001ab82) main_cset_slider_pane_g7_ParamLimits

0x403d,	// (0x0001ab82) main_cset_slider_pane_g7

0x4049,	// (0x0001ab8e) main_cset_slider_pane_g8_ParamLimits

0x4049,	// (0x0001ab8e) main_cset_slider_pane_g8

0xc942,	// (0x00023487) main_cset_slider_pane_g9_ParamLimits

0xc942,	// (0x00023487) main_cset_slider_pane_g9

0xc94e,	// (0x00023493) main_cset_slider_pane_g10_ParamLimits

0xc94e,	// (0x00023493) main_cset_slider_pane_g10

0xc95a,	// (0x0002349f) main_cset_slider_pane_g11_ParamLimits

0xc95a,	// (0x0002349f) main_cset_slider_pane_g11

0xc966,	// (0x000234ab) main_cset_slider_pane_g12_ParamLimits

0xc966,	// (0x000234ab) main_cset_slider_pane_g12

0xc972,	// (0x000234b7) main_cset_slider_pane_g13_ParamLimits

0xc972,	// (0x000234b7) main_cset_slider_pane_g13

0xc980,	// (0x000234c5) main_cset_slider_pane_g14_ParamLimits

0xc980,	// (0x000234c5) main_cset_slider_pane_g14

0xc98e,	// (0x000234d3) main_cset_slider_pane_g15_ParamLimits

0xc98e,	// (0x000234d3) main_cset_slider_pane_g15

0x408f,	// (0x0001abd4) main_cset_slider_pane_t14_ParamLimits

0x408f,	// (0x0001abd4) main_cset_slider_pane_t14

0x40c8,	// (0x0001ac0d) main_cset_slider_pane_t15_ParamLimits

0x40c8,	// (0x0001ac0d) main_cset_slider_pane_t15

0xce91,	// (0x000239d6) aid_cam4_burst_size_cell_ParamLimits

0xce91,	// (0x000239d6) aid_cam4_burst_size_cell

0xcead,	// (0x000239f2) grid_cam4_burst_pane_ParamLimits

0xcead,	// (0x000239f2) grid_cam4_burst_pane

0xcedd,	// (0x00023a22) linegrid_cam4_burst_pane_ParamLimits

0xcedd,	// (0x00023a22) linegrid_cam4_burst_pane

0xceff,	// (0x00023a44) scroll_pane_cp30_ParamLimits

0xceff,	// (0x00023a44) scroll_pane_cp30

0xcf0b,	// (0x00023a50) cell_cam4_burst_pane_ParamLimits

0xcf0b,	// (0x00023a50) cell_cam4_burst_pane

0x428e,	// (0x0001add3) linegrid_cam4_burst_pane_g1_ParamLimits

0x428e,	// (0x0001add3) linegrid_cam4_burst_pane_g1

0xcf47,	// (0x00023a8c) linegrid_cam4_burst_pane_g2_ParamLimits

0xcf47,	// (0x00023a8c) linegrid_cam4_burst_pane_g2

0x429b,	// (0x0001ade0) linegrid_cam4_burst_pane_g3_ParamLimits

0x429b,	// (0x0001ade0) linegrid_cam4_burst_pane_g3

0x0002,

0xfa60,	// (0x000265a5) linegrid_cam4_burst_pane_g_ParamLimits

0xfa60,	// (0x000265a5) linegrid_cam4_burst_pane_g

0xcf58,	// (0x00023a9d) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xcf58,	// (0x00023a9d) linegrid_cam4_burst_pane_g3_copy1

0x42a8,	// (0x0001aded) linegrid_cam4_burst_pane_g4_ParamLimits

0x42a8,	// (0x0001aded) linegrid_cam4_burst_pane_g4

0xcf72,	// (0x00023ab7) linegrid_cam4_burst_pane_g5_ParamLimits

0xcf72,	// (0x00023ab7) linegrid_cam4_burst_pane_g5

0xcf83,	// (0x00023ac8) linegrid_cam4_burst_pane_g6_ParamLimits

0xcf83,	// (0x00023ac8) linegrid_cam4_burst_pane_g6

0x42b5,	// (0x0001adfa) linegrid_cam4_burst_pane_g7_ParamLimits

0x42b5,	// (0x0001adfa) linegrid_cam4_burst_pane_g7

0xcf94,	// (0x00023ad9) cell_cam4_burst_pane_g1

0x42ce,	// (0x0001ae13) main_cam5_pane_t1_ParamLimits

0x42ce,	// (0x0001ae13) main_cam5_pane_t1

0x42e0,	// (0x0001ae25) main_cam5_pane_t2_ParamLimits

0x42e0,	// (0x0001ae25) main_cam5_pane_t2

0x42f2,	// (0x0001ae37) main_cam5_pane_t3_ParamLimits

0x42f2,	// (0x0001ae37) main_cam5_pane_t3

0x4304,	// (0x0001ae49) main_cam5_pane_t4_ParamLimits

0x4304,	// (0x0001ae49) main_cam5_pane_t4

0x431a,	// (0x0001ae5f) main_cam5_pane_t5_ParamLimits

0x431a,	// (0x0001ae5f) main_cam5_pane_t5

0x432c,	// (0x0001ae71) main_cam5_pane_t6_ParamLimits

0x432c,	// (0x0001ae71) main_cam5_pane_t6

0x4340,	// (0x0001ae85) main_cam5_pane_t7_ParamLimits

0x4340,	// (0x0001ae85) main_cam5_pane_t7

0x4352,	// (0x0001ae97) main_cam5_pane_t8_ParamLimits

0x4352,	// (0x0001ae97) main_cam5_pane_t8

0x436e,	// (0x0001aeb3) main_cam5_pane_t9_ParamLimits

0x436e,	// (0x0001aeb3) main_cam5_pane_t9

0x4380,	// (0x0001aec5) main_cam5_pane_t10_ParamLimits

0x4380,	// (0x0001aec5) main_cam5_pane_t10

0x4392,	// (0x0001aed7) main_cam5_pane_t11_ParamLimits

0x4392,	// (0x0001aed7) main_cam5_pane_t11

0x43a4,	// (0x0001aee9) main_cam5_pane_t12_ParamLimits

0x43a4,	// (0x0001aee9) main_cam5_pane_t12

0x43b9,	// (0x0001aefe) main_cam5_pane_t13_ParamLimits

0x43b9,	// (0x0001aefe) main_cam5_pane_t13

0x000c,

0xfa6c,	// (0x000265b1) main_cam5_pane_t_ParamLimits

0xfa6c,	// (0x000265b1) main_cam5_pane_t

0x841c,	// (0x0001ef61) popup_scut_keymap_window_ParamLimits

0x841c,	// (0x0001ef61) popup_scut_keymap_window

0xcfa7,	// (0x00023aec) aid_size_cell_brow_shortcut

0x17af,	// (0x000182f4) bg_popup_window_pane_cp010

0xcfb3,	// (0x00023af8) grid_scut_pane

0xcfbf,	// (0x00023b04) cell_scut_pane_ParamLimits

0xcfbf,	// (0x00023b04) cell_scut_pane

0xcfd6,	// (0x00023b1b) cell_scut_pane_g1

0x43d6,	// (0x0001af1b) cell_scut_pane_t1

0x43e5,	// (0x0001af2a) cell_scut_pane_t2

0xcfdf,	// (0x00023b24) cell_scut_pane_t3

0x0002,

0xfa87,	// (0x000265cc) cell_scut_pane_t

0xb972,	// (0x000224b7) main_mup3_pane_g8_ParamLimits

0xb972,	// (0x000224b7) main_mup3_pane_g8

0x7cb1,	// (0x0001e7f6) area_vitu2_query_pane_ParamLimits

0x7cb1,	// (0x0001e7f6) area_vitu2_query_pane

0xcd3d,	// (0x00023882) input_focus_pane_cp08

0x43f4,	// (0x0001af39) area_vitu2_query_pane_g1

0xcfed,	// (0x00023b32) area_vitu2_query_pane_g2

0x0001,

0xfa8e,	// (0x000265d3) area_vitu2_query_pane_g

0xcffe,	// (0x00023b43) area_vitu2_query_pane_t1_ParamLimits

0xcffe,	// (0x00023b43) area_vitu2_query_pane_t1

0xd012,	// (0x00023b57) area_vitu2_query_pane_t2_ParamLimits

0xd012,	// (0x00023b57) area_vitu2_query_pane_t2

0xd026,	// (0x00023b6b) area_vitu2_query_pane_t3_ParamLimits

0xd026,	// (0x00023b6b) area_vitu2_query_pane_t3

0x4400,	// (0x0001af45) area_vitu2_query_pane_t4_ParamLimits

0x4400,	// (0x0001af45) area_vitu2_query_pane_t4

0x4428,	// (0x0001af6d) area_vitu2_query_pane_t5_ParamLimits

0x4428,	// (0x0001af6d) area_vitu2_query_pane_t5

0x4450,	// (0x0001af95) area_vitu2_query_pane_t6_ParamLimits

0x4450,	// (0x0001af95) area_vitu2_query_pane_t6

0x0006,

0xfa93,	// (0x000265d8) area_vitu2_query_pane_t_ParamLimits

0xfa93,	// (0x000265d8) area_vitu2_query_pane_t

0xd04e,	// (0x00023b93) bg_button_pane_cp018

0xd05c,	// (0x00023ba1) bg_button_pane_cp021

0xd068,	// (0x00023bad) bg_button_pane_cp022

0xd079,	// (0x00023bbe) input_focus_pane_cp09

0xa176,	// (0x00020cbb) aid_size_touch_mv_arrow_left

0xa1a1,	// (0x00020ce6) aid_size_touch_mv_arrow_right

0xc9a6,	// (0x000234eb) main_cset_slider_pane_g16_ParamLimits

0xc9a6,	// (0x000234eb) main_cset_slider_pane_g16

0xc9b4,	// (0x000234f9) main_cset_slider_pane_g17_ParamLimits

0xc9b4,	// (0x000234f9) main_cset_slider_pane_g17

0xcf94,	// (0x00023ad9) cell_cam4_burst_pane_g1_ParamLimits

0x0200,	// (0x00016d45) compa_mode_pane

0xcbac,	// (0x000236f1) popup_vtel_slider_window_g3_ParamLimits

0xcbac,	// (0x000236f1) popup_vtel_slider_window_g3

0xcbc0,	// (0x00023705) popup_vtel_slider_window_g4_ParamLimits

0xcbc0,	// (0x00023705) popup_vtel_slider_window_g4

0xcbd4,	// (0x00023719) popup_vtel_slider_window_t1_ParamLimits

0xcbd4,	// (0x00023719) popup_vtel_slider_window_t1

0x0200,	// (0x00016d45) main_cl_pane

0x2c76,	// (0x000197bb) popup_imed_adjust2_window_ParamLimits

0x2c4e,	// (0x00019793) bg_tb_trans_pane_cp05_ParamLimits

0x3677,	// (0x0001a1bc) popup_imed_adjust2_window_g1_ParamLimits

0x3686,	// (0x0001a1cb) popup_imed_adjust2_window_g2_ParamLimits

0x3686,	// (0x0001a1cb) popup_imed_adjust2_window_g2

0x3692,	// (0x0001a1d7) popup_imed_adjust2_window_g3_ParamLimits

0x3692,	// (0x0001a1d7) popup_imed_adjust2_window_g3

0x0002,

0xf7fe,	// (0x00026343) popup_imed_adjust2_window_g_ParamLimits

0xf7fe,	// (0x00026343) popup_imed_adjust2_window_g

0x369e,	// (0x0001a1e3) popup_imed_adjust2_window_t1_ParamLimits

0x36b6,	// (0x0001a1fb) slider_imed_adjust_pane_ParamLimits

0x36ca,	// (0x0001a20f) slider_imed_adjust_pane_g1_ParamLimits

0x36da,	// (0x0001a21f) slider_imed_adjust_pane_g2_ParamLimits

0x36ea,	// (0x0001a22f) slider_imed_adjust_pane_g3_ParamLimits

0x36fb,	// (0x0001a240) slider_imed_adjust_pane_g4_ParamLimits

0xf805,	// (0x0002634a) slider_imed_adjust_pane_g_ParamLimits

0x7a3a,	// (0x0001e57f) aid_touch_area_cam4_ParamLimits

0x7a3a,	// (0x0001e57f) aid_touch_area_cam4

0x7a4a,	// (0x0001e58f) battery_pane_cp01

0x7ad1,	// (0x0001e616) main_camera4_pane_g6_ParamLimits

0x7ad1,	// (0x0001e616) main_camera4_pane_g6

0x7aef,	// (0x0001e634) main_camera4_pane_t2_ParamLimits

0x7aef,	// (0x0001e634) main_camera4_pane_t2

0x0001,

0xf908,	// (0x0002644d) main_camera4_pane_t_ParamLimits

0xf908,	// (0x0002644d) main_camera4_pane_t

0x7b60,	// (0x0001e6a5) aid_touch_area_vid4_ParamLimits

0x7b60,	// (0x0001e6a5) aid_touch_area_vid4

0x7ba0,	// (0x0001e6e5) main_video4_pane_g5_ParamLimits

0x7ba0,	// (0x0001e6e5) main_video4_pane_g5

0x7bc2,	// (0x0001e707) vid4_progress_pane_ParamLimits

0x7bc2,	// (0x0001e707) vid4_progress_pane

0x4055,	// (0x0001ab9a) main_cset_slider_pane_g18_ParamLimits

0x4055,	// (0x0001ab9a) main_cset_slider_pane_g18

0x42c2,	// (0x0001ae07) cell_cam4_burst_pane_g2_ParamLimits

0x42c2,	// (0x0001ae07) cell_cam4_burst_pane_g2

0x0001,

0xfa67,	// (0x000265ac) cell_cam4_burst_pane_g_ParamLimits

0xfa67,	// (0x000265ac) cell_cam4_burst_pane_g

0xd08a,	// (0x00023bcf) bg_cl_pane_ParamLimits

0xd08a,	// (0x00023bcf) bg_cl_pane

0xd096,	// (0x00023bdb) cl_header_pane_ParamLimits

0xd096,	// (0x00023bdb) cl_header_pane

0xd0a2,	// (0x00023be7) cl_listscroll_pane_ParamLimits

0xd0a2,	// (0x00023be7) cl_listscroll_pane

0x449c,	// (0x0001afe1) bg_cl_pane_g1

0x44a4,	// (0x0001afe9) bg_cl_pane_g2

0x44ac,	// (0x0001aff1) bg_cl_pane_g3

0x44b4,	// (0x0001aff9) bg_cl_pane_g4

0x44bc,	// (0x0001b001) bg_cl_pane_g5

0x44c4,	// (0x0001b009) bg_cl_pane_g6

0x44cc,	// (0x0001b011) bg_cl_pane_g7

0x44d4,	// (0x0001b019) bg_cl_pane_g8

0x44dc,	// (0x0001b021) bg_cl_pane_g9

0x0008,

0xfaa2,	// (0x000265e7) bg_cl_pane_g

0xd0ae,	// (0x00023bf3) aid_height_cl_leading_ParamLimits

0xd0ae,	// (0x00023bf3) aid_height_cl_leading

0xd0ba,	// (0x00023bff) aid_height_cl_text_ParamLimits

0xd0ba,	// (0x00023bff) aid_height_cl_text

0x3823,	// (0x0001a368) bg_cl_header_pane_ParamLimits

0x3823,	// (0x0001a368) bg_cl_header_pane

0xd0d2,	// (0x00023c17) cl_header_pane_g1_ParamLimits

0xd0d2,	// (0x00023c17) cl_header_pane_g1

0xd0df,	// (0x00023c24) cl_header_pane_t1_ParamLimits

0xd0df,	// (0x00023c24) cl_header_pane_t1

0x44e4,	// (0x0001b029) cl_list_pane

0x4028,	// (0x0001ab6d) hc_scroll_pane_cp01

0x0fdd,	// (0x00017b22) bg_cl_header_pane_g1

0x3f0e,	// (0x0001aa53) bg_cl_header_pane_g2

0x0ffd,	// (0x00017b42) bg_cl_header_pane_g3

0x3f1e,	// (0x0001aa63) bg_cl_header_pane_g4

0x3f16,	// (0x0001aa5b) bg_cl_header_pane_g5

0x4197,	// (0x0001acdc) bg_cl_header_pane_g6

0x3f36,	// (0x0001aa7b) bg_cl_header_pane_g7

0x3f3e,	// (0x0001aa83) bg_cl_header_pane_g8

0x3f2e,	// (0x0001aa73) bg_cl_header_pane_g9

0x0008,

0xfab5,	// (0x000265fa) bg_cl_header_pane_g

0xd0f1,	// (0x00023c36) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xd0f1,	// (0x00023c36) hc_cl_list_double_graphic_heading_pane

0xd108,	// (0x00023c4d) hc_cl_list_single_graphic_pane_ParamLimits

0xd108,	// (0x00023c4d) hc_cl_list_single_graphic_pane

0xd128,	// (0x00023c6d) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xd128,	// (0x00023c6d) hc_cl_list_single_graphic_pane_g1

0xd134,	// (0x00023c79) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xd134,	// (0x00023c79) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfac8,	// (0x0002660d) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfac8,	// (0x0002660d) hc_cl_list_single_graphic_pane_g

0xd148,	// (0x00023c8d) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xd148,	// (0x00023c8d) hc_cl_list_single_graphic_pane_t1

0xd128,	// (0x00023c6d) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xd128,	// (0x00023c6d) hc_cl_list_double_graphic_heading_pane_g1

0xd15d,	// (0x00023ca2) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xd15d,	// (0x00023ca2) hc_cl_list_double_graphic_heading_pane_g2

0xd171,	// (0x00023cb6) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xd171,	// (0x00023cb6) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfacd,	// (0x00026612) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfacd,	// (0x00026612) hc_cl_list_double_graphic_heading_pane_g

0xd185,	// (0x00023cca) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xd185,	// (0x00023cca) hc_cl_list_double_graphic_heading_pane_t1

0xd19a,	// (0x00023cdf) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xd19a,	// (0x00023cdf) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfad4,	// (0x00026619) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfad4,	// (0x00026619) hc_cl_list_double_graphic_heading_pane_t

0x80e3,	// (0x0001ec28) vid4_progress_pane_g1

0x80f3,	// (0x0001ec38) vid4_progress_pane_g2

0x1276,	// (0x00017dbb) vid4_progress_pane_g3

0x7b28,	// (0x0001e66d) vid4_progress_pane_g4

0x0004,

0xfad9,	// (0x0002661e) vid4_progress_pane_g

0x8103,	// (0x0001ec48) vid4_progress_pane_t1

0x8118,	// (0x0001ec5d) vid4_progress_pane_t2

0x0002,

0xfae4,	// (0x00026629) vid4_progress_pane_t

0x8143,	// (0x0001ec88) wait_bar_pane_cp07

0x2f47,	// (0x00019a8c) blid_firmament_pane_ParamLimits

0x2f8a,	// (0x00019acf) popup_blid_sat_info2_window_g1

0x2fae,	// (0x00019af3) popup_blid_sat_info2_window_t3

0x2fbc,	// (0x00019b01) popup_blid_sat_info2_window_t4

0x2fca,	// (0x00019b0f) popup_blid_sat_info2_window_t5

0x2fd8,	// (0x00019b1d) popup_blid_sat_info2_window_t6

0x2fe8,	// (0x00019b2d) popup_blid_sat_info2_window_t7

0x2ff6,	// (0x00019b3b) popup_blid_sat_info2_window_t8

0x3004,	// (0x00019b49) popup_blid_sat_info2_window_t9

0x3012,	// (0x00019b57) popup_blid_sat_info2_window_t10

0x30d6,	// (0x00019c1b) aid_firma_cardinal_ParamLimits

0x30ea,	// (0x00019c2f) blid_firmament_pane_t1_ParamLimits

0x3101,	// (0x00019c46) blid_firmament_pane_t2_ParamLimits

0x3118,	// (0x00019c5d) blid_firmament_pane_t3_ParamLimits

0x312f,	// (0x00019c74) blid_firmament_pane_t4_ParamLimits

0xf6f7,	// (0x0002623c) blid_firmament_pane_t_ParamLimits

0x3146,	// (0x00019c8b) blid_sat_info_pane_ParamLimits

0x0270,	// (0x00016db5) main_cam_set_pane_ParamLimits

0xc093,	// (0x00022bd8) aid_size_cell_colour_35_ParamLimits

0xc0ad,	// (0x00022bf2) aid_size_cell_colour_112_ParamLimits

0xc0c4,	// (0x00022c09) aid_size_cell_effect_ParamLimits

0x0270,	// (0x00016db5) bg_tb_trans_pane_cp02_ParamLimits

0x12a4,	// (0x00017de9) heading_imed_pane_ParamLimits

0xc0de,	// (0x00022c23) listscroll_imed_pane_ParamLimits

0x2278,	// (0x00018dbd) popup_call2_audio_first_window_g5_ParamLimits

0x2278,	// (0x00018dbd) popup_call2_audio_first_window_g5

0x78c5,	// (0x0001e40a) aid_size_touch_image3_arrow_left_ParamLimits

0x78c5,	// (0x0001e40a) aid_size_touch_image3_arrow_left

0x78db,	// (0x0001e420) aid_size_touch_image3_arrow_right_ParamLimits

0x78db,	// (0x0001e420) aid_size_touch_image3_arrow_right

0x812e,	// (0x0001ec73) vid4_progress_pane_t3

0xc384,	// (0x00022ec9) main_hwr_training_symbol_option_pane_ParamLimits

0xc384,	// (0x00022ec9) main_hwr_training_symbol_option_pane

0x3972,	// (0x0001a4b7) popup_hwr_training_preview_window_ParamLimits

0x3972,	// (0x0001a4b7) popup_hwr_training_preview_window

0x75c5,	// (0x0001e10a) hwr_training_navi_pane_g5_ParamLimits

0x75c5,	// (0x0001e10a) hwr_training_navi_pane_g5

0x3efc,	// (0x0001aa41) popup_char_count_window

0x8016,	// (0x0001eb5b) bg_popup_sub_pane_cp20_ParamLimits

0x8024,	// (0x0001eb69) list_vitu2_match_list_pane_ParamLimits

0x8030,	// (0x0001eb75) vitu2_page_scroll_pane_ParamLimits

0x8030,	// (0x0001eb75) vitu2_page_scroll_pane

0x45cb,	// (0x0001b110) list_single_hwr_training_symbol_option_pane_ParamLimits

0x45cb,	// (0x0001b110) list_single_hwr_training_symbol_option_pane

0x45de,	// (0x0001b123) list_single_hwr_training_symbol_option_pane_g1

0x45e6,	// (0x0001b12b) list_single_hwr_training_symbol_option_pane_t1

0x45f4,	// (0x0001b139) bg_button_pane_cp023

0x45fd,	// (0x0001b142) bg_button_pane_cp024

0xd1af,	// (0x00023cf4) vitu2_page_scroll_pane_g1

0xd1b7,	// (0x00023cfc) vitu2_page_scroll_pane_g2

0x0001,

0xfaeb,	// (0x00026630) vitu2_page_scroll_pane_g

0xd1bf,	// (0x00023d04) vitu2_page_scroll_pane_t1

0x2e63,	// (0x000199a8) popup_char_count_window_g1

0x4630,	// (0x0001b175) popup_char_count_window_g2

0x4639,	// (0x0001b17e) popup_char_count_window_g3

0x0002,

0xfaf0,	// (0x00026635) popup_char_count_window_g

0x4642,	// (0x0001b187) popup_char_count_window_t1

0x0200,	// (0x00016d45) main_vded2_pane

0x3663,	// (0x0001a1a8) aid_size_cell_imed_line

0x366d,	// (0x0001a1b2) grid_imed_line_width_pane

0x7c26,	// (0x0001e76b) vid4_indicators_pane_g4

0x4650,	// (0x0001b195) cell_imed_line_width_pane_ParamLimits

0x4650,	// (0x0001b195) cell_imed_line_width_pane

0x4664,	// (0x0001b1a9) cell_imed_line_width_pane_g1

0x466d,	// (0x0001b1b2) cell_imed_line_width_pane_g2

0x0001,

0xfaf7,	// (0x0002663c) cell_imed_line_width_pane_g

0xd1ce,	// (0x00023d13) main_vded2_pane_g1_ParamLimits

0xd1ce,	// (0x00023d13) main_vded2_pane_g1

0xd1db,	// (0x00023d20) main_vded2_pane_g2_ParamLimits

0xd1db,	// (0x00023d20) main_vded2_pane_g2

0x0001,

0xfafc,	// (0x00026641) main_vded2_pane_g_ParamLimits

0xfafc,	// (0x00026641) main_vded2_pane_g

0xd1e9,	// (0x00023d2e) vded2_slider_pane_ParamLimits

0xd1e9,	// (0x00023d2e) vded2_slider_pane

0xd1f6,	// (0x00023d3b) aid_size_touch_vded2_end

0xd200,	// (0x00023d45) aid_size_touch_vded2_playhead

0x4675,	// (0x0001b1ba) aid_size_touch_vded2_start

0x467d,	// (0x0001b1c2) vded2_slider_bg_pane

0x4686,	// (0x0001b1cb) vded2_slider_pane_g1

0x468f,	// (0x0001b1d4) vded2_slider_pane_g2

0xd208,	// (0x00023d4d) vded2_slider_pane_g3

0x0002,

0xfb01,	// (0x00026646) vded2_slider_pane_g

0x4697,	// (0x0001b1dc) vded2_slider_bg_pane_g1

0x46a0,	// (0x0001b1e5) vded2_slider_bg_pane_g2

0x46a9,	// (0x0001b1ee) vded2_slider_bg_pane_g3

0x0002,

0xfb08,	// (0x0002664d) vded2_slider_bg_pane_g

0xa812,	// (0x00021357) aid_postcard_touch_down_pane_ParamLimits

0xa812,	// (0x00021357) aid_postcard_touch_down_pane

0xa822,	// (0x00021367) aid_postcard_touch_up_pane_ParamLimits

0xa822,	// (0x00021367) aid_postcard_touch_up_pane

0x0200,	// (0x00016d45) main_blid2_pane

0x2c5c,	// (0x000197a1) popup_blid2_search_window

0x0200,	// (0x00016d45) blid2_gps_pane

0x0200,	// (0x00016d45) blid2_navig_pane

0x0200,	// (0x00016d45) blid2_search_pane

0x0200,	// (0x00016d45) blid2_tripm_pane

0xd211,	// (0x00023d56) blid2_search_pane_g1_ParamLimits

0xd211,	// (0x00023d56) blid2_search_pane_g1

0xd221,	// (0x00023d66) blid2_search_pane_t1_ParamLimits

0xd221,	// (0x00023d66) blid2_search_pane_t1

0xd233,	// (0x00023d78) aid_size_cell_blid2_gps_ParamLimits

0xd233,	// (0x00023d78) aid_size_cell_blid2_gps

0xd243,	// (0x00023d88) blid2_gps_pane_g1_ParamLimits

0xd243,	// (0x00023d88) blid2_gps_pane_g1

0xd24f,	// (0x00023d94) grid_blid2_satellite_pane_ParamLimits

0xd24f,	// (0x00023d94) grid_blid2_satellite_pane

0xd25f,	// (0x00023da4) blid2_navig_pane_g1_ParamLimits

0xd25f,	// (0x00023da4) blid2_navig_pane_g1

0xd26b,	// (0x00023db0) blid2_navig_pane_t1_ParamLimits

0xd26b,	// (0x00023db0) blid2_navig_pane_t1

0xd27d,	// (0x00023dc2) blid2_navig_pane_t2_ParamLimits

0xd27d,	// (0x00023dc2) blid2_navig_pane_t2

0x0001,

0xfb0f,	// (0x00026654) blid2_navig_pane_t_ParamLimits

0xfb0f,	// (0x00026654) blid2_navig_pane_t

0xd28f,	// (0x00023dd4) blid2_navig_ring_pane_ParamLimits

0xd28f,	// (0x00023dd4) blid2_navig_ring_pane

0xd29f,	// (0x00023de4) blid2_speed_pane_ParamLimits

0xd29f,	// (0x00023de4) blid2_speed_pane

0xd2ab,	// (0x00023df0) blid2_tripm_pane_g1_ParamLimits

0xd2ab,	// (0x00023df0) blid2_tripm_pane_g1

0xd2bb,	// (0x00023e00) blid2_tripm_pane_g2_ParamLimits

0xd2bb,	// (0x00023e00) blid2_tripm_pane_g2

0xd2c7,	// (0x00023e0c) blid2_tripm_pane_g3_ParamLimits

0xd2c7,	// (0x00023e0c) blid2_tripm_pane_g3

0xd2d3,	// (0x00023e18) blid2_tripm_pane_g4_ParamLimits

0xd2d3,	// (0x00023e18) blid2_tripm_pane_g4

0xd2df,	// (0x00023e24) blid2_tripm_pane_g5_ParamLimits

0xd2df,	// (0x00023e24) blid2_tripm_pane_g5

0x0005,

0xfb14,	// (0x00026659) blid2_tripm_pane_g_ParamLimits

0xfb14,	// (0x00026659) blid2_tripm_pane_g

0xd2fb,	// (0x00023e40) blid2_tripm_pane_t1_ParamLimits

0xd2fb,	// (0x00023e40) blid2_tripm_pane_t1

0xd30f,	// (0x00023e54) blid2_tripm_pane_t2_ParamLimits

0xd30f,	// (0x00023e54) blid2_tripm_pane_t2

0xd323,	// (0x00023e68) blid2_tripm_pane_t3_ParamLimits

0xd323,	// (0x00023e68) blid2_tripm_pane_t3

0x0003,

0xfb21,	// (0x00026666) blid2_tripm_pane_t_ParamLimits

0xfb21,	// (0x00026666) blid2_tripm_pane_t

0xd355,	// (0x00023e9a) cell_blid2_satellite_pane_ParamLimits

0xd355,	// (0x00023e9a) cell_blid2_satellite_pane

0xd36f,	// (0x00023eb4) cell_blid2_satellite_pane_g1

0x46b2,	// (0x0001b1f7) cell_blid2_satellite_pane_t1

0x3156,	// (0x00019c9b) blid2_speed_pane_g1

0x46c0,	// (0x0001b205) blid2_speed_pane_t1

0x46ce,	// (0x0001b213) blid2_speed_pane_t2

0x0001,

0xfb2a,	// (0x0002666f) blid2_speed_pane_t

0x3156,	// (0x00019c9b) blid2_navig_ring_pane_g1

0xd378,	// (0x00023ebd) blid2_navig_ring_pane_g2

0xd380,	// (0x00023ec5) blid2_navig_ring_pane_g3

0xd388,	// (0x00023ecd) blid2_navig_ring_pane_g4

0xd390,	// (0x00023ed5) blid2_navig_ring_pane_g5

0x0004,

0xfb2f,	// (0x00026674) blid2_navig_ring_pane_g

0x0200,	// (0x00016d45) bg_popup_window_pane_cp011

0x46dc,	// (0x0001b221) popup_blid2_search_window_g1

0x46e4,	// (0x0001b229) popup_blid2_search_window_t1

0x46f2,	// (0x0001b237) popup_blid2_search_window_t2

0x0001,

0xfb3a,	// (0x0002667f) popup_blid2_search_window_t

0x0eec,	// (0x00017a31) main_browser_pane_g1

0x0a1b,	// (0x00017560) main_browser_pane_ParamLimits

0x7bee,	// (0x0001e733) bg_button_pane_cp011_ParamLimits

0x7f38,	// (0x0001ea7d) cell_vitu2_function_pane_g1_ParamLimits

0x2c4e,	// (0x00019793) bg_popup_sub_pane_cp22_ParamLimits

0xcd3d,	// (0x00023882) input_focus_pane_cp08_ParamLimits

0xcd54,	// (0x00023899) popup_vitu2_query_button_pane_ParamLimits

0xcd54,	// (0x00023899) popup_vitu2_query_button_pane

0xcd65,	// (0x000238aa) popup_vitu2_query_input_button_pane

0x420c,	// (0x0001ad51) popup_vitu2_query_window_g1_ParamLimits

0xcd6f,	// (0x000238b4) popup_vitu2_query_window_g2_ParamLimits

0xfa3b,	// (0x00026580) popup_vitu2_query_window_g_ParamLimits

0x0200,	// (0x00016d45) bg_button_pane_cp026

0xd398,	// (0x00023edd) popup_vitu2_query_input_button_pane_g1

0x0200,	// (0x00016d45) bg_button_pane_cp025

0x4700,	// (0x0001b245) popup_vitu2_query_button_pane_t1

0xb67f,	// (0x000221c4) main_mp3_pane_t6

0xb68f,	// (0x000221d4) popup_slider_window_cp01

0x7b0f,	// (0x0001e654) cam4_battery_pane

0x7bfc,	// (0x0001e741) cam4_battery_pane_cp02

0x80db,	// (0x0001ec20) cam4_battery_pane_cp01

0x80db,	// (0x0001ec20) cam4_battery_pane_cp03

0x470e,	// (0x0001b253) cam4_battery_pane_g1

0x3156,	// (0x00019c9b) cam4_battery_pane_g2

0x0001,

0xfb3f,	// (0x00026684) cam4_battery_pane_g

0x3020,	// (0x00019b65) popup_blid_sat_info2_window_t11

0xa176,	// (0x00020cbb) aid_size_touch_mv_arrow_left_ParamLimits

0xa1a1,	// (0x00020ce6) aid_size_touch_mv_arrow_right_ParamLimits

0x170f,	// (0x00018254) navi_pane_g1_ParamLimits

0xa1ca,	// (0x00020d0f) navi_pane_g2_ParamLimits

0xa1f8,	// (0x00020d3d) navi_pane_g3_ParamLimits

0xf409,	// (0x00025f4e) navi_pane_g_ParamLimits

0xa252,	// (0x00020d97) navi_pane_mv_t1_ParamLimits

0xc0ea,	// (0x00022c2f) grid_imed_effect_pane_ParamLimits

0x8e73,	// (0x0001f9b8) aid_placing_vt_slider_lsc

0x0e3d,	// (0x00017982) aid_placing_vt_slider_prt

0x0270,	// (0x00016db5) bg_tb_trans_pane_cp01_ParamLimits

0x32dd,	// (0x00019e22) popup_image_details_window_g1_ParamLimits

0x32f0,	// (0x00019e35) popup_image_details_window_g2_ParamLimits

0x3305,	// (0x00019e4a) popup_image_details_window_g3_ParamLimits

0x3305,	// (0x00019e4a) popup_image_details_window_g3

0xf73c,	// (0x00026281) popup_image_details_window_g_ParamLimits

0x3319,	// (0x00019e5e) popup_image_details_window_t1_ParamLimits

0x332b,	// (0x00019e70) popup_image_details_window_t2_ParamLimits

0x3344,	// (0x00019e89) popup_image_details_window_t3_ParamLimits

0x3358,	// (0x00019e9d) popup_image_details_window_t4_ParamLimits

0x3373,	// (0x00019eb8) popup_image_details_window_t5_ParamLimits

0xf743,	// (0x00026288) popup_image_details_window_t_ParamLimits

0xd0c6,	// (0x00023c0b) cl_header_name_pane_ParamLimits

0xd0c6,	// (0x00023c0b) cl_header_name_pane

0xd3a0,	// (0x00023ee5) cl_header_name_pane_t1_ParamLimits

0xd3a0,	// (0x00023ee5) cl_header_name_pane_t1

0xd3b7,	// (0x00023efc) cl_header_name_pane_t2_ParamLimits

0xd3b7,	// (0x00023efc) cl_header_name_pane_t2

0xd3e1,	// (0x00023f26) cl_header_name_pane_t3_ParamLimits

0xd3e1,	// (0x00023f26) cl_header_name_pane_t3

0x0002,

0xfb44,	// (0x00026689) cl_header_name_pane_t_ParamLimits

0xfb44,	// (0x00026689) cl_header_name_pane_t

0xa223,	// (0x00020d68) navi_pane_mv_g2_ParamLimits

0x3e88,	// (0x0001a9cd) field_vitu2_entry_pane_g1_ParamLimits

0x3e94,	// (0x0001a9d9) field_vitu2_entry_pane_g2_ParamLimits

0x3ea0,	// (0x0001a9e5) field_vitu2_entry_pane_g3_ParamLimits

0x3ea0,	// (0x0001a9e5) field_vitu2_entry_pane_g3

0xf93a,	// (0x0002647f) field_vitu2_entry_pane_g_ParamLimits

0x7e0d,	// (0x0001e952) cell_vitu2_itu_pane_g1_ParamLimits

0x7e1d,	// (0x0001e962) cell_vitu2_itu_pane_g2_ParamLimits

0x7e1d,	// (0x0001e962) cell_vitu2_itu_pane_g2

0x0001,

0xf946,	// (0x0002648b) cell_vitu2_itu_pane_g_ParamLimits

0xf946,	// (0x0002648b) cell_vitu2_itu_pane_g

0x7bee,	// (0x0001e733) bg_vkb2_func_pane_cp05_ParamLimits

0x7bee,	// (0x0001e733) bg_vkb2_func_pane_cp05

0x7bee,	// (0x0001e733) bg_vkb2_func_pane_cp03

0x7bee,	// (0x0001e733) bg_vkb2_func_pane_cp04

0x7bee,	// (0x0001e733) bg_vkb2_func_pane_cp10_ParamLimits

0x7bee,	// (0x0001e733) bg_vkb2_func_pane_cp10

0xd068,	// (0x00023bad) bg_vkb2_func_pane_cp08

0xd04e,	// (0x00023b93) bg_vkb2_func_pane_cp06

0xd05c,	// (0x00023ba1) bg_vkb2_func_pane_cp07

0x4606,	// (0x0001b14b) bg_vkb2_func_pane_cp11_ParamLimits

0x4606,	// (0x0001b14b) bg_vkb2_func_pane_cp11

0x461b,	// (0x0001b160) bg_vkb2_func_pane_cp12_ParamLimits

0x461b,	// (0x0001b160) bg_vkb2_func_pane_cp12

0x0200,	// (0x00016d45) bg_vkb2_func_pane_cp09

0x3f0e,	// (0x0001aa53) bg_vkb2_func_pane_g1

0x0ffd,	// (0x00017b42) bg_vkb2_func_pane_g2

0x3f16,	// (0x0001aa5b) bg_vkb2_func_pane_g3

0x3f1e,	// (0x0001aa63) bg_vkb2_func_pane_g4

0x4197,	// (0x0001acdc) bg_vkb2_func_pane_g5

0x3f36,	// (0x0001aa7b) bg_vkb2_func_pane_g6

0x3f3e,	// (0x0001aa83) bg_vkb2_func_pane_g7

0x3f2e,	// (0x0001aa73) bg_vkb2_func_pane_g8

0x0fdd,	// (0x00017b22) bg_vkb2_func_pane_g9

0x0008,

0xfb4b,	// (0x00026690) bg_vkb2_func_pane_g

0xd2ed,	// (0x00023e32) blid2_tripm_pane_g6_ParamLimits

0xd2ed,	// (0x00023e32) blid2_tripm_pane_g6

0x3c63,	// (0x0001a7a8) mp4_progress_pane_g1

0xd349,	// (0x00023e8e) blid2_tripm_values_pane_ParamLimits

0xd349,	// (0x00023e8e) blid2_tripm_values_pane

0xd406,	// (0x00023f4b) blid2_tripm_values_pane_t1

0xd414,	// (0x00023f59) blid2_tripm_values_pane_t2

0xd422,	// (0x00023f67) blid2_tripm_values_pane_t3

0xd430,	// (0x00023f75) blid2_tripm_values_pane_t4

0xd43e,	// (0x00023f83) blid2_tripm_values_pane_t5

0xd44c,	// (0x00023f91) blid2_tripm_values_pane_t6

0xd45a,	// (0x00023f9f) blid2_tripm_values_pane_t7

0xd468,	// (0x00023fad) blid2_tripm_values_pane_t8

0xd476,	// (0x00023fbb) blid2_tripm_values_pane_t9

0x0008,

0xfb5e,	// (0x000266a3) blid2_tripm_values_pane_t

0x8eb3,	// (0x0001f9f8) call_video_pane_t1_ParamLimits

0x8ed4,	// (0x0001fa19) call_video_pane_t2_ParamLimits

0xf292,	// (0x00025dd7) call_video_pane_t_ParamLimits

0xa77b,	// (0x000212c0) msg_header_pane_g1_ParamLimits

0x194a,	// (0x0001848f) msg_header_pane_g2_ParamLimits

0x194a,	// (0x0001848f) msg_header_pane_g2

0x0001,

0xf4ac,	// (0x00025ff1) msg_header_pane_g_ParamLimits

0xf4ac,	// (0x00025ff1) msg_header_pane_g

0x0a1b,	// (0x00017560) main_clock2_pane_ParamLimits

0xbee7,	// (0x00022a2c) grid_clock2_toolbar_pane_ParamLimits

0xbee7,	// (0x00022a2c) grid_clock2_toolbar_pane

0xbee7,	// (0x00022a2c) listscroll_clock2_pane_ParamLimits

0xbee7,	// (0x00022a2c) listscroll_clock2_pane

0xbf95,	// (0x00022ada) main_clock2_pane_t3_ParamLimits

0xbf95,	// (0x00022ada) main_clock2_pane_t3

0xbfa7,	// (0x00022aec) main_clock2_pane_t4_ParamLimits

0xbfa7,	// (0x00022aec) main_clock2_pane_t4

0x4718,	// (0x0001b25d) cell_clock2_toolbar_pane

0x4720,	// (0x0001b265) cell_clock2_toolbar_pane_cp01

0x4720,	// (0x0001b265) cell_clock2_toolbar_pane_cp02

0x4728,	// (0x0001b26d) cell_clock2_toolbar_pane_cp03

0x4730,	// (0x0001b275) list_clock2_pane

0x1662,	// (0x000181a7) scroll_pane_cp10

0x4738,	// (0x0001b27d) list_single_clock2_pane_ParamLimits

0x4738,	// (0x0001b27d) list_single_clock2_pane

0x17af,	// (0x000182f4) list_highlight_pane_cp08

0x4745,	// (0x0001b28a) list_single_clock2_pane_t1

0x4753,	// (0x0001b298) list_single_clock2_pane_t2

0x0001,

0xfb71,	// (0x000266b6) list_single_clock2_pane_t

0x0200,	// (0x00016d45) bg_button_pane_cp10

0x4761,	// (0x0001b2a6) cell_clock2_toolbar_pane_g1

0x71c5,	// (0x0001dd0a) aid_main_viewer_pane_g1_ParamLimits

0x71c5,	// (0x0001dd0a) aid_main_viewer_pane_g1

0x71d1,	// (0x0001dd16) aid_main_viewer_pane_g2_ParamLimits

0x71d1,	// (0x0001dd16) aid_main_viewer_pane_g2

0xa7ce,	// (0x00021313) aid_main_viewer_pane_g3_ParamLimits

0xa7ce,	// (0x00021313) aid_main_viewer_pane_g3

0xa7df,	// (0x00021324) aid_main_viewer_pane_g4_ParamLimits

0xa7df,	// (0x00021324) aid_main_viewer_pane_g4

0x0003,

0xf4bd,	// (0x00026002) aid_main_viewer_pane_g_ParamLimits

0xf4bd,	// (0x00026002) aid_main_viewer_pane_g

0xaf2d,	// (0x00021a72) main_calc_pane_ParamLimits

0xaf3a,	// (0x00021a7f) main_dialer2_pane_ParamLimits

0x0200,	// (0x00016d45) main_cam6_pane

0x0200,	// (0x00016d45) main_vid6_pane

0xbef3,	// (0x00022a38) listscroll_gen_pane_cp06_ParamLimits

0xbef3,	// (0x00022a38) listscroll_gen_pane_cp06

0xbfb9,	// (0x00022afe) main_clock2_pane_t5_ParamLimits

0xbfb9,	// (0x00022afe) main_clock2_pane_t5

0xc008,	// (0x00022b4d) aid_call2_pane_cp10_ParamLimits

0xc01a,	// (0x00022b5f) aid_call_pane_cp10_ParamLimits

0x16e4,	// (0x00018229) popup_clock_analogue_window_cp10_g1_ParamLimits

0x16e4,	// (0x00018229) popup_clock_analogue_window_cp10_g2_ParamLimits

0xc02c,	// (0x00022b71) popup_clock_analogue_window_cp10_g3_ParamLimits

0xc02c,	// (0x00022b71) popup_clock_analogue_window_cp10_g4_ParamLimits

0x16e4,	// (0x00018229) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7f3,	// (0x00026338) popup_clock_analogue_window_cp10_g_ParamLimits

0xc042,	// (0x00022b87) popup_clock_analogue_window_cp10_t1_ParamLimits

0xc467,	// (0x00022fac) cell_dialer2_keypad_pane_g2_ParamLimits

0xc467,	// (0x00022fac) cell_dialer2_keypad_pane_g2

0x0001,

0xf8d9,	// (0x0002641e) cell_dialer2_keypad_pane_g_ParamLimits

0xf8d9,	// (0x0002641e) cell_dialer2_keypad_pane_g

0xc483,	// (0x00022fc8) cell_dialer2_keypad_pane_t1

0xc88c,	// (0x000233d1) main_cset_text2_pane_ParamLimits

0xc88c,	// (0x000233d1) main_cset_text2_pane

0x43f4,	// (0x0001af39) area_vitu2_query_pane_g1_ParamLimits

0xcfed,	// (0x00023b32) area_vitu2_query_pane_g2_ParamLimits

0xfa8e,	// (0x000265d3) area_vitu2_query_pane_g_ParamLimits

0x4478,	// (0x0001afbd) area_vitu2_query_pane_t7_ParamLimits

0x4478,	// (0x0001afbd) area_vitu2_query_pane_t7

0xd04e,	// (0x00023b93) bg_button_pane_cp018_ParamLimits

0xd05c,	// (0x00023ba1) bg_button_pane_cp021_ParamLimits

0xd068,	// (0x00023bad) bg_button_pane_cp022_ParamLimits

0xd068,	// (0x00023bad) bg_vkb2_func_pane_cp08_ParamLimits

0xd04e,	// (0x00023b93) bg_vkb2_func_pane_cp06_ParamLimits

0xd05c,	// (0x00023ba1) bg_vkb2_func_pane_cp07_ParamLimits

0xd079,	// (0x00023bbe) input_focus_pane_cp09_ParamLimits

0x8153,	// (0x0001ec98) cam6_autofocus_pane_ParamLimits

0x8153,	// (0x0001ec98) cam6_autofocus_pane

0x8175,	// (0x0001ecba) cam6_image_uncrop_pane_ParamLimits

0x8175,	// (0x0001ecba) cam6_image_uncrop_pane

0x81a2,	// (0x0001ece7) cam6_indi_pane_ParamLimits

0x81a2,	// (0x0001ece7) cam6_indi_pane

0x81bc,	// (0x0001ed01) cam6_mode_pane_ParamLimits

0x81bc,	// (0x0001ed01) cam6_mode_pane

0x81d0,	// (0x0001ed15) cam6_timer_pane_ParamLimits

0x81d0,	// (0x0001ed15) cam6_timer_pane

0x81dc,	// (0x0001ed21) cam6_zoom_pane_ParamLimits

0x81dc,	// (0x0001ed21) cam6_zoom_pane

0xd484,	// (0x00023fc9) cam6_mode_pane_g1_ParamLimits

0xd484,	// (0x00023fc9) cam6_mode_pane_g1

0xd490,	// (0x00023fd5) cam6_mode_pane_g2_ParamLimits

0xd490,	// (0x00023fd5) cam6_mode_pane_g2

0xd49c,	// (0x00023fe1) cam6_mode_pane_g3_ParamLimits

0xd49c,	// (0x00023fe1) cam6_mode_pane_g3

0xd4a8,	// (0x00023fed) cam6_mode_pane_g4_ParamLimits

0xd4a8,	// (0x00023fed) cam6_mode_pane_g4

0x0003,

0xfb76,	// (0x000266bb) cam6_mode_pane_g_ParamLimits

0xfb76,	// (0x000266bb) cam6_mode_pane_g

0x4777,	// (0x0001b2bc) bg_tb_trans_pane_cp08_ParamLimits

0x4777,	// (0x0001b2bc) bg_tb_trans_pane_cp08

0x4785,	// (0x0001b2ca) cam6_battery_pane_ParamLimits

0x4785,	// (0x0001b2ca) cam6_battery_pane

0x479b,	// (0x0001b2e0) cam6_indi_pane_g1_ParamLimits

0x479b,	// (0x0001b2e0) cam6_indi_pane_g1

0x47ad,	// (0x0001b2f2) cam6_indi_pane_g2_ParamLimits

0x47ad,	// (0x0001b2f2) cam6_indi_pane_g2

0x47bf,	// (0x0001b304) cam6_indi_pane_g3_ParamLimits

0x47bf,	// (0x0001b304) cam6_indi_pane_g3

0x0002,

0xfb7f,	// (0x000266c4) cam6_indi_pane_g_ParamLimits

0xfb7f,	// (0x000266c4) cam6_indi_pane_g

0x47d1,	// (0x0001b316) cam6_indi_pane_t1_ParamLimits

0x47d1,	// (0x0001b316) cam6_indi_pane_t1

0xc5c2,	// (0x00023107) cam6_autofocus_pane_g1

0xc5ba,	// (0x000230ff) cam6_autofocus_pane_g2

0xc5d2,	// (0x00023117) cam6_autofocus_pane_g3

0xc5ca,	// (0x0002310f) cam6_autofocus_pane_g4

0x0003,

0xfb86,	// (0x000266cb) cam6_autofocus_pane_g

0x47f7,	// (0x0001b33c) cam6_timer_pane_g1

0x47ff,	// (0x0001b344) cam6_timer_pane_t1

0x480d,	// (0x0001b352) cam6_zoom_cont_pane

0x4815,	// (0x0001b35a) cam6_zoom_pane_g1

0x481d,	// (0x0001b362) cam6_zoom_pane_g2

0xd4b4,	// (0x00023ff9) cam6_zoom_pane_g3

0x0002,

0xfb8f,	// (0x000266d4) cam6_zoom_pane_g

0x3156,	// (0x00019c9b) cam6_battery_pane_g1

0x3156,	// (0x00019c9b) cam6_battery_pane_g2

0x0001,

0xf700,	// (0x00026245) cam6_battery_pane_g

0x4825,	// (0x0001b36a) cam6_zoom_cont_pane_g1

0x482e,	// (0x0001b373) cam6_zoom_cont_pane_g2

0x4837,	// (0x0001b37c) cam6_zoom_cont_pane_g3

0x0002,

0xfb96,	// (0x000266db) cam6_zoom_cont_pane_g

0xd4ce,	// (0x00024013) cam6_mode_pane_cp_ParamLimits

0xd4ce,	// (0x00024013) cam6_mode_pane_cp

0xd4e2,	// (0x00024027) cam6_zoom_pane_cp_ParamLimits

0xd4e2,	// (0x00024027) cam6_zoom_pane_cp

0xd4fa,	// (0x0002403f) vid6_image_uncrop_cif_pane_ParamLimits

0xd4fa,	// (0x0002403f) vid6_image_uncrop_cif_pane

0xd526,	// (0x0002406b) vid6_image_uncrop_nhd_pane_ParamLimits

0xd526,	// (0x0002406b) vid6_image_uncrop_nhd_pane

0xd543,	// (0x00024088) vid6_image_uncrop_vga_pane_ParamLimits

0xd543,	// (0x00024088) vid6_image_uncrop_vga_pane

0xd562,	// (0x000240a7) vid6_image_uncrop_wvga_pane_ParamLimits

0xd562,	// (0x000240a7) vid6_image_uncrop_wvga_pane

0xd57f,	// (0x000240c4) vid6_indi_pane_ParamLimits

0xd57f,	// (0x000240c4) vid6_indi_pane

0x4777,	// (0x0001b2bc) bg_tb_trans_pane_cp09_ParamLimits

0x4777,	// (0x0001b2bc) bg_tb_trans_pane_cp09

0x484f,	// (0x0001b394) cam6_battery_pane_cp_ParamLimits

0x484f,	// (0x0001b394) cam6_battery_pane_cp

0x485b,	// (0x0001b3a0) vid6_indi_pane_g1_ParamLimits

0x485b,	// (0x0001b3a0) vid6_indi_pane_g1

0x486d,	// (0x0001b3b2) vid6_indi_pane_g2_ParamLimits

0x486d,	// (0x0001b3b2) vid6_indi_pane_g2

0x487f,	// (0x0001b3c4) vid6_indi_pane_g3_ParamLimits

0x487f,	// (0x0001b3c4) vid6_indi_pane_g3

0x4894,	// (0x0001b3d9) vid6_indi_pane_g4_ParamLimits

0x4894,	// (0x0001b3d9) vid6_indi_pane_g4

0x48a9,	// (0x0001b3ee) vid6_indi_pane_g5_ParamLimits

0x48a9,	// (0x0001b3ee) vid6_indi_pane_g5

0x0004,

0xfb9d,	// (0x000266e2) vid6_indi_pane_g_ParamLimits

0xfb9d,	// (0x000266e2) vid6_indi_pane_g

0x48c3,	// (0x0001b408) vid6_indi_pane_t1_ParamLimits

0x48c3,	// (0x0001b408) vid6_indi_pane_t1

0x48d9,	// (0x0001b41e) vid6_indi_pane_t2_ParamLimits

0x48d9,	// (0x0001b41e) vid6_indi_pane_t2

0x4901,	// (0x0001b446) vid6_indi_pane_t3_ParamLimits

0x4901,	// (0x0001b446) vid6_indi_pane_t3

0x4929,	// (0x0001b46e) vid6_indi_pane_t4_ParamLimits

0x4929,	// (0x0001b46e) vid6_indi_pane_t4

0x0003,

0xfba8,	// (0x000266ed) vid6_indi_pane_t_ParamLimits

0xfba8,	// (0x000266ed) vid6_indi_pane_t

0x494d,	// (0x0001b492) wait_bar_pane_cp08

0xd5a2,	// (0x000240e7) main_cset_text2_pane_t1_ParamLimits

0xd5a2,	// (0x000240e7) main_cset_text2_pane_t1

0xd4bc,	// (0x00024001) listscroll_gen_pane_cp06_t1_ParamLimits

0xd4bc,	// (0x00024001) listscroll_gen_pane_cp06_t1

0x0200,	// (0x00016d45) main_cam6_set_pane

0x7b01,	// (0x0001e646) bg_tb_trans_pane_cp06_ParamLimits

0x7b17,	// (0x0001e65c) cam4_indicators_pane_g1_ParamLimits

0x7b28,	// (0x0001e66d) cam4_indicators_pane_g2_ParamLimits

0xf916,	// (0x0002645b) cam4_indicators_pane_g_ParamLimits

0x7b46,	// (0x0001e68b) cam4_indicators_pane_t1_ParamLimits

0x7bee,	// (0x0001e733) bg_tb_trans_pane_cp07_ParamLimits

0x7b17,	// (0x0001e65c) vid4_indicators_pane_g1_ParamLimits

0x7c04,	// (0x0001e749) vid4_indicators_pane_g2_ParamLimits

0x7c15,	// (0x0001e75a) vid4_indicators_pane_g3_ParamLimits

0x7c26,	// (0x0001e76b) vid4_indicators_pane_g4_ParamLimits

0xf928,	// (0x0002646d) vid4_indicators_pane_g_ParamLimits

0x7c42,	// (0x0001e787) vid4_indicators_pane_t1_ParamLimits

0x80e3,	// (0x0001ec28) vid4_progress_pane_g1_ParamLimits

0x80f3,	// (0x0001ec38) vid4_progress_pane_g2_ParamLimits

0x1276,	// (0x00017dbb) vid4_progress_pane_g3_ParamLimits

0x7b28,	// (0x0001e66d) vid4_progress_pane_g4_ParamLimits

0xfad9,	// (0x0002661e) vid4_progress_pane_g_ParamLimits

0x8103,	// (0x0001ec48) vid4_progress_pane_t1_ParamLimits

0x8118,	// (0x0001ec5d) vid4_progress_pane_t2_ParamLimits

0x812e,	// (0x0001ec73) vid4_progress_pane_t3_ParamLimits

0xfae4,	// (0x00026629) vid4_progress_pane_t_ParamLimits

0x8143,	// (0x0001ec88) wait_bar_pane_cp07_ParamLimits

0xd5e0,	// (0x00024125) main_cam6_set_pane_g2_ParamLimits

0xd5e0,	// (0x00024125) main_cam6_set_pane_g2

0xd5ec,	// (0x00024131) main_cset6_listscroll_pane_ParamLimits

0xd5ec,	// (0x00024131) main_cset6_listscroll_pane

0xd617,	// (0x0002415c) main_cset6_slider_pane_ParamLimits

0xd617,	// (0x0002415c) main_cset6_slider_pane

0xd623,	// (0x00024168) main_cset6_text2_pane_ParamLimits

0xd623,	// (0x00024168) main_cset6_text2_pane

0x495c,	// (0x0001b4a1) main_cset6_text_pane

0x4964,	// (0x0001b4a9) main_cset_list_pane_copy1_ParamLimits

0x4964,	// (0x0001b4a9) main_cset_list_pane_copy1

0x4974,	// (0x0001b4b9) scroll_pane_cp028_copy1

0xd636,	// (0x0002417b) cset_list_set_pane_copy1

0xd650,	// (0x00024195) aid_position_infowindow_above_copy1

0xd658,	// (0x0002419d) aid_position_infowindow_below_copy1

0x497d,	// (0x0001b4c2) cset_list_set_pane_g1_copy1

0x4985,	// (0x0001b4ca) cset_list_set_pane_g3_copy1_ParamLimits

0x4985,	// (0x0001b4ca) cset_list_set_pane_g3_copy1

0x4994,	// (0x0001b4d9) cset_list_set_pane_t1_copy1_ParamLimits

0x4994,	// (0x0001b4d9) cset_list_set_pane_t1_copy1

0x0270,	// (0x00016db5) list_highlight_pane_cp021_copy1_ParamLimits

0x0270,	// (0x00016db5) list_highlight_pane_cp021_copy1

0x49a9,	// (0x0001b4ee) cset6_slider_pane_ParamLimits

0x49a9,	// (0x0001b4ee) cset6_slider_pane

0x49d5,	// (0x0001b51a) main_cset6_slider_pane_g1_ParamLimits

0x49d5,	// (0x0001b51a) main_cset6_slider_pane_g1

0xd660,	// (0x000241a5) main_cset6_slider_pane_g2_ParamLimits

0xd660,	// (0x000241a5) main_cset6_slider_pane_g2

0x403d,	// (0x0001ab82) main_cset6_slider_pane_g3_ParamLimits

0x403d,	// (0x0001ab82) main_cset6_slider_pane_g3

0xd688,	// (0x000241cd) main_cset6_slider_pane_g4_ParamLimits

0xd688,	// (0x000241cd) main_cset6_slider_pane_g4

0xd694,	// (0x000241d9) main_cset6_slider_pane_g5_ParamLimits

0xd694,	// (0x000241d9) main_cset6_slider_pane_g5

0x403d,	// (0x0001ab82) main_cset6_slider_pane_g7_ParamLimits

0x403d,	// (0x0001ab82) main_cset6_slider_pane_g7

0x4049,	// (0x0001ab8e) main_cset6_slider_pane_g8_ParamLimits

0x4049,	// (0x0001ab8e) main_cset6_slider_pane_g8

0xd6a2,	// (0x000241e7) main_cset6_slider_pane_g9_ParamLimits

0xd6a2,	// (0x000241e7) main_cset6_slider_pane_g9

0xd6ae,	// (0x000241f3) main_cset6_slider_pane_g10_ParamLimits

0xd6ae,	// (0x000241f3) main_cset6_slider_pane_g10

0xd688,	// (0x000241cd) main_cset6_slider_pane_g11_ParamLimits

0xd688,	// (0x000241cd) main_cset6_slider_pane_g11

0xd6ba,	// (0x000241ff) main_cset6_slider_pane_g12_ParamLimits

0xd6ba,	// (0x000241ff) main_cset6_slider_pane_g12

0xd6c6,	// (0x0002420b) main_cset6_slider_pane_g13_ParamLimits

0xd6c6,	// (0x0002420b) main_cset6_slider_pane_g13

0xd6d4,	// (0x00024219) main_cset6_slider_pane_g14_ParamLimits

0xd6d4,	// (0x00024219) main_cset6_slider_pane_g14

0xd6e2,	// (0x00024227) main_cset6_slider_pane_g15_ParamLimits

0xd6e2,	// (0x00024227) main_cset6_slider_pane_g15

0xd694,	// (0x000241d9) main_cset6_slider_pane_g16_ParamLimits

0xd694,	// (0x000241d9) main_cset6_slider_pane_g16

0xd6fa,	// (0x0002423f) main_cset6_slider_pane_g17_ParamLimits

0xd6fa,	// (0x0002423f) main_cset6_slider_pane_g17

0x0011,

0xfbb1,	// (0x000266f6) main_cset6_slider_pane_g_ParamLimits

0xfbb1,	// (0x000266f6) main_cset6_slider_pane_g

0x49fd,	// (0x0001b542) main_cset6_slider_pane_t1_ParamLimits

0x49fd,	// (0x0001b542) main_cset6_slider_pane_t1

0xd708,	// (0x0002424d) main_cset6_slider_pane_t2_ParamLimits

0xd708,	// (0x0002424d) main_cset6_slider_pane_t2

0xd733,	// (0x00024278) main_cset6_slider_pane_t3_ParamLimits

0xd733,	// (0x00024278) main_cset6_slider_pane_t3

0xd75e,	// (0x000242a3) main_cset6_slider_pane_t4_ParamLimits

0xd75e,	// (0x000242a3) main_cset6_slider_pane_t4

0xd78b,	// (0x000242d0) main_cset6_slider_pane_t5_ParamLimits

0xd78b,	// (0x000242d0) main_cset6_slider_pane_t5

0x4a3e,	// (0x0001b583) main_cset6_slider_pane_t7_ParamLimits

0x4a3e,	// (0x0001b583) main_cset6_slider_pane_t7

0xd7b8,	// (0x000242fd) main_cset6_slider_pane_t8_ParamLimits

0xd7b8,	// (0x000242fd) main_cset6_slider_pane_t8

0xd7dc,	// (0x00024321) main_cset6_slider_pane_t9_ParamLimits

0xd7dc,	// (0x00024321) main_cset6_slider_pane_t9

0xd800,	// (0x00024345) main_cset6_slider_pane_t10_ParamLimits

0xd800,	// (0x00024345) main_cset6_slider_pane_t10

0xd824,	// (0x00024369) main_cset6_slider_pane_t11_ParamLimits

0xd824,	// (0x00024369) main_cset6_slider_pane_t11

0x4a74,	// (0x0001b5b9) main_cset6_slider_pane_t14_ParamLimits

0x4a74,	// (0x0001b5b9) main_cset6_slider_pane_t14

0x4aad,	// (0x0001b5f2) main_cset6_slider_pane_t15_ParamLimits

0x4aad,	// (0x0001b5f2) main_cset6_slider_pane_t15

0x000b,

0xfbd6,	// (0x0002671b) main_cset6_slider_pane_t_ParamLimits

0xfbd6,	// (0x0002671b) main_cset6_slider_pane_t

0x4121,	// (0x0001ac66) cset_slider_pane_g1_copy1

0x412a,	// (0x0001ac6f) cset_slider_pane_g2_copy1

0x4133,	// (0x0001ac78) cset_slider_pane_g3_copy1

0x0200,	// (0x00016d45) bg_popup_sub_pane_cp011_copy1

0x4218,	// (0x0001ad5d) main_cset_text_pane_g1_copy1

0x4220,	// (0x0001ad65) main_cset_text_pane_t1_copy1

0x422e,	// (0x0001ad73) main_cset_text_pane_t2_copy1

0x423c,	// (0x0001ad81) main_cset_text_pane_t3_copy1

0x424a,	// (0x0001ad8f) main_cset_text_pane_t4_copy1

0x4258,	// (0x0001ad9d) main_cset_text_pane_t5_copy1

0x4266,	// (0x0001adab) main_cset_text_pane_t6_copy1

0x4274,	// (0x0001adb9) main_cset_text_pane_t7_copy1

0xd84a,	// (0x0002438f) main_cset_text2_pane_t1_copy1

0x0200,	// (0x00016d45) main_ncimui_pane

0xaf79,	// (0x00021abe) popup_query_ncimui_window_ParamLimits

0xaf79,	// (0x00021abe) popup_query_ncimui_window

0x3422,	// (0x00019f67) field_cale_ev2_pane_g4_ParamLimits

0x3422,	// (0x00019f67) field_cale_ev2_pane_g4

0xc407,	// (0x00022f4c) cell_video_dialer_keypad_pane_g2_ParamLimits

0xc407,	// (0x00022f4c) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8b4,	// (0x000263f9) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8b4,	// (0x000263f9) cell_video_dialer_keypad_pane_g

0xc41f,	// (0x00022f64) cell_video_dialer_keypad_pane_t1

0x0200,	// (0x00016d45) bg_popup_window_pane_cp012

0x1532,	// (0x00018077) heading_pane_cp06

0x4bd5,	// (0x0001b71a) ncim_query_content_pane

0x0200,	// (0x00016d45) bg_popup_heading_pane_cp01

0x4bdd,	// (0x0001b722) ncim_heading_pane_t1

0x4beb,	// (0x0001b730) ncim_indicator_popup_pane

0x4bfd,	// (0x0001b742) ncim_query_button_pane

0x4c11,	// (0x0001b756) ncim_query_content_pane_t1

0x4c23,	// (0x0001b768) ncim_query_content_pane_t2

0x0005,

0xfc15,	// (0x0002675a) ncim_query_content_pane_t

0x4c5d,	// (0x0001b7a2) ncim_query_list_pane

0x4c6f,	// (0x0001b7b4) ncim_query_popup_pane

0x4beb,	// (0x0001b730) ncim_indicator_popup_pane_ParamLimits

0xd977,	// (0x000244bc) ncim_query_content_pane_g1_ParamLimits

0xd977,	// (0x000244bc) ncim_query_content_pane_g1

0x4c11,	// (0x0001b756) ncim_query_content_pane_t1_ParamLimits

0x4c23,	// (0x0001b768) ncim_query_content_pane_t2_ParamLimits

0xd983,	// (0x000244c8) ncim_query_content_pane_t3_ParamLimits

0xd983,	// (0x000244c8) ncim_query_content_pane_t3

0xd9a0,	// (0x000244e5) ncim_query_content_pane_t4_ParamLimits

0xd9a0,	// (0x000244e5) ncim_query_content_pane_t4

0xd9bd,	// (0x00024502) ncim_query_content_pane_t5_ParamLimits

0xd9bd,	// (0x00024502) ncim_query_content_pane_t5

0x4c35,	// (0x0001b77a) ncim_query_content_pane_t6_ParamLimits

0x4c35,	// (0x0001b77a) ncim_query_content_pane_t6

0xfc15,	// (0x0002675a) ncim_query_content_pane_t_ParamLimits

0x4c5d,	// (0x0001b7a2) ncim_query_list_pane_ParamLimits

0x4c6f,	// (0x0001b7b4) ncim_query_popup_pane_ParamLimits

0x4c83,	// (0x0001b7c8) wait_bar_pane_cp04

0x0200,	// (0x00016d45) input_focus_pane_cp011

0x4c8b,	// (0x0001b7d0) ncim_query_popup_pane_t1

0x4c99,	// (0x0001b7de) ncim_list_query_list_pane_ParamLimits

0x4c99,	// (0x0001b7de) ncim_list_query_list_pane

0x0200,	// (0x00016d45) bg_button_pane_cp027

0x4cac,	// (0x0001b7f1) ncim_query_button_pane_g1

0x0200,	// (0x00016d45) list_highlight_pane_cp012

0x4cb6,	// (0x0001b7fb) ncim_list_query_list_pane_g1

0x4cbe,	// (0x0001b803) ncim_list_query_list_pane_t1

0x7b37,	// (0x0001e67c) cam4_indicators_pane_g3_ParamLimits

0x7b37,	// (0x0001e67c) cam4_indicators_pane_g3

0x7c32,	// (0x0001e777) vid4_indicators_pane_g5_ParamLimits

0x7c32,	// (0x0001e777) vid4_indicators_pane_g5

0x7b37,	// (0x0001e67c) vid4_progress_pane_g5_ParamLimits

0x7b37,	// (0x0001e67c) vid4_progress_pane_g5

0xd890,	// (0x000243d5) main_ncimui_pane_g1

0xd8e6,	// (0x0002442b) ncimui_group_query_pane_ParamLimits

0xd8e6,	// (0x0002442b) ncimui_group_query_pane

0xd922,	// (0x00024467) ncimui_list_pane_ParamLimits

0xd922,	// (0x00024467) ncimui_list_pane

0xd943,	// (0x00024488) ncimui_text_pane_ParamLimits

0xd943,	// (0x00024488) ncimui_text_pane

0xd9da,	// (0x0002451f) ncimui_text_pane_t1_ParamLimits

0xd9da,	// (0x0002451f) ncimui_text_pane_t1

0x4ccc,	// (0x0001b811) ncimui_list_single_graphic_pane_ParamLimits

0x4ccc,	// (0x0001b811) ncimui_list_single_graphic_pane

0xd9f9,	// (0x0002453e) ncimui_query_pane_ParamLimits

0xd9f9,	// (0x0002453e) ncimui_query_pane

0x0200,	// (0x00016d45) list_highlight_pane_cp013

0x4cdc,	// (0x0001b821) ncim_list_query_list_pane_t1_copy1

0x4cb6,	// (0x0001b7fb) ncim_list_single_graphic_pane_g1

0x4cea,	// (0x0001b82f) ncim_query_button_pane_cp01

0x4cf6,	// (0x0001b83b) ncim_query_entry_pane_ParamLimits

0x4cf6,	// (0x0001b83b) ncim_query_entry_pane

0x4d09,	// (0x0001b84e) ncimui_query_pane_g1

0x4d15,	// (0x0001b85a) ncimui_query_pane_t1_ParamLimits

0x4d15,	// (0x0001b85a) ncimui_query_pane_t1

0x0270,	// (0x00016db5) input_focus_pane_cp012

0x4d2e,	// (0x0001b873) ncim_query_entry_pane_t1

0x0a1b,	// (0x00017560) main_im_pane_ParamLimits

0x0270,	// (0x00016db5) main_mobtv_pane_ParamLimits

0x0270,	// (0x00016db5) main_mobtv_pane

0xd6a2,	// (0x000241e7) main_cset6_slider_pane_g18_ParamLimits

0xd6a2,	// (0x000241e7) main_cset6_slider_pane_g18

0xd6c6,	// (0x0002420b) main_cset6_slider_pane_g19_ParamLimits

0xd6c6,	// (0x0002420b) main_cset6_slider_pane_g19

0x3ea0,	// (0x0001a9e5) bg_main_mobtv_pane_ParamLimits

0x3ea0,	// (0x0001a9e5) bg_main_mobtv_pane

0xda0c,	// (0x00024551) main_mobtv_info_pane

0xda17,	// (0x0002455c) main_mobtv_loading_pane_ParamLimits

0xda17,	// (0x0002455c) main_mobtv_loading_pane

0x4d4e,	// (0x0001b893) main_mobtv_pg_channel_list_pane

0x4d58,	// (0x0001b89d) main_mobtv_pg_hdr_pane

0xda24,	// (0x00024569) main_mobtv_programe_curr_pane_ParamLimits

0xda24,	// (0x00024569) main_mobtv_programe_curr_pane

0xda31,	// (0x00024576) main_mobtv_programe_next_pane_ParamLimits

0xda31,	// (0x00024576) main_mobtv_programe_next_pane

0x4d61,	// (0x0001b8a6) popup_mobtv_noti_window

0x3156,	// (0x00019c9b) main_tv_pg_hdr_pane_g1

0x4d69,	// (0x0001b8ae) main_tv_pg_hdr_pane_g2

0x4d71,	// (0x0001b8b6) main_tv_pg_hdr_pane_g3

0x4d79,	// (0x0001b8be) main_tv_pg_hdr_pane_g4

0x4d81,	// (0x0001b8c6) main_tv_pg_hdr_pane_g5

0x4d8b,	// (0x0001b8d0) main_tv_pg_hdr_pane_g6

0x4d95,	// (0x0001b8da) main_tv_pg_hdr_pane_g7

0x4d9f,	// (0x0001b8e4) main_tv_pg_hdr_pane_g8

0x4da9,	// (0x0001b8ee) main_tv_pg_hdr_pane_g9

0x4db3,	// (0x0001b8f8) main_tv_pg_hdr_pane_g10

0x4dbd,	// (0x0001b902) main_tv_pg_hdr_pane_g11

0x000a,

0xfc22,	// (0x00026767) main_tv_pg_hdr_pane_g

0x4dc7,	// (0x0001b90c) main_tv_pg_hdr_pane_t1

0x4dd5,	// (0x0001b91a) main_tv_pg_hdr_pane_t2

0x4de3,	// (0x0001b928) main_tv_pg_hdr_pane_t3

0x4df3,	// (0x0001b938) main_tv_pg_hdr_pane_t4

0x4e03,	// (0x0001b948) main_tv_pg_hdr_pane_t5

0x0004,

0xfc39,	// (0x0002677e) main_tv_pg_hdr_pane_t

0x4e13,	// (0x0001b958) single_mobtv_pg_channel_pane_ParamLimits

0x4e13,	// (0x0001b958) single_mobtv_pg_channel_pane

0x4e25,	// (0x0001b96a) single_mobtv_pg_channel_table_pane

0x4e2e,	// (0x0001b973) single_mobtv_pg_channel_thumb_pane

0x4e37,	// (0x0001b97c) single_tv_pg_channel_pane_g1

0x4e40,	// (0x0001b985) single_tv_pg_channel_pane_g2

0x0001,

0xfc44,	// (0x00026789) single_tv_pg_channel_pane_g

0x33bd,	// (0x00019f02) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x33bd,	// (0x00019f02) bg_single_mobtv_pg_channel_thumb_pane

0x4e49,	// (0x0001b98e) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x4e49,	// (0x0001b98e) single_mobtv_pg_channel_thumb_pane_g1

0x4e57,	// (0x0001b99c) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x4e57,	// (0x0001b99c) single_mobtv_pg_channel_thumb_pane_g2

0x4e63,	// (0x0001b9a8) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x4e63,	// (0x0001b9a8) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc49,	// (0x0002678e) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc49,	// (0x0002678e) single_mobtv_pg_channel_thumb_pane_g

0x4e6f,	// (0x0001b9b4) single_mobtv_pg_channel_thumb_pane_t1

0x4e7d,	// (0x0001b9c2) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc50,	// (0x00026795) single_mobtv_pg_channel_thumb_pane_t

0x3156,	// (0x00019c9b) bg_single_mobtv_pg_channel_table_pane_g1

0x3156,	// (0x00019c9b) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf700,	// (0x00026245) bg_single_mobtv_pg_channel_table_pane_g

0x4e8b,	// (0x0001b9d0) single_mobtv_pg_channel_table_pane_t1

0x4e99,	// (0x0001b9de) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc55,	// (0x0002679a) single_mobtv_pg_channel_table_pane_t

0xda46,	// (0x0002458b) main_mobtv_info_pane_g1_ParamLimits

0xda46,	// (0x0002458b) main_mobtv_info_pane_g1

0xda62,	// (0x000245a7) main_mobtv_info_pane_t1_ParamLimits

0xda62,	// (0x000245a7) main_mobtv_info_pane_t1

0xdada,	// (0x0002461f) main_mobtv_info_pane_t2_ParamLimits

0xdada,	// (0x0002461f) main_mobtv_info_pane_t2

0x0002,

0xfc5f,	// (0x000267a4) main_mobtv_info_pane_t_ParamLimits

0xfc5f,	// (0x000267a4) main_mobtv_info_pane_t

0xdb69,	// (0x000246ae) wait_bar_pane_cp05

0xdb7b,	// (0x000246c0) main_mobtv_loading_pane_g1_ParamLimits

0xdb7b,	// (0x000246c0) main_mobtv_loading_pane_g1

0xdb89,	// (0x000246ce) main_mobtv_loading_pane_g2_ParamLimits

0xdb89,	// (0x000246ce) main_mobtv_loading_pane_g2

0xdb95,	// (0x000246da) main_mobtv_loading_pane_g3_ParamLimits

0xdb95,	// (0x000246da) main_mobtv_loading_pane_g3

0x0002,

0xfc66,	// (0x000267ab) main_mobtv_loading_pane_g_ParamLimits

0xfc66,	// (0x000267ab) main_mobtv_loading_pane_g

0x4ea7,	// (0x0001b9ec) main_mobtv_loading_pane_t1_ParamLimits

0x4ea7,	// (0x0001b9ec) main_mobtv_loading_pane_t1

0x4ebf,	// (0x0001ba04) main_mobtv_loading_pane_t2_ParamLimits

0x4ebf,	// (0x0001ba04) main_mobtv_loading_pane_t2

0x0001,

0xfc6d,	// (0x000267b2) main_mobtv_loading_pane_t_ParamLimits

0xfc6d,	// (0x000267b2) main_mobtv_loading_pane_t

0xdba3,	// (0x000246e8) wait_bar_pane_cp06_ParamLimits

0xdba3,	// (0x000246e8) wait_bar_pane_cp06

0x4ee3,	// (0x0001ba28) main_mobtv_programe_curr_pane_t1

0x4ef1,	// (0x0001ba36) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc72,	// (0x000267b7) main_mobtv_programe_curr_pane_t

0x4eff,	// (0x0001ba44) main_mobtv_programe_next_pane_t1

0x4f0d,	// (0x0001ba52) main_mobtv_programe_next_pane_t2

0x4f1b,	// (0x0001ba60) main_mobtv_programe_next_pane_t3

0x0002,

0xfc77,	// (0x000267bc) main_mobtv_programe_next_pane_t

0x0200,	// (0x00016d45) bg_popup_mobtv_noti_window_pane

0x4f29,	// (0x0001ba6e) popup_mobtv_noti_window_g1

0x4f31,	// (0x0001ba76) popup_mobtv_noti_window_t1

0x4f3f,	// (0x0001ba84) popup_mobtv_noti_window_t2

0x0001,

0xfc7e,	// (0x000267c3) popup_mobtv_noti_window_t

0x3156,	// (0x00019c9b) bg_popup_mobtv_noti_window_pane_g1

0x0200,	// (0x00016d45) sc_clock_pane

0x0200,	// (0x00016d45) main_fs_bigclock_pane

0xd337,	// (0x00023e7c) blid2_tripm_pane_t4_ParamLimits

0xd337,	// (0x00023e7c) blid2_tripm_pane_t4

0xdbaf,	// (0x000246f4) sc_clock_pane_g1_ParamLimits

0xdbaf,	// (0x000246f4) sc_clock_pane_g1

0xdbbd,	// (0x00024702) sc_clock_pane_t1_ParamLimits

0xdbbd,	// (0x00024702) sc_clock_pane_t1

0xdbd0,	// (0x00024715) sc_clock_pane_t2_ParamLimits

0xdbd0,	// (0x00024715) sc_clock_pane_t2

0xdbe2,	// (0x00024727) sc_clock_pane_t3_ParamLimits

0xdbe2,	// (0x00024727) sc_clock_pane_t3

0x0004,

0xfc83,	// (0x000267c8) sc_clock_pane_t_ParamLimits

0xfc83,	// (0x000267c8) sc_clock_pane_t

0xe8ce,	// (0x00025413) main_fs_bigclock_indicator_pane_ParamLimits

0xe8ce,	// (0x00025413) main_fs_bigclock_indicator_pane

0xdc6a,	// (0x000247af) main_fs_bigclock_pane_g1_ParamLimits

0xdc6a,	// (0x000247af) main_fs_bigclock_pane_g1

0xe8da,	// (0x0002541f) main_fs_bigclock_pane_t1_ParamLimits

0xe8da,	// (0x0002541f) main_fs_bigclock_pane_t1

0xe8ec,	// (0x00025431) main_fs_bigclock_pane_t2_ParamLimits

0xe8ec,	// (0x00025431) main_fs_bigclock_pane_t2

0xe8fe,	// (0x00025443) main_fs_bigclock_pane_t3_ParamLimits

0xe8fe,	// (0x00025443) main_fs_bigclock_pane_t3

0x0002,

0xfe7d,	// (0x000269c2) main_fs_bigclock_pane_t_ParamLimits

0xfe7d,	// (0x000269c2) main_fs_bigclock_pane_t

0x5b6e,	// (0x0001c6b3) main_fs_bigclock_indicator_pane_g1

0x4c05,	// (0x0001b74a) ncim_query_content_pane_g2_ParamLimits

0x4c05,	// (0x0001b74a) ncim_query_content_pane_g2

0x0001,

0xfc10,	// (0x00026755) ncim_query_content_pane_g_ParamLimits

0xfc10,	// (0x00026755) ncim_query_content_pane_g

0xdbf6,	// (0x0002473b) sc_clock_pane_t4_ParamLimits

0xdbf6,	// (0x0002473b) sc_clock_pane_t4

0x0270,	// (0x00016db5) main_radioblah_pane

0x3d7c,	// (0x0001a8c1) cell_call4_button_pane_t1_copy1_ParamLimits

0x3d7c,	// (0x0001a8c1) cell_call4_button_pane_t1_copy1

0xd898,	// (0x000243dd) main_ncimui_pane_t1_ParamLimits

0xd898,	// (0x000243dd) main_ncimui_pane_t1

0xd8b2,	// (0x000243f7) main_ncimui_pane_t2_ParamLimits

0xd8b2,	// (0x000243f7) main_ncimui_pane_t2

0x0002,

0xfc09,	// (0x0002674e) main_ncimui_pane_t_ParamLimits

0xfc09,	// (0x0002674e) main_ncimui_pane_t

0x506f,	// (0x0001bbb4) main_radioblah_anim_pane_ParamLimits

0x506f,	// (0x0001bbb4) main_radioblah_anim_pane

0x5080,	// (0x0001bbc5) main_radioblah_info_pane_ParamLimits

0x5080,	// (0x0001bbc5) main_radioblah_info_pane

0x5094,	// (0x0001bbd9) main_radioblah_pane_t1_ParamLimits

0x5094,	// (0x0001bbd9) main_radioblah_pane_t1

0x50b0,	// (0x0001bbf5) main_radioblah_pane_t2_ParamLimits

0x50b0,	// (0x0001bbf5) main_radioblah_pane_t2

0x0003,

0xfca4,	// (0x000267e9) main_radioblah_pane_t_ParamLimits

0xfca4,	// (0x000267e9) main_radioblah_pane_t

0xdcbc,	// (0x00024801) main_radioblah_rocker_ctrl_pane_ParamLimits

0xdcbc,	// (0x00024801) main_radioblah_rocker_ctrl_pane

0x50f8,	// (0x0001bc3d) main_radioblah_info_pane_t1_ParamLimits

0x50f8,	// (0x0001bc3d) main_radioblah_info_pane_t1

0xdd01,	// (0x00024846) main_radioblah_info_pane_t2_ParamLimits

0xdd01,	// (0x00024846) main_radioblah_info_pane_t2

0x0003,

0xfcad,	// (0x000267f2) main_radioblah_info_pane_t_ParamLimits

0xfcad,	// (0x000267f2) main_radioblah_info_pane_t

0x3156,	// (0x00019c9b) main_radioblah_rocker_ctrl_pane_g1

0xddb1,	// (0x000248f6) main_radioblah_rocker_ctrl_pane_g2

0xddb9,	// (0x000248fe) main_radioblah_rocker_ctrl_pane_g3

0xddc1,	// (0x00024906) main_radioblah_rocker_ctrl_pane_g4

0xddc9,	// (0x0002490e) main_radioblah_rocker_ctrl_pane_g5

0xddd1,	// (0x00024916) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcb6,	// (0x000267fb) main_radioblah_rocker_ctrl_pane_g

0xd84a,	// (0x0002438f) main_cset_text2_pane_t1_copy1_ParamLimits

0x7a7b,	// (0x0001e5c0) cam4_image_uncrop_qvga_pane

0x7bac,	// (0x0001e6f1) vid4_image_uncrop_qcif_pane

0x8194,	// (0x0001ecd9) cam6_image_uncrop_qvga_pane_ParamLimits

0x8194,	// (0x0001ecd9) cam6_image_uncrop_qvga_pane

0x483f,	// (0x0001b384) vid6_image_uncrop_qcif_pane_ParamLimits

0x483f,	// (0x0001b384) vid6_image_uncrop_qcif_pane

0x0200,	// (0x00016d45) bg_popup_preview_window_pane_cp03

0x4bb7,	// (0x0001b6fc) list_cset_text2_pane

0x4bbf,	// (0x0001b704) main_cset6_text2_pane_g1

0x4bc7,	// (0x0001b70c) main_cset6_text2_pane_t1

0xddd9,	// (0x0002491e) list_cset_text2_pane_t1_ParamLimits

0xddd9,	// (0x0002491e) list_cset_text2_pane_t1

0x0270,	// (0x00016db5) main_radioblah_pane_ParamLimits

0xdb55,	// (0x0002469a) main_mobtv_info_pane_t3_ParamLimits

0xdb55,	// (0x0002469a) main_mobtv_info_pane_t3

0xdcaa,	// (0x000247ef) main_radioblah_pane_g1

0xdcd5,	// (0x0002481a) main_radioblah_info_pane_g1

0xdd56,	// (0x0002489b) main_radioblah_info_pane_t3_ParamLimits

0xdd56,	// (0x0002489b) main_radioblah_info_pane_t3

0x9c8a,	// (0x000207cf) highlight_cell_cale_month_pane_ParamLimits

0x9c8a,	// (0x000207cf) highlight_cell_cale_month_pane

0x0200,	// (0x00016d45) main_phob_fisheye_pane

0x34d7,	// (0x0001a01c) scroll_pane_cp0031_ParamLimits

0x34d7,	// (0x0001a01c) scroll_pane_cp0031

0x494d,	// (0x0001b492) wait_bar_pane_cp08_ParamLimits

0xd636,	// (0x0002417b) cset_list_set_pane_copy1_ParamLimits

0x5132,	// (0x0001bc77) highlight_cell_cale_month_pane_g1

0xde04,	// (0x00024949) highlight_cell_cale_month_pane_t1

0x44e4,	// (0x0001b029) list_gen_pane_cp01

0x4028,	// (0x0001ab6d) scroll_pane_01

0xde12,	// (0x00024957) list_single_double_fisheye_pane

0x513a,	// (0x0001bc7f) list_double_fisheye_pane_g1_ParamLimits

0x513a,	// (0x0001bc7f) list_double_fisheye_pane_g1

0x5146,	// (0x0001bc8b) list_double_fisheye_pane_g2_ParamLimits

0x5146,	// (0x0001bc8b) list_double_fisheye_pane_g2

0xde1b,	// (0x00024960) list_double_fisheye_pane_g3_ParamLimits

0xde1b,	// (0x00024960) list_double_fisheye_pane_g3

0x0004,

0xfcc3,	// (0x00026808) list_double_fisheye_pane_g_ParamLimits

0xfcc3,	// (0x00026808) list_double_fisheye_pane_g

0xde27,	// (0x0002496c) list_double_fisheye_pane_t1_ParamLimits

0xde27,	// (0x0002496c) list_double_fisheye_pane_t1

0xde42,	// (0x00024987) list_double_fisheye_pane_t2_ParamLimits

0xde42,	// (0x00024987) list_double_fisheye_pane_t2

0x0001,

0xfcce,	// (0x00026813) list_double_fisheye_pane_t_ParamLimits

0xfcce,	// (0x00026813) list_double_fisheye_pane_t

0x0200,	// (0x00016d45) main_call5_pane

0xdc1c,	// (0x00024761) sc_swipe_pane_ParamLimits

0xdc1c,	// (0x00024761) sc_swipe_pane

0xde70,	// (0x000249b5) call5_image_pane_ParamLimits

0xde70,	// (0x000249b5) call5_image_pane

0xde80,	// (0x000249c5) call5_swipe_1_pane_ParamLimits

0xde80,	// (0x000249c5) call5_swipe_1_pane

0xde8c,	// (0x000249d1) call5_swipe_2_pane_ParamLimits

0xde8c,	// (0x000249d1) call5_swipe_2_pane

0xdea6,	// (0x000249eb) popup_call5_audio_first_window_ParamLimits

0xdea6,	// (0x000249eb) popup_call5_audio_first_window

0x33bd,	// (0x00019f02) call5_swipe_1_pane_g1_ParamLimits

0x33bd,	// (0x00019f02) call5_swipe_1_pane_g1

0x5177,	// (0x0001bcbc) call5_swipe_1_pane_g2_ParamLimits

0x5177,	// (0x0001bcbc) call5_swipe_1_pane_g2

0x0001,

0xfcd3,	// (0x00026818) call5_swipe_1_pane_g_ParamLimits

0xfcd3,	// (0x00026818) call5_swipe_1_pane_g

0x5183,	// (0x0001bcc8) call5_swipe_1_pane_t1_ParamLimits

0x5183,	// (0x0001bcc8) call5_swipe_1_pane_t1

0x33bd,	// (0x00019f02) call5_swipe_2_pane_g1_ParamLimits

0x33bd,	// (0x00019f02) call5_swipe_2_pane_g1

0x5198,	// (0x0001bcdd) call5_swipe_2_pane_g2_ParamLimits

0x5198,	// (0x0001bcdd) call5_swipe_2_pane_g2

0x0001,

0xfcd8,	// (0x0002681d) call5_swipe_2_pane_g_ParamLimits

0xfcd8,	// (0x0002681d) call5_swipe_2_pane_g

0x51a4,	// (0x0001bce9) call5_swipe_2_pane_t1_ParamLimits

0x51a4,	// (0x0001bce9) call5_swipe_2_pane_t1

0x51b9,	// (0x0001bcfe) sc_swipe_pane_g1_ParamLimits

0x51b9,	// (0x0001bcfe) sc_swipe_pane_g1

0x51c6,	// (0x0001bd0b) sc_swipe_pane_g2_ParamLimits

0x51c6,	// (0x0001bd0b) sc_swipe_pane_g2

0x0001,

0xfcdd,	// (0x00026822) sc_swipe_pane_g_ParamLimits

0xfcdd,	// (0x00026822) sc_swipe_pane_g

0x51d2,	// (0x0001bd17) sc_swipe_pane_t1_ParamLimits

0x51d2,	// (0x0001bd17) sc_swipe_pane_t1

0x0200,	// (0x00016d45) main_cmail_launcher_pane

0xdeb4,	// (0x000249f9) aid_size_cell_cmail_l_ParamLimits

0xdeb4,	// (0x000249f9) aid_size_cell_cmail_l

0xdec4,	// (0x00024a09) grid_cmail_l_pane_ParamLimits

0xdec4,	// (0x00024a09) grid_cmail_l_pane

0xded4,	// (0x00024a19) cell_cmail_l_pane_ParamLimits

0xded4,	// (0x00024a19) cell_cmail_l_pane

0xdee8,	// (0x00024a2d) cell_cmail_l_pane_g1_ParamLimits

0xdee8,	// (0x00024a2d) cell_cmail_l_pane_g1

0xdef4,	// (0x00024a39) cell_cmail_l_pane_t1_ParamLimits

0xdef4,	// (0x00024a39) cell_cmail_l_pane_t1

0x51e7,	// (0x0001bd2c) cell_cmail_l_pane_t2_ParamLimits

0x51e7,	// (0x0001bd2c) cell_cmail_l_pane_t2

0x0001,

0xfce2,	// (0x00026827) cell_cmail_l_pane_t_ParamLimits

0xfce2,	// (0x00026827) cell_cmail_l_pane_t

0x0270,	// (0x00016db5) grid_highlight_pane_cp018_ParamLimits

0x0270,	// (0x00016db5) grid_highlight_pane_cp018

0x82d9,	// (0x0001ee1e) main2_pane_ParamLimits

0x82d9,	// (0x0001ee1e) main2_pane

0x0af4,	// (0x00017639) popup_sp_fs_action_menu_bg_pane_g1

0x0afc,	// (0x00017641) popup_sp_fs_action_menu_bg_pane_g2

0x0b04,	// (0x00017649) popup_sp_fs_action_menu_bg_pane_g3

0x0b0c,	// (0x00017651) popup_sp_fs_action_menu_bg_pane_g4

0x0b14,	// (0x00017659) popup_sp_fs_action_menu_bg_pane_g5

0x0b1c,	// (0x00017661) popup_sp_fs_action_menu_bg_pane_g6

0x0b24,	// (0x00017669) popup_sp_fs_action_menu_bg_pane_g7

0x0b2c,	// (0x00017671) popup_sp_fs_action_menu_bg_pane_g8

0x0b34,	// (0x00017679) popup_sp_fs_action_menu_bg_pane_g9

0x0b3c,	// (0x00017681) popup_sp_fs_action_menu_bg_pane_g10

0x0b3c,	// (0x00017681) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1ac,	// (0x00025cf1) popup_sp_fs_action_menu_bg_pane_g

0x0d4b,	// (0x00017890) list_medium_line_x2_t3_g3_g1_ParamLimits

0x0d4b,	// (0x00017890) list_medium_line_x2_t3_g3_g1

0x0d57,	// (0x0001789c) list_medium_line_x2_t3_g3_g2_ParamLimits

0x0d57,	// (0x0001789c) list_medium_line_x2_t3_g3_g2

0x0d63,	// (0x000178a8) list_medium_line_x2_t3_g3_g3_ParamLimits

0x0d63,	// (0x000178a8) list_medium_line_x2_t3_g3_g3

0x0002,

0xf25c,	// (0x00025da1) list_medium_line_x2_t3_g3_g_ParamLimits

0xf25c,	// (0x00025da1) list_medium_line_x2_t3_g3_g

0x0d6f,	// (0x000178b4) list_medium_line_x2_t3_g3_t1_ParamLimits

0x0d6f,	// (0x000178b4) list_medium_line_x2_t3_g3_t1

0x8da7,	// (0x0001f8ec) list_medium_line_x2_t3_g3_t2_ParamLimits

0x8da7,	// (0x0001f8ec) list_medium_line_x2_t3_g3_t2

0x0d84,	// (0x000178c9) list_medium_line_x2_t3_g3_t3_ParamLimits

0x0d84,	// (0x000178c9) list_medium_line_x2_t3_g3_t3

0x0002,

0xf263,	// (0x00025da8) list_medium_line_x2_t3_g3_t_ParamLimits

0xf263,	// (0x00025da8) list_medium_line_x2_t3_g3_t

0x0d4b,	// (0x00017890) list_medium_line_x2_t3_g2_g1_ParamLimits

0x0d4b,	// (0x00017890) list_medium_line_x2_t3_g2_g1

0x0d63,	// (0x000178a8) list_medium_line_x2_t3_g2_g2_ParamLimits

0x0d63,	// (0x000178a8) list_medium_line_x2_t3_g2_g2

0x0001,

0xf26a,	// (0x00025daf) list_medium_line_x2_t3_g2_g_ParamLimits

0xf26a,	// (0x00025daf) list_medium_line_x2_t3_g2_g

0x0d99,	// (0x000178de) list_medium_line_x2_t3_g2_t1_ParamLimits

0x0d99,	// (0x000178de) list_medium_line_x2_t3_g2_t1

0x0daf,	// (0x000178f4) list_medium_line_x2_t3_g2_t2_ParamLimits

0x0daf,	// (0x000178f4) list_medium_line_x2_t3_g2_t2

0x0dc1,	// (0x00017906) list_medium_line_x2_t3_g2_t3_ParamLimits

0x0dc1,	// (0x00017906) list_medium_line_x2_t3_g2_t3

0x0002,

0xf26f,	// (0x00025db4) list_medium_line_x2_t3_g2_t_ParamLimits

0xf26f,	// (0x00025db4) list_medium_line_x2_t3_g2_t

0x0d4b,	// (0x00017890) list_medium_line_x2_t4_g4_g1_ParamLimits

0x0d4b,	// (0x00017890) list_medium_line_x2_t4_g4_g1

0x0dde,	// (0x00017923) list_medium_line_x2_t4_g4_g2_ParamLimits

0x0dde,	// (0x00017923) list_medium_line_x2_t4_g4_g2

0x0d57,	// (0x0001789c) list_medium_line_x2_t4_g4_g3_ParamLimits

0x0d57,	// (0x0001789c) list_medium_line_x2_t4_g4_g3

0x0dea,	// (0x0001792f) list_medium_line_x2_t4_g4_g4_ParamLimits

0x0dea,	// (0x0001792f) list_medium_line_x2_t4_g4_g4

0x0003,

0xf276,	// (0x00025dbb) list_medium_line_x2_t4_g4_g_ParamLimits

0xf276,	// (0x00025dbb) list_medium_line_x2_t4_g4_g

0x8db9,	// (0x0001f8fe) list_medium_line_x2_t4_g4_t1_ParamLimits

0x8db9,	// (0x0001f8fe) list_medium_line_x2_t4_g4_t1

0x8dd3,	// (0x0001f918) list_medium_line_x2_t4_g4_t2_ParamLimits

0x8dd3,	// (0x0001f918) list_medium_line_x2_t4_g4_t2

0x8de8,	// (0x0001f92d) list_medium_line_x2_t4_g4_t3_ParamLimits

0x8de8,	// (0x0001f92d) list_medium_line_x2_t4_g4_t3

0x0df6,	// (0x0001793b) list_medium_line_x2_t4_g4_t4_ParamLimits

0x0df6,	// (0x0001793b) list_medium_line_x2_t4_g4_t4

0x0003,

0xf27f,	// (0x00025dc4) list_medium_line_x2_t4_g4_t_ParamLimits

0xf27f,	// (0x00025dc4) list_medium_line_x2_t4_g4_t

0x0d4b,	// (0x00017890) list_medium_line_x2_t2_g4_g1_ParamLimits

0x0d4b,	// (0x00017890) list_medium_line_x2_t2_g4_g1

0x0dde,	// (0x00017923) list_medium_line_x2_t2_g4_g2_ParamLimits

0x0dde,	// (0x00017923) list_medium_line_x2_t2_g4_g2

0x0d57,	// (0x0001789c) list_medium_line_x2_t2_g4_g3_ParamLimits

0x0d57,	// (0x0001789c) list_medium_line_x2_t2_g4_g3

0x0d63,	// (0x000178a8) list_medium_line_x2_t2_g4_g4_ParamLimits

0x0d63,	// (0x000178a8) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2e6,	// (0x00025e2b) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2e6,	// (0x00025e2b) list_medium_line_x2_t2_g4_g

0x10de,	// (0x00017c23) list_medium_line_x2_t2_g4_t1_ParamLimits

0x10de,	// (0x00017c23) list_medium_line_x2_t2_g4_t1

0x0d84,	// (0x000178c9) list_medium_line_x2_t2_g4_t2_ParamLimits

0x0d84,	// (0x000178c9) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2ef,	// (0x00025e34) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2ef,	// (0x00025e34) list_medium_line_x2_t2_g4_t

0x0d4b,	// (0x00017890) list_medium_line_x2_t2_g3_g1_ParamLimits

0x0d4b,	// (0x00017890) list_medium_line_x2_t2_g3_g1

0x0d57,	// (0x0001789c) list_medium_line_x2_t2_g3_g2_ParamLimits

0x0d57,	// (0x0001789c) list_medium_line_x2_t2_g3_g2

0x0d63,	// (0x000178a8) list_medium_line_x2_t2_g3_g3_ParamLimits

0x0d63,	// (0x000178a8) list_medium_line_x2_t2_g3_g3

0x0002,

0xf25c,	// (0x00025da1) list_medium_line_x2_t2_g3_g_ParamLimits

0xf25c,	// (0x00025da1) list_medium_line_x2_t2_g3_g

0x10f3,	// (0x00017c38) list_medium_line_x2_t2_g3_t1_ParamLimits

0x10f3,	// (0x00017c38) list_medium_line_x2_t2_g3_t1

0x0d84,	// (0x000178c9) list_medium_line_x2_t2_g3_t2_ParamLimits

0x0d84,	// (0x000178c9) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2f4,	// (0x00025e39) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2f4,	// (0x00025e39) list_medium_line_x2_t2_g3_t

0x9ebc,	// (0x00020a01) main_sp_fs_list_pane_ParamLimits

0x9ebc,	// (0x00020a01) main_sp_fs_list_pane

0x9ec8,	// (0x00020a0d) sp_fs_scroll_pane_ParamLimits

0x9ec8,	// (0x00020a0d) sp_fs_scroll_pane

0x9ed4,	// (0x00020a19) list_medium_line_x2_t3_t1

0x9ee4,	// (0x00020a29) list_medium_line_x2_t3_t2

0x12d7,	// (0x00017e1c) list_medium_line_x2_t3_t3

0x0002,

0xf33f,	// (0x00025e84) list_medium_line_x2_t3_t

0x9ef2,	// (0x00020a37) list_medium_line_x3_t4_t1

0x9f02,	// (0x00020a47) list_medium_line_x3_t4_t2

0x12e5,	// (0x00017e2a) list_medium_line_x3_t4_t3

0x12d7,	// (0x00017e1c) list_medium_line_x3_t4_t4

0x0003,

0xf346,	// (0x00025e8b) list_medium_line_x3_t4_t

0x9f10,	// (0x00020a55) list_medium_line_x4_t5_t1

0x9f20,	// (0x00020a65) list_medium_line_x4_t5_t2

0x12e5,	// (0x00017e2a) list_medium_line_x4_t5_t3

0x12f3,	// (0x00017e38) list_medium_line_x4_t5_t4

0x12d7,	// (0x00017e1c) list_medium_line_x4_t5_t5

0x0004,

0xf34f,	// (0x00025e94) list_medium_line_x4_t5_t

0x0d4b,	// (0x00017890) list_medium_line_t4_g4_g1_ParamLimits

0x0d4b,	// (0x00017890) list_medium_line_t4_g4_g1

0x0dea,	// (0x0001792f) list_medium_line_t4_g4_g2_ParamLimits

0x0dea,	// (0x0001792f) list_medium_line_t4_g4_g2

0x1301,	// (0x00017e46) list_medium_line_t4_g4_g3_ParamLimits

0x1301,	// (0x00017e46) list_medium_line_t4_g4_g3

0x0d63,	// (0x000178a8) list_medium_line_t4_g4_g4_ParamLimits

0x0d63,	// (0x000178a8) list_medium_line_t4_g4_g4

0x0003,

0xf35a,	// (0x00025e9f) list_medium_line_t4_g4_g_ParamLimits

0xf35a,	// (0x00025e9f) list_medium_line_t4_g4_g

0x130d,	// (0x00017e52) list_medium_line_t4_g4_t1_ParamLimits

0x130d,	// (0x00017e52) list_medium_line_t4_g4_t1

0x1322,	// (0x00017e67) list_medium_line_t4_g4_t2_ParamLimits

0x1322,	// (0x00017e67) list_medium_line_t4_g4_t2

0x1337,	// (0x00017e7c) list_medium_line_t4_g4_t3_ParamLimits

0x1337,	// (0x00017e7c) list_medium_line_t4_g4_t3

0x0d84,	// (0x000178c9) list_medium_line_t4_g4_t4_ParamLimits

0x0d84,	// (0x000178c9) list_medium_line_t4_g4_t4

0x0003,

0xf363,	// (0x00025ea8) list_medium_line_t4_g4_t_ParamLimits

0xf363,	// (0x00025ea8) list_medium_line_t4_g4_t

0x9fa6,	// (0x00020aeb) chi_dic_find_pane_g1

0xaf48,	// (0x00021a8d) main_tport_pane

0x416d,	// (0x0001acb2) list_medium_line_plain_t1

0x41bf,	// (0x0001ad04) list_medium_line_t2_g2_g1_ParamLimits

0x41bf,	// (0x0001ad04) list_medium_line_t2_g2_g1

0x41cb,	// (0x0001ad10) list_medium_line_t2_g2_g2_ParamLimits

0x41cb,	// (0x0001ad10) list_medium_line_t2_g2_g2

0x0001,

0xfa1f,	// (0x00026564) list_medium_line_t2_g2_g_ParamLimits

0xfa1f,	// (0x00026564) list_medium_line_t2_g2_g

0xcc43,	// (0x00023788) list_medium_line_t2_g2_t1_ParamLimits

0xcc43,	// (0x00023788) list_medium_line_t2_g2_t1

0xcc5d,	// (0x000237a2) list_medium_line_t2_g2_t2_ParamLimits

0xcc5d,	// (0x000237a2) list_medium_line_t2_g2_t2

0x0001,

0xfa24,	// (0x00026569) list_medium_line_t2_g2_t_ParamLimits

0xfa24,	// (0x00026569) list_medium_line_t2_g2_t

0x4571,	// (0x0001b0b6) aid_sp_fs_list_icon_a_sm

0x4579,	// (0x0001b0be) aid_sp_fs_list_icon_d

0x4581,	// (0x0001b0c6) aid_sp_fs_text_primary

0x458a,	// (0x0001b0cf) aid_sp_fs_text_secondary

0x4593,	// (0x0001b0d8) list_medium_line

0x4593,	// (0x0001b0d8) list_medium_line_g2

0x4593,	// (0x0001b0d8) list_medium_line_g3

0x4593,	// (0x0001b0d8) list_medium_line_plain

0x4593,	// (0x0001b0d8) list_medium_line_plain_t2

0x4593,	// (0x0001b0d8) list_medium_line_plain_t3

0x4593,	// (0x0001b0d8) list_medium_line_right_icon

0x4593,	// (0x0001b0d8) list_medium_line_right_iconx2

0x4593,	// (0x0001b0d8) list_medium_line_t2

0x4593,	// (0x0001b0d8) list_medium_line_t2_g2

0x4593,	// (0x0001b0d8) list_medium_line_t2_g3

0x4593,	// (0x0001b0d8) list_medium_line_t2_right_icon

0x4593,	// (0x0001b0d8) list_medium_line_t2_right_iconx2

0x4593,	// (0x0001b0d8) list_medium_line_t3

0x4593,	// (0x0001b0d8) list_medium_line_t3_g2

0x4593,	// (0x0001b0d8) list_medium_line_t3_g3

0x4593,	// (0x0001b0d8) list_medium_line_t3_right_iconx2

0x459c,	// (0x0001b0e1) list_medium_line_t4_g4

0x45a5,	// (0x0001b0ea) list_medium_line_x2

0x45a5,	// (0x0001b0ea) list_medium_line_x2_t2_g2

0x45a5,	// (0x0001b0ea) list_medium_line_x2_t2_g3

0x45a5,	// (0x0001b0ea) list_medium_line_x2_t2_g4

0x45a5,	// (0x0001b0ea) list_medium_line_x2_t3

0x45a5,	// (0x0001b0ea) list_medium_line_x2_t3_g2

0x45a5,	// (0x0001b0ea) list_medium_line_x2_t3_g3

0x45a5,	// (0x0001b0ea) list_medium_line_x2_t3_g4

0x45a5,	// (0x0001b0ea) list_medium_line_x2_t4_g2

0x45a5,	// (0x0001b0ea) list_medium_line_x2_t4_g4

0x45ae,	// (0x0001b0f3) list_medium_line_x3

0x45ae,	// (0x0001b0f3) list_medium_line_x3_t4

0x45ae,	// (0x0001b0f3) list_medium_line_x3_t4_g4

0x459c,	// (0x0001b0e1) list_medium_line_x4_t4

0x459c,	// (0x0001b0e1) list_medium_line_x4_t4_g7

0x459c,	// (0x0001b0e1) list_medium_line_x4_t5

0x45b7,	// (0x0001b0fc) list_single_fs_dyc_pane_ParamLimits

0x45b7,	// (0x0001b0fc) list_single_fs_dyc_pane

0x0d4b,	// (0x00017890) list_medium_line_x4_t4_g7_g1_ParamLimits

0x0d4b,	// (0x00017890) list_medium_line_x4_t4_g7_g1

0x4ae6,	// (0x0001b62b) list_medium_line_x4_t4_g7_g2_ParamLimits

0x4ae6,	// (0x0001b62b) list_medium_line_x4_t4_g7_g2

0x4af2,	// (0x0001b637) list_medium_line_x4_t4_g7_g3_ParamLimits

0x4af2,	// (0x0001b637) list_medium_line_x4_t4_g7_g3

0x4b01,	// (0x0001b646) list_medium_line_x4_t4_g7_g4_ParamLimits

0x4b01,	// (0x0001b646) list_medium_line_x4_t4_g7_g4

0x4b0d,	// (0x0001b652) list_medium_line_x4_t4_g7_g5_ParamLimits

0x4b0d,	// (0x0001b652) list_medium_line_x4_t4_g7_g5

0x4b1c,	// (0x0001b661) list_medium_line_x4_t4_g7_g6_ParamLimits

0x4b1c,	// (0x0001b661) list_medium_line_x4_t4_g7_g6

0x4b2b,	// (0x0001b670) list_medium_line_x4_t4_g7_g7_ParamLimits

0x4b2b,	// (0x0001b670) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbef,	// (0x00026734) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbef,	// (0x00026734) list_medium_line_x4_t4_g7_g

0x4b37,	// (0x0001b67c) list_medium_line_x4_t4_g7_t1_ParamLimits

0x4b37,	// (0x0001b67c) list_medium_line_x4_t4_g7_t1

0x4b4c,	// (0x0001b691) list_medium_line_x4_t4_g7_t2_ParamLimits

0x4b4c,	// (0x0001b691) list_medium_line_x4_t4_g7_t2

0x4b61,	// (0x0001b6a6) list_medium_line_x4_t4_g7_t3_ParamLimits

0x4b61,	// (0x0001b6a6) list_medium_line_x4_t4_g7_t3

0x4b76,	// (0x0001b6bb) list_medium_line_x4_t4_g7_t4_ParamLimits

0x4b76,	// (0x0001b6bb) list_medium_line_x4_t4_g7_t4

0x4b88,	// (0x0001b6cd) list_medium_line_x4_t4_g7_t5_ParamLimits

0x4b88,	// (0x0001b6cd) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbfe,	// (0x00026743) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbfe,	// (0x00026743) list_medium_line_x4_t4_g7_t

0x4b9a,	// (0x0001b6df) list_single_dyc_row_pane_ParamLimits

0x4b9a,	// (0x0001b6df) list_single_dyc_row_pane

0xde64,	// (0x000249a9) call5_gesture_pane_ParamLimits

0xde64,	// (0x000249a9) call5_gesture_pane

0xde98,	// (0x000249dd) call5_windows_pane_ParamLimits

0xde98,	// (0x000249dd) call5_windows_pane

0xdf0a,	// (0x00024a4f) call5_swipe_1_pane_cp_ParamLimits

0xdf0a,	// (0x00024a4f) call5_swipe_1_pane_cp

0xdf16,	// (0x00024a5b) call5_swipe_2_pane_cp_ParamLimits

0xdf16,	// (0x00024a5b) call5_swipe_2_pane_cp

0x17af,	// (0x000182f4) call5_image_pane_cp

0xdf22,	// (0x00024a67) popup_call5_audio_first_window_cp_ParamLimits

0xdf22,	// (0x00024a67) popup_call5_audio_first_window_cp

0x51b9,	// (0x0001bcfe) call5_swipe_1_pane_g1_cp_ParamLimits

0x51b9,	// (0x0001bcfe) call5_swipe_1_pane_g1_cp

0x51f9,	// (0x0001bd3e) call5_swipe_1_pane_g2_cp

0x51d2,	// (0x0001bd17) call5_swipe_1_pane_t1_cp_ParamLimits

0x51d2,	// (0x0001bd17) call5_swipe_1_pane_t1_cp

0x51b9,	// (0x0001bcfe) call5_swipe_2_pane_g1_cp_ParamLimits

0x51b9,	// (0x0001bcfe) call5_swipe_2_pane_g1_cp

0x5201,	// (0x0001bd46) call5_swipe_2_pane_g2_cp

0x5209,	// (0x0001bd4e) call5_swipe_2_pane_t1_cp_ParamLimits

0x5209,	// (0x0001bd4e) call5_swipe_2_pane_t1_cp

0x0270,	// (0x00016db5) main_sp_fs_email_pane

0x521e,	// (0x0001bd63) main_sp_fs_listscroll_pane_te

0x5227,	// (0x0001bd6c) popup_sp_fs_action_menu_pane_ParamLimits

0x5227,	// (0x0001bd6c) popup_sp_fs_action_menu_pane

0x3156,	// (0x00019c9b) bg_sp_fs_ctrlbar_pane_g1

0x5267,	// (0x0001bdac) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x5270,	// (0x0001bdb5) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x5279,	// (0x0001bdbe) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x3156,	// (0x00019c9b) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfce7,	// (0x0002682c) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x2f39,	// (0x00019a7e) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x2f39,	// (0x00019a7e) bg_sp_fs_ctrlbar_ddmenu_pane

0x5282,	// (0x0001bdc7) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x5282,	// (0x0001bdc7) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x528e,	// (0x0001bdd3) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x528e,	// (0x0001bdd3) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcf0,	// (0x00026835) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcf0,	// (0x00026835) main_sp_fs_ctrlbar_ddmenu_pane_g

0x529a,	// (0x0001bddf) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x529a,	// (0x0001bddf) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x52b4,	// (0x0001bdf9) list_medium_line_t2_right_icon_g1

0xdf2e,	// (0x00024a73) list_medium_line_t2_right_icon_t1

0xdf3e,	// (0x00024a83) list_medium_line_t2_right_icon_t2

0x0001,

0xfcf5,	// (0x0002683a) list_medium_line_t2_right_icon_t

0x2c4e,	// (0x00019793) bg_sp_fs_ctrlbar_pane_ParamLimits

0x2c4e,	// (0x00019793) bg_sp_fs_ctrlbar_pane

0xdfa3,	// (0x00024ae8) main_sp_fs_ctrlbar_button_pane_cp01

0xdfab,	// (0x00024af0) main_sp_fs_ctrlbar_ddmenu_pane

0x0d4b,	// (0x00017890) main_sp_fs_ctrlbar_pane_g1

0x52f4,	// (0x0001be39) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfcfa,	// (0x0002683f) main_sp_fs_ctrlbar_pane_g

0x5300,	// (0x0001be45) main_sp_fs_ctrlbar_pane_t1

0xdfb5,	// (0x00024afa) main_sp_fs_ctrlbar_pane

0xdfd1,	// (0x00024b16) main_sp_fs_listscroll_pane_te_cp01

0xdfe2,	// (0x00024b27) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0xdfe2,	// (0x00024b27) popup_sp_fs_action_menu_pane_cp01

0x0270,	// (0x00016db5) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x0270,	// (0x00016db5) bg_sp_fs_highlight_list_pane_cp01

0x5315,	// (0x0001be5a) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x5315,	// (0x0001be5a) sp_fs_action_menu_list_gene_pane_g1

0x5324,	// (0x0001be69) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x5324,	// (0x0001be69) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcff,	// (0x00026844) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcff,	// (0x00026844) sp_fs_action_menu_list_gene_pane_g

0x5331,	// (0x0001be76) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x5331,	// (0x0001be76) sp_fs_action_menu_list_gene_pane_t1

0x5349,	// (0x0001be8e) sp_fs_action_menu_list_gene_pane_ParamLimits

0x5349,	// (0x0001be8e) sp_fs_action_menu_list_gene_pane

0x5366,	// (0x0001beab) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x5366,	// (0x0001beab) popup_sp_fs_action_menu_bg_pane

0x5374,	// (0x0001beb9) sp_fs_action_menu_list_pane_ParamLimits

0x5374,	// (0x0001beb9) sp_fs_action_menu_list_pane

0x5392,	// (0x0001bed7) sp_fs_scroll_pane_cp01_ParamLimits

0x5392,	// (0x0001bed7) sp_fs_scroll_pane_cp01

0xdffa,	// (0x00024b3f) list_medium_line_plain_t2_t1

0xe00a,	// (0x00024b4f) list_medium_line_plain_t2_t2

0x0001,

0xfd04,	// (0x00026849) list_medium_line_plain_t2_t

0xe018,	// (0x00024b5d) list_medium_line_plain_t3_t1

0xe028,	// (0x00024b6d) list_medium_line_plain_t3_t2

0xe036,	// (0x00024b7b) list_medium_line_plain_t3_t3

0x0002,

0xfd09,	// (0x0002684e) list_medium_line_plain_t3_t

0x0d4b,	// (0x00017890) list_medium_line_x2_t2_g2_g1_ParamLimits

0x0d4b,	// (0x00017890) list_medium_line_x2_t2_g2_g1

0x0d63,	// (0x000178a8) list_medium_line_x2_t2_g2_g2_ParamLimits

0x0d63,	// (0x000178a8) list_medium_line_x2_t2_g2_g2

0x0001,

0xf26a,	// (0x00025daf) list_medium_line_x2_t2_g2_g_ParamLimits

0xf26a,	// (0x00025daf) list_medium_line_x2_t2_g2_g

0x130d,	// (0x00017e52) list_medium_line_x2_t2_g2_t1_ParamLimits

0x130d,	// (0x00017e52) list_medium_line_x2_t2_g2_t1

0x0d84,	// (0x000178c9) list_medium_line_x2_t2_g2_t2_ParamLimits

0x0d84,	// (0x000178c9) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd10,	// (0x00026855) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd10,	// (0x00026855) list_medium_line_x2_t2_g2_t

0x0d4b,	// (0x00017890) list_medium_line_x2_t4_g2_g1_ParamLimits

0x0d4b,	// (0x00017890) list_medium_line_x2_t4_g2_g1

0x0d63,	// (0x000178a8) list_medium_line_x2_t4_g2_g2_ParamLimits

0x0d63,	// (0x000178a8) list_medium_line_x2_t4_g2_g2

0x0001,

0xf26a,	// (0x00025daf) list_medium_line_x2_t4_g2_g_ParamLimits

0xf26a,	// (0x00025daf) list_medium_line_x2_t4_g2_g

0xe044,	// (0x00024b89) list_medium_line_x2_t4_g2_t1_ParamLimits

0xe044,	// (0x00024b89) list_medium_line_x2_t4_g2_t1

0xe05e,	// (0x00024ba3) list_medium_line_x2_t4_g2_t2_ParamLimits

0xe05e,	// (0x00024ba3) list_medium_line_x2_t4_g2_t2

0xe073,	// (0x00024bb8) list_medium_line_x2_t4_g2_t3_ParamLimits

0xe073,	// (0x00024bb8) list_medium_line_x2_t4_g2_t3

0x0d84,	// (0x000178c9) list_medium_line_x2_t4_g2_t4_ParamLimits

0x0d84,	// (0x000178c9) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd15,	// (0x0002685a) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd15,	// (0x0002685a) list_medium_line_x2_t4_g2_t

0x53b8,	// (0x0001befd) list_medium_line_t3_right_iconx2_g1

0x52b4,	// (0x0001bdf9) list_medium_line_t3_right_iconx2_g2

0xe088,	// (0x00024bcd) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd1e,	// (0x00026863) list_medium_line_t3_right_iconx2_g

0xe090,	// (0x00024bd5) list_medium_line_t3_right_iconx2_t1

0xe0a0,	// (0x00024be5) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd25,	// (0x0002686a) list_medium_line_t3_right_iconx2_t

0x0d4b,	// (0x00017890) list_medium_line_x3_t4_g4_g1_ParamLimits

0x0d4b,	// (0x00017890) list_medium_line_x3_t4_g4_g1

0x0d57,	// (0x0001789c) list_medium_line_x3_t4_g4_g2_ParamLimits

0x0d57,	// (0x0001789c) list_medium_line_x3_t4_g4_g2

0x0dea,	// (0x0001792f) list_medium_line_x3_t4_g4_g3_ParamLimits

0x0dea,	// (0x0001792f) list_medium_line_x3_t4_g4_g3

0x53c0,	// (0x0001bf05) list_medium_line_x3_t4_g4_g4_ParamLimits

0x53c0,	// (0x0001bf05) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd2a,	// (0x0002686f) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd2a,	// (0x0002686f) list_medium_line_x3_t4_g4_g

0xe0ae,	// (0x00024bf3) list_medium_line_x3_t4_g4_t1_ParamLimits

0xe0ae,	// (0x00024bf3) list_medium_line_x3_t4_g4_t1

0xe0c5,	// (0x00024c0a) list_medium_line_x3_t4_g4_t2_ParamLimits

0xe0c5,	// (0x00024c0a) list_medium_line_x3_t4_g4_t2

0x1322,	// (0x00017e67) list_medium_line_x3_t4_g4_t3_ParamLimits

0x1322,	// (0x00017e67) list_medium_line_x3_t4_g4_t3

0x53cc,	// (0x0001bf11) list_medium_line_x3_t4_g4_t4_ParamLimits

0x53cc,	// (0x0001bf11) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd33,	// (0x00026878) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd33,	// (0x00026878) list_medium_line_x3_t4_g4_t

0xe0da,	// (0x00024c1f) list_single_dyc_row_text_pane_t1_ParamLimits

0xe0da,	// (0x00024c1f) list_single_dyc_row_text_pane_t1

0xe111,	// (0x00024c56) list_single_dyc_row_text_pane_t2_ParamLimits

0xe111,	// (0x00024c56) list_single_dyc_row_text_pane_t2

0x53e9,	// (0x0001bf2e) list_single_dyc_row_text_pane_t3_ParamLimits

0x53e9,	// (0x0001bf2e) list_single_dyc_row_text_pane_t3

0x0002,

0xfd3c,	// (0x00026881) list_single_dyc_row_text_pane_t_ParamLimits

0xfd3c,	// (0x00026881) list_single_dyc_row_text_pane_t

0x53fb,	// (0x0001bf40) list_single_dyc_row_pane_g1_ParamLimits

0x53fb,	// (0x0001bf40) list_single_dyc_row_pane_g1

0x5407,	// (0x0001bf4c) list_single_dyc_row_pane_g2_ParamLimits

0x5407,	// (0x0001bf4c) list_single_dyc_row_pane_g2

0x5413,	// (0x0001bf58) list_single_dyc_row_pane_g3_ParamLimits

0x5413,	// (0x0001bf58) list_single_dyc_row_pane_g3

0x541f,	// (0x0001bf64) list_single_dyc_row_pane_g4_ParamLimits

0x541f,	// (0x0001bf64) list_single_dyc_row_pane_g4

0x0003,

0xfd43,	// (0x00026888) list_single_dyc_row_pane_g_ParamLimits

0xfd43,	// (0x00026888) list_single_dyc_row_pane_g

0x542b,	// (0x0001bf70) list_single_dyc_row_text_pane_ParamLimits

0x542b,	// (0x0001bf70) list_single_dyc_row_text_pane

0x0200,	// (0x00016d45) bg_sp_fs_scroll_pane

0x544a,	// (0x0001bf8f) thumb_sp_fs_scroll_pane

0x41bf,	// (0x0001ad04) list_medium_line_g1_ParamLimits

0x41bf,	// (0x0001ad04) list_medium_line_g1

0x5453,	// (0x0001bf98) list_medium_line_t1_ParamLimits

0x5453,	// (0x0001bf98) list_medium_line_t1

0x0d4b,	// (0x00017890) list_medium_line_x2_g1_ParamLimits

0x0d4b,	// (0x00017890) list_medium_line_x2_g1

0x0d57,	// (0x0001789c) list_medium_line_x2_g2_ParamLimits

0x0d57,	// (0x0001789c) list_medium_line_x2_g2

0x0001,

0xfd4c,	// (0x00026891) list_medium_line_x2_g_ParamLimits

0xfd4c,	// (0x00026891) list_medium_line_x2_g

0x5468,	// (0x0001bfad) list_medium_line_x2_t1_ParamLimits

0x5468,	// (0x0001bfad) list_medium_line_x2_t1

0x0d4b,	// (0x00017890) list_medium_line_x3_g1_ParamLimits

0x0d4b,	// (0x00017890) list_medium_line_x3_g1

0x0d57,	// (0x0001789c) list_medium_line_x3_g2_ParamLimits

0x0d57,	// (0x0001789c) list_medium_line_x3_g2

0x0001,

0xfd4c,	// (0x00026891) list_medium_line_x3_g_ParamLimits

0xfd4c,	// (0x00026891) list_medium_line_x3_g

0x5468,	// (0x0001bfad) list_medium_line_x3_t1_ParamLimits

0x5468,	// (0x0001bfad) list_medium_line_x3_t1

0x547e,	// (0x0001bfc3) thumb_sp_fs_scroll_pane_g1

0x5487,	// (0x0001bfcc) thumb_sp_fs_scroll_pane_g2

0x5490,	// (0x0001bfd5) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd51,	// (0x00026896) thumb_sp_fs_scroll_pane_g

0x547e,	// (0x0001bfc3) bg_sp_fs_scroll_pane_g1

0x5487,	// (0x0001bfcc) bg_sp_fs_scroll_pane_g2

0x5490,	// (0x0001bfd5) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd51,	// (0x00026896) bg_sp_fs_scroll_pane_g

0x0d4b,	// (0x00017890) list_medium_line_x2_t3_g4_g1_ParamLimits

0x0d4b,	// (0x00017890) list_medium_line_x2_t3_g4_g1

0x0dde,	// (0x00017923) list_medium_line_x2_t3_g4_g2_ParamLimits

0x0dde,	// (0x00017923) list_medium_line_x2_t3_g4_g2

0x0d57,	// (0x0001789c) list_medium_line_x2_t3_g4_g3_ParamLimits

0x0d57,	// (0x0001789c) list_medium_line_x2_t3_g4_g3

0x0d63,	// (0x000178a8) list_medium_line_x2_t3_g4_g4_ParamLimits

0x0d63,	// (0x000178a8) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2e6,	// (0x00025e2b) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2e6,	// (0x00025e2b) list_medium_line_x2_t3_g4_g

0xe16b,	// (0x00024cb0) list_medium_line_x2_t3_g4_t1_ParamLimits

0xe16b,	// (0x00024cb0) list_medium_line_x2_t3_g4_t1

0xe181,	// (0x00024cc6) list_medium_line_x2_t3_g4_t2_ParamLimits

0xe181,	// (0x00024cc6) list_medium_line_x2_t3_g4_t2

0x0d84,	// (0x000178c9) list_medium_line_x2_t3_g4_t3_ParamLimits

0x0d84,	// (0x000178c9) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd58,	// (0x0002689d) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd58,	// (0x0002689d) list_medium_line_x2_t3_g4_t

0x41bf,	// (0x0001ad04) list_medium_line_g2_g1_ParamLimits

0x41bf,	// (0x0001ad04) list_medium_line_g2_g1

0x41cb,	// (0x0001ad10) list_medium_line_g2_g2_ParamLimits

0x41cb,	// (0x0001ad10) list_medium_line_g2_g2

0x0001,

0xfa1f,	// (0x00026564) list_medium_line_g2_g_ParamLimits

0xfa1f,	// (0x00026564) list_medium_line_g2_g

0x5499,	// (0x0001bfde) list_medium_line_g2_t1_ParamLimits

0x5499,	// (0x0001bfde) list_medium_line_g2_t1

0x41bf,	// (0x0001ad04) list_medium_line_t3_g2_g1_ParamLimits

0x41bf,	// (0x0001ad04) list_medium_line_t3_g2_g1

0x41cb,	// (0x0001ad10) list_medium_line_t3_g2_g2_ParamLimits

0x41cb,	// (0x0001ad10) list_medium_line_t3_g2_g2

0x0001,

0xfa1f,	// (0x00026564) list_medium_line_t3_g2_g_ParamLimits

0xfa1f,	// (0x00026564) list_medium_line_t3_g2_g

0xe19a,	// (0x00024cdf) list_medium_line_t3_g2_t1_ParamLimits

0xe19a,	// (0x00024cdf) list_medium_line_t3_g2_t1

0xe1b1,	// (0x00024cf6) list_medium_line_t3_g2_t2_ParamLimits

0xe1b1,	// (0x00024cf6) list_medium_line_t3_g2_t2

0xe1c6,	// (0x00024d0b) list_medium_line_t3_g2_t3_ParamLimits

0xe1c6,	// (0x00024d0b) list_medium_line_t3_g2_t3

0x0002,

0xfd5f,	// (0x000268a4) list_medium_line_t3_g2_t_ParamLimits

0xfd5f,	// (0x000268a4) list_medium_line_t3_g2_t

0x52b4,	// (0x0001bdf9) list_medium_line_right_icon_g1

0x54ae,	// (0x0001bff3) list_medium_line_right_icon_t1

0x41bf,	// (0x0001ad04) list_medium_line_t2_g1_ParamLimits

0x41bf,	// (0x0001ad04) list_medium_line_t2_g1

0xe1db,	// (0x00024d20) list_medium_line_t2_t1_ParamLimits

0xe1db,	// (0x00024d20) list_medium_line_t2_t1

0xe1f5,	// (0x00024d3a) list_medium_line_t2_t2_ParamLimits

0xe1f5,	// (0x00024d3a) list_medium_line_t2_t2

0x0001,

0xfd66,	// (0x000268ab) list_medium_line_t2_t_ParamLimits

0xfd66,	// (0x000268ab) list_medium_line_t2_t

0x41bf,	// (0x0001ad04) list_medium_line_t3_g1_ParamLimits

0x41bf,	// (0x0001ad04) list_medium_line_t3_g1

0xe20a,	// (0x00024d4f) list_medium_line_t3_t1_ParamLimits

0xe20a,	// (0x00024d4f) list_medium_line_t3_t1

0xe221,	// (0x00024d66) list_medium_line_t3_t2_ParamLimits

0xe221,	// (0x00024d66) list_medium_line_t3_t2

0xe236,	// (0x00024d7b) list_medium_line_t3_t3_ParamLimits

0xe236,	// (0x00024d7b) list_medium_line_t3_t3

0x0002,

0xfd6b,	// (0x000268b0) list_medium_line_t3_t_ParamLimits

0xfd6b,	// (0x000268b0) list_medium_line_t3_t

0x41bf,	// (0x0001ad04) list_medium_line_g3_g1_ParamLimits

0x41bf,	// (0x0001ad04) list_medium_line_g3_g1

0x54bc,	// (0x0001c001) list_medium_line_g3_g2_ParamLimits

0x54bc,	// (0x0001c001) list_medium_line_g3_g2

0x41cb,	// (0x0001ad10) list_medium_line_g3_g3_ParamLimits

0x41cb,	// (0x0001ad10) list_medium_line_g3_g3

0x0002,

0xfd72,	// (0x000268b7) list_medium_line_g3_g_ParamLimits

0xfd72,	// (0x000268b7) list_medium_line_g3_g

0x54c8,	// (0x0001c00d) list_medium_line_g3_t1_ParamLimits

0x54c8,	// (0x0001c00d) list_medium_line_g3_t1

0x41bf,	// (0x0001ad04) list_medium_line_t2_g3_g1_ParamLimits

0x41bf,	// (0x0001ad04) list_medium_line_t2_g3_g1

0x54bc,	// (0x0001c001) list_medium_line_t2_g3_g2_ParamLimits

0x54bc,	// (0x0001c001) list_medium_line_t2_g3_g2

0x41cb,	// (0x0001ad10) list_medium_line_t2_g3_g3_ParamLimits

0x41cb,	// (0x0001ad10) list_medium_line_t2_g3_g3

0x0002,

0xfd72,	// (0x000268b7) list_medium_line_t2_g3_g_ParamLimits

0xfd72,	// (0x000268b7) list_medium_line_t2_g3_g

0xe248,	// (0x00024d8d) list_medium_line_t2_g3_t1_ParamLimits

0xe248,	// (0x00024d8d) list_medium_line_t2_g3_t1

0xe25f,	// (0x00024da4) list_medium_line_t2_g3_t2_ParamLimits

0xe25f,	// (0x00024da4) list_medium_line_t2_g3_t2

0x0001,

0xfd79,	// (0x000268be) list_medium_line_t2_g3_t_ParamLimits

0xfd79,	// (0x000268be) list_medium_line_t2_g3_t

0x41bf,	// (0x0001ad04) list_medium_line_t3_g3_g1_ParamLimits

0x41bf,	// (0x0001ad04) list_medium_line_t3_g3_g1

0x54bc,	// (0x0001c001) list_medium_line_t3_g3_g2_ParamLimits

0x54bc,	// (0x0001c001) list_medium_line_t3_g3_g2

0x41cb,	// (0x0001ad10) list_medium_line_t3_g3_g3_ParamLimits

0x41cb,	// (0x0001ad10) list_medium_line_t3_g3_g3

0x0002,

0xfd72,	// (0x000268b7) list_medium_line_t3_g3_g_ParamLimits

0xfd72,	// (0x000268b7) list_medium_line_t3_g3_g

0xe274,	// (0x00024db9) list_medium_line_t3_g3_t1_ParamLimits

0xe274,	// (0x00024db9) list_medium_line_t3_g3_t1

0xe288,	// (0x00024dcd) list_medium_line_t3_g3_t2_ParamLimits

0xe288,	// (0x00024dcd) list_medium_line_t3_g3_t2

0xe29a,	// (0x00024ddf) list_medium_line_t3_g3_t3_ParamLimits

0xe29a,	// (0x00024ddf) list_medium_line_t3_g3_t3

0x0002,

0xfd7e,	// (0x000268c3) list_medium_line_t3_g3_t_ParamLimits

0xfd7e,	// (0x000268c3) list_medium_line_t3_g3_t

0x53b8,	// (0x0001befd) list_medium_line_right_iconx2_g1

0x52b4,	// (0x0001bdf9) list_medium_line_right_iconx2_g2

0x0001,

0xfd85,	// (0x000268ca) list_medium_line_right_iconx2_g

0x54dd,	// (0x0001c022) list_medium_line_right_iconx2_t1

0x53b8,	// (0x0001befd) list_medium_line_t2_right_iconx2_g1

0x52b4,	// (0x0001bdf9) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd85,	// (0x000268ca) list_medium_line_t2_right_iconx2_g

0xe2ac,	// (0x00024df1) list_medium_line_t2_right_iconx2_t1

0xe2bc,	// (0x00024e01) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd8a,	// (0x000268cf) list_medium_line_t2_right_iconx2_t

0x54eb,	// (0x0001c030) list_medium_line_x4_t4_t1

0xe2ca,	// (0x00024e0f) list_medium_line_x4_t4_t2

0xe2da,	// (0x00024e1f) list_medium_line_x4_t4_t3

0xe2ea,	// (0x00024e2f) list_medium_line_x4_t4_t4

0x0003,

0xfd8f,	// (0x000268d4) list_medium_line_x4_t4_t

0xe323,	// (0x00024e68) tport_appsw_pane_ParamLimits

0xe323,	// (0x00024e68) tport_appsw_pane

0xe32f,	// (0x00024e74) tport_contact_pane_ParamLimits

0xe32f,	// (0x00024e74) tport_contact_pane

0xe33f,	// (0x00024e84) tport_listscroll_pane_ParamLimits

0xe33f,	// (0x00024e84) tport_listscroll_pane

0xe34f,	// (0x00024e94) cell_tport_appsw_pane_ParamLimits

0xe34f,	// (0x00024e94) cell_tport_appsw_pane

0x345a,	// (0x00019f9f) tport_appsw_pane_g1_ParamLimits

0x345a,	// (0x00019f9f) tport_appsw_pane_g1

0x54f9,	// (0x0001c03e) tport_contact_pane_g1

0x5502,	// (0x0001c047) tport_contact_pane_t1

0x5510,	// (0x0001c055) tport_contact_pane_t2

0x0001,

0xfd98,	// (0x000268dd) tport_contact_pane_t

0x551e,	// (0x0001c063) list_tport_pane

0x5527,	// (0x0001c06c) scroll_pane_cp_030

0x5538,	// (0x0001c07d) cell_tport_appsw_pane_g1

0x5548,	// (0x0001c08d) cell_tport_appsw_pane_t1

0x0200,	// (0x00016d45) grid_highlight_pane_cp019

0xe37a,	// (0x00024ebf) list_tport_double_graphic_pane_ParamLimits

0xe37a,	// (0x00024ebf) list_tport_double_graphic_pane

0x0270,	// (0x00016db5) list_highlight_pane_cp023_ParamLimits

0x0270,	// (0x00016db5) list_highlight_pane_cp023

0xe38d,	// (0x00024ed2) list_tport_double_graphic_pane_g1_ParamLimits

0xe38d,	// (0x00024ed2) list_tport_double_graphic_pane_g1

0xe39a,	// (0x00024edf) list_tport_double_graphic_pane_t1_ParamLimits

0xe39a,	// (0x00024edf) list_tport_double_graphic_pane_t1

0xe3af,	// (0x00024ef4) list_tport_double_graphic_pane_t2_ParamLimits

0xe3af,	// (0x00024ef4) list_tport_double_graphic_pane_t2

0x0001,

0xfda4,	// (0x000268e9) list_tport_double_graphic_pane_t_ParamLimits

0xfda4,	// (0x000268e9) list_tport_double_graphic_pane_t

0x0200,	// (0x00016d45) main_cale_note_pane

0x7de5,	// (0x0001e92a) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x7de5,	// (0x0001e92a) cell_vitu2_function_top_wide_pane_cp01

0xdb69,	// (0x000246ae) wait_bar_pane_cp05_ParamLimits

0x0200,	// (0x00016d45) listscroll_cmail_pane

0x555e,	// (0x0001c0a3) list_cmail_pane

0xe3cb,	// (0x00024f10) list_cmail_body_pane

0xe3ef,	// (0x00024f34) list_single_cmail_header_caption_pane

0xe41d,	// (0x00024f62) list_single_cmail_header_detail_pane_ParamLimits

0xe41d,	// (0x00024f62) list_single_cmail_header_detail_pane

0xe455,	// (0x00024f9a) list_single_cmail_header_caption_pane_t1

0xe465,	// (0x00024faa) list_single_cmail_header_detail_pane_g1_ParamLimits

0xe465,	// (0x00024faa) list_single_cmail_header_detail_pane_g1

0x557e,	// (0x0001c0c3) list_single_cmail_header_detail_pane_g2_ParamLimits

0x557e,	// (0x0001c0c3) list_single_cmail_header_detail_pane_g2

0x0002,

0xfda9,	// (0x000268ee) list_single_cmail_header_detail_pane_g_ParamLimits

0xfda9,	// (0x000268ee) list_single_cmail_header_detail_pane_g

0x5597,	// (0x0001c0dc) list_single_cmail_header_detail_pane_t1_ParamLimits

0x5597,	// (0x0001c0dc) list_single_cmail_header_detail_pane_t1

0x55c9,	// (0x0001c10e) list_single_cmail_header_editor_pane_bg_ParamLimits

0x55c9,	// (0x0001c10e) list_single_cmail_header_editor_pane_bg

0x55db,	// (0x0001c120) list_cmail_body_pane_g1

0x55e4,	// (0x0001c129) list_cmail_body_pane_t1

0x3f0e,	// (0x0001aa53) list_single_cmail_header_editor_pane_bg_g1

0x0ffd,	// (0x00017b42) list_single_cmail_header_editor_pane_bg_g1_copy1

0x3f1e,	// (0x0001aa63) list_single_cmail_header_editor_pane_bg_g1_copy2

0x3f16,	// (0x0001aa5b) list_single_cmail_header_editor_pane_bg_g1_copy3

0x4197,	// (0x0001acdc) list_single_cmail_header_editor_pane_bg_g1_copy4

0x3f3e,	// (0x0001aa83) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x3f2e,	// (0x0001aa73) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x3f36,	// (0x0001aa7b) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x0fdd,	// (0x00017b22) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xe4a3,	// (0x00024fe8) calenote_gesture_pane_ParamLimits

0xe4a3,	// (0x00024fe8) calenote_gesture_pane

0xe4bd,	// (0x00025002) calenote_window_pane_ParamLimits

0xe4bd,	// (0x00025002) calenote_window_pane

0x55f2,	// (0x0001c137) popup_note_window_cp01

0xe4d5,	// (0x0002501a) calenote_swipe_1_pane_ParamLimits

0xe4d5,	// (0x0002501a) calenote_swipe_1_pane

0xdf16,	// (0x00024a5b) calenote_swipe_2_pane_ParamLimits

0xdf16,	// (0x00024a5b) calenote_swipe_2_pane

0x51b9,	// (0x0001bcfe) calenote_swipe_1_pane_g1_ParamLimits

0x51b9,	// (0x0001bcfe) calenote_swipe_1_pane_g1

0x51c6,	// (0x0001bd0b) calenote_swipe_1_pane_g2_ParamLimits

0x51c6,	// (0x0001bd0b) calenote_swipe_1_pane_g2

0x0001,

0xfcdd,	// (0x00026822) calenote_swipe_1_pane_g_ParamLimits

0xfcdd,	// (0x00026822) calenote_swipe_1_pane_g

0x5604,	// (0x0001c149) calenote_swipe_1_pane_t1_ParamLimits

0x5604,	// (0x0001c149) calenote_swipe_1_pane_t1

0x51b9,	// (0x0001bcfe) calenote_swipe_2_pane_g1_ParamLimits

0x51b9,	// (0x0001bcfe) calenote_swipe_2_pane_g1

0x5623,	// (0x0001c168) calenote_swipe_2_pane_g2_ParamLimits

0x5623,	// (0x0001c168) calenote_swipe_2_pane_g2

0x0001,

0xfdb5,	// (0x000268fa) calenote_swipe_2_pane_g_ParamLimits

0xfdb5,	// (0x000268fa) calenote_swipe_2_pane_g

0x562f,	// (0x0001c174) calenote_swipe_2_pane_t1_ParamLimits

0x562f,	// (0x0001c174) calenote_swipe_2_pane_t1

0x0200,	// (0x00016d45) main_mup_navstr_pane

0xbc1a,	// (0x0002275f) main_mup3_pane_t7_ParamLimits

0xbc1a,	// (0x0002275f) main_mup3_pane_t7

0x76fc,	// (0x0001e241) main_mp4_pane_g6_ParamLimits

0x76fc,	// (0x0001e241) main_mp4_pane_g6

0x79f1,	// (0x0001e536) main_image3_pane_t4_ParamLimits

0x79f1,	// (0x0001e536) main_image3_pane_t4

0xe4e8,	// (0x0002502d) popup_navstr_preview_pane_ParamLimits

0xe4e8,	// (0x0002502d) popup_navstr_preview_pane

0xe4f4,	// (0x00025039) scroll_navstr_pane_ParamLimits

0xe4f4,	// (0x00025039) scroll_navstr_pane

0x0200,	// (0x00016d45) bg_popup_preview_window_pane_cp04

0x5656,	// (0x0001c19b) popup_navstr_preview_pane_t1

0xe500,	// (0x00025045) scroll_navstr_pane_g1_ParamLimits

0xe500,	// (0x00025045) scroll_navstr_pane_g1

0xe50d,	// (0x00025052) scroll_navstr_pane_t1_ParamLimits

0xe50d,	// (0x00025052) scroll_navstr_pane_t1

0x55fb,	// (0x0001c140) bg_button_pane_cp014

0x55fb,	// (0x0001c140) bg_button_pane_cp030

0x515a,	// (0x0001bc9f) list_double_fisheye_pane_g4_ParamLimits

0x515a,	// (0x0001bc9f) list_double_fisheye_pane_g4

0x5166,	// (0x0001bcab) list_double_fisheye_pane_g5_ParamLimits

0x5166,	// (0x0001bcab) list_double_fisheye_pane_g5

0x5566,	// (0x0001c0ab) sp_fs_scroll_pane_cp03

0x0d4b,	// (0x00017890) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x52f4,	// (0x0001be39) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcfa,	// (0x0002683f) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x5300,	// (0x0001be45) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe3c1,	// (0x00024f06) sp_fs_scroll_pane_cp02

0x0bcc,	// (0x00017711) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x0bcc,	// (0x00017711) popup_sp_fs_calendar_preview_list_single_pane

0x0200,	// (0x00016d45) main_cam6_pano_pane

0x0270,	// (0x00016db5) main_mup3_pane_ParamLimits

0x0200,	// (0x00016d45) main_phacti_pane

0xda3e,	// (0x00024583) bg_button_pane_cp11

0xda56,	// (0x0002459b) main_mobtv_info_pane_g2_ParamLimits

0xda56,	// (0x0002459b) main_mobtv_info_pane_g2

0x0001,

0xfc5a,	// (0x0002679f) main_mobtv_info_pane_g_ParamLimits

0xfc5a,	// (0x0002679f) main_mobtv_info_pane_g

0xdc08,	// (0x0002474d) sc_clock_pane_t5_ParamLimits

0xdc08,	// (0x0002474d) sc_clock_pane_t5

0xdcaa,	// (0x000247ef) main_radioblah_pane_g1_ParamLimits

0x50c8,	// (0x0001bc0d) main_radioblah_pane_t3_ParamLimits

0x50c8,	// (0x0001bc0d) main_radioblah_pane_t3

0x50e0,	// (0x0001bc25) main_radioblah_pane_t4_ParamLimits

0x50e0,	// (0x0001bc25) main_radioblah_pane_t4

0xdcc8,	// (0x0002480d) main_radioblah_text_pane_ParamLimits

0xdcc8,	// (0x0002480d) main_radioblah_text_pane

0xdcd5,	// (0x0002481a) main_radioblah_info_pane_g1_ParamLimits

0xdd6a,	// (0x000248af) main_radioblah_info_pane_t4_ParamLimits

0xdd6a,	// (0x000248af) main_radioblah_info_pane_t4

0x0270,	// (0x00016db5) main_sp_fs_calendar_pane

0xe51f,	// (0x00025064) main_phacti_pane_g1

0xe527,	// (0x0002506c) phacti_note_pane_ParamLimits

0xe527,	// (0x0002506c) phacti_note_pane

0x566d,	// (0x0001c1b2) phacti_term_pane_ParamLimits

0x566d,	// (0x0001c1b2) phacti_term_pane

0x5682,	// (0x0001c1c7) phacti_note_pane_t1_ParamLimits

0x5682,	// (0x0001c1c7) phacti_note_pane_t1

0x5699,	// (0x0001c1de) phacti_term_pane_g1

0x56a1,	// (0x0001c1e6) phacti_term_pane_t1_ParamLimits

0x56a1,	// (0x0001c1e6) phacti_term_pane_t1

0x56cb,	// (0x0001c210) popup_sp_fs_calendar_preview_list_single_pane_g1

0x56d3,	// (0x0001c218) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdbf,	// (0x00026904) popup_sp_fs_calendar_preview_list_single_pane_g

0x56db,	// (0x0001c220) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x56db,	// (0x0001c220) popup_sp_fs_calendar_preview_list_single_pane_t1

0x56f1,	// (0x0001c236) aid_popup_sp_fs_bg_corner_pane

0x3156,	// (0x00019c9b) popup_sp_fs_calendar_preview_bg_pane_g1

0x0200,	// (0x00016d45) popup_sp_fs_calendar_preview_bg_pane

0x56f9,	// (0x0001c23e) popup_sp_fs_calendar_preview_list_pane

0x0270,	// (0x00016db5) bg_main_sp_fs_cale_pane_ParamLimits

0x0270,	// (0x00016db5) bg_main_sp_fs_cale_pane

0x570a,	// (0x0001c24f) listscroll_cale_mrui_pane_ParamLimits

0x570a,	// (0x0001c24f) listscroll_cale_mrui_pane

0x571e,	// (0x0001c263) listscroll_sp_fs_schedule_track_pane

0x5727,	// (0x0001c26c) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x5727,	// (0x0001c26c) main_sp_fs_ctrlbar_pane_cp01

0x5738,	// (0x0001c27d) main_sp_fs_ribbon_pane

0x5740,	// (0x0001c285) popup_sp_fs_cale_preview_window

0xe56a,	// (0x000250af) list_single_sp_fs_schedule_track_pane_ParamLimits

0xe56a,	// (0x000250af) list_single_sp_fs_schedule_track_pane

0x3823,	// (0x0001a368) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x3823,	// (0x0001a368) bg_sp_fs_highlight_list_pane_cp03

0xe58c,	// (0x000250d1) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xe58c,	// (0x000250d1) list_single_sp_fs_schedule_track_pane_g1

0xe598,	// (0x000250dd) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xe598,	// (0x000250dd) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdc4,	// (0x00026909) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdc4,	// (0x00026909) list_single_sp_fs_schedule_track_pane_g

0xe5a4,	// (0x000250e9) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xe5a4,	// (0x000250e9) list_single_sp_fs_schedule_track_pane_t1

0xe5bc,	// (0x00025101) sp_fs_schedule_track_pane_ParamLimits

0xe5bc,	// (0x00025101) sp_fs_schedule_track_pane

0x5752,	// (0x0001c297) sp_fs_schedule_track_pane_g1

0x575a,	// (0x0001c29f) sp_fs_schedule_track_pane_g2

0x5762,	// (0x0001c2a7) sp_fs_schedule_track_pane_g3

0x576a,	// (0x0001c2af) sp_fs_schedule_track_pane_g4

0x5772,	// (0x0001c2b7) sp_fs_schedule_track_pane_g5

0x0004,

0xfdc9,	// (0x0002690e) sp_fs_schedule_track_pane_g

0x3f0e,	// (0x0001aa53) bg_sp_fs_schedule_viewer_highlight_g1

0x0ffd,	// (0x00017b42) bg_sp_fs_schedule_viewer_highlight_g2

0x3f16,	// (0x0001aa5b) bg_sp_fs_schedule_viewer_highlight_g3

0x3f1e,	// (0x0001aa63) bg_sp_fs_schedule_viewer_highlight_g4

0x4197,	// (0x0001acdc) bg_sp_fs_schedule_viewer_highlight_g5

0x3f2e,	// (0x0001aa73) bg_sp_fs_schedule_viewer_highlight_g6

0x3f36,	// (0x0001aa7b) bg_sp_fs_schedule_viewer_highlight_g7

0x3f3e,	// (0x0001aa83) bg_sp_fs_schedule_viewer_highlight_g8

0x0fdd,	// (0x00017b22) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdd4,	// (0x00026919) bg_sp_fs_schedule_viewer_highlight_g

0x0200,	// (0x00016d45) bg_main_sp_fs_ribbon_pane

0xe5cc,	// (0x00025111) main_sp_fs_ribbon_pane_g1

0x577a,	// (0x0001c2bf) main_sp_fs_ribbon_pane_t1

0xe5d5,	// (0x0002511a) main_sp_fs_ribbon_pane_t2

0x5789,	// (0x0001c2ce) main_sp_fs_ribbon_pane_t3

0x0002,

0xfde7,	// (0x0002692c) main_sp_fs_ribbon_pane_t

0x5798,	// (0x0001c2dd) main_sp_fs_ribbon_scheduler_pane

0x57a0,	// (0x0001c2e5) bg_main_sp_fs_ribbon_pane_g1

0x57a9,	// (0x0001c2ee) bg_main_sp_fs_ribbon_pane_g2

0x57b2,	// (0x0001c2f7) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdee,	// (0x00026933) bg_main_sp_fs_ribbon_pane_g

0x57ba,	// (0x0001c2ff) main_sp_fs_ribbon_scheduler_pane_g1

0x57c3,	// (0x0001c308) main_sp_fs_ribbon_scheduler_pane_g2

0x57cc,	// (0x0001c311) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdf5,	// (0x0002693a) main_sp_fs_ribbon_scheduler_pane_g

0x57d5,	// (0x0001c31a) list_cale_mrui_pane

0xe5e4,	// (0x00025129) sp_fs_scroll_pane_cp07_ParamLimits

0xe5e4,	// (0x00025129) sp_fs_scroll_pane_cp07

0xe5fa,	// (0x0002513f) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xe5fa,	// (0x0002513f) bg_sp_fs_schedule_viewer_highlight

0x57de,	// (0x0001c323) list_single_sp_fs_schedule_track_pane_cp01

0x57e6,	// (0x0001c32b) list_sp_fs_schedule_track_pane

0x57ee,	// (0x0001c333) sp_fs_scroll_pane_cp06_ParamLimits

0x57ee,	// (0x0001c333) sp_fs_scroll_pane_cp06

0x3156,	// (0x00019c9b) bgmain_sp_fs_calendar_pane_g1

0xe607,	// (0x0002514c) list_single_cale_mrui_pane_ParamLimits

0xe607,	// (0x0002514c) list_single_cale_mrui_pane

0x5800,	// (0x0001c345) list_single_cale_mrui_row_pane_ParamLimits

0x5800,	// (0x0001c345) list_single_cale_mrui_row_pane

0x580d,	// (0x0001c352) list_single_cale_mrui_row_pane_g1_ParamLimits

0x580d,	// (0x0001c352) list_single_cale_mrui_row_pane_g1

0x5845,	// (0x0001c38a) list_single_cale_mrui_row_pane_t1_ParamLimits

0x5845,	// (0x0001c38a) list_single_cale_mrui_row_pane_t1

0xe636,	// (0x0002517b) list_single_cale_mrui_row_pane_t2_ParamLimits

0xe636,	// (0x0002517b) list_single_cale_mrui_row_pane_t2

0x5857,	// (0x0001c39c) list_single_cale_mrui_row_pane_t3_ParamLimits

0x5857,	// (0x0001c39c) list_single_cale_mrui_row_pane_t3

0x5886,	// (0x0001c3cb) list_single_cale_mrui_row_pane_t4_ParamLimits

0x5886,	// (0x0001c3cb) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe01,	// (0x00026946) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe01,	// (0x00026946) list_single_cale_mrui_row_pane_t

0xe69c,	// (0x000251e1) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0xe69c,	// (0x000251e1) list_single_cmail_header_editor_pane_bg_cp01

0xe6be,	// (0x00025203) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0xe6be,	// (0x00025203) list_single_cmail_header_editor_pane_bg_cp02

0xe6da,	// (0x0002521f) main_radioblah_text_pane_t1_ParamLimits

0xe6da,	// (0x0002521f) main_radioblah_text_pane_t1

0x58b5,	// (0x0001c3fa) cam6_indi_pane_cp01

0x58bd,	// (0x0001c402) cam6_mode_pane_cp01

0x58c5,	// (0x0001c40a) cam6_pano_pane

0x58ce,	// (0x0001c413) cam6_zoom_pane_cp01

0x58d6,	// (0x0001c41b) cam6_pano_image_pane

0x58e1,	// (0x0001c426) cam6_pano_pane_g1

0x4e40,	// (0x0001b985) cam6_pano_pane_g2

0x58ea,	// (0x0001c42f) cam6_pano_pane_g3

0x58f3,	// (0x0001c438) cam6_pano_pane_g4

0x3714,	// (0x0001a259) cam6_pano_pane_g5

0x58fc,	// (0x0001c441) cam6_pano_pane_g6

0x5906,	// (0x0001c44b) cam6_pano_pane_g7

0x590e,	// (0x0001c453) cam6_pano_pane_g8

0x5917,	// (0x0001c45c) cam6_pano_pane_g9

0x0008,

0xfe0a,	// (0x0002694f) cam6_pano_pane_g

0x0200,	// (0x00016d45) main_browser_tag_pane

0x564e,	// (0x0001c193) grid_navstr_albumart_pane

0x5922,	// (0x0001c467) cell_navstr_albumart_pane_ParamLimits

0x5922,	// (0x0001c467) cell_navstr_albumart_pane

0x1930,	// (0x00018475) cell_navstr_albumart_pane_g1

0x2a63,	// (0x000195a8) cell_navstr_albumart_pane_g2

0x2a73,	// (0x000195b8) cell_navstr_albumart_pane_g3

0x2a6b,	// (0x000195b0) cell_navstr_albumart_pane_g4

0x0003,

0xfe1d,	// (0x00026962) cell_navstr_albumart_pane_g

0xe6f7,	// (0x0002523c) bt_list_pane_ParamLimits

0xe6f7,	// (0x0002523c) bt_list_pane

0xe71e,	// (0x00025263) bt_list_pane_t1

0xe72d,	// (0x00025272) bt_list_pane_t2

0x0001,

0xfe26,	// (0x0002696b) bt_list_pane_t

0x0200,	// (0x00016d45) main_cale_prevew_pane

0xe73c,	// (0x00025281) popup_cale_preview_window_ParamLimits

0xe73c,	// (0x00025281) popup_cale_preview_window

0x0270,	// (0x00016db5) bg_popup_preview_window_pane_cp05_ParamLimits

0x0270,	// (0x00016db5) bg_popup_preview_window_pane_cp05

0x594d,	// (0x0001c492) list_cale_preview_pane_ParamLimits

0x594d,	// (0x0001c492) list_cale_preview_pane

0xe753,	// (0x00025298) list_double_cale_preview_pane_ParamLimits

0xe753,	// (0x00025298) list_double_cale_preview_pane

0xe765,	// (0x000252aa) list_single_cale_preview_pane_ParamLimits

0xe765,	// (0x000252aa) list_single_cale_preview_pane

0xe779,	// (0x000252be) list_single_cale_preview_pane_g1

0xe781,	// (0x000252c6) list_single_cale_preview_pane_t1_ParamLimits

0xe781,	// (0x000252c6) list_single_cale_preview_pane_t1

0xe796,	// (0x000252db) list_double_cale_preview_pane_g1

0xe79e,	// (0x000252e3) list_double_cale_preview_pane_t1_ParamLimits

0xe79e,	// (0x000252e3) list_double_cale_preview_pane_t1

0xe7b3,	// (0x000252f8) list_double_cale_preview_pane_t2_ParamLimits

0xe7b3,	// (0x000252f8) list_double_cale_preview_pane_t2

0x0001,

0xfe2b,	// (0x00026970) list_double_cale_preview_pane_t_ParamLimits

0xfe2b,	// (0x00026970) list_double_cale_preview_pane_t

0x0200,	// (0x00016d45) main_ezdial_pane

0x0270,	// (0x00016db5) main_sp_fs_email_pane_ParamLimits

0xdf4c,	// (0x00024a91) cmail_ddmenu_btn01_pane_ParamLimits

0xdf4c,	// (0x00024a91) cmail_ddmenu_btn01_pane

0xdf69,	// (0x00024aae) cmail_ddmenu_btn02_pane_ParamLimits

0xdf69,	// (0x00024aae) cmail_ddmenu_btn02_pane

0xdf87,	// (0x00024acc) cmail_ddmenu_btn03_pane_ParamLimits

0xdf87,	// (0x00024acc) cmail_ddmenu_btn03_pane

0xdfb5,	// (0x00024afa) main_sp_fs_ctrlbar_pane_ParamLimits

0xdfd1,	// (0x00024b16) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xe3cb,	// (0x00024f10) list_cmail_body_pane_ParamLimits

0x5575,	// (0x0001c0ba) bg_button_pane_cp12

0x558a,	// (0x0001c0cf) list_single_cmail_header_detail_pane_g3_ParamLimits

0x558a,	// (0x0001c0cf) list_single_cmail_header_detail_pane_g3

0xe47d,	// (0x00024fc2) list_single_cmail_header_detail_pane_t2_ParamLimits

0xe47d,	// (0x00024fc2) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdb0,	// (0x000268f5) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdb0,	// (0x000268f5) list_single_cmail_header_detail_pane_t

0x56b6,	// (0x0001c1fb) phacti_term_pane_t2_ParamLimits

0x56b6,	// (0x0001c1fb) phacti_term_pane_t2

0x0001,

0xfdba,	// (0x000268ff) phacti_term_pane_t_ParamLimits

0xfdba,	// (0x000268ff) phacti_term_pane_t

0x5959,	// (0x0001c49e) aid_size_list_single_double

0xe7cb,	// (0x00025310) popup_ezdial_listscroll_window

0xe7ec,	// (0x00025331) popup_number_entry_window_cp01

0x17af,	// (0x000182f4) bg_popup_call_pane_cp09

0x5965,	// (0x0001c4aa) ezdial_list_pane

0x596d,	// (0x0001c4b2) scroll_pane_cp23

0x2f39,	// (0x00019a7e) bg_button_pane_cp028_ParamLimits

0x2f39,	// (0x00019a7e) bg_button_pane_cp028

0xe7fa,	// (0x0002533f) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xe7fa,	// (0x0002533f) cmail_ddmenu_btn01_pane_g1

0xe80c,	// (0x00025351) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xe80c,	// (0x00025351) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe30,	// (0x00026975) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe30,	// (0x00026975) cmail_ddmenu_btn01_pane_g

0x5975,	// (0x0001c4ba) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x5975,	// (0x0001c4ba) cmail_ddmenu_btn01_pane_t1

0x2c4e,	// (0x00019793) bg_button_pane_cp029_ParamLimits

0x2c4e,	// (0x00019793) bg_button_pane_cp029

0xe80c,	// (0x00025351) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xe80c,	// (0x00025351) cmail_ddmenu_btn02_pane_g1

0xe824,	// (0x00025369) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xe824,	// (0x00025369) cmail_ddmenu_btn02_pane_t1

0x3823,	// (0x0001a368) bg_button_pane_cp031_ParamLimits

0x3823,	// (0x0001a368) bg_button_pane_cp031

0xe80c,	// (0x00025351) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xe80c,	// (0x00025351) cmail_ddmenu_btn03_pane_g1

0xe824,	// (0x00025369) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xe824,	// (0x00025369) cmail_ddmenu_btn03_pane_t1

0xc483,	// (0x00022fc8) cell_dialer2_keypad_pane_t1_ParamLimits

0xc49d,	// (0x00022fe2) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xc49d,	// (0x00022fe2) cell_dialer2_keypad_pane_t1_copy1

0xd8de,	// (0x00024423) ncimui_group_button_pane

0x0270,	// (0x00016db5) main_sp_fs_calendar_pane_ParamLimits

0xe3ef,	// (0x00024f34) list_single_cmail_header_caption_pane_ParamLimits

0x5701,	// (0x0001c246) aid_recal_txt_sm_pane

0x0200,	// (0x00016d45) mian_recal_day_pane

0x5740,	// (0x0001c285) popup_sp_fs_cale_preview_window_ParamLimits

0x0200,	// (0x00016d45) list_recal_day_pane

0x59ac,	// (0x0001c4f1) list_single_recal_day_pane_ParamLimits

0x59ac,	// (0x0001c4f1) list_single_recal_day_pane

0x59be,	// (0x0001c503) list_single_recal_day_pane_g1_ParamLimits

0x59be,	// (0x0001c503) list_single_recal_day_pane_g1

0x59ca,	// (0x0001c50f) list_single_recal_day_pane_g2_ParamLimits

0x59ca,	// (0x0001c50f) list_single_recal_day_pane_g2

0x59d9,	// (0x0001c51e) list_single_recal_day_pane_g3_ParamLimits

0x59d9,	// (0x0001c51e) list_single_recal_day_pane_g3

0xe848,	// (0x0002538d) list_single_recal_day_pane_g4_ParamLimits

0xe848,	// (0x0002538d) list_single_recal_day_pane_g4

0x59e5,	// (0x0001c52a) list_single_recal_day_pane_g5_ParamLimits

0x59e5,	// (0x0001c52a) list_single_recal_day_pane_g5

0x59f4,	// (0x0001c539) list_single_recal_day_pane_g6_ParamLimits

0x59f4,	// (0x0001c539) list_single_recal_day_pane_g6

0x0005,

0xfe3f,	// (0x00026984) list_single_recal_day_pane_g_ParamLimits

0xfe3f,	// (0x00026984) list_single_recal_day_pane_g

0x5a00,	// (0x0001c545) list_single_recal_day_pane_t1

0x5a0e,	// (0x0001c553) list_single_recal_day_pane_t2

0x0001,

0xfe4c,	// (0x00026991) list_single_recal_day_pane_t

0xe85b,	// (0x000253a0) ncimui_query_button_pane_ParamLimits

0xe85b,	// (0x000253a0) ncimui_query_button_pane

0xe86b,	// (0x000253b0) ncimui_query_button_pane_t1_ParamLimits

0xe86b,	// (0x000253b0) ncimui_query_button_pane_t1

0x5a1c,	// (0x0001c561) ncimui_query_button_pane_t2_ParamLimits

0x5a1c,	// (0x0001c561) ncimui_query_button_pane_t2

0x0001,

0xfe51,	// (0x00026996) ncimui_query_button_pane_t_ParamLimits

0xfe51,	// (0x00026996) ncimui_query_button_pane_t

0xe87e,	// (0x000253c3) query_button_pane_ParamLimits

0xe87e,	// (0x000253c3) query_button_pane

0x0200,	// (0x00016d45) bg_button_pane_cp0028

0x5a2f,	// (0x0001c574) query_button_pane_t1

0xaf48,	// (0x00021a8d) main_tport_pane_ParamLimits

0xe2fa,	// (0x00024e3f) bg_popup_window_pane_cp01_ParamLimits

0xe2fa,	// (0x00024e3f) bg_popup_window_pane_cp01

0xe307,	// (0x00024e4c) heading_pane_cp08_ParamLimits

0xe307,	// (0x00024e4c) heading_pane_cp08

0xe315,	// (0x00024e5a) heading_pane_cp07_ParamLimits

0xe315,	// (0x00024e5a) heading_pane_cp07

0x5538,	// (0x0001c07d) cell_tport_appsw_pane_g2

0x0002,

0xfd9d,	// (0x000268e2) cell_tport_appsw_pane_g

0xa6de,	// (0x00021223) input_candi_list_open_g1

0x11f0,	// (0x00017d35) list_cale_time_pane_g6_ParamLimits

0x11f0,	// (0x00017d35) list_cale_time_pane_g6

0xb699,	// (0x000221de) aid_size_touch_calib_1_ParamLimits

0xb699,	// (0x000221de) aid_size_touch_calib_1

0xb6a5,	// (0x000221ea) aid_size_touch_calib_2_ParamLimits

0xb6a5,	// (0x000221ea) aid_size_touch_calib_2

0xb6b3,	// (0x000221f8) aid_size_touch_calib_3_ParamLimits

0xb6b3,	// (0x000221f8) aid_size_touch_calib_3

0xb6c3,	// (0x00022208) aid_size_touch_calib_4_ParamLimits

0xb6c3,	// (0x00022208) aid_size_touch_calib_4

0xb6d1,	// (0x00022216) main_touch_calib_button_group_pane_ParamLimits

0xb6d1,	// (0x00022216) main_touch_calib_button_group_pane

0xb6df,	// (0x00022224) main_touch_calib_pane_g1_ParamLimits

0xb6eb,	// (0x00022230) main_touch_calib_pane_g2_ParamLimits

0xb6f7,	// (0x0002223c) main_touch_calib_pane_g3_ParamLimits

0xb703,	// (0x00022248) main_touch_calib_pane_g4_ParamLimits

0xf775,	// (0x000262ba) main_touch_calib_pane_g_ParamLimits

0xb70f,	// (0x00022254) main_touch_calib_pane_t1_ParamLimits

0xb726,	// (0x0002226b) main_touch_calib_pane_t2_ParamLimits

0xb73d,	// (0x00022282) main_touch_calib_pane_t3_ParamLimits

0xb751,	// (0x00022296) main_touch_calib_pane_t4_ParamLimits

0xb765,	// (0x000222aa) main_touch_calib_pane_t5_ParamLimits

0xf77e,	// (0x000262c3) main_touch_calib_pane_t_ParamLimits

0x34fb,	// (0x0001a040) list_single_fp_cale_pane_g3_ParamLimits

0x34fb,	// (0x0001a040) list_single_fp_cale_pane_g3

0x7bee,	// (0x0001e733) bg_button_pane_cp012_ParamLimits

0x7bee,	// (0x0001e733) bg_vkb2_func_pane_cp03_ParamLimits

0x7feb,	// (0x0001eb30) cell_vitu2_function_top_pane_g1_ParamLimits

0x7bee,	// (0x0001e733) bg_vkb2_func_pane_cp04_ParamLimits

0xd87c,	// (0x000243c1) main_ncimui_button_group_pane_ParamLimits

0xd87c,	// (0x000243c1) main_ncimui_button_group_pane

0xd8cc,	// (0x00024411) main_ncimui_pane_t3_ParamLimits

0xd8cc,	// (0x00024411) main_ncimui_pane_t3

0x5664,	// (0x0001c1a9) phacti_button_group_pane

0x5959,	// (0x0001c49e) aid_size_list_single_double_ParamLimits

0xe7cb,	// (0x00025310) popup_ezdial_listscroll_window_ParamLimits

0xe7ec,	// (0x00025331) popup_number_entry_window_cp01_ParamLimits

0xe88b,	// (0x000253d0) phacti_button_pane_ParamLimits

0xe88b,	// (0x000253d0) phacti_button_pane

0x0200,	// (0x00016d45) bg_button_pane_cp14

0x5a3d,	// (0x0001c582) phacti_button_pane_t1

0xe89c,	// (0x000253e1) main_touch_calib_button_pane_ParamLimits

0xe89c,	// (0x000253e1) main_touch_calib_button_pane

0x0a1b,	// (0x00017560) bg_button_pane_cp18_ParamLimits

0x0a1b,	// (0x00017560) bg_button_pane_cp18

0x5a4b,	// (0x0001c590) main_touch_calib_button_pane_t1_ParamLimits

0x5a4b,	// (0x0001c590) main_touch_calib_button_pane_t1

0x5a61,	// (0x0001c5a6) main_touch_calib_button_pane_t2_ParamLimits

0x5a61,	// (0x0001c5a6) main_touch_calib_button_pane_t2

0x0001,

0xfe56,	// (0x0002699b) main_touch_calib_button_pane_t_ParamLimits

0xfe56,	// (0x0002699b) main_touch_calib_button_pane_t

0x0200,	// (0x00016d45) cell_ncimui_button_pane

0x0200,	// (0x00016d45) bg_button_pane_cp032

0x5a7f,	// (0x0001c5c4) cell_ncimui_button_pane_t1

0x7904,	// (0x0001e449) image3_infobar_pane_ParamLimits

0x7904,	// (0x0001e449) image3_infobar_pane

0xdc2a,	// (0x0002476f) fs_bigclock_status_pane_ParamLimits

0xdc2a,	// (0x0002476f) fs_bigclock_status_pane

0xdc37,	// (0x0002477c) main_fs_bigclock_clock_pane_ParamLimits

0xdc37,	// (0x0002477c) main_fs_bigclock_clock_pane

0xdc4b,	// (0x00024790) main_fs_bigclock_indi_pane_ParamLimits

0xdc4b,	// (0x00024790) main_fs_bigclock_indi_pane

0xdc78,	// (0x000247bd) main_fs_bigclock_swipe_pane_ParamLimits

0xdc78,	// (0x000247bd) main_fs_bigclock_swipe_pane

0x0200,	// (0x00016d45) main_fs_clock_dumped_data

0x4f4d,	// (0x0001ba92) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x4f4d,	// (0x0001ba92) list_single_fs_bigclock_indicator_pane_g1

0x4f6b,	// (0x0001bab0) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x4f6b,	// (0x0001bab0) list_single_fs_bigclock_indicator_pane_g2

0x4f85,	// (0x0001baca) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x4f85,	// (0x0001baca) list_single_fs_bigclock_indicator_pane_g3

0x4f9f,	// (0x0001bae4) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x4f9f,	// (0x0001bae4) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc8e,	// (0x000267d3) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc8e,	// (0x000267d3) list_single_fs_bigclock_indicator_pane_g

0x4fc5,	// (0x0001bb0a) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x4fc5,	// (0x0001bb0a) list_single_fs_bigclock_indicator_pane_t1

0x4fed,	// (0x0001bb32) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x4fed,	// (0x0001bb32) list_single_fs_bigclock_indicator_pane_t2

0x5015,	// (0x0001bb5a) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x5015,	// (0x0001bb5a) list_single_fs_bigclock_indicator_pane_t3

0x503d,	// (0x0001bb82) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x503d,	// (0x0001bb82) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc99,	// (0x000267de) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc99,	// (0x000267de) list_single_fs_bigclock_indicator_pane_t

0x5a8d,	// (0x0001c5d2) image3_infobar_fav_pane_ParamLimits

0x5a8d,	// (0x0001c5d2) image3_infobar_fav_pane

0x5a9d,	// (0x0001c5e2) image3_infobar_loc_pane_ParamLimits

0x5a9d,	// (0x0001c5e2) image3_infobar_loc_pane

0x5ab1,	// (0x0001c5f6) image3_infobar_time_pane_ParamLimits

0x5ab1,	// (0x0001c5f6) image3_infobar_time_pane

0x3156,	// (0x00019c9b) image3_infobar_time_pane_g1

0x5ac1,	// (0x0001c606) image3_infobar_time_pane_t1

0x3156,	// (0x00019c9b) image3_infobar_loc_pane_g1

0x5acf,	// (0x0001c614) image3_infobar_loc_pane_g2

0x0001,

0xfe5b,	// (0x000269a0) image3_infobar_loc_pane_g

0x5ad7,	// (0x0001c61c) image3_infobar_loc_pane_t1

0x3156,	// (0x00019c9b) image3_infobar_fav_pane_g1

0x5ae5,	// (0x0001c62a) image3_infobar_fav_pane_g2

0x0001,

0xfe60,	// (0x000269a5) image3_infobar_fav_pane_g

0x5aed,	// (0x0001c632) fs_bigclock_status_battery_pane

0x5af6,	// (0x0001c63b) fs_bigclock_status_signal_pane

0x5aff,	// (0x0001c644) fs_bigclock_status_title_pane

0x5b08,	// (0x0001c64d) fs_bigclock_status_signal_pane_g1

0x5b11,	// (0x0001c656) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe65,	// (0x000269aa) fs_bigclock_status_signal_pane_g

0x5b19,	// (0x0001c65e) fs_bigclock_status_battery_pane_g1

0x5b22,	// (0x0001c667) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe6a,	// (0x000269af) fs_bigclock_status_battery_pane_g

0x5b2a,	// (0x0001c66f) fs_bigclock_status_title_pane_t1

0x3156,	// (0x00019c9b) main_fs_bigclock_clock_pane_g1

0x5b38,	// (0x0001c67d) main_fs_bigclock_clock_pane_g2

0x5b38,	// (0x0001c67d) main_fs_bigclock_clock_pane_g3

0x5b38,	// (0x0001c67d) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe6f,	// (0x000269b4) main_fs_bigclock_clock_pane_g

0x5b40,	// (0x0001c685) main_fs_bigclock_clock_pane_t1

0x5b4e,	// (0x0001c693) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe78,	// (0x000269bd) main_fs_bigclock_clock_pane_t

0x5b5d,	// (0x0001c6a2) list_single_fs_bigclock_indicator_pane_ParamLimits

0x5b5d,	// (0x0001c6a2) list_single_fs_bigclock_indicator_pane

0xe8ac,	// (0x000253f1) list_single_fs_bigclock_pane_ParamLimits

0xe8ac,	// (0x000253f1) list_single_fs_bigclock_pane

0x5b77,	// (0x0001c6bc) main_fs_bigclock_indicator_pane_t1

0x5b86,	// (0x0001c6cb) list_single_fs_bigclock_pane_g1

0x5b8e,	// (0x0001c6d3) list_single_fs_bigclock_pane_t1

0x3156,	// (0x00019c9b) main_fs_bigclock_swipe_pane_g1

0x5bcc,	// (0x0001c711) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe89,	// (0x000269ce) main_fs_bigclock_swipe_pane_g

0x5bd4,	// (0x0001c719) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x5bd4,	// (0x0001c719) main_fs_bigclock_swipe_pane_t1

0x9f2e,	// (0x00020a73) call_type_pane_ParamLimits

0x0200,	// (0x00016d45) main_btmg_pane

0x5839,	// (0x0001c37e) list_single_cale_mrui_row_pane_g2_ParamLimits

0x5839,	// (0x0001c37e) list_single_cale_mrui_row_pane_g2

0x0001,

0xfdfc,	// (0x00026941) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdfc,	// (0x00026941) list_single_cale_mrui_row_pane_g

0x5993,	// (0x0001c4d8) list_recal_vselct_arw_lo_pane

0x599b,	// (0x0001c4e0) list_recal_vselct_arw_up_pane

0x59a3,	// (0x0001c4e8) list_recal_vselct_pane

0x5bf1,	// (0x0001c736) btmg_button_pane

0xe910,	// (0x00025455) main_btmg_pane_g1

0x0200,	// (0x00016d45) bg_button_pane_cp044

0x5bfb,	// (0x0001c740) btmg_button_pane_t1

0x2c46,	// (0x0001978b) aid_listscroll_gen

0x0270,	// (0x00016db5) main_cntbar_detail_pane

0x5556,	// (0x0001c09b) list_cmail_folder_pane

0x5566,	// (0x0001c0ab) sp_fs_scroll_pane_cp03_ParamLimits

0xe3ef,	// (0x00024f34) list_single_fs_dyc_pane_cp01_ParamLimits

0xe3ef,	// (0x00024f34) list_single_fs_dyc_pane_cp01

0x5c09,	// (0x0001c74e) aid_size_cmail_indent

0x5c12,	// (0x0001c757) list_single_dyc_row_pane_cp01

0xe938,	// (0x0002547d) cntbar_detail_list_pane_ParamLimits

0xe938,	// (0x0002547d) cntbar_detail_list_pane

0xe972,	// (0x000254b7) main_cntbar_detail_cont_pane_ParamLimits

0xe972,	// (0x000254b7) main_cntbar_detail_cont_pane

0x9ec8,	// (0x00020a0d) scroll_pane_cp032_ParamLimits

0x9ec8,	// (0x00020a0d) scroll_pane_cp032

0xe97e,	// (0x000254c3) cntbar_detail_list_event_pane_ParamLimits

0xe97e,	// (0x000254c3) cntbar_detail_list_event_pane

0xe944,	// (0x00025489) cntbar_detail_list_shct_pane

0x104b,	// (0x00017b90) aid_list_gen

0x5c1b,	// (0x0001c760) aid_scroll

0x5c24,	// (0x0001c769) aid_size_touch_scroll_bar

0x5944,	// (0x0001c489) aid_list_double

0x5c2d,	// (0x0001c772) aid_list_single

0x5c36,	// (0x0001c77b) aid_list_single_lg

0x5c3f,	// (0x0001c784) aid_list_z_g_a_sm

0x5c47,	// (0x0001c78c) aid_list_z_g_d

0x5c4f,	// (0x0001c794) aid_txt_z_prm

0xe992,	// (0x000254d7) aid_txt_z_prm_cp01

0xe9a0,	// (0x000254e5) aid_txt_z_sec

0xe9ae,	// (0x000254f3) main_cntbar_detail_cont_pane_g1_ParamLimits

0xe9ae,	// (0x000254f3) main_cntbar_detail_cont_pane_g1

0xe9bb,	// (0x00025500) main_cntbar_detail_cont_pane_g2_ParamLimits

0xe9bb,	// (0x00025500) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe8e,	// (0x000269d3) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe8e,	// (0x000269d3) main_cntbar_detail_cont_pane_g

0x5c5d,	// (0x0001c7a2) main_cntbar_detail_cont_pane_t1

0x5c6b,	// (0x0001c7b0) main_cntbar_detail_cont_pane_t2

0x5c79,	// (0x0001c7be) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe93,	// (0x000269d8) main_cntbar_detail_cont_pane_t

0xe9c7,	// (0x0002550c) cell_cntbar_detail_list_shct_pane_ParamLimits

0xe9c7,	// (0x0002550c) cell_cntbar_detail_list_shct_pane

0x5c87,	// (0x0001c7cc) cntbar_detail_list_shct_pane_g1

0x5c90,	// (0x0001c7d5) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe9a,	// (0x000269df) cntbar_detail_list_shct_pane_g

0xe9db,	// (0x00025520) cntbar_detail_list_event_pane_g1_ParamLimits

0xe9db,	// (0x00025520) cntbar_detail_list_event_pane_g1

0xe9e7,	// (0x0002552c) cntbar_detail_list_event_pane_g2_ParamLimits

0xe9e7,	// (0x0002552c) cntbar_detail_list_event_pane_g2

0x0005,

0xfe9f,	// (0x000269e4) cntbar_detail_list_event_pane_g_ParamLimits

0xfe9f,	// (0x000269e4) cntbar_detail_list_event_pane_g

0xea53,	// (0x00025598) cntbar_detail_list_event_pane_t1_ParamLimits

0xea53,	// (0x00025598) cntbar_detail_list_event_pane_t1

0xea68,	// (0x000255ad) cntbar_detail_list_event_pane_t2_ParamLimits

0xea68,	// (0x000255ad) cntbar_detail_list_event_pane_t2

0x0002,

0xfeac,	// (0x000269f1) cntbar_detail_list_event_pane_t_ParamLimits

0xfeac,	// (0x000269f1) cntbar_detail_list_event_pane_t

0x3156,	// (0x00019c9b) cell_cntbar_detail_list_shct_pane_g1

0xa242,	// (0x00020d87) navi_pane_mv_g3

0x0270,	// (0x00016db5) main_cntbar_detail_pane_ParamLimits

0x0200,	// (0x00016d45) main_notif_wgt_pane

0x7643,	// (0x0001e188) aid_tch_main_mp4_pane_g4

0x7878,	// (0x0001e3bd) popup_slider_window_cp02

0x598a,	// (0x0001c4cf) list_recal_day_event_pane

0xe918,	// (0x0002545d) cntbar_detail_btn_pane_ParamLimits

0xe918,	// (0x0002545d) cntbar_detail_btn_pane

0xe928,	// (0x0002546d) cntbar_detail_btn_pane_cp01_ParamLimits

0xe928,	// (0x0002546d) cntbar_detail_btn_pane_cp01

0xe944,	// (0x00025489) cntbar_detail_list_shct_pane_ParamLimits

0xe950,	// (0x00025495) cntbar_detail_pane_g1_ParamLimits

0xe950,	// (0x00025495) cntbar_detail_pane_g1

0xe95c,	// (0x000254a1) cntbar_detail_pane_t1_ParamLimits

0xe95c,	// (0x000254a1) cntbar_detail_pane_t1

0xe9f3,	// (0x00025538) cntbar_detail_list_event_pane_g3_ParamLimits

0xe9f3,	// (0x00025538) cntbar_detail_list_event_pane_g3

0xea0b,	// (0x00025550) cntbar_detail_list_event_pane_g4_ParamLimits

0xea0b,	// (0x00025550) cntbar_detail_list_event_pane_g4

0xea23,	// (0x00025568) cntbar_detail_list_event_pane_g5_ParamLimits

0xea23,	// (0x00025568) cntbar_detail_list_event_pane_g5

0xea3b,	// (0x00025580) cntbar_detail_list_event_pane_g6_ParamLimits

0xea3b,	// (0x00025580) cntbar_detail_list_event_pane_g6

0xea7d,	// (0x000255c2) cntbar_detail_list_event_pane_t3_ParamLimits

0xea7d,	// (0x000255c2) cntbar_detail_list_event_pane_t3

0xea8f,	// (0x000255d4) popup_notif_wgt_window_ParamLimits

0xea8f,	// (0x000255d4) popup_notif_wgt_window

0xea9f,	// (0x000255e4) popup_submenu_window_cp01_ParamLimits

0xea9f,	// (0x000255e4) popup_submenu_window_cp01

0x17af,	// (0x000182f4) bg_popup_window_pane_cp10

0x5c99,	// (0x0001c7de) listscroll_notif_wgt_pane

0x5ca3,	// (0x0001c7e8) list_notif_wgt_window

0x5cac,	// (0x0001c7f1) scroll_pane_cp033

0x5cb5,	// (0x0001c7fa) list_notif_wgt_row_pane_ParamLimits

0x5cb5,	// (0x0001c7fa) list_notif_wgt_row_pane

0x5cc9,	// (0x0001c80e) aid_size_list_notif_wgt_del

0x5cd2,	// (0x0001c817) list_notif_wgt_row_pane_g1

0x5cda,	// (0x0001c81f) list_notif_wgt_row_pane_g2

0x5ce2,	// (0x0001c827) list_notif_wgt_row_pane_g3

0x0002,

0xfeb3,	// (0x000269f8) list_notif_wgt_row_pane_g

0x5ceb,	// (0x0001c830) list_notif_wgt_row_pane_t1

0x5cf9,	// (0x0001c83e) list_notif_wgt_row_pane_t2

0x5d07,	// (0x0001c84c) list_notif_wgt_row_pane_t3

0x0002,

0xfeba,	// (0x000269ff) list_notif_wgt_row_pane_t

0x41d7,	// (0x0001ad1c) list_recal_day_event_pane_g1

0x5d15,	// (0x0001c85a) list_recal_day_event_pane_t1

0x0200,	// (0x00016d45) bg_button_pane_cp045

0x5d24,	// (0x0001c869) cntbar_detail_btn_pane_t1

0x2c4e,	// (0x00019793) main_callh_pane_ParamLimits

0x2c4e,	// (0x00019793) main_callh_pane

0x0200,	// (0x00016d45) main_coverflow0_pane

0x0200,	// (0x00016d45) main_wgtman_pane

0xdc90,	// (0x000247d5) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xdc90,	// (0x000247d5) main_fs_bigclock_unlock_btn_pane

0x5530,	// (0x0001c075) bg_button_pane_cp16

0x5540,	// (0x0001c085) cell_tport_appsw_pane_g3

0xeaad,	// (0x000255f2) cf0_flow_pane_ParamLimits

0xeaad,	// (0x000255f2) cf0_flow_pane

0x5d32,	// (0x0001c877) listscroll_cf0_pane

0x5d3b,	// (0x0001c880) main_cf0_pane_g1

0xeabc,	// (0x00025601) main_cf0_pane_t1_ParamLimits

0xeabc,	// (0x00025601) main_cf0_pane_t1

0xead0,	// (0x00025615) main_cf0_pane_t2_ParamLimits

0xead0,	// (0x00025615) main_cf0_pane_t2

0x0001,

0xfec1,	// (0x00026a06) main_cf0_pane_t_ParamLimits

0xfec1,	// (0x00026a06) main_cf0_pane_t

0x5d45,	// (0x0001c88a) scroll_pane_cp11

0xeae4,	// (0x00025629) cf0_flow_pane_g1

0xeaec,	// (0x00025631) cf0_flow_pane_g2

0x0001,

0xfec6,	// (0x00026a0b) cf0_flow_pane_g

0xeaf4,	// (0x00025639) cf0_flow_pane_t1

0x0200,	// (0x00016d45) main_call6_pane

0x0200,	// (0x00016d45) main_calllock_pane

0xeb02,	// (0x00025647) call6_btn_grp_pane_ParamLimits

0xeb02,	// (0x00025647) call6_btn_grp_pane

0xeb11,	// (0x00025656) call6_pane_g1_ParamLimits

0xeb11,	// (0x00025656) call6_pane_g1

0xeb20,	// (0x00025665) popup_call6_1st_window_ParamLimits

0xeb20,	// (0x00025665) popup_call6_1st_window

0xeb2e,	// (0x00025673) popup_call6_2nd_window_ParamLimits

0xeb2e,	// (0x00025673) popup_call6_2nd_window

0xeb3c,	// (0x00025681) cell_call6_btn_pane_ParamLimits

0xeb3c,	// (0x00025681) cell_call6_btn_pane

0x17af,	// (0x000182f4) bg_popup_call2_in_pane_cp03

0x5d50,	// (0x0001c895) popup_call6_1st_window_g1

0x5d58,	// (0x0001c89d) popup_call6_1st_window_g2

0x5d60,	// (0x0001c8a5) popup_call6_1st_window_g3

0x0002,

0xfecb,	// (0x00026a10) popup_call6_1st_window_g

0x5d68,	// (0x0001c8ad) popup_call6_1st_window_t1

0x5d77,	// (0x0001c8bc) popup_call6_1st_window_t2

0x5d87,	// (0x0001c8cc) popup_call6_1st_window_t3

0x0002,

0xfed2,	// (0x00026a17) popup_call6_1st_window_t

0x17af,	// (0x000182f4) bg_popup_call2_in_pane_cp04

0x5d50,	// (0x0001c895) popup_call6_2nd_window_g1

0x5d58,	// (0x0001c89d) popup_call6_2nd_window_g2

0x5d60,	// (0x0001c8a5) popup_call6_2nd_window_g3

0x0002,

0xfecb,	// (0x00026a10) popup_call6_2nd_window_g

0x5d68,	// (0x0001c8ad) popup_call6_2nd_window_t1

0x0200,	// (0x00016d45) bg_button_pane_cp15

0x5d97,	// (0x0001c8dc) cell_call6_btn_pane_g1

0x5da0,	// (0x0001c8e5) cell_call6_btn_pane_t1

0xeb4b,	// (0x00025690) listscroll_wgtman_pane_ParamLimits

0xeb4b,	// (0x00025690) listscroll_wgtman_pane

0xeb69,	// (0x000256ae) wgtman_btn_pane_ParamLimits

0xeb69,	// (0x000256ae) wgtman_btn_pane

0x1662,	// (0x000181a7) aid_scroll_copy1

0x5daf,	// (0x0001c8f4) list_wgtman_pane

0xeb9e,	// (0x000256e3) wgtman_btn_pane_g1_ParamLimits

0xeb9e,	// (0x000256e3) wgtman_btn_pane_g1

0xebc6,	// (0x0002570b) wgtman_btn_pane_t1_ParamLimits

0xebc6,	// (0x0002570b) wgtman_btn_pane_t1

0x5db9,	// (0x0001c8fe) wgtman_btn_pane_t2_ParamLimits

0x5db9,	// (0x0001c8fe) wgtman_btn_pane_t2

0x0001,

0xfed9,	// (0x00026a1e) wgtman_btn_pane_t_ParamLimits

0xfed9,	// (0x00026a1e) wgtman_btn_pane_t

0xebfd,	// (0x00025742) listrow_wgtman_pane_ParamLimits

0xebfd,	// (0x00025742) listrow_wgtman_pane

0xec19,	// (0x0002575e) listrow_wgtman_pane_g1

0xec22,	// (0x00025767) listrow_wgtman_pane_g2

0x0001,

0xfede,	// (0x00026a23) listrow_wgtman_pane_g

0xec2c,	// (0x00025771) listrow_wgtman_pane_t1

0xec3a,	// (0x0002577f) listrow_wgtman_pane_t2

0x0001,

0xfee3,	// (0x00026a28) listrow_wgtman_pane_t

0xec48,	// (0x0002578d) wait_bar_pane_cp09

0x5dd0,	// (0x0001c915) main_calllock_btn_pane

0x5dda,	// (0x0001c91f) main_calllock_pane_g1

0x0200,	// (0x00016d45) bg_button_pane_cp17

0x5de5,	// (0x0001c92a) main_calllock_btn_pane_g1

0x5dee,	// (0x0001c933) main_calllock_btn_pane_t1

0x0200,	// (0x00016d45) main_dialer3_pane

0x0200,	// (0x00016d45) main_fmrd2_pane

0x3156,	// (0x00019c9b) main_fs_bigclock_unlock_btn_pane_g1

0x5e05,	// (0x0001c94a) main_fs_bigclock_unlock_btn_pane_t1

0xec50,	// (0x00025795) area_fmrd2_info_pane_ParamLimits

0xec50,	// (0x00025795) area_fmrd2_info_pane

0xec5e,	// (0x000257a3) area_fmrd2_visual_pane_ParamLimits

0xec5e,	// (0x000257a3) area_fmrd2_visual_pane

0xec6c,	// (0x000257b1) fmrd2_indi_pane_ParamLimits

0xec6c,	// (0x000257b1) fmrd2_indi_pane

0xec79,	// (0x000257be) area_fmrd2_visual_pane_g1

0xec81,	// (0x000257c6) area_fmrd2_visual_pane_t1

0xec91,	// (0x000257d6) area_fmrd2_visual_pane_t2

0xeca1,	// (0x000257e6) area_fmrd2_visual_pane_t3

0x0002,

0xfeed,	// (0x00026a32) area_fmrd2_visual_pane_t

0xecb1,	// (0x000257f6) area_fmrd2_info_pane_g1

0xecb9,	// (0x000257fe) area_fmrd2_info_pane_t1

0xecc9,	// (0x0002580e) area_fmrd2_info_pane_t2

0xecd9,	// (0x0002581e) area_fmrd2_info_pane_t3

0xece9,	// (0x0002582e) area_fmrd2_info_pane_t4

0x0003,

0xfef4,	// (0x00026a39) area_fmrd2_info_pane_t

0xecf7,	// (0x0002583c) fmrd2_indi_pane_t1

0xed07,	// (0x0002584c) fmrd2_indi_pane_t2

0xed17,	// (0x0002585c) fmrd2_indi_pane_t3

0x0002,

0xfefd,	// (0x00026a42) fmrd2_indi_pane_t

0x4fae,	// (0x0001baf3) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x4fae,	// (0x0001baf3) list_single_fs_bigclock_indicator_pane_g5

0x5052,	// (0x0001bb97) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x5052,	// (0x0001bb97) list_single_fs_bigclock_indicator_pane_t5

0xe53d,	// (0x00025082) aid_cell_bcale_month_pane_ParamLimits

0xe53d,	// (0x00025082) aid_cell_bcale_month_pane

0xe549,	// (0x0002508e) bcale_month_pane_ParamLimits

0xe549,	// (0x0002508e) bcale_month_pane

0xe559,	// (0x0002509e) bcale_preview_pane_ParamLimits

0xe559,	// (0x0002509e) bcale_preview_pane

0x5b8e,	// (0x0001c6d3) list_single_fs_bigclock_pane_t1_ParamLimits

0x5ba8,	// (0x0001c6ed) list_single_fs_bigclock_pane_t2_ParamLimits

0x5ba8,	// (0x0001c6ed) list_single_fs_bigclock_pane_t2

0x0001,

0xfe84,	// (0x000269c9) list_single_fs_bigclock_pane_t_ParamLimits

0xfe84,	// (0x000269c9) list_single_fs_bigclock_pane_t

0x5dfd,	// (0x0001c942) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfee8,	// (0x00026a2d) main_fs_bigclock_unlock_btn_pane_g

0xed25,	// (0x0002586a) aid_dia3_key_size_ParamLimits

0xed25,	// (0x0002586a) aid_dia3_key_size

0xed31,	// (0x00025876) aid_dia3_listrow_size_ParamLimits

0xed31,	// (0x00025876) aid_dia3_listrow_size

0xed41,	// (0x00025886) dia3_keypad_fun_pane_ParamLimits

0xed41,	// (0x00025886) dia3_keypad_fun_pane

0xed53,	// (0x00025898) dia3_keypad_num_pane_ParamLimits

0xed53,	// (0x00025898) dia3_keypad_num_pane

0xed65,	// (0x000258aa) dia3_listscroll_pane_ParamLimits

0xed65,	// (0x000258aa) dia3_listscroll_pane

0xed73,	// (0x000258b8) dia3_numentry_pane_ParamLimits

0xed73,	// (0x000258b8) dia3_numentry_pane

0x5e13,	// (0x0001c958) dia3_list_pane

0x5e1e,	// (0x0001c963) scroll_pane_cp12

0x0200,	// (0x00016d45) bg_dia3_numentry_pane

0xed81,	// (0x000258c6) dia3_numentry_pane_t1

0xed90,	// (0x000258d5) cell_dia3_key_num_pane

0xed98,	// (0x000258dd) cell_dia3_key0_fun_pane_ParamLimits

0xed98,	// (0x000258dd) cell_dia3_key0_fun_pane

0xeda5,	// (0x000258ea) cell_dia3_key1_fun_pane_ParamLimits

0xeda5,	// (0x000258ea) cell_dia3_key1_fun_pane

0xedb2,	// (0x000258f7) dia3_listrow_pane

0x4cac,	// (0x0001b7f1) bg_dia3_numentry_pane_g1

0x0200,	// (0x00016d45) bg_button_pane_cp21

0x5e29,	// (0x0001c96e) cell_dia3_key_num_pane_t1

0x5e37,	// (0x0001c97c) cell_dia3_key_num_pane_t2

0x5e46,	// (0x0001c98b) cell_dia3_key_num_pane_t3

0x5e55,	// (0x0001c99a) cell_dia3_key_num_pane_t4

0x0003,

0xff04,	// (0x00026a49) cell_dia3_key_num_pane_t

0x0200,	// (0x00016d45) bg_button_pane_cp19

0xedbf,	// (0x00025904) cell_dia3_key0_fun_pane_g1

0x0200,	// (0x00016d45) bg_button_pane_cp20

0xedc7,	// (0x0002590c) cell_dia3_key1_fun_pane_g1

0xedcf,	// (0x00025914) area_left_week_number_pane

0xedd8,	// (0x0002591d) area_top_day_name_pane

0xede1,	// (0x00025926) frame_month_view_pane

0xedeb,	// (0x00025930) grid_month_view_pane

0xedf5,	// (0x0002593a) cell_top_day_name_pane_ParamLimits

0xedf5,	// (0x0002593a) cell_top_day_name_pane

0xee0f,	// (0x00025954) cell_area_left_week_number_pane_ParamLimits

0xee0f,	// (0x00025954) cell_area_left_week_number_pane

0xee23,	// (0x00025968) cell_month_view_pane_ParamLimits

0xee23,	// (0x00025968) cell_month_view_pane

0x5e64,	// (0x0001c9a9) frm_month_g1

0xee40,	// (0x00025985) frm_month_g2

0xee4a,	// (0x0002598f) frm_month_g3

0xee54,	// (0x00025999) frm_month_g4

0xee5e,	// (0x000259a3) frm_month_g5

0xee68,	// (0x000259ad) frm_month_g6

0xee72,	// (0x000259b7) frm_month_g7

0x5e6d,	// (0x0001c9b2) frm_month_g8

0xee7c,	// (0x000259c1) frm_month_g9

0xee85,	// (0x000259ca) frm_month_g10

0xee8e,	// (0x000259d3) frm_month_g11

0xee97,	// (0x000259dc) frm_month_g12

0xeea0,	// (0x000259e5) frm_month_g13

0xeea9,	// (0x000259ee) frm_month_g14

0xeeb2,	// (0x000259f7) frm_month_g15

0xeebd,	// (0x00025a02) frm_month_g16

0x000f,

0xff0d,	// (0x00026a52) frm_month_g

0xeec8,	// (0x00025a0d) cell_top_day_name_pane_t1

0xeed7,	// (0x00025a1c) cell_area_left_week_number_pane_g1

0xeec8,	// (0x00025a0d) cell_area_left_week_number_pane_t1

0x3156,	// (0x00019c9b) cell_month_view_pane_g1

0xeedf,	// (0x00025a24) cell_month_view_pane_t1

0x0200,	// (0x00016d45) main_fps_pane

0x52bc,	// (0x0001be01) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x52bc,	// (0x0001be01) cmail_ddmenu_btn02_pane_cp1

0x52d8,	// (0x0001be1d) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x52d8,	// (0x0001be1d) cmail_ddmenu_btn02_pane_cp2

0xe818,	// (0x0002535d) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xe818,	// (0x0002535d) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe35,	// (0x0002697a) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe35,	// (0x0002697a) cmail_ddmenu_btn02_pane_g

0xe836,	// (0x0002537b) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xe836,	// (0x0002537b) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe3a,	// (0x0002697f) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe3a,	// (0x0002697f) cmail_ddmenu_btn02_pane_t

0xeeee,	// (0x00025a33) fps_text_pane_ParamLimits

0xeeee,	// (0x00025a33) fps_text_pane

0xeefb,	// (0x00025a40) main_fps_pane_g1_ParamLimits

0xeefb,	// (0x00025a40) main_fps_pane_g1

0xef09,	// (0x00025a4e) wait_bar_pane_cp010_ParamLimits

0xef09,	// (0x00025a4e) wait_bar_pane_cp010

0xef15,	// (0x00025a5a) fps_text_pane_t1_ParamLimits

0xef15,	// (0x00025a5a) fps_text_pane_t1

0xc596,	// (0x000230db) cam4_image_uncrop_pane_g1

0xc59f,	// (0x000230e4) cam4_image_uncrop_pane_g2

0xc5a8,	// (0x000230ed) cam4_image_uncrop_pane_g3

0xc5b1,	// (0x000230f6) cam4_image_uncrop_pane_g4

0x0003,

0xf90d,	// (0x00026452) cam4_image_uncrop_pane_g

0xedb2,	// (0x000258f7) dia3_listrow_pane_ParamLimits

0x0200,	// (0x00016d45) main_phob2_pane

0xe35c,	// (0x00024ea1) cell_tport_appsw_pane_cp02_ParamLimits

0xe35c,	// (0x00024ea1) cell_tport_appsw_pane_cp02

0xe36b,	// (0x00024eb0) cell_tport_appsw_pane_cp03_ParamLimits

0xe36b,	// (0x00024eb0) cell_tport_appsw_pane_cp03

0x0200,	// (0x00016d45) phob2_contact_card_pane

0x0200,	// (0x00016d45) phob2_listscroll_pane

0x5e76,	// (0x0001c9bb) phob2_list_pane

0x5e7e,	// (0x0001c9c3) scroll_pane_cp034

0xef2e,	// (0x00025a73) phob2_cc_data_pane_ParamLimits

0xef2e,	// (0x00025a73) phob2_cc_data_pane

0xef48,	// (0x00025a8d) phob2_cc_listscroll_pane_ParamLimits

0xef48,	// (0x00025a8d) phob2_cc_listscroll_pane

0xef62,	// (0x00025aa7) list_double_large_graphic_phob2_pane_ParamLimits

0xef62,	// (0x00025aa7) list_double_large_graphic_phob2_pane

0xef85,	// (0x00025aca) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xef85,	// (0x00025aca) list_double_large_graphic_phob2_pane_g1

0xef92,	// (0x00025ad7) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xef92,	// (0x00025ad7) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff2e,	// (0x00026a73) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff2e,	// (0x00026a73) list_double_large_graphic_phob2_pane_g

0xef9e,	// (0x00025ae3) list_double_large_graphic_phob2_pane_t1_ParamLimits

0xef9e,	// (0x00025ae3) list_double_large_graphic_phob2_pane_t1

0xefb3,	// (0x00025af8) list_double_large_graphic_phob2_pane_t2_ParamLimits

0xefb3,	// (0x00025af8) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff33,	// (0x00026a78) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff33,	// (0x00026a78) list_double_large_graphic_phob2_pane_t

0x0200,	// (0x00016d45) list_highlight_pane_cp024

0x5e86,	// (0x0001c9cb) phob2_cc_button_pane

0xefc5,	// (0x00025b0a) phob2_cc_data_pane_g1_ParamLimits

0xefc5,	// (0x00025b0a) phob2_cc_data_pane_g1

0xefd1,	// (0x00025b16) phob2_cc_data_pane_g2_ParamLimits

0xefd1,	// (0x00025b16) phob2_cc_data_pane_g2

0x0001,

0xff38,	// (0x00026a7d) phob2_cc_data_pane_g_ParamLimits

0xff38,	// (0x00026a7d) phob2_cc_data_pane_g

0xefdd,	// (0x00025b22) phob2_cc_data_pane_t1_ParamLimits

0xefdd,	// (0x00025b22) phob2_cc_data_pane_t1

0xefef,	// (0x00025b34) phob2_cc_data_pane_t2_ParamLimits

0xefef,	// (0x00025b34) phob2_cc_data_pane_t2

0xf001,	// (0x00025b46) phob2_cc_data_pane_t3_ParamLimits

0xf001,	// (0x00025b46) phob2_cc_data_pane_t3

0x0002,

0xff3d,	// (0x00026a82) phob2_cc_data_pane_t_ParamLimits

0xff3d,	// (0x00026a82) phob2_cc_data_pane_t

0x5e8e,	// (0x0001c9d3) phob2_cc_list_pane_ParamLimits

0x5e8e,	// (0x0001c9d3) phob2_cc_list_pane

0x4282,	// (0x0001adc7) scroll_pane_cp035_ParamLimits

0x4282,	// (0x0001adc7) scroll_pane_cp035

0x0270,	// (0x00016db5) bg_button_pane_cp033

0x5e9a,	// (0x0001c9df) phob2_cc_button_pane_g1

0x5ea6,	// (0x0001c9eb) phob2_cc_button_pane_t1

0x5ebb,	// (0x0001ca00) phob2_cc_button_pane_t2

0x0001,

0xff44,	// (0x00026a89) phob2_cc_button_pane_t

0xf013,	// (0x00025b58) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xf013,	// (0x00025b58) list_double_large_graphic_phob2_cc_pane

0xf043,	// (0x00025b88) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xf043,	// (0x00025b88) list_double_large_graphic_phob2_cc_pane_g1

0xf054,	// (0x00025b99) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xf054,	// (0x00025b99) list_double_large_graphic_phob2_cc_pane_g2

0xf063,	// (0x00025ba8) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xf063,	// (0x00025ba8) list_double_large_graphic_phob2_cc_pane_g3

0xf072,	// (0x00025bb7) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0xf072,	// (0x00025bb7) list_double_large_graphic_phob2_cc_pane_g4

0xf083,	// (0x00025bc8) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xf083,	// (0x00025bc8) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff49,	// (0x00026a8e) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff49,	// (0x00026a8e) list_double_large_graphic_phob2_cc_pane_g

0xf092,	// (0x00025bd7) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0xf092,	// (0x00025bd7) list_double_large_graphic_phob2_cc_pane_t1

0xf0bb,	// (0x00025c00) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0xf0bb,	// (0x00025c00) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff54,	// (0x00026a99) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff54,	// (0x00026a99) list_double_large_graphic_phob2_cc_pane_t

0x5ecd,	// (0x0001ca12) list_highlight_pane_cp025_ParamLimits

0x5ecd,	// (0x0001ca12) list_highlight_pane_cp025

0x0270,	// (0x00016db5) bg_button_pane_cp033_ParamLimits

0x5e9a,	// (0x0001c9df) phob2_cc_button_pane_g1_ParamLimits

0x5ea6,	// (0x0001c9eb) phob2_cc_button_pane_t1_ParamLimits

0x5ebb,	// (0x0001ca00) phob2_cc_button_pane_t2_ParamLimits

0xff44,	// (0x00026a89) phob2_cc_button_pane_t_ParamLimits

0x8453,	// (0x0001ef98) popup_wgtman_window

0x4028,	// (0x0001ab6d) scroll_pane_cp038

0xeb86,	// (0x000256cb) wgtman_btn_pane_cp_01_ParamLimits

0xeb86,	// (0x000256cb) wgtman_btn_pane_cp_01

0x5ef6,	// (0x0001ca3b) wgtman_content_pane

0x5eed,	// (0x0001ca32) wgtman_heading_pane

0x0200,	// (0x00016d45) bg_heading_pane_cp02

0x5eff,	// (0x0001ca44) wgtman_heading_pane_g1

0x5f07,	// (0x0001ca4c) wgtman_heading_pane_t1

0x5f15,	// (0x0001ca5a) scroll_pane_cp036

0x5f1d,	// (0x0001ca62) wgtman_list_pane

0x5f25,	// (0x0001ca6a) wgtman_list_pane_t1_ParamLimits

0x5f25,	// (0x0001ca6a) wgtman_list_pane_t1

0x7a60,	// (0x0001e5a5) cam4_grid_pane

0xcd05,	// (0x0002384a) bg_button_pane_cp015_ParamLimits

0xcd17,	// (0x0002385c) bg_button_pane_cp016_ParamLimits

0xcd2a,	// (0x0002386f) bg_button_pane_cp017_ParamLimits

0xcd80,	// (0x000238c5) popup_vitu2_query_window_g3_ParamLimits

0xcd80,	// (0x000238c5) popup_vitu2_query_window_g3

0xce3b,	// (0x00023980) popup_vitu2_query_window_t6_ParamLimits

0xce3b,	// (0x00023980) popup_vitu2_query_window_t6

0xce66,	// (0x000239ab) popup_vitu2_query_window_t7_ParamLimits

0xce66,	// (0x000239ab) popup_vitu2_query_window_t7

0x5edb,	// (0x0001ca20) cam4_grid_pane_g1

0x5ee4,	// (0x0001ca29) cam4_grid_pane_g2

0x5f43,	// (0x0001ca88) cam4_grid_pane_g3

0x5f4c,	// (0x0001ca91) cam4_grid_pane_g4

0x0003,

0xff59,	// (0x00026a9e) cam4_grid_pane_g

0x8e73,	// (0x0001f9b8) aid_placing_vt_slider_lsc_ParamLimits

0x91b3,	// (0x0001fcf8) vidtel_button_pane_ParamLimits

0x91b3,	// (0x0001fcf8) vidtel_button_pane

0x0200,	// (0x00016d45) bg_button_pane_cp034

0xf0e4,	// (0x00025c29) vidtel_button_pane_g1

0x5f57,	// (0x0001ca9c) vidtel_button_pane_t1

0x4165,	// (0x0001acaa) aid_size_vtel_slider_touch

0x4282,	// (0x0001adc7) scroll_pane_cp039

0x4cea,	// (0x0001b82f) ncim_query_button_pane_cp01_ParamLimits

0x4d09,	// (0x0001b84e) ncimui_query_pane_g1_ParamLimits

0x0270,	// (0x00016db5) input_focus_pane_cp012_ParamLimits

0x4d2e,	// (0x0001b873) ncim_query_entry_pane_t1_ParamLimits

0x4282,	// (0x0001adc7) scroll_pane_cp039_ParamLimits
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

} // end of namespace AknLayoutScalable_Abrw_pnp4_apps_nhd4_prt_tch_Normal
