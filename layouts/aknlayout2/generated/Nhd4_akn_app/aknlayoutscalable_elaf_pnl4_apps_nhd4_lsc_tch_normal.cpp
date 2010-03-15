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

#include "aknlayoutscalable_elaf_pnl4_apps_nhd4_lsc_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pnl4_apps_nhd4_lsc_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x0000ee54 };

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
0x0247,	// (0x0000f09b) Screen

0x0253,	// (0x0000f0a7) application_window

0x028f,	// (0x0000f0e3) area_bottom_pane_ParamLimits

0x028f,	// (0x0000f0e3) area_bottom_pane

0x02c8,	// (0x0000f11c) area_top_pane_ParamLimits

0x02c8,	// (0x0000f11c) area_top_pane

0x957a,	// (0x000183ce) call_video_uplink_pane_ParamLimits

0x957a,	// (0x000183ce) call_video_uplink_pane

0x0356,	// (0x0000f1aa) main_pane_ParamLimits

0x0356,	// (0x0000f1aa) main_pane

0xbe14,	// (0x0001ac68) context_pane

0x3b28,	// (0x0001297c) navi_pane

0x3b50,	// (0x000129a4) popup_cale_events_window_ParamLimits

0x3b50,	// (0x000129a4) popup_cale_events_window

0xbe27,	// (0x0001ac7b) popup_mup_playback_window

0x3b68,	// (0x000129bc) signal_pane

0x9d1a,	// (0x00018b6e) main_browser_pane

0xa906,	// (0x0001975a) main_burst_pane

0x3898,	// (0x000126ec) main_calc_pane

0xbda6,	// (0x0001abfa) main_cale_day_pane

0x0988,	// (0x0000f7dc) main_cale_month_pane

0xbda6,	// (0x0001abfa) main_cale_week_pane

0xa906,	// (0x0001975a) main_call_pane

0x99b9,	// (0x0001880d) main_call_poc_pane

0xa906,	// (0x0001975a) main_camera_pane

0xa906,	// (0x0001975a) main_chi_dic_pane

0xa78b,	// (0x000195df) main_clock_pane

0x99b9,	// (0x0001880d) main_fmradio_pane

0xa906,	// (0x0001975a) main_graph_messa_pane

0x99b9,	// (0x0001880d) main_help_pane

0x9d1a,	// (0x00018b6e) main_im_pane

0x9c14,	// (0x00018a68) main_image_pane_ParamLimits

0x9c14,	// (0x00018a68) main_image_pane

0x99b9,	// (0x0001880d) main_location2_pane

0xa906,	// (0x0001975a) main_location_pane

0x9c14,	// (0x00018a68) main_messa_pane

0x99b9,	// (0x0001880d) main_mp2_pane

0xa906,	// (0x0001975a) main_mp_pane

0x99b9,	// (0x0001880d) main_msg_pane

0x99b9,	// (0x0001880d) main_mup_eq_pane

0x99b9,	// (0x0001880d) main_mup_pane

0x9d1a,	// (0x00018b6e) main_notes_pane

0x99b9,	// (0x0001880d) main_pec_pane

0x99b9,	// (0x0001880d) main_phob_pane

0x99b9,	// (0x0001880d) main_pinb_pane

0x99b9,	// (0x0001880d) main_postcard_pane

0x99b9,	// (0x0001880d) main_qdial_pane

0xa906,	// (0x0001975a) main_skin_pane

0x99b9,	// (0x0001880d) main_smil2_pane

0xa906,	// (0x0001975a) main_smil_pane

0xa906,	// (0x0001975a) main_video_pane

0xa906,	// (0x0001975a) main_video_tele_pane

0x9c14,	// (0x00018a68) main_viewer_pane_ParamLimits

0x9c14,	// (0x00018a68) main_viewer_pane

0xa906,	// (0x0001975a) main_vorec_pane

0x38ec,	// (0x00012740) popup_blid_sat_info_window_ParamLimits

0x38ec,	// (0x00012740) popup_blid_sat_info_window

0x3944,	// (0x00012798) popup_dyc_status_message_window_ParamLimits

0x3944,	// (0x00012798) popup_dyc_status_message_window

0x395c,	// (0x000127b0) popup_grid_large_graphic_window_ParamLimits

0x395c,	// (0x000127b0) popup_grid_large_graphic_window

0x3a12,	// (0x00012866) popup_loc_request_window_ParamLimits

0x3a12,	// (0x00012866) popup_loc_request_window

0x3b00,	// (0x00012954) popup_wml_address_window_ParamLimits

0x3b00,	// (0x00012954) popup_wml_address_window

0x36d2,	// (0x00012526) call_muted_g1

0x3385,	// (0x000121d9) popup_call_audio_conf_window_ParamLimits

0x3385,	// (0x000121d9) popup_call_audio_conf_window

0x36e6,	// (0x0001253a) popup_call_audio_first_window_ParamLimits

0x36e6,	// (0x0001253a) popup_call_audio_first_window

0x375c,	// (0x000125b0) popup_call_audio_in_window_ParamLimits

0x375c,	// (0x000125b0) popup_call_audio_in_window

0x3798,	// (0x000125ec) popup_call_audio_out_window_ParamLimits

0x3798,	// (0x000125ec) popup_call_audio_out_window

0x37d2,	// (0x00012626) popup_call_audio_second_window_ParamLimits

0x37d2,	// (0x00012626) popup_call_audio_second_window

0x3828,	// (0x0001267c) popup_call_audio_wait_window_ParamLimits

0x3828,	// (0x0001267c) popup_call_audio_wait_window

0x385d,	// (0x000126b1) popup_number_entry_window_ParamLimits

0x385d,	// (0x000126b1) popup_number_entry_window

0x95a6,	// (0x000183fa) bg_popup_call_pane_cp05_ParamLimits

0x95a6,	// (0x000183fa) bg_popup_call_pane_cp05

0x95c6,	// (0x0001841a) popup_number_entry_window_t1

0x95d9,	// (0x0001842d) popup_number_entry_window_t2

0x95eb,	// (0x0001843f) popup_number_entry_window_t3

0x0003,

0xf0d3,	// (0x0001df27) popup_number_entry_window_t

0x95fd,	// (0x00018451) text_title_cp2

0x9610,	// (0x00018464) bg_popup_call_pane_cp_ParamLimits

0x9610,	// (0x00018464) bg_popup_call_pane_cp

0x961e,	// (0x00018472) call_thumbnail_pane

0x9626,	// (0x0001847a) popup_call_audio_in_window_g1_ParamLimits

0x9626,	// (0x0001847a) popup_call_audio_in_window_g1

0x9632,	// (0x00018486) popup_call_audio_in_window_g2_ParamLimits

0x9632,	// (0x00018486) popup_call_audio_in_window_g2

0x963e,	// (0x00018492) popup_call_audio_in_window_g3_ParamLimits

0x963e,	// (0x00018492) popup_call_audio_in_window_g3

0x0002,

0xf0dc,	// (0x0001df30) popup_call_audio_in_window_g_ParamLimits

0xf0dc,	// (0x0001df30) popup_call_audio_in_window_g

0x964a,	// (0x0001849e) popup_call_audio_in_window_t1_ParamLimits

0x964a,	// (0x0001849e) popup_call_audio_in_window_t1

0x9666,	// (0x000184ba) popup_call_audio_in_window_t2_ParamLimits

0x9666,	// (0x000184ba) popup_call_audio_in_window_t2

0x9682,	// (0x000184d6) popup_call_audio_in_window_t3_ParamLimits

0x9682,	// (0x000184d6) popup_call_audio_in_window_t3

0x0002,

0xf0e3,	// (0x0001df37) popup_call_audio_in_window_t_ParamLimits

0xf0e3,	// (0x0001df37) popup_call_audio_in_window_t

0x9610,	// (0x00018464) bg_popup_call_pane_cp01_ParamLimits

0x9610,	// (0x00018464) bg_popup_call_pane_cp01

0x961e,	// (0x00018472) call_thumbnail_pane_cp02

0x9695,	// (0x000184e9) call_type_pane_cp022

0x969d,	// (0x000184f1) popup_call_audio_out_window_g1_ParamLimits

0x969d,	// (0x000184f1) popup_call_audio_out_window_g1

0x96af,	// (0x00018503) popup_call_audio_out_window_g2_ParamLimits

0x96af,	// (0x00018503) popup_call_audio_out_window_g2

0x96bb,	// (0x0001850f) popup_call_audio_out_window_g3_ParamLimits

0x96bb,	// (0x0001850f) popup_call_audio_out_window_g3

0x0002,

0xf0ea,	// (0x0001df3e) popup_call_audio_out_window_g_ParamLimits

0xf0ea,	// (0x0001df3e) popup_call_audio_out_window_g

0x96cd,	// (0x00018521) popup_call_audio_out_window_t1_ParamLimits

0x96cd,	// (0x00018521) popup_call_audio_out_window_t1

0x96e5,	// (0x00018539) popup_call_audio_out_window_t2_ParamLimits

0x96e5,	// (0x00018539) popup_call_audio_out_window_t2

0x0001,

0xf0f1,	// (0x0001df45) popup_call_audio_out_window_t_ParamLimits

0xf0f1,	// (0x0001df45) popup_call_audio_out_window_t

0x96fa,	// (0x0001854e) bg_popup_call_pane_ParamLimits

0x96fa,	// (0x0001854e) bg_popup_call_pane

0x0513,	// (0x0000f367) call_thumbnail_pane_cp_ParamLimits

0x0513,	// (0x0000f367) call_thumbnail_pane_cp

0x977e,	// (0x000185d2) call_type_pane_cp01_ParamLimits

0x977e,	// (0x000185d2) call_type_pane_cp01

0x97c2,	// (0x00018616) popup_call_audio_first_window_g1_ParamLimits

0x97c2,	// (0x00018616) popup_call_audio_first_window_g1

0x980e,	// (0x00018662) popup_call_audio_first_window_g2_ParamLimits

0x980e,	// (0x00018662) popup_call_audio_first_window_g2

0x0001,

0xf0f6,	// (0x0001df4a) popup_call_audio_first_window_g_ParamLimits

0xf0f6,	// (0x0001df4a) popup_call_audio_first_window_g

0x9852,	// (0x000186a6) popup_call_audio_first_window_t1_ParamLimits

0x9852,	// (0x000186a6) popup_call_audio_first_window_t1

0x98fe,	// (0x00018752) popup_call_audio_first_window_t4_ParamLimits

0x98fe,	// (0x00018752) popup_call_audio_first_window_t4

0x998a,	// (0x000187de) popup_call_audio_first_window_t5_ParamLimits

0x998a,	// (0x000187de) popup_call_audio_first_window_t5

0x0002,

0xf0fb,	// (0x0001df4f) popup_call_audio_first_window_t_ParamLimits

0xf0fb,	// (0x0001df4f) popup_call_audio_first_window_t

0x99b9,	// (0x0001880d) bg_popup_call_pane_cp02

0x99c3,	// (0x00018817) call_type_pane_cp023

0x99cb,	// (0x0001881f) popup_call_audio_wait_window_g1

0x99d3,	// (0x00018827) popup_call_audio_wait_window_g2

0x0001,

0xf102,	// (0x0001df56) popup_call_audio_wait_window_g

0x99db,	// (0x0001882f) popup_call_audio_wait_window_t3

0x99e9,	// (0x0001883d) bg_popup_call_pane_cp03_ParamLimits

0x99e9,	// (0x0001883d) bg_popup_call_pane_cp03

0x9a49,	// (0x0001889d) call_thumbnail_pane_cp011_ParamLimits

0x9a49,	// (0x0001889d) call_thumbnail_pane_cp011

0x9a55,	// (0x000188a9) call_type_pane_cp034_ParamLimits

0x9a55,	// (0x000188a9) call_type_pane_cp034

0x9a91,	// (0x000188e5) popup_call_audio_second_window_g1_ParamLimits

0x9a91,	// (0x000188e5) popup_call_audio_second_window_g1

0x9acd,	// (0x00018921) popup_call_audio_second_window_g2_ParamLimits

0x9acd,	// (0x00018921) popup_call_audio_second_window_g2

0x0001,

0xf107,	// (0x0001df5b) popup_call_audio_second_window_g_ParamLimits

0xf107,	// (0x0001df5b) popup_call_audio_second_window_g

0x9b09,	// (0x0001895d) popup_call_audio_second_window_t1_ParamLimits

0x9b09,	// (0x0001895d) popup_call_audio_second_window_t1

0x9b8a,	// (0x000189de) popup_call_audio_second_window_t2_ParamLimits

0x9b8a,	// (0x000189de) popup_call_audio_second_window_t2

0x9bc0,	// (0x00018a14) popup_call_audio_second_window_t3_ParamLimits

0x9bc0,	// (0x00018a14) popup_call_audio_second_window_t3

0x0002,

0xf10c,	// (0x0001df60) popup_call_audio_second_window_t_ParamLimits

0xf10c,	// (0x0001df60) popup_call_audio_second_window_t

0x99b9,	// (0x0001880d) bg_popup_call_pane_cp04

0x9bf6,	// (0x00018a4a) list_conf_pane

0x9bfe,	// (0x00018a52) popup_call_audio_conf_window_t1

0x9c0c,	// (0x00018a60) call_thumbnail_pane_g1

0x9c14,	// (0x00018a68) bg_pinb_pane_ParamLimits

0x9c14,	// (0x00018a68) bg_pinb_pane

0x9c22,	// (0x00018a76) find_pinb_pane

0x9c2b,	// (0x00018a7f) listscroll_pinb_pane_ParamLimits

0x9c2b,	// (0x00018a7f) listscroll_pinb_pane

0x9c3a,	// (0x00018a8e) pinb_bg_pane_g1

0x0537,	// (0x0000f38b) pinb_bg_pane_g2

0x0543,	// (0x0000f397) pinb_bg_pane_g3

0x054f,	// (0x0000f3a3) pinb_bg_pane_g4

0x055b,	// (0x0000f3af) pinb_bg_pane_g5

0x0567,	// (0x0000f3bb) pinb_bg_pane_g6

0x0572,	// (0x0000f3c6) pinb_bg_pane_g7

0x057d,	// (0x0000f3d1) pinb_bg_pane_g8

0x0588,	// (0x0000f3dc) pinb_bg_pane_g9

0x0592,	// (0x0000f3e6) pinb_bg_pane_g10

0x0009,

0xf113,	// (0x0001df67) pinb_bg_pane_g

0x05af,	// (0x0000f403) grid_pinb_pane

0x05b8,	// (0x0000f40c) list_pinb_pane

0x05c1,	// (0x0000f415) scroll_pane_cp01_ParamLimits

0x05c1,	// (0x0000f415) scroll_pane_cp01

0x9c44,	// (0x00018a98) find_pinb_pane_g1_ParamLimits

0x9c44,	// (0x00018a98) find_pinb_pane_g1

0x9c5c,	// (0x00018ab0) find_pinb_pane_t1

0x9c6e,	// (0x00018ac2) find_pinb_pane_t2

0x0001,

0xf12d,	// (0x0001df81) find_pinb_pane_t

0x9c83,	// (0x00018ad7) input_focus_pane_cp01_ParamLimits

0x9c83,	// (0x00018ad7) input_focus_pane_cp01

0x05d3,	// (0x0000f427) cell_pinb_pane_ParamLimits

0x05d3,	// (0x0000f427) cell_pinb_pane

0x9c8f,	// (0x00018ae3) cell_pinb_pane_g1_ParamLimits

0x9c8f,	// (0x00018ae3) cell_pinb_pane_g1

0x9ca2,	// (0x00018af6) cell_pinb_pane_g2_ParamLimits

0x9ca2,	// (0x00018af6) cell_pinb_pane_g2

0x9cae,	// (0x00018b02) cell_pinb_pane_g3_ParamLimits

0x9cae,	// (0x00018b02) cell_pinb_pane_g3

0x0002,

0xf132,	// (0x0001df86) cell_pinb_pane_g_ParamLimits

0xf132,	// (0x0001df86) cell_pinb_pane_g

0x99b9,	// (0x0001880d) grid_highlight_pane_cp01

0x0601,	// (0x0000f455) list_pinb_item_pane_ParamLimits

0x0601,	// (0x0000f455) list_pinb_item_pane

0x99b9,	// (0x0001880d) list_highlight_pane_cp02

0x0614,	// (0x0000f468) list_pinb_item_pane_g1_ParamLimits

0x0614,	// (0x0000f468) list_pinb_item_pane_g1

0x0621,	// (0x0000f475) list_pinb_item_pane_g2_ParamLimits

0x0621,	// (0x0000f475) list_pinb_item_pane_g2

0x062d,	// (0x0000f481) list_pinb_item_pane_g3_ParamLimits

0x062d,	// (0x0000f481) list_pinb_item_pane_g3

0x063e,	// (0x0000f492) list_pinb_item_pane_g4_ParamLimits

0x063e,	// (0x0000f492) list_pinb_item_pane_g4

0x0003,

0xf139,	// (0x0001df8d) list_pinb_item_pane_g_ParamLimits

0xf139,	// (0x0001df8d) list_pinb_item_pane_g

0x064a,	// (0x0000f49e) list_pinb_item_pane_t1_ParamLimits

0x064a,	// (0x0000f49e) list_pinb_item_pane_t1

0x067f,	// (0x0000f4d3) calc_display_pane

0x06a7,	// (0x0000f4fb) calc_paper_pane

0x06ca,	// (0x0000f51e) grid_calc_pane

0x99b9,	// (0x0001880d) bg_list_pane_cp01

0x06f8,	// (0x0000f54c) clock_g1

0x0700,	// (0x0000f554) clock_g2

0x0001,

0xf142,	// (0x0001df96) clock_g

0x0708,	// (0x0000f55c) clock_t1_ParamLimits

0x0708,	// (0x0000f55c) clock_t1

0x071d,	// (0x0000f571) clock_t2_ParamLimits

0x071d,	// (0x0000f571) clock_t2

0x072f,	// (0x0000f583) clock_t3_ParamLimits

0x072f,	// (0x0000f583) clock_t3

0x0741,	// (0x0000f595) clock_t4_ParamLimits

0x0741,	// (0x0000f595) clock_t4

0x0753,	// (0x0000f5a7) clock_t5_ParamLimits

0x0753,	// (0x0000f5a7) clock_t5

0x0768,	// (0x0000f5bc) clock_t6_ParamLimits

0x0768,	// (0x0000f5bc) clock_t6

0x077a,	// (0x0000f5ce) clock_t7_ParamLimits

0x077a,	// (0x0000f5ce) clock_t7

0x078c,	// (0x0000f5e0) clock_t8_ParamLimits

0x078c,	// (0x0000f5e0) clock_t8

0x07a0,	// (0x0000f5f4) clock_t9_ParamLimits

0x07a0,	// (0x0000f5f4) clock_t9

0x0008,

0xf147,	// (0x0001df9b) clock_t_ParamLimits

0xf147,	// (0x0001df9b) clock_t

0x9cc2,	// (0x00018b16) popup_clock_analogue_window_cp02

0x9cc2,	// (0x00018b16) popup_clock_digital_window_cp01

0x9cca,	// (0x00018b1e) listscroll_help_pane

0x99b9,	// (0x0001880d) phob_pre_status_pane

0x9cd4,	// (0x00018b28) grid_qdial_pane

0x9c14,	// (0x00018a68) listscroll_mce_pane

0x9c14,	// (0x00018a68) bg_notes_pane

0x9cde,	// (0x00018b32) list_notes_pane

0x07b4,	// (0x0000f608) scroll_pane_cp06

0x9cec,	// (0x00018b40) bg_calc_paper_pane

0x9d00,	// (0x00018b54) list_calc_pane

0x9d1a,	// (0x00018b6e) bg_calc_display_pane

0x07c8,	// (0x0000f61c) calc_display_pane_t1

0x07da,	// (0x0000f62e) calc_display_pane_t2

0x9d26,	// (0x00018b7a) calc_display_pane_t3

0x0002,

0xf15a,	// (0x0001dfae) calc_display_pane_t

0x07ec,	// (0x0000f640) cell_calc_pane_ParamLimits

0x07ec,	// (0x0000f640) cell_calc_pane

0x9d38,	// (0x00018b8c) bg_calc_paper_pane_g1

0x9d44,	// (0x00018b98) bg_calc_paper_pane_g2

0x9d50,	// (0x00018ba4) bg_calc_paper_pane_g3

0x9d5c,	// (0x00018bb0) bg_calc_paper_pane_g4

0x9d68,	// (0x00018bbc) bg_calc_paper_pane_g5

0x0823,	// (0x0000f677) bg_calc_paper_pane_g6

0x0834,	// (0x0000f688) bg_calc_paper_pane_g7

0x0845,	// (0x0000f699) bg_calc_paper_pane_g8

0x0007,

0xf161,	// (0x0001dfb5) bg_calc_paper_pane_g

0x0858,	// (0x0000f6ac) calc_bg_paper_pane_g9

0x086b,	// (0x0000f6bf) list_calc_item_pane_ParamLimits

0x086b,	// (0x0000f6bf) list_calc_item_pane

0x9d74,	// (0x00018bc8) list_calc_item_pane_g1

0x9d81,	// (0x00018bd5) list_calc_item_pane_t1_ParamLimits

0x9d81,	// (0x00018bd5) list_calc_item_pane_t1

0x0885,	// (0x0000f6d9) list_calc_item_pane_t2_ParamLimits

0x0885,	// (0x0000f6d9) list_calc_item_pane_t2

0x0001,

0xf172,	// (0x0001dfc6) list_calc_item_pane_t_ParamLimits

0xf172,	// (0x0001dfc6) list_calc_item_pane_t

0x9d93,	// (0x00018be7) cell_calc_pane_g1

0x9d9d,	// (0x00018bf1) grid_highlight_pane_cp02

0x9dbf,	// (0x00018c13) bg_calc_display_pane_g1

0x9dc8,	// (0x00018c1c) bg_calc_display_pane_g2

0x9dd2,	// (0x00018c26) bg_calc_display_pane_g3

0x0002,

0xf17c,	// (0x0001dfd0) bg_calc_display_pane_g

0x08b7,	// (0x0000f70b) cell_qdial_pane_ParamLimits

0x08b7,	// (0x0000f70b) cell_qdial_pane

0x08cb,	// (0x0000f71f) cell_qdial_pane_g1_ParamLimits

0x08cb,	// (0x0000f71f) cell_qdial_pane_g1

0x08e1,	// (0x0000f735) cell_qdial_pane_g2_ParamLimits

0x08e1,	// (0x0000f735) cell_qdial_pane_g2

0x9ddb,	// (0x00018c2f) cell_qdial_pane_g3_ParamLimits

0x9ddb,	// (0x00018c2f) cell_qdial_pane_g3

0x0003,

0xf183,	// (0x0001dfd7) cell_qdial_pane_g_ParamLimits

0xf183,	// (0x0001dfd7) cell_qdial_pane_g

0x0907,	// (0x0000f75b) cell_qdial_pane_t1_ParamLimits

0x0907,	// (0x0000f75b) cell_qdial_pane_t1

0x091f,	// (0x0000f773) cell_qdial_pane_t2_ParamLimits

0x091f,	// (0x0000f773) cell_qdial_pane_t2

0x0932,	// (0x0000f786) cell_qdial_pane_t3_ParamLimits

0x0932,	// (0x0000f786) cell_qdial_pane_t3

0x0002,

0xf18c,	// (0x0001dfe0) cell_qdial_pane_t_ParamLimits

0xf18c,	// (0x0001dfe0) cell_qdial_pane_t

0x99b9,	// (0x0001880d) grid_highlight_pane_cp04

0x9de7,	// (0x00018c3b) thumbnail_qdial_pane_ParamLimits

0x9de7,	// (0x00018c3b) thumbnail_qdial_pane

0x9e43,	// (0x00018c97) list_help_pane

0x9e4c,	// (0x00018ca0) scroll_pane_cp02

0x0945,	// (0x0000f799) help_list_pane_t1_ParamLimits

0x0945,	// (0x0000f799) help_list_pane_t1

0x9e55,	// (0x00018ca9) bg_notes_pane_g2

0x9e5d,	// (0x00018cb1) bg_notes_pane_g3

0x9e65,	// (0x00018cb9) notes_bg_pane_g1

0x9e6d,	// (0x00018cc1) notes_bg_pane_g4

0x9e75,	// (0x00018cc9) notes_bg_pane_g5

0x9e7d,	// (0x00018cd1) notes_bg_pane_g6

0x9e85,	// (0x00018cd9) notes_bg_pane_g7

0x9e8d,	// (0x00018ce1) notes_bg_pane_g8

0x9e95,	// (0x00018ce9) notes_bg_pane_g9

0x0006,

0xf1aa,	// (0x0001dffe) notes_bg_pane_g

0x0964,	// (0x0000f7b8) list_notes_text_pane_ParamLimits

0x0964,	// (0x0000f7b8) list_notes_text_pane

0x9e9d,	// (0x00018cf1) list_notes_text_pane_g1

0x097a,	// (0x0000f7ce) list_notes_text_pane_t1

0x0988,	// (0x0000f7dc) listscroll_cale_week_pane

0x09b4,	// (0x0000f808) bg_cale_heading_pane

0x9ec0,	// (0x00018d14) bg_cale_pane_cp01

0x09d2,	// (0x0000f826) cale_week_corner_pane

0x09f1,	// (0x0000f845) cale_week_day_heading_pane

0x0a14,	// (0x0000f868) cale_week_scroll_pane_g1

0x0a2d,	// (0x0000f881) cale_week_scroll_pane_g2

0x0a45,	// (0x0000f899) cale_week_scroll_pane_g3

0x0a5d,	// (0x0000f8b1) cale_week_scroll_pane_g4

0x0a75,	// (0x0000f8c9) cale_week_scroll_pane_g5

0x0a91,	// (0x0000f8e5) cale_week_scroll_pane_g6

0x0ab1,	// (0x0000f905) cale_week_scroll_pane_g7

0x0ad1,	// (0x0000f925) cale_week_scroll_pane_g8

0x0af5,	// (0x0000f949) cale_week_scroll_pane_g9

0x0b0d,	// (0x0000f961) cale_week_scroll_pane_g10

0x0b25,	// (0x0000f979) cale_week_scroll_pane_g11

0x0b3d,	// (0x0000f991) cale_week_scroll_pane_g12

0x0b55,	// (0x0000f9a9) cale_week_scroll_pane_g13

0x0b55,	// (0x0000f9a9) cale_week_scroll_pane_g14

0x0b55,	// (0x0000f9a9) cale_week_scroll_pane_g15

0x000e,

0xf1b9,	// (0x0001e00d) cale_week_scroll_pane_g

0x0b6d,	// (0x0000f9c1) cale_week_time_pane

0x0b91,	// (0x0000f9e5) grid_cale_week_pane

0x9ef0,	// (0x00018d44) scroll_pane_cp08

0x0bb7,	// (0x0000fa0b) cell_cale_week_pane_ParamLimits

0x0bb7,	// (0x0000fa0b) cell_cale_week_pane

0x0c45,	// (0x0000fa99) cale_week_day_heading_pane_t1

0x0c8f,	// (0x0000fae3) cale_week_day_heading_pane_t2

0x0cde,	// (0x0000fb32) cale_week_day_heading_pane_t3

0x0d2d,	// (0x0000fb81) cale_week_day_heading_pane_t4

0x0d7c,	// (0x0000fbd0) cale_week_day_heading_pane_t5

0x0dd3,	// (0x0000fc27) cale_week_day_heading_pane_t6

0x0e2a,	// (0x0000fc7e) cale_week_day_heading_pane_t7

0x0006,

0xf1d8,	// (0x0001e02c) cale_week_day_heading_pane_t

0x9f0d,	// (0x00018d61) bg_cale_side_pane

0x0e74,	// (0x0000fcc8) cale_week_time_pane_t1

0x0e8e,	// (0x0000fce2) cale_week_time_pane_t2

0x0ea8,	// (0x0000fcfc) cale_week_time_pane_t3

0x0ec2,	// (0x0000fd16) cale_week_time_pane_t4

0x0edc,	// (0x0000fd30) cale_week_time_pane_t5

0x0ef6,	// (0x0000fd4a) cale_week_time_pane_t6

0x0f10,	// (0x0000fd64) cale_week_time_pane_t7

0x0f30,	// (0x0000fd84) cale_week_time_pane_t8

0x0007,

0xf1e7,	// (0x0001e03b) cale_week_time_pane_t

0x0f50,	// (0x0000fda4) cell_cale_week_pane_g2

0x0f6f,	// (0x0000fdc3) cell_cale_week_pane_g3_ParamLimits

0x0f6f,	// (0x0000fdc3) cell_cale_week_pane_g3

0x9f1b,	// (0x00018d6f) grid_highlight_pane_cp07

0x9f23,	// (0x00018d77) listscroll_gms_pane

0x9f2d,	// (0x00018d81) grid_gms_pane

0x9f36,	// (0x00018d8a) listscroll_gms_pane_g1

0x9f3e,	// (0x00018d92) listscroll_gms_pane_g2

0x0001,

0xf1f8,	// (0x0001e04c) listscroll_gms_pane_g

0x0f87,	// (0x0000fddb) scroll_pane_cp010

0x0f92,	// (0x0000fde6) cell_gms_pane_ParamLimits

0x0f92,	// (0x0000fde6) cell_gms_pane

0x0fa4,	// (0x0000fdf8) cell_gms_pane_g1

0x9f46,	// (0x00018d9a) cell_gms_pane_g2

0x9e9d,	// (0x00018cf1) cell_gms_pane_g3

0x9f4e,	// (0x00018da2) cell_gms_pane_g4

0x0003,

0xf1fd,	// (0x0001e051) cell_gms_pane_g

0x9f57,	// (0x00018dab) grid_highlight_pane_cp09

0x367c,	// (0x000124d0) phob_pre_status_pane_g1

0x3684,	// (0x000124d8) phob_pre_status_pane_g2

0x368c,	// (0x000124e0) phob_pre_status_pane_g3

0x3694,	// (0x000124e8) phob_pre_status_pane_g4

0x0004,

0xf5ec,	// (0x0001e440) phob_pre_status_pane_g

0x36a4,	// (0x000124f8) phob_pre_status_pane_t1

0x36b2,	// (0x00012506) phob_pre_status_pane_t2

0x36c2,	// (0x00012516) phob_pre_status_pane_t3

0x0002,

0xf5f7,	// (0x0001e44b) phob_pre_status_pane_t

0x99b9,	// (0x0001880d) bg_list_pane_cp05

0x0fb4,	// (0x0000fe08) grid_vorec_pane

0x0fc0,	// (0x0000fe14) vorec_t1

0x0fce,	// (0x0000fe22) vorec_t2

0x0fdc,	// (0x0000fe30) vorec_t3

0x0fea,	// (0x0000fe3e) vorec_t4

0x0ff8,	// (0x0000fe4c) vorec_t5

0x9f5f,	// (0x00018db3) vorec_t6

0x0006,

0xf206,	// (0x0001e05a) vorec_t

0x1014,	// (0x0000fe68) wait_bar_pane_cp01

0x101c,	// (0x0000fe70) cell_vorec_pane_ParamLimits

0x101c,	// (0x0000fe70) cell_vorec_pane

0x9f6d,	// (0x00018dc1) cell_vorec_pane_g1

0x99b9,	// (0x0001880d) grid_highlight_pane_cp05

0x1047,	// (0x0000fe9b) cams_zoom_pane

0x1056,	// (0x0000feaa) image_vga_pane

0x1070,	// (0x0000fec4) main_camera_pane_g1

0x1082,	// (0x0000fed6) main_camera_pane_g2

0x1092,	// (0x0000fee6) main_camera_pane_g3

0x10a4,	// (0x0000fef8) main_camera_pane_g4

0x10b6,	// (0x0000ff0a) main_camera_pane_g5

0x10c8,	// (0x0000ff1c) main_camera_pane_g6

0x10da,	// (0x0000ff2e) main_camera_pane_g7

0x0007,

0xf215,	// (0x0001e069) main_camera_pane_g

0x10ec,	// (0x0000ff40) main_camera_pane_t1

0x1102,	// (0x0000ff56) main_camera_pane_t2

0x0001,

0xf226,	// (0x0001e07a) main_camera_pane_t

0x113e,	// (0x0000ff92) cams_zoom_pane_cp_ParamLimits

0x113e,	// (0x0000ff92) cams_zoom_pane_cp

0x1166,	// (0x0000ffba) image_cif_pane_ParamLimits

0x1166,	// (0x0000ffba) image_cif_pane

0x11a1,	// (0x0000fff5) image_subqcif_pane

0x11a9,	// (0x0000fffd) main_video_pane_g1_ParamLimits

0x11a9,	// (0x0000fffd) main_video_pane_g1

0x11cd,	// (0x00010021) main_video_pane_g2_ParamLimits

0x11cd,	// (0x00010021) main_video_pane_g2

0x1201,	// (0x00010055) main_video_pane_g3_ParamLimits

0x1201,	// (0x00010055) main_video_pane_g3

0x122f,	// (0x00010083) main_video_pane_g4_ParamLimits

0x122f,	// (0x00010083) main_video_pane_g4

0x125d,	// (0x000100b1) main_video_pane_g5_ParamLimits

0x125d,	// (0x000100b1) main_video_pane_g5

0x9f83,	// (0x00018dd7) main_video_pane_g6_ParamLimits

0x9f83,	// (0x00018dd7) main_video_pane_g6

0x0006,

0xf22b,	// (0x0001e07f) main_video_pane_g_ParamLimits

0xf22b,	// (0x0001e07f) main_video_pane_g

0x1286,	// (0x000100da) main_video_pane_t1_ParamLimits

0x1286,	// (0x000100da) main_video_pane_t1

0x9f9d,	// (0x00018df1) cams_zoom_pane_g1

0x9fa6,	// (0x00018dfa) cams_zoom_pane_g2

0x9faf,	// (0x00018e03) cams_zoom_pane_g3

0x9fb8,	// (0x00018e0c) cams_zoom_pane_g4

0x0003,

0xf23a,	// (0x0001e08e) cams_zoom_pane_g

0x12e3,	// (0x00010137) grid_cams_pane

0x12fd,	// (0x00010151) linegrid_cams_pane

0x1310,	// (0x00010164) cell_cams_pane_ParamLimits

0x1310,	// (0x00010164) cell_cams_pane

0x9fc1,	// (0x00018e15) cams_burst_image_pane

0x9fc9,	// (0x00018e1d) cell_cams_pane_g1

0x99b9,	// (0x0001880d) grid_highlight_pane_cp03

0x9d93,	// (0x00018be7) mp_bg_pane_g1

0x99b9,	// (0x0001880d) bg_list_pane_cp03

0xbccb,	// (0x0001ab1f) bg_mp_pane

0xbcd3,	// (0x0001ab27) grid_mp_pane

0xbcdb,	// (0x0001ab2f) media_player_g1

0xbce3,	// (0x0001ab37) media_player_t1

0xbcf1,	// (0x0001ab45) media_player_t2

0xbcff,	// (0x0001ab53) media_player_t3

0xbd0d,	// (0x0001ab61) media_player_t4

0xbd1b,	// (0x0001ab6f) media_player_t5

0xbd29,	// (0x0001ab7d) media_player_t6

0xbd37,	// (0x0001ab8b) media_player_t7

0x0006,

0xf5d6,	// (0x0001e42a) media_player_t

0xbd45,	// (0x0001ab99) wait_bar_pane_cp02

0xf5bb,	// (0x0001e40f) main_usb_pane_t

0x3673,	// (0x000124c7) cell_mp_pane

0x9d93,	// (0x00018be7) cell_mp_pane_g1

0x99b9,	// (0x0001880d) grid_highlight_pane_cp06

0x9fd1,	// (0x00018e25) grid_skin_colour_pane

0x9fd9,	// (0x00018e2d) list_highlight_pane_cp03

0x1440,	// (0x00010294) skin_g1

0x9fe1,	// (0x00018e35) skin_t1

0x9ff0,	// (0x00018e44) skin_t2

0x0001,

0xf26f,	// (0x0001e0c3) skin_t

0x1448,	// (0x0001029c) cell_skin_colour_pane_ParamLimits

0x1448,	// (0x0001029c) cell_skin_colour_pane

0x9ffe,	// (0x00018e52) cell_skin_colour_pane_g1

0x14c1,	// (0x00010315) call_video_g1_ParamLimits

0x14c1,	// (0x00010315) call_video_g1

0x14dd,	// (0x00010331) call_video_g2_ParamLimits

0x14dd,	// (0x00010331) call_video_g2

0x0001,

0xf274,	// (0x0001e0c8) call_video_g_ParamLimits

0xf274,	// (0x0001e0c8) call_video_g

0x152f,	// (0x00010383) call_video_uplink_pane_cp1_ParamLimits

0x152f,	// (0x00010383) call_video_uplink_pane_cp1

0xa010,	// (0x00018e64) call_video_uplink_pane_cp2

0x15ce,	// (0x00010422) video_down_crop_pane_ParamLimits

0x15ce,	// (0x00010422) video_down_crop_pane

0x16b7,	// (0x0001050b) video_down_pane_ParamLimits

0x16b7,	// (0x0001050b) video_down_pane

0xa018,	// (0x00018e6c) video_down_subqcif_pane_ParamLimits

0xa018,	// (0x00018e6c) video_down_subqcif_pane

0xa030,	// (0x00018e84) video_down_subqcif_pane_cp_ParamLimits

0xa030,	// (0x00018e84) video_down_subqcif_pane_cp

0xa056,	// (0x00018eaa) im_reading_pane_ParamLimits

0xa056,	// (0x00018eaa) im_reading_pane

0x17c5,	// (0x00010619) im_writing_pane_ParamLimits

0x17c5,	// (0x00010619) im_writing_pane

0x17db,	// (0x0001062f) im_reading_pane_t1

0xa070,	// (0x00018ec4) list_im_pane

0xa081,	// (0x00018ed5) scroll_pane_cp07

0x1818,	// (0x0001066c) im_writing_pane_t1_ParamLimits

0x1818,	// (0x0001066c) im_writing_pane_t1

0xa09a,	// (0x00018eee) im_writing_pane_t2_ParamLimits

0xa09a,	// (0x00018eee) im_writing_pane_t2

0x0001,

0xf27e,	// (0x0001e0d2) im_writing_pane_t_ParamLimits

0xf27e,	// (0x0001e0d2) im_writing_pane_t

0x99b9,	// (0x0001880d) input_focus_pane_cp04

0x99b9,	// (0x0001880d) input_focus_pane_cp05

0x182d,	// (0x00010681) list_im_single_pane_ParamLimits

0x182d,	// (0x00010681) list_im_single_pane

0x1843,	// (0x00010697) list_single_im_pane_t1

0x3633,	// (0x00012487) blid_accuracy_pane

0x363b,	// (0x0001248f) blid_compass_pane

0x3645,	// (0x00012499) main_location_t1

0x3655,	// (0x000124a9) main_location_t2

0x3665,	// (0x000124b9) main_location_t3

0x0002,

0xf5e5,	// (0x0001e439) main_location_t

0x99b9,	// (0x0001880d) aid_levels_location

0x9d93,	// (0x00018be7) blid_accuracy_pane_g1

0x9d93,	// (0x00018be7) blid_accuracy_pane_g2

0x0001,

0xf2e0,	// (0x0001e134) blid_accuracy_pane_g

0xa0e2,	// (0x00018f36) wml_content_pane

0xa120,	// (0x00018f74) wml_button_pane_ParamLimits

0xa120,	// (0x00018f74) wml_button_pane

0x1852,	// (0x000106a6) wml_list_single_large_pane_ParamLimits

0x1852,	// (0x000106a6) wml_list_single_large_pane

0x1868,	// (0x000106bc) wml_list_single_medium_pane_ParamLimits

0x1868,	// (0x000106bc) wml_list_single_medium_pane

0x1882,	// (0x000106d6) wml_list_single_small_pane_ParamLimits

0x1882,	// (0x000106d6) wml_list_single_small_pane

0xa134,	// (0x00018f88) wml_selection_box_pane_ParamLimits

0xa134,	// (0x00018f88) wml_selection_box_pane

0xa147,	// (0x00018f9b) wml_list_single_pane_t1

0xa156,	// (0x00018faa) wml_list_single_medium_pane_t1

0xa165,	// (0x00018fb9) wml_list_single_large_pane_t1

0xa174,	// (0x00018fc8) input_focus_pane_cp02_ParamLimits

0xa174,	// (0x00018fc8) input_focus_pane_cp02

0xa187,	// (0x00018fdb) wml_selection_box_pane_g1

0xa190,	// (0x00018fe4) wml_selection_box_pane_t1_ParamLimits

0xa190,	// (0x00018fe4) wml_selection_box_pane_t1

0x9c14,	// (0x00018a68) bg_wml_button_pane_ParamLimits

0x9c14,	// (0x00018a68) bg_wml_button_pane

0xa1a8,	// (0x00018ffc) wml_button_pane_g1

0xa1b0,	// (0x00019004) wml_button_pane_t1

0xa1a8,	// (0x00018ffc) wml_button_bg_pane_g1

0xa1c0,	// (0x00019014) wml_button_bg_pane_g2

0xa1c8,	// (0x0001901c) wml_button_bg_pane_g3

0xa1d0,	// (0x00019024) wml_button_bg_pane_g4

0xa1d8,	// (0x0001902c) wml_button_bg_pane_g5

0xa1e0,	// (0x00019034) wml_button_bg_pane_g6

0xa1e8,	// (0x0001903c) wml_button_bg_pane_g7

0xa1f0,	// (0x00019044) wml_button_bg_pane_g8

0xa1f8,	// (0x0001904c) wml_button_bg_pane_g9

0x0008,

0xf283,	// (0x0001e0d7) wml_button_bg_pane_g

0x189c,	// (0x000106f0) bg_list_pane_cp02

0xa200,	// (0x00019054) mce_header_pane_ParamLimits

0xa200,	// (0x00019054) mce_header_pane

0xa216,	// (0x0001906a) mce_icon_pane

0xa216,	// (0x0001906a) mce_image_pane

0xa21f,	// (0x00019073) mce_text_pane_ParamLimits

0xa21f,	// (0x00019073) mce_text_pane

0x18a4,	// (0x000106f8) scroll_pane_cp03

0xa118,	// (0x00018f6c) scroll_pane_cp04

0xa232,	// (0x00019086) scroll_pane_cp05_ParamLimits

0xa232,	// (0x00019086) scroll_pane_cp05

0x18ae,	// (0x00010702) mce_header_field_pane_ParamLimits

0x18ae,	// (0x00010702) mce_header_field_pane

0x18c5,	// (0x00010719) mce_header_field_pane_2_ParamLimits

0x18c5,	// (0x00010719) mce_header_field_pane_2

0x18db,	// (0x0001072f) mce_header_field_pane_3

0x18e3,	// (0x00010737) list_single_mce_message_pane_ParamLimits

0x18e3,	// (0x00010737) list_single_mce_message_pane

0x18fa,	// (0x0001074e) list_single_mce_smart_pane_ParamLimits

0x18fa,	// (0x0001074e) list_single_mce_smart_pane

0xa23e,	// (0x00019092) input_focus_pane_cp03

0xa247,	// (0x0001909b) list_header_data_pane

0x191c,	// (0x00010770) mce_header_field_pane_t1

0x192c,	// (0x00010780) list_single_mce_header_pane_ParamLimits

0x192c,	// (0x00010780) list_single_mce_header_pane

0xa24f,	// (0x000190a3) list_single_mce_header_pane_t1

0xa25e,	// (0x000190b2) list_single_mce_message_pane_g1

0xa266,	// (0x000190ba) list_single_mce_message_pane_t1

0x1966,	// (0x000107ba) bg_cale_heading_pane_cp01_ParamLimits

0x1966,	// (0x000107ba) bg_cale_heading_pane_cp01

0xa274,	// (0x000190c8) bg_cale_pane_cp02_ParamLimits

0xa274,	// (0x000190c8) bg_cale_pane_cp02

0x19a1,	// (0x000107f5) cale_month_corner_pane

0x19c0,	// (0x00010814) cale_month_day_heading_pane_ParamLimits

0x19c0,	// (0x00010814) cale_month_day_heading_pane

0x1a13,	// (0x00010867) cale_month_pane_g1_ParamLimits

0x1a13,	// (0x00010867) cale_month_pane_g1

0x1a43,	// (0x00010897) cale_month_pane_g2_ParamLimits

0x1a43,	// (0x00010897) cale_month_pane_g2

0x1a73,	// (0x000108c7) cale_month_pane_g3_ParamLimits

0x1a73,	// (0x000108c7) cale_month_pane_g3

0x1aaf,	// (0x00010903) cale_month_pane_g4_ParamLimits

0x1aaf,	// (0x00010903) cale_month_pane_g4

0x1aeb,	// (0x0001093f) cale_month_pane_g5_ParamLimits

0x1aeb,	// (0x0001093f) cale_month_pane_g5

0x1b33,	// (0x00010987) cale_month_pane_g6_ParamLimits

0x1b33,	// (0x00010987) cale_month_pane_g6

0x1b7f,	// (0x000109d3) cale_month_pane_g7_ParamLimits

0x1b7f,	// (0x000109d3) cale_month_pane_g7

0x1bd3,	// (0x00010a27) cale_month_pane_g8_ParamLimits

0x1bd3,	// (0x00010a27) cale_month_pane_g8

0x1c27,	// (0x00010a7b) cale_month_pane_g9_ParamLimits

0x1c27,	// (0x00010a7b) cale_month_pane_g9

0x1c79,	// (0x00010acd) cale_month_pane_g10_ParamLimits

0x1c79,	// (0x00010acd) cale_month_pane_g10

0x1ccb,	// (0x00010b1f) cale_month_pane_g11_ParamLimits

0x1ccb,	// (0x00010b1f) cale_month_pane_g11

0x1d1d,	// (0x00010b71) cale_month_pane_g12_ParamLimits

0x1d1d,	// (0x00010b71) cale_month_pane_g12

0x1d6f,	// (0x00010bc3) cale_month_pane_g13_ParamLimits

0x1d6f,	// (0x00010bc3) cale_month_pane_g13

0x000c,

0xf296,	// (0x0001e0ea) cale_month_pane_g_ParamLimits

0xf296,	// (0x0001e0ea) cale_month_pane_g

0x1dc1,	// (0x00010c15) cale_month_week_pane

0x1de5,	// (0x00010c39) grid_cale_month_pane_ParamLimits

0x1de5,	// (0x00010c39) grid_cale_month_pane

0x1e23,	// (0x00010c77) cale_month_day_heading_pane_t1

0x1ea9,	// (0x00010cfd) cale_month_day_heading_pane_t2

0x1f3a,	// (0x00010d8e) cale_month_day_heading_pane_t3

0x1fcb,	// (0x00010e1f) cale_month_day_heading_pane_t4

0x2064,	// (0x00010eb8) cale_month_day_heading_pane_t5

0x2105,	// (0x00010f59) cale_month_day_heading_pane_t6

0x21a6,	// (0x00010ffa) cale_month_day_heading_pane_t7

0x0006,

0xf2b1,	// (0x0001e105) cale_month_day_heading_pane_t

0x9f0d,	// (0x00018d61) bg_cale_side_pane_cp01

0x224f,	// (0x000110a3) cale_month_week_pane_t1

0x2268,	// (0x000110bc) cale_month_week_pane_t2

0x2281,	// (0x000110d5) cale_month_week_pane_t3

0x229a,	// (0x000110ee) cale_month_week_pane_t4

0x22b3,	// (0x00011107) cale_month_week_pane_t5

0x22cc,	// (0x00011120) cale_month_week_pane_t6

0x0005,

0xf2c0,	// (0x0001e114) cale_month_week_pane_t

0x22e5,	// (0x00011139) cell_cale_month_pane_ParamLimits

0x22e5,	// (0x00011139) cell_cale_month_pane

0xa2b3,	// (0x00019107) cell_cale_month_pane_g1

0x243d,	// (0x00011291) cell_cale_month_pane_t1_ParamLimits

0x243d,	// (0x00011291) cell_cale_month_pane_t1

0x9f1b,	// (0x00018d6f) grid_highlight_pane_cp08

0x9d93,	// (0x00018be7) main_smil_g1

0x245d,	// (0x000112b1) smil_status_pane

0xa2bf,	// (0x00019113) smil_text_pane

0xbbeb,	// (0x0001aa3f) bg_popup_call3_rect_pane_g8

0xbbf3,	// (0x0001aa47) bg_popup_call3_rect_pane_g9

0x0008,

0xf579,	// (0x0001e3cd) bg_popup_call3_rect_pane_g

0xbe8e,	// (0x0001ace2) smil_status_volume_pane_g1

0xa2c9,	// (0x0001911d) smil_status_pane_t1

0xbec1,	// (0x0001ad15) volume_smil_pane

0xa2e0,	// (0x00019134) list_smil_text_pane

0x2472,	// (0x000112c6) scroll_pane_cp011

0x247d,	// (0x000112d1) smil_text_list_pane_t1_ParamLimits

0x247d,	// (0x000112d1) smil_text_list_pane_t1

0xa2ea,	// (0x0001913e) aid_volume_smil_ParamLimits

0xa2ea,	// (0x0001913e) aid_volume_smil

0x9d93,	// (0x00018be7) smil_volume_pane_g1

0x9d93,	// (0x00018be7) smil_volume_pane_g2

0x0001,

0xf2e0,	// (0x0001e134) smil_volume_pane_g

0x0988,	// (0x0000f7dc) listscroll_cale_day_pane

0xa30c,	// (0x00019160) bg_cale_pane

0xa324,	// (0x00019178) list_cale_pane

0xa347,	// (0x0001919b) scroll_pane_cp09

0xa358,	// (0x000191ac) cale_bg_pane_g1

0xa360,	// (0x000191b4) cale_bg_pane_g2

0xa368,	// (0x000191bc) cale_bg_pane_g3

0xa370,	// (0x000191c4) cale_bg_pane_g4

0xa378,	// (0x000191cc) cale_bg_pane_g5

0xa380,	// (0x000191d4) cale_bg_pane_g6

0xa388,	// (0x000191dc) cale_bg_pane_g7

0xa390,	// (0x000191e4) cale_bg_pane_g8

0xa398,	// (0x000191ec) cale_bg_pane_g9

0x0008,

0xf2e5,	// (0x0001e139) cale_bg_pane_g

0x24bf,	// (0x00011313) list_cale_time_pane_ParamLimits

0x24bf,	// (0x00011313) list_cale_time_pane

0x24d3,	// (0x00011327) list_cale_time_pane_g1_ParamLimits

0x24d3,	// (0x00011327) list_cale_time_pane_g1

0xa3a0,	// (0x000191f4) list_cale_time_pane_g2_ParamLimits

0xa3a0,	// (0x000191f4) list_cale_time_pane_g2

0x24df,	// (0x00011333) list_cale_time_pane_g3_ParamLimits

0x24df,	// (0x00011333) list_cale_time_pane_g3

0x24ed,	// (0x00011341) list_cale_time_pane_g4_ParamLimits

0x24ed,	// (0x00011341) list_cale_time_pane_g4

0x24fb,	// (0x0001134f) list_cale_time_pane_g5_ParamLimits

0x24fb,	// (0x0001134f) list_cale_time_pane_g5

0x0005,

0xf2f8,	// (0x0001e14c) list_cale_time_pane_g_ParamLimits

0xf2f8,	// (0x0001e14c) list_cale_time_pane_g

0x2509,	// (0x0001135d) list_cale_time_pane_t1_ParamLimits

0x2509,	// (0x0001135d) list_cale_time_pane_t1

0x2531,	// (0x00011385) list_cale_time_pane_t2_ParamLimits

0x2531,	// (0x00011385) list_cale_time_pane_t2

0x28b7,	// (0x0001170b) aid_blid_cardinal_pane

0x28f5,	// (0x00011749) compass_pane_t4

0x2559,	// (0x000113ad) list_cale_time_pane_t4_ParamLimits

0x2559,	// (0x000113ad) list_cale_time_pane_t4

0x2903,	// (0x00011757) compass_pane_t5

0x2911,	// (0x00011765) compass_pane_t6

0x291f,	// (0x00011773) compass_pane_t7

0xa858,	// (0x000196ac) navi_pane_cc_t1

0xa9bf,	// (0x00019813) aid_phob_thumbnail_center_pane

0x3043,	// (0x00011e97) main_postcard_pane_g4_ParamLimits

0x0002,

0xf305,	// (0x0001e159) list_cale_time_pane_t_ParamLimits

0xf305,	// (0x0001e159) list_cale_time_pane_t

0x9610,	// (0x00018464) bg_popup_window_pane_cp02_ParamLimits

0x9610,	// (0x00018464) bg_popup_window_pane_cp02

0xa3ba,	// (0x0001920e) heading_pane_cp01_ParamLimits

0xa3ba,	// (0x0001920e) heading_pane_cp01

0xa3c6,	// (0x0001921a) loc_req_pane_ParamLimits

0xa3c6,	// (0x0001921a) loc_req_pane

0xa3d6,	// (0x0001922a) loc_type_pane_ParamLimits

0xa3d6,	// (0x0001922a) loc_type_pane

0xa3e8,	// (0x0001923c) loc_type_pane_t1_ParamLimits

0xa3e8,	// (0x0001923c) loc_type_pane_t1

0xa3fa,	// (0x0001924e) loc_type_pane_t2_ParamLimits

0xa3fa,	// (0x0001924e) loc_type_pane_t2

0xa40c,	// (0x00019260) loc_type_pane_t3_ParamLimits

0xa40c,	// (0x00019260) loc_type_pane_t3

0x0002,

0xf30c,	// (0x0001e160) loc_type_pane_t_ParamLimits

0xf30c,	// (0x0001e160) loc_type_pane_t

0xa41e,	// (0x00019272) list_loc_req_pane

0xa428,	// (0x0001927c) scroll_pane_cp012

0x2581,	// (0x000113d5) list_single_loc_request_popup_menu_pane_ParamLimits

0x2581,	// (0x000113d5) list_single_loc_request_popup_menu_pane

0xa433,	// (0x00019287) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xa433,	// (0x00019287) list_single_loc_request_popup_menu_pane_g1

0xa43f,	// (0x00019293) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xa43f,	// (0x00019293) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf313,	// (0x0001e167) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf313,	// (0x0001e167) list_single_loc_request_popup_menu_pane_g

0xa44b,	// (0x0001929f) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xa44b,	// (0x0001929f) list_single_loc_request_popup_menu_pane_t1

0x9c14,	// (0x00018a68) bg_popup_window_pane_cp03_ParamLimits

0x9c14,	// (0x00018a68) bg_popup_window_pane_cp03

0xa461,	// (0x000192b5) heading_loc_req_pane_ParamLimits

0xa461,	// (0x000192b5) heading_loc_req_pane

0x258e,	// (0x000113e2) popup_dyc_status_message_window_g1_ParamLimits

0x258e,	// (0x000113e2) popup_dyc_status_message_window_g1

0x25a2,	// (0x000113f6) popup_dyc_status_message_window_t1_ParamLimits

0x25a2,	// (0x000113f6) popup_dyc_status_message_window_t1

0x25b7,	// (0x0001140b) popup_dyc_status_message_window_t2_ParamLimits

0x25b7,	// (0x0001140b) popup_dyc_status_message_window_t2

0x25cc,	// (0x00011420) popup_dyc_status_message_window_t3_ParamLimits

0x25cc,	// (0x00011420) popup_dyc_status_message_window_t3

0x0002,

0xf318,	// (0x0001e16c) popup_dyc_status_message_window_t_ParamLimits

0xf318,	// (0x0001e16c) popup_dyc_status_message_window_t

0x99b9,	// (0x0001880d) bg_heading_pane_cp01

0xa46d,	// (0x000192c1) heading_loc_req_pane_g1

0xa475,	// (0x000192c9) heading_loc_req_pane_g2

0xa47d,	// (0x000192d1) heading_loc_req_pane_g3

0x0002,

0xf31f,	// (0x0001e173) heading_loc_req_pane_g

0xa485,	// (0x000192d9) heading_loc_req_pane_t1

0xa494,	// (0x000192e8) bg_popup_sub_pane_cp01_ParamLimits

0xa494,	// (0x000192e8) bg_popup_sub_pane_cp01

0xa4a2,	// (0x000192f6) popup_cale_events_window_g1_ParamLimits

0xa4a2,	// (0x000192f6) popup_cale_events_window_g1

0xa4c2,	// (0x00019316) popup_cale_events_window_g2_ParamLimits

0xa4c2,	// (0x00019316) popup_cale_events_window_g2

0x0001,

0xf353,	// (0x0001e1a7) popup_cale_events_window_g_ParamLimits

0xf353,	// (0x0001e1a7) popup_cale_events_window_g

0xa4e2,	// (0x00019336) popup_cale_events_window_t1_ParamLimits

0xa4e2,	// (0x00019336) popup_cale_events_window_t1

0xa4f4,	// (0x00019348) popup_cale_events_window_t2_ParamLimits

0xa4f4,	// (0x00019348) popup_cale_events_window_t2

0xa532,	// (0x00019386) popup_cale_events_window_t3_ParamLimits

0xa532,	// (0x00019386) popup_cale_events_window_t3

0xa56c,	// (0x000193c0) popup_cale_events_window_t4_ParamLimits

0xa56c,	// (0x000193c0) popup_cale_events_window_t4

0x0003,

0xf358,	// (0x0001e1ac) popup_cale_events_window_t_ParamLimits

0xf358,	// (0x0001e1ac) popup_cale_events_window_t

0x26c5,	// (0x00011519) call_type_pane

0x26d5,	// (0x00011529) popup_call_status_window_g1

0x26e9,	// (0x0001153d) popup_call_status_window_g2

0x26fd,	// (0x00011551) popup_call_status_window_g3

0x0002,

0xf361,	// (0x0001e1b5) popup_call_status_window_g

0xa5a2,	// (0x000193f6) call_type_pane_g1

0xa5ab,	// (0x000193ff) call_type_pane_g2

0x0001,

0xf368,	// (0x0001e1bc) call_type_pane_g

0x99b9,	// (0x0001880d) bg_popup_sub_pane_cp02

0xa5b4,	// (0x00019408) listscroll_popup_wml_pane

0xa5bc,	// (0x00019410) list_wml_pane

0xa5c6,	// (0x0001941a) scroll_pane_cp013

0xa5d1,	// (0x00019425) list_single_graphic_popup_wml_pane_ParamLimits

0xa5d1,	// (0x00019425) list_single_graphic_popup_wml_pane

0x9d93,	// (0x00018be7) list_single_graphic_popup_wml_pane_g1

0xa5e5,	// (0x00019439) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf36d,	// (0x0001e1c1) list_single_graphic_popup_wml_pane_g

0xa5ed,	// (0x00019441) list_single_graphic_popup_wml_pane_t1

0xa603,	// (0x00019457) aid_call_pane

0x9c0c,	// (0x00018a60) popup_clock_analogue_window_g1

0x9c0c,	// (0x00018a60) popup_clock_analogue_window_g2

0xa60b,	// (0x0001945f) popup_clock_analogue_window_g3

0xa60b,	// (0x0001945f) popup_clock_analogue_window_g4

0x9d93,	// (0x00018be7) popup_clock_analogue_window_g5

0x0004,

0xf372,	// (0x0001e1c6) popup_clock_analogue_window_g

0xa613,	// (0x00019467) popup_clock_analogue_window_t1

0xa621,	// (0x00019475) clock_digital_number_pane_ParamLimits

0xa621,	// (0x00019475) clock_digital_number_pane

0xa62d,	// (0x00019481) clock_digital_number_pane_cp02_ParamLimits

0xa62d,	// (0x00019481) clock_digital_number_pane_cp02

0xa639,	// (0x0001948d) clock_digital_number_pane_cp03_ParamLimits

0xa639,	// (0x0001948d) clock_digital_number_pane_cp03

0xa645,	// (0x00019499) clock_digital_number_pane_cp04_ParamLimits

0xa645,	// (0x00019499) clock_digital_number_pane_cp04

0xa655,	// (0x000194a9) clock_digital_separator_pane_ParamLimits

0xa655,	// (0x000194a9) clock_digital_separator_pane

0xa661,	// (0x000194b5) popup_clock_digital_window_t1

0x9d93,	// (0x00018be7) clock_digital_number_pane_g1

0x9d93,	// (0x00018be7) clock_digital_number_pane_g2

0x0001,

0xf2e0,	// (0x0001e134) clock_digital_number_pane_g

0x9d93,	// (0x00018be7) clock_digital_separator_pane_g1

0x9d93,	// (0x00018be7) clock_digital_separator_pane_g2

0x0001,

0xf2e0,	// (0x0001e134) clock_digital_separator_pane_g

0x99b9,	// (0x0001880d) bg_popup_window_pane_cp04

0xa67e,	// (0x000194d2) heading_pane_cp03

0xa686,	// (0x000194da) listscroll_popup_gms_pane

0xa68e,	// (0x000194e2) grid_large_graphic_popup_pane

0xa698,	// (0x000194ec) listscroll_popup_gms_pane_g1

0xa6a0,	// (0x000194f4) listscroll_popup_gms_pane_g2

0x0001,

0xf37d,	// (0x0001e1d1) listscroll_popup_gms_pane_g

0xa118,	// (0x00018f6c) scroll_pane_cp014

0xa6a8,	// (0x000194fc) cell_large_graphic_popup_pane_ParamLimits

0xa6a8,	// (0x000194fc) cell_large_graphic_popup_pane

0xa6c0,	// (0x00019514) cell_large_graphic_popup_pane_g1_ParamLimits

0xa6c0,	// (0x00019514) cell_large_graphic_popup_pane_g1

0xa6cc,	// (0x00019520) cell_large_graphic_popup_pane_g2_ParamLimits

0xa6cc,	// (0x00019520) cell_large_graphic_popup_pane_g2

0xa6d8,	// (0x0001952c) cell_large_graphic_popup_pane_g3_ParamLimits

0xa6d8,	// (0x0001952c) cell_large_graphic_popup_pane_g3

0xa6e5,	// (0x00019539) cell_large_graphic_popup_pane_g4_ParamLimits

0xa6e5,	// (0x00019539) cell_large_graphic_popup_pane_g4

0x0003,

0xf382,	// (0x0001e1d6) cell_large_graphic_popup_pane_g_ParamLimits

0xf382,	// (0x0001e1d6) cell_large_graphic_popup_pane_g

0xa6f5,	// (0x00019549) grid_highlight_pane_cp010

0x9d93,	// (0x00018be7) bg_popup_call_pane_g1

0xa6ff,	// (0x00019553) list_single_graphic_popup_conf_pane_ParamLimits

0xa6ff,	// (0x00019553) list_single_graphic_popup_conf_pane

0xa712,	// (0x00019566) list_highlight_pane_cp01

0xa71b,	// (0x0001956f) list_single_graphic_popup_conf_pane_g1

0xa723,	// (0x00019577) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf38b,	// (0x0001e1df) list_single_graphic_popup_conf_pane_g

0xa72b,	// (0x0001957f) list_single_graphic_popup_conf_pane_t1

0xa739,	// (0x0001958d) linegrid_cams_pane_g1

0x270c,	// (0x00011560) linegrid_cams_pane_g2

0x9e9d,	// (0x00018cf1) linegrid_cams_pane_g3

0xa742,	// (0x00019596) linegrid_cams_pane_g4

0x2715,	// (0x00011569) linegrid_cams_pane_g5

0x271e,	// (0x00011572) linegrid_cams_pane_g6

0x9f4e,	// (0x00018da2) linegrid_cams_pane_g7

0x0006,

0xf390,	// (0x0001e1e4) linegrid_cams_pane_g

0xa74b,	// (0x0001959f) popup_clock_analogue_window

0xa74b,	// (0x0001959f) popup_clock_digital_window

0x99b9,	// (0x0001880d) popup_phob_thumbnail_window

0x9d93,	// (0x00018be7) call_video_uplink_pane_g1

0xa754,	// (0x000195a8) call_video_uplink_pane_g2

0x0001,

0xf39f,	// (0x0001e1f3) call_video_uplink_pane_g

0x9f1b,	// (0x00018d6f) video_uplink_pane

0xa75c,	// (0x000195b0) mce_image_pane_g1

0x2729,	// (0x0001157d) mce_image_pane_g2

0x2731,	// (0x00011585) mce_image_pane_g3

0x2739,	// (0x0001158d) mce_image_pane_g4

0x2743,	// (0x00011597) mce_image_pane_g5

0x0004,

0xf3a4,	// (0x0001e1f8) mce_image_pane_g

0xa766,	// (0x000195ba) control_top_pane_stacon_cp01_ParamLimits

0xa766,	// (0x000195ba) control_top_pane_stacon_cp01

0xa77a,	// (0x000195ce) uni_indicator_pane_stacon_cp01_ParamLimits

0xa77a,	// (0x000195ce) uni_indicator_pane_stacon_cp01

0xa78b,	// (0x000195df) bg_popup_sub_pane_cp03

0x274b,	// (0x0001159f) chi_dic_find_pane

0x2753,	// (0x000115a7) listscroll_chi_dic_pane

0x275c,	// (0x000115b0) main_pane_chidic_g1

0xa795,	// (0x000195e9) chi_dic_find_pane_t1

0xa7a3,	// (0x000195f7) find_chidic_pane

0xa7ac,	// (0x00019600) chi_dic_list_pane_ParamLimits

0xa7ac,	// (0x00019600) chi_dic_list_pane

0xa7bd,	// (0x00019611) scroll_pane_cp020

0xa7c5,	// (0x00019619) find_chidic_pane_t1

0x99b9,	// (0x0001880d) input_focus_pane_cp06

0x276f,	// (0x000115c3) list_chi_dic_pane_ParamLimits

0x276f,	// (0x000115c3) list_chi_dic_pane

0x2782,	// (0x000115d6) list_chi_dic_pane_t1_ParamLimits

0x2782,	// (0x000115d6) list_chi_dic_pane_t1

0x99b9,	// (0x0001880d) list_highlight_pane_cp020

0xa7d4,	// (0x00019628) bg_cale_heading_pane_g1

0x2795,	// (0x000115e9) bg_cale_heading_pane_g2

0x279d,	// (0x000115f1) bg_cale_heading_pane_g3

0x27a5,	// (0x000115f9) bg_cale_heading_pane_g4

0x27af,	// (0x00011603) bg_cale_heading_pane_g5

0x27b9,	// (0x0001160d) bg_cale_heading_pane_g6

0x27c1,	// (0x00011615) bg_cale_heading_pane_g7

0x27c9,	// (0x0001161d) bg_cale_heading_pane_g8

0x27d3,	// (0x00011627) bg_cale_heading_pane_g9

0x0008,

0xf3af,	// (0x0001e203) bg_cale_heading_pane_g

0xa7d4,	// (0x00019628) bg_cale_side_pane_g1

0x27dd,	// (0x00011631) bg_cale_side_pane_g2

0x27e5,	// (0x00011639) bg_cale_side_pane_g3

0x27ed,	// (0x00011641) bg_cale_side_pane_g4

0x27f5,	// (0x00011649) bg_cale_side_pane_g5

0x27fd,	// (0x00011651) bg_cale_side_pane_g6

0x2805,	// (0x00011659) bg_cale_side_pane_g7

0x280d,	// (0x00011661) bg_cale_side_pane_g8

0x2815,	// (0x00011669) bg_cale_side_pane_g9

0x0008,

0xf3c2,	// (0x0001e216) bg_cale_side_pane_g

0x281d,	// (0x00011671) popup_call_status_window_ParamLimits

0x281d,	// (0x00011671) popup_call_status_window

0xa7dc,	// (0x00019630) stacon_top_pane

0xa7e4,	// (0x00019638) status_pane_ParamLimits

0xa7e4,	// (0x00019638) status_pane

0xa7f9,	// (0x0001964d) status_small_pane

0xa801,	// (0x00019655) control_pane

0x99b9,	// (0x0001880d) stacon_bottom_pane

0xa809,	// (0x0001965d) list_single_mce_smart_pane_t1_ParamLimits

0xa809,	// (0x0001965d) list_single_mce_smart_pane_t1

0xa81c,	// (0x00019670) list_single_mce_smart_pane_t2_ParamLimits

0xa81c,	// (0x00019670) list_single_mce_smart_pane_t2

0x0001,

0xf3d5,	// (0x0001e229) list_single_mce_smart_pane_t_ParamLimits

0xf3d5,	// (0x0001e229) list_single_mce_smart_pane_t

0x2864,	// (0x000116b8) compass_pane

0x286d,	// (0x000116c1) main_location2_pane_t1

0x287f,	// (0x000116d3) main_location2_pane_t2

0x2891,	// (0x000116e5) main_location2_pane_t3

0x0003,

0xf3da,	// (0x0001e22e) main_location2_pane_t

0xa83b,	// (0x0001968f) compass_pane_g1_ParamLimits

0xa83b,	// (0x0001968f) compass_pane_g1

0x28d7,	// (0x0001172b) compass_pane_t1

0x28e6,	// (0x0001173a) compass_pane_t2

0x0005,

0xf3e3,	// (0x0001e237) compass_pane_t

0x292d,	// (0x00011781) text_secondary_cp61

0xa84f,	// (0x000196a3) navi_pane_cams_g5

0xa872,	// (0x000196c6) navi_pane_im_t1

0xa880,	// (0x000196d4) navi_pane_mp_g1_ParamLimits

0xa880,	// (0x000196d4) navi_pane_mp_g1

0xa894,	// (0x000196e8) navi_pane_mp_g2_ParamLimits

0xa894,	// (0x000196e8) navi_pane_mp_g2

0xa8a0,	// (0x000196f4) navi_pane_mp_g3_ParamLimits

0xa8a0,	// (0x000196f4) navi_pane_mp_g3

0x0002,

0xf3f7,	// (0x0001e24b) navi_pane_mp_g_ParamLimits

0xf3f7,	// (0x0001e24b) navi_pane_mp_g

0xa8ac,	// (0x00019700) navi_pane_mp_t1

0xa8ba,	// (0x0001970e) navi_pane_mp_t2

0x0002,

0xf3fe,	// (0x0001e252) navi_pane_mp_t

0xa8f6,	// (0x0001974a) navi_pane_vt_g1

0xa8ac,	// (0x00019700) navi_pane_vt_t1

0xa8fe,	// (0x00019752) navi_slider_pane

0xa906,	// (0x0001975a) zooming_pane

0xa90e,	// (0x00019762) navi_slider_pane_g1

0xa917,	// (0x0001976b) navi_slider_pane_g2

0x0006,

0xf405,	// (0x0001e259) navi_slider_pane_g

0xa944,	// (0x00019798) aid_levels_zoom

0xa94c,	// (0x000197a0) zooming_pane_g1

0xa954,	// (0x000197a8) zooming_pane_g2

0xa954,	// (0x000197a8) zooming_pane_g3

0x0002,

0xf414,	// (0x0001e268) zooming_pane_g

0xa95c,	// (0x000197b0) level_10_zoom

0xa965,	// (0x000197b9) level_11_zoom

0xa96e,	// (0x000197c2) level_1_zoom

0xa977,	// (0x000197cb) level_2_zoom

0xa980,	// (0x000197d4) level_3_zoom

0xa989,	// (0x000197dd) level_4_zoom

0xa992,	// (0x000197e6) level_5_zoom

0xa99b,	// (0x000197ef) level_6_zoom

0xa9a4,	// (0x000197f8) level_7_zoom

0xa9ad,	// (0x00019801) level_8_zoom

0xa9b6,	// (0x0001980a) level_9_zoom

0xa9c7,	// (0x0001981b) popup_phob_thumbnail_window_g1

0xa9cf,	// (0x00019823) popup_phob_thumbnail_window_g2

0x0001,

0xf41b,	// (0x0001e26f) popup_phob_thumbnail_window_g

0xbd4d,	// (0x0001aba1) level_1_location

0xbd55,	// (0x0001aba9) level_2_location

0xbd5d,	// (0x0001abb1) level_3_location

0xbd65,	// (0x0001abb9) level_4_location

0xa906,	// (0x0001975a) level_5_location

0x2a74,	// (0x000118c8) mce_icon_pane_g1

0x2a7e,	// (0x000118d2) mce_icon_pane_g2

0x0001,

0xf420,	// (0x0001e274) mce_icon_pane_g

0x2a88,	// (0x000118dc) main_mup_pane_g1_ParamLimits

0x2a88,	// (0x000118dc) main_mup_pane_g1

0x2a9e,	// (0x000118f2) main_mup_pane_g2_ParamLimits

0x2a9e,	// (0x000118f2) main_mup_pane_g2

0x2ab6,	// (0x0001190a) main_mup_pane_g3_ParamLimits

0x2ab6,	// (0x0001190a) main_mup_pane_g3

0x2ace,	// (0x00011922) main_mup_pane_g4_ParamLimits

0x2ace,	// (0x00011922) main_mup_pane_g4

0x2ae6,	// (0x0001193a) main_mup_pane_g5_ParamLimits

0x2ae6,	// (0x0001193a) main_mup_pane_g5

0x2b02,	// (0x00011956) main_mup_pane_g6_ParamLimits

0x2b02,	// (0x00011956) main_mup_pane_g6

0x2b1a,	// (0x0001196e) main_mup_pane_g7_ParamLimits

0x2b1a,	// (0x0001196e) main_mup_pane_g7

0x2b32,	// (0x00011986) main_mup_pane_g8_ParamLimits

0x2b32,	// (0x00011986) main_mup_pane_g8

0x2b4a,	// (0x0001199e) main_mup_pane_g9_ParamLimits

0x2b4a,	// (0x0001199e) main_mup_pane_g9

0x2b64,	// (0x000119b8) main_mup_pane_g10_ParamLimits

0x2b64,	// (0x000119b8) main_mup_pane_g10

0x2b7e,	// (0x000119d2) main_mup_pane_g11_ParamLimits

0x2b7e,	// (0x000119d2) main_mup_pane_g11

0x2b92,	// (0x000119e6) main_mup_pane_g12_ParamLimits

0x2b92,	// (0x000119e6) main_mup_pane_g12

0x2ba8,	// (0x000119fc) main_mup_pane_g13_ParamLimits

0x2ba8,	// (0x000119fc) main_mup_pane_g13

0x000c,

0xf425,	// (0x0001e279) main_mup_pane_g_ParamLimits

0xf425,	// (0x0001e279) main_mup_pane_g

0x2bbc,	// (0x00011a10) main_mup_pane_t1_ParamLimits

0x2bbc,	// (0x00011a10) main_mup_pane_t1

0x2bd6,	// (0x00011a2a) main_mup_pane_t2_ParamLimits

0x2bd6,	// (0x00011a2a) main_mup_pane_t2

0x2bee,	// (0x00011a42) main_mup_pane_t3_ParamLimits

0x2bee,	// (0x00011a42) main_mup_pane_t3

0x2c06,	// (0x00011a5a) main_mup_pane_t4_ParamLimits

0x2c06,	// (0x00011a5a) main_mup_pane_t4

0x2c24,	// (0x00011a78) main_mup_pane_t5_ParamLimits

0x2c24,	// (0x00011a78) main_mup_pane_t5

0x2c39,	// (0x00011a8d) main_mup_pane_t6_ParamLimits

0x2c39,	// (0x00011a8d) main_mup_pane_t6

0x0005,

0xf440,	// (0x0001e294) main_mup_pane_t_ParamLimits

0xf440,	// (0x0001e294) main_mup_pane_t

0x2c4b,	// (0x00011a9f) mup_progress_pane_ParamLimits

0x2c4b,	// (0x00011a9f) mup_progress_pane

0x2c57,	// (0x00011aab) mup_visualizer_pane_ParamLimits

0x2c57,	// (0x00011aab) mup_visualizer_pane

0x2c8b,	// (0x00011adf) mup_volume_pane_ParamLimits

0x2c8b,	// (0x00011adf) mup_volume_pane

0xa9d7,	// (0x0001982b) mup_visualizer_pane_g1_ParamLimits

0xa9d7,	// (0x0001982b) mup_visualizer_pane_g1

0xa9d7,	// (0x0001982b) mup_visualizer_pane_g2_ParamLimits

0xa9d7,	// (0x0001982b) mup_visualizer_pane_g2

0xa83b,	// (0x0001968f) mup_visualizer_pane_g3_ParamLimits

0xa83b,	// (0x0001968f) mup_visualizer_pane_g3

0x0002,

0xf44d,	// (0x0001e2a1) mup_visualizer_pane_g_ParamLimits

0xf44d,	// (0x0001e2a1) mup_visualizer_pane_g

0x9d93,	// (0x00018be7) mup_volume_pane_g1

0xa9ed,	// (0x00019841) mup_volume_pane_g2

0x0001,

0xf454,	// (0x0001e2a8) mup_volume_pane_g

0x9d93,	// (0x00018be7) mup_progress_pane_g1

0xa9f6,	// (0x0001984a) mup_progress_pane_g2

0xa9ff,	// (0x00019853) mup_progress_pane_g3

0x0002,

0xf459,	// (0x0001e2ad) mup_progress_pane_g

0x99b9,	// (0x0001880d) bg_popup_window_pane_cp05

0xaa08,	// (0x0001985c) heading_pane_cp02_ParamLimits

0xaa08,	// (0x0001985c) heading_pane_cp02

0xaa22,	// (0x00019876) list_popup_blid_pane

0xaa2a,	// (0x0001987e) list_blid_sat_info_pane_ParamLimits

0xaa2a,	// (0x0001987e) list_blid_sat_info_pane

0xaa3d,	// (0x00019891) list_blid_sat_info_pane_g1

0xaa45,	// (0x00019899) list_blid_sat_info_pane_t1

0x2da1,	// (0x00011bf5) mup_equalizer_pane_ParamLimits

0x2da1,	// (0x00011bf5) mup_equalizer_pane

0x2dba,	// (0x00011c0e) mup_equalizer_pane_cp1_ParamLimits

0x2dba,	// (0x00011c0e) mup_equalizer_pane_cp1

0x2dd7,	// (0x00011c2b) mup_equalizer_pane_cp2_ParamLimits

0x2dd7,	// (0x00011c2b) mup_equalizer_pane_cp2

0x2df4,	// (0x00011c48) mup_equalizer_pane_cp3_ParamLimits

0x2df4,	// (0x00011c48) mup_equalizer_pane_cp3

0x2e15,	// (0x00011c69) mup_equalizer_pane_cp4_ParamLimits

0x2e15,	// (0x00011c69) mup_equalizer_pane_cp4

0x2e36,	// (0x00011c8a) mup_equalizer_pane_cp5

0x2e4a,	// (0x00011c9e) mup_equalizer_pane_cp6

0x2e5e,	// (0x00011cb2) mup_equalizer_pane_cp7

0xbc6b,	// (0x0001aabf) bg_popup_call_poc_act_pane_g9

0xbc73,	// (0x0001aac7) bg_popup_call_poc_act_pane_g10

0xbc7b,	// (0x0001aacf) bg_popup_call_poc_act_pane_g11

0x000a,

0x9c14,	// (0x00018a68) mup_scale_pane

0x9d93,	// (0x00018be7) mup_scale_pane_g1

0xaa53,	// (0x000198a7) mup_scale_pane_g2

0x0006,

0xf475,	// (0x0001e2c9) mup_scale_pane_g

0xaa77,	// (0x000198cb) msg_data_pane

0xaa7f,	// (0x000198d3) scroll_pane_cp017

0x2e84,	// (0x00011cd8) bg_list_pane_cp04_ParamLimits

0x2e84,	// (0x00011cd8) bg_list_pane_cp04

0xaa87,	// (0x000198db) msg_data_pane_g1

0x2ea8,	// (0x00011cfc) msg_data_pane_g2

0x2eb0,	// (0x00011d04) msg_data_pane_g3

0x2eb8,	// (0x00011d0c) msg_data_pane_g4

0x2ec0,	// (0x00011d14) msg_data_pane_g5

0x2ec8,	// (0x00011d1c) msg_data_pane_g6

0x2ed0,	// (0x00011d24) msg_data_pane_g7

0x0006,

0xf484,	// (0x0001e2d8) msg_data_pane_g

0x2ed8,	// (0x00011d2c) msg_text_pane_ParamLimits

0x2ed8,	// (0x00011d2c) msg_text_pane

0x2eff,	// (0x00011d53) qrid_highlight_pane_cp011_ParamLimits

0x2eff,	// (0x00011d53) qrid_highlight_pane_cp011

0x99b9,	// (0x0001880d) msg_body_pane

0x99b9,	// (0x0001880d) msg_header_pane

0xaa8f,	// (0x000198e3) input_focus_pane_cp07

0xaaa4,	// (0x000198f8) msg_header_pane_t1_ParamLimits

0xaaa4,	// (0x000198f8) msg_header_pane_t1

0xaab6,	// (0x0001990a) msg_header_pane_t2_ParamLimits

0xaab6,	// (0x0001990a) msg_header_pane_t2

0x0001,

0xf498,	// (0x0001e2ec) msg_header_pane_t_ParamLimits

0xf498,	// (0x0001e2ec) msg_header_pane_t

0xaac8,	// (0x0001991c) msg_body_pane_g1

0x2f2e,	// (0x00011d82) msg_body_pane_t1_ParamLimits

0x2f2e,	// (0x00011d82) msg_body_pane_t1

0xaad0,	// (0x00019924) msg_body_pane_t2_ParamLimits

0xaad0,	// (0x00019924) msg_body_pane_t2

0xaae2,	// (0x00019936) msg_body_pane_t3_ParamLimits

0xaae2,	// (0x00019936) msg_body_pane_t3

0x0002,

0xf49d,	// (0x0001e2f1) msg_body_pane_t_ParamLimits

0xf49d,	// (0x0001e2f1) msg_body_pane_t

0x2f99,	// (0x00011ded) main_viewer_pane_g1_ParamLimits

0x2f99,	// (0x00011ded) main_viewer_pane_g1

0x2fa7,	// (0x00011dfb) main_viewer_pane_g2_ParamLimits

0x2fa7,	// (0x00011dfb) main_viewer_pane_g2

0x2fb5,	// (0x00011e09) main_viewer_pane_g3_ParamLimits

0x2fb5,	// (0x00011e09) main_viewer_pane_g3

0x2fc4,	// (0x00011e18) main_viewer_pane_g4_ParamLimits

0x2fc4,	// (0x00011e18) main_viewer_pane_g4

0xab0c,	// (0x00019960) main_viewer_pane_g5_ParamLimits

0xab0c,	// (0x00019960) main_viewer_pane_g5

0xab0c,	// (0x00019960) main_viewer_pane_g7_ParamLimits

0xab0c,	// (0x00019960) main_viewer_pane_g7

0xab1e,	// (0x00019972) main_viewer_pane_g8_ParamLimits

0xab1e,	// (0x00019972) main_viewer_pane_g8

0x0007,

0xf4ad,	// (0x0001e301) main_viewer_pane_g_ParamLimits

0xf4ad,	// (0x0001e301) main_viewer_pane_g

0xab36,	// (0x0001998a) viewer_content_pane_ParamLimits

0xab36,	// (0x0001998a) viewer_content_pane

0x3000,	// (0x00011e54) main_postcard_pane_g1_ParamLimits

0x3000,	// (0x00011e54) main_postcard_pane_g1

0x3016,	// (0x00011e6a) main_postcard_pane_g2_ParamLimits

0x3016,	// (0x00011e6a) main_postcard_pane_g2

0x302c,	// (0x00011e80) main_postcard_pane_g3_ParamLimits

0x302c,	// (0x00011e80) main_postcard_pane_g3

0x0005,

0xf4be,	// (0x0001e312) main_postcard_pane_g_ParamLimits

0xf4be,	// (0x0001e312) main_postcard_pane_g

0x3043,	// (0x00011e97) main_postcard_pane_g4

0xbea1,	// (0x0001acf5) smil_status_volume_pane_g2

0x3086,	// (0x00011eda) postcard_pane_ParamLimits

0x3086,	// (0x00011eda) postcard_pane

0xab44,	// (0x00019998) postcard_pane_g1_ParamLimits

0xab44,	// (0x00019998) postcard_pane_g1

0x30c8,	// (0x00011f1c) postcard_pane_g2_ParamLimits

0x30c8,	// (0x00011f1c) postcard_pane_g2

0x30d4,	// (0x00011f28) postcard_pane_g3_ParamLimits

0x30d4,	// (0x00011f28) postcard_pane_g3

0xab52,	// (0x000199a6) postcard_pane_g4_ParamLimits

0xab52,	// (0x000199a6) postcard_pane_g4

0x30e0,	// (0x00011f34) postcard_pane_g5_ParamLimits

0x30e0,	// (0x00011f34) postcard_pane_g5

0x30f5,	// (0x00011f49) postcard_pane_g6_ParamLimits

0x30f5,	// (0x00011f49) postcard_pane_g6

0xab44,	// (0x00019998) postcard_pane_g7_ParamLimits

0xab44,	// (0x00019998) postcard_pane_g7

0x0006,

0xf4cb,	// (0x0001e31f) postcard_pane_g_ParamLimits

0xf4cb,	// (0x0001e31f) postcard_pane_g

0x3109,	// (0x00011f5d) main_mp2_pane_g1_ParamLimits

0x3109,	// (0x00011f5d) main_mp2_pane_g1

0x3115,	// (0x00011f69) main_mp2_pane_g2_ParamLimits

0x3115,	// (0x00011f69) main_mp2_pane_g2

0x3121,	// (0x00011f75) main_mp2_pane_g3_ParamLimits

0x3121,	// (0x00011f75) main_mp2_pane_g3

0x0002,

0xf4da,	// (0x0001e32e) main_mp2_pane_g_ParamLimits

0xf4da,	// (0x0001e32e) main_mp2_pane_g

0x312d,	// (0x00011f81) main_mp2_pane_t1_ParamLimits

0x312d,	// (0x00011f81) main_mp2_pane_t1

0x3142,	// (0x00011f96) main_mp2_pane_t2_ParamLimits

0x3142,	// (0x00011f96) main_mp2_pane_t2

0x3154,	// (0x00011fa8) main_mp2_pane_t3_ParamLimits

0x3154,	// (0x00011fa8) main_mp2_pane_t3

0x0002,

0xf4e1,	// (0x0001e335) main_mp2_pane_t_ParamLimits

0xf4e1,	// (0x0001e335) main_mp2_pane_t

0xab60,	// (0x000199b4) pec_content_pane_ParamLimits

0xab60,	// (0x000199b4) pec_content_pane

0xa118,	// (0x00018f6c) scroll_pane_cp015

0xab72,	// (0x000199c6) pec_attribute_pane_ParamLimits

0xab72,	// (0x000199c6) pec_attribute_pane

0x3166,	// (0x00011fba) pec_content_pane_g1_ParamLimits

0x3166,	// (0x00011fba) pec_content_pane_g1

0xab82,	// (0x000199d6) pec_content_pane_t1_ParamLimits

0xab82,	// (0x000199d6) pec_content_pane_t1

0xab94,	// (0x000199e8) pec_content_pane_t2_ParamLimits

0xab94,	// (0x000199e8) pec_content_pane_t2

0x0001,

0xf4e8,	// (0x0001e33c) pec_content_pane_t_ParamLimits

0xf4e8,	// (0x0001e33c) pec_content_pane_t

0x3172,	// (0x00011fc6) list_single_graphic_pane_cp01_ParamLimits

0x3172,	// (0x00011fc6) list_single_graphic_pane_cp01

0x9c14,	// (0x00018a68) bg_popup_sub_pane_cp04

0xaba6,	// (0x000199fa) popup_mup_playback_window_g1

0xabb2,	// (0x00019a06) popup_mup_playback_window_t1

0xabc7,	// (0x00019a1b) popup_mup_playback_window_t2

0x0001,

0xf4ed,	// (0x0001e341) popup_mup_playback_window_t

0xabfe,	// (0x00019a52) main_image_pane_g1_ParamLimits

0xabfe,	// (0x00019a52) main_image_pane_g1

0xac41,	// (0x00019a95) scroll_pane_cp018_ParamLimits

0xac41,	// (0x00019a95) scroll_pane_cp018

0xac59,	// (0x00019aad) scroll_pane_cp016_ParamLimits

0xac59,	// (0x00019aad) scroll_pane_cp016

0x3241,	// (0x00012095) smil2_image_pane_ParamLimits

0x3241,	// (0x00012095) smil2_image_pane

0x3275,	// (0x000120c9) smil2_root_pane_ParamLimits

0x3275,	// (0x000120c9) smil2_root_pane

0x32ad,	// (0x00012101) smil2_text_pane_ParamLimits

0x32ad,	// (0x00012101) smil2_text_pane

0x99b9,	// (0x0001880d) bg_list_pane_cp06

0xac95,	// (0x00019ae9) grid_radio_pane

0x99b9,	// (0x0001880d) bg_popup_window_pane_cp06

0xac9d,	// (0x00019af1) main_fmradio_pane_t1

0xa67e,	// (0x000194d2) heading_pane_cp04

0xacab,	// (0x00019aff) main_fmradio_pane_t2

0xbc83,	// (0x0001aad7) popup_cale_lunar_info_window_g1

0xacb9,	// (0x00019b0d) main_fmradio_pane_t3

0xbc8b,	// (0x0001aadf) popup_cale_lunar_info_window_g2

0xacc7,	// (0x00019b1b) main_fmradio_pane_t4

0x0001,

0xacd5,	// (0x00019b29) main_fmradio_pane_t5

0x0004,

0xf5c8,	// (0x0001e41c) popup_cale_lunar_info_window_g

0xf502,	// (0x0001e356) main_fmradio_pane_t

0xace3,	// (0x00019b37) wait_bar_pane_cp03

0xaceb,	// (0x00019b3f) cell_fmradio_pane_ParamLimits

0xaceb,	// (0x00019b3f) cell_fmradio_pane

0xab44,	// (0x00019998) cell_fmradio_pane_g1_ParamLimits

0xab44,	// (0x00019998) cell_fmradio_pane_g1

0x99b9,	// (0x0001880d) grid_highlight_pane_cp011

0xacfe,	// (0x00019b52) poc_content_pane_ParamLimits

0xacfe,	// (0x00019b52) poc_content_pane

0xad10,	// (0x00019b64) scroll_pane_cp019

0x332d,	// (0x00012181) popup_call_poc_act_window_ParamLimits

0x332d,	// (0x00012181) popup_call_poc_act_window

0x3351,	// (0x000121a5) popup_call_poc_inact_window_ParamLimits

0x3351,	// (0x000121a5) popup_call_poc_inact_window

0xf59f,	// (0x0001e3f3) bg_popup_call_poc_act_pane_g

0xbbfb,	// (0x0001aa4f) bg_popup_call_poc_inact_pane_g1

0xbc03,	// (0x0001aa57) bg_popup_call_poc_inact_pane_g2

0xad18,	// (0x00019b6c) popup_call_poc_act_window_g2

0xbc0b,	// (0x0001aa5f) bg_popup_call_poc_inact_pane_g3

0xbc13,	// (0x0001aa67) bg_popup_call_poc_inact_pane_g4

0xbc1b,	// (0x0001aa6f) bg_popup_call_poc_inact_pane_g5

0xad20,	// (0x00019b74) popup_call_poc_act_window_t1_ParamLimits

0xad20,	// (0x00019b74) popup_call_poc_act_window_t1

0xad48,	// (0x00019b9c) popup_call_poc_act_window_t2_ParamLimits

0xad48,	// (0x00019b9c) popup_call_poc_act_window_t2

0xad70,	// (0x00019bc4) popup_call_poc_act_window_t3_ParamLimits

0xad70,	// (0x00019bc4) popup_call_poc_act_window_t3

0xad98,	// (0x00019bec) popup_call_poc_act_window_t4_ParamLimits

0xad98,	// (0x00019bec) popup_call_poc_act_window_t4

0x0003,

0xf50d,	// (0x0001e361) popup_call_poc_act_window_t_ParamLimits

0xf50d,	// (0x0001e361) popup_call_poc_act_window_t

0xbc23,	// (0x0001aa77) bg_popup_call_poc_inact_pane_g6

0xbc2b,	// (0x0001aa7f) bg_popup_call_poc_inact_pane_g7

0xbc33,	// (0x0001aa87) bg_popup_call_poc_inact_pane_g8

0xadaa,	// (0x00019bfe) popup_call_poc_inact_window_g2

0xbc3b,	// (0x0001aa8f) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf58c,	// (0x0001e3e0) bg_popup_call_poc_inact_pane_g

0xadb2,	// (0x00019c06) popup_call_poc_inact_window_t1_ParamLimits

0xadb2,	// (0x00019c06) popup_call_poc_inact_window_t1

0xadc7,	// (0x00019c1b) popup_call_poc_inact_window_t2_ParamLimits

0xadc7,	// (0x00019c1b) popup_call_poc_inact_window_t2

0xaddc,	// (0x00019c30) popup_call_poc_inact_window_t3_ParamLimits

0xaddc,	// (0x00019c30) popup_call_poc_inact_window_t3

0x0002,

0xf516,	// (0x0001e36a) popup_call_poc_inact_window_t_ParamLimits

0xf516,	// (0x0001e36a) popup_call_poc_inact_window_t

0xbe14,	// (0x0001ac68) context_pane_ParamLimits

0x3b68,	// (0x000129bc) signal_pane_ParamLimits

0xa906,	// (0x0001975a) main_call2_pane

0xbded,	// (0x0001ac41) popup_phob_thumbnail2_window_ParamLimits

0xbded,	// (0x0001ac41) popup_phob_thumbnail2_window

0xaaf4,	// (0x00019948) aid_hotspot_pointer_arrow_pane

0xaafc,	// (0x00019950) aid_hotspot_pointer_hand_pane

0x369c,	// (0x000124f0) phob_pre_status_pane_g5

0x1047,	// (0x0000fe9b) cams_zoom_pane_ParamLimits

0x1056,	// (0x0000feaa) image_vga_pane_ParamLimits

0x1070,	// (0x0000fec4) main_camera_pane_g1_ParamLimits

0x1082,	// (0x0000fed6) main_camera_pane_g2_ParamLimits

0x1092,	// (0x0000fee6) main_camera_pane_g3_ParamLimits

0x10a4,	// (0x0000fef8) main_camera_pane_g4_ParamLimits

0x10b6,	// (0x0000ff0a) main_camera_pane_g5_ParamLimits

0x10c8,	// (0x0000ff1c) main_camera_pane_g6_ParamLimits

0x10da,	// (0x0000ff2e) main_camera_pane_g7_ParamLimits

0xf215,	// (0x0001e069) main_camera_pane_g_ParamLimits

0x10ec,	// (0x0000ff40) main_camera_pane_t1_ParamLimits

0x1102,	// (0x0000ff56) main_camera_pane_t2_ParamLimits

0xf226,	// (0x0001e07a) main_camera_pane_t_ParamLimits

0x9c14,	// (0x00018a68) bg_popup_preview_window_pane_cp01_ParamLimits

0x9c14,	// (0x00018a68) bg_popup_preview_window_pane_cp01

0xadf1,	// (0x00019c45) popup_phob_thumbnail2_window_g1_ParamLimits

0xadf1,	// (0x00019c45) popup_phob_thumbnail2_window_g1

0x99b9,	// (0x0001880d) call2_cli_visual_pane

0x3385,	// (0x000121d9) popup_call2_audio_conf_window_ParamLimits

0x3385,	// (0x000121d9) popup_call2_audio_conf_window

0x33a5,	// (0x000121f9) popup_call2_audio_first_window_ParamLimits

0x33a5,	// (0x000121f9) popup_call2_audio_first_window

0x343b,	// (0x0001228f) popup_call2_audio_in_window_ParamLimits

0x343b,	// (0x0001228f) popup_call2_audio_in_window

0x3483,	// (0x000122d7) popup_call2_audio_out_window_ParamLimits

0x3483,	// (0x000122d7) popup_call2_audio_out_window

0x34ed,	// (0x00012341) popup_call2_audio_second_window_ParamLimits

0x34ed,	// (0x00012341) popup_call2_audio_second_window

0x3553,	// (0x000123a7) popup_call2_audio_wait_window_ParamLimits

0x3553,	// (0x000123a7) popup_call2_audio_wait_window

0x99b9,	// (0x0001880d) bg_popup_call2_act_pane_cp03

0x9bf6,	// (0x00018a4a) list_conf_pane_cp

0xadfd,	// (0x00019c51) popup_call2_audio_conf_window_t1

0xae0b,	// (0x00019c5f) list_single_graphic_popup_conf2_pane_ParamLimits

0xae0b,	// (0x00019c5f) list_single_graphic_popup_conf2_pane

0xa712,	// (0x00019566) list_highlight_pane_cp04

0xae1e,	// (0x00019c72) list_single_graphic_popup_conf2_pane_g1

0xa723,	// (0x00019577) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf51d,	// (0x0001e371) list_single_graphic_popup_conf2_pane_g

0xae28,	// (0x00019c7c) list_single_graphic_popup_conf2_pane_t1

0xae36,	// (0x00019c8a) bg_popup_call2_act_pane_cp01_ParamLimits

0xae36,	// (0x00019c8a) bg_popup_call2_act_pane_cp01

0xaec0,	// (0x00019d14) call_type_pane_cp05_ParamLimits

0xaec0,	// (0x00019d14) call_type_pane_cp05

0xaf14,	// (0x00019d68) popup_call2_audio_second_window_g1_ParamLimits

0xaf14,	// (0x00019d68) popup_call2_audio_second_window_g1

0xaf68,	// (0x00019dbc) popup_call2_audio_second_window_g2_ParamLimits

0xaf68,	// (0x00019dbc) popup_call2_audio_second_window_g2

0x0002,

0xf522,	// (0x0001e376) popup_call2_audio_second_window_g_ParamLimits

0xf522,	// (0x0001e376) popup_call2_audio_second_window_g

0xafcd,	// (0x00019e21) popup_call2_audio_second_window_t1_ParamLimits

0xafcd,	// (0x00019e21) popup_call2_audio_second_window_t1

0xb088,	// (0x00019edc) popup_call2_audio_second_window_t2_ParamLimits

0xb088,	// (0x00019edc) popup_call2_audio_second_window_t2

0xb0db,	// (0x00019f2f) popup_call2_audio_second_window_t3_ParamLimits

0xb0db,	// (0x00019f2f) popup_call2_audio_second_window_t3

0x0003,

0xf529,	// (0x0001e37d) popup_call2_audio_second_window_t_ParamLimits

0xf529,	// (0x0001e37d) popup_call2_audio_second_window_t

0x99b9,	// (0x0001880d) bg_popup_call2_in_pane_cp02

0x99c3,	// (0x00018817) call_type_pane_cp04

0x99cb,	// (0x0001881f) popup_call2_audio_wait_window_g1

0x99d3,	// (0x00018827) popup_call2_audio_wait_window_g2

0x0001,

0xf102,	// (0x0001df56) popup_call2_audio_wait_window_g

0x99db,	// (0x0001882f) popup_call2_audio_wait_window_t3

0xb1ce,	// (0x0001a022) bg_popup_call2_act_pane_ParamLimits

0xb1ce,	// (0x0001a022) bg_popup_call2_act_pane

0xb28e,	// (0x0001a0e2) call_type_pane_cp03_ParamLimits

0xb28e,	// (0x0001a0e2) call_type_pane_cp03

0xb2f2,	// (0x0001a146) popup_call2_audio_first_window_g1_ParamLimits

0xb2f2,	// (0x0001a146) popup_call2_audio_first_window_g1

0xb362,	// (0x0001a1b6) popup_call2_audio_first_window_g2_ParamLimits

0xb362,	// (0x0001a1b6) popup_call2_audio_first_window_g2

0xa9d7,	// (0x0001982b) popup_call2_audio_first_window_g3_ParamLimits

0xa9d7,	// (0x0001982b) popup_call2_audio_first_window_g3

0x0004,

0xf532,	// (0x0001e386) popup_call2_audio_first_window_g_ParamLimits

0xf532,	// (0x0001e386) popup_call2_audio_first_window_g

0xb440,	// (0x0001a294) popup_call2_audio_first_window_t1_ParamLimits

0xb440,	// (0x0001a294) popup_call2_audio_first_window_t1

0xb543,	// (0x0001a397) popup_call2_audio_first_window_t4_ParamLimits

0xb543,	// (0x0001a397) popup_call2_audio_first_window_t4

0xb626,	// (0x0001a47a) popup_call2_audio_first_window_t5_ParamLimits

0xb626,	// (0x0001a47a) popup_call2_audio_first_window_t5

0x0003,

0xf53d,	// (0x0001e391) popup_call2_audio_first_window_t_ParamLimits

0xf53d,	// (0x0001e391) popup_call2_audio_first_window_t

0x9c0c,	// (0x00018a60) bg_popup_call2_act_pane_g1

0xbc93,	// (0x0001aae7) popup_cale_lunar_info_window_t1

0xbca1,	// (0x0001aaf5) popup_cale_lunar_info_window_t2

0xbcaf,	// (0x0001ab03) popup_cale_lunar_info_window_t3

0x99b9,	// (0x0001880d) bg_popup_call2_bubble_pane

0xb727,	// (0x0001a57b) bg_popup_call2_in_pane_cp01_ParamLimits

0xb727,	// (0x0001a57b) bg_popup_call2_in_pane_cp01

0x9695,	// (0x000184e9) call_type_pane_cp02

0xb76f,	// (0x0001a5c3) popup_call2_audio_out_window_g1_ParamLimits

0xb76f,	// (0x0001a5c3) popup_call2_audio_out_window_g1

0xb79b,	// (0x0001a5ef) popup_call2_audio_out_window_g2_ParamLimits

0xb79b,	// (0x0001a5ef) popup_call2_audio_out_window_g2

0xb7c3,	// (0x0001a617) popup_call2_audio_out_window_g3_ParamLimits

0xb7c3,	// (0x0001a617) popup_call2_audio_out_window_g3

0x0003,

0xf546,	// (0x0001e39a) popup_call2_audio_out_window_g_ParamLimits

0xf546,	// (0x0001e39a) popup_call2_audio_out_window_g

0xb7fe,	// (0x0001a652) popup_call2_audio_out_window_t1_ParamLimits

0xb7fe,	// (0x0001a652) popup_call2_audio_out_window_t1

0xb85d,	// (0x0001a6b1) popup_call2_audio_out_window_t2_ParamLimits

0xb85d,	// (0x0001a6b1) popup_call2_audio_out_window_t2

0xb8b1,	// (0x0001a705) popup_call2_audio_out_window_t3_ParamLimits

0xb8b1,	// (0x0001a705) popup_call2_audio_out_window_t3

0xb8c7,	// (0x0001a71b) popup_call2_audio_out_window_t4_ParamLimits

0xb8c7,	// (0x0001a71b) popup_call2_audio_out_window_t4

0xb8dd,	// (0x0001a731) popup_call2_audio_out_window_t5_ParamLimits

0xb8dd,	// (0x0001a731) popup_call2_audio_out_window_t5

0x0005,

0xf54f,	// (0x0001e3a3) popup_call2_audio_out_window_t_ParamLimits

0xf54f,	// (0x0001e3a3) popup_call2_audio_out_window_t

0xb941,	// (0x0001a795) bg_popup_call2_in_pane_ParamLimits

0xb941,	// (0x0001a795) bg_popup_call2_in_pane

0xb99d,	// (0x0001a7f1) popup_call2_audio_in_window_g1_ParamLimits

0xb99d,	// (0x0001a7f1) popup_call2_audio_in_window_g1

0xb9d5,	// (0x0001a829) popup_call2_audio_in_window_g2_ParamLimits

0xb9d5,	// (0x0001a829) popup_call2_audio_in_window_g2

0xba0d,	// (0x0001a861) popup_call2_audio_in_window_g3_ParamLimits

0xba0d,	// (0x0001a861) popup_call2_audio_in_window_g3

0x0003,

0xf55c,	// (0x0001e3b0) popup_call2_audio_in_window_g_ParamLimits

0xf55c,	// (0x0001e3b0) popup_call2_audio_in_window_g

0xba65,	// (0x0001a8b9) popup_call2_audio_in_window_t1_ParamLimits

0xba65,	// (0x0001a8b9) popup_call2_audio_in_window_t1

0xbae5,	// (0x0001a939) popup_call2_audio_in_window_t2_ParamLimits

0xbae5,	// (0x0001a939) popup_call2_audio_in_window_t2

0xbb65,	// (0x0001a9b9) popup_call2_audio_in_window_t3_ParamLimits

0xbb65,	// (0x0001a9b9) popup_call2_audio_in_window_t3

0xbb7f,	// (0x0001a9d3) popup_call2_audio_in_window_t4_ParamLimits

0xbb7f,	// (0x0001a9d3) popup_call2_audio_in_window_t4

0xbb91,	// (0x0001a9e5) popup_call2_audio_in_window_t5_ParamLimits

0xbb91,	// (0x0001a9e5) popup_call2_audio_in_window_t5

0xbba6,	// (0x0001a9fa) popup_call2_audio_in_window_t6_ParamLimits

0xbba6,	// (0x0001a9fa) popup_call2_audio_in_window_t6

0x0005,

0xf565,	// (0x0001e3b9) popup_call2_audio_in_window_t_ParamLimits

0xf565,	// (0x0001e3b9) popup_call2_audio_in_window_t

0x9c0c,	// (0x00018a60) bg_popup_call2_in_pane_g1

0xbcbd,	// (0x0001ab11) popup_cale_lunar_info_window_t4

0x0003,

0xf5cd,	// (0x0001e421) popup_cale_lunar_info_window_t

0x9c14,	// (0x00018a68) bg_popup_call2_rect_pane_ParamLimits

0x9c14,	// (0x00018a68) bg_popup_call2_rect_pane

0x99b9,	// (0x0001880d) call2_cli_visual_graphic_pane

0x99b9,	// (0x0001880d) call2_cli_visual_text_pane

0xbeb4,	// (0x0001ad08) smil_status_volume_pane_g3

0x0002,

0x9d93,	// (0x00018be7) call2_cli_visual_graphic_pane_g1

0x9d93,	// (0x00018be7) call2_cli_visual_graphic_pane_g2

0x9d93,	// (0x00018be7) call2_cli_visual_graphic_pane_g3

0x0002,

0xf572,	// (0x0001e3c6) call2_cli_visual_graphic_pane_g

0xbbbb,	// (0x0001aa0f) bg_popup_call2_rect_pane_g1

0x9e3b,	// (0x00018c8f) bg_popup_call2_rect_pane_g2

0xbbc3,	// (0x0001aa17) bg_popup_call2_rect_pane_g3

0xbbcb,	// (0x0001aa1f) bg_popup_call2_rect_pane_g4

0xbbd3,	// (0x0001aa27) bg_popup_call2_rect_pane_g5

0xbbdb,	// (0x0001aa2f) bg_popup_call2_rect_pane_g6

0xbbe3,	// (0x0001aa37) bg_popup_call2_rect_pane_g7

0xbbeb,	// (0x0001aa3f) bg_popup_call2_rect_pane_g8

0xbbf3,	// (0x0001aa47) bg_popup_call2_rect_pane_g9

0x0008,

0xf579,	// (0x0001e3cd) bg_popup_call2_rect_pane_g

0xbbfb,	// (0x0001aa4f) bg_popup_call2_bubble_pane_g1

0xbc03,	// (0x0001aa57) bg_popup_call2_bubble_pane_g2

0xbc0b,	// (0x0001aa5f) bg_popup_call2_bubble_pane_g3

0xbc13,	// (0x0001aa67) bg_popup_call2_bubble_pane_g4

0xbc1b,	// (0x0001aa6f) bg_popup_call2_bubble_pane_g5

0xbc23,	// (0x0001aa77) bg_popup_call2_bubble_pane_g6

0xbc2b,	// (0x0001aa7f) bg_popup_call2_bubble_pane_g7

0xbc33,	// (0x0001aa87) bg_popup_call2_bubble_pane_g8

0xbc3b,	// (0x0001aa8f) bg_popup_call2_bubble_pane_g9

0x0008,

0xf58c,	// (0x0001e3e0) bg_popup_call2_bubble_pane_g

0x099a,	// (0x0000f7ee) aid_cale_week_size_cell_pane

0x111a,	// (0x0000ff6e) aid_cams_cif_uncrop_pane_ParamLimits

0x111a,	// (0x0000ff6e) aid_cams_cif_uncrop_pane

0x12cf,	// (0x00010123) aid_cams_size_cell_ParamLimits

0x12cf,	// (0x00010123) aid_cams_size_cell

0x12e3,	// (0x00010137) grid_cams_pane_ParamLimits

0x12fd,	// (0x00010151) linegrid_cams_pane_ParamLimits

0x14f3,	// (0x00010347) call_video_pane_t1

0x1511,	// (0x00010365) call_video_pane_t2

0x0001,

0xf279,	// (0x0001e0cd) call_video_pane_t

0x1940,	// (0x00010794) aid_cale_month_size_cell_pane_ParamLimits

0x1940,	// (0x00010794) aid_cale_month_size_cell_pane

0xf616,	// (0x0001e46a) smil_status_volume_pane_g

0xbec1,	// (0x0001ad15) volume_smil_pane_ParamLimits

0x953a,	// (0x0001838e) aid_popup2_width_pane

0x08f1,	// (0x0000f745) cell_qdial_pane_g4_ParamLimits

0x08f1,	// (0x0000f745) cell_qdial_pane_g4

0x28b7,	// (0x0001170b) aid_blid_cardinal_pane_ParamLimits

0x28c3,	// (0x00011717) aid_blid_destination_pane_ParamLimits

0x28c3,	// (0x00011717) aid_blid_destination_pane

0x9c14,	// (0x00018a68) bg_popup_call_poc_act_pane_ParamLimits

0x9c14,	// (0x00018a68) bg_popup_call_poc_act_pane

0x9c14,	// (0x00018a68) bg_popup_call_poc_inact_pane_ParamLimits

0x9c14,	// (0x00018a68) bg_popup_call_poc_inact_pane

0xbc43,	// (0x0001aa97) bg_popup_call_poc_act_pane_g1

0xbc4b,	// (0x0001aa9f) bg_popup_call_poc_act_pane_g2

0xbc53,	// (0x0001aaa7) bg_popup_call_poc_act_pane_g3

0xbc13,	// (0x0001aa67) bg_popup_call_poc_act_pane_g4

0xbc1b,	// (0x0001aa6f) bg_popup_call_poc_act_pane_g5

0xbc5b,	// (0x0001aaaf) bg_popup_call_poc_act_pane_g6

0xbc2b,	// (0x0001aa7f) bg_popup_call_poc_act_pane_g7

0xbc63,	// (0x0001aab7) bg_popup_call_poc_act_pane_g8

0x99b9,	// (0x0001880d) main_usb_pane

0xbdc8,	// (0x0001ac1c) popup_cale_lunar_info_window

0x17db,	// (0x0001062f) im_reading_pane_t1_ParamLimits

0xa070,	// (0x00018ec4) list_im_pane_ParamLimits

0xa081,	// (0x00018ed5) scroll_pane_cp07_ParamLimits

0x99b9,	// (0x0001880d) grid_highlight_pane_cp012

0x9c14,	// (0x00018a68) mup_scale_pane_ParamLimits

0xab44,	// (0x00019998) main_usb_pane_g1_ParamLimits

0xab44,	// (0x00019998) main_usb_pane_g1

0x35b1,	// (0x00012405) main_usb_pane_g2_ParamLimits

0x35b1,	// (0x00012405) main_usb_pane_g2

0x0001,

0xf5b6,	// (0x0001e40a) main_usb_pane_g_ParamLimits

0xf5b6,	// (0x0001e40a) main_usb_pane_g

0x35c7,	// (0x0001241b) main_usb_pane_t1_ParamLimits

0x35c7,	// (0x0001241b) main_usb_pane_t1

0x35d9,	// (0x0001242d) main_usb_pane_t2_ParamLimits

0x35d9,	// (0x0001242d) main_usb_pane_t2

0x35eb,	// (0x0001243f) main_usb_pane_t3_ParamLimits

0x35eb,	// (0x0001243f) main_usb_pane_t3

0x35fd,	// (0x00012451) main_usb_pane_t4_ParamLimits

0x35fd,	// (0x00012451) main_usb_pane_t4

0x360f,	// (0x00012463) main_usb_pane_t5_ParamLimits

0x360f,	// (0x00012463) main_usb_pane_t5

0x3621,	// (0x00012475) main_usb_pane_t6_ParamLimits

0x3621,	// (0x00012475) main_usb_pane_t6

0x0005,

0xf5bb,	// (0x0001e40f) main_usb_pane_t_ParamLimits

0x2864,	// (0x000116b8) aid_text_placing

0x286d,	// (0x000116c1) main_location2_pane_t1_ParamLimits

0x287f,	// (0x000116d3) main_location2_pane_t2_ParamLimits

0x2891,	// (0x000116e5) main_location2_pane_t3_ParamLimits

0x28a5,	// (0x000116f9) main_location2_pane_t4_ParamLimits

0x28a5,	// (0x000116f9) main_location2_pane_t4

0xf3da,	// (0x0001e22e) main_location2_pane_t_ParamLimits

0x9c50,	// (0x00018aa4) find_pinb_pane_g2_ParamLimits

0x9c50,	// (0x00018aa4) find_pinb_pane_g2

0x0001,

0xf128,	// (0x0001df7c) find_pinb_pane_g_ParamLimits

0xf128,	// (0x0001df7c) find_pinb_pane_g

0x9c5c,	// (0x00018ab0) find_pinb_pane_t1_ParamLimits

0x9c6e,	// (0x00018ac2) find_pinb_pane_t2_ParamLimits

0xf12d,	// (0x0001df81) find_pinb_pane_t_ParamLimits

0x99b9,	// (0x0001880d) main_call3_pane

0x1e23,	// (0x00010c77) cale_month_day_heading_pane_t1_ParamLimits

0x1ea9,	// (0x00010cfd) cale_month_day_heading_pane_t2_ParamLimits

0x1f3a,	// (0x00010d8e) cale_month_day_heading_pane_t3_ParamLimits

0x1fcb,	// (0x00010e1f) cale_month_day_heading_pane_t4_ParamLimits

0x2064,	// (0x00010eb8) cale_month_day_heading_pane_t5_ParamLimits

0x2105,	// (0x00010f59) cale_month_day_heading_pane_t6_ParamLimits

0x21a6,	// (0x00010ffa) cale_month_day_heading_pane_t7_ParamLimits

0xf2b1,	// (0x0001e105) cale_month_day_heading_pane_t_ParamLimits

0xa2d7,	// (0x0001912b) smil_status_volume_pane

0x30a4,	// (0x00011ef8) postcard_address_pane_ParamLimits

0x30a4,	// (0x00011ef8) postcard_address_pane

0x30b6,	// (0x00011f0a) postcard_message_pane_ParamLimits

0x30b6,	// (0x00011f0a) postcard_message_pane

0x358d,	// (0x000123e1) call2_cli_visual_pane_t1_ParamLimits

0x358d,	// (0x000123e1) call2_cli_visual_pane_t1

0x3d97,	// (0x00012beb) postcard_message_pane_t1_ParamLimits

0x3d97,	// (0x00012beb) postcard_message_pane_t1

0x3d80,	// (0x00012bd4) postcard_address_pane_t1_ParamLimits

0x3d80,	// (0x00012bd4) postcard_address_pane_t1

0x3d6c,	// (0x00012bc0) popup_call3_audio_in_window_ParamLimits

0x3d6c,	// (0x00012bc0) popup_call3_audio_in_window

0x3bf9,	// (0x00012a4d) bg_popup_call3_in_pane_ParamLimits

0x3bf9,	// (0x00012a4d) bg_popup_call3_in_pane

0x3c6d,	// (0x00012ac1) popup_call3_audio_in_window_g1_ParamLimits

0x3c6d,	// (0x00012ac1) popup_call3_audio_in_window_g1

0x3c8d,	// (0x00012ae1) popup_call3_audio_in_window_g2_ParamLimits

0x3c8d,	// (0x00012ae1) popup_call3_audio_in_window_g2

0x3cad,	// (0x00012b01) popup_call3_audio_in_window_g3_ParamLimits

0x3cad,	// (0x00012b01) popup_call3_audio_in_window_g3

0x0003,

0xf61d,	// (0x0001e471) popup_call3_audio_in_window_g_ParamLimits

0xf61d,	// (0x0001e471) popup_call3_audio_in_window_g

0x3cde,	// (0x00012b32) popup_call3_audio_in_window_t1_ParamLimits

0x3cde,	// (0x00012b32) popup_call3_audio_in_window_t1

0x3d1c,	// (0x00012b70) popup_call3_audio_in_window_t2_ParamLimits

0x3d1c,	// (0x00012b70) popup_call3_audio_in_window_t2

0x3d5a,	// (0x00012bae) popup_call3_audio_in_window_t3_ParamLimits

0x3d5a,	// (0x00012bae) popup_call3_audio_in_window_t3

0x0002,

0xf626,	// (0x0001e47a) popup_call3_audio_in_window_t_ParamLimits

0xf626,	// (0x0001e47a) popup_call3_audio_in_window_t

0xa906,	// (0x0001975a) bg_popup_call3_rect_pane

0xbbbb,	// (0x0001aa0f) bg_popup_call3_rect_pane_g1

0x9e3b,	// (0x00018c8f) bg_popup_call3_rect_pane_g2

0xbbc3,	// (0x0001aa17) bg_popup_call3_rect_pane_g3

0xbbcb,	// (0x0001aa1f) bg_popup_call3_rect_pane_g4

0xbbd3,	// (0x0001aa27) bg_popup_call3_rect_pane_g5

0xbbdb,	// (0x0001aa2f) bg_popup_call3_rect_pane_g6

0xbbe3,	// (0x0001aa37) bg_popup_call3_rect_pane_g7

0x2ca1,	// (0x00011af5) mup_visualizer_osc_pane

0xa9e5,	// (0x00019839) mup_visualizer_spec_pane

0x3c29,	// (0x00012a7d) call3_video_qcif_pane_ParamLimits

0x3c29,	// (0x00012a7d) call3_video_qcif_pane

0x3c3a,	// (0x00012a8e) call3_video_qcif_uncrop_pane_ParamLimits

0x3c3a,	// (0x00012a8e) call3_video_qcif_uncrop_pane

0x3c48,	// (0x00012a9c) call3_video_subqcif_pane_ParamLimits

0x3c48,	// (0x00012a9c) call3_video_subqcif_pane

0x3c5c,	// (0x00012ab0) call3_video_subqcif_uncrop_pane_ParamLimits

0x3c5c,	// (0x00012ab0) call3_video_subqcif_uncrop_pane

0x3ccd,	// (0x00012b21) popup_call3_audio_in_window_g4_ParamLimits

0x3ccd,	// (0x00012b21) popup_call3_audio_in_window_g4

0x3be8,	// (0x00012a3c) mup_spec_half_pane

0x3bf1,	// (0x00012a45) mup_spec_half_pane_cp

0xbe74,	// (0x0001acc8) mup_osc_middle_pane

0xbe7d,	// (0x0001acd1) mup_visualizer_osc_pane_g1

0x3bc8,	// (0x00012a1c) mup_spec_bar_pane_ParamLimits

0x3bc8,	// (0x00012a1c) mup_spec_bar_pane

0xbe61,	// (0x0001acb5) mup_spec_bar_pane_g1

0xbe6b,	// (0x0001acbf) mup_spec_bar_pane_g2

0x0001,

0xf611,	// (0x0001e465) mup_spec_bar_pane_g

0x099a,	// (0x0000f7ee) aid_cale_week_size_cell_pane_ParamLimits

0x09b4,	// (0x0000f808) bg_cale_heading_pane_ParamLimits

0x9ec0,	// (0x00018d14) bg_cale_pane_cp01_ParamLimits

0x09d2,	// (0x0000f826) cale_week_corner_pane_ParamLimits

0x09f1,	// (0x0000f845) cale_week_day_heading_pane_ParamLimits

0x0a14,	// (0x0000f868) cale_week_scroll_pane_g1_ParamLimits

0x0a2d,	// (0x0000f881) cale_week_scroll_pane_g2_ParamLimits

0x0a45,	// (0x0000f899) cale_week_scroll_pane_g3_ParamLimits

0x0a5d,	// (0x0000f8b1) cale_week_scroll_pane_g4_ParamLimits

0x0a75,	// (0x0000f8c9) cale_week_scroll_pane_g5_ParamLimits

0x0a91,	// (0x0000f8e5) cale_week_scroll_pane_g6_ParamLimits

0x0ab1,	// (0x0000f905) cale_week_scroll_pane_g7_ParamLimits

0x0ad1,	// (0x0000f925) cale_week_scroll_pane_g8_ParamLimits

0x0af5,	// (0x0000f949) cale_week_scroll_pane_g9_ParamLimits

0x0b0d,	// (0x0000f961) cale_week_scroll_pane_g10_ParamLimits

0x0b25,	// (0x0000f979) cale_week_scroll_pane_g11_ParamLimits

0x0b3d,	// (0x0000f991) cale_week_scroll_pane_g12_ParamLimits

0x0b55,	// (0x0000f9a9) cale_week_scroll_pane_g13_ParamLimits

0x0b55,	// (0x0000f9a9) cale_week_scroll_pane_g14_ParamLimits

0x0b55,	// (0x0000f9a9) cale_week_scroll_pane_g15_ParamLimits

0xf1b9,	// (0x0001e00d) cale_week_scroll_pane_g_ParamLimits

0x0b6d,	// (0x0000f9c1) cale_week_time_pane_ParamLimits

0x0b91,	// (0x0000f9e5) grid_cale_week_pane_ParamLimits

0x9ede,	// (0x00018d32) listscroll_cale_week_pane_t1

0x9ef0,	// (0x00018d44) scroll_pane_cp08_ParamLimits

0x19a1,	// (0x000107f5) cale_month_corner_pane_ParamLimits

0xa2a1,	// (0x000190f5) cale_month_pane_t1

0x1dc1,	// (0x00010c15) cale_month_week_pane_ParamLimits

0x26d5,	// (0x00011529) popup_call_status_window_g1_ParamLimits

0x26e9,	// (0x0001153d) popup_call_status_window_g2_ParamLimits

0x26fd,	// (0x00011551) popup_call_status_window_g3_ParamLimits

0xf361,	// (0x0001e1b5) popup_call_status_window_g_ParamLimits

0xa5fb,	// (0x0001944f) aid_call2_pane

0x2f20,	// (0x00011d74) msg_header_pane_g1

0x30a4,	// (0x00011ef8) postcard_address2_pane_ParamLimits

0x30a4,	// (0x00011ef8) postcard_address2_pane

0x30b6,	// (0x00011f0a) postcard_message2_pane_ParamLimits

0x30b6,	// (0x00011f0a) postcard_message2_pane

0x3b76,	// (0x000129ca) message2_row_pane_ParamLimits

0x3b76,	// (0x000129ca) message2_row_pane

0x3b95,	// (0x000129e9) address2_row_pane_ParamLimits

0x3b95,	// (0x000129e9) address2_row_pane

0xbe2f,	// (0x0001ac83) postcard_message2_row_pane_g1

0xbe37,	// (0x0001ac8b) postcard_message2_row_pane_t1

0xbe2f,	// (0x0001ac83) address2_row_pane_g1

0xbe37,	// (0x0001ac8b) address2_row_pane_t1

0x0fac,	// (0x0000fe00) aid_size_cell_vorec

0x99b9,	// (0x0001880d) main_rss_pane

0x3ba8,	// (0x000129fc) rss_list_single_pane_ParamLimits

0x3ba8,	// (0x000129fc) rss_list_single_pane

0xbe45,	// (0x0001ac99) rss_list_single_pane_t1

0xbe53,	// (0x0001aca7) rss_list_single_pane_t2

0x0001,

0xf60c,	// (0x0001e460) rss_list_single_pane_t

0x99b9,	// (0x0001880d) main_camera2_pane

0x99b9,	// (0x0001880d) main_video2_pane

0x3e10,	// (0x00012c64) cams_zoom_pane_cp2_ParamLimits

0x3e10,	// (0x00012c64) cams_zoom_pane_cp2

0x3e30,	// (0x00012c84) image2_vga_pane_ParamLimits

0x3e30,	// (0x00012c84) image2_vga_pane

0x3e81,	// (0x00012cd5) main_camera2_pane_g1_ParamLimits

0x3e81,	// (0x00012cd5) main_camera2_pane_g1

0x3ea1,	// (0x00012cf5) main_camera2_pane_g2_ParamLimits

0x3ea1,	// (0x00012cf5) main_camera2_pane_g2

0x3ec1,	// (0x00012d15) main_camera2_pane_g3_ParamLimits

0x3ec1,	// (0x00012d15) main_camera2_pane_g3

0x3ee1,	// (0x00012d35) main_camera2_pane_g4_ParamLimits

0x3ee1,	// (0x00012d35) main_camera2_pane_g4

0x3f01,	// (0x00012d55) main_camera2_pane_g5_ParamLimits

0x3f01,	// (0x00012d55) main_camera2_pane_g5

0x3f21,	// (0x00012d75) main_camera2_pane_g6_ParamLimits

0x3f21,	// (0x00012d75) main_camera2_pane_g6

0x3f41,	// (0x00012d95) main_camera2_pane_g7_ParamLimits

0x3f41,	// (0x00012d95) main_camera2_pane_g7

0x3f61,	// (0x00012db5) main_camera2_pane_g8_ParamLimits

0x3f61,	// (0x00012db5) main_camera2_pane_g8

0x0008,

0xf62d,	// (0x0001e481) main_camera2_pane_g_ParamLimits

0xf62d,	// (0x0001e481) main_camera2_pane_g

0x3fa1,	// (0x00012df5) main_camera2_pane_t1_ParamLimits

0x3fa1,	// (0x00012df5) main_camera2_pane_t1

0x3fd6,	// (0x00012e2a) main_camera2_pane_t2_ParamLimits

0x3fd6,	// (0x00012e2a) main_camera2_pane_t2

0x3ffc,	// (0x00012e50) main_camera2_pane_t3_ParamLimits

0x3ffc,	// (0x00012e50) main_camera2_pane_t3

0x405a,	// (0x00012eae) main_camera2_pane_t4_ParamLimits

0x405a,	// (0x00012eae) main_camera2_pane_t4

0x0006,

0xf640,	// (0x0001e494) main_camera2_pane_t_ParamLimits

0xf640,	// (0x0001e494) main_camera2_pane_t

0x40ec,	// (0x00012f40) cams_zoom_pane_cp4_ParamLimits

0x40ec,	// (0x00012f40) cams_zoom_pane_cp4

0x4102,	// (0x00012f56) image2_cif_pane_ParamLimits

0x4102,	// (0x00012f56) image2_cif_pane

0x412d,	// (0x00012f81) image2_subqcif_pane_ParamLimits

0x412d,	// (0x00012f81) image2_subqcif_pane

0x4147,	// (0x00012f9b) main_video2_pane_g1_ParamLimits

0x4147,	// (0x00012f9b) main_video2_pane_g1

0x4161,	// (0x00012fb5) main_video2_pane_g2_ParamLimits

0x4161,	// (0x00012fb5) main_video2_pane_g2

0x4177,	// (0x00012fcb) main_video2_pane_g3_ParamLimits

0x4177,	// (0x00012fcb) main_video2_pane_g3

0x418d,	// (0x00012fe1) main_video2_pane_g4_ParamLimits

0x418d,	// (0x00012fe1) main_video2_pane_g4

0x41a3,	// (0x00012ff7) main_video2_pane_g5_ParamLimits

0x41a3,	// (0x00012ff7) main_video2_pane_g5

0x41b9,	// (0x0001300d) main_video2_pane_g6_ParamLimits

0x41b9,	// (0x0001300d) main_video2_pane_g6

0x0005,

0xf64f,	// (0x0001e4a3) main_video2_pane_g_ParamLimits

0xf64f,	// (0x0001e4a3) main_video2_pane_g

0x41d3,	// (0x00013027) main_video2_pane_t1_ParamLimits

0x41d3,	// (0x00013027) main_video2_pane_t1

0x41f7,	// (0x0001304b) main_video2_pane_t2_ParamLimits

0x41f7,	// (0x0001304b) main_video2_pane_t2

0x4245,	// (0x00013099) main_video2_pane_t3_ParamLimits

0x4245,	// (0x00013099) main_video2_pane_t3

0x0002,

0xf65c,	// (0x0001e4b0) main_video2_pane_t_ParamLimits

0xf65c,	// (0x0001e4b0) main_video2_pane_t

0x36dc,	// (0x00012530) call_muted_g2

0x0001,

0xf5fe,	// (0x0001e452) call_muted_g

0x99b9,	// (0x0001880d) main_mup2_pane

0x428d,	// (0x000130e1) main_mup2_pane_g1_ParamLimits

0x428d,	// (0x000130e1) main_mup2_pane_g1

0x4299,	// (0x000130ed) main_mup2_pane_g2_ParamLimits

0x4299,	// (0x000130ed) main_mup2_pane_g2

0xbfe5,	// (0x0001ae39) main_mup_pane_g13_cp1

0xbfed,	// (0x0001ae41) mup_volume_pane_cp1

0x42b5,	// (0x00013109) main_mup2_pane_g4_ParamLimits

0x42b5,	// (0x00013109) main_mup2_pane_g4

0x42c7,	// (0x0001311b) main_mup2_pane_g5_ParamLimits

0x42c7,	// (0x0001311b) main_mup2_pane_g5

0x42d9,	// (0x0001312d) main_mup2_pane_g6_ParamLimits

0x42d9,	// (0x0001312d) main_mup2_pane_g6

0x42eb,	// (0x0001313f) main_mup2_pane_g7_ParamLimits

0x42eb,	// (0x0001313f) main_mup2_pane_g7

0x0006,

0xf663,	// (0x0001e4b7) main_mup2_pane_g_ParamLimits

0xf663,	// (0x0001e4b7) main_mup2_pane_g

0x4303,	// (0x00013157) main_mup2_pane_t1_ParamLimits

0x4303,	// (0x00013157) main_mup2_pane_t1

0x4319,	// (0x0001316d) main_mup2_pane_t2_ParamLimits

0x4319,	// (0x0001316d) main_mup2_pane_t2

0x432f,	// (0x00013183) main_mup2_pane_t3_ParamLimits

0x432f,	// (0x00013183) main_mup2_pane_t3

0x4345,	// (0x00013199) main_mup2_pane_t4_ParamLimits

0x4345,	// (0x00013199) main_mup2_pane_t4

0x435d,	// (0x000131b1) main_mup2_pane_t5_ParamLimits

0x435d,	// (0x000131b1) main_mup2_pane_t5

0x4375,	// (0x000131c9) main_mup2_pane_t6_ParamLimits

0x4375,	// (0x000131c9) main_mup2_pane_t6

0x0005,

0xf672,	// (0x0001e4c6) main_mup2_pane_t_ParamLimits

0xf672,	// (0x0001e4c6) main_mup2_pane_t

0x43a5,	// (0x000131f9) mup2_visualizer_pane_ParamLimits

0x43a5,	// (0x000131f9) mup2_visualizer_pane

0x43d3,	// (0x00013227) mup_progress_pane_cp_ParamLimits

0x43d3,	// (0x00013227) mup_progress_pane_cp

0xbfc7,	// (0x0001ae1b) mup_volume_pane_cp_ParamLimits

0xbfc7,	// (0x0001ae1b) mup_volume_pane_cp

0x43e7,	// (0x0001323b) mup2_visualizer_pane_g1_ParamLimits

0x43e7,	// (0x0001323b) mup2_visualizer_pane_g1

0xbf06,	// (0x0001ad5a) mup2_visualizer_pane_g2_ParamLimits

0xbf06,	// (0x0001ad5a) mup2_visualizer_pane_g2

0x43fe,	// (0x00013252) mup2_visualizer_pane_g3_ParamLimits

0x43fe,	// (0x00013252) mup2_visualizer_pane_g3

0x0002,

0xf67f,	// (0x0001e4d3) mup2_visualizer_pane_g_ParamLimits

0xf67f,	// (0x0001e4d3) mup2_visualizer_pane_g

0xac8d,	// (0x00019ae1) aid_size_cell_fmradio

0x388e,	// (0x000126e2) aid_height_parent_landcape

0xa0ff,	// (0x00018f53) wml_content_pane_cp

0xa107,	// (0x00018f5b) wml_tabs_pane

0xa110,	// (0x00018f64) popup_wml_miniature_window

0xa118,	// (0x00018f6c) scroll_pane_cp021

0xa12c,	// (0x00018f80) wml_content_pane_comp8

0x99b9,	// (0x0001880d) bg_popup_sub_pane_cp05

0xbf24,	// (0x0001ad78) popup_wml_miniature_window_g1

0xbf2c,	// (0x0001ad80) wml_miniature_view_pane

0x440a,	// (0x0001325e) aid_size_wml_view

0x4412,	// (0x00013266) wml_miniature_view_pane_g1

0x441b,	// (0x0001326f) wml_miniature_view_pane_g2

0x4424,	// (0x00013278) wml_miniature_view_pane_g3

0x442c,	// (0x00013280) wml_miniature_view_pane_g4

0x4434,	// (0x00013288) wml_miniature_view_pane_g5

0x443c,	// (0x00013290) wml_miniature_view_pane_g6

0x4444,	// (0x00013298) wml_miniature_view_pane_g7

0x444c,	// (0x000132a0) wml_miniature_view_pane_g8

0x0007,

0xf686,	// (0x0001e4da) wml_miniature_view_pane_g

0xbf34,	// (0x0001ad88) background_graphic_ParamLimits

0xbf34,	// (0x0001ad88) background_graphic

0xbf40,	// (0x0001ad94) wml_tabs_2_pane

0xbf49,	// (0x0001ad9d) wml_tabs_3_pane_ParamLimits

0xbf49,	// (0x0001ad9d) wml_tabs_3_pane

0xbf5b,	// (0x0001adaf) wml_tabs_4_pane_ParamLimits

0xbf5b,	// (0x0001adaf) wml_tabs_4_pane

0xbf71,	// (0x0001adc5) wml_tabs_5_pane_ParamLimits

0xbf71,	// (0x0001adc5) wml_tabs_5_pane

0xbf8b,	// (0x0001addf) wml_tabs_pane_g2_ParamLimits

0xbf8b,	// (0x0001addf) wml_tabs_pane_g2

0xbf9f,	// (0x0001adf3) wml_tabs_pane_g3_ParamLimits

0xbf9f,	// (0x0001adf3) wml_tabs_pane_g3

0x4454,	// (0x000132a8) wml_tabs_2_active_pane_ParamLimits

0x4454,	// (0x000132a8) wml_tabs_2_active_pane

0x4468,	// (0x000132bc) wml_tabs_2_passive_pane_ParamLimits

0x4468,	// (0x000132bc) wml_tabs_2_passive_pane

0x447c,	// (0x000132d0) wml_tabs_3_active_pane_cp_ParamLimits

0x447c,	// (0x000132d0) wml_tabs_3_active_pane_cp

0x4491,	// (0x000132e5) wml_tabs_3_passive_pane_ParamLimits

0x4491,	// (0x000132e5) wml_tabs_3_passive_pane

0x44a4,	// (0x000132f8) wml_tabs_3_passive_pane_cp_ParamLimits

0x44a4,	// (0x000132f8) wml_tabs_3_passive_pane_cp

0x44bb,	// (0x0001330f) tabs_4_active_pane

0x44c3,	// (0x00013317) tabs_4_passive_pane

0x44cd,	// (0x00013321) tabs_4_passive_pane_cp

0x44d5,	// (0x00013329) tabs_4_passive_pane_cp2

0x35a9,	// (0x000123fd) aid_height_text

0x2c73,	// (0x00011ac7) mup_volume_cont_pane_ParamLimits

0x2c73,	// (0x00011ac7) mup_volume_cont_pane

0x059d,	// (0x0000f3f1) aid_size_cell_pinb

0x05a7,	// (0x0000f3fb) aid_size_list_pinb

0x43bf,	// (0x00013213) mup2_volume_cont_pane_ParamLimits

0x43bf,	// (0x00013213) mup2_volume_cont_pane

0xbfb3,	// (0x0001ae07) mup2_volume_cont_pane_g1_ParamLimits

0xbfb3,	// (0x0001ae07) mup2_volume_cont_pane_g1

0x025f,	// (0x0000f0b3) aid_size_cell_touch_ParamLimits

0x025f,	// (0x0000f0b3) aid_size_cell_touch

0x048c,	// (0x0000f2e0) touch_pane_ParamLimits

0x048c,	// (0x0000f2e0) touch_pane

0x9528,	// (0x0001837c) main_rss2_pane

0xbff5,	// (0x0001ae49) listscroll_rss2_pane

0xbffe,	// (0x0001ae52) rss2_navigation_pane

0xc006,	// (0x0001ae5a) list_rss2_pane

0xa7bd,	// (0x00019611) scroll_pane_cp22

0xc00e,	// (0x0001ae62) rss2_navigation_pane_g1

0xc017,	// (0x0001ae6b) rss2_navigation_pane_g2

0xc01f,	// (0x0001ae73) rss2_navigation_pane_g3

0x0002,

0xf697,	// (0x0001e4eb) rss2_navigation_pane_g

0xc027,	// (0x0001ae7b) rss2_navigation_pane_t1

0x44df,	// (0x00013333) rss2_list_single_pane_ParamLimits

0x44df,	// (0x00013333) rss2_list_single_pane

0xc035,	// (0x0001ae89) rss2_list_single_pane_t2

0xc043,	// (0x0001ae97) rss2_list_single_pane_t3_ParamLimits

0xc043,	// (0x0001ae97) rss2_list_single_pane_t3

0xc060,	// (0x0001aeb4) rss2_list_single_pane_t4

0x2468,	// (0x000112bc) smil_status_pane_g1

0x9598,	// (0x000183ec) main_image2_pane_ParamLimits

0x9598,	// (0x000183ec) main_image2_pane

0x3f81,	// (0x00012dd5) main_camera2_pane_g9_ParamLimits

0x3f81,	// (0x00012dd5) main_camera2_pane_g9

0x40af,	// (0x00012f03) main_camera2_pane_t5_ParamLimits

0x40af,	// (0x00012f03) main_camera2_pane_t5

0xbed6,	// (0x0001ad2a) main_camera2_pane_t6_ParamLimits

0xbed6,	// (0x0001ad2a) main_camera2_pane_t6

0x44f6,	// (0x0001334a) main_image2_pane_g1_ParamLimits

0x44f6,	// (0x0001334a) main_image2_pane_g1

0x32e3,	// (0x00012137) smil2_video_pane_ParamLimits

0x32e3,	// (0x00012137) smil2_video_pane

0x9546,	// (0x0001839a) aid_zoom_text_primary_cp

0x958e,	// (0x000183e2) popup_preview_fixed_window

0xa068,	// (0x00018ebc) im_reading_pane_g1

0x3df8,	// (0x00012c4c) cams2_bc_adjust_pane_cp_ParamLimits

0x3df8,	// (0x00012c4c) cams2_bc_adjust_pane_cp

0x40de,	// (0x00012f32) cams2_bc_adjust_pane_ParamLimits

0x40de,	// (0x00012f32) cams2_bc_adjust_pane

0xc06e,	// (0x0001aec2) cams2_bc_adjust_pane_g1

0xc076,	// (0x0001aeca) cams2_slider_pane

0xc07f,	// (0x0001aed3) cams2_slider_pane_g1

0xc088,	// (0x0001aedc) cams2_slider_pane_g2

0x0006,

0xf69e,	// (0x0001e4f2) cams2_slider_pane_g

0x067f,	// (0x0000f4d3) calc_display_pane_ParamLimits

0x06a7,	// (0x0000f4fb) calc_paper_pane_ParamLimits

0x06ca,	// (0x0000f51e) grid_calc_pane_ParamLimits

0xa661,	// (0x000194b5) popup_clock_digital_window_t1_ParamLimits

0xac2a,	// (0x00019a7e) main_image_pane_t1

0x0661,	// (0x0000f4b5) aid_size_cell_calc_ParamLimits

0x0661,	// (0x0000f4b5) aid_size_cell_calc

0x38d4,	// (0x00012728) popup_blid_sat_info2_window_ParamLimits

0x38d4,	// (0x00012728) popup_blid_sat_info2_window

0xc0aa,	// (0x0001aefe) aid_size_cell_blid

0xc0b2,	// (0x0001af06) bg_popup_window_pane_cp07

0xc0d5,	// (0x0001af29) grid_popup_blid_pane

0xc0df,	// (0x0001af33) heading_pane_cp05_ParamLimits

0xc0df,	// (0x0001af33) heading_pane_cp05

0xc1a9,	// (0x0001affd) cell_popup_blid_pane_ParamLimits

0xc1a9,	// (0x0001affd) cell_popup_blid_pane

0xc1cf,	// (0x0001b023) cell_popup_blid_pane_g1

0xc1d7,	// (0x0001b02b) cell_popup_blid_pane_t1

0x438f,	// (0x000131e3) mup2_indicator_pane_ParamLimits

0x438f,	// (0x000131e3) mup2_indicator_pane

0xa906,	// (0x0001975a) mup2_visualizer_osc_pane

0xbf12,	// (0x0001ad66) mup2_visualizer_spec_pane_ParamLimits

0xbf12,	// (0x0001ad66) mup2_visualizer_spec_pane

0x450c,	// (0x00013360) mup2_spec_half_pane

0x4515,	// (0x00013369) mup2_spec_half_pane_cp

0x451d,	// (0x00013371) mup2_spec_bar_pane_ParamLimits

0x451d,	// (0x00013371) mup2_spec_bar_pane

0xbe61,	// (0x0001acb5) mup2_spec_bar_pane_g1

0xbe6b,	// (0x0001acbf) mup2_spec_bar_pane_g2

0x0001,

0xf611,	// (0x0001e465) mup2_spec_bar_pane_g

0x453d,	// (0x00013391) mup2_osc_middle_pane

0xbe7d,	// (0x0001acd1) mup2_visualizer_osc_pane_g1

0x95c6,	// (0x0001841a) popup_number_entry_window_t1_ParamLimits

0x95d9,	// (0x0001842d) popup_number_entry_window_t2_ParamLimits

0x95eb,	// (0x0001843f) popup_number_entry_window_t3_ParamLimits

0x04de,	// (0x0000f332) popup_number_entry_window_t5_ParamLimits

0x04de,	// (0x0000f332) popup_number_entry_window_t5

0xf0d3,	// (0x0001df27) popup_number_entry_window_t_ParamLimits

0x95fd,	// (0x00018451) text_title_cp2_ParamLimits

0xab04,	// (0x00019958) aid_hotspot_pointer_text2_pane

0xab2a,	// (0x0001997e) main_viewer_pane_g9_ParamLimits

0xab2a,	// (0x0001997e) main_viewer_pane_g9

0xa2a1,	// (0x000190f5) cale_month_pane_t1_ParamLimits

0xa30c,	// (0x00019160) bg_cale_pane_ParamLimits

0xa324,	// (0x00019178) list_cale_pane_ParamLimits

0xa335,	// (0x00019189) listscroll_cale_day_pane_t1

0xa347,	// (0x0001919b) scroll_pane_cp09_ParamLimits

0x2ca9,	// (0x00011afd) main_mup_eq_pane_t1_ParamLimits

0x2ca9,	// (0x00011afd) main_mup_eq_pane_t1

0x2cc3,	// (0x00011b17) main_mup_eq_pane_t2_ParamLimits

0x2cc3,	// (0x00011b17) main_mup_eq_pane_t2

0x2cdd,	// (0x00011b31) main_mup_eq_pane_t3_ParamLimits

0x2cdd,	// (0x00011b31) main_mup_eq_pane_t3

0x2cf9,	// (0x00011b4d) main_mup_eq_pane_t4_ParamLimits

0x2cf9,	// (0x00011b4d) main_mup_eq_pane_t4

0x2d15,	// (0x00011b69) main_mup_eq_pane_t5_ParamLimits

0x2d15,	// (0x00011b69) main_mup_eq_pane_t5

0x2d31,	// (0x00011b85) main_mup_eq_pane_t6_ParamLimits

0x2d31,	// (0x00011b85) main_mup_eq_pane_t6

0x2d45,	// (0x00011b99) main_mup_eq_pane_t7_ParamLimits

0x2d45,	// (0x00011b99) main_mup_eq_pane_t7

0x2d59,	// (0x00011bad) main_mup_eq_pane_t8_ParamLimits

0x2d59,	// (0x00011bad) main_mup_eq_pane_t8

0x2d6d,	// (0x00011bc1) main_mup_eq_pane_t9_ParamLimits

0x2d6d,	// (0x00011bc1) main_mup_eq_pane_t9

0x2d87,	// (0x00011bdb) main_mup_eq_pane_t10_ParamLimits

0x2d87,	// (0x00011bdb) main_mup_eq_pane_t10

0x0009,

0xf460,	// (0x0001e2b4) main_mup_eq_pane_t_ParamLimits

0xf460,	// (0x0001e2b4) main_mup_eq_pane_t

0x2e36,	// (0x00011c8a) mup_equalizer_pane_cp5_ParamLimits

0x2e4a,	// (0x00011c9e) mup_equalizer_pane_cp6_ParamLimits

0x2e5e,	// (0x00011cb2) mup_equalizer_pane_cp7_ParamLimits

0x9528,	// (0x0001837c) main_gallery_pane

0xbe86,	// (0x0001acda) smil2_volume_pane

0xbe8e,	// (0x0001ace2) smil_status_volume_pane_g1_ParamLimits

0xbea1,	// (0x0001acf5) smil_status_volume_pane_g2_ParamLimits

0xbeb4,	// (0x0001ad08) smil_status_volume_pane_g3_ParamLimits

0xf616,	// (0x0001e46a) smil_status_volume_pane_g_ParamLimits

0xc0b2,	// (0x0001af06) bg_popup_window_pane_cp07_ParamLimits

0xc0c0,	// (0x0001af14) blid_firmament_pane

0x4546,	// (0x0001339a) aid_size_cell_gallery_ParamLimits

0x4546,	// (0x0001339a) aid_size_cell_gallery

0x455c,	// (0x000133b0) grid_gallery_pane_ParamLimits

0x455c,	// (0x000133b0) grid_gallery_pane

0x4575,	// (0x000133c9) cell_gallery_pane_ParamLimits

0x4575,	// (0x000133c9) cell_gallery_pane

0xc1e5,	// (0x0001b039) bg_cell_gallery_focus_pane_ParamLimits

0xc1e5,	// (0x0001b039) bg_cell_gallery_focus_pane

0xc1f7,	// (0x0001b04b) cell_gallery_pane_g1_ParamLimits

0xc1f7,	// (0x0001b04b) cell_gallery_pane_g1

0x45be,	// (0x00013412) cell_gallery_pane_g2_ParamLimits

0x45be,	// (0x00013412) cell_gallery_pane_g2

0x45cb,	// (0x0001341f) cell_gallery_pane_g3_ParamLimits

0x45cb,	// (0x0001341f) cell_gallery_pane_g3

0xc203,	// (0x0001b057) cell_gallery_pane_g4_ParamLimits

0xc203,	// (0x0001b057) cell_gallery_pane_g4

0x0003,

0xf6c4,	// (0x0001e518) cell_gallery_pane_g_ParamLimits

0xf6c4,	// (0x0001e518) cell_gallery_pane_g

0xc20f,	// (0x0001b063) bg_cell_gallery_focus_pane_g1

0xc217,	// (0x0001b06b) bg_cell_gallery_focus_pane_g2

0xc21f,	// (0x0001b073) bg_cell_gallery_focus_pane_g3

0xc227,	// (0x0001b07b) bg_cell_gallery_focus_pane_g4

0xc22f,	// (0x0001b083) bg_cell_gallery_focus_pane_g5

0xc237,	// (0x0001b08b) bg_cell_gallery_focus_pane_g6

0xc23f,	// (0x0001b093) bg_cell_gallery_focus_pane_g7

0xc247,	// (0x0001b09b) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6cd,	// (0x0001e521) bg_cell_gallery_focus_pane_g

0xc24f,	// (0x0001b0a3) aid_firma_cardinal

0xc263,	// (0x0001b0b7) blid_firmament_pane_t1

0xc27a,	// (0x0001b0ce) blid_firmament_pane_t2

0xc291,	// (0x0001b0e5) blid_firmament_pane_t3

0xc2a8,	// (0x0001b0fc) blid_firmament_pane_t4

0x0003,

0xf6de,	// (0x0001e532) blid_firmament_pane_t

0xc2bf,	// (0x0001b113) blid_sat_info_pane

0xc2cf,	// (0x0001b123) blid_sat_info_pane_g1

0xc2cf,	// (0x0001b123) blid_sat_info_pane_g2

0x0001,

0xf6e7,	// (0x0001e53b) blid_sat_info_pane_g

0xc2d9,	// (0x0001b12d) blid_sat_info_pane_t1

0xc2e7,	// (0x0001b13b) smil2_volume_content_pane

0xc2f0,	// (0x0001b144) smil2_volume_pane_g1

0x9dbf,	// (0x00018c13) smil2_volume_content_pane_g1

0xc2f8,	// (0x0001b14c) smil2_volume_content_pane_g2

0xc301,	// (0x0001b155) smil2_volume_content_pane_g3

0xc30a,	// (0x0001b15e) smil2_volume_content_pane_g4

0xc313,	// (0x0001b167) smil2_volume_content_pane_g5

0xc31c,	// (0x0001b170) smil2_volume_content_pane_g6

0xc325,	// (0x0001b179) smil2_volume_content_pane_g7

0xc32e,	// (0x0001b182) smil2_volume_content_pane_g8

0xc337,	// (0x0001b18b) smil2_volume_content_pane_g9

0xc340,	// (0x0001b194) smil2_volume_content_pane_g10

0x0009,

0xf6ec,	// (0x0001e540) smil2_volume_content_pane_g

0x0c45,	// (0x0000fa99) cale_week_day_heading_pane_t1_ParamLimits

0x0c8f,	// (0x0000fae3) cale_week_day_heading_pane_t2_ParamLimits

0x0cde,	// (0x0000fb32) cale_week_day_heading_pane_t3_ParamLimits

0x0d2d,	// (0x0000fb81) cale_week_day_heading_pane_t4_ParamLimits

0x0d7c,	// (0x0000fbd0) cale_week_day_heading_pane_t5_ParamLimits

0x0dd3,	// (0x0000fc27) cale_week_day_heading_pane_t6_ParamLimits

0x0e2a,	// (0x0000fc7e) cale_week_day_heading_pane_t7_ParamLimits

0xf1d8,	// (0x0001e02c) cale_week_day_heading_pane_t_ParamLimits

0x9f0d,	// (0x00018d61) bg_cale_side_pane_ParamLimits

0x0e74,	// (0x0000fcc8) cale_week_time_pane_t1_ParamLimits

0x0e8e,	// (0x0000fce2) cale_week_time_pane_t2_ParamLimits

0x0ea8,	// (0x0000fcfc) cale_week_time_pane_t3_ParamLimits

0x0ec2,	// (0x0000fd16) cale_week_time_pane_t4_ParamLimits

0x0edc,	// (0x0000fd30) cale_week_time_pane_t5_ParamLimits

0x0ef6,	// (0x0000fd4a) cale_week_time_pane_t6_ParamLimits

0x0f10,	// (0x0000fd64) cale_week_time_pane_t7_ParamLimits

0x0f30,	// (0x0000fd84) cale_week_time_pane_t8_ParamLimits

0xf1e7,	// (0x0001e03b) cale_week_time_pane_t_ParamLimits

0x0f50,	// (0x0000fda4) cell_cale_week_pane_g2_ParamLimits

0x9f0d,	// (0x00018d61) bg_cale_side_pane_cp01_ParamLimits

0x224f,	// (0x000110a3) cale_month_week_pane_t1_ParamLimits

0x2268,	// (0x000110bc) cale_month_week_pane_t2_ParamLimits

0x2281,	// (0x000110d5) cale_month_week_pane_t3_ParamLimits

0x229a,	// (0x000110ee) cale_month_week_pane_t4_ParamLimits

0x22b3,	// (0x00011107) cale_month_week_pane_t5_ParamLimits

0x22cc,	// (0x00011120) cale_month_week_pane_t6_ParamLimits

0xf2c0,	// (0x0001e114) cale_month_week_pane_t_ParamLimits

0xa2b3,	// (0x00019107) cell_cale_month_pane_g1_ParamLimits

0x9528,	// (0x0001837c) main_cale_event_viewer_pane

0x9528,	// (0x0001837c) listscroll_cale_event_viewer_pane

0xc349,	// (0x0001b19d) list_cale_ev_pane

0xc351,	// (0x0001b1a5) scroll_pane_cp023

0xc35d,	// (0x0001b1b1) field_cale_ev_pane_ParamLimits

0xc35d,	// (0x0001b1b1) field_cale_ev_pane

0xc379,	// (0x0001b1cd) field_cale_ev_content_pane_ParamLimits

0xc379,	// (0x0001b1cd) field_cale_ev_content_pane

0xc385,	// (0x0001b1d9) field_cale_ev_pane_g1_ParamLimits

0xc385,	// (0x0001b1d9) field_cale_ev_pane_g1

0xc391,	// (0x0001b1e5) field_cale_ev_pane_g2_ParamLimits

0xc391,	// (0x0001b1e5) field_cale_ev_pane_g2

0xc3a9,	// (0x0001b1fd) field_cale_ev_pane_g3_ParamLimits

0xc3a9,	// (0x0001b1fd) field_cale_ev_pane_g3

0x0002,

0xf701,	// (0x0001e555) field_cale_ev_pane_g_ParamLimits

0xf701,	// (0x0001e555) field_cale_ev_pane_g

0xc3c1,	// (0x0001b215) field_cale_ev_pane_t1_ParamLimits

0xc3c1,	// (0x0001b215) field_cale_ev_pane_t1

0xc3d8,	// (0x0001b22c) field_cale_ev_content_pane_t1_ParamLimits

0xc3d8,	// (0x0001b22c) field_cale_ev_content_pane_t1

0x2f15,	// (0x00011d69) bg_button_pane_cp01

0x0988,	// (0x0000f7dc) listscroll_cale_week_pane_ParamLimits

0x9eb7,	// (0x00018d0b) popup_toolbar_window_cp01

0x9ede,	// (0x00018d32) listscroll_cale_week_pane_t1_ParamLimits

0x0988,	// (0x0000f7dc) listscroll_cale_day_pane_ParamLimits

0x9eb7,	// (0x00018d0b) popup_toolbar_window_cp02

0xa335,	// (0x00019189) listscroll_cale_day_pane_t1_ParamLimits

0x0988,	// (0x0000f7dc) main_cale_month_pane_ParamLimits

0xbdff,	// (0x0001ac53) popup_toolbar_window_cp03_ParamLimits

0xbdff,	// (0x0001ac53) popup_toolbar_window_cp03

0x31a7,	// (0x00011ffb) main_image_pane_g2_ParamLimits

0x31a7,	// (0x00011ffb) main_image_pane_g2

0x31b8,	// (0x0001200c) main_image_pane_g3_ParamLimits

0x31b8,	// (0x0001200c) main_image_pane_g3

0x0002,

0xf4f2,	// (0x0001e346) main_image_pane_g_ParamLimits

0xf4f2,	// (0x0001e346) main_image_pane_g

0xac2a,	// (0x00019a7e) main_image_pane_t1_ParamLimits

0x31c9,	// (0x0001201d) main_image_pane_t2_ParamLimits

0x31c9,	// (0x0001201d) main_image_pane_t2

0x31db,	// (0x0001202f) main_image_pane_t3_ParamLimits

0x31db,	// (0x0001202f) main_image_pane_t3

0x3203,	// (0x00012057) main_image_pane_t4_ParamLimits

0x3203,	// (0x00012057) main_image_pane_t4

0x0003,

0xf4f9,	// (0x0001e34d) main_image_pane_t_ParamLimits

0xf4f9,	// (0x0001e34d) main_image_pane_t

0x3223,	// (0x00012077) popup_image_details_window_cp01

0x322d,	// (0x00012081) popup_toobar_trans_pane_cp01_ParamLimits

0x322d,	// (0x00012081) popup_toobar_trans_pane_cp01

0x39ab,	// (0x000127ff) popup_image_details_window_ParamLimits

0x39ab,	// (0x000127ff) popup_image_details_window

0xbdd2,	// (0x0001ac26) popup_image_focus_window

0x3db2,	// (0x00012c06) camera2_autofocus_pane_ParamLimits

0x3db2,	// (0x00012c06) camera2_autofocus_pane

0x9528,	// (0x0001837c) bg_popup_sub_pane_cp06

0xc3f5,	// (0x0001b249) popup_image_focus_window_g1

0xc3fd,	// (0x0001b251) popup_image_focus_window_g2

0xc405,	// (0x0001b259) popup_image_focus_window_g3

0xc40d,	// (0x0001b261) popup_image_focus_window_g4

0x0003,

0xf708,	// (0x0001e55c) popup_image_focus_window_g

0xc415,	// (0x0001b269) popup_image_focus_window_t1

0xc423,	// (0x0001b277) popup_image_focus_window_t2

0xc433,	// (0x0001b287) popup_image_focus_window_t3

0x0002,

0xf711,	// (0x0001e565) popup_image_focus_window_t

0xc441,	// (0x0001b295) camera2_autofocus_pane_g1

0x9598,	// (0x000183ec) bg_tb_trans_pane_cp01

0xc44f,	// (0x0001b2a3) popup_image_details_window_g1

0xc462,	// (0x0001b2b6) popup_image_details_window_g2

0x0002,

0xf723,	// (0x0001e577) popup_image_details_window_g

0xc48b,	// (0x0001b2df) popup_image_details_window_t1

0xc49d,	// (0x0001b2f1) popup_image_details_window_t2

0xc4b6,	// (0x0001b30a) popup_image_details_window_t3

0xc4ca,	// (0x0001b31e) popup_image_details_window_t4

0xc4e5,	// (0x0001b339) popup_image_details_window_t5

0x0004,

0xf72a,	// (0x0001e57e) popup_image_details_window_t

0x9cec,	// (0x00018b40) bg_calc_paper_pane_ParamLimits

0x9528,	// (0x0001837c) grid_highlight_pane_cp013

0x9d00,	// (0x00018b54) list_calc_pane_ParamLimits

0x9d12,	// (0x00018b66) scroll_pane_cp024

0x9d1a,	// (0x00018b6e) bg_calc_display_pane_ParamLimits

0x07c8,	// (0x0000f61c) calc_display_pane_t1_ParamLimits

0x07da,	// (0x0000f62e) calc_display_pane_t2_ParamLimits

0x9d26,	// (0x00018b7a) calc_display_pane_t3_ParamLimits

0xf15a,	// (0x0001dfae) calc_display_pane_t_ParamLimits

0x089f,	// (0x0000f6f3) cell_calc_pane_g2

0x0001,

0xf177,	// (0x0001dfcb) cell_calc_pane_g

0x08a8,	// (0x0000f6fc) cell_calc_pane_t1

0x9d9d,	// (0x00018bf1) grid_highlight_pane_cp02_ParamLimits

0x9db3,	// (0x00018c07) toolbar_button_pane_cp01_ParamLimits

0x9db3,	// (0x00018c07) toolbar_button_pane_cp01

0xac6f,	// (0x00019ac3) temp_image_control_pane_ParamLimits

0xac6f,	// (0x00019ac3) temp_image_control_pane

0x9598,	// (0x000183ec) main_mp3_pane

0xc4ff,	// (0x0001b353) temp_image_control_pane_g1_ParamLimits

0xc4ff,	// (0x0001b353) temp_image_control_pane_g1

0xc50d,	// (0x0001b361) temp_image_control_pane_g2_ParamLimits

0xc50d,	// (0x0001b361) temp_image_control_pane_g2

0xc51f,	// (0x0001b373) temp_image_control_pane_g3_ParamLimits

0xc51f,	// (0x0001b373) temp_image_control_pane_g3

0x4608,	// (0x0001345c) temp_image_control_pane_g4_ParamLimits

0x4608,	// (0x0001345c) temp_image_control_pane_g4

0x0003,

0xf735,	// (0x0001e589) temp_image_control_pane_g_ParamLimits

0xf735,	// (0x0001e589) temp_image_control_pane_g

0xc4ff,	// (0x0001b353) main_mp3_pane_g1

0x461b,	// (0x0001346f) main_mp3_pane_g2

0x0007,

0xf73e,	// (0x0001e592) main_mp3_pane_g

0xc562,	// (0x0001b3b6) main_mp3_pane_t1

0x9f77,	// (0x00018dcb) main_camera_pane_g8_ParamLimits

0x9f77,	// (0x00018dcb) main_camera_pane_g8

0x1275,	// (0x000100c9) main_video_pane_g7_ParamLimits

0x1275,	// (0x000100c9) main_video_pane_g7

0xbef4,	// (0x0001ad48) main_camera2_pane_t7_ParamLimits

0xbef4,	// (0x0001ad48) main_camera2_pane_t7

0xa0bf,	// (0x00018f13) scroll_pane_cp025_ParamLimits

0xa0bf,	// (0x00018f13) scroll_pane_cp025

0xa0d3,	// (0x00018f27) scroll_pane_cp026_ParamLimits

0xa0d3,	// (0x00018f27) scroll_pane_cp026

0xa0e2,	// (0x00018f36) wml_content_pane_ParamLimits

0x9528,	// (0x0001837c) main_touch_calib_pane

0x46f1,	// (0x00013545) main_touch_calib_pane_g1

0x4703,	// (0x00013557) main_touch_calib_pane_g2

0x4715,	// (0x00013569) main_touch_calib_pane_g3

0x4727,	// (0x0001357b) main_touch_calib_pane_g4

0x0003,

0xf75c,	// (0x0001e5b0) main_touch_calib_pane_g

0x4739,	// (0x0001358d) main_touch_calib_pane_t1

0x4753,	// (0x000135a7) main_touch_calib_pane_t2

0x0004,

0xf765,	// (0x0001e5b9) main_touch_calib_pane_t

0xa847,	// (0x0001969b) mup_progress_pane_cp02

0xa866,	// (0x000196ba) navi_pane_g1

0xa8c8,	// (0x0001971c) navi_pane_mp_t3

0x9598,	// (0x000183ec) main_mp3_pane_ParamLimits

0x3b28,	// (0x0001297c) navi_pane_ParamLimits

0xc4ff,	// (0x0001b353) main_mp3_pane_g1_ParamLimits

0x461b,	// (0x0001346f) main_mp3_pane_g2_ParamLimits

0x4629,	// (0x0001347d) main_mp3_pane_g3_ParamLimits

0x4629,	// (0x0001347d) main_mp3_pane_g3

0x4637,	// (0x0001348b) main_mp3_pane_g4_ParamLimits

0x4637,	// (0x0001348b) main_mp3_pane_g4

0xc52f,	// (0x0001b383) main_mp3_pane_g5_ParamLimits

0xc52f,	// (0x0001b383) main_mp3_pane_g5

0xc53d,	// (0x0001b391) main_mp3_pane_g6_ParamLimits

0xc53d,	// (0x0001b391) main_mp3_pane_g6

0xc54a,	// (0x0001b39e) main_mp3_pane_g7_ParamLimits

0xc54a,	// (0x0001b39e) main_mp3_pane_g7

0xc556,	// (0x0001b3aa) main_mp3_pane_g8_ParamLimits

0xc556,	// (0x0001b3aa) main_mp3_pane_g8

0xf73e,	// (0x0001e592) main_mp3_pane_g_ParamLimits

0x4645,	// (0x00013499) main_mp3_pane_t2

0x4653,	// (0x000134a7) main_mp3_pane_t3

0xc570,	// (0x0001b3c4) main_mp3_pane_t4

0xc57e,	// (0x0001b3d2) main_mp3_pane_t5

0x0005,

0xf74f,	// (0x0001e5a3) main_mp3_pane_t

0xc58c,	// (0x0001b3e0) mup_progress_pane_cp01

0x9546,	// (0x0001839a) aid_zoom_text_secondary2

0xc349,	// (0x0001b19d) list_cale_ev2_pane

0xc351,	// (0x0001b1a5) scroll_pane_cp023_ParamLimits

0x47a9,	// (0x000135fd) field_cale_ev2_pane_ParamLimits

0x47a9,	// (0x000135fd) field_cale_ev2_pane

0xc594,	// (0x0001b3e8) field_cale_ev2_pane_g1_ParamLimits

0xc594,	// (0x0001b3e8) field_cale_ev2_pane_g1

0xc5a0,	// (0x0001b3f4) field_cale_ev2_pane_g2_ParamLimits

0xc5a0,	// (0x0001b3f4) field_cale_ev2_pane_g2

0xc5b8,	// (0x0001b40c) field_cale_ev2_pane_g3_ParamLimits

0xc5b8,	// (0x0001b40c) field_cale_ev2_pane_g3

0x0003,

0xf770,	// (0x0001e5c4) field_cale_ev2_pane_g_ParamLimits

0xf770,	// (0x0001e5c4) field_cale_ev2_pane_g

0xc5dc,	// (0x0001b430) field_cale_ev2_pane_t1_ParamLimits

0xc5dc,	// (0x0001b430) field_cale_ev2_pane_t1

0xc5f3,	// (0x0001b447) field_cale_ev2_pane_t2_ParamLimits

0xc5f3,	// (0x0001b447) field_cale_ev2_pane_t2

0x0001,

0xf779,	// (0x0001e5cd) field_cale_ev2_pane_t_ParamLimits

0xf779,	// (0x0001e5cd) field_cale_ev2_pane_t

0x305a,	// (0x00011eae) main_postcard_pane_g5_ParamLimits

0x305a,	// (0x00011eae) main_postcard_pane_g5

0x3070,	// (0x00011ec4) main_postcard_pane_g6_ParamLimits

0x3070,	// (0x00011ec4) main_postcard_pane_g6

0x102f,	// (0x0000fe83) camera2_autofocus_pane_cp_ParamLimits

0x102f,	// (0x0000fe83) camera2_autofocus_pane_cp

0x9598,	// (0x000183ec) main_mup3_pane

0x47eb,	// (0x0001363f) main_mup3_pane_g1_ParamLimits

0x47eb,	// (0x0001363f) main_mup3_pane_g1

0x480d,	// (0x00013661) main_mup3_pane_g2_ParamLimits

0x480d,	// (0x00013661) main_mup3_pane_g2

0x488f,	// (0x000136e3) main_mup3_pane_g3_ParamLimits

0x488f,	// (0x000136e3) main_mup3_pane_g3

0x48d5,	// (0x00013729) main_mup3_pane_g4_ParamLimits

0x48d5,	// (0x00013729) main_mup3_pane_g4

0x491b,	// (0x0001376f) main_mup3_pane_g5_ParamLimits

0x491b,	// (0x0001376f) main_mup3_pane_g5

0x4963,	// (0x000137b7) main_mup3_pane_g6_ParamLimits

0x4963,	// (0x000137b7) main_mup3_pane_g6

0xc608,	// (0x0001b45c) main_mup3_pane_g7_ParamLimits

0xc608,	// (0x0001b45c) main_mup3_pane_g7

0x0007,

0xf789,	// (0x0001e5dd) main_mup3_pane_g_ParamLimits

0xf789,	// (0x0001e5dd) main_mup3_pane_g

0x49e1,	// (0x00013835) main_mup3_pane_t1_ParamLimits

0x49e1,	// (0x00013835) main_mup3_pane_t1

0x4a55,	// (0x000138a9) main_mup3_pane_t2_ParamLimits

0x4a55,	// (0x000138a9) main_mup3_pane_t2

0x4b29,	// (0x0001397d) main_mup3_pane_t4_ParamLimits

0x4b29,	// (0x0001397d) main_mup3_pane_t4

0x4b7f,	// (0x000139d3) main_mup3_pane_t5_ParamLimits

0x4b7f,	// (0x000139d3) main_mup3_pane_t5

0x4c3b,	// (0x00013a8f) main_mup3_pane_t6_ParamLimits

0x4c3b,	// (0x00013a8f) main_mup3_pane_t6

0x0005,

0xf79a,	// (0x0001e5ee) main_mup3_pane_t_ParamLimits

0xf79a,	// (0x0001e5ee) main_mup3_pane_t

0x4cf3,	// (0x00013b47) mup3_progress_pane_ParamLimits

0x4cf3,	// (0x00013b47) mup3_progress_pane

0x4d7f,	// (0x00013bd3) popup_mup3_control_window_ParamLimits

0x4d7f,	// (0x00013bd3) popup_mup3_control_window

0xc616,	// (0x0001b46a) popup_mup3_text_window

0x4db1,	// (0x00013c05) mup3_progress_pane_t1

0x4dd0,	// (0x00013c24) mup3_progress_pane_t2

0xc61e,	// (0x0001b472) mup3_progress_pane_t3

0x0002,

0xf7a7,	// (0x0001e5fb) mup3_progress_pane_t

0xc63b,	// (0x0001b48f) mup_progress_pane_cp03

0x9528,	// (0x0001837c) bg_tb_trans_pane_cp04

0x4def,	// (0x00013c43) mup3_volume_pane

0x4df7,	// (0x00013c4b) popup_mup3_control_window_g1

0x4e00,	// (0x00013c54) mup3_volume_pane_g1

0x4e09,	// (0x00013c5d) mup3_volume_pane_g2

0x4e12,	// (0x00013c66) mup3_volume_pane_g3

0x0002,

0xf7ae,	// (0x0001e602) mup3_volume_pane_g

0x9528,	// (0x0001837c) bg_tb_trans_pane_cp03

0xc64b,	// (0x0001b49f) popup_mup3_text_window_g1

0xc653,	// (0x0001b4a7) popup_mup3_text_window_t1

0x9d74,	// (0x00018bc8) list_calc_item_pane_g1_ParamLimits

0xbfdc,	// (0x0001ae30) mup_volume_pane_cp_g1

0x476d,	// (0x000135c1) main_touch_calib_pane_t3

0x4781,	// (0x000135d5) main_touch_calib_pane_t4

0x4795,	// (0x000135e9) main_touch_calib_pane_t5

0x9532,	// (0x00018386) aid_cell_size_toolbar2

0x953a,	// (0x0001838e) aid_popup3_width_pane

0x9546,	// (0x0001839a) aid_zoom_text_msg_primary

0x1006,	// (0x0000fe5a) vorec_t7

0x9d38,	// (0x00018b8c) bg_calc_paper_pane_g1_ParamLimits

0x9d44,	// (0x00018b98) bg_calc_paper_pane_g2_ParamLimits

0x9d50,	// (0x00018ba4) bg_calc_paper_pane_g3_ParamLimits

0x9d5c,	// (0x00018bb0) bg_calc_paper_pane_g4_ParamLimits

0x9d68,	// (0x00018bbc) bg_calc_paper_pane_g5_ParamLimits

0x0823,	// (0x0000f677) bg_calc_paper_pane_g6_ParamLimits

0x0834,	// (0x0000f688) bg_calc_paper_pane_g7_ParamLimits

0x0845,	// (0x0000f699) bg_calc_paper_pane_g8_ParamLimits

0xf161,	// (0x0001dfb5) bg_calc_paper_pane_g_ParamLimits

0x0858,	// (0x0000f6ac) calc_bg_paper_pane_g9_ParamLimits

0x1187,	// (0x0000ffdb) image_qvga_pane_ParamLimits

0x1187,	// (0x0000ffdb) image_qvga_pane

0x9c14,	// (0x00018a68) bg_popup_sub_pane_cp04_ParamLimits

0xaba6,	// (0x000199fa) popup_mup_playback_window_g1_ParamLimits

0xabb2,	// (0x00019a06) popup_mup_playback_window_t1_ParamLimits

0xabc7,	// (0x00019a1b) popup_mup_playback_window_t2_ParamLimits

0xf4ed,	// (0x0001e341) popup_mup_playback_window_t_ParamLimits

0x42a9,	// (0x000130fd) main_mup2_pane_g3_ParamLimits

0x42a9,	// (0x000130fd) main_mup2_pane_g3

0x1594,	// (0x000103e8) popup_toolbar_window_cp04

0xafbc,	// (0x00019e10) popup_call2_audio_second_window_g3_ParamLimits

0xafbc,	// (0x00019e10) popup_call2_audio_second_window_g3

0xb3c6,	// (0x0001a21a) popup_call2_audio_first_window_g4_ParamLimits

0xb3c6,	// (0x0001a21a) popup_call2_audio_first_window_g4

0xba45,	// (0x0001a899) popup_call2_audio_in_window_g4_ParamLimits

0xba45,	// (0x0001a899) popup_call2_audio_in_window_g4

0x3189,	// (0x00011fdd) aid_area_sk_bg_cut_ParamLimits

0x3189,	// (0x00011fdd) aid_area_sk_bg_cut

0xabdc,	// (0x00019a30) aid_area_sk_bg_cut_2_ParamLimits

0xabdc,	// (0x00019a30) aid_area_sk_bg_cut_2

0x45ae,	// (0x00013402) aid_placing_details_win

0x45b6,	// (0x0001340a) aid_placing_details_win_2

0xc441,	// (0x0001b295) camera2_autofocus_pane_g1_ParamLimits

0x0425,	// (0x0000f279) popup_fixed_preview_cale_window_ParamLimits

0x0425,	// (0x0000f279) popup_fixed_preview_cale_window

0xa920,	// (0x00019774) navi_slider_pane_g3

0xa929,	// (0x0001977d) navi_slider_pane_g4

0xa932,	// (0x00019786) navi_slider_pane_g5

0xa920,	// (0x00019774) navi_slider_pane_g6

0xa93b,	// (0x0001978f) navi_slider_pane_g7

0xaa5c,	// (0x000198b0) mup_scale_pane_g3

0xaa65,	// (0x000198b9) mup_scale_pane_g4

0xaa6e,	// (0x000198c2) mup_scale_pane_g5

0x2e72,	// (0x00011cc6) mup_scale_pane_g6

0x2e7b,	// (0x00011ccf) mup_scale_pane_g7

0xa920,	// (0x00019774) cams2_slider_pane_g3

0xc091,	// (0x0001aee5) cams2_slider_pane_g4

0xc099,	// (0x0001aeed) cams2_slider_pane_g5

0xa920,	// (0x00019774) cams2_slider_pane_g6

0xc0a1,	// (0x0001aef5) cams2_slider_pane_g7

0xc2cf,	// (0x0001b123) camera2_autofocus_pane_cp_g1

0xbda6,	// (0x0001abfa) bg_popup_preview_window_pane_cp02_ParamLimits

0xbda6,	// (0x0001abfa) bg_popup_preview_window_pane_cp02

0xc661,	// (0x0001b4b5) list_fp_cale_pane_ParamLimits

0xc661,	// (0x0001b4b5) list_fp_cale_pane

0xc66d,	// (0x0001b4c1) popup_fixed_preview_cale_window_t1_ParamLimits

0xc66d,	// (0x0001b4c1) popup_fixed_preview_cale_window_t1

0x4e1b,	// (0x00013c6f) popup_fixed_preview_cale_window_t2_ParamLimits

0x4e1b,	// (0x00013c6f) popup_fixed_preview_cale_window_t2

0x4e30,	// (0x00013c84) popup_fixed_preview_cale_window_t3_ParamLimits

0x4e30,	// (0x00013c84) popup_fixed_preview_cale_window_t3

0x0002,

0xf7b5,	// (0x0001e609) popup_fixed_preview_cale_window_t_ParamLimits

0xf7b5,	// (0x0001e609) popup_fixed_preview_cale_window_t

0x4e45,	// (0x00013c99) list_single_fp_cale_pane_ParamLimits

0x4e45,	// (0x00013c99) list_single_fp_cale_pane

0xc68b,	// (0x0001b4df) list_single_fp_cale_pane_g1_ParamLimits

0xc68b,	// (0x0001b4df) list_single_fp_cale_pane_g1

0xc697,	// (0x0001b4eb) list_single_fp_cale_pane_g2_ParamLimits

0xc697,	// (0x0001b4eb) list_single_fp_cale_pane_g2

0x0002,

0xf7bc,	// (0x0001e610) list_single_fp_cale_pane_g_ParamLimits

0xf7bc,	// (0x0001e610) list_single_fp_cale_pane_g

0xc6b0,	// (0x0001b504) list_single_fp_cale_pane_t1_ParamLimits

0xc6b0,	// (0x0001b504) list_single_fp_cale_pane_t1

0xc6c2,	// (0x0001b516) list_single_fp_cale_pane_t2_ParamLimits

0xc6c2,	// (0x0001b516) list_single_fp_cale_pane_t2

0x0001,

0xf7c3,	// (0x0001e617) list_single_fp_cale_pane_t_ParamLimits

0xf7c3,	// (0x0001e617) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x9528,	// (0x0001837c) main_dialer_pane

0x4e5c,	// (0x00013cb0) aid_cell_size_keypad

0x4e66,	// (0x00013cba) dialer_ne_pane

0x4e6e,	// (0x00013cc2) grid_dialer_command_1_pane

0x4e76,	// (0x00013cca) grid_dialer_command_2_pane

0x4e7e,	// (0x00013cd2) grid_dialer_keypad_pane

0x4e90,	// (0x00013ce4) bg_popup_call_pane_cp06_ParamLimits

0x4e90,	// (0x00013ce4) bg_popup_call_pane_cp06

0x4e9c,	// (0x00013cf0) dialer_ne_clear_pane_ParamLimits

0x4e9c,	// (0x00013cf0) dialer_ne_clear_pane

0xc6f5,	// (0x0001b549) dialer_ne_pane_g1

0xc6fd,	// (0x0001b551) dialer_ne_pane_t1_ParamLimits

0xc6fd,	// (0x0001b551) dialer_ne_pane_t1

0x4ea8,	// (0x00013cfc) dialer_ne_pane_t2_ParamLimits

0x4ea8,	// (0x00013cfc) dialer_ne_pane_t2

0x4ed2,	// (0x00013d26) dialer_ne_pane_t3_ParamLimits

0x4ed2,	// (0x00013d26) dialer_ne_pane_t3

0x0002,

0xf7c8,	// (0x0001e61c) dialer_ne_pane_t_ParamLimits

0xf7c8,	// (0x0001e61c) dialer_ne_pane_t

0x4f02,	// (0x00013d56) dialer_ne_pane_t3_copy1_ParamLimits

0x4f02,	// (0x00013d56) dialer_ne_pane_t3_copy1

0x4f31,	// (0x00013d85) cell_dialer_keypad_pane_ParamLimits

0x4f31,	// (0x00013d85) cell_dialer_keypad_pane

0x4f48,	// (0x00013d9c) cell_dialer_command_1_pane_ParamLimits

0x4f48,	// (0x00013d9c) cell_dialer_command_1_pane

0x4f5e,	// (0x00013db2) cell_dialer_command_2_pane_ParamLimits

0x4f5e,	// (0x00013db2) cell_dialer_command_2_pane

0xc70f,	// (0x0001b563) bg_button_pane_cp02_ParamLimits

0xc70f,	// (0x0001b563) bg_button_pane_cp02

0x4f6d,	// (0x00013dc1) cell_dialer_keypad_pane_g1_ParamLimits

0x4f6d,	// (0x00013dc1) cell_dialer_keypad_pane_g1

0xc70f,	// (0x0001b563) bg_button_pane_cp03_ParamLimits

0xc70f,	// (0x0001b563) bg_button_pane_cp03

0x4f82,	// (0x00013dd6) cell_dialer_command_1_pane_g1_ParamLimits

0x4f82,	// (0x00013dd6) cell_dialer_command_1_pane_g1

0xc71b,	// (0x0001b56f) bg_button_pane_cp04

0x4f95,	// (0x00013de9) cell_dialer_command_2_pane_g1

0xa906,	// (0x0001975a) bg_button_pane_cp06

0xc723,	// (0x0001b577) dialer_ne_clear_pane_g1

0x29a4,	// (0x000117f8) navi_pane_g2

0x29d2,	// (0x00011826) navi_pane_g3

0x0002,

0xf3f0,	// (0x0001e244) navi_pane_g

0x29fb,	// (0x0001184f) navi_pane_mv_g2

0x2a22,	// (0x00011876) navi_pane_mv_g5

0x2a2a,	// (0x0001187e) navi_pane_mv_t1

0x9d1a,	// (0x00018b6e) main_clock2_pane

0x4fe2,	// (0x00013e36) main_clock2_list_pane_ParamLimits

0x4fe2,	// (0x00013e36) main_clock2_list_pane

0x501c,	// (0x00013e70) main_clock2_pane_t1_ParamLimits

0x501c,	// (0x00013e70) main_clock2_pane_t1

0x505a,	// (0x00013eae) main_clock2_pane_t2_ParamLimits

0x505a,	// (0x00013eae) main_clock2_pane_t2

0x0004,

0xf7cf,	// (0x0001e623) main_clock2_pane_t_ParamLimits

0xf7cf,	// (0x0001e623) main_clock2_pane_t

0x50f8,	// (0x00013f4c) popup_clock_analogue_window_cp03_ParamLimits

0x50f8,	// (0x00013f4c) popup_clock_analogue_window_cp03

0x511d,	// (0x00013f71) popup_clock_digital_window_cp02_ParamLimits

0x511d,	// (0x00013f71) popup_clock_digital_window_cp02

0x5190,	// (0x00013fe4) main_clock2_list_single_pane_ParamLimits

0x5190,	// (0x00013fe4) main_clock2_list_single_pane

0xa906,	// (0x0001975a) list_highlight_pane_cp05

0xc741,	// (0x0001b595) main_clock2_list_single_pane_t1

0x1594,	// (0x000103e8) popup_toolbar_window_cp04_ParamLimits

0x45d8,	// (0x0001342c) camera2_autofocus_pane_g2_ParamLimits

0x45d8,	// (0x0001342c) camera2_autofocus_pane_g2

0x45e4,	// (0x00013438) camera2_autofocus_pane_g3_ParamLimits

0x45e4,	// (0x00013438) camera2_autofocus_pane_g3

0x45f0,	// (0x00013444) camera2_autofocus_pane_g4_ParamLimits

0x45f0,	// (0x00013444) camera2_autofocus_pane_g4

0x45fc,	// (0x00013450) camera2_autofocus_pane_g5_ParamLimits

0x45fc,	// (0x00013450) camera2_autofocus_pane_g5

0x0004,

0xf718,	// (0x0001e56c) camera2_autofocus_pane_g_ParamLimits

0xf718,	// (0x0001e56c) camera2_autofocus_pane_g

0x47cb,	// (0x0001361f) camera2_autofocus_pane_cp_g2

0x47d3,	// (0x00013627) camera2_autofocus_pane_cp_g3

0x47db,	// (0x0001362f) camera2_autofocus_pane_cp_g4

0x47e3,	// (0x00013637) camera2_autofocus_pane_cp_g5

0x0004,

0xf77e,	// (0x0001e5d2) camera2_autofocus_pane_cp_g

0x4e88,	// (0x00013cdc) popup_dialer_spcha_window

0x9528,	// (0x0001837c) bg_popup_sub_pane_cp07

0xc74f,	// (0x0001b5a3) list_spcha_pane

0xc757,	// (0x0001b5ab) list_single_spcha_pane_ParamLimits

0xc757,	// (0x0001b5ab) list_single_spcha_pane

0x9528,	// (0x0001837c) list_highlight_pane_cp06

0xc768,	// (0x0001b5bc) list_single_spcha_pane_t1

0xb7ef,	// (0x0001a643) popup_call2_audio_out_window_g4_ParamLimits

0xb7ef,	// (0x0001a643) popup_call2_audio_out_window_g4

0x9528,	// (0x0001837c) main_imed2_pane

0xbdda,	// (0x0001ac2e) popup_imed_adjust2_window

0x39c3,	// (0x00012817) popup_imed_trans_window_ParamLimits

0x39c3,	// (0x00012817) popup_imed_trans_window

0xc10b,	// (0x0001af5f) popup_blid_sat_info2_window_t1

0xc119,	// (0x0001af6d) popup_blid_sat_info2_window_t2

0x000a,

0xf6ad,	// (0x0001e501) popup_blid_sat_info2_window_t

0x523a,	// (0x0001408e) aid_size_cell_colour_35

0x525a,	// (0x000140ae) aid_size_cell_colour_112

0x527a,	// (0x000140ce) aid_size_cell_effect

0xbdb2,	// (0x0001ac06) bg_tb_trans_pane_cp02

0xa3ba,	// (0x0001920e) heading_imed_pane

0x529a,	// (0x000140ee) listscroll_imed_pane

0xc776,	// (0x0001b5ca) heading_imed_pane_g1

0xc77e,	// (0x0001b5d2) heading_imed_pane_t1

0xc78c,	// (0x0001b5e0) grid_imed_colour_35_pane_ParamLimits

0xc78c,	// (0x0001b5e0) grid_imed_colour_35_pane

0x52a6,	// (0x000140fa) grid_imed_effect_pane

0xc7a4,	// (0x0001b5f8) list_imed_aspect_pane

0x52bc,	// (0x00014110) scroll_pane_cp027_ParamLimits

0x52bc,	// (0x00014110) scroll_pane_cp027

0x52cd,	// (0x00014121) cell_imed_effect_pane_ParamLimits

0x52cd,	// (0x00014121) cell_imed_effect_pane

0xc7ac,	// (0x0001b600) cell_imed_colour_pane_ParamLimits

0xc7ac,	// (0x0001b600) cell_imed_colour_pane

0xc7ee,	// (0x0001b642) cell_imed_colour_pane_g1_ParamLimits

0xc7ee,	// (0x0001b642) cell_imed_colour_pane_g1

0xc7ff,	// (0x0001b653) hgihlgiht_grid_pane_cp016_ParamLimits

0xc7ff,	// (0x0001b653) hgihlgiht_grid_pane_cp016

0x52f4,	// (0x00014148) cell_imed_effect_pane_g1

0x52fc,	// (0x00014150) grid_highlight_pane_cp017

0xc810,	// (0x0001b664) list_imed_single_pane_ParamLimits

0xc810,	// (0x0001b664) list_imed_single_pane

0x9528,	// (0x0001837c) list_highlight_pane_cp07

0xc826,	// (0x0001b67a) list_imed_aspect_pane_comp1_t1

0xbdb2,	// (0x0001ac06) bg_tb_trans_pane_cp05

0xc848,	// (0x0001b69c) popup_imed_adjust2_window_g1

0xc86f,	// (0x0001b6c3) popup_imed_adjust2_window_t1

0xc887,	// (0x0001b6db) slider_imed_adjust_pane

0xc89b,	// (0x0001b6ef) slider_imed_adjust_pane_g1

0xc8ab,	// (0x0001b6ff) slider_imed_adjust_pane_g2

0xc8bb,	// (0x0001b70f) slider_imed_adjust_pane_g3

0xc8cc,	// (0x0001b720) slider_imed_adjust_pane_g4

0x0003,

0xf7ec,	// (0x0001e640) slider_imed_adjust_pane_g

0x5305,	// (0x00014159) aid_size_cell_clipart2

0x5311,	// (0x00014165) grid_imed_clipart_pane

0xc8dd,	// (0x0001b731) scroll_pane_cp031

0x531b,	// (0x0001416f) cell_imed_clipart_pane_ParamLimits

0x531b,	// (0x0001416f) cell_imed_clipart_pane

0x533f,	// (0x00014193) cell_imed_clipart_pane_g1

0x9528,	// (0x0001837c) grid_highlight_pane_cp014

0x4ff7,	// (0x00013e4b) main_clock2_pane_g1_ParamLimits

0x4ff7,	// (0x00013e4b) main_clock2_pane_g1

0x513b,	// (0x00013f8f) aid_call2_pane_cp10

0x514d,	// (0x00013fa1) aid_call_pane_cp10

0xa83b,	// (0x0001968f) popup_clock_analogue_window_cp10_g1

0xa83b,	// (0x0001968f) popup_clock_analogue_window_cp10_g2

0x515f,	// (0x00013fb3) popup_clock_analogue_window_cp10_g3

0x515f,	// (0x00013fb3) popup_clock_analogue_window_cp10_g4

0xa83b,	// (0x0001968f) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7da,	// (0x0001e62e) popup_clock_analogue_window_cp10_g

0x5171,	// (0x00013fc5) popup_clock_analogue_window_cp10_t1

0x51a2,	// (0x00013ff6) clock_digital_number_pane_cp10_ParamLimits

0x51a2,	// (0x00013ff6) clock_digital_number_pane_cp10

0x51ba,	// (0x0001400e) clock_digital_number_pane_cp11_ParamLimits

0x51ba,	// (0x0001400e) clock_digital_number_pane_cp11

0x51d2,	// (0x00014026) clock_digital_number_pane_cp12_ParamLimits

0x51d2,	// (0x00014026) clock_digital_number_pane_cp12

0x51ea,	// (0x0001403e) clock_digital_number_pane_cp13_ParamLimits

0x51ea,	// (0x0001403e) clock_digital_number_pane_cp13

0x5202,	// (0x00014056) clock_digital_separator_pane_cp10_ParamLimits

0x5202,	// (0x00014056) clock_digital_separator_pane_cp10

0x521a,	// (0x0001406e) popup_clock_digital_window_cp02_t1_ParamLimits

0x521a,	// (0x0001406e) popup_clock_digital_window_cp02_t1

0x9c0c,	// (0x00018a60) clock_digital_number_pane_cp10_g1

0x9c0c,	// (0x00018a60) clock_digital_number_pane_cp10_g2

0x0001,

0xf7f5,	// (0x0001e649) clock_digital_number_pane_cp10_g

0x9c0c,	// (0x00018a60) clock_digital_separator_pane_cp10_g1

0x9c0c,	// (0x00018a60) clock_digital_separator_pane_g2_cp10

0xa8d6,	// (0x0001972a) navi_pane_vded_g4

0xa8df,	// (0x00019733) navi_pane_vded_g5

0xa8e8,	// (0x0001973c) navi_pane_vded_t1

0x9528,	// (0x0001837c) main_vded_pane

0x5348,	// (0x0001419c) main_vded_pane_g1

0x5352,	// (0x000141a6) main_vded_pane_g2

0x535c,	// (0x000141b0) main_vded_pane_g3

0x0002,

0xf7fa,	// (0x0001e64e) main_vded_pane_g

0x5366,	// (0x000141ba) main_vded_pane_t1

0x5374,	// (0x000141c8) main_vded_pane_t2

0x0001,

0xf801,	// (0x0001e655) main_vded_pane_t

0x5382,	// (0x000141d6) vded_slider_pane

0x538c,	// (0x000141e0) vded_video_pane

0xc8e5,	// (0x0001b739) vded_video_pane_g1

0x5396,	// (0x000141ea) vded_video_pane_g2

0xc2cf,	// (0x0001b123) vded_video_pane_g3

0x0002,

0xf806,	// (0x0001e65a) vded_video_pane_g

0xc8ef,	// (0x0001b743) vded_slider_pane_g1

0xc8f8,	// (0x0001b74c) vded_slider_pane_g2

0xc901,	// (0x0001b755) vded_slider_pane_g3

0xc90a,	// (0x0001b75e) vded_slider_pane_g4

0xc913,	// (0x0001b767) vded_slider_pane_g5

0x0004,

0xf80d,	// (0x0001e661) vded_slider_pane_g

0x4d67,	// (0x00013bbb) mup3_rocker_pane_ParamLimits

0x4d67,	// (0x00013bbb) mup3_rocker_pane

0x539f,	// (0x000141f3) mup3_control_keys_pane_g1

0x53a7,	// (0x000141fb) mup3_control_keys_pane_g2

0x53af,	// (0x00014203) mup3_control_keys_pane_g3

0x53b7,	// (0x0001420b) mup3_control_keys_pane_g4

0x0003,

0xf818,	// (0x0001e66c) mup3_control_keys_pane_g

0x045c,	// (0x0000f2b0) popup_toolbar2_fixed_window_cp01_ParamLimits

0x045c,	// (0x0000f2b0) popup_toolbar2_fixed_window_cp01

0x4d9b,	// (0x00013bef) popup_toolbar2_fixed_window_cp02_ParamLimits

0x4d9b,	// (0x00013bef) popup_toolbar2_fixed_window_cp02

0xb12e,	// (0x00019f82) popup_call2_audio_second_window_t4_ParamLimits

0xb12e,	// (0x00019f82) popup_call2_audio_second_window_t4

0xb65c,	// (0x0001a4b0) popup_call2_audio_first_window_t6_ParamLimits

0xb65c,	// (0x0001a4b0) popup_call2_audio_first_window_t6

0xb8f2,	// (0x0001a746) popup_call2_audio_out_window_t6_ParamLimits

0xb8f2,	// (0x0001a746) popup_call2_audio_out_window_t6

0x9528,	// (0x0001837c) main_vitu_pane

0x53c7,	// (0x0001421b) aid_size_cell_itu_ParamLimits

0x53c7,	// (0x0001421b) aid_size_cell_itu

0x9598,	// (0x000183ec) bg_popup_window_pane_cp08_ParamLimits

0x9598,	// (0x000183ec) bg_popup_window_pane_cp08

0x53dd,	// (0x00014231) field_vitu_entry_pane_ParamLimits

0x53dd,	// (0x00014231) field_vitu_entry_pane

0x53f4,	// (0x00014248) grid_vitu_function_pane_ParamLimits

0x53f4,	// (0x00014248) grid_vitu_function_pane

0x540f,	// (0x00014263) grid_vitu_itu_pane_ParamLimits

0x540f,	// (0x00014263) grid_vitu_itu_pane

0x542d,	// (0x00014281) cell_vitu_itu_pane_ParamLimits

0x542d,	// (0x00014281) cell_vitu_itu_pane

0x5451,	// (0x000142a5) cell_vitu_function_pane_ParamLimits

0x5451,	// (0x000142a5) cell_vitu_function_pane

0x9598,	// (0x000183ec) bg_popup_sub_pane_cp08_ParamLimits

0x9598,	// (0x000183ec) bg_popup_sub_pane_cp08

0x546c,	// (0x000142c0) field_vitu_entry_pane_t1_ParamLimits

0x546c,	// (0x000142c0) field_vitu_entry_pane_t1

0xc934,	// (0x0001b788) field_vitu_entry_pane_t2_ParamLimits

0xc934,	// (0x0001b788) field_vitu_entry_pane_t2

0x0001,

0xf826,	// (0x0001e67a) field_vitu_entry_pane_t_ParamLimits

0xf826,	// (0x0001e67a) field_vitu_entry_pane_t

0xc951,	// (0x0001b7a5) bg_button_pane_cp05_ParamLimits

0xc951,	// (0x0001b7a5) bg_button_pane_cp05

0x548b,	// (0x000142df) cell_vitu_itu_pane_g1

0x54a3,	// (0x000142f7) cell_vitu_itu_pane_t1_ParamLimits

0x54a3,	// (0x000142f7) cell_vitu_itu_pane_t1

0x54b5,	// (0x00014309) cell_vitu_itu_pane_t2_ParamLimits

0x54b5,	// (0x00014309) cell_vitu_itu_pane_t2

0x0002,

0xf82b,	// (0x0001e67f) cell_vitu_itu_pane_t_ParamLimits

0xf82b,	// (0x0001e67f) cell_vitu_itu_pane_t

0xc95f,	// (0x0001b7b3) bg_button_pane_cp07

0x54f8,	// (0x0001434c) cell_vitu_function_pane_g1

0x9cba,	// (0x00018b0e) main_calc_pane_g1

0x0283,	// (0x0000f0d7) aid_visual_content_pane

0x9528,	// (0x0001837c) main_vradio_pane

0x5501,	// (0x00014355) main_vradio_pane_g1_ParamLimits

0x5501,	// (0x00014355) main_vradio_pane_g1

0xc969,	// (0x0001b7bd) main_vradio_pane_g2_ParamLimits

0xc969,	// (0x0001b7bd) main_vradio_pane_g2

0x0001,

0xf832,	// (0x0001e686) main_vradio_pane_g_ParamLimits

0xf832,	// (0x0001e686) main_vradio_pane_g

0x551a,	// (0x0001436e) main_vradio_pane_t1_ParamLimits

0x551a,	// (0x0001436e) main_vradio_pane_t1

0x552f,	// (0x00014383) main_vradio_pane_t2_ParamLimits

0x552f,	// (0x00014383) main_vradio_pane_t2

0xc976,	// (0x0001b7ca) main_vradio_pane_t3_ParamLimits

0xc976,	// (0x0001b7ca) main_vradio_pane_t3

0x0002,

0xf837,	// (0x0001e68b) main_vradio_pane_t_ParamLimits

0xf837,	// (0x0001e68b) main_vradio_pane_t

0x5544,	// (0x00014398) vradio_rocker_control_pane_ParamLimits

0x5544,	// (0x00014398) vradio_rocker_control_pane

0x5556,	// (0x000143aa) vradio_station_info_pane_ParamLimits

0x5556,	// (0x000143aa) vradio_station_info_pane

0xc98a,	// (0x0001b7de) vradio_frequency_info_pane_ParamLimits

0xc98a,	// (0x0001b7de) vradio_frequency_info_pane

0xc2cf,	// (0x0001b123) vradio_station_info_pane_g1

0xc999,	// (0x0001b7ed) vradio_station_info_pane_t1_ParamLimits

0xc999,	// (0x0001b7ed) vradio_station_info_pane_t1

0xc9bb,	// (0x0001b80f) vradio_station_info_pane_t2_ParamLimits

0xc9bb,	// (0x0001b80f) vradio_station_info_pane_t2

0x0001,

0xf83e,	// (0x0001e692) vradio_station_info_pane_t_ParamLimits

0xf83e,	// (0x0001e692) vradio_station_info_pane_t

0xc9cd,	// (0x0001b821) vradio_tuning_pane

0xc9d5,	// (0x0001b829) vradio_rocker_control_pane_g1

0xc9dd,	// (0x0001b831) vradio_rocker_control_pane_g2

0xc9e5,	// (0x0001b839) vradio_rocker_control_pane_g3

0xc9ed,	// (0x0001b841) vradio_rocker_control_pane_g4

0xc9f5,	// (0x0001b849) vradio_rocker_control_pane_g5

0x0004,

0xf843,	// (0x0001e697) vradio_rocker_control_pane_g

0x5568,	// (0x000143bc) vradio_frequency_info_pane_g1

0xc9fd,	// (0x0001b851) vradio_frequency_info_pane_t1_ParamLimits

0xc9fd,	// (0x0001b851) vradio_frequency_info_pane_t1

0x5572,	// (0x000143c6) vradio_tuning_pane_g1

0x557d,	// (0x000143d1) vradio_tuning_pane_t1

0x9556,	// (0x000183aa) area_side_right_pane_ParamLimits

0x9556,	// (0x000183aa) area_side_right_pane

0xbd6d,	// (0x0001abc1) status_small_pane_g1

0xbd75,	// (0x0001abc9) status_small_pane_g2

0xbd7e,	// (0x0001abd2) status_small_pane_g3

0xbd87,	// (0x0001abdb) status_small_pane_g4

0x0003,

0xf603,	// (0x0001e457) status_small_pane_g

0xbd90,	// (0x0001abe4) status_small_pane_t1

0x9528,	// (0x0001837c) main_video3_pane

0xca11,	// (0x0001b865) cams_zoom_vslider_pane

0xca19,	// (0x0001b86d) image3_wide_pane_ParamLimits

0xca19,	// (0x0001b86d) image3_wide_pane

0xca33,	// (0x0001b887) image3_wide_small_pane

0xca3f,	// (0x0001b893) main_video3_pane_g1_ParamLimits

0xca3f,	// (0x0001b893) main_video3_pane_g1

0xca5b,	// (0x0001b8af) main_video3_pane_g2_ParamLimits

0xca5b,	// (0x0001b8af) main_video3_pane_g2

0x0001,

0xf84e,	// (0x0001e6a2) main_video3_pane_g_ParamLimits

0xf84e,	// (0x0001e6a2) main_video3_pane_g

0xca77,	// (0x0001b8cb) main_video3_pane_t1_ParamLimits

0xca77,	// (0x0001b8cb) main_video3_pane_t1

0xcaa2,	// (0x0001b8f6) main_video3_pane_t2_ParamLimits

0xcaa2,	// (0x0001b8f6) main_video3_pane_t2

0xcacd,	// (0x0001b921) main_video3_pane_t3_ParamLimits

0xcacd,	// (0x0001b921) main_video3_pane_t3

0x0002,

0xf853,	// (0x0001e6a7) main_video3_pane_t_ParamLimits

0xf853,	// (0x0001e6a7) main_video3_pane_t

0xcafa,	// (0x0001b94e) cams_zoom_vslider_pane_g1

0xcb03,	// (0x0001b957) cams_zoom_vslider_pane_g2

0x0001,

0xf85a,	// (0x0001e6ae) cams_zoom_vslider_pane_g

0xcb0b,	// (0x0001b95f) small_slider_vertical_pane

0xc2cf,	// (0x0001b123) small_slider_vertical_pane_g1

0xc2cf,	// (0x0001b123) small_slider_vertical_pane_g2

0xcb13,	// (0x0001b967) small_slider_vertical_pane_g3

0x0002,

0xf85f,	// (0x0001e6b3) small_slider_vertical_pane_g

0x9528,	// (0x0001837c) main_hwr_training_pane

0xcb1c,	// (0x0001b970) hwr_training_instruct_pane_ParamLimits

0xcb1c,	// (0x0001b970) hwr_training_instruct_pane

0x558c,	// (0x000143e0) hwr_training_navi_pane_ParamLimits

0x558c,	// (0x000143e0) hwr_training_navi_pane

0x55ab,	// (0x000143ff) hwr_training_write_pane_ParamLimits

0x55ab,	// (0x000143ff) hwr_training_write_pane

0x9528,	// (0x0001837c) bg_frame_shadow_pane

0xcb53,	// (0x0001b9a7) hwr_training_write_pane_g1

0xcb5b,	// (0x0001b9af) hwr_training_write_pane_g2

0xcb63,	// (0x0001b9b7) hwr_training_write_pane_g3

0xcb6b,	// (0x0001b9bf) hwr_training_write_pane_g4

0xcb73,	// (0x0001b9c7) hwr_training_write_pane_g5

0xcb7b,	// (0x0001b9cf) hwr_training_write_pane_g6

0xcb83,	// (0x0001b9d7) hwr_training_write_pane_g7

0x0006,

0xf866,	// (0x0001e6ba) hwr_training_write_pane_g

0xcb8b,	// (0x0001b9df) hwr_training_navi_pane_g1_ParamLimits

0xcb8b,	// (0x0001b9df) hwr_training_navi_pane_g1

0xcb9d,	// (0x0001b9f1) hwr_training_navi_pane_g2_ParamLimits

0xcb9d,	// (0x0001b9f1) hwr_training_navi_pane_g2

0xcbaf,	// (0x0001ba03) hwr_training_navi_pane_g3_ParamLimits

0xcbaf,	// (0x0001ba03) hwr_training_navi_pane_g3

0xcbbf,	// (0x0001ba13) hwr_training_navi_pane_g4_ParamLimits

0xcbbf,	// (0x0001ba13) hwr_training_navi_pane_g4

0x0004,

0xf875,	// (0x0001e6c9) hwr_training_navi_pane_g_ParamLimits

0xf875,	// (0x0001e6c9) hwr_training_navi_pane_g

0xcbcc,	// (0x0001ba20) hwr_training_navi_pane_t1

0x55f5,	// (0x00014449) list_single_hwr_training_instruct_pane_ParamLimits

0x55f5,	// (0x00014449) list_single_hwr_training_instruct_pane

0xcbda,	// (0x0001ba2e) list_single_hwr_training_instruct_pane_t1

0xc20f,	// (0x0001b063) bg_frame_shadow_pane_g1

0xcbe9,	// (0x0001ba3d) bg_frame_shadow_pane_g2

0xcbf1,	// (0x0001ba45) bg_frame_shadow_pane_g3

0xcbf9,	// (0x0001ba4d) bg_frame_shadow_pane_g4

0xcc01,	// (0x0001ba55) bg_frame_shadow_pane_g5

0xcc09,	// (0x0001ba5d) bg_frame_shadow_pane_g6

0xcc11,	// (0x0001ba65) bg_frame_shadow_pane_g7

0x9e13,	// (0x00018c67) bg_frame_shadow_pane_g8

0x0007,

0xf880,	// (0x0001e6d4) bg_frame_shadow_pane_g

0x9528,	// (0x0001837c) main_video_tele_dialer_pane

0x560c,	// (0x00014460) aid_size_cell_video_keypad_ParamLimits

0x560c,	// (0x00014460) aid_size_cell_video_keypad

0x5626,	// (0x0001447a) grid_video_dialer_keypad_pane_ParamLimits

0x5626,	// (0x0001447a) grid_video_dialer_keypad_pane

0x5674,	// (0x000144c8) video_down_pane_cp_ParamLimits

0x5674,	// (0x000144c8) video_down_pane_cp

0x56a6,	// (0x000144fa) cell_video_dialer_keypad_pane_ParamLimits

0x56a6,	// (0x000144fa) cell_video_dialer_keypad_pane

0xcc19,	// (0x0001ba6d) bg_button_pane_cp08_ParamLimits

0xcc19,	// (0x0001ba6d) bg_button_pane_cp08

0x56c8,	// (0x0001451c) cell_video_dialer_keypad_pane_g1_ParamLimits

0x56c8,	// (0x0001451c) cell_video_dialer_keypad_pane_g1

0x4d51,	// (0x00013ba5) mup3_rocker2_pane_ParamLimits

0x4d51,	// (0x00013ba5) mup3_rocker2_pane

0xc2cf,	// (0x0001b123) mup3_rocker2_pane_g1

0x38ac,	// (0x00012700) main_dialer2_pane

0x9528,	// (0x0001837c) main_mp4_pane

0xcc2d,	// (0x0001ba81) main_mp4_pane_g1_ParamLimits

0xcc2d,	// (0x0001ba81) main_mp4_pane_g1

0xcc2d,	// (0x0001ba81) main_mp4_pane_g2_ParamLimits

0xcc2d,	// (0x0001ba81) main_mp4_pane_g2

0x5703,	// (0x00014557) main_mp4_pane_g3_ParamLimits

0x5703,	// (0x00014557) main_mp4_pane_g3

0xcc3b,	// (0x0001ba8f) main_mp4_pane_g4_ParamLimits

0xcc3b,	// (0x0001ba8f) main_mp4_pane_g4

0xcc63,	// (0x0001bab7) main_mp4_pane_g5_ParamLimits

0xcc63,	// (0x0001bab7) main_mp4_pane_g5

0x0005,

0xf8a0,	// (0x0001e6f4) main_mp4_pane_g_ParamLimits

0xf8a0,	// (0x0001e6f4) main_mp4_pane_g

0xccb3,	// (0x0001bb07) main_mp4_pane_t1_ParamLimits

0xccb3,	// (0x0001bb07) main_mp4_pane_t1

0xcd0f,	// (0x0001bb63) main_mp4_pane_t2_ParamLimits

0xcd0f,	// (0x0001bb63) main_mp4_pane_t2

0xcd61,	// (0x0001bbb5) main_mp4_pane_t3_ParamLimits

0xcd61,	// (0x0001bbb5) main_mp4_pane_t3

0xcd81,	// (0x0001bbd5) main_mp4_pane_t4_ParamLimits

0xcd81,	// (0x0001bbd5) main_mp4_pane_t4

0x0003,

0xf8ad,	// (0x0001e701) main_mp4_pane_t_ParamLimits

0xf8ad,	// (0x0001e701) main_mp4_pane_t

0xcdc5,	// (0x0001bc19) mp4_progress_pane_ParamLimits

0xcdc5,	// (0x0001bc19) mp4_progress_pane

0xce0f,	// (0x0001bc63) mp4_rocker_pane_ParamLimits

0xce0f,	// (0x0001bc63) mp4_rocker_pane

0xce37,	// (0x0001bc8b) mp4_progress_pane_t1

0xce50,	// (0x0001bca4) mp4_progress_pane_t2

0x0001,

0xf8b6,	// (0x0001e70a) mp4_progress_pane_t

0xce69,	// (0x0001bcbd) mup_progress_pane_cp04

0xc2cf,	// (0x0001b123) mp4_rocker_pane_g1

0x573f,	// (0x00014593) aid_cell_size_keypad2_ParamLimits

0x573f,	// (0x00014593) aid_cell_size_keypad2

0x5755,	// (0x000145a9) dialer2_ne_pane_ParamLimits

0x5755,	// (0x000145a9) dialer2_ne_pane

0x576f,	// (0x000145c3) grid_dialer2_keypad_pane_ParamLimits

0x576f,	// (0x000145c3) grid_dialer2_keypad_pane

0xc0b2,	// (0x0001af06) bg_popup_call_pane_cp07_ParamLimits

0xc0b2,	// (0x0001af06) bg_popup_call_pane_cp07

0x578d,	// (0x000145e1) dialer2_ne_pane_t1_ParamLimits

0x578d,	// (0x000145e1) dialer2_ne_pane_t1

0x57ca,	// (0x0001461e) cell_dialer2_keypad_pane_ParamLimits

0x57ca,	// (0x0001461e) cell_dialer2_keypad_pane

0xce87,	// (0x0001bcdb) bg_button_pane_pane_cp04_ParamLimits

0xce87,	// (0x0001bcdb) bg_button_pane_pane_cp04

0x57ec,	// (0x00014640) cell_dialer2_keypad_pane_g1_ParamLimits

0x57ec,	// (0x00014640) cell_dialer2_keypad_pane_g1

0x1468,	// (0x000102bc) aid_placing_vt_set_content_ParamLimits

0x1468,	// (0x000102bc) aid_placing_vt_set_content

0x1490,	// (0x000102e4) aid_placing_vt_set_title_ParamLimits

0x1490,	// (0x000102e4) aid_placing_vt_set_title

0x9528,	// (0x0001837c) main_image3_pane

0x58b2,	// (0x00014706) area_side_right_pane_cp01_ParamLimits

0x58b2,	// (0x00014706) area_side_right_pane_cp01

0xcc2d,	// (0x0001ba81) main_image3_pane_g1_ParamLimits

0xcc2d,	// (0x0001ba81) main_image3_pane_g1

0x58c9,	// (0x0001471d) main_image3_pane_g2_ParamLimits

0x58c9,	// (0x0001471d) main_image3_pane_g2

0x58f1,	// (0x00014745) main_image3_pane_g3_ParamLimits

0x58f1,	// (0x00014745) main_image3_pane_g3

0x591b,	// (0x0001476f) main_image3_pane_g4_ParamLimits

0x591b,	// (0x0001476f) main_image3_pane_g4

0x0003,

0xf8c5,	// (0x0001e719) main_image3_pane_g_ParamLimits

0xf8c5,	// (0x0001e719) main_image3_pane_g

0x5945,	// (0x00014799) main_image3_pane_t1_ParamLimits

0x5945,	// (0x00014799) main_image3_pane_t1

0x599d,	// (0x000147f1) main_image3_pane_t2_ParamLimits

0x599d,	// (0x000147f1) main_image3_pane_t2

0x59ef,	// (0x00014843) main_image3_pane_t3_ParamLimits

0x59ef,	// (0x00014843) main_image3_pane_t3

0x0003,

0xf8ce,	// (0x0001e722) main_image3_pane_t_ParamLimits

0xf8ce,	// (0x0001e722) main_image3_pane_t

0x9598,	// (0x000183ec) grid_sctrl_middle_pane_cp01_ParamLimits

0x9598,	// (0x000183ec) grid_sctrl_middle_pane_cp01

0x5a77,	// (0x000148cb) cell_sctrl_middle_pane_cp01_ParamLimits

0x5a77,	// (0x000148cb) cell_sctrl_middle_pane_cp01

0x5a94,	// (0x000148e8) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x5a94,	// (0x000148e8) cell_sctrl_middle_pane_cp01_g1

0x9528,	// (0x0001837c) main_call4_pane

0x5aaa,	// (0x000148fe) aid_size_button_call4_ParamLimits

0x5aaa,	// (0x000148fe) aid_size_button_call4

0x5adb,	// (0x0001492f) call4_windows_pane_ParamLimits

0x5adb,	// (0x0001492f) call4_windows_pane

0x5afb,	// (0x0001494f) grid_call4_button_pane_ParamLimits

0x5afb,	// (0x0001494f) grid_call4_button_pane

0xcec5,	// (0x0001bd19) call4_windows_conf_pane

0xceda,	// (0x0001bd2e) popup_call4_audio_first_window_ParamLimits

0xceda,	// (0x0001bd2e) popup_call4_audio_first_window

0xcf26,	// (0x0001bd7a) popup_call4_audio_second_window_ParamLimits

0xcf26,	// (0x0001bd7a) popup_call4_audio_second_window

0xcf3a,	// (0x0001bd8e) popup_call4_audio_wait_window_ParamLimits

0xcf3a,	// (0x0001bd8e) popup_call4_audio_wait_window

0x5b28,	// (0x0001497c) cell_call4_button_pane_ParamLimits

0x5b28,	// (0x0001497c) cell_call4_button_pane

0x5b51,	// (0x000149a5) bg_button_pane_cp09_ParamLimits

0x5b51,	// (0x000149a5) bg_button_pane_cp09

0x5b5d,	// (0x000149b1) cell_call4_button_pane_g1_ParamLimits

0x5b5d,	// (0x000149b1) cell_call4_button_pane_g1

0x5b83,	// (0x000149d7) cell_call4_button_pane_t1_ParamLimits

0x5b83,	// (0x000149d7) cell_call4_button_pane_t1

0xcf82,	// (0x0001bdd6) popup_call4_audio_conf_window_ParamLimits

0xcf82,	// (0x0001bdd6) popup_call4_audio_conf_window

0x4db1,	// (0x00013c05) mup3_progress_pane_t1_ParamLimits

0x4dd0,	// (0x00013c24) mup3_progress_pane_t2_ParamLimits

0xc61e,	// (0x0001b472) mup3_progress_pane_t3_ParamLimits

0xf7a7,	// (0x0001e5fb) mup3_progress_pane_t_ParamLimits

0xc63b,	// (0x0001b48f) mup_progress_pane_cp03_ParamLimits

0x53bf,	// (0x00014213) mup3_control_keys_pane_g4_copy1

0xcdf3,	// (0x0001bc47) mp4_rocker2_pane_ParamLimits

0xcdf3,	// (0x0001bc47) mp4_rocker2_pane

0xcf96,	// (0x0001bdea) mp4_rocker2_pane_g1

0xcf9e,	// (0x0001bdf2) mp4_rocker2_pane_g2

0xcfa6,	// (0x0001bdfa) mp4_rocker2_pane_g3

0xcfae,	// (0x0001be02) mp4_rocker2_pane_g4

0xcfb6,	// (0x0001be0a) mp4_rocker2_pane_g5

0x0004,

0xf8d7,	// (0x0001e72b) mp4_rocker2_pane_g

0x9528,	// (0x0001837c) main_camera4_pane

0x9528,	// (0x0001837c) main_video4_pane

0x5642,	// (0x00014496) main_video_tele_dialer_pane_t1_ParamLimits

0x5642,	// (0x00014496) main_video_tele_dialer_pane_t1

0x565b,	// (0x000144af) main_video_tele_dialer_pane_t2_ParamLimits

0x565b,	// (0x000144af) main_video_tele_dialer_pane_t2

0x0001,

0xf891,	// (0x0001e6e5) main_video_tele_dialer_pane_t_ParamLimits

0xf891,	// (0x0001e6e5) main_video_tele_dialer_pane_t

0x5bc1,	// (0x00014a15) cam4_autofocus_pane_ParamLimits

0x5bc1,	// (0x00014a15) cam4_autofocus_pane

0x5bd7,	// (0x00014a2b) cam4_image_uncrop_pane_ParamLimits

0x5bd7,	// (0x00014a2b) cam4_image_uncrop_pane

0x5bf1,	// (0x00014a45) cam4_indicators_pane_ParamLimits

0x5bf1,	// (0x00014a45) cam4_indicators_pane

0x5c1c,	// (0x00014a70) main_camera4_pane_g1_ParamLimits

0x5c1c,	// (0x00014a70) main_camera4_pane_g1

0x5c2e,	// (0x00014a82) main_camera4_pane_g2_ParamLimits

0x5c2e,	// (0x00014a82) main_camera4_pane_g2

0x5c41,	// (0x00014a95) main_camera4_pane_g3_ParamLimits

0x5c41,	// (0x00014a95) main_camera4_pane_g3

0x5c54,	// (0x00014aa8) main_camera4_pane_g4_ParamLimits

0x5c54,	// (0x00014aa8) main_camera4_pane_g4

0x5c67,	// (0x00014abb) main_camera4_pane_g5_ParamLimits

0x5c67,	// (0x00014abb) main_camera4_pane_g5

0x0005,

0xf8e2,	// (0x0001e736) main_camera4_pane_g_ParamLimits

0xf8e2,	// (0x0001e736) main_camera4_pane_g

0x5c8b,	// (0x00014adf) main_camera4_pane_t1_ParamLimits

0x5c8b,	// (0x00014adf) main_camera4_pane_t1

0xc52f,	// (0x0001b383) bg_tb_trans_pane_cp06

0xcfe2,	// (0x0001be36) cam4_indicators_pane_g1

0xcff3,	// (0x0001be47) cam4_indicators_pane_g2

0x0002,

0xf8fd,	// (0x0001e751) cam4_indicators_pane_g

0xd011,	// (0x0001be65) cam4_indicators_pane_t1

0x5cef,	// (0x00014b43) main_video4_pane_g1_ParamLimits

0x5cef,	// (0x00014b43) main_video4_pane_g1

0x5cfe,	// (0x00014b52) main_video4_pane_g2_ParamLimits

0x5cfe,	// (0x00014b52) main_video4_pane_g2

0x5d0d,	// (0x00014b61) main_video4_pane_g3_ParamLimits

0x5d0d,	// (0x00014b61) main_video4_pane_g3

0x5d1c,	// (0x00014b70) main_video4_pane_g4_ParamLimits

0x5d1c,	// (0x00014b70) main_video4_pane_g4

0x0004,

0xf904,	// (0x0001e758) main_video4_pane_g_ParamLimits

0xf904,	// (0x0001e758) main_video4_pane_g

0x5d3a,	// (0x00014b8e) vid4_indicators_pane_ParamLimits

0x5d3a,	// (0x00014b8e) vid4_indicators_pane

0x5d68,	// (0x00014bbc) video4_image_uncrop_cif_pane_ParamLimits

0x5d68,	// (0x00014bbc) video4_image_uncrop_cif_pane

0x5d82,	// (0x00014bd6) video4_image_uncrop_nhd_pane_ParamLimits

0x5d82,	// (0x00014bd6) video4_image_uncrop_nhd_pane

0x5bd7,	// (0x00014a2b) video4_image_uncrop_vga_pane_ParamLimits

0x5bd7,	// (0x00014a2b) video4_image_uncrop_vga_pane

0x9598,	// (0x000183ec) bg_tb_trans_pane_cp07

0xd03b,	// (0x0001be8f) vid4_indicators_pane_g1

0xd04f,	// (0x0001bea3) vid4_indicators_pane_g2

0xd063,	// (0x0001beb7) vid4_indicators_pane_g3

0x0004,

0xf90f,	// (0x0001e763) vid4_indicators_pane_g

0xd090,	// (0x0001bee4) vid4_indicators_pane_t1

0x5d96,	// (0x00014bea) cam4_autofocus_pane_g1

0x5d9e,	// (0x00014bf2) cam4_autofocus_pane_g2

0x5da6,	// (0x00014bfa) cam4_autofocus_pane_g3

0x0002,

0xf91a,	// (0x0001e76e) cam4_autofocus_pane_g

0x5dae,	// (0x00014c02) cam4_autofocus_pane_g3_copy1

0x568a,	// (0x000144de) video_down_pane_cp_t1

0x5698,	// (0x000144ec) video_down_pane_cp_t2

0x0001,

0xf896,	// (0x0001e6ea) video_down_pane_cp_t

0x9598,	// (0x000183ec) popup_vitu2_window_ParamLimits

0x9598,	// (0x000183ec) popup_vitu2_window

0x5db6,	// (0x00014c0a) aid_size_cell2_itu2_ParamLimits

0x5db6,	// (0x00014c0a) aid_size_cell2_itu2

0x5ddc,	// (0x00014c30) aid_size_cell_itu2_ParamLimits

0x5ddc,	// (0x00014c30) aid_size_cell_itu2

0x5e38,	// (0x00014c8c) bg_popup_window_pane_cp09_ParamLimits

0x5e38,	// (0x00014c8c) bg_popup_window_pane_cp09

0x5e46,	// (0x00014c9a) field_vitu2_entry_pane_ParamLimits

0x5e46,	// (0x00014c9a) field_vitu2_entry_pane

0x5e6c,	// (0x00014cc0) grid_vitu2_function_pane_ParamLimits

0x5e6c,	// (0x00014cc0) grid_vitu2_function_pane

0x5ebd,	// (0x00014d11) grid_vitu2_itu_pane_ParamLimits

0x5ebd,	// (0x00014d11) grid_vitu2_itu_pane

0x5f4e,	// (0x00014da2) cell_vitu2_itu_pane_ParamLimits

0x5f4e,	// (0x00014da2) cell_vitu2_itu_pane

0x5f72,	// (0x00014dc6) cell_vitu2_function_pane_ParamLimits

0x5f72,	// (0x00014dc6) cell_vitu2_function_pane

0xd0a7,	// (0x0001befb) bg_popup_call_pane_cp08_ParamLimits

0xd0a7,	// (0x0001befb) bg_popup_call_pane_cp08

0xd0c0,	// (0x0001bf14) field_vitu2_entry_pane_g1

0xd0cc,	// (0x0001bf20) field_vitu2_entry_pane_g2

0x0002,

0xf921,	// (0x0001e775) field_vitu2_entry_pane_g

0xd0e6,	// (0x0001bf3a) field_vitu2_entry_pane_t1_ParamLimits

0xd0e6,	// (0x0001bf3a) field_vitu2_entry_pane_t1

0xd116,	// (0x0001bf6a) field_vitu2_entry_pane_t2_ParamLimits

0xd116,	// (0x0001bf6a) field_vitu2_entry_pane_t2

0x0001,

0xf928,	// (0x0001e77c) field_vitu2_entry_pane_t_ParamLimits

0xf928,	// (0x0001e77c) field_vitu2_entry_pane_t

0x5fb1,	// (0x00014e05) bg_button_pane_cp010_ParamLimits

0x5fb1,	// (0x00014e05) bg_button_pane_cp010

0x5fbf,	// (0x00014e13) cell_vitu2_itu_pane_g1

0x5fdd,	// (0x00014e31) cell_vitu2_itu_pane_t1_ParamLimits

0x5fdd,	// (0x00014e31) cell_vitu2_itu_pane_t1

0x6043,	// (0x00014e97) cell_vitu2_itu_pane_t2_ParamLimits

0x6043,	// (0x00014e97) cell_vitu2_itu_pane_t2

0x0002,

0xf932,	// (0x0001e786) cell_vitu2_itu_pane_t_ParamLimits

0xf932,	// (0x0001e786) cell_vitu2_itu_pane_t

0x9598,	// (0x000183ec) bg_button_pane_cp011

0x611f,	// (0x00014f73) cell_vitu2_function_pane_g1

0x9528,	// (0x0001837c) main_myfav_hc_pane

0x5a3f,	// (0x00014893) popup_image3_note_pane_ParamLimits

0x5a3f,	// (0x00014893) popup_image3_note_pane

0x5a5b,	// (0x000148af) popup_image3_tool_bar_pane_ParamLimits

0x5a5b,	// (0x000148af) popup_image3_tool_bar_pane

0x60c7,	// (0x00014f1b) cell_vitu2_itu_pane_t3_ParamLimits

0x60c7,	// (0x00014f1b) cell_vitu2_itu_pane_t3

0x9528,	// (0x0001837c) bg_popup_trans_pane

0xd13b,	// (0x0001bf8f) grid_image3_tool_bar_pane

0xd145,	// (0x0001bf99) bg_popup_trans_pane_g1

0xa1c8,	// (0x0001901c) bg_popup_trans_pane_g2

0xd14d,	// (0x0001bfa1) bg_popup_trans_pane_g3

0xd155,	// (0x0001bfa9) bg_popup_trans_pane_g4

0xd15d,	// (0x0001bfb1) bg_popup_trans_pane_g5

0xd165,	// (0x0001bfb9) bg_popup_trans_pane_g6

0xd16d,	// (0x0001bfc1) bg_popup_trans_pane_g7

0xd175,	// (0x0001bfc9) bg_popup_trans_pane_g8

0xa1a8,	// (0x00018ffc) bg_popup_trans_pane_g9

0x0008,

0xf939,	// (0x0001e78d) bg_popup_trans_pane_g

0xd17d,	// (0x0001bfd1) cell_image3_tool_bar_pane_ParamLimits

0xd17d,	// (0x0001bfd1) cell_image3_tool_bar_pane

0xc2cf,	// (0x0001b123) cell_image3_tool_bar_pane_g1

0x9528,	// (0x0001837c) bg_popup_trans_pane_cp1

0xd191,	// (0x0001bfe5) popup_image3_note_pane_t1

0xd19f,	// (0x0001bff3) popup_image3_note_pane_t2

0xd1ad,	// (0x0001c001) popup_image3_note_pane_t3

0x0002,

0xf94c,	// (0x0001e7a0) popup_image3_note_pane_t

0xd1bb,	// (0x0001c00f) popup_image3_note_pane_t3_copy1

0x6133,	// (0x00014f87) bg_myfav_hc_instruction_pane_ParamLimits

0x6133,	// (0x00014f87) bg_myfav_hc_instruction_pane

0x6149,	// (0x00014f9d) cell_myfav_contact_pane_ParamLimits

0x6149,	// (0x00014f9d) cell_myfav_contact_pane

0x6167,	// (0x00014fbb) cell_myfav_contact_pane_cp1_ParamLimits

0x6167,	// (0x00014fbb) cell_myfav_contact_pane_cp1

0x617f,	// (0x00014fd3) cell_myfav_contact_pane_cp2_ParamLimits

0x617f,	// (0x00014fd3) cell_myfav_contact_pane_cp2

0x6197,	// (0x00014feb) cell_myfav_contact_pane_cp3_ParamLimits

0x6197,	// (0x00014feb) cell_myfav_contact_pane_cp3

0x61ae,	// (0x00015002) cell_myfav_contact_pane_cp4_ParamLimits

0x61ae,	// (0x00015002) cell_myfav_contact_pane_cp4

0x61c6,	// (0x0001501a) cell_myfav_contact_pane_cp5_ParamLimits

0x61c6,	// (0x0001501a) cell_myfav_contact_pane_cp5

0x61da,	// (0x0001502e) cell_myfav_contact_pane_cp6_ParamLimits

0x61da,	// (0x0001502e) cell_myfav_contact_pane_cp6

0x61f0,	// (0x00015044) cell_myfav_contact_pane_cp7_ParamLimits

0x61f0,	// (0x00015044) cell_myfav_contact_pane_cp7

0xd1ff,	// (0x0001c053) listscroll_gen_pane_cp05

0x620a,	// (0x0001505e) main_myfav_hc_pane_g1_ParamLimits

0x620a,	// (0x0001505e) main_myfav_hc_pane_g1

0x6224,	// (0x00015078) main_myfav_hc_pane_g2_ParamLimits

0x6224,	// (0x00015078) main_myfav_hc_pane_g2

0x0002,

0xf953,	// (0x0001e7a7) main_myfav_hc_pane_g_ParamLimits

0xf953,	// (0x0001e7a7) main_myfav_hc_pane_g

0x6256,	// (0x000150aa) main_myfav_hc_pane_t1_ParamLimits

0x6256,	// (0x000150aa) main_myfav_hc_pane_t1

0xd208,	// (0x0001c05c) main_myfav_hc_pane_t2_ParamLimits

0xd208,	// (0x0001c05c) main_myfav_hc_pane_t2

0xd21a,	// (0x0001c06e) main_myfav_hc_pane_t3_ParamLimits

0xd21a,	// (0x0001c06e) main_myfav_hc_pane_t3

0x626d,	// (0x000150c1) main_myfav_hc_pane_t4_ParamLimits

0x626d,	// (0x000150c1) main_myfav_hc_pane_t4

0x0004,

0xf95a,	// (0x0001e7ae) main_myfav_hc_pane_t_ParamLimits

0xf95a,	// (0x0001e7ae) main_myfav_hc_pane_t

0xc2cf,	// (0x0001b123) bg_myfav_hc_instruction_pane_g1

0xd22c,	// (0x0001c080) cell_myfav_contact_pane_g1_ParamLimits

0xd22c,	// (0x0001c080) cell_myfav_contact_pane_g1

0xd22c,	// (0x0001c080) cell_myfav_contact_pane_g2_ParamLimits

0xd22c,	// (0x0001c080) cell_myfav_contact_pane_g2

0xd238,	// (0x0001c08c) cell_myfav_contact_pane_g3_ParamLimits

0xd238,	// (0x0001c08c) cell_myfav_contact_pane_g3

0xc608,	// (0x0001b45c) cell_myfav_contact_pane_g4_ParamLimits

0xc608,	// (0x0001b45c) cell_myfav_contact_pane_g4

0xd245,	// (0x0001c099) cell_myfav_contact_pane_g5_ParamLimits

0xd245,	// (0x0001c099) cell_myfav_contact_pane_g5

0x0004,

0xf965,	// (0x0001e7b9) cell_myfav_contact_pane_g_ParamLimits

0xf965,	// (0x0001e7b9) cell_myfav_contact_pane_g

0x623e,	// (0x00015092) main_myfav_hc_pane_g3_ParamLimits

0x623e,	// (0x00015092) main_myfav_hc_pane_g3

0x03be,	// (0x0000f212) popup_adpt_find_window

0x6295,	// (0x000150e9) afind_page_pane_ParamLimits

0x6295,	// (0x000150e9) afind_page_pane

0x62aa,	// (0x000150fe) aid_size_cell_afind_ParamLimits

0x62aa,	// (0x000150fe) aid_size_cell_afind

0x62c8,	// (0x0001511c) bg_popup_sub_pane_cp09_ParamLimits

0x62c8,	// (0x0001511c) bg_popup_sub_pane_cp09

0x62d5,	// (0x00015129) find_pane_cp01_ParamLimits

0x62d5,	// (0x00015129) find_pane_cp01

0xd251,	// (0x0001c0a5) grid_afind_control_pane_ParamLimits

0xd251,	// (0x0001c0a5) grid_afind_control_pane

0x62e2,	// (0x00015136) grid_afind_pane_ParamLimits

0x62e2,	// (0x00015136) grid_afind_pane

0x6301,	// (0x00015155) cell_afind_pane_ParamLimits

0x6301,	// (0x00015155) cell_afind_pane

0xc2cf,	// (0x0001b123) afind_page_pane_g1

0x6362,	// (0x000151b6) afind_page_pane_g2

0x636b,	// (0x000151bf) afind_page_pane_g3

0x0002,

0xf970,	// (0x0001e7c4) afind_page_pane_g

0x6374,	// (0x000151c8) afind_page_pane_t1

0xd265,	// (0x0001c0b9) cell_afind_grid_control_pane_ParamLimits

0xd265,	// (0x0001c0b9) cell_afind_grid_control_pane

0xce87,	// (0x0001bcdb) bg_button_pane_cp69_ParamLimits

0xce87,	// (0x0001bcdb) bg_button_pane_cp69

0x6394,	// (0x000151e8) cell_afind_pane_g1_ParamLimits

0x6394,	// (0x000151e8) cell_afind_pane_g1

0x63a1,	// (0x000151f5) cell_afind_pane_t1_ParamLimits

0x63a1,	// (0x000151f5) cell_afind_pane_t1

0x9fc1,	// (0x00018e15) bg_button_pane_cp72

0xd274,	// (0x0001c0c8) cell_afind_grid_control_pane_g1

0x336a,	// (0x000121be) aid_image_placing_area_ParamLimits

0x336a,	// (0x000121be) aid_image_placing_area

0xc91c,	// (0x0001b770) field_vitu_entry_pane_g1_ParamLimits

0xc91c,	// (0x0001b770) field_vitu_entry_pane_g1

0xc928,	// (0x0001b77c) field_vitu_entry_pane_g2_ParamLimits

0xc928,	// (0x0001b77c) field_vitu_entry_pane_g2

0x0001,

0xf821,	// (0x0001e675) field_vitu_entry_pane_g_ParamLimits

0xf821,	// (0x0001e675) field_vitu_entry_pane_g

0x548b,	// (0x000142df) cell_vitu_itu_pane_g1_ParamLimits

0x54db,	// (0x0001432f) cell_vitu_itu_pane_t3_ParamLimits

0x54db,	// (0x0001432f) cell_vitu_itu_pane_t3

0xce37,	// (0x0001bc8b) mp4_progress_pane_t1_ParamLimits

0xce50,	// (0x0001bca4) mp4_progress_pane_t2_ParamLimits

0xf8b6,	// (0x0001e70a) mp4_progress_pane_t_ParamLimits

0xce69,	// (0x0001bcbd) mup_progress_pane_cp04_ParamLimits

0x6281,	// (0x000150d5) main_myfav_hc_pane_t5_ParamLimits

0x6281,	// (0x000150d5) main_myfav_hc_pane_t5

0x954e,	// (0x000183a2) aid_zoom_text_primary

0x03be,	// (0x0000f212) popup_adpt_find_window_ParamLimits

0x9598,	// (0x000183ec) main_cam_set_pane

0x5c08,	// (0x00014a5c) cam4_zoom_pane_ParamLimits

0x5c08,	// (0x00014a5c) cam4_zoom_pane

0x63b3,	// (0x00015207) main_cam_set_pane_g1_ParamLimits

0x63b3,	// (0x00015207) main_cam_set_pane_g1

0x63c1,	// (0x00015215) main_cam_set_pane_g2_ParamLimits

0x63c1,	// (0x00015215) main_cam_set_pane_g2

0x0001,

0xf977,	// (0x0001e7cb) main_cam_set_pane_g_ParamLimits

0xf977,	// (0x0001e7cb) main_cam_set_pane_g

0x63e2,	// (0x00015236) main_cam_set_pane_t1_ParamLimits

0x63e2,	// (0x00015236) main_cam_set_pane_t1

0x63fd,	// (0x00015251) main_cset_listscroll_pane_ParamLimits

0x63fd,	// (0x00015251) main_cset_listscroll_pane

0x641d,	// (0x00015271) main_cset_slider_pane_ParamLimits

0x641d,	// (0x00015271) main_cset_slider_pane

0xd285,	// (0x0001c0d9) main_cset_list_pane_ParamLimits

0xd285,	// (0x0001c0d9) main_cset_list_pane

0xd295,	// (0x0001c0e9) scroll_pane_cp028

0x6443,	// (0x00015297) aid_area_touch_slider

0x645f,	// (0x000152b3) cset_slider_pane

0x6489,	// (0x000152dd) main_cset_slider_pane_g1

0x649e,	// (0x000152f2) main_cset_slider_pane_g2

0x0011,

0xf97c,	// (0x0001e7d0) main_cset_slider_pane_g

0xd2ce,	// (0x0001c122) main_cset_slider_pane_t1

0x655a,	// (0x000153ae) main_cset_slider_pane_t2

0x6574,	// (0x000153c8) main_cset_slider_pane_t3

0x658e,	// (0x000153e2) main_cset_slider_pane_t4

0x65a8,	// (0x000153fc) main_cset_slider_pane_t5

0x65c2,	// (0x00015416) main_cset_slider_pane_t6

0x65d7,	// (0x0001542b) main_cset_slider_pane_t7

0x000e,

0xf9a1,	// (0x0001e7f5) main_cset_slider_pane_t

0x66db,	// (0x0001552f) cset_list_set_pane_ParamLimits

0x66db,	// (0x0001552f) cset_list_set_pane

0x66ee,	// (0x00015542) aid_position_infowindow_above

0x66f6,	// (0x0001554a) aid_position_infowindow_below

0x66fe,	// (0x00015552) cset_list_set_pane_g1_ParamLimits

0x66fe,	// (0x00015552) cset_list_set_pane_g1

0x670a,	// (0x0001555e) cset_list_set_pane_g3_ParamLimits

0x670a,	// (0x0001555e) cset_list_set_pane_g3

0x0001,

0xf9c0,	// (0x0001e814) cset_list_set_pane_g_ParamLimits

0xf9c0,	// (0x0001e814) cset_list_set_pane_g

0x6719,	// (0x0001556d) cset_list_set_pane_t1_ParamLimits

0x6719,	// (0x0001556d) cset_list_set_pane_t1

0x9598,	// (0x000183ec) list_highlight_pane_cp021_ParamLimits

0x9598,	// (0x000183ec) list_highlight_pane_cp021

0xaa5c,	// (0x000198b0) cset_slider_pane_g1

0xaa6e,	// (0x000198c2) cset_slider_pane_g2

0xaa65,	// (0x000198b9) cset_slider_pane_g3

0x0002,

0xf9c5,	// (0x0001e819) cset_slider_pane_g

0xd36e,	// (0x0001c1c2) aid_area_touch_cam4_zoom

0xd376,	// (0x0001c1ca) cam4_zoom_cont_pane

0xd37e,	// (0x0001c1d2) cam4_zoom_pane_g1

0xd386,	// (0x0001c1da) cam4_zoom_pane_g2

0x672e,	// (0x00015582) cam4_zoom_pane_g3

0x0002,

0xf9cc,	// (0x0001e820) cam4_zoom_pane_g

0xd38e,	// (0x0001c1e2) cam4_zoom_cont_pane_g1

0xd397,	// (0x0001c1eb) cam4_zoom_cont_pane_g2

0xd3a0,	// (0x0001c1f4) cam4_zoom_cont_pane_g3

0x0002,

0xf9d3,	// (0x0001e827) cam4_zoom_cont_pane_g

0x5ac8,	// (0x0001491c) call4_image_pane_ParamLimits

0x5ac8,	// (0x0001491c) call4_image_pane

0xcec5,	// (0x0001bd19) call4_windows_conf_pane_ParamLimits

0xcf04,	// (0x0001bd58) popup_call4_audio_in_window_ParamLimits

0xcf04,	// (0x0001bd58) popup_call4_audio_in_window

0x9528,	// (0x0001837c) bg_popup_call2_act_pane_cp02

0xcf7a,	// (0x0001bdce) call4_list_conf_pane

0xc2cf,	// (0x0001b123) call4_image_pane_g1

0xc2cf,	// (0x0001b123) call4_image_pane_g2

0x0001,

0xf6e7,	// (0x0001e53b) call4_image_pane_g

0xd3a9,	// (0x0001c1fd) list_single_graphic_popup_conf4_pane_ParamLimits

0xd3a9,	// (0x0001c1fd) list_single_graphic_popup_conf4_pane

0x9528,	// (0x0001837c) list_highlight_pane_cp022

0xd3bc,	// (0x0001c210) list_single_graphic_popup_conf4_pane_g1

0xa723,	// (0x00019577) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9da,	// (0x0001e82e) list_single_graphic_popup_conf4_pane_g

0xd3c4,	// (0x0001c218) list_single_graphic_popup_conf4_pane_t1

0x15b4,	// (0x00010408) popup_vtel_slider_window_ParamLimits

0x15b4,	// (0x00010408) popup_vtel_slider_window

0xce75,	// (0x0001bcc9) dialer2_ne_pane_t2_ParamLimits

0xce75,	// (0x0001bcc9) dialer2_ne_pane_t2

0x0001,

0xf8bb,	// (0x0001e70f) dialer2_ne_pane_t_ParamLimits

0xf8bb,	// (0x0001e70f) dialer2_ne_pane_t

0xc0b2,	// (0x0001af06) bg_popup_sub_pane_cp010_ParamLimits

0xc0b2,	// (0x0001af06) bg_popup_sub_pane_cp010

0x6736,	// (0x0001558a) popup_vtel_slider_window_g1_ParamLimits

0x6736,	// (0x0001558a) popup_vtel_slider_window_g1

0x6749,	// (0x0001559d) popup_vtel_slider_window_g2_ParamLimits

0x6749,	// (0x0001559d) popup_vtel_slider_window_g2

0x0003,

0xf9df,	// (0x0001e833) popup_vtel_slider_window_g_ParamLimits

0xf9df,	// (0x0001e833) popup_vtel_slider_window_g

0x679f,	// (0x000155f3) vtel_slider_pane_ParamLimits

0x679f,	// (0x000155f3) vtel_slider_pane

0x67c1,	// (0x00015615) vtel_slider_pane_g1_ParamLimits

0x67c1,	// (0x00015615) vtel_slider_pane_g1

0x67d5,	// (0x00015629) vtel_slider_pane_g2_ParamLimits

0x67d5,	// (0x00015629) vtel_slider_pane_g2

0x67ed,	// (0x00015641) vtel_slider_pane_g3_ParamLimits

0x67ed,	// (0x00015641) vtel_slider_pane_g3

0x67c1,	// (0x00015615) vtel_slider_pane_g4_ParamLimits

0x67c1,	// (0x00015615) vtel_slider_pane_g4

0x6803,	// (0x00015657) vtel_slider_pane_g5_ParamLimits

0x6803,	// (0x00015657) vtel_slider_pane_g5

0x0004,

0xf9e8,	// (0x0001e83c) vtel_slider_pane_g_ParamLimits

0xf9e8,	// (0x0001e83c) vtel_slider_pane_g

0x9528,	// (0x0001837c) main_gallery2_pane

0x5e08,	// (0x00014c5c) aid_size_row_itut2_dropdow_list_ParamLimits

0x5e08,	// (0x00014c5c) aid_size_row_itut2_dropdow_list

0x5e94,	// (0x00014ce8) grid_vitu2_function_top_pane_ParamLimits

0x5e94,	// (0x00014ce8) grid_vitu2_function_top_pane

0x5ef9,	// (0x00014d4d) popup_vitu2_dropdown_list_window_ParamLimits

0x5ef9,	// (0x00014d4d) popup_vitu2_dropdown_list_window

0x5f22,	// (0x00014d76) popup_vitu2_match_list_window

0x6827,	// (0x0001567b) cell_vitu2_function_top_pane_ParamLimits

0x6827,	// (0x0001567b) cell_vitu2_function_top_pane

0x6845,	// (0x00015699) cell_vitu2_function_top_pane_cp01_ParamLimits

0x6845,	// (0x00015699) cell_vitu2_function_top_pane_cp01

0x6863,	// (0x000156b7) cell_vitu2_function_top_wide_pane_ParamLimits

0x6863,	// (0x000156b7) cell_vitu2_function_top_wide_pane

0x9598,	// (0x000183ec) bg_button_pane_cp012

0x6881,	// (0x000156d5) cell_vitu2_function_top_pane_g1

0xd3da,	// (0x0001c22e) bg_button_pane_cp013_ParamLimits

0xd3da,	// (0x0001c22e) bg_button_pane_cp013

0x6895,	// (0x000156e9) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x6895,	// (0x000156e9) cell_vitu2_function_top_wide_pane_g1

0x9598,	// (0x000183ec) bg_popup_sub_pane_cp20

0x68ad,	// (0x00015701) list_vitu2_match_list_pane

0xd145,	// (0x0001bf99) bg_popup_sub_pane_cp20_g1

0xd14d,	// (0x0001bfa1) bg_popup_sub_pane_cp20_g2

0xa1c8,	// (0x0001901c) bg_popup_sub_pane_cp20_g3

0xd155,	// (0x0001bfa9) bg_popup_sub_pane_cp20_g4

0xa1a8,	// (0x00018ffc) bg_popup_sub_pane_cp20_g5

0xd3f6,	// (0x0001c24a) bg_popup_sub_pane_cp20_g6

0xd165,	// (0x0001bfb9) bg_popup_sub_pane_cp20_g7

0xd16d,	// (0x0001bfc1) bg_popup_sub_pane_cp20_g8

0xd175,	// (0x0001bfc9) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9f3,	// (0x0001e847) bg_popup_sub_pane_cp20_g

0xd3fe,	// (0x0001c252) list_vitu2_match_list_item_pane_ParamLimits

0xd3fe,	// (0x0001c252) list_vitu2_match_list_item_pane

0xd410,	// (0x0001c264) list_vitu2_match_list_item_pane_t1

0x9528,	// (0x0001837c) bg_popup_sub_pane_cp21

0xa5b4,	// (0x00019408) grid_vitu2_dropdown_list_pane

0x6915,	// (0x00015769) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x6915,	// (0x00015769) cell_vitu2_dropdown_list_char_pane

0x6936,	// (0x0001578a) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x6936,	// (0x0001578a) cell_vitu2_dropdown_list_ctrl_pane

0xd41e,	// (0x0001c272) cell_vitu2_dropdown_list_char_pane_g1

0xd427,	// (0x0001c27b) cell_vitu2_dropdown_list_char_pane_g2

0xd430,	// (0x0001c284) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa10,	// (0x0001e864) cell_vitu2_dropdown_list_char_pane_g

0x6962,	// (0x000157b6) cell_vitu2_dropdown_list_char_pane_t1

0x6970,	// (0x000157c4) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x6970,	// (0x000157c4) cell_vitu2_dropdown_list_ctrl_pane_g1

0x6980,	// (0x000157d4) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x6980,	// (0x000157d4) cell_vitu2_dropdown_list_ctrl_pane_g2

0x6991,	// (0x000157e5) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x6991,	// (0x000157e5) cell_vitu2_dropdown_list_ctrl_pane_g3

0x69a1,	// (0x000157f5) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x69a1,	// (0x000157f5) cell_vitu2_dropdown_list_ctrl_pane_g4

0xc52f,	// (0x0001b383) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xc52f,	// (0x0001b383) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa17,	// (0x0001e86b) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa17,	// (0x0001e86b) cell_vitu2_dropdown_list_ctrl_pane_g

0x69bd,	// (0x00015811) aid_size_cell_gallery2_ParamLimits

0x69bd,	// (0x00015811) aid_size_cell_gallery2

0x69d3,	// (0x00015827) grid_gallery2_pane_ParamLimits

0x69d3,	// (0x00015827) grid_gallery2_pane

0x69e7,	// (0x0001583b) scroll_pane_cp029_ParamLimits

0x69e7,	// (0x0001583b) scroll_pane_cp029

0x69f3,	// (0x00015847) cell_gallery2_pane_ParamLimits

0x69f3,	// (0x00015847) cell_gallery2_pane

0xd439,	// (0x0001c28d) cell_gallery2_pane_g2

0x6a29,	// (0x0001587d) cell_gallery2_pane_g3

0xd443,	// (0x0001c297) cell_gallery2_pane_g4

0xd44b,	// (0x0001c29f) cell_gallery2_pane_g5

0xa906,	// (0x0001975a) grid_highlight_pane_cp10

0x5f22,	// (0x00014d76) popup_vitu2_match_list_window_ParamLimits

0x5f37,	// (0x00014d8b) popup_vitu2_query_window_ParamLimits

0x5f37,	// (0x00014d8b) popup_vitu2_query_window

0x9528,	// (0x0001837c) bg_vitu2_candi_button_pane

0xd41e,	// (0x0001c272) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd427,	// (0x0001c27b) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd430,	// (0x0001c284) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x6a31,	// (0x00015885) bg_button_pane_cp015

0x6a45,	// (0x00015899) bg_button_pane_cp016

0x6a58,	// (0x000158ac) bg_button_pane_cp017

0xbdb2,	// (0x0001ac06) bg_popup_sub_pane_cp22

0xd453,	// (0x0001c2a7) popup_vitu2_query_window_g1

0x6a9d,	// (0x000158f1) popup_vitu2_query_window_g2

0x0002,

0xfa22,	// (0x0001e876) popup_vitu2_query_window_g

0x6abc,	// (0x00015910) popup_vitu2_query_window_t1_ParamLimits

0x6abc,	// (0x00015910) popup_vitu2_query_window_t1

0x6af1,	// (0x00015945) popup_vitu2_query_window_t2_ParamLimits

0x6af1,	// (0x00015945) popup_vitu2_query_window_t2

0x6b03,	// (0x00015957) popup_vitu2_query_window_t3_ParamLimits

0x6b03,	// (0x00015957) popup_vitu2_query_window_t3

0x6b2b,	// (0x0001597f) popup_vitu2_query_window_t4_ParamLimits

0x6b2b,	// (0x0001597f) popup_vitu2_query_window_t4

0x6b4c,	// (0x000159a0) popup_vitu2_query_window_t5_ParamLimits

0x6b4c,	// (0x000159a0) popup_vitu2_query_window_t5

0x0006,

0xfa29,	// (0x0001e87d) popup_vitu2_query_window_t_ParamLimits

0xfa29,	// (0x0001e87d) popup_vitu2_query_window_t

0xd27d,	// (0x0001c0d1) main_cset_text_pane

0x6443,	// (0x00015297) aid_area_touch_slider_ParamLimits

0x645f,	// (0x000152b3) cset_slider_pane_ParamLimits

0x6489,	// (0x000152dd) main_cset_slider_pane_g1_ParamLimits

0x649e,	// (0x000152f2) main_cset_slider_pane_g2_ParamLimits

0xd29e,	// (0x0001c0f2) main_cset_slider_pane_g3_ParamLimits

0xd29e,	// (0x0001c0f2) main_cset_slider_pane_g3

0x64b3,	// (0x00015307) main_cset_slider_pane_g4_ParamLimits

0x64b3,	// (0x00015307) main_cset_slider_pane_g4

0x64c2,	// (0x00015316) main_cset_slider_pane_g5_ParamLimits

0x64c2,	// (0x00015316) main_cset_slider_pane_g5

0x64ce,	// (0x00015322) main_cset_slider_pane_g6_ParamLimits

0x64ce,	// (0x00015322) main_cset_slider_pane_g6

0xf97c,	// (0x0001e7d0) main_cset_slider_pane_g_ParamLimits

0xd2ce,	// (0x0001c122) main_cset_slider_pane_t1_ParamLimits

0x655a,	// (0x000153ae) main_cset_slider_pane_t2_ParamLimits

0x6574,	// (0x000153c8) main_cset_slider_pane_t3_ParamLimits

0x658e,	// (0x000153e2) main_cset_slider_pane_t4_ParamLimits

0x65a8,	// (0x000153fc) main_cset_slider_pane_t5_ParamLimits

0x65c2,	// (0x00015416) main_cset_slider_pane_t6_ParamLimits

0x65d7,	// (0x0001542b) main_cset_slider_pane_t7_ParamLimits

0x6601,	// (0x00015455) main_cset_slider_pane_t8_ParamLimits

0x6601,	// (0x00015455) main_cset_slider_pane_t8

0x6629,	// (0x0001547d) main_cset_slider_pane_t9_ParamLimits

0x6629,	// (0x0001547d) main_cset_slider_pane_t9

0x6651,	// (0x000154a5) main_cset_slider_pane_t10_ParamLimits

0x6651,	// (0x000154a5) main_cset_slider_pane_t10

0x6679,	// (0x000154cd) main_cset_slider_pane_t11_ParamLimits

0x6679,	// (0x000154cd) main_cset_slider_pane_t11

0x66a1,	// (0x000154f5) main_cset_slider_pane_t12_ParamLimits

0x66a1,	// (0x000154f5) main_cset_slider_pane_t12

0x66be,	// (0x00015512) main_cset_slider_pane_t13_ParamLimits

0x66be,	// (0x00015512) main_cset_slider_pane_t13

0xf9a1,	// (0x0001e7f5) main_cset_slider_pane_t_ParamLimits

0x9528,	// (0x0001837c) bg_popup_sub_pane_cp011

0xd45f,	// (0x0001c2b3) main_cset_text_pane_g1

0xd467,	// (0x0001c2bb) main_cset_text_pane_t1

0xd475,	// (0x0001c2c9) main_cset_text_pane_t2

0xd483,	// (0x0001c2d7) main_cset_text_pane_t3

0xd491,	// (0x0001c2e5) main_cset_text_pane_t4

0xd49f,	// (0x0001c2f3) main_cset_text_pane_t5

0xd4ad,	// (0x0001c301) main_cset_text_pane_t6

0xd4bb,	// (0x0001c30f) main_cset_text_pane_t7

0x0006,

0xfa38,	// (0x0001e88c) main_cset_text_pane_t

0x9528,	// (0x0001837c) main_cam4_burst_pane

0x9528,	// (0x0001837c) main_cam5_pane

0x6382,	// (0x000151d6) bg_button_pane_cp019

0x638b,	// (0x000151df) bg_button_pane_cp020

0xd2aa,	// (0x0001c0fe) main_cset_slider_pane_g7_ParamLimits

0xd2aa,	// (0x0001c0fe) main_cset_slider_pane_g7

0xd2b6,	// (0x0001c10a) main_cset_slider_pane_g8_ParamLimits

0xd2b6,	// (0x0001c10a) main_cset_slider_pane_g8

0x64e2,	// (0x00015336) main_cset_slider_pane_g9_ParamLimits

0x64e2,	// (0x00015336) main_cset_slider_pane_g9

0x64ee,	// (0x00015342) main_cset_slider_pane_g10_ParamLimits

0x64ee,	// (0x00015342) main_cset_slider_pane_g10

0x64fa,	// (0x0001534e) main_cset_slider_pane_g11_ParamLimits

0x64fa,	// (0x0001534e) main_cset_slider_pane_g11

0x6506,	// (0x0001535a) main_cset_slider_pane_g12_ParamLimits

0x6506,	// (0x0001535a) main_cset_slider_pane_g12

0x6512,	// (0x00015366) main_cset_slider_pane_g13_ParamLimits

0x6512,	// (0x00015366) main_cset_slider_pane_g13

0x651e,	// (0x00015372) main_cset_slider_pane_g14_ParamLimits

0x651e,	// (0x00015372) main_cset_slider_pane_g14

0x652a,	// (0x0001537e) main_cset_slider_pane_g15_ParamLimits

0x652a,	// (0x0001537e) main_cset_slider_pane_g15

0xd2fc,	// (0x0001c150) main_cset_slider_pane_t14_ParamLimits

0xd2fc,	// (0x0001c150) main_cset_slider_pane_t14

0xd335,	// (0x0001c189) main_cset_slider_pane_t15_ParamLimits

0xd335,	// (0x0001c189) main_cset_slider_pane_t15

0x6bc3,	// (0x00015a17) aid_cam4_burst_size_cell_ParamLimits

0x6bc3,	// (0x00015a17) aid_cam4_burst_size_cell

0x6be3,	// (0x00015a37) grid_cam4_burst_pane_ParamLimits

0x6be3,	// (0x00015a37) grid_cam4_burst_pane

0x6c1b,	// (0x00015a6f) linegrid_cam4_burst_pane_ParamLimits

0x6c1b,	// (0x00015a6f) linegrid_cam4_burst_pane

0xd4c9,	// (0x0001c31d) scroll_pane_cp30_ParamLimits

0xd4c9,	// (0x0001c31d) scroll_pane_cp30

0x6c41,	// (0x00015a95) cell_cam4_burst_pane_ParamLimits

0x6c41,	// (0x00015a95) cell_cam4_burst_pane

0xd4d5,	// (0x0001c329) linegrid_cam4_burst_pane_g1_ParamLimits

0xd4d5,	// (0x0001c329) linegrid_cam4_burst_pane_g1

0x6c8e,	// (0x00015ae2) linegrid_cam4_burst_pane_g2_ParamLimits

0x6c8e,	// (0x00015ae2) linegrid_cam4_burst_pane_g2

0xd4e2,	// (0x0001c336) linegrid_cam4_burst_pane_g3_ParamLimits

0xd4e2,	// (0x0001c336) linegrid_cam4_burst_pane_g3

0x0002,

0xfa47,	// (0x0001e89b) linegrid_cam4_burst_pane_g_ParamLimits

0xfa47,	// (0x0001e89b) linegrid_cam4_burst_pane_g

0x6c9f,	// (0x00015af3) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x6c9f,	// (0x00015af3) linegrid_cam4_burst_pane_g3_copy1

0xd4ef,	// (0x0001c343) linegrid_cam4_burst_pane_g4_ParamLimits

0xd4ef,	// (0x0001c343) linegrid_cam4_burst_pane_g4

0x6cb9,	// (0x00015b0d) linegrid_cam4_burst_pane_g5_ParamLimits

0x6cb9,	// (0x00015b0d) linegrid_cam4_burst_pane_g5

0x6cca,	// (0x00015b1e) linegrid_cam4_burst_pane_g6_ParamLimits

0x6cca,	// (0x00015b1e) linegrid_cam4_burst_pane_g6

0xd4fc,	// (0x0001c350) linegrid_cam4_burst_pane_g7_ParamLimits

0xd4fc,	// (0x0001c350) linegrid_cam4_burst_pane_g7

0x6ce1,	// (0x00015b35) cell_cam4_burst_pane_g1

0xd515,	// (0x0001c369) main_cam5_pane_t1_ParamLimits

0xd515,	// (0x0001c369) main_cam5_pane_t1

0xd527,	// (0x0001c37b) main_cam5_pane_t2_ParamLimits

0xd527,	// (0x0001c37b) main_cam5_pane_t2

0xd539,	// (0x0001c38d) main_cam5_pane_t3_ParamLimits

0xd539,	// (0x0001c38d) main_cam5_pane_t3

0xd54b,	// (0x0001c39f) main_cam5_pane_t4_ParamLimits

0xd54b,	// (0x0001c39f) main_cam5_pane_t4

0xd563,	// (0x0001c3b7) main_cam5_pane_t5_ParamLimits

0xd563,	// (0x0001c3b7) main_cam5_pane_t5

0xd577,	// (0x0001c3cb) main_cam5_pane_t6_ParamLimits

0xd577,	// (0x0001c3cb) main_cam5_pane_t6

0xd58b,	// (0x0001c3df) main_cam5_pane_t7_ParamLimits

0xd58b,	// (0x0001c3df) main_cam5_pane_t7

0xd59d,	// (0x0001c3f1) main_cam5_pane_t8_ParamLimits

0xd59d,	// (0x0001c3f1) main_cam5_pane_t8

0xd5b9,	// (0x0001c40d) main_cam5_pane_t9_ParamLimits

0xd5b9,	// (0x0001c40d) main_cam5_pane_t9

0xd5cb,	// (0x0001c41f) main_cam5_pane_t10_ParamLimits

0xd5cb,	// (0x0001c41f) main_cam5_pane_t10

0xd5dd,	// (0x0001c431) main_cam5_pane_t11_ParamLimits

0xd5dd,	// (0x0001c431) main_cam5_pane_t11

0xd5ef,	// (0x0001c443) main_cam5_pane_t12_ParamLimits

0xd5ef,	// (0x0001c443) main_cam5_pane_t12

0xd604,	// (0x0001c458) main_cam5_pane_t13_ParamLimits

0xd604,	// (0x0001c458) main_cam5_pane_t13

0x000c,

0xfa53,	// (0x0001e8a7) main_cam5_pane_t_ParamLimits

0xfa53,	// (0x0001e8a7) main_cam5_pane_t

0x0440,	// (0x0000f294) popup_scut_keymap_window_ParamLimits

0x0440,	// (0x0000f294) popup_scut_keymap_window

0x6cf6,	// (0x00015b4a) aid_size_cell_brow_shortcut

0xa906,	// (0x0001975a) bg_popup_window_pane_cp010

0x6d02,	// (0x00015b56) grid_scut_pane

0x6d0e,	// (0x00015b62) cell_scut_pane_ParamLimits

0x6d0e,	// (0x00015b62) cell_scut_pane

0x6d25,	// (0x00015b79) cell_scut_pane_g1

0xd621,	// (0x0001c475) cell_scut_pane_t1

0xd630,	// (0x0001c484) cell_scut_pane_t2

0x6d2e,	// (0x00015b82) cell_scut_pane_t3

0x0002,

0xfa6e,	// (0x0001e8c2) cell_scut_pane_t

0x4974,	// (0x000137c8) main_mup3_pane_g8_ParamLimits

0x4974,	// (0x000137c8) main_mup3_pane_g8

0x5e20,	// (0x00014c74) area_vitu2_query_pane_ParamLimits

0x5e20,	// (0x00014c74) area_vitu2_query_pane

0x6a6b,	// (0x000158bf) input_focus_pane_cp08

0xd63f,	// (0x0001c493) area_vitu2_query_pane_g1

0x6d3c,	// (0x00015b90) area_vitu2_query_pane_g2

0x0001,

0xfa75,	// (0x0001e8c9) area_vitu2_query_pane_g

0x6d4d,	// (0x00015ba1) area_vitu2_query_pane_t1_ParamLimits

0x6d4d,	// (0x00015ba1) area_vitu2_query_pane_t1

0x6d61,	// (0x00015bb5) area_vitu2_query_pane_t2_ParamLimits

0x6d61,	// (0x00015bb5) area_vitu2_query_pane_t2

0x6d75,	// (0x00015bc9) area_vitu2_query_pane_t3_ParamLimits

0x6d75,	// (0x00015bc9) area_vitu2_query_pane_t3

0xd64b,	// (0x0001c49f) area_vitu2_query_pane_t4_ParamLimits

0xd64b,	// (0x0001c49f) area_vitu2_query_pane_t4

0xd673,	// (0x0001c4c7) area_vitu2_query_pane_t5_ParamLimits

0xd673,	// (0x0001c4c7) area_vitu2_query_pane_t5

0xd69b,	// (0x0001c4ef) area_vitu2_query_pane_t6_ParamLimits

0xd69b,	// (0x0001c4ef) area_vitu2_query_pane_t6

0x0006,

0xfa7a,	// (0x0001e8ce) area_vitu2_query_pane_t_ParamLimits

0xfa7a,	// (0x0001e8ce) area_vitu2_query_pane_t

0x6d9d,	// (0x00015bf1) bg_button_pane_cp018

0x6dab,	// (0x00015bff) bg_button_pane_cp021

0x6db7,	// (0x00015c0b) bg_button_pane_cp022

0x6dc8,	// (0x00015c1c) input_focus_pane_cp09

0x293c,	// (0x00011790) aid_size_touch_mv_arrow_left

0x2965,	// (0x000117b9) aid_size_touch_mv_arrow_right

0x6542,	// (0x00015396) main_cset_slider_pane_g16_ParamLimits

0x6542,	// (0x00015396) main_cset_slider_pane_g16

0x654e,	// (0x000153a2) main_cset_slider_pane_g17_ParamLimits

0x654e,	// (0x000153a2) main_cset_slider_pane_g17

0x6ce1,	// (0x00015b35) cell_cam4_burst_pane_g1_ParamLimits

0x9528,	// (0x0001837c) compa_mode_pane

0x6759,	// (0x000155ad) popup_vtel_slider_window_g3_ParamLimits

0x6759,	// (0x000155ad) popup_vtel_slider_window_g3

0x6770,	// (0x000155c4) popup_vtel_slider_window_g4_ParamLimits

0x6770,	// (0x000155c4) popup_vtel_slider_window_g4

0x6787,	// (0x000155db) popup_vtel_slider_window_t1_ParamLimits

0x6787,	// (0x000155db) popup_vtel_slider_window_t1

0x9528,	// (0x0001837c) main_cl_pane

0xbdda,	// (0x0001ac2e) popup_imed_adjust2_window_ParamLimits

0xbdb2,	// (0x0001ac06) bg_tb_trans_pane_cp05_ParamLimits

0xc848,	// (0x0001b69c) popup_imed_adjust2_window_g1_ParamLimits

0xc857,	// (0x0001b6ab) popup_imed_adjust2_window_g2_ParamLimits

0xc857,	// (0x0001b6ab) popup_imed_adjust2_window_g2

0xc863,	// (0x0001b6b7) popup_imed_adjust2_window_g3_ParamLimits

0xc863,	// (0x0001b6b7) popup_imed_adjust2_window_g3

0x0002,

0xf7e5,	// (0x0001e639) popup_imed_adjust2_window_g_ParamLimits

0xf7e5,	// (0x0001e639) popup_imed_adjust2_window_g

0xc86f,	// (0x0001b6c3) popup_imed_adjust2_window_t1_ParamLimits

0xc887,	// (0x0001b6db) slider_imed_adjust_pane_ParamLimits

0xc89b,	// (0x0001b6ef) slider_imed_adjust_pane_g1_ParamLimits

0xc8ab,	// (0x0001b6ff) slider_imed_adjust_pane_g2_ParamLimits

0xc8bb,	// (0x0001b70f) slider_imed_adjust_pane_g3_ParamLimits

0xc8cc,	// (0x0001b720) slider_imed_adjust_pane_g4_ParamLimits

0xf7ec,	// (0x0001e640) slider_imed_adjust_pane_g_ParamLimits

0x5ba9,	// (0x000149fd) aid_touch_area_cam4_ParamLimits

0x5ba9,	// (0x000149fd) aid_touch_area_cam4

0xcfbe,	// (0x0001be12) battery_pane_cp01

0x5c78,	// (0x00014acc) main_camera4_pane_g6_ParamLimits

0x5c78,	// (0x00014acc) main_camera4_pane_g6

0x5ca2,	// (0x00014af6) main_camera4_pane_t2_ParamLimits

0x5ca2,	// (0x00014af6) main_camera4_pane_t2

0x0001,

0xf8ef,	// (0x0001e743) main_camera4_pane_t_ParamLimits

0xf8ef,	// (0x0001e743) main_camera4_pane_t

0x5cd7,	// (0x00014b2b) aid_touch_area_vid4_ParamLimits

0x5cd7,	// (0x00014b2b) aid_touch_area_vid4

0x5d2b,	// (0x00014b7f) main_video4_pane_g5_ParamLimits

0x5d2b,	// (0x00014b7f) main_video4_pane_g5

0x5d50,	// (0x00014ba4) vid4_progress_pane_ParamLimits

0x5d50,	// (0x00014ba4) vid4_progress_pane

0xd2c2,	// (0x0001c116) main_cset_slider_pane_g18_ParamLimits

0xd2c2,	// (0x0001c116) main_cset_slider_pane_g18

0xd509,	// (0x0001c35d) cell_cam4_burst_pane_g2_ParamLimits

0xd509,	// (0x0001c35d) cell_cam4_burst_pane_g2

0x0001,

0xfa4e,	// (0x0001e8a2) cell_cam4_burst_pane_g_ParamLimits

0xfa4e,	// (0x0001e8a2) cell_cam4_burst_pane_g

0x9d1a,	// (0x00018b6e) bg_cl_pane_ParamLimits

0x9d1a,	// (0x00018b6e) bg_cl_pane

0x6dd9,	// (0x00015c2d) cl_header_pane_ParamLimits

0x6dd9,	// (0x00015c2d) cl_header_pane

0x6ded,	// (0x00015c41) cl_listscroll_pane_ParamLimits

0x6ded,	// (0x00015c41) cl_listscroll_pane

0xd6e7,	// (0x0001c53b) bg_cl_pane_g1

0xd6ef,	// (0x0001c543) bg_cl_pane_g2

0xd6f7,	// (0x0001c54b) bg_cl_pane_g3

0xd6ff,	// (0x0001c553) bg_cl_pane_g4

0xd707,	// (0x0001c55b) bg_cl_pane_g5

0xd70f,	// (0x0001c563) bg_cl_pane_g6

0xd717,	// (0x0001c56b) bg_cl_pane_g7

0xd71f,	// (0x0001c573) bg_cl_pane_g8

0xd727,	// (0x0001c57b) bg_cl_pane_g9

0x0008,

0xfa89,	// (0x0001e8dd) bg_cl_pane_g

0x6dfd,	// (0x00015c51) aid_height_cl_leading_ParamLimits

0x6dfd,	// (0x00015c51) aid_height_cl_leading

0x6e09,	// (0x00015c5d) aid_height_cl_text_ParamLimits

0x6e09,	// (0x00015c5d) aid_height_cl_text

0x9598,	// (0x000183ec) bg_cl_header_pane_ParamLimits

0x9598,	// (0x000183ec) bg_cl_header_pane

0x6e28,	// (0x00015c7c) cl_header_pane_g1_ParamLimits

0x6e28,	// (0x00015c7c) cl_header_pane_g1

0x6e3e,	// (0x00015c92) cl_header_pane_t1_ParamLimits

0x6e3e,	// (0x00015c92) cl_header_pane_t1

0xd72f,	// (0x0001c583) cl_list_pane

0xd295,	// (0x0001c0e9) hc_scroll_pane_cp01

0xa1a8,	// (0x00018ffc) bg_cl_header_pane_g1

0xd145,	// (0x0001bf99) bg_cl_header_pane_g2

0xa1c8,	// (0x0001901c) bg_cl_header_pane_g3

0xd155,	// (0x0001bfa9) bg_cl_header_pane_g4

0xd14d,	// (0x0001bfa1) bg_cl_header_pane_g5

0xd3f6,	// (0x0001c24a) bg_cl_header_pane_g6

0xd16d,	// (0x0001bfc1) bg_cl_header_pane_g7

0xd175,	// (0x0001bfc9) bg_cl_header_pane_g8

0xd165,	// (0x0001bfb9) bg_cl_header_pane_g9

0x0008,

0xfa9c,	// (0x0001e8f0) bg_cl_header_pane_g

0x6e57,	// (0x00015cab) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x6e57,	// (0x00015cab) hc_cl_list_double_graphic_heading_pane

0x6e68,	// (0x00015cbc) hc_cl_list_single_graphic_pane_ParamLimits

0x6e68,	// (0x00015cbc) hc_cl_list_single_graphic_pane

0x6e81,	// (0x00015cd5) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x6e81,	// (0x00015cd5) hc_cl_list_single_graphic_pane_g1

0x6e8d,	// (0x00015ce1) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x6e8d,	// (0x00015ce1) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaaf,	// (0x0001e903) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaaf,	// (0x0001e903) hc_cl_list_single_graphic_pane_g

0x6ea1,	// (0x00015cf5) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x6ea1,	// (0x00015cf5) hc_cl_list_single_graphic_pane_t1

0x6e81,	// (0x00015cd5) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x6e81,	// (0x00015cd5) hc_cl_list_double_graphic_heading_pane_g1

0x6eb6,	// (0x00015d0a) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x6eb6,	// (0x00015d0a) hc_cl_list_double_graphic_heading_pane_g2

0x6eca,	// (0x00015d1e) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x6eca,	// (0x00015d1e) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfab4,	// (0x0001e908) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfab4,	// (0x0001e908) hc_cl_list_double_graphic_heading_pane_g

0x6ede,	// (0x00015d32) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x6ede,	// (0x00015d32) hc_cl_list_double_graphic_heading_pane_t1

0x6ef3,	// (0x00015d47) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x6ef3,	// (0x00015d47) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfabb,	// (0x0001e90f) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfabb,	// (0x0001e90f) hc_cl_list_double_graphic_heading_pane_t

0x6f08,	// (0x00015d5c) vid4_progress_pane_g1

0x6f1a,	// (0x00015d6e) vid4_progress_pane_g2

0xab1e,	// (0x00019972) vid4_progress_pane_g3

0xd740,	// (0x0001c594) vid4_progress_pane_g4

0x0004,

0xfac0,	// (0x0001e914) vid4_progress_pane_g

0xd75e,	// (0x0001c5b2) vid4_progress_pane_t1

0xd773,	// (0x0001c5c7) vid4_progress_pane_t2

0x0002,

0xfacb,	// (0x0001e91f) vid4_progress_pane_t

0xd79f,	// (0x0001c5f3) wait_bar_pane_cp07

0xc0c0,	// (0x0001af14) blid_firmament_pane_ParamLimits

0xc103,	// (0x0001af57) popup_blid_sat_info2_window_g1

0xc127,	// (0x0001af7b) popup_blid_sat_info2_window_t3

0xc135,	// (0x0001af89) popup_blid_sat_info2_window_t4

0xc143,	// (0x0001af97) popup_blid_sat_info2_window_t5

0xc151,	// (0x0001afa5) popup_blid_sat_info2_window_t6

0xc161,	// (0x0001afb5) popup_blid_sat_info2_window_t7

0xc16f,	// (0x0001afc3) popup_blid_sat_info2_window_t8

0xc17d,	// (0x0001afd1) popup_blid_sat_info2_window_t9

0xc18b,	// (0x0001afdf) popup_blid_sat_info2_window_t10

0xc24f,	// (0x0001b0a3) aid_firma_cardinal_ParamLimits

0xc263,	// (0x0001b0b7) blid_firmament_pane_t1_ParamLimits

0xc27a,	// (0x0001b0ce) blid_firmament_pane_t2_ParamLimits

0xc291,	// (0x0001b0e5) blid_firmament_pane_t3_ParamLimits

0xc2a8,	// (0x0001b0fc) blid_firmament_pane_t4_ParamLimits

0xf6de,	// (0x0001e532) blid_firmament_pane_t_ParamLimits

0xc2bf,	// (0x0001b113) blid_sat_info_pane_ParamLimits

0x9598,	// (0x000183ec) main_cam_set_pane_ParamLimits

0x523a,	// (0x0001408e) aid_size_cell_colour_35_ParamLimits

0x525a,	// (0x000140ae) aid_size_cell_colour_112_ParamLimits

0x527a,	// (0x000140ce) aid_size_cell_effect_ParamLimits

0xbdb2,	// (0x0001ac06) bg_tb_trans_pane_cp02_ParamLimits

0xa3ba,	// (0x0001920e) heading_imed_pane_ParamLimits

0x529a,	// (0x000140ee) listscroll_imed_pane_ParamLimits

0xb3d8,	// (0x0001a22c) popup_call2_audio_first_window_g5_ParamLimits

0xb3d8,	// (0x0001a22c) popup_call2_audio_first_window_g5

0x5854,	// (0x000146a8) aid_size_touch_image3_arrow_left_ParamLimits

0x5854,	// (0x000146a8) aid_size_touch_image3_arrow_left

0x5880,	// (0x000146d4) aid_size_touch_image3_arrow_right_ParamLimits

0x5880,	// (0x000146d4) aid_size_touch_image3_arrow_right

0xd789,	// (0x0001c5dd) vid4_progress_pane_t3

0x55c6,	// (0x0001441a) main_hwr_training_symbol_option_pane_ParamLimits

0x55c6,	// (0x0001441a) main_hwr_training_symbol_option_pane

0xcb3e,	// (0x0001b992) popup_hwr_training_preview_window_ParamLimits

0xcb3e,	// (0x0001b992) popup_hwr_training_preview_window

0x55e6,	// (0x0001443a) hwr_training_navi_pane_g5_ParamLimits

0x55e6,	// (0x0001443a) hwr_training_navi_pane_g5

0xd133,	// (0x0001bf87) popup_char_count_window

0x9598,	// (0x000183ec) bg_popup_sub_pane_cp20_ParamLimits

0x68ad,	// (0x00015701) list_vitu2_match_list_pane_ParamLimits

0x68bc,	// (0x00015710) vitu2_page_scroll_pane_ParamLimits

0x68bc,	// (0x00015710) vitu2_page_scroll_pane

0xd7d1,	// (0x0001c625) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd7d1,	// (0x0001c625) list_single_hwr_training_symbol_option_pane

0xd7e4,	// (0x0001c638) list_single_hwr_training_symbol_option_pane_g1

0xd7ec,	// (0x0001c640) list_single_hwr_training_symbol_option_pane_t1

0xd7fa,	// (0x0001c64e) bg_button_pane_cp023

0xd803,	// (0x0001c657) bg_button_pane_cp024

0x6f5b,	// (0x00015daf) vitu2_page_scroll_pane_g1

0x6f63,	// (0x00015db7) vitu2_page_scroll_pane_g2

0x0001,

0xfad2,	// (0x0001e926) vitu2_page_scroll_pane_g

0x6f6b,	// (0x00015dbf) vitu2_page_scroll_pane_t1

0xc8f8,	// (0x0001b74c) popup_char_count_window_g1

0xd836,	// (0x0001c68a) popup_char_count_window_g2

0xd83f,	// (0x0001c693) popup_char_count_window_g3

0x0002,

0xfad7,	// (0x0001e92b) popup_char_count_window_g

0xd848,	// (0x0001c69c) popup_char_count_window_t1

0x9528,	// (0x0001837c) main_vded2_pane

0xc834,	// (0x0001b688) aid_size_cell_imed_line

0xc83e,	// (0x0001b692) grid_imed_line_width_pane

0xd074,	// (0x0001bec8) vid4_indicators_pane_g4

0xd856,	// (0x0001c6aa) cell_imed_line_width_pane_ParamLimits

0xd856,	// (0x0001c6aa) cell_imed_line_width_pane

0xd86a,	// (0x0001c6be) cell_imed_line_width_pane_g1

0xd873,	// (0x0001c6c7) cell_imed_line_width_pane_g2

0x0001,

0xfade,	// (0x0001e932) cell_imed_line_width_pane_g

0x6f7a,	// (0x00015dce) main_vded2_pane_g1_ParamLimits

0x6f7a,	// (0x00015dce) main_vded2_pane_g1

0x6f90,	// (0x00015de4) main_vded2_pane_g2_ParamLimits

0x6f90,	// (0x00015de4) main_vded2_pane_g2

0x0001,

0xfae3,	// (0x0001e937) main_vded2_pane_g_ParamLimits

0xfae3,	// (0x0001e937) main_vded2_pane_g

0x6fa2,	// (0x00015df6) vded2_slider_pane_ParamLimits

0x6fa2,	// (0x00015df6) vded2_slider_pane

0x6fb2,	// (0x00015e06) aid_size_touch_vded2_end

0x6fbc,	// (0x00015e10) aid_size_touch_vded2_playhead

0xd87b,	// (0x0001c6cf) aid_size_touch_vded2_start

0xd883,	// (0x0001c6d7) vded2_slider_bg_pane

0xd88c,	// (0x0001c6e0) vded2_slider_pane_g1

0xd895,	// (0x0001c6e9) vded2_slider_pane_g2

0x6fc6,	// (0x00015e1a) vded2_slider_pane_g3

0x0002,

0xfae8,	// (0x0001e93c) vded2_slider_pane_g

0xd89d,	// (0x0001c6f1) vded2_slider_bg_pane_g1

0xd8a6,	// (0x0001c6fa) vded2_slider_bg_pane_g2

0xd8af,	// (0x0001c703) vded2_slider_bg_pane_g3

0x0002,

0xfaef,	// (0x0001e943) vded2_slider_bg_pane_g

0x2fd3,	// (0x00011e27) aid_postcard_touch_down_pane_ParamLimits

0x2fd3,	// (0x00011e27) aid_postcard_touch_down_pane

0x2fe9,	// (0x00011e3d) aid_postcard_touch_up_pane_ParamLimits

0x2fe9,	// (0x00011e3d) aid_postcard_touch_up_pane

0x9528,	// (0x0001837c) main_blid2_pane

0xbdc0,	// (0x0001ac14) popup_blid2_search_window

0x9528,	// (0x0001837c) blid2_gps_pane

0x9528,	// (0x0001837c) blid2_navig_pane

0x9528,	// (0x0001837c) blid2_search_pane

0x9528,	// (0x0001837c) blid2_tripm_pane

0x6fd1,	// (0x00015e25) blid2_search_pane_g1_ParamLimits

0x6fd1,	// (0x00015e25) blid2_search_pane_g1

0x6fe9,	// (0x00015e3d) blid2_search_pane_t1_ParamLimits

0x6fe9,	// (0x00015e3d) blid2_search_pane_t1

0x6ffb,	// (0x00015e4f) aid_size_cell_blid2_gps_ParamLimits

0x6ffb,	// (0x00015e4f) aid_size_cell_blid2_gps

0x7013,	// (0x00015e67) blid2_gps_pane_g1_ParamLimits

0x7013,	// (0x00015e67) blid2_gps_pane_g1

0x7027,	// (0x00015e7b) grid_blid2_satellite_pane_ParamLimits

0x7027,	// (0x00015e7b) grid_blid2_satellite_pane

0x7041,	// (0x00015e95) blid2_navig_pane_g1_ParamLimits

0x7041,	// (0x00015e95) blid2_navig_pane_g1

0x704d,	// (0x00015ea1) blid2_navig_pane_t1_ParamLimits

0x704d,	// (0x00015ea1) blid2_navig_pane_t1

0x7068,	// (0x00015ebc) blid2_navig_pane_t2_ParamLimits

0x7068,	// (0x00015ebc) blid2_navig_pane_t2

0x0001,

0xfaf6,	// (0x0001e94a) blid2_navig_pane_t_ParamLimits

0xfaf6,	// (0x0001e94a) blid2_navig_pane_t

0x7083,	// (0x00015ed7) blid2_navig_ring_pane_ParamLimits

0x7083,	// (0x00015ed7) blid2_navig_ring_pane

0x709c,	// (0x00015ef0) blid2_speed_pane_ParamLimits

0x709c,	// (0x00015ef0) blid2_speed_pane

0x70a8,	// (0x00015efc) blid2_tripm_pane_g1_ParamLimits

0x70a8,	// (0x00015efc) blid2_tripm_pane_g1

0x70c3,	// (0x00015f17) blid2_tripm_pane_g2_ParamLimits

0x70c3,	// (0x00015f17) blid2_tripm_pane_g2

0x70d7,	// (0x00015f2b) blid2_tripm_pane_g3_ParamLimits

0x70d7,	// (0x00015f2b) blid2_tripm_pane_g3

0x70eb,	// (0x00015f3f) blid2_tripm_pane_g4_ParamLimits

0x70eb,	// (0x00015f3f) blid2_tripm_pane_g4

0x70ff,	// (0x00015f53) blid2_tripm_pane_g5_ParamLimits

0x70ff,	// (0x00015f53) blid2_tripm_pane_g5

0x0005,

0xfafb,	// (0x0001e94f) blid2_tripm_pane_g_ParamLimits

0xfafb,	// (0x0001e94f) blid2_tripm_pane_g

0x7125,	// (0x00015f79) blid2_tripm_pane_t1_ParamLimits

0x7125,	// (0x00015f79) blid2_tripm_pane_t1

0x7140,	// (0x00015f94) blid2_tripm_pane_t2_ParamLimits

0x7140,	// (0x00015f94) blid2_tripm_pane_t2

0x7159,	// (0x00015fad) blid2_tripm_pane_t3_ParamLimits

0x7159,	// (0x00015fad) blid2_tripm_pane_t3

0x0003,

0xfb08,	// (0x0001e95c) blid2_tripm_pane_t_ParamLimits

0xfb08,	// (0x0001e95c) blid2_tripm_pane_t

0x71a0,	// (0x00015ff4) cell_blid2_satellite_pane_ParamLimits

0x71a0,	// (0x00015ff4) cell_blid2_satellite_pane

0x71be,	// (0x00016012) cell_blid2_satellite_pane_g1

0xd8b8,	// (0x0001c70c) cell_blid2_satellite_pane_t1

0xc2cf,	// (0x0001b123) blid2_speed_pane_g1

0xd8c6,	// (0x0001c71a) blid2_speed_pane_t1

0xd8d4,	// (0x0001c728) blid2_speed_pane_t2

0x0001,

0xfb11,	// (0x0001e965) blid2_speed_pane_t

0xc2cf,	// (0x0001b123) blid2_navig_ring_pane_g1

0x71c7,	// (0x0001601b) blid2_navig_ring_pane_g2

0x71cf,	// (0x00016023) blid2_navig_ring_pane_g3

0x71d7,	// (0x0001602b) blid2_navig_ring_pane_g4

0x71df,	// (0x00016033) blid2_navig_ring_pane_g5

0x0004,

0xfb16,	// (0x0001e96a) blid2_navig_ring_pane_g

0x9528,	// (0x0001837c) bg_popup_window_pane_cp011

0xd8e2,	// (0x0001c736) popup_blid2_search_window_g1

0xd8ea,	// (0x0001c73e) popup_blid2_search_window_t1

0xd8f8,	// (0x0001c74c) popup_blid2_search_window_t2

0x0001,

0xfb21,	// (0x0001e975) popup_blid2_search_window_t

0xa0b7,	// (0x00018f0b) main_browser_pane_g1

0x9d1a,	// (0x00018b6e) main_browser_pane_ParamLimits

0x9598,	// (0x000183ec) bg_button_pane_cp011_ParamLimits

0x611f,	// (0x00014f73) cell_vitu2_function_pane_g1_ParamLimits

0xbdb2,	// (0x0001ac06) bg_popup_sub_pane_cp22_ParamLimits

0x6a6b,	// (0x000158bf) input_focus_pane_cp08_ParamLimits

0x6a82,	// (0x000158d6) popup_vitu2_query_button_pane_ParamLimits

0x6a82,	// (0x000158d6) popup_vitu2_query_button_pane

0x6a93,	// (0x000158e7) popup_vitu2_query_input_button_pane

0xd453,	// (0x0001c2a7) popup_vitu2_query_window_g1_ParamLimits

0x6a9d,	// (0x000158f1) popup_vitu2_query_window_g2_ParamLimits

0xfa22,	// (0x0001e876) popup_vitu2_query_window_g_ParamLimits

0x9528,	// (0x0001837c) bg_button_pane_cp026

0x71e7,	// (0x0001603b) popup_vitu2_query_input_button_pane_g1

0x9528,	// (0x0001837c) bg_button_pane_cp025

0xd906,	// (0x0001c75a) popup_vitu2_query_button_pane_t1

0x4661,	// (0x000134b5) main_mp3_pane_t6

0x466f,	// (0x000134c3) popup_slider_window_cp01

0xcfda,	// (0x0001be2e) cam4_battery_pane

0xd033,	// (0x0001be87) cam4_battery_pane_cp02

0xd738,	// (0x0001c58c) cam4_battery_pane_cp01

0xd738,	// (0x0001c58c) cam4_battery_pane_cp03

0xc2cf,	// (0x0001b123) cam4_battery_pane_g1

0xd914,	// (0x0001c768) cam4_battery_pane_g2

0x0001,

0xfb26,	// (0x0001e97a) cam4_battery_pane_g

0xc199,	// (0x0001afed) popup_blid_sat_info2_window_t11

0x293c,	// (0x00011790) aid_size_touch_mv_arrow_left_ParamLimits

0x2965,	// (0x000117b9) aid_size_touch_mv_arrow_right_ParamLimits

0xa866,	// (0x000196ba) navi_pane_g1_ParamLimits

0x29a4,	// (0x000117f8) navi_pane_g2_ParamLimits

0x29d2,	// (0x00011826) navi_pane_g3_ParamLimits

0xf3f0,	// (0x0001e244) navi_pane_g_ParamLimits

0x2a2a,	// (0x0001187e) navi_pane_mv_t1_ParamLimits

0x52a6,	// (0x000140fa) grid_imed_effect_pane_ParamLimits

0x14b1,	// (0x00010305) aid_placing_vt_slider_lsc

0xa006,	// (0x00018e5a) aid_placing_vt_slider_prt

0x9598,	// (0x000183ec) bg_tb_trans_pane_cp01_ParamLimits

0xc44f,	// (0x0001b2a3) popup_image_details_window_g1_ParamLimits

0xc462,	// (0x0001b2b6) popup_image_details_window_g2_ParamLimits

0xc477,	// (0x0001b2cb) popup_image_details_window_g3_ParamLimits

0xc477,	// (0x0001b2cb) popup_image_details_window_g3

0xf723,	// (0x0001e577) popup_image_details_window_g_ParamLimits

0xc48b,	// (0x0001b2df) popup_image_details_window_t1_ParamLimits

0xc49d,	// (0x0001b2f1) popup_image_details_window_t2_ParamLimits

0xc4b6,	// (0x0001b30a) popup_image_details_window_t3_ParamLimits

0xc4ca,	// (0x0001b31e) popup_image_details_window_t4_ParamLimits

0xc4e5,	// (0x0001b339) popup_image_details_window_t5_ParamLimits

0xf72a,	// (0x0001e57e) popup_image_details_window_t_ParamLimits

0x6e15,	// (0x00015c69) cl_header_name_pane_ParamLimits

0x6e15,	// (0x00015c69) cl_header_name_pane

0x71ef,	// (0x00016043) cl_header_name_pane_t1_ParamLimits

0x71ef,	// (0x00016043) cl_header_name_pane_t1

0x7210,	// (0x00016064) cl_header_name_pane_t2_ParamLimits

0x7210,	// (0x00016064) cl_header_name_pane_t2

0x7252,	// (0x000160a6) cl_header_name_pane_t3_ParamLimits

0x7252,	// (0x000160a6) cl_header_name_pane_t3

0x0002,

0xfb2b,	// (0x0001e97f) cl_header_name_pane_t_ParamLimits

0xfb2b,	// (0x0001e97f) cl_header_name_pane_t

0x29fb,	// (0x0001184f) navi_pane_mv_g2_ParamLimits

0xd0c0,	// (0x0001bf14) field_vitu2_entry_pane_g1_ParamLimits

0xd0cc,	// (0x0001bf20) field_vitu2_entry_pane_g2_ParamLimits

0xd0d8,	// (0x0001bf2c) field_vitu2_entry_pane_g3_ParamLimits

0xd0d8,	// (0x0001bf2c) field_vitu2_entry_pane_g3

0xf921,	// (0x0001e775) field_vitu2_entry_pane_g_ParamLimits

0x5fbf,	// (0x00014e13) cell_vitu2_itu_pane_g1_ParamLimits

0x5fcf,	// (0x00014e23) cell_vitu2_itu_pane_g2_ParamLimits

0x5fcf,	// (0x00014e23) cell_vitu2_itu_pane_g2

0x0001,

0xf92d,	// (0x0001e781) cell_vitu2_itu_pane_g_ParamLimits

0xf92d,	// (0x0001e781) cell_vitu2_itu_pane_g

0x9598,	// (0x000183ec) bg_vkb2_func_pane_cp05_ParamLimits

0x9598,	// (0x000183ec) bg_vkb2_func_pane_cp05

0x9598,	// (0x000183ec) bg_vkb2_func_pane_cp03

0x9598,	// (0x000183ec) bg_vkb2_func_pane_cp04

0x9598,	// (0x000183ec) bg_vkb2_func_pane_cp10_ParamLimits

0x9598,	// (0x000183ec) bg_vkb2_func_pane_cp10

0x6db7,	// (0x00015c0b) bg_vkb2_func_pane_cp08

0x6d9d,	// (0x00015bf1) bg_vkb2_func_pane_cp06

0x6dab,	// (0x00015bff) bg_vkb2_func_pane_cp07

0xd80c,	// (0x0001c660) bg_vkb2_func_pane_cp11_ParamLimits

0xd80c,	// (0x0001c660) bg_vkb2_func_pane_cp11

0xd821,	// (0x0001c675) bg_vkb2_func_pane_cp12_ParamLimits

0xd821,	// (0x0001c675) bg_vkb2_func_pane_cp12

0x9528,	// (0x0001837c) bg_vkb2_func_pane_cp09

0xd145,	// (0x0001bf99) bg_vkb2_func_pane_g1

0xa1c8,	// (0x0001901c) bg_vkb2_func_pane_g2

0xd14d,	// (0x0001bfa1) bg_vkb2_func_pane_g3

0xd155,	// (0x0001bfa9) bg_vkb2_func_pane_g4

0xd3f6,	// (0x0001c24a) bg_vkb2_func_pane_g5

0xd16d,	// (0x0001bfc1) bg_vkb2_func_pane_g6

0xd175,	// (0x0001bfc9) bg_vkb2_func_pane_g7

0xd165,	// (0x0001bfb9) bg_vkb2_func_pane_g8

0xa1a8,	// (0x00018ffc) bg_vkb2_func_pane_g9

0x0008,

0xfb32,	// (0x0001e986) bg_vkb2_func_pane_g

0x7113,	// (0x00015f67) blid2_tripm_pane_g6_ParamLimits

0x7113,	// (0x00015f67) blid2_tripm_pane_g6

0xce2f,	// (0x0001bc83) mp4_progress_pane_g1

0x718c,	// (0x00015fe0) blid2_tripm_values_pane_ParamLimits

0x718c,	// (0x00015fe0) blid2_tripm_values_pane

0x7283,	// (0x000160d7) blid2_tripm_values_pane_t1

0x7291,	// (0x000160e5) blid2_tripm_values_pane_t2

0x729f,	// (0x000160f3) blid2_tripm_values_pane_t3

0x72ad,	// (0x00016101) blid2_tripm_values_pane_t4

0x72bb,	// (0x0001610f) blid2_tripm_values_pane_t5

0x72c9,	// (0x0001611d) blid2_tripm_values_pane_t6

0x72d7,	// (0x0001612b) blid2_tripm_values_pane_t7

0x72e5,	// (0x00016139) blid2_tripm_values_pane_t8

0x72f3,	// (0x00016147) blid2_tripm_values_pane_t9

0x0008,

0xfb45,	// (0x0001e999) blid2_tripm_values_pane_t

0x14f3,	// (0x00010347) call_video_pane_t1_ParamLimits

0x1511,	// (0x00010365) call_video_pane_t2_ParamLimits

0xf279,	// (0x0001e0cd) call_video_pane_t_ParamLimits

0x2f20,	// (0x00011d74) msg_header_pane_g1_ParamLimits

0xaa98,	// (0x000198ec) msg_header_pane_g2_ParamLimits

0xaa98,	// (0x000198ec) msg_header_pane_g2

0x0001,

0xf493,	// (0x0001e2e7) msg_header_pane_g_ParamLimits

0xf493,	// (0x0001e2e7) msg_header_pane_g

0x9d1a,	// (0x00018b6e) main_clock2_pane_ParamLimits

0x4f9d,	// (0x00013df1) grid_clock2_toolbar_pane_ParamLimits

0x4f9d,	// (0x00013df1) grid_clock2_toolbar_pane

0x4f9d,	// (0x00013df1) listscroll_clock2_pane_ParamLimits

0x4f9d,	// (0x00013df1) listscroll_clock2_pane

0x5098,	// (0x00013eec) main_clock2_pane_t3_ParamLimits

0x5098,	// (0x00013eec) main_clock2_pane_t3

0x50bc,	// (0x00013f10) main_clock2_pane_t4_ParamLimits

0x50bc,	// (0x00013f10) main_clock2_pane_t4

0xd91e,	// (0x0001c772) cell_clock2_toolbar_pane

0xd926,	// (0x0001c77a) cell_clock2_toolbar_pane_cp01

0xd926,	// (0x0001c77a) cell_clock2_toolbar_pane_cp02

0xd92e,	// (0x0001c782) cell_clock2_toolbar_pane_cp03

0xd936,	// (0x0001c78a) list_clock2_pane

0xa7bd,	// (0x00019611) scroll_pane_cp10

0xd93e,	// (0x0001c792) list_single_clock2_pane_ParamLimits

0xd93e,	// (0x0001c792) list_single_clock2_pane

0xa906,	// (0x0001975a) list_highlight_pane_cp08

0xd94b,	// (0x0001c79f) list_single_clock2_pane_t1

0xd959,	// (0x0001c7ad) list_single_clock2_pane_t2

0x0001,

0xfb58,	// (0x0001e9ac) list_single_clock2_pane_t

0x9528,	// (0x0001837c) bg_button_pane_cp10

0xd967,	// (0x0001c7bb) cell_clock2_toolbar_pane_g1

0x2f5f,	// (0x00011db3) aid_main_viewer_pane_g1_ParamLimits

0x2f5f,	// (0x00011db3) aid_main_viewer_pane_g1

0x2f6d,	// (0x00011dc1) aid_main_viewer_pane_g2_ParamLimits

0x2f6d,	// (0x00011dc1) aid_main_viewer_pane_g2

0x2f7b,	// (0x00011dcf) aid_main_viewer_pane_g3_ParamLimits

0x2f7b,	// (0x00011dcf) aid_main_viewer_pane_g3

0x2f8a,	// (0x00011dde) aid_main_viewer_pane_g4_ParamLimits

0x2f8a,	// (0x00011dde) aid_main_viewer_pane_g4

0x0003,

0xf4a4,	// (0x0001e2f8) aid_main_viewer_pane_g_ParamLimits

0xf4a4,	// (0x0001e2f8) aid_main_viewer_pane_g

0x3898,	// (0x000126ec) main_calc_pane_ParamLimits

0x38ac,	// (0x00012700) main_dialer2_pane_ParamLimits

0x9528,	// (0x0001837c) main_cam6_pane

0x9528,	// (0x0001837c) main_vid6_pane

0x4fa9,	// (0x00013dfd) listscroll_gen_pane_cp06_ParamLimits

0x4fa9,	// (0x00013dfd) listscroll_gen_pane_cp06

0x50df,	// (0x00013f33) main_clock2_pane_t5_ParamLimits

0x50df,	// (0x00013f33) main_clock2_pane_t5

0x513b,	// (0x00013f8f) aid_call2_pane_cp10_ParamLimits

0x514d,	// (0x00013fa1) aid_call_pane_cp10_ParamLimits

0xa83b,	// (0x0001968f) popup_clock_analogue_window_cp10_g1_ParamLimits

0xa83b,	// (0x0001968f) popup_clock_analogue_window_cp10_g2_ParamLimits

0x515f,	// (0x00013fb3) popup_clock_analogue_window_cp10_g3_ParamLimits

0x515f,	// (0x00013fb3) popup_clock_analogue_window_cp10_g4_ParamLimits

0xa83b,	// (0x0001968f) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7da,	// (0x0001e62e) popup_clock_analogue_window_cp10_g_ParamLimits

0x5171,	// (0x00013fc5) popup_clock_analogue_window_cp10_t1_ParamLimits

0x5801,	// (0x00014655) cell_dialer2_keypad_pane_g2_ParamLimits

0x5801,	// (0x00014655) cell_dialer2_keypad_pane_g2

0x0001,

0xf8c0,	// (0x0001e714) cell_dialer2_keypad_pane_g_ParamLimits

0xf8c0,	// (0x0001e714) cell_dialer2_keypad_pane_g

0x581d,	// (0x00014671) cell_dialer2_keypad_pane_t1

0x6435,	// (0x00015289) main_cset_text2_pane_ParamLimits

0x6435,	// (0x00015289) main_cset_text2_pane

0xd63f,	// (0x0001c493) area_vitu2_query_pane_g1_ParamLimits

0x6d3c,	// (0x00015b90) area_vitu2_query_pane_g2_ParamLimits

0xfa75,	// (0x0001e8c9) area_vitu2_query_pane_g_ParamLimits

0xd6c3,	// (0x0001c517) area_vitu2_query_pane_t7_ParamLimits

0xd6c3,	// (0x0001c517) area_vitu2_query_pane_t7

0x6d9d,	// (0x00015bf1) bg_button_pane_cp018_ParamLimits

0x6dab,	// (0x00015bff) bg_button_pane_cp021_ParamLimits

0x6db7,	// (0x00015c0b) bg_button_pane_cp022_ParamLimits

0x6db7,	// (0x00015c0b) bg_vkb2_func_pane_cp08_ParamLimits

0x6d9d,	// (0x00015bf1) bg_vkb2_func_pane_cp06_ParamLimits

0x6dab,	// (0x00015bff) bg_vkb2_func_pane_cp07_ParamLimits

0x6dc8,	// (0x00015c1c) input_focus_pane_cp09_ParamLimits

0xd96f,	// (0x0001c7c3) cam6_autofocus_pane_ParamLimits

0xd96f,	// (0x0001c7c3) cam6_autofocus_pane

0x7301,	// (0x00016155) cam6_image_uncrop_pane_ParamLimits

0x7301,	// (0x00016155) cam6_image_uncrop_pane

0x7310,	// (0x00016164) cam6_indi_pane_ParamLimits

0x7310,	// (0x00016164) cam6_indi_pane

0x7326,	// (0x0001617a) cam6_mode_pane_ParamLimits

0x7326,	// (0x0001617a) cam6_mode_pane

0x7338,	// (0x0001618c) cam6_timer_pane_ParamLimits

0x7338,	// (0x0001618c) cam6_timer_pane

0x7344,	// (0x00016198) cam6_zoom_pane_ParamLimits

0x7344,	// (0x00016198) cam6_zoom_pane

0x7350,	// (0x000161a4) cam6_mode_pane_g1_ParamLimits

0x7350,	// (0x000161a4) cam6_mode_pane_g1

0x7360,	// (0x000161b4) cam6_mode_pane_g2_ParamLimits

0x7360,	// (0x000161b4) cam6_mode_pane_g2

0x7370,	// (0x000161c4) cam6_mode_pane_g3_ParamLimits

0x7370,	// (0x000161c4) cam6_mode_pane_g3

0x7380,	// (0x000161d4) cam6_mode_pane_g4_ParamLimits

0x7380,	// (0x000161d4) cam6_mode_pane_g4

0x0003,

0xfb5d,	// (0x0001e9b1) cam6_mode_pane_g_ParamLimits

0xfb5d,	// (0x0001e9b1) cam6_mode_pane_g

0xd1c9,	// (0x0001c01d) bg_tb_trans_pane_cp08_ParamLimits

0xd1c9,	// (0x0001c01d) bg_tb_trans_pane_cp08

0xd97d,	// (0x0001c7d1) cam6_battery_pane_ParamLimits

0xd97d,	// (0x0001c7d1) cam6_battery_pane

0xd993,	// (0x0001c7e7) cam6_indi_pane_g1_ParamLimits

0xd993,	// (0x0001c7e7) cam6_indi_pane_g1

0xd9a5,	// (0x0001c7f9) cam6_indi_pane_g2_ParamLimits

0xd9a5,	// (0x0001c7f9) cam6_indi_pane_g2

0xd9b7,	// (0x0001c80b) cam6_indi_pane_g3_ParamLimits

0xd9b7,	// (0x0001c80b) cam6_indi_pane_g3

0x0002,

0xfb66,	// (0x0001e9ba) cam6_indi_pane_g_ParamLimits

0xfb66,	// (0x0001e9ba) cam6_indi_pane_g

0xd9c9,	// (0x0001c81d) cam6_indi_pane_t1_ParamLimits

0xd9c9,	// (0x0001c81d) cam6_indi_pane_t1

0x7390,	// (0x000161e4) cam6_autofocus_pane_g1

0x7398,	// (0x000161ec) cam6_autofocus_pane_g2

0x73a0,	// (0x000161f4) cam6_autofocus_pane_g3

0x73a8,	// (0x000161fc) cam6_autofocus_pane_g4

0x0003,

0xfb6d,	// (0x0001e9c1) cam6_autofocus_pane_g

0xd9ef,	// (0x0001c843) cam6_timer_pane_g1

0xd9f7,	// (0x0001c84b) cam6_timer_pane_t1

0xda05,	// (0x0001c859) cam6_zoom_cont_pane

0xda0d,	// (0x0001c861) cam6_zoom_pane_g1

0xda15,	// (0x0001c869) cam6_zoom_pane_g2

0x73b0,	// (0x00016204) cam6_zoom_pane_g3

0x0002,

0xfb76,	// (0x0001e9ca) cam6_zoom_pane_g

0xc2cf,	// (0x0001b123) cam6_battery_pane_g1

0xc2cf,	// (0x0001b123) cam6_battery_pane_g2

0x0001,

0xf6e7,	// (0x0001e53b) cam6_battery_pane_g

0xda1d,	// (0x0001c871) cam6_zoom_cont_pane_g1

0xda26,	// (0x0001c87a) cam6_zoom_cont_pane_g2

0xda2f,	// (0x0001c883) cam6_zoom_cont_pane_g3

0x0002,

0xfb7d,	// (0x0001e9d1) cam6_zoom_cont_pane_g

0x73cd,	// (0x00016221) cam6_mode_pane_cp_ParamLimits

0x73cd,	// (0x00016221) cam6_mode_pane_cp

0x7344,	// (0x00016198) cam6_zoom_pane_cp_ParamLimits

0x7344,	// (0x00016198) cam6_zoom_pane_cp

0x73df,	// (0x00016233) vid6_image_uncrop_cif_pane_ParamLimits

0x73df,	// (0x00016233) vid6_image_uncrop_cif_pane

0x73ef,	// (0x00016243) vid6_image_uncrop_nhd_pane_ParamLimits

0x73ef,	// (0x00016243) vid6_image_uncrop_nhd_pane

0x7301,	// (0x00016155) vid6_image_uncrop_vga_pane_ParamLimits

0x7301,	// (0x00016155) vid6_image_uncrop_vga_pane

0x73fe,	// (0x00016252) vid6_image_uncrop_wvga_pane_ParamLimits

0x73fe,	// (0x00016252) vid6_image_uncrop_wvga_pane

0x740d,	// (0x00016261) vid6_indi_pane_ParamLimits

0x740d,	// (0x00016261) vid6_indi_pane

0xd1c9,	// (0x0001c01d) bg_tb_trans_pane_cp09_ParamLimits

0xd1c9,	// (0x0001c01d) bg_tb_trans_pane_cp09

0xda47,	// (0x0001c89b) cam6_battery_pane_cp_ParamLimits

0xda47,	// (0x0001c89b) cam6_battery_pane_cp

0xda53,	// (0x0001c8a7) vid6_indi_pane_g1_ParamLimits

0xda53,	// (0x0001c8a7) vid6_indi_pane_g1

0xda65,	// (0x0001c8b9) vid6_indi_pane_g2_ParamLimits

0xda65,	// (0x0001c8b9) vid6_indi_pane_g2

0xda77,	// (0x0001c8cb) vid6_indi_pane_g3_ParamLimits

0xda77,	// (0x0001c8cb) vid6_indi_pane_g3

0xda8c,	// (0x0001c8e0) vid6_indi_pane_g4_ParamLimits

0xda8c,	// (0x0001c8e0) vid6_indi_pane_g4

0xdaa1,	// (0x0001c8f5) vid6_indi_pane_g5_ParamLimits

0xdaa1,	// (0x0001c8f5) vid6_indi_pane_g5

0x0004,

0xfb84,	// (0x0001e9d8) vid6_indi_pane_g_ParamLimits

0xfb84,	// (0x0001e9d8) vid6_indi_pane_g

0xdabb,	// (0x0001c90f) vid6_indi_pane_t1_ParamLimits

0xdabb,	// (0x0001c90f) vid6_indi_pane_t1

0xdad1,	// (0x0001c925) vid6_indi_pane_t2_ParamLimits

0xdad1,	// (0x0001c925) vid6_indi_pane_t2

0xdaf9,	// (0x0001c94d) vid6_indi_pane_t3_ParamLimits

0xdaf9,	// (0x0001c94d) vid6_indi_pane_t3

0xdb21,	// (0x0001c975) vid6_indi_pane_t4_ParamLimits

0xdb21,	// (0x0001c975) vid6_indi_pane_t4

0x0003,

0xfb8f,	// (0x0001e9e3) vid6_indi_pane_t_ParamLimits

0xfb8f,	// (0x0001e9e3) vid6_indi_pane_t

0xdb45,	// (0x0001c999) wait_bar_pane_cp08

0x7425,	// (0x00016279) main_cset_text2_pane_t1_ParamLimits

0x7425,	// (0x00016279) main_cset_text2_pane_t1

0x73b8,	// (0x0001620c) listscroll_gen_pane_cp06_t1_ParamLimits

0x73b8,	// (0x0001620c) listscroll_gen_pane_cp06_t1

0x9528,	// (0x0001837c) main_cam6_set_pane

0xc52f,	// (0x0001b383) bg_tb_trans_pane_cp06_ParamLimits

0xcfe2,	// (0x0001be36) cam4_indicators_pane_g1_ParamLimits

0xcff3,	// (0x0001be47) cam4_indicators_pane_g2_ParamLimits

0xf8fd,	// (0x0001e751) cam4_indicators_pane_g_ParamLimits

0xd011,	// (0x0001be65) cam4_indicators_pane_t1_ParamLimits

0x9598,	// (0x000183ec) bg_tb_trans_pane_cp07_ParamLimits

0xd03b,	// (0x0001be8f) vid4_indicators_pane_g1_ParamLimits

0xd04f,	// (0x0001bea3) vid4_indicators_pane_g2_ParamLimits

0xd063,	// (0x0001beb7) vid4_indicators_pane_g3_ParamLimits

0xd074,	// (0x0001bec8) vid4_indicators_pane_g4_ParamLimits

0xf90f,	// (0x0001e763) vid4_indicators_pane_g_ParamLimits

0xd090,	// (0x0001bee4) vid4_indicators_pane_t1_ParamLimits

0x6f08,	// (0x00015d5c) vid4_progress_pane_g1_ParamLimits

0x6f1a,	// (0x00015d6e) vid4_progress_pane_g2_ParamLimits

0xab1e,	// (0x00019972) vid4_progress_pane_g3_ParamLimits

0xd740,	// (0x0001c594) vid4_progress_pane_g4_ParamLimits

0xfac0,	// (0x0001e914) vid4_progress_pane_g_ParamLimits

0xd75e,	// (0x0001c5b2) vid4_progress_pane_t1_ParamLimits

0xd773,	// (0x0001c5c7) vid4_progress_pane_t2_ParamLimits

0xd789,	// (0x0001c5dd) vid4_progress_pane_t3_ParamLimits

0xfacb,	// (0x0001e91f) vid4_progress_pane_t_ParamLimits

0xd79f,	// (0x0001c5f3) wait_bar_pane_cp07_ParamLimits

0x7444,	// (0x00016298) main_cam6_set_pane_g2_ParamLimits

0x7444,	// (0x00016298) main_cam6_set_pane_g2

0x7468,	// (0x000162bc) main_cset6_listscroll_pane_ParamLimits

0x7468,	// (0x000162bc) main_cset6_listscroll_pane

0x7484,	// (0x000162d8) main_cset6_slider_pane_ParamLimits

0x7484,	// (0x000162d8) main_cset6_slider_pane

0x749a,	// (0x000162ee) main_cset6_text2_pane_ParamLimits

0x749a,	// (0x000162ee) main_cset6_text2_pane

0xdb54,	// (0x0001c9a8) main_cset6_text_pane

0xdb5c,	// (0x0001c9b0) main_cset_list_pane_copy1_ParamLimits

0xdb5c,	// (0x0001c9b0) main_cset_list_pane_copy1

0xdb6c,	// (0x0001c9c0) scroll_pane_cp028_copy1

0x74a8,	// (0x000162fc) cset_list_set_pane_copy1

0x74ba,	// (0x0001630e) aid_position_infowindow_above_copy1

0x74c2,	// (0x00016316) aid_position_infowindow_below_copy1

0x74ca,	// (0x0001631e) cset_list_set_pane_g1_copy1

0x74d2,	// (0x00016326) cset_list_set_pane_g3_copy1_ParamLimits

0x74d2,	// (0x00016326) cset_list_set_pane_g3_copy1

0x74e1,	// (0x00016335) cset_list_set_pane_t1_copy1_ParamLimits

0x74e1,	// (0x00016335) cset_list_set_pane_t1_copy1

0x9598,	// (0x000183ec) list_highlight_pane_cp021_copy1_ParamLimits

0x9598,	// (0x000183ec) list_highlight_pane_cp021_copy1

0xdb75,	// (0x0001c9c9) cset6_slider_pane_ParamLimits

0xdb75,	// (0x0001c9c9) cset6_slider_pane

0xdba1,	// (0x0001c9f5) main_cset6_slider_pane_g1_ParamLimits

0xdba1,	// (0x0001c9f5) main_cset6_slider_pane_g1

0x74f6,	// (0x0001634a) main_cset6_slider_pane_g2_ParamLimits

0x74f6,	// (0x0001634a) main_cset6_slider_pane_g2

0xdbc9,	// (0x0001ca1d) main_cset6_slider_pane_g3_ParamLimits

0xdbc9,	// (0x0001ca1d) main_cset6_slider_pane_g3

0x751e,	// (0x00016372) main_cset6_slider_pane_g4_ParamLimits

0x751e,	// (0x00016372) main_cset6_slider_pane_g4

0x752a,	// (0x0001637e) main_cset6_slider_pane_g5_ParamLimits

0x752a,	// (0x0001637e) main_cset6_slider_pane_g5

0xd2aa,	// (0x0001c0fe) main_cset6_slider_pane_g7_ParamLimits

0xd2aa,	// (0x0001c0fe) main_cset6_slider_pane_g7

0xd2b6,	// (0x0001c10a) main_cset6_slider_pane_g8_ParamLimits

0xd2b6,	// (0x0001c10a) main_cset6_slider_pane_g8

0x64e2,	// (0x00015336) main_cset6_slider_pane_g9_ParamLimits

0x64e2,	// (0x00015336) main_cset6_slider_pane_g9

0x64ee,	// (0x00015342) main_cset6_slider_pane_g10_ParamLimits

0x64ee,	// (0x00015342) main_cset6_slider_pane_g10

0x64fa,	// (0x0001534e) main_cset6_slider_pane_g11_ParamLimits

0x64fa,	// (0x0001534e) main_cset6_slider_pane_g11

0x6506,	// (0x0001535a) main_cset6_slider_pane_g12_ParamLimits

0x6506,	// (0x0001535a) main_cset6_slider_pane_g12

0x6512,	// (0x00015366) main_cset6_slider_pane_g13_ParamLimits

0x6512,	// (0x00015366) main_cset6_slider_pane_g13

0x651e,	// (0x00015372) main_cset6_slider_pane_g14_ParamLimits

0x651e,	// (0x00015372) main_cset6_slider_pane_g14

0x7536,	// (0x0001638a) main_cset6_slider_pane_g15_ParamLimits

0x7536,	// (0x0001638a) main_cset6_slider_pane_g15

0x6542,	// (0x00015396) main_cset6_slider_pane_g16_ParamLimits

0x6542,	// (0x00015396) main_cset6_slider_pane_g16

0x654e,	// (0x000153a2) main_cset6_slider_pane_g17_ParamLimits

0x654e,	// (0x000153a2) main_cset6_slider_pane_g17

0x0011,

0xfb98,	// (0x0001e9ec) main_cset6_slider_pane_g_ParamLimits

0xfb98,	// (0x0001e9ec) main_cset6_slider_pane_g

0xdbd5,	// (0x0001ca29) main_cset6_slider_pane_t1_ParamLimits

0xdbd5,	// (0x0001ca29) main_cset6_slider_pane_t1

0x7566,	// (0x000163ba) main_cset6_slider_pane_t2_ParamLimits

0x7566,	// (0x000163ba) main_cset6_slider_pane_t2

0x7591,	// (0x000163e5) main_cset6_slider_pane_t3_ParamLimits

0x7591,	// (0x000163e5) main_cset6_slider_pane_t3

0x75bc,	// (0x00016410) main_cset6_slider_pane_t4_ParamLimits

0x75bc,	// (0x00016410) main_cset6_slider_pane_t4

0x75e7,	// (0x0001643b) main_cset6_slider_pane_t5_ParamLimits

0x75e7,	// (0x0001643b) main_cset6_slider_pane_t5

0xdc16,	// (0x0001ca6a) main_cset6_slider_pane_t7_ParamLimits

0xdc16,	// (0x0001ca6a) main_cset6_slider_pane_t7

0x7612,	// (0x00016466) main_cset6_slider_pane_t8_ParamLimits

0x7612,	// (0x00016466) main_cset6_slider_pane_t8

0x7636,	// (0x0001648a) main_cset6_slider_pane_t9_ParamLimits

0x7636,	// (0x0001648a) main_cset6_slider_pane_t9

0x765a,	// (0x000164ae) main_cset6_slider_pane_t10_ParamLimits

0x765a,	// (0x000164ae) main_cset6_slider_pane_t10

0x767e,	// (0x000164d2) main_cset6_slider_pane_t11_ParamLimits

0x767e,	// (0x000164d2) main_cset6_slider_pane_t11

0xdc4c,	// (0x0001caa0) main_cset6_slider_pane_t14_ParamLimits

0xdc4c,	// (0x0001caa0) main_cset6_slider_pane_t14

0xdc85,	// (0x0001cad9) main_cset6_slider_pane_t15_ParamLimits

0xdc85,	// (0x0001cad9) main_cset6_slider_pane_t15

0x000b,

0xfbbd,	// (0x0001ea11) main_cset6_slider_pane_t_ParamLimits

0xfbbd,	// (0x0001ea11) main_cset6_slider_pane_t

0xd38e,	// (0x0001c1e2) cset_slider_pane_g1_copy1

0xd397,	// (0x0001c1eb) cset_slider_pane_g2_copy1

0xd3a0,	// (0x0001c1f4) cset_slider_pane_g3_copy1

0x9528,	// (0x0001837c) bg_popup_sub_pane_cp011_copy1

0xdcbe,	// (0x0001cb12) main_cset_text_pane_g1_copy1

0xd467,	// (0x0001c2bb) main_cset_text_pane_t1_copy1

0xd475,	// (0x0001c2c9) main_cset_text_pane_t2_copy1

0xd483,	// (0x0001c2d7) main_cset_text_pane_t3_copy1

0xd491,	// (0x0001c2e5) main_cset_text_pane_t4_copy1

0xd49f,	// (0x0001c2f3) main_cset_text_pane_t5_copy1

0xdcc6,	// (0x0001cb1a) main_cset_text_pane_t6_copy1

0xdcd4,	// (0x0001cb28) main_cset_text_pane_t7_copy1

0x7772,	// (0x000165c6) main_cset_text2_pane_t1_copy1

0x9598,	// (0x000183ec) main_ncimui_pane

0x3ae8,	// (0x0001293c) popup_query_ncimui_window_ParamLimits

0x3ae8,	// (0x0001293c) popup_query_ncimui_window

0xc5d0,	// (0x0001b424) field_cale_ev2_pane_g4_ParamLimits

0xc5d0,	// (0x0001b424) field_cale_ev2_pane_g4

0x56dd,	// (0x00014531) cell_video_dialer_keypad_pane_g2_ParamLimits

0x56dd,	// (0x00014531) cell_video_dialer_keypad_pane_g2

0x0001,

0xf89b,	// (0x0001e6ef) cell_video_dialer_keypad_pane_g_ParamLimits

0xf89b,	// (0x0001e6ef) cell_video_dialer_keypad_pane_g

0x56f5,	// (0x00014549) cell_video_dialer_keypad_pane_t1

0x9528,	// (0x0001837c) bg_popup_window_pane_cp012

0xa67e,	// (0x000194d2) heading_pane_cp06

0xdd00,	// (0x0001cb54) ncim_query_content_pane

0x9528,	// (0x0001837c) bg_popup_heading_pane_cp01

0xdd08,	// (0x0001cb5c) ncim_heading_pane_t1

0xdd16,	// (0x0001cb6a) ncim_indicator_popup_pane

0xdd28,	// (0x0001cb7c) ncim_query_button_pane

0xdd3c,	// (0x0001cb90) ncim_query_content_pane_t1

0xdd4e,	// (0x0001cba2) ncim_query_content_pane_t2

0x0005,

0xfc01,	// (0x0001ea55) ncim_query_content_pane_t

0xdd88,	// (0x0001cbdc) ncim_query_list_pane

0xdd9a,	// (0x0001cbee) ncim_query_popup_pane

0xdd16,	// (0x0001cb6a) ncim_indicator_popup_pane_ParamLimits

0x78b6,	// (0x0001670a) ncim_query_content_pane_g1_ParamLimits

0x78b6,	// (0x0001670a) ncim_query_content_pane_g1

0xdd3c,	// (0x0001cb90) ncim_query_content_pane_t1_ParamLimits

0xdd4e,	// (0x0001cba2) ncim_query_content_pane_t2_ParamLimits

0x78c2,	// (0x00016716) ncim_query_content_pane_t3_ParamLimits

0x78c2,	// (0x00016716) ncim_query_content_pane_t3

0x78ea,	// (0x0001673e) ncim_query_content_pane_t4_ParamLimits

0x78ea,	// (0x0001673e) ncim_query_content_pane_t4

0x7912,	// (0x00016766) ncim_query_content_pane_t5_ParamLimits

0x7912,	// (0x00016766) ncim_query_content_pane_t5

0xdd60,	// (0x0001cbb4) ncim_query_content_pane_t6_ParamLimits

0xdd60,	// (0x0001cbb4) ncim_query_content_pane_t6

0xfc01,	// (0x0001ea55) ncim_query_content_pane_t_ParamLimits

0xdd88,	// (0x0001cbdc) ncim_query_list_pane_ParamLimits

0xdd9a,	// (0x0001cbee) ncim_query_popup_pane_ParamLimits

0xddae,	// (0x0001cc02) wait_bar_pane_cp04

0x9528,	// (0x0001837c) input_focus_pane_cp011

0xddb6,	// (0x0001cc0a) ncim_query_popup_pane_t1

0xddc4,	// (0x0001cc18) ncim_list_query_list_pane_ParamLimits

0xddc4,	// (0x0001cc18) ncim_list_query_list_pane

0x9528,	// (0x0001837c) bg_button_pane_cp027

0xddd7,	// (0x0001cc2b) ncim_query_button_pane_g1

0x9528,	// (0x0001837c) list_highlight_pane_cp012

0xdde1,	// (0x0001cc35) ncim_list_query_list_pane_g1

0xdde9,	// (0x0001cc3d) ncim_list_query_list_pane_t1

0xd002,	// (0x0001be56) cam4_indicators_pane_g3_ParamLimits

0xd002,	// (0x0001be56) cam4_indicators_pane_g3

0xd080,	// (0x0001bed4) vid4_indicators_pane_g5_ParamLimits

0xd080,	// (0x0001bed4) vid4_indicators_pane_g5

0xd74f,	// (0x0001c5a3) vid4_progress_pane_g5_ParamLimits

0xd74f,	// (0x0001c5a3) vid4_progress_pane_g5

0x77a4,	// (0x000165f8) main_ncimui_pane_g1

0x780a,	// (0x0001665e) ncimui_group_query_pane_ParamLimits

0x780a,	// (0x0001665e) ncimui_group_query_pane

0x7852,	// (0x000166a6) ncimui_list_pane_ParamLimits

0x7852,	// (0x000166a6) ncimui_list_pane

0x7879,	// (0x000166cd) ncimui_text_pane_ParamLimits

0x7879,	// (0x000166cd) ncimui_text_pane

0x793a,	// (0x0001678e) ncimui_text_pane_t1_ParamLimits

0x793a,	// (0x0001678e) ncimui_text_pane_t1

0xddf7,	// (0x0001cc4b) ncimui_list_single_graphic_pane_ParamLimits

0xddf7,	// (0x0001cc4b) ncimui_list_single_graphic_pane

0x7958,	// (0x000167ac) ncimui_query_pane_ParamLimits

0x7958,	// (0x000167ac) ncimui_query_pane

0x9528,	// (0x0001837c) list_highlight_pane_cp013

0xde07,	// (0x0001cc5b) ncim_list_query_list_pane_t1_copy1

0xdde1,	// (0x0001cc35) ncim_list_single_graphic_pane_g1

0xde15,	// (0x0001cc69) ncim_query_button_pane_cp01

0xde21,	// (0x0001cc75) ncim_query_entry_pane_ParamLimits

0xde21,	// (0x0001cc75) ncim_query_entry_pane

0xde34,	// (0x0001cc88) ncimui_query_pane_g1

0xde40,	// (0x0001cc94) ncimui_query_pane_t1_ParamLimits

0xde40,	// (0x0001cc94) ncimui_query_pane_t1

0x9598,	// (0x000183ec) input_focus_pane_cp012

0xde59,	// (0x0001ccad) ncim_query_entry_pane_t1

0x9d1a,	// (0x00018b6e) main_im_pane_ParamLimits

0x9598,	// (0x000183ec) main_mobtv_pane_ParamLimits

0x9598,	// (0x000183ec) main_mobtv_pane

0x754e,	// (0x000163a2) main_cset6_slider_pane_g18_ParamLimits

0x754e,	// (0x000163a2) main_cset6_slider_pane_g18

0x755a,	// (0x000163ae) main_cset6_slider_pane_g19_ParamLimits

0x755a,	// (0x000163ae) main_cset6_slider_pane_g19

0xd1d7,	// (0x0001c02b) bg_main_mobtv_pane_ParamLimits

0xd1d7,	// (0x0001c02b) bg_main_mobtv_pane

0x796b,	// (0x000167bf) main_mobtv_info_pane

0x7974,	// (0x000167c8) main_mobtv_loading_pane_ParamLimits

0x7974,	// (0x000167c8) main_mobtv_loading_pane

0xde6b,	// (0x0001ccbf) main_mobtv_pg_channel_list_pane

0xde75,	// (0x0001ccc9) main_mobtv_pg_hdr_pane

0x7981,	// (0x000167d5) main_mobtv_programe_curr_pane_ParamLimits

0x7981,	// (0x000167d5) main_mobtv_programe_curr_pane

0x798e,	// (0x000167e2) main_mobtv_programe_next_pane_ParamLimits

0x798e,	// (0x000167e2) main_mobtv_programe_next_pane

0xde7e,	// (0x0001ccd2) popup_mobtv_noti_window

0xc2cf,	// (0x0001b123) main_tv_pg_hdr_pane_g1

0xde86,	// (0x0001ccda) main_tv_pg_hdr_pane_g2

0xde8e,	// (0x0001cce2) main_tv_pg_hdr_pane_g3

0xde96,	// (0x0001ccea) main_tv_pg_hdr_pane_g4

0xde9e,	// (0x0001ccf2) main_tv_pg_hdr_pane_g5

0xdea8,	// (0x0001ccfc) main_tv_pg_hdr_pane_g6

0xdeb2,	// (0x0001cd06) main_tv_pg_hdr_pane_g7

0xdebc,	// (0x0001cd10) main_tv_pg_hdr_pane_g8

0xdec6,	// (0x0001cd1a) main_tv_pg_hdr_pane_g9

0xded0,	// (0x0001cd24) main_tv_pg_hdr_pane_g10

0xdeda,	// (0x0001cd2e) main_tv_pg_hdr_pane_g11

0x000a,

0xfc0e,	// (0x0001ea62) main_tv_pg_hdr_pane_g

0xdee4,	// (0x0001cd38) main_tv_pg_hdr_pane_t1

0xdef2,	// (0x0001cd46) main_tv_pg_hdr_pane_t2

0xdf00,	// (0x0001cd54) main_tv_pg_hdr_pane_t3

0xdf10,	// (0x0001cd64) main_tv_pg_hdr_pane_t4

0xdf20,	// (0x0001cd74) main_tv_pg_hdr_pane_t5

0x0004,

0xfc25,	// (0x0001ea79) main_tv_pg_hdr_pane_t

0xdf30,	// (0x0001cd84) single_mobtv_pg_channel_pane_ParamLimits

0xdf30,	// (0x0001cd84) single_mobtv_pg_channel_pane

0xdf42,	// (0x0001cd96) single_mobtv_pg_channel_table_pane

0xdf4b,	// (0x0001cd9f) single_mobtv_pg_channel_thumb_pane

0xdf54,	// (0x0001cda8) single_tv_pg_channel_pane_g1

0xdf5d,	// (0x0001cdb1) single_tv_pg_channel_pane_g2

0x0001,

0xfc30,	// (0x0001ea84) single_tv_pg_channel_pane_g

0xc52f,	// (0x0001b383) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xc52f,	// (0x0001b383) bg_single_mobtv_pg_channel_thumb_pane

0xdf66,	// (0x0001cdba) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xdf66,	// (0x0001cdba) single_mobtv_pg_channel_thumb_pane_g1

0xdf74,	// (0x0001cdc8) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xdf74,	// (0x0001cdc8) single_mobtv_pg_channel_thumb_pane_g2

0xdf80,	// (0x0001cdd4) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xdf80,	// (0x0001cdd4) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc35,	// (0x0001ea89) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc35,	// (0x0001ea89) single_mobtv_pg_channel_thumb_pane_g

0xdf8c,	// (0x0001cde0) single_mobtv_pg_channel_thumb_pane_t1

0xdf9a,	// (0x0001cdee) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc3c,	// (0x0001ea90) single_mobtv_pg_channel_thumb_pane_t

0xc2cf,	// (0x0001b123) bg_single_mobtv_pg_channel_table_pane_g1

0xc2cf,	// (0x0001b123) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6e7,	// (0x0001e53b) bg_single_mobtv_pg_channel_table_pane_g

0xdfa8,	// (0x0001cdfc) single_mobtv_pg_channel_table_pane_t1

0xdfb6,	// (0x0001ce0a) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc41,	// (0x0001ea95) single_mobtv_pg_channel_table_pane_t

0x79a3,	// (0x000167f7) main_mobtv_info_pane_g1_ParamLimits

0x79a3,	// (0x000167f7) main_mobtv_info_pane_g1

0x79c1,	// (0x00016815) main_mobtv_info_pane_t1_ParamLimits

0x79c1,	// (0x00016815) main_mobtv_info_pane_t1

0x7a39,	// (0x0001688d) main_mobtv_info_pane_t2_ParamLimits

0x7a39,	// (0x0001688d) main_mobtv_info_pane_t2

0x0002,

0xfc4b,	// (0x0001ea9f) main_mobtv_info_pane_t_ParamLimits

0xfc4b,	// (0x0001ea9f) main_mobtv_info_pane_t

0x7ac8,	// (0x0001691c) wait_bar_pane_cp05

0x7ada,	// (0x0001692e) main_mobtv_loading_pane_g1_ParamLimits

0x7ada,	// (0x0001692e) main_mobtv_loading_pane_g1

0x7aed,	// (0x00016941) main_mobtv_loading_pane_g2_ParamLimits

0x7aed,	// (0x00016941) main_mobtv_loading_pane_g2

0x7af9,	// (0x0001694d) main_mobtv_loading_pane_g3_ParamLimits

0x7af9,	// (0x0001694d) main_mobtv_loading_pane_g3

0x0002,

0xfc52,	// (0x0001eaa6) main_mobtv_loading_pane_g_ParamLimits

0xfc52,	// (0x0001eaa6) main_mobtv_loading_pane_g

0xdfc4,	// (0x0001ce18) main_mobtv_loading_pane_t1_ParamLimits

0xdfc4,	// (0x0001ce18) main_mobtv_loading_pane_t1

0xdfdc,	// (0x0001ce30) main_mobtv_loading_pane_t2_ParamLimits

0xdfdc,	// (0x0001ce30) main_mobtv_loading_pane_t2

0x0001,

0xfc59,	// (0x0001eaad) main_mobtv_loading_pane_t_ParamLimits

0xfc59,	// (0x0001eaad) main_mobtv_loading_pane_t

0x7b0c,	// (0x00016960) wait_bar_pane_cp06_ParamLimits

0x7b0c,	// (0x00016960) wait_bar_pane_cp06

0xe000,	// (0x0001ce54) main_mobtv_programe_curr_pane_t1

0xe00e,	// (0x0001ce62) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc5e,	// (0x0001eab2) main_mobtv_programe_curr_pane_t

0xe01c,	// (0x0001ce70) main_mobtv_programe_next_pane_t1

0xe02a,	// (0x0001ce7e) main_mobtv_programe_next_pane_t2

0xe038,	// (0x0001ce8c) main_mobtv_programe_next_pane_t3

0x0002,

0xfc63,	// (0x0001eab7) main_mobtv_programe_next_pane_t

0x9528,	// (0x0001837c) bg_popup_mobtv_noti_window_pane

0xe046,	// (0x0001ce9a) popup_mobtv_noti_window_g1

0xe04e,	// (0x0001cea2) popup_mobtv_noti_window_t1

0xe05c,	// (0x0001ceb0) popup_mobtv_noti_window_t2

0x0001,

0xfc6a,	// (0x0001eabe) popup_mobtv_noti_window_t

0xc2cf,	// (0x0001b123) bg_popup_mobtv_noti_window_pane_g1

0x9528,	// (0x0001837c) sc_clock_pane

0x9528,	// (0x0001837c) main_fs_bigclock_pane

0x7176,	// (0x00015fca) blid2_tripm_pane_t4_ParamLimits

0x7176,	// (0x00015fca) blid2_tripm_pane_t4

0x7b1b,	// (0x0001696f) sc_clock_pane_g1_ParamLimits

0x7b1b,	// (0x0001696f) sc_clock_pane_g1

0x7b2d,	// (0x00016981) sc_clock_pane_t1_ParamLimits

0x7b2d,	// (0x00016981) sc_clock_pane_t1

0x7b4f,	// (0x000169a3) sc_clock_pane_t2_ParamLimits

0x7b4f,	// (0x000169a3) sc_clock_pane_t2

0x7b67,	// (0x000169bb) sc_clock_pane_t3_ParamLimits

0x7b67,	// (0x000169bb) sc_clock_pane_t3

0x0004,

0xfc6f,	// (0x0001eac3) sc_clock_pane_t_ParamLimits

0xfc6f,	// (0x0001eac3) sc_clock_pane_t

0x8a4a,	// (0x0001789e) main_fs_bigclock_indicator_pane_ParamLimits

0x8a4a,	// (0x0001789e) main_fs_bigclock_indicator_pane

0xc4ff,	// (0x0001b353) main_fs_bigclock_pane_g1_ParamLimits

0xc4ff,	// (0x0001b353) main_fs_bigclock_pane_g1

0x8a56,	// (0x000178aa) main_fs_bigclock_pane_t1_ParamLimits

0x8a56,	// (0x000178aa) main_fs_bigclock_pane_t1

0x8a68,	// (0x000178bc) main_fs_bigclock_pane_t2_ParamLimits

0x8a68,	// (0x000178bc) main_fs_bigclock_pane_t2

0x8a7a,	// (0x000178ce) main_fs_bigclock_pane_t3_ParamLimits

0x8a7a,	// (0x000178ce) main_fs_bigclock_pane_t3

0x0002,

0xfe6e,	// (0x0001ecc2) main_fs_bigclock_pane_t_ParamLimits

0xfe6e,	// (0x0001ecc2) main_fs_bigclock_pane_t

0xec33,	// (0x0001da87) main_fs_bigclock_indicator_pane_g1

0xdd30,	// (0x0001cb84) ncim_query_content_pane_g2_ParamLimits

0xdd30,	// (0x0001cb84) ncim_query_content_pane_g2

0x0001,

0xfbfc,	// (0x0001ea50) ncim_query_content_pane_g_ParamLimits

0xfbfc,	// (0x0001ea50) ncim_query_content_pane_g

0x7b80,	// (0x000169d4) sc_clock_pane_t4_ParamLimits

0x7b80,	// (0x000169d4) sc_clock_pane_t4

0x9598,	// (0x000183ec) main_radioblah_pane

0xcf48,	// (0x0001bd9c) cell_call4_button_pane_t1_copy1_ParamLimits

0xcf48,	// (0x0001bd9c) cell_call4_button_pane_t1_copy1

0x77bc,	// (0x00016610) main_ncimui_pane_t1_ParamLimits

0x77bc,	// (0x00016610) main_ncimui_pane_t1

0x77d6,	// (0x0001662a) main_ncimui_pane_t2_ParamLimits

0x77d6,	// (0x0001662a) main_ncimui_pane_t2

0x0002,

0xfbf5,	// (0x0001ea49) main_ncimui_pane_t_ParamLimits

0xfbf5,	// (0x0001ea49) main_ncimui_pane_t

0xe197,	// (0x0001cfeb) main_radioblah_anim_pane_ParamLimits

0xe197,	// (0x0001cfeb) main_radioblah_anim_pane

0xe1a8,	// (0x0001cffc) main_radioblah_info_pane_ParamLimits

0xe1a8,	// (0x0001cffc) main_radioblah_info_pane

0xe1bc,	// (0x0001d010) main_radioblah_pane_t1_ParamLimits

0xe1bc,	// (0x0001d010) main_radioblah_pane_t1

0xe1d8,	// (0x0001d02c) main_radioblah_pane_t2_ParamLimits

0xe1d8,	// (0x0001d02c) main_radioblah_pane_t2

0x0003,

0xfc90,	// (0x0001eae4) main_radioblah_pane_t_ParamLimits

0xfc90,	// (0x0001eae4) main_radioblah_pane_t

0x7c36,	// (0x00016a8a) main_radioblah_rocker_ctrl_pane_ParamLimits

0x7c36,	// (0x00016a8a) main_radioblah_rocker_ctrl_pane

0xe220,	// (0x0001d074) main_radioblah_info_pane_t1_ParamLimits

0xe220,	// (0x0001d074) main_radioblah_info_pane_t1

0x7c8e,	// (0x00016ae2) main_radioblah_info_pane_t2_ParamLimits

0x7c8e,	// (0x00016ae2) main_radioblah_info_pane_t2

0x0003,

0xfc99,	// (0x0001eaed) main_radioblah_info_pane_t_ParamLimits

0xfc99,	// (0x0001eaed) main_radioblah_info_pane_t

0xc2cf,	// (0x0001b123) main_radioblah_rocker_ctrl_pane_g1

0x7d3e,	// (0x00016b92) main_radioblah_rocker_ctrl_pane_g2

0x7d46,	// (0x00016b9a) main_radioblah_rocker_ctrl_pane_g3

0x7d4e,	// (0x00016ba2) main_radioblah_rocker_ctrl_pane_g4

0x7d56,	// (0x00016baa) main_radioblah_rocker_ctrl_pane_g5

0x7d5e,	// (0x00016bb2) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfca2,	// (0x0001eaf6) main_radioblah_rocker_ctrl_pane_g

0x7772,	// (0x000165c6) main_cset_text2_pane_t1_copy1_ParamLimits

0xcfd2,	// (0x0001be26) cam4_image_uncrop_qvga_pane

0xd02b,	// (0x0001be7f) vid4_image_uncrop_qcif_pane

0xd96f,	// (0x0001c7c3) cam6_image_uncrop_qvga_pane_ParamLimits

0xd96f,	// (0x0001c7c3) cam6_image_uncrop_qvga_pane

0xda37,	// (0x0001c88b) vid6_image_uncrop_qcif_pane_ParamLimits

0xda37,	// (0x0001c88b) vid6_image_uncrop_qcif_pane

0x9528,	// (0x0001837c) bg_popup_preview_window_pane_cp03

0xdce2,	// (0x0001cb36) list_cset_text2_pane

0xdcea,	// (0x0001cb3e) main_cset6_text2_pane_g1

0xdcf2,	// (0x0001cb46) main_cset6_text2_pane_t1

0x7d66,	// (0x00016bba) list_cset_text2_pane_t1_ParamLimits

0x7d66,	// (0x00016bba) list_cset_text2_pane_t1

0x9598,	// (0x000183ec) main_radioblah_pane_ParamLimits

0x7ab4,	// (0x00016908) main_mobtv_info_pane_t3_ParamLimits

0x7ab4,	// (0x00016908) main_mobtv_info_pane_t3

0x7c24,	// (0x00016a78) main_radioblah_pane_g1

0x7c5e,	// (0x00016ab2) main_radioblah_info_pane_g1

0x7ce3,	// (0x00016b37) main_radioblah_info_pane_t3_ParamLimits

0x7ce3,	// (0x00016b37) main_radioblah_info_pane_t3

0x23ed,	// (0x00011241) highlight_cell_cale_month_pane_ParamLimits

0x23ed,	// (0x00011241) highlight_cell_cale_month_pane

0x9528,	// (0x0001837c) main_phob_fisheye_pane

0xc67f,	// (0x0001b4d3) scroll_pane_cp0031_ParamLimits

0xc67f,	// (0x0001b4d3) scroll_pane_cp0031

0xdb45,	// (0x0001c999) wait_bar_pane_cp08_ParamLimits

0x74a8,	// (0x000162fc) cset_list_set_pane_copy1_ParamLimits

0xe25a,	// (0x0001d0ae) highlight_cell_cale_month_pane_g1

0x7d81,	// (0x00016bd5) highlight_cell_cale_month_pane_t1

0xd72f,	// (0x0001c583) list_gen_pane_cp01

0xd295,	// (0x0001c0e9) scroll_pane_01

0x7d8f,	// (0x00016be3) list_single_double_fisheye_pane

0x7d98,	// (0x00016bec) list_double_fisheye_pane_g1_ParamLimits

0x7d98,	// (0x00016bec) list_double_fisheye_pane_g1

0x7da4,	// (0x00016bf8) list_double_fisheye_pane_g2_ParamLimits

0x7da4,	// (0x00016bf8) list_double_fisheye_pane_g2

0x7db0,	// (0x00016c04) list_double_fisheye_pane_g3_ParamLimits

0x7db0,	// (0x00016c04) list_double_fisheye_pane_g3

0x0004,

0xfcaf,	// (0x0001eb03) list_double_fisheye_pane_g_ParamLimits

0xfcaf,	// (0x0001eb03) list_double_fisheye_pane_g

0x7dd4,	// (0x00016c28) list_double_fisheye_pane_t1_ParamLimits

0x7dd4,	// (0x00016c28) list_double_fisheye_pane_t1

0x7def,	// (0x00016c43) list_double_fisheye_pane_t2_ParamLimits

0x7def,	// (0x00016c43) list_double_fisheye_pane_t2

0x0001,

0xfcba,	// (0x0001eb0e) list_double_fisheye_pane_t_ParamLimits

0xfcba,	// (0x0001eb0e) list_double_fisheye_pane_t

0x9528,	// (0x0001837c) main_call5_pane

0x7bab,	// (0x000169ff) sc_swipe_pane_ParamLimits

0x7bab,	// (0x000169ff) sc_swipe_pane

0x7e24,	// (0x00016c78) call5_image_pane_ParamLimits

0x7e24,	// (0x00016c78) call5_image_pane

0x7e41,	// (0x00016c95) call5_swipe_1_pane_ParamLimits

0x7e41,	// (0x00016c95) call5_swipe_1_pane

0x7e54,	// (0x00016ca8) call5_swipe_2_pane_ParamLimits

0x7e54,	// (0x00016ca8) call5_swipe_2_pane

0x7e7f,	// (0x00016cd3) popup_call5_audio_first_window_ParamLimits

0x7e7f,	// (0x00016cd3) popup_call5_audio_first_window

0xc52f,	// (0x0001b383) call5_swipe_1_pane_g1_ParamLimits

0xc52f,	// (0x0001b383) call5_swipe_1_pane_g1

0xe262,	// (0x0001d0b6) call5_swipe_1_pane_g2_ParamLimits

0xe262,	// (0x0001d0b6) call5_swipe_1_pane_g2

0x0001,

0xfcbf,	// (0x0001eb13) call5_swipe_1_pane_g_ParamLimits

0xfcbf,	// (0x0001eb13) call5_swipe_1_pane_g

0xe26e,	// (0x0001d0c2) call5_swipe_1_pane_t1_ParamLimits

0xe26e,	// (0x0001d0c2) call5_swipe_1_pane_t1

0xc52f,	// (0x0001b383) call5_swipe_2_pane_g1_ParamLimits

0xc52f,	// (0x0001b383) call5_swipe_2_pane_g1

0xe283,	// (0x0001d0d7) call5_swipe_2_pane_g2_ParamLimits

0xe283,	// (0x0001d0d7) call5_swipe_2_pane_g2

0x0001,

0xfcc4,	// (0x0001eb18) call5_swipe_2_pane_g_ParamLimits

0xfcc4,	// (0x0001eb18) call5_swipe_2_pane_g

0xe28f,	// (0x0001d0e3) call5_swipe_2_pane_t1_ParamLimits

0xe28f,	// (0x0001d0e3) call5_swipe_2_pane_t1

0xe2a4,	// (0x0001d0f8) sc_swipe_pane_g1_ParamLimits

0xe2a4,	// (0x0001d0f8) sc_swipe_pane_g1

0xe2b1,	// (0x0001d105) sc_swipe_pane_g2_ParamLimits

0xe2b1,	// (0x0001d105) sc_swipe_pane_g2

0x0001,

0xfcc9,	// (0x0001eb1d) sc_swipe_pane_g_ParamLimits

0xfcc9,	// (0x0001eb1d) sc_swipe_pane_g

0xe2bd,	// (0x0001d111) sc_swipe_pane_t1_ParamLimits

0xe2bd,	// (0x0001d111) sc_swipe_pane_t1

0x9528,	// (0x0001837c) main_cmail_launcher_pane

0x7e90,	// (0x00016ce4) aid_size_cell_cmail_l_ParamLimits

0x7e90,	// (0x00016ce4) aid_size_cell_cmail_l

0x7eaa,	// (0x00016cfe) grid_cmail_l_pane_ParamLimits

0x7eaa,	// (0x00016cfe) grid_cmail_l_pane

0x7ec5,	// (0x00016d19) cell_cmail_l_pane_ParamLimits

0x7ec5,	// (0x00016d19) cell_cmail_l_pane

0x7eeb,	// (0x00016d3f) cell_cmail_l_pane_g1_ParamLimits

0x7eeb,	// (0x00016d3f) cell_cmail_l_pane_g1

0x7efc,	// (0x00016d50) cell_cmail_l_pane_t1_ParamLimits

0x7efc,	// (0x00016d50) cell_cmail_l_pane_t1

0xe2d2,	// (0x0001d126) cell_cmail_l_pane_t2_ParamLimits

0xe2d2,	// (0x0001d126) cell_cmail_l_pane_t2

0x0001,

0xfcce,	// (0x0001eb22) cell_cmail_l_pane_t_ParamLimits

0xfcce,	// (0x0001eb22) cell_cmail_l_pane_t

0x9598,	// (0x000183ec) grid_highlight_pane_cp018_ParamLimits

0x9598,	// (0x000183ec) grid_highlight_pane_cp018

0x0325,	// (0x0000f179) main2_pane_ParamLimits

0x0325,	// (0x0000f179) main2_pane

0x9df3,	// (0x00018c47) popup_sp_fs_action_menu_bg_pane_g1

0x9dfb,	// (0x00018c4f) popup_sp_fs_action_menu_bg_pane_g2

0x9e03,	// (0x00018c57) popup_sp_fs_action_menu_bg_pane_g3

0x9e0b,	// (0x00018c5f) popup_sp_fs_action_menu_bg_pane_g4

0x9e13,	// (0x00018c67) popup_sp_fs_action_menu_bg_pane_g5

0x9e1b,	// (0x00018c6f) popup_sp_fs_action_menu_bg_pane_g6

0x9e23,	// (0x00018c77) popup_sp_fs_action_menu_bg_pane_g7

0x9e2b,	// (0x00018c7f) popup_sp_fs_action_menu_bg_pane_g8

0x9e33,	// (0x00018c87) popup_sp_fs_action_menu_bg_pane_g9

0x9e3b,	// (0x00018c8f) popup_sp_fs_action_menu_bg_pane_g10

0x9e3b,	// (0x00018c8f) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf193,	// (0x0001dfe7) popup_sp_fs_action_menu_bg_pane_g

0x1330,	// (0x00010184) list_medium_line_x2_t3_g3_g1_ParamLimits

0x1330,	// (0x00010184) list_medium_line_x2_t3_g3_g1

0x133c,	// (0x00010190) list_medium_line_x2_t3_g3_g2_ParamLimits

0x133c,	// (0x00010190) list_medium_line_x2_t3_g3_g2

0x1348,	// (0x0001019c) list_medium_line_x2_t3_g3_g3_ParamLimits

0x1348,	// (0x0001019c) list_medium_line_x2_t3_g3_g3

0x0002,

0xf243,	// (0x0001e097) list_medium_line_x2_t3_g3_g_ParamLimits

0xf243,	// (0x0001e097) list_medium_line_x2_t3_g3_g

0x1354,	// (0x000101a8) list_medium_line_x2_t3_g3_t1_ParamLimits

0x1354,	// (0x000101a8) list_medium_line_x2_t3_g3_t1

0x1369,	// (0x000101bd) list_medium_line_x2_t3_g3_t2_ParamLimits

0x1369,	// (0x000101bd) list_medium_line_x2_t3_g3_t2

0x137d,	// (0x000101d1) list_medium_line_x2_t3_g3_t3_ParamLimits

0x137d,	// (0x000101d1) list_medium_line_x2_t3_g3_t3

0x0002,

0xf24a,	// (0x0001e09e) list_medium_line_x2_t3_g3_t_ParamLimits

0xf24a,	// (0x0001e09e) list_medium_line_x2_t3_g3_t

0x1330,	// (0x00010184) list_medium_line_x2_t3_g2_g1_ParamLimits

0x1330,	// (0x00010184) list_medium_line_x2_t3_g2_g1

0x1348,	// (0x0001019c) list_medium_line_x2_t3_g2_g2_ParamLimits

0x1348,	// (0x0001019c) list_medium_line_x2_t3_g2_g2

0x0001,

0xf251,	// (0x0001e0a5) list_medium_line_x2_t3_g2_g_ParamLimits

0xf251,	// (0x0001e0a5) list_medium_line_x2_t3_g2_g

0x1392,	// (0x000101e6) list_medium_line_x2_t3_g2_t1_ParamLimits

0x1392,	// (0x000101e6) list_medium_line_x2_t3_g2_t1

0x13a8,	// (0x000101fc) list_medium_line_x2_t3_g2_t2_ParamLimits

0x13a8,	// (0x000101fc) list_medium_line_x2_t3_g2_t2

0x13ba,	// (0x0001020e) list_medium_line_x2_t3_g2_t3_ParamLimits

0x13ba,	// (0x0001020e) list_medium_line_x2_t3_g2_t3

0x0002,

0xf256,	// (0x0001e0aa) list_medium_line_x2_t3_g2_t_ParamLimits

0xf256,	// (0x0001e0aa) list_medium_line_x2_t3_g2_t

0x1330,	// (0x00010184) list_medium_line_x2_t4_g4_g1_ParamLimits

0x1330,	// (0x00010184) list_medium_line_x2_t4_g4_g1

0x13d8,	// (0x0001022c) list_medium_line_x2_t4_g4_g2_ParamLimits

0x13d8,	// (0x0001022c) list_medium_line_x2_t4_g4_g2

0x133c,	// (0x00010190) list_medium_line_x2_t4_g4_g3_ParamLimits

0x133c,	// (0x00010190) list_medium_line_x2_t4_g4_g3

0x13e4,	// (0x00010238) list_medium_line_x2_t4_g4_g4_ParamLimits

0x13e4,	// (0x00010238) list_medium_line_x2_t4_g4_g4

0x0003,

0xf25d,	// (0x0001e0b1) list_medium_line_x2_t4_g4_g_ParamLimits

0xf25d,	// (0x0001e0b1) list_medium_line_x2_t4_g4_g

0x13f0,	// (0x00010244) list_medium_line_x2_t4_g4_t1_ParamLimits

0x13f0,	// (0x00010244) list_medium_line_x2_t4_g4_t1

0x1407,	// (0x0001025b) list_medium_line_x2_t4_g4_t2_ParamLimits

0x1407,	// (0x0001025b) list_medium_line_x2_t4_g4_t2

0x141c,	// (0x00010270) list_medium_line_x2_t4_g4_t3_ParamLimits

0x141c,	// (0x00010270) list_medium_line_x2_t4_g4_t3

0x142e,	// (0x00010282) list_medium_line_x2_t4_g4_t4_ParamLimits

0x142e,	// (0x00010282) list_medium_line_x2_t4_g4_t4

0x0003,

0xf266,	// (0x0001e0ba) list_medium_line_x2_t4_g4_t_ParamLimits

0xf266,	// (0x0001e0ba) list_medium_line_x2_t4_g4_t

0x1330,	// (0x00010184) list_medium_line_x2_t2_g4_g1_ParamLimits

0x1330,	// (0x00010184) list_medium_line_x2_t2_g4_g1

0x13d8,	// (0x0001022c) list_medium_line_x2_t2_g4_g2_ParamLimits

0x13d8,	// (0x0001022c) list_medium_line_x2_t2_g4_g2

0x133c,	// (0x00010190) list_medium_line_x2_t2_g4_g3_ParamLimits

0x133c,	// (0x00010190) list_medium_line_x2_t2_g4_g3

0x1348,	// (0x0001019c) list_medium_line_x2_t2_g4_g4_ParamLimits

0x1348,	// (0x0001019c) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2cd,	// (0x0001e121) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2cd,	// (0x0001e121) list_medium_line_x2_t2_g4_g

0x2413,	// (0x00011267) list_medium_line_x2_t2_g4_t1_ParamLimits

0x2413,	// (0x00011267) list_medium_line_x2_t2_g4_t1

0x137d,	// (0x000101d1) list_medium_line_x2_t2_g4_t2_ParamLimits

0x137d,	// (0x000101d1) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2d6,	// (0x0001e12a) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2d6,	// (0x0001e12a) list_medium_line_x2_t2_g4_t

0x1330,	// (0x00010184) list_medium_line_x2_t2_g3_g1_ParamLimits

0x1330,	// (0x00010184) list_medium_line_x2_t2_g3_g1

0x133c,	// (0x00010190) list_medium_line_x2_t2_g3_g2_ParamLimits

0x133c,	// (0x00010190) list_medium_line_x2_t2_g3_g2

0x1348,	// (0x0001019c) list_medium_line_x2_t2_g3_g3_ParamLimits

0x1348,	// (0x0001019c) list_medium_line_x2_t2_g3_g3

0x0002,

0xf243,	// (0x0001e097) list_medium_line_x2_t2_g3_g_ParamLimits

0xf243,	// (0x0001e097) list_medium_line_x2_t2_g3_g

0x2428,	// (0x0001127c) list_medium_line_x2_t2_g3_t1_ParamLimits

0x2428,	// (0x0001127c) list_medium_line_x2_t2_g3_t1

0x137d,	// (0x000101d1) list_medium_line_x2_t2_g3_t2_ParamLimits

0x137d,	// (0x000101d1) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2db,	// (0x0001e12f) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2db,	// (0x0001e12f) list_medium_line_x2_t2_g3_t

0x25e8,	// (0x0001143c) main_sp_fs_list_pane_ParamLimits

0x25e8,	// (0x0001143c) main_sp_fs_list_pane

0xd1f3,	// (0x0001c047) sp_fs_scroll_pane_ParamLimits

0xd1f3,	// (0x0001c047) sp_fs_scroll_pane

0x25f4,	// (0x00011448) list_medium_line_x2_t3_t1

0x2604,	// (0x00011458) list_medium_line_x2_t3_t2

0x2612,	// (0x00011466) list_medium_line_x2_t3_t3

0x0002,

0xf326,	// (0x0001e17a) list_medium_line_x2_t3_t

0x2620,	// (0x00011474) list_medium_line_x3_t4_t1

0x2630,	// (0x00011484) list_medium_line_x3_t4_t2

0x263e,	// (0x00011492) list_medium_line_x3_t4_t3

0x2612,	// (0x00011466) list_medium_line_x3_t4_t4

0x0003,

0xf32d,	// (0x0001e181) list_medium_line_x3_t4_t

0x264c,	// (0x000114a0) list_medium_line_x4_t5_t1

0x265c,	// (0x000114b0) list_medium_line_x4_t5_t2

0x263e,	// (0x00011492) list_medium_line_x4_t5_t3

0x266a,	// (0x000114be) list_medium_line_x4_t5_t4

0x2612,	// (0x00011466) list_medium_line_x4_t5_t5

0x0004,

0xf336,	// (0x0001e18a) list_medium_line_x4_t5_t

0x1330,	// (0x00010184) list_medium_line_t4_g4_g1_ParamLimits

0x1330,	// (0x00010184) list_medium_line_t4_g4_g1

0x13e4,	// (0x00010238) list_medium_line_t4_g4_g2_ParamLimits

0x13e4,	// (0x00010238) list_medium_line_t4_g4_g2

0x2678,	// (0x000114cc) list_medium_line_t4_g4_g3_ParamLimits

0x2678,	// (0x000114cc) list_medium_line_t4_g4_g3

0x1348,	// (0x0001019c) list_medium_line_t4_g4_g4_ParamLimits

0x1348,	// (0x0001019c) list_medium_line_t4_g4_g4

0x0003,

0xf341,	// (0x0001e195) list_medium_line_t4_g4_g_ParamLimits

0xf341,	// (0x0001e195) list_medium_line_t4_g4_g

0x2684,	// (0x000114d8) list_medium_line_t4_g4_t1_ParamLimits

0x2684,	// (0x000114d8) list_medium_line_t4_g4_t1

0x2699,	// (0x000114ed) list_medium_line_t4_g4_t2_ParamLimits

0x2699,	// (0x000114ed) list_medium_line_t4_g4_t2

0x26af,	// (0x00011503) list_medium_line_t4_g4_t3_ParamLimits

0x26af,	// (0x00011503) list_medium_line_t4_g4_t3

0x137d,	// (0x000101d1) list_medium_line_t4_g4_t4_ParamLimits

0x137d,	// (0x000101d1) list_medium_line_t4_g4_t4

0x0003,

0xf34a,	// (0x0001e19e) list_medium_line_t4_g4_t_ParamLimits

0xf34a,	// (0x0001e19e) list_medium_line_t4_g4_t

0x2764,	// (0x000115b8) chi_dic_find_pane_g1

0x38c0,	// (0x00012714) main_tport_pane

0x6819,	// (0x0001566d) list_medium_line_plain_t1

0x68cb,	// (0x0001571f) list_medium_line_t2_g2_g1_ParamLimits

0x68cb,	// (0x0001571f) list_medium_line_t2_g2_g1

0x68d7,	// (0x0001572b) list_medium_line_t2_g2_g2_ParamLimits

0x68d7,	// (0x0001572b) list_medium_line_t2_g2_g2

0x0001,

0xfa06,	// (0x0001e85a) list_medium_line_t2_g2_g_ParamLimits

0xfa06,	// (0x0001e85a) list_medium_line_t2_g2_g

0x68e3,	// (0x00015737) list_medium_line_t2_g2_t1_ParamLimits

0x68e3,	// (0x00015737) list_medium_line_t2_g2_t1

0x68fa,	// (0x0001574e) list_medium_line_t2_g2_t2_ParamLimits

0x68fa,	// (0x0001574e) list_medium_line_t2_g2_t2

0x0001,

0xfa0b,	// (0x0001e85f) list_medium_line_t2_g2_t_ParamLimits

0xfa0b,	// (0x0001e85f) list_medium_line_t2_g2_t

0xd7af,	// (0x0001c603) aid_sp_fs_list_icon_a_sm

0xd7b7,	// (0x0001c60b) aid_sp_fs_list_icon_d

0xd7bf,	// (0x0001c613) aid_sp_fs_text_primary

0xd7c8,	// (0x0001c61c) aid_sp_fs_text_secondary

0x6f2c,	// (0x00015d80) list_medium_line

0x6f2c,	// (0x00015d80) list_medium_line_g2

0x6f2c,	// (0x00015d80) list_medium_line_g3

0x6f2c,	// (0x00015d80) list_medium_line_plain

0x6f2c,	// (0x00015d80) list_medium_line_plain_t2

0x6f2c,	// (0x00015d80) list_medium_line_plain_t3

0x6f2c,	// (0x00015d80) list_medium_line_right_icon

0x6f2c,	// (0x00015d80) list_medium_line_right_iconx2

0x6f2c,	// (0x00015d80) list_medium_line_t2

0x6f2c,	// (0x00015d80) list_medium_line_t2_g2

0x6f2c,	// (0x00015d80) list_medium_line_t2_g3

0x6f2c,	// (0x00015d80) list_medium_line_t2_right_icon

0x6f2c,	// (0x00015d80) list_medium_line_t2_right_iconx2

0x6f2c,	// (0x00015d80) list_medium_line_t3

0x6f2c,	// (0x00015d80) list_medium_line_t3_g2

0x6f2c,	// (0x00015d80) list_medium_line_t3_g3

0x6f2c,	// (0x00015d80) list_medium_line_t3_right_iconx2

0x6f35,	// (0x00015d89) list_medium_line_t4_g4

0x6f2c,	// (0x00015d80) list_medium_line_x2

0x6f2c,	// (0x00015d80) list_medium_line_x2_t2_g2

0x6f2c,	// (0x00015d80) list_medium_line_x2_t2_g3

0x6f2c,	// (0x00015d80) list_medium_line_x2_t2_g4

0x6f2c,	// (0x00015d80) list_medium_line_x2_t3

0x6f2c,	// (0x00015d80) list_medium_line_x2_t3_g2

0x6f2c,	// (0x00015d80) list_medium_line_x2_t3_g3

0x6f2c,	// (0x00015d80) list_medium_line_x2_t3_g4

0x6f2c,	// (0x00015d80) list_medium_line_x2_t4_g2

0x6f2c,	// (0x00015d80) list_medium_line_x2_t4_g4

0x6f3e,	// (0x00015d92) list_medium_line_x3

0x6f3e,	// (0x00015d92) list_medium_line_x3_t4

0x6f3e,	// (0x00015d92) list_medium_line_x3_t4_g4

0x6f35,	// (0x00015d89) list_medium_line_x4_t4

0x6f35,	// (0x00015d89) list_medium_line_x4_t4_g7

0x6f35,	// (0x00015d89) list_medium_line_x4_t5

0x6f47,	// (0x00015d9b) list_single_fs_dyc_pane_ParamLimits

0x6f47,	// (0x00015d9b) list_single_fs_dyc_pane

0x1330,	// (0x00010184) list_medium_line_x4_t4_g7_g1_ParamLimits

0x1330,	// (0x00010184) list_medium_line_x4_t4_g7_g1

0x76a2,	// (0x000164f6) list_medium_line_x4_t4_g7_g2_ParamLimits

0x76a2,	// (0x000164f6) list_medium_line_x4_t4_g7_g2

0x76ae,	// (0x00016502) list_medium_line_x4_t4_g7_g3_ParamLimits

0x76ae,	// (0x00016502) list_medium_line_x4_t4_g7_g3

0x76bd,	// (0x00016511) list_medium_line_x4_t4_g7_g4_ParamLimits

0x76bd,	// (0x00016511) list_medium_line_x4_t4_g7_g4

0x76c9,	// (0x0001651d) list_medium_line_x4_t4_g7_g5_ParamLimits

0x76c9,	// (0x0001651d) list_medium_line_x4_t4_g7_g5

0x76d8,	// (0x0001652c) list_medium_line_x4_t4_g7_g6_ParamLimits

0x76d8,	// (0x0001652c) list_medium_line_x4_t4_g7_g6

0x76e7,	// (0x0001653b) list_medium_line_x4_t4_g7_g7_ParamLimits

0x76e7,	// (0x0001653b) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbd6,	// (0x0001ea2a) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbd6,	// (0x0001ea2a) list_medium_line_x4_t4_g7_g

0x76f3,	// (0x00016547) list_medium_line_x4_t4_g7_t1_ParamLimits

0x76f3,	// (0x00016547) list_medium_line_x4_t4_g7_t1

0x7708,	// (0x0001655c) list_medium_line_x4_t4_g7_t2_ParamLimits

0x7708,	// (0x0001655c) list_medium_line_x4_t4_g7_t2

0x771d,	// (0x00016571) list_medium_line_x4_t4_g7_t3_ParamLimits

0x771d,	// (0x00016571) list_medium_line_x4_t4_g7_t3

0x7732,	// (0x00016586) list_medium_line_x4_t4_g7_t4_ParamLimits

0x7732,	// (0x00016586) list_medium_line_x4_t4_g7_t4

0x7744,	// (0x00016598) list_medium_line_x4_t4_g7_t5_ParamLimits

0x7744,	// (0x00016598) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbe5,	// (0x0001ea39) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbe5,	// (0x0001ea39) list_medium_line_x4_t4_g7_t

0x7756,	// (0x000165aa) list_single_dyc_row_pane_ParamLimits

0x7756,	// (0x000165aa) list_single_dyc_row_pane

0x7e11,	// (0x00016c65) call5_gesture_pane_ParamLimits

0x7e11,	// (0x00016c65) call5_gesture_pane

0x7e67,	// (0x00016cbb) call5_windows_pane_ParamLimits

0x7e67,	// (0x00016cbb) call5_windows_pane

0x7f12,	// (0x00016d66) call5_swipe_1_pane_cp_ParamLimits

0x7f12,	// (0x00016d66) call5_swipe_1_pane_cp

0x7f1e,	// (0x00016d72) call5_swipe_2_pane_cp_ParamLimits

0x7f1e,	// (0x00016d72) call5_swipe_2_pane_cp

0xa906,	// (0x0001975a) call5_image_pane_cp

0x7f2a,	// (0x00016d7e) popup_call5_audio_first_window_cp_ParamLimits

0x7f2a,	// (0x00016d7e) popup_call5_audio_first_window_cp

0xe2a4,	// (0x0001d0f8) call5_swipe_1_pane_g1_cp_ParamLimits

0xe2a4,	// (0x0001d0f8) call5_swipe_1_pane_g1_cp

0xe2e4,	// (0x0001d138) call5_swipe_1_pane_g2_cp

0xe2bd,	// (0x0001d111) call5_swipe_1_pane_t1_cp_ParamLimits

0xe2bd,	// (0x0001d111) call5_swipe_1_pane_t1_cp

0xe2a4,	// (0x0001d0f8) call5_swipe_2_pane_g1_cp_ParamLimits

0xe2a4,	// (0x0001d0f8) call5_swipe_2_pane_g1_cp

0xe2ec,	// (0x0001d140) call5_swipe_2_pane_g2_cp

0xe2f4,	// (0x0001d148) call5_swipe_2_pane_t1_cp_ParamLimits

0xe2f4,	// (0x0001d148) call5_swipe_2_pane_t1_cp

0x9598,	// (0x000183ec) main_sp_fs_email_pane

0xe309,	// (0x0001d15d) main_sp_fs_listscroll_pane_te

0xe312,	// (0x0001d166) popup_sp_fs_action_menu_pane_ParamLimits

0xe312,	// (0x0001d166) popup_sp_fs_action_menu_pane

0xc2cf,	// (0x0001b123) bg_sp_fs_ctrlbar_pane_g1

0xe354,	// (0x0001d1a8) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe35d,	// (0x0001d1b1) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe366,	// (0x0001d1ba) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc2cf,	// (0x0001b123) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcd3,	// (0x0001eb27) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc0b2,	// (0x0001af06) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc0b2,	// (0x0001af06) bg_sp_fs_ctrlbar_ddmenu_pane

0xe36f,	// (0x0001d1c3) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe36f,	// (0x0001d1c3) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe37b,	// (0x0001d1cf) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe37b,	// (0x0001d1cf) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcdc,	// (0x0001eb30) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcdc,	// (0x0001eb30) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe387,	// (0x0001d1db) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe387,	// (0x0001d1db) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x7f38,	// (0x00016d8c) list_medium_line_t2_right_icon_g1

0x7f40,	// (0x00016d94) list_medium_line_t2_right_icon_t1

0x7f50,	// (0x00016da4) list_medium_line_t2_right_icon_t2

0x0001,

0xfce1,	// (0x0001eb35) list_medium_line_t2_right_icon_t

0xbdb2,	// (0x0001ac06) bg_sp_fs_ctrlbar_pane_ParamLimits

0xbdb2,	// (0x0001ac06) bg_sp_fs_ctrlbar_pane

0x7faa,	// (0x00016dfe) main_sp_fs_ctrlbar_button_pane_cp01

0x7fb4,	// (0x00016e08) main_sp_fs_ctrlbar_ddmenu_pane

0xe3d9,	// (0x0001d22d) main_sp_fs_ctrlbar_pane_g1

0xe3e5,	// (0x0001d239) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfce6,	// (0x0001eb3a) main_sp_fs_ctrlbar_pane_g

0xe3f1,	// (0x0001d245) main_sp_fs_ctrlbar_pane_t1

0x7fbe,	// (0x00016e12) main_sp_fs_ctrlbar_pane

0x7fe2,	// (0x00016e36) main_sp_fs_listscroll_pane_te_cp01

0x8002,	// (0x00016e56) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x8002,	// (0x00016e56) popup_sp_fs_action_menu_pane_cp01

0x9598,	// (0x000183ec) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x9598,	// (0x000183ec) bg_sp_fs_highlight_list_pane_cp01

0xe421,	// (0x0001d275) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xe421,	// (0x0001d275) sp_fs_action_menu_list_gene_pane_g1

0xe430,	// (0x0001d284) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe430,	// (0x0001d284) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcf0,	// (0x0001eb44) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcf0,	// (0x0001eb44) sp_fs_action_menu_list_gene_pane_g

0xe43d,	// (0x0001d291) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xe43d,	// (0x0001d291) sp_fs_action_menu_list_gene_pane_t1

0xe455,	// (0x0001d2a9) sp_fs_action_menu_list_gene_pane_ParamLimits

0xe455,	// (0x0001d2a9) sp_fs_action_menu_list_gene_pane

0xe474,	// (0x0001d2c8) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe474,	// (0x0001d2c8) popup_sp_fs_action_menu_bg_pane

0xe482,	// (0x0001d2d6) sp_fs_action_menu_list_pane_ParamLimits

0xe482,	// (0x0001d2d6) sp_fs_action_menu_list_pane

0xe4a2,	// (0x0001d2f6) sp_fs_scroll_pane_cp01_ParamLimits

0xe4a2,	// (0x0001d2f6) sp_fs_scroll_pane_cp01

0x8032,	// (0x00016e86) list_medium_line_plain_t2_t1

0x8042,	// (0x00016e96) list_medium_line_plain_t2_t2

0x0001,

0xfcf5,	// (0x0001eb49) list_medium_line_plain_t2_t

0x8052,	// (0x00016ea6) list_medium_line_plain_t3_t1

0x8062,	// (0x00016eb6) list_medium_line_plain_t3_t2

0x8070,	// (0x00016ec4) list_medium_line_plain_t3_t3

0x0002,

0xfcfa,	// (0x0001eb4e) list_medium_line_plain_t3_t

0x1330,	// (0x00010184) list_medium_line_x2_t2_g2_g1_ParamLimits

0x1330,	// (0x00010184) list_medium_line_x2_t2_g2_g1

0x1348,	// (0x0001019c) list_medium_line_x2_t2_g2_g2_ParamLimits

0x1348,	// (0x0001019c) list_medium_line_x2_t2_g2_g2

0x0001,

0xf251,	// (0x0001e0a5) list_medium_line_x2_t2_g2_g_ParamLimits

0xf251,	// (0x0001e0a5) list_medium_line_x2_t2_g2_g

0x2684,	// (0x000114d8) list_medium_line_x2_t2_g2_t1_ParamLimits

0x2684,	// (0x000114d8) list_medium_line_x2_t2_g2_t1

0x137d,	// (0x000101d1) list_medium_line_x2_t2_g2_t2_ParamLimits

0x137d,	// (0x000101d1) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd01,	// (0x0001eb55) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd01,	// (0x0001eb55) list_medium_line_x2_t2_g2_t

0x1330,	// (0x00010184) list_medium_line_x2_t4_g2_g1_ParamLimits

0x1330,	// (0x00010184) list_medium_line_x2_t4_g2_g1

0x1348,	// (0x0001019c) list_medium_line_x2_t4_g2_g2_ParamLimits

0x1348,	// (0x0001019c) list_medium_line_x2_t4_g2_g2

0x0001,

0xf251,	// (0x0001e0a5) list_medium_line_x2_t4_g2_g_ParamLimits

0xf251,	// (0x0001e0a5) list_medium_line_x2_t4_g2_g

0x807e,	// (0x00016ed2) list_medium_line_x2_t4_g2_t1_ParamLimits

0x807e,	// (0x00016ed2) list_medium_line_x2_t4_g2_t1

0x8098,	// (0x00016eec) list_medium_line_x2_t4_g2_t2_ParamLimits

0x8098,	// (0x00016eec) list_medium_line_x2_t4_g2_t2

0x80ad,	// (0x00016f01) list_medium_line_x2_t4_g2_t3_ParamLimits

0x80ad,	// (0x00016f01) list_medium_line_x2_t4_g2_t3

0x137d,	// (0x000101d1) list_medium_line_x2_t4_g2_t4_ParamLimits

0x137d,	// (0x000101d1) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd06,	// (0x0001eb5a) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd06,	// (0x0001eb5a) list_medium_line_x2_t4_g2_t

0x80c2,	// (0x00016f16) list_medium_line_t3_right_iconx2_g1

0x7f38,	// (0x00016d8c) list_medium_line_t3_right_iconx2_g2

0x80ca,	// (0x00016f1e) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd0f,	// (0x0001eb63) list_medium_line_t3_right_iconx2_g

0x80d4,	// (0x00016f28) list_medium_line_t3_right_iconx2_t1

0x80e4,	// (0x00016f38) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd16,	// (0x0001eb6a) list_medium_line_t3_right_iconx2_t

0x1330,	// (0x00010184) list_medium_line_x3_t4_g4_g1_ParamLimits

0x1330,	// (0x00010184) list_medium_line_x3_t4_g4_g1

0x133c,	// (0x00010190) list_medium_line_x3_t4_g4_g2_ParamLimits

0x133c,	// (0x00010190) list_medium_line_x3_t4_g4_g2

0x13e4,	// (0x00010238) list_medium_line_x3_t4_g4_g3_ParamLimits

0x13e4,	// (0x00010238) list_medium_line_x3_t4_g4_g3

0x80f2,	// (0x00016f46) list_medium_line_x3_t4_g4_g4_ParamLimits

0x80f2,	// (0x00016f46) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd1b,	// (0x0001eb6f) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd1b,	// (0x0001eb6f) list_medium_line_x3_t4_g4_g

0x80fe,	// (0x00016f52) list_medium_line_x3_t4_g4_t1_ParamLimits

0x80fe,	// (0x00016f52) list_medium_line_x3_t4_g4_t1

0x8115,	// (0x00016f69) list_medium_line_x3_t4_g4_t2_ParamLimits

0x8115,	// (0x00016f69) list_medium_line_x3_t4_g4_t2

0x8130,	// (0x00016f84) list_medium_line_x3_t4_g4_t3_ParamLimits

0x8130,	// (0x00016f84) list_medium_line_x3_t4_g4_t3

0x8145,	// (0x00016f99) list_medium_line_x3_t4_g4_t4_ParamLimits

0x8145,	// (0x00016f99) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd24,	// (0x0001eb78) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd24,	// (0x0001eb78) list_medium_line_x3_t4_g4_t

0x8162,	// (0x00016fb6) list_single_dyc_row_text_pane_t1_ParamLimits

0x8162,	// (0x00016fb6) list_single_dyc_row_text_pane_t1

0x81ab,	// (0x00016fff) list_single_dyc_row_text_pane_t2_ParamLimits

0x81ab,	// (0x00016fff) list_single_dyc_row_text_pane_t2

0xe4c8,	// (0x0001d31c) list_single_dyc_row_text_pane_t3_ParamLimits

0xe4c8,	// (0x0001d31c) list_single_dyc_row_text_pane_t3

0x0002,

0xfd2d,	// (0x0001eb81) list_single_dyc_row_text_pane_t_ParamLimits

0xfd2d,	// (0x0001eb81) list_single_dyc_row_text_pane_t

0xe4da,	// (0x0001d32e) list_single_dyc_row_pane_g1_ParamLimits

0xe4da,	// (0x0001d32e) list_single_dyc_row_pane_g1

0xe4e6,	// (0x0001d33a) list_single_dyc_row_pane_g2_ParamLimits

0xe4e6,	// (0x0001d33a) list_single_dyc_row_pane_g2

0xe4f2,	// (0x0001d346) list_single_dyc_row_pane_g3_ParamLimits

0xe4f2,	// (0x0001d346) list_single_dyc_row_pane_g3

0xe4fe,	// (0x0001d352) list_single_dyc_row_pane_g4_ParamLimits

0xe4fe,	// (0x0001d352) list_single_dyc_row_pane_g4

0x0003,

0xfd34,	// (0x0001eb88) list_single_dyc_row_pane_g_ParamLimits

0xfd34,	// (0x0001eb88) list_single_dyc_row_pane_g

0xe50a,	// (0x0001d35e) list_single_dyc_row_text_pane_ParamLimits

0xe50a,	// (0x0001d35e) list_single_dyc_row_text_pane

0x9528,	// (0x0001837c) bg_sp_fs_scroll_pane

0xe529,	// (0x0001d37d) thumb_sp_fs_scroll_pane

0x68cb,	// (0x0001571f) list_medium_line_g1_ParamLimits

0x68cb,	// (0x0001571f) list_medium_line_g1

0x8205,	// (0x00017059) list_medium_line_t1_ParamLimits

0x8205,	// (0x00017059) list_medium_line_t1

0x1330,	// (0x00010184) list_medium_line_x2_g1_ParamLimits

0x1330,	// (0x00010184) list_medium_line_x2_g1

0x133c,	// (0x00010190) list_medium_line_x2_g2_ParamLimits

0x133c,	// (0x00010190) list_medium_line_x2_g2

0x0001,

0xfd3d,	// (0x0001eb91) list_medium_line_x2_g_ParamLimits

0xfd3d,	// (0x0001eb91) list_medium_line_x2_g

0xe532,	// (0x0001d386) list_medium_line_x2_t1_ParamLimits

0xe532,	// (0x0001d386) list_medium_line_x2_t1

0x1330,	// (0x00010184) list_medium_line_x3_g1_ParamLimits

0x1330,	// (0x00010184) list_medium_line_x3_g1

0x133c,	// (0x00010190) list_medium_line_x3_g2_ParamLimits

0x133c,	// (0x00010190) list_medium_line_x3_g2

0x0001,

0xfd3d,	// (0x0001eb91) list_medium_line_x3_g_ParamLimits

0xfd3d,	// (0x0001eb91) list_medium_line_x3_g

0xe532,	// (0x0001d386) list_medium_line_x3_t1_ParamLimits

0xe532,	// (0x0001d386) list_medium_line_x3_t1

0xe548,	// (0x0001d39c) thumb_sp_fs_scroll_pane_g1

0xe551,	// (0x0001d3a5) thumb_sp_fs_scroll_pane_g2

0xe55a,	// (0x0001d3ae) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd42,	// (0x0001eb96) thumb_sp_fs_scroll_pane_g

0xe548,	// (0x0001d39c) bg_sp_fs_scroll_pane_g1

0xe551,	// (0x0001d3a5) bg_sp_fs_scroll_pane_g2

0xe55a,	// (0x0001d3ae) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd42,	// (0x0001eb96) bg_sp_fs_scroll_pane_g

0x1330,	// (0x00010184) list_medium_line_x2_t3_g4_g1_ParamLimits

0x1330,	// (0x00010184) list_medium_line_x2_t3_g4_g1

0x13d8,	// (0x0001022c) list_medium_line_x2_t3_g4_g2_ParamLimits

0x13d8,	// (0x0001022c) list_medium_line_x2_t3_g4_g2

0x133c,	// (0x00010190) list_medium_line_x2_t3_g4_g3_ParamLimits

0x133c,	// (0x00010190) list_medium_line_x2_t3_g4_g3

0x1348,	// (0x0001019c) list_medium_line_x2_t3_g4_g4_ParamLimits

0x1348,	// (0x0001019c) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2cd,	// (0x0001e121) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2cd,	// (0x0001e121) list_medium_line_x2_t3_g4_g

0x821a,	// (0x0001706e) list_medium_line_x2_t3_g4_t1_ParamLimits

0x821a,	// (0x0001706e) list_medium_line_x2_t3_g4_t1

0x8234,	// (0x00017088) list_medium_line_x2_t3_g4_t2_ParamLimits

0x8234,	// (0x00017088) list_medium_line_x2_t3_g4_t2

0x137d,	// (0x000101d1) list_medium_line_x2_t3_g4_t3_ParamLimits

0x137d,	// (0x000101d1) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd49,	// (0x0001eb9d) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd49,	// (0x0001eb9d) list_medium_line_x2_t3_g4_t

0x68cb,	// (0x0001571f) list_medium_line_g2_g1_ParamLimits

0x68cb,	// (0x0001571f) list_medium_line_g2_g1

0x68d7,	// (0x0001572b) list_medium_line_g2_g2_ParamLimits

0x68d7,	// (0x0001572b) list_medium_line_g2_g2

0x0001,

0xfa06,	// (0x0001e85a) list_medium_line_g2_g_ParamLimits

0xfa06,	// (0x0001e85a) list_medium_line_g2_g

0x824d,	// (0x000170a1) list_medium_line_g2_t1_ParamLimits

0x824d,	// (0x000170a1) list_medium_line_g2_t1

0x68cb,	// (0x0001571f) list_medium_line_t3_g2_g1_ParamLimits

0x68cb,	// (0x0001571f) list_medium_line_t3_g2_g1

0x68d7,	// (0x0001572b) list_medium_line_t3_g2_g2_ParamLimits

0x68d7,	// (0x0001572b) list_medium_line_t3_g2_g2

0x0001,

0xfa06,	// (0x0001e85a) list_medium_line_t3_g2_g_ParamLimits

0xfa06,	// (0x0001e85a) list_medium_line_t3_g2_g

0x8262,	// (0x000170b6) list_medium_line_t3_g2_t1_ParamLimits

0x8262,	// (0x000170b6) list_medium_line_t3_g2_t1

0x8279,	// (0x000170cd) list_medium_line_t3_g2_t2_ParamLimits

0x8279,	// (0x000170cd) list_medium_line_t3_g2_t2

0x828e,	// (0x000170e2) list_medium_line_t3_g2_t3_ParamLimits

0x828e,	// (0x000170e2) list_medium_line_t3_g2_t3

0x0002,

0xfd50,	// (0x0001eba4) list_medium_line_t3_g2_t_ParamLimits

0xfd50,	// (0x0001eba4) list_medium_line_t3_g2_t

0x7f38,	// (0x00016d8c) list_medium_line_right_icon_g1

0x82a7,	// (0x000170fb) list_medium_line_right_icon_t1

0x68cb,	// (0x0001571f) list_medium_line_t2_g1_ParamLimits

0x68cb,	// (0x0001571f) list_medium_line_t2_g1

0x82b5,	// (0x00017109) list_medium_line_t2_t1_ParamLimits

0x82b5,	// (0x00017109) list_medium_line_t2_t1

0x82cf,	// (0x00017123) list_medium_line_t2_t2_ParamLimits

0x82cf,	// (0x00017123) list_medium_line_t2_t2

0x0001,

0xfd57,	// (0x0001ebab) list_medium_line_t2_t_ParamLimits

0xfd57,	// (0x0001ebab) list_medium_line_t2_t

0x68cb,	// (0x0001571f) list_medium_line_t3_g1_ParamLimits

0x68cb,	// (0x0001571f) list_medium_line_t3_g1

0x82e8,	// (0x0001713c) list_medium_line_t3_t1_ParamLimits

0x82e8,	// (0x0001713c) list_medium_line_t3_t1

0x8302,	// (0x00017156) list_medium_line_t3_t2_ParamLimits

0x8302,	// (0x00017156) list_medium_line_t3_t2

0x8317,	// (0x0001716b) list_medium_line_t3_t3_ParamLimits

0x8317,	// (0x0001716b) list_medium_line_t3_t3

0x0002,

0xfd5c,	// (0x0001ebb0) list_medium_line_t3_t_ParamLimits

0xfd5c,	// (0x0001ebb0) list_medium_line_t3_t

0x68cb,	// (0x0001571f) list_medium_line_g3_g1_ParamLimits

0x68cb,	// (0x0001571f) list_medium_line_g3_g1

0x832c,	// (0x00017180) list_medium_line_g3_g2_ParamLimits

0x832c,	// (0x00017180) list_medium_line_g3_g2

0x68d7,	// (0x0001572b) list_medium_line_g3_g3_ParamLimits

0x68d7,	// (0x0001572b) list_medium_line_g3_g3

0x0002,

0xfd63,	// (0x0001ebb7) list_medium_line_g3_g_ParamLimits

0xfd63,	// (0x0001ebb7) list_medium_line_g3_g

0x8338,	// (0x0001718c) list_medium_line_g3_t1_ParamLimits

0x8338,	// (0x0001718c) list_medium_line_g3_t1

0x68cb,	// (0x0001571f) list_medium_line_t2_g3_g1_ParamLimits

0x68cb,	// (0x0001571f) list_medium_line_t2_g3_g1

0x832c,	// (0x00017180) list_medium_line_t2_g3_g2_ParamLimits

0x832c,	// (0x00017180) list_medium_line_t2_g3_g2

0x68d7,	// (0x0001572b) list_medium_line_t2_g3_g3_ParamLimits

0x68d7,	// (0x0001572b) list_medium_line_t2_g3_g3

0x0002,

0xfd63,	// (0x0001ebb7) list_medium_line_t2_g3_g_ParamLimits

0xfd63,	// (0x0001ebb7) list_medium_line_t2_g3_g

0x834d,	// (0x000171a1) list_medium_line_t2_g3_t1_ParamLimits

0x834d,	// (0x000171a1) list_medium_line_t2_g3_t1

0x8367,	// (0x000171bb) list_medium_line_t2_g3_t2_ParamLimits

0x8367,	// (0x000171bb) list_medium_line_t2_g3_t2

0x0001,

0xfd6a,	// (0x0001ebbe) list_medium_line_t2_g3_t_ParamLimits

0xfd6a,	// (0x0001ebbe) list_medium_line_t2_g3_t

0x68cb,	// (0x0001571f) list_medium_line_t3_g3_g1_ParamLimits

0x68cb,	// (0x0001571f) list_medium_line_t3_g3_g1

0x832c,	// (0x00017180) list_medium_line_t3_g3_g2_ParamLimits

0x832c,	// (0x00017180) list_medium_line_t3_g3_g2

0x68d7,	// (0x0001572b) list_medium_line_t3_g3_g3_ParamLimits

0x68d7,	// (0x0001572b) list_medium_line_t3_g3_g3

0x0002,

0xfd63,	// (0x0001ebb7) list_medium_line_t3_g3_g_ParamLimits

0xfd63,	// (0x0001ebb7) list_medium_line_t3_g3_g

0x8382,	// (0x000171d6) list_medium_line_t3_g3_t1_ParamLimits

0x8382,	// (0x000171d6) list_medium_line_t3_g3_t1

0x8396,	// (0x000171ea) list_medium_line_t3_g3_t2_ParamLimits

0x8396,	// (0x000171ea) list_medium_line_t3_g3_t2

0x83a8,	// (0x000171fc) list_medium_line_t3_g3_t3_ParamLimits

0x83a8,	// (0x000171fc) list_medium_line_t3_g3_t3

0x0002,

0xfd6f,	// (0x0001ebc3) list_medium_line_t3_g3_t_ParamLimits

0xfd6f,	// (0x0001ebc3) list_medium_line_t3_g3_t

0x80c2,	// (0x00016f16) list_medium_line_right_iconx2_g1

0x7f38,	// (0x00016d8c) list_medium_line_right_iconx2_g2

0x0001,

0xfd76,	// (0x0001ebca) list_medium_line_right_iconx2_g

0x83bc,	// (0x00017210) list_medium_line_right_iconx2_t1

0x80c2,	// (0x00016f16) list_medium_line_t2_right_iconx2_g1

0x7f38,	// (0x00016d8c) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd76,	// (0x0001ebca) list_medium_line_t2_right_iconx2_g

0x83ca,	// (0x0001721e) list_medium_line_t2_right_iconx2_t1

0x83da,	// (0x0001722e) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd7b,	// (0x0001ebcf) list_medium_line_t2_right_iconx2_t

0x83ec,	// (0x00017240) list_medium_line_x4_t4_t1

0x83fa,	// (0x0001724e) list_medium_line_x4_t4_t2

0x840a,	// (0x0001725e) list_medium_line_x4_t4_t3

0x841a,	// (0x0001726e) list_medium_line_x4_t4_t4

0x0003,

0xfd80,	// (0x0001ebd4) list_medium_line_x4_t4_t

0x846d,	// (0x000172c1) tport_appsw_pane_ParamLimits

0x846d,	// (0x000172c1) tport_appsw_pane

0x8485,	// (0x000172d9) tport_contact_pane_ParamLimits

0x8485,	// (0x000172d9) tport_contact_pane

0x849d,	// (0x000172f1) tport_listscroll_pane_ParamLimits

0x849d,	// (0x000172f1) tport_listscroll_pane

0x84b7,	// (0x0001730b) cell_tport_appsw_pane_ParamLimits

0x84b7,	// (0x0001730b) cell_tport_appsw_pane

0xd0d8,	// (0x0001bf2c) tport_appsw_pane_g1_ParamLimits

0xd0d8,	// (0x0001bf2c) tport_appsw_pane_g1

0xe563,	// (0x0001d3b7) tport_contact_pane_g1

0xddb6,	// (0x0001cc0a) tport_contact_pane_t1

0xe56c,	// (0x0001d3c0) tport_contact_pane_t2

0x0001,

0xfd89,	// (0x0001ebdd) tport_contact_pane_t

0xe57a,	// (0x0001d3ce) list_tport_pane

0xe583,	// (0x0001d3d7) scroll_pane_cp_030

0x84ff,	// (0x00017353) cell_tport_appsw_pane_g1

0x850f,	// (0x00017363) cell_tport_appsw_pane_t1

0x9528,	// (0x0001837c) grid_highlight_pane_cp019

0x851d,	// (0x00017371) list_tport_double_graphic_pane_ParamLimits

0x851d,	// (0x00017371) list_tport_double_graphic_pane

0x9598,	// (0x000183ec) list_highlight_pane_cp023_ParamLimits

0x9598,	// (0x000183ec) list_highlight_pane_cp023

0x852a,	// (0x0001737e) list_tport_double_graphic_pane_g1_ParamLimits

0x852a,	// (0x0001737e) list_tport_double_graphic_pane_g1

0x8537,	// (0x0001738b) list_tport_double_graphic_pane_t1_ParamLimits

0x8537,	// (0x0001738b) list_tport_double_graphic_pane_t1

0x854c,	// (0x000173a0) list_tport_double_graphic_pane_t2_ParamLimits

0x854c,	// (0x000173a0) list_tport_double_graphic_pane_t2

0x0001,

0xfd95,	// (0x0001ebe9) list_tport_double_graphic_pane_t_ParamLimits

0xfd95,	// (0x0001ebe9) list_tport_double_graphic_pane_t

0x9528,	// (0x0001837c) main_cale_note_pane

0x5f97,	// (0x00014deb) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x5f97,	// (0x00014deb) cell_vitu2_function_top_wide_pane_cp01

0x7ac8,	// (0x0001691c) wait_bar_pane_cp05_ParamLimits

0x9598,	// (0x000183ec) listscroll_cmail_pane

0xe58c,	// (0x0001d3e0) list_cmail_pane

0x855e,	// (0x000173b2) list_cmail_body_pane

0x8572,	// (0x000173c6) list_single_cmail_header_caption_pane

0x858a,	// (0x000173de) list_single_cmail_header_detail_pane_ParamLimits

0x858a,	// (0x000173de) list_single_cmail_header_detail_pane

0xe59c,	// (0x0001d3f0) list_single_cmail_header_caption_pane_t1

0x85bd,	// (0x00017411) list_single_cmail_header_detail_pane_g1_ParamLimits

0x85bd,	// (0x00017411) list_single_cmail_header_detail_pane_g1

0xe5aa,	// (0x0001d3fe) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe5aa,	// (0x0001d3fe) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd9a,	// (0x0001ebee) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd9a,	// (0x0001ebee) list_single_cmail_header_detail_pane_g

0x85d5,	// (0x00017429) list_single_cmail_header_detail_pane_t1_ParamLimits

0x85d5,	// (0x00017429) list_single_cmail_header_detail_pane_t1

0x8613,	// (0x00017467) list_single_cmail_header_editor_pane_bg_ParamLimits

0x8613,	// (0x00017467) list_single_cmail_header_editor_pane_bg

0xe5e7,	// (0x0001d43b) list_cmail_body_pane_g1

0xe5f0,	// (0x0001d444) list_cmail_body_pane_t1

0xd145,	// (0x0001bf99) list_single_cmail_header_editor_pane_bg_g1

0xa1c8,	// (0x0001901c) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd155,	// (0x0001bfa9) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd14d,	// (0x0001bfa1) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd3f6,	// (0x0001c24a) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd175,	// (0x0001bfc9) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd165,	// (0x0001bfb9) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd16d,	// (0x0001bfc1) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xa1a8,	// (0x00018ffc) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x862c,	// (0x00017480) calenote_gesture_pane_ParamLimits

0x862c,	// (0x00017480) calenote_gesture_pane

0x864c,	// (0x000174a0) calenote_window_pane_ParamLimits

0x864c,	// (0x000174a0) calenote_window_pane

0xe5fe,	// (0x0001d452) popup_note_window_cp01

0x8668,	// (0x000174bc) calenote_swipe_1_pane_ParamLimits

0x8668,	// (0x000174bc) calenote_swipe_1_pane

0x7f1e,	// (0x00016d72) calenote_swipe_2_pane_ParamLimits

0x7f1e,	// (0x00016d72) calenote_swipe_2_pane

0xe2a4,	// (0x0001d0f8) calenote_swipe_1_pane_g1_ParamLimits

0xe2a4,	// (0x0001d0f8) calenote_swipe_1_pane_g1

0xe2b1,	// (0x0001d105) calenote_swipe_1_pane_g2_ParamLimits

0xe2b1,	// (0x0001d105) calenote_swipe_1_pane_g2

0x0001,

0xfcc9,	// (0x0001eb1d) calenote_swipe_1_pane_g_ParamLimits

0xfcc9,	// (0x0001eb1d) calenote_swipe_1_pane_g

0xe610,	// (0x0001d464) calenote_swipe_1_pane_t1_ParamLimits

0xe610,	// (0x0001d464) calenote_swipe_1_pane_t1

0xe2a4,	// (0x0001d0f8) calenote_swipe_2_pane_g1_ParamLimits

0xe2a4,	// (0x0001d0f8) calenote_swipe_2_pane_g1

0xe62f,	// (0x0001d483) calenote_swipe_2_pane_g2_ParamLimits

0xe62f,	// (0x0001d483) calenote_swipe_2_pane_g2

0x0001,

0xfda6,	// (0x0001ebfa) calenote_swipe_2_pane_g_ParamLimits

0xfda6,	// (0x0001ebfa) calenote_swipe_2_pane_g

0xe63b,	// (0x0001d48f) calenote_swipe_2_pane_t1_ParamLimits

0xe63b,	// (0x0001d48f) calenote_swipe_2_pane_t1

0x9528,	// (0x0001837c) main_mup_navstr_pane

0x4c4d,	// (0x00013aa1) main_mup3_pane_t7_ParamLimits

0x4c4d,	// (0x00013aa1) main_mup3_pane_t7

0xcc8b,	// (0x0001badf) main_mp4_pane_g6_ParamLimits

0xcc8b,	// (0x0001badf) main_mp4_pane_g6

0xceb3,	// (0x0001bd07) main_image3_pane_t4_ParamLimits

0xceb3,	// (0x0001bd07) main_image3_pane_t4

0x867d,	// (0x000174d1) popup_navstr_preview_pane_ParamLimits

0x867d,	// (0x000174d1) popup_navstr_preview_pane

0x8691,	// (0x000174e5) scroll_navstr_pane_ParamLimits

0x8691,	// (0x000174e5) scroll_navstr_pane

0x9528,	// (0x0001837c) bg_popup_preview_window_pane_cp04

0xe662,	// (0x0001d4b6) popup_navstr_preview_pane_t1

0x86a5,	// (0x000174f9) scroll_navstr_pane_g1_ParamLimits

0x86a5,	// (0x000174f9) scroll_navstr_pane_g1

0x86b9,	// (0x0001750d) scroll_navstr_pane_t1_ParamLimits

0x86b9,	// (0x0001750d) scroll_navstr_pane_t1

0xe607,	// (0x0001d45b) bg_button_pane_cp014

0xe607,	// (0x0001d45b) bg_button_pane_cp030

0x7dbc,	// (0x00016c10) list_double_fisheye_pane_g4_ParamLimits

0x7dbc,	// (0x00016c10) list_double_fisheye_pane_g4

0x7dc8,	// (0x00016c1c) list_double_fisheye_pane_g5_ParamLimits

0x7dc8,	// (0x00016c1c) list_double_fisheye_pane_g5

0xd1f3,	// (0x0001c047) sp_fs_scroll_pane_cp03

0xe3d9,	// (0x0001d22d) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe3e5,	// (0x0001d239) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfce6,	// (0x0001eb3a) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe3f1,	// (0x0001d245) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe594,	// (0x0001d3e8) sp_fs_scroll_pane_cp02

0x9ea6,	// (0x00018cfa) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x9ea6,	// (0x00018cfa) popup_sp_fs_calendar_preview_list_single_pane

0x9528,	// (0x0001837c) main_cam6_pano_pane

0x9598,	// (0x000183ec) main_mup3_pane_ParamLimits

0x9528,	// (0x0001837c) main_phacti_pane

0x799b,	// (0x000167ef) bg_button_pane_cp11

0x79b5,	// (0x00016809) main_mobtv_info_pane_g2_ParamLimits

0x79b5,	// (0x00016809) main_mobtv_info_pane_g2

0x0001,

0xfc46,	// (0x0001ea9a) main_mobtv_info_pane_g_ParamLimits

0xfc46,	// (0x0001ea9a) main_mobtv_info_pane_g

0x7b92,	// (0x000169e6) sc_clock_pane_t5_ParamLimits

0x7b92,	// (0x000169e6) sc_clock_pane_t5

0x7c24,	// (0x00016a78) main_radioblah_pane_g1_ParamLimits

0xe1f0,	// (0x0001d044) main_radioblah_pane_t3_ParamLimits

0xe1f0,	// (0x0001d044) main_radioblah_pane_t3

0xe208,	// (0x0001d05c) main_radioblah_pane_t4_ParamLimits

0xe208,	// (0x0001d05c) main_radioblah_pane_t4

0x7c4c,	// (0x00016aa0) main_radioblah_text_pane_ParamLimits

0x7c4c,	// (0x00016aa0) main_radioblah_text_pane

0x7c5e,	// (0x00016ab2) main_radioblah_info_pane_g1_ParamLimits

0x7cf7,	// (0x00016b4b) main_radioblah_info_pane_t4_ParamLimits

0x7cf7,	// (0x00016b4b) main_radioblah_info_pane_t4

0x9598,	// (0x000183ec) main_sp_fs_calendar_pane

0x86cf,	// (0x00017523) main_phacti_pane_g1

0x86d7,	// (0x0001752b) phacti_note_pane_ParamLimits

0x86d7,	// (0x0001752b) phacti_note_pane

0xe679,	// (0x0001d4cd) phacti_term_pane_ParamLimits

0xe679,	// (0x0001d4cd) phacti_term_pane

0xe68e,	// (0x0001d4e2) phacti_note_pane_t1_ParamLimits

0xe68e,	// (0x0001d4e2) phacti_note_pane_t1

0xe6a5,	// (0x0001d4f9) phacti_term_pane_g1

0xe6ad,	// (0x0001d501) phacti_term_pane_t1_ParamLimits

0xe6ad,	// (0x0001d501) phacti_term_pane_t1

0xe6d7,	// (0x0001d52b) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe6df,	// (0x0001d533) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdb0,	// (0x0001ec04) popup_sp_fs_calendar_preview_list_single_pane_g

0xe6e7,	// (0x0001d53b) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe6e7,	// (0x0001d53b) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe6fd,	// (0x0001d551) aid_popup_sp_fs_bg_corner_pane

0xc2cf,	// (0x0001b123) popup_sp_fs_calendar_preview_bg_pane_g1

0x9528,	// (0x0001837c) popup_sp_fs_calendar_preview_bg_pane

0x11b9,	// (0x0001000d) popup_sp_fs_calendar_preview_list_pane

0xbdb2,	// (0x0001ac06) bg_main_sp_fs_cale_pane_ParamLimits

0xbdb2,	// (0x0001ac06) bg_main_sp_fs_cale_pane

0xe70e,	// (0x0001d562) listscroll_cale_mrui_pane_ParamLimits

0xe70e,	// (0x0001d562) listscroll_cale_mrui_pane

0xe723,	// (0x0001d577) listscroll_sp_fs_schedule_track_pane

0xe72c,	// (0x0001d580) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe72c,	// (0x0001d580) main_sp_fs_ctrlbar_pane_cp01

0xe73f,	// (0x0001d593) main_sp_fs_ribbon_pane

0xe747,	// (0x0001d59b) popup_sp_fs_cale_preview_window

0x874c,	// (0x000175a0) list_single_sp_fs_schedule_track_pane_ParamLimits

0x874c,	// (0x000175a0) list_single_sp_fs_schedule_track_pane

0x9598,	// (0x000183ec) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x9598,	// (0x000183ec) bg_sp_fs_highlight_list_pane_cp03

0x8761,	// (0x000175b5) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8761,	// (0x000175b5) list_single_sp_fs_schedule_track_pane_g1

0x876d,	// (0x000175c1) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x876d,	// (0x000175c1) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdb5,	// (0x0001ec09) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdb5,	// (0x0001ec09) list_single_sp_fs_schedule_track_pane_g

0x8779,	// (0x000175cd) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8779,	// (0x000175cd) list_single_sp_fs_schedule_track_pane_t1

0x8793,	// (0x000175e7) sp_fs_schedule_track_pane_ParamLimits

0x8793,	// (0x000175e7) sp_fs_schedule_track_pane

0xe759,	// (0x0001d5ad) sp_fs_schedule_track_pane_g1

0xe761,	// (0x0001d5b5) sp_fs_schedule_track_pane_g2

0xe769,	// (0x0001d5bd) sp_fs_schedule_track_pane_g3

0xe771,	// (0x0001d5c5) sp_fs_schedule_track_pane_g4

0xe779,	// (0x0001d5cd) sp_fs_schedule_track_pane_g5

0x0004,

0xfdba,	// (0x0001ec0e) sp_fs_schedule_track_pane_g

0xd145,	// (0x0001bf99) bg_sp_fs_schedule_viewer_highlight_g1

0xa1c8,	// (0x0001901c) bg_sp_fs_schedule_viewer_highlight_g2

0xd14d,	// (0x0001bfa1) bg_sp_fs_schedule_viewer_highlight_g3

0xd155,	// (0x0001bfa9) bg_sp_fs_schedule_viewer_highlight_g4

0xd3f6,	// (0x0001c24a) bg_sp_fs_schedule_viewer_highlight_g5

0xd165,	// (0x0001bfb9) bg_sp_fs_schedule_viewer_highlight_g6

0xd16d,	// (0x0001bfc1) bg_sp_fs_schedule_viewer_highlight_g7

0xd175,	// (0x0001bfc9) bg_sp_fs_schedule_viewer_highlight_g8

0xa1a8,	// (0x00018ffc) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdc5,	// (0x0001ec19) bg_sp_fs_schedule_viewer_highlight_g

0x9528,	// (0x0001837c) bg_main_sp_fs_ribbon_pane

0x87a4,	// (0x000175f8) main_sp_fs_ribbon_pane_g1

0xe781,	// (0x0001d5d5) main_sp_fs_ribbon_pane_t1

0x87ad,	// (0x00017601) main_sp_fs_ribbon_pane_t2

0xe790,	// (0x0001d5e4) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdd8,	// (0x0001ec2c) main_sp_fs_ribbon_pane_t

0xe79f,	// (0x0001d5f3) main_sp_fs_ribbon_scheduler_pane

0xe7a7,	// (0x0001d5fb) bg_main_sp_fs_ribbon_pane_g1

0xe7b0,	// (0x0001d604) bg_main_sp_fs_ribbon_pane_g2

0xe7b9,	// (0x0001d60d) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfddf,	// (0x0001ec33) bg_main_sp_fs_ribbon_pane_g

0xe7c1,	// (0x0001d615) main_sp_fs_ribbon_scheduler_pane_g1

0xe7ca,	// (0x0001d61e) main_sp_fs_ribbon_scheduler_pane_g2

0xe7d3,	// (0x0001d627) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfde6,	// (0x0001ec3a) main_sp_fs_ribbon_scheduler_pane_g

0xe7dc,	// (0x0001d630) list_cale_mrui_pane

0x87bc,	// (0x00017610) sp_fs_scroll_pane_cp07_ParamLimits

0x87bc,	// (0x00017610) sp_fs_scroll_pane_cp07

0x87d8,	// (0x0001762c) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x87d8,	// (0x0001762c) bg_sp_fs_schedule_viewer_highlight

0xe7e9,	// (0x0001d63d) list_single_sp_fs_schedule_track_pane_cp01

0xe7f1,	// (0x0001d645) list_sp_fs_schedule_track_pane

0xe7f9,	// (0x0001d64d) sp_fs_scroll_pane_cp06_ParamLimits

0xe7f9,	// (0x0001d64d) sp_fs_scroll_pane_cp06

0xc2cf,	// (0x0001b123) bgmain_sp_fs_calendar_pane_g1

0x87e8,	// (0x0001763c) list_single_cale_mrui_pane_ParamLimits

0x87e8,	// (0x0001763c) list_single_cale_mrui_pane

0xe80b,	// (0x0001d65f) list_single_cale_mrui_row_pane_ParamLimits

0xe80b,	// (0x0001d65f) list_single_cale_mrui_row_pane

0xe818,	// (0x0001d66c) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe818,	// (0x0001d66c) list_single_cale_mrui_row_pane_g1

0xe85d,	// (0x0001d6b1) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe85d,	// (0x0001d6b1) list_single_cale_mrui_row_pane_t1

0x880a,	// (0x0001765e) list_single_cale_mrui_row_pane_t2_ParamLimits

0x880a,	// (0x0001765e) list_single_cale_mrui_row_pane_t2

0xe86f,	// (0x0001d6c3) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe86f,	// (0x0001d6c3) list_single_cale_mrui_row_pane_t3

0xe89e,	// (0x0001d6f2) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe89e,	// (0x0001d6f2) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf4,	// (0x0001ec48) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf4,	// (0x0001ec48) list_single_cale_mrui_row_pane_t

0x8872,	// (0x000176c6) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x8872,	// (0x000176c6) list_single_cmail_header_editor_pane_bg_cp01

0x8898,	// (0x000176ec) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x8898,	// (0x000176ec) list_single_cmail_header_editor_pane_bg_cp02

0x88b8,	// (0x0001770c) main_radioblah_text_pane_t1_ParamLimits

0x88b8,	// (0x0001770c) main_radioblah_text_pane_t1

0xe8cd,	// (0x0001d721) cam6_indi_pane_cp01

0xe8d5,	// (0x0001d729) cam6_mode_pane_cp01

0xe8dd,	// (0x0001d731) cam6_pano_pane

0xe8e6,	// (0x0001d73a) cam6_zoom_pane_cp01

0xe8ee,	// (0x0001d742) cam6_pano_image_pane

0xe8f9,	// (0x0001d74d) cam6_pano_pane_g1

0xdf5d,	// (0x0001cdb1) cam6_pano_pane_g2

0xe902,	// (0x0001d756) cam6_pano_pane_g3

0xe90b,	// (0x0001d75f) cam6_pano_pane_g4

0xc8e5,	// (0x0001b739) cam6_pano_pane_g5

0xe914,	// (0x0001d768) cam6_pano_pane_g6

0xe91e,	// (0x0001d772) cam6_pano_pane_g7

0xe926,	// (0x0001d77a) cam6_pano_pane_g8

0xe92f,	// (0x0001d783) cam6_pano_pane_g9

0x0008,

0xfdfd,	// (0x0001ec51) cam6_pano_pane_g

0x9528,	// (0x0001837c) main_browser_tag_pane

0xe65a,	// (0x0001d4ae) grid_navstr_albumart_pane

0xe93a,	// (0x0001d78e) cell_navstr_albumart_pane_ParamLimits

0xe93a,	// (0x0001d78e) cell_navstr_albumart_pane

0xaa87,	// (0x000198db) cell_navstr_albumart_pane_g1

0xbbc3,	// (0x0001aa17) cell_navstr_albumart_pane_g2

0xbbd3,	// (0x0001aa27) cell_navstr_albumart_pane_g3

0xbbcb,	// (0x0001aa1f) cell_navstr_albumart_pane_g4

0x0003,

0xfe10,	// (0x0001ec64) cell_navstr_albumart_pane_g

0x88d3,	// (0x00017727) bt_list_pane_ParamLimits

0x88d3,	// (0x00017727) bt_list_pane

0xe95c,	// (0x0001d7b0) bt_list_pane_t1

0xe96b,	// (0x0001d7bf) bt_list_pane_t2

0x0001,

0xfe19,	// (0x0001ec6d) bt_list_pane_t

0x9528,	// (0x0001837c) main_cale_prevew_pane

0x88e8,	// (0x0001773c) popup_cale_preview_window_ParamLimits

0x88e8,	// (0x0001773c) popup_cale_preview_window

0x9598,	// (0x000183ec) bg_popup_preview_window_pane_cp05_ParamLimits

0x9598,	// (0x000183ec) bg_popup_preview_window_pane_cp05

0xe98c,	// (0x0001d7e0) list_cale_preview_pane_ParamLimits

0xe98c,	// (0x0001d7e0) list_cale_preview_pane

0xe998,	// (0x0001d7ec) list_double_cale_preview_pane_ParamLimits

0xe998,	// (0x0001d7ec) list_double_cale_preview_pane

0xe9aa,	// (0x0001d7fe) list_single_cale_preview_pane_ParamLimits

0xe9aa,	// (0x0001d7fe) list_single_cale_preview_pane

0xe9be,	// (0x0001d812) list_single_cale_preview_pane_g1

0xe9c6,	// (0x0001d81a) list_single_cale_preview_pane_t1_ParamLimits

0xe9c6,	// (0x0001d81a) list_single_cale_preview_pane_t1

0xe9db,	// (0x0001d82f) list_double_cale_preview_pane_g1

0xe9e3,	// (0x0001d837) list_double_cale_preview_pane_t1_ParamLimits

0xe9e3,	// (0x0001d837) list_double_cale_preview_pane_t1

0xe9f8,	// (0x0001d84c) list_double_cale_preview_pane_t2_ParamLimits

0xe9f8,	// (0x0001d84c) list_double_cale_preview_pane_t2

0x0001,

0xfe1e,	// (0x0001ec72) list_double_cale_preview_pane_t_ParamLimits

0xfe1e,	// (0x0001ec72) list_double_cale_preview_pane_t

0x9528,	// (0x0001837c) main_ezdial_pane

0x9598,	// (0x000183ec) main_sp_fs_email_pane_ParamLimits

0x7f62,	// (0x00016db6) cmail_ddmenu_btn01_pane_ParamLimits

0x7f62,	// (0x00016db6) cmail_ddmenu_btn01_pane

0x7f75,	// (0x00016dc9) cmail_ddmenu_btn02_pane_ParamLimits

0x7f75,	// (0x00016dc9) cmail_ddmenu_btn02_pane

0x7f98,	// (0x00016dec) cmail_ddmenu_btn03_pane_ParamLimits

0x7f98,	// (0x00016dec) cmail_ddmenu_btn03_pane

0x7fbe,	// (0x00016e12) main_sp_fs_ctrlbar_pane_ParamLimits

0x7fe2,	// (0x00016e36) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x855e,	// (0x000173b2) list_cmail_body_pane_ParamLimits

0x85b2,	// (0x00017406) bg_button_pane_cp12

0xe5b6,	// (0x0001d40a) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe5b6,	// (0x0001d40a) list_single_cmail_header_detail_pane_g3

0xe5c3,	// (0x0001d417) list_single_cmail_header_detail_pane_t2_ParamLimits

0xe5c3,	// (0x0001d417) list_single_cmail_header_detail_pane_t2

0x0001,

0xfda1,	// (0x0001ebf5) list_single_cmail_header_detail_pane_t_ParamLimits

0xfda1,	// (0x0001ebf5) list_single_cmail_header_detail_pane_t

0xe6c2,	// (0x0001d516) phacti_term_pane_t2_ParamLimits

0xe6c2,	// (0x0001d516) phacti_term_pane_t2

0x0001,

0xfdab,	// (0x0001ebff) phacti_term_pane_t_ParamLimits

0xfdab,	// (0x0001ebff) phacti_term_pane_t

0xea10,	// (0x0001d864) aid_size_list_single_double

0x8901,	// (0x00017755) popup_ezdial_listscroll_window

0x891c,	// (0x00017770) popup_number_entry_window_cp01

0xa906,	// (0x0001975a) bg_popup_call_pane_cp09

0xea1c,	// (0x0001d870) ezdial_list_pane

0xea24,	// (0x0001d878) scroll_pane_cp23

0xbdb2,	// (0x0001ac06) bg_button_pane_cp028_ParamLimits

0xbdb2,	// (0x0001ac06) bg_button_pane_cp028

0x892a,	// (0x0001777e) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x892a,	// (0x0001777e) cmail_ddmenu_btn01_pane_g1

0x8936,	// (0x0001778a) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x8936,	// (0x0001778a) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe23,	// (0x0001ec77) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe23,	// (0x0001ec77) cmail_ddmenu_btn01_pane_g

0xea2c,	// (0x0001d880) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xea2c,	// (0x0001d880) cmail_ddmenu_btn01_pane_t1

0xbdb2,	// (0x0001ac06) bg_button_pane_cp029_ParamLimits

0xbdb2,	// (0x0001ac06) bg_button_pane_cp029

0x894c,	// (0x000177a0) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x894c,	// (0x000177a0) cmail_ddmenu_btn02_pane_g1

0x8964,	// (0x000177b8) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x8964,	// (0x000177b8) cmail_ddmenu_btn02_pane_t1

0x9598,	// (0x000183ec) bg_button_pane_cp031_ParamLimits

0x9598,	// (0x000183ec) bg_button_pane_cp031

0x894c,	// (0x000177a0) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x894c,	// (0x000177a0) cmail_ddmenu_btn03_pane_g1

0x8964,	// (0x000177b8) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x8964,	// (0x000177b8) cmail_ddmenu_btn03_pane_t1

0x581d,	// (0x00014671) cell_dialer2_keypad_pane_t1_ParamLimits

0x5837,	// (0x0001468b) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x5837,	// (0x0001468b) cell_dialer2_keypad_pane_t1_copy1

0x7802,	// (0x00016656) ncimui_group_button_pane

0x9598,	// (0x000183ec) main_sp_fs_calendar_pane_ParamLimits

0x8572,	// (0x000173c6) list_single_cmail_header_caption_pane_ParamLimits

0xe705,	// (0x0001d559) aid_recal_txt_sm_pane

0x9528,	// (0x0001837c) mian_recal_day_pane

0xe747,	// (0x0001d59b) popup_sp_fs_cale_preview_window_ParamLimits

0xea42,	// (0x0001d896) list_recal_day_pane

0xea84,	// (0x0001d8d8) list_single_recal_day_pane_ParamLimits

0xea84,	// (0x0001d8d8) list_single_recal_day_pane

0xea96,	// (0x0001d8ea) list_single_recal_day_pane_g1_ParamLimits

0xea96,	// (0x0001d8ea) list_single_recal_day_pane_g1

0xeaa2,	// (0x0001d8f6) list_single_recal_day_pane_g2_ParamLimits

0xeaa2,	// (0x0001d8f6) list_single_recal_day_pane_g2

0xeab2,	// (0x0001d906) list_single_recal_day_pane_g3_ParamLimits

0xeab2,	// (0x0001d906) list_single_recal_day_pane_g3

0x8988,	// (0x000177dc) list_single_recal_day_pane_g4_ParamLimits

0x8988,	// (0x000177dc) list_single_recal_day_pane_g4

0xeabe,	// (0x0001d912) list_single_recal_day_pane_g5_ParamLimits

0xeabe,	// (0x0001d912) list_single_recal_day_pane_g5

0xeace,	// (0x0001d922) list_single_recal_day_pane_g6_ParamLimits

0xeace,	// (0x0001d922) list_single_recal_day_pane_g6

0x0004,

0xfe32,	// (0x0001ec86) list_single_recal_day_pane_g_ParamLimits

0xfe32,	// (0x0001ec86) list_single_recal_day_pane_g

0xeae2,	// (0x0001d936) list_single_recal_day_pane_t1

0xeaf4,	// (0x0001d948) list_single_recal_day_pane_t2

0x0001,

0xfe3d,	// (0x0001ec91) list_single_recal_day_pane_t

0x89a8,	// (0x000177fc) ncimui_query_button_pane_ParamLimits

0x89a8,	// (0x000177fc) ncimui_query_button_pane

0x89b8,	// (0x0001780c) ncimui_query_button_pane_t1_ParamLimits

0x89b8,	// (0x0001780c) ncimui_query_button_pane_t1

0xeb06,	// (0x0001d95a) ncimui_query_button_pane_t2_ParamLimits

0xeb06,	// (0x0001d95a) ncimui_query_button_pane_t2

0x0001,

0xfe42,	// (0x0001ec96) ncimui_query_button_pane_t_ParamLimits

0xfe42,	// (0x0001ec96) ncimui_query_button_pane_t

0x89cb,	// (0x0001781f) query_button_pane_ParamLimits

0x89cb,	// (0x0001781f) query_button_pane

0x9528,	// (0x0001837c) bg_button_pane_cp0028

0xeb19,	// (0x0001d96d) query_button_pane_t1

0x38c0,	// (0x00012714) main_tport_pane_ParamLimits

0x842a,	// (0x0001727e) bg_popup_window_pane_cp01_ParamLimits

0x842a,	// (0x0001727e) bg_popup_window_pane_cp01

0x8445,	// (0x00017299) heading_pane_cp08_ParamLimits

0x8445,	// (0x00017299) heading_pane_cp08

0x8458,	// (0x000172ac) heading_pane_cp07_ParamLimits

0x8458,	// (0x000172ac) heading_pane_cp07

0x84ff,	// (0x00017353) cell_tport_appsw_pane_g2

0x0002,

0xfd8e,	// (0x0001ebe2) cell_tport_appsw_pane_g

0x2ea0,	// (0x00011cf4) input_candi_list_open_g1

0xa3ad,	// (0x00019201) list_cale_time_pane_g6_ParamLimits

0xa3ad,	// (0x00019201) list_cale_time_pane_g6

0x4679,	// (0x000134cd) aid_size_touch_calib_1_ParamLimits

0x4679,	// (0x000134cd) aid_size_touch_calib_1

0x468b,	// (0x000134df) aid_size_touch_calib_2_ParamLimits

0x468b,	// (0x000134df) aid_size_touch_calib_2

0x46a3,	// (0x000134f7) aid_size_touch_calib_3_ParamLimits

0x46a3,	// (0x000134f7) aid_size_touch_calib_3

0x46c1,	// (0x00013515) aid_size_touch_calib_4_ParamLimits

0x46c1,	// (0x00013515) aid_size_touch_calib_4

0x46d9,	// (0x0001352d) main_touch_calib_button_group_pane_ParamLimits

0x46d9,	// (0x0001352d) main_touch_calib_button_group_pane

0x46f1,	// (0x00013545) main_touch_calib_pane_g1_ParamLimits

0x4703,	// (0x00013557) main_touch_calib_pane_g2_ParamLimits

0x4715,	// (0x00013569) main_touch_calib_pane_g3_ParamLimits

0x4727,	// (0x0001357b) main_touch_calib_pane_g4_ParamLimits

0xf75c,	// (0x0001e5b0) main_touch_calib_pane_g_ParamLimits

0x4739,	// (0x0001358d) main_touch_calib_pane_t1_ParamLimits

0x4753,	// (0x000135a7) main_touch_calib_pane_t2_ParamLimits

0x476d,	// (0x000135c1) main_touch_calib_pane_t3_ParamLimits

0x4781,	// (0x000135d5) main_touch_calib_pane_t4_ParamLimits

0x4795,	// (0x000135e9) main_touch_calib_pane_t5_ParamLimits

0xf765,	// (0x0001e5b9) main_touch_calib_pane_t_ParamLimits

0xc6a3,	// (0x0001b4f7) list_single_fp_cale_pane_g3_ParamLimits

0xc6a3,	// (0x0001b4f7) list_single_fp_cale_pane_g3

0x9598,	// (0x000183ec) bg_button_pane_cp012_ParamLimits

0x9598,	// (0x000183ec) bg_vkb2_func_pane_cp03_ParamLimits

0x6881,	// (0x000156d5) cell_vitu2_function_top_pane_g1_ParamLimits

0x9598,	// (0x000183ec) bg_vkb2_func_pane_cp04_ParamLimits

0x7790,	// (0x000165e4) main_ncimui_button_group_pane_ParamLimits

0x7790,	// (0x000165e4) main_ncimui_button_group_pane

0x77f0,	// (0x00016644) main_ncimui_pane_t3_ParamLimits

0x77f0,	// (0x00016644) main_ncimui_pane_t3

0xe670,	// (0x0001d4c4) phacti_button_group_pane

0xea10,	// (0x0001d864) aid_size_list_single_double_ParamLimits

0x8901,	// (0x00017755) popup_ezdial_listscroll_window_ParamLimits

0x891c,	// (0x00017770) popup_number_entry_window_cp01_ParamLimits

0x89de,	// (0x00017832) phacti_button_pane_ParamLimits

0x89de,	// (0x00017832) phacti_button_pane

0x9528,	// (0x0001837c) bg_button_pane_cp14

0xeb27,	// (0x0001d97b) phacti_button_pane_t1

0x89ef,	// (0x00017843) main_touch_calib_button_pane_ParamLimits

0x89ef,	// (0x00017843) main_touch_calib_button_pane

0x9d1a,	// (0x00018b6e) bg_button_pane_cp18_ParamLimits

0x9d1a,	// (0x00018b6e) bg_button_pane_cp18

0xeb35,	// (0x0001d989) main_touch_calib_button_pane_t1_ParamLimits

0xeb35,	// (0x0001d989) main_touch_calib_button_pane_t1

0xeb4b,	// (0x0001d99f) main_touch_calib_button_pane_t2_ParamLimits

0xeb4b,	// (0x0001d99f) main_touch_calib_button_pane_t2

0x0001,

0xfe47,	// (0x0001ec9b) main_touch_calib_button_pane_t_ParamLimits

0xfe47,	// (0x0001ec9b) main_touch_calib_button_pane_t

0x9528,	// (0x0001837c) cell_ncimui_button_pane

0x9528,	// (0x0001837c) bg_button_pane_cp032

0xeb69,	// (0x0001d9bd) cell_ncimui_button_pane_t1

0xce93,	// (0x0001bce7) image3_infobar_pane_ParamLimits

0xce93,	// (0x0001bce7) image3_infobar_pane

0x7bbe,	// (0x00016a12) fs_bigclock_status_pane_ParamLimits

0x7bbe,	// (0x00016a12) fs_bigclock_status_pane

0x7bcb,	// (0x00016a1f) main_fs_bigclock_clock_pane_ParamLimits

0x7bcb,	// (0x00016a1f) main_fs_bigclock_clock_pane

0x7be7,	// (0x00016a3b) main_fs_bigclock_indi_pane_ParamLimits

0x7be7,	// (0x00016a3b) main_fs_bigclock_indi_pane

0x7c00,	// (0x00016a54) main_fs_bigclock_swipe_pane_ParamLimits

0x7c00,	// (0x00016a54) main_fs_bigclock_swipe_pane

0x9528,	// (0x0001837c) main_fs_clock_dumped_data

0xe06a,	// (0x0001cebe) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe06a,	// (0x0001cebe) list_single_fs_bigclock_indicator_pane_g1

0xe085,	// (0x0001ced9) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe085,	// (0x0001ced9) list_single_fs_bigclock_indicator_pane_g2

0xe09f,	// (0x0001cef3) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe09f,	// (0x0001cef3) list_single_fs_bigclock_indicator_pane_g3

0xe0b9,	// (0x0001cf0d) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe0b9,	// (0x0001cf0d) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc7a,	// (0x0001eace) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc7a,	// (0x0001eace) list_single_fs_bigclock_indicator_pane_g

0xe0e2,	// (0x0001cf36) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe0e2,	// (0x0001cf36) list_single_fs_bigclock_indicator_pane_t1

0xe10a,	// (0x0001cf5e) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe10a,	// (0x0001cf5e) list_single_fs_bigclock_indicator_pane_t2

0xe132,	// (0x0001cf86) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe132,	// (0x0001cf86) list_single_fs_bigclock_indicator_pane_t3

0xe15a,	// (0x0001cfae) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe15a,	// (0x0001cfae) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc85,	// (0x0001ead9) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc85,	// (0x0001ead9) list_single_fs_bigclock_indicator_pane_t

0xeb77,	// (0x0001d9cb) image3_infobar_fav_pane_ParamLimits

0xeb77,	// (0x0001d9cb) image3_infobar_fav_pane

0xeb87,	// (0x0001d9db) image3_infobar_loc_pane_ParamLimits

0xeb87,	// (0x0001d9db) image3_infobar_loc_pane

0xeb9b,	// (0x0001d9ef) image3_infobar_time_pane_ParamLimits

0xeb9b,	// (0x0001d9ef) image3_infobar_time_pane

0xc2cf,	// (0x0001b123) image3_infobar_time_pane_g1

0xebab,	// (0x0001d9ff) image3_infobar_time_pane_t1

0xc2cf,	// (0x0001b123) image3_infobar_loc_pane_g1

0xebb9,	// (0x0001da0d) image3_infobar_loc_pane_g2

0x0001,

0xfe4c,	// (0x0001eca0) image3_infobar_loc_pane_g

0xebc1,	// (0x0001da15) image3_infobar_loc_pane_t1

0xc2cf,	// (0x0001b123) image3_infobar_fav_pane_g1

0xebcf,	// (0x0001da23) image3_infobar_fav_pane_g2

0x0001,

0xfe51,	// (0x0001eca5) image3_infobar_fav_pane_g

0xebd7,	// (0x0001da2b) fs_bigclock_status_battery_pane

0xebe0,	// (0x0001da34) fs_bigclock_status_signal_pane

0xebe9,	// (0x0001da3d) fs_bigclock_status_title_pane

0xebf2,	// (0x0001da46) fs_bigclock_status_signal_pane_g1

0xebfb,	// (0x0001da4f) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe56,	// (0x0001ecaa) fs_bigclock_status_signal_pane_g

0xec03,	// (0x0001da57) fs_bigclock_status_battery_pane_g1

0xec0c,	// (0x0001da60) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe5b,	// (0x0001ecaf) fs_bigclock_status_battery_pane_g

0xec14,	// (0x0001da68) fs_bigclock_status_title_pane_t1

0xc2cf,	// (0x0001b123) main_fs_bigclock_clock_pane_g1

0x8a04,	// (0x00017858) main_fs_bigclock_clock_pane_g2

0x8a04,	// (0x00017858) main_fs_bigclock_clock_pane_g3

0x8a04,	// (0x00017858) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe60,	// (0x0001ecb4) main_fs_bigclock_clock_pane_g

0x8a0c,	// (0x00017860) main_fs_bigclock_clock_pane_t1

0x8a1a,	// (0x0001786e) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe69,	// (0x0001ecbd) main_fs_bigclock_clock_pane_t

0xec22,	// (0x0001da76) list_single_fs_bigclock_indicator_pane_ParamLimits

0xec22,	// (0x0001da76) list_single_fs_bigclock_indicator_pane

0x8a29,	// (0x0001787d) list_single_fs_bigclock_pane_ParamLimits

0x8a29,	// (0x0001787d) list_single_fs_bigclock_pane

0xec3c,	// (0x0001da90) main_fs_bigclock_indicator_pane_t1

0xec4b,	// (0x0001da9f) list_single_fs_bigclock_pane_g1

0xec53,	// (0x0001daa7) list_single_fs_bigclock_pane_t1

0xc2cf,	// (0x0001b123) main_fs_bigclock_swipe_pane_g1

0xec96,	// (0x0001daea) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe7a,	// (0x0001ecce) main_fs_bigclock_swipe_pane_g

0xec9e,	// (0x0001daf2) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xec9e,	// (0x0001daf2) main_fs_bigclock_swipe_pane_t1

0x26c5,	// (0x00011519) call_type_pane_ParamLimits

0x9528,	// (0x0001837c) main_btmg_pane

0xe844,	// (0x0001d698) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe844,	// (0x0001d698) list_single_cale_mrui_row_pane_g2

0x0002,

0xfded,	// (0x0001ec41) list_single_cale_mrui_row_pane_g_ParamLimits

0xfded,	// (0x0001ec41) list_single_cale_mrui_row_pane_g

0xea6b,	// (0x0001d8bf) list_recal_vselct_arw_lo_pane

0xea73,	// (0x0001d8c7) list_recal_vselct_arw_up_pane

0xea7b,	// (0x0001d8cf) list_recal_vselct_pane

0x8a8c,	// (0x000178e0) btmg_button_pane

0x8a96,	// (0x000178ea) main_btmg_pane_g1

0x9528,	// (0x0001837c) bg_button_pane_cp044

0xecbb,	// (0x0001db0f) btmg_button_pane_t1

0xbd9e,	// (0x0001abf2) aid_listscroll_gen

0x9598,	// (0x000183ec) main_cntbar_detail_pane

0xe58c,	// (0x0001d3e0) list_cmail_folder_pane

0xd1f3,	// (0x0001c047) sp_fs_scroll_pane_cp03_ParamLimits

0x8572,	// (0x000173c6) list_single_fs_dyc_pane_cp01_ParamLimits

0x8572,	// (0x000173c6) list_single_fs_dyc_pane_cp01

0xecc9,	// (0x0001db1d) aid_size_cmail_indent

0xecd2,	// (0x0001db26) list_single_dyc_row_pane_cp01

0x8acc,	// (0x00017920) cntbar_detail_list_pane_ParamLimits

0x8acc,	// (0x00017920) cntbar_detail_list_pane

0x8b18,	// (0x0001796c) main_cntbar_detail_cont_pane_ParamLimits

0x8b18,	// (0x0001796c) main_cntbar_detail_cont_pane

0xd1f3,	// (0x0001c047) scroll_pane_cp032_ParamLimits

0xd1f3,	// (0x0001c047) scroll_pane_cp032

0x8b2c,	// (0x00017980) cntbar_detail_list_event_pane_ParamLimits

0x8b2c,	// (0x00017980) cntbar_detail_list_event_pane

0x8adc,	// (0x00017930) cntbar_detail_list_shct_pane

0xa216,	// (0x0001906a) aid_list_gen

0xecdb,	// (0x0001db2f) aid_scroll

0xece4,	// (0x0001db38) aid_size_touch_scroll_bar

0x6f2c,	// (0x00015d80) aid_list_double

0xeced,	// (0x0001db41) aid_list_single

0x6f2c,	// (0x00015d80) aid_list_single_lg

0xecf6,	// (0x0001db4a) aid_list_z_g_a_sm

0xecfe,	// (0x0001db52) aid_list_z_g_d

0xed06,	// (0x0001db5a) aid_txt_z_prm

0x8b3c,	// (0x00017990) aid_txt_z_prm_cp01

0x8b4a,	// (0x0001799e) aid_txt_z_sec

0x8b58,	// (0x000179ac) main_cntbar_detail_cont_pane_g1_ParamLimits

0x8b58,	// (0x000179ac) main_cntbar_detail_cont_pane_g1

0x8b6c,	// (0x000179c0) main_cntbar_detail_cont_pane_g2_ParamLimits

0x8b6c,	// (0x000179c0) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe7f,	// (0x0001ecd3) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe7f,	// (0x0001ecd3) main_cntbar_detail_cont_pane_g

0xed14,	// (0x0001db68) main_cntbar_detail_cont_pane_t1

0xed22,	// (0x0001db76) main_cntbar_detail_cont_pane_t2

0xed30,	// (0x0001db84) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe84,	// (0x0001ecd8) main_cntbar_detail_cont_pane_t

0x8b7c,	// (0x000179d0) cell_cntbar_detail_list_shct_pane_ParamLimits

0x8b7c,	// (0x000179d0) cell_cntbar_detail_list_shct_pane

0xed3e,	// (0x0001db92) cntbar_detail_list_shct_pane_g1

0xed47,	// (0x0001db9b) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe8b,	// (0x0001ecdf) cntbar_detail_list_shct_pane_g

0x8b90,	// (0x000179e4) cntbar_detail_list_event_pane_g1_ParamLimits

0x8b90,	// (0x000179e4) cntbar_detail_list_event_pane_g1

0x8b9c,	// (0x000179f0) cntbar_detail_list_event_pane_g2_ParamLimits

0x8b9c,	// (0x000179f0) cntbar_detail_list_event_pane_g2

0x0005,

0xfe90,	// (0x0001ece4) cntbar_detail_list_event_pane_g_ParamLimits

0xfe90,	// (0x0001ece4) cntbar_detail_list_event_pane_g

0x8c08,	// (0x00017a5c) cntbar_detail_list_event_pane_t1_ParamLimits

0x8c08,	// (0x00017a5c) cntbar_detail_list_event_pane_t1

0x8c1d,	// (0x00017a71) cntbar_detail_list_event_pane_t2_ParamLimits

0x8c1d,	// (0x00017a71) cntbar_detail_list_event_pane_t2

0x0002,

0xfe9d,	// (0x0001ecf1) cntbar_detail_list_event_pane_t_ParamLimits

0xfe9d,	// (0x0001ecf1) cntbar_detail_list_event_pane_t

0xc2cf,	// (0x0001b123) cell_cntbar_detail_list_shct_pane_g1

0x2a1a,	// (0x0001186e) navi_pane_mv_g3

0x9598,	// (0x000183ec) main_cntbar_detail_pane_ParamLimits

0x9528,	// (0x0001837c) main_notif_wgt_pane

0xcc25,	// (0x0001ba79) aid_tch_main_mp4_pane_g4

0xce27,	// (0x0001bc7b) popup_slider_window_cp02

0xea61,	// (0x0001d8b5) list_recal_day_event_pane

0x8aa0,	// (0x000178f4) cntbar_detail_btn_pane_ParamLimits

0x8aa0,	// (0x000178f4) cntbar_detail_btn_pane

0x8ab6,	// (0x0001790a) cntbar_detail_btn_pane_cp01_ParamLimits

0x8ab6,	// (0x0001790a) cntbar_detail_btn_pane_cp01

0x8adc,	// (0x00017930) cntbar_detail_list_shct_pane_ParamLimits

0x8aec,	// (0x00017940) cntbar_detail_pane_g1_ParamLimits

0x8aec,	// (0x00017940) cntbar_detail_pane_g1

0x8afc,	// (0x00017950) cntbar_detail_pane_t1_ParamLimits

0x8afc,	// (0x00017950) cntbar_detail_pane_t1

0x8ba8,	// (0x000179fc) cntbar_detail_list_event_pane_g3_ParamLimits

0x8ba8,	// (0x000179fc) cntbar_detail_list_event_pane_g3

0x8bc0,	// (0x00017a14) cntbar_detail_list_event_pane_g4_ParamLimits

0x8bc0,	// (0x00017a14) cntbar_detail_list_event_pane_g4

0x8bd8,	// (0x00017a2c) cntbar_detail_list_event_pane_g5_ParamLimits

0x8bd8,	// (0x00017a2c) cntbar_detail_list_event_pane_g5

0x8bf0,	// (0x00017a44) cntbar_detail_list_event_pane_g6_ParamLimits

0x8bf0,	// (0x00017a44) cntbar_detail_list_event_pane_g6

0x8c32,	// (0x00017a86) cntbar_detail_list_event_pane_t3_ParamLimits

0x8c32,	// (0x00017a86) cntbar_detail_list_event_pane_t3

0x8c44,	// (0x00017a98) popup_notif_wgt_window_ParamLimits

0x8c44,	// (0x00017a98) popup_notif_wgt_window

0x8c5d,	// (0x00017ab1) popup_submenu_window_cp01_ParamLimits

0x8c5d,	// (0x00017ab1) popup_submenu_window_cp01

0xa906,	// (0x0001975a) bg_popup_window_pane_cp10

0xed50,	// (0x0001dba4) listscroll_notif_wgt_pane

0xed61,	// (0x0001dbb5) list_notif_wgt_window

0xed6a,	// (0x0001dbbe) scroll_pane_cp033

0x8c6f,	// (0x00017ac3) list_notif_wgt_row_pane_ParamLimits

0x8c6f,	// (0x00017ac3) list_notif_wgt_row_pane

0xed73,	// (0x0001dbc7) aid_size_list_notif_wgt_del

0xed80,	// (0x0001dbd4) list_notif_wgt_row_pane_g1

0xed8c,	// (0x0001dbe0) list_notif_wgt_row_pane_g2

0xed98,	// (0x0001dbec) list_notif_wgt_row_pane_g3

0x0002,

0xfea4,	// (0x0001ecf8) list_notif_wgt_row_pane_g

0xeda5,	// (0x0001dbf9) list_notif_wgt_row_pane_t1

0xedba,	// (0x0001dc0e) list_notif_wgt_row_pane_t2

0xedcc,	// (0x0001dc20) list_notif_wgt_row_pane_t3

0x0002,

0xfeab,	// (0x0001ecff) list_notif_wgt_row_pane_t

0xd41e,	// (0x0001c272) list_recal_day_event_pane_g1

0xedde,	// (0x0001dc32) list_recal_day_event_pane_t1

0x9528,	// (0x0001837c) bg_button_pane_cp045

0xeded,	// (0x0001dc41) cntbar_detail_btn_pane_t1

0xbdb2,	// (0x0001ac06) main_callh_pane_ParamLimits

0xbdb2,	// (0x0001ac06) main_callh_pane

0x9528,	// (0x0001837c) main_coverflow0_pane

0x9528,	// (0x0001837c) main_wgtman_pane

0x7c0e,	// (0x00016a62) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x7c0e,	// (0x00016a62) main_fs_bigclock_unlock_btn_pane

0x84f7,	// (0x0001734b) bg_button_pane_cp16

0x8507,	// (0x0001735b) cell_tport_appsw_pane_g3

0x8c7f,	// (0x00017ad3) cf0_flow_pane_ParamLimits

0x8c7f,	// (0x00017ad3) cf0_flow_pane

0xedfb,	// (0x0001dc4f) listscroll_cf0_pane

0xee06,	// (0x0001dc5a) main_cf0_pane_g1

0x8c94,	// (0x00017ae8) main_cf0_pane_t1_ParamLimits

0x8c94,	// (0x00017ae8) main_cf0_pane_t1

0x8cab,	// (0x00017aff) main_cf0_pane_t2_ParamLimits

0x8cab,	// (0x00017aff) main_cf0_pane_t2

0x0001,

0xfeb7,	// (0x0001ed0b) main_cf0_pane_t_ParamLimits

0xfeb7,	// (0x0001ed0b) main_cf0_pane_t

0xee18,	// (0x0001dc6c) scroll_pane_cp11

0x8cc2,	// (0x00017b16) cf0_flow_pane_g1

0x8cca,	// (0x00017b1e) cf0_flow_pane_g2

0x0001,

0xfebc,	// (0x0001ed10) cf0_flow_pane_g

0x8cd2,	// (0x00017b26) cf0_flow_pane_t1

0x9528,	// (0x0001837c) main_call6_pane

0x9528,	// (0x0001837c) main_calllock_pane

0x8ce0,	// (0x00017b34) call6_btn_grp_pane_ParamLimits

0x8ce0,	// (0x00017b34) call6_btn_grp_pane

0x8cfa,	// (0x00017b4e) call6_pane_g1_ParamLimits

0x8cfa,	// (0x00017b4e) call6_pane_g1

0x8d0f,	// (0x00017b63) popup_call6_1st_window_ParamLimits

0x8d0f,	// (0x00017b63) popup_call6_1st_window

0x8d20,	// (0x00017b74) popup_call6_2nd_window_ParamLimits

0x8d20,	// (0x00017b74) popup_call6_2nd_window

0x8d31,	// (0x00017b85) cell_call6_btn_pane_ParamLimits

0x8d31,	// (0x00017b85) cell_call6_btn_pane

0xa906,	// (0x0001975a) bg_popup_call2_in_pane_cp03

0xee23,	// (0x0001dc77) popup_call6_1st_window_g1

0xee2b,	// (0x0001dc7f) popup_call6_1st_window_g2

0xee33,	// (0x0001dc87) popup_call6_1st_window_g3

0x0002,

0xfec1,	// (0x0001ed15) popup_call6_1st_window_g

0xee3b,	// (0x0001dc8f) popup_call6_1st_window_t1

0xee4a,	// (0x0001dc9e) popup_call6_1st_window_t2

0xee5a,	// (0x0001dcae) popup_call6_1st_window_t3

0x0002,

0xfec8,	// (0x0001ed1c) popup_call6_1st_window_t

0xa906,	// (0x0001975a) bg_popup_call2_in_pane_cp04

0xee23,	// (0x0001dc77) popup_call6_2nd_window_g1

0xee2b,	// (0x0001dc7f) popup_call6_2nd_window_g2

0xee33,	// (0x0001dc87) popup_call6_2nd_window_g3

0x0002,

0xfec1,	// (0x0001ed15) popup_call6_2nd_window_g

0xee3b,	// (0x0001dc8f) popup_call6_2nd_window_t1

0x9528,	// (0x0001837c) bg_button_pane_cp15

0xee6a,	// (0x0001dcbe) cell_call6_btn_pane_g1

0xee73,	// (0x0001dcc7) cell_call6_btn_pane_t1

0x8d45,	// (0x00017b99) listscroll_wgtman_pane_ParamLimits

0x8d45,	// (0x00017b99) listscroll_wgtman_pane

0x8d68,	// (0x00017bbc) wgtman_btn_pane_ParamLimits

0x8d68,	// (0x00017bbc) wgtman_btn_pane

0xa7bd,	// (0x00019611) aid_scroll_copy1

0xee82,	// (0x0001dcd6) list_wgtman_pane

0x8dab,	// (0x00017bff) wgtman_btn_pane_g1_ParamLimits

0x8dab,	// (0x00017bff) wgtman_btn_pane_g1

0x8dd7,	// (0x00017c2b) wgtman_btn_pane_t1_ParamLimits

0x8dd7,	// (0x00017c2b) wgtman_btn_pane_t1

0xee8c,	// (0x0001dce0) wgtman_btn_pane_t2_ParamLimits

0xee8c,	// (0x0001dce0) wgtman_btn_pane_t2

0x0001,

0xfecf,	// (0x0001ed23) wgtman_btn_pane_t_ParamLimits

0xfecf,	// (0x0001ed23) wgtman_btn_pane_t

0x8e14,	// (0x00017c68) listrow_wgtman_pane_ParamLimits

0x8e14,	// (0x00017c68) listrow_wgtman_pane

0x8e27,	// (0x00017c7b) listrow_wgtman_pane_g1

0x8e34,	// (0x00017c88) listrow_wgtman_pane_g2

0x0001,

0xfed4,	// (0x0001ed28) listrow_wgtman_pane_g

0x8e52,	// (0x00017ca6) listrow_wgtman_pane_t1

0x8e6a,	// (0x00017cbe) listrow_wgtman_pane_t2

0x0001,

0xfed9,	// (0x0001ed2d) listrow_wgtman_pane_t

0x8e90,	// (0x00017ce4) wait_bar_pane_cp09

0xeea3,	// (0x0001dcf7) main_calllock_btn_pane

0xeead,	// (0x0001dd01) main_calllock_pane_g1

0x9528,	// (0x0001837c) bg_button_pane_cp17

0xeeb8,	// (0x0001dd0c) main_calllock_btn_pane_g1

0xeec1,	// (0x0001dd15) main_calllock_btn_pane_t1

0x9528,	// (0x0001837c) main_dialer3_pane

0x9528,	// (0x0001837c) main_fmrd2_pane

0xc2cf,	// (0x0001b123) main_fs_bigclock_unlock_btn_pane_g1

0xeed8,	// (0x0001dd2c) main_fs_bigclock_unlock_btn_pane_t1

0x8ea2,	// (0x00017cf6) area_fmrd2_info_pane_ParamLimits

0x8ea2,	// (0x00017cf6) area_fmrd2_info_pane

0x8eb3,	// (0x00017d07) area_fmrd2_visual_pane_ParamLimits

0x8eb3,	// (0x00017d07) area_fmrd2_visual_pane

0x8ec1,	// (0x00017d15) fmrd2_indi_pane_ParamLimits

0x8ec1,	// (0x00017d15) fmrd2_indi_pane

0x8ece,	// (0x00017d22) area_fmrd2_visual_pane_g1

0x8ed6,	// (0x00017d2a) area_fmrd2_visual_pane_t1

0x8ee6,	// (0x00017d3a) area_fmrd2_visual_pane_t2

0x8ef6,	// (0x00017d4a) area_fmrd2_visual_pane_t3

0x0002,

0xfee3,	// (0x0001ed37) area_fmrd2_visual_pane_t

0x8f06,	// (0x00017d5a) area_fmrd2_info_pane_g1

0x8f0e,	// (0x00017d62) area_fmrd2_info_pane_t1

0x8f1e,	// (0x00017d72) area_fmrd2_info_pane_t2

0x8f2e,	// (0x00017d82) area_fmrd2_info_pane_t3

0x8f3e,	// (0x00017d92) area_fmrd2_info_pane_t4

0x0003,

0xfeea,	// (0x0001ed3e) area_fmrd2_info_pane_t

0x8f4c,	// (0x00017da0) fmrd2_indi_pane_t1

0x8f5c,	// (0x00017db0) fmrd2_indi_pane_t2

0x8f6c,	// (0x00017dc0) fmrd2_indi_pane_t3

0x0002,

0xfef3,	// (0x0001ed47) fmrd2_indi_pane_t

0xe0c8,	// (0x0001cf1c) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe0c8,	// (0x0001cf1c) list_single_fs_bigclock_indicator_pane_g5

0xe16f,	// (0x0001cfc3) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe16f,	// (0x0001cfc3) list_single_fs_bigclock_indicator_pane_t5

0x86eb,	// (0x0001753f) aid_cell_bcale_month_pane_ParamLimits

0x86eb,	// (0x0001753f) aid_cell_bcale_month_pane

0x8709,	// (0x0001755d) bcale_month_pane_ParamLimits

0x8709,	// (0x0001755d) bcale_month_pane

0x872d,	// (0x00017581) bcale_preview_pane_ParamLimits

0x872d,	// (0x00017581) bcale_preview_pane

0xec53,	// (0x0001daa7) list_single_fs_bigclock_pane_t1_ParamLimits

0xec72,	// (0x0001dac6) list_single_fs_bigclock_pane_t2_ParamLimits

0xec72,	// (0x0001dac6) list_single_fs_bigclock_pane_t2

0x0001,

0xfe75,	// (0x0001ecc9) list_single_fs_bigclock_pane_t_ParamLimits

0xfe75,	// (0x0001ecc9) list_single_fs_bigclock_pane_t

0xeed0,	// (0x0001dd24) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfede,	// (0x0001ed32) main_fs_bigclock_unlock_btn_pane_g

0x8f7c,	// (0x00017dd0) aid_dia3_key_size_ParamLimits

0x8f7c,	// (0x00017dd0) aid_dia3_key_size

0x8f8b,	// (0x00017ddf) aid_dia3_listrow_size_ParamLimits

0x8f8b,	// (0x00017ddf) aid_dia3_listrow_size

0x8fa0,	// (0x00017df4) dia3_keypad_fun_pane_ParamLimits

0x8fa0,	// (0x00017df4) dia3_keypad_fun_pane

0x8fbc,	// (0x00017e10) dia3_keypad_num_pane_ParamLimits

0x8fbc,	// (0x00017e10) dia3_keypad_num_pane

0x8fd7,	// (0x00017e2b) dia3_listscroll_pane_ParamLimits

0x8fd7,	// (0x00017e2b) dia3_listscroll_pane

0x8fea,	// (0x00017e3e) dia3_numentry_pane_ParamLimits

0x8fea,	// (0x00017e3e) dia3_numentry_pane

0xeee6,	// (0x0001dd3a) dia3_list_pane

0xeef1,	// (0x0001dd45) scroll_pane_cp12

0x9528,	// (0x0001837c) bg_dia3_numentry_pane

0x8ffe,	// (0x00017e52) dia3_numentry_pane_t1

0x900d,	// (0x00017e61) cell_dia3_key_num_pane

0x9015,	// (0x00017e69) cell_dia3_key0_fun_pane_ParamLimits

0x9015,	// (0x00017e69) cell_dia3_key0_fun_pane

0x9029,	// (0x00017e7d) cell_dia3_key1_fun_pane_ParamLimits

0x9029,	// (0x00017e7d) cell_dia3_key1_fun_pane

0x9041,	// (0x00017e95) dia3_listrow_pane

0xddd7,	// (0x0001cc2b) bg_dia3_numentry_pane_g1

0x9528,	// (0x0001837c) bg_button_pane_cp21

0xeefc,	// (0x0001dd50) cell_dia3_key_num_pane_t1

0xef0a,	// (0x0001dd5e) cell_dia3_key_num_pane_t2

0xef19,	// (0x0001dd6d) cell_dia3_key_num_pane_t3

0xef28,	// (0x0001dd7c) cell_dia3_key_num_pane_t4

0x0003,

0xfefa,	// (0x0001ed4e) cell_dia3_key_num_pane_t

0x9528,	// (0x0001837c) bg_button_pane_cp19

0x9053,	// (0x00017ea7) cell_dia3_key0_fun_pane_g1

0x9528,	// (0x0001837c) bg_button_pane_cp20

0x905b,	// (0x00017eaf) cell_dia3_key1_fun_pane_g1

0x9063,	// (0x00017eb7) area_left_week_number_pane

0x906f,	// (0x00017ec3) area_top_day_name_pane

0x9082,	// (0x00017ed6) frame_month_view_pane

0xef37,	// (0x0001dd8b) grid_month_view_pane

0x9095,	// (0x00017ee9) cell_top_day_name_pane_ParamLimits

0x9095,	// (0x00017ee9) cell_top_day_name_pane

0x90c2,	// (0x00017f16) cell_area_left_week_number_pane_ParamLimits

0x90c2,	// (0x00017f16) cell_area_left_week_number_pane

0x90d6,	// (0x00017f2a) cell_month_view_pane_ParamLimits

0x90d6,	// (0x00017f2a) cell_month_view_pane

0xef45,	// (0x0001dd99) frm_month_g1

0x9103,	// (0x00017f57) frm_month_g2

0x9116,	// (0x00017f6a) frm_month_g3

0x9129,	// (0x00017f7d) frm_month_g4

0x913c,	// (0x00017f90) frm_month_g5

0x914f,	// (0x00017fa3) frm_month_g6

0x9162,	// (0x00017fb6) frm_month_g7

0xef52,	// (0x0001dda6) frm_month_g8

0x9175,	// (0x00017fc9) frm_month_g9

0x9185,	// (0x00017fd9) frm_month_g10

0x9195,	// (0x00017fe9) frm_month_g11

0x91a5,	// (0x00017ff9) frm_month_g12

0x91b7,	// (0x0001800b) frm_month_g13

0x91c9,	// (0x0001801d) frm_month_g14

0x91dd,	// (0x00018031) frm_month_g15

0x91f1,	// (0x00018045) frm_month_g16

0x000f,

0xff03,	// (0x0001ed57) frm_month_g

0xef5f,	// (0x0001ddb3) cell_top_day_name_pane_t1

0x9205,	// (0x00018059) cell_area_left_week_number_pane_g1

0x9211,	// (0x00018065) cell_area_left_week_number_pane_t1

0xc52f,	// (0x0001b383) cell_month_view_pane_g1

0x9224,	// (0x00018078) cell_month_view_pane_t1

0x9528,	// (0x0001837c) main_fps_pane

0xe3a1,	// (0x0001d1f5) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe3a1,	// (0x0001d1f5) cmail_ddmenu_btn02_pane_cp1

0xe3bd,	// (0x0001d211) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe3bd,	// (0x0001d211) cmail_ddmenu_btn02_pane_cp2

0x8958,	// (0x000177ac) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x8958,	// (0x000177ac) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe28,	// (0x0001ec7c) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe28,	// (0x0001ec7c) cmail_ddmenu_btn02_pane_g

0x8976,	// (0x000177ca) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x8976,	// (0x000177ca) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe2d,	// (0x0001ec81) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe2d,	// (0x0001ec81) cmail_ddmenu_btn02_pane_t

0x9237,	// (0x0001808b) fps_text_pane_ParamLimits

0x9237,	// (0x0001808b) fps_text_pane

0x924e,	// (0x000180a2) main_fps_pane_g1_ParamLimits

0x924e,	// (0x000180a2) main_fps_pane_g1

0x9268,	// (0x000180bc) wait_bar_pane_cp010_ParamLimits

0x9268,	// (0x000180bc) wait_bar_pane_cp010

0x9279,	// (0x000180cd) fps_text_pane_t1_ParamLimits

0x9279,	// (0x000180cd) fps_text_pane_t1

0xe97a,	// (0x0001d7ce) cam4_image_uncrop_pane_g1

0xe983,	// (0x0001d7d7) cam4_image_uncrop_pane_g2

0x5cc3,	// (0x00014b17) cam4_image_uncrop_pane_g3

0x5ccc,	// (0x00014b20) cam4_image_uncrop_pane_g4

0x0003,

0xf8f4,	// (0x0001e748) cam4_image_uncrop_pane_g

0x9041,	// (0x00017e95) dia3_listrow_pane_ParamLimits

0x9528,	// (0x0001837c) main_phob2_pane

0x84c8,	// (0x0001731c) cell_tport_appsw_pane_cp02_ParamLimits

0x84c8,	// (0x0001731c) cell_tport_appsw_pane_cp02

0x84dc,	// (0x00017330) cell_tport_appsw_pane_cp03_ParamLimits

0x84dc,	// (0x00017330) cell_tport_appsw_pane_cp03

0x9528,	// (0x0001837c) phob2_contact_card_pane

0x9528,	// (0x0001837c) phob2_listscroll_pane

0xef72,	// (0x0001ddc6) phob2_list_pane

0xef7a,	// (0x0001ddce) scroll_pane_cp034

0x9291,	// (0x000180e5) phob2_cc_data_pane_ParamLimits

0x9291,	// (0x000180e5) phob2_cc_data_pane

0x92b0,	// (0x00018104) phob2_cc_listscroll_pane_ParamLimits

0x92b0,	// (0x00018104) phob2_cc_listscroll_pane

0x92ce,	// (0x00018122) list_double_large_graphic_phob2_pane_ParamLimits

0x92ce,	// (0x00018122) list_double_large_graphic_phob2_pane

0x92e1,	// (0x00018135) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x92e1,	// (0x00018135) list_double_large_graphic_phob2_pane_g1

0x92f7,	// (0x0001814b) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x92f7,	// (0x0001814b) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff24,	// (0x0001ed78) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff24,	// (0x0001ed78) list_double_large_graphic_phob2_pane_g

0x9303,	// (0x00018157) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x9303,	// (0x00018157) list_double_large_graphic_phob2_pane_t1

0x9319,	// (0x0001816d) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x9319,	// (0x0001816d) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff29,	// (0x0001ed7d) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff29,	// (0x0001ed7d) list_double_large_graphic_phob2_pane_t

0x9528,	// (0x0001837c) list_highlight_pane_cp024

0xef82,	// (0x0001ddd6) phob2_cc_button_pane

0x932e,	// (0x00018182) phob2_cc_data_pane_g1_ParamLimits

0x932e,	// (0x00018182) phob2_cc_data_pane_g1

0x9343,	// (0x00018197) phob2_cc_data_pane_g2_ParamLimits

0x9343,	// (0x00018197) phob2_cc_data_pane_g2

0x0001,

0xff2e,	// (0x0001ed82) phob2_cc_data_pane_g_ParamLimits

0xff2e,	// (0x0001ed82) phob2_cc_data_pane_g

0x9355,	// (0x000181a9) phob2_cc_data_pane_t1_ParamLimits

0x9355,	// (0x000181a9) phob2_cc_data_pane_t1

0x936d,	// (0x000181c1) phob2_cc_data_pane_t2_ParamLimits

0x936d,	// (0x000181c1) phob2_cc_data_pane_t2

0x9385,	// (0x000181d9) phob2_cc_data_pane_t3_ParamLimits

0x9385,	// (0x000181d9) phob2_cc_data_pane_t3

0x0002,

0xff33,	// (0x0001ed87) phob2_cc_data_pane_t_ParamLimits

0xff33,	// (0x0001ed87) phob2_cc_data_pane_t

0xef8a,	// (0x0001ddde) phob2_cc_list_pane_ParamLimits

0xef8a,	// (0x0001ddde) phob2_cc_list_pane

0xd4c9,	// (0x0001c31d) scroll_pane_cp035_ParamLimits

0xd4c9,	// (0x0001c31d) scroll_pane_cp035

0x9598,	// (0x000183ec) bg_button_pane_cp033

0xef96,	// (0x0001ddea) phob2_cc_button_pane_g1

0xefa2,	// (0x0001ddf6) phob2_cc_button_pane_t1

0xefb7,	// (0x0001de0b) phob2_cc_button_pane_t2

0x0001,

0xff3a,	// (0x0001ed8e) phob2_cc_button_pane_t

0x939d,	// (0x000181f1) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x939d,	// (0x000181f1) list_double_large_graphic_phob2_cc_pane

0x93b0,	// (0x00018204) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x93b0,	// (0x00018204) list_double_large_graphic_phob2_cc_pane_g1

0x93bc,	// (0x00018210) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x93bc,	// (0x00018210) list_double_large_graphic_phob2_cc_pane_g2

0x93c8,	// (0x0001821c) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x93c8,	// (0x0001821c) list_double_large_graphic_phob2_cc_pane_g3

0x93d4,	// (0x00018228) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x93d4,	// (0x00018228) list_double_large_graphic_phob2_cc_pane_g4

0x93e0,	// (0x00018234) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x93e0,	// (0x00018234) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff3f,	// (0x0001ed93) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff3f,	// (0x0001ed93) list_double_large_graphic_phob2_cc_pane_g

0x93ec,	// (0x00018240) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x93ec,	// (0x00018240) list_double_large_graphic_phob2_cc_pane_t1

0x9415,	// (0x00018269) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x9415,	// (0x00018269) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff4a,	// (0x0001ed9e) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff4a,	// (0x0001ed9e) list_double_large_graphic_phob2_cc_pane_t

0xefc9,	// (0x0001de1d) list_highlight_pane_cp025_ParamLimits

0xefc9,	// (0x0001de1d) list_highlight_pane_cp025

0x9598,	// (0x000183ec) bg_button_pane_cp033_ParamLimits

0xef96,	// (0x0001ddea) phob2_cc_button_pane_g1_ParamLimits

0xefa2,	// (0x0001ddf6) phob2_cc_button_pane_t1_ParamLimits

0xefb7,	// (0x0001de0b) phob2_cc_button_pane_t2_ParamLimits

0xff3a,	// (0x0001ed8e) phob2_cc_button_pane_t_ParamLimits

0x0480,	// (0x0000f2d4) popup_wgtman_window

0xd295,	// (0x0001c0e9) scroll_pane_cp038

0x8d8d,	// (0x00017be1) wgtman_btn_pane_cp_01_ParamLimits

0x8d8d,	// (0x00017be1) wgtman_btn_pane_cp_01

0xefd7,	// (0x0001de2b) wgtman_content_pane

0xefe0,	// (0x0001de34) wgtman_heading_pane

0x9528,	// (0x0001837c) bg_heading_pane_cp02

0xefe9,	// (0x0001de3d) wgtman_heading_pane_g1

0xeff1,	// (0x0001de45) wgtman_heading_pane_t1

0xefff,	// (0x0001de53) scroll_pane_cp036

0xf007,	// (0x0001de5b) wgtman_list_pane

0xf00f,	// (0x0001de63) wgtman_list_pane_t1_ParamLimits

0xf00f,	// (0x0001de63) wgtman_list_pane_t1

0xcfc6,	// (0x0001be1a) cam4_grid_pane

0x6a31,	// (0x00015885) bg_button_pane_cp015_ParamLimits

0x6a45,	// (0x00015899) bg_button_pane_cp016_ParamLimits

0x6a58,	// (0x000158ac) bg_button_pane_cp017_ParamLimits

0x6ab0,	// (0x00015904) popup_vitu2_query_window_g3_ParamLimits

0x6ab0,	// (0x00015904) popup_vitu2_query_window_g3

0x6b6d,	// (0x000159c1) popup_vitu2_query_window_t6_ParamLimits

0x6b6d,	// (0x000159c1) popup_vitu2_query_window_t6

0x6b98,	// (0x000159ec) popup_vitu2_query_window_t7_ParamLimits

0x6b98,	// (0x000159ec) popup_vitu2_query_window_t7

0xe97a,	// (0x0001d7ce) cam4_grid_pane_g1

0xe983,	// (0x0001d7d7) cam4_grid_pane_g2

0xf02b,	// (0x0001de7f) cam4_grid_pane_g3

0xf034,	// (0x0001de88) cam4_grid_pane_g4

0x0003,

0xff4f,	// (0x0001eda3) cam4_grid_pane_g

0x14b1,	// (0x00010305) aid_placing_vt_slider_lsc_ParamLimits

0x17ae,	// (0x00010602) vidtel_button_pane_ParamLimits

0x17ae,	// (0x00010602) vidtel_button_pane

0xf03f,	// (0x0001de93) bg_button_pane_cp034

0x943e,	// (0x00018292) vidtel_button_pane_g1

0xf049,	// (0x0001de9d) vidtel_button_pane_t1

0xd3d2,	// (0x0001c226) aid_size_vtel_slider_touch

0xd4c9,	// (0x0001c31d) scroll_pane_cp039

0xde15,	// (0x0001cc69) ncim_query_button_pane_cp01_ParamLimits

0xde34,	// (0x0001cc88) ncimui_query_pane_g1_ParamLimits

0x9598,	// (0x000183ec) input_focus_pane_cp012_ParamLimits

0xde59,	// (0x0001ccad) ncim_query_entry_pane_t1_ParamLimits

0xd4c9,	// (0x0001c31d) scroll_pane_cp039_ParamLimits

0x298e,	// (0x000117e2) navi_pane_bcale_mc_g1

0x2996,	// (0x000117ea) navi_pane_bcale_mc_t1

0xe406,	// (0x0001d25a) main_sp_fs_email_pane_g1

0xe412,	// (0x0001d266) main_sp_fs_email_pane_g2

0x0001,

0xfceb,	// (0x0001eb3f) main_sp_fs_email_pane_g

0xe850,	// (0x0001d6a4) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe850,	// (0x0001d6a4) list_single_cale_mrui_row_pane_g3

0x899e,	// (0x000177f2) list_single_recal_day_pane_g5_event_pane

0xeada,	// (0x0001d92e) list_single_recal_day_pane_g7

0xf057,	// (0x0001deab) list_recal_day_event_pane_cp01

0xf060,	// (0x0001deb4) list_recal_vselct_arw_lo_pane_cp01

0xf068,	// (0x0001debc) list_recal_vselct_arw_up_pane_cp01

0xf070,	// (0x0001dec4) list_recal_vselct_pane_cp01

0xd41e,	// (0x0001c272) list_recal_day_event_pane_cp01_g1

0xf07a,	// (0x0001dece) list_recal_day_event_pane_cp01_t1

0xeae2,	// (0x0001d936) list_single_recal_day_pane_t1_ParamLimits

0xeaf4,	// (0x0001d948) list_single_recal_day_pane_t2_ParamLimits

0xfe3d,	// (0x0001ec91) list_single_recal_day_pane_t_ParamLimits

0x9c14,	// (0x00018a68) bg_notes_pane_ParamLimits

0x9cde,	// (0x00018b32) list_notes_pane_ParamLimits

0x07b4,	// (0x0000f608) scroll_pane_cp06_ParamLimits

0x9d1a,	// (0x00018b6e) main_notes_pane_ParamLimits

0x9528,	// (0x0001837c) main_welc_pane

0x9446,	// (0x0001829a) main_welc_body_pane_ParamLimits

0x9446,	// (0x0001829a) main_welc_body_pane

0x9463,	// (0x000182b7) main_welc_opti_pane_ParamLimits

0x9463,	// (0x000182b7) main_welc_opti_pane

0x94ac,	// (0x00018300) main_welc_pane_t1_ParamLimits

0x94ac,	// (0x00018300) main_welc_pane_t1

0x94ce,	// (0x00018322) main_welc_body_row_pane_ParamLimits

0x94ce,	// (0x00018322) main_welc_body_row_pane

0xd1e5,	// (0x0001c039) main_welc_opti_row_pane_ParamLimits

0xd1e5,	// (0x0001c039) main_welc_opti_row_pane

0xf088,	// (0x0001dedc) main_welc_opti_row_pane_g1

0xf090,	// (0x0001dee4) main_welc_opti_row_pane_t1

0xf0a0,	// (0x0001def4) main_welc_body_row_pane_t1

0xed59,	// (0x0001dbad) popup_notif_wgt_heading_pane

0xed73,	// (0x0001dbc7) aid_size_list_notif_wgt_del_ParamLimits

0xed80,	// (0x0001dbd4) list_notif_wgt_row_pane_g1_ParamLimits

0xed8c,	// (0x0001dbe0) list_notif_wgt_row_pane_g2_ParamLimits

0xed98,	// (0x0001dbec) list_notif_wgt_row_pane_g3_ParamLimits

0xfea4,	// (0x0001ecf8) list_notif_wgt_row_pane_g_ParamLimits

0xeda5,	// (0x0001dbf9) list_notif_wgt_row_pane_t1_ParamLimits

0xedba,	// (0x0001dc0e) list_notif_wgt_row_pane_t2_ParamLimits

0xedcc,	// (0x0001dc20) list_notif_wgt_row_pane_t3_ParamLimits

0xfeab,	// (0x0001ecff) list_notif_wgt_row_pane_t_ParamLimits

0x8e27,	// (0x00017c7b) listrow_wgtman_pane_g1_ParamLimits

0x8e34,	// (0x00017c88) listrow_wgtman_pane_g2_ParamLimits

0xfed4,	// (0x0001ed28) listrow_wgtman_pane_g_ParamLimits

0x8e52,	// (0x00017ca6) listrow_wgtman_pane_t1_ParamLimits

0x8e6a,	// (0x00017cbe) listrow_wgtman_pane_t2_ParamLimits

0xfed9,	// (0x0001ed2d) listrow_wgtman_pane_t_ParamLimits

0x8e90,	// (0x00017ce4) wait_bar_pane_cp09_ParamLimits

0x9528,	// (0x0001837c) bg_popup_heading_pane_cp02

0xf0af,	// (0x0001df03) popup_notif_wgt_heading_pane_g1

0xf0b7,	// (0x0001df0b) popup_notif_wgt_heading_pane_t1

0x9528,	// (0x0001837c) main_vids_pane

0x9528,	// (0x0001837c) vids_listscroll_pane

0x94e4,	// (0x00018338) scroll_pane_cp040

0x9528,	// (0x0001837c) vids_list_pane

0x94ef,	// (0x00018343) vids_list_double_pane_ParamLimits

0x94ef,	// (0x00018343) vids_list_double_pane

0x9500,	// (0x00018354) vids_list_double_pane_g1

0x9509,	// (0x0001835d) vids_list_double_pane_t1

0x9518,	// (0x0001836c) vids_list_double_pane_t2

0x0001,

0xff5d,	// (0x0001edb1) vids_list_double_pane_t

0x9598,	// (0x000183ec) main_ncimui_pane_ParamLimits

0x77a4,	// (0x000165f8) main_ncimui_pane_g1_ParamLimits

0x77b0,	// (0x00016604) main_ncimui_pane_g2_ParamLimits

0x77b0,	// (0x00016604) main_ncimui_pane_g2

0x0001,

0xfbf0,	// (0x0001ea44) main_ncimui_pane_g_ParamLimits

0xfbf0,	// (0x0001ea44) main_ncimui_pane_g

0x9482,	// (0x000182d6) main_welc_pane_g1_ParamLimits

0x9482,	// (0x000182d6) main_welc_pane_g1

0x9497,	// (0x000182eb) main_welc_pane_g2_ParamLimits

0x9497,	// (0x000182eb) main_welc_pane_g2

0x0001,

0xff58,	// (0x0001edac) main_welc_pane_g_ParamLimits

0xff58,	// (0x0001edac) main_welc_pane_g

0x9c14,	// (0x00018a68) listscroll_mce_pane_ParamLimits

0x2a6c,	// (0x000118c0) wait_bar_pane_cp10

0xbda6,	// (0x0001abfa) main_cale_day_pane_ParamLimits

0xbda6,	// (0x0001abfa) main_cale_week_pane_ParamLimits

0x9c14,	// (0x00018a68) main_messa_pane_ParamLimits

0x4fce,	// (0x00013e22) main_clock2_btn_pane_ParamLimits

0x4fce,	// (0x00013e22) main_clock2_btn_pane

0xc72b,	// (0x0001b57f) main_clock2_btn_pane_cp01_ParamLimits

0xc72b,	// (0x0001b57f) main_clock2_btn_pane_cp01

0xe7dc,	// (0x0001d630) list_cale_mrui_pane_ParamLimits

0xee10,	// (0x0001dc64) main_cf0_pane_g2

0x0001,

0xfeb2,	// (0x0001ed06) main_cf0_pane_g

0x9063,	// (0x00017eb7) area_left_week_number_pane_ParamLimits

0x906f,	// (0x00017ec3) area_top_day_name_pane_ParamLimits

0x9082,	// (0x00017ed6) frame_month_view_pane_ParamLimits

0xef37,	// (0x0001dd8b) grid_month_view_pane_ParamLimits

0xef45,	// (0x0001dd99) frm_month_g1_ParamLimits

0x9103,	// (0x00017f57) frm_month_g2_ParamLimits

0x9116,	// (0x00017f6a) frm_month_g3_ParamLimits

0x9129,	// (0x00017f7d) frm_month_g4_ParamLimits

0x913c,	// (0x00017f90) frm_month_g5_ParamLimits

0x914f,	// (0x00017fa3) frm_month_g6_ParamLimits

0x9162,	// (0x00017fb6) frm_month_g7_ParamLimits

0xef52,	// (0x0001dda6) frm_month_g8_ParamLimits

0x9175,	// (0x00017fc9) frm_month_g9_ParamLimits

0x9185,	// (0x00017fd9) frm_month_g10_ParamLimits

0x9195,	// (0x00017fe9) frm_month_g11_ParamLimits

0x91a5,	// (0x00017ff9) frm_month_g12_ParamLimits

0x91b7,	// (0x0001800b) frm_month_g13_ParamLimits

0x91c9,	// (0x0001801d) frm_month_g14_ParamLimits

0x91dd,	// (0x00018031) frm_month_g15_ParamLimits

0x91f1,	// (0x00018045) frm_month_g16_ParamLimits

0xff03,	// (0x0001ed57) frm_month_g_ParamLimits

0xef5f,	// (0x0001ddb3) cell_top_day_name_pane_t1_ParamLimits

0x9205,	// (0x00018059) cell_area_left_week_number_pane_g1_ParamLimits

0x9211,	// (0x00018065) cell_area_left_week_number_pane_t1_ParamLimits

0xc52f,	// (0x0001b383) cell_month_view_pane_g1_ParamLimits

0x9224,	// (0x00018078) cell_month_view_pane_t1_ParamLimits

0x9c0c,	// (0x00018a60) main_clock2_btn_pane_g1

0xf0c5,	// (0x0001df19) main_clock2_btn_pane_t1

0x9598,	// (0x000183ec) listscroll_cmail_pane_ParamLimits

0xe406,	// (0x0001d25a) main_sp_fs_email_pane_g1_ParamLimits

0xe412,	// (0x0001d266) main_sp_fs_email_pane_g2_ParamLimits

0xfceb,	// (0x0001eb3f) main_sp_fs_email_pane_g_ParamLimits

0xea42,	// (0x0001d896) list_recal_day_pane_ParamLimits

0xea53,	// (0x0001d8a7) mian_recal_day_pane_t1
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
	};

} // end of namespace AknLayoutScalable_Elaf_pnl4_apps_nhd4_lsc_tch_Normal
